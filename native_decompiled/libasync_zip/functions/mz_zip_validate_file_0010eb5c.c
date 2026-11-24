// Function: mz_zip_validate_file
// Entry: 0010eb5c

void mz_zip_validate_file(ulong *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  short *__s2;
  long lVar8;
  short *psVar9;
  undefined4 uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_520;
  ulong local_518;
  undefined8 local_510;
  int local_508;
  undefined8 uStack_504;
  ulong auStack_4fc [2];
  int local_4e8;
  byte local_4e2;
  int local_4da;
  uint local_4d6;
  uint local_4d2;
  ushort local_4ce;
  ushort local_4cc;
  undefined1 auStack_4c8 [22];
  ushort local_4b2;
  int local_4a8;
  ulong local_4a0;
  ulong local_498;
  long local_488;
  int local_47c;
  int local_478;
  int local_474;
  undefined1 auStack_470 [1024];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_510 = 0;
  uVar5 = 0;
  if (param_1 == (ulong *)0x0) goto LAB_0010ebcc;
  plVar12 = (long *)param_1[0xd];
  if ((((plVar12 == (long *)0x0) || (param_1[5] == 0)) || (param_1[6] == 0)) ||
     ((param_1[9] == 0 || ((uint)param_1[2] < (uint)param_2)))) {
    uVar10 = 0x18;
    goto LAB_0010ebc4;
  }
  if ((uint)param_1[2] == (uint)param_2) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar12 + (ulong)*(uint *)(plVar12[4] + (param_2 & 0xffffffff) * 4);
  }
  uVar5 = FUN_0010f008(param_1,param_2,lVar6,auStack_4c8,(long)&local_510 + 4);
  if ((((int)uVar5 == 0) || (uVar5 = 1, local_47c != 0)) || (local_498 == 0)) goto LAB_0010ebcc;
  if (local_478 == 0) {
    if ((local_4b2 & 0xfff7) == 0) {
      if (local_474 != 0) {
        lVar6 = (*(code *)param_1[9])(param_1[0xc],local_488,&local_4e8,0x1e);
        if (lVar6 != 0x1e) {
          uVar10 = 0x14;
          goto LAB_0010ec58;
        }
        if (local_4e8 == 0x4034b50) {
          local_518 = (ulong)local_4d6;
          uVar14 = (ulong)local_4ce;
          uVar13 = (ulong)local_4cc;
          local_520 = (ulong)local_4d2;
          uVar7 = __strlen_chk(auStack_470,0x400);
          if (uVar7 == uVar14) {
            lVar6 = local_488 + 0x1e + uVar14;
            lVar8 = lVar6 + uVar13;
            if (*param_1 < local_4a0 + lVar8) {
              uVar10 = 9;
              goto LAB_0010ebc4;
            }
            uVar2 = local_4ce;
            if (local_4ce <= local_4cc) {
              uVar2 = local_4cc;
            }
            if (uVar2 == 0) {
              __s2 = (short *)0x0;
LAB_0010ed84:
              if (local_4ce != 0) {
                uVar7 = (*(code *)param_1[9])(param_1[0xc],local_488 + 0x1e,__s2,uVar14);
                if (uVar7 == uVar14) {
                  iVar4 = memcmp(auStack_470,__s2,uVar14);
                  if (iVar4 == 0) goto LAB_0010edcc;
                  goto LAB_0010edc4;
                }
LAB_0010efa0:
                uVar10 = 0x14;
                goto LAB_0010efa4;
              }
LAB_0010edcc:
              if (local_4cc != 0) {
                if ((local_518 == 0xffffffff) || (local_520 == 0xffffffff)) {
                  uVar7 = (*(code *)param_1[9])(param_1[0xc],lVar6,__s2,uVar13);
                  psVar9 = __s2;
                  if (uVar7 != uVar13) goto LAB_0010efa0;
                  do {
                    uVar11 = (uint)uVar13;
                    if (uVar11 < 4) {
LAB_0010efe8:
                      uVar10 = 9;
                      goto LAB_0010efa4;
                    }
                    uVar1 = (ushort)psVar9[1] + 4;
                    if (uVar11 < uVar1) goto LAB_0010efe8;
                    if (*psVar9 == 1) {
                      if ((ushort)psVar9[1] < 0x10) goto LAB_0010efe8;
                      local_520 = *(ulong *)(psVar9 + 2);
                      local_518 = *(ulong *)(psVar9 + 6);
                      uVar13 = 1;
                      goto LAB_0010edf4;
                    }
                    uVar13 = (ulong)(uVar11 - uVar1);
                    psVar9 = (short *)((long)psVar9 + (ulong)uVar1);
                  } while (uVar11 - uVar1 != 0);
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0;
                }
              }
LAB_0010edf4:
              if ((((local_4e2 >> 3 & 1) == 0) || (local_518 != 0)) || (local_4da != 0)) {
                if (((local_4da == local_4a8) && (local_518 == local_4a0)) &&
                   (local_520 == local_498)) {
LAB_0010eef8:
                  (*(code *)param_1[6])(param_1[8],__s2);
                  if ((param_3 >> 0xd & 1) == 0) {
                    uVar5 = mz_zip_reader_extract_to_callback
                                      (param_1,param_2 & 0xffffffff,FUN_0010f3fc,&local_510,0);
                    if ((int)uVar5 == 0) goto LAB_0010ebcc;
                    if ((int)local_510 != local_4a8) {
                      uVar5 = 0;
                      *(undefined4 *)((long)param_1 + 0x1c) = 0x1e;
                      goto LAB_0010ebcc;
                    }
                  }
                  uVar5 = 1;
                  goto LAB_0010ebcc;
                }
LAB_0010edc4:
                uVar10 = 0x1e;
                goto LAB_0010efa4;
              }
              uVar11 = (uint)uVar13;
              if (*(int *)((long)plVar12 + 100) != 0) {
                uVar11 = 1;
              }
              lVar6 = 0x18;
              if (uVar11 == 0) {
                lVar6 = 0x10;
              }
              lVar8 = (*(code *)param_1[9])(param_1[0xc],local_4a0 + lVar8,&local_508,lVar6);
              if (lVar8 == lVar6) {
                lVar6 = (ulong)(local_508 == 0x8074b50) * 4;
                uVar14 = (ulong)*(uint *)((long)auStack_4fc + lVar6 + -4);
                uVar7 = (ulong)(uint)*(ulong *)((long)&uStack_504 + lVar6);
                if (((uint)(*(int *)((long)plVar12 + 100) == 0) & ((uint)uVar13 ^ 0xffffffff)) == 0)
                {
                  uVar14 = *(ulong *)((long)auStack_4fc + lVar6);
                  uVar7 = *(ulong *)((long)&uStack_504 + lVar6);
                }
                if ((((&local_508)[local_508 == 0x8074b50] == local_4a8) && (uVar7 == local_4a0)) &&
                   (uVar14 == local_498)) goto LAB_0010eef8;
                *(undefined4 *)((long)param_1 + 0x1c) = 0x1e;
              }
              else {
                *(undefined4 *)((long)param_1 + 0x1c) = 0x14;
              }
            }
            else {
              __s2 = (short *)(*(code *)param_1[7])(param_1[8],0,1);
              if (__s2 != (short *)0x0) goto LAB_0010ed84;
              uVar10 = 0x10;
LAB_0010efa4:
              *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
            }
            (*(code *)param_1[6])(param_1[8],__s2);
            uVar5 = 0;
            goto LAB_0010ebcc;
          }
        }
        uVar10 = 9;
        goto LAB_0010ec58;
      }
      uVar10 = 6;
    }
    else {
      uVar10 = 4;
    }
LAB_0010ebc4:
    uVar5 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
  }
  else {
    uVar10 = 5;
LAB_0010ec58:
    uVar5 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
  }
LAB_0010ebcc:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


