// Function: mz_zip_get_mode
// Entry: 00113738

undefined4 mz_zip_get_mode(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}


