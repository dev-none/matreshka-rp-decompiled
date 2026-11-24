// Function: zip_entry_extract
// Entry: 00114af0

undefined4 zip_entry_extract(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x14) == 1) && (-1 < *(long *)(param_1 + 0x78))) {
    iVar1 = mz_zip_reader_extract_to_callback(param_1,*(long *)(param_1 + 0x78),param_2,param_3,0);
    uVar2 = 0xfffffff6;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffffd;
}


