// Function: mz_zip_reader_extract_file_iter_new
// Entry: 0010e1d4

void mz_zip_reader_extract_file_iter_new(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = mz_zip_reader_locate_file_v2(param_1,param_2,0,param_3,&local_3c);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = mz_zip_reader_extract_iter_new(param_1,local_3c,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


