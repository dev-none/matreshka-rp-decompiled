// Function: mz_zip_reader_extract_to_file
// Entry: 0010e768

void mz_zip_reader_extract_to_file(long param_1,uint param_2,char *param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  FILE *__stream;
  long lVar5;
  long *plVar6;
  utimbuf local_4c0;
  undefined1 auStack_4b0 [24];
  long local_498;
  int local_464;
  int local_45c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((param_1 == 0) || (plVar6 = *(long **)(param_1 + 0x68), plVar6 == (long *)0x0)) ||
     (*(uint *)(param_1 + 0x10) <= param_2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar6 + (ulong)*(uint *)(plVar6[4] + (ulong)param_2 * 4);
  }
  uVar4 = FUN_0010f008(param_1,param_2,lVar5,auStack_4b0,0);
  if ((int)uVar4 != 0) {
    if ((local_464 == 0) && (local_45c != 0)) {
      __stream = fopen(param_3,"wb");
      if (__stream == (FILE *)0x0) {
        uVar4 = 0;
        if (param_1 != 0) {
          *(undefined4 *)(param_1 + 0x1c) = 0x11;
        }
      }
      else {
        uVar2 = mz_zip_reader_extract_to_callback(param_1,param_2,FUN_0010e8ec,__stream,param_4);
        uVar4 = (ulong)uVar2;
        iVar3 = fclose(__stream);
        if (iVar3 == -1) {
          uVar4 = 0;
          if ((param_1 != 0) && (uVar2 != 0)) {
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x1c) = 0x15;
          }
        }
        else if ((uVar2 != 0) && (local_498 != 0x12a467f0)) {
          local_4c0.actime = local_498;
          local_4c0.modtime = local_498;
          utime(param_3,&local_4c0);
          uVar4 = 1;
        }
      }
    }
    else {
      uVar4 = 0;
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 6;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


