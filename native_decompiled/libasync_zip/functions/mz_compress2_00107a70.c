// Function: mz_compress2
// Entry: 00107a70

void mz_compress2(long param_1,ulong *param_2,long param_3,ulong param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *__ptr;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong local_78;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_2;
  if ((uVar9 | param_4) >> 0x20 != 0) {
    uVar7 = 0xffffd8f0;
    goto LAB_00107c2c;
  }
  iVar5 = param_5;
  if (9 < param_5) {
    iVar5 = 10;
  }
  if (param_5 < 0) {
    iVar5 = 6;
  }
  uVar8 = *(uint *)(&DAT_00103c64 + (long)iVar5 * 4);
  __ptr = malloc(0x4df78);
  if (__ptr == (void *)0x0) {
    uVar7 = 0xfffffffc;
    goto LAB_00107c2c;
  }
  uVar6 = 0x6000;
  if (3 < param_5) {
    uVar6 = 0x2000;
  }
  uVar1 = 0x81000;
  if (param_5 != 0) {
    uVar1 = 0x1000;
  }
  tdefl_init(__ptr,0,0,uVar6 | uVar1 | uVar8);
  if (param_1 == 0) {
LAB_00107c1c:
    uVar7 = 0xfffffffe;
  }
  else {
    iVar5 = (int)uVar9;
    if (iVar5 == 0) {
LAB_00107c14:
      uVar7 = 0xfffffffb;
    }
    else {
      if (*(int *)((long)__ptr + 0x84) == 1) {
        uVar9 = 0;
      }
      else {
        local_78 = uVar9;
        local_70 = param_4;
        iVar4 = tdefl_compress(__ptr,param_3,&local_70,param_1,&local_78,4);
        if (iVar4 < 0) goto LAB_00107c1c;
        uVar9 = local_78 & 0xffffffff;
        if (iVar4 != 1) {
          if (iVar5 != (int)local_78) {
            param_1 = param_1 + uVar9;
            uVar8 = iVar5 - (int)local_78;
            param_3 = param_3 + (local_70 & 0xffffffff);
            uVar6 = (int)param_4 - (int)local_70;
            do {
              local_70 = (ulong)uVar6;
              local_78 = (ulong)uVar8;
              iVar5 = tdefl_compress(__ptr,param_3,&local_70,param_1,&local_78,4);
              if (iVar5 < 0) goto LAB_00107c1c;
              uVar9 = (local_78 & 0xffffffff) + uVar9;
              if (iVar5 == 1) goto LAB_00107b90;
              bVar3 = uVar8 != (uint)local_78;
              uVar8 = uVar8 - (uint)local_78;
              param_1 = param_1 + (local_78 & 0xffffffff);
              param_3 = param_3 + (local_70 & 0xffffffff);
              uVar6 = uVar6 - (int)local_70;
            } while (bVar3);
          }
          goto LAB_00107c14;
        }
      }
LAB_00107b90:
      uVar7 = 0;
      *param_2 = uVar9;
    }
  }
  free(__ptr);
LAB_00107c2c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


