// Function: mz_zip_reader_locate_file_v2
// Entry: 0010cd28

undefined8
mz_zip_reader_locate_file_v2(long param_1,byte *param_2,byte *param_3,uint param_4,uint *param_5)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  size_t __n;
  ulong uVar23;
  
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (plVar21 = *(long **)(param_1 + 0x68), plVar21 == (long *)0x0)) {
LAB_0010ceb8:
    uVar12 = 0x18;
  }
  else {
    if (((*(byte *)((long)plVar21 + 0x61) >> 3 & 1) == 0) &&
       (((*(int *)(param_1 + 0x14) == 1 && (param_3 == (byte *)0x0)) && ((param_4 & 0x300) == 0))))
    {
      if (plVar21[9] == 0) {
        sVar8 = strlen((char *)param_2);
        if (sVar8 < 0x10000) {
          __n = 0;
          goto LAB_0010ceec;
        }
        goto LAB_0010ceb8;
      }
      lVar20 = plVar21[8];
      uVar9 = *(uint *)(param_1 + 0x10);
      sVar8 = strlen((char *)param_2);
      if (param_5 != (uint *)0x0) {
        *param_5 = 0;
      }
      if (uVar9 != 0) {
        lVar13 = 0;
        lVar18 = (ulong)uVar9 - 1;
        do {
          uVar23 = lVar13 + (lVar18 - lVar13 >> 1);
          uVar17 = *(uint *)(lVar20 + (uVar23 & 0xffffffff) * 4);
          lVar2 = *plVar21 + (ulong)*(uint *)(plVar21[4] + (ulong)uVar17 * 4);
          uVar4 = *(ushort *)(lVar2 + 0x1c);
          pbVar19 = (byte *)(lVar2 + 0x2e);
          uVar6 = (uint)sVar8;
          uVar9 = (uint)uVar4;
          if (uVar6 <= uVar4) {
            uVar9 = uVar6;
          }
          pbVar10 = pbVar19 + uVar9;
          pbVar16 = param_2;
          if (uVar9 == 0) {
            uVar9 = 0;
            uVar11 = 0;
          }
          else {
            do {
              bVar5 = *pbVar19;
              bVar3 = *pbVar16;
              uVar9 = bVar5 + 0x20;
              if (0x19 < bVar5 - 0x41) {
                uVar9 = (uint)bVar5;
              }
              uVar11 = bVar3 + 0x20;
              if (0x19 < bVar3 - 0x41) {
                uVar11 = (uint)bVar3;
              }
              if (uVar9 != uVar11) break;
              pbVar19 = pbVar19 + 1;
              pbVar16 = pbVar16 + 1;
              uVar11 = uVar9;
            } while (pbVar19 < pbVar10);
          }
          iVar7 = uVar4 - uVar6;
          if (pbVar19 != pbVar10) {
            iVar7 = uVar9 - uVar11;
          }
          if (iVar7 == 0) {
            if (param_5 != (uint *)0x0) {
              *param_5 = uVar17;
            }
            return 1;
          }
          lVar2 = uVar23 - 1;
          if (iVar7 < 0) {
            lVar13 = uVar23 + 1;
            lVar2 = lVar18;
          }
          lVar18 = lVar2;
        } while (lVar13 <= lVar18);
      }
    }
    else {
      sVar8 = strlen((char *)param_2);
      if (sVar8 >> 0x10 != 0) goto LAB_0010ceb8;
      if (param_3 == (byte *)0x0) {
        __n = 0;
      }
      else {
        __n = strlen((char *)param_3);
        if (__n >> 0x10 != 0) goto LAB_0010ceb8;
      }
LAB_0010ceec:
      uVar9 = *(uint *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar23 = 0;
        lVar13 = **(long **)(param_1 + 0x68);
        lVar20 = (*(long **)(param_1 + 0x68))[4];
        do {
          lVar18 = lVar13 + (ulong)*(uint *)(lVar20 + uVar23 * 4);
          uVar4 = *(ushort *)(lVar18 + 0x1c);
          uVar22 = (ulong)uVar4;
          if (sVar8 <= uVar22) {
            pbVar19 = (byte *)(lVar18 + 0x2e);
            if (__n == 0) goto LAB_0010cfc4;
            if (__n != *(ushort *)(lVar18 + 0x20)) goto LAB_0010cf1c;
            if ((param_4 >> 8 & 1) == 0) {
              pbVar10 = pbVar19 + *(ushort *)(lVar18 + 0x1e) + uVar22;
              sVar14 = __n;
              pbVar16 = param_3;
              if (*(ushort *)(lVar18 + 0x20) != 0) {
                do {
                  bVar5 = *pbVar16;
                  bVar3 = *pbVar10;
                  uVar17 = bVar5 + 0x20;
                  if (0x19 < bVar5 - 0x41) {
                    uVar17 = (uint)bVar5;
                  }
                  uVar6 = bVar3 + 0x20;
                  if (0x19 < bVar3 - 0x41) {
                    uVar6 = (uint)bVar3;
                  }
                  if (uVar17 != uVar6) goto LAB_0010cf1c;
                  sVar14 = sVar14 - 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar16 = pbVar16 + 1;
                } while (sVar14 != 0);
              }
LAB_0010cfc4:
              if (((param_4 >> 9 & 1) != 0) && (uVar4 != 0)) {
                do {
                  if (pbVar19[uVar22 - 1 & 0xffffffff] - 0x2f < 0x2e &&
                      (1L << ((ulong)(pbVar19[uVar22 - 1 & 0xffffffff] - 0x2f) & 0x3f) &
                      0x200000000801U) != 0) goto LAB_0010d010;
                  bVar1 = 1 < (long)uVar22;
                  uVar22 = uVar22 - 1;
                } while (bVar1);
                uVar22 = 0;
LAB_0010d010:
                pbVar19 = pbVar19 + (uVar22 & 0xffffffff);
                uVar22 = (ulong)((uint)uVar4 - (int)uVar22);
              }
              if (sVar8 != uVar22) goto LAB_0010cf1c;
              if ((param_4 >> 8 & 1) == 0) {
                uVar15 = sVar8;
                pbVar10 = param_2;
                if ((int)uVar22 != 0) {
                  do {
                    bVar5 = *pbVar10;
                    bVar3 = *pbVar19;
                    uVar17 = bVar5 + 0x20;
                    if (0x19 < bVar5 - 0x41) {
                      uVar17 = (uint)bVar5;
                    }
                    uVar6 = bVar3 + 0x20;
                    if (0x19 < bVar3 - 0x41) {
                      uVar6 = (uint)bVar3;
                    }
                    if (uVar17 != uVar6) goto LAB_0010cf1c;
                    uVar15 = uVar15 - 1;
                    pbVar10 = pbVar10 + 1;
                    pbVar19 = pbVar19 + 1;
                  } while (uVar15 != 0);
                }
                bVar5 = true;
              }
              else {
                iVar7 = memcmp(param_2,pbVar19,sVar8);
                bVar5 = iVar7 == 0;
              }
              if ((param_5 != (uint *)0x0) && (bVar1 = (bool)bVar5 != false, bVar5 = 0, bVar1)) {
                *param_5 = (uint)uVar23;
                return 1;
              }
            }
            else {
              iVar7 = memcmp(param_3,pbVar19 + *(ushort *)(lVar18 + 0x1e) + uVar22,__n);
              if (iVar7 == 0) goto LAB_0010cfc4;
              bVar5 = 4;
            }
            if ((bVar5 | 4) != 4) {
              return 1;
            }
          }
LAB_0010cf1c:
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar9);
      }
    }
    uVar12 = 0x1c;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar12;
  return 0;
}


