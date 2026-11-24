// Function: mz_zip_read_archive_data
// Entry: 00113868

undefined8 mz_zip_read_archive_data(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (((param_3 != 0) && (*(long *)(param_1 + 0x68) != 0)) &&
       (*(code **)(param_1 + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00113884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x60));
      return uVar1;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0x18;
  }
  return 0;
}


