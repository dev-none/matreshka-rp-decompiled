// Function: mz_zip_reader_get_num_files
// Entry: 00113818

undefined4 mz_zip_reader_get_num_files(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


