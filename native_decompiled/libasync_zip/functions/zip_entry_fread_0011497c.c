// Function: zip_entry_fread
// Entry: 0011497c

void zip_entry_fread(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_4a0 [60];
  uint local_464;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    memset(auStack_4a0,0,0x458);
    if ((*(int *)(param_1 + 0x14) == 1) && (uVar6 = *(ulong *)(param_1 + 0x78), -1 < (long)uVar6)) {
      plVar5 = *(long **)(param_1 + 0x68);
      if (((plVar5 == (long *)0x0) || (*(uint *)(param_1 + 0x10) <= (uint)uVar6)) || (*plVar5 == 0))
      {
        *(undefined4 *)(param_1 + 0x1c) = 0x18;
      }
      else {
        lVar4 = *plVar5 + (ulong)*(uint *)(plVar5[4] + (uVar6 & 0xffffffff) * 4);
        if (((*(ushort *)(lVar4 + 0x1c) != 0) &&
            (*(char *)(lVar4 + (ulong)*(ushort *)(lVar4 + 0x1c) + 0x2d) == '/')) ||
           ((*(byte *)(lVar4 + 0x26) >> 4 & 1) != 0)) {
          uVar3 = 0xffffffef;
          goto LAB_00114abc;
        }
      }
      iVar2 = mz_zip_reader_extract_to_file(param_1,uVar6 & 0xffffffff,param_2,0);
      if (iVar2 != 0) {
        plVar5 = *(long **)(param_1 + 0x68);
        if ((plVar5 == (long *)0x0) || (*(uint *)(param_1 + 0x10) <= (uint)uVar6)) {
          lVar4 = 0;
        }
        else {
          lVar4 = *plVar5 + (ulong)*(uint *)(plVar5[4] + (uVar6 & 0xffffffff) * 4);
        }
        iVar2 = FUN_0010f008(param_1,uVar6 & 0xffffffff,lVar4,auStack_4a0,0);
        if (iVar2 != 0) {
          if ((local_464 < 0x10000) || (iVar2 = chmod(param_2,local_464 >> 0x10), -1 < iVar2)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0xffffffec;
          }
          goto LAB_00114abc;
        }
      }
      uVar3 = 0xffffffed;
    }
    else {
      uVar3 = 0xfffffffd;
    }
  }
LAB_00114abc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


