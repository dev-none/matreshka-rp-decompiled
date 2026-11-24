// Function: tinfl_decompress
// Entry: 00108228

/* WARNING: Removing unreachable block (ram,0x001086f0) */

int tinfl_decompress(uint *param_1,uint *param_2,long *param_3,byte *param_4,byte *param_5,
                    ulong *param_6,uint param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  int iVar43;
  uint uVar44;
  uint *puVar45;
  uint *puVar46;
  int iVar47;
  byte *pbVar48;
  uint uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  byte *local_170;
  ulong local_150;
  uint local_124;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  pbVar19 = param_5 + *param_6;
  pbVar2 = pbVar19 + ~(ulong)param_4;
  if ((param_7 & 4) != 0) {
    pbVar2 = (byte *)0xffffffffffffffff;
  }
  if ((param_5 < param_4) || (((ulong)(pbVar2 + 1) & (ulong)pbVar2) != 0)) {
    *param_6 = 0;
    iVar22 = -3;
    *param_3 = 0;
    goto LAB_00108b7c;
  }
  uVar24 = *param_1;
  uVar16 = param_1[1];
  uVar25 = (ulong)uVar16;
  local_124 = param_1[8];
  uVar49 = param_1[9];
  uVar32 = *(ulong *)(param_1 + 0xe);
  local_150 = *(ulong *)(param_1 + 0x10);
  iVar22 = -1;
  uVar44 = param_1[10];
  local_110 = (ulong)uVar44;
  puVar45 = param_2;
  local_170 = param_5;
  if (0x35 < uVar24) goto switchD_001082c4_caseD_4;
  lVar30 = *param_3;
  puVar3 = (uint *)((long)param_2 + lVar30);
  puVar46 = param_2;
  switch(uVar24) {
  case 0:
    goto switchD_001082c4_caseD_0;
  case 1:
    goto switchD_001082c4_caseD_1;
  case 2:
    goto LAB_001083dc;
  case 3:
    uVar27 = uVar32;
    goto LAB_001085a4;
  default:
    goto switchD_001082c4_caseD_4;
  case 5:
    if (0 < lVar30) {
      puVar46 = (uint *)((long)param_2 + 1);
      uVar16 = uVar16 + 8;
      uVar32 = (ulong)(byte)*param_2 << (uVar25 & 0x3f) | uVar32;
      goto LAB_00108600;
    }
    uVar16 = 5;
    goto LAB_00108574;
  case 6:
    goto LAB_00108740;
  case 7:
    goto LAB_001087b0;
  case 9:
    goto LAB_001088b4;
  case 10:
  case 0x11:
  case 0x15:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
    break;
  case 0xb:
    goto LAB_00108968;
  case 0xe:
    goto LAB_00108bc8;
  case 0x10:
    goto LAB_00109194;
  case 0x12:
    goto LAB_00109258;
  case 0x17:
    local_170 = param_5;
    goto LAB_001094cc;
  case 0x18:
    goto LAB_001095b8;
  case 0x19:
    goto LAB_00109610;
  case 0x1a:
    goto LAB_00109718;
  case 0x1b:
    goto LAB_001097bc;
  case 0x20:
    if (lVar30 < 1) {
      uVar16 = 0x20;
      goto LAB_00108574;
    }
    puVar46 = (uint *)((long)param_2 + 1);
    uVar16 = uVar16 + 8;
    uVar32 = (ulong)(byte)*param_2 << (uVar25 & 0x3f) | uVar32;
LAB_00109560:
    uVar24 = uVar16 & 0xfffffff8;
    uVar25 = (ulong)uVar24;
    if ((param_2 < puVar46) && (uVar24 != 0)) {
      uVar27 = (ulong)(uVar24 - 8 >> 3);
      if (~(ulong)param_2 + (long)puVar46 <= uVar27) {
        uVar27 = ~(ulong)param_2 + (long)puVar46;
      }
      uVar25 = (ulong)((uVar24 - 8) + (int)uVar27 * -8);
      puVar46 = (uint *)((long)puVar46 + ~uVar27);
    }
    iVar22 = 0;
    uVar32 = uVar32 >> (uVar16 & 7) & (-1L << (uVar25 & 0x3f) ^ 0xffffffffffffffffU);
    if ((param_7 & 1) == 0) {
      uVar24 = 0x22;
      uVar44 = (uint)local_110;
    }
    else {
      uVar49 = 0;
      while( true ) {
        uVar16 = (uint)uVar25;
        if (3 < uVar49) break;
        puVar45 = puVar46;
        if (uVar16 == 0) {
LAB_001099ec:
          uVar44 = (uint)local_110;
          if (puVar45 < puVar3) {
            puVar46 = (uint *)((long)puVar45 + 1);
            uVar24 = (uint)(byte)*puVar45;
            goto LAB_001099f8;
          }
          uVar16 = 0x2a;
LAB_00108718:
          *param_1 = uVar16;
          iVar22 = -4;
          if ((param_7 & 2) != 0) {
            iVar22 = 1;
          }
          goto switchD_001082c4_caseD_4;
        }
        if (uVar16 < 8) {
LAB_001099ac:
          uVar44 = (uint)local_110;
          puVar45 = puVar46;
LAB_001099b0:
          if (puVar45 < puVar3) goto code_r0x001099b8;
          uVar16 = 0x29;
LAB_001087d8:
          *param_1 = uVar16;
          iVar22 = -4;
          if ((param_7 & 2) != 0) {
            iVar22 = 1;
          }
          goto switchD_001082c4_caseD_4;
        }
LAB_001099d4:
        uVar24 = (uint)uVar32 & 0xff;
        uVar32 = uVar32 >> 8;
        uVar25 = (ulong)(uVar16 - 8);
LAB_001099f8:
        uVar49 = uVar49 + 1;
        param_1[4] = uVar24 | param_1[4] << 8;
      }
      iVar22 = 0;
      uVar24 = 0x22;
      uVar44 = (uint)local_110;
    }
    goto LAB_001082d0;
  case 0x22:
    iVar22 = 0;
    break;
  case 0x26:
    goto LAB_001088bc;
  case 0x29:
    goto LAB_001099ac;
  case 0x2a:
    goto LAB_001099ec;
  case 0x33:
    goto LAB_00108808;
  case 0x34:
    goto LAB_0010883c;
  case 0x35:
    local_170 = param_5;
    goto LAB_00109978;
  }
  goto LAB_001082d0;
LAB_00108c0c:
  uVar16 = param_1[6];
  param_1[0xd] = 0x13;
  pbVar48 = local_170;
  while (local_170 = pbVar48, -1 < (int)uVar16) {
LAB_00108c88:
    uVar28 = (ulong)uVar16;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    memset(param_1 + (ulong)uVar16 * 0x368 + 0x5a,0,0x800);
    memset(param_1 + (ulong)uVar16 * 0x368 + 0x25a,0,0x480);
    uVar24 = param_1[(ulong)uVar16 + 0xb];
    uVar27 = (ulong)uVar24;
    puVar45 = param_1 + (ulong)uVar16 * 0x368 + 0x12;
    iVar22 = 0;
    iVar31 = 0;
    iVar17 = 0;
    iVar20 = 0;
    iVar29 = 0;
    iVar33 = 0;
    iVar47 = 0;
    iVar37 = 0;
    iVar18 = 0;
    iVar34 = 0;
    iVar43 = 0;
    iVar39 = 0;
    iVar21 = 0;
    iVar23 = 0;
    if (uVar24 != 0) {
      do {
        uVar27 = uVar27 - 1;
        lVar30 = (ulong)(byte)*puVar45 * 4;
        *(int *)((long)&local_100 + lVar30) = *(int *)((long)&local_100 + lVar30) + 1;
        puVar45 = (uint *)((long)puVar45 + 1);
      } while (uVar27 != 0);
      iVar22 = (int)uStack_c8;
      iVar31 = uStack_d0._4_4_;
      iVar17 = (int)uStack_d0;
      iVar20 = uStack_d8._4_4_;
      iVar29 = (int)uStack_d8;
      iVar33 = local_e0._4_4_;
      iVar47 = (int)local_e0;
      iVar37 = uStack_e8._4_4_;
      iVar18 = (int)uStack_e8;
      iVar34 = uStack_f0._4_4_;
      iVar43 = (int)uStack_f0;
      iVar39 = uStack_f8._4_4_;
      iVar21 = (int)uStack_f8;
      iVar23 = local_100._4_4_;
    }
    local_b8 = 0;
    iStack_ac = (iVar21 + iVar23 * 2) * 2;
    local_b0 = iVar23 * 2;
    local_a8 = (iVar39 + iStack_ac) * 2;
    iStack_a4 = (iVar43 + local_a8) * 2;
    local_a0 = (iVar34 + iStack_a4) * 2;
    iStack_9c = (iVar18 + local_a0) * 2;
    local_98 = (iVar37 + iStack_9c) * 2;
    iStack_94 = (iVar47 + local_98) * 2;
    local_90 = (iVar33 + iStack_94) * 2;
    iStack_8c = (iVar29 + local_90) * 2;
    local_88 = (iVar20 + iStack_8c) * 2;
    iStack_84 = (iVar17 + local_88) * 2;
    local_80 = (iVar31 + iStack_84) * 2;
    iVar31 = uStack_c8._4_4_ + iVar22 + iVar31 + iVar17 +
             iVar20 + iVar29 + iVar33 + iVar47 +
             iVar37 + iVar18 + iVar34 + iVar43 + iVar21 + iVar39 + iVar23;
    iStack_7c = (iVar22 + local_80) * 2;
    local_78 = (uStack_c8._4_4_ + iStack_7c) * 2;
    if ((local_78 != 0x10000 && iVar31 != 0) && (local_78 == 0x10000 || iVar31 != 1)) {
      uVar24 = 0x23;
LAB_0010911c:
      iVar22 = -1;
      uVar44 = (uint)local_110;
      goto LAB_001082d0;
    }
    if (uVar24 != 0) {
      uVar27 = 0;
      uVar44 = 0xffffffff;
      uVar35 = 0xffffffff;
      do {
        bVar7 = *(byte *)((long)(param_1 + (ulong)uVar16 * 0x368 + 0x12) + uVar27);
        uVar38 = (ulong)bVar7;
        uVar36 = (uint)bVar7;
        if (uVar36 != 0) {
          uVar42 = 0;
          uVar40 = *(uint *)((long)&local_b8 + uVar38 * 4);
          *(uint *)((long)&local_b8 + uVar38 * 4) = uVar40 + 1;
          do {
            uVar41 = (uint)uVar42;
            uVar10 = uVar41 << 1;
            uVar36 = uVar36 - 1;
            uVar5 = uVar40 & 1;
            uVar6 = uVar10 | uVar5;
            uVar42 = (ulong)uVar6;
            uVar40 = uVar40 >> 1;
          } while (uVar36 != 0);
          if (bVar7 < 0xb) {
            if (uVar6 < 0x400) {
              do {
                *(ushort *)((long)param_1 + uVar42 * 2 + uVar28 * 0xda0 + 0x168) =
                     (ushort)uVar27 | (ushort)bVar7 << 9;
                uVar42 = uVar42 + (1L << (uVar38 & 0x3f));
              } while (uVar42 < 0x400);
            }
          }
          else {
            lVar30 = (ulong)(uVar10 & 0x3ff | uVar5) * 2 + uVar28 * 0xda0;
            uVar36 = (uint)*(short *)((long)param_1 + lVar30 + 0x168);
            if (uVar36 == 0) {
              *(short *)((long)param_1 + lVar30 + 0x168) = (short)uVar35;
              uVar44 = uVar35 - 2;
              uVar36 = uVar35;
              uVar35 = uVar44;
            }
            uVar40 = (uVar41 & 0x7fffffff) >> 8;
            if (bVar7 != 0xb) {
              do {
                lVar30 = (long)(int)((uVar40 >> 1 & 1) + ~uVar36) * 2 + uVar28 * 0xda0;
                uVar36 = (uint)*(short *)((long)param_1 + lVar30 + 0x968);
                if (uVar36 == 0) {
                  *(short *)((long)param_1 + lVar30 + 0x968) = (short)uVar35;
                  uVar35 = uVar35 - 2;
                  uVar36 = uVar44;
                }
                uVar5 = (int)uVar38 - 1;
                uVar38 = (ulong)uVar5;
                uVar40 = uVar40 >> 1;
                uVar44 = uVar35;
              } while (0xb < uVar5);
            }
            *(ushort *)
             ((long)param_1 + (long)(int)((uVar40 >> 1 & 1) + ~uVar36) * 2 + uVar28 * 0xda0 + 0x968)
                 = (ushort)uVar27;
            uVar44 = uVar35;
          }
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar24);
    }
    if (uVar16 == 2) {
      uVar49 = 0;
      while( true ) {
        uVar16 = (uint)uVar25;
        uVar44 = param_1[0xb];
        uVar35 = param_1[0xc];
        uVar24 = uVar35 + uVar44;
        if (uVar24 <= uVar49) break;
        if (uVar16 < 0xf) {
          if ((long)puVar3 - (long)puVar46 < 2) {
            do {
              uVar8 = *(ushort *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0x1ca8);
              uVar27 = (ulong)(short)uVar8;
              uVar16 = (uint)uVar25;
              puVar45 = puVar46;
              if ((short)uVar8 < 0) {
                if (10 < uVar16) {
                  uVar24 = 0xc;
                  do {
                    sVar9 = *(short *)((long)param_1 +
                                      ((uVar32 >> ((ulong)(uVar24 - 2) & 0x3f) & 1) +
                                      (long)(int)~(uint)uVar27) * 2 + 0x24a8);
                    uVar27 = (ulong)sVar9;
                    if (-1 < sVar9) break;
                    bVar14 = uVar24 <= uVar16;
                    uVar24 = uVar24 + 1;
                  } while (bVar14);
                  if (-1 < sVar9) break;
                }
              }
              else if ((0x1ff < uVar8) && (((uint)(uVar27 >> 9) & 0x7fffff) <= uVar16)) break;
LAB_00109194:
              uVar44 = (uint)local_110;
              if (puVar3 <= puVar45) {
                uVar16 = 0x10;
                goto LAB_001089dc;
              }
              puVar46 = (uint *)((long)puVar45 + 1);
              uVar27 = uVar25 & 0x3f;
              uVar16 = (int)uVar25 + 8;
              uVar25 = (ulong)uVar16;
              uVar32 = (ulong)(byte)*puVar45 << uVar27 | uVar32;
            } while (uVar16 < 0xf);
          }
          else {
            uVar44 = *puVar46;
            pbVar48 = (byte *)((long)puVar46 + 1);
            uVar24 = uVar16 + 8;
            puVar46 = (uint *)((long)puVar46 + 2);
            uVar16 = uVar16 | 0x10;
            uVar32 = (ulong)(byte)uVar44 << (uVar25 & 0x3f) |
                     (ulong)*pbVar48 << ((ulong)uVar24 & 0x3f) | uVar32;
          }
        }
        local_124 = (uint)*(short *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0x1ca8);
        if ((int)local_124 < 0) {
          uVar25 = 10;
          do {
            local_124 = (uint)*(short *)((long)param_1 +
                                        ((uVar32 >> (uVar25 & 0x3f) & 1) + (long)(int)~local_124) *
                                        2 + 0x24a8);
            uVar25 = (ulong)((int)uVar25 + 1);
          } while ((int)local_124 < 0);
        }
        else {
          uVar25 = (ulong)(local_124 >> 9);
          local_124 = local_124 & 0x1ff;
        }
        uVar32 = uVar32 >> (uVar25 & 0x3f);
        uVar16 = uVar16 - (int)uVar25;
        uVar25 = (ulong)uVar16;
        if (local_124 < 0x10) {
          uVar27 = (ulong)uVar49;
          uVar49 = uVar49 + 1;
          *(char *)((long)param_1 + uVar27 + 0x292c) = (char)local_124;
        }
        else {
          uVar27 = (ulong)(local_124 - 0x10);
          if (local_124 - 0x10 == 0 && uVar49 == 0) {
            uVar49 = 0;
            iVar22 = -1;
            local_124 = 0x10;
            uVar24 = 0x11;
            uVar44 = (uint)local_110;
            goto LAB_001082d0;
          }
          local_110 = (ulong)(byte)(&DAT_00103979)[uVar27];
          puVar45 = puVar46;
          if (uVar16 < (byte)(&DAT_00103979)[uVar27]) {
LAB_00109258:
            do {
              uVar44 = (uint)local_110;
              if (puVar3 <= puVar45) {
                uVar16 = 0x12;
                goto LAB_001089dc;
              }
              puVar46 = (uint *)((long)puVar45 + 1);
              uVar27 = uVar25 & 0x3f;
              uVar16 = (int)uVar25 + 8;
              uVar25 = (ulong)uVar16;
              uVar32 = (ulong)(byte)*puVar45 << uVar27 | uVar32;
              puVar45 = puVar46;
            } while (uVar16 < uVar44);
            uVar27 = (ulong)(local_124 - 0x10);
          }
          uVar25 = (ulong)(uVar16 - (uint)local_110);
          uVar24 = (uint)uVar32;
          uVar32 = uVar32 >> (local_110 & 0x3f);
          uVar16 = 0;
          sVar4 = (ulong)(uVar24 & (-1 << (ulong)((uint)local_110 & 0x1f) ^ 0xffffffffU)) +
                  (ulong)(byte)(&DAT_00103c32)[uVar27];
          if (local_124 == 0x10) {
            uVar16 = (uint)*(byte *)((long)param_1 + (ulong)(uVar49 - 1) + 0x292c);
          }
          memset((void *)((long)param_1 + (ulong)uVar49 + 0x292c),uVar16,sVar4);
          uVar49 = (int)sVar4 + uVar49;
        }
      }
      if (uVar24 != uVar49) {
        uVar24 = 0x15;
        goto LAB_0010911c;
      }
      memcpy(param_1 + 0x12,param_1 + 0xa4b,(ulong)uVar44);
      memcpy(param_1 + 0x37a,(void *)((long)(param_1 + 0xa4b) + (ulong)uVar44),(ulong)uVar35);
    }
    uVar16 = param_1[6] - 1;
    param_1[6] = uVar16;
    pbVar48 = local_170;
  }
LAB_0010933c:
  while( true ) {
    uVar16 = (uint)uVar25;
    if ((3 < (long)puVar3 - (long)puVar46) && (1 < (long)pbVar19 - (long)pbVar48)) break;
    if (uVar16 < 0xf) {
      if ((long)puVar3 - (long)puVar46 < 2) {
        do {
          uVar8 = *(ushort *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0x168);
          uVar27 = (ulong)(short)uVar8;
          uVar16 = (uint)uVar25;
          local_170 = pbVar48;
          puVar45 = puVar46;
          if ((short)uVar8 < 0) {
            if (10 < uVar16) {
              uVar24 = 0xc;
              do {
                sVar9 = *(short *)((long)param_1 +
                                  ((uVar32 >> ((ulong)(uVar24 - 2) & 0x3f) & 1) +
                                  (long)(int)~(uint)uVar27) * 2 + 0x968);
                uVar27 = (ulong)sVar9;
                if (-1 < sVar9) break;
                bVar14 = uVar24 <= uVar16;
                uVar24 = uVar24 + 1;
              } while (bVar14);
              if (-1 < sVar9) break;
            }
          }
          else if ((0x1ff < uVar8) && (((uint)(uVar27 >> 9) & 0x7fffff) <= uVar16)) break;
LAB_001094cc:
          uVar44 = (uint)local_110;
          if (puVar3 <= puVar45) {
            uVar16 = 0x17;
            goto LAB_001089dc;
          }
          puVar46 = (uint *)((long)puVar45 + 1);
          uVar27 = uVar25 & 0x3f;
          uVar16 = (int)uVar25 + 8;
          uVar25 = (ulong)uVar16;
          uVar32 = (ulong)(byte)*puVar45 << uVar27 | uVar32;
          pbVar48 = local_170;
        } while (uVar16 < 0xf);
      }
      else {
        uVar24 = *puVar46;
        pbVar26 = (byte *)((long)puVar46 + 1);
        uVar49 = uVar16 + 8;
        puVar46 = (uint *)((long)puVar46 + 2);
        uVar16 = uVar16 | 0x10;
        uVar32 = (ulong)(byte)uVar24 << (uVar25 & 0x3f) | (ulong)*pbVar26 << ((ulong)uVar49 & 0x3f)
                 | uVar32;
      }
    }
    uVar49 = (uint)*(short *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0x168);
    if ((int)uVar49 < 0) {
      uVar25 = 10;
      do {
        uVar49 = (uint)*(short *)((long)param_1 +
                                 ((uVar32 >> (uVar25 & 0x3f) & 1) + (long)(int)~uVar49) * 2 + 0x968)
        ;
        uVar25 = (ulong)((int)uVar25 + 1);
      } while ((int)uVar49 < 0);
    }
    else {
      uVar25 = (ulong)(uVar49 >> 9);
      uVar49 = uVar49 & 0x1ff;
    }
    uVar32 = uVar32 >> (uVar25 & 0x3f);
    uVar25 = (ulong)(uVar16 - (int)uVar25);
    local_170 = pbVar48;
    if (0xff < uVar49) goto LAB_00109544;
LAB_001095b8:
    uVar44 = (uint)local_110;
    if (pbVar19 <= local_170) {
      iVar22 = 2;
      uVar24 = 0x18;
      goto LAB_001082d0;
    }
    pbVar48 = local_170 + 1;
    *local_170 = (byte)uVar49;
  }
  puVar45 = puVar46;
  if (uVar16 < 0x1e) {
    puVar45 = puVar46 + 1;
    uVar16 = uVar16 | 0x20;
    uVar32 = (ulong)*puVar46 << (uVar25 & 0x3f) | uVar32;
  }
  uVar49 = (uint)*(short *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0x168);
  if ((int)uVar49 < 0) {
    uVar25 = 10;
    do {
      uVar49 = (uint)*(short *)((long)param_1 +
                               ((uVar32 >> (uVar25 & 0x3f) & 1) + (long)(int)~uVar49) * 2 + 0x968);
      uVar25 = (ulong)((int)uVar25 + 1);
    } while ((int)uVar49 < 0);
  }
  else {
    uVar25 = (ulong)(uVar49 >> 9);
  }
  uVar32 = uVar32 >> (uVar25 & 0x3f);
  uVar16 = uVar16 - (int)uVar25;
  uVar25 = (ulong)uVar16;
  puVar46 = puVar45;
  if ((uVar49 >> 8 & 1) == 0) {
    sVar9 = *(short *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0x168);
    uVar24 = (uint)sVar9;
    if (sVar9 < 0) {
      uVar25 = 10;
      do {
        uVar27 = uVar25 & 0x3f;
        uVar25 = (ulong)((int)uVar25 + 1);
        uVar24 = (uint)*(short *)((long)param_1 +
                                 ((uVar32 >> uVar27 & 1) + (long)(int)~uVar24) * 2 + 0x968);
      } while ((int)uVar24 < 0);
    }
    else {
      uVar25 = (ulong)((uint)(int)sVar9 >> 9);
    }
    uVar32 = uVar32 >> (uVar25 & 0x3f);
    uVar25 = (ulong)(uVar16 - (int)uVar25);
    *pbVar48 = (byte)uVar49;
    if ((uVar24 >> 8 & 1) == 0) {
      pbVar48[1] = (byte)uVar24;
      pbVar48 = pbVar48 + 2;
      goto LAB_0010933c;
    }
    pbVar48 = pbVar48 + 1;
    uVar49 = uVar24;
  }
LAB_00109544:
  uVar16 = (uint)uVar25;
  local_170 = pbVar48;
  if ((uVar49 & 0x1ff) != 0x100) {
    uVar27 = (ulong)((uVar49 & 0x1ff) - 0x101);
    uVar49 = *(uint *)(&DAT_00103cd4 + uVar27 * 4);
    if (uVar27 - 0x1c < 0xffffffffffffffec) {
      local_110 = 0;
    }
    else {
      local_110 = (ulong)*(uint *)(&DAT_00103d50 + uVar27 * 4);
      if (uVar16 < *(uint *)(&DAT_00103d50 + uVar27 * 4)) {
LAB_00109610:
        uVar44 = (uint)local_110;
        puVar45 = puVar46;
        do {
          if (puVar3 <= puVar45) {
            uVar16 = 0x19;
            goto LAB_001089dc;
          }
          puVar46 = (uint *)((long)puVar45 + 1);
          uVar27 = uVar25 & 0x3f;
          uVar16 = (int)uVar25 + 8;
          uVar25 = (ulong)uVar16;
          uVar32 = (ulong)(byte)*puVar45 << uVar27 | uVar32;
          puVar45 = puVar46;
        } while (uVar16 < uVar44);
      }
      uVar16 = uVar16 - (uint)local_110;
      uVar25 = (ulong)uVar16;
      uVar24 = (uint)uVar32;
      uVar32 = uVar32 >> (local_110 & 0x3f);
      uVar49 = (uVar24 & (-1 << (ulong)((uint)local_110 & 0x1f) ^ 0xffffffffU)) + uVar49;
    }
    if (uVar16 < 0xf) {
      if ((long)puVar3 - (long)puVar46 < 2) {
        do {
          uVar8 = *(ushort *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0xf08);
          uVar27 = (ulong)(short)uVar8;
          uVar16 = (uint)uVar25;
          puVar45 = puVar46;
          if ((short)uVar8 < 0) {
            if (10 < uVar16) {
              uVar24 = 0xc;
              do {
                sVar9 = *(short *)((long)param_1 +
                                  ((uVar32 >> ((ulong)(uVar24 - 2) & 0x3f) & 1) +
                                  (long)(int)~(uint)uVar27) * 2 + 0x1708);
                uVar27 = (ulong)sVar9;
                if (-1 < sVar9) break;
                bVar14 = uVar24 <= uVar16;
                uVar24 = uVar24 + 1;
              } while (bVar14);
              if (-1 < sVar9) break;
            }
          }
          else if ((0x1ff < uVar8) && (((uint)(uVar27 >> 9) & 0x7fffff) <= uVar16)) break;
LAB_00109718:
          uVar44 = (uint)local_110;
          if (puVar3 <= puVar45) {
            uVar16 = 0x1a;
            goto LAB_001089dc;
          }
          puVar46 = (uint *)((long)puVar45 + 1);
          uVar27 = uVar25 & 0x3f;
          uVar16 = (int)uVar25 + 8;
          uVar25 = (ulong)uVar16;
          uVar32 = (ulong)(byte)*puVar45 << uVar27 | uVar32;
        } while (uVar16 < 0xf);
      }
      else {
        uVar16 = (uint)uVar25 | 0x10;
        uVar32 = (ulong)(byte)*puVar46 << (uVar25 & 0x3f) |
                 (ulong)*(byte *)((long)puVar46 + 1) << ((ulong)((uint)uVar25 + 8) & 0x3f) | uVar32;
        puVar46 = (uint *)((long)puVar46 + 2);
      }
    }
    sVar9 = *(short *)((long)param_1 + (uVar32 & 0x3ff) * 2 + 0xf08);
    uVar24 = (uint)sVar9;
    if (sVar9 < 0) {
      uVar25 = 10;
      do {
        uVar27 = uVar25 & 0x3f;
        uVar25 = (ulong)((int)uVar25 + 1);
        uVar24 = (uint)*(short *)((long)param_1 +
                                 ((uVar32 >> uVar27 & 1) + (long)(int)~uVar24) * 2 + 0x1708);
      } while ((int)uVar24 < 0);
    }
    else {
      uVar25 = (ulong)((uint)(int)sVar9 >> 9);
      uVar24 = uVar24 & 0x1ff;
    }
    uVar32 = uVar32 >> (uVar25 & 0x3f);
    local_124 = *(uint *)(&DAT_00103dcc + (ulong)uVar24 * 4);
    uVar16 = uVar16 - (int)uVar25;
    uVar25 = (ulong)uVar16;
    if ((ulong)uVar24 - 0x1e < 0xffffffffffffffe6) {
      local_110 = 0;
    }
    else {
      local_110 = (ulong)*(uint *)(&DAT_00103e4c + (ulong)uVar24 * 4);
      puVar45 = puVar46;
      if (uVar16 < *(uint *)(&DAT_00103e4c + (ulong)uVar24 * 4)) {
LAB_001097bc:
        do {
          uVar44 = (uint)local_110;
          if (puVar3 <= puVar45) {
            uVar16 = 0x1b;
            goto LAB_001089dc;
          }
          puVar46 = (uint *)((long)puVar45 + 1);
          uVar27 = uVar25 & 0x3f;
          uVar16 = (int)uVar25 + 8;
          uVar25 = (ulong)uVar16;
          uVar32 = (ulong)(byte)*puVar45 << uVar27 | uVar32;
          puVar45 = puVar46;
        } while (uVar16 < uVar44);
      }
      uVar25 = (ulong)(uVar16 - (uint)local_110);
      uVar16 = (uint)uVar32;
      uVar32 = uVar32 >> (local_110 & 0x3f);
      local_124 = local_124 + (uVar16 & (-1 << (ulong)((uint)local_110 & 0x1f) ^ 0xffffffffU));
    }
    uVar44 = (uint)local_110;
    local_150 = (long)local_170 - (long)param_4;
    if (((param_7 >> 2 & 1) != 0) && (local_124 == 0 || local_150 < local_124)) {
      iVar22 = -1;
      uVar24 = 0x25;
      goto LAB_001082d0;
    }
    uVar27 = local_150 - local_124 & (ulong)pbVar2;
    pbVar26 = param_4 + uVar27;
    pbVar1 = local_170;
    if (local_170 <= pbVar26) {
      pbVar1 = pbVar26;
    }
    pbVar48 = local_170;
    if (pbVar19 < pbVar1 + uVar49) {
      while (uVar49 != 0) {
        uVar49 = uVar49 - 1;
        local_170 = pbVar48;
LAB_00109978:
        if (pbVar19 <= local_170) {
          iVar22 = 2;
          uVar24 = 0x35;
          uVar44 = (uint)local_110;
          goto LAB_001082d0;
        }
        uVar27 = local_150 - local_124;
        local_150 = local_150 + 1;
        *local_170 = param_4[uVar27 & (ulong)pbVar2];
        pbVar48 = local_170 + 1;
      }
      uVar49 = 0xffffffff;
    }
    else {
      uVar16 = uVar49 - 3;
      pbVar1 = pbVar26;
      if (2 < uVar49) {
        if (0x5c < uVar16) {
          uVar28 = (ulong)(uVar16 / 3 + 1);
          lVar30 = ((ulong)uVar16 / 3) * 3 + 3;
          if ((param_4 + lVar30 + uVar27 <= local_170) || (local_170 + lVar30 <= pbVar26)) {
            uVar38 = uVar28 & 0x7fffffe0;
            uVar49 = uVar49 + (int)uVar38 * -3;
            pbVar1 = pbVar26 + uVar38 * 3;
            pbVar48 = local_170 + uVar38 * 3;
            uVar27 = uVar38;
            do {
              pbVar12 = pbVar26 + 8;
              uVar50 = *(undefined8 *)pbVar26;
              uVar52 = *(undefined8 *)(pbVar26 + 0x18);
              uVar51 = *(undefined8 *)(pbVar26 + 0x10);
              uVar27 = uVar27 - 0x20;
              uVar56 = *(undefined8 *)(pbVar26 + 0x48);
              uVar55 = *(undefined8 *)(pbVar26 + 0x40);
              uVar54 = *(undefined8 *)(pbVar26 + 0x58);
              uVar53 = *(undefined8 *)(pbVar26 + 0x50);
              uVar58 = *(undefined8 *)(pbVar26 + 0x28);
              uVar57 = *(undefined8 *)(pbVar26 + 0x20);
              uVar60 = *(undefined8 *)(pbVar26 + 0x38);
              uVar59 = *(undefined8 *)(pbVar26 + 0x30);
              pbVar26 = pbVar26 + 0x60;
              *(undefined8 *)(local_170 + 8) = *(undefined8 *)pbVar12;
              *(undefined8 *)local_170 = uVar50;
              *(undefined8 *)(local_170 + 0x18) = uVar52;
              *(undefined8 *)(local_170 + 0x10) = uVar51;
              *(undefined8 *)(local_170 + 0x48) = uVar56;
              *(undefined8 *)(local_170 + 0x40) = uVar55;
              *(undefined8 *)(local_170 + 0x58) = uVar54;
              *(undefined8 *)(local_170 + 0x50) = uVar53;
              *(undefined8 *)(local_170 + 0x28) = uVar58;
              *(undefined8 *)(local_170 + 0x20) = uVar57;
              *(undefined8 *)(local_170 + 0x38) = uVar60;
              *(undefined8 *)(local_170 + 0x30) = uVar59;
              local_170 = local_170 + 0x60;
            } while (uVar27 != 0);
            local_170 = pbVar48;
            pbVar26 = pbVar1;
            if (uVar38 == uVar28) goto joined_r0x001098e8;
          }
        }
        do {
          uVar49 = uVar49 - 3;
          *local_170 = *pbVar26;
          local_170[1] = pbVar26[1];
          pbVar1 = pbVar26 + 3;
          local_170[2] = pbVar26[2];
          pbVar48 = local_170 + 3;
          local_170 = pbVar48;
          pbVar26 = pbVar1;
        } while (2 < uVar49);
      }
joined_r0x001098e8:
      if (uVar49 != 0) {
        *pbVar48 = *pbVar1;
        if (uVar49 == 2) {
          pbVar48[1] = pbVar1[1];
        }
        pbVar48 = pbVar48 + uVar49;
      }
    }
    goto LAB_0010933c;
  }
  uVar49 = 0x100;
LAB_00109558:
  uVar16 = (uint)uVar25;
  puVar45 = puVar46;
  if ((param_1[5] & 1) != 0) goto LAB_00109560;
  goto LAB_00108590;
code_r0x001099b8:
  puVar46 = (uint *)((long)puVar45 + 1);
  uVar24 = (uint)uVar25;
  uVar16 = uVar24 + 8;
  uVar32 = (ulong)(byte)*puVar45 << (uVar25 & 0x3f) | uVar32;
  uVar25 = (ulong)uVar16;
  puVar45 = puVar46;
  if (uVar24 < 0xfffffff8) goto LAB_001099d4;
  goto LAB_001099b0;
switchD_001082c4_caseD_0:
  local_110 = 0;
  uVar32 = 0;
  uVar49 = 0;
  local_124 = 0;
  uVar25 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 1;
  param_1[4] = 1;
  if ((param_7 & 1) == 0) {
    local_124 = 0;
    uVar25 = 0;
    uVar49 = local_124;
    goto LAB_00108590;
  }
switchD_001082c4_caseD_1:
  uVar44 = (uint)local_110;
  if (lVar30 < 1) {
    uVar16 = 1;
LAB_00108574:
    *param_1 = uVar16;
    iVar22 = -4;
    if ((param_7 & 2) != 0) {
      iVar22 = 1;
    }
  }
  else {
    puVar45 = (uint *)((long)param_2 + 1);
    param_1[2] = (uint)(byte)*param_2;
LAB_001083dc:
    uVar44 = (uint)local_110;
    if (puVar45 < puVar3) {
      puVar46 = (uint *)((long)puVar45 + 1);
      bVar7 = (byte)*puVar45;
      uVar49 = param_1[2];
      param_1[3] = (uint)bVar7;
      bVar14 = ((uint)bVar7 | uVar49 << 8) % 0x1f == 0;
      bVar13 = (bVar7 & 0x20) == 0;
      bVar15 = (uVar49 & 0xf) == 8;
      if ((param_7 >> 2 & 1) == 0) {
        uVar49 = 0x100 << (ulong)(uVar49 >> 4 & 0x1f);
        if ((uVar49 < 0x8001 && (byte *)(ulong)uVar49 <= pbVar2 + 1) &&
            ((bVar14 && bVar13) && bVar15)) {
LAB_0010855c:
          puVar45 = puVar46;
          uVar49 = 0;
LAB_00108590:
          uVar16 = (uint)uVar25;
          puVar46 = puVar45;
          uVar27 = uVar32;
          if (uVar16 < 3) {
LAB_001085a4:
            uVar44 = (uint)local_110;
            puVar45 = puVar46;
            uVar32 = uVar27;
            if (puVar3 <= puVar46) {
LAB_00108704:
              uVar16 = 3;
              goto LAB_00108718;
            }
            puVar45 = (uint *)((long)puVar46 + 1);
            uVar32 = uVar25 & 0x3f;
            iVar22 = (int)uVar25;
            uVar16 = iVar22 + 8;
            uVar25 = (ulong)uVar16;
            uVar32 = (ulong)(byte)*puVar46 << uVar32 | uVar27;
            if (uVar16 < 3) {
              if (puVar3 <= puVar45) goto LAB_00108704;
              puVar45 = (uint *)((long)puVar46 + 2);
              uVar32 = (ulong)*(byte *)((long)puVar46 + 1) << (uVar25 & 0x3f) | uVar27;
              uVar16 = iVar22 + 0x10;
            }
          }
          uVar44 = (uint)local_110;
          uVar24 = (uint)uVar32 & 7;
          uVar35 = (uint)uVar32 >> 1 & 3;
          uVar32 = uVar32 >> 3;
          uVar16 = uVar16 - 3;
          uVar25 = (ulong)uVar16;
          param_1[5] = uVar24;
          param_1[6] = uVar35;
          uVar50 = DAT_001034a0;
          puVar46 = puVar45;
          if (uVar24 < 2) {
LAB_00108600:
            uVar49 = 0;
            uVar25 = (ulong)(uVar16 & 0xfffffff8);
            uVar32 = uVar32 >> (uVar16 & 7);
            while( true ) {
              uVar16 = (uint)uVar25;
              if (3 < uVar49) break;
              puVar45 = puVar46;
              if (uVar16 == 0) {
LAB_001087b0:
                uVar44 = (uint)local_110;
                if (puVar3 <= puVar45) {
                  uVar16 = 7;
                  goto LAB_00108718;
                }
                uVar27 = (ulong)uVar49;
                puVar46 = (uint *)((long)puVar45 + 1);
                uVar49 = uVar49 + 1;
                *(char *)((long)param_1 + uVar27 + 0x2928) = (char)*puVar45;
              }
              else {
                if (uVar16 < 8) {
LAB_00108740:
                  uVar44 = (uint)local_110;
                  puVar45 = puVar46;
                  do {
                    if (puVar3 <= puVar45) {
                      uVar16 = 6;
                      goto LAB_001087d8;
                    }
                    puVar46 = (uint *)((long)puVar45 + 1);
                    uVar24 = (uint)uVar25;
                    uVar16 = uVar24 + 8;
                    uVar32 = (ulong)(byte)*puVar45 << (uVar25 & 0x3f) | uVar32;
                    uVar25 = (ulong)uVar16;
                    puVar45 = puVar46;
                  } while (0xfffffff7 < uVar24);
                }
                uVar27 = (ulong)uVar49;
                uVar25 = (ulong)(uVar16 - 8);
                uVar49 = uVar49 + 1;
                *(char *)((long)param_1 + uVar27 + 0x2928) = (char)uVar32;
                uVar32 = uVar32 >> 8;
              }
            }
            uVar49 = (uint)(ushort)param_1[0xa4a];
            pbVar48 = local_170;
            if ((ushort)(*(ushort *)((long)param_1 + 0x292a) ^ (ushort)param_1[0xa4a]) == 0xffff) {
              while ((uVar16 = (uint)uVar25, local_170 = pbVar48, uVar49 != 0 && (uVar16 != 0))) {
                if (uVar16 < 8) {
LAB_00108808:
                  uVar44 = (uint)local_110;
                  puVar45 = puVar46;
                  do {
                    if (puVar3 <= puVar45) {
                      uVar16 = 0x33;
                      goto LAB_001087d8;
                    }
                    puVar46 = (uint *)((long)puVar45 + 1);
                    uVar24 = (uint)uVar25;
                    uVar16 = uVar24 + 8;
                    uVar32 = (ulong)(byte)*puVar45 << (uVar25 & 0x3f) | uVar32;
                    uVar25 = (ulong)uVar16;
                    puVar45 = puVar46;
                  } while (0xfffffff7 < uVar24);
                }
                local_124 = (uint)uVar32 & 0xff;
                uVar32 = uVar32 >> 8;
                uVar25 = (ulong)(uVar16 - 8);
LAB_0010883c:
                if (pbVar19 <= local_170) {
                  iVar22 = 2;
                  uVar24 = 0x34;
                  uVar44 = (uint)local_110;
                  goto LAB_001082d0;
                }
                uVar49 = uVar49 - 1;
                pbVar48 = local_170 + 1;
                *local_170 = (byte)local_124;
              }
              for (; uVar49 != 0; uVar49 = uVar49 - (int)sVar4) {
LAB_001088b4:
                puVar45 = puVar46;
                if (pbVar19 <= local_170) {
                  iVar22 = 2;
                  uVar24 = 9;
                  uVar44 = (uint)local_110;
                  goto LAB_001082d0;
                }
LAB_001088bc:
                uVar44 = (uint)local_110;
                if (puVar3 <= puVar45) {
                  uVar16 = 0x26;
                  goto LAB_00108718;
                }
                sVar4 = (long)pbVar19 - (long)local_170;
                if ((ulong)((long)puVar3 - (long)puVar45) <=
                    (ulong)((long)pbVar19 - (long)local_170)) {
                  sVar4 = (long)puVar3 - (long)puVar45;
                }
                if (uVar49 <= sVar4) {
                  sVar4 = (ulong)uVar49;
                }
                memcpy(local_170,puVar45,sVar4);
                puVar46 = (uint *)((long)puVar45 + sVar4);
                local_170 = local_170 + sVar4;
              }
              goto LAB_00109558;
            }
            iVar22 = -1;
            uVar24 = 0x27;
            uVar44 = (uint)local_110;
            goto LAB_001082d0;
          }
          if (uVar35 == 1) {
            uVar16 = 1;
            param_1[0x14] = 0x8080808;
            param_1[0x15] = 0x8080808;
            param_1[0x12] = 0x8080808;
            param_1[0x13] = 0x8080808;
            param_1[0x37c] = 0x5050505;
            param_1[0x37d] = 0x5050505;
            param_1[0x37a] = 0x5050505;
            param_1[0x37b] = 0x5050505;
            param_1[0x380] = 0x5050505;
            param_1[0x381] = 0x5050505;
            param_1[0x37e] = 0x5050505;
            param_1[0x37f] = 0x5050505;
            *(undefined8 *)(param_1 + 0xb) = uVar50;
            param_1[0x18] = 0x8080808;
            param_1[0x19] = 0x8080808;
            param_1[0x16] = 0x8080808;
            param_1[0x17] = 0x8080808;
            param_1[0x1c] = 0x8080808;
            param_1[0x1d] = 0x8080808;
            param_1[0x1a] = 0x8080808;
            param_1[0x1b] = 0x8080808;
            param_1[0x20] = 0x8080808;
            param_1[0x21] = 0x8080808;
            param_1[0x1e] = 0x8080808;
            param_1[0x1f] = 0x8080808;
            param_1[0x24] = 0x8080808;
            param_1[0x25] = 0x8080808;
            param_1[0x22] = 0x8080808;
            param_1[0x23] = 0x8080808;
            param_1[0x28] = 0x8080808;
            param_1[0x29] = 0x8080808;
            param_1[0x26] = 0x8080808;
            param_1[0x27] = 0x8080808;
            param_1[0x2c] = 0x8080808;
            param_1[0x2d] = 0x8080808;
            param_1[0x2a] = 0x8080808;
            param_1[0x2b] = 0x8080808;
            param_1[0x30] = 0x8080808;
            param_1[0x31] = 0x8080808;
            param_1[0x2e] = 0x8080808;
            param_1[0x2f] = 0x8080808;
            param_1[0x34] = 0x8080808;
            param_1[0x35] = 0x8080808;
            param_1[0x32] = 0x8080808;
            param_1[0x33] = 0x8080808;
            param_1[0x38] = 0x9090909;
            param_1[0x39] = 0x9090909;
            param_1[0x36] = 0x9090909;
            param_1[0x37] = 0x9090909;
            param_1[0x3c] = 0x9090909;
            param_1[0x3d] = 0x9090909;
            param_1[0x3a] = 0x9090909;
            param_1[0x3b] = 0x9090909;
            param_1[0x40] = 0x9090909;
            param_1[0x41] = 0x9090909;
            param_1[0x3e] = 0x9090909;
            param_1[0x3f] = 0x9090909;
            param_1[0x44] = 0x9090909;
            param_1[0x45] = 0x9090909;
            param_1[0x42] = 0x9090909;
            param_1[0x43] = 0x9090909;
            param_1[0x48] = 0x9090909;
            param_1[0x49] = 0x9090909;
            param_1[0x46] = 0x9090909;
            param_1[0x47] = 0x9090909;
            param_1[0x4c] = 0x9090909;
            param_1[0x4d] = 0x9090909;
            param_1[0x4a] = 0x9090909;
            param_1[0x4b] = 0x9090909;
            param_1[0x52] = 0x7070707;
            param_1[0x53] = 0x7070707;
            param_1[0x54] = 0x7070707;
            param_1[0x55] = 0x7070707;
            param_1[0x56] = 0x7070707;
            param_1[0x57] = 0x7070707;
            param_1[0x58] = 0x8080808;
            param_1[0x59] = 0x8080808;
            param_1[0x50] = 0x9090909;
            param_1[0x51] = 0x9090909;
            param_1[0x4e] = 0x9090909;
            param_1[0x4f] = 0x9090909;
            goto LAB_00108c88;
          }
          if (uVar35 == 3) {
            iVar22 = -1;
            uVar24 = 10;
            goto LAB_001082d0;
          }
          uVar49 = 0;
          do {
            uVar27 = (ulong)uVar49;
            bVar7 = (&DAT_00103c2e)[uVar27];
            uVar16 = (uint)uVar25;
            if (uVar16 < bVar7) {
LAB_00108968:
              uVar44 = (uint)local_110;
              uVar27 = (ulong)uVar49;
              puVar45 = puVar46;
              do {
                if (puVar3 <= puVar45) {
                  uVar16 = 0xb;
                  goto LAB_001089dc;
                }
                puVar46 = (uint *)((long)puVar45 + 1);
                bVar7 = (&DAT_00103c2e)[uVar27];
                uVar28 = uVar25 & 0x3f;
                uVar16 = (int)uVar25 + 8;
                uVar25 = (ulong)uVar16;
                uVar32 = (ulong)(byte)*puVar45 << uVar28 | uVar32;
                puVar45 = puVar46;
              } while (uVar16 < bVar7);
            }
            uVar25 = (ulong)(uVar16 - bVar7);
            uVar49 = uVar49 + 1;
            uVar28 = uVar32 >> ((ulong)bVar7 & 0x3f);
            param_1[uVar27 + 0xb] =
                 ((uint)uVar32 & (-1 << (ulong)(bVar7 & 0x1f) ^ 0xffffffffU)) +
                 (&DAT_00103ecc)[uVar27];
            uVar32 = uVar28;
          } while (uVar49 < 3);
          uVar49 = 0;
          param_1[0x728] = 0;
          param_1[0x729] = 0;
          param_1[0x726] = 0;
          param_1[0x727] = 0;
          param_1[0x724] = 0;
          param_1[0x725] = 0;
          param_1[0x722] = 0;
          param_1[0x723] = 0;
          param_1[0x720] = 0;
          param_1[0x721] = 0;
          param_1[0x71e] = 0;
          param_1[0x71f] = 0;
          param_1[0x71c] = 0;
          param_1[0x71d] = 0;
          param_1[0x71a] = 0;
          param_1[0x71b] = 0;
          param_1[0x718] = 0;
          param_1[0x719] = 0;
          param_1[0x716] = 0;
          param_1[0x717] = 0;
          param_1[0x714] = 0;
          param_1[0x715] = 0;
          param_1[0x712] = 0;
          param_1[0x713] = 0;
          param_1[0x710] = 0;
          param_1[0x711] = 0;
          param_1[0x70e] = 0;
          param_1[0x70f] = 0;
          param_1[0x70c] = 0;
          param_1[0x70d] = 0;
          param_1[0x70a] = 0;
          param_1[0x70b] = 0;
          param_1[0x708] = 0;
          param_1[0x709] = 0;
          param_1[0x706] = 0;
          param_1[0x707] = 0;
          param_1[0x704] = 0;
          param_1[0x705] = 0;
          param_1[0x702] = 0;
          param_1[0x703] = 0;
          param_1[0x700] = 0;
          param_1[0x701] = 0;
          param_1[0x6fe] = 0;
          param_1[0x6ff] = 0;
          param_1[0x6fc] = 0;
          param_1[0x6fd] = 0;
          param_1[0x6fa] = 0;
          param_1[0x6fb] = 0;
          param_1[0x6f8] = 0;
          param_1[0x6f9] = 0;
          param_1[0x6f6] = 0;
          param_1[0x6f7] = 0;
          param_1[0x6f4] = 0;
          param_1[0x6f5] = 0;
          param_1[0x6f2] = 0;
          param_1[0x6f3] = 0;
          param_1[0x6f0] = 0;
          param_1[0x6f1] = 0;
          param_1[0x6ee] = 0;
          param_1[0x6ef] = 0;
          param_1[0x6ec] = 0;
          param_1[0x6ed] = 0;
          param_1[0x6ea] = 0;
          param_1[0x6eb] = 0;
          param_1[0x6e8] = 0;
          param_1[0x6e9] = 0;
          param_1[0x6e6] = 0;
          param_1[0x6e7] = 0;
          param_1[0x6e4] = 0;
          param_1[0x6e5] = 0;
          param_1[0x6e2] = 0;
          param_1[0x6e3] = 0;
LAB_00108bb4:
          uVar16 = (uint)uVar25;
          uVar32 = uVar28;
          if (param_1[0xd] <= uVar49) goto LAB_00108c0c;
          puVar45 = puVar46;
          if (uVar16 < 3) {
LAB_00108bc8:
            uVar44 = (uint)local_110;
            if (puVar3 <= puVar45) {
              uVar16 = 0xe;
LAB_001089dc:
              *param_1 = uVar16;
              iVar22 = -4;
              if ((param_7 & 2) != 0) {
                iVar22 = 1;
              }
              goto switchD_001082c4_caseD_4;
            }
            puVar46 = (uint *)((long)puVar45 + 1);
            uVar16 = (int)uVar25 + 8;
            uVar27 = (ulong)uVar16;
            uVar28 = (ulong)(byte)*puVar45 << (uVar25 & 0x3f) | uVar32;
            if (uVar16 < 3) {
              if (puVar3 <= puVar46) {
                uVar25 = (ulong)uVar16;
                uVar16 = 0xe;
                puVar45 = puVar46;
                uVar32 = uVar28;
                goto LAB_001089dc;
              }
              puVar46 = (uint *)((long)puVar45 + 2);
              uVar16 = (int)uVar25 + 0x10;
              uVar28 = (ulong)*(byte *)((long)puVar45 + 1) << (uVar27 & 0x3f) | uVar32;
            }
          }
          uVar32 = (ulong)uVar49;
          bVar7 = (byte)uVar28;
          uVar28 = uVar28 >> 3;
          uVar25 = (ulong)(uVar16 - 3);
          uVar49 = uVar49 + 1;
          *(byte *)((long)param_1 + (ulong)(byte)(&DAT_00104358)[uVar32] + 0x1b88) = bVar7 & 7;
          goto LAB_00108bb4;
        }
      }
      else if ((bVar14 && bVar13) && bVar15) goto LAB_0010855c;
      iVar22 = -1;
      uVar49 = 1;
      uVar24 = 0x24;
LAB_001082d0:
      *param_1 = uVar24;
      puVar45 = puVar46;
      local_170 = local_170;
      if ((param_2 < puVar46) &&
         (uVar16 = (uint)uVar25 - 8, local_170 = local_170, 7 < (uint)uVar25)) {
        uVar27 = (ulong)(uVar16 >> 3);
        if (~(ulong)param_2 + (long)puVar46 <= uVar27) {
          uVar27 = ~(ulong)param_2 + (long)puVar46;
        }
        uVar25 = (ulong)(uVar16 + (int)uVar27 * -8);
        puVar45 = (uint *)((long)puVar46 + ~uVar27);
        local_170 = local_170;
      }
    }
    else {
      *param_1 = 2;
      iVar22 = -4;
      if ((param_7 & 2) != 0) {
        iVar22 = 1;
      }
    }
  }
switchD_001082c4_caseD_4:
  param_1[8] = local_124;
  param_1[9] = uVar49;
  param_1[10] = uVar44;
  param_1[1] = (uint)uVar25;
  *(ulong *)(param_1 + 0xe) = uVar32 & (-1L << (uVar25 & 0x3f) ^ 0xffffffffffffffffU);
  *(ulong *)(param_1 + 0x10) = local_150;
  *param_3 = (long)puVar45 - (long)param_2;
  uVar25 = (long)local_170 - (long)param_5;
  *param_6 = uVar25;
  if (((param_7 & 9) != 0) && (-1 < iVar22)) {
    uVar16 = param_1[7] >> 0x10;
    uVar49 = param_1[7] & 0xffff;
    if (uVar25 != 0) {
      uVar32 = uVar25 % 0x15b0;
      do {
        if (uVar32 < 8) {
          uVar27 = uVar32;
          uVar28 = uVar32;
          pbVar19 = param_5;
          if (uVar32 != 0) goto LAB_00108b3c;
        }
        else {
          uVar38 = 0;
          do {
            pbVar19 = param_5 + uVar38;
            uVar38 = uVar38 + 8;
            iVar31 = uVar49 + *pbVar19;
            iVar17 = iVar31 + (uint)pbVar19[1];
            iVar20 = iVar17 + (uint)pbVar19[2];
            iVar29 = iVar20 + (uint)pbVar19[3];
            iVar33 = iVar29 + (uint)pbVar19[4];
            iVar47 = iVar33 + (uint)pbVar19[5];
            iVar37 = iVar47 + (uint)pbVar19[6];
            uVar49 = iVar37 + (uint)pbVar19[7];
            uVar16 = iVar31 + uVar16 + iVar17 + iVar20 + iVar29 + iVar33 + iVar47 + iVar37 + uVar49;
          } while ((int)uVar38 + 7U < (uint)uVar32);
          param_5 = param_5 + uVar38;
          uVar27 = uVar32 - (uVar38 & 0xffffffff);
          uVar28 = uVar27;
          pbVar19 = param_5;
          if ((uVar38 & 0xffffffff) <= uVar32 && uVar27 != 0) {
LAB_00108b3c:
            do {
              uVar27 = uVar27 - 1;
              uVar49 = uVar49 + *param_5;
              uVar16 = uVar49 + uVar16;
              param_5 = param_5 + 1;
            } while (uVar27 != 0);
            param_5 = pbVar19 + uVar28;
          }
        }
        uVar25 = uVar25 - uVar32;
        uVar32 = 0x15b0;
        uVar49 = uVar49 % 0xfff1;
        uVar16 = uVar16 % 0xfff1;
      } while (uVar25 != 0);
    }
    uVar49 = uVar49 | uVar16 << 0x10;
    param_1[7] = uVar49;
    if (iVar22 == 0) {
      if ((param_7 & 1) == 0) {
        iVar22 = 0;
      }
      else {
        iVar22 = 0;
        if (uVar49 != param_1[4]) {
          iVar22 = -2;
        }
      }
    }
  }
LAB_00108b7c:
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return iVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


