// Function: mz_zip_reader_extract_file_to_mem_no_alloc
// Entry: 0010d544

void mz_zip_reader_extract_file_to_mem_no_alloc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = mz_zip_reader_locate_file_v2(param_1,param_2,0,param_5,&local_5c);
  if (iVar2 != 0) {
    FUN_0010d0ec(param_1,local_5c,param_3,param_4,param_5,param_6,param_7,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


