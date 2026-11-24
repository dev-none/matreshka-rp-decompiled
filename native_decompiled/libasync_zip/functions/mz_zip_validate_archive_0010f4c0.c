// Function: mz_zip_validate_archive
// Entry: 0010f4c0

undefined8 mz_zip_validate_archive(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint local_4a4;
  undefined1 auStack_4a0 [88];
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
LAB_0010f610:
    uVar6 = 0;
    goto LAB_0010f614;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  if ((((lVar4 == 0) || (*(long *)(param_1 + 0x28) == 0)) || (*(long *)(param_1 + 0x30) == 0)) ||
     (*(long *)(param_1 + 0x48) == 0)) {
    uVar7 = 0x18;
LAB_0010f534:
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 100) == 0) {
      if ((0xffff < uVar1) || (*(int *)(param_1 + 4) != 0)) goto LAB_0010f550;
    }
    else if ((uVar1 == 0xffffffff) || (0xfffffffe < *(ulong *)(lVar4 + 8))) {
LAB_0010f550:
      uVar7 = 0x1d;
      goto LAB_0010f534;
    }
    if (uVar1 == 0) {
      uVar6 = 1;
    }
    else {
      uVar8 = 0;
      do {
        if ((param_2 >> 0xc & 1) != 0) {
          plVar5 = *(long **)(param_1 + 0x68);
          if (plVar5 == (long *)0x0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *plVar5 + (ulong)*(uint *)(plVar5[4] + uVar8 * 4);
          }
          iVar3 = FUN_0010f008(param_1,uVar8 & 0xffffffff,lVar4,auStack_4a0,0);
          if ((iVar3 == 0) ||
             (iVar3 = mz_zip_reader_locate_file_v2(param_1,auStack_448,0,0,&local_4a4), iVar3 == 0))
          goto LAB_0010f610;
          if (uVar8 != local_4a4) {
            *(undefined4 *)(param_1 + 0x1c) = 0x1e;
            goto LAB_0010f610;
          }
        }
        iVar3 = mz_zip_validate_file(param_1,uVar8 & 0xffffffff,param_2);
        if (iVar3 == 0) goto LAB_0010f610;
        uVar8 = uVar8 + 1;
        uVar6 = 1;
      } while (uVar8 < *(uint *)(param_1 + 0x10));
    }
  }
LAB_0010f614:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


