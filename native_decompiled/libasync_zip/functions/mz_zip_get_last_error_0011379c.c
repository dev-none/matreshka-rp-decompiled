// Function: mz_zip_get_last_error
// Entry: 0011379c

undefined4 mz_zip_get_last_error(long param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return uVar1;
  }
  return 0x18;
}


