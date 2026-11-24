// =========================================================================
// Function: FUN_715ec150
// Entry: 0x715ec150 | Size: 28 bytes
// =========================================================================

bool FUN_715ec150(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  if (0xffffb1df < param_1 - 0x4e21U) {
    piVar3 = *(int **)(DAT_70c39074 + param_1 * 4);
    if (piVar3 == (int *)0x0) {
      return false;
    }
    iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
    bVar1 = iVar2 == 7;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_715ec200
// Entry: 0x715ec200 | Size: 28 bytes
// =========================================================================

bool FUN_715ec200(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  if (0xffffb1df < param_1 - 0x4e21U) {
    piVar3 = *(int **)(DAT_70c39074 + param_1 * 4);
    if (piVar3 == (int *)0x0) {
      return false;
    }
    iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
    bVar1 = iVar2 == 6;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_715ec2b0
// Entry: 0x715ec2b0 | Size: 24 bytes
// =========================================================================

undefined4 FUN_715ec2b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0xffffb1df < param_1 - 0x4e21U) && (uVar1 = 0, *(int *)(DAT_70c39074 + param_1 * 4) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_715ec34c
// Entry: 0x715ec338 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715ec34c(void)

{
  FUN_715ec34c();
  return;
}


// =========================================================================
// Function: FUN_715ec34c
// Entry: 0x715ec34c | Size: 16 bytes
// =========================================================================

void FUN_715ec34c(int param_1,undefined4 param_2)

{
  (&DAT_711acba0)[param_1] = param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_715ec3a8
// Entry: 0x715ec394 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715ec3a8(void)

{
  FUN_715ec3a8();
  return;
}


// =========================================================================
// Function: FUN_715ec3a8
// Entry: 0x715ec3a8 | Size: 48 bytes
// =========================================================================

uint FUN_715ec3a8(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_711acba0)[uVar1] == param_1) goto LAB_715ec3d0;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xd2);
  uVar1 = 0;
LAB_715ec3d0:
  return uVar1 & 0xff;
}


// =========================================================================
// Function: FUN_715ec410
// Entry: 0x715ec410 | Size: 32 bytes
// =========================================================================

int FUN_715ec410(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != (char *)0x0 && param_2 != 0) &&
     (((cVar1 = *param_1, cVar1 != '*' && (iVar2 = FUN_714afc58(), iVar2 != 0)) ||
      (iVar2 = FUN_714af734(param_2,param_3,cVar1 == '*'), iVar2 != 0)))) {
    *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + 1;
    return iVar2;
  }
  return 0;
}


// =========================================================================
// Function: thunk_FUN_713f5aa4
// Entry: 0x715ec4f8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_713f5aa4(void)

{
  thunk_FUN_713f5aa4();
  return;
}


// =========================================================================
// Function: thunk_FUN_713f5aa4
// Entry: 0x715ec50c | Size: 4 bytes
// =========================================================================

void thunk_FUN_713f5aa4(void)

{
  FUN_713f5aa4();
  return;
}


// =========================================================================
// Function: FUN_715ec544
// Entry: 0x715ec544 | Size: 24 bytes
// =========================================================================

uint FUN_715ec544(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((((param_1 & 0x7fffffff) - 0x800000 >> 0x18 < 0x7f) &&
      (iVar1 = FUN_71ba2d70(param_1,0x43b40000), iVar1 == 0)) &&
     (iVar1 = FUN_71ba2d10(param_1,0), iVar1 == 0)) {
    iVar1 = FUN_71ba2d70(param_1,0x43340000);
    if (iVar1 == 0) {
      uVar2 = FUN_71ba21e8(param_1,0x40490fdb);
      uVar3 = FUN_71ba13e0(uVar2,0x43340000);
    }
    else {
      uVar2 = FUN_71ba0b38(param_1,0xc3340000);
      uVar2 = FUN_71ba21e8(uVar2,0x40490fdb);
      uVar2 = FUN_71ba13e0(uVar2,0xc3340000);
      uVar3 = FUN_71ba0b38(uVar2,0x40490fdb);
      uVar3 = uVar3 ^ 0x80000000;
    }
    if (0x7effffff < (uVar3 & 0x7fffffff) - 0x800000) {
      uVar3 = 0;
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_715ec748
// Entry: 0x715ec748 | Size: 20 bytes
// =========================================================================

void FUN_715ec748(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = param_1[1];
  uVar5 = param_1[2];
  FUN_71ba240c(*param_2,*param_1);
  uVar6 = FUN_71ba1638();
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar6 = FUN_71ba1ea0((int)uVar6,uVar1,(int)uVar6,uVar1);
  FUN_71ba240c(uVar2,uVar3);
  uVar7 = FUN_71ba1638();
  uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar7 = FUN_71ba1ea0((int)uVar7,uVar1,(int)uVar7,uVar1);
  uVar6 = FUN_71ba0670((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  FUN_71ba240c(uVar4,uVar5);
  uVar7 = FUN_71ba1638();
  uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar7 = FUN_71ba1ea0((int)uVar7,uVar1,(int)uVar7,uVar1);
  FUN_71ba0670((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20)
              );
  imp_sqrt();
  FUN_71ba242c();
  return;
}


// =========================================================================
// Function: FUN_715ec984
// Entry: 0x715ec984 | Size: 36 bytes
// =========================================================================

undefined4 FUN_715ec984(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_71ba2d30();
  if (iVar1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}


// =========================================================================
// Function: FUN_715ec9dc
// Entry: 0x715ec9dc | Size: 36 bytes
// =========================================================================

undefined4 FUN_715ec9dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_71ba2d50();
  if (iVar1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}


// =========================================================================
// Function: FUN_715eca34
// Entry: 0x715eca34 | Size: 3748 bytes
// =========================================================================

uint * FUN_715eca34(int param_1,uint param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint3 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iStack_30;
  
  iVar4 = imp_malloc(0x10000);
  if (iVar4 == 0) {
    return (uint *)0x0;
  }
  if ((int)param_4 < 6) {
    param_4 = 5;
  }
  puVar5 = (undefined4 *)imp_malloc(10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar22 = (uint *)0x0;
  }
  else {
    puVar22 = puVar5 + 2;
    *puVar5 = 2;
    puVar5[1] = 0;
  }
  uVar6 = puVar22[-1];
  puVar22[-1] = uVar6 + 1;
  *(undefined1 *)((int)puVar22 + uVar6) = 0x78;
  uVar6 = puVar22[-2];
  if (((int)uVar6 <= (int)(puVar22[-1] + 1)) &&
     (puVar7 = (uint *)imp_realloc(puVar22 + -2,uVar6 * 2 + 9), puVar7 != (uint *)0x0)) {
    puVar22 = puVar7 + 2;
    *puVar7 = uVar6 << 1 | 1;
  }
  uVar6 = puVar22[-1];
  puVar22[-1] = uVar6 + 1;
  *(undefined1 *)((int)puVar22 + uVar6) = 0x5e;
  imp___aeabi_memclr4(iVar4,0x10000);
  if ((int)param_2 < 4) {
    uVar21 = 0;
    uVar6 = 3;
    uVar13 = 3;
  }
  else {
    uVar13 = 3;
    uVar21 = 0;
    uVar6 = 3;
    do {
      uVar23 = 0;
      iStack_30 = 3;
      uVar14 = 2;
      puVar11 = (uint3 *)(param_1 + uVar21);
      uVar8 = (uint)*puVar11 ^ (uint)*puVar11 << 3;
      uVar8 = uVar8 + (uVar8 >> 5);
      uVar8 = uVar8 ^ uVar8 * 0x10;
      uVar8 = uVar8 + (uVar8 >> 0x11);
      uVar8 = uVar8 + (uVar8 >> 6) & 0x3fff;
      puVar7 = *(uint **)(iVar4 + uVar8 * 4);
      if (puVar7 == (uint *)0x0) {
LAB_715ecccc:
        puVar9 = puVar7;
        if (puVar7 != (uint *)0x0) {
          puVar9 = puVar7 + -2;
        }
        puVar9 = (uint *)imp_realloc(puVar9,uVar14 * 4 + 8);
        if (puVar9 != (uint *)0x0) {
          if (puVar7 == (uint *)0x0) {
            puVar9[1] = 0;
          }
          puVar7 = puVar9 + 2;
          *puVar9 = uVar14;
          *(uint **)(iVar4 + uVar8 * 4) = puVar7;
        }
      }
      else {
        if (0 < (int)puVar7[-1]) {
          uVar15 = 0;
          uVar14 = (param_2 - uVar21) - 1;
          uVar23 = 0;
          if (0x100 < uVar14) {
            uVar14 = 0x101;
          }
          do {
            uVar24 = puVar7[uVar15];
            if ((int)(uVar21 - 0x8000) < (int)(uVar24 - param_1)) {
              if ((int)(param_2 - uVar21) < 1) {
                iVar10 = 0;
              }
              else {
                iVar12 = 0;
                do {
                  iVar10 = iVar12;
                  if (*(byte *)(uVar24 + iVar12) != *(byte *)((int)puVar11 + iVar12)) break;
                  iVar12 = iVar12 + 1;
                  iVar10 = uVar14 + 1;
                } while (uVar14 + 1 != iVar12);
              }
              if (iVar10 < iStack_30) {
                uVar24 = uVar23;
              }
              uVar23 = uVar24;
              if (iStack_30 < iVar10) {
                iStack_30 = iVar10;
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != puVar7[-1]);
          uVar14 = 2;
          if (puVar7 == (uint *)0x0) goto LAB_715ecccc;
        }
        uVar14 = puVar7[-1];
        if (puVar7[-1] == param_4 << 1) {
          imp___aeabi_memmove(puVar7,puVar7 + param_4,param_4 << 2);
          puVar7[-1] = param_4;
          uVar14 = param_4;
        }
        if ((int)puVar7[-2] <= (int)(uVar14 + 1)) {
          uVar14 = puVar7[-2] << 1 | 1;
          goto LAB_715ecccc;
        }
      }
      uVar8 = puVar7[-1];
      puVar7[-1] = uVar8 + 1;
      puVar7[uVar8] = (uint)puVar11;
      if (uVar23 == 0) {
LAB_715ecee0:
        bVar2 = (byte)*puVar11;
        if (bVar2 < 0x90) {
          uVar23 = bVar2 + 0x30;
          iStack_30 = 1;
          uVar6 = uVar6 | (uVar23 >> 5 & 2 |
                           ((uVar23 & 0x3f) >> 5 |
                           (uint)(byte)(((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                         << 1 | bVar2 >> 3 & 1) << 2) | uVar23 >> 3 & 2) << 2 |
                          uVar23 >> 7) << (uVar13 & 0xff);
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + 8;
          }
          else {
            uVar13 = uVar13 + 0x10;
            do {
              if (puVar22 == (uint *)0x0) {
                uVar23 = 2;
LAB_715ecf90:
                puVar7 = puVar22;
                if (puVar22 != (uint *)0x0) {
                  puVar7 = puVar22 + -2;
                }
                puVar7 = (uint *)imp_realloc(puVar7,uVar23 + 8);
                if (puVar7 != (uint *)0x0) {
                  if (puVar22 == (uint *)0x0) {
                    puVar7[1] = 0;
                  }
                  puVar22 = puVar7 + 2;
                  *puVar7 = uVar23;
                }
              }
              else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
                uVar23 = puVar22[-2] << 1 | 1;
                goto LAB_715ecf90;
              }
              uVar23 = puVar22[-1];
              uVar13 = uVar13 - 8;
              puVar22[-1] = uVar23 + 1;
              *(char *)((int)puVar22 + uVar23) = (char)uVar6;
              uVar6 = uVar6 >> 8;
            } while (0xf < uVar13);
LAB_715ed118:
            iStack_30 = 1;
            uVar13 = uVar13 - 8;
          }
        }
        else {
          iStack_30 = 1;
          uVar6 = uVar6 | ((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                            bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                          bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                        bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 1 | 3) <<
                          (uVar13 & 0xff);
          if (-2 < (int)uVar13) {
            uVar13 = uVar13 + 0x11;
            do {
              if (puVar22 == (uint *)0x0) {
                uVar23 = 2;
LAB_715ed0e4:
                puVar7 = puVar22;
                if (puVar22 != (uint *)0x0) {
                  puVar7 = puVar22 + -2;
                }
                puVar7 = (uint *)imp_realloc(puVar7,uVar23 + 8);
                if (puVar7 != (uint *)0x0) {
                  if (puVar22 == (uint *)0x0) {
                    puVar7[1] = 0;
                  }
                  puVar22 = puVar7 + 2;
                  *puVar7 = uVar23;
                }
              }
              else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
                uVar23 = puVar22[-2] << 1 | 1;
                goto LAB_715ed0e4;
              }
              uVar23 = puVar22[-1];
              uVar13 = uVar13 - 8;
              puVar22[-1] = uVar23 + 1;
              *(char *)((int)puVar22 + uVar23) = (char)uVar6;
              uVar6 = uVar6 >> 8;
            } while (0xf < uVar13);
            goto LAB_715ed118;
          }
          uVar13 = uVar13 + 9;
        }
      }
      else {
        uVar8 = (uint)*(uint3 *)((int)puVar11 + 1) ^ (uint)*(uint3 *)((int)puVar11 + 1) << 3;
        uVar8 = uVar8 + (uVar8 >> 5);
        uVar8 = uVar8 ^ uVar8 * 0x10;
        uVar8 = uVar8 + (uVar8 >> 0x11);
        iVar10 = *(int *)(iVar4 + (uVar8 + (uVar8 >> 6) & 0x3fff) * 4);
        if ((iVar10 != 0) && (0 < *(int *)(iVar10 + -4))) {
          iVar12 = 0;
          uVar8 = (~uVar21 + param_2) - 1;
          if (0x100 < uVar8) {
            uVar8 = 0x101;
          }
          do {
            iVar16 = *(int *)(iVar10 + iVar12 * 4);
            if ((int)(uVar21 - 0x7fff) < iVar16 - param_1) {
              iVar18 = 0;
              iVar17 = iVar18;
              if (0 < (int)(~uVar21 + param_2)) {
                do {
                  iVar17 = iVar18;
                  if (*(byte *)(iVar16 + iVar18) != *(byte *)((int)puVar11 + iVar18 + 1)) break;
                  iVar18 = iVar18 + 1;
                  iVar17 = uVar8 + 1;
                } while (uVar8 + 1 != iVar18);
              }
              if (iStack_30 < iVar17) goto LAB_715ecee0;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 != *(int *)(iVar10 + -4));
        }
        puVar3 = &DAT_700829b0;
        uVar8 = 0xffffffff;
        do {
          uVar14 = uVar8;
          puVar19 = puVar3;
          uVar8 = uVar14 + 1;
          puVar3 = puVar19 + 1;
        } while ((int)(uint)*puVar19 <= iStack_30);
        if (uVar8 < 0x17) {
          bVar2 = (char)uVar14 + 2;
          uVar6 = uVar6 | (uint)(byte)(((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1
                                          ) << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << (uVar13 & 0xff);
          if ((int)uVar13 < 1) {
            uVar13 = uVar13 + 7;
          }
          else {
            iVar10 = uVar13 + 0xf;
            do {
              if (puVar22 == (uint *)0x0) {
                uVar13 = 2;
LAB_715eceac:
                puVar7 = puVar22;
                if (puVar22 != (uint *)0x0) {
                  puVar7 = puVar22 + -2;
                }
                puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
                if (puVar7 != (uint *)0x0) {
                  if (puVar22 == (uint *)0x0) {
                    puVar7[1] = 0;
                  }
                  puVar22 = puVar7 + 2;
                  *puVar7 = uVar13;
                }
              }
              else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
                uVar13 = puVar22[-2] << 1 | 1;
                goto LAB_715eceac;
              }
              uVar13 = puVar22[-1];
              iVar10 = iVar10 + -8;
              puVar22[-1] = uVar13 + 1;
              *(char *)((int)puVar22 + uVar13) = (char)uVar6;
              uVar6 = uVar6 >> 8;
            } while (0xf < iVar10);
LAB_715ed060:
            uVar13 = iVar10 - 8;
          }
        }
        else {
          bVar2 = (char)uVar8 + 0xa9;
          uVar6 = uVar6 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                           bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                         bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                       bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << (uVar13 & 0xff);
          if (-1 < (int)uVar13) {
            iVar10 = uVar13 + 0x10;
            do {
              if (puVar22 == (uint *)0x0) {
                uVar13 = 2;
LAB_715ed02c:
                puVar7 = puVar22;
                if (puVar22 != (uint *)0x0) {
                  puVar7 = puVar22 + -2;
                }
                puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
                if (puVar7 != (uint *)0x0) {
                  if (puVar22 == (uint *)0x0) {
                    puVar7[1] = 0;
                  }
                  puVar22 = puVar7 + 2;
                  *puVar7 = uVar13;
                }
              }
              else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
                uVar13 = puVar22[-2] << 1 | 1;
                goto LAB_715ed02c;
              }
              uVar13 = puVar22[-1];
              iVar10 = iVar10 + -8;
              puVar22[-1] = uVar13 + 1;
              *(char *)((int)puVar22 + uVar13) = (char)uVar6;
              uVar6 = uVar6 >> 8;
            } while (0xf < iVar10);
            goto LAB_715ed060;
          }
          uVar13 = uVar13 + 8;
        }
        if (0xffffffeb < uVar14 - 0x1b) {
          uVar6 = uVar6 | iStack_30 - (uint)puVar19[-1] << (uVar13 & 0xff);
          uVar13 = uVar13 + (byte)(&DAT_700829eb)[uVar14];
          uVar8 = uVar13;
          if (7 < (int)uVar13) {
            do {
              if (puVar22 == (uint *)0x0) {
                uVar13 = 2;
LAB_715ed278:
                puVar7 = puVar22;
                if (puVar22 != (uint *)0x0) {
                  puVar7 = puVar22 + -2;
                }
                puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
                if (puVar7 != (uint *)0x0) {
                  if (puVar22 == (uint *)0x0) {
                    puVar7[1] = 0;
                  }
                  puVar22 = puVar7 + 2;
                  *puVar7 = uVar13;
                }
              }
              else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
                uVar13 = puVar22[-2] << 1 | 1;
                goto LAB_715ed278;
              }
              uVar13 = puVar22[-1];
              puVar22[-1] = uVar13 + 1;
              *(char *)((int)puVar22 + uVar13) = (char)uVar6;
              uVar13 = uVar8 - 8;
              uVar6 = uVar6 >> 8;
              bVar1 = 0xf < (int)uVar8;
              uVar8 = uVar13;
            } while (bVar1);
          }
        }
        puVar3 = &DAT_70082a0a;
        uVar8 = 0xffffffff;
        do {
          uVar14 = uVar8;
          puVar19 = puVar3;
          uVar8 = uVar14 + 1;
          puVar3 = puVar19 + 1;
        } while ((int)(uint)*puVar19 <= (int)((int)puVar11 - uVar23));
        bVar2 = (byte)uVar8;
        uVar6 = uVar6 | (uint)(byte)(((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << (uVar13 & 0xff);
        if ((int)uVar13 < 3) {
          uVar13 = uVar13 + 5;
        }
        else {
          iVar10 = uVar13 + 0xd;
          do {
            iVar12 = iVar10;
            if (puVar22 == (uint *)0x0) {
              uVar13 = 2;
LAB_715ed1f8:
              puVar7 = puVar22;
              if (puVar22 != (uint *)0x0) {
                puVar7 = puVar22 + -2;
              }
              puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
              if (puVar7 != (uint *)0x0) {
                if (puVar22 == (uint *)0x0) {
                  puVar7[1] = 0;
                }
                puVar22 = puVar7 + 2;
                *puVar7 = uVar13;
              }
            }
            else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
              uVar13 = puVar22[-2] << 1 | 1;
              goto LAB_715ed1f8;
            }
            uVar13 = puVar22[-1];
            iVar10 = iVar12 + -8;
            puVar22[-1] = uVar13 + 1;
            *(char *)((int)puVar22 + uVar13) = (char)uVar6;
            uVar6 = uVar6 >> 8;
          } while (0xf < iVar10);
          uVar13 = iVar12 - 0x10;
        }
        if (3 < uVar8) {
          uVar6 = uVar6 | ((int)puVar11 - uVar23) - (uint)puVar19[-1] << (uVar13 & 0xff);
          uVar13 = uVar13 + *(byte *)(uVar14 + 0x70082a47);
          uVar23 = uVar13;
          if (7 < (int)uVar13) {
            do {
              if (puVar22 == (uint *)0x0) {
                uVar13 = 2;
LAB_715ed344:
                puVar7 = puVar22;
                if (puVar22 != (uint *)0x0) {
                  puVar7 = puVar22 + -2;
                }
                puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
                if (puVar7 != (uint *)0x0) {
                  if (puVar22 == (uint *)0x0) {
                    puVar7[1] = 0;
                  }
                  puVar22 = puVar7 + 2;
                  *puVar7 = uVar13;
                }
              }
              else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
                uVar13 = puVar22[-2] << 1 | 1;
                goto LAB_715ed344;
              }
              uVar8 = puVar22[-1];
              uVar13 = uVar23 - 8;
              puVar22[-1] = uVar8 + 1;
              *(char *)((int)puVar22 + uVar8) = (char)uVar6;
              uVar6 = uVar6 >> 8;
              bVar1 = 0xf < (int)uVar23;
              uVar23 = uVar13;
            } while (bVar1);
          }
        }
      }
      uVar21 = iStack_30 + uVar21;
    } while ((int)uVar21 < (int)(param_2 - 3));
  }
  if ((int)uVar21 < (int)param_2) {
    do {
      bVar2 = *(byte *)(param_1 + uVar21);
      if (bVar2 < 0x90) {
        uVar23 = bVar2 + 0x30;
        uVar6 = uVar6 | (uVar23 >> 5 & 2 |
                         ((uVar23 & 0x3f) >> 5 |
                         (uint)(byte)(((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1)
                                       << 1 | bVar2 >> 3 & 1) << 2) | uVar23 >> 3 & 2) << 2 |
                        uVar23 >> 7) << (uVar13 & 0xff);
        if ((int)uVar13 < 0) {
          uVar13 = uVar13 + 8;
        }
        else {
          uVar13 = uVar13 + 0x10;
          do {
            if (puVar22 == (uint *)0x0) {
              uVar23 = 2;
LAB_715ed460:
              puVar7 = puVar22;
              if (puVar22 != (uint *)0x0) {
                puVar7 = puVar22 + -2;
              }
              puVar7 = (uint *)imp_realloc(puVar7,uVar23 + 8);
              if (puVar7 != (uint *)0x0) {
                if (puVar22 == (uint *)0x0) {
                  puVar7[1] = 0;
                }
                puVar22 = puVar7 + 2;
                *puVar7 = uVar23;
              }
            }
            else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
              uVar23 = puVar22[-2] << 1 | 1;
              goto LAB_715ed460;
            }
            uVar23 = puVar22[-1];
            uVar13 = uVar13 - 8;
            puVar22[-1] = uVar23 + 1;
            *(char *)((int)puVar22 + uVar23) = (char)uVar6;
            uVar6 = uVar6 >> 8;
          } while (0xf < uVar13);
LAB_715ed3a8:
          uVar13 = uVar13 - 8;
        }
      }
      else {
        uVar6 = uVar6 | ((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1
                                          ) << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                         1 | 3) << (uVar13 & 0xff);
        if (-2 < (int)uVar13) {
          uVar13 = uVar13 + 0x11;
          do {
            if (puVar22 == (uint *)0x0) {
              uVar23 = 2;
LAB_715ed4f8:
              puVar7 = puVar22;
              if (puVar22 != (uint *)0x0) {
                puVar7 = puVar22 + -2;
              }
              puVar7 = (uint *)imp_realloc(puVar7,uVar23 + 8);
              if (puVar7 != (uint *)0x0) {
                if (puVar22 == (uint *)0x0) {
                  puVar7[1] = 0;
                }
                puVar22 = puVar7 + 2;
                *puVar7 = uVar23;
              }
            }
            else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
              uVar23 = puVar22[-2] << 1 | 1;
              goto LAB_715ed4f8;
            }
            uVar23 = puVar22[-1];
            uVar13 = uVar13 - 8;
            puVar22[-1] = uVar23 + 1;
            *(char *)((int)puVar22 + uVar23) = (char)uVar6;
            uVar6 = uVar6 >> 8;
          } while (0xf < uVar13);
          goto LAB_715ed3a8;
        }
        uVar13 = uVar13 + 9;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_2);
  }
  if ((int)uVar13 < 1) {
    iVar10 = uVar13 + 7;
  }
  else {
    iVar12 = uVar13 + 0xf;
    do {
      iVar10 = iVar12;
      if (puVar22 == (uint *)0x0) {
        uVar13 = 2;
LAB_715ed598:
        puVar7 = puVar22;
        if (puVar22 != (uint *)0x0) {
          puVar7 = puVar22 + -2;
        }
        puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
        if (puVar7 != (uint *)0x0) {
          if (puVar22 == (uint *)0x0) {
            puVar7[1] = 0;
          }
          puVar22 = puVar7 + 2;
          *puVar7 = uVar13;
        }
      }
      else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
        uVar13 = puVar22[-2] << 1 | 1;
        goto LAB_715ed598;
      }
      uVar13 = puVar22[-1];
      iVar12 = iVar10 + -8;
      puVar22[-1] = uVar13 + 1;
      *(char *)((int)puVar22 + uVar13) = (char)uVar6;
      uVar6 = uVar6 >> 8;
    } while (0xf < iVar12);
    iVar10 = iVar10 + -0x10;
  }
  while (iVar10 != 0) {
    while (iVar10 < 7) {
      iVar10 = iVar10 + 1;
      if (iVar10 == 0) goto LAB_715ed68c;
    }
    uVar13 = iVar10 + 9;
    do {
      uVar21 = uVar13;
      if (puVar22 == (uint *)0x0) {
        uVar13 = 2;
LAB_715ed650:
        puVar7 = puVar22;
        if (puVar22 != (uint *)0x0) {
          puVar7 = puVar22 + -2;
        }
        puVar7 = (uint *)imp_realloc(puVar7,uVar13 + 8);
        if (puVar7 != (uint *)0x0) {
          if (puVar22 == (uint *)0x0) {
            puVar7[1] = 0;
          }
          puVar22 = puVar7 + 2;
          *puVar7 = uVar13;
        }
      }
      else if ((int)puVar22[-2] <= (int)(puVar22[-1] + 1)) {
        uVar13 = puVar22[-2] << 1 | 1;
        goto LAB_715ed650;
      }
      uVar23 = puVar22[-1];
      uVar13 = uVar21 - 8;
      puVar22[-1] = uVar23 + 1;
      *(char *)((int)puVar22 + uVar23) = (char)uVar6;
      uVar6 = uVar6 >> 8;
    } while (0xf < uVar13);
    iVar10 = uVar21 - 0x10;
  }
LAB_715ed68c:
  iVar10 = 0;
  do {
    iVar12 = *(int *)(iVar4 + iVar10 * 4);
    if (iVar12 != 0) {
      imp_free(iVar12 + -8);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x4000);
  imp_free(iVar4);
  if ((int)param_2 < 1) {
    uVar13 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = 1;
    uVar13 = 0;
    iVar4 = 0;
    uVar21 = param_2 % 0x15b0;
    do {
      if (uVar21 != 0) {
        uVar23 = uVar21;
        pbVar20 = (byte *)(param_1 + iVar4);
        do {
          uVar23 = uVar23 - 1;
          uVar6 = uVar6 + *pbVar20;
          uVar13 = uVar6 + uVar13;
          pbVar20 = pbVar20 + 1;
        } while (uVar23 != 0);
      }
      iVar4 = uVar21 + iVar4;
      uVar21 = 0x15b0;
      uVar13 = uVar13 % 0xfff1;
      uVar6 = uVar6 % 0xfff1;
    } while (iVar4 < (int)param_2);
  }
  if (puVar22 == (uint *)0x0) {
    uVar21 = 2;
  }
  else {
    if ((int)(puVar22[-1] + 1) < (int)puVar22[-2]) goto LAB_715ed7c0;
    uVar21 = puVar22[-2] << 1 | 1;
  }
  puVar7 = puVar22;
  if (puVar22 != (uint *)0x0) {
    puVar7 = puVar22 + -2;
  }
  puVar7 = (uint *)imp_realloc(puVar7,uVar21 + 8);
  if (puVar7 != (uint *)0x0) {
    if (puVar22 == (uint *)0x0) {
      puVar7[1] = 0;
    }
    puVar22 = puVar7 + 2;
    *puVar7 = uVar21;
  }
LAB_715ed7c0:
  uVar21 = puVar22[-1];
  puVar22[-1] = uVar21 + 1;
  *(char *)((int)puVar22 + uVar21) = (char)(uVar13 >> 8);
  uVar21 = puVar22[-2];
  if (((int)uVar21 <= (int)(puVar22[-1] + 1)) &&
     (puVar7 = (uint *)imp_realloc(puVar22 + -2,uVar21 * 2 + 9), puVar7 != (uint *)0x0)) {
    puVar22 = puVar7 + 2;
    *puVar7 = uVar21 << 1 | 1;
  }
  uVar21 = puVar22[-1];
  puVar22[-1] = uVar21 + 1;
  *(char *)((int)puVar22 + uVar21) = (char)uVar13;
  uVar13 = puVar22[-2];
  if (((int)uVar13 <= (int)(puVar22[-1] + 1)) &&
     (puVar7 = (uint *)imp_realloc(puVar22 + -2,uVar13 * 2 + 9), puVar7 != (uint *)0x0)) {
    puVar22 = puVar7 + 2;
    *puVar7 = uVar13 << 1 | 1;
  }
  uVar13 = puVar22[-1];
  puVar22[-1] = uVar13 + 1;
  *(char *)((int)puVar22 + uVar13) = (char)(uVar6 >> 8);
  uVar13 = puVar22[-2];
  if (((int)uVar13 <= (int)(puVar22[-1] + 1)) &&
     (puVar7 = (uint *)imp_realloc(puVar22 + -2,uVar13 * 2 + 9), puVar7 != (uint *)0x0)) {
    puVar22 = puVar7 + 2;
    *puVar7 = uVar13 << 1 | 1;
  }
  uVar13 = puVar22[-1];
  puVar22[-1] = uVar13 + 1;
  *(char *)((int)puVar22 + uVar13) = (char)uVar6;
  *param_3 = puVar22[-1];
  imp___aeabi_memmove(puVar22 + -2,puVar22);
  return puVar22 + -2;
}


// =========================================================================
// Function: FUN_715edc10
// Entry: 0x715edc10 | Size: 1548 bytes
// =========================================================================

undefined4 *
FUN_715edc10(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iStack_28;
  
  uVar5 = DAT_700c5e88;
  iVar18 = param_5 * param_3;
  if (param_2 == 0) {
    param_2 = iVar18;
  }
  iVar15 = (iVar18 + 1) * param_4;
  iVar1 = imp_malloc(iVar15);
  uVar11 = uVar5;
  if (4 < (int)uVar5) {
    uVar11 = 0xffffffff;
  }
  puVar12 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    pcVar2 = (char *)imp_malloc(iVar18);
    if (pcVar2 == (char *)0x0) {
      imp_free(iVar1);
    }
    else {
      if (0 < (int)param_4) {
        uVar19 = 0;
        do {
          uVar17 = uVar5;
          uVar16 = uVar11;
          if (0x7fffffff < uVar11) {
            FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,0,pcVar2);
            if (iVar18 < 1) {
              FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,1,pcVar2);
              iVar13 = 0;
              iVar3 = 0;
            }
            else {
              iVar3 = 0;
              iVar13 = 0;
              do {
                pcVar7 = pcVar2 + iVar3;
                iVar3 = iVar3 + 1;
                iVar8 = (int)*pcVar7;
                if (iVar8 < 0) {
                  iVar8 = -iVar8;
                }
                iVar13 = iVar13 + iVar8;
              } while (iVar18 - iVar3 != 0);
              FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,1,pcVar2);
              iVar3 = 0;
              pcVar7 = pcVar2;
              iVar8 = iVar18;
              if (0 < iVar18) {
                do {
                  iVar9 = (int)*pcVar7;
                  if (iVar9 < 0) {
                    iVar9 = -iVar9;
                  }
                  iVar8 = iVar8 + -1;
                  iVar3 = iVar3 + iVar9;
                  pcVar7 = pcVar7 + 1;
                } while (iVar8 != 0);
              }
            }
            FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,2,pcVar2);
            iVar8 = iVar13;
            if (iVar3 < iVar13) {
              iVar8 = iVar3;
            }
            uVar17 = (uint)(iVar3 < iVar13);
            iVar3 = 0;
            iVar9 = 0;
            pcVar7 = pcVar2;
            iVar13 = iVar18;
            if (0 < iVar18) {
              do {
                iVar10 = (int)*pcVar7;
                if (iVar10 < 0) {
                  iVar10 = -iVar10;
                }
                iVar13 = iVar13 + -1;
                iVar9 = iVar9 + iVar10;
                pcVar7 = pcVar7 + 1;
              } while (iVar13 != 0);
            }
            FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,3,pcVar2);
            if (iVar9 < iVar8) {
              uVar17 = 2;
              iVar8 = iVar9;
            }
            if (0 < iVar18) {
              iVar3 = 0;
              pcVar7 = pcVar2;
              iVar13 = iVar18;
              do {
                iVar9 = (int)*pcVar7;
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                iVar13 = iVar13 + -1;
                iVar3 = iVar3 + iVar9;
                pcVar7 = pcVar7 + 1;
              } while (iVar13 != 0);
            }
            FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,4,pcVar2);
            iVar13 = 0;
            if (iVar3 < iVar8) {
              uVar17 = 3;
              iVar8 = iVar3;
            }
            pcVar7 = pcVar2;
            iVar3 = iVar18;
            if (0 < iVar18) {
              do {
                iVar9 = (int)*pcVar7;
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                iVar3 = iVar3 + -1;
                iVar13 = iVar13 + iVar9;
                pcVar7 = pcVar7 + 1;
              } while (iVar3 != 0);
            }
            uVar16 = uVar17;
            if (iVar13 < iVar8) {
              uVar17 = 4;
              uVar16 = uVar17;
            }
          }
          FUN_715ee490(param_1,param_2,param_3,param_4,uVar19,param_5,uVar16,pcVar2);
          puVar6 = (undefined1 *)(iVar1 + uVar19 * (iVar18 + 1));
          *puVar6 = (char)uVar17;
          imp___aeabi_memmove(puVar6 + 1,pcVar2,iVar18);
          uVar19 = uVar19 + 1;
        } while (uVar19 != param_4);
      }
      imp_free(pcVar2);
      iVar15 = FUN_715eca34(iVar1,iVar15,&iStack_28,DAT_700c5e84);
      imp_free(iVar1);
      iVar18 = iStack_28;
      if (iVar15 == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        iVar1 = iStack_28 + 0x39;
        puVar4 = (undefined4 *)imp_malloc(iVar1);
        puVar12 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar4[1] = 0xa1a0a0d;
          *puVar4 = 0x474e5089;
          *(undefined1 *)(puVar4 + 7) = 0;
          *(undefined2 *)((int)puVar4 + 0x1a) = 0;
          *(undefined1 *)(puVar4 + 6) = 8;
          *param_6 = iVar1;
          *(char *)((int)puVar4 + 0x23) = (char)((uint)iVar18 >> 8);
          puVar4[3] = 0x52444849;
          *(char *)((int)puVar4 + 0x22) = (char)((uint)iVar18 >> 0x10);
          puVar4[2] = 0xd000000;
          *(char *)(puVar4 + 9) = (char)iVar18;
          *(char *)((int)puVar4 + 0x17) = (char)param_4;
          *(char *)((int)puVar4 + 0x13) = (char)param_3;
          *(char *)((int)puVar4 + 0x21) = (char)((uint)iVar18 >> 0x18);
          uVar5 = *(uint *)(&DAT_70082a64 + param_5 * 4);
          *(char *)((int)puVar4 + 0x16) = (char)(param_4 >> 8);
          *(char *)((int)puVar4 + 0x19) = (char)uVar5;
          *(char *)((int)puVar4 + 0x15) = (char)(param_4 >> 0x10);
          *(char *)(puVar4 + 5) = (char)(param_4 >> 0x18);
          *(char *)((int)puVar4 + 0x12) = (char)(param_3 >> 8);
          *(char *)((int)puVar4 + 0x11) = (char)(param_3 >> 0x10);
          *(char *)(puVar4 + 4) = (char)(param_3 >> 0x18);
          uVar11 = *(uint *)(&DAT_70082aa0 +
                            ((*(uint *)(&DAT_70082aa0 + (param_3 >> 0x18 ^ 0xf5) * 4) ^ 0x575e51 ^
                             param_3 >> 0x10) & 0xff) * 4) ^
                   (*(uint *)(&DAT_70082aa0 + (param_3 >> 0x18 ^ 0xf5) * 4) ^ 0x575e51) >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + ((uVar11 ^ param_3 >> 8) & 0xff) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + ((uVar11 ^ param_3) & 0xff) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + (uVar11 & 0xff ^ param_4 >> 0x18) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + ((uVar11 ^ param_4 >> 0x10) & 0xff) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + ((uVar11 ^ param_4 >> 8) & 0xff) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + ((uVar11 ^ param_4) & 0xff) * 4) ^ uVar11 >> 8;
          uVar11 = *(uint *)(&DAT_70082aa0 + (uVar11 & 0xff ^ 8) * 4) ^ uVar11 >> 8;
          uVar5 = *(uint *)(&DAT_70082aa0 + ((uVar11 ^ uVar5) & 0xff) * 4) ^ uVar11 >> 8;
          uVar5 = *(uint *)(&DAT_70082aa0 + (uVar5 & 0xff) * 4) ^ uVar5 >> 8;
          uVar5 = *(uint *)(&DAT_70082aa0 + (uVar5 & 0xff) * 4) ^ uVar5 >> 8;
          uVar5 = ~(*(uint *)(&DAT_70082aa0 + (uVar5 & 0xff) * 4) ^ uVar5 >> 8);
          *(char *)(puVar4 + 8) = (char)uVar5;
          *(char *)((int)puVar4 + 0x1f) = (char)(uVar5 >> 8);
          *(char *)((int)puVar4 + 0x1e) = (char)(uVar5 >> 0x10);
          *(char *)((int)puVar4 + 0x1d) = (char)(uVar5 >> 0x18);
          pbVar14 = (byte *)((int)puVar4 + 0x25);
          pbVar14[0] = 0x49;
          pbVar14[1] = 0x44;
          pbVar14[2] = 0x41;
          pbVar14[3] = 0x54;
          imp___aeabi_memmove((int)puVar4 + 0x29,iVar15,iVar18);
          imp_free(iVar15);
          puVar6 = (undefined1 *)((int)puVar4 + 0x29 + iStack_28);
          uVar5 = 0;
          if (-4 < iStack_28) {
            iStack_28 = iStack_28 + 4;
            uVar5 = 0xffffffff;
            do {
              iStack_28 = iStack_28 + -1;
              uVar5 = *(uint *)(&DAT_70082aa0 + (uVar5 & 0xff ^ (uint)*pbVar14) * 4) ^ uVar5 >> 8;
              pbVar14 = pbVar14 + 1;
            } while (iStack_28 != 0);
            uVar5 = ~uVar5;
          }
          puVar6[3] = (char)uVar5;
          *(undefined4 *)(puVar6 + 0xc) = 0x826042ae;
          *(undefined4 *)(puVar6 + 8) = 0x444e4549;
          *(undefined4 *)(puVar6 + 4) = 0;
          puVar6[2] = (char)(uVar5 >> 8);
          puVar6[1] = (char)(uVar5 >> 0x10);
          *puVar6 = (char)(uVar5 >> 0x18);
          puVar12 = puVar4;
        }
      }
    }
  }
  return puVar12;
}


// =========================================================================
// Function: FUN_715ee490
// Entry: 0x715ee490 | Size: 740 bytes
// =========================================================================

void FUN_715ee490(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,byte *param_8)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  
  iVar10 = param_2;
  if (DAT_711acee8 != 0) {
    iVar10 = -param_2;
  }
  puVar16 = &DAT_70082a78;
  if (param_5 == 0) {
    puVar16 = &DAT_70082a8c;
  }
  iVar14 = *(int *)(puVar16 + param_7 * 4);
  if (DAT_711acee8 != 0) {
    param_5 = ~param_5 + param_4;
  }
  pbVar6 = (byte *)(param_5 * param_2 + param_1);
  if (iVar14 == 0) {
    imp___aeabi_memcpy(param_8,pbVar6,param_6 * param_3);
    return;
  }
  if (0 < param_6) {
    iVar11 = param_6;
    pbVar12 = pbVar6;
    pbVar13 = param_8;
    do {
      switch(iVar14) {
      case 1:
      case 5:
      case 6:
        bVar8 = *pbVar12;
        break;
      case 2:
      case 4:
        bVar8 = *pbVar12 - pbVar12[-iVar10];
        break;
      case 3:
        bVar8 = *pbVar12 - (pbVar12[-iVar10] >> 1);
        break;
      default:
        goto switchD_715ee54c_default;
      }
      *pbVar13 = bVar8;
switchD_715ee54c_default:
      iVar11 = iVar11 + -1;
      pbVar12 = pbVar12 + 1;
      pbVar13 = pbVar13 + 1;
    } while (iVar11 != 0);
  }
  if (iVar14 - 1U < 6) {
    param_2 = param_5 * param_2;
    switch(iVar14) {
    case 1:
      if (param_6 * param_3 - param_6 != 0 && param_6 <= param_6 * param_3) {
        iVar10 = param_6 * (param_3 + -1);
        do {
          pbVar12 = pbVar6 + param_6;
          iVar10 = iVar10 + -1;
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_8[param_6] = *pbVar12 - bVar8;
          param_8 = param_8 + 1;
        } while (iVar10 != 0);
      }
      break;
    case 2:
      if (param_6 * param_3 - param_6 != 0 && param_6 <= param_6 * param_3) {
        pcVar7 = (char *)(param_1 + param_6 + param_2);
        iVar14 = param_6 * (param_3 + -1);
        pbVar6 = param_8 + param_6;
        do {
          pcVar2 = pcVar7 + -iVar10;
          iVar14 = iVar14 + -1;
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pbVar6 = cVar4 - *pcVar2;
          pbVar6 = pbVar6 + 1;
        } while (iVar14 != 0);
      }
      break;
    case 3:
      if (param_6 * param_3 - param_6 != 0 && param_6 <= param_6 * param_3) {
        iVar14 = param_6 * (param_3 + -1);
        pbVar12 = param_8 + param_6;
        do {
          pbVar13 = pbVar6 + (param_6 - iVar10);
          iVar14 = iVar14 + -1;
          bVar8 = *pbVar6;
          pbVar1 = pbVar6 + param_6;
          pbVar6 = pbVar6 + 1;
          *pbVar12 = *pbVar1 - (char)((uint)*pbVar13 + (uint)bVar8 >> 1);
          pbVar12 = pbVar12 + 1;
        } while (iVar14 != 0);
      }
      break;
    case 4:
      if (param_6 * param_3 - param_6 != 0 && param_6 <= param_6 * param_3) {
        iVar14 = 0;
        do {
          bVar8 = pbVar6[-iVar14];
          bVar5 = *(byte *)((param_1 + ((param_6 + param_2) - iVar10)) - iVar14);
          bVar3 = *(byte *)((param_1 + (param_2 - iVar10)) - iVar14);
          iVar11 = ((uint)bVar5 + (uint)bVar8) - (uint)bVar3;
          uVar15 = iVar11 - (uint)bVar3;
          if ((int)uVar15 < 0) {
            uVar15 = -uVar15;
          }
          uVar17 = iVar11 - (uint)bVar5;
          if ((int)uVar17 < 0) {
            uVar17 = -uVar17;
          }
          if (uVar15 < uVar17) {
            bVar5 = bVar3;
          }
          uVar9 = iVar11 - (uint)bVar8;
          if ((int)uVar9 < 0) {
            uVar9 = -uVar9;
          }
          if (uVar15 < uVar9) {
            bVar8 = bVar5;
          }
          if (uVar17 < uVar9) {
            bVar8 = bVar5;
          }
          param_8[param_6 - iVar14] = *(char *)((param_1 + param_6 + param_2) - iVar14) - bVar8;
          iVar14 = iVar14 + -1;
        } while (-iVar14 != param_6 * (param_3 + -1));
      }
      break;
    case 5:
      if (param_6 * param_3 - param_6 != 0 && param_6 <= param_6 * param_3) {
        iVar10 = param_6 * (param_3 + -1);
        do {
          pbVar12 = pbVar6 + param_6;
          iVar10 = iVar10 + -1;
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_8[param_6] = *pbVar12 - (bVar8 >> 1);
          param_8 = param_8 + 1;
        } while (iVar10 != 0);
      }
      break;
    case 6:
      if (param_6 * param_3 - param_6 != 0 && param_6 <= param_6 * param_3) {
        iVar10 = param_6 * (param_3 + -1);
        do {
          pbVar12 = pbVar6 + param_6;
          iVar10 = iVar10 + -1;
          bVar8 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          param_8[param_6] = *pbVar12 - bVar8;
          param_8 = param_8 + 1;
        } while (iVar10 != 0);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715ee838
// Entry: 0x715ee838 | Size: 296 bytes
// =========================================================================

int FUN_715ee838(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_1 != 0) && (iVar1 = FUN_715edc10(), iVar1 != 0)) {
    uStack_20 = uStack_1c;
    iStack_24 = iVar1;
    iVar2 = FUN_714213cc(&iStack_24);
    if (iVar2 == 0) {
      imp_free(iVar1);
    }
    else {
      if (in_stack_0000000c != 0) {
        *(char *)(*(int *)(iVar2 + 0x18) + 3) = (char)in_stack_0000000c;
      }
      if (in_stack_00000000 != 0) {
        **(undefined1 **)(iVar2 + 0x18) = (char)in_stack_00000000;
      }
      if (in_stack_00000004 != 0) {
        *(char *)(*(int *)(iVar2 + 0x18) + 1) = (char)in_stack_00000004;
      }
      if (in_stack_00000008 != 0) {
        *(char *)(*(int *)(iVar2 + 0x18) + 2) = (char)in_stack_00000008;
      }
      FUN_71413700(iVar2,4,&uStack_28,&uStack_2c,&uStack_30,&uStack_34);
      iVar3 = FUN_7143b470(uStack_28,uStack_2c,uStack_30,uStack_34);
      if (iVar3 != 0) {
        FUN_7143bcd4(iVar3,iVar2);
        FUN_71412ac0(iVar2);
        imp_free(iVar1);
        return iVar3;
      }
      imp_free(iVar1);
      FUN_71412ac0(iVar2);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_715eea98
// Entry: 0x715eea98 | Size: 28 bytes
// =========================================================================

undefined4 * FUN_715eea98(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = *param_2;
  uVar4 = param_2[8];
  uVar2 = param_2[0xc];
  uVar5 = param_3[2];
  uVar3 = *param_3;
  uVar1 = FUN_71ba21e8(param_2[4],param_3[1]);
  uVar4 = FUN_71ba21e8(uVar4,uVar5);
  uVar1 = FUN_71ba0b38(uVar4,uVar1);
  uVar4 = FUN_71ba21e8(uVar6,uVar3);
  uVar1 = FUN_71ba0b38(uVar4,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  *param_1 = uVar1;
  uVar1 = param_2[1];
  uVar3 = param_2[0xd];
  uVar2 = param_3[2];
  uVar5 = param_2[9];
  uVar6 = *param_3;
  uVar4 = FUN_71ba21e8(param_2[5],param_3[1]);
  uVar2 = FUN_71ba21e8(uVar5,uVar2);
  uVar4 = FUN_71ba0b38(uVar2,uVar4);
  uVar1 = FUN_71ba21e8(uVar1,uVar6);
  uVar1 = FUN_71ba0b38(uVar1,uVar4);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  param_1[1] = uVar1;
  uVar6 = *param_3;
  uVar4 = param_3[2];
  uVar5 = param_2[2];
  uVar2 = param_2[10];
  uVar3 = param_2[0xe];
  uVar1 = FUN_71ba21e8(param_2[6],param_3[1]);
  uVar4 = FUN_71ba21e8(uVar2,uVar4);
  uVar1 = FUN_71ba0b38(uVar4,uVar1);
  uVar4 = FUN_71ba21e8(uVar5,uVar6);
  uVar1 = FUN_71ba0b38(uVar4,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar3);
  param_1[2] = uVar1;
  return param_2;
}


// =========================================================================
// Function: FUN_715eedfc
// Entry: 0x715eedfc | Size: 500 bytes
// =========================================================================

void FUN_715eedfc(char *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_r4;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\x01') {
      if (*(int *)(param_1 + 4) != 0) {
        FUN_7141b7c0();
        return;
      }
    }
    else if (*param_1 == '\x02') {
      if (*(int *)(param_1 + 4) != 0) {
        FUN_7141b7c0(*(int *)(param_1 + 4));
      }
      iVar12 = FUN_714172f4(param_1);
      if (iVar12 == 0) {
        return;
      }
      DataMemoryBarrier(0xb);
      if (((DAT_70ffcafc & 1) == 0) &&
         (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcafc), iVar8 != 0)) {
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bead4);
        if (*pcVar9 == '\0') {
          puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beac4);
          *(undefined1 *)((int)puVar10 + 0x39) = 1;
          uVar5 = DAT_7007d25c;
          uVar4 = DAT_7007d258;
          uVar3 = DAT_7007d254;
          *puVar10 = DAT_7007d250;
          puVar10[1] = uVar3;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          uVar6 = DAT_7007d270;
          uVar5 = DAT_7007d26c;
          uVar4 = DAT_7007d268;
          uVar3 = DAT_7007d264;
          puVar10[4] = DAT_7007d260;
          puVar10[5] = uVar3;
          puVar10[6] = uVar4;
          puVar10[7] = uVar5;
          puVar10[8] = uVar6;
          uVar6 = DAT_7007d284;
          uVar5 = DAT_7007d280;
          uVar4 = DAT_7007d27c;
          uVar3 = DAT_7007d278;
          puVar10[9] = DAT_7007d274;
          puVar10[10] = uVar3;
          puVar10[0xb] = uVar4;
          puVar10[0xc] = uVar5;
          puVar10[0xd] = uVar6;
          *(undefined1 *)(puVar10 + 0xe) = DAT_7007d288;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432804,puVar10,&DAT_70b0e000,uVar3,unaff_r4);
          puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bead4);
          *puVar11 = 1;
        }
        iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beac4);
        if (*(char *)(iVar8 + 0x39) != '\0') {
          uVar13 = 0;
          uVar14 = 0;
          do {
            iVar15 = (uVar13 & 7) * 8;
            uVar16 = iVar15 - 0x20;
            bVar7 = (byte)(0xefed2135 >> iVar15) |
                    (byte)(0x75915999 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar16) {
              bVar7 = (byte)(0x75915999 >> (uVar16 & 0xff));
            }
            *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar7;
            bVar17 = 0xfffffffe < uVar13;
            bVar1 = uVar14 == 0;
            bVar2 = (0x37 < uVar13) <= uVar14;
            uVar13 = uVar13 + 1;
            uVar14 = uVar14 + bVar17;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar8 + 0x39) = 0;
        }
        DAT_70ffcaf8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcafc);
      }
                    /* WARNING: Could not recover jumptable at 0x7141773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_70ffcaf8)(iVar12);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715eeeec
// Entry: 0x715eeeec | Size: 16 bytes
// =========================================================================

void FUN_715eeeec(char *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 != '\x02') {
    if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x715eef20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x48))();
      return;
    }
    return;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_70ffcc4c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc4c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf014);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf004);
      *(undefined1 *)(puVar9 + 8) = 1;
      uVar5 = DAT_70060b64;
      uVar4 = DAT_70060b60;
      uVar3 = DAT_70060b5c;
      *puVar9 = DAT_70060b58;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70060b74;
      uVar4 = DAT_70060b70;
      uVar3 = DAT_70060b6c;
      puVar9[4] = DAT_70060b68;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433404,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf014);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf004);
    if (*(char *)(iVar7 + 0x20) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x5fd331b1 >> iVar13) |
                (byte)(0x1b15e3ff << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x1b15e3ff >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1e < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x20) = 0;
    }
    DAT_70ffcc48 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc4c);
  }
                    /* WARNING: Could not recover jumptable at 0x714228cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc48)(param_1);
  return;
}


// =========================================================================
// Function: FUN_715ef240
// Entry: 0x715ef240 | Size: 32 bytes
// =========================================================================

void FUN_715ef240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uStack_24;
  
  if (param_1 != 0) {
    FUN_71413b60(9,2);
    FUN_71358f74(&uStack_24);
    uStack_24 = param_3;
    FUN_7135a698(param_1,param_2,&uStack_24,*param_4,param_4[1],param_4[2],param_4[3],param_4[4],
                 param_4[5],param_4[6],param_4[7]);
  }
  return;
}


// =========================================================================
// Function: FUN_715ef340
// Entry: 0x715ef340 | Size: 28 bytes
// =========================================================================

bool FUN_715ef340(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_71ba2d30(*param_3,param_1);
  if (((iVar1 != 0) && (iVar1 = FUN_71ba2d50(param_3[2],param_1), iVar1 != 0)) &&
     (iVar1 = FUN_71ba2d30(param_3[3],param_2), iVar1 != 0)) {
    iVar1 = FUN_71ba2d50(param_3[1],param_2);
    return iVar1 != 0;
  }
  return false;
}


// =========================================================================
// Function: FUN_715ef454
// Entry: 0x715ef454 | Size: 24 bytes
// =========================================================================

void FUN_715ef454(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[4];
  uVar1 = FUN_71ba21e8(*param_2,*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_71ba21e8(*param_2,uVar2);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba21e8(*param_2,uVar3);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba21e8(param_2[1],uVar4);
  param_1[4] = uVar1;
  uVar1 = FUN_71ba21e8(param_2[1],param_1[5]);
  param_1[5] = uVar1;
  uVar1 = FUN_71ba21e8(param_2[1],param_1[6]);
  param_1[6] = uVar1;
  uVar1 = FUN_71ba21e8(param_2[2],param_1[8]);
  param_1[8] = uVar1;
  uVar1 = FUN_71ba21e8(param_2[2],param_1[9]);
  param_1[9] = uVar1;
  uVar1 = FUN_71ba21e8(param_2[2],param_1[10]);
  param_1[10] = uVar1;
  param_1[3] = param_1[3] & 0xfffdfffc;
  return;
}


// =========================================================================
// Function: FUN_715ef638
// Entry: 0x715ef638 | Size: 3036 bytes
// =========================================================================

undefined4 FUN_715ef638(uint *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  uint *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  uint uStack_64;
  uint uStack_4c;
  undefined1 auStack_44 [12];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar34 = param_1 + 1;
  uVar30 = *param_1;
  iVar3 = FUN_71ba2d70(uVar30 & 0x7fffffff,0x469c4000);
  uVar31 = 0;
  if (iVar3 == 0) {
    uVar33 = *puVar34;
    iVar3 = FUN_71ba2d70(uVar33 & 0x7fffffff,0x469c4000);
    if (iVar3 == 0) {
      puVar21 = param_1 + 2;
      uVar4 = *puVar21;
      iVar3 = FUN_71ba2d70(uVar4 & 0x7fffffff,0x469c4000);
      if (iVar3 == 0) {
        puVar19 = param_1 + 3;
        uVar28 = *puVar19;
        iVar3 = FUN_71ba2d70(uVar28 & 0x7fffffff,0x469c4000);
        if (iVar3 == 0) {
          uVar22 = param_1[4];
          iVar3 = FUN_71ba2d70(uVar22 & 0x7fffffff,0x469c4000);
          if (iVar3 == 0) {
            uVar23 = param_1[5];
            iVar3 = FUN_71ba2d70(uVar23 & 0x7fffffff,0x469c4000);
            if (iVar3 == 0) {
              puVar5 = param_1 + 6;
              uVar24 = *puVar5;
              iVar3 = FUN_71ba2d70(uVar24 & 0x7fffffff,0x469c4000);
              if (iVar3 == 0) {
                puVar25 = param_1 + 7;
                uVar6 = *puVar25;
                iVar3 = FUN_71ba2d70(uVar6 & 0x7fffffff,0x469c4000);
                if (iVar3 == 0) {
                  puVar7 = param_1 + 8;
                  uVar15 = *puVar7;
                  iVar3 = FUN_71ba2d70(uVar15 & 0x7fffffff,0x469c4000);
                  if (iVar3 == 0) {
                    uVar8 = *param_3;
                    iVar3 = FUN_71ba2d70(uVar8 & 0x7fffffff,0x469c4000);
                    if (iVar3 == 0) {
                      puVar26 = param_3 + 1;
                      uVar9 = *puVar26;
                      iVar3 = FUN_71ba2d70(uVar9 & 0x7fffffff,0x469c4000);
                      if (iVar3 == 0) {
                        puVar27 = param_3 + 2;
                        uVar10 = *puVar27;
                        iVar3 = FUN_71ba2d70(uVar10 & 0x7fffffff,0x469c4000);
                        if (iVar3 == 0) {
                          uVar31 = FUN_71ba240c(uVar28,uVar24);
                          uVar11 = FUN_71ba240c(uVar22,uVar6);
                          uVar11 = FUN_71ba21e8(uVar11,uVar11);
                          uVar31 = FUN_71ba21e8(uVar31,uVar31);
                          uVar31 = FUN_71ba0b38(uVar31,uVar11);
                          uVar11 = FUN_71ba240c(uVar23,uVar15);
                          uVar11 = FUN_71ba21e8(uVar11,uVar11);
                          FUN_71ba0b38(uVar11,uVar31);
                          uVar31 = imp_sqrtf();
                          uStack_28 = uVar31;
                          uVar11 = FUN_71ba240c(uVar30,uVar28);
                          uVar12 = FUN_71ba240c(uVar33,uVar22);
                          uVar12 = FUN_71ba21e8(uVar12,uVar12);
                          uVar11 = FUN_71ba21e8(uVar11,uVar11);
                          uVar11 = FUN_71ba0b38(uVar11,uVar12);
                          uVar12 = FUN_71ba240c(uVar4,uVar23);
                          uVar12 = FUN_71ba21e8(uVar12,uVar12);
                          FUN_71ba0b38(uVar12,uVar11);
                          uVar11 = imp_sqrtf();
                          uStack_2c = uVar11;
                          uVar12 = FUN_71ba0b38(uVar11,uVar31);
                          uVar13 = FUN_71ba240c(uVar30,uVar8);
                          uVar14 = FUN_71ba240c(uVar33,uVar9);
                          uVar14 = FUN_71ba21e8(uVar14,uVar14);
                          uVar13 = FUN_71ba21e8(uVar13,uVar13);
                          uVar13 = FUN_71ba0b38(uVar13,uVar14);
                          uVar14 = FUN_71ba240c(uVar4,uVar10);
                          uVar14 = FUN_71ba21e8(uVar14,uVar14);
                          FUN_71ba0b38(uVar14,uVar13);
                          uVar13 = imp_sqrtf();
                          iVar3 = FUN_71ba2d30(uVar13,uVar12);
                          puVar16 = param_1 + 5;
                          puVar18 = param_1 + 4;
                          if (iVar3 == 0) {
                            uVar11 = FUN_71ba13e0(uVar11,uVar13);
                            uVar12 = FUN_71ba240c(0x3f800000,uVar11);
                            uVar13 = FUN_71ba21e8(uVar9,uVar11);
                            uVar14 = FUN_71ba21e8(uVar12,uVar33);
                            uVar33 = FUN_71ba0b38(uVar14,uVar13);
                            *puVar18 = uVar33;
                            uVar13 = FUN_71ba21e8(uVar8,uVar11);
                            uVar14 = FUN_71ba21e8(uVar12,uVar30);
                            uVar30 = FUN_71ba0b38(uVar14,uVar13);
                            *puVar19 = uVar30;
                            uVar11 = FUN_71ba21e8(uVar10,uVar11);
                            uVar12 = FUN_71ba21e8(uVar12,uVar4);
                            uVar4 = FUN_71ba0b38(uVar12,uVar11);
                            *puVar16 = uVar4;
                            uVar28 = *param_3;
                            uVar11 = FUN_71ba240c(uVar30);
                            uVar22 = *puVar26;
                            uVar12 = FUN_71ba240c(uVar33,uVar22);
                            uVar12 = FUN_71ba21e8(uVar12,uVar12);
                            uVar11 = FUN_71ba21e8(uVar11,uVar11);
                            uVar11 = FUN_71ba0b38(uVar11,uVar12);
                            uVar23 = *puVar27;
                            uVar12 = FUN_71ba240c(uVar4,uVar23);
                            uVar12 = FUN_71ba21e8(uVar12,uVar12);
                            FUN_71ba0b38(uVar12,uVar11);
                            uVar11 = imp_sqrtf();
                            uVar31 = FUN_71ba13e0(uVar31,uVar11);
                            uVar11 = FUN_71ba240c(0x3f800000,uVar31);
                            uVar12 = FUN_71ba21e8(uVar22,uVar31);
                            uVar13 = FUN_71ba21e8(uVar11,uVar33);
                            uVar33 = FUN_71ba0b38(uVar13,uVar12);
                            param_1[7] = uVar33;
                            uVar12 = FUN_71ba21e8(uVar28,uVar31);
                            uVar13 = FUN_71ba21e8(uVar11,uVar30);
                            uVar30 = FUN_71ba0b38(uVar13,uVar12);
                            *puVar5 = uVar30;
                            uVar31 = FUN_71ba21e8(uVar23,uVar31);
                            uVar11 = FUN_71ba21e8(uVar11,uVar4);
                            uVar30 = FUN_71ba0b38(uVar11,uVar31);
                            param_1[8] = uVar30;
                          }
                          else {
                            uVar30 = FUN_71ba240c(uVar11,uVar31);
                            iVar3 = FUN_71ba2d70(uVar30 & 0x7fffffff,uVar13);
                            if (iVar3 != 0) {
                              return 0;
                            }
                            uStack_38 = *param_1;
                            uStack_34 = param_1[1];
                            uStack_30 = param_1[2];
                            uVar31 = FUN_71ba240c(uVar8,uVar24);
                            uVar11 = FUN_71ba240c(uVar9,uVar6);
                            uVar11 = FUN_71ba21e8(uVar11,uVar11);
                            uVar31 = FUN_71ba21e8(uVar31,uVar31);
                            uVar31 = FUN_71ba0b38(uVar31,uVar11);
                            uVar11 = FUN_71ba240c(uVar10,uVar15);
                            uVar11 = FUN_71ba21e8(uVar11,uVar11);
                            FUN_71ba0b38(uVar11,uVar31);
                            uVar31 = imp_sqrtf();
                            iVar3 = FUN_71ba2d70(uVar31,0x3c23d70a);
                            if (iVar3 != 0) {
                              iVar3 = 0;
                              while( true ) {
                                iVar17 = 0;
                                *puVar5 = uVar8;
                                uVar30 = *puVar26;
                                *puVar25 = uVar30;
                                uStack_64 = *puVar27;
                                *puVar7 = uStack_64;
                                puVar20 = &uStack_28;
                                do {
                                  uVar31 = *(undefined4 *)((int)param_1 + iVar17 + 0xc);
                                  uVar29 = *(undefined4 *)((int)param_1 + iVar17 + 0x10);
                                  uVar14 = *(undefined4 *)((int)param_1 + iVar17 + 0x18);
                                  uVar32 = *(undefined4 *)((int)param_1 + iVar17 + 0x14);
                                  uVar11 = FUN_71ba240c(uVar31,uVar8);
                                  uVar12 = FUN_71ba240c(uVar29,uVar30);
                                  uVar12 = FUN_71ba21e8(uVar12,uVar12);
                                  uVar11 = FUN_71ba21e8(uVar11,uVar11);
                                  uVar11 = FUN_71ba0b38(uVar11,uVar12);
                                  uVar12 = FUN_71ba240c(uVar32,uStack_64);
                                  uVar12 = FUN_71ba21e8(uVar12,uVar12);
                                  FUN_71ba0b38(uVar12,uVar11);
                                  uVar11 = imp_sqrtf();
                                  uVar11 = FUN_71ba13e0(*puVar20,uVar11);
                                  uVar35 = FUN_71ba1638();
                                  uVar35 = FUN_71ba23ec(0,0x3ff00000,(int)uVar35,
                                                        (int)((ulonglong)uVar35 >> 0x20));
                                  uVar13 = (undefined4)((ulonglong)uVar35 >> 0x20);
                                  uVar12 = (undefined4)uVar35;
                                  uVar35 = FUN_71ba1638(*(undefined4 *)
                                                         ((int)param_1 + iVar17 + 0x20));
                                  FUN_71ba21e8(uVar32,uVar11);
                                  uVar36 = FUN_71ba1638();
                                  uVar35 = FUN_71ba1ea0((int)uVar35,(int)((ulonglong)uVar35 >> 0x20)
                                                        ,uVar12,uVar13);
                                  FUN_71ba0670((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                               (int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
                                  uStack_64 = FUN_71ba242c();
                                  *(uint *)((int)param_1 + iVar17 + 0x14) = uStack_64;
                                  uVar35 = FUN_71ba1638(*(undefined4 *)
                                                         ((int)param_1 + iVar17 + 0x1c));
                                  FUN_71ba21e8(uVar29,uVar11);
                                  uVar36 = FUN_71ba1638();
                                  uVar35 = FUN_71ba1ea0((int)uVar35,(int)((ulonglong)uVar35 >> 0x20)
                                                        ,uVar12,uVar13);
                                  FUN_71ba0670((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                               (int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
                                  uVar30 = FUN_71ba242c();
                                  *(uint *)((int)param_1 + iVar17 + 0x10) = uVar30;
                                  uVar35 = FUN_71ba1638(uVar14);
                                  FUN_71ba21e8(uVar31,uVar11);
                                  uVar36 = FUN_71ba1638();
                                  uVar35 = FUN_71ba1ea0((int)uVar35,(int)((ulonglong)uVar35 >> 0x20)
                                                        ,uVar12,uVar13);
                                  FUN_71ba0670((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                               (int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
                                  uVar8 = FUN_71ba242c();
                                  *(uint *)((int)param_1 + iVar17 + 0xc) = uVar8;
                                  iVar17 = iVar17 + -0xc;
                                  puVar20 = puVar20 + -1;
                                } while (iVar17 != -0x18);
                                FUN_7136d040(param_1,&uStack_38);
                                uVar33 = *puVar21;
                                uStack_4c = *puVar34;
                                uVar30 = *param_1;
                                iVar17 = 0;
                                puVar20 = &uStack_2c;
                                bVar2 = true;
                                do {
                                  bVar1 = bVar2;
                                  uVar4 = param_1[iVar17 * 3 + 3];
                                  uVar22 = param_1[iVar17 * 3 + 4];
                                  uVar28 = param_1[iVar17 * 3 + 5];
                                  uVar31 = FUN_71ba240c();
                                  uVar11 = FUN_71ba240c(uStack_4c,uVar22);
                                  uVar11 = FUN_71ba21e8(uVar11,uVar11);
                                  uVar31 = FUN_71ba21e8(uVar31,uVar31);
                                  uVar31 = FUN_71ba0b38(uVar31,uVar11);
                                  uVar11 = FUN_71ba240c(uVar33,uVar28);
                                  uVar11 = FUN_71ba21e8(uVar11,uVar11);
                                  FUN_71ba0b38(uVar11,uVar31);
                                  uVar31 = imp_sqrtf();
                                  uVar31 = FUN_71ba13e0(*puVar20,uVar31);
                                  uVar35 = FUN_71ba1638();
                                  uVar35 = FUN_71ba23ec(0,0x3ff00000,(int)uVar35,
                                                        (int)((ulonglong)uVar35 >> 0x20));
                                  uVar12 = (undefined4)((ulonglong)uVar35 >> 0x20);
                                  uVar11 = (undefined4)uVar35;
                                  uVar35 = FUN_71ba1638(uVar33);
                                  FUN_71ba21e8(uVar28,uVar31);
                                  uVar36 = FUN_71ba1638();
                                  uVar35 = FUN_71ba1ea0((int)uVar35,(int)((ulonglong)uVar35 >> 0x20)
                                                        ,uVar11,uVar12);
                                  FUN_71ba0670((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                               (int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
                                  uVar33 = FUN_71ba242c();
                                  param_1[iVar17 * 3 + 5] = uVar33;
                                  uVar35 = FUN_71ba1638(uStack_4c);
                                  FUN_71ba21e8(uVar22,uVar31);
                                  uVar36 = FUN_71ba1638();
                                  uVar35 = FUN_71ba1ea0((int)uVar35,(int)((ulonglong)uVar35 >> 0x20)
                                                        ,uVar11,uVar12);
                                  FUN_71ba0670((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                               (int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
                                  uStack_4c = FUN_71ba242c();
                                  param_1[iVar17 * 3 + 4] = uStack_4c;
                                  uVar35 = FUN_71ba1638(uVar30);
                                  FUN_71ba21e8(uVar4,uVar31);
                                  uVar36 = FUN_71ba1638();
                                  uVar35 = FUN_71ba1ea0((int)uVar35,(int)((ulonglong)uVar35 >> 0x20)
                                                        ,uVar11,uVar12);
                                  FUN_71ba0670((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                               (int)uVar36,(int)((ulonglong)uVar36 >> 0x20));
                                  uVar30 = FUN_71ba242c();
                                  param_1[iVar17 * 3 + 3] = uVar30;
                                  iVar17 = 1;
                                  puVar20 = &uStack_28;
                                  bVar2 = false;
                                } while (bVar1);
                                uVar8 = *param_3;
                                uVar31 = FUN_71ba240c(uVar8,*puVar5);
                                uVar11 = FUN_71ba240c(*puVar26,*puVar25);
                                uVar11 = FUN_71ba21e8(uVar11,uVar11);
                                uVar31 = FUN_71ba21e8(uVar31,uVar31);
                                uVar31 = FUN_71ba0b38(uVar31,uVar11);
                                uVar11 = FUN_71ba240c(*puVar27,*puVar7);
                                uVar11 = FUN_71ba21e8(uVar11,uVar11);
                                FUN_71ba0b38(uVar11,uVar31);
                                imp_sqrtf();
                                uVar35 = FUN_71ba1638();
                                iVar17 = FUN_71ba2c5c((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),
                                                      0x47ae147b,0x3f847ae1);
                                if (iVar17 != 0) break;
                                iVar3 = iVar3 + 1;
                                if (iVar3 == 0x65) {
                                  return 0;
                                }
                              }
                            }
                          }
                          FUN_7136cdfc();
                          FUN_7136cdfc(auStack_44);
                          uStack_34 = FUN_71ba240c(*puVar18,*puVar34);
                          uStack_30 = FUN_71ba240c(*puVar16,*puVar21);
                          uStack_38 = FUN_71ba240c(*puVar19,*param_1);
                          FUN_7136ce28(&uStack_38);
                          FUN_7136e064(auStack_44,uStack_38,uStack_34,uStack_30);
                          FUN_7136d040(param_2,auStack_44);
                          FUN_7136cdfc(&uStack_38);
                          FUN_7136cdfc(auStack_44);
                          uStack_34 = FUN_71ba240c(param_1[7],*puVar18);
                          uStack_30 = FUN_71ba240c(param_1[8],*puVar16);
                          uStack_38 = FUN_71ba240c(*puVar5,*puVar19);
                          FUN_7136ce28(&uStack_38);
                          FUN_7136e064(auStack_44,uStack_38,uStack_34,uStack_30);
                          FUN_7136d040(param_2 + 0xc,auStack_44);
                          uVar31 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar31;
}


// =========================================================================
// Function: FUN_715f1504
// Entry: 0x715f1504 | Size: 32 bytes
// =========================================================================

void FUN_715f1504(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_71ba1980();
  FUN_71ba1ea0((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x3eb00000);
  return;
}


// =========================================================================
// Function: FUN_715f1574
// Entry: 0x715f1574 | Size: 8 bytes
// =========================================================================

uint FUN_715f1574(uint param_1)

{
  return param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
         param_1 >> 0x18;
}


// =========================================================================
// Function: FUN_715f1594
// Entry: 0x715f1594 | Size: 1360 bytes
// =========================================================================

void FUN_715f1594(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  char *pcStack_d0;
  undefined *apuStack_c8 [10];
  uint auStack_a0 [5];
  undefined *apuStack_8c [7];
  undefined4 uStack_70;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_35;
  uint *puStack_34;
  int aiStack_30 [3];
  
  uVar14 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  ppuVar9 = apuStack_c8 + 2;
  *param_1 = param_1 + 1;
  uStack_70 = 0;
  apuStack_c8[0] = &DAT_70b14084;
  apuStack_8c[0] = &LAB_70b14098;
  apuStack_c8[1] = (undefined *)0x0;
  thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_8c,ppuVar9);
  apuStack_c8[0] = &DAT_70b1404c;
  uStack_44 = 0;
  uStack_40 = 0xffffffff;
  apuStack_8c[0] = &DAT_70b14060;
  thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(ppuVar9);
  auStack_a0[0] = 0;
  auStack_a0[1] = 0;
  auStack_a0[4] = 8;
  auStack_a0[2] = 0;
  auStack_a0[3] = 0;
  apuStack_c8[2] = &DAT_70b13d18;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (auStack_a0,param_2);
  FUN_714d2e60(ppuVar9);
  uVar1 = (uint)&uStack_f0 | 1;
  uVar2 = (uint)&uStack_e4 | 1;
  pcStack_d0 = (char *)0x0;
  uStack_d4 = 0;
  uStack_d8 = 0;
LAB_715f16bc:
  do {
    do {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ
                (&uStack_e4,(int)apuStack_c8 + *(int *)(apuStack_c8[0] + -0xc));
      piVar3 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(&uStack_e4,&DAT_71204b20);
      uVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,10);
      thunk_foeUZaYNSPyOrNM_GcbNrfl(&uStack_e4);
      piVar3 = (int *)FUN_714fe090(apuStack_c8,&uStack_d8,uVar4);
      if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x10) & 5) != 0) {
        if ((uStack_d8 & 1) != 0) {
          thunk_qNQrlu(pcStack_d0);
        }
        apuStack_c8[0] = &DAT_70b1404c;
        apuStack_8c[0] = &DAT_70b14060;
        apuStack_c8[2] = &DAT_70b13d18;
        if ((auStack_a0[0] & 1) != 0) {
          thunk_qNQrlu(auStack_a0[2]);
        }
        thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(ppuVar9);
        thunk_DhNFDYkimsodFXaqFoxFvGpEvVmaAoNDguokgwPHfvblltnSiOJqIZ(apuStack_c8,&DAT_70b1406c);
        thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_8c);
        return;
      }
      pcVar11 = pcStack_d0;
      uVar6 = uStack_d4;
      if ((uStack_d8 & 1) == 0) {
        uVar6 = uStack_d8 >> 1 & 0x7f;
        pcVar11 = (char *)((uint)&uStack_d8 | 1);
      }
    } while ((int)uVar6 < 1);
    pcVar10 = pcVar11 + uVar6;
    pcVar5 = pcVar11;
    uVar8 = uVar6;
    do {
      pcVar5 = (char *)imp_memchr(pcVar5,0x3a,uVar8);
      if (pcVar5 == (char *)0x0) break;
      if (*pcVar5 == ':') {
        if (pcVar5 != pcVar10) {
          uVar14 = (int)pcVar5 - (int)pcVar11;
        }
        if (pcVar5 != pcVar10 && uVar14 != 0xffffffff) {
          if (uVar14 <= uVar6) {
            uVar6 = uVar14;
          }
          if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_e4);
          }
          if (uVar6 < 0xb) {
            uStack_e4 = CONCAT31(uStack_e4._1_3_,(char)(uVar6 << 1));
            uVar8 = uVar2;
            if (pcVar5 != pcVar11) goto LAB_715f17d4;
          }
          else {
            uVar8 = thunk_MwhHq((uVar6 | 7) + 1);
            uStack_e4 = (uVar6 | 7) + 2;
            uStack_e0 = uVar6;
            uStack_dc = uVar8;
LAB_715f17d4:
            imp___aeabi_memmove(uVar8,pcVar11,uVar6);
          }
          *(undefined1 *)(uVar8 + uVar6) = 0;
          uVar6 = uStack_d4;
          if ((uStack_d8 & 1) == 0) {
            uVar6 = uStack_d8 >> 1 & 0x7f;
          }
          if (uVar6 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(&uStack_f0);
          }
          uVar8 = uVar14 + 1;
          uVar12 = uVar6 - uVar8;
          pcVar11 = pcStack_d0;
          if ((uStack_d8 & 1) == 0) {
            pcVar11 = (char *)((uint)&uStack_d8 | 1);
          }
          if (0xfffffff7 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_f0);
          }
          if (uVar12 < 0xb) {
            uStack_f0 = CONCAT31(uStack_f0._1_3_,(char)uVar12 * '\x02');
            uVar14 = uVar1;
            if (uVar6 != uVar8) goto LAB_715f1868;
          }
          else {
            uVar14 = thunk_MwhHq((uVar12 | 7) + 1);
            uStack_f0 = (uVar12 | 7) + 2;
            uStack_ec = uVar12;
            uStack_e8 = uVar14;
LAB_715f1868:
            imp___aeabi_memmove(uVar14,pcVar11 + uVar8,uVar12);
          }
          *(undefined1 *)(uVar14 + uVar12) = 0;
          iVar13 = -1;
          uVar8 = uStack_dc;
          uVar6 = uStack_e0;
          if ((uStack_e4 & 1) == 0) {
            uVar6 = uStack_e4 >> 1 & 0x7f;
            uVar8 = uVar2;
          }
          uVar12 = 0xffffffff;
          if (uVar6 == 0) goto LAB_715f18d4;
          uVar12 = 0;
          goto LAB_715f18b4;
        }
        break;
      }
      pcVar5 = pcVar5 + 1;
      uVar8 = (int)pcVar10 - (int)pcVar5;
    } while (0 < (int)uVar8);
  } while( true );
  while (uVar12 = uVar12 + 1, uVar6 != uVar12) {
LAB_715f18b4:
    if (*(char *)(uVar8 + uVar12) != ' ' && *(char *)(uVar8 + uVar12) != '\t') goto LAB_715f18d4;
  }
  uVar12 = 0xffffffff;
LAB_715f18d4:
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_e4,0,uVar12);
  uVar8 = uStack_dc;
  uVar6 = uStack_e0;
  if ((uStack_e4 & 1) == 0) {
    uVar6 = uStack_e4 >> 1 & 0x7f;
    uVar8 = uVar2;
  }
  if (uVar6 != 0) {
    iVar7 = 1 - uVar6;
    do {
      if (*(char *)(uVar8 - iVar7) != ' ' && *(char *)(uVar8 - iVar7) != '\t') {
        iVar13 = -iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 1);
  }
  iVar7 = -1;
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_e4,iVar13 + 1,0xffffffff);
  uVar8 = uStack_e8;
  uVar6 = uStack_ec;
  if ((uStack_f0 & 1) == 0) {
    uVar6 = uStack_f0 >> 1 & 0x7f;
    uVar8 = uVar1;
  }
  uVar12 = 0xffffffff;
  if (uVar6 != 0) {
    uVar12 = 0;
    do {
      if (*(char *)(uVar8 + uVar12) != ' ' && *(char *)(uVar8 + uVar12) != '\t') goto LAB_715f198c;
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
    uVar12 = 0xffffffff;
  }
LAB_715f198c:
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_f0,0,uVar12);
  uVar8 = uStack_e8;
  uVar6 = uStack_ec;
  if ((uStack_f0 & 1) == 0) {
    uVar6 = uStack_f0 >> 1 & 0x7f;
    uVar8 = uVar1;
  }
  if (uVar6 != 0) {
    iVar13 = 1 - uVar6;
    do {
      if (*(char *)(uVar8 - iVar13) != ' ' && *(char *)(uVar8 - iVar13) != '\t') {
        iVar7 = -iVar13;
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 1);
  }
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_f0,iVar7 + 1,0xffffffff);
  puStack_34 = &uStack_e4;
  FUN_715f28d8(aiStack_30,param_1,&uStack_e4,&DAT_70082ea0,&puStack_34,&uStack_35);
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (aiStack_30[0] + 0x1c,&uStack_f0);
  if ((uStack_f0 & 1) != 0) {
    thunk_qNQrlu(uStack_e8);
  }
  if ((uStack_e4 & 1) != 0) {
    thunk_qNQrlu(uStack_dc);
  }
  goto LAB_715f16bc;
}


// =========================================================================
// Function: FUN_715f1ee8
// Entry: 0x715f1ee8 | Size: 1460 bytes
// =========================================================================

void FUN_715f1ee8(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined **ppuVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  char *pcStack_d0;
  undefined *apuStack_c8 [10];
  uint auStack_a0 [5];
  undefined *apuStack_8c [7];
  undefined4 uStack_70;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_35;
  uint *puStack_34;
  int aiStack_30 [3];
  
  param_1[1] = 0;
  param_1[2] = 0;
  ppuVar10 = apuStack_c8 + 2;
  *param_1 = param_1 + 1;
  uStack_70 = 0;
  apuStack_c8[0] = &DAT_70b14084;
  apuStack_8c[0] = &LAB_70b14098;
  apuStack_c8[1] = (undefined *)0x0;
  thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_8c,ppuVar10);
  apuStack_c8[0] = &DAT_70b1404c;
  uStack_44 = 0;
  uStack_40 = 0xffffffff;
  apuStack_8c[0] = &DAT_70b14060;
  thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(ppuVar10);
  auStack_a0[0] = 0;
  auStack_a0[1] = 0;
  auStack_a0[4] = 8;
  auStack_a0[2] = 0;
  auStack_a0[3] = 0;
  apuStack_c8[2] = &DAT_70b13d18;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (auStack_a0,param_2);
  FUN_714d2e60(ppuVar10);
  uVar1 = (uint)&uStack_f0 | 1;
  pcStack_d0 = (char *)0x0;
  uStack_d4 = 0;
  uStack_d8 = 0;
  uVar16 = (uint)&uStack_e4 | 1;
LAB_715f2014:
  do {
    do {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ
                (&uStack_e4,(int)apuStack_c8 + *(int *)(apuStack_c8[0] + -0xc));
      piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(&uStack_e4,&DAT_71204b20);
      uVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,10);
      thunk_foeUZaYNSPyOrNM_GcbNrfl(&uStack_e4);
      piVar2 = (int *)FUN_714fe090(apuStack_c8,&uStack_d8,uVar3);
      if ((*(byte *)((int)piVar2 + *(int *)(*piVar2 + -0xc) + 0x10) & 5) != 0) {
        if ((uStack_d8 & 1) != 0) {
          thunk_qNQrlu(pcStack_d0);
        }
        apuStack_c8[0] = &DAT_70b1404c;
        apuStack_8c[0] = &DAT_70b14060;
        apuStack_c8[2] = &DAT_70b13d18;
        if ((auStack_a0[0] & 1) != 0) {
          thunk_qNQrlu(auStack_a0[2]);
        }
        thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(ppuVar10);
        thunk_DhNFDYkimsodFXaqFoxFvGpEvVmaAoNDguokgwPHfvblltnSiOJqIZ(apuStack_c8,&DAT_70b1406c);
        thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_8c);
        return;
      }
      pcVar13 = pcStack_d0;
      uVar5 = uStack_d4;
      if ((uStack_d8 & 1) == 0) {
        uVar5 = uStack_d8 >> 1 & 0x7f;
        pcVar13 = (char *)((uint)&uStack_d8 | 1);
      }
    } while ((int)uVar5 < 1);
    pcVar11 = pcVar13 + uVar5;
    pcVar4 = pcVar13;
    uVar8 = uVar5;
    do {
      pcVar4 = (char *)imp_memchr(pcVar4,0x3a,uVar8);
      if (pcVar4 == (char *)0x0) break;
      if (*pcVar4 == ':') {
        if (pcVar4 != pcVar11) {
          param_2 = (int)pcVar4 - (int)pcVar13;
        }
        if (pcVar4 != pcVar11 && param_2 != 0xffffffff) {
          if (param_2 <= uVar5) {
            uVar5 = param_2;
          }
          if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_e4);
          }
          if (uVar5 < 0xb) {
            uStack_e4 = CONCAT31(uStack_e4._1_3_,(char)(uVar5 << 1));
            uVar8 = uVar16;
            if (pcVar4 != pcVar13) goto LAB_715f2128;
          }
          else {
            uVar8 = thunk_MwhHq((uVar5 | 7) + 1);
            uStack_e4 = (uVar5 | 7) + 2;
            uStack_e0 = uVar5;
            uStack_dc = uVar8;
LAB_715f2128:
            imp___aeabi_memmove(uVar8,pcVar13,uVar5);
          }
          *(undefined1 *)(uVar8 + uVar5) = 0;
          uVar5 = uStack_d4;
          if ((uStack_d8 & 1) == 0) {
            uVar5 = uStack_d8 >> 1 & 0x7f;
          }
          if (uVar5 <= param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(&uStack_f0);
          }
          param_2 = param_2 + 1;
          uVar8 = uVar5 - param_2;
          pcVar13 = pcStack_d0;
          if ((uStack_d8 & 1) == 0) {
            pcVar13 = (char *)((uint)&uStack_d8 | 1);
          }
          if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_f0);
          }
          if (uVar8 < 0xb) {
            uStack_f0 = CONCAT31(uStack_f0._1_3_,(char)uVar8 * '\x02');
            uVar9 = uVar1;
            if (uVar5 != param_2) goto LAB_715f21c0;
          }
          else {
            uVar9 = thunk_MwhHq((uVar8 | 7) + 1);
            uStack_f0 = (uVar8 | 7) + 2;
            uStack_ec = uVar8;
            uStack_e8 = uVar9;
LAB_715f21c0:
            imp___aeabi_memmove(uVar9,pcVar13 + param_2,uVar8);
          }
          *(undefined1 *)(uVar9 + uVar8) = 0;
          iVar14 = -1;
          uVar9 = 0xffffffff;
          uVar8 = uStack_dc;
          uVar5 = uStack_e0;
          if ((uStack_e4 & 1) == 0) {
            uVar5 = uStack_e4 >> 1 & 0x7f;
            uVar8 = uVar16;
          }
          if (uVar5 == 0) goto LAB_715f222c;
          uVar9 = 0;
          goto LAB_715f220c;
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
      uVar8 = (int)pcVar11 - (int)pcVar4;
    } while (0 < (int)uVar8);
  } while( true );
  while (uVar9 = uVar9 + 1, uVar5 != uVar9) {
LAB_715f220c:
    if (*(char *)(uVar8 + uVar9) != ' ' && *(char *)(uVar8 + uVar9) != '\t') goto LAB_715f222c;
  }
  uVar9 = 0xffffffff;
LAB_715f222c:
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_e4,0,uVar9);
  uVar8 = uStack_dc;
  uVar5 = uStack_e0;
  if ((uStack_e4 & 1) == 0) {
    uVar5 = uStack_e4 >> 1 & 0x7f;
    uVar8 = uVar16;
  }
  if (uVar5 != 0) {
    iVar6 = 1 - uVar5;
    do {
      if (*(char *)(uVar8 - iVar6) != ' ' && *(char *)(uVar8 - iVar6) != '\t') {
        iVar14 = -iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 1);
  }
  iVar6 = -1;
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_e4,iVar14 + 1,0xffffffff);
  uVar9 = 0xffffffff;
  uVar8 = uStack_e8;
  uVar5 = uStack_ec;
  if ((uStack_f0 & 1) == 0) {
    uVar5 = uStack_f0 >> 1 & 0x7f;
    uVar8 = uVar1;
  }
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      if (*(char *)(uVar8 + uVar9) != ' ' && *(char *)(uVar8 + uVar9) != '\t') goto LAB_715f22dc;
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    uVar9 = 0xffffffff;
  }
LAB_715f22dc:
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_f0,0,uVar9);
  uVar8 = uStack_e8;
  uVar5 = uStack_ec;
  if ((uStack_f0 & 1) == 0) {
    uVar5 = uStack_f0 >> 1 & 0x7f;
    uVar8 = uVar1;
  }
  if (uVar5 != 0) {
    iVar14 = 1 - uVar5;
    do {
      if (*(char *)(uVar8 - iVar14) != ' ' && *(char *)(uVar8 - iVar14) != '\t') {
        iVar6 = -iVar14;
        break;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 1);
  }
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
            (&uStack_f0,iVar6 + 1,0xffffffff);
  FUN_718862b0(&uStack_fc,&uStack_f0,param_3,1);
  puStack_34 = &uStack_e4;
  FUN_715f2b88(aiStack_30,param_1,&uStack_e4,&DAT_70082ea0,&puStack_34,&uStack_35);
  iVar14 = aiStack_30[0];
  pbVar15 = *(byte **)(aiStack_30[0] + 0x1c);
  if (pbVar15 != (byte *)0x0) {
    pbVar7 = *(byte **)(aiStack_30[0] + 0x20);
    pbVar12 = pbVar15;
    if (pbVar7 != pbVar15) {
      do {
        pbVar12 = pbVar7 + -0xc;
        if ((*pbVar12 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar7 + -4));
        }
        pbVar7 = pbVar12;
      } while (pbVar12 != pbVar15);
      pbVar12 = *(byte **)(iVar14 + 0x1c);
    }
    *(byte **)(iVar14 + 0x20) = pbVar15;
    thunk_qNQrlu(pbVar12);
  }
  *(undefined4 *)(iVar14 + 0x1c) = uStack_fc;
  *(undefined4 *)(iVar14 + 0x20) = uStack_f8;
  *(undefined4 *)(iVar14 + 0x24) = uStack_f4;
  if ((uStack_f0 & 1) != 0) {
    thunk_qNQrlu(uStack_e8);
  }
  param_2 = uVar1;
  if ((uStack_e4 & 1) != 0) {
    thunk_qNQrlu(uStack_dc);
  }
  goto LAB_715f2014;
}


// =========================================================================
// Function: FUN_715f28d8
// Entry: 0x715f28d8 | Size: 216 bytes
// =========================================================================

void FUN_715f28d8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)FUN_715f2a38(param_2,&uStack_24);
  puVar7 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_MwhHq(0x28);
    pbVar3 = (byte *)*param_5;
    if ((*pbVar3 & 1) == 0) {
      uVar6 = *(undefined4 *)(pbVar3 + 4);
      uVar4 = *(undefined4 *)(pbVar3 + 8);
      puVar7[4] = *(undefined4 *)pbVar3;
      puVar7[5] = uVar6;
      puVar7[6] = uVar4;
    }
    else {
      FUN_712f6d58(puVar7 + 4,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 4));
    }
    puVar7[1] = 0;
    puVar7[2] = uStack_24;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    *puVar7 = 0;
    *puVar2 = puVar7;
    puVar5 = puVar7;
    if (*(int *)*param_2 != 0) {
      *param_2 = *(int *)*param_2;
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_712f807c(param_2[1],puVar5);
    param_2[2] = param_2[2] + 1;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = puVar7;
  return;
}


// =========================================================================
// Function: FUN_715f2a38
// Entry: 0x715f2a38 | Size: 256 bytes
// =========================================================================

int * FUN_715f2a38(int param_1,undefined4 *param_2,byte *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  int *piVar10;
  
  piVar9 = (int *)(param_1 + 4);
  piVar2 = (int *)*piVar9;
  piVar10 = piVar9;
  if (piVar2 != (int *)0x0) {
    uVar7 = *(uint *)(param_3 + 4);
    pbVar8 = *(byte **)(param_3 + 8);
    if ((*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
      uVar7 = (uint)(*param_3 >> 1);
    }
    do {
      while( true ) {
        piVar9 = piVar2;
        uVar4 = piVar9[5];
        iVar5 = piVar9[6];
        if ((*(byte *)(piVar9 + 4) & 1) == 0) {
          iVar5 = (int)piVar9 + 0x11;
          uVar4 = (uint)(*(byte *)(piVar9 + 4) >> 1);
        }
        uVar6 = uVar7;
        if (uVar4 < uVar7) {
          uVar6 = uVar4;
        }
        iVar3 = imp_memcmp(pbVar8,iVar5,uVar6);
        bVar1 = uVar4 <= uVar7;
        if (iVar3 != 0) {
          bVar1 = -1 < iVar3;
        }
        if (!bVar1) break;
        iVar5 = imp_memcmp(iVar5,pbVar8,uVar6);
        bVar1 = -1 < iVar5;
        if (iVar5 == 0) {
          bVar1 = uVar7 <= uVar4;
        }
        if (bVar1) goto LAB_715f2b24;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_715f2b24;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_715f2b24:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_715f2b88
// Entry: 0x715f2b88 | Size: 216 bytes
// =========================================================================

void FUN_715f2b88(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)FUN_715b5060(param_2,&uStack_24);
  puVar7 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_MwhHq(0x28);
    pbVar3 = (byte *)*param_5;
    if ((*pbVar3 & 1) == 0) {
      uVar6 = *(undefined4 *)(pbVar3 + 4);
      uVar4 = *(undefined4 *)(pbVar3 + 8);
      puVar7[4] = *(undefined4 *)pbVar3;
      puVar7[5] = uVar6;
      puVar7[6] = uVar4;
    }
    else {
      FUN_712f6d58(puVar7 + 4,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 4));
    }
    puVar7[1] = 0;
    puVar7[2] = uStack_24;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    *puVar7 = 0;
    *puVar2 = puVar7;
    puVar5 = puVar7;
    if (*(int *)*param_2 != 0) {
      *param_2 = *(int *)*param_2;
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_712f807c(param_2[1],puVar5);
    param_2[2] = param_2[2] + 1;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = puVar7;
  return;
}


// =========================================================================
// Function: FUN_715f2ce8
// Entry: 0x715f2ce8 | Size: 3312 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 *
FUN_715f2ce8(undefined4 *param_1,undefined2 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  *param_1 = &DAT_70b0edf0;
  uStack_28 = param_3;
  FUN_71358f74(param_1 + 9);
  FUN_71358f74(param_1 + 10);
  FUN_71358f74(param_1 + 0xc);
  FUN_71358f74(param_1 + 0xd);
  FUN_71358f74(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  FUN_7136cdfc(param_1 + 0x1ca);
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  FUN_71358f74(param_1 + 0x1e1);
  param_1[0x254] = 0;
  param_1[0x255] = 0x3f000000;
  param_1[0x256] = 0x3f000000;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0x3f000000;
  param_1[0x250] = 0x3f000000;
  param_1[0x248] = 0;
  param_1[0x249] = 0x3f000000;
  param_1[0x24a] = 0x3f000000;
  param_1[0x242] = 0;
  param_1[0x243] = 0x3f000000;
  param_1[0x244] = 0x3f000000;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0x3f000000;
  param_1[0x23e] = 0x3f000000;
  param_1[0x236] = 0;
  param_1[0x237] = 0x3f000000;
  param_1[0x238] = 0x3f000000;
  param_1[0x230] = 0;
  param_1[0x231] = 0x3f000000;
  param_1[0x232] = 0x3f000000;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0x3f000000;
  param_1[0x22c] = 0x3f000000;
  param_1[0x224] = 0;
  param_1[0x225] = 0x3f000000;
  param_1[0x226] = 0x3f000000;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0x3f000000;
  param_1[0x220] = 0x3f000000;
  param_1[0x218] = 0;
  param_1[0x219] = 0x3f000000;
  param_1[0x21a] = 0x3f000000;
  param_1[0x212] = 0;
  param_1[0x213] = 0x3f000000;
  param_1[0x214] = 0x3f000000;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0x3f000000;
  param_1[0x20e] = 0x3f000000;
  param_1[0x206] = 0;
  param_1[0x207] = 0x3f000000;
  param_1[0x208] = 0x3f000000;
  param_1[0x200] = 0;
  param_1[0x201] = 0x3f000000;
  param_1[0x202] = 0x3f000000;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0x3f000000;
  param_1[0x1fc] = 0x3f000000;
  param_1[500] = 0;
  param_1[0x1f5] = 0x3f000000;
  param_1[0x1f6] = 0x3f000000;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0x3f000000;
  param_1[0x1f0] = 0x3f000000;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0x3f000000;
  param_1[0x1ea] = 0x3f000000;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0x3f000000;
  param_1[0x1e4] = 0x3f000000;
  FUN_71886108();
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  *(undefined2 *)(param_1 + 0x1cd) = 0;
  uVar2 = FUN_71886108();
  param_1[0x1ce] = uVar2;
  uVar2 = FUN_71886108();
  param_1[0x1cf] = uVar2;
  uVar2 = FUN_71886108();
  param_1[0x1d2] = uVar2;
  uVar2 = FUN_71886108();
  param_1[0x1d3] = uVar2;
  uVar2 = FUN_71886108();
  param_1[0x1d4] = uVar2;
  param_1[0x1ca] = param_4;
  param_1[0x1cc] = param_6;
  param_1[0x1cb] = param_5;
  param_1[0x1d5] = 0;
  *(undefined4 *)((int)param_1 + 0x759) = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x11] = 0;
  param_1[0x25c] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  uStack_6c = 0;
  FUN_71358f50(&uStack_68,0xff0000ff);
  FUN_71359020(param_1 + 0xc,&uStack_68);
  FUN_71358f50(&uStack_68,0xff0000ff);
  FUN_71359020(param_1 + 0xd,&uStack_68);
  FUN_71358f50(&uStack_68,0xff0000ff);
  FUN_71359020(param_1 + 0xe,&uStack_68);
  iVar14 = 0x548;
  param_1[0x1df] = 0x45bb8000;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  param_1[0x25b] = 0;
  *(undefined1 *)(param_1 + 0x1de) = 0;
  param_1[0x1dd] = 0;
  iVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar14) = 0;
    imp___aeabi_memclr4((int)param_1 + (0x48 - iVar3),0x22);
    iVar13 = iVar3 + -0x28;
    iVar14 = iVar14 + 1;
    *(undefined4 *)((int)param_1 + (0x6c - iVar3)) = 0;
    iVar3 = iVar13;
  } while (iVar13 != -0x500);
  uVar16 = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  if ((uStack_28 != 0x1c1) && ((uStack_28 & 0xffffffdf) - 0x21b < 0xfffffffe)) {
    FUN_71569978(DAT_711a3938,&uStack_28);
    bVar17 = param_8 != 0;
    puVar10 = (undefined1 *)0x0;
    if (bVar17) {
      puVar10 = &DAT_ffbb9ec4;
    }
    *(bool *)(param_1 + 0x15c) = bVar17;
    if (bVar17) {
      puVar10[0x715f3028] = 1;
    }
    uVar18 = FUN_71ba1638(param_5);
    uVar19 = FUN_71ba1638(param_6);
    uVar20 = FUN_71ba1638(param_4);
    FUN_715d33c8(&DAT_70082ea2,uStack_28,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar18,uVar19,
                 &uStack_6c);
    uVar18 = FUN_71ba1638(param_7);
    FUN_715d33c8(&DAT_70082eb4,uStack_6c,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    FUN_715d33c8(&DAT_70082ec6,uStack_6c,0);
    FUN_715d33c8(&DAT_70082ed8,uStack_6c,0);
    iVar3 = FUN_713513f4(uStack_6c);
    param_1[1] = iVar3;
    param_1[2] = uStack_6c;
    param_1[3] = iVar3;
    if (iVar3 != 0) {
      FUN_715631e8(DAT_711a3938,(int)*(short *)(iVar3 + 0x26));
      *(undefined4 *)(param_1[3] + 0x508) = 0;
      *(uint *)(param_1[3] + 0x42c) = *(uint *)(param_1[3] + 0x42c) | 0x80000000;
      *(undefined2 *)(param_1[1] + 0x24) = param_2;
      *(undefined1 *)(param_1 + 4) = 0;
      thunk_FUN_715600f0(param_1,&uStack_68);
      uStack_34 = param_5;
      uStack_30 = param_6;
      uStack_38 = param_4;
      iVar3 = thunk_FUN_715f4594(param_1);
      if ((iVar3 != 9) && (iVar3 = thunk_FUN_715f4594(param_1), iVar3 != 10)) {
        uStack_30 = FUN_71ba0b38(uStack_30,0x3e800000);
      }
      FUN_7156063c(param_1,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                   uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,
                   uStack_2c);
    }
  }
  param_1[0x15b] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x569) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x6e5) = 0;
  param_1[0x1ba] = 0;
  FUN_715f45c0(param_1,0xb,0xfc00);
  do {
    if (uVar16 != 0xb) {
      FUN_715f45c0(param_1,uVar16 & 0xff,1);
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x16);
  *(undefined2 *)(param_1 + 0x16d) = 0x101;
  *(undefined1 *)(param_1 + 0x165) = 0;
  *(undefined2 *)(param_1 + 0x25a) = 0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined1 *)((int)param_1 + 0x571) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x167) = 0;
  *(undefined1 *)(param_1 + 0x15f) = 0;
  *(undefined1 *)((int)param_1 + 0x575) = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x168] = 0;
  *(undefined1 *)(param_1 + 0x1b9) = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x16e] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  if (param_1[3] != 0) {
    uVar2 = *(undefined4 *)(param_1[3] + 0x18);
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e9c);
    if (*pcVar4 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e8c);
      *puVar9 = 0x3caed31c;
      puVar9[1] = 0xab251801;
      puVar9[2] = 0x34bedf34;
      *(undefined1 *)((int)puVar9 + 0xf) = 1;
      *(undefined4 *)((int)puVar9 + 0xb) = 0x493e0034;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71338888,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e9c);
      *puVar10 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e8c);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 0x6b;
      pbVar5[1] = pbVar5[1] ^ 0xbb;
      pbVar5[2] = pbVar5[2] ^ 0xcb;
      pbVar5[3] = pbVar5[3] ^ 0x59;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x6d;
      pbVar5[5] = pbVar5[5] ^ 0x47;
      pbVar5[6] = pbVar5[6] ^ 0x49;
      pbVar5[7] = pbVar5[7] ^ 0xcd;
      pbVar5[8] = pbVar5[8] ^ 0x6b;
      pbVar5[9] = pbVar5[9] ^ 0xbb;
      pbVar5[10] = pbVar5[10] ^ 0xcb;
      pbVar5[0xb] = pbVar5[0xb] ^ 0x59;
      pbVar5[0xc] = pbVar5[0xc] ^ 0x6d;
      pbVar5[0xd] = pbVar5[0xd] ^ 0x47;
      pbVar5[0xe] = pbVar5[0xe] ^ 0x49;
    }
    iVar3 = FUN_713fd1dc(uVar2);
    uVar2 = *(undefined4 *)(param_1[3] + 0x18);
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5ebc);
    if (*pcVar4 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5eac);
      *puVar9 = 0xac8071fa;
      puVar9[1] = 0xdd9b52b5;
      puVar9[2] = 0xa4907dd2;
      *(undefined1 *)((int)puVar9 + 0xf) = 1;
      *(undefined4 *)((int)puVar9 + 0xb) = 0xe974b4a4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f380,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5ebc);
      *puVar10 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5eac);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 0x8d;
      pbVar5[1] = pbVar5[1] ^ 0x19;
      pbVar5[2] = pbVar5[2] ^ 0xe5;
      pbVar5[3] = pbVar5[3] ^ 0xc9;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0xd9;
      pbVar5[5] = pbVar5[5] ^ 0xd;
      pbVar5[6] = pbVar5[6] ^ 0xe9;
      pbVar5[7] = pbVar5[7] ^ 0xbb;
      pbVar5[8] = pbVar5[8] ^ 0x8d;
      pbVar5[9] = pbVar5[9] ^ 0x19;
      pbVar5[10] = pbVar5[10] ^ 0xe5;
      pbVar5[0xb] = pbVar5[0xb] ^ 0xc9;
      pbVar5[0xc] = pbVar5[0xc] ^ 0xd9;
      pbVar5[0xd] = pbVar5[0xd] ^ 0xd;
      pbVar5[0xe] = pbVar5[0xe] ^ 0xe9;
    }
    iVar14 = FUN_713fd1dc(uVar2);
    uVar2 = *(undefined4 *)(param_1[3] + 0x18);
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5edc);
    if (*pcVar4 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5ecc);
      *puVar9 = 0x2c84f3ce;
      puVar9[1] = 0xebaf3a83;
      puVar9[2] = 0x2494ffe6;
      *(undefined1 *)((int)puVar9 + 0xf) = 1;
      *(undefined4 *)((int)puVar9 + 0xb) = 0xdd1c8224;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f3b0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5edc);
      *puVar10 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5ecc);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 0xb9;
      pbVar5[1] = pbVar5[1] ^ 0x9b;
      pbVar5[2] = pbVar5[2] ^ 0xe1;
      pbVar5[3] = pbVar5[3] ^ 0x49;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0xef;
      pbVar5[5] = pbVar5[5] ^ 0x65;
      pbVar5[6] = pbVar5[6] ^ 0xdd;
      pbVar5[7] = pbVar5[7] ^ 0x89;
      pbVar5[8] = pbVar5[8] ^ 0xb9;
      pbVar5[9] = pbVar5[9] ^ 0x9b;
      pbVar5[10] = pbVar5[10] ^ 0xe1;
      pbVar5[0xb] = pbVar5[0xb] ^ 0x49;
      pbVar5[0xc] = pbVar5[0xc] ^ 0xef;
      pbVar5[0xd] = pbVar5[0xd] ^ 0x65;
      pbVar5[0xe] = pbVar5[0xe] ^ 0xdd;
    }
    iVar6 = FUN_713fd1dc(uVar2);
    iVar13 = *(int *)(param_1[3] + 0x18);
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5efc);
    if (*pcVar4 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5eec);
      *puVar9 = 0xb88eb7e4;
      puVar9[1] = 0x1f4bfe1f;
      puVar9[2] = 0xb09ebbcc;
      *(undefined1 *)((int)puVar9 + 0xf) = 1;
      *(undefined4 *)((int)puVar9 + 0xb) = 0x27d81eb0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f3e0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5efc);
      *puVar10 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5eec);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 0x93;
      pbVar5[1] = pbVar5[1] ^ 0xdf;
      pbVar5[2] = pbVar5[2] ^ 0xeb;
      pbVar5[3] = pbVar5[3] ^ 0xdd;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x73;
      pbVar5[5] = pbVar5[5] ^ 0xa1;
      pbVar5[6] = pbVar5[6] ^ 0x27;
      pbVar5[7] = pbVar5[7] ^ 0x7d;
      pbVar5[8] = pbVar5[8] ^ 0x93;
      pbVar5[9] = pbVar5[9] ^ 0xdf;
      pbVar5[10] = pbVar5[10] ^ 0xeb;
      pbVar5[0xb] = pbVar5[0xb] ^ 0xdd;
      pbVar5[0xc] = pbVar5[0xc] ^ 0x73;
      pbVar5[0xd] = pbVar5[0xd] ^ 0xa1;
      pbVar5[0xe] = pbVar5[0xe] ^ 0x27;
    }
    iVar7 = FUN_713fd1dc(iVar13);
    if (iVar3 != 0 && iVar14 != 0) {
      if (iVar6 != 0) {
        iVar13 = iVar7;
      }
      if (iVar6 != 0 && iVar7 != 0) {
        imp___aeabi_memcpy(param_1 + 0x16f,iVar3 + 0x10,0x40);
        imp___aeabi_memcpy(param_1 + 0x17f,iVar14 + 0x10,0x40);
        imp___aeabi_memcpy(param_1 + 399,iVar6 + 0x10,0x40);
        imp___aeabi_memcpy(param_1 + 0x19f,iVar13 + 0x10,0x40);
      }
    }
    piVar1 = DAT_711a3938;
    uVar16 = *(uint *)(param_1[3] + 0x18);
    piVar12 = DAT_711a3938 + 1;
    piVar11 = (int *)*piVar12;
    piVar15 = piVar12;
    if ((int *)*piVar12 != (int *)0x0) {
      do {
        while (piVar12 = piVar11, uVar16 < (uint)piVar12[4]) {
          piVar11 = (int *)*piVar12;
          piVar15 = piVar12;
          if ((int *)*piVar12 == (int *)0x0) goto LAB_715f37cc;
        }
        if (uVar16 <= (uint)piVar12[4]) goto LAB_715f3824;
        piVar11 = (int *)piVar12[1];
      } while ((int *)piVar12[1] != (int *)0x0);
      piVar15 = piVar12 + 1;
    }
LAB_715f37cc:
    piVar8 = (int *)thunk_MwhHq(0x18);
    piVar8[4] = uVar16;
    piVar8[5] = 0;
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = (int)piVar12;
    *piVar15 = (int)piVar8;
    piVar11 = piVar8;
    if (*(int *)*piVar1 != 0) {
      *piVar1 = *(int *)*piVar1;
      piVar11 = (int *)*piVar15;
    }
    FUN_712f807c(piVar1[1],piVar11);
    piVar1[2] = piVar1[2] + 1;
    piVar12 = piVar8;
LAB_715f3824:
    piVar12[5] = (int)param_1;
  }
  param_1[0x1d8] = 0;
  return param_1;
}


// =========================================================================
// Function: thunk_FUN_715f4594
// Entry: 0x715f4580 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f4594(void)

{
  FUN_715f4594();
  return;
}


// =========================================================================
// Function: FUN_715f4594
// Entry: 0x715f4594 | Size: 20 bytes
// =========================================================================

undefined4 FUN_715f4594(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5a4);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715f45c0
// Entry: 0x715f45c0 | Size: 36 bytes
// =========================================================================

void FUN_715f45c0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte abStack_30 [8];
  uint uStack_28;
  
  uVar4 = (uint)abStack_30 | 1;
  uVar6 = 0;
  *(short *)(param_1 + param_2 * 2 + 0x6ec) = (short)param_3;
  if (param_2 == 0xb) {
    do {
      FUN_715f72f0(abStack_30,param_1,0xb,uVar6);
      uVar5 = uStack_28;
      if ((abStack_30[0] & 1) == 0) {
        uVar5 = uVar4;
      }
      bVar7 = *(int *)(param_1 + 0xc) != 0;
      iVar1 = 0;
      if (bVar7) {
        iVar1 = *(int *)(param_1 + 8);
      }
      if (bVar7 && iVar1 != 0) {
        iVar2 = FUN_713513f4();
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          uVar3 = FUN_713fd1dc(iVar1,uVar5);
          FUN_715fee6c(param_1,uVar3,0);
        }
      }
      if ((param_3 >> (uVar6 & 0xff) & 1) != 0) {
        uVar5 = uStack_28;
        if ((abStack_30[0] & 1) == 0) {
          uVar5 = uVar4;
        }
        bVar7 = *(int *)(param_1 + 0xc) != 0;
        iVar1 = 0;
        if (bVar7) {
          iVar1 = *(int *)(param_1 + 8);
        }
        if (bVar7 && iVar1 != 0) {
          iVar2 = FUN_713513f4();
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
          }
          if (iVar2 != 0 && iVar1 != 0) {
            uVar3 = FUN_713fd1dc(iVar1,uVar5);
            FUN_715fee6c(param_1,uVar3,1);
          }
        }
      }
      if ((abStack_30[0] & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x10);
  }
  else {
    do {
      FUN_715f72f0(abStack_30,param_1,param_2,uVar6);
      uVar5 = uStack_28;
      if ((abStack_30[0] & 1) == 0) {
        uVar5 = uVar4;
      }
      bVar7 = *(int *)(param_1 + 0xc) != 0;
      iVar1 = 0;
      if (bVar7) {
        iVar1 = *(int *)(param_1 + 8);
      }
      if (bVar7 && iVar1 != 0) {
        iVar2 = FUN_713513f4();
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          uVar3 = FUN_713fd1dc(iVar1,uVar5);
          FUN_715fee6c(param_1,uVar3,0);
        }
      }
      if ((param_3 >> (uVar6 & 0xff) & 1) != 0) {
        uVar5 = uStack_28;
        if ((abStack_30[0] & 1) == 0) {
          uVar5 = uVar4;
        }
        bVar7 = *(int *)(param_1 + 0xc) != 0;
        iVar1 = 0;
        if (bVar7) {
          iVar1 = *(int *)(param_1 + 8);
        }
        if (bVar7 && iVar1 != 0) {
          iVar2 = FUN_713513f4();
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
          }
          if (iVar2 != 0 && iVar1 != 0) {
            uVar3 = FUN_713fd1dc(iVar1,uVar5);
            FUN_715fee6c(param_1,uVar3,1);
          }
        }
      }
      if ((abStack_30[0] & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xf);
  }
  return;
}


// =========================================================================
// Function: FUN_715f5134
// Entry: 0x715f5134 | Size: 356 bytes
// =========================================================================

void FUN_715f5134(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x968) == '\0') {
    return;
  }
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x24);
  if (uVar2 < 0x7d1) {
    *(undefined4 *)(*(int *)(DAT_711f6d58 + 4) + uVar2 * 4 + 0x9483) = 0;
  }
  iVar1 = DAT_70ffcec0;
  iVar4 = 0;
  do {
    iVar5 = DAT_70ffcec0 + iVar4;
    if (*(int *)(iVar5 + 0xc) == param_1 + 4) {
      *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      break;
    }
    iVar4 = iVar4 + 0x3c;
  } while (iVar4 != 0xf00);
  iVar4 = 0;
  do {
    iVar5 = iVar1 + iVar4;
    if (*(int *)(iVar5 + 0xc) == param_1 + 5) {
      *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      break;
    }
    iVar4 = iVar4 + 0x3c;
  } while (iVar4 != 0xf00);
  *(undefined4 *)(param_1 + 0x968) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x970) + 0x114) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x94) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xac) = 0;
  piVar3 = *(int **)(param_1 + 0x970);
  *(undefined4 *)(param_1 + 0x970) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  FUN_7131e8f8(*(int *)(param_1 + 0xc) + 0x13c);
  return;
}


// =========================================================================
// Function: FUN_715f534c
// Entry: 0x715f534c | Size: 132 bytes
// =========================================================================

void FUN_715f534c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_710ead54;
  iVar2 = 0;
  do {
    bVar4 = *(char *)(iVar1 + iVar2) != '\0';
    iVar3 = 0;
    if (bVar4) {
      iVar3 = *(int *)(iVar1 + iVar2 + 4);
    }
    if ((bVar4 && iVar3 != 0) && (*(int *)(iVar3 + 0x10) == *(int *)(param_1 + 0xc))) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0x100);
  if (*(int *)(param_1 + 0x760) != 0) {
    FUN_7144d7ac(DAT_70ffd280);
    *(undefined4 *)(param_1 + 0x760) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_715f5ac0
// Entry: 0x715f5ac0 | Size: 44 bytes
// =========================================================================

void FUN_715f5ac0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + param_2 * 0x18 + 0x788);
  if (*piVar1 != 0) {
    FUN_7143d364();
  }
  *piVar1 = 0;
  return;
}


// =========================================================================
// Function: FUN_715f5b20
// Entry: 0x715f5b20 | Size: 44 bytes
// =========================================================================

void FUN_715f5b20(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + param_2 * 0x18 + 0x878);
  if (*piVar1 != 0) {
    FUN_7143d364();
  }
  *piVar1 = 0;
  return;
}


// =========================================================================
// Function: FUN_715f5be4
// Entry: 0x715f5be4 | Size: 528 bytes
// =========================================================================

void FUN_715f5be4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x969);
  }
  if (iVar3 != 0 && uVar4 != param_2) {
    iVar3 = *(int *)(param_1 + 0xc);
    *(char *)(param_1 + 0x969) = (char)param_2;
    if (param_2 != 0) {
      if (*(int *)(iVar3 + 0x2b8) != 0) {
        FUN_7131c068();
        *(undefined4 *)(iVar3 + 0x2b8) = 0;
        return;
      }
      iVar1 = FUN_7130e838(DAT_70b2fb9c,0x4a,0x11);
      if ((iVar1 != 0) && (*(int *)(iVar3 + 0x2b8) == 0)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
        puVar5 = (undefined4 *)(iVar1 + 0x30);
        if (iVar1 == 0) {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + 4);
        }
        FUN_7131c480(iVar3 + 0x144,0x11,10,iVar3 + 0x13c,*puVar5,puVar5[1],puVar5[2],0x3f800000,
                     0x3f800000,0x3f800000,0x3f800000,0,0,0,0);
        *(undefined2 *)(iVar3 + 0x19a) = 4;
        uVar2 = FUN_7131c9e8(DAT_70b2fce4,iVar3 + 0x144);
        *(undefined4 *)(iVar3 + 0x2b8) = uVar2;
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
        uVar2 = FUN_71ba1b94(DAT_712016f0);
        uVar2 = FUN_71ba13e0(uVar2,0x42c80000);
        *(undefined4 *)(*(int *)(iVar3 + 0x2b8) + 0x18) = uVar2;
      }
      return;
    }
    FUN_7131e8f8();
    iVar3 = DAT_70ffcec0;
    iVar1 = 0;
    do {
      iVar6 = DAT_70ffcec0 + iVar1;
      if (*(int *)(iVar6 + 0xc) == param_1 + 4) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar6 + 0x38) = 0;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        break;
      }
      iVar1 = iVar1 + 0x3c;
    } while (iVar1 != 0xf00);
    iVar1 = 0;
    do {
      iVar6 = iVar3 + iVar1;
      if (*(int *)(iVar6 + 0xc) == param_1 + 5) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar6 + 0x38) = 0;
        *(undefined4 *)(iVar6 + 0xc) = 0;
        return;
      }
      iVar1 = iVar1 + 0x3c;
    } while (iVar1 != 0xf00);
  }
  return;
}


// =========================================================================
// Function: FUN_715f5da8
// Entry: 0x715f5da8 | Size: 28 bytes
// =========================================================================

void FUN_715f5da8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2b8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_715f5e08
// Entry: 0x715f5e08 | Size: 44 bytes
// =========================================================================

void FUN_715f5e08(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x460) = param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_715f5e68
// Entry: 0x715f5e68 | Size: 64 bytes
// =========================================================================

void FUN_715f5e68(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    *(char *)(param_1 + 0x20) = (char)param_2;
    FUN_715d33c8(&DAT_70082f20,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715f5f18
// Entry: 0x715f5f18 | Size: 356 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_715f5f18(int param_1,uint param_2)

{
  byte *******pppppppbVar1;
  byte *******pppppppbVar2;
  uint uVar3;
  byte *******pppppppbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte ******ppppppbVar8;
  bool bVar9;
  byte *******pppppppbStack_2c;
  byte *******pppppppbStack_28;
  uint uStack_24;
  
  uStack_24 = 0;
  pppppppbStack_28 = (byte *******)0x0;
  pppppppbStack_2c = (byte *******)&pppppppbStack_28;
  FUN_7160f410(&pppppppbStack_2c,DAT_71174d0c,&DAT_71174d10);
  uVar3 = uStack_24;
  FUN_71513718(&pppppppbStack_2c,pppppppbStack_28);
  if (uVar3 < param_2) {
    return;
  }
  if (param_2 == 0) {
    FUN_715f62d8(&pppppppbStack_2c,*(undefined2 *)(param_1 + 0x974));
    pppppppbVar4 = pppppppbStack_2c;
    pppppppbVar1 = pppppppbStack_28;
  }
  else {
    FUN_715f62d8(&pppppppbStack_2c,param_2);
    pppppppbVar1 = pppppppbStack_28;
    pppppppbVar4 = pppppppbStack_2c;
    if (*(short *)(param_1 + 0x974) == 0) {
      for (; pppppppbVar4 != pppppppbVar1; pppppppbVar4 = pppppppbVar4 + 3) {
        ppppppbVar8 = pppppppbVar4[2];
        if (((uint)*pppppppbVar4 & 1) == 0) {
          ppppppbVar8 = (byte ******)((int)pppppppbVar4 + 1);
        }
        bVar9 = *(int *)(param_1 + 0xc) != 0;
        iVar5 = 0;
        if (bVar9) {
          iVar5 = *(int *)(param_1 + 8);
        }
        if (bVar9 && iVar5 != 0) {
          iVar6 = FUN_713513f4();
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
          }
          if (iVar6 != 0 && iVar5 != 0) {
            uVar7 = FUN_713fd1dc(iVar5,ppppppbVar8);
            FUN_715fee6c(param_1,uVar7,1);
          }
        }
      }
      *(short *)(param_1 + 0x974) = (short)param_2;
      goto LAB_715f60d8;
    }
  }
  for (; pppppppbVar4 != pppppppbVar1; pppppppbVar4 = pppppppbVar4 + 3) {
    ppppppbVar8 = pppppppbVar4[2];
    if (((uint)*pppppppbVar4 & 1) == 0) {
      ppppppbVar8 = (byte ******)((int)pppppppbVar4 + 1);
    }
    bVar9 = *(int *)(param_1 + 0xc) != 0;
    iVar5 = 0;
    if (bVar9) {
      iVar5 = *(int *)(param_1 + 8);
    }
    if (bVar9 && iVar5 != 0) {
      iVar6 = FUN_713513f4();
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
      }
      if (iVar6 != 0 && iVar5 != 0) {
        uVar7 = FUN_713fd1dc(iVar5,ppppppbVar8);
        FUN_715fee6c(param_1,uVar7,0);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x974) = 0;
  if (param_2 != 0) {
    FUN_715f5f18(param_1,param_2);
  }
LAB_715f60d8:
  pppppppbVar1 = pppppppbStack_2c;
  pppppppbVar4 = pppppppbStack_28;
  if (pppppppbStack_2c != (byte *******)0x0) {
    while (pppppppbVar2 = pppppppbVar4, pppppppbVar2 != pppppppbVar1) {
      pppppppbVar4 = pppppppbVar2 + -3;
      if (((uint)*pppppppbVar4 & 1) != 0) {
        thunk_qNQrlu(pppppppbVar2[-1]);
      }
    }
    pppppppbStack_28 = pppppppbVar1;
    thunk_qNQrlu(pppppppbStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_715f62d8
// Entry: 0x715f62d8 | Size: 364 bytes
// =========================================================================

void FUN_715f62d8(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  puVar2 = &DAT_71174d10;
  puVar3 = DAT_71174d10;
  do {
    puVar6 = puVar2;
    if (puVar3 == (undefined4 *)0x0) {
LAB_715f633c:
      puVar1 = (undefined4 *)thunk_MwhHq(0x20);
      puVar1[4] = param_2;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = puVar6;
      *puVar2 = puVar1;
      puVar3 = puVar1;
      if ((int *)*DAT_71174d0c != (int *)0x0) {
        puVar3 = (undefined4 *)*puVar2;
        DAT_71174d0c = (int *)*DAT_71174d0c;
      }
      FUN_712f807c(DAT_71174d10,puVar3);
      DAT_71174d14 = DAT_71174d14 + 1;
LAB_715f639c:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      pbVar9 = (byte *)puVar1[5];
      pbVar8 = (byte *)puVar1[6];
      if (pbVar8 != pbVar9) {
        iVar7 = (int)pbVar8 - (int)pbVar9;
        if (0x15555555 < (uint)((iVar7 >> 2) * -0x55555555)) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6ffc(param_1);
        }
        puVar2 = (undefined4 *)thunk_MwhHq(iVar7);
        *param_1 = (int)puVar2;
        param_1[2] = (int)puVar2 + iVar7;
        do {
          if ((*pbVar9 & 1) == 0) {
            uVar4 = *(undefined4 *)(pbVar9 + 4);
            uVar5 = *(undefined4 *)(pbVar9 + 8);
            *puVar2 = *(undefined4 *)pbVar9;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
          }
          else {
            FUN_712f6d58(puVar2,*(undefined4 *)(pbVar9 + 8),*(undefined4 *)(pbVar9 + 4));
          }
          pbVar9 = pbVar9 + 0xc;
          puVar2 = puVar2 + 3;
        } while (pbVar9 != pbVar8);
        param_1[1] = (int)puVar2;
      }
      return;
    }
    while (puVar1 = puVar3, (uint)puVar1[4] <= param_2) {
      if (param_2 <= (uint)puVar1[4]) goto LAB_715f639c;
      puVar3 = (undefined4 *)puVar1[1];
      if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
        puVar2 = puVar1 + 1;
        puVar6 = puVar1;
        goto LAB_715f633c;
      }
    }
    puVar3 = (undefined4 *)*puVar1;
    puVar2 = puVar1;
  } while( true );
}


// =========================================================================
// Function: FUN_715f6508
// Entry: 0x715f6508 | Size: 24 bytes
// =========================================================================

void FUN_715f6508(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (0xff < param_3) {
    param_3 = 0;
  }
  if (0xff < param_2) {
    param_2 = 0;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    *(char *)(*(int *)(param_1 + 0xc) + 0x438) = (char)param_2;
    *(char *)(*(int *)(param_1 + 0xc) + 0x439) = (char)param_3;
  }
  *(char *)(param_1 + 0x22) = (char)param_3;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(char *)(param_1 + 0x21) = (char)param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_715f65c4
// Entry: 0x715f65b0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f65c4(void)

{
  FUN_715f65c4();
  return;
}


// =========================================================================
// Function: FUN_715f65c4
// Entry: 0x715f65c4 | Size: 32 bytes
// =========================================================================

void FUN_715f65c4(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_715d33c8(&DAT_70082f32,*(undefined4 *)(*(int *)(param_1 + 0x14) + 8),
               *(undefined4 *)(param_1 + 8));
  return;
}


// =========================================================================
// Function: FUN_715f6638
// Entry: 0x715f6638 | Size: 20 bytes
// =========================================================================

void FUN_715f6638(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    if (DAT_711f6d58 != 0) {
      iVar2 = *(int *)(iVar2 + 0x4d4);
    }
    if (DAT_711f6d58 != 0 && iVar2 != 0) {
      iVar2 = *(int *)(DAT_711f6d58 + 4);
      uVar1 = FUN_717b92b8(iVar2);
      if (2000 < uVar1) {
        return;
      }
      bVar3 = *(char *)(iVar2 + uVar1 + 0x3e88) != '\0';
      if (bVar3) {
        uVar1 = *(uint *)(iVar2 + uVar1 * 4);
      }
      if (bVar3 && uVar1 != 0) {
        FUN_715d33c8(&DAT_70082f44,*(undefined4 *)(uVar1 + 8),*(undefined4 *)(param_1 + 8));
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715f6784
// Entry: 0x715f6770 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f6784(void)

{
  FUN_715f6784();
  return;
}


// =========================================================================
// Function: FUN_715f6784
// Entry: 0x715f6784 | Size: 128 bytes
// =========================================================================

undefined4 FUN_715f6784(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    return 0;
  }
  if (DAT_711f6d58 != 0) {
    iVar3 = *(int *)(iVar3 + 0x4d4);
  }
  if (DAT_711f6d58 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(DAT_711f6d58 + 4);
    uVar1 = FUN_717b92b8(iVar3);
    if (2000 < uVar1) {
      return 0;
    }
    uVar2 = 0;
    if (*(char *)(iVar3 + uVar1 + 0x3e88) != '\0') {
      uVar2 = *(undefined4 *)(iVar3 + uVar1 * 4);
    }
    return uVar2;
  }
  return 0;
}


// =========================================================================
// Function: thunk_FUN_715f686c
// Entry: 0x715f6858 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f686c(void)

{
  FUN_715f686c();
  return;
}


// =========================================================================
// Function: FUN_715f686c
// Entry: 0x715f686c | Size: 8 bytes
// =========================================================================

void FUN_715f686c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_715f68a0
// Entry: 0x715f688c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f68a0(void)

{
  FUN_715f68a0();
  return;
}


// =========================================================================
// Function: FUN_715f68a0
// Entry: 0x715f68a0 | Size: 16 bytes
// =========================================================================

void FUN_715f68a0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4cc) = param_2;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715f68dc
// Entry: 0x715f68c8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f68dc(void)

{
  FUN_715f68dc();
  return;
}


// =========================================================================
// Function: FUN_715f68dc
// Entry: 0x715f68dc | Size: 20 bytes
// =========================================================================

undefined4 FUN_715f68dc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4cc);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715f6908
// Entry: 0x715f6908 | Size: 28 bytes
// =========================================================================

void FUN_715f6908(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (uint)*(byte *)(param_1 + 0x1c);
    }
    if (iVar2 != 0 && uVar3 != param_2) {
      if (param_2 == 0) {
        FUN_715d33c8(&DAT_70082f56,*(undefined4 *)(param_1 + 8),0,0,0,0,0);
        iVar2 = *(int *)(param_1 + 0xc);
        bVar1 = *(byte *)(param_1 + 0x770);
        *(uint *)(iVar2 + 0x42c) = *(uint *)(iVar2 + 0x42c) & 0x7fffffff | (uint)bVar1 << 0x1f;
        *(uint *)(iVar2 + 0x430) = *(uint *)(iVar2 + 0x430) | (uint)(bVar1 >> 1);
      }
      else {
        FUN_715d33c8(&DAT_70082f56,*(undefined4 *)(param_1 + 8),1,1,1,1,1);
        *(uint *)(*(int *)(param_1 + 0xc) + 0x42c) =
             *(uint *)(*(int *)(param_1 + 0xc) + 0x42c) | 0x80000000;
      }
      *(bool *)(param_1 + 0x1c) = param_2 != 0;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715f6ab4
// Entry: 0x715f6aa0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f6ab4(void)

{
  FUN_715f6ab4();
  return;
}


// =========================================================================
// Function: FUN_715f6ab4
// Entry: 0x715f6ab4 | Size: 56 bytes
// =========================================================================

undefined4 FUN_715f6ab4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x464), iVar1 = FUN_713c301c(0), iVar2 == iVar1)) {
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: thunk_FUN_715f6b34
// Entry: 0x715f6b20 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f6b34(void)

{
  FUN_715f6b34();
  return;
}


// =========================================================================
// Function: FUN_715f6b34
// Entry: 0x715f6b34 | Size: 52 bytes
// =========================================================================

bool FUN_715f6b34(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_715d33c8(&DAT_70082f68,*(undefined4 *)(param_1 + 8));
    return iVar1 != 0;
  }
  return false;
}


// =========================================================================
// Function: FUN_715f6bbc
// Entry: 0x715f6bbc | Size: 28 bytes
// =========================================================================

void FUN_715f6bbc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if (*(char *)(param_1 + 0x1f) != '\0') {
      return;
    }
    piVar4 = (int *)(param_1 + 0x18);
    if (*piVar4 != 0) {
      FUN_715d33c8(&DAT_70082eea);
      *piVar4 = 0;
    }
    FUN_715d33c8(&DAT_70082f8c,*(undefined4 *)(param_1 + 8),1,3,piVar4);
    FUN_715d33c8(&DAT_70082f9e,*(undefined4 *)(param_1 + 0x18),0x3ee);
    FUN_715d33c8(&DAT_70082fb0,*(undefined4 *)(param_1 + 0x18),3);
    *(undefined1 *)(param_1 + 0x1f) = 1;
    return;
  }
  uVar1 = FUN_715613f8(param_1);
  iVar2 = FUN_71ba2d10(uVar1,0x43480000);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
LAB_715f6dc4:
      if (*(int *)(param_1 + 0x18) != 0) {
        return;
      }
      FUN_715d33c8(&DAT_70082f8c,*(undefined4 *)(param_1 + 8),1,2,(int *)(param_1 + 0x18));
      FUN_715d33c8(&DAT_70082f9e,*(undefined4 *)(param_1 + 0x18),0x3ec);
      return;
    }
    iVar3 = *(int *)(iVar2 + 0x464);
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *(int *)(iVar2 + 0x468);
    }
    if (bVar5 && iVar3 == 0) {
      iVar3 = *(int *)(iVar2 + 0x46c);
      bVar5 = iVar3 == 0;
      if (bVar5) {
        iVar3 = *(int *)(iVar2 + 0x470);
      }
      if (bVar5 && iVar3 == 0) {
        iVar3 = *(int *)(iVar2 + 0x474);
        bVar5 = iVar3 == 0;
        if (bVar5) {
          iVar3 = *(int *)(iVar2 + 0x478);
        }
        if (bVar5 && iVar3 == 0) {
          bVar5 = *(int *)(iVar2 + 0x47c) == 0;
          if (bVar5) {
            iVar2 = *(int *)(iVar2 + 0x480);
          }
          if (bVar5 && iVar2 == 0) goto LAB_715f6dc4;
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x464);
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *(int *)(iVar2 + 0x468);
    }
    if (!bVar5 || iVar3 != 0) goto LAB_715f6ce8;
    iVar3 = *(int *)(iVar2 + 0x46c);
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *(int *)(iVar2 + 0x470);
    }
    if (!bVar5 || iVar3 != 0) goto LAB_715f6ce8;
    iVar3 = *(int *)(iVar2 + 0x474);
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *(int *)(iVar2 + 0x478);
    }
    if (!bVar5 || iVar3 != 0) goto LAB_715f6ce8;
    bVar5 = *(int *)(iVar2 + 0x47c) == 0;
    if (bVar5) {
      iVar2 = *(int *)(iVar2 + 0x480);
    }
    if (!bVar5 || iVar2 != 0) goto LAB_715f6ce8;
  }
  uVar1 = FUN_715613f8(param_1);
  iVar2 = FUN_71ba2d50(uVar1,0x43480000);
  if (iVar2 == 0) {
    return;
  }
LAB_715f6ce8:
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_715d33c8(&DAT_70082eea);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// =========================================================================
// Function: thunk_FUN_715f704c
// Entry: 0x715f7038 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715f704c(void)

{
  FUN_715f704c();
  return;
}


// =========================================================================
// Function: FUN_715f704c
// Entry: 0x715f704c | Size: 36 bytes
// =========================================================================

void FUN_715f704c(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x508) = (uint)(param_2 != 0) << 1;
  *(bool *)(param_1 + 0x1d) = param_2 != 0;
  return;
}


// =========================================================================
// Function: FUN_715f72f0
// Entry: 0x715f72f0 | Size: 2428 bytes
// =========================================================================

void FUN_715f72f0(byte *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  byte abStack_2c [4];
  uint uStack_28;
  uint uStack_24;
  
  if ((param_3 != 0xb) || (param_4 < 10)) {
switchD_715f7328_default:
    FUN_715ff120(param_1);
    uVar12 = *(uint *)(param_1 + 4);
    if ((*param_1 & 1) == 0) {
      uVar12 = (uint)(*param_1 >> 1);
    }
    if (uVar12 == 0) {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c649c);
      if (*pcVar7 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c648c);
        *puVar10 = 0x370f4988;
        *(undefined1 *)(puVar10 + 1) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610068,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c649c);
        *puVar11 = 1;
      }
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c648c);
      if (pbVar8[4] != 0) {
        pbVar8[4] = 0;
        *pbVar8 = *pbVar8 ^ 0xed;
        pbVar8[1] = pbVar8[1] ^ 0x3b;
        pbVar8[2] = pbVar8[2] ^ 0x7d;
        pbVar8[3] = pbVar8[3] ^ 0x37;
      }
      thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl(param_1);
    }
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (param_1,&DAT_7006aeb8);
    thunk_JTLCYfEcbCeQVXSyFtQFASTx(abStack_2c,param_4);
    uVar12 = uStack_24;
    if ((abStack_2c[0] & 1) == 0) {
      uStack_28 = (uint)(abStack_2c[0] >> 1);
      uVar12 = (uint)abStack_2c | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar12,uStack_28);
    if ((abStack_2c[0] & 1) != 0) {
      thunk_qNQrlu(uStack_24);
    }
    return;
  }
  switch(param_4) {
  case 10:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63dc);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63cc);
      *puVar10 = 0x853856a9;
      puVar10[1] = 0xa5ac930;
      *(undefined1 *)((int)puVar10 + 0xb) = 1;
      *(undefined4 *)((int)puVar10 + 7) = 0x5740a60a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160ff48,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63dc);
      *puVar11 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63cc);
    if (pbVar8[0xb] != 0) {
      *pbVar8 = *pbVar8 ^ 0xcb;
      pbVar8[1] = pbVar8[1] ^ 0x39;
      pbVar8[2] = pbVar8[2] ^ 0x57;
      pbVar8[3] = pbVar8[3] ^ 0xf1;
      pbVar8[0xb] = 0;
      pbVar8[4] = pbVar8[4] ^ 0x6f;
      pbVar8[5] = pbVar8[5] ^ 0xad;
      pbVar8[6] = pbVar8[6] ^ 0x2f;
      pbVar8[7] = pbVar8[7] ^ 0x67;
      pbVar8[8] = pbVar8[8] ^ 0xcb;
      pbVar8[9] = pbVar8[9] ^ 0x39;
      pbVar8[10] = pbVar8[10] ^ 0x57;
    }
    break;
  case 0xb:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63fc);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63ec);
      *(undefined2 *)(puVar10 + 3) = 0x1b9;
      *puVar10 = 0xeddfc839;
      puVar10[1] = 0x55ea7fdc;
      puVar10[2] = 0xfadcca2e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160ff74,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63fc);
      *puVar11 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63ec);
    if (pbVar8[0xd] != 0) {
      *pbVar8 = *pbVar8 ^ 0x5b;
      pbVar8[1] = pbVar8[1] ^ 0xa7;
      pbVar8[2] = pbVar8[2] ^ 0xb1;
      pbVar8[3] = pbVar8[3] ^ 0x83;
      pbVar8[0xd] = 0;
      pbVar8[4] = pbVar8[4] ^ 0xb9;
      pbVar8[5] = pbVar8[5] ^ 0xb;
      pbVar8[6] = pbVar8[6] ^ 0xb5;
      pbVar8[7] = pbVar8[7] ^ 0x31;
      pbVar8[8] = pbVar8[8] ^ 0x5b;
      pbVar8[9] = pbVar8[9] ^ 0xa7;
      pbVar8[10] = pbVar8[10] ^ 0xb1;
      pbVar8[0xb] = pbVar8[0xb] ^ 0x83;
      pbVar8[0xc] = pbVar8[0xc] ^ 0xb9;
    }
    break;
  case 0xc:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c641c);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c640c);
      *(undefined1 *)(puVar10 + 4) = 1;
      *puVar10 = 0x556d69f;
      puVar10[1] = 0xd6d2a5d6;
      puVar10[2] = 0x5ffc8f;
      puVar10[3] = 0xb7cebae4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160ffa4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c641c);
      *puVar11 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c640c);
    if (pbVar8[0x10] != 0) {
      *pbVar8 = *pbVar8 ^ 0xfd;
      pbVar8[1] = pbVar8[1] ^ 0xa3;
      pbVar8[2] = pbVar8[2] ^ 0x3b;
      pbVar8[3] = pbVar8[3] ^ 0x75;
      pbVar8[0x10] = 0;
      pbVar8[4] = pbVar8[4] ^ 0x89;
      pbVar8[5] = pbVar8[5] ^ 0xd7;
      pbVar8[6] = pbVar8[6] ^ 0xb7;
      pbVar8[7] = pbVar8[7] ^ 0xb7;
      pbVar8[8] = pbVar8[8] ^ 0xfd;
      pbVar8[9] = pbVar8[9] ^ 0xa3;
      pbVar8[10] = pbVar8[10] ^ 0x3b;
      pbVar8[0xb] = pbVar8[0xb] ^ 0x75;
      pbVar8[0xc] = pbVar8[0xc] ^ 0x89;
      pbVar8[0xd] = pbVar8[0xd] ^ 0xd7;
      pbVar8[0xe] = pbVar8[0xe] ^ 0xb7;
      pbVar8[0xf] = pbVar8[0xf] ^ 0xb7;
    }
    break;
  case 0xd:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c643c);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c642c);
      *puVar10 = 0x318ee0f5;
      puVar10[1] = 0x1c3167a2;
      puVar10[2] = 0x2e8cfaf5;
      *(undefined1 *)((int)puVar10 + 0xe) = 1;
      *(undefined2 *)(puVar10 + 3) = 0xb84;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160ffd4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c643c);
      *puVar11 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c642c);
    if (pbVar8[0xe] != 0) {
      *pbVar8 = *pbVar8 ^ 0x91;
      pbVar8[1] = pbVar8[1] ^ 0x8f;
      pbVar8[2] = pbVar8[2] ^ 0xe1;
      pbVar8[3] = pbVar8[3] ^ 0x43;
      pbVar8[0xe] = 0;
      pbVar8[4] = pbVar8[4] ^ 0xfd;
      pbVar8[5] = pbVar8[5] ^ 0xb;
      pbVar8[6] = pbVar8[6] ^ 0x57;
      pbVar8[7] = pbVar8[7] ^ 0x43;
      pbVar8[8] = pbVar8[8] ^ 0x91;
      pbVar8[9] = pbVar8[9] ^ 0x8f;
      pbVar8[10] = pbVar8[10] ^ 0xe1;
      pbVar8[0xb] = pbVar8[0xb] ^ 0x43;
      pbVar8[0xc] = pbVar8[0xc] ^ 0xfd;
      pbVar8[0xd] = pbVar8[0xd] ^ 0xb;
    }
    break;
  case 0xe:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c645c);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c644c);
      *puVar10 = 0xe2b405fc;
      puVar10[1] = 0x29492e01;
      puVar10[2] = 0xeaa409d4;
      *(undefined1 *)((int)puVar10 + 0xf) = 1;
      *(undefined4 *)((int)puVar10 + 0xb) = 0x250800ea;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610004,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c645c);
      *puVar11 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c644c);
    if (pbVar8[0xf] != 0) {
      *pbVar8 = *pbVar8 ^ 0x8b;
      pbVar8[1] = pbVar8[1] ^ 0x6d;
      pbVar8[2] = pbVar8[2] ^ 0xd1;
      pbVar8[3] = pbVar8[3] ^ 0x87;
      pbVar8[0xf] = 0;
      pbVar8[4] = pbVar8[4] ^ 0x6d;
      pbVar8[5] = pbVar8[5] ^ 0x71;
      pbVar8[6] = pbVar8[6] ^ 0x25;
      pbVar8[7] = pbVar8[7] ^ 0x4f;
      pbVar8[8] = pbVar8[8] ^ 0x8b;
      pbVar8[9] = pbVar8[9] ^ 0x6d;
      pbVar8[10] = pbVar8[10] ^ 0xd1;
      pbVar8[0xb] = pbVar8[0xb] ^ 0x87;
      pbVar8[0xc] = pbVar8[0xc] ^ 0x6d;
      pbVar8[0xd] = pbVar8[0xd] ^ 0x71;
      pbVar8[0xe] = pbVar8[0xe] ^ 0x25;
    }
    break;
  case 0xf:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c647c);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c646c);
      *(undefined1 *)((int)puVar10 + 0x11) = 1;
      uVar5 = DAT_7008302c;
      uVar4 = DAT_70083028;
      uVar3 = DAT_70083024;
      *puVar10 = DAT_70083020;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined1 *)(puVar10 + 4) = DAT_70083030;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610034,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c647c);
      *puVar11 = 1;
    }
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c646c);
    if (pbVar8[0x11] != 0) {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar6 = (byte)(0xc1693b63 >> iVar14) |
                (byte)(0x5015bc1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar6 = (byte)(0x5015bc1 >> (uVar15 & 0xff));
        }
        pbVar8[uVar12] = pbVar8[uVar12] ^ bVar6;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0xf < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      pbVar8[0x11] = 0;
    }
    uVar12 = imp_strlen(pbVar8);
    if (0xfffffff7 < uVar12) goto LAB_715f7c7c;
    if (10 < uVar12) {
      uVar13 = uVar12 | 7;
      pbVar9 = (byte *)thunk_MwhHq(uVar13 + 1);
      goto LAB_715f78ec;
    }
    goto LAB_715f78c8;
  default:
    goto switchD_715f7328_default;
  }
  uVar12 = imp_strlen(pbVar8);
  if (0xfffffff7 < uVar12) {
LAB_715f7c7c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar12 < 0xb) {
LAB_715f78c8:
    pbVar9 = param_1 + 1;
    *param_1 = (byte)(uVar12 << 1);
    if (uVar12 == 0) goto LAB_715f790c;
  }
  else {
    uVar13 = uVar12 | 7;
    pbVar9 = (byte *)thunk_MwhHq(uVar13 + 1);
LAB_715f78ec:
    *(uint *)(param_1 + 4) = uVar12;
    *(uint *)param_1 = uVar13 + 2;
    *(byte **)(param_1 + 8) = pbVar9;
  }
  imp___aeabi_memmove(pbVar9,pbVar8,uVar12);
LAB_715f790c:
  pbVar9[uVar12] = 0;
  return;
}


// =========================================================================
// Function: FUN_715f8740
// Entry: 0x715f8740 | Size: 12 bytes
// =========================================================================

int FUN_715f8740(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0xc) + 0x26);
}


// =========================================================================
// Function: FUN_715f8764
// Entry: 0x715f8764 | Size: 2532 bytes
// =========================================================================

void FUN_715f8764(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  
  bVar13 = *(int *)(param_1 + 0xc) != 0;
  iVar2 = 0;
  if (bVar13) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if (((bVar13 && iVar2 != 0) && (iVar2 = FUN_713513f4(), iVar2 != 0)) &&
     (iVar2 = *(int *)(DAT_70c39074 + *(short *)(*(int *)(param_1 + 0xc) + 0x26) * 4), iVar2 != 0))
  {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar3 = thunk_MwhHq(0xe0);
      imp___aeabi_memclr8(iVar3,0xe0);
      FUN_7136cdfc(iVar3 + 0x14);
      *(int *)(param_1 + 0x44) = iVar3;
      FUN_714f4c60(*(undefined2 *)(iVar2 + 0x62),iVar3);
    }
    puVar10 = (undefined4 *)(iVar2 + 0x58);
    puVar7 = (undefined1 *)*param_2;
    puVar9 = (undefined1 *)param_2[1];
    uVar12 = 0;
    bVar13 = false;
    if (puVar7 != puVar9) {
      do {
        switch(*puVar7) {
        case 0:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 4) = *(undefined4 *)(puVar7 + 4);
          break;
        case 1:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc) = *(undefined4 *)(puVar7 + 4);
          break;
        case 2:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x10) = *(undefined4 *)(puVar7 + 4);
          break;
        case 3:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x14) = *(undefined4 *)(puVar7 + 4);
          break;
        case 4:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x18) = *(undefined4 *)(puVar7 + 4);
          break;
        case 5:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x1c) = *(undefined4 *)(puVar7 + 4);
          break;
        case 6:
          uVar1 = FUN_71ba17bc(*(undefined4 *)(puVar7 + 4));
          bVar13 = true;
          *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x20) = uVar1;
          break;
        case 7:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x28) = *(undefined4 *)(puVar7 + 4);
          break;
        case 8:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xa4) = *(undefined4 *)(puVar7 + 4);
          break;
        case 9:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xa8) = *(undefined4 *)(puVar7 + 4);
          break;
        case 10:
          bVar13 = true;
          *(char *)(*(int *)(param_1 + 0x44) + 0x76) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0xb:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x84) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0xc:
          uVar8 = FUN_71ba21e8(*(undefined4 *)(puVar7 + 4),0x3ecccccd);
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x7c) = uVar8;
          break;
        case 0xd:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x80) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0xe:
          bVar13 = true;
          *(char *)(*(int *)(param_1 + 0x44) + 0x74) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0xf:
          bVar13 = true;
          *(char *)(*(int *)(param_1 + 0x44) + 0x75) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0x10:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x94) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x11:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x98) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x12:
          bVar13 = true;
          *(char *)(*(int *)(param_1 + 0x44) + 0x9c) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0x13:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xa0) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x14:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xac) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x15:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xb0) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x16:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xb4) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x17:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xb8) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x18:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xbc) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x19:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc0) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x1a:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc4) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x1b:
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xd4) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x1c:
          bVar13 = true;
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 200) = *(undefined4 *)(puVar7 + 4);
          break;
        case 0x1d:
          *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xd8) = *(undefined4 *)(puVar7 + 8);
          break;
        case 0x1e:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffffe | *(uint *)(puVar7 + 8) & 1;
          break;
        case 0x1f:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffffd |
               (*(uint *)(puVar7 + 8) & 1) << 1;
          break;
        case 0x20:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffffb |
               (*(uint *)(puVar7 + 8) & 1) << 2;
          break;
        case 0x21:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffff7 |
               (*(uint *)(puVar7 + 8) & 1) << 3;
          break;
        case 0x22:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffffef |
               (*(uint *)(puVar7 + 8) & 1) << 4;
          break;
        case 0x23:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffffdf |
               (*(uint *)(puVar7 + 8) & 1) << 5;
          break;
        case 0x24:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffffbf |
               (*(uint *)(puVar7 + 8) & 1) << 6;
          break;
        case 0x25:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffff7f |
               (*(uint *)(puVar7 + 8) & 1) << 7;
          break;
        case 0x26:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffeff |
               (*(uint *)(puVar7 + 8) & 1) << 8;
          break;
        case 0x27:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffdff |
               (*(uint *)(puVar7 + 8) & 1) << 9;
          break;
        case 0x28:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffffbff |
               (*(uint *)(puVar7 + 8) & 1) << 10;
          break;
        case 0x29:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffff7ff |
               (*(uint *)(puVar7 + 8) & 1) << 0xb;
          break;
        case 0x2a:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffefff |
               (*(uint *)(puVar7 + 8) & 1) << 0xc;
          break;
        case 0x2b:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffdfff |
               (*(uint *)(puVar7 + 8) & 1) << 0xd;
          break;
        case 0x2c:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffffbfff |
               (*(uint *)(puVar7 + 8) & 1) << 0xe;
          break;
        case 0x2d:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffff7fff |
               (*(uint *)(puVar7 + 8) & 1) << 0xf;
          break;
        case 0x2e:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffeffff |
               (*(ushort *)(puVar7 + 8) & 1) << 0x10;
          break;
        case 0x2f:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffdffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x11;
          break;
        case 0x30:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfffbffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x12;
          break;
        case 0x31:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfff7ffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x13;
          break;
        case 0x32:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffefffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x14;
          break;
        case 0x33:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffdfffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x15;
          break;
        case 0x34:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xffbfffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x16;
          break;
        case 0x35:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xff7fffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x17;
          break;
        case 0x36:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfeffffff |
               ((byte)puVar7[8] & 1) << 0x18;
          break;
        case 0x37:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfdffffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x19;
          break;
        case 0x38:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xfbffffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x1a;
          break;
        case 0x39:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xf7ffffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x1b;
          break;
        case 0x3a:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xefffffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x1c;
          break;
        case 0x3b:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xdfffffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x1d;
          break;
        case 0x3c:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0xbfffffff |
               (*(uint *)(puVar7 + 8) & 1) << 0x1e;
          break;
        case 0x3d:
          *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) =
               *(uint *)(*(int *)(param_1 + 0x44) + 0xcc) & 0x7fffffff |
               *(int *)(puVar7 + 8) << 0x1f;
          break;
        case 0x3e:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffffe | *(uint *)(puVar7 + 8) & 1;
          goto LAB_715f8854;
        case 0x3f:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffffd | (*(uint *)(puVar7 + 8) & 1) << 1;
          goto LAB_715f8854;
        case 0x40:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffffb | (*(uint *)(puVar7 + 8) & 1) << 2;
          goto LAB_715f8854;
        case 0x41:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffff7 | (*(uint *)(puVar7 + 8) & 1) << 3;
          goto LAB_715f8854;
        case 0x42:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffffef | (*(uint *)(puVar7 + 8) & 1) << 4;
          goto LAB_715f8854;
        case 0x43:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffffdf | (*(uint *)(puVar7 + 8) & 1) << 5;
          goto LAB_715f8854;
        case 0x44:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffffbf | (*(uint *)(puVar7 + 8) & 1) << 6;
          goto LAB_715f8854;
        case 0x45:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffff7f | (*(uint *)(puVar7 + 8) & 1) << 7;
          goto LAB_715f8854;
        case 0x46:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffeff | (*(uint *)(puVar7 + 8) & 1) << 8;
          goto LAB_715f8854;
        case 0x47:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffdff | (*(uint *)(puVar7 + 8) & 1) << 9;
          goto LAB_715f8854;
        case 0x48:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffffbff | (*(uint *)(puVar7 + 8) & 1) << 10;
          goto LAB_715f8854;
        case 0x49:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffff7ff | (*(uint *)(puVar7 + 8) & 1) << 0xb;
          goto LAB_715f8854;
        case 0x4a:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffefff | (*(uint *)(puVar7 + 8) & 1) << 0xc;
          goto LAB_715f8854;
        case 0x4b:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffdfff | (*(uint *)(puVar7 + 8) & 1) << 0xd;
          goto LAB_715f8854;
        case 0x4c:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffffbfff | (*(uint *)(puVar7 + 8) & 1) << 0xe;
          goto LAB_715f8854;
        case 0x4d:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffff7fff | (*(uint *)(puVar7 + 8) & 1) << 0xf;
          goto LAB_715f8854;
        case 0x4e:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffeffff | (*(ushort *)(puVar7 + 8) & 1) << 0x10;
          goto LAB_715f8854;
        case 0x4f:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffdffff | (*(uint *)(puVar7 + 8) & 1) << 0x11;
          goto LAB_715f8854;
        case 0x50:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfffbffff | (*(uint *)(puVar7 + 8) & 1) << 0x12;
          goto LAB_715f8854;
        case 0x51:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfff7ffff | (*(uint *)(puVar7 + 8) & 1) << 0x13;
          goto LAB_715f8854;
        case 0x52:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffefffff | (*(uint *)(puVar7 + 8) & 1) << 0x14;
          goto LAB_715f8854;
        case 0x53:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffdfffff | (*(uint *)(puVar7 + 8) & 1) << 0x15;
          goto LAB_715f8854;
        case 0x54:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xffbfffff | (*(uint *)(puVar7 + 8) & 1) << 0x16;
          goto LAB_715f8854;
        case 0x55:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xff7fffff | (*(uint *)(puVar7 + 8) & 1) << 0x17;
          goto LAB_715f8854;
        case 0x56:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfeffffff | ((byte)puVar7[8] & 1) << 0x18;
          goto LAB_715f8854;
        case 0x57:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfdffffff | (*(uint *)(puVar7 + 8) & 1) << 0x19;
          goto LAB_715f8854;
        case 0x58:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xfbffffff | (*(uint *)(puVar7 + 8) & 1) << 0x1a;
          goto LAB_715f8854;
        case 0x59:
          iVar3 = *(int *)(param_1 + 0x44);
          uVar6 = *(uint *)(iVar3 + 0xd0) & 0xf7ffffff | (*(uint *)(puVar7 + 8) & 1) << 0x1b;
LAB_715f8854:
          *(uint *)(iVar3 + 0xd0) = uVar6;
          break;
        case 0x5a:
          *(char *)(*(int *)(param_1 + 0x44) + 0xdc) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0x5b:
          *(char *)(*(int *)(param_1 + 0x44) + 0xdd) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0x5c:
          *(char *)(*(int *)(param_1 + 0x44) + 0xde) = (char)*(undefined4 *)(puVar7 + 8);
          break;
        case 0x5d:
          bVar13 = true;
          *(undefined1 *)(param_1 + 0x584) = 1;
          *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(puVar7 + 4);
          *(undefined4 *)(param_1 + 0x58c) = *puVar10;
          *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(iVar2 + 0x5c);
        }
        puVar7 = puVar7 + 0xc;
      } while (puVar7 != puVar9);
    }
    uVar8 = 0;
    if (*(char *)(param_1 + 0x584) != '\0') {
      uVar12 = *puVar10;
      uVar4 = *(undefined4 *)(param_1 + 0x588);
      uVar8 = *(undefined4 *)(iVar2 + 0x5c);
      *puVar10 = uVar4;
      *(undefined4 *)(iVar2 + 0x5c) = uVar4;
    }
    FUN_713d179c(&DAT_70b46f40,*(undefined4 *)(param_1 + 0x44));
    iVar11 = *(int *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0x44);
    if (*(int *)(iVar11 + 0x5a4) == 9) {
      iVar5 = FUN_71ba2d10(*(undefined4 *)(iVar3 + 0x8c),0xbd638eb0);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar3 + 0x1c) = 0x3dcccccd;
        *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x8c) = 0xbd638eb0;
        iVar11 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 0x44);
      }
    }
    *(int *)(iVar11 + 0x388) = iVar3;
    if (bVar13) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0xc4))();
    }
    if (*(char *)(param_1 + 0x584) != '\0') {
      *puVar10 = uVar12;
      *(undefined4 *)(iVar2 + 0x5c) = uVar8;
    }
    if ((bVar13) && ((*(int **)(param_1 + 0xc))[0x169] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x715f92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xc) + 0x11c))();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715f961c
// Entry: 0x715f961c | Size: 52 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715f961c(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_3e [34];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (param_2 == 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f1c);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f0c);
      *puVar4 = 0xb22cdaf7;
      puVar4[1] = 0xeef32cf3;
      *(undefined1 *)((int)puVar4 + 0xb) = 1;
      *(undefined4 *)((int)puVar4 + 7) = 0x41c6e1ee;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f8d0,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f1c);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f0c);
    if (pbVar3[0xb] != 0) {
      *pbVar3 = *pbVar3 ^ 0x85;
      pbVar3[1] = pbVar3[1] ^ 0xbf;
      pbVar3[2] = pbVar3[2] ^ 0x41;
      pbVar3[3] = pbVar3[3] ^ 0xd3;
      pbVar3[0xb] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x83;
      pbVar3[5] = pbVar3[5] ^ 0x73;
      pbVar3[6] = pbVar3[6] ^ 0x91;
      pbVar3[7] = pbVar3[7] ^ 0x81;
      pbVar3[8] = pbVar3[8] ^ 0x85;
      pbVar3[9] = pbVar3[9] ^ 0xbf;
      bVar1 = pbVar3[10] ^ 0x41;
LAB_715f9b64:
      pbVar3[10] = bVar1;
    }
  }
  else {
    if (param_3 != 0) {
      if (param_2 != 0xff) {
        pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f5c);
        if (*pcVar2 == '\0') {
          puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f4c);
          *(undefined1 *)(puVar4 + 3) = 1;
          *puVar4 = 0x14e10007;
          puVar4[1] = 0x27348928;
          puVar4[2] = 0x6de14a3a;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f928,puVar4,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f5c);
          *puVar5 = 1;
        }
        uVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f4c);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        pbVar3 = (byte *)uVar7;
        if (pbVar3[0xc] != 0) {
          *pbVar3 = *pbVar3 ^ 0x65;
          uVar6 = 0;
          pbVar3[1] = pbVar3[1] ^ 0x6f;
          pbVar3[2] = pbVar3[2] ^ 0x85;
          pbVar3[3] = pbVar3[3] ^ 0x6d;
          pbVar3[0xc] = 0;
          pbVar3[4] = pbVar3[4] ^ 0x77;
          pbVar3[5] = pbVar3[5] ^ 0xfd;
          pbVar3[6] = pbVar3[6] ^ 0x51;
          pbVar3[7] = pbVar3[7] ^ 0x5f;
          pbVar3[8] = pbVar3[8] ^ 0x65;
          pbVar3[9] = pbVar3[9] ^ 0x6f;
          pbVar3[10] = pbVar3[10] ^ 0x85;
          pbVar3[0xb] = pbVar3[0xb] ^ 0x6d;
        }
        FUN_715fa90c(auStack_3e,uVar6,pbVar3,param_2);
        pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f7c);
        if (*pcVar2 == '\0') {
          puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f6c);
          *puVar4 = 0x669862bd;
          puVar4[1] = 0x5c230619;
          *(undefined1 *)((int)puVar4 + 0xb) = 1;
          *(undefined4 *)((int)puVar4 + 7) = 0xf57eab5c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f954,puVar4,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f7c);
          *puVar5 = 1;
        }
        pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f6c);
        if (pbVar3[0xb] != 0) {
          *pbVar3 = *pbVar3 ^ 0xcf;
          pbVar3[1] = pbVar3[1] ^ 7;
          pbVar3[2] = pbVar3[2] ^ 0xf5;
          pbVar3[3] = pbVar3[3] ^ 7;
          pbVar3[0xb] = 0;
          pbVar3[4] = pbVar3[4] ^ 0x69;
          pbVar3[5] = pbVar3[5] ^ 0x59;
          pbVar3[6] = pbVar3[6] ^ 0x41;
          pbVar3[7] = pbVar3[7] ^ 0x33;
          pbVar3[8] = pbVar3[8] ^ 0xcf;
          pbVar3[9] = pbVar3[9] ^ 7;
          pbVar3[10] = pbVar3[10] ^ 0xf5;
        }
        FUN_715fa984(param_1,pbVar3,auStack_3e);
      }
      if (param_3 != 0xff) {
        pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f9c);
        if (*pcVar2 == '\0') {
          puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f8c);
          *(undefined1 *)(puVar4 + 3) = 1;
          *puVar4 = 0x1cdfbadd;
          puVar4[1] = 0xf12c1b88;
          puVar4[2] = 0x65dff0e0;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f980,puVar4,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f9c);
          *puVar5 = 1;
        }
        uVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f8c);
        uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
        pbVar3 = (byte *)uVar7;
        if (pbVar3[0xc] != 0) {
          *pbVar3 = *pbVar3 ^ 0xbf;
          uVar6 = 0;
          pbVar3[1] = pbVar3[1] ^ 0xd5;
          pbVar3[2] = pbVar3[2] ^ 0xbb;
          pbVar3[3] = pbVar3[3] ^ 0x65;
          pbVar3[0xc] = 0;
          pbVar3[4] = pbVar3[4] ^ 0xd7;
          pbVar3[5] = pbVar3[5] ^ 0x6f;
          pbVar3[6] = pbVar3[6] ^ 0x49;
          pbVar3[7] = pbVar3[7] ^ 0x89;
          pbVar3[8] = pbVar3[8] ^ 0xbf;
          pbVar3[9] = pbVar3[9] ^ 0xd5;
          pbVar3[10] = pbVar3[10] ^ 0xbb;
          pbVar3[0xb] = pbVar3[0xb] ^ 0x65;
        }
        FUN_715fa90c(auStack_3e,uVar6,pbVar3,param_3);
        pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fbc);
        if (*pcVar2 == '\0') {
          puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fac);
          *puVar4 = 0x54384a99;
          puVar4[1] = 0x226bfef5;
          *(undefined1 *)((int)puVar4 + 0xb) = 1;
          *(undefined4 *)((int)puVar4 + 7) = 0x55568f22;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f9ac,puVar4,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fbc);
          *puVar5 = 1;
        }
        pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fac);
        if (pbVar3[0xb] != 0) {
          *pbVar3 = *pbVar3 ^ 0xeb;
          pbVar3[1] = pbVar3[1] ^ 0x2f;
          pbVar3[2] = pbVar3[2] ^ 0x55;
          pbVar3[3] = pbVar3[3] ^ 0x35;
          pbVar3[0xb] = 0;
          pbVar3[4] = pbVar3[4] ^ 0x85;
          pbVar3[5] = pbVar3[5] ^ 0xa1;
          pbVar3[6] = pbVar3[6] ^ 9;
          pbVar3[7] = pbVar3[7] ^ 0x4d;
          pbVar3[8] = pbVar3[8] ^ 0xeb;
          pbVar3[9] = pbVar3[9] ^ 0x2f;
          pbVar3[10] = pbVar3[10] ^ 0x55;
        }
        FUN_715fa984(param_1,pbVar3,auStack_3e);
      }
      if (_ext___stack_chk_guard == iStack_1c) {
        return;
      }
      goto LAB_715f9b94;
    }
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f3c);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f2c);
      *puVar4 = 0xd4fe7e87;
      puVar4[1] = 0x42cf0e97;
      *(undefined1 *)((int)puVar4 + 0xb) = 1;
      *(undefined4 *)((int)puVar4 + 7) = 0x93629142;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f8fc,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f3c);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5f2c);
    if (pbVar3[0xb] != 0) {
      *pbVar3 = *pbVar3 ^ 0xf5;
      pbVar3[1] = pbVar3[1] ^ 0x1b;
      pbVar3[2] = pbVar3[2] ^ 0x93;
      pbVar3[3] = pbVar3[3] ^ 0xb5;
      pbVar3[0xb] = 0;
      pbVar3[4] = pbVar3[4] ^ 0xe7;
      pbVar3[5] = pbVar3[5] ^ 0x51;
      pbVar3[6] = pbVar3[6] ^ 0xad;
      pbVar3[7] = pbVar3[7] ^ 0x2d;
      pbVar3[8] = pbVar3[8] ^ 0xf5;
      pbVar3[9] = pbVar3[9] ^ 0x1b;
      bVar1 = pbVar3[10] ^ 0x93;
      goto LAB_715f9b64;
    }
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    FUN_715fa6b8(param_1);
    return;
  }
LAB_715f9b94:
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715fa6b8
// Entry: 0x715fa6b8 | Size: 36 bytes
// =========================================================================

void FUN_715fa6b8(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0x548;
  iVar3 = 0;
  do {
    if (*(char *)(param_1 + iVar5) != '\0') {
      iVar4 = param_1 + iVar3;
      iVar2 = imp_strcmp(iVar4 + 0x48,param_2);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + iVar5) = 0;
        if (*(int *)(iVar4 + 0x6c) != 0) {
          FUN_7143d364();
          *(undefined4 *)(iVar4 + 0x6c) = 0;
        }
        imp___aeabi_memclr4(iVar4 + 0x48,0x22);
        *(undefined1 *)(param_1 + 0x568) = 0;
        if (*(char *)(param_1 + 0x548) == '\0') {
          cVar1 = *(char *)(param_1 + 0x549);
          bVar6 = cVar1 == '\0';
          if (bVar6) {
            cVar1 = *(char *)(param_1 + 0x54a);
          }
          if (bVar6 && cVar1 == '\0') {
            cVar1 = *(char *)(param_1 + 0x54b);
            bVar6 = cVar1 == '\0';
            if (bVar6) {
              cVar1 = *(char *)(param_1 + 0x54c);
            }
            if (bVar6 && cVar1 == '\0') {
              cVar1 = *(char *)(param_1 + 0x54d);
              bVar6 = cVar1 == '\0';
              if (bVar6) {
                cVar1 = *(char *)(param_1 + 0x54e);
              }
              if (bVar6 && cVar1 == '\0') {
                cVar1 = *(char *)(param_1 + 0x54f);
                bVar6 = cVar1 == '\0';
                if (bVar6) {
                  cVar1 = *(char *)(param_1 + 0x550);
                }
                if (bVar6 && cVar1 == '\0') {
                  cVar1 = *(char *)(param_1 + 0x551);
                  bVar6 = cVar1 == '\0';
                  if (bVar6) {
                    cVar1 = *(char *)(param_1 + 0x552);
                  }
                  if (bVar6 && cVar1 == '\0') {
                    cVar1 = *(char *)(param_1 + 0x553);
                    bVar6 = cVar1 == '\0';
                    if (bVar6) {
                      cVar1 = *(char *)(param_1 + 0x554);
                    }
                    if (bVar6 && cVar1 == '\0') {
                      cVar1 = *(char *)(param_1 + 0x555);
                      bVar6 = cVar1 == '\0';
                      if (bVar6) {
                        cVar1 = *(char *)(param_1 + 0x556);
                      }
                      if (bVar6 && cVar1 == '\0') {
                        cVar1 = *(char *)(param_1 + 0x557);
                        bVar6 = cVar1 == '\0';
                        if (bVar6) {
                          cVar1 = *(char *)(param_1 + 0x558);
                        }
                        if (bVar6 && cVar1 == '\0') {
                          cVar1 = *(char *)(param_1 + 0x559);
                          bVar6 = cVar1 == '\0';
                          if (bVar6) {
                            cVar1 = *(char *)(param_1 + 0x55a);
                          }
                          if (bVar6 && cVar1 == '\0') {
                            cVar1 = *(char *)(param_1 + 0x55b);
                            bVar6 = cVar1 == '\0';
                            if (bVar6) {
                              cVar1 = *(char *)(param_1 + 0x55c);
                            }
                            if (bVar6 && cVar1 == '\0') {
                              cVar1 = *(char *)(param_1 + 0x55d);
                              bVar6 = cVar1 == '\0';
                              if (bVar6) {
                                cVar1 = *(char *)(param_1 + 0x55e);
                              }
                              if (bVar6 && cVar1 == '\0') {
                                cVar1 = *(char *)(param_1 + 0x55f);
                                bVar6 = cVar1 == '\0';
                                if (bVar6) {
                                  cVar1 = *(char *)(param_1 + 0x560);
                                }
                                if (bVar6 && cVar1 == '\0') {
                                  cVar1 = *(char *)(param_1 + 0x561);
                                  bVar6 = cVar1 == '\0';
                                  if (bVar6) {
                                    cVar1 = *(char *)(param_1 + 0x562);
                                  }
                                  if (bVar6 && cVar1 == '\0') {
                                    cVar1 = *(char *)(param_1 + 0x563);
                                    bVar6 = cVar1 == '\0';
                                    if (bVar6) {
                                      cVar1 = *(char *)(param_1 + 0x564);
                                    }
                                    if (bVar6 && cVar1 == '\0') {
                                      cVar1 = *(char *)(param_1 + 0x565);
                                      bVar6 = cVar1 == '\0';
                                      if (bVar6) {
                                        cVar1 = *(char *)(param_1 + 0x566);
                                      }
                                      if ((bVar6 && cVar1 == '\0') &&
                                         (*(char *)(param_1 + 0x567) == '\0')) {
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0x568) = 1;
        return;
      }
    }
    iVar3 = iVar3 + 0x28;
    iVar5 = iVar5 + 1;
    if (iVar3 == 0x500) {
      return;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_715fa90c
// Entry: 0x715fa90c | Size: 68 bytes
// =========================================================================

void FUN_715fa90c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x22,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_715fa984
// Entry: 0x715fa984 | Size: 56 bytes
// =========================================================================

void FUN_715fa984(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = 0;
  bVar9 = true;
  iVar2 = param_1 + 0x48;
  do {
    if ((*(char *)(param_1 + uVar8 + 0x548) != '\0') &&
       (iVar1 = imp_strcmp(iVar2,param_2), iVar1 == 0)) break;
    bVar9 = uVar8 < 0x1f;
    uVar8 = uVar8 + 1;
    iVar2 = iVar2 + 0x28;
  } while (uVar8 != 0x20);
  if (bVar9) {
    FUN_715fa6b8(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x548) == '\0') {
    iVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x549) == '\0') {
    iVar2 = 1;
  }
  else if (*(char *)(param_1 + 0x54a) == '\0') {
    iVar2 = 2;
  }
  else if (*(char *)(param_1 + 0x54b) == '\0') {
    iVar2 = 3;
  }
  else if (*(char *)(param_1 + 0x54c) == '\0') {
    iVar2 = 4;
  }
  else if (*(char *)(param_1 + 0x54d) == '\0') {
    iVar2 = 5;
  }
  else if (*(char *)(param_1 + 0x54e) == '\0') {
    iVar2 = 6;
  }
  else if (*(char *)(param_1 + 0x54f) == '\0') {
    iVar2 = 7;
  }
  else if (*(char *)(param_1 + 0x550) == '\0') {
    iVar2 = 8;
  }
  else if (*(char *)(param_1 + 0x551) == '\0') {
    iVar2 = 9;
  }
  else if (*(char *)(param_1 + 0x552) == '\0') {
    iVar2 = 10;
  }
  else if (*(char *)(param_1 + 0x553) == '\0') {
    iVar2 = 0xb;
  }
  else if (*(char *)(param_1 + 0x554) == '\0') {
    iVar2 = 0xc;
  }
  else if (*(char *)(param_1 + 0x555) == '\0') {
    iVar2 = 0xd;
  }
  else if (*(char *)(param_1 + 0x556) == '\0') {
    iVar2 = 0xe;
  }
  else if (*(char *)(param_1 + 0x557) == '\0') {
    iVar2 = 0xf;
  }
  else if (*(char *)(param_1 + 0x558) == '\0') {
    iVar2 = 0x10;
  }
  else if (*(char *)(param_1 + 0x559) == '\0') {
    iVar2 = 0x11;
  }
  else if (*(char *)(param_1 + 0x55a) == '\0') {
    iVar2 = 0x12;
  }
  else if (*(char *)(param_1 + 0x55b) == '\0') {
    iVar2 = 0x13;
  }
  else if (*(char *)(param_1 + 0x55c) == '\0') {
    iVar2 = 0x14;
  }
  else if (*(char *)(param_1 + 0x55d) == '\0') {
    iVar2 = 0x15;
  }
  else if (*(char *)(param_1 + 0x55e) == '\0') {
    iVar2 = 0x16;
  }
  else if (*(char *)(param_1 + 0x55f) == '\0') {
    iVar2 = 0x17;
  }
  else if (*(char *)(param_1 + 0x560) == '\0') {
    iVar2 = 0x18;
  }
  else if (*(char *)(param_1 + 0x561) == '\0') {
    iVar2 = 0x19;
  }
  else if (*(char *)(param_1 + 0x562) == '\0') {
    iVar2 = 0x1a;
  }
  else if (*(char *)(param_1 + 0x563) == '\0') {
    iVar2 = 0x1b;
  }
  else if (*(char *)(param_1 + 0x564) == '\0') {
    iVar2 = 0x1c;
  }
  else if (*(char *)(param_1 + 0x565) == '\0') {
    iVar2 = 0x1d;
  }
  else if (*(char *)(param_1 + 0x566) == '\0') {
    iVar2 = 0x1e;
  }
  else {
    if (*(char *)(param_1 + 0x567) != '\0') {
      return;
    }
    iVar2 = 0x1f;
  }
  ((char *)(param_1 + 0x548))[iVar2] = '\x01';
  iVar2 = param_1 + 0x48 + iVar2 * 0x28;
  imp___strcpy_chk(iVar2,param_2,0x22);
  pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fdc);
  if (*pcVar3 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fcc);
    *(undefined1 *)((int)puVar6 + 7) = 1;
    *puVar6 = 0xe06f7441;
    *(undefined4 *)((int)puVar6 + 3) = 0x7ffacbe0;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160f9d8,puVar6,&DAT_70b0e000);
    puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fdc);
    *puVar7 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fcc);
  if (pbVar4[7] != 0) {
    pbVar4[7] = 0;
    *pbVar4 = *pbVar4 ^ 0x37;
    pbVar4[1] = pbVar4[1] ^ 0x1d;
    pbVar4[2] = pbVar4[2] ^ 1;
    pbVar4[3] = pbVar4[3] ^ 0x99;
    pbVar4[4] = pbVar4[4] ^ 0xa7;
    pbVar4[5] = pbVar4[5] ^ 0x89;
    pbVar4[6] = pbVar4[6] ^ 0x7f;
  }
  uVar5 = FUN_715ec410(pbVar4,param_3,0);
  *(undefined4 *)(iVar2 + 0x24) = uVar5;
  *(undefined1 *)(param_1 + 0x568) = 1;
  return;
}


// =========================================================================
// Function: FUN_715fafa0
// Entry: 0x715fafa0 | Size: 12 bytes
// =========================================================================

void FUN_715fafa0(int param_1)

{
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}


// =========================================================================
// Function: FUN_715fafc4
// Entry: 0x715fafc4 | Size: 48 bytes
// =========================================================================

void FUN_715fafc4(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_71359020(param_1 + 0x24);
  FUN_71359020(param_1 + 0x28,param_3);
  *(undefined1 *)(param_1 + 0x23) = 1;
  return;
}


// =========================================================================
// Function: FUN_715fb044
// Entry: 0x715fb044 | Size: 416 bytes
// =========================================================================

void FUN_715fb044(int param_1,int param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_7143d364();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar8 = FUN_7143b470(100,100,0,4);
  if (iVar8 == 0) {
    return;
  }
  iVar12 = 0;
  iVar9 = FUN_7143c10c(iVar8,0,1);
  uVar10 = 0;
  if (iVar9 != 0) {
    do {
      iVar11 = *(int *)(iVar8 + 0x18);
      iVar14 = 0;
      bVar1 = *param_3;
      bVar2 = param_3[1];
      bVar3 = param_3[2];
      bVar4 = param_4[1];
      bVar5 = *param_4;
      bVar6 = param_4[2];
      do {
        iVar15 = iVar12;
        if (param_2 == 0) {
          iVar15 = iVar14;
        }
        lVar7 = (longlong)(int)(iVar15 * ((uint)bVar5 - (uint)bVar1)) * 0x51eb851f;
        pcVar13 = (char *)(iVar11 * iVar12 + iVar9 + iVar14 * 4);
        *pcVar13 = bVar1 + ((char)(uint)((ulonglong)lVar7 >> 0x25) - (char)(lVar7 >> 0x3f));
        iVar14 = iVar14 + 1;
        pcVar13[3] = -1;
        lVar7 = (longlong)(int)(iVar15 * ((uint)bVar6 - (uint)bVar3)) * 0x51eb851f;
        pcVar13[2] = bVar3 + ((char)(uint)((ulonglong)lVar7 >> 0x25) - (char)(lVar7 >> 0x3f));
        lVar7 = (longlong)(int)(iVar15 * ((uint)bVar4 - (uint)bVar2)) * 0x51eb851f;
        pcVar13[1] = bVar2 + ((char)(uint)((ulonglong)lVar7 >> 0x25) - (char)(lVar7 >> 0x3f));
      } while (iVar14 != 100);
      iVar12 = iVar12 + 1;
    } while (iVar12 != 100);
    FUN_7143c550(iVar8);
    uVar16 = FUN_7143cf50(iVar8);
    uVar10 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar16 != 0) {
      *(undefined1 *)(param_1 + 0x23) = 2;
      *(int *)(param_1 + 0x40) = (int)uVar16;
      return;
    }
  }
  FUN_7143b8c0(iVar8,uVar10);
  return;
}


// =========================================================================
// Function: FUN_715fb2a4
// Entry: 0x715fb2a4 | Size: 16 bytes
// =========================================================================

void FUN_715fb2a4(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + param_2 + 0x2c) = 0;
  return;
}


// =========================================================================
// Function: FUN_715fb2cc
// Entry: 0x715fb2cc | Size: 48 bytes
// =========================================================================

void FUN_715fb2cc(int param_1,int param_2,undefined4 param_3)

{
  FUN_71359020(param_1 + param_2 * 4 + 0x30,param_3);
  *(undefined1 *)(param_1 + param_2 + 0x2c) = 1;
  return;
}


// =========================================================================
// Function: FUN_715fb4bc
// Entry: 0x715fb4bc | Size: 44 bytes
// =========================================================================

bool FUN_715fb4bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = param_1 + 0x48;
  uVar3 = 0;
  bVar4 = true;
  while ((*(char *)(param_1 + 0x548 + uVar3) == '\0' ||
         (iVar1 = imp_strcmp(iVar2,param_2), iVar1 != 0))) {
    bVar4 = uVar3 < 0x1f;
    iVar2 = iVar2 + 0x28;
    uVar3 = uVar3 + 1;
    if (uVar3 == 0x20) {
      return bVar4;
    }
  }
  return bVar4;
}


// =========================================================================
// Function: FUN_715fb56c
// Entry: 0x715fb56c | Size: 56 bytes
// =========================================================================

void FUN_715fb56c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  bVar4 = true;
  iVar2 = param_1 + 0x48;
  do {
    if ((*(char *)(param_1 + uVar3 + 0x548) != '\0') &&
       (iVar1 = imp_strcmp(iVar2,param_2), iVar1 == 0)) break;
    bVar4 = uVar3 < 0x1f;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x28;
  } while (uVar3 != 0x20);
  if (bVar4) {
    FUN_715fa6b8(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x548) == '\0') {
    iVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x549) == '\0') {
    iVar2 = 1;
  }
  else if (*(char *)(param_1 + 0x54a) == '\0') {
    iVar2 = 2;
  }
  else if (*(char *)(param_1 + 0x54b) == '\0') {
    iVar2 = 3;
  }
  else if (*(char *)(param_1 + 0x54c) == '\0') {
    iVar2 = 4;
  }
  else if (*(char *)(param_1 + 0x54d) == '\0') {
    iVar2 = 5;
  }
  else if (*(char *)(param_1 + 0x54e) == '\0') {
    iVar2 = 6;
  }
  else if (*(char *)(param_1 + 0x54f) == '\0') {
    iVar2 = 7;
  }
  else if (*(char *)(param_1 + 0x550) == '\0') {
    iVar2 = 8;
  }
  else if (*(char *)(param_1 + 0x551) == '\0') {
    iVar2 = 9;
  }
  else if (*(char *)(param_1 + 0x552) == '\0') {
    iVar2 = 10;
  }
  else if (*(char *)(param_1 + 0x553) == '\0') {
    iVar2 = 0xb;
  }
  else if (*(char *)(param_1 + 0x554) == '\0') {
    iVar2 = 0xc;
  }
  else if (*(char *)(param_1 + 0x555) == '\0') {
    iVar2 = 0xd;
  }
  else if (*(char *)(param_1 + 0x556) == '\0') {
    iVar2 = 0xe;
  }
  else if (*(char *)(param_1 + 0x557) == '\0') {
    iVar2 = 0xf;
  }
  else if (*(char *)(param_1 + 0x558) == '\0') {
    iVar2 = 0x10;
  }
  else if (*(char *)(param_1 + 0x559) == '\0') {
    iVar2 = 0x11;
  }
  else if (*(char *)(param_1 + 0x55a) == '\0') {
    iVar2 = 0x12;
  }
  else if (*(char *)(param_1 + 0x55b) == '\0') {
    iVar2 = 0x13;
  }
  else if (*(char *)(param_1 + 0x55c) == '\0') {
    iVar2 = 0x14;
  }
  else if (*(char *)(param_1 + 0x55d) == '\0') {
    iVar2 = 0x15;
  }
  else if (*(char *)(param_1 + 0x55e) == '\0') {
    iVar2 = 0x16;
  }
  else if (*(char *)(param_1 + 0x55f) == '\0') {
    iVar2 = 0x17;
  }
  else if (*(char *)(param_1 + 0x560) == '\0') {
    iVar2 = 0x18;
  }
  else if (*(char *)(param_1 + 0x561) == '\0') {
    iVar2 = 0x19;
  }
  else if (*(char *)(param_1 + 0x562) == '\0') {
    iVar2 = 0x1a;
  }
  else if (*(char *)(param_1 + 0x563) == '\0') {
    iVar2 = 0x1b;
  }
  else if (*(char *)(param_1 + 0x564) == '\0') {
    iVar2 = 0x1c;
  }
  else if (*(char *)(param_1 + 0x565) == '\0') {
    iVar2 = 0x1d;
  }
  else if (*(char *)(param_1 + 0x566) == '\0') {
    iVar2 = 0x1e;
  }
  else {
    if (*(char *)(param_1 + 0x567) != '\0') {
      return;
    }
    iVar2 = 0x1f;
  }
  ((char *)(param_1 + 0x548))[iVar2] = '\x01';
  iVar2 = param_1 + 0x48 + iVar2 * 0x28;
  imp___strcpy_chk(iVar2,param_2,0x22);
  *(undefined4 *)(iVar2 + 0x24) = param_3;
  *(undefined1 *)(param_1 + 0x568) = 1;
  return;
}


// =========================================================================
// Function: FUN_715fb934
// Entry: 0x715fb934 | Size: 24 bytes
// =========================================================================

void FUN_715fb934(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = thunk_FUN_715f4594(param_1);
  if (iVar1 != 0) {
    return;
  }
  if ((param_3 & param_2 & param_4) != 0xff) {
    *(char *)(param_1 + 0x574) = (char)param_4;
    *(char *)(param_1 + 0x573) = (char)param_3;
    *(char *)(param_1 + 0x572) = (char)param_2;
    *(undefined1 *)(param_1 + 0x571) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x571) = 0;
  return;
}


// =========================================================================
// Function: FUN_715fb9d8
// Entry: 0x715fb9d8 | Size: 24 bytes
// =========================================================================

void FUN_715fb9d8(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = thunk_FUN_715f4594(param_1);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x571) != '\0')) {
    *param_2 = *(undefined1 *)(param_1 + 0x572);
    *param_3 = *(undefined1 *)(param_1 + 0x573);
    *param_4 = *(undefined1 *)(param_1 + 0x574);
  }
  return;
}


// =========================================================================
// Function: FUN_715fba6c
// Entry: 0x715fba6c | Size: 24 bytes
// =========================================================================

void FUN_715fba6c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  bVar3 = *(int *)(param_1 + 0xc) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (!bVar3 || iVar1 == 0) {
    return;
  }
  iVar1 = thunk_FUN_715f4594(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x57c) = 1;
    uVar4 = FUN_71ba1638(param_3);
    FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xa2529d39,0x3f91df46);
    uVar2 = FUN_71ba242c();
    *(undefined4 *)(param_1 + 0x580) = uVar2;
    return;
  }
  iVar1 = FUN_71ba2cf0(param_3,0);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x575) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x575) = 1;
  uVar4 = FUN_71ba1638(param_3);
  FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xa2529d39,0x3f91df46);
  uVar2 = FUN_71ba242c();
  *(undefined4 *)(param_1 + 0x578) = uVar2;
  return;
}


// =========================================================================
// Function: FUN_715fbc44
// Entry: 0x715fbc44 | Size: 24 bytes
// =========================================================================

void FUN_715fbc44(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_715f4594(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_71ba2cf0(param_3,0);
  if (param_2 == 0) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5ac) = param_3;
      *(undefined1 *)(param_1 + 0x59c) = 1;
      *(undefined1 *)(param_1 + 0x5b4) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x5b4) = 0;
      *(undefined1 *)(param_1 + 0x59c) = 0;
    }
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5b0) = param_3;
    *(undefined1 *)(param_1 + 0x5a4) = 1;
    *(undefined1 *)(param_1 + 0x5b5) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5b5) = 0;
    *(undefined1 *)(param_1 + 0x5a4) = 0;
  }
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x5b8) = uVar2;
  return;
}


// =========================================================================
// Function: FUN_715fbd74
// Entry: 0x715fbd74 | Size: 52 bytes
// =========================================================================

void FUN_715fbd74(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_71ba2cf0(param_2,0x41a00000);
  bVar2 = false;
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2cf0(param_2,0);
    bVar2 = iVar1 == 0;
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x598) = param_2;
    }
  }
  *(bool *)(param_1 + 0x594) = bVar2;
  return;
}


// =========================================================================
// Function: FUN_715fbe24
// Entry: 0x715fbe24 | Size: 3940 bytes
// =========================================================================

void FUN_715fbe24(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint auStack_30 [3];
  
  iVar1 = FUN_71886108();
  if (0x1e < (uint)(iVar1 - *(int *)(param_1 + 0x5b8))) {
    puVar2 = (undefined4 *)(param_1 + 0x5a0);
    if (*(char *)(param_1 + 0x5b4) == '\0') {
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      if (*(char *)(param_1 + 0x59c) == '\0') {
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c603c);
        if (*pcVar3 == '\0') {
          puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c602c);
          *puVar6 = 0xf2765fde;
          puVar6[1] = 0xebadde03;
          puVar6[2] = 0xfa6653f6;
          *(undefined1 *)((int)puVar6 + 0xf) = 1;
          *(undefined4 *)((int)puVar6 + 0xb) = 0xc1f802fa;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fa60,puVar6,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c603c);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c602c);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0xa9;
          pbVar4[1] = pbVar4[1] ^ 0x37;
          pbVar4[2] = pbVar4[2] ^ 0x13;
          pbVar4[3] = pbVar4[3] ^ 0x97;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0x6f;
          pbVar4[5] = pbVar4[5] ^ 0x81;
          pbVar4[6] = pbVar4[6] ^ 0xc1;
          pbVar4[7] = pbVar4[7] ^ 0x8d;
          pbVar4[8] = pbVar4[8] ^ 0xa9;
          pbVar4[9] = pbVar4[9] ^ 0x37;
          pbVar4[10] = pbVar4[10] ^ 0x13;
          pbVar4[0xb] = pbVar4[0xb] ^ 0x97;
          pbVar4[0xc] = pbVar4[0xc] ^ 0x6f;
          pbVar4[0xd] = pbVar4[0xd] ^ 0x81;
          pbVar4[0xe] = pbVar4[0xe] ^ 0xc1;
        }
        iVar1 = FUN_713fd1dc(uVar8);
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c605c);
        if (*pcVar3 == '\0') {
          puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c604c);
          *puVar6 = 0x462877a0;
          puVar6[1] = 0x6107e475;
          puVar6[2] = 0x4e387b88;
          *(undefined1 *)((int)puVar6 + 0xf) = 1;
          *(undefined4 *)((int)puVar6 + 0xb) = 0x75c2744e;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fa90,puVar6,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c605c);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c604c);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0xd7;
          pbVar4[1] = pbVar4[1] ^ 0x1f;
          pbVar4[2] = pbVar4[2] ^ 0x4d;
          pbVar4[3] = pbVar4[3] ^ 0x23;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0x19;
          pbVar4[5] = pbVar4[5] ^ 0xbb;
          pbVar4[6] = pbVar4[6] ^ 0x75;
          pbVar4[7] = pbVar4[7] ^ 7;
          pbVar4[8] = pbVar4[8] ^ 0xd7;
          pbVar4[9] = pbVar4[9] ^ 0x1f;
          pbVar4[10] = pbVar4[10] ^ 0x4d;
          pbVar4[0xb] = pbVar4[0xb] ^ 0x23;
          pbVar4[0xc] = pbVar4[0xc] ^ 0x19;
          pbVar4[0xd] = pbVar4[0xd] ^ 0xbb;
          pbVar4[0xe] = pbVar4[0xe] ^ 0x75;
        }
        iVar5 = FUN_713fd1dc(uVar8);
        *puVar2 = 0;
        FUN_7136cdfc(auStack_30);
        auStack_30[0] = 0x80000000;
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        uVar8 = FUN_7136cdfc(&uStack_3c);
        FUN_715eea98(uVar8,param_1 + 0x5bc,auStack_30);
        *(undefined4 *)(iVar1 + 0x40) = uStack_3c;
        *(undefined4 *)(iVar1 + 0x44) = uStack_38;
        *(undefined4 *)(iVar1 + 0x48) = uStack_34;
        uVar8 = *puVar2;
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = FUN_71ba240c(0,uVar8);
        uVar8 = FUN_7136cdfc(&uStack_3c);
      }
      else {
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5ffc);
        if (*pcVar3 == '\0') {
          puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fec);
          *puVar6 = 0x5e0c09cc;
          puVar6[1] = 0xd1138abb;
          puVar6[2] = 0x561c05e4;
          *(undefined1 *)((int)puVar6 + 0xf) = 1;
          *(undefined4 *)((int)puVar6 + 0xb) = 0x7facba56;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fa00,puVar6,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5ffc);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5fec);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0xbb;
          pbVar4[1] = pbVar4[1] ^ 0x61;
          pbVar4[2] = pbVar4[2] ^ 0x69;
          pbVar4[3] = pbVar4[3] ^ 0x3b;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0xd7;
          pbVar4[5] = pbVar4[5] ^ 0xd5;
          pbVar4[6] = pbVar4[6] ^ 0x7f;
          pbVar4[7] = pbVar4[7] ^ 0xb7;
          pbVar4[8] = pbVar4[8] ^ 0xbb;
          pbVar4[9] = pbVar4[9] ^ 0x61;
          pbVar4[10] = pbVar4[10] ^ 0x69;
          pbVar4[0xb] = pbVar4[0xb] ^ 0x3b;
          pbVar4[0xc] = pbVar4[0xc] ^ 0xd7;
          pbVar4[0xd] = pbVar4[0xd] ^ 0xd5;
          pbVar4[0xe] = pbVar4[0xe] ^ 0x7f;
        }
        iVar1 = FUN_713fd1dc(uVar8);
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c601c);
        if (*pcVar3 == '\0') {
          puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c600c);
          *puVar6 = 0x24611b6;
          puVar6[1] = 0x25697271;
          puVar6[2] = 0xa561d9e;
          *(undefined1 *)((int)puVar6 + 0xf) = 1;
          *(undefined4 *)((int)puVar6 + 0xb) = 0x1b54700a;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fa30,puVar6,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c601c);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c600c);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0xc1;
          pbVar4[1] = pbVar4[1] ^ 0x79;
          pbVar4[2] = pbVar4[2] ^ 0x23;
          pbVar4[3] = pbVar4[3] ^ 0x67;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0x1d;
          pbVar4[5] = pbVar4[5] ^ 0x2d;
          pbVar4[6] = pbVar4[6] ^ 0x1b;
          pbVar4[7] = pbVar4[7] ^ 0x43;
          pbVar4[8] = pbVar4[8] ^ 0xc1;
          pbVar4[9] = pbVar4[9] ^ 0x79;
          pbVar4[10] = pbVar4[10] ^ 0x23;
          pbVar4[0xb] = pbVar4[0xb] ^ 0x67;
          pbVar4[0xc] = pbVar4[0xc] ^ 0x1d;
          pbVar4[0xd] = pbVar4[0xd] ^ 0x2d;
          pbVar4[0xe] = pbVar4[0xe] ^ 0x1b;
        }
        iVar5 = FUN_713fd1dc(uVar8);
        uVar8 = *(undefined4 *)(param_1 + 0x5ac);
        *puVar2 = uVar8;
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = FUN_71ba240c(0,uVar8);
        auStack_30[0] = auStack_30[0] ^ 0x80000000;
        uVar8 = FUN_7136cdfc(&uStack_3c);
        FUN_715eea98(uVar8,param_1 + 0x5bc,auStack_30);
        *(undefined4 *)(iVar1 + 0x40) = uStack_3c;
        *(undefined4 *)(iVar1 + 0x44) = uStack_38;
        *(undefined4 *)(iVar1 + 0x48) = uStack_34;
        uVar8 = *puVar2;
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = FUN_71ba240c(0,uVar8);
        uVar8 = FUN_7136cdfc(&uStack_3c);
      }
      FUN_715eea98(uVar8,param_1 + 0x5fc,auStack_30);
      *(undefined4 *)(iVar5 + 0x40) = uStack_3c;
      *(undefined4 *)(iVar5 + 0x44) = uStack_38;
      *(undefined4 *)(iVar5 + 0x48) = uStack_34;
      *(undefined1 *)(param_1 + 0x5b4) = 1;
    }
    if (*(char *)(param_1 + 0x5b5) == '\0') {
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      if (*(char *)(param_1 + 0x5a4) == '\0') {
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60bc);
        if (*pcVar3 == '\0') {
          puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60ac);
          *puVar2 = 0xd2b09986;
          puVar2[1] = 0xa91d68ff;
          puVar2[2] = 0xdaa095ae;
          *(undefined1 *)((int)puVar2 + 0xf) = 1;
          *(undefined4 *)((int)puVar2 + 0xb) = 0x6f4efeda;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fb20,puVar2,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60bc);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60ac);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0xf1;
          pbVar4[1] = pbVar4[1] ^ 0xf1;
          pbVar4[2] = pbVar4[2] ^ 0xd5;
          pbVar4[3] = pbVar4[3] ^ 0xb7;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0x93;
          pbVar4[5] = pbVar4[5] ^ 0x37;
          pbVar4[6] = pbVar4[6] ^ 0x6f;
          pbVar4[7] = pbVar4[7] ^ 0xcb;
          pbVar4[8] = pbVar4[8] ^ 0xf1;
          pbVar4[9] = pbVar4[9] ^ 0xf1;
          pbVar4[10] = pbVar4[10] ^ 0xd5;
          pbVar4[0xb] = pbVar4[0xb] ^ 0xb7;
          pbVar4[0xc] = pbVar4[0xc] ^ 0x93;
          pbVar4[0xd] = pbVar4[0xd] ^ 0x37;
          pbVar4[0xe] = pbVar4[0xe] ^ 0x6f;
        }
        iVar1 = FUN_713fd1dc(uVar8);
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60dc);
        if (*pcVar3 == '\0') {
          puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60cc);
          *puVar2 = 0xbc56bfa2;
          puVar2[1] = 0xb7b9464b;
          puVar2[2] = 0xb446b38a;
          *(undefined1 *)((int)puVar2 + 0xf) = 1;
          *(undefined4 *)((int)puVar2 + 0xb) = 0xd5604ab4;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fb50,puVar2,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60dc);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60cc);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0xd5;
          pbVar4[1] = pbVar4[1] ^ 0xd7;
          pbVar4[2] = pbVar4[2] ^ 0x33;
          pbVar4[3] = pbVar4[3] ^ 0xd9;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0x27;
          pbVar4[5] = pbVar4[5] ^ 0x19;
          pbVar4[6] = pbVar4[6] ^ 0xd5;
          pbVar4[7] = pbVar4[7] ^ 0xd5;
          pbVar4[8] = pbVar4[8] ^ 0xd5;
          pbVar4[9] = pbVar4[9] ^ 0xd7;
          pbVar4[10] = pbVar4[10] ^ 0x33;
          pbVar4[0xb] = pbVar4[0xb] ^ 0xd9;
          pbVar4[0xc] = pbVar4[0xc] ^ 0x27;
          pbVar4[0xd] = pbVar4[0xd] ^ 0x19;
          pbVar4[0xe] = pbVar4[0xe] ^ 0xd5;
        }
        iVar5 = FUN_713fd1dc(uVar8);
        *(undefined4 *)(param_1 + 0x5a8) = 0;
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = 0;
        uVar8 = FUN_7136cdfc(&uStack_3c);
        FUN_715eea98(uVar8,param_1 + 0x63c,auStack_30);
        *(undefined4 *)(iVar1 + 0x40) = uStack_3c;
        *(undefined4 *)(iVar1 + 0x44) = uStack_38;
        *(undefined4 *)(iVar1 + 0x48) = uStack_34;
        uVar8 = *(undefined4 *)(param_1 + 0x5a8);
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = FUN_71ba240c(0,uVar8);
        auStack_30[0] = auStack_30[0] ^ 0x80000000;
        uVar8 = FUN_7136cdfc(&uStack_3c);
        FUN_715eea98(uVar8,param_1 + 0x67c,auStack_30);
        *(undefined4 *)(iVar5 + 0x40) = uStack_3c;
        *(undefined4 *)(iVar5 + 0x44) = uStack_38;
      }
      else {
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c607c);
        if (*pcVar3 == '\0') {
          puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c606c);
          *puVar2 = 0x2624bf1a;
          puVar2[1] = 0x1d015eb5;
          puVar2[2] = 0x2e34b332;
          *(undefined1 *)((int)puVar2 + 0xf) = 1;
          *(undefined4 *)((int)puVar2 + 0xb) = 0x7378b42e;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fac0,puVar2,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c607c);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c606c);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0x6d;
          pbVar4[1] = pbVar4[1] ^ 0xd7;
          pbVar4[2] = pbVar4[2] ^ 0x41;
          pbVar4[3] = pbVar4[3] ^ 0x43;
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0xd9;
          pbVar4[5] = pbVar4[5] ^ 1;
          pbVar4[6] = pbVar4[6] ^ 0x73;
          pbVar4[7] = pbVar4[7] ^ 0x7f;
          pbVar4[8] = pbVar4[8] ^ 0x6d;
          pbVar4[9] = pbVar4[9] ^ 0xd7;
          pbVar4[10] = pbVar4[10] ^ 0x41;
          pbVar4[0xb] = pbVar4[0xb] ^ 0x43;
          pbVar4[0xc] = pbVar4[0xc] ^ 0xd9;
          pbVar4[0xd] = pbVar4[0xd] ^ 1;
          pbVar4[0xe] = pbVar4[0xe] ^ 0x73;
        }
        iVar1 = FUN_713fd1dc(uVar8);
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c609c);
        if (*pcVar3 == '\0') {
          puVar2 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c608c);
          *puVar2 = 0x9a9c2bee;
          puVar2[1] = 0xc59d0cf5;
          puVar2[2] = 0x928c27c6;
          *(undefined1 *)((int)puVar2 + 0xf) = 1;
          *(undefined4 *)((int)puVar2 + 0xb) = 0xf12af492;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160faf0,puVar2,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c609c);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c608c);
        if (pbVar4[0xf] != 0) {
          *pbVar4 = *pbVar4 ^ 0x99;
          pbVar4[1] = pbVar4[1] ^ 0x43;
          pbVar4[2] = pbVar4[2] ^ 0xf9;
          pbVar4[3] = ~pbVar4[3];
          pbVar4[0xf] = 0;
          pbVar4[4] = pbVar4[4] ^ 0x99;
          pbVar4[5] = pbVar4[5] ^ 0x53;
          pbVar4[6] = pbVar4[6] ^ 0xf1;
          pbVar4[7] = pbVar4[7] ^ 0xa7;
          pbVar4[8] = pbVar4[8] ^ 0x99;
          pbVar4[9] = pbVar4[9] ^ 0x43;
          pbVar4[10] = pbVar4[10] ^ 0xf9;
          pbVar4[0xb] = ~pbVar4[0xb];
          pbVar4[0xc] = pbVar4[0xc] ^ 0x99;
          pbVar4[0xd] = pbVar4[0xd] ^ 0x53;
          pbVar4[0xe] = pbVar4[0xe] ^ 0xf1;
        }
        iVar5 = FUN_713fd1dc(uVar8);
        uVar8 = *(undefined4 *)(param_1 + 0x5b0);
        *(undefined4 *)(param_1 + 0x5a8) = uVar8;
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = FUN_71ba240c(0,uVar8);
        uVar8 = FUN_7136cdfc(&uStack_3c);
        FUN_715eea98(uVar8,param_1 + 0x63c,auStack_30);
        *(undefined4 *)(iVar1 + 0x40) = uStack_3c;
        *(undefined4 *)(iVar1 + 0x44) = uStack_38;
        *(undefined4 *)(iVar1 + 0x48) = uStack_34;
        uVar8 = *(undefined4 *)(param_1 + 0x5a8);
        FUN_7136cdfc(auStack_30);
        auStack_30[1] = 0;
        auStack_30[2] = 0;
        auStack_30[0] = FUN_71ba240c(0,uVar8);
        auStack_30[0] = auStack_30[0] ^ 0x80000000;
        uVar8 = FUN_7136cdfc(&uStack_3c);
        FUN_715eea98(uVar8,param_1 + 0x67c,auStack_30);
        *(undefined4 *)(iVar5 + 0x40) = uStack_3c;
        *(undefined4 *)(iVar5 + 0x44) = uStack_38;
      }
      *(undefined4 *)(iVar5 + 0x48) = uStack_34;
      *(undefined1 *)(param_1 + 0x5b5) = 1;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715fdc70
// Entry: 0x715fdc70 | Size: 64 bytes
// =========================================================================

void FUN_715fdc70(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  iVar1 = FUN_71ba2cf0(param_5,0);
  if ((iVar1 == 0) && (iVar1 = FUN_71ba2cf0(param_6,0), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x6d8) = param_2;
    *(undefined1 *)(param_1 + 0x6da) = param_4;
    *(undefined1 *)(param_1 + 0x6d9) = param_3;
    *(undefined1 *)(param_1 + 0x6e4) = 1;
    *(undefined4 *)(param_1 + 0x6dc) = param_5;
    *(undefined4 *)(param_1 + 0x6e0) = param_6;
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60fc);
    if (*pcVar2 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60ec);
      *(undefined1 *)(puVar5 + 3) = 1;
      *puVar5 = 0x42d118fd;
      puVar5[1] = 0x2ca0b8bb;
      puVar5[2] = 0x27ca09e5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fb80,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60fc);
      *puVar6 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c60ec);
    if (pbVar3[0xc] != 0) {
      *pbVar3 = *pbVar3 ^ 0x8b;
      pbVar3[1] = pbVar3[1] ^ 0x7d;
      pbVar3[2] = pbVar3[2] ^ 0xb9;
      pbVar3[3] = pbVar3[3] ^ 0x27;
      pbVar3[0xc] = 0;
      pbVar3[4] = pbVar3[4] ^ 0xd7;
      pbVar3[5] = pbVar3[5] ^ 0xdd;
      pbVar3[6] = pbVar3[6] ^ 0xcd;
      pbVar3[7] = pbVar3[7] ^ 0x49;
      pbVar3[8] = pbVar3[8] ^ 0x8b;
      pbVar3[9] = pbVar3[9] ^ 0x7d;
      pbVar3[10] = pbVar3[10] ^ 0xb9;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x27;
    }
    uVar4 = FUN_715ec410(pbVar3,param_7,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x6e4) = 0;
    if (*(int *)(param_1 + 0x6d4) == 0) {
      return;
    }
    FUN_7143d364();
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x6d4) = uVar4;
  return;
}


// =========================================================================
// Function: FUN_715fe020
// Entry: 0x715fe020 | Size: 612 bytes
// =========================================================================

void FUN_715fe020(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *unaff_r8;
  byte *unaff_r10;
  uint uVar9;
  int iVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar6 = (int *)(param_1 + 0x6bc);
  *(int *)(param_1 + 0x6c0) = *piVar6;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = uVar4;
  iVar1 = *(int *)(DAT_70c39074 + *(short *)(*(int *)(param_1 + 0xc) + 0x26) * 4);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_7151764c(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      unaff_r8 = (byte *)*puVar2;
      unaff_r10 = (byte *)puVar2[1];
    }
    if (puVar2 != (undefined4 *)0x0 && unaff_r8 != unaff_r10) {
      do {
        pbVar5 = *(byte **)(unaff_r8 + 8);
        if ((*unaff_r8 & 1) == 0) {
          pbVar5 = unaff_r8 + 1;
        }
        iVar1 = FUN_713fd1dc(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18),pbVar5);
        if (iVar1 != 0) {
          uVar4 = *(undefined4 *)(unaff_r8 + 0x2c);
          imp___aeabi_memcpy(&uStack_68,iVar1 + 0x10,0x40);
          puVar2 = *(undefined4 **)(param_1 + 0x6c0);
          if (puVar2 < *(undefined4 **)(param_1 + 0x6c4)) {
            *puVar2 = unaff_r8;
            puVar2[1] = iVar1;
            puVar2[2] = uStack_68;
            puVar2[3] = uStack_64;
            puVar2[4] = uStack_60;
            puVar2[5] = uStack_5c;
            puVar2[6] = uStack_58;
            puVar2[7] = uStack_54;
            puVar2[8] = uStack_50;
            puVar2[9] = uStack_4c;
            puVar2[10] = uStack_48;
            puVar2[0xb] = uStack_44;
            puVar2[0xc] = uStack_40;
            puVar2[0xd] = uStack_3c;
            puVar2[0xe] = uStack_38;
            puVar2[0xf] = uStack_34;
            puVar2[0x10] = uStack_30;
            puVar2[0x11] = uStack_2c;
            puVar7 = puVar2 + 0x15;
            puVar2[0x12] = 0;
            puVar2[0x13] = uVar4;
            *(undefined1 *)(puVar2 + 0x14) = 0xff;
          }
          else {
            iVar8 = *piVar6;
            iVar10 = (int)puVar2 - iVar8;
            uVar9 = (iVar10 >> 2) * 0x3cf3cf3d + 1;
            if (0x30c30c3 < uVar9) {
              FUN_7161074c(piVar6);
LAB_715fe288:
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            iVar3 = (int)*(undefined4 **)(param_1 + 0x6c4) - iVar8 >> 2;
            if (uVar9 < (uint)(iVar3 * 0x79e79e7a)) {
              uVar9 = iVar3 * 0x79e79e7a;
            }
            if (0x1861860 < (uint)(iVar3 * 0x3cf3cf3d)) {
              uVar9 = 0x30c30c3;
            }
            if (uVar9 == 0) {
              iVar3 = 0;
            }
            else {
              if (0x30c30c3 < uVar9) goto LAB_715fe288;
              iVar3 = thunk_MwhHq(uVar9 * 0x54);
            }
            puVar2 = (undefined4 *)(iVar3 + (iVar10 >> 2) * 4);
            *puVar2 = unaff_r8;
            puVar2[1] = iVar1;
            puVar2[2] = uStack_68;
            puVar2[3] = uStack_64;
            puVar2[4] = uStack_60;
            puVar2[5] = uStack_5c;
            puVar2[6] = uStack_58;
            puVar2[7] = uStack_54;
            puVar2[8] = uStack_50;
            puVar2[9] = uStack_4c;
            puVar2[10] = uStack_48;
            puVar2[0xb] = uStack_44;
            puVar2[0xc] = uStack_40;
            puVar2[0xd] = uStack_3c;
            puVar2[0xe] = uStack_38;
            puVar2[0xf] = uStack_34;
            puVar2[0x10] = uStack_30;
            puVar2[0x11] = uStack_2c;
            *(undefined1 *)(puVar2 + 0x14) = 0xff;
            puVar2[0x12] = 0;
            puVar2[0x13] = uVar4;
            imp___aeabi_memcpy4((int)puVar2 - iVar10,iVar8,iVar10);
            puVar7 = puVar2 + 0x15;
            *(int *)(param_1 + 0x6bc) = (int)puVar2 - iVar10;
            *(undefined4 **)(param_1 + 0x6c0) = puVar7;
            *(uint *)(param_1 + 0x6c4) = uVar9 * 0x54 + iVar3;
            if (iVar8 != 0) {
              thunk_qNQrlu(iVar8);
            }
          }
          *(undefined4 **)(param_1 + 0x6c0) = puVar7;
        }
        unaff_r8 = unaff_r8 + 0x30;
      } while (unaff_r8 != unaff_r10);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715fe3a4
// Entry: 0x715fe3a4 | Size: 392 bytes
// =========================================================================

uint FUN_715fe3a4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = (int)(char)param_2[0x14];
  if (iVar1 < 0) {
    uVar2 = 0;
    switch(*(undefined4 *)(*param_2 + 0xc)) {
    case 0:
      return (*(byte *)(*(int *)(param_1 + 0xc) + 0x42c) & 0x1f) >> 4;
    case 1:
      FUN_7136cdfc(&uStack_2c);
      thunk_FUN_715608f0(param_1,&uStack_2c);
      iVar6 = *param_2;
      iVar1 = FUN_71ba2d70(param_2[0x12],0);
      uVar7 = *(undefined4 *)(iVar6 + 0x14);
      uVar3 = FUN_71ba0b38(uVar7,0xc0a00000);
      uVar4 = FUN_71ba21e8(uStack_28,uStack_28);
      uVar5 = FUN_71ba21e8(uStack_2c,uStack_2c);
      uVar4 = FUN_71ba0b38(uVar5,uVar4);
      uVar5 = FUN_71ba21e8(uStack_24,uStack_24);
      FUN_71ba0b38(uVar5,uVar4);
      uVar4 = imp_sqrtf();
      uVar4 = FUN_71ba13e0(uVar4,0x3bb60bc0);
      if (iVar1 == 0) {
        uVar3 = uVar7;
      }
      iVar1 = FUN_71ba2d50(uVar4,uVar3);
      break;
    case 2:
      return (*(byte *)(*(int *)(param_1 + 0xc) + 0x42c) & 0x3f) >> 5;
    case 3:
      if (*(char *)(*(int *)(param_1 + 0xc) + 0x4c0) != '\0') {
        return 0;
      }
      iVar1 = FUN_71ba2d10(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4a0),0);
      break;
    case 4:
      return *(byte *)(param_1 + 0x1d) ^ 1;
    default:
      goto switchD_715fe3e8_caseD_5;
    case 6:
      iVar1 = FUN_71ba2d70(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4a0),0);
      break;
    case 7:
      if (*(char *)(param_1 + 0x6d0) == '\0') {
        return 0;
      }
      iVar1 = FUN_71ba2d30(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4a0),0);
    }
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 1;
  }
switchD_715fe3e8_caseD_5:
  return uVar2;
}


// =========================================================================
// Function: FUN_715fe708
// Entry: 0x715fe708 | Size: 244 bytes
// =========================================================================

void FUN_715fe708(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = param_2[0x12];
  uVar3 = *(undefined4 *)(*param_2 + 0x24);
  imp___aeabi_memcpy(param_2[1] + 0x10,param_2 + 2,0x40);
  uVar1 = FUN_71ba21e8(iVar4,iVar4);
  uVar2 = FUN_71ba0b38(iVar4,iVar4);
  uVar2 = FUN_71ba240c(0x40400000,uVar2);
  uVar1 = FUN_71ba21e8(uVar1,uVar2);
  uVar1 = FUN_71ba21e8(uVar3,uVar1);
  iVar4 = *param_2;
  if (*(int *)(iVar4 + 0x10) != 0) {
    uStack_24 = FUN_71ba21e8(uVar1,*(undefined4 *)(iVar4 + 0x18));
    uStack_20 = FUN_71ba21e8(uVar1,*(undefined4 *)(iVar4 + 0x1c));
    uStack_1c = FUN_71ba21e8(uVar1,*(undefined4 *)(iVar4 + 0x20));
    FUN_7141d918(param_2[1],&uStack_24,1);
    return;
  }
  FUN_7141dd5c(param_2[1],(undefined4 *)(iVar4 + 0x18),uVar1,1);
  return;
}


// =========================================================================
// Function: FUN_715fe948
// Entry: 0x715fe948 | Size: 536 bytes
// =========================================================================

void FUN_715fe948(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  iVar1 = 0;
  if (DAT_71174d20 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (DAT_71174d20 != 0 && iVar1 != 0) {
    bVar10 = *(int *)(param_1 + 8) != 0;
    if (bVar10) {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    if (bVar10 && iVar1 != 0) {
      if (*(int *)(param_1 + 0x6c8) != iVar1) {
        FUN_715fe020(param_1);
      }
      if (*(int *)(param_1 + 0x6bc) != *(int *)(param_1 + 0x6c0)) {
        iVar1 = FUN_71ba2d70(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x4a0),0);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x6d0) = 1;
        }
        iVar1 = FUN_71886108();
        iVar4 = *(int *)(param_1 + 0x6cc);
        *(int *)(param_1 + 0x6cc) = iVar1;
        uVar2 = FUN_71ba1e0c(iVar1 - iVar4);
        uVar2 = FUN_71ba13e0(uVar2,0x447a0000);
        iVar1 = FUN_71ba2d30(uVar2,0);
        if (iVar1 == 0) {
          iVar1 = FUN_71ba2d70(uVar2,0x3e800000);
          piVar3 = *(int **)(param_1 + 0x6c0);
          piVar7 = *(int **)(param_1 + 0x6bc);
          if (iVar1 != 0) {
            uVar2 = 0x3e800000;
          }
          for (; piVar7 != piVar3; piVar7 = piVar7 + 0x15) {
            iVar1 = FUN_715fe3a4(param_1,piVar7);
            piVar9 = piVar7 + 0x12;
            if (iVar1 == 0) {
              iVar6 = *piVar9;
              piVar7[0x13] = *(int *)(*piVar7 + 0x2c);
              iVar1 = 0;
LAB_715feaf0:
              uVar5 = *(undefined4 *)(*piVar7 + 0x28);
              iVar4 = FUN_71ba2d70(uVar5,0x3c23d70a);
              uVar5 = FUN_71ba13e0(uVar2,uVar5);
              if (iVar4 == 0) {
                uVar5 = 0x3f800000;
              }
              iVar4 = FUN_71ba2d10(iVar6,iVar1);
              if (iVar4 == 0) {
                iVar8 = FUN_71ba2d70(iVar6,iVar1);
                iVar4 = 0;
                if (iVar8 == 0) goto LAB_715fea60;
                iVar6 = FUN_71ba240c(iVar6,uVar5);
                iVar4 = iVar1;
                iVar8 = iVar6;
              }
              else {
                iVar4 = FUN_71ba0b38(iVar6,uVar5);
                iVar6 = iVar1;
                iVar8 = iVar4;
              }
              iVar4 = FUN_71ba2d10(iVar4,iVar6);
              if (iVar4 != 0) {
                iVar1 = iVar8;
              }
              *piVar9 = iVar1;
            }
            else {
              iVar1 = 0x3f800000;
              iVar6 = *piVar9;
              iVar4 = FUN_71ba2cf0(iVar6,0);
              if (iVar4 == 0) goto LAB_715feaf0;
              iVar8 = piVar7[0x13];
              iVar4 = FUN_71ba2d70(iVar8,0);
              if (iVar4 == 0) goto LAB_715feaf0;
              iVar4 = FUN_71ba240c(iVar8,uVar2);
              piVar7[0x13] = iVar4;
            }
LAB_715fea60:
            FUN_715fe708(iVar4,piVar7);
          }
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715fedb4
// Entry: 0x715fedb4 | Size: 28 bytes
// =========================================================================

void FUN_715fedb4(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  
  if (param_2 != 0) {
    unaff_r6 = *(undefined4 **)(param_1 + 0x6bc);
    unaff_r7 = *(undefined4 **)(param_1 + 0x6c0);
  }
  if (param_2 != 0 && unaff_r6 != unaff_r7) {
    do {
      pbVar3 = (byte *)*unaff_r6;
      pbVar1 = *(byte **)(pbVar3 + 8);
      if ((*pbVar3 & 1) == 0) {
        pbVar1 = pbVar3 + 1;
      }
      iVar2 = imp_strcasecmp(pbVar1,param_2);
      if ((iVar2 == 0) && (*(char *)(unaff_r6 + 0x14) = (char)param_3, 0 < param_3)) {
        unaff_r6[0x13] = 0;
      }
      unaff_r6 = unaff_r6 + 0x15;
    } while (unaff_r6 != unaff_r7);
  }
  return;
}


// =========================================================================
// Function: FUN_715fee6c
// Entry: 0x715fee6c | Size: 480 bytes
// =========================================================================

void FUN_715fee6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  bVar5 = *(int *)(param_1 + 0xc) != 0;
  iVar1 = 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if ((bVar5 && iVar1 != 0) && (iVar1 = FUN_713513f4(), iVar1 != 0)) {
    if (param_2 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
    }
    if (param_2 != 0 && iVar1 != 0) {
      iVar1 = 0;
      uStack_24 = 0;
      iStack_28 = 0;
      iStack_2c = 0;
      FUN_7141e1ac(param_2,&LAB_715fb330,&iStack_2c);
      if (iStack_28 == iStack_2c) {
        iVar4 = iStack_2c;
        if (param_3 != 0) {
          iVar4 = iStack_28;
        }
      }
      else {
        uVar3 = iStack_28 - iStack_2c >> 2;
        uVar2 = 1;
        if (1 < uVar3) {
          uVar2 = uVar3;
        }
        uVar3 = 0;
        do {
          iVar4 = *(int *)(iStack_2c + uVar3 * 4);
          uVar3 = uVar3 + 1;
          if (iVar4 != 0) {
            iVar1 = iVar1 + ((*(byte *)(iVar4 + 2) & 7) >> 2);
          }
        } while (uVar2 != uVar3);
        if ((param_3 == 0) || (iVar1 != 0)) {
          iVar4 = iStack_2c;
          if ((param_3 == 0 && iVar1 != 0) && (iVar4 = iStack_28, iStack_28 != iStack_2c)) {
            uVar3 = 0;
            do {
              iVar1 = *(int *)(iStack_2c + uVar3 * 4);
              uVar3 = uVar3 + 1;
              if (iVar1 != 0) {
                *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) & 0xfa;
              }
              iVar4 = iStack_2c;
            } while (uVar3 < (uint)(iStack_28 - iStack_2c >> 2));
          }
        }
        else {
          iVar4 = iStack_28;
          if (iStack_28 != iStack_2c) {
            uVar3 = 0;
            do {
              iVar1 = *(int *)(iStack_2c + uVar3 * 4);
              if ((iVar1 != 0) && (uVar2 = FUN_714901f0(iVar1), (uVar2 & 2) == 0)) {
                *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 4;
              }
              uVar3 = uVar3 + 1;
              iVar4 = iStack_2c;
            } while (uVar3 < (uint)(iStack_28 - iStack_2c >> 2));
          }
        }
      }
      for (iVar1 = *(int *)(param_2 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
        FUN_715fee6c(param_1,iVar1,param_3);
        iVar4 = iStack_2c;
      }
      if (iVar4 != 0) {
        iStack_28 = iVar4;
        thunk_qNQrlu();
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715ff120
// Entry: 0x715ff120 | Size: 5660 bytes
// =========================================================================

void FUN_715ff120(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  switch(param_3) {
  case 0:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c611c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c610c);
      *puVar5 = 0xc9be58a1;
      puVar5[1] = 0x6f250d80;
      *(undefined1 *)(puVar5 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fbac,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c611c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c610c);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0xc3;
      pbVar4[1] = pbVar4[1] ^ 0x2d;
      pbVar4[2] = pbVar4[2] ^ 0xd3;
      pbVar4[3] = pbVar4[3] ^ 0xab;
      pbVar4[4] = pbVar4[4] ^ 0xe5;
      pbVar4[5] = pbVar4[5] ^ 0x7f;
      pbVar4[6] = pbVar4[6] ^ 99;
      bVar1 = pbVar4[7] ^ 0x6f;
LAB_715ffb2c:
      pbVar4[7] = bVar1;
    }
    break;
  case 1:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c613c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c612c);
      *puVar5 = 0x15427a59;
      puVar5[1] = 0x54dbd1e;
      *(undefined1 *)(puVar5 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fbd4,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c613c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c612c);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0x3b;
      pbVar4[1] = pbVar4[1] ^ 0xf;
      pbVar4[2] = pbVar4[2] ^ 0x2f;
      pbVar4[3] = pbVar4[3] ^ 0x77;
      pbVar4[4] = pbVar4[4] ^ 0x7b;
      pbVar4[5] = pbVar4[5] ^ 0xcf;
      pbVar4[6] = pbVar4[6] ^ 0x1f;
      bVar1 = pbVar4[7] ^ 5;
      goto LAB_715ffb2c;
    }
    break;
  case 2:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c615c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c614c);
      *puVar5 = 0xa5d5e0f7;
      puVar5[1] = 0xe95123a6;
      *(undefined1 *)(puVar5 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fbfc,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c615c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c614c);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0x91;
      pbVar4[1] = pbVar4[1] ^ 0x85;
      pbVar4[2] = pbVar4[2] ^ 0xbb;
      pbVar4[3] = pbVar4[3] ^ 0xc1;
      pbVar4[4] = pbVar4[4] ^ 0xc3;
      pbVar4[5] = pbVar4[5] ^ 0x51;
      pbVar4[6] = pbVar4[6] ^ 0x17;
      bVar1 = pbVar4[7] ^ 0xe9;
      goto LAB_715ffb2c;
    }
    break;
  case 3:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c617c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c616c);
      *puVar5 = 0xa7c354f5;
      puVar5[1] = 0x85797936;
      *(undefined1 *)(puVar5 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fc24,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c617c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c616c);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0x93;
      pbVar4[1] = pbVar4[1] ^ 0x31;
      pbVar4[2] = pbVar4[2] ^ 0xad;
      pbVar4[3] = pbVar4[3] ^ 0xc3;
      pbVar4[4] = pbVar4[4] ^ 0x53;
      pbVar4[5] = pbVar4[5] ^ 0xb;
      pbVar4[6] = pbVar4[6] ^ 0x2b;
      bVar1 = pbVar4[7] ^ 0x85;
      goto LAB_715ffb2c;
    }
    break;
  case 4:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c619c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c618c);
      *puVar5 = 0x2abed1f6;
      puVar5[1] = 0xcfc5022f;
      *(undefined1 *)(puVar5 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fc4c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c619c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c618c);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0x85;
      pbVar4[1] = pbVar4[1] ^ 0xa1;
      pbVar4[2] = pbVar4[2] ^ 0xd1;
      pbVar4[3] = pbVar4[3] ^ 0x43;
      pbVar4[4] = pbVar4[4] ^ 0x43;
      pbVar4[5] = pbVar4[5] ^ 0x67;
      pbVar4[6] = pbVar4[6] ^ 0xb7;
      bVar1 = pbVar4[7] ^ 0xcf;
      goto LAB_715ffb2c;
    }
    break;
  case 5:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61bc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61ac);
      *puVar5 = 0x2f9efa6;
      puVar5[1] = 0x7b79a86e;
      *(undefined1 *)(puVar5 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fc74,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61bc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61ac);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0xc3;
      pbVar4[1] = pbVar4[1] ^ 0x97;
      pbVar4[2] = pbVar4[2] ^ 0x91;
      pbVar4[3] = pbVar4[3] ^ 99;
      pbVar4[4] = pbVar4[4] ^ 0x1b;
      pbVar4[5] = pbVar4[5] ^ 0xdb;
      pbVar4[6] = pbVar4[6] ^ 0xd;
      bVar1 = pbVar4[7] ^ 0x7b;
      goto LAB_715ffb2c;
    }
    break;
  case 6:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61dc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61cc);
      *puVar5 = 0x2d6240bd;
      *(undefined2 *)(puVar5 + 1) = 0x12d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fc9c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61dc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61cc);
    if (pbVar4[5] != 0) {
      pbVar4[5] = 0;
      *pbVar4 = *pbVar4 ^ 0xcf;
      pbVar4[1] = pbVar4[1] ^ 0x2f;
      pbVar4[2] = pbVar4[2] ^ 0xd;
      pbVar4[3] = pbVar4[3] ^ 0x4b;
      pbVar4[4] = pbVar4[4] ^ 0x2d;
    }
    break;
  case 7:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61fc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61ec);
      *puVar5 = 0x23f4bcdf;
      puVar5[1] = 0x87b216dd;
      *(undefined1 *)((int)puVar5 + 0xb) = 1;
      *(undefined4 *)((int)puVar5 + 7) = 0x9daedf87;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fcc4,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61fc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c61ec);
    if (pbVar4[0xb] != 0) {
      *pbVar4 = *pbVar4 ^ 0xab;
      pbVar4[1] = pbVar4[1] ^ 0xdd;
      pbVar4[2] = pbVar4[2] ^ 0x9d;
      pbVar4[3] = pbVar4[3] ^ 0x4f;
      pbVar4[0xb] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xb1;
      pbVar4[5] = pbVar4[5] ^ 0x7f;
      pbVar4[6] = pbVar4[6] ^ 0xd5;
      pbVar4[7] = pbVar4[7] ^ 0xef;
      pbVar4[8] = pbVar4[8] ^ 0xab;
      pbVar4[9] = pbVar4[9] ^ 0xdd;
      pbVar4[10] = pbVar4[10] ^ 0x9d;
    }
    break;
  case 8:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c621c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c620c);
      *puVar5 = 0x1926aacd;
      puVar5[1] = 0x6d0cb83f;
      *(undefined1 *)((int)puVar5 + 0xb) = 1;
      *(undefined4 *)((int)puVar5 + 7) = 0x47bcd16d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fcf0,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c621c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c620c);
    if (pbVar4[0xb] != 0) {
      *pbVar4 = *pbVar4 ^ 0xa5;
      pbVar4[1] = pbVar4[1] ^ 0xcf;
      pbVar4[2] = pbVar4[2] ^ 0x47;
      pbVar4[3] = pbVar4[3] ^ 0x7d;
      pbVar4[0xb] = 0;
      pbVar4[4] = pbVar4[4] ^ 0x53;
      pbVar4[5] = pbVar4[5] ^ 0xd1;
      pbVar4[6] = pbVar4[6] ^ 0x6b;
      pbVar4[7] = pbVar4[7] ^ 5;
      pbVar4[8] = pbVar4[8] ^ 0xa5;
      pbVar4[9] = pbVar4[9] ^ 0xcf;
      pbVar4[10] = pbVar4[10] ^ 0x47;
    }
    break;
  case 9:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c623c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c622c);
      *(undefined2 *)(puVar5 + 2) = 0x1b5;
      *puVar5 = 0xc39de0d1;
      puVar5[1] = 0x337ae252;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fd1c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c623c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c622c);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0xb5;
      pbVar4[1] = pbVar4[1] ^ 0x89;
      pbVar4[2] = pbVar4[2] ^ 0xfb;
      pbVar4[3] = pbVar4[3] ^ 0xa5;
      pbVar4[4] = pbVar4[4] ^ 0x27;
      pbVar4[5] = pbVar4[5] ^ 0x91;
      pbVar4[6] = pbVar4[6] ^ 0x1f;
      pbVar4[7] = pbVar4[7] ^ 0x41;
      pbVar4[8] = pbVar4[8] ^ 0xb5;
    }
    break;
  case 10:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c625c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c624c);
      *(undefined2 *)(puVar5 + 2) = 0x16d;
      *puVar5 = 0x8237fd1e;
      puVar5[1] = 0xe9e0172f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fd48,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c625c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c624c);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0x6d;
      pbVar4[1] = pbVar4[1] ^ 0x8d;
      pbVar4[2] = pbVar4[2] ^ 0x5b;
      pbVar4[3] = pbVar4[3] ^ 0xeb;
      pbVar4[4] = pbVar4[4] ^ 0x5b;
      pbVar4[5] = pbVar4[5] ^ 99;
      pbVar4[6] = pbVar4[6] ^ 0x85;
      pbVar4[7] = pbVar4[7] ^ 0x9b;
      pbVar4[8] = pbVar4[8] ^ 0x6d;
    }
    break;
  case 0xb:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62bc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62ac);
      *puVar5 = 0x55519da2;
      *(undefined1 *)(puVar5 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fdc4,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62bc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62ac);
    if (pbVar4[4] != 0) {
      pbVar4[4] = 0;
      *pbVar4 = *pbVar4 ^ 199;
      pbVar4[1] = pbVar4[1] ^ 0xe5;
      pbVar4[2] = pbVar4[2] ^ 0x25;
      pbVar4[3] = pbVar4[3] ^ 0x55;
    }
    break;
  case 0xc:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c627c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c626c);
      *puVar5 = 0x8dc7c249;
      *(undefined1 *)((int)puVar5 + 7) = 1;
      *(undefined4 *)((int)puVar5 + 3) = 0x87f9268d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fd74,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c627c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c626c);
    if (pbVar4[7] != 0) {
      pbVar4[7] = 0;
      *pbVar4 = *pbVar4 ^ 0x2b;
      pbVar4[1] = pbVar4[1] ^ 0xad;
      pbVar4[2] = pbVar4[2] ^ 0xa9;
      pbVar4[3] = pbVar4[3] ^ 0xe3;
      pbVar4[4] = pbVar4[4] ^ 0x43;
      pbVar4[5] = pbVar4[5] ^ 0x8d;
      pbVar4[6] = pbVar4[6] ^ 0x87;
    }
    break;
  case 0xd:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c629c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c628c);
      *puVar5 = 0xd7f0922b;
      *(undefined2 *)(puVar5 + 1) = 0x139;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fd9c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c629c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c628c);
    if (pbVar4[5] != 0) {
      pbVar4[5] = 0;
      *pbVar4 = *pbVar4 ^ 0x49;
      pbVar4[1] = pbVar4[1] ^ 0xfd;
      pbVar4[2] = pbVar4[2] ^ 0x9f;
      pbVar4[3] = pbVar4[3] ^ 0xa3;
      pbVar4[4] = pbVar4[4] ^ 0x39;
    }
    break;
  case 0xe:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62dc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62cc);
      *(undefined2 *)(puVar5 + 2) = 0x1c5;
      *puVar5 = 0xf94e56a7;
      puVar5[1] = 0x26999bb4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fde8,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62dc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62cc);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0xc5;
      pbVar4[1] = pbVar4[1] ^ 0x23;
      pbVar4[2] = pbVar4[2] ^ 0x23;
      pbVar4[3] = pbVar4[3] ^ 0x9b;
      pbVar4[4] = pbVar4[4] ^ 0xd1;
      pbVar4[5] = pbVar4[5] ^ 0xe9;
      pbVar4[6] = pbVar4[6] ^ 0xdf;
      pbVar4[7] = pbVar4[7] ^ 0x75;
      pbVar4[8] = pbVar4[8] ^ 0xc5;
    }
    break;
  case 0xf:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62fc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62ec);
      *(undefined2 *)(puVar5 + 2) = 0x11d;
      *puVar5 = 0x7d0a267f;
      puVar5[1] = 0x9c677554;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fe14,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62fc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c62ec);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0x1d;
      pbVar4[1] = pbVar4[1] ^ 0x53;
      pbVar4[2] = pbVar4[2] ^ 0x67;
      pbVar4[3] = pbVar4[3] ^ 0x1f;
      pbVar4[4] = pbVar4[4] ^ 0x31;
      pbVar4[5] = pbVar4[5] ^ 7;
      pbVar4[6] = pbVar4[6] ^ 0x35;
      pbVar4[7] = pbVar4[7] ^ 0xcf;
      pbVar4[8] = pbVar4[8] ^ 0x1d;
    }
    break;
  case 0x10:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c631c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c630c);
      *(undefined2 *)(puVar5 + 2) = 0x1f5;
      *puVar5 = 0x8f6e2897;
      puVar5[1] = 0xb441fda2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fe40,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c631c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c630c);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0xf5;
      pbVar4[1] = pbVar4[1] ^ 0x5d;
      pbVar4[2] = pbVar4[2] ^ 3;
      pbVar4[3] = pbVar4[3] ^ 0xed;
      pbVar4[4] = pbVar4[4] ^ 199;
      pbVar4[5] = pbVar4[5] ^ 0x8f;
      pbVar4[6] = pbVar4[6] ^ 7;
      pbVar4[7] = pbVar4[7] ^ 0xf3;
      pbVar4[8] = pbVar4[8] ^ 0xf5;
    }
    break;
  case 0x11:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c633c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c632c);
      *(undefined2 *)(puVar5 + 2) = 0x16f;
      *puVar5 = 0x79a9ee09;
      puVar5[1] = 0x49f2a3da;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fe6c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c633c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c632c);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0x6f;
      pbVar4[1] = pbVar4[1] ^ 0x8b;
      pbVar4[2] = pbVar4[2] ^ 199;
      pbVar4[3] = pbVar4[3] ^ 0x1d;
      pbVar4[4] = pbVar4[4] ^ 0xbf;
      pbVar4[5] = pbVar4[5] ^ 0xd1;
      pbVar4[6] = pbVar4[6] ^ 0x81;
      pbVar4[7] = pbVar4[7] ^ 0xf;
      pbVar4[8] = pbVar4[8] ^ 0x6f;
    }
    break;
  case 0x12:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c635c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c634c);
      *(undefined2 *)(puVar5 + 2) = 0x135;
      *puVar5 = 0x155dbe53;
      puVar5[1] = 0x6d0eeb0a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fe98,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c635c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c634c);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0x35;
      pbVar4[1] = pbVar4[1] ^ 0xdb;
      pbVar4[2] = pbVar4[2] ^ 0x33;
      pbVar4[3] = pbVar4[3] ^ 0x71;
      pbVar4[4] = pbVar4[4] ^ 0x6f;
      pbVar4[5] = pbVar4[5] ^ 0x99;
      pbVar4[6] = pbVar4[6] ^ 0x7d;
      pbVar4[7] = pbVar4[7] ^ 0x3f;
      pbVar4[8] = pbVar4[8] ^ 0x35;
    }
    break;
  case 0x13:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c637c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c636c);
      *puVar5 = 0x8599f879;
      puVar5[1] = 0xbd7089e0;
      *(undefined1 *)((int)puVar5 + 10) = 1;
      *(undefined2 *)(puVar5 + 2) = 0x9d53;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fec4,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c637c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c636c);
    if (pbVar4[10] != 0) {
      *pbVar4 = *pbVar4 ^ 0x1f;
      pbVar4[1] = pbVar4[1] ^ 0x9d;
      pbVar4[2] = pbVar4[2] ^ 0xf7;
      pbVar4[3] = pbVar4[3] ^ 0xe1;
      pbVar4[10] = 0;
      pbVar4[4] = pbVar4[4] ^ 0x85;
      pbVar4[5] = pbVar4[5] ^ 0xfb;
      pbVar4[6] = pbVar4[6] ^ 3;
      pbVar4[7] = pbVar4[7] ^ 0xef;
      pbVar4[8] = pbVar4[8] ^ 0x1f;
      pbVar4[9] = pbVar4[9] ^ 0x9d;
    }
    break;
  case 0x14:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c639c);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c638c);
      *puVar5 = 0x7313186b;
      puVar5[1] = 0xdf121982;
      *(undefined1 *)((int)puVar5 + 10) = 1;
      *(undefined2 *)(puVar5 + 2) = 0x7d5f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160fef0,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c639c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c638c);
    if (pbVar4[10] != 0) {
      *pbVar4 = *pbVar4 ^ 0xd;
      pbVar4[1] = pbVar4[1] ^ 0x7d;
      pbVar4[2] = pbVar4[2] ^ 0x7d;
      pbVar4[3] = pbVar4[3] ^ 0x17;
      pbVar4[10] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xe7;
      pbVar4[5] = pbVar4[5] ^ 0x6b;
      pbVar4[6] = pbVar4[6] ^ 0x61;
      pbVar4[7] = pbVar4[7] ^ 0x8d;
      pbVar4[8] = pbVar4[8] ^ 0xd;
      pbVar4[9] = pbVar4[9] ^ 0x7d;
    }
    break;
  case 0x15:
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63bc);
    if (*pcVar3 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63ac);
      *(undefined2 *)(puVar5 + 2) = 0x171;
      *puVar5 = 0xa429e415;
      puVar5[1] = 0x8526591a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7160ff1c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63bc);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c63ac);
    if (pbVar4[9] != 0) {
      pbVar4[9] = 0;
      *pbVar4 = *pbVar4 ^ 0x71;
      pbVar4[1] = pbVar4[1] ^ 0x97;
      pbVar4[2] = pbVar4[2] ^ 0x59;
      pbVar4[3] = pbVar4[3] ^ 0xcb;
      pbVar4[4] = pbVar4[4] ^ 0x73;
      pbVar4[5] = pbVar4[5] ^ 0x35;
      pbVar4[6] = pbVar4[6] ^ 0x43;
      pbVar4[7] = pbVar4[7] ^ 0xf7;
      pbVar4[8] = pbVar4[8] ^ 0x71;
    }
    break;
  default:
    puVar6 = (undefined1 *)((int)param_1 + 1);
    *(undefined1 *)param_1 = 0;
    goto LAB_715ffb90;
  }
  uVar2 = imp_strlen(pbVar4);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar2 < 0xb) {
    puVar6 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar2 << 1);
    if (uVar2 != 0) goto LAB_715ffb7c;
  }
  else {
    puVar6 = (undefined1 *)thunk_MwhHq((uVar2 | 7) + 1);
    param_1[2] = (int)puVar6;
    *param_1 = (uVar2 | 7) + 2;
    param_1[1] = uVar2;
LAB_715ffb7c:
    imp___aeabi_memmove(puVar6,pbVar4,uVar2);
  }
  puVar6 = puVar6 + uVar2;
LAB_715ffb90:
  *puVar6 = 0;
  return;
}


// =========================================================================
// Function: FUN_716026f4
// Entry: 0x716026f4 | Size: 24 bytes
// =========================================================================

void FUN_716026f4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0xc) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if ((bVar3 && iVar1 != 0) && (iVar1 = FUN_713513f4(), iVar1 != 0)) {
    iVar1 = thunk_FUN_715f4594(param_1);
    if (iVar1 != 0) {
      return;
    }
    bVar3 = param_3 == 0 && param_2 == 0;
    if (param_3 == 0 && param_2 == 0) {
      bVar3 = param_4 == 0;
    }
    if ((!bVar3) ||
       ((((iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc)), iVar1 == 0 ||
          (iVar1 = thunk_FUN_715f4594(param_1), iVar1 != 0)) ||
         (*(int *)(*(int *)(param_1 + 0xc) + 0x5c8) == 0)) &&
        ((iVar1 = FUN_71602ae8(param_1), iVar1 == 0 && (iVar1 = FUN_71602b74(param_1), iVar1 == 0)))
        ))) {
      iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 0)) {
        *(byte *)(*(int *)(param_1 + 0xc) + 0x5bd) = (byte)param_3 & 7;
        *(byte *)(*(int *)(param_1 + 0xc) + 0x5be) = (byte)((uint)(param_3 << 0x15) >> 0x1d);
        *(byte *)(*(int *)(param_1 + 0xc) + 0x5bf) = (byte)((uint)(param_3 << 0xd) >> 0x1d);
        *(byte *)(*(int *)(param_1 + 0xc) + 0x5c0) = (byte)((uint)(param_3 << 5) >> 0x1d);
      }
      iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 0)) {
        *(int *)(*(int *)(param_1 + 0xc) + 0x5c8) = param_2;
      }
      iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 0)) {
        *(int *)(*(int *)(param_1 + 0xc) + 0x5c4) = param_4;
      }
                    /* WARNING: Could not recover jumptable at 0x71602808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xc) + 0xd0))();
      return;
    }
    (**(code **)(**(int **)(param_1 + 0xc) + 0xcc))();
    FUN_715f45c0(param_1,0xb,0xfc00);
    uVar2 = 0;
    iVar1 = 0x6ec;
    do {
      if (uVar2 != 0xb) {
        FUN_715f45c0(param_1,uVar2 & 0xff,*(undefined2 *)(param_1 + iVar1));
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar2 != 0x16);
  }
  return;
}


// =========================================================================
// Function: FUN_71602a5c
// Entry: 0x71602a5c | Size: 60 bytes
// =========================================================================

undefined4 FUN_71602a5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 0)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5c8);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71602ae8
// Entry: 0x71602ae8 | Size: 60 bytes
// =========================================================================

undefined4 FUN_71602ae8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 0)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5bd);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71602b74
// Entry: 0x71602b74 | Size: 60 bytes
// =========================================================================

uint FUN_71602b74(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 0)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 0x5c4);
  }
  return uVar2 & 0xff;
}


// =========================================================================
// Function: FUN_71602c00
// Entry: 0x71602c00 | Size: 144 bytes
// =========================================================================

void FUN_71602c00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_715f4594(param_1);
    if (iVar1 == 0) {
      *(byte *)(*(int *)(param_1 + 0xc) + 0x5bc) = (byte)param_2 & 1;
      *(byte *)(*(int *)(param_1 + 0xc) + 0x5bb) = (byte)((uint)(param_2 << 0x1e) >> 0x1f);
      *(byte *)(*(int *)(param_1 + 0xc) + 0x5ba) = (byte)((uint)(param_2 << 0x1d) >> 0x1f);
      *(byte *)(*(int *)(param_1 + 0xc) + 0x5b9) = (byte)((uint)(param_2 << 0x1c) >> 0x1f);
      return;
    }
    iVar1 = thunk_FUN_715f4594(param_1);
    if (iVar1 != 9) {
      return;
    }
    *(byte *)(*(int *)(param_1 + 0xc) + 0x671) = (byte)param_2 & 1;
    *(byte *)(*(int *)(param_1 + 0xc) + 0x670) = (byte)((uint)(param_2 << 0x1e) >> 0x1f);
  }
  return;
}


// =========================================================================
// Function: FUN_71602cfc
// Entry: 0x71602cfc | Size: 124 bytes
// =========================================================================

byte FUN_71602cfc(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  bVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_715f4594(param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      return *(byte *)(iVar1 + 0x5bc) | *(char *)(iVar1 + 0x5bb) << 1 |
             *(char *)(iVar1 + 0x5ba) << 2 | *(char *)(iVar1 + 0x5b9) << 3;
    }
    iVar1 = thunk_FUN_715f4594(param_1);
    if (iVar1 == 9) {
      bVar2 = *(byte *)(*(int *)(param_1 + 0xc) + 0x671) |
              *(char *)(*(int *)(param_1 + 0xc) + 0x670) << 1;
    }
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_71602de4
// Entry: 0x71602de4 | Size: 68 bytes
// =========================================================================

bool FUN_71602de4(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  bVar3 = false;
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x464);
    bVar3 = iVar2 != 0;
    if (bVar3) {
      uVar1 = (uint)*(byte *)(iVar2 + 0x485);
    }
    if (!bVar3 || (uVar1 & 1) == 0) {
      bVar3 = false;
    }
  }
  return bVar3;
}


// =========================================================================
// Function: FUN_71602e5c
// Entry: 0x71602e5c | Size: 52 bytes
// =========================================================================

void FUN_71602e5c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    *(uint *)(*(int *)(param_1 + 0xc) + 0x42c) =
         *(uint *)(*(int *)(param_1 + 0xc) + 0x42c) & 0xffffffef | (param_2 & 1) << 4;
  }
  return;
}


// =========================================================================
// Function: FUN_71602ec4
// Entry: 0x71602ec4 | Size: 16 bytes
// =========================================================================

void FUN_71602ec4(int param_1,int param_2)

{
  *(bool *)(param_1 + 0x569) = param_2 != 0;
  return;
}


// =========================================================================
// Function: FUN_71602eec
// Entry: 0x71602eec | Size: 8 bytes
// =========================================================================

undefined1 FUN_71602eec(int param_1)

{
  return *(undefined1 *)(param_1 + 0x569);
}


// =========================================================================
// Function: FUN_71602f0c
// Entry: 0x71602f0c | Size: 104 bytes
// =========================================================================

void FUN_71602f0c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = FUN_71ba2cf0(param_2,0);
    if (iVar1 == 0) {
      uVar2 = FUN_71ba21e8(param_2,0x3bb60bc0);
      *(undefined4 *)(param_1 + 0x774) = uVar2;
      return;
    }
    iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x774) = 0;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71602ffc
// Entry: 0x71602ffc | Size: 8 bytes
// =========================================================================

undefined4 FUN_71602ffc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x774);
}


// =========================================================================
// Function: FUN_7160301c
// Entry: 0x7160301c | Size: 56 bytes
// =========================================================================

void FUN_7160301c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    *(char *)(param_1 + 0x770) = (char)param_2;
    *(uint *)(*(int *)(param_1 + 0xc) + 0x42c) =
         *(uint *)(*(int *)(param_1 + 0xc) + 0x42c) & 0x7fffffff | param_2 << 0x1f;
  }
  return;
}


// =========================================================================
// Function: FUN_71603088
// Entry: 0x71603088 | Size: 108 bytes
// =========================================================================

void FUN_71603088(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    puVar2 = (ushort *)(*(int *)(param_1 + 0xc) + 0x4b2);
    if (param_2 == 0) {
      *puVar2 = *puVar2 & 0xffe7 | 8;
      iVar1 = *(int *)(param_1 + 0xc);
      uVar3 = *(uint *)(iVar1 + 0x42c) & 0xffffffbf;
    }
    else {
      *puVar2 = *puVar2 & 0xffe7 | 0x10;
      iVar1 = *(int *)(param_1 + 0xc);
      uVar3 = *(uint *)(iVar1 + 0x42c) | 0x40;
    }
    *(uint *)(iVar1 + 0x42c) = uVar3;
  }
  return;
}


// =========================================================================
// Function: FUN_71603128
// Entry: 0x71603128 | Size: 8 bytes
// =========================================================================

void FUN_71603128(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x56c) = param_2;
  return;
}


// =========================================================================
// Function: FUN_71603148
// Entry: 0x71603148 | Size: 8 bytes
// =========================================================================

undefined4 FUN_71603148(int param_1)

{
  return *(undefined4 *)(param_1 + 0x56c);
}


// =========================================================================
// Function: FUN_71603168
// Entry: 0x71603168 | Size: 84 bytes
// =========================================================================

undefined4 FUN_71603168(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_715f4594(param_1);
    if (iVar1 != 9) {
      iVar1 = thunk_FUN_715f4594(param_1);
      if (iVar1 == 10) {
        uVar2 = *(undefined4 *)(param_1 + 0x718);
      }
      return uVar2;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x718);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71603228
// Entry: 0x71603228 | Size: 108 bytes
// =========================================================================

void FUN_71603228(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if ((iVar1 != 0) &&
     ((iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 9 ||
      (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 10)))) {
    iVar1 = FUN_71886108();
    *(int *)(param_1 + 0x724) = iVar1 - *(int *)(param_1 + 0x720);
    uVar2 = FUN_71886108();
    uVar3 = *(undefined4 *)(param_1 + 0x718);
    *(undefined4 *)(param_1 + 0x720) = uVar2;
    *(undefined4 *)(param_1 + 0x718) = param_2;
    *(undefined4 *)(param_1 + 0x71c) = uVar3;
  }
  return;
}


// =========================================================================
// Function: FUN_71603338
// Entry: 0x71603338 | Size: 208 bytes
// =========================================================================

void FUN_71603338(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_713513f4(*(undefined4 *)(param_1 + 8));
  if ((iVar1 != 0) &&
     (((iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 9 ||
       (iVar1 = thunk_FUN_715f4594(param_1), iVar1 == 10)) && (*(int *)(param_1 + 0x724) != 0)))) {
    uVar2 = FUN_71ba1e0c();
    uVar2 = FUN_71ba13e0(0x42c80000,uVar2);
    iVar1 = FUN_71886108();
    uVar3 = FUN_71ba1e0c(iVar1 - *(int *)(param_1 + 0x720));
    uVar3 = FUN_71ba13e0(uVar3,0x42c80000);
    uVar2 = FUN_71ba21e8(uVar2,uVar3);
    iVar1 = FUN_71ba2d70(uVar2,0x3f800000);
    uVar3 = *(undefined4 *)(param_1 + 0x71c);
    if (iVar1 != 0) {
      uVar2 = 0x3f800000;
    }
    uVar4 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x718),uVar3);
    uVar2 = FUN_71ba21e8(uVar4,uVar2);
    uVar2 = FUN_71ba0b38(uVar3,uVar2);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x65c) = uVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7160358c
// Entry: 0x7160358c | Size: 96 bytes
// =========================================================================

bool FUN_7160358c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  bVar1 = false;
  if (iVar2 != 0) {
    uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x26);
    uVar4 = uVar3 - 0x219;
    bVar1 = true;
    bVar5 = 1 < uVar4;
    if (bVar5) {
      uVar4 = uVar3 - 0x239;
    }
    if (bVar5 && 1 < uVar4) {
      return uVar3 == 0x1c1;
    }
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_71603620
// Entry: 0x71603620 | Size: 112 bytes
// =========================================================================

undefined4 FUN_71603620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x26);
    uVar2 = 1;
    if ((uVar3 - 0x248 < 0x1c) && ((1 << (uVar3 - 0x248 & 0xff) & 0xdc00081U) != 0)) {
      return 1;
    }
    uVar4 = 0x1b3;
    if (uVar3 != 0x1b3) {
      uVar4 = 0x1c2;
    }
    if (uVar3 != 0x1b3 && uVar3 != uVar4) {
      return 0;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_716036c4
// Entry: 0x716036c4 | Size: 188 bytes
// =========================================================================

int FUN_716036c4(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) && (DAT_711f6d58 != 0)) {
    bVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x4d0) != 0;
    if (bVar3) {
      param_1 = *(int *)(DAT_711f6d58 + 4);
    }
    if (((bVar3 && param_1 != 0) && (uVar2 = FUN_717b92b8(param_1), uVar2 != 0xffff)) &&
       (uVar2 < 0x7d1)) {
      bVar3 = *(char *)(param_1 + uVar2 + 0x3e88) != '\0';
      if (bVar3) {
        param_1 = *(int *)(param_1 + uVar2 * 4);
      }
      if ((bVar3 && param_1 != 0) && (uVar2 = thunk_FUN_715f4594(param_1), uVar2 < 5)) {
        if ((1 << (uVar2 & 0xff) & 0x19U) == 0) {
          param_1 = 0;
        }
        return param_1;
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7160380c
// Entry: 0x7160380c | Size: 332 bytes
// =========================================================================

void FUN_7160380c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uStack_24;
  uint uStack_20;
  
  iVar2 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if (iVar2 != 0) {
    bVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x14) != 0;
    cVar1 = '\0';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x6e5);
    }
    if ((bVar6 && cVar1 != '\0') && (uVar3 = FUN_71886108(), DAT_711acef0 <= uVar3)) {
      FUN_7136cdfc(&uStack_24);
      thunk_FUN_715608f0(param_1,&uStack_24);
      iVar2 = FUN_71ba2d10(uStack_24 & 0x7fffffff,0x3d4ccccd);
      if ((iVar2 == 0) || (iVar2 = FUN_71ba2d10(uStack_20 & 0x7fffffff,0x3d4ccccd), iVar2 == 0)) {
        puVar4 = (undefined4 *)(param_1 + 0x6e8);
        uVar5 = *puVar4;
        iVar2 = FUN_71ba2d70(uVar5,0);
        if (iVar2 != 0) {
          uVar5 = FUN_71ba0b38(uVar5,0xba83126f);
          *puVar4 = uVar5;
          iVar2 = FUN_71ba2d30(uVar5,0);
          if (iVar2 != 0) {
            uVar3 = uVar3 + 5000;
            *puVar4 = 0;
          }
        }
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x6e8);
        iVar2 = FUN_71ba2d10(uVar5,0x3f800000);
        if (iVar2 != 0) {
          uVar5 = FUN_71ba0b38(uVar5,0x3a83126f);
          iVar2 = FUN_71ba2d70(uVar5,0x3f800000);
          uVar3 = uVar3 + 100;
          if (iVar2 != 0) {
            uVar5 = 0x3f800000;
          }
          *(undefined4 *)(param_1 + 0x6e8) = uVar5;
        }
      }
      DAT_711acef0 = uVar3;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71603b00
// Entry: 0x71603b00 | Size: 3876 bytes
// =========================================================================

void FUN_71603b00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool bVar24;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_48 [24];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x14) == 0) {
    return;
  }
  bVar24 = *(char *)(param_1 + 0x968) != '\0';
  cVar8 = '\0';
  if (bVar24) {
    cVar8 = *(char *)(param_1 + 0x969);
  }
  if (!bVar24 || cVar8 == '\0') {
    return;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711acef8 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acef8), iVar1 != 0)) {
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64bc);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64ac);
      *puVar6 = 0x2461ac1e;
      *(undefined1 *)((int)puVar6 + 6) = 1;
      *(undefined2 *)(puVar6 + 1) = 0x777b;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161008c,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64bc);
      *puVar7 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64ac);
    if (pbVar4[6] != 0) {
      pbVar4[6] = 0;
      *pbVar4 = *pbVar4 ^ 0x6d;
      pbVar4[1] = pbVar4[1] ^ 0xc5;
      pbVar4[2] = pbVar4[2] ^ 0x13;
      pbVar4[3] = pbVar4[3] ^ 0x41;
      pbVar4[4] = pbVar4[4] ^ 0x15;
      pbVar4[5] = pbVar4[5] ^ 0x77;
    }
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64dc);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64cc);
      *(undefined1 *)(puVar6 + 4) = 1;
      *puVar6 = 0x274cf400;
      puVar6[1] = 0xbf1e1679;
      puVar6[2] = 0x1e74ab04;
      puVar6[3] = 0xd70b117a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716100b4,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64dc);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64cc);
    if (pbVar5[0x10] != 0) {
      *pbVar5 = *pbVar5 ^ 0x6d;
      pbVar5[1] = pbVar5[1] ^ 0xc5;
      pbVar5[2] = pbVar5[2] ^ 0x13;
      pbVar5[3] = pbVar5[3] ^ 0x41;
      pbVar5[0x10] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x15;
      pbVar5[5] = pbVar5[5] ^ 0x77;
      pbVar5[6] = pbVar5[6] ^ 0x6d;
      pbVar5[7] = pbVar5[7] ^ 0xd7;
      pbVar5[8] = pbVar5[8] ^ 0x6d;
      pbVar5[9] = pbVar5[9] ^ 0xc5;
      pbVar5[10] = pbVar5[10] ^ 0x13;
      pbVar5[0xb] = pbVar5[0xb] ^ 0x41;
      pbVar5[0xc] = pbVar5[0xc] ^ 0x15;
      pbVar5[0xd] = pbVar5[0xd] ^ 0x77;
      pbVar5[0xe] = pbVar5[0xe] ^ 0x6d;
      pbVar5[0xf] = pbVar5[0xf] ^ 0xd7;
    }
    DAT_711acef4 = FUN_715ec410(pbVar4,pbVar5,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711acef8);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711acf00 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf00), iVar1 != 0)) {
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64fc);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64ec);
      *puVar6 = 0xe075d076;
      *(undefined1 *)((int)puVar6 + 6) = 1;
      *(undefined2 *)(puVar6 + 1) = 0x2319;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716100e4,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64fc);
      *puVar7 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c64ec);
    if (pbVar4[6] != 0) {
      pbVar4[6] = 0;
      *pbVar4 = *pbVar4 ^ 5;
      pbVar4[1] = pbVar4[1] ^ 0xb9;
      pbVar4[2] = pbVar4[2] ^ 7;
      pbVar4[3] = pbVar4[3] ^ 0x85;
      pbVar4[4] = pbVar4[4] ^ 0x77;
      pbVar4[5] = pbVar4[5] ^ 0x23;
    }
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c651c);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c650c);
      *puVar6 = 0xe3588868;
      puVar6[1] = 0x67de421b;
      puVar6[2] = 0xda60d76c;
      *(undefined1 *)((int)puVar6 + 0xf) = 1;
      *(undefined4 *)((int)puVar6 + 0xb) = 0xad4d18da;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161010c,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c651c);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c650c);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 5;
      pbVar5[1] = pbVar5[1] ^ 0xb9;
      pbVar5[2] = pbVar5[2] ^ 7;
      pbVar5[3] = pbVar5[3] ^ 0x85;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x77;
      pbVar5[5] = pbVar5[5] ^ 0x23;
      pbVar5[6] = pbVar5[6] ^ 0xad;
      pbVar5[7] = pbVar5[7] ^ 0xf;
      pbVar5[8] = pbVar5[8] ^ 5;
      pbVar5[9] = pbVar5[9] ^ 0xb9;
      pbVar5[10] = pbVar5[10] ^ 7;
      pbVar5[0xb] = pbVar5[0xb] ^ 0x85;
      pbVar5[0xc] = pbVar5[0xc] ^ 0x77;
      pbVar5[0xd] = pbVar5[0xd] ^ 0x23;
      pbVar5[0xe] = pbVar5[0xe] ^ 0xad;
    }
    DAT_711acefc = FUN_715ec410(pbVar4,pbVar5,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711acf00);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711acf08 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf08), iVar1 != 0)) {
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c653c);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c652c);
      *puVar6 = 0xac5b322e;
      *(undefined1 *)((int)puVar6 + 6) = 1;
      *(undefined2 *)(puVar6 + 1) = 0x8f1d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161013c,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c653c);
      *puVar7 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c652c);
    if (pbVar4[6] != 0) {
      pbVar4[6] = 0;
      *pbVar4 = *pbVar4 ^ 0x5d;
      pbVar4[1] = pbVar4[1] ^ 0x5b;
      pbVar4[2] = pbVar4[2] ^ 0x29;
      pbVar4[3] = pbVar4[3] ^ 0xc9;
      pbVar4[4] = pbVar4[4] ^ 0x73;
      pbVar4[5] = pbVar4[5] ^ 0x8f;
    }
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c655c);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c654c);
      *(undefined2 *)(puVar6 + 3) = 0x173;
      *puVar6 = 0xac5b322e;
      puVar6[1] = 0x1bbed01d;
      puVar6[2] = 0xbe463f3c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610164,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c655c);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c654c);
    if (pbVar5[0xd] != 0) {
      *pbVar5 = *pbVar5 ^ 0x5d;
      pbVar5[1] = pbVar5[1] ^ 0x5b;
      pbVar5[2] = pbVar5[2] ^ 0x29;
      pbVar5[3] = pbVar5[3] ^ 0xc9;
      pbVar5[0xd] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x73;
      pbVar5[5] = pbVar5[5] ^ 0x8f;
      pbVar5[6] = pbVar5[6] ^ 0xcd;
      pbVar5[7] = pbVar5[7] ^ 0x73;
      pbVar5[8] = pbVar5[8] ^ 0x5d;
      pbVar5[9] = pbVar5[9] ^ 0x5b;
      pbVar5[10] = pbVar5[10] ^ 0x29;
      pbVar5[0xb] = pbVar5[0xb] ^ 0xc9;
      pbVar5[0xc] = pbVar5[0xc] ^ 0x73;
    }
    DAT_711acf04 = FUN_715ec410(pbVar4,pbVar5,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711acf08);
  }
  FUN_7136cdfc(&uStack_30);
  if (*(byte *)(param_1 + 0x96a) < 4) {
    switch(*(byte *)(param_1 + 0x96a)) {
    case 0:
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c657c);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c656c);
        *(undefined2 *)(puVar6 + 3) = 0x177;
        *puVar6 = 0x8e2b4adc;
        puVar6[1] = 0x6092da19;
        puVar6[2] = 0x8e3547cb;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610194,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c657c);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c656c);
      if (pbVar4[0xd] != 0) {
        *pbVar4 = *pbVar4 ^ 0xaf;
        pbVar4[1] = pbVar4[1] ^ 0x23;
        pbVar4[2] = pbVar4[2] ^ 0x59;
        pbVar4[3] = pbVar4[3] ^ 0xeb;
        pbVar4[0xd] = 0;
        pbVar4[4] = pbVar4[4] ^ 0x77;
        pbVar4[5] = pbVar4[5] ^ 0x85;
        pbVar4[6] = ~pbVar4[6];
        pbVar4[7] = pbVar4[7] ^ 9;
        pbVar4[8] = pbVar4[8] ^ 0xaf;
        pbVar4[9] = pbVar4[9] ^ 0x23;
        pbVar4[10] = pbVar4[10] ^ 0x59;
        pbVar4[0xb] = pbVar4[0xb] ^ 0xeb;
        pbVar4[0xc] = pbVar4[0xc] ^ 0x77;
      }
      iVar1 = FUN_713fd1dc(uVar2);
      if (iVar1 == 0) goto LAB_716040ec;
      FUN_7133f914(&uStack_78,iVar1 + 0x10,0);
      FUN_7136d040(&uStack_30,auStack_48);
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x5a4) == 9) {
        uStack_8c = *(undefined4 *)(param_1 + 0x970);
        uStack_90 = *(undefined4 *)(iVar1 + 0x10);
        uStack_94 = *(undefined4 *)(iVar1 + 0x14);
        uStack_98 = *(undefined4 *)(iVar1 + 0x18);
        uStack_9c = *(undefined4 *)(iVar1 + 0x38);
        uVar18 = *(undefined4 *)(iVar1 + 0x1c);
        uVar19 = *(undefined4 *)(iVar1 + 0x2c);
        uVar20 = *(undefined4 *)(iVar1 + 0x30);
        uVar21 = *(undefined4 *)(iVar1 + 0x34);
        uVar15 = *(undefined4 *)(iVar1 + 0x20);
        uVar22 = *(undefined4 *)(iVar1 + 0x24);
        uVar23 = *(undefined4 *)(iVar1 + 0x28);
        uVar2 = *(undefined4 *)(iVar1 + 0x3c);
        uVar9 = *(undefined4 *)(iVar1 + 0x40);
        uVar10 = *(undefined4 *)(iVar1 + 0x44);
        uVar13 = *(undefined4 *)(iVar1 + 0x48);
        uVar17 = *(undefined4 *)(iVar1 + 0x4c);
        goto LAB_716040c4;
      }
      goto LAB_716040e0;
    case 1:
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c659c);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c658c);
        *(undefined2 *)(puVar6 + 3) = 0x163;
        *puVar6 = 0x7617e626;
        puVar6[1] = 0x9a7a5c0d;
        puVar6[2] = 0x7609eb31;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716101c4,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c659c);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c658c);
      if (pbVar4[0xd] != 0) {
        *pbVar4 = *pbVar4 ^ 0x55;
        pbVar4[1] = pbVar4[1] ^ 0x8f;
        pbVar4[2] = pbVar4[2] ^ 0x65;
        pbVar4[3] = pbVar4[3] ^ 0x13;
        pbVar4[0xd] = 0;
        pbVar4[4] = pbVar4[4] ^ 99;
        pbVar4[5] = pbVar4[5] ^ 3;
        pbVar4[6] = pbVar4[6] ^ 0x17;
        pbVar4[7] = pbVar4[7] ^ 0xf3;
        pbVar4[8] = pbVar4[8] ^ 0x55;
        pbVar4[9] = pbVar4[9] ^ 0x8f;
        pbVar4[10] = pbVar4[10] ^ 0x65;
        pbVar4[0xb] = pbVar4[0xb] ^ 0x13;
        pbVar4[0xc] = pbVar4[0xc] ^ 99;
      }
      break;
    case 2:
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65bc);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65ac);
        *puVar6 = 0x489758a2;
        puVar6[1] = 0xba61eaaf;
        *(undefined1 *)((int)puVar6 + 0xb) = 1;
        *(undefined4 *)((int)puVar6 + 7) = 0xe545b7ba;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716101f4,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65bc);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65ac);
      if (pbVar4[0xb] != 0) {
        *pbVar4 = *pbVar4 ^ 0xd1;
        pbVar4[1] = pbVar4[1] ^ 0x31;
        pbVar4[2] = pbVar4[2] ^ 0xe5;
        pbVar4[3] = pbVar4[3] ^ 0x2d;
        pbVar4[0xb] = 0;
        pbVar4[4] = pbVar4[4] ^ 0xc1;
        pbVar4[5] = pbVar4[5] ^ 0xb5;
        pbVar4[6] = pbVar4[6] ^ 0xd;
        pbVar4[7] = pbVar4[7] ^ 0xdf;
        pbVar4[8] = pbVar4[8] ^ 0xd1;
        pbVar4[9] = pbVar4[9] ^ 0x31;
        pbVar4[10] = pbVar4[10] ^ 0xe5;
      }
      break;
    case 3:
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65dc);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65cc);
        *puVar6 = 0x2c59b4c6;
        puVar6[1] = 0x989b4e07;
        *(undefined1 *)((int)puVar6 + 0xb) = 1;
        *(undefined4 *)((int)puVar6 + 7) = 0x2ba9d398;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610220,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65dc);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65cc);
      if (pbVar4[0xb] != 0) {
        *pbVar4 = *pbVar4 ^ 0xb5;
        pbVar4[1] = pbVar4[1] ^ 0xdd;
        pbVar4[2] = pbVar4[2] ^ 0x2b;
        pbVar4[3] = pbVar4[3] ^ 0x49;
        pbVar4[0xb] = 0;
        pbVar4[4] = pbVar4[4] ^ 0x69;
        pbVar4[5] = pbVar4[5] ^ 0x11;
        pbVar4[6] = pbVar4[6] ^ 0xf7;
        pbVar4[7] = pbVar4[7] ^ 0xfd;
        pbVar4[8] = pbVar4[8] ^ 0xb5;
        pbVar4[9] = pbVar4[9] ^ 0xdd;
        pbVar4[10] = pbVar4[10] ^ 0x2b;
      }
    }
    iVar1 = FUN_713fd1dc(uVar2);
    if (iVar1 == 0) {
LAB_716040ec:
      uStack_74 = 0;
      uStack_70 = 0x3f800000;
      uStack_78 = 0;
      FUN_7136d040(&uStack_30,&uStack_78);
    }
    else {
      FUN_7133f914(&uStack_78,iVar1 + 0x10,0);
      FUN_7136d040(&uStack_30,auStack_48);
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x5a4) == 9) {
        uStack_8c = *(undefined4 *)(param_1 + 0x970);
        uStack_90 = *(undefined4 *)(iVar1 + 0x10);
        uStack_94 = *(undefined4 *)(iVar1 + 0x14);
        uStack_98 = *(undefined4 *)(iVar1 + 0x18);
        uStack_9c = *(undefined4 *)(iVar1 + 0x38);
        uVar15 = *(undefined4 *)(iVar1 + 0x20);
        uVar18 = *(undefined4 *)(iVar1 + 0x1c);
        uVar22 = *(undefined4 *)(iVar1 + 0x24);
        uVar23 = *(undefined4 *)(iVar1 + 0x28);
        uVar19 = *(undefined4 *)(iVar1 + 0x2c);
        uVar20 = *(undefined4 *)(iVar1 + 0x30);
        uVar21 = *(undefined4 *)(iVar1 + 0x34);
        uVar2 = *(undefined4 *)(iVar1 + 0x3c);
        uVar9 = *(undefined4 *)(iVar1 + 0x40);
        uVar10 = *(undefined4 *)(iVar1 + 0x44);
        uVar13 = *(undefined4 *)(iVar1 + 0x48);
        uVar17 = *(undefined4 *)(iVar1 + 0x4c);
LAB_716040c4:
        FUN_7156063c(uStack_8c,uStack_90,uStack_94,uStack_98,uVar18,uVar15,uVar22,uVar23,uVar19,
                     uVar20,uVar21,uStack_9c,uVar2,uVar9,uVar10,uVar13,uVar17);
      }
LAB_716040e0:
      FUN_7133fdcc(&uStack_78);
    }
  }
  uStack_28 = FUN_71ba0b38(uStack_28,0x3d23d70a);
  iVar1 = FUN_71886108();
  if ((uint)(iVar1 - *(int *)(param_1 + 0x96c)) < 0x65) {
    return;
  }
  cVar8 = '\0';
  if (*(char *)(param_1 + 0x96b) != '\x03') {
    cVar8 = *(char *)(param_1 + 0x96b) + '\x01';
  }
  *(char *)(param_1 + 0x96b) = cVar8;
  uVar2 = FUN_71886108();
  *(undefined4 *)(param_1 + 0x96c) = uVar2;
  FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),*(undefined4 *)(param_1 + 0xc));
  FUN_7136cdfc(&uStack_78);
  uVar9 = DAT_711acefc;
  uVar2 = DAT_711acef4;
  if (3 < *(byte *)(param_1 + 0x96a)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x970);
  switch(*(byte *)(param_1 + 0x96a)) {
  case 1:
    switch(*(undefined1 *)(param_1 + 0x96b)) {
    case 0:
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acefc;
      uVar2 = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar9;
      iVar11 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa4) = uVar2;
      iVar1 = DAT_70ffcec0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) goto code_r0x7160564c;
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      break;
    case 1:
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
      uVar9 = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa4) = uVar9;
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) goto code_r0x71605860;
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      goto code_r0x71605884;
    case 2:
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acefc;
      uVar2 = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar9;
      iVar11 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa4) = uVar2;
      iVar1 = DAT_70ffcec0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) goto code_r0x7160564c;
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      break;
    case 3:
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
      uVar9 = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa4) = uVar9;
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) goto code_r0x71605860;
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
code_r0x71605884:
      iVar14 = param_1 + 5;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 != 0) {
        uStack_88 = *(undefined4 *)(param_1 + 0xc);
        uStack_80 = uStack_2c;
        uVar2 = 0xbe99999a;
        goto code_r0x716058cc;
      }
      goto code_r0x71605954;
    default:
      goto LAB_71603b58;
    }
code_r0x71605670:
    iVar14 = param_1 + 4;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if (DAT_712016f8 != 0) {
      uStack_88 = *(undefined4 *)(param_1 + 0xc);
      uStack_80 = uStack_2c;
      uVar2 = 0x3e99999a;
code_r0x716058cc:
      uStack_7c = uStack_28;
      uStack_30 = FUN_71ba0b38(uStack_30,uVar2);
code_r0x716058d0:
      uStack_84 = uStack_30;
      FUN_714411a0(iVar14,uStack_88,0,0,0xff,0xff,&uStack_84,0x3e8a3d71,0x42c80000,1,0,1,1,0,0,0,
                   0x3f000000,1,0x3f800000,0,0);
    }
code_r0x71605954:
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    goto code_r0x71605968;
  case 2:
    switch(*(undefined1 *)(param_1 + 0x96b)) {
    case 0:
      iVar14 = param_1 + 4;
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acefc;
      uVar2 = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar2;
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar12 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar12 + 0xc) == iVar14) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined4 *)(iVar12 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar12 = iVar1 + iVar11;
        if (*(int *)(iVar12 + 0xc) == param_1 + 5) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined4 *)(iVar12 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 != 0) {
        uStack_88 = *(undefined4 *)(param_1 + 0xc);
        uStack_7c = uStack_28;
        uStack_80 = FUN_71ba0b38(uStack_2c,0x3d4ccccd);
        goto code_r0x716058d0;
      }
      goto code_r0x71605954;
    case 1:
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
      uVar9 = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar9;
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = param_1 + 5;
      iVar14 = 0;
      do {
        iVar12 = iVar1 + iVar14;
        if (*(int *)(iVar12 + 0xc) == iVar11) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined4 *)(iVar12 + 0xc) = 0;
          break;
        }
        iVar14 = iVar14 + 0x3c;
      } while (iVar14 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 == 0) {
        return;
      }
      uStack_7c = uStack_28;
      uStack_80 = uStack_2c;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uStack_30 = FUN_71ba0b38(uStack_30,0x3d4ccccd);
      break;
    case 2:
      iVar11 = param_1 + 4;
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar2;
      iVar1 = DAT_70ffcec0;
      iVar14 = 0;
      do {
        iVar12 = DAT_70ffcec0 + iVar14;
        if (*(int *)(iVar12 + 0xc) == iVar11) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined4 *)(iVar12 + 0xc) = 0;
          break;
        }
        iVar14 = iVar14 + 0x3c;
      } while (iVar14 != 0xf00);
      iVar14 = 0;
      do {
        iVar12 = iVar1 + iVar14;
        if (*(int *)(iVar12 + 0xc) == param_1 + 5) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined4 *)(iVar12 + 0xc) = 0;
          break;
        }
        iVar14 = iVar14 + 0x3c;
      } while (iVar14 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 == 0) {
        return;
      }
      uStack_7c = uStack_28;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uStack_80 = FUN_71ba0b38(uStack_2c,0xbd4ccccd);
      break;
    case 3:
      iVar11 = 0;
      *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = uVar2;
      uVar2 = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar2;
      iVar1 = DAT_70ffcec0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar14 = param_1 + 5;
      iVar11 = 0;
      do {
        iVar12 = iVar1 + iVar11;
        if (*(int *)(iVar12 + 0xc) == iVar14) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined4 *)(iVar12 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 == 0) goto code_r0x71605954;
      uStack_88 = *(undefined4 *)(param_1 + 0xc);
      uStack_80 = uStack_2c;
      uVar2 = 0xbd4ccccd;
      goto code_r0x716058cc;
    default:
      goto LAB_71603b58;
    }
    uVar10 = 0;
    uVar13 = 0xff;
    uVar9 = 0;
    uStack_84 = uStack_30;
    goto code_r0x71605560;
  case 3:
    iVar11 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
    iVar1 = iVar11 + 0x30;
    if (iVar11 == 0) {
      iVar1 = *(int *)(param_1 + 0xc) + 4;
    }
    FUN_7136d040(&uStack_78,iVar1);
    switch(*(undefined1 *)(param_1 + 0x96b)) {
    case 0:
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x94) = DAT_711acefc;
      uVar2 = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      uStack_74 = FUN_71ba0b38(uStack_74,0x3f000000);
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 != 0) {
        uStack_7c = uStack_28;
        uStack_88 = *(undefined4 *)(param_1 + 0xc);
        uStack_80 = uStack_2c;
        uStack_30 = FUN_71ba0b38(uStack_30,0x3d4ccccd);
code_r0x71605120:
        uStack_84 = uStack_30;
        FUN_714411a0(param_1 + 5,uStack_88,0xff,0x92,0x31,0xff,&uStack_84,0x3e8a3d71,0x42c80000,1,0,
                     1,1,0,0,0,0x3f000000,1,0x3f800000,0,0);
      }
      break;
    case 1:
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x94) = DAT_711acef4;
      uVar2 = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      uStack_78 = FUN_71ba0b38(uStack_78,0x3f000000);
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 == 0) {
        return;
      }
      uStack_7c = uStack_28;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uStack_80 = FUN_71ba0b38(uStack_2c,0x3d4ccccd);
      goto code_r0x716054e8;
    case 2:
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x94) = DAT_711acefc;
      uVar2 = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acef4;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      uStack_74 = FUN_71ba0b38(uStack_74,0xbf000000);
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 == 0) {
        return;
      }
      uStack_7c = uStack_28;
      uStack_80 = uStack_2c;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uStack_30 = FUN_71ba0b38(uStack_30,0xbd4ccccd);
code_r0x716054e8:
      iVar11 = param_1 + 5;
      uVar10 = 0x92;
      uVar9 = 0xff;
      uVar13 = 0x31;
      uStack_84 = uStack_30;
code_r0x71605560:
      FUN_714411a0(iVar11,uVar2,uVar9,uVar10,uVar13,0xff,&uStack_84,0x3e8a3d71,0x42c80000,1,0,1,1,0,
                   0,0,0x3f000000,1,0x3f800000,0,0);
      return;
    case 3:
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x94) = DAT_711acef4;
      uVar2 = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acefc;
      *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
      uStack_78 = FUN_71ba0b38(uStack_78,0xbf000000);
      iVar1 = DAT_70ffcec0;
      iVar11 = 0;
      do {
        iVar14 = DAT_70ffcec0 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      iVar11 = 0;
      do {
        iVar14 = iVar1 + iVar11;
        if (*(int *)(iVar14 + 0xc) == param_1 + 5) {
          *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
          *(undefined4 *)(iVar14 + 0x38) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          break;
        }
        iVar11 = iVar11 + 0x3c;
      } while (iVar11 != 0xf00);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016f8 != 0) {
        uStack_88 = *(undefined4 *)(param_1 + 0xc);
        uStack_7c = uStack_28;
        uStack_80 = FUN_71ba0b38(uStack_2c,0xbd4ccccd);
        goto code_r0x71605120;
      }
      break;
    default:
      return;
    }
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if (DAT_712016f4 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    puVar16 = *(undefined4 **)(iVar1 + 0x14);
    uVar13 = puVar16[4];
    uVar9 = *puVar16;
    uVar10 = puVar16[1];
    uVar2 = FUN_71ba21e8(puVar16[5],0x41f00000);
    uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
    uVar10 = FUN_71ba21e8(uVar10,0x41f00000);
    uVar13 = FUN_71ba21e8(uVar13,0x41f00000);
    uVar15 = 0x82;
    uVar17 = 0x3c;
    puVar6 = puVar16 + 0xc;
    if (puVar16 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(iVar1 + 4);
    }
    uVar18 = 0x14;
    goto code_r0x71605a20;
  }
  switch(*(undefined1 *)(param_1 + 0x96b)) {
  case 0:
    *(undefined4 *)(iVar1 + 0x94) = DAT_711acefc;
    uVar2 = DAT_711acef4;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acef4;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar9;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xac) = uVar2;
    iVar1 = 0;
    do {
      iVar11 = DAT_70ffcec0 + iVar1;
      if (*(int *)(iVar11 + 0xc) == param_1 + 5) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar11 + 0x38) = 0;
        *(undefined4 *)(iVar11 + 0xc) = 0;
        break;
      }
      iVar1 = iVar1 + 0x3c;
    } while (iVar1 != 0xf00);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if (DAT_712016f8 != 0) {
      uStack_80 = uStack_2c;
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = 0x3e99999a;
code_r0x71605744:
      uStack_7c = uStack_28;
      uStack_84 = FUN_71ba0b38(uStack_30,uVar2);
      FUN_714411a0(param_1 + 4,uVar9,0,0,0xff,0xff,&uStack_84,0x3e8a3d71,0x42c80000,1,0,1,1,0,0,0,
                   0x3f000000,1,0x3f800000,0,0);
    }
    break;
  case 1:
    *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
    uVar9 = DAT_711acefc;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = DAT_711acefc;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar9;
    iVar1 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xac) = uVar2;
    do {
      iVar11 = DAT_70ffcec0 + iVar1;
      if (*(int *)(iVar11 + 0xc) == param_1 + 5) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar11 + 0x38) = 0;
        *(undefined4 *)(iVar11 + 0xc) = 0;
        break;
      }
      iVar1 = iVar1 + 0x3c;
    } while (iVar1 != 0xf00);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if (DAT_712016f8 != 0) {
      uStack_80 = uStack_2c;
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = 0x3e19999a;
      goto code_r0x71605744;
    }
    break;
  case 2:
    *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = uVar2;
    uVar9 = DAT_711acefc;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = DAT_711acefc;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xac) = uVar9;
    iVar1 = 0;
    do {
      iVar11 = DAT_70ffcec0 + iVar1;
      if (*(int *)(iVar11 + 0xc) == param_1 + 4) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar11 + 0x38) = 0;
        *(undefined4 *)(iVar11 + 0xc) = 0;
        break;
      }
      iVar1 = iVar1 + 0x3c;
    } while (iVar1 != 0xf00);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if (DAT_712016f8 != 0) {
      uStack_7c = uStack_28;
      uStack_80 = uStack_2c;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uStack_84 = FUN_71ba0b38(uStack_30,0xbe19999a);
      FUN_714411a0(param_1 + 5,uVar2,0xff,0,0,0xff,&uStack_84,0x3e8a3d71,0x42c80000,1,0,1,1,0,0,0,
                   0x3f000000,1,0x3f800000,0,0);
    }
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    goto code_r0x716053a8;
  case 3:
    *(undefined4 *)(iVar1 + 0x94) = DAT_711acef4;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x98) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0x9c) = uVar2;
    uVar9 = DAT_711acefc;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa0) = DAT_711acefc;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xa8) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x970) + 0xac) = uVar9;
    iVar1 = DAT_70ffcec0;
    iVar11 = 0;
    do {
      iVar14 = DAT_70ffcec0 + iVar11;
      if (*(int *)(iVar14 + 0xc) == param_1 + 4) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar14 + 0x38) = 0;
        *(undefined4 *)(iVar14 + 0xc) = 0;
        break;
      }
      iVar11 = iVar11 + 0x3c;
    } while (iVar11 != 0xf00);
    iVar11 = 0;
    do {
      iVar14 = iVar1 + iVar11;
      if (*(int *)(iVar14 + 0xc) == param_1 + 5) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar14 + 0x38) = 0;
        *(undefined4 *)(iVar14 + 0xc) = 0;
        break;
      }
      iVar11 = iVar11 + 0x3c;
    } while (iVar11 != 0xf00);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if (DAT_712016f8 != 0) {
      uStack_7c = uStack_28;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uStack_80 = uStack_2c;
      uStack_84 = FUN_71ba0b38(uStack_30,0xbe99999a);
      FUN_714411a0(param_1 + 5,uVar2,0xff,0,0,0xff,&uStack_84,0x3e8a3d71,0x42c80000,1,0,1,1,0,0,0,
                   0x3f000000,1,0x3f800000,0,0);
    }
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
code_r0x716053a8:
    if (DAT_712016f4 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    puVar16 = *(undefined4 **)(iVar1 + 0x14);
    uVar9 = *puVar16;
    uVar10 = puVar16[1];
    uVar13 = puVar16[4];
    uVar2 = FUN_71ba21e8(puVar16[5],0x41f00000);
    uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
    uVar10 = FUN_71ba21e8(uVar10,0x41f00000);
    uVar13 = FUN_71ba21e8(uVar13,0x41f00000);
    uVar15 = 0xff;
    uVar18 = 0;
    goto code_r0x71605a10;
  default:
    goto LAB_71603b58;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
code_r0x71605968:
  if (DAT_712016f4 == 0) {
LAB_71603b58:
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  puVar16 = *(undefined4 **)(iVar1 + 0x14);
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar13 = puVar16[4];
  uVar2 = FUN_71ba21e8(puVar16[5],0x41f00000);
  uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
  uVar10 = FUN_71ba21e8(uVar10,0x41f00000);
  uVar13 = FUN_71ba21e8(uVar13,0x41f00000);
  uVar15 = 0;
  uVar18 = 0xff;
code_r0x71605a10:
  uVar17 = 0;
  puVar6 = puVar16 + 0xc;
  if (puVar16 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(iVar1 + 4);
  }
code_r0x71605a20:
  FUN_71473798(2,DAT_711acf04,puVar6,uVar13,uVar2,uVar9,uVar10,1000,uVar15,uVar17,uVar18,0x3f800000,
               1,0x3f800000,0,1);
  return;
code_r0x71605860:
  *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
  *(undefined4 *)(iVar14 + 0x38) = 0;
  *(undefined4 *)(iVar14 + 0xc) = 0;
  goto code_r0x71605884;
code_r0x7160564c:
  *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
  *(undefined4 *)(iVar14 + 0x38) = 0;
  *(undefined4 *)(iVar14 + 0xc) = 0;
  goto code_r0x71605670;
}


// =========================================================================
// Function: FUN_716086c0
// Entry: 0x716086c0 | Size: 1736 bytes
// =========================================================================

void FUN_716086c0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_48 [24];
  undefined4 auStack_30 [3];
  
  FUN_715f5134();
  iVar2 = FUN_7136cdfc(auStack_30);
  if (param_2 == 3) {
    uVar10 = 0x3839;
    *(undefined1 *)(param_1 + 0x96a) = 3;
switchD_71608b24_caseD_3:
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c665c);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c664c);
      *puVar6 = 0x185fba5a;
      puVar6[1] = 0xa9fb265;
      *(undefined1 *)((int)puVar6 + 0xb) = 1;
      *(undefined4 *)((int)puVar6 + 7) = 0x2da74f0a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716102d8,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c665c);
      *puVar7 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c664c);
    if (pbVar4[0xb] != 0) {
      *pbVar4 = *pbVar4 ^ 0x29;
      pbVar4[1] = pbVar4[1] ^ 0xd3;
      pbVar4[2] = pbVar4[2] ^ 0x2d;
      pbVar4[3] = pbVar4[3] ^ 0x7d;
      pbVar4[0xb] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xb;
      pbVar4[5] = pbVar4[5] ^ 0xed;
      pbVar4[6] = pbVar4[6] ^ 0xf3;
      pbVar4[7] = pbVar4[7] ^ 0x6f;
      pbVar4[8] = pbVar4[8] ^ 0x29;
      pbVar4[9] = pbVar4[9] ^ 0xd3;
      bVar1 = pbVar4[10] ^ 0x2d;
LAB_71608998:
      pbVar4[10] = bVar1;
    }
  }
  else if (param_2 == 2) {
    uVar10 = 0x3837;
    *(undefined1 *)(param_1 + 0x96a) = 2;
switchD_71608b24_caseD_2:
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c663c);
    if (*pcVar3 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c662c);
      *puVar6 = 0xf8a1b67c;
      puVar6[1] = 0xe0f33431;
      *(undefined1 *)((int)puVar6 + 0xb) = 1;
      *(undefined4 *)((int)puVar6 + 7) = 0xd3ab69e0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716102ac,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c663c);
      *puVar7 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c662c);
    if (pbVar4[0xb] != 0) {
      *pbVar4 = *pbVar4 ^ 0xf;
      pbVar4[1] = pbVar4[1] ^ 0xdf;
      pbVar4[2] = pbVar4[2] ^ 0xd3;
      pbVar4[3] = pbVar4[3] ^ 0x9d;
      pbVar4[0xb] = 0;
      pbVar4[4] = pbVar4[4] ^ 0x5f;
      pbVar4[5] = pbVar4[5] ^ 0x6b;
      pbVar4[6] = pbVar4[6] ^ 0x9f;
      pbVar4[7] = pbVar4[7] ^ 0x85;
      pbVar4[8] = pbVar4[8] ^ 0xf;
      pbVar4[9] = pbVar4[9] ^ 0xdf;
      bVar1 = pbVar4[10] ^ 0xd3;
      goto LAB_71608998;
    }
  }
  else {
    if (param_2 == 1) {
      uVar10 = 0x3836;
      *(undefined1 *)(param_1 + 0x96a) = 1;
switchD_71608b24_caseD_1:
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c661c);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c660c);
        *(undefined2 *)(puVar6 + 3) = 0x10f;
        *puVar6 = 0xe467fe76;
        puVar6[1] = 0x86e87061;
        puVar6[2] = 0xe479f361;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161027c,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c661c);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c660c);
      if (pbVar4[0xd] == 0) goto LAB_7160899c;
      *pbVar4 = *pbVar4 ^ 5;
      pbVar4[1] = pbVar4[1] ^ 0x97;
      pbVar4[2] = pbVar4[2] ^ 0x15;
      pbVar4[3] = pbVar4[3] ^ 0x81;
      pbVar4[0xd] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xf;
      pbVar4[5] = pbVar4[5] ^ 0x2f;
      pbVar4[6] = pbVar4[6] ^ 0x85;
      pbVar4[7] = pbVar4[7] ^ 0xef;
      pbVar4[8] = pbVar4[8] ^ 5;
      pbVar4[9] = pbVar4[9] ^ 0x97;
      pbVar4[10] = pbVar4[10] ^ 0x15;
      pbVar4[0xb] = pbVar4[0xb] ^ 0x81;
      bVar1 = pbVar4[0xc] ^ 0xf;
    }
    else {
      uVar10 = 0x3838;
      *(char *)(param_1 + 0x96a) = (char)param_2;
      switch(param_2 & 0xff) {
      case 0:
        uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65fc);
        if (*pcVar3 == '\0') {
          puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65ec);
          *(undefined2 *)(puVar6 + 3) = 0x195;
          *puVar6 = 0xe60952ce;
          puVar6[1] = 0xacb686fb;
          puVar6[2] = 0xe6175fd9;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161024c,puVar6,&DAT_70b0e000);
          puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65fc);
          *puVar7 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c65ec);
        if (pbVar4[0xd] == 0) goto LAB_7160899c;
        *pbVar4 = *pbVar4 ^ 0xbd;
        pbVar4[1] = pbVar4[1] ^ 0x3b;
        pbVar4[2] = pbVar4[2] ^ 0x7b;
        pbVar4[3] = pbVar4[3] ^ 0x83;
        pbVar4[0xd] = 0;
        pbVar4[4] = pbVar4[4] ^ 0x95;
        pbVar4[5] = pbVar4[5] ^ 0xd9;
        pbVar4[6] = pbVar4[6] ^ 0xdb;
        pbVar4[7] = pbVar4[7] ^ 0xc5;
        pbVar4[8] = pbVar4[8] ^ 0xbd;
        pbVar4[9] = pbVar4[9] ^ 0x3b;
        pbVar4[10] = pbVar4[10] ^ 0x7b;
        pbVar4[0xb] = pbVar4[0xb] ^ 0x83;
        bVar1 = pbVar4[0xc] ^ 0x95;
        break;
      case 1:
        goto switchD_71608b24_caseD_1;
      case 2:
        goto switchD_71608b24_caseD_2;
      case 3:
        goto switchD_71608b24_caseD_3;
      default:
        goto switchD_71608b24_default;
      }
    }
    pbVar4[0xc] = bVar1;
  }
LAB_7160899c:
  iVar5 = FUN_713fd1dc(uVar9);
  if (iVar5 == 0) {
    uStack_74 = 0;
    uStack_70 = 0x3f800000;
    uStack_78 = 0;
    FUN_7136d040(auStack_30,&uStack_78);
  }
  else {
    FUN_7133f914(&uStack_78,iVar5 + 0x10,0);
    FUN_7136d040(auStack_30,auStack_48);
    FUN_7133fdcc(&uStack_78);
  }
switchD_71608b24_default:
  uVar9 = thunk_MwhHq(0x118);
  FUN_7136cdfc(&uStack_84);
  uVar10 = FUN_715b6bc4(uVar9,uVar10,0,0,0,uStack_84,uStack_80,uStack_7c,0x43160000);
  *(undefined4 *)(param_1 + 0x970) = uVar9;
  thunk_FUN_715607d8(uVar10,0);
  thunk_FUN_71560790(*(undefined4 *)(param_1 + 0x970),0);
  uVar11 = FUN_71ba1638(auStack_30[0]);
  uVar10 = *(undefined4 *)(iVar2 + 8);
  uVar12 = FUN_71ba1638(*(undefined4 *)(iVar2 + 4));
  uVar13 = FUN_71ba1638(uVar10);
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x970) + 8);
  FUN_715d33c8(&DAT_70082fd4,uVar10,*(undefined4 *)(param_1 + 8),uVar10,uVar11,uVar12,uVar13,0,0,0,0
               ,0,0);
  *(undefined2 *)(param_1 + 0x968) = 1;
  *(undefined1 *)(param_1 + 0x96b) = 0;
  uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x24);
  if (uVar8 < 0x7d1) {
    *(undefined4 *)(*(int *)(DAT_711f6d58 + 4) + uVar8 * 4 + 0x9483) =
         *(undefined4 *)(param_1 + 0x970);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x970) + 0x114) = 1;
  return;
}


// =========================================================================
// Function: FUN_716094e0
// Entry: 0x716094e0 | Size: 92 bytes
// =========================================================================

int FUN_716094e0(int param_1)

{
  int iVar1;
  undefined1 auStack_14 [4];
  
  FUN_71358efc(auStack_14,0xff,0,0xaf,0xff);
  iVar1 = FUN_71358fb8(param_1 + 4,auStack_14);
  if (iVar1 != 0) {
    DAT_711acf0c = 1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7160963c
// Entry: 0x7160963c | Size: 56 bytes
// =========================================================================

undefined1 FUN_7160963c(int param_1)

{
  DAT_711acf0c = 0;
  FUN_71422cb0(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18),&LAB_716095ac,0);
  return DAT_711acf0c;
}


// =========================================================================
// Function: FUN_716096e8
// Entry: 0x716096e8 | Size: 4032 bytes
// =========================================================================

/* WARNING: Switch with 1 destination removed at 0x71609824 */

void FUN_716096e8(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_9c [12];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar7 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if ((iVar7 != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0x14) != 0)) {
    FUN_7136cdfc(&uStack_38);
    DataMemoryBarrier(0xb);
    if (((DAT_711acf14 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf14), iVar7 != 0))
    {
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c667c);
      if (*pcVar12 == '\0') {
        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c666c);
        *(undefined1 *)(puVar17 + 3) = 1;
        *puVar17 = 0x9e87bc7f;
        puVar17[1] = 0x3c702e73;
        puVar17[2] = 0xfb9cad67;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610304,puVar17,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c667c);
        *puVar8 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c666c);
      if (pbVar10[0xc] != 0) {
        *pbVar10 = *pbVar10 ^ 9;
        pbVar10[1] = pbVar10[1] ^ 0xd9;
        pbVar10[2] = pbVar10[2] ^ 0xef;
        pbVar10[3] = pbVar10[3] ^ 0xfb;
        pbVar10[0xc] = 0;
        pbVar10[4] = pbVar10[4] ^ 0x1f;
        pbVar10[5] = pbVar10[5] ^ 0x4b;
        pbVar10[6] = pbVar10[6] ^ 0x1d;
        pbVar10[7] = pbVar10[7] ^ 0x59;
        pbVar10[8] = pbVar10[8] ^ 9;
        pbVar10[9] = pbVar10[9] ^ 0xd9;
        pbVar10[10] = pbVar10[10] ^ 0xef;
        pbVar10[0xb] = pbVar10[0xb] ^ 0xfb;
      }
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c669c);
      if (*pcVar12 == '\0') {
        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c668c);
        *puVar17 = 0x9f8ebc61;
        puVar17[1] = 0x317a2273;
        *(undefined1 *)((int)puVar17 + 0xb) = 1;
        *(undefined4 *)((int)puVar17 + 7) = 0xefeb7d31;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610330,puVar17,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c669c);
        *puVar8 = 1;
      }
      pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c668c);
      if (pbVar13[0xb] != 0) {
        *pbVar13 = *pbVar13 ^ 9;
        pbVar13[1] = pbVar13[1] ^ 0xd9;
        pbVar13[2] = pbVar13[2] ^ 0xef;
        pbVar13[3] = pbVar13[3] ^ 0xfb;
        pbVar13[0xb] = 0;
        pbVar13[4] = pbVar13[4] ^ 0x1f;
        pbVar13[5] = pbVar13[5] ^ 0x4b;
        pbVar13[6] = pbVar13[6] ^ 0x1d;
        pbVar13[7] = pbVar13[7] ^ 0x59;
        pbVar13[8] = pbVar13[8] ^ 9;
        pbVar13[9] = pbVar13[9] ^ 0xd9;
        pbVar13[10] = pbVar13[10] ^ 0xef;
      }
      DAT_711acf10 = FUN_715ec410(pbVar10,pbVar13,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711acf14);
    }
    puVar17 = (undefined4 *)((uint)&uStack_90 | 4);
    DataMemoryBarrier(0xb);
    if (((DAT_711acf1c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf1c), iVar7 != 0))
    {
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66bc);
      if (*pcVar12 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66ac);
        *(undefined1 *)(puVar14 + 3) = 1;
        *puVar14 = 0xbcd3bc7b;
        puVar14[1] = 0xdeea4c85;
        puVar14[2] = 0xd9c8ad63;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161035c,puVar14,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66bc);
        *puVar8 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66ac);
      if (pbVar10[0xc] != 0) {
        *pbVar10 = *pbVar10 ^ 0xd;
        pbVar10[1] = pbVar10[1] ^ 0xd9;
        pbVar10[2] = pbVar10[2] ^ 0xbb;
        pbVar10[3] = pbVar10[3] ^ 0xd9;
        pbVar10[0xc] = 0;
        pbVar10[4] = pbVar10[4] ^ 0xe9;
        pbVar10[5] = pbVar10[5] ^ 0x29;
        pbVar10[6] = pbVar10[6] ^ 0x87;
        pbVar10[7] = pbVar10[7] ^ 0xbb;
        pbVar10[8] = pbVar10[8] ^ 0xd;
        pbVar10[9] = pbVar10[9] ^ 0xd9;
        pbVar10[10] = pbVar10[10] ^ 0xbb;
        pbVar10[0xb] = pbVar10[0xb] ^ 0xd9;
      }
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66dc);
      if (*pcVar12 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66cc);
        *puVar14 = 0xbddabc65;
        puVar14[1] = 0xd3e04085;
        *(undefined1 *)((int)puVar14 + 0xb) = 1;
        *(undefined4 *)((int)puVar14 + 7) = 0xbbea79d3;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610388,puVar14,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66dc);
        *puVar8 = 1;
      }
      pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66cc);
      if (pbVar13[0xb] != 0) {
        *pbVar13 = *pbVar13 ^ 0xd;
        pbVar13[1] = pbVar13[1] ^ 0xd9;
        pbVar13[2] = pbVar13[2] ^ 0xbb;
        pbVar13[3] = pbVar13[3] ^ 0xd9;
        pbVar13[0xb] = 0;
        pbVar13[4] = pbVar13[4] ^ 0xe9;
        pbVar13[5] = pbVar13[5] ^ 0x29;
        pbVar13[6] = pbVar13[6] ^ 0x87;
        pbVar13[7] = pbVar13[7] ^ 0xbb;
        pbVar13[8] = pbVar13[8] ^ 0xd;
        pbVar13[9] = pbVar13[9] ^ 0xd9;
        pbVar13[10] = pbVar13[10] ^ 0xbb;
      }
      DAT_711acf18 = FUN_715ec410(pbVar10,pbVar13,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711acf1c);
    }
    puVar8 = (undefined1 *)(param_1 + 0x759);
    puVar9 = (undefined1 *)(param_1 + 0x75c);
    thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c674c);
    thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c672c);
    thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c670c);
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66ec);
    uVar19 = 0;
    do {
      uVar20 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66fc);
      if (*pcVar12 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66ec);
        *(undefined1 *)((int)puVar14 + 0xe) = 1;
        *puVar14 = 0xd57d2235;
        puVar14[1] = 0x6f3d6859;
        puVar14[2] = 0xd5602507;
        *(undefined2 *)(puVar14 + 3) = 0xd61;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716103b4,puVar14,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c66fc);
        *puVar11 = 1;
      }
      if (pbVar10[0xe] != 0) {
        *pbVar10 = *pbVar10 ^ 0x41;
        pbVar10[1] = pbVar10[1] ^ 0x57;
        pbVar10[2] = pbVar10[2] ^ 0xf;
        pbVar10[3] = pbVar10[3] ^ 0xbb;
        pbVar10[0xe] = 0;
        pbVar10[4] = pbVar10[4] ^ 0x15;
        pbVar10[5] = pbVar10[5] ^ 0xd;
        pbVar10[6] = pbVar10[6] ^ 0x5b;
        pbVar10[7] = pbVar10[7] ^ 0x1b;
        pbVar10[8] = pbVar10[8] ^ 0x41;
        pbVar10[9] = pbVar10[9] ^ 0x57;
        pbVar10[10] = pbVar10[10] ^ 0xf;
        pbVar10[0xb] = pbVar10[0xb] ^ 0xbb;
        pbVar10[0xc] = pbVar10[0xc] ^ 0x15;
        pbVar10[0xd] = pbVar10[0xd] ^ 0xd;
      }
      iVar7 = FUN_713fd1dc(uVar20);
      if (iVar7 != 0) {
        FUN_7133f914(auStack_80,iVar7 + 0x10,0);
        FUN_7136d040(&uStack_38,auStack_50);
        FUN_7133fdcc(auStack_80);
      }
      FUN_7136cdfc(auStack_80);
      uStack_90 = uStack_38;
      uStack_8c = uStack_34;
      uStack_88 = uStack_30;
      iVar7 = FUN_71ba2cf0(uStack_38,0);
      bVar1 = iVar7 != 0;
      uVar20 = *puVar17;
      iVar7 = FUN_71ba2cf0(uVar20,0);
      bVar2 = iVar7 != 0;
      iVar7 = FUN_71ba2cf0(puVar17[1],0);
      bVar3 = iVar7 != 0;
      if ((!bVar1 || !bVar2) || !bVar3) {
        puVar17[1] = 0;
        if (uVar19 < 2) {
          uVar15 = 0x3f4ccccd;
        }
        else {
          uVar15 = 0xbf0ccccd;
        }
        uVar20 = FUN_71ba0b38(uVar20,uVar15);
        *puVar17 = uVar20;
        FUN_71340b14(auStack_9c,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14),&uStack_90);
        FUN_7136d040(auStack_80,auStack_9c);
      }
      if (*(int *)(param_1 + 0x754) == 1) {
        iVar7 = FUN_71886108();
        iVar16 = *(int *)(param_1 + 0x750);
        uVar20 = 0;
LAB_71609d1c:
        if (400 < (uint)(iVar7 - iVar16)) {
          uVar15 = FUN_71886108();
          *(undefined4 *)(param_1 + 0x750) = uVar15;
          *(undefined4 *)(param_1 + 0x754) = uVar20;
        }
      }
      else if (*(int *)(param_1 + 0x754) == 0) {
        iVar7 = FUN_71886108();
        iVar16 = *(int *)(param_1 + 0x750);
        uVar20 = 1;
        goto LAB_71609d1c;
      }
      FUN_717b92b8(*(undefined4 *)(DAT_711f6d58 + 4),*(undefined4 *)(param_1 + 0xc));
      switch(*(undefined1 *)(param_1 + 0x758)) {
      case 0:
switchD_71609d60_caseD_0:
        puVar8[uVar19] = 0;
        break;
      case 1:
        if (uVar19 == 0) {
          *(undefined1 *)(param_1 + 0x759) = 1;
          puVar11 = puVar8;
          if (*(int *)(param_1 + 0x754) == 0) {
LAB_7160a368:
            *puVar11 = 0;
          }
          else {
            bVar4 = false;
            if ((bVar1 && bVar2) && bVar3) break;
LAB_7160a034:
            puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x14);
            uVar15 = *puVar14;
            uVar18 = puVar14[1];
            uVar21 = puVar14[4];
            uVar20 = FUN_71ba21e8(puVar14[5],0x3e800000);
            uVar15 = FUN_71ba21e8(uVar15,0x3ed70a3d);
            uVar18 = FUN_71ba21e8(uVar18,0x3ed70a3d);
            uVar21 = FUN_71ba21e8(uVar21,0x3e800000);
            FUN_71473798(2,DAT_711acf18,auStack_80,uVar21,uVar20,uVar15,uVar18,1000,0x7f,0x5a,0,
                         0x3f800000,1,0x3f800000,0,1);
LAB_7160a0e8:
            if (!bVar4) break;
LAB_7160a2ac:
            puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x14);
            uVar18 = *puVar14;
            uVar21 = puVar14[1];
            uVar20 = puVar14[4];
            uVar15 = FUN_71ba21e8(puVar14[5],0x3e800000);
            uVar18 = FUN_71ba21e8(uVar18,0x3ed70a3d);
            uVar21 = FUN_71ba21e8(uVar21,0x3ed70a3d);
            uVar20 = FUN_71ba21e8(uVar20,0x3e800000);
            FUN_71473798(2,DAT_711acf10,auStack_80,uVar20,uVar15,uVar18,uVar21,1000,0x7f,0x5a,0,
                         0x3f800000,1,0x3f800000,0,1);
          }
        }
        else {
          if (uVar19 == 3) {
            bVar4 = true;
            puVar11 = puVar9;
LAB_7160a014:
            *puVar11 = bVar4;
          }
          else {
            bVar4 = false;
            puVar11 = (undefined1 *)(param_1 + 0x75b);
            if ((uVar19 == 2) || (puVar11 = (undefined1 *)(param_1 + 0x75a), uVar19 == 1))
            goto LAB_7160a014;
          }
          if (*(int *)(param_1 + 0x754) == 0) {
            if (uVar19 == 0) {
              *puVar8 = 0;
            }
            puVar11 = puVar9;
            if (bVar4) goto LAB_7160a368;
          }
          else if ((!bVar1 || !bVar2) || !bVar3) {
            if (uVar19 == 0) goto LAB_7160a034;
            goto LAB_7160a0e8;
          }
        }
        break;
      case 2:
                    /* WARNING: Could not recover jumptable at 0x71609da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((int)&DAT_71609dac + (&DAT_71609dac)[uVar19]))();
        return;
      case 3:
        bVar4 = false;
        if (uVar19 == 0) {
          bVar5 = false;
          puVar11 = puVar8;
LAB_71609f14:
          bVar6 = false;
LAB_71609f18:
          *puVar11 = 1;
        }
        else {
          if (uVar19 == 1) {
            bVar5 = true;
            puVar11 = (undefined1 *)(param_1 + 0x75a);
            goto LAB_71609f14;
          }
          if (uVar19 == 3) {
            bVar5 = false;
            bVar4 = true;
            puVar11 = puVar9;
            goto LAB_71609f14;
          }
          bVar5 = false;
          bVar6 = false;
          if (uVar19 == 2) {
            bVar6 = true;
            puVar11 = (undefined1 *)(param_1 + 0x75b);
            goto LAB_71609f18;
          }
        }
        if (*(int *)(param_1 + 0x754) == 0) goto switchD_71609d60_caseD_0;
        if ((!bVar1 || !bVar2) || !bVar3) {
          if (uVar19 == 0) {
            puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x14);
            uVar21 = puVar14[1];
            uVar18 = *puVar14;
            uVar20 = puVar14[4];
            uVar15 = FUN_71ba21e8(puVar14[5],0x3e800000);
            uVar18 = FUN_71ba21e8(uVar18,0x3ed70a3d);
            uVar21 = FUN_71ba21e8(uVar21,0x3ed70a3d);
            uVar20 = FUN_71ba21e8(uVar20,0x3e800000);
            FUN_71473798(2,DAT_711acf18,auStack_80,uVar20,uVar15,uVar18,uVar21,1000,0x7f,0x5a,0,
                         0x3f800000,1,0x3f800000,0,1);
          }
          if (bVar5) {
            puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x14);
            uVar18 = *puVar14;
            uVar21 = puVar14[1];
            uVar20 = puVar14[4];
            uVar15 = FUN_71ba21e8(puVar14[5],0x3e800000);
            uVar18 = FUN_71ba21e8(uVar18,0x3ed70a3d);
            uVar21 = FUN_71ba21e8(uVar21,0x3ed70a3d);
            uVar20 = FUN_71ba21e8(uVar20,0x3e800000);
            FUN_71473798(2,DAT_711acf18,auStack_80,uVar20,uVar15,uVar18,uVar21,1000,0x7f,0x5a,0,
                         0x3f800000,1,0x3f800000,0,1);
          }
          if (bVar6) {
            puVar14 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x14);
            uVar18 = *puVar14;
            uVar21 = puVar14[1];
            uVar20 = puVar14[4];
            uVar15 = FUN_71ba21e8(puVar14[5],0x3e800000);
            uVar18 = FUN_71ba21e8(uVar18,0x3ed70a3d);
            uVar21 = FUN_71ba21e8(uVar21,0x3ed70a3d);
            uVar20 = FUN_71ba21e8(uVar20,0x3e800000);
            FUN_71473798(2,DAT_711acf10,auStack_80,uVar20,uVar15,uVar18,uVar21,1000,0x7f,0x5a,0,
                         0x3f800000,1,0x3f800000,0,1);
          }
          if (bVar4) goto LAB_7160a2ac;
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != 4);
  }
  return;
}


// =========================================================================
// Function: FUN_7160bc94
// Entry: 0x7160bc94 | Size: 8 bytes
// =========================================================================

void FUN_7160bc94(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x780) = param_2;
  return;
}


// =========================================================================
// Function: FUN_7160bcb4
// Entry: 0x7160bcb4 | Size: 32 bytes
// =========================================================================

void FUN_7160bcb4(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x786) = (char)param_2;
  *(char *)(param_1 + 0x785) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x784) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x787) = (char)((uint)param_2 >> 0x18);
  return;
}


// =========================================================================
// Function: FUN_7160bd1c
// Entry: 0x7160bd1c | Size: 28 bytes
// =========================================================================

void FUN_7160bd1c(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  int extraout_r1;
  uint *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_c8 [48];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_80 [48];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  iVar3 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  if ((iVar3 != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0x14) != 0)) {
    DataMemoryBarrier(0xb);
    if (((DAT_711acf24 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf24), iVar3 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c677c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c676c);
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = 0xcecf98f1;
        puVar10[1] = 0x2e8aa483;
        puVar10[2] = 0xabd489e9;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610474,puVar10,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c677c);
        *puVar13 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c676c);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0x87;
        pbVar5[1] = pbVar5[1] ^ 0xfd;
        pbVar5[2] = pbVar5[2] ^ 0xa7;
        pbVar5[3] = pbVar5[3] ^ 0xab;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0xef;
        pbVar5[5] = pbVar5[5] ^ 0xc1;
        pbVar5[6] = pbVar5[6] ^ 0xe7;
        pbVar5[7] = pbVar5[7] ^ 0x4b;
        pbVar5[8] = pbVar5[8] ^ 0x87;
        pbVar5[9] = pbVar5[9] ^ 0xfd;
        pbVar5[10] = pbVar5[10] ^ 0xa7;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xab;
      }
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c679c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c678c);
        *puVar10 = 0xc5c898e9;
        puVar10[1] = 0x3986a2b0;
        *(undefined1 *)((int)puVar10 + 10) = 1;
        *(undefined2 *)(puVar10 + 2) = 0xfdb6;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716104a0,puVar10,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c679c);
        *puVar13 = 1;
      }
      pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c678c);
      if (pbVar11[10] != 0) {
        *pbVar11 = *pbVar11 ^ 0x87;
        pbVar11[1] = pbVar11[1] ^ 0xfd;
        pbVar11[2] = pbVar11[2] ^ 0xa7;
        pbVar11[3] = pbVar11[3] ^ 0xab;
        pbVar11[10] = 0;
        pbVar11[4] = pbVar11[4] ^ 0xef;
        pbVar11[5] = pbVar11[5] ^ 0xc1;
        pbVar11[6] = pbVar11[6] ^ 0xe7;
        pbVar11[7] = pbVar11[7] ^ 0x4b;
        pbVar11[8] = pbVar11[8] ^ 0x87;
        pbVar11[9] = pbVar11[9] ^ 0xfd;
      }
      DAT_711acf20 = (uint *)FUN_715ec410(pbVar5,pbVar11,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711acf24);
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711acf2c & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf2c), iVar3 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67bc);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67ac);
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = 0xe2198885;
        puVar10[1] = 0x327a368d;
        puVar10[2] = 0x8702999d;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716104cc,puVar10,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67bc);
        *puVar13 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67ac);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0xf3;
        pbVar5[1] = pbVar5[1] ^ 0xed;
        pbVar5[2] = pbVar5[2] ^ 0x71;
        pbVar5[3] = pbVar5[3] ^ 0x87;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0xe1;
        pbVar5[5] = pbVar5[5] ^ 0x53;
        pbVar5[6] = pbVar5[6] ^ 0x17;
        pbVar5[7] = pbVar5[7] ^ 0x57;
        pbVar5[8] = pbVar5[8] ^ 0xf3;
        pbVar5[9] = pbVar5[9] ^ 0xed;
        pbVar5[10] = pbVar5[10] ^ 0x71;
        pbVar5[0xb] = pbVar5[0xb] ^ 0x87;
      }
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67dc);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67cc);
        *puVar10 = 0xe91e889d;
        puVar10[1] = 0x257630be;
        *(undefined1 *)((int)puVar10 + 10) = 1;
        *(undefined2 *)(puVar10 + 2) = 0xedc1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716104f8,puVar10,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67dc);
        *puVar13 = 1;
      }
      pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67cc);
      if (pbVar11[10] != 0) {
        *pbVar11 = *pbVar11 ^ 0xf3;
        pbVar11[1] = pbVar11[1] ^ 0xed;
        pbVar11[2] = pbVar11[2] ^ 0x71;
        pbVar11[3] = pbVar11[3] ^ 0x87;
        pbVar11[10] = 0;
        pbVar11[4] = pbVar11[4] ^ 0xe1;
        pbVar11[5] = pbVar11[5] ^ 0x53;
        pbVar11[6] = pbVar11[6] ^ 0x17;
        pbVar11[7] = pbVar11[7] ^ 0x57;
        pbVar11[8] = pbVar11[8] ^ 0xf3;
        pbVar11[9] = pbVar11[9] ^ 0xed;
      }
      DAT_711acf28 = FUN_715ec410(pbVar5,pbVar11,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711acf2c);
    }
    puVar13 = auStack_80;
    DataMemoryBarrier(0xb);
    if (((DAT_711acf34 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711acf34), iVar3 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67fc);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67ec);
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = 0xe815629f;
        puVar10[1] = 0x548cd2fb;
        puVar10[2] = 0x8d0e7387;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610524,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67fc);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c67ec);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0xe9;
        pbVar5[1] = pbVar5[1] ^ 7;
        pbVar5[2] = pbVar5[2] ^ 0x7d;
        pbVar5[3] = pbVar5[3] ^ 0x8d;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x97;
        pbVar5[5] = pbVar5[5] ^ 0xb7;
        pbVar5[6] = pbVar5[6] ^ 0xe1;
        pbVar5[7] = pbVar5[7] ^ 0x31;
        pbVar5[8] = pbVar5[8] ^ 0xe9;
        pbVar5[9] = pbVar5[9] ^ 7;
        pbVar5[10] = pbVar5[10] ^ 0x7d;
        pbVar5[0xb] = pbVar5[0xb] ^ 0x8d;
      }
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c681c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c680c);
        *puVar10 = 0xe3126287;
        puVar10[1] = 0x4380d4c8;
        *(undefined1 *)((int)puVar10 + 10) = 1;
        *(undefined2 *)(puVar10 + 2) = 0x7da;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610550,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c681c);
        *puVar6 = 1;
      }
      pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c680c);
      if (pbVar11[10] != 0) {
        *pbVar11 = *pbVar11 ^ 0xe9;
        pbVar11[1] = pbVar11[1] ^ 7;
        pbVar11[2] = pbVar11[2] ^ 0x7d;
        pbVar11[3] = pbVar11[3] ^ 0x8d;
        pbVar11[10] = 0;
        pbVar11[4] = pbVar11[4] ^ 0x97;
        pbVar11[5] = pbVar11[5] ^ 0xb7;
        pbVar11[6] = pbVar11[6] ^ 0xe1;
        pbVar11[7] = pbVar11[7] ^ 0x31;
        pbVar11[8] = pbVar11[8] ^ 0xe9;
        pbVar11[9] = pbVar11[9] ^ 7;
      }
      DAT_711acf30 = FUN_715ec410(pbVar5,pbVar11,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711acf34);
    }
    iVar3 = *(int *)(param_1 + 0xc);
    puVar15 = *(uint **)(iVar3 + 0x14);
    uStack_38 = puVar15[0xc];
    uStack_34 = puVar15[0xd];
    uStack_30 = puVar15[0xe];
    puVar12 = puVar15 + 1;
    bVar1 = *(byte *)(param_1 + 0x780);
    bVar18 = (bVar1 & 1) != 0;
    puVar2 = puVar12;
    if (bVar18) {
      puVar2 = DAT_711acf20;
    }
    if (bVar18 && puVar2 != (uint *)0x0) {
      uVar14 = *(undefined4 *)(iVar3 + 0x18);
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c683c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c682c);
        *puVar10 = 0x6554b83b;
        puVar10[1] = 0x45fa43a5;
        puVar10[2] = 0x6a4f8e21;
        puVar13 = (undefined1 *)0x1;
        *(undefined1 *)((int)puVar10 + 0xf) = 1;
        *(undefined4 *)((int)puVar10 + 0xb) = 0x9545916a;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161057c,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c683c);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c682c);
      if (pbVar5[0xf] != 0) {
        *pbVar5 = *pbVar5 ^ 0x55;
        pbVar5[1] = pbVar5[1] ^ 0xdd;
        pbVar5[2] = pbVar5[2] ^ 0x3b;
        pbVar5[3] = pbVar5[3] ^ 0xb;
        pbVar5[0xf] = 0;
        pbVar5[4] = pbVar5[4] ^ 0xe3;
        pbVar5[5] = pbVar5[5] ^ 0x31;
        pbVar5[6] = pbVar5[6] ^ 0x95;
        pbVar5[7] = pbVar5[7] ^ 0x2b;
        pbVar5[8] = pbVar5[8] ^ 0x55;
        pbVar5[9] = pbVar5[9] ^ 0xdd;
        pbVar5[10] = pbVar5[10] ^ 0x3b;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xb;
        pbVar5[0xc] = pbVar5[0xc] ^ 0xe3;
        pbVar5[0xd] = pbVar5[0xd] ^ 0x31;
        pbVar5[0xe] = pbVar5[0xe] ^ 0x95;
      }
      iVar3 = FUN_713fd1dc(uVar14);
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c685c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c684c);
        *(undefined2 *)(puVar10 + 3) = 0x133;
        *puVar10 = 0x850a1809;
        puVar10[1] = 0x5942db75;
        puVar10[2] = 0x8f0b3813;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716105ac,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c685c);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c684c);
      if (pbVar5[0xd] != 0) {
        *pbVar5 = *pbVar5 ^ 0x67;
        pbVar5[1] = pbVar5[1] ^ 0x7d;
        pbVar5[2] = pbVar5[2] ^ 0x65;
        pbVar5[3] = pbVar5[3] ^ 0xeb;
        pbVar5[0xd] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x33;
        pbVar5[5] = pbVar5[5] ^ 0xa9;
        pbVar5[6] = pbVar5[6] ^ 0x2d;
        pbVar5[7] = pbVar5[7] ^ 0x37;
        pbVar5[8] = pbVar5[8] ^ 0x67;
        pbVar5[9] = pbVar5[9] ^ 0x7d;
        pbVar5[10] = pbVar5[10] ^ 0x65;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xeb;
        pbVar5[0xc] = pbVar5[0xc] ^ 0x33;
      }
      puVar6 = (undefined1 *)FUN_713fd1dc(uVar14);
      if (iVar3 != 0) {
        puVar13 = puVar6;
      }
      uVar14 = 0x40400000;
      uVar16 = 0x40000000;
      if (iVar3 != 0 && puVar6 != (undefined1 *)0x0) {
        FUN_7133f914(auStack_80,iVar3 + 0x10,0);
        FUN_7133f914(auStack_c8,puVar13 + 0x10,0);
        uVar17 = uStack_4c;
        uVar7 = uStack_50;
        uVar16 = uStack_98;
        FUN_7133fdcc();
        FUN_7133fdcc(auStack_80);
        uVar14 = FUN_71ba21e8(uVar17 & 0x7fffffff,0x3fc318fc);
        uVar7 = FUN_71ba240c(uVar7,uVar16);
        uVar16 = FUN_71ba21e8(uVar7 & 0x7fffffff,0x3fb42d8c);
      }
      uVar7 = puVar15[4];
      uVar17 = *puVar12;
      uVar8 = FUN_71ba21e8(uVar14,puVar15[5]);
      uVar9 = FUN_71ba21e8(uVar16,*puVar15 ^ 0x80000000);
      uVar16 = FUN_71ba21e8(uVar16,uVar17 ^ 0x80000000);
      uVar14 = FUN_71ba21e8(uVar14,uVar7);
      puVar13 = (undefined1 *)0x3e8;
      FUN_71473798(2,DAT_711acf20,&uStack_38,uVar14,uVar8,uVar9,uVar16,1000,
                   *(undefined1 *)(param_1 + 0x784),*(undefined1 *)(param_1 + 0x785),
                   *(undefined1 *)(param_1 + 0x786),0x3f800000,1,0x3f800000,0,1);
      bVar1 = *(byte *)(param_1 + 0x780);
      iVar3 = extraout_r1;
    }
    bVar18 = (bVar1 & 2) != 0;
    if (bVar18) {
      iVar3 = DAT_711acf28;
    }
    if (bVar18 && iVar3 != 0) {
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c687c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c686c);
        puVar13 = (undefined1 *)0x1;
        *puVar10 = 0x99d2daed;
        puVar10[1] = 0xa342029;
        puVar10[2] = 0x85dccbd0;
        *(undefined1 *)((int)puVar10 + 0xe) = 1;
        *(undefined2 *)(puVar10 + 3) = 0x411f;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716105dc,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c687c);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c686c);
      if (pbVar5[0xe] != 0) {
        *pbVar5 = *pbVar5 ^ 0x83;
        pbVar5[1] = pbVar5[1] ^ 0xbf;
        pbVar5[2] = pbVar5[2] ^ 0xbd;
        pbVar5[3] = pbVar5[3] ^ 0xf7;
        pbVar5[0xe] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x6b;
        pbVar5[5] = pbVar5[5] ^ 0x41;
        pbVar5[6] = pbVar5[6] ^ 0x57;
        pbVar5[7] = pbVar5[7] ^ 0x61;
        pbVar5[8] = pbVar5[8] ^ 0x83;
        pbVar5[9] = pbVar5[9] ^ 0xbf;
        pbVar5[10] = pbVar5[10] ^ 0xbd;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xf7;
        pbVar5[0xc] = pbVar5[0xc] ^ 0x6b;
        pbVar5[0xd] = pbVar5[0xd] ^ 0x41;
      }
      iVar3 = FUN_713fd1dc(uVar14);
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c689c);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c688c);
        puVar13 = (undefined1 *)0x1;
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = 0x21f21a31;
        puVar10[1] = 0x46c29e23;
        puVar10[2] = 0x4ff9111a;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161060c,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c689c);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c688c);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0x5f;
        pbVar5[1] = pbVar5[1] ^ 0x7f;
        pbVar5[2] = pbVar5[2] ^ 0x9d;
        pbVar5[3] = pbVar5[3] ^ 0x4f;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x61;
        pbVar5[5] = ~pbVar5[5];
        pbVar5[6] = pbVar5[6] ^ 0xa1;
        pbVar5[7] = pbVar5[7] ^ 0x2d;
        pbVar5[8] = pbVar5[8] ^ 0x5f;
        pbVar5[9] = pbVar5[9] ^ 0x7f;
        pbVar5[10] = pbVar5[10] ^ 0x9d;
        pbVar5[0xb] = pbVar5[0xb] ^ 0x4f;
      }
      puVar6 = (undefined1 *)FUN_713fd1dc(uVar14);
      if (iVar3 != 0) {
        puVar13 = puVar6;
      }
      uVar14 = 0x40400000;
      uVar16 = 0x40000000;
      if (iVar3 != 0 && puVar6 != (undefined1 *)0x0) {
        FUN_7133f914(auStack_80,iVar3 + 0x10,0);
        FUN_7133f914(auStack_c8,puVar13 + 0x10,0);
        uVar17 = uStack_4c;
        uVar7 = uStack_50;
        FUN_7133fdcc();
        FUN_7133fdcc(auStack_80);
        uVar14 = FUN_71ba21e8(uVar17 & 0x7fffffff,0x3fc318fc);
        uVar7 = FUN_71ba240c(uVar7,uStack_98);
        uVar16 = FUN_71ba21e8(uVar7 & 0x7fffffff,0x3fb42d8c);
      }
      uVar17 = *puVar12;
      uVar7 = puVar15[4];
      uVar8 = FUN_71ba21e8(uVar14,puVar15[5]);
      uVar9 = FUN_71ba21e8(uVar16,*puVar15 ^ 0x80000000);
      uVar16 = FUN_71ba21e8(uVar16,uVar17 ^ 0x80000000);
      uVar14 = FUN_71ba21e8(uVar14,uVar7);
      puVar13 = (undefined1 *)0x3f800000;
      FUN_71473798(2,DAT_711acf28,&uStack_38,uVar14,uVar8,uVar9,uVar16,1000,
                   *(undefined1 *)(param_1 + 0x784),*(undefined1 *)(param_1 + 0x785),
                   *(undefined1 *)(param_1 + 0x786),0x3f800000,1,0x3f800000,0,1);
      bVar1 = *(byte *)(param_1 + 0x780);
    }
    bVar18 = (bVar1 & 4) != 0;
    uVar7 = (uint)bVar1;
    if (bVar18) {
      uVar7 = DAT_711acf30;
    }
    if (bVar18 && uVar7 != 0) {
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68bc);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68ac);
        puVar13 = (undefined1 *)0x1;
        *puVar10 = 0x9ff4bc4f;
        puVar10[1] = 0x75b7e87d;
        puVar10[2] = 0x83faad72;
        *(undefined1 *)((int)puVar10 + 0xe) = 1;
        *(undefined2 *)(puVar10 + 3) = 0x8d45;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610638,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68bc);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68ac);
      if (pbVar5[0xe] != 0) {
        *pbVar5 = *pbVar5 ^ 0x21;
        pbVar5[1] = pbVar5[1] ^ 0xd9;
        pbVar5[2] = pbVar5[2] ^ 0x9b;
        pbVar5[3] = pbVar5[3] ^ 0xf1;
        pbVar5[0xe] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x31;
        pbVar5[5] = pbVar5[5] ^ 0x8d;
        pbVar5[6] = pbVar5[6] ^ 0xd1;
        pbVar5[7] = pbVar5[7] ^ 1;
        pbVar5[8] = pbVar5[8] ^ 0x21;
        pbVar5[9] = pbVar5[9] ^ 0xd9;
        pbVar5[10] = pbVar5[10] ^ 0x9b;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xf1;
        pbVar5[0xc] = pbVar5[0xc] ^ 0x31;
        pbVar5[0xd] = pbVar5[0xd] ^ 0x8d;
      }
      iVar3 = FUN_713fd1dc(uVar14);
      uVar14 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68dc);
      if (*pcVar4 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68cc);
        puVar13 = (undefined1 *)0x1;
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = 0x99fc2063;
        puVar10[1] = 0xf3d36861;
        puVar10[2] = 0xf7f72b48;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610668,puVar10,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68dc);
        *puVar6 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68cc);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0xd;
        pbVar5[1] = pbVar5[1] ^ 0x45;
        pbVar5[2] = pbVar5[2] ^ 0x93;
        pbVar5[3] = pbVar5[3] ^ 0xf7;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x2d;
        pbVar5[5] = pbVar5[5] ^ 0xd;
        pbVar5[6] = pbVar5[6] ^ 0xb5;
        pbVar5[7] = pbVar5[7] ^ 0x87;
        pbVar5[8] = pbVar5[8] ^ 0xd;
        pbVar5[9] = pbVar5[9] ^ 0x45;
        pbVar5[10] = pbVar5[10] ^ 0x93;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xf7;
      }
      puVar6 = (undefined1 *)FUN_713fd1dc(uVar14);
      uVar14 = 0x3fe66666;
      if (iVar3 != 0) {
        puVar13 = puVar6;
      }
      uVar16 = 0x40400000;
      if (iVar3 != 0 && puVar6 != (undefined1 *)0x0) {
        FUN_7133f914(auStack_80,iVar3 + 0x10,0);
        FUN_7133f914(auStack_c8,puVar13 + 0x10,0);
        FUN_7133fdcc();
        FUN_7133fdcc(auStack_80);
        uVar7 = FUN_71ba240c(uStack_4c,uStack_94);
        uVar16 = FUN_71ba21e8(uVar7 & 0x7fffffff,0x3fccdd2f);
        uVar14 = FUN_71ba21e8(uStack_50 & 0x7fffffff,0x401cfdf4);
      }
      uVar17 = *puVar12;
      uVar7 = puVar15[4];
      uVar8 = FUN_71ba21e8(uVar16,puVar15[5]);
      uVar9 = FUN_71ba21e8(uVar14,*puVar15 ^ 0x80000000);
      uVar14 = FUN_71ba21e8(uVar14,uVar17 ^ 0x80000000);
      uVar16 = FUN_71ba21e8(uVar16,uVar7);
      FUN_71473798(2,DAT_711acf30,&uStack_38,uVar16,uVar8,uVar9,uVar14,1000,
                   *(undefined1 *)(param_1 + 0x784),*(undefined1 *)(param_1 + 0x785),
                   *(undefined1 *)(param_1 + 0x786),0x3f800000,1,0x3f800000,0,1);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7160e8b0
// Entry: 0x7160e8b0 | Size: 28 bytes
// =========================================================================

void FUN_7160e8b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = FUN_71350794(*(undefined4 *)(param_1 + 0xc));
  iVar1 = DAT_710ead54;
  if ((iVar2 != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0x14) != 0)) {
    uVar3 = DAT_70ffd280;
    if (*(int *)(param_1 + 0x760) != 0) {
      iVar2 = 0;
      do {
        bVar5 = *(char *)(iVar1 + iVar2) != '\0';
        iVar4 = 0;
        if (bVar5) {
          iVar4 = *(int *)(iVar1 + iVar2 + 4);
        }
        if ((bVar5 && iVar4 != 0) && (*(int *)(iVar4 + 0x10) == *(int *)(param_1 + 0xc))) {
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        uVar3 = DAT_70ffd280;
        iVar2 = iVar2 + 8;
      } while (iVar2 != 0x100);
      if (*(int *)(param_1 + 0x760) != 0) {
        FUN_7144d7ac(DAT_70ffd280);
        *(undefined4 *)(param_1 + 0x760) = 0;
      }
    }
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uVar3 = FUN_7144d354(uVar3,param_2,&uStack_28,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14),1)
    ;
    *(undefined4 *)(param_1 + 0x760) = uVar3;
    FUN_7144e57c();
  }
  return;
}


// =========================================================================
// Function: FUN_7160eab4
// Entry: 0x7160eab4 | Size: 368 bytes
// =========================================================================

void FUN_7160eab4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  
  param_1 = param_1 + param_2 * 0x18;
  piVar6 = (int *)(param_1 + 0x788);
  if (*piVar6 != 0) {
    FUN_7143d364();
  }
  *piVar6 = 0;
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68fc);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68ec);
    *puVar4 = 0xb2f8c09f;
    *(undefined1 *)((int)puVar4 + 7) = 1;
    *(undefined4 *)((int)puVar4 + 3) = 0xeffe13b2;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71610694,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68fc);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c68ec);
  if (pbVar2[7] != 0) {
    pbVar2[7] = 0;
    *pbVar2 = *pbVar2 ^ 0xfb;
    pbVar2[1] = pbVar2[1] ^ 0xa5;
    pbVar2[2] = pbVar2[2] ^ 0x9b;
    pbVar2[3] = pbVar2[3] ^ 0xd3;
    pbVar2[4] = pbVar2[4] ^ 0x7f;
    pbVar2[5] = pbVar2[5] ^ 0x8d;
    pbVar2[6] = pbVar2[6] ^ 0xef;
  }
  iVar3 = FUN_715ec410(pbVar2,param_3,0);
  *piVar6 = iVar3;
  *(undefined4 *)(param_1 + 0x78c) = *param_4;
  *(undefined4 *)(param_1 + 0x790) = param_4[1];
  *(undefined4 *)(param_1 + 0x798) = param_5;
  *(undefined4 *)(param_1 + 0x794) = param_6;
  *(undefined1 *)(param_1 + 0x79c) = param_7;
  *(undefined1 *)(param_1 + 0x79d) = param_8;
  return;
}


// =========================================================================
// Function: FUN_7160edc0
// Entry: 0x7160edc0 | Size: 84 bytes
// =========================================================================

void FUN_7160edc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -0xf0;
  do {
    iVar2 = param_1 + iVar1;
    if (*(int *)(iVar2 + 0x878) != 0) {
      FUN_7143d364();
    }
    *(undefined4 *)(iVar2 + 0x878) = 0;
    if (*(int *)(iVar2 + 0x968) != 0) {
      FUN_7143d364();
    }
    iVar1 = iVar1 + 0x18;
    *(undefined4 *)(iVar2 + 0x968) = 0;
  } while (iVar1 != 0);
  return;
}


// =========================================================================
// Function: FUN_7160ee64
// Entry: 0x7160ee64 | Size: 368 bytes
// =========================================================================

void FUN_7160ee64(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  
  param_1 = param_1 + param_2 * 0x18;
  piVar6 = (int *)(param_1 + 0x878);
  if (*piVar6 != 0) {
    FUN_7143d364();
  }
  *piVar6 = 0;
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c691c);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c690c);
    *puVar4 = 0x8c16d8e5;
    *(undefined1 *)((int)puVar4 + 7) = 1;
    *(undefined4 *)((int)puVar4 + 3) = 0x179ec78c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716106bc,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c691c);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c690c);
  if (pbVar2[7] != 0) {
    pbVar2[7] = 0;
    *pbVar2 = *pbVar2 ^ 0x81;
    pbVar2[1] = pbVar2[1] ^ 0xbd;
    pbVar2[2] = pbVar2[2] ^ 0x75;
    pbVar2[3] = pbVar2[3] ^ 0xed;
    pbVar2[4] = pbVar2[4] ^ 0xab;
    pbVar2[5] = pbVar2[5] ^ 0xed;
    pbVar2[6] = pbVar2[6] ^ 0x17;
  }
  iVar3 = FUN_715ec410(pbVar2,param_3,0);
  *piVar6 = iVar3;
  *(undefined4 *)(param_1 + 0x87c) = *param_4;
  *(undefined4 *)(param_1 + 0x880) = param_4[1];
  *(undefined4 *)(param_1 + 0x888) = param_5;
  *(undefined4 *)(param_1 + 0x884) = param_6;
  *(undefined1 *)(param_1 + 0x88c) = param_7;
  *(undefined1 *)(param_1 + 0x88d) = param_8;
  return;
}


// =========================================================================
// Function: FUN_7160f170
// Entry: 0x7160f170 | Size: 176 bytes
// =========================================================================

void FUN_7160f170(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  uStack_20 = param_2;
  FUN_71569dc4(DAT_711a3938,&uStack_20);
  FUN_715d33c8(&DAT_70082fe6,uStack_20);
  iVar1 = FUN_715d33c8(&DAT_70082ff8,uStack_20);
  if (iVar1 == 0) {
    iVar1 = -9;
    do {
      iVar2 = iVar1;
      imp_usleep(5);
      iVar1 = FUN_715d33c8(&DAT_70082ff8,uStack_20);
      if (iVar1 != 0) break;
      iVar1 = iVar2 + 1;
    } while (iVar2 != 0);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_715d33c8(&DAT_7008300a,*(undefined4 *)(param_1 + 8),uStack_20,auStack_1c);
  return;
}


// =========================================================================
// Function: FUN_7160f410
// Entry: 0x7160f410 | Size: 252 bytes
// =========================================================================

void FUN_7160f410(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *apuStack_38 [3];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  
  if (param_2 == param_3) {
    return;
  }
  do {
    piVar1 = (int *)FUN_7160f578(param_1,param_1 + 1,&uStack_28,auStack_2c,param_2 + 4);
    if (*piVar1 == 0) {
      FUN_7160f768(apuStack_38,param_1,param_2 + 4);
      *apuStack_38[0] = 0;
      apuStack_38[0][1] = 0;
      apuStack_38[0][2] = uStack_28;
      *piVar1 = (int)apuStack_38[0];
      puVar2 = apuStack_38[0];
      if (*(int *)*param_1 != 0) {
        *param_1 = *(int *)*param_1;
        puVar2 = (undefined4 *)*piVar1;
      }
      FUN_712f807c(param_1[1],puVar2);
      param_1[2] = param_1[2] + 1;
    }
    piVar1 = (int *)param_2[1];
    piVar3 = param_2;
    if ((int *)param_2[1] == (int *)0x0) {
      do {
        param_2 = (int *)piVar3[2];
        bVar4 = (int *)*param_2 != piVar3;
        piVar3 = param_2;
      } while (bVar4);
    }
    else {
      do {
        param_2 = piVar1;
        piVar1 = (int *)*param_2;
      } while ((int *)*param_2 != (int *)0x0);
    }
  } while (param_2 != param_3);
  return;
}


// =========================================================================
// Function: FUN_7160f578
// Entry: 0x7160f578 | Size: 472 bytes
// =========================================================================

int * FUN_7160f578(int *param_1,int *param_2,undefined4 *param_3,int *param_4,uint *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  
  piVar5 = param_1 + 1;
  if (piVar5 != param_2) {
    uVar6 = *param_5;
    if ((uint)param_2[4] <= uVar6) {
      if (uVar6 <= (uint)param_2[4]) {
        *param_3 = param_2;
        *param_4 = (int)param_2;
        return param_4;
      }
      piVar4 = (int *)param_2[1];
      piVar1 = param_2;
      piVar3 = piVar4;
      if (piVar4 == (int *)0x0) {
        do {
          piVar2 = (int *)piVar1[2];
          bVar7 = (int *)*piVar2 != piVar1;
          piVar1 = piVar2;
        } while (bVar7);
      }
      else {
        do {
          piVar2 = piVar3;
          piVar3 = (int *)*piVar2;
        } while ((int *)*piVar2 != (int *)0x0);
      }
      if ((piVar2 == piVar5) || (uVar6 < (uint)piVar2[4])) {
        if (piVar4 == (int *)0x0) {
          *param_3 = param_2;
          piVar2 = param_2 + 1;
        }
        else {
          *param_3 = piVar2;
        }
        return piVar2;
      }
      piVar1 = (int *)*piVar5;
      if ((int *)*piVar5 == (int *)0x0) goto LAB_7160f744;
      do {
        while (piVar3 = piVar1, (uint)piVar3[4] <= uVar6) {
          if (uVar6 <= (uint)piVar3[4]) goto LAB_7160f698;
          piVar5 = piVar3 + 1;
          piVar1 = (int *)*piVar5;
          if ((int *)*piVar5 == (int *)0x0) goto LAB_7160f698;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
      goto LAB_7160f698;
    }
  }
  piVar3 = (int *)*param_2;
  piVar1 = param_2;
  if ((int *)*param_1 != param_2) {
    piVar4 = param_2;
    piVar2 = piVar3;
    if (piVar3 == (int *)0x0) {
      do {
        piVar1 = (int *)piVar4[2];
        bVar7 = (int *)*piVar1 == piVar4;
        piVar4 = piVar1;
      } while (bVar7);
    }
    else {
      do {
        piVar1 = piVar2;
        piVar2 = (int *)piVar1[1];
      } while ((int *)piVar1[1] != (int *)0x0);
    }
    uVar6 = *param_5;
    if (uVar6 <= (uint)piVar1[4]) {
      piVar1 = (int *)*piVar5;
      if ((int *)*piVar5 == (int *)0x0) {
LAB_7160f744:
        *param_3 = piVar5;
        return piVar5;
      }
      do {
        while (piVar3 = piVar1, (uint)piVar3[4] <= uVar6) {
          if (uVar6 <= (uint)piVar3[4]) goto LAB_7160f698;
          piVar5 = piVar3 + 1;
          piVar1 = (int *)*piVar5;
          if ((int *)*piVar5 == (int *)0x0) goto LAB_7160f698;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
LAB_7160f698:
      *param_3 = piVar3;
      return piVar5;
    }
  }
  if (piVar3 == (int *)0x0) {
    *param_3 = param_2;
  }
  else {
    param_2 = piVar1 + 1;
    *param_3 = piVar1;
  }
  return param_2;
}


// =========================================================================
// Function: FUN_7160f768
// Entry: 0x7160f768 | Size: 224 bytes
// =========================================================================

void FUN_7160f768(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar1 = thunk_MwhHq(0x20);
  *param_1 = iVar1;
  param_1[1] = param_2 + 4;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  pbVar7 = (byte *)param_3[1];
  pbVar5 = (byte *)param_3[2];
  *(undefined4 *)(iVar1 + 0x10) = *param_3;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  if (pbVar5 != pbVar7) {
    iVar6 = (int)pbVar5 - (int)pbVar7;
    if (0x15555555 < (uint)((iVar6 >> 2) * -0x55555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6ffc();
    }
    puVar2 = (undefined4 *)thunk_MwhHq(iVar6);
    *(undefined4 **)(iVar1 + 0x14) = puVar2;
    *(undefined4 **)(iVar1 + 0x18) = puVar2;
    *(int *)(iVar1 + 0x1c) = (int)puVar2 + iVar6;
    do {
      if ((*pbVar7 & 1) == 0) {
        uVar3 = *(undefined4 *)(pbVar7 + 4);
        uVar4 = *(undefined4 *)(pbVar7 + 8);
        *puVar2 = *(undefined4 *)pbVar7;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
      }
      else {
        FUN_712f6d58(puVar2,*(undefined4 *)(pbVar7 + 8),*(undefined4 *)(pbVar7 + 4));
      }
      pbVar7 = pbVar7 + 0xc;
      puVar2 = puVar2 + 3;
    } while (pbVar7 != pbVar5);
    *(undefined4 **)(iVar1 + 0x18) = puVar2;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// =========================================================================
// Function: FUN_716106e4
// Entry: 0x716106e4 | Size: 20 bytes
// =========================================================================

void FUN_716106e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7161074c
// Entry: 0x7161074c | Size: 20 bytes
// =========================================================================

void FUN_7161074c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71610830
// Entry: 0x71610830 | Size: 408 bytes
// =========================================================================

void FUN_71610830(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  
  piVar7 = DAT_70ffce1c;
  puVar1 = DAT_70b46448;
  if (param_1[5] != 0) {
    piVar5 = (int *)param_1[3];
    while (piVar5 != param_1 + 4) {
      piVar4 = (int *)piVar5[4];
      iVar6 = *piVar7;
      iVar8 = *piVar4;
      FUN_718042e4(piVar5[5]);
      piVar2 = *(int **)(iVar8 + iVar6);
      (**(code **)(*piVar2 + 0x1c))(piVar2,piVar5[5],0);
      FUN_7139bad4(*puVar1);
      FUN_7143d364(piVar4);
      piVar2 = (int *)piVar5[1];
      piVar4 = piVar5;
      if ((int *)piVar5[1] == (int *)0x0) {
        do {
          piVar5 = (int *)piVar4[2];
          bVar10 = (int *)*piVar5 != piVar4;
          piVar4 = piVar5;
        } while (bVar10);
      }
      else {
        do {
          piVar5 = piVar2;
          piVar2 = (int *)*piVar5;
        } while ((int *)*piVar5 != (int *)0x0);
      }
    }
    FUN_71610fcc(param_1 + 3,param_1[4]);
    param_1[3] = (int)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  piVar5 = DAT_70ffce1c;
  piVar7 = (int *)*param_1;
  while (piVar7 != param_1 + 1) {
    uVar9 = piVar7[5];
    piVar2 = *(int **)(*(int *)piVar7[4] + *piVar5);
    uVar3 = FUN_71803b98(uVar9);
    (**(code **)(*piVar2 + 0x1c))(piVar2,uVar9,uVar3);
    piVar2 = (int *)piVar7[1];
    piVar4 = piVar7;
    if ((int *)piVar7[1] == (int *)0x0) {
      do {
        piVar7 = (int *)piVar4[2];
        bVar10 = (int *)*piVar7 != piVar4;
        piVar4 = piVar7;
      } while (bVar10);
    }
    else {
      do {
        piVar7 = piVar2;
        piVar2 = (int *)*piVar7;
      } while ((int *)*piVar7 != (int *)0x0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71610acc
// Entry: 0x71610acc | Size: 316 bytes
// =========================================================================

uint FUN_71610acc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  piVar1 = (int *)thunk_MwhHq(0x24);
  piVar2 = (int *)FUN_71803864(piVar1,param_2,param_3);
  iVar3 = FUN_7143b470(*(undefined4 *)(*piVar2 + 0x50),*(undefined4 *)(*piVar2 + 0x54),0x20,0x604);
  iVar8 = *DAT_70ffce1c;
  uVar4 = FUN_7138bad8(1,*(undefined4 *)(*piVar1 + 0x50),*(undefined4 *)(*piVar1 + 0x54),0);
  *(undefined4 *)(iVar3 + iVar8) = uVar4;
  uVar5 = FUN_7143cf50(iVar3);
  piVar6 = (int *)param_1[1];
  piVar2 = param_1 + 1;
  do {
    piVar9 = piVar2;
    if (piVar6 == (int *)0x0) {
LAB_71610ba4:
      piVar7 = (int *)thunk_MwhHq(0x18);
      *piVar7 = 0;
      piVar7[4] = uVar5;
      piVar7[5] = 0;
      piVar7[1] = 0;
      piVar7[2] = (int)piVar9;
      *piVar2 = (int)piVar7;
      piVar6 = piVar7;
      if (*(int *)*param_1 != 0) {
        *param_1 = *(int *)*param_1;
        piVar6 = (int *)*piVar2;
      }
      FUN_712f807c(param_1[1],piVar6);
      param_1[2] = param_1[2] + 1;
LAB_71610bf8:
      piVar7[5] = (int)piVar1;
      return uVar5;
    }
    while (piVar7 = piVar6, (uint)piVar7[4] <= uVar5) {
      if (uVar5 <= (uint)piVar7[4]) goto LAB_71610bf8;
      piVar6 = (int *)piVar7[1];
      if ((int *)piVar7[1] == (int *)0x0) {
        piVar2 = piVar7 + 1;
        piVar9 = piVar7;
        goto LAB_71610ba4;
      }
    }
    piVar6 = (int *)*piVar7;
    piVar2 = piVar7;
  } while( true );
}


// =========================================================================
// Function: FUN_71610d04
// Entry: 0x71610d04 | Size: 452 bytes
// =========================================================================

void FUN_71610d04(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  
  piVar7 = param_1 + 1;
  piVar6 = (int *)*piVar7;
  piVar3 = piVar7;
  if (piVar6 != (int *)0x0) {
    do {
      piVar5 = piVar6;
      if ((uint)piVar6[4] < param_2) {
        piVar6 = piVar6 + 1;
        piVar5 = piVar3;
      }
      piVar6 = (int *)*piVar6;
      piVar3 = piVar5;
    } while (piVar6 != (int *)0x0);
    if ((piVar5 != piVar7) && ((uint)piVar5[4] <= param_2)) {
      iVar10 = piVar5[5];
      puVar8 = param_1 + 4;
      puVar4 = (undefined4 *)*puVar8;
      puVar9 = puVar8;
      if ((undefined4 *)*puVar8 != (undefined4 *)0x0) {
        do {
          while (puVar8 = puVar4, param_2 < (uint)puVar8[4]) {
            puVar4 = (undefined4 *)*puVar8;
            puVar9 = puVar8;
            if ((undefined4 *)*puVar8 == (undefined4 *)0x0) goto LAB_71610da8;
          }
          if (param_2 <= (uint)puVar8[4]) goto LAB_71610e0c;
          puVar4 = (undefined4 *)puVar8[1];
        } while ((undefined4 *)puVar8[1] != (undefined4 *)0x0);
        puVar9 = puVar8 + 1;
      }
LAB_71610da8:
      puVar2 = (undefined4 *)thunk_MwhHq(0x18);
      puVar2[4] = param_2;
      puVar2[5] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = puVar8;
      *puVar9 = puVar2;
      puVar4 = puVar2;
      if (*(int *)param_1[3] != 0) {
        param_1[3] = *(int *)param_1[3];
        puVar4 = (undefined4 *)*puVar9;
      }
      FUN_712f807c(param_1[4],puVar4);
      param_1[5] = param_1[5] + 1;
      puVar8 = puVar2;
LAB_71610e0c:
      puVar8[5] = iVar10;
      piVar5 = (int *)*piVar7;
      piVar3 = piVar7;
      piVar6 = piVar5;
      if (piVar5 != (int *)0x0) {
        do {
          piVar1 = piVar6;
          if ((uint)piVar6[4] < param_2) {
            piVar6 = piVar6 + 1;
            piVar1 = piVar3;
          }
          piVar6 = (int *)*piVar6;
          piVar3 = piVar1;
        } while (piVar6 != (int *)0x0);
        if ((piVar1 != piVar7) && ((uint)piVar1[4] <= param_2)) {
          piVar6 = (int *)piVar1[1];
          if ((int *)piVar1[1] == (int *)0x0) {
            do {
              piVar7 = (int *)piVar3[2];
              bVar11 = (int *)*piVar7 != piVar3;
              piVar3 = piVar7;
            } while (bVar11);
          }
          else {
            do {
              piVar7 = piVar6;
              piVar6 = (int *)*piVar7;
            } while ((int *)*piVar7 != (int *)0x0);
          }
          if ((int *)*param_1 == piVar1) {
            *param_1 = piVar7;
          }
          param_1[2] = param_1[2] + -1;
          FUN_71368054(piVar5,piVar1);
          thunk_qNQrlu(piVar1);
          return;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71610f50
// Entry: 0x71610f50 | Size: 100 bytes
// =========================================================================

bool FUN_71610f50(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar2 = (int *)(param_1 + 4);
  piVar3 = (int *)*piVar2;
  piVar4 = piVar2;
  piVar5 = piVar2;
  if (piVar3 != (int *)0x0) {
    do {
      piVar1 = piVar3;
      if ((uint)piVar3[4] < param_2) {
        piVar3 = piVar3 + 1;
        piVar1 = piVar5;
      }
      piVar3 = (int *)*piVar3;
      piVar5 = piVar1;
    } while (piVar3 != (int *)0x0);
    if ((piVar1 != piVar2) && (piVar4 = piVar1, param_2 < (uint)piVar1[4])) {
      piVar4 = piVar2;
    }
  }
  return piVar4 != piVar2;
}


// =========================================================================
// Function: FUN_71610fcc
// Entry: 0x71610fcc | Size: 60 bytes
// =========================================================================

void FUN_71610fcc(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71610fcc(param_1,*param_2);
  FUN_71610fcc(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_716116c8
// Entry: 0x716116c8 | Size: 3044 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_716116c8(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 *puVar28;
  int iVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  bool bVar32;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [3];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_71413b60(8,0);
  FUN_71413b60(6,1);
  FUN_71413b60(0xc,1);
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_71413b60(0xe,1);
  FUN_71413b60(1,0);
  FUN_71413b60(0x1d,5);
  FUN_71413b60(0x1e,0);
  iVar19 = *(int *)(param_1 + 4);
  FUN_7136cdfc(&uStack_34);
  FUN_7136cdfc(&uStack_40);
  iVar4 = FUN_7136cdfc(auStack_4c);
  iVar3 = DAT_70b46c18;
  iVar19 = iVar19 % 0x20;
  iVar20 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar20 = 0x1f;
  }
  iVar29 = 0;
  bVar2 = false;
  do {
    iVar17 = iVar19;
    bVar32 = *(char *)(param_1 + 0x308 + iVar17) != '\0';
    cVar1 = '\0';
    if (bVar32) {
      cVar1 = *(char *)(param_1 + 0x308 + iVar20);
    }
    if (bVar32 && cVar1 != '\0') {
      puVar14 = (undefined4 *)(param_1 + 8 + iVar17 * 0xc);
      uVar5 = *puVar14;
      puVar6 = puVar14 + 2;
      uVar18 = *puVar6;
      puVar15 = puVar14 + 1;
      uVar7 = *puVar15;
      puVar21 = (undefined4 *)(param_1 + 8 + iVar20 * 0xc);
      uVar31 = *puVar21;
      puVar28 = puVar21 + 2;
      uVar8 = *puVar28;
      puVar22 = puVar21 + 1;
      uVar9 = *puVar22;
      iVar19 = FUN_713c301c(0);
      puVar16 = (undefined4 *)(*(int *)(iVar19 + 0x14) + 0x30);
      if (*(int *)(iVar19 + 0x14) == 0) {
        puVar16 = (undefined4 *)(iVar19 + 4);
      }
      uVar23 = puVar16[1];
      uVar26 = puVar16[2];
      uVar10 = FUN_71ba240c(*puVar16,*puVar21);
      uVar23 = FUN_71ba240c(uVar23,*puVar22);
      uVar23 = FUN_71ba21e8(uVar23,uVar23);
      uVar10 = FUN_71ba21e8(uVar10,uVar10);
      uVar10 = FUN_71ba0b38(uVar10,uVar23);
      uVar23 = FUN_71ba240c(uVar26,*puVar28);
      uVar23 = FUN_71ba21e8(uVar23,uVar23);
      FUN_71ba0b38(uVar23,uVar10);
      uVar10 = imp_sqrtf();
      iVar19 = FUN_71ba2d10(uVar10,0x41100000);
      uVar5 = FUN_71ba240c(uVar5,uVar31);
      uVar7 = FUN_71ba240c(uVar7,uVar9);
      uVar8 = FUN_71ba240c(uVar18,uVar8);
      if (iVar19 != 0) {
        FUN_7136cdfc(&uStack_78);
        uStack_6c = 0;
        FUN_7136cdfc(&uStack_68);
        uStack_7c = 0;
        uStack_50 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        iVar19 = FUN_713e834c(puVar14,puVar21,&uStack_78,&uStack_7c,1,1,0,1,0,0,0,0);
        if (iVar19 != 0) {
          uStack_80 = 0x3da3d70a;
          uStack_88 = 0x3ecf5c29;
          uStack_94 = 0x3f800000;
          uStack_90 = 0x3f800000;
          uStack_8c = 0x3e19999a;
          uStack_84 = 0x3f800000;
          uStack_98 = 0x3f800000;
          FUN_7136d550(&uStack_b0,0x3e4ccccd,0x3fe66666);
          uVar5 = FUN_71ba21e8(uStack_60,0x40400000);
          uStack_9c = FUN_71ba21e8(uVar5,uStack_a8);
          uVar5 = FUN_71ba21e8(uStack_64,0x40400000);
          uStack_a0 = FUN_71ba21e8(uVar5,uStack_ac);
          uVar5 = FUN_71ba21e8(uStack_68,0x40400000);
          uStack_a4 = FUN_71ba21e8(uVar5,uStack_b0);
          uVar5 = FUN_71ba13e0(*DAT_70b42050,0x42480000);
          uVar5 = FUN_71ba21e8(uVar5,0x447a0000);
          uVar5 = FUN_71ba13e0(0x3f800000,uVar5);
          FUN_7145025c(*(undefined4 *)(DAT_70ffd2ec + 0x38),&uStack_78,&uStack_a4,uVar5,&uStack_98,
                       0xbf800000,0x3f99999a,0x3f19999a,0);
          break;
        }
      }
      uVar7 = FUN_71ba21e8(uVar7,uVar7);
      uVar5 = FUN_71ba21e8(uVar5,uVar5);
      uVar5 = FUN_71ba0b38(uVar5,uVar7);
      uVar7 = FUN_71ba21e8(uVar8,uVar8);
      uVar5 = FUN_71ba0b38(uVar7,uVar5);
      iVar19 = FUN_71ba2d10(uVar5,0x41c80000);
      if (iVar19 != 0) {
        uStack_e0 = *puVar28;
        uStack_dc = *puVar22;
        uStack_d8 = *puVar21;
        if (!bVar2) {
          uStack_a0 = FUN_71ba240c(*puVar15);
          uStack_9c = FUN_71ba240c(*puVar6,uStack_e0);
          uStack_a4 = FUN_71ba240c(*puVar14,uStack_d8);
          FUN_7136e43c(&uStack_bc,&uStack_a4,*(int *)(iVar3 + 0x14) + 0x10);
          uStack_78 = uStack_bc;
          uStack_74 = uStack_b8;
          uStack_70 = uStack_b4;
          FUN_7136ce28(&uStack_78);
          uStack_94 = FUN_71ba21e8(uStack_74,0x3c4ccccd);
          uVar5 = uStack_78;
          uStack_90 = FUN_71ba21e8(uStack_70,0x3c4ccccd);
          uStack_98 = FUN_71ba21e8(uVar5,0x3c4ccccd);
          FUN_7136d040(auStack_4c,&uStack_98);
          FUN_7136d550(&uStack_c8,0xbf800000,0x3f800000);
          uStack_78 = uStack_c8;
          uStack_74 = uStack_c4;
          uStack_70 = uStack_c0;
          FUN_7136ce28(&uStack_78);
          uStack_94 = FUN_71ba21e8(uStack_74,0x3c4ccccd);
          uVar5 = uStack_78;
          uStack_90 = FUN_71ba21e8(uStack_70,0x3c4ccccd);
          uStack_98 = FUN_71ba21e8(uVar5,0x3c4ccccd);
          FUN_7136d040(&uStack_34,&uStack_98);
          FUN_7136d550(&uStack_d4,0xbf800000,0x3f800000);
          uStack_78 = uStack_d4;
          uStack_74 = uStack_d0;
          uStack_70 = uStack_cc;
          FUN_7136ce28(&uStack_78);
          uStack_94 = FUN_71ba21e8(uStack_74,0x3c4ccccd);
          uVar5 = uStack_78;
          uStack_90 = FUN_71ba21e8(uStack_70,0x3c4ccccd);
          uStack_98 = FUN_71ba21e8(uVar5,0x3c4ccccd);
          FUN_7136d040(&uStack_40,&uStack_98);
          uStack_e0 = *puVar28;
          uStack_dc = *puVar22;
          uStack_d8 = *puVar21;
        }
        uVar5 = FUN_71ba1b94(iVar29);
        uVar5 = FUN_71ba21e8(uVar5,0x3d000000);
        uVar5 = FUN_71ba240c(0x3f800000,uVar5);
        FUN_71ba21e8(uVar5,0x42800000);
        iVar19 = FUN_71ba17bc();
        uVar24 = (uint)*(byte *)(param_1 + 0x3d4);
        uVar5 = (&DAT_700c6968)[uVar24 * 3];
        uVar7 = *(undefined4 *)(&DAT_700c696c + uVar24 * 0xc);
        FUN_71ba21e8(*(undefined4 *)(&DAT_700c6970 + uVar24 * 0xc),0x437f0000);
        iVar20 = FUN_71ba17bc();
        FUN_71ba21e8(uVar7,0x437f0000);
        iVar11 = FUN_71ba17bc();
        FUN_71ba21e8(uVar5,0x437f0000);
        uVar12 = FUN_71ba17bc();
        DAT_711acf74 = iVar20 << 0x10 | iVar19 << 0x18 | iVar11 << 8 | uVar12;
        DAT_711acf98 = DAT_711acf74;
        DAT_711acfbc = DAT_711acf74;
        DAT_711acfe0 = DAT_711acf74;
        DAT_711ad004 = DAT_711acf74;
        DAT_711ad028 = DAT_711acf74;
        DAT_711ad04c = DAT_711acf74;
        DAT_711ad070 = DAT_711acf74;
        DAT_711ad094 = DAT_711acf74;
        DAT_711ad0b8 = DAT_711acf74;
        DAT_711ad0dc = DAT_711acf74;
        DAT_711ad100 = DAT_711acf74;
        uVar5 = FUN_71ba1b94(iVar29 * iVar29);
        uVar5 = FUN_71ba21e8(uVar5,0x3d000000);
        uVar31 = FUN_71ba0b38(uVar5,(&DAT_700c6938)[uVar24]);
        uVar10 = FUN_71ba21e8(uVar31,uStack_38);
        uVar30 = *puVar6;
        DAT_711ad0f0 = FUN_71ba0b38(uVar10,uVar30);
        uVar18 = uStack_2c;
        uVar9 = uStack_30;
        uVar8 = uStack_34;
        uVar7 = uStack_40;
        uVar5 = auStack_4c[0];
        uVar26 = *(undefined4 *)(iVar4 + 4);
        uVar13 = *(undefined4 *)(iVar4 + 8);
        uVar27 = *puVar14;
        uVar25 = *puVar15;
        uVar23 = FUN_71ba21e8(uVar31,uStack_3c);
        DAT_711ad0ec = FUN_71ba0b38(uVar23,uVar25);
        uVar7 = FUN_71ba21e8(uVar31,uVar7);
        DAT_711ad0e8 = FUN_71ba0b38(uVar7,uVar27);
        DAT_711ad0cc = FUN_71ba240c(uVar30,uVar10);
        DAT_711ad0c8 = FUN_71ba240c(uVar25,uVar23);
        DAT_711ad0c4 = FUN_71ba240c(uVar27,uVar7);
        DAT_711ad0a8 = FUN_71ba0b38(uVar10,uStack_e0);
        DAT_711ad0a4 = FUN_71ba0b38(uVar23,uStack_dc);
        DAT_711ad0a0 = FUN_71ba0b38(uVar7,uStack_d8);
        DAT_711ad084 = FUN_71ba240c(uStack_e0,uVar10);
        DAT_711ad080 = FUN_71ba240c(uStack_dc,uVar23);
        DAT_711ad07c = FUN_71ba240c(uStack_d8,uVar7);
        uVar7 = FUN_71ba21e8(uVar31,uVar18);
        DAT_711ad060 = FUN_71ba0b38(uVar7,uVar30);
        uVar9 = FUN_71ba21e8(uVar31,uVar9);
        DAT_711ad05c = FUN_71ba0b38(uVar9,uVar25);
        uVar8 = FUN_71ba21e8(uVar31,uVar8);
        DAT_711ad058 = FUN_71ba0b38(uVar8,uVar27);
        DAT_711ad03c = FUN_71ba240c(uVar30,uVar7);
        DAT_711ad038 = FUN_71ba240c(uVar25,uVar9);
        DAT_711ad034 = FUN_71ba240c(uVar27,uVar8);
        DAT_711ad018 = FUN_71ba0b38(uVar7,uStack_e0);
        DAT_711ad014 = FUN_71ba0b38(uVar9,uStack_dc);
        DAT_711ad010 = FUN_71ba0b38(uVar8,uStack_d8);
        DAT_711acff4 = FUN_71ba240c(uStack_e0,uVar7);
        DAT_711acff0 = FUN_71ba240c(uStack_dc,uVar9);
        DAT_711acfec = FUN_71ba240c(uStack_d8,uVar8);
        uVar7 = FUN_71ba21e8(uVar31,uVar13);
        DAT_711acfd0 = FUN_71ba0b38(uVar7,uVar30);
        uVar8 = FUN_71ba21e8(uVar31,uVar26);
        DAT_711acfcc = FUN_71ba0b38(uVar8,uVar25);
        uVar5 = FUN_71ba21e8(uVar31,uVar5);
        DAT_711acfc8 = FUN_71ba0b38(uVar5,uVar27);
        DAT_711acfac = FUN_71ba240c(uVar30,uVar7);
        DAT_711acfa8 = FUN_71ba240c(uVar25,uVar8);
        DAT_711acfa4 = FUN_71ba240c(uVar27,uVar5);
        DAT_711acf88 = FUN_71ba0b38(uVar7,uStack_e0);
        DAT_711acf84 = FUN_71ba0b38(uVar8,uStack_dc);
        DAT_711acf80 = FUN_71ba0b38(uVar5,uStack_d8);
        DAT_711acf64 = FUN_71ba240c(uStack_e0,uVar7);
        DAT_711acf60 = FUN_71ba240c(uStack_dc,uVar8);
        DAT_711acf5c = FUN_71ba240c(uStack_d8,uVar5);
        iVar19 = FUN_71414c78(&DAT_711acf5c,0xc,0,0x10);
        bVar2 = true;
        if (iVar19 != 0) {
          FUN_71414834(3,&DAT_700c698c,0x12);
          FUN_714150c8();
        }
      }
    }
    iVar19 = iVar17 + -1;
    iVar29 = iVar29 + 1;
    if (iVar17 == 0) {
      iVar19 = 0x1f;
    }
    iVar20 = iVar17;
  } while (iVar29 != 0x20);
  FUN_71413b60(8,1);
  FUN_71413b60(0xc,0);
  FUN_71413b60(0xe,0);
  return;
}


// =========================================================================
// Function: FUN_71613214
// Entry: 0x71613214 | Size: 2856 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71613214(byte *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int extraout_r1;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined4 *puStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int *piStack_44;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  piStack_44 = (int *)0x0;
  pbVar18 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar18 = param_1 + 1;
  }
  FUN_714c5f6c(0,&piStack_44,pbVar18,0);
  iVar17 = extraout_r1;
  if (piStack_44 != (int *)0x0) {
    iVar17 = *piStack_44;
  }
  if (piStack_44 == (int *)0x0 || iVar17 == 0) goto LAB_71613270;
  uVar6 = FUN_714c8774();
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar6 < 0xb) {
    uVar21 = (uint)&uStack_50 | 1;
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar6 << 1));
    if (uVar6 != 0) goto LAB_716132e8;
  }
  else {
    uVar21 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_50 = (uVar6 | 7) + 2;
    uStack_4c = uVar6;
    uStack_48 = uVar21;
LAB_716132e8:
    imp___aeabi_memclr(uVar21,uVar6);
  }
  *(undefined1 *)(uVar21 + uVar6) = 0;
  uVar21 = uStack_48;
  if ((uStack_50 & 1) == 0) {
    uVar21 = (uint)&uStack_50 | 1;
  }
  FUN_714c5410(piStack_44,uVar21,uVar6);
  FUN_714c82ec(piStack_44);
  piVar7 = aiStack_40;
  piStack_30 = (int *)0x0;
  FUN_715475c8(auStack_60,&uStack_50,piVar7,1,0,0);
  if (piStack_30 == piVar7) {
    iVar17 = 0x10;
LAB_71613368:
    (**(code **)(*piVar7 + iVar17))();
  }
  else {
    iVar17 = 0x14;
    piVar7 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_71613368;
  }
  pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69b0);
  pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69d0);
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69f0);
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a10);
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a30);
  iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a50);
  iVar23 = 0;
  puStack_64 = &DAT_700c6968;
  do {
    uVar12 = FUN_71614b34(auStack_60,iVar23);
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69c0);
    if (*pcVar13 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69b0);
      *(undefined1 *)((int)puVar16 + 0xb) = 1;
      *puVar16 = 0x5cd258f3;
      puVar16[1] = 0xfcb9c03c;
      *(undefined4 *)((int)puVar16 + 7) = 0xa15df4fc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716157c0,puVar16,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69c0);
      *puVar14 = 1;
    }
    if (pbVar18[0xb] != 0) {
      *pbVar18 = *pbVar18 ^ 0x91;
      pbVar18[1] = pbVar18[1] ^ 0x39;
      pbVar18[2] = pbVar18[2] ^ 0xa1;
      pbVar18[3] = pbVar18[3] ^ 0x39;
      pbVar18[0xb] = 0;
      pbVar18[4] = pbVar18[4] ^ 99;
      pbVar18[5] = pbVar18[5] ^ 0xb3;
      pbVar18[6] = pbVar18[6] ^ 0xc9;
      pbVar18[7] = pbVar18[7] ^ 0x99;
      pbVar18[8] = pbVar18[8] ^ 0x91;
      pbVar18[9] = pbVar18[9] ^ 0x39;
      pbVar18[10] = pbVar18[10] ^ 0xa1;
    }
    puVar14 = (undefined1 *)FUN_71614c84(uVar12,pbVar18);
    switch(*puVar14) {
    case 4:
      uVar12 = 0;
      if (puVar14[8] != '\0') {
        uVar12 = 0x3f800000;
      }
      break;
    case 5:
      uVar12 = FUN_71ba19d8(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    case 6:
      uVar12 = FUN_71ba1c88(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    case 7:
      uVar12 = FUN_71ba242c(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    default:
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    (&DAT_700c692c)[iVar23] = uVar12;
    uVar12 = FUN_71614b34(auStack_60,iVar23);
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69e0);
    if (*pcVar13 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69d0);
      *(undefined2 *)(puVar16 + 2) = 0x167;
      *puVar16 = 0x500b100d;
      puVar16[1] = 0x7c7bc898;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716157ec,puVar16,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69e0);
      *puVar14 = 1;
    }
    if (pbVar8[9] != 0) {
      pbVar8[9] = 0;
      *pbVar8 = *pbVar8 ^ 0x67;
      pbVar8[1] = pbVar8[1] ^ 0x75;
      pbVar8[2] = pbVar8[2] ^ 0x7f;
      pbVar8[3] = pbVar8[3] ^ 0xf;
      pbVar8[4] = pbVar8[4] ^ 0xeb;
      pbVar8[5] = pbVar8[5] ^ 0xa1;
      pbVar8[6] = pbVar8[6] ^ 1;
      pbVar8[7] = pbVar8[7] ^ 0x19;
      pbVar8[8] = pbVar8[8] ^ 0x67;
    }
    puVar14 = (undefined1 *)FUN_71614c84(uVar12,pbVar8);
    switch(*puVar14) {
    case 4:
      uVar12 = 0;
      if (puVar14[8] != '\0') {
        uVar12 = 0x3f800000;
      }
      break;
    case 5:
      uVar12 = FUN_71ba19d8(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    case 6:
      uVar12 = FUN_71ba1c88(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    case 7:
      uVar12 = FUN_71ba242c(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    default:
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    iVar22 = 0;
    (&DAT_700c6938)[iVar23] = uVar12;
    puVar16 = puStack_64;
    do {
      uVar12 = FUN_71614b34(auStack_60,iVar23);
      pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a00);
      if (*pcVar13 == '\0') {
        puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c69f0);
        *puVar15 = 0xdc914cc4;
        *(undefined1 *)((int)puVar15 + 6) = 1;
        *(undefined2 *)(puVar15 + 1) = 0xb35d;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71615818,puVar15,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a00);
        *puVar14 = 1;
      }
      if (pbVar9[6] != 0) {
        pbVar9[6] = 0;
        *pbVar9 = *pbVar9 ^ 0xa7;
        pbVar9[1] = pbVar9[1] ^ 0x23;
        pbVar9[2] = pbVar9[2] ^ 0xfd;
        pbVar9[3] = pbVar9[3] ^ 0xb3;
        pbVar9[4] = pbVar9[4] ^ 0x2f;
        pbVar9[5] = pbVar9[5] ^ 0xb3;
      }
      uVar12 = FUN_71614c84(uVar12,pbVar9);
      puVar14 = (undefined1 *)FUN_71614b34(uVar12,iVar22);
      switch(*puVar14) {
      case 4:
        uVar12 = 0;
        if (puVar14[8] != '\0') {
          uVar12 = 0x3f800000;
        }
        break;
      case 5:
        uVar12 = FUN_71ba19d8(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
        break;
      case 6:
        uVar12 = FUN_71ba1c88(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
        break;
      case 7:
        uVar12 = FUN_71ba242c(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
        break;
      default:
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      iVar22 = iVar22 + 1;
      *puVar16 = uVar12;
      puVar16 = puVar16 + 1;
    } while (iVar22 != 3);
    uVar12 = FUN_71614b34(auStack_60,iVar23);
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a20);
    if (*pcVar13 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a10);
      *(undefined1 *)((int)puVar16 + 0xe) = 1;
      *puVar16 = 0x9c8f8b4a;
      puVar16[1] = 0x109dfaa3;
      puVar16[2] = 0x9c90804e;
      *(undefined2 *)(puVar16 + 3) = 0xa5a3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71615840,puVar16,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a20);
      *puVar14 = 1;
    }
    if (pbVar10[0xe] != 0) {
      *pbVar10 = *pbVar10 ^ 0x23;
      pbVar10[1] = pbVar10[1] ^ 0xe5;
      pbVar10[2] = ~pbVar10[2];
      pbVar10[3] = pbVar10[3] ^ 0xe9;
      pbVar10[0xe] = 0;
      pbVar10[4] = pbVar10[4] ^ 0xd7;
      pbVar10[5] = pbVar10[5] ^ 0xa5;
      pbVar10[6] = pbVar10[6] ^ 0xe9;
      pbVar10[7] = pbVar10[7] ^ 0x79;
      pbVar10[8] = pbVar10[8] ^ 0x23;
      pbVar10[9] = pbVar10[9] ^ 0xe5;
      pbVar10[10] = ~pbVar10[10];
      pbVar10[0xb] = pbVar10[0xb] ^ 0xe9;
      pbVar10[0xc] = pbVar10[0xc] ^ 0xd7;
      pbVar10[0xd] = pbVar10[0xd] ^ 0xa5;
    }
    puVar14 = (undefined1 *)FUN_71614c84(uVar12);
    switch(*puVar14) {
    case 4:
      uVar6 = (uint)(byte)puVar14[8];
      break;
    case 5:
    case 6:
      uVar6 = *(uint *)(puVar14 + 8);
      break;
    case 7:
      uVar6 = FUN_71ba173c(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    default:
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    (&DAT_700c6944)[iVar23] = uVar6;
    uVar12 = FUN_71614b34(auStack_60,iVar23);
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a40);
    if (*pcVar13 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a30);
      *(undefined1 *)((int)puVar16 + 0xf) = 1;
      *puVar16 = 0xbc584d2c;
      puVar16[1] = 0xa5fae039;
      puVar16[2] = 0xbd4b582b;
      *(undefined4 *)((int)puVar16 + 0xb) = 0x93d336bd;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71615870,puVar16,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a40);
      *puVar14 = 1;
    }
    if (pbVar11[0xf] != 0) {
      *pbVar11 = *pbVar11 ^ 0x5f;
      pbVar11[1] = pbVar11[1] ^ 0x3d;
      pbVar11[2] = pbVar11[2] ^ 0x39;
      pbVar11[3] = pbVar11[3] ^ 0xcb;
      pbVar11[0xf] = 0;
      pbVar11[4] = pbVar11[4] ^ 0x57;
      pbVar11[5] = pbVar11[5] ^ 0xbf;
      pbVar11[6] = pbVar11[6] ^ 0x93;
      pbVar11[7] = pbVar11[7] ^ 0xcb;
      pbVar11[8] = pbVar11[8] ^ 0x5f;
      pbVar11[9] = pbVar11[9] ^ 0x3d;
      pbVar11[10] = pbVar11[10] ^ 0x39;
      pbVar11[0xb] = pbVar11[0xb] ^ 0xcb;
      pbVar11[0xc] = pbVar11[0xc] ^ 0x57;
      pbVar11[0xd] = pbVar11[0xd] ^ 0xbf;
      pbVar11[0xe] = pbVar11[0xe] ^ 0x93;
    }
    puVar14 = (undefined1 *)FUN_71614c84(uVar12,pbVar11);
    switch(*puVar14) {
    case 4:
      uVar6 = (uint)(byte)puVar14[8];
      break;
    case 5:
    case 6:
      uVar6 = *(uint *)(puVar14 + 8);
      break;
    case 7:
      uVar6 = FUN_71ba173c(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    default:
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    (&DAT_700c6950)[iVar23] = uVar6;
    uVar12 = FUN_71614b34(auStack_60,iVar23);
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a60);
    if (*pcVar13 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a50);
      *(undefined1 *)((int)puVar16 + 0x11) = 1;
      uVar5 = DAT_70083044;
      uVar4 = DAT_70083040;
      uVar3 = DAT_7008303c;
      *puVar16 = DAT_70083038;
      puVar16[1] = uVar3;
      puVar16[2] = uVar4;
      puVar16[3] = uVar5;
      *(undefined1 *)(puVar16 + 4) = DAT_70083048;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716158a0,puVar16,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a60);
      *puVar14 = 1;
    }
    if (*(char *)(iVar17 + 0x11) != '\0') {
      uVar6 = 0;
      uVar21 = 0;
      do {
        iVar22 = (uVar6 & 7) * 8;
        uVar19 = iVar22 - 0x20;
        bVar20 = (byte)(0x6f2d0fbb >> iVar22) |
                 (byte)(-0x6068041d << ((uVar6 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar19) {
          bVar20 = (byte)(0x9f97fbe3 >> (uVar19 & 0xff));
        }
        *(byte *)(iVar17 + uVar6) = *(byte *)(iVar17 + uVar6) ^ bVar20;
        bVar24 = 0xfffffffe < uVar6;
        bVar1 = uVar21 == 0;
        bVar2 = (0xf < uVar6) <= uVar21;
        uVar6 = uVar6 + 1;
        uVar21 = uVar21 + bVar24;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar17 + 0x11) = 0;
    }
    puVar14 = (undefined1 *)FUN_71614c84(uVar12,iVar17);
    switch(*puVar14) {
    case 4:
      uVar6 = (uint)(byte)puVar14[8];
      break;
    case 5:
    case 6:
      uVar6 = *(uint *)(puVar14 + 8);
      break;
    case 7:
      uVar6 = FUN_71ba173c(*(undefined4 *)(puVar14 + 8),*(undefined4 *)(puVar14 + 0xc));
      break;
    default:
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    (&DAT_700c695c)[iVar23] = uVar6;
    iVar23 = iVar23 + 1;
    puStack_64 = puStack_64 + 3;
  } while (iVar23 != 3);
  FUN_7152f750(auStack_58,auStack_60[0]);
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
LAB_71613270:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71614b34
// Entry: 0x71614b34 | Size: 200 bytes
// =========================================================================

int FUN_71614b34(char *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    puVar2 = (undefined4 *)thunk_MwhHq(0xc);
    *(undefined4 **)(param_1 + 8) = puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  else if (*param_1 != '\x02') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  piVar7 = *(int **)(param_1 + 8);
  puVar3 = (undefined1 *)piVar7[1];
  uVar1 = (int)puVar3 - *piVar7 >> 4;
  if (uVar1 <= param_2) {
    uVar4 = param_2 + 1;
    if (uVar1 < uVar4) {
      FUN_716158d4(piVar7,uVar4 - uVar1);
    }
    else if (uVar4 < uVar1) {
      puVar5 = (undefined1 *)(*piVar7 + uVar4 * 0x10);
      if (puVar3 != puVar5) {
        puVar3 = puVar3 + -8;
        do {
          puVar6 = puVar3 + -8;
          FUN_7152f750(puVar3,*puVar6);
          puVar3 = puVar3 + -0x10;
        } while (puVar6 != puVar5);
      }
      piVar7[1] = (int)puVar5;
    }
  }
  return **(int **)(param_1 + 8) + param_2 * 0x10;
}


// =========================================================================
// Function: FUN_71614c84
// Entry: 0x71614c84 | Size: 192 bytes
// =========================================================================

undefined4 FUN_71614c84(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar3 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_71614d00;
  }
  else {
    uVar3 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_2,uVar1);
LAB_71614d00:
  *(undefined1 *)(uVar3 + uVar1) = 0;
  uVar2 = FUN_715915c8(param_1,&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71614e04
// Entry: 0x71614e04 | Size: 472 bytes
// =========================================================================

void FUN_71614e04(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_5;
  uStack_34 = param_8;
  uStack_38 = param_7;
  uStack_3c = param_6;
  iVar5 = *DAT_70b4204c;
  for (piVar2 = DAT_711acf50; uStack_30 = param_3, uStack_2c = param_4, piVar2 != DAT_711acf54;
      piVar2 = piVar2 + 2) {
    if (*(int *)*piVar2 == param_1) {
      FUN_7136d040((int *)*piVar2 + 0xec,&uStack_30);
      FUN_7136d040(*piVar2 + 0x3bc,&uStack_3c);
      *(int *)(*piVar2 + 0x3a8) = iVar5;
      *(undefined1 *)(*piVar2 + 0x3d5) = 1;
      return;
    }
  }
  piVar2 = (int *)thunk_MwhHq(0x3e4);
  piVar2[2] = 0;
  piVar4 = piVar2 + 3;
  piVar3 = piVar2 + 1;
  *piVar3 = 0;
  *piVar2 = (int)&DAT_70b0ee08;
  imp___aeabi_memclr4(piVar4,0x3d8);
  FUN_71615c34(piVar4);
  *(undefined1 *)(piVar2 + 0xf8) = param_2;
  piVar2[3] = param_1;
  piStack_44 = piVar4;
  piStack_40 = piVar2;
  FUN_7136d040(piVar2 + 0xef,&uStack_30);
  FUN_7136d040(piVar2 + 0xf2,&uStack_3c);
  piVar2[0xed] = iVar5;
  *(undefined1 *)((int)piVar2 + 0x3e1) = 1;
  piVar2[0xee] = 0;
  if (DAT_711acf54 < DAT_711acf58) {
    *DAT_711acf54 = (int)piVar4;
    DAT_711acf54[1] = (int)piVar2;
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
    DAT_711acf54 = DAT_711acf54 + 2;
  }
  else {
    DAT_711acf54 = (int *)FUN_71616608(&DAT_711acf50,&piStack_44);
    piVar2 = piStack_40;
    if (piStack_40 == (int *)0x0) {
      return;
    }
  }
  piVar3 = piVar2 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 != 0) {
    return;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar2);
  return;
}


// =========================================================================
// Function: FUN_716158d4
// Entry: 0x716158d4 | Size: 364 bytes
// =========================================================================

void FUN_716158d4(int *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  
  puVar2 = (undefined1 *)param_1[1];
  if ((uint)(param_1[2] - (int)puVar2 >> 4) < param_2) {
    iVar6 = (int)puVar2 - *param_1 >> 4;
    uVar12 = param_2 + iVar6;
    if (0xfffffff < uVar12) {
      FUN_7152fef0(param_1);
LAB_71615a3c:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar3 = param_1[2] - *param_1;
    uVar1 = (int)uVar3 >> 3;
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    if (0x7fffffef < uVar3) {
      uVar12 = 0xfffffff;
    }
    iVar4 = 0;
    if (uVar12 != 0) {
      if (0xfffffff < uVar12) goto LAB_71615a3c;
      iVar4 = thunk_MwhHq(uVar12 << 4);
    }
    puVar7 = (undefined1 *)(iVar4 + iVar6 * 0x10);
    puVar2 = puVar7;
    do {
      *(undefined4 *)(puVar2 + 8) = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 0x10;
    } while (puVar2 != puVar7 + param_2 * 0x10);
    puVar5 = (undefined4 *)*param_1;
    puVar14 = (undefined4 *)param_1[1];
    iVar6 = (int)puVar5 - (int)puVar14;
    puVar8 = puVar5;
    puVar9 = (undefined4 *)(puVar7 + iVar6);
    if (iVar6 != 0) {
      do {
        uVar10 = puVar8[1];
        uVar11 = puVar8[2];
        uVar13 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar10;
        puVar9[2] = uVar11;
        puVar9[3] = uVar13;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *(undefined1 *)puVar8 = 0;
        puVar8 = puVar8 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar8 != puVar14);
      do {
        puVar8 = puVar5 + 4;
        FUN_7152f750(puVar5 + 2,*(undefined1 *)puVar5);
        puVar5 = puVar8;
      } while (puVar8 != puVar14);
      puVar14 = (undefined4 *)*param_1;
    }
    *param_1 = (int)(puVar7 + iVar6);
    param_1[1] = (int)(puVar7 + param_2 * 0x10);
    param_1[2] = iVar4 + uVar12 * 0x10;
    if (puVar14 != (undefined4 *)0x0) {
      thunk_qNQrlu(puVar14);
      return;
    }
  }
  else {
    puVar7 = puVar2;
    if (param_2 != 0) {
      puVar7 = puVar2 + param_2 * 0x10;
      do {
        *(undefined4 *)(puVar2 + 8) = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x10;
      } while (puVar2 != puVar7);
    }
    param_1[1] = (int)puVar7;
  }
  return;
}


// =========================================================================
// Function: FUN_71615be0
// Entry: 0x71615be0 | Size: 4 bytes
// =========================================================================

void FUN_71615be0(void)

{
  return;
}


// =========================================================================
// Function: FUN_71615c34
// Entry: 0x71615c34 | Size: 588 bytes
// =========================================================================

undefined4 * FUN_71615c34(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_7136cdfc(param_1 + 2);
  FUN_7136cdfc(param_1 + 5);
  FUN_7136cdfc(param_1 + 8);
  FUN_7136cdfc(param_1 + 0xb);
  FUN_7136cdfc(param_1 + 0xe);
  FUN_7136cdfc(param_1 + 0x11);
  FUN_7136cdfc(param_1 + 0x14);
  FUN_7136cdfc(param_1 + 0x17);
  FUN_7136cdfc(param_1 + 0x1a);
  FUN_7136cdfc(param_1 + 0x1d);
  FUN_7136cdfc(param_1 + 0x20);
  FUN_7136cdfc(param_1 + 0x23);
  FUN_7136cdfc(param_1 + 0x26);
  FUN_7136cdfc(param_1 + 0x29);
  FUN_7136cdfc(param_1 + 0x2c);
  FUN_7136cdfc(param_1 + 0x2f);
  FUN_7136cdfc(param_1 + 0x32);
  FUN_7136cdfc(param_1 + 0x35);
  FUN_7136cdfc(param_1 + 0x38);
  FUN_7136cdfc(param_1 + 0x3b);
  FUN_7136cdfc(param_1 + 0x3e);
  FUN_7136cdfc(param_1 + 0x41);
  FUN_7136cdfc(param_1 + 0x44);
  FUN_7136cdfc(param_1 + 0x47);
  FUN_7136cdfc(param_1 + 0x4a);
  FUN_7136cdfc(param_1 + 0x4d);
  FUN_7136cdfc(param_1 + 0x50);
  FUN_7136cdfc(param_1 + 0x53);
  FUN_7136cdfc(param_1 + 0x56);
  FUN_7136cdfc(param_1 + 0x59);
  FUN_7136cdfc(param_1 + 0x5c);
  FUN_7136cdfc(param_1 + 0x5f);
  FUN_7136cdfc(param_1 + 0x62);
  FUN_7136cdfc(param_1 + 0x65);
  FUN_7136cdfc(param_1 + 0x68);
  FUN_7136cdfc(param_1 + 0x6b);
  FUN_7136cdfc(param_1 + 0x6e);
  FUN_7136cdfc(param_1 + 0x71);
  FUN_7136cdfc(param_1 + 0x74);
  FUN_7136cdfc(param_1 + 0x77);
  FUN_7136cdfc(param_1 + 0x7a);
  FUN_7136cdfc(param_1 + 0x7d);
  FUN_7136cdfc(param_1 + 0x80);
  FUN_7136cdfc(param_1 + 0x83);
  FUN_7136cdfc(param_1 + 0x86);
  FUN_7136cdfc(param_1 + 0x89);
  FUN_7136cdfc(param_1 + 0x8c);
  FUN_7136cdfc(param_1 + 0x8f);
  FUN_7136cdfc(param_1 + 0x92);
  FUN_7136cdfc(param_1 + 0x95);
  FUN_7136cdfc(param_1 + 0x98);
  FUN_7136cdfc(param_1 + 0x9b);
  FUN_7136cdfc(param_1 + 0x9e);
  FUN_7136cdfc(param_1 + 0xa1);
  FUN_7136cdfc(param_1 + 0xa4);
  FUN_7136cdfc(param_1 + 0xa7);
  FUN_7136cdfc(param_1 + 0xaa);
  FUN_7136cdfc(param_1 + 0xad);
  FUN_7136cdfc(param_1 + 0xb0);
  FUN_7136cdfc(param_1 + 0xb3);
  FUN_7136cdfc(param_1 + 0xb6);
  FUN_7136cdfc(param_1 + 0xb9);
  FUN_7136cdfc(param_1 + 0xbc);
  FUN_7136cdfc(param_1 + 0xbf);
  imp___aeabi_memclr4(param_1 + 0xc2,0xa8);
  FUN_7136cdfc(param_1 + 0xec);
  FUN_7136cdfc(param_1 + 0xef);
  FUN_7136cdfc(param_1 + 0xf2);
  *(undefined2 *)(param_1 + 0xf5) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71616608
// Entry: 0x71616608 | Size: 392 bytes
// =========================================================================

undefined4 * FUN_71616608(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar12 = (undefined4 *)*param_1;
  puVar13 = (undefined4 *)param_1[1];
  iVar8 = (int)puVar13 - (int)puVar12 >> 3;
  uVar11 = iVar8 + 1;
  if (0x1fffffff < uVar11) {
    FUN_71616834(param_1);
LAB_7161678c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  uVar1 = param_1[2] - (int)puVar12 >> 2;
  if (uVar11 < uVar1) {
    uVar11 = uVar1;
  }
  if (0x7ffffff7 < (uint)(param_1[2] - (int)puVar12)) {
    uVar11 = 0x1fffffff;
  }
  if (uVar11 == 0) {
    iVar3 = 0;
  }
  else {
    if (0x1fffffff < uVar11) goto LAB_7161678c;
    iVar3 = thunk_MwhHq(uVar11 << 3);
  }
  iVar10 = param_2[1];
  puVar4 = (undefined4 *)(iVar3 + iVar8 * 8);
  *puVar4 = *param_2;
  puVar4[1] = iVar10;
  if (iVar10 != 0) {
    piVar7 = (int *)(iVar10 + 4);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = *piVar7 + 1;
    puVar12 = (undefined4 *)*param_1;
    puVar13 = (undefined4 *)param_1[1];
    iVar8 = (int)puVar13 - (int)puVar12 >> 3;
  }
  puVar5 = puVar12;
  puVar9 = puVar4 + iVar8 * -2;
  if (puVar12 != puVar13) {
    do {
      *puVar9 = *puVar5;
      puVar9[1] = puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      puVar9 = puVar9 + 2;
    } while (puVar5 != puVar13);
    do {
      piVar7 = (int *)puVar12[1];
      if (piVar7 != (int *)0x0) {
        piVar6 = piVar7 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar10 + -1;
        DataMemoryBarrier(0xb);
        if (iVar10 == 0) {
          (**(code **)(*piVar7 + 8))(piVar7);
          thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar7);
        }
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar13);
    puVar12 = (undefined4 *)*param_1;
  }
  *param_1 = puVar4 + iVar8 * -2;
  param_1[1] = puVar4 + 2;
  param_1[2] = iVar3 + uVar11 * 8;
  if (puVar12 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar12);
  }
  return puVar4 + 2;
}


// =========================================================================
// Function: FUN_71616834
// Entry: 0x71616834 | Size: 20 bytes
// =========================================================================

void FUN_71616834(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7161695c
// Entry: 0x7161695c | Size: 36 bytes
// =========================================================================

int FUN_7161695c(int param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  FUN_71358f74(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  piVar1 = (int *)thunk_MwhHq(4);
  *piVar1 = 0;
  *(int **)(param_1 + 0x20) = piVar1;
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a80);
  if (*pcVar2 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a70);
    *puVar5 = 0x7691945a;
    *(undefined1 *)((int)puVar5 + 7) = 1;
    *(undefined4 *)((int)puVar5 + 3) = 0x27fe0576;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7161773c,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a80);
    *puVar6 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a70);
  if (pbVar3[7] != 0) {
    pbVar3[7] = 0;
    *pbVar3 = *pbVar3 ^ 0x37;
    pbVar3[1] = pbVar3[1] ^ 0xfb;
    pbVar3[2] = pbVar3[2] ^ 0xf3;
    pbVar3[3] = pbVar3[3] ^ 0x1f;
    pbVar3[4] = pbVar3[4] ^ 0x69;
    pbVar3[5] = pbVar3[5] ^ 0x9b;
    pbVar3[6] = pbVar3[6] ^ 0x27;
  }
  iVar4 = FUN_715ec410(pbVar3,param_2,1);
  if (*piVar1 != 0) {
    FUN_7143d364();
  }
  *piVar1 = iVar4;
  *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71616c9c
// Entry: 0x71616c9c | Size: 20 bytes
// =========================================================================

void FUN_71616c9c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_7143d364();
    }
    thunk_qNQrlu(piVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// =========================================================================
// Function: thunk_FUN_71616d54
// Entry: 0x71616d40 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71616d54(void)

{
  FUN_71616d54();
  return;
}


// =========================================================================
// Function: FUN_71616d54
// Entry: 0x71616d54 | Size: 8 bytes
// =========================================================================

void FUN_71616d54(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_71616d88
// Entry: 0x71616d74 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71616d88(void)

{
  FUN_71616d88();
  return;
}


// =========================================================================
// Function: FUN_71616d88
// Entry: 0x71616d88 | Size: 8 bytes
// =========================================================================

undefined1 FUN_71616d88(int param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}


// =========================================================================
// Function: FUN_71616da8
// Entry: 0x71616da8 | Size: 24 bytes
// =========================================================================

void FUN_71616da8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x2c));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71616e38
// Entry: 0x71616e38 | Size: 24 bytes
// =========================================================================

void FUN_71616e38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x2c));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


// =========================================================================
// Function: thunk_FUN_71616edc
// Entry: 0x71616ec8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_71616edc(void)

{
  FUN_71616edc();
  return;
}


// =========================================================================
// Function: FUN_71616edc
// Entry: 0x71616edc | Size: 8 bytes
// =========================================================================

void FUN_71616edc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_71616f10
// Entry: 0x71616efc | Size: 12 bytes
// =========================================================================

void thunk_FUN_71616f10(void)

{
  FUN_71616f10();
  return;
}


// =========================================================================
// Function: FUN_71616f10
// Entry: 0x71616f10 | Size: 8 bytes
// =========================================================================

void FUN_71616f10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// =========================================================================
// Function: FUN_71616f30
// Entry: 0x71616f30 | Size: 24 bytes
// =========================================================================

void FUN_71616f30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x2c));
  *param_1 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x30),param_3);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71616ff4
// Entry: 0x71616ff4 | Size: 20 bytes
// =========================================================================

void FUN_71616ff4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// =========================================================================
// Function: FUN_71617030
// Entry: 0x71617030 | Size: 608 bytes
// =========================================================================

void FUN_71617030(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = '\0';
  if (param_1[8] != 0) {
    cVar3 = *(char *)(param_1 + 6);
  }
  if (param_1[8] == 0 || cVar3 == '\0') {
    return;
  }
  FUN_71358f74(&uStack_28);
  uStack_28 = 0xffffffff;
  iVar10 = param_1[4];
  if (iVar10 == 2) {
    iVar10 = FUN_71886108();
    if ((uint)(iVar10 - param_1[5]) < 0x4b) {
      iVar10 = param_1[4];
      goto LAB_716170b4;
    }
    param_1[4] = 0;
  }
  else {
LAB_716170b4:
    if (iVar10 == 1) {
      uStack_28 = 0xffa7577a;
    }
  }
  iVar10 = FUN_7163d6b4();
  if (iVar10 == 0) goto LAB_71617218;
  pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6aa0);
  if (*pcVar11 == '\0') {
    puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a90);
    *(undefined1 *)((int)puVar13 + 0x17) = 1;
    uVar7 = DAT_70083060;
    uVar6 = DAT_7008305c;
    uVar5 = DAT_70083058;
    uVar4 = DAT_70083054;
    *puVar13 = DAT_70083050;
    puVar13[1] = uVar4;
    puVar13[2] = uVar5;
    puVar13[3] = uVar6;
    puVar13[4] = uVar7;
    uVar8 = DAT_70083066;
    *(undefined2 *)(puVar13 + 5) = DAT_70083064;
    *(undefined1 *)((int)puVar13 + 0x16) = uVar8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71617764,puVar13,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6aa0);
    *puVar14 = 1;
  }
  iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6a90);
  if (*(char *)(iVar10 + 0x17) != '\0') {
    uVar12 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar12 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar9 = (byte)(0x4167492b >> iVar15) | (byte)(0x5d5373a5 << ((uVar12 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar9 = (byte)(0x5d5373a5 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar10 + uVar12) = *(byte *)(iVar10 + uVar12) ^ bVar9;
      bVar18 = 0xfffffffe < uVar12;
      bVar1 = uVar17 == 0;
      bVar2 = (0x15 < uVar12) <= uVar17;
      uVar12 = uVar12 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar10 + 0x17) = 0;
  }
  uVar12 = imp_strlen(iVar10);
  if (0xfffffff7 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_34);
  }
  if (uVar12 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar12 << 1));
    if (uVar12 != 0) goto LAB_716171c0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar12 | 7) + 1);
    uStack_34 = (uVar12 | 7) + 2;
    uStack_30 = uVar12;
    uStack_2c = uVar17;
LAB_716171c0:
    imp___aeabi_memmove(uVar17,iVar10,uVar12);
  }
  *(undefined1 *)(uVar17 + uVar12) = 0;
  iVar10 = FUN_717c5e7c(&uStack_34);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  if (iVar10 == 0) {
    FUN_7135a238(param_1[8],*param_1,param_1[1],param_1[2],param_1[3],&uStack_28);
  }
LAB_71617218:
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// =========================================================================
// Function: FUN_71617534
// Entry: 0x71617534 | Size: 24 bytes
// =========================================================================

undefined4 FUN_71617534(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  iVar1 = FUN_71ba2d30(uVar2);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_71ba0b38(uVar2,param_1[2]);
    iVar1 = FUN_71ba2d50(uVar2,param_2);
    if (iVar1 != 0) {
      uVar2 = param_1[1];
      iVar1 = FUN_71ba2d30(uVar2,param_3);
      if (iVar1 != 0) {
        uVar3 = FUN_71ba0b38(uVar2,param_1[3]);
        iVar1 = FUN_71ba2d50(uVar3,param_3);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_71617690
// Entry: 0x71617690 | Size: 32 bytes
// =========================================================================

void FUN_71617690(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    uVar1 = FUN_71886108();
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  if (*(int *)(param_1 + 0x10) != param_2) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_7161771c
// Entry: 0x71617708 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7161771c(void)

{
  FUN_7161771c();
  return;
}


// =========================================================================
// Function: FUN_7161771c
// Entry: 0x7161771c | Size: 8 bytes
// =========================================================================

undefined4 FUN_7161771c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// =========================================================================
// Function: FUN_7161779c
// Entry: 0x7161779c | Size: 24 bytes
// =========================================================================

undefined4 FUN_7161779c(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0xa0);
  return param_1;
}


// =========================================================================
// Function: FUN_71617804
// Entry: 0x71617804 | Size: 204 bytes
// =========================================================================

void FUN_71617804(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0x20) {
    iVar2 = param_1 + 0x80;
    if ((*(char *)(iVar2 + param_2) != '\0') && (*(char *)(iVar2 + param_2) != '\0')) {
      *(undefined1 *)(iVar2 + param_2) = 0;
      if (*(int *)(param_1 + param_2 * 4) != 0) {
        FUN_71616c9c();
        thunk_qNQrlu();
      }
      *(undefined4 *)(param_1 + param_2 * 4) = 0;
    }
    uVar1 = thunk_MwhHq(0x24);
    uVar1 = FUN_7161695c(uVar1,param_7);
    *(undefined4 *)(param_1 + param_2 * 4) = uVar1;
    FUN_71616f30(uVar1,param_3,param_4);
    FUN_71616e38(*(undefined4 *)(param_1 + param_2 * 4),param_6);
    FUN_71616da8(*(undefined4 *)(param_1 + param_2 * 4),param_5);
    *(undefined1 *)(iVar2 + param_2) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_716179bc
// Entry: 0x716179bc | Size: 16 bytes
// =========================================================================

undefined4 FUN_716179bc(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x21) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_716179fc
// Entry: 0x716179fc | Size: 32 bytes
// =========================================================================

void FUN_716179fc(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + param_2 + 0x80) != '\0') {
    FUN_71617690(*(undefined4 *)(param_1 + param_2 * 4),0);
    if (param_3 == 1) {
      uVar1 = FUN_71ba1b94(param_5);
      uVar2 = FUN_71ba1b94(param_6);
      iVar3 = FUN_71617534(*(undefined4 *)(param_1 + param_2 * 4),uVar1,uVar2);
      uVar1 = 2;
    }
    else {
      if (param_3 != 3 && param_3 != 2) {
        return;
      }
      uVar1 = FUN_71ba1b94(param_5);
      uVar2 = FUN_71ba1b94(param_6);
      iVar3 = FUN_71617534(*(undefined4 *)(param_1 + param_2 * 4),uVar1,uVar2);
      uVar1 = 1;
    }
    if (iVar3 != 0) {
      FUN_71617690(*(undefined4 *)(param_1 + param_2 * 4),uVar1);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71617bc4
// Entry: 0x71617bc4 | Size: 28 bytes
// =========================================================================

void FUN_71617bc4(int param_1,uint param_2)

{
  uint extraout_r1;
  int iVar1;
  bool bVar2;
  
  iVar1 = 0;
  do {
    bVar2 = *(int *)(param_1 + iVar1 * 4) != 0;
    if (bVar2) {
      param_2 = (uint)*(byte *)(param_1 + iVar1 + 0x80);
    }
    if (bVar2 && param_2 != 0) {
      FUN_71617030();
      param_2 = extraout_r1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  return;
}


// =========================================================================
// Function: FUN_71617c50
// Entry: 0x71617c50 | Size: 6872 bytes
// =========================================================================

void FUN_71617c50(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ac0);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ab0);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar5 = DAT_70083078;
    uVar4 = DAT_70083074;
    uVar3 = DAT_70083070;
    uVar14 = DAT_7008306c;
    *puVar12 = DAT_70083068;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_7008307e;
    *(undefined2 *)(puVar12 + 5) = DAT_7008307c;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139e94c,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ac0);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ab0);
  if (*(char *)(iVar9 + 0x17) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x81e15bed >> iVar15) | (byte)(0x7fd3adb1 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x7fd3adb1 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x15 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x17) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71617d4c;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71617d4c:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_34);
  thunk_FUN_7156a9f4(iVar9 == 0,5);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ae0);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ad0);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar5 = DAT_70083090;
    uVar4 = DAT_7008308c;
    uVar3 = DAT_70083088;
    uVar14 = DAT_70083084;
    *puVar12 = DAT_70083080;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_70083096;
    *(undefined2 *)(puVar12 + 5) = DAT_70083094;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713dad50,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ae0);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ad0);
  if (*(char *)(iVar9 + 0x17) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x6f799353 >> iVar15) |
              (byte)(-0x7e7c0257 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x8183fda9 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x15 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x17) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71617e80;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71617e80:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_34);
  thunk_FUN_7156ab84(iVar9 == 0,5);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b00);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6af0);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar5 = DAT_700830a8;
    uVar4 = DAT_700830a4;
    uVar3 = DAT_700830a0;
    uVar14 = DAT_7008309c;
    *puVar12 = DAT_70083098;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_700830ae;
    *(undefined2 *)(puVar12 + 5) = DAT_700830ac;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623ccc,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b00);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6af0);
  if (*(char *)(iVar9 + 0x17) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x9b4dbd9f >> iVar15) | (byte)(0x194db9cd << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x194db9cd >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x15 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x17) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71617fb4;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71617fb4:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_34);
  thunk_FUN_7156ad48(iVar9 == 0,5);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  iVar9 = *(int *)(DAT_70ffc974 + 4);
  if (0 < iVar9) {
    iVar9 = *(int *)(DAT_70ffc974 + 8);
  }
  if (0 < iVar9) {
    FUN_7161b7b4();
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b20);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b10);
    *(undefined1 *)(puVar12 + 4) = 1;
    *puVar12 = 0x1e0c6dca;
    puVar12[1] = 0x3da45583;
    puVar12[2] = 0x24156cdc;
    puVar12[3] = 0x5795558f;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623d04,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b20);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b10);
  if (pbVar11[0x10] != 0) {
    *pbVar11 = *pbVar11 ^ 0xa9;
    pbVar11[1] = pbVar11[1] ^ 1;
    pbVar11[2] = pbVar11[2] ^ 0x65;
    pbVar11[3] = pbVar11[3] ^ 0x7b;
    pbVar11[0x10] = 0;
    pbVar11[4] = pbVar11[4] ^ 0xed;
    pbVar11[5] = pbVar11[5] ^ 0x21;
    pbVar11[6] = pbVar11[6] ^ 0xfb;
    pbVar11[7] = pbVar11[7] ^ 0x57;
    pbVar11[8] = pbVar11[8] ^ 0xa9;
    pbVar11[9] = pbVar11[9] ^ 1;
    pbVar11[10] = pbVar11[10] ^ 0x65;
    pbVar11[0xb] = pbVar11[0xb] ^ 0x7b;
    pbVar11[0xc] = pbVar11[0xc] ^ 0xed;
    pbVar11[0xd] = pbVar11[0xd] ^ 0x21;
    pbVar11[0xe] = pbVar11[0xe] ^ 0xfb;
    pbVar11[0xf] = pbVar11[0xf] ^ 0x57;
  }
  uVar10 = imp_strlen(pbVar11);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_7161816c;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_7161816c:
    imp___aeabi_memmove(uVar17,pbVar11,uVar10);
  }
  uVar14 = 0xa8;
  *(undefined1 *)(uVar17 + uVar10) = 0;
  iVar9 = DAT_70c38f30;
  if (*(int *)(DAT_70c38f30 + 0x128) == 0) {
    uVar14 = 0x1f;
  }
  FUN_71620800(&uStack_34,uVar14);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b40);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b30);
    *(undefined1 *)(puVar12 + 4) = 1;
    *puVar12 = 0xba46c93e;
    puVar12[1] = 0xba3ca7cb;
    puVar12[2] = 0x8043c63e;
    puVar12[3] = 0xdb0da7c7;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623d34,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b40);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b30);
  if (pbVar11[0x10] != 0) {
    *pbVar11 = *pbVar11 ^ 0x5d;
    pbVar11[1] = pbVar11[1] ^ 0xa5;
    pbVar11[2] = pbVar11[2] ^ 0x2f;
    pbVar11[3] = pbVar11[3] ^ 0xdf;
    pbVar11[0x10] = 0;
    pbVar11[4] = pbVar11[4] ^ 0xa5;
    pbVar11[5] = pbVar11[5] ^ 0xd3;
    pbVar11[6] = pbVar11[6] ^ 99;
    pbVar11[7] = pbVar11[7] ^ 0xdb;
    pbVar11[8] = pbVar11[8] ^ 0x5d;
    pbVar11[9] = pbVar11[9] ^ 0xa5;
    pbVar11[10] = pbVar11[10] ^ 0x2f;
    pbVar11[0xb] = pbVar11[0xb] ^ 0xdf;
    pbVar11[0xc] = pbVar11[0xc] ^ 0xa5;
    pbVar11[0xd] = pbVar11[0xd] ^ 0xd3;
    pbVar11[0xe] = pbVar11[0xe] ^ 99;
    pbVar11[0xf] = pbVar11[0xf] ^ 0xdb;
  }
  uVar10 = imp_strlen(pbVar11);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618310;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71618310:
    imp___aeabi_memmove(uVar17,pbVar11,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  uVar14 = 0x9e;
  if (*(int *)(iVar9 + 0x128) == 0) {
    uVar14 = 2;
  }
  FUN_71620800(&uStack_34,uVar14);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b60);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b50);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar5 = DAT_700830c0;
    uVar4 = DAT_700830bc;
    uVar3 = DAT_700830b8;
    uVar14 = DAT_700830b4;
    *puVar12 = DAT_700830b0;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_700830c6;
    *(undefined2 *)(puVar12 + 5) = DAT_700830c4;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623d64,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b60);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b50);
  if (*(char *)(iVar9 + 0x17) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0xafbf43e9 >> iVar15) | (byte)(0x55d5cd91 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x55d5cd91 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x15 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x17) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618444;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71618444:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,2);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b80);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b70);
    *(undefined1 *)(puVar12 + 4) = 1;
    *puVar12 = 0xf09643ac;
    puVar12[1] = 0x991c4d83;
    puVar12[2] = 0xca915da0;
    puVar12[3] = 0xf12d4d8f;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623d9c,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b80);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b70);
  if (pbVar11[0x10] != 0) {
    *pbVar11 = *pbVar11 ^ 0xcf;
    pbVar11[1] = pbVar11[1] ^ 0x2f;
    pbVar11[2] = ~pbVar11[2];
    pbVar11[3] = pbVar11[3] ^ 0x95;
    pbVar11[0x10] = 0;
    pbVar11[4] = pbVar11[4] ^ 0xed;
    pbVar11[5] = pbVar11[5] ^ 0x39;
    pbVar11[6] = pbVar11[6] ^ 0x43;
    pbVar11[7] = pbVar11[7] ^ 0xf1;
    pbVar11[8] = pbVar11[8] ^ 0xcf;
    pbVar11[9] = pbVar11[9] ^ 0x2f;
    pbVar11[10] = ~pbVar11[10];
    pbVar11[0xb] = pbVar11[0xb] ^ 0x95;
    pbVar11[0xc] = pbVar11[0xc] ^ 0xed;
    pbVar11[0xd] = pbVar11[0xd] ^ 0x39;
    pbVar11[0xe] = pbVar11[0xe] ^ 0x43;
    pbVar11[0xf] = pbVar11[0xf] ^ 0xf1;
  }
  uVar10 = imp_strlen(pbVar11);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_716185d0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_716185d0:
    imp___aeabi_memmove(uVar17,pbVar11,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,7);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ba0);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b90);
    *(undefined1 *)((int)puVar12 + 0x11) = 1;
    uVar4 = DAT_700830d4;
    uVar3 = DAT_700830d0;
    uVar14 = DAT_700830cc;
    *puVar12 = DAT_700830c8;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined1 *)(puVar12 + 4) = DAT_700830d8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623dcc,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ba0);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6b90);
  if (*(char *)(iVar9 + 0x11) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x7599e56d >> iVar15) | (byte)(0x1b07cd8f << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x1b07cd8f >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0xf < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x11) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_716186f8;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_716186f8:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,3);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bc0);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bb0);
    *puVar12 = 0x62b6f59a;
    puVar12[1] = 0x4a384759;
    puVar12[2] = 0x6580f498;
    *(undefined1 *)((int)puVar12 + 0xf) = 1;
    *(undefined4 *)((int)puVar12 + 0xb) = 0x675d4365;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623e00,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bc0);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bb0);
  if (pbVar11[0xf] != 0) {
    *pbVar11 = *pbVar11 ^ 0xf9;
    pbVar11[1] = pbVar11[1] ^ 0x99;
    pbVar11[2] = pbVar11[2] ^ 0xdf;
    pbVar11[3] = pbVar11[3] ^ 7;
    pbVar11[0xf] = 0;
    pbVar11[4] = pbVar11[4] ^ 0x37;
    pbVar11[5] = pbVar11[5] ^ 0x33;
    pbVar11[6] = pbVar11[6] ^ 0x67;
    pbVar11[7] = pbVar11[7] ^ 0x29;
    pbVar11[8] = pbVar11[8] ^ 0xf9;
    pbVar11[9] = pbVar11[9] ^ 0x99;
    pbVar11[10] = pbVar11[10] ^ 0xdf;
    pbVar11[0xb] = pbVar11[0xb] ^ 7;
    pbVar11[0xc] = pbVar11[0xc] ^ 0x37;
    pbVar11[0xd] = pbVar11[0xd] ^ 0x33;
    pbVar11[0xe] = pbVar11[0xe] ^ 0x67;
  }
  uVar10 = imp_strlen(pbVar11);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618878;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71618878:
    imp___aeabi_memmove(uVar17,pbVar11,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,0x12);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6be0);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bd0);
    *(undefined1 *)((int)puVar12 + 0x15) = 1;
    uVar5 = DAT_700830f0;
    uVar4 = DAT_700830ec;
    uVar3 = DAT_700830e8;
    uVar14 = DAT_700830e4;
    *puVar12 = DAT_700830e0;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    *(undefined1 *)(puVar12 + 5) = DAT_700830f4;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623e30,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6be0);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bd0);
  if (*(char *)(iVar9 + 0x15) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0xa37d1fd3 >> iVar15) | (byte)(-0x2b00e43 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0xfd4ff1bd >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x13 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x15) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_716189a0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_716189a0:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,0);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c00);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bf0);
    *(undefined1 *)((int)puVar12 + 0x12) = 1;
    uVar4 = DAT_70083104;
    uVar3 = DAT_70083100;
    uVar14 = DAT_700830fc;
    *puVar12 = DAT_700830f8;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined2 *)(puVar12 + 4) = DAT_70083108;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623e68,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c00);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6bf0);
  if (*(char *)(iVar9 + 0x12) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x8f4359cd >> iVar15) |
              (byte)(-0x7ef6869f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x81097961 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x10 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x12) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619768;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618ac8;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71618ac8:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,0x13);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c20);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c10);
    *(undefined1 *)((int)puVar12 + 0x11) = 1;
    uVar4 = DAT_7008311c;
    uVar3 = DAT_70083118;
    uVar14 = DAT_70083114;
    *puVar12 = DAT_70083110;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined1 *)(puVar12 + 4) = DAT_70083120;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623e9c,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c20);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c10);
  if (*(char *)(iVar9 + 0x11) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x59bd715 >> iVar15) | (byte)(0x213fa5c5 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x213fa5c5 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0xf < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x11) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
LAB_71619768:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_34);
  }
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618bf8;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_34 = (uVar10 | 7) + 2;
    uStack_30 = uVar10;
    uStack_2c = uVar17;
LAB_71618bf8:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_71620800(&uStack_34,0x15);
  if ((uStack_34 & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  FUN_714d4628(&uStack_34);
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c40);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c30);
    *(undefined1 *)(puVar12 + 5) = 1;
    uVar5 = DAT_70083138;
    uVar4 = DAT_70083134;
    uVar3 = DAT_70083130;
    uVar14 = DAT_7008312c;
    *puVar12 = DAT_70083128;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623ed0,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c40);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c30);
  if (*(char *)(iVar9 + 0x14) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0xdf390927 >> iVar15) |
              (byte)(-0x62c01c91 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x9d3fe36f >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x12 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x14) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619770;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_40 | 1;
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618d30;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_40 = (uVar10 | 7) + 2;
    uStack_3c = uVar10;
    uStack_38 = uVar17;
LAB_71618d30:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  uVar14 = FUN_71ba17bc(uStack_34);
  FUN_717c623c(&uStack_40,uVar14);
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c60);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c50);
    *(undefined1 *)((int)puVar12 + 0x13) = 1;
    uVar4 = DAT_7008314c;
    uVar3 = DAT_70083148;
    uVar14 = DAT_70083144;
    *puVar12 = DAT_70083140;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    uVar6 = DAT_70083152;
    *(undefined2 *)(puVar12 + 4) = DAT_70083150;
    *(undefined1 *)((int)puVar12 + 0x12) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623f04,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c60);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c50);
  if (*(char *)(iVar9 + 0x13) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x874b0533 >> iVar15) | (byte)(0x31070921 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0x31070921 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x11 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x13) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619770;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_40 | 1;
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618e6c;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_40 = (uVar10 | 7) + 2;
    uStack_3c = uVar10;
    uStack_38 = uVar17;
LAB_71618e6c:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  uVar14 = FUN_71ba17bc(uStack_28);
  FUN_717c623c(&uStack_40,uVar14);
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c80);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c70);
    *(undefined1 *)((int)puVar12 + 0x15) = 1;
    uVar5 = DAT_70083168;
    uVar4 = DAT_70083164;
    uVar3 = DAT_70083160;
    uVar14 = DAT_7008315c;
    *puVar12 = DAT_70083158;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    *(undefined1 *)(puVar12 + 5) = DAT_7008316c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623f38,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c80);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c70);
  if (*(char *)(iVar9 + 0x15) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0xe943fb13 >> iVar15) |
              (byte)(-0x5ed0d44d << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0xa12f2bb3 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x13 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x15) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71619770;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_40 | 1;
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71618fa8;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_40 = (uVar10 | 7) + 2;
    uStack_3c = uVar10;
    uStack_38 = uVar17;
LAB_71618fa8:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  uVar14 = FUN_71ba17bc(uStack_2c);
  FUN_717c623c(&uStack_40,uVar14);
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ca0);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c90);
    *(undefined1 *)((int)puVar12 + 0x16) = 1;
    uVar5 = DAT_70083180;
    uVar4 = DAT_7008317c;
    uVar3 = DAT_70083178;
    uVar14 = DAT_70083174;
    *puVar12 = DAT_70083170;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    *(undefined2 *)(puVar12 + 5) = DAT_70083184;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623f70,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ca0);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6c90);
  if (*(char *)(iVar9 + 0x16) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      uVar16 = iVar15 - 0x20;
      bVar7 = (byte)(0x377b9db1 >> iVar15) |
              (byte)(-0x30700477 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar7 = (byte)(0xcf8ffb89 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x14 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x16) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
LAB_71619770:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_40 | 1;
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_716190e8;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_40 = (uVar10 | 7) + 2;
    uStack_3c = uVar10;
    uStack_38 = uVar17;
  }
  imp___aeabi_memmove(uVar17,iVar9,uVar10);
LAB_716190e8:
  *(undefined1 *)(uVar17 + uVar10) = 0;
  uVar14 = FUN_71ba17bc(uStack_30);
  FUN_717c623c(&uStack_40,uVar14);
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  return;
}


// =========================================================================
// Function: FUN_7161b7b4
// Entry: 0x7161b7b4 | Size: 9008 bytes
// =========================================================================

void FUN_7161b7b4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int unaff_r8;
  undefined4 *puVar20;
  undefined4 uVar21;
  bool bVar22;
  undefined8 uVar23;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (((DAT_711a3938 == 0) || (*(int *)(DAT_711a3938 + 0x1389c) == 0)) ||
     (iVar8 = thunk_FUN_715bf66c(), iVar8 == 0)) {
    iVar8 = *(int *)(DAT_70c38f4c + 0x29c);
    if (iVar8 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      puVar14 = (undefined4 *)(iVar8 + 0xa4);
      iVar10 = FUN_71ba2d70(*puVar14,0);
      if (iVar10 != 0) {
        puVar20 = (undefined4 *)(iVar8 + 0xa8);
        iVar10 = FUN_71ba2d70(*puVar20,0);
        if (iVar10 != 0) {
          uVar21 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 4));
          uVar21 = FUN_71ba13e0(uVar21,0x44200000);
          uVar16 = *(undefined4 *)(iVar8 + 0x94);
          uVar21 = FUN_71ba21e8(*(undefined4 *)(iVar8 + 0x14),uVar21);
          uVar21 = FUN_71ba21e8(uVar16,uVar21);
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f20);
          if (*pcVar9 == '\0') {
            puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f10);
            *(undefined1 *)((int)puVar13 + 0x15) = 1;
            uVar6 = DAT_70083318;
            uVar4 = DAT_70083314;
            uVar3 = DAT_70083310;
            uVar16 = DAT_7008330c;
            *puVar13 = DAT_70083308;
            puVar13[1] = uVar16;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
            puVar13[4] = uVar6;
            *(undefined1 *)(puVar13 + 5) = DAT_7008331c;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624348,puVar13,&DAT_70b0e000);
            puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f20);
            *puVar15 = 1;
          }
          iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f10);
          if (*(char *)(iVar8 + 0x15) != '\0') {
            uVar11 = 0;
            uVar19 = 0;
            do {
              iVar10 = (uVar11 & 7) * 8;
              uVar18 = iVar10 - 0x20;
              bVar7 = (byte)(0x1961f783 >> iVar10) |
                      (byte)(-0x1e0aee2b << ((uVar11 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar18) {
                bVar7 = (byte)(0xe1f511d5 >> (uVar18 & 0xff));
              }
              *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
              bVar22 = 0xfffffffe < uVar11;
              bVar1 = uVar19 == 0;
              bVar2 = (0x13 < uVar11) <= uVar19;
              uVar11 = uVar11 + 1;
              uVar19 = uVar19 + bVar22;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar8 + 0x15) = 0;
          }
          uVar11 = imp_strlen(iVar8);
          if (0xfffffff7 < uVar11) goto LAB_7161db6c;
          if (uVar11 < 0xb) {
            uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
            uVar19 = (uint)&uStack_30 | 1;
            if (uVar11 != 0) goto LAB_7161c2a0;
          }
          else {
            uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
            uStack_30 = (uVar11 | 7) + 2;
            uStack_2c = uVar11;
            uStack_28 = uVar19;
LAB_7161c2a0:
            imp___aeabi_memmove(uVar19,iVar8,uVar11);
          }
          *(undefined1 *)(uVar19 + uVar11) = 0;
          FUN_717c623c(&uStack_30,0);
          if ((uStack_30 & 1) != 0) {
            thunk_qNQrlu(uStack_28);
          }
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f40);
          if (*pcVar9 == '\0') {
            puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f30);
            *(undefined1 *)((int)puVar13 + 0x15) = 1;
            uVar6 = DAT_70083330;
            uVar4 = DAT_7008332c;
            uVar3 = DAT_70083328;
            uVar16 = DAT_70083324;
            *puVar13 = DAT_70083320;
            puVar13[1] = uVar16;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
            puVar13[4] = uVar6;
            *(undefined1 *)(puVar13 + 5) = DAT_70083334;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624380,puVar13,&DAT_70b0e000);
            puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f40);
            *puVar15 = 1;
          }
          iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f30);
          if (*(char *)(iVar8 + 0x15) != '\0') {
            uVar11 = 0;
            uVar19 = 0;
            do {
              iVar10 = (uVar11 & 7) * 8;
              bVar7 = (byte)(0x8b41e993 >> iVar10) |
                      (byte)(0x4727c973 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
              uVar18 = iVar10 - 0x20;
              if (-1 < (int)uVar18) {
                bVar7 = (byte)(0x4727c973 >> (uVar18 & 0xff));
              }
              *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
              bVar22 = 0xfffffffe < uVar11;
              bVar1 = uVar19 == 0;
              bVar2 = (0x13 < uVar11) <= uVar19;
              uVar11 = uVar11 + 1;
              uVar19 = uVar19 + bVar22;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar8 + 0x15) = 0;
          }
          uVar11 = imp_strlen(iVar8);
          if (0xfffffff7 < uVar11) goto LAB_7161db6c;
          if (uVar11 < 0xb) {
            uVar19 = (uint)&uStack_30 | 1;
            uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
            if (uVar11 != 0) goto LAB_7161c3c8;
          }
          else {
            uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
            uStack_30 = (uVar11 | 7) + 2;
            uStack_2c = uVar11;
            uStack_28 = uVar19;
LAB_7161c3c8:
            imp___aeabi_memmove(uVar19,iVar8,uVar11);
          }
          *(undefined1 *)(uVar19 + uVar11) = 0;
          FUN_71ba240c(*puVar14,uVar21);
          uVar16 = FUN_71ba17bc();
          FUN_717c623c(&uStack_30,uVar16);
          if ((uStack_30 & 1) != 0) {
            thunk_qNQrlu(uStack_28);
          }
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f60);
          if (*pcVar9 == '\0') {
            puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f50);
            *(undefined1 *)(puVar13 + 5) = 1;
            uVar6 = DAT_70083348;
            uVar4 = DAT_70083344;
            uVar3 = DAT_70083340;
            uVar16 = DAT_7008333c;
            *puVar13 = DAT_70083338;
            puVar13[1] = uVar16;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
            puVar13[4] = uVar6;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_716243b8,puVar13,&DAT_70b0e000);
            puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f60);
            *puVar15 = 1;
          }
          iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f50);
          if (*(char *)(iVar8 + 0x14) != '\0') {
            uVar11 = 0;
            uVar19 = 0;
            do {
              iVar10 = (uVar11 & 7) * 8;
              bVar7 = (byte)(0xb145a519 >> iVar10) |
                      (byte)(-0x10c86299 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
              uVar18 = iVar10 - 0x20;
              if (-1 < (int)uVar18) {
                bVar7 = (byte)(0xef379d67 >> (uVar18 & 0xff));
              }
              *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
              bVar22 = 0xfffffffe < uVar11;
              bVar1 = uVar19 == 0;
              bVar2 = (0x12 < uVar11) <= uVar19;
              uVar11 = uVar11 + 1;
              uVar19 = uVar19 + bVar22;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar8 + 0x14) = 0;
          }
          uVar11 = imp_strlen(iVar8);
          if (0xfffffff7 < uVar11) goto LAB_7161db6c;
          if (uVar11 < 0xb) {
            uVar19 = (uint)&uStack_30 | 1;
            uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
            if (uVar11 != 0) goto LAB_7161c500;
          }
          else {
            uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
            uStack_30 = (uVar11 | 7) + 2;
            uStack_2c = uVar11;
            uStack_28 = uVar19;
LAB_7161c500:
            imp___aeabi_memmove(uVar19,iVar8,uVar11);
          }
          *(undefined1 *)(uVar19 + uVar11) = 0;
          FUN_71ba240c(*puVar20,uVar21);
          uVar16 = FUN_71ba17bc();
          FUN_717c623c(&uStack_30,uVar16);
          if ((uStack_30 & 1) != 0) {
            thunk_qNQrlu(uStack_28);
          }
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f80);
          if (*pcVar9 == '\0') {
            puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f70);
            *(undefined1 *)((int)puVar13 + 0x16) = 1;
            uVar6 = DAT_70083360;
            uVar4 = DAT_7008335c;
            uVar3 = DAT_70083358;
            uVar16 = DAT_70083354;
            *puVar13 = DAT_70083350;
            puVar13[1] = uVar16;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
            puVar13[4] = uVar6;
            *(undefined2 *)(puVar13 + 5) = DAT_70083364;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_716243ec,puVar13,&DAT_70b0e000);
            puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f80);
            *puVar15 = 1;
          }
          iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f70);
          if (*(char *)(iVar8 + 0x16) != '\0') {
            uVar11 = 0;
            uVar19 = 0;
            do {
              iVar10 = (uVar11 & 7) * 8;
              bVar7 = (byte)(0x454d8351 >> iVar10) |
                      (byte)(0x5feb8129 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
              uVar18 = iVar10 - 0x20;
              if (-1 < (int)uVar18) {
                bVar7 = (byte)(0x5feb8129 >> (uVar18 & 0xff));
              }
              *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
              bVar22 = 0xfffffffe < uVar11;
              bVar1 = uVar19 == 0;
              bVar2 = (0x14 < uVar11) <= uVar19;
              uVar11 = uVar11 + 1;
              uVar19 = uVar19 + bVar22;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar8 + 0x16) = 0;
          }
          uVar11 = imp_strlen(iVar8);
          if (0xfffffff7 < uVar11) goto LAB_7161db6c;
          if (uVar11 < 0xb) {
            uVar19 = (uint)&uStack_30 | 1;
            uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
            if (uVar11 != 0) goto LAB_7161c638;
          }
          else {
            uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
            uStack_30 = (uVar11 | 7) + 2;
            uStack_2c = uVar11;
            uStack_28 = uVar19;
LAB_7161c638:
            imp___aeabi_memmove(uVar19,iVar8,uVar11);
          }
          *(undefined1 *)(uVar19 + uVar11) = 0;
          FUN_71ba0b38(uVar21,*puVar14);
          uVar16 = FUN_71ba17bc();
          FUN_717c623c(&uStack_30,uVar16);
          if ((uStack_30 & 1) != 0) {
            thunk_qNQrlu(uStack_28);
          }
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fa0);
          if (*pcVar9 == '\0') {
            puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f90);
            *(undefined1 *)((int)puVar14 + 0x17) = 1;
            uVar6 = DAT_70083378;
            uVar4 = DAT_70083374;
            uVar3 = DAT_70083370;
            uVar16 = DAT_7008336c;
            *puVar14 = DAT_70083368;
            puVar14[1] = uVar16;
            puVar14[2] = uVar3;
            puVar14[3] = uVar4;
            puVar14[4] = uVar6;
            uVar5 = DAT_7008337e;
            *(undefined2 *)(puVar14 + 5) = DAT_7008337c;
            *(undefined1 *)((int)puVar14 + 0x16) = uVar5;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624424,puVar14,&DAT_70b0e000);
            puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fa0);
            *puVar15 = 1;
          }
          iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f90);
          if (*(char *)(iVar8 + 0x17) != '\0') {
            uVar11 = 0;
            uVar19 = 0;
            do {
              iVar10 = (uVar11 & 7) * 8;
              bVar7 = (byte)(0xddf5eb13 >> iVar10) |
                      (byte)(-0x782e5873 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
              uVar18 = iVar10 - 0x20;
              if (-1 < (int)uVar18) {
                bVar7 = (byte)(0x87d1a78d >> (uVar18 & 0xff));
              }
              *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
              bVar22 = 0xfffffffe < uVar11;
              bVar1 = uVar19 == 0;
              bVar2 = (0x15 < uVar11) <= uVar19;
              uVar11 = uVar11 + 1;
              uVar19 = uVar19 + bVar22;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar8 + 0x17) = 0;
          }
          uVar11 = imp_strlen(iVar8);
          if (0xfffffff7 < uVar11) goto LAB_7161db6c;
          if (uVar11 < 0xb) {
            uVar19 = (uint)&uStack_30 | 1;
            uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
            if (uVar11 != 0) goto LAB_7161c770;
          }
          else {
            uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
            uStack_30 = (uVar11 | 7) + 2;
            uStack_2c = uVar11;
            uStack_28 = uVar19;
LAB_7161c770:
            imp___aeabi_memmove(uVar19,iVar8,uVar11);
          }
          *(undefined1 *)(uVar19 + uVar11) = 0;
          FUN_71ba0b38(uVar21,*puVar20);
          uVar21 = FUN_71ba17bc();
          goto LAB_7161c0a0;
        }
      }
    }
LAB_7161ba6c:
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fc0);
    if (*pcVar9 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fb0);
      *(undefined1 *)((int)puVar14 + 0x15) = 1;
      uVar6 = DAT_70083390;
      uVar4 = DAT_7008338c;
      uVar3 = DAT_70083388;
      uVar16 = DAT_70083384;
      *puVar14 = DAT_70083380;
      puVar14[1] = uVar16;
      puVar14[2] = uVar3;
      puVar14[3] = uVar4;
      puVar14[4] = uVar6;
      *(undefined1 *)(puVar14 + 5) = DAT_70083394;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162445c,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fc0);
      *puVar15 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fb0);
    if (*(char *)(iVar8 + 0x15) != '\0') {
      uVar11 = 0;
      uVar19 = 0;
      do {
        iVar10 = (uVar11 & 7) * 8;
        uVar18 = iVar10 - 0x20;
        bVar7 = (byte)(0x9c71599 >> iVar10) |
                (byte)(0x51533f15 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0x51533f15 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
        bVar22 = 0xfffffffe < uVar11;
        bVar1 = uVar19 == 0;
        bVar2 = (0x13 < uVar11) <= uVar19;
        uVar11 = uVar11 + 1;
        uVar19 = uVar19 + bVar22;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x15) = 0;
    }
    uVar11 = imp_strlen(iVar8);
    if (0xfffffff7 < uVar11) goto LAB_7161db6c;
    if (uVar11 < 0xb) {
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
      uVar19 = (uint)&uStack_30 | 1;
      if (uVar11 != 0) goto LAB_7161bb5c;
    }
    else {
      uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
      uStack_30 = (uVar11 | 7) + 2;
      uStack_2c = uVar11;
      uStack_28 = uVar19;
LAB_7161bb5c:
      imp___aeabi_memmove(uVar19,iVar8,uVar11);
    }
    *(undefined1 *)(uVar19 + uVar11) = 0;
    FUN_717c623c(&uStack_30,uVar21);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fe0);
    if (*pcVar9 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fd0);
      *(undefined1 *)((int)puVar14 + 0x15) = 1;
      uVar4 = DAT_700833a8;
      uVar3 = DAT_700833a4;
      uVar16 = DAT_700833a0;
      uVar21 = DAT_7008339c;
      *puVar14 = DAT_70083398;
      puVar14[1] = uVar21;
      puVar14[2] = uVar16;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      *(undefined1 *)(puVar14 + 5) = DAT_700833ac;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624494,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fe0);
      *puVar15 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6fd0);
    if (*(char *)(iVar8 + 0x15) != '\0') {
      uVar11 = 0;
      uVar19 = 0;
      do {
        iVar10 = (uVar11 & 7) * 8;
        uVar18 = iVar10 - 0x20;
        bVar7 = (byte)(0xe5433955 >> iVar10) |
                (byte)(-0x1a8a4ef3 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0xe575b10d >> (uVar18 & 0xff));
        }
        *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
        bVar22 = 0xfffffffe < uVar11;
        bVar1 = uVar19 == 0;
        bVar2 = (0x13 < uVar11) <= uVar19;
        uVar11 = uVar11 + 1;
        uVar19 = uVar19 + bVar22;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x15) = 0;
    }
    uVar11 = imp_strlen(iVar8);
    if (0xfffffff7 < uVar11) goto LAB_7161db6c;
    if (uVar11 < 0xb) {
      uVar19 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
      if (uVar11 != 0) goto LAB_7161bc84;
    }
    else {
      uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
      uStack_30 = (uVar11 | 7) + 2;
      uStack_2c = uVar11;
      uStack_28 = uVar19;
LAB_7161bc84:
      imp___aeabi_memmove(uVar19,iVar8,uVar11);
    }
    *(undefined1 *)(uVar19 + uVar11) = 0;
    iVar8 = DAT_70ffc974;
    uVar23 = FUN_71ba1b10(*(undefined4 *)(DAT_70ffc974 + 4));
    FUN_71ba1ea0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0x1eb851ec,0x3fb1eb85);
    uVar21 = FUN_71ba173c();
    FUN_717c623c(&uStack_30,uVar21);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7000);
    if (*pcVar9 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ff0);
      *(undefined1 *)(puVar14 + 5) = 1;
      uVar4 = DAT_700833c0;
      uVar3 = DAT_700833bc;
      uVar16 = DAT_700833b8;
      uVar21 = DAT_700833b4;
      *puVar14 = DAT_700833b0;
      puVar14[1] = uVar21;
      puVar14[2] = uVar16;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716244cc,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7000);
      *puVar15 = 1;
    }
    iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ff0);
    if (*(char *)(iVar10 + 0x14) != '\0') {
      uVar11 = 0;
      uVar19 = 0;
      do {
        iVar17 = (uVar11 & 7) * 8;
        bVar7 = (byte)(0x85990b51 >> iVar17) |
                (byte)(-0x140af4e7 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        uVar18 = iVar17 - 0x20;
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0xebf50b19 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
        bVar22 = 0xfffffffe < uVar11;
        bVar1 = uVar19 == 0;
        bVar2 = (0x12 < uVar11) <= uVar19;
        uVar11 = uVar11 + 1;
        uVar19 = uVar19 + bVar22;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x14) = 0;
    }
    uVar11 = imp_strlen(iVar10);
    if (0xfffffff7 < uVar11) goto LAB_7161db6c;
    if (uVar11 < 0xb) {
      uVar19 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
      if (uVar11 != 0) goto LAB_7161bdd8;
    }
    else {
      uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
      uStack_30 = (uVar11 | 7) + 2;
      uStack_2c = uVar11;
      uStack_28 = uVar19;
LAB_7161bdd8:
      imp___aeabi_memmove(uVar19,iVar10,uVar11);
    }
    *(undefined1 *)(uVar19 + uVar11) = 0;
    uVar23 = FUN_71ba1b10(*(undefined4 *)(iVar8 + 8));
    FUN_71ba1ea0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xc28f5c29,0x3fe428f5);
    uVar21 = FUN_71ba173c();
    FUN_717c623c(&uStack_30,uVar21);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7020);
    if (*pcVar9 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7010);
      *(undefined1 *)((int)puVar14 + 0x16) = 1;
      uVar4 = DAT_700833d8;
      uVar3 = DAT_700833d4;
      uVar16 = DAT_700833d0;
      uVar21 = DAT_700833cc;
      *puVar14 = DAT_700833c8;
      puVar14[1] = uVar21;
      puVar14[2] = uVar16;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      *(undefined2 *)(puVar14 + 5) = DAT_700833dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624500,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7020);
      *puVar15 = 1;
    }
    iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7010);
    if (*(char *)(iVar10 + 0x16) != '\0') {
      uVar11 = 0;
      uVar19 = 0;
      do {
        iVar17 = (uVar11 & 7) * 8;
        uVar18 = iVar17 - 0x20;
        bVar7 = (byte)(0x5338b95 >> iVar17) |
                (byte)(-0x65a9c8d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0xf9a56373 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
        bVar22 = 0xfffffffe < uVar11;
        bVar1 = uVar19 == 0;
        bVar2 = (0x14 < uVar11) <= uVar19;
        uVar11 = uVar11 + 1;
        uVar19 = uVar19 + bVar22;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x16) = 0;
    }
    uVar11 = imp_strlen(iVar10);
    if (0xfffffff7 < uVar11) goto LAB_7161db6c;
    if (uVar11 < 0xb) {
      uVar19 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
      if (uVar11 != 0) goto LAB_7161bf20;
    }
    else {
      uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
      uStack_30 = (uVar11 | 7) + 2;
      uStack_2c = uVar11;
      uStack_28 = uVar19;
LAB_7161bf20:
      imp___aeabi_memmove(uVar19,iVar10,uVar11);
    }
    *(undefined1 *)(uVar19 + uVar11) = 0;
    uVar23 = FUN_71ba1b10(*(undefined4 *)(iVar8 + 4));
    FUN_71ba1ea0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0x7ae147ae,0x3fd7ae14);
    uVar21 = FUN_71ba173c();
    FUN_717c623c(&uStack_30,uVar21);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7040);
    if (*pcVar9 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7030);
      *(undefined1 *)((int)puVar14 + 0x17) = 1;
      uVar4 = DAT_700833f0;
      uVar3 = DAT_700833ec;
      uVar16 = DAT_700833e8;
      uVar21 = DAT_700833e4;
      *puVar14 = DAT_700833e0;
      puVar14[1] = uVar21;
      puVar14[2] = uVar16;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      uVar5 = DAT_700833f6;
      *(undefined2 *)(puVar14 + 5) = DAT_700833f4;
      *(undefined1 *)((int)puVar14 + 0x16) = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624538,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7040);
      *puVar15 = 1;
    }
    iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7030);
    if (*(char *)(iVar10 + 0x17) != '\0') {
      uVar11 = 0;
      uVar19 = 0;
      do {
        iVar17 = (uVar11 & 7) * 8;
        uVar18 = iVar17 - 0x20;
        bVar7 = (byte)(0xefabd7e7 >> iVar17) |
                (byte)(-0x640c267d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar7 = (byte)(0x9bf3d983 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
        bVar22 = 0xfffffffe < uVar11;
        bVar1 = uVar19 == 0;
        bVar2 = (0x15 < uVar11) <= uVar19;
        uVar11 = uVar11 + 1;
        uVar19 = uVar19 + bVar22;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x17) = 0;
    }
    uVar11 = imp_strlen(iVar10);
    if (0xfffffff7 < uVar11) {
LAB_7161db6c:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_30);
    }
    if (uVar11 < 0xb) {
      uVar19 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
      if (uVar11 != 0) goto LAB_7161c068;
    }
    else {
      uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
      uStack_30 = (uVar11 | 7) + 2;
      uStack_2c = uVar11;
      uStack_28 = uVar19;
LAB_7161c068:
      imp___aeabi_memmove(uVar19,iVar10,uVar11);
    }
    *(undefined1 *)(uVar19 + uVar11) = 0;
    uVar23 = FUN_71ba1b10(*(undefined4 *)(iVar8 + 8));
    FUN_71ba1ea0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0x5c28f5c3,0x3fedc28f);
    uVar21 = FUN_71ba173c();
LAB_7161c0a0:
    FUN_717c623c(&uStack_30,uVar21);
  }
  else {
    if (*(int *)(DAT_70c38f30 + 0x68) == 2) {
      if (*(int *)(DAT_70c38f4c + 0x2b4) == 0) {
LAB_7161c79c:
        uVar21 = 1;
        goto LAB_7161ba6c;
      }
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ea0);
      if (*pcVar9 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e90);
        *(undefined1 *)((int)puVar14 + 0x15) = 1;
        uVar4 = DAT_700832e8;
        uVar3 = DAT_700832e4;
        uVar16 = DAT_700832e0;
        uVar21 = DAT_700832dc;
        *puVar14 = DAT_700832d8;
        puVar14[1] = uVar21;
        puVar14[2] = uVar16;
        puVar14[3] = uVar3;
        puVar14[4] = uVar4;
        *(undefined1 *)(puVar14 + 5) = DAT_700832ec;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624278,puVar14,&DAT_70b0e000);
        puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ea0);
        *puVar15 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e90);
      if (*(char *)(iVar8 + 0x15) != '\0') {
        uVar11 = 0;
        uVar19 = 0;
        do {
          iVar10 = (uVar11 & 7) * 8;
          uVar18 = iVar10 - 0x20;
          bVar7 = (byte)(0x9815153 >> iVar10) |
                  (byte)(-0x78e69c8d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar18) {
            bVar7 = (byte)(0x87196373 >> (uVar18 & 0xff));
          }
          *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
          bVar22 = 0xfffffffe < uVar11;
          bVar1 = uVar19 == 0;
          bVar2 = (0x13 < uVar11) <= uVar19;
          uVar11 = uVar11 + 1;
          uVar19 = uVar19 + bVar22;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x15) = 0;
      }
      uVar11 = imp_strlen(iVar8);
      if (0xfffffff7 < uVar11) goto LAB_7161db6c;
      if (uVar11 < 0xb) {
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
        uVar19 = (uint)&uStack_30 | 1;
        if (uVar11 != 0) goto LAB_7161c7dc;
      }
      else {
        uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
        uStack_30 = (uVar11 | 7) + 2;
        uStack_2c = uVar11;
        uStack_28 = uVar19;
LAB_7161c7dc:
        imp___aeabi_memmove(uVar19,iVar8,uVar11);
      }
      *(undefined1 *)(uVar19 + uVar11) = 0;
      FUN_717c623c(&uStack_30,3);
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ec0);
      if (*pcVar9 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6eb0);
        *(undefined1 *)(puVar14 + 4) = 1;
        *puVar14 = 0xba9e2bf4;
        puVar14[1] = 0x8c88cbfd;
        puVar14[2] = 0x809231f8;
        puVar14[3] = 0xe1b9cbf1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716242b0,puVar14,&DAT_70b0e000);
        puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ec0);
        *puVar15 = 1;
      }
      pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6eb0);
      if (pbVar12[0x10] != 0) {
        *pbVar12 = *pbVar12 ^ 0x97;
        pbVar12[1] = pbVar12[1] ^ 0x47;
        pbVar12[2] = pbVar12[2] ^ 0xf7;
        pbVar12[3] = pbVar12[3] ^ 0xdf;
        pbVar12[0x10] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x93;
        pbVar12[5] = pbVar12[5] ^ 0xbf;
        pbVar12[6] = pbVar12[6] ^ 0xd7;
        pbVar12[7] = pbVar12[7] ^ 0xe1;
        pbVar12[8] = pbVar12[8] ^ 0x97;
        pbVar12[9] = pbVar12[9] ^ 0x47;
        pbVar12[10] = pbVar12[10] ^ 0xf7;
        pbVar12[0xb] = pbVar12[0xb] ^ 0xdf;
        pbVar12[0xc] = pbVar12[0xc] ^ 0x93;
        pbVar12[0xd] = pbVar12[0xd] ^ 0xbf;
        pbVar12[0xe] = pbVar12[0xe] ^ 0xd7;
        pbVar12[0xf] = pbVar12[0xf] ^ 0xe1;
      }
      uVar11 = imp_strlen(pbVar12);
      if (0xfffffff7 < uVar11) goto LAB_7161db6c;
      if (uVar11 < 0xb) {
        uVar19 = (uint)&uStack_30 | 1;
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
        if (uVar11 != 0) goto LAB_7161cb08;
      }
      else {
        uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
        uStack_30 = (uVar11 | 7) + 2;
        uStack_2c = uVar11;
        uStack_28 = uVar19;
LAB_7161cb08:
        imp___aeabi_memmove(uVar19,pbVar12,uVar11);
      }
      uVar21 = 0xad;
    }
    else {
      if (*(int *)(DAT_70c38f30 + 0x68) == 1) {
        iVar8 = *(int *)(DAT_70c38f4c + 0x14);
        uVar21 = 1;
        if (iVar8 != 0) {
          unaff_r8 = *(int *)(DAT_70c38f4c + 0x18);
        }
        if (iVar8 == 0 || unaff_r8 == 0) goto LAB_7161ba6c;
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6dc0);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6db0);
          *(undefined1 *)((int)puVar14 + 0x16) = 1;
          uVar4 = DAT_70083240;
          uVar3 = DAT_7008323c;
          uVar16 = DAT_70083238;
          uVar21 = DAT_70083234;
          *puVar14 = DAT_70083230;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          *(undefined2 *)(puVar14 + 5) = DAT_70083244;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716240f4,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6dc0);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6db0);
        if (*(char *)(iVar10 + 0x16) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0xd531356b >> iVar17) |
                    (byte)(0x5be9895d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0x5be9895d >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x14 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x16) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          uVar19 = (uint)&uStack_30 | 1;
          if (uVar11 != 0) goto LAB_7161cb94;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161cb94:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        FUN_71620800(&uStack_30,5);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6de0);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6dd0);
          *(undefined1 *)((int)puVar14 + 0x17) = 1;
          uVar4 = DAT_70083258;
          uVar3 = DAT_70083254;
          uVar16 = DAT_70083250;
          uVar21 = DAT_7008324c;
          *puVar14 = DAT_70083248;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          uVar5 = DAT_7008325e;
          *(undefined2 *)(puVar14 + 5) = DAT_7008325c;
          *(undefined1 *)((int)puVar14 + 0x16) = uVar5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162412c,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6de0);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6dd0);
        if (*(char *)(iVar10 + 0x17) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0xb555f99b >> iVar17) |
                    (byte)(0x7d410717 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0x7d410717 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x15 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x17) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          if (uVar11 != 0) goto LAB_7161ccc8;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161ccc8:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        FUN_71620800(&uStack_30,6);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e00);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6df0);
          *(undefined1 *)((int)puVar14 + 0x15) = 1;
          uVar4 = DAT_70083270;
          uVar3 = DAT_7008326c;
          uVar16 = DAT_70083268;
          uVar21 = DAT_70083264;
          *puVar14 = DAT_70083260;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          *(undefined1 *)(puVar14 + 5) = DAT_70083274;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624164,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e00);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6df0);
        if (*(char *)(iVar10 + 0x15) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0x2545d7f1 >> iVar17) |
                    (byte)(0x73c5e557 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0x73c5e557 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x13 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x15) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          if (uVar11 != 0) goto LAB_7161cdf8;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161cdf8:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        FUN_717c623c(&uStack_30,2);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e20);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e10);
          *(undefined1 *)((int)puVar14 + 0x15) = 1;
          uVar4 = DAT_70083288;
          uVar3 = DAT_70083284;
          uVar16 = DAT_70083280;
          uVar21 = DAT_7008327c;
          *puVar14 = DAT_70083278;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          *(undefined1 *)(puVar14 + 5) = DAT_7008328c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162419c,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e20);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e10);
        if (*(char *)(iVar10 + 0x15) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0x5fa1fbe3 >> iVar17) |
                    (byte)(0x1dcb7db7 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0x1dcb7db7 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x13 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x15) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          if (uVar11 != 0) goto LAB_7161cf30;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161cf30:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        uVar16 = *(undefined4 *)(unaff_r8 + 0x20);
        uVar21 = *(undefined4 *)(iVar8 + 0x20);
        iVar10 = FUN_71ba2d10(uVar16,uVar21);
        if (iVar10 != 0) {
          uVar21 = uVar16;
        }
        uVar21 = FUN_71ba17bc(uVar21);
        FUN_717c623c(&uStack_30,uVar21);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e40);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e30);
          *(undefined1 *)(puVar14 + 5) = 1;
          uVar4 = DAT_700832a0;
          uVar3 = DAT_7008329c;
          uVar16 = DAT_70083298;
          uVar21 = DAT_70083294;
          *puVar14 = DAT_70083290;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716241d4,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e40);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e30);
        if (*(char *)(iVar10 + 0x14) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0x478bbd0b >> iVar17) |
                    (byte)(-0x24940853 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0xdb6bf7ad >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x12 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x14) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          if (uVar11 != 0) goto LAB_7161d084;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161d084:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        uVar16 = *(undefined4 *)(unaff_r8 + 0x2c);
        uVar21 = *(undefined4 *)(iVar8 + 0x2c);
        iVar10 = FUN_71ba2d10(uVar16,uVar21);
        if (iVar10 != 0) {
          uVar21 = uVar16;
        }
        uVar21 = FUN_71ba17bc(uVar21);
        FUN_717c623c(&uStack_30,uVar21);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e60);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e50);
          *(undefined1 *)((int)puVar14 + 0x16) = 1;
          uVar4 = DAT_700832b8;
          uVar3 = DAT_700832b4;
          uVar16 = DAT_700832b0;
          uVar21 = DAT_700832ac;
          *puVar14 = DAT_700832a8;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          *(undefined2 *)(puVar14 + 5) = DAT_700832bc;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624208,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e60);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e50);
        if (*(char *)(iVar10 + 0x16) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0x3db53f77 >> iVar17) |
                    (byte)(0x1b901cb << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0x1b901cb >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x14 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x16) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          if (uVar11 != 0) goto LAB_7161d1e0;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161d1e0:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        uVar21 = *(undefined4 *)(iVar8 + 0x28);
        uVar16 = *(undefined4 *)(unaff_r8 + 0x28);
        iVar10 = FUN_71ba2d10(uVar21,uVar16);
        if (iVar10 != 0) {
          uVar21 = uVar16;
        }
        uVar21 = FUN_71ba17bc(uVar21);
        FUN_717c623c(&uStack_30,uVar21);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e80);
        if (*pcVar9 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e70);
          *(undefined1 *)((int)puVar14 + 0x17) = 1;
          uVar4 = DAT_700832d0;
          uVar3 = DAT_700832cc;
          uVar16 = DAT_700832c8;
          uVar21 = DAT_700832c4;
          *puVar14 = DAT_700832c0;
          puVar14[1] = uVar21;
          puVar14[2] = uVar16;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          uVar5 = DAT_700832d6;
          *(undefined2 *)(puVar14 + 5) = DAT_700832d4;
          *(undefined1 *)((int)puVar14 + 0x16) = uVar5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624240,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e80);
          *puVar15 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6e70);
        if (*(char *)(iVar10 + 0x17) != '\0') {
          uVar11 = 0;
          uVar19 = 0;
          do {
            iVar17 = (uVar11 & 7) * 8;
            uVar18 = iVar17 - 0x20;
            bVar7 = (byte)(0x47b10f6b >> iVar17) |
                    (byte)(0x75eb2f59 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar7 = (byte)(0x75eb2f59 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar7;
            bVar22 = 0xfffffffe < uVar11;
            bVar1 = uVar19 == 0;
            bVar2 = (0x15 < uVar11) <= uVar19;
            uVar11 = uVar11 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x17) = 0;
        }
        uVar11 = imp_strlen(iVar10);
        if (0xfffffff7 < uVar11) goto LAB_7161db6c;
        if (uVar11 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
          if (uVar11 != 0) goto LAB_7161d32c;
        }
        else {
          uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
          uStack_30 = (uVar11 | 7) + 2;
          uStack_2c = uVar11;
          uStack_28 = uVar19;
LAB_7161d32c:
          imp___aeabi_memmove(uVar19,iVar10,uVar11);
        }
        *(undefined1 *)(uVar19 + uVar11) = 0;
        uVar21 = *(undefined4 *)(iVar8 + 0x24);
        uVar16 = *(undefined4 *)(unaff_r8 + 0x24);
        iVar8 = FUN_71ba2d10(uVar21,uVar16);
        if (iVar8 != 0) {
          uVar21 = uVar16;
        }
        uVar21 = FUN_71ba17bc(uVar21);
        goto LAB_7161c0a0;
      }
      if (*(int *)(DAT_70c38f4c + 0x2b0) == 0) goto LAB_7161c79c;
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ee0);
      if (*pcVar9 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ed0);
        *(undefined1 *)((int)puVar14 + 0x15) = 1;
        uVar4 = DAT_70083300;
        uVar3 = DAT_700832fc;
        uVar16 = DAT_700832f8;
        uVar21 = DAT_700832f4;
        *puVar14 = DAT_700832f0;
        puVar14[1] = uVar21;
        puVar14[2] = uVar16;
        puVar14[3] = uVar3;
        puVar14[4] = uVar4;
        *(undefined1 *)(puVar14 + 5) = DAT_70083304;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716242e0,puVar14,&DAT_70b0e000);
        puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ee0);
        *puVar15 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ed0);
      if (*(char *)(iVar8 + 0x15) != '\0') {
        uVar11 = 0;
        uVar19 = 0;
        do {
          iVar10 = (uVar11 & 7) * 8;
          uVar18 = iVar10 - 0x20;
          bVar7 = (byte)(0xc5cb6335 >> iVar10) |
                  (byte)(-0x6a24fad1 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar18) {
            bVar7 = (byte)(0x95db052f >> (uVar18 & 0xff));
          }
          *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
          bVar22 = 0xfffffffe < uVar11;
          bVar1 = uVar19 == 0;
          bVar2 = (0x13 < uVar11) <= uVar19;
          uVar11 = uVar11 + 1;
          uVar19 = uVar19 + bVar22;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x15) = 0;
      }
      uVar11 = imp_strlen(iVar8);
      if (0xfffffff7 < uVar11) goto LAB_7161db6c;
      if (uVar11 < 0xb) {
        uVar19 = (uint)&uStack_30 | 1;
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
        if (uVar11 != 0) goto LAB_7161c97c;
      }
      else {
        uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
        uStack_30 = (uVar11 | 7) + 2;
        uStack_2c = uVar11;
        uStack_28 = uVar19;
LAB_7161c97c:
        imp___aeabi_memmove(uVar19,iVar8,uVar11);
      }
      *(undefined1 *)(uVar19 + uVar11) = 0;
      FUN_717c623c(&uStack_30,1);
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f00);
      if (*pcVar9 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ef0);
        *(undefined1 *)(puVar14 + 4) = 1;
        *puVar14 = 0x83a0b84;
        puVar14[1] = 0x66dc394f;
        puVar14[2] = 0x32361188;
        puVar14[3] = 0xbed3943;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624318,puVar14,&DAT_70b0e000);
        puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6f00);
        *puVar15 = 1;
      }
      pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ef0);
      if (pbVar12[0x10] != 0) {
        *pbVar12 = *pbVar12 ^ 0xe7;
        pbVar12[1] = pbVar12[1] ^ 0x67;
        pbVar12[2] = pbVar12[2] ^ 0x53;
        pbVar12[3] = pbVar12[3] ^ 0x6d;
        pbVar12[0x10] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x21;
        pbVar12[5] = pbVar12[5] ^ 0x4d;
        pbVar12[6] = pbVar12[6] ^ 0x83;
        pbVar12[7] = pbVar12[7] ^ 0xb;
        pbVar12[8] = pbVar12[8] ^ 0xe7;
        pbVar12[9] = pbVar12[9] ^ 0x67;
        pbVar12[10] = pbVar12[10] ^ 0x53;
        pbVar12[0xb] = pbVar12[0xb] ^ 0x6d;
        pbVar12[0xc] = pbVar12[0xc] ^ 0x21;
        pbVar12[0xd] = pbVar12[0xd] ^ 0x4d;
        pbVar12[0xe] = pbVar12[0xe] ^ 0x83;
        pbVar12[0xf] = pbVar12[0xf] ^ 0xb;
      }
      uVar11 = imp_strlen(pbVar12);
      if (0xfffffff7 < uVar11) goto LAB_7161db6c;
      if (uVar11 < 0xb) {
        uVar19 = (uint)&uStack_30 | 1;
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
        if (uVar11 != 0) goto LAB_7161cb44;
      }
      else {
        uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
        uStack_30 = (uVar11 | 7) + 2;
        uStack_2c = uVar11;
        uStack_28 = uVar19;
LAB_7161cb44:
        imp___aeabi_memmove(uVar19,pbVar12,uVar11);
      }
      uVar21 = 0xac;
    }
    *(undefined1 *)(uVar19 + uVar11) = 0;
    FUN_71620800(&uStack_30,uVar21);
  }
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71620800
// Entry: 0x71620800 | Size: 1956 bytes
// =========================================================================

void FUN_71620800(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar2 = *(int *)(DAT_70c38f4c + param_2 * 4);
  if (iVar2 == 0) {
    return;
  }
  pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7060);
  if (*pcVar3 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7050);
    *puVar8 = 0x6fa457e4;
    *(undefined1 *)((int)puVar8 + 6) = 1;
    *(undefined2 *)(puVar8 + 1) = 0x9f9;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624570,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7060);
    *puVar9 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7050);
  if (pbVar4[6] != 0) {
    pbVar4[6] = 0;
    *pbVar4 = *pbVar4 ^ 0xbb;
    pbVar4[1] = pbVar4[1] ^ 0x3b;
    pbVar4[2] = pbVar4[2] ^ 0xc1;
    pbVar4[3] = pbVar4[3] ^ 9;
    pbVar4[4] = pbVar4[4] ^ 0x8d;
    pbVar4[5] = pbVar4[5] ^ 9;
  }
  bVar1 = *param_1;
  uVar11 = *(uint *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    uVar11 = (uint)(bVar1 >> 1);
  }
  iVar5 = imp_strlen(pbVar4);
  uVar12 = uVar11 + iVar5;
  if (uVar12 < 0xfffffff8) {
    if (uVar12 < 0xb) {
      uStack_30 = (uint)(byte)((char)uVar12 * '\x02');
      uStack_28 = 0;
      uVar6 = 0;
      uStack_2c = 0;
    }
    else {
      uStack_28 = thunk_MwhHq((uVar12 | 7) + 1);
      uStack_30 = (uVar12 | 7) + 2;
      uVar6 = uStack_30 & 0xff;
      uStack_2c = uVar12;
    }
    uVar12 = uStack_28;
    if ((uVar6 & 1) == 0) {
      uVar12 = (uint)&uStack_30 | 1;
    }
    if (uVar11 != 0) {
      pbVar10 = *(byte **)(param_1 + 8);
      if ((bVar1 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
      imp___aeabi_memmove(uVar12,pbVar10,uVar11);
    }
    if (iVar5 != 0) {
      imp___aeabi_memmove(uVar12 + uVar11,pbVar4,iVar5);
    }
    *(undefined1 *)(uVar12 + uVar11 + iVar5) = 0;
    uVar7 = FUN_71ba17bc(*(undefined4 *)(iVar2 + 0x20));
    FUN_717c623c(&uStack_30,uVar7);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7080);
    if (*pcVar3 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7070);
      *puVar8 = 0xa31ce9ec;
      *(undefined2 *)(puVar8 + 1) = 0x1a3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624598,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7080);
      *puVar9 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7070);
    if (pbVar4[5] != 0) {
      pbVar4[5] = 0;
      *pbVar4 = *pbVar4 ^ 0xb3;
      pbVar4[1] = pbVar4[1] ^ 0x9d;
      pbVar4[2] = pbVar4[2] ^ 0x73;
      pbVar4[3] = pbVar4[3] ^ 0xd3;
      pbVar4[4] = pbVar4[4] ^ 0xa3;
    }
    bVar1 = *param_1;
    uVar11 = *(uint *)(param_1 + 4);
    if ((bVar1 & 1) == 0) {
      uVar11 = (uint)(bVar1 >> 1);
    }
    iVar5 = imp_strlen(pbVar4);
    uVar12 = uVar11 + iVar5;
    if (uVar12 < 0xfffffff8) {
      if (uVar12 < 0xb) {
        uStack_30 = (uint)(byte)((char)uVar12 * '\x02');
        uStack_28 = 0;
        uVar6 = 0;
        uStack_2c = 0;
      }
      else {
        uStack_28 = thunk_MwhHq((uVar12 | 7) + 1);
        uStack_30 = (uVar12 | 7) + 2;
        uVar6 = uStack_30 & 0xff;
        uStack_2c = uVar12;
      }
      uVar12 = uStack_28;
      if ((uVar6 & 1) == 0) {
        uVar12 = (uint)&uStack_30 | 1;
      }
      if (uVar11 != 0) {
        pbVar10 = *(byte **)(param_1 + 8);
        if ((bVar1 & 1) == 0) {
          pbVar10 = param_1 + 1;
        }
        imp___aeabi_memmove(uVar12,pbVar10,uVar11);
      }
      if (iVar5 != 0) {
        imp___aeabi_memmove(uVar12 + uVar11,pbVar4,iVar5);
      }
      *(undefined1 *)(uVar12 + uVar11 + iVar5) = 0;
      uVar7 = FUN_71ba17bc(*(undefined4 *)(iVar2 + 0x2c));
      FUN_717c623c(&uStack_30,uVar7);
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70a0);
      if (*pcVar3 == '\0') {
        puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7090);
        *puVar8 = 0xcaaa31e2;
        *(undefined1 *)((int)puVar8 + 7) = 1;
        *(undefined4 *)((int)puVar8 + 3) = 0xb9f595ca;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716245c0,puVar8,&DAT_70b0e000);
        puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70a0);
        *puVar9 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7090);
      if (pbVar4[7] != 0) {
        pbVar4[7] = 0;
        *pbVar4 = *pbVar4 ^ 0xbd;
        pbVar4[1] = pbVar4[1] ^ 0x43;
        pbVar4[2] = pbVar4[2] ^ 0xc3;
        pbVar4[3] = pbVar4[3] ^ 0xad;
        pbVar4[4] = pbVar4[4] ^ 0xfd;
        pbVar4[5] = pbVar4[5] ^ 0x81;
        pbVar4[6] = pbVar4[6] ^ 0xb9;
      }
      bVar1 = *param_1;
      uVar11 = *(uint *)(param_1 + 4);
      if ((bVar1 & 1) == 0) {
        uVar11 = (uint)(bVar1 >> 1);
      }
      iVar5 = imp_strlen(pbVar4);
      uVar12 = uVar11 + iVar5;
      if (uVar12 < 0xfffffff8) {
        if (uVar12 < 0xb) {
          uStack_30 = (uint)(byte)((char)uVar12 * '\x02');
          uStack_28 = 0;
          uVar6 = 0;
          uStack_2c = 0;
        }
        else {
          uStack_28 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uVar6 = uStack_30 & 0xff;
          uStack_2c = uVar12;
        }
        uVar12 = uStack_28;
        if ((uVar6 & 1) == 0) {
          uVar12 = (uint)&uStack_30 | 1;
        }
        if (uVar11 != 0) {
          pbVar10 = *(byte **)(param_1 + 8);
          if ((bVar1 & 1) == 0) {
            pbVar10 = param_1 + 1;
          }
          imp___aeabi_memmove(uVar12,pbVar10,uVar11);
        }
        if (iVar5 != 0) {
          imp___aeabi_memmove(uVar12 + uVar11,pbVar4,iVar5);
        }
        *(undefined1 *)(uVar12 + uVar11 + iVar5) = 0;
        uVar7 = FUN_71ba17bc(*(undefined4 *)(iVar2 + 0x28));
        FUN_717c623c(&uStack_30,uVar7);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70c0);
        if (*pcVar3 == '\0') {
          puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70b0);
          *puVar8 = 0x25a4e146;
          puVar8[1] = 0x23323827;
          *(undefined1 *)(puVar8 + 2) = 1;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716245e8,puVar8,&DAT_70b0e000);
          puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70c0);
          *puVar9 = 1;
        }
        pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70b0);
        if (pbVar4[8] != 0) {
          pbVar4[8] = 0;
          *pbVar4 = *pbVar4 ^ 0x19;
          pbVar4[1] = pbVar4[1] ^ 0x83;
          pbVar4[2] = pbVar4[2] ^ 0xcb;
          pbVar4[3] = pbVar4[3] ^ 0x51;
          pbVar4[4] = pbVar4[4] ^ 0x53;
          pbVar4[5] = pbVar4[5] ^ 0x57;
          pbVar4[6] = pbVar4[6] ^ 0x5f;
          pbVar4[7] = pbVar4[7] ^ 0x23;
        }
        bVar1 = *param_1;
        uVar11 = *(uint *)(param_1 + 4);
        if ((bVar1 & 1) == 0) {
          uVar11 = (uint)(bVar1 >> 1);
        }
        iVar5 = imp_strlen(pbVar4);
        uVar12 = uVar11 + iVar5;
        if (uVar12 < 0xfffffff8) {
          if (uVar12 < 0xb) {
            uStack_30 = (uint)(byte)((char)uVar12 * '\x02');
            uStack_28 = 0;
            uVar6 = 0;
            uStack_2c = 0;
          }
          else {
            uStack_28 = thunk_MwhHq((uVar12 | 7) + 1);
            uStack_30 = (uVar12 | 7) + 2;
            uVar6 = uStack_30 & 0xff;
            uStack_2c = uVar12;
          }
          uVar12 = uStack_28;
          if ((uVar6 & 1) == 0) {
            uVar12 = (uint)&uStack_30 | 1;
          }
          if (uVar11 != 0) {
            pbVar10 = *(byte **)(param_1 + 8);
            if ((bVar1 & 1) == 0) {
              pbVar10 = param_1 + 1;
            }
            imp___aeabi_memmove(uVar12,pbVar10,uVar11);
          }
          if (iVar5 != 0) {
            imp___aeabi_memmove(uVar12 + uVar11,pbVar4,iVar5);
          }
          *(undefined1 *)(uVar12 + uVar11 + iVar5) = 0;
          uVar7 = FUN_71ba17bc(*(undefined4 *)(iVar2 + 0x24));
          FUN_717c623c(&uStack_30,uVar7);
          if ((uStack_30 & 1) == 0) {
            return;
          }
          thunk_qNQrlu(uStack_28);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_712f6c1c(&uStack_30);
}


// =========================================================================
// Function: FUN_71621838
// Entry: 0x71621838 | Size: 1584 bytes
// =========================================================================

void FUN_71621838(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  FUN_716e6de8();
  FUN_714e7f84();
  FUN_71652f7c(DAT_711e9ee4,0,1);
  FUN_71652f7c(DAT_711e9ee4,1,1);
  FUN_71652f7c(DAT_711e9ee4,2,1);
  FUN_71652f7c(DAT_711e9ee4,3,1);
  FUN_71652f7c(DAT_711e9ee4,4,1);
  FUN_71652f7c(DAT_711e9ee4,5,1);
  FUN_71652f7c(DAT_711e9ee4,6,1);
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cc0);
  if (*pcVar8 == '\0') {
    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cb0);
    *(undefined1 *)((int)puVar14 + 0x15) = 1;
    uVar5 = DAT_70083198;
    uVar4 = DAT_70083194;
    uVar3 = DAT_70083190;
    uVar11 = DAT_7008318c;
    *puVar14 = DAT_70083188;
    puVar14[1] = uVar11;
    puVar14[2] = uVar3;
    puVar14[3] = uVar4;
    puVar14[4] = uVar5;
    *(undefined1 *)(puVar14 + 5) = DAT_7008319c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623fa8,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cc0);
    *puVar15 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cb0);
  if (*(char *)(iVar9 + 0x15) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar16 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0x77965d7 >> iVar16) | (byte)(-0x5ceede13 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar18 = iVar16 - 0x20;
      if (-1 < (int)uVar18) {
        bVar7 = (byte)(0xa31121ed >> (uVar18 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar19 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x13 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar19;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x15) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) goto LAB_71621cf4;
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_58 | 1;
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_716219c0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_58 = (uVar10 | 7) + 2;
    uStack_54 = uVar10;
    uStack_50 = uVar17;
LAB_716219c0:
    imp___aeabi_memmove(uVar17,iVar9,uVar10);
  }
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_717c75e4(&uStack_58);
  if ((uStack_58 & 1) != 0) {
    thunk_qNQrlu(uStack_50);
  }
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ce0);
  if (*pcVar8 == '\0') {
    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cd0);
    *(undefined1 *)((int)puVar14 + 0x13) = 1;
    uVar4 = DAT_700831ac;
    uVar3 = DAT_700831a8;
    uVar11 = DAT_700831a4;
    *puVar14 = DAT_700831a0;
    puVar14[1] = uVar11;
    puVar14[2] = uVar3;
    puVar14[3] = uVar4;
    uVar6 = DAT_700831b2;
    *(undefined2 *)(puVar14 + 4) = DAT_700831b0;
    *(undefined1 *)((int)puVar14 + 0x12) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130f888,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6ce0);
    *puVar15 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cd0);
  if (*(char *)(iVar9 + 0x13) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar16 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0xdfff2f27 >> iVar16) |
              (byte)(-0x6c1ca843 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      uVar18 = iVar16 - 0x20;
      if (-1 < (int)uVar18) {
        bVar7 = (byte)(0x93e357bd >> (uVar18 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar19 = 0xfffffffe < uVar10;
      bVar1 = uVar17 == 0;
      bVar2 = (0x11 < uVar10) <= uVar17;
      uVar10 = uVar10 + 1;
      uVar17 = uVar17 + bVar19;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x13) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
LAB_71621cf4:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_58);
  }
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_58 | 1;
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_71621af4;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_58 = (uVar10 | 7) + 2;
    uStack_54 = uVar10;
    uStack_50 = uVar17;
  }
  imp___aeabi_memmove(uVar17,iVar9,uVar10);
LAB_71621af4:
  *(undefined1 *)(uVar17 + uVar10) = 0;
  FUN_717c75e4(&uStack_58);
  if ((uStack_58 & 1) != 0) {
    thunk_qNQrlu(uStack_50);
  }
  FUN_716acdd8();
  FUN_71703894();
  iVar9 = DAT_712017f8;
  DAT_700c2ce4 = 0xffffffff;
  DAT_70ffcd27 = 0;
  DataMemoryBarrier(0xb);
  if (((DAT_711ad114 & 1) == 0) && (iVar16 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711ad114), iVar16 != 0))
  {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d00);
    if (*pcVar8 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cf0);
      *(undefined2 *)(puVar14 + 3) = 0x1cd;
      *puVar14 = 0x121ba7d2;
      puVar14[1] = 0x11c27ebe;
      puVar14[2] = 0xf3cacd3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7150cbf0,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d00);
      *puVar15 = 1;
    }
    pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6cf0);
    if (pbVar13[0xd] != 0) {
      *pbVar13 = *pbVar13 ^ 0xbd;
      pbVar13[1] = pbVar13[1] ^ 0xc9;
      pbVar13[2] = pbVar13[2] ^ 0x5f;
      pbVar13[3] = pbVar13[3] ^ 0x7b;
      pbVar13[0xd] = 0;
      pbVar13[4] = pbVar13[4] ^ 0xcd;
      pbVar13[5] = pbVar13[5] ^ 0x1d;
      pbVar13[6] = pbVar13[6] ^ 0xad;
      pbVar13[7] = pbVar13[7] ^ 0x7f;
      pbVar13[8] = pbVar13[8] ^ 0xbd;
      pbVar13[9] = pbVar13[9] ^ 0xc9;
      pbVar13[10] = pbVar13[10] ^ 0x5f;
      pbVar13[0xb] = pbVar13[0xb] ^ 0x7b;
      pbVar13[0xc] = pbVar13[0xc] ^ 0xcd;
    }
    DAT_711ad110 = FUN_71885ba4(pbVar13,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711ad114);
  }
  uVar10 = DAT_711ad110;
  imp___aeabi_memclr4(&uStack_54,0x30);
  uStack_58 = uVar10;
  uVar11 = FUN_713a1f9c(&uStack_58,param_1);
  uVar11 = FUN_713a1f9c(uVar11,param_2);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar9 + 0x34);
  piVar12 = (int *)thunk_MwhHq(0x3c);
  *piVar12 = 0;
  piVar12[1] = 0;
  FUN_713a10f8(piVar12 + 2,uVar11);
  piVar12[1] = iVar9 + 0x38;
  iVar16 = *(int *)(iVar9 + 0x38);
  *piVar12 = iVar16;
  *(int **)(iVar16 + 4) = piVar12;
  *(int **)(iVar9 + 0x38) = piVar12;
  *(int *)(iVar9 + 0x40) = *(int *)(iVar9 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9 + 0x34);
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    thunk_qNQrlu();
  }
  if (iStack_48 != 0) {
    iStack_44 = iStack_48;
    thunk_qNQrlu();
  }
  if (uStack_54 != 0) {
    uStack_50 = uStack_54;
    thunk_qNQrlu();
  }
  return;
}


// =========================================================================
// Function: FUN_71622798
// Entry: 0x71622798 | Size: 2284 bytes
// =========================================================================

void FUN_71622798(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  bool bVar21;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar13 = DAT_70ffc974;
  iVar8 = *(int *)(DAT_70ffc974 + 4);
  if (0 < iVar8) {
    iVar8 = *(int *)(DAT_70ffc974 + 8);
  }
  if (iVar8 < 1) {
    return;
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d20);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d10);
    *(undefined1 *)((int)puVar15 + 0x15) = 1;
    uVar16 = DAT_700831c8;
    uVar12 = DAT_700831c4;
    uVar20 = DAT_700831c0;
    uVar11 = DAT_700831bc;
    *puVar15 = DAT_700831b8;
    puVar15[1] = uVar11;
    puVar15[2] = uVar20;
    puVar15[3] = uVar12;
    puVar15[4] = uVar16;
    *(undefined1 *)(puVar15 + 5) = DAT_700831cc;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623fe0,puVar15,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d20);
    *puVar14 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d10);
  if (*(char *)(iVar8 + 0x15) != '\0') {
    uVar10 = 0;
    uVar18 = 0;
    do {
      iVar17 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0x3b4b4b1b >> iVar17) |
              (byte)(-0x66eeca4f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      uVar19 = iVar17 - 0x20;
      if (-1 < (int)uVar19) {
        bVar7 = (byte)(0x991135b1 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar8 + uVar10) = *(byte *)(iVar8 + uVar10) ^ bVar7;
      bVar21 = 0xfffffffe < uVar10;
      bVar1 = uVar18 == 0;
      bVar2 = (0x13 < uVar10) <= uVar18;
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x15) = 0;
  }
  uVar10 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar10) goto LAB_7162307c;
  if (uVar10 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_716228bc;
  }
  else {
    uVar18 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar18;
LAB_716228bc:
    imp___aeabi_memmove(uVar18,iVar8,uVar10);
  }
  *(undefined1 *)(uVar18 + uVar10) = 0;
  iVar8 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar8 != 0) {
    return;
  }
  iVar8 = *(int *)(DAT_70c38f4c + 0x29c);
  if (iVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)(iVar8 + 0x78);
  if (3 < uVar10) {
    return;
  }
  iVar17 = FUN_713f4fdc(uVar10);
  if (iVar17 != 0) {
    return;
  }
  uVar20 = *(undefined4 *)(iVar13 + 8);
  uVar11 = FUN_71ba1b94(*(undefined4 *)(iVar13 + 4));
  uVar11 = FUN_71ba21e8(uVar11,0x3e6147ae);
  uVar20 = FUN_71ba1b94(uVar20);
  uVar20 = FUN_71ba21e8(uVar20,0x3f47ae14);
  puVar15 = (undefined4 *)(DAT_70c38f90 + uVar10 * 8);
  *puVar15 = uVar11;
  puVar15[1] = uVar20;
  *(undefined4 *)(iVar8 + 0xa4) = uVar11;
  *(undefined4 *)(iVar8 + 0xa8) = uVar20;
  uVar12 = FUN_71ba1b94(*(undefined4 *)(iVar13 + 4));
  uVar12 = FUN_71ba13e0(uVar12,0x44200000);
  uVar16 = *(undefined4 *)(iVar8 + 0x94);
  uVar12 = FUN_71ba21e8(*(undefined4 *)(iVar8 + 0x14),uVar12);
  uVar12 = FUN_71ba21e8(uVar16,uVar12);
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d40);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d30);
    *(undefined1 *)((int)puVar15 + 0x15) = 1;
    uVar5 = DAT_700831e0;
    uVar4 = DAT_700831dc;
    uVar3 = DAT_700831d8;
    uVar16 = DAT_700831d4;
    *puVar15 = DAT_700831d0;
    puVar15[1] = uVar16;
    puVar15[2] = uVar3;
    puVar15[3] = uVar4;
    puVar15[4] = uVar5;
    *(undefined1 *)(puVar15 + 5) = DAT_700831e4;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624018,puVar15,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d40);
    *puVar14 = 1;
  }
  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d30);
  if (*(char *)(iVar13 + 0x15) != '\0') {
    uVar10 = 0;
    uVar18 = 0;
    do {
      iVar8 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0xb5d3957b >> iVar8) | (byte)(0x2b3dcfb5 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      uVar19 = iVar8 - 0x20;
      if (-1 < (int)uVar19) {
        bVar7 = (byte)(0x2b3dcfb5 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar13 + uVar10) = *(byte *)(iVar13 + uVar10) ^ bVar7;
      bVar21 = 0xfffffffe < uVar10;
      bVar1 = uVar18 == 0;
      bVar2 = (0x13 < uVar10) <= uVar18;
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar13 + 0x15) = 0;
  }
  uVar10 = imp_strlen(iVar13);
  if (0xfffffff7 < uVar10) goto LAB_7162307c;
  if (uVar10 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71622aa8;
  }
  else {
    uVar18 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar18;
LAB_71622aa8:
    imp___aeabi_memmove(uVar18,iVar13,uVar10);
  }
  *(undefined1 *)(uVar18 + uVar10) = 0;
  FUN_71ba240c(uVar11,uVar12);
  uVar16 = FUN_71ba17bc();
  FUN_717c623c(&uStack_30,uVar16);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d60);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d50);
    *(undefined1 *)(puVar15 + 5) = 1;
    uVar5 = DAT_700831f8;
    uVar4 = DAT_700831f4;
    uVar3 = DAT_700831f0;
    uVar16 = DAT_700831ec;
    *puVar15 = DAT_700831e8;
    puVar15[1] = uVar16;
    puVar15[2] = uVar3;
    puVar15[3] = uVar4;
    puVar15[4] = uVar5;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624050,puVar15,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d60);
    *puVar14 = 1;
  }
  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d50);
  if (*(char *)(iVar13 + 0x14) != '\0') {
    uVar10 = 0;
    uVar18 = 0;
    do {
      iVar8 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0x398751e3 >> iVar8) | (byte)(-0x6e72461f << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar19 = iVar8 - 0x20;
      if (-1 < (int)uVar19) {
        bVar7 = (byte)(0x918db9e1 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar13 + uVar10) = *(byte *)(iVar13 + uVar10) ^ bVar7;
      bVar21 = 0xfffffffe < uVar10;
      bVar1 = uVar18 == 0;
      bVar2 = (0x12 < uVar10) <= uVar18;
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar13 + 0x14) = 0;
  }
  uVar10 = imp_strlen(iVar13);
  if (0xfffffff7 < uVar10) goto LAB_7162307c;
  if (uVar10 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71622be0;
  }
  else {
    uVar18 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar18;
LAB_71622be0:
    imp___aeabi_memmove(uVar18,iVar13,uVar10);
  }
  *(undefined1 *)(uVar18 + uVar10) = 0;
  FUN_71ba240c(uVar20,uVar12);
  uVar16 = FUN_71ba17bc();
  FUN_717c623c(&uStack_30,uVar16);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d80);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d70);
    *(undefined1 *)((int)puVar15 + 0x16) = 1;
    uVar5 = DAT_70083210;
    uVar4 = DAT_7008320c;
    uVar3 = DAT_70083208;
    uVar16 = DAT_70083204;
    *puVar15 = DAT_70083200;
    puVar15[1] = uVar16;
    puVar15[2] = uVar3;
    puVar15[3] = uVar4;
    puVar15[4] = uVar5;
    *(undefined2 *)(puVar15 + 5) = DAT_70083214;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71624084,puVar15,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d80);
    *puVar14 = 1;
  }
  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d70);
  if (*(char *)(iVar13 + 0x16) != '\0') {
    uVar10 = 0;
    uVar18 = 0;
    do {
      iVar8 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0x95f78f4d >> iVar8) | (byte)(0x55c91b17 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      uVar19 = iVar8 - 0x20;
      if (-1 < (int)uVar19) {
        bVar7 = (byte)(0x55c91b17 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar13 + uVar10) = *(byte *)(iVar13 + uVar10) ^ bVar7;
      bVar21 = 0xfffffffe < uVar10;
      bVar1 = uVar18 == 0;
      bVar2 = (0x14 < uVar10) <= uVar18;
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar13 + 0x16) = 0;
  }
  uVar10 = imp_strlen(iVar13);
  if (0xfffffff7 < uVar10) goto LAB_7162307c;
  if (uVar10 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 != 0) goto LAB_71622d18;
  }
  else {
    uVar18 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar18;
LAB_71622d18:
    imp___aeabi_memmove(uVar18,iVar13,uVar10);
  }
  *(undefined1 *)(uVar18 + uVar10) = 0;
  FUN_71ba0b38(uVar11,uVar12);
  uVar11 = FUN_71ba17bc();
  FUN_717c623c(&uStack_30,uVar11);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6da0);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d90);
    *(undefined1 *)((int)puVar15 + 0x17) = 1;
    uVar4 = DAT_70083228;
    uVar3 = DAT_70083224;
    uVar16 = DAT_70083220;
    uVar11 = DAT_7008321c;
    *puVar15 = DAT_70083218;
    puVar15[1] = uVar11;
    puVar15[2] = uVar16;
    puVar15[3] = uVar3;
    puVar15[4] = uVar4;
    uVar6 = DAT_7008322e;
    *(undefined2 *)(puVar15 + 5) = DAT_7008322c;
    *(undefined1 *)((int)puVar15 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716240bc,puVar15,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6da0);
    *puVar14 = 1;
  }
  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c6d90);
  if (*(char *)(iVar13 + 0x17) != '\0') {
    uVar10 = 0;
    uVar18 = 0;
    do {
      iVar8 = (uVar10 & 7) * 8;
      bVar7 = (byte)(0xb5d9db1d >> iVar8) | (byte)(-0x6c745437 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar19 = iVar8 - 0x20;
      if (-1 < (int)uVar19) {
        bVar7 = (byte)(0x938babc9 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar13 + uVar10) = *(byte *)(iVar13 + uVar10) ^ bVar7;
      bVar21 = 0xfffffffe < uVar10;
      bVar1 = uVar18 == 0;
      bVar2 = (0x15 < uVar10) <= uVar18;
      uVar10 = uVar10 + 1;
      uVar18 = uVar18 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar13 + 0x17) = 0;
  }
  uVar10 = imp_strlen(iVar13);
  if (0xfffffff7 < uVar10) {
LAB_7162307c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar10 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_71622e60;
  }
  else {
    uVar18 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar18;
  }
  imp___aeabi_memmove(uVar18,iVar13,uVar10);
LAB_71622e60:
  *(undefined1 *)(uVar18 + uVar10) = 0;
  FUN_71ba0b38(uVar20,uVar12);
  uVar11 = FUN_71ba17bc();
  FUN_717c623c(&uStack_30,uVar11);
  if ((uStack_30 & 1) == 0) {
    return;
  }
  thunk_qNQrlu(uStack_28);
  return;
}


// =========================================================================
// Function: FUN_71624610
// Entry: 0x71624610 | Size: 44 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71624610(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint extraout_r2;
  int iVar12;
  uint uVar13;
  uint extraout_r2_00;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  iVar6 = FUN_71625204();
  if (iVar6 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7120);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7110);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar4 = DAT_70083434;
      uVar3 = DAT_70083430;
      uVar7 = DAT_7008342c;
      *puVar9 = DAT_70083428;
      puVar9[1] = uVar7;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      uVar5 = DAT_7008343a;
      *(undefined2 *)(puVar9 + 4) = DAT_70083438;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716266b4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7120);
      *puVar10 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7110);
    if (*(char *)(iVar6 + 0x13) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar17 = (uVar13 & 7) * 8;
        uVar16 = iVar17 - 0x20;
        bVar14 = (byte)(0x9b4dbd9f >> iVar17) |
                 (byte)(0x194db9cd << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar14 = (byte)(0x194db9cd >> (uVar16 & 0xff));
        }
        *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar14;
        bVar18 = 0xfffffffe < uVar13;
        bVar1 = uVar15 == 0;
        bVar2 = (0x11 < uVar13) <= uVar15;
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x13) = 0;
    }
    uVar13 = imp_strlen(iVar6);
    if (0xfffffff7 < uVar13) goto LAB_71624b4c;
    if (uVar13 < 0xb) {
      uVar15 = (uint)&uStack_68 | 1;
      uStack_68 = CONCAT31(uStack_68._1_3_,(char)(uVar13 << 1));
      if (uVar13 != 0) goto LAB_716249e0;
    }
    else {
      uVar15 = thunk_MwhHq((uVar13 | 7) + 1);
      uStack_68 = (uVar13 | 7) + 2;
      uStack_64 = uVar13;
      uStack_60 = uVar15;
LAB_716249e0:
      imp___aeabi_memmove(uVar15,iVar6,uVar13);
    }
    uVar7 = 0;
    *(undefined1 *)(uVar15 + uVar13) = 0;
    goto LAB_71624a3c;
  }
  iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70d0);
  iVar17 = 0;
  do {
    uVar19 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70e0);
    uVar15 = (uint)((ulonglong)uVar19 >> 0x20);
    uVar13 = extraout_r2;
    if (*(char *)uVar19 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70d0);
      *(undefined1 *)((int)puVar9 + 0x12) = 1;
      uVar4 = DAT_70083404;
      uVar3 = DAT_70083400;
      uVar7 = DAT_700833fc;
      *puVar9 = DAT_700833f8;
      puVar9[1] = uVar7;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      *(undefined2 *)(puVar9 + 4) = DAT_70083408;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162664c,puVar9,&DAT_70b0e000);
      uVar19 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70e0);
      uVar15 = (uint)((ulonglong)uVar19 >> 0x20);
      *(undefined1 *)uVar19 = 1;
      uVar13 = extraout_r2_00;
    }
    if (*(char *)(iVar6 + 0x12) != '\0') {
      uVar16 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar16 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x6bad4799 >> iVar12) |
                 (byte)(-0x388088dd << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xc77f7723 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar16) = *(byte *)(iVar6 + uVar16) ^ bVar14;
        uVar13 = uVar16 + 1;
        uVar15 = uVar11 + (0xfffffffe < uVar16);
        bVar1 = uVar11 == 0;
        bVar2 = (0x10 < uVar16) <= uVar11;
        uVar16 = uVar13;
        uVar11 = uVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x12) = 0;
    }
    FUN_71625a70(&uStack_68,uVar15,uVar13,iVar6,iVar17);
    uVar13 = imp_strlen(&uStack_68);
    if (0xfffffff7 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_74);
    }
    if (uVar13 < 0xb) {
      uStack_74 = CONCAT31(uStack_74._1_3_,(char)(uVar13 << 1));
      uVar15 = (uint)&uStack_74 | 1;
      if (uVar13 != 0) goto LAB_71624778;
    }
    else {
      uVar15 = thunk_MwhHq((uVar13 | 7) + 1);
      uStack_74 = (uVar13 | 7) + 2;
      uStack_70 = uVar13;
      uStack_6c = uVar15;
LAB_71624778:
      imp___aeabi_memcpy(uVar15,&uStack_68,uVar13);
    }
    *(undefined1 *)(uVar15 + uVar13) = 0;
    uVar7 = FUN_71625ad8(iVar17);
    FUN_717c623c(&uStack_74,uVar7);
    if ((uStack_74 & 1) != 0) {
      thunk_qNQrlu(uStack_6c);
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 != 7);
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7100);
  if (*pcVar8 == '\0') {
    puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70f0);
    *(undefined1 *)((int)puVar9 + 0x13) = 1;
    uVar4 = DAT_7008341c;
    uVar3 = DAT_70083418;
    uVar7 = DAT_70083414;
    *puVar9 = DAT_70083410;
    puVar9[1] = uVar7;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    uVar5 = DAT_70083422;
    *(undefined2 *)(puVar9 + 4) = DAT_70083420;
    *(undefined1 *)((int)puVar9 + 0x12) = uVar5;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71626680,puVar9,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7100);
    *puVar10 = 1;
  }
  iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c70f0);
  if (*(char *)(iVar6 + 0x13) != '\0') {
    uVar13 = 0;
    uVar15 = 0;
    do {
      iVar17 = (uVar13 & 7) * 8;
      uVar16 = iVar17 - 0x20;
      bVar14 = (byte)(0xb1c9b5ef >> iVar17) |
               (byte)(-0x78f822dd << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar16) {
        bVar14 = (byte)(0x8707dd23 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar14;
      bVar18 = 0xfffffffe < uVar13;
      bVar1 = uVar15 == 0;
      bVar2 = (0x11 < uVar13) <= uVar15;
      uVar13 = uVar13 + 1;
      uVar15 = uVar15 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar6 + 0x13) = 0;
  }
  uVar13 = imp_strlen(iVar6);
  if (0xfffffff7 < uVar13) {
LAB_71624b4c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_68);
  }
  if (uVar13 < 0xb) {
    uStack_68 = CONCAT31(uStack_68._1_3_,(char)(uVar13 << 1));
    uVar15 = (uint)&uStack_68 | 1;
    if (uVar13 != 0) goto LAB_71624a20;
  }
  else {
    uVar15 = thunk_MwhHq((uVar13 | 7) + 1);
    uStack_68 = (uVar13 | 7) + 2;
    uStack_64 = uVar13;
    uStack_60 = uVar15;
LAB_71624a20:
    imp___aeabi_memmove(uVar15,iVar6,uVar13);
  }
  uVar7 = 1;
  *(undefined1 *)(uVar15 + uVar13) = 0;
LAB_71624a3c:
  FUN_717c623c(&uStack_68,uVar7);
  if ((uStack_68 & 1) != 0) {
    thunk_qNQrlu(uStack_60);
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71625204
// Entry: 0x71625204 | Size: 968 bytes
// =========================================================================

bool FUN_71625204(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (DAT_711f6d58 == 0) {
    return false;
  }
  iVar8 = FUN_7165306c(DAT_711e9ee4,0);
  if (iVar8 == 0) {
    return false;
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7180);
  if (*pcVar9 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7170);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0xd1a86215;
    puVar12[1] = 0xec2cca22;
    puVar12[2] = 0xbda76e01;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71626710,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7180);
    *puVar13 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7170);
  if (pbVar10[0xc] != 0) {
    *pbVar10 = *pbVar10 ^ 0x71;
    pbVar10[1] = pbVar10[1] ^ 0xb;
    pbVar10[2] = pbVar10[2] ^ 0xc9;
    pbVar10[3] = pbVar10[3] ^ 0xbd;
    pbVar10[0xc] = 0;
    pbVar10[4] = pbVar10[4] ^ 0x4d;
    pbVar10[5] = pbVar10[5] ^ 0xad;
    pbVar10[6] = pbVar10[6] ^ 0x73;
    pbVar10[7] = pbVar10[7] ^ 0x83;
    pbVar10[8] = pbVar10[8] ^ 0x71;
    pbVar10[9] = pbVar10[9] ^ 0xb;
    pbVar10[10] = pbVar10[10] ^ 0xc9;
    pbVar10[0xb] = pbVar10[0xb] ^ 0xbd;
  }
  uVar11 = imp_strlen(pbVar10);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar11 < 0xb) {
    uVar15 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar11 << 1));
    if (uVar11 != 0) goto LAB_71625384;
  }
  else {
    uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_2c = (uVar11 | 7) + 2;
    uStack_28 = uVar11;
    uStack_24 = uVar15;
LAB_71625384:
    imp___aeabi_memmove(uVar15,pbVar10,uVar11);
  }
  bVar14 = false;
  *(undefined1 *)(uVar15 + uVar11) = 0;
  iVar8 = FUN_717c5e7c(&uStack_2c);
  if (iVar8 != 0 || DAT_711e9acc != 0) goto LAB_716254e4;
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71a0);
  if (*pcVar9 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7190);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar5 = DAT_70083450;
    uVar4 = DAT_7008344c;
    uVar3 = DAT_70083448;
    uVar2 = DAT_70083444;
    *puVar12 = DAT_70083440;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_70083456;
    *(undefined2 *)(puVar12 + 5) = DAT_70083454;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162673c,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71a0);
    *puVar13 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7190);
  if (*(char *)(iVar8 + 0x17) != '\0') {
    uVar11 = 0;
    uVar15 = 0;
    do {
      iVar16 = (uVar11 & 7) * 8;
      uVar17 = iVar16 - 0x20;
      bVar7 = (byte)(0xbdc90b71 >> iVar16) |
              (byte)(-0x7c8c52b3 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar17) {
        bVar7 = (byte)(0x8373ad4d >> (uVar17 & 0xff));
      }
      *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
      bVar18 = 0xfffffffe < uVar11;
      bVar14 = uVar15 == 0;
      bVar1 = (0x15 < uVar11) <= uVar15;
      uVar11 = uVar11 + 1;
      uVar15 = uVar15 + bVar18;
    } while (bVar14 && bVar1);
    *(undefined1 *)(iVar8 + 0x17) = 0;
  }
  uVar11 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar11 < 0xb) {
    uVar15 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar11 << 1));
    if (uVar11 != 0) goto LAB_716254a8;
  }
  else {
    uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_38 = (uVar11 | 7) + 2;
    uStack_34 = uVar11;
    uStack_30 = uVar15;
LAB_716254a8:
    imp___aeabi_memmove(uVar15,iVar8,uVar11);
  }
  *(undefined1 *)(uVar15 + uVar11) = 0;
  iVar8 = FUN_717c5e7c(&uStack_38);
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  bVar14 = iVar8 == 0;
LAB_716254e4:
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return bVar14;
}


// =========================================================================
// Function: FUN_71625a70
// Entry: 0x71625a70 | Size: 52 bytes
// =========================================================================

void FUN_71625a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x40,0,0x40,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_71625ad8
// Entry: 0x71625ad8 | Size: 412 bytes
// =========================================================================

byte FUN_71625ad8(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  bVar5 = false;
  bVar4 = 0;
  while ((((*(int *)(DAT_711f6d58 + 0xac) != 0 &&
           (iVar1 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c), iVar1 != 0)) && (param_1 != 5)
          ) && ((iVar1 = *(int *)(iVar1 + 0x130), iVar1 != 0 &&
                (iVar2 = thunk_FUN_715609f0(iVar1), iVar2 != 0))))) {
    if (param_1 != 1) {
      bVar3 = 0;
      switch(param_1) {
      case 0:
        iVar2 = FUN_71625ad8(3);
        if (((iVar2 != 0) || (iVar2 = FUN_71625ad8(4), iVar2 != 0)) ||
           (iVar2 = FUN_71625ad8(5), iVar2 != 0)) goto switchD_71625ba4_caseD_1;
        bVar3 = 1;
        if (*(int *)(DAT_711f6d58 + 0xac) == 0) goto switchD_71625ba4_caseD_1;
        iVar2 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 0x130);
        }
        if ((iVar2 == 0 || iVar1 == 0) || (iVar2 = thunk_FUN_715609f0(iVar1), iVar2 == 0))
        goto switchD_71625ba4_caseD_1;
      case 6:
        iVar2 = FUN_71625ad8(5);
        if (iVar2 == 0) {
          iVar2 = thunk_FUN_715ccc94(iVar1);
          if ((iVar2 == 0) && (iVar2 = FUN_715cd984(iVar1), iVar2 == 0)) {
            iVar1 = FUN_715ccacc(iVar1);
            bVar5 = iVar1 != 0;
          }
          else {
            bVar5 = true;
          }
        }
      case 1:
      case 2:
      case 5:
        goto switchD_71625ba4_caseD_1;
      case 3:
      case 4:
        iVar2 = FUN_71625ad8(5);
        if ((iVar2 == 0) && (iVar2 = FUN_71625ad8(6), iVar2 == 0)) {
          iVar1 = FUN_715ce49c(iVar1);
          bVar5 = iVar1 != 0;
        }
        goto switchD_71625ba4_caseD_1;
      }
      break;
    }
    iVar1 = FUN_71625ad8(3);
    if (((iVar1 != 0) || (iVar1 = FUN_71625ad8(4), iVar1 != 0)) ||
       (iVar1 = FUN_71625ad8(5), iVar1 != 0)) break;
    bVar4 = bVar4 ^ 1;
    param_1 = 6;
  }
  bVar3 = 0;
switchD_71625ba4_caseD_1:
  return bVar4 ^ bVar3 ^ bVar5;
}


// =========================================================================
// Function: dH_kMHCbdlPzbFVgCyA__y
// Entry: 0x71625eb8 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dH_kMHCbdlPzbFVgCyA__y(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0ee24;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71625f3c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71625f3c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71626880
// Entry: 0x71626880 | Size: 4 bytes
// =========================================================================

void FUN_71626880(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7162689c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71626910
// Entry: 0x71626910 | Size: 4 bytes
// =========================================================================

void FUN_71626910(void)

{
  return;
}


// =========================================================================
// Function: FUN_71626990
// Entry: 0x71626990 | Size: 1828 bytes
// =========================================================================

void FUN_71626990(void)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint extraout_r1;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined1 *puStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined1 auStack_40 [16];
  uint uStack_30;
  int iStack_2c;
  
  puVar18 = &DAT_711ad128;
  if (DAT_711ad128 != '\0') {
    piVar16 = (int *)(DAT_711a3938 + 0x1389c);
    iVar5 = *piVar16;
    iVar15 = *(int *)(DAT_711f6d58 + 4);
    if (iVar5 == 0) {
      iVar5 = FUN_713c301c(0);
      if (iVar5 == 0) {
        iVar5 = *piVar16;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar5 = FUN_715ba834();
        *piVar16 = iVar5;
      }
    }
    uVar6 = thunk_FUN_715c4004(iVar5);
    uVar7 = FUN_717b92b8(iVar15,uVar6);
    if (2000 < uVar7) {
      DAT_711ad128 = 0;
      return;
    }
    bVar19 = *(char *)(iVar15 + uVar7 + 0x3e88) != '\0';
    if (bVar19) {
      iVar15 = *(int *)(iVar15 + uVar7 * 4);
    }
    if (!bVar19 || iVar15 == 0) {
      DAT_711ad128 = 0;
      return;
    }
    FUN_7136cdfc(&puStack_70);
    thunk_FUN_715608f0(iVar15,&puStack_70);
    uVar7 = uStack_68;
    uVar6 = FUN_71ba21e8(uStack_6c,uStack_6c);
    uVar8 = FUN_71ba21e8(puStack_70,puStack_70);
    uVar6 = FUN_71ba0b38(uVar8,uVar6);
    uVar8 = FUN_71ba21e8(uVar7,uVar7);
    FUN_71ba0b38(uVar8,uVar6);
    uVar6 = imp_sqrtf();
    FUN_71ba13e0(uVar6,0x3bb60bc0);
    iVar5 = FUN_71ba17bc();
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    uVar6 = FUN_71602ffc(iVar15);
    iVar9 = FUN_71ba2cf0(uVar6,0);
    if (iVar9 == 0) {
      uVar6 = FUN_71602ffc(iVar15);
      FUN_71ba13e0(uVar6,0x3bb60bc0);
      iVar9 = FUN_71ba17bc();
      if (iVar9 - iVar5 < 2) {
        uVar6 = FUN_71602ffc(iVar15);
        FUN_71ba13e0(uVar6,0x3bb60bc0);
        iVar9 = FUN_71ba17bc();
        if (-2 < iVar9 - iVar5) {
          uVar6 = FUN_71602ffc(iVar15);
          FUN_71ba13e0(uVar6,0x3bb60bc0);
          iVar5 = FUN_71ba17bc();
        }
      }
    }
    if (iVar5 == 0) {
      DAT_711ad129 = '\0';
    }
    else {
      if ((0 < iVar5) && (DAT_711ad129 == '\0')) {
        DAT_711ad129 = '\x01';
        thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_30);
        DAT_711ad120 = uStack_30;
        DAT_711ad124 = iStack_2c;
      }
      if (99 < iVar5) {
        DAT_711ad128 = '\0';
        DAT_711ad129 = '\0';
        thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_30);
        uVar6 = FUN_71ba19d8(uStack_30 - DAT_711ad120,
                             iStack_2c - (DAT_711ad124 + (uint)(uStack_30 < DAT_711ad120)));
        FUN_71ba13e0(uVar6,0x4e6e6b28);
        uVar20 = FUN_71ba1638();
        uVar6 = (undefined4)((ulonglong)uVar20 >> 0x20);
        FUN_716486e8(s_0_100_km_h_time___fs_70064c9f,uVar6,(int)uVar20,uVar6);
      }
    }
  }
  iVar15 = FUN_7163d6b4();
  if (iVar15 == 0) {
    return;
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71d4);
  if (*pcVar10 == '\0') {
    puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71c4);
    *(undefined1 *)((int)puVar13 + 0x17) = 1;
    puVar18 = DAT_70083468;
    uVar11 = DAT_70083464;
    uVar8 = DAT_70083460;
    uVar6 = DAT_7008345c;
    *puVar13 = DAT_70083458;
    puVar13[1] = uVar6;
    puVar13[2] = uVar8;
    puVar13[3] = uVar11;
    puVar13[4] = puVar18;
    uVar2 = DAT_7008346e;
    *(undefined2 *)(puVar13 + 5) = DAT_7008346c;
    *(undefined1 *)((int)puVar13 + 0x16) = uVar2;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162ca5c,puVar13,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71d4);
    *puVar14 = 1;
  }
  iVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71c4);
  if (*(char *)(iVar15 + 0x17) != '\0') {
    uVar7 = 0;
    puVar14 = (undefined1 *)0x0;
    do {
      iVar5 = (uVar7 & 7) * 8;
      uVar17 = iVar5 - 0x20;
      bVar3 = (byte)(0xd317a5ef >> iVar5) | (byte)(-0x2a36e817 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar17) {
        bVar3 = (byte)(0xd5c917e9 >> (uVar17 & 0xff));
      }
      *(byte *)(iVar15 + uVar7) = *(byte *)(iVar15 + uVar7) ^ bVar3;
      puVar18 = puVar14 + (0xfffffffe < uVar7);
      bVar19 = puVar14 == (undefined1 *)0x0;
      bVar1 = (undefined1 *)(uint)(0x15 < uVar7) <= puVar14;
      uVar7 = uVar7 + 1;
      puVar14 = puVar18;
    } while (bVar19 && bVar1);
    *(undefined1 *)(iVar15 + 0x17) = 0;
  }
  uVar7 = imp_strlen(iVar15);
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&puStack_70);
  }
  if (uVar7 < 0xb) {
    uVar17 = (uint)&puStack_70 | 1;
    puStack_70 = (undefined1 *)CONCAT31(puStack_70._1_3_,(char)(uVar7 << 1));
    if (uVar7 == 0) goto LAB_71626d10;
  }
  else {
    puVar18 = (undefined1 *)(uVar7 | 7);
    uVar17 = thunk_MwhHq(puVar18 + 1);
    puStack_70 = puVar18 + 2;
    uStack_6c = uVar7;
    uStack_68 = uVar17;
  }
  imp___aeabi_memmove(uVar17,iVar15,uVar7);
LAB_71626d10:
  *(undefined1 *)(uVar17 + uVar7) = 0;
  iVar15 = FUN_717c5e7c(&puStack_70);
  if (((uint)puStack_70 & 1) != 0) {
    thunk_qNQrlu(uStack_68);
  }
  if (iVar15 == 0) {
    FUN_718d0d4c();
    uVar7 = extraout_r1;
    if (DAT_711f6d58 != 0) {
      uVar7 = (uint)DAT_700c71b0;
    }
    if (DAT_711f6d58 != 0 && uVar7 != 0) {
      if (DAT_711ad119 != '\0' || DAT_711ad11b != '\0') {
        iVar15 = *(int *)(DAT_711f6d58 + 4);
        uVar7 = 0;
        do {
          bVar19 = *(char *)(iVar15 + 0x3e88 + uVar7) != '\0';
          if (bVar19) {
            puVar18 = *(undefined1 **)(iVar15 + uVar7 * 4);
          }
          if ((bVar19 && puVar18 != (undefined1 *)0x0) &&
             (iVar5 = thunk_FUN_715609f0(puVar18), iVar5 != 0)) {
            uVar6 = FUN_715613f8(puVar18);
            iVar5 = FUN_71ba2d30(uVar6,0x41a00000);
            if (iVar5 != 0) {
              thunk_FUN_715600f0(puVar18,&puStack_70);
              uVar4 = FUN_715f8740(puVar18);
              uVar6 = thunk_FUN_715f4594(puVar18);
              uVar8 = *(undefined4 *)(*(int *)(puVar18 + 0xc) + 0x5a4);
              uVar11 = thunk_FUN_715f68dc(puVar18);
              uVar12 = FUN_715613f8(puVar18);
              uVar2 = *(undefined1 *)(*(int *)(puVar18 + 0xc) + 0x48c);
              thunk_FUN_71561220(puVar18);
              FUN_71627bac(auStack_40,uVar7 & 0xffff,uVar4,uVar6,uVar8,uVar11,1,uVar12,uVar2);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x7d1);
      }
      if (DAT_711ad11a != '\0') {
        uVar7 = 0;
        iVar15 = *(int *)(DAT_711f6d58 + 0x20);
        do {
          bVar19 = *(char *)(iVar15 + uVar7) != '\0';
          if (bVar19) {
            puVar18 = *(undefined1 **)(iVar15 + uVar7 * 4 + 1000);
          }
          if (bVar19 && puVar18 != (undefined1 *)0x0) {
            uVar6 = FUN_715613f8(puVar18);
            iVar5 = FUN_71ba2d30(uVar6,0x41a00000);
            if (iVar5 != 0) {
              thunk_FUN_715600f0(puVar18,&puStack_70);
              uVar6 = thunk_FUN_715609b0(puVar18);
              uVar8 = thunk_FUN_7151d174(puVar18);
              uVar11 = FUN_715613f8(puVar18);
              puVar18 = (undefined1 *)thunk_FUN_71561220(puVar18);
              FUN_71628ab8(auStack_40,uVar7 & 0xffff,uVar6,uVar8,uVar11,puVar18);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 1000);
        uVar7 = 0;
        iVar15 = *(int *)(DAT_711f6d58 + 8);
        do {
          bVar19 = *(char *)(iVar15 + uVar7) != '\0';
          if (bVar19) {
            puVar18 = *(undefined1 **)(iVar15 + uVar7 * 4 + 1000);
          }
          if (bVar19 && puVar18 != (undefined1 *)0x0) {
            uVar6 = FUN_715613f8(puVar18);
            iVar5 = FUN_71ba2d30(uVar6,0x41a00000);
            if (iVar5 != 0) {
              thunk_FUN_715600f0(puVar18,&puStack_70);
              uVar6 = thunk_FUN_715609b0(puVar18);
              uVar8 = FUN_715613f8(puVar18);
              uVar11 = thunk_FUN_71561220(puVar18);
              FUN_71629270(auStack_40,uVar7 & 0xffff,uVar6,uVar8,uVar11);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 1000);
      }
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71627bac
// Entry: 0x71627bac | Size: 1736 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71627bac(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 extraout_r1;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 auStack_164 [2];
  uint uStack_15c;
  undefined4 uStack_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [268];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if ((((DAT_711ad11b != '\0') && (param_2 < 0x7d1)) &&
      (*(char *)(*(int *)(DAT_711f6d58 + 4) + param_2 + 0x3e88) != '\0')) &&
     ((iVar7 = *(int *)(*(int *)(DAT_711f6d58 + 4) + param_2 * 4), iVar7 != 0 &&
      (iVar8 = thunk_FUN_715609f0(iVar7), iVar8 != 0)))) {
    iVar17 = *(int *)(DAT_70c39074 + *(short *)(*(int *)(iVar7 + 0xc) + 0x26) * 4);
    iVar8 = DAT_70c39074;
    if (iVar17 != 0) {
      iVar8 = *(int *)(iVar17 + 0x74);
    }
    if (iVar17 == 0 || iVar8 == 0) goto LAB_71628250;
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71e4);
    iVar21 = 0;
    do {
      iVar18 = *(int *)(iVar17 + 0x74);
      iVar19 = iVar18 + iVar21 * 0xc;
      iVar9 = FUN_71ba2cf0(*(undefined4 *)(iVar19 + 0x32c),0);
      if (((iVar9 == 0) || (iVar9 = FUN_71ba2cf0(*(undefined4 *)(iVar19 + 0x330),0), iVar9 == 0)) ||
         (iVar9 = FUN_71ba2cf0(*(undefined4 *)(iVar19 + 0x334),0), iVar9 == 0)) {
        iVar19 = *(int *)(iVar7 + 0xc);
        iVar9 = *(int *)(iVar19 + 0x14);
        if (iVar9 == 0) {
          FUN_713c4654(iVar19);
          FUN_713c5c74(iVar19 + 4,*(undefined4 *)(iVar19 + 0x14));
          iVar9 = *(int *)(iVar19 + 0x14);
          iVar18 = *(int *)(iVar17 + 0x74);
        }
        FUN_71340b14(&uStack_144,iVar9,iVar18 + iVar21 * 0xc + 0x32c);
        FUN_7136cdfc(&uStack_150);
        uVar26 = 0;
        FUN_7135950c(&uStack_144,&uStack_150,0,0,0,0);
        iVar9 = FUN_71ba2d70(uStack_148,0x3f800000);
        if (iVar9 != 0) {
          pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71f4);
          if (*pcVar10 == '\0') {
            puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71e4);
            *(undefined1 *)((int)puVar11 + 0x1b) = 1;
            uVar6 = DAT_70083484;
            uVar5 = DAT_70083480;
            uVar4 = DAT_7008347c;
            uVar3 = DAT_70083478;
            uVar20 = DAT_70083474;
            *puVar11 = DAT_70083470;
            puVar11[1] = uVar20;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            puVar11[4] = uVar5;
            puVar11[5] = uVar6;
            *(undefined2 *)(puVar11 + 6) = DAT_70083488;
            *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7008348a;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162ca94,puVar11,&DAT_70b0e000);
            puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c71f4);
            *puVar12 = 1;
          }
          if (*(char *)(iVar8 + 0x1b) != '\0') {
            uVar16 = 0;
            uVar13 = 0;
            do {
              iVar9 = (uVar16 & 7) * 8;
              uVar14 = iVar9 - 0x20;
              bVar15 = (byte)(0x3511eddf >> iVar9) |
                       (byte)(-0x4aa4e68d << ((uVar16 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar14) {
                bVar15 = (byte)(0xb55b1973 >> (uVar14 & 0xff));
              }
              *(byte *)(iVar8 + uVar16) = *(byte *)(iVar8 + uVar16) ^ bVar15;
              bVar22 = 0xfffffffe < uVar16;
              bVar1 = uVar13 == 0;
              bVar2 = (0x19 < uVar16) <= uVar13;
              uVar16 = uVar16 + 1;
              uVar13 = uVar13 + bVar22;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar8 + 0x1b) = 0;
          }
          FUN_71629a30(&uStack_15c,iVar21);
          uVar23 = FUN_71ba1638(uStack_144);
          uVar24 = FUN_71ba1638(uStack_140);
          uVar25 = FUN_71ba1638(uStack_13c);
          uVar16 = uStack_154;
          if ((uStack_15c & 1) == 0) {
            uVar16 = (uint)&uStack_15c | 1;
          }
          FUN_716299b8(auStack_138,100,iVar8,uVar16,iVar21,uVar26,uVar23,uVar24,uVar25);
          if ((uStack_15c & 1) != 0) {
            thunk_qNQrlu(uStack_154);
          }
          uStack_158 = uStack_14c;
          uStack_15c = uStack_150;
          FUN_718cc4ac(auStack_164,auStack_138,0,0,0xbf800000);
          uVar26 = FUN_71ba21e8(auStack_164[0],0xbf000000);
          uStack_15c = FUN_71ba0b38(uStack_15c,uVar26);
          FUN_71652a84(DAT_711e9ee4,&uStack_15c,0xff00ff00,1,auStack_138,0);
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != 0x13);
  }
  if (DAT_711ad119 != '\0') {
    FUN_7136cdfc(&uStack_144);
    uStack_140 = param_1[1];
    uVar20 = param_1[2];
    uVar26 = FUN_71ba21e8(param_11,0x3d428f5c);
    uStack_13c = FUN_71ba0b38(uVar26,uVar20);
    uStack_144 = *param_1;
    FUN_7136cdfc(&uStack_150);
    FUN_7135950c(&uStack_144,&uStack_150,0,0,0,0);
    iVar7 = FUN_71ba2d10(uStack_148,0x3f800000);
    if (iVar7 == 0) {
      FUN_71ba1638(param_6);
      FUN_716299b8(auStack_138,0x10c,s__id___d__type___d_subtype___d____70066d6e,param_2,param_3,
                   param_4,param_5);
      uVar16 = uStack_150;
      FUN_718cc4ac(auStack_164,auStack_138,0,0,0xbf800000);
      uVar26 = FUN_71ba21e8(auStack_164[0],0x3f000000);
      uStack_15c = FUN_71ba240c(uVar16,uVar26);
      FUN_71652a84(DAT_711e9ee4,&uStack_15c,0xffd48b35,1,auStack_138,0);
      uVar26 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f8ccccd);
      uStack_14c = FUN_71ba0b38(uVar26,uStack_14c);
      FUN_71ba1638(param_8);
      uVar26 = extraout_r1;
      FUN_716299b8(auStack_138,0x10c,s_Distance____2fm_7006ddb0);
      uStack_15c = uStack_150;
      uStack_158 = uStack_14c;
      FUN_718cc4ac(auStack_164,auStack_138,0,0,0xbf800000,uVar26);
      uVar26 = FUN_71ba21e8(auStack_164[0],0x3f000000);
      uStack_15c = FUN_71ba240c(uStack_15c,uVar26);
      FUN_71652a84(DAT_711e9ee4,&uStack_15c,0xffd48b35,1,auStack_138,0);
      uVar26 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f8ccccd);
      uStack_14c = FUN_71ba0b38(uVar26,uStack_14c);
      FUN_716299b8(auStack_138,0x10c,s_PassengerSeats___u_70066dad,param_9);
      uStack_15c = uStack_150;
      uStack_158 = uStack_14c;
      FUN_718cc4ac(auStack_164,auStack_138,0,0,0xbf800000);
      uVar26 = FUN_71ba21e8(auStack_164[0],0x3f000000);
      uStack_15c = FUN_71ba240c(uStack_15c,uVar26);
      FUN_71652a84(DAT_711e9ee4,&uStack_15c,0xffd48b35,1,auStack_138,0);
    }
  }
LAB_71628250:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71628ab8
// Entry: 0x71628ab8 | Size: 828 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71628ab8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStack_160 [2];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [268];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (DAT_711ad11a != '\0') {
    FUN_7136cdfc(&uStack_144);
    uStack_140 = param_1[1];
    uVar1 = FUN_71ba21e8(param_6,0x3d428f5c);
    uStack_13c = FUN_71ba0b38(uVar1,param_1[2]);
    uStack_144 = *param_1;
    FUN_7136cdfc(&uStack_150);
    uVar1 = 0;
    FUN_7135950c(&uStack_144,&uStack_150,0,0,0,0);
    iVar2 = FUN_71ba2d10(uStack_148,0x3f800000);
    if (iVar2 == 0) {
      uVar4 = FUN_71ba1638(param_4);
      FUN_716299b8(auStack_138,0x10c,s__id___d__model___d_Health____1f__700633bf,param_2,param_3,
                   uVar1,uVar4);
      uVar1 = uStack_150;
      uStack_154 = uStack_14c;
      FUN_718cc4ac(auStack_160,auStack_138,0,0,0xbf800000);
      uVar3 = FUN_71ba21e8(auStack_160[0],0x3f000000);
      uStack_158 = FUN_71ba240c(uVar1,uVar3);
      FUN_71652a84(DAT_711e9ee4,&uStack_158,0xffa0ff8b,1,auStack_138,0);
      uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f8ccccd);
      uStack_14c = FUN_71ba0b38(uVar1,uStack_14c);
      FUN_71ba1638(param_5);
      uVar1 = extraout_r1;
      FUN_716299b8(auStack_138,0x10c,s_Distance____2fm_7006ddb0);
      uStack_158 = uStack_150;
      uStack_154 = uStack_14c;
      FUN_718cc4ac(auStack_160,auStack_138,0,0,0xbf800000,uVar1);
      uVar1 = FUN_71ba21e8(auStack_160[0],0x3f000000);
      uStack_158 = FUN_71ba240c(uStack_158,uVar1);
      FUN_71652a84(DAT_711e9ee4,&uStack_158,0xffa0ff8b,1,auStack_138,0);
      uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f8ccccd);
      uStack_14c = FUN_71ba0b38(uVar1,uStack_14c);
      FUN_71ba1638(*param_1);
      uVar4 = FUN_71ba1638(param_1[1]);
      uVar5 = FUN_71ba1638(param_1[2]);
      uVar1 = extraout_r1_00;
      FUN_716299b8(auStack_138,0x10c,s_cPos____3f___3f___3f_7006a417);
      uStack_158 = uStack_150;
      uStack_154 = uStack_14c;
      FUN_718cc4ac(auStack_160,auStack_138,0,0,0xbf800000,uVar1,uVar4,uVar5);
      uVar1 = FUN_71ba21e8(auStack_160[0],0x3f000000);
      uStack_158 = FUN_71ba240c(uStack_158,uVar1);
      FUN_71652a84(DAT_711e9ee4,&uStack_158,0xffa0ff8b,1,auStack_138,0);
    }
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_71629270
// Entry: 0x71629270 | Size: 776 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71629270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStack_160 [2];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [268];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  FUN_7136cdfc(&uStack_144);
  uStack_144 = *param_1;
  uStack_140 = param_1[1];
  uVar1 = FUN_71ba21e8(param_5,0x3d428f5c);
  uStack_13c = FUN_71ba0b38(uVar1,param_1[2]);
  FUN_7136cdfc(&uStack_150);
  FUN_7135950c(&uStack_144,&uStack_150,0,0,0,0);
  iVar2 = FUN_71ba2d10(uStack_148,0x3f800000);
  if (iVar2 == 0) {
    FUN_716299b8(auStack_138,0x10c,s__object_id___d__type___d__7006a3fd,param_2,param_3);
    uVar1 = uStack_150;
    uStack_154 = uStack_14c;
    FUN_718cc4ac(auStack_160,auStack_138,0,0,0xbf800000);
    uVar3 = FUN_71ba21e8(auStack_160[0],0x3f000000);
    uStack_158 = FUN_71ba240c(uVar1,uVar3);
    FUN_71652a84(DAT_711e9ee4,&uStack_158,0xffd48b35,1,auStack_138,0);
    uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f8ccccd);
    uStack_14c = FUN_71ba0b38(uVar1,uStack_14c);
    FUN_71ba1638(param_4);
    uVar1 = extraout_r1;
    FUN_716299b8(auStack_138,0x10c,s_Distance____2fm_7006ddb0);
    uStack_158 = uStack_150;
    uStack_154 = uStack_14c;
    FUN_718cc4ac(auStack_160,auStack_138,0,0,0xbf800000,uVar1);
    uVar1 = FUN_71ba21e8(auStack_160[0],0x3f000000);
    uStack_158 = FUN_71ba240c(uStack_158,uVar1);
    FUN_71652a84(DAT_711e9ee4,&uStack_158,0xffd48b35,1,auStack_138,0);
    uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f8ccccd);
    uStack_14c = FUN_71ba0b38(uVar1,uStack_14c);
    FUN_71ba1638(*param_1);
    uVar4 = FUN_71ba1638(param_1[1]);
    uVar5 = FUN_71ba1638(param_1[2]);
    uVar1 = extraout_r1_00;
    FUN_716299b8(auStack_138,0x10c,s_cPos____3f___3f___3f_7006a417);
    uStack_158 = uStack_150;
    uStack_154 = uStack_14c;
    FUN_718cc4ac(auStack_160,auStack_138,0,0,0xbf800000,uVar1,uVar4,uVar5);
    uVar1 = FUN_71ba21e8(auStack_160[0],0x3f000000);
    uStack_158 = FUN_71ba240c(uStack_158,uVar1);
    FUN_71652a84(DAT_711e9ee4,&uStack_158,0xffd48b35,1,auStack_138,0);
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_716299b8
// Entry: 0x716299b8 | Size: 68 bytes
// =========================================================================

void FUN_716299b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,param_2,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_71629a30
// Entry: 0x71629a30 | Size: 5392 bytes
// =========================================================================

void FUN_71629a30(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  
  switch(param_2) {
  case 0:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7214);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7204);
      *(undefined1 *)(iVar8 + 0x11) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_70083490,0x11);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cad0,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7214);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7204);
    if (pbVar4[0x11] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        bVar3 = (byte)(0x798dc5a3 >> iVar8) |
                (byte)(-0x6acaa203 << ((uVar5 & 7) * -8 + 0x20 & 0xff));
        uVar9 = iVar8 - 0x20;
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0x95355dfd >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0xf < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
LAB_7162a818:
      pbVar4[0x11] = 0;
    }
    break;
  case 1:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7234);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7224);
      *puVar6 = 0x3bbc400d;
      *(undefined1 *)(puVar6 + 4) = 1;
      puVar6[1] = 0x6c291af3;
      puVar6[2] = 0x3ea45b00;
      puVar6[3] = 0x29350ce6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cb04,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7234);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7224);
    if (pbVar4[0x10] != 0) {
      *pbVar4 = *pbVar4 ^ 0x41;
      pbVar4[1] = pbVar4[1] ^ 9;
      pbVar4[2] = pbVar4[2] ^ 0xfb;
      pbVar4[3] = pbVar4[3] ^ 0x73;
      pbVar4[0x10] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xa7;
      pbVar4[5] = pbVar4[5] ^ 0x45;
      pbVar4[6] = pbVar4[6] ^ 0x7b;
      pbVar4[7] = pbVar4[7] ^ 0x29;
      pbVar4[8] = pbVar4[8] ^ 0x41;
      pbVar4[9] = pbVar4[9] ^ 9;
      pbVar4[10] = pbVar4[10] ^ 0xfb;
      pbVar4[0xb] = pbVar4[0xb] ^ 0x73;
      pbVar4[0xc] = pbVar4[0xc] ^ 0xa7;
      pbVar4[0xd] = pbVar4[0xd] ^ 0x45;
      pbVar4[0xe] = pbVar4[0xe] ^ 0x7b;
      pbVar4[0xf] = pbVar4[0xf] ^ 0x29;
    }
    break;
  case 2:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7254);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7244);
      *(undefined1 *)(iVar8 + 0x16) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_700834a8,0x16);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cb34,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7254);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7244);
    if (pbVar4[0x16] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        uVar9 = iVar8 - 0x20;
        bVar3 = (byte)(0x7b5fc9bd >> iVar8) | (byte)(0x7fad1dcd << ((uVar5 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0x7fad1dcd >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0x14 < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
      pbVar4[0x16] = 0;
    }
    break;
  case 3:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7274);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7264);
      *(undefined1 *)(iVar8 + 0x15) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_700834c0,0x15);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cb6c,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7274);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7264);
    if (pbVar4[0x15] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        uVar9 = iVar8 - 0x20;
        bVar3 = (byte)(0x4711e7eb >> iVar8) | (byte)(0x7393dc7 << ((uVar5 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0x7393dc7 >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0x13 < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
      pbVar4[0x15] = 0;
    }
    break;
  case 4:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7294);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7284);
      *puVar6 = 0x29fab042;
      *(undefined1 *)((int)puVar6 + 0xb) = 1;
      puVar6[1] = 0xce55b35e;
      *(undefined4 *)((int)puVar6 + 7) = 0xbba15fce;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cba4,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7294);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7284);
    if (pbVar4[0xb] != 0) {
      *pbVar4 = *pbVar4 ^ 0x11;
      pbVar4[1] = pbVar4[1] ^ 0xf5;
      pbVar4[2] = pbVar4[2] ^ 0xbb;
      pbVar4[3] = pbVar4[3] ^ 0x7d;
      pbVar4[0xb] = 0;
      pbVar4[4] = pbVar4[4] ^ 1;
      pbVar4[5] = pbVar4[5] ^ 0xf5;
      pbVar4[6] = pbVar4[6] ^ 7;
      pbVar4[7] = pbVar4[7] ^ 0x81;
      pbVar4[8] = pbVar4[8] ^ 0x11;
      pbVar4[9] = pbVar4[9] ^ 0xf5;
      pbVar4[10] = pbVar4[10] ^ 0xbb;
    }
    break;
  case 5:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72b4);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72a4);
      *puVar6 = 0xe9d26294;
      *(undefined1 *)((int)puVar6 + 10) = 1;
      puVar6[1] = 0x4e3e2fee;
      *(undefined2 *)(puVar6 + 2) = 0x2795;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cbd0,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72b4);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72a4);
    if (pbVar4[10] != 0) {
      *pbVar4 = *pbVar4 ^ 199;
      pbVar4[1] = pbVar4[1] ^ 0x27;
      pbVar4[2] = pbVar4[2] ^ 0x93;
      pbVar4[3] = pbVar4[3] ^ 0xbd;
      pbVar4[10] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xb1;
      pbVar4[5] = pbVar4[5] ^ 0x7d;
      pbVar4[6] = pbVar4[6] ^ 0x7b;
      pbVar4[7] = pbVar4[7] ^ 0xf;
      pbVar4[8] = pbVar4[8] ^ 199;
      pbVar4[9] = pbVar4[9] ^ 0x27;
    }
    break;
  case 6:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72d4);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72c4);
      puVar6[1] = 0x89830624;
      *(undefined1 *)(puVar6 + 2) = 1;
      *puVar6 = 0xfae17792;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cbfc,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72d4);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72c4);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0xd7;
      pbVar4[1] = pbVar4[1] ^ 0x2f;
      pbVar4[2] = pbVar4[2] ^ 0xa9;
      pbVar4[3] = pbVar4[3] ^ 0xbb;
      pbVar4[4] = pbVar4[4] ^ 0x71;
      pbVar4[5] = pbVar4[5] ^ 0x55;
      pbVar4[6] = pbVar4[6] ^ 0xd7;
      pbVar4[7] = pbVar4[7] ^ 0x89;
    }
    break;
  case 7:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72f4);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72e4);
      *puVar6 = 0x86c4f18e;
      *(undefined1 *)((int)puVar6 + 7) = 1;
      *(undefined4 *)((int)puVar6 + 3) = 0x9d463186;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cc24,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72f4);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c72e4);
    if (pbVar4[7] != 0) {
      pbVar4[7] = 0;
      *pbVar4 = *pbVar4 ^ 0xcb;
      pbVar4[1] = pbVar4[1] ^ 0xbf;
      pbVar4[2] = pbVar4[2] ^ 0x83;
      pbVar4[3] = pbVar4[3] ^ 0xcf;
      pbVar4[4] = pbVar4[4] ^ 0x7f;
      pbVar4[5] = pbVar4[5] ^ 3;
      pbVar4[6] = pbVar4[6] ^ 0x9d;
    }
    break;
  case 8:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7314);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7304);
      puVar6[1] = 0x7ded080a;
      *(undefined1 *)(puVar6 + 2) = 1;
      *puVar6 = 0xc2a2d076;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cc4c,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7314);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7304);
    if (pbVar4[8] != 0) {
      pbVar4[8] = 0;
      *pbVar4 = *pbVar4 ^ 0x31;
      pbVar4[1] = pbVar4[1] ^ 0x91;
      pbVar4[2] = pbVar4[2] ^ 0xf1;
      pbVar4[3] = pbVar4[3] ^ 0x9d;
      pbVar4[4] = pbVar4[4] ^ 0x49;
      pbVar4[5] = pbVar4[5] ^ 0x49;
      pbVar4[6] = pbVar4[6] ^ 0xbd;
      pbVar4[7] = pbVar4[7] ^ 0x7d;
    }
    break;
  case 9:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7334);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7324);
      *puVar6 = 0x220a69d3;
      *(undefined1 *)((int)puVar6 + 0xf) = 1;
      puVar6[1] = 0x94590a97;
      puVar6[2] = 0x2a1f6fc6;
      *(undefined4 *)((int)puVar6 + 0xb) = 0xb07982a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cc74,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7334);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7324);
    if (pbVar4[0xf] != 0) {
      *pbVar4 = *pbVar4 ^ 0x87;
      pbVar4[1] = pbVar4[1] ^ 0x3b;
      pbVar4[2] = pbVar4[2] ^ 0x4b;
      pbVar4[3] = pbVar4[3] ^ 0x6b;
      pbVar4[0xf] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xdb;
      pbVar4[5] = pbVar4[5] ^ 0x4f;
      pbVar4[6] = pbVar4[6] ^ 0xb;
      pbVar4[7] = pbVar4[7] ^ 0xcb;
      pbVar4[8] = pbVar4[8] ^ 0x87;
      pbVar4[9] = pbVar4[9] ^ 0x3b;
      pbVar4[10] = pbVar4[10] ^ 0x4b;
      pbVar4[0xb] = pbVar4[0xb] ^ 0x6b;
      pbVar4[0xc] = pbVar4[0xc] ^ 0xdb;
      pbVar4[0xd] = pbVar4[0xd] ^ 0x4f;
      pbVar4[0xe] = pbVar4[0xe] ^ 0xb;
    }
    break;
  case 10:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7354);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7344);
      *puVar6 = 0x7f050a53;
      *(undefined1 *)((int)puVar6 + 10) = 1;
      puVar6[1] = 0xca5467ee;
      *(undefined2 *)(puVar6 + 2) = 0x4b4f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cca4,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7354);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7344);
    if (pbVar4[10] != 0) {
      *pbVar4 = *pbVar4 ^ 0x1b;
      pbVar4[1] = pbVar4[1] ^ 0x4b;
      pbVar4[2] = pbVar4[2] ^ 0x4b;
      pbVar4[3] = pbVar4[3] ^ 0x3b;
      pbVar4[10] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xb1;
      pbVar4[5] = pbVar4[5] ^ 0x35;
      pbVar4[6] = pbVar4[6] ^ 0x11;
      pbVar4[7] = pbVar4[7] ^ 0x99;
      pbVar4[8] = pbVar4[8] ^ 0x1b;
      pbVar4[9] = pbVar4[9] ^ 0x4b;
    }
    break;
  case 0xb:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7374);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7364);
      *(undefined1 *)(iVar8 + 0x12) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_700834d8,0x12);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162ccd0,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7374);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7364);
    if (pbVar4[0x12] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        uVar9 = iVar8 - 0x20;
        bVar3 = (byte)(0x8fe16903 >> iVar8) | (byte)(0x29b373e5 << ((uVar5 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0x29b373e5 >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0x10 < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
LAB_7162a77c:
      pbVar4[0x12] = 0;
    }
    break;
  case 0xc:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7394);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7384);
      *puVar6 = 0xb83f1686;
      *(undefined1 *)((int)puVar6 + 0xf) = 1;
      puVar6[1] = 0xb9d01cae;
      puVar6[2] = 0xbe230b8e;
      *(undefined4 *)((int)puVar6 + 0xb) = 0x9911b8be;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cd04,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7394);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7384);
    if (pbVar4[0xf] != 0) {
      *pbVar4 = *pbVar4 ^ 0xd1;
      pbVar4[1] = pbVar4[1] ^ 0x5f;
      pbVar4[2] = pbVar4[2] ^ 0x71;
      pbVar4[3] = ~pbVar4[3];
      pbVar4[0xf] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xf1;
      pbVar4[5] = pbVar4[5] ^ 0x5d;
      pbVar4[6] = pbVar4[6] ^ 0x99;
      pbVar4[7] = pbVar4[7] ^ 0xeb;
      pbVar4[8] = pbVar4[8] ^ 0xd1;
      pbVar4[9] = pbVar4[9] ^ 0x5f;
      pbVar4[10] = pbVar4[10] ^ 0x71;
      pbVar4[0xb] = ~pbVar4[0xb];
      pbVar4[0xc] = pbVar4[0xc] ^ 0xf1;
      pbVar4[0xd] = pbVar4[0xd] ^ 0x5d;
      pbVar4[0xe] = pbVar4[0xe] ^ 0x99;
    }
    break;
  case 0xd:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73b4);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73a4);
      *puVar6 = 0xf4814e27;
      *(undefined1 *)(puVar6 + 3) = 1;
      puVar6[1] = 0xdc36e10e;
      puVar6[2] = 0xbd875e36;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71626710,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73b4);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73a4);
    if (pbVar4[0xc] != 0) {
      *pbVar4 = *pbVar4 ^ 0x71;
      pbVar4[1] = pbVar4[1] ^ 0xb;
      pbVar4[2] = pbVar4[2] ^ 0xc9;
      pbVar4[3] = pbVar4[3] ^ 0xbd;
      pbVar4[0xc] = 0;
      pbVar4[4] = pbVar4[4] ^ 0x4d;
      pbVar4[5] = pbVar4[5] ^ 0xad;
      pbVar4[6] = pbVar4[6] ^ 0x73;
      pbVar4[7] = pbVar4[7] ^ 0x83;
      pbVar4[8] = pbVar4[8] ^ 0x71;
      pbVar4[9] = pbVar4[9] ^ 0xb;
      pbVar4[10] = pbVar4[10] ^ 0xc9;
      pbVar4[0xb] = pbVar4[0xb] ^ 0xbd;
    }
    break;
  default:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7454);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7444);
      *puVar6 = 0xea8f7942;
      *(undefined1 *)((int)puVar6 + 10) = 1;
      puVar6[1] = 0x28af56d5;
      *(undefined2 *)(puVar6 + 2) = 0x1753;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cdd4,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7454);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7444);
    if (pbVar4[10] != 0) {
      *pbVar4 = *pbVar4 ^ 0x37;
      pbVar4[1] = pbVar4[1] ^ 0x17;
      pbVar4[2] = pbVar4[2] ^ 0xeb;
      pbVar4[3] = pbVar4[3] ^ 0x8f;
      pbVar4[10] = 0;
      pbVar4[4] = pbVar4[4] ^ 0xb3;
      pbVar4[5] = pbVar4[5] ^ 0x3f;
      pbVar4[6] = pbVar4[6] ^ 0xc1;
      pbVar4[7] = pbVar4[7] ^ 0x4d;
      pbVar4[8] = pbVar4[8] ^ 0x37;
      pbVar4[9] = pbVar4[9] ^ 0x17;
    }
    break;
  case 0xf:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73d4);
    if ((*pbVar4 & 1) == 0) {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73c4);
      *puVar6 = 0x8405a372;
      *(undefined2 *)(puVar6 + 3) = 0x141;
      puVar6[1] = 0x560d7814;
      puVar6[2] = 0x801db267;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7150ccf4,puVar6,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73d4);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73c4);
    if (pbVar4[0xd] != 0) {
      *pbVar4 = *pbVar4 ^ 0x37;
      pbVar4[1] = pbVar4[1] ^ 0xfb;
      pbVar4[2] = pbVar4[2] ^ 0x4d;
      pbVar4[3] = pbVar4[3] ^ 0xc5;
      pbVar4[0xd] = 0;
      pbVar4[4] = pbVar4[4] ^ 0x41;
      pbVar4[5] = pbVar4[5] ^ 0x2b;
      pbVar4[6] = pbVar4[6] ^ 0x59;
      pbVar4[7] = pbVar4[7] ^ 9;
      pbVar4[8] = pbVar4[8] ^ 0x37;
      pbVar4[9] = pbVar4[9] ^ 0xfb;
      pbVar4[10] = pbVar4[10] ^ 0x4d;
      pbVar4[0xb] = pbVar4[0xb] ^ 0xc5;
      pbVar4[0xc] = pbVar4[0xc] ^ 0x41;
    }
    break;
  case 0x10:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73f4);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73e4);
      *(undefined1 *)(iVar8 + 0x17) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_700834f0,0x17);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cd34,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73f4);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c73e4);
    if (pbVar4[0x17] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        uVar9 = iVar8 - 0x20;
        bVar3 = (byte)(0x7d7f3d23 >> iVar8) |
                (byte)(-0x7270fe83 << ((uVar5 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0x8d8f017d >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0x15 < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
      pbVar4[0x17] = 0;
    }
    break;
  case 0x11:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7414);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7404);
      *(undefined1 *)(iVar8 + 0x11) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_70083508,0x11);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cd6c,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7414);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7404);
    if (pbVar4[0x11] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        uVar9 = iVar8 - 0x20;
        bVar3 = (byte)(0xb2f6bcb >> iVar8) | (byte)(-0x4ed658b1 << ((uVar5 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0xb129a74f >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0xf < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
      goto LAB_7162a818;
    }
    break;
  case 0x12:
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7434);
    if ((*pbVar4 & 1) == 0) {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7424);
      *(undefined1 *)(iVar8 + 0x12) = 1;
      imp___aeabi_memcpy(iVar8,&DAT_70083520,0x12);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7162cda0,iVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7434);
      *puVar10 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7424);
    if (pbVar4[0x12] != 0) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        iVar8 = (uVar5 & 7) * 8;
        uVar9 = iVar8 - 0x20;
        bVar3 = (byte)(0xb5a3bf4d >> iVar8) |
                (byte)(-0x36b4d24d << ((uVar5 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar9) {
          bVar3 = (byte)(0xc94b2db3 >> (uVar9 & 0xff));
        }
        pbVar4[uVar5] = pbVar4[uVar5] ^ bVar3;
        bVar11 = 0xfffffffe < uVar5;
        bVar1 = uVar7 == 0;
        bVar2 = (0x10 < uVar5) <= uVar7;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + bVar11;
      } while (bVar1 && bVar2);
      goto LAB_7162a77c;
    }
  }
  uVar5 = imp_strlen(pbVar4);
  if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar5 < 0xb) {
    puVar10 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar5 << 1);
    if (uVar5 == 0) goto LAB_7162a880;
  }
  else {
    puVar10 = (undefined1 *)thunk_MwhHq((uVar5 | 7) + 1);
    *param_1 = (uVar5 | 7) + 2;
    param_1[1] = uVar5;
    param_1[2] = (int)puVar10;
  }
  imp___aeabi_memmove(puVar10,pbVar4,uVar5);
LAB_7162a880:
  puVar10[uVar5] = 0;
  return;
}


// =========================================================================
// Function: FUN_7162d204
// Entry: 0x7162d204 | Size: 3880 bytes
// =========================================================================

int * FUN_7162d204(int *param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  int aiStack_4c [3];
  uint uStack_40;
  uint uStack_3c;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  uVar19 = 0;
  param_1[0x20] = param_3;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_714c5f6c(1,&uStack_78,param_2,0);
  iVar7 = FUN_714c8774(uStack_78);
  if (iVar7 < 1) {
    FUN_714c82ec(uStack_78);
  }
  else {
    iVar8 = thunk__IBDl();
    *param_1 = iVar8;
    FUN_714c5410(uStack_78,iVar8,iVar7);
    FUN_714c82ec(uStack_78);
    iVar7 = *param_1;
    param_1[2] = iVar7;
    uVar26 = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[3] = 0;
    if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
      iVar8 = (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100;
      iVar9 = 0;
      do {
        iVar15 = iVar7 + iVar9 * -0x10;
        if (*(char *)(iVar15 + 0xc) == 'c') {
          cVar2 = *(char *)(iVar15 + 0xd);
          bVar27 = cVar2 == 'm';
          if (bVar27) {
            cVar2 = *(char *)(iVar15 + 0xe);
          }
          if ((bVar27 && cVar2 == 'a') && (*(char *)(iVar15 + 0xf) == 'p')) {
            uVar19 = *(uint *)(iVar15 + 0x14);
            uVar19 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                     uVar19 >> 0x18;
            goto LAB_7162d310;
          }
        }
        iVar9 = iVar9 + -1;
      } while (-iVar9 != iVar8);
      uVar19 = 0;
LAB_7162d310:
      iVar9 = 0;
      do {
        iVar15 = iVar7 + iVar9 * -0x10;
        cVar2 = *(char *)(iVar15 + 0xc);
        bVar27 = cVar2 == 'l';
        if (bVar27) {
          cVar2 = *(char *)(iVar15 + 0xd);
        }
        if (bVar27 && cVar2 == 'o') {
          cVar2 = *(char *)(iVar15 + 0xe);
          bVar27 = cVar2 == 'c';
          if (bVar27) {
            cVar2 = *(char *)(iVar15 + 0xf);
          }
          if (bVar27 && cVar2 == 'a') {
            uVar26 = *(uint *)(iVar15 + 0x14);
            uVar26 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                     uVar26 >> 0x18;
            goto LAB_7162d360;
          }
        }
        iVar9 = iVar9 + -1;
      } while (-iVar9 != iVar8);
      uVar26 = 0;
    }
LAB_7162d360:
    param_1[5] = uVar26;
    uVar24 = 0;
    uVar25 = 0;
    uVar16 = (uint)CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5));
    if (uVar16 != 0) {
      iVar8 = 0;
      do {
        iVar9 = iVar7 + iVar8 * -0x10;
        cVar2 = *(char *)(iVar9 + 0xc);
        bVar27 = cVar2 == 'h';
        if (bVar27) {
          cVar2 = *(char *)(iVar9 + 0xd);
        }
        if (bVar27 && cVar2 == 'e') {
          cVar2 = *(char *)(iVar9 + 0xe);
          bVar27 = cVar2 == 'a';
          if (bVar27) {
            cVar2 = *(char *)(iVar9 + 0xf);
          }
          if (bVar27 && cVar2 == 'd') {
            uVar25 = *(uint *)(iVar9 + 0x14);
            uVar25 = uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                     uVar25 >> 0x18;
            goto LAB_7162d3dc;
          }
        }
        iVar8 = iVar8 + -1;
      } while (-iVar8 != (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100);
      uVar25 = 0;
    }
LAB_7162d3dc:
    param_1[6] = uVar25;
    if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
      iVar8 = (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100;
      uVar16 = -iVar8;
      iVar9 = 0;
      do {
        iVar15 = iVar7 + iVar9 * -0x10;
        cVar2 = *(char *)(iVar15 + 0xc);
        bVar27 = cVar2 == 'g';
        if (bVar27) {
          cVar2 = *(char *)(iVar15 + 0xd);
        }
        if (bVar27 && cVar2 == 'l') {
          cVar2 = *(char *)(iVar15 + 0xe);
          bVar27 = cVar2 == 'y';
          if (bVar27) {
            cVar2 = *(char *)(iVar15 + 0xf);
          }
          if (bVar27 && cVar2 == 'f') {
            uVar24 = *(uint *)(iVar15 + 0x14);
            uVar24 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                     uVar24 >> 0x18;
            goto LAB_7162d44c;
          }
        }
        iVar9 = iVar9 + -1;
      } while (-iVar9 != iVar8);
      uVar24 = 0;
    }
LAB_7162d44c:
    param_1[7] = uVar24;
    uVar20 = 0;
    uVar17 = 0;
    if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
      iVar8 = 0;
      do {
        iVar9 = iVar7 + iVar8 * -0x10;
        cVar2 = *(char *)(iVar9 + 0xc);
        bVar27 = cVar2 == 'h';
        if (bVar27) {
          cVar2 = *(char *)(iVar9 + 0xd);
        }
        if (bVar27 && cVar2 == 'h') {
          cVar2 = *(char *)(iVar9 + 0xe);
          bVar27 = cVar2 == 'e';
          if (bVar27) {
            cVar2 = *(char *)(iVar9 + 0xf);
          }
          if (bVar27 && cVar2 == 'a') {
            uVar20 = *(uint *)(iVar9 + 0x14);
            uVar20 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                     uVar20 >> 0x18;
            goto LAB_7162d4c4;
          }
        }
        iVar8 = iVar8 + -1;
      } while (-iVar8 != (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100);
      uVar20 = 0;
    }
LAB_7162d4c4:
    param_1[8] = uVar20;
    if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
      iVar8 = 0;
      do {
        iVar9 = iVar7 + iVar8 * -0x10;
        cVar2 = *(char *)(iVar9 + 0xc);
        bVar27 = cVar2 == 'h';
        if (bVar27) {
          cVar2 = *(char *)(iVar9 + 0xd);
        }
        if (bVar27 && cVar2 == 'm') {
          cVar2 = *(char *)(iVar9 + 0xe);
          bVar27 = cVar2 == 't';
          if (bVar27) {
            cVar2 = *(char *)(iVar9 + 0xf);
          }
          if (bVar27 && cVar2 == 'x') {
            uVar17 = *(uint *)(iVar9 + 0x14);
            uVar17 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                     uVar17 >> 0x18;
            goto LAB_7162d534;
          }
        }
        iVar8 = iVar8 + -1;
      } while (-iVar8 != (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100);
      uVar17 = 0;
    }
LAB_7162d534:
    param_1[9] = uVar17;
    uVar21 = 0;
    uVar10 = 0;
    if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
      iVar8 = 0;
      do {
        iVar9 = iVar7 + iVar8 * -0x10;
        bVar27 = *(char *)(iVar9 + 0xc) == 'k';
        if (bVar27) {
          uVar16 = (uint)*(byte *)(iVar9 + 0xd);
        }
        if (bVar27 && uVar16 == 0x65) {
          uVar16 = (uint)*(byte *)(iVar9 + 0xe);
          bVar27 = uVar16 == 0x72;
          if (bVar27) {
            uVar16 = (uint)*(byte *)(iVar9 + 0xf);
          }
          if (bVar27 && uVar16 == 0x6e) {
            uVar16 = *(uint *)(iVar9 + 0x14);
            uVar10 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                     uVar16 >> 0x18;
            goto LAB_7162d5b4;
          }
        }
        iVar8 = iVar8 + -1;
      } while (-iVar8 != (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100);
      uVar10 = 0;
    }
LAB_7162d5b4:
    param_1[10] = uVar10;
    if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
      iVar8 = 0;
      do {
        iVar9 = iVar7 + iVar8 * -0x10;
        cVar2 = *(char *)(iVar9 + 0xc);
        bVar27 = cVar2 == 'G';
        if (bVar27) {
          cVar2 = *(char *)(iVar9 + 0xd);
        }
        if (bVar27 && cVar2 == 'P') {
          cVar2 = *(char *)(iVar9 + 0xe);
          bVar27 = cVar2 == 'O';
          if (bVar27) {
            cVar2 = *(char *)(iVar9 + 0xf);
          }
          if (bVar27 && cVar2 == 'S') {
            uVar16 = *(uint *)(iVar9 + 0x14);
            uVar21 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                     uVar16 >> 0x18;
            goto LAB_7162d624;
          }
        }
        iVar8 = iVar8 + -1;
      } while (-iVar8 != (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100);
      uVar21 = 0;
    }
LAB_7162d624:
    param_1[0xb] = uVar21;
    if ((uVar19 != 0 && uVar25 != 0) && (uVar20 != 0 && uVar17 != 0)) {
      if (uVar24 == 0) {
        iStack_68 = 2;
        iVar8 = 0;
        uStack_6c = 0;
        uStack_70 = 0;
        uStack_74 = 0;
        if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) == 0) {
          return param_1;
        }
        while (iVar9 = iVar7 + iVar8 * -0x10, *(char *)(iVar9 + 0xc) != 'C') {
LAB_7162d71c:
          iVar8 = iVar8 + -1;
          if (-iVar8 == (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100) {
            return param_1;
          }
        }
        cVar2 = *(char *)(iVar9 + 0xd);
        bVar27 = cVar2 != 'F';
        if (!bVar27) {
          cVar2 = *(char *)(iVar9 + 0xe);
        }
        if ((bVar27 || cVar2 != 'F') || (*(char *)(iVar9 + 0xf) != ' ')) goto LAB_7162d71c;
        uVar26 = *(uint *)(iVar9 + 0x14);
        uVar26 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                 uVar26 >> 0x18;
        if (uVar26 == 0) {
          return param_1;
        }
        uVar16 = 0;
        param_1[0x1a] = 0;
        param_1[0xe] = iVar7 + uVar26;
        uVar17 = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0x20000000;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        iStack_58 = param_1[0xe];
        uStack_54 = param_1[0xf];
        uVar24 = param_1[0x10];
        uVar26 = uStack_54 + 2;
        if ((int)uVar24 < (int)(uStack_54 + 2)) {
          uVar26 = uVar24;
        }
        if ((int)uStack_54 < -2) {
          uVar26 = uVar24;
        }
        if ((int)uVar26 < (int)uVar24) {
          uVar17 = (uint)*(byte *)(iStack_58 + uVar26);
        }
        uVar26 = uVar17;
        if ((int)uVar24 < (int)uVar17) {
          uVar26 = uVar24;
        }
        if ((int)uVar17 < (int)uVar24) {
          pbVar1 = (byte *)(iStack_58 + uVar26);
          uVar26 = uVar26 + 1;
          uVar16 = (uint)*pbVar1 << 8;
        }
        uVar17 = 0;
        if ((int)uVar26 < (int)uVar24) {
          uVar17 = (uint)*(byte *)(iStack_58 + uVar26);
          uVar26 = uVar26 + 1;
        }
        if ((uVar17 | uVar16) != 0) {
          uVar10 = 0;
          if ((int)uVar26 < (int)uVar24) {
            uVar10 = (uint)*(byte *)(iStack_58 + uVar26);
            uVar26 = uVar26 + 1;
          }
          uVar26 = uVar10 * (uVar17 | uVar16) + uVar26;
          uVar16 = uVar26;
          if ((int)uVar24 < (int)uVar26) {
            uVar16 = uVar24;
          }
          if ((int)uVar26 < 0) {
            uVar16 = uVar24;
          }
          if (uVar10 == 0) {
            iVar8 = -1;
          }
          else {
            uVar26 = 0;
            do {
              if ((int)uVar16 < (int)uVar24) {
                uVar17 = (uint)*(byte *)(iStack_58 + uVar16);
                uVar16 = uVar16 + 1;
              }
              else {
                uVar17 = 0;
              }
              uVar10 = uVar10 - 1;
              uVar26 = uVar26 << 8 | uVar17;
            } while (uVar10 != 0);
            iVar8 = uVar26 - 1;
          }
          uVar16 = iVar8 + uVar16;
          uVar26 = uVar16;
          if ((int)uVar24 < (int)uVar16) {
            uVar26 = uVar24;
          }
          if ((int)uVar16 < 0) {
            uVar26 = uVar24;
          }
        }
        uVar17 = 0;
        uVar16 = 0;
        uVar10 = uVar26;
        if ((int)uVar26 < (int)uVar24) {
          uVar10 = uVar26 + 1;
          uVar16 = (uint)*(byte *)(iStack_58 + uVar26) << 8;
        }
        if ((int)uVar10 < (int)uVar24) {
          uVar17 = (uint)*(byte *)(iStack_58 + uVar10);
          uVar10 = uVar10 + 1;
        }
        if ((uVar17 | uVar16) != 0) {
          uVar21 = 0;
          if ((int)uVar10 < (int)uVar24) {
            uVar21 = (uint)*(byte *)(iStack_58 + uVar10);
            uVar10 = uVar10 + 1;
          }
          uVar17 = uVar21 * (uVar17 | uVar16) + uVar10;
          uVar16 = uVar17;
          if ((int)uVar24 < (int)uVar17) {
            uVar16 = uVar24;
          }
          if ((int)uVar17 < 0) {
            uVar16 = uVar24;
          }
          if (uVar21 == 0) {
            iVar8 = -1;
          }
          else {
            uVar17 = 0;
            do {
              if ((int)uVar16 < (int)uVar24) {
                uVar13 = (uint)*(byte *)(iStack_58 + uVar16);
                uVar16 = uVar16 + 1;
                uVar10 = uVar16;
              }
              else {
                uVar13 = 0;
              }
              uVar21 = uVar21 - 1;
              uVar17 = uVar17 << 8 | uVar13;
            } while (uVar21 != 0);
            iVar8 = uVar17 - 1;
            uStack_54 = uVar10;
          }
          uVar16 = iVar8 + uVar16;
          uVar10 = uVar16;
          if ((int)uVar24 < (int)uVar16) {
            uVar10 = uVar24;
          }
          if ((int)uVar16 < 0) {
            uVar10 = uVar24;
          }
        }
        uVar17 = uVar10 - uVar26;
        uVar16 = 0;
        if (((int)(uVar17 | uVar26) < 0) || ((int)uVar24 < (int)uVar26)) {
          iStack_64 = 0;
          uVar18 = 0;
          uStack_5c = 0;
          uVar21 = 0;
          uVar13 = 0;
        }
        else {
          uVar21 = 0;
          iStack_64 = 0;
          uVar18 = 0;
          uVar13 = 0;
          uStack_5c = 0;
          if ((int)uVar10 <= (int)uVar24) {
            uVar22 = 0;
            if ((int)uVar17 < 0) {
              uVar22 = uVar17;
            }
            iStack_64 = iStack_58 + uVar26;
            if ((int)uVar17 < 1) {
              uVar16 = 0;
            }
            else {
              pbVar1 = (byte *)(iStack_64 + uVar22);
              uVar22 = 1;
              uVar16 = (uint)*pbVar1 << 8;
            }
            if ((int)uVar22 < (int)uVar17) {
              uVar21 = (uint)*(byte *)(iStack_64 + uVar22);
              uVar22 = uVar22 + 1;
            }
            uVar16 = uVar21 | uVar16;
            uVar21 = uVar17;
            if (((int)uVar22 < (int)uVar17) &&
               (uVar26 = (uint)*(byte *)(iStack_64 + uVar22), uVar26 != 0)) {
              uVar13 = uVar26;
              uVar14 = uVar17;
              if (-2 < (int)uVar22) {
                uVar14 = uVar22 + 1;
              }
              do {
                if ((int)uVar14 < (int)uVar17) {
                  uVar22 = (uint)*(byte *)(iStack_64 + uVar14);
                  uVar14 = uVar14 + 1;
                }
                else {
                  uVar22 = 0;
                }
                uVar13 = uVar13 - 1;
                uVar18 = uVar18 << 8 | uVar22;
              } while (uVar13 != 0);
              uStack_5c = 0;
              uVar22 = uVar26;
              do {
                if ((int)uVar14 < (int)uVar17) {
                  uVar13 = (uint)*(byte *)(iStack_64 + uVar14);
                  uVar14 = uVar14 + 1;
                }
                else {
                  uVar13 = 0;
                }
                uStack_5c = uStack_5c << 8 | uVar13;
                uVar22 = uVar22 - 1;
                uVar13 = uVar26;
              } while (uVar22 != 0);
            }
          }
        }
        uVar26 = uVar13 * (uVar16 + 1) + uVar18 + 2;
        uStack_5c = uStack_5c - uVar18;
        if ((int)(uVar26 | uStack_5c) < 0) {
          iStack_64 = 0;
          uStack_5c = 0;
        }
        else {
          iStack_64 = iStack_64 + uVar26;
          if ((int)uVar21 < (int)uVar26 || (int)(uVar21 - uVar26) < (int)uStack_5c) {
            uStack_5c = 0;
            iStack_64 = 0;
          }
        }
        uVar26 = 0;
        iStack_60 = 0;
        if ((int)uVar10 < (int)uVar24) {
          pbVar1 = (byte *)(iStack_58 + uVar10);
          uVar10 = uVar10 + 1;
          uVar16 = (uint)*pbVar1 << 8;
        }
        else {
          uVar16 = 0;
        }
        if ((int)uVar10 < (int)uVar24) {
          uVar26 = (uint)*(byte *)(iStack_58 + uVar10);
          uVar10 = uVar10 + 1;
        }
        if ((uVar26 | uVar16) != 0) {
          uVar17 = 0;
          if ((int)uVar10 < (int)uVar24) {
            uVar17 = (uint)*(byte *)(iStack_58 + uVar10);
            uVar10 = uVar10 + 1;
          }
          uVar10 = uVar17 * (uVar26 | uVar16) + uVar10;
          uVar26 = uVar10;
          if ((int)uVar24 < (int)uVar10) {
            uVar26 = uVar24;
          }
          if ((int)uVar10 < 0) {
            uVar26 = uVar24;
          }
          if (uVar17 == 0) {
            iVar8 = -1;
          }
          else {
            uVar16 = 0;
            do {
              if ((int)uVar26 < (int)uVar24) {
                uVar10 = (uint)*(byte *)(iStack_58 + uVar26);
                uVar26 = uVar26 + 1;
              }
              else {
                uVar10 = 0;
              }
              uVar17 = uVar17 - 1;
              uVar16 = uVar16 << 8 | uVar10;
            } while (uVar17 != 0);
            iVar8 = uVar16 - 1;
          }
          uVar26 = iVar8 + uVar26;
          uVar10 = uVar26;
          if ((int)uVar24 < (int)uVar26) {
            uVar10 = uVar24;
          }
          if ((int)uVar26 < 0) {
            uVar10 = uVar24;
          }
        }
        uVar16 = 0;
        uVar26 = 0;
        uVar17 = uVar10;
        if ((int)uVar10 < (int)uVar24) {
          uVar26 = (uint)*(byte *)(iStack_58 + uVar10) << 8;
          uVar17 = uVar10 + 1;
        }
        if ((int)uVar17 < (int)uVar24) {
          uVar16 = (uint)*(byte *)(iStack_58 + uVar17);
          uVar17 = uVar17 + 1;
        }
        if ((uVar16 | uVar26) != 0) {
          uVar21 = 0;
          if ((int)uVar17 < (int)uVar24) {
            uVar21 = (uint)*(byte *)(iStack_58 + uVar17);
            uVar17 = uVar17 + 1;
          }
          uVar17 = uVar21 * (uVar16 | uVar26) + uVar17;
          uVar26 = uVar17;
          if ((int)uVar24 < (int)uVar17) {
            uVar26 = uVar24;
          }
          if ((int)uVar17 < 0) {
            uVar26 = uVar24;
          }
          if (uVar21 == 0) {
            iVar8 = -1;
          }
          else {
            uVar16 = 0;
            do {
              if ((int)uVar26 < (int)uVar24) {
                uVar17 = (uint)*(byte *)(iStack_58 + uVar26);
                uVar26 = uVar26 + 1;
              }
              else {
                uVar17 = 0;
              }
              uVar21 = uVar21 - 1;
              uVar16 = uVar16 << 8 | uVar17;
            } while (uVar21 != 0);
            iVar8 = uVar16 - 1;
          }
          uVar26 = iVar8 + uVar26;
          uVar17 = uVar26;
          if ((int)uVar24 < (int)uVar26) {
            uVar17 = uVar24;
          }
          uStack_54 = uVar17;
          if ((int)uVar26 < 0) {
            uVar17 = uVar24;
            uStack_54 = uVar24;
          }
        }
        uVar16 = 0;
        uVar26 = 0;
        if (((int)(uVar17 - uVar10 | uVar10) < 0) || ((int)uVar24 < (int)uVar10)) {
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          if ((int)uVar17 <= (int)uVar24) {
            iVar8 = iStack_58 + uVar10;
            uVar26 = uVar17 - uVar10;
          }
        }
        param_1[0x14] = iVar8;
        param_1[0x16] = uVar26;
        param_1[0x15] = 0;
        uStack_50 = uVar24;
        FUN_7162e5e4(&iStack_64,0x11,1,&uStack_6c);
        FUN_7162e5e4(&iStack_64,0x106,1,&iStack_68);
        FUN_7162e5e4(&iStack_64,0x124,1,&uStack_70);
        FUN_7162e5e4(&iStack_64,0x125,1,&uStack_74);
        iVar8 = iStack_58;
        iStack_34 = 0;
        uStack_3c = 0;
        iStack_30 = iStack_64;
        iStack_2c = iStack_60;
        uStack_28 = uStack_5c;
        uStack_40 = 0;
        FUN_7162e5e4(&iStack_30,0x12,2,&uStack_40);
        uVar26 = uStack_3c;
        if (uStack_3c == 0) {
LAB_7162dfe4:
          iVar9 = 0;
        }
        else {
          iVar9 = 0;
          if (uStack_40 != 0) {
            if ((int)(uStack_40 | uStack_3c) < 0) {
              aiStack_4c[0] = 0;
              aiStack_4c[2] = 0;
            }
            else {
              aiStack_4c[0] = iVar8 + uStack_3c;
              aiStack_4c[2] = uStack_40;
              if ((int)uVar24 < (int)uStack_3c || (int)(uVar24 - uStack_3c) < (int)uStack_40) {
                aiStack_4c[2] = 0;
                aiStack_4c[0] = 0;
              }
            }
            aiStack_4c[1] = 0;
            FUN_7162e5e4(aiStack_4c,0x13,1,&iStack_34);
            if (iStack_34 == 0) goto LAB_7162dfe4;
            uVar26 = iStack_34 + uVar26;
            uVar16 = 0;
            uVar17 = 0;
            uVar10 = uVar26;
            if ((int)uVar24 < (int)uVar26) {
              uVar10 = uVar24;
            }
            if ((int)uVar26 < 0) {
              uVar10 = uVar24;
            }
            uVar26 = uVar10;
            if ((int)uVar10 < (int)uVar24) {
              uVar16 = (uint)*(byte *)(iVar8 + uVar10) << 8;
              uVar26 = uVar10 + 1;
            }
            if ((int)uVar26 < (int)uVar24) {
              uVar17 = (uint)*(byte *)(iVar8 + uVar26);
              uVar26 = uVar26 + 1;
            }
            if ((uVar17 | uVar16) != 0) {
              uVar21 = 0;
              if ((int)uVar26 < (int)uVar24) {
                uVar21 = (uint)*(byte *)(iVar8 + uVar26);
                uVar26 = uVar26 + 1;
              }
              uVar26 = uVar21 * (uVar17 | uVar16) + uVar26;
              uVar16 = uVar26;
              if ((int)uVar24 < (int)uVar26) {
                uVar16 = uVar24;
              }
              if ((int)uVar26 < 0) {
                uVar16 = uVar24;
              }
              if (uVar21 == 0) {
                iVar9 = -1;
              }
              else {
                uVar26 = 0;
                do {
                  if ((int)uVar16 < (int)uVar24) {
                    uVar17 = (uint)*(byte *)(iVar8 + uVar16);
                    uVar16 = uVar16 + 1;
                  }
                  else {
                    uVar17 = 0;
                  }
                  uVar21 = uVar21 - 1;
                  uVar26 = uVar26 << 8 | uVar17;
                } while (uVar21 != 0);
                iVar9 = uVar26 - 1;
              }
              uVar16 = iVar9 + uVar16;
              uVar26 = uVar16;
              if ((int)uVar24 < (int)uVar16) {
                uVar26 = uVar24;
              }
              if ((int)uVar16 < 0) {
                uVar26 = uVar24;
              }
            }
            uVar16 = uVar26 - uVar10;
            iVar9 = iVar8 + uVar10;
            if ((int)(uVar16 | uVar10) < 0 || (int)uVar24 < (int)uVar26) {
              uVar16 = 0;
              iVar9 = 0;
            }
          }
        }
        uVar17 = uStack_6c;
        uVar26 = uStack_74;
        param_1[0x17] = iVar9;
        param_1[0x18] = 0;
        param_1[0x19] = uVar16;
        if (iStack_68 != 2) {
          return param_1;
        }
        if (uStack_6c == 0) {
          return param_1;
        }
        if (uStack_70 != 0) {
          if (uStack_74 == 0) {
            return param_1;
          }
          uStack_54 = uStack_70;
          if ((int)uVar24 < (int)uStack_70) {
            uStack_54 = uVar24;
          }
          if ((int)uStack_70 < 0) {
            uStack_54 = uVar24;
          }
          FUN_7162e488(&iStack_30,&iStack_58);
          param_1[0x1a] = iStack_30;
          param_1[0x1b] = iStack_2c;
          param_1[0x1c] = uStack_28;
          uVar16 = uStack_50 - uVar26;
          param_1[0x1e] = 0;
          iVar8 = iStack_58 + uVar26;
          if ((int)uStack_50 < (int)uVar26 || (int)(uVar16 | uVar26) < 0) {
            uVar16 = 0;
            iVar8 = 0;
          }
          param_1[0x1f] = uVar16;
          param_1[0x1d] = iVar8;
          uVar24 = uStack_50;
        }
        uStack_54 = uVar17;
        if ((int)uVar24 < (int)uVar17) {
          uStack_54 = uVar24;
        }
        if ((int)uVar17 < 0) {
          uStack_54 = uVar24;
        }
        FUN_7162e488(&iStack_30,&iStack_58);
        param_1[0x11] = iStack_30;
        param_1[0x12] = iStack_2c;
        param_1[0x13] = uStack_28;
      }
      else if (uVar26 == 0) {
        return param_1;
      }
      uVar26 = 0xffff;
      if (CONCAT11(*(byte *)(iVar7 + 4),*(byte *)(iVar7 + 5)) != 0) {
        iVar8 = 0;
        do {
          iVar9 = iVar7 + iVar8 * -0x10;
          if (*(char *)(iVar9 + 0xc) == 'm') {
            cVar2 = *(char *)(iVar9 + 0xd);
            bVar27 = cVar2 == 'a';
            if (bVar27) {
              cVar2 = *(char *)(iVar9 + 0xe);
            }
            if ((bVar27 && cVar2 == 'x') && (*(char *)(iVar9 + 0xf) == 'p')) {
              uVar16 = *(uint *)(iVar9 + 0x14);
              uVar16 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8
                       | uVar16 >> 0x18;
              if (uVar16 != 0) {
                uVar5 = *(ushort *)(iVar7 + uVar16 + 4);
                uVar26 = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
              }
              break;
            }
          }
          iVar8 = iVar8 + -1;
        } while (-iVar8 != (uint)*(byte *)(iVar7 + 5) + (uint)*(byte *)(iVar7 + 4) * 0x100);
      }
      param_1[4] = uVar26;
      iVar8 = iVar7 + uVar19;
      iVar9 = 0;
      bVar3 = *(byte *)(iVar8 + 2);
      bVar4 = *(byte *)(iVar8 + 3);
      param_1[0xc] = 0;
      if (CONCAT11(bVar3,bVar4) != 0) {
        iVar15 = 0;
        do {
          iVar23 = iVar8 + iVar9 * -8;
          uVar26 = ((uint)*(ushort *)(iVar23 + 4) << 0x18 |
                   (uint)(*(ushort *)(iVar23 + 4) >> 8) << 0x10) >> 0x10;
          if (uVar26 == 0) {
LAB_7162d890:
            uVar26 = *(uint *)(iVar23 + 8);
            iVar15 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
                     uVar26 >> 0x18) + uVar19;
            param_1[0xc] = iVar15;
          }
          else if (uVar26 == 3) {
            uVar26 = (uint)*(ushort *)(iVar23 + 6) << 0x18 |
                     (uint)(*(ushort *)(iVar23 + 6) >> 8) << 0x10;
            bVar27 = uVar26 == 0xa0000;
            if (!bVar27) {
              uVar26 = uVar26 >> 0x10;
            }
            if (bVar27 || uVar26 == 1) goto LAB_7162d890;
          }
          iVar9 = iVar9 + -1;
        } while (-iVar9 != (uint)bVar4 + (uint)bVar3 * 0x100);
        if (iVar15 != 0) {
          uVar5 = *(ushort *)(iVar7 + uVar25 + 0x32);
          iVar15 = param_1[2] + uVar20;
          param_1[0xd] = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
          uVar5 = *(ushort *)(iVar15 + 6);
          uVar6 = *(ushort *)(iVar15 + 4);
          uVar11 = FUN_71ba1b94(param_1[0x20]);
          uVar12 = FUN_71ba1b94((int)(short)(uVar6 << 8 | uVar6 >> 8) -
                                ((int)((uint)uVar5 << 0x18 | (uint)(uVar5 >> 8) << 0x10) >> 0x10));
          iVar7 = FUN_71ba13e0(uVar11,uVar12);
          param_1[0x25] = iVar7;
          param_1[0x21] = (int)(short)(*(ushort *)(iVar15 + 4) << 8 | *(ushort *)(iVar15 + 4) >> 8);
          iVar9 = (int)(short)(*(ushort *)(iVar15 + 6) << 8 | *(ushort *)(iVar15 + 6) >> 8);
          param_1[0x22] = iVar9;
          uVar11 = FUN_71ba1b94();
          FUN_71ba21e8(iVar7,uVar11);
          imp_roundf();
          iVar8 = FUN_71ba17bc();
          uVar5 = *(ushort *)(iVar15 + 8);
          param_1[0x21] = iVar8;
          *(undefined1 *)(param_1 + 0x24) = 1;
          param_1[0x23] = (int)(short)(uVar5 << 8 | uVar5 >> 8);
          uVar11 = FUN_71ba1b94(iVar9);
          FUN_71ba21e8(iVar7,uVar11);
          imp_roundf();
          iVar7 = FUN_71ba17bc();
          param_1[0x22] = iVar7;
        }
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7162e400
// Entry: 0x7162e400 | Size: 52 bytes
// =========================================================================

int * FUN_7162e400(int *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  thunk_dGrRHE(*param_1);
  *param_1 = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_7162e468
// Entry: 0x7162e468 | Size: 8 bytes
// =========================================================================

undefined1 FUN_7162e468(int param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}


// =========================================================================
// Function: FUN_7162e488
// Entry: 0x7162e488 | Size: 324 bytes
// =========================================================================

void FUN_7162e488(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = 0;
  uVar2 = uVar7;
  if ((int)uVar7 < (int)uVar8) {
    uVar2 = uVar7 + 1;
    param_2[1] = uVar2;
    uVar5 = (uint)*(byte *)(*param_2 + uVar7) << 8;
  }
  if ((int)uVar2 < (int)uVar8) {
    param_2[1] = uVar2 + 1;
    uVar5 = uVar5 | *(byte *)(*param_2 + uVar2);
    uVar2 = uVar2 + 1;
  }
  if (uVar5 != 0) {
    uVar3 = 0;
    if ((int)uVar2 < (int)uVar8) {
      param_2[1] = uVar2 + 1;
      uVar3 = (uint)*(byte *)(*param_2 + uVar2);
      uVar2 = uVar2 + 1;
    }
    uVar2 = uVar3 * uVar5 + uVar2;
    uVar5 = uVar2;
    if ((int)uVar8 < (int)uVar2) {
      uVar5 = uVar8;
    }
    if ((int)uVar2 < 0) {
      uVar5 = uVar8;
    }
    if (uVar3 == 0) {
      iVar1 = -1;
    }
    else {
      uVar6 = 0;
      uVar2 = uVar5;
      do {
        if ((int)uVar2 < (int)uVar8) {
          uVar5 = uVar2 + 1;
          param_2[1] = uVar5;
          uVar4 = (uint)*(byte *)(*param_2 + uVar2);
        }
        else {
          uVar4 = 0;
          uVar5 = uVar2;
        }
        uVar3 = uVar3 - 1;
        uVar6 = uVar6 << 8 | uVar4;
        uVar2 = uVar5;
      } while (uVar3 != 0);
      iVar1 = uVar6 - 1;
    }
    uVar5 = iVar1 + uVar5;
    uVar2 = uVar5;
    if ((int)uVar8 < (int)uVar5) {
      uVar2 = uVar8;
    }
    if ((int)uVar5 < 0) {
      uVar2 = uVar8;
    }
    param_2[1] = uVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (-1 < (int)(uVar2 - uVar7 | uVar7)) {
    uVar5 = uVar7;
    if ((int)uVar7 <= (int)uVar8) {
      uVar5 = uVar2;
    }
    if ((int)uVar5 <= (int)uVar8) {
      iVar1 = *param_2;
      param_1[2] = uVar2 - uVar7;
      *param_1 = iVar1 + uVar7;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7162e5e4
// Entry: 0x7162e5e4 | Size: 440 bytes
// =========================================================================

void FUN_7162e5e4(int *param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  uVar6 = param_1[2];
  uVar9 = uVar6;
  if (-1 < (int)uVar6) {
    uVar9 = 0;
  }
  param_1[1] = uVar9;
  if (0 < (int)uVar6) {
    do {
      uVar10 = 0;
      uVar7 = uVar9;
      uVar4 = uVar9;
      if ((int)uVar9 < (int)uVar6) {
        do {
          while( true ) {
            iVar8 = *param_1;
            if (*(byte *)(iVar8 + uVar7) < 0x1c) {
              uVar4 = uVar7 + 1;
              param_1[1] = uVar4;
              uVar10 = (uint)*(byte *)(iVar8 + uVar7);
              if (uVar10 == 0xc) {
                uVar10 = 0;
                if ((int)uVar4 < (int)uVar6) {
                  param_1[1] = uVar7 + 2;
                  uVar10 = (uint)*(byte *)(iVar8 + uVar4);
                  uVar4 = uVar7 + 2;
                }
                uVar10 = uVar10 | 0x100;
              }
              goto LAB_7162e6cc;
            }
            if (*(byte *)(iVar8 + uVar7) != 0x1e) break;
            uVar3 = uVar6;
            if (-2 < (int)uVar7) {
              uVar3 = uVar7 + 1;
            }
            param_1[1] = uVar3;
            uVar4 = uVar6;
            if ((int)uVar6 < (int)uVar3) {
              uVar4 = uVar3;
            }
            do {
              uVar7 = uVar4;
              if (uVar4 == uVar3) goto LAB_7162e6cc;
              uVar7 = uVar3 + 1;
              param_1[1] = uVar7;
              pbVar1 = (byte *)(iVar8 + uVar3);
            } while (((*pbVar1 & 0xf) != 0xf) && (uVar3 = uVar7, (*pbVar1 & 0xf0) != 0xf0));
            uVar4 = uVar7;
            if ((int)uVar6 <= (int)uVar7) goto LAB_7162e6cc;
          }
          FUN_7162e7ec(param_1);
          uVar7 = param_1[1];
          uVar6 = param_1[2];
          uVar4 = uVar7;
        } while ((int)uVar7 < (int)uVar6);
      }
LAB_7162e6cc:
      if (uVar10 == param_2) {
        iStack_2c = 0;
        uStack_28 = uVar7 - uVar9;
        if ((int)(uStack_28 | uVar9) < 0) {
          return;
        }
        uVar4 = uVar9;
        if ((int)uVar9 <= (int)uVar6) {
          uVar4 = uVar7;
        }
        if ((int)uVar6 < (int)uVar4) {
          return;
        }
        uVar6 = param_3;
        if (0 < (int)param_3) {
          uVar6 = uStack_28;
        }
        iStack_30 = *param_1 + uVar9;
        if ((int)uVar6 < 1) {
          return;
        }
        iVar8 = 0;
        do {
          uVar5 = FUN_7162e7ec(&iStack_30);
          *(undefined4 *)(param_4 + iVar8 * 4) = uVar5;
          iVar8 = iVar8 + 1;
          bVar11 = SBORROW4(iVar8,param_3);
          iVar2 = iVar8 - param_3;
          if (iVar8 < (int)param_3) {
            bVar11 = SBORROW4(iStack_2c,uStack_28);
            iVar2 = iStack_2c - uStack_28;
          }
        } while (iVar2 < 0 != bVar11);
        return;
      }
      uVar9 = uVar4;
    } while ((int)uVar4 < (int)uVar6);
  }
  return;
}


// =========================================================================
// Function: FUN_7162e7ec
// Entry: 0x7162e7ec | Size: 376 bytes
// =========================================================================

uint FUN_7162e7ec(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_1[1];
  uVar1 = 0;
  iVar4 = param_1[2];
  if (iVar5 < iVar4) {
    iVar7 = *param_1;
    iVar8 = iVar5 + 1;
    param_1[1] = iVar8;
    uVar3 = (uint)*(byte *)(iVar7 + iVar5);
    if (uVar3 - 0x20 < 0xd7) {
      return uVar3 - 0x8b;
    }
    if (uVar3 - 0xf7 < 4) {
      uVar1 = 0;
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return (uVar3 * 0x100 + uVar1) - 0xf694;
    }
    if (uVar3 - 0xfb < 4) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return 0xfa94 - (uVar1 | uVar3 << 8);
    }
    if (uVar3 == 0x1d) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar3 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar5 + 2;
      }
      else {
        uVar3 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
        iVar8 = iVar8 + 1;
      }
      uVar2 = 0;
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar6 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar8 + 1;
      }
      else {
        uVar6 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar2 = (uint)*(byte *)(iVar7 + iVar8);
      }
      uVar1 = uVar6 | (uVar3 | uVar1) << 0x10 | uVar2;
    }
    else if (uVar3 == 0x1c) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar3 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar5 + 2;
      }
      else {
        uVar3 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return uVar3 | uVar1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7162e97c
// Entry: 0x7162e97c | Size: 36 bytes
// =========================================================================

void FUN_7162e97c(void)

{
  DAT_711ad1b0 = 0;
  DAT_711ad1b4 = 0;
  DAT_711ad1b8 = 0;
  DAT_711ad1bc = 0;
  DAT_711ad1c0 = 0;
  return;
}


// =========================================================================
// Function: FUN_7162e9d8
// Entry: 0x7162e9d8 | Size: 192 bytes
// =========================================================================

undefined4 FUN_7162e9d8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_711ad1b0 == 0) {
    puVar3 = &DAT_711ad1b0;
  }
  else {
    puVar3 = &DAT_711ad1b4;
    if (DAT_711ad1b4 != 0) {
      puVar3 = &DAT_711ad1b8;
      iVar2 = 0;
      if (DAT_711ad1b8 != 0) {
        puVar3 = &DAT_711ad1bc;
        iVar2 = DAT_711ad1bc;
      }
      if ((DAT_711ad1b8 != 0 && iVar2 != 0) && (puVar3 = &DAT_711ad1c0, DAT_711ad1c0 != 0)) {
        return 0;
      }
    }
  }
  uVar1 = thunk_MwhHq(0x98);
  FUN_7162d204(uVar1,param_1,param_2);
  iVar2 = FUN_7162e468();
  if (iVar2 == 0) {
    FUN_7162e400(uVar1);
    thunk_qNQrlu();
    return 0;
  }
  *puVar3 = uVar1;
  return uVar1;
}


// =========================================================================
// Function: FUN_7162eb9c
// Entry: 0x7162eb9c | Size: 1216 bytes
// =========================================================================

int FUN_7162eb9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined1 *puVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  ushort *puVar22;
  bool bVar23;
  uint uStack_34;
  
  iVar17 = *(int *)(param_1 + 0x24);
  iVar18 = *(int *)(param_1 + 0x28);
  iVar6 = 0;
  if (iVar17 != 0 || iVar18 != 0) {
    uVar7 = FUN_71632c34(param_1);
    uVar8 = FUN_71632c34(param_1,param_3);
    iVar6 = 0;
    if (iVar18 != 0) {
      puVar16 = (ushort *)(*(int *)(param_1 + 4) + iVar18);
      uVar9 = (uint)*puVar16 << 0x18 | (uint)(*puVar16 >> 8) << 0x10;
      bVar23 = uVar9 == 0x10000;
      if (bVar23) {
        uVar9 = (uint)puVar16[1] << 0x18 | (uint)(puVar16[1] >> 8) << 0x10;
      }
      if (bVar23 && uVar9 == 0) {
        puVar16 = (ushort *)((int)puVar16 + ((puVar16[4] & 0xff) << 8 | (uint)(puVar16[4] >> 8)));
        uVar2 = *puVar16;
        if ((uVar2 & 0xff) != 0 || uVar2 >> 8 != 0) {
          uStack_34 = 0;
          do {
            puVar22 = (ushort *)
                      ((int)puVar16 +
                      ((puVar16[uStack_34 + 1] & 0xff) << 8 | (uint)(puVar16[uStack_34 + 1] >> 8)));
            if ((((uint)*puVar22 << 0x18 | (uint)(*puVar22 >> 8) << 0x10) == 0x20000) &&
               (uVar9 = (puVar22[2] & 0xff) << 8 | (uint)(puVar22[2] >> 8), uVar9 != 0)) {
              uVar20 = 0;
LAB_7162ed74:
              puVar21 = (ushort *)
                        ((int)puVar22 +
                        ((puVar22[uVar20 + 3] & 0xff) << 8 | (uint)(puVar22[uVar20 + 3] >> 8)));
              puVar13 = (ushort *)
                        ((int)puVar21 + ((puVar21[1] & 0xff) << 8 | (uint)(puVar21[1] >> 8)));
              uVar10 = (uint)*puVar13 << 0x18 | (uint)(*puVar13 >> 8) << 0x10;
              if (uVar10 == 0x20000) {
                uVar3 = puVar13[1];
                if ((uVar3 & 0xff) != 0 || uVar3 >> 8 != 0) {
                  iVar6 = ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) - 1;
                  iVar18 = 0;
                  do {
                    while( true ) {
                      iVar19 = iVar6 + iVar18 >> 1;
                      puVar14 = puVar13 + iVar19 * 3 + 2;
                      uVar3 = *puVar14;
                      if ((int)uVar7 <
                          (int)(((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10)) break;
                      if (uVar7 <= ((uint)puVar14[1] << 0x18 | (uint)(puVar14[1] >> 8) << 0x10) >>
                                   0x10) {
                        iVar18 = (uVar7 - ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8))) +
                                 (((uint)puVar14[2] << 0x18 | (uint)(puVar14[2] >> 8) << 0x10) >>
                                 0x10);
                        goto LAB_7162eea4;
                      }
                      iVar18 = iVar19 + 1;
                      if (iVar6 < iVar18) goto LAB_7162ed64;
                    }
                    iVar6 = iVar19 + -1;
                  } while (iVar18 <= iVar6);
                }
              }
              else if (uVar10 == 0x10000) {
                uVar3 = puVar13[1];
                if ((uVar3 & 0xff) != 0 || uVar3 >> 8 != 0) {
                  iVar6 = ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) - 1;
                  iVar19 = 0;
                  do {
                    iVar18 = iVar6 + iVar19 >> 1;
                    uVar3 = *(ushort *)((int)puVar13 + (iVar6 + iVar19 & 0xfffffffeU) + 4);
                    if ((int)uVar7 <
                        (int)(((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10)) {
                      iVar6 = iVar18 + -1;
                    }
                    else {
                      if (uVar7 <= ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8))) goto LAB_7162eea4;
                      iVar19 = iVar18 + 1;
                    }
                  } while (iVar19 <= iVar6);
                }
              }
              goto LAB_7162ed64;
            }
LAB_7162ecf4:
            iVar6 = 0;
            uStack_34 = uStack_34 + 1;
          } while (uStack_34 != ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)));
        }
      }
    }
LAB_7162ec10:
    if (iVar17 != 0) {
      iVar17 = *(int *)(param_1 + 4) + iVar17;
      iVar18 = 0;
      if (((*(ushort *)(iVar17 + 2) & 0xff) != 0 || *(ushort *)(iVar17 + 2) >> 8 != 0) &&
         (((uint)*(ushort *)(iVar17 + 8) << 0x18 | (uint)(*(ushort *)(iVar17 + 8) >> 8) << 0x10) ==
          0x10000)) {
        uVar2 = *(ushort *)(iVar17 + 10);
        if ((uVar2 & 0xff) != 0 || uVar2 >> 8 != 0) {
          uVar8 = uVar8 | uVar7 << 0x10;
          iVar19 = ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) - 1;
          iVar18 = 0;
          do {
            while( true ) {
              iVar1 = iVar18 + iVar19 >> 1;
              uVar7 = *(uint *)(iVar17 + 0x12 + iVar1 * 6);
              uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                      uVar7 >> 0x18;
              if (uVar8 < uVar7) break;
              if (uVar8 <= uVar7) {
                uVar2 = *(ushort *)(iVar17 + iVar1 * 6 + 0x16);
                iVar18 = (int)(short)(uVar2 << 8 | uVar2 >> 8);
                goto LAB_7162f028;
              }
              iVar18 = iVar1 + 1;
              if (iVar19 < iVar18) goto LAB_7162ecac;
            }
            iVar19 = iVar1 + -1;
          } while (iVar18 <= iVar19);
LAB_7162ecac:
          iVar18 = 0;
        }
      }
LAB_7162f028:
      iVar6 = iVar18 + iVar6;
    }
  }
  return iVar6;
LAB_7162eea4:
  if (iVar18 != -1) {
    uVar10 = ((uint)*puVar21 << 0x18 | (uint)(*puVar21 >> 8) << 0x10) >> 0x10;
    if (uVar10 == 2) {
      uVar3 = puVar21[2];
      uVar4 = puVar21[3];
      uVar5 = puVar21[5];
      uVar10 = FUN_71635408((int)puVar21 +
                            (((uint)puVar21[4] << 0x18 | (uint)(puVar21[4] >> 8) << 0x10) >> 0x10),
                            uVar7);
      uVar11 = FUN_71635408((int)puVar21 +
                            (((uint)uVar5 << 0x18 | (uint)(uVar5 >> 8) << 0x10) >> 0x10),uVar8);
      iVar6 = 0;
      if ((((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) != 0x40000) ||
         ((uVar4 & 0xff) != 0 || uVar4 >> 8 != 0)) goto LAB_7162ec10;
      if (-1 < (int)uVar10 && -1 < (int)uVar11) {
        uVar12 = (puVar21[6] & 0xff) << 8 | (uint)(puVar21[6] >> 8);
        bVar23 = uVar10 < uVar12;
        if (bVar23) {
          uVar12 = (puVar21[7] & 0xff) << 8 | (uint)(puVar21[7] >> 8);
        }
        if (bVar23 && uVar11 < uVar12) {
          puVar15 = (undefined1 *)((int)puVar21 + uVar11 * 2 + uVar10 * uVar12 * 2 + 0x11);
          puVar21 = puVar21 + uVar10 * uVar12 + uVar11 + 8;
LAB_7162f03c:
          iVar6 = (int)CONCAT11((char)*puVar21,*puVar15);
          goto LAB_7162ec10;
        }
      }
    }
    else if (uVar10 == 1) {
      iVar6 = 0;
      if ((((uint)puVar21[2] << 0x18 | (uint)(puVar21[2] >> 8) << 0x10) != 0x40000) ||
         ((puVar21[3] & 0xff) != 0 || puVar21[3] >> 8 != 0)) goto LAB_7162ec10;
      puVar21 = (ushort *)
                ((int)puVar21 +
                (((uint)puVar21[iVar18 + 5] << 0x18 | (uint)(puVar21[iVar18 + 5] >> 8) << 0x10) >>
                0x10));
      uVar3 = *puVar21;
      if ((uVar3 & 0xff) != 0 || uVar3 >> 8 != 0) {
        iVar6 = ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) - 1;
        iVar18 = 0;
        do {
          iVar19 = iVar6 + iVar18 >> 1;
          puVar13 = puVar21 + iVar19 * 2 + 1;
          uVar3 = *puVar13;
          if ((int)uVar8 < (int)(((uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10) >> 0x10)) {
            iVar6 = iVar19 + -1;
          }
          else {
            if (uVar8 <= ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8))) {
              puVar15 = (undefined1 *)((int)puVar13 + 3);
              puVar21 = puVar13 + 1;
              goto LAB_7162f03c;
            }
            iVar18 = iVar19 + 1;
          }
        } while (iVar18 <= iVar6);
      }
    }
  }
LAB_7162ed64:
  uVar20 = uVar20 + 1;
  if (uVar20 == uVar9) goto LAB_7162ecf4;
  goto LAB_7162ed74;
}


// =========================================================================
// Function: FUN_7162f0e4
// Entry: 0x7162f0e4 | Size: 1828 bytes
// =========================================================================

void FUN_7162f0e4(char *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,int param_8)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  int iVar21;
  undefined1 *puVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  undefined1 *puStack_50;
  undefined4 uStack_44;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar5 = *(int *)(param_2 + 8) + *(int *)(param_2 + 0x20);
  iVar5 = ((int)(short)(*(ushort *)(iVar5 + 4) << 8 | *(ushort *)(iVar5 + 4) >> 8) -
          ((int)((uint)*(ushort *)(iVar5 + 6) << 0x18 | (uint)(*(ushort *)(iVar5 + 6) >> 8) << 0x10)
          >> 0x10)) +
          ((int)((uint)*(ushort *)(iVar5 + 8) << 0x18 | (uint)(*(ushort *)(iVar5 + 8) >> 8) << 0x10)
          >> 0x10);
  if (0 < iVar5) {
    iVar6 = param_2 + 4;
    uVar7 = FUN_71ba1e0c(param_5);
    uVar8 = FUN_71ba1b94(iVar5);
    uVar7 = FUN_71ba13e0(uVar7,uVar8);
    iVar9 = FUN_71ba2d70(uVar7,0x3d072b02);
    if (iVar9 != 0) {
      uVar7 = 0x3d072b02;
    }
    uVar10 = imp_strlen(param_1);
    if (uVar10 != 0) {
      uVar8 = 0x501502f9;
      uStack_44 = 0xd01502f9;
      uVar16 = 0;
      uVar15 = 0;
      do {
        uVar18 = uVar16 + 1;
        pcVar11 = (char *)0x0;
        if (uVar18 < uVar10) {
          pcVar11 = param_1 + uVar16;
        }
        if (uVar18 < uVar10) {
          pcVar11 = (char *)(uint)(byte)pcVar11[1];
        }
        iStack_34 = 0;
        uVar12 = FUN_71632c34(iVar6,param_1[uVar16]);
        FUN_7163278c(iVar6,uVar12,uVar7,uVar7,&iStack_28,&iStack_2c,&iStack_30,&iStack_34);
        iVar9 = iStack_28;
        iVar5 = iStack_30;
        cVar1 = param_1[uVar16];
        iVar13 = FUN_71632c34(iVar6,cVar1);
        iVar21 = *(int *)(param_2 + 8) + *(int *)(param_2 + 0x24);
        puVar22 = (undefined1 *)(iVar21 + iVar13 * 4);
        uVar4 = *(ushort *)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0x20) + 0x22);
        iVar21 = iVar21 + ((uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8)) * 4;
        puVar19 = (undefined1 *)(iVar21 + -3);
        if (iVar13 < (int)(((uint)uVar4 << 0x18 | (uint)(uVar4 >> 8) << 0x10) >> 0x10)) {
          puVar19 = puVar22 + 1;
        }
        else {
          puVar22 = (undefined1 *)(iVar21 + -4);
        }
        uVar12 = FUN_71ba1b94((int)CONCAT11(*puVar22,*puVar19));
        uVar12 = FUN_71ba21e8(uVar12,uVar7);
        uVar12 = FUN_71ba0b38(uVar12,uVar15);
        uVar14 = FUN_71ba1b94(iVar5);
        uVar14 = FUN_71ba0b38(uVar15,uVar14);
        iVar5 = FUN_71ba2d70(uVar14,uStack_44);
        if (iVar5 != 0) {
          uStack_44 = uVar14;
        }
        uVar14 = FUN_71ba1b94(iVar9);
        uVar15 = FUN_71ba0b38(uVar15,uVar14);
        iVar5 = FUN_71ba2d10(uVar15,uVar8);
        if (iVar5 != 0) {
          uVar8 = uVar15;
        }
        if (pcVar11 != (char *)0x0) {
          FUN_7162eb9c(iVar6,cVar1);
          uVar15 = FUN_71ba1b94();
          uVar15 = FUN_71ba21e8(uVar15,uVar7);
          uVar12 = FUN_71ba0b38(uVar15,uVar12);
        }
        uVar10 = imp_strlen(param_1);
        uVar16 = uVar18;
        uVar15 = uVar12;
      } while (uVar18 < uVar10);
      uVar8 = FUN_71ba240c(uStack_44,uVar8);
      FUN_71ba0b38(uVar8,0x3f000000);
      iVar5 = FUN_71ba17bc();
      iVar5 = iVar5 + 8;
    }
    uVar8 = FUN_71ba1e0c(param_4);
    uVar15 = FUN_71ba1b94(iVar5);
    uVar8 = FUN_71ba13e0(uVar8,uVar15);
    if (iVar5 <= param_4) {
      uVar8 = 0x3f800000;
    }
    iVar5 = FUN_71ba2d70(uVar8,0x3f800000);
    if (iVar5 != 0) {
      uVar8 = 0x3f800000;
    }
    iVar5 = FUN_71ba2d10(uVar8,0);
    if (iVar5 != 0) {
      uVar8 = 0;
    }
    uVar8 = FUN_71ba21e8(uVar7,uVar8);
    iVar5 = 0;
    if (*param_1 != '\0') {
      iVar9 = *(int *)(param_2 + 8) + *(int *)(param_2 + 0x24);
      uVar4 = *(ushort *)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0x20) + 0x22);
      uVar10 = (uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8);
      iVar5 = iVar9 + uVar10 * 4;
      uVar16 = imp_strlen(param_1);
      uVar15 = 0;
      uVar18 = 0;
      do {
        uVar23 = (uint)(byte)param_1[uVar18];
        iVar13 = FUN_71632c34(iVar6,uVar23);
        puVar22 = (undefined1 *)(iVar9 + iVar13 * 4);
        if (iVar13 < (int)uVar10) {
          puVar19 = puVar22 + 1;
        }
        else {
          puVar22 = (undefined1 *)(iVar5 + -4);
          puVar19 = (undefined1 *)(iVar5 + -3);
        }
        uVar14 = FUN_71ba1b94((int)CONCAT11(*puVar22,*puVar19));
        uVar12 = 0x3f800000;
        if (param_8 != 0) {
          uVar12 = param_6;
        }
        if ((uVar23 & 0xdf) - 0x41 < 0x1a) {
          uVar12 = param_6;
        }
        uVar12 = FUN_71ba21e8(uVar8,uVar12);
        FUN_71ba21e8(uVar12,uVar14);
        uVar14 = imp_roundf();
        uVar15 = FUN_71ba0b38(uVar15,uVar14);
        FUN_7162eb9c(iVar6,uVar23,(param_1 + uVar18)[1]);
        uVar14 = FUN_71ba1b94();
        FUN_71ba21e8(uVar12,uVar14);
        uVar12 = imp_roundf();
        uVar15 = FUN_71ba0b38(uVar15,uVar12);
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
      iVar5 = FUN_71ba17bc(uVar15);
    }
    uVar10 = 0;
    if (param_7 == 1) {
      uVar10 = (uint)(param_4 - iVar5) >> 1;
    }
    else if (param_7 == 2) {
      uVar10 = param_4 - iVar5;
    }
    if (*param_1 != '\0') {
      uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
      uVar16 = 0;
      do {
        uVar18 = (uint)(byte)param_1[uVar16];
        iVar5 = FUN_71632c34(iVar6,uVar18);
        iVar9 = *(int *)(param_2 + 8) + *(int *)(param_2 + 0x24);
        uVar4 = *(ushort *)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0x20) + 0x22);
        if (iVar5 < (int)(((uint)uVar4 << 0x18 | (uint)(uVar4 >> 8) << 0x10) >> 0x10)) {
          puVar20 = (ushort *)(iVar9 + iVar5 * 4);
          puStack_50 = (undefined1 *)((int)puVar20 + 3);
          uVar4 = (ushort)(((uint)*puVar20 << 0x18) >> 0x10) | *puVar20 >> 8;
          puVar20 = puVar20 + 1;
        }
        else {
          uVar23 = (uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8);
          iVar9 = iVar9 + uVar23 * 4;
          puVar20 = (ushort *)(iVar9 + (iVar5 - uVar23) * 2);
          puStack_50 = (undefined1 *)((int)puVar20 + 1);
          uVar4 = *(ushort *)(iVar9 + -4);
          uVar4 = uVar4 << 8 | uVar4 >> 8;
        }
        uVar15 = param_6;
        if (param_8 == 0) {
          uVar15 = 0x3f800000;
        }
        if ((uVar18 & 0xdf) - 0x41 < 0x1a) {
          uVar15 = param_6;
        }
        uVar12 = FUN_71ba21e8(uVar8,uVar15);
        uVar15 = FUN_71ba21e8(uVar7,uVar15);
        uVar3 = *puVar20;
        uVar2 = *puStack_50;
        uVar14 = FUN_71632c34(iVar6,uVar18);
        FUN_7163278c(iVar6,uVar14,uVar12,uVar15,&iStack_28,&iStack_2c,&iStack_30,&iStack_34);
        uVar14 = FUN_71ba1b94(uVar10);
        uVar17 = FUN_71ba1b94((int)CONCAT11((char)uVar3,uVar2));
        FUN_71ba21e8(uVar12,uVar17);
        uVar17 = imp_roundf();
        FUN_71ba0b38(uVar17,uVar14);
        uVar10 = FUN_71ba17bc();
        uVar18 = *(int *)(param_2 + 0x84) + iStack_2c;
        if (-1 < (int)(uVar18 | uVar10)) {
          iVar13 = iStack_30 - iStack_28;
          iVar21 = iVar13 + uVar10;
          bVar25 = SBORROW4(iVar21,param_4);
          iVar5 = iVar21 - param_4;
          bVar24 = iVar21 == param_4;
          iVar9 = param_4;
          if (iVar21 <= param_4) {
            iVar9 = *(int *)(param_2 + 0x84) + iStack_34;
            bVar25 = SBORROW4(iVar9,param_5);
            iVar5 = iVar9 - param_5;
            bVar24 = iVar9 == param_5;
            iVar9 = iStack_34;
          }
          if (((bVar24 || iVar5 < 0 != bVar25) && (iVar5 = uVar18 * param_4 + uVar10, -1 < iVar5))
             && ((iVar9 - iStack_2c) * iVar13 + iVar5 <= param_5 * param_4)) {
            FUN_7162ffac(iVar6,param_3 + iVar5,iVar13,iVar9 - iStack_2c,param_4,uVar12,uVar15,
                         param_1[uVar16]);
          }
        }
        uVar15 = FUN_71ba1b94((int)(short)uVar4);
        FUN_71ba21e8(uVar12,uVar15);
        uVar15 = imp_roundf();
        FUN_71ba0b38(uVar15,uVar14);
        uVar15 = FUN_71ba17bc();
        FUN_7162eb9c(iVar6,param_1[uVar16],(param_1 + uVar16)[1]);
        uVar14 = FUN_71ba1b94();
        FUN_71ba21e8(uVar12,uVar14);
        uVar12 = imp_roundf();
        uVar15 = FUN_71ba1b94(uVar15);
        FUN_71ba0b38(uVar12,uVar15);
        uVar10 = FUN_71ba17bc();
        uVar16 = uVar16 + 1;
        uVar18 = imp_strlen(param_1);
      } while (uVar16 < uVar18);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7162ffac
// Entry: 0x7162ffac | Size: 5184 bytes
// =========================================================================

void FUN_7162ffac(undefined4 param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
                 uint param_6,uint param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int ***pppiVar14;
  int ***pppiVar15;
  undefined4 uVar16;
  int ***pppiVar17;
  int ***pppiVar18;
  int *piVar19;
  int ***pppiVar20;
  int ***pppiVar21;
  int ***pppiVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  int ***pppiVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  int ****ppppiVar33;
  int ***pppiVar34;
  int iVar35;
  int iVar36;
  int *piVar37;
  int *piVar38;
  int ****ppppiVar39;
  int iVar40;
  undefined1 *puVar41;
  int ****ppppiVar42;
  int iVar43;
  int *piVar44;
  undefined4 uVar45;
  undefined4 *puVar46;
  undefined4 uVar47;
  undefined4 *puVar48;
  uint uVar49;
  undefined1 *puStack_298;
  int *piStack_294;
  int iStack_28c;
  int ***pppiStack_280;
  uint uStack_270;
  int **ppiStack_25c;
  int **ppiStack_258;
  int iStack_250;
  int *piStack_24c;
  int iStack_240;
  short *psStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int ***apppiStack_2c [2];
  
  uVar5 = FUN_71632c34(param_1,param_8);
  iVar6 = FUN_71635510(param_1,uVar5,&psStack_23c);
  FUN_7163278c(param_1,uVar5,param_6,param_7,&uStack_234,&iStack_238,0,0);
  if (param_3 != 0 && param_4 != 0) {
    iVar7 = FUN_71ba2d70(param_6,param_7);
    uVar23 = param_6;
    if (iVar7 != 0) {
      uVar23 = param_7;
    }
    uVar5 = FUN_71ba13e0(0x3eb33333,uVar23);
    uVar5 = FUN_71ba21e8(uVar5,uVar5);
    psVar4 = psStack_23c;
    if (0 < iVar6) {
      psVar8 = psStack_23c + 6;
      iVar7 = iVar6;
      iVar40 = 0;
      do {
        iVar32 = iVar40;
        sVar3 = *psVar8;
        iVar40 = iVar32;
        if ((char)sVar3 == '\x01') {
          iVar40 = iVar32 + 1;
        }
        iVar7 = iVar7 + -1;
        psVar8 = psVar8 + 7;
      } while (iVar7 != 0);
      if ((iVar40 != 0) && (iVar7 = imp_malloc(iVar40 << 2), iVar7 != 0)) {
        bVar30 = false;
        iVar43 = 0;
        iStack_250 = 0;
        iVar35 = 0;
        bVar1 = true;
        do {
          bVar2 = bVar1;
          if ((bVar30) && (iVar43 = imp_malloc(iVar35 << 3), iVar43 == 0)) goto LAB_716313f4;
          uVar45 = 0;
          uVar47 = 0;
          iStack_230 = 0;
          iStack_240 = -1;
          iVar35 = iVar6;
          psVar8 = psVar4;
          do {
            iVar36 = iStack_230;
            switch((char)psVar8[6]) {
            case '\x01':
              if (-1 < iStack_240) {
                *(int *)(iVar7 + iStack_240 * 4) = iStack_230 - iStack_250;
              }
              iStack_230 = iStack_230 + 1;
              iStack_240 = iStack_240 + 1;
              uVar47 = FUN_71ba1b94((int)*psVar8);
              uVar45 = FUN_71ba1b94((int)psVar8[1]);
              iStack_250 = iVar36;
              if (iVar43 != 0) {
                puVar11 = (undefined4 *)(iVar43 + iVar36 * 8);
                *puVar11 = uVar47;
                puVar11[1] = uVar45;
              }
              break;
            case '\x02':
              iStack_230 = iStack_230 + 1;
              uVar47 = FUN_71ba1b94((int)*psVar8);
              uVar45 = FUN_71ba1b94((int)psVar8[1]);
              if (iVar43 != 0) {
                puVar11 = (undefined4 *)(iVar43 + iVar36 * 8);
                *puVar11 = uVar47;
                puVar11[1] = uVar45;
              }
              break;
            case '\x03':
              uVar16 = FUN_71ba1b94((int)psVar8[2]);
              uVar24 = FUN_71ba1b94((int)psVar8[3]);
              uVar28 = FUN_71ba1b94((int)*psVar8);
              uVar29 = FUN_71ba1b94((int)psVar8[1]);
              FUN_71636818(iVar43,&iStack_230,uVar47,uVar45,uVar16,uVar24,uVar28,uVar29,uVar5,0);
              goto LAB_716301dc;
            case '\x04':
              uVar16 = FUN_71ba1b94((int)psVar8[2]);
              uVar24 = FUN_71ba1b94((int)psVar8[3]);
              uVar28 = FUN_71ba1b94((int)psVar8[4]);
              uVar29 = FUN_71ba1b94((int)psVar8[5]);
              uVar9 = FUN_71ba1b94((int)*psVar8);
              uVar10 = FUN_71ba1b94((int)psVar8[1]);
              FUN_71636dd4(iVar43,&iStack_230,uVar47,uVar45,uVar16,uVar24,uVar28,uVar29,uVar9,uVar10
                           ,uVar5,0);
LAB_716301dc:
              uVar47 = FUN_71ba1b94((int)*psVar8);
              uVar45 = FUN_71ba1b94((int)psVar8[1]);
            }
            psVar8 = psVar8 + 7;
            iVar35 = iVar35 + -1;
          } while (iVar35 != 0);
          *(int *)(iVar7 + iStack_240 * 4) = iStack_230 - iStack_250;
          bVar30 = true;
          iVar35 = iStack_230;
          bVar1 = false;
        } while (bVar2);
        if (iVar43 != 0) {
          iVar6 = 0;
          if ((char)sVar3 == '\x01') {
            iVar32 = iVar32 + 1;
          }
          iVar35 = 0;
          do {
            iVar36 = iVar6 * 4;
            iVar6 = iVar6 + 1;
            iVar35 = *(int *)(iVar7 + iVar36) + iVar35;
          } while (iVar32 != iVar6);
          puVar11 = (undefined4 *)imp_malloc(iVar35 * 0x14 + 0x14);
          if (puVar11 != (undefined4 *)0x0) {
            iVar35 = 0;
            iVar6 = 0;
            iVar32 = 0;
            do {
              iVar36 = *(int *)(iVar7 + iVar6 * 4);
              if (0 < iVar36) {
                iVar31 = iVar43 + iVar32 * 8;
                puVar46 = (undefined4 *)(iVar43 + 4 + iVar32 * 8);
                iVar12 = 0;
                iVar25 = iVar36 + -1;
                uVar5 = *(undefined4 *)(iVar31 + (iVar36 + -1) * 8 + 4);
                do {
                  iVar26 = iVar12;
                  uVar47 = *puVar46;
                  iVar12 = FUN_71ba2cf0(uVar5,uVar47);
                  if (iVar12 == 0) {
                    iVar12 = FUN_71ba2d70(uVar5,uVar47);
                    puVar11[iVar35 * 5 + 4] = (uint)(iVar12 != 0);
                    iVar13 = FUN_71ba2d70(uVar5,uVar47);
                    iVar12 = iVar26;
                    if (iVar13 != 0) {
                      iVar12 = iVar25;
                    }
                    puVar48 = (undefined4 *)(iVar31 + iVar12 * 8);
                    uVar45 = FUN_71ba21e8(*puVar48,param_6);
                    uVar45 = FUN_71ba0b38(uVar45,0);
                    puVar11[iVar35 * 5] = uVar45;
                    uVar45 = FUN_71ba21e8(puVar48[1],param_7 ^ 0x80000000);
                    uVar45 = FUN_71ba0b38(uVar45,0);
                    puVar11[iVar35 * 5 + 1] = uVar45;
                    iVar12 = FUN_71ba2d70(uVar5,uVar47);
                    if (iVar12 != 0) {
                      iVar25 = iVar26;
                    }
                    puVar48 = (undefined4 *)(iVar31 + iVar25 * 8);
                    uVar5 = FUN_71ba21e8(*puVar48,param_6);
                    uVar5 = FUN_71ba0b38(uVar5,0);
                    puVar11[iVar35 * 5 + 2] = uVar5;
                    uVar5 = FUN_71ba21e8(puVar48[1],param_7 ^ 0x80000000);
                    uVar5 = FUN_71ba0b38(uVar5,0);
                    puVar11[iVar35 * 5 + 3] = uVar5;
                    iVar35 = iVar35 + 1;
                  }
                  puVar46 = puVar46 + 2;
                  iVar12 = iVar26 + 1;
                  iVar25 = iVar26;
                  uVar5 = uVar47;
                } while (iVar36 != iVar26 + 1);
              }
              iVar32 = iVar36 + iVar32;
              iVar6 = iVar6 + 1;
            } while (iVar6 != iVar40);
            FUN_71637784(puVar11,iVar35);
            if (1 < iVar35) {
              iVar6 = 1;
              puVar46 = puVar11;
              do {
                puVar46 = puVar46 + 5;
                puVar48 = puVar11 + iVar6 * 5;
                uVar5 = *puVar48;
                uVar47 = puVar48[1];
                iStack_230 = puVar48[2];
                uStack_22c = puVar48[3];
                uStack_228 = puVar48[4];
                puVar48 = puVar46;
                iVar40 = iVar6;
                do {
                  iVar32 = FUN_71ba2d10(uVar47,puVar48[-4]);
                  if (iVar32 == 0) goto LAB_716305e8;
                  iVar32 = iVar40 + -1;
                  *puVar48 = puVar48[-5];
                  puVar48[1] = puVar48[-4];
                  puVar48[2] = puVar48[-3];
                  puVar48[3] = puVar48[-2];
                  puVar48[4] = puVar48[-1];
                  bVar1 = 0 < iVar40;
                  puVar48 = puVar48 + -5;
                  iVar40 = iVar32;
                } while (iVar32 != 0 && bVar1);
                iVar40 = 0;
LAB_716305e8:
                if (iVar6 != iVar40) {
                  puVar48 = puVar11 + iVar40 * 5;
                  *puVar48 = uVar5;
                  puVar48[1] = uVar47;
                  puVar48[2] = iStack_230;
                  puVar48[3] = uStack_22c;
                  puVar48[4] = uStack_228;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 != iVar35);
            }
            apppiStack_2c[0] = (int ***)0x0;
            piStack_24c = &iStack_230;
            if (0x40 < param_3) {
              piStack_24c = (int *)imp_malloc(param_3 << 3 | 4);
            }
            uVar5 = FUN_71ba1b94(iStack_238 + param_4);
            uVar5 = FUN_71ba0b38(uVar5,0x3f800000);
            puVar11[iVar35 * 5 + 1] = uVar5;
            if (0 < param_4) {
              piVar37 = piStack_24c + param_3;
              uVar5 = FUN_71ba1b94(uStack_234);
              uVar47 = FUN_71ba1b94(param_3);
              ppppiVar33 = (int ****)0x0;
              iVar40 = 0;
              pppiStack_280 = (int ***)0x0;
              iStack_28c = 0;
              piStack_294 = (int *)0x0;
              iVar6 = iStack_238;
              puVar46 = puVar11;
              puStack_298 = param_2;
              do {
                imp___aeabi_memclr(piStack_24c,param_3 * 4);
                imp___aeabi_memclr(piVar37,param_3 * 4 + 4);
                pppiVar14 = (int ***)FUN_71ba1b94(iVar6);
                pppiVar15 = (int ***)FUN_71ba0b38(pppiVar14,0x3f800000);
                if (ppppiVar33 != (int ****)0x0) {
                  ppppiVar42 = apppiStack_2c;
                  do {
                    iVar32 = FUN_71ba2d30(ppppiVar33[6],pppiVar14);
                    ppppiVar39 = ppppiVar33;
                    if (iVar32 != 0) {
                      *ppppiVar42 = *ppppiVar33;
                      *ppppiVar33 = pppiStack_280;
                      ppppiVar33[4] = (int ***)0x0;
                      ppppiVar39 = ppppiVar42;
                      pppiStack_280 = (int ***)ppppiVar33;
                    }
                    ppppiVar33 = (int ****)*ppppiVar39;
                    ppppiVar42 = ppppiVar39;
                  } while (ppppiVar33 != (int ****)0x0);
                }
                iVar35 = puVar46[1];
                iVar32 = FUN_71ba2d30(iVar35,pppiVar15);
                while (ppppiVar33 = (int ****)apppiStack_2c[0], iVar32 != 0) {
                  piVar38 = puVar46 + 3;
                  iVar36 = *piVar38;
                  iVar32 = FUN_71ba2cf0(iVar35,iVar36);
                  piVar44 = puVar46 + 1;
                  ppppiVar33 = (int ****)pppiStack_280;
                  if (iVar32 == 0) {
                    if ((int ****)pppiStack_280 == (int ****)0x0) {
                      if (iStack_28c == 0) {
                        piVar19 = (int *)imp_malloc(0xdac4);
                        if (piVar19 == (int *)0x0) {
                          pppiStack_280 = (int ***)0x0;
                          iStack_28c = 0;
                          ppppiVar33 = (int ****)pppiStack_280;
                          goto LAB_716308a0;
                        }
                        iVar35 = *piVar44;
                        iStack_28c = 1999;
                        iVar36 = *piVar38;
                        *piVar19 = (int)piStack_294;
                      }
                      else {
                        iStack_28c = iStack_28c + -1;
                        piVar19 = piStack_294;
                      }
                      pppiStack_280 = (int ***)(piVar19 + iStack_28c * 7 + 1);
                      ppppiVar33 = (int ****)0x0;
                      piStack_294 = piVar19;
                    }
                    else {
                      ppppiVar33 = (int ****)*pppiStack_280;
                    }
                    uVar45 = FUN_71ba240c(puVar46[2],*puVar46);
                    uVar16 = FUN_71ba240c(iVar36,iVar35);
                    pppiVar17 = (int ***)FUN_71ba13e0(uVar45,uVar16);
                    pppiStack_280[2] = (int **)pppiVar17;
                    iVar32 = FUN_71ba2cf0(pppiVar17,0);
                    pppiVar18 = (int ***)FUN_71ba13e0(0x3f800000,pppiVar17);
                    if (iVar32 != 0) {
                      pppiVar18 = (int ***)0x0;
                    }
                    pppiStack_280[3] = (int **)pppiVar18;
                    uVar45 = FUN_71ba240c(pppiVar14,*piVar44);
                    uVar45 = FUN_71ba21e8(pppiVar17,uVar45);
                    uVar45 = FUN_71ba0b38(uVar45,*puVar46);
                    pppiVar17 = (int ***)FUN_71ba240c(uVar45,uVar5);
                    pppiStack_280[1] = (int **)pppiVar17;
                    pppiVar17 = (int ***)0x3f800000;
                    if (puVar46[4] == 0) {
                      pppiVar17 = (int ***)0xbf800000;
                    }
                    pppiStack_280[4] = (int **)pppiVar17;
                    pppiStack_280[5] = (int **)*piVar44;
                    pppiVar17 = (int ***)*piVar38;
                    *pppiStack_280 = (int **)0x0;
                    pppiStack_280[6] = (int **)pppiVar17;
                    *pppiStack_280 = (int **)apppiStack_2c[0];
                    apppiStack_2c[0] = pppiStack_280;
                  }
LAB_716308a0:
                  pppiStack_280 = (int ***)ppppiVar33;
                  iVar35 = puVar46[6];
                  iVar32 = FUN_71ba2d30(iVar35,pppiVar15);
                  puVar46 = puVar46 + 5;
                }
                while (ppppiVar33 != (int ****)0x0) {
                  pppiVar17 = ppppiVar33[1];
                  pppiVar18 = ppppiVar33[2];
                  iVar32 = FUN_71ba2cf0(pppiVar18,0);
                  if (iVar32 == 0) {
                    pppiVar20 = (int ***)FUN_71ba0b38(pppiVar18,pppiVar17);
                    pppiVar21 = ppppiVar33[3];
                    pppiVar34 = ppppiVar33[5];
                    ppiStack_258 = (int **)ppppiVar33[6];
                    iVar32 = FUN_71ba2d10(ppiStack_258,pppiVar15);
                    uVar45 = FUN_71ba240c(ppiStack_258,pppiVar14);
                    uVar45 = FUN_71ba21e8(pppiVar18,uVar45);
                    ppiStack_25c = (int **)FUN_71ba0b38(uVar45,pppiVar17);
                    if (iVar32 == 0) {
                      ppiStack_25c = (int **)pppiVar20;
                    }
                    iVar35 = FUN_71ba2d70(pppiVar34,pppiVar14);
                    uVar45 = FUN_71ba240c(pppiVar34,pppiVar14);
                    uVar45 = FUN_71ba21e8(pppiVar18,uVar45);
                    pppiVar22 = (int ***)FUN_71ba0b38(uVar45,pppiVar17);
                    if (iVar35 == 0) {
                      pppiVar22 = pppiVar17;
                    }
                    iVar36 = FUN_71ba2d50(pppiVar22,0);
                    if (iVar32 == 0) {
                      ppiStack_258 = (int **)pppiVar15;
                    }
                    if (iVar35 == 0) {
                      pppiVar34 = pppiVar14;
                    }
                    if ((((iVar36 == 0) || (iVar32 = FUN_71ba2d50(ppiStack_25c,0), iVar32 == 0)) ||
                        (iVar32 = FUN_71ba2d10(pppiVar22,uVar47), iVar32 == 0)) ||
                       (iVar32 = FUN_71ba2d10(ppiStack_25c,uVar47), iVar32 == 0)) {
                      if (0 < param_3) {
                        iVar32 = 0;
                        do {
                          pppiVar34 = (int ***)FUN_71ba1b94(iVar32);
                          uVar45 = FUN_71ba240c(pppiVar34,pppiVar17);
                          uVar45 = FUN_71ba13e0(uVar45,pppiVar18);
                          pppiVar21 = (int ***)FUN_71ba0b38(uVar45,pppiVar14);
                          iVar35 = iVar32 + 1;
                          pppiVar22 = (int ***)FUN_71ba1b94();
                          uVar45 = FUN_71ba240c(pppiVar22,pppiVar17);
                          uVar45 = FUN_71ba13e0(uVar45,pppiVar18);
                          pppiVar27 = (int ***)FUN_71ba0b38(uVar45,pppiVar14);
                          iVar36 = FUN_71ba2d10(pppiVar17,pppiVar34);
                          iVar12 = FUN_71ba2d10(pppiVar17,pppiVar34);
                          iVar25 = FUN_71ba2d70(pppiVar20,pppiVar22);
                          if ((iVar36 == 0) ||
                             (iVar36 = FUN_71ba2d70(pppiVar20,pppiVar22), iVar36 == 0)) {
                            iVar36 = FUN_71ba2d10(pppiVar20,pppiVar34);
                            iVar31 = FUN_71ba2d10(pppiVar20,pppiVar34);
                            iVar26 = FUN_71ba2d70(pppiVar17,pppiVar22);
                            if ((iVar36 != 0) &&
                               (iVar36 = FUN_71ba2d70(pppiVar17,pppiVar22), iVar36 != 0)) {
                              FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,
                                           pppiVar22,pppiVar27);
                              FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar22,pppiVar27,
                                           pppiVar34,pppiVar21);
                              goto LAB_71630e60;
                            }
                            iVar36 = FUN_71ba2d70(pppiVar20,pppiVar34);
                            if (iVar12 != 0 && iVar36 != 0) {
                              FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,
                                           pppiVar34,pppiVar21);
                              goto LAB_71630e60;
                            }
                            iVar36 = FUN_71ba2d70(pppiVar17,pppiVar34);
                            if (iVar31 == 0 || iVar36 == 0) {
                              iVar36 = FUN_71ba2d10(pppiVar17,pppiVar22);
                              if (iVar36 == 0 || iVar25 == 0) {
                                iVar36 = FUN_71ba2d10(pppiVar20,pppiVar22);
                                pppiVar34 = pppiVar17;
                                pppiVar21 = pppiVar14;
                                if (iVar36 != 0 && iVar26 != 0) {
                                  FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,
                                               pppiVar22,pppiVar27);
                                  pppiVar34 = pppiVar22;
                                  pppiVar21 = pppiVar27;
                                }
                              }
                              else {
                                FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,
                                             pppiVar22,pppiVar27);
                                pppiVar34 = pppiVar22;
                                pppiVar21 = pppiVar27;
                              }
                              goto LAB_71630e60;
                            }
                            FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,pppiVar34
                                         ,pppiVar21);
                            FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar34,pppiVar21,pppiVar20
                                         ,pppiVar15);
                          }
                          else {
                            FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,pppiVar34
                                         ,pppiVar21);
                            FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar34,pppiVar21,pppiVar22
                                         ,pppiVar27);
                            pppiVar34 = pppiVar22;
                            pppiVar21 = pppiVar27;
LAB_71630e60:
                            FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar34,pppiVar21,pppiVar20
                                         ,pppiVar15);
                          }
                          iVar32 = iVar35;
                        } while (param_3 != iVar35);
                      }
                      goto LAB_71630960;
                    }
                    uVar23 = FUN_71ba17bc(pppiVar22);
                    uStack_270 = FUN_71ba17bc(ppiStack_25c);
                    if (uVar23 == uStack_270) {
                      uVar45 = FUN_71ba240c(ppiStack_258,pppiVar34);
                      uVar16 = FUN_71ba1b94(uVar23);
                      uVar24 = FUN_71ba240c(pppiVar22,uVar16);
                      uVar16 = FUN_71ba240c(ppiStack_25c,uVar16);
                      uVar16 = FUN_71ba0b38(uVar24,uVar16);
                      uVar16 = FUN_71ba21e8(uVar16,0xbf000000);
                      uVar16 = FUN_71ba0b38(uVar16,0x3f800000);
                      uVar16 = FUN_71ba21e8(uVar16,ppppiVar33[4]);
                      uVar16 = FUN_71ba21e8(uVar16,uVar45);
                      iVar32 = FUN_71ba0b38(uVar16,piStack_24c[uVar23]);
                      piStack_24c[uVar23] = iVar32;
                      uVar45 = FUN_71ba21e8(ppppiVar33[4],uVar45);
                      iVar32 = FUN_71ba0b38(uVar45,piVar37[uVar23 + 1]);
                      piVar37[uVar23 + 1] = iVar32;
                    }
                    else {
                      iVar32 = FUN_71ba2d70(pppiVar22,ppiStack_25c);
                      pppiVar18 = pppiVar22;
                      uVar49 = uVar23;
                      if (iVar32 != 0) {
                        uVar45 = FUN_71ba240c(pppiVar14,pppiVar34);
                        pppiVar27 = (int ***)FUN_71ba0b38(pppiVar15,uVar45);
                        uVar45 = FUN_71ba240c(pppiVar14,ppiStack_258);
                        pppiVar34 = (int ***)FUN_71ba0b38(pppiVar15,uVar45);
                        pppiVar21 = (int ***)((uint)pppiVar21 ^ 0x80000000);
                        pppiVar17 = pppiVar20;
                        pppiVar18 = (int ***)ppiStack_25c;
                        uVar49 = uStack_270;
                        uStack_270 = uVar23;
                        ppiStack_25c = (int **)pppiVar22;
                        ppiStack_258 = (int **)pppiVar27;
                      }
                      iVar35 = uVar49 + 1;
                      uVar45 = FUN_71ba1b94(iVar35);
                      uVar45 = FUN_71ba240c(uVar45,pppiVar17);
                      uVar45 = FUN_71ba21e8(uVar45,pppiVar21);
                      uVar45 = FUN_71ba0b38(uVar45,pppiVar14);
                      uVar16 = FUN_71ba240c(uVar45,pppiVar34);
                      pppiVar17 = ppppiVar33[4];
                      uVar16 = FUN_71ba21e8(pppiVar17,uVar16);
                      uVar24 = FUN_71ba1b94(uVar49);
                      uVar24 = FUN_71ba240c(pppiVar18,uVar24);
                      uVar24 = FUN_71ba0b38(uVar24,0x3f800000);
                      uVar24 = FUN_71ba21e8(uVar24,0xbf000000);
                      uVar24 = FUN_71ba0b38(uVar24,0x3f800000);
                      uVar24 = FUN_71ba21e8(uVar16,uVar24);
                      iVar32 = FUN_71ba0b38(uVar24,piStack_24c[uVar49]);
                      piStack_24c[uVar49] = iVar32;
                      uVar24 = FUN_71ba21e8(pppiVar21,pppiVar17);
                      if (iVar35 < (int)uStack_270) {
                        uVar28 = FUN_71ba21e8(uVar24,0x3f000000);
                        iVar32 = ~uVar49 + uStack_270;
                        piVar38 = piStack_24c + uVar49 + 1;
                        do {
                          uVar29 = FUN_71ba0b38(uVar28,uVar16);
                          iVar36 = FUN_71ba0b38(uVar29,*piVar38);
                          *piVar38 = iVar36;
                          uVar16 = FUN_71ba0b38(uVar24,uVar16);
                          iVar32 = iVar32 + -1;
                          piVar38 = piVar38 + 1;
                        } while (iVar32 != 0);
                      }
                      uVar24 = FUN_71ba1b94(uStack_270 - iVar35);
                      uVar24 = FUN_71ba21e8(pppiVar21,uVar24);
                      uVar45 = FUN_71ba0b38(uVar24,uVar45);
                      uVar24 = FUN_71ba1b94(uStack_270);
                      uVar24 = FUN_71ba240c(ppiStack_25c,uVar24);
                      uVar24 = FUN_71ba0b38(uVar24,0);
                      uVar24 = FUN_71ba21e8(uVar24,0xbf000000);
                      uVar24 = FUN_71ba0b38(uVar24,0x3f800000);
                      uVar24 = FUN_71ba21e8(pppiVar17,uVar24);
                      uVar45 = FUN_71ba240c(ppiStack_258,uVar45);
                      uVar45 = FUN_71ba21e8(uVar24,uVar45);
                      uVar45 = FUN_71ba0b38(uVar45,uVar16);
                      iVar32 = FUN_71ba0b38(uVar45,piStack_24c[uStack_270]);
                      piStack_24c[uStack_270] = iVar32;
                      uVar45 = FUN_71ba240c(ppiStack_258,pppiVar34);
                      uVar45 = FUN_71ba21e8(pppiVar17,uVar45);
                      iVar32 = FUN_71ba0b38(uVar45,piVar37[uStack_270 + 1]);
                      piVar37[uStack_270 + 1] = iVar32;
                    }
                    ppppiVar33 = (int ****)*ppppiVar33;
                  }
                  else {
                    iVar32 = FUN_71ba2d10(pppiVar17,uVar47);
                    if (iVar32 == 0) {
LAB_71630960:
                      ppppiVar33 = (int ****)*ppppiVar33;
                    }
                    else {
                      iVar32 = FUN_71ba2d50(pppiVar17,0);
                      if (iVar32 == 0) {
                        iVar32 = 0;
                      }
                      else {
                        iVar32 = FUN_71ba17bc(pppiVar17);
                        FUN_71637a70(piStack_24c,iVar32,ppppiVar33,pppiVar17,pppiVar14,pppiVar17,
                                     pppiVar15);
                        iVar32 = iVar32 + 1;
                      }
                      FUN_71637a70(piVar37,iVar32,ppppiVar33,pppiVar17,pppiVar14,pppiVar17,pppiVar15
                                  );
                      ppppiVar33 = (int ****)*ppppiVar33;
                    }
                  }
                }
                if (0 < param_3) {
                  uVar45 = 0;
                  piVar38 = piStack_24c;
                  puVar41 = puStack_298;
                  iVar32 = param_3;
                  do {
                    uVar45 = FUN_71ba0b38(uVar45,piVar38[param_3]);
                    uVar23 = FUN_71ba0b38(*piVar38,uVar45);
                    uVar16 = FUN_71ba21e8(uVar23 & 0x7fffffff,0x437f0000);
                    FUN_71ba0b38(uVar16,0x3f000000);
                    iVar35 = FUN_71ba17bc();
                    if (0xfe < iVar35) {
                      iVar35 = 0xff;
                    }
                    iVar32 = iVar32 + -1;
                    *puVar41 = (char)iVar35;
                    piVar38 = piVar38 + 1;
                    puVar41 = puVar41 + 1;
                  } while (iVar32 != 0);
                }
                ppppiVar33 = (int ****)apppiStack_2c[0];
                if ((int ****)apppiStack_2c[0] != (int ****)0x0) {
                  ppppiVar39 = apppiStack_2c;
                  ppppiVar42 = (int ****)apppiStack_2c[0];
                  do {
                    pppiVar14 = (int ***)FUN_71ba0b38(ppppiVar42[2],ppppiVar42[1]);
                    ppppiVar42[1] = pppiVar14;
                    ppppiVar39 = (int ****)*ppppiVar39;
                    ppppiVar42 = (int ****)*ppppiVar39;
                  } while (ppppiVar42 != (int ****)0x0);
                }
                puStack_298 = puStack_298 + param_5;
                iVar6 = iVar6 + 1;
                iVar40 = iVar40 + 1;
              } while (iVar40 != param_4);
              while (piStack_294 != (int *)0x0) {
                piStack_294 = (int *)*piStack_294;
                imp_free();
              }
            }
            if (piStack_24c != &iStack_230) {
              imp_free();
            }
            imp_free(puVar11);
          }
          imp_free(iVar7);
          iVar7 = iVar43;
LAB_716313f4:
          imp_free(iVar7);
        }
      }
    }
  }
  imp_free(psStack_23c);
  return;
}


// =========================================================================
// Function: FUN_7163278c
// Entry: 0x7163278c | Size: 552 bytes
// =========================================================================

void FUN_7163278c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uStack_54;
  undefined1 auStack_50 [20];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    imp___aeabi_memclr4(auStack_50,0x2c);
    uStack_54 = 1;
    iVar2 = FUN_71632ebc(param_1,param_2,&uStack_54);
    iVar1 = iStack_38;
    iVar5 = iStack_34;
    if (iVar2 == 0) {
      iStack_3c = 0;
      iStack_30 = 0;
      iVar5 = 0;
      iVar1 = 0;
    }
joined_r0x716329ac:
    if (param_5 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(iStack_3c);
      uVar3 = FUN_71ba21e8(uVar3,param_3);
      FUN_71ba0b38(uVar3,0);
      imp_floorf();
      uVar3 = FUN_71ba17bc();
      *param_5 = uVar3;
    }
    if (param_6 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(-iStack_30);
      uVar3 = FUN_71ba21e8(uVar3,param_4);
      FUN_71ba0b38(uVar3,0);
      imp_floorf();
      uVar3 = FUN_71ba17bc();
      *param_6 = uVar3;
    }
    if (param_7 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(iVar1);
      uVar3 = FUN_71ba21e8(uVar3,param_3);
      FUN_71ba0b38(uVar3,0);
      imp_ceilf();
      uVar3 = FUN_71ba17bc();
      *param_7 = uVar3;
    }
    if (param_8 != (undefined4 *)0x0) {
      uVar3 = FUN_71ba1b94(-iVar5);
      uVar3 = FUN_71ba21e8(uVar3,param_4);
      FUN_71ba0b38(uVar3,0);
      imp_ceilf();
      uVar3 = FUN_71ba17bc();
      *param_8 = uVar3;
    }
    return;
  }
  if ((param_2 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0x30) < 2)) {
    iVar5 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x30) == 0) {
      pbVar8 = (byte *)(iVar5 + param_2 * 2);
      uVar4 = (uint)pbVar8[1] << 1 | (uint)*pbVar8 << 9;
      if (uVar4 == ((uint)pbVar8[3] << 1 | (uint)pbVar8[2] << 9)) goto LAB_716328e0;
    }
    else {
      puVar6 = (uint *)(iVar5 + param_2 * 4);
      uVar4 = *puVar6;
      uVar7 = puVar6[1];
      uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
      if (uVar4 == (uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18)) goto LAB_716328e0;
    }
    iVar5 = uVar4 + *(int *)(param_1 + 0x18);
    if (-1 < iVar5) {
      iVar5 = *(int *)(param_1 + 4) + iVar5;
      iStack_3c = (int)(short)(*(ushort *)(iVar5 + 2) << 8 | *(ushort *)(iVar5 + 2) >> 8);
      iStack_30 = (int)(short)(*(ushort *)(iVar5 + 8) << 8 | *(ushort *)(iVar5 + 8) >> 8);
      iVar1 = (int)(short)(*(ushort *)(iVar5 + 6) << 8 | *(ushort *)(iVar5 + 6) >> 8);
      iVar5 = (int)(short)(*(ushort *)(iVar5 + 4) << 8 | *(ushort *)(iVar5 + 4) >> 8);
      goto joined_r0x716329ac;
    }
  }
LAB_716328e0:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_71632c34
// Entry: 0x71632c34 | Size: 596 bytes
// =========================================================================

uint FUN_71632c34(int param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 0x2c);
  puVar8 = (ushort *)(iVar5 + iVar12);
  uVar1 = *puVar8 >> 8;
  uVar2 = *puVar8 << 8;
  uVar13 = uVar2 | uVar1;
  switch(uVar13) {
  case 0:
    if ((int)param_2 <
        (int)((((uint)puVar8[1] << 0x18 | (uint)(puVar8[1] >> 8) << 0x10) >> 0x10) - 6)) {
      return (uint)*(byte *)((int)puVar8 + param_2 + 6);
    }
    break;
  default:
    if ((uVar2 | uVar1 & 0xfffe) == 0xc) {
      uVar6 = *(uint *)(puVar8 + 6);
      uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
      if (0 < (int)uVar6) {
        iVar5 = 0;
        do {
          while( true ) {
            uVar7 = iVar5 + ((int)(uVar6 - iVar5) >> 1);
            puVar4 = (uint *)(puVar8 + uVar7 * 6 + 8);
            uVar10 = *puVar4;
            uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                     uVar10 >> 0x18;
            if (param_2 < uVar10) break;
            uVar9 = puVar4[1];
            if (param_2 <=
                (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                uVar9 >> 0x18)) {
              uVar6 = puVar4[2];
              uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                      uVar6 >> 0x18;
              if (uVar13 == 0xc) {
                uVar6 = uVar6 + (param_2 - uVar10);
              }
              return uVar6;
            }
            iVar5 = uVar7 + 1;
            if ((int)uVar6 <= iVar5) {
              return 0;
            }
          }
          uVar6 = uVar7;
        } while (iVar5 < (int)uVar7);
      }
    }
    break;
  case 2:
    break;
  case 4:
    uVar2 = puVar8[3];
    uVar6 = *(byte *)((int)puVar8 + 0xd) & 0xfe | (uint)(byte)puVar8[6] << 8;
    uVar1 = *(ushort *)((int)puVar8 + uVar6 + 0xe);
    iVar11 = iVar12;
    if ((int)(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) <= (int)param_2) {
      iVar11 = iVar12 + uVar6;
    }
    iVar11 = iVar11 + 0xc;
    uVar6 = ((uint)puVar8[5] << 0x18 | (uint)(puVar8[5] >> 8) << 0x10) >> 0x10;
    if (uVar6 != 0) {
      uVar7 = (puVar8[4] & 0xff) << 8 | (uint)(puVar8[4] >> 8);
      do {
        uVar6 = uVar6 - 1;
        iVar3 = iVar11 + (uVar7 >> 1 & 0x7ffe);
        uVar1 = *(ushort *)(iVar3 + iVar5);
        uVar7 = uVar7 >> 1;
        if ((int)(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) < (int)param_2) {
          iVar11 = iVar3;
        }
      } while ((uVar6 & 0xffff) != 0);
    }
    uVar6 = (iVar11 - iVar12) + 0x1fff4U & 0x1fffe;
    uVar7 = 0;
    uVar1 = *(ushort *)
             ((int)puVar8 + uVar6 + ((uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xfffffffe) + 0x10);
    if ((int)(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10) <= (int)param_2) {
      uVar7 = ((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x11;
      uVar2 = *(ushort *)((int)puVar8 + uVar6 + uVar7 * 6 + 0x10);
      if ((uVar2 & 0xff) == 0 && uVar2 >> 8 == 0) {
        uVar2 = *(ushort *)((int)puVar8 + uVar6 + uVar7 * 4 + 0x10);
        return param_2 + (((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10) & 0xffff;
      }
      uVar2 = *(ushort *)
               (iVar5 + ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) +
                (param_2 - ((uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8))) * 2 + iVar12 + uVar7 * 6 +
                uVar6 + 0x10);
      uVar7 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
    }
    return uVar7;
  case 6:
    uVar2 = puVar8[3];
    if ((((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10 <= param_2) &&
       (uVar6 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8),
       param_2 < uVar6 + (((uint)puVar8[4] << 0x18 | (uint)(puVar8[4] >> 8) << 0x10) >> 0x10))) {
      return (puVar8[(param_2 - uVar6) + 5] & 0xff) << 8 |
             (uint)(puVar8[(param_2 - uVar6) + 5] >> 8);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_71632ebc
// Entry: 0x71632ebc | Size: 3744 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_71632ebc(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iStack_1bc;
  uint uStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int aiStack_198 [25];
  uint auStack_134 [5];
  uint auStack_120 [48];
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int aiStack_54 [3];
  uint uStack_48;
  uint uStack_44;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  iStack_1bc = *(int *)(param_1 + 0x58);
  uStack_1b8 = *(uint *)(param_1 + 0x60);
  FUN_71634618(&iStack_1a8,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x48),param_2);
  if (iStack_1a4 < iStack_1a0) {
    bVar2 = true;
    iStack_1ac = 0;
    iStack_1b0 = 0;
    bVar3 = false;
    uVar8 = 0;
    do {
      uVar9 = auStack_120[0xb];
      uVar4 = auStack_120[10];
      uVar6 = auStack_120[9];
      uVar14 = auStack_120[8];
      uVar13 = auStack_120[7];
      uVar10 = auStack_120[6];
      uVar24 = auStack_120[5];
      uVar25 = auStack_120[4];
      uVar18 = auStack_120[3];
      uVar11 = auStack_120[2];
      uVar15 = auStack_120[1];
      uVar19 = auStack_120[0];
      puVar17 = auStack_134 + 5;
      iVar12 = iStack_1a4 + 1;
      bVar1 = *(byte *)(iStack_1a8 + iStack_1a4);
      switch(bVar1) {
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        iStack_1ac = iStack_1ac + (int)uVar8 / 2;
        uVar21 = 0;
        iStack_1a4 = iVar12;
        break;
      default:
        if (bVar1 < 0x20) {
          return 0;
        }
        if (bVar1 != 0xff) goto switchD_71632fd4_caseD_1c;
      case 0xff:
        uVar19 = 0;
        if (iVar12 < iStack_1a0) {
          uVar15 = (uint)*(byte *)(iStack_1a8 + iVar12);
          iVar12 = iStack_1a4 + 2;
        }
        else {
          uVar15 = 0;
        }
        uVar11 = 0;
        if (iVar12 < iStack_1a0) {
          uVar19 = (uint)*(byte *)(iStack_1a8 + iVar12);
          iVar12 = iVar12 + 1;
        }
        if (iVar12 < iStack_1a0) {
          uVar18 = (uint)*(byte *)(iStack_1a8 + iVar12);
          iVar12 = iVar12 + 1;
        }
        else {
          uVar18 = 0;
        }
        if (iVar12 < iStack_1a0) {
          uVar11 = (uint)*(byte *)(iStack_1a8 + iVar12);
        }
        if (iVar12 < iStack_1a0) {
          iVar12 = iVar12 + 1;
        }
        iStack_1a4 = iVar12;
        uVar7 = FUN_71ba1b94((uVar15 << 0x10 | uVar19 << 8 | uVar18) << 8 | uVar11);
        uVar19 = FUN_71ba21e8(uVar7,0x37800000);
LAB_71633924:
        if (0x2f < (int)uVar8) {
          return 0;
        }
        puVar17[uVar8] = uVar19;
        uVar21 = uVar8 + 1;
        break;
      case 4:
        if ((int)uVar8 < 1) {
          return 0;
        }
        uVar19 = 0;
        uVar15 = auStack_134[uVar8 + 4];
        goto LAB_716338b0;
      case 5:
        if ((int)uVar8 < 2) {
          return 0;
        }
        puVar17 = auStack_134 + 5;
        iVar20 = 1;
        iStack_1a4 = iVar12;
        do {
          FUN_7163495c(param_3,*puVar17,puVar17[1]);
          iVar20 = iVar20 + 2;
          puVar17 = puVar17 + 2;
        } while (iVar20 < (int)uVar8);
        goto LAB_71632f9c;
      case 6:
        iVar20 = 0;
        if ((int)uVar8 < 1) {
          return 0;
        }
        iStack_1a4 = iVar12;
        if (0 < (int)uVar8) {
          do {
            FUN_7163495c(param_3,puVar17[iVar20],0);
            iVar20 = iVar20 + 1;
            if ((int)uVar8 <= iVar20) break;
LAB_71634070:
            FUN_7163495c(param_3,0,puVar17[iVar20]);
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)uVar8);
        }
        goto LAB_71632f9c;
      case 7:
        iVar20 = 0;
        if ((int)uVar8 < 1) {
          return 0;
        }
        iStack_1a4 = iVar12;
        if (0 < (int)uVar8) goto LAB_71634070;
        goto LAB_71632f9c;
      case 8:
        if ((int)uVar8 < 6) {
          return 0;
        }
        iVar20 = 5;
        iStack_1a4 = iVar12;
        do {
          FUN_71634b28(param_3,*puVar17,puVar17[1],puVar17[2],puVar17[3],puVar17[4],puVar17[5]);
          iVar20 = iVar20 + 6;
          puVar17 = puVar17 + 6;
        } while (iVar20 < (int)uVar8);
        uVar21 = 0;
        break;
      case 10:
        iStack_1a4 = iVar12;
        if (!bVar3) {
          uVar19 = *(uint *)(param_1 + 0x78);
          if (uVar19 != 0) {
            iVar20 = *(int *)(param_1 + 0x70);
            uVar15 = 0;
            if ((int)uVar19 < 0) {
              uVar15 = uVar19;
            }
            if ((int)uVar19 < 1) {
LAB_71633c4c:
              uVar18 = 0;
              uVar15 = uVar15 + param_2;
              uVar11 = uVar15;
              if ((int)uVar19 < (int)uVar15) {
                uVar11 = uVar19;
              }
              if ((int)uVar15 < 0) {
                uVar11 = uVar19;
              }
              if ((int)uVar11 < (int)uVar19) {
                uVar18 = (uint)*(byte *)(iVar20 + uVar11);
              }
            }
            else {
              if (*(char *)(iVar20 + uVar15) == '\0') {
                uVar15 = 1;
                goto LAB_71633c4c;
              }
              if (*(char *)(iVar20 + uVar15) == '\x03') {
                uVar25 = 1;
                uVar15 = 0;
                uVar11 = 0;
                if (uVar19 != 1) {
                  uVar15 = (uint)*(byte *)(iVar20 + 1);
                  uVar25 = 2;
                }
                uVar18 = 0;
                if (uVar25 < uVar19) {
                  uVar11 = (uint)*(byte *)(iVar20 + uVar25);
                  uVar25 = uVar25 + 1;
                }
                if (uVar25 < uVar19) {
                  uVar24 = (uint)*(byte *)(iVar20 + uVar25);
                  uVar25 = uVar25 + 1;
                }
                else {
                  uVar24 = 0;
                }
                if (uVar25 < uVar19) {
                  uVar18 = (uint)*(byte *)(iVar20 + uVar25);
                  uVar25 = uVar25 + 1;
                }
                uVar11 = uVar15 << 8 | uVar11;
                if (uVar11 != 0) {
                  uVar15 = uVar24 << 8 | uVar18;
                  do {
                    uVar24 = 0;
                    if ((int)uVar25 < (int)uVar19) {
                      uVar18 = (uint)*(byte *)(iVar20 + uVar25);
                      uVar25 = uVar25 + 1;
                    }
                    else {
                      uVar18 = 0;
                    }
                    uVar10 = 0;
                    if ((int)uVar25 < (int)uVar19) {
                      uVar24 = (uint)*(byte *)(iVar20 + uVar25);
                      uVar25 = uVar25 + 1;
                    }
                    if ((int)uVar25 < (int)uVar19) {
                      uVar10 = (uint)*(byte *)(iVar20 + uVar25);
                      uVar25 = uVar25 + 1;
                    }
                    uVar10 = uVar24 << 8 | uVar10;
                    if (((int)uVar15 <= param_2) && (param_2 < (int)uVar10)) goto LAB_71633d10;
                    uVar11 = uVar11 - 1;
                    uVar15 = uVar10;
                  } while (uVar11 != 0);
                }
              }
              uVar18 = 0xffffffff;
            }
LAB_71633d10:
            iVar20 = *(int *)(param_1 + 0x34);
            uVar15 = *(uint *)(param_1 + 0x3c);
            FUN_71634618(&iStack_60,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                         *(undefined4 *)(param_1 + 0x6c),uVar18);
            iStack_38 = iStack_60;
            uStack_34 = uStack_5c;
            iStack_30 = iStack_58;
            uStack_1b8 = 0;
            iStack_3c = 0;
            uStack_44 = 0;
            uStack_48 = 0;
            FUN_71635200(&iStack_38,0x12,2,&uStack_48);
            uVar19 = uStack_44;
            if (uStack_44 == 0) {
              iStack_1bc = 0;
            }
            else {
              iStack_1bc = 0;
              if (uStack_48 != 0) {
                if ((int)(uStack_48 | uStack_44) < 0) {
                  aiStack_54[0] = 0;
                  aiStack_54[2] = 0;
                }
                else {
                  aiStack_54[0] = iVar20 + uStack_44;
                  aiStack_54[2] = uStack_48;
                  if ((int)uVar15 < (int)uStack_44 || (int)(uVar15 - uStack_44) < (int)uStack_48) {
                    aiStack_54[2] = 0;
                    aiStack_54[0] = 0;
                  }
                }
                aiStack_54[1] = 0;
                FUN_71635200(aiStack_54,0x13,1,&iStack_3c);
                if (iStack_3c == 0) {
                  uStack_1b8 = 0;
                  iStack_1bc = 0;
                }
                else {
                  uVar19 = iStack_3c + uVar19;
                  uVar11 = 0;
                  uVar18 = 0;
                  uVar25 = uVar19;
                  if ((int)uVar15 < (int)uVar19) {
                    uVar25 = uVar15;
                  }
                  if ((int)uVar19 < 0) {
                    uVar25 = uVar15;
                  }
                  uVar19 = uVar25;
                  if ((int)uVar25 < (int)uVar15) {
                    uVar11 = (uint)*(byte *)(iVar20 + uVar25) << 8;
                    uVar19 = uVar25 + 1;
                  }
                  if ((int)uVar19 < (int)uVar15) {
                    uVar18 = (uint)*(byte *)(iVar20 + uVar19);
                    uVar19 = uVar19 + 1;
                  }
                  if ((uVar18 | uVar11) != 0) {
                    uVar24 = 0;
                    if ((int)uVar19 < (int)uVar15) {
                      uVar24 = (uint)*(byte *)(iVar20 + uVar19);
                      uVar19 = uVar19 + 1;
                    }
                    uVar19 = uVar24 * (uVar18 | uVar11) + uVar19;
                    uVar11 = uVar19;
                    if ((int)uVar15 < (int)uVar19) {
                      uVar11 = uVar15;
                    }
                    if ((int)uVar19 < 0) {
                      uVar11 = uVar15;
                    }
                    if (uVar24 == 0) {
                      iVar12 = -1;
                    }
                    else {
                      uVar19 = 0;
                      do {
                        if ((int)uVar11 < (int)uVar15) {
                          uVar18 = (uint)*(byte *)(iVar20 + uVar11);
                          uVar11 = uVar11 + 1;
                        }
                        else {
                          uVar18 = 0;
                        }
                        uVar24 = uVar24 - 1;
                        uVar19 = uVar19 << 8 | uVar18;
                      } while (uVar24 != 0);
                      iVar12 = uVar19 - 1;
                    }
                    uVar11 = iVar12 + uVar11;
                    uVar19 = uVar11;
                    if ((int)uVar15 < (int)uVar11) {
                      uVar19 = uVar15;
                    }
                    if ((int)uVar11 < 0) {
                      uVar19 = uVar15;
                    }
                  }
                  uStack_1b8 = uVar19 - uVar25;
                  iStack_1bc = iVar20 + uVar25;
                  if ((int)(uStack_1b8 | uVar25) < 0 || (int)uVar15 < (int)uVar19) {
                    iStack_1bc = 0;
                    uStack_1b8 = 0;
                  }
                }
              }
            }
          }
        }
        bVar3 = true;
        iVar12 = iStack_1a4;
      case 0x1d:
        iStack_1a4 = iVar12;
        if ((int)uVar8 < 1) {
          return 0;
        }
        iVar12 = FUN_71ba17bc(auStack_134[uVar8 + 4]);
        if (9 < iStack_1b0) {
          return 0;
        }
        aiStack_198[iStack_1b0 * 3] = iStack_1a8;
        uVar19 = 0;
        iVar20 = iStack_1a8;
        if (bVar1 != 10) {
          iVar20 = param_1;
        }
        aiStack_198[iStack_1b0 * 3 + 1] = iStack_1a4;
        aiStack_198[iStack_1b0 * 3 + 2] = iStack_1a0;
        iVar22 = iStack_1bc;
        uVar15 = uStack_1b8;
        if (bVar1 != 10) {
          uVar15 = *(uint *)(iVar20 + 0x54);
          iVar22 = *(int *)(iVar20 + 0x4c);
        }
        uVar11 = 0;
        if ((int)uVar15 < 0) {
          uVar11 = uVar15;
        }
        if ((int)uVar15 < 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = (uint)*(byte *)(iVar22 + uVar11) << 8;
          uVar11 = 1;
        }
        if ((int)uVar11 < (int)uVar15) {
          uVar19 = (uint)*(byte *)(iVar22 + uVar11);
          uVar11 = uVar11 + 1;
        }
        uVar19 = uVar19 | uVar18;
        iVar20 = 0x6b;
        if (0x9a < uVar19 >> 3) {
          iVar20 = 0x46b;
        }
        if (0x846b < uVar19) {
          iVar20 = 0x8000;
        }
        if ((uint)(iVar20 + iVar12) < uVar19) {
          FUN_71634618(&iStack_38,iVar22,uVar11,uVar15,iVar20 + iVar12);
        }
        else {
          iStack_30 = 0;
          iStack_38 = 0;
          uStack_34 = 0;
        }
        iStack_1a8 = iStack_38;
        iStack_1a0 = iStack_30;
        if (iStack_30 == 0) {
          return 0;
        }
        iStack_1b0 = iStack_1b0 + 1;
        iStack_1a4 = 0;
        uVar21 = uVar8 - 1;
        break;
      case 0xb:
        if (iStack_1b0 < 1) {
          return 0;
        }
        iStack_1b0 = iStack_1b0 + -1;
        iStack_1a8 = aiStack_198[iStack_1b0 * 3];
        iStack_1a4 = aiStack_198[iStack_1b0 * 3 + 1];
        iStack_1a0 = aiStack_198[iStack_1b0 * 3 + 2];
        uVar21 = uVar8;
        break;
      case 0xc:
        uVar21 = 0;
        if (iStack_1a0 <= iVar12) {
          return 0;
        }
        iStack_1a4 = iStack_1a4 + 2;
        uVar26 = uVar4;
        switch(*(undefined1 *)(iStack_1a8 + iVar12)) {
        case 0x22:
          if ((int)uVar8 < 7) {
            return 0;
          }
          FUN_71634b28(param_3,auStack_120[0],0,auStack_120[1],auStack_120[2],auStack_120[3],0);
          FUN_71634b28(param_3,uVar25,0,uVar24,uVar11 ^ 0x80000000,uVar10,0);
          break;
        case 0x23:
          if ((int)uVar8 < 0xd) {
            return 0;
          }
          FUN_71634b28(param_3,auStack_120[0],auStack_120[1],auStack_120[2],auStack_120[3],
                       auStack_120[4],auStack_120[5]);
          goto LAB_71633c3c;
        case 0x24:
          if ((int)uVar8 < 9) {
            return 0;
          }
          FUN_71634b28(param_3,auStack_120[0],auStack_120[1],auStack_120[2],auStack_120[3],
                       auStack_120[4],0);
          uVar7 = FUN_71ba0b38(uVar15,uVar18);
          uVar8 = FUN_71ba0b38(uVar7,uVar13);
          uVar21 = 0;
          FUN_71634b28(param_3,uVar24,0,uVar10,uVar13,uVar14,uVar8 ^ 0x80000000);
          break;
        case 0x25:
          if ((int)uVar8 < 0xb) {
            return 0;
          }
          FUN_71634b28(param_3,auStack_120[0],auStack_120[1],auStack_120[2],auStack_120[3],
                       auStack_120[4],auStack_120[5]);
          uVar7 = FUN_71ba0b38(uVar19,uVar11);
          uVar7 = FUN_71ba0b38(uVar7,uVar25);
          uVar7 = FUN_71ba0b38(uVar7,uVar10);
          uVar8 = FUN_71ba0b38(uVar7,uVar14);
          uVar7 = FUN_71ba0b38(uVar15,uVar18);
          uVar7 = FUN_71ba0b38(uVar7,uVar24);
          uVar7 = FUN_71ba0b38(uVar7,uVar13);
          uVar9 = FUN_71ba0b38(uVar7,uVar6);
          iVar12 = FUN_71ba2d70(uVar8 & 0x7fffffff,uVar9 & 0x7fffffff);
          if (iVar12 == 0) {
            uVar26 = uVar8 ^ 0x80000000;
            uVar9 = uVar4;
          }
          else {
            uVar9 = uVar9 ^ 0x80000000;
          }
LAB_71633c3c:
          FUN_71634b28(param_3,uVar10,uVar13,uVar14,uVar6,uVar26,uVar9);
          uVar21 = 0;
          break;
        default:
          goto switchD_716337bc_default;
        }
        break;
      case 0xe:
        iStack_1a4 = iVar12;
        FUN_71634e9c(param_3);
        return 1;
      case 0x13:
      case 0x14:
        if (bVar2) {
          iStack_1ac = iStack_1ac + (int)uVar8 / 2;
        }
        iVar12 = iVar12 + ((int)(iStack_1ac + 7 + ((uint)(iStack_1ac + 7 >> 0x1f) >> 0x1d)) >> 3);
        iStack_1a4 = iVar12;
        if (iStack_1a0 < iVar12) {
          iStack_1a4 = iStack_1a0;
        }
        if (iVar12 < 0) {
          iStack_1a4 = iStack_1a0;
        }
        goto LAB_71633698;
      case 0x15:
        if ((int)uVar8 < 2) {
          return 0;
        }
        iStack_1a4 = iVar12;
        FUN_71634760(param_3,auStack_134[uVar8 + 3],auStack_134[uVar8 + 4]);
LAB_71633698:
        bVar2 = false;
        uVar21 = 0;
        break;
      case 0x16:
        if ((int)uVar8 < 1) {
          return 0;
        }
        uVar15 = 0;
        uVar19 = auStack_134[uVar8 + 4];
LAB_716338b0:
        bVar2 = false;
        iStack_1a4 = iVar12;
        FUN_71634760(param_3,uVar19,uVar15);
        uVar21 = 0;
        break;
      case 0x18:
        if ((int)uVar8 < 8) {
          return 0;
        }
        puVar17 = auStack_134 + 10;
        iVar20 = 5;
        iStack_1a4 = iVar12;
        do {
          iVar12 = iVar20;
          puVar16 = puVar17;
          FUN_71634b28(param_3,puVar16[-5],puVar16[-4],puVar16[-3],puVar16[-2],puVar16[-1],*puVar16)
          ;
          iVar20 = iVar12 + 6;
          puVar17 = puVar16 + 6;
        } while (iVar20 < (int)(uVar8 - 2));
        if ((int)uVar8 <= iVar12 + 2) {
          return 0;
        }
        FUN_7163495c(param_3,puVar16[1],puVar16[2]);
        uVar21 = 0;
        break;
      case 0x19:
        if ((int)uVar8 < 8) {
          return 0;
        }
        puVar17 = auStack_134 + 8;
        iVar20 = 5;
        iStack_1a4 = iVar12;
        do {
          puVar16 = puVar17;
          FUN_7163495c(param_3,puVar16[-3],puVar16[-2]);
          iVar12 = iVar20 + 2;
          iVar22 = iVar20 + -2;
          puVar17 = puVar16 + 2;
          iVar20 = iVar12;
        } while (iVar22 < (int)(uVar8 - 6));
        if ((int)uVar8 <= iVar12) {
          return 0;
        }
        uVar10 = puVar16[-1];
        uVar13 = auStack_134[uVar8 & 0x7ffffffe];
        uVar6 = puVar16[2];
        uVar14 = puVar16[1];
        uVar26 = puVar16[3];
        uVar9 = puVar16[4];
        goto LAB_71633c3c;
      case 0x1a:
      case 0x1b:
        if ((int)uVar8 < 4) {
          return 0;
        }
        uVar19 = uVar8 & 1;
        iStack_1a4 = iVar12;
        if (uVar19 + 3 < uVar8) {
          uVar18 = puVar17[uVar19 + 3];
          uVar11 = puVar17[uVar19];
          uVar15 = auStack_120[0];
          if (uVar19 == 0) {
            uVar15 = 0;
          }
          if (bVar1 == 0x1b) {
            uVar25 = uVar11;
            uVar11 = uVar15;
            uVar24 = uVar18;
            uVar18 = 0;
          }
          else {
            uVar24 = 0;
            uVar25 = uVar15;
          }
          FUN_71634b28(param_3,uVar25,uVar11,auStack_134[uVar19 + 6],auStack_134[uVar19 + 7],uVar24,
                       uVar18);
          uVar15 = uVar19 + 7;
          if (uVar15 < uVar8) {
            puVar17 = auStack_134 + uVar19 + 0xc;
            do {
              uVar19 = puVar17[-3];
              uVar11 = *puVar17;
              if (bVar1 == 0x1b) {
                uVar18 = uVar19;
                uVar19 = 0;
                uVar25 = uVar11;
                uVar11 = 0;
              }
              else {
                uVar18 = 0;
                uVar25 = 0;
              }
              FUN_71634b28(param_3,uVar18,uVar19,puVar17[-2],puVar17[-1],uVar25,uVar11);
              uVar15 = uVar15 + 4;
              puVar17 = puVar17 + 4;
            } while ((int)uVar15 < (int)uVar8);
          }
        }
        goto LAB_71632f9c;
      case 0x1c:
switchD_71632fd4_caseD_1c:
        iVar12 = iStack_1a4;
        if (iStack_1a0 < iStack_1a4) {
          iVar12 = iStack_1a0;
        }
        bVar23 = iStack_1a4 < 0;
        iStack_1a4 = iVar12;
        if (bVar23) {
          iStack_1a4 = iStack_1a0;
        }
        sVar5 = FUN_71635070(&iStack_1a8);
        uVar19 = FUN_71ba1b94((int)sVar5);
        goto LAB_71633924;
      case 0x1e:
        iVar22 = 0;
        iStack_1a4 = iVar12;
        if ((int)uVar8 < 4) {
          return 0;
        }
        while (iVar22 + 3 < (int)uVar8) {
          iVar20 = iVar22 + 4;
          uVar19 = 0;
          if (uVar8 - iVar22 == 5) {
            uVar19 = puVar17[iVar20];
          }
          FUN_71634b28(param_3,0,puVar17[iVar22],auStack_134[iVar22 + 6],auStack_134[iVar22 + 7],
                       puVar17[iVar22 + 3],uVar19);
LAB_716340e8:
          if ((int)uVar8 <= iVar20 + 3) break;
          iVar22 = iVar20 + 4;
          uVar19 = 0;
          if (uVar8 - iVar20 == 5) {
            uVar19 = puVar17[iVar22];
          }
          FUN_71634b28(param_3,puVar17[iVar20],0,auStack_134[iVar20 + 6],auStack_134[iVar20 + 7],
                       uVar19,puVar17[iVar20 + 3]);
        }
LAB_71632f9c:
        uVar21 = 0;
        break;
      case 0x1f:
        iVar20 = 0;
        iStack_1a4 = iVar12;
        if (3 < (int)uVar8) goto LAB_716340e8;
        return 0;
      }
      uVar8 = uVar21;
    } while (iStack_1a4 < iStack_1a0);
  }
switchD_716337bc_default:
  return 0;
}


// =========================================================================
// Function: FUN_71634618
// Entry: 0x71634618 | Size: 304 bytes
// =========================================================================

void FUN_71634618(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  iVar5 = 0;
  if (param_4 < 0) {
    iVar5 = param_4;
  }
  uVar2 = 0;
  if (param_4 < 1) {
    uVar8 = 0;
  }
  else {
    pbVar1 = (byte *)(param_2 + iVar5);
    iVar5 = 1;
    uVar8 = (uint)*pbVar1 << 8;
  }
  if (iVar5 < param_4) {
    uVar2 = (uint)*(byte *)(param_2 + iVar5);
    iVar5 = iVar5 + 1;
  }
  uVar6 = 0;
  uVar3 = 0;
  uVar7 = 0;
  if ((iVar5 < param_4) && (uVar10 = (uint)*(byte *)(param_2 + iVar5), uVar10 != 0)) {
    iVar4 = uVar10 * param_5 + iVar5 + 1;
    iVar5 = iVar4;
    if (param_4 < iVar4) {
      iVar5 = param_4;
    }
    if (iVar4 < 0) {
      iVar5 = param_4;
    }
    uVar3 = 0;
    uVar7 = uVar10;
    do {
      if (iVar5 < param_4) {
        uVar6 = (uint)*(byte *)(param_2 + iVar5);
        iVar5 = iVar5 + 1;
      }
      else {
        uVar6 = 0;
      }
      uVar7 = uVar7 - 1;
      uVar3 = uVar3 << 8 | uVar6;
    } while (uVar7 != 0);
    uVar6 = 0;
    uVar9 = uVar10;
    do {
      if (iVar5 < param_4) {
        uVar7 = (uint)*(byte *)(param_2 + iVar5);
        iVar5 = iVar5 + 1;
      }
      else {
        uVar7 = 0;
      }
      uVar9 = uVar9 - 1;
      uVar6 = uVar6 << 8 | uVar7;
      uVar7 = uVar10;
    } while (uVar9 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = uVar6 - uVar3;
  param_1[2] = 0;
  uVar2 = uVar7 * ((uVar8 | uVar2) + 1) + uVar3 + 2;
  if (-1 < (int)(uVar6 | uVar2)) {
    bVar11 = SBORROW4(param_4,uVar2);
    iVar5 = param_4 - uVar2;
    if ((int)uVar2 <= param_4) {
      bVar11 = SBORROW4(iVar5,uVar6);
      iVar5 = iVar5 - uVar6;
    }
    if (iVar5 < 0 == bVar11) {
      param_1[2] = uVar6;
      *param_1 = param_2 + uVar2;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71634760
// Entry: 0x71634760 | Size: 344 bytes
// =========================================================================

void FUN_71634760(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_71634e9c();
  iVar4 = *param_1;
  iVar3 = param_1[5];
  iVar1 = FUN_71ba0b38(param_1[4],param_2);
  param_1[2] = iVar1;
  param_1[4] = iVar1;
  iVar3 = FUN_71ba0b38(iVar3,param_3);
  param_1[5] = iVar3;
  param_1[3] = iVar3;
  iVar1 = FUN_71ba17bc(iVar1);
  iVar3 = FUN_71ba17bc(iVar3);
  if (iVar4 == 0) {
    puVar2 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
    *puVar2 = (short)iVar1;
    puVar2[1] = (short)iVar3;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 6) = 1;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 8) = 0;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 10) = 0;
  }
  else {
    if (param_1[7] < iVar1) {
      param_1[7] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[7] = iVar1;
    }
    if (param_1[9] < iVar3) {
      param_1[9] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[9] = iVar3;
    }
    if (iVar1 < param_1[6]) {
      param_1[6] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[6] = iVar1;
    }
    if (iVar3 < param_1[8]) {
      param_1[8] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[8] = iVar3;
    }
    param_1[1] = 1;
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


// =========================================================================
// Function: FUN_7163495c
// Entry: 0x7163495c | Size: 324 bytes
// =========================================================================

void FUN_7163495c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = param_1[5];
  iVar1 = FUN_71ba0b38(param_1[4]);
  param_1[4] = iVar1;
  iVar3 = FUN_71ba0b38(iVar3,param_3);
  param_1[5] = iVar3;
  iVar1 = FUN_71ba17bc(iVar1);
  iVar3 = FUN_71ba17bc(iVar3);
  if (iVar4 == 0) {
    puVar2 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
    *puVar2 = (short)iVar1;
    puVar2[1] = (short)iVar3;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined1 *)(puVar2 + 6) = 2;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 8) = 0;
    *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 10) = 0;
  }
  else {
    if (param_1[7] < iVar1) {
      param_1[7] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[7] = iVar1;
    }
    if (param_1[9] < iVar3) {
      param_1[9] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[9] = iVar3;
    }
    if (iVar1 < param_1[6]) {
      param_1[6] = iVar1;
    }
    else if (param_1[1] == 0) {
      param_1[6] = iVar1;
    }
    if (iVar3 < param_1[8]) {
      param_1[8] = iVar3;
    }
    else if (param_1[1] == 0) {
      param_1[8] = iVar3;
    }
    param_1[1] = 1;
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


// =========================================================================
// Function: FUN_71634b28
// Entry: 0x71634b28 | Size: 524 bytes
// =========================================================================

void FUN_71634b28(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  
  iVar1 = *param_1;
  iVar14 = param_1[4];
  uVar2 = FUN_71ba0b38(param_1[5],param_3);
  uVar3 = FUN_71ba0b38(uVar2,param_5);
  iVar4 = FUN_71ba0b38(uVar3,param_7);
  param_1[5] = iVar4;
  uVar5 = FUN_71ba0b38(iVar14,param_2);
  uVar6 = FUN_71ba0b38(uVar5,param_4);
  iVar14 = FUN_71ba0b38(uVar6,param_6);
  param_1[4] = iVar14;
  iVar14 = FUN_71ba17bc();
  iVar4 = FUN_71ba17bc(iVar4);
  iVar7 = FUN_71ba17bc(uVar5);
  iVar8 = FUN_71ba17bc(uVar2);
  iVar9 = FUN_71ba17bc(uVar6);
  iVar10 = FUN_71ba17bc(uVar3);
  if (iVar1 == 0) {
    puVar12 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
    *puVar12 = (short)iVar14;
    puVar12[3] = (short)iVar8;
    puVar12[2] = (short)iVar7;
    puVar12[1] = (short)iVar4;
    *(undefined1 *)(puVar12 + 6) = 4;
    *(short *)(param_1[10] + param_1[0xb] * 0xe + 8) = (short)iVar9;
    *(short *)(param_1[10] + param_1[0xb] * 0xe + 10) = (short)iVar10;
  }
  else {
    if ((param_1[7] < iVar14) || (iVar1 = param_1[7], param_1[1] == 0)) {
      param_1[7] = iVar14;
      iVar1 = iVar14;
    }
    if ((param_1[9] < iVar4) || (iVar11 = param_1[9], param_1[1] == 0)) {
      param_1[9] = iVar4;
      iVar11 = iVar4;
    }
    if ((iVar14 < param_1[6]) || (iVar13 = param_1[6], param_1[1] == 0)) {
      param_1[6] = iVar14;
      iVar13 = iVar14;
    }
    if ((iVar4 < param_1[8]) || (iVar14 = param_1[8], param_1[1] == 0)) {
      param_1[8] = iVar4;
      iVar14 = iVar4;
    }
    if (iVar1 < iVar7) {
      param_1[7] = iVar7;
      iVar1 = iVar7;
    }
    param_1[1] = 1;
    if (iVar11 < iVar8) {
      param_1[9] = iVar8;
      iVar11 = iVar8;
    }
    if (iVar7 < iVar13) {
      param_1[6] = iVar7;
      iVar13 = iVar7;
    }
    if (iVar8 < iVar14) {
      param_1[8] = iVar8;
      iVar14 = iVar8;
    }
    if (iVar1 < iVar9) {
      param_1[7] = iVar9;
    }
    if (iVar11 < iVar10) {
      param_1[9] = iVar10;
    }
    if (iVar9 < iVar13) {
      param_1[6] = iVar9;
    }
    if (iVar10 < iVar14) {
      param_1[8] = iVar10;
    }
    param_1[1] = 1;
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


// =========================================================================
// Function: FUN_71634e9c
// Entry: 0x71634e9c | Size: 332 bytes
// =========================================================================

void FUN_71634e9c(int *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar1 = FUN_71ba2cf0(iVar3,param_1[4]);
  if ((iVar1 == 0) || (iVar1 = FUN_71ba2cf0(iVar4,param_1[5]), iVar1 == 0)) {
    iVar1 = FUN_71ba17bc(iVar3);
    iVar3 = FUN_71ba17bc(iVar4);
    if (*param_1 == 0) {
      puVar2 = (undefined2 *)(param_1[10] + param_1[0xb] * 0xe);
      *puVar2 = (short)iVar1;
      puVar2[1] = (short)iVar3;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined1 *)(puVar2 + 6) = 2;
      *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 8) = 0;
      *(undefined2 *)(param_1[10] + param_1[0xb] * 0xe + 10) = 0;
    }
    else {
      if (param_1[7] < iVar1) {
        param_1[7] = iVar1;
      }
      else if (param_1[1] == 0) {
        param_1[7] = iVar1;
      }
      if (param_1[9] < iVar3) {
        param_1[9] = iVar3;
      }
      else if (param_1[1] == 0) {
        param_1[9] = iVar3;
      }
      if (iVar1 < param_1[6]) {
        param_1[6] = iVar1;
      }
      else if (param_1[1] == 0) {
        param_1[6] = iVar1;
      }
      if (iVar3 < param_1[8]) {
        param_1[8] = iVar3;
      }
      else if (param_1[1] == 0) {
        param_1[8] = iVar3;
      }
      param_1[1] = 1;
    }
    param_1[0xb] = param_1[0xb] + 1;
  }
  return;
}


// =========================================================================
// Function: FUN_71635070
// Entry: 0x71635070 | Size: 376 bytes
// =========================================================================

uint FUN_71635070(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_1[1];
  uVar1 = 0;
  iVar4 = param_1[2];
  if (iVar5 < iVar4) {
    iVar7 = *param_1;
    iVar8 = iVar5 + 1;
    param_1[1] = iVar8;
    uVar3 = (uint)*(byte *)(iVar7 + iVar5);
    if (uVar3 - 0x20 < 0xd7) {
      return uVar3 - 0x8b;
    }
    if (uVar3 - 0xf7 < 4) {
      uVar1 = 0;
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return (uVar3 * 0x100 + uVar1) - 0xf694;
    }
    if (uVar3 - 0xfb < 4) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return 0xfa94 - (uVar1 | uVar3 << 8);
    }
    if (uVar3 == 0x1d) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar3 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar5 + 2;
      }
      else {
        uVar3 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
        iVar8 = iVar8 + 1;
      }
      uVar2 = 0;
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar6 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar8 + 1;
      }
      else {
        uVar6 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar2 = (uint)*(byte *)(iVar7 + iVar8);
      }
      uVar1 = uVar6 | (uVar3 | uVar1) << 0x10 | uVar2;
    }
    else if (uVar3 == 0x1c) {
      if (iVar8 < iVar4) {
        param_1[1] = iVar5 + 2;
        uVar3 = (uint)*(byte *)(iVar7 + iVar8) << 8;
        iVar8 = iVar5 + 2;
      }
      else {
        uVar3 = 0;
      }
      if (iVar8 < iVar4) {
        param_1[1] = iVar8 + 1;
        uVar1 = (uint)*(byte *)(iVar7 + iVar8);
      }
      return uVar3 | uVar1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71635200
// Entry: 0x71635200 | Size: 440 bytes
// =========================================================================

void FUN_71635200(int *param_1,uint param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  uVar6 = param_1[2];
  uVar9 = uVar6;
  if (-1 < (int)uVar6) {
    uVar9 = 0;
  }
  param_1[1] = uVar9;
  if (0 < (int)uVar6) {
    do {
      uVar10 = 0;
      uVar7 = uVar9;
      uVar4 = uVar9;
      if ((int)uVar9 < (int)uVar6) {
        do {
          while( true ) {
            iVar8 = *param_1;
            if (*(byte *)(iVar8 + uVar7) < 0x1c) {
              uVar4 = uVar7 + 1;
              param_1[1] = uVar4;
              uVar10 = (uint)*(byte *)(iVar8 + uVar7);
              if (uVar10 == 0xc) {
                uVar10 = 0;
                if ((int)uVar4 < (int)uVar6) {
                  param_1[1] = uVar7 + 2;
                  uVar10 = (uint)*(byte *)(iVar8 + uVar4);
                  uVar4 = uVar7 + 2;
                }
                uVar10 = uVar10 | 0x100;
              }
              goto LAB_716352e8;
            }
            if (*(byte *)(iVar8 + uVar7) != 0x1e) break;
            uVar3 = uVar6;
            if (-2 < (int)uVar7) {
              uVar3 = uVar7 + 1;
            }
            param_1[1] = uVar3;
            uVar4 = uVar6;
            if ((int)uVar6 < (int)uVar3) {
              uVar4 = uVar3;
            }
            do {
              uVar7 = uVar4;
              if (uVar4 == uVar3) goto LAB_716352e8;
              uVar7 = uVar3 + 1;
              param_1[1] = uVar7;
              pbVar1 = (byte *)(iVar8 + uVar3);
            } while (((*pbVar1 & 0xf) != 0xf) && (uVar3 = uVar7, (*pbVar1 & 0xf0) != 0xf0));
            uVar4 = uVar7;
            if ((int)uVar6 <= (int)uVar7) goto LAB_716352e8;
          }
          FUN_71635070(param_1);
          uVar7 = param_1[1];
          uVar6 = param_1[2];
          uVar4 = uVar7;
        } while ((int)uVar7 < (int)uVar6);
      }
LAB_716352e8:
      if (uVar10 == param_2) {
        iStack_2c = 0;
        uStack_28 = uVar7 - uVar9;
        if ((int)(uStack_28 | uVar9) < 0) {
          return;
        }
        uVar4 = uVar9;
        if ((int)uVar9 <= (int)uVar6) {
          uVar4 = uVar7;
        }
        if ((int)uVar6 < (int)uVar4) {
          return;
        }
        uVar6 = param_3;
        if (0 < (int)param_3) {
          uVar6 = uStack_28;
        }
        iStack_30 = *param_1 + uVar9;
        if ((int)uVar6 < 1) {
          return;
        }
        iVar8 = 0;
        do {
          uVar5 = FUN_71635070(&iStack_30);
          *(undefined4 *)(param_4 + iVar8 * 4) = uVar5;
          iVar8 = iVar8 + 1;
          bVar11 = SBORROW4(iVar8,param_3);
          iVar2 = iVar8 - param_3;
          if (iVar8 < (int)param_3) {
            bVar11 = SBORROW4(iStack_2c,uStack_28);
            iVar2 = iStack_2c - uStack_28;
          }
        } while (iVar2 < 0 != bVar11);
        return;
      }
      uVar9 = uVar4;
    } while ((int)uVar4 < (int)uVar6);
  }
  return;
}


// =========================================================================
// Function: FUN_71635408
// Entry: 0x71635408 | Size: 240 bytes
// =========================================================================

uint FUN_71635408(ushort *param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  
  uVar6 = (uint)*param_1 << 0x18 | (uint)(*param_1 >> 8) << 0x10;
  uVar3 = 0xffffffff;
  if (uVar6 == 0x20000) {
    uVar2 = param_1[1];
    if ((uVar2 & 0xff) != 0 || uVar2 >> 8 != 0) {
      iVar8 = ((uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8)) - 1;
      iVar5 = 0;
      do {
        iVar1 = iVar5 + iVar8 >> 1;
        puVar7 = param_1 + iVar1 * 3 + 2;
        if ((int)param_2 < (int)(((uint)*puVar7 << 0x18 | (uint)(*puVar7 >> 8) << 0x10) >> 0x10)) {
          iVar8 = iVar1 + -1;
        }
        else {
          if (param_2 <= ((uint)puVar7[1] << 0x18 | (uint)(puVar7[1] >> 8) << 0x10) >> 0x10) {
            puVar4 = (undefined1 *)((int)puVar7 + 5);
            param_1 = puVar7 + 2;
            goto LAB_716354e8;
          }
          iVar5 = iVar1 + 1;
        }
      } while (iVar5 <= iVar8);
    }
  }
  else if (uVar6 == 0x10000) {
    uVar2 = param_1[1];
    if (((int)(((uint)uVar2 << 0x18 | (uint)(uVar2 >> 8) << 0x10) >> 0x10) <= (int)param_2) &&
       (uVar6 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8),
       param_2 < uVar6 + (((uint)param_1[2] << 0x18 | (uint)(param_1[2] >> 8) << 0x10) >> 0x10))) {
      param_1 = param_1 + (param_2 - uVar6) + 3;
      puVar4 = (undefined1 *)((int)param_1 + 1);
LAB_716354e8:
      uVar3 = (uint)CONCAT11((char)*param_1,*puVar4);
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_71635510
// Entry: 0x71635510 | Size: 2944 bytes
// =========================================================================

int FUN_71635510(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  undefined1 uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ushort uVar22;
  undefined2 uVar23;
  ushort *puVar24;
  ushort *puVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  byte *pbVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  ushort *puVar33;
  undefined4 uVar34;
  byte bVar35;
  undefined4 uVar36;
  byte bVar37;
  short sVar38;
  int iVar39;
  int iVar40;
  undefined2 *puVar41;
  uint uVar42;
  undefined4 uVar43;
  int iVar44;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_8c;
  undefined1 auStack_88 [40];
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  undefined1 auStack_50 [40];
  int iStack_28;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    imp___aeabi_memclr4(auStack_50,0x2c);
    iStack_54 = 1;
    imp___aeabi_memclr8(auStack_88,0x30);
    iVar12 = FUN_71632ebc(param_1,param_2,&iStack_54);
    if (iVar12 != 0) {
      iStack_60 = imp_malloc(iStack_28 * 0xe);
      *param_3 = iStack_60;
      iVar12 = FUN_71632ebc(param_1,param_2,auStack_88);
      if (iVar12 != 0) {
        return iStack_5c;
      }
    }
LAB_716355f0:
    *param_3 = 0;
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) <= param_2) || (1 < *(int *)(param_1 + 0x30))) goto LAB_716355f0;
  iVar12 = *(int *)(param_1 + 4);
  iVar26 = iVar12 + *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x30) == 0) {
    pbVar29 = (byte *)(iVar26 + param_2 * 2);
    uVar13 = (uint)pbVar29[1] << 1 | (uint)*pbVar29 << 9;
    if (uVar13 == ((uint)pbVar29[3] << 1 | (uint)pbVar29[2] << 9)) goto LAB_716355f0;
  }
  else {
    puVar27 = (uint *)(iVar26 + param_2 * 4);
    uVar13 = *puVar27;
    uVar28 = puVar27[1];
    uVar13 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18;
    if (uVar13 == (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                  uVar28 >> 0x18)) goto LAB_716355f0;
  }
  iVar26 = uVar13 + *(int *)(param_1 + 0x18);
  *param_3 = 0;
  if (iVar26 < 0) {
    return 0;
  }
  puVar24 = (ushort *)(iVar12 + iVar26);
  uVar22 = *puVar24;
  uVar13 = (uVar22 & 0xff) << 8 | (uint)(uVar22 >> 8);
  if ((short)(uVar22 << 8 | uVar22 >> 8) < 1) {
    iVar12 = 0;
    iVar26 = 0;
    if (uVar13 == 0xffff) {
      puVar24 = puVar24 + 5;
      iVar31 = 0;
      iVar39 = 0;
      do {
        while( true ) {
          iStack_54 = 0;
          puVar33 = puVar24 + 2;
          bVar37 = *(byte *)((int)puVar24 + 1);
          uVar22 = puVar24[1];
          if ((bVar37 & 2) == 0) {
            uVar30 = 0;
            uStack_a0 = 0;
          }
          else if ((bVar37 & 1) == 0) {
            uStack_a0 = FUN_71ba1b94((int)(char)*puVar33);
            uVar30 = FUN_71ba1b94((int)*(char *)((int)puVar24 + 5));
            puVar33 = puVar24 + 3;
          }
          else {
            uStack_a0 = FUN_71ba1b94((int)CONCAT11((char)*puVar33,*(char *)((int)puVar24 + 5)));
            uVar30 = FUN_71ba1b94((int)(short)(puVar24[3] << 8 | puVar24[3] >> 8));
            puVar33 = puVar24 + 4;
          }
          uVar22 = uVar22 << 8 | uVar22 >> 8;
          if ((bVar37 & 8) == 0) {
            if ((bVar37 & 0x40) == 0) {
              if ((char)bVar37 < '\0') {
                uVar15 = FUN_71ba1b94((int)(short)(*puVar33 << 8 | *puVar33 >> 8),uVar22);
                uVar36 = FUN_71ba21e8(uVar15,0x38800000);
                uVar15 = FUN_71ba1b94((int)(short)(puVar33[1] << 8 | puVar33[1] >> 8));
                uVar34 = FUN_71ba21e8(uVar15,0x38800000);
                uVar15 = FUN_71ba1b94((int)(short)(puVar33[2] << 8 | puVar33[2] >> 8));
                uVar43 = FUN_71ba21e8(uVar15,0x38800000);
                uVar15 = FUN_71ba1b94((int)(short)(puVar33[3] << 8 | puVar33[3] >> 8));
                uVar15 = FUN_71ba21e8(uVar15,0x38800000);
                puVar24 = puVar33 + 4;
              }
              else {
                uVar43 = 0;
                uVar34 = 0;
                uVar36 = 0x3f800000;
                uVar15 = 0x3f800000;
                puVar24 = puVar33;
              }
            }
            else {
              uVar15 = FUN_71ba1b94((int)(short)(*puVar33 << 8 | *puVar33 >> 8),uVar22);
              uVar36 = FUN_71ba21e8(uVar15,0x38800000);
              uVar15 = FUN_71ba1b94((int)(short)(puVar33[1] << 8 | puVar33[1] >> 8));
              uVar15 = FUN_71ba21e8(uVar15,0x38800000);
              puVar24 = puVar33 + 2;
              uVar43 = 0;
              uVar34 = 0;
            }
          }
          else {
            puVar24 = puVar33 + 1;
            uVar15 = FUN_71ba1b94((int)(short)(*puVar33 << 8 | *puVar33 >> 8),uVar22);
            uVar36 = FUN_71ba21e8(uVar15,0x38800000);
            uVar43 = 0;
            uVar34 = 0;
            uVar15 = uVar36;
          }
          iVar44 = FUN_71635510(param_1,uVar22,&iStack_54);
          uVar16 = FUN_71ba21e8(uVar34,uVar34);
          uVar17 = FUN_71ba21e8(uVar36,uVar36);
          FUN_71ba0b38(uVar17,uVar16);
          uVar16 = imp_sqrtf();
          uVar17 = FUN_71ba21e8(uVar15,uVar15);
          uVar18 = FUN_71ba21e8(uVar43,uVar43);
          FUN_71ba0b38(uVar18,uVar17);
          uVar17 = imp_sqrtf();
          iVar40 = iStack_54;
          if (iVar44 < 1) break;
          psVar14 = (short *)(iStack_54 + 4);
          iVar12 = iVar44;
          do {
            uVar18 = FUN_71ba1b94((int)psVar14[-2]);
            uVar19 = FUN_71ba1b94((int)psVar14[-1]);
            uVar20 = FUN_71ba21e8(uVar15,uVar19);
            uVar21 = FUN_71ba21e8(uVar34,uVar18);
            uVar20 = FUN_71ba0b38(uVar21,uVar20);
            uVar20 = FUN_71ba0b38(uVar30,uVar20);
            FUN_71ba21e8(uVar17,uVar20);
            sVar11 = FUN_71ba17bc();
            psVar14[-1] = sVar11;
            uVar19 = FUN_71ba21e8(uVar43,uVar19);
            uVar18 = FUN_71ba21e8(uVar36,uVar18);
            uVar18 = FUN_71ba0b38(uVar18,uVar19);
            uVar18 = FUN_71ba0b38(uStack_a0,uVar18);
            FUN_71ba21e8(uVar16,uVar18);
            sVar11 = FUN_71ba17bc();
            psVar14[-2] = sVar11;
            uVar18 = FUN_71ba1b94((int)*psVar14);
            uVar19 = FUN_71ba1b94((int)psVar14[1]);
            uVar20 = FUN_71ba21e8(uVar43,uVar19);
            uVar21 = FUN_71ba21e8(uVar36,uVar18);
            uVar20 = FUN_71ba0b38(uVar21,uVar20);
            uVar20 = FUN_71ba0b38(uStack_a0,uVar20);
            FUN_71ba21e8(uVar16,uVar20);
            sVar11 = FUN_71ba17bc();
            *psVar14 = sVar11;
            uVar19 = FUN_71ba21e8(uVar15,uVar19);
            uVar18 = FUN_71ba21e8(uVar34,uVar18);
            uVar18 = FUN_71ba0b38(uVar18,uVar19);
            uVar18 = FUN_71ba0b38(uVar30,uVar18);
            FUN_71ba21e8(uVar17,uVar18);
            sVar11 = FUN_71ba17bc();
            psVar14[1] = sVar11;
            psVar14 = psVar14 + 7;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          iVar12 = iVar44 + iVar31;
          iVar26 = imp_malloc(iVar12 * 0xe);
          if (iVar26 == 0) {
            if (iVar39 != 0) {
              imp_free();
            }
            imp_free(iVar40);
            return 0;
          }
          if (0 < iVar31) {
            imp___aeabi_memcpy(iVar26,iVar39,iVar31 * 0xe);
          }
          imp___aeabi_memcpy(iVar26 + iVar31 * 0xe,iVar40,iVar44 * 0xe);
          if (iVar39 != 0) {
            imp_free(iVar39);
          }
          imp_free(iVar40);
          iVar31 = iVar12;
          iVar39 = iVar26;
          if ((bVar37 & 0x20) == 0) goto LAB_71636040;
        }
        iVar12 = iVar31;
        iVar26 = iVar39;
      } while ((bVar37 & 0x20) != 0);
    }
    goto LAB_71636040;
  }
  puVar33 = puVar24 + uVar13 + 5;
  uVar22 = *puVar33;
  uVar9 = puVar33[-1];
  bVar37 = *(byte *)((int)puVar33 + -1);
  uVar10 = *(undefined1 *)((int)puVar33 + 1);
  uVar28 = (uint)CONCAT11((byte)uVar9,bVar37);
  iVar26 = imp_malloc((uVar28 + uVar13 * 2) * 0xe + 0xe);
  if (iVar26 == 0) {
    return 0;
  }
  iVar12 = (uint)(byte)uVar9 * 0x100 + (uint)bVar37;
  iVar31 = uVar13 * 0x1c + 0xc;
  iVar39 = iVar12 + 1;
  bVar37 = 0;
  bVar35 = 0;
  puVar33 = (ushort *)((int)puVar33 + CONCAT11((char)uVar22,uVar10) + 2);
  do {
    if (bVar35 == 0) {
      bVar35 = 0;
      puVar25 = (ushort *)((int)puVar33 + 1);
      bVar37 = (byte)*puVar33;
      if ((bVar37 & 8) != 0) {
        bVar35 = *(byte *)((int)puVar33 + 1);
        puVar25 = puVar33 + 1;
      }
    }
    else {
      bVar35 = bVar35 - 1;
      puVar25 = puVar33;
    }
    *(byte *)(iVar26 + iVar31) = bVar37;
    iVar31 = iVar31 + 0xe;
    iVar39 = iVar39 + -1;
    puVar33 = puVar25;
  } while (iVar39 != 0);
  iVar31 = iVar26 + uVar13 * 0x1c;
  iVar39 = iVar12 + 1;
  iVar40 = 0;
  pbVar29 = (byte *)(iVar31 + 0xc);
  do {
    bVar37 = *pbVar29;
    if ((bVar37 & 2) == 0) {
      puVar33 = puVar25;
      if ((bVar37 & 0x10) == 0) {
        puVar33 = puVar25 + 1;
        iVar40 = iVar40 + (((uint)*puVar25 << 0x18 | (uint)(*puVar25 >> 8) << 0x10) >> 0x10);
      }
    }
    else {
      uVar13 = (uint)(byte)*puVar25;
      if ((bVar37 & 0x10) == 0) {
        uVar13 = -uVar13;
      }
      iVar40 = uVar13 + iVar40;
      puVar33 = (ushort *)((int)puVar25 + 1);
    }
    iVar39 = iVar39 + -1;
    *(short *)(pbVar29 + -0xc) = (short)iVar40;
    pbVar29 = pbVar29 + 0xe;
    puVar25 = puVar33;
  } while (iVar39 != 0);
  iVar12 = iVar12 + 1;
  iVar39 = 0;
  pbVar29 = (byte *)(iVar31 + 0xc);
  do {
    bVar37 = *pbVar29;
    if ((bVar37 & 4) == 0) {
      puVar25 = puVar33;
      if ((bVar37 & 0x20) == 0) {
        puVar25 = puVar33 + 1;
        iVar39 = iVar39 + (((uint)*puVar33 << 0x18 | (uint)(*puVar33 >> 8) << 0x10) >> 0x10);
      }
    }
    else {
      uVar13 = (uint)(byte)*puVar33;
      if ((bVar37 & 0x20) == 0) {
        uVar13 = -uVar13;
      }
      iVar39 = uVar13 + iVar39;
      puVar25 = (ushort *)((int)puVar33 + 1);
    }
    iVar12 = iVar12 + -1;
    *(short *)(pbVar29 + -10) = (short)iVar39;
    pbVar29 = pbVar29 + 0xe;
    puVar33 = puVar25;
  } while (iVar12 != 0);
  iVar44 = 0;
  iVar39 = 0;
  iVar40 = 0;
  uVar13 = 0;
  bVar8 = false;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_8c = 0;
  uStack_a0 = 0;
  bVar37 = 0;
  iVar12 = 0;
  do {
    psVar14 = (short *)(iVar31 + iVar12 * 0xe);
    sVar11 = *psVar14;
    uVar42 = (uint)sVar11;
    bVar35 = *(byte *)(psVar14 + 6);
    sVar3 = psVar14[1];
    uVar32 = (uint)sVar3;
    sVar4 = (short)uStack_a0;
    sVar38 = (short)uStack_8c;
    if (iVar40 == iVar12) {
      iVar40 = iVar44;
      if (iVar12 != 0) {
        uVar6 = (undefined2)uVar13;
        uVar5 = (undefined2)uStack_98;
        if (bVar37 == 0) {
          puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
          if (bVar8) {
            puVar41[2] = sVar4;
            *puVar41 = uVar5;
            *(undefined1 *)(puVar41 + 6) = 3;
            puVar41[1] = uVar6;
          }
          else {
            puVar41[1] = uVar6;
            sVar38 = 0;
            puVar41[2] = 0;
            *puVar41 = uVar5;
            *(undefined1 *)(puVar41 + 6) = 2;
          }
        }
        else {
          if (bVar8) {
            iVar40 = iVar44 * 0xe;
            iVar44 = iVar44 + 1;
            puVar41 = (undefined2 *)(iVar26 + iVar40);
            *puVar41 = (short)(uStack_ac + uStack_a0 >> 1);
            puVar41[2] = sVar4;
            puVar41[3] = sVar38;
            puVar41[1] = (short)(uStack_a8 + uStack_8c >> 1);
            *(undefined1 *)(puVar41 + 6) = 3;
          }
          sVar38 = (short)uStack_a8;
          puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
          *puVar41 = uVar5;
          puVar41[1] = uVar6;
          puVar41[2] = (short)uStack_ac;
          *(undefined1 *)(puVar41 + 6) = 3;
        }
        iVar40 = iVar44 + 1;
        *(short *)(iVar26 + iVar44 * 0xe + 6) = sVar38;
      }
      uStack_98 = uVar42;
      uVar13 = uVar32;
      if ((bVar35 & 1) == 0) {
        uStack_ac = uVar42;
        uStack_a8 = uVar32;
        if ((*(byte *)(psVar14 + 0xd) & 1) == 0) {
          uStack_98 = (int)((int)psVar14[7] + uVar42) >> 1;
          uVar13 = (int)((int)psVar14[8] + uVar32) >> 1;
        }
        else {
          iVar12 = iVar12 + 1;
          uStack_98 = (uint)(ushort)psVar14[7];
          uVar13 = (uint)(ushort)psVar14[8];
        }
      }
      bVar37 = bVar35 & 1 ^ 1;
      bVar8 = false;
      iVar44 = iVar40 + 1;
      puVar41 = (undefined2 *)(iVar26 + iVar40 * 0xe);
      *puVar41 = (short)uStack_98;
      bVar7 = true;
      *(undefined4 *)(puVar41 + 2) = 0;
      puVar41[1] = (short)uVar13;
      *(undefined1 *)(puVar41 + 6) = 1;
      iVar40 = iVar39 + 5;
      iVar39 = iVar39 + 1;
      iVar40 = (((uint)puVar24[iVar40] << 0x18 | (uint)(puVar24[iVar40] >> 8) << 0x10) >> 0x10) + 1;
    }
    else if ((bVar35 & 1) == 0) {
      bVar7 = false;
      if (bVar8) {
        iVar2 = iVar44 * 0xe;
        iVar44 = iVar44 + 1;
        puVar41 = (undefined2 *)(iVar26 + iVar2);
        *puVar41 = (short)(uStack_a0 + uVar42 >> 1);
        puVar41[2] = sVar4;
        puVar41[3] = sVar38;
        *(undefined1 *)(puVar41 + 6) = 3;
        puVar41[1] = (short)(uStack_8c + uVar32 >> 1);
      }
      bVar8 = true;
      uStack_a0 = uVar42;
      uStack_8c = uVar32;
    }
    else {
      psVar14 = (short *)(iVar26 + iVar44 * 0xe);
      if (bVar8) {
        psVar14[2] = sVar4;
        psVar14[1] = sVar3;
        *psVar14 = sVar11;
        *(undefined1 *)(psVar14 + 6) = 3;
      }
      else {
        sVar38 = 0;
        psVar14[2] = 0;
        psVar14[1] = sVar3;
        *psVar14 = sVar11;
        *(undefined1 *)(psVar14 + 6) = 2;
      }
      iVar44 = iVar44 + 1;
      psVar14[3] = sVar38;
      bVar8 = false;
      bVar7 = true;
    }
    bVar1 = iVar12 < (int)uVar28;
    iVar12 = iVar12 + 1;
  } while (bVar1);
  uVar6 = (undefined2)uVar13;
  uVar5 = (undefined2)uStack_98;
  uVar23 = (undefined2)uStack_8c;
  if (bVar37 == 0) {
    puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
    if (bVar7) {
      uVar23 = 0;
      uVar10 = 2;
      puVar41[2] = 0;
      puVar41[1] = uVar6;
      *puVar41 = uVar5;
      goto LAB_7163602c;
    }
    puVar41[2] = (short)uStack_a0;
    puVar41[1] = uVar6;
    *puVar41 = uVar5;
    *(undefined1 *)(puVar41 + 6) = 3;
  }
  else {
    if (!bVar7) {
      iVar12 = iVar44 * 0xe;
      iVar44 = iVar44 + 1;
      puVar41 = (undefined2 *)(iVar26 + iVar12);
      *puVar41 = (short)(uStack_ac + uStack_a0 >> 1);
      puVar41[2] = (short)uStack_a0;
      puVar41[3] = uVar23;
      puVar41[1] = (short)(uStack_a8 + uStack_8c >> 1);
      *(undefined1 *)(puVar41 + 6) = 3;
    }
    uVar23 = (undefined2)uStack_a8;
    puVar41 = (undefined2 *)(iVar26 + iVar44 * 0xe);
    *puVar41 = uVar5;
    uVar10 = 3;
    puVar41[2] = (short)uStack_ac;
    puVar41[1] = uVar6;
LAB_7163602c:
    *(undefined1 *)(puVar41 + 6) = uVar10;
  }
  *(undefined2 *)(iVar26 + iVar44 * 0xe + 6) = uVar23;
  iVar12 = iVar44 + 1;
LAB_71636040:
  *param_3 = iVar26;
  return iVar12;
}


// =========================================================================
// Function: FUN_71636818
// Entry: 0x71636818 | Size: 576 bytes
// =========================================================================

void FUN_71636818(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_10 < 0x11) {
    uStack_30 = param_6;
    uVar1 = FUN_71ba0b38(param_6,param_6);
    uVar1 = FUN_71ba0b38(uVar1,param_4);
    uStack_34 = param_5;
    uVar2 = FUN_71ba0b38(param_5,param_5);
    uVar2 = FUN_71ba0b38(uVar2,param_3);
    iStack_38 = param_10 + 1;
    uStack_2c = param_3;
    uStack_28 = param_4;
    do {
      uVar1 = FUN_71ba0b38(uVar1,param_8);
      uVar2 = FUN_71ba0b38(uVar2,param_7);
      uVar3 = FUN_71ba21e8(uVar2,0x3e800000);
      uVar4 = FUN_71ba21e8(uVar1,0x3e800000);
      uVar1 = FUN_71ba0b38(uStack_28,param_8);
      uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
      uVar1 = FUN_71ba240c(uVar1,uVar4);
      uVar2 = FUN_71ba0b38(uStack_2c,param_7);
      uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
      uVar2 = FUN_71ba240c(uVar2,uVar3);
      uVar1 = FUN_71ba21e8(uVar1,uVar1);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      uVar1 = FUN_71ba0b38(uVar2,uVar1);
      iVar5 = FUN_71ba2d70(uVar1,param_9);
      if (iVar5 == 0) {
        if (param_1 != 0) {
          puVar6 = (undefined4 *)(param_1 + *param_2 * 8);
          *puVar6 = param_7;
          puVar6[1] = param_8;
        }
        *param_2 = *param_2 + 1;
        return;
      }
      uVar1 = FUN_71ba0b38(uStack_2c,uStack_34);
      uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
      uVar2 = FUN_71ba0b38(uStack_28,uStack_30);
      uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
      FUN_71636818(param_1,param_2,uStack_2c,uStack_28,uVar1,uVar2,uVar3,uVar4,param_9,iStack_38);
      uVar1 = FUN_71ba0b38(uStack_34,param_7);
      uStack_34 = FUN_71ba21e8(uVar1,0x3f000000);
      uVar1 = FUN_71ba0b38(uStack_34,uStack_34);
      uVar2 = FUN_71ba0b38(uVar1,uVar3);
      uVar1 = FUN_71ba0b38(uStack_30,param_8);
      uStack_30 = FUN_71ba21e8(uVar1,0x3f000000);
      uVar1 = FUN_71ba0b38(uStack_30,uStack_30);
      uVar1 = FUN_71ba0b38(uVar1,uVar4);
      iStack_38 = iStack_38 + 1;
      uStack_2c = uVar3;
      uStack_28 = uVar4;
    } while (iStack_38 != 0x12);
  }
  return;
}


// =========================================================================
// Function: FUN_71636dd4
// Entry: 0x71636dd4 | Size: 916 bytes
// =========================================================================

void FUN_71636dd4(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,int param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_12 < 0x11) {
    param_12 = param_12 + 1;
    uStack_2c = param_8;
    uStack_28 = param_7;
    uStack_30 = param_5;
    do {
      uVar1 = FUN_71ba240c(uStack_28,uStack_30);
      uVar2 = FUN_71ba240c(uStack_2c,param_6);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      uVar1 = FUN_71ba21e8(uVar1,uVar1);
      FUN_71ba0b38(uVar1,uVar2);
      uVar1 = imp_sqrtf();
      uVar2 = FUN_71ba240c(uStack_30,param_3);
      uVar3 = FUN_71ba240c(param_6,param_4);
      uVar3 = FUN_71ba21e8(uVar3,uVar3);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      FUN_71ba0b38(uVar2,uVar3);
      uVar2 = imp_sqrtf();
      uVar1 = FUN_71ba0b38(uVar2,uVar1);
      uVar2 = FUN_71ba240c(param_9,uStack_28);
      uVar3 = FUN_71ba240c(param_10,uStack_2c);
      uVar3 = FUN_71ba21e8(uVar3,uVar3);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      FUN_71ba0b38(uVar2,uVar3);
      uVar2 = imp_sqrtf();
      uVar1 = FUN_71ba0b38(uVar2,uVar1);
      uVar1 = FUN_71ba21e8(uVar1,uVar1);
      uVar2 = FUN_71ba240c(param_9);
      uVar3 = FUN_71ba240c(param_10,param_4);
      uVar3 = FUN_71ba21e8(uVar3,uVar3);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      FUN_71ba0b38(uVar2,uVar3);
      uVar2 = imp_sqrtf();
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      uVar1 = FUN_71ba240c(uVar1,uVar2);
      iVar4 = FUN_71ba2d70(uVar1,param_11);
      if (iVar4 == 0) {
        if (param_1 != 0) {
          puVar8 = (undefined4 *)(param_1 + *param_2 * 8);
          *puVar8 = param_9;
          puVar8[1] = param_10;
        }
        *param_2 = *param_2 + 1;
        return;
      }
      uVar1 = FUN_71ba0b38(param_3,uStack_30);
      uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
      uVar2 = FUN_71ba0b38(uStack_30,uStack_28);
      uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
      uVar3 = FUN_71ba0b38(uStack_28,param_9);
      uStack_28 = FUN_71ba21e8(uVar3,0x3f000000);
      uVar3 = FUN_71ba0b38(uVar1,uVar2);
      uVar3 = FUN_71ba21e8(uVar3,0x3f000000);
      uVar2 = FUN_71ba0b38(uVar2,uStack_28);
      uStack_30 = FUN_71ba21e8(uVar2,0x3f000000);
      uVar2 = FUN_71ba0b38(uVar3);
      uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
      uVar5 = FUN_71ba0b38(param_4,param_6);
      uVar5 = FUN_71ba21e8(uVar5,0x3f000000);
      uVar6 = FUN_71ba0b38(param_6,uStack_2c);
      uVar6 = FUN_71ba21e8(uVar6,0x3f000000);
      uVar7 = FUN_71ba0b38(uStack_2c,param_10);
      uStack_2c = FUN_71ba21e8(uVar7,0x3f000000);
      uVar7 = FUN_71ba0b38(uVar5,uVar6);
      uVar7 = FUN_71ba21e8(uVar7,0x3f000000);
      uVar6 = FUN_71ba0b38(uVar6,uStack_2c);
      param_6 = FUN_71ba21e8(uVar6,0x3f000000);
      uVar6 = FUN_71ba0b38(uVar7,param_6);
      uVar6 = FUN_71ba21e8(uVar6,0x3f000000);
      FUN_71636dd4(param_1,param_2,param_3,param_4,uVar1,uVar5,uVar3,uVar7,uVar2,uVar6,param_11,
                   param_12);
      param_12 = param_12 + 1;
      param_3 = uVar2;
      param_4 = uVar6;
    } while (param_12 != 0x12);
  }
  return;
}


// =========================================================================
// Function: FUN_71637784
// Entry: 0x71637784 | Size: 528 bytes
// =========================================================================

void FUN_71637784(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((int)param_2 < 0xd) {
    return;
  }
  do {
    while( true ) {
      uVar18 = param_2 - 1;
      puVar5 = param_1 + 1;
      uVar16 = *puVar5;
      uVar13 = puVar5[uVar18 * 5];
      puVar19 = param_1 + (param_2 >> 1) * 5;
      uVar8 = puVar19[1];
      iVar1 = FUN_71ba2d10(uVar8,uVar13);
      iVar2 = FUN_71ba2d10(uVar16,uVar8);
      if ((iVar2 == 0) == (iVar1 != 0)) {
        iVar2 = FUN_71ba2d10(uVar16,uVar13);
        uVar3 = uVar18;
        if ((iVar2 == 0) != (iVar1 != 0)) {
          uVar3 = 0;
        }
        puVar12 = param_1 + uVar3 * 5;
        uVar8 = *puVar12;
        uVar13 = puVar12[1];
        uVar6 = puVar12[2];
        uVar9 = puVar12[3];
        uVar14 = puVar12[4];
        uVar16 = puVar19[1];
        uVar7 = puVar19[2];
        uVar10 = puVar19[3];
        uVar15 = puVar19[4];
        *puVar12 = *puVar19;
        puVar12[1] = uVar16;
        puVar12[2] = uVar7;
        puVar12[3] = uVar10;
        puVar12[4] = uVar15;
        *puVar19 = uVar8;
        puVar19[1] = uVar13;
        puVar19[2] = uVar6;
        puVar19[3] = uVar9;
        puVar19[4] = uVar14;
      }
      uStack_38 = *param_1;
      uStack_34 = param_1[1];
      uStack_30 = param_1[2];
      uStack_2c = param_1[3];
      uStack_28 = param_1[4];
      iVar1 = 1;
      uVar8 = puVar19[1];
      uVar13 = puVar19[2];
      uVar16 = puVar19[3];
      uVar6 = puVar19[4];
      *param_1 = *puVar19;
      param_1[1] = uVar8;
      param_1[2] = uVar13;
      param_1[3] = uVar16;
      param_1[4] = uVar6;
      while( true ) {
        *puVar19 = uStack_38;
        puVar19[1] = uStack_34;
        puVar19[2] = uStack_30;
        puVar19[3] = uStack_2c;
        puVar19[4] = uStack_28;
        iVar11 = iVar1 * 0x14 + 4;
        iVar2 = iVar1 * -0x14 + 0x14;
        uVar8 = *puVar5;
        do {
          iVar17 = iVar1;
          iVar4 = FUN_71ba2d10(*(undefined4 *)((int)param_1 + iVar11),uVar8);
          iVar11 = iVar11 + 0x14;
          iVar2 = iVar2 + -0x14;
          iVar1 = iVar17 + 1;
        } while (iVar4 != 0);
        puVar12 = (undefined4 *)((int)param_1 - iVar2);
        puVar19 = param_1 + uVar18 * 5 + 5;
        do {
          puVar20 = puVar19;
          uVar3 = uVar18;
          iVar2 = FUN_71ba2d10(uVar8,puVar20[-4]);
          puVar19 = puVar20 + -5;
          uVar18 = uVar3 - 1;
        } while (iVar2 != 0);
        if ((int)uVar3 <= iVar17) break;
        uStack_38 = *puVar12;
        uStack_34 = puVar12[1];
        uStack_30 = puVar12[2];
        uStack_2c = puVar12[3];
        uStack_28 = puVar12[4];
        uVar8 = puVar20[-4];
        uVar13 = puVar20[-3];
        uVar16 = puVar20[-2];
        uVar6 = puVar20[-1];
        *puVar12 = *puVar19;
        puVar12[1] = uVar8;
        puVar12[2] = uVar13;
        puVar12[3] = uVar16;
        puVar12[4] = uVar6;
      }
      param_2 = (param_2 - iVar1) + 1;
      if ((int)uVar3 < (int)param_2) break;
      FUN_71637784(puVar12,param_2);
      param_2 = uVar3;
      if ((int)uVar3 < 0xd) {
        return;
      }
    }
    FUN_71637784(param_1,uVar3);
    param_1 = puVar12;
  } while (0xc < (int)param_2);
  return;
}


// =========================================================================
// Function: FUN_71637a70
// Entry: 0x71637a70 | Size: 588 bytes
// =========================================================================

void FUN_71637a70(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_2c;
  
  iVar1 = FUN_71ba2cf0(param_5,param_7);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_3 + 0x18);
    iVar1 = FUN_71ba2d10(uVar4,param_5);
    if (iVar1 == 0) {
      uStack_2c = *(undefined4 *)(param_3 + 0x14);
      iVar1 = FUN_71ba2d70(uStack_2c,param_7);
      if (iVar1 == 0) {
        iVar1 = FUN_71ba2d70(uStack_2c,param_5);
        if (iVar1 == 0) {
          uStack_2c = param_5;
        }
        else {
          uVar2 = FUN_71ba240c(param_6,param_4);
          uVar3 = FUN_71ba240c(uStack_2c,param_5);
          uVar2 = FUN_71ba21e8(uVar2,uVar3);
          uVar3 = FUN_71ba240c(param_7,param_5);
          uVar2 = FUN_71ba13e0(uVar2,uVar3);
          param_4 = FUN_71ba0b38(uVar2,param_4);
        }
        iVar1 = FUN_71ba2d10(uVar4,param_7);
        if (iVar1 != 0) {
          uVar2 = FUN_71ba240c(param_6,param_4);
          uVar3 = FUN_71ba240c(uVar4,param_7);
          uVar2 = FUN_71ba21e8(uVar3,uVar2);
          uVar3 = FUN_71ba240c(param_7,uStack_2c);
          uVar2 = FUN_71ba13e0(uVar2,uVar3);
          param_6 = FUN_71ba0b38(uVar2,param_6);
          param_7 = uVar4;
        }
        uVar4 = FUN_71ba1b94(param_2);
        iVar1 = FUN_71ba2d30(param_4,uVar4);
        if ((iVar1 == 0) || (iVar1 = FUN_71ba2d30(param_6,uVar4), iVar1 == 0)) {
          uVar2 = FUN_71ba1b94(param_2 + 1);
          iVar1 = FUN_71ba2d50(param_4,uVar2);
          if ((iVar1 != 0) && (iVar1 = FUN_71ba2d50(param_6,uVar2), iVar1 != 0)) {
            return;
          }
          uVar2 = FUN_71ba240c(param_7,uStack_2c);
          uVar3 = FUN_71ba21e8(uVar2,*(undefined4 *)(param_3 + 0x10));
          uVar2 = FUN_71ba240c(param_4,uVar4);
          uVar4 = FUN_71ba240c(param_6,uVar4);
          uVar4 = FUN_71ba0b38(uVar2,uVar4);
          uVar4 = FUN_71ba21e8(uVar4,0xbf000000);
          uVar4 = FUN_71ba0b38(uVar4,0x3f800000);
        }
        else {
          uVar4 = FUN_71ba240c(param_7,uStack_2c);
          uVar3 = *(undefined4 *)(param_3 + 0x10);
        }
        uVar4 = FUN_71ba21e8(uVar3,uVar4);
        uVar4 = FUN_71ba0b38(uVar4,*(undefined4 *)(param_1 + param_2 * 4));
        *(undefined4 *)(param_1 + param_2 * 4) = uVar4;
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71638070
// Entry: 0x71638070 | Size: 84 bytes
// =========================================================================

undefined1 FUN_71638070(void)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (*DAT_70b42044 != '\0') {
    return 1;
  }
  if (*DAT_70b42048 != '\0') {
    return 1;
  }
  if (*(char *)(DAT_70c38ed8 + 0x6d) == '\0') {
    uVar1 = *(undefined1 *)(DAT_70c38ed8 + 0x6c);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7163813c
// Entry: 0x7163813c | Size: 112 bytes
// =========================================================================

void FUN_7163813c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_70ffc974 + 4);
  uVar1 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 8));
  uVar1 = FUN_71ba21e8(uVar1,0x41000000);
  DAT_711b2f8c = FUN_71ba13e0(uVar1,0x43e00000);
  uVar1 = FUN_71ba1b94(uVar2);
  uVar1 = FUN_71ba21e8(uVar1,0x3ecccccd);
  DAT_711b2f90 = FUN_71ba13e0(uVar1,0x44200000);
  return;
}


// =========================================================================
// Function: FUN_716382cc
// Entry: 0x716382cc | Size: 2016 bytes
// =========================================================================

void FUN_716382cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined1 *param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  ushort *puVar22;
  bool bVar23;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [6];
  short sStack_26;
  
  iVar5 = FUN_713c301c(0);
  piVar16 = (int *)(DAT_711a3938 + 0x1389c);
  iVar6 = *piVar16;
  if (iVar6 == 0) {
    iVar6 = FUN_713c301c(0);
    if (iVar6 == 0) {
      iVar6 = *piVar16;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar6 = FUN_715ba834();
      *piVar16 = iVar6;
    }
  }
  iVar6 = thunk_FUN_715bf66c(iVar6);
  if (iVar5 != 0 && iVar6 != 0) {
    uVar7 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 8));
    DAT_711b2f94 = FUN_71ba21e8(uVar7,0x3b124925);
    iVar3 = DAT_70c38ed8;
    iVar6 = DAT_70b3eda4;
    sStack_26 = 0;
    if (*DAT_70b42044 == '\0') {
      cVar4 = '\x01';
      cVar1 = *DAT_70b42048;
      bVar23 = cVar1 == '\0';
      if (bVar23) {
        cVar1 = *(char *)(DAT_70c38ed8 + 0x6d);
      }
      if (bVar23 && cVar1 == '\0') {
        cVar4 = *(char *)(DAT_70c38ed8 + 0x6c);
      }
    }
    else {
      cVar4 = '\x01';
    }
    puVar14 = (undefined4 *)(iVar5 + 4);
    puVar19 = puVar14;
    if (*(int *)(iVar5 + 0x14) != 0) {
      puVar19 = (undefined4 *)(*(int *)(iVar5 + 0x14) + 0x30);
    }
    cVar1 = *(char *)(DAT_70c38ed8 + 0x6d);
    bVar23 = cVar1 == '\0';
    if (bVar23) {
      cVar1 = *(char *)(DAT_70c38ed8 + 0x6c);
    }
    if (bVar23 && cVar1 == '\0') {
      uVar7 = 200;
    }
    else {
      uVar7 = 2000;
    }
    puVar20 = auStack_2c;
    if (param_6 != (undefined1 *)0x0) {
      puVar20 = param_6;
    }
    FUN_713478ec(DAT_70b3eda4,0,*puVar19,puVar19[1],puVar19[2],0xffffffff,param_1,param_2,param_3,
                 &DAT_711ad1c8,&sStack_26,uVar7,puVar20,0x49742400,0,0x49742400,1,0xffffffff,0,0);
    if (0 < sStack_26) {
      if (cVar4 == '\0' && param_5 == 1) {
        if (*(int *)(iVar5 + 0x14) != 0) {
          puVar14 = (undefined4 *)(*(int *)(iVar5 + 0x14) + 0x30);
        }
        uVar21 = puVar14[1];
        uVar7 = FUN_71ba240c(*puVar14,param_1);
        uVar21 = FUN_71ba240c(uVar21,param_2);
        uVar21 = FUN_71ba21e8(uVar21,uVar21);
        uVar7 = FUN_71ba21e8(uVar7,uVar7);
        FUN_71ba0b38(uVar7,uVar21);
        uVar7 = imp_sqrtf();
        iVar5 = FUN_71ba2d10(uVar7,0x42480000);
        if (iVar5 != 0) {
          FUN_7145b75c(DAT_711b2f88);
          DAT_711b2f88 = 0;
          *(undefined4 *)(iVar3 + 0x48) = 0;
          return;
        }
      }
      puVar22 = &DAT_711ad1ca;
      iVar5 = 0;
      puVar19 = &DAT_711af108;
      do {
        uVar2 = *puVar22;
        iVar17 = *(int *)(iVar6 + 0x804 + (uint)puVar22[-1] * 4);
        FUN_7136cdfc(&uStack_38);
        iVar17 = iVar17 + (uint)uVar2 * 0x1c;
        uVar7 = FUN_71ba1b94((int)*(short *)(iVar17 + 10));
        uVar7 = FUN_71ba21e8(uVar7,0x3e000000);
        uStack_34 = uVar7;
        uVar21 = FUN_71ba1b94((int)*(short *)(iVar17 + 0xc));
        uStack_30 = FUN_71ba21e8(uVar21,0x3e000000);
        uVar21 = FUN_71ba1b94((int)*(short *)(iVar17 + 8));
        uStack_40 = FUN_71ba21e8(uVar21,0x3e000000);
        uStack_38 = uStack_40;
        uStack_3c = uVar7;
        FUN_7145bb7c(&uStack_40,&uStack_40);
        if (cVar4 == '\0') {
          FUN_7145bfac(puVar19,&uStack_40);
        }
        else {
          FUN_7145c3dc(&uStack_40);
          FUN_7145bfac(puVar19,&uStack_40);
          uVar7 = DAT_711b2f94;
          uVar21 = FUN_71ba21e8(DAT_711b2f94,*puVar19);
          *puVar19 = uVar21;
          uVar7 = FUN_71ba21e8(uVar7,puVar19[1]);
          puVar19[1] = uVar7;
        }
        iVar5 = iVar5 + 1;
        puVar22 = puVar22 + 2;
        puVar19 = puVar19 + 2;
      } while (iVar5 < sStack_26);
      iVar5 = FUN_7156ace4();
      if (cVar4 != '\0' || iVar5 != 0) {
        if (cVar4 == '\0') {
          thunk_FUN_713f5aa4(&DAT_711b2fa8);
        }
        FUN_71413b60(1,0);
        puVar14 = DAT_70b3eee8;
        puVar19 = DAT_70b3eee4;
        uVar7 = DAT_700c7468;
        sStack_26 = sStack_26 + -1;
        iVar5 = (int)sStack_26;
        if (0 < iVar5) {
          puVar15 = &DAT_711af114;
          uVar21 = DAT_711af108;
          iVar6 = 0;
          uVar9 = DAT_711af10c;
          do {
            uVar10 = puVar15[-1];
            uVar18 = *puVar15;
            uVar11 = FUN_71ba240c(uVar10,uVar21);
            uVar12 = FUN_71ba240c(uVar18,uVar9);
            uVar11 = imp_atan2f(uVar12,uVar11);
            if (cVar4 == '\0') {
              uVar12 = FUN_71ba0b38(uVar11,0xbfc90fda);
              uVar13 = imp_cosf();
              uStack_58 = FUN_71ba21e8(uVar13,uVar7);
              uVar12 = imp_sinf(uVar12);
              uStack_54 = FUN_71ba21e8(uVar12,uVar7);
              uVar11 = FUN_71ba0b38(uVar11,0x3fc90fda);
              uVar12 = imp_cosf();
              uStack_5c = FUN_71ba21e8(uVar12,uVar7);
              uVar11 = imp_sinf(uVar11);
              uVar12 = uVar7;
            }
            else {
              uVar13 = FUN_71ba0b38(*(undefined4 *)(iVar3 + 0x58),0xc30c0000);
              iVar17 = FUN_71ba2d10(uVar13,0x430c0000);
              uVar12 = 0x430c0000;
              if ((iVar17 == 0) &&
                 (iVar17 = FUN_71ba2d70(uVar13,0x44700000), uVar12 = uVar13, iVar17 != 0)) {
                uVar12 = 0x44700000;
              }
              uVar12 = FUN_71ba13e0(uVar12,0x44700000);
              uVar12 = FUN_71ba0b38(uVar12,0x3ecccccd);
              uVar13 = FUN_71ba0b38(uVar11,0xbfc90fda);
              uVar8 = imp_cosf();
              uVar8 = FUN_71ba21e8(uVar8,uVar7);
              uStack_58 = FUN_71ba21e8(uVar8,uVar12);
              uVar13 = imp_sinf(uVar13);
              uVar13 = FUN_71ba21e8(uVar13,uVar7);
              uStack_54 = FUN_71ba21e8(uVar13,uVar12);
              uVar11 = FUN_71ba0b38(uVar11,0x3fc90fda);
              uVar13 = imp_cosf();
              uVar13 = FUN_71ba21e8(uVar13,uVar7);
              uStack_5c = FUN_71ba21e8(uVar13,uVar12);
              uVar11 = imp_sinf(uVar11);
              uVar11 = FUN_71ba21e8(uVar11,uVar7);
            }
            uVar11 = FUN_71ba21e8(uVar11,uVar12);
            uVar12 = FUN_71ba0b38(uVar21,uStack_58);
            uVar13 = FUN_71ba0b38(uVar9,uStack_54);
            *(undefined4 *)((int)&DAT_711b2fb8 + iVar6) = uVar12;
            *(undefined4 *)((int)&DAT_711b2fbc + iVar6) = uVar13;
            uVar12 = FUN_71ba0b38(*puVar19,0x38d1b717);
            *(undefined4 *)((int)&DAT_711b2fc0 + iVar6) = uVar12;
            uVar12 = FUN_71ba0b38(uVar18,uStack_54);
            uVar13 = *puVar14;
            *(undefined4 *)((int)&DAT_711b2fd8 + iVar6) = uVar12;
            uVar12 = FUN_71ba0b38(uVar10,uStack_58);
            *(undefined4 *)((int)&DAT_711b2fc4 + iVar6) = uVar13;
            *(undefined4 *)((int)&DAT_711b2fd4 + iVar6) = uVar12;
            *(undefined4 *)((int)&DAT_711b2fc8 + iVar6) = param_4;
            uVar12 = FUN_71ba0b38(*puVar19,0x38d1b717);
            *(undefined4 *)((int)&DAT_711b2fdc + iVar6) = uVar12;
            uVar9 = FUN_71ba0b38(uVar9,uVar11);
            uVar12 = *puVar14;
            *(undefined4 *)((int)&DAT_711b2ff4 + iVar6) = uVar9;
            uVar21 = FUN_71ba0b38(uVar21,uStack_5c);
            *(undefined4 *)((int)&DAT_711b2fe0 + iVar6) = uVar12;
            *(undefined4 *)((int)&DAT_711b2ff0 + iVar6) = uVar21;
            *(undefined4 *)((int)&DAT_711b2fe4 + iVar6) = param_4;
            uVar21 = FUN_71ba0b38(*puVar19,0x38d1b717);
            *(undefined4 *)((int)&DAT_711b2ff8 + iVar6) = uVar21;
            uVar21 = FUN_71ba0b38(uVar18,uVar11);
            uVar9 = *puVar14;
            *(undefined4 *)((int)&DAT_711b3010 + iVar6) = uVar21;
            uVar21 = FUN_71ba0b38(uVar10,uStack_5c);
            *(undefined4 *)((int)&DAT_711b2ffc + iVar6) = uVar9;
            *(undefined4 *)((int)&DAT_711b300c + iVar6) = uVar21;
            *(undefined4 *)((int)&DAT_711b3000 + iVar6) = param_4;
            uVar21 = FUN_71ba0b38(*puVar19,0x38d1b717);
            *(undefined4 *)((int)&DAT_711b3014 + iVar6) = uVar21;
            *(undefined4 *)((int)&DAT_711b3018 + iVar6) = *puVar14;
            iVar17 = iVar6 + 0x70;
            puVar15 = puVar15 + 2;
            *(undefined4 *)((int)&DAT_711b301c + iVar6) = param_4;
            uVar21 = uVar10;
            iVar6 = iVar17;
            uVar9 = uVar18;
          } while (iVar5 * 0x70 != iVar17);
        }
        FUN_71413f98(4,&DAT_711b2fb8,iVar5 << 2);
        if (cVar4 == '\0') {
          thunk_FUN_713f5aa4(&DAT_711b2f98);
          return;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71639ce0
// Entry: 0x71639ce0 | Size: 24 bytes
// =========================================================================

void FUN_71639ce0(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint uVar19;
  int unaff_r9;
  bool bVar20;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (DAT_711f6d58 != (int *)0x0) {
    piVar8 = DAT_711f6d58;
    if (DAT_711a3938 != 0) {
      piVar8 = (int *)DAT_711f6d58[0x2b];
    }
    if (DAT_711a3938 != 0 && piVar8 != (int *)0x0) {
      iVar9 = piVar8[0x7db];
      if (iVar9 != 0) {
        unaff_r9 = *(int *)(iVar9 + 0x130);
      }
      if (iVar9 != 0 && unaff_r9 != 0) {
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7480);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7470);
          *(undefined1 *)(puVar13 + 3) = 1;
          *puVar13 = 0x804bd035;
          puVar13[1] = 0xb902bdc0;
          puVar13[2] = 0xdf4bc031;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163efb4,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7480);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7470);
        if (pbVar11[0xc] != 0) {
          *pbVar11 = *pbVar11 ^ 0x5d;
          pbVar11[1] = pbVar11[1] ^ 0xa5;
          pbVar11[2] = pbVar11[2] ^ 0x2f;
          pbVar11[3] = pbVar11[3] ^ 0xdf;
          pbVar11[0xc] = 0;
          pbVar11[4] = pbVar11[4] ^ 0xa5;
          pbVar11[5] = pbVar11[5] ^ 0xd3;
          pbVar11[6] = pbVar11[6] ^ 99;
          pbVar11[7] = pbVar11[7] ^ 0xdb;
          pbVar11[8] = pbVar11[8] ^ 0x5d;
          pbVar11[9] = pbVar11[9] ^ 0xa5;
          pbVar11[10] = pbVar11[10] ^ 0x2f;
          pbVar11[0xb] = pbVar11[0xb] ^ 0xdf;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          uVar19 = (uint)&uStack_30 | 1;
          if (uVar12 != 0) goto LAB_71639fd0;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_71639fd0:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = FUN_7156ae68();
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74a0);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7490);
          *(undefined1 *)(puVar13 + 4) = 1;
          *puVar13 = 0xf09643ac;
          puVar13[1] = 0x9f1c4d83;
          puVar13[2] = 0xfb944ca6;
          puVar13[3] = 0xf126548c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71623d9c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74a0);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7490);
        if (pbVar11[0x10] != 0) {
          *pbVar11 = *pbVar11 ^ 0xcf;
          pbVar11[1] = pbVar11[1] ^ 0x2f;
          pbVar11[2] = ~pbVar11[2];
          pbVar11[3] = pbVar11[3] ^ 0x95;
          pbVar11[0x10] = 0;
          pbVar11[4] = pbVar11[4] ^ 0xed;
          pbVar11[5] = pbVar11[5] ^ 0x39;
          pbVar11[6] = pbVar11[6] ^ 0x43;
          pbVar11[7] = pbVar11[7] ^ 0xf1;
          pbVar11[8] = pbVar11[8] ^ 0xcf;
          pbVar11[9] = pbVar11[9] ^ 0x2f;
          pbVar11[10] = ~pbVar11[10];
          pbVar11[0xb] = pbVar11[0xb] ^ 0x95;
          pbVar11[0xc] = pbVar11[0xc] ^ 0xed;
          pbVar11[0xd] = pbVar11[0xd] ^ 0x39;
          pbVar11[0xe] = pbVar11[0xe] ^ 0x43;
          pbVar11[0xf] = pbVar11[0xf] ^ 0xf1;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a160;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163a160:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        iVar9 = DAT_711f6d58[0x2b];
        uVar12 = imp_strlen(iVar9 + 0x1f70);
        if (0xfffffff7 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_3c);
        }
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_3c | 1;
          uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a1e0;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_3c = (uVar12 | 7) + 2;
          uStack_38 = uVar12;
          uStack_34 = uVar19;
LAB_7163a1e0:
          imp___aeabi_memmove(uVar19,iVar9 + 0x1f70,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        FUN_717c6b64(&uStack_30,&uStack_3c);
        if ((uStack_3c & 1) != 0) {
          thunk_qNQrlu(uStack_34);
        }
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74c0);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74b0);
          *puVar13 = 0x10f0890e;
          puVar13[1] = 0x7258b9e1;
          *(undefined1 *)((int)puVar13 + 10) = 1;
          *(undefined2 *)(puVar13 + 2) = 0xe509;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163efe0,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74c0);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74b0);
        if (pbVar11[10] != 0) {
          *pbVar11 = *pbVar11 ^ 0x6d;
          pbVar11[1] = pbVar11[1] ^ 0xe5;
          pbVar11[2] = pbVar11[2] ^ 0x99;
          pbVar11[3] = pbVar11[3] ^ 0x75;
          pbVar11[10] = 0;
          pbVar11[4] = pbVar11[4] ^ 0x8f;
          pbVar11[5] = pbVar11[5] ^ 0xcd;
          pbVar11[6] = pbVar11[6] ^ 7;
          pbVar11[7] = pbVar11[7] ^ 0x1b;
          pbVar11[8] = pbVar11[8] ^ 0x6d;
          pbVar11[9] = pbVar11[9] ^ 0xe5;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a338;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163a338:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        FUN_717c623c(&uStack_30,*(undefined2 *)(DAT_711f6d58[0x2b] + 0x1f68));
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74e0);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74d0);
          *puVar13 = 0x74365938;
          puVar13[1] = 0x592a03b5;
          puVar13[2] = 0x653e5029;
          *(undefined1 *)((int)puVar13 + 0xe) = 1;
          *(undefined2 *)(puVar13 + 3) = 0x77b3;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f00c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74e0);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74d0);
        if (pbVar11[0xe] != 0) {
          *pbVar11 = *pbVar11 ^ 0x5b;
          pbVar11[1] = pbVar11[1] ^ 0x35;
          pbVar11[2] = pbVar11[2] ^ 0x5f;
          pbVar11[3] = pbVar11[3] ^ 0x11;
          pbVar11[0xe] = 0;
          pbVar11[4] = pbVar11[4] ^ 0xdb;
          pbVar11[5] = pbVar11[5] ^ 0x77;
          pbVar11[6] = pbVar11[6] ^ 0x75;
          pbVar11[7] = pbVar11[7] ^ 0x3b;
          pbVar11[8] = pbVar11[8] ^ 0x5b;
          pbVar11[9] = pbVar11[9] ^ 0x35;
          pbVar11[10] = pbVar11[10] ^ 0x5f;
          pbVar11[0xb] = pbVar11[0xb] ^ 0x11;
          pbVar11[0xc] = pbVar11[0xc] ^ 0xdb;
          pbVar11[0xd] = pbVar11[0xd] ^ 0x77;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a4b8;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163a4b8:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        thunk_FUN_715c41fc(unaff_r9);
        uVar15 = FUN_71ba17bc();
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7500);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74f0);
          *puVar13 = 0x68024922;
          puVar13[1] = 0xda26357f;
          puVar13[2] = 0x681f4b20;
          *(undefined1 *)((int)puVar13 + 0xe) = 1;
          *(undefined2 *)(puVar13 + 3) = 0x4175;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd32c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7500);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c74f0);
        if (pbVar11[0xe] != 0) {
          *pbVar11 = *pbVar11 ^ 0x41;
          pbVar11[1] = pbVar11[1] ^ 0x25;
          pbVar11[2] = pbVar11[2] ^ 0x6b;
          pbVar11[3] = pbVar11[3] ^ 0xd;
          pbVar11[0xe] = 0;
          pbVar11[4] = pbVar11[4] ^ 0x11;
          pbVar11[5] = pbVar11[5] ^ 0x41;
          pbVar11[6] = pbVar11[6] ^ 0x79;
          pbVar11[7] = pbVar11[7] ^ 0xad;
          pbVar11[8] = pbVar11[8] ^ 0x41;
          pbVar11[9] = pbVar11[9] ^ 0x25;
          pbVar11[10] = pbVar11[10] ^ 0x6b;
          pbVar11[0xb] = pbVar11[0xb] ^ 0xd;
          pbVar11[0xc] = pbVar11[0xc] ^ 0x11;
          pbVar11[0xd] = pbVar11[0xd] ^ 0x41;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a638;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163a638:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = thunk_FUN_71567138(DAT_711a3938);
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7520);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7510);
          *(undefined2 *)(puVar13 + 3) = 0x16f;
          *puVar13 = 0xba506544;
          puVar13[1] = 0xf0609701;
          puVar13[2] = 0xa65c6748;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f03c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7520);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7510);
        if (pbVar11[0xd] != 0) {
          *pbVar11 = *pbVar11 ^ 0x27;
          pbVar11[1] = pbVar11[1] ^ 9;
          pbVar11[2] = pbVar11[2] ^ 0x39;
          pbVar11[3] = pbVar11[3] ^ 0xdf;
          pbVar11[0xd] = 0;
          pbVar11[4] = pbVar11[4] ^ 0x6f;
          pbVar11[5] = pbVar11[5] ^ 0xe3;
          pbVar11[6] = pbVar11[6] ^ 0x3f;
          pbVar11[7] = pbVar11[7] ^ 0x9d;
          pbVar11[8] = pbVar11[8] ^ 0x27;
          pbVar11[9] = pbVar11[9] ^ 9;
          pbVar11[10] = pbVar11[10] ^ 0x39;
          pbVar11[0xb] = pbVar11[0xb] ^ 0xdf;
          pbVar11[0xc] = pbVar11[0xc] ^ 0x6f;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a7a8;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163a7a8:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = thunk_FUN_71568340(DAT_711a3938);
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7540);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7530);
          *puVar13 = 0xe2226950;
          puVar13[1] = 0x46587d4f;
          puVar13[2] = 0xe83b6456;
          *(undefined1 *)((int)puVar13 + 0xe) = 1;
          *(undefined2 *)(puVar13 + 3) = 0x94f;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f06c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7540);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7530);
        if (pbVar11[0xe] != 0) {
          *pbVar11 = *pbVar11 ^ 0x33;
          pbVar11[1] = pbVar11[1] ^ 5;
          pbVar11[2] = pbVar11[2] ^ 0x4b;
          pbVar11[3] = pbVar11[3] ^ 0x87;
          pbVar11[0xe] = 0;
          pbVar11[4] = pbVar11[4] ^ 0x21;
          pbVar11[5] = pbVar11[5] ^ 9;
          pbVar11[6] = pbVar11[6] ^ 7;
          pbVar11[7] = pbVar11[7] ^ 0x31;
          pbVar11[8] = pbVar11[8] ^ 0x33;
          pbVar11[9] = pbVar11[9] ^ 5;
          pbVar11[10] = pbVar11[10] ^ 0x4b;
          pbVar11[0xb] = pbVar11[0xb] ^ 0x87;
          pbVar11[0xc] = pbVar11[0xc] ^ 0x21;
          pbVar11[0xd] = pbVar11[0xd] ^ 9;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163a924;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163a924:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = FUN_715c0530(unaff_r9);
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7560);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7550);
          *(undefined1 *)((int)puVar13 + 0x13) = 1;
          uVar3 = DAT_70083544;
          uVar2 = DAT_70083540;
          uVar15 = DAT_7008353c;
          *puVar13 = DAT_70083538;
          puVar13[1] = uVar15;
          puVar13[2] = uVar2;
          puVar13[3] = uVar3;
          uVar4 = DAT_7008354a;
          *(undefined2 *)(puVar13 + 4) = DAT_70083548;
          *(undefined1 *)((int)puVar13 + 0x12) = uVar4;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f09c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7560);
          *puVar14 = 1;
        }
        iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7550);
        if (*(char *)(iVar9 + 0x13) != '\0') {
          uVar12 = 0;
          uVar19 = 0;
          do {
            iVar16 = (uVar12 & 7) * 8;
            bVar7 = (byte)(0xe943fb13 >> iVar16) |
                    (byte)(-0x5ed0d44d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            uVar17 = iVar16 - 0x20;
            if (-1 < (int)uVar17) {
              bVar7 = (byte)(0xa12f2bb3 >> (uVar17 & 0xff));
            }
            *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar7;
            bVar20 = 0xfffffffe < uVar12;
            bVar18 = uVar19 == 0;
            bVar1 = (0x11 < uVar12) <= uVar19;
            uVar12 = uVar12 + 1;
            uVar19 = uVar19 + bVar20;
          } while (bVar18 && bVar1);
          *(undefined1 *)(iVar9 + 0x13) = 0;
        }
        uVar12 = imp_strlen(iVar9);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163aa54;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163aa54:
          imp___aeabi_memmove(uVar19,iVar9,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        iVar9 = thunk_FUN_715c04ec(unaff_r9);
        FUN_717c623c(&uStack_30,*(undefined4 *)(iVar9 + 8));
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7580);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7570);
          *(undefined1 *)((int)puVar13 + 0x19) = 1;
          uVar6 = DAT_70083564;
          uVar5 = DAT_70083560;
          uVar3 = DAT_7008355c;
          uVar2 = DAT_70083558;
          uVar15 = DAT_70083554;
          *puVar13 = DAT_70083550;
          puVar13[1] = uVar15;
          puVar13[2] = uVar2;
          puVar13[3] = uVar3;
          puVar13[4] = uVar5;
          puVar13[5] = uVar6;
          *(undefined1 *)(puVar13 + 6) = DAT_70083568;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f0d0,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7580);
          *puVar14 = 1;
        }
        iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7570);
        if (*(char *)(iVar9 + 0x19) != '\0') {
          uVar12 = 0;
          uVar19 = 0;
          do {
            iVar16 = (uVar12 & 7) * 8;
            bVar7 = (byte)(0x377b9db1 >> iVar16) |
                    (byte)(-0x30700477 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            uVar17 = iVar16 - 0x20;
            if (-1 < (int)uVar17) {
              bVar7 = (byte)(0xcf8ffb89 >> (uVar17 & 0xff));
            }
            *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar7;
            bVar20 = 0xfffffffe < uVar12;
            bVar18 = uVar19 == 0;
            bVar1 = (0x17 < uVar12) <= uVar19;
            uVar12 = uVar12 + 1;
            uVar19 = uVar19 + bVar20;
          } while (bVar18 && bVar1);
          *(undefined1 *)(iVar9 + 0x19) = 0;
        }
        uVar12 = imp_strlen(iVar9);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163ab84;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163ab84:
          imp___aeabi_memmove(uVar19,iVar9,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        iVar9 = thunk_FUN_715c04ec(unaff_r9);
        iVar16 = *(int *)(iVar9 + 0xc);
        iVar9 = thunk_FUN_715c04ec(unaff_r9);
        FUN_717c623c(&uStack_30,iVar16 - *(int *)(iVar9 + 8));
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75a0);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7590);
          *(undefined1 *)((int)puVar13 + 0x13) = 1;
          uVar3 = DAT_7008357c;
          uVar2 = DAT_70083578;
          uVar15 = DAT_70083574;
          *puVar13 = DAT_70083570;
          puVar13[1] = uVar15;
          puVar13[2] = uVar2;
          puVar13[3] = uVar3;
          uVar4 = DAT_70083582;
          *(undefined2 *)(puVar13 + 4) = DAT_70083580;
          *(undefined1 *)((int)puVar13 + 0x12) = uVar4;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f10c,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75a0);
          *puVar14 = 1;
        }
        iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7590);
        if (*(char *)(iVar9 + 0x13) != '\0') {
          uVar12 = 0;
          uVar19 = 0;
          do {
            iVar16 = (uVar12 & 7) * 8;
            bVar7 = (byte)(0xdd55518f >> iVar16) |
                    (byte)(-0x124264cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            uVar17 = iVar16 - 0x20;
            if (-1 < (int)uVar17) {
              bVar7 = (byte)(0xedbd9b35 >> (uVar17 & 0xff));
            }
            *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar7;
            bVar20 = 0xfffffffe < uVar12;
            bVar18 = uVar19 == 0;
            bVar1 = (0x11 < uVar12) <= uVar19;
            uVar12 = uVar12 + 1;
            uVar19 = uVar19 + bVar20;
          } while (bVar18 && bVar1);
          *(undefined1 *)(iVar9 + 0x13) = 0;
        }
        uVar12 = imp_strlen(iVar9);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163acd4;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163acd4:
          imp___aeabi_memmove(uVar19,iVar9,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = FUN_7163d6b4();
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75c0);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75b0);
          *(undefined1 *)((int)puVar13 + 0x15) = 1;
          uVar5 = DAT_70083598;
          uVar3 = DAT_70083594;
          uVar2 = DAT_70083590;
          uVar15 = DAT_7008358c;
          *puVar13 = DAT_70083588;
          puVar13[1] = uVar15;
          puVar13[2] = uVar2;
          puVar13[3] = uVar3;
          puVar13[4] = uVar5;
          *(undefined1 *)(puVar13 + 5) = DAT_7008359c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f140,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75c0);
          *puVar14 = 1;
        }
        iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75b0);
        if (*(char *)(iVar9 + 0x15) != '\0') {
          uVar12 = 0;
          uVar19 = 0;
          do {
            iVar16 = (uVar12 & 7) * 8;
            bVar7 = (byte)(0x65f3d5f1 >> iVar16) |
                    (byte)(0x1cdc31f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            uVar17 = iVar16 - 0x20;
            if (-1 < (int)uVar17) {
              bVar7 = (byte)(0x1cdc31f >> (uVar17 & 0xff));
            }
            *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar7;
            bVar20 = 0xfffffffe < uVar12;
            bVar18 = uVar19 == 0;
            bVar1 = (0x13 < uVar12) <= uVar19;
            uVar12 = uVar12 + 1;
            uVar19 = uVar19 + bVar20;
          } while (bVar18 && bVar1);
          *(undefined1 *)(iVar9 + 0x15) = 0;
        }
        uVar12 = imp_strlen(iVar9);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163ae08;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163ae08:
          imp___aeabi_memmove(uVar19,iVar9,uVar12);
        }
        bVar18 = false;
        *(undefined1 *)(uVar19 + uVar12) = 0;
        iVar9 = FUN_7156ace4();
        if (iVar9 != 0) {
          iVar9 = thunk_FUN_71566860();
          bVar18 = iVar9 == 0;
        }
        FUN_717c623c(&uStack_30,bVar18);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75e0);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75d0);
          *(undefined1 *)(puVar13 + 3) = 1;
          *puVar13 = 0xf8147f86;
          puVar13[1] = 0xa648df19;
          puVar13[2] = 0x9d137a8e;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f178,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75e0);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75d0);
        if (pbVar11[0xc] != 0) {
          *pbVar11 = *pbVar11 ^ 0xe5;
          pbVar11[1] = pbVar11[1] ^ 0x13;
          pbVar11[2] = pbVar11[2] ^ 0x7d;
          pbVar11[3] = pbVar11[3] ^ 0x9d;
          pbVar11[0xc] = 0;
          pbVar11[4] = pbVar11[4] ^ 0x77;
          pbVar11[5] = pbVar11[5] ^ 0xab;
          pbVar11[6] = pbVar11[6] ^ 0x17;
          pbVar11[7] = pbVar11[7] ^ 0xd5;
          pbVar11[8] = pbVar11[8] ^ 0xe5;
          pbVar11[9] = pbVar11[9] ^ 0x13;
          pbVar11[10] = pbVar11[10] ^ 0x7d;
          pbVar11[0xb] = pbVar11[0xb] ^ 0x9d;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163af84;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163af84:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = thunk_FUN_715609b0(unaff_r9);
        FUN_717c623c(&uStack_30,uVar15);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7600);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75f0);
          *(undefined1 *)(puVar13 + 3) = 1;
          *puVar13 = 0xa76a54c1;
          puVar13[1] = 0x6af244ac;
          puVar13[2] = 0xcb6558d5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f1a4,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7600);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c75f0);
        if (pbVar11[0xc] != 0) {
          *pbVar11 = *pbVar11 ^ 0xa5;
          pbVar11[1] = pbVar11[1] ^ 0x3d;
          pbVar11[2] = pbVar11[2] ^ 0xb;
          pbVar11[3] = pbVar11[3] ^ 0xcb;
          pbVar11[0xc] = 0;
          pbVar11[4] = pbVar11[4] ^ 0xc3;
          pbVar11[5] = pbVar11[5] ^ 0x23;
          pbVar11[6] = pbVar11[6] ^ 0xad;
          pbVar11[7] = pbVar11[7] ^ 5;
          pbVar11[8] = pbVar11[8] ^ 0xa5;
          pbVar11[9] = pbVar11[9] ^ 0x3d;
          pbVar11[10] = pbVar11[10] ^ 0xb;
          pbVar11[0xb] = pbVar11[0xb] ^ 0xcb;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163b0f0;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163b0f0:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        iVar9 = FUN_717c5e7c(&uStack_30);
        thunk_FUN_7156a9f4(iVar9 == 0,0);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        piVar8 = (int *)0x0;
        if (DAT_711f6d58 != (int *)0x0) {
          piVar8 = (int *)*DAT_711f6d58;
        }
        if (DAT_711f6d58 == (int *)0x0 || piVar8 == (int *)0x0) {
          return;
        }
        iVar9 = (**(code **)(*piVar8 + 0x48))();
        if (iVar9 == 0) {
          return;
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7620);
        if (*pcVar10 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7610);
          *(undefined1 *)(puVar13 + 3) = 1;
          *puVar13 = 0x621009b4;
          puVar13[1] = 0xd34e5583;
          puVar13[2] = 0x71e0bbe;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f1d0,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7620);
          *puVar14 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7610);
        if (pbVar11[0xc] != 0) {
          *pbVar11 = *pbVar11 ^ 0xd7;
          pbVar11[1] = pbVar11[1] ^ 0x65;
          pbVar11[2] = pbVar11[2] ^ 0x79;
          pbVar11[3] = pbVar11[3] ^ 7;
          pbVar11[0xc] = 0;
          pbVar11[4] = pbVar11[4] ^ 0xed;
          pbVar11[5] = pbVar11[5] ^ 0x21;
          pbVar11[6] = pbVar11[6] ^ 0x11;
          pbVar11[7] = pbVar11[7] ^ 0xa3;
          pbVar11[8] = pbVar11[8] ^ 0xd7;
          pbVar11[9] = pbVar11[9] ^ 0x65;
          pbVar11[10] = pbVar11[10] ^ 0x79;
          pbVar11[0xb] = pbVar11[0xb] ^ 7;
        }
        uVar12 = imp_strlen(pbVar11);
        if (0xfffffff7 < uVar12) goto LAB_7163b874;
        if (uVar12 < 0xb) {
          uVar19 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
          if (uVar12 != 0) goto LAB_7163b280;
        }
        else {
          uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
          uStack_30 = (uVar12 | 7) + 2;
          uStack_2c = uVar12;
          uStack_28 = uVar19;
LAB_7163b280:
          imp___aeabi_memmove(uVar19,pbVar11,uVar12);
        }
        *(undefined1 *)(uVar19 + uVar12) = 0;
        uVar15 = (**(code **)(*(int *)*DAT_711f6d58 + 0x54))();
        goto LAB_71639e88;
      }
    }
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7640);
  if (*pcVar10 == '\0') {
    puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7630);
    *(undefined1 *)(puVar13 + 3) = 1;
    *puVar13 = 0x2c9f7c29;
    puVar13[1] = 0x4b1a2bc2;
    puVar13[2] = 0x739f6c2d;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f1fc,puVar13,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7640);
    *puVar14 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7630);
  if (pbVar11[0xc] != 0) {
    *pbVar11 = *pbVar11 ^ 0x41;
    pbVar11[1] = pbVar11[1] ^ 9;
    pbVar11[2] = pbVar11[2] ^ 0xfb;
    pbVar11[3] = pbVar11[3] ^ 0x73;
    pbVar11[0xc] = 0;
    pbVar11[4] = pbVar11[4] ^ 0xa7;
    pbVar11[5] = pbVar11[5] ^ 0x45;
    pbVar11[6] = pbVar11[6] ^ 0x7b;
    pbVar11[7] = pbVar11[7] ^ 0x29;
    pbVar11[8] = pbVar11[8] ^ 0x41;
    pbVar11[9] = pbVar11[9] ^ 9;
    pbVar11[10] = pbVar11[10] ^ 0xfb;
    pbVar11[0xb] = pbVar11[0xb] ^ 0x73;
  }
  uVar12 = imp_strlen(pbVar11);
  if (0xfffffff7 < uVar12) {
LAB_7163b874:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar12 < 0xb) {
    uVar19 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar12 << 1));
    if (uVar12 != 0) goto LAB_71639e6c;
  }
  else {
    uVar19 = thunk_MwhHq((uVar12 | 7) + 1);
    uStack_30 = (uVar12 | 7) + 2;
    uStack_2c = uVar12;
    uStack_28 = uVar19;
LAB_71639e6c:
    imp___aeabi_memmove(uVar19,pbVar11,uVar12);
  }
  uVar15 = 0;
  *(undefined1 *)(uVar19 + uVar12) = 0;
LAB_71639e88:
  FUN_717c623c(&uStack_30,uVar15);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_7163d6b4
// Entry: 0x7163d6b4 | Size: 444 bytes
// =========================================================================

bool FUN_7163d6b4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  byte abStack_2c [8];
  undefined4 uStack_24;
  
  uVar12 = (uint)DAT_700c746c;
  uVar13 = uVar12;
  if (uVar12 == 0) {
    uVar13 = DAT_711e9acc;
  }
  if (((uVar12 == 0 && uVar13 == 0) && (*DAT_710eb1b8 == 0)) && (*DAT_70b42048 == '\0')) {
    if (*DAT_70b42044 == '\0') {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7700);
      if (*pcVar8 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76f0);
        *(undefined1 *)((int)puVar10 + 0x17) = 1;
        uVar6 = DAT_700835e0;
        uVar5 = DAT_700835dc;
        uVar4 = DAT_700835d8;
        uVar3 = DAT_700835d4;
        *puVar10 = DAT_700835d0;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
        uVar7 = DAT_700835e6;
        *(undefined2 *)(puVar10 + 5) = DAT_700835e4;
        *(undefined1 *)((int)puVar10 + 0x16) = uVar7;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f314,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7700);
        *puVar11 = 1;
      }
      iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76f0);
      if (*(char *)(iVar9 + 0x17) != '\0') {
        uVar13 = 0;
        uVar12 = 0;
        do {
          iVar14 = (uVar13 & 7) * 8;
          uVar15 = iVar14 - 0x20;
          bVar16 = (byte)(0x398751e3 >> iVar14) |
                   (byte)(-0x6e72461f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar15) {
            bVar16 = (byte)(0x918db9e1 >> (uVar15 & 0xff));
          }
          *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar16;
          bVar17 = 0xfffffffe < uVar13;
          bVar1 = uVar12 == 0;
          bVar2 = (0x15 < uVar13) <= uVar12;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + bVar17;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar9 + 0x17) = 0;
      }
      FUN_71315100(abStack_2c);
      iVar9 = FUN_717c5e7c();
      if ((abStack_2c[0] & 1) != 0) {
        thunk_qNQrlu(uStack_24);
      }
      return iVar9 != 0;
    }
    return true;
  }
  return true;
}


// =========================================================================
// Function: FUN_7163e5d4
// Entry: 0x7163e5d4 | Size: 28 bytes
// =========================================================================

void FUN_7163e5d4(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76c0);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76b0);
    *(undefined1 *)(puVar4 + 3) = 1;
    *puVar4 = 0x6e4607a8;
    puVar4[1] = 0xc576d321;
    puVar4[2] = 0xb4a06a2;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f2bc,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76c0);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76b0);
  if (pbVar2[0xc] != 0) {
    *pbVar2 = *pbVar2 ^ 0xcb;
    pbVar2[1] = pbVar2[1] ^ 0x6b;
    pbVar2[2] = pbVar2[2] ^ 0x2f;
    pbVar2[3] = pbVar2[3] ^ 0xb;
    pbVar2[0xc] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x4f;
    pbVar2[5] = pbVar2[5] ^ 0xa7;
    pbVar2[6] = pbVar2[6] ^ 0x29;
    pbVar2[7] = pbVar2[7] ^ 0xb1;
    pbVar2[8] = pbVar2[8] ^ 0xcb;
    pbVar2[9] = pbVar2[9] ^ 0x6b;
    pbVar2[10] = pbVar2[10] ^ 0x2f;
    pbVar2[0xb] = pbVar2[0xb] ^ 0xb;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) goto LAB_7163ea7c;
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar3 << 1));
    if (uVar3 != 0) goto LAB_7163e720;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_2c = (uVar3 | 7) + 2;
    uStack_28 = uVar3;
    uStack_24 = uVar6;
LAB_7163e720:
    imp___aeabi_memmove(uVar6,pbVar2,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) goto LAB_7163ea84;
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar3 << 1));
    if (uVar3 != 0) goto LAB_7163e790;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_38 = (uVar3 | 7) + 2;
    uStack_34 = uVar3;
    uStack_30 = uVar6;
LAB_7163e790:
    imp___aeabi_memcpy(uVar6,param_1,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_717c6b64(&uStack_2c,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76e0);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76d0);
    *(undefined1 *)(puVar4 + 3) = 1;
    *puVar4 = 0xd0cad32e;
    puVar4[1] = 0xad1459dd;
    puVar4[2] = 0xb5c6cb2c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163f2e8,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76e0);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c76d0);
  if (pbVar2[0xc] != 0) {
    *pbVar2 = *pbVar2 ^ 0x4d;
    pbVar2[1] = pbVar2[1] ^ 0xbf;
    pbVar2[2] = pbVar2[2] ^ 0xa3;
    pbVar2[3] = pbVar2[3] ^ 0xb5;
    pbVar2[0xc] = 0;
    pbVar2[4] = pbVar2[4] ^ 0xb3;
    pbVar2[5] = pbVar2[5] ^ 0x2d;
    pbVar2[6] = pbVar2[6] ^ 0x4b;
    pbVar2[7] = pbVar2[7] ^ 0xc9;
    pbVar2[8] = pbVar2[8] ^ 0x4d;
    pbVar2[9] = pbVar2[9] ^ 0xbf;
    pbVar2[10] = pbVar2[10] ^ 0xa3;
    pbVar2[0xb] = pbVar2[0xb] ^ 0xb5;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
LAB_7163ea7c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar3 << 1));
    if (uVar3 != 0) goto LAB_7163e904;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_2c = (uVar3 | 7) + 2;
    uStack_28 = uVar3;
    uStack_24 = uVar6;
LAB_7163e904:
    imp___aeabi_memmove(uVar6,pbVar2,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar3 = imp_strlen(param_2);
  if (0xfffffff7 < uVar3) {
LAB_7163ea84:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_7163e980;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_38 = (uVar3 | 7) + 2;
    uStack_34 = uVar3;
    uStack_30 = uVar6;
  }
  imp___aeabi_memcpy(uVar6,param_2,uVar3);
LAB_7163e980:
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_717c6b64(&uStack_2c,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return;
}


// =========================================================================
// Function: FUN_7163ef6c
// Entry: 0x7163ef6c | Size: 16 bytes
// =========================================================================

void FUN_7163ef6c(undefined1 param_1)

{
  DAT_700c746c = param_1;
  return;
}


// =========================================================================
// Function: i_dIqNcnILorZMQbzwsvxWRuzEo
// Entry: 0x7163f34c | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i_dIqNcnILorZMQbzwsvxWRuzEo(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0ee48;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_7163f3d0;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_7163f3d0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7163fea0
// Entry: 0x7163fea0 | Size: 6312 bytes
// =========================================================================

void FUN_7163fea0(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  bool bVar22;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar20 = &DAT_711f6d58;
  iVar8 = 0;
  if (DAT_711f6d58 != 0) {
    iVar8 = DAT_711a3938;
  }
  if (DAT_711f6d58 != 0 && iVar8 != 0) {
    iVar6 = FUN_7156ab28();
    iVar8 = 0;
    if (iVar6 != 0) {
      iVar8 = DAT_711e9acc;
    }
    if (iVar6 != 0 && iVar8 != 2) {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7760);
      if (*pcVar7 == '\0') {
        puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7750);
        *(undefined1 *)(puVar15 + 3) = 1;
        *puVar15 = 0x2b708e8f;
        puVar15[1] = 0x68665aa8;
        puVar15[2] = 0x477f829b;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643c38,puVar15,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7760);
        *puVar14 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7750);
      if (pbVar10[0xc] != 0) {
        *pbVar10 = *pbVar10 ^ 0xeb;
        pbVar10[1] = pbVar10[1] ^ 0xe7;
        pbVar10[2] = pbVar10[2] ^ 0x11;
        pbVar10[3] = pbVar10[3] ^ 0x47;
        pbVar10[0xc] = 0;
        pbVar10[4] = pbVar10[4] ^ 199;
        pbVar10[5] = pbVar10[5] ^ 0x3d;
        pbVar10[6] = pbVar10[6] ^ 0x39;
        pbVar10[7] = pbVar10[7] ^ 7;
        pbVar10[8] = pbVar10[8] ^ 0xeb;
        pbVar10[9] = pbVar10[9] ^ 0xe7;
        pbVar10[10] = pbVar10[10] ^ 0x11;
        pbVar10[0xb] = pbVar10[0xb] ^ 0x47;
      }
      uVar9 = imp_strlen(pbVar10);
      if (0xfffffff7 < uVar9) goto LAB_71641250;
      if (uVar9 < 0xb) {
        uVar19 = (uint)&uStack_30 | 1;
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar9 << 1));
        if (uVar9 != 0) goto LAB_71640264;
      }
      else {
        uVar19 = thunk_MwhHq((uVar9 | 7) + 1);
        uStack_30 = (uVar9 | 7) + 2;
        uStack_2c = uVar9;
        uStack_28 = uVar19;
LAB_71640264:
        imp___aeabi_memmove(uVar19,pbVar10,uVar9);
      }
      bVar21 = false;
      *(undefined1 *)(uVar19 + uVar9) = 0;
      iVar8 = FUN_717c5e7c(&uStack_30);
      if (((iVar8 == 0) && (DAT_711e9ee4 != 0)) &&
         (iVar8 = FUN_7165306c(DAT_711e9ee4,2), iVar8 != 0)) {
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7780);
        if (*pcVar7 == '\0') {
          puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7770);
          *(undefined1 *)((int)puVar15 + 0x17) = 1;
          uVar3 = DAT_70083610;
          uVar2 = DAT_7008360c;
          uVar12 = DAT_70083608;
          uVar11 = DAT_70083604;
          *puVar15 = DAT_70083600;
          puVar15[1] = uVar11;
          puVar15[2] = uVar12;
          puVar15[3] = uVar2;
          puVar15[4] = uVar3;
          uVar16 = DAT_70083616;
          *(undefined2 *)(puVar15 + 5) = DAT_70083614;
          *(undefined1 *)((int)puVar15 + 0x16) = uVar16;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643c64,puVar15,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7780);
          *puVar14 = 1;
        }
        iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7770);
        if (*(char *)(iVar8 + 0x17) != '\0') {
          uVar9 = 0;
          uVar19 = 0;
          do {
            iVar6 = (uVar9 & 7) * 8;
            uVar18 = iVar6 - 0x20;
            bVar5 = (byte)(0x7dbbf511 >> iVar6) |
                    (byte)(-0x7ef80aff << ((uVar9 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar5 = (byte)(0x8107f501 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
            bVar22 = 0xfffffffe < uVar9;
            bVar21 = uVar19 == 0;
            bVar1 = (0x15 < uVar9) <= uVar19;
            uVar9 = uVar9 + 1;
            uVar19 = uVar19 + bVar22;
          } while (bVar21 && bVar1);
          *(undefined1 *)(iVar8 + 0x17) = 0;
        }
        uVar9 = imp_strlen(iVar8);
        if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_3c);
        }
        if (uVar9 < 0xb) {
          uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar9 << 1));
          uVar19 = (uint)&uStack_3c | 1;
          if (uVar9 != 0) goto LAB_716403bc;
        }
        else {
          uVar19 = thunk_MwhHq((uVar9 | 7) + 1);
          uStack_3c = (uVar9 | 7) + 2;
          uStack_38 = uVar9;
          uStack_34 = uVar19;
LAB_716403bc:
          imp___aeabi_memmove(uVar19,iVar8,uVar9);
        }
        *(undefined1 *)(uVar19 + uVar9) = 0;
        iVar8 = FUN_717c5e7c(&uStack_3c);
        if ((uStack_3c & 1) != 0) {
          thunk_qNQrlu(uStack_34);
        }
        bVar21 = iVar8 == 0;
      }
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      if ((bVar21) && (*(int *)(DAT_711f6d58 + 0xac) != 0)) {
        iVar8 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
        if (iVar8 != 0) {
          uVar9 = *(uint *)(iVar8 + 0x130);
        }
        if (((iVar8 != 0 && uVar9 != 0) && (iVar8 = thunk_FUN_715bf66c(uVar9), iVar8 != 0)) &&
           ((iVar8 = thunk_FUN_715c3f6c(uVar9), iVar8 == 0 &&
            (iVar8 = *(int *)(DAT_711f6d58 + 4), iVar8 != 0)))) {
          uVar11 = thunk_FUN_715c4004(uVar9);
          uVar9 = FUN_717b92b8(iVar8,uVar11);
          if ((uVar9 != 0xffff) && (uVar9 < 0x7d1)) {
            bVar21 = *(char *)(iVar8 + uVar9 + 0x3e88) != '\0';
            if (bVar21) {
              puVar20 = *(undefined4 **)(iVar8 + uVar9 * 4);
            }
            if ((bVar21 && puVar20 != (undefined4 *)0x0) &&
               (iVar8 = thunk_FUN_715f4594(puVar20), iVar8 != 10)) {
              FUN_7136cdfc(&uStack_30);
              thunk_FUN_715608f0(puVar20,&uStack_30);
              uVar9 = uStack_28;
              uVar11 = FUN_71ba21e8(uStack_2c,uStack_2c);
              uVar12 = FUN_71ba21e8(uStack_30,uStack_30);
              uVar11 = FUN_71ba0b38(uVar12,uVar11);
              uVar12 = FUN_71ba21e8(uVar9,uVar9);
              FUN_71ba0b38(uVar12,uVar11);
              uVar11 = imp_sqrtf();
              FUN_71ba13e0(uVar11,0x3bb60bc0);
              iVar8 = FUN_71ba17bc();
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              uVar11 = FUN_71602ffc(puVar20);
              iVar6 = FUN_71ba2cf0(uVar11,0);
              if (iVar6 == 0) {
                uVar11 = FUN_71602ffc(puVar20);
                FUN_71ba13e0(uVar11,0x3bb60bc0);
                iVar6 = FUN_71ba17bc();
                if (iVar6 - iVar8 < 2) {
                  uVar11 = FUN_71602ffc(puVar20);
                  FUN_71ba13e0(uVar11,0x3bb60bc0);
                  iVar6 = FUN_71ba17bc();
                  if (-2 < iVar6 - iVar8) {
                    uVar11 = FUN_71602ffc(puVar20);
                    FUN_71ba13e0(uVar11,0x3bb60bc0);
                    iVar8 = FUN_71ba17bc();
                  }
                }
              }
              FUN_71ba13e0(*(undefined4 *)(*(int *)(puVar20[3] + 0x388) + 0x84),0x3bb60bc0);
              iVar6 = FUN_71ba17bc();
              if (iVar6 < 0) {
                iVar6 = -iVar6;
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77a0);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7790);
                *(undefined1 *)((int)puVar15 + 0x11) = 1;
                uVar2 = DAT_70083624;
                uVar12 = DAT_70083620;
                uVar11 = DAT_7008361c;
                *puVar15 = DAT_70083618;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                *(undefined1 *)(puVar15 + 4) = DAT_70083628;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643c9c,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77a0);
                *puVar14 = 1;
              }
              iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7790);
              if (*(char *)(iVar13 + 0x11) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar17 = (uVar9 & 7) * 8;
                  bVar5 = (byte)(0xa54b2d63 >> iVar17) |
                          (byte)(-0x1840d26b << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  uVar18 = iVar17 - 0x20;
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0xe7bf2d95 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0xf < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar13 + 0x11) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,iVar8);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77c0);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77b0);
                *(undefined1 *)(puVar15 + 5) = 1;
                uVar3 = DAT_70083640;
                uVar2 = DAT_7008363c;
                uVar12 = DAT_70083638;
                uVar11 = DAT_70083634;
                *puVar15 = DAT_70083630;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                puVar15[4] = uVar3;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643cd0,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77c0);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77b0);
              if (*(char *)(iVar8 + 0x14) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar13 = (uVar9 & 7) * 8;
                  uVar18 = iVar13 - 0x20;
                  bVar5 = (byte)(0x89812fa5 >> iVar13) |
                          (byte)(0x49edfd3f << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x49edfd3f >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x12 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x14) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,iVar6);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77e0);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77d0);
                *puVar15 = 0xd4b6a1e4;
                puVar15[1] = 0xb3c0095f;
                puVar15[2] = 0xd980a5e2;
                *(undefined1 *)((int)puVar15 + 0xe) = 1;
                *(undefined2 *)(puVar15 + 3) = 0x7d41;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643d04,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77e0);
                *puVar14 = 1;
              }
              pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77d0);
              if (pbVar10[0xe] != 0) {
                *pbVar10 = *pbVar10 ^ 0x87;
                pbVar10[1] = pbVar10[1] ^ 0xcd;
                pbVar10[2] = pbVar10[2] ^ 0xdf;
                pbVar10[3] = pbVar10[3] ^ 0xb1;
                pbVar10[0xe] = 0;
                pbVar10[4] = pbVar10[4] ^ 0x31;
                pbVar10[5] = pbVar10[5] ^ 0x7d;
                pbVar10[6] = pbVar10[6] ^ 0x9f;
                pbVar10[7] = pbVar10[7] ^ 0xc5;
                pbVar10[8] = pbVar10[8] ^ 0x87;
                pbVar10[9] = pbVar10[9] ^ 0xcd;
                pbVar10[10] = pbVar10[10] ^ 0xdf;
                pbVar10[0xb] = pbVar10[0xb] ^ 0xb1;
                pbVar10[0xc] = pbVar10[0xc] ^ 0x31;
                pbVar10[0xd] = pbVar10[0xd] ^ 0x7d;
              }
              FUN_71315100(&uStack_3c);
              thunk_FUN_715f68dc(puVar20);
              uVar11 = FUN_71ba17bc();
              FUN_717c623c(&uStack_3c,uVar11);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7800);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77f0);
                *(undefined1 *)((int)puVar15 + 0x11) = 1;
                uVar2 = DAT_70083654;
                uVar12 = DAT_70083650;
                uVar11 = DAT_7008364c;
                *puVar15 = DAT_70083648;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                *(undefined1 *)(puVar15 + 4) = DAT_70083658;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431d90,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7800);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c77f0);
              if (*(char *)(iVar8 + 0x11) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0x2557e107 >> iVar6) |
                          (byte)(0x13bfd92d << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x13bfd92d >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0xf < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x11) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,1000);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7820);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7810);
                *(undefined1 *)((int)puVar15 + 0x12) = 1;
                uVar2 = DAT_7008366c;
                uVar12 = DAT_70083668;
                uVar11 = DAT_70083664;
                *puVar15 = DAT_70083660;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                *(undefined2 *)(puVar15 + 4) = DAT_70083670;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643d34,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7820);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7810);
              if (*(char *)(iVar8 + 0x12) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0x33032df5 >> iVar6) |
                          (byte)(-0xaa870ed << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0xf5578f13 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x10 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x12) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,(*(uint *)(puVar20[3] + 0x42c) & 0x7f) >> 6);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7840);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7830);
                *(undefined1 *)((int)puVar15 + 0x12) = 1;
                uVar2 = DAT_70083684;
                uVar12 = DAT_70083680;
                uVar11 = DAT_7008367c;
                *puVar15 = DAT_70083678;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                *(undefined2 *)(puVar15 + 4) = DAT_70083688;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643d68,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7840);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7830);
              if (*(char *)(iVar8 + 0x12) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0xeb59dbd3 >> iVar6) |
                          (byte)(0x769f7eb << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x769f7eb >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x10 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x12) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,(*(uint *)(puVar20[3] + 0x42c) & 0x1f) >> 4);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7860);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7850);
                *(undefined1 *)((int)puVar15 + 0x16) = 1;
                uVar3 = DAT_700836a0;
                uVar2 = DAT_7008369c;
                uVar12 = DAT_70083698;
                uVar11 = DAT_70083694;
                *puVar15 = DAT_70083690;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                puVar15[4] = uVar3;
                *(undefined2 *)(puVar15 + 5) = DAT_700836a4;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643d9c,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7860);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7850);
              if (*(char *)(iVar8 + 0x16) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0xa9fd3505 >> iVar6) |
                          (byte)(-0x7e9a3e31 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x8165c1cf >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x14 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x16) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,(*(uint *)(puVar20[3] + 0x42c) & 0x10) >> 4 ^ 1);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7880);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7870);
                *(undefined1 *)((int)puVar15 + 0x11) = 1;
                uVar2 = DAT_700836b4;
                uVar12 = DAT_700836b0;
                uVar11 = DAT_700836ac;
                *puVar15 = DAT_700836a8;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                *(undefined1 *)(puVar15 + 4) = DAT_700836b8;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643dd4,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7880);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7870);
              if (*(char *)(iVar8 + 0x11) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0xbffb17b5 >> iVar6) |
                          (byte)(0x6bdffbd1 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x6bdffbd1 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0xf < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x11) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,*(undefined1 *)((int)puVar20 + 0x1d));
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78a0);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7890);
                *(undefined1 *)((int)puVar15 + 0x15) = 1;
                uVar3 = DAT_700836d0;
                uVar2 = DAT_700836cc;
                uVar12 = DAT_700836c8;
                uVar11 = DAT_700836c4;
                *puVar15 = DAT_700836c0;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                puVar15[4] = uVar3;
                *(undefined1 *)(puVar15 + 5) = DAT_700836d4;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643e08,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78a0);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7890);
              if (*(char *)(iVar8 + 0x15) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0x13e1dbf3 >> iVar6) |
                          (byte)(-0x2c7a2ab9 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0xd385d547 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x13 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x15) = 0;
              }
              FUN_71315100(&uStack_3c);
              if (puVar20[0x1d5] == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(undefined1 *)(puVar20 + 0x1d6);
              }
              FUN_717c623c(&uStack_3c,uVar16);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78c0);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78b0);
                *(undefined1 *)(puVar15 + 5) = 1;
                uVar3 = DAT_700836e8;
                uVar2 = DAT_700836e4;
                uVar12 = DAT_700836e0;
                uVar11 = DAT_700836dc;
                *puVar15 = DAT_700836d8;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                puVar15[4] = uVar3;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643e40,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78c0);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78b0);
              if (*(char *)(iVar8 + 0x14) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0x85296fdf >> iVar6) |
                          (byte)(-0x141ebe87 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0xebe14179 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x12 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x14) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,1);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78e0);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78d0);
                *(undefined1 *)(puVar15 + 6) = 1;
                uVar4 = DAT_70083704;
                uVar3 = DAT_70083700;
                uVar2 = DAT_700836fc;
                uVar12 = DAT_700836f8;
                uVar11 = DAT_700836f4;
                *puVar15 = DAT_700836f0;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                puVar15[4] = uVar3;
                puVar15[5] = uVar4;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643e74,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78e0);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78d0);
              if (*(char *)(iVar8 + 0x18) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0x1325072d >> iVar6) |
                          (byte)(0x6f5d0185 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x6f5d0185 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x16 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x18) = 0;
              }
              FUN_71315100(&uStack_3c);
              uVar11 = thunk_FUN_715f4594(puVar20);
              FUN_717c623c(&uStack_3c,uVar11);
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7900);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78f0);
                *(undefined1 *)((int)puVar15 + 0x1e) = 1;
                uVar12 = DAT_70083710;
                uVar11 = DAT_7008370c;
                *puVar15 = DAT_70083708;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                uVar2 = DAT_70083720;
                uVar12 = DAT_7008371c;
                uVar11 = DAT_70083718;
                puVar15[3] = DAT_70083714;
                puVar15[4] = uVar11;
                puVar15[5] = uVar12;
                puVar15[6] = uVar2;
                *(undefined2 *)(puVar15 + 7) = DAT_70083724;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643eac,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7900);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c78f0);
              if (*(char *)(iVar8 + 0x1e) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0xd531356b >> iVar6) |
                          (byte)(0x5be9895d << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x5be9895d >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x1c < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x1e) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,*(undefined1 *)((int)puVar20 + 0x969));
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7920);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7910);
                *(undefined1 *)((int)puVar15 + 0x16) = 1;
                uVar3 = DAT_70083738;
                uVar2 = DAT_70083734;
                uVar12 = DAT_70083730;
                uVar11 = DAT_7008372c;
                *puVar15 = DAT_70083728;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                puVar15[3] = uVar2;
                puVar15[4] = uVar3;
                *(undefined2 *)(puVar15 + 5) = DAT_7008373c;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643eec,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7920);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7910);
              if (*(char *)(iVar8 + 0x16) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0xb555f99b >> iVar6) |
                          (byte)(0x7d410717 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x7d410717 >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x14 < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x16) = 0;
              }
              uVar11 = FUN_71315100(&uStack_3c);
              FUN_717c623c(uVar11,*(undefined1 *)(puVar20 + 0x25a));
              if ((uStack_3c & 1) != 0) {
                thunk_qNQrlu(uStack_34);
              }
              pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7940);
              if (*pcVar7 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7930);
                *(undefined1 *)((int)puVar15 + 0x1d) = 1;
                uVar12 = DAT_70083748;
                uVar11 = DAT_70083744;
                *puVar15 = DAT_70083740;
                puVar15[1] = uVar11;
                puVar15[2] = uVar12;
                uVar2 = DAT_70083758;
                uVar12 = DAT_70083754;
                uVar11 = DAT_70083750;
                puVar15[3] = DAT_7008374c;
                puVar15[4] = uVar11;
                puVar15[5] = uVar12;
                puVar15[6] = uVar2;
                *(undefined1 *)(puVar15 + 7) = DAT_7008375c;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643f24,puVar15,&DAT_70b0e000);
                puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7940);
                *puVar14 = 1;
              }
              iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7930);
              if (*(char *)(iVar8 + 0x1d) != '\0') {
                uVar9 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (uVar9 & 7) * 8;
                  uVar18 = iVar6 - 0x20;
                  bVar5 = (byte)(0x4d91d391 >> iVar6) |
                          (byte)(0x93de57d << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar18) {
                    bVar5 = (byte)(0x93de57d >> (uVar18 & 0xff));
                  }
                  *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
                  bVar22 = 0xfffffffe < uVar9;
                  bVar21 = uVar19 == 0;
                  bVar1 = (0x1b < uVar9) <= uVar19;
                  uVar9 = uVar9 + 1;
                  uVar19 = uVar19 + bVar22;
                } while (bVar21 && bVar1);
                *(undefined1 *)(iVar8 + 0x1d) = 0;
              }
              FUN_71315100(&uStack_3c);
              uVar11 = FUN_7160963c(puVar20);
              FUN_717c623c(&uStack_3c,uVar11);
              uVar9 = uStack_34;
              uVar19 = uStack_3c;
              goto joined_r0x71640130;
            }
          }
        }
      }
    }
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7960);
  if (*pcVar7 == '\0') {
    puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7950);
    *(undefined1 *)(puVar20 + 5) = 1;
    uVar3 = DAT_70083770;
    uVar2 = DAT_7008376c;
    uVar12 = DAT_70083768;
    uVar11 = DAT_70083764;
    *puVar20 = DAT_70083760;
    puVar20[1] = uVar11;
    puVar20[2] = uVar12;
    puVar20[3] = uVar2;
    puVar20[4] = uVar3;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643f64,puVar20,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7960);
    *puVar14 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7950);
  if (*(char *)(iVar8 + 0x14) != '\0') {
    uVar9 = 0;
    uVar19 = 0;
    do {
      iVar6 = (uVar9 & 7) * 8;
      uVar18 = iVar6 - 0x20;
      bVar5 = (byte)(0xc961f7a9 >> iVar6) | (byte)(0x7fcb4991 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar18) {
        bVar5 = (byte)(0x7fcb4991 >> (uVar18 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
      bVar22 = 0xfffffffe < uVar9;
      bVar21 = uVar19 == 0;
      bVar1 = (0x12 < uVar9) <= uVar19;
      uVar9 = uVar9 + 1;
      uVar19 = uVar19 + bVar22;
    } while (bVar21 && bVar1);
    *(undefined1 *)(iVar8 + 0x14) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) goto LAB_71641250;
  if (uVar9 < 0xb) {
    uVar19 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar9 << 1));
    if (uVar9 != 0) goto LAB_7163ffdc;
  }
  else {
    uVar19 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_30 = (uVar9 | 7) + 2;
    uStack_2c = uVar9;
    uStack_28 = uVar19;
LAB_7163ffdc:
    imp___aeabi_memmove(uVar19,iVar8,uVar9);
  }
  *(undefined1 *)(uVar19 + uVar9) = 0;
  FUN_717c623c(&uStack_30,0);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7980);
  if (*pcVar7 == '\0') {
    puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7970);
    *(undefined1 *)((int)puVar20 + 0x16) = 1;
    uVar3 = DAT_70083788;
    uVar2 = DAT_70083784;
    uVar12 = DAT_70083780;
    uVar11 = DAT_7008377c;
    *puVar20 = DAT_70083778;
    puVar20[1] = uVar11;
    puVar20[2] = uVar12;
    puVar20[3] = uVar2;
    puVar20[4] = uVar3;
    *(undefined2 *)(puVar20 + 5) = DAT_7008378c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71643f98,puVar20,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7980);
    *puVar14 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7970);
  if (*(char *)(iVar8 + 0x16) != '\0') {
    uVar9 = 0;
    uVar19 = 0;
    do {
      iVar6 = (uVar9 & 7) * 8;
      uVar18 = iVar6 - 0x20;
      bVar5 = (byte)(0xbb4fdb95 >> iVar6) | (byte)(-0x626a25d << ((uVar9 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar18) {
        bVar5 = (byte)(0xf9d95da3 >> (uVar18 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
      bVar22 = 0xfffffffe < uVar9;
      bVar21 = uVar19 == 0;
      bVar1 = (0x14 < uVar9) <= uVar19;
      uVar9 = uVar9 + 1;
      uVar19 = uVar19 + bVar22;
    } while (bVar21 && bVar1);
    *(undefined1 *)(iVar8 + 0x16) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) {
LAB_71641250:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar9 < 0xb) {
    uVar19 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar9 << 1));
    if (uVar9 != 0) goto LAB_71640104;
  }
  else {
    uVar19 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_30 = (uVar9 | 7) + 2;
    uStack_2c = uVar9;
    uStack_28 = uVar19;
LAB_71640104:
    imp___aeabi_memmove(uVar19,iVar8,uVar9);
  }
  *(undefined1 *)(uVar19 + uVar9) = 0;
  FUN_717c623c(&uStack_30,0);
  uVar9 = uStack_28;
  uVar19 = uStack_30;
joined_r0x71640130:
  if ((uVar19 & 1) != 0) {
    thunk_qNQrlu(uVar9);
  }
  return;
}


// =========================================================================
// Function: FUN_716440dc
// Entry: 0x716440dc | Size: 4 bytes
// =========================================================================

void FUN_716440dc(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x716440f8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716441bc
// Entry: 0x716441bc | Size: 200 bytes
// =========================================================================

void FUN_716441bc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)thunk_MwhHq(8);
  *puVar1 = param_1;
  puVar1[1] = 0;
  puVar3 = &DAT_711e9ac0;
  puVar2 = DAT_711e9ac0;
  do {
    puVar4 = puVar3;
    if (puVar2 == (undefined4 *)0x0) {
LAB_71644234:
      puVar2 = (undefined4 *)thunk_MwhHq(0x18);
      *puVar2 = 0;
      puVar2[4] = param_2;
      puVar2[5] = puVar1;
      puVar2[1] = 0;
      puVar2[2] = puVar4;
      *puVar3 = puVar2;
      if ((int *)*DAT_711e9abc != (int *)0x0) {
        puVar2 = (undefined4 *)*puVar3;
        DAT_711e9abc = (int *)*DAT_711e9abc;
      }
      FUN_712f807c(DAT_711e9ac0,puVar2);
      DAT_711e9ac4 = DAT_711e9ac4 + 1;
      return;
    }
    while (puVar4 = puVar2, (int)puVar4[4] <= param_2) {
      if (param_2 <= (int)puVar4[4]) {
        return;
      }
      puVar2 = (undefined4 *)puVar4[1];
      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
        puVar3 = puVar4 + 1;
        goto LAB_71644234;
      }
    }
    puVar2 = (undefined4 *)*puVar4;
    puVar3 = puVar4;
  } while( true );
}


// =========================================================================
// Function: FUN_71644330
// Entry: 0x71644330 | Size: 300 bytes
// =========================================================================

void FUN_71644330(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if ((undefined4 **)DAT_711e9abc != &DAT_711e9ac0) {
    puVar2 = &DAT_711e9ac0;
    puVar3 = DAT_711e9abc;
    do {
      if (*(int *)puVar3[5] == param_1) {
        if (DAT_711e9ac0 == (undefined4 *)0x0) {
          return;
        }
        puVar4 = DAT_711e9ac0;
        do {
          puVar1 = puVar4;
          if ((int)puVar4[4] < (int)puVar3[4]) {
            puVar4 = puVar4 + 1;
            puVar1 = puVar2;
          }
          puVar2 = puVar1;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
        if ((undefined4 **)puVar2 == &DAT_711e9ac0) {
          return;
        }
        if ((int)puVar3[4] < (int)puVar2[4]) {
          return;
        }
        puVar3 = puVar2;
        puVar4 = (undefined4 *)puVar2[1];
        if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
          do {
            puVar1 = (undefined4 *)puVar3[2];
            bVar5 = (undefined4 *)*puVar1 != puVar3;
            puVar3 = puVar1;
          } while (bVar5);
        }
        else {
          do {
            puVar1 = puVar4;
            puVar4 = (undefined4 *)*puVar1;
          } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
        }
        if (DAT_711e9abc == puVar2) {
          DAT_711e9abc = puVar1;
        }
        DAT_711e9ac4 = DAT_711e9ac4 + -1;
        FUN_71368054(DAT_711e9ac0,puVar2);
        thunk_qNQrlu(puVar2);
        return;
      }
      puVar4 = (undefined4 *)puVar3[1];
      puVar1 = puVar3;
      if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
        do {
          puVar3 = (undefined4 *)puVar1[2];
          bVar5 = (undefined4 *)*puVar3 != puVar1;
          puVar1 = puVar3;
        } while (bVar5);
      }
      else {
        do {
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar3;
        } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
      }
    } while ((undefined4 **)puVar3 != &DAT_711e9ac0);
  }
  return;
}


// =========================================================================
// Function: FUN_716444cc
// Entry: 0x716444cc | Size: 1156 bytes
// =========================================================================

undefined4 FUN_716444cc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (DAT_711f6d58 != 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79a0);
    if (*pcVar2 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7990);
      *(undefined1 *)(puVar12 + 3) = 1;
      *puVar12 = 0x27b0c0cd;
      puVar12[1] = 0x74ae1a;
      puVar12[2] = 0x4bbfccd9;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71644bf4,puVar12,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79a0);
      *puVar8 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7990);
    if (pbVar3[0xc] != 0) {
      *pbVar3 = *pbVar3 ^ 0xa9;
      pbVar3[1] = pbVar3[1] ^ 0xa9;
      pbVar3[2] = pbVar3[2] ^ 0xd1;
      pbVar3[3] = pbVar3[3] ^ 0x4b;
      pbVar3[0xc] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x75;
      pbVar3[5] = pbVar3[5] ^ 0xc9;
      pbVar3[6] = pbVar3[6] ^ 0x2b;
      pbVar3[7] = pbVar3[7] ^ 0x6f;
      pbVar3[8] = pbVar3[8] ^ 0xa9;
      pbVar3[9] = pbVar3[9] ^ 0xa9;
      pbVar3[10] = pbVar3[10] ^ 0xd1;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x4b;
    }
    uVar4 = imp_strlen(pbVar3);
    if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_30);
    }
    if (uVar4 < 0xb) {
      uVar11 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar4 << 1));
      if (uVar4 != 0) goto LAB_71644624;
    }
    else {
      uVar11 = thunk_MwhHq((uVar4 | 7) + 1);
      uStack_30 = (uVar4 | 7) + 2;
      uStack_2c = uVar4;
      uStack_28 = uVar11;
LAB_71644624:
      imp___aeabi_memmove(uVar11,pbVar3,uVar4);
    }
    *(undefined1 *)(uVar11 + uVar4) = 0;
    iVar5 = FUN_717c5e7c(&uStack_30);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if (iVar5 == 0) goto LAB_71644678;
  }
  param_1 = 1;
  param_3 = 0xffffffff;
  param_4 = 0xffffffff;
LAB_71644678:
  puVar12 = DAT_711e9abc;
  if ((undefined4 **)DAT_711e9abc != &DAT_711e9ac0) {
    do {
      if (*(char *)(puVar12[5] + param_2 + 4) != '\0') {
        iVar5 = puVar12[4];
        if (iVar5 != -1) {
          puVar12 = &DAT_711e9ac0;
          puVar10 = DAT_711e9ac0;
          do {
            puVar9 = puVar12;
            if (puVar10 == (undefined4 *)0x0) {
LAB_71644758:
              puVar6 = (undefined4 *)thunk_MwhHq(0x18);
              *puVar6 = 0;
              puVar6[4] = iVar5;
              puVar6[5] = 0;
              puVar6[1] = 0;
              puVar6[2] = puVar9;
              *puVar12 = puVar6;
              puVar10 = puVar6;
              if ((undefined4 *)*DAT_711e9abc != (undefined4 *)0x0) {
                puVar10 = (undefined4 *)*puVar12;
                DAT_711e9abc = (undefined4 *)*DAT_711e9abc;
              }
              FUN_712f807c(DAT_711e9ac0,puVar10);
              DAT_711e9ac4 = DAT_711e9ac4 + 1;
LAB_71644870:
              puVar12 = (undefined4 *)puVar6[5];
              if ((param_1 != 2) && (*(char *)((int)puVar12 + param_2 + 4) == '\0')) {
                return 1;
              }
              bVar1 = (**(code **)(*(int *)*puVar12 + 8))
                                ((int *)*puVar12,param_1,param_2,param_3,param_4);
              if ((param_1 != 1) && ((param_1 == 2 & (bVar1 ^ 1)) == 0)) {
                return 0;
              }
              *(bool *)((int)puVar12 + param_2 + 4) = param_1 != 1;
              return 0;
            }
            while (puVar6 = puVar10, (int)puVar6[4] <= iVar5) {
              if (iVar5 <= (int)puVar6[4]) goto LAB_71644870;
              puVar10 = (undefined4 *)puVar6[1];
              if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
                puVar12 = puVar6 + 1;
                puVar9 = puVar6;
                goto LAB_71644758;
              }
            }
            puVar10 = (undefined4 *)*puVar6;
            puVar12 = puVar6;
          } while( true );
        }
        break;
      }
      puVar10 = (undefined4 *)puVar12[1];
      if ((undefined4 *)puVar12[1] == (undefined4 *)0x0) {
        do {
          puVar9 = (undefined4 *)puVar12[2];
          bVar13 = (undefined4 *)*puVar9 != puVar12;
          puVar12 = puVar9;
        } while (bVar13);
      }
      else {
        do {
          puVar9 = puVar10;
          puVar10 = (undefined4 *)*puVar9;
        } while ((undefined4 *)*puVar9 != (undefined4 *)0x0);
      }
      puVar12 = puVar9;
    } while ((undefined4 **)puVar9 != &DAT_711e9ac0);
    if ((param_1 == 2) && (puVar12 = DAT_711e9abc, (undefined4 **)DAT_711e9abc != &DAT_711e9ac0)) {
      do {
        puVar10 = (undefined4 *)puVar12[5];
        piVar7 = (int *)*puVar10;
        iVar5 = (**(code **)(*piVar7 + 8))(piVar7,2,param_2,param_3,param_4);
        if (iVar5 == 0) {
          *(undefined1 *)((int)puVar10 + param_2 + 4) = 1;
          return 0;
        }
        puVar10 = (undefined4 *)puVar12[1];
        puVar9 = puVar12;
        if ((undefined4 *)puVar12[1] == (undefined4 *)0x0) {
          do {
            puVar12 = (undefined4 *)puVar9[2];
            bVar13 = (undefined4 *)*puVar12 != puVar9;
            puVar9 = puVar12;
          } while (bVar13);
        }
        else {
          do {
            puVar12 = puVar10;
            puVar10 = (undefined4 *)*puVar12;
          } while ((undefined4 *)*puVar12 != (undefined4 *)0x0);
        }
      } while ((undefined4 **)puVar12 != &DAT_711e9ac0);
      return 1;
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_71644d8c
// Entry: 0x71644d8c | Size: 32 bytes
// =========================================================================

void FUN_71644d8c(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_70b0ee6c;
  return;
}


// =========================================================================
// Function: FUN_71644de4
// Entry: 0x71644de4 | Size: 44 bytes
// =========================================================================

undefined4 * FUN_71644de4(undefined4 *param_1)

{
  *param_1 = &DAT_70b0ee6c;
  thunk_SaRJGTToWvfSPYVoQ_naeS(param_1 + 1);
  return param_1;
}


// =========================================================================
// Function: FUN_71644e80
// Entry: 0x71644e80 | Size: 28 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

int * FUN_71644e80(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_cr2;
  undefined4 in_cr9;
  undefined4 in_cr12;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_2 + 4);
    uVar1 = imp_pthread_self();
    *(undefined4 *)(param_2 + 8) = uVar1;
    return param_1;
  }
  thunk_KLoalMQagZzrpvz();
  coprocessor_function2(7,0xf,1,in_cr9,in_cr12,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_71644f50
// Entry: 0x71644f50 | Size: 24 bytes
// =========================================================================

int * FUN_71644f50(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 4);
  *(undefined4 *)(iVar1 + 8) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71644fd4
// Entry: 0x71644fd4 | Size: 5024 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71644fd4(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint auStack_1d4 [2];
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_1b4;
  undefined *apuStack_1b0 [8];
  uint auStack_190 [5];
  undefined *apuStack_17c [7];
  undefined4 uStack_160;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_124;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uVar7 = imp_strlen(param_1);
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_12c);
  }
  if (uVar7 < 0xb) {
    uVar20 = (uint)&uStack_12c | 1;
    uStack_12c = CONCAT31(uStack_12c._1_3_,(char)(uVar7 << 1));
    if (uVar7 != 0) goto LAB_71645064;
  }
  else {
    uVar20 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_12c = (uVar7 | 7) + 2;
    uStack_128 = uVar7;
    uStack_124 = uVar20;
LAB_71645064:
    imp___aeabi_memcpy(uVar20,param_1,uVar7);
  }
  *(undefined1 *)(uVar20 + uVar7) = 0;
  uStack_160 = 0;
  puStack_1b8 = &DAT_70b14084;
  apuStack_17c[0] = &LAB_70b14098;
  uStack_1b4 = 0;
  thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_17c,apuStack_1b0);
  puStack_1b8 = &DAT_70b1404c;
  uStack_134 = 0;
  uStack_130 = 0xffffffff;
  apuStack_17c[0] = &DAT_70b14060;
  thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(apuStack_1b0);
  auStack_190[0] = 0;
  auStack_190[1] = 0;
  auStack_190[4] = 8;
  auStack_190[2] = 0;
  auStack_190[3] = 0;
  apuStack_1b0[0] = &DAT_70b13d18;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (auStack_190,&uStack_12c);
  FUN_714d2e60(apuStack_1b0);
  if ((uStack_12c & 1) != 0) {
    thunk_qNQrlu(uStack_124);
  }
  uStack_1c0 = 0;
  uStack_1c4 = 0;
  uStack_1c8 = 0;
  piVar8 = (int *)FUN_71647d54(&puStack_1b8,&uStack_1c8);
  if ((*(byte *)((int)piVar8 + *(int *)(*piVar8 + -0xc) + 0x10) & 5) != 0) goto LAB_71645174;
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79c4);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79b4);
    *puVar15 = 0xdcd3020;
    puVar15[1] = 0x6f31b8fd;
    *(undefined1 *)(puVar15 + 2) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b2b8,puVar15,&DAT_70b0e000);
    puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79c4);
    *puVar16 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79b4);
  if (pbVar10[8] != 0) {
    pbVar10[8] = 0;
    *pbVar10 = *pbVar10 ^ 0xf;
    pbVar10[1] = pbVar10[1] ^ 0x59;
    pbVar10[2] = pbVar10[2] ^ 0xa3;
    pbVar10[3] = pbVar10[3] ^ 0x7b;
    pbVar10[4] = pbVar10[4] ^ 0x95;
    pbVar10[5] = pbVar10[5] ^ 0xcd;
    pbVar10[6] = pbVar10[6] ^ 0x55;
    pbVar10[7] = pbVar10[7] ^ 0x6f;
  }
  uVar20 = imp_strlen(pbVar10);
  uVar7 = uStack_1c4;
  if ((uStack_1c8 & 1) == 0) {
    uVar7 = uStack_1c8 >> 1 & 0x7f;
  }
  if (uVar20 == uVar7) {
    if (uVar20 == 0xffffffff) goto LAB_716463a4;
    uVar7 = uStack_1c0;
    if ((uStack_1c8 & 1) == 0) {
      uVar7 = (uint)&uStack_1c8 | 1;
    }
    iVar11 = imp_memcmp(uVar7,pbVar10);
    if (iVar11 == 0) {
      DAT_700c79b0 = DAT_700c79b0 ^ 1;
      FUN_7163ef6c();
      goto LAB_71645174;
    }
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79e4);
  if (*pcVar9 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79d4);
    *puVar15 = 0x14fc8d42;
    puVar15[1] = 0x6d68a0eb;
    *(undefined1 *)((int)puVar15 + 10) = 1;
    *(undefined2 *)(puVar15 + 2) = 0xe508;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7163efe0,puVar15,&DAT_70b0e000);
    puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79e4);
    *puVar16 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79d4);
  if (pbVar10[10] != 0) {
    *pbVar10 = *pbVar10 ^ 0x6d;
    pbVar10[1] = pbVar10[1] ^ 0xe5;
    pbVar10[2] = pbVar10[2] ^ 0x99;
    pbVar10[3] = pbVar10[3] ^ 0x75;
    pbVar10[10] = 0;
    pbVar10[4] = pbVar10[4] ^ 0x8f;
    pbVar10[5] = pbVar10[5] ^ 0xcd;
    pbVar10[6] = pbVar10[6] ^ 7;
    pbVar10[7] = pbVar10[7] ^ 0x1b;
    pbVar10[8] = pbVar10[8] ^ 0x6d;
    pbVar10[9] = pbVar10[9] ^ 0xe5;
  }
  uVar20 = imp_strlen(pbVar10);
  uVar7 = uStack_1c4;
  if ((uStack_1c8 & 1) == 0) {
    uVar7 = uStack_1c8 >> 1 & 0x7f;
  }
  if (uVar20 != uVar7) {
LAB_716453e8:
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a44);
    if (*pcVar9 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a34);
      *puVar15 = 0x11335174;
      *(undefined1 *)(puVar15 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b350,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a44);
      *puVar16 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a34);
    if (pbVar10[4] != 0) {
      pbVar10[4] = 0;
      *pbVar10 = *pbVar10 ^ 0x5b;
      pbVar10[1] = pbVar10[1] ^ 0x35;
      pbVar10[2] = pbVar10[2] ^ 0x5f;
      pbVar10[3] = pbVar10[3] ^ 0x11;
    }
    uVar20 = imp_strlen(pbVar10);
    uVar7 = uStack_1c4;
    if ((uStack_1c8 & 1) == 0) {
      uVar7 = uStack_1c8 >> 1 & 0x7f;
    }
    if (uVar20 == uVar7) {
      if (uVar20 == 0xffffffff) goto LAB_716463a4;
      uVar7 = uStack_1c0;
      if ((uStack_1c8 & 1) == 0) {
        uVar7 = (uint)&uStack_1c8 | 1;
      }
      iVar11 = imp_memcmp(uVar7,pbVar10);
      if (iVar11 == 0) {
        DAT_711ad119 = DAT_711ad119 ^ 1;
        goto LAB_71645174;
      }
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a64);
    if (*pcVar9 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a54);
      *(undefined2 *)(puVar15 + 3) = 0x1f1;
      *puVar15 = 0x91142dfe;
      puVar15[1] = 0xb4eb3895;
      puVar15[2] = 0x911834a2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b374,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a64);
      *puVar16 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a54);
    if (pbVar10[0xd] != 0) {
      *pbVar10 = *pbVar10 ^ 0xd1;
      pbVar10[1] = pbVar10[1] ^ 0x5f;
      pbVar10[2] = pbVar10[2] ^ 0x71;
      pbVar10[3] = ~pbVar10[3];
      pbVar10[0xd] = 0;
      pbVar10[4] = pbVar10[4] ^ 0xf1;
      pbVar10[5] = pbVar10[5] ^ 0x5d;
      pbVar10[6] = pbVar10[6] ^ 0x99;
      pbVar10[7] = pbVar10[7] ^ 0xeb;
      pbVar10[8] = pbVar10[8] ^ 0xd1;
      pbVar10[9] = pbVar10[9] ^ 0x5f;
      pbVar10[10] = pbVar10[10] ^ 0x71;
      pbVar10[0xb] = ~pbVar10[0xb];
      pbVar10[0xc] = pbVar10[0xc] ^ 0xf1;
    }
    uVar20 = imp_strlen(pbVar10);
    uVar7 = uStack_1c4;
    if ((uStack_1c8 & 1) == 0) {
      uVar7 = uStack_1c8 >> 1 & 0x7f;
    }
    if (uVar20 == uVar7) {
      if (uVar20 == 0xffffffff) goto LAB_716463a4;
      uVar7 = uStack_1c0;
      if ((uStack_1c8 & 1) == 0) {
        uVar7 = (uint)&uStack_1c8 | 1;
      }
      iVar11 = imp_memcmp(uVar7,pbVar10);
      if (iVar11 == 0) {
        piVar8 = (int *)thunk_YfGizadYCmHjF_cpgUnvQPyzRrIKzpCOxLljYRAMLr_CrdjBlGCsbko
                                  (&puStack_1b8,auStack_1d4);
        uVar12 = DAT_712017f8;
        if ((*(byte *)((int)piVar8 + *(int *)(*piVar8 + -0xc) + 0x10) & 5) == 0) {
          uVar7 = FUN_7164823c();
          imp___aeabi_memclr4(&uStack_128,0x30);
          uStack_12c = uVar7;
          uVar14 = FUN_713a0424(&uStack_12c,0);
          uVar14 = FUN_713a0424(uVar14,auStack_1d4[0]);
          FUN_7164814c(uVar12,uVar14);
          FUN_7164862c(&uStack_12c);
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ac4);
          if (*pcVar9 == '\0') {
            puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ab4);
            *(undefined1 *)((int)puVar15 + 0x11) = 1;
            uVar3 = DAT_700837e4;
            uVar14 = DAT_700837e0;
            uVar12 = DAT_700837dc;
            *puVar15 = DAT_700837d8;
            puVar15[1] = uVar12;
            puVar15[2] = uVar14;
            puVar15[3] = uVar3;
            *(undefined1 *)(puVar15 + 4) = DAT_700837e8;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b40c,puVar15,&DAT_70b0e000);
            puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ac4);
            *puVar16 = 1;
          }
          iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ab4);
          if (*(char *)(iVar11 + 0x11) != '\0') {
            uVar7 = 0;
            uVar20 = 0;
            do {
              iVar19 = (uVar7 & 7) * 8;
              uVar18 = iVar19 - 0x20;
              bVar17 = (byte)(0x8feb1737 >> iVar19) |
                       (byte)(0x4dc13fb3 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar18) {
                bVar17 = (byte)(0x4dc13fb3 >> (uVar18 & 0xff));
              }
              *(byte *)(iVar11 + uVar7) = *(byte *)(iVar11 + uVar7) ^ bVar17;
              bVar21 = 0xfffffffe < uVar7;
              bVar1 = uVar20 == 0;
              bVar2 = (0xf < uVar7) <= uVar20;
              uVar7 = uVar7 + 1;
              uVar20 = uVar20 + bVar21;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar11 + 0x11) = 0;
          }
          FUN_716486e8(iVar11,auStack_1d4[0]);
        }
        else {
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a84);
          if (*pcVar9 == '\0') {
            puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a74);
            *(undefined1 *)(puVar15 + 6) = 1;
            uVar6 = DAT_700837d4;
            uVar4 = DAT_700837d0;
            uVar3 = DAT_700837cc;
            uVar14 = DAT_700837c8;
            uVar12 = DAT_700837c4;
            *puVar15 = DAT_700837c0;
            puVar15[1] = uVar12;
            puVar15[2] = uVar14;
            puVar15[3] = uVar3;
            puVar15[4] = uVar4;
            puVar15[5] = uVar6;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b3a4,puVar15,&DAT_70b0e000);
            puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a84);
            *puVar16 = 1;
          }
          iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a74);
          if (*(char *)(iVar11 + 0x18) != '\0') {
            uVar7 = 0;
            uVar20 = 0;
            do {
              iVar19 = (uVar7 & 7) * 8;
              uVar18 = iVar19 - 0x20;
              bVar17 = (byte)(0x7d7f3d23 >> iVar19) |
                       (byte)(-0x7270fe83 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar18) {
                bVar17 = (byte)(0x8d8f017d >> (uVar18 & 0xff));
              }
              *(byte *)(iVar11 + uVar7) = *(byte *)(iVar11 + uVar7) ^ bVar17;
              bVar21 = 0xfffffffe < uVar7;
              bVar1 = uVar20 == 0;
              bVar2 = (0x16 < uVar7) <= uVar20;
              uVar7 = uVar7 + 1;
              uVar20 = uVar20 + bVar21;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar11 + 0x18) = 0;
          }
          FUN_71647fdc();
        }
        goto LAB_71645174;
      }
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ae4);
    if (*pcVar9 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ad4);
      *(undefined1 *)(puVar15 + 3) = 1;
      *puVar15 = 0xdb0431c4;
      puVar15[1] = 0x4057545f;
      puVar15[2] = 0xb509269d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b440,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ae4);
      *puVar16 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ad4);
    if (pbVar10[0xc] != 0) {
      *pbVar10 = *pbVar10 ^ 0xeb;
      pbVar10[1] = pbVar10[1] ^ 0x43;
      pbVar10[2] = pbVar10[2] ^ 0x61;
      pbVar10[3] = pbVar10[3] ^ 0xb5;
      pbVar10[0xc] = 0;
      pbVar10[4] = pbVar10[4] ^ 0x3b;
      pbVar10[5] = pbVar10[5] ^ 0x31;
      pbVar10[6] = pbVar10[6] ^ 0x25;
      pbVar10[7] = pbVar10[7] ^ 0x1f;
      pbVar10[8] = pbVar10[8] ^ 0xeb;
      pbVar10[9] = pbVar10[9] ^ 0x43;
      pbVar10[10] = pbVar10[10] ^ 0x61;
      pbVar10[0xb] = pbVar10[0xb] ^ 0xb5;
    }
    uVar20 = imp_strlen(pbVar10);
    uVar7 = uStack_1c4;
    if ((uStack_1c8 & 1) == 0) {
      uVar7 = uStack_1c8 >> 1 & 0x7f;
    }
    if (uVar20 == uVar7) {
      if (uVar20 == 0xffffffff) {
LAB_716463a4:
                    /* WARNING: Subroutine does not return */
        FUN_712f6b48(&uStack_1c8);
      }
      uVar7 = uStack_1c0;
      if ((uStack_1c8 & 1) == 0) {
        uVar7 = (uint)&uStack_1c8 | 1;
      }
      iVar11 = imp_memcmp(uVar7,pbVar10);
      if (iVar11 == 0) {
        piVar8 = (int *)thunk_YfGizadYCmHjF_cpgUnvQPyzRrIKzpCOxLljYRAMLr_CrdjBlGCsbko
                                  (&puStack_1b8,&uStack_12c);
        if ((*(uint *)((int)piVar8 + *(int *)(*piVar8 + -0xc) + 0x10) & 5) == 0) {
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b24);
          if (*pcVar9 == '\0') {
            puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b14);
            *(undefined1 *)(puVar15 + 4) = 1;
            *puVar15 = 0x576d48a7;
            puVar15[1] = 0x9132fd76;
            puVar15[2] = 0x5b665bd5;
            puVar15[3] = 0xf533aa33;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b4a4,puVar15,&DAT_70b0e000);
            puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b24);
            *puVar16 = 1;
          }
          pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b14);
          if (pbVar10[0x10] != 0) {
            *pbVar10 = *pbVar10 ^ 0xf5;
            pbVar10[1] = pbVar10[1] ^ 0x2d;
            pbVar10[2] = pbVar10[2] ^ 3;
            pbVar10[3] = pbVar10[3] ^ 0x33;
            pbVar10[0x10] = 0;
            pbVar10[4] = pbVar10[4] ^ 0x13;
            pbVar10[5] = pbVar10[5] ^ 0x8f;
            pbVar10[6] = pbVar10[6] ^ 0x57;
            pbVar10[7] = pbVar10[7] ^ 0xf5;
            pbVar10[8] = pbVar10[8] ^ 0xf5;
            pbVar10[9] = pbVar10[9] ^ 0x2d;
            pbVar10[10] = pbVar10[10] ^ 3;
            pbVar10[0xb] = pbVar10[0xb] ^ 0x33;
            pbVar10[0xc] = pbVar10[0xc] ^ 0x13;
            pbVar10[0xd] = pbVar10[0xd] ^ 0x8f;
            pbVar10[0xe] = pbVar10[0xe] ^ 0x57;
            pbVar10[0xf] = pbVar10[0xf] ^ 0xf5;
          }
          FUN_716486e8(pbVar10,uStack_12c);
        }
        else {
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b04);
          if (*pcVar9 == '\0') {
            puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7af4);
            *(undefined1 *)((int)puVar15 + 0x17) = 1;
            uVar4 = DAT_70083800;
            uVar3 = DAT_700837fc;
            uVar14 = DAT_700837f8;
            uVar12 = DAT_700837f4;
            *puVar15 = DAT_700837f0;
            puVar15[1] = uVar12;
            puVar15[2] = uVar14;
            puVar15[3] = uVar3;
            puVar15[4] = uVar4;
            uVar5 = DAT_70083806;
            *(undefined2 *)(puVar15 + 5) = DAT_70083804;
            *(undefined1 *)((int)puVar15 + 0x16) = uVar5;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b46c,puVar15,&DAT_70b0e000);
            puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b04);
            *puVar16 = 1;
          }
          iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7af4);
          if (*(char *)(iVar11 + 0x17) != '\0') {
            uVar7 = 0;
            uVar20 = 0;
            do {
              iVar19 = (uVar7 & 7) * 8;
              bVar17 = (byte)(0xb5d3957b >> iVar19) |
                       (byte)(0x2b3dcfb5 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
              uVar18 = iVar19 - 0x20;
              if (-1 < (int)uVar18) {
                bVar17 = (byte)(0x2b3dcfb5 >> (uVar18 & 0xff));
              }
              *(byte *)(iVar11 + uVar7) = *(byte *)(iVar11 + uVar7) ^ bVar17;
              bVar21 = 0xfffffffe < uVar7;
              bVar1 = uVar20 == 0;
              bVar2 = (0x15 < uVar7) <= uVar20;
              uVar7 = uVar7 + 1;
              uVar20 = uVar20 + bVar21;
            } while (bVar1 && bVar2);
            *(undefined1 *)(iVar11 + 0x17) = 0;
          }
          FUN_71647fdc();
        }
        goto LAB_71645174;
      }
    }
    if (DAT_711f6bf8 != '\0') {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b44);
      if (*pcVar9 == '\0') {
        puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b34);
        *puVar15 = 0xe75298e;
        *(undefined1 *)((int)puVar15 + 7) = 1;
        *(undefined4 *)((int)puVar15 + 3) = 0x3b35170e;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b4d4,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b44);
        *puVar16 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b34);
      if (pbVar10[7] != 0) {
        pbVar10[7] = 0;
        *pbVar10 = *pbVar10 ^ 0xa1;
        pbVar10[1] = pbVar10[1] ^ 0x5d;
        pbVar10[2] = pbVar10[2] ^ 5;
        pbVar10[3] = pbVar10[3] ^ 0x67;
        pbVar10[4] = pbVar10[4] ^ 0x79;
        pbVar10[5] = pbVar10[5] ^ 0x41;
        pbVar10[6] = pbVar10[6] ^ 0x3b;
      }
      iVar11 = FUN_7152e8b0(&uStack_1c8);
      if (iVar11 == 0) {
        if (DAT_711f6bf8 != '\0') {
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b64);
          if (*pcVar9 == '\0') {
            puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b54);
            *puVar15 = 0xdcd4932a;
            *(undefined2 *)(puVar15 + 1) = 399;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b4fc,puVar15,&DAT_70b0e000);
            puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b64);
            *puVar16 = 1;
          }
          pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b54);
          if (pbVar10[5] != 0) {
            pbVar10[5] = 0;
            *pbVar10 = *pbVar10 ^ 5;
            pbVar10[1] = pbVar10[1] ^ 0xe3;
            pbVar10[2] = pbVar10[2] ^ 0xbb;
            pbVar10[3] = pbVar10[3] ^ 0xaf;
            pbVar10[4] = pbVar10[4] ^ 0x8f;
          }
          iVar11 = FUN_7152e8b0(&uStack_1c8);
          if (iVar11 != 0) {
            thunk_CxaXkPjKacYdGgVPRepRQQeuSFqmqlBeqyeTzJUtvsNWHIwfseWDqyq(&puStack_1b8,&uStack_12c);
            thunk_CxaXkPjKacYdGgVPRepRQQeuSFqmqlBeqyeTzJUtvsNWHIwfseWDqyq(&puStack_1b8,auStack_1d4);
            thunk_CxaXkPjKacYdGgVPRepRQQeuSFqmqlBeqyeTzJUtvsNWHIwfseWDqyq(&puStack_1b8,&uStack_1e0);
            uVar12 = FUN_716488a8(DAT_711a3938);
            FUN_715601e8(uVar12,uStack_12c,auStack_1d4[0],uStack_1e0);
          }
        }
      }
      else {
        thunk_YfGizadYCmHjF_cpgUnvQPyzRrIKzpCOxLljYRAMLr_CrdjBlGCsbko(&puStack_1b8,&uStack_12c);
        uVar12 = FUN_716488a8(DAT_711a3938);
        FUN_715c426c(uVar12,uStack_12c & 0xff);
      }
    }
    goto LAB_71645174;
  }
  if (uVar20 == 0xffffffff) goto LAB_716463a4;
  uVar7 = uStack_1c0;
  if ((uStack_1c8 & 1) == 0) {
    uVar7 = (uint)&uStack_1c8 | 1;
  }
  iVar11 = imp_memcmp(uVar7,pbVar10);
  if (iVar11 != 0) goto LAB_716453e8;
  DAT_711e9ac8 = DAT_711e9ac8 ^ 1;
  if (DAT_711e9ac8 == 0) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a24);
    if (*pcVar9 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a14);
      *(undefined1 *)(puVar15 + 6) = 1;
      uVar6 = DAT_700837bc;
      uVar4 = DAT_700837b8;
      uVar3 = DAT_700837b4;
      uVar14 = DAT_700837b0;
      uVar12 = DAT_700837ac;
      *puVar15 = DAT_700837a8;
      puVar15[1] = uVar12;
      puVar15[2] = uVar14;
      puVar15[3] = uVar3;
      puVar15[4] = uVar4;
      puVar15[5] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b318,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a24);
      *puVar16 = 1;
    }
    iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a14);
    pcVar9 = (char *)(iVar11 + 0x18);
    if (*pcVar9 != '\0') {
      uVar7 = 0;
      uVar20 = 0;
      do {
        iVar19 = (uVar7 & 7) * 8;
        uVar18 = iVar19 - 0x20;
        bVar17 = (byte)(0xa37d1fd3 >> iVar19) |
                 (byte)(-0x2b00e43 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar17 = (byte)(0xfd4ff1bd >> (uVar18 & 0xff));
        }
        *(byte *)(iVar11 + uVar7) = *(byte *)(iVar11 + uVar7) ^ bVar17;
        bVar21 = 0xfffffffe < uVar7;
        bVar1 = uVar20 == 0;
        bVar2 = (0x16 < uVar7) <= uVar20;
        uVar7 = uVar7 + 1;
        uVar20 = uVar20 + bVar21;
      } while (bVar1 && bVar2);
      goto LAB_71645b9c;
    }
  }
  else {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a04);
    if (*pcVar9 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79f4);
      *(undefined1 *)((int)puVar15 + 0x17) = 1;
      uVar4 = DAT_700837a0;
      uVar3 = DAT_7008379c;
      uVar14 = DAT_70083798;
      uVar12 = DAT_70083794;
      *puVar15 = DAT_70083790;
      puVar15[1] = uVar12;
      puVar15[2] = uVar14;
      puVar15[3] = uVar3;
      puVar15[4] = uVar4;
      uVar5 = DAT_700837a6;
      *(undefined2 *)(puVar15 + 5) = DAT_700837a4;
      *(undefined1 *)((int)puVar15 + 0x16) = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b2e0,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a04);
      *puVar16 = 1;
    }
    iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c79f4);
    pcVar9 = (char *)(iVar11 + 0x17);
    if (*pcVar9 != '\0') {
      uVar7 = 0;
      uVar20 = 0;
      do {
        iVar19 = (uVar7 & 7) * 8;
        bVar17 = (byte)(0xa37d1fd3 >> iVar19) |
                 (byte)(-0x2b00e43 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar18 = iVar19 - 0x20;
        if (-1 < (int)uVar18) {
          bVar17 = (byte)(0xfd4ff1bd >> (uVar18 & 0xff));
        }
        *(byte *)(iVar11 + uVar7) = *(byte *)(iVar11 + uVar7) ^ bVar17;
        bVar21 = 0xfffffffe < uVar7;
        bVar1 = uVar20 == 0;
        bVar2 = (0x15 < uVar7) <= uVar20;
        uVar7 = uVar7 + 1;
        uVar20 = uVar20 + bVar21;
      } while (bVar1 && bVar2);
LAB_71645b9c:
      *pcVar9 = '\0';
    }
  }
  uVar7 = imp_strlen(iVar11);
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_1e0);
  }
  if (uVar7 < 0xb) {
    uStack_1e0 = CONCAT31(uStack_1e0._1_3_,(char)(uVar7 << 1));
    uVar20 = (uint)&uStack_1e0 | 1;
    if (uVar7 != 0) goto LAB_71645bfc;
  }
  else {
    uVar20 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_1e0 = (uVar7 | 7) + 2;
    uStack_1dc = uVar7;
    uStack_1d8 = uVar20;
LAB_71645bfc:
    imp___aeabi_memmove(uVar20,iVar11,uVar7);
  }
  *(undefined1 *)(uVar20 + uVar7) = 0;
  FUN_717303d0(auStack_1d4,&uStack_1e0);
  uVar7 = uStack_1cc;
  if ((auStack_1d4[0] & 1) == 0) {
    uVar7 = (uint)auStack_1d4 | 1;
  }
  imp___strcpy_chk(&uStack_12c,uVar7,0xff);
  pbVar10 = (byte *)0x71645c6c;
  uVar7 = uStack_12c & 0xff;
  if (uVar7 != 0) {
    pbVar13 = (byte *)((int)&uStack_12c + 1);
    do {
      if (uVar7 < 0x20) {
        pbVar13[-1] = 0x20;
      }
      pbVar10 = pbVar13 + 1;
      uVar7 = (uint)*pbVar13;
      pbVar13 = pbVar10;
    } while (uVar7 != 0);
  }
  FUN_71649964(pbVar10,&uStack_12c,0,0xbebebeff);
  if (((byte)auStack_1d4[0] & 1) != 0) {
    thunk_qNQrlu(uStack_1cc);
  }
  if ((uStack_1e0 & 1) != 0) {
    thunk_qNQrlu(uStack_1d8);
  }
LAB_71645174:
  if ((uStack_1c8 & 1) != 0) {
    thunk_qNQrlu(uStack_1c0);
  }
  puStack_1b8 = &DAT_70b1404c;
  apuStack_17c[0] = &DAT_70b14060;
  apuStack_1b0[0] = &DAT_70b13d18;
  if ((auStack_190[0] & 1) != 0) {
    thunk_qNQrlu(auStack_190[2]);
  }
  thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(apuStack_1b0);
  thunk_DhNFDYkimsodFXaqFoxFvGpEvVmaAoNDguokgwPHfvblltnSiOJqIZ(&puStack_1b8,&DAT_70b1406c);
  thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_17c);
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_2c);
}


// =========================================================================
// Function: FUN_71647d54
// Entry: 0x71647d54 | Size: 424 bytes
// =========================================================================

int * FUN_71647d54(int *param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_2c [7];
  char cStack_25;
  
  thunk_nqAEaOOy_vLgDDkdjbYGGQxxpzalvCKL_eNuLvkW_puNQiABmbYhdGzNHfwsCZvhS(&cStack_25,param_1,0);
  if (cStack_25 != '\0') {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    iVar5 = *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc);
    thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(auStack_2c);
    iVar1 = thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(auStack_2c,&DAT_71204b20);
    thunk_foeUZaYNSPyOrNM_GcbNrfl(auStack_2c);
    iVar4 = 0;
    iVar6 = iVar5;
    if (iVar5 < 2) {
      iVar6 = 1;
    }
    if (iVar5 < 1) {
      iVar6 = 0x7fffffff;
    }
    do {
      piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x18);
      if ((byte *)piVar2[3] == (byte *)piVar2[4]) {
        uVar3 = (**(code **)(*piVar2 + 0x24))();
        if (uVar3 != 0xffffffff) goto LAB_71647e44;
        uVar3 = 2;
LAB_71647ebc:
        if (iVar4 == 0) {
          uVar3 = uVar3 | 4;
        }
        *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) = 0;
        goto LAB_71647ed8;
      }
      uVar3 = (uint)*(byte *)piVar2[3];
LAB_71647e44:
      if ((-1 < (char)uVar3) && ((*(byte *)(*(int *)(iVar1 + 8) + (uVar3 & 0x7f) * 4) & 1) != 0)) {
        uVar3 = 0;
        goto LAB_71647ebc;
      }
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (param_2,uVar3 & 0xff);
      piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x18);
      if (piVar2[3] == piVar2[4]) {
        (**(code **)(*piVar2 + 0x28))();
      }
      else {
        piVar2[3] = piVar2[3] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar6 != iVar4);
    uVar3 = 0;
    *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) = 0;
LAB_71647ed8:
    iVar6 = (int)param_1 + *(int *)(*param_1 + -0xc);
    thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd(iVar6,*(uint *)(iVar6 + 0x10) | uVar3);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71647fdc
// Entry: 0x71647fdc | Size: 56 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71647fdc(undefined4 param_1)

{
  byte *pbVar1;
  byte abStack_113 [255];
  int iStack_14;
  
  iStack_14 = _ext___stack_chk_guard;
  imp___strcpy_chk(abStack_113,param_1,0xff);
  if (abStack_113[0] != 0) {
    pbVar1 = abStack_113;
    do {
      pbVar1 = pbVar1 + 1;
      if (abStack_113[0] < 0x20) {
        pbVar1[-1] = 0x20;
      }
      abStack_113[0] = *pbVar1;
    } while (abStack_113[0] != 0);
  }
  FUN_71649964(0,abStack_113,0,0xbebebeff);
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7164814c
// Entry: 0x7164814c | Size: 104 bytes
// =========================================================================

void FUN_7164814c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1 + 0x34);
  piVar1 = (int *)thunk_MwhHq(0x3c);
  *piVar1 = 0;
  piVar1[1] = 0;
  FUN_713a10f8(piVar1 + 2,param_2);
  piVar3 = (int *)(param_1 + 0x38);
  iVar2 = *piVar3;
  *piVar1 = iVar2;
  piVar1[1] = (int)piVar3;
  *(int **)(iVar2 + 4) = piVar1;
  *piVar3 = (int)piVar1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0x34);
  return;
}


// =========================================================================
// Function: FUN_7164823c
// Entry: 0x7164823c | Size: 408 bytes
// =========================================================================

undefined4 FUN_7164823c(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711e9ad4 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711e9ad4), iVar1 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7aa4);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a94);
      *(undefined2 *)(puVar4 + 3) = 0x197;
      *puVar4 = 0x7be3f613;
      puVar4[1] = 0x6d2459f2;
      puVar4[2] = 0x6beef60b;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b3dc,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7aa4);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7a94);
    if (pbVar3[0xd] != 0) {
      *pbVar3 = *pbVar3 ^ 0x61;
      pbVar3[1] = pbVar3[1] ^ 0x93;
      pbVar3[2] = pbVar3[2] ^ 0x8d;
      pbVar3[3] = pbVar3[3] ^ 0x1f;
      pbVar3[0xd] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x97;
      pbVar3[5] = pbVar3[5] ^ 0x2b;
      pbVar3[6] = pbVar3[6] ^ 0x6b;
      pbVar3[7] = pbVar3[7] ^ 0xf;
      pbVar3[8] = pbVar3[8] ^ 0x61;
      pbVar3[9] = pbVar3[9] ^ 0x93;
      pbVar3[10] = pbVar3[10] ^ 0x8d;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x1f;
      pbVar3[0xc] = pbVar3[0xc] ^ 0x97;
    }
    DAT_711e9ad0 = FUN_71885ba4(pbVar3,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711e9ad4);
  }
  return DAT_711e9ad0;
}


// =========================================================================
// Function: FUN_7164862c
// Entry: 0x7164862c | Size: 80 bytes
// =========================================================================

int FUN_7164862c(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_716486e8
// Entry: 0x716486e8 | Size: 68 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_716486e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  code *UNRECOVERED_JUMPTABLE;
  byte abStack_130 [256];
  int iStack_30;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iStack_30 = _ext___stack_chk_guard;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  imp___aeabi_memclr8(abStack_130,0xff);
  imp___vsnprintf_chk(abStack_130,0xff,0,0xff,param_1,&uStack_c);
  pbVar1 = &LAB_71648774;
  if (abStack_130[0] != 0) {
    pbVar2 = (byte *)((uint)abStack_130 | 1);
    do {
      if (abStack_130[0] < 0x20) {
        pbVar2[-1] = 0x20;
      }
      pbVar1 = pbVar2 + 1;
      abStack_130[0] = *pbVar2;
      pbVar2 = pbVar1;
    } while (abStack_130[0] != 0);
  }
  FUN_71649964(pbVar1,abStack_130,0,0xbebebeff,param_1,0);
  if (_ext___stack_chk_guard == iStack_30) {
                    /* WARNING: Could not recover jumptable at 0x716487d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716488a8
// Entry: 0x716488a8 | Size: 76 bytes
// =========================================================================

int FUN_716488a8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x1389c);
  if (*piVar2 != 0) {
    return *piVar2;
  }
  iVar1 = FUN_713c301c(0);
  if (iVar1 != 0) {
    thunk_MwhHq(0x3a0);
    iVar1 = FUN_715ba834();
    *piVar2 = iVar1;
    return iVar1;
  }
  return *piVar2;
}


// =========================================================================
// Function: FUN_71648960
// Entry: 0x71648960 | Size: 24 bytes
// =========================================================================

void FUN_71648960(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar8 = FUN_7165306c(DAT_711e9ee4,1);
  if (iVar8 != 0) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b84);
    if (*pcVar9 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b74);
      *(undefined1 *)(puVar12 + 3) = 1;
      *puVar12 = 0x65a67cfd;
      puVar12[1] = 0x3e0c587a;
      puVar12[2] = 0x9a970e9;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b524,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b84);
      *puVar13 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b74);
    if (pbVar10[0xc] != 0) {
      *pbVar10 = *pbVar10 ^ 0x99;
      pbVar10[1] = pbVar10[1] ^ 0x15;
      pbVar10[2] = pbVar10[2] ^ 199;
      pbVar10[3] = pbVar10[3] ^ 9;
      pbVar10[0xc] = 0;
      pbVar10[4] = pbVar10[4] ^ 0x15;
      pbVar10[5] = pbVar10[5] ^ 0x3f;
      pbVar10[6] = pbVar10[6] ^ 0x53;
      pbVar10[7] = pbVar10[7] ^ 0x51;
      pbVar10[8] = pbVar10[8] ^ 0x99;
      pbVar10[9] = pbVar10[9] ^ 0x15;
      pbVar10[10] = pbVar10[10] ^ 199;
      pbVar10[0xb] = pbVar10[0xb] ^ 9;
    }
    uVar11 = imp_strlen(pbVar10);
    if (0xfffffff7 < uVar11) goto LAB_7164901c;
    if (uVar11 < 0xb) {
      uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar11 << 1));
      uVar15 = (uint)&uStack_2c | 1;
      if (uVar11 != 0) goto LAB_71648ac0;
    }
    else {
      uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
      uStack_2c = (uVar11 | 7) + 2;
      uStack_28 = uVar11;
      uStack_24 = uVar15;
LAB_71648ac0:
      imp___aeabi_memmove(uVar15,pbVar10,uVar11);
    }
    bVar1 = false;
    *(undefined1 *)(uVar15 + uVar11) = 0;
    iVar8 = FUN_717c5e7c(&uStack_2c);
    if (iVar8 == 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ba4);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b94);
        *(undefined1 *)((int)puVar12 + 0x17) = 1;
        uVar5 = DAT_70083818;
        uVar4 = DAT_70083814;
        uVar3 = DAT_70083810;
        uVar14 = DAT_7008380c;
        *puVar12 = DAT_70083808;
        puVar12[1] = uVar14;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        puVar12[4] = uVar5;
        uVar6 = DAT_7008381e;
        *(undefined2 *)(puVar12 + 5) = DAT_7008381c;
        *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b550,puVar12,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ba4);
        *puVar13 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7b94);
      if (*(char *)(iVar8 + 0x17) != '\0') {
        uVar11 = 0;
        uVar15 = 0;
        do {
          iVar16 = (uVar11 & 7) * 8;
          uVar17 = iVar16 - 0x20;
          bVar7 = (byte)(0x9c71599 >> iVar16) |
                  (byte)(0x51533f15 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar17) {
            bVar7 = (byte)(0x51533f15 >> (uVar17 & 0xff));
          }
          *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
          bVar18 = 0xfffffffe < uVar11;
          bVar1 = uVar15 == 0;
          bVar2 = (0x15 < uVar11) <= uVar15;
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x17) = 0;
      }
      uVar11 = imp_strlen(iVar8);
      if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_38);
      }
      if (uVar11 < 0xb) {
        uVar15 = (uint)&uStack_38 | 1;
        uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar11 << 1));
        if (uVar11 != 0) goto LAB_71648bdc;
      }
      else {
        uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
        uStack_38 = (uVar11 | 7) + 2;
        uStack_34 = uVar11;
        uStack_30 = uVar15;
LAB_71648bdc:
        imp___aeabi_memmove(uVar15,iVar8,uVar11);
      }
      *(undefined1 *)(uVar15 + uVar11) = 0;
      iVar8 = FUN_717c5e7c(&uStack_38);
      if ((uStack_38 & 1) != 0) {
        thunk_qNQrlu(uStack_30);
      }
      bVar1 = iVar8 == 0;
    }
    if ((uStack_2c & 1) != 0) {
      thunk_qNQrlu(uStack_24);
    }
    if (bVar1) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bc4);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bb4);
        *(undefined1 *)((int)puVar12 + 0x11) = 1;
        uVar4 = DAT_7008382c;
        uVar3 = DAT_70083828;
        uVar14 = DAT_70083824;
        *puVar12 = DAT_70083820;
        puVar12[1] = uVar14;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        *(undefined1 *)(puVar12 + 4) = DAT_70083830;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b588,puVar12,&DAT_70b0e000);
        puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bc4);
        *puVar13 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bb4);
      if (*(char *)(iVar8 + 0x11) != '\0') {
        uVar11 = 0;
        uVar15 = 0;
        do {
          iVar16 = (uVar11 & 7) * 8;
          uVar17 = iVar16 - 0x20;
          bVar7 = (byte)(0xe5433955 >> iVar16) |
                  (byte)(-0x1a8a4ef3 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar17) {
            bVar7 = (byte)(0xe575b10d >> (uVar17 & 0xff));
          }
          *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
          bVar18 = 0xfffffffe < uVar11;
          bVar1 = uVar15 == 0;
          bVar2 = (0xf < uVar11) <= uVar15;
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + bVar18;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x11) = 0;
      }
      uVar11 = imp_strlen(iVar8);
      if (0xfffffff7 < uVar11) goto LAB_7164901c;
      if (uVar11 < 0xb) {
        uVar15 = (uint)&uStack_2c | 1;
        uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar11 << 1));
        if (uVar11 != 0) goto LAB_71648e30;
      }
      else {
        uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
        uStack_2c = (uVar11 | 7) + 2;
        uStack_28 = uVar11;
        uStack_24 = uVar15;
LAB_71648e30:
        imp___aeabi_memmove(uVar15,iVar8,uVar11);
      }
      *(undefined1 *)(uVar15 + uVar11) = 0;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      uVar14 = 2;
      if (DAT_712016a0 == 0 && DAT_711e9acc == 0) {
        uVar14 = 1;
      }
      goto LAB_71648e7c;
    }
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7be4);
  if (*pcVar9 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bd4);
    *(undefined1 *)((int)puVar12 + 0x11) = 1;
    uVar4 = DAT_70083844;
    uVar3 = DAT_70083840;
    uVar14 = DAT_7008383c;
    *puVar12 = DAT_70083838;
    puVar12[1] = uVar14;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined1 *)(puVar12 + 4) = DAT_70083848;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b5bc,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7be4);
    *puVar13 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bd4);
  if (*(char *)(iVar8 + 0x11) != '\0') {
    uVar11 = 0;
    uVar15 = 0;
    do {
      iVar16 = (uVar11 & 7) * 8;
      uVar17 = iVar16 - 0x20;
      bVar7 = (byte)(0x5338b95 >> iVar16) | (byte)(-0x65a9c8d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar17) {
        bVar7 = (byte)(0xf9a56373 >> (uVar17 & 0xff));
      }
      *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar7;
      bVar18 = 0xfffffffe < uVar11;
      bVar1 = uVar15 == 0;
      bVar2 = (0xf < uVar11) <= uVar15;
      uVar11 = uVar11 + 1;
      uVar15 = uVar15 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x11) = 0;
  }
  uVar11 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar11) {
LAB_7164901c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar11 < 0xb) {
    uVar15 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar11 << 1));
    if (uVar11 != 0) goto LAB_71648df0;
  }
  else {
    uVar15 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_2c = (uVar11 | 7) + 2;
    uStack_28 = uVar11;
    uStack_24 = uVar15;
LAB_71648df0:
    imp___aeabi_memmove(uVar15,iVar8,uVar11);
  }
  uVar14 = 0;
  *(undefined1 *)(uVar15 + uVar11) = 0;
LAB_71648e7c:
  FUN_717c623c(&uStack_2c,uVar14);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return;
}


// =========================================================================
// Function: FUN_716498b8
// Entry: 0x716498b8 | Size: 104 bytes
// =========================================================================

void FUN_716498b8(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *param_3;
  pbVar2 = param_3;
  while (bVar1 != 0) {
    if (bVar1 < 0x20) {
      *pbVar2 = 0x20;
    }
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  FUN_71649964(param_1,param_3,param_1,0xffffffff);
  return;
}


// =========================================================================
// Function: FUN_71649964
// Entry: 0x71649964 | Size: 720 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71649964(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uStack_340;
  uint uStack_33c;
  uint uStack_338;
  byte abStack_334 [8];
  undefined4 uStack_32c;
  undefined1 auStack_328 [772];
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  if (param_3 == 0) {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c04);
    if (*pcVar1 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bf4);
      *puVar4 = 0x1815a46;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b5f0,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c04);
      *puVar5 = 1;
    }
    uVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7bf4);
    pbVar2 = (byte *)uVar7;
    param_3 = param_2;
    if (pbVar2[3] != 0) {
      uVar7 = (ulonglong)CONCAT14(pbVar2[1],pbVar2);
      pbVar2[3] = 0;
      *pbVar2 = *pbVar2 ^ 99;
      pbVar2[1] = pbVar2[1] ^ 0x29;
      pbVar2[2] = pbVar2[2] ^ 0x81;
    }
  }
  else {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c24);
    if (*pcVar1 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c14);
      *puVar4 = 0xe70fd0be;
      *(undefined1 *)((int)puVar4 + 7) = 1;
      *(undefined4 *)((int)puVar4 + 3) = 0x63c00ae7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b618,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c24);
      *puVar5 = 1;
    }
    uVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c14);
    pbVar2 = (byte *)uVar7;
    if (pbVar2[7] != 0) {
      uVar7 = (ulonglong)CONCAT14(pbVar2[1],pbVar2);
      pbVar2[7] = 0;
      *pbVar2 = *pbVar2 ^ 0x9b;
      pbVar2[1] = pbVar2[1] ^ 0xa3;
      pbVar2[2] = pbVar2[2] ^ 0x35;
      pbVar2[3] = pbVar2[3] ^ 199;
      pbVar2[4] = pbVar2[4] ^ 0x2f;
      pbVar2[5] = pbVar2[5] ^ 0xb3;
      pbVar2[6] = pbVar2[6] ^ 99;
    }
  }
  FUN_7164a25c(auStack_328,(int)(uVar7 >> 0x20),(int)uVar7,param_3);
  uVar3 = imp_strlen(auStack_328);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_340);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_340 | 1;
    uStack_340 = CONCAT31(uStack_340._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_71649b20;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_340 = (uVar3 | 7) + 2;
    uStack_33c = uVar3;
    uStack_338 = uVar6;
  }
  imp___aeabi_memcpy(uVar6,auStack_328,uVar3);
LAB_71649b20:
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_71800cf0(abStack_334,&uStack_340);
  if ((uStack_340 & 1) != 0) {
    thunk_qNQrlu(uStack_338);
  }
  FUN_7164a2d4(param_4,abStack_334,param_6);
  if ((abStack_334[0] & 1) != 0) {
    thunk_qNQrlu(uStack_32c);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7164a044
// Entry: 0x7164a044 | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7164a044(undefined4 param_1)

{
  byte *pbVar1;
  byte abStack_113 [255];
  int iStack_14;
  
  iStack_14 = _ext___stack_chk_guard;
  imp___strcpy_chk(abStack_113,param_1,0xff);
  if (abStack_113[0] != 0) {
    pbVar1 = abStack_113;
    do {
      pbVar1 = pbVar1 + 1;
      if (abStack_113[0] < 0x20) {
        pbVar1[-1] = 0x20;
      }
      abStack_113[0] = *pbVar1;
    } while (abStack_113[0] != 0);
  }
  FUN_71649964(0,abStack_113,0,0xc8c8ff);
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


