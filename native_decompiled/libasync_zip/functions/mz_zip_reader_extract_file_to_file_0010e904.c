// Function: mz_zip_reader_extract_file_to_file
// Entry: 0010e904

void mz_zip_reader_extract_file_to_file
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = mz_zip_reader_locate_file_v2(param_1,param_2,0,param_4,&local_3c);
  if (iVar2 != 0) {
    mz_zip_reader_extract_to_file(param_1,local_3c,param_3,param_4 & 0xffffffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


