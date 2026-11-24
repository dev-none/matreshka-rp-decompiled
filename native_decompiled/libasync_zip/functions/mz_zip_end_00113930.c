// Function: mz_zip_end
// Entry: 00113930

undefined8 mz_zip_end(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) - 2U < 2) {
      uVar1 = FUN_0010fb20(param_1,1);
      return uVar1;
    }
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar1 = FUN_0010babc(param_1,1);
      return uVar1;
    }
  }
  return 0;
}


