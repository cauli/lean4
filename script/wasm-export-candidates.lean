/-
Copyright (c) 2026 cauli. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/
module

import Lean
import Lean.Shell

/-! Derive interpreter entry points from the exact library being linked. -/

open Lean

public unsafe def main (args : List String) : IO Unit := do
  let [output] := args | throw <| IO.userError "usage: wasm-export-candidates.lean <output.json>"
  initSearchPath (← findSysroot)
  enableInitializersExecution
  let env ← importModules #[{ module := `Lean }, { module := `Lean.Shell }] {}
    (loadExts := true)
  let mut candidates : Array String := #[]
  for (name, _) in env.constants.toList do
    let exported := getExportNameFor? env name
    if isExtern env name || exported.isSome || hasInitAttr env name then
      let stem := getSymbolStem env name
      candidates := candidates.push stem |>.push (mkMangledBoxedName stem)
      if let some exportName := exported then
        candidates := candidates.push exportName.toString
  IO.FS.writeFile output (toJson candidates).compress
