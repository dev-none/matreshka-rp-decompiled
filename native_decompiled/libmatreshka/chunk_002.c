// =========================================================================
// Function: FUN_713a4d28
// Entry: 0x713a4d28 | Size: 240 bytes
// =========================================================================

void FUN_713a4d28(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  *param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  piVar4 = param_1 + 1;
  *piVar4 = 0;
  iVar2 = *DAT_70b466bc;
  if (iVar2 == 0) {
    iVar2 = thunk_MwhHq(0x8c);
    FUN_713a4b98();
    *DAT_70b466bc = iVar2;
    iVar2 = *DAT_70b466bc;
    if (iVar2 == 0) {
      return;
    }
  }
  piVar1 = DAT_70b466bc;
  *piVar4 = iVar2;
  iVar3 = *(int *)(iVar2 + 0x80);
  iVar5 = iVar3;
  if (iVar3 < 0x10) {
    iVar5 = *(int *)(iVar2 + 0x84);
  }
  if (0xf < iVar5) {
    return;
  }
  iVar3 = *(int *)(iVar2 + iVar3 * 4 + 0x40);
  param_1[2] = iVar3;
  iVar5 = *(int *)(iVar2 + *(int *)(iVar2 + 0x84) * 4);
  param_1[3] = iVar5;
  if (iVar3 != 0 && iVar5 != 0) {
    *(int *)(iVar2 + 0x80) = *(int *)(iVar2 + 0x80) + 1;
    *(int *)(*piVar4 + 0x84) = *(int *)(*piVar4 + 0x84) + 1;
    iVar2 = *piVar4;
  }
  iVar3 = *(int *)(iVar2 + 0x80);
  bVar6 = SBORROW4(iVar3,0xf);
  iVar5 = iVar3 + -0xf;
  if (iVar3 < 0x10) {
    bVar6 = SBORROW4(*(int *)(iVar2 + 0x84),0x10);
    iVar5 = *(int *)(iVar2 + 0x84) + -0x10;
  }
  if (iVar5 < 0 == bVar6) {
    *piVar1 = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_713a4ec8
// Entry: 0x713a4ec8 | Size: 820 bytes
// =========================================================================

void FUN_713a4ec8(int param_1)

{
  int *piVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 != (int *)0x0) {
    uVar7 = 0;
    uVar5 = 0;
    piVar1 = piVar6;
    do {
      bVar12 = CARRY4(piVar1[2],uVar7);
      uVar7 = piVar1[2] + uVar7;
      uVar4 = piVar1[5] + 0xfU & 0xfffffff0;
      bVar13 = CARRY4(uVar4,uVar5);
      uVar5 = uVar4 + uVar5;
      if (bVar13) {
        return;
      }
      if (bVar12) {
        return;
      }
      piVar1 = (int *)piVar1[10];
    } while (piVar1 != (int *)0x0);
    if (uVar5 != 0 || uVar7 != 0) {
      bVar13 = 0xfffffff < uVar5;
      bVar12 = uVar5 == 0x10000000;
      if (uVar5 < 0x10000001) {
        bVar13 = 0x7ffffff < uVar7;
        bVar12 = uVar7 == 0x8000000;
      }
      if (!bVar13 || bVar12) {
        iVar10 = 0;
        iVar8 = 0;
        iVar2 = 0;
        if (uVar5 != 0) {
          iVar8 = thunk__IBDl(uVar5);
          imp___aeabi_memclr(iVar8,uVar5);
          iVar2 = extraout_r1;
        }
        if (uVar7 != 0) {
          iVar2 = ((uVar7 & 1) + uVar7) * 2;
          iVar10 = thunk__IBDl(iVar2);
          imp___aeabi_memclr(iVar10,iVar2);
          iVar2 = extraout_r1_00;
        }
        uVar4 = uVar5;
        uVar11 = uVar7;
        do {
          if (piVar6[6] != 0) {
            if (iVar8 != 0) {
              iVar2 = piVar6[4];
            }
            if (iVar8 != 0 && iVar2 != 0) {
              if (uVar5 < uVar4) break;
              uVar9 = piVar6[5] + 0xfU & 0xfffffff0;
              if (uVar4 < uVar9) break;
              uVar4 = uVar4 - uVar9;
              if ((uint)piVar6[5] <= uVar5 - uVar4) {
                imp___aeabi_memcpy(iVar8 + uVar4);
                iVar2 = piVar6[0x14];
                piVar6[0xf] = piVar6[0xf] + uVar4;
                piVar6[0x14] = iVar2 + uVar4;
                piVar6[0x19] = piVar6[0x19] + uVar4;
                piVar6[0x1e] = piVar6[0x1e] + uVar4;
                piVar6[0x23] = piVar6[0x23] + uVar4;
                piVar6[0x28] = piVar6[0x28] + uVar4;
                piVar6[0x2d] = piVar6[0x2d] + uVar4;
                piVar6[0x32] = piVar6[0x32] + uVar4;
                piVar6[0x37] = piVar6[0x37] + uVar4;
              }
            }
          }
          iVar3 = piVar6[2];
          uVar9 = uVar11;
          if (iVar3 - 1U < uVar11) {
            uVar9 = uVar11 - iVar3;
            if (iVar10 != 0) {
              iVar2 = *piVar6;
            }
            if ((iVar10 != 0 && iVar2 != 0) && (uVar11 * 2 <= ((uVar7 & 1) + uVar7) * 2)) {
              imp___aeabi_memcpy(iVar10 + uVar9 * 2,iVar2,iVar3 << 1);
              piVar6[0xb] = uVar9 * 2;
              iVar2 = extraout_r1_01;
            }
          }
          if (piVar6[0xe] == 0) {
            iVar3 = piVar6[7];
            piVar6[0x13] = piVar6[0x13] + iVar3;
            piVar6[0x18] = piVar6[0x18] + iVar3;
            piVar6[0x1d] = piVar6[0x1d] + iVar3;
            piVar6[0xe] = iVar3;
            piVar6[0x22] = piVar6[0x22] + iVar3;
            piVar6[0x27] = piVar6[0x27] + iVar3;
            piVar6[0x2c] = piVar6[0x2c] + iVar3;
            piVar6[0x31] = piVar6[0x31] + iVar3;
            iVar2 = piVar6[0x36];
            piVar6[0x36] = iVar2 + iVar3;
          }
          piVar6[9] = param_1;
          if ((char)piVar6[8] != '\0') {
            if (*piVar6 != 0) {
              imp_free();
              *piVar6 = 0;
              iVar2 = extraout_r1_02;
            }
            if (piVar6[4] != 0) {
              imp_free();
              piVar6[4] = 0;
              iVar2 = extraout_r1_03;
            }
          }
          piVar6 = (int *)piVar6[10];
          uVar11 = uVar9;
        } while (piVar6 != (int *)0x0);
        if (uVar7 != 0 && iVar10 != 0) {
          FUN_7137bfa4(*(undefined4 *)(param_1 + 0xc),iVar10,uVar7 * 2);
        }
        if (uVar5 != 0 && iVar8 != 0) {
          FUN_7138c630(*(undefined4 *)(param_1 + 8),iVar8,uVar5);
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (iVar10 != 0) {
          thunk_dGrRHE(iVar10);
        }
        if (iVar8 != 0) {
          thunk_dGrRHE(iVar8);
          return;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713a57bc
// Entry: 0x713a57bc | Size: 16 bytes
// =========================================================================

undefined * FUN_713a57bc(int param_1)

{
  return &DAT_70b46710 + param_1 * 0x40;
}


// =========================================================================
// Function: FUN_713a5804
// Entry: 0x713a5804 | Size: 12 bytes
// =========================================================================

undefined4 FUN_713a5804(void)

{
  return DAT_70b46990;
}


// =========================================================================
// Function: FUN_713a5848
// Entry: 0x713a5848 | Size: 16 bytes
// =========================================================================

void FUN_713a5848(undefined4 param_1)

{
  DAT_70b46990 = param_1;
  return;
}


// =========================================================================
// Function: FUN_713a5890
// Entry: 0x713a5890 | Size: 40 bytes
// =========================================================================

undefined * FUN_713a5890(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_700bbdd8;
  if (DAT_710eaf34 == '\0') {
    puVar1 = &DAT_700bbde4;
  }
  return puVar1;
}


// =========================================================================
// Function: FUN_713a5930
// Entry: 0x713a5930 | Size: 12 bytes
// =========================================================================

undefined4 * FUN_713a5930(void)

{
  return &DAT_70b46994;
}


// =========================================================================
// Function: FUN_713a5974
// Entry: 0x713a5974 | Size: 24 bytes
// =========================================================================

undefined * FUN_713a5974(uint param_1)

{
  if (2 < param_1) {
    param_1 = 0;
  }
  return &DAT_700bbdf0 + param_1 * 0x10;
}


// =========================================================================
// Function: FUN_713a59c4
// Entry: 0x713a59c4 | Size: 108 bytes
// =========================================================================

void FUN_713a59c4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = DAT_70b466fc & 0xfff9ffff;
  DAT_70b466fc = uVar3;
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  uVar2 = 0x10;
  if (param_1 == 1) {
    uVar2 = 0x30;
  }
  imp___memcpy_chk(&DAT_700bbdf0,param_2,uVar2,0x30);
  uVar1 = 0x40000;
  if (param_1 == 1) {
    uVar1 = 0x20000;
  }
  DAT_70b466fc = uVar3 | uVar1;
  return;
}


// =========================================================================
// Function: FUN_713a5ac4
// Entry: 0x713a5ac4 | Size: 32 bytes
// =========================================================================

void FUN_713a5ac4(uint param_1)

{
  DAT_70b466fc = DAT_70b466fc & 0xfff7ffff | (param_1 & 1) << 0x13;
  return;
}


// =========================================================================
// Function: FUN_713a5b3c
// Entry: 0x713a5b3c | Size: 88 bytes
// =========================================================================

void FUN_713a5b3c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = DAT_70b466fc;
  if (param_1 == 0) {
    DAT_70b466fc = DAT_70b466fc & 0xfffeffff;
  }
  else {
    DAT_70b46998 = FUN_71ba1e0c(param_2 >> 0x10);
    DAT_70b46994 = FUN_71ba1e0c(param_2 & 0xffff);
    DAT_70b466fc = uVar1 | 0x10000;
  }
  return;
}


// =========================================================================
// Function: FUN_713a5c44
// Entry: 0x713a5c44 | Size: 732 bytes
// =========================================================================

void FUN_713a5c44(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar3 = 1 << (param_2 + 1U & 0xff);
  if (param_1 == 0) {
    DAT_70b466fc = DAT_70b466fc & ~uVar3;
    return;
  }
  DAT_70b466fc = DAT_70b466fc | uVar3;
  uVar12 = *param_3;
  uVar11 = param_3[1];
  iVar1 = param_2 * 0x40;
  imp___aeabi_memclr4(&DAT_70b46710 + iVar1,0x40);
  iVar2 = FUN_71ba2d10(param_7,param_6);
  uVar13 = 0x3f800000;
  uVar3 = FUN_71ba13e0(0x3f800000,param_5);
  uVar7 = param_7;
  if (iVar2 != 0) {
    uVar7 = param_6;
  }
  uVar4 = FUN_71ba13e0(param_6,uVar7);
  uVar5 = 0x3f800000;
  if (param_9 != 0) {
    uVar5 = 0xbf800000;
  }
  uVar6 = FUN_71ba13e0(uVar5,uVar4);
  uVar4 = imp_cosf(param_4);
  uVar5 = FUN_71ba21e8(uVar4,uVar6);
  uVar5 = FUN_71ba21e8(uVar3,uVar5);
  *(undefined4 *)(&DAT_70b46738 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_70b46710 + param_2 * 0x40) = uVar5;
  uVar7 = FUN_71ba13e0(param_7,uVar7);
  if (param_8 != 0) {
    uVar13 = 0xbf800000;
  }
  uVar13 = FUN_71ba13e0(uVar13,uVar7);
  uVar7 = FUN_71ba21e8(uVar4,uVar13);
  uVar7 = FUN_71ba21e8(uVar3,uVar7);
  *(undefined4 *)(&DAT_70b46724 + iVar1) = uVar7;
  uVar5 = imp_sinf(param_4);
  uVar7 = FUN_71ba21e8(uVar5,uVar13);
  uVar7 = FUN_71ba21e8(uVar3,uVar7);
  *(undefined4 *)(&DAT_70b46714 + iVar1) = uVar7;
  uVar7 = FUN_71ba21e8(uVar5,uVar6 ^ 0x80000000);
  uVar7 = FUN_71ba21e8(uVar3,uVar7);
  *(undefined4 *)(&DAT_70b46720 + iVar1) = uVar7;
  iVar2 = FUN_71ba2d70(param_7,param_6);
  uVar7 = param_7;
  if (iVar2 != 0) {
    uVar7 = param_6;
  }
  uVar8 = FUN_71ba13e0(param_6,uVar7);
  uVar14 = 0x3f000000;
  uVar9 = 0x3f000000;
  if (param_8 != 0) {
    uVar9 = 0xbf000000;
  }
  uVar8 = FUN_71ba13e0(uVar9,uVar8);
  uVar12 = FUN_71ba21e8(uVar12,uVar3 ^ 0x80000000);
  uVar11 = FUN_71ba21e8(uVar11,uVar3 ^ 0x80000000);
  uVar9 = FUN_71ba21e8(uVar4,uVar11);
  uVar10 = FUN_71ba21e8(uVar5,uVar12);
  uVar9 = FUN_71ba0b38(uVar10,uVar9);
  uVar8 = FUN_71ba0b38(uVar8,uVar9);
  uVar13 = FUN_71ba21e8(uVar13,uVar8);
  *(undefined4 *)(&DAT_70b46734 + iVar1) = uVar13;
  uVar7 = FUN_71ba13e0(param_7,uVar7);
  if (param_9 != 0) {
    uVar14 = 0xbf000000;
  }
  uVar7 = FUN_71ba13e0(uVar14,uVar7);
  uVar11 = FUN_71ba21e8(uVar11,uVar5);
  uVar12 = FUN_71ba21e8(uVar4,uVar12);
  uVar11 = FUN_71ba240c(uVar12,uVar11);
  uVar7 = FUN_71ba0b38(uVar7,uVar11);
  uVar7 = FUN_71ba21e8(uVar6,uVar7);
  *(undefined4 *)(&DAT_70b46730 + iVar1) = uVar7;
  return;
}


// =========================================================================
// Function: FUN_713a63b0
// Entry: 0x713a63b0 | Size: 384 bytes
// =========================================================================

void FUN_713a63b0(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b469a0 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b469a0), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbf90);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbf80);
      *(undefined1 *)((int)puVar9 + 0x22) = 1;
      uVar5 = DAT_700762f4;
      uVar4 = DAT_700762f0;
      uVar3 = DAT_700762ec;
      *puVar9 = DAT_700762e8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70076304;
      uVar4 = DAT_70076300;
      uVar3 = DAT_700762fc;
      puVar9[4] = DAT_700762f8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined2 *)(puVar9 + 8) = DAT_70076308;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa420,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbf90);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbf80);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x59cbbb6b >> iVar13) |
                (byte)(-0x32b6b893 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xcd49476d >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x20 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x22) = 0;
    }
    DAT_70b4699c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b469a0);
  }
                    /* WARNING: Could not recover jumptable at 0x713a63dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b4699c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713a67c8
// Entry: 0x713a67c8 | Size: 40 bytes
// =========================================================================

void FUN_713a67c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_MwhHq(0x1c);
  FUN_71378b20(uVar1,param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713a6840
// Entry: 0x713a6840 | Size: 8 bytes
// =========================================================================

undefined4 FUN_713a6840(void)

{
  return 1;
}


// =========================================================================
// Function: FUN_713a6860
// Entry: 0x713a6860 | Size: 28 bytes
// =========================================================================

void FUN_713a6860(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_7136f010();
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_713a68ec
// Entry: 0x713a68ec | Size: 92 bytes
// =========================================================================

void FUN_713a68ec(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_3 & 0xfffffffc) == 0x1400) {
    iVar1 = param_3 - 0x13ff;
  }
  param_1 = param_1 * 0x14;
  *(undefined4 *)(&DAT_70b469dc + param_1) = param_2;
  *(int *)(&DAT_70b469e8 + param_1) = iVar1;
  *(undefined4 *)(&DAT_70b469e4 + param_1) = param_5;
  *(undefined4 *)(&DAT_70b469e0 + param_1) = 0;
  (&DAT_70b469d9)[param_1] = param_4 != 0;
  (&DAT_70b469d8)[param_1] = 1;
  return;
}


// =========================================================================
// Function: FUN_713a6980
// Entry: 0x713a6980 | Size: 28 bytes
// =========================================================================

void FUN_713a6980(void)

{
  imp___aeabi_memclr8(&DAT_70b469a8,0xe8);
  return;
}


// =========================================================================
// Function: FUN_713a69f0
// Entry: 0x713a69f0 | Size: 16 bytes
// =========================================================================

void FUN_713a69f0(undefined4 param_1)

{
  imp___aeabi_memcpy(param_1,&DAT_70b469a8,0xe8);
  return;
}


// =========================================================================
// Function: FUN_713a6a54
// Entry: 0x713a6a54 | Size: 40 bytes
// =========================================================================

undefined4 FUN_713a6a54(undefined4 param_1)

{
  imp___aeabi_memcpy(&DAT_70b469a8,param_1,0xe8);
  return DAT_70b469b8;
}


// =========================================================================
// Function: FUN_713a6b6c
// Entry: 0x713a6b6c | Size: 816 bytes
// =========================================================================

int * FUN_713a6b6c(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  
  piVar11 = (int *)thunk_MwhHq(0xe8);
  piVar11[0x39] = 0;
  *(undefined1 *)(piVar11 + 0x34) = 0;
  *(undefined1 *)(piVar11 + 0x2f) = 0;
  *(undefined1 *)(piVar11 + 0x2a) = 0;
  *(undefined1 *)(piVar11 + 0x25) = 0;
  *(undefined1 *)(piVar11 + 0x20) = 0;
  *(undefined1 *)(piVar11 + 0x1b) = 0;
  *(undefined1 *)(piVar11 + 0x16) = 0;
  *(undefined1 *)(piVar11 + 0x11) = 0;
  imp___aeabi_memclr4(piVar11,0x21);
  *(undefined1 *)(piVar11 + 0xc) = 0;
  piVar11[9] = 0;
  piVar11[10] = 0;
  piVar11[0xb] = 0;
  imp___aeabi_memcpy4(piVar11,&DAT_70b469a8,0xe8);
  iVar18 = *piVar11;
  piVar11[0x39] = 0;
  *(undefined1 *)(piVar11 + 8) = 1;
  piVar11[9] = 0;
  piVar11[10] = 0;
  if (iVar18 != 0) {
    if (piVar11[1] == 0x1405) {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb298);
      if (*pcVar7 == '\0') {
        puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb288);
        *(undefined1 *)((int)puVar9 + 0x2a) = 1;
        uVar6 = DAT_700753b8;
        uVar5 = DAT_700753b4;
        uVar4 = DAT_700753b0;
        uVar3 = DAT_700753ac;
        *puVar9 = DAT_700753a8;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = uVar6;
        uVar6 = DAT_700753cc;
        uVar5 = DAT_700753c8;
        uVar4 = DAT_700753c4;
        uVar3 = DAT_700753c0;
        puVar9[5] = DAT_700753bc;
        puVar9[6] = uVar3;
        puVar9[7] = uVar4;
        puVar9[8] = uVar5;
        puVar9[9] = uVar6;
        *(undefined2 *)(puVar9 + 10) = DAT_700753d0;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136fe4c,puVar9,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb298);
        *puVar10 = 1;
      }
      iVar18 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb288);
      if (*(char *)(iVar18 + 0x2a) != '\0') {
        uVar13 = 0;
        uVar17 = 0;
        do {
          iVar15 = (uVar13 & 7) * 8;
          bVar12 = (byte)(0x570fc78f >> iVar15) |
                   (byte)(-0x382c2403 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
          uVar14 = iVar15 - 0x20;
          if (-1 < (int)uVar14) {
            bVar12 = (byte)(0xc7d3dbfd >> (uVar14 & 0xff));
          }
          *(byte *)(iVar18 + uVar13) = *(byte *)(iVar18 + uVar13) ^ bVar12;
          bVar19 = 0xfffffffe < uVar13;
          bVar1 = uVar17 == 0;
          bVar2 = (0x28 < uVar13) <= uVar17;
          uVar13 = uVar13 + 1;
          uVar17 = uVar17 + bVar19;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar18 + 0x2a) = 0;
      }
      FUN_7188543c();
      imp_raise(5);
      iVar18 = *piVar11;
    }
    iVar16 = piVar11[3];
    iVar15 = imp_malloc(iVar16);
    imp___aeabi_memcpy(iVar15,iVar18,iVar16);
    *piVar11 = iVar15;
  }
  if ((param_2 == 0) && (iVar18 = piVar11[4], iVar18 != 0)) {
    iVar16 = piVar11[5];
    iVar15 = imp_malloc(iVar16);
    imp___aeabi_memcpy(iVar15,iVar18,iVar16);
    piVar11[4] = iVar15;
  }
  piVar8 = DAT_70b42100;
  if (param_1 == 0) {
    iVar18 = *DAT_70b42100;
    if (*DAT_70b42104 == '\0') {
      if (iVar18 != 0) {
        FUN_713a4ec8();
        *DAT_70b42100 = 0;
      }
      thunk_MwhHq(0x14);
      iVar18 = FUN_713a4d28();
      *DAT_70b42100 = iVar18;
      *(undefined4 *)*DAT_70b42100 = 1;
      piVar8 = DAT_70b42100;
      *(int **)(*DAT_70b42100 + 0x10) = piVar11;
      FUN_713a4ec8(*piVar8);
      *DAT_70b42100 = 0;
    }
    else {
      if (iVar18 == 0) {
        thunk_MwhHq(0x14);
        iVar18 = FUN_713a4d28();
        *DAT_70b42100 = iVar18;
        iVar18 = 1;
        piVar8 = (int *)*DAT_70b42100;
      }
      else {
        piVar11[10] = *(int *)(iVar18 + 0x10);
        piVar8 = (int *)*piVar8;
        iVar18 = *piVar8 + 1;
      }
      *piVar8 = iVar18;
      *(int **)(*DAT_70b42100 + 0x10) = piVar11;
    }
  }
  return piVar11;
}


// =========================================================================
// Function: FUN_713a6c0c
// Entry: 0x713a6c0c | Size: 72 bytes
// =========================================================================

void FUN_713a6c0c(undefined4 param_1,int param_2,int param_3)

{
  DAT_70b469a8 = param_1;
  DAT_70b469ac = param_2;
  DAT_70b469b0 = param_3;
  if (param_2 != 0x1401) {
    if (param_2 == 0x1403) {
      DAT_70b469b4 = param_3 << 1;
      return;
    }
    if (param_2 != 0x1405) {
      return;
    }
    param_3 = param_3 << 2;
  }
  DAT_70b469b4 = param_3;
  return;
}


// =========================================================================
// Function: FUN_713a6d24
// Entry: 0x713a6d24 | Size: 76 bytes
// =========================================================================

void FUN_713a6d24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_70b469c8 != '\0') {
    imp___aeabi_memcpy(DAT_70b469b8,param_1,param_2);
    return;
  }
  DAT_70b469b8 = param_1;
  DAT_70b469bc = param_2;
  DAT_70b469c0 = param_3;
  DAT_70b469c4 = param_4;
  return;
}


// =========================================================================
// Function: FUN_713a6dc4
// Entry: 0x713a6dc4 | Size: 140 bytes
// =========================================================================

void FUN_713a6dc4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  puVar5 = DAT_70b42104;
  *DAT_70b42104 = (char)param_1;
  piVar3 = DAT_70b42100;
  if (param_1 != 0) {
    return;
  }
  iVar4 = *DAT_70b42100;
  if (iVar4 != 0) {
    puVar5 = *(undefined1 **)(iVar4 + 0x10);
  }
  if (iVar4 != 0 && puVar5 != (undefined1 *)0x0) {
    iVar4 = 0;
    iVar6 = 0;
    do {
      piVar1 = (int *)(puVar5 + 0x14);
      piVar2 = (int *)(puVar5 + 8);
      puVar5 = *(undefined1 **)(puVar5 + 0x28);
      iVar6 = *piVar2 + iVar6;
      iVar4 = (*piVar1 + 0xfU & 0xfffffff0) + iVar4;
    } while (puVar5 != (undefined1 *)0x0);
    if (0x4000 < (uint)(iVar4 + iVar6 * 2)) {
      FUN_713a4ec8();
      *piVar3 = 0;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713a6ec4
// Entry: 0x713a6ec4 | Size: 564 bytes
// =========================================================================

void FUN_713a6ec4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = DAT_70b466e8;
  if (DAT_70b466e8[4] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_70b466e8[2];
    iVar2 = FUN_71ba0440(iVar3);
    if (iVar2 < 1) {
      iVar3 = 0;
    }
  }
  if (puVar5[10] != 0) {
    iVar4 = puVar5[8];
    iVar2 = FUN_71ba0440(iVar4);
    if (0 < iVar2) {
      iVar3 = iVar3 + iVar4;
    }
  }
  if (puVar5[0x10] != 0) {
    iVar4 = puVar5[0xe];
    iVar2 = FUN_71ba0440(iVar4);
    if (0 < iVar2) {
      iVar3 = iVar3 + iVar4;
    }
  }
  if (puVar5[0x16] != 0) {
    iVar4 = puVar5[0x14];
    iVar2 = FUN_71ba0440(iVar4);
    if (0 < iVar2) {
      iVar3 = iVar3 + iVar4;
    }
  }
  piVar1 = DAT_70b46448;
  iVar2 = *DAT_70b46448;
  if (*(uint *)(iVar2 + 0x264) <= iVar3 + *(int *)(iVar2 + 0x324) + 0x400U) {
    FUN_7139a77c();
    iVar2 = *piVar1;
  }
  *(undefined4 *)(iVar2 + 0x278) = 3;
  **(undefined4 **)(iVar2 + 0x274) = 3;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(int **)(iVar2 + 0x274) = iVar3;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  puVar5 = DAT_70b466e8;
  if (DAT_70b466e8[4] != 0) {
    iVar2 = DAT_70b466e8[2];
    iVar3 = FUN_71ba0440(iVar2);
    if (0 < iVar3) {
      iVar3 = *piVar1;
      imp___aeabi_memcpy(*(undefined4 *)(iVar3 + 0x274),*puVar5,iVar2);
      *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + iVar2;
      puVar5 = DAT_70b466e8;
    }
  }
  if (puVar5[10] != 0) {
    iVar2 = puVar5[8];
    iVar3 = FUN_71ba0440(iVar2);
    if (0 < iVar3) {
      iVar3 = *piVar1;
      imp___aeabi_memcpy(*(undefined4 *)(iVar3 + 0x274),puVar5[6],iVar2);
      *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + iVar2;
      puVar5 = DAT_70b466e8;
    }
  }
  if (puVar5[0x10] != 0) {
    iVar2 = puVar5[0xe];
    iVar3 = FUN_71ba0440(iVar2);
    if (0 < iVar3) {
      iVar3 = *piVar1;
      imp___aeabi_memcpy(*(undefined4 *)(iVar3 + 0x274),puVar5[0xc],iVar2);
      *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + iVar2;
      puVar5 = DAT_70b466e8;
    }
  }
  if (puVar5[0x16] != 0) {
    iVar2 = puVar5[0x14];
    iVar3 = FUN_71ba0440(iVar2);
    if (0 < iVar3) {
      iVar3 = *piVar1;
      imp___aeabi_memcpy(*(undefined4 *)(iVar3 + 0x274),puVar5[0x12],iVar2);
      *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + iVar2;
    }
  }
  *(uint *)(*piVar1 + 0x274) = *(int *)(*piVar1 + 0x274) + 3U & 0xfffffffc;
  return;
}


// =========================================================================
// Function: FUN_713a733c
// Entry: 0x713a733c | Size: 784 bytes
// =========================================================================

void FUN_713a733c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = 0;
  *DAT_70b466e4 = *DAT_70b466e4 & 0xbfffffff;
  iVar1 = DAT_70b466e8;
  if (*(int *)(DAT_70b466e8 + 0x10) == 0) {
LAB_713a73cc:
    DAT_70b46a90 = 0;
  }
  else {
    iVar9 = *(int *)(DAT_70b466e8 + 8);
    iVar3 = FUN_71ba0440(iVar9);
    if (iVar3 < 1) goto LAB_713a73cc;
    DAT_70b46aa0 = *(int *)(iVar1 + 0x14);
    DAT_70b46a9c = 0;
    DAT_70b46a91 = DAT_70b46aa0 - 1U < 2;
    DAT_70b46a90 = 1;
    DAT_70b46a94 = *(undefined4 *)(iVar1 + 0xc);
    DAT_70b46a98 = *(undefined4 *)(iVar1 + 0x10);
  }
  iVar3 = *(int *)(iVar1 + 0x28);
  if ((iVar3 == 0) || (iVar4 = FUN_71ba0440(*(undefined4 *)(iVar1 + 0x20),iVar3), iVar4 < 1)) {
    DAT_70b46aa4 = 0;
  }
  else {
    DAT_70b46aa4 = 1;
    DAT_70b46aa8 = *(undefined4 *)(iVar1 + 0x24);
    DAT_70b46ab4 = *(int *)(iVar1 + 0x2c);
    DAT_70b46ab0 = *(undefined4 *)(iVar1 + 8);
    DAT_70b46aa5 = DAT_70b46ab4 - 1U < 2;
    iVar9 = *(int *)(iVar1 + 0x20) + iVar9;
    DAT_70b46aac = iVar3;
  }
  iVar3 = *(int *)(iVar1 + 0x40);
  if ((iVar3 == 0) || (iVar4 = FUN_71ba0440(*(undefined4 *)(iVar1 + 0x38),iVar3), iVar4 < 1)) {
    DAT_70b46ab8 = 0;
    iVar4 = iVar9;
  }
  else {
    DAT_70b46ac8 = *(int *)(iVar1 + 0x44);
    DAT_70b46abc = *(undefined4 *)(iVar1 + 0x3c);
    DAT_70b46ab8 = 1;
    DAT_70b46ab9 = DAT_70b46ac8 - 1U < 2;
    iVar4 = *(int *)(iVar1 + 0x38) + iVar9;
    DAT_70b46ac0 = iVar3;
    DAT_70b46ac4 = iVar9;
  }
  iVar9 = *(int *)(iVar1 + 0x58);
  if (iVar9 != 0) {
    iVar3 = *(int *)(iVar1 + 0x50);
    iVar5 = FUN_71ba0440(iVar3,iVar9);
    if (0 < iVar5) {
      DAT_70b46adc = *(int *)(iVar1 + 0x5c);
      DAT_70b46acc = 1;
      DAT_70b46ad0 = *(undefined4 *)(iVar1 + 0x54);
      DAT_70b46acd = DAT_70b46adc - 1U < 2;
      iVar3 = iVar3 + iVar4;
      DAT_70b46ad4 = iVar9;
      DAT_70b46ad8 = iVar4;
      goto LAB_713a7504;
    }
  }
  DAT_70b46acc = 0;
  iVar3 = iVar4;
LAB_713a7504:
  uVar8 = 0;
  FUN_7138cc40(0,iVar3,FUN_713a6ec4);
  FUN_7138e3a8(&DAT_70b46a90);
  if (*(int *)(DAT_70b466e8 + 0x10) != 0) {
    uVar8 = FUN_71ba0440(*(undefined4 *)(DAT_70b466e8 + 8));
  }
  piVar7 = (int *)*DAT_70b42264;
  uVar6 = FUN_7136e714(*DAT_70b466ec);
  (**(code **)(*piVar7 + 0x18))();
  iVar9 = *DAT_70b46448;
  *(undefined4 *)(iVar9 + 0x278) = 0xf;
  **(undefined4 **)(iVar9 + 0x274) = 0xf;
  iVar1 = *(int *)(iVar9 + 0x274);
  *(int *)(iVar9 + 0x274) = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = uVar6;
  iVar1 = *(int *)(iVar9 + 0x274);
  *(int *)(iVar9 + 0x274) = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = 0;
  iVar1 = *(int *)(iVar9 + 0x274);
  *(int *)(iVar9 + 0x274) = iVar1 + 4;
  *(undefined4 *)(iVar1 + 4) = uVar8;
  iVar1 = *(int *)(iVar9 + 0x274);
  *(int *)(iVar9 + 0x274) = iVar1 + 4;
  *(char **)(iVar1 + 4) = s_Unknown_7006305d;
  uVar2 = *(int *)(iVar9 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar9 + 0x270) = uVar2;
  *(uint *)(iVar9 + 0x274) = uVar2;
  FUN_7139bc08(iVar9);
  if (*(uint *)(iVar9 + 0x264) < *(int *)(iVar9 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar9);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_713a7794
// Entry: 0x713a7794 | Size: 708 bytes
// =========================================================================

void FUN_713a7794(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = DAT_700bbdc8;
  uVar4 = DAT_700bbdc4;
  if ((*DAT_70b466c8 == param_1) && (*DAT_70b466cc == param_2)) {
    return;
  }
  iVar2 = *DAT_70b46b44;
  if (iVar2 == 0) {
    if (*DAT_70b46700 == 0) {
      uVar3 = thunk_MwhHq(0x1c);
      iVar2 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b46700 = iVar2;
      uVar1 = DAT_700bbdcc;
      uVar4 = DAT_700bbdc4;
      uVar3 = thunk_MwhHq(0x1c);
      uVar4 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b46704 = uVar4;
      uVar1 = DAT_700bbdd0;
      uVar4 = DAT_700bbdc4;
      uVar3 = thunk_MwhHq(0x1c);
      uVar4 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b46708 = uVar4;
      uVar1 = DAT_700bbdd4;
      uVar4 = DAT_700bbdc4;
      uVar3 = thunk_MwhHq(0x1c);
      uVar4 = FUN_71378b20(uVar3,uVar1,uVar4);
      *DAT_70b4670c = uVar4;
    }
    if ((*(char *)(DAT_70b4645c + 0xc) == '\0') || (*DAT_70b46b50 != 0)) goto LAB_713a79c0;
    iVar2 = FUN_7137db74(0x20,0x20,1,0);
    piVar5 = DAT_70b46b50;
  }
  else {
    if (iVar2 == *DAT_70b46b48) {
      *DAT_70b46b48 = 0;
      iVar2 = *DAT_70b46b44;
    }
    FUN_7137d4f4(iVar2);
    *DAT_70b46b44 = 0;
    if (param_1 == 0 || param_2 == 0) {
      if (*DAT_70b46b4c != 0) {
        FUN_7137d4f4();
        *DAT_70b46b4c = 0;
      }
      *DAT_70b46b44 = 0;
      *DAT_70b466c8 = 0;
      *DAT_70b466cc = 0;
      return;
    }
    if (*DAT_70b46b4c == 0) goto LAB_713a79c0;
    FUN_7137d4f4();
    iVar2 = 0;
    piVar5 = DAT_70b46b4c;
  }
  *piVar5 = iVar2;
LAB_713a79c0:
  if (*DAT_70b46b54 != '\0') {
    return;
  }
  *DAT_70b466c8 = param_1;
  *DAT_70b466cc = param_2;
  iVar2 = FUN_7137db74(param_1,param_2,0,2);
  *DAT_70b46b44 = iVar2;
  FUN_7137d0bc(*DAT_70b46b44,1);
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  FUN_7137dd7c(1,&uStack_28,0,0);
  return;
}


// =========================================================================
// Function: FUN_713a8034
// Entry: 0x713a8034 | Size: 16 bytes
// =========================================================================

void FUN_713a8034(undefined4 param_1)

{
  DAT_700bbdc0 = param_1;
  return;
}


// =========================================================================
// Function: FUN_713a807c
// Entry: 0x713a807c | Size: 16 bytes
// =========================================================================

void FUN_713a807c(undefined4 param_1)

{
  DAT_70b466f4 = param_1;
  return;
}


// =========================================================================
// Function: FUN_713a80c4
// Entry: 0x713a80c4 | Size: 32 bytes
// =========================================================================

void FUN_713a80c4(void)

{
  DAT_70b466f8 = 0;
  DAT_70b466f4 = 0;
  return;
}


// =========================================================================
// Function: FUN_713a813c
// Entry: 0x713a813c | Size: 388 bytes
// =========================================================================

void FUN_713a813c(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b5c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b5c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc050);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc040);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007631c;
      uVar4 = DAT_70076318;
      uVar3 = DAT_70076314;
      *puVar10 = DAT_70076310;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076330;
      uVar5 = DAT_7007632c;
      uVar4 = DAT_70076328;
      uVar3 = DAT_70076324;
      puVar10[4] = DAT_70076320;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_70076334;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa554,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc050);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc040);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x3751bb33 >> iVar14) |
                (byte)(0x29b7216f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x29b7216f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70b46b58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b5c);
  }
                    /* WARNING: Could not recover jumptable at 0x713a8168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b58)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713a8558
// Entry: 0x713a8558 | Size: 364 bytes
// =========================================================================

void FUN_713a8558(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b64 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b64), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc070);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc060);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar4 = DAT_70076340;
      uVar3 = DAT_7007633c;
      *puVar8 = DAT_70076338;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70076350;
      uVar4 = DAT_7007634c;
      uVar3 = DAT_70076348;
      puVar8[3] = DAT_70076344;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined1 *)(puVar8 + 7) = DAT_70076354;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa5a4,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc070);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc060);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x6763b775 >> iVar12) |
                 (byte)(0x3d1f8ddd << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x3d1f8ddd >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1b < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1d) = 0;
    }
    DAT_70b46b60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b64);
  }
                    /* WARNING: Could not recover jumptable at 0x713a8584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b60)();
  return;
}


// =========================================================================
// Function: FUN_713a895c
// Entry: 0x713a895c | Size: 388 bytes
// =========================================================================

void FUN_713a895c(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b6c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b6c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc090);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc080);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_70076364;
      uVar4 = DAT_70076360;
      uVar3 = DAT_7007635c;
      *puVar10 = DAT_70076358;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076378;
      uVar5 = DAT_70076374;
      uVar4 = DAT_70076370;
      uVar3 = DAT_7007636c;
      puVar10[4] = DAT_70076368;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007637c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa5e4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc090);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc080);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x65ad9793 >> iVar14) |
                (byte)(0x4bf7e157 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x4bf7e157 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70b46b68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b6c);
  }
                    /* WARNING: Could not recover jumptable at 0x713a8988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b68)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713a8d78
// Entry: 0x713a8d78 | Size: 424 bytes
// =========================================================================

void FUN_713a8d78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46b74 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b74);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0b0,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0a0);
        *(undefined1 *)(iVar3 + 0x66) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70076380,0x66);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa634,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0b0);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0a0);
      if (*(char *)(iVar3 + 0x66) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0x1541f7bb >> iVar8) |
                   (byte)(-0x48b4f62b << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0xb74b09d5 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (100 < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x66) = 0;
      }
      DAT_70b46b70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b74);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713a8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b70)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713a91d4
// Entry: 0x713a91d4 | Size: 396 bytes
// =========================================================================

void FUN_713a91d4(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b7c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b7c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0d0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0c0);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_700763f4;
      uVar4 = DAT_700763f0;
      uVar3 = DAT_700763ec;
      *puVar11 = DAT_700763e8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_70076408;
      uVar5 = DAT_70076404;
      uVar4 = DAT_70076400;
      uVar3 = DAT_700763fc;
      puVar11[4] = DAT_700763f8;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007640e;
      *(undefined2 *)(puVar11 + 9) = DAT_7007640c;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa684,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0d0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0c0);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xff4bf5bf >> iVar15) |
                (byte)(0x65e7b363 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x65e7b363 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x25 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x27) = 0;
    }
    DAT_70b46b78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b7c);
  }
                    /* WARNING: Could not recover jumptable at 0x713a9200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b78)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713a95f8
// Entry: 0x713a95f8 | Size: 364 bytes
// =========================================================================

void FUN_713a95f8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b84 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b84), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0f0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0e0);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar4 = DAT_70076418;
      uVar3 = DAT_70076414;
      *puVar8 = DAT_70076410;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70076428;
      uVar4 = DAT_70076424;
      uVar3 = DAT_70076420;
      puVar8[3] = DAT_7007641c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined1 *)(puVar8 + 7) = DAT_7007642c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa6d4,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0f0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc0e0);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xf1035bc1 >> iVar12) |
                 (byte)(0x5b19fb0f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x5b19fb0f >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1b < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1d) = 0;
    }
    DAT_70b46b80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b84);
  }
                    /* WARNING: Could not recover jumptable at 0x713a9624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b80)();
  return;
}


// =========================================================================
// Function: FUN_713a99fc
// Entry: 0x713a99fc | Size: 424 bytes
// =========================================================================

void FUN_713a99fc(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b8c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b8c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc110,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc100);
      *(undefined1 *)((int)puVar10 + 0x37) = 1;
      uVar5 = DAT_7007643c;
      uVar4 = DAT_70076438;
      uVar3 = DAT_70076434;
      *puVar10 = DAT_70076430;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007644c;
      uVar4 = DAT_70076448;
      uVar3 = DAT_70076444;
      puVar10[4] = DAT_70076440;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70076460;
      uVar5 = DAT_7007645c;
      uVar4 = DAT_70076458;
      uVar3 = DAT_70076454;
      puVar10[8] = DAT_70076450;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined2 *)(puVar10 + 0xd) = DAT_70076464;
      *(undefined1 *)((int)puVar10 + 0x36) = DAT_70076466;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa714,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc110);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc100);
    if (*(char *)(iVar8 + 0x37) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xbd87a151 >> iVar14) |
                (byte)(0x3ddf499b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x3ddf499b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x35 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x37) = 0;
    }
    DAT_70b46b88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b8c);
  }
                    /* WARNING: Could not recover jumptable at 0x713a9a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b88)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713a9e3c
// Entry: 0x713a9e3c | Size: 356 bytes
// =========================================================================

void FUN_713a9e3c(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46b94 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46b94), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc130);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc120);
      *(undefined1 *)((int)puVar9 + 0x15) = 1;
      uVar6 = DAT_70076478;
      uVar5 = DAT_70076474;
      uVar4 = DAT_70076470;
      uVar3 = DAT_7007646c;
      *puVar9 = DAT_70076468;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined1 *)(puVar9 + 5) = DAT_7007647c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa764,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc130);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc120);
    if (*(char *)(iVar7 + 0x15) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xf31a9d3 >> iVar13) |
                 (byte)(0x73f5739d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x73f5739d >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x13 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x15) = 0;
    }
    DAT_70b46b90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46b94);
  }
                    /* WARNING: Could not recover jumptable at 0x713a9e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46b90)();
  return;
}


// =========================================================================
// Function: FUN_713aeb00
// Entry: 0x713aeb00 | Size: 28 bytes
// =========================================================================

int FUN_713aeb00(void)

{
  return DAT_70b46c18 + (uint)*(byte *)(DAT_70b46c18 + 0x57) * 0x210 + 0x170;
}


// =========================================================================
// Function: FUN_713aeb54
// Entry: 0x713aeb54 | Size: 392 bytes
// =========================================================================

void FUN_713aeb54(undefined4 param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c38 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c38), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc230);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc220);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_700764c0;
      uVar3 = DAT_700764bc;
      *puVar10 = DAT_700764b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_700764d0;
      uVar4 = DAT_700764cc;
      uVar3 = DAT_700764c8;
      puVar10[3] = DAT_700764c4;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_700764d6;
      *(undefined2 *)(puVar10 + 7) = DAT_700764d4;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1a98,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc230);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc220);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x81e15bed >> iVar14) |
                (byte)(0x7fd3adb1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x7fd3adb1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x1d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1f) = 0;
    }
    DAT_70b46c34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c38);
  }
                    /* WARNING: Could not recover jumptable at 0x713aeb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713aef74
// Entry: 0x713aef74 | Size: 376 bytes
// =========================================================================

void FUN_713aef74(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c40 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c40), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc250);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc240);
      *(undefined1 *)((int)puVar9 + 0x12) = 1;
      uVar5 = DAT_700764e4;
      uVar4 = DAT_700764e0;
      uVar3 = DAT_700764dc;
      *puVar9 = DAT_700764d8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      *(undefined2 *)(puVar9 + 4) = DAT_700764e8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1ad8,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc250);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc240);
    if (*(char *)(iVar7 + 0x12) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x9b4dbd9f >> iVar13) |
                (byte)(0x194db9cd << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x194db9cd >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x10 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x12) = 0;
    }
    DAT_70b46c3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c40);
  }
                    /* WARNING: Could not recover jumptable at 0x713aefa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c3c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713af384
// Entry: 0x713af384 | Size: 388 bytes
// =========================================================================

void FUN_713af384(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c48 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c48), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc270);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc260);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_700764fc;
      uVar4 = DAT_700764f8;
      uVar3 = DAT_700764f4;
      *puVar10 = DAT_700764f0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076510;
      uVar5 = DAT_7007650c;
      uVar4 = DAT_70076508;
      uVar3 = DAT_70076504;
      puVar10[4] = DAT_70076500;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_70076514;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1b0c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc270);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc260);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x93b4331 >> iVar14) |
                (byte)(-0x3e962c5f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xc169d3a1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70b46c44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c48);
  }
                    /* WARNING: Could not recover jumptable at 0x713af3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c44)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713af7a0
// Entry: 0x713af7a0 | Size: 400 bytes
// =========================================================================

void FUN_713af7a0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c50 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c50), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc290,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc280);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70076528;
      uVar5 = DAT_70076524;
      uVar4 = DAT_70076520;
      uVar3 = DAT_7007651c;
      *puVar11 = DAT_70076518;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70076540;
      uVar6 = DAT_7007653c;
      uVar5 = DAT_70076538;
      uVar4 = DAT_70076534;
      uVar3 = DAT_70076530;
      puVar11[5] = DAT_7007652c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1b5c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc290);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc280);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x4bd1a9a9 >> iVar15) |
                (byte)(0x6f2bc975 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x6f2bc975 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70b46c4c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c50);
  }
                    /* WARNING: Could not recover jumptable at 0x713af7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c4c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713afbc8
// Entry: 0x713afbc8 | Size: 392 bytes
// =========================================================================

void FUN_713afbc8(undefined4 param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c58 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c58), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2b0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2a0);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_70076554;
      uVar4 = DAT_70076550;
      uVar3 = DAT_7007654c;
      *puVar10 = DAT_70076548;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70076564;
      uVar4 = DAT_70076560;
      uVar3 = DAT_7007655c;
      puVar10[4] = DAT_70076558;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007656a;
      *(undefined2 *)(puVar10 + 8) = DAT_70076568;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1bac,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2b0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2a0);
    if (*(char *)(iVar8 + 0x23) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1fef9f7d >> iVar14) |
                (byte)(-0x32ea76f1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xcd15890f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x21 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x23) = 0;
    }
    DAT_70b46c54 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c58);
  }
                    /* WARNING: Could not recover jumptable at 0x713afbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c54)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713affe8
// Entry: 0x713affe8 | Size: 408 bytes
// =========================================================================

void FUN_713affe8(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c60 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c60), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2d0,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2c0);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_7007657c;
      uVar4 = DAT_70076578;
      uVar3 = DAT_70076574;
      *puVar10 = DAT_70076570;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007658c;
      uVar4 = DAT_70076588;
      uVar3 = DAT_70076584;
      puVar10[4] = DAT_70076580;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700765a0;
      uVar5 = DAT_7007659c;
      uVar4 = DAT_70076598;
      uVar3 = DAT_70076594;
      puVar10[8] = DAT_70076590;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1bfc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2d0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2c0);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x7ba3590f >> iVar14) |
                (byte)(0x6f55cd95 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x6f55cd95 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x32 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x34) = 0;
    }
    DAT_70b46c5c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c60);
  }
                    /* WARNING: Could not recover jumptable at 0x713b001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c5c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713b0418
// Entry: 0x713b0418 | Size: 428 bytes
// =========================================================================

void FUN_713b0418(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c68 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c68), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2f0,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2e0);
      *(undefined1 *)((int)puVar10 + 0x36) = 1;
      uVar5 = DAT_700765b4;
      uVar4 = DAT_700765b0;
      uVar3 = DAT_700765ac;
      *puVar10 = DAT_700765a8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700765c4;
      uVar4 = DAT_700765c0;
      uVar3 = DAT_700765bc;
      puVar10[4] = DAT_700765b8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700765d8;
      uVar5 = DAT_700765d4;
      uVar4 = DAT_700765d0;
      uVar3 = DAT_700765cc;
      puVar10[8] = DAT_700765c8;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined2 *)(puVar10 + 0xd) = DAT_700765dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1c4c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2f0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc2e0);
    if (*(char *)(iVar8 + 0x36) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0x25097b7b >> iVar14) |
                (byte)(-0x1c6ed203 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe3912dfd >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x34 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x36) = 0;
    }
    DAT_70b46c64 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c68);
  }
                    /* WARNING: Could not recover jumptable at 0x713b044c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c64)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713b108c
// Entry: 0x713b108c | Size: 408 bytes
// =========================================================================

void FUN_713b108c(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46c80 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c80), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc350,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc340);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      uVar5 = DAT_70076634;
      uVar4 = DAT_70076630;
      uVar3 = DAT_7007662c;
      *puVar10 = DAT_70076628;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076648;
      uVar5 = DAT_70076644;
      uVar4 = DAT_70076640;
      uVar3 = DAT_7007663c;
      puVar10[4] = DAT_70076638;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007665c;
      uVar5 = DAT_70076658;
      uVar4 = DAT_70076654;
      uVar3 = DAT_70076650;
      puVar10[9] = DAT_7007664c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1d2c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc350);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc340);
    if (*(char *)(iVar8 + 0x38) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xafbf43e9 >> iVar14) |
                (byte)(0x55d5cd91 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x55d5cd91 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x36 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x38) = 0;
    }
    DAT_70b46c7c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c80);
  }
                    /* WARNING: Could not recover jumptable at 0x713b10c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46c7c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713b14bc
// Entry: 0x713b14bc | Size: 432 bytes
// =========================================================================

void FUN_713b14bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46c88 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46c88);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc370,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc360);
        *(undefined1 *)(iVar3 + 0x6d) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70076660,0x6d);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1d7c,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc370);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc360);
      if (*(char *)(iVar3 + 0x6d) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0x8f4359cd >> iVar8) |
                   (byte)(-0x7ef6869f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0x81097961 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (0x6b < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x6d) = 0;
      }
      DAT_70b46c84 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46c88);
    }
  }
  (*DAT_70b46c84)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_713b3a08
// Entry: 0x713b3a08 | Size: 24 bytes
// =========================================================================

int FUN_713b3a08(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4) + 0x10;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_713b3a38
// Entry: 0x713b3a38 | Size: 472 bytes
// =========================================================================

void FUN_713b3a38(int param_1)

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
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar12 = *(int *)(*(int *)(param_1 + 0x18) + 4) + 0x10;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_71340e50(*(int *)(param_1 + 0x14));
    return;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e2c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e2c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc950,iVar12);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc940);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_70076eac;
      uVar4 = DAT_70076ea8;
      uVar3 = DAT_70076ea4;
      *puVar10 = DAT_70076ea0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076ec0;
      uVar5 = DAT_70076ebc;
      uVar4 = DAT_70076eb8;
      uVar3 = DAT_70076eb4;
      puVar10[4] = DAT_70076eb0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70076ed4;
      uVar5 = DAT_70076ed0;
      uVar4 = DAT_70076ecc;
      uVar3 = DAT_70076ec8;
      puVar10[9] = DAT_70076ec4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_70076ed8;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_70076eda;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c60ac,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc950);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc940);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar7 = (byte)(0xc77d4573 >> iVar15) |
                (byte)(-0x164a4c4f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar7;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70b46e28 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e2c);
  }
                    /* WARNING: Could not recover jumptable at 0x713c5868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e28)(param_1 + 4,iVar12);
  return;
}


// =========================================================================
// Function: FUN_713b3ab8
// Entry: 0x713b3ab8 | Size: 184 bytes
// =========================================================================

bool FUN_713b3ab8(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(*param_1 + 0x28))(&uStack_28,param_1);
  uVar2 = FUN_71ba0b38(uStack_20,uStack_28);
  uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
  uVar2 = FUN_71ba13e0(uVar2,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  iVar3 = FUN_71ba17bc();
  bVar1 = false;
  if (iVar3 == param_2) {
    uVar2 = FUN_71ba0b38(uStack_1c,uStack_24);
    uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
    uVar2 = FUN_71ba13e0(uVar2,0x42480000);
    FUN_71ba0b38(uVar2,0x42a00000);
    imp_floorf();
    iVar3 = FUN_71ba17bc();
    bVar1 = iVar3 == param_3;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_713b3d4c
// Entry: 0x713b3d4c | Size: 408 bytes
// =========================================================================

void FUN_713b3d4c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46cc8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46cc8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc390,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc380);
      *(undefined1 *)((int)puVar11 + 0x31) = 1;
      uVar7 = DAT_700766e4;
      uVar6 = DAT_700766e0;
      uVar5 = DAT_700766dc;
      uVar4 = DAT_700766d8;
      uVar3 = DAT_700766d4;
      *puVar11 = DAT_700766d0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_700766fc;
      uVar6 = DAT_700766f8;
      uVar5 = DAT_700766f4;
      uVar4 = DAT_700766f0;
      uVar3 = DAT_700766ec;
      puVar11[6] = DAT_700766e8;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined1 *)(puVar11 + 0xc) = DAT_70076700;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9bf8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc390);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc380);
    if (*(char *)(iVar9 + 0x31) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x377b9db1 >> iVar15) |
                (byte)(-0x30700477 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xcf8ffb89 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2f < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x31) = 0;
    }
    DAT_70b46cc4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46cc8);
  }
                    /* WARNING: Could not recover jumptable at 0x713b3d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46cc4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713b45b4
// Entry: 0x713b45b4 | Size: 388 bytes
// =========================================================================

void FUN_713b45b4(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46cd8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46cd8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3d0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3c0);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007674c;
      uVar6 = DAT_70076748;
      uVar5 = DAT_70076744;
      uVar4 = DAT_70076740;
      uVar3 = DAT_7007673c;
      *puVar11 = DAT_70076738;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70076750;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_70076752;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9c98,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3d0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3c0);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x65f3d5f1 >> iVar15) |
                (byte)(0x1cdc31f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x1cdc31f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70b46cd4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46cd8);
  }
                    /* WARNING: Could not recover jumptable at 0x713b45e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46cd4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713b49d0
// Entry: 0x713b49d0 | Size: 388 bytes
// =========================================================================

void FUN_713b49d0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ce0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ce0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3f0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3e0);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007676c;
      uVar6 = DAT_70076768;
      uVar5 = DAT_70076764;
      uVar4 = DAT_70076760;
      uVar3 = DAT_7007675c;
      *puVar11 = DAT_70076758;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70076770;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_70076772;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9cd4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3f0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc3e0);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x570fc78f >> iVar15) |
                (byte)(-0x382c2403 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xc7d3dbfd >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70b46cdc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ce0);
  }
                    /* WARNING: Could not recover jumptable at 0x713b49fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46cdc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713b4dec
// Entry: 0x713b4dec | Size: 388 bytes
// =========================================================================

void FUN_713b4dec(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ce8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ce8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc410);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc400);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007678c;
      uVar6 = DAT_70076788;
      uVar5 = DAT_70076784;
      uVar4 = DAT_70076780;
      uVar3 = DAT_7007677c;
      *puVar11 = DAT_70076778;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70076790;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_70076792;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9d10,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc410);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc400);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x85232bf3 >> iVar15) |
                (byte)(-0xe9a9ac9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xf1656537 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70b46ce4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ce8);
  }
                    /* WARNING: Could not recover jumptable at 0x713b4e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ce4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713b5208
// Entry: 0x713b5208 | Size: 384 bytes
// =========================================================================

void FUN_713b5208(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46cf0 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46cf0), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc430);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc420);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_700767a0;
      uVar3 = DAT_7007679c;
      *puVar9 = DAT_70076798;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_700767b0;
      uVar4 = DAT_700767ac;
      uVar3 = DAT_700767a8;
      puVar9[3] = DAT_700767a4;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_700767b4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9d4c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc430);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc420);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x23519919 >> iVar13) |
                (byte)(-0x30dad651 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xcf2529af >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b46cec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46cf0);
  }
                    /* WARNING: Could not recover jumptable at 0x713b5234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46cec)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713b5620
// Entry: 0x713b5620 | Size: 364 bytes
// =========================================================================

void FUN_713b5620(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46cf8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46cf8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc450);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc440);
      *(undefined1 *)((int)puVar10 + 0x17) = 1;
      uVar6 = DAT_700767c8;
      uVar5 = DAT_700767c4;
      uVar4 = DAT_700767c0;
      uVar3 = DAT_700767bc;
      *puVar10 = DAT_700767b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar7 = DAT_700767ce;
      *(undefined2 *)(puVar10 + 5) = DAT_700767cc;
      *(undefined1 *)((int)puVar10 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9d8c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc450);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc440);
    if (*(char *)(iVar8 + 0x17) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x9d7d13e5 >> iVar14) |
                 (byte)(-0x2ae85489 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xd517ab77 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x15 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x17) = 0;
    }
    DAT_70b46cf4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46cf8);
  }
                    /* WARNING: Could not recover jumptable at 0x713b564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46cf4)();
  return;
}


// =========================================================================
// Function: FUN_713b7c8c
// Entry: 0x713b7c8c | Size: 324 bytes
// =========================================================================

void FUN_713b7c8c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 0) {
    imp_sincosf(*(undefined4 *)(param_2 + 0x10),&uStack_34,&uStack_28);
    uVar6 = *param_3;
    uVar1 = FUN_71ba21e8(uStack_28,uVar6);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = FUN_71ba0b38(uVar1,*(undefined4 *)(param_2 + 4));
    uVar4 = param_3[1];
    uVar7 = param_3[2];
    uVar2 = FUN_71ba21e8(uStack_34,uVar4);
    uVar1 = FUN_71ba240c(uVar1,uVar2);
    uVar2 = FUN_71ba21e8(uStack_34,uVar6);
    uVar2 = FUN_71ba0b38(uVar2,uVar8);
    uVar4 = FUN_71ba21e8(uStack_28,uVar4);
    uVar2 = FUN_71ba0b38(uVar4,uVar2);
  }
  else {
    FUN_713b7f54(&uStack_34,iVar3,*param_3,param_3[1],param_3[2]);
    uVar5 = *(undefined4 *)(iVar3 + 0x34);
    uVar7 = *(undefined4 *)(iVar3 + 0x38);
    uVar1 = FUN_71ba0b38(uStack_34,*(undefined4 *)(iVar3 + 0x30));
    uVar2 = FUN_71ba0b38(uStack_30,uVar5);
    uVar5 = uStack_2c;
  }
  uVar5 = FUN_71ba0b38(uVar5,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  return;
}


// =========================================================================
// Function: FUN_713b7f54
// Entry: 0x713b7f54 | Size: 276 bytes
// =========================================================================

void FUN_713b7f54(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[4];
  uVar2 = FUN_71ba21e8(param_2[2],param_3);
  uVar3 = FUN_71ba21e8(param_2[6],param_4);
  uVar2 = FUN_71ba0b38(uVar2,uVar3);
  uVar3 = FUN_71ba21e8(param_2[10],param_5);
  uVar2 = FUN_71ba0b38(uVar2,uVar3);
  param_1[2] = uVar2;
  uVar2 = FUN_71ba21e8(uVar5,param_3);
  uVar3 = FUN_71ba21e8(param_2[5],param_4);
  uVar2 = FUN_71ba0b38(uVar2,uVar3);
  uVar3 = FUN_71ba21e8(param_2[9],param_5);
  uVar2 = FUN_71ba0b38(uVar2,uVar3);
  param_1[1] = uVar2;
  uVar1 = FUN_71ba21e8(uVar1,param_3);
  uVar2 = FUN_71ba21e8(uVar4,param_4);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(param_2[8],param_5);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_713b8224
// Entry: 0x713b8224 | Size: 36 bytes
// =========================================================================

bool FUN_713b8224(int param_1)

{
  return *(short *)(param_1 + 0x30) == *DAT_70b88b84;
}


// =========================================================================
// Function: FUN_713b8280
// Entry: 0x713b8280 | Size: 24 bytes
// =========================================================================

void FUN_713b8280(int param_1)

{
  *(undefined2 *)(param_1 + 0x30) = *DAT_70b88b84;
  return;
}


// =========================================================================
// Function: FUN_713b82d0
// Entry: 0x713b82d0 | Size: 60 bytes
// =========================================================================

void FUN_713b82d0(int *param_1)

{
  undefined1 auStack_20 [16];
  
  (**(code **)(*param_1 + 0x28))(auStack_20,param_1);
  FUN_713b8340(param_1,auStack_20);
  return;
}


// =========================================================================
// Function: FUN_713b8340
// Entry: 0x713b8340 | Size: 968 bytes
// =========================================================================

void FUN_713b8340(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  
  uVar8 = *param_2;
  uVar14 = param_2[1];
  uVar12 = param_2[2];
  uVar11 = param_2[3];
  iVar1 = FUN_71ba2d10(uVar8,0xc57a0000);
  iVar2 = FUN_71ba2d50(uVar12,0x457a0000);
  iVar3 = FUN_71ba2d50(uVar14,0x457a0000);
  if (iVar3 != 0) {
    uVar14 = 0x4579f000;
  }
  uVar7 = 0x4579f000;
  if (iVar2 == 0) {
    uVar7 = uVar12;
  }
  iVar2 = FUN_71ba2d10(uVar11,0xc57a0000);
  if (iVar2 != 0) {
    uVar11 = 0xc57a0000;
  }
  if (iVar1 != 0) {
    uVar8 = 0xc57a0000;
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) == 0) {
    uVar8 = FUN_71ba13e0(uVar8,0x42480000);
    FUN_71ba0b38(uVar8,0x42a00000);
    imp_floorf();
    iVar2 = FUN_71ba17bc();
    uVar8 = FUN_71ba13e0(uVar11,0x42480000);
    FUN_71ba0b38(uVar8,0x42a00000);
    imp_floorf();
    iVar1 = FUN_71ba17bc();
    uVar14 = FUN_71ba13e0(uVar14,0x42480000);
    FUN_71ba0b38(uVar14,0x42a00000);
    imp_floorf();
    iVar3 = FUN_71ba17bc();
    if (iVar1 <= iVar3) {
      uVar14 = FUN_71ba13e0(uVar7,0x42480000);
      FUN_71ba0b38(uVar14,0x42a00000);
      imp_floorf();
      iVar4 = FUN_71ba17bc();
      do {
        iVar9 = iVar2;
        if (iVar2 <= iVar4) {
          do {
            iVar5 = FUN_713e6434(iVar9,iVar1);
            switch(*(byte *)(param_1 + 0x3a) & 7) {
            case 1:
              iVar5 = param_1 + 4;
              if (*(int *)(param_1 + 0x14) != 0) {
                iVar5 = *(int *)(param_1 + 0x14) + 0x30;
              }
              iVar5 = FUN_71ba2d70(*(undefined4 *)(iVar5 + 8),0x44610000);
              if (iVar5 == 0) {
                uVar14 = FUN_713ea860(iVar9,iVar1);
              }
              else {
                uVar14 = FUN_713ea8cc(iVar9,iVar1);
              }
              FUN_71357030(uVar14,param_1);
              goto switchD_713b8510_default;
            case 2:
              break;
            case 3:
              goto switchD_713b8510_caseD_3;
            case 4:
              iVar5 = iVar5 + 8;
              break;
            case 5:
              iVar5 = param_1 + 4;
              if (*(int *)(param_1 + 0x14) != 0) {
                iVar5 = *(int *)(param_1 + 0x14) + 0x30;
              }
              iVar5 = FUN_71ba2d70(*(undefined4 *)(iVar5 + 8),0x44610000);
              if (iVar5 == 0) {
                iVar5 = FUN_713ea860(iVar9,iVar1);
              }
              else {
                iVar5 = FUN_713ea8cc(iVar9,iVar1);
              }
switchD_713b8510_caseD_3:
              iVar5 = iVar5 + 4;
              break;
            default:
              goto switchD_713b8510_default;
            }
            FUN_71356ebc(iVar5,param_1);
switchD_713b8510_default:
            iVar9 = iVar9 + 1;
          } while (iVar4 + 1 != iVar9);
        }
        bVar17 = iVar1 != iVar3;
        iVar1 = iVar1 + 1;
      } while (bVar17);
    }
  }
  else {
    uVar8 = FUN_71ba13e0(uVar8,0x43480000);
    FUN_71ba0b38(uVar8,0x41a00000);
    imp_floorf();
    iVar2 = FUN_71ba17bc();
    uVar8 = FUN_71ba13e0(uVar11,0x43480000);
    FUN_71ba0b38(uVar8,0x41a00000);
    imp_floorf();
    iVar1 = FUN_71ba17bc();
    uVar14 = FUN_71ba13e0(uVar14,0x43480000);
    FUN_71ba0b38(uVar14,0x41a00000);
    imp_floorf();
    iVar3 = FUN_71ba17bc();
    if (iVar1 <= iVar3) {
      uVar14 = FUN_71ba13e0(uVar7,0x43480000);
      FUN_71ba0b38(uVar14,0x41a00000);
      imp_floorf();
      iVar4 = FUN_71ba17bc();
      iVar9 = iVar1 * 0xa0 + iVar2 * 4;
      puVar13 = &DAT_70c21090 + iVar9;
      puVar16 = &DAT_70c22990 + iVar9;
      do {
        puVar10 = puVar13;
        iVar9 = (iVar4 - iVar2) + 1;
        puVar15 = puVar16;
        if (iVar2 <= iVar4) {
          do {
            iVar5 = *(int *)(param_1 + 0x14) + 0x30;
            if (*(int *)(param_1 + 0x14) == 0) {
              iVar5 = param_1 + 4;
            }
            iVar5 = FUN_71ba2d70(*(undefined4 *)(iVar5 + 8),0x44610000);
            puVar6 = puVar10;
            if (iVar5 != 0) {
              puVar6 = puVar15;
            }
            FUN_71357030(puVar6,param_1);
            puVar10 = puVar10 + 4;
            puVar15 = puVar15 + 4;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        puVar13 = puVar13 + 0xa0;
        puVar16 = puVar16 + 0xa0;
        bVar17 = iVar1 != iVar3;
        iVar1 = iVar1 + 1;
      } while (bVar17);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713b8c98
// Entry: 0x713b8c98 | Size: 1012 bytes
// =========================================================================

void FUN_713b8c98(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  (**(code **)(*param_1 + 0x28))(&uStack_34,param_1);
  uVar14 = uStack_34;
  iVar1 = FUN_71ba2d10(uStack_34,0xc57a0000);
  uVar11 = uStack_2c;
  if (iVar1 != 0) {
    uStack_34 = 0xc57a0000;
    uVar14 = 0xc57a0000;
  }
  iVar1 = FUN_71ba2d50(uStack_2c,0x457a0000);
  uVar12 = uStack_28;
  if (iVar1 != 0) {
    uVar11 = 0x4579f000;
    uStack_2c = uVar11;
  }
  iVar1 = FUN_71ba2d10(uStack_28,0xc57a0000);
  uVar10 = uStack_30;
  if (iVar1 != 0) {
    uStack_28 = 0xc57a0000;
    uVar12 = 0xc57a0000;
  }
  iVar1 = FUN_71ba2d50(uStack_30,0x457a0000);
  if (iVar1 != 0) {
    uVar10 = 0x4579f000;
    uStack_30 = uVar10;
  }
  if ((*(byte *)((int)param_1 + 0x1d) & 1) == 0) {
    uVar14 = FUN_71ba13e0(uVar14,0x42480000);
    FUN_71ba0b38(uVar14,0x42a00000);
    imp_floorf();
    iVar2 = FUN_71ba17bc();
    uVar14 = FUN_71ba13e0(uVar12,0x42480000);
    FUN_71ba0b38(uVar14,0x42a00000);
    imp_floorf();
    iVar1 = FUN_71ba17bc();
    uVar14 = FUN_71ba13e0(uVar10,0x42480000);
    FUN_71ba0b38(uVar14,0x42a00000);
    imp_floorf();
    iVar3 = FUN_71ba17bc();
    if (iVar1 <= iVar3) {
      uVar11 = FUN_71ba13e0(uVar11,0x42480000);
      FUN_71ba0b38(uVar11,0x42a00000);
      imp_floorf();
      iVar4 = FUN_71ba17bc();
      do {
        iVar8 = iVar2;
        if (iVar2 <= iVar4) {
          do {
            iVar5 = FUN_713e6434(iVar8,iVar1);
            switch(*(byte *)((int)param_1 + 0x3a) & 7) {
            case 1:
              piVar7 = param_1 + 1;
              if (param_1[5] != 0) {
                piVar7 = (int *)(param_1[5] + 0x30);
              }
              iVar5 = FUN_71ba2d70(piVar7[2],0x44610000);
              if (iVar5 == 0) {
                uVar11 = FUN_713ea860(iVar8,iVar1);
              }
              else {
                uVar11 = FUN_713ea8cc(iVar8,iVar1);
              }
              FUN_713570b0(uVar11,param_1);
              goto switchD_713b8e94_default;
            case 2:
              break;
            case 3:
              goto switchD_713b8e94_caseD_3;
            case 4:
              iVar5 = iVar5 + 8;
              break;
            case 5:
              piVar7 = param_1 + 1;
              if (param_1[5] != 0) {
                piVar7 = (int *)(param_1[5] + 0x30);
              }
              iVar5 = FUN_71ba2d70(piVar7[2],0x44610000);
              if (iVar5 == 0) {
                iVar5 = FUN_713ea860(iVar8,iVar1);
              }
              else {
                iVar5 = FUN_713ea8cc(iVar8,iVar1);
              }
switchD_713b8e94_caseD_3:
              iVar5 = iVar5 + 4;
              break;
            default:
              goto switchD_713b8e94_default;
            }
            FUN_71356f3c(iVar5,param_1);
switchD_713b8e94_default:
            iVar8 = iVar8 + 1;
          } while (iVar4 + 1 != iVar8);
        }
        bVar17 = iVar1 != iVar3;
        iVar1 = iVar1 + 1;
      } while (bVar17);
    }
  }
  else {
    uVar14 = FUN_71ba13e0(uVar14,0x43480000);
    FUN_71ba0b38(uVar14,0x41a00000);
    imp_floorf();
    iVar2 = FUN_71ba17bc();
    uVar14 = FUN_71ba13e0(uVar12,0x43480000);
    FUN_71ba0b38(uVar14,0x41a00000);
    imp_floorf();
    iVar1 = FUN_71ba17bc();
    uVar14 = FUN_71ba13e0(uVar10,0x43480000);
    FUN_71ba0b38(uVar14,0x41a00000);
    imp_floorf();
    iVar3 = FUN_71ba17bc();
    if (iVar1 <= iVar3) {
      uVar11 = FUN_71ba13e0(uVar11,0x43480000);
      FUN_71ba0b38(uVar11,0x41a00000);
      imp_floorf();
      iVar4 = FUN_71ba17bc();
      iVar8 = iVar1 * 0xa0 + iVar2 * 4;
      puVar13 = &DAT_70c21090 + iVar8;
      puVar16 = &DAT_70c22990 + iVar8;
      do {
        puVar9 = puVar13;
        iVar8 = (iVar4 - iVar2) + 1;
        puVar15 = puVar16;
        if (iVar2 <= iVar4) {
          do {
            piVar7 = (int *)(param_1[5] + 0x30);
            if (param_1[5] == 0) {
              piVar7 = param_1 + 1;
            }
            iVar5 = FUN_71ba2d70(piVar7[2],0x44610000);
            puVar6 = puVar9;
            if (iVar5 != 0) {
              puVar6 = puVar15;
            }
            FUN_713570b0(puVar6,param_1);
            puVar9 = puVar9 + 4;
            puVar15 = puVar15 + 4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        puVar13 = puVar13 + 0xa0;
        puVar16 = puVar16 + 0xa0;
        bVar17 = iVar1 != iVar3;
        iVar1 = iVar1 + 1;
      } while (bVar17);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713b963c
// Entry: 0x713b963c | Size: 80 bytes
// =========================================================================

int FUN_713b963c(int param_1,char param_2)

{
  *(uint *)(*(int *)(param_1 + 0x18) + 8) = *(uint *)(*(int *)(param_1 + 0x18) + 8) | 0x40;
  if (param_2 == -1) {
    *(uint *)(*(int *)(param_1 + 0x18) + 8) = *(uint *)(*(int *)(param_1 + 0x18) + 8) & 0xffffffbf;
  }
  FUN_71416634(*(undefined4 *)(param_1 + 0x18),&LAB_713b961c);
  return param_1;
}


// =========================================================================
// Function: FUN_713b96e0
// Entry: 0x713b96e0 | Size: 108 bytes
// =========================================================================

void FUN_713b96e0(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  if (pcVar1 == (char *)0x0) {
    return;
  }
  if (*pcVar1 == '\x02') {
    FUN_71422cb0(pcVar1,FUN_713b963c);
    return;
  }
  if (*pcVar1 != '\x01') {
    return;
  }
  *(uint *)(*(int *)(pcVar1 + 0x18) + 8) = *(uint *)(*(int *)(pcVar1 + 0x18) + 8) | 0x40;
  if (param_2 == -1) {
    *(uint *)(*(int *)(pcVar1 + 0x18) + 8) = *(uint *)(*(int *)(pcVar1 + 0x18) + 8) & 0xffffffbf;
  }
  FUN_71416634(*(undefined4 *)(pcVar1 + 0x18),&LAB_713b961c);
  return;
}


// =========================================================================
// Function: FUN_713b97dc
// Entry: 0x713b97dc | Size: 388 bytes
// =========================================================================

void FUN_713b97dc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d00 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d00), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc470);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc460);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_700767e0;
      uVar5 = DAT_700767dc;
      uVar4 = DAT_700767d8;
      uVar3 = DAT_700767d4;
      *puVar11 = DAT_700767d0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_700767e6;
      *(undefined2 *)(puVar11 + 5) = DAT_700767e4;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b9dc4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc470);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc460);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe31b6f0b >> iVar15) |
                (byte)(-0x5238403f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xadc7bfc1 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x15 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x17) = 0;
    }
    DAT_70b46cfc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d00);
  }
                    /* WARNING: Could not recover jumptable at 0x713b9808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46cfc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713b9dfc
// Entry: 0x713b9dfc | Size: 212 bytes
// =========================================================================

void FUN_713b9dfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if ((DAT_710eaf34 == '\0') &&
     ((iVar1 = FUN_713b9fcc(param_1), iVar1 != 0 ||
      (iVar1 = FUN_7149f5dc(*(int *)(param_1 + 0x440) + 4,0x2c0), iVar1 != 0)))) {
    FUN_713bf1e8(*(undefined4 *)(param_1 + 0x440),1);
  }
  FUN_713e4b9c(param_1);
  iVar1 = *(int *)(param_1 + 0x14) + 0x30;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = param_1 + 4;
  }
  FUN_7136d040(iVar1,&uStack_1c);
  piVar2 = (int *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffffe;
  if (*piVar2 != 0) {
    FUN_713b3d4c(*piVar2,piVar2);
    *piVar2 = 0;
  }
  FUN_713e4ad0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


// =========================================================================
// Function: FUN_713b9fcc
// Entry: 0x713b9fcc | Size: 380 bytes
// =========================================================================

void FUN_713b9fcc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d38 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d38), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc570);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc560);
      *(undefined1 *)((int)puVar11 + 0x19) = 1;
      uVar7 = DAT_70076944;
      uVar6 = DAT_70076940;
      uVar5 = DAT_7007693c;
      uVar4 = DAT_70076938;
      uVar3 = DAT_70076934;
      *puVar11 = DAT_70076930;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined1 *)(puVar11 + 6) = DAT_70076948;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bef80,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc570);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc560);
    if (*(char *)(iVar9 + 0x19) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x3dbd4397 >> iVar15) |
                (byte)(0x7ff8d77 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x7ff8d77 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x17 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x19) = 0;
    }
    DAT_70b46d34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d38);
  }
                    /* WARNING: Could not recover jumptable at 0x713b9ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713ba3e0
// Entry: 0x713ba3e0 | Size: 256 bytes
// =========================================================================

void FUN_713ba3e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_2 == -1) {
    return;
  }
  iVar1 = param_1 + *(char *)(param_1 + 0x71c) * 0x1c;
  if (*(char *)(iVar1 + 0x5b8) != '\0') {
    return;
  }
  iVar1 = FUN_715188d8(param_1,*(undefined4 *)(iVar1 + 0x5a4));
  if ((iVar1 < 0) || (iVar1 == param_2)) {
    if (iVar1 < 0) {
      param_2 = FUN_7171f700(param_1);
    }
  }
  else {
    FUN_71518ac4(iVar1);
    param_2 = iVar1;
  }
  if (*(int *)(param_1 + 0x500) != 0) {
    FUN_713ba5e0(param_1,0xffffffff);
  }
  piVar3 = *(int **)(DAT_70c39074 + param_2 * 4);
  iVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3);
  *(int *)(param_1 + 0x500) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_713fd1dc(iVar1,s_gunflash_7006ae0f);
  }
  *(undefined4 *)(param_1 + 0x504) = uVar2;
  FUN_713f90d8(piVar3);
  *(int *)(param_1 + 0x748) = param_2;
  return;
}


// =========================================================================
// Function: FUN_713ba5e0
// Entry: 0x713ba5e0 | Size: 408 bytes
// =========================================================================

void FUN_713ba5e0(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d28 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d28), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc530,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc520);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_700768d0;
      uVar5 = DAT_700768cc;
      uVar4 = DAT_700768c8;
      uVar3 = DAT_700768c4;
      *puVar10 = DAT_700768c0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700768e4;
      uVar5 = DAT_700768e0;
      uVar4 = DAT_700768dc;
      uVar3 = DAT_700768d8;
      puVar10[5] = DAT_700768d4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_700768e8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713beee0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc530);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc520);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x3369637b >> iVar14) |
                (byte)(0x696dc51b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x696dc51b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70b46d24 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d28);
  }
                    /* WARNING: Could not recover jumptable at 0x713ba614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d24)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713bb684
// Entry: 0x713bb684 | Size: 164 bytes
// =========================================================================

int FUN_713bb684(int param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x468) == param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x46c) == param_2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x470) == param_2) {
    return 2;
  }
  if (*(int *)(param_1 + 0x474) != param_2) {
    if (*(int *)(param_1 + 0x478) == param_2) {
      return 4;
    }
    if (*(int *)(param_1 + 0x47c) != param_2) {
      if (*(int *)(param_1 + 0x480) != param_2) {
        cVar1 = -1;
        if (*(int *)(param_1 + 0x484) == param_2) {
          cVar1 = '\a';
        }
        return (int)cVar1;
      }
      return 6;
    }
    return 5;
  }
  return 3;
}


// =========================================================================
// Function: FUN_713bbf6c
// Entry: 0x713bbf6c | Size: 412 bytes
// =========================================================================

void FUN_713bbf6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46d18 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d18);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc4f0,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc4e0);
        *(undefined1 *)(iVar4 + 0x60) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70076828,0x60);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bee40,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc4f0);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc4e0);
      if (*(char *)(iVar4 + 0x60) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x7787b167 >> iVar9) |
                  (byte)(-0xc2adab3 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xf3d5254d >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x5e < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x60) = 0;
      }
      DAT_70b46d14 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713bbfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d14)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713bc3bc
// Entry: 0x713bc3bc | Size: 408 bytes
// =========================================================================

void FUN_713bc3bc(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d20 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d20), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc510,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc500);
      *(undefined1 *)((int)puVar11 + 0x31) = 1;
      uVar7 = DAT_7007689c;
      uVar6 = DAT_70076898;
      uVar5 = DAT_70076894;
      uVar4 = DAT_70076890;
      uVar3 = DAT_7007688c;
      *puVar11 = DAT_70076888;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_700768b4;
      uVar6 = DAT_700768b0;
      uVar5 = DAT_700768ac;
      uVar4 = DAT_700768a8;
      uVar3 = DAT_700768a4;
      puVar11[6] = DAT_700768a0;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined1 *)(puVar11 + 0xc) = DAT_700768b8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bee90,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc510);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc500);
    if (*(char *)(iVar9 + 0x31) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x57fcd0d >> iVar15) |
                (byte)(0x13bdc327 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x13bdc327 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2f < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x31) = 0;
    }
    DAT_70b46d1c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d20);
  }
                    /* WARNING: Could not recover jumptable at 0x713bc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d1c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713bc7ec
// Entry: 0x713bc7ec | Size: 416 bytes
// =========================================================================

void FUN_713bc7ec(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d30 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d30), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc550,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc540);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_700768fc;
      uVar4 = DAT_700768f8;
      uVar3 = DAT_700768f4;
      *puVar10 = DAT_700768f0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076910;
      uVar5 = DAT_7007690c;
      uVar4 = DAT_70076908;
      uVar3 = DAT_70076904;
      puVar10[4] = DAT_70076900;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70076924;
      uVar5 = DAT_70076920;
      uVar4 = DAT_7007691c;
      uVar3 = DAT_70076918;
      puVar10[9] = DAT_70076914;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_70076928;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bef30,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc550);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc540);
    if (*(char *)(iVar8 + 0x39) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x27c90d07 >> iVar14) |
                (byte)(-0x2a4e90a9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd5b16f57 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x37 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x39) = 0;
    }
    DAT_70b46d2c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d30);
  }
                    /* WARNING: Could not recover jumptable at 0x713bc820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d2c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713bcc24
// Entry: 0x713bcc24 | Size: 372 bytes
// =========================================================================

void FUN_713bcc24(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d40 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d40), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc590);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc580);
      *(undefined1 *)(puVar11 + 6) = 1;
      uVar7 = DAT_70076964;
      uVar6 = DAT_70076960;
      uVar5 = DAT_7007695c;
      uVar4 = DAT_70076958;
      uVar3 = DAT_70076954;
      *puVar11 = DAT_70076950;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713befbc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc590);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc580);
    if (*(char *)(iVar9 + 0x18) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x5949d57f >> iVar15) |
                (byte)(0x69bd2b5b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x69bd2b5b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x16 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x18) = 0;
    }
    DAT_70b46d3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d40);
  }
                    /* WARNING: Could not recover jumptable at 0x713bcc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d3c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713bd448
// Entry: 0x713bd448 | Size: 380 bytes
// =========================================================================

void FUN_713bd448(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d50 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d50), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5d0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5c0);
      *(undefined1 *)((int)puVar11 + 0x19) = 1;
      uVar7 = DAT_7007699c;
      uVar6 = DAT_70076998;
      uVar5 = DAT_70076994;
      uVar4 = DAT_70076990;
      uVar3 = DAT_7007698c;
      *puVar11 = DAT_70076988;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined1 *)(puVar11 + 6) = DAT_700769a0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bf034,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5d0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5c0);
    if (*(char *)(iVar9 + 0x19) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xefbff58d >> iVar15) |
                (byte)(-0x22c6aa27 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xdd3955d9 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x17 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x19) = 0;
    }
    DAT_70b46d4c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d50);
  }
                    /* WARNING: Could not recover jumptable at 0x713bd474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d4c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713bd85c
// Entry: 0x713bd85c | Size: 408 bytes
// =========================================================================

void FUN_713bd85c(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d58 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d58), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5f0,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5e0);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_700769b4;
      uVar4 = DAT_700769b0;
      uVar3 = DAT_700769ac;
      *puVar10 = DAT_700769a8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700769c8;
      uVar5 = DAT_700769c4;
      uVar4 = DAT_700769c0;
      uVar3 = DAT_700769bc;
      puVar10[4] = DAT_700769b8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_700769cc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bf070,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5f0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5e0);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x135b9fb3 >> iVar14) |
                (byte)(-0x265aca69 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd9a53597 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70b46d54 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d58);
  }
                    /* WARNING: Could not recover jumptable at 0x713bd890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d54)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713bdc8c
// Entry: 0x713bdc8c | Size: 388 bytes
// =========================================================================

void FUN_713bdc8c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d60 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d60), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc610);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc600);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_700769e0;
      uVar5 = DAT_700769dc;
      uVar4 = DAT_700769d8;
      uVar3 = DAT_700769d4;
      *puVar11 = DAT_700769d0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_700769e6;
      *(undefined2 *)(puVar11 + 5) = DAT_700769e4;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bf0c0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc610);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc600);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xc7a9fbe5 >> iVar15) |
                (byte)(0x61f17745 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x61f17745 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x15 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x17) = 0;
    }
    DAT_70b46d5c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d60);
  }
                    /* WARNING: Could not recover jumptable at 0x713bdcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d5c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713be0a8
// Entry: 0x713be0a8 | Size: 412 bytes
// =========================================================================

void FUN_713be0a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46d68 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d68);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc630,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc620);
        *(undefined1 *)(iVar4 + 0x4f) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_700769e8,0x4f);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bf0f8,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc630);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc620);
      if (*(char *)(iVar4 + 0x4f) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x29270ddd >> iVar9) |
                  (byte)(0x611df905 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x611df905 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x4d < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x4f) = 0;
      }
      DAT_70b46d64 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d68);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713be0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d64)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713be4f8
// Entry: 0x713be4f8 | Size: 412 bytes
// =========================================================================

void FUN_713be4f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46d70 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d70);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc650,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc640);
        *(undefined1 *)(iVar4 + 0x5a) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70076a38,0x5a);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bf148,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc650);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc640);
      if (*(char *)(iVar4 + 0x5a) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x29297fe1 >> iVar9) |
                  (byte)(0x415dbdcb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x415dbdcb >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x58 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x5a) = 0;
      }
      DAT_70b46d6c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d70);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713be52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d6c)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713be948
// Entry: 0x713be948 | Size: 436 bytes
// =========================================================================

void FUN_713be948(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d78 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d78), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc670,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc660);
      *(undefined1 *)((int)puVar10 + 0x3f) = 1;
      uVar6 = DAT_70076aa8;
      uVar5 = DAT_70076aa4;
      uVar4 = DAT_70076aa0;
      uVar3 = DAT_70076a9c;
      *puVar10 = DAT_70076a98;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076abc;
      uVar5 = DAT_70076ab8;
      uVar4 = DAT_70076ab4;
      uVar3 = DAT_70076ab0;
      puVar10[5] = DAT_70076aac;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70076ad0;
      uVar5 = DAT_70076acc;
      uVar4 = DAT_70076ac8;
      uVar3 = DAT_70076ac4;
      puVar10[10] = DAT_70076ac0;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_70076ad4;
      *(undefined1 *)((int)puVar10 + 0x3e) = DAT_70076ad6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713bf198,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc670);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc660);
    if (*(char *)(iVar8 + 0x3f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0xfbef85f1 >> iVar14) |
                (byte)(-0x225ce697 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xdda31969 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3f) = 0;
    }
    DAT_70b46d74 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d78);
  }
                    /* WARNING: Could not recover jumptable at 0x713be97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d74)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713bf1e8
// Entry: 0x713bf1e8 | Size: 408 bytes
// =========================================================================

void FUN_713bf1e8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d80 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d80), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc690,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc680);
      *(undefined1 *)(puVar11 + 0x10) = 1;
      uVar6 = DAT_70076ae8;
      uVar5 = DAT_70076ae4;
      uVar4 = DAT_70076ae0;
      uVar3 = DAT_70076adc;
      *puVar11 = DAT_70076ad8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70076afc;
      uVar5 = DAT_70076af8;
      uVar4 = DAT_70076af4;
      uVar3 = DAT_70076af0;
      puVar11[5] = DAT_70076aec;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_70076b14;
      uVar6 = DAT_70076b10;
      uVar5 = DAT_70076b0c;
      uVar4 = DAT_70076b08;
      uVar3 = DAT_70076b04;
      puVar11[10] = DAT_70076b00;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      puVar11[0xe] = uVar6;
      puVar11[0xf] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c1728,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc690);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc680);
    if (*(char *)(iVar9 + 0x40) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x2549d30d >> iVar15) |
                (byte)(0x65617345 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x65617345 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x3e < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x40) = 0;
    }
    DAT_70b46d7c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d80);
  }
                    /* WARNING: Could not recover jumptable at 0x713bf21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d7c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713bf618
// Entry: 0x713bf618 | Size: 384 bytes
// =========================================================================

void FUN_713bf618(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d88 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d88), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6b0);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6a0);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_70076b20;
      uVar3 = DAT_70076b1c;
      *puVar9 = DAT_70076b18;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70076b30;
      uVar4 = DAT_70076b2c;
      uVar3 = DAT_70076b28;
      puVar9[3] = DAT_70076b24;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_70076b34;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713779f0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6b0);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6a0);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xa1d573c5 >> iVar13) |
                (byte)(-0x1038407f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xefc7bf81 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b46d84 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d88);
  }
                    /* WARNING: Could not recover jumptable at 0x713bf644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d84)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713bfa30
// Entry: 0x713bfa30 | Size: 388 bytes
// =========================================================================

void FUN_713bfa30(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d90 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d90), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6d0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6c0);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_70076b48;
      uVar5 = DAT_70076b44;
      uVar4 = DAT_70076b40;
      uVar3 = DAT_70076b3c;
      *puVar10 = DAT_70076b38;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076b5c;
      uVar5 = DAT_70076b58;
      uVar4 = DAT_70076b54;
      uVar3 = DAT_70076b50;
      puVar10[5] = DAT_70076b4c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_70076b60;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131a7e0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6d0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6c0);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd93d3145 >> iVar14) |
                (byte)(-0x1840f2d9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe7bf0d27 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x27 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x29) = 0;
    }
    DAT_70b46d8c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d90);
  }
                    /* WARNING: Could not recover jumptable at 0x713bfa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d8c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713bfe4c
// Entry: 0x713bfe4c | Size: 380 bytes
// =========================================================================

void FUN_713bfe4c(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d98 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d98), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6f0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6e0);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_70076b78;
      uVar5 = DAT_70076b74;
      uVar4 = DAT_70076b70;
      uVar3 = DAT_70076b6c;
      *puVar10 = DAT_70076b68;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076b8c;
      uVar5 = DAT_70076b88;
      uVar4 = DAT_70076b84;
      uVar3 = DAT_70076b80;
      puVar10[5] = DAT_70076b7c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c1778,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6f0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc6e0);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb4d771d >> iVar14) |
                (byte)(-0x44defc41 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xbb2103bf >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x26 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x28) = 0;
    }
    DAT_70b46d94 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d98);
  }
                    /* WARNING: Could not recover jumptable at 0x713bfe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d94)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c0260
// Entry: 0x713c0260 | Size: 388 bytes
// =========================================================================

void FUN_713c0260(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46da0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46da0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc710);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc700);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_70076ba0;
      uVar5 = DAT_70076b9c;
      uVar4 = DAT_70076b98;
      uVar3 = DAT_70076b94;
      *puVar10 = DAT_70076b90;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076bb4;
      uVar5 = DAT_70076bb0;
      uVar4 = DAT_70076bac;
      uVar3 = DAT_70076ba8;
      puVar10[5] = DAT_70076ba4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_70076bb8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c17c8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc710);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc700);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x19cfe32d >> iVar14) |
                (byte)(-0x266c1045 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd993efbb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x27 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x29) = 0;
    }
    DAT_70b46d9c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46da0);
  }
                    /* WARNING: Could not recover jumptable at 0x713c028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d9c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c067c
// Entry: 0x713c067c | Size: 388 bytes
// =========================================================================

void FUN_713c067c(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46da8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46da8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc730);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc720);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70076bd0;
      uVar5 = DAT_70076bcc;
      uVar4 = DAT_70076bc8;
      uVar3 = DAT_70076bc4;
      *puVar10 = DAT_70076bc0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076be4;
      uVar5 = DAT_70076be0;
      uVar4 = DAT_70076bdc;
      uVar3 = DAT_70076bd8;
      puVar10[5] = DAT_70076bd4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70076be8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c1818,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc730);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc720);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd3c78945 >> iVar14) |
                (byte)(0x5f694973 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x5f694973 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70b46da4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46da8);
  }
                    /* WARNING: Could not recover jumptable at 0x713c06a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46da4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c0a98
// Entry: 0x713c0a98 | Size: 380 bytes
// =========================================================================

void FUN_713c0a98(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46db0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46db0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc750);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc740);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70076c00;
      uVar5 = DAT_70076bfc;
      uVar4 = DAT_70076bf8;
      uVar3 = DAT_70076bf4;
      *puVar11 = DAT_70076bf0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70076c18;
      uVar6 = DAT_70076c14;
      uVar5 = DAT_70076c10;
      uVar4 = DAT_70076c0c;
      uVar3 = DAT_70076c08;
      puVar11[5] = DAT_70076c04;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c1868,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc750);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc740);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x1ff3fb37 >> iVar15) |
                (byte)(-0x14d86497 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xeb279b69 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70b46dac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46db0);
  }
                    /* WARNING: Could not recover jumptable at 0x713c0ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46dac)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c0eac
// Entry: 0x713c0eac | Size: 400 bytes
// =========================================================================

void FUN_713c0eac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46db8 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46db8), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc770,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc760);
      *(undefined1 *)(iVar4 + 0x4e) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70076c20,0x4e);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c18b8,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc770);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc760);
    if (*(char *)(iVar4 + 0x4e) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xbb935373 >> iVar9) | (byte)(0x39e3c19b << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x39e3c19b >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x4c < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x4e) = 0;
    }
    DAT_70b46db4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46db8);
  }
                    /* WARNING: Could not recover jumptable at 0x713c0ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46db4)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713c1958
// Entry: 0x713c1958 | Size: 76 bytes
// =========================================================================

void FUN_713c1958(int param_1,int param_2)

{
  if (1 < *(int *)(param_1 + 0x59c)) {
    return;
  }
  FUN_713bc7ec(param_1,0);
  if (param_2 != 0) {
    FUN_713afbc8(DAT_70b46c18);
  }
  FUN_7149656c(*(undefined4 *)(param_1 + 0x59c));
  return;
}


// =========================================================================
// Function: FUN_713c1f88
// Entry: 0x713c1f88 | Size: 400 bytes
// =========================================================================

void FUN_713c1f88(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46dc8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46dc8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7d0,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7c0);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70076cc0;
      uVar5 = DAT_70076cbc;
      uVar4 = DAT_70076cb8;
      uVar3 = DAT_70076cb4;
      *puVar11 = DAT_70076cb0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70076cd8;
      uVar6 = DAT_70076cd4;
      uVar5 = DAT_70076cd0;
      uVar4 = DAT_70076ccc;
      uVar3 = DAT_70076cc8;
      puVar11[5] = DAT_70076cc4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c38a0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7d0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7c0);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xc59f19cf >> iVar15) |
                (byte)(-0x2450bc7d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xdbaf4383 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70b46dc4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46dc8);
  }
                    /* WARNING: Could not recover jumptable at 0x713c1fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46dc4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713c23b0
// Entry: 0x713c23b0 | Size: 380 bytes
// =========================================================================

void FUN_713c23b0(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46dd0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46dd0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7f0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7e0);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_70076cf0;
      uVar5 = DAT_70076cec;
      uVar4 = DAT_70076ce8;
      uVar3 = DAT_70076ce4;
      *puVar10 = DAT_70076ce0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076d04;
      uVar5 = DAT_70076d00;
      uVar4 = DAT_70076cfc;
      uVar3 = DAT_70076cf8;
      puVar10[5] = DAT_70076cf4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c38f0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7f0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc7e0);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x65f3d5f1 >> iVar14) |
                (byte)(0x1cdc31f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x1cdc31f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x26 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x28) = 0;
    }
    DAT_70b46dcc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46dd0);
  }
                    /* WARNING: Could not recover jumptable at 0x713c23dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46dcc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c27c4
// Entry: 0x713c27c4 | Size: 384 bytes
// =========================================================================

void FUN_713c27c4(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46dd8 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46dd8), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc810);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc800);
      *(undefined1 *)((int)puVar9 + 0x21) = 1;
      uVar5 = DAT_70076d14;
      uVar4 = DAT_70076d10;
      uVar3 = DAT_70076d0c;
      *puVar9 = DAT_70076d08;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70076d24;
      uVar4 = DAT_70076d20;
      uVar3 = DAT_70076d1c;
      puVar9[4] = DAT_70076d18;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined1 *)(puVar9 + 8) = DAT_70076d28;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c3940,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc810);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc800);
    if (*(char *)(iVar7 + 0x21) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x570fc78f >> iVar13) |
                (byte)(-0x382c2403 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xc7d3dbfd >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1f < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x21) = 0;
    }
    DAT_70b46dd4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46dd8);
  }
                    /* WARNING: Could not recover jumptable at 0x713c27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46dd4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c2bdc
// Entry: 0x713c2bdc | Size: 424 bytes
// =========================================================================

void FUN_713c2bdc(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46de0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46de0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc830,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc820);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_70076d3c;
      uVar4 = DAT_70076d38;
      uVar3 = DAT_70076d34;
      *puVar10 = DAT_70076d30;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076d50;
      uVar5 = DAT_70076d4c;
      uVar4 = DAT_70076d48;
      uVar3 = DAT_70076d44;
      puVar10[4] = DAT_70076d40;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70076d64;
      uVar5 = DAT_70076d60;
      uVar4 = DAT_70076d5c;
      uVar3 = DAT_70076d58;
      puVar10[9] = DAT_70076d54;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_70076d68;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_70076d6a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c3990,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc830);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc820);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x23519919 >> iVar14) |
                (byte)(-0x30dad651 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xcf2529af >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x39 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70b46ddc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46de0);
  }
                    /* WARNING: Could not recover jumptable at 0x713c2c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ddc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713c301c
// Entry: 0x713c301c | Size: 388 bytes
// =========================================================================

void FUN_713c301c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46de8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46de8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc850);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc840);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_70076d84;
      uVar6 = DAT_70076d80;
      uVar5 = DAT_70076d7c;
      uVar4 = DAT_70076d78;
      uVar3 = DAT_70076d74;
      *puVar11 = DAT_70076d70;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70076d88;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_70076d8a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c39e0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc850);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc840);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x9d7d13e5 >> iVar15) |
                (byte)(-0x2ae85489 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd517ab77 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70b46de4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46de8);
  }
                    /* WARNING: Could not recover jumptable at 0x713c3048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46de4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c3438
// Entry: 0x713c3438 | Size: 416 bytes
// =========================================================================

void FUN_713c3438(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46df0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46df0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc870,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc860);
      *(undefined1 *)((int)puVar10 + 0x2b) = 1;
      uVar6 = DAT_70076da0;
      uVar5 = DAT_70076d9c;
      uVar4 = DAT_70076d98;
      uVar3 = DAT_70076d94;
      *puVar10 = DAT_70076d90;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076db4;
      uVar5 = DAT_70076db0;
      uVar4 = DAT_70076dac;
      uVar3 = DAT_70076da8;
      puVar10[5] = DAT_70076da4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70076db8;
      *(undefined1 *)((int)puVar10 + 0x2a) = DAT_70076dba;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c3a1c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc870);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc860);
    if (*(char *)(iVar8 + 0x2b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x297d914f >> iVar14) |
                (byte)(-0x2ea4e4e9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd15b1b17 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x29 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2b) = 0;
    }
    DAT_70b46dec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46df0);
  }
  (*DAT_70b46dec)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713c3c6c
// Entry: 0x713c3c6c | Size: 452 bytes
// =========================================================================

void FUN_713c3c6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46df8 & 1) == 0) {
    iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46df8);
    if (iVar7 != 0) {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc890,param_2,param_3,param_4);
      if (*pcVar8 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc880);
        *(undefined1 *)((int)puVar10 + 0x3a) = 1;
        uVar5 = DAT_70076dcc;
        uVar4 = DAT_70076dc8;
        uVar3 = DAT_70076dc4;
        *puVar10 = DAT_70076dc0;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar6 = DAT_70076de0;
        uVar5 = DAT_70076ddc;
        uVar4 = DAT_70076dd8;
        uVar3 = DAT_70076dd4;
        puVar10[4] = DAT_70076dd0;
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar10[8] = uVar6;
        uVar6 = DAT_70076df4;
        uVar5 = DAT_70076df0;
        uVar4 = DAT_70076dec;
        uVar3 = DAT_70076de8;
        puVar10[9] = DAT_70076de4;
        puVar10[10] = uVar3;
        puVar10[0xb] = uVar4;
        puVar10[0xc] = uVar5;
        puVar10[0xd] = uVar6;
        *(undefined2 *)(puVar10 + 0xe) = DAT_70076df8;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c45b4,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc890);
        *puVar11 = 1;
      }
      iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc880);
      if (*(char *)(iVar7 + 0x3a) != '\0') {
        uVar9 = 0;
        uVar12 = 0;
        do {
          iVar13 = (uVar12 & 7) * 8;
          uVar14 = iVar13 - 0x20;
          bVar15 = (byte)(0xb1dfcd87 >> iVar13) |
                   (byte)(-0x3a6082cf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar14) {
            bVar15 = (byte)(0xc59f7d31 >> (uVar14 & 0xff));
          }
          *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar15;
          bVar1 = uVar9 == 0;
          bVar2 = (0x38 < uVar12) <= uVar9;
          uVar9 = uVar9 + (0xfffffffe < uVar12);
          uVar12 = uVar12 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar7 + 0x3a) = 0;
      }
      DAT_70b46df4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46df8);
    }
  }
  (*DAT_70b46df4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_713c40c8
// Entry: 0x713c40c8 | Size: 440 bytes
// =========================================================================

void FUN_713c40c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46e00 & 1) == 0) {
    iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e00);
    if (iVar8 != 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8b0,param_2,param_3,param_4);
      if (*pcVar9 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8a0);
        *(undefined1 *)((int)puVar10 + 0x2b) = 1;
        uVar6 = DAT_70076e10;
        uVar5 = DAT_70076e0c;
        uVar4 = DAT_70076e08;
        uVar3 = DAT_70076e04;
        *puVar10 = DAT_70076e00;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10[4] = uVar6;
        uVar6 = DAT_70076e24;
        uVar5 = DAT_70076e20;
        uVar4 = DAT_70076e1c;
        uVar3 = DAT_70076e18;
        puVar10[5] = DAT_70076e14;
        puVar10[6] = uVar3;
        puVar10[7] = uVar4;
        puVar10[8] = uVar5;
        puVar10[9] = uVar6;
        *(undefined2 *)(puVar10 + 10) = DAT_70076e28;
        *(undefined1 *)((int)puVar10 + 0x2a) = DAT_70076e2a;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c4604,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8b0);
        *puVar11 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8a0);
      if (*(char *)(iVar8 + 0x2b) != '\0') {
        uVar12 = 0;
        uVar13 = 0;
        do {
          iVar14 = (uVar12 & 7) * 8;
          bVar7 = (byte)(0x33032df5 >> iVar14) |
                  (byte)(-0xaa870ed << ((uVar12 & 7) * -8 + 0x20 & 0xff));
          uVar15 = iVar14 - 0x20;
          if (-1 < (int)uVar15) {
            bVar7 = (byte)(0xf5578f13 >> (uVar15 & 0xff));
          }
          *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
          bVar16 = 0xfffffffe < uVar12;
          bVar1 = uVar13 == 0;
          bVar2 = (0x29 < uVar12) <= uVar13;
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 + bVar16;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar8 + 0x2b) = 0;
      }
      DAT_70b46dfc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e00);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713c40fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46dfc)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713c4654
// Entry: 0x713c4654 | Size: 392 bytes
// =========================================================================

void FUN_713c4654(undefined4 param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e0c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e0c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8f0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8e0);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_70076e38;
      uVar3 = DAT_70076e34;
      *puVar10 = DAT_70076e30;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_70076e48;
      uVar4 = DAT_70076e44;
      uVar3 = DAT_70076e40;
      puVar10[3] = DAT_70076e3c;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_70076e4e;
      *(undefined2 *)(puVar10 + 7) = DAT_70076e4c;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131c028,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8f0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc8e0);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd54d5575 >> iVar14) |
                (byte)(-0x289428c9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd76bd737 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x1d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1f) = 0;
    }
    DAT_70b46e08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e0c);
  }
                    /* WARNING: Could not recover jumptable at 0x713c4680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e08)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c4a74
// Entry: 0x713c4a74 | Size: 388 bytes
// =========================================================================

void FUN_713c4a74(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e14 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e14), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc910);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc900);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_70076e5c;
      uVar4 = DAT_70076e58;
      uVar3 = DAT_70076e54;
      *puVar10 = DAT_70076e50;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076e70;
      uVar5 = DAT_70076e6c;
      uVar4 = DAT_70076e68;
      uVar3 = DAT_70076e64;
      puVar10[4] = DAT_70076e60;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_70076e74;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130e3bc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc910);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc900);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc77d4573 >> iVar14) |
                (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70b46e10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e14);
  }
                    /* WARNING: Could not recover jumptable at 0x713c4aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e10)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c4e90
// Entry: 0x713c4e90 | Size: 32 bytes
// =========================================================================

undefined4 FUN_713c4e90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    uVar1 = imp_atan2f(*(uint *)(iVar2 + 0x10) ^ 0x80000000,*(undefined4 *)(iVar2 + 0x14));
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x10);
}


// =========================================================================
// Function: FUN_713c4ee4
// Entry: 0x713c4ee4 | Size: 112 bytes
// =========================================================================

void FUN_713c4ee4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[10] = 0x3f800000;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[6] = 0;
    puVar3[2] = 0;
    uVar1 = imp_cosf(param_2);
    puVar3[5] = uVar1;
    uVar2 = imp_sinf(param_2);
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    puVar3[4] = uVar2 ^ 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


// =========================================================================
// Function: FUN_713c5c74
// Entry: 0x713c5c74 | Size: 416 bytes
// =========================================================================

void FUN_713c5c74(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e34 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e34), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc970,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc960);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_70076eec;
      uVar4 = DAT_70076ee8;
      uVar3 = DAT_70076ee4;
      *puVar10 = DAT_70076ee0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70076efc;
      uVar4 = DAT_70076ef8;
      uVar3 = DAT_70076ef4;
      puVar10[4] = DAT_70076ef0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70076f10;
      uVar5 = DAT_70076f0c;
      uVar4 = DAT_70076f08;
      uVar3 = DAT_70076f04;
      puVar10[8] = DAT_70076f00;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_70076f14;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c60fc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc970);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc960);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xe569d1dd >> iVar14) |
                (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x750729cb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x33 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x35) = 0;
    }
    DAT_70b46e30 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e34);
  }
                    /* WARNING: Could not recover jumptable at 0x713c5ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e30)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713c614c
// Entry: 0x713c614c | Size: 420 bytes
// =========================================================================

void FUN_713c614c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e3c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e3c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc990,param_2,param_3);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc980);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_70076f28;
      uVar5 = DAT_70076f24;
      uVar4 = DAT_70076f20;
      uVar3 = DAT_70076f1c;
      *puVar11 = DAT_70076f18;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70076f40;
      uVar6 = DAT_70076f3c;
      uVar5 = DAT_70076f38;
      uVar4 = DAT_70076f34;
      uVar3 = DAT_70076f30;
      puVar11[5] = DAT_70076f2c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_70076f44;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c6e60,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc990);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc980);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar16 = 0;
      do {
        iVar14 = (uVar13 & 7) * 8;
        bVar8 = (byte)(0xf7f5f1d5 >> iVar14) |
                (byte)(-0x6ede64e1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar8 = (byte)(0x91219b1f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar16 == 0;
        bVar2 = (0x2b < uVar13) <= uVar16;
        uVar13 = uVar13 + 1;
        uVar16 = uVar16 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2d) = 0;
    }
    DAT_70b46e38 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e3c);
  }
                    /* WARNING: Could not recover jumptable at 0x713c6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e38)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713c6588
// Entry: 0x713c6588 | Size: 1012 bytes
// =========================================================================

void FUN_713c6588(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar9 = *(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4);
  iVar6 = *(int *)(iVar9 + 0x74);
  uStack_40 = *(undefined4 *)(iVar6 + 0x374);
  uStack_3c = *(undefined4 *)(iVar6 + 0x378);
  uStack_38 = *(undefined4 *)(iVar6 + 0x37c);
  iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar6 + 0x3e0),0);
  if (((iVar3 == 0) || (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar6 + 0x3e4),0), iVar3 == 0)) ||
     (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar6 + 1000),0), iVar3 == 0)) {
    FUN_7136d040(&uStack_40,(undefined4 *)(iVar6 + 0x3e0));
  }
  bVar2 = 0;
  bVar1 = 0;
  uStack_44 = 0;
  if ((*(byte *)(param_1 + 0x45) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    FUN_713b7f54(&uStack_30,iVar3,uStack_40,uStack_3c,uStack_38);
    uVar8 = *(undefined4 *)(iVar3 + 0x34);
    uVar7 = *(undefined4 *)(iVar3 + 0x38);
    uVar4 = FUN_71ba0b38(uStack_30,*(undefined4 *)(iVar3 + 0x30));
    uVar5 = uStack_28;
    uVar8 = FUN_71ba0b38(uStack_2c,uVar8);
    uVar5 = FUN_71ba0b38(uVar5,uVar7);
    bVar1 = FUN_713d9fa4(uVar4,uVar8,uVar5,&uStack_44,1,0);
    iVar3 = FUN_71ba2d50(uStack_44,uVar5);
    bVar1 = bVar1 & iVar3 != 0;
  }
  FUN_7136cdfc(&uStack_50);
  if ((*(byte *)(*(int *)(param_1 + 0x388) + 0xcd) & 0x20) != 0) {
    FUN_7136d040(&uStack_50,&uStack_40);
    iVar6 = *(int *)(iVar9 + 0x74);
    uStack_50 = uStack_50 ^ 0x80000000;
    iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar6 + 0x3ec),0);
    if (((iVar3 == 0) || (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar6 + 0x3f0),0), iVar3 == 0)) ||
       (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar6 + 0x3f4),0), iVar3 == 0)) {
      FUN_7136d040(&uStack_50,(undefined4 *)(iVar6 + 0x3ec));
    }
    if ((*(byte *)(param_1 + 0x45) & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      FUN_713b7f54(&uStack_30,iVar3,uStack_50,uStack_4c,uStack_48);
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      uVar8 = *(undefined4 *)(iVar3 + 0x38);
      uVar5 = FUN_71ba0b38(uStack_30,*(undefined4 *)(iVar3 + 0x30));
      uVar4 = FUN_71ba0b38(uStack_2c,uVar4);
      uVar8 = FUN_71ba0b38(uStack_28,uVar8);
      bVar2 = FUN_713d9fa4(uVar5,uVar4,uVar8,&uStack_44,1,0);
      iVar3 = FUN_71ba2d50(uStack_44,uVar8);
      bVar2 = bVar2 & iVar3 != 0;
    }
  }
  iVar3 = FUN_713b3a08(param_1);
  iVar6 = *(int *)(param_1 + 0x98c);
  if (iVar6 == 0) {
    if (bVar1 != 0 || iVar3 == 0) goto LAB_713c68a8;
    iVar6 = FUN_7144d354(DAT_70ffd280,s_nitro_70067541,&uStack_40,iVar3,1);
    *(int *)(param_1 + 0x98c) = iVar6;
    if (iVar6 == 0) goto LAB_713c68a8;
    FUN_7144f5c8(iVar6,1);
  }
  else {
    FUN_7144f9f0(iVar6,1,param_2 & 0x7fffffff);
    if (bVar1 == 1 && *(char *)(iVar6 + 0x54) == '\0') {
      FUN_7144e990(iVar6);
      goto LAB_713c68a8;
    }
    if (bVar1 != 0 || *(char *)(iVar6 + 0x54) != '\x01') goto LAB_713c68a8;
  }
  FUN_7144e57c(iVar6);
LAB_713c68a8:
  if ((*(byte *)(*(int *)(param_1 + 0x388) + 0xcd) & 0x20) == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x990);
  if (iVar6 == 0) {
    if (bVar1 != 0 || iVar3 == 0) {
      return;
    }
    iVar6 = FUN_7144d354(DAT_70ffd280,s_nitro_70067541,&uStack_50,iVar3,1);
    *(int *)(param_1 + 0x990) = iVar6;
    if (iVar6 == 0) {
      return;
    }
    FUN_7144f5c8(iVar6,1);
  }
  else {
    FUN_7144f9f0(iVar6,1,param_2 & 0x7fffffff);
    if (bVar2 == 1 && *(char *)(iVar6 + 0x54) == '\0') {
      FUN_7144e990(iVar6);
      return;
    }
    if (bVar2 != 0 || *(char *)(iVar6 + 0x54) != '\x01') {
      return;
    }
  }
  FUN_7144e57c(iVar6);
  return;
}


// =========================================================================
// Function: FUN_713c6eb0
// Entry: 0x713c6eb0 | Size: 440 bytes
// =========================================================================

void FUN_713c6eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b46e44 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e44);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9b0,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9a0);
        *(undefined1 *)(iVar4 + 0x5c) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70076f48,0x5c);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c773c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9b0);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9a0);
      if (*(char *)(iVar4 + 0x5c) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0x9f9d9cf >> iVar9) | (byte)(0xb5181c5 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
          ;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xb5181c5 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x5a < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x5c) = 0;
      }
      DAT_70b46e40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e44);
    }
  }
  (*DAT_70b46e40)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


// =========================================================================
// Function: FUN_713c731c
// Entry: 0x713c731c | Size: 392 bytes
// =========================================================================

void FUN_713c731c(undefined4 param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e4c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e4c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9d0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9c0);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_70076fb0;
      uVar3 = DAT_70076fac;
      *puVar10 = DAT_70076fa8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_70076fc0;
      uVar4 = DAT_70076fbc;
      uVar3 = DAT_70076fb8;
      puVar10[3] = DAT_70076fb4;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_70076fc6;
      *(undefined2 *)(puVar10 + 7) = DAT_70076fc4;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c778c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9d0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9c0);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa9f11975 >> iVar14) |
                (byte)(0x47910569 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47910569 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x1d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1f) = 0;
    }
    DAT_70b46e48 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e4c);
  }
                    /* WARNING: Could not recover jumptable at 0x713c7348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e48)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c8278
// Entry: 0x713c8278 | Size: 392 bytes
// =========================================================================

void FUN_713c8278(undefined4 param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e54 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e54), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9f0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9e0);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_70076fd0;
      uVar3 = DAT_70076fcc;
      *puVar10 = DAT_70076fc8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_70076fe0;
      uVar4 = DAT_70076fdc;
      uVar3 = DAT_70076fd8;
      puVar10[3] = DAT_70076fd4;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_70076fe6;
      *(undefined2 *)(puVar10 + 7) = DAT_70076fe4;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c92b0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9f0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc9e0);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb145a519 >> iVar14) |
                (byte)(-0x10c86299 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xef379d67 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x1d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1f) = 0;
    }
    DAT_70b46e50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e54);
  }
                    /* WARNING: Could not recover jumptable at 0x713c82a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e50)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713c92f0
// Entry: 0x713c92f0 | Size: 404 bytes
// =========================================================================

undefined4 * FUN_713c92f0(undefined4 *param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  *param_1 = &PTR_FUN_70b0e0a4;
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e5c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e5c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca10,iVar8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca00);
      *(undefined1 *)((int)puVar10 + 0x13) = 1;
      uVar5 = DAT_70076ff4;
      uVar4 = DAT_70076ff0;
      uVar3 = DAT_70076fec;
      *puVar10 = DAT_70076fe8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70076ffa;
      *(undefined2 *)(puVar10 + 4) = DAT_70076ff8;
      *(undefined1 *)((int)puVar10 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c9d64,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca10);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca00);
    if (*(char *)(iVar8 + 0x13) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc77d4573 >> iVar14) |
                (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x11 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x13) = 0;
    }
    DAT_70b46e58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e5c);
  }
  (*DAT_70b46e58)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_713c973c
// Entry: 0x713c973c | Size: 388 bytes
// =========================================================================

undefined4 * FUN_713c973c(undefined4 *param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  *param_1 = &PTR_FUN_70b0e0a4;
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e64 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e64), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca30,iVar8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca20);
      *(undefined1 *)(puVar10 + 5) = 1;
      uVar6 = DAT_70077010;
      uVar5 = DAT_7007700c;
      uVar4 = DAT_70077008;
      uVar3 = DAT_70077004;
      *puVar10 = DAT_70077000;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c9d98,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca30);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca20);
    if (*(char *)(iVar8 + 0x14) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xe569d1dd >> iVar14) |
                (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x750729cb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x12 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x14) = 0;
    }
    DAT_70b46e60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e64);
  }
  (*DAT_70b46e60)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_713c9c50
// Entry: 0x713c9c50 | Size: 64 bytes
// =========================================================================

bool FUN_713c9c50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2);
  return iVar2 <= iVar1;
}


// =========================================================================
// Function: FUN_713c9dcc
// Entry: 0x713c9dcc | Size: 436 bytes
// =========================================================================

void FUN_713c9dcc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e6c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e6c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca50,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca40);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_70077024;
      uVar4 = DAT_70077020;
      uVar3 = DAT_7007701c;
      *puVar10 = DAT_70077018;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70077038;
      uVar5 = DAT_70077034;
      uVar4 = DAT_70077030;
      uVar3 = DAT_7007702c;
      puVar10[4] = DAT_70077028;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007704c;
      uVar5 = DAT_70077048;
      uVar4 = DAT_70077044;
      uVar3 = DAT_70077040;
      puVar10[9] = DAT_7007703c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_70077050;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_70077052;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c60ac,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca50);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca40);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0xc77d4573 >> iVar14) |
                (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x39 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70b46e68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e6c);
  }
                    /* WARNING: Could not recover jumptable at 0x713c9e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e68)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713ca218
// Entry: 0x713ca218 | Size: 416 bytes
// =========================================================================

undefined4 *
FUN_713ca218(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  FUN_713c92f0();
  *param_1 = &PTR_LAB_70b0e0f0;
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e74 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e74), iVar3 != 0)) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca70);
    if (*pcVar4 == '\0') {
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca60);
      *(undefined1 *)(iVar3 + 0x62) = 1;
      imp___aeabi_memcpy8(iVar3,&DAT_70077058,0x62);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713cc120,iVar3,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca70);
      *puVar7 = 1;
    }
    iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bca60);
    if (*(char *)(iVar3 + 0x62) != '\0') {
      uVar9 = 0;
      uVar10 = 0;
      do {
        iVar5 = (uVar9 & 7) * 8;
        uVar6 = iVar5 - 0x20;
        bVar8 = (byte)(0x9f9d9cf >> iVar5) | (byte)(0xb5181c5 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar6) {
          bVar8 = (byte)(0xb5181c5 >> (uVar6 & 0xff));
        }
        *(byte *)(iVar3 + uVar9) = *(byte *)(iVar3 + uVar9) ^ bVar8;
        bVar11 = 0xfffffffe < uVar9;
        bVar1 = uVar10 == 0;
        bVar2 = (0x60 < uVar9) <= uVar10;
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar3 + 0x62) = 0;
    }
    DAT_70b46e70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e74);
  }
  (*DAT_70b46e70)(param_1,param_2,param_3,param_4);
  return param_1;
}


// =========================================================================
// Function: FUN_713caae0
// Entry: 0x713caae0 | Size: 380 bytes
// =========================================================================

void FUN_713caae0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e84 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e84), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcab0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcaa0);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_70077114;
      uVar6 = DAT_70077110;
      uVar5 = DAT_7007710c;
      uVar4 = DAT_70077108;
      uVar3 = DAT_70077104;
      *puVar11 = DAT_70077100;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007712c;
      uVar6 = DAT_70077128;
      uVar5 = DAT_70077124;
      uVar4 = DAT_70077120;
      uVar3 = DAT_7007711c;
      puVar11[6] = DAT_70077118;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713cc1c0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcab0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcaa0);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xd54d5575 >> iVar15) |
                (byte)(-0x289428c9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd76bd737 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2e < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x30) = 0;
    }
    DAT_70b46e80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e84);
  }
                    /* WARNING: Could not recover jumptable at 0x713cab0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e80)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713caef4
// Entry: 0x713caef4 | Size: 388 bytes
// =========================================================================

void FUN_713caef4(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46e8c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46e8c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcad0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcac0);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007713c;
      uVar4 = DAT_70077138;
      uVar3 = DAT_70077134;
      *puVar10 = DAT_70077130;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70077150;
      uVar5 = DAT_7007714c;
      uVar4 = DAT_70077148;
      uVar3 = DAT_70077144;
      puVar10[4] = DAT_70077140;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_70077154;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130e3bc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcad0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcac0);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc77d4573 >> iVar14) |
                (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70b46e88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46e8c);
  }
                    /* WARNING: Could not recover jumptable at 0x713caf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46e88)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713cbb70
// Entry: 0x713cbb70 | Size: 396 bytes
// =========================================================================

void FUN_713cbb70(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ea4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ea4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb30);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb20);
      *(undefined1 *)((int)puVar11 + 0x2f) = 1;
      uVar6 = DAT_700771c8;
      uVar5 = DAT_700771c4;
      uVar4 = DAT_700771c0;
      uVar3 = DAT_700771bc;
      *puVar11 = DAT_700771b8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_700771e0;
      uVar6 = DAT_700771dc;
      uVar5 = DAT_700771d8;
      uVar4 = DAT_700771d4;
      uVar3 = DAT_700771d0;
      puVar11[5] = DAT_700771cc;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_700771e4;
      *(undefined1 *)((int)puVar11 + 0x2e) = DAT_700771e6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713cc260,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb30);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb20);
    if (*(char *)(iVar9 + 0x2f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xf7f5f1d5 >> iVar15) |
                (byte)(-0x6ede64e1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x91219b1f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2d < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2f) = 0;
    }
    DAT_70b46ea0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ea4);
  }
                    /* WARNING: Could not recover jumptable at 0x713cbb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ea0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713cc02c
// Entry: 0x713cc02c | Size: 68 bytes
// =========================================================================

void FUN_713cc02c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_70b0e0f0;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  FUN_713c973c(param_1);
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_713cc2b0
// Entry: 0x713cc2b0 | Size: 348 bytes
// =========================================================================

void FUN_713cc2b0(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46eac & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46eac), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb50);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb40);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar7 = DAT_700771fc;
      uVar6 = DAT_700771f8;
      uVar5 = DAT_700771f4;
      uVar4 = DAT_700771f0;
      uVar3 = DAT_700771ec;
      *puVar10 = DAT_700771e8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713cc6a4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb50);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb40);
    if (*(char *)(iVar8 + 0x18) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xc77d4573 >> iVar14) |
                 (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x16 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x18) = 0;
    }
    DAT_70b46ea8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46eac);
  }
                    /* WARNING: Could not recover jumptable at 0x713cc2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ea8)();
  return;
}


// =========================================================================
// Function: FUN_713ccae0
// Entry: 0x713ccae0 | Size: 372 bytes
// =========================================================================

void FUN_713ccae0(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ebc & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ebc), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb90);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb80);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_70077228;
      uVar3 = DAT_70077224;
      *puVar10 = DAT_70077220;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_70077238;
      uVar4 = DAT_70077234;
      uVar3 = DAT_70077230;
      puVar10[3] = DAT_7007722c;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007723e;
      *(undefined2 *)(puVar10 + 7) = DAT_7007723c;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71345e70,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb90);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcb80);
    if (*(char *)(iVar7 + 0x1f) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0xe569d1dd >> iVar14) |
                 (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0x750729cb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x1d < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1f) = 0;
    }
    DAT_70b46eb8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ebc);
  }
                    /* WARNING: Could not recover jumptable at 0x713ccb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46eb8)();
  return;
}


// =========================================================================
// Function: FUN_713cceec
// Entry: 0x713cceec | Size: 360 bytes
// =========================================================================

void FUN_713cceec(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ec4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ec4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcbb0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcba0);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_70077254;
      uVar6 = DAT_70077250;
      uVar5 = DAT_7007724c;
      uVar4 = DAT_70077248;
      uVar3 = DAT_70077244;
      *puVar10 = DAT_70077240;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_70077258;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713cd2ec,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcbb0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcba0);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x93a3c787 >> iVar14) |
                 (byte)(0x47abcda5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x47abcda5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x17 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x19) = 0;
    }
    DAT_70b46ec0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ec4);
  }
                    /* WARNING: Could not recover jumptable at 0x713ccf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ec0)();
  return;
}


// =========================================================================
// Function: FUN_713cdb9c
// Entry: 0x713cdb9c | Size: 420 bytes
// =========================================================================

void FUN_713cdb9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ee4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ee4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc10,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc00);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      uVar5 = DAT_700772ac;
      uVar4 = DAT_700772a8;
      uVar3 = DAT_700772a4;
      *puVar10 = DAT_700772a0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700772c0;
      uVar5 = DAT_700772bc;
      uVar4 = DAT_700772b8;
      uVar3 = DAT_700772b4;
      puVar10[4] = DAT_700772b0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_700772d4;
      uVar5 = DAT_700772d0;
      uVar4 = DAT_700772cc;
      uVar3 = DAT_700772c8;
      puVar10[9] = DAT_700772c4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713574b4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc10);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc00);
    if (*(char *)(iVar8 + 0x38) != '\0') {
      uVar12 = 0;
      uVar15 = 0;
      do {
        iVar13 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0x93a3c787 >> iVar13) |
                (byte)(0x47abcda5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar13 - 0x20;
        if (-1 < (int)uVar14) {
          bVar7 = (byte)(0x47abcda5 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar15 == 0;
        bVar2 = (0x36 < uVar12) <= uVar15;
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x38) = 0;
    }
    DAT_70b46ee0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ee4);
  }
                    /* WARNING: Could not recover jumptable at 0x713cdbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ee0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713cdfd8
// Entry: 0x713cdfd8 | Size: 360 bytes
// =========================================================================

void FUN_713cdfd8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46eec & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46eec), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc30);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc20);
      *(undefined1 *)((int)puVar10 + 0x1a) = 1;
      uVar7 = DAT_700772ec;
      uVar6 = DAT_700772e8;
      uVar5 = DAT_700772e4;
      uVar4 = DAT_700772e0;
      uVar3 = DAT_700772dc;
      *puVar10 = DAT_700772d8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined2 *)(puVar10 + 6) = DAT_700772f0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130ccb8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc30);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc20);
    if (*(char *)(iVar8 + 0x1a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x2549d30d >> iVar14) |
                 (byte)(0x65617345 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x65617345 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x18 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1a) = 0;
    }
    DAT_70b46ee8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46eec);
  }
                    /* WARNING: Could not recover jumptable at 0x713ce004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ee8)();
  return;
}


// =========================================================================
// Function: FUN_713ce3d8
// Entry: 0x713ce3d8 | Size: 364 bytes
// =========================================================================

void FUN_713ce3d8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46ef4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46ef4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc50);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc40);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar4 = DAT_70077300;
      uVar3 = DAT_700772fc;
      *puVar8 = DAT_700772f8;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70077310;
      uVar4 = DAT_7007730c;
      uVar3 = DAT_70077308;
      puVar8[3] = DAT_70077304;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined1 *)(puVar8 + 7) = DAT_70077314;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71370a58,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc50);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcc40);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xa1d573c5 >> iVar12) |
                 (byte)(-0x1038407f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xefc7bf81 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1b < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1d) = 0;
    }
    DAT_70b46ef0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46ef4);
  }
                    /* WARNING: Could not recover jumptable at 0x713ce404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46ef0)();
  return;
}


// =========================================================================
// Function: FUN_713ce7dc
// Entry: 0x713ce7dc | Size: 1020 bytes
// =========================================================================

undefined4 FUN_713ce7dc(void)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bccd0);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bccc0);
    *puVar4 = 0x1e12c9f;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d0324,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bccd0);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bccc0);
  if (pbVar2[3] != 0) {
    pbVar2[3] = 0;
    *pbVar2 = *pbVar2 ^ 0xed;
    pbVar2[1] = pbVar2[1] ^ 0x5b;
    pbVar2[2] = pbVar2[2] ^ 0xe1;
  }
  FUN_717316bc(pbVar2,0);
  FUN_7136ab08();
  FUN_7148bb70();
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bccf0);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcce0);
    *(undefined1 *)(puVar4 + 3) = 1;
    *puVar4 = 0xc03168af;
    puVar4[1] = 0xbbc1c023;
    puVar4[2] = 0x9f3a68b7;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d034c,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bccf0);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcce0);
  if (pbVar2[0xc] != 0) {
    *pbVar2 = *pbVar2 ^ 0xdb;
    pbVar2[1] = pbVar2[1] ^ 0xd;
    pbVar2[2] = pbVar2[2] ^ 0x49;
    pbVar2[3] = pbVar2[3] ^ 0x9f;
    pbVar2[0xc] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x41;
    pbVar2[5] = pbVar2[5] ^ 0xb5;
    pbVar2[6] = pbVar2[6] ^ 0xaf;
    pbVar2[7] = pbVar2[7] ^ 0xdf;
    pbVar2[8] = pbVar2[8] ^ 0xdb;
    pbVar2[9] = pbVar2[9] ^ 0xd;
    pbVar2[10] = pbVar2[10] ^ 0x49;
    pbVar2[0xb] = pbVar2[0xb] ^ 0x9f;
  }
  FUN_717316bc(pbVar2,0);
  FUN_714ad38c();
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd10);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd00);
    *(undefined2 *)(puVar4 + 2) = 0x1d7;
    *puVar4 = 0x742612a5;
    puVar4[1] = 0xc67f448e;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d0378,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd10);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd00);
  if (pbVar2[9] != 0) {
    pbVar2[9] = 0;
    *pbVar2 = *pbVar2 ^ 0xd7;
    pbVar2[1] = pbVar2[1] ^ 0x65;
    pbVar2[2] = pbVar2[2] ^ 0x79;
    pbVar2[3] = pbVar2[3] ^ 7;
    pbVar2[4] = pbVar2[4] ^ 0xed;
    pbVar2[5] = pbVar2[5] ^ 0x21;
    pbVar2[6] = pbVar2[6] ^ 0x11;
    pbVar2[7] = pbVar2[7] ^ 0xa3;
    pbVar2[8] = pbVar2[8] ^ 0xd7;
  }
  FUN_717316bc(pbVar2,0);
  uVar3 = FUN_714100d4(*(undefined4 *)(DAT_70ffc974 + 4),*(undefined4 *)(DAT_70ffc974 + 8),1);
  puVar4 = DAT_70ffc978;
  DAT_70ffc978[1] = uVar3;
  uVar3 = DAT_70b46c18;
  FUN_713aef74(DAT_70b46c18);
  FUN_713af7a0(uVar3,puVar4[1]);
  FUN_7141feb0(puVar4[1],0x44fa0000);
  FUN_714202f0(puVar4[1],0x3f666666);
  FUN_71410518(puVar4[1],0,0x3f333333,0x3faaa993);
  uStack_24 = 0xc61c4000;
  uStack_20 = 0xc61c4000;
  uStack_1c = 0xc61c4000;
  uStack_2c = 0x461c4000;
  uStack_28 = 0x461c4000;
  uStack_30 = 0x461c4000;
  uVar3 = FUN_714115c0(&uStack_30);
  *puVar4 = uVar3;
  FUN_714119dc(uVar3,puVar4[1]);
  FUN_71410968(*puVar4);
  FUN_71447ba4();
  FUN_713d2154();
  FUN_71455634();
  uVar3 = FUN_7141b3bc();
  *DAT_70b46ef8 = uVar3;
  uVar3 = FUN_7141b3bc();
  *DAT_70b46efc = uVar3;
  return 1;
}


// =========================================================================
// Function: FUN_713cf2a4
// Entry: 0x713cf2a4 | Size: 388 bytes
// =========================================================================

undefined4 FUN_713cf2a4(void)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd30);
  if (*pcVar1 == '\0') {
    puVar3 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd20);
    *puVar3 = 0xf094e122;
    puVar3[1] = 0x33ac7948;
    puVar3[2] = 0xca92fd22;
    *(undefined1 *)((int)puVar3 + 0xf) = 1;
    *(undefined4 *)((int)puVar3 + 0xb) = 0xc96c65ca;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d03a4,puVar3,&DAT_70b0e000);
    puVar4 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd30);
    *puVar4 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd20);
  if (pbVar2[0xf] != 0) {
    *pbVar2 = *pbVar2 ^ 0x4d;
    pbVar2[1] = pbVar2[1] ^ 0x8f;
    pbVar2[2] = pbVar2[2] ^ 0xf7;
    pbVar2[3] = pbVar2[3] ^ 0x95;
    pbVar2[0xf] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x17;
    pbVar2[5] = pbVar2[5] ^ 0x1b;
    pbVar2[6] = pbVar2[6] ^ 0xc9;
    pbVar2[7] = pbVar2[7] ^ 0x55;
    pbVar2[8] = pbVar2[8] ^ 0x4d;
    pbVar2[9] = pbVar2[9] ^ 0x8f;
    pbVar2[10] = pbVar2[10] ^ 0xf7;
    pbVar2[0xb] = pbVar2[0xb] ^ 0x95;
    pbVar2[0xc] = pbVar2[0xc] ^ 0x17;
    pbVar2[0xd] = pbVar2[0xd] ^ 0x1b;
    pbVar2[0xe] = pbVar2[0xe] ^ 0xc9;
  }
  FUN_717316bc(pbVar2,0);
  FUN_713f2a68();
  FUN_713d4010();
  FUN_71339d10();
  FUN_713255b4(6);
  FUN_713d5ac4();
  return 1;
}


// =========================================================================
// Function: FUN_713cf634
// Entry: 0x713cf634 | Size: 364 bytes
// =========================================================================

void FUN_713cf634(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46f08 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46f08), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd50);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd40);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_70077364;
      uVar4 = DAT_70077360;
      uVar3 = DAT_7007735c;
      *puVar9 = DAT_70077358;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007736a;
      *(undefined2 *)(puVar9 + 4) = DAT_70077368;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d03d4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd50);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd40);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xeb59dbd3 >> iVar13) |
                 (byte)(0x769f7eb << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x769f7eb >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x11 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x13) = 0;
    }
    DAT_70b46f04 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46f08);
  }
                    /* WARNING: Could not recover jumptable at 0x713cf660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46f04)();
  return;
}


// =========================================================================
// Function: FUN_713cfa38
// Entry: 0x713cfa38 | Size: 464 bytes
// =========================================================================

void FUN_713cfa38(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46f10 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46f10), iVar1 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd70);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd60);
      *(undefined1 *)(puVar4 + 4) = 1;
      *puVar4 = 0xdebc78f1;
      puVar4[1] = 0x1f8c9ebc;
      puVar4[2] = 0x979e63d4;
      puVar4[3] = 0x6bfec0f8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d0408,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd70);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd60);
    if (pbVar3[0x10] != 0) {
      *pbVar3 = *pbVar3 ^ 0xb5;
      pbVar3[1] = pbVar3[1] ^ 0x17;
      pbVar3[2] = pbVar3[2] ^ 0xfb;
      pbVar3[3] = pbVar3[3] ^ 0xbf;
      pbVar3[0x10] = 0;
      pbVar3[4] = pbVar3[4] ^ 0xd1;
      pbVar3[5] = pbVar3[5] ^ 0xfb;
      pbVar3[6] = pbVar3[6] ^ 0xdf;
      pbVar3[7] = pbVar3[7] ^ 0x6b;
      pbVar3[8] = pbVar3[8] ^ 0xb5;
      pbVar3[9] = pbVar3[9] ^ 0x17;
      pbVar3[10] = pbVar3[10] ^ 0xfb;
      pbVar3[0xb] = pbVar3[0xb] ^ 0xbf;
      pbVar3[0xc] = pbVar3[0xc] ^ 0xd1;
      pbVar3[0xd] = pbVar3[0xd] ^ 0xfb;
      pbVar3[0xe] = pbVar3[0xe] ^ 0xdf;
      pbVar3[0xf] = pbVar3[0xf] ^ 0x6b;
    }
    DAT_70b46f0c = (code *)FUN_712f1f4c(&DAT_70b2e804,pbVar3,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46f10);
  }
                    /* WARNING: Could not recover jumptable at 0x713cfa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46f0c)();
  return;
}


// =========================================================================
// Function: FUN_713cfe80
// Entry: 0x713cfe80 | Size: 356 bytes
// =========================================================================

void FUN_713cfe80(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46f18 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46f18), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd90);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd80);
      *(undefined1 *)((int)puVar8 + 0x12) = 1;
      uVar5 = DAT_7007737c;
      uVar4 = DAT_70077378;
      uVar3 = DAT_70077374;
      *puVar8 = DAT_70077370;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      *(undefined2 *)(puVar8 + 4) = DAT_70077380;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d0438,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd90);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcd80);
    if (*(char *)(iVar6 + 0x12) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x13e1dbf3 >> iVar12) |
                 (byte)(-0x2c7a2ab9 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xd385d547 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x10 < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x12) = 0;
    }
    DAT_70b46f14 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46f18);
  }
                    /* WARNING: Could not recover jumptable at 0x713cfeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46f14)();
  return;
}


// =========================================================================
// Function: FUN_713d10e4
// Entry: 0x713d10e4 | Size: 364 bytes
// =========================================================================

void FUN_713d10e4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b46f38 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46f38), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcdb0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcda0);
      *(undefined1 *)((int)puVar8 + 0x22) = 1;
      uVar5 = DAT_70077394;
      uVar4 = DAT_70077390;
      uVar3 = DAT_7007738c;
      *puVar8 = DAT_70077388;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar5 = DAT_700773a4;
      uVar4 = DAT_700773a0;
      uVar3 = DAT_7007739c;
      puVar8[4] = DAT_70077398;
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      *(undefined2 *)(puVar8 + 8) = DAT_700773a8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d1538,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcdb0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcda0);
    if (*(char *)(iVar6 + 0x22) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xe569d1dd >> iVar12) |
                 (byte)(0x750729cb << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x750729cb >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x20 < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x22) = 0;
    }
    DAT_70b46f34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46f38);
  }
                    /* WARNING: Could not recover jumptable at 0x713d1110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46f34)();
  return;
}


// =========================================================================
// Function: FUN_713d179c
// Entry: 0x713d179c | Size: 380 bytes
// =========================================================================

void FUN_713d179c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b8895c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b8895c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcdf0,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcde0);
      *(undefined1 *)(iVar4 + 0x41) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_700773b0,0x41);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d1bfc,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcdf0);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcde0);
    if (*(char *)(iVar4 + 0x41) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xf7f5f1d5 >> iVar9) |
                (byte)(-0x6ede64e1 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x91219b1f >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x3f < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x41) = 0;
    }
    DAT_70b88958 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b8895c);
  }
                    /* WARNING: Could not recover jumptable at 0x713d17c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88958)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713d2154
// Entry: 0x713d2154 | Size: 356 bytes
// =========================================================================

void FUN_713d2154(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88974 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88974), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce50);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce40);
      *(undefined1 *)((int)puVar9 + 0x15) = 1;
      uVar6 = DAT_70077428;
      uVar5 = DAT_70077424;
      uVar4 = DAT_70077420;
      uVar3 = DAT_7007741c;
      *puVar9 = DAT_70077418;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined1 *)(puVar9 + 5) = DAT_7007742c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d29b4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce50);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce40);
    if (*(char *)(iVar7 + 0x15) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xe569d1dd >> iVar13) |
                 (byte)(0x750729cb << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x750729cb >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x13 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x15) = 0;
    }
    DAT_70b88970 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88974);
  }
                    /* WARNING: Could not recover jumptable at 0x713d2180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88970)();
  return;
}


// =========================================================================
// Function: FUN_713d2550
// Entry: 0x713d2550 | Size: 348 bytes
// =========================================================================

void FUN_713d2550(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b8897c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b8897c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce70);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce60);
      *(undefined1 *)(puVar9 + 5) = 1;
      uVar6 = DAT_70077440;
      uVar5 = DAT_7007743c;
      uVar4 = DAT_70077438;
      uVar3 = DAT_70077434;
      *puVar9 = DAT_70077430;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71352450,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce70);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bce60);
    if (*(char *)(iVar7 + 0x14) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x93a3c787 >> iVar13) |
                 (byte)(0x47abcda5 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x47abcda5 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x12 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x14) = 0;
    }
    DAT_70b88978 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b8897c);
  }
                    /* WARNING: Could not recover jumptable at 0x713d257c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88978)();
  return;
}


// =========================================================================
// Function: FUN_713d324c
// Entry: 0x713d324c | Size: 492 bytes
// =========================================================================

void FUN_713d324c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b88998 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88998);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bceb0,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcea0);
        *(undefined1 *)(iVar4 + 0xc9) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70077448,0xc9);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d371c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bceb0);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcea0);
      if (*(char *)(iVar4 + 0xc9) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0xa1d573c5 >> iVar9) |
                  (byte)(-0x1038407f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xefc7bf81 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (199 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0xc9) = 0;
      }
      DAT_70b88994 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b88998);
    }
  }
  (*DAT_70b88994)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12);
  return;
}


// =========================================================================
// Function: FUN_713d3bb4
// Entry: 0x713d3bb4 | Size: 372 bytes
// =========================================================================

void FUN_713d3bb4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b889a8 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b889a8), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bced0);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcec0);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_70077524;
      uVar4 = DAT_70077520;
      uVar3 = DAT_7007751c;
      *puVar10 = DAT_70077518;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70077534;
      uVar4 = DAT_70077530;
      uVar3 = DAT_7007752c;
      puVar10[4] = DAT_70077528;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007753a;
      *(undefined2 *)(puVar10 + 8) = DAT_70077538;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d3fc0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bced0);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcec0);
    if (*(char *)(iVar7 + 0x23) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0xc77d4573 >> iVar14) |
                 (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x21 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x23) = 0;
    }
    DAT_70b889a4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b889a8);
  }
                    /* WARNING: Could not recover jumptable at 0x713d3be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b889a4)();
  return;
}


// =========================================================================
// Function: FUN_713d4010
// Entry: 0x713d4010 | Size: 364 bytes
// =========================================================================

void FUN_713d4010(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b889b0 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b889b0), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcef0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcee0);
      *(undefined1 *)((int)puVar8 + 0x1e) = 1;
      uVar4 = DAT_70077548;
      uVar3 = DAT_70077544;
      *puVar8 = DAT_70077540;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70077558;
      uVar4 = DAT_70077554;
      uVar3 = DAT_70077550;
      puVar8[3] = DAT_7007754c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined2 *)(puVar8 + 7) = DAT_7007755c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71370a98,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcef0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcee0);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x45a9b135 >> iVar12) |
                 (byte)(-0x760ad4c7 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x89f52b39 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1c < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1e) = 0;
    }
    DAT_70b889ac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b889b0);
  }
                    /* WARNING: Could not recover jumptable at 0x713d403c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b889ac)();
  return;
}


// =========================================================================
// Function: FUN_713d48b0
// Entry: 0x713d48b0 | Size: 1216 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_713d48b0(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  int iStack_244;
  int iStack_240;
  undefined1 auStack_23c [4];
  undefined1 auStack_238 [4];
  undefined1 auStack_234 [4];
  undefined4 uStack_230;
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int iStack_2c;
  
  puVar2 = DAT_70b889c0;
  iStack_2c = _ext___stack_chk_guard;
  DAT_70b889c0[4] = 0x44c7ff7e;
  puVar2[3] = 0x3dcccccd;
  *(undefined1 *)((int)puVar2 + 0x1e) = 2;
  puVar2[2] = 0x3f7d70a4;
  puVar2[6] = 0x3f800000;
  *puVar2 = 0x47c34f80;
  puVar2[1] = 0x47c34f80;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 7) = 0;
  puVar3 = DAT_70b889c0;
  imp___aeabi_memcpy4(DAT_70b889c0 + 0x14,puVar2,0x50);
  *(undefined1 *)((int)puVar3 + 0x6e) = 0;
  imp___aeabi_memcpy4(puVar3 + 0x28,puVar2,0x50);
  *(undefined1 *)((int)puVar3 + 0xbe) = 4;
  imp___aeabi_memcpy4(puVar3 + 0x3c,puVar2,0x50);
  *(undefined2 *)((int)puVar3 + 0x10d) = 4;
  imp___aeabi_memcpy4(puVar3 + 0x50,puVar2,0x50);
  *(undefined1 *)((int)puVar3 + 0x15d) = 5;
  FUN_7133a5b8(&DAT_70064a63);
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcf54);
  if (*pcVar7 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcf44);
    *puVar15 = 0x16b4733;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d5678,puVar15,&DAT_70b0e000);
    puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcf54);
    *puVar16 = 1;
  }
  pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcf44);
  if (pbVar8[3] != 0) {
    pbVar8[3] = 0;
    *pbVar8 = *pbVar8 ^ 0x41;
    pbVar8[1] = pbVar8[1] ^ 0x25;
    pbVar8[2] = pbVar8[2] ^ 0x6b;
  }
  uVar9 = FUN_71339d5c(param_1);
  pbVar8 = (byte *)FUN_7132d218();
  uVar4 = DAT_70ffd280;
  if (pbVar8 != (byte *)0x0) {
    do {
      bVar1 = *pbVar8;
      if (bVar1 < 0x2a) {
        if (bVar1 != 0 && bVar1 != 0x23) goto LAB_713d4a78;
      }
      else if (bVar1 != 0x3b) {
        if (bVar1 == 0x2a) break;
LAB_713d4a78:
        puVar15 = DAT_70b889c0 + DAT_700bcf20 * 0x14;
        *(undefined1 *)puVar15 = 0;
        imp_sscanf(pbVar8,s__s__f__f__f__f__f__f__f__d__d__d_70064558,auStack_12c,puVar15,
                   puVar15 + 1,puVar15 + 2,puVar15 + 3,&uStack_230,puVar15 + 5,puVar15 + 6,
                   auStack_234,auStack_238,auStack_23c,&iStack_240,&iStack_244,puVar15 + 9,
                   puVar15 + 10,puVar15 + 0xb,auStack_22c,puVar15 + 0xd,puVar15 + 0xe,puVar15 + 0xf,
                   puVar15 + 0x10,puVar15 + 0x11,puVar15 + 0x12,puVar15 + 0x13);
        puVar15[0xc] = 0;
        *(char *)(puVar15 + 8) = (char)iStack_244;
        if (0 < iStack_244) {
          uVar10 = FUN_7144dbe4(uVar4,auStack_22c);
          puVar15[0xc] = uVar10;
        }
        *(char *)((int)puVar15 + 0x1d) = auStack_238[0];
        *(char *)(puVar15 + 7) = auStack_234[0];
        *(char *)((int)puVar15 + 0x1e) = auStack_23c[0];
        uVar10 = FUN_71ba13e0(0x42c80000,uStack_230);
        uVar11 = FUN_71ba13e0(*puVar15,0x42fa0000);
        uVar10 = FUN_71ba21e8(uVar10,uVar11);
        puVar15[4] = uVar10;
        *(bool *)((int)puVar15 + 0x1f) = iStack_240 != 0;
        iVar12 = FUN_713fe4f8(auStack_12c,0);
        if (iVar12 != 0) {
          iVar13 = FUN_71ba2cf0(*puVar15,*puVar2);
          if (((iVar13 == 0) || (iVar13 = FUN_71ba2cf0(puVar15[6],puVar2[6]), iVar13 == 0)) ||
             (*(char *)(puVar15 + 7) != *(char *)(puVar2 + 7))) {
LAB_713d4c90:
            if (0 < DAT_700bcf20) {
              iVar13 = 0;
              iVar17 = 0;
              do {
                iVar14 = FUN_713d5288(puVar15,(int)DAT_70b889c0 + iVar13);
                if (iVar14 != 0) {
                  *(short *)(iVar12 + 0x26) = (short)iVar17;
                  goto LAB_713d4a4c;
                }
                iVar13 = iVar13 + 0x50;
                iVar17 = iVar17 + 1;
              } while (iVar17 < DAT_700bcf20);
            }
            *(short *)(iVar12 + 0x26) = (short)DAT_700bcf20;
            DAT_700bcf20 = DAT_700bcf20 + 1;
          }
          else if (*(char *)((int)puVar15 + 0x1d) == *(char *)((int)puVar2 + 0x1d)) {
            uVar5 = (ushort)*(byte *)((int)puVar15 + 0x1e);
            if (*(byte *)((int)puVar15 + 0x1e) != 0) {
              uVar5 = 1;
            }
            *(ushort *)(iVar12 + 0x26) = uVar5;
          }
          else {
            if (*(char *)((int)puVar15 + 0x1d) != *(char *)((int)puVar3 + 0xbd)) goto LAB_713d4c90;
            uVar6 = 3;
            if (*(char *)((int)puVar15 + 0x1e) == '\0') {
              uVar6 = 2;
            }
            *(undefined2 *)(iVar12 + 0x26) = uVar6;
          }
        }
      }
LAB_713d4a4c:
      pbVar8 = (byte *)FUN_7132d218(uVar9);
    } while (pbVar8 != (byte *)0x0);
  }
  FUN_7133a194(uVar9);
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_713d5288
// Entry: 0x713d5288 | Size: 504 bytes
// =========================================================================

bool FUN_713d5288(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_71ba2cf0(*param_1,*param_2);
  bVar4 = false;
  if (((((iVar1 != 0) && (iVar1 = FUN_71ba2cf0(param_1[1],param_2[1]), iVar1 != 0)) &&
       (iVar1 = FUN_71ba2cf0(param_1[2],param_2[2]), iVar1 != 0)) &&
      (((iVar1 = FUN_71ba2cf0(param_1[3],param_2[3]), iVar1 != 0 &&
        (iVar1 = FUN_71ba2cf0(param_1[4],param_2[4]), iVar1 != 0)) &&
       ((iVar1 = FUN_71ba2cf0(param_1[5],param_2[5]), iVar1 != 0 &&
        ((iVar1 = FUN_71ba2cf0(param_1[6],param_2[6]), iVar1 != 0 &&
         (*(char *)(param_1 + 7) == *(char *)(param_2 + 7))))))))) &&
     ((*(char *)((int)param_1 + 0x1d) == *(char *)((int)param_2 + 0x1d) &&
      (((*(char *)((int)param_1 + 0x1e) == *(char *)((int)param_2 + 0x1e) &&
        (*(char *)((int)param_1 + 0x1f) == *(char *)((int)param_2 + 0x1f))) &&
       (*(char *)(param_1 + 8) == *(char *)(param_2 + 8))))))) {
    uVar2 = param_1[0xb];
    uVar3 = param_2[0xb];
    uVar6 = param_1[10];
    uVar5 = param_2[10];
    iVar1 = FUN_71ba2cf0(param_1[9],param_2[9]);
    if ((((iVar1 != 0) && (iVar1 = FUN_71ba2cf0(uVar6,uVar5), iVar1 != 0)) &&
        (((iVar1 = FUN_71ba2cf0(uVar2,uVar3), iVar1 != 0 &&
          ((param_1[0xc] == param_2[0xc] &&
           (iVar1 = FUN_71ba2cf0(param_1[0xd],param_2[0xd]), iVar1 != 0)))) &&
         (iVar1 = FUN_71ba2cf0(param_1[0xe],param_2[0xe]), iVar1 != 0)))) &&
       ((((iVar1 = FUN_71ba2cf0(param_1[0xf],param_2[0xf]), iVar1 != 0 &&
          (iVar1 = FUN_71ba2cf0(param_1[0x10],param_2[0x10]), iVar1 != 0)) &&
         (iVar1 = FUN_71ba2cf0(param_1[0x11],param_2[0x11]), iVar1 != 0)) &&
        (param_1[0x12] == param_2[0x12])))) {
      bVar4 = *(char *)(param_1 + 0x13) == *(char *)(param_2 + 0x13);
    }
  }
  return bVar4;
}


// =========================================================================
// Function: FUN_713d5ac4
// Entry: 0x713d5ac4 | Size: 356 bytes
// =========================================================================

void FUN_713d5ac4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b889e4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b889e4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcfd4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcfc4);
      *(undefined1 *)((int)puVar9 + 0x15) = 1;
      uVar6 = DAT_700775d8;
      uVar5 = DAT_700775d4;
      uVar4 = DAT_700775d0;
      uVar3 = DAT_700775cc;
      *puVar9 = DAT_700775c8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined1 *)(puVar9 + 5) = DAT_700775dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d80ac,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcfd4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcfc4);
    if (*(char *)(iVar7 + 0x15) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xd3c78945 >> iVar13) |
                 (byte)(0x5f694973 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x5f694973 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x13 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x15) = 0;
    }
    DAT_70b889e0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b889e4);
  }
                    /* WARNING: Could not recover jumptable at 0x713d5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b889e0)();
  return;
}


// =========================================================================
// Function: FUN_713d5ec0
// Entry: 0x713d5ec0 | Size: 392 bytes
// =========================================================================

void FUN_713d5ec0(undefined4 param_1)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b889ec & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b889ec), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcff4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcfe4);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_700775e8;
      uVar3 = DAT_700775e4;
      *puVar10 = DAT_700775e0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_700775f8;
      uVar4 = DAT_700775f4;
      uVar3 = DAT_700775f0;
      puVar10[3] = DAT_700775ec;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_700775fe;
      *(undefined2 *)(puVar10 + 7) = DAT_700775fc;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d80e4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcff4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bcfe4);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1ff3fb37 >> iVar14) |
                (byte)(-0x14d86497 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xeb279b69 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x1d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x1f) = 0;
    }
    DAT_70b889e8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b889ec);
  }
                    /* WARNING: Could not recover jumptable at 0x713d5eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b889e8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713d62e0
// Entry: 0x713d62e0 | Size: 384 bytes
// =========================================================================

void FUN_713d62e0(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b889f4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b889f4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd014);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd004);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_70077608;
      uVar3 = DAT_70077604;
      *puVar9 = DAT_70077600;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70077618;
      uVar4 = DAT_70077614;
      uVar3 = DAT_70077610;
      puVar9[3] = DAT_7007760c;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007761c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71352648,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd014);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd004);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x63671535 >> iVar13) |
                (byte)(-0xaac1a99 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xf553e567 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b889f0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b889f4);
  }
                    /* WARNING: Could not recover jumptable at 0x713d630c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b889f0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713d66f8
// Entry: 0x713d66f8 | Size: 416 bytes
// =========================================================================

void FUN_713d66f8(undefined4 param_1,undefined4 param_2)

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
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b889fc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b889fc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd034,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd024);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_7007762c;
      uVar4 = DAT_70077628;
      uVar3 = DAT_70077624;
      *puVar10 = DAT_70077620;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007763c;
      uVar4 = DAT_70077638;
      uVar3 = DAT_70077634;
      puVar10[4] = DAT_70077630;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70077642;
      *(undefined2 *)(puVar10 + 8) = DAT_70077640;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d8124,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd034);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd024);
    if (*(char *)(iVar8 + 0x23) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc98f5399 >> iVar14) |
                (byte)(-0x3c6875 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xffc3978b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x21 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x23) = 0;
    }
    DAT_70b889f8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b889fc);
  }
                    /* WARNING: Could not recover jumptable at 0x713d672c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b889f8)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713d6b30
// Entry: 0x713d6b30 | Size: 384 bytes
// =========================================================================

void FUN_713d6b30(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88a04 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a04), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd054);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd044);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_70077650;
      uVar3 = DAT_7007764c;
      *puVar9 = DAT_70077648;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70077660;
      uVar4 = DAT_7007765c;
      uVar3 = DAT_70077658;
      puVar9[3] = DAT_70077654;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_70077664;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d8174,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd054);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd044);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x851d8be7 >> iVar13) |
                (byte)(-0x642a6a51 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x9bd595af >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b88a00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a04);
  }
                    /* WARNING: Could not recover jumptable at 0x713d6b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a00)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713d6f48
// Entry: 0x713d6f48 | Size: 416 bytes
// =========================================================================

void FUN_713d6f48(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88a0c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a0c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd074,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd064);
      *(undefined1 *)((int)puVar10 + 0x27) = 1;
      uVar5 = DAT_70077674;
      uVar4 = DAT_70077670;
      uVar3 = DAT_7007766c;
      *puVar10 = DAT_70077668;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70077688;
      uVar5 = DAT_70077684;
      uVar4 = DAT_70077680;
      uVar3 = DAT_7007767c;
      puVar10[4] = DAT_70077678;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_7007768c;
      *(undefined1 *)((int)puVar10 + 0x26) = DAT_7007768e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131679c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd074);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd064);
    if (*(char *)(iVar8 + 0x27) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xbb935373 >> iVar14) |
                (byte)(0x39e3c19b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x39e3c19b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x25 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x27) = 0;
    }
    DAT_70b88a08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a0c);
  }
                    /* WARNING: Could not recover jumptable at 0x713d6f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a08)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713d7380
// Entry: 0x713d7380 | Size: 400 bytes
// =========================================================================

void FUN_713d7380(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88a14 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a14), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd094,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd084);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_700776a0;
      uVar5 = DAT_7007769c;
      uVar4 = DAT_70077698;
      uVar3 = DAT_70077694;
      *puVar10 = DAT_70077690;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700776b4;
      uVar5 = DAT_700776b0;
      uVar4 = DAT_700776ac;
      uVar3 = DAT_700776a8;
      puVar10[5] = DAT_700776a4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d81b4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd094);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd084);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd7fe737 >> iVar14) |
                (byte)(-0x68e6be27 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x971941d9 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x26 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x28) = 0;
    }
    DAT_70b88a10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a14);
  }
                    /* WARNING: Could not recover jumptable at 0x713d73b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a10)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713d77a8
// Entry: 0x713d77a8 | Size: 388 bytes
// =========================================================================

void FUN_713d77a8(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88a1c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a1c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0a4);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_700776c4;
      uVar4 = DAT_700776c0;
      uVar3 = DAT_700776bc;
      *puVar10 = DAT_700776b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700776d8;
      uVar5 = DAT_700776d4;
      uVar4 = DAT_700776d0;
      uVar3 = DAT_700776cc;
      puVar10[4] = DAT_700776c8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_700776dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d8204,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0a4);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x6bad4799 >> iVar14) |
                (byte)(-0x388088dd << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xc77f7723 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70b88a18 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a1c);
  }
                    /* WARNING: Could not recover jumptable at 0x713d77d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a18)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713d7bc4
// Entry: 0x713d7bc4 | Size: 420 bytes
// =========================================================================

void FUN_713d7bc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b88a24 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a24);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0d4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0c4);
        *(undefined1 *)(iVar4 + 0x6d) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_700776e0,0x6d);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d8254,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0d4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd0c4);
      if (*(char *)(iVar4 + 0x6d) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xf9913b87 >> iVar10) |
                  (byte)(-0x3688e4bb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0xc9771b45 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x6b < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x6d) = 0;
      }
      DAT_70b88a20 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a24);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713d7c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a20)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713d9fa4
// Entry: 0x713d9fa4 | Size: 428 bytes
// =========================================================================

void FUN_713d9fa4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b88a70 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a70);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd174,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd164);
        *(undefined1 *)(iVar3 + 0x6d) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_700777c8,0x6d);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713da404,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd174);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd164);
      if (*(char *)(iVar3 + 0x6d) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0x93a3c787 >> iVar5) |
                  (byte)(0x47abcda5 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0x47abcda5 >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0x6b < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x6d) = 0;
      }
      DAT_70b88a6c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a70);
    }
  }
  (*DAT_70b88a6c)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: FUN_713da454
// Entry: 0x713da454 | Size: 420 bytes
// =========================================================================

void FUN_713da454(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70b88a80 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a80);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1d4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1c4);
        *(undefined1 *)(iVar4 + 0xa9) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70077870,0xa9);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713dad88,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1d4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1c4);
      if (*(char *)(iVar4 + 0xa9) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x93b4331 >> iVar10) |
                  (byte)(-0x3e962c5f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0xc169d3a1 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0xa7 < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0xa9) = 0;
      }
      DAT_70b88a7c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a80);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x713da490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a7c)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_713da8ac
// Entry: 0x713da8ac | Size: 384 bytes
// =========================================================================

void FUN_713da8ac(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88a88 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a88), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1f4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1e4);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_70077928;
      uVar3 = DAT_70077924;
      *puVar9 = DAT_70077920;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70077938;
      uVar4 = DAT_70077934;
      uVar3 = DAT_70077930;
      puVar9[3] = DAT_7007792c;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007793c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713dadd8,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1f4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd1e4);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x1fef9f7d >> iVar13) |
                (byte)(-0x32ea76f1 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xcd15890f >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70b88a84 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a88);
  }
                    /* WARNING: Could not recover jumptable at 0x713da8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88a84)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713dacc4
// Entry: 0x713dacc4 | Size: 60 bytes
// =========================================================================

void FUN_713dacc4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_713bd85c(param_2,*param_1);
  }
  FUN_713db648(*param_1,uVar1);
  return;
}


// =========================================================================
// Function: FUN_713db648
// Entry: 0x713db648 | Size: 32 bytes
// =========================================================================

void FUN_713db648(uint param_1,int param_2)

{
  if (0x2e < param_1) {
    param_2 = 1;
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x713db664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_713db668 + *(int *)(&DAT_713db668 + param_2 * 4)))
            (param_1,*(int *)(&DAT_713db668 + param_2 * 4),DAT_70b88a9c);
  return;
}


// =========================================================================
// Function: FUN_713db6d0
// Entry: 0x713db6d0 | Size: 396 bytes
// =========================================================================

void FUN_713db6d0(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88aa4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88aa4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd234);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd224);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_7007ad5c;
      uVar4 = DAT_7007ad58;
      uVar3 = DAT_7007ad54;
      *puVar10 = DAT_7007ad50;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007ad70;
      uVar5 = DAT_7007ad6c;
      uVar4 = DAT_7007ad68;
      uVar3 = DAT_7007ad64;
      puVar10[4] = DAT_7007ad60;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007ad84;
      uVar5 = DAT_7007ad80;
      uVar4 = DAT_7007ad7c;
      uVar3 = DAT_7007ad78;
      puVar10[9] = DAT_7007ad74;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_7007ad88;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713dbc4c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd234);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd224);
    if (*(char *)(iVar8 + 0x39) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc98f5399 >> iVar14) |
                (byte)(-0x3c6875 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xffc3978b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x37 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x39) = 0;
    }
    DAT_70b88aa0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88aa4);
  }
                    /* WARNING: Could not recover jumptable at 0x713db6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88aa0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713dbaf4
// Entry: 0x713dbaf4 | Size: 212 bytes
// =========================================================================

undefined8 FUN_713dbaf4(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  iVar1 = 0;
  pbVar9 = &DAT_70077940;
  do {
    uVar4 = (&DAT_70077a40)[iVar1 * 0x44];
    if (uVar4 != 0) {
      uVar6 = 0;
      uVar5 = uVar4;
      uVar3 = uVar4;
      pbVar7 = param_1;
      pbVar8 = pbVar9;
      do {
        if (*pbVar7 == 0) goto LAB_713dbb24;
        uVar2 = uVar6 & 0x38;
        uVar5 = (uint)(&DAT_70077a48)[iVar1 * 0x44] >> uVar2 |
                (&DAT_70077a4c)[iVar1 * 0x44] << (0x20 - uVar2 & 0xff);
        if (-1 < (int)(uVar2 - 0x20)) {
          uVar5 = (uint)(&DAT_70077a4c)[iVar1 * 0x44] >> (uVar2 - 0x20 & 0xff);
        }
        uVar5 = uVar5 & 0xff ^ (uint)*pbVar7;
        if (uVar5 != *pbVar8) goto LAB_713dbb24;
        uVar6 = uVar6 + 8;
        pbVar8 = pbVar8 + 1;
        uVar3 = uVar3 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar3 != 0);
    }
    uVar5 = (uint)param_1[uVar4];
    if (uVar5 == 0) goto LAB_713dbbc0;
LAB_713dbb24:
    iVar1 = iVar1 + 1;
    pbVar9 = pbVar9 + 0x110;
  } while (iVar1 != 0x31);
  iVar1 = 0;
LAB_713dbbc0:
  return CONCAT44(uVar5,iVar1);
}


// =========================================================================
// Function: FUN_713dc0d4
// Entry: 0x713dc0d4 | Size: 356 bytes
// =========================================================================

void FUN_713dc0d4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70b88af0 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88af0), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd434);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd424);
      *(undefined1 *)(puVar9 + 9) = 1;
      uVar5 = DAT_7007af0c;
      uVar4 = DAT_7007af08;
      uVar3 = DAT_7007af04;
      *puVar9 = DAT_7007af00;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007af20;
      uVar5 = DAT_7007af1c;
      uVar4 = DAT_7007af18;
      uVar3 = DAT_7007af14;
      puVar9[4] = DAT_7007af10;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713ddd84,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd434);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd424);
    if (*(char *)(iVar7 + 0x24) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x25097b7b >> iVar13) |
                 (byte)(-0x1c6ed203 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xe3912dfd >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x22 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x24) = 0;
    }
    DAT_70b88aec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88af0);
  }
                    /* WARNING: Could not recover jumptable at 0x713dc100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b88aec)();
  return;
}


// =========================================================================
// Function: FUN_713dc4d0
// Entry: 0x713dc4d0 | Size: 2032 bytes
// =========================================================================

void FUN_713dc4d0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_8c [12];
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
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_71201740 == 0) {
    return;
  }
  iVar3 = FUN_713cdfd8();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_713ce3d8();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_71ba2d70(*DAT_70b88ad4,0);
  if (iVar3 != 0) {
    return;
  }
  if (*DAT_70b46f00 != 0) {
    return;
  }
  iVar4 = FUN_713c301c(0);
  iVar3 = DAT_70b46c18;
  cVar1 = '\0';
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + 0x33);
  }
  if (iVar4 != 0 && cVar1 != '\0') {
    return;
  }
  puVar14 = (undefined4 *)(DAT_70b46c18 + 4);
  if (*(int *)(DAT_70b46c18 + 0x14) != 0) {
    puVar14 = (undefined4 *)(*(int *)(DAT_70b46c18 + 0x14) + 0x30);
  }
  uVar10 = puVar14[1];
  uVar16 = puVar14[2];
  uVar13 = *puVar14;
  iVar4 = FUN_71ba2d70(uVar16,0x44610000);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_713af384(iVar3);
  if (((iVar4 != 0) && (iVar4 = FUN_713c2bdc(0,0), iVar4 != 0)) &&
     (iVar4 = FUN_713c8278(), iVar4 != 0)) {
    return;
  }
  iVar4 = FUN_71ba2d30(*DAT_70b88ac0,0);
  if (iVar4 == 0) {
    *DAT_70b88ae4 = 800;
    DAT_70b88af8 = '\x01';
  }
  else if (DAT_70b88af8 == '\x01') {
    if (*DAT_70b88ae4 < 1) {
      *DAT_70b88ae4 = 800;
      DAT_70b88af8 = '\0';
    }
    else {
      *DAT_70b88ae4 = *DAT_70b88ae4 + -1;
    }
  }
  iVar4 = FUN_71ba2d70(*DAT_70b88ab4,0x3f8147ae);
  if (iVar4 != 0) {
    FUN_713dc0d4();
  }
  uVar12 = *DAT_70b88ac0;
  iVar4 = FUN_71ba2d70(uVar12,0x3dcccccd);
  uVar5 = DAT_70b88af4;
  if ((iVar4 == 0) && (iVar4 = FUN_71ba2cf0(DAT_70b88af4,0), iVar4 != 0)) {
    return;
  }
  FUN_71ba21e8(uVar12,0x40a00000);
  iVar4 = FUN_71ba17bc();
  if (iVar4 < 1) {
    DAT_70b88afc = 0;
  }
  else {
    DAT_70b88afc = DAT_70b88afc + 1;
    if (4 < DAT_70b88afc) {
      DAT_70b88afc = 0;
      uVar5 = FUN_71ba21e8(uVar12,0x41200000);
      uVar5 = imp_fmaxf(uVar5,0x42200000);
      uVar5 = FUN_71ba21e8(uVar5,0x3f000000);
      imp_rand();
      uVar12 = FUN_71ba1b94();
      uVar12 = FUN_71ba21e8(uVar12,0x30000000);
      uVar5 = FUN_71ba21e8(uVar5,uVar12);
      uVar6 = imp_rand();
      if ((uVar6 & 1) == 0) {
        uVar12 = FUN_71ba1b94((uVar6 & 0xfe) - 0x80);
        uVar12 = FUN_71ba21e8(uVar12,0x3bcccccd);
        uVar12 = FUN_71ba0b38(uVar12,*(undefined4 *)(iVar3 + 0x14c));
      }
      else {
        uVar2 = imp_rand();
        uVar12 = FUN_71ba1e0c(uVar2);
        uVar12 = FUN_71ba21e8(uVar12,0x3cc8f53c);
      }
      uStack_28 = 0x42200000;
      uVar7 = imp_cosf();
      uVar7 = FUN_71ba21e8(uVar5,uVar7);
      uStack_2c = FUN_71ba0b38(uVar7,uVar10);
      uVar12 = imp_sinf(uVar12);
      uVar5 = FUN_71ba21e8(uVar5,uVar12);
      uStack_30 = FUN_71ba0b38(uVar5,uVar13);
      FUN_7136cdfc(&uStack_60);
      uStack_54 = 0;
      FUN_7136cdfc(&uStack_50);
      uStack_38 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_64 = 0;
      iVar4 = FUN_713e5900(&uStack_30,0xc2200000,&uStack_60,&uStack_64,1,0,0,0,1,0,0);
      puVar14 = DAT_70b88ac0;
      if (iVar4 != 0) {
        uStack_68 = 0x3cf5c28f;
        uStack_7c = 0x3f800000;
        uStack_78 = 0x3f800000;
        uStack_74 = 0x3e800000;
        uStack_70 = 0x3ca3d70a;
        uStack_6c = 0;
        uStack_80 = 0x3f800000;
        FUN_7136cdfc(auStack_8c);
        uVar5 = FUN_71ba0b38(uStack_58,0x3dcccccd);
        puVar14 = DAT_70b88ac0;
        FUN_71ba21e8(*DAT_70b88ac0,0x41200000);
        iVar8 = FUN_71ba17bc();
        iVar4 = DAT_70ffd2ec;
        if (-6 < iVar8) {
          puVar15 = (undefined4 *)((uint)&uStack_98 | 4);
          iVar8 = -1;
          do {
            puVar15[1] = uVar5;
            uStack_98 = uStack_60;
            uStack_94 = uStack_5c;
            imp_rand();
            uVar12 = FUN_71ba1b94();
            uVar12 = FUN_71ba21e8(uVar12,0x30000000);
            uVar12 = FUN_71ba21e8(uVar12,0x41f00000);
            uVar12 = FUN_71ba0b38(uVar12,0xc1700000);
            uStack_98 = FUN_71ba0b38(uStack_98,uVar12);
            imp_rand();
            uVar12 = FUN_71ba1b94();
            uVar12 = FUN_71ba21e8(uVar12,0x30000000);
            uVar12 = FUN_71ba21e8(uVar12,0x41f00000);
            uVar12 = FUN_71ba0b38(uVar12,0xc1700000);
            uVar12 = FUN_71ba0b38(*puVar15,uVar12);
            *puVar15 = uVar12;
            FUN_7145025c(*(undefined4 *)(iVar4 + 0x30),&uStack_98,auStack_8c,0,&uStack_80,0xbf800000
                         ,0x3f99999a,0x3f19999a,0);
            puVar14 = DAT_70b88ac0;
            FUN_71ba21e8(*DAT_70b88ac0,0x41200000);
            iVar9 = FUN_71ba17bc();
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar9 + 5);
        }
      }
      uVar12 = *puVar14;
      uVar5 = DAT_70b88af4;
    }
  }
  uVar12 = FUN_71ba21e8(uVar12,0x3e4ccccd);
  iVar4 = FUN_71ba2d10(uVar5,uVar12);
  if (iVar4 == 0) {
    iVar4 = FUN_71ba2d70(uVar5,uVar12);
    if (iVar4 == 0) goto LAB_713dcae0;
    uVar5 = FUN_71ba0b38(uVar5,0xbb23d70a);
    uVar7 = uVar12;
    uVar11 = uVar5;
  }
  else {
    uVar7 = FUN_71ba0b38(uVar5,0x3b23d70a);
    uVar5 = uVar12;
    uVar11 = uVar7;
  }
  iVar4 = FUN_71ba2d10(uVar5,uVar7);
  uVar5 = uVar12;
  if (iVar4 == 0) {
    uVar5 = uVar11;
  }
LAB_713dcae0:
  iVar4 = FUN_71ba2d10(uVar5,0);
  if (iVar4 != 0) {
    uVar5 = 0;
  }
  iVar4 = FUN_71ba2d70(uVar5,0x3f800000);
  if (iVar4 != 0) {
    uVar5 = 0x3f800000;
  }
  uStack_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0x3e4ccccd;
  uStack_5c = 0x3f666666;
  uStack_58 = 0x3f800000;
  uStack_60 = 0x3f666666;
  uStack_54 = uVar5;
  DAT_70b88af4 = uVar5;
  iVar4 = imp_rand();
  if (0x55555554 < iVar4 * -0x55555555 + 0x2aaaaaaaU) {
    return;
  }
  uVar7 = *(undefined4 *)(iVar3 + 0x90c);
  uVar12 = *(undefined4 *)(iVar3 + 0x910);
  uVar5 = imp_rand();
  uVar12 = FUN_71ba21e8(uVar12,0x41200000);
  uVar10 = FUN_71ba0b38(uVar12,uVar10);
  imp_rand();
  uVar12 = FUN_71ba1b94();
  uVar12 = FUN_71ba21e8(uVar12,0x30000000);
  uVar12 = FUN_71ba21e8(uVar12,0x42200000);
  uVar10 = FUN_71ba0b38(uVar12,uVar10);
  uVar10 = FUN_71ba0b38(uVar10,0xc1a00000);
  imp_rand();
  uStack_7c = uVar10;
  uVar10 = FUN_71ba1b94();
  uVar10 = FUN_71ba21e8(uVar10,0x30000000);
  uVar10 = FUN_71ba21e8(uVar10,0x40e00000);
  uVar10 = FUN_71ba0b38(uVar10,uVar16);
  uStack_78 = FUN_71ba0b38(uVar10,0xc0000000);
  uVar10 = FUN_71ba21e8(uVar7,0x41200000);
  uVar10 = FUN_71ba0b38(uVar10,uVar13);
  uVar13 = FUN_71ba1b94(uVar5);
  uVar13 = FUN_71ba21e8(uVar13,0x30000000);
  uVar13 = FUN_71ba21e8(uVar13,0x42200000);
  uVar10 = FUN_71ba0b38(uVar13,uVar10);
  uStack_80 = FUN_71ba0b38(uVar10,0xc1a00000);
  FUN_713dd9c8(&uStack_30,DAT_70b88ae8,0x41700000);
  FUN_7145025c(*(undefined4 *)(DAT_70ffd2ec + 0x1c),&uStack_80,&uStack_30,0,&uStack_60,0xbf800000,
               0x3f99999a,0x3f19999a,0);
  return;
}


// =========================================================================
// Function: FUN_713dd9c8
// Entry: 0x713dd9c8 | Size: 72 bytes
// =========================================================================

void FUN_713dd9c8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = FUN_71ba21e8(param_2[2],param_3);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba21e8(uVar3,param_3);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba21e8(uVar2,param_3);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_713e4ad0
// Entry: 0x713e4ad0 | Size: 168 bytes
// =========================================================================

void FUN_713e4ad0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar3;
  
  FUN_713b3a38();
  FUN_713b49d0(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  if ((*(byte *)((int)param_1 + 0x3a) & 3 | 4) == 5) {
    return;
  }
  if ((param_1[7] & 0x40004U) == 0) {
    uVar2 = param_1[0x2e];
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)((int)param_1 + 0x1e);
    }
    if (bVar3 && (uVar2 & 4) == 0) {
      iVar1 = FUN_71356ebc(DAT_70b88b7c,param_1,extraout_r2,extraout_r3,unaff_r4,unaff_r10,unaff_r11
                           ,unaff_lr);
      param_1[0x2e] = iVar1;
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_713e4b9c
// Entry: 0x713e4b9c | Size: 384 bytes
// =========================================================================

void FUN_713e4b9c(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38e14 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e14), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd594);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd584);
      *(undefined1 *)((int)puVar9 + 0x22) = 1;
      uVar5 = DAT_7007b03c;
      uVar4 = DAT_7007b038;
      uVar3 = DAT_7007b034;
      *puVar9 = DAT_7007b030;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007b04c;
      uVar4 = DAT_7007b048;
      uVar3 = DAT_7007b044;
      puVar9[4] = DAT_7007b040;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined2 *)(puVar9 + 8) = DAT_7007b050;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eb97c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd594);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd584);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xc59f19cf >> iVar13) |
                (byte)(-0x2450bc7d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xdbaf4383 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x20 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x22) = 0;
    }
    DAT_70c38e10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e14);
  }
                    /* WARNING: Could not recover jumptable at 0x713e4bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38e10)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713e4fb4
// Entry: 0x713e4fb4 | Size: 468 bytes
// =========================================================================

void FUN_713e4fb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70c38e1c & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e1c);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5b4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5a4);
        *(undefined1 *)(iVar4 + 0xe5) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007b058,0xe5);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eb9cc,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5b4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5a4);
      if (*(char *)(iVar4 + 0xe5) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0x570fc78f >> iVar9) |
                  (byte)(-0x382c2403 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xc7d3dbfd >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0xe3 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0xe5) = 0;
      }
      DAT_70c38e18 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e1c);
    }
  }
  (*DAT_70c38e18)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


// =========================================================================
// Function: FUN_713e543c
// Entry: 0x713e543c | Size: 528 bytes
// =========================================================================

void FUN_713e543c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70c38e24 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e24);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5d4,param_2,param_3);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5c4);
        *(undefined1 *)(iVar3 + 0x142) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007b140,0x142);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eba1c,iVar3,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5d4);
        *puVar5 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5c4);
      if (*(char *)(iVar3 + 0x142) != '\0') {
        uVar6 = 0;
        uVar10 = 0;
        do {
          iVar8 = (uVar6 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar7 = (byte)(0x85232bf3 >> iVar8) |
                  (byte)(-0xe9a9ac9 << ((uVar6 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar7 = (byte)(0xf1656537 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar6) = *(byte *)(iVar3 + uVar6) ^ bVar7;
          bVar11 = 0xfffffffe < uVar6;
          bVar1 = uVar10 == 0;
          bVar2 = (0x140 < uVar6) <= uVar10;
          uVar6 = uVar6 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x142) = 0;
      }
      DAT_70c38e20 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e24);
    }
  }
  (*DAT_70c38e20)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14);
  return;
}


// =========================================================================
// Function: FUN_713e5900
// Entry: 0x713e5900 | Size: 472 bytes
// =========================================================================

void FUN_713e5900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70c38e2c & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e2c);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5f4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5e4);
        *(undefined1 *)(iVar4 + 0x109) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007b288,0x109);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eba6c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5f4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd5e4);
      if (*(char *)(iVar4 + 0x109) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0x9d7d13e5 >> iVar9) |
                  (byte)(-0x2ae85489 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xd517ab77 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x107 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x109) = 0;
      }
      DAT_70c38e28 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e2c);
    }
  }
  (*DAT_70c38e28)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11);
  return;
}


// =========================================================================
// Function: FUN_713e5d8c
// Entry: 0x713e5d8c | Size: 364 bytes
// =========================================================================

void FUN_713e5d8c(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38e34 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e34), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd614);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd604);
      *(undefined1 *)((int)puVar9 + 0x26) = 1;
      uVar5 = DAT_7007b3a4;
      uVar4 = DAT_7007b3a0;
      uVar3 = DAT_7007b39c;
      *puVar9 = DAT_7007b398;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007b3b8;
      uVar5 = DAT_7007b3b4;
      uVar4 = DAT_7007b3b0;
      uVar3 = DAT_7007b3ac;
      puVar9[4] = DAT_7007b3a8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      *(undefined2 *)(puVar9 + 9) = DAT_7007b3bc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713ebabc,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd614);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd604);
    if (*(char *)(iVar7 + 0x26) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xcb0b3da5 >> iVar13) |
                 (byte)(0x5ad23c3 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x5ad23c3 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x24 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x26) = 0;
    }
    DAT_70c38e30 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e34);
  }
                    /* WARNING: Could not recover jumptable at 0x713e5db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38e30)();
  return;
}


// =========================================================================
// Function: FUN_713e63c8
// Entry: 0x713e63c8 | Size: 52 bytes
// =========================================================================

undefined4 * FUN_713e63c8(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  param_2 = param_2 & ~((int)param_2 >> 0x1f);
  if (0x9e < param_1) {
    param_1 = 0x9f;
  }
  uVar1 = 0x9f;
  if (param_2 < 0x9f) {
    uVar1 = param_2;
  }
  return &DAT_70b88b90 + uVar1 * 0x140 + param_1 * 2;
}


// =========================================================================
// Function: FUN_713e6434
// Entry: 0x713e6434 | Size: 60 bytes
// =========================================================================

undefined4 * FUN_713e6434(int param_1,int param_2)

{
  return &DAT_70c1eb90 + (param_2 % 0x10) * 0x30 + (param_1 % 0x10) * 3;
}


// =========================================================================
// Function: FUN_713e64a8
// Entry: 0x713e64a8 | Size: 304 bytes
// =========================================================================

void FUN_713e64a8(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      piVar1 = &DAT_70b88b90 + iVar4 * 0x140 + iVar3 * 2;
      for (piVar2 = (int *)*piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 != 0) {
          *(undefined2 *)(*piVar2 + 0x30) = 0;
        }
      }
      while (piVar1 = (int *)piVar1[1], piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          *(undefined2 *)(*piVar1 + 0x30) = 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xa0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xa0);
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      piVar1 = &DAT_70c1eb90 + iVar4 * 0x30 + iVar3 * 3;
      for (piVar2 = (int *)*piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 != 0) {
          *(undefined2 *)(*piVar2 + 0x30) = 0;
        }
      }
      for (piVar2 = (int *)piVar1[1]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 != 0) {
          *(undefined2 *)(*piVar2 + 0x30) = 0;
        }
      }
      for (piVar2 = (int *)piVar1[2]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 != 0) {
          *(undefined2 *)(*piVar2 + 0x30) = 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  return;
}


// =========================================================================
// Function: FUN_713e6630
// Entry: 0x713e6630 | Size: 3976 bytes
// =========================================================================

undefined4
FUN_713e6630(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [17];
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
  uStack_27 = param_5;
  uStack_28 = param_6;
  uStack_29 = param_7;
  uStack_2a = param_8;
  uStack_2b = param_9;
  uStack_26 = param_4;
  uStack_25 = param_3;
  uVar2 = FUN_71ba13e0(*param_1,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar3 = FUN_71ba17bc();
  puVar15 = param_1 + 1;
  uVar2 = FUN_71ba13e0(*puVar15,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar4 = FUN_71ba17bc();
  uVar2 = FUN_71ba13e0(*param_2,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar5 = FUN_71ba17bc();
  uVar2 = FUN_71ba13e0(param_2[1],0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar6 = FUN_71ba17bc();
  if (*DAT_70b88b84 == -1) {
    FUN_713e64a8();
    *DAT_70b88b84 = 1;
  }
  else {
    *DAT_70b88b84 = *DAT_70b88b84 + 1;
  }
  FUN_7136cdfc(auStack_4c);
  FUN_7136cdfc(auStack_3c);
  FUN_7136d040(auStack_4c,param_1);
  FUN_7136d040(auStack_3c,param_2);
  puStack_50 = &uStack_2b;
  puStack_54 = &uStack_2a;
  puStack_58 = &uStack_29;
  puStack_5c = &uStack_28;
  puStack_60 = &uStack_27;
  puStack_64 = &uStack_26;
  puStack_68 = &uStack_25;
  uVar7 = (int)uVar3 >> 0x1f;
  puStack_6c = auStack_4c;
  if (uVar3 == uVar5 && uVar4 == uVar6) {
    uVar6 = uVar3 & ~uVar7;
    uVar5 = uVar4 & ~((int)uVar4 >> 0x1f);
    if (0x9e < uVar6) {
      uVar6 = 0x9f;
    }
    uVar7 = 0x9f;
    if (uVar5 < 0x9f) {
      uVar7 = uVar5;
    }
    iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar7 * 0x140 + uVar6 * 2,
                         &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                         auStack_4c,uStack_25,uStack_26,uStack_27,uStack_28,uStack_29,uStack_2a,
                         uStack_2b);
    if (iVar8 == 0) {
      return 0;
    }
  }
  else if (uVar3 == uVar5) {
    uVar5 = uVar3 & ~uVar7;
    if (0x9e < uVar5) {
      uVar5 = 0x9f;
    }
    if ((int)uVar4 < (int)uVar6) {
      do {
        uVar7 = uVar6 & ~((int)uVar6 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar7 * 0x140 + uVar5 * 2,
                             &DAT_70c1eb90 + ((int)uVar6 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                             puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                             *puStack_54,*puStack_50);
        if (iVar8 == 0) {
          return 0;
        }
        bVar1 = (int)uVar4 < (int)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    else {
      do {
        uVar7 = uVar4 & ~((int)uVar4 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar7 * 0x140 + uVar5 * 2,
                             &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                             puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                             *puStack_54,*puStack_50);
        if (iVar8 == 0) {
          return 0;
        }
        bVar1 = (int)uVar6 < (int)uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
  }
  else if (uVar4 == uVar6) {
    uVar6 = uVar4 & ~((int)uVar4 >> 0x1f);
    if (0x9e < uVar6) {
      uVar6 = 0x9f;
    }
    if ((int)uVar3 < (int)uVar5) {
      do {
        uVar7 = uVar5 & ~((int)uVar5 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar6 * 0x140 + uVar7 * 2,
                             &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar5 % 0x10) * 3,
                             puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                             *puStack_54,*puStack_50);
        if (iVar8 == 0) {
          return 0;
        }
        bVar1 = (int)uVar3 < (int)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
    else {
      do {
        uVar7 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar6 * 0x140 + uVar7 * 2,
                             &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                             puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                             *puStack_54,*puStack_50);
        if (iVar8 == 0) {
          return 0;
        }
        bVar1 = (int)uVar5 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
    }
  }
  else {
    uVar12 = *puVar15;
    uVar2 = FUN_71ba240c(param_2[1]);
    uVar14 = *param_2;
    uVar16 = *param_1;
    uVar9 = FUN_71ba240c(uVar14,uVar16);
    uVar2 = FUN_71ba13e0(uVar2,uVar9);
    iVar8 = FUN_71ba2d10(uVar16,uVar14);
    if (iVar8 == 0) {
      uVar9 = FUN_71ba1b94(uVar3 * 0x32 + -0xf87);
      uVar9 = FUN_71ba240c(uVar9,uVar16);
      uVar9 = FUN_71ba21e8(uVar9,uVar2);
      uVar9 = FUN_71ba0b38(uVar9,uVar12);
      uVar9 = FUN_71ba13e0(uVar9,0x42480000);
      FUN_71ba0b38(uVar9,0x42a00000);
      imp_floorf();
      uVar13 = FUN_71ba17bc();
      uVar7 = uVar3 & ~uVar7;
      if (0x9e < uVar7) {
        uVar7 = 0x9f;
      }
      if ((int)uVar4 < (int)uVar13) {
        do {
          uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar10) {
            uVar10 = 0x9f;
          }
          iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar10 * 0x140 + uVar7 * 2,
                               &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                               puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,
                               *puStack_58,*puStack_54,*puStack_50);
          if (iVar8 == 0) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar13 + 1 != uVar4);
      }
      else {
        do {
          uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar10) {
            uVar10 = 0x9f;
          }
          iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar10 * 0x140 + uVar7 * 2,
                               &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                               puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,
                               *puStack_58,*puStack_54,*puStack_50);
          if (iVar8 == 0) {
            return 0;
          }
          bVar1 = (int)uVar13 < (int)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      while (uVar4 = uVar13, uVar3 = uVar3 - 1, (int)uVar5 < (int)uVar3) {
        uVar9 = FUN_71ba1b94(uVar3 * 0x32 + -0xf87);
        uVar9 = FUN_71ba240c(uVar9,*param_1);
        uVar9 = FUN_71ba21e8(uVar9,uVar2);
        uVar9 = FUN_71ba0b38(uVar9,*puVar15);
        uVar9 = FUN_71ba13e0(uVar9,0x42480000);
        FUN_71ba0b38(uVar9,0x42a00000);
        imp_floorf();
        uVar13 = FUN_71ba17bc();
        uVar7 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        if ((int)uVar4 < (int)uVar13) {
          do {
            uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
            if (0x9e < uVar10) {
              uVar10 = 0x9f;
            }
            iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar10 * 0x140 + uVar7 * 2,
                                 &DAT_70c1eb90 +
                                 ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,puStack_6c,
                                 *puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                                 *puStack_54,*puStack_50);
            if (iVar8 == 0) {
              return 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar13 + 1 != uVar4);
        }
        else {
          do {
            uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
            if (0x9e < uVar10) {
              uVar10 = 0x9f;
            }
            iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar10 * 0x140 + uVar7 * 2,
                                 &DAT_70c1eb90 +
                                 ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,puStack_6c,
                                 *puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                                 *puStack_54,*puStack_50);
            if (iVar8 == 0) {
              return 0;
            }
            bVar1 = (int)uVar13 < (int)uVar4;
            uVar4 = uVar4 - 1;
          } while (bVar1);
        }
      }
      if ((int)uVar4 < (int)uVar6) {
        do {
          iVar8 = FUN_713e821c(&puStack_6c,uVar5,uVar4);
          if (iVar8 == 0) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar6 + 1 != uVar4);
      }
      else {
        do {
          iVar8 = FUN_713e821c(&puStack_6c,uVar5,uVar4);
          if (iVar8 == 0) {
            return 0;
          }
          bVar1 = (int)uVar6 < (int)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
    }
    else {
      uVar13 = uVar3 + 1;
      uVar9 = FUN_71ba1b94(uVar13 * 0x32 + -0xf87);
      uVar9 = FUN_71ba240c(uVar9,uVar16);
      uVar9 = FUN_71ba21e8(uVar9,uVar2);
      uVar9 = FUN_71ba0b38(uVar9,uVar12);
      uVar9 = FUN_71ba13e0(uVar9,0x42480000);
      FUN_71ba0b38(uVar9,0x42a00000);
      imp_floorf();
      uVar10 = FUN_71ba17bc();
      uVar7 = uVar3 & ~uVar7;
      if (0x9e < uVar7) {
        uVar7 = 0x9f;
      }
      if ((int)uVar4 < (int)uVar10) {
        do {
          uVar11 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar11) {
            uVar11 = 0x9f;
          }
          iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar11 * 0x140 + uVar7 * 2,
                               &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                               puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,
                               *puStack_58,*puStack_54,*puStack_50);
          if (iVar8 == 0) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar10 + 1 != uVar4);
      }
      else {
        do {
          uVar11 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar11) {
            uVar11 = 0x9f;
          }
          iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar11 * 0x140 + uVar7 * 2,
                               &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                               puStack_6c,*puStack_68,*puStack_64,*puStack_60,*puStack_5c,
                               *puStack_58,*puStack_54,*puStack_50);
          if (iVar8 == 0) {
            return 0;
          }
          bVar1 = (int)uVar10 < (int)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      uVar3 = uVar10;
      if ((int)uVar13 < (int)uVar5) {
        do {
          uVar4 = uVar13 + 1;
          uVar9 = FUN_71ba1b94(uVar4 * 0x32 + -0xf87);
          uVar9 = FUN_71ba240c(uVar9,*param_1);
          uVar9 = FUN_71ba21e8(uVar9,uVar2);
          uVar9 = FUN_71ba0b38(uVar9,*puVar15);
          uVar9 = FUN_71ba13e0(uVar9,0x42480000);
          FUN_71ba0b38(uVar9,0x42a00000);
          imp_floorf();
          uVar10 = FUN_71ba17bc();
          uVar7 = uVar13 & ~((int)uVar13 >> 0x1f);
          if (0x9e < uVar7) {
            uVar7 = 0x9f;
          }
          if ((int)uVar3 < (int)uVar10) {
            do {
              uVar11 = uVar3 & ~((int)uVar3 >> 0x1f);
              if (0x9e < uVar11) {
                uVar11 = 0x9f;
              }
              iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar11 * 0x140 + uVar7 * 2,
                                   &DAT_70c1eb90 +
                                   ((int)uVar3 % 0x10) * 0x30 + ((int)uVar13 % 0x10) * 3,puStack_6c,
                                   *puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                                   *puStack_54,*puStack_50);
              if (iVar8 == 0) {
                return 0;
              }
              uVar3 = uVar3 + 1;
            } while (uVar10 + 1 != uVar3);
          }
          else {
            do {
              uVar11 = uVar3 & ~((int)uVar3 >> 0x1f);
              if (0x9e < uVar11) {
                uVar11 = 0x9f;
              }
              iVar8 = FUN_713e4fb4(&DAT_70b88b90 + uVar11 * 0x140 + uVar7 * 2,
                                   &DAT_70c1eb90 +
                                   ((int)uVar3 % 0x10) * 0x30 + ((int)uVar13 % 0x10) * 3,puStack_6c,
                                   *puStack_68,*puStack_64,*puStack_60,*puStack_5c,*puStack_58,
                                   *puStack_54,*puStack_50);
              if (iVar8 == 0) {
                return 0;
              }
              bVar1 = (int)uVar10 < (int)uVar3;
              uVar3 = uVar3 - 1;
            } while (bVar1);
          }
          uVar13 = uVar4;
          uVar3 = uVar10;
        } while (uVar4 != uVar5);
      }
      if ((int)uVar10 < (int)uVar6) {
        do {
          iVar8 = FUN_713e821c(&puStack_6c,uVar5,uVar10);
          if (iVar8 == 0) {
            return 0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar6 + 1 != uVar10);
      }
      else {
        do {
          iVar8 = FUN_713e821c(&puStack_6c,uVar5,uVar10);
          if (iVar8 == 0) {
            return 0;
          }
          bVar1 = (int)uVar6 < (int)uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar1);
      }
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_713e8168
// Entry: 0x713e8168 | Size: 64 bytes
// =========================================================================

void FUN_713e8168(void)

{
  if (*DAT_70b88b84 == -1) {
    FUN_713e64a8();
    *DAT_70b88b84 = 1;
    return;
  }
  *DAT_70b88b84 = *DAT_70b88b84 + 1;
  return;
}


// =========================================================================
// Function: FUN_713e821c
// Entry: 0x713e821c | Size: 188 bytes
// =========================================================================

void FUN_713e821c(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 & ~((int)param_2 >> 0x1f);
  uVar2 = param_3 & ~((int)param_3 >> 0x1f);
  if (0x9e < uVar1) {
    uVar1 = 0x9f;
  }
  uVar3 = 0x9f;
  if (uVar2 < 0x9f) {
    uVar3 = uVar2;
  }
  FUN_713e4fb4(&DAT_70b88b90 + uVar3 * 0x140 + uVar1 * 2,
               &DAT_70c1eb90 + ((int)param_3 % 0x10) * 0x30 + ((int)param_2 % 0x10) * 3,*param_1,
               *(undefined1 *)param_1[1],*(undefined1 *)param_1[2],*(undefined1 *)param_1[3],
               *(undefined1 *)param_1[4],*(undefined1 *)param_1[5],*(undefined1 *)param_1[6],
               *(undefined1 *)param_1[7]);
  return;
}


// =========================================================================
// Function: FUN_713e834c
// Entry: 0x713e834c | Size: 5264 bytes
// =========================================================================

bool FUN_713e834c(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
  *param_4 = 0;
  uStack_26 = (undefined1)param_6;
  uStack_25 = (undefined1)param_5;
  uStack_27 = (undefined1)param_7;
  uStack_28 = (undefined1)param_8;
  uStack_29 = (undefined1)param_9;
  uStack_2a = (undefined1)param_10;
  uStack_2b = (undefined1)param_11;
  uStack_2c = (undefined1)param_12;
  uVar2 = FUN_71ba13e0(*param_1,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar3 = FUN_71ba17bc();
  puVar14 = param_1 + 1;
  uVar2 = FUN_71ba13e0(*puVar14,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar4 = FUN_71ba17bc();
  uVar2 = FUN_71ba13e0(*param_2,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar5 = FUN_71ba17bc();
  uVar2 = FUN_71ba13e0(param_2[1],0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar6 = FUN_71ba17bc();
  if (*DAT_70b88b84 == -1) {
    FUN_713e64a8();
    *DAT_70b88b84 = 1;
  }
  else {
    *DAT_70b88b84 = *DAT_70b88b84 + 1;
  }
  uStack_30 = 0x3f800000;
  puStack_38 = &uStack_2c;
  puStack_3c = &uStack_2b;
  puStack_40 = &uStack_2a;
  puStack_44 = &uStack_29;
  puStack_48 = &uStack_28;
  puStack_4c = &uStack_27;
  puStack_50 = &uStack_26;
  puStack_54 = &uStack_25;
  puStack_5c = &uStack_30;
  uStack_80 = *param_1;
  uStack_7c = param_1[1];
  uStack_78 = param_1[2];
  uStack_70 = *param_2;
  uStack_6c = param_2[1];
  uStack_68 = param_2[2];
  uVar7 = uStack_70;
  if (uVar3 == uVar5) {
    uVar7 = uVar4;
  }
  uVar11 = (int)uVar3 >> 0x1f;
  uStack_60 = param_3;
  puStack_58 = param_4;
  if (uVar3 == uVar5 && uVar7 == uVar6) {
    uVar6 = uVar3 & ~uVar11;
    uVar5 = uVar4 & ~((int)uVar4 >> 0x1f);
    if (0x9e < uVar6) {
      uVar6 = 0x9f;
    }
    uVar7 = 0x9f;
    if (uVar5 < 0x9f) {
      uVar7 = uVar5;
    }
    FUN_713e543c(&DAT_70b88b90 + uVar7 * 0x140 + uVar6 * 2,
                 &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,&uStack_80,
                 param_3,puStack_5c,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
  }
  else if (uVar3 == uVar5) {
    uVar5 = uVar3 & ~uVar11;
    if (0x9e < uVar5) {
      uVar5 = 0x9f;
    }
    if ((int)uVar4 < (int)uVar6) {
      do {
        uVar7 = uVar6 & ~((int)uVar6 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        FUN_713e543c(&DAT_70b88b90 + uVar7 * 0x140 + uVar5 * 2,
                     &DAT_70c1eb90 + ((int)uVar6 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,&uStack_80
                     ,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,*puStack_4c,
                     *puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
        bVar1 = (int)uVar4 < (int)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar1);
    }
    else {
      do {
        uVar7 = uVar4 & ~((int)uVar4 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        FUN_713e543c(&DAT_70b88b90 + uVar7 * 0x140 + uVar5 * 2,
                     &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,&uStack_80
                     ,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,*puStack_4c,
                     *puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
        bVar1 = (int)uVar6 < (int)uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar1);
    }
  }
  else if (uVar4 == uVar6) {
    uVar6 = uVar4 & ~((int)uVar4 >> 0x1f);
    if (0x9e < uVar6) {
      uVar6 = 0x9f;
    }
    if ((int)uVar3 < (int)uVar5) {
      do {
        uVar7 = uVar5 & ~((int)uVar5 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        FUN_713e543c(&DAT_70b88b90 + uVar6 * 0x140 + uVar7 * 2,
                     &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar5 % 0x10) * 3,&uStack_80
                     ,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,*puStack_4c,
                     *puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
        bVar1 = (int)uVar3 < (int)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
    }
    else {
      do {
        uVar7 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        FUN_713e543c(&DAT_70b88b90 + uVar6 * 0x140 + uVar7 * 2,
                     &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,&uStack_80
                     ,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,*puStack_4c,
                     *puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
        bVar1 = (int)uVar5 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
    }
  }
  else {
    uVar15 = *puVar14;
    uVar2 = FUN_71ba240c(param_2[1],uVar15);
    uVar7 = *param_2;
    uVar13 = *param_1;
    uVar9 = FUN_71ba240c(uVar7,uVar13);
    uVar2 = FUN_71ba13e0(uVar2,uVar9);
    iVar8 = FUN_71ba2d10(uVar13,uVar7);
    if (iVar8 == 0) {
      uVar9 = FUN_71ba1b94(uVar3 * 0x32 + -0xf87);
      uVar9 = FUN_71ba240c(uVar9,uVar13);
      uVar9 = FUN_71ba21e8(uVar9,uVar2);
      uVar9 = FUN_71ba0b38(uVar9,uVar15);
      uVar9 = FUN_71ba13e0(uVar9,0x42480000);
      FUN_71ba0b38(uVar9,0x42a00000);
      imp_floorf();
      uVar7 = FUN_71ba17bc();
      uVar11 = uVar3 & ~uVar11;
      if (0x9e < uVar11) {
        uVar11 = 0x9f;
      }
      if ((int)uVar4 < (int)uVar7) {
        do {
          uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar10) {
            uVar10 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar10 * 0x140 + uVar11 * 2,
                       &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          uVar4 = uVar4 + 1;
        } while (uVar7 + 1 != uVar4);
      }
      else {
        do {
          uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar10) {
            uVar10 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar10 * 0x140 + uVar11 * 2,
                       &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          bVar1 = (int)uVar7 < (int)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      while (uVar4 = uVar7, uVar3 = uVar3 - 1, (int)uVar5 < (int)uVar3) {
        uVar9 = FUN_71ba1b94(uVar3 * 0x32 + -0xf87);
        uVar9 = FUN_71ba240c(uVar9,*param_1);
        uVar9 = FUN_71ba21e8(uVar9,uVar2);
        uVar9 = FUN_71ba0b38(uVar9,*puVar14);
        uVar9 = FUN_71ba13e0(uVar9,0x42480000);
        FUN_71ba0b38(uVar9,0x42a00000);
        imp_floorf();
        uVar7 = FUN_71ba17bc();
        uVar11 = uVar3 & ~((int)uVar3 >> 0x1f);
        if (0x9e < uVar11) {
          uVar11 = 0x9f;
        }
        if ((int)uVar4 < (int)uVar7) {
          do {
            uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
            if (0x9e < uVar10) {
              uVar10 = 0x9f;
            }
            FUN_713e543c(&DAT_70b88b90 + uVar10 * 0x140 + uVar11 * 2,
                         &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                         &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                         *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
            uVar4 = uVar4 + 1;
          } while (uVar7 + 1 != uVar4);
        }
        else {
          do {
            uVar10 = uVar4 & ~((int)uVar4 >> 0x1f);
            if (0x9e < uVar10) {
              uVar10 = 0x9f;
            }
            FUN_713e543c(&DAT_70b88b90 + uVar10 * 0x140 + uVar11 * 2,
                         &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                         &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                         *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
            bVar1 = (int)uVar7 < (int)uVar4;
            uVar4 = uVar4 - 1;
          } while (bVar1);
        }
      }
      uVar3 = uVar5 & ~((int)uVar5 >> 0x1f);
      if (0x9e < uVar3) {
        uVar3 = 0x9f;
      }
      if ((int)uVar4 < (int)uVar6) {
        do {
          uVar7 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar7) {
            uVar7 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar7 * 0x140 + uVar3 * 2,
                       &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar5 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          uVar4 = uVar4 + 1;
        } while (uVar6 + 1 != uVar4);
      }
      else {
        do {
          uVar7 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar7) {
            uVar7 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar7 * 0x140 + uVar3 * 2,
                       &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar5 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          bVar1 = (int)uVar6 < (int)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
    }
    else {
      uVar7 = uVar3 + 1;
      uVar9 = FUN_71ba1b94(uVar7 * 0x32 + -0xf87);
      uVar9 = FUN_71ba240c(uVar9,uVar13);
      uVar9 = FUN_71ba21e8(uVar9,uVar2);
      uVar9 = FUN_71ba0b38(uVar9,uVar15);
      uVar9 = FUN_71ba13e0(uVar9,0x42480000);
      FUN_71ba0b38(uVar9,0x42a00000);
      imp_floorf();
      uVar10 = FUN_71ba17bc();
      uVar11 = uVar3 & ~uVar11;
      if (0x9e < uVar11) {
        uVar11 = 0x9f;
      }
      if ((int)uVar4 < (int)uVar10) {
        do {
          uVar12 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar12) {
            uVar12 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar12 * 0x140 + uVar11 * 2,
                       &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          uVar4 = uVar4 + 1;
        } while (uVar10 + 1 != uVar4);
      }
      else {
        do {
          uVar12 = uVar4 & ~((int)uVar4 >> 0x1f);
          if (0x9e < uVar12) {
            uVar12 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar12 * 0x140 + uVar11 * 2,
                       &DAT_70c1eb90 + ((int)uVar4 % 0x10) * 0x30 + ((int)uVar3 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          bVar1 = (int)uVar10 < (int)uVar4;
          uVar4 = uVar4 - 1;
        } while (bVar1);
      }
      if ((int)uVar7 < (int)uVar5) {
        do {
          uVar11 = uVar7 + 1;
          uVar9 = FUN_71ba1b94(uVar11 * 0x32 + -0xf87);
          uVar9 = FUN_71ba240c(uVar9,*param_1);
          uVar9 = FUN_71ba21e8(uVar9,uVar2);
          uVar9 = FUN_71ba0b38(uVar9,*puVar14);
          uVar9 = FUN_71ba13e0(uVar9,0x42480000);
          FUN_71ba0b38(uVar9,0x42a00000);
          imp_floorf();
          uVar3 = FUN_71ba17bc();
          uVar4 = uVar7 & ~((int)uVar7 >> 0x1f);
          if (0x9e < uVar4) {
            uVar4 = 0x9f;
          }
          if ((int)uVar10 < (int)uVar3) {
            do {
              uVar12 = uVar10 & ~((int)uVar10 >> 0x1f);
              if (0x9e < uVar12) {
                uVar12 = 0x9f;
              }
              FUN_713e543c(&DAT_70b88b90 + uVar12 * 0x140 + uVar4 * 2,
                           &DAT_70c1eb90 + ((int)uVar10 % 0x10) * 0x30 + ((int)uVar7 % 0x10) * 3,
                           &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                           *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
              uVar10 = uVar10 + 1;
            } while (uVar3 + 1 != uVar10);
          }
          else {
            do {
              uVar12 = uVar10 & ~((int)uVar10 >> 0x1f);
              if (0x9e < uVar12) {
                uVar12 = 0x9f;
              }
              FUN_713e543c(&DAT_70b88b90 + uVar12 * 0x140 + uVar4 * 2,
                           &DAT_70c1eb90 + ((int)uVar10 % 0x10) * 0x30 + ((int)uVar7 % 0x10) * 3,
                           &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                           *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
              bVar1 = (int)uVar3 < (int)uVar10;
              uVar10 = uVar10 - 1;
            } while (bVar1);
          }
          uVar7 = uVar11;
          uVar10 = uVar3;
        } while (uVar11 != uVar5);
      }
      uVar3 = uVar5 & ~((int)uVar5 >> 0x1f);
      if (0x9e < uVar3) {
        uVar3 = 0x9f;
      }
      if ((int)uVar10 < (int)uVar6) {
        do {
          uVar4 = uVar10 & ~((int)uVar10 >> 0x1f);
          if (0x9e < uVar4) {
            uVar4 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar4 * 0x140 + uVar3 * 2,
                       &DAT_70c1eb90 + ((int)uVar10 % 0x10) * 0x30 + ((int)uVar5 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          uVar10 = uVar10 + 1;
        } while (uVar6 + 1 != uVar10);
      }
      else {
        do {
          uVar4 = uVar10 & ~((int)uVar10 >> 0x1f);
          if (0x9e < uVar4) {
            uVar4 = 0x9f;
          }
          FUN_713e543c(&DAT_70b88b90 + uVar4 * 0x140 + uVar3 * 2,
                       &DAT_70c1eb90 + ((int)uVar10 % 0x10) * 0x30 + ((int)uVar5 % 0x10) * 3,
                       &uStack_80,uStack_60,puStack_5c,puStack_58,*puStack_54,*puStack_50,
                       *puStack_4c,*puStack_48,*puStack_44,*puStack_40,*puStack_3c,*puStack_38);
          bVar1 = (int)uVar6 < (int)uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar1);
      }
    }
  }
  iVar8 = FUN_71ba2d10(uStack_30,0x3f800000);
  return iVar8 != 0;
}


// =========================================================================
// Function: FUN_713ea438
// Entry: 0x713ea438 | Size: 400 bytes
// =========================================================================

void FUN_713ea438(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38e3c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e3c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd634,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd624);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_7007b3d4;
      uVar6 = DAT_7007b3d0;
      uVar5 = DAT_7007b3cc;
      uVar4 = DAT_7007b3c8;
      uVar3 = DAT_7007b3c4;
      *puVar11 = DAT_7007b3c0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007b3ec;
      uVar6 = DAT_7007b3e8;
      uVar5 = DAT_7007b3e4;
      uVar4 = DAT_7007b3e0;
      uVar3 = DAT_7007b3dc;
      puVar11[6] = DAT_7007b3d8;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713ebb0c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd634);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd624);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x29d9d305 >> iVar15) |
                (byte)(-0x46ecf893 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xb913076d >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2e < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x30) = 0;
    }
    DAT_70c38e38 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e3c);
  }
                    /* WARNING: Could not recover jumptable at 0x713ea46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38e38)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713ea860
// Entry: 0x713ea860 | Size: 52 bytes
// =========================================================================

undefined * FUN_713ea860(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  param_2 = param_2 & ~((int)param_2 >> 0x1f);
  if (0x9e < param_1) {
    param_1 = 0x9f;
  }
  uVar1 = 0x9f;
  if (param_2 < 0x9f) {
    uVar1 = param_2;
  }
  return &DAT_70bbab90 + param_1 * 8 + uVar1 * 0x500;
}


// =========================================================================
// Function: FUN_713ea8cc
// Entry: 0x713ea8cc | Size: 52 bytes
// =========================================================================

undefined * FUN_713ea8cc(uint param_1,uint param_2)

{
  uint uVar1;
  
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  param_2 = param_2 & ~((int)param_2 >> 0x1f);
  if (0x9e < param_1) {
    param_1 = 0x9f;
  }
  uVar1 = 0x9f;
  if (param_2 < 0x9f) {
    uVar1 = param_2;
  }
  return &DAT_70becb90 + param_1 * 8 + uVar1 * 0x500;
}


// =========================================================================
// Function: FUN_713ea938
// Entry: 0x713ea938 | Size: 436 bytes
// =========================================================================

void FUN_713ea938(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70c38e44 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38e44);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd654,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd644);
        *(undefined1 *)(iVar3 + 0xa4) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007b3f0,0xa4);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713ebb5c,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd654);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd644);
      if (*(char *)(iVar3 + 0xa4) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0x1bfb8bc1 >> iVar8) |
                   (byte)(0x9e31f7f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0x9e31f7f >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (0xa2 < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0xa4) = 0;
      }
      DAT_70c38e40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70c38e44);
    }
  }
  (*DAT_70c38e40)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_713eada0
// Entry: 0x713eada0 | Size: 800 bytes
// =========================================================================

void FUN_713eada0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,
                 int param_10,int param_11)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*DAT_70b88b84 == -1) {
    FUN_713e64a8();
    *DAT_70b88b84 = 1;
  }
  else {
    *DAT_70b88b84 = *DAT_70b88b84 + 1;
  }
  *param_4 = 0;
  FUN_7136e6f0(&uStack_2c,param_1);
  uVar1 = FUN_71ba240c(uStack_2c,param_2);
  uVar1 = FUN_71ba13e0(uVar1,0x42480000);
  FUN_71ba0b38(uVar1,0x42a00000);
  imp_floorf();
  uVar2 = FUN_71ba17bc();
  uVar1 = FUN_71ba240c(uStack_28,param_2);
  uVar1 = FUN_71ba13e0(uVar1,0x42480000);
  FUN_71ba0b38(uVar1,0x42a00000);
  imp_floorf();
  uStack_3c = FUN_71ba17bc();
  uVar1 = FUN_71ba0b38(uStack_2c,param_2);
  uVar1 = FUN_71ba13e0(uVar1,0x42480000);
  FUN_71ba0b38(uVar1,0x42a00000);
  imp_floorf();
  iVar3 = FUN_71ba17bc();
  uVar1 = FUN_71ba0b38(uStack_28,param_2);
  uVar1 = FUN_71ba13e0(uVar1,0x42480000);
  FUN_71ba0b38(uVar1,0x42a00000);
  imp_floorf();
  uVar4 = FUN_71ba17bc();
  if ((int)uStack_3c <= (int)uVar4) {
    do {
      if ((int)uVar2 <= iVar3) {
        uVar7 = uStack_3c & ~((int)uStack_3c >> 0x1f);
        if (0x9e < uVar7) {
          uVar7 = 0x9f;
        }
        uVar6 = uVar2;
        do {
          uVar5 = uVar6 & ~((int)uVar6 >> 0x1f);
          if (0x9e < uVar5) {
            uVar5 = 0x9f;
          }
          if (param_7 != 0) {
            FUN_713ea938(&DAT_70b88b90 + uVar7 * 0x140 + uVar5 * 2,param_1,param_2,param_3,param_4,
                         param_5,param_6);
          }
          puVar8 = &DAT_70c1eb90 + ((int)uStack_3c % 0x10) * 0x30 + ((int)uVar6 % 0x10) * 3;
          if (param_8 != 0) {
            FUN_713ea938(puVar8,param_1,param_2,param_3,param_4,param_5,param_6);
          }
          if (param_9 != 0) {
            FUN_713ea938(puVar8 + 1,param_1,param_2,param_3,param_4,param_5,param_6);
          }
          if (param_10 != 0) {
            FUN_713ea938(puVar8 + 2,param_1,param_2,param_3,param_4,param_5,param_6);
          }
          if (param_11 != 0) {
            FUN_713ea938(&DAT_70b88b90 + uVar7 * 0x140 + uVar5 * 2 + 1,param_1,param_2,param_3,
                         param_4,param_5,param_6);
          }
          uVar6 = uVar6 + 1;
        } while (iVar3 + 1U != uVar6);
      }
      bVar9 = uStack_3c != uVar4;
      uStack_3c = uStack_3c + 1;
    } while (bVar9);
  }
  return;
}


// =========================================================================
// Function: FUN_713eb4b8
// Entry: 0x713eb4b8 | Size: 220 bytes
// =========================================================================

void FUN_713eb4b8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  iVar2 = *(int *)(DAT_70b46c18 + 0x14) + 0x30;
  if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
    iVar2 = DAT_70b46c18 + 4;
  }
  iVar2 = FUN_71ba2d70(*(undefined4 *)(iVar2 + 8),0x44610000);
  if (iVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
    if (param_1 != 0 || DAT_70c38e0c != '\0') {
      imp___aeabi_memcpy8(&DAT_70b88b90,&DAT_70bbab90,0x32000);
      puVar1 = &DAT_70c21090;
      goto LAB_713eb584;
    }
  }
  else {
    uVar3 = 1;
    if ((param_1 != 0) || (DAT_70c38e0c == '\0')) {
      imp___aeabi_memcpy8(&DAT_70b88b90,&DAT_70becb90,0x32000);
      puVar1 = &DAT_70c22990;
      uVar4 = uVar3;
LAB_713eb584:
      imp___aeabi_memcpy8(&DAT_70c1f790,puVar1,0x1900);
      DAT_70c38e0c = uVar4;
      return;
    }
  }
  DAT_70c38e0c = uVar3;
  return;
}


// =========================================================================
// Function: FUN_713ebcc4
// Entry: 0x713ebcc4 | Size: 368 bytes
// =========================================================================

void FUN_713ebcc4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  bool bVar18;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38eb0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38eb0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd6a4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd694);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007b4cc;
      uVar6 = DAT_7007b4c8;
      uVar5 = DAT_7007b4c4;
      uVar4 = DAT_7007b4c0;
      uVar3 = DAT_7007b4bc;
      *puVar11 = DAT_7007b4b8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar8 = DAT_7007b4d2;
      *(undefined2 *)(puVar11 + 6) = DAT_7007b4d0;
      *(undefined1 *)((int)puVar11 + 0x1a) = uVar8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eee5c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd6a4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd694);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar17 = (byte)(0x19cfe32d >> iVar15) |
                 (byte)(-0x266c1045 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar17 = (byte)(0xd993efbb >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar17;
        bVar18 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70c38eac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38eb0);
  }
                    /* WARNING: Could not recover jumptable at 0x713ebcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38eac)();
  return;
}


// =========================================================================
// Function: FUN_713ec4e0
// Entry: 0x713ec4e0 | Size: 1112 bytes
// =========================================================================

void FUN_713ec4e0(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar7 = 0;
  if (*(char *)(param_2 + 5) != '\0') {
    uVar7 = param_2[4];
    param_3 = *param_1;
  }
  if (*(char *)(param_2 + 5) != '\0' && (param_3 & uVar7) != 0) {
    puVar8 = (undefined4 *)(DAT_70c38eb4 + (uint)*(byte *)(param_2 + 2) * 8);
    uVar11 = *puVar8;
    uVar1 = FUN_71ba21e8(puVar8[1],0x3f000000);
    puVar2 = param_2 + 1;
    uVar13 = *puVar2;
    uVar3 = FUN_71ba0b38(uVar13,uVar1);
    uStack_30 = uVar3;
    uVar11 = FUN_71ba21e8(uVar11,0x3f000000);
    uVar10 = *param_2;
    uVar4 = FUN_71ba240c(uVar10,uVar11);
    uStack_34 = uVar4;
    uVar1 = FUN_71ba240c(uVar13,uVar1);
    uVar11 = FUN_71ba0b38(uVar10,uVar11);
    puVar8 = DAT_70ffc980;
    uStack_2c = uVar11;
    uStack_28 = uVar1;
    iVar5 = FUN_713f4fdc(*DAT_70ffc980);
    if (iVar5 == 0) {
      iVar6 = FUN_713f5034(*puVar8);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = param_2[6];
      }
      if (iVar6 != 0 && iVar5 != 0) {
        FUN_714b5e7c(*puVar8,&uStack_38,&uStack_3c,auStack_40);
        uVar1 = FUN_71ba1b94(uStack_38);
        uVar3 = FUN_71ba1b94(uStack_3c);
        FUN_713eec1c(uVar3,param_2,uVar1,uVar3);
        piVar12 = (int *)param_2[7];
        param_2[6] = 0;
        param_2[7] = 0;
        if (piVar12 != (int *)0x0) {
          piVar9 = piVar12 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar9;
            bVar16 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar16);
          *piVar9 = iVar5 + -1;
          DataMemoryBarrier(0xb);
          if (iVar5 == 0) {
            (**(code **)(*piVar12 + 8))(piVar12);
            thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar12);
          }
        }
      }
    }
    else {
      FUN_714b5e7c(*puVar8,&uStack_38,&uStack_3c,auStack_40);
      uVar10 = FUN_71ba1b94(uStack_38);
      uVar13 = FUN_71ba1b94(uStack_3c);
      iVar5 = FUN_713f5ec0(uVar10,uVar13,uVar4,uVar3,uVar11,uVar1);
      bVar16 = iVar5 == 0;
      if (bVar16) {
        iVar5 = param_2[6];
      }
      if (!bVar16 || iVar5 != 0) {
        FUN_713ee48c(param_1,param_2,uVar10,uVar13);
      }
    }
    puVar8 = (undefined4 *)(DAT_70c38eb4 + (uint)*(byte *)(param_2 + 2) * 8);
    uVar13 = *puVar8;
    uVar1 = FUN_71ba21e8(uVar13,0x3f000000);
    uVar14 = *param_2;
    uVar3 = FUN_71ba0b38(uVar14,uVar1);
    uVar15 = puVar8[1];
    uStack_2c = uVar3;
    uVar11 = FUN_71ba21e8(uVar15,0x3f000000);
    uVar4 = *puVar2;
    uVar10 = FUN_71ba0b38(uVar4,uVar11);
    uStack_30 = uVar10;
    uVar11 = FUN_71ba240c(uVar4,uVar11);
    uStack_28 = uVar11;
    uVar4 = FUN_71ba240c(uVar14,uVar1);
    uVar1 = DAT_700bd670;
    uStack_34 = uVar4;
    iVar5 = FUN_71ba2d10(uVar11,DAT_700bd670);
    if (iVar5 != 0) {
      uStack_28 = uVar1;
      uVar10 = FUN_71ba0b38(uVar1,uVar15);
      uVar11 = uVar1;
      uStack_30 = uVar10;
    }
    uVar1 = DAT_700bd668;
    iVar5 = FUN_71ba2d70(uVar10,DAT_700bd668);
    if (iVar5 != 0) {
      uStack_30 = uVar1;
      uVar11 = FUN_71ba240c(uVar1,uVar15);
      uVar10 = uVar1;
      uStack_28 = uVar11;
    }
    uVar1 = DAT_700bd664;
    iVar5 = FUN_71ba2d10(uVar4,DAT_700bd664);
    if (iVar5 != 0) {
      uStack_34 = uVar1;
      uVar3 = FUN_71ba0b38(uVar1,uVar13);
      uVar4 = uVar1;
      uStack_2c = uVar3;
    }
    uVar1 = DAT_700bd66c;
    iVar5 = FUN_71ba2d70(uVar3,DAT_700bd66c);
    if (iVar5 != 0) {
      uStack_2c = uVar1;
      uVar4 = FUN_71ba240c(uVar1,uVar13);
      uVar3 = uVar1;
      uStack_34 = uVar4;
    }
    uVar1 = FUN_71ba240c(uVar10,uVar11);
    uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
    uVar1 = FUN_71ba0b38(uVar11,uVar1);
    *puVar2 = uVar1;
    uVar1 = FUN_71ba240c(uVar3,uVar4);
    uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
    uVar1 = FUN_71ba0b38(uVar4,uVar1);
    *param_2 = uVar1;
    if (param_2[3] != 0) {
      FUN_71358efc(&uStack_38,0xff,0xff,0xff,0xff);
      FUN_7135ab38(param_2 + 3,&uStack_34,&uStack_38);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713ee48c
// Entry: 0x713ee48c | Size: 920 bytes
// =========================================================================

void FUN_713ee48c(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  puVar17 = param_2 + 1;
  puVar16 = (undefined4 *)(DAT_70c38eb4 + (uint)*(byte *)(param_2 + 2) * 8);
  puVar2 = puVar16 + 1;
  if (param_2[6] == 0) {
    uVar3 = *param_2;
    uVar5 = *puVar17;
    uVar6 = *puVar16;
    uVar4 = *puVar2;
    puVar15 = (undefined4 *)thunk_MwhHq(0x14);
    puVar15[1] = 0;
    *puVar15 = &PTR_LAB_70b0e140;
    puVar15[2] = 0;
    uVar4 = FUN_71ba21e8(uVar4,0x3f000000);
    uVar4 = FUN_71ba240c(uVar5,uVar4);
    uVar4 = FUN_71ba240c(param_4,uVar4);
    puVar15[4] = uVar4;
    piVar14 = (int *)param_2[7];
    param_2[7] = puVar15;
    uVar4 = FUN_71ba21e8(uVar6,0x3f000000);
    uVar3 = FUN_71ba240c(uVar3,uVar4);
    uVar3 = FUN_71ba240c(param_3,uVar3);
    puVar15[3] = uVar3;
    param_2[6] = puVar15 + 3;
    if (piVar14 != (int *)0x0) {
      piVar12 = piVar14 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar12;
        bVar1 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar1);
      *piVar12 = iVar13 + -1;
      DataMemoryBarrier(0xb);
      if (iVar13 == 0) {
        (**(code **)(*piVar14 + 8))(piVar14);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar14);
      }
    }
  }
  puVar15 = (undefined4 *)param_2[6];
  uVar3 = FUN_71ba240c(param_3,*puVar15);
  uVar4 = FUN_71ba21e8(*puVar16,0x3f000000);
  uVar3 = FUN_71ba0b38(uVar3,uVar4);
  uVar4 = *param_2;
  *param_2 = uVar3;
  uVar5 = FUN_71ba240c(param_4,puVar15[1]);
  uVar6 = FUN_71ba21e8(*puVar2,0x3f000000);
  uVar5 = FUN_71ba0b38(uVar5,uVar6);
  uVar7 = *puVar17;
  *puVar17 = uVar5;
  puVar15 = (undefined4 *)(DAT_70c38eb4 + (uint)*(byte *)(param_2 + 2) * 8);
  uVar6 = FUN_71ba21e8(*puVar15,0x3f000000);
  uVar8 = FUN_71ba240c(uVar3,uVar6);
  uVar8 = FUN_71ba0b38(uVar8,0xc0a00000);
  uVar9 = FUN_71ba21e8(puVar15[1],0x3f000000);
  uVar10 = FUN_71ba240c(uVar5,uVar9);
  uVar10 = FUN_71ba0b38(uVar10,0xc0a00000);
  uVar3 = FUN_71ba0b38(uVar3,uVar6);
  uVar3 = FUN_71ba0b38(uVar3,0x40a00000);
  uVar5 = FUN_71ba0b38(uVar5,uVar9);
  uVar5 = FUN_71ba0b38(uVar5,0x40a00000);
  iVar13 = 0;
  while (((*(char *)((int)param_1 + (0x8d - iVar13)) == '\0' ||
          ((*param_1 & *(uint *)((int)param_1 + (0x88 - iVar13))) == 0)) ||
         ((iVar11 = FUN_713f5ec0(param_3,param_4,*(undefined4 *)((int)param_1 + (0x70 - iVar13)),
                                 *(undefined4 *)((int)param_1 + (0x74 - iVar13)),
                                 *(undefined4 *)((int)param_1 + (0x78 - iVar13)),
                                 *(undefined4 *)((int)param_1 + (0x7c - iVar13))), iVar11 == 0 &&
          (iVar11 = FUN_713f631c(*(undefined4 *)((int)param_1 + (0x70 - iVar13)),
                                 *(undefined4 *)((int)param_1 + (0x74 - iVar13)),
                                 *(undefined4 *)((int)param_1 + (0x78 - iVar13)),
                                 *(undefined4 *)((int)param_1 + (0x7c - iVar13)),uVar8,uVar5,uVar3,
                                 uVar10), iVar11 == 0))))) {
    iVar13 = iVar13 + -0x28;
    if (iVar13 == -0x2f8) {
      puVar15 = (undefined4 *)param_2[6];
      *puVar17 = uVar7;
      *param_2 = uVar4;
      uVar3 = FUN_71ba240c(param_3,*puVar15);
      uVar4 = FUN_71ba21e8(*puVar16,0x3f000000);
      uVar3 = FUN_71ba0b38(uVar3,uVar4);
      *param_2 = uVar3;
      uVar3 = FUN_71ba240c(param_4,puVar15[1]);
      uVar4 = FUN_71ba21e8(*puVar2,0x3f000000);
      uVar7 = FUN_71ba0b38(uVar3,uVar4);
LAB_713ee704:
      *puVar17 = uVar7;
      return;
    }
  }
  *param_2 = uVar4;
  goto LAB_713ee704;
}


// =========================================================================
// Function: FUN_713eec1c
// Entry: 0x713eec1c | Size: 192 bytes
// =========================================================================

void FUN_713eec1c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar6;
  
  iVar2 = DAT_70c38eb4;
  bVar1 = *(byte *)(param_2 + 2);
  puVar7 = (undefined4 *)(DAT_70c38eb4 + (uint)bVar1 * 8);
  uVar3 = FUN_71ba21e8(*puVar7,0xbf000000);
  uVar3 = FUN_71ba0b38(*param_2,uVar3);
  puVar8 = (undefined4 *)param_2[6];
  uVar3 = FUN_71ba0b38(*puVar8,uVar3);
  iVar4 = FUN_71ba2cf0(uVar3,param_3);
  if (iVar4 != 0) {
    uVar3 = FUN_71ba21e8(puVar7[1],0xbf000000);
    uVar3 = FUN_71ba0b38(param_2[1],uVar3);
    uVar3 = FUN_71ba0b38(puVar8[1],uVar3);
    iVar4 = FUN_71ba2cf0(uVar3,param_4);
    if (iVar4 != 0) {
      uVar6 = bVar1 + 1;
      uVar5 = (undefined1)uVar6;
      if ((uint)(DAT_70c38eb8 - iVar2 >> 3) <= (uVar6 & 0xff)) {
        uVar5 = 0;
      }
      *(undefined1 *)(param_2 + 2) = uVar5;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_713eee14
// Entry: 0x713eee14 | Size: 16 bytes
// =========================================================================

int FUN_713eee14(int param_1)

{
  return DAT_70c38eb4 + param_1 * 8;
}


// =========================================================================
// Function: FUN_713eef20
// Entry: 0x713eef20 | Size: 412 bytes
// =========================================================================

int FUN_713eef20(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int *piStack_28;
  
  iVar8 = param_1[1] - *param_1 >> 2;
  uVar12 = iVar8 * -0x45d1745d + 1;
  if (0x5d1745d < uVar12) {
    FUN_713ef33c(param_1);
LAB_713ef0b8:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  piStack_28 = param_1 + 2;
  iVar5 = *piStack_28 - *param_1 >> 2;
  if (uVar12 < (uint)(iVar5 * 0x745d1746)) {
    uVar12 = iVar5 * 0x745d1746;
  }
  if (0x2e8ba2d < (uint)(iVar5 * -0x45d1745d)) {
    uVar12 = 0x5d1745d;
  }
  iStack_38 = 0;
  if (uVar12 != 0) {
    if (0x5d1745d < uVar12) goto LAB_713ef0b8;
    iStack_38 = thunk_MwhHq(uVar12 * 0x2c);
  }
  iStack_2c = uVar12 * 0x2c + iStack_38;
  puStack_34 = (undefined4 *)(iVar8 * 4 + iStack_38);
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  uVar11 = param_2[3];
  uVar13 = param_2[4];
  *puStack_34 = *param_2;
  puStack_34[1] = uVar7;
  puStack_34[2] = uVar9;
  puStack_34[3] = uVar11;
  puStack_34[4] = uVar13;
  *(undefined1 *)(puStack_34 + 5) = *(undefined1 *)(param_2 + 5);
  uVar7 = param_2[6];
  uVar9 = param_2[7];
  uVar11 = param_2[8];
  uVar13 = param_2[9];
  param_2[6] = 0;
  puStack_34[6] = uVar7;
  puStack_34[7] = uVar9;
  puStack_34[8] = uVar11;
  puStack_34[9] = uVar13;
  *(undefined1 *)(puStack_34 + 10) = *(undefined1 *)(param_2 + 10);
  puStack_30 = puStack_34 + 0xb;
  param_2[7] = 0;
  FUN_713ef198(param_1,&iStack_38);
  puVar2 = puStack_34;
  iVar8 = param_1[1];
  while (puVar3 = puStack_30, puStack_30 != puVar2) {
    puVar4 = puStack_30 + -0xb;
    piVar10 = (int *)puStack_30[-4];
    puStack_30 = puVar4;
    if (piVar10 != (int *)0x0) {
      piVar6 = piVar10 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 == 0) {
        (**(code **)(*piVar10 + 8))(piVar10);
        thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar10);
      }
    }
    if (puVar3[-8] != 0) {
      FUN_7143d364();
    }
  }
  if (iStack_38 != 0) {
    thunk_qNQrlu();
  }
  return iVar8;
}


// =========================================================================
// Function: FUN_713ef198
// Entry: 0x713ef198 | Size: 340 bytes
// =========================================================================

void FUN_713ef198(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  puVar13 = (undefined4 *)*param_1;
  puVar14 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)(param_2[1] + ((int)puVar13 - (int)puVar14));
  puVar4 = puVar7;
  puVar9 = puVar13;
  if ((int)puVar13 - (int)puVar14 != 0) {
    do {
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar8 = puVar9[3];
      uVar12 = puVar9[4];
      *puVar4 = *puVar9;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar8;
      puVar4[4] = uVar12;
      *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar9 + 5);
      puVar4[6] = puVar9[6];
      puVar4[7] = puVar9[7];
      puVar9[6] = 0;
      puVar9[7] = 0;
      *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar9 + 10);
      uVar5 = puVar9[8];
      puVar10 = puVar9 + 0xb;
      puVar4[9] = puVar9[9];
      puVar4[8] = uVar5;
      puVar4 = puVar4 + 0xb;
      puVar9 = puVar10;
    } while (puVar10 != puVar14);
    do {
      piVar11 = (int *)puVar13[7];
      if (piVar11 != (int *)0x0) {
        piVar3 = piVar11 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        DataMemoryBarrier(0xb);
        if (iVar2 == 0) {
          (**(code **)(*piVar11 + 8))(piVar11);
          thunk_xwzSFoU_qvDa_PehyVStzHlBOSkJhkBLR_tNCbTfLzAoZMkmnRt(piVar11);
        }
      }
      if (puVar13[3] != 0) {
        FUN_7143d364();
      }
      puVar13 = puVar13 + 0xb;
    } while (puVar13 != puVar14);
  }
  param_2[1] = puVar7;
  uVar5 = *param_1;
  param_1[1] = uVar5;
  *param_1 = param_2[1];
  param_2[1] = uVar5;
  uVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar5;
  uVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar5;
  *param_2 = param_2[1];
  return;
}


// =========================================================================
// Function: FUN_713ef33c
// Entry: 0x713ef33c | Size: 20 bytes
// =========================================================================

void FUN_713ef33c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_713efb10
// Entry: 0x713efb10 | Size: 408 bytes
// =========================================================================

void FUN_713efb10(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38ed4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38ed4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd724,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd714);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_7007b4fc;
      uVar4 = DAT_7007b4f8;
      uVar3 = DAT_7007b4f4;
      *puVar10 = DAT_7007b4f0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007b50c;
      uVar4 = DAT_7007b508;
      uVar3 = DAT_7007b504;
      puVar10[4] = DAT_7007b500;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007b520;
      uVar5 = DAT_7007b51c;
      uVar4 = DAT_7007b518;
      uVar3 = DAT_7007b514;
      puVar10[8] = DAT_7007b510;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eff40,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd724);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd714);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa1d573c5 >> iVar14) |
                (byte)(-0x1038407f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xefc7bf81 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x32 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x34) = 0;
    }
    DAT_70c38ed0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38ed4);
  }
                    /* WARNING: Could not recover jumptable at 0x713efb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ed0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713eff90
// Entry: 0x713eff90 | Size: 388 bytes
// =========================================================================

void FUN_713eff90(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38ee4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38ee4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd784);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd774);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_7007b538;
      uVar5 = DAT_7007b534;
      uVar4 = DAT_7007b530;
      uVar3 = DAT_7007b52c;
      *puVar11 = DAT_7007b528;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007b53e;
      *(undefined2 *)(puVar11 + 5) = DAT_7007b53c;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f2088,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd784);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd774);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x93a3c787 >> iVar15) |
                (byte)(0x47abcda5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x47abcda5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x15 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x17) = 0;
    }
    DAT_70c38ee0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38ee4);
  }
                    /* WARNING: Could not recover jumptable at 0x713effbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ee0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f03ac
// Entry: 0x713f03ac | Size: 388 bytes
// =========================================================================

void FUN_713f03ac(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38eec & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38eec), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7a4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd794);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_7007b550;
      uVar5 = DAT_7007b54c;
      uVar4 = DAT_7007b548;
      uVar3 = DAT_7007b544;
      *puVar11 = DAT_7007b540;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007b556;
      *(undefined2 *)(puVar11 + 5) = DAT_7007b554;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f20c0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7a4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd794);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xf7f5f1d5 >> iVar15) |
                (byte)(-0x6ede64e1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x91219b1f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x15 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x17) = 0;
    }
    DAT_70c38ee8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38eec);
  }
                    /* WARNING: Could not recover jumptable at 0x713f03d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ee8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f07c8
// Entry: 0x713f07c8 | Size: 380 bytes
// =========================================================================

void FUN_713f07c8(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38ef4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38ef4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7c4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7b4);
      *(undefined1 *)((int)puVar10 + 0x15) = 1;
      uVar6 = DAT_7007b568;
      uVar5 = DAT_7007b564;
      uVar4 = DAT_7007b560;
      uVar3 = DAT_7007b55c;
      *puVar10 = DAT_7007b558;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined1 *)(puVar10 + 5) = DAT_7007b56c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713b1a24,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7c4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7b4);
    if (*(char *)(iVar8 + 0x15) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x2549d30d >> iVar14) |
                (byte)(0x65617345 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x65617345 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x13 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x15) = 0;
    }
    DAT_70c38ef0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38ef4);
  }
                    /* WARNING: Could not recover jumptable at 0x713f07f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ef0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f0bdc
// Entry: 0x713f0bdc | Size: 388 bytes
// =========================================================================

void FUN_713f0bdc(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38efc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38efc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7e4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7d4);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_7007b580;
      uVar5 = DAT_7007b57c;
      uVar4 = DAT_7007b578;
      uVar3 = DAT_7007b574;
      *puVar11 = DAT_7007b570;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007b586;
      *(undefined2 *)(puVar11 + 5) = DAT_7007b584;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133a9d4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7e4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7d4);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xa1d573c5 >> iVar15) |
                (byte)(-0x1038407f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xefc7bf81 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x15 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x17) = 0;
    }
    DAT_70c38ef8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38efc);
  }
                    /* WARNING: Could not recover jumptable at 0x713f0c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ef8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f0ff8
// Entry: 0x713f0ff8 | Size: 376 bytes
// =========================================================================

void FUN_713f0ff8(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f04 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f04), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd804);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7f4);
      *(undefined1 *)(puVar9 + 8) = 1;
      uVar5 = DAT_70060d24;
      uVar4 = DAT_70060d20;
      uVar3 = DAT_70060d1c;
      *puVar9 = DAT_70060d18;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70060d34;
      uVar4 = DAT_70060d30;
      uVar3 = DAT_70060d2c;
      puVar9[4] = DAT_70060d28;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f20f8,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd804);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd7f4);
    if (*(char *)(iVar7 + 0x20) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x45a9b135 >> iVar13) |
                (byte)(-0x760ad4c7 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x89f52b39 >> (uVar14 & 0xff));
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
    DAT_70c38f00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f04);
  }
                    /* WARNING: Could not recover jumptable at 0x713f1024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f00)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f1408
// Entry: 0x713f1408 | Size: 356 bytes
// =========================================================================

void FUN_713f1408(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f0c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f0c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd824);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd814);
      *(undefined1 *)((int)puVar9 + 0x16) = 1;
      uVar6 = DAT_7007b598;
      uVar5 = DAT_7007b594;
      uVar4 = DAT_7007b590;
      uVar3 = DAT_7007b58c;
      *puVar9 = DAT_7007b588;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined2 *)(puVar9 + 5) = DAT_7007b59c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eb75c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd824);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd814);
    if (*(char *)(iVar7 + 0x16) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xb4d771d >> iVar13) |
                 (byte)(-0x44defc41 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xbb2103bf >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x14 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x16) = 0;
    }
    DAT_70c38f08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f0c);
  }
                    /* WARNING: Could not recover jumptable at 0x713f1434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f08)();
  return;
}


// =========================================================================
// Function: FUN_713f1804
// Entry: 0x713f1804 | Size: 384 bytes
// =========================================================================

void FUN_713f1804(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f14 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f14), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd844);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd834);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_7007b5a8;
      uVar3 = DAT_7007b5a4;
      *puVar9 = DAT_7007b5a0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007b5b8;
      uVar4 = DAT_7007b5b4;
      uVar3 = DAT_7007b5b0;
      puVar9[3] = DAT_7007b5ac;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007b5bc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f2138,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd844);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd834);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x19cfe32d >> iVar13) |
                (byte)(-0x266c1045 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xd993efbb >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70c38f10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f14);
  }
                    /* WARNING: Could not recover jumptable at 0x713f1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f10)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f1c1c
// Entry: 0x713f1c1c | Size: 356 bytes
// =========================================================================

void FUN_713f1c1c(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f1c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f1c), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd864);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd854);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_7007b5c8;
      uVar3 = DAT_7007b5c4;
      *puVar8 = DAT_7007b5c0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007b5d8;
      uVar4 = DAT_7007b5d4;
      uVar3 = DAT_7007b5d0;
      puVar8[3] = DAT_7007b5cc;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f2178,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd864);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd854);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x1ff3fb37 >> iVar12) |
                 (byte)(-0x14d86497 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xeb279b69 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1a < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
    }
    DAT_70c38f18 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f1c);
  }
                    /* WARNING: Could not recover jumptable at 0x713f1c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f18)();
  return;
}


// =========================================================================
// Function: thunk_FUN_714cc744
// Entry: 0x713f2a30 | Size: 4 bytes
// =========================================================================

void thunk_FUN_714cc744(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_710eb3c0 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eb3c0), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27ac);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c279c);
      *(undefined1 *)((int)puVar9 + 0x16) = 1;
      uVar6 = DAT_70081b70;
      uVar5 = DAT_70081b6c;
      uVar4 = DAT_70081b68;
      uVar3 = DAT_70081b64;
      *puVar9 = DAT_70081b60;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined2 *)(puVar9 + 5) = DAT_70081b74;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce468,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27ac);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c279c);
    if (*(char *)(iVar7 + 0x16) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x6befa775 >> iVar13) |
                 (byte)(0x1fefe977 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x1fefe977 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x14 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x16) = 0;
    }
    DAT_710eb3bc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eb3c0);
  }
                    /* WARNING: Could not recover jumptable at 0x714cc770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eb3bc)();
  return;
}


// =========================================================================
// Function: FUN_713f2a68
// Entry: 0x713f2a68 | Size: 372 bytes
// =========================================================================

void FUN_713f2a68(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f38 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f38), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8a4);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd894);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_7007b608;
      uVar3 = DAT_7007b604;
      *puVar10 = DAT_7007b600;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_7007b618;
      uVar4 = DAT_7007b614;
      uVar3 = DAT_7007b610;
      puVar10[3] = DAT_7007b60c;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007b61e;
      *(undefined2 *)(puVar10 + 7) = DAT_7007b61c;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71345f40,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8a4);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd894);
    if (*(char *)(iVar7 + 0x1f) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0xa1d573c5 >> iVar14) |
                 (byte)(-0x1038407f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0xefc7bf81 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x1d < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1f) = 0;
    }
    DAT_70c38f34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f38);
  }
                    /* WARNING: Could not recover jumptable at 0x713f2a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f34)();
  return;
}


// =========================================================================
// Function: FUN_713f329c
// Entry: 0x713f329c | Size: 356 bytes
// =========================================================================

void FUN_713f329c(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f48 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f48), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8c4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8b4);
      *(undefined1 *)(puVar9 + 9) = 1;
      uVar5 = DAT_7007b62c;
      uVar4 = DAT_7007b628;
      uVar3 = DAT_7007b624;
      *puVar9 = DAT_7007b620;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007b640;
      uVar5 = DAT_7007b63c;
      uVar4 = DAT_7007b638;
      uVar3 = DAT_7007b634;
      puVar9[4] = DAT_7007b630;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f3698,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8c4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8b4);
    if (*(char *)(iVar7 + 0x24) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xa1d573c5 >> iVar13) |
                 (byte)(-0x1038407f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xefc7bf81 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x22 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x24) = 0;
    }
    DAT_70c38f44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f48);
  }
                    /* WARNING: Could not recover jumptable at 0x713f32c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f44)();
  return;
}


// =========================================================================
// Function: FUN_713f36e8
// Entry: 0x713f36e8 | Size: 356 bytes
// =========================================================================

void FUN_713f36e8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f54 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f54), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd904);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8f4);
      *(undefined1 *)(puVar9 + 10) = 1;
      uVar6 = DAT_7007b678;
      uVar5 = DAT_7007b674;
      uVar4 = DAT_7007b670;
      uVar3 = DAT_7007b66c;
      *puVar9 = DAT_7007b668;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_7007b68c;
      uVar5 = DAT_7007b688;
      uVar4 = DAT_7007b684;
      uVar3 = DAT_7007b680;
      puVar9[5] = DAT_7007b67c;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f54a0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd904);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd8f4);
    if (*(char *)(iVar7 + 0x28) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x2549d30d >> iVar13) |
                 (byte)(0x65617345 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x65617345 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x26 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x28) = 0;
    }
    DAT_70c38f50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f54);
  }
                    /* WARNING: Could not recover jumptable at 0x713f3714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f50)();
  return;
}


// =========================================================================
// Function: FUN_713f3ae4
// Entry: 0x713f3ae4 | Size: 356 bytes
// =========================================================================

void FUN_713f3ae4(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f5c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f5c), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd924);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd914);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_7007b698;
      uVar3 = DAT_7007b694;
      *puVar8 = DAT_7007b690;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007b6a8;
      uVar4 = DAT_7007b6a4;
      uVar3 = DAT_7007b6a0;
      puVar8[3] = DAT_7007b69c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d9748,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd924);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd914);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xa1d573c5 >> iVar12) |
                 (byte)(-0x1038407f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xefc7bf81 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1a < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
    }
    DAT_70c38f58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f5c);
  }
                    /* WARNING: Could not recover jumptable at 0x713f3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f58)();
  return;
}


// =========================================================================
// Function: FUN_713f3ee0
// Entry: 0x713f3ee0 | Size: 400 bytes
// =========================================================================

void FUN_713f3ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f64 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f64), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd944,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd934);
      *(undefined1 *)(iVar4 + 0x57) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007b6b0,0x57);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f54f0,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd944);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd934);
    if (*(char *)(iVar4 + 0x57) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xd93d3145 >> iVar9) |
                (byte)(-0x1840f2d9 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xe7bf0d27 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x55 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x57) = 0;
    }
    DAT_70c38f60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f64);
  }
                    /* WARNING: Could not recover jumptable at 0x713f3f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f60)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713f4324
// Entry: 0x713f4324 | Size: 400 bytes
// =========================================================================

void FUN_713f4324(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f6c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f6c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd964,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd954);
      *(undefined1 *)(iVar4 + 0x58) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007b708,0x58);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f5540,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd964);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd954);
    if (*(char *)(iVar4 + 0x58) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xb4d771d >> iVar9) | (byte)(-0x44defc41 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xbb2103bf >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x56 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x58) = 0;
    }
    DAT_70c38f68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f6c);
  }
                    /* WARNING: Could not recover jumptable at 0x713f4358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f68)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713f4768
// Entry: 0x713f4768 | Size: 380 bytes
// =========================================================================

void FUN_713f4768(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f74 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f74), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd984,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd974);
      *(undefined1 *)(iVar4 + 0x48) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007b760,0x48);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f5590,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd984);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd974);
    if (*(char *)(iVar4 + 0x48) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x19cfe32d >> iVar9) |
                (byte)(-0x266c1045 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xd993efbb >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x46 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x48) = 0;
    }
    DAT_70c38f70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f74);
  }
                    /* WARNING: Could not recover jumptable at 0x713f4794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f70)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713f4b98
// Entry: 0x713f4b98 | Size: 400 bytes
// =========================================================================

void FUN_713f4b98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f7c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f7c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9a4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd994);
      *(undefined1 *)(iVar4 + 0x6b) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007b7a8,0x6b);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f55e0,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9a4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd994);
    if (*(char *)(iVar4 + 0x6b) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x1ff3fb37 >> iVar9) |
                (byte)(-0x14d86497 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xeb279b69 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x69 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x6b) = 0;
    }
    DAT_70c38f78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f7c);
  }
                    /* WARNING: Could not recover jumptable at 0x713f4bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f78)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_713f4fdc
// Entry: 0x713f4fdc | Size: 36 bytes
// =========================================================================

bool FUN_713f4fdc(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_714b5f6c(param_1,0);
  return (uVar1 & 0xfffffffe) == 2;
}


// =========================================================================
// Function: FUN_713f5034
// Entry: 0x713f5034 | Size: 36 bytes
// =========================================================================

bool FUN_713f5034(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_714b5f6c(param_1,0);
  return uVar1 < 2;
}


// =========================================================================
// Function: FUN_713f508c
// Entry: 0x713f508c | Size: 380 bytes
// =========================================================================

void FUN_713f508c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f84 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f84), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9c4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9b4);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_7007b828;
      uVar5 = DAT_7007b824;
      uVar4 = DAT_7007b820;
      uVar3 = DAT_7007b81c;
      *puVar11 = DAT_7007b818;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007b840;
      uVar6 = DAT_7007b83c;
      uVar5 = DAT_7007b838;
      uVar4 = DAT_7007b834;
      uVar3 = DAT_7007b830;
      puVar11[5] = DAT_7007b82c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f5630,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9c4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9b4);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x81e15bed >> iVar15) |
                (byte)(0x7fd3adb1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x7fd3adb1 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70c38f80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f84);
  }
                    /* WARNING: Could not recover jumptable at 0x713f50b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f80)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f5aa4
// Entry: 0x713f5aa4 | Size: 388 bytes
// =========================================================================

void FUN_713f5aa4(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38f98 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38f98), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda04);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9f4);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_7007b878;
      uVar5 = DAT_7007b874;
      uVar4 = DAT_7007b870;
      uVar3 = DAT_7007b86c;
      *puVar10 = DAT_7007b868;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007b88c;
      uVar5 = DAT_7007b888;
      uVar4 = DAT_7007b884;
      uVar3 = DAT_7007b880;
      puVar10[5] = DAT_7007b87c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_7007b890;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f6624,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda04);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd9f4);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf7f5f1d5 >> iVar14) |
                (byte)(-0x6ede64e1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x91219b1f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70c38f94 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38f98);
  }
                    /* WARNING: Could not recover jumptable at 0x713f5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38f94)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f5ec0
// Entry: 0x713f5ec0 | Size: 452 bytes
// =========================================================================

void FUN_713f5ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70c38fa0 & 1) == 0) {
    iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38fa0);
    if (iVar7 != 0) {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda24,param_2,param_3,param_4);
      if (*pcVar8 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda14);
        *(undefined1 *)((int)puVar11 + 0x3d) = 1;
        uVar6 = DAT_7007b8a8;
        uVar5 = DAT_7007b8a4;
        uVar4 = DAT_7007b8a0;
        uVar3 = DAT_7007b89c;
        *puVar11 = DAT_7007b898;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        uVar6 = DAT_7007b8bc;
        uVar5 = DAT_7007b8b8;
        uVar4 = DAT_7007b8b4;
        uVar3 = DAT_7007b8b0;
        puVar11[5] = DAT_7007b8ac;
        puVar11[6] = uVar3;
        puVar11[7] = uVar4;
        puVar11[8] = uVar5;
        puVar11[9] = uVar6;
        uVar6 = DAT_7007b8d0;
        uVar5 = DAT_7007b8cc;
        uVar4 = DAT_7007b8c8;
        uVar3 = DAT_7007b8c4;
        puVar11[10] = DAT_7007b8c0;
        puVar11[0xb] = uVar3;
        puVar11[0xc] = uVar4;
        puVar11[0xd] = uVar5;
        puVar11[0xe] = uVar6;
        *(undefined1 *)(puVar11 + 0xf) = DAT_7007b8d4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f6674,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda24);
        *puVar12 = 1;
      }
      iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda14);
      if (*(char *)(iVar7 + 0x3d) != '\0') {
        uVar13 = 0;
        uVar15 = 0;
        do {
          iVar9 = (uVar13 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar14 = (byte)(0xa1d573c5 >> iVar9) |
                   (byte)(-0x1038407f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar14 = (byte)(0xefc7bf81 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar14;
          bVar16 = 0xfffffffe < uVar13;
          bVar1 = uVar15 == 0;
          bVar2 = (0x3b < uVar13) <= uVar15;
          uVar13 = uVar13 + 1;
          uVar15 = uVar15 + bVar16;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar7 + 0x3d) = 0;
      }
      DAT_70c38f9c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70c38fa0);
    }
  }
  (*DAT_70c38f9c)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: FUN_713f631c
// Entry: 0x713f631c | Size: 244 bytes
// =========================================================================

bool FUN_713f631c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = FUN_71ba240c(param_3,param_1);
  uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
  uVar2 = FUN_71ba240c(param_7,param_5);
  uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
  uVar3 = FUN_71ba0b38(uVar1,param_1);
  uVar4 = FUN_71ba0b38(uVar2,param_5);
  uVar5 = FUN_71ba0b38(uVar1,param_4);
  uVar6 = FUN_71ba0b38(uVar2,param_8);
  uVar3 = FUN_71ba240c(uVar4,uVar3);
  uVar4 = FUN_71ba240c(uVar6,uVar5);
  uVar4 = FUN_71ba21e8(uVar4,uVar4);
  uVar3 = FUN_71ba21e8(uVar3,uVar3);
  FUN_71ba0b38(uVar3,uVar4);
  uVar3 = imp_sqrtf();
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  iVar7 = FUN_71ba2d30(uVar3,uVar1);
  return iVar7 != 0;
}


// =========================================================================
// Function: FUN_713f6aec
// Entry: 0x713f6aec | Size: 396 bytes
// =========================================================================

void FUN_713f6aec(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38fb0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38fb0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda44);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda34);
      *(undefined1 *)((int)puVar11 + 0x2f) = 1;
      uVar6 = DAT_7007b8e8;
      uVar5 = DAT_7007b8e4;
      uVar4 = DAT_7007b8e0;
      uVar3 = DAT_7007b8dc;
      *puVar11 = DAT_7007b8d8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007b900;
      uVar6 = DAT_7007b8fc;
      uVar5 = DAT_7007b8f8;
      uVar4 = DAT_7007b8f4;
      uVar3 = DAT_7007b8f0;
      puVar11[5] = DAT_7007b8ec;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007b904;
      *(undefined1 *)((int)puVar11 + 0x2e) = DAT_7007b906;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f6f10,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda44);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda34);
    if (*(char *)(iVar9 + 0x2f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xc77d4573 >> iVar15) |
                (byte)(-0x164a4c4f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xe9b5b3b1 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2d < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2f) = 0;
    }
    DAT_70c38fac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38fb0);
  }
                    /* WARNING: Could not recover jumptable at 0x713f6b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38fac)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f6f60
// Entry: 0x713f6f60 | Size: 424 bytes
// =========================================================================

void FUN_713f6f60(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38fb8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38fb8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda64,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda54);
      *(undefined1 *)((int)puVar10 + 0x3f) = 1;
      uVar6 = DAT_7007b918;
      uVar5 = DAT_7007b914;
      uVar4 = DAT_7007b910;
      uVar3 = DAT_7007b90c;
      *puVar10 = DAT_7007b908;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007b92c;
      uVar5 = DAT_7007b928;
      uVar4 = DAT_7007b924;
      uVar3 = DAT_7007b920;
      puVar10[5] = DAT_7007b91c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007b940;
      uVar5 = DAT_7007b93c;
      uVar4 = DAT_7007b938;
      uVar3 = DAT_7007b934;
      puVar10[10] = DAT_7007b930;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_7007b944;
      *(undefined1 *)((int)puVar10 + 0x3e) = DAT_7007b946;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f8550,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda64);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda54);
    if (*(char *)(iVar8 + 0x3f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc77d4573 >> iVar14) |
                (byte)(-0x164a4c4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe9b5b3b1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3d < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3f) = 0;
    }
    DAT_70c38fb4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38fb8);
  }
                    /* WARNING: Could not recover jumptable at 0x713f6f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38fb4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713f7414
// Entry: 0x713f7414 | Size: 388 bytes
// =========================================================================

void FUN_713f7414(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38fc0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38fc0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda84);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda74);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007b954;
      uVar4 = DAT_7007b950;
      uVar3 = DAT_7007b94c;
      *puVar10 = DAT_7007b948;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007b968;
      uVar5 = DAT_7007b964;
      uVar4 = DAT_7007b960;
      uVar3 = DAT_7007b95c;
      puVar10[4] = DAT_7007b958;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007b96c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f85a0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda84);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda74);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xd7fe737 >> iVar14) |
                (byte)(-0x68e6be27 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x971941d9 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70c38fbc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38fc0);
  }
                    /* WARNING: Could not recover jumptable at 0x713f7440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38fbc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f7830
// Entry: 0x713f7830 | Size: 388 bytes
// =========================================================================

void FUN_713f7830(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38fc8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38fc8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdaa4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda94);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007b97c;
      uVar4 = DAT_7007b978;
      uVar3 = DAT_7007b974;
      *puVar10 = DAT_7007b970;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007b990;
      uVar5 = DAT_7007b98c;
      uVar4 = DAT_7007b988;
      uVar3 = DAT_7007b984;
      puVar10[4] = DAT_7007b980;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007b994;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f85f0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdaa4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bda94);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x6bad4799 >> iVar14) |
                (byte)(-0x388088dd << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xc77f7723 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70c38fc4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38fc8);
  }
                    /* WARNING: Could not recover jumptable at 0x713f785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38fc4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f8bec
// Entry: 0x713f8bec | Size: 384 bytes
// =========================================================================

void FUN_713f8bec(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38fe8 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38fe8), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb24);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb14);
      *(undefined1 *)((int)puVar9 + 0x1d) = 1;
      uVar4 = DAT_7007ba28;
      uVar3 = DAT_7007ba24;
      *puVar9 = DAT_7007ba20;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007ba38;
      uVar4 = DAT_7007ba34;
      uVar3 = DAT_7007ba30;
      puVar9[3] = DAT_7007ba2c;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined1 *)(puVar9 + 7) = DAT_7007ba3c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f9a30,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb24);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb14);
    if (*(char *)(iVar7 + 0x1d) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x8f4359cd >> iVar13) |
                (byte)(-0x7ef6869f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x81097961 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1b < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1d) = 0;
    }
    DAT_70c38fe4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38fe8);
  }
                    /* WARNING: Could not recover jumptable at 0x713f8c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38fe4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f90d8
// Entry: 0x713f90d8 | Size: 388 bytes
// =========================================================================

void FUN_713f90d8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38ff0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38ff0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb44);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb34);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007ba54;
      uVar6 = DAT_7007ba50;
      uVar5 = DAT_7007ba4c;
      uVar4 = DAT_7007ba48;
      uVar3 = DAT_7007ba44;
      *puVar11 = DAT_7007ba40;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_7007ba58;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7007ba5a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f9a70,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb44);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb34);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xbdc90b71 >> iVar15) |
                (byte)(-0x7c8c52b3 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x8373ad4d >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70c38fec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38ff0);
  }
                    /* WARNING: Could not recover jumptable at 0x713f9104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38fec)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713f94f4
// Entry: 0x713f94f4 | Size: 408 bytes
// =========================================================================

void FUN_713f94f4(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c38ff8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c38ff8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb64,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb54);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_7007ba70;
      uVar5 = DAT_7007ba6c;
      uVar4 = DAT_7007ba68;
      uVar3 = DAT_7007ba64;
      *puVar11 = DAT_7007ba60;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007ba88;
      uVar6 = DAT_7007ba84;
      uVar5 = DAT_7007ba80;
      uVar4 = DAT_7007ba7c;
      uVar3 = DAT_7007ba78;
      puVar11[5] = DAT_7007ba74;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_7007ba8c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f9aac,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb64);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb54);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x7d7f3d23 >> iVar15) |
                (byte)(-0x7270fe83 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x8d8f017d >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2b < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2d) = 0;
    }
    DAT_70c38ff4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c38ff8);
  }
                    /* WARNING: Could not recover jumptable at 0x713f9528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ff4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713f9924
// Entry: 0x713f9924 | Size: 72 bytes
// =========================================================================

void FUN_713f9924(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_7136beec(param_2);
  *(short *)(param_1 + 0x20) = sVar1;
  if (sVar1 == -1) {
    uVar2 = FUN_7136c310(param_2,param_3,0);
    *(undefined2 *)(param_1 + 0x20) = uVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_713f9afc
// Entry: 0x713f9afc | Size: 52 bytes
// =========================================================================

undefined4 FUN_713f9afc(int param_1,undefined4 param_2)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = param_2;
  FUN_7141e5f0(*(undefined4 *)(param_1 + 4),FUN_713f9b84,&uStack_10);
  return uStack_c;
}


// =========================================================================
// Function: FUN_713f9b84
// Entry: 0x713f9b84 | Size: 380 bytes
// =========================================================================

void FUN_713f9b84(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39060 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39060), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd24,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd14);
      *(undefined1 *)(iVar4 + 0x47) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007bcd8,0x47);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fde70,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd24);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd14);
    if (*(char *)(iVar4 + 0x47) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x6b4b3b87 >> iVar9) |
                (byte)(-0x34f4b025 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xcb0b4fdb >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x45 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x47) = 0;
    }
    DAT_70c3905c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39060);
  }
                    /* WARNING: Could not recover jumptable at 0x713f9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c3905c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713f9fd4
// Entry: 0x713f9fd4 | Size: 384 bytes
// =========================================================================

void FUN_713f9fd4(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39000 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39000), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb84);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb74);
      *(undefined1 *)((int)puVar9 + 0x22) = 1;
      uVar5 = DAT_7007ba9c;
      uVar4 = DAT_7007ba98;
      uVar3 = DAT_7007ba94;
      *puVar9 = DAT_7007ba90;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007baac;
      uVar4 = DAT_7007baa8;
      uVar3 = DAT_7007baa4;
      puVar9[4] = DAT_7007baa0;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined2 *)(puVar9 + 8) = DAT_7007bab0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fda84,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb84);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb74);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x9b4dbd9f >> iVar13) |
                (byte)(0x194db9cd << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x194db9cd >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x20 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x22) = 0;
    }
    DAT_70c38ffc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39000);
  }
                    /* WARNING: Could not recover jumptable at 0x713fa000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c38ffc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fa3ec
// Entry: 0x713fa3ec | Size: 380 bytes
// =========================================================================

void FUN_713fa3ec(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39008 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39008), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdba4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb94);
      *(undefined1 *)((int)puVar11 + 0x1a) = 1;
      uVar7 = DAT_7007bacc;
      uVar6 = DAT_7007bac8;
      uVar5 = DAT_7007bac4;
      uVar4 = DAT_7007bac0;
      uVar3 = DAT_7007babc;
      *puVar11 = DAT_7007bab8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_7007bad0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdad4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdba4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdb94);
    if (*(char *)(iVar9 + 0x1a) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x93b4331 >> iVar15) |
                (byte)(-0x3e962c5f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xc169d3a1 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x18 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1a) = 0;
    }
    DAT_70c39004 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39008);
  }
                    /* WARNING: Could not recover jumptable at 0x713fa418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c39004)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fa800
// Entry: 0x713fa800 | Size: 384 bytes
// =========================================================================

void FUN_713fa800(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39010 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39010), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbc4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbb4);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_7007bae0;
      uVar3 = DAT_7007badc;
      *puVar9 = DAT_7007bad8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007baf0;
      uVar4 = DAT_7007baec;
      uVar3 = DAT_7007bae8;
      puVar9[3] = DAT_7007bae4;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007baf4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdb10,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbc4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbb4);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x4bd1a9a9 >> iVar13) |
                (byte)(0x6f2bc975 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x6f2bc975 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70c3900c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39010);
  }
                    /* WARNING: Could not recover jumptable at 0x713fa82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c3900c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fac18
// Entry: 0x713fac18 | Size: 380 bytes
// =========================================================================

void FUN_713fac18(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39018 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39018), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbe4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbd4);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007bb04;
      uVar4 = DAT_7007bb00;
      uVar3 = DAT_7007bafc;
      *puVar10 = DAT_7007baf8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007bb18;
      uVar5 = DAT_7007bb14;
      uVar4 = DAT_7007bb10;
      uVar3 = DAT_7007bb0c;
      puVar10[4] = DAT_7007bb08;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdb50,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbe4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbd4);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1fef9f7d >> iVar14) |
                (byte)(-0x32ea76f1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xcd15890f >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70c39014 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39018);
  }
                    /* WARNING: Could not recover jumptable at 0x713fac44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c39014)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fb02c
// Entry: 0x713fb02c | Size: 380 bytes
// =========================================================================

void FUN_713fb02c(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39020 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39020), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc04);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbf4);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007bb2c;
      uVar4 = DAT_7007bb28;
      uVar3 = DAT_7007bb24;
      *puVar10 = DAT_7007bb20;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007bb40;
      uVar5 = DAT_7007bb3c;
      uVar4 = DAT_7007bb38;
      uVar3 = DAT_7007bb34;
      puVar10[4] = DAT_7007bb30;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdba0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc04);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdbf4);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x7ba3590f >> iVar14) |
                (byte)(0x6f55cd95 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x6f55cd95 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70c3901c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39020);
  }
                    /* WARNING: Could not recover jumptable at 0x713fb058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c3901c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fb440
// Entry: 0x713fb440 | Size: 868 bytes
// =========================================================================

undefined4 FUN_713fb440(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  int unaff_r5;
  uint uVar14;
  int iVar15;
  bool bVar16;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x29) & 1) != 0) && (*(int *)(param_1 + 0x38) == -1)) &&
     (iVar6 = FUN_714172f4(), iVar6 == 0)) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
  }
  iVar6 = 0;
  do {
    if (*(int *)(DAT_70c39074 + iVar6 * 4) == param_1) goto LAB_713fb4b4;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 20000);
  iVar6 = -1;
LAB_713fb4b4:
  iVar6 = FUN_71335c2c(iVar6);
  if (iVar6 != 0) {
    unaff_r5 = *(int *)(param_1 + 4);
  }
  if (iVar6 != 0 && iVar6 != unaff_r5) {
    *(int *)(param_1 + 4) = iVar6;
    DataMemoryBarrier(0xb);
    if (((DAT_70c39028 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39028), iVar6 != 0))
    {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc24);
      if (*pcVar8 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc14);
        *(undefined1 *)(puVar10 + 9) = 1;
        uVar4 = DAT_7007bb54;
        uVar3 = DAT_7007bb50;
        uVar7 = DAT_7007bb4c;
        *puVar10 = DAT_7007bb48;
        puVar10[1] = uVar7;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        uVar5 = DAT_7007bb68;
        uVar4 = DAT_7007bb64;
        uVar3 = DAT_7007bb60;
        uVar7 = DAT_7007bb5c;
        puVar10[4] = DAT_7007bb58;
        puVar10[5] = uVar7;
        puVar10[6] = uVar3;
        puVar10[7] = uVar4;
        puVar10[8] = uVar5;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdbf0,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc24);
        *puVar11 = 1;
      }
      iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc14);
      if (*(char *)(iVar6 + 0x24) != '\0') {
        uVar9 = 0;
        uVar12 = 0;
        do {
          iVar15 = (uVar9 & 7) * 8;
          uVar14 = iVar15 - 0x20;
          bVar13 = (byte)(0x9f490ddb >> iVar15) |
                   (byte)(-0x20504abf << ((uVar9 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar14) {
            bVar13 = (byte)(0xdfafb541 >> (uVar14 & 0xff));
          }
          *(byte *)(iVar6 + uVar9) = *(byte *)(iVar6 + uVar9) ^ bVar13;
          bVar16 = 0xfffffffe < uVar9;
          bVar1 = uVar12 == 0;
          bVar2 = (0x22 < uVar9) <= uVar12;
          uVar9 = uVar9 + 1;
          uVar12 = uVar12 + bVar16;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar6 + 0x24) = 0;
      }
      DAT_70c39024 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70c39028);
    }
    uVar7 = (*DAT_70c39024)(param_1);
    *(int *)(param_1 + 4) = unaff_r5;
    return uVar7;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_70c39070 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39070), iVar6 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc44);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc34);
      *(undefined1 *)((int)puVar10 + 0x22) = 1;
      uVar4 = DAT_7007bb7c;
      uVar3 = DAT_7007bb78;
      uVar7 = DAT_7007bb74;
      *puVar10 = DAT_7007bb70;
      puVar10[1] = uVar7;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      uVar4 = DAT_7007bb8c;
      uVar3 = DAT_7007bb88;
      uVar7 = DAT_7007bb84;
      puVar10[4] = DAT_7007bb80;
      puVar10[5] = uVar7;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      *(undefined2 *)(puVar10 + 8) = DAT_7007bb90;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdc40,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc44);
      *puVar11 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc34);
    if (*(char *)(iVar6 + 0x22) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        bVar13 = (byte)(0x798dc5a3 >> iVar15) |
                 (byte)(-0x6acaa203 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar15 - 0x20;
        if (-1 < (int)uVar14) {
          bVar13 = (byte)(0x95355dfd >> (uVar14 & 0xff));
        }
        *(byte *)(iVar6 + uVar12) = *(byte *)(iVar6 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x20 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x22) = 0;
    }
    DAT_70c3906c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39070);
  }
                    /* WARNING: Could not recover jumptable at 0x713fb4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*DAT_70c3906c)(param_1);
  return uVar7;
}


// =========================================================================
// Function: FUN_713fc57c
// Entry: 0x713fc57c | Size: 388 bytes
// =========================================================================

void FUN_713fc57c(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39040 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39040), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdca4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc94);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_7007bc18;
      uVar5 = DAT_7007bc14;
      uVar4 = DAT_7007bc10;
      uVar3 = DAT_7007bc0c;
      *puVar10 = DAT_7007bc08;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007bc2c;
      uVar5 = DAT_7007bc28;
      uVar4 = DAT_7007bc24;
      uVar3 = DAT_7007bc20;
      puVar10[5] = DAT_7007bc1c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_7007bc30;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdd30,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdca4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdc94);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xbd9327c7 >> iVar14) |
                (byte)(0xf7b7db1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xf7b7db1 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70c3903c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39040);
  }
                    /* WARNING: Could not recover jumptable at 0x713fc5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c3903c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fc998
// Entry: 0x713fc998 | Size: 388 bytes
// =========================================================================

void FUN_713fc998(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39048 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39048), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdcc4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdcb4);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_7007bc44;
      uVar4 = DAT_7007bc40;
      uVar3 = DAT_7007bc3c;
      *puVar10 = DAT_7007bc38;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007bc58;
      uVar5 = DAT_7007bc54;
      uVar4 = DAT_7007bc50;
      uVar3 = DAT_7007bc4c;
      puVar10[4] = DAT_7007bc48;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_7007bc5c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fdd80,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdcc4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdcb4);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xbba92fd7 >> iVar14) |
                (byte)(-0x7628aa8f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x89d75571 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70c39044 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39048);
  }
                    /* WARNING: Could not recover jumptable at 0x713fc9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c39044)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713fd1dc
// Entry: 0x713fd1dc | Size: 380 bytes
// =========================================================================

void FUN_713fd1dc(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70c39058 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70c39058), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd04,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdcf4);
      *(undefined1 *)(iVar4 + 0x46) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007bc90,0x46);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fde20,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd04);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdcf4);
    if (*(char *)(iVar4 + 0x46) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x9df19131 >> iVar9) | (byte)(0x7dbd4949 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x7dbd4949 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x44 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x46) = 0;
    }
    DAT_70c39054 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70c39058);
  }
                    /* WARNING: Could not recover jumptable at 0x713fd208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70c39054)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713fe120
// Entry: 0x713fe120 | Size: 80 bytes
// =========================================================================

int * FUN_713fe120(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_70c39078 * 0x3a8;
  DAT_70c39078 = DAT_70c39078 + 1;
  piVar2 = (int *)(&DAT_70c3907c + iVar1);
  (**(code **)(*piVar2 + 0x1c))(piVar2);
  *(int **)(DAT_70c39074 + param_1 * 4) = piVar2;
  return piVar2;
}


// =========================================================================
// Function: FUN_713fe1e8
// Entry: 0x713fe1e8 | Size: 80 bytes
// =========================================================================

int * FUN_713fe1e8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_70e020fc * 0x5c;
  DAT_70e020fc = DAT_70e020fc + 1;
  piVar2 = (int *)(&DAT_70e02100 + iVar1);
  (**(code **)(*piVar2 + 0x1c))(piVar2);
  *(int **)(DAT_70c39074 + param_1 * 4) = piVar2;
  return piVar2;
}


// =========================================================================
// Function: FUN_713fe2b0
// Entry: 0x713fe2b0 | Size: 76 bytes
// =========================================================================

int * FUN_713fe2b0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(&DAT_70e2efc4 + DAT_70e2efc0 * 0x38);
  DAT_70e2efc0 = DAT_70e2efc0 + 1;
  (**(code **)(*piVar1 + 0x1c))(piVar1);
  *(int **)(DAT_70c39074 + param_1 * 4) = piVar1;
  return piVar1;
}


// =========================================================================
// Function: FUN_713fe374
// Entry: 0x713fe374 | Size: 72 bytes
// =========================================================================

int * FUN_713fe374(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(&DAT_70f406c8 + DAT_70f406c4 * 0x40);
  DAT_70f406c4 = DAT_70f406c4 + 1;
  (**(code **)(*piVar1 + 0x1c))(piVar1);
  *(int **)(DAT_70c39074 + param_1 * 4) = piVar1;
  return piVar1;
}


// =========================================================================
// Function: FUN_713fe434
// Entry: 0x713fe434 | Size: 76 bytes
// =========================================================================

int * FUN_713fe434(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(&DAT_70f438cc + DAT_70f438c8 * 0x3c);
  DAT_70f438c8 = DAT_70f438c8 + 1;
  (**(code **)(*piVar1 + 0x1c))(piVar1);
  *(int **)(DAT_70c39074 + param_1 * 4) = piVar1;
  return piVar1;
}


// =========================================================================
// Function: FUN_713fe4f8
// Entry: 0x713fe4f8 | Size: 424 bytes
// =========================================================================

void FUN_713fe4f8(undefined4 param_1,undefined4 param_2)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70f4ae00 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70f4ae00), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd84,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd74);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_7007bd8c;
      uVar4 = DAT_7007bd88;
      uVar3 = DAT_7007bd84;
      *puVar10 = DAT_7007bd80;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007bda0;
      uVar5 = DAT_7007bd9c;
      uVar4 = DAT_7007bd98;
      uVar3 = DAT_7007bd94;
      puVar10[4] = DAT_7007bd90;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007bdb4;
      uVar5 = DAT_7007bdb0;
      uVar4 = DAT_7007bdac;
      uVar3 = DAT_7007bda8;
      puVar10[9] = DAT_7007bda4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007bdb8;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_7007bdba;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fed94,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd84);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd74);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xdd55518f >> iVar14) |
                (byte)(-0x124264cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xedbd9b35 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x39 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70f4adfc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70f4ae00);
  }
                    /* WARNING: Could not recover jumptable at 0x713fe52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70f4adfc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_713fe938
// Entry: 0x713fe938 | Size: 388 bytes
// =========================================================================

void FUN_713fe938(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70f4ae08 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70f4ae08), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdda4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd94);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_7007bdd0;
      uVar5 = DAT_7007bdcc;
      uVar4 = DAT_7007bdc8;
      uVar3 = DAT_7007bdc4;
      *puVar11 = DAT_7007bdc0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007bde8;
      uVar6 = DAT_7007bde4;
      uVar5 = DAT_7007bde0;
      uVar4 = DAT_7007bddc;
      uVar3 = DAT_7007bdd8;
      puVar11[5] = DAT_7007bdd4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007bdec;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713fede4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdda4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bdd94);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xc59f19cf >> iVar15) |
                (byte)(-0x2450bc7d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xdbaf4383 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2c < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2e) = 0;
    }
    DAT_70f4ae04 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70f4ae08);
  }
                    /* WARNING: Could not recover jumptable at 0x713fe964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70f4ae04)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71400010
// Entry: 0x71400010 | Size: 1040 bytes
// =========================================================================

void FUN_71400010(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = FUN_714172f4(param_2);
  iVar4 = FUN_71320768(0x30);
  uVar5 = FUN_7131fe8c();
  iVar10 = 0;
  FUN_71320300(uVar5,0xc,0,0,0,0,0);
  puVar1 = DAT_70b46ef8;
  FUN_7141cccc(*DAT_70b46ef8,*(int *)(param_2 + 4) + 0x10);
  puVar2 = DAT_70b46efc;
  iVar9 = *(int *)(*(int *)(iVar4 + 0x2c) + 8);
  imp___aeabi_memcpy(*DAT_70b46efc,*puVar1,0x40);
  uStack_30 = DAT_700bddc0;
  uStack_2c = DAT_700bddc4;
  uStack_28 = DAT_700bddc8;
  iVar6 = FUN_71416a78(uVar3,DAT_700bddb8);
  iVar7 = FUN_71417b34(uVar3);
  uVar11 = 1;
  FUN_71415948(*puVar2,iVar7 + iVar6 * 0x40,1);
  FUN_714154f8(&uStack_30,&uStack_30,1,*puVar2);
  FUN_7136d040(iVar9,&uStack_30);
  *(undefined1 *)(iVar9 + 0x10) = 0x3e;
  *(undefined4 *)(iVar9 + 0xc) = 0x3e19999a;
  *(char *)(iVar9 + 0x11) = (char)DAT_700bddbc;
  iVar6 = 0;
  do {
    iVar7 = *(int *)(*(int *)(iVar4 + 0x2c) + 8);
    imp___aeabi_memcpy(*puVar2,*puVar1,0x40);
    uStack_30 = *(undefined4 *)((int)&DAT_700bdddc + iVar6);
    uStack_2c = *(undefined4 *)((int)&DAT_700bdde0 + iVar6);
    uStack_28 = *(undefined4 *)((int)&DAT_700bdde4 + iVar6);
    iVar9 = FUN_71416a78(uVar3,*(undefined4 *)((int)&DAT_700bddd4 + iVar6));
    iVar8 = FUN_71417b34(uVar3);
    FUN_71415948(*puVar2,iVar8 + iVar9 * 0x40,1);
    FUN_714154f8(&uStack_30,&uStack_30,1,*puVar2);
    iVar7 = iVar7 + iVar10;
    FUN_7136d040(iVar7 + 0x14,&uStack_30);
    if (uVar11 < 4) {
      uVar5 = 0x3e4ccccd;
    }
    else if (uVar11 < 8) {
      uVar5 = 0x3e0f5c29;
    }
    else {
      uVar5 = 0x3e23d70a;
      if (uVar11 < 10) {
        uVar5 = 0x3e3851ec;
      }
    }
    iVar9 = iVar6 + 0x1c;
    *(undefined1 *)(iVar7 + 0x24) = 0x3e;
    iVar10 = iVar10 + 0x14;
    *(undefined4 *)(iVar7 + 0x20) = uVar5;
    uVar11 = uVar11 + 1;
    *(char *)(iVar7 + 0x25) = (char)*(undefined4 *)((int)&DAT_700bddd8 + iVar6);
    iVar6 = iVar9;
  } while (iVar9 != 0x134);
  *(undefined4 *)(iVar4 + 0x24) = 0x3fc00000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_7136d040(iVar4 + 0x18,&uStack_30);
  uStack_2c = 0xbf000000;
  uStack_28 = 0xbf99999a;
  uStack_30 = 0xbf000000;
  uStack_3c = 0x3f000000;
  uStack_38 = 0x3f000000;
  uStack_34 = 0x3f99999a;
  FUN_7136d040(iVar4,&uStack_30);
  FUN_7136d040(iVar4 + 0xc,&uStack_3c);
  *(undefined1 *)(iVar4 + 0x28) = 0;
  *(int *)(param_1 + 0x4c) = iVar4;
  return;
}


// =========================================================================
// Function: FUN_71401f14
// Entry: 0x71401f14 | Size: 484 bytes
// =========================================================================

uint FUN_71401f14(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_70c39074 + param_1 * 4);
  uVar2 = *(uint *)(iVar1 + 0x54);
  if (uVar2 == 5 || uVar2 == 0xb) {
    return 0;
  }
  if (param_1 < 0x1a9) {
    if (param_1 == -1) {
      iVar3 = 3;
      goto LAB_71402004;
    }
    if (param_1 == 0x197) {
      iVar3 = 4;
      goto LAB_71402004;
    }
  }
  else {
    if (param_1 == 0x1a9) {
      iVar3 = 1;
      goto LAB_71402004;
    }
    if (param_1 == 0x1fc) {
      iVar3 = 2;
      goto LAB_71402004;
    }
  }
  iVar3 = (int)*(char *)(iVar1 + 100);
  if (iVar3 == 0) {
    if (((10 < uVar2) || ((1 << (uVar2 & 0xff) & 0x604U) == 0)) &&
       (((&DAT_70b47021)[*(short *)(iVar1 + 0x62) * 0xe0] & 2) == 0)) {
      return (uint)(param_1 != 0x234 && param_1 != 0x1b9);
    }
    iVar3 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x368),0);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x36c),0);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x370),0);
    return (uint)(iVar1 == 0);
  }
LAB_71402004:
  if (((&DAT_70b47021)[*(short *)(iVar1 + 0x62) * 0xe0] & 2) != 0) {
    iVar1 = (iVar3 - 2U) + ((iVar3 - 2U & 0xffff) >> 0xf);
    return iVar1 >> 1 & ~(iVar1 >> 0x1f);
  }
  iVar4 = *(int *)(iVar1 + 0x74);
  iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar4 + 0x3f8),0);
  uVar2 = 5;
  if (iVar1 != 0) {
    iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar4 + 0x3fc),0);
    if (iVar1 == 0) {
      return 5;
    }
    iVar1 = FUN_71ba2cf0(*(undefined4 *)(iVar4 + 0x400),0);
    uVar2 = 5;
    if (iVar1 != 0) {
      iVar1 = 0x1af;
      if (param_1 != 0x1af) {
        iVar1 = 0x1b5;
      }
      uVar2 = 8;
      if (param_1 != 0x1af && param_1 != iVar1) {
        if (param_1 != 0x458c) {
          uVar2 = iVar3 - 1;
        }
        return uVar2;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71404120
// Entry: 0x71404120 | Size: 376 bytes
// =========================================================================

void FUN_71404120(undefined4 param_1)

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
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffc89c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc89c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be0f4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be0e4);
      *(undefined1 *)(puVar9 + 7) = 1;
      uVar4 = DAT_7007c4a0;
      uVar3 = DAT_7007c49c;
      *puVar9 = DAT_7007c498;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007c4b0;
      uVar4 = DAT_7007c4ac;
      uVar3 = DAT_7007c4a8;
      puVar9[3] = DAT_7007c4a4;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7140962c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be0f4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be0e4);
    if (*(char *)(iVar7 + 0x1c) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x8debe1ed >> iVar13) |
                (byte)(-0x40187071 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xbfe78f8f >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar15 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1a < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1c) = 0;
    }
    DAT_70ffc898 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc89c);
  }
                    /* WARNING: Could not recover jumptable at 0x7140414c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc898)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71404530
// Entry: 0x71404530 | Size: 388 bytes
// =========================================================================

void FUN_71404530(undefined4 param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffc8a4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc8a4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be114);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be104);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_7007c4c4;
      uVar4 = DAT_7007c4c0;
      uVar3 = DAT_7007c4bc;
      *puVar10 = DAT_7007c4b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007c4d8;
      uVar5 = DAT_7007c4d4;
      uVar4 = DAT_7007c4d0;
      uVar3 = DAT_7007c4cc;
      puVar10[4] = DAT_7007c4c8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_7007c4dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71409668,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be114);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be104);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1bd16de9 >> iVar14) |
                (byte)(-0x46c0d2bf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xb93f2d41 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70ffc8a0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc8a4);
  }
                    /* WARNING: Could not recover jumptable at 0x7140455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc8a0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71404d8c
// Entry: 0x71404d8c | Size: 380 bytes
// =========================================================================

void FUN_71404d8c(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffc8b4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc8b4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be154);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be144);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_7007c528;
      uVar5 = DAT_7007c524;
      uVar4 = DAT_7007c520;
      uVar3 = DAT_7007c51c;
      *puVar11 = DAT_7007c518;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007c540;
      uVar6 = DAT_7007c53c;
      uVar5 = DAT_7007c538;
      uVar4 = DAT_7007c534;
      uVar3 = DAT_7007c530;
      puVar11[5] = DAT_7007c52c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71409708,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be154);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be144);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x57fcd0d >> iVar15) |
                (byte)(0x13bdc327 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x13bdc327 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x2a < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
    }
    DAT_70ffc8b0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc8b4);
  }
                    /* WARNING: Could not recover jumptable at 0x71404db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc8b0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714051a0
// Entry: 0x714051a0 | Size: 372 bytes
// =========================================================================

void FUN_714051a0(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffc8bc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc8bc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be174);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be164);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_7007c558;
      uVar5 = DAT_7007c554;
      uVar4 = DAT_7007c550;
      uVar3 = DAT_7007c54c;
      *puVar11 = DAT_7007c548;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_7007c56c;
      uVar5 = DAT_7007c568;
      uVar4 = DAT_7007c564;
      uVar3 = DAT_7007c560;
      puVar11[5] = DAT_7007c55c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_7007c572;
      *(undefined2 *)(puVar11 + 10) = DAT_7007c570;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71409758,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be174);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be164);
    if (*(char *)(iVar8 + 0x2b) != '\0') {
      uVar10 = 0;
      uVar13 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar14 = (byte)(0x3369637b >> iVar15) |
                 (byte)(0x696dc51b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar14 = (byte)(0x696dc51b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar14;
        bVar1 = uVar10 == 0;
        bVar2 = (0x29 < uVar13) <= uVar10;
        uVar10 = uVar10 + (0xfffffffe < uVar13);
        uVar13 = uVar13 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2b) = 0;
    }
    DAT_70ffc8b8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc8bc);
  }
                    /* WARNING: Could not recover jumptable at 0x714051cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc8b8)();
  return;
}


// =========================================================================
// Function: FUN_714055ac
// Entry: 0x714055ac | Size: 412 bytes
// =========================================================================

void FUN_714055ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70ffc8c4 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc8c4);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be194,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be184);
        *(undefined1 *)(iVar4 + 0x4e) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007c578,0x4e);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714097a8,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be194);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be184);
      if (*(char *)(iVar4 + 0x4e) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x27c90d07 >> iVar9) |
                  (byte)(-0x2a4e90a9 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xd5b16f57 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x4c < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x4e) = 0;
      }
      DAT_70ffc8c0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc8c4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x714055e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc8c0)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_714059fc
// Entry: 0x714059fc | Size: 372 bytes
// =========================================================================

void FUN_714059fc(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffc8cc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc8cc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1b4);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1a4);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_7007c5d8;
      uVar5 = DAT_7007c5d4;
      uVar4 = DAT_7007c5d0;
      uVar3 = DAT_7007c5cc;
      *puVar11 = DAT_7007c5c8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_7007c5ec;
      uVar5 = DAT_7007c5e8;
      uVar4 = DAT_7007c5e4;
      uVar3 = DAT_7007c5e0;
      puVar11[5] = DAT_7007c5dc;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_7007c5f2;
      *(undefined2 *)(puVar11 + 10) = DAT_7007c5f0;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714097f8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1b4);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1a4);
    if (*(char *)(iVar8 + 0x2b) != '\0') {
      uVar10 = 0;
      uVar13 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar14 = (byte)(0x5949d57f >> iVar15) |
                 (byte)(0x69bd2b5b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar14 = (byte)(0x69bd2b5b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar14;
        bVar1 = uVar10 == 0;
        bVar2 = (0x29 < uVar13) <= uVar10;
        uVar10 = uVar10 + (0xfffffffe < uVar13);
        uVar13 = uVar13 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2b) = 0;
    }
    DAT_70ffc8c8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc8cc);
  }
                    /* WARNING: Could not recover jumptable at 0x71405a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc8c8)();
  return;
}


// =========================================================================
// Function: FUN_71405e08
// Entry: 0x71405e08 | Size: 164 bytes
// =========================================================================

void FUN_71405e08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x74);
  if (iVar3 != 0) {
    if ('\0' < *(char *)(iVar3 + 0x324)) {
      iVar4 = 0;
      do {
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x2f4 + iVar4 * 4) + 4);
        FUN_714230f4();
        FUN_7141d500(uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(char *)(iVar3 + 0x324));
    }
    piVar1 = (int *)*DAT_70f4ae40;
    iVar3 = (iVar3 - *piVar1 >> 4) * -0x3f03f03f;
    *(byte *)(piVar1[1] + iVar3) = *(byte *)(piVar1[1] + iVar3) | 0x80;
    if (iVar3 < piVar1[3]) {
      piVar1[3] = iVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_713fac18();
  return;
}


// =========================================================================
// Function: FUN_71406210
// Entry: 0x71406210 | Size: 1872 bytes
// =========================================================================

int * FUN_71406210(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined2 uStack_2b;
  undefined1 auStack_28 [3];
  undefined1 uStack_25;
  
  piVar11 = param_1 + 1;
  FUN_71358f2c(auStack_28,piVar11);
  iVar9 = *param_1;
  uStack_25 = 0;
  iVar5 = iVar9;
  if (((*DAT_70f4ae24 != 0) && (iVar5 = 0, iVar9 != 0)) &&
     (iVar3 = imp_strncmp(iVar9 + 0x10,s_remap_7006edd9,5), iVar5 = iVar9, iVar3 == 0)) {
    piVar4 = (int *)*param_2;
    *(undefined1 *)(piVar4 + 1) = 2;
    *piVar4 = (int)param_1;
    piVar4[2] = *param_1;
    *param_2 = *param_2 + 0x10;
    iVar5 = *DAT_70f4ae24;
    *param_1 = iVar5;
  }
  iVar9 = 0;
  if (iVar5 == *DAT_70f4ae28) {
    FUN_71358efc(&uStack_2c,0xff,0xaf,0,0);
    iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
    uVar10 = 0;
    iVar3 = 0;
    if (iVar5 == 0) {
      FUN_71358efc(&uStack_2c,0,0xff,200,0);
      iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
      iVar3 = 1;
      if (iVar5 == 0) {
        FUN_71358efc(&uStack_2c,0xb9,0xff,0,0);
        iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
        iVar3 = 2;
        if (iVar5 == 0) {
          FUN_71358efc(&uStack_2c,0xff,0x3c,0,0);
          uVar6 = FUN_71358fb8(auStack_28,&uStack_2c);
          iVar3 = -1;
          uVar10 = uVar6 ^ 1;
          if (uVar6 != 0) {
            iVar3 = 3;
          }
        }
      }
    }
    FUN_71358efc(&uStack_2c,0xb7,0xff,0,0);
    iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
    uVar6 = 1;
    if (iVar5 == 0) {
      FUN_71358efc(&uStack_2c,0xff,0x3a,0,0);
      iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
      uVar6 = 1;
      iVar9 = 1;
      if (iVar5 == 0) {
        FUN_71358efc(&uStack_2c,0xb5,0xff,0,0);
        iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
        if (iVar5 == 0) {
          FUN_71358efc(&uStack_2c,0xff,0x38,0,0);
          uVar6 = FUN_71358fb8(auStack_28,&uStack_2c);
          iVar9 = -1;
          if (uVar6 != 0) {
            iVar9 = 2;
          }
        }
        else {
          iVar9 = 3;
          uVar6 = 1;
        }
      }
    }
    puVar8 = (undefined4 *)*param_2;
    *(undefined1 *)(puVar8 + 1) = 2;
    *puVar8 = piVar11;
    puVar8[2] = param_1[1];
    *param_2 = *param_2 + 0x10;
    *(undefined1 *)((int)param_1 + 6) = 0xff;
    *(undefined2 *)(param_1 + 1) = 0xffff;
    if ((uVar10 != 0) || (*(char *)(DAT_70f4ae34 + iVar3) == '\0')) {
      if ((uVar6 & DAT_70ffc8d0 != 0) != 1) {
        return param_1;
      }
      if (*(char *)(DAT_70ffc8d0 + iVar9 + 0x759) == '\0') {
        return param_1;
      }
    }
    puVar8 = (undefined4 *)*param_2;
    *(undefined1 *)(puVar8 + 1) = 2;
    *puVar8 = param_1;
    puVar8[2] = *param_1;
    iVar5 = *param_2;
    *param_2 = iVar5 + 0x10;
    *(undefined1 *)(iVar5 + 0x14) = 2;
    *(int **)(iVar5 + 0x10) = param_1 + 3;
    *(int *)(iVar5 + 0x18) = param_1[3];
    iVar5 = *param_2;
    *param_2 = iVar5 + 0x10;
    *(undefined1 *)(iVar5 + 0x14) = 2;
    *(int **)(iVar5 + 0x10) = param_1 + 4;
    *(int *)(iVar5 + 0x18) = param_1[4];
    iVar5 = *param_2;
    *param_2 = iVar5 + 0x10;
    *(undefined1 *)(iVar5 + 0x14) = 2;
    *(int **)(iVar5 + 0x10) = param_1 + 5;
    *(int *)(iVar5 + 0x18) = param_1[5];
    *param_2 = *param_2 + 0x10;
    *param_1 = *DAT_70f4ae2c;
    iVar9 = DAT_70f4ae38[1];
    iVar5 = DAT_70f4ae38[2];
    param_1[3] = *DAT_70f4ae38;
    param_1[4] = iVar9;
    param_1[5] = iVar5;
    return param_1;
  }
  FUN_71358efc(&uStack_2c,0x3c,0xff,0,0);
  iVar9 = FUN_71358fb8(auStack_28,&uStack_2c);
  iVar5 = DAT_70ffc8d0;
  if (iVar9 == 0) {
    FUN_71358efc(&uStack_2c,0xff,0,0xaf,0);
    iVar9 = FUN_71358fb8(auStack_28,&uStack_2c);
    iVar5 = DAT_70ffc8d0;
    if (iVar9 == 0) {
      FUN_71358efc(&uStack_2c,0,0xff,0xff,0);
      iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
      if (iVar5 == 0) {
        FUN_71358efc(&uStack_2c,0xff,0,0xff,0);
        iVar5 = FUN_71358fb8(auStack_28,&uStack_2c);
        if (iVar5 == 0) {
          return param_1;
        }
        pbVar7 = DAT_70f4ae30 + 3;
      }
      else {
        pbVar7 = DAT_70f4ae30 + 2;
      }
    }
    else {
      if (DAT_70ffc8d0 != 0) {
        if (DAT_70ffd19c < 0x32) {
          iVar9 = DAT_70ffd19c * 0xc;
          iVar3 = DAT_70ffd19c * 3;
          DAT_70ffd19c = DAT_70ffd19c + 1;
          (&DAT_70ffcf44)[iVar3] = param_1;
          *(undefined2 *)(&DAT_70ffcf4c + iVar9) = 1;
          *(int *)(&DAT_70ffcf48 + iVar9) = iVar5 + 0x788;
        }
        DAT_70ffd1a0 = *(undefined4 *)(iVar5 + 0x6e8);
      }
      pbVar7 = DAT_70f4ae30 + 1;
    }
  }
  else {
    pbVar7 = DAT_70f4ae30;
    if (DAT_70ffc8d0 != 0) {
      if (DAT_70ffd19c < 0x32) {
        iVar9 = DAT_70ffd19c * 0xc;
        iVar3 = DAT_70ffd19c * 3;
        DAT_70ffd19c = DAT_70ffd19c + 1;
        (&DAT_70ffcf44)[iVar3] = param_1;
        *(undefined2 *)(&DAT_70ffcf4c + iVar9) = 1;
        *(int *)(&DAT_70ffcf48 + iVar9) = iVar5 + 0x788;
      }
      DAT_70ffd1a0 = *(undefined4 *)(iVar5 + 0x6e8);
      pbVar7 = DAT_70f4ae30;
    }
  }
  bVar1 = *pbVar7;
  puVar8 = (undefined4 *)*param_2;
  *(undefined1 *)(puVar8 + 1) = 2;
  *puVar8 = piVar11;
  puVar8[2] = *piVar11;
  *param_2 = *param_2 + 0x10;
  FUN_71358f74(&uStack_2c);
  if (DAT_70ffc8d0 == 0) {
LAB_71406678:
    puVar8 = &DAT_70f4c428 + bVar1;
  }
  else {
    cVar2 = *(char *)(DAT_70ffc8d0 + 0x23);
    if (cVar2 == '\x02') {
      FUN_71358efc(&uStack_30,0x3c,0xff,0,0);
      iVar5 = FUN_71358fb8(auStack_28,&uStack_30);
      if (iVar5 == 0) {
        FUN_71358efc(auStack_34,0xff,0,0xaf,0);
        iVar5 = FUN_71358fb8(auStack_28,auStack_34);
        if (iVar5 == 0) goto LAB_7140668c;
      }
      puVar8 = (undefined4 *)*param_2;
      *(undefined1 *)(puVar8 + 1) = 2;
      *puVar8 = param_1;
      puVar8[2] = *param_1;
      *param_2 = *param_2 + 0x10;
      puVar8 = &uStack_30;
      *param_1 = *(undefined4 *)(DAT_70ffc8d0 + 0x40);
      FUN_71358efc(puVar8,0xff,0xff,0xff,0xff);
    }
    else {
      if (cVar2 != '\x01') {
        if (cVar2 != '\0') goto LAB_7140668c;
        goto LAB_71406678;
      }
      FUN_71358efc(&uStack_30,0x3c,0xff,0,0);
      iVar5 = FUN_71358fb8(auStack_28,&uStack_30);
      if (iVar5 != 0) {
        FUN_71359020(&uStack_2c,DAT_70ffc8d0 + 0x24);
      }
      FUN_71358efc(&uStack_30,0xff,0,0xaf,0);
      iVar5 = FUN_71358fb8(auStack_28,&uStack_30);
      if (iVar5 == 0) goto LAB_7140668c;
      puVar8 = (undefined4 *)(DAT_70ffc8d0 + 0x28);
    }
  }
  FUN_71359020(&uStack_2c,puVar8);
LAB_7140668c:
  *(undefined1 *)(param_1 + 1) = uStack_2c;
  *(undefined2 *)((int)param_1 + 5) = uStack_2b;
  return param_1;
}


// =========================================================================
// Function: FUN_714070c0
// Entry: 0x714070c0 | Size: 1076 bytes
// =========================================================================

int * FUN_714070c0(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    iVar3 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar3 != 0) {
    iVar9 = 0;
    do {
      iVar4 = imp_strncmp(iVar3 + 0x10,(&DAT_70b0e2d8)[iVar9],0xc);
      if ((iVar4 == 0) && (DAT_70ffc8d0 != 0)) {
        iVar4 = DAT_70ffc8d0;
        if (*(char *)(DAT_70ffc8d0 + iVar9 + 0x2c) != '\0') {
          puVar5 = (undefined4 *)*param_2;
          *(undefined1 *)(puVar5 + 1) = 2;
          *puVar5 = param_1;
          puVar5[2] = *param_1;
          iVar4 = *param_2;
          *param_2 = iVar4 + 0x10;
          *(undefined1 *)(iVar4 + 0x14) = 2;
          *(int **)(iVar4 + 0x10) = param_1 + 1;
          *(int *)(iVar4 + 0x18) = param_1[1];
          *param_2 = *param_2 + 0x10;
          iVar4 = DAT_70ffc920;
          if (DAT_70ffc920 == 0) {
            iVar7 = FUN_7143b470(4,4,0x20,0x504);
            if (iVar7 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_7143c10c(iVar7,0,1);
              if (iVar4 != 0) {
                imp___aeabi_memset(iVar4,*(int *)(iVar7 + 0x18) * *(int *)(iVar7 + 0x10),0xff);
                FUN_7143c550(iVar7);
              }
              DAT_70ffc920 = FUN_7143cf50(iVar7);
              iVar4 = DAT_70ffc920;
              if (DAT_70ffc920 == 0) {
                FUN_7143b8c0(iVar7);
                iVar4 = DAT_70ffc920;
              }
            }
          }
          *param_1 = iVar4;
          param_1[1] = *(int *)(DAT_70ffc8d0 + iVar9 * 4 + 0x30);
          piVar8 = (int *)(DAT_711a3938 + 0x1389c);
          iVar4 = *piVar8;
          if (iVar4 == 0) {
            iVar4 = FUN_713c301c(0);
            if (iVar4 == 0) {
              iVar4 = *piVar8;
            }
            else {
              thunk_MwhHq(0x3a0);
              iVar4 = FUN_715ba834();
              *piVar8 = iVar4;
            }
          }
          iVar4 = thunk_FUN_715bf66c(iVar4);
          if (iVar4 == 0) {
LAB_71407308:
            uVar6 = FUN_716b5534(0x3e4ccccd);
            puVar5 = (undefined4 *)(DAT_70ffc8d0 + 0x3c);
            uVar6 = FUN_71ba0b38(uVar6,*puVar5);
            *puVar5 = uVar6;
            iVar4 = FUN_71ba2d70(uVar6,0x3f800000);
            if (iVar4 != 0) {
              uVar6 = 0x3f800000;
LAB_7140733c:
              *puVar5 = uVar6;
            }
          }
          else {
            piVar8 = (int *)(DAT_711a3938 + 0x1389c);
            iVar4 = *piVar8;
            if (iVar4 == 0) {
              iVar4 = FUN_713c301c(0);
              if (iVar4 == 0) {
                iVar4 = *piVar8;
              }
              else {
                thunk_MwhHq(0x3a0);
                iVar4 = FUN_715ba834();
                *piVar8 = iVar4;
              }
            }
            iVar4 = thunk_FUN_715c4004(iVar4);
            if (iVar4 != *(int *)(DAT_70ffc8d0 + 0xc)) goto LAB_71407308;
            uVar6 = FUN_716b5534(0x3e4ccccd);
            puVar5 = (undefined4 *)(DAT_70ffc8d0 + 0x3c);
            uVar6 = FUN_71ba240c(*puVar5,uVar6);
            *puVar5 = uVar6;
            iVar4 = FUN_71ba2d10(uVar6,0x3e99999a);
            if (iVar4 != 0) {
              uVar6 = 0x3e99999a;
              goto LAB_7140733c;
            }
          }
          iVar7 = FUN_716ac9ac();
          iVar4 = DAT_70ffc8d0;
          if (iVar7 == 0) {
            if (DAT_70ffc8d0 == 0) goto LAB_71407120;
          }
          else {
            uVar6 = FUN_71ba1e0c(*(undefined1 *)(DAT_70ffc8d0 + iVar9 * 4 + 0x33));
            FUN_71ba21e8(*(undefined4 *)(iVar4 + 0x3c),uVar6);
            imp_roundf();
            uVar2 = FUN_71ba17bc();
            *(undefined1 *)((int)param_1 + 7) = uVar2;
          }
        }
        if (DAT_70ffd19c < 0x32) {
          uVar2 = *(undefined1 *)(iVar4 + iVar9 + 0x2c);
          iVar7 = DAT_70ffd19c * 0xc;
          iVar1 = DAT_70ffd19c * 3;
          DAT_70ffd19c = DAT_70ffd19c + 1;
          (&DAT_70ffcf44)[iVar1] = param_1;
          (&DAT_70ffcf4c)[iVar7] = 1;
          (&DAT_70ffcf4d)[iVar7] = uVar2;
          *(int *)(&DAT_70ffcf48 + iVar7) = iVar4 + 0x878;
        }
        DAT_70ffd1a0 = *(undefined4 *)(iVar4 + 0x6e8);
      }
LAB_71407120:
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    if (DAT_70ffc8d0 != 0) {
      bVar10 = *(char *)(DAT_70ffc8d0 + 0x568) != '\0';
      iVar3 = 0;
      if (bVar10) {
        iVar3 = *param_1;
      }
      if (bVar10 && iVar3 != 0) {
        iVar9 = DAT_70ffc8d0 + 0x548;
        piVar8 = (int *)(DAT_70ffc8d0 + 0x6c);
        iVar4 = 0;
        do {
          if (((*(char *)(iVar9 + iVar4) != '\0') &&
              (iVar7 = imp_strncmp(piVar8 + -9,iVar3 + 0x10,0x22), iVar7 == 0)) && (*piVar8 != 0)) {
            puVar5 = (undefined4 *)*param_2;
            *(undefined1 *)(puVar5 + 1) = 2;
            *puVar5 = param_1;
            puVar5[2] = *param_1;
            iVar3 = *param_2;
            *param_2 = iVar3 + 0x10;
            *(undefined1 *)(iVar3 + 0x14) = 0;
            *(undefined1 **)(iVar3 + 0x10) = (undefined1 *)((int)param_1 + 7);
            *(undefined1 *)(iVar3 + 0x18) = *(undefined1 *)((int)param_1 + 7);
            *param_2 = *param_2 + 0x10;
            *param_1 = *piVar8;
            return param_1;
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 10;
        } while (iVar4 != 0x20);
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71407a20
// Entry: 0x71407a20 | Size: 112 bytes
// =========================================================================

int FUN_71407a20(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    uVar1 = FUN_714901f0(param_1);
    if ((uVar1 & 0x1000) != 0) {
      FUN_71416634(*(undefined4 *)(param_1 + 0x18),&LAB_714061b8,param_2);
    }
    FUN_71416634(*(undefined4 *)(param_1 + 0x18),FUN_71406210,param_2);
    FUN_71416634(*(undefined4 *)(param_1 + 0x18),FUN_714070c0,param_2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71407b78
// Entry: 0x71407b78 | Size: 908 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71407b78(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 auStack_b8 [2];
  int iStack_b0;
  undefined1 auStack_ac [128];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1d4);
  if (*pcVar7 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1c4);
    *(undefined1 *)(puVar11 + 10) = 1;
    uVar5 = DAT_7007c608;
    uVar4 = DAT_7007c604;
    uVar3 = DAT_7007c600;
    uVar10 = DAT_7007c5fc;
    *puVar11 = DAT_7007c5f8;
    puVar11[1] = uVar10;
    puVar11[2] = uVar3;
    puVar11[3] = uVar4;
    puVar11[4] = uVar5;
    uVar5 = DAT_7007c61c;
    uVar4 = DAT_7007c618;
    uVar3 = DAT_7007c614;
    uVar10 = DAT_7007c610;
    puVar11[5] = DAT_7007c60c;
    puVar11[6] = uVar10;
    puVar11[7] = uVar3;
    puVar11[8] = uVar4;
    puVar11[9] = uVar5;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71409848,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1d4);
    *puVar12 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1c4);
  if (*(char *)(iVar8 + 0x28) != '\0') {
    uVar13 = 0;
    uVar16 = 0;
    do {
      iVar14 = (uVar13 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar6 = (byte)(0x13cb311b >> iVar14) | (byte)(0x77d119b1 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar15) {
        bVar6 = (byte)(0x77d119b1 >> (uVar15 & 0xff));
      }
      *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar6;
      bVar17 = 0xfffffffe < uVar13;
      bVar1 = uVar16 == 0;
      bVar2 = (0x26 < uVar13) <= uVar16;
      uVar13 = uVar13 + 1;
      uVar16 = uVar16 + bVar17;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x28) = 0;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1f4);
  if (*pcVar7 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1e4);
    *puVar11 = 0x1cb5369;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71409898,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1f4);
    *puVar12 = 1;
  }
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be1e4);
  if (pbVar9[3] != 0) {
    pbVar9[3] = 0;
    *pbVar9 = *pbVar9 ^ 0x1b;
    pbVar9[1] = pbVar9[1] ^ 0x31;
    pbVar9[2] = pbVar9[2] ^ 0xcb;
  }
  uVar10 = FUN_71339d5c(iVar8);
  pcVar7 = (char *)FUN_7132d218();
  if (pcVar7 != (char *)0x0) {
    do {
      iStack_b0 = 0;
      imp___aeabi_memclr8(&uStack_d8,0x24);
      iVar8 = imp_strncmp(pcVar7,s__the_end_70065c5f,8);
      if (iVar8 == 0) break;
      if (*pcVar7 != ';') {
        imp_sscanf(pcVar7,s__s__d__d__d__d__f__f__d__f__d__d_7006bf27,auStack_ac,&uStack_d8,
                   (uint)&uStack_d8 | 2,(uint)&uStack_d8 | 4,(uint)&uStack_d8 | 6,&uStack_d0,
                   &uStack_cc,&uStack_c8,&uStack_c4,&uStack_c0,(int)&uStack_c0 + 1,
                   (int)&uStack_c0 + 2,&uStack_bc,auStack_b8);
        uStack_bc = CONCAT31(uStack_bc._1_3_,0xff);
        uStack_c0 = CONCAT22(0xff0d,(undefined2)uStack_c0);
        FUN_713fe4f8(auStack_ac,&iStack_b0);
        iVar8 = iStack_b0 * 0x24;
        *(undefined4 *)(&DAT_70f493b0 + iVar8) = uStack_d8;
        *(undefined4 *)(&DAT_70f493b4 + iVar8) = uStack_d4;
        *(undefined4 *)(&DAT_70f493b8 + iVar8) = uStack_d0;
        *(undefined4 *)(&DAT_70f493bc + iVar8) = uStack_cc;
        *(undefined4 *)(&DAT_70f493c0 + iVar8) = uStack_c8;
        *(undefined4 *)(&DAT_70f493c4 + iVar8) = uStack_c4;
        *(undefined4 *)(&DAT_70f493c8 + iVar8) = uStack_c0;
        *(undefined4 *)(&DAT_70f493cc + iVar8) = uStack_bc;
        *(undefined4 *)(&DAT_70f493d0 + iVar8) = auStack_b8[0];
      }
      pcVar7 = (char *)FUN_7132d218(uVar10);
    } while (pcVar7 != (char *)0x0);
  }
  FUN_7133a194(uVar10);
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_714087bc
// Entry: 0x714087bc | Size: 460 bytes
// =========================================================================

void FUN_714087bc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint auStack_24 [2];
  undefined4 *puStack_1c;
  
  iVar1 = 0;
  do {
    uVar4 = *(uint *)((int)&DAT_7007be84 + iVar1);
    *(uint *)((int)&DAT_70f4c428 + iVar1) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x400);
  FUN_713d3bb4();
  iVar1 = DAT_70c39074;
  FUN_713f6f60(*(undefined4 *)(DAT_70c39074 + (uint)*DAT_70ffc8dc * 4),s_nto_b_tw_7007087f);
  FUN_713f6f60(*(undefined4 *)(iVar1 + (uint)*DAT_70ffc8d8 * 4),s_nto_b_l_700717f0);
  FUN_713f6f60(*(undefined4 *)(iVar1 + (uint)*DAT_70ffc8d4 * 4),s_nto_b_s_70067eac);
  FUN_714051a0();
  FUN_713d3bb4();
  FUN_714059fc();
  FUN_713d3bb4();
  FUN_71407b78();
  puStack_1c = (undefined4 *)thunk_MwhHq(0x10);
  iVar1 = 0;
  *(undefined1 *)((int)puStack_1c + 0xb) = 0;
  *puStack_1c = 0x65686576;
  puStack_1c[1] = 0x656d656c;
  *(undefined4 *)((int)puStack_1c + 7) = 0x73746e65;
  auStack_24[1] = 0xb;
  auStack_24[0] = 0x11;
  FUN_714b3aa4(auStack_24);
  if ((auStack_24[0] & 1) != 0) {
    thunk_qNQrlu(puStack_1c);
  }
  uVar2 = FUN_7143f084(s_vehiclelights128_7006280c,0);
  *DAT_70f4ae28 = uVar2;
  uVar2 = FUN_7143f084(s_vehiclelightson128_70067547,0);
  *DAT_70f4ae2c = uVar2;
  FUN_713d3bb4();
  puVar3 = (undefined4 *)FUN_71408d58(0x14);
  uVar2 = thunk__IBDl(0x32c80);
  *puVar3 = uVar2;
  uVar2 = thunk__IBDl(200);
  puVar3[1] = uVar2;
  puVar3[2] = 200;
  *(undefined1 *)(puVar3 + 4) = 1;
  puVar3[3] = 0xffffffff;
  do {
    *(byte *)(puVar3[1] - iVar1) = *(byte *)(puVar3[1] - iVar1) | 0x80;
    *(byte *)(puVar3[1] - iVar1) = *(byte *)(puVar3[1] - iVar1) & 0x80;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -200);
  *DAT_70f4ae40 = (int)puVar3;
  return;
}


// =========================================================================
// Function: FUN_71408d58
// Entry: 0x71408d58 | Size: 892 bytes
// =========================================================================

int FUN_71408d58(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int aiStack_38 [5];
  
  iVar2 = imp_sysconf(0x28);
  iVar3 = imp_sysconf(0x28);
  uVar11 = (param_1 + iVar2) - 1U & -iVar3;
  iVar2 = imp_sysconf(0x28);
  aiStack_38[4] = uVar11 + iVar2 * 2;
  uVar13 = 0x71408dac;
  aiStack_38[3] = uVar11;
  do {
    iVar2 = imp_sysconf(0x28);
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    uVar14 = iVar3 - 1U & -iVar4;
    iVar3 = imp_sysconf(0x28);
    uVar11 = iVar2 * 3 & -iVar3;
    if (uVar11 < uVar14) {
      uVar14 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar11 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar14 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar11 * 0x1ce4e5b9;
      uVar8 = (uint)lVar1;
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x1ce4e5b9 +
               uVar11 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = (uVar8 >> 0x1b | uVar11 * 0x20) ^ uVar8;
      lVar1 = (ulonglong)uVar8 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar9 = (uVar9 >> 0x1f |
              ((uVar11 ^ uVar11 >> 0x1b) * 0x133111eb +
              uVar8 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20)) * 2) ^ uVar9;
      iVar2 = 0;
    }
    else {
      uVar9 = (0x80b583ea < uVar13) + 0x9e3779b9;
      uVar8 = (uVar13 + 0x7f4a7c15 >> 0x1e | uVar9 * 4) ^ uVar13 + 0x7f4a7c15;
      lVar1 = (ulonglong)uVar8 * 0x1ce4e5b9;
      uVar10 = (uint)lVar1;
      uVar8 = (uVar9 ^ uVar9 >> 0x1e) * 0x1ce4e5b9 +
              uVar8 * -0x40a7b893 + (int)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uVar10 >> 0x1b | uVar8 * 0x20) ^ uVar10;
      lVar1 = (ulonglong)uVar10 * 0x133111eb;
      uVar9 = (uint)lVar1;
      uVar8 = (uVar8 ^ uVar8 >> 0x1b) * 0x133111eb +
              uVar10 * -0x6b2fb645 + (int)((ulonglong)lVar1 >> 0x20);
      uVar9 = (uVar9 >> 0x1f | uVar8 * 2) ^ uVar9;
      uVar5 = imp_sysconf(0x28);
      iVar2 = FUN_71ba0484(uVar11 - uVar14,uVar5);
      FUN_71ba3430(uVar9,uVar8 ^ uVar8 >> 0x1f,iVar2 + 1,0);
      iVar2 = imp_sysconf(0x28);
      iVar2 = iVar2 * extraout_r2 + uVar14;
    }
    iVar2 = iVar2 + aiStack_38[4];
    iVar3 = imp_sysconf(0x28);
    FUN_71ba33fc(uVar9,-0xebf70d8 - (iVar2 + 0x71408f28 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x31408f28U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_71409010;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_71409010:
  for (; ((*piVar6 != 0x6a4dab1f || piVar6[1] != 0x679b29b ||
          (piVar6[2] != 0x6efdd0cf || piVar6[3] != -0x33ed938)) ||
         (piVar6[4] != -0x4103aa2a || piVar6[5] != 0x370f3a77)); piVar6 = piVar6 + 1) {
  }
  piVar12 = piVar6 + 0xc024;
  piVar6[*piVar12 + 0xc025] = iVar2;
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  iVar4 = imp_sysconf(0x28);
  iVar4 = aiStack_38[3] + iVar4;
  iVar7 = imp_sysconf(0x28);
  piVar6[*piVar12 + 0xc025] = iVar3 + iVar2 + (iVar4 - 1U & -iVar7);
  *piVar12 = *piVar12 + 1;
  iVar3 = imp_sysconf(0x28);
  return iVar3 + iVar2;
}


// =========================================================================
// Function: FUN_7140c688
// Entry: 0x7140c688 | Size: 388 bytes
// =========================================================================

void FUN_7140c688(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffc940 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc940), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be274);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be264);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007c67c;
      uVar6 = DAT_7007c678;
      uVar5 = DAT_7007c674;
      uVar4 = DAT_7007c670;
      uVar3 = DAT_7007c66c;
      *puVar11 = DAT_7007c668;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_7007c680;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7007c682;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7140cf2c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be274);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be264);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x9f9d9cf >> iVar15) | (byte)(0xb5181c5 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xb5181c5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x19 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x1b) = 0;
    }
    DAT_70ffc93c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc940);
  }
                    /* WARNING: Could not recover jumptable at 0x7140c6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc93c)(param_1);
  return;
}


