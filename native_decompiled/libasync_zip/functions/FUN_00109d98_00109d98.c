// Function: FUN_00109d98
// Entry: 00109d98

uint FUN_00109d98(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  ushort uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  ulong uVar29;
  
  uVar29 = *(ulong *)(param_1 + 0xb8);
  iVar2 = *(int *)(param_1 + 0xa8);
  lVar1 = param_1 + 0x81ca;
  pbVar27 = *(byte **)(param_1 + 0xb0);
  do {
    pbVar28 = pbVar27;
    if (uVar29 == 0) {
      if ((iVar2 == 0) || (uVar9 = *(uint *)(param_1 + 0x28), uVar9 == 0)) {
        uVar29 = 0;
        goto LAB_0010a658;
      }
      uVar20 = *(uint *)(param_1 + 0x2c);
      if (1 < uVar20 + uVar9) goto LAB_00109e44;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x28);
      uVar20 = *(uint *)(param_1 + 0x2c);
      if (uVar20 + uVar9 < 2) {
        uVar18 = uVar9;
        if (uVar9 < 0x103) {
          uVar18 = 0x102;
        }
        uVar24 = 0;
        do {
          iVar22 = (int)uVar24;
          if (uVar18 - uVar9 == iVar22) {
            pbVar28 = pbVar27 + uVar24;
            uVar29 = uVar29 - uVar24;
            uVar21 = 0x8000 - uVar18;
            if (uVar20 <= 0x8000 - uVar18) {
              uVar21 = uVar20;
            }
            *(uint *)(param_1 + 0x2c) = uVar21;
            goto LAB_0010a014;
          }
          iVar12 = *(int *)(param_1 + 0x24);
          bVar5 = pbVar27[uVar24];
          uVar21 = uVar9 + iVar22 + iVar12 & 0x7fff;
          *(byte *)(param_1 + (ulong)uVar21 + 200) = bVar5;
          if (uVar21 < 0x101) {
            *(byte *)(param_1 + (ulong)(uVar21 | 0x8000) + 200) = bVar5;
          }
          *(uint *)(param_1 + 0x28) = uVar9 + iVar22 + 1;
          if (2 < uVar9 + uVar20 + 1 + iVar22) {
            uVar10 = (uVar9 - 2) + iVar22 + iVar12;
            uVar21 = uVar10 & 0x7fff;
            lVar25 = param_1 + ((ulong)bVar5 ^
                                (ulong)*(byte *)(param_1 + 200 +
                                                (ulong)(uVar9 + 0x7fff + iVar22 + iVar12 & 0x7fff))
                                << 5 ^ ((ulong)*(byte *)(param_1 + 200 + (ulong)uVar21) & 0x1f) <<
                                       10) * 2;
            uVar6 = *(undefined2 *)(lVar25 + 0x292aa);
            *(short *)(lVar25 + 0x292aa) = (short)uVar10;
            *(undefined2 *)(param_1 + (ulong)uVar21 * 2 + 0x192aa) = uVar6;
          }
          uVar24 = uVar24 + 1;
        } while (uVar29 != uVar24);
        uVar29 = 0;
        uVar9 = uVar9 + (int)uVar24;
        pbVar28 = pbVar27 + uVar24;
      }
      else {
LAB_00109e44:
        uVar18 = *(int *)(param_1 + 0x24) + uVar9;
        uVar21 = uVar18 - 2;
        uVar24 = uVar29;
        if (0x102 - uVar9 <= uVar29) {
          uVar24 = (ulong)(0x102 - uVar9);
        }
        bVar5 = *(byte *)(param_1 + 200 + (ulong)(uVar21 & 0x7fff));
        bVar4 = *(byte *)(param_1 + 200 + (ulong)(uVar18 - 1 & 0x7fff));
        uVar9 = uVar9 + (int)uVar24;
        uVar29 = uVar29 - uVar24;
        *(uint *)(param_1 + 0x28) = uVar9;
        if (uVar24 != 0) {
          uVar10 = (uint)bVar4 ^ (uint)bVar5 << 5;
          pbVar28 = pbVar27 + uVar24;
          do {
            uVar18 = uVar18 & 0x7fff;
            bVar5 = *pbVar27;
            *(byte *)(param_1 + (ulong)uVar18 + 200) = bVar5;
            if (uVar18 < 0x101) {
              *(byte *)(param_1 + (ulong)(uVar18 | 0x8000) + 200) = bVar5;
            }
            uVar24 = uVar24 - 1;
            uVar18 = uVar18 + 1;
            uVar10 = (uVar10 & 0x3ff) << 5 ^ (uint)bVar5;
            uVar3 = uVar21 & 0x7fff;
            lVar25 = param_1 + (ulong)uVar10 * 2;
            uVar6 = *(undefined2 *)(lVar25 + 0x292aa);
            *(short *)(lVar25 + 0x292aa) = (short)uVar21;
            uVar21 = uVar21 + 1;
            *(undefined2 *)(param_1 + (ulong)uVar3 * 2 + 0x192aa) = uVar6;
            pbVar27 = pbVar27 + 1;
          } while (uVar24 != 0);
        }
      }
    }
    uVar21 = 0x8000 - uVar9;
    if (uVar20 <= 0x8000 - uVar9) {
      uVar21 = uVar20;
    }
    *(uint *)(param_1 + 0x2c) = uVar21;
    uVar18 = uVar9;
    if ((iVar2 == 0) && (pbVar27 = pbVar28, uVar9 < 0x102)) {
LAB_0010a658:
      *(byte **)(param_1 + 0xb0) = pbVar27;
      *(ulong *)(param_1 + 0xb8) = uVar29;
      return 1;
    }
LAB_0010a014:
    uVar20 = *(uint *)(param_1 + 0x68);
    uVar10 = *(uint *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar9 = 2;
    if (uVar20 != 0) {
      uVar9 = uVar20;
    }
    uVar24 = (ulong)uVar3 & 0x7fff;
    uVar23 = (uint)uVar24;
    if ((uVar10 & 0x90000) == 0) {
      if ((uVar9 < uVar18) &&
         (iVar22 = *(int *)(param_1 + (ulong)(0x1f < uVar9) * 4 + 0x14) + -1, iVar22 != 0)) {
        uVar26 = 0;
        cVar8 = *(char *)(param_1 + 200 + (ulong)(uVar23 + uVar9));
        cVar11 = *(char *)(param_1 + 200 + (ulong)((uVar23 + uVar9) - 1));
        uVar14 = (ulong)uVar9;
        uVar19 = uVar24;
        do {
          iVar12 = 1 - iVar22;
          while( true ) {
            uVar7 = *(ushort *)(param_1 + uVar19 * 2 + 0x192aa);
            if ((uVar7 == 0) || (uVar15 = uVar3 - uVar7 & 0xffff, uVar21 < uVar15))
            goto LAB_0010a254;
            uVar19 = (ulong)uVar7 & 0x7fff;
            uVar13 = (uint)uVar14;
            uVar16 = uVar13 + (int)uVar19;
            if ((*(char *)(param_1 + (ulong)uVar16 + 200) == cVar8) &&
               (*(char *)(param_1 + (ulong)(uVar16 - 1) + 200) == cVar11)) break;
            uVar7 = *(ushort *)(param_1 + uVar19 * 2 + 0x192aa);
            if ((uVar7 == 0) || (uVar15 = uVar3 - uVar7 & 0xffff, uVar21 < uVar15))
            goto LAB_0010a254;
            uVar19 = (ulong)uVar7 & 0x7fff;
            uVar16 = uVar13 + (int)uVar19;
            if ((*(char *)(param_1 + (ulong)uVar16 + 200) == cVar8) &&
               (*(char *)(param_1 + (ulong)(uVar16 - 1) + 200) == cVar11)) break;
            uVar7 = *(ushort *)(param_1 + uVar19 * 2 + 0x192aa);
            if ((uVar7 == 0) || (uVar15 = uVar3 - uVar7 & 0xffff, uVar21 < uVar15))
            goto LAB_0010a254;
            uVar19 = (ulong)(uVar7 & 0x7fff);
            uVar16 = uVar13 + (uVar7 & 0x7fff);
            if ((*(char *)(param_1 + (ulong)uVar16 + 200) == cVar8) &&
               (*(char *)(param_1 + (ulong)(uVar16 - 1) + 200) == cVar11)) break;
            iVar12 = iVar12 + 1;
            if (iVar12 == 1) goto LAB_0010a254;
          }
          if (uVar15 == 0) break;
          uVar17 = 0;
          do {
            if (*(char *)(param_1 + 200 + uVar24 + uVar17) !=
                *(char *)(param_1 + 200 + uVar19 + uVar17)) goto LAB_0010a1f4;
            uVar17 = uVar17 + 1;
          } while (uVar18 != (uint)uVar17);
          uVar17 = (ulong)uVar18;
LAB_0010a1f4:
          uVar16 = (uint)uVar17;
          if (uVar13 < uVar16) {
            uVar9 = uVar18;
            uVar26 = uVar15;
            if (uVar16 == uVar18) break;
            uVar14 = uVar17 & 0xffffffff;
            cVar8 = *(char *)(param_1 + 200 + (ulong)(uVar16 + uVar23));
            cVar11 = *(char *)(param_1 + 200 + (ulong)((uVar16 + uVar23) - 1));
            uVar9 = uVar16;
          }
          iVar22 = -iVar12;
        } while (iVar12 != 0);
      }
      else {
        uVar26 = 0;
      }
    }
    else {
      uVar26 = 0;
      if ((uVar21 != 0) && ((uVar10 >> 0x13 & 1) == 0)) {
        if (uVar18 == 0) {
          uVar9 = 0;
        }
        else {
          uVar19 = 0;
          do {
            uVar9 = (uint)uVar19;
            if (*(char *)(param_1 + (ulong)((uVar3 & 0x7fff) + (uint)uVar19) + 200) !=
                *(char *)(param_1 + (ulong)(uVar3 - 1 & 0x7fff) + 200)) break;
            uVar19 = uVar19 + 1;
            uVar9 = uVar18;
          } while (uVar18 != uVar19);
        }
        uVar26 = (uint)(2 < uVar9);
        if (uVar9 < 3) {
          uVar9 = 0;
        }
      }
    }
LAB_0010a254:
    if ((((uVar26 & 0xffffe000) == 0 || uVar9 != 3) && (uVar23 != uVar26)) &&
       (((uVar10 >> 0x11 & 1) == 0 || (5 < uVar9)))) {
      if (uVar20 == 0) {
        if (uVar26 == 0) {
          iVar22 = *(int *)(param_1 + 0x54);
          pbVar27 = *(byte **)(param_1 + 0x30);
          goto LAB_0010a560;
        }
        if (((*(int *)(param_1 + 0x1c) == 0) && ((uVar10 >> 0x10 & 1) == 0)) && (uVar9 < 0x80))
        goto LAB_0010a634;
        *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar9;
        **(char **)(param_1 + 0x30) = (char)uVar9 + -3;
        uVar20 = uVar26 - 1;
        *(char *)(*(long *)(param_1 + 0x30) + 1) = (char)uVar20;
        *(char *)(*(long *)(param_1 + 0x30) + 2) = (char)(uVar20 >> 8);
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 3;
        **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1 | 0x80;
        iVar22 = *(int *)(param_1 + 0x50) + -1;
        *(int *)(param_1 + 0x50) = iVar22;
        if (iVar22 == 0) {
          lVar25 = *(long *)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x50) = 8;
          *(long *)(param_1 + 0x30) = lVar25 + 1;
          *(long *)(param_1 + 0x38) = lVar25;
        }
        pbVar27 = &DAT_00103ed8 + ((ulong)uVar20 & 0x1ff);
        if (0x200 < uVar26) {
          pbVar27 = &DAT_001040d8 + ((ulong)(uVar20 >> 8) & 0x7f);
        }
        bVar5 = *pbVar27;
LAB_0010a528:
        lVar25 = param_1 + (ulong)bVar5 * 2;
        *(short *)(lVar25 + 0x840a) = *(short *)(lVar25 + 0x840a) + 1;
        *(short *)(lVar1 + (ulong)*(ushort *)(&DAT_00104158 + (ulong)(uVar9 - 3) * 2) * 2) =
             *(short *)(lVar1 + (ulong)*(ushort *)(&DAT_00104158 + (ulong)(uVar9 - 3) * 2) * 2) + 1;
      }
      else {
        iVar22 = *(int *)(param_1 + 0x54);
        pbVar27 = *(byte **)(param_1 + 0x30);
        if (uVar9 <= uVar20) goto LAB_0010a280;
        uVar20 = *(uint *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x54) = iVar22 + 1;
        *(byte **)(param_1 + 0x30) = pbVar27 + 1;
        *pbVar27 = (byte)uVar20;
        **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1;
        iVar22 = *(int *)(param_1 + 0x50) + -1;
        *(int *)(param_1 + 0x50) = iVar22;
        if (iVar22 == 0) {
          lVar25 = *(long *)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x50) = 8;
          *(long *)(param_1 + 0x30) = lVar25 + 1;
          *(long *)(param_1 + 0x38) = lVar25;
        }
        lVar25 = ((ulong)uVar20 & 0xff) * 2;
        *(short *)(lVar1 + lVar25) = *(short *)(lVar1 + lVar25) + 1;
        if (0x7f < uVar9) {
          *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar9;
          **(char **)(param_1 + 0x30) = (char)uVar9 + -3;
          uVar26 = uVar26 - 1;
          *(char *)(*(long *)(param_1 + 0x30) + 1) = (char)uVar26;
          *(char *)(*(long *)(param_1 + 0x30) + 2) = (char)(uVar26 >> 8);
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 3;
          **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1 | 0x80;
          iVar22 = *(int *)(param_1 + 0x50) + -1;
          *(int *)(param_1 + 0x50) = iVar22;
          if (iVar22 == 0) {
            lVar25 = *(long *)(param_1 + 0x30);
            *(undefined4 *)(param_1 + 0x50) = 8;
            *(long *)(param_1 + 0x30) = lVar25 + 1;
            *(long *)(param_1 + 0x38) = lVar25;
          }
          pbVar27 = &DAT_00103ed8 + ((ulong)uVar26 & 0x1ff);
          if (0x1ff < uVar26) {
            pbVar27 = &DAT_001040d8 + ((ulong)(uVar26 >> 8) & 0x7f);
          }
          bVar5 = *pbVar27;
          *(undefined4 *)(param_1 + 0x68) = 0;
          goto LAB_0010a528;
        }
LAB_0010a634:
        *(uint *)(param_1 + 100) = uVar26;
        bVar5 = *(byte *)(param_1 + uVar24 + 200);
        *(uint *)(param_1 + 0x68) = uVar9;
        *(uint *)(param_1 + 0x6c) = (uint)bVar5;
LAB_0010a5c0:
        uVar9 = 1;
      }
    }
    else {
      iVar22 = *(int *)(param_1 + 0x54);
      pbVar27 = *(byte **)(param_1 + 0x30);
      if (uVar20 == 0) {
LAB_0010a560:
        *(int *)(param_1 + 0x54) = iVar22 + 1;
        bVar5 = *(byte *)(param_1 + uVar24 + 200);
        *(byte **)(param_1 + 0x30) = pbVar27 + 1;
        *pbVar27 = bVar5;
        **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1;
        iVar22 = *(int *)(param_1 + 0x50) + -1;
        *(int *)(param_1 + 0x50) = iVar22;
        if (iVar22 == 0) {
          lVar25 = *(long *)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x50) = 8;
          *(long *)(param_1 + 0x30) = lVar25 + 1;
          *(long *)(param_1 + 0x38) = lVar25;
        }
        lVar25 = (ulong)bVar5 * 2;
        *(short *)(lVar1 + lVar25) = *(short *)(lVar1 + lVar25) + 1;
        goto LAB_0010a5c0;
      }
LAB_0010a280:
      *(uint *)(param_1 + 0x54) = iVar22 + uVar20;
      iVar22 = *(int *)(param_1 + 100);
      *pbVar27 = (byte)(uVar20 - 3);
      uVar9 = iVar22 - 1;
      *(char *)(*(long *)(param_1 + 0x30) + 1) = (char)uVar9;
      *(char *)(*(long *)(param_1 + 0x30) + 2) = (char)(uVar9 >> 8);
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 3;
      **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) >> 1 | 0x80;
      iVar22 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar22;
      if (iVar22 == 0) {
        lVar25 = *(long *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x50) = 8;
        *(long *)(param_1 + 0x30) = lVar25 + 1;
        *(long *)(param_1 + 0x38) = lVar25;
      }
      pbVar27 = &DAT_00103ed8 + ((ulong)uVar9 & 0x1ff);
      if (0x1ff < uVar9) {
        pbVar27 = &DAT_001040d8 + ((ulong)(uVar9 >> 8) & 0x7f);
      }
      lVar25 = param_1 + (ulong)*pbVar27 * 2;
      *(short *)(lVar25 + 0x840a) = *(short *)(lVar25 + 0x840a) + 1;
      iVar22 = *(int *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(short *)(lVar1 + (ulong)*(ushort *)(&DAT_00104158 + (ulong)(uVar20 - 3) * 2) * 2) =
           *(short *)(lVar1 + (ulong)*(ushort *)(&DAT_00104158 + (ulong)(uVar20 - 3) * 2) * 2) + 1;
      uVar9 = iVar22 - 1;
    }
    uVar20 = *(int *)(param_1 + 0x2c) + uVar9;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar9;
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - uVar9;
    if (0x7fff < uVar20) {
      uVar20 = 0x8000;
    }
    *(uint *)(param_1 + 0x2c) = uVar20;
    pbVar27 = pbVar28;
    if ((param_1 + 0x192a2U < *(ulong *)(param_1 + 0x30)) ||
       ((0x7c00 < *(uint *)(param_1 + 0x54) &&
        ((*(uint *)(param_1 + 0x54) <=
          (uint)(((int)*(ulong *)(param_1 + 0x30) - ((int)param_1 + 0x92aa)) * 0x73) >> 7 ||
         ((*(byte *)(param_1 + 0x12) >> 3 & 1) != 0)))))) {
      *(byte **)(param_1 + 0xb0) = pbVar28;
      *(ulong *)(param_1 + 0xb8) = uVar29;
      uVar9 = FUN_0010a68c(param_1,0);
      if (uVar9 != 0) {
        return ~uVar9 >> 0x1f;
      }
    }
  } while( true );
}


