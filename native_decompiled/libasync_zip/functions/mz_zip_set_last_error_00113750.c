// Function: mz_zip_set_last_error
// Entry: 00113750

undefined4 mz_zip_set_last_error(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    return uVar1;
  }
  return 0x18;
}


