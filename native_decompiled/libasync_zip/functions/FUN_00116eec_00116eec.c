// Function: FUN_00116eec
// Entry: 00116eec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116eec(long param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;
  ushort *puVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  ushort *puVar22;
  long lVar23;
  ulong uVar24;
  ushort uVar25;
  ushort *puVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  ushort local_15e0 [576];
  ushort local_1160 [570];
  undefined1 auStack_cec [8];
  int iStack_ce4;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined4 local_c60;
  uint local_c58 [256];
  uint local_858 [256];
  uint local_458 [256];
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uStack_cd8 = 0;
  local_ce0 = 0;
  uStack_cc8 = 0;
  local_cd0 = 0;
  uStack_cb8 = 0;
  local_cc0 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c78 = 0;
  local_c80 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  local_c60 = 0;
  if (param_5 != 0) {
    if (0 < (int)param_3) {
      uVar9 = (ulong)param_3;
      pbVar11 = (byte *)(param_1 + (ulong)param_2 * 0x120 + 0x8f4a);
      do {
        uVar9 = uVar9 - 1;
        *(int *)((long)&local_ce0 + (ulong)*pbVar11 * 4) =
             *(int *)((long)&local_ce0 + (ulong)*pbVar11 * 4) + 1;
        pbVar11 = pbVar11 + 1;
      } while (uVar9 != 0);
    }
    goto LAB_00117554;
  }
  if ((int)param_3 < 1) {
    memset(local_858,0,0x800);
    uVar27 = 0;
LAB_0011706c:
    uVar9 = 0;
    local_458[0] = 0;
    bVar8 = true;
  }
  else {
    uVar9 = 0;
    uVar27 = 0;
    do {
      uVar25 = *(ushort *)(param_1 + (ulong)param_2 * 0x240 + 0x81ca + uVar9 * 2);
      if (uVar25 != 0) {
        lVar18 = (long)(int)uVar27;
        uVar27 = uVar27 + 1;
        local_1160[lVar18 * 2] = uVar25;
        local_1160[lVar18 * 2 + 1] = (ushort)uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (param_3 != uVar9);
    memset(local_858,0,0x800);
    bVar8 = uVar27 == 0;
    if (uVar27 == 0) goto LAB_0011706c;
    uVar9 = (ulong)uVar27;
    puVar13 = local_1160;
    uVar16 = uVar9;
    do {
      uVar16 = uVar16 - 1;
      uVar21 = (ulong)*puVar13 & 0xff;
      uVar19 = (ulong)(*puVar13 >> 6) & 0x3fc;
      iVar28 = *(int *)((long)local_458 + uVar19);
      local_858[uVar21] = local_858[uVar21] + 1;
      *(int *)((long)local_458 + uVar19) = iVar28 + 1;
      puVar13 = puVar13 + 2;
    } while (uVar16 != 0);
  }
  lVar18 = 0;
  uVar16 = 0;
  lVar3 = 1;
  if (local_458[0] != uVar27) {
    lVar3 = 2;
  }
  puVar14 = local_858;
  puVar13 = local_15e0;
  puVar22 = local_1160;
  do {
    puVar26 = puVar13;
    lVar23 = 0;
    iVar28 = 0;
    do {
      iVar29 = *(int *)((long)puVar14 + lVar23);
      *(int *)((long)local_c58 + lVar23) = iVar28;
      lVar23 = lVar23 + 4;
      iVar28 = iVar29 + iVar28;
    } while (lVar23 != 0x400);
    puVar13 = puVar22;
    uVar19 = uVar9;
    if (!bVar8) {
      do {
        uVar4 = *(undefined4 *)puVar13;
        uVar19 = uVar19 - 1;
        uVar21 = (ulong)(*puVar13 >> (uVar16 & 0x3f)) & 0xff;
        uVar15 = local_c58[uVar21];
        local_c58[uVar21] = uVar15 + 1;
        *(undefined4 *)(puVar26 + (ulong)uVar15 * 2) = uVar4;
        puVar13 = puVar13 + 2;
      } while (uVar19 != 0);
    }
    lVar18 = lVar18 + 1;
    uVar16 = (ulong)((int)uVar16 + 8);
    puVar14 = puVar14 + 0x100;
    puVar13 = puVar22;
    puVar22 = puVar26;
  } while (lVar18 != lVar3);
  if (uVar27 != 0) {
    uVar16 = (ulong)(uVar27 - 1);
    puVar13 = puVar26;
    if (uVar27 - 1 == 0) {
      *puVar26 = 1;
    }
    else {
      *puVar26 = *puVar26 + puVar26[2];
      if ((int)uVar27 < 3) {
        uVar19 = (long)(int)uVar27 - 2;
        puVar26[uVar19 * 2] = 0;
      }
      else {
        iVar28 = 0;
        uVar21 = 2;
        uVar19 = 1;
        do {
          puVar22 = puVar22 + 2;
          lVar18 = (long)iVar28;
          uVar25 = puVar26[lVar18 * 2];
          if (((int)uVar21 < (int)uVar27) &&
             (uVar6 = *(ushort *)
                       ((long)puVar26 + (-(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2)),
             uVar6 <= uVar25)) {
            uVar21 = (ulong)((int)uVar21 + 1);
            *puVar22 = uVar6;
          }
          else {
            iVar28 = iVar28 + 1;
            *puVar22 = uVar25;
            puVar26[lVar18 * 2] = (ushort)uVar19;
          }
          lVar18 = (long)iVar28;
          if ((int)uVar21 < (int)uVar27) {
            if (lVar18 < (long)uVar19) {
              uVar25 = puVar26[lVar18 * 2];
              uVar6 = *(ushort *)
                       ((long)puVar26 + (-(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2));
              if (uVar25 < uVar6) goto LAB_00117164;
            }
            else {
              uVar6 = *(ushort *)
                       ((long)puVar26 + (-(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2));
            }
            uVar21 = (ulong)((int)uVar21 + 1);
            *puVar22 = *puVar22 + uVar6;
          }
          else {
            uVar25 = puVar26[lVar18 * 2];
LAB_00117164:
            iVar28 = iVar28 + 1;
            *puVar22 = *puVar22 + uVar25;
            puVar26[lVar18 * 2] = (ushort)uVar19;
          }
          uVar19 = uVar19 + 1;
        } while (uVar16 != uVar19);
        lVar18 = (ulong)(uVar27 - 3) << 2;
        uVar19 = (long)(int)uVar27 - 2;
        puVar26[uVar19 * 2] = 0;
        do {
          *(ushort *)((long)puVar26 + lVar18) =
               puVar26[(ulong)*(ushort *)((long)puVar26 + lVar18) * 2] + 1;
          lVar18 = lVar18 + -4;
        } while (lVar18 != -4);
      }
      uVar15 = 0;
      iVar28 = 1;
      do {
        if ((int)uVar19 < 0) {
          uVar10 = 0;
          uVar2 = 0;
          if (0 < iVar28) goto LAB_001172e0;
        }
        else {
          uVar10 = 0;
          uVar2 = (int)uVar19 + 1;
          do {
            if (uVar15 != puVar26[(uVar19 & 0xffffffff) * 2]) goto joined_r0x001172dc;
            uVar10 = uVar10 + 1;
            uVar19 = (ulong)((int)uVar19 - 1);
          } while (uVar2 != uVar10);
          uVar19 = 0xffffffff;
          uVar10 = uVar2;
joined_r0x001172dc:
          uVar2 = uVar10;
          if ((int)uVar10 < iVar28) {
LAB_001172e0:
            uVar10 = uVar2;
            uVar16 = (ulong)(int)uVar16;
            uVar25 = (ushort)uVar15;
            if (iVar28 + ~uVar10 != 0) {
              uVar21 = (ulong)(iVar28 + ~uVar10) + 1;
              puVar22 = puVar26 + uVar16 * 2;
              uVar24 = uVar21 & 0x1fffffffe;
              uVar16 = uVar16 - uVar24;
              iVar28 = iVar28 - (int)uVar24;
              uVar17 = uVar24;
              do {
                *puVar22 = uVar25;
                uVar17 = uVar17 - 2;
                puVar22[-2] = uVar25;
                puVar22 = puVar22 + -4;
              } while (uVar17 != 0);
              if (uVar21 == uVar24) goto LAB_0011727c;
            }
            puVar22 = puVar26 + uVar16 * 2;
            do {
              iVar28 = iVar28 + -1;
              uVar16 = uVar16 - 1;
              *puVar22 = uVar25;
              puVar22 = puVar22 + -2;
            } while ((int)uVar10 < iVar28);
          }
        }
LAB_0011727c:
        iVar28 = uVar10 << 1;
        uVar15 = uVar15 + 1;
      } while (uVar10 != 0);
      if ((int)uVar27 < 1) goto LAB_00117494;
    }
    do {
      uVar9 = uVar9 - 1;
      *(int *)((long)&local_ce0 + (ulong)*puVar13 * 4) =
           *(int *)((long)&local_ce0 + (ulong)*puVar13 * 4) + 1;
      puVar13 = puVar13 + 2;
    } while (uVar9 != 0);
    if (1 < (int)uVar27) {
      uVar9 = (ulong)param_4;
      if ((int)param_4 < 0x20) {
        lVar18 = (long)(int)param_4;
        iVar28 = *(int *)((long)&local_ce0 + uVar9 * 4);
        do {
          lVar3 = lVar18 * 4;
          lVar18 = lVar18 + 1;
          iVar28 = *(int *)(((ulong)&local_ce0 | 4) + lVar3) + iVar28;
          *(int *)((long)&local_ce0 + uVar9 * 4) = iVar28;
        } while (lVar18 != 0x20);
        if (0 < (int)param_4) goto LAB_001173b0;
        uVar21 = 0;
      }
      else {
LAB_001173b0:
        uVar16 = (uVar9 - (param_4 != 0)) + 1;
        if (uVar16 < 8) {
          uVar21 = 0;
          uVar19 = uVar9;
        }
        else {
          iVar32 = 0;
          iVar33 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          iVar38 = 0;
          iVar39 = 0;
          iVar28 = param_4 + (int)_DAT_001033f0;
          iVar29 = param_4 + (int)((ulong)_DAT_001033f0 >> 0x20);
          iVar30 = param_4 + (int)_UNK_001033f8;
          iVar31 = param_4 + (int)((ulong)_UNK_001033f8 >> 0x20);
          uVar17 = uVar16 & 0xfffffffffffffff8;
          uVar19 = uVar9 - uVar17;
          pauVar20 = (undefined1 (*) [16])(auStack_cec + uVar9 * 4);
          uVar21 = uVar17;
          do {
            pauVar1 = pauVar20 + -1;
            auVar40 = *pauVar20;
            iVar43 = param_4 - iVar28;
            iVar44 = param_4 - iVar29;
            iVar45 = param_4 - iVar30;
            iVar46 = param_4 - iVar31;
            iVar28 = iVar28 + -8;
            iVar29 = iVar29 + -8;
            iVar30 = iVar30 + -8;
            iVar31 = iVar31 + -8;
            uVar21 = uVar21 - 8;
            pauVar20 = pauVar20 + -2;
            auVar40 = NEON_rev64(auVar40,4);
            auVar42 = NEON_rev64(*pauVar1,4);
            auVar41 = NEON_ext(auVar40,auVar40,8,1);
            auVar42 = NEON_ext(auVar42,auVar42,8,1);
            auVar40._4_4_ = iVar44;
            auVar40._0_4_ = iVar43;
            auVar40._8_4_ = iVar45;
            auVar40._12_4_ = iVar46;
            auVar40 = NEON_ushl(auVar41,auVar40,4);
            auVar41._4_4_ = iVar44 + 4;
            auVar41._0_4_ = iVar43 + 4;
            auVar41._8_4_ = iVar45 + 4;
            auVar41._12_4_ = iVar46 + 4;
            auVar41 = NEON_ushl(auVar42,auVar41,4);
            iVar32 = auVar40._0_4_ + iVar32;
            iVar33 = auVar40._4_4_ + iVar33;
            iVar34 = auVar40._8_4_ + iVar34;
            iVar35 = auVar40._12_4_ + iVar35;
            iVar36 = auVar41._0_4_ + iVar36;
            iVar37 = auVar41._4_4_ + iVar37;
            iVar38 = auVar41._8_4_ + iVar38;
            iVar39 = auVar41._12_4_ + iVar39;
          } while (uVar21 != 0);
          uVar21 = (ulong)(uint)(iVar36 + iVar32 + iVar37 + iVar33 +
                                iVar38 + iVar34 + iVar39 + iVar35);
          if (uVar16 == uVar17) goto LAB_00117484;
        }
        uVar15 = param_4 - (int)uVar19;
        do {
          lVar18 = uVar19 * 4;
          bVar8 = uVar19 != 0;
          uVar19 = uVar19 - 1;
          uVar10 = uVar15 & 0x1f;
          uVar15 = uVar15 + 1;
          uVar21 = (ulong)(uint)((*(int *)((long)&local_ce0 + lVar18) << (ulong)uVar10) +
                                (int)uVar21);
        } while (bVar8 && uVar19 != 0);
      }
LAB_00117484:
      uVar16 = 1L << (uVar9 & 0x3f);
      if (uVar16 != uVar21) {
        do {
          *(int *)((long)&local_ce0 + uVar9 * 4) = *(int *)((long)&local_ce0 + uVar9 * 4) + -1;
          uVar19 = uVar9;
          do {
            if ((long)uVar19 < 2) goto LAB_00117674;
            piVar12 = &iStack_ce4 + uVar19;
            uVar19 = uVar19 - 1;
          } while (*piVar12 == 0);
          *(int *)((long)&local_ce0 + uVar19 * 4) = *piVar12 + -1;
          lVar18 = (ulong)((int)uVar19 + 1) * 4;
          *(int *)((long)&local_ce0 + lVar18) = *(int *)((long)&local_ce0 + lVar18) + 2;
LAB_00117674:
          uVar21 = (ulong)((int)uVar21 - 1);
        } while (uVar16 != uVar21);
      }
    }
  }
LAB_00117494:
  lVar18 = param_1 + (ulong)param_2 * 0x120;
  *(undefined8 *)(lVar18 + 0x8f52) = 0;
  *(undefined8 *)(lVar18 + 0x8f4a) = 0;
  *(undefined8 *)(lVar18 + 0x8f62) = 0;
  *(undefined8 *)(lVar18 + 0x8f5a) = 0;
  *(undefined8 *)(lVar18 + 0x8f72) = 0;
  *(undefined8 *)(lVar18 + 0x8f6a) = 0;
  *(undefined8 *)(lVar18 + 0x8f82) = 0;
  *(undefined8 *)(lVar18 + 0x8f7a) = 0;
  *(undefined8 *)(lVar18 + 0x8f92) = 0;
  *(undefined8 *)(lVar18 + 0x8f8a) = 0;
  *(undefined8 *)(lVar18 + 0x8fa2) = 0;
  *(undefined8 *)(lVar18 + 0x8f9a) = 0;
  *(undefined8 *)(lVar18 + 0x8fb2) = 0;
  *(undefined8 *)(lVar18 + 0x8faa) = 0;
  *(undefined8 *)(lVar18 + 0x8fc2) = 0;
  *(undefined8 *)(lVar18 + 0x8fba) = 0;
  *(undefined8 *)(lVar18 + 0x8fd2) = 0;
  *(undefined8 *)(lVar18 + 0x8fca) = 0;
  *(undefined8 *)(lVar18 + 0x8fe2) = 0;
  *(undefined8 *)(lVar18 + 0x8fda) = 0;
  *(undefined8 *)(lVar18 + 0x8ff2) = 0;
  *(undefined8 *)(lVar18 + 0x8fea) = 0;
  *(undefined8 *)(lVar18 + 0x9002) = 0;
  *(undefined8 *)(lVar18 + 0x8ffa) = 0;
  *(undefined8 *)(lVar18 + 0x9012) = 0;
  *(undefined8 *)(lVar18 + 0x900a) = 0;
  *(undefined8 *)(lVar18 + 0x9022) = 0;
  *(undefined8 *)(lVar18 + 0x901a) = 0;
  *(undefined8 *)(lVar18 + 0x9032) = 0;
  *(undefined8 *)(lVar18 + 0x902a) = 0;
  *(undefined8 *)(lVar18 + 0x9042) = 0;
  *(undefined8 *)(lVar18 + 0x903a) = 0;
  *(undefined8 *)(lVar18 + 0x9052) = 0;
  *(undefined8 *)(lVar18 + 0x904a) = 0;
  *(undefined8 *)(lVar18 + 0x9062) = 0;
  *(undefined8 *)(lVar18 + 0x905a) = 0;
  memset((void *)(param_1 + (ulong)param_2 * 0x240 + 0x888a),0,0x240);
  if (0 < (int)param_4) {
    uVar9 = 1;
    do {
      iVar28 = *(int *)((long)&local_ce0 + uVar9 * 4);
      if (0 < iVar28) {
        lVar18 = (long)(int)uVar27;
        uVar15 = iVar28 + 1;
        uVar27 = uVar27 - iVar28;
        puVar13 = puVar26 + lVar18 * 2 + -1;
        do {
          uVar15 = uVar15 - 1;
          *(char *)(param_1 + (ulong)param_2 * 0x120 + (ulong)*puVar13 + 0x8f4a) = (char)uVar9;
          puVar13 = puVar13 + -2;
        } while (1 < uVar15);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4 + 1);
  }
LAB_00117554:
  local_858[1] = 0;
  if (1 < (int)param_4) {
    uVar27 = 0;
    lVar18 = (ulong)(param_4 + 1) - 2;
    piVar12 = (int *)((ulong)&local_ce0 | 4);
    puVar14 = local_858 + 2;
    do {
      lVar18 = lVar18 + -1;
      uVar27 = (*piVar12 + uVar27) * 2;
      *puVar14 = uVar27;
      piVar12 = piVar12 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar18 != 0);
  }
  if (0 < (int)param_3) {
    uVar9 = 0;
    do {
      bVar5 = *(byte *)(param_1 + (ulong)param_2 * 0x120 + uVar9 + 0x8f4a);
      if (bVar5 != 0) {
        uVar15 = 0;
        uVar27 = bVar5 + 1;
        uVar10 = local_858[bVar5];
        local_858[bVar5] = uVar10 + 1;
        do {
          uVar27 = uVar27 - 1;
          uVar15 = uVar10 & 1 | uVar15 << 1;
          uVar10 = uVar10 >> 1;
        } while (1 < uVar27);
        *(short *)(param_1 + (ulong)param_2 * 0x240 + uVar9 * 2 + 0x888a) = (short)uVar15;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_3);
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


