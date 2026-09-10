module
import all Lean.Shell

/-! Check the persistent browser API's result codes and isolation with the native toolchain. -/

public def main : IO Unit := do
  let cases : Array (String × UInt32) := #[
    ("#eval 2 + 3", 0),
    ("example : False := by decide", 1),
    ("#check browserMissing\n#check Nat", 1),
    ("def browserLocal := 7\n#check browserLocal", 0),
    ("#check browserLocal", 1),
    ("#eval (List.range 5).reverse", 0),
    ("import Std\n#check Std.HashMap", 0),
    ("#eval 6 * 7", 0)
  ]
  for (code, expected) in cases do
    let actual ← Lean.wasmCompile code "browser-smoke.lean"
    unless actual == expected do
      throw <| IO.userError s!"browser API returned {actual}, expected {expected}: {code}"
  Lean.wasmReset
  unless (← Lean.wasmCompile "#check Nat") == 0 do
    throw <| IO.userError "browser API did not recover after reset"
