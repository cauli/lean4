module

/-! Exercise the CLI's UInt32 exit-code ABI, including heap boxing on 32-bit targets. -/

public def main (args : List String) : IO UInt32 := do
  let [value] := args | throw <| IO.userError "expected one exit code"
  let some code := value.toNat? | throw <| IO.userError "expected a numeric exit code"
  IO.println s!"exit {code}"
  return code.toUInt32
