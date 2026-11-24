// Function: mz_zip_writer_add_from_zip_reader
// Entry: 00112074

void mz_zip_writer_add_from_zip_reader(ulong *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  void *__src;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  int *piVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong local_580;
  void *local_560;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 local_548;
  ulong local_538;
  undefined4 local_52c;
  undefined1 auStack_528 [40];
  long local_500;
  undefined1 auStack_4f8 [16];
  ulong local_4e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined8 uStack_aa;
  int local_98;
  byte local_92;
  int local_86;
  int local_82;
  ushort local_7e;
  ushort local_7c;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  uVar11 = 0;
  if (param_1 == (ulong *)0x0) goto LAB_00112154;
  plVar21 = (long *)param_1[0xd];
  if (((((plVar21 == (long *)0x0) || (*(uint *)((long)param_1 + 0x14) != 2)) ||
       (*(long *)(param_2 + 0x48) == 0)) ||
      ((plVar18 = *(long **)(param_2 + 0x68), *(int *)((long)plVar18 + 100) != 0 &&
       (*(int *)((long)plVar21 + 100) == 0)))) ||
     ((*(uint *)(param_2 + 0x10) <= param_3 || (*plVar18 == 0)))) {
    uVar17 = 0x18;
  }
  else {
    piVar2 = (int *)(*plVar18 + (ulong)*(uint *)(plVar18[4] + (ulong)param_3 * 4));
    if (*piVar2 == 0x2014b50) {
      uVar6 = *(ushort *)(piVar2 + 7);
      uVar24 = (ulong)uVar6;
      uVar7 = *(ushort *)(piVar2 + 8);
      uVar25 = (ulong)uVar7;
      uVar23 = (ulong)*(ushort *)((long)piVar2 + 0x1e);
      lVar15 = uVar25 + uVar24 + uVar23;
      if (0xffffffff00000000 < (ulong)(plVar21[1] + -0xffffffb1 + lVar15)) {
        if (param_1[4] == 0) {
          uVar17 = 0;
        }
        else {
          iVar10 = (int)param_1[4];
          uVar17 = iVar10 - 1;
          uVar17 = iVar10 - ((uint)*param_1 & uVar17) & uVar17;
        }
        if (*(int *)((long)plVar21 + 100) == 0) {
          if ((uint)param_1[2] == 0xffff) goto LAB_001123b0;
        }
        else if ((uint)param_1[2] == 0xffffffff) {
LAB_001123b0:
          uVar17 = 2;
          goto LAB_0011214c;
        }
        uVar11 = FUN_0010f008(param_2,param_3,piVar2,auStack_528,0);
        uVar20 = local_4e8;
        if ((int)uVar11 == 0) goto LAB_00112154;
        local_580 = *param_1;
        lVar12 = (**(code **)(param_2 + 0x48))
                           (*(undefined8 *)(param_2 + 0x60),local_4e8,&local_98,0x1e);
        if (lVar12 == 0x1e) {
          if (local_98 == 0x4034b50) {
            uVar16 = (uint)local_7c;
            if ((uVar16 == 0) || ((local_86 != -1 && (local_82 != -1)))) {
              bVar9 = false;
LAB_0011225c:
              uVar22 = local_500 + (ulong)local_7c + (ulong)local_7e;
              if ((*(int *)((long)plVar21 + 100) == 0) &&
                 (0xfffffffe < lVar15 + (ulong)uVar17 + local_580 + uVar22 + plVar21[1] + 0xb2)) {
                uVar17 = 0x1d;
LAB_00112488:
                uVar11 = 0;
                *(uint *)((long)param_1 + 0x1c) = uVar17;
                goto LAB_00112154;
              }
              uVar11 = FUN_00110cf4(param_1,local_580,uVar17);
              if ((int)uVar11 == 0) goto LAB_00112154;
              local_580 = local_580 + uVar17;
              local_538 = local_580;
              lVar12 = (*(code *)param_1[10])(param_1[0xc],local_580,&local_98,0x1e);
              if (lVar12 != 0x1e) {
                uVar11 = 0;
                uVar17 = 0x13;
                goto LAB_001123cc;
              }
              uVar14 = uVar22;
              if (0x1fff < uVar22) {
                uVar14 = 0x2000;
              }
              if (uVar14 < 0x21) {
                uVar14 = 0x20;
              }
              piVar13 = (int *)(*(code *)param_1[5])(param_1[8],1,uVar14);
              uVar11 = 0;
              if (piVar13 == (int *)0x0) goto LAB_00112ae0;
              lVar12 = uVar20 + 0x1e;
              local_580 = local_580 + 0x1e;
              for (; uVar22 != 0; uVar22 = uVar22 - uVar20) {
                uVar20 = uVar22;
                if (0x1fff < uVar22) {
                  uVar20 = 0x2000;
                }
                uVar14 = (**(code **)(param_2 + 0x48))
                                   (*(undefined8 *)(param_2 + 0x60),lVar12,piVar13,uVar20);
                if (uVar14 != uVar20) goto LAB_00112850;
                uVar14 = (*(code *)param_1[10])(param_1[0xc],local_580,piVar13,uVar20);
                if (uVar14 != uVar20) goto LAB_00112a84;
                local_580 = uVar20 + local_580;
                lVar12 = uVar20 + lVar12;
              }
              local_52c = (undefined4)uVar20;
              if ((local_92 >> 3 & 1) == 0) {
LAB_001124a0:
                (*(code *)param_1[6])(param_1[8],piVar13);
                uStack_c8 = *(undefined8 *)(piVar2 + 2);
                local_d0 = *(undefined8 *)piVar2;
                uVar20 = plVar21[1];
                uStack_aa = *(undefined8 *)((long)piVar2 + 0x26);
                uStack_b8 = (undefined4)*(undefined8 *)(piVar2 + 6);
                uStack_b4 = (undefined2)((ulong)*(undefined8 *)(piVar2 + 6) >> 0x20);
                uStack_c0 = (undefined4)*(undefined8 *)(piVar2 + 4);
                local_bc = (undefined4)((ulong)*(undefined8 *)(piVar2 + 4) >> 0x20);
                local_b2 = (undefined2)*(undefined8 *)((long)piVar2 + 0x1e);
                uStack_b0 = (undefined6)((ulong)*(undefined8 *)((long)piVar2 + 0x1e) >> 0x10);
                if (*(int *)((long)plVar21 + 100) != 0) {
                  local_bc = 0xffffffff;
                  uStack_b8 = 0xffffffff;
                  lVar15 = (long)piVar2 + 0x2e + uVar24;
                  lStack_558 = 0;
                  local_560 = (void *)0x0;
                  uStack_550 = 0;
                  local_548 = 1;
                  uStack_aa = CONCAT44(0xffffffff,(undefined4)uStack_aa);
                  iVar10 = FUN_00112aec(&local_560,param_1,lVar15,uVar23,&local_500,auStack_4f8,
                                        &local_538);
                  lVar12 = lStack_558;
                  if (iVar10 == 0) {
                    (*(code *)param_1[6])(param_1[8],local_560);
                    uVar11 = 0;
                    goto LAB_00112154;
                  }
                  lVar4 = plVar21[1];
                  local_b2 = (undefined2)lStack_558;
                  uVar22 = lVar4 + 0x2e;
                  if (((ulong)plVar21[2] < uVar22) &&
                     (iVar10 = FUN_00117a38(param_1,plVar21,uVar22,1), iVar10 == 0)) {
                    (*(code *)param_1[6])(param_1[8],local_560);
                    uVar17 = 0x10;
                    goto LAB_00112860;
                  }
                  plVar21[1] = uVar22;
                  memcpy((void *)(*plVar21 + lVar4 * (ulong)*(uint *)(plVar21 + 3)),&local_d0,
                         (ulong)*(uint *)(plVar21 + 3) * 0x2e);
                  lVar4 = plVar21[1];
                  uVar22 = lVar4 + uVar24;
                  if ((uVar22 <= (ulong)plVar21[2]) ||
                     (iVar10 = FUN_00117a38(param_1,plVar21,uVar22,1), __src = local_560,
                     iVar10 != 0)) {
                    plVar21[1] = uVar22;
                    if (uVar6 != 0) {
                      memcpy((void *)(*plVar21 + lVar4 * (ulong)*(uint *)(plVar21 + 3)),
                             (void *)((long)piVar2 + 0x2e),*(uint *)(plVar21 + 3) * uVar24);
                      uVar22 = plVar21[1];
                    }
                    __src = local_560;
                    uVar24 = uVar22 + lVar12;
                    if ((uVar24 <= (ulong)plVar21[2]) ||
                       (iVar10 = FUN_00117a38(param_1,plVar21,uVar24,1), iVar10 != 0)) {
                      plVar21[1] = uVar24;
                      if (lVar12 != 0) {
                        memcpy((void *)(*plVar21 + uVar22 * *(uint *)(plVar21 + 3)),__src,
                               lVar12 * (ulong)*(uint *)(plVar21 + 3));
                        uVar24 = plVar21[1];
                      }
                      uVar22 = uVar24 + uVar25;
                      if ((uVar22 <= (ulong)plVar21[2]) ||
                         (iVar10 = FUN_00117a38(param_1,plVar21,uVar22,1), iVar10 != 0)) {
                        plVar21[1] = uVar22;
                        if (uVar7 != 0) {
                          memcpy((void *)(*plVar21 + uVar24 * *(uint *)(plVar21 + 3)),
                                 (void *)(lVar15 + uVar23),*(uint *)(plVar21 + 3) * uVar25);
                        }
                        (*(code *)param_1[6])(param_1[8],__src);
                        goto LAB_0011268c;
                      }
                    }
                  }
                  (*(code *)param_1[6])(param_1[8],__src);
                  if ((ulong)plVar21[2] < uVar20) {
                    lVar15 = (*(code *)param_1[7])(param_1[8],*plVar21,(int)plVar21[3],uVar20);
                    if (lVar15 != 0) {
                      *plVar21 = lVar15;
                      plVar21[2] = uVar20;
                      goto LAB_00112a28;
                    }
                  }
                  else {
LAB_00112a28:
                    plVar21[1] = uVar20;
                  }
                  uVar17 = 0x10;
                  goto LAB_00112488;
                }
                if ((local_580 >> 0x20 != 0) || (0xfffffffe < local_538)) {
                  uVar11 = 0;
                  uVar17 = 0x1d;
                  goto LAB_001123cc;
                }
                uVar23 = uVar20 + 0x2e;
                uStack_aa = CONCAT44((int)local_538,(undefined4)uStack_aa);
                if (((ulong)plVar21[2] < uVar23) &&
                   (uVar11 = FUN_00117a38(param_1,plVar21,uVar23,1), (int)uVar11 == 0))
                goto LAB_00112ae0;
                plVar21[1] = uVar23;
                memcpy((void *)(*plVar21 + uVar20 * *(uint *)(plVar21 + 3)),&local_d0,
                       (ulong)*(uint *)(plVar21 + 3) * 0x2e);
                lVar12 = plVar21[1];
                uVar23 = lVar12 + lVar15;
                if ((uVar23 <= (ulong)plVar21[2]) ||
                   (iVar10 = FUN_00117a38(param_1,plVar21,uVar23,1), iVar10 != 0)) {
                  plVar21[1] = uVar23;
                  if ((int)lVar15 != 0) {
                    memcpy((void *)(*plVar21 + lVar12 * (ulong)*(uint *)(plVar21 + 3)),
                           (void *)((long)piVar2 + 0x2e),(ulong)*(uint *)(plVar21 + 3) * lVar15);
LAB_0011268c:
                    uVar23 = plVar21[1];
                  }
                  if (0xfffffffe < uVar23) {
                    if ((ulong)plVar21[2] < uVar20) {
                      lVar15 = (*(code *)param_1[7])(param_1[8],*plVar21,(int)plVar21[3],uVar20);
                      if (lVar15 != 0) {
                        *plVar21 = lVar15;
                        plVar21[2] = uVar20;
                        goto LAB_001126d0;
                      }
                    }
                    else {
LAB_001126d0:
                      plVar21[1] = uVar20;
                    }
                    uVar11 = 0;
                    uVar17 = 0xf;
                    goto LAB_001123cc;
                  }
                  lVar15 = plVar21[5];
                  uVar23 = lVar15 + 1;
                  local_52c = (undefined4)uVar20;
                  if ((uVar23 <= (ulong)plVar21[6]) ||
                     (iVar10 = FUN_00117a38(param_1,plVar21 + 4,uVar23,1), iVar10 != 0)) {
                    plVar21[5] = uVar23;
                    memcpy((void *)(plVar21[4] + lVar15 * (ulong)*(uint *)(plVar21 + 7)),&local_52c,
                           (ulong)*(uint *)(plVar21 + 7));
                    uVar11 = 1;
                    *(uint *)(param_1 + 2) = (uint)param_1[2] + 1;
                    *param_1 = local_580;
                    goto LAB_00112154;
                  }
                }
                if ((ulong)plVar21[2] < uVar20) {
                  lVar15 = (*(code *)param_1[7])(param_1[8],*plVar21,(int)plVar21[3],uVar20);
                  if (lVar15 != 0) {
                    *plVar21 = lVar15;
                    plVar21[2] = uVar20;
                    goto LAB_00112ad4;
                  }
                }
                else {
LAB_00112ad4:
                  plVar21[1] = uVar20;
                }
                uVar11 = 0;
                goto LAB_00112ae0;
              }
              if (*(int *)(*(long *)(param_2 + 0x68) + 100) == 0 && !bVar9) {
                lVar12 = (**(code **)(param_2 + 0x48))
                                   (*(undefined8 *)(param_2 + 0x60),lVar12,piVar13,0x10);
                uVar11 = DAT_00103448;
                if (lVar12 == 0x10) {
                  if (*(int *)(param_1[0xd] + 100) == 0) {
                    uVar17 = 0x10;
                    if (*piVar13 != 0x8074b50) {
                      uVar17 = 0xc;
                    }
                    uVar20 = (ulong)uVar17;
                  }
                  else {
                    piVar19 = piVar13 + (*piVar13 == 0x8074b50);
                    piVar13[5] = 0;
                    iVar10 = *piVar19;
                    iVar3 = piVar19[1];
                    iVar5 = piVar19[2];
                    *piVar13 = (int)uVar11;
                    piVar13[3] = 0;
                    *(char *)(piVar13 + 1) = (char)iVar10;
                    *(char *)(piVar13 + 2) = (char)iVar3;
                    *(char *)((long)piVar13 + 5) = (char)((uint)iVar10 >> 8);
                    *(char *)(piVar13 + 4) = (char)iVar5;
                    *(char *)((long)piVar13 + 6) = (char)((uint)iVar10 >> 0x10);
                    *(char *)((long)piVar13 + 7) = (char)((uint)iVar10 >> 0x18);
                    *(char *)((long)piVar13 + 9) = (char)((uint)iVar3 >> 8);
                    *(char *)((long)piVar13 + 10) = (char)((uint)iVar3 >> 0x10);
                    *(char *)((long)piVar13 + 0xb) = (char)((uint)iVar3 >> 0x18);
                    *(char *)((long)piVar13 + 0x11) = (char)((uint)iVar5 >> 8);
                    *(char *)((long)piVar13 + 0x12) = (char)((uint)iVar5 >> 0x10);
                    *(char *)((long)piVar13 + 0x13) = (char)((uint)iVar5 >> 0x18);
                    uVar20 = 0x18;
                  }
                  goto LAB_00112a48;
                }
LAB_00112850:
                (*(code *)param_1[6])(param_1[8],piVar13);
                uVar17 = 0x14;
              }
              else {
                lVar12 = (**(code **)(param_2 + 0x48))
                                   (*(undefined8 *)(param_2 + 0x60),lVar12,piVar13,0x18);
                if (lVar12 != 0x18) goto LAB_00112850;
                uVar17 = 0x18;
                if (*piVar13 != 0x8074b50) {
                  uVar17 = 0x14;
                }
                uVar20 = (ulong)uVar17;
LAB_00112a48:
                local_52c = (undefined4)uVar20;
                uVar22 = (*(code *)param_1[10])(param_1[0xc],local_580,piVar13,uVar20);
                if (uVar22 == uVar20) {
                  local_580 = local_580 + uVar20;
                  goto LAB_001124a0;
                }
LAB_00112a84:
                (*(code *)param_1[6])(param_1[8],piVar13);
                uVar17 = 0x13;
              }
LAB_00112860:
              uVar11 = 0;
              *(uint *)((long)param_1 + 0x1c) = uVar17;
              goto LAB_00112154;
            }
            piVar13 = (int *)(*(code *)param_1[7])(param_1[8],0,1);
            uVar11 = 0;
            if (piVar13 != (int *)0x0) {
              uVar14 = (**(code **)(param_2 + 0x48))
                                 (*(undefined8 *)(param_2 + 0x60),local_4e8 + (local_7e + 0x1e),
                                  piVar13,(ulong)uVar16);
              uVar22 = (ulong)local_7c;
              piVar19 = piVar13;
              if (uVar14 == uVar16) {
                do {
                  uVar16 = (uint)uVar22;
                  if (uVar16 < 4) {
LAB_0011274c:
                    (*(code *)param_1[6])(param_1[8],piVar13);
                    uVar17 = 9;
                    goto LAB_00112860;
                  }
                  uVar1 = *(ushort *)((long)piVar19 + 2) + 4;
                  if (uVar16 < uVar1) goto LAB_0011274c;
                  if ((short)*piVar19 == 1) {
                    if (*(ushort *)((long)piVar19 + 2) < 0x10) goto LAB_0011274c;
                    bVar9 = true;
                    goto LAB_00112874;
                  }
                  uVar22 = (ulong)(uVar16 - uVar1);
                  piVar19 = (int *)((long)piVar19 + (ulong)uVar1);
                } while (uVar16 - uVar1 != 0);
                bVar9 = false;
LAB_00112874:
                (*(code *)param_1[6])(param_1[8]);
                goto LAB_0011225c;
              }
              goto LAB_00112850;
            }
LAB_00112ae0:
            uVar17 = 0x10;
          }
          else {
            uVar11 = 0;
            uVar17 = 9;
          }
        }
        else {
          uVar11 = 0;
          uVar17 = 0x14;
        }
LAB_001123cc:
        *(uint *)((long)param_1 + 0x1c) = uVar17;
        goto LAB_00112154;
      }
      uVar17 = 0xf;
    }
    else {
      uVar17 = 9;
    }
  }
LAB_0011214c:
  uVar11 = 0;
  *(uint *)((long)param_1 + 0x1c) = uVar17;
LAB_00112154:
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


