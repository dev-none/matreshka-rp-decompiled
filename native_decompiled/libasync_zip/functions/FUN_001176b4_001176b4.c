// Function: FUN_001176b4
// Entry: 001176b4

void FUN_001176b4(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  bool bVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  
  uVar17 = *(uint *)(param_1 + 0x10);
  uVar18 = (ulong)uVar17;
  if (1 < uVar17) {
    plVar15 = *(long **)(param_1 + 0x68);
    puVar16 = (uint *)plVar15[8];
    uVar23 = (ulong)(uVar17 - 2 >> 1);
    do {
      uVar22 = uVar23 << 1 | 1;
      if (uVar22 < uVar18) {
        lVar19 = *plVar15;
        lVar20 = plVar15[4];
        uVar8 = uVar23;
        do {
          uVar1 = uVar8 * 2 + 2;
          if (uVar1 < uVar18) {
            lVar21 = lVar19 + (ulong)*(uint *)(lVar20 + (ulong)puVar16[uVar22] * 4);
            lVar24 = lVar19 + (ulong)*(uint *)(lVar20 + (ulong)puVar16[uVar1] * 4);
            uVar6 = *(ushort *)(lVar21 + 0x1c);
            uVar7 = *(ushort *)(lVar24 + 0x1c);
            pbVar10 = (byte *)(lVar21 + 0x2e);
            uVar12 = (uint)uVar6;
            if ((uint)uVar7 <= (uint)uVar6) {
              uVar12 = (uint)uVar7;
            }
            pbVar2 = pbVar10 + uVar12;
            if (uVar12 == 0) {
              uVar12 = 0;
              uVar13 = 0;
            }
            else {
              pbVar11 = (byte *)(lVar24 + 0x2e);
              do {
                bVar4 = *pbVar10;
                bVar5 = *pbVar11;
                uVar12 = bVar4 + 0x20;
                if (0x19 < bVar4 - 0x41) {
                  uVar12 = (uint)bVar4;
                }
                uVar13 = bVar5 + 0x20;
                if (0x19 < bVar5 - 0x41) {
                  uVar13 = (uint)bVar5;
                }
                if (uVar12 != uVar13) break;
                pbVar10 = pbVar10 + 1;
                pbVar11 = pbVar11 + 1;
                uVar13 = uVar12;
              } while (pbVar10 < pbVar2);
            }
            bVar9 = uVar6 < uVar7;
            if (pbVar10 != pbVar2) {
              bVar9 = uVar12 < uVar13;
            }
            uVar12 = (uint)bVar9;
          }
          else {
            uVar12 = 0;
          }
          uVar1 = uVar22 + uVar12;
          uVar13 = puVar16[uVar8];
          lVar21 = lVar19 + (ulong)*(uint *)(lVar20 + (ulong)uVar13 * 4);
          uVar6 = *(ushort *)(lVar21 + 0x1c);
          pbVar10 = (byte *)(lVar21 + 0x2e);
          lVar21 = lVar19 + (ulong)*(uint *)(lVar20 + (ulong)puVar16[uVar1] * 4);
          uVar7 = *(ushort *)(lVar21 + 0x1c);
          uVar12 = (uint)uVar6;
          if ((uint)uVar7 <= (uint)uVar6) {
            uVar12 = (uint)uVar7;
          }
          pbVar2 = pbVar10 + uVar12;
          if (uVar12 == 0) {
            uVar12 = 0;
            uVar14 = 0;
          }
          else {
            pbVar11 = (byte *)(lVar21 + 0x2e);
            do {
              bVar4 = *pbVar10;
              bVar5 = *pbVar11;
              uVar12 = bVar4 + 0x20;
              if (0x19 < bVar4 - 0x41) {
                uVar12 = (uint)bVar4;
              }
              uVar14 = bVar5 + 0x20;
              if (0x19 < bVar5 - 0x41) {
                uVar14 = (uint)bVar5;
              }
              if (uVar12 != uVar14) break;
              pbVar10 = pbVar10 + 1;
              pbVar11 = pbVar11 + 1;
              uVar14 = uVar12;
            } while (pbVar10 < pbVar2);
          }
          bVar9 = uVar7 <= uVar6;
          if (pbVar10 != pbVar2) {
            bVar9 = uVar14 <= uVar12;
          }
          if (bVar9) break;
          puVar16[uVar8] = puVar16[uVar1];
          uVar22 = uVar1 * 2 | 1;
          puVar16[uVar1] = uVar13;
          uVar8 = uVar1;
        } while (uVar22 < uVar18);
      }
      bVar9 = uVar23 != 0;
      uVar23 = uVar23 - 1;
    } while (bVar9);
    uVar17 = uVar17 - 1;
    uVar18 = (ulong)uVar17;
    while (uVar17 != 0) {
      uVar17 = puVar16[uVar18];
      puVar16[uVar18] = *puVar16;
      *puVar16 = uVar17;
      if (1 < uVar18) {
        lVar20 = *plVar15;
        lVar21 = plVar15[4];
        lVar24 = 0;
        uVar23 = 1;
        lVar19 = 0;
        do {
          if (lVar24 + 2U < uVar18) {
            lVar3 = lVar20 + (ulong)*(uint *)(lVar21 + (ulong)puVar16[uVar23] * 4);
            lVar24 = lVar20 + (ulong)*(uint *)(lVar21 + (ulong)puVar16[lVar24 + 2U] * 4);
            uVar6 = *(ushort *)(lVar3 + 0x1c);
            uVar7 = *(ushort *)(lVar24 + 0x1c);
            pbVar10 = (byte *)(lVar3 + 0x2e);
            uVar12 = (uint)uVar6;
            if ((uint)uVar7 <= (uint)uVar6) {
              uVar12 = (uint)uVar7;
            }
            pbVar2 = pbVar10 + uVar12;
            if (uVar12 == 0) {
              uVar12 = 0;
              uVar13 = 0;
            }
            else {
              pbVar11 = (byte *)(lVar24 + 0x2e);
              do {
                bVar4 = *pbVar10;
                bVar5 = *pbVar11;
                uVar12 = bVar4 + 0x20;
                if (0x19 < bVar4 - 0x41) {
                  uVar12 = (uint)bVar4;
                }
                uVar13 = bVar5 + 0x20;
                if (0x19 < bVar5 - 0x41) {
                  uVar13 = (uint)bVar5;
                }
                if (uVar12 != uVar13) break;
                pbVar10 = pbVar10 + 1;
                pbVar11 = pbVar11 + 1;
                uVar13 = uVar12;
              } while (pbVar10 < pbVar2);
            }
            bVar9 = uVar6 < uVar7;
            if (pbVar10 != pbVar2) {
              bVar9 = uVar12 < uVar13;
            }
            uVar12 = (uint)bVar9;
          }
          else {
            uVar12 = 0;
          }
          lVar3 = uVar23 + uVar12;
          lVar24 = lVar20 + (ulong)*(uint *)(lVar21 + (ulong)uVar17 * 4);
          uVar6 = *(ushort *)(lVar24 + 0x1c);
          pbVar10 = (byte *)(lVar24 + 0x2e);
          lVar24 = lVar20 + (ulong)*(uint *)(lVar21 + (ulong)puVar16[lVar3] * 4);
          uVar7 = *(ushort *)(lVar24 + 0x1c);
          uVar12 = (uint)uVar6;
          if ((uint)uVar7 <= (uint)uVar6) {
            uVar12 = (uint)uVar7;
          }
          pbVar2 = pbVar10 + uVar12;
          if (uVar12 == 0) {
            uVar12 = 0;
            uVar13 = 0;
          }
          else {
            pbVar11 = (byte *)(lVar24 + 0x2e);
            do {
              bVar4 = *pbVar10;
              bVar5 = *pbVar11;
              uVar12 = bVar4 + 0x20;
              if (0x19 < bVar4 - 0x41) {
                uVar12 = (uint)bVar4;
              }
              uVar13 = bVar5 + 0x20;
              if (0x19 < bVar5 - 0x41) {
                uVar13 = (uint)bVar5;
              }
              if (uVar12 != uVar13) break;
              pbVar10 = pbVar10 + 1;
              pbVar11 = pbVar11 + 1;
              uVar13 = uVar12;
            } while (pbVar10 < pbVar2);
          }
          bVar9 = uVar7 <= uVar6;
          if (pbVar10 != pbVar2) {
            bVar9 = uVar13 <= uVar12;
          }
          if (bVar9) break;
          puVar16[lVar19] = puVar16[lVar3];
          lVar24 = lVar3 * 2;
          uVar23 = lVar3 * 2 | 1;
          puVar16[lVar3] = uVar17;
          lVar19 = lVar3;
        } while (uVar23 < uVar18);
      }
      uVar18 = uVar18 - 1;
      uVar17 = (uint)uVar18;
    }
  }
  return;
}


