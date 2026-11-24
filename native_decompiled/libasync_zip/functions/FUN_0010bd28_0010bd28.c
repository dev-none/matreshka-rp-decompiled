// Function: FUN_0010bd28
// Entry: 0010bd28

void FUN_0010bd28(ulong *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  short *__ptr;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  short *psVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int local_10cc;
  ulong local_10c8;
  uint local_10bc;
  uint uStack_10b8;
  uint local_10b4;
  int local_10b0;
  uint uStack_10ac;
  int local_10a8;
  uint local_10a4;
  int iStack_10a0;
  ulong local_109c;
  int local_1094 [2];
  ulong local_108c;
  undefined1 local_1084 [4];
  int local_1080;
  ushort local_107c;
  ushort local_107a;
  ushort local_1078;
  ushort local_1076;
  uint local_1074;
  uint uStack_1070;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  uVar25 = *param_1;
  if (uVar25 < 0x16) {
    uVar6 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 8;
  }
  else {
    lVar15 = uVar25 - 0x1000;
    uVar17 = uVar25;
    if (lVar15 == 0 || (long)uVar25 < 0x1000) {
      lVar15 = 0;
      uVar17 = 0x1000;
    }
    lVar23 = 0;
    lVar26 = 0x1000 - uVar17;
    do {
      uVar20 = uVar25 - lVar15;
      uVar10 = uVar20;
      if (0xfff < uVar20) {
        uVar10 = 0x1000;
      }
      uVar7 = (*(code *)param_1[9])(param_1[0xc],lVar15,&local_1080,uVar10);
      if (uVar7 != uVar10) break;
      if (3 < uVar20) {
        uVar25 = uVar25 + lVar26;
        if (0xfff < uVar25) {
          uVar25 = 0x1000;
        }
        uVar25 = (ulong)((int)uVar25 - 4);
        lVar11 = lVar26 - uVar25;
        lVar16 = uVar25 + 1;
        do {
          if ((*(int *)(local_1084 + lVar16 + 3) == 0x6054b50) && (0x15 < lVar11 + *param_1)) {
            lVar26 = lVar15 + lVar16 + -1;
            lVar15 = (*(code *)param_1[9])(param_1[0xc],lVar26,&local_1080,0x16);
            if (lVar15 != 0x16) goto LAB_0010c334;
            if (local_1080 != 0x6054b50) {
LAB_0010bee8:
              uVar9 = 8;
              goto LAB_0010c33c;
            }
            if (((0x4b < lVar26) &&
                (lVar15 = (*(code *)param_1[9])
                                    (param_1[0xc],uVar17 + lVar23 + lVar16 + -0x1015,local_1094,0x14
                                    ), lVar15 == 0x14)) && (local_1094[0] == 0x7064b50)) {
              if (*param_1 - 0x38 < local_108c) goto LAB_0010bee8;
              lVar15 = (*(code *)param_1[9])(param_1[0xc],local_108c,&local_10cc,0x38);
              if ((lVar15 == 0x38) && (local_10cc == 0x6064b50)) {
                *(undefined4 *)(param_1[0xd] + 100) = 1;
              }
            }
            uVar12 = (uint)local_1076;
            plVar19 = (long *)param_1[0xd];
            *(uint *)(param_1 + 2) = (uint)local_1076;
            if (*(int *)((long)plVar19 + 100) == 0) {
              uVar25 = (ulong)uStack_1070;
              uVar24 = (uint)local_107c;
              uStack_10b8 = (uint)local_107a;
              uVar22 = local_1074;
              if ((uint)local_1076 != (uint)local_1078) goto LAB_0010c308;
            }
            else {
              if (local_10c8 < 0x2c) goto LAB_0010bf60;
              if (local_1084 != (undefined1  [4])0x1) goto LAB_0010c308;
              if ((local_10a8 != 0) || (*(uint *)(param_1 + 2) = uStack_10ac, local_10b0 != 0)) {
                uVar9 = 2;
                goto LAB_0010c33c;
              }
              if (iStack_10a0 != 0) {
                uVar9 = 0xf;
                goto LAB_0010c33c;
              }
              uVar25 = local_109c;
              uVar22 = local_10a4;
              uVar24 = local_10bc;
              uVar12 = uStack_10ac;
              if (uStack_10ac != local_10b4) goto LAB_0010c308;
            }
            if ((uVar24 != 0 || uStack_10b8 != 0) && ((uVar24 != 1 || (uStack_10b8 != 1))))
            goto LAB_0010c308;
            if ((uVar22 < uVar12 * 0x2e) || (uVar17 = (ulong)uVar22, *param_1 < uVar25 + uVar17))
            goto LAB_0010bf60;
            param_1[1] = uVar25;
            if (uVar12 == 0) goto LAB_0010c2a8;
            plVar21 = plVar19;
            if ((ulong)plVar19[2] < uVar17) {
              lVar15 = (*(code *)param_1[7])(param_1[8],*plVar19,(int)plVar19[3],uVar17);
              if (lVar15 == 0) goto LAB_0010c314;
              *plVar19 = lVar15;
              plVar19[2] = uVar17;
              plVar21 = (long *)param_1[0xd];
              uVar12 = (uint)param_1[2];
            }
            plVar19[1] = uVar17;
            uVar10 = (ulong)uVar12;
            plVar19 = plVar21;
            if ((ulong)plVar21[6] < uVar10) {
              lVar15 = (*(code *)param_1[7])(param_1[8],plVar21[4],(int)plVar21[7],uVar10);
              if (lVar15 == 0) goto LAB_0010c314;
              plVar21[4] = lVar15;
              plVar21[6] = uVar10;
              plVar19 = (long *)param_1[0xd];
            }
            plVar21[5] = uVar10;
            plVar21 = plVar19;
            if ((param_2 >> 0xb & 1) == 0) {
              uVar10 = (ulong)(uint)param_1[2];
              if ((ulong)plVar19[10] < uVar10) {
                lVar15 = (*(code *)param_1[7])(param_1[8],plVar19[8],(int)plVar19[0xb],uVar10);
                if (lVar15 == 0) goto LAB_0010c314;
                plVar19[8] = lVar15;
                plVar19[10] = uVar10;
                plVar21 = (long *)param_1[0xd];
              }
              plVar19[9] = uVar10;
            }
            uVar10 = (*(code *)param_1[9])(param_1[0xc],uVar25,*plVar21,uVar17);
            if (uVar10 != uVar17) goto LAB_0010c334;
            if ((int)param_1[2] == 0) goto LAB_0010c2a8;
            uVar17 = 0;
            piVar13 = *(int **)param_1[0xd];
            goto LAB_0010c0e0;
          }
          lVar3 = lVar16 + -1;
          lVar11 = lVar11 + 1;
          bVar5 = 0 < lVar16;
          lVar16 = lVar3;
        } while (lVar3 != 0 && bVar5);
      }
      if (lVar15 == 0) {
        if (param_1 == (ulong *)0x0) {
          uVar6 = 0;
          goto LAB_0010c344;
        }
        break;
      }
      uVar25 = *param_1;
      lVar26 = lVar26 + 0xffd;
      lVar23 = lVar23 + -0xffd;
      uVar10 = uVar25 - lVar15;
      lVar15 = lVar15 + -0xffd;
    } while (uVar10 < 0x10015);
    uVar9 = 7;
LAB_0010c33c:
    uVar6 = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar9;
  }
LAB_0010c344:
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
LAB_0010c0e0:
  if ((uVar22 < 0x2e) || (*piVar13 != 0x2014b50)) {
LAB_0010bf60:
    uVar9 = 9;
  }
  else {
    piVar14 = (int *)param_1[0xd];
    *(int *)(*(long *)(piVar14 + 8) + uVar17 * 4) = (int)piVar13 - *piVar14;
    if ((param_2 >> 0xb & 1) == 0) {
      *(int *)(*(long *)(piVar14 + 0x10) + uVar17 * 4) = (int)uVar17;
    }
    uVar10 = (ulong)(uint)piVar13[5];
    uVar20 = (ulong)(uint)piVar13[6];
    if (piVar14[0x1a] == 0) {
      uVar1 = *(ushort *)((long)piVar13 + 0x1e);
      uVar7 = (ulong)uVar1;
      if (uVar1 == 0) goto LAB_0010c208;
      uVar8 = uVar10;
      if (uVar10 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 <= *(uint *)((long)piVar13 + 0x2a)) {
        uVar8 = (ulong)*(uint *)((long)piVar13 + 0x2a);
      }
      if (uVar8 != 0xffffffff) goto LAB_0010c208;
      uVar2 = *(ushort *)(piVar13 + 7);
      if ((uint)uVar2 + (uint)uVar1 + 0x2e <= uVar22) {
        __ptr = (short *)0x0;
        psVar18 = (short *)((long)piVar13 + (ulong)(uint)uVar2 + 0x2e);
LAB_0010c1a8:
        do {
          if ((uint)uVar7 < 4) {
LAB_0010c31c:
            free(__ptr);
            goto LAB_0010bf60;
          }
          uVar8 = (ulong)(ushort)psVar18[1] + 4;
          if (uVar7 < uVar8) goto LAB_0010c31c;
          if (*psVar18 == 1) {
            *(undefined8 *)(param_1[0xd] + 100) = 0x100000001;
            break;
          }
          uVar12 = ((uint)uVar7 - (uint)(ushort)psVar18[1]) - 4;
          uVar7 = (ulong)uVar12;
          psVar18 = (short *)((long)psVar18 + uVar8);
        } while (uVar12 != 0);
        free(__ptr);
        goto LAB_0010c208;
      }
      __ptr = malloc(uVar7);
      if (__ptr == (short *)0x0) {
LAB_0010c314:
        uVar9 = 0x10;
      }
      else {
        uVar8 = (*(code *)param_1[9])(param_1[0xc],uVar25 + 0x2e + (ulong)uVar2,__ptr,uVar7);
        psVar18 = __ptr;
        if (uVar8 == uVar7) goto LAB_0010c1a8;
        free(__ptr);
LAB_0010c334:
        uVar9 = 0x14;
      }
      goto LAB_0010c33c;
    }
LAB_0010c208:
    if (((uVar10 != 0xffffffff) && (uVar20 != 0xffffffff)) &&
       (((*(int *)((long)piVar13 + 10) == 0 && (uVar20 != uVar10)) ||
        ((uVar20 != 0 && (uVar10 == 0)))))) goto LAB_0010bf60;
    uVar1 = *(ushort *)((long)piVar13 + 0x22);
    if ((uVar1 == 0xffff) || ((uVar1 != uVar24 && (uVar1 != 1)))) {
LAB_0010c308:
      uVar9 = 10;
    }
    else {
      if ((uVar10 != 0xffffffff) && (*param_1 < uVar10 + *(uint *)((long)piVar13 + 0x2a) + 0x1e))
      goto LAB_0010bf60;
      if ((*(byte *)((long)piVar13 + 9) >> 5 & 1) == 0) {
        lVar15 = (ulong)*(ushort *)(piVar13 + 7) + (ulong)*(ushort *)((long)piVar13 + 0x1e) +
                 (ulong)*(ushort *)(piVar13 + 8) + 0x2e;
        uVar12 = (uint)lVar15;
        bVar5 = uVar12 <= uVar22;
        uVar22 = uVar22 - uVar12;
        if (bVar5) goto code_r0x0010c294;
        goto LAB_0010bf60;
      }
      uVar9 = 5;
    }
  }
  goto LAB_0010c33c;
code_r0x0010c294:
  uVar17 = uVar17 + 1;
  piVar13 = (int *)((long)piVar13 + lVar15);
  if ((uint)param_1[2] <= uVar17) goto LAB_0010c2a8;
  goto LAB_0010c0e0;
LAB_0010c2a8:
  if ((param_2 >> 0xb & 1) == 0) {
    FUN_001176b4(param_1);
  }
  uVar6 = 1;
  goto LAB_0010c344;
}


