// Function: mz_zip_reader_extract_file_to_cfile
// Entry: 0010ea64

void mz_zip_reader_extract_file_to_cfile
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  uint local_4a4;
  undefined1 auStack_4a0 [76];
  int local_454;
  int local_44c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = mz_zip_reader_locate_file_v2(param_1,param_2,0,param_4,&local_4a4);
  if ((int)uVar2 != 0) {
    if (((param_1 == 0) || (plVar4 = *(long **)(param_1 + 0x68), plVar4 == (long *)0x0)) ||
       (*(uint *)(param_1 + 0x10) <= local_4a4)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar4 + (ulong)*(uint *)(plVar4[4] + (ulong)local_4a4 * 4);
    }
    uVar2 = FUN_0010f008(param_1,(ulong)local_4a4,lVar3,auStack_4a0,0);
    if ((int)uVar2 != 0) {
      if ((local_454 == 0) && (local_44c != 0)) {
        uVar2 = mz_zip_reader_extract_to_callback
                          (param_1,local_4a4,FUN_0010e8ec,param_3,param_4 & 0xffffffff);
      }
      else {
        uVar2 = 0;
        if (param_1 != 0) {
          *(undefined4 *)(param_1 + 0x1c) = 6;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


