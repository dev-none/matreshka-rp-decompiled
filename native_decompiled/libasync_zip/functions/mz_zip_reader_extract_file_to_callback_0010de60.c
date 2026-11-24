// Function: mz_zip_reader_extract_file_to_callback
// Entry: 0010de60

void mz_zip_reader_extract_file_to_callback
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = mz_zip_reader_locate_file_v2(param_1,param_2,0,param_5,&local_4c);
  if (iVar2 != 0) {
    mz_zip_reader_extract_to_callback(param_1,local_4c,param_3,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


