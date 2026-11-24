// Function: mz_zip_reader_extract_file_to_heap
// Entry: 0010d818

void mz_zip_reader_extract_file_to_heap
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = mz_zip_reader_locate_file_v2(param_1,param_2,0,param_4,&local_3c);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    uVar3 = mz_zip_reader_extract_to_heap(param_1,local_3c,param_3,param_4 & 0xffffffff);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


