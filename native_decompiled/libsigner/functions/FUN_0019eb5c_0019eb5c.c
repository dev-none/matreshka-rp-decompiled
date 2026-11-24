// Function: FUN_0019eb5c
// Entry: 0019eb5c

undefined * FUN_0019eb5c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_001ccc8c(param_1,0x2e);
  puVar1 = &DAT_001027e0;
  if (lVar2 != param_1 && lVar2 != 0) {
    puVar1 = (undefined *)(lVar2 + 1);
  }
  return puVar1;
}


