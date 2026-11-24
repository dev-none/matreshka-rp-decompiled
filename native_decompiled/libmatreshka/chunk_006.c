// =========================================================================
// Function: FUN_7151eb8c
// Entry: 0x7151eb8c | Size: 28 bytes
// =========================================================================

undefined4 FUN_7151eb8c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (param_1 < 0xb) {
    uVar1 = (&DAT_7118dff8)[param_1];
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_7151ebf4
// Entry: 0x7151ebe0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151ebf4(void)

{
  FUN_7151ebf4();
  return;
}


// =========================================================================
// Function: FUN_7151ebf4
// Entry: 0x7151ebf4 | Size: 40 bytes
// =========================================================================

undefined4 FUN_7151ebf4(short param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (param_2 < 0xb) {
    uVar1 = (&DAT_71183368)[param_1 * 0xb + param_2];
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7151ec54
// Entry: 0x7151ec54 | Size: 24 bytes
// =========================================================================

void FUN_7151ec54(uint param_1,undefined4 param_2)

{
  if (param_1 >> 2 < 0xfb) {
    *(undefined4 *)(&DAT_71181bd8 + param_1 * 4) = param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_7151eca4
// Entry: 0x7151eca4 | Size: 196 bytes
// =========================================================================

void FUN_7151eca4(void)

{
  int iVar1;
  
  iVar1 = *DAT_70ffc98c;
  DAT_7118e034 = *(undefined4 *)(iVar1 + 0x1c);
  DAT_7118e038 = *(undefined4 *)(iVar1 + 0x20);
  DAT_7118e030 = *(undefined4 *)(iVar1 + 0x18);
  DAT_7118e03c = *(undefined4 *)(iVar1 + 0x24);
  DAT_7118e028 = *(undefined1 *)(*DAT_70ffc988 + 2);
  DAT_7118e040 = *(undefined1 *)(*DAT_70ffc98c + 3);
  DAT_7118e041 = *(undefined1 *)(*DAT_70ffc99c + 2);
  DAT_7118e042 = *(undefined1 *)(DAT_70ffc99c[1] + 2);
  DAT_7118e043 = *(undefined1 *)(DAT_70ffc99c[2] + 2);
  DAT_7118e044 = *DAT_70ffc998;
  return;
}


// =========================================================================
// Function: FUN_7151eea0
// Entry: 0x7151eea0 | Size: 24 bytes
// =========================================================================

void FUN_7151eea0(void)

{
  FUN_71462df8();
  FUN_714631f8();
  FUN_71453ee8();
  return;
}


// =========================================================================
// Function: FUN_7151ef24
// Entry: 0x7151ef24 | Size: 200 bytes
// =========================================================================

void FUN_7151ef24(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined1 *)(*DAT_70ffc988 + 2) = DAT_7118e028;
  piVar1 = DAT_70ffc98c;
  iVar4 = *DAT_70ffc98c;
  *(undefined4 *)(iVar4 + 0x18) = DAT_7118e030;
  uVar3 = DAT_7118e03c;
  uVar2 = DAT_7118e038;
  *(undefined4 *)(iVar4 + 0x1c) = DAT_7118e034;
  *(undefined4 *)(iVar4 + 0x20) = uVar2;
  *(undefined4 *)(iVar4 + 0x24) = uVar3;
  *(undefined1 *)(*piVar1 + 3) = DAT_7118e040;
  piVar1 = DAT_70ffc99c;
  *(undefined1 *)(*DAT_70ffc99c + 2) = DAT_7118e041;
  *(undefined1 *)(piVar1[1] + 2) = DAT_7118e042;
  *(undefined1 *)(piVar1[2] + 2) = DAT_7118e043;
  *DAT_70ffc998 = DAT_7118e044;
  return;
}


// =========================================================================
// Function: FUN_7151f144
// Entry: 0x7151f144 | Size: 100 bytes
// =========================================================================

void FUN_7151f144(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_7151f294();
  if (0 < DAT_7118e048) {
    iVar4 = 0;
    puVar3 = &DAT_7118e04c;
    do {
      iVar1 = imp_strchr(puVar3,0x3a);
      uVar2 = FUN_7133efa0(iVar1 + 1);
      (&DAT_711a18cc)[iVar4] = uVar2;
      puVar3 = puVar3 + 0x28;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_7118e048);
  }
  return;
}


// =========================================================================
// Function: FUN_7151f294
// Entry: 0x7151f294 | Size: 624 bytes
// =========================================================================

void FUN_7151f294(void)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36d0);
  if (*pcVar7 == '\0') {
    puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36c0);
    *(undefined1 *)((int)puVar13 + 0x1e) = 1;
    uVar4 = DAT_70081f08;
    uVar10 = DAT_70081f04;
    *puVar13 = DAT_70081f00;
    puVar13[1] = uVar10;
    puVar13[2] = uVar4;
    uVar5 = DAT_70081f18;
    uVar4 = DAT_70081f14;
    uVar10 = DAT_70081f10;
    puVar13[3] = DAT_70081f0c;
    puVar13[4] = uVar10;
    puVar13[5] = uVar4;
    puVar13[6] = uVar5;
    *(undefined2 *)(puVar13 + 7) = DAT_70081f1c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151fe6c,puVar13,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36d0);
    *puVar15 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36c0);
  if (*(char *)(iVar8 + 0x1e) != '\0') {
    uVar12 = 0;
    uVar11 = 0;
    do {
      iVar16 = (uVar12 & 7) * 8;
      uVar17 = iVar16 - 0x20;
      bVar6 = (byte)(0xab056bdd >> iVar16) | (byte)(0x7d0149af << ((uVar12 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar17) {
        bVar6 = (byte)(0x7d0149af >> (uVar17 & 0xff));
      }
      *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar6;
      bVar18 = 0xfffffffe < uVar12;
      bVar1 = uVar11 == 0;
      bVar2 = (0x1c < uVar12) <= uVar11;
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x1e) = 0;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36f0);
  if (*pcVar7 == '\0') {
    puVar14 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36e0);
    *puVar14 = 0xb59d;
    *(undefined1 *)(puVar14 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151feac,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36f0);
    *puVar15 = 1;
  }
  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36e0);
  if (pbVar9[2] != 0) {
    pbVar9[2] = 0;
    *pbVar9 = *pbVar9 ^ 0xef;
    pbVar9[1] = pbVar9[1] ^ 0xb5;
  }
  uVar10 = FUN_71339d5c(iVar8);
  uVar12 = 0;
LAB_7151f3a8:
  pbVar9 = (byte *)FUN_7132d218(uVar10);
  if (pbVar9 != (byte *)0x0) {
    do {
      bVar6 = *pbVar9;
      pbVar3 = pbVar9;
      if (bVar6 != 0) {
        do {
          if (bVar6 < 0x21) {
            *pbVar3 = 0;
          }
          else if (bVar6 == 0x2c) {
            *pbVar3 = 0;
          }
          bVar6 = pbVar3[1];
          pbVar3 = pbVar3 + 1;
        } while (bVar6 != 0);
        if (*pbVar9 != 0) goto LAB_7151f418;
      }
      pbVar9 = (byte *)FUN_7132d218(uVar10);
      if (pbVar9 == (byte *)0x0) break;
    } while( true );
  }
  goto LAB_7151f440;
LAB_7151f418:
  FUN_7151f8a0(&DAT_7118e04c + uVar12 * 0x28,0xffffffff);
  uVar11 = uVar12 + 1;
  bVar1 = 0x7ce < uVar12;
  uVar12 = uVar11;
  if (bVar1) {
LAB_7151f440:
    DAT_7118e048 = uVar12;
    FUN_7133a194(uVar10);
    return;
  }
  goto LAB_7151f3a8;
}


// =========================================================================
// Function: FUN_7151f8a0
// Entry: 0x7151f8a0 | Size: 56 bytes
// =========================================================================

void FUN_7151f8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x28,0,param_2,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7151f90c
// Entry: 0x7151f90c | Size: 52 bytes
// =========================================================================

undefined * FUN_7151f90c(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((int)param_1 < DAT_7118e048) {
    puVar1 = &DAT_7118e04c + param_1 * 0x28;
  }
  if (0x7fffffff < param_1) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


// =========================================================================
// Function: FUN_7151f998
// Entry: 0x7151f998 | Size: 16 bytes
// =========================================================================

int FUN_7151f998(int param_1)

{
  int iVar1;
  
  if (0 < DAT_7118e048) {
    iVar1 = 0;
    do {
      if ((&DAT_711a18cc)[iVar1] == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (DAT_7118e048 != iVar1);
  }
  return 0;
}


// =========================================================================
// Function: FUN_7151fa44
// Entry: 0x7151fa44 | Size: 392 bytes
// =========================================================================

uint FUN_7151fa44(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar2 = imp_strlen(param_1 + 0x25);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar2 < 0xb) {
    uVar5 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_7151fad8;
  }
  else {
    uVar5 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_30 = (uVar2 | 7) + 2;
    uStack_2c = uVar2;
    uStack_28 = uVar5;
  }
  imp___aeabi_memcpy(uVar5,param_1 + 0x25,uVar2);
LAB_7151fad8:
  uVar7 = 0;
  *(undefined1 *)(uVar5 + uVar2) = 0;
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (&uStack_30,&DAT_7006a350);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (&uStack_30,param_1 + 0xd);
  uVar1 = uStack_28;
  uVar5 = uStack_30;
  uVar2 = DAT_7118e048;
  uVar8 = uStack_28;
  if ((uStack_30 & 1) == 0) {
    uVar8 = (uint)&uStack_30 | 1;
  }
  if (0 < (int)DAT_7118e048) {
    puVar6 = &DAT_7118e04c;
    do {
      iVar3 = imp_strcasecmp(uVar8,puVar6);
      if (iVar3 == 0) {
        if ((uVar7 & 0xffff) != 0) {
          uVar8 = *(uint *)(param_1 + 0x5c);
          uVar2 = (uint)(*(int *)(param_1 + 0x40) != 0) << 1;
          if (0 < *(int *)(param_1 + 0x40)) {
            uVar2 = 4;
          }
          uVar4 = FUN_71ba17bc(*(undefined4 *)(param_1 + 0x38));
          uVar7 = (uVar7 & 0xffff |
                  ((uVar8 & 0xc0) << 3 | (uVar2 | (uVar8 & 0xf) >> 3) << 0xb | (uVar8 & 2) << 7 |
                  uVar4) << 0x10) ^ 0x8000000;
          goto LAB_7151fbb4;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 0x28;
    } while (uVar2 != uVar7);
    uVar7 = 0;
  }
LAB_7151fbb4:
  if ((uVar5 & 1) != 0) {
    thunk_qNQrlu(uVar1);
  }
  return uVar7;
}


// =========================================================================
// Function: FUN_7151fd48
// Entry: 0x7151fd48 | Size: 20 bytes
// =========================================================================

undefined4 FUN_7151fd48(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71303460();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined4 **)(iVar1 + 0x10);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_7151fdb0
// Entry: 0x7151fdb0 | Size: 20 bytes
// =========================================================================

bool FUN_7151fdb0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  return iVar1 == 0x3a6 || iVar1 == 0x191;
}


// =========================================================================
// Function: FUN_7151fe18
// Entry: 0x7151fe18 | Size: 20 bytes
// =========================================================================

bool FUN_7151fe18(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  return iVar1 == 0x191;
}


// =========================================================================
// Function: FUN_7151fed0
// Entry: 0x7151fed0 | Size: 284 bytes
// =========================================================================

undefined2 * FUN_7151fed0(undefined2 *param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = (undefined4 *)(param_1 + 2);
  *puVar2 = 0;
  FUN_7136cdfc(param_1 + 0x28);
  FUN_715200ac(param_1 + 0x38);
  FUN_71520304(param_1 + 0x44);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(puVar2);
  *(undefined1 *)((int)param_1 + 0x41) = param_4;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = param_3;
  *(char *)((int)param_1 + 0x1d) = (char)param_2;
  *(undefined1 *)(param_1 + 0xf) = 3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    FUN_7136d040(param_1 + 0x28,&uStack_30);
    iVar1 = 0x5c;
  }
  else {
    if (param_2 != 0) goto LAB_7151ffc4;
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0xffff;
    iVar1 = 0x48;
  }
  *(undefined4 *)((int)param_1 + iVar1) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
LAB_7151ffc4:
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(puVar2);
  return param_1;
}


// =========================================================================
// Function: FUN_715200ac
// Entry: 0x715200ac | Size: 352 bytes
// =========================================================================

undefined4 * FUN_715200ac(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  param_1[3] = puVar1;
  puVar2 = (undefined4 *)thunk_MwhHq(0x14);
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar1[4] = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  iVar4 = puVar1[4];
  param_1[2] = iVar4;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 **)(iVar4 + 0x10) = puVar1;
  iVar4 = *(int *)(param_1[2] + 0x10);
  param_1[2] = iVar4;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 **)(iVar4 + 0x10) = puVar1;
  iVar4 = *(int *)(param_1[2] + 0x10);
  param_1[2] = iVar4;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 **)(iVar4 + 0x10) = puVar1;
  iVar4 = *(int *)(param_1[2] + 0x10);
  param_1[2] = iVar4;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 **)(iVar4 + 0x10) = puVar1;
  iVar4 = *(int *)(param_1[2] + 0x10);
  param_1[2] = iVar4;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 **)(iVar4 + 0x10) = puVar1;
  iVar4 = *(int *)(param_1[2] + 0x10);
  param_1[2] = iVar4;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined4 **)(iVar4 + 0x10) = puVar1;
  uVar3 = param_1[3];
  *(undefined4 *)(*(int *)(param_1[2] + 0x10) + 0x10) = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  return param_1;
}


// =========================================================================
// Function: FUN_71520304
// Entry: 0x71520304 | Size: 608 bytes
// =========================================================================

undefined4 * FUN_71520304(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  *(undefined1 *)(iVar1 + 0x48) = 0;
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  param_1[2] = *(undefined4 *)(param_1[2] + 0x4c);
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  param_1[2] = *(undefined4 *)(param_1[2] + 0x4c);
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  param_1[2] = *(undefined4 *)(param_1[2] + 0x4c);
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  param_1[2] = *(undefined4 *)(param_1[2] + 0x4c);
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  param_1[2] = *(undefined4 *)(param_1[2] + 0x4c);
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  param_1[2] = *(undefined4 *)(param_1[2] + 0x4c);
  iVar1 = thunk_MwhHq(0x50);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  FUN_7136cdfc(iVar1 + 0x14);
  FUN_7136cdfc(iVar1 + 0x24);
  FUN_7136cdfc(iVar1 + 0x30);
  *(undefined1 *)(iVar1 + 0x48) = 0;
  *(int *)(param_1[2] + 0x4c) = iVar1;
  uVar2 = param_1[3];
  *(undefined4 *)(*(int *)(param_1[2] + 0x4c) + 0x4c) = uVar2;
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_715208fc
// Entry: 0x715208fc | Size: 260 bytes
// =========================================================================

int FUN_715208fc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    imp_BASS_Mixer_ChannelRemove();
    imp_BASS_ChannelStop(*(undefined4 *)(param_1 + 0x20));
    imp_BASS_StreamFree(*(undefined4 *)(param_1 + 0x20));
    imp_BASS_ChannelStop(*(undefined4 *)(param_1 + 0x24));
    imp_BASS_StreamFree(*(undefined4 *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2);
  iVar3 = *(int *)(param_1 + 0x8c);
  iVar1 = *(int *)(iVar3 + 0x4c);
  *(int *)(param_1 + 0x90) = iVar1;
  if (iVar1 == iVar3) {
LAB_71520994:
    thunk_qNQrlu(iVar3);
  }
  else {
    do {
      iVar1 = *(int *)(iVar1 + 0x4c);
      thunk_qNQrlu();
      *(int *)(param_1 + 0x90) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 0x8c));
    iVar3 = iVar1;
    if (iVar1 != 0) goto LAB_71520994;
  }
  iVar3 = *(int *)(param_1 + 0x74);
  iVar1 = *(int *)(iVar3 + 0x10);
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar1 != iVar3) {
    do {
      iVar1 = *(int *)(iVar1 + 0x10);
      thunk_qNQrlu();
      *(int *)(param_1 + 0x78) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 0x74));
    iVar3 = iVar1;
    if (iVar1 == 0) goto LAB_715209dc;
  }
  thunk_qNQrlu(iVar3);
LAB_715209dc:
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_SaRJGTToWvfSPYVoQ_naeS(iVar2);
  return param_1;
}


// =========================================================================
// Function: FUN_71520b84
// Entry: 0x71520b84 | Size: 1436 bytes
// =========================================================================

void FUN_71520b84(int param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  byte *pbVar12;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  iVar1 = DAT_712017f8;
  if (*param_2 == '\0') {
    return;
  }
  if (param_3 == 0) {
    if (param_4 != 0) {
      pbVar12 = *(byte **)(param_1 + 0x74);
      if ((*(int *)(pbVar12 + 0x10) == *(int *)(param_1 + 0x78)) ||
         (*(char *)(*(int *)(pbVar12 + 0x10) + 0xc) != '\0')) {
        uVar10 = *(undefined4 *)(pbVar12 + 0x10);
        puVar9 = (undefined4 *)thunk_MwhHq(0x14);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
        *(undefined4 **)(pbVar12 + 0x10) = puVar9;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x74) + 0x10) + 0x10) = uVar10;
        pbVar12 = *(byte **)(param_1 + 0x74);
      }
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(pbVar12 + 0x10);
      uVar2 = imp_strlen(param_2);
      if (0xfffffff7 < uVar2) goto LAB_71520f84;
      if (uVar2 < 0xb) {
        iStack_58 = CONCAT31(iStack_58._1_3_,(char)(uVar2 << 1));
        uVar11 = (uint)&iStack_58 | 1;
        if (uVar2 != 0) goto LAB_71520f3c;
      }
      else {
        uVar11 = thunk_MwhHq((uVar2 | 7) + 1);
        iStack_58 = (uVar2 | 7) + 2;
        uStack_54 = uVar2;
        uStack_50 = uVar11;
LAB_71520f3c:
        imp___aeabi_memcpy(uVar11,param_2,uVar2);
      }
      *(undefined1 *)(uVar11 + uVar2) = 0;
      if ((*pbVar12 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar12 + 8));
      }
      iVar8 = 0x84;
      *(int *)pbVar12 = iStack_58;
      *(uint *)(pbVar12 + 4) = uStack_54;
      *(uint *)(pbVar12 + 8) = uStack_50;
      iVar1 = 0x10;
      iVar7 = 0xc;
      iVar6 = 0x7c;
      goto LAB_71520ef0;
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711a3818 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3818), iVar6 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3710);
      if (*pcVar4 == '\0') {
        puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3700);
        *(undefined1 *)(puVar9 + 4) = 1;
        *puVar9 = 0xaa3e9e45;
        puVar9[1] = 0x483c5d2d;
        puVar9[2] = 0xaa249f42;
        puVar9[3] = 0x9355914;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71524918,puVar9,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3710);
        *puVar5 = 1;
      }
      pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3700);
      if (pbVar12[0x10] != 0) {
        *pbVar12 = *pbVar12 ^ 0x37;
        pbVar12[1] = pbVar12[1] ^ 0xfb;
        pbVar12[2] = pbVar12[2] ^ 0x4d;
        pbVar12[3] = pbVar12[3] ^ 0xc5;
        pbVar12[0x10] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x41;
        pbVar12[5] = pbVar12[5] ^ 0x2b;
        pbVar12[6] = pbVar12[6] ^ 0x59;
        pbVar12[7] = pbVar12[7] ^ 9;
        pbVar12[8] = pbVar12[8] ^ 0x37;
        pbVar12[9] = pbVar12[9] ^ 0xfb;
        pbVar12[10] = pbVar12[10] ^ 0x4d;
        pbVar12[0xb] = pbVar12[0xb] ^ 0xc5;
        pbVar12[0xc] = pbVar12[0xc] ^ 0x41;
        pbVar12[0xd] = pbVar12[0xd] ^ 0x2b;
        pbVar12[0xe] = pbVar12[0xe] ^ 0x59;
        pbVar12[0xf] = pbVar12[0xf] ^ 9;
      }
      DAT_711a3814 = FUN_71885ba4(pbVar12,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711a3818);
    }
    iVar6 = DAT_711a3814;
    imp___aeabi_memclr4(&uStack_54,0x30);
    iStack_58 = iVar6;
    uVar10 = FUN_715216a8(&iStack_58,*(undefined4 *)(param_1 + 0x14));
    uVar10 = FUN_71521824(uVar10,param_2);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar3 = (int *)thunk_MwhHq(0x3c);
    *piVar3 = 0;
    piVar3[1] = 0;
    FUN_713a10f8(piVar3 + 2,uVar10);
    piVar3[1] = iVar1 + 0x38;
    iVar6 = *(int *)(iVar1 + 0x38);
    *piVar3 = iVar6;
    *(int **)(iVar6 + 4) = piVar3;
    *(int **)(iVar1 + 0x38) = piVar3;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
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
    puVar9 = *(undefined4 **)(param_1 + 0x8c);
    if ((puVar9[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar9[0x13] + 0x48) != '\0')) {
      uVar10 = puVar9[0x13];
      iVar1 = thunk_MwhHq(0x50);
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_7136cdfc(iVar1 + 0x14);
      FUN_7136cdfc(iVar1 + 0x24);
      FUN_7136cdfc(iVar1 + 0x30);
      *(undefined1 *)(iVar1 + 0x48) = 0;
      *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar10;
      puVar9 = *(undefined4 **)(param_1 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0x8c) = puVar9[0x13];
    *puVar9 = 1;
  }
  else {
    puVar9 = *(undefined4 **)(param_1 + 0x8c);
    if ((puVar9[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar9[0x13] + 0x48) != '\0')) {
      uVar10 = puVar9[0x13];
      iVar1 = thunk_MwhHq(0x50);
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FUN_7136cdfc(iVar1 + 0x14);
      FUN_7136cdfc(iVar1 + 0x24);
      FUN_7136cdfc(iVar1 + 0x30);
      *(undefined1 *)(iVar1 + 0x48) = 0;
      *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar10;
      puVar9 = *(undefined4 **)(param_1 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0x8c) = puVar9[0x13];
    *puVar9 = 2;
    uVar2 = imp_strlen(param_2);
    if (0xfffffff7 < uVar2) {
LAB_71520f84:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&iStack_58);
    }
    if (uVar2 < 0xb) {
      iStack_58 = CONCAT31(iStack_58._1_3_,(char)(uVar2 << 1));
      uVar11 = (uint)&iStack_58 | 1;
      if (uVar2 != 0) goto LAB_71520d2c;
    }
    else {
      uVar11 = thunk_MwhHq((uVar2 | 7) + 1);
      iStack_58 = (uVar2 | 7) + 2;
      uStack_54 = uVar2;
      uStack_50 = uVar11;
LAB_71520d2c:
      imp___aeabi_memcpy(uVar11,param_2,uVar2);
    }
    *(undefined1 *)(uVar11 + uVar2) = 0;
    if ((*(byte *)(puVar9 + 1) & 1) != 0) {
      thunk_qNQrlu(puVar9[3]);
    }
    *(char *)(puVar9 + 4) = (char)param_3;
    puVar9[1] = iStack_58;
    puVar9[2] = uStack_54;
    puVar9[3] = uStack_50;
  }
  iVar1 = 0x4c;
  iVar7 = 0x48;
  iVar6 = 0x94;
  iVar8 = 0x9c;
LAB_71520ef0:
  *(int *)(param_1 + iVar8) = *(int *)(param_1 + iVar8) + 1;
  *(undefined1 *)(*(int *)(param_1 + iVar6) + iVar7) = 1;
  *(undefined4 *)(param_1 + iVar6) = *(undefined4 *)(*(int *)(param_1 + iVar6) + iVar1);
  return;
}


// =========================================================================
// Function: FUN_715216a8
// Entry: 0x715216a8 | Size: 216 bytes
// =========================================================================

int FUN_715216a8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  if (puVar5 < *(undefined4 **)(param_1 + 0x18)) {
    puVar7 = puVar5 + 1;
    *puVar5 = param_2;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x10);
    iVar1 = (int)puVar5 - iVar8 >> 2;
    uVar6 = iVar1 + 1;
    if (0x3fffffff < uVar6) {
      FUN_713a13ac();
LAB_7152177c:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar3 = (int)*(undefined4 **)(param_1 + 0x18) - iVar8;
    uVar2 = (int)uVar3 >> 1;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffb < uVar3) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar6) goto LAB_7152177c;
      iVar4 = thunk_MwhHq(uVar6 << 2);
    }
    puVar7 = (undefined4 *)(iVar4 + iVar1 * 4);
    *puVar7 = param_2;
    imp___aeabi_memcpy4(iVar4,iVar8,(int)puVar5 - iVar8);
    puVar7 = puVar7 + 1;
    *(int *)(param_1 + 0x10) = iVar4;
    *(undefined4 **)(param_1 + 0x14) = puVar7;
    *(uint *)(param_1 + 0x18) = iVar4 + uVar6 * 4;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  *(undefined4 **)(param_1 + 0x14) = puVar7;
  return param_1;
}


// =========================================================================
// Function: FUN_71521824
// Entry: 0x71521824 | Size: 184 bytes
// =========================================================================

undefined4 FUN_71521824(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar2 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_715218a0;
  }
  else {
    uVar2 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar2;
  }
  imp___aeabi_memcpy(uVar2,param_2,uVar1);
LAB_715218a0:
  *(undefined1 *)(uVar2 + uVar1) = 0;
  FUN_71524948(param_1,&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71521ae4
// Entry: 0x71521ae4 | Size: 24 bytes
// =========================================================================

void FUN_71521ae4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  if ((puVar1[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar1[0x13] + 0x48) != '\0')) {
    uVar3 = puVar1[0x13];
    iVar2 = thunk_MwhHq(0x50);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_7136cdfc(iVar2 + 0x14);
    FUN_7136cdfc(iVar2 + 0x24);
    FUN_7136cdfc(iVar2 + 0x30);
    *(undefined1 *)(iVar2 + 0x48) = 0;
    *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
    puVar1 = *(undefined4 **)(param_1 + 0x8c);
  }
  *(undefined4 *)(param_1 + 0x8c) = puVar1[0x13];
  puVar1[0x11] = param_2;
  *puVar1 = 5;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x4c);
  return;
}


// =========================================================================
// Function: FUN_71521d98
// Entry: 0x71521d98 | Size: 24 bytes
// =========================================================================

void FUN_71521d98(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x8c);
  if ((puVar2[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar2[0x13] + 0x48) != '\0')) {
    uVar3 = puVar2[0x13];
    iVar1 = thunk_MwhHq(0x50);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_7136cdfc(iVar1 + 0x14);
    FUN_7136cdfc(iVar1 + 0x24);
    FUN_7136cdfc(iVar1 + 0x30);
    *(undefined1 *)(iVar1 + 0x48) = 0;
    *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
    puVar2 = *(undefined4 **)(param_1 + 0x8c);
  }
  *(undefined4 *)(param_1 + 0x8c) = puVar2[0x13];
  iVar1 = FUN_71ba2d10(param_2,0);
  if (iVar1 != 0) {
    param_2 = 0;
  }
  *puVar2 = 6;
  puVar2[0x11] = param_2;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x4c);
  return;
}


// =========================================================================
// Function: FUN_71521f24
// Entry: 0x71521f24 | Size: 24 bytes
// =========================================================================

void FUN_71521f24(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  if ((puVar1[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar1[0x13] + 0x48) != '\0')) {
    uVar3 = puVar1[0x13];
    iVar2 = thunk_MwhHq(0x50);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_7136cdfc(iVar2 + 0x14);
    FUN_7136cdfc(iVar2 + 0x24);
    FUN_7136cdfc(iVar2 + 0x30);
    *(undefined1 *)(iVar2 + 0x48) = 0;
    *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
    puVar1 = *(undefined4 **)(param_1 + 0x8c);
  }
  *(undefined4 *)(param_1 + 0x8c) = puVar1[0x13];
  puVar1[0x11] = param_2;
  *puVar1 = 7;
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x4c);
  return;
}


// =========================================================================
// Function: FUN_71522080
// Entry: 0x71522080 | Size: 28 bytes
// =========================================================================

void FUN_71522080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  if ((puVar1[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar1[0x13] + 0x48) != '\0')) {
    uVar2 = puVar1[0x13];
    iVar3 = thunk_MwhHq(0x50);
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    FUN_7136cdfc(iVar3 + 0x14);
    FUN_7136cdfc(iVar3 + 0x24);
    FUN_7136cdfc(iVar3 + 0x30);
    *(undefined1 *)(iVar3 + 0x48) = 0;
    *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar2;
    puVar1 = *(undefined4 **)(param_1 + 0x8c);
  }
  *(undefined4 *)(param_1 + 0x8c) = puVar1[0x13];
  *puVar1 = 8;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_7136d040(puVar1 + 5,&uStack_30);
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x4c);
  return;
}


// =========================================================================
// Function: FUN_715223b8
// Entry: 0x715223b8 | Size: 24 bytes
// =========================================================================

void FUN_715223b8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 2) {
    uVar1 = param_2 & 0xffff;
    if (0x7c < uVar1 >> 3) {
      return;
    }
    if (*(char *)(*(int *)(DAT_711f6d58 + 8) + uVar1) == '\0') {
      return;
    }
    uVar1 = *(uint *)(*(int *)(DAT_711f6d58 + 8) + uVar1 * 4 + 1000);
  }
  else if (param_3 == 1) {
    uVar1 = param_2 & 0xffff;
    if (2000 < uVar1) {
      return;
    }
    if (*(char *)(*(int *)(DAT_711f6d58 + 4) + uVar1 + 0x3e88) == '\0') {
      return;
    }
    uVar1 = *(uint *)(*(int *)(DAT_711f6d58 + 4) + uVar1 * 4);
  }
  else {
    if (param_3 != 0) {
      return;
    }
    iVar2 = *(int *)(DAT_711f6d58 + 0xac);
    if (*(ushort *)(iVar2 + 0x1f68) == param_2) goto LAB_715224bc;
    if (0xfa < (param_2 & 0xffff) >> 2) {
      return;
    }
    if (*(int *)(iVar2 + (param_2 & 0x3ff) * 4 + 0x1f8c) == 0) {
      return;
    }
    uVar1 = (uint)*(byte *)(iVar2 + (param_2 & 0x3ff) + 0x3eec);
  }
  if (uVar1 == 0) {
    return;
  }
LAB_715224bc:
  *(uint *)(param_1 + 0x44) = param_2;
  *(char *)(param_1 + 0x42) = (char)param_3;
  return;
}


// =========================================================================
// Function: FUN_71522540
// Entry: 0x71522540 | Size: 28 bytes
// =========================================================================

void FUN_71522540(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 0xb) {
    puVar1 = *(undefined4 **)(param_1 + 0x8c);
    if ((puVar1[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar1[0x13] + 0x48) != '\0')) {
      uVar3 = puVar1[0x13];
      iVar2 = thunk_MwhHq(0x50);
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      FUN_7136cdfc(iVar2 + 0x14);
      FUN_7136cdfc(iVar2 + 0x24);
      FUN_7136cdfc(iVar2 + 0x30);
      *(undefined1 *)(iVar2 + 0x48) = 0;
      *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar2;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
      puVar1 = *(undefined4 **)(param_1 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0x8c) = puVar1[0x13];
    puVar1[0x11] = param_2;
    *puVar1 = 9;
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x4c);
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715226b8
// Entry: 0x715226a4 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715226b8(void)

{
  FUN_715226b8();
  return;
}


// =========================================================================
// Function: FUN_715226b8
// Entry: 0x715226b8 | Size: 324 bytes
// =========================================================================

void FUN_715226b8(int param_1)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0x42);
  if (cVar1 == '\x02') {
    iVar4 = *(int *)(DAT_711f6d58 + 8);
    if (iVar4 == 0) {
      return;
    }
    uVar2 = *(ushort *)(param_1 + 0x44);
    if (0x7c < uVar2 >> 3) {
      return;
    }
    if (*(char *)(iVar4 + (uint)uVar2) == '\0') {
      return;
    }
    iVar4 = *(int *)(iVar4 + (uint)uVar2 * 4 + 1000);
  }
  else if (cVar1 == '\x01') {
    iVar4 = *(int *)(DAT_711f6d58 + 4);
    if (iVar4 == 0) {
      return;
    }
    uVar5 = (uint)*(ushort *)(param_1 + 0x44);
    if (2000 < uVar5) {
      return;
    }
    if (*(char *)(iVar4 + uVar5 + 0x3e88) == '\0') {
      return;
    }
    iVar4 = *(int *)(iVar4 + uVar5 * 4);
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    iVar4 = *(int *)(DAT_711f6d58 + 0xac);
    if (iVar4 == 0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if (uVar5 == *(ushort *)(iVar4 + 0x1f68)) {
      if (*(int *)(iVar4 + 0x1f6c) == 0) {
        return;
      }
      piVar3 = (int *)(*(int *)(iVar4 + 0x1f6c) + 0x130);
    }
    else {
      if (0xfa < (uVar5 & 0xffff) >> 2) {
        return;
      }
      if (*(char *)(iVar4 + (uVar5 & 0x3ff) + 0x3eec) == '\0') {
        return;
      }
      iVar4 = *(int *)(iVar4 + (uVar5 & 0x3ff) * 4 + 0x1f8c);
      if (iVar4 == 0) {
        return;
      }
      piVar3 = (int *)(iVar4 + 0x10);
    }
    iVar4 = *piVar3;
  }
  if (iVar4 == 0) {
    return;
  }
  thunk_FUN_715600f0();
  return;
}


// =========================================================================
// Function: FUN_71522890
// Entry: 0x71522890 | Size: 20 bytes
// =========================================================================

void FUN_71522890(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char cVar6;
  
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  cVar6 = *(char *)(param_1 + 0x42);
  *param_2 = cVar6;
  if (cVar6 == '\x01') {
    iVar3 = *(int *)(DAT_711f6d58 + 4);
    if (((iVar3 != 0) && (uVar1 = (uint)*(ushort *)(param_1 + 0x44), uVar1 < 0x7d1)) &&
       (*(char *)(iVar3 + uVar1 + 0x3e88) != '\0')) {
      iVar3 = *(int *)(iVar3 + uVar1 * 4);
      if (iVar3 != 0) {
        uVar1 = *(uint *)(iVar3 + 0xc);
      }
      if (iVar3 != 0 && uVar1 != 0) {
        piVar5 = (int *)(DAT_711a3938 + 0x1389c);
        iVar2 = *piVar5;
        if (iVar2 == 0) {
          iVar2 = FUN_713c301c(0);
          if (iVar2 == 0) {
            iVar2 = *piVar5;
          }
          else {
            thunk_MwhHq(0x3a0);
            iVar2 = FUN_715ba834();
            *piVar5 = iVar2;
          }
        }
        iVar2 = thunk_FUN_715bf66c(iVar2);
        if (iVar2 != 0) {
          piVar5 = (int *)(DAT_711a3938 + 0x1389c);
          iVar2 = *piVar5;
          if (iVar2 == 0) {
            iVar2 = FUN_713c301c(0);
            if (iVar2 == 0) {
              iVar2 = *piVar5;
            }
            else {
              thunk_MwhHq(0x3a0);
              iVar2 = FUN_715ba834();
              *piVar5 = iVar2;
            }
          }
          iVar2 = thunk_FUN_715c4004(iVar2);
          if (iVar2 == *(int *)(iVar3 + 0xc)) {
            param_2[2] = '\x01';
          }
        }
        iVar2 = thunk_FUN_715f4594(iVar3);
        if (iVar2 == 0) {
          cVar6 = false;
          param_2[3] = '\x01';
          iVar2 = *(int *)(iVar3 + 0xc);
          param_2[4] = '\0';
          uVar4 = *(undefined4 *)(iVar2 + 0x5d0);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x5d8),uVar4);
          if (iVar3 == 0) {
            iVar3 = FUN_71ba2cf0(uVar4,*(undefined4 *)(iVar2 + 0x5cc));
            cVar6 = iVar3 == 0;
            if ((bool)cVar6) {
              param_2[4] = '\x01';
            }
          }
          uVar4 = *(undefined4 *)(iVar2 + 0x5e8);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x5f0),uVar4);
          if ((iVar3 == 0) &&
             (iVar3 = FUN_71ba2cf0(uVar4,*(undefined4 *)(iVar2 + 0x5e4)), iVar3 == 0)) {
            cVar6 = cVar6 + '\x01';
            param_2[4] = cVar6;
          }
          uVar4 = *(undefined4 *)(iVar2 + 0x600);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x608),uVar4);
          if ((iVar3 == 0) &&
             (iVar3 = FUN_71ba2cf0(uVar4,*(undefined4 *)(iVar2 + 0x5fc)), iVar3 == 0)) {
            cVar6 = cVar6 + '\x01';
            param_2[4] = cVar6;
          }
          uVar4 = *(undefined4 *)(iVar2 + 0x618);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x620),uVar4);
          if ((iVar3 == 0) &&
             (iVar3 = FUN_71ba2cf0(uVar4,*(undefined4 *)(iVar2 + 0x614)), iVar3 == 0)) {
            cVar6 = cVar6 + '\x01';
            param_2[4] = cVar6;
          }
          uVar4 = *(undefined4 *)(iVar2 + 0x630);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x638),uVar4);
          if ((iVar3 == 0) &&
             (iVar3 = FUN_71ba2cf0(uVar4,*(undefined4 *)(iVar2 + 0x62c)), iVar3 == 0)) {
            cVar6 = cVar6 + '\x01';
            param_2[4] = cVar6;
          }
          uVar4 = *(undefined4 *)(iVar2 + 0x648);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar2 + 0x650),uVar4);
          if (iVar3 == 0) {
            iVar3 = FUN_71ba2cf0(uVar4,*(undefined4 *)(iVar2 + 0x644));
            if (iVar3 == 0) {
              param_2[4] = cVar6 + '\x01';
            }
            return;
          }
        }
      }
    }
  }
  else if (((cVar6 == '\0') && (*(int *)(DAT_711f6d58 + 0xac) != 0)) &&
          (*(uint *)(param_1 + 0x44) == (uint)*(ushort *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f68)))
  {
    param_2[1] = '\x01';
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71522e10
// Entry: 0x71522e10 | Size: 772 bytes
// =========================================================================

void FUN_71522e10(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_a9;
  undefined1 uStack_a5;
  undefined1 auStack_a4 [48];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_64 [48];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  thunk_FUN_714e0378(*(undefined4 *)(DAT_711a3938 + 0x13898),auStack_64);
  cVar1 = *(char *)(param_1 + 0x1d);
  if (cVar1 == '\x02') {
    puVar2 = *(undefined4 **)(param_1 + 0x8c);
    if ((puVar2[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar2[0x13] + 0x48) != '\0')) {
      uVar3 = puVar2[0x13];
      iVar4 = thunk_MwhHq(0x50);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      FUN_7136cdfc(iVar4 + 0x14);
      FUN_7136cdfc(iVar4 + 0x24);
      FUN_7136cdfc(iVar4 + 0x30);
      *(undefined1 *)(iVar4 + 0x48) = 0;
      *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
      puVar2 = *(undefined4 **)(param_1 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0x8c) = puVar2[0x13];
    *(undefined1 *)(puVar2 + 8) = 2;
    *puVar2 = 10;
  }
  else {
    if (cVar1 == '\x01') {
      puVar2 = *(undefined4 **)(param_1 + 0x8c);
      if ((puVar2[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar2[0x13] + 0x48) != '\0')) {
        uVar3 = puVar2[0x13];
        iVar4 = thunk_MwhHq(0x50);
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        FUN_7136cdfc(iVar4 + 0x14);
        FUN_7136cdfc(iVar4 + 0x24);
        FUN_7136cdfc(iVar4 + 0x30);
        *(undefined1 *)(iVar4 + 0x48) = 0;
        *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar4;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
        puVar2 = *(undefined4 **)(param_1 + 0x8c);
      }
      *(undefined4 *)(param_1 + 0x8c) = puVar2[0x13];
      *puVar2 = 10;
      *(undefined1 *)(puVar2 + 8) = 1;
      FUN_7136d040(puVar2 + 9,param_1 + 0x50);
      puVar2[0xc] = uStack_34;
      puVar2[0xd] = uStack_30;
      puVar2[0xe] = uStack_2c;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
      goto LAB_71523108;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x44) == 0xffff) {
      return;
    }
    uStack_6c = 0xc479c000;
    uStack_74 = 0;
    uStack_70 = 0;
    thunk_FUN_715226b8(param_1,auStack_a4);
    FUN_71522890(param_1,&uStack_a9);
    puVar2 = *(undefined4 **)(param_1 + 0x8c);
    if ((puVar2[0x13] == *(int *)(param_1 + 0x90)) || (*(char *)(puVar2[0x13] + 0x48) != '\0')) {
      uVar3 = puVar2[0x13];
      iVar4 = thunk_MwhHq(0x50);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      FUN_7136cdfc(iVar4 + 0x14);
      FUN_7136cdfc(iVar4 + 0x24);
      FUN_7136cdfc(iVar4 + 0x30);
      *(undefined1 *)(iVar4 + 0x48) = 0;
      *(int *)(*(int *)(param_1 + 0x8c) + 0x4c) = iVar4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x4c) + 0x4c) = uVar3;
      puVar2 = *(undefined4 **)(param_1 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0x8c) = puVar2[0x13];
    *(undefined1 *)(puVar2 + 8) = 0;
    *puVar2 = 10;
    puVar2[9] = uStack_74;
    puVar2[10] = uStack_70;
    puVar2[0xb] = uStack_6c;
    puVar2[0xc] = uStack_34;
    puVar2[0xd] = uStack_30;
    puVar2[0xe] = uStack_2c;
    puVar2[0xf] = uStack_a9;
    *(undefined1 *)(puVar2 + 0x10) = uStack_a5;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x48) = 1;
LAB_71523108:
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x4c);
  return;
}


// =========================================================================
// Function: IqMSfCYnqVurGTxtSfpEb
// Entry: 0x71523314 | Size: 424 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IqMSfCYnqVurGTxtSfpEb(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar3 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_50 | 1;
    if (uVar3 != 0) goto LAB_71523394;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_50 = (uVar3 | 7) + 2;
    uStack_4c = uVar3;
    uStack_48 = uVar6;
LAB_71523394:
    imp___aeabi_memcpy(uVar6,param_2,uVar3);
  }
  uVar2 = uStack_50;
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar1 = DAT_712017fc;
  if ((uStack_50 & 1) == 0) {
    uStack_5c = uStack_50;
    uStack_58 = uStack_4c;
    uStack_54 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_5c,uStack_48,uStack_4c);
  }
  iVar5 = 0x14;
  piStack_30 = (int *)thunk_MwhHq(0x14);
  *piStack_30 = (int)&DAT_70b0e9a0;
  piStack_30[1] = param_1;
  piStack_30[2] = uStack_5c;
  piStack_30[3] = uStack_58;
  piStack_30[4] = uStack_54;
  piVar4 = aiStack_40;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  FUN_717ccb10(uVar1,piVar4);
  if (piStack_30 == piVar4) {
    iVar5 = 0x10;
  }
  else {
    piVar4 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_7152346c;
  }
  (**(code **)(*piVar4 + iVar5))();
LAB_7152346c:
  if ((uStack_5c & 1) != 0) {
    thunk_qNQrlu(uStack_54);
  }
  if ((uVar2 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7152366c
// Entry: 0x7152366c | Size: 2244 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7152366c(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int *piVar16;
  bool bVar17;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar5 = (undefined4 *)0x0;
  if (*param_1 == '\0') {
LAB_71523770:
    puVar14 = *(undefined4 **)(param_1 + 0x88);
    if (puVar14 != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(param_1 + 0x94);
    }
    if (puVar14 != (undefined4 *)0x0 && puVar14 != puVar5) {
      piVar16 = (int *)(param_1 + 0x90);
      puVar13 = (undefined4 *)((uint)&uStack_48 | 4);
      pcVar6 = param_1 + 100;
      puVar5 = puVar13 + 3;
      pcVar7 = param_1 + 0x50;
      pcVar8 = param_1 + 0x34;
      while (*(char *)(puVar14 + 0x12) != '\0') {
        *(undefined4 *)(param_1 + 0x88) = puVar14[0x13];
        switch(*puVar14) {
        case 1:
          iVar11 = 0x48;
          *param_1 = '\x01';
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
          iVar3 = 0x4c;
          goto LAB_715236c4;
        case 2:
          if ((puVar14[1] & 1) == 0) {
            uStack_48 = puVar14[1];
            uStack_44 = puVar14[2];
            uStack_40 = puVar14[3];
          }
          else {
            FUN_712f6d58(&uStack_48,puVar14[3],puVar14[2]);
          }
          cVar1 = *(char *)(puVar14 + 4);
          param_1[0x1c] = cVar1;
          uStack_3c = CONCAT31(uStack_3c._1_3_,cVar1);
          thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                    (param_1 + 8,&uStack_48);
          if (*(int *)(param_1 + 0x20) != 0) {
            param_1[0x1e] = '\x03';
            imp_BASS_Mixer_ChannelRemove();
            imp_BASS_ChannelStop(*(undefined4 *)(param_1 + 0x20));
            imp_BASS_StreamFree(*(undefined4 *)(param_1 + 0x20));
            imp_BASS_ChannelStop(*(undefined4 *)(param_1 + 0x24));
            imp_BASS_StreamFree(*(undefined4 *)(param_1 + 0x24));
            param_1[0x20] = '\0';
            param_1[0x21] = '\0';
            param_1[0x22] = '\0';
            param_1[0x23] = '\0';
            param_1[0x24] = '\0';
            param_1[0x25] = '\0';
            param_1[0x26] = '\0';
            param_1[0x27] = '\0';
          }
          uVar4 = FUN_71886108();
          *(undefined4 *)(param_1 + 0x38) = uVar4;
          param_1[0x1e] = '\x04';
          if ((uStack_48 & 1) != 0) {
            thunk_qNQrlu(uStack_40);
          }
          break;
        case 3:
          param_1[0x40] = *(char *)(puVar14 + 0x11);
          break;
        case 4:
          iVar3 = 0;
          if (*(char *)(puVar14 + 0x11) != '\0') {
            iVar3 = *(int *)(param_1 + 0x24);
          }
          if (*(char *)(puVar14 + 0x11) != '\0' && iVar3 != 0) {
            imp_BASS_ChannelStop();
          }
          break;
        case 5:
          uVar4 = puVar14[0x11];
          *(undefined4 *)(param_1 + 0x30) = uVar4;
          iVar3 = FUN_71ba2cf0(uVar4,0xbf800000);
          if (((iVar3 == 0) && (*(int *)(param_1 + 0x20) != 0)) && ((byte)param_1[0x1e] - 1 < 2)) {
            param_1[0x1e] = '\x05';
            uVar4 = FUN_71886108();
            *(undefined4 *)(param_1 + 0x38) = uVar4;
          }
          break;
        case 6:
          *(undefined4 *)pcVar8 = puVar14[0x11];
          break;
        case 7:
          cVar1 = param_1[0x1d];
          uVar4 = puVar14[0x11];
          if (cVar1 != '\x02') {
            iVar3 = *(int *)(param_1 + 0x24);
            if (iVar3 != 0) {
              uVar15 = FUN_71ba21e8(uVar4,0x3dcccccd);
              imp_BASS_ChannelSet3DAttributes(iVar3,0,uVar15,uVar4,0x168,0x168,0);
              cVar1 = param_1[0x1d];
            }
            pcVar12 = param_1 + 0x5c;
            if ((cVar1 == '\x01') || (pcVar12 = param_1 + 0x48, cVar1 == '\0')) {
              *(undefined4 *)pcVar12 = uVar4;
            }
          }
          *(undefined4 *)pcVar6 = uVar4;
          break;
        case 8:
          uStack_48 = puVar14[5];
          uStack_44 = puVar14[6];
          uStack_40 = puVar14[7];
          if (param_1[0x1d] == '\x01') {
            FUN_7136d040(pcVar7,&uStack_48);
            uStack_60 = *(undefined4 *)(param_1 + 0x54);
            uStack_5c = *(undefined4 *)(param_1 + 0x58);
            uStack_64 = *(undefined4 *)pcVar7;
            if (*(int *)(param_1 + 0x24) != 0) {
              imp_BASS_ChannelSet3DPosition
                        (*(int *)(param_1 + 0x24),&uStack_64,&DAT_70081f20,&DAT_70081f20);
              imp_BASS_Set3DFactors(0xbf800000,0,0xbf800000);
              imp_BASS_Apply3D();
            }
          }
          break;
        case 9:
          iVar3 = puVar14[0x11];
          if (*(int *)(param_1 + 0x28) != 0) {
            imp_BASS_ChannelRemoveFX(*(undefined4 *)(param_1 + 0x24));
          }
          param_1[0x2c] = (char)iVar3;
          param_1[0x28] = '\0';
          param_1[0x29] = '\0';
          param_1[0x2a] = '\0';
          param_1[0x2b] = '\0';
          if (iVar3 != 0) {
            uVar4 = imp_BASS_ChannelSetFX(*(undefined4 *)(param_1 + 0x24),iVar3 + -1,0x14);
            *(undefined4 *)(param_1 + 0x28) = uVar4;
          }
          break;
        case 10:
          uStack_48 = puVar14[8];
          uStack_44 = puVar14[9];
          uStack_40 = puVar14[10];
          uStack_3c = puVar14[0xb];
          uStack_38 = puVar14[0xc];
          uStack_34 = puVar14[0xd];
          uStack_30 = puVar14[0xe];
          uStack_2c = puVar14[0xf];
          uStack_28 = puVar14[0x10];
          uVar10 = uStack_48 & 0xff;
          if (uVar10 == 2) {
            if (param_1[0x1e] == '\x02') {
              uVar4 = *(undefined4 *)pcVar8;
LAB_71523c60:
              FUN_717c2074(&DAT_71201664,0x1a);
              uVar15 = FUN_71ba1b94();
              uVar15 = FUN_71ba13e0(uVar15,0x42c80000);
              FUN_717c2074(&DAT_71201664,0x28);
              uVar9 = FUN_71ba1b94();
              uVar9 = FUN_71ba13e0(uVar9,0x42c80000);
              uVar15 = FUN_71ba21e8(uVar15,uVar9);
LAB_71523ed0:
              uVar4 = FUN_71ba21e8(uVar4,uVar15);
              iVar3 = FUN_71ba2d10(uVar4,0);
              if (iVar3 != 0) {
                uVar4 = 0;
              }
              imp_BASS_ChannelSetAttribute(*(undefined4 *)(param_1 + 0x24),2,uVar4);
            }
          }
          else if (uVar10 == 1) {
            uVar4 = FUN_715ec748(pcVar7,puVar5);
            *(undefined4 *)pcVar6 = uVar4;
            if (param_1[0x1e] == '\x02') {
              uVar15 = *(undefined4 *)(param_1 + 0x5c);
              iVar3 = FUN_71ba2d70(uVar15,0);
              if (iVar3 != 0) {
                uVar4 = FUN_71ba13e0(uVar4,uVar15);
                uVar4 = FUN_71ba240c(0x3f800000,uVar4);
                uVar4 = FUN_71ba21e8(uVar4,*(undefined4 *)pcVar8);
                goto LAB_71523c60;
              }
            }
          }
          else if (uVar10 == 0) {
            iVar3 = imp_memcmp(param_1 + 0x68,&uStack_2c,5);
            if ((iVar3 != 0) && (param_1[0x1e] == '\x02')) {
              param_1[0x6c] = (char)uStack_28;
              *(undefined4 *)(param_1 + 0x68) = uStack_2c;
              cVar1 = param_1[0x68];
              bVar17 = cVar1 == '\x01';
              if (bVar17) {
                cVar1 = param_1[0x6a];
              }
              if (((bVar17 && cVar1 == '\0') && (param_1[0x6b] != '\0')) && (param_1[0x2c] == '\0'))
              {
                if (*(int *)(param_1 + 0x28) != 0) {
                  imp_BASS_ChannelRemoveFX(*(undefined4 *)(param_1 + 0x24));
                }
                uVar4 = imp_BASS_ChannelSetFX(*(undefined4 *)(param_1 + 0x24),0x10013,0);
                *(undefined4 *)(param_1 + 0x28) = uVar4;
                imp_BASS_FXGetParameters(uVar4,&uStack_64);
                uStack_64 = 0;
                uStack_58 = 0x3fd9999a;
                uStack_60 = 0x44fa0000;
                if (param_1[0x6c] == '\0') {
                  uStack_60 = 0x447a0000;
                }
                imp_BASS_FXSetParameters(*(undefined4 *)(param_1 + 0x28),&uStack_64);
                imp_BASS_ChannelUpdate(*(undefined4 *)(param_1 + 0x28),0);
              }
              else if (param_1[0x2c] == '\0') {
                if (*(int *)(param_1 + 0x28) != 0) {
                  imp_BASS_ChannelRemoveFX(*(undefined4 *)(param_1 + 0x24));
                }
                param_1[0x28] = '\0';
                param_1[0x29] = '\0';
                param_1[0x2a] = '\0';
                param_1[0x2b] = '\0';
              }
            }
            uStack_60 = puVar13[1];
            uStack_5c = puVar13[2];
            uStack_64 = *puVar13;
            uStack_6c = puVar13[4];
            uStack_68 = puVar13[5];
            uStack_70 = *puVar5;
            puVar14 = &uStack_70;
            if (param_1[0x69] == '\0' && param_1[0x6a] == '\0') {
              puVar14 = &uStack_64;
            }
            imp_BASS_ChannelSet3DPosition(*(undefined4 *)(param_1 + 0x24),puVar14,0,0);
            imp_BASS_Set3DFactors(0xbf800000,0,0xbf800000);
            imp_BASS_Apply3D();
            uVar4 = FUN_715ec748(puVar13,puVar5);
            *(undefined4 *)pcVar6 = uVar4;
            if (param_1[0x1e] == '\x02') {
              uVar15 = *(undefined4 *)(param_1 + 0x48);
              iVar3 = FUN_71ba2d70(uVar15,0);
              if (iVar3 != 0) {
                uVar4 = FUN_71ba13e0(uVar4,uVar15);
                uVar15 = 0x3f800000;
                uVar4 = FUN_71ba240c(0x3f800000,uVar4);
                uVar4 = FUN_71ba21e8(uVar4,*(undefined4 *)pcVar8);
                if (uStack_2c._1_1_ == '\0' && uStack_2c._2_1_ == '\0') {
                  FUN_717c2074(&DAT_71201664,0x1a);
                  uVar15 = FUN_71ba1b94();
                  uVar15 = FUN_71ba13e0(uVar15,0x42c80000);
                  FUN_717c2074(&DAT_71201664,0x28);
                  uVar9 = FUN_71ba1b94();
                  uVar9 = FUN_71ba13e0(uVar9,0x42c80000);
                  uVar15 = FUN_71ba21e8(uVar15,uVar9);
                }
                goto LAB_71523ed0;
              }
            }
          }
        }
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x48) = 0;
        puVar14 = *(undefined4 **)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x4c);
        if (puVar14 == (undefined4 *)0x0) {
          return;
        }
        if (puVar14 == *(undefined4 **)(param_1 + 0x94)) {
          return;
        }
      }
    }
    return;
  }
  uVar10 = *(uint *)(param_1 + 0x70);
  if (uVar10 != 0) {
    uVar2 = *(uint *)(param_1 + 0x7c);
    bVar17 = uVar10 != uVar2;
    if (bVar17) {
      uVar2 = (uint)*(byte *)(uVar10 + 0xc);
    }
    if (bVar17 && uVar2 != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(uVar10 + 0x10);
      param_1[0x1c] = '\0';
      thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(param_1 + 8);
      if (*(int *)(param_1 + 0x20) != 0) {
        param_1[0x1e] = '\x03';
        imp_BASS_Mixer_ChannelRemove();
        imp_BASS_ChannelStop(*(undefined4 *)(param_1 + 0x20));
        imp_BASS_StreamFree(*(undefined4 *)(param_1 + 0x20));
        imp_BASS_ChannelStop(*(undefined4 *)(param_1 + 0x24));
        imp_BASS_StreamFree(*(undefined4 *)(param_1 + 0x24));
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
      }
      uVar4 = FUN_71886108();
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      param_1[0x1e] = '\x04';
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      *(undefined1 *)(*(int *)(param_1 + 0x78) + 0xc) = 0;
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x78) + 0x10);
      *(undefined4 **)(param_1 + 0x78) = puVar5;
      *param_1 = '\0';
      goto LAB_71523770;
    }
  }
  piVar16 = (int *)(param_1 + 0x78);
  iVar11 = 0xc;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  iVar3 = 0x10;
LAB_715236c4:
  *(undefined1 *)(*piVar16 + iVar11) = 0;
  *piVar16 = *(int *)(*piVar16 + iVar3);
  return;
}


// =========================================================================
// Function: nhUhchwJXGCcTngxsDecAoFoYj_
// Entry: 0x715246d0 | Size: 180 bytes
// =========================================================================

undefined8 nhUhchwJXGCcTngxsDecAoFoYj_(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar2 = *(int **)(DAT_711a381c + 4);
  while( true ) {
    if (piVar2 == *(int **)(DAT_711a381c + 8)) {
      return 0xbff0000000000000;
    }
    iVar3 = *piVar2;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) == param_1)) break;
    piVar2 = piVar2 + 1;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar3 + 4,0xbff00000);
  if (*(int *)(iVar3 + 0x24) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = imp_BASS_ChannelGetPosition(*(int *)(iVar3 + 0x24),0);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    imp_BASS_ChannelBytes2Seconds(*(undefined4 *)(iVar3 + 0x24),uVar1,(int)uVar4,uVar1);
    FUN_71ba242c();
    uVar4 = FUN_71ba1638();
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar3 + 4);
  return uVar4;
}


// =========================================================================
// Function: VSQC_ozydXYlNpJIFQbqJ_kVPttoM
// Entry: 0x71524864 | Size: 236 bytes
// =========================================================================

undefined8 VSQC_ozydXYlNpJIFQbqJ_kVPttoM(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  piVar3 = *(int **)(DAT_711a381c + 4);
  while( true ) {
    if (piVar3 == *(int **)(DAT_711a381c + 8)) {
      return 0xbff0000000000000;
    }
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x14) == param_1)) break;
    piVar3 = piVar3 + 1;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2 + 4);
  if ((*(int *)(iVar2 + 0x24) == 0) ||
     (lVar4 = imp_BASS_ChannelGetPosition(*(int *)(iVar2 + 0x24),0), lVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = imp_BASS_ChannelGetLength(*(undefined4 *)(iVar2 + 0x24),0);
    uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
    imp_BASS_ChannelBytes2Seconds(*(undefined4 *)(iVar2 + 0x24),uVar1,(int)uVar5,uVar1);
    uVar1 = FUN_71ba242c();
    FUN_71ba0b38(*(undefined4 *)(iVar2 + 0x30),uVar1);
    uVar5 = FUN_71ba1638();
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2 + 4);
  return uVar5;
}


// =========================================================================
// Function: FUN_71524948
// Entry: 0x71524948 | Size: 272 bytes
// =========================================================================

void FUN_71524948(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  
  bVar3 = *param_2;
  uVar10 = *(uint *)(param_2 + 4);
  if ((bVar3 & 1) == 0) {
    uVar10 = (uint)(bVar3 >> 1);
  }
  iVar4 = 0x33;
  if (0x31 < uVar10) {
    iVar4 = uVar10 + 1;
  }
  iVar4 = imp_malloc(iVar4);
  pbVar7 = *(byte **)(param_2 + 8);
  if ((bVar3 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  imp___aeabi_memcpy(iVar4,pbVar7,uVar10);
  *(undefined1 *)(iVar4 + uVar10) = 0;
  piVar9 = *(int **)(param_1 + 8);
  if (piVar9 < *(int **)(param_1 + 0xc)) {
    piVar8 = piVar9 + 1;
    *piVar9 = iVar4;
  }
  else {
    iVar11 = *(int *)(param_1 + 4);
    iVar1 = (int)piVar9 - iVar11 >> 2;
    uVar10 = iVar1 + 1;
    if (0x3fffffff < uVar10) {
      FUN_713a1344();
LAB_71524a54:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar5 = (int)*(int **)(param_1 + 0xc) - iVar11;
    uVar2 = (int)uVar5 >> 1;
    if (uVar10 < uVar2) {
      uVar10 = uVar2;
    }
    if (0x7ffffffb < uVar5) {
      uVar10 = 0x3fffffff;
    }
    if (uVar10 == 0) {
      iVar6 = 0;
    }
    else {
      if (0x3fffffff < uVar10) goto LAB_71524a54;
      iVar6 = thunk_MwhHq(uVar10 << 2);
    }
    piVar8 = (int *)(iVar6 + iVar1 * 4);
    *piVar8 = iVar4;
    imp___aeabi_memcpy4(iVar6,iVar11,(int)piVar9 - iVar11);
    piVar8 = piVar8 + 1;
    *(int *)(param_1 + 4) = iVar6;
    *(int **)(param_1 + 8) = piVar8;
    *(uint *)(param_1 + 0xc) = iVar6 + uVar10 * 4;
    if (iVar11 != 0) {
      thunk_qNQrlu(iVar11);
    }
  }
  *(int **)(param_1 + 8) = piVar8;
  return;
}


// =========================================================================
// Function: FUN_71524e40
// Entry: 0x71524e40 | Size: 48 bytes
// =========================================================================

void FUN_71524e40(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71524f8c
// Entry: 0x71524f8c | Size: 24 bytes
// =========================================================================

void FUN_71524f8c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: thunk_FUN_71524ff4
// Entry: 0x71524fbc | Size: 4 bytes
// =========================================================================

bool thunk_FUN_71524ff4(void)

{
  bool bVar1;
  undefined4 uVar2;
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
  byte bVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3824 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3824), iVar7 != 0)) {
    thunk_raw_10ab3090(0x71b450e5,&DAT_711a3820,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3824);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3820);
  if (DAT_711a3828 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3730);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3720);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar6 = DAT_70081f4c;
      uVar5 = DAT_70081f48;
      uVar4 = DAT_70081f44;
      uVar3 = DAT_70081f40;
      uVar2 = DAT_70081f3c;
      *puVar10 = DAT_70081f38;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      puVar10[4] = uVar5;
      puVar10[5] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e058,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3730);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3720);
    if (*(char *)(iVar7 + 0x18) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0x59bd715 >> iVar14) |
                 (byte)(0x213fa5c5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0x213fa5c5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar16 = uVar9 == 0;
        bVar1 = (0x16 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar16 && bVar1);
      *(undefined1 *)(iVar7 + 0x18) = 0;
    }
    imp_BASS_SetConfigPtr(0x10);
    imp_BASS_SetConfig(0x15,1);
    imp_BASS_SetConfig(0xb,10000);
    imp_BASS_SetConfig(0x3c,1);
    imp_BASS_SetConfig(0xc,1000);
    imp_BASS_SetConfig(0x2a,1);
    bVar16 = false;
    imp_BASS_SetConfig(0,700);
    imp_BASS_SetConfig(0x2d,0x50000);
    imp_BASS_SetConfig(1,10);
    imp_BASS_SetConfig(0x18,8);
    imp_BASS_SetConfig(10,2);
    iVar7 = imp_BASS_Init(0xffffffff,48000,6,0,0);
    if (iVar7 != 0) {
      DAT_711a3828 = imp_BASS_GetDevice();
      imp_BASS_Set3DFactors(0x3f800000,0,0);
      imp_BASS_Set3DPosition(&DAT_70081f2c,&DAT_70081f2c,&DAT_70081f2c,&DAT_70081f2c);
      imp_BASS_Apply3D();
      bVar16 = true;
    }
  }
  else {
    iVar7 = imp_BASS_SetDevice();
    bVar16 = iVar7 != 0;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3820);
  return bVar16;
}


// =========================================================================
// Function: FUN_71524ff4
// Entry: 0x71524ff4 | Size: 184 bytes
// =========================================================================

bool FUN_71524ff4(void)

{
  bool bVar1;
  undefined4 uVar2;
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
  byte bVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3824 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3824), iVar7 != 0)) {
    thunk_raw_10ab3090(0x71b450e5,&DAT_711a3820,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3824);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3820);
  if (DAT_711a3828 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3730);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3720);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar6 = DAT_70081f4c;
      uVar5 = DAT_70081f48;
      uVar4 = DAT_70081f44;
      uVar3 = DAT_70081f40;
      uVar2 = DAT_70081f3c;
      *puVar10 = DAT_70081f38;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      puVar10[4] = uVar5;
      puVar10[5] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e058,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3730);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3720);
    if (*(char *)(iVar7 + 0x18) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0x59bd715 >> iVar14) |
                 (byte)(0x213fa5c5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0x213fa5c5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar16 = uVar9 == 0;
        bVar1 = (0x16 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar16 && bVar1);
      *(undefined1 *)(iVar7 + 0x18) = 0;
    }
    imp_BASS_SetConfigPtr(0x10);
    imp_BASS_SetConfig(0x15,1);
    imp_BASS_SetConfig(0xb,10000);
    imp_BASS_SetConfig(0x3c,1);
    imp_BASS_SetConfig(0xc,1000);
    imp_BASS_SetConfig(0x2a,1);
    bVar16 = false;
    imp_BASS_SetConfig(0,700);
    imp_BASS_SetConfig(0x2d,0x50000);
    imp_BASS_SetConfig(1,10);
    imp_BASS_SetConfig(0x18,8);
    imp_BASS_SetConfig(10,2);
    iVar7 = imp_BASS_Init(0xffffffff,48000,6,0,0);
    if (iVar7 != 0) {
      DAT_711a3828 = imp_BASS_GetDevice();
      imp_BASS_Set3DFactors(0x3f800000,0,0);
      imp_BASS_Set3DPosition(&DAT_70081f2c,&DAT_70081f2c,&DAT_70081f2c,&DAT_70081f2c);
      imp_BASS_Apply3D();
      bVar16 = true;
    }
  }
  else {
    iVar7 = imp_BASS_SetDevice();
    bVar16 = iVar7 != 0;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3820);
  return bVar16;
}


// =========================================================================
// Function: FUN_715257d0
// Entry: 0x715257d0 | Size: 1384 bytes
// =========================================================================

void FUN_715257d0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint auStack_48 [9];
  
  FUN_717ef3ac();
  piVar3 = DAT_710eb1b8;
  pcVar2 = DAT_70b42048;
  pcVar1 = DAT_70b42044;
  do {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1);
    piVar13 = *(int **)(param_1 + 8);
    for (piVar12 = *(int **)(param_1 + 4); piVar12 != piVar13; piVar12 = piVar12 + 1) {
      iVar14 = *piVar12;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar14 + 4);
      if (*(char *)(iVar14 + 0x1e) != '\0') {
        FUN_7152366c(iVar14);
        cVar4 = *(char *)(iVar14 + 0x1e);
        if (cVar4 == '\x04') {
          thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
          if (DAT_712016d4 == 0) {
            cVar4 = *(char *)(iVar14 + 0x1e);
            goto LAB_7152595c;
          }
          if (*(char *)(iVar14 + 0x1c) == '\x01') {
            FUN_71526338(auStack_48,&DAT_711f6bd0,iVar14 + 8);
            uVar9 = auStack_48[2];
            if ((auStack_48[0] & 1) == 0) {
              uVar9 = (uint)auStack_48 | 1;
            }
            uVar7 = imp_BASS_StreamCreateFile(0,uVar9,0,0,0,0,0x220004);
            *(undefined4 *)(iVar14 + 0x20) = uVar7;
            if ((auStack_48[0] & 1) != 0) {
              thunk_qNQrlu(auStack_48[2]);
              uVar7 = *(undefined4 *)(iVar14 + 0x20);
            }
            imp_BASS_ChannelGetInfo(uVar7,auStack_48);
            uVar7 = 0x20004;
            if (*(char *)(iVar14 + 0x1d) != '\x02') {
              uVar7 = 0x2000c;
            }
LAB_71525ab4:
            uVar7 = imp_BASS_Mixer_StreamCreate(auStack_48[0],1,uVar7);
            *(undefined4 *)(iVar14 + 0x24) = uVar7;
            imp_BASS_Mixer_StreamAddChannel(uVar7,*(undefined4 *)(iVar14 + 0x20),0x400000);
          }
          else if (*(char *)(iVar14 + 0x1c) == '\0') {
            iVar6 = *(int *)(iVar14 + 0x10);
            if ((*(byte *)(iVar14 + 8) & 1) == 0) {
              iVar6 = iVar14 + 9;
            }
            uVar7 = imp_BASS_StreamCreateURL(iVar6,0,0x200000,0,0);
            *(undefined4 *)(iVar14 + 0x20) = uVar7;
            imp_BASS_ChannelGetInfo(uVar7,auStack_48);
            uVar7 = 0xc;
            if (*(char *)(iVar14 + 0x1d) == '\x02') {
              uVar7 = 4;
            }
            goto LAB_71525ab4;
          }
          *(undefined1 *)(iVar14 + 0x1e) = 2;
          if (*(int *)(iVar14 + 0x24) != 0) {
            imp_BASS_ChannelPlay(*(undefined4 *)(iVar14 + 0x20),0);
          }
          cVar4 = *(char *)(iVar14 + 0x1d);
          if (cVar4 != '\0') {
            if (cVar4 == '\x02') goto LAB_71525bd8;
            if (cVar4 == '\x01') {
              uStack_54 = *(undefined4 *)(iVar14 + 0x50);
              uStack_50 = *(undefined4 *)(iVar14 + 0x54);
              uStack_4c = *(undefined4 *)(iVar14 + 0x58);
              imp_BASS_ChannelSet3DPosition
                        (*(undefined4 *)(iVar14 + 0x24),&uStack_54,&DAT_70081f2c,&DAT_70081f2c);
              uVar11 = *(undefined4 *)(iVar14 + 0x5c);
              uVar7 = FUN_71ba21e8(uVar11,0x3dcccccd);
              imp_BASS_ChannelSet3DAttributes
                        (*(undefined4 *)(iVar14 + 0x24),0,uVar7,uVar11,0x168,0x168,0);
              imp_BASS_Set3DFactors(0xbf800000,0,0xbf800000);
              imp_BASS_Apply3D();
              goto LAB_71525bd8;
            }
            goto LAB_71525c04;
          }
          uVar11 = *(undefined4 *)(iVar14 + 0x48);
          uVar7 = FUN_71ba21e8(uVar11,0x3dcccccd);
          imp_BASS_ChannelSet3DAttributes
                    (*(undefined4 *)(iVar14 + 0x24),0,uVar7,uVar11,0x168,0x168,0);
LAB_71525bd8:
          if (*(byte *)(iVar14 + 0x2c) != 1) {
            imp_BASS_ChannelSetFX(*(undefined4 *)(iVar14 + 0x24),*(byte *)(iVar14 + 0x2c) - 1,0x14);
          }
          uVar7 = FUN_71886108();
          *(undefined4 *)(iVar14 + 0x3c) = uVar7;
          uVar5 = 5;
LAB_71525c00:
          *(undefined1 *)(iVar14 + 0x1e) = uVar5;
        }
        else {
LAB_7152595c:
          if (cVar4 == '\x02') {
            if (*(char *)(iVar14 + 0x40) == '\0') {
              imp_BASS_ChannelPlay(*(undefined4 *)(iVar14 + 0x24),0);
            }
            else {
              imp_BASS_ChannelPause();
            }
          }
          else if (cVar4 == '\x05') {
            imp_BASS_ChannelSetAttribute(*(undefined4 *)(iVar14 + 0x24),2,0);
            iVar6 = *(int *)(iVar14 + 0x20);
            if (iVar6 != 0) {
              iVar8 = FUN_71ba2cf0(*(undefined4 *)(iVar14 + 0x30),0xbf800000);
              if (iVar8 != 0) {
LAB_715259a0:
                imp_BASS_ChannelSetAttribute(*(undefined4 *)(iVar14 + 0x24),2,0);
                uVar5 = 2;
                goto LAB_71525c00;
              }
              lVar15 = imp_BASS_ChannelGetLength(iVar6,0);
              uVar7 = (undefined4)((ulonglong)lVar15 >> 0x20);
              if (lVar15 != -1) {
                uVar16 = imp_BASS_ChannelBytes2Seconds
                                   (*(undefined4 *)(iVar14 + 0x20),uVar7,(int)lVar15,uVar7);
                uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
                uVar17 = FUN_71ba1638(*(undefined4 *)(iVar14 + 0x30));
                iVar6 = FUN_71886108();
                uVar18 = FUN_71ba1da0(iVar6 - *(int *)(iVar14 + 0x38));
                uVar18 = FUN_71ba0f98((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0,0x408f4000);
                uVar17 = FUN_71ba0670((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
                                      (int)((ulonglong)uVar17 >> 0x20));
                while( true ) {
                  uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
                  uVar11 = (undefined4)uVar17;
                  uVar17 = FUN_71ba2c9c(uVar11,uVar10,(int)uVar16,uVar7);
                  if ((int)uVar17 == 0) break;
                  uVar17 = FUN_71ba23ec(uVar11,uVar10,(int)uVar16,uVar7);
                }
                uVar17 = imp_BASS_ChannelSeconds2Bytes
                                   (*(undefined4 *)(iVar14 + 0x20),(int)((ulonglong)uVar17 >> 0x20),
                                    uVar11,uVar10);
                uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
                iVar6 = imp_BASS_Mixer_ChannelSetPosition
                                  (*(undefined4 *)(iVar14 + 0x20),uVar7,(int)uVar17,uVar7,0x10000);
                if (iVar6 != 0) goto LAB_715259a0;
              }
            }
          }
        }
LAB_71525c04:
        iVar6 = *(int *)(iVar14 + 0x24);
        if (iVar6 != 0) {
          cVar4 = *(char *)(iVar14 + 0x1e);
          if (cVar4 == '\x02') {
            if (((*piVar3 == 0) && (*pcVar2 == '\0')) && (*pcVar1 == '\0')) {
              thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
              thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
              iVar6 = *(int *)(iVar14 + 0x24);
              if (DAT_712016d4 != 0) {
                if (iVar6 == 0) goto LAB_7152588c;
                cVar4 = *(char *)(iVar14 + 0x1e);
                goto LAB_71525c1c;
              }
            }
            *(undefined1 *)(iVar14 + 0x1e) = 1;
            imp_BASS_ChannelSetAttribute(iVar6,2,0);
          }
          else {
LAB_71525c1c:
            if (((cVar4 == '\x01') && (*piVar3 == 0)) && ((*pcVar2 == '\0' && (*pcVar1 == '\0')))) {
              *(undefined1 *)(iVar14 + 0x1e) = 2;
            }
          }
        }
LAB_7152588c:
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar14 + 4);
      }
    }
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1);
    auStack_48[1] = 0;
    auStack_48[0] = 2000000;
    thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
              (auStack_48);
  } while( true );
}


// =========================================================================
// Function: FUN_71526338
// Entry: 0x71526338 | Size: 264 bytes
// =========================================================================

void FUN_71526338(uint *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  
  bVar1 = *param_2;
  bVar2 = *param_3;
  uVar6 = *(uint *)(param_2 + 4);
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint)(bVar1 >> 1);
  }
  uVar5 = *(uint *)(param_3 + 4);
  if ((bVar2 & 1) == 0) {
    uVar5 = (uint)(bVar2 >> 1);
  }
  uVar8 = uVar5 + uVar6;
  if (uVar8 < 0xfffffff8) {
    if (uVar8 < 0xb) {
      pcVar7 = (char *)0x0;
      *param_1 = 0;
      *(char *)param_1 = (char)uVar8 * '\x02';
      param_1[1] = 0;
      uVar3 = 0;
    }
    else {
      pcVar7 = (char *)thunk_MwhHq((uVar8 | 7) + 1);
      uVar3 = (uVar8 | 7) + 2;
      *param_1 = uVar3;
      param_1[1] = uVar8;
      uVar3 = uVar3 & 0xff;
    }
    param_1[2] = (uint)pcVar7;
    if ((uVar3 & 1) == 0) {
      pcVar7 = (char *)((int)param_1 + 1);
    }
    if (uVar6 != 0) {
      pbVar4 = *(byte **)(param_2 + 8);
      if ((bVar1 & 1) == 0) {
        pbVar4 = param_2 + 1;
      }
      imp___aeabi_memmove(pcVar7,pbVar4,uVar6);
    }
    if (uVar5 != 0) {
      pbVar4 = *(byte **)(param_3 + 8);
      if ((bVar2 & 1) == 0) {
        pbVar4 = param_3 + 1;
      }
      imp___aeabi_memmove(pcVar7 + uVar6,pbVar4,uVar5);
    }
    (pcVar7 + uVar6)[uVar5] = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_712f6c1c(param_1);
}


// =========================================================================
// Function: FUN_715264c8
// Entry: 0x715264c8 | Size: 28 bytes
// =========================================================================

void FUN_715264c8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  
  uVar1 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar2 = (undefined4 *)thunk_MwhHq(0xc);
  *puVar2 = uVar1;
  puVar2[1] = FUN_715257d0;
  puVar2[2] = param_1;
  iVar3 = imp_pthread_create(auStack_14,0,FUN_7152902c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
  }
  thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_14);
  thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_14);
  return;
}


// =========================================================================
// Function: FUN_71526c24
// Entry: 0x71526c24 | Size: 100 bytes
// =========================================================================

void FUN_71526c24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != *(int *)(param_1 + 4)) {
    uVar4 = 0;
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = iVar2;
    do {
      iVar2 = iVar1;
      if (*(int *)(iVar2 + uVar4 * 4) != 0) {
        FUN_715208fc();
        thunk_qNQrlu();
        iVar2 = *(int *)(param_1 + 4);
        iVar3 = *(int *)(param_1 + 8);
      }
      uVar4 = uVar4 + 1;
      iVar1 = iVar2;
    } while (uVar4 < (uint)(iVar3 - iVar2 >> 2));
  }
  *(int *)(param_1 + 8) = iVar2;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1);
  return;
}


// =========================================================================
// Function: eLHhYvURmltTPgYUXqKXAX
// Entry: 0x71526d10 | Size: 1292 bytes
// =========================================================================

bool eLHhYvURmltTPgYUXqKXAX(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  uint uStack_30;
  uint uStack_2c;
  char *pcStack_28;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar6 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  iVar6 = DAT_711a382c;
  if (param_1 == 0) {
    return false;
  }
  uVar1 = param_3 & 0x7fffffff;
  if ((uVar1 == 0x7f800000 || (uVar1 - 1 < 0x7fffff && (int)param_3 < 0 || 0x7f7fffff < uVar1)) ||
      uVar1 - 0x800000 < 0x7f000000 && (int)param_3 < 0) {
    return false;
  }
  iVar2 = FUN_71ba2d70(param_3,0x3f800000);
  if (iVar2 != 0) {
    return false;
  }
  uVar1 = imp_strlen(param_1);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar1 < 0xb) {
    pcVar8 = (char *)((uint)&uStack_30 | 1);
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar1 << 1));
    if (uVar1 != 0) goto LAB_71526e44;
  }
  else {
    pcVar8 = (char *)thunk_MwhHq((uVar1 | 7) + 1);
    uStack_30 = (uVar1 | 7) + 2;
    uStack_2c = uVar1;
    pcStack_28 = pcVar8;
LAB_71526e44:
    imp___aeabi_memcpy(pcVar8,param_1,uVar1);
  }
  bVar9 = false;
  pcVar8[uVar1] = '\0';
  uVar1 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    uVar1 = uStack_30 >> 1 & 0x7f;
  }
  if (uVar1 != 0) {
    pcVar7 = (char *)((uint)&uStack_30 | 1);
    pcVar8 = pcStack_28;
    if ((uStack_30 & 1) == 0) {
      pcVar8 = pcVar7;
    }
    if (*pcVar8 != '/') {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3750);
      bVar9 = *pcVar8 == '\0';
      if (bVar9) {
        puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3740);
        *puVar4 = 0x6f9beb15;
        puVar4[1] = 0xcd3aa635;
        *(undefined1 *)(puVar4 + 2) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71529190,puVar4,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3750);
        *puVar5 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3740);
      if (pbVar3[8] != 0) {
        pbVar3[8] = 0;
        *pbVar3 = *pbVar3 ^ 0x7d;
        pbVar3[1] = pbVar3[1] ^ 0x9f;
        pbVar3[2] = pbVar3[2] ^ 0xef;
        pbVar3[3] = pbVar3[3] ^ 0x1f;
        pbVar3[4] = pbVar3[4] ^ 0xf;
        pbVar3[5] = pbVar3[5] ^ 0x89;
        pbVar3[6] = pbVar3[6] ^ 0x15;
        pbVar3[7] = pbVar3[7] ^ 0xcd;
      }
      iVar2 = thunk_eKJIqrGEIjTiRDUtdksRAqRSvjpkhBAEWxnasBYwNxWsiogd_pMpRSUjTuWEimzRGr_fMrfCNhIamskeY
                        (&uStack_30,0,7);
      if (iVar2 != 0) {
        pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3770);
        if (*pcVar8 == '\0') {
          puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3760);
          *(undefined2 *)(puVar4 + 2) = 0x17d;
          *puVar4 = 0x6f9beb15;
          puVar4[1] = 0xe23ab37c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_715291b8,puVar4,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3770);
          *puVar5 = 1;
        }
        pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3760);
        if (pbVar3[9] != 0) {
          pbVar3[9] = 0;
          *pbVar3 = *pbVar3 ^ 0x7d;
          pbVar3[1] = pbVar3[1] ^ 0x9f;
          pbVar3[2] = pbVar3[2] ^ 0xef;
          pbVar3[3] = pbVar3[3] ^ 0x1f;
          pbVar3[4] = pbVar3[4] ^ 0xf;
          pbVar3[5] = pbVar3[5] ^ 0x89;
          pbVar3[6] = pbVar3[6] ^ 0x15;
          pbVar3[7] = pbVar3[7] ^ 0xcd;
          pbVar3[8] = pbVar3[8] ^ 0x7d;
        }
        bVar9 = false;
        iVar2 = thunk_eKJIqrGEIjTiRDUtdksRAqRSvjpkhBAEWxnasBYwNxWsiogd_pMpRSUjTuWEimzRGr_fMrfCNhIamskeY
                          (&uStack_30,0,8);
        if (iVar2 != 0) goto LAB_715270f4;
      }
    }
    pcVar8 = pcStack_28;
    uVar1 = uStack_2c;
    if ((uStack_30 & 1) == 0) {
      uVar1 = uStack_30 >> 1 & 0x7f;
      pcVar8 = pcVar7;
    }
    if (uVar1 != 0) {
      iVar2 = 0;
      do {
        if (pcVar8[-iVar2] == '\n' || pcVar8[-iVar2] == '\r') {
          bVar10 = iVar2 + uVar1 != 0;
          if (bVar10) {
            bVar9 = false;
          }
          if (bVar10 && iVar2 != 1) goto LAB_715270f4;
          break;
        }
        iVar2 = iVar2 + -1;
      } while (-iVar2 != uVar1);
    }
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6 + 4);
    if ((*(byte *)(iVar6 + 0xc) & 1) != 0) {
      thunk_qNQrlu(*(undefined4 *)(iVar6 + 0x14));
    }
    *(uint *)(iVar6 + 0xc) = uStack_30;
    *(uint *)(iVar6 + 0x10) = uStack_2c;
    *(char **)(iVar6 + 0x14) = pcStack_28;
    bVar9 = true;
    uStack_30 = uStack_30 & 0xffff0000;
    *(bool *)(iVar6 + 0x38) = param_2 != 0;
    *(undefined4 *)(iVar6 + 0x2c) = 1;
    *(undefined1 *)(iVar6 + 0x39) = 0;
    *(undefined1 *)(iVar6 + 0x40) = 0;
    *(undefined4 *)(iVar6 + 0x30) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    *(undefined4 *)(iVar6 + 0x24) = 0;
    *(uint *)(iVar6 + 0x34) = param_3;
    uVar1 = *(uint *)(iVar6 + 0x18);
    *(undefined1 *)(iVar6 + 0x3b) = 1;
    *(uint *)(iVar6 + 0x18) = uVar1 + 1;
    *(uint *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + (uint)(0xfffffffe < uVar1);
    *(undefined1 *)(iVar6 + 0x3c) = 1;
    thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(iVar6 + 8);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6 + 4);
  }
LAB_715270f4:
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(pcStack_28);
  }
  return bVar9;
}


// =========================================================================
// Function: UMpVuMQSGbIDVbEBAZQeYOGm_
// Entry: 0x7152772c | Size: 272 bytes
// =========================================================================

bool UMpVuMQSGbIDVbEBAZQeYOGm_(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar4 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  iVar4 = DAT_711a382c;
  uVar3 = param_2 & 0x7fffffff;
  bVar7 = uVar3 - 0x100000 < 0x7fe00000;
  bVar2 = bVar7 && param_2 < 0x80000000;
  uVar5 = param_2 - (param_1 == 0);
  bVar8 = 0xfffffffe < param_1 - 1U;
  bVar1 = (uint)bVar8 <= uVar5 - 0xfffff;
  if ((param_1 == 0 && uVar3 == 0 || uVar5 < 0x100000 && bVar1) || bVar7 && param_2 < 0x80000000) {
    iVar6 = DAT_711a382c + 4;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6,bVar2,uVar5 - (!bVar8 + 0xfffff));
    *(int *)(iVar4 + 0x20) = param_1;
    *(undefined1 *)(iVar4 + 0x40) = 1;
    *(undefined1 *)(iVar4 + 0x3c) = 1;
    *(uint *)(iVar4 + 0x24) = param_2;
    thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(iVar4 + 8);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6);
  }
  return (param_1 == 0 && uVar3 == 0 || uVar5 < 0x100000 && bVar1) || bVar2;
}


// =========================================================================
// Function: ShCMXEHHQkWAJVZEVpjVHC
// Entry: 0x715279b8 | Size: 184 bytes
// =========================================================================

void ShCMXEHHQkWAJVZEVpjVHC(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar2 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  iVar2 = DAT_711a382c;
  iVar3 = DAT_711a382c + 4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar3);
  *(undefined1 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined2 *)(iVar2 + 0x3b) = 0x100;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  uVar1 = *(uint *)(iVar2 + 0x18);
  *(uint *)(iVar2 + 0x18) = uVar1 + 1;
  *(uint *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + (uint)(0xfffffffe < uVar1);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(iVar2 + 8);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar3);
  return;
}


// =========================================================================
// Function: taPPTlkaIBuzqKAtPGZ_hoOgY_l
// Entry: 0x71527bec | Size: 156 bytes
// =========================================================================

void taPPTlkaIBuzqKAtPGZ_hoOgY_l(int param_1)

{
  int iVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar1 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  iVar1 = DAT_711a382c;
  iVar2 = DAT_711a382c + 4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2);
  *(undefined1 *)(iVar1 + 0x3c) = 1;
  *(bool *)(iVar1 + 0x39) = param_1 != 0;
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(iVar1 + 8);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2);
  return;
}


// =========================================================================
// Function: tPhivzwSmEHNVqTEElEAErgNMHXitP
// Entry: 0x71527e04 | Size: 156 bytes
// =========================================================================

void tPhivzwSmEHNVqTEElEAErgNMHXitP(int param_1)

{
  int iVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar1 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  iVar1 = DAT_711a382c;
  iVar2 = DAT_711a382c + 4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2);
  *(undefined1 *)(iVar1 + 0x3c) = 1;
  *(bool *)(iVar1 + 0x3a) = param_1 != 0;
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(iVar1 + 8);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2);
  return;
}


// =========================================================================
// Function: otBmEfJshAkEUEADJXgNSdLXMdK
// Entry: 0x7152801c | Size: 292 bytes
// =========================================================================

bool otBmEfJshAkEUEADJXgNSdLXMdK(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar3 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  uVar1 = param_1 & 0x7fffffff;
  bVar6 = 0x7ffffe < uVar1 - 1;
  bVar5 = -1 < (int)param_1;
  bVar7 = 0x7effffff < uVar1 - 0x800000;
  iVar2 = FUN_71ba2d70(param_1,0x3f800000);
  iVar3 = DAT_711a382c;
  if (((uVar1 != 0x7f800000 && ((bVar6 || bVar5) && uVar1 < 0x7f800000)) && (bVar7 || bVar5)) &&
      iVar2 == 0) {
    iVar4 = DAT_711a382c + 4;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar4);
    *(uint *)(iVar3 + 0x34) = param_1;
    *(undefined1 *)(iVar3 + 0x3c) = 1;
    thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(iVar3 + 8);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar4);
  }
  return ((uVar1 != 0x7f800000 && ((bVar6 || bVar5) && uVar1 < 0x7f800000)) && (bVar7 || bVar5)) &&
         iVar2 == 0;
}


// =========================================================================
// Function: zCrBLsRhsiuxPNxUXieWvWPYbYj
// Entry: 0x715282d8 | Size: 144 bytes
// =========================================================================

int zCrBLsRhsiuxPNxUXieWvWPYbYj(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3830 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3830), iVar3 != 0)) {
    thunk_MwhHq(0x48);
    DAT_711a382c = FUN_715284c8();
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3830);
  }
  iVar2 = DAT_711a382c;
  iVar1 = DAT_711a382c + 4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1);
  iVar3 = *(int *)(iVar2 + 0x2c);
  iVar2 = *(int *)(iVar2 + 0x30);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1);
  if (iVar3 == 5) {
    iVar3 = -iVar2;
  }
  return iVar3;
}


// =========================================================================
// Function: FUN_715284c8
// Entry: 0x715284c8 | Size: 140 bytes
// =========================================================================

void FUN_715284c8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  imp___aeabi_memclr4(param_1 + 4,0x30);
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar1 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar2 = (undefined4 *)thunk_MwhHq(0x10);
  *puVar2 = uVar1;
  puVar2[3] = param_1;
  puVar2[1] = FUN_71528674;
  puVar2[2] = 0;
  iVar3 = imp_pthread_create(param_1 + 0x44,0,FUN_71528f1c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
  }
  return;
}


// =========================================================================
// Function: FUN_71528674
// Entry: 0x71528674 | Size: 1228 bytes
// =========================================================================

void FUN_71528674(int param_1)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r1;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  int iStack_40;
  char cStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  char *pcStack_28;
  
  cStack_3c = '\x01';
  iStack_40 = param_1 + 4;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  if (*(char *)(param_1 + 0x3d) == '\0') {
    pcVar3 = (char *)((uint)&uStack_30 | 1);
    do {
      if (*(int *)(param_1 + 0x28) == 0) {
        while (*(char *)(param_1 + 0x3c) == '\0') {
          if (*(char *)(param_1 + 0x3d) != '\0') goto LAB_715286a4;
          thunk_STeqdXQsnAyiTBJTFCuiFKcPKNhdgVCrrMQVYFZSLEEADdhRfhXIrTCuEWwQWomPgRHz
                    (param_1 + 8,&iStack_40);
        }
      }
      else {
        thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_38);
        uStack_30 = uStack_38 + 50000000;
        iStack_2c = iStack_34 + (uint)(0xfd050f7f < uStack_38);
        do {
          if (*(char *)(param_1 + 0x3c) != '\0' || *(char *)(param_1 + 0x3d) != '\0') break;
          iVar4 = FUN_713a2214(param_1 + 8,&iStack_40,&uStack_30);
        } while (iVar4 != 1);
      }
      if (*(char *)(param_1 + 0x3d) != '\0') break;
      *(undefined1 *)(param_1 + 0x3c) = 0;
      if (*(char *)(param_1 + 0x3b) != '\0') {
        *(undefined1 *)(param_1 + 0x3b) = 0;
        if (*(int *)(param_1 + 0x28) != 0) {
          imp_BASS_StreamFree();
        }
        *(undefined2 *)(param_1 + 0x3e) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        uVar8 = *(uint *)(param_1 + 0x18);
        uVar5 = *(uint *)(param_1 + 0x1c);
        if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
          uStack_30 = *(uint *)(param_1 + 0xc);
          iStack_2c = *(int *)(param_1 + 0x10);
          pcStack_28 = *(char **)(param_1 + 0x14);
        }
        else {
          FUN_712f6d58(&uStack_30,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10));
        }
        if (cStack_3c == '\0') {
                    /* WARNING: Subroutine does not return */
          thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi
                    (1,s_unique_lock__unlock__not_locked_70070888);
        }
        bVar1 = *(byte *)(param_1 + 0x38);
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iStack_40);
        bVar2 = false;
        cStack_3c = '\0';
        iVar4 = FUN_71524ff4();
        if (iVar4 == 0) {
LAB_715288e4:
          iVar4 = 0;
          bVar2 = true;
          iVar11 = imp_BASS_ErrorGetCode();
        }
        else {
          iVar4 = (uint)bVar1 << 2;
          pcVar6 = pcStack_28;
          if ((uStack_30 & 1) == 0) {
            pcVar6 = pcVar3;
          }
          if (*pcVar6 == '/') {
            iVar4 = imp_BASS_StreamCreateFile(0,pcVar6,0,0,0,0,iVar4);
          }
          else {
            imp_BASS_SetConfig(0x4000000b,10000);
            imp_BASS_SetConfig(0x40000025,10000);
            pcVar6 = pcStack_28;
            if ((uStack_30 & 1) == 0) {
              pcVar6 = pcVar3;
            }
            iVar4 = imp_BASS_StreamCreateURL(pcVar6,0,iVar4,0,0);
          }
          iVar11 = 0;
          if (iVar4 == 0) goto LAB_715288e4;
        }
        if (iStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi
                    (1,s_unique_lock__lock__references_nu_700652fa);
        }
        if (cStack_3c != '\0') {
                    /* WARNING: Subroutine does not return */
          thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi
                    (0x23,s_unique_lock__lock__already_locke_70068f71);
        }
        thunk_cfqspBX_JrdDvACwYrAyrngjQ();
        cStack_3c = '\x01';
        uVar7 = (uint)*(byte *)(param_1 + 0x3d);
        bVar12 = uVar7 == 0;
        uVar9 = extraout_r1;
        if (bVar12) {
          uVar7 = uVar8 ^ *(uint *)(param_1 + 0x18);
          uVar9 = uVar5 ^ *(uint *)(param_1 + 0x1c);
        }
        if (bVar12 && (uVar7 == 0 && uVar9 == 0)) {
          *(int *)(param_1 + 0x28) = iVar4;
          if (bVar2) {
            *(undefined2 *)(param_1 + 0x3e) = 0;
            if (iVar11 < 1) {
              iVar11 = 1000;
            }
            *(undefined4 *)(param_1 + 0x28) = 0;
            *(int *)(param_1 + 0x30) = iVar11;
            *(undefined4 *)(param_1 + 0x2c) = 5;
          }
        }
        else if (!bVar2) {
          imp_BASS_StreamFree(iVar4);
        }
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(pcStack_28);
        }
      }
      iVar4 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) == 0) {
        if (iVar4 != 0) {
          imp_BASS_StreamFree(iVar4);
        }
        *(undefined2 *)(param_1 + 0x3e) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else if (iVar4 != 0) {
        if (*(char *)(param_1 + 0x40) == '\0') {
LAB_71528a00:
          iVar4 = imp_BASS_ChannelSetAttribute(iVar4,2,*(undefined4 *)(param_1 + 0x34));
          if (iVar4 == 0) goto LAB_71528ad4;
          bVar1 = *(byte *)(param_1 + 0x3e) & *(char *)(param_1 + 0x3f) == '\0';
          if (*(char *)(param_1 + 0x39) == '\0' && *(char *)(param_1 + 0x3a) == '\0') {
            if (bVar1 == 0) {
              iVar4 = imp_BASS_ChannelPlay(*(undefined4 *)(param_1 + 0x28),0);
              if (iVar4 == 0) goto LAB_71528ad4;
              *(undefined2 *)(param_1 + 0x3e) = 1;
            }
            iVar4 = imp_BASS_ChannelIsActive(*(undefined4 *)(param_1 + 0x28));
            uVar10 = 2;
            if (iVar4 == 0) {
              if (*(int *)(param_1 + 0x28) != 0) {
                imp_BASS_StreamFree();
              }
              uVar10 = 4;
              *(undefined2 *)(param_1 + 0x3e) = 0;
              *(undefined4 *)(param_1 + 0x28) = 0;
            }
          }
          else {
            if ((bVar1 != 0) &&
               (iVar4 = imp_BASS_ChannelPause(*(undefined4 *)(param_1 + 0x28)), iVar4 == 0))
            goto LAB_71528ad4;
            uVar10 = 3;
            *(undefined1 *)(param_1 + 0x3f) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x40) = 0;
          lVar13 = imp_BASS_ChannelSeconds2Bytes
                             (iVar4,*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x20),
                              *(undefined4 *)(param_1 + 0x24));
          uVar10 = (undefined4)((ulonglong)lVar13 >> 0x20);
          if ((lVar13 != -1) &&
             (iVar4 = imp_BASS_ChannelSetPosition(iVar4,uVar10,(int)lVar13,uVar10,0), iVar4 != 0)) {
            iVar4 = *(int *)(param_1 + 0x28);
            goto LAB_71528a00;
          }
LAB_71528ad4:
          iVar4 = imp_BASS_ErrorGetCode();
          if (*(int *)(param_1 + 0x28) != 0) {
            imp_BASS_StreamFree();
          }
          if (iVar4 < 1) {
            iVar4 = 1000;
          }
          *(undefined2 *)(param_1 + 0x3e) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar10 = 5;
          *(int *)(param_1 + 0x30) = iVar4;
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar10;
      }
    } while (*(char *)(param_1 + 0x3d) == '\0');
  }
LAB_715286a4:
  if (*(int *)(param_1 + 0x28) != 0) {
    imp_BASS_StreamFree();
  }
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (cStack_3c != '\0') {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iStack_40);
  }
  return;
}


// =========================================================================
// Function: FUN_71528f1c
// Entry: 0x71528f1c | Size: 108 bytes
// =========================================================================

undefined4 FUN_71528f1c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  
  puVar1 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  iVar2 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar1,iVar2);
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[3] + (param_1[2] >> 1)));
  }
  (*pcVar3)();
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 != 0) {
    thunk_RYJOfoHFfaslEZJHEIdHJEJsamhUbv_Gq();
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return 0;
}


// =========================================================================
// Function: FUN_7152902c
// Entry: 0x7152902c | Size: 88 bytes
// =========================================================================

undefined4 FUN_7152902c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  iVar2 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar1,iVar2);
  (*(code *)param_1[1])(param_1[2]);
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 != 0) {
    thunk_RYJOfoHFfaslEZJHEIdHJEJsamhUbv_Gq();
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return 0;
}


// =========================================================================
// Function: FUN_71529128
// Entry: 0x71529128 | Size: 20 bytes
// =========================================================================

void FUN_71529128(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715291e4
// Entry: 0x715291e4 | Size: 9216 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715291e4(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  char cVar22;
  byte bVar23;
  int iVar24;
  uint uVar25;
  ushort *puVar26;
  uint uVar27;
  byte *pbVar28;
  int *piVar29;
  uint *puVar30;
  int *piVar31;
  uint uVar32;
  int *piVar33;
  byte *pbVar34;
  bool bVar35;
  bool bVar36;
  longlong lVar37;
  undefined8 uVar38;
  uint uStack_378;
  undefined4 uStack_368;
  int iStack_364;
  int iStack_360;
  int iStack_35c;
  int iStack_358;
  byte *pbStack_350;
  int iStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  uint auStack_340 [4];
  byte *pbStack_330;
  uint uStack_32c;
  uint uStack_328;
  undefined4 uStack_324;
  byte *pbStack_320;
  int iStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  byte *pbStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  uint uStack_300;
  undefined4 uStack_2fc;
  uint uStack_2f8;
  char *pcStack_2f0;
  int iStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 auStack_2e0 [16];
  undefined1 auStack_2d0 [16];
  byte abStack_2c0 [2];
  undefined2 uStack_2be;
  undefined2 uStack_2bc;
  undefined2 uStack_2ba;
  ushort auStack_2b0 [154];
  int aiStack_17c [50];
  int iStack_b4;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char acStack_68 [8];
  int aiStack_60 [3];
  byte abStack_54 [4];
  uint uStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [4];
  int *piStack_38;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uVar27 = *(uint *)(param_1 + 4);
  pbVar28 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar28 = param_1 + 1;
    uVar27 = (uint)(*param_1 >> 1);
  }
  FUN_7152f0e8(abStack_54,pbVar28,pbVar28 + uVar27);
  if ((abStack_54[0] & 1) == 0) {
    uStack_50 = (uint)(abStack_54[0] >> 1);
  }
  if (uStack_50 == 0) goto joined_r0x71529294;
  piVar31 = aiStack_48;
  piStack_38 = (int *)0x0;
  FUN_7152dd84(acStack_68,abStack_54,piVar31,0,0,0);
  if (piStack_38 == piVar31) {
    iVar24 = 0x10;
LAB_715292a4:
    (**(code **)(*piVar31 + iVar24))();
  }
  else {
    iVar24 = 0x14;
    piVar31 = piStack_38;
    if (piStack_38 != (int *)0x0) goto LAB_715292a4;
  }
  cVar22 = acStack_68[0];
  if (acStack_68[0] == '\x01') {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3790);
    if (*pcVar5 == '\0') {
      puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3780);
      *puVar20 = 0x74adfc8f;
      puVar20[1] = 0x29095c5e;
      *(undefined1 *)(puVar20 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f3f4,puVar20,&DAT_70b0e000);
      puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3790);
      *puVar21 = 1;
    }
    pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3780);
    if (pbVar28[8] != 0) {
      pbVar28[8] = 0;
      *pbVar28 = *pbVar28 ^ 0xf9;
      pbVar28[1] = pbVar28[1] ^ 0x99;
      pbVar28[2] = pbVar28[2] ^ 0xdf;
      pbVar28[3] = pbVar28[3] ^ 7;
      pbVar28[4] = pbVar28[4] ^ 0x37;
      pbVar28[5] = pbVar28[5] ^ 0x33;
      pbVar28[6] = pbVar28[6] ^ 0x67;
      pbVar28[7] = pbVar28[7] ^ 0x29;
    }
    if (acStack_68[0] == '\x01') {
      pbVar34 = (byte *)0x0;
      piVar31 = (int *)(aiStack_60[0] + 4);
      piVar29 = (int *)*piVar31;
      piVar33 = piVar31;
      if (piVar29 != (int *)0x0) {
        do {
          iVar24 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                             (piVar29 + 4,pbVar28);
          if (-1 < iVar24) {
            piVar33 = piVar29;
          }
          piVar29 = (int *)piVar29[-(iVar24 >> 0x1f)];
        } while (piVar29 != (int *)0x0);
        if ((piVar33 != piVar31) &&
           (iVar24 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                               (piVar33 + 4,pbVar28), iVar24 < 1)) {
          piVar31 = piVar33;
        }
      }
LAB_715293dc:
      bVar4 = false;
      pbVar28 = pbVar34;
      if (acStack_68[0] != '\x02') goto LAB_715293ec;
LAB_71529420:
      pbVar28 = pbVar34;
      if (pbVar34 == *(byte **)(aiStack_60[0] + 4)) {
        cVar22 = '\x02';
        goto LAB_71529a60;
      }
LAB_71529434:
      cVar22 = acStack_68[0];
      if (*pbVar34 - 5 < 2) {
        if (acStack_68[0] != '\x02') {
          if (acStack_68[0] != '\x01') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
          pbVar28 = (byte *)(piVar31 + 8);
        }
        bVar23 = *pbVar28;
        if (bVar23 == 5) {
LAB_71529478:
          lVar37 = *(longlong *)(pbVar28 + 8);
        }
        else {
          if (bVar23 != 7) {
            if (bVar23 != 6) {
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
            goto LAB_71529478;
          }
          lVar37 = FUN_71ba16f4(*(undefined4 *)(pbVar28 + 8),*(undefined4 *)(pbVar28 + 0xc));
        }
        if (lVar37 == 1) {
          uVar6 = FUN_7153ffec(0,cVar22);
          uStack_70 = 0;
          uStack_74 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_84 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_94 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_a4 = 0;
          uStack_a8 = 0;
          pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37b0);
          if (*pcVar5 == '\0') {
            puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37a0);
            *puVar20 = 0xbb576c40;
            *(undefined1 *)((int)puVar20 + 7) = 1;
            *(undefined4 *)((int)puVar20 + 3) = 0x3f910abb;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f41c,puVar20,&DAT_70b0e000);
            puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37b0);
            *puVar21 = 1;
          }
          pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37a0);
          if (pbVar28[7] != 0) {
            pbVar28[7] = 0;
            *pbVar28 = *pbVar28 ^ 0x27;
            pbVar28[1] = pbVar28[1] ^ 9;
            pbVar28[2] = pbVar28[2] ^ 0x39;
            pbVar28[3] = pbVar28[3] ^ 0xdf;
            pbVar28[4] = pbVar28[4] ^ 0x6f;
            pbVar28[5] = pbVar28[5] ^ 0xe3;
            pbVar28[6] = pbVar28[6] ^ 0x3f;
          }
          iVar24 = FUN_7152e29c(acStack_68,pbVar28,&uStack_78);
          if (iVar24 != 0) {
            pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37d0);
            if (*pcVar5 == '\0') {
              puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37c0);
              *puVar20 = 0xa65d6645;
              *(undefined2 *)(puVar20 + 1) = 0x16f;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f444,puVar20,&DAT_70b0e000);
              puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37d0);
              *puVar21 = 1;
            }
            pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37c0);
            if (pbVar28[5] != 0) {
              pbVar28[5] = 0;
              *pbVar28 = *pbVar28 ^ 0x27;
              pbVar28[1] = pbVar28[1] ^ 9;
              pbVar28[2] = pbVar28[2] ^ 0x39;
              pbVar28[3] = pbVar28[3] ^ 0xdf;
              pbVar28[4] = pbVar28[4] ^ 0x6f;
            }
            iVar24 = FUN_7152e29c(acStack_68,pbVar28,&uStack_88);
            if (iVar24 != 0) {
              pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37f0);
              if (*pcVar5 == '\0') {
                puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37e0);
                *puVar20 = 0xe32a605b;
                *(undefined2 *)(puVar20 + 1) = 0x121;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f46c,puVar20,&DAT_70b0e000);
                puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37f0);
                *puVar21 = 1;
              }
              pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c37e0);
              if (pbVar28[5] != 0) {
                pbVar28[5] = 0;
                *pbVar28 = *pbVar28 ^ 0x33;
                pbVar28[1] = pbVar28[1] ^ 5;
                pbVar28[2] = pbVar28[2] ^ 0x4b;
                pbVar28[3] = pbVar28[3] ^ 0x87;
                pbVar28[4] = pbVar28[4] ^ 0x21;
              }
              iVar24 = FUN_7152e29c(acStack_68,pbVar28,&uStack_98);
              if (iVar24 != 0) {
                pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3810);
                if (*pcVar5 == '\0') {
                  puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3800);
                  *(undefined2 *)(puVar20 + 2) = 0x133;
                  *puVar20 = 0xe9226e40;
                  puVar20[1] = 0x54696675;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f494,puVar20,&DAT_70b0e000);
                  puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3810);
                  *puVar21 = 1;
                }
                pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3800);
                if (pbVar28[9] != 0) {
                  pbVar28[9] = 0;
                  *pbVar28 = *pbVar28 ^ 0x33;
                  pbVar28[1] = pbVar28[1] ^ 5;
                  pbVar28[2] = pbVar28[2] ^ 0x4b;
                  pbVar28[3] = pbVar28[3] ^ 0x87;
                  pbVar28[4] = pbVar28[4] ^ 0x21;
                  pbVar28[5] = pbVar28[5] ^ 9;
                  pbVar28[6] = pbVar28[6] ^ 7;
                  pbVar28[7] = pbVar28[7] ^ 0x31;
                  pbVar28[8] = pbVar28[8] ^ 0x33;
                }
                iVar24 = FUN_7152e29c(acStack_68,pbVar28,&uStack_a8);
                if (iVar24 != 0) {
                  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3830);
                  if (*pcVar5 == '\0') {
                    puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3820);
                    *puVar20 = 0x8c2f9a7e;
                    *(undefined2 *)(puVar20 + 1) = 0x1b3;
                    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f4c0,puVar20,&DAT_70b0e000);
                    puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3830);
                    *puVar21 = 1;
                  }
                  pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3820);
                  if (pbVar28[5] != 0) {
                    pbVar28[5] = 0;
                    *pbVar28 = *pbVar28 ^ 0x13;
                    pbVar28[1] = pbVar28[1] ^ 0xfb;
                    pbVar28[2] = pbVar28[2] ^ 0x43;
                    pbVar28[3] = pbVar28[3] ^ 0xe9;
                    pbVar28[4] = pbVar28[4] ^ 0xb3;
                  }
                  iVar24 = FUN_7152e520(&uStack_78);
                  if (iVar24 != 0) {
                    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3850);
                    if (*pcVar5 == '\0') {
                      puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3840);
                      *puVar20 = 0x882e9e75;
                      *(undefined1 *)((int)puVar20 + 7) = 1;
                      *(undefined4 *)((int)puVar20 + 3) = 0x2f4edf88;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f4e8,puVar20,&DAT_70b0e000);
                      puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3850);
                      *puVar21 = 1;
                    }
                    pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3840);
                    if (pbVar28[7] != 0) {
                      pbVar28[7] = 0;
                      *pbVar28 = *pbVar28 ^ 0x13;
                      pbVar28[1] = pbVar28[1] ^ 0xfb;
                      pbVar28[2] = pbVar28[2] ^ 0x43;
                      pbVar28[3] = pbVar28[3] ^ 0xe9;
                      pbVar28[4] = pbVar28[4] ^ 0xb3;
                      pbVar28[5] = pbVar28[5] ^ 0x2b;
                      pbVar28[6] = pbVar28[6] ^ 0x2f;
                    }
                    iVar24 = FUN_7152e520(&uStack_78);
                    if (iVar24 != 0) goto LAB_71529a0c;
                  }
                  FUN_7152e5f4(abStack_2c0);
                  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3870);
                  if (*pcVar5 == '\0') {
                    puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3860);
                    *puVar20 = 0x9fb49c;
                    *(undefined2 *)(puVar20 + 1) = 0x11f;
                    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f510,puVar20,&DAT_70b0e000);
                    puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3870);
                    *puVar21 = 1;
                  }
                  pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3860);
                  if (pbVar28[5] != 0) {
                    pbVar28[5] = 0;
                    *pbVar28 = *pbVar28 ^ 0xf1;
                    pbVar28[1] = pbVar28[1] ^ 0xd5;
                    pbVar28[2] = pbVar28[2] ^ 0xf3;
                    pbVar28[3] = pbVar28[3] ^ 0x65;
                    pbVar28[4] = pbVar28[4] ^ 0x1f;
                  }
                  abStack_2c0[0] = FUN_7152e8b0(&uStack_78);
                  abStack_2c0[0] = abStack_2c0[0] ^ 1;
                  uVar27 = uStack_80;
                  if ((uStack_88 & 1) == 0) {
                    uVar27 = (uint)&uStack_88 | 1;
                  }
                  uStack_2be = FUN_7154a73c(uVar6,uVar27);
                  uVar27 = uStack_90;
                  if ((uStack_98 & 1) == 0) {
                    uVar27 = (uint)&uStack_98 | 1;
                  }
                  uStack_2bc = FUN_7154a778(uVar6,uVar27);
                  uVar27 = uStack_a0;
                  if ((uStack_a8 & 1) == 0) {
                    uVar27 = (uint)&uStack_a8 | 1;
                  }
                  uStack_2ba = FUN_7154a564(uVar6,uVar27);
                  iVar24 = FUN_7154aa58(uVar6,uStack_2be);
                  iVar7 = FUN_7154aa9c(uVar6,uStack_2bc);
                  if ((iVar24 != 0 && iVar7 != 0) &&
                     (iVar8 = FUN_7154a7f0(uVar6,uStack_2ba), iVar8 != 0)) {
                    bVar23 = *(byte *)(iVar24 + 0xc);
                    bVar1 = abStack_2c0[0];
                    if (bVar23 == abStack_2c0[0]) {
                      bVar1 = *(byte *)(iVar7 + 0xc);
                    }
                    if (bVar23 == abStack_2c0[0] && bVar1 == bVar23) {
                      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3890);
                      if (*pcVar5 == '\0') {
                        puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3880);
                        *(undefined1 *)((int)puVar20 + 0x12) = 1;
                        uVar3 = DAT_70081f5c;
                        uVar2 = DAT_70081f58;
                        uVar19 = DAT_70081f54;
                        *puVar20 = DAT_70081f50;
                        puVar20[1] = uVar19;
                        puVar20[2] = uVar2;
                        puVar20[3] = uVar3;
                        *(undefined2 *)(puVar20 + 4) = DAT_70081f60;
                        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f538,puVar20,&DAT_70b0e000);
                        puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3890);
                        *puVar21 = 1;
                      }
                      uStack_368 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3880);
                      if (*(char *)((int)uStack_368 + 0x12) != '\0') {
                        uVar27 = 0;
                        uVar12 = 0;
                        do {
                          iVar24 = (uVar27 & 7) * 8;
                          uVar32 = iVar24 - 0x20;
                          bVar23 = (byte)(0xdfff2f27 >> iVar24) |
                                   (byte)(-0x6c1ca843 << ((uVar27 & 7) * -8 + 0x20 & 0xff));
                          if (-1 < (int)uVar32) {
                            bVar23 = (byte)(0x93e357bd >> (uVar32 & 0xff));
                          }
                          *(byte *)((int)uStack_368 + uVar27) =
                               *(byte *)((int)uStack_368 + uVar27) ^ bVar23;
                          bVar36 = 0xfffffffe < uVar27;
                          bVar4 = uVar12 == 0;
                          bVar35 = (0x10 < uVar27) <= uVar12;
                          uVar27 = uVar27 + 1;
                          uVar12 = uVar12 + bVar36;
                        } while (bVar4 && bVar35);
                        *(undefined1 *)((int)uStack_368 + 0x12) = 0;
                      }
                      FUN_7152dff0(auStack_2d0,acStack_68,&uStack_368);
                      iStack_35c = -0x80000000;
                      iStack_360 = 0;
                      iStack_364 = 0;
                      if (acStack_68[0] == '\x02') {
                        iStack_360 = *(int *)(aiStack_60[0] + 4);
                      }
                      else if (acStack_68[0] == '\x01') {
                        iStack_364 = aiStack_60[0] + 4;
                      }
                      else {
                        iStack_35c = 1;
                      }
                      uStack_368 = (byte *)acStack_68;
                      iVar24 = FUN_7152e984(auStack_2d0,&uStack_368);
                      uVar27 = uStack_b0;
                      if (iVar24 == 0) goto LAB_71529df8;
                      pbVar28 = (byte *)FUN_7152e198(auStack_2d0);
                      if (*pbVar28 - 5 < 2) {
                        FUN_7152e198(auStack_2d0);
                        lVar37 = FUN_7152e210();
                        uVar27 = (uint)lVar37;
                        if ((uint)-(int)((ulonglong)lVar37 >> 0x20) < (uint)(uVar27 < 0x80000000)) {
                          if (lVar37 == 0) {
                            uVar27 = 0;
                          }
                          else {
                            iVar24 = FUN_715ec150(uVar27);
                            if (iVar24 == 0) goto LAB_71529a0c;
                          }
LAB_71529df8:
                          uStack_b0 = uVar27;
                          pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38b0);
                          if (*pcVar5 == '\0') {
                            puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38a0);
                            *puVar20 = 0xd0f653ae;
                            *(undefined1 *)((int)puVar20 + 6) = 1;
                            *(undefined2 *)(puVar20 + 1) = 0x7dc2;
                            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f56c,puVar20,&DAT_70b0e000);
                            puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38b0);
                            *puVar21 = 1;
                          }
                          uStack_368 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38a0);
                          if (uStack_368[6] != 0) {
                            uStack_368[6] = 0;
                            *uStack_368 = *uStack_368 ^ 199;
                            uStack_368[1] = uStack_368[1] ^ 0x27;
                            uStack_368[2] = uStack_368[2] ^ 0x93;
                            uStack_368[3] = uStack_368[3] ^ 0xbd;
                            uStack_368[4] = uStack_368[4] ^ 0xb1;
                            uStack_368[5] = uStack_368[5] ^ 0x7d;
                          }
                          FUN_7152dff0(auStack_2e0,acStack_68,&uStack_368);
                          iStack_35c = -0x80000000;
                          iStack_360 = 0;
                          iStack_364 = 0;
                          if (acStack_68[0] == '\x02') {
                            iStack_360 = *(int *)(aiStack_60[0] + 4);
                          }
                          else if (acStack_68[0] == '\x01') {
                            iStack_364 = aiStack_60[0] + 4;
                          }
                          else {
                            iStack_35c = 1;
                          }
                          uStack_368 = (byte *)acStack_68;
                          iVar24 = FUN_7152e984(auStack_2e0,&uStack_368);
                          if (iVar24 == 0) {
LAB_7152a9d8:
                            pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3950);
                            if (*pcVar5 == '\0') {
                              puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3940);
                              *puVar20 = 0xab8326e3;
                              puVar20[1] = 0xe1a4d0fc;
                              *(undefined1 *)(puVar20 + 2) = 1;
                              thunk_GFDIUClbc_QcPNgD_wH(&LAB_7152f634,puVar20,&DAT_70b0e000);
                              puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3950);
                              *puVar21 = 1;
                            }
                            uStack_368 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3940);
                            if (uStack_368[8] != 0) {
                              uStack_368[8] = 0;
                              *uStack_368 = *uStack_368 ^ 0x97;
                              uStack_368[1] = uStack_368[1] ^ 0x47;
                              uStack_368[2] = uStack_368[2] ^ 0xf7;
                              uStack_368[3] = uStack_368[3] ^ 0xdf;
                              uStack_368[4] = uStack_368[4] ^ 0x93;
                              uStack_368[5] = uStack_368[5] ^ 0xbf;
                              uStack_368[6] = uStack_368[6] ^ 0xd7;
                              uStack_368[7] = uStack_368[7] ^ 0xe1;
                            }
                            FUN_7152dff0(&pcStack_2f0,acStack_68,&uStack_368);
                            iStack_35c = -0x80000000;
                            iStack_360 = 0;
                            iStack_364 = 0;
                            if (acStack_68[0] == '\x02') {
                              iStack_360 = *(int *)(aiStack_60[0] + 4);
                            }
                            else if (acStack_68[0] == '\x01') {
                              iStack_364 = aiStack_60[0] + 4;
                            }
                            else {
                              iStack_35c = 1;
                            }
                            uStack_368 = (byte *)acStack_68;
                            iVar24 = FUN_7152e984(&pcStack_2f0,&uStack_368);
                            if (iVar24 == 0) {
LAB_7152b594:
                              imp___aeabi_memcpy4(param_2,abStack_2c0,0x214);
                            }
                            else {
                              pcVar5 = (char *)FUN_7152e198(&pcStack_2f0);
                              if (*pcVar5 == '\x02') {
                                FUN_7152e198(&pcStack_2f0);
                                uVar27 = FUN_7152ea2c();
                                if (uVar27 < 0xb) {
                                  pbStack_320 = (byte *)FUN_7152ea88(&pcStack_2f0);
                                  uStack_304 = 0x80000000;
                                  uStack_308 = 0;
                                  uStack_30c = 0;
                                  bVar23 = *pbStack_320;
                                  if (bVar23 == 0) {
                                    uStack_304 = 1;
                                  }
                                  else if (bVar23 == 2) {
                                    uStack_308 = **(undefined4 **)(pbStack_320 + 8);
                                  }
                                  else if (bVar23 == 1) {
                                    uStack_30c = **(undefined4 **)(pbStack_320 + 8);
                                  }
                                  else {
                                    uStack_304 = 0;
                                  }
                                  uStack_314 = 0x80000000;
                                  uStack_318 = 0;
                                  iStack_31c = 0;
                                  if (*pbStack_320 == 2) {
                                    uStack_318 = *(undefined4 *)(*(int *)(pbStack_320 + 8) + 4);
                                  }
                                  else if (*pbStack_320 == 1) {
                                    iStack_31c = *(int *)(pbStack_320 + 8) + 4;
                                  }
                                  else {
                                    uStack_314 = 1;
                                  }
                                  pbStack_310 = pbStack_320;
                                  iVar24 = FUN_7152e984(&pbStack_310,&pbStack_320);
                                  if (iVar24 != 0) {
                                    puVar30 = (uint *)((uint)&uStack_368 | 4);
                                    pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3960);
                                    pbVar34 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3a00);
                                    puVar13 = puVar30 + 3;
                                    puVar15 = puVar30 + 2;
                                    puVar16 = puVar30 + 1;
                                    pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3980);
                                    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c39a0);
                                    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c39c0);
                                    pbVar17 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c39e0);
                                    do {
                                      pbVar18 = (byte *)FUN_7152ea88(&pbStack_310);
                                      uStack_2f8 = 0;
                                      uStack_2fc = 0;
                                      uStack_300 = 0;
                                      if (*pbVar18 != 1) goto LAB_71529a0c;
                                      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3970);
                                      if (*pcVar5 == '\0') {
                                        puVar20 = (undefined4 *)
                                                  thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3960);
                                        *puVar20 = 0x6f309880;
                                        *(undefined1 *)(puVar20 + 1) = 1;
                                        thunk_GFDIUClbc_QcPNgD_wH
                                                  (&LAB_7152f65c,puVar20,&DAT_70b0e000);
                                        puVar21 = (undefined1 *)
                                                  thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3970);
                                        *puVar21 = 1;
                                      }
                                      if (pbVar28[4] != 0) {
                                        *pbVar28 = *pbVar28 ^ 0xeb;
                                        pbVar28[1] = pbVar28[1] ^ 0xfd;
                                        pbVar28[2] = pbVar28[2] ^ 0x49;
                                        pbVar28[4] = 0;
                                        pbVar28[3] = pbVar28[3] ^ 0x6f;
                                      }
                                      iVar24 = FUN_7152e29c(pbVar18,pbVar28,&uStack_300);
                                      if (iVar24 == 0) {
                                        bVar4 = true;
                                      }
                                      else {
                                        uStack_368._0_3_ = (uint3)(ushort)uStack_368;
                                        *puVar30 = 0;
                                        *puVar16 = 0;
                                        *puVar15 = 0;
                                        *puVar13 = 0x3f800000;
                                        uVar27 = uStack_2f8;
                                        if ((uStack_300 & 1) == 0) {
                                          uVar27 = (uint)&uStack_300 | 1;
                                        }
                                        iVar24 = FUN_7154a7b4(uVar6,uVar27);
                                        uStack_368 = (byte *)CONCAT22(uStack_368._2_2_,(short)iVar24
                                                                     );
                                        bVar4 = true;
                                        if ((iVar24 != 0xffff) &&
                                           (iVar24 = FUN_7155609c(abStack_2c0), iVar24 == 10)) {
                                          pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3990)
                                          ;
                                          if (*pcVar5 == '\0') {
                                            puVar20 = (undefined4 *)
                                                      thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3980);
                                            *(undefined1 *)((int)puVar20 + 10) = 1;
                                            *puVar20 = 0xecdefb5b;
                                            puVar20[1] = 0x5df606de;
                                            *(undefined2 *)(puVar20 + 2) = 0x975f;
                                            thunk_GFDIUClbc_QcPNgD_wH
                                                      (&LAB_7152f680,puVar20,&DAT_70b0e000);
                                            puVar21 = (undefined1 *)
                                                      thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3990);
                                            *puVar21 = 1;
                                          }
                                          if (pbVar9[10] != 0) {
                                            *pbVar9 = *pbVar9 ^ 0x2b;
                                            pbVar9[1] = pbVar9[1] ^ 0x97;
                                            pbVar9[2] = pbVar9[2] ^ 0xbf;
                                            pbVar9[3] = pbVar9[3] ^ 0x8f;
                                            pbVar9[10] = 0;
                                            pbVar9[4] = pbVar9[4] ^ 0xbb;
                                            pbVar9[5] = pbVar9[5] ^ 0x6b;
                                            pbVar9[6] = pbVar9[6] ^ 0x93;
                                            pbVar9[7] = pbVar9[7] ^ 0x33;
                                            pbVar9[8] = pbVar9[8] ^ 0x2b;
                                            pbVar9[9] = pbVar9[9] ^ 0x97;
                                          }
                                          pbStack_350 = pbVar9;
                                          FUN_7152dff0(&pbStack_330,pbVar18,&pbStack_350);
                                          uStack_344 = 0x80000000;
                                          uStack_348 = 0;
                                          iStack_34c = 0;
                                          if (*pbVar18 == 2) {
                                            uStack_348 = *(undefined4 *)(*(int *)(pbVar18 + 8) + 4);
                                          }
                                          else if (*pbVar18 == 1) {
                                            iStack_34c = *(int *)(pbVar18 + 8) + 4;
                                          }
                                          else {
                                            uStack_344 = 1;
                                          }
                                          pbStack_350 = pbVar18;
                                          iVar24 = FUN_7152e984(&pbStack_330,&pbStack_350);
                                          if (iVar24 == 0) {
LAB_7152b324:
                                            bVar4 = false;
                                            aiStack_17c[iStack_b4 * 5] = (int)uStack_368;
                                            aiStack_17c[iStack_b4 * 5 + 1] = iStack_364;
                                            aiStack_17c[iStack_b4 * 5 + 2] = iStack_360;
                                            aiStack_17c[iStack_b4 * 5 + 3] = iStack_35c;
                                            aiStack_17c[iStack_b4 * 5 + 4] = iStack_358;
                                            iStack_b4 = iStack_b4 + 1;
                                          }
                                          else {
                                            pcVar5 = (char *)FUN_7152e198(&pbStack_330);
                                            if (*pcVar5 == '\x01') {
                                              uVar19 = FUN_7152ea88(&pbStack_330);
                                              pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_
                                                                         (&DAT_700c39b0);
                                              if (*pcVar5 == '\0') {
                                                puVar20 = (undefined4 *)
                                                          thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c39a0);
                                                *puVar20 = 0x8cbd1758;
                                                puVar20[1] = 0xd06ab4c;
                                                *(undefined1 *)(puVar20 + 2) = 1;
                                                thunk_GFDIUClbc_QcPNgD_wH
                                                          (&LAB_7152f6ac,puVar20,&DAT_70b0e000);
                                                puVar21 = (undefined1 *)
                                                          thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c39b0);
                                                *puVar21 = 1;
                                              }
                                              if (pbVar10[8] != 0) {
                                                *pbVar10 = *pbVar10 ^ 0x37;
                                                pbVar10[1] = pbVar10[1] ^ 0x71;
                                                pbVar10[2] = pbVar10[2] ^ 0xdb;
                                                pbVar10[3] = ~pbVar10[3];
                                                pbVar10[8] = 0;
                                                pbVar10[4] = pbVar10[4] ^ 0x29;
                                                pbVar10[5] = pbVar10[5] ^ 0xdf;
                                                pbVar10[6] = pbVar10[6] ^ 0x53;
                                                pbVar10[7] = pbVar10[7] ^ 0xd;
                                              }
                                              iVar24 = FUN_7152edc4(uVar19,pbVar10,puVar30);
                                              if (iVar24 != 0) {
                                                uVar19 = FUN_7152ea88(&pbStack_330);
                                                pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_
                                                                           (&DAT_700c39d0);
                                                if (*pcVar5 == '\0') {
                                                  puVar20 = (undefined4 *)
                                                            thunk_XcxSszXLPjQrEGhecEv_
                                                                      (&DAT_700c39c0);
                                                  *puVar20 = 0x6957782;
                                                  puVar20[1] = 0x735d2ba4;
                                                  *(undefined1 *)(puVar20 + 2) = 1;
                                                  thunk_GFDIUClbc_QcPNgD_wH
                                                            (&LAB_7152f6d4,puVar20,&DAT_70b0e000);
                                                  puVar21 = (undefined1 *)
                                                            thunk_XcxSszXLPjQrEGhecEv_
                                                                      (&DAT_700c39d0);
                                                  *puVar21 = 1;
                                                }
                                                if (pbVar11[8] != 0) {
                                                  *pbVar11 = *pbVar11 ^ 0xed;
                                                  pbVar11[1] = pbVar11[1] ^ 0x11;
                                                  pbVar11[2] = pbVar11[2] ^ 0xf3;
                                                  pbVar11[3] = pbVar11[3] ^ 0x75;
                                                  pbVar11[8] = 0;
                                                  pbVar11[4] = pbVar11[4] ^ 0xc1;
                                                  pbVar11[5] = pbVar11[5] ^ 0x5f;
                                                  pbVar11[6] = pbVar11[6] ^ 0xb;
                                                  pbVar11[7] = pbVar11[7] ^ 0x73;
                                                }
                                                iVar24 = FUN_7152edc4(uVar19,pbVar11,puVar16);
                                                if (iVar24 != 0) {
                                                  uVar19 = FUN_7152ea88(&pbStack_330);
                                                  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_
                                                                             (&DAT_700c39f0);
                                                  if (*pcVar5 == '\0') {
                                                    puVar20 = (undefined4 *)
                                                              thunk_XcxSszXLPjQrEGhecEv_
                                                                        (&DAT_700c39e0);
                                                    *(undefined2 *)(puVar20 + 2) = 0x1f9;
                                                    *puVar20 = 0x8231a48b;
                                                    puVar20[1] = 0x455898ff;
                                                    thunk_GFDIUClbc_QcPNgD_wH
                                                              (&LAB_7152f6fc,puVar20,&DAT_70b0e000);
                                                    puVar21 = (undefined1 *)
                                                              thunk_XcxSszXLPjQrEGhecEv_
                                                                        (&DAT_700c39f0);
                                                    *puVar21 = 1;
                                                  }
                                                  if (pbVar17[9] != 0) {
                                                    *pbVar17 = *pbVar17 ^ 0xf9;
                                                    pbVar17[1] = pbVar17[1] ^ 0xcb;
                                                    pbVar17[2] = pbVar17[2] ^ 0x45;
                                                    pbVar17[3] = pbVar17[3] ^ 0xe3;
                                                    pbVar17[9] = 0;
                                                    pbVar17[4] = pbVar17[4] ^ 0x8b;
                                                    pbVar17[5] = pbVar17[5] ^ 0xf1;
                                                    pbVar17[6] = pbVar17[6] ^ 0x37;
                                                    pbVar17[7] = pbVar17[7] ^ 0x2b;
                                                    pbVar17[8] = pbVar17[8] ^ 0xf9;
                                                  }
                                                  iVar24 = FUN_7152edc4(uVar19,pbVar17,puVar15);
                                                  if (iVar24 != 0) {
                                                    uVar19 = FUN_7152ea88(&pbStack_330);
                                                    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_
                                                                               (&DAT_700c3a10);
                                                    if (*pcVar5 == '\0') {
                                                      puVar20 = (undefined4 *)
                                                                thunk_XcxSszXLPjQrEGhecEv_
                                                                          (&DAT_700c3a00);
                                                      *puVar20 = 0x6508b2b6;
                                                      *(undefined1 *)((int)puVar20 + 6) = 1;
                                                      *(undefined2 *)(puVar20 + 1) = 0x6500;
                                                      thunk_GFDIUClbc_QcPNgD_wH
                                                                (&LAB_7152f728,puVar20,&DAT_70b0e000
                                                                );
                                                      puVar21 = (undefined1 *)
                                                                thunk_XcxSszXLPjQrEGhecEv_
                                                                          (&DAT_700c3a10);
                                                      *puVar21 = 1;
                                                    }
                                                    if (pbVar34[6] != 0) {
                                                      *pbVar34 = *pbVar34 ^ 0xc5;
                                                      pbVar34[1] = pbVar34[1] ^ 0xd1;
                                                      pbVar34[2] = pbVar34[2] ^ 0x69;
                                                      pbVar34[3] = pbVar34[3] ^ 9;
                                                      pbVar34[6] = 0;
                                                      pbVar34[4] = pbVar34[4] ^ 0x65;
                                                      pbVar34[5] = pbVar34[5] ^ 0x65;
                                                    }
                                                    iVar24 = FUN_7152edc4(uVar19,pbVar34,puVar13);
                                                    if (((iVar24 != 0) &&
                                                        (iVar24 = FUN_71ba2d70(*puVar30 & 0x7fffffff
                                                                               ,0x41800000),
                                                        iVar24 == 0)) &&
                                                       ((iVar24 = FUN_71ba2d70(*puVar16 & 0x7fffffff
                                                                               ,0x41800000),
                                                        iVar24 == 0 &&
                                                        (iVar24 = FUN_71ba2d70(*puVar15 & 0x7fffffff
                                                                               ,0x43b40000),
                                                        iVar24 == 0)))) {
                                                      uVar27 = *puVar13;
                                                      iVar24 = FUN_71ba2d30(uVar27,0);
                                                      if ((iVar24 == 0) &&
                                                         (iVar24 = FUN_71ba2d70(uVar27,0x41800000),
                                                         iVar24 == 0)) {
                                                        uStack_368._0_3_ =
                                                             CONCAT12(1,(ushort)uStack_368);
                                                        goto LAB_7152b324;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      if ((uStack_300 & 1) != 0) {
                                        thunk_qNQrlu(uStack_2f8);
                                      }
                                      if (bVar4) goto LAB_71529a0c;
                                      FUN_7152ed38(&pbStack_310);
                                      iVar24 = FUN_7152e984(&pbStack_310,&pbStack_320);
                                    } while (iVar24 != 0);
                                  }
                                  goto LAB_7152b594;
                                }
                              }
                            }
                          }
                          else {
                            pcVar5 = (char *)FUN_7152e198(auStack_2e0);
                            if (*pcVar5 == '\x02') {
                              FUN_7152e198(auStack_2e0);
                              uVar27 = FUN_7152ea2c();
                              if (uVar27 < 0x12) {
                                uStack_368 = (byte *)FUN_7152ea88(auStack_2e0);
                                iStack_35c = -0x80000000;
                                iStack_360 = 0;
                                iStack_364 = 0;
                                cVar22 = *uStack_368;
                                if (cVar22 == '\0') {
                                  iStack_35c = 1;
                                }
                                else if (cVar22 == '\x02') {
                                  iStack_360 = **(int **)(uStack_368 + 8);
                                }
                                else if (cVar22 == '\x01') {
                                  iStack_364 = **(int **)(uStack_368 + 8);
                                }
                                else {
                                  iStack_35c = 0;
                                }
                                uStack_2e4 = 0x80000000;
                                uStack_2e8 = 0;
                                iStack_2ec = 0;
                                if (*uStack_368 == '\x02') {
                                  uStack_2e8 = *(undefined4 *)(*(int *)(uStack_368 + 8) + 4);
                                }
                                else if (*uStack_368 == '\x01') {
                                  iStack_2ec = *(int *)(uStack_368 + 8) + 4;
                                }
                                else {
                                  uStack_2e4 = 1;
                                }
                                pcStack_2f0 = (char *)uStack_368;
                                iVar24 = FUN_7152e984(&uStack_368,&pcStack_2f0);
                                if (iVar24 != 0) {
                                  pbVar28 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38c0);
                                  pbVar34 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38e0);
                                  pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3900);
                                  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3920);
                                  uStack_378 = 0;
                                  do {
                                    pbVar11 = (byte *)FUN_7152ea88(&uStack_368);
                                    uStack_2f8 = 0;
                                    uStack_2fc = 0;
                                    uStack_300 = 0;
                                    if (*pbVar11 == 1) {
                                      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38d0);
                                      if (*pcVar5 == '\0') {
                                        puVar20 = (undefined4 *)
                                                  thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38c0);
                                        *puVar20 = 0xff083aba;
                                        *(undefined1 *)(puVar20 + 1) = 1;
                                        thunk_GFDIUClbc_QcPNgD_wH
                                                  (&LAB_7152f594,puVar20,&DAT_70b0e000);
                                        puVar21 = (undefined1 *)
                                                  thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38d0);
                                        *puVar21 = 1;
                                      }
                                      if (pbVar28[4] != 0) {
                                        *pbVar28 = *pbVar28 ^ 0xd1;
                                        pbVar28[1] = pbVar28[1] ^ 0x5f;
                                        pbVar28[2] = pbVar28[2] ^ 0x71;
                                        pbVar28[4] = 0;
                                        pbVar28[3] = ~pbVar28[3];
                                      }
                                      iVar24 = FUN_7152e29c(pbVar11,pbVar28,&uStack_300);
                                      if (iVar24 == 0) goto LAB_7152a1e0;
                                      uVar27 = uStack_2f8;
                                      if ((uStack_300 & 1) == 0) {
                                        uVar27 = (uint)&uStack_300 | 1;
                                      }
                                      uVar27 = FUN_7154a2d8(uVar6,uVar27);
                                      iVar24 = FUN_7154a83c(uVar6);
                                      if ((iVar24 == 0) ||
                                         ((*(uint *)(iVar24 + 0xc) & uStack_378) != 0))
                                      goto LAB_7152a1e0;
                                      FUN_7153e7c4(&pbStack_310,abStack_2c0,uVar6,uVar27);
                                      if ((char)pbStack_310 == '\0') goto LAB_7152a1e0;
                                      uVar12 = *(uint *)(iVar24 + 0xc);
                                      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38f0);
                                      if (*pcVar5 == '\0') {
                                        puVar20 = (undefined4 *)
                                                  thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38e0);
                                        *puVar20 = 0xe6987e41;
                                        puVar20[1] = 0x4da453d1;
                                        *(undefined1 *)(puVar20 + 2) = 1;
                                        thunk_GFDIUClbc_QcPNgD_wH
                                                  (&LAB_7152f5b8,puVar20,&DAT_70b0e000);
                                        puVar21 = (undefined1 *)
                                                  thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c38f0);
                                        *puVar21 = 1;
                                      }
                                      if (pbVar34[8] != 0) {
                                        *pbVar34 = *pbVar34 ^ 0x37;
                                        pbVar34[1] = pbVar34[1] ^ 0x17;
                                        pbVar34[2] = pbVar34[2] ^ 0xeb;
                                        pbVar34[3] = pbVar34[3] ^ 0x8f;
                                        pbVar34[8] = 0;
                                        pbVar34[4] = pbVar34[4] ^ 0xb3;
                                        pbVar34[5] = pbVar34[5] ^ 0x3f;
                                        pbVar34[6] = pbVar34[6] ^ 0xc1;
                                        pbVar34[7] = pbVar34[7] ^ 0x4d;
                                      }
                                      pbStack_320 = pbVar34;
                                      FUN_7152dff0(&pbStack_310,pbVar11,&pbStack_320);
                                      uStack_314 = 0x80000000;
                                      uStack_318 = 0;
                                      iStack_31c = 0;
                                      if (*pbVar11 == 2) {
                                        uStack_318 = *(undefined4 *)(*(int *)(pbVar11 + 8) + 4);
                                      }
                                      else if (*pbVar11 == 1) {
                                        iStack_31c = *(int *)(pbVar11 + 8) + 4;
                                      }
                                      else {
                                        uStack_314 = 1;
                                      }
                                      pbStack_320 = pbVar11;
                                      iVar7 = FUN_7152e984(&pbStack_310,&pbStack_320);
                                      if (iVar7 == 0) {
LAB_7152a380:
                                        uStack_314 = 0x80000000;
                                        uStack_318 = 0;
                                        iStack_31c = 0;
                                        if (*pbVar11 == 2) {
                                          uStack_318 = *(undefined4 *)(*(int *)(pbVar11 + 8) + 4);
                                        }
                                        else if (*pbVar11 == 1) {
                                          iStack_31c = *(int *)(pbVar11 + 8) + 4;
                                        }
                                        else {
                                          uStack_314 = 1;
                                        }
                                        pbStack_320 = pbVar11;
                                        iVar7 = FUN_7152e0f8(&pbStack_310,&pbStack_320);
                                        cVar22 = '\x01';
                                        if (iVar7 == 0) {
                                          pcVar5 = (char *)FUN_7152e198(&pbStack_310);
                                          if (*pcVar5 != '\x04') {
                    /* WARNING: Subroutine does not return */
                                            imp_abort();
                                          }
                                          cVar22 = pcVar5[8];
                                        }
                                        pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3910);
                                        if (*pcVar5 == '\0') {
                                          puVar20 = (undefined4 *)
                                                    thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3900);
                                          *(undefined1 *)((int)puVar20 + 10) = 1;
                                          *puVar20 = 0x7ad15e4d;
                                          puVar20[1] = 0xe9029bdf;
                                          *(undefined2 *)(puVar20 + 2) = 0x3b5a;
                                          thunk_GFDIUClbc_QcPNgD_wH
                                                    (&LAB_7152f5e0,puVar20,&DAT_70b0e000);
                                          puVar21 = (undefined1 *)
                                                    thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3910);
                                          *puVar21 = 1;
                                        }
                                        if (pbVar9[10] != 0) {
                                          *pbVar9 = *pbVar9 ^ 0x3f;
                                          pbVar9[1] = pbVar9[1] ^ 0x3b;
                                          pbVar9[2] = pbVar9[2] ^ 0xa5;
                                          pbVar9[3] = pbVar9[3] ^ 0x1f;
                                          pbVar9[10] = 0;
                                          pbVar9[4] = pbVar9[4] ^ 0xa7;
                                          pbVar9[5] = pbVar9[5] ^ 0xef;
                                          pbVar9[6] = pbVar9[6] ^ 0x77;
                                          pbVar9[7] = pbVar9[7] ^ 0x9b;
                                          pbVar9[8] = pbVar9[8] ^ 0x3f;
                                          pbVar9[9] = pbVar9[9] ^ 0x3b;
                                        }
                                        pbStack_330 = pbVar9;
                                        FUN_7152dff0(&pbStack_320,pbVar11,&pbStack_330);
                                        uStack_324 = 0x80000000;
                                        uStack_328 = 0;
                                        uStack_32c = 0;
                                        if (*pbVar11 == 2) {
                                          uStack_328 = *(uint *)(*(int *)(pbVar11 + 8) + 4);
                                        }
                                        else if (*pbVar11 == 1) {
                                          uStack_32c = *(int *)(pbVar11 + 8) + 4;
                                        }
                                        else {
                                          uStack_324 = 1;
                                        }
                                        pbStack_330 = pbVar11;
                                        iVar7 = FUN_7152e984(&pbStack_320,&pbStack_330);
                                        uVar32 = 0xffff;
                                        if (iVar7 == 0) {
LAB_7152a5d8:
                                          iVar7 = *(int *)(iVar24 + 200);
                                          if (((iVar7 == 0) ||
                                              (uVar25 = (*(int *)(iVar24 + 0xcc) - iVar7 >> 2) *
                                                        0x286bca1b,
                                              uVar25 < uVar32 || uVar25 - uVar32 == 0)) ||
                                             (iVar7 = uVar32 * 0x4c + iVar7,
                                             *(char *)(iVar7 + 0x24) == '\0')) {
                                            puVar13 = (uint *)(iVar24 + 0xa1);
                                          }
                                          else {
                                            puVar13 = (uint *)(iVar7 + 0x26);
                                          }
                                          auStack_340[0] = *puVar13;
                                          auStack_340[1] = puVar13[1];
                                          auStack_340[2] = puVar13[2];
                                          pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3930)
                                          ;
                                          if (*pcVar5 == '\0') {
                                            puVar20 = (undefined4 *)
                                                      thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3920);
                                            *puVar20 = 0xc5b1a4f3;
                                            *(undefined2 *)(puVar20 + 1) = 0x131;
                                            thunk_GFDIUClbc_QcPNgD_wH
                                                      (&LAB_7152f60c,puVar20,&DAT_70b0e000);
                                            puVar21 = (undefined1 *)
                                                      thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c3930);
                                            *puVar21 = 1;
                                          }
                                          if (pbVar10[5] != 0) {
                                            pbVar10[5] = 0;
                                            *pbVar10 = *pbVar10 ^ 0x87;
                                            pbVar10[1] = pbVar10[1] ^ 0xcd;
                                            pbVar10[2] = pbVar10[2] ^ 0xdf;
                                            pbVar10[3] = pbVar10[3] ^ 0xb1;
                                            pbVar10[4] = pbVar10[4] ^ 0x31;
                                          }
                                          pbStack_350 = pbVar10;
                                          FUN_7152dff0(&pbStack_330,pbVar11,&pbStack_350);
                                          uStack_344 = 0x80000000;
                                          uStack_348 = 0;
                                          iStack_34c = 0;
                                          if (*pbVar11 == 2) {
                                            uStack_348 = *(undefined4 *)(*(int *)(pbVar11 + 8) + 4);
                                          }
                                          else if (*pbVar11 == 1) {
                                            iStack_34c = *(int *)(pbVar11 + 8) + 4;
                                          }
                                          else {
                                            uStack_344 = 1;
                                          }
                                          pbStack_350 = pbVar11;
                                          iVar24 = FUN_7152e984(&pbStack_330,&pbStack_350);
                                          if (iVar24 == 0) {
LAB_7152a810:
                                            iVar24 = 0x132;
                                            puVar26 = auStack_2b0;
                                            do {
                                              if (*puVar26 == uVar27) {
                                                *(char *)(puVar26 + 1) = cVar22;
                                                puVar26[2] = (ushort)uVar32;
                                                *(uint *)(puVar26 + 3) = auStack_340[0];
                                                *(uint *)(puVar26 + 5) = auStack_340[1];
                                                *(uint *)(puVar26 + 7) = auStack_340[2];
                                              }
                                              iVar24 = iVar24 + -0x12;
                                              puVar26 = puVar26 + 9;
                                            } while (iVar24 != 0);
                                            bVar4 = false;
                                          }
                                          else {
                                            pcVar5 = (char *)FUN_7152e198(&pbStack_330);
                                            bVar4 = true;
                                            if (*pcVar5 == '\x02') {
                                              FUN_7152e198(&pbStack_330);
                                              iVar24 = FUN_7152ecd8();
                                              if (iVar24 == 0) {
                                                FUN_7152e198(&pbStack_330);
                                                uVar25 = FUN_7152ea2c();
                                                if (uVar25 < 4) {
                                                  FUN_7152e198(&pbStack_330);
                                                  iVar24 = FUN_7152ea2c();
                                                  if (iVar24 != 0) {
                                                    iVar24 = 0;
                                                    uVar25 = 0;
                                                    do {
                                                      pcVar5 = (char *)FUN_7152ea88(&pbStack_330);
                                                      if (*pcVar5 != '\x02') {
                    /* WARNING: Subroutine does not return */
                                                        imp_abort();
                                                      }
                                                      if (1 < *(byte *)(**(int **)(pcVar5 + 8) +
                                                                       uVar25 * 0x10) - 5)
                                                      goto LAB_7152a868;
                                                      uVar38 = FUN_7152e210(**(int **)(pcVar5 + 8) +
                                                                            iVar24);
                                                      uVar14 = (uint)uVar38;
                                                      if ((int)((ulonglong)uVar38 >> 0x20) != 0)
                                                      goto LAB_7152a868;
                                                      auStack_340[uVar25] =
                                                           uVar14 << 0x18 |
                                                           (uVar14 >> 8 & 0xff) << 0x10 |
                                                           (uVar14 >> 0x10 & 0xff) << 8 |
                                                           uVar14 >> 0x18;
                                                      FUN_7152e198(&pbStack_330);
                                                      uVar25 = uVar25 + 1;
                                                      uVar14 = FUN_7152ea2c();
                                                      iVar24 = iVar24 + 0x10;
                                                    } while (uVar25 < uVar14);
                                                  }
                                                  goto LAB_7152a810;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          pcVar5 = (char *)FUN_7152e198(&pbStack_320);
                                          bVar4 = true;
                                          if (*pcVar5 == '\x03') {
                                            uVar19 = FUN_7152e198(&pbStack_320);
                                            FUN_7152eb28(&pbStack_330,uVar19);
                                            uVar25 = uStack_32c;
                                            if (((uint)pbStack_330 & 1) == 0) {
                                              uVar25 = (uint)pbStack_330 >> 1 & 0x7f;
                                            }
                                            if (uVar25 == 0) {
                                              bVar35 = true;
                                            }
                                            else {
                                              uVar32 = uStack_328;
                                              if (((uint)pbStack_330 & 1) == 0) {
                                                uVar32 = (uint)&pbStack_330 | 1;
                                              }
                                              uVar32 = FUN_7152ebac(iVar24,uVar32);
                                              bVar35 = uVar32 != 0xffff;
                                            }
                                            if (((uint)pbStack_330 & 1) != 0) {
                                              thunk_qNQrlu(uStack_328);
                                            }
                                            if (bVar35) goto LAB_7152a5d8;
                                          }
                                        }
                                      }
                                      else {
                                        pcVar5 = (char *)FUN_7152e198(&pbStack_310);
                                        bVar4 = true;
                                        if (*pcVar5 == '\x04') goto LAB_7152a380;
                                      }
LAB_7152a868:
                                      uStack_378 = uVar12 | uStack_378;
                                    }
                                    else {
LAB_7152a1e0:
                                      bVar4 = true;
                                    }
                                    if ((uStack_300 & 1) != 0) {
                                      thunk_qNQrlu(uStack_2f8);
                                    }
                                    if (bVar4) goto LAB_71529a0c;
                                    FUN_7152ed38(&uStack_368);
                                    iVar24 = FUN_7152e984(&uStack_368,&pcStack_2f0);
                                  } while (iVar24 != 0);
                                }
                                goto LAB_7152a9d8;
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
LAB_71529a0c:
          if ((uStack_a8 & 1) != 0) {
            thunk_qNQrlu(uStack_a0);
          }
          if ((uStack_98 & 1) != 0) {
            thunk_qNQrlu(uStack_90);
          }
          if ((uStack_88 & 1) != 0) {
            thunk_qNQrlu(uStack_80);
          }
          cVar22 = acStack_68[0];
          if ((uStack_78 & 1) != 0) {
            thunk_qNQrlu(uStack_70);
            cVar22 = acStack_68[0];
          }
        }
      }
    }
    else {
      if (acStack_68[0] == '\x02') {
        pbVar34 = *(byte **)(aiStack_60[0] + 4);
        piVar31 = (int *)0x0;
        goto LAB_715293dc;
      }
      bVar4 = true;
      piVar31 = (int *)0x0;
      pbVar34 = (byte *)0x0;
      pbVar28 = pbVar34;
      if (acStack_68[0] == '\x02') goto LAB_71529420;
LAB_715293ec:
      if (acStack_68[0] == '\x01') {
        if (piVar31 != (int *)(aiStack_60[0] + 4)) {
          pbVar34 = (byte *)(piVar31 + 8);
          goto LAB_71529434;
        }
        cVar22 = '\x01';
      }
      else {
        cVar22 = acStack_68[0];
        if (!bVar4) {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
      }
    }
  }
LAB_71529a60:
  FUN_7152f750(aiStack_60,cVar22);
joined_r0x71529294:
  if ((abStack_54[0] & 1) != 0) {
    thunk_qNQrlu(uStack_4c);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_2c);
}


// =========================================================================
// Function: FUN_7152dd84
// Entry: 0x7152dd84 | Size: 392 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7152dd84(undefined1 *param_1,byte *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int aiStack_c8 [4];
  int *piStack_b8;
  int aiStack_b0 [4];
  int *piStack_a0;
  int iStack_70;
  int iStack_6c;
  byte bStack_64;
  undefined4 uStack_5c;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar4 = *(uint *)(param_2 + 4);
  pbVar5 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar4 = (uint)(*param_2 >> 1);
  }
  piStack_b8 = (int *)param_3[4];
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (piStack_b8 == (int *)0x0) {
    piStack_b8 = (int *)0x0;
  }
  else if (piStack_b8 == param_3) {
    piStack_b8 = aiStack_c8;
    (**(code **)(*param_3 + 0xc))(param_3,piStack_b8,pbVar5 + uVar4);
  }
  else {
    param_3[4] = 0;
  }
  piVar1 = aiStack_b0;
  piVar2 = aiStack_c8;
  FUN_71530230(piVar1,pbVar5,pbVar5 + uVar4,piVar2,param_4,param_5,param_6);
  FUN_715304bc(piVar1,1,param_1);
  if ((bStack_64 & 1) != 0) {
    thunk_qNQrlu(uStack_5c);
  }
  if (iStack_70 != 0) {
    iStack_6c = iStack_70;
    thunk_qNQrlu();
  }
  if (piStack_a0 == piVar1) {
    iVar3 = 0x10;
LAB_7152deac:
    (**(code **)(*piVar1 + iVar3))();
  }
  else {
    iVar3 = 0x14;
    piVar1 = piStack_a0;
    if (piStack_a0 != (int *)0x0) goto LAB_7152deac;
  }
  if (piStack_b8 == piVar2) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piStack_b8;
    if (piStack_b8 == (int *)0x0) goto LAB_7152dee8;
  }
  (**(code **)(*piVar2 + iVar3))();
LAB_7152dee8:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7152dff0
// Entry: 0x7152dff0 | Size: 184 bytes
// =========================================================================

void FUN_7152dff0(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  param_1[3] = 0x80000000;
  cVar1 = *param_2;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (cVar1 == '\x01') {
    piVar3 = (int *)(*(int *)(param_2 + 8) + 4);
    piVar4 = (int *)*piVar3;
    param_1[1] = piVar3;
    piVar5 = piVar3;
    if (piVar4 != (int *)0x0) {
      do {
        iVar2 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar4 + 4,*param_3);
        if (-1 < iVar2) {
          piVar5 = piVar4;
        }
        piVar4 = (int *)piVar4[-(iVar2 >> 0x1f)];
      } while (piVar4 != (int *)0x0);
      if ((piVar5 != piVar3) &&
         (iVar2 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar5 + 4,*param_3), iVar2 < 1)) {
        piVar3 = piVar5;
      }
    }
    param_1[1] = piVar3;
    return;
  }
  if (cVar1 != '\x02') {
    param_1[3] = 1;
    return;
  }
  param_1[2] = *(undefined4 *)(*(int *)(param_2 + 8) + 4);
  return;
}


// =========================================================================
// Function: FUN_7152e0f8
// Entry: 0x7152e0f8 | Size: 108 bytes
// =========================================================================

bool FUN_7152e0f8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  if (pcVar3 != (char *)*param_2) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '\x02') {
      iVar2 = param_2[2];
      iVar1 = param_1[2];
    }
    else if (*pcVar3 == '\x01') {
      iVar2 = param_2[1];
      iVar1 = param_1[1];
    }
    else {
      iVar2 = param_2[3];
      iVar1 = param_1[3];
    }
    return iVar1 == iVar2;
  }
  return true;
}


// =========================================================================
// Function: FUN_7152e198
// Entry: 0x7152e198 | Size: 68 bytes
// =========================================================================

char * FUN_7152e198(undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x02') {
    return (char *)param_1[2];
  }
  if (*pcVar1 != '\x01') {
    if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
      imp_abort(pcVar1);
    }
    return pcVar1;
  }
  return (char *)(param_1[1] + 0x20);
}


// =========================================================================
// Function: FUN_7152e210
// Entry: 0x7152e210 | Size: 60 bytes
// =========================================================================

undefined8 FUN_7152e210(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x05') {
    if (cVar1 == '\a') {
      uVar2 = FUN_71ba16f4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      return uVar2;
    }
    if (cVar1 != '\x06') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return *(undefined8 *)(param_1 + 8);
}


// =========================================================================
// Function: FUN_7152e29c
// Entry: 0x7152e29c | Size: 424 bytes
// =========================================================================

bool FUN_7152e29c(char *param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    piVar8 = (int *)0x0;
    piVar6 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar7 = (int *)*piVar6;
    piVar2 = piVar6;
    if (piVar7 != (int *)0x0) {
      do {
        iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar7 + 4,param_2);
        if (-1 < iVar1) {
          piVar2 = piVar7;
        }
        piVar7 = (int *)piVar7[-(iVar1 >> 0x1f)];
      } while (piVar7 != (int *)0x0);
      if ((piVar2 != piVar6) &&
         (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar2 + 4,param_2), iVar1 < 1)) {
        piVar6 = piVar2;
      }
    }
  }
  else {
    if (cVar3 != '\x02') {
      bVar5 = true;
      piVar6 = (int *)0x0;
      piVar8 = (int *)0x0;
      goto joined_r0x7152e340;
    }
    piVar8 = *(int **)(*(int *)(param_1 + 8) + 4);
    piVar6 = (int *)0x0;
  }
  cVar3 = *param_1;
  bVar5 = false;
joined_r0x7152e340:
  if (cVar3 == '\x02') {
    cVar3 = '\x02';
    piVar2 = piVar8;
    if (piVar8 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return false;
    }
  }
  else {
    if (cVar3 != '\x01') {
      if (!bVar5) {
                    /* WARNING: Subroutine does not return */
        imp_abort(0);
      }
      return false;
    }
    if (piVar6 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return false;
    }
    cVar3 = '\x01';
    piVar2 = piVar6 + 8;
  }
  if ((char)*piVar2 != '\x03') {
    return false;
  }
  if (cVar3 != '\x02') {
    if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar8 = piVar6 + 8;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if ((char)*piVar8 == '\x03') {
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (&uStack_30,piVar8[2]);
    if ((*param_3 & 1) != 0) {
      thunk_qNQrlu(*(undefined4 *)(param_3 + 8));
    }
    *(undefined4 *)param_3 = uStack_30;
    *(undefined4 *)(param_3 + 4) = uStack_2c;
    *(undefined4 *)(param_3 + 8) = uStack_28;
    uVar4 = *(uint *)(param_3 + 4);
    if ((*param_3 & 1) == 0) {
      uVar4 = (uint)(*param_3 >> 1);
    }
    return uVar4 - 1 < 0x80;
  }
                    /* WARNING: Subroutine does not return */
  imp_abort();
}


// =========================================================================
// Function: FUN_7152e520
// Entry: 0x7152e520 | Size: 104 bytes
// =========================================================================

undefined4 FUN_7152e520(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = imp_strlen(param_2);
  bVar1 = *param_1;
  uVar6 = *(uint *)(param_1 + 4);
  uVar3 = 1;
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint)(bVar1 >> 1);
  }
  if (uVar2 == uVar6) {
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6b48(param_1);
    }
    pbVar4 = *(byte **)(param_1 + 8);
    if ((bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar5 = imp_memcmp(pbVar4,param_2);
    uVar3 = 0;
    if (iVar5 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_7152e5f4
// Entry: 0x7152e5f4 | Size: 676 bytes
// =========================================================================

void FUN_7152e5f4(undefined1 *param_1)

{
  param_1[0x12] = 1;
  param_1[0x24] = 1;
  param_1[0x36] = 1;
  param_1[0x48] = 1;
  param_1[0x5a] = 1;
  param_1[0x6c] = 1;
  param_1[0x7e] = 1;
  param_1[0x90] = 1;
  param_1[0xa2] = 1;
  param_1[0xb4] = 1;
  param_1[0xc6] = 1;
  param_1[0xd8] = 1;
  param_1[0xea] = 1;
  param_1[0xfc] = 1;
  param_1[0x10e] = 1;
  param_1[0x120] = 1;
  param_1[0x132] = 1;
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined2 *)(param_1 + 0x140) = 0xffff;
  *(undefined2 *)(param_1 + 0x1f8) = 0xffff;
  *(undefined2 *)(param_1 + 0x1e4) = 0xffff;
  *(undefined2 *)(param_1 + 0x1d0) = 0xffff;
  *(undefined2 *)(param_1 + 0x1bc) = 0xffff;
  *(undefined2 *)(param_1 + 0x1a8) = 0xffff;
  *(undefined2 *)(param_1 + 0x194) = 0xffff;
  *(undefined2 *)(param_1 + 0x180) = 0xffff;
  *(undefined2 *)(param_1 + 0x16c) = 0xffff;
  *(undefined2 *)(param_1 + 0x158) = 0xffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x72) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbe) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xde) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xda) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x102) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xfe) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x122) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x144) = 0xffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0x3f800000;
  param_1[0x1e6] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  param_1[0x1d2] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  param_1[0x1be] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3f800000;
  param_1[0x1aa] = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  param_1[0x182] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0x3f800000;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x3f800000;
  param_1[0x15a] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
  param_1[0x146] = 0;
  return;
}


// =========================================================================
// Function: FUN_7152e8b0
// Entry: 0x7152e8b0 | Size: 104 bytes
// =========================================================================

bool FUN_7152e8b0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = imp_strlen(param_2);
  bVar1 = *param_1;
  uVar6 = *(uint *)(param_1 + 4);
  bVar2 = false;
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint)(bVar1 >> 1);
  }
  if (uVar3 == uVar6) {
    if (uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6b48(param_1);
    }
    pbVar4 = *(byte **)(param_1 + 8);
    if ((bVar1 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    iVar5 = imp_memcmp(pbVar4,param_2);
    bVar2 = iVar5 == 0;
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_7152e984
// Entry: 0x7152e984 | Size: 116 bytes
// =========================================================================

bool FUN_7152e984(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  if (pcVar3 != (char *)*param_2) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '\x02') {
      iVar2 = param_2[2];
      iVar1 = param_1[2];
    }
    else if (*pcVar3 == '\x01') {
      iVar2 = param_2[1];
      iVar1 = param_1[1];
    }
    else {
      iVar2 = param_2[3];
      iVar1 = param_1[3];
    }
    return iVar1 != iVar2;
  }
  return false;
}


// =========================================================================
// Function: FUN_7152ea2c
// Entry: 0x7152ea2c | Size: 68 bytes
// =========================================================================

int FUN_7152ea2c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return 1;
    }
    return (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 4;
  }
  return *(int *)(*(int *)(param_1 + 8) + 8);
}


// =========================================================================
// Function: FUN_7152ea88
// Entry: 0x7152ea88 | Size: 80 bytes
// =========================================================================

char * FUN_7152ea88(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    return (char *)(param_1[1] + 0x20);
  }
  if (cVar1 == '\x02') {
    return (char *)param_1[2];
  }
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    imp_abort(pcVar2);
  }
  if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort(pcVar2);
  }
  return pcVar2;
}


// =========================================================================
// Function: FUN_7152eb28
// Entry: 0x7152eb28 | Size: 52 bytes
// =========================================================================

void FUN_7152eb28(undefined4 *param_1,char *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 == '\x03') {
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (param_1,*(undefined4 *)(param_2 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp_abort();
}


// =========================================================================
// Function: FUN_7152ebac
// Entry: 0x7152ebac | Size: 192 bytes
// =========================================================================

uint FUN_7152ebac(int param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *unaff_r6;
  byte *unaff_r7;
  uint uVar7;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') {
      unaff_r6 = *(byte **)(param_1 + 200);
      unaff_r7 = *(byte **)(param_1 + 0xcc);
    }
    if (*param_2 != '\0' && unaff_r7 != unaff_r6) {
      uVar6 = ((int)unaff_r7 - (int)unaff_r6 >> 2) * 0x286bca1b;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar2 = imp_strlen(param_2);
      uVar7 = 0;
      do {
        bVar1 = *unaff_r6;
        uVar3 = *(uint *)(unaff_r6 + 4);
        if ((bVar1 & 1) == 0) {
          uVar3 = (uint)(bVar1 >> 1);
        }
        if (uVar2 == uVar3) {
          if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(unaff_r6);
          }
          pbVar4 = *(byte **)(unaff_r6 + 8);
          if ((bVar1 & 1) == 0) {
            pbVar4 = unaff_r6 + 1;
          }
          iVar5 = imp_memcmp(pbVar4,param_2,uVar2);
          if (iVar5 == 0) goto LAB_7152ebd8;
        }
        uVar7 = uVar7 + 1;
        unaff_r6 = unaff_r6 + 0x4c;
      } while (uVar6 != uVar7);
    }
  }
  uVar7 = 0xffff;
LAB_7152ebd8:
  return uVar7 & 0xffff;
}


// =========================================================================
// Function: FUN_7152ecd8
// Entry: 0x7152ecd8 | Size: 72 bytes
// =========================================================================

bool FUN_7152ecd8(char *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return true;
  }
  if (cVar1 == '\x01') {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      return false;
    }
    iVar2 = **(int **)(param_1 + 8) - (*(int **)(param_1 + 8))[1];
  }
  return iVar2 == 0;
}


// =========================================================================
// Function: FUN_7152ed38
// Entry: 0x7152ed38 | Size: 116 bytes
// =========================================================================

void FUN_7152ed38(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if (*(char *)*param_1 == '\x02') {
    param_1[2] = param_1[2] + 0x10;
    return;
  }
  if (*(char *)*param_1 != '\x01') {
    param_1[3] = param_1[3] + 1;
    return;
  }
  piVar3 = (int *)((int *)param_1[1])[1];
  piVar2 = (int *)param_1[1];
  if (piVar3 == (int *)0x0) {
    do {
      piVar1 = (int *)piVar2[2];
      bVar4 = (int *)*piVar1 != piVar2;
      piVar2 = piVar1;
    } while (bVar4);
  }
  else {
    do {
      piVar1 = piVar3;
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  param_1[1] = piVar1;
  return;
}


// =========================================================================
// Function: FUN_7152edc4
// Entry: 0x7152edc4 | Size: 484 bytes
// =========================================================================

bool FUN_7152edc4(char *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  
  cVar5 = *param_1;
  if (cVar5 == '\x01') {
    pbVar10 = (byte *)0x0;
    piVar9 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar7 = (int *)*piVar9;
    piVar8 = piVar9;
    if (piVar7 != (int *)0x0) {
      do {
        iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar7 + 4,param_2);
        if (-1 < iVar1) {
          piVar8 = piVar7;
        }
        piVar7 = (int *)piVar7[-(iVar1 >> 0x1f)];
      } while (piVar7 != (int *)0x0);
      if ((piVar8 != piVar9) &&
         (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar8 + 4,param_2), iVar1 < 1)) {
        piVar9 = piVar8;
      }
    }
  }
  else {
    if (cVar5 != '\x02') {
      bVar6 = true;
      piVar9 = (int *)0x0;
      pbVar10 = (byte *)0x0;
      goto joined_r0x7152ee6c;
    }
    pbVar10 = *(byte **)(*(int *)(param_1 + 8) + 4);
    piVar9 = (int *)0x0;
  }
  cVar5 = *param_1;
  bVar6 = false;
joined_r0x7152ee6c:
  if (cVar5 == '\x02') {
    cVar5 = '\x02';
    pbVar2 = pbVar10;
    if (pbVar10 == *(byte **)(*(int *)(param_1 + 8) + 4)) {
      return false;
    }
  }
  else {
    if (cVar5 != '\x01') {
      if (!bVar6) {
                    /* WARNING: Subroutine does not return */
        imp_abort(0);
      }
      return false;
    }
    if (piVar9 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return false;
    }
    cVar5 = '\x01';
    pbVar2 = (byte *)(piVar9 + 8);
  }
  if (2 < *pbVar2 - 5) {
    return false;
  }
  if (cVar5 != '\x02') {
    if (cVar5 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort(0);
    }
    pbVar10 = (byte *)(piVar9 + 8);
  }
  switch(*pbVar10) {
  case 4:
    uVar3 = 0;
    if (pbVar10[8] != 0) {
      uVar3 = 0x3f800000;
    }
    break;
  case 5:
    uVar3 = FUN_71ba19d8(*(undefined4 *)(pbVar10 + 8),*(undefined4 *)(pbVar10 + 0xc));
    break;
  case 6:
    uVar3 = FUN_71ba1c88(*(undefined4 *)(pbVar10 + 8),*(undefined4 *)(pbVar10 + 0xc));
    break;
  case 7:
    uVar3 = FUN_71ba242c(*(undefined4 *)(pbVar10 + 8),*(undefined4 *)(pbVar10 + 0xc));
    break;
  default:
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  *param_3 = uVar3;
  iVar1 = FUN_71ba2cf0(uVar3 & 0x7fffffff,0x7f800000);
  iVar4 = FUN_71ba0408(uVar3 & 0x7fffffff,0x7f800000);
  return iVar4 == 0 && iVar1 == 0;
}


// =========================================================================
// Function: FUN_7152f0e8
// Entry: 0x7152f0e8 | Size: 616 bytes
// =========================================================================

void FUN_7152f0e8(undefined4 *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  while( true ) {
    if (param_2 == param_3) {
      return;
    }
    uVar2 = (uint)param_2[3];
    uVar5 = (uint)*param_2;
    uVar4 = (uint)param_2[1];
    uVar3 = (uint)param_2[2];
    uVar1 = uVar5 - 0x41;
    if (0x19 < uVar1) {
      if (uVar5 - 0x61 < 0x1a) {
        uVar1 = uVar5 - 0x47;
      }
      else if (uVar5 - 0x30 < 10) {
        uVar1 = uVar5 + 4;
      }
      else if (uVar5 == 0x2b) {
        uVar1 = 0x3e;
      }
      else if (uVar5 == 0x3d) {
        uVar1 = 0xfffffffe;
      }
      else if (uVar5 == 0x2f) {
        uVar1 = 0x3f;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
    uVar5 = uVar4 - 0x41;
    if (0x19 < uVar5) {
      if (uVar4 - 0x61 < 0x1a) {
        uVar5 = uVar4 - 0x47;
      }
      else if (uVar4 - 0x30 < 10) {
        uVar5 = uVar4 + 4;
      }
      else if (uVar4 == 0x2b) {
        uVar5 = 0x3e;
      }
      else if (uVar4 == 0x3d) {
        uVar5 = 0xfffffffe;
      }
      else if (uVar4 == 0x2f) {
        uVar5 = 0x3f;
      }
      else {
        uVar5 = 0xffffffff;
      }
    }
    uVar4 = uVar3 - 0x41;
    if (0x19 < uVar4) {
      if (uVar3 - 0x61 < 0x1a) {
        uVar4 = uVar3 - 0x47;
      }
      else if (uVar3 - 0x30 < 10) {
        uVar4 = uVar3 + 4;
      }
      else if (uVar3 == 0x2b) {
        uVar4 = 0x3e;
      }
      else if (uVar3 == 0x3d) {
        uVar4 = 0xfffffffe;
      }
      else if (uVar3 == 0x2f) {
        uVar4 = 0x3f;
      }
      else {
        uVar4 = 0xffffffff;
      }
    }
    uVar3 = uVar2 - 0x41;
    if (0x19 < uVar3) break;
LAB_7152f2ac:
    if (uVar4 == 0xfffffffe) goto LAB_7152f314;
    if (uVar3 == 0xfffffffe) {
LAB_7152f320:
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (param_1,(uVar5 >> 4 | uVar1 << 2) & 0xff);
      uVar1 = uVar4 >> 2 | uVar5 << 4;
      goto LAB_7152f33c;
    }
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (param_1,(uVar5 >> 4 | uVar1 << 2) & 0xff);
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (param_1,(uVar4 >> 2 | uVar5 << 4) & 0xff);
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (param_1,(uVar3 | uVar4 << 6) & 0xff);
    param_2 = param_2 + 4;
  }
  if (uVar2 - 0x61 < 0x1a) {
    uVar3 = uVar2 - 0x47;
    goto LAB_7152f2ac;
  }
  if (uVar2 - 0x30 < 10) {
    uVar3 = uVar2 + 4;
    goto LAB_7152f2ac;
  }
  if (uVar2 == 0x2b) {
    uVar3 = 0x3e;
    goto LAB_7152f2ac;
  }
  if (uVar2 == 0x2f) {
    uVar3 = 0x3f;
    goto LAB_7152f2ac;
  }
  if (uVar2 != 0x3d) {
    uVar3 = 0xffffffff;
    goto LAB_7152f2ac;
  }
  if (uVar4 != 0xfffffffe) goto LAB_7152f320;
LAB_7152f314:
  uVar1 = uVar5 >> 4 | uVar1 << 2;
LAB_7152f33c:
  thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
            (param_1,uVar1 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7152f750
// Entry: 0x7152f750 | Size: 1100 bytes
// =========================================================================

void FUN_7152f750(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 *puStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  piVar3 = (int *)*param_1;
  if (param_2 == 1 && piVar3 == (int *)0x0) {
    return;
  }
  if ((param_2 == 8 || (param_2 & 0xfe) == 2) && piVar3 == (int *)0x0) {
    return;
  }
  if (param_2 - 1 < 2) {
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    if (param_2 == 2) {
      FUN_7152fd78(&piStack_30,piVar3[1] - *piVar3 >> 4);
      piVar3 = *(int **)*param_1;
      piVar14 = (int *)((undefined4 *)*param_1)[1];
      if (piVar3 != piVar14) {
        do {
          if (piStack_2c < piStack_28) {
            iVar8 = piVar3[1];
            iVar9 = piVar3[2];
            iVar12 = piVar3[3];
            *piStack_2c = *piVar3;
            piStack_2c[1] = iVar8;
            piStack_2c[2] = iVar9;
            piStack_2c[3] = iVar12;
            piStack_2c = piStack_2c + 4;
            piVar3[2] = 0;
            piVar3[3] = 0;
            *(undefined1 *)piVar3 = 0;
          }
          else {
            piStack_2c = (int *)FUN_7152ff58(&piStack_30,piVar3);
          }
          piVar3 = piVar3 + 4;
        } while (piVar3 != piVar14);
      }
    }
    else {
      FUN_7152fd78(&piStack_30,piVar3[2]);
      piVar14 = (undefined4 *)*param_1 + 1;
      piVar3 = *(int **)*param_1;
      if (piVar3 != piVar14) {
        do {
          if (piStack_2c < piStack_28) {
            iVar9 = piVar3[9];
            iVar12 = piVar3[10];
            iVar8 = piVar3[0xb];
            *piStack_2c = piVar3[8];
            piStack_2c[1] = iVar9;
            piStack_2c[2] = iVar12;
            piStack_2c[3] = iVar8;
            piStack_2c = piStack_2c + 4;
            piVar3[10] = 0;
            piVar3[0xb] = 0;
            *(undefined1 *)(piVar3 + 8) = 0;
          }
          else {
            piStack_2c = (int *)FUN_7152ff58(&piStack_30);
          }
          piVar16 = (int *)piVar3[1];
          piVar15 = piVar3;
          if ((int *)piVar3[1] == (int *)0x0) {
            do {
              piVar3 = (int *)piVar15[2];
              bVar19 = (int *)*piVar3 != piVar15;
              piVar15 = piVar3;
            } while (bVar19);
          }
          else {
            do {
              piVar3 = piVar16;
              piVar16 = (int *)*piVar3;
            } while ((int *)*piVar3 != (int *)0x0);
          }
        } while (piVar3 != piVar14);
      }
    }
    piVar3 = piStack_2c;
    if (piStack_30 != piStack_2c) {
      do {
        iStack_34 = piStack_2c[-1];
        puStack_38 = (undefined4 *)piStack_2c[-2];
        uVar6 = piStack_2c[-4];
        piStack_2c[-2] = 0;
        piStack_2c[-1] = 0;
        *(undefined1 *)(piStack_2c + -4) = 0;
        piVar3 = piStack_2c + -4;
        FUN_7152f750(piStack_2c + -2,(char)*piVar3);
        uVar7 = uVar6 & 0xff;
        piStack_2c = piVar3;
        if (uVar7 == 1) {
          puVar10 = puStack_38 + 1;
          puVar17 = (undefined4 *)*puStack_38;
          puVar1 = puStack_38;
          while (puStack_38 = puVar1, puVar17 != puVar10) {
            if (piStack_2c < piStack_28) {
              iVar9 = puVar17[9];
              iVar12 = puVar17[10];
              iVar8 = puVar17[0xb];
              *piStack_2c = puVar17[8];
              piStack_2c[1] = iVar9;
              piStack_2c[2] = iVar12;
              piStack_2c[3] = iVar8;
              piStack_2c = piStack_2c + 4;
              puVar17[10] = 0;
              puVar17[0xb] = 0;
              *(undefined1 *)(puVar17 + 8) = 0;
            }
            else {
              piStack_2c = (int *)FUN_7152ff58(&piStack_30);
            }
            puVar2 = (undefined4 *)puVar17[1];
            puVar18 = puVar17;
            puVar1 = puStack_38;
            if ((undefined4 *)puVar17[1] == (undefined4 *)0x0) {
              do {
                puVar17 = (undefined4 *)puVar18[2];
                bVar19 = (undefined4 *)*puVar17 != puVar18;
                puVar18 = puVar17;
              } while (bVar19);
            }
            else {
              do {
                puVar17 = puVar2;
                puVar2 = (undefined4 *)*puVar17;
              } while ((undefined4 *)*puVar17 != (undefined4 *)0x0);
            }
          }
          puVar17 = puVar1 + 1;
          FUN_71530134(puVar1,*puVar17);
          *puVar17 = 0;
          *puVar1 = puVar17;
          puVar1[2] = 0;
        }
        else if (uVar7 == 2) {
          piVar14 = (int *)*puStack_38;
          piVar16 = (int *)puStack_38[1];
          if (piVar14 == piVar16) {
            puStack_38[1] = piVar14;
          }
          else {
            do {
              if (piVar3 < piStack_28) {
                iVar8 = piVar14[1];
                iVar9 = piVar14[2];
                iVar12 = piVar14[3];
                *piVar3 = *piVar14;
                piVar3[1] = iVar8;
                piVar3[2] = iVar9;
                piVar3[3] = iVar12;
                piVar3 = piVar3 + 4;
                piVar14[2] = 0;
                piVar14[3] = 0;
                *(undefined1 *)piVar14 = 0;
              }
              else {
                piStack_2c = piVar3;
                piVar3 = (int *)FUN_7152ff58(&piStack_30,piVar14);
              }
              piVar14 = piVar14 + 4;
            } while (piVar14 != piVar16);
            puVar11 = (undefined1 *)*puStack_38;
            puVar17 = puStack_38 + 1;
            puVar4 = (undefined1 *)*puVar17;
            piStack_2c = piVar3;
            if (puVar4 != puVar11) {
              puVar4 = puVar4 + -8;
              do {
                puVar13 = puVar4 + -8;
                FUN_7152f750(puVar4,*puVar13);
                puVar4 = puVar4 + -0x10;
              } while (puVar13 != puVar11);
            }
            *puVar17 = puVar11;
          }
        }
        FUN_7152f750(&puStack_38,uVar6 & 0xff);
        piVar3 = piStack_30;
      } while (piStack_30 != piStack_2c);
    }
    if (piVar3 != (int *)0x0) {
      piStack_2c = piVar3;
      thunk_qNQrlu(piVar3);
    }
  }
  switch(param_2 - 1) {
  case 0:
    FUN_71530134(*param_1,*(undefined4 *)(*param_1 + 4));
LAB_7152fbac:
    pbVar5 = (byte *)*param_1;
    break;
  case 1:
    pbVar5 = (byte *)*param_1;
    puVar11 = *(undefined1 **)pbVar5;
    if (puVar11 != (undefined1 *)0x0) {
      puVar4 = puVar11;
      if (*(undefined1 **)(pbVar5 + 4) != puVar11) {
        puVar4 = *(undefined1 **)(pbVar5 + 4) + -8;
        do {
          puVar13 = puVar4 + -8;
          FUN_7152f750(puVar4,*puVar13);
          puVar4 = puVar4 + -0x10;
        } while (puVar13 != puVar11);
        puVar4 = *(undefined1 **)pbVar5;
      }
      *(undefined1 **)(pbVar5 + 4) = puVar11;
LAB_7152fba8:
      thunk_qNQrlu(puVar4);
      goto LAB_7152fbac;
    }
    break;
  case 2:
    pbVar5 = (byte *)*param_1;
    if ((*pbVar5 & 1) != 0) {
      puVar4 = *(undefined1 **)(pbVar5 + 8);
      goto LAB_7152fba8;
    }
    break;
  default:
    goto switchD_7152faf0_caseD_3;
  case 7:
    pbVar5 = (byte *)*param_1;
    puVar4 = *(undefined1 **)pbVar5;
    if (puVar4 != (undefined1 *)0x0) {
      *(undefined1 **)(pbVar5 + 4) = puVar4;
      goto LAB_7152fba8;
    }
  }
  thunk_qNQrlu(pbVar5);
switchD_7152faf0_caseD_3:
  return;
}


// =========================================================================
// Function: FUN_7152fd78
// Entry: 0x7152fd78 | Size: 252 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_7152fd78(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char cVar11;
  bool bVar12;
  char cVar13;
  
  puVar7 = (undefined4 *)*param_1;
  if ((uint)(param_1[2] - (int)puVar7 >> 4) < param_2) {
    cVar13 = SBORROW4(param_2,0x10000000);
    cVar11 = (int)(param_2 + 0xf0000000) < 0;
    bVar12 = param_2 == 0x10000000;
    if (0xfffffff < param_2) {
      FUN_7152fef0(param_1);
      if (!bVar12) {
        if (cVar11 == cVar13) {
          func_0x72408460();
        }
        if (!(bool)cVar13) {
          func_0x6f630bf8();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    puVar10 = (undefined4 *)param_1[1];
    puVar1 = (undefined4 *)thunk_MwhHq(param_2 << 4);
    iVar2 = (int)puVar10 - (int)puVar7;
    puVar4 = puVar7;
    puVar5 = puVar1;
    if (iVar2 != 0) {
      do {
        uVar8 = puVar4[1];
        uVar6 = puVar4[2];
        uVar9 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        puVar5[3] = uVar9;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined1 *)puVar4 = 0;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar4 != puVar10);
      do {
        puVar4 = puVar7 + 4;
        FUN_7152f750(puVar7 + 2,*(undefined1 *)puVar7);
        puVar7 = puVar4;
      } while (puVar4 != puVar10);
    }
    iVar3 = *param_1;
    param_1[2] = (int)(puVar1 + param_2 * 4);
    param_1[1] = (int)puVar1 + iVar2;
    *param_1 = (int)puVar1;
    if (iVar3 != 0) {
      thunk_qNQrlu();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7152fef0
// Entry: 0x7152fef0 | Size: 20 bytes
// =========================================================================

void FUN_7152fef0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7152ff58
// Entry: 0x7152ff58 | Size: 312 bytes
// =========================================================================

undefined4 * FUN_7152ff58(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  iVar5 = param_1[1] - *param_1 >> 4;
  uVar11 = iVar5 + 1;
  if (0xfffffff < uVar11) {
    FUN_7152fef0(param_1);
LAB_7153008c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  uVar2 = param_1[2] - *param_1;
  uVar1 = (int)uVar2 >> 3;
  if (uVar11 < uVar1) {
    uVar11 = uVar1;
  }
  if (0x7fffffef < uVar2) {
    uVar11 = 0xfffffff;
  }
  iVar3 = 0;
  if (uVar11 != 0) {
    if (0xfffffff < uVar11) goto LAB_7153008c;
    iVar3 = thunk_MwhHq(uVar11 << 4);
  }
  uVar8 = *param_2;
  uVar10 = param_2[1];
  uVar12 = param_2[2];
  uVar6 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)param_2 = 0;
  puVar4 = (undefined4 *)(iVar3 + iVar5 * 0x10);
  *puVar4 = uVar8;
  puVar14 = (undefined4 *)*param_1;
  puVar15 = (undefined4 *)param_1[1];
  puVar4[3] = uVar6;
  puVar4[1] = uVar10;
  puVar4[2] = uVar12;
  puVar13 = (undefined4 *)((int)puVar4 + ((int)puVar14 - (int)puVar15));
  puVar7 = puVar14;
  puVar9 = puVar13;
  if ((int)puVar14 - (int)puVar15 != 0) {
    do {
      uVar8 = puVar7[1];
      uVar10 = puVar7[2];
      uVar6 = puVar7[3];
      *puVar9 = *puVar7;
      puVar9[1] = uVar8;
      puVar9[2] = uVar10;
      puVar9[3] = uVar6;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined1 *)puVar7 = 0;
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar7 != puVar15);
    do {
      puVar7 = puVar14 + 4;
      FUN_7152f750(puVar14 + 2,*(undefined1 *)puVar14);
      puVar14 = puVar7;
    } while (puVar7 != puVar15);
  }
  iVar5 = *param_1;
  param_1[2] = iVar3 + uVar11 * 0x10;
  param_1[1] = (int)(puVar4 + 4);
  *param_1 = (int)puVar13;
  if (iVar5 != 0) {
    thunk_qNQrlu();
  }
  return puVar4 + 4;
}


// =========================================================================
// Function: FUN_71530134
// Entry: 0x71530134 | Size: 88 bytes
// =========================================================================

void FUN_71530134(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71530134(param_1,*param_2);
  FUN_71530134(param_1,param_2[1]);
  FUN_7152f750(param_2 + 10,*(undefined1 *)(param_2 + 8));
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    thunk_qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_71530230
// Entry: 0x71530230 | Size: 420 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71530230(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  piStack_30 = aiStack_40;
  piVar5 = aiStack_40;
  iStack_28 = _ext___stack_chk_guard;
  piVar1 = (int *)param_4[4];
  if (piVar1 == (int *)0x0) {
    piStack_30 = (int *)0x0;
LAB_71530290:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    if (piVar1 == param_4) {
      (**(code **)(*param_4 + 0xc))(param_4,aiStack_40);
      if (piStack_30 == (int *)0x0) goto LAB_71530290;
    }
    else {
      param_4[4] = 0;
      piStack_30 = piVar1;
    }
    if (piStack_30 == aiStack_40) {
      *(int *)(param_1 + 0x10) = param_1;
      (**(code **)(aiStack_40[0] + 0xc))(aiStack_40,param_1);
    }
    else {
      *(int **)(param_1 + 0x10) = piStack_30;
      piStack_30 = (int *)0x0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x18) = 0;
  imp___aeabi_memclr4(param_1 + 0x34,0x24);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 0x58) = &DAT_70064a63;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  puVar2 = (undefined4 *)imp_localeconv();
  if ((byte *)*puVar2 == (byte *)0x0) {
    uVar3 = 0x2e;
  }
  else {
    uVar3 = (uint)*(byte *)*puVar2;
  }
  *(undefined1 *)(param_1 + 0x81) = param_7;
  *(uint *)(param_1 + 0x78) = uVar3;
  *(undefined1 *)(param_1 + 0x80) = param_5;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  uVar4 = FUN_71530ff8((undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (piStack_30 == aiStack_40) {
    iVar6 = 0x10;
  }
  else {
    iVar6 = 0x14;
    piVar5 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_715303b0;
  }
  (**(code **)(*piVar5 + iVar6))();
LAB_715303b0:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715304bc
// Entry: 0x715304bc | Size: 1364 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715304bc(int *param_1,int param_2,char *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  char cStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte abStack_100 [8];
  undefined4 uStack_f8;
  byte abStack_f4 [8];
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  uint auStack_d8 [4];
  undefined *puStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [16];
  int aiStack_b0 [4];
  int *piStack_a0;
  char *pcStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  char cStack_84;
  char cStack_83;
  int *piStack_80;
  int iStack_7c;
  char cStack_6c;
  int aiStack_68 [4];
  int *piStack_58;
  char cStack_50;
  undefined1 uStack_48;
  undefined1 auStack_40 [20];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  piVar1 = (int *)param_1[4];
  if (piVar1 == (int *)0x0) {
    iStack_94 = 0;
    iStack_90 = 0;
    uStack_8c = 0;
    iStack_88 = 0;
    cStack_84 = '\0';
    cStack_83 = (char)param_1[0x20];
    pcStack_98 = param_3;
    piStack_80 = param_1 + 8;
    FUN_715360fc(param_1,&pcStack_98);
    if (param_2 != 0) {
      iVar4 = FUN_71530ff8(param_1 + 8);
      param_1[6] = iVar4;
      if (iVar4 != 0xf) {
        pbVar7 = (byte *)param_1[0x10];
        pbVar8 = (byte *)param_1[0x11];
        auStack_d8[2] = 0;
        auStack_d8[1] = 0;
        auStack_d8[0] = 0;
        if (pbVar7 != pbVar8) {
          do {
            if (*pbVar7 < 0x20) {
              auStack_c0[0] = 0;
              uStack_c4 = 0;
              puStack_c8 = (undefined *)0x0;
              FUN_7153ba50(&puStack_c8,9,9);
              thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                        (auStack_d8,&puStack_c8);
            }
            else {
              thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                        (auStack_d8);
            }
            pbVar7 = pbVar7 + 1;
          } while (pbVar7 != pbVar8);
        }
        iStack_e8 = param_1[0xd];
        iStack_e4 = param_1[0xe];
        iStack_e0 = param_1[0xf];
        abStack_100[1] = 0x76;
        abStack_100[2] = 0x61;
        abStack_100[3] = 0x6c;
        abStack_100[4] = 0x75;
        abStack_100[0] = 10;
        abStack_100[5] = 0x65;
        abStack_100[6] = 0;
        FUN_71535770(abStack_f4,param_1,0xf,abStack_100);
        FUN_71535458(&puStack_c8,0x65,&iStack_e8,abStack_f4,0);
        cStack_84 = '\x01';
        if (cStack_83 != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        puStack_c8 = &DAT_70b0e9d8;
        thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_c0);
        thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_c8);
        if ((abStack_f4[0] & 1) != 0) {
          thunk_qNQrlu(uStack_ec);
        }
        if ((abStack_100[0] & 1) != 0) {
          thunk_qNQrlu(uStack_f8);
        }
        if ((auStack_d8[0] & 1) != 0) {
          thunk_qNQrlu(auStack_d8[2]);
        }
      }
    }
    if (cStack_84 != '\0') {
      uStack_128 = *(undefined4 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      uVar6 = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(param_3 + 0xc) = uStack_124;
      *param_3 = '\t';
      uStack_124 = uVar6;
      FUN_7152f750(&uStack_128);
    }
    goto LAB_715309d0;
  }
  piVar5 = aiStack_b0;
  if (piVar1 == param_1) {
    piStack_a0 = aiStack_b0;
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else {
    piStack_a0 = (int *)(**(code **)(*piVar1 + 8))();
  }
  piVar9 = param_1 + 8;
  piVar1 = piVar9;
  FUN_71533714(&pcStack_98,param_3,piVar5,(char)param_1[0x20],piVar9);
  if (piStack_a0 == piVar5) {
    iVar4 = 0x10;
LAB_71530640:
    (**(code **)(*piVar5 + iVar4))();
  }
  else {
    iVar4 = 0x14;
    piVar5 = piStack_a0;
    if (piStack_a0 != (int *)0x0) goto LAB_71530640;
  }
  FUN_7153387c(param_1,&pcStack_98);
  if (param_2 != 0) {
    iVar4 = FUN_71530ff8(piVar9);
    param_1[6] = iVar4;
    if (iVar4 != 0xf) {
      pbVar7 = (byte *)param_1[0x10];
      pbVar8 = (byte *)param_1[0x11];
      auStack_d8[2] = 0;
      auStack_d8[1] = 0;
      auStack_d8[0] = 0;
      if (pbVar7 != pbVar8) {
        do {
          piVar5 = (int *)(uint)*pbVar7;
          if (&DAT_0000001f < piVar5) {
            thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (auStack_d8);
          }
          else {
            auStack_c0[0] = 0;
            uStack_c4 = 0;
            puStack_c8 = (undefined *)0x0;
            FUN_7153ba50(&puStack_c8,9,9);
            thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                      (auStack_d8,&puStack_c8);
            piVar1 = piVar5;
          }
          pbVar7 = pbVar7 + 1;
        } while (pbVar7 != pbVar8);
      }
      iStack_e8 = param_1[0xd];
      iStack_e4 = param_1[0xe];
      iStack_e0 = param_1[0xf];
      abStack_100[1] = 0x76;
      abStack_100[2] = 0x61;
      abStack_100[3] = 0x6c;
      abStack_100[4] = 0x75;
      abStack_100[0] = 10;
      abStack_100[5] = 0x65;
      abStack_100[6] = 0;
      FUN_71535770(abStack_f4,param_1,0xf,abStack_100,piVar1);
      FUN_71535458(&puStack_c8,0x65,&iStack_e8,abStack_f4,0);
      cStack_6c = '\x01';
      if (cStack_50 != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_c8 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_c0);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_c8);
      if ((abStack_f4[0] & 1) != 0) {
        thunk_qNQrlu(uStack_ec);
      }
      if ((abStack_100[0] & 1) != 0) {
        thunk_qNQrlu(uStack_f8);
      }
      if ((auStack_d8[0] & 1) != 0) {
        thunk_qNQrlu(auStack_d8[2]);
      }
    }
  }
  if (cStack_6c == '\0') {
    if (*param_3 == '\t') {
      uStack_118 = *(undefined4 *)(param_3 + 8);
      uVar6 = *(undefined4 *)(param_3 + 0xc);
      *param_3 = '\0';
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      *(undefined4 *)(param_3 + 0xc) = uStack_114;
      uStack_120 = 9;
      puVar2 = &uStack_118;
      cVar3 = '\t';
      uStack_114 = uVar6;
      goto LAB_71530850;
    }
  }
  else {
    uStack_108 = *(undefined4 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    uVar6 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0xc) = uStack_104;
    cStack_110 = *param_3;
    *param_3 = '\t';
    puVar2 = &uStack_108;
    uStack_104 = uVar6;
    cVar3 = cStack_110;
LAB_71530850:
    FUN_7152f750(puVar2,cVar3);
  }
  FUN_7152f750(auStack_40,uStack_48);
  piVar1 = aiStack_68;
  if (piStack_58 == piVar1) {
    iVar4 = 0x10;
LAB_71530888:
    (**(code **)(*piVar1 + iVar4))();
  }
  else {
    iVar4 = 0x14;
    piVar1 = piStack_58;
    if (piStack_58 != (int *)0x0) goto LAB_71530888;
  }
  if (iStack_7c != 0) {
    thunk_qNQrlu();
  }
  if (iStack_88 != 0) {
    thunk_qNQrlu();
  }
LAB_715309d0:
  if (iStack_94 != 0) {
    iStack_90 = iStack_94;
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71530e60
// Entry: 0x71530e60 | Size: 236 bytes
// =========================================================================

undefined4 * FUN_71530e60(undefined4 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  switch(param_2) {
  default:
    *param_1 = 0;
    return param_1;
  case 1:
    puVar2 = (undefined4 *)thunk_MwhHq(0xc);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *param_1 = puVar2;
    *puVar2 = puVar2 + 1;
    return param_1;
  case 2:
    puVar2 = (undefined4 *)thunk_MwhHq(0xc);
    break;
  case 3:
    puVar1 = (undefined2 *)thunk_MwhHq(0xc);
    *param_1 = puVar1;
    *puVar1 = 0;
    return param_1;
  case 4:
    *(undefined1 *)param_1 = 0;
    return param_1;
  case 5:
  case 6:
  case 7:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  case 8:
    puVar2 = (undefined4 *)thunk_MwhHq(0x20);
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *param_1 = puVar2;
  return param_1;
}


// =========================================================================
// Function: FUN_71530ff8
// Entry: 0x71530ff8 | Size: 3036 bytes
// =========================================================================

undefined4 FUN_71530ff8(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined4 auStack_24 [3];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar3 = FUN_71533340(param_1);
    if (iVar3 == 0xef) {
      iVar3 = FUN_71533340(param_1);
      if ((iVar3 != 0xbb) || (iVar3 = FUN_71533340(param_1), iVar3 != 0xbf)) {
        pcVar4 = s_invalid_BOM__must_be_0xEF_0xBB_0_700717f8;
        goto LAB_71531460;
      }
    }
    else {
      piVar5 = (int *)(param_1 + 0x18);
      iVar3 = *piVar5;
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      if (iVar3 == 0) {
        piVar5 = (int *)(param_1 + 0x1c);
        iVar3 = *piVar5;
        if (iVar3 != 0) goto LAB_71531080;
      }
      else {
LAB_71531080:
        *piVar5 = iVar3 + -1;
      }
      if (*(int *)(param_1 + 0xc) != -1) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      }
    }
  }
  do {
    FUN_71533340(param_1);
    iVar3 = *(int *)(param_1 + 0xc);
    if (0x17 < iVar3 - 9U) break;
  } while ((1 << (iVar3 - 9U & 0xff) & 0x800013U) != 0);
  if (iVar3 == 0x2f) {
    cVar2 = *(char *)(param_1 + 8);
    while (cVar2 != '\0') {
      iVar3 = FUN_715316bc(param_1);
      if (iVar3 == 0) {
        return 0xe;
      }
      do {
        FUN_71533340(param_1);
        iVar3 = *(int *)(param_1 + 0xc);
        if (0x17 < iVar3 - 9U) break;
      } while ((1 << (iVar3 - 9U & 0xff) & 0x800013U) != 0);
      if (iVar3 != 0x2f) break;
      cVar2 = *(char *)(param_1 + 8);
    }
  }
  switch(iVar3) {
  case 0x22:
    pbVar11 = (byte *)(param_1 + 0x2c);
    if ((*pbVar11 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x2c) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    puVar12 = *(undefined1 **)(param_1 + 0x20);
    uVar1 = (undefined1)*(undefined4 *)(param_1 + 0xc);
    if (puVar12 < *(undefined1 **)(param_1 + 0x28)) {
      puVar13 = puVar12 + 1;
      *puVar12 = uVar1;
    }
    else {
      uVar8 = (int)*(undefined1 **)(param_1 + 0x28) - (int)puVar12;
      iVar3 = 1;
      if (1 < uVar8 * 2) {
        iVar3 = uVar8 * 2;
      }
      if (0x3ffffffe < uVar8) {
        iVar3 = 0x7fffffff;
      }
      puVar7 = (undefined1 *)thunk_MwhHq(iVar3);
      puVar13 = puVar7 + 1;
      *puVar7 = uVar1;
      *(undefined1 **)(param_1 + 0x20) = puVar7;
      *(undefined1 **)(param_1 + 0x24) = puVar13;
      *(undefined1 **)(param_1 + 0x28) = puVar7 + iVar3;
      if (puVar12 != (undefined1 *)0x0) {
        thunk_qNQrlu(puVar12);
      }
    }
    *(undefined1 **)(param_1 + 0x24) = puVar13;
    do {
      uVar6 = FUN_71533340(param_1);
      pcVar4 = s_invalid_string__control_characte_7006ae18;
      switch(uVar6) {
      case 0:
        pcVar4 = s_invalid_string__control_characte_70071869;
        goto switchD_71531974_caseD_1;
      case 2:
        pcVar4 = s_invalid_string__control_characte_700645a5;
        goto switchD_71531974_caseD_1;
      case 3:
        pcVar4 = s_invalid_string__control_characte_7007005c;
        goto switchD_71531974_caseD_1;
      case 4:
        pcVar4 = s_invalid_string__control_characte_70062150;
        goto switchD_71531974_caseD_1;
      case 5:
        pcVar4 = s_invalid_string__control_characte_7006a352;
        goto switchD_71531974_caseD_1;
      case 6:
        pcVar4 = s_invalid_string__control_characte_7006bf51;
        goto switchD_71531974_caseD_1;
      case 7:
        pcVar4 = s_invalid_string__control_characte_70068637;
        goto switchD_71531974_caseD_1;
      case 8:
        pcVar4 = s_invalid_string__control_characte_70063d96;
        goto switchD_71531974_caseD_1;
      case 9:
        pcVar4 = s_invalid_string__control_characte_70068f93;
        goto switchD_71531974_caseD_1;
      case 10:
        pcVar4 = s_invalid_string__control_characte_700632e1;
        goto switchD_71531974_caseD_1;
      case 0xb:
        pcVar4 = s_invalid_string__control_characte_7006755a;
        goto switchD_71531974_caseD_1;
      case 0xc:
        pcVar4 = s_invalid_string__control_characte_700700a5;
        goto switchD_71531974_caseD_1;
      case 0xd:
        pcVar4 = s_invalid_string__control_characte_70071072;
        goto switchD_71531974_caseD_1;
      case 0xe:
        pcVar4 = s_invalid_string__control_characte_7006332f;
        goto switchD_71531974_caseD_1;
      case 0xf:
        pcVar4 = s_invalid_string__control_characte_70067eda;
        goto switchD_71531974_caseD_1;
      case 0x10:
        pcVar4 = s_invalid_string__control_characte_700675a2;
        goto switchD_71531974_caseD_1;
      case 0x11:
        pcVar4 = s_invalid_string__control_characte_70061226;
        goto switchD_71531974_caseD_1;
      case 0x12:
        pcVar4 = s_invalid_string__control_characte_70064c3b;
        goto switchD_71531974_caseD_1;
      case 0x13:
        pcVar4 = s_invalid_string__control_characte_700645ee;
        goto switchD_71531974_caseD_1;
      case 0x14:
        pcVar4 = s_invalid_string__control_characte_70064637;
        goto switchD_71531974_caseD_1;
      case 0x15:
        pcVar4 = s_invalid_string__control_characte_700675eb;
        goto switchD_71531974_caseD_1;
      case 0x16:
        pcVar4 = s_invalid_string__control_characte_7006281d;
        goto switchD_71531974_caseD_1;
      case 0x17:
        pcVar4 = s_invalid_string__control_characte_7006c7ca;
        goto switchD_71531974_caseD_1;
      case 0x18:
        pcVar4 = s_invalid_string__control_characte_70068fe1;
        goto switchD_71531974_caseD_1;
      case 0x19:
        pcVar4 = s_invalid_string__control_characte_70067f22;
        goto switchD_71531974_caseD_1;
      case 0x1a:
        pcVar4 = s_invalid_string__control_characte_7006902a;
        goto switchD_71531974_caseD_1;
      case 0x1b:
        pcVar4 = s_invalid_string__control_characte_700708a8;
        goto switchD_71531974_caseD_1;
      case 0x1c:
        pcVar4 = s_invalid_string__control_characte_70065323;
        goto switchD_71531974_caseD_1;
      case 0x1d:
        pcVar4 = s_invalid_string__control_characte_7006f652;
        goto switchD_71531974_caseD_1;
      case 0x1e:
        pcVar4 = s_invalid_string__control_characte_70067634;
        goto switchD_71531974_caseD_1;
      case 0x1f:
        pcVar4 = s_invalid_string__control_characte_700708f1;
        goto switchD_71531974_caseD_1;
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
        uVar8 = *(uint *)(param_1 + 0xc);
        break;
      case 0x22:
        return 4;
      case 0x5c:
        uVar6 = FUN_71533340(param_1);
        uVar8 = 0x22;
        pcVar4 = s_invalid_string__forbidden_charac_70066cf2;
        switch(uVar6) {
        case 0x22:
          break;
        default:
          goto switchD_71531974_caseD_1;
        case 0x2f:
          uVar8 = 0x2f;
          break;
        case 0x5c:
          uVar8 = 0x5c;
          break;
        case 0x62:
          uVar8 = 8;
          break;
        case 0x66:
          uVar8 = 0xc;
          break;
        case 0x6e:
          uVar8 = 10;
          break;
        case 0x72:
          uVar8 = 0xd;
          break;
        case 0x74:
          uVar8 = 9;
          break;
        case 0x75:
          uVar8 = FUN_71533570(param_1);
          pcVar4 = s_invalid_string____u__must_be_fol_70065c98;
          if (uVar8 == 0xffffffff) goto switchD_71531974_caseD_1;
          if ((uVar8 & 0xfffffc00) == 0xd800) {
            iVar3 = FUN_71533340(param_1);
            pcVar4 = s_invalid_string__surrogate_U_D800_7006cfd4;
            if ((((iVar3 != 0x5c) || (iVar3 = FUN_71533340(param_1), iVar3 != 0x75)) ||
                (uVar10 = FUN_71533570(param_1),
                pcVar4 = s_invalid_string____u__must_be_fol_70065c98, uVar10 == 0xffffffff)) ||
               (pcVar4 = s_invalid_string__surrogate_U_D800_7006cfd4,
               (uVar10 & 0xfffffc00) != 0xdc00)) goto switchD_71531974_caseD_1;
            uVar8 = uVar10 + uVar8 * 0x400 + 0xfca02400;
LAB_715320dc:
            thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (pbVar11,uVar8 >> 0x12 & 0xff | 0xf0);
            thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (pbVar11,uVar8 >> 0xc & 0xbf | 0x80);
LAB_71532108:
            uVar10 = uVar8 >> 6 & 0xbf | 0x80;
          }
          else {
            if ((uVar8 & 0xfffffc00) == 0xdc00) {
              pcVar4 = s_invalid_string__surrogate_U_DC00_70071825;
              goto switchD_71531974_caseD_1;
            }
            if ((int)uVar8 < 0x80) break;
            if (uVar8 >> 0xb != 0) {
              if (uVar8 >> 0x10 != 0) goto LAB_715320dc;
              thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                        (pbVar11,uVar8 >> 0xc & 0xff | 0xe0);
              goto LAB_71532108;
            }
            uVar10 = uVar8 >> 6 & 0xff | 0xc0;
          }
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,uVar10);
          uVar8 = uVar8 & 0x3f | 0xffffff80;
        }
        break;
      default:
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        goto switchD_71531974_caseD_1;
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        if (uVar8 - 0xc0 < 0xffffffc0) {
          pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
          goto switchD_71531974_caseD_1;
        }
        break;
      case 0xe0:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar10 = uVar8 - 0xc0;
        goto LAB_7153201c;
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xee:
      case 0xef:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffbf < uVar8 - 0xc0) goto LAB_7153202c;
        goto switchD_71531974_caseD_1;
      case 0xed:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar10 = uVar8 - 0xa0;
LAB_7153201c:
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffdf < uVar10) goto LAB_7153202c;
        goto switchD_71531974_caseD_1;
      case 0xf0:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffcf < uVar8 - 0xc0) goto LAB_71531fd8;
        goto switchD_71531974_caseD_1;
      case 0xf1:
      case 0xf2:
      case 0xf3:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (0xffffffbf < uVar8 - 0xc0) goto LAB_71531fd8;
        goto switchD_71531974_caseD_1;
      case 0xf4:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (uVar8 - 0x90 < 0xfffffff0) goto switchD_71531974_caseD_1;
LAB_71531fd8:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,uVar8 & 0xff);
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (uVar8 - 0xc0 < 0xffffffc0) goto switchD_71531974_caseD_1;
LAB_7153202c:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,uVar8 & 0xff);
        FUN_71533340(param_1);
        uVar8 = *(uint *)(param_1 + 0xc);
        pcVar4 = s_invalid_string__ill_formed_UTF_8_700721ed;
        if (uVar8 - 0xc0 < 0xffffffc0) goto switchD_71531974_caseD_1;
        break;
      case 0xffffffff:
        pcVar4 = s_invalid_string__missing_closing_q_70067eb4;
      case 1:
switchD_71531974_caseD_1:
        *(char **)(param_1 + 0x38) = pcVar4;
        return 0xe;
      }
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (pbVar11,uVar8 & 0xff);
    } while( true );
  case 0x2c:
    return 0xd;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    pbVar11 = (byte *)(param_1 + 0x2c);
    if ((*pbVar11 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x2c) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    puVar12 = *(undefined1 **)(param_1 + 0x20);
    uVar1 = (undefined1)*(undefined4 *)(param_1 + 0xc);
    if (puVar12 < *(undefined1 **)(param_1 + 0x28)) {
      puVar13 = puVar12 + 1;
      *puVar12 = uVar1;
    }
    else {
      uVar8 = (int)*(undefined1 **)(param_1 + 0x28) - (int)puVar12;
      iVar3 = 1;
      if (1 < uVar8 * 2) {
        iVar3 = uVar8 * 2;
      }
      if (0x3ffffffe < uVar8) {
        iVar3 = 0x7fffffff;
      }
      puVar7 = (undefined1 *)thunk_MwhHq(iVar3);
      puVar13 = puVar7 + 1;
      *puVar7 = uVar1;
      *(undefined1 **)(param_1 + 0x20) = puVar7;
      *(undefined1 **)(param_1 + 0x24) = puVar13;
      *(undefined1 **)(param_1 + 0x28) = puVar7 + iVar3;
      if (puVar12 != (undefined1 *)0x0) {
        thunk_qNQrlu(puVar12);
      }
    }
    uVar8 = *(uint *)(param_1 + 0xc);
    *(undefined1 **)(param_1 + 0x24) = puVar13;
    iVar3 = 5;
    if (uVar8 - 0x31 < 9) {
LAB_71532d50:
      while( true ) {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,uVar8 & 0xff);
        iVar9 = FUN_71533340(param_1);
        if (9 < iVar9 - 0x30U) break;
        uVar8 = *(uint *)(param_1 + 0xc);
      }
      if (iVar9 == 0x2e) goto LAB_71532dac;
LAB_71532d78:
      if ((iVar9 == 0x45) || (iVar9 == 0x65)) {
LAB_71532e10:
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        iVar3 = FUN_71533340(param_1);
        if (9 < iVar3 - 0x30U) {
          if (iVar3 != 0x2d && iVar3 != 0x2b) {
            pcVar4 = s_invalid_number__expected_________70065394;
LAB_71532ff8:
            *(char **)(param_1 + 0x38) = pcVar4;
            return 0xe;
          }
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,*(undefined1 *)(param_1 + 0xc));
          iVar3 = FUN_71533340(param_1);
          if (9 < iVar3 - 0x30U) {
            pcVar4 = s_invalid_number__expected_digit_a_700700f3;
            goto LAB_71532ff8;
          }
        }
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        iVar9 = FUN_71533340(param_1);
        iVar3 = 7;
        while (iVar9 - 0x30U < 10) {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,*(undefined1 *)(param_1 + 0xc));
          iVar9 = FUN_71533340(param_1);
        }
      }
    }
    else {
      if (uVar8 == 0x30) {
        uVar8 = 0x30;
      }
      else {
        if (uVar8 == 0x2d) {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (pbVar11,0x2d);
        }
        iVar3 = FUN_71533340(param_1);
        if (iVar3 - 0x31U < 9) {
          uVar8 = *(uint *)(param_1 + 0xc);
          iVar3 = 6;
          goto LAB_71532d50;
        }
        if (iVar3 != 0x30) {
          pcVar4 = s_invalid_number__expected_digit_a_700718b2;
          goto LAB_71532ff8;
        }
        uVar8 = *(uint *)(param_1 + 0xc);
        iVar3 = 6;
      }
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (pbVar11,uVar8 & 0xff);
      iVar9 = FUN_71533340(param_1);
      if (iVar9 != 0x2e) goto LAB_71532d78;
LAB_71532dac:
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                (pbVar11,*(undefined1 *)(param_1 + 0x58));
      uVar8 = *(uint *)(param_1 + 0x30);
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        uVar8 = (uint)(*(byte *)(param_1 + 0x2c) >> 1);
      }
      *(uint *)(param_1 + 0x5c) = uVar8 - 1;
      iVar3 = FUN_71533340(param_1);
      if (9 < iVar3 - 0x30U) {
        pcVar4 = s_invalid_number__expected_digit_a_7006536b;
        goto LAB_71532ff8;
      }
      do {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (pbVar11,*(undefined1 *)(param_1 + 0xc));
        iVar3 = FUN_71533340(param_1);
      } while (iVar3 - 0x30U < 10);
      if (iVar3 == 0x65 || iVar3 == 0x45) goto LAB_71532e10;
      iVar3 = 7;
    }
    piVar5 = (int *)(param_1 + 0x18);
    iVar9 = *piVar5;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    if (iVar9 == 0) {
      piVar5 = (int *)(param_1 + 0x1c);
      iVar9 = *piVar5;
      if (iVar9 == 0) goto LAB_71532eb0;
    }
    *piVar5 = iVar9 + -1;
LAB_71532eb0:
    auStack_24[0] = 0;
    if (*(int *)(param_1 + 0xc) != -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    piVar5 = (int *)imp___errno();
    *piVar5 = 0;
    if (iVar3 == 6) {
      iVar3 = *(int *)(param_1 + 0x34);
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        iVar3 = param_1 + 0x2d;
      }
      uVar14 = imp_strtoll(iVar3,auStack_24,10);
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x40) = uVar14;
        return 6;
      }
    }
    else if (iVar3 == 5) {
      iVar3 = *(int *)(param_1 + 0x34);
      if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
        iVar3 = param_1 + 0x2d;
      }
      uVar14 = imp_strtoull(iVar3,auStack_24,10);
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x48) = uVar14;
        return 5;
      }
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
      iVar3 = param_1 + 0x2d;
    }
    uVar14 = imp_strtod(iVar3,auStack_24);
    *(undefined8 *)(param_1 + 0x50) = uVar14;
    return 7;
  case 0x3a:
    return 0xc;
  case 0x5b:
    return 8;
  case 0x5d:
    return 10;
  case 0x66:
    cVar2 = FUN_71533340(param_1);
    if (((cVar2 == 'a') && (cVar2 = FUN_71533340(param_1), cVar2 == 'l')) &&
       (cVar2 = FUN_71533340(param_1), cVar2 == 's')) {
      cVar2 = FUN_71533340(param_1);
      uVar6 = 2;
LAB_71531450:
      if (cVar2 == 'e') {
        return uVar6;
      }
    }
    break;
  case 0x6e:
    cVar2 = FUN_71533340(param_1);
    if (((cVar2 == 'u') && (cVar2 = FUN_71533340(param_1), cVar2 == 'l')) &&
       (cVar2 = FUN_71533340(param_1), cVar2 == 'l')) {
      return 3;
    }
    break;
  case 0x74:
    cVar2 = FUN_71533340(param_1);
    if ((cVar2 == 'r') && (cVar2 = FUN_71533340(param_1), cVar2 == 'u')) {
      cVar2 = FUN_71533340(param_1);
      uVar6 = 1;
      goto LAB_71531450;
    }
    break;
  case 0x7b:
    return 9;
  case 0x7d:
    return 0xb;
  case -1:
  case 0:
    return 0xf;
  }
  pcVar4 = s_invalid_literal_70068627;
LAB_71531460:
  *(char **)(param_1 + 0x38) = pcVar4;
  return 0xe;
}


// =========================================================================
// Function: FUN_715316bc
// Entry: 0x715316bc | Size: 252 bytes
// =========================================================================

undefined4 FUN_715316bc(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  iVar1 = FUN_71533340();
  if (iVar1 == 0x2a) {
    do {
      while (iVar1 = FUN_71533340(param_1), iVar1 == 0x2a) {
        iVar1 = FUN_71533340(param_1);
        if (iVar1 == 0x2f) {
          return 1;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x10) = 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        piVar2 = (int *)(param_1 + 0x18);
        if ((iVar1 != 0) ||
           (iVar1 = *(int *)(param_1 + 0x1c), piVar2 = (int *)(param_1 + 0x1c), iVar1 != 0)) {
          *piVar2 = iVar1 + -1;
        }
        if (*(int *)(param_1 + 0xc) != -1) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        }
      }
    } while (1 < iVar1 + 1U);
    pcVar3 = s_invalid_comment__missing_closing_7006dcee;
  }
  else {
    if (iVar1 == 0x2f) {
      do {
        do {
          iVar1 = FUN_71533340(param_1);
        } while (0xe < iVar1 + 1U);
      } while ((0x4803U >> (iVar1 + 1U & 0xff) & 1) == 0);
      return 1;
    }
    pcVar3 = s_invalid_comment__expecting_____o_70065c68;
  }
  *(char **)(param_1 + 0x38) = pcVar3;
  return 0;
}


// =========================================================================
// Function: FUN_71533340
// Entry: 0x71533340 | Size: 456 bytes
// =========================================================================

int FUN_71533340(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined4 in_cr5;
  
  param_1[5] = param_1[5] + 1;
  param_1[6] = param_1[6] + 1;
  if (*(char *)(param_1 + 4) == '\0') {
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)param_1[1]) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*pbVar3;
      *param_1 = pbVar3 + 1;
    }
    param_1[3] = uVar9;
  }
  else {
    uVar9 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (uVar9 != 0xffffffff) {
    puVar5 = (undefined1 *)param_1[9];
    if (puVar5 < (undefined1 *)param_1[10]) {
      puVar6 = puVar5 + 1;
      *puVar5 = (char)uVar9;
    }
    else {
      iVar8 = param_1[8];
      iVar4 = (int)puVar5 - iVar8;
      uVar7 = iVar4 + 1;
      bVar10 = SCARRY4(uVar7,1);
      if (iVar4 == -2 || (int)uVar7 < -1) {
        FUN_71533508();
        coprocessor_store(0xf,in_cr5,0x71533374);
        if (bVar10) {
          FUN_70aa119c();
        }
                    /* WARNING: Subroutine does not return */
        FUN_712f6c84(s_vector_7006dad5);
      }
      uVar1 = (int)param_1[10] - iVar8;
      if (uVar7 < uVar1 * 2) {
        uVar7 = uVar1 * 2;
      }
      if (0x3ffffffe < uVar1) {
        uVar7 = 0x7fffffff;
      }
      if (uVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = thunk_MwhHq(uVar7);
      }
      *(undefined1 *)(iVar2 + iVar4) = (char)uVar9;
      imp___aeabi_memcpy(iVar2,iVar8,iVar4);
      puVar6 = (undefined1 *)(iVar2 + iVar4) + 1;
      param_1[8] = iVar2;
      param_1[9] = puVar6;
      param_1[10] = iVar2 + uVar7;
      if (iVar8 != 0) {
        thunk_qNQrlu(iVar8);
      }
    }
    iVar4 = param_1[3];
    param_1[9] = puVar6;
    if (iVar4 == 10) {
      param_1[6] = 0;
      param_1[7] = param_1[7] + 1;
      iVar4 = 10;
    }
    return iVar4;
  }
  return -1;
}


// =========================================================================
// Function: FUN_71533508
// Entry: 0x71533508 | Size: 20 bytes
// =========================================================================

void FUN_71533508(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71533570
// Entry: 0x71533570 | Size: 284 bytes
// =========================================================================

int FUN_71533570(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_71533340();
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = iVar2 - 0x30;
  if (9 < uVar3) {
    if (iVar2 - 0x41U < 6) {
      uVar3 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar3 = iVar2 - 0x57;
    }
  }
  FUN_71533340(param_1);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = iVar2 - 0x30;
  if (9 < uVar4) {
    if (iVar2 - 0x41U < 6) {
      uVar4 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar4 = iVar2 - 0x57;
    }
  }
  FUN_71533340(param_1);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = iVar2 - 0x30;
  if (9 < uVar5) {
    if (iVar2 - 0x41U < 6) {
      uVar5 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar5 = iVar2 - 0x57;
    }
  }
  FUN_71533340(param_1);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = iVar2 - 0x30;
  if (9 < uVar1) {
    if (iVar2 - 0x41U < 6) {
      uVar1 = iVar2 - 0x37;
    }
    else {
      if (5 < iVar2 - 0x61U) {
        return -1;
      }
      uVar1 = iVar2 - 0x57;
    }
  }
  return uVar1 + uVar3 * 0x1000 + uVar4 * 0x100 + uVar5 * 0x10;
}


// =========================================================================
// Function: FUN_71533714
// Entry: 0x71533714 | Size: 252 bytes
// =========================================================================

undefined4 *
FUN_71533714(undefined4 *param_1,undefined4 param_2,int param_3,undefined1 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = param_2;
  imp___aeabi_memclr4(param_1 + 1,0x29);
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 == 0) {
    param_1[0x10] = 0;
  }
  else if (iVar1 == param_3) {
    param_1[0x10] = param_1 + 0xc;
    (**(code **)(**(int **)(param_3 + 0x10) + 0xc))(*(int **)(param_3 + 0x10),param_1 + 0xc);
  }
  else {
    param_1[0x10] = iVar1;
    *(undefined4 *)(param_3 + 0x10) = 0;
  }
  uVar3 = param_1[5];
  iVar1 = param_1[6];
  param_1[0x16] = 0;
  param_1[0x18] = param_5;
  *(undefined1 *)(param_1 + 0x14) = 9;
  *(undefined1 *)(param_1 + 0x12) = param_4;
  if (uVar3 == iVar1 * 0x20) {
    if (uVar3 == 0xfffffffe || (int)(uVar3 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1 + 4);
    }
    uVar2 = 0x7fffffff;
    if ((uVar3 < 0x3fffffff) && (uVar2 = (uVar3 & 0x3fffffe0) + 0x20, uVar2 < (uint)(iVar1 << 6))) {
      uVar2 = iVar1 << 6;
    }
    FUN_71537a10(param_1 + 4,uVar2);
    uVar3 = param_1[5];
  }
  param_1[5] = uVar3 + 1;
  *(uint *)(param_1[4] + (uVar3 >> 5) * 4) =
       *(uint *)(param_1[4] + (uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
  return param_1;
}


// =========================================================================
// Function: FUN_7153387c
// Entry: 0x7153387c | Size: 3380 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7153387c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  byte bStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined4 uStack_78;
  byte abStack_74 [8];
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined *puStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iVar9 = param_1 + 0x20;
  iStack_28 = _ext___stack_chk_guard;
  iStack_44 = 0;
  uStack_48 = 0;
  iStack_4c = 0;
  iVar1 = param_1 + 0x4d;
  iVar2 = param_1 + 0x4c;
LAB_715338e4:
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    uStack_58 = CONCAT31(uStack_58._1_3_,1);
    goto LAB_71533974;
  case 2:
    uStack_58 = (uint)uStack_58._1_3_ << 8;
LAB_71533974:
    FUN_7153aaf4(&puStack_40,param_2,&uStack_58,0);
    break;
  case 3:
    uStack_58 = 0;
    FUN_7153adf4(&puStack_40,param_2,&uStack_58,0);
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    FUN_7153b3dc(&puStack_40,param_2,iVar2,0);
    break;
  case 5:
    puStack_40 = *(undefined **)(param_1 + 0x68);
    uStack_3c = *(uint *)(param_1 + 0x6c);
    FUN_7153b750(&uStack_58,param_2,&puStack_40,0);
    break;
  case 6:
    puStack_40 = *(undefined **)(param_1 + 0x60);
    uStack_3c = *(uint *)(param_1 + 100);
    FUN_7153b0e0(&uStack_58,param_2,&puStack_40,0);
    break;
  case 7:
    puVar7 = *(undefined **)(param_1 + 0x70);
    uVar11 = *(uint *)(param_1 + 0x74);
    uVar8 = uVar11 & 0x7fffffff;
    iVar3 = FUN_71ba2c1c(puVar7,uVar8,0,0x7ff00000);
    iVar4 = FUN_71ba0f44(puVar7,uVar8,0,0x7ff00000);
    if (iVar4 != 0 || iVar3 != 0) {
      FUN_715352d0(&uStack_58,iVar9);
      FUN_715352d0(abStack_74,iVar9);
      bStack_80 = 0x27;
      FUN_71538d24(&uStack_68,s_number_overflow_parsing___700653da,abStack_74,&bStack_80);
      FUN_71538a00(&puStack_40,0x196,&uStack_68,0);
      *(undefined1 *)(param_2 + 0x2c) = 1;
      if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      if ((uStack_68 & 1) != 0) {
        thunk_qNQrlu(uStack_60);
      }
LAB_715342dc:
      if ((abStack_74[0] & 1) == 0) goto LAB_715341ec;
      goto LAB_715341e8;
    }
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    puStack_40 = puVar7;
    uStack_3c = uVar11;
    FUN_7153a7f4(&uStack_58,param_2,&puStack_40,0);
    break;
  case 8:
    iVar3 = FUN_715384f8(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_71534204;
    iVar3 = FUN_71530ff8(iVar9);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 == 10) {
      iVar3 = FUN_71538840(param_2);
LAB_71533aec:
      if (iVar3 != 0) break;
      goto LAB_71534204;
    }
    if (uStack_48 == iStack_44 * 0x20) {
      if (uStack_48 == 0xfffffffe || (int)(uStack_48 + 1) < -1) {
LAB_715345d4:
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(&iStack_4c);
      }
      uVar8 = 0x7fffffff;
      if ((uStack_48 < 0x3fffffff) &&
         (uVar8 = (uStack_48 & 0x3fffffe0) + 0x20, uVar8 < (uint)(iStack_44 << 6))) {
        uVar8 = iStack_44 << 6;
      }
      FUN_71537a10(&iStack_4c,uVar8);
    }
    *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) =
         *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) | 1 << (uStack_48 & 0x1f);
    uStack_48 = uStack_48 + 1;
    goto LAB_715338e4;
  case 9:
    iVar3 = FUN_71537bf4(param_2,0xffffffff);
    if (iVar3 != 0) {
      iVar3 = FUN_71530ff8(iVar9);
      *(int *)(param_1 + 0x18) = iVar3;
      if (iVar3 == 0xb) {
        iVar3 = FUN_71537f38(param_2);
        goto LAB_71533aec;
      }
      if (iVar3 == 4) {
        iVar3 = *(int *)(param_1 + 0x78);
        bVar13 = iVar3 != 0x2e;
        if (bVar13) {
          iVar3 = *(int *)(param_1 + 0x7c);
        }
        if (bVar13 && iVar3 != -1) {
          iVar4 = *(int *)(param_1 + 0x54);
          if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
            iVar4 = iVar1;
          }
          *(undefined1 *)(iVar4 + iVar3) = 0x2e;
        }
        iVar3 = FUN_715381e8(param_2,iVar2);
        if (iVar3 != 0) {
          iVar3 = FUN_71530ff8(iVar9);
          *(int *)(param_1 + 0x18) = iVar3;
          if (iVar3 != 0xc) {
            FUN_715352d0(&uStack_58,iVar9);
            uStack_68 = *(uint *)(param_1 + 0x34);
            uStack_64 = *(undefined4 *)(param_1 + 0x38);
            uStack_60 = *(undefined4 *)(param_1 + 0x3c);
            FUN_71315100(&bStack_80,s_object_separator_7006e582);
            FUN_71535770(abStack_74,param_1,0xc,&bStack_80);
            FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
            *(undefined1 *)(param_2 + 0x2c) = 1;
            if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
            goto LAB_715344ec;
          }
          if (uStack_48 == iStack_44 * 0x20) {
            if (uStack_48 == 0xfffffffe || (int)(uStack_48 + 1) < -1) goto LAB_715345d4;
            uVar8 = 0x7fffffff;
            if ((uStack_48 < 0x3fffffff) &&
               (uVar8 = (uStack_48 & 0x3fffffe0) + 0x20, uVar8 < (uint)(iStack_44 << 6))) {
              uVar8 = iStack_44 << 6;
            }
            FUN_71537a10(&iStack_4c,uVar8);
          }
          *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) =
               *(uint *)(iStack_4c + (uStack_48 >> 5) * 4) & ~(1 << (uStack_48 & 0x1f));
          uStack_48 = uStack_48 + 1;
          goto LAB_71533cbc;
        }
      }
      else {
        FUN_715352d0(&uStack_58,iVar9);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(&bStack_80,s_object_key_700653cf);
        FUN_71535770(abStack_74,param_1,4,&bStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x2c) = 1;
        if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
LAB_715344ec:
        puStack_40 = &DAT_70b0e9d8;
        thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
        thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
        if ((abStack_74[0] & 1) != 0) {
          thunk_qNQrlu(uStack_6c);
        }
        if ((bStack_80 & 1) != 0) {
          thunk_qNQrlu(uStack_78);
        }
        if ((uStack_58 & 1) != 0) {
          thunk_qNQrlu(uStack_50);
        }
      }
    }
    goto LAB_71534204;
  default:
    goto switchD_715338fc_caseD_a;
  case 0xe:
    pbVar10 = *(byte **)(param_1 + 0x40);
    pbVar12 = *(byte **)(param_1 + 0x44);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    if (pbVar10 != pbVar12) {
      do {
        if (*pbVar10 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_7153ba50(&puStack_40,9,9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (&uStack_58);
        }
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar12);
    }
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uStack_7f = 0x756c6176;
    bStack_80 = 10;
    uStack_7b = 0x65;
    FUN_71535770(abStack_74,param_1,0,&bStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_715341a4;
  case 0xf:
    puVar6 = (uint *)(param_1 + 0x34);
    if (*puVar6 == 1) {
      FUN_715352d0(&uStack_58,iVar9);
      uStack_68 = *puVar6;
      uStack_64 = *(undefined4 *)(param_1 + 0x38);
      uStack_60 = *(undefined4 *)(param_1 + 0x3c);
      FUN_71315100(abStack_74,s_attempting_to_parse_an_empty_inp_7006dd14);
      FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
      *(undefined1 *)(param_2 + 0x2c) = 1;
      if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      goto LAB_715342dc;
    }
    pbVar10 = *(byte **)(param_1 + 0x40);
    pbVar12 = *(byte **)(param_1 + 0x44);
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    if (pbVar10 != pbVar12) {
      do {
        if (*pbVar10 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_7153ba50(&puStack_40,9,9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (&uStack_58);
        }
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar12);
    }
    uStack_68 = *puVar6;
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    uStack_7f = 0x756c6176;
    bStack_80 = 10;
    uStack_7b = 0x65;
    FUN_71535770(abStack_74,param_1,0x10,&bStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_715341a4;
  }
  if (uStack_48 != 0) {
    do {
      uVar11 = uStack_48 - 1;
      uVar8 = *(uint *)(iStack_4c + (uVar11 >> 5) * 4);
      iVar3 = FUN_71530ff8(iVar9);
      *(int *)(param_1 + 0x18) = iVar3;
      if ((uVar8 >> (uVar11 & 0x1f) & 1) == 0) {
        if (iVar3 == 0xd) {
          iVar3 = FUN_71530ff8(iVar9);
          *(int *)(param_1 + 0x18) = iVar3;
          if ((iVar3 != 0xb) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_71533bcc;
        }
        else if (iVar3 != 0xb) {
          FUN_715352d0(&uStack_58,iVar9);
          uStack_68 = *(uint *)(param_1 + 0x34);
          uStack_64 = *(undefined4 *)(param_1 + 0x38);
          uStack_60 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71315100(&bStack_80,s_object_7006a39b);
          FUN_71535770(abStack_74,param_1,0xb,&bStack_80);
          FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
          *(undefined1 *)(param_2 + 0x2c) = 1;
          if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
          goto LAB_715341a4;
        }
        iVar3 = FUN_71537f38(param_2);
      }
      else {
        if (iVar3 == 0xd) {
          iVar3 = FUN_71530ff8(iVar9);
          *(int *)(param_1 + 0x18) = iVar3;
          if ((iVar3 != 10) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_715338e4;
        }
        else if (iVar3 != 10) {
          FUN_715352d0(&uStack_58,iVar9);
          uStack_68 = *(uint *)(param_1 + 0x34);
          uStack_64 = *(undefined4 *)(param_1 + 0x38);
          uStack_60 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71315100(&bStack_80,s_array_7006e593);
          FUN_71535770(abStack_74,param_1,10,&bStack_80);
          FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
          *(undefined1 *)(param_2 + 0x2c) = 1;
          if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
          goto LAB_715341a4;
        }
        iVar3 = FUN_71538840(param_2);
      }
      if ((iVar3 == 0) || (uStack_48 = uStack_48 - 1, uStack_48 == 0)) break;
    } while( true );
  }
  goto LAB_71534204;
LAB_71533bcc:
  if (iVar3 != 4) {
    FUN_715352d0(&uStack_58,iVar9);
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    FUN_71315100(&bStack_80,s_object_key_700653cf);
    FUN_71535770(abStack_74,param_1,4,&bStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_715341a4;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  bVar13 = iVar3 != 0x2e;
  if (bVar13) {
    iVar3 = *(int *)(param_1 + 0x7c);
  }
  if (bVar13 && iVar3 != -1) {
    iVar4 = *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
      iVar4 = iVar1;
    }
    *(undefined1 *)(iVar4 + iVar3) = 0x2e;
  }
  iVar3 = FUN_715381e8(param_2,iVar2);
  if (iVar3 == 0) goto LAB_71534204;
  iVar3 = FUN_71530ff8(iVar9);
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 != 0xc) {
    FUN_715352d0(&uStack_58,iVar9);
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    FUN_71315100(&bStack_80,s_object_separator_7006e582);
    FUN_71535770(abStack_74,param_1,0xc,&bStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_715341a4;
  }
LAB_71533cbc:
  uVar5 = FUN_71530ff8(iVar9);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  goto LAB_715338e4;
switchD_715338fc_caseD_a:
  pbVar10 = *(byte **)(param_1 + 0x40);
  pbVar12 = *(byte **)(param_1 + 0x44);
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  if (pbVar10 != pbVar12) {
    do {
      if (*pbVar10 < 0x20) {
        auStack_38[0] = 0;
        uStack_3c = 0;
        puStack_40 = (undefined *)0x0;
        FUN_7153ba50(&puStack_40,9,9);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (&uStack_58,&puStack_40);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (&uStack_58);
      }
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 != pbVar12);
  }
  uStack_68 = *(uint *)(param_1 + 0x34);
  uStack_64 = *(undefined4 *)(param_1 + 0x38);
  uStack_60 = *(undefined4 *)(param_1 + 0x3c);
  uStack_7f = 0x756c6176;
  bStack_80 = 10;
  uStack_7b = 0x65;
  FUN_71535770(abStack_74,param_1,0x10,&bStack_80);
  FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
  *(undefined1 *)(param_2 + 0x2c) = 1;
  if (*(char *)(param_2 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
LAB_715341a4:
  puStack_40 = &DAT_70b0e9d8;
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
  if ((abStack_74[0] & 1) != 0) {
    thunk_qNQrlu(uStack_6c);
  }
  uStack_6c = uStack_78;
  if ((bStack_80 & 1) != 0) {
LAB_715341e8:
    thunk_qNQrlu(uStack_6c);
  }
LAB_715341ec:
  if ((uStack_58 & 1) != 0) {
    thunk_qNQrlu(uStack_50);
  }
LAB_71534204:
  if (iStack_4c != 0) {
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_715352d0
// Entry: 0x715352d0 | Size: 192 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715352d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  pbVar2 = *(byte **)(param_2 + 0x20);
  pbVar1 = *(byte **)(param_2 + 0x24);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (pbVar2 != pbVar1) {
    do {
      if (*pbVar2 < 0x20) {
        uStack_28 = 0;
        uStack_2c = 0;
        uStack_30 = 0;
        FUN_7153ba50(&uStack_30,9,9,param_4,*pbVar2);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (param_1,&uStack_30);
        param_4 = extraout_r3;
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (param_1);
        param_4 = extraout_r3_00;
      }
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != pbVar1);
  }
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_71535458
// Entry: 0x71535458 | Size: 360 bytes
// =========================================================================

void FUN_71535458(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ushort auStack_60 [4];
  undefined4 uStack_58;
  byte abStack_54 [8];
  undefined4 uStack_4c;
  uint auStack_48 [2];
  undefined4 *puStack_40;
  byte abStack_3c [8];
  undefined4 uStack_34;
  byte abStack_30 [8];
  uint uStack_28;
  
  puStack_40 = (undefined4 *)thunk_MwhHq(0x10);
  *(undefined1 *)((int)puStack_40 + 0xb) = 0;
  *puStack_40 = 0x73726170;
  puStack_40[1] = 0x72655f65;
  *(undefined4 *)((int)puStack_40 + 7) = 0x726f7272;
  auStack_48[1] = 0xb;
  auStack_48[0] = 0x11;
  FUN_7153a414(abStack_3c,auStack_48,param_2);
  FUN_7153bd34(abStack_54,param_3);
  auStack_60[0] = 0;
  FUN_7153bae0(abStack_30,abStack_3c,s_parse_error_70066513,abStack_54,&DAT_7007096e,auStack_60,
               param_4);
  if ((auStack_60[0] & 1) != 0) {
    thunk_qNQrlu(uStack_58);
  }
  if ((abStack_54[0] & 1) != 0) {
    thunk_qNQrlu(uStack_4c);
  }
  if ((abStack_3c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  if ((auStack_48[0] & 1) != 0) {
    thunk_qNQrlu(puStack_40);
  }
  uVar2 = *param_3;
  *param_1 = &DAT_70b0e9d8;
  param_1[1] = param_2;
  uVar1 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar1 = (uint)abStack_30 | 1;
  }
  thunk_YWhrMvLiObPzUdLMCUZrjZnJUk(param_1 + 2,uVar1);
  param_1[4] = uVar2;
  *param_1 = &DAT_70b0e9ec;
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71535770
// Entry: 0x71535770 | Size: 1012 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71535770(undefined4 *param_1,int param_2,uint param_3,byte *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  puVar1 = (undefined4 *)thunk_MwhHq(0x10);
  param_1[2] = puVar1;
  param_1[1] = 0xd;
  *puVar1 = 0x746e7973;
  *param_1 = 0x11;
  puVar1[1] = 0x65207861;
  puVar1[2] = 0x726f7272;
  *(undefined2 *)(puVar1 + 3) = 0x20;
  uVar2 = *(uint *)(param_4 + 4);
  if ((*param_4 & 1) == 0) {
    uVar2 = (uint)(*param_4 >> 1);
  }
  if (uVar2 != 0) {
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,uVar2 + 0xf);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s_while_parsing_7006126f);
    pbVar4 = *(byte **)(param_4 + 8);
    uVar2 = *(uint *)(param_4 + 4);
    if ((*param_4 & 1) == 0) {
      pbVar4 = param_4 + 1;
      uVar2 = (uint)(*param_4 >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_38,pbVar4,uVar2);
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (&uStack_38,0x20);
    uVar5 = uStack_30;
    uVar2 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar2 = uStack_38 >> 1 & 0x7f;
      uVar5 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar5,uVar2);
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
    }
  }
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,&DAT_700710d1);
  uVar2 = *(uint *)(param_2 + 0x18);
  if (uVar2 == 0xe) {
    pbVar4 = *(byte **)(param_2 + 0x40);
    pbVar6 = *(byte **)(param_2 + 0x44);
    uVar8 = *(undefined4 *)(param_2 + 0x58);
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    if (pbVar4 != pbVar6) {
      do {
        if (*pbVar4 < 0x20) {
          uStack_30 = uStack_30 & 0xffffff00;
          uStack_34 = 0;
          uStack_38 = 0;
          FUN_7153ba50(&uStack_38,9,9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_48,&uStack_38);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (&uStack_48);
        }
        pbVar4 = pbVar4 + 1;
      } while (pbVar4 != pbVar6);
    }
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar3 = imp_strlen(uVar8);
    uVar2 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uVar2 = uStack_48 >> 1 & 0x7f;
    }
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar3 + uVar2 + 0xf);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,uVar8);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s___last_read____70067685);
    uVar5 = uStack_40;
    uVar2 = uStack_44;
    if ((uStack_48 & 1) == 0) {
      uVar2 = uStack_48 >> 1 & 0x7f;
      uVar5 = (uint)&uStack_48 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (&uStack_38,uVar5,uVar2);
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (&uStack_38,0x27);
    uVar5 = uStack_30;
    uVar2 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar2 = uStack_38 >> 1 & 0x7f;
      uVar5 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar5,uVar2);
    uVar2 = uStack_40;
    uVar5 = uStack_48;
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
      uVar2 = uStack_40;
      uVar5 = uStack_48;
    }
  }
  else {
    if (uVar2 < 0x11) {
      pcVar7 = *(char **)(&DAT_70b0e9f8 + uVar2 * 4);
    }
    else {
      pcVar7 = s_unknown_token_700718db;
    }
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar3 = imp___strlen_chk(pcVar7,0x17);
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar3 + 0xb);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s_unexpected_7006f69a);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,pcVar7);
    uVar5 = uStack_30;
    uVar2 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar2 = uStack_38 >> 1 & 0x7f;
      uVar5 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar5,uVar2);
    uVar2 = uStack_30;
    uVar5 = uStack_38;
  }
  if ((uVar5 & 1) != 0) {
    thunk_qNQrlu(uVar2);
  }
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      pcVar7 = *(char **)(&DAT_70b0ea38 + param_3 * 4);
    }
    else {
      pcVar7 = s_unknown_token_700718db;
    }
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    iVar3 = imp___strlen_chk(pcVar7,0x17);
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_38,iVar3 + 0xb);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,s___expected_70063377);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_38,pcVar7);
    uVar5 = uStack_30;
    uVar2 = uStack_34;
    if ((uStack_38 & 1) == 0) {
      uVar2 = uStack_38 >> 1 & 0x7f;
      uVar5 = (uint)&uStack_38 | 1;
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_1,uVar5,uVar2);
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
    }
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715360fc
// Entry: 0x715360fc | Size: 3280 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715360fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  byte abStack_80 [8];
  undefined4 uStack_78;
  byte abStack_74 [8];
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint auStack_58 [6];
  undefined *puStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [16];
  int iStack_28;
  
  iVar9 = param_1 + 0x20;
  iStack_28 = _ext___stack_chk_guard;
  auStack_58[5] = 0;
  auStack_58[4] = 0;
  auStack_58[3] = 0;
  iVar1 = param_1 + 0x4d;
  uVar2 = param_1 + 0x4c;
LAB_71536164:
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    puStack_40 = (undefined *)CONCAT31(puStack_40._1_3_,1);
    goto LAB_715361ec;
  case 2:
    puStack_40 = (undefined *)((uint)puStack_40._1_3_ << 8);
LAB_715361ec:
    FUN_7153cbf8(param_2,&puStack_40);
    break;
  case 3:
    puStack_40 = (undefined *)0x0;
    FUN_7153cf74(param_2,&puStack_40);
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    FUN_7153d63c(param_2,uVar2);
    break;
  case 5:
    puStack_40 = *(undefined **)(param_1 + 0x68);
    uStack_3c = *(uint *)(param_1 + 0x6c);
    FUN_7153dba8(param_2,&puStack_40);
    break;
  case 6:
    puStack_40 = *(undefined **)(param_1 + 0x60);
    uStack_3c = *(uint *)(param_1 + 100);
    FUN_7153d2b4(param_2,&puStack_40);
    break;
  case 7:
    puVar8 = *(undefined **)(param_1 + 0x70);
    uVar11 = *(uint *)(param_1 + 0x74);
    uVar6 = uVar11 & 0x7fffffff;
    iVar3 = FUN_71ba2c1c(puVar8,uVar6,0,0x7ff00000);
    iVar4 = FUN_71ba0f44(puVar8,uVar6,0,0x7ff00000);
    if (iVar4 != 0 || iVar3 != 0) {
      FUN_715352d0(auStack_58,iVar9);
      FUN_715352d0(abStack_74,iVar9);
      abStack_80[0] = 0x27;
      FUN_71538d24(&uStack_68,s_number_overflow_parsing___700653da,abStack_74,abStack_80);
      FUN_71538a00(&puStack_40,0x196,&uStack_68,0);
      *(undefined1 *)(param_2 + 0x14) = 1;
      if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      if ((uStack_68 & 1) != 0) {
        thunk_qNQrlu(uStack_60);
      }
LAB_71536b58:
      if ((abStack_74[0] & 1) == 0) goto LAB_71536a68;
      goto LAB_71536a64;
    }
    iVar3 = *(int *)(param_1 + 0x78);
    bVar13 = iVar3 != 0x2e;
    if (bVar13) {
      iVar3 = *(int *)(param_1 + 0x7c);
    }
    if (bVar13 && iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0x54);
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        iVar4 = iVar1;
      }
      *(undefined1 *)(iVar4 + iVar3) = 0x2e;
    }
    puStack_40 = puVar8;
    uStack_3c = uVar11;
    FUN_7153c870(param_2,&puStack_40);
    break;
  case 8:
    iVar3 = FUN_7153c26c(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_71536a80;
    iVar3 = FUN_71530ff8(iVar9);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 == 10) goto LAB_715363f8;
    if (auStack_58[4] == auStack_58[5] * 0x20) {
      if (auStack_58[4] == 0xfffffffe || (int)(auStack_58[4] + 1) < -1) {
LAB_71536df4:
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(auStack_58 + 3);
      }
      uVar6 = 0x7fffffff;
      if ((auStack_58[4] < 0x3fffffff) &&
         (uVar6 = (auStack_58[4] & 0x3fffffe0) + 0x20, uVar6 < auStack_58[5] << 6)) {
        uVar6 = auStack_58[5] << 6;
      }
      FUN_71537a10(auStack_58 + 3,uVar6);
    }
    *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) =
         *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) | 1 << (auStack_58[4] & 0x1f);
    auStack_58[4] = auStack_58[4] + 1;
    goto LAB_71536164;
  case 9:
    iVar3 = FUN_7153c050(param_2,0xffffffff);
    if (iVar3 == 0) goto LAB_71536a80;
    iVar3 = FUN_71530ff8(iVar9);
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 != 0xb) {
      if (iVar3 != 4) {
        FUN_715352d0(auStack_58,iVar9);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(abStack_80,s_object_key_700653cf);
        FUN_71535770(abStack_74,param_1,4,abStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x14) = 1;
        if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_71536a20;
      }
      iVar3 = *(int *)(param_1 + 0x78);
      bVar13 = iVar3 != 0x2e;
      if (bVar13) {
        iVar3 = *(int *)(param_1 + 0x7c);
      }
      if (bVar13 && iVar3 != -1) {
        iVar4 = *(int *)(param_1 + 0x54);
        if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
          iVar4 = iVar1;
        }
        *(undefined1 *)(iVar4 + iVar3) = 0x2e;
      }
      auStack_58[0] = uVar2;
      FUN_7153a2b8(&puStack_40,*(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + -4) + 8),uVar2,
                   &DAT_70081f62,auStack_58,&uStack_68);
      *(undefined **)(param_2 + 0x10) = puStack_40 + 0x20;
      iVar3 = FUN_71530ff8(iVar9);
      *(int *)(param_1 + 0x18) = iVar3;
      if (iVar3 != 0xc) {
        FUN_715352d0(auStack_58,iVar9);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(abStack_80,s_object_separator_7006e582);
        FUN_71535770(abStack_74,param_1,0xc,abStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x14) = 1;
        if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_71536a20;
      }
      if (auStack_58[4] == auStack_58[5] * 0x20) {
        if (auStack_58[4] == 0xfffffffe || (int)(auStack_58[4] + 1) < -1) goto LAB_71536df4;
        uVar6 = 0x7fffffff;
        if ((auStack_58[4] < 0x3fffffff) &&
           (uVar6 = (auStack_58[4] & 0x3fffffe0) + 0x20, uVar6 < auStack_58[5] << 6)) {
          uVar6 = auStack_58[5] << 6;
        }
        FUN_71537a10(auStack_58 + 3,uVar6);
      }
      *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) =
           *(uint *)(auStack_58[3] + (auStack_58[4] >> 5) * 4) & ~(1 << (auStack_58[4] & 0x1f));
      auStack_58[4] = auStack_58[4] + 1;
LAB_71536538:
      uVar5 = FUN_71530ff8(iVar9);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      goto LAB_71536164;
    }
LAB_715363f8:
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -4;
    break;
  default:
    goto switchD_7153617c_caseD_a;
  case 0xe:
    pbVar10 = *(byte **)(param_1 + 0x40);
    pbVar12 = *(byte **)(param_1 + 0x44);
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[0] = 0;
    if (pbVar10 != pbVar12) {
      do {
        if (*pbVar10 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_7153ba50(&puStack_40,9,9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (auStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (auStack_58);
        }
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar12);
    }
    uStack_68 = *(uint *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    abStack_80[1] = 0x76;
    abStack_80[2] = 0x61;
    abStack_80[3] = 0x6c;
    abStack_80[4] = 0x75;
    abStack_80[0] = 10;
    abStack_80[5] = 0x65;
    abStack_80[6] = 0;
    FUN_71535770(abStack_74,param_1,0,abStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_71536a20;
  case 0xf:
    puVar7 = (uint *)(param_1 + 0x34);
    if (*puVar7 == 1) {
      FUN_715352d0(auStack_58,iVar9);
      uStack_68 = *puVar7;
      uStack_64 = *(undefined4 *)(param_1 + 0x38);
      uStack_60 = *(undefined4 *)(param_1 + 0x3c);
      FUN_71315100(abStack_74,s_attempting_to_parse_an_empty_inp_7006dd14);
      FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
      *(undefined1 *)(param_2 + 0x14) = 1;
      if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      puStack_40 = &DAT_70b0e9d8;
      thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
      thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
      goto LAB_71536b58;
    }
    pbVar10 = *(byte **)(param_1 + 0x40);
    pbVar12 = *(byte **)(param_1 + 0x44);
    auStack_58[2] = 0;
    auStack_58[1] = 0;
    auStack_58[0] = 0;
    if (pbVar10 != pbVar12) {
      do {
        if (*pbVar10 < 0x20) {
          auStack_38[0] = 0;
          uStack_3c = 0;
          puStack_40 = (undefined *)0x0;
          FUN_7153ba50(&puStack_40,9,9);
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (auStack_58,&puStack_40);
        }
        else {
          thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                    (auStack_58);
        }
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar12);
    }
    uStack_68 = *puVar7;
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    uStack_60 = *(undefined4 *)(param_1 + 0x3c);
    abStack_80[1] = 0x76;
    abStack_80[2] = 0x61;
    abStack_80[3] = 0x6c;
    abStack_80[4] = 0x75;
    abStack_80[0] = 10;
    abStack_80[5] = 0x65;
    abStack_80[6] = 0;
    FUN_71535770(abStack_74,param_1,0x10,abStack_80);
    FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
    *(undefined1 *)(param_2 + 0x14) = 1;
    if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_71536a20;
  }
  if (auStack_58[4] != 0) {
    do {
      uVar11 = auStack_58[4] - 1;
      uVar6 = *(uint *)(auStack_58[3] + (uVar11 >> 5) * 4);
      iVar3 = FUN_71530ff8(iVar9);
      *(int *)(param_1 + 0x18) = iVar3;
      if ((uVar6 >> (uVar11 & 0x1f) & 1) == 0) {
        if (iVar3 == 0xd) {
          iVar3 = FUN_71530ff8(iVar9);
          *(int *)(param_1 + 0x18) = iVar3;
          if ((iVar3 != 0xb) || (*(char *)(param_1 + 0x81) == '\0')) {
            if (iVar3 != 4) {
              FUN_715352d0(auStack_58,iVar9);
              uStack_68 = *(uint *)(param_1 + 0x34);
              uStack_64 = *(undefined4 *)(param_1 + 0x38);
              uStack_60 = *(undefined4 *)(param_1 + 0x3c);
              FUN_71315100(abStack_80,s_object_key_700653cf);
              FUN_71535770(abStack_74,param_1,4,abStack_80);
              FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
              *(undefined1 *)(param_2 + 0x14) = 1;
              if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
                imp_abort();
              }
              goto LAB_71536a20;
            }
            iVar3 = *(int *)(param_1 + 0x78);
            bVar13 = iVar3 != 0x2e;
            if (bVar13) {
              iVar3 = *(int *)(param_1 + 0x7c);
            }
            if (bVar13 && iVar3 != -1) {
              iVar4 = *(int *)(param_1 + 0x54);
              if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
                iVar4 = iVar1;
              }
              *(undefined1 *)(iVar4 + iVar3) = 0x2e;
            }
            auStack_58[0] = uVar2;
            FUN_7153a2b8(&puStack_40,*(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + -4) + 8),uVar2
                         ,&DAT_70081f62,auStack_58,&uStack_68);
            *(undefined **)(param_2 + 0x10) = puStack_40 + 0x20;
            iVar3 = FUN_71530ff8(iVar9);
            *(int *)(param_1 + 0x18) = iVar3;
            if (iVar3 == 0xc) goto LAB_71536538;
            FUN_715352d0(auStack_58,iVar9);
            uStack_68 = *(uint *)(param_1 + 0x34);
            uStack_64 = *(undefined4 *)(param_1 + 0x38);
            uStack_60 = *(undefined4 *)(param_1 + 0x3c);
            FUN_71315100(abStack_80,s_object_separator_7006e582);
            FUN_71535770(abStack_74,param_1,0xc,abStack_80);
            FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
            *(undefined1 *)(param_2 + 0x14) = 1;
            if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
              imp_abort();
            }
            goto LAB_71536a20;
          }
        }
        else if (iVar3 != 0xb) {
          FUN_715352d0(auStack_58,iVar9);
          uStack_68 = *(uint *)(param_1 + 0x34);
          uStack_64 = *(undefined4 *)(param_1 + 0x38);
          uStack_60 = *(undefined4 *)(param_1 + 0x3c);
          FUN_71315100(abStack_80,s_object_7006a39b);
          FUN_71535770(abStack_74,param_1,0xb,abStack_80);
          FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
          *(undefined1 *)(param_2 + 0x14) = 1;
          if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
          goto LAB_71536a20;
        }
      }
      else if (iVar3 == 0xd) {
        iVar3 = FUN_71530ff8(iVar9);
        *(int *)(param_1 + 0x18) = iVar3;
        if ((iVar3 != 10) || (*(char *)(param_1 + 0x81) == '\0')) goto LAB_71536164;
      }
      else if (iVar3 != 10) {
        FUN_715352d0(auStack_58,iVar9);
        uStack_68 = *(uint *)(param_1 + 0x34);
        uStack_64 = *(undefined4 *)(param_1 + 0x38);
        uStack_60 = *(undefined4 *)(param_1 + 0x3c);
        FUN_71315100(abStack_80,s_array_7006e593);
        FUN_71535770(abStack_74,param_1,10,abStack_80);
        FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
        *(undefined1 *)(param_2 + 0x14) = 1;
        if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_71536a20;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -4;
      auStack_58[4] = auStack_58[4] - 1;
      if (auStack_58[4] == 0) break;
    } while( true );
  }
  goto LAB_71536a80;
switchD_7153617c_caseD_a:
  pbVar10 = *(byte **)(param_1 + 0x40);
  pbVar12 = *(byte **)(param_1 + 0x44);
  auStack_58[2] = 0;
  auStack_58[1] = 0;
  auStack_58[0] = 0;
  if (pbVar10 != pbVar12) {
    do {
      if (*pbVar10 < 0x20) {
        auStack_38[0] = 0;
        uStack_3c = 0;
        puStack_40 = (undefined *)0x0;
        FUN_7153ba50(&puStack_40,9,9);
        thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                  (auStack_58,&puStack_40);
      }
      else {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (auStack_58);
      }
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 != pbVar12);
  }
  uStack_68 = *(uint *)(param_1 + 0x34);
  uStack_64 = *(undefined4 *)(param_1 + 0x38);
  uStack_60 = *(undefined4 *)(param_1 + 0x3c);
  abStack_80[1] = 0x76;
  abStack_80[2] = 0x61;
  abStack_80[3] = 0x6c;
  abStack_80[4] = 0x75;
  abStack_80[0] = 10;
  abStack_80[5] = 0x65;
  abStack_80[6] = 0;
  FUN_71535770(abStack_74,param_1,0x10,abStack_80);
  FUN_71535458(&puStack_40,0x65,&uStack_68,abStack_74,0);
  *(undefined1 *)(param_2 + 0x14) = 1;
  if (*(char *)(param_2 + 0x15) != '\0') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
LAB_71536a20:
  puStack_40 = &DAT_70b0e9d8;
  thunk_jJGKcnfLgdrxxLeuIMkbyODuAc(auStack_38);
  thunk_CnY_uZeaDyxdbKuhNYOsuNTHkGOv_Ep(&puStack_40);
  if ((abStack_74[0] & 1) != 0) {
    thunk_qNQrlu(uStack_6c);
  }
  uStack_6c = uStack_78;
  if ((abStack_80[0] & 1) != 0) {
LAB_71536a64:
    thunk_qNQrlu(uStack_6c);
  }
LAB_71536a68:
  if ((auStack_58[0] & 1) != 0) {
    thunk_qNQrlu(auStack_58[2]);
  }
LAB_71536a80:
  if (auStack_58[3] != 0) {
    thunk_qNQrlu();
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71537a10
// Entry: 0x71537a10 | Size: 272 bytes
// =========================================================================

void FUN_71537a10(int *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  if ((uint)(param_1[2] * 0x20) < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1);
    }
    iVar1 = (param_2 - 1 >> 5) + 1;
    puVar2 = (uint *)thunk_MwhHq(iVar1 * 4);
    uVar6 = param_1[1];
    puVar10 = (uint *)*param_1;
    uVar4 = uVar6 - 1 >> 5;
    if (uVar6 < 0x21) {
      uVar4 = 0;
    }
    puVar2[uVar4] = 0;
    if (uVar6 != 0) {
      uVar4 = 0;
      uVar3 = 0;
      puVar5 = puVar10;
      puVar8 = puVar2;
      do {
        uVar9 = 1 << (uVar3 & 0xff);
        if ((*puVar5 >> (uVar4 & 0xff) & 1) == 0) {
          uVar9 = *puVar8 & ~uVar9;
        }
        else {
          uVar9 = *puVar8 | uVar9;
        }
        uVar7 = 0;
        if (uVar3 != 0x1f) {
          uVar7 = uVar3 + 1;
        }
        if (uVar4 == 0x1f) {
          puVar5 = puVar5 + 1;
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + 1;
        }
        *puVar8 = uVar9;
        if (uVar3 == 0x1f) {
          puVar8 = puVar8 + 1;
        }
        uVar3 = uVar7;
      } while ((uVar4 != (uVar6 & 0x1f)) || (puVar5 != puVar10 + (uVar6 >> 5)));
    }
    param_1[2] = iVar1;
    *param_1 = (int)puVar2;
    if (puVar10 != (uint *)0x0) {
      thunk_qNQrlu(puVar10);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71537b8c
// Entry: 0x71537b8c | Size: 20 bytes
// =========================================================================

void FUN_71537b8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71537bf4
// Entry: 0x71537bf4 | Size: 500 bytes
// =========================================================================

undefined4 FUN_71537bf4(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 uStack_35;
  undefined1 auStack_34 [4];
  byte *pbStack_30;
  undefined1 uStack_29;
  int iStack_28;
  
  piVar9 = (int *)(param_1 + 4);
  iStack_28 = *(int *)(param_1 + 8) - *piVar9 >> 2;
  uStack_29 = 0;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_71539164();
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&iStack_28,&uStack_29,param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x18);
  if (uVar5 == iVar7 * 0x20) {
    if (uVar5 == 0xfffffffe || (int)(uVar5 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1 + 0x10);
    }
    uVar4 = 0x7fffffff;
    if ((uVar5 < 0x3fffffff) && (uVar4 = (uVar5 & 0x3fffffe0) + 0x20, uVar4 < (uint)(iVar7 << 6))) {
      uVar4 = iVar7 << 6;
    }
    FUN_71537a10(param_1 + 0x10,uVar4);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x14) = uVar5 + 1;
  uVar4 = 1 << (uVar5 & 0x1f);
  uStack_35 = 1;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4);
  if (iVar2 == 0) {
    uVar6 = uVar6 & ~uVar4;
  }
  else {
    uVar6 = uVar6 | uVar4;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4) = uVar6;
  FUN_71538e54(auStack_34,param_1,&uStack_35,1);
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (puVar8 < *(undefined4 **)(param_1 + 0xc)) {
    puVar10 = puVar8 + 1;
    *puVar8 = pbStack_30;
  }
  else {
    iVar7 = *piVar9;
    iVar2 = (int)puVar8 - iVar7 >> 2;
    uVar5 = iVar2 + 1;
    if (0x3fffffff < uVar5) {
      FUN_715393a0(piVar9);
LAB_71537de4:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar6 = (int)*(undefined4 **)(param_1 + 0xc) - iVar7;
    uVar4 = (int)uVar6 >> 1;
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    if (0x7ffffffb < uVar6) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x3fffffff < uVar5) goto LAB_71537de4;
      iVar3 = thunk_MwhHq(uVar5 << 2);
    }
    puVar10 = (undefined4 *)(iVar3 + iVar2 * 4);
    *puVar10 = pbStack_30;
    imp___aeabi_memcpy4(iVar3,iVar7,(int)puVar8 - iVar7);
    pbStack_30 = (byte *)(iVar3 + uVar5 * 4);
    puVar10 = puVar10 + 1;
    *(int *)(param_1 + 4) = iVar3;
    *(undefined4 **)(param_1 + 8) = puVar10;
    *(byte **)(param_1 + 0xc) = pbStack_30;
    if (iVar7 != 0) {
      pbStack_30 = (byte *)thunk_qNQrlu(iVar7);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar10;
  if (param_2 != 0xffffffff) {
    pbStack_30 = (byte *)puVar10[-1];
  }
  if (param_2 != 0xffffffff && pbStack_30 != (byte *)0x0) {
    uVar5 = 1;
    if (*pbStack_30 < 3) {
      uVar5 = *(uint *)(&DAT_70081f64 + (uint)*pbStack_30 * 4);
    }
    if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_71537f38
// Entry: 0x71537f38 | Size: 524 bytes
// =========================================================================

undefined4 FUN_71537f38(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  int aiStack_48 [4];
  byte *pbStack_38;
  int *piStack_34;
  byte *pbStack_30;
  int iStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_11;
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) != 0) {
    aiStack_48[0] = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1;
    uStack_11 = 1;
    piVar2 = *(int **)(param_1 + 0x40);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,aiStack_48,&uStack_11);
    if (iVar3 == 0) {
      iVar3 = FUN_71539408(auStack_28,param_1 + 0x50);
      puVar5 = *(undefined1 **)(*(int *)(param_1 + 8) + -4);
      uVar1 = *puVar5;
      *puVar5 = auStack_28[0];
      uVar10 = *(undefined4 *)(puVar5 + 8);
      *(undefined4 *)(puVar5 + 8) = uStack_20;
      uVar7 = *(undefined4 *)(puVar5 + 0xc);
      *(undefined4 *)(puVar5 + 0xc) = uStack_1c;
      auStack_28[0] = uVar1;
      uStack_20 = uVar10;
      uStack_1c = uVar7;
      FUN_7152f750(iVar3 + 8);
    }
  }
  pbStack_38 = *(byte **)(param_1 + 8);
  pbVar8 = pbStack_38 + -4;
  *(byte **)(param_1 + 8) = pbVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  bVar11 = *(byte **)(param_1 + 4) != pbVar8;
  if (bVar11) {
    pbStack_38 = *(byte **)(pbStack_38 + -8);
  }
  if (bVar11 && pbStack_38 != (byte *)0x0) {
    uVar4 = (uint)*pbStack_38;
    puVar6 = (undefined4 *)(uVar4 - 1);
    if (puVar6 < (undefined4 *)0x2) {
      if (uVar4 == 2) {
        iStack_2c = -0x80000000;
        piStack_34 = (int *)0x0;
        pbStack_30 = (byte *)**(undefined4 **)(pbStack_38 + 8);
      }
      else {
        iStack_2c = 0;
        if (uVar4 == 1) {
          puVar6 = *(undefined4 **)(pbStack_38 + 8);
        }
        piStack_34 = (int *)0x0;
        pbStack_30 = (byte *)0x0;
        if (uVar4 == 1) {
          iStack_2c = -0x80000000;
          piStack_34 = (int *)*puVar6;
        }
      }
      while( true ) {
        if (uVar4 == 1) {
          if (piStack_34 == (int *)(*(int *)(pbStack_38 + 8) + 4)) {
            return 1;
          }
          pbVar8 = (byte *)(piStack_34 + 8);
        }
        else if (uVar4 == 2) {
          pbVar8 = pbStack_30;
          if (pbStack_30 == *(byte **)(*(int *)(pbStack_38 + 8) + 4)) {
            return 1;
          }
        }
        else {
          if (iStack_2c == 1) {
            return 1;
          }
          pbVar8 = pbStack_38;
          if (iStack_2c != 0) {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
        }
        if (*pbVar8 == 9) break;
        if (uVar4 == 2) {
          pbStack_30 = pbStack_30 + 0x10;
        }
        else if (uVar4 == 1) {
          piVar2 = (int *)piStack_34[1];
          piVar9 = piStack_34;
          if ((int *)piStack_34[1] == (int *)0x0) {
            do {
              piStack_34 = (int *)piVar9[2];
              bVar11 = (int *)*piStack_34 != piVar9;
              piVar9 = piStack_34;
            } while (bVar11);
          }
          else {
            do {
              piStack_34 = piVar2;
              piVar2 = (int *)*piStack_34;
            } while ((int *)*piStack_34 != (int *)0x0);
          }
        }
        else {
          iStack_2c = iStack_2c + 1;
        }
      }
      FUN_715397f8(aiStack_48,pbStack_38,&pbStack_38);
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_715381e8
// Entry: 0x715381e8 | Size: 476 bytes
// =========================================================================

undefined4 FUN_715381e8(int param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [2];
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined1 uStack_2d;
  byte *pbStack_2c;
  int aiStack_28 [2];
  
  uStack_34 = 0;
  puStack_38 = (undefined4 *)0x0;
  auStack_40[1] = 0;
  auStack_40[0] = 3;
  puVar2 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_2 & 1) == 0) {
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar6;
    puVar2[2] = uVar8;
  }
  else {
    FUN_712f6d58(puVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  }
  aiStack_28[0] = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  pbStack_2c = (byte *)CONCAT31(pbStack_2c._1_3_,4);
  piVar3 = *(int **)(param_1 + 0x40);
  puStack_38 = puVar2;
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,aiStack_28,&pbStack_2c,auStack_40);
    uVar9 = *(uint *)(param_1 + 0x20);
    iVar10 = *(int *)(param_1 + 0x24);
    if (uVar9 == iVar10 * 0x20) {
      if (uVar9 == 0xfffffffe || (int)(uVar9 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_71537b8c(param_1 + 0x1c);
      }
      uVar7 = 0x7fffffff;
      if ((uVar9 < 0x3fffffff) && (uVar7 = (uVar9 & 0x3fffffe0) + 0x20, uVar7 < (uint)(iVar10 << 6))
         ) {
        uVar7 = iVar10 << 6;
      }
      FUN_71537a10(param_1 + 0x1c,uVar7);
      uVar9 = *(uint *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x20) = uVar9 + 1;
    uVar7 = 1 << (uVar9 & 0x1f);
    uVar9 = uVar9 >> 5;
    iVar10 = *(int *)(param_1 + 0x1c);
    if (iVar4 == 0) {
      *(uint *)(iVar10 + uVar9 * 4) = *(uint *)(iVar10 + uVar9 * 4) & ~uVar7;
    }
    else {
      *(uint *)(iVar10 + uVar9 * 4) = *(uint *)(iVar10 + uVar9 * 4) | uVar7;
      if (*(int *)(*(int *)(param_1 + 8) + -4) != 0) {
        FUN_71539408(auStack_50,param_1 + 0x50);
        pbStack_2c = param_2;
        FUN_7153a2b8(aiStack_28,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + -4) + 8),param_2,
                     &DAT_70081f62,&pbStack_2c,&uStack_2d);
        puVar5 = (undefined1 *)(aiStack_28[0] + 0x20);
        uVar1 = *puVar5;
        *puVar5 = auStack_50[0];
        uVar6 = *(undefined4 *)(aiStack_28[0] + 0x28);
        uVar8 = *(undefined4 *)(aiStack_28[0] + 0x2c);
        *(undefined4 *)(aiStack_28[0] + 0x28) = uStack_48;
        *(undefined4 *)(aiStack_28[0] + 0x2c) = uStack_44;
        *(undefined1 **)(param_1 + 0x28) = puVar5;
        auStack_50[0] = uVar1;
        uStack_48 = uVar6;
        uStack_44 = uVar8;
        FUN_7152f750(&uStack_48);
      }
    }
    FUN_7152f750(&puStack_38,auStack_40[0] & 0xff);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71539164();
}


// =========================================================================
// Function: FUN_715384f8
// Entry: 0x715384f8 | Size: 504 bytes
// =========================================================================

undefined4 FUN_715384f8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined1 uStack_35;
  undefined1 auStack_34 [4];
  byte *pbStack_30;
  undefined1 uStack_29;
  int iStack_28;
  
  piVar9 = (int *)(param_1 + 4);
  iStack_28 = *(int *)(param_1 + 8) - *piVar9 >> 2;
  uStack_29 = 2;
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_71539164();
  }
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&iStack_28,&uStack_29,param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x18);
  if (uVar5 == iVar7 * 0x20) {
    if (uVar5 == 0xfffffffe || (int)(uVar5 + 1) < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_71537b8c(param_1 + 0x10);
    }
    uVar4 = 0x7fffffff;
    if ((uVar5 < 0x3fffffff) && (uVar4 = (uVar5 & 0x3fffffe0) + 0x20, uVar4 < (uint)(iVar7 << 6))) {
      uVar4 = iVar7 << 6;
    }
    FUN_71537a10(param_1 + 0x10,uVar4);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x14) = uVar5 + 1;
  uVar4 = 1 << (uVar5 & 0x1f);
  uVar6 = *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4);
  if (iVar2 == 0) {
    uVar6 = uVar6 & ~uVar4;
  }
  else {
    uVar6 = uVar6 | uVar4;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + (uVar5 >> 5) * 4) = uVar6;
  uStack_35 = 2;
  FUN_71538e54(auStack_34,param_1,&uStack_35,1);
  puVar8 = *(undefined4 **)(param_1 + 8);
  if (puVar8 < *(undefined4 **)(param_1 + 0xc)) {
    puVar10 = puVar8 + 1;
    *puVar8 = pbStack_30;
  }
  else {
    iVar7 = *piVar9;
    iVar2 = (int)puVar8 - iVar7 >> 2;
    uVar5 = iVar2 + 1;
    if (0x3fffffff < uVar5) {
      FUN_715393a0(piVar9);
LAB_715386ec:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar6 = (int)*(undefined4 **)(param_1 + 0xc) - iVar7;
    uVar4 = (int)uVar6 >> 1;
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    if (0x7ffffffb < uVar6) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x3fffffff < uVar5) goto LAB_715386ec;
      iVar3 = thunk_MwhHq(uVar5 << 2);
    }
    puVar10 = (undefined4 *)(iVar3 + iVar2 * 4);
    *puVar10 = pbStack_30;
    imp___aeabi_memcpy4(iVar3,iVar7,(int)puVar8 - iVar7);
    pbStack_30 = (byte *)(iVar3 + uVar5 * 4);
    puVar10 = puVar10 + 1;
    *(int *)(param_1 + 4) = iVar3;
    *(undefined4 **)(param_1 + 8) = puVar10;
    *(byte **)(param_1 + 0xc) = pbStack_30;
    if (iVar7 != 0) {
      pbStack_30 = (byte *)thunk_qNQrlu(iVar7);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar10;
  if (param_2 != 0xffffffff) {
    pbStack_30 = (byte *)puVar10[-1];
  }
  if (param_2 != 0xffffffff && pbStack_30 != (byte *)0x0) {
    uVar5 = 1;
    if (*pbStack_30 < 3) {
      uVar5 = *(uint *)(&DAT_70081f64 + (uint)*pbStack_30 * 4);
    }
    if (uVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_71538840
// Entry: 0x71538840 | Size: 312 bytes
// =========================================================================

undefined4 FUN_71538840(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_15;
  int iStack_14;
  
  piVar4 = (int *)(*(int *)(param_1 + 8) + -4);
  if (*piVar4 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(int **)(param_1 + 8) = piVar4;
  }
  else {
    iStack_14 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1;
    uStack_15 = 3;
    piVar4 = *(int **)(param_1 + 0x40);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,&iStack_14,&uStack_15);
    if (iVar2 == 0) {
      iVar2 = FUN_71539408(auStack_28,param_1 + 0x50);
      puVar5 = *(undefined1 **)(*(int *)(param_1 + 8) + -4);
      uVar1 = *puVar5;
      *puVar5 = auStack_28[0];
      uVar8 = *(undefined4 *)(puVar5 + 8);
      *(undefined4 *)(puVar5 + 8) = uStack_20;
      uVar6 = *(undefined4 *)(puVar5 + 0xc);
      *(undefined4 *)(puVar5 + 0xc) = uStack_1c;
      auStack_28[0] = uVar1;
      uStack_20 = uVar8;
      uStack_1c = uVar6;
      FUN_7152f750(iVar2 + 8);
      iVar2 = *(int *)(param_1 + 8);
      iVar7 = iVar2 + -4;
      *(int *)(param_1 + 8) = iVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      if (*(int *)(param_1 + 4) == iVar7) {
        return 1;
      }
      pcVar3 = *(char **)(iVar2 + -8);
      if (*pcVar3 != '\x02') {
        return 1;
      }
      iVar2 = *(int *)(pcVar3 + 8);
      iVar7 = *(int *)(iVar2 + 4);
      puVar5 = (undefined1 *)(iVar7 + -0x10);
      FUN_7152f750(iVar7 + -8,*puVar5);
      *(undefined1 **)(iVar2 + 4) = puVar5;
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  }
  *(int *)(param_1 + 0x14) = iVar2 + -1;
  return 1;
}


// =========================================================================
// Function: FUN_71538a00
// Entry: 0x71538a00 | Size: 408 bytes
// =========================================================================

void FUN_71538a00(undefined4 *param_1,undefined4 param_2,byte *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  ushort auStack_54 [4];
  undefined4 uStack_4c;
  uint auStack_48 [2];
  undefined4 *puStack_40;
  byte abStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  uint auStack_30 [4];
  
  puStack_40 = (undefined4 *)thunk_MwhHq(0x10);
  *(undefined1 *)(puStack_40 + 3) = 0;
  *puStack_40 = 0x5f74756f;
  puStack_40[1] = 0x725f666f;
  puStack_40[2] = 0x65676e61;
  auStack_48[1] = 0xc;
  auStack_48[0] = 0x11;
  FUN_7153a414(abStack_3c,auStack_48,param_2);
  auStack_30[0] = 0;
  uVar1 = uStack_38;
  if ((abStack_3c[0] & 1) == 0) {
    uVar1 = (uint)(abStack_3c[0] >> 1);
  }
  auStack_30[1] = 0;
  auStack_30[2] = 0;
  uVar3 = *(uint *)(param_3 + 4);
  auStack_54[0] = 0;
  if ((*param_3 & 1) == 0) {
    uVar3 = (uint)(*param_3 >> 1);
  }
  thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
            (auStack_30,uVar3 + uVar1);
  uVar1 = uStack_34;
  if ((abStack_3c[0] & 1) == 0) {
    uStack_38 = (uint)(abStack_3c[0] >> 1);
    uVar1 = (uint)abStack_3c | 1;
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (auStack_30,uVar1,uStack_38);
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (auStack_30,(uint)auStack_54 | 1,0);
  pbVar2 = *(byte **)(param_3 + 8);
  uVar1 = *(uint *)(param_3 + 4);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (uint)(*param_3 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (auStack_30,pbVar2,uVar1);
  if ((auStack_54[0] & 1) != 0) {
    thunk_qNQrlu(uStack_4c);
  }
  if ((abStack_3c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  if ((auStack_48[0] & 1) != 0) {
    thunk_qNQrlu(puStack_40);
  }
  *param_1 = &DAT_70b0e9d8;
  param_1[1] = param_2;
  uVar1 = auStack_30[2];
  if ((auStack_30[0] & 1) == 0) {
    uVar1 = (uint)auStack_30 | 1;
  }
  thunk_YWhrMvLiObPzUdLMCUZrjZnJUk(param_1 + 2,uVar1);
  *param_1 = &DAT_70b0e9c4;
  if ((auStack_30[0] & 1) != 0) {
    thunk_qNQrlu(auStack_30[2]);
  }
  return;
}


// =========================================================================
// Function: FUN_71538d24
// Entry: 0x71538d24 | Size: 140 bytes
// =========================================================================

void FUN_71538d24(undefined4 *param_1,undefined4 param_2,byte *param_3,undefined1 *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = imp_strlen(param_2);
  uVar3 = *(uint *)(param_3 + 4);
  if ((*param_3 & 1) == 0) {
    uVar3 = (uint)(*param_3 >> 1);
  }
  thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
            (param_1,iVar1 + uVar3 + 1);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,param_2);
  pbVar2 = *(byte **)(param_3 + 8);
  uVar3 = *(uint *)(param_3 + 4);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar3 = (uint)(*param_3 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar2,uVar3);
  thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
            (param_1,*param_4);
  return;
}


// =========================================================================
// Function: FUN_71538e54
// Entry: 0x71538e54 | Size: 592 bytes
// =========================================================================

void FUN_71538e54(undefined1 *param_1,int *param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_38 = CONCAT31(uStack_38._1_3_,*param_3);
  FUN_71530e60(&uStack_30);
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_71538ef0;
LAB_7153904c:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_71538ef0:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153904c;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7153904c;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_71539164
// Entry: 0x71539164 | Size: 36 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71539164(void)

{
  undefined4 unaff_r5;
  undefined1 in_NG;
  undefined1 in_CY;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  thunk_qxUwTPHcvDlxy_nSlUZCGSLpSNjobTKAKBULIxBiM(s_bad_function_call_was_thrown_in___70070939);
  coprocessor_function2(7,0xb,6,in_cr7,in_cr3,in_cr1);
  if (!(bool)in_NG) {
    coprocessor_function(1,0,7,in_cr6,in_cr11,in_cr8);
  }
  if ((bool)in_CY) {
    coprocessor_loadlong(2,in_cr1,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_715391cc
// Entry: 0x715391cc | Size: 304 bytes
// =========================================================================

undefined4 * FUN_715391cc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  
  iVar1 = param_1[1] - *param_1 >> 4;
  uVar13 = iVar1 + 1;
  if (0xfffffff < uVar13) {
    FUN_7152fef0(param_1);
LAB_715392f8:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  uVar3 = param_1[2] - *param_1;
  uVar2 = (int)uVar3 >> 3;
  if (uVar13 < uVar2) {
    uVar13 = uVar2;
  }
  if (0x7fffffef < uVar3) {
    uVar13 = 0xfffffff;
  }
  iVar4 = 0;
  if (uVar13 != 0) {
    if (0xfffffff < uVar13) goto LAB_715392f8;
    iVar4 = thunk_MwhHq(uVar13 << 4);
  }
  uVar7 = *param_2;
  uVar9 = param_2[1];
  uVar14 = param_2[2];
  uVar12 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)param_2 = 0;
  puVar5 = (undefined4 *)(iVar4 + iVar1 * 0x10);
  *puVar5 = uVar7;
  puVar8 = (undefined4 *)*param_1;
  puVar15 = (undefined4 *)param_1[1];
  puVar5[1] = uVar9;
  puVar5[2] = uVar14;
  puVar10 = (undefined4 *)((int)puVar5 + ((int)puVar8 - (int)puVar15));
  puVar5[3] = uVar12;
  puVar6 = puVar8;
  puVar11 = puVar10;
  if ((int)puVar8 - (int)puVar15 != 0) {
    do {
      uVar7 = puVar6[1];
      uVar9 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar11 = *puVar6;
      puVar11[1] = uVar7;
      puVar11[2] = uVar9;
      puVar11[3] = uVar12;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)puVar6 = 0;
      puVar6 = puVar6 + 4;
      puVar11 = puVar11 + 4;
    } while (puVar6 != puVar15);
    do {
      puVar6 = puVar8 + 4;
      FUN_7152f750(puVar8 + 2,*(undefined1 *)puVar8);
      puVar8 = puVar6;
    } while (puVar6 != puVar15);
    puVar15 = (undefined4 *)*param_1;
  }
  *param_1 = (int)puVar10;
  param_1[1] = (int)(puVar5 + 4);
  param_1[2] = iVar4 + uVar13 * 0x10;
  if (puVar15 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar15);
  }
  return puVar5 + 4;
}


// =========================================================================
// Function: FUN_715393a0
// Entry: 0x715393a0 | Size: 20 bytes
// =========================================================================

void FUN_715393a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71539408
// Entry: 0x71539408 | Size: 812 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_71539408(undefined4 *param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  byte bVar15;
  int iVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  uint extraout_r12;
  uint extraout_r12_00;
  char cVar25;
  undefined1 uVar26;
  bool bVar27;
  undefined1 uVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined1 auStack_2c [8];
  
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar9 = param_1 + 2;
  *puVar9 = 0;
  uVar26 = *param_2;
  *(undefined1 *)param_1 = uVar26;
  switch(uVar26) {
  case 1:
    puVar22 = *(undefined4 **)(param_2 + 8);
    puVar6 = (undefined4 *)thunk_MwhHq(0xc);
    puVar6[2] = 0;
    puVar17 = puVar6 + 1;
    *puVar17 = 0;
    *puVar6 = puVar17;
    piVar21 = puVar22 + 1;
    piVar7 = (int *)*puVar22;
    if (piVar7 != piVar21) {
      do {
        FUN_71539ad8(auStack_2c,puVar6,puVar17,piVar7 + 4,piVar7 + 4);
        piVar4 = (int *)piVar7[1];
        piVar20 = piVar7;
        if ((int *)piVar7[1] == (int *)0x0) {
          do {
            piVar7 = (int *)piVar20[2];
            bVar29 = (int *)*piVar7 != piVar20;
            piVar20 = piVar7;
          } while (bVar29);
        }
        else {
          do {
            piVar7 = piVar4;
            piVar4 = (int *)*piVar7;
          } while ((int *)*piVar7 != (int *)0x0);
        }
      } while (piVar7 != piVar21);
    }
    *puVar9 = (uint)puVar6;
    return param_1;
  case 2:
    puVar18 = *(uint **)(param_2 + 8);
    piVar7 = (int *)thunk_MwhHq(0xc);
    *piVar7 = 0;
    piVar7[1] = 0;
    piVar7[2] = 0;
    uVar24 = *puVar18;
    uVar10 = puVar18[1];
    if (uVar10 != uVar24) {
      uVar19 = uVar10 - uVar24;
      uVar28 = 0xfffffffe < uVar19;
      bVar29 = SCARRY4(uVar19,1);
      cVar25 = (int)(uVar19 + 1) < 0;
      uVar26 = uVar19 == 0xffffffff;
      if ((int)uVar19 < 0) {
        uVar30 = FUN_7152fef0(piVar7);
        uVar12 = (undefined4)((ulonglong)uVar30 >> 0x20);
        if ((bool)cVar25 == bVar29) {
          if ((bool)uVar28 && !(bool)uVar26) {
            uVar12 = *(undefined4 *)((int)uVar30 + (extraout_r12 >> 0x1d | extraout_r12 << 3));
          }
          if (!bVar29) {
            FUN_70be08d4((int)uVar30,uVar12);
          }
          uVar10 = func_0x6fba3a80();
          if ((bool)uVar28 && !(bool)uVar26) {
            uVar10 = uVar10 & uVar24 << 5;
          }
          if ((bool)uVar26) {
            uVar19 = uVar10 & extraout_r12_00 & extraout_r12_00 << (uVar10 & extraout_r12_00 & 0xff)
            ;
            uVar10 = uVar19 & 0x1f;
            uVar19 = uVar19 & (uVar24 >> uVar10 | uVar24 << 0x20 - uVar10);
            uVar10 = uVar19 & extraout_r12_00 << (uVar19 & 0xff) & (uint)piVar7 >> 1;
            puVar9 = (uint *)(uVar10 & extraout_r12_00 << (uVar10 & 0xff));
            uVar10 = *puVar9;
            uVar24 = puVar9[1];
            piVar21 = (int *)(uVar10 & extraout_r12_00 << (uVar10 & 0xff));
            *piVar21 = (int)piVar21 - (int)piVar7;
            piVar21[1] = uVar24;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((bool)uVar26) {
          puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06a4);
          *(undefined1 *)((int)puVar6 + 0x1b) = 1;
          uVar3 = DAT_7007fa3c;
          uVar2 = DAT_7007fa38;
          uVar13 = DAT_7007fa34;
          uVar11 = DAT_7007fa30;
          uVar12 = DAT_7007fa2c;
          *puVar6 = DAT_7007fa28;
          puVar6[1] = uVar12;
          puVar6[2] = uVar11;
          puVar6[3] = uVar13;
          puVar6[4] = uVar2;
          puVar6[5] = uVar3;
          uVar26 = DAT_7007fa42;
          *(undefined2 *)(puVar6 + 6) = DAT_7007fa40;
          *(undefined1 *)((int)puVar6 + 0x1a) = uVar26;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e590,puVar6,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06b4);
          *puVar5 = 1;
        }
        iVar23 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06a4);
        if (*(char *)(iVar23 + 0x1b) != '\0') {
          uVar10 = 0;
          uVar24 = 0;
          do {
            iVar16 = (uVar10 & 7) * 8;
            uVar19 = iVar16 - 0x20;
            bVar15 = (byte)(0x9f77fb4b >> iVar16) |
                     (byte)(-0x64c438cb << ((uVar10 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar19) {
              bVar15 = (byte)(0x9b3bc735 >> (uVar19 & 0xff));
            }
            *(byte *)(iVar23 + uVar10) = *(byte *)(iVar23 + uVar10) ^ bVar15;
            bVar27 = 0xfffffffe < uVar10;
            bVar29 = uVar24 == 0;
            bVar1 = (0x19 < uVar10) <= uVar24;
            uVar10 = uVar10 + 1;
            uVar24 = uVar24 + bVar27;
          } while (bVar29 && bVar1);
          *(undefined1 *)(iVar23 + 0x1b) = 0;
        }
        DAT_7101a790 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar23,1);
        thunk_SixizuLbAnqfgRApsCY(&DAT_7101a794);
                    /* WARNING: Could not recover jumptable at 0x71469b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar6 = (undefined4 *)(*DAT_7101a790)();
        return puVar6;
      }
      iVar23 = thunk_MwhHq(uVar19);
      *piVar7 = iVar23;
      piVar7[1] = iVar23;
      piVar7[2] = iVar23 + uVar19;
      do {
        iVar23 = FUN_71539408(iVar23,uVar24);
        uVar24 = uVar24 + 0x10;
        iVar23 = iVar23 + 0x10;
      } while (uVar24 != uVar10);
      piVar7[1] = iVar23;
    }
    *puVar9 = (uint)piVar7;
    return param_1;
  case 3:
    pbVar14 = *(byte **)(param_2 + 8);
    puVar6 = (undefined4 *)thunk_MwhHq(0xc);
    if ((*pbVar14 & 1) == 0) {
      uVar12 = *(undefined4 *)pbVar14;
      uVar11 = *(undefined4 *)(pbVar14 + 4);
      uVar13 = *(undefined4 *)(pbVar14 + 8);
      *puVar9 = (uint)puVar6;
      *puVar6 = uVar12;
      puVar6[1] = uVar11;
      puVar6[2] = uVar13;
    }
    else {
      FUN_712f6d58(puVar6,*(undefined4 *)(pbVar14 + 8),*(undefined4 *)(pbVar14 + 4));
      *puVar9 = (uint)puVar6;
    }
    return param_1;
  case 4:
    uVar10 = (uint)(byte)param_2[8];
    uVar12 = 0;
    break;
  case 5:
  case 6:
  case 7:
    uVar10 = *(uint *)(param_2 + 8);
    uVar12 = *(undefined4 *)(param_2 + 0xc);
    break;
  case 8:
    piVar21 = *(int **)(param_2 + 8);
    piVar7 = (int *)thunk_MwhHq(0x20);
    *piVar7 = 0;
    piVar7[1] = 0;
    piVar7[2] = 0;
    iVar23 = *piVar21;
    if (piVar21[1] != iVar23) {
      iVar16 = piVar21[1] - iVar23;
      if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_7153a130(piVar7);
      }
      iVar8 = thunk_MwhHq(iVar16);
      *piVar7 = iVar8;
      piVar7[2] = iVar8 + iVar16;
      imp___aeabi_memcpy(iVar8,iVar23,iVar16);
      piVar7[1] = iVar8 + iVar16;
    }
    *(char *)(piVar7 + 6) = (char)piVar21[6];
    iVar23 = piVar21[5];
    piVar7[4] = piVar21[4];
    piVar7[5] = iVar23;
    *puVar9 = (uint)piVar7;
  default:
    return param_1;
  }
  *puVar9 = uVar10;
  param_1[3] = uVar12;
  return param_1;
}


// =========================================================================
// Function: FUN_715397f8
// Entry: 0x715397f8 | Size: 488 bytes
// =========================================================================

void FUN_715397f8(undefined4 *param_1,byte *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((byte *)*param_3 != param_2) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  param_1[3] = 0x80000000;
  uVar1 = (uint)*param_2;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar1 == 2) {
    iVar5 = *(int *)(param_2 + 8);
    puVar9 = (undefined4 *)param_3[2];
    puVar8 = *(undefined4 **)(iVar5 + 4);
    param_1[2] = puVar8;
    puVar11 = puVar9;
    if (puVar9 + 4 != puVar8) {
      puVar10 = puVar9;
      do {
        uVar2 = puVar10[6];
        uVar7 = puVar10[7];
        puVar11 = puVar10 + 4;
        uVar6 = *puVar11;
        puVar10[6] = 0;
        puVar10[7] = 0;
        *(undefined1 *)puVar11 = 0;
        uStack_38 = (undefined1)uVar6;
        *(undefined1 *)puVar10 = uStack_38;
        uStack_30 = puVar10[2];
        uStack_2c = puVar10[3];
        puVar10[2] = uVar2;
        puVar10[3] = uVar7;
        FUN_7152f750(&uStack_30);
        puVar3 = puVar10 + 8;
        puVar10 = puVar11;
      } while (puVar3 != puVar8);
      puVar8 = *(undefined4 **)(iVar5 + 4);
      if (puVar11 == puVar8) goto LAB_71539920;
    }
    puVar8 = puVar8 + -2;
    do {
      puVar10 = puVar8 + -2;
      FUN_7152f750(puVar8,*(undefined1 *)puVar10);
      puVar8 = puVar8 + -4;
    } while (puVar10 != puVar11);
LAB_71539920:
    param_1[2] = puVar9;
    *(undefined4 **)(iVar5 + 4) = puVar11;
    return;
  }
  if (uVar1 == 1) {
    uVar2 = FUN_7153a198(*(undefined4 *)(param_2 + 8),param_3[1]);
    param_1[1] = uVar2;
    return;
  }
  param_1[3] = 1;
  if (5 < uVar1 - 3) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  if (param_3[3] != 0) {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  if (uVar1 == 8) {
    pbVar4 = *(byte **)(param_2 + 8);
    iVar5 = *(int *)pbVar4;
    if (iVar5 != 0) {
      *(int *)(pbVar4 + 4) = iVar5;
LAB_715399ac:
      thunk_qNQrlu(iVar5);
      pbVar4 = *(byte **)(param_2 + 8);
    }
  }
  else {
    if (uVar1 != 3) goto LAB_715399c4;
    pbVar4 = *(byte **)(param_2 + 8);
    if ((*pbVar4 & 1) != 0) {
      iVar5 = *(int *)(pbVar4 + 8);
      goto LAB_715399ac;
    }
  }
  thunk_qNQrlu(pbVar4);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
LAB_715399c4:
  *param_2 = 0;
  return;
}


// =========================================================================
// Function: FUN_71539ad8
// Entry: 0x71539ad8 | Size: 220 bytes
// =========================================================================

void FUN_71539ad8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 byte *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)FUN_71539c58(param_2,param_3,&uStack_24,auStack_28,param_4);
  puVar6 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)thunk_MwhHq(0x30);
    if ((*param_5 & 1) == 0) {
      uVar4 = *(undefined4 *)(param_5 + 4);
      uVar5 = *(undefined4 *)(param_5 + 8);
      puVar6[4] = *(undefined4 *)param_5;
      puVar6[5] = uVar4;
      puVar6[6] = uVar5;
    }
    else {
      FUN_712f6d58(puVar6 + 4,*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 4));
    }
    FUN_71539408(puVar6 + 8,param_5 + 0x10);
    puVar6[1] = 0;
    puVar6[2] = uStack_24;
    *puVar6 = 0;
    *puVar2 = puVar6;
    puVar3 = puVar6;
    if (*(int *)*param_2 != 0) {
      *param_2 = *(int *)*param_2;
      puVar3 = (undefined4 *)*puVar2;
    }
    FUN_712f807c(param_2[1],puVar3);
    param_2[2] = param_2[2] + 1;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = puVar6;
  return;
}


// =========================================================================
// Function: FUN_71539c58
// Entry: 0x71539c58 | Size: 740 bytes
// =========================================================================

int * FUN_71539c58(int *param_1,int *param_2,undefined4 *param_3,int *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  int *piVar12;
  bool bVar13;
  
  if (param_1 + 1 != param_2) {
    bVar1 = *(byte *)(param_2 + 4);
    uVar7 = param_2[5];
    uVar9 = *(uint *)(param_5 + 4);
    if ((bVar1 & 1) == 0) {
      uVar7 = (uint)(bVar1 >> 1);
    }
    bVar2 = *param_5;
    pbVar11 = *(byte **)(param_5 + 8);
    iVar6 = param_2[6];
    if ((bVar2 & 1) == 0) {
      uVar9 = (uint)(bVar2 >> 1);
    }
    uVar5 = uVar9;
    if (uVar7 < uVar9) {
      uVar5 = uVar7;
    }
    if ((bVar2 & 1) == 0) {
      pbVar11 = param_5 + 1;
    }
    if ((bVar1 & 1) == 0) {
      iVar6 = (int)param_2 + 0x11;
    }
    iVar3 = imp_memcmp(pbVar11,iVar6,uVar5);
    bVar13 = -1 < iVar3;
    if (iVar3 == 0) {
      bVar13 = uVar7 <= uVar9;
    }
    if (bVar13) {
      iVar6 = imp_memcmp(iVar6,pbVar11,uVar5);
      bVar13 = -1 < iVar6;
      if (iVar6 == 0) {
        bVar13 = uVar9 <= uVar7;
      }
      if (bVar13) {
        *param_3 = param_2;
        *param_4 = (int)param_2;
        return param_4;
      }
      piVar8 = (int *)param_2[1];
      piVar4 = piVar8;
      piVar10 = param_2;
      if (piVar8 == (int *)0x0) {
        do {
          piVar12 = (int *)piVar10[2];
          bVar13 = (int *)*piVar12 != piVar10;
          piVar10 = piVar12;
        } while (bVar13);
      }
      else {
        do {
          piVar12 = piVar4;
          piVar4 = (int *)*piVar12;
        } while ((int *)*piVar12 != (int *)0x0);
      }
      if (piVar12 == param_1 + 1) {
LAB_71539f08:
        if (piVar8 != (int *)0x0) {
          *param_3 = piVar12;
          return piVar12;
        }
        *param_3 = param_2;
        return param_2 + 1;
      }
      uVar7 = piVar12[5];
      iVar6 = piVar12[6];
      if ((*(byte *)(piVar12 + 4) & 1) == 0) {
        iVar6 = (int)piVar12 + 0x11;
        uVar7 = (uint)(*(byte *)(piVar12 + 4) >> 1);
      }
      uVar5 = uVar9;
      if (uVar7 < uVar9) {
        uVar5 = uVar7;
      }
      iVar6 = imp_memcmp(pbVar11,iVar6,uVar5);
      bVar13 = uVar7 <= uVar9;
      if (iVar6 != 0) {
        bVar13 = -1 < iVar6;
      }
      if (!bVar13) goto LAB_71539f08;
      goto LAB_71539ddc;
    }
  }
  piVar10 = (int *)*param_2;
  piVar4 = param_2;
  if ((int *)*param_1 != param_2) {
    piVar8 = piVar10;
    piVar12 = param_2;
    if (piVar10 == (int *)0x0) {
      do {
        piVar4 = (int *)piVar12[2];
        bVar13 = (int *)*piVar4 == piVar12;
        piVar12 = piVar4;
      } while (bVar13);
    }
    else {
      do {
        piVar4 = piVar8;
        piVar8 = (int *)piVar4[1];
      } while ((int *)piVar4[1] != (int *)0x0);
    }
    bVar1 = *param_5;
    uVar7 = *(uint *)(param_5 + 4);
    uVar9 = piVar4[5];
    if ((bVar1 & 1) == 0) {
      uVar7 = (uint)(bVar1 >> 1);
    }
    bVar2 = *(byte *)(piVar4 + 4);
    iVar6 = piVar4[6];
    if ((bVar2 & 1) == 0) {
      uVar9 = (uint)(bVar2 >> 1);
    }
    uVar5 = uVar9;
    if (uVar7 < uVar9) {
      uVar5 = uVar7;
    }
    if ((bVar2 & 1) == 0) {
      iVar6 = (int)piVar4 + 0x11;
    }
    pbVar11 = *(byte **)(param_5 + 8);
    if ((bVar1 & 1) == 0) {
      pbVar11 = param_5 + 1;
    }
    iVar6 = imp_memcmp(iVar6,pbVar11,uVar5);
    bVar13 = -1 < iVar6;
    if (iVar6 == 0) {
      bVar13 = uVar7 <= uVar9;
    }
    if (bVar13) {
LAB_71539ddc:
      piVar4 = (int *)FUN_71539fe0(param_1,param_3,param_5);
      return piVar4;
    }
  }
  if (piVar10 == (int *)0x0) {
    *param_3 = param_2;
  }
  else {
    param_2 = piVar4 + 1;
    *param_3 = piVar4;
  }
  return param_2;
}


// =========================================================================
// Function: FUN_71539fe0
// Entry: 0x71539fe0 | Size: 256 bytes
// =========================================================================

int * FUN_71539fe0(int param_1,undefined4 *param_2,byte *param_3)

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
        if (bVar1) goto LAB_7153a0cc;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_7153a0cc;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_7153a0cc:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_7153a130
// Entry: 0x7153a130 | Size: 20 bytes
// =========================================================================

void FUN_7153a130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7153a198
// Entry: 0x7153a198 | Size: 152 bytes
// =========================================================================

int * FUN_7153a198(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  piVar2 = param_2;
  piVar1 = (int *)param_2[1];
  if ((int *)param_2[1] == (int *)0x0) {
    do {
      piVar3 = (int *)piVar2[2];
      bVar4 = (int *)*piVar3 != piVar2;
      piVar2 = piVar3;
    } while (bVar4);
  }
  else {
    do {
      piVar3 = piVar1;
      piVar1 = (int *)*piVar3;
    } while ((int *)*piVar3 != (int *)0x0);
  }
  param_1[2] = param_1[2] + -1;
  if ((int *)*param_1 == param_2) {
    *param_1 = (int)piVar3;
  }
  FUN_71368054(param_1[1],param_2);
  FUN_7152f750(param_2 + 10,(char)param_2[8]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    thunk_qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return piVar3;
}


// =========================================================================
// Function: FUN_7153a2b8
// Entry: 0x7153a2b8 | Size: 212 bytes
// =========================================================================

void FUN_7153a2b8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
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
  
  puVar2 = (undefined4 *)FUN_71539fe0(param_2,&uStack_24);
  puVar7 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_MwhHq(0x30);
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
    puVar7[10] = 0;
    *(undefined1 *)(puVar7 + 8) = 0;
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
// Function: FUN_7153a414
// Entry: 0x7153a414 | Size: 236 bytes
// =========================================================================

void FUN_7153a414(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte abStack_24 [4];
  uint uStack_20;
  uint uStack_1c;
  
  thunk_JTLCYfEcbCeQVXSyFtQFASTx(abStack_24,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = uStack_20;
  if ((abStack_24[0] & 1) == 0) {
    uVar3 = (uint)(abStack_24[0] >> 1);
  }
  if ((*param_2 & 1) == 0) {
    uVar2 = (uint)(*param_2 >> 1);
  }
  thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
            (param_1,uVar2 + uVar3 + 0x13);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,s__json_exception__700710c0);
  pbVar1 = *(byte **)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar3 = (uint)(*param_2 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar1,uVar3);
  thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU(param_1,0x2e)
  ;
  uVar3 = uStack_1c;
  if ((abStack_24[0] & 1) == 0) {
    uStack_20 = (uint)(abStack_24[0] >> 1);
    uVar3 = (uint)abStack_24 | 1;
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,uVar3,uStack_20);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,&DAT_7006bf9a);
  if ((abStack_24[0] & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  return;
}


// =========================================================================
// Function: FUN_7153a7f4
// Entry: 0x7153a7f4 | Size: 604 bytes
// =========================================================================

void FUN_7153a7f4(undefined1 *param_1,int *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_34 = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_38 = 7;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7153a89c;
LAB_7153a9f8:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7153a89c:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153a9f8;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7153a9f8;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7153aaf4
// Entry: 0x7153aaf4 | Size: 604 bytes
// =========================================================================

void FUN_7153aaf4(undefined1 *param_1,int *param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_30 = (uint)*param_3;
  uStack_38 = 4;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7153ab9c;
LAB_7153acf8:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7153ab9c:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153acf8;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7153acf8;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7153adf4
// Entry: 0x7153adf4 | Size: 584 bytes
// =========================================================================

void FUN_7153adf4(undefined1 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_30 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7153ae88;
LAB_7153afe4:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7153ae88:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153afe4;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7153afe4;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7153b0e0
// Entry: 0x7153b0e0 | Size: 600 bytes
// =========================================================================

void FUN_7153b0e0(undefined1 *param_1,int *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_34 = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_38 = 5;
  if (param_4 == 0) {
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    iStack_24 = param_2[2] - param_2[1] >> 2;
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7153b184;
LAB_7153b2e0:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7153b184:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153b2e0;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7153b2e0;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7153b3dc
// Entry: 0x7153b3dc | Size: 664 bytes
// =========================================================================

void FUN_7153b3dc(undefined1 *param_1,int *param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_2c = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_34 = 0;
  uStack_38 = 3;
  puVar5 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_3 & 1) == 0) {
    uVar11 = *(undefined4 *)(param_3 + 4);
    uVar13 = *(undefined4 *)(param_3 + 8);
    *puVar5 = *(undefined4 *)param_3;
    puVar5[1] = uVar11;
    puVar5[2] = uVar13;
  }
  else {
    FUN_712f6d58(puVar5,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4));
  }
  puStack_30 = puVar5;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7153b4d4;
LAB_7153b61c:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7153b4d4:
    uVar4 = uStack_2c;
    puVar5 = puStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      puStack_30 = (undefined4 *)0x0;
      uStack_44 = uStack_34;
      puVar14 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar14;
      *puVar14 = uVar2;
      uStack_40 = *(undefined4 *)(puVar14 + 8);
      *(undefined4 **)(puVar14 + 8) = puVar5;
      uStack_3c = *(undefined4 *)(puVar14 + 0xc);
      *(uint *)(puVar14 + 0xc) = uVar4;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153b61c;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = (uint)puStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          puStack_30 = (undefined4 *)0x0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar12 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar12 >> 5) * 4);
        param_2[8] = uVar12;
        if ((uVar10 >> (uVar12 & 0x1f) & 1) == 0) goto LAB_7153b61c;
        puStack_30 = (undefined4 *)0x0;
        puVar14 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar14 = uVar2;
        uStack_50 = *(undefined4 *)(puVar14 + 8);
        *(undefined4 **)(puVar14 + 8) = puVar5;
        uStack_4c = *(undefined4 *)(puVar14 + 0xc);
        *(uint *)(puVar14 + 0xc) = uVar4;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&puStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7153b750
// Entry: 0x7153b750 | Size: 604 bytes
// =========================================================================

void FUN_7153b750(undefined1 *param_1,int *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  uint3 uStack_47;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  
  if ((*(uint *)(param_2[4] + (param_2[5] - 1U >> 5) * 4) >> (param_2[5] - 1U & 0x1f) & 1) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    return;
  }
  uStack_34 = 0;
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_38 = 6;
  if (param_4 == 0) {
    iStack_24 = param_2[2] - param_2[1] >> 2;
    uStack_25 = 5;
    piVar6 = (int *)param_2[0x10];
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,&iStack_24,&uStack_25,&uStack_38);
    if (iVar7 != 0) goto LAB_7153b7f8;
LAB_7153b954:
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
  }
  else {
LAB_7153b7f8:
    uVar5 = uStack_2c;
    uVar4 = uStack_30;
    uVar3 = uStack_38._1_3_;
    uVar2 = (undefined1)uStack_38;
    if (param_2[1] == param_2[2]) {
      uStack_30 = 0;
      uStack_44 = uStack_34;
      puVar12 = (undefined1 *)*param_2;
      uStack_2c = 0;
      uStack_38 = (uint)uStack_38._1_3_ << 8;
      uVar1 = *puVar12;
      *puVar12 = uVar2;
      uStack_40 = *(undefined4 *)(puVar12 + 8);
      *(uint *)(puVar12 + 8) = uVar4;
      uStack_3c = *(undefined4 *)(puVar12 + 0xc);
      *(uint *)(puVar12 + 0xc) = uVar5;
      _uStack_48 = CONCAT31(uVar3,uVar1);
      FUN_7152f750(&uStack_40);
      *param_1 = 1;
      iVar7 = *param_2;
    }
    else {
      pcVar8 = *(char **)(param_2[2] + -4);
      if (pcVar8 == (char *)0x0) goto LAB_7153b954;
      if (*pcVar8 == '\x02') {
        iVar7 = *(int *)(pcVar8 + 8);
        puVar9 = *(uint **)(iVar7 + 4);
        if (puVar9 < *(uint **)(iVar7 + 8)) {
          *puVar9 = uStack_38;
          puVar9[1] = uStack_34;
          puVar9[2] = uStack_30;
          puVar9[3] = uStack_2c;
          puVar9 = puVar9 + 4;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = uStack_38 & 0xffffff00;
        }
        else {
          puVar9 = (uint *)FUN_715391cc(iVar7,&uStack_38);
        }
        *(uint **)(iVar7 + 4) = puVar9;
        *param_1 = 1;
        iVar7 = *(int *)(*(int *)(*(int *)(param_2[2] + -4) + 8) + 4) + -0x10;
      }
      else {
        uVar11 = param_2[8] - 1;
        uVar10 = *(uint *)(param_2[7] + (uVar11 >> 5) * 4);
        param_2[8] = uVar11;
        if ((uVar10 >> (uVar11 & 0x1f) & 1) == 0) goto LAB_7153b954;
        uStack_30 = 0;
        puVar12 = (undefined1 *)param_2[10];
        uStack_2c = 0;
        uStack_38 = (uint)uStack_38._1_3_ << 8;
        *puVar12 = uVar2;
        uStack_50 = *(undefined4 *)(puVar12 + 8);
        *(uint *)(puVar12 + 8) = uVar4;
        uStack_4c = *(undefined4 *)(puVar12 + 0xc);
        *(uint *)(puVar12 + 0xc) = uVar5;
        FUN_7152f750(&uStack_50);
        iVar7 = param_2[10];
        *param_1 = 1;
      }
    }
    *(int *)(param_1 + 4) = iVar7;
  }
  FUN_7152f750(&uStack_30,uStack_38 & 0xff);
  return;
}


// =========================================================================
// Function: FUN_7153ba50
// Entry: 0x7153ba50 | Size: 60 bytes
// =========================================================================

void FUN_7153ba50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  imp___vsnprintf_chk(param_1,param_3,0,param_2,s_<U___4X>_7006767c,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7153bae0
// Entry: 0x7153bae0 | Size: 320 bytes
// =========================================================================

void FUN_7153bae0(undefined4 *param_1,byte *param_2,undefined4 param_3,byte *param_4,
                 undefined4 param_5,byte *param_6,byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar1 = *param_2;
  uVar7 = *(uint *)(param_2 + 4);
  iVar2 = imp_strlen(param_3);
  uVar8 = *(uint *)(param_4 + 4);
  if ((*param_4 & 1) == 0) {
    uVar8 = (uint)(*param_4 >> 1);
  }
  if ((bVar1 & 1) == 0) {
    uVar7 = (uint)(bVar1 >> 1);
  }
  iVar3 = imp_strlen(param_5);
  uVar5 = *(uint *)(param_6 + 4);
  if ((*param_6 & 1) == 0) {
    uVar5 = (uint)(*param_6 >> 1);
  }
  uVar6 = *(uint *)(param_7 + 4);
  if ((*param_7 & 1) == 0) {
    uVar6 = (uint)(*param_7 >> 1);
  }
  thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
            (param_1,uVar7 + iVar2 + iVar3 + uVar8 + uVar5 + uVar6);
  pbVar4 = *(byte **)(param_2 + 8);
  uVar8 = *(uint *)(param_2 + 4);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar8 = (uint)(*param_2 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar4,uVar8);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,param_3);
  pbVar4 = *(byte **)(param_4 + 8);
  uVar8 = *(uint *)(param_4 + 4);
  if ((*param_4 & 1) == 0) {
    pbVar4 = param_4 + 1;
    uVar8 = (uint)(*param_4 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar4,uVar8);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,param_5);
  pbVar4 = *(byte **)(param_6 + 8);
  uVar8 = *(uint *)(param_6 + 4);
  if ((*param_6 & 1) == 0) {
    pbVar4 = param_6 + 1;
    uVar8 = (uint)(*param_6 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar4,uVar8);
  pbVar4 = *(byte **)(param_7 + 8);
  uVar8 = *(uint *)(param_7 + 4);
  if ((*param_7 & 1) == 0) {
    pbVar4 = param_7 + 1;
    uVar8 = (uint)(*param_7 >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,pbVar4,uVar8);
  return;
}


// =========================================================================
// Function: FUN_7153bd34
// Entry: 0x7153bd34 | Size: 264 bytes
// =========================================================================

void FUN_7153bd34(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  byte abStack_24 [4];
  uint uStack_20;
  uint uStack_1c;
  
  thunk_CzawVvgGUMDiCaJAyry_udhv(abStack_24,*(int *)(param_2 + 8) + 1);
  thunk_CzawVvgGUMDiCaJAyry_udhv(abStack_30,*(undefined4 *)(param_2 + 4));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = uStack_2c;
  if ((abStack_30[0] & 1) == 0) {
    uVar1 = (uint)(abStack_30[0] >> 1);
  }
  uVar2 = uStack_20;
  if ((abStack_24[0] & 1) == 0) {
    uVar2 = (uint)(abStack_24[0] >> 1);
  }
  thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
            (param_1,uVar2 + uVar1 + 0x12);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,s_at_line_70068680);
  uVar1 = uStack_1c;
  if ((abStack_24[0] & 1) == 0) {
    uStack_20 = (uint)(abStack_24[0] >> 1);
    uVar1 = (uint)abStack_24 | 1;
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,uVar1,uStack_20);
  thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
            (param_1,s___column_70063de4);
  uVar1 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uStack_2c = (uint)(abStack_30[0] >> 1);
    uVar1 = (uint)abStack_30 | 1;
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,uVar1,uStack_2c);
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if ((abStack_24[0] & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  return;
}


// =========================================================================
// Function: FUN_7153c050
// Entry: 0x7153c050 | Size: 288 bytes
// =========================================================================

undefined4 FUN_7153c050(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 uStack_25;
  
  uStack_25 = 1;
  uVar3 = FUN_7153c490(param_1,&uStack_25);
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 < *(undefined4 **)(param_1 + 0xc)) {
    puVar7 = puVar9 + 1;
    *puVar9 = uVar3;
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    iVar1 = (int)puVar9 - iVar8 >> 2;
    uVar6 = iVar1 + 1;
    if (0x3fffffff < uVar6) {
      FUN_715393a0((int *)(param_1 + 4));
LAB_7153c16c:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar5 = (int)*(undefined4 **)(param_1 + 0xc) - iVar8;
    uVar2 = (int)uVar5 >> 1;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffb < uVar5) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar6) goto LAB_7153c16c;
      iVar4 = thunk_MwhHq(uVar6 << 2);
    }
    puVar7 = (undefined4 *)(iVar4 + iVar1 * 4);
    *puVar7 = uVar3;
    imp___aeabi_memcpy4(iVar4,iVar8,(int)puVar9 - iVar8);
    puVar7 = puVar7 + 1;
    *(int *)(param_1 + 4) = iVar4;
    *(undefined4 **)(param_1 + 8) = puVar7;
    *(uint *)(param_1 + 0xc) = iVar4 + uVar6 * 4;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar7;
  if (param_2 != 0xffffffff) {
    uVar6 = 1;
    if (*(byte *)puVar7[-1] < 3) {
      uVar6 = *(uint *)(&DAT_70081f64 + (uint)*(byte *)puVar7[-1] * 4);
    }
    if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_7153c26c
// Entry: 0x7153c26c | Size: 296 bytes
// =========================================================================

undefined4 FUN_7153c26c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 uStack_25;
  
  uStack_25 = 2;
  uVar3 = FUN_7153c490(param_1,&uStack_25);
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (puVar9 < *(undefined4 **)(param_1 + 0xc)) {
    puVar7 = puVar9 + 1;
    *puVar9 = uVar3;
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    iVar1 = (int)puVar9 - iVar8 >> 2;
    uVar6 = iVar1 + 1;
    if (0x3fffffff < uVar6) {
      FUN_715393a0((int *)(param_1 + 4));
LAB_7153c390:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar5 = (int)*(undefined4 **)(param_1 + 0xc) - iVar8;
    uVar2 = (int)uVar5 >> 1;
    if (uVar6 < uVar2) {
      uVar6 = uVar2;
    }
    if (0x7ffffffb < uVar5) {
      uVar6 = 0x3fffffff;
    }
    if (uVar6 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar6) goto LAB_7153c390;
      iVar4 = thunk_MwhHq(uVar6 << 2);
    }
    puVar7 = (undefined4 *)(iVar4 + iVar1 * 4);
    *puVar7 = uVar3;
    imp___aeabi_memcpy4(iVar4,iVar8,(int)puVar9 - iVar8);
    puVar7 = puVar7 + 1;
    *(int *)(param_1 + 4) = iVar4;
    *(undefined4 **)(param_1 + 8) = puVar7;
    *(uint *)(param_1 + 0xc) = iVar4 + uVar6 * 4;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar7;
  if (param_2 != 0xffffffff) {
    uVar6 = 1;
    if (*(byte *)puVar7[-1] < 3) {
      uVar6 = *(uint *)(&DAT_70081f64 + (uint)*(byte *)puVar7[-1] * 4);
    }
    if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_7153c490
// Entry: 0x7153c490 | Size: 308 bytes
// =========================================================================

int FUN_7153c490(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    uStack_28 = *param_2;
    FUN_71530e60(&uStack_20);
    puVar3 = (undefined1 *)*param_1;
    uVar1 = *puVar3;
    *puVar3 = uStack_28;
    uVar4 = *(undefined4 *)(puVar3 + 8);
    *(undefined4 *)(puVar3 + 8) = uStack_20;
    uVar7 = *(undefined4 *)(puVar3 + 0xc);
    *(undefined4 *)(puVar3 + 0xc) = uStack_1c;
    uStack_28 = uVar1;
    uStack_20 = uVar4;
    uStack_1c = uVar7;
    FUN_7152f750();
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar5 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined1 **)(iVar5 + 4);
    if (puVar3 < *(undefined1 **)(iVar5 + 8)) {
      puVar6 = puVar3 + 0x10;
      *puVar3 = *param_2;
      FUN_71530e60(puVar3 + 8);
    }
    else {
      puVar6 = (undefined1 *)FUN_7153c684(iVar5);
    }
    *(undefined1 **)(iVar5 + 4) = puVar6;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  uVar1 = *param_2;
  FUN_71530e60(&uStack_30);
  puVar3 = (undefined1 *)param_1[4];
  *puVar3 = uVar1;
  uVar4 = *(undefined4 *)(puVar3 + 8);
  *(undefined4 *)(puVar3 + 8) = uStack_30;
  uVar7 = *(undefined4 *)(puVar3 + 0xc);
  *(undefined4 *)(puVar3 + 0xc) = uStack_2c;
  uStack_30 = uVar4;
  uStack_2c = uVar7;
  FUN_7152f750();
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153c684
// Entry: 0x7153c684 | Size: 300 bytes
// =========================================================================

undefined1 * FUN_7153c684(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  
  iVar5 = param_1[1] - *param_1 >> 4;
  uVar9 = iVar5 + 1;
  if (0xfffffff < uVar9) {
    FUN_7152fef0(param_1);
LAB_7153c7ac:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  uVar2 = param_1[2] - *param_1;
  uVar1 = (int)uVar2 >> 3;
  if (uVar9 < uVar1) {
    uVar9 = uVar1;
  }
  if (0x7fffffef < uVar2) {
    uVar9 = 0xfffffff;
  }
  if (uVar9 == 0) {
    iVar3 = 0;
  }
  else {
    if (0xfffffff < uVar9) goto LAB_7153c7ac;
    iVar3 = thunk_MwhHq(uVar9 << 4);
  }
  puVar10 = (undefined1 *)(iVar3 + iVar5 * 0x10);
  *puVar10 = *param_2;
  FUN_71530e60(puVar10 + 8);
  puVar4 = (undefined4 *)*param_1;
  puVar13 = (undefined4 *)param_1[1];
  iVar5 = (int)puVar4 - (int)puVar13;
  puVar6 = puVar4;
  puVar7 = (undefined4 *)(puVar10 + iVar5);
  if (iVar5 != 0) {
    do {
      uVar8 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar8;
      puVar7[2] = uVar11;
      puVar7[3] = uVar12;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)puVar6 = 0;
      puVar6 = puVar6 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar6 != puVar13);
    do {
      puVar6 = puVar4 + 4;
      FUN_7152f750(puVar4 + 2,*(undefined1 *)puVar4);
      puVar4 = puVar6;
    } while (puVar6 != puVar13);
    puVar13 = (undefined4 *)*param_1;
  }
  *param_1 = (int)(puVar10 + iVar5);
  param_1[1] = (int)(puVar10 + 0x10);
  param_1[2] = iVar3 + uVar9 * 0x10;
  if (puVar13 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar13);
  }
  return puVar10 + 0x10;
}


// =========================================================================
// Function: FUN_7153c870
// Entry: 0x7153c870 | Size: 308 bytes
// =========================================================================

int FUN_7153c870(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar4 = (byte *)*param_1;
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar4 + 8);
    uStack_1c = *(undefined4 *)(pbVar4 + 0xc);
    bVar1 = *pbVar4;
    *pbVar4 = 7;
    *(undefined4 *)(pbVar4 + 8) = uVar7;
    *(undefined4 *)(pbVar4 + 0xc) = uVar8;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar6 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined4 **)(iVar6 + 4);
    if (puVar3 < *(undefined4 **)(iVar6 + 8)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[2] = *param_2;
      puVar3[3] = param_2[1];
      *(undefined1 *)puVar3 = 7;
      puVar3 = puVar3 + 4;
    }
    else {
      puVar3 = (undefined4 *)FUN_7153ca10(iVar6);
    }
    *(undefined4 **)(iVar6 + 4) = puVar3;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar5 = (undefined1 *)param_1[4];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uStack_30 = *(undefined4 *)(puVar5 + 8);
  uStack_2c = *(undefined4 *)(puVar5 + 0xc);
  *puVar5 = 7;
  *(undefined4 *)(puVar5 + 8) = uVar7;
  *(undefined4 *)(puVar5 + 0xc) = uVar8;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153ca10
// Entry: 0x7153ca10 | Size: 324 bytes
// =========================================================================

undefined4 * FUN_7153ca10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar11 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  iVar1 = (int)puVar10 - (int)puVar11 >> 4;
  uVar8 = iVar1 + 1;
  if (0xfffffff < uVar8) {
    FUN_7152fef0(param_1);
LAB_7153cb50:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  puVar12 = (undefined4 *)0x0;
  uVar2 = param_1[2] - (int)puVar11 >> 3;
  if (uVar8 < uVar2) {
    uVar8 = uVar2;
  }
  if (0x7fffffef < (uint)(param_1[2] - (int)puVar11)) {
    uVar8 = 0xfffffff;
  }
  if (uVar8 != 0) {
    if (0xfffffff < uVar8) goto LAB_7153cb50;
    puVar12 = (undefined4 *)thunk_MwhHq(uVar8 << 4);
  }
  puVar4 = puVar12 + iVar1 * 4;
  *puVar4 = 0;
  uVar6 = param_2[1];
  puVar4[2] = *param_2;
  puVar4[1] = 0;
  *(undefined1 *)puVar4 = 7;
  puVar4[3] = uVar6;
  puVar3 = puVar11;
  puVar5 = puVar12;
  if (puVar11 != puVar10) {
    do {
      uVar9 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar5 = *puVar3;
      puVar5[1] = uVar9;
      puVar5[2] = uVar6;
      puVar5[3] = uVar7;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar10);
    do {
      puVar3 = puVar11 + 4;
      FUN_7152f750(puVar11 + 2,*(undefined1 *)puVar11);
      puVar11 = puVar3;
    } while (puVar3 != puVar10);
    puVar10 = (undefined4 *)*param_1;
  }
  *param_1 = puVar12;
  param_1[1] = puVar4 + 4;
  param_1[2] = puVar12 + uVar8 * 4;
  if (puVar10 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar10);
  }
  return puVar4 + 4;
}


// =========================================================================
// Function: FUN_7153cbf8
// Entry: 0x7153cbf8 | Size: 300 bytes
// =========================================================================

int FUN_7153cbf8(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar5 = (byte *)*param_1;
    bVar2 = *param_2;
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar5 + 8);
    uStack_1c = *(undefined4 *)(pbVar5 + 0xc);
    bVar1 = *pbVar5;
    *pbVar5 = 4;
    *(uint *)(pbVar5 + 8) = (uint)bVar2;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar3 = *(char **)(param_1[2] + -4);
  if (*pcVar3 == '\x02') {
    iVar7 = *(int *)(pcVar3 + 8);
    puVar4 = *(undefined4 **)(iVar7 + 4);
    if (puVar4 < *(undefined4 **)(iVar7 + 8)) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[2] = (uint)*param_2;
      puVar4[3] = 0;
      *(undefined1 *)puVar4 = 4;
      puVar4 = puVar4 + 4;
    }
    else {
      puVar4 = (undefined4 *)FUN_7153cd90(iVar7);
    }
    *(undefined4 **)(iVar7 + 4) = puVar4;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar6 = (undefined1 *)param_1[4];
  bVar2 = *param_2;
  uStack_30 = *(undefined4 *)(puVar6 + 8);
  uStack_2c = *(undefined4 *)(puVar6 + 0xc);
  *puVar6 = 4;
  *(uint *)(puVar6 + 8) = (uint)bVar2;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153cd90
// Entry: 0x7153cd90 | Size: 320 bytes
// =========================================================================

undefined4 * FUN_7153cd90(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar11 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  iVar1 = (int)puVar10 - (int)puVar11 >> 4;
  uVar8 = iVar1 + 1;
  if (0xfffffff < uVar8) {
    FUN_7152fef0(param_1);
LAB_7153cecc:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  puVar12 = (undefined4 *)0x0;
  uVar2 = param_1[2] - (int)puVar11 >> 3;
  if (uVar8 < uVar2) {
    uVar8 = uVar2;
  }
  if (0x7fffffef < (uint)(param_1[2] - (int)puVar11)) {
    uVar8 = 0xfffffff;
  }
  if (uVar8 != 0) {
    if (0xfffffff < uVar8) goto LAB_7153cecc;
    puVar12 = (undefined4 *)thunk_MwhHq(uVar8 << 4);
  }
  puVar4 = puVar12 + iVar1 * 4;
  *puVar4 = 0;
  puVar4[2] = (uint)*param_2;
  *(undefined1 *)puVar4 = 4;
  puVar4[1] = 0;
  puVar4[3] = 0;
  puVar3 = puVar11;
  puVar5 = puVar12;
  if (puVar11 != puVar10) {
    do {
      uVar9 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar5 = *puVar3;
      puVar5[1] = uVar9;
      puVar5[2] = uVar6;
      puVar5[3] = uVar7;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar10);
    do {
      puVar3 = puVar11 + 4;
      FUN_7152f750(puVar11 + 2,*(undefined1 *)puVar11);
      puVar11 = puVar3;
    } while (puVar3 != puVar10);
    puVar10 = (undefined4 *)*param_1;
  }
  *param_1 = puVar12;
  param_1[1] = puVar4 + 4;
  param_1[2] = puVar12 + uVar8 * 4;
  if (puVar10 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar10);
  }
  return puVar4 + 4;
}


// =========================================================================
// Function: FUN_7153cf74
// Entry: 0x7153cf74 | Size: 240 bytes
// =========================================================================

int FUN_7153cf74(int *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1[1] == param_1[2]) {
    puVar2 = (undefined1 *)*param_1;
    uStack_20 = *puVar2;
    *puVar2 = 0;
    uStack_18 = *(undefined4 *)(puVar2 + 8);
    *(undefined4 *)(puVar2 + 8) = 0;
    uVar3 = *(undefined4 *)(puVar2 + 0xc);
    *(undefined4 *)(puVar2 + 0xc) = uStack_14;
    uStack_14 = uVar3;
    FUN_7152f750(&uStack_18);
    return *param_1;
  }
  pcVar1 = *(char **)(param_1[2] + -4);
  if (*pcVar1 == '\x02') {
    FUN_7153d0d0(*(undefined4 *)(pcVar1 + 8));
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar2 = (undefined1 *)param_1[4];
  *puVar2 = 0;
  uStack_28 = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(puVar2 + 8) = 0;
  uVar3 = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(puVar2 + 0xc) = uStack_24;
  uStack_24 = uVar3;
  FUN_7152f750(&uStack_28);
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153d0d0
// Entry: 0x7153d0d0 | Size: 320 bytes
// =========================================================================

void FUN_7153d0d0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  puVar12 = (undefined4 *)param_1[1];
  if (puVar12 < (undefined4 *)param_1[2]) {
    puVar7 = puVar12 + 4;
    puVar12[2] = 0;
    *(undefined1 *)puVar12 = 0;
  }
  else {
    puVar11 = (undefined4 *)*param_1;
    iVar1 = (int)puVar12 - (int)puVar11 >> 4;
    uVar8 = iVar1 + 1;
    if (0xfffffff < uVar8) {
      FUN_7152fef0(param_1);
LAB_7153d20c:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar3 = (int)param_1[2] - (int)puVar11;
    puVar13 = (undefined4 *)0x0;
    uVar2 = (int)uVar3 >> 3;
    if (uVar8 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffef < uVar3) {
      uVar8 = 0xfffffff;
    }
    if (uVar8 != 0) {
      if (0xfffffff < uVar8) goto LAB_7153d20c;
      puVar13 = (undefined4 *)thunk_MwhHq(uVar8 << 4);
    }
    puVar7 = puVar13 + iVar1 * 4;
    *(undefined1 *)puVar7 = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 4;
    puVar4 = puVar11;
    puVar5 = puVar13;
    if (puVar11 != puVar12) {
      do {
        uVar9 = puVar4[1];
        uVar6 = puVar4[2];
        uVar10 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar9;
        puVar5[2] = uVar6;
        puVar5[3] = uVar10;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined1 *)puVar4 = 0;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar4 != puVar12);
      do {
        puVar4 = puVar11 + 4;
        FUN_7152f750(puVar11 + 2,*(undefined1 *)puVar11);
        puVar11 = puVar4;
      } while (puVar4 != puVar12);
      puVar12 = (undefined4 *)*param_1;
    }
    *param_1 = puVar13;
    param_1[1] = puVar7;
    param_1[2] = puVar13 + uVar8 * 4;
    if (puVar12 != (undefined4 *)0x0) {
      thunk_qNQrlu(puVar12);
    }
  }
  param_1[1] = puVar7;
  return;
}


// =========================================================================
// Function: FUN_7153d2b4
// Entry: 0x7153d2b4 | Size: 308 bytes
// =========================================================================

int FUN_7153d2b4(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar4 = (byte *)*param_1;
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar4 + 8);
    uStack_1c = *(undefined4 *)(pbVar4 + 0xc);
    bVar1 = *pbVar4;
    *pbVar4 = 5;
    *(undefined4 *)(pbVar4 + 8) = uVar7;
    *(undefined4 *)(pbVar4 + 0xc) = uVar8;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar6 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined4 **)(iVar6 + 4);
    if (puVar3 < *(undefined4 **)(iVar6 + 8)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[2] = *param_2;
      puVar3[3] = param_2[1];
      *(undefined1 *)puVar3 = 5;
      puVar3 = puVar3 + 4;
    }
    else {
      puVar3 = (undefined4 *)FUN_7153d454(iVar6);
    }
    *(undefined4 **)(iVar6 + 4) = puVar3;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar5 = (undefined1 *)param_1[4];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uStack_30 = *(undefined4 *)(puVar5 + 8);
  uStack_2c = *(undefined4 *)(puVar5 + 0xc);
  *puVar5 = 5;
  *(undefined4 *)(puVar5 + 8) = uVar7;
  *(undefined4 *)(puVar5 + 0xc) = uVar8;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153d454
// Entry: 0x7153d454 | Size: 324 bytes
// =========================================================================

undefined4 * FUN_7153d454(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar11 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  iVar1 = (int)puVar10 - (int)puVar11 >> 4;
  uVar8 = iVar1 + 1;
  if (0xfffffff < uVar8) {
    FUN_7152fef0(param_1);
LAB_7153d594:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  puVar12 = (undefined4 *)0x0;
  uVar2 = param_1[2] - (int)puVar11 >> 3;
  if (uVar8 < uVar2) {
    uVar8 = uVar2;
  }
  if (0x7fffffef < (uint)(param_1[2] - (int)puVar11)) {
    uVar8 = 0xfffffff;
  }
  if (uVar8 != 0) {
    if (0xfffffff < uVar8) goto LAB_7153d594;
    puVar12 = (undefined4 *)thunk_MwhHq(uVar8 << 4);
  }
  puVar4 = puVar12 + iVar1 * 4;
  *puVar4 = 0;
  uVar6 = param_2[1];
  puVar4[2] = *param_2;
  puVar4[1] = 0;
  *(undefined1 *)puVar4 = 5;
  puVar4[3] = uVar6;
  puVar3 = puVar11;
  puVar5 = puVar12;
  if (puVar11 != puVar10) {
    do {
      uVar9 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar5 = *puVar3;
      puVar5[1] = uVar9;
      puVar5[2] = uVar6;
      puVar5[3] = uVar7;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar10);
    do {
      puVar3 = puVar11 + 4;
      FUN_7152f750(puVar11 + 2,*(undefined1 *)puVar11);
      puVar11 = puVar3;
    } while (puVar3 != puVar10);
    puVar10 = (undefined4 *)*param_1;
  }
  *param_1 = puVar12;
  param_1[1] = puVar4 + 4;
  param_1[2] = puVar12 + uVar8 * 4;
  if (puVar10 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar10);
  }
  return puVar4 + 4;
}


// =========================================================================
// Function: FUN_7153d63c
// Entry: 0x7153d63c | Size: 496 bytes
// =========================================================================

int FUN_7153d63c(int *param_1,byte *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1[1] == param_1[2]) {
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    puVar8 = (undefined4 *)thunk_MwhHq(0xc);
    if ((*param_2 & 1) == 0) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 8);
      *puVar8 = *(undefined4 *)param_2;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
    }
    else {
      FUN_712f6d58(puVar8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    }
    puVar4 = (undefined1 *)*param_1;
    uVar1 = *puVar4;
    *puVar4 = 3;
    uVar5 = *(undefined4 *)(puVar4 + 0xc);
    uStack_28 = *(undefined4 *)(puVar4 + 8);
    *(undefined4 **)(puVar4 + 8) = puVar8;
    *(undefined4 *)(puVar4 + 0xc) = uStack_24;
    uStack_30 = CONCAT31(uStack_30._1_3_,uVar1);
    uStack_24 = uVar5;
    FUN_7152f750(&uStack_28);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar7 = *(int *)(pcVar2 + 8);
    puVar8 = *(undefined4 **)(iVar7 + 4);
    if (puVar8 < *(undefined4 **)(iVar7 + 8)) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)puVar8 = 3;
      puVar3 = (undefined4 *)thunk_MwhHq(0xc);
      if ((*param_2 & 1) == 0) {
        uVar5 = *(undefined4 *)(param_2 + 4);
        uVar6 = *(undefined4 *)(param_2 + 8);
        *puVar3 = *(undefined4 *)param_2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
      }
      else {
        FUN_712f6d58(puVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
      }
      puVar8[2] = puVar3;
      puVar8 = puVar8 + 4;
    }
    else {
      puVar8 = (undefined4 *)FUN_7153d940(iVar7,param_2);
    }
    *(undefined4 **)(iVar7 + 4) = puVar8;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uVar6 = 0;
  uVar5 = 0;
  puVar8 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_2 & 1) == 0) {
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    *puVar8 = *(undefined4 *)param_2;
    puVar8[1] = uVar5;
    puVar8[2] = uVar6;
  }
  else {
    FUN_712f6d58(puVar8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),
                 *(undefined4 *)(param_2 + 8),uVar5,uVar6);
  }
  puVar4 = (undefined1 *)param_1[4];
  *puVar4 = 3;
  uVar5 = *(undefined4 *)(puVar4 + 0xc);
  uStack_38 = *(undefined4 *)(puVar4 + 8);
  *(undefined4 **)(puVar4 + 8) = puVar8;
  *(undefined4 *)(puVar4 + 0xc) = uStack_34;
  uStack_34 = uVar5;
  FUN_7152f750(&uStack_38);
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153d940
// Entry: 0x7153d940 | Size: 396 bytes
// =========================================================================

undefined4 * FUN_7153d940(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  
  puVar10 = (undefined4 *)*param_1;
  puVar11 = (undefined4 *)param_1[1];
  iVar12 = (int)puVar11 - (int)puVar10 >> 4;
  uVar7 = iVar12 + 1;
  if (0xfffffff < uVar7) {
    FUN_7152fef0();
LAB_7153dac8:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  uVar1 = param_1[2] - (int)puVar10 >> 3;
  if (uVar7 < uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffef < (uint)(param_1[2] - (int)puVar10)) {
    uVar7 = 0xfffffff;
  }
  iVar2 = 0;
  if (uVar7 != 0) {
    if (0xfffffff < uVar7) goto LAB_7153dac8;
    iVar2 = thunk_MwhHq(uVar7 << 4);
  }
  puVar8 = (undefined4 *)(iVar2 + iVar12 * 0x10);
  *puVar8 = 0;
  *(undefined1 *)puVar8 = 3;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar3 = (undefined4 *)thunk_MwhHq(0xc);
  if ((*param_2 & 1) == 0) {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    *puVar3 = *(undefined4 *)param_2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
  }
  else {
    FUN_712f6d58(puVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    puVar10 = (undefined4 *)*param_1;
    puVar11 = (undefined4 *)param_1[1];
    iVar12 = (int)puVar11 - (int)puVar10 >> 4;
  }
  puVar8[2] = puVar3;
  puVar3 = puVar10;
  puVar6 = puVar8 + iVar12 * -4;
  if (puVar10 != puVar11) {
    do {
      uVar5 = puVar3[1];
      uVar4 = puVar3[2];
      uVar9 = puVar3[3];
      *puVar6 = *puVar3;
      puVar6[1] = uVar5;
      puVar6[2] = uVar4;
      puVar6[3] = uVar9;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar3 != puVar11);
    do {
      puVar3 = puVar10 + 4;
      FUN_7152f750(puVar10 + 2,*(undefined1 *)puVar10);
      puVar10 = puVar3;
    } while (puVar3 != puVar11);
    puVar10 = (undefined4 *)*param_1;
  }
  *param_1 = puVar8 + iVar12 * -4;
  param_1[1] = puVar8 + 4;
  param_1[2] = iVar2 + uVar7 * 0x10;
  if (puVar10 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar10);
  }
  return puVar8 + 4;
}


// =========================================================================
// Function: FUN_7153dba8
// Entry: 0x7153dba8 | Size: 308 bytes
// =========================================================================

int FUN_7153dba8(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1[1] == param_1[2]) {
    pbVar4 = (byte *)*param_1;
    uVar7 = *param_2;
    uVar8 = param_2[1];
    uStack_24 = 0;
    uStack_20 = *(undefined4 *)(pbVar4 + 8);
    uStack_1c = *(undefined4 *)(pbVar4 + 0xc);
    bVar1 = *pbVar4;
    *pbVar4 = 6;
    *(undefined4 *)(pbVar4 + 8) = uVar7;
    *(undefined4 *)(pbVar4 + 0xc) = uVar8;
    uStack_28 = (uint)bVar1;
    FUN_7152f750(&uStack_20);
    return *param_1;
  }
  pcVar2 = *(char **)(param_1[2] + -4);
  if (*pcVar2 == '\x02') {
    iVar6 = *(int *)(pcVar2 + 8);
    puVar3 = *(undefined4 **)(iVar6 + 4);
    if (puVar3 < *(undefined4 **)(iVar6 + 8)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[2] = *param_2;
      puVar3[3] = param_2[1];
      *(undefined1 *)puVar3 = 6;
      puVar3 = puVar3 + 4;
    }
    else {
      puVar3 = (undefined4 *)FUN_7153dd48(iVar6);
    }
    *(undefined4 **)(iVar6 + 4) = puVar3;
    return *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  puVar5 = (undefined1 *)param_1[4];
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uStack_30 = *(undefined4 *)(puVar5 + 8);
  uStack_2c = *(undefined4 *)(puVar5 + 0xc);
  *puVar5 = 6;
  *(undefined4 *)(puVar5 + 8) = uVar7;
  *(undefined4 *)(puVar5 + 0xc) = uVar8;
  FUN_7152f750(&uStack_30);
  return param_1[4];
}


// =========================================================================
// Function: FUN_7153dd48
// Entry: 0x7153dd48 | Size: 324 bytes
// =========================================================================

undefined4 * FUN_7153dd48(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar11 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  iVar1 = (int)puVar10 - (int)puVar11 >> 4;
  uVar8 = iVar1 + 1;
  if (0xfffffff < uVar8) {
    FUN_7152fef0(param_1);
LAB_7153de88:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  puVar12 = (undefined4 *)0x0;
  uVar2 = param_1[2] - (int)puVar11 >> 3;
  if (uVar8 < uVar2) {
    uVar8 = uVar2;
  }
  if (0x7fffffef < (uint)(param_1[2] - (int)puVar11)) {
    uVar8 = 0xfffffff;
  }
  if (uVar8 != 0) {
    if (0xfffffff < uVar8) goto LAB_7153de88;
    puVar12 = (undefined4 *)thunk_MwhHq(uVar8 << 4);
  }
  puVar4 = puVar12 + iVar1 * 4;
  *puVar4 = 0;
  uVar6 = param_2[1];
  puVar4[2] = *param_2;
  puVar4[1] = 0;
  *(undefined1 *)puVar4 = 6;
  puVar4[3] = uVar6;
  puVar3 = puVar11;
  puVar5 = puVar12;
  if (puVar11 != puVar10) {
    do {
      uVar9 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar5 = *puVar3;
      puVar5[1] = uVar9;
      puVar5[2] = uVar6;
      puVar5[3] = uVar7;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar10);
    do {
      puVar3 = puVar11 + 4;
      FUN_7152f750(puVar11 + 2,*(undefined1 *)puVar11);
      puVar11 = puVar3;
    } while (puVar3 != puVar10);
    puVar10 = (undefined4 *)*param_1;
  }
  *param_1 = puVar12;
  param_1[1] = puVar4 + 4;
  param_1[2] = puVar12 + uVar8 * 4;
  if (puVar10 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar10);
  }
  return puVar4 + 4;
}


// =========================================================================
// Function: FUN_7153df30
// Entry: 0x7153df30 | Size: 1920 bytes
// =========================================================================

void FUN_7153df30(byte *param_1,undefined4 param_2,undefined2 *param_3)

{
  char cVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  uint *puVar12;
  ushort *puVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  ushort *puVar23;
  undefined4 uVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  undefined1 *puStack_138;
  ushort auStack_134 [2];
  int iStack_130;
  ushort uStack_12c;
  char acStack_12a [18];
  int iStack_118;
  undefined2 uStack_114;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined1 uStack_10a;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  undefined1 uStack_fa;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined1 uStack_ea;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined1 uStack_da;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 uStack_ca;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined1 uStack_ba;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  
  FUN_71556680(param_3);
  if (*(int *)(param_1 + 0x210) != 0) {
    *(undefined1 *)(param_3 + 0x2e2) = 1;
    *(undefined4 *)(param_3 + 0x2e4) = *(undefined4 *)(param_1 + 0x210);
    return;
  }
  FUN_71555e18(param_1 + 8,param_3 + 0x2dc,param_3 + 0x2de,param_3 + 0x2e0);
  iVar4 = FUN_7154aa58(param_2,*(undefined2 *)(param_1 + 2));
  if (iVar4 != 0) {
    *param_3 = *(undefined2 *)(param_1 + 2);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(iVar4 + 0x1c);
    iVar4 = FUN_7154a7f0(param_2,*(undefined2 *)(param_1 + 6));
    uVar11 = *(undefined2 *)(param_1 + 6);
    if (iVar4 == 0) {
      uVar11 = 0;
    }
    param_3[4] = uVar11;
  }
  iVar4 = FUN_7154aa9c(param_2,*(undefined2 *)(param_1 + 4));
  uVar5 = 0;
  if (iVar4 != 0) {
    param_3[5] = *(undefined2 *)(param_1 + 4);
    uVar5 = *(undefined4 *)(iVar4 + 0x1c);
  }
  uVar21 = 0;
  if (iVar4 != 0) {
    *(undefined4 *)(param_3 + 6) = uVar5;
  }
  uStack_3c = 0xffff;
  uStack_38 = 0;
  uStack_44 = 0xffff;
  uStack_3a = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_4a = 0;
  uStack_4c = 0xffff;
  uStack_50 = 0;
  uStack_54 = 0xffff;
  uStack_58 = 0;
  uStack_5a = 0;
  uStack_5c = 0xffff;
  uStack_60 = 0;
  uStack_64 = 0xffff;
  uStack_68 = 0;
  uStack_6a = 0;
  uStack_6c = 0xffff;
  uStack_70 = 0;
  uStack_74 = 0xffff;
  uStack_78 = 0;
  uStack_7a = 0;
  uStack_7c = 0xffff;
  uStack_80 = 0;
  uStack_84 = 0xffff;
  uStack_88 = 0;
  uStack_8a = 0;
  uStack_8c = 0xffff;
  uStack_90 = 0;
  uStack_94 = 0xffff;
  uStack_98 = 0;
  uStack_9a = 0;
  uStack_9c = 0xffff;
  uStack_a0 = 0;
  uStack_a4 = 0xffff;
  uStack_a8 = 0;
  uStack_aa = 0;
  uStack_ac = 0xffff;
  uStack_b0 = 0;
  uStack_b4 = 0xffff;
  uStack_b8 = 0;
  uStack_ba = 0;
  uStack_bc = 0xffff;
  uStack_c0 = 0;
  uStack_c4 = 0xffff;
  uStack_c8 = 0;
  uStack_ca = 0;
  uStack_cc = 0xffff;
  uStack_d0 = 0;
  uStack_d4 = 0xffff;
  uStack_d8 = 0;
  uStack_da = 0;
  uStack_dc = 0xffff;
  uStack_e0 = 0;
  uStack_e4 = 0xffff;
  uStack_e8 = 0;
  uStack_ea = 0;
  uStack_ec = 0xffff;
  uStack_f0 = 0;
  uStack_f4 = 0xffff;
  uStack_f8 = 0;
  uStack_fa = 0;
  uStack_fc = 0xffff;
  uStack_100 = 0;
  uStack_104 = 0xffff;
  uStack_108 = 0;
  uStack_10a = 0;
  uStack_10c = 0xffff;
  uStack_110 = 0;
  uStack_114 = 0xffff;
  iStack_118 = 0;
  acStack_12a[0x10] = 0;
  acStack_12a[0xe] = -1;
  acStack_12a[0xf] = -1;
  acStack_12a[10] = '\0';
  acStack_12a[0xb] = '\0';
  acStack_12a[0xc] = '\0';
  acStack_12a[0xd] = '\0';
  acStack_12a[6] = -1;
  acStack_12a[7] = -1;
  acStack_12a[2] = '\0';
  acStack_12a[3] = '\0';
  acStack_12a[4] = '\0';
  acStack_12a[5] = '\0';
  acStack_12a[0] = '\0';
  uStack_12c = 0xffff;
  iStack_130 = 0;
  auStack_134[0] = 0xffff;
  puStack_138 = (undefined1 *)0x0;
  uStack_34 = 0xffff;
  uStack_2c = 0xffff;
  uStack_30 = 0;
  uStack_2a = 0;
  do {
    uVar6 = uVar21 * 0x12;
    puVar23 = (ushort *)((int)(param_1 + 0x10) + uVar21 * 9 * 2);
    if (*puVar23 != 0xffff) {
      uVar6 = (uint)(byte)puVar23[1];
    }
    if (((*puVar23 != 0xffff && uVar6 != 0) &&
        (puVar7 = (undefined1 *)FUN_7154a83c(param_2), puVar7 != (undefined1 *)0x0)) &&
       (uVar6 = (uint)*param_1, uVar6 < 2)) {
      pbVar16 = puVar7 + uVar6 * 0xc + 0x10;
      puVar12 = (uint *)(puVar7 + uVar6 * 0xc + 0x14);
      if (puVar7[0x38] == '\x01') {
        pbVar16 = puVar7 + 0x3c;
        puVar12 = (uint *)(puVar7 + 0x40);
      }
      uVar6 = *puVar12;
      if ((*pbVar16 & 1) == 0) {
        uVar6 = (uint)(*pbVar16 >> 1);
      }
      if (uVar6 != 0) {
        uVar2 = *puVar23;
        if (uVar21 == 0) {
LAB_7153e254:
          (&puStack_138)[uVar21 * 4] = puVar7;
          (&iStack_130)[uVar21 * 4] = (int)(puVar23 + 3);
          auStack_134[uVar21 * 8] = uVar2;
          iVar4 = *(int *)(puVar7 + 200);
          uVar19 = (*(int *)(puVar7 + 0xcc) - iVar4 >> 2) * 0x286bca1b;
          uVar6 = (uint)puVar23[2];
          if (uVar19 < uVar6 || uVar19 - uVar6 == 0) {
            uVar6 = 0xffff;
          }
          *(short *)(acStack_12a + uVar21 * 0x10 + -2) = (short)uVar6;
          if (iVar4 == *(int *)(puVar7 + 0xcc)) {
            cVar3 = puVar7[0xa0];
          }
          else {
            cVar3 = '\0';
            if (((iVar4 != 0) &&
                (uVar19 = (*(int *)(puVar7 + 0xcc) - iVar4 >> 2) * 0x286bca1b,
                uVar6 <= uVar19 && uVar19 - uVar6 != 0)) &&
               (iVar4 = uVar6 * 0x4c + iVar4, *(char *)(iVar4 + 0x24) != '\0')) {
              cVar3 = *(char *)(iVar4 + 0x25);
            }
          }
          acStack_12a[uVar21 * 0x10] = cVar3;
        }
        else if ((undefined2 *)(uint)*(ushort *)(param_1 + 0x10) != (undefined2 *)(uint)uVar2) {
          puVar13 = (ushort *)(param_1 + 0x22);
          puVar18 = param_3;
          uVar6 = 1;
          do {
            uVar19 = uVar6;
            uVar6 = uVar19;
            if (uVar21 != uVar19) {
              puVar18 = (undefined2 *)(uint)*puVar13;
              uVar6 = uVar19 + 1;
              puVar13 = puVar13 + 9;
            }
          } while (uVar21 != uVar19 && puVar18 != (undefined2 *)(uint)uVar2);
          if (uVar21 <= uVar19) goto LAB_7153e254;
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 0x11);
  iVar4 = 0;
  uVar6 = 0;
  uVar21 = 0;
  do {
    puVar7 = (&puStack_138)[iVar4 * -4];
    if (puVar7 != (undefined1 *)0x0) {
      uVar21 = *(uint *)(puVar7 + 0x30) | uVar21;
      uVar6 = *(uint *)(puVar7 + 0xd4) & ~*(uint *)(puVar7 + 0xc) & 0x10003 | uVar6;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != -0x11);
  if ((uVar21 & 0x41000) == 0x41000) {
    uVar6 = uVar6 | 0x10000;
  }
  if ((uVar6 & 1) != 0) goto LAB_7153e3f8;
  bVar26 = iStack_118 != 0;
  puVar7 = &DAT_00010003;
  if (bVar26) {
    puVar7 = puStack_138;
  }
  bVar27 = puVar7 != (undefined1 *)0x0;
  if (bVar26 && bVar27) {
    puVar7 = (undefined1 *)(uint)(byte)puVar7[0xf4];
  }
  if ((!bVar26 || !bVar27) || puVar7 == (undefined1 *)0x0) goto LAB_7153e3f8;
  uVar2 = *(ushort *)(iStack_118 + (uint)*param_1 * 2 + 0xf0);
  puStack_138 = (undefined1 *)FUN_7154a83c(param_2,uVar2);
  if ((puStack_138 == (undefined1 *)0x0) || (uVar21 = (uint)*param_1, 1 < uVar21)) {
LAB_7153e3d4:
    puStack_138 = (undefined1 *)0x0;
    acStack_12a[0] = '\0';
    uStack_12c = 0xffff;
    iStack_130 = 0;
    auStack_134[1] = 0;
    auStack_134[0] = 0xffff;
  }
  else {
    pbVar16 = puStack_138 + uVar21 * 0xc + 0x10;
    puVar12 = (uint *)(puStack_138 + uVar21 * 0xc + 0x14);
    if (puStack_138[0x38] == '\x01') {
      pbVar16 = puStack_138 + 0x3c;
      puVar12 = (uint *)(puStack_138 + 0x40);
    }
    uVar21 = *puVar12;
    if ((*pbVar16 & 1) == 0) {
      uVar21 = (uint)(*pbVar16 >> 1);
    }
    if (uVar21 == 0) goto LAB_7153e3d4;
    uStack_12c = 0xffff;
    auStack_134[0] = uVar2;
  }
  uStack_12c = 0xffff;
LAB_7153e3f8:
  iVar4 = 0;
  uVar21 = 0;
  do {
    if ((uVar6 >> (uVar21 & 0xff) & 1) != 0) {
      *(undefined4 *)((int)&puStack_138 + iVar4) = 0;
      acStack_12a[iVar4] = '\0';
      (acStack_12a + iVar4 + -2)[0] = -1;
      (acStack_12a + iVar4 + -2)[1] = -1;
      *(undefined4 *)((int)&iStack_130 + iVar4) = 0;
      *(undefined2 *)((int)auStack_134 + iVar4 + 2) = 0;
      *(undefined2 *)((int)auStack_134 + iVar4) = 0xffff;
    }
    iVar4 = iVar4 + 0x10;
    uVar21 = uVar21 + 1;
  } while (iVar4 != 0x110);
  iVar25 = 0;
  iVar4 = 0;
  *(uint *)(param_3 + 0x270) = uVar6;
  do {
    iVar9 = *(int *)((int)&puStack_138 + iVar25);
    if (iVar9 != 0) {
      iVar17 = *(int *)(param_3 + 0x26c);
      *(uint *)(param_3 + 0x26e) = *(uint *)(param_3 + 0x26e) | *(uint *)(iVar9 + 0x30);
      *(uint *)(param_3 + 0x274) = *(uint *)(param_3 + 0x274) | *(uint *)(iVar9 + 0x34);
      *(int *)(param_3 + 0x26c) = iVar17 + 1;
      puVar18 = param_3 + iVar17 * 0x24 + 8;
      *(char *)puVar18 = (char)iVar4;
      puVar18[1] = *(undefined2 *)((int)auStack_134 + iVar25);
      cVar3 = *(char *)(iVar9 + 0x38);
      *(char *)(puVar18 + 2) = cVar3;
      uVar2 = *(ushort *)(acStack_12a + iVar25 + -2);
      uVar21 = (uint)uVar2;
      pbVar16 = (byte *)0xffffffff;
      if (cVar3 != '\x01') {
        pbVar16 = param_1;
      }
      cVar1 = acStack_12a[iVar25];
      if (cVar3 != '\x01') {
        pbVar16 = *(byte **)(iVar9 + (uint)*pbVar16 * 4 + 0x28);
      }
      *(byte **)(puVar18 + 4) = pbVar16;
      uVar10 = 0;
      puVar18[0xd] = uVar2;
      if (cVar1 != '\0') {
        iVar17 = *(int *)(iVar9 + 200);
        if (iVar17 == *(int *)(iVar9 + 0xcc)) {
          uVar10 = *(undefined1 *)(iVar9 + 0xa0);
        }
        else if (((iVar17 != 0) &&
                 (uVar6 = (*(int *)(iVar9 + 0xcc) - iVar17 >> 2) * 0x286bca1b,
                 uVar21 <= uVar6 && uVar6 - uVar21 != 0)) &&
                (iVar17 = uVar21 * 0x4c + iVar17, *(char *)(iVar17 + 0x24) != '\0')) {
          uVar10 = *(undefined1 *)(iVar17 + 0x25);
        }
      }
      *(undefined1 *)(puVar18 + 6) = uVar10;
      *(undefined4 *)(puVar18 + 0xe) = *(undefined4 *)(iVar9 + 0x34);
      iVar17 = iVar9 + (uint)*param_1 * 0x28;
      uVar5 = *(undefined4 *)(iVar17 + 0x4c);
      uVar20 = *(undefined4 *)(iVar17 + 0x50);
      uVar22 = *(undefined4 *)(iVar17 + 0x54);
      uVar24 = *(undefined4 *)(iVar17 + 0x58);
      *(undefined4 *)(puVar18 + 0x10) = *(undefined4 *)(iVar17 + 0x48);
      *(undefined4 *)(puVar18 + 0x12) = uVar5;
      *(undefined4 *)(puVar18 + 0x14) = uVar20;
      *(undefined4 *)(puVar18 + 0x16) = uVar22;
      *(undefined4 *)(puVar18 + 0x18) = uVar24;
      uVar5 = *(undefined4 *)(iVar17 + 0x60);
      uVar20 = *(undefined4 *)(iVar17 + 100);
      uVar22 = *(undefined4 *)(iVar17 + 0x68);
      uVar24 = *(undefined4 *)(iVar17 + 0x6c);
      *(undefined4 *)(puVar18 + 0x1a) = *(undefined4 *)(iVar17 + 0x5c);
      *(undefined4 *)(puVar18 + 0x1c) = uVar5;
      *(undefined4 *)(puVar18 + 0x1e) = uVar20;
      *(undefined4 *)(puVar18 + 0x20) = uVar22;
      *(undefined4 *)(puVar18 + 0x22) = uVar24;
      uVar5 = FUN_71ba0b38(*(undefined4 *)(iVar9 + (uint)*param_1 * 4 + 0x98),
                           *(undefined4 *)(param_3 + 0x272));
      *(undefined4 *)(param_3 + 0x272) = uVar5;
      puVar8 = (undefined4 *)0x0;
      if (*(char *)(puVar18 + 6) != '\0') {
        puVar8 = *(undefined4 **)((int)&iStack_130 + iVar25);
      }
      if (*(char *)(puVar18 + 6) != '\0' && puVar8 != (undefined4 *)0x0) {
        uVar5 = *puVar8;
        uVar20 = puVar8[1];
        *(undefined4 *)((int)puVar18 + 0x15) = puVar8[2];
        *(undefined4 *)((int)puVar18 + 0x11) = uVar20;
        *(undefined4 *)((int)puVar18 + 0xd) = uVar5;
      }
    }
    iVar4 = iVar4 + 1;
    iVar25 = iVar25 + 0x10;
  } while (iVar4 != 0x11);
  if (*(int *)(param_1 + 0x20c) != 0) {
    uVar21 = *(uint *)(param_3 + 0x26e);
    pbVar16 = param_1 + 0x148;
    uVar6 = *(uint *)(param_3 + 0x274);
    uVar19 = 0;
    do {
      if (((*(short *)(pbVar16 + -4) != -1) && (iVar4 = FUN_7154aae0(param_2), iVar4 != 0)) &&
         ((*(uint *)(iVar4 + 0xc) == 0 || ((*(uint *)(iVar4 + 0xc) & (uVar6 | ~uVar21)) != 0)))) {
        uVar14 = *(uint *)(param_3 + 0x2da);
        if (9 < uVar14) {
          return;
        }
        *(uint *)(param_3 + 0x2da) = uVar14 + 1;
        puVar18 = param_3 + uVar14 * 10 + 0x276;
        *puVar18 = *(undefined2 *)(pbVar16 + -4);
        pbVar15 = pbVar16;
        if (pbVar16[-2] == 0) {
          pbVar15 = (byte *)(iVar4 + 0x1c);
        }
        uVar20 = *(undefined4 *)(pbVar15 + 4);
        uVar22 = *(undefined4 *)(pbVar15 + 8);
        uVar5 = *(undefined4 *)(pbVar15 + 0xc);
        *(undefined4 *)(puVar18 + 2) = *(undefined4 *)pbVar15;
        *(undefined4 *)(puVar18 + 4) = uVar20;
        *(undefined4 *)(puVar18 + 6) = uVar22;
        *(undefined4 *)(puVar18 + 8) = uVar5;
      }
      if (8 < uVar19) {
        return;
      }
      uVar19 = uVar19 + 1;
      pbVar16 = pbVar16 + 0x14;
    } while (uVar19 < *(uint *)(param_1 + 0x20c));
  }
  return;
}


// =========================================================================
// Function: FUN_7153e7c4
// Entry: 0x7153e7c4 | Size: 884 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7153e7c4(undefined1 *param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  ushort *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  iVar2 = _ext___stack_chk_guard;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  uVar15 = FUN_7154a83c(param_3,param_4);
  iVar5 = (int)((ulonglong)uVar15 >> 0x20);
  iVar3 = (int)uVar15;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 0xc);
  }
  if ((iVar3 == 0 || iVar5 == 0) || (1 < *param_2)) goto LAB_7153e81c;
  iVar5 = iVar3 + (uint)*param_2 * 0xc;
  pbVar9 = (byte *)(iVar5 + 0x10);
  puVar6 = (uint *)(iVar5 + 0x14);
  if (*(char *)(iVar3 + 0x38) == '\x01') {
    pbVar9 = (byte *)(iVar3 + 0x3c);
    puVar6 = (uint *)(iVar3 + 0x40);
  }
  uVar7 = *puVar6;
  if ((*pbVar9 & 1) == 0) {
    uVar7 = (uint)(*pbVar9 >> 1);
  }
  if (uVar7 == 0) goto LAB_7153e81c;
  uStack_58 = *(undefined4 *)(iVar3 + 0xa1);
  uStack_54 = *(undefined4 *)(iVar3 + 0xa5);
  uStack_50 = *(undefined4 *)(iVar3 + 0xa9);
  puVar13 = (ushort *)(param_2 + 0x10);
  puVar8 = puVar13;
  if ((((((*puVar13 == param_4) || (puVar8 = (ushort *)(param_2 + 0x22), *puVar8 == param_4)) ||
        (puVar8 = (ushort *)(param_2 + 0x34), *puVar8 == param_4)) ||
       ((puVar8 = (ushort *)(param_2 + 0x46), *puVar8 == param_4 ||
        (puVar8 = (ushort *)(param_2 + 0x58), *puVar8 == param_4)))) ||
      (((puVar8 = (ushort *)(param_2 + 0x6a), *puVar8 == param_4 ||
        ((puVar8 = (ushort *)(param_2 + 0x7c), *puVar8 == param_4 ||
         (puVar8 = (ushort *)(param_2 + 0x8e), *puVar8 == param_4)))) ||
       (puVar8 = (ushort *)(param_2 + 0xa0), *puVar8 == param_4)))) ||
     ((((puVar8 = (ushort *)(param_2 + 0xb2), *puVar8 == param_4 ||
        (puVar8 = (ushort *)(param_2 + 0xc4), *puVar8 == param_4)) ||
       (puVar8 = (ushort *)(param_2 + 0xd6), *puVar8 == param_4)) ||
      (((puVar8 = (ushort *)(param_2 + 0xe8), *puVar8 == param_4 ||
        (puVar8 = (ushort *)(param_2 + 0xfa), *puVar8 == param_4)) ||
       ((puVar8 = (ushort *)(param_2 + 0x10c), *puVar8 == param_4 ||
        (puVar8 = (ushort *)(param_2 + 0x11e), *puVar8 == param_4)))))))) {
LAB_7153e9c4:
    uStack_58 = *(undefined4 *)(puVar8 + 3);
    uStack_54 = *(undefined4 *)(puVar8 + 5);
    uStack_50 = *(undefined4 *)(puVar8 + 7);
    uVar1 = puVar8[2];
  }
  else {
    puVar8 = (ushort *)(param_2 + 0x130);
    uVar1 = 0xffff;
    if (*puVar8 == param_4) goto LAB_7153e9c4;
  }
  uVar12 = 0;
  uVar7 = 0;
  do {
    if (((*(uint *)(iVar3 + 0xc) >> (uVar12 & 0xff) & 1) != 0) &&
       (uVar10 = (uint)puVar13[uVar12 * 9], uVar10 != 0xffff && uVar10 != param_4)) {
      uVar11 = 0;
      puVar8 = puVar13;
      do {
        if (*puVar8 == uVar10) {
          uVar7 = uVar7 | 1 << (uVar11 & 0xff);
          puVar8[1] = 1;
          *puVar8 = 0xffff;
          puVar8[2] = 0xffff;
          puVar8[3] = 0xffff;
          puVar8[4] = 0xffff;
          puVar8[5] = 0xffff;
          puVar8[6] = 0xffff;
          puVar8[7] = 0xffff;
          puVar8[8] = 0xffff;
        }
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 9;
      } while (uVar11 != 0x11);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x11);
  uVar12 = 0;
  *(uint *)(param_1 + 4) = uVar7;
  puVar8 = puVar13;
  do {
    if ((*(uint *)(iVar3 + 0xc) >> (uVar12 & 0xff) & 1) != 0) {
      *(byte *)(puVar8 + 1) = 1;
      *puVar8 = (ushort)param_4;
      *(undefined4 *)(puVar8 + 3) = uStack_58;
      *(undefined4 *)(puVar8 + 5) = uStack_54;
      *(undefined4 *)(puVar8 + 7) = uStack_50;
      puVar8[2] = uVar1;
    }
    uVar12 = uVar12 + 1;
    puVar8 = puVar8 + 9;
  } while (uVar12 != 0x11);
  uVar7 = 0;
  do {
    uVar12 = *(uint *)(iVar3 + 0xc);
    bVar14 = (uVar12 >> (uVar7 & 0xff) & 1) == 0;
    if (bVar14) {
      uVar12 = (uint)*puVar13;
    }
    if (bVar14 && uVar12 == param_4) {
      puVar13[1] = 1;
      *puVar13 = 0xffff;
      puVar13[2] = 0xffff;
      puVar13[3] = 0xffff;
      puVar13[4] = 0xffff;
      puVar13[5] = 0xffff;
      puVar13[6] = 0xffff;
      puVar13[7] = 0xffff;
      puVar13[8] = 0xffff;
    }
    uVar7 = uVar7 + 1;
    puVar13 = puVar13 + 9;
  } while (uVar7 != 0x11);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = uVar4;
LAB_7153e81c:
  if (_ext___stack_chk_guard != iVar2) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7153ebc8
// Entry: 0x7153ebc8 | Size: 212 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7153ebc8(undefined1 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = _ext___stack_chk_guard;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (param_4 < 0x11) {
    psVar3 = (short *)(param_2 + 0x10);
    sVar1 = psVar3[param_4 * 9];
    if (sVar1 != -1) {
      uVar4 = 0;
      uVar5 = 0;
      do {
        if (*psVar3 == sVar1) {
          uVar5 = uVar5 | 1 << (uVar4 & 0xff);
          psVar3[1] = 1;
          *psVar3 = -1;
          psVar3[2] = -1;
          psVar3[3] = -1;
          psVar3[4] = -1;
          psVar3[5] = -1;
          psVar3[6] = -1;
          psVar3[7] = -1;
          psVar3[8] = -1;
        }
        uVar4 = uVar4 + 1;
        psVar3 = psVar3 + 9;
      } while (uVar4 != 0x11);
      *(uint *)(param_1 + 4) = uVar5;
      *param_1 = 1;
    }
  }
  if (_ext___stack_chk_guard != iVar2) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7153ed10
// Entry: 0x7153ed10 | Size: 1228 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7153ed10(byte *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = _ext___stack_chk_guard;
  if (param_2 < 2 && *param_1 != param_2) {
    param_1[0x18] = 0xff;
    param_1[0x19] = 0xff;
    param_1[0x1a] = 0xff;
    param_1[0x1b] = 0xff;
    param_1[0x2a] = 0xff;
    param_1[0x2b] = 0xff;
    param_1[0x2c] = 0xff;
    param_1[0x2d] = 0xff;
    param_1[0x14] = 0xff;
    param_1[0x15] = 0xff;
    param_1[0x16] = 0xff;
    param_1[0x17] = 0xff;
    param_1[0x1c] = 0xff;
    param_1[0x1d] = 0xff;
    param_1[0x1e] = 0xff;
    param_1[0x1f] = 0xff;
    param_1[0x32] = 0xff;
    param_1[0x33] = 0xff;
    param_1[0x34] = 0xff;
    param_1[0x35] = 0xff;
    param_1[0x2e] = 0xff;
    param_1[0x2f] = 0xff;
    param_1[0x30] = 0xff;
    param_1[0x31] = 0xff;
    param_1[0x20] = 0xff;
    param_1[0x21] = 0xff;
    param_1[0x22] = 0xff;
    param_1[0x23] = 0xff;
    param_1[0x26] = 0xff;
    param_1[0x27] = 0xff;
    param_1[0x28] = 0xff;
    param_1[0x29] = 0xff;
    param_1[0x38] = 0xff;
    param_1[0x39] = 0xff;
    param_1[0x3a] = 0xff;
    param_1[0x3b] = 0xff;
    param_1[0x3c] = 0xff;
    param_1[0x3d] = 0xff;
    param_1[0x3e] = 0xff;
    param_1[0x3f] = 0xff;
    param_1[0x40] = 0xff;
    param_1[0x41] = 0xff;
    param_1[0x42] = 0xff;
    param_1[0x43] = 0xff;
    param_1[0x44] = 0xff;
    param_1[0x45] = 0xff;
    param_1[0x46] = 0xff;
    param_1[0x47] = 0xff;
    param_1[0x56] = 0xff;
    param_1[0x57] = 0xff;
    param_1[0x58] = 0xff;
    param_1[0x59] = 0xff;
    param_1[0x52] = 0xff;
    param_1[0x53] = 0xff;
    param_1[0x54] = 0xff;
    param_1[0x55] = 0xff;
    param_1[0x4e] = 0xff;
    param_1[0x4f] = 0xff;
    param_1[0x50] = 0xff;
    param_1[0x51] = 0xff;
    param_1[0x4a] = 0xff;
    param_1[0x4b] = 0xff;
    param_1[0x4c] = 0xff;
    param_1[0x4d] = 0xff;
    param_1[0x5c] = 0xff;
    param_1[0x5d] = 0xff;
    param_1[0x5e] = 0xff;
    param_1[0x5f] = 0xff;
    param_1[0x60] = 0xff;
    param_1[0x61] = 0xff;
    param_1[0x62] = 0xff;
    param_1[99] = 0xff;
    param_1[100] = 0xff;
    param_1[0x65] = 0xff;
    param_1[0x66] = 0xff;
    param_1[0x67] = 0xff;
    param_1[0x68] = 0xff;
    param_1[0x69] = 0xff;
    param_1[0x6a] = 0xff;
    param_1[0x6b] = 0xff;
    param_1[0x7a] = 0xff;
    param_1[0x7b] = 0xff;
    param_1[0x7c] = 0xff;
    param_1[0x7d] = 0xff;
    param_1[0x76] = 0xff;
    param_1[0x77] = 0xff;
    param_1[0x78] = 0xff;
    param_1[0x79] = 0xff;
    param_1[0x72] = 0xff;
    param_1[0x73] = 0xff;
    param_1[0x74] = 0xff;
    param_1[0x75] = 0xff;
    param_1[0x6e] = 0xff;
    param_1[0x6f] = 0xff;
    param_1[0x70] = 0xff;
    param_1[0x71] = 0xff;
    param_1[0x80] = 0xff;
    param_1[0x81] = 0xff;
    param_1[0x82] = 0xff;
    param_1[0x83] = 0xff;
    param_1[0x84] = 0xff;
    param_1[0x85] = 0xff;
    param_1[0x86] = 0xff;
    param_1[0x87] = 0xff;
    param_1[0x88] = 0xff;
    param_1[0x89] = 0xff;
    param_1[0x8a] = 0xff;
    param_1[0x8b] = 0xff;
    param_1[0x8c] = 0xff;
    param_1[0x8d] = 0xff;
    param_1[0x8e] = 0xff;
    param_1[0x8f] = 0xff;
    param_1[0x9e] = 0xff;
    param_1[0x9f] = 0xff;
    param_1[0xa0] = 0xff;
    param_1[0xa1] = 0xff;
    param_1[0x9a] = 0xff;
    param_1[0x9b] = 0xff;
    param_1[0x9c] = 0xff;
    param_1[0x9d] = 0xff;
    param_1[0x96] = 0xff;
    param_1[0x97] = 0xff;
    param_1[0x98] = 0xff;
    param_1[0x99] = 0xff;
    param_1[0x92] = 0xff;
    param_1[0x93] = 0xff;
    param_1[0x94] = 0xff;
    param_1[0x95] = 0xff;
    param_1[0xa4] = 0xff;
    param_1[0xa5] = 0xff;
    param_1[0xa6] = 0xff;
    param_1[0xa7] = 0xff;
    param_1[0xa8] = 0xff;
    param_1[0xa9] = 0xff;
    param_1[0xaa] = 0xff;
    param_1[0xab] = 0xff;
    param_1[0xac] = 0xff;
    param_1[0xad] = 0xff;
    param_1[0xae] = 0xff;
    param_1[0xaf] = 0xff;
    param_1[0xb0] = 0xff;
    param_1[0xb1] = 0xff;
    param_1[0xb2] = 0xff;
    param_1[0xb3] = 0xff;
    param_1[0xc2] = 0xff;
    param_1[0xc3] = 0xff;
    param_1[0xc4] = 0xff;
    param_1[0xc5] = 0xff;
    param_1[0xbe] = 0xff;
    param_1[0xbf] = 0xff;
    param_1[0xc0] = 0xff;
    param_1[0xc1] = 0xff;
    param_1[0xba] = 0xff;
    param_1[0xbb] = 0xff;
    param_1[0xbc] = 0xff;
    param_1[0xbd] = 0xff;
    param_1[0xb6] = 0xff;
    param_1[0xb7] = 0xff;
    param_1[0xb8] = 0xff;
    param_1[0xb9] = 0xff;
    param_1[200] = 0xff;
    param_1[0xc9] = 0xff;
    param_1[0xca] = 0xff;
    param_1[0xcb] = 0xff;
    param_1[0xcc] = 0xff;
    param_1[0xcd] = 0xff;
    param_1[0xce] = 0xff;
    param_1[0xcf] = 0xff;
    param_1[0xd0] = 0xff;
    param_1[0xd1] = 0xff;
    param_1[0xd2] = 0xff;
    param_1[0xd3] = 0xff;
    param_1[0xd4] = 0xff;
    param_1[0xd5] = 0xff;
    param_1[0xd6] = 0xff;
    param_1[0xd7] = 0xff;
    param_1[0xe6] = 0xff;
    param_1[0xe7] = 0xff;
    param_1[0xe8] = 0xff;
    param_1[0xe9] = 0xff;
    param_1[0xe2] = 0xff;
    param_1[0xe3] = 0xff;
    param_1[0xe4] = 0xff;
    param_1[0xe5] = 0xff;
    param_1[0xde] = 0xff;
    param_1[0xdf] = 0xff;
    param_1[0xe0] = 0xff;
    param_1[0xe1] = 0xff;
    param_1[0xda] = 0xff;
    param_1[0xdb] = 0xff;
    param_1[0xdc] = 0xff;
    param_1[0xdd] = 0xff;
    param_1[0xec] = 0xff;
    param_1[0xed] = 0xff;
    param_1[0xee] = 0xff;
    param_1[0xef] = 0xff;
    param_1[0xf0] = 0xff;
    param_1[0xf1] = 0xff;
    param_1[0xf2] = 0xff;
    param_1[0xf3] = 0xff;
    param_1[0xf4] = 0xff;
    param_1[0xf5] = 0xff;
    param_1[0xf6] = 0xff;
    param_1[0xf7] = 0xff;
    param_1[0xf8] = 0xff;
    param_1[0xf9] = 0xff;
    param_1[0xfa] = 0xff;
    param_1[0xfb] = 0xff;
    param_1[0x10a] = 0xff;
    param_1[0x10b] = 0xff;
    param_1[0x10c] = 0xff;
    param_1[0x10d] = 0xff;
    param_1[0x10] = 0xff;
    param_1[0x11] = 0xff;
    param_1[0x12] = 1;
    param_1[0x13] = 0;
    param_1[0xfe] = 0xff;
    param_1[0xff] = 0xff;
    param_1[0x100] = 0xff;
    param_1[0x101] = 0xff;
    param_1[0x106] = 0xff;
    param_1[0x107] = 0xff;
    param_1[0x108] = 0xff;
    param_1[0x109] = 0xff;
    param_1[0x102] = 0xff;
    param_1[0x103] = 0xff;
    param_1[0x104] = 0xff;
    param_1[0x105] = 0xff;
    param_1[0x10e] = 1;
    param_1[0x10f] = 0;
    param_1[0x110] = 0xff;
    param_1[0x111] = 0xff;
    param_1[0x112] = 0xff;
    param_1[0x113] = 0xff;
    param_1[0x114] = 0xff;
    param_1[0x115] = 0xff;
    param_1[0x116] = 0xff;
    param_1[0x117] = 0xff;
    param_1[0x118] = 0xff;
    param_1[0x119] = 0xff;
    param_1[0x11a] = 0xff;
    param_1[0x11b] = 0xff;
    param_1[0x11c] = 0xff;
    param_1[0x11d] = 0xff;
    param_1[0x11e] = 0xff;
    param_1[0x11f] = 0xff;
    param_1[0x120] = 1;
    param_1[0x121] = 0;
    param_1[0x122] = 0xff;
    param_1[0x123] = 0xff;
    param_1[0x124] = 0xff;
    param_1[0x125] = 0xff;
    param_1[0x12a] = 0xff;
    param_1[299] = 0xff;
    param_1[300] = 0xff;
    param_1[0x12d] = 0xff;
    param_1[0x126] = 0xff;
    param_1[0x127] = 0xff;
    param_1[0x128] = 0xff;
    param_1[0x129] = 0xff;
    param_1[0x132] = 1;
    param_1[0x133] = 0;
    param_1[0x138] = 0xff;
    param_1[0x139] = 0xff;
    param_1[0x13a] = 0xff;
    param_1[0x13b] = 0xff;
    param_1[0x134] = 0xff;
    param_1[0x135] = 0xff;
    param_1[0x136] = 0xff;
    param_1[0x137] = 0xff;
    param_1[0x140] = 0xff;
    param_1[0x141] = 0xff;
    param_1[0x142] = 0;
    param_1[0x143] = 0;
    param_1[0x144] = 0xff;
    param_1[0x145] = 0xff;
    param_1[0x146] = 0;
    param_1[0x147] = 0;
    param_1[0x148] = 0;
    param_1[0x149] = 0;
    param_1[0x152] = 0;
    param_1[0x153] = 0;
    param_1[0x158] = 0xff;
    param_1[0x159] = 0xff;
    param_1[0x15a] = 0;
    param_1[0x15b] = 0;
    param_1[0x15c] = 0;
    param_1[0x15d] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[0x166] = 0;
    param_1[0x167] = 0;
    param_1[0x16c] = 0xff;
    param_1[0x16d] = 0xff;
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
    param_1[0x171] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0x17a] = 0;
    param_1[0x17b] = 0;
    param_1[0x180] = 0xff;
    param_1[0x181] = 0xff;
    param_1[0x182] = 0;
    param_1[0x183] = 0;
    param_1[0x184] = 0;
    param_1[0x185] = 0;
    param_1[2] = 0xff;
    param_1[3] = 0xff;
    param_1[4] = 0xff;
    param_1[5] = 0xff;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    param_1[0x194] = 0xff;
    param_1[0x195] = 0xff;
    param_1[0x196] = 0;
    param_1[0x197] = 0;
    param_1[0x198] = 0;
    param_1[0x199] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x1a2] = 0;
    param_1[0x1a3] = 0;
    param_1[0x1a8] = 0xff;
    param_1[0x1a9] = 0xff;
    param_1[0x1aa] = 0;
    param_1[0x1ab] = 0;
    param_1[0x1ac] = 0;
    param_1[0x1ad] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x1b6] = 0;
    param_1[0x1b7] = 0;
    param_1[0x1bc] = 0xff;
    param_1[0x1bd] = 0xff;
    param_1[0x1be] = 0;
    param_1[0x1bf] = 0;
    param_1[0x1c0] = 0;
    param_1[0x1c1] = 0;
    param_1[0x24] = 1;
    param_1[0x25] = 0;
    param_1[0x1ca] = 0;
    param_1[0x1cb] = 0;
    param_1[0x1d0] = 0xff;
    param_1[0x1d1] = 0xff;
    param_1[0x1d2] = 0;
    param_1[0x1d3] = 0;
    param_1[0x1d4] = 0;
    param_1[0x1d5] = 0;
    param_1[0x36] = 1;
    param_1[0x37] = 0;
    param_1[0x1de] = 0;
    param_1[0x1df] = 0;
    param_1[0x1e4] = 0xff;
    param_1[0x1e5] = 0xff;
    param_1[0x1e6] = 0;
    param_1[0x1e7] = 0;
    param_1[0x1e8] = 0;
    param_1[0x1e9] = 0;
    param_1[0x48] = 1;
    param_1[0x49] = 0;
    param_1[0x1f2] = 0;
    param_1[499] = 0;
    param_1[0x1f8] = 0xff;
    param_1[0x1f9] = 0xff;
    param_1[0x1fa] = 0;
    param_1[0x1fb] = 0;
    param_1[0x1fc] = 0;
    param_1[0x1fd] = 0;
    param_1[0x5a] = 1;
    param_1[0x5b] = 0;
    param_1[0x6c] = 1;
    param_1[0x6d] = 0;
    param_1[0x7e] = 1;
    param_1[0x7f] = 0;
    param_1[0x90] = 1;
    param_1[0x91] = 0;
    param_1[0xa2] = 1;
    param_1[0xa3] = 0;
    param_1[0xb4] = 1;
    param_1[0xb5] = 0;
    param_1[0xc6] = 1;
    param_1[199] = 0;
    param_1[0xd8] = 1;
    param_1[0xd9] = 0;
    param_1[0xea] = 1;
    param_1[0xeb] = 0;
    param_1[0xfc] = 1;
    param_1[0xfd] = 0;
    param_1[0x12e] = 0xff;
    param_1[0x12f] = 0xff;
    param_1[0x130] = 0xff;
    param_1[0x131] = 0xff;
    param_1[0x13c] = 0xff;
    param_1[0x13d] = 0xff;
    param_1[0x13e] = 0xff;
    param_1[0x13f] = 0xff;
    param_1[0x14e] = 0;
    param_1[0x14f] = 0;
    param_1[0x150] = 0;
    param_1[0x151] = 0;
    param_1[0x14a] = 0;
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    param_1[0x14d] = 0;
    param_1[0x154] = 0;
    param_1[0x155] = 0;
    param_1[0x156] = 0x80;
    param_1[0x157] = 0x3f;
    param_1[0x162] = 0;
    param_1[0x163] = 0;
    param_1[0x164] = 0;
    param_1[0x165] = 0;
    param_1[0x15e] = 0;
    param_1[0x15f] = 0;
    param_1[0x160] = 0;
    param_1[0x161] = 0;
    param_1[0x168] = 0;
    param_1[0x169] = 0;
    param_1[0x16a] = 0x80;
    param_1[0x16b] = 0x3f;
    param_1[0x176] = 0;
    param_1[0x177] = 0;
    param_1[0x178] = 0;
    param_1[0x179] = 0;
    param_1[0x172] = 0;
    param_1[0x173] = 0;
    param_1[0x174] = 0;
    param_1[0x175] = 0;
    param_1[0x17c] = 0;
    param_1[0x17d] = 0;
    param_1[0x17e] = 0x80;
    param_1[0x17f] = 0x3f;
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
    param_1[0x18c] = 0;
    param_1[0x18d] = 0;
    param_1[0x186] = 0;
    param_1[0x187] = 0;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0x80;
    param_1[0x193] = 0x3f;
    param_1[0x19e] = 0;
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
    param_1[0x1a1] = 0;
    param_1[0x19a] = 0;
    param_1[0x19b] = 0;
    param_1[0x19c] = 0;
    param_1[0x19d] = 0;
    param_1[0x1a4] = 0;
    param_1[0x1a5] = 0;
    param_1[0x1a6] = 0x80;
    param_1[0x1a7] = 0x3f;
    param_1[0x1b2] = 0;
    param_1[0x1b3] = 0;
    param_1[0x1b4] = 0;
    param_1[0x1b5] = 0;
    param_1[0x1ae] = 0;
    param_1[0x1af] = 0;
    param_1[0x1b0] = 0;
    param_1[0x1b1] = 0;
    param_1[0x1b8] = 0;
    param_1[0x1b9] = 0;
    param_1[0x1ba] = 0x80;
    param_1[0x1bb] = 0x3f;
    param_1[0x1c6] = 0;
    param_1[0x1c7] = 0;
    param_1[0x1c8] = 0;
    param_1[0x1c9] = 0;
    param_1[0x1c2] = 0;
    param_1[0x1c3] = 0;
    param_1[0x1c4] = 0;
    param_1[0x1c5] = 0;
    param_1[0x1cc] = 0;
    param_1[0x1cd] = 0;
    param_1[0x1ce] = 0x80;
    param_1[0x1cf] = 0x3f;
    param_1[0x1da] = 0;
    param_1[0x1db] = 0;
    param_1[0x1dc] = 0;
    param_1[0x1dd] = 0;
    param_1[0x1d6] = 0;
    param_1[0x1d7] = 0;
    param_1[0x1d8] = 0;
    param_1[0x1d9] = 0;
    param_1[0x1e0] = 0;
    param_1[0x1e1] = 0;
    param_1[0x1e2] = 0x80;
    param_1[0x1e3] = 0x3f;
    param_1[0x1ee] = 0;
    param_1[0x1ef] = 0;
    param_1[0x1f0] = 0;
    param_1[0x1f1] = 0;
    param_1[0x1ea] = 0;
    param_1[0x1eb] = 0;
    param_1[0x1ec] = 0;
    param_1[0x1ed] = 0;
    param_1[500] = 0;
    param_1[0x1f5] = 0;
    param_1[0x1f6] = 0x80;
    param_1[0x1f7] = 0x3f;
    param_1[0x202] = 0;
    param_1[0x203] = 0;
    param_1[0x204] = 0;
    param_1[0x205] = 0;
    param_1[0x1fe] = 0;
    param_1[0x1ff] = 0;
    param_1[0x200] = 0;
    param_1[0x201] = 0;
    param_1[0x206] = 0;
    param_1[0x207] = 0;
    param_1[0x208] = 0;
    param_1[0x209] = 0;
    param_1[0x20a] = 0x80;
    param_1[0x20b] = 0x3f;
    param_1[0x20c] = 0;
    param_1[0x20d] = 0;
    param_1[0x20e] = 0;
    param_1[0x20f] = 0;
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x210);
    *param_1 = (byte)param_2;
  }
  if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_7153f250
// Entry: 0x7153f250 | Size: 288 bytes
// =========================================================================

undefined4 FUN_7153f250(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_3 < 0x11) {
    psVar7 = (short *)(param_1 + 0x10);
    sVar1 = psVar7[param_3 * 9];
    if ((sVar1 != -1) && (iVar2 = FUN_7154a83c(param_2,sVar1), iVar2 != 0)) {
      if (param_4 == 0xffff) {
        uVar11 = 0xffff;
      }
      else {
        uVar3 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200) >> 2) * 0x286bca1b;
        uVar11 = param_4;
        if (uVar3 < param_4 || uVar3 - param_4 == 0) {
          return 0;
        }
      }
      sVar1 = psVar7[param_3 * 9];
      puVar8 = (undefined4 *)(iVar2 + 0xa1);
      iVar4 = 0x11;
      do {
        if (*psVar7 == sVar1) {
          psVar7[2] = (short)param_4;
          iVar10 = *(int *)(iVar2 + 200);
          puVar5 = puVar8;
          if (((iVar10 != 0) &&
              (uVar3 = (*(int *)(iVar2 + 0xcc) - iVar10 >> 2) * 0x286bca1b,
              uVar11 <= uVar3 && uVar3 - uVar11 != 0)) &&
             (iVar10 = uVar11 * 0x4c + iVar10, *(char *)(iVar10 + 0x24) != '\0')) {
            puVar5 = (undefined4 *)(iVar10 + 0x26);
          }
          uVar9 = *puVar5;
          uVar6 = puVar5[1];
          *(undefined4 *)(psVar7 + 7) = puVar5[2];
          *(undefined4 *)(psVar7 + 5) = uVar6;
          *(undefined4 *)(psVar7 + 3) = uVar9;
        }
        psVar7 = psVar7 + 9;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return 1;
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7153f3a4
// Entry: 0x7153f3a4 | Size: 164 bytes
// =========================================================================

bool FUN_7153f3a4(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_7155609c();
  if (uVar1 != 10) {
    uVar4 = *(uint *)(param_1 + 0x20c);
    if (9 < uVar4) {
      uVar4 = 10;
    }
    if (uVar1 + 1 < uVar4) {
      iVar3 = ~uVar1 + uVar4;
      puVar2 = (undefined4 *)(param_1 + uVar1 * 0x14 + 0x144);
      do {
        iVar3 = iVar3 + -1;
        *puVar2 = puVar2[5];
        puVar2[1] = puVar2[6];
        puVar2[2] = puVar2[7];
        puVar2[3] = puVar2[8];
        puVar2[4] = puVar2[9];
        puVar2 = puVar2 + 5;
      } while (iVar3 != 0);
    }
    *(uint *)(param_1 + 0x20c) = uVar4 - 1;
    param_1 = param_1 + (uVar4 - 1) * 0x14;
    *(undefined2 *)(param_1 + 0x144) = 0xffff;
    *(undefined4 *)(param_1 + 0x146) = 0;
    *(undefined4 *)(param_1 + 0x14a) = 0;
    *(undefined4 *)(param_1 + 0x14e) = 0;
    *(undefined2 *)(param_1 + 0x152) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
  }
  return uVar1 != 10;
}


// =========================================================================
// Function: FUN_7153f47c
// Entry: 0x7153f47c | Size: 1160 bytes
// =========================================================================

uint FUN_7153f47c(byte *param_1,undefined4 param_2,undefined2 *param_3,uint param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  byte *extraout_r3;
  byte *extraout_r3_00;
  byte *extraout_r3_01;
  byte *pbVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  bool bVar17;
  uint *puStack_30;
  
  uVar14 = 0;
  if (1 < *param_1) {
    if (param_3 == (undefined2 *)0x0) {
      uVar14 = 1;
      if (10 < *(uint *)(param_1 + 0x20c)) {
        uVar14 = 2;
      }
      goto LAB_7153f528;
    }
    uVar14 = 1;
    if (param_4 != 0) {
      param_3[1] = 0xffff;
      *param_3 = 0x110a;
    }
  }
  if (10 < *(uint *)(param_1 + 0x20c)) {
    if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
      param_3[uVar14 * 2] = 0x1107;
      (param_3 + uVar14 * 2)[1] = 0xffff;
    }
    uVar14 = uVar14 + 1;
  }
LAB_7153f528:
  puStack_30 = (uint *)(param_1 + 0x20c);
  uVar16 = 0;
  pbVar13 = param_1;
  do {
    puVar15 = (ushort *)((int)(param_1 + 0x10) + uVar16 * 9 * 2);
    pbVar7 = (byte *)(uint)*puVar15;
    if (pbVar7 == &DAT_0000ffff) goto LAB_7153f540;
    bVar3 = (byte)uVar16;
    if (uVar16 == 0) {
      iVar5 = FUN_7154a83c(param_2);
      pbVar13 = extraout_r3_00;
      if (iVar5 != 0) {
        bVar17 = true;
        goto LAB_7153f5e8;
      }
LAB_7153f798:
      if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
        uVar1 = *puVar15;
        puVar11 = param_3 + uVar14 * 2;
        *(undefined1 *)puVar11 = 1;
        puVar11[1] = uVar1;
        *(byte *)((int)puVar11 + 1) = bVar3;
      }
LAB_7153f53c:
      uVar14 = uVar14 + 1;
    }
    else if ((byte *)(uint)*(ushort *)(param_1 + 0x10) == pbVar7) {
      iVar5 = FUN_7154a83c(param_2);
      pbVar13 = extraout_r3;
      if (iVar5 != 0) {
        bVar17 = false;
LAB_7153f5e8:
        pbVar13 = (byte *)0x1;
        if ((*(uint *)(iVar5 + 0xc) >> (uVar16 & 0xff) & 1) == 0) {
          if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
            uVar1 = *puVar15;
            pbVar13 = (byte *)(param_3 + uVar14 * 2);
            *pbVar13 = 2;
            *(ushort *)(pbVar13 + 2) = uVar1;
            pbVar13[1] = bVar3;
          }
          uVar14 = uVar14 + 1;
        }
        if (bVar17) {
          if (*param_1 < 2) {
            iVar9 = iVar5 + (uint)*param_1 * 0xc;
            pbVar13 = (byte *)(iVar9 + 0x10);
            puVar10 = (uint *)(iVar9 + 0x14);
            if (*(char *)(iVar5 + 0x38) == '\x01') {
              pbVar13 = (byte *)(iVar5 + 0x3c);
              puVar10 = (uint *)(iVar5 + 0x40);
            }
            uVar12 = *puVar10;
            if ((*pbVar13 & 1) == 0) {
              uVar12 = (uint)(*pbVar13 >> 1);
            }
            if (uVar12 == 0) goto LAB_7153f684;
          }
          else {
LAB_7153f684:
            if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
              uVar1 = *puVar15;
              puVar11 = param_3 + uVar14 * 2;
              *(undefined1 *)puVar11 = 3;
              puVar11[1] = uVar1;
              *(byte *)((int)puVar11 + 1) = bVar3;
            }
            uVar14 = uVar14 + 1;
          }
          if ((*(uint *)(iVar5 + 0x34) & ~*(uint *)(iVar5 + 0x30)) != 0) {
            if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
              uVar1 = *puVar15;
              puVar11 = param_3 + uVar14 * 2;
              *(undefined1 *)puVar11 = 8;
              puVar11[1] = uVar1;
              *(byte *)((int)puVar11 + 1) = bVar3;
            }
            uVar14 = uVar14 + 1;
          }
          pbVar7 = (byte *)(uint)puVar15[2];
          pbVar13 = &DAT_0000ffff;
          if ((pbVar7 != &DAT_0000ffff) &&
             (pbVar13 = (byte *)((*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200) >> 2) * 0x286bca1b)
             , pbVar13 < pbVar7 || (int)pbVar13 - (int)pbVar7 == 0)) {
            if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
              uVar1 = *puVar15;
              pbVar13 = (byte *)(param_3 + uVar14 * 2);
              *pbVar13 = 0xb;
              *(ushort *)(pbVar13 + 2) = uVar1;
              pbVar13[1] = bVar3;
            }
            uVar14 = uVar14 + 1;
          }
        }
        if (((uVar16 & 0x17) != 1) && (*(char *)(iVar5 + 0x38) == '\x01')) {
          if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
            pbVar13 = &DAT_00000009;
            uVar1 = *puVar15;
            puVar11 = param_3 + uVar14 * 2;
            *(undefined1 *)puVar11 = 9;
            puVar11[1] = uVar1;
            *(byte *)((int)puVar11 + 1) = bVar3;
          }
          goto LAB_7153f53c;
        }
      }
    }
    else {
      puVar6 = (ushort *)(param_1 + 0x22);
      uVar12 = 1;
      do {
        uVar8 = uVar12;
        uVar12 = uVar8;
        if (uVar16 != uVar8) {
          pbVar13 = (byte *)(uint)*puVar6;
          uVar12 = uVar8 + 1;
          puVar6 = puVar6 + 9;
        }
      } while (uVar16 != uVar8 && pbVar13 != pbVar7);
      bVar17 = uVar16 <= uVar8;
      iVar5 = FUN_7154a83c(param_2);
      if (iVar5 != 0) goto LAB_7153f5e8;
      pbVar13 = extraout_r3_01;
      if (uVar16 <= uVar8) goto LAB_7153f798;
    }
LAB_7153f540:
    uVar16 = uVar16 + 1;
    if (uVar16 == 0x11) {
      if (*puStack_30 != 0) {
        uVar16 = 0;
        do {
          pbVar13 = param_1 + 0x144 + uVar16 * 0x14;
          if (*(short *)pbVar13 != -1) {
            iVar5 = FUN_7154aae0(param_2);
            if (iVar5 == 0) {
              if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
                sVar4 = *(short *)pbVar13;
                puVar11 = param_3 + uVar14 * 2;
                *puVar11 = 0x1104;
LAB_7153f7f0:
                puVar11[1] = sVar4;
              }
LAB_7153f7f4:
              uVar14 = uVar14 + 1;
            }
            else {
              if (*(int *)(iVar5 + 0xc) == 0) {
                if ((param_3 != (undefined2 *)0x0) && (uVar14 < param_4)) {
                  uVar2 = *(undefined2 *)pbVar13;
                  param_3[uVar14 * 2] = 0x1105;
                  (param_3 + uVar14 * 2)[1] = uVar2;
                }
                uVar14 = uVar14 + 1;
              }
              if (uVar16 != 0) {
                sVar4 = *(short *)pbVar13;
                pbVar13 = param_1 + 0x144;
                uVar12 = uVar16;
                do {
                  if (*(short *)pbVar13 == sVar4) {
                    if ((param_3 == (undefined2 *)0x0) || (param_4 <= uVar14)) goto LAB_7153f7f4;
                    puVar11 = param_3 + uVar14 * 2;
                    *puVar11 = 0x1106;
                    goto LAB_7153f7f0;
                  }
                  uVar12 = uVar12 - 1;
                  pbVar13 = pbVar13 + 0x14;
                } while (uVar12 != 0);
              }
            }
          }
          bVar17 = 7 < uVar16;
          if (uVar16 < 9) {
            uVar16 = uVar16 + 1;
            bVar17 = *puStack_30 <= uVar16;
          }
        } while (!bVar17);
      }
      return uVar14;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_7153f98c
// Entry: 0x7153f98c | Size: 588 bytes
// =========================================================================

undefined4 FUN_7153f98c(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = imp_strcmp(&DAT_70063383,param_1);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = imp_strcmp(s_beard_7006a3be,param_1);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = imp_strcmp(&DAT_7006bfac,param_1);
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        iVar2 = imp_strcmp(s_glasses_700621bc,param_1);
        if (iVar2 == 0) {
          uVar1 = 3;
        }
        else {
          iVar2 = imp_strcmp(&DAT_7006d030,param_1);
          if (iVar2 == 0) {
            uVar1 = 4;
          }
          else {
            iVar2 = imp_strcmp(&DAT_7006dd7e,param_1);
            if (iVar2 == 0) {
              uVar1 = 5;
            }
            else {
              iVar2 = imp_strcmp(s_bottom_7006b8a6,param_1);
              if (iVar2 == 0) {
                uVar1 = 6;
              }
              else {
                iVar2 = imp_strcmp(s_shoes_70063e05,param_1);
                if (iVar2 == 0) {
                  uVar1 = 7;
                }
                else {
                  iVar2 = imp_strcmp(s_hands_70070976,param_1);
                  if (iVar2 == 0) {
                    uVar1 = 8;
                  }
                  else {
                    iVar2 = imp_strcmp(s_skin_layer_7006ae7d,param_1);
                    if (iVar2 == 0) {
                      uVar1 = 9;
                    }
                    else {
                      iVar2 = imp_strcmp(s_acc_neck_700621c4,param_1);
                      if (iVar2 == 0) {
                        uVar1 = 10;
                      }
                      else {
                        iVar2 = imp_strcmp(s_acc_chest_7006b8ad,param_1);
                        if (iVar2 == 0) {
                          uVar1 = 0xb;
                        }
                        else {
                          iVar2 = imp_strcmp(s_acc_belt_7006dd82,param_1);
                          if (iVar2 == 0) {
                            uVar1 = 0xc;
                          }
                          else {
                            iVar2 = imp_strcmp(s_acc_shoulder_l_70066d43,param_1);
                            if (iVar2 == 0) {
                              uVar1 = 0xd;
                            }
                            else {
                              iVar2 = imp_strcmp(s_acc_shoulder_r_7006ae88,param_1);
                              if (iVar2 == 0) {
                                uVar1 = 0xe;
                              }
                              else {
                                iVar2 = imp_strcmp(s_acc_back_70061285,param_1);
                                if (iVar2 == 0) {
                                  uVar1 = 0xf;
                                }
                                else {
                                  iVar2 = imp_strcmp(s_acc_hands_70065cf8,param_1);
                                  if (iVar2 != 0) {
                                    return 0;
                                  }
                                  uVar1 = 0x10;
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
  *param_2 = uVar1;
  return 1;
}


// =========================================================================
// Function: FUN_7153ffec
// Entry: 0x7153ffec | Size: 220 bytes
// =========================================================================

undefined * FUN_7153ffec(void)

{
  int iVar1;
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a38dc & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a38dc), iVar1 != 0)) {
    imp___aeabi_memclr8(&DAT_711a3838,0x4c);
    DAT_711a3884 = 0x3f800000;
    DAT_711a3888 = 0;
    DAT_711a388c = 0;
    DAT_711a3890 = 0;
    DAT_711a3894 = 0;
    DAT_711a3898 = 0x3f800000;
    DAT_711a389c = 0;
    DAT_711a38a0 = 0;
    DAT_711a38a4 = 0;
    DAT_711a38a8 = 0;
    DAT_711a38ac = 0x3f800000;
    DAT_711a38b0 = 0;
    DAT_711a38b4 = 0;
    DAT_711a38b8 = 0;
    DAT_711a38bc = 0;
    DAT_711a38c0 = 0x3f800000;
    DAT_711a38d4 = 0x3f800000;
    DAT_711a38d8 = 0;
    DAT_711a38c4 = 0;
    DAT_711a38c8 = 0;
    DAT_711a38cc = 0;
    DAT_711a38d0 = 0;
    thunk_raw_10ab3090(FUN_71540230,&DAT_711a3838,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a38dc);
  }
  return &DAT_711a3838;
}


// =========================================================================
// Function: FUN_71540230
// Entry: 0x71540230 | Size: 824 bytes
// =========================================================================

undefined4 * FUN_71540230(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  
  piVar1 = (int *)param_1[0x25];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if ((*(byte *)(piVar1 + 2) & 1) != 0) {
      thunk_qNQrlu(piVar1[4]);
    }
    thunk_qNQrlu(piVar1);
    piVar1 = (int *)iVar2;
  }
  iVar2 = param_1[0x23];
  param_1[0x23] = 0;
  if (iVar2 != 0) {
    thunk_qNQrlu();
  }
  piVar1 = (int *)param_1[0x20];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if ((*(byte *)(piVar1 + 2) & 1) != 0) {
      thunk_qNQrlu(piVar1[4]);
    }
    thunk_qNQrlu(piVar1);
    piVar1 = (int *)iVar2;
  }
  iVar2 = param_1[0x1e];
  param_1[0x1e] = 0;
  if (iVar2 != 0) {
    thunk_qNQrlu();
  }
  piVar1 = (int *)param_1[0x1b];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if ((*(byte *)(piVar1 + 2) & 1) != 0) {
      thunk_qNQrlu(piVar1[4]);
    }
    thunk_qNQrlu(piVar1);
    piVar1 = (int *)iVar2;
  }
  iVar2 = param_1[0x19];
  param_1[0x19] = 0;
  if (iVar2 != 0) {
    thunk_qNQrlu();
  }
  piVar1 = (int *)param_1[0x16];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if ((*(byte *)(piVar1 + 2) & 1) != 0) {
      thunk_qNQrlu(piVar1[4]);
    }
    thunk_qNQrlu(piVar1);
    piVar1 = (int *)iVar2;
  }
  iVar2 = param_1[0x14];
  param_1[0x14] = 0;
  if (iVar2 != 0) {
    thunk_qNQrlu();
  }
  piVar1 = (int *)param_1[0x11];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if ((*(byte *)(piVar1 + 2) & 1) != 0) {
      thunk_qNQrlu(piVar1[4]);
    }
    thunk_qNQrlu(piVar1);
    piVar1 = (int *)iVar2;
  }
  iVar2 = param_1[0xf];
  param_1[0xf] = 0;
  if (iVar2 != 0) {
    thunk_qNQrlu();
  }
  pbVar5 = (byte *)param_1[0xc];
  if (pbVar5 != (byte *)0x0) {
    pbVar7 = pbVar5;
    pbVar4 = (byte *)param_1[0xd];
    if ((byte *)param_1[0xd] != pbVar5) {
      do {
        if ((pbVar4[-0x1c] & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar4 + -0x14));
        }
        pbVar7 = pbVar4 + -0x2c;
        if ((*pbVar7 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar4 + -0x24));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = (byte *)param_1[0xc];
    }
    param_1[0xd] = pbVar5;
    thunk_qNQrlu(pbVar7);
  }
  iVar2 = param_1[9];
  if (iVar2 != 0) {
    iVar6 = param_1[10];
    iVar3 = iVar2;
    if (iVar6 != iVar2) {
      do {
        iVar6 = iVar6 + -0x2c;
        FUN_7154becc(param_1 + 0xb,iVar6);
      } while (iVar6 != iVar2);
      iVar3 = param_1[9];
    }
    param_1[10] = iVar2;
    thunk_qNQrlu(iVar3);
  }
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    iVar6 = param_1[7];
    iVar3 = iVar2;
    if (iVar6 != iVar2) {
      do {
        iVar6 = iVar6 + -0x2c;
        FUN_7154bd84(param_1 + 8,iVar6);
      } while (iVar6 != iVar2);
      iVar3 = param_1[6];
    }
    param_1[7] = iVar2;
    thunk_qNQrlu(iVar3);
  }
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    iVar6 = param_1[4];
    iVar3 = iVar2;
    if (iVar6 != iVar2) {
      do {
        iVar6 = FUN_7154a05c(iVar6 + -0xf8);
      } while (iVar6 != iVar2);
      iVar3 = param_1[3];
    }
    param_1[4] = iVar2;
    thunk_qNQrlu(iVar3);
  }
  pbVar5 = (byte *)*param_1;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = (byte *)param_1[1];
    pbVar7 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar7 = pbVar4 + -0xc;
        if ((*pbVar7 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar4 + -4));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = (byte *)*param_1;
    }
    param_1[1] = pbVar5;
    thunk_qNQrlu(pbVar7);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71540858
// Entry: 0x71540858 | Size: 440 bytes
// =========================================================================

bool FUN_71540858(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  byte abStack_38 [8];
  uint uStack_30;
  uint auStack_2c [2];
  undefined4 uStack_24;
  
  FUN_714bbb04(auStack_2c,param_1);
  FUN_714bab0c(abStack_38,auStack_2c);
  if ((auStack_2c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  uVar1 = uStack_30;
  if ((abStack_38[0] & 1) == 0) {
    uVar1 = (uint)abStack_38 | 1;
  }
  iVar2 = imp_fopen(uVar1,&DAT_70068f6e);
  if (iVar2 != 0) {
    imp_fseek(iVar2,0,2);
    iVar3 = imp_ftell(iVar2);
    imp_fseek(iVar2,0,0);
    if (iVar3 < 1) {
      imp_fclose(iVar2);
    }
    else {
      thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
                (param_2,iVar3,0);
      pbVar4 = *(byte **)(param_2 + 8);
      if ((*param_2 & 1) == 0) {
        pbVar4 = param_2 + 1;
      }
      bVar6 = true;
      iVar5 = imp_fread(pbVar4,1,iVar3,iVar2);
      imp_fclose(iVar2);
      if (iVar5 == iVar3) goto LAB_715409f0;
    }
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
  }
  bVar6 = false;
  auStack_2c[0] = 0;
  iVar2 = FUN_714c5f6c(0,auStack_2c,param_1,0);
  if ((iVar2 == 0) && (auStack_2c[0] != 0)) {
    iVar2 = FUN_714c8774();
    bVar6 = 0 < iVar2;
    if (0 < iVar2) {
      thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
                (param_2,iVar2,0);
      pbVar4 = *(byte **)(param_2 + 8);
      if ((*param_2 & 1) == 0) {
        pbVar4 = param_2 + 1;
      }
      FUN_714c5410(auStack_2c[0],pbVar4,iVar2);
    }
    FUN_714c82ec(auStack_2c[0]);
  }
LAB_715409f0:
  if ((abStack_38[0] & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  return bVar6;
}


// =========================================================================
// Function: FUN_71540c24
// Entry: 0x71540c24 | Size: 17144 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 71540c24: process: timeout


// =========================================================================
// Function: FUN_715475c8
// Entry: 0x715475c8 | Size: 392 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715475c8(undefined1 *param_1,byte *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int aiStack_c8 [4];
  int *piStack_b8;
  int aiStack_b0 [4];
  int *piStack_a0;
  int iStack_70;
  int iStack_6c;
  byte bStack_64;
  undefined4 uStack_5c;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar4 = *(uint *)(param_2 + 4);
  pbVar5 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar4 = (uint)(*param_2 >> 1);
  }
  piStack_b8 = (int *)param_3[4];
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  if (piStack_b8 == (int *)0x0) {
    piStack_b8 = (int *)0x0;
  }
  else if (piStack_b8 == param_3) {
    piStack_b8 = aiStack_c8;
    (**(code **)(*param_3 + 0xc))(param_3,piStack_b8,pbVar5 + uVar4);
  }
  else {
    param_3[4] = 0;
  }
  piVar1 = aiStack_b0;
  piVar2 = aiStack_c8;
  FUN_71530230(piVar1,pbVar5,pbVar5 + uVar4,piVar2,param_4,param_5,param_6);
  FUN_715304bc(piVar1,1,param_1);
  if ((bStack_64 & 1) != 0) {
    thunk_qNQrlu(uStack_5c);
  }
  if (iStack_70 != 0) {
    iStack_6c = iStack_70;
    thunk_qNQrlu();
  }
  if (piStack_a0 == piVar1) {
    iVar3 = 0x10;
LAB_715476f0:
    (**(code **)(*piVar1 + iVar3))();
  }
  else {
    iVar3 = 0x14;
    piVar1 = piStack_a0;
    if (piStack_a0 != (int *)0x0) goto LAB_715476f0;
  }
  if (piStack_b8 == piVar2) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piStack_b8;
    if (piStack_b8 == (int *)0x0) goto LAB_7154772c;
  }
  (**(code **)(*piVar2 + iVar3))();
LAB_7154772c:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71547834
// Entry: 0x71547834 | Size: 396 bytes
// =========================================================================

undefined4 FUN_71547834(char *param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    piVar7 = (int *)0x0;
    piVar5 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar6 = (int *)*piVar5;
    piVar2 = piVar5;
    if (piVar6 != (int *)0x0) {
      do {
        iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar6 + 4,param_2);
        if (-1 < iVar1) {
          piVar2 = piVar6;
        }
        piVar6 = (int *)piVar6[-(iVar1 >> 0x1f)];
      } while (piVar6 != (int *)0x0);
      if ((piVar2 != piVar5) &&
         (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar2 + 4,param_2), iVar1 < 1)) {
        piVar5 = piVar2;
      }
    }
  }
  else {
    if (cVar3 != '\x02') {
      bVar4 = true;
      piVar5 = (int *)0x0;
      piVar7 = (int *)0x0;
      goto joined_r0x715478d8;
    }
    piVar7 = *(int **)(*(int *)(param_1 + 8) + 4);
    piVar5 = (int *)0x0;
  }
  cVar3 = *param_1;
  bVar4 = false;
joined_r0x715478d8:
  if (cVar3 == '\x02') {
    cVar3 = '\x02';
    piVar2 = piVar7;
    if (piVar7 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
  }
  else {
    if (cVar3 != '\x01') {
      if (!bVar4) {
                    /* WARNING: Subroutine does not return */
        imp_abort(0);
      }
      return 0;
    }
    if (piVar5 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
    cVar3 = '\x01';
    piVar2 = piVar5 + 8;
  }
  if ((char)*piVar2 != '\x03') {
    return 0;
  }
  if (cVar3 != '\x02') {
    if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar7 = piVar5 + 8;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  if ((char)*piVar7 != '\x03') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&uStack_30,piVar7[2]);
  if ((*param_3 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_3 + 8));
  }
  *(undefined4 *)param_3 = uStack_30;
  *(undefined4 *)(param_3 + 4) = uStack_2c;
  *(undefined4 *)(param_3 + 8) = uStack_28;
  return 1;
}


// =========================================================================
// Function: FUN_71547a9c
// Entry: 0x71547a9c | Size: 884 bytes
// =========================================================================

void FUN_71547a9c(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  int *piStack_4c;
  int *piStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  cVar4 = *param_1;
  if (cVar4 == '\x01') {
    piVar10 = (int *)0x0;
    piVar8 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar6 = (int *)*piVar8;
    piVar7 = piVar8;
    if (piVar6 != (int *)0x0) {
      do {
        iVar5 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar6 + 4,param_2);
        if (-1 < iVar5) {
          piVar7 = piVar6;
        }
        piVar6 = (int *)piVar6[-(iVar5 >> 0x1f)];
      } while (piVar6 != (int *)0x0);
      if ((piVar7 != piVar8) &&
         (iVar5 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar7 + 4,param_2), iVar5 < 1)) {
        piVar8 = piVar7;
      }
    }
LAB_71547b38:
    cVar4 = *param_1;
    bVar11 = false;
    piVar7 = piVar10;
    if (cVar4 != '\x02') goto LAB_71547b48;
LAB_71547b80:
    piVar7 = piVar10;
    if (piVar10 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return;
    }
  }
  else {
    if (cVar4 == '\x02') {
      piVar10 = *(int **)(*(int *)(param_1 + 8) + 4);
      piVar8 = (int *)0x0;
      goto LAB_71547b38;
    }
    bVar11 = true;
    piVar8 = (int *)0x0;
    piVar10 = (int *)0x0;
    piVar7 = piVar10;
    if (cVar4 == '\x02') goto LAB_71547b80;
LAB_71547b48:
    if (cVar4 != '\x01') {
      if (bVar11) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    if (piVar8 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return;
    }
    piVar10 = piVar8 + 8;
    cVar4 = '\x01';
  }
  if ((char)*piVar10 != '\x02') {
    return;
  }
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar7 = piVar8 + 8;
  }
  cVar4 = (char)*piVar7;
  iStack_44 = 1;
  if (cVar4 == '\0') {
    iVar5 = 1;
LAB_71547c5c:
    piVar10 = (int *)0x0;
    piStack_48 = (int *)0x0;
  }
  else {
    if (cVar4 != '\x02') {
      if (cVar4 == '\x01') {
        iVar5 = -0x80000000;
        piVar10 = (int *)0x0;
        piStack_4c = (undefined4 *)piVar7[2] + 1;
        piVar8 = *(int **)piVar7[2];
        iStack_44 = -0x80000000;
        piStack_48 = (int *)0x0;
        goto LAB_71547c68;
      }
      iVar5 = 0;
      goto LAB_71547c5c;
    }
    iVar5 = -0x80000000;
    piVar10 = *(int **)piVar7[2];
    piStack_48 = (int *)((undefined4 *)piVar7[2])[1];
    iStack_44 = -0x80000000;
  }
  piVar8 = (int *)0x0;
  piStack_4c = (int *)0x0;
LAB_71547c68:
  do {
    while (cVar4 == '\x01') {
      if (piVar8 == piStack_4c) {
        return;
      }
      piVar6 = piVar8 + 8;
LAB_71547cac:
      if ((char)*piVar6 != '\x01') goto LAB_71547d64;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      iVar1 = FUN_71547834(piVar6,&DAT_7006c824,&uStack_40);
      if (iVar1 != 0) {
        FUN_71547834(piVar6,s_texture_7006b89e,&uStack_34);
        puVar2 = *(uint **)(param_3 + 4);
        if (puVar2 < *(uint **)(param_3 + 8)) {
          *puVar2 = uStack_40;
          puVar2[1] = uStack_3c;
          puVar2[2] = uStack_38;
          puVar3 = puVar2 + 6;
          uStack_40 = 0;
          puVar2[3] = uStack_34;
          puVar2[4] = uStack_30;
          puVar2[5] = uStack_2c;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_3c = 0;
          uStack_38 = 0;
        }
        else {
          puVar3 = (uint *)FUN_7154ab24(param_3,&uStack_40);
        }
        *(uint **)(param_3 + 4) = puVar3;
      }
      if ((uStack_34 & 1) != 0) {
        thunk_qNQrlu(uStack_2c);
      }
      if ((uStack_40 & 1) != 0) {
        thunk_qNQrlu(uStack_38);
      }
      cVar4 = (char)*piVar7;
      if (cVar4 == '\x02') goto LAB_71547c74;
LAB_71547db4:
      if (cVar4 == '\x01') {
        piVar6 = (int *)piVar8[1];
        piVar9 = piVar8;
        if ((int *)piVar8[1] == (int *)0x0) {
          do {
            piVar8 = (int *)piVar9[2];
            bVar11 = (int *)*piVar8 != piVar9;
            piVar9 = piVar8;
          } while (bVar11);
        }
        else {
          do {
            piVar8 = piVar6;
            piVar6 = (int *)*piVar8;
          } while ((int *)*piVar8 != (int *)0x0);
        }
      }
      else {
        iVar5 = iVar5 + 1;
      }
    }
    if (cVar4 == '\x02') {
      piVar6 = piVar10;
      if (piVar10 == piStack_48) {
        return;
      }
      goto LAB_71547cac;
    }
    if (iVar5 == iStack_44) {
      return;
    }
    if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
LAB_71547d64:
    if (cVar4 != '\x02') goto LAB_71547db4;
LAB_71547c74:
    piVar10 = piVar10 + 4;
  } while( true );
}


// =========================================================================
// Function: FUN_71547f9c
// Entry: 0x71547f9c | Size: 848 bytes
// =========================================================================

uint FUN_71547f9c(char *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  uint uStack_4c;
  int iStack_48;
  int *piStack_44;
  int *piStack_40;
  uint auStack_30 [3];
  
  cVar4 = *param_1;
  if (cVar4 == '\x01') {
    piVar12 = (int *)0x0;
    piVar7 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar9 = (int *)*piVar7;
    piVar6 = piVar7;
    if (piVar9 != (int *)0x0) {
      do {
        iVar8 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar9 + 4,param_2);
        if (-1 < iVar8) {
          piVar6 = piVar9;
        }
        piVar9 = (int *)piVar9[-(iVar8 >> 0x1f)];
      } while (piVar9 != (int *)0x0);
      if ((piVar6 != piVar7) &&
         (iVar8 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar6 + 4,param_2), iVar8 < 1)) {
        piVar7 = piVar6;
      }
      piVar12 = (int *)0x0;
    }
LAB_71548034:
    cVar4 = *param_1;
    bVar14 = false;
    piVar6 = piVar12;
    if (cVar4 != '\x02') goto LAB_71548044;
LAB_71548078:
    piVar6 = piVar12;
    if (piVar12 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
  }
  else {
    if (cVar4 == '\x02') {
      piVar7 = (int *)0x0;
      piVar12 = *(int **)(*(int *)(param_1 + 8) + 4);
      goto LAB_71548034;
    }
    bVar14 = true;
    piVar7 = (int *)0x0;
    piVar12 = (int *)0x0;
    piVar6 = piVar12;
    if (cVar4 == '\x02') goto LAB_71548078;
LAB_71548044:
    if (cVar4 != '\x01') {
      if (bVar14) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      imp_abort(0);
    }
    if (piVar7 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
    piVar12 = piVar7 + 8;
    cVar4 = '\x01';
  }
  if ((char)*piVar12 != '\x02') {
    return 0;
  }
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort(0);
    }
    piVar6 = piVar7 + 8;
  }
  cVar4 = (char)*piVar6;
  iStack_48 = 1;
  piVar7 = (int *)0x0;
  piVar12 = (int *)0x0;
  iVar8 = 1;
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x0;
  if (cVar4 != '\0') {
    if (cVar4 == '\x02') {
      iVar8 = -0x80000000;
      piVar12 = *(int **)piVar6[2];
      piStack_40 = (int *)((undefined4 *)piVar6[2])[1];
      iStack_48 = -0x80000000;
    }
    else {
      if (cVar4 == '\x01') {
        iVar8 = -0x80000000;
        piStack_44 = (undefined4 *)piVar6[2] + 1;
        piVar7 = *(int **)piVar6[2];
        iStack_48 = -0x80000000;
        piStack_40 = (int *)0x0;
        goto LAB_7154816c;
      }
      iVar8 = 0;
      iStack_48 = 1;
      piStack_40 = (int *)0x0;
    }
    piStack_44 = (int *)0x0;
  }
LAB_7154816c:
  uStack_4c = 0;
  do {
    if (cVar4 == '\x01') {
      if (piVar7 == piStack_44) {
        return uStack_4c;
      }
      piVar9 = piVar7 + 8;
LAB_715481ac:
      cVar5 = (char)*piVar9;
    }
    else {
      if (cVar4 == '\x02') {
        piVar9 = piVar12;
        if (piVar12 == piStack_40) {
          return uStack_4c;
        }
        goto LAB_715481ac;
      }
      if (iVar8 == iStack_48) {
        return uStack_4c;
      }
      if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      piVar9 = piVar6;
      cVar5 = cVar4;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
    }
    if (cVar5 == '\x03') {
      auStack_30[2] = 0;
      auStack_30[1] = 0;
      auStack_30[0] = 0;
      thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                (auStack_30,piVar9[2]);
      uVar2 = auStack_30[2];
      uVar1 = auStack_30[0];
      uVar10 = auStack_30[2];
      if ((auStack_30[0] & 1) == 0) {
        uVar10 = (uint)auStack_30 | 1;
      }
      if (uVar10 != 0) {
        uVar11 = 0;
        do {
          iVar3 = imp_strcmp((&DAT_70b0ea7c)[uVar11],uVar10);
          if (iVar3 == 0) {
            uStack_4c = uStack_4c | 1 << (uVar11 & 0xff);
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x1e);
      }
      if ((uVar1 & 1) != 0) {
        thunk_qNQrlu(uVar2);
      }
      cVar4 = (char)*piVar6;
    }
    if (cVar4 == '\x02') {
      piVar12 = piVar12 + 4;
    }
    else if (cVar4 == '\x01') {
      piVar9 = (int *)piVar7[1];
      piVar13 = piVar7;
      if ((int *)piVar7[1] == (int *)0x0) {
        do {
          piVar7 = (int *)piVar13[2];
          bVar14 = (int *)*piVar7 != piVar13;
          piVar13 = piVar7;
        } while (bVar14);
      }
      else {
        do {
          piVar7 = piVar9;
          piVar9 = (int *)*piVar7;
        } while ((int *)*piVar7 != (int *)0x0);
      }
    }
    else {
      iVar8 = iVar8 + 1;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_71548420
// Entry: 0x71548420 | Size: 356 bytes
// =========================================================================

undefined4 FUN_71548420(char *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    piVar7 = (int *)0x0;
    piVar6 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar5 = (int *)*piVar6;
    piVar2 = piVar6;
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar5 + 4,param_2);
        if (-1 < iVar1) {
          piVar2 = piVar5;
        }
        piVar5 = (int *)piVar5[-(iVar1 >> 0x1f)];
      } while (piVar5 != (int *)0x0);
      if ((piVar2 != piVar6) &&
         (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar2 + 4,param_2), iVar1 < 1)) {
        piVar6 = piVar2;
      }
    }
  }
  else {
    if (cVar3 != '\x02') {
      bVar4 = true;
      piVar6 = (int *)0x0;
      piVar7 = (int *)0x0;
      goto joined_r0x715484c8;
    }
    piVar7 = *(int **)(*(int *)(param_1 + 8) + 4);
    piVar6 = (int *)0x0;
  }
  cVar3 = *param_1;
  bVar4 = false;
joined_r0x715484c8:
  if (cVar3 == '\x02') {
    cVar3 = '\x02';
    piVar2 = piVar7;
    if (piVar7 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
  }
  else {
    if (cVar3 != '\x01') {
      if (!bVar4) {
                    /* WARNING: Subroutine does not return */
        imp_abort(0);
      }
      return 0;
    }
    if (piVar6 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
    cVar3 = '\x01';
    piVar2 = piVar6 + 8;
  }
  if ((char)*piVar2 != '\x04') {
    return 0;
  }
  if (cVar3 != '\x02') {
    if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort(0);
    }
    piVar7 = piVar6 + 8;
  }
  if ((char)*piVar7 != '\x04') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  *param_3 = (char)piVar7[2];
  return 1;
}


// =========================================================================
// Function: FUN_71548628
// Entry: 0x71548628 | Size: 644 bytes
// =========================================================================

void FUN_71548628(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint auStack_28 [4];
  
  auStack_28[2] = 0;
  auStack_28[1] = 0;
  auStack_28[0] = 0;
  iVar1 = FUN_71547834(param_1,&DAT_7006907f,auStack_28);
  if (iVar1 != 0) {
    uVar3 = auStack_28[2];
    if ((auStack_28[0] & 1) == 0) {
      uVar3 = (uint)auStack_28 | 1;
    }
    if (uVar3 != 0) {
      iVar1 = imp_strcmp(&DAT_70067f6a,uVar3);
      if (iVar1 == 0) {
        puVar2 = &UNK_70b0eaf4;
      }
      else {
        iVar1 = imp_strcmp(&DAT_7006ae97,uVar3);
        if (iVar1 == 0) {
          puVar2 = &UNK_70b0eafc;
        }
        else {
          iVar1 = imp_strcmp(&DAT_7006c830,uVar3);
          if (iVar1 == 0) {
            puVar2 = &UNK_70b0eb04;
          }
          else {
            iVar1 = imp_strcmp(s_spine_70065d0d,uVar3);
            if (iVar1 == 0) {
              puVar2 = &UNK_70b0eb0c;
            }
            else {
              iVar1 = imp_strcmp(s_spine1_70063388,uVar3);
              if (iVar1 == 0) {
                puVar2 = &UNK_70b0eb14;
              }
              else {
                iVar1 = imp_strcmp(s_pelvis_7006769e,uVar3);
                if (iVar1 == 0) {
                  puVar2 = &UNK_70b0eb1c;
                }
                else {
                  iVar1 = imp_strcmp(s_l_clavicle_7006f6e2,uVar3);
                  if (iVar1 == 0) {
                    puVar2 = &UNK_70b0eb24;
                  }
                  else {
                    iVar1 = imp_strcmp(s_r_clavicle_7006c834,uVar3);
                    if (iVar1 == 0) {
                      puVar2 = &UNK_70b0eb2c;
                    }
                    else {
                      iVar1 = imp_strcmp(s_l_forearm_7006edeb,uVar3);
                      if (iVar1 == 0) {
                        puVar2 = &UNK_70b0eb34;
                      }
                      else {
                        iVar1 = imp_strcmp(s_r_forearm_700621e9,uVar3);
                        if (iVar1 == 0) {
                          puVar2 = &UNK_70b0eb3c;
                        }
                        else {
                          iVar1 = imp_strcmp(s_l_hand_7006edf5,uVar3);
                          if (iVar1 == 0) {
                            puVar2 = &UNK_70b0eb44;
                          }
                          else {
                            iVar1 = imp_strcmp(s_r_hand_7006a3cb,uVar3);
                            if (iVar1 == 0) {
                              puVar2 = &UNK_70b0eb4c;
                            }
                            else {
                              iVar1 = imp_strcmp(s_l_foot_7006d731,uVar3);
                              if (iVar1 == 0) {
                                puVar2 = &UNK_70b0eb54;
                              }
                              else {
                                iVar1 = imp_strcmp(s_r_foot_70064680,uVar3);
                                if (iVar1 != 0) goto LAB_71548854;
                                puVar2 = &UNK_70b0eb5c;
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
      *param_2 = *(undefined4 *)(puVar2 + 4);
    }
  }
LAB_71548854:
  FUN_7154ae10(param_1,s_offset_70070137,param_2 + 1);
  FUN_7154ae10(param_1,s_rotation_7006129e,param_2 + 4);
  FUN_7154ae10(param_1,s_scale_70066d5e,param_2 + 7);
  if ((auStack_28[0] & 1) != 0) {
    thunk_qNQrlu(auStack_28[2]);
  }
  return;
}


// =========================================================================
// Function: FUN_71548d58
// Entry: 0x71548d58 | Size: 92 bytes
// =========================================================================

undefined4 FUN_71548d58(undefined1 *param_1)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 4:
    break;
  case 5:
    uVar1 = FUN_71ba19d8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  case 6:
    uVar1 = FUN_71ba1c88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  case 7:
    uVar1 = FUN_71ba242c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return uVar1;
  default:
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  uVar1 = 0;
  if (param_1[8] != '\0') {
    uVar1 = 0x3f800000;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71548e4c
// Entry: 0x71548e4c | Size: 412 bytes
// =========================================================================

void FUN_71548e4c(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  
  cVar4 = *param_1;
  if (cVar4 == '\x01') {
    pbVar9 = (byte *)0x0;
    piVar8 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar6 = (int *)*piVar8;
    piVar7 = piVar8;
    if (piVar6 != (int *)0x0) {
      do {
        iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar6 + 4,param_2);
        if (-1 < iVar1) {
          piVar7 = piVar6;
        }
        piVar6 = (int *)piVar6[-(iVar1 >> 0x1f)];
      } while (piVar6 != (int *)0x0);
      if ((piVar7 != piVar8) &&
         (iVar1 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar7 + 4,param_2), iVar1 < 1)) {
        piVar8 = piVar7;
      }
    }
  }
  else {
    if (cVar4 != '\x02') {
      bVar5 = true;
      piVar8 = (int *)0x0;
      pbVar9 = (byte *)0x0;
      goto joined_r0x71548ef4;
    }
    pbVar9 = *(byte **)(*(int *)(param_1 + 8) + 4);
    piVar8 = (int *)0x0;
  }
  cVar4 = *param_1;
  bVar5 = false;
joined_r0x71548ef4:
  if (cVar4 == '\x02') {
    cVar4 = '\x02';
    pbVar2 = pbVar9;
    if (pbVar9 == *(byte **)(*(int *)(param_1 + 8) + 4)) {
      return;
    }
  }
  else {
    if (cVar4 != '\x01') {
      if (!bVar5) {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      return;
    }
    if (piVar8 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return;
    }
    cVar4 = '\x01';
    pbVar2 = (byte *)(piVar8 + 8);
  }
  if (2 < *pbVar2 - 5) {
    return;
  }
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    pbVar9 = (byte *)(piVar8 + 8);
  }
  switch(*pbVar9) {
  case 4:
    uVar3 = 0;
    if (pbVar9[8] != 0) {
      uVar3 = 0x3f800000;
    }
    break;
  case 5:
    uVar3 = FUN_71ba19d8(*(undefined4 *)(pbVar9 + 8),*(undefined4 *)(pbVar9 + 0xc));
    break;
  case 6:
    uVar3 = FUN_71ba1c88(*(undefined4 *)(pbVar9 + 8),*(undefined4 *)(pbVar9 + 0xc));
    break;
  case 7:
    uVar3 = FUN_71ba242c(*(undefined4 *)(pbVar9 + 8),*(undefined4 *)(pbVar9 + 0xc));
    break;
  default:
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  *param_3 = uVar3;
  return;
}


// =========================================================================
// Function: FUN_715490f0
// Entry: 0x715490f0 | Size: 184 bytes
// =========================================================================

void FUN_715490f0(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  param_1[3] = 0x80000000;
  cVar1 = *param_2;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  if (cVar1 == '\x01') {
    piVar3 = (int *)(*(int *)(param_2 + 8) + 4);
    piVar4 = (int *)*piVar3;
    param_1[1] = piVar3;
    piVar5 = piVar3;
    if (piVar4 != (int *)0x0) {
      do {
        iVar2 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar4 + 4,param_3);
        if (-1 < iVar2) {
          piVar5 = piVar4;
        }
        piVar4 = (int *)piVar4[-(iVar2 >> 0x1f)];
      } while (piVar4 != (int *)0x0);
      if ((piVar5 != piVar3) &&
         (iVar2 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar5 + 4,param_3), iVar2 < 1)) {
        piVar3 = piVar5;
      }
    }
    param_1[1] = piVar3;
    return;
  }
  if (cVar1 != '\x02') {
    param_1[3] = 1;
    return;
  }
  param_1[2] = *(undefined4 *)(*(int *)(param_2 + 8) + 4);
  return;
}


// =========================================================================
// Function: FUN_715491f8
// Entry: 0x715491f8 | Size: 1884 bytes
// =========================================================================

void FUN_715491f8(char *param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
                 int *param_5,int *param_6)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  int *piStack_5c;
  int *piStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_30;
  uint uStack_2c;
  int *piStack_28;
  
  piVar13 = (int *)0x0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar3 = FUN_71547834(param_1,&DAT_700710df,&uStack_30);
  if (iVar3 != 0) {
    uVar11 = uStack_2c;
    if ((uStack_30 & 1) == 0) {
      uVar11 = uStack_30 >> 1 & 0x7f;
    }
    if (uVar11 == 4) {
      piVar4 = piStack_28;
      if ((uStack_30 & 1) == 0) {
        piVar4 = (int *)((uint)&uStack_30 | 1);
      }
      if (*piVar4 == 0x656e6f6e) {
        uVar1 = 0;
LAB_715492f4:
        *param_2 = uVar1;
      }
    }
    else if (uVar11 == 5) {
      piVar4 = piStack_28;
      if ((uStack_30 & 1) == 0) {
        piVar4 = (int *)((uint)&uStack_30 | 1);
      }
      iVar3 = imp_memcmp(piVar4,s_whole_70065403,5);
      if (iVar3 == 0) {
        uVar1 = 2;
        goto LAB_715492f4;
      }
    }
    else if (uVar11 == 6) {
      piVar4 = piStack_28;
      if ((uStack_30 & 1) == 0) {
        piVar4 = (int *)((uint)&uStack_30 | 1);
      }
      iVar3 = imp_memcmp(piVar4,s_masked_7006dd8b,6);
      if (iVar3 == 0) {
        uVar1 = 1;
        goto LAB_715492f4;
      }
    }
  }
  FUN_7154b4a0(param_1,s_default_7006b8b7,param_3);
  FUN_71548420(param_1,&DAT_70065d13,param_4);
  cVar2 = *param_1;
  if (cVar2 == '\x01') {
    piVar10 = (int *)0x0;
    piVar13 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar12 = (int *)*piVar13;
    piVar4 = piVar13;
    if (piVar12 != (int *)0x0) {
      do {
        iVar3 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar12 + 4,s_palette_7007222f);
        if (-1 < iVar3) {
          piVar4 = piVar12;
        }
        piVar12 = (int *)piVar12[-(iVar3 >> 0x1f)];
      } while (piVar12 != (int *)0x0);
      if ((piVar4 != piVar13) &&
         (iVar3 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar4 + 4,s_palette_7007222f), iVar3 < 1)) {
        piVar13 = piVar4;
      }
      piVar10 = (int *)0x0;
    }
LAB_715493a8:
    cVar2 = *param_1;
    bVar16 = false;
    piVar4 = piVar10;
    if (cVar2 != '\x02') goto LAB_715493b8;
LAB_715493e8:
    piVar4 = piVar10;
    if (piVar10 == *(int **)(*(int *)(param_1 + 8) + 4)) goto LAB_71549470;
  }
  else {
    if (cVar2 == '\x02') {
      piVar10 = *(int **)(*(int *)(param_1 + 8) + 4);
      goto LAB_715493a8;
    }
    bVar16 = true;
    piVar10 = (int *)0x0;
    piVar4 = piVar10;
    if (cVar2 == '\x02') goto LAB_715493e8;
LAB_715493b8:
    if (cVar2 != '\x01') {
      if (!bVar16) {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      goto LAB_71549470;
    }
    if (piVar13 == (int *)(*(int *)(param_1 + 8) + 4)) goto LAB_71549470;
    piVar10 = piVar13 + 8;
    cVar2 = '\x01';
  }
  if ((char)*piVar10 != '\x02') goto LAB_71549470;
  if (cVar2 != '\x02') {
    if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar4 = piVar13 + 8;
  }
  cVar2 = (char)*piVar4;
  iVar3 = 1;
  if (cVar2 == '\0') {
    piVar13 = (int *)0x0;
    piStack_58 = (int *)0x0;
    piVar10 = (int *)0x0;
    piStack_5c = (int *)0x0;
    iVar8 = 1;
  }
  else {
    if (cVar2 == '\x02') {
      iVar8 = -0x80000000;
      iVar3 = -0x80000000;
      piVar10 = *(int **)piVar4[2];
      piStack_58 = (int *)((undefined4 *)piVar4[2])[1];
    }
    else {
      if (cVar2 == '\x01') {
        iVar8 = -0x80000000;
        piVar10 = (int *)0x0;
        iVar3 = -0x80000000;
        piStack_5c = (undefined4 *)piVar4[2] + 1;
        piVar13 = *(int **)piVar4[2];
        piStack_58 = (int *)0x0;
        goto LAB_71549504;
      }
      piVar10 = (int *)0x0;
      iVar8 = 0;
      piStack_58 = (int *)0x0;
    }
    piVar13 = (int *)0x0;
    piStack_5c = (int *)0x0;
  }
LAB_71549504:
  while (cVar2 == '\x01') {
    if (piVar13 == piStack_5c) goto LAB_71549830;
    piVar12 = piVar13 + 8;
LAB_71549538:
    if ((char)*piVar12 == '\x01') {
      uStack_38 = 0xffffffff;
      uStack_3c = 0xffffffff;
      uStack_40 = 0xffffffff;
      iVar5 = FUN_7154b4a0(piVar12,s_colors_7006d03c,&uStack_40);
      if (iVar5 != 0) {
        uStack_48 = 0;
        uStack_4c = 0;
        uStack_50 = 0;
        FUN_71547834(piVar12,&DAT_7006c824,&uStack_50);
        puVar6 = (undefined4 *)param_5[1];
        if (puVar6 < (undefined4 *)param_5[2]) {
          puVar9 = puVar6 + 3;
          puVar6[2] = uStack_38;
          puVar6[1] = uStack_3c;
          *puVar6 = uStack_40;
        }
        else {
          iVar5 = *param_5;
          piVar12 = (int *)((int)puVar6 - iVar5);
          uVar11 = ((int)piVar12 >> 2) * -0x55555555 + 1;
          if (0x15555555 < uVar11) {
            FUN_7154bd1c(param_5);
            goto LAB_71549944;
          }
          iVar14 = param_5[2] - iVar5 >> 2;
          if (uVar11 < (uint)(iVar14 * 0x55555556)) {
            uVar11 = iVar14 * 0x55555556;
          }
          if (0xaaaaaa9 < (uint)(iVar14 * -0x55555555)) {
            uVar11 = 0x15555555;
          }
          if (uVar11 == 0) {
            iVar14 = 0;
          }
          else {
            if (0x15555555 < uVar11) goto LAB_71549938;
            iVar14 = thunk_MwhHq(uVar11 * 0xc);
          }
          puVar6 = (undefined4 *)(iVar14 + ((int)piVar12 >> 2) * 4);
          *puVar6 = uStack_40;
          puVar6[1] = uStack_3c;
          puVar6[2] = uStack_38;
          imp___aeabi_memcpy((int)puVar6 - (int)piVar12,iVar5,piVar12);
          puVar9 = puVar6 + 3;
          *param_5 = (int)puVar6 - (int)piVar12;
          param_5[1] = (int)puVar9;
          param_5[2] = iVar14 + uVar11 * 0xc;
          if (iVar5 != 0) {
            thunk_qNQrlu(iVar5);
          }
        }
        param_5[1] = (int)puVar9;
        puVar6 = (undefined4 *)param_6[1];
        if (puVar6 < (undefined4 *)param_6[2]) {
          puVar9 = puVar6 + 3;
          *puVar6 = uStack_50;
          puVar6[1] = uStack_4c;
          puVar6[2] = uStack_48;
        }
        else {
          iVar5 = *param_6;
          iVar14 = (int)puVar6 - iVar5;
          uVar11 = (iVar14 >> 2) * -0x55555555 + 1;
          piVar12 = param_6;
          if (0x15555555 < uVar11) {
LAB_71549944:
                    /* WARNING: Subroutine does not return */
            FUN_712f6ffc(piVar12);
          }
          iVar7 = param_6[2] - iVar5 >> 2;
          if (uVar11 < (uint)(iVar7 * 0x55555556)) {
            uVar11 = iVar7 * 0x55555556;
          }
          if (0xaaaaaa9 < (uint)(iVar7 * -0x55555555)) {
            uVar11 = 0x15555555;
          }
          if (uVar11 == 0) {
            iVar7 = 0;
          }
          else {
            if (0x15555555 < uVar11) {
LAB_71549938:
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            iVar7 = thunk_MwhHq(uVar11 * 0xc);
          }
          puVar6 = (undefined4 *)(iVar7 + (iVar14 >> 2) * 4);
          *puVar6 = uStack_50;
          puVar6[1] = uStack_4c;
          puVar6[2] = uStack_48;
          imp___aeabi_memcpy4((int)puVar6 - iVar14,iVar5,iVar14);
          puVar9 = puVar6 + 3;
          *param_6 = (int)puVar6 - iVar14;
          param_6[1] = (int)puVar9;
          param_6[2] = iVar7 + uVar11 * 0xc;
          if (iVar5 != 0) {
            thunk_qNQrlu(iVar5);
          }
        }
        param_6[1] = (int)puVar9;
      }
      cVar2 = (char)*piVar4;
      if (cVar2 == '\x02') goto LAB_71549500;
LAB_715497e4:
      if (cVar2 == '\x01') {
        piVar12 = (int *)piVar13[1];
        piVar15 = piVar13;
        if ((int *)piVar13[1] == (int *)0x0) {
          do {
            piVar13 = (int *)piVar15[2];
            bVar16 = (int *)*piVar13 != piVar15;
            piVar15 = piVar13;
          } while (bVar16);
        }
        else {
          do {
            piVar13 = piVar12;
            piVar12 = (int *)*piVar13;
          } while ((int *)*piVar13 != (int *)0x0);
        }
      }
      else {
        iVar8 = iVar8 + 1;
      }
    }
    else {
LAB_715495dc:
      if (cVar2 != '\x02') goto LAB_715497e4;
LAB_71549500:
      piVar10 = piVar10 + 4;
    }
  }
  if (cVar2 == '\x02') {
    piVar12 = piVar10;
    if (piVar10 != piStack_58) goto LAB_71549538;
  }
  else if (iVar8 != iVar3) {
    if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    goto LAB_715495dc;
  }
LAB_71549830:
  if (*param_5 == param_5[1]) goto LAB_71549470;
  cVar2 = *param_1;
  if (cVar2 == '\x01') {
    iVar3 = 0;
    piVar4 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar10 = (int *)*piVar4;
    piVar13 = piVar4;
    if (piVar10 != (int *)0x0) {
      do {
        iVar8 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar10 + 4,&DAT_70065d13);
        if (-1 < iVar8) {
          piVar13 = piVar10;
        }
        piVar10 = (int *)piVar10[-(iVar8 >> 0x1f)];
      } while (piVar10 != (int *)0x0);
      if ((piVar13 != piVar4) &&
         (iVar8 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar13 + 4,&DAT_70065d13), iVar8 < 1)) {
        piVar4 = piVar13;
      }
    }
LAB_715498c8:
    cVar2 = *param_1;
    bVar16 = false;
    if (cVar2 != '\x02') goto LAB_715498d8;
LAB_71549908:
    if (iVar3 != *(int *)(*(int *)(param_1 + 8) + 4)) goto LAB_71549470;
  }
  else {
    if (cVar2 == '\x02') {
      iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
      piVar4 = (int *)0x0;
      goto LAB_715498c8;
    }
    iVar3 = 0;
    bVar16 = true;
    piVar4 = (int *)0x0;
    if (cVar2 == '\x02') goto LAB_71549908;
LAB_715498d8:
    if (cVar2 == '\x01') {
      if (piVar4 != (int *)(*(int *)(param_1 + 8) + 4)) goto LAB_71549470;
    }
    else if (!bVar16) goto LAB_71549470;
  }
  *param_4 = 0;
LAB_71549470:
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(piStack_28);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71549d88
// Entry: 0x71549d88 | Size: 296 bytes
// =========================================================================

void FUN_71549d88(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 < *(undefined4 **)(param_1 + 8)) {
    uVar3 = *param_2;
    uVar2 = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[1] = uVar2;
    *puVar1 = uVar3;
    uVar3 = param_2[3];
    uVar2 = param_2[4];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar1[5] = param_2[5];
    puVar1[4] = uVar2;
    puVar1[3] = uVar3;
    uVar3 = param_2[6];
    uVar2 = param_2[7];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar1[8] = param_2[8];
    puVar1[7] = uVar2;
    puVar1[6] = uVar3;
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    uVar2 = param_2[0xb];
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    *(undefined4 *)((int)puVar1 + 0x2f) = *(undefined4 *)((int)param_2 + 0x2f);
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0xb] = uVar2;
    puVar1[10] = uVar4;
    puVar1[9] = uVar3;
    puVar1[0xd] = param_2[0xd];
    puVar1[0xe] = param_2[0xe];
    puVar1[0xf] = param_2[0xf];
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x10] = param_2[0x10];
    puVar1[0x11] = param_2[0x11];
    puVar1[0x12] = param_2[0x12];
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    *(undefined4 **)(param_1 + 4) = puVar1 + 0x13;
    return;
  }
  uVar2 = FUN_7154db58(param_1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}


// =========================================================================
// Function: FUN_71549ee4
// Entry: 0x71549ee4 | Size: 184 bytes
// =========================================================================

byte * FUN_71549ee4(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x40);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x44);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0xc;
        if ((*pbVar3 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar1 + -4));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x40);
    }
    *(byte **)(param_1 + 0x44) = pbVar2;
    thunk_qNQrlu(pbVar3);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
    thunk_qNQrlu();
  }
  if ((param_1[0x18] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x20));
  }
  if ((param_1[0xc] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x14));
  }
  if ((*param_1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7154a05c
// Entry: 0x7154a05c | Size: 304 bytes
// =========================================================================

byte * FUN_7154a05c(byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if ((param_1[0xe4] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xec));
  }
  if ((param_1[0xd8] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xe0));
  }
  iVar4 = *(int *)(param_1 + 200);
  if (iVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0xcc);
    iVar2 = iVar4;
    if (iVar1 != iVar4) {
      do {
        iVar1 = FUN_71549ee4(iVar1 + -0x4c);
      } while (iVar1 != iVar4);
      iVar2 = *(int *)(param_1 + 200);
    }
    *(int *)(param_1 + 0xcc) = iVar4;
    thunk_qNQrlu(iVar2);
  }
  pbVar5 = *(byte **)(param_1 + 0xbc);
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0xc0);
    pbVar6 = pbVar5;
    if (pbVar3 != pbVar5) {
      do {
        pbVar6 = pbVar3 + -0xc;
        if ((*pbVar6 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar3 + -4));
        }
        pbVar3 = pbVar6;
      } while (pbVar6 != pbVar5);
      pbVar6 = *(byte **)(param_1 + 0xbc);
    }
    *(byte **)(param_1 + 0xc0) = pbVar5;
    thunk_qNQrlu(pbVar6);
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb0);
    thunk_qNQrlu();
  }
  if ((param_1[0x3c] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x44));
  }
  if ((param_1[0x1c] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x24));
  }
  if ((param_1[0x10] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*param_1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7154a2d8
// Entry: 0x7154a2d8 | Size: 8 bytes
// =========================================================================

void FUN_7154a2d8(int param_1)

{
  FUN_7154a5a0(param_1 + 0x50);
  return;
}


// =========================================================================
// Function: FUN_7154a314
// Entry: 0x7154a314 | Size: 456 bytes
// =========================================================================

void FUN_7154a314(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x1c);
  if (iVar6 != iVar7) {
    do {
      bVar1 = *(byte *)(iVar6 + 0x10);
      iVar4 = -1;
      uVar2 = *(uint *)(iVar6 + 0x14);
      if ((bVar1 & 1) == 0) {
        uVar2 = (uint)(bVar1 >> 1);
      }
      if (uVar2 != 0) {
        iVar4 = *(int *)(iVar6 + 0x18);
        if ((bVar1 & 1) == 0) {
          iVar4 = iVar6 + 0x11;
        }
        iStack_2c = -1;
        iVar3 = FUN_713fe4f8(iVar4,&iStack_2c);
        iVar4 = iStack_2c;
        if (iStack_2c < 0) {
          iVar4 = -1;
        }
        if (iVar3 == 0) {
          iVar4 = -1;
        }
      }
      *(int *)(iVar6 + 0x1c) = iVar4;
      iVar6 = iVar6 + 0x2c;
    } while (iVar6 != iVar7);
  }
  iVar6 = *(int *)(param_1 + 0x24);
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar6 != iVar7) {
    do {
      bVar1 = *(byte *)(iVar6 + 0x10);
      iVar4 = -1;
      uVar2 = *(uint *)(iVar6 + 0x14);
      if ((bVar1 & 1) == 0) {
        uVar2 = (uint)(bVar1 >> 1);
      }
      if (uVar2 != 0) {
        iVar4 = *(int *)(iVar6 + 0x18);
        if ((bVar1 & 1) == 0) {
          iVar4 = iVar6 + 0x11;
        }
        iStack_28 = -1;
        iVar3 = FUN_713fe4f8(iVar4,&iStack_28);
        iVar4 = iStack_28;
        if (iStack_28 < 0) {
          iVar4 = -1;
        }
        if (iVar3 == 0) {
          iVar4 = -1;
        }
      }
      *(int *)(iVar6 + 0x1c) = iVar4;
      iVar6 = iVar6 + 0x2c;
    } while (iVar6 != iVar7);
  }
  piVar5 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0xc) != piVar5) {
    piVar9 = *(int **)(param_1 + 0xc) + 0xb;
    do {
      bVar1 = *(byte *)(piVar9 + -7);
      iStack_24 = -1;
      uVar2 = piVar9[-6];
      if ((bVar1 & 1) == 0) {
        uVar2 = (uint)(bVar1 >> 1);
      }
      if (uVar2 != 0) {
        iStack_24 = -1;
        iVar6 = piVar9[-5];
        if ((bVar1 & 1) == 0) {
          iVar6 = (int)piVar9 + -0x1b;
        }
        iVar6 = FUN_713fe4f8(iVar6,&iStack_24);
        if (iStack_24 < 0) {
          iStack_24 = -1;
        }
        if (iVar6 == 0) {
          iStack_24 = -1;
        }
      }
      piVar9[-1] = iStack_24;
      bVar1 = *(byte *)(piVar9 + -4);
      uVar2 = piVar9[-3];
      if ((bVar1 & 1) == 0) {
        uVar2 = (uint)(bVar1 >> 1);
      }
      if (uVar2 == 0) {
        iStack_24 = -1;
      }
      else {
        iStack_24 = -1;
        iVar6 = piVar9[-2];
        if ((bVar1 & 1) == 0) {
          iVar6 = (int)piVar9 + -0xf;
        }
        iVar6 = FUN_713fe4f8(iVar6,&iStack_24);
        if (iStack_24 < 0) {
          iStack_24 = -1;
        }
        if (iVar6 == 0) {
          iStack_24 = -1;
        }
      }
      piVar8 = piVar9 + 0x33;
      *piVar9 = iStack_24;
      piVar9 = piVar9 + 0x3e;
    } while (piVar8 != piVar5);
  }
  return;
}


// =========================================================================
// Function: FUN_7154a564
// Entry: 0x7154a564 | Size: 8 bytes
// =========================================================================

void FUN_7154a564(int param_1)

{
  FUN_7154a5a0(param_1 + 0x3c);
  return;
}


// =========================================================================
// Function: FUN_7154a5a0
// Entry: 0x7154a5a0 | Size: 220 bytes
// =========================================================================

undefined2 FUN_7154a5a0(undefined4 param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar3 = 0xffff;
  if (param_2 != (byte *)0x0) {
    param_3 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || param_3 == 0) {
    return 0xffff;
  }
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar4 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_7154a634;
  }
  else {
    uVar4 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar4;
  }
  imp___aeabi_memcpy(uVar4,param_2,uVar1);
LAB_7154a634:
  *(undefined1 *)(uVar4 + uVar1) = 0;
  iVar2 = FUN_7154c014(param_1,&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if (iVar2 != 0) {
    uVar3 = *(undefined2 *)(iVar2 + 0x14);
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_7154a73c
// Entry: 0x7154a73c | Size: 8 bytes
// =========================================================================

void FUN_7154a73c(int param_1)

{
  FUN_7154a5a0(param_1 + 100);
  return;
}


// =========================================================================
// Function: FUN_7154a778
// Entry: 0x7154a778 | Size: 8 bytes
// =========================================================================

void FUN_7154a778(int param_1)

{
  FUN_7154a5a0(param_1 + 0x78);
  return;
}


// =========================================================================
// Function: FUN_7154a7b4
// Entry: 0x7154a7b4 | Size: 8 bytes
// =========================================================================

void FUN_7154a7b4(int param_1)

{
  FUN_7154a5a0(param_1 + 0x8c);
  return;
}


// =========================================================================
// Function: FUN_7154a7f0
// Entry: 0x7154a7f0 | Size: 52 bytes
// =========================================================================

int FUN_7154a7f0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1[1] - *param_1 >> 2) * -0x55555555;
  iVar1 = 0;
  if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
    iVar1 = *param_1 + param_2 * 0xc;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7154a83c
// Entry: 0x7154a83c | Size: 52 bytes
// =========================================================================

int FUN_7154a83c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3) * -0x42108421;
  iVar1 = 0;
  if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc) + param_2 * 0xf8;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7154a888
// Entry: 0x7154a888 | Size: 180 bytes
// =========================================================================

byte * FUN_7154a888(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar4 = *(byte **)(param_1 + 0x20);
  pbVar5 = *(byte **)(param_1 + 0x24);
  if (pbVar4 != pbVar5) {
    uVar6 = *(uint *)(param_2 + 4);
    pbVar7 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar7 = param_2 + 1;
      uVar6 = (uint)(*param_2 >> 1);
    }
    do {
      uVar3 = *(uint *)(pbVar4 + 4);
      bVar1 = *pbVar4;
      if ((bVar1 & 1) == 0) {
        uVar3 = (uint)(bVar1 >> 1);
      }
      if (uVar3 == uVar6) {
        if ((bVar1 & 1) == 0) {
          if (bVar1 < 2) {
            return pbVar4;
          }
          uVar3 = 0;
          while (pbVar4[uVar3 + 1] == pbVar7[uVar3]) {
            uVar3 = uVar3 + 1;
            if (bVar1 >> 1 == uVar3) {
              return pbVar4;
            }
          }
        }
        else {
          iVar2 = imp_memcmp(*(undefined4 *)(pbVar4 + 8),pbVar7);
          if (iVar2 == 0) {
            return pbVar4;
          }
        }
      }
      pbVar4 = pbVar4 + 0x18;
    } while (pbVar4 != pbVar5);
  }
  return (byte *)0x0;
}


// =========================================================================
// Function: FUN_7154a970
// Entry: 0x7154a970 | Size: 180 bytes
// =========================================================================

byte * FUN_7154a970(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar4 = *(byte **)(param_1 + 0x20);
  pbVar5 = *(byte **)(param_1 + 0x24);
  if (pbVar4 != pbVar5) {
    uVar6 = *(uint *)(param_2 + 4);
    pbVar7 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar7 = param_2 + 1;
      uVar6 = (uint)(*param_2 >> 1);
    }
    do {
      uVar3 = *(uint *)(pbVar4 + 4);
      bVar1 = *pbVar4;
      if ((bVar1 & 1) == 0) {
        uVar3 = (uint)(bVar1 >> 1);
      }
      if (uVar3 == uVar6) {
        if ((bVar1 & 1) == 0) {
          if (bVar1 < 2) {
            return pbVar4;
          }
          uVar3 = 0;
          while (pbVar4[uVar3 + 1] == pbVar7[uVar3]) {
            uVar3 = uVar3 + 1;
            if (bVar1 >> 1 == uVar3) {
              return pbVar4;
            }
          }
        }
        else {
          iVar2 = imp_memcmp(*(undefined4 *)(pbVar4 + 8),pbVar7);
          if (iVar2 == 0) {
            return pbVar4;
          }
        }
      }
      pbVar4 = pbVar4 + 0x18;
    } while (pbVar4 != pbVar5);
  }
  return (byte *)0x0;
}


// =========================================================================
// Function: FUN_7154aa58
// Entry: 0x7154aa58 | Size: 44 bytes
// =========================================================================

int FUN_7154aa58(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2) * -0x45d1745d;
  iVar1 = 0;
  if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
    iVar1 = param_2 * 0x2c + *(int *)(param_1 + 0x18);
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7154aa9c
// Entry: 0x7154aa9c | Size: 44 bytes
// =========================================================================

int FUN_7154aa9c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2) * -0x45d1745d;
  iVar1 = 0;
  if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
    iVar1 = param_2 * 0x2c + *(int *)(param_1 + 0x24);
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7154aae0
// Entry: 0x7154aae0 | Size: 44 bytes
// =========================================================================

int FUN_7154aae0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2) * -0x45d1745d;
  iVar1 = 0;
  if (param_2 <= uVar2 && uVar2 - param_2 != 0) {
    iVar1 = param_2 * 0x2c + *(int *)(param_1 + 0x30);
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7154ab24
// Entry: 0x7154ab24 | Size: 452 bytes
// =========================================================================

undefined4 * FUN_7154ab24(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar1 = param_1[1] - *param_1 >> 3;
  uVar8 = iVar1 * -0x55555555 + 1;
  if (0xaaaaaaa < uVar8) {
    FUN_7154ada8(param_1);
LAB_7154ace4:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  iVar2 = param_1[2] - *param_1 >> 3;
  if (uVar8 < (uint)(iVar2 * 0x55555556)) {
    uVar8 = iVar2 * 0x55555556;
  }
  if (0x5555554 < (uint)(iVar2 * -0x55555555)) {
    uVar8 = 0xaaaaaaa;
  }
  iVar2 = 0;
  if (uVar8 != 0) {
    if (0xaaaaaaa < uVar8) goto LAB_7154ace4;
    iVar2 = thunk_MwhHq(uVar8 * 0x18);
  }
  uVar14 = *param_2;
  uVar15 = param_2[1];
  uVar12 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  puVar7 = (undefined4 *)(iVar2 + iVar1 * 8);
  *puVar7 = uVar14;
  puVar7[3] = uVar9;
  pbVar10 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  puVar7[4] = uVar3;
  puVar7[2] = uVar12;
  puVar13 = (undefined4 *)((int)puVar7 + ((int)pbVar10 - (int)pbVar11));
  puVar7[1] = uVar15;
  puVar7[5] = uVar5;
  pbVar4 = pbVar10;
  puVar6 = puVar13;
  if ((int)pbVar10 - (int)pbVar11 != 0) {
    do {
      uVar3 = *(undefined4 *)(pbVar4 + 4);
      uVar5 = *(undefined4 *)(pbVar4 + 8);
      *puVar6 = *(undefined4 *)pbVar4;
      puVar6[1] = uVar3;
      puVar6[2] = uVar5;
      uVar3 = *(undefined4 *)(pbVar4 + 0xc);
      uVar5 = *(undefined4 *)(pbVar4 + 0x10);
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      puVar6[5] = *(undefined4 *)(pbVar4 + 0x14);
      puVar6[4] = uVar5;
      puVar6[3] = uVar3;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      pbVar4 = pbVar4 + 0x18;
      puVar6 = puVar6 + 6;
    } while (pbVar4 != pbVar11);
    do {
      if ((pbVar10[0xc] & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar10 + 0x14));
      }
      if ((*pbVar10 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar10 + 8));
      }
      pbVar10 = pbVar10 + 0x18;
    } while (pbVar10 != pbVar11);
    pbVar11 = (byte *)*param_1;
  }
  *param_1 = (int)puVar13;
  param_1[1] = (int)(puVar7 + 6);
  param_1[2] = iVar2 + uVar8 * 0x18;
  if (pbVar11 != (byte *)0x0) {
    thunk_qNQrlu(pbVar11);
  }
  return puVar7 + 6;
}


// =========================================================================
// Function: FUN_7154ada8
// Entry: 0x7154ada8 | Size: 20 bytes
// =========================================================================

void FUN_7154ada8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154ae10
// Entry: 0x7154ae10 | Size: 1076 bytes
// =========================================================================

void FUN_7154ae10(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  cVar2 = *param_1;
  if (cVar2 == '\x01') {
    piVar10 = (int *)0x0;
    piVar9 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar7 = (int *)*piVar9;
    piVar8 = piVar9;
    if (piVar7 != (int *)0x0) {
      do {
        iVar4 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar7 + 4,param_2);
        if (-1 < iVar4) {
          piVar8 = piVar7;
        }
        piVar7 = (int *)piVar7[-(iVar4 >> 0x1f)];
      } while (piVar7 != (int *)0x0);
      if ((piVar8 != piVar9) &&
         (iVar4 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar8 + 4,param_2), iVar4 < 1)) {
        piVar9 = piVar8;
      }
    }
LAB_7154aeac:
    cVar2 = *param_1;
    bVar5 = false;
    piVar8 = piVar10;
    if (cVar2 != '\x02') goto LAB_7154aebc;
LAB_7154aef0:
    piVar8 = piVar10;
    if (piVar10 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return;
    }
  }
  else {
    if (cVar2 == '\x02') {
      piVar10 = *(int **)(*(int *)(param_1 + 8) + 4);
      piVar9 = (int *)0x0;
      goto LAB_7154aeac;
    }
    bVar5 = true;
    piVar9 = (int *)0x0;
    piVar10 = (int *)0x0;
    piVar8 = piVar10;
    if (cVar2 == '\x02') goto LAB_7154aef0;
LAB_7154aebc:
    if (cVar2 != '\x01') {
      if (bVar5) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    if (piVar9 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return;
    }
    piVar10 = piVar9 + 8;
    cVar2 = '\x01';
  }
  if ((char)*piVar10 != '\x02') {
    return;
  }
  piVar10 = piVar8;
  if (cVar2 != '\x02') {
    if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar10 = piVar9 + 8;
  }
  if ((char)*piVar10 == '\x01') {
    uVar6 = *(uint *)(piVar10[2] + 8);
  }
  else {
    if ((char)*piVar10 != '\x02') {
      return;
    }
    uVar6 = ((int *)piVar10[2])[1] - *(int *)piVar10[2] >> 4;
  }
  if (uVar6 < 3) {
    return;
  }
  piVar9 = piVar9 + 8;
  piVar10 = piVar8;
  if ((cVar2 == '\x02') || (piVar10 = piVar9, cVar2 == '\x01')) {
    if ((char)*piVar10 != '\x02') {
LAB_7154b25c:
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    if (**(byte **)piVar10[2] - 5 < 3) {
      piVar10 = piVar8;
      if ((cVar2 != '\x02') && (piVar10 = piVar9, cVar2 != '\x01')) goto LAB_7154b26c;
      if ((char)*piVar10 != '\x02') goto LAB_7154b260;
      puVar3 = *(undefined1 **)piVar10[2];
      switch(*puVar3) {
      case 4:
        uVar1 = 0;
        if (puVar3[8] != '\0') {
          uVar1 = 0x3f800000;
        }
        break;
      case 5:
        uVar1 = FUN_71ba19d8(*(undefined4 *)(puVar3 + 8),*(undefined4 *)(puVar3 + 0xc));
        break;
      case 6:
        uVar1 = FUN_71ba1c88(*(undefined4 *)(puVar3 + 8),*(undefined4 *)(puVar3 + 0xc));
        break;
      case 7:
        uVar1 = FUN_71ba242c(*(undefined4 *)(puVar3 + 8),*(undefined4 *)(puVar3 + 0xc));
        break;
      default:
        goto switchD_7154affc_default;
      }
      *param_3 = uVar1;
      cVar2 = *param_1;
    }
    piVar10 = piVar9;
    if ((cVar2 == '\x01') || (piVar10 = piVar8, cVar2 == '\x02')) {
      if ((char)*piVar10 != '\x02') goto LAB_7154b25c;
      if (*(byte *)(*(int *)piVar10[2] + 0x10) - 5 < 3) {
        piVar10 = piVar8;
        if ((cVar2 != '\x02') && (piVar10 = piVar9, cVar2 != '\x01')) goto LAB_7154b26c;
        if ((char)*piVar10 != '\x02') goto LAB_7154b260;
        iVar4 = *(int *)piVar10[2];
        switch(*(undefined1 *)(iVar4 + 0x10)) {
        case 4:
          uVar1 = 0;
          if (*(char *)(iVar4 + 0x18) != '\0') {
            uVar1 = 0x3f800000;
          }
          break;
        case 5:
          uVar1 = FUN_71ba19d8(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
          break;
        case 6:
          uVar1 = FUN_71ba1c88(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
          break;
        case 7:
          uVar1 = FUN_71ba242c(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
          break;
        default:
          goto switchD_7154affc_default;
        }
        param_3[1] = uVar1;
        cVar2 = *param_1;
      }
      piVar10 = piVar9;
      if ((cVar2 == '\x01') || (piVar10 = piVar8, cVar2 == '\x02')) {
        if ((char)*piVar10 == '\x02') {
          if (2 < *(byte *)(*(int *)piVar10[2] + 0x20) - 5) {
            return;
          }
          if ((cVar2 == '\x02') || (piVar8 = piVar9, cVar2 == '\x01')) {
            if ((char)*piVar8 == '\x02') {
              iVar4 = *(int *)piVar8[2];
              switch(*(undefined1 *)(iVar4 + 0x20)) {
              case 4:
                uVar1 = 0;
                if (*(char *)(iVar4 + 0x28) != '\0') {
                  uVar1 = 0x3f800000;
                }
                break;
              case 5:
                uVar1 = FUN_71ba19d8(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c));
                break;
              case 6:
                uVar1 = FUN_71ba1c88(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c));
                break;
              case 7:
                uVar1 = FUN_71ba242c(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c));
                break;
              default:
switchD_7154affc_default:
                    /* WARNING: Subroutine does not return */
                imp_abort();
              }
              param_3[2] = uVar1;
              return;
            }
LAB_7154b260:
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
LAB_7154b26c:
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        goto LAB_7154b25c;
      }
    }
    if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  imp_abort();
}


// =========================================================================
// Function: FUN_7154b4a0
// Entry: 0x7154b4a0 | Size: 792 bytes
// =========================================================================

undefined4 FUN_7154b4a0(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  cVar4 = *param_1;
  if (cVar4 == '\x01') {
    piVar10 = (int *)0x0;
    piVar11 = (int *)(*(int *)(param_1 + 8) + 4);
    piVar8 = (int *)*piVar11;
    piVar6 = piVar11;
    if (piVar8 != (int *)0x0) {
      do {
        iVar9 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                          (piVar8 + 4,param_2);
        if (-1 < iVar9) {
          piVar6 = piVar8;
        }
        piVar8 = (int *)piVar8[-(iVar9 >> 0x1f)];
      } while (piVar8 != (int *)0x0);
      if ((piVar6 != piVar11) &&
         (iVar9 = thunk_cHJdPHKOyIgkbFDRkmqaTDmnFLylOTRrLxHfLU_pJTyYLwQGQWoOCeBEsbyo_ZeYCptYJBSTzcUHfRd
                            (piVar6 + 4,param_2), iVar9 < 1)) {
        piVar11 = piVar6;
      }
    }
LAB_7154b534:
    cVar4 = *param_1;
    bVar5 = false;
    piVar6 = piVar10;
    if (cVar4 != '\x02') goto LAB_7154b544;
LAB_7154b578:
    piVar6 = piVar10;
    if (piVar10 == *(int **)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
  }
  else {
    if (cVar4 == '\x02') {
      piVar10 = *(int **)(*(int *)(param_1 + 8) + 4);
      piVar11 = (int *)0x0;
      goto LAB_7154b534;
    }
    bVar5 = true;
    piVar11 = (int *)0x0;
    piVar10 = (int *)0x0;
    piVar6 = piVar10;
    if (cVar4 == '\x02') goto LAB_7154b578;
LAB_7154b544:
    if (cVar4 != '\x01') {
      if (bVar5) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      imp_abort(0);
    }
    if (piVar11 == (int *)(*(int *)(param_1 + 8) + 4)) {
      return 0;
    }
    piVar10 = piVar11 + 8;
    cVar4 = '\x01';
  }
  if ((char)*piVar10 != '\x02') {
    return 0;
  }
  piVar10 = piVar6;
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort(0);
    }
    piVar10 = piVar11 + 8;
  }
  cVar1 = (char)*piVar10;
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar1 == '\x02') {
    if (*(int *)piVar10[2] == ((int *)piVar10[2])[1]) {
      return 0;
    }
  }
  else if ((cVar1 == '\x01') && (*(int *)(piVar10[2] + 8) == 0)) {
    return 0;
  }
  piVar10 = piVar6;
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar10 = piVar11 + 8;
  }
  if ((char)*piVar10 != '\x02') {
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  if (**(char **)piVar10[2] != '\x02') {
    if (cVar4 != '\x02') {
      if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      piVar6 = piVar11 + 8;
    }
    uVar2 = FUN_7154b958(piVar6,param_3);
    return uVar2;
  }
  piVar10 = piVar6;
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar10 = piVar11 + 8;
  }
  if ((char)*piVar10 == '\x01') {
    uVar3 = *(uint *)(piVar10[2] + 8);
LAB_7154b6bc:
    iVar9 = 3;
    if (2 < uVar3) goto LAB_7154b728;
  }
  else if ((char)*piVar10 == '\x02') {
    uVar3 = ((int *)piVar10[2])[1] - *(int *)piVar10[2] >> 4;
    goto LAB_7154b6bc;
  }
  piVar10 = piVar6;
  if (cVar4 != '\x02') {
    if (cVar4 != '\x01') {
                    /* WARNING: Subroutine does not return */
      imp_abort();
    }
    piVar10 = piVar11 + 8;
  }
  cVar4 = (char)*piVar10;
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      iVar9 = *(int *)(piVar10[2] + 8);
    }
    else {
      iVar9 = 1;
      if (cVar4 != '\x02') goto LAB_7154b728;
      iVar9 = ((int *)piVar10[2])[1] - *(int *)piVar10[2] >> 4;
    }
    if (iVar9 != 0) {
LAB_7154b728:
      iVar7 = 0;
      do {
        cVar4 = *param_1;
        piVar10 = piVar11 + 8;
        if ((cVar4 != '\x01') && (piVar10 = piVar6, cVar4 != '\x02')) {
          if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
            imp_abort();
          }
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        if ((char)*piVar10 != '\x02') {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        FUN_7154b958(*(int *)piVar10[2] + iVar7,param_3);
        iVar7 = iVar7 + 0x10;
        param_3 = param_3 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return 1;
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_7154b958
// Entry: 0x7154b958 | Size: 568 bytes
// =========================================================================

undefined4 FUN_7154b958(char *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if (*param_1 == '\x02') {
    puVar5 = (undefined1 *)**(undefined4 **)(param_1 + 8);
    uVar2 = (*(undefined4 **)(param_1 + 8))[1] - (int)puVar5;
    if (0x2f < uVar2) {
      iVar4 = 4;
      if (uVar2 < 0x40) {
        iVar4 = 3;
      }
      iVar3 = 0;
      do {
        if (2 < (byte)puVar5[iVar3 * 0x10] - 5) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar4 != iVar3);
      switch(*puVar5) {
      case 4:
        uVar2 = (uint)(byte)puVar5[8];
        break;
      case 5:
      case 6:
        uVar2 = *(uint *)(puVar5 + 8);
        break;
      case 7:
        uVar2 = FUN_71ba173c(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc));
        break;
      default:
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      uVar6 = UnsignedSaturate(uVar2,8);
      UnsignedDoesSaturate(uVar2,8);
      *param_2 = (char)uVar6;
      if (*param_1 != '\x02') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      iVar4 = **(int **)(param_1 + 8);
      switch(*(undefined1 *)(iVar4 + 0x10)) {
      case 4:
        uVar2 = (uint)*(byte *)(iVar4 + 0x18);
        break;
      case 5:
      case 6:
        uVar2 = *(uint *)(iVar4 + 0x18);
        break;
      case 7:
        uVar2 = FUN_71ba173c(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x1c));
        break;
      default:
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      uVar6 = UnsignedSaturate(uVar2,8);
      UnsignedDoesSaturate(uVar2,8);
      param_2[1] = (char)uVar6;
      if (*param_1 != '\x02') {
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      iVar4 = **(int **)(param_1 + 8);
      switch(*(undefined1 *)(iVar4 + 0x20)) {
      case 4:
        uVar2 = (uint)*(byte *)(iVar4 + 0x28);
        break;
      case 5:
      case 6:
        uVar2 = *(uint *)(iVar4 + 0x28);
        break;
      case 7:
        uVar2 = FUN_71ba173c(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c));
        break;
      default:
                    /* WARNING: Subroutine does not return */
        imp_abort();
      }
      uVar6 = UnsignedSaturate(uVar2,8);
      UnsignedDoesSaturate(uVar2,8);
      param_2[2] = (char)uVar6;
      uVar1 = 0xff;
      if (*param_1 == '\x01') {
        if (3 < *(uint *)(*(int *)(param_1 + 8) + 8)) {
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
      }
      else if ((*param_1 == '\x02') &&
              (iVar4 = **(int **)(param_1 + 8), 0x30 < (uint)((*(int **)(param_1 + 8))[1] - iVar4)))
      {
        switch(*(undefined1 *)(iVar4 + 0x30)) {
        case 4:
          uVar2 = (uint)*(byte *)(iVar4 + 0x38);
          break;
        case 5:
        case 6:
          uVar2 = *(uint *)(iVar4 + 0x38);
          break;
        case 7:
          uVar2 = FUN_71ba173c(*(undefined4 *)(iVar4 + 0x38),*(undefined4 *)(iVar4 + 0x3c));
          break;
        default:
                    /* WARNING: Subroutine does not return */
          imp_abort();
        }
        uVar6 = UnsignedSaturate(uVar2,8);
        uVar1 = (undefined1)uVar6;
        UnsignedDoesSaturate(uVar2,8);
      }
      uVar6 = 1;
      param_2[3] = uVar1;
    }
  }
  return uVar6;
}


// =========================================================================
// Function: FUN_7154bd1c
// Entry: 0x7154bd1c | Size: 20 bytes
// =========================================================================

void FUN_7154bd1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154bd84
// Entry: 0x7154bd84 | Size: 164 bytes
// =========================================================================

void FUN_7154bd84(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar1;
    pbVar2 = *(byte **)(param_2 + 0x24);
    if (*(byte **)(param_2 + 0x24) != pbVar1) {
      do {
        if ((pbVar2[-0xc] & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar2 + -4));
        }
        pbVar3 = pbVar2 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar2 + -0x10));
        }
        pbVar2 = pbVar3;
      } while (pbVar3 != pbVar1);
      pbVar3 = *(byte **)(param_2 + 0x20);
    }
    *(byte **)(param_2 + 0x24) = pbVar1;
    thunk_qNQrlu(pbVar3);
  }
  if ((param_2[0x10] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_2 + 0x18));
  }
  if ((*param_2 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_2 + 8));
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7154becc
// Entry: 0x7154becc | Size: 164 bytes
// =========================================================================

void FUN_7154becc(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar1;
    pbVar2 = *(byte **)(param_2 + 0x24);
    if (*(byte **)(param_2 + 0x24) != pbVar1) {
      do {
        if ((pbVar2[-0xc] & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar2 + -4));
        }
        pbVar3 = pbVar2 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar2 + -0x10));
        }
        pbVar2 = pbVar3;
      } while (pbVar3 != pbVar1);
      pbVar3 = *(byte **)(param_2 + 0x20);
    }
    *(byte **)(param_2 + 0x24) = pbVar1;
    thunk_qNQrlu(pbVar3);
  }
  if ((param_2[0x10] & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_2 + 0x18));
  }
  if ((*param_2 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_2 + 8));
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7154c014
// Entry: 0x7154c014 | Size: 552 bytes
// =========================================================================

int * FUN_7154c014(int *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  uVar9 = *(uint *)(param_2 + 4);
  pbVar11 = *(byte **)(param_2 + 8);
  uVar7 = uVar9;
  pbVar2 = pbVar11;
  uVar10 = uVar9;
  if ((*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
    uVar9 = (uint)(*param_2 >> 1);
    uVar7 = uVar9;
    pbVar2 = pbVar11;
    uVar10 = uVar9;
  }
  for (; 3 < uVar9; uVar9 = uVar9 - 4) {
    uVar7 = (*(int *)pbVar11 * 0x5bd1e995 ^ (uint)(*(int *)pbVar11 * 0x5bd1e995) >> 0x18) *
            0x5bd1e995 ^ uVar7 * 0x5bd1e995;
    pbVar11 = pbVar11 + 4;
  }
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_7154c0b4;
      uVar7 = uVar7 ^ (uint)pbVar11[2] << 0x10;
    }
    uVar7 = uVar7 ^ (uint)pbVar11[1] << 8;
  }
  uVar7 = (uVar7 ^ *pbVar11) * 0x5bd1e995;
LAB_7154c0b4:
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar6 = (uVar7 ^ uVar7 >> 0xd) * 0x5bd1e995;
    uVar6 = uVar6 ^ uVar6 >> 0xf;
    uVar7 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar9 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar9 <= uVar6) {
        FUN_71ba33fc(uVar6,uVar9);
        uVar8 = extraout_r1;
      }
    }
    piVar3 = *(int **)(*param_1 + uVar8 * 4);
    if ((piVar3 != (int *)0x0) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) {
      do {
        uVar4 = piVar3[1];
        if (uVar6 == uVar4) {
          uVar4 = piVar3[3];
          bVar1 = *(byte *)(piVar3 + 2);
          if ((bVar1 & 1) == 0) {
            uVar4 = (uint)(bVar1 >> 1);
          }
          if (uVar4 == uVar10) {
            if ((bVar1 & 1) == 0) {
              if (bVar1 < 2) {
                return piVar3;
              }
              uVar4 = 0;
              while (*(byte *)((int)piVar3 + uVar4 + 9) == pbVar2[uVar4]) {
                uVar4 = uVar4 + 1;
                if (bVar1 >> 1 == uVar4) {
                  return piVar3;
                }
              }
            }
            else {
              iVar5 = imp_memcmp(piVar3[4],pbVar2);
              if (iVar5 == 0) {
                return piVar3;
              }
            }
          }
        }
        else {
          if (uVar7 < 2) {
            uVar4 = uVar4 & uVar9 - 1;
          }
          else if (uVar9 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar9);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar8) {
            return (int *)0x0;
          }
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  return (int *)0x0;
}


// =========================================================================
// Function: FUN_7154c2a8
// Entry: 0x7154c2a8 | Size: 1060 bytes
// =========================================================================

void FUN_7154c2a8(undefined4 *param_1,int *param_2,byte *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint extraout_r1;
  byte *pbVar10;
  int iVar11;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int *piVar15;
  uint uVar16;
  uint unaff_r10;
  
  uVar13 = *(uint *)(param_3 + 4);
  pbVar14 = *(byte **)(param_3 + 8);
  uVar9 = uVar13;
  pbVar10 = pbVar14;
  uVar6 = uVar13;
  if ((*param_3 & 1) == 0) {
    pbVar14 = param_3 + 1;
    uVar13 = (uint)(*param_3 >> 1);
    uVar9 = uVar13;
    pbVar10 = pbVar14;
    uVar6 = uVar13;
  }
  for (; 3 < uVar13; uVar13 = uVar13 - 4) {
    uVar9 = (*(int *)pbVar14 * 0x5bd1e995 ^ (uint)(*(int *)pbVar14 * 0x5bd1e995) >> 0x18) *
            0x5bd1e995 ^ uVar9 * 0x5bd1e995;
    pbVar14 = pbVar14 + 4;
  }
  if (uVar13 == 1) {
LAB_7154c344:
    uVar9 = (uVar9 ^ *pbVar14) * 0x5bd1e995;
  }
  else {
    if (uVar13 == 2) {
LAB_7154c33c:
      uVar9 = uVar9 ^ (uint)pbVar14[1] << 8;
      goto LAB_7154c344;
    }
    if (uVar13 == 3) {
      uVar9 = uVar9 ^ (uint)pbVar14[2] << 0x10;
      goto LAB_7154c33c;
    }
  }
  uVar16 = param_2[1];
  uVar13 = (uVar9 ^ uVar9 >> 0xd) * 0x5bd1e995;
  uVar13 = uVar13 ^ uVar13 >> 0xf;
  if (uVar16 != 0) {
    uVar9 = uVar16 - (uVar16 >> 1 & 0x55555555);
    uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar9 < 2) {
      unaff_r10 = uVar13 & uVar16 - 1;
    }
    else {
      unaff_r10 = uVar13;
      if (uVar16 <= uVar13) {
        FUN_71ba33fc(uVar13,uVar16);
        unaff_r10 = extraout_r1;
      }
    }
    puVar3 = *(undefined4 **)(*param_2 + unaff_r10 * 4);
    piVar15 = param_2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar15 = (int *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && piVar15 != (int *)0x0) {
      do {
        uVar7 = piVar15[1];
        if (uVar7 == uVar13) {
          uVar7 = piVar15[3];
          bVar1 = *(byte *)(piVar15 + 2);
          if ((bVar1 & 1) == 0) {
            uVar7 = (uint)(bVar1 >> 1);
          }
          if (uVar7 == uVar6) {
            if ((bVar1 & 1) == 0) {
              if (bVar1 < 2) {
LAB_7154c620:
                uVar2 = 0;
                goto LAB_7154c6bc;
              }
              uVar7 = 0;
              while (*(byte *)((int)piVar15 + uVar7 + 9) == pbVar10[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar1 >> 1 == uVar7) goto LAB_7154c620;
              }
            }
            else {
              iVar11 = imp_memcmp(piVar15[4],pbVar10);
              if (iVar11 == 0) goto LAB_7154c620;
            }
          }
        }
        else {
          if (uVar9 < 2) {
            uVar7 = uVar7 & uVar16 - 1;
          }
          else if (uVar16 <= uVar7) {
            FUN_71ba33fc(uVar7,uVar16);
            uVar7 = extraout_r1_00;
          }
          if (uVar7 != unaff_r10) break;
        }
        piVar15 = (int *)*piVar15;
      } while (piVar15 != (int *)0x0);
    }
  }
  piVar15 = (int *)thunk_MwhHq(0x18);
  pbVar10 = (byte *)*param_5;
  *piVar15 = 0;
  piVar15[1] = uVar13;
  if ((*pbVar10 & 1) == 0) {
    iVar12 = *(int *)(pbVar10 + 4);
    iVar11 = *(int *)(pbVar10 + 8);
    piVar15[2] = *(int *)pbVar10;
    piVar15[3] = iVar12;
    piVar15[4] = iVar11;
  }
  else {
    FUN_712f6d58(piVar15 + 2,*(undefined4 *)(pbVar10 + 8),*(undefined4 *)(pbVar10 + 4));
  }
  *(undefined2 *)(piVar15 + 5) = 0;
  uVar4 = FUN_71ba1e0c(uVar16);
  iVar12 = param_2[4];
  iVar11 = param_2[3];
  uVar4 = FUN_71ba21e8(iVar12,uVar4);
  uVar5 = FUN_71ba1e0c(iVar11 + 1);
  if ((uVar16 == 0) || (iVar11 = FUN_71ba2d10(uVar4,uVar5), iVar11 != 0)) {
    uVar9 = 1;
    if ((2 < uVar16) && (uVar9 = 0, (uVar16 & uVar16 - 1) != 0)) {
      uVar9 = 1;
    }
    uVar9 = uVar9 | uVar16 << 1;
    FUN_71ba13e0(uVar5,iVar12);
    imp_ceilf();
    uVar6 = FUN_71ba1910();
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    FUN_7154c888(param_2,uVar9);
    uVar16 = param_2[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_r10 = uVar16 - 1 & uVar13;
    }
    else {
      unaff_r10 = uVar13;
      if (uVar16 <= uVar13) {
        FUN_71ba33fc(uVar13,uVar16);
        unaff_r10 = extraout_r1_01;
      }
    }
  }
  iVar11 = *param_2;
  piVar8 = *(int **)(iVar11 + unaff_r10 * 4);
  if (piVar8 == (int *)0x0) {
    piVar8 = param_2 + 2;
    *piVar15 = *piVar8;
    *piVar8 = (int)piVar15;
    *(int **)(iVar11 + unaff_r10 * 4) = piVar8;
    if (*piVar15 == 0) goto LAB_7154c6ac;
    uVar13 = *(uint *)(*piVar15 + 4);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar13 = uVar13 & uVar16 - 1;
    }
    else if (uVar16 <= uVar13) {
      FUN_71ba33fc(uVar13,uVar16);
      uVar13 = extraout_r1_02;
    }
    piVar8 = (int *)(*param_2 + uVar13 * 4);
  }
  else {
    *piVar15 = *piVar8;
  }
  *piVar8 = (int)piVar15;
LAB_7154c6ac:
  param_2[3] = param_2[3] + 1;
  uVar2 = 1;
LAB_7154c6bc:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar15;
  return;
}


// =========================================================================
// Function: FUN_7154c888
// Entry: 0x7154c888 | Size: 692 bytes
// =========================================================================

void FUN_7154c888(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar1 = 2;
  if ((param_2 != 1) && (uVar1 = param_2, (param_2 & param_2 - 1) != 0)) {
    uVar1 = thunk_SI_jHZGHEkRozkgfjpWJMmUiRrdj(param_2);
  }
  uVar6 = param_1[1];
  if (uVar1 <= uVar6) {
    if (uVar1 < uVar6) {
      iVar3 = param_1[4];
      uVar2 = FUN_71ba1e0c(param_1[3]);
      FUN_71ba13e0(uVar2,iVar3);
      imp_ceilf();
      uVar9 = FUN_71ba1910();
      if ((uVar6 < 3) ||
         (uVar5 = uVar6 - (uVar6 >> 1 & 0x55555555),
         uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333),
         1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
        uVar9 = thunk_SI_jHZGHEkRozkgfjpWJMmUiRrdj(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1 << (0x20U - LZCOUNT(uVar9 - 1) & 0xff);
      }
      if (uVar9 < uVar1) {
        uVar9 = uVar1;
      }
      uVar1 = uVar9;
      if (uVar9 < uVar6) goto LAB_7154c8d4;
    }
    return;
  }
LAB_7154c8d4:
  if (uVar1 == 0) {
    iVar3 = *param_1;
    *param_1 = 0;
    if (iVar3 != 0) {
      thunk_qNQrlu();
    }
    param_1[1] = 0;
  }
  else {
    if (0x3fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar3 = thunk_MwhHq(uVar1 << 2);
    iVar4 = *param_1;
    *param_1 = iVar3;
    if (iVar4 != 0) {
      thunk_qNQrlu();
    }
    uVar6 = 0;
    param_1[1] = uVar1;
    do {
      *(undefined4 *)(*param_1 + uVar6 * 4) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    puVar7 = (undefined4 *)param_1[2];
    if (puVar7 != (undefined4 *)0x0) {
      uVar9 = puVar7[1];
      uVar6 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar6 < 2) {
        uVar9 = uVar9 & uVar1 - 1;
      }
      else if (uVar1 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar1);
        uVar9 = extraout_r1;
      }
      *(int **)(*param_1 + uVar9 * 4) = param_1 + 2;
      while (puVar8 = puVar7, puVar7 = (undefined4 *)*puVar8, puVar7 != (undefined4 *)0x0) {
        uVar5 = puVar7[1];
        if (uVar6 < 2) {
          uVar5 = uVar5 & uVar1 - 1;
        }
        else if (uVar1 <= uVar5) {
          FUN_71ba33fc(uVar5,uVar1);
          uVar5 = extraout_r1_00;
        }
        if (uVar5 != uVar9) {
          if (*(int *)(*param_1 + uVar5 * 4) == 0) {
            *(undefined4 **)(*param_1 + uVar5 * 4) = puVar8;
            uVar9 = uVar5;
          }
          else {
            *puVar8 = *puVar7;
            *puVar7 = **(undefined4 **)(*param_1 + uVar5 * 4);
            **(undefined4 **)(*param_1 + uVar5 * 4) = puVar7;
            puVar7 = puVar8;
          }
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7154ccd8
// Entry: 0x7154ccd8 | Size: 348 bytes
// =========================================================================

undefined4 * FUN_7154ccd8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  
  iVar1 = param_1[1] - *param_1 >> 2;
  uVar8 = iVar1 * -0x55555555 + 1;
  if (0x15555555 < uVar8) {
    FUN_7154ced8(param_1);
LAB_7154ce30:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  iVar2 = param_1[2] - *param_1 >> 2;
  if (uVar8 < (uint)(iVar2 * 0x55555556)) {
    uVar8 = iVar2 * 0x55555556;
  }
  if (0xaaaaaa9 < (uint)(iVar2 * -0x55555555)) {
    uVar8 = 0x15555555;
  }
  iVar2 = 0;
  if (uVar8 != 0) {
    if (0x15555555 < uVar8) goto LAB_7154ce30;
    iVar2 = thunk_MwhHq(uVar8 * 0xc);
  }
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar9 = (undefined4 *)(iVar2 + iVar1 * 4);
  *puVar9 = uVar3;
  pbVar10 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  puVar9[1] = uVar5;
  puVar9[2] = uVar7;
  puVar12 = (undefined4 *)((int)puVar9 + ((int)pbVar10 - (int)pbVar11));
  pbVar4 = pbVar10;
  puVar6 = puVar12;
  if ((int)pbVar10 - (int)pbVar11 != 0) {
    do {
      uVar3 = *(undefined4 *)(pbVar4 + 4);
      uVar5 = *(undefined4 *)(pbVar4 + 8);
      *puVar6 = *(undefined4 *)pbVar4;
      puVar6[1] = uVar3;
      puVar6[2] = uVar5;
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 0;
      pbVar4[3] = 0;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4 = pbVar4 + 0xc;
      puVar6 = puVar6 + 3;
    } while (pbVar4 != pbVar11);
    do {
      if ((*pbVar10 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar10 + 8));
      }
      pbVar10 = pbVar10 + 0xc;
    } while (pbVar10 != pbVar11);
    pbVar11 = (byte *)*param_1;
  }
  *param_1 = (int)puVar12;
  param_1[1] = (int)(puVar9 + 3);
  param_1[2] = iVar2 + uVar8 * 0xc;
  if (pbVar11 != (byte *)0x0) {
    thunk_qNQrlu(pbVar11);
  }
  return puVar9 + 3;
}


// =========================================================================
// Function: FUN_7154ced8
// Entry: 0x7154ced8 | Size: 20 bytes
// =========================================================================

void FUN_7154ced8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154cf40
// Entry: 0x7154cf40 | Size: 528 bytes
// =========================================================================

undefined4 * FUN_7154cf40(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar1 = param_1[1] - *param_1 >> 2;
  uVar12 = iVar1 * -0x45d1745d + 1;
  if (0x5d1745d < uVar12) {
    FUN_7154d1f4();
LAB_7154d14c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  iVar14 = 0;
  iVar2 = param_1[2] - *param_1 >> 2;
  if (uVar12 < (uint)(iVar2 * 0x745d1746)) {
    uVar12 = iVar2 * 0x745d1746;
  }
  if (0x2e8ba2d < (uint)(iVar2 * -0x45d1745d)) {
    uVar12 = 0x5d1745d;
  }
  if (uVar12 != 0) {
    if (0x5d1745d < uVar12) goto LAB_7154d14c;
    iVar14 = thunk_MwhHq(uVar12 * 0x2c);
  }
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  uVar16 = param_2[6];
  uVar17 = param_2[5];
  uVar10 = param_2[4];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  puVar4 = (undefined4 *)(iVar14 + iVar1 * 4);
  *puVar4 = uVar5;
  uVar3 = *(undefined1 *)(param_2 + 3);
  puVar4[1] = uVar7;
  puVar4[2] = uVar9;
  *(undefined1 *)(puVar4 + 3) = uVar3;
  uVar5 = param_2[7];
  uVar7 = param_2[8];
  uVar9 = param_2[9];
  puVar4[6] = uVar16;
  uVar16 = param_2[10];
  puVar4[7] = uVar5;
  puVar4[8] = uVar7;
  puVar4[9] = uVar9;
  puVar4[10] = uVar16;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  puVar11 = (undefined4 *)*param_1;
  puVar13 = (undefined4 *)param_1[1];
  puVar4[4] = uVar10;
  puVar4[5] = uVar17;
  puVar15 = (undefined4 *)((int)puVar4 + ((int)puVar11 - (int)puVar13));
  puVar6 = puVar11;
  puVar8 = puVar15;
  if ((int)puVar11 - (int)puVar13 != 0) {
    do {
      uVar5 = puVar6[1];
      uVar7 = puVar6[2];
      *puVar8 = *puVar6;
      puVar8[1] = uVar5;
      puVar8[2] = uVar7;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar6 + 3);
      uVar5 = puVar6[4];
      uVar7 = puVar6[6];
      puVar8[5] = puVar6[5];
      puVar8[6] = uVar7;
      puVar8[4] = uVar5;
      uVar5 = puVar6[7];
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[7] = uVar5;
      puVar8[8] = puVar6[8];
      puVar8[9] = puVar6[9];
      puVar8[10] = puVar6[10];
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6 = puVar6 + 0xb;
      puVar8 = puVar8 + 0xb;
    } while (puVar6 != puVar13);
    do {
      FUN_7154bd84(param_1 + 2,puVar11);
      puVar11 = puVar11 + 0xb;
    } while (puVar11 != puVar13);
    puVar13 = (undefined4 *)*param_1;
  }
  *param_1 = (int)puVar15;
  param_1[1] = (int)(puVar4 + 0xb);
  param_1[2] = uVar12 * 0x2c + iVar14;
  if (puVar13 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar13);
  }
  return puVar4 + 0xb;
}


// =========================================================================
// Function: FUN_7154d1f4
// Entry: 0x7154d1f4 | Size: 20 bytes
// =========================================================================

void FUN_7154d1f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154d25c
// Entry: 0x7154d25c | Size: 552 bytes
// =========================================================================

int * FUN_7154d25c(int *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  uVar9 = *(uint *)(param_2 + 4);
  pbVar11 = *(byte **)(param_2 + 8);
  uVar7 = uVar9;
  pbVar2 = pbVar11;
  uVar10 = uVar9;
  if ((*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
    uVar9 = (uint)(*param_2 >> 1);
    uVar7 = uVar9;
    pbVar2 = pbVar11;
    uVar10 = uVar9;
  }
  for (; 3 < uVar9; uVar9 = uVar9 - 4) {
    uVar7 = (*(int *)pbVar11 * 0x5bd1e995 ^ (uint)(*(int *)pbVar11 * 0x5bd1e995) >> 0x18) *
            0x5bd1e995 ^ uVar7 * 0x5bd1e995;
    pbVar11 = pbVar11 + 4;
  }
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_7154d2fc;
      uVar7 = uVar7 ^ (uint)pbVar11[2] << 0x10;
    }
    uVar7 = uVar7 ^ (uint)pbVar11[1] << 8;
  }
  uVar7 = (uVar7 ^ *pbVar11) * 0x5bd1e995;
LAB_7154d2fc:
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar6 = (uVar7 ^ uVar7 >> 0xd) * 0x5bd1e995;
    uVar6 = uVar6 ^ uVar6 >> 0xf;
    uVar7 = uVar9 - (uVar9 >> 1 & 0x55555555);
    uVar7 = (uVar7 & 0x33333333) + (uVar7 >> 2 & 0x33333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar7 < 2) {
      uVar8 = uVar6 & uVar9 - 1;
    }
    else {
      uVar8 = uVar6;
      if (uVar9 <= uVar6) {
        FUN_71ba33fc(uVar6,uVar9);
        uVar8 = extraout_r1;
      }
    }
    piVar3 = *(int **)(*param_1 + uVar8 * 4);
    if ((piVar3 != (int *)0x0) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) {
      do {
        uVar4 = piVar3[1];
        if (uVar4 == uVar6) {
          uVar4 = piVar3[3];
          bVar1 = *(byte *)(piVar3 + 2);
          if ((bVar1 & 1) == 0) {
            uVar4 = (uint)(bVar1 >> 1);
          }
          if (uVar4 == uVar10) {
            if ((bVar1 & 1) == 0) {
              if (bVar1 < 2) {
                return piVar3;
              }
              uVar4 = 0;
              while (*(byte *)((int)piVar3 + uVar4 + 9) == pbVar2[uVar4]) {
                uVar4 = uVar4 + 1;
                if (bVar1 >> 1 == uVar4) {
                  return piVar3;
                }
              }
            }
            else {
              iVar5 = imp_memcmp(piVar3[4],pbVar2);
              if (iVar5 == 0) {
                return piVar3;
              }
            }
          }
        }
        else {
          if (uVar7 < 2) {
            uVar4 = uVar4 & uVar9 - 1;
          }
          else if (uVar9 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar9);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar8) {
            return (int *)0x0;
          }
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  return (int *)0x0;
}


// =========================================================================
// Function: FUN_7154d4f0
// Entry: 0x7154d4f0 | Size: 528 bytes
// =========================================================================

undefined4 * FUN_7154d4f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar1 = param_1[1] - *param_1 >> 2;
  uVar12 = iVar1 * -0x45d1745d + 1;
  if (0x5d1745d < uVar12) {
    FUN_7154d7a4();
LAB_7154d6fc:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  iVar14 = 0;
  iVar2 = param_1[2] - *param_1 >> 2;
  if (uVar12 < (uint)(iVar2 * 0x745d1746)) {
    uVar12 = iVar2 * 0x745d1746;
  }
  if (0x2e8ba2d < (uint)(iVar2 * -0x45d1745d)) {
    uVar12 = 0x5d1745d;
  }
  if (uVar12 != 0) {
    if (0x5d1745d < uVar12) goto LAB_7154d6fc;
    iVar14 = thunk_MwhHq(uVar12 * 0x2c);
  }
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  uVar16 = param_2[6];
  uVar17 = param_2[5];
  uVar10 = param_2[4];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  puVar4 = (undefined4 *)(iVar14 + iVar1 * 4);
  *puVar4 = uVar5;
  uVar3 = *(undefined1 *)(param_2 + 3);
  puVar4[1] = uVar7;
  puVar4[2] = uVar9;
  *(undefined1 *)(puVar4 + 3) = uVar3;
  uVar5 = param_2[7];
  uVar7 = param_2[8];
  uVar9 = param_2[9];
  puVar4[6] = uVar16;
  uVar16 = param_2[10];
  puVar4[7] = uVar5;
  puVar4[8] = uVar7;
  puVar4[9] = uVar9;
  puVar4[10] = uVar16;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  puVar11 = (undefined4 *)*param_1;
  puVar13 = (undefined4 *)param_1[1];
  puVar4[4] = uVar10;
  puVar4[5] = uVar17;
  puVar15 = (undefined4 *)((int)puVar4 + ((int)puVar11 - (int)puVar13));
  puVar6 = puVar11;
  puVar8 = puVar15;
  if ((int)puVar11 - (int)puVar13 != 0) {
    do {
      uVar5 = puVar6[1];
      uVar7 = puVar6[2];
      *puVar8 = *puVar6;
      puVar8[1] = uVar5;
      puVar8[2] = uVar7;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar6 + 3);
      uVar5 = puVar6[4];
      uVar7 = puVar6[6];
      puVar8[5] = puVar6[5];
      puVar8[6] = uVar7;
      puVar8[4] = uVar5;
      uVar5 = puVar6[7];
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[7] = uVar5;
      puVar8[8] = puVar6[8];
      puVar8[9] = puVar6[9];
      puVar8[10] = puVar6[10];
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6 = puVar6 + 0xb;
      puVar8 = puVar8 + 0xb;
    } while (puVar6 != puVar13);
    do {
      FUN_7154becc(param_1 + 2,puVar11);
      puVar11 = puVar11 + 0xb;
    } while (puVar11 != puVar13);
    puVar13 = (undefined4 *)*param_1;
  }
  *param_1 = (int)puVar15;
  param_1[1] = (int)(puVar4 + 0xb);
  param_1[2] = uVar12 * 0x2c + iVar14;
  if (puVar13 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar13);
  }
  return puVar4 + 0xb;
}


// =========================================================================
// Function: FUN_7154d7a4
// Entry: 0x7154d7a4 | Size: 20 bytes
// =========================================================================

void FUN_7154d7a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154d80c
// Entry: 0x7154d80c | Size: 548 bytes
// =========================================================================

undefined4 * FUN_7154d80c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  iVar1 = param_1[1] - *param_1 >> 2;
  uVar11 = iVar1 * -0x45d1745d + 1;
  if (0x5d1745d < uVar11) {
    FUN_7154daf0();
LAB_7154da2c:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  iVar17 = 0;
  iVar2 = param_1[2] - *param_1 >> 2;
  if (uVar11 < (uint)(iVar2 * 0x745d1746)) {
    uVar11 = iVar2 * 0x745d1746;
  }
  if (0x2e8ba2d < (uint)(iVar2 * -0x45d1745d)) {
    uVar11 = 0x5d1745d;
  }
  if (uVar11 != 0) {
    if (0x5d1745d < uVar11) goto LAB_7154da2c;
    iVar17 = thunk_MwhHq(uVar11 * 0x2c);
  }
  uVar3 = param_2[1];
  uVar5 = *param_2;
  uVar19 = param_2[2];
  uVar18 = param_2[6];
  uVar9 = param_2[5];
  uVar10 = param_2[4];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  uVar15 = param_2[3];
  puVar4 = (undefined4 *)(iVar17 + iVar1 * 4);
  *puVar4 = uVar5;
  uVar5 = param_2[7];
  puVar4[4] = uVar10;
  uVar13 = param_2[8];
  uVar10 = param_2[10];
  puVar4[9] = param_2[9];
  puVar4[10] = uVar10;
  puVar4[3] = uVar15;
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  puVar4[7] = uVar5;
  puVar4[8] = uVar13;
  puVar14 = (undefined4 *)((int)puVar4 + ((int)pbVar12 - (int)pbVar16));
  puVar4[1] = uVar3;
  puVar4[2] = uVar19;
  puVar4[5] = uVar9;
  puVar4[6] = uVar18;
  pbVar6 = pbVar12;
  puVar8 = puVar14;
  if ((int)pbVar12 - (int)pbVar16 != 0) {
    do {
      uVar3 = *(undefined4 *)(pbVar6 + 4);
      uVar5 = *(undefined4 *)(pbVar6 + 8);
      *puVar8 = *(undefined4 *)pbVar6;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      pbVar6[8] = 0;
      pbVar6[9] = 0;
      pbVar6[10] = 0;
      pbVar6[0xb] = 0;
      puVar8[3] = *(undefined4 *)(pbVar6 + 0xc);
      uVar3 = *(undefined4 *)(pbVar6 + 0x10);
      uVar5 = *(undefined4 *)(pbVar6 + 0x14);
      puVar8[6] = *(undefined4 *)(pbVar6 + 0x18);
      puVar8[5] = uVar5;
      puVar8[4] = uVar3;
      uVar5 = *(undefined4 *)(pbVar6 + 0x20);
      uVar3 = *(undefined4 *)(pbVar6 + 0x24);
      uVar9 = *(undefined4 *)(pbVar6 + 0x28);
      pbVar6[0x10] = 0;
      pbVar6[0x11] = 0;
      pbVar6[0x12] = 0;
      pbVar6[0x13] = 0;
      pbVar6[0x14] = 0;
      pbVar6[0x15] = 0;
      pbVar6[0x16] = 0;
      pbVar6[0x17] = 0;
      pbVar6[0x18] = 0;
      pbVar6[0x19] = 0;
      pbVar6[0x1a] = 0;
      pbVar6[0x1b] = 0;
      pbVar7 = pbVar6 + 0x2c;
      puVar8[7] = *(undefined4 *)(pbVar6 + 0x1c);
      puVar8[8] = uVar5;
      puVar8[9] = uVar3;
      puVar8[10] = uVar9;
      pbVar6 = pbVar7;
      puVar8 = puVar8 + 0xb;
    } while (pbVar7 != pbVar16);
    do {
      if ((pbVar12[0x10] & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar12 + 0x18));
      }
      if ((*pbVar12 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar12 + 8));
      }
      pbVar12 = pbVar12 + 0x2c;
    } while (pbVar12 != pbVar16);
    pbVar16 = (byte *)*param_1;
  }
  *param_1 = (int)puVar14;
  param_1[1] = (int)(puVar4 + 0xb);
  param_1[2] = uVar11 * 0x2c + iVar17;
  if (pbVar16 != (byte *)0x0) {
    thunk_qNQrlu(pbVar16);
  }
  return puVar4 + 0xb;
}


// =========================================================================
// Function: FUN_7154daf0
// Entry: 0x7154daf0 | Size: 20 bytes
// =========================================================================

void FUN_7154daf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154db58
// Entry: 0x7154db58 | Size: 448 bytes
// =========================================================================

int FUN_7154db58(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int *piStack_28;
  
  iVar7 = param_1[1] - *param_1 >> 2;
  uVar8 = iVar7 * 0x286bca1b + 1;
  if (uVar8 < 0x35e50d8) {
    piStack_28 = param_1 + 2;
    iVar1 = *piStack_28 - *param_1 >> 2;
    if (uVar8 < (uint)(iVar1 * 0x50d79436)) {
      uVar8 = iVar1 * 0x50d79436;
    }
    if (0x1af286a < (uint)(iVar1 * 0x286bca1b)) {
      uVar8 = 0x35e50d7;
    }
    iStack_38 = 0;
    if (uVar8 != 0) {
      if (0x35e50d7 < uVar8) goto LAB_7154dd14;
      iStack_38 = thunk_MwhHq(uVar8 * 0x4c);
    }
    uVar3 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar10 = param_2[3];
    uVar4 = param_2[4];
    iStack_2c = uVar8 * 0x4c + iStack_38;
    uVar5 = param_2[5];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puStack_34 = (undefined4 *)(iStack_38 + iVar7 * 4);
    *puStack_34 = uVar3;
    uVar3 = param_2[6];
    uVar6 = param_2[7];
    uVar9 = param_2[8];
    puStack_34[5] = uVar5;
    puStack_34[4] = uVar4;
    puStack_34[6] = uVar3;
    puStack_34[7] = uVar6;
    puStack_34[8] = uVar9;
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    uVar5 = param_2[0xb];
    puStack_34[1] = uVar11;
    puStack_34[2] = uVar12;
    *(undefined4 *)((int)puStack_34 + 0x2f) = *(undefined4 *)((int)param_2 + 0x2f);
    puStack_34[9] = uVar3;
    puStack_34[10] = uVar4;
    puStack_34[0xb] = uVar5;
    uVar5 = param_2[0x11];
    uVar3 = param_2[0x12];
    uVar4 = param_2[0xe];
    puStack_34[0xd] = param_2[0xd];
    puStack_34[0x12] = uVar3;
    puStack_34[3] = uVar10;
    puStack_34[0x11] = uVar5;
    puStack_30 = puStack_34 + 0x13;
    uVar3 = param_2[0xf];
    uVar5 = param_2[0x10];
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    puStack_34[0xe] = uVar4;
    puStack_34[0xf] = uVar3;
    puStack_34[0x10] = uVar5;
    FUN_7154ddd8(param_1,&iStack_38);
    puVar2 = puStack_34;
    iVar7 = param_1[1];
    while (puStack_30 != puVar2) {
      puStack_30 = puStack_30 + -0x13;
      FUN_71549ee4();
    }
    if (iStack_38 != 0) {
      thunk_qNQrlu();
    }
    return iVar7;
  }
  FUN_7154df98(param_1);
LAB_7154dd14:
                    /* WARNING: Subroutine does not return */
  FUN_712f6cf0();
}


// =========================================================================
// Function: FUN_7154ddd8
// Entry: 0x7154ddd8 | Size: 396 bytes
// =========================================================================

void FUN_7154ddd8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)param_1[1];
  puVar4 = (undefined4 *)(param_2[1] + ((int)puVar7 - (int)puVar8));
  puVar1 = puVar7;
  puVar2 = puVar4;
  if ((int)puVar7 - (int)puVar8 != 0) {
    do {
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      puVar2[2] = puVar1[2];
      *puVar2 = uVar3;
      puVar2[1] = uVar5;
      uVar3 = puVar1[3];
      uVar5 = puVar1[4];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar2[5] = puVar1[5];
      puVar2[4] = uVar5;
      puVar2[3] = uVar3;
      uVar3 = puVar1[6];
      uVar5 = puVar1[7];
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar2[8] = puVar1[8];
      puVar2[7] = uVar5;
      puVar2[6] = uVar3;
      uVar3 = puVar1[9];
      uVar6 = puVar1[10];
      uVar5 = puVar1[0xb];
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      *(undefined4 *)((int)puVar2 + 0x2f) = *(undefined4 *)((int)puVar1 + 0x2f);
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xb] = uVar5;
      puVar2[10] = uVar6;
      puVar2[9] = uVar3;
      puVar2[0xd] = puVar1[0xd];
      puVar2[0xe] = puVar1[0xe];
      puVar2[0xf] = puVar1[0xf];
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar2[0x12] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0x10] = puVar1[0x10];
      puVar2[0x11] = puVar1[0x11];
      puVar2[0x12] = puVar1[0x12];
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1 = puVar1 + 0x13;
      puVar2 = puVar2 + 0x13;
    } while (puVar1 != puVar8);
    do {
      FUN_71549ee4(puVar7);
      puVar7 = puVar7 + 0x13;
    } while (puVar7 != puVar8);
  }
  param_2[1] = puVar4;
  uVar3 = *param_1;
  param_1[1] = uVar3;
  *param_1 = param_2[1];
  param_2[1] = uVar3;
  uVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar3;
  *param_2 = param_2[1];
  return;
}


// =========================================================================
// Function: FUN_7154df98
// Entry: 0x7154df98 | Size: 20 bytes
// =========================================================================

void FUN_7154df98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154e000
// Entry: 0x7154e000 | Size: 620 bytes
// =========================================================================

undefined4 * FUN_7154e000(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar5 = param_1[1] - *param_1 >> 3;
  uVar12 = iVar5 * -0x42108421 + 1;
  if (uVar12 < 0x1084211) {
    iVar1 = 0;
    iVar7 = param_1[2] - *param_1 >> 3;
    if (uVar12 < (uint)(iVar7 * 0x7bdef7be)) {
      uVar12 = iVar7 * 0x7bdef7be;
    }
    if (0x842107 < (uint)(iVar7 * -0x42108421)) {
      uVar12 = 0x1084210;
    }
    if (uVar12 != 0) {
      if (0x1084210 < uVar12) goto LAB_7154e268;
      iVar1 = thunk_MwhHq(uVar12 * 0xf8);
    }
    uVar2 = *param_2;
    uVar13 = param_2[1];
    uVar14 = param_2[2];
    uVar3 = param_2[6];
    uVar4 = param_2[5];
    uVar9 = param_2[4];
    uVar6 = param_2[3];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[6] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    puVar8 = (undefined4 *)(iVar1 + iVar5 * 8);
    *puVar8 = uVar2;
    uVar2 = param_2[7];
    puVar8[6] = uVar3;
    uVar3 = param_2[8];
    uVar11 = param_2[9];
    puVar8[7] = uVar2;
    puVar8[8] = uVar3;
    puVar8[9] = uVar11;
    puVar8[1] = uVar13;
    puVar8[2] = uVar14;
    puVar8[3] = uVar6;
    puVar8[4] = uVar9;
    puVar8[5] = uVar4;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    puVar8[10] = param_2[10];
    puVar8[0xb] = uVar2;
    puVar8[0xc] = uVar3;
    puVar8[0xd] = uVar4;
    *(undefined1 *)(puVar8 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    uVar3 = param_2[0x10];
    uVar4 = param_2[0x11];
    param_2[0xf] = 0;
    puVar8[0xf] = uVar2;
    puVar8[0x10] = uVar3;
    puVar8[0x11] = uVar4;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    imp___aeabi_memcpy4(puVar8 + 0x12,param_2 + 0x12,0x66);
    uVar2 = param_2[0x2e];
    uVar4 = param_2[0x30];
    puVar8[0x2c] = param_2[0x2c];
    uVar3 = param_2[0x2f];
    puVar8[0x2e] = uVar2;
    puVar8[0x2f] = uVar3;
    puVar8[0x30] = uVar4;
    uVar2 = param_2[0x36];
    uVar3 = param_2[0x37];
    uVar4 = param_2[0x38];
    puVar8[0x34] = param_2[0x34];
    puVar8[0x36] = uVar2;
    puVar8[0x37] = uVar3;
    puVar8[0x38] = uVar4;
    uVar2 = param_2[0x32];
    uVar3 = param_2[0x33];
    uVar6 = param_2[0x2d];
    puVar8[0x31] = param_2[0x31];
    uVar4 = param_2[0x39];
    puVar8[0x32] = uVar2;
    uVar2 = param_2[0x3a];
    puVar8[0x33] = uVar3;
    uVar3 = param_2[0x3b];
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2c] = 0;
    param_2[0x2f] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x38] = 0;
    param_2[0x37] = 0;
    param_2[0x36] = 0;
    param_2[0x3b] = 0;
    param_2[0x3a] = 0;
    param_2[0x39] = 0;
    puVar8[0x3a] = uVar2;
    iVar5 = *param_1;
    iVar7 = param_1[1];
    *(undefined1 *)(puVar8 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
    puVar8[0x3c] = param_2[0x3c];
    puVar8[0x39] = uVar4;
    iVar10 = (int)puVar8 + (iVar5 - iVar7);
    puVar8[0x2d] = uVar6;
    uVar2 = param_2[0x35];
    puVar8[0x3b] = uVar3;
    puVar8[0x35] = uVar2;
    FUN_7154e394(param_1 + 2,iVar5,iVar7,iVar10);
    param_1[1] = (int)(puVar8 + 0x3e);
    param_1[2] = iVar1 + uVar12 * 0xf8;
    iVar5 = *param_1;
    *param_1 = iVar10;
    if (iVar5 != 0) {
      thunk_qNQrlu();
    }
    return puVar8 + 0x3e;
  }
  FUN_7154e32c();
LAB_7154e268:
                    /* WARNING: Subroutine does not return */
  FUN_712f6cf0();
}


// =========================================================================
// Function: FUN_7154e32c
// Entry: 0x7154e32c | Size: 20 bytes
// =========================================================================

void FUN_7154e32c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7154e394
// Entry: 0x7154e394 | Size: 468 bytes
// =========================================================================

void FUN_7154e394(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      uVar1 = puVar3[1];
      uVar2 = puVar3[2];
      *param_4 = *puVar3;
      param_4[1] = uVar1;
      param_4[2] = uVar2;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      param_4[3] = puVar3[3];
      uVar1 = puVar3[5];
      uVar2 = puVar3[6];
      param_4[4] = puVar3[4];
      param_4[5] = uVar1;
      param_4[6] = uVar2;
      puVar3[4] = 0;
      puVar3[6] = 0;
      puVar3[5] = 0;
      uVar1 = puVar3[8];
      uVar2 = puVar3[9];
      param_4[7] = puVar3[7];
      param_4[8] = uVar1;
      param_4[9] = uVar2;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[7] = 0;
      uVar1 = puVar3[0xb];
      uVar2 = puVar3[0xc];
      uVar5 = puVar3[0xd];
      param_4[10] = puVar3[10];
      param_4[0xb] = uVar1;
      param_4[0xc] = uVar2;
      param_4[0xd] = uVar5;
      *(undefined1 *)(param_4 + 0xe) = *(undefined1 *)(puVar3 + 0xe);
      uVar1 = puVar3[0x10];
      uVar2 = puVar3[0x11];
      param_4[0xf] = puVar3[0xf];
      param_4[0x10] = uVar1;
      param_4[0x11] = uVar2;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      imp___aeabi_memcpy4(param_4 + 0x12,puVar3 + 0x12,0x66);
      param_4[0x2c] = 0;
      param_4[0x2d] = 0;
      param_4[0x2e] = 0;
      param_4[0x2c] = puVar3[0x2c];
      param_4[0x2d] = puVar3[0x2d];
      param_4[0x2e] = puVar3[0x2e];
      puVar3[0x2c] = 0;
      puVar3[0x2d] = 0;
      puVar3[0x2e] = 0;
      param_4[0x31] = 0;
      param_4[0x30] = 0;
      param_4[0x2f] = 0;
      param_4[0x2f] = puVar3[0x2f];
      param_4[0x30] = puVar3[0x30];
      param_4[0x31] = puVar3[0x31];
      puVar3[0x2f] = 0;
      puVar3[0x30] = 0;
      puVar3[0x31] = 0;
      param_4[0x34] = 0;
      param_4[0x33] = 0;
      param_4[0x32] = 0;
      param_4[0x32] = puVar3[0x32];
      param_4[0x33] = puVar3[0x33];
      param_4[0x34] = puVar3[0x34];
      puVar3[0x32] = 0;
      puVar3[0x33] = 0;
      puVar3[0x34] = 0;
      param_4[0x35] = puVar3[0x35];
      uVar1 = puVar3[0x37];
      uVar2 = puVar3[0x38];
      param_4[0x36] = puVar3[0x36];
      param_4[0x37] = uVar1;
      param_4[0x38] = uVar2;
      uVar1 = puVar3[0x3a];
      uVar2 = puVar3[0x3b];
      puVar3[0x38] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      param_4[0x39] = puVar3[0x39];
      param_4[0x3a] = uVar1;
      param_4[0x3b] = uVar2;
      puVar3[0x3b] = 0;
      puVar3[0x39] = 0;
      puVar3[0x3a] = 0;
      *(undefined1 *)(param_4 + 0x3d) = *(undefined1 *)(puVar3 + 0x3d);
      puVar4 = puVar3 + 0x3e;
      param_4[0x3c] = puVar3[0x3c];
      param_4 = param_4 + 0x3e;
      puVar3 = puVar4;
    } while (puVar4 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 0x3e) {
      FUN_7154a05c(param_2);
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7154e5b8
// Entry: 0x7154e5b8 | Size: 288 bytes
// =========================================================================

void FUN_7154e5b8(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  int iVar5;
  
  if (param_1[3] != 0) {
    piVar1 = (int *)param_1[2];
    while (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
      if ((*(byte *)(piVar1 + 2) & 1) != 0) {
        thunk_qNQrlu(piVar1[4]);
      }
      thunk_qNQrlu(piVar1);
      piVar1 = (int *)iVar3;
    }
    iVar3 = param_1[1];
    param_1[2] = 0;
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        *(undefined4 *)(*param_1 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
    param_1[3] = 0;
  }
  iVar5 = *param_2;
  *param_2 = 0;
  iVar3 = *param_1;
  *param_1 = iVar5;
  if (iVar3 != 0) {
    thunk_qNQrlu();
  }
  param_1[1] = param_2[1];
  iVar5 = param_2[3];
  param_2[1] = 0;
  param_1[3] = iVar5;
  param_1[4] = param_2[4];
  iVar3 = param_2[2];
  param_1[2] = iVar3;
  if (iVar5 != 0) {
    uVar4 = param_1[1];
    uVar2 = *(uint *)(iVar3 + 4);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar2 = uVar4 - 1 & uVar2;
    }
    else if (uVar4 <= uVar2) {
      FUN_71ba33fc();
      uVar2 = extraout_r1;
    }
    *(int **)(*param_1 + uVar2 * 4) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_7154e760
// Entry: 0x7154e760 | Size: 36 bytes
// =========================================================================

byte FUN_7154e760(void)

{
  return DAT_700c3a20 & DAT_711a38e0 != 0;
}


// =========================================================================
// Function: FUN_7154e7dc
// Entry: 0x7154e7dc | Size: 52 bytes
// =========================================================================

void FUN_7154e7dc(void)

{
  if (DAT_711a38e4 != '\0') {
    return;
  }
  DAT_711a38e0 = 0;
  DAT_700c3a20 = 0;
  return;
}


// =========================================================================
// Function: FUN_7154e888
// Entry: 0x7154e888 | Size: 108 bytes
// =========================================================================

void FUN_7154e888(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_711a38e0;
  if (DAT_711a38e4 == '\0') {
    DAT_711a38e0 = 0;
    DAT_700c3a20 = 0;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = DAT_711a3938;
  }
  if (iVar2 != 0 && iVar1 != 0) {
    if (*(int *)(iVar1 + 0x13898) != 0) {
      FUN_714dd738();
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7154fde0
// Entry: 0x7154fde0 | Size: 264 bytes
// =========================================================================

int FUN_7154fde0(void)

{
  int iVar1;
  int *unaff_r4;
  int iVar2;
  bool bVar3;
  
  iVar1 = 0;
  if (DAT_711f6c05 != '\0') {
    iVar1 = DAT_711a3938;
  }
  if (DAT_711f6c05 != '\0' && iVar1 != 0) {
    bVar3 = *(int *)(iVar1 + 0x13898) != 0;
    iVar1 = 0;
    if (bVar3) {
      unaff_r4 = &DAT_711f6d58;
      iVar1 = DAT_711f6d58;
    }
    if ((bVar3 && iVar1 != 0) && (*(int *)(iVar1 + 0x28) == 0xe)) {
      iVar1 = FUN_714f658c(0);
      if (iVar1 != 0) {
        return 0;
      }
      if (((DAT_711ad118 == '\0') && (*(int *)(*unaff_r4 + 0xac) != 0)) &&
         (iVar1 = *(int *)(*(int *)(*unaff_r4 + 0xac) + 0x1f6c), iVar1 != 0)) {
        iVar2 = *(int *)(iVar1 + 0x130);
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 0x8c);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          bVar3 = *(int *)(iVar1 + 0x18) != 0;
          if (bVar3) {
            iVar1 = *(int *)(iVar1 + 0x14);
          }
          if ((bVar3 && iVar1 != 0) && (iVar1 = thunk_FUN_715bf66c(iVar2), iVar1 == 0)) {
            iVar1 = thunk_FUN_715c8334(iVar2);
            if (iVar1 != 0) {
              iVar2 = 0;
            }
            return iVar2;
          }
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7154ffd4
// Entry: 0x7154ffd4 | Size: 316 bytes
// =========================================================================

void FUN_7154ffd4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = 0x3fb33333;
  uVar1 = 0x3ee66666;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 1:
    break;
  case 2:
    uVar2 = 0x40200000;
    uVar1 = 0x3f59999a;
    break;
  case 3:
    uVar2 = 0x40200000;
    uVar1 = 0x3f666666;
    break;
  case 4:
    uVar2 = 0x3fc00000;
    uVar1 = 0x3f0ccccd;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
    uVar2 = 0x40000000;
    uVar1 = 0x3f266666;
    break;
  default:
    uVar2 = 0x40900000;
    uVar1 = 0x3fe66666;
  }
  uVar1 = FUN_71ba240c(uVar1,uVar2);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = FUN_71ba21e8(uVar1,*(undefined4 *)(param_2 + 0x10));
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar4,0x3c8efa35);
  uVar4 = imp_sinf();
  uVar4 = FUN_71ba21e8(uVar1,uVar4);
  param_1[2] = uVar4;
  uVar2 = imp_cosf(uVar2);
  uVar1 = FUN_71ba21e8(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar3,0x3c8efa35);
  uVar4 = imp_sinf();
  uVar4 = FUN_71ba21e8(uVar1,uVar4);
  *param_1 = uVar4;
  uVar2 = imp_cosf(uVar2);
  uVar1 = FUN_71ba21e8(uVar1,uVar2);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: PlyaVKmBMeI_tbqolHKcDVVqJSPfcXK
// Entry: 0x715502b4 | Size: 112 bytes
// =========================================================================

undefined4 PlyaVKmBMeI_tbqolHKcDVVqJSPfcXK(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  uVar2 = 1;
  if (param_1 < 9) {
    iVar1 = FUN_7154fde0();
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 0;
      DAT_700c3a28 = 0;
      DAT_700c3a20 = 1;
      DAT_700c3a2c = 0;
      DAT_700c3a30 = 0x3f000000;
      DAT_700c3a24 = param_1;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return uVar2;
}


// =========================================================================
// Function: uphxiZDeKHBgoDcfeqxoqgQykDEaLKcFf
// Entry: 0x715503f0 | Size: 80 bytes
// =========================================================================

undefined4
uphxiZDeKHBgoDcfeqxoqgQykDEaLKcFf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  uVar1 = FUN_715504ec(&DAT_700c3a20,param_1,param_2,param_3);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return uVar1;
}


// =========================================================================
// Function: FUN_715504ec
// Entry: 0x715504ec | Size: 504 bytes
// =========================================================================

undefined4 FUN_715504ec(char *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_71ba2cf0(param_2 & 0x7fffffff,0x7f800000);
  iVar2 = FUN_71ba0408(param_2 & 0x7fffffff,0x7f800000);
  uVar5 = 2;
  if (iVar2 == 0 && iVar1 == 0) {
    iVar1 = FUN_71ba2cf0(param_3 & 0x7fffffff,0x7f800000);
    iVar2 = FUN_71ba0408(param_3 & 0x7fffffff,0x7f800000);
    if (iVar2 == 0 && iVar1 == 0) {
      iVar1 = FUN_71ba2cf0(param_4 & 0x7fffffff,0x7f800000);
      iVar2 = FUN_71ba0408(param_4 & 0x7fffffff,0x7f800000);
      if (iVar2 == 0 && iVar1 == 0) {
        if (*param_1 == '\0') {
          uVar5 = 3;
        }
        else {
          uVar3 = imp_fmodf(param_2,0x43b40000);
          iVar1 = FUN_71ba2d50(uVar3,0x43340000);
          uVar5 = FUN_71ba0b38(uVar3,0xc3b40000);
          if (iVar1 == 0) {
            uVar5 = uVar3;
          }
          iVar1 = FUN_71ba2d10(uVar5,0xc3340000);
          uVar3 = FUN_71ba0b38(uVar5,0x43b40000);
          if (iVar1 == 0) {
            uVar3 = uVar5;
          }
          *(undefined4 *)(param_1 + 8) = uVar3;
          uVar4 = 0xc1a00000;
          switch(*(undefined4 *)(param_1 + 4)) {
          case 1:
            break;
          case 2:
          case 5:
          case 6:
            uVar4 = 0xc1700000;
            break;
          case 3:
          case 4:
          case 7:
          case 8:
            uVar4 = 0;
            break;
          default:
            uVar4 = 0xc1200000;
          }
          iVar1 = FUN_71ba2d70(param_4,0x3f800000);
          if (iVar1 != 0) {
            param_4 = 0x3f800000;
          }
          uVar5 = 0;
          iVar1 = FUN_71ba2d70(param_4,0);
          if (iVar1 == 0) {
            param_4 = 0;
          }
          *(uint *)(param_1 + 0x10) = param_4;
          iVar1 = FUN_71ba2d70(param_3,0x420c0000);
          if (iVar1 != 0) {
            param_3 = 0x420c0000;
          }
          iVar1 = FUN_71ba2d10(uVar4,param_3);
          if (iVar1 == 0) {
            param_3 = uVar4;
          }
          *(uint *)(param_1 + 0xc) = param_3;
        }
      }
    }
  }
  return uVar5;
}


// =========================================================================
// Function: pRrUjtRDkIoqYscBXkgfIvnymyNILHsnmx
// Entry: 0x715508c0 | Size: 208 bytes
// =========================================================================

undefined4 pRrUjtRDkIoqYscBXkgfIvnymyNILHsnmx(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  uVar3 = DAT_700c3a2c;
  uVar2 = 1;
  if (param_1 < 9) {
    if (DAT_700c3a20 == '\0') {
      uVar2 = 3;
    }
    else {
      uVar2 = 0xc1a00000;
      switch(param_1) {
      case 1:
        break;
      case 2:
      case 5:
      case 6:
        uVar2 = 0xc1700000;
        break;
      case 3:
      case 4:
      case 7:
      case 8:
        uVar2 = 0;
        break;
      default:
        uVar2 = 0xc1200000;
      }
      DAT_700c3a24 = param_1;
      iVar1 = FUN_71ba2d70(DAT_700c3a2c,0x420c0000);
      if (iVar1 != 0) {
        uVar3 = 0x420c0000;
      }
      iVar1 = FUN_71ba2d10(uVar2,uVar3);
      DAT_700c3a2c = uVar3;
      if (iVar1 == 0) {
        DAT_700c3a2c = uVar2;
      }
      uVar2 = 0;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return uVar2;
}


// =========================================================================
// Function: FmUhhGTiwVmaubEIFpxtKdaZxKCWa
// Entry: 0x71550a98 | Size: 52 bytes
// =========================================================================

void FmUhhGTiwVmaubEIFpxtKdaZxKCWa(void)

{
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  DAT_700c3a20 = 0;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return;
}


// =========================================================================
// Function: FJcmcNXJOwEiwCXIKSDPrvQWjtfHE_fuGm
// Entry: 0x71550b5c | Size: 52 bytes
// =========================================================================

undefined1 FJcmcNXJOwEiwCXIKSDPrvQWjtfHE_fuGm(void)

{
  undefined1 uVar1;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
  uVar1 = DAT_700c3a20;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
  return uVar1;
}


// =========================================================================
// Function: WWPJsiylocTyexOlUslRrfWXKlGNhruS
// Entry: 0x71550c20 | Size: 224 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WWPJsiylocTyexOlUslRrfWXKlGNhruS(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puStack_38;
  uint uStack_34;
  int *piStack_28;
  int iStack_1c;
  
  ppuVar3 = &puStack_38;
  iStack_1c = _ext___stack_chk_guard;
  iVar1 = FUN_71ba2cf0(param_1 & 0x7fffffff,0x7f800000);
  iVar2 = FUN_71ba0408(param_1 & 0x7fffffff,0x7f800000);
  if ((iVar2 == 0 && iVar1 == 0) && (DAT_712017fc != 0)) {
    puStack_38 = &DAT_70b0eb6c;
    uStack_34 = param_1;
    piStack_28 = (int *)&puStack_38;
    FUN_717ccb10(DAT_712017fc,&puStack_38);
    if ((undefined **)piStack_28 == &puStack_38) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = 0x14;
      ppuVar3 = (undefined **)piStack_28;
      if (piStack_28 == (int *)0x0) goto LAB_71550cdc;
    }
    (**(code **)((int)*ppuVar3 + iVar1))();
  }
LAB_71550cdc:
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: RBFrHaMLo_oBRgfHPaGPBAgkBmjGHugL
// Entry: 0x71550e08 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RBFrHaMLo_oBRgfHPaGPBAgkBmjGHugL(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    apuStack_30[0] = &DAT_70b0eb90;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71550e8c;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71550e8c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7155108c
// Entry: 0x7155108c | Size: 4 bytes
// =========================================================================

void FUN_7155108c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715510a8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71551574
// Entry: 0x71551574 | Size: 4 bytes
// =========================================================================

void FUN_71551574(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71551590 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71551640
// Entry: 0x71551640 | Size: 2788 bytes
// =========================================================================

void FUN_71551640(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                 code *param_6)

{
  short sVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short *psVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  int *piVar19;
  int *piVar20;
  int unaff_r6;
  int *piVar21;
  uint uVar22;
  char *pcVar23;
  int iVar24;
  uint uVar25;
  uint unaff_lr;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined4 uStack_488;
  uint uStack_484;
  uint uStack_480;
  uint uStack_47c;
  uint uStack_478;
  uint auStack_470 [3];
  byte bStack_461;
  int iStack_460;
  undefined1 uStack_45c;
  undefined2 uStack_458;
  undefined4 uStack_454;
  undefined1 auStack_450 [6];
  undefined2 uStack_44a;
  short sStack_440;
  undefined1 uStack_43e;
  short sStack_42e;
  undefined1 uStack_42c;
  short sStack_41c;
  undefined1 uStack_41a;
  short sStack_40a;
  undefined1 uStack_408;
  short sStack_3f8;
  undefined1 uStack_3f6;
  short sStack_3e6;
  undefined1 uStack_3e4;
  short sStack_3d4;
  undefined1 uStack_3d2;
  short sStack_3c2;
  undefined1 uStack_3c0;
  short sStack_3b0;
  undefined1 uStack_3ae;
  short sStack_39e;
  undefined1 uStack_39c;
  short sStack_38c;
  undefined1 uStack_38a;
  short sStack_37a;
  undefined1 uStack_378;
  short sStack_368;
  undefined1 uStack_366;
  short sStack_356;
  undefined1 uStack_354;
  short sStack_344;
  undefined1 uStack_342;
  short sStack_332;
  undefined1 uStack_330;
  short sStack_320;
  undefined1 uStack_31e;
  uint auStack_30c [50];
  uint uStack_244;
  undefined4 uStack_240;
  undefined1 auStack_23c [536];
  
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  puVar12 = (ushort *)(param_1 + 2);
  *puVar12 = 0;
  iVar16 = *(int *)(param_3 + 0x12);
  uVar22 = *(uint *)(param_3 + 0x129);
  iVar13 = iVar16 - uVar22;
  bVar28 = SBORROW4(iVar13,0x8000);
  iVar24 = iVar13 + -0x8000;
  bVar27 = iVar13 == 0x8000;
  if (iVar13 < 0x8001) {
    unaff_r6 = uVar22 + 8;
    bVar28 = SBORROW4(unaff_r6,iVar16);
    iVar24 = unaff_r6 - iVar16;
    bVar27 = unaff_r6 == iVar16;
  }
  if (!bVar27 && iVar24 < 0 == bVar28) {
    return;
  }
  iVar24 = *(int *)(param_3 + 3);
  uVar25 = uVar22 & 7;
  bVar27 = uVar25 != 0;
  if (bVar27) {
    unaff_lr = 8 - uVar25;
  }
  iVar13 = uVar22 + 0x10;
  pbVar18 = (byte *)(iVar24 + ((int)uVar22 >> 3));
  bVar4 = *pbVar18;
  if (bVar27) {
    pbVar18 = (byte *)(uint)pbVar18[1];
  }
  uVar14 = (uint)bVar4 << uVar25;
  *(int *)(param_3 + 0x129) = unaff_r6;
  if (bVar27) {
    uVar14 = uVar14 | (uint)pbVar18 >> (unaff_lr & 0xff);
  }
  if (iVar16 < iVar13) {
    return;
  }
  bVar5 = param_1[8];
  pbVar18 = (byte *)(iVar24 + (unaff_r6 >> 3));
  bVar4 = *pbVar18;
  uVar15 = (uint)bVar4;
  bVar4 = bVar5 | bVar4 << uVar25;
  param_1[8] = bVar4;
  if (uVar25 != 0) {
    bVar5 = pbVar18[1];
    uVar15 = 8 - uVar25;
  }
  uVar26 = uVar22 + 0x20;
  *(int *)(param_3 + 0x129) = iVar13;
  if (uVar25 != 0) {
    param_1[8] = bVar4 | bVar5 >> (uVar15 & 0xff);
  }
  if (iVar16 < (int)uVar26) {
    return;
  }
  *puVar12 = 0;
  pcVar23 = (char *)(iVar24 + (iVar13 >> 3));
  bVar4 = param_1[3];
  bVar5 = *pcVar23 << uVar25;
  *(byte *)puVar12 = bVar5;
  if (uVar25 != 0) {
    *(byte *)puVar12 = bVar5 | (byte)pcVar23[1] >> (8 - uVar25 & 0xff);
  }
  *(uint *)(param_3 + 0x129) = uVar22 + 0x18;
  pbVar18 = (byte *)(iVar24 + ((int)(uVar22 + 0x18) >> 3));
  bVar5 = *pbVar18;
  bVar4 = bVar4 | bVar5 << uVar25;
  param_1[3] = bVar4;
  if (uVar25 != 0) {
    bVar5 = pbVar18[1];
  }
  *(uint *)(param_3 + 0x129) = uVar26;
  if (uVar25 != 0) {
    param_1[3] = bVar4 | bVar5 >> (8 - uVar25 & 0xff);
  }
  if (iVar16 < (int)(uVar22 + 0x40)) {
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar15 = uVar26 & 7;
  pcVar23 = (char *)(iVar24 + ((int)uVar26 >> 3));
  uVar25 = 8 - uVar15;
  bVar4 = *pcVar23 << uVar15;
  param_1[4] = bVar4;
  if (uVar15 != 0) {
    param_1[4] = bVar4 | (byte)pcVar23[1] >> (uVar25 & 0xff);
  }
  *(uint *)(param_3 + 0x129) = uVar22 + 0x28;
  pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 0x28) >> 3));
  bVar4 = param_1[5] | *pcVar23 << uVar15;
  param_1[5] = bVar4;
  if (uVar15 != 0) {
    param_1[5] = bVar4 | (byte)pcVar23[1] >> (uVar25 & 0xff);
  }
  *(uint *)(param_3 + 0x129) = uVar22 + 0x30;
  pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 0x30) >> 3));
  bVar4 = param_1[6] | *pcVar23 << uVar15;
  param_1[6] = bVar4;
  if (uVar15 != 0) {
    param_1[6] = bVar4 | (byte)pcVar23[1] >> (uVar25 & 0xff);
  }
  *(uint *)(param_3 + 0x129) = uVar22 + 0x38;
  pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 0x38) >> 3));
  bVar4 = param_1[7] | *pcVar23 << uVar15;
  param_1[7] = bVar4;
  if (uVar15 != 0) {
    param_1[7] = bVar4 | (byte)pcVar23[1] >> (uVar25 & 0xff);
  }
  *param_1 = 1;
  *(uint *)(param_3 + 0x129) = uVar22 + 0x40;
  if ((uVar14 & 0xff) != 1) {
    uVar11 = 2;
LAB_71551870:
    param_1[9] = uVar11;
    return;
  }
  uVar22 = (uint)*puVar12;
  if (param_5 <= uVar22) {
    uVar11 = 4;
    goto LAB_71551870;
  }
  bVar4 = param_1[8];
  if (0xe < bVar4) {
    uVar11 = 3;
    goto LAB_71551870;
  }
  uVar25 = param_4;
  if ((bVar4 != 0xb) && (uVar25 = (uint)*(byte *)(param_4 + 0xa0), uVar25 == 0)) {
    uVar11 = 5;
    goto LAB_71551870;
  }
  piVar21 = (int *)(param_2 + 4);
  piVar17 = (int *)*piVar21;
  piVar20 = piVar21;
  piVar19 = piVar21;
  if (piVar17 != (int *)0x0) {
    do {
      uVar25 = (uint)*(ushort *)(piVar17 + 4);
      piVar3 = piVar17;
      if (uVar25 < uVar22) {
        piVar17 = piVar17 + 1;
        piVar3 = piVar19;
      }
      piVar19 = piVar3;
      piVar17 = (int *)*piVar17;
    } while (piVar17 != (int *)0x0);
    if ((piVar19 != piVar21) &&
       (uVar25 = (uint)*(ushort *)(piVar19 + 4), piVar20 = piVar19, uVar22 < uVar25)) {
      piVar20 = piVar21;
    }
  }
  if (bVar4 != 0 && bVar4 != 0xb) {
    if (piVar21 != piVar20) {
      uVar25 = (uint)*(byte *)(piVar20 + 5);
    }
    if (piVar21 == piVar20 || uVar25 == 0) {
      uVar11 = 8;
      goto LAB_71551870;
    }
  }
  if (piVar21 == piVar20) {
    imp___aeabi_memclr8(&uStack_458,0x430);
    FUN_715524a4(&uStack_458);
  }
  else {
    imp___aeabi_memcpy4(&uStack_458,piVar20 + 5,0x430);
  }
  uStack_45c = 1;
  auStack_470[2] = 0;
  auStack_470[1] = 0;
  auStack_470[0] = 0;
  iStack_460 = param_3;
  uVar11 = uStack_45c;
  if (0xe < bVar4) goto LAB_71552140;
  switch(bVar4) {
  case 0:
    iVar24 = FUN_71552a08(&iStack_460,auStack_450);
    uStack_458 = CONCAT11(uStack_458._1_1_,1);
    goto LAB_71551d68;
  case 1:
    iVar24 = FUN_7155367c(&iStack_460,auStack_470,0);
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
      uVar22 = auStack_470[2];
      if ((auStack_470[0] & 1) == 0) {
        uVar22 = (uint)auStack_470 | 1;
      }
      iVar24 = FUN_7154a2d8(param_4,uVar22);
      if (iVar24 != 0xffff) {
        FUN_7153e7c4(&uStack_488,auStack_450,param_4);
        goto LAB_71551dd4;
      }
LAB_71552064:
      uStack_45c = 6;
      uVar11 = uStack_45c;
    }
    break;
  case 2:
    iVar24 = FUN_715538a0(&iStack_460,&bStack_461);
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
      FUN_7153ebc8(&uStack_488,auStack_450,param_4,bStack_461);
LAB_71551dd4:
      if ((char)uStack_488 == '\0') goto LAB_71552130;
      goto LAB_715520a4;
    }
    break;
  case 3:
    iVar24 = FUN_715538a0(&iStack_460,&bStack_461);
    uVar11 = uStack_45c;
    if ((iVar24 != 0) &&
       (iVar24 = FUN_71553910(&iStack_460,&uStack_488), uVar11 = uStack_45c, iVar24 != 0)) {
      sVar1 = (&sStack_440)[(uint)bStack_461 * 9];
      if (sVar1 == -1) {
        uStack_45c = 7;
      }
      if (sStack_440 == sVar1) {
        uStack_43e = (char)uStack_488;
      }
      if (sStack_42e == sVar1) {
        uStack_42c = (char)uStack_488;
      }
      if (sStack_41c == sVar1) {
        uStack_41a = (char)uStack_488;
      }
      if (sStack_40a == sVar1) {
        uStack_408 = (char)uStack_488;
      }
      if (sStack_3f8 == sVar1) {
        uStack_3f6 = (char)uStack_488;
      }
      if (sStack_3e6 == sVar1) {
        uStack_3e4 = (char)uStack_488;
      }
      if (sStack_3d4 == sVar1) {
        uStack_3d2 = (char)uStack_488;
      }
      if (sStack_3c2 == sVar1) {
        uStack_3c0 = (char)uStack_488;
      }
      if (sStack_3b0 == sVar1) {
        uStack_3ae = (char)uStack_488;
      }
      if (sStack_39e == sVar1) {
        uStack_39c = (char)uStack_488;
      }
      if (sStack_38c == sVar1) {
        uStack_38a = (char)uStack_488;
      }
      if (sStack_37a == sVar1) {
        uStack_378 = (char)uStack_488;
      }
      if (sStack_368 == sVar1) {
        uStack_366 = (char)uStack_488;
      }
      if (sStack_356 == sVar1) {
        uStack_354 = (char)uStack_488;
      }
      if (sStack_344 == sVar1) {
        uStack_342 = (char)uStack_488;
      }
      if (sStack_332 == sVar1) {
        uStack_330 = (char)uStack_488;
      }
      if (sStack_320 == sVar1) {
        uStack_31e = (char)uStack_488;
      }
LAB_71552070:
      uVar11 = uStack_45c;
      if (sVar1 != -1) goto LAB_715520a4;
    }
    break;
  case 4:
    iVar24 = FUN_71553980(&iStack_460,auStack_450);
LAB_71551d68:
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
LAB_715520a4:
      if (*(int *)(param_3 + 0x12) != *(int *)(param_3 + 0x129)) goto LAB_71552144;
      if ((char)uStack_458 != '\0') {
        if (uStack_240 != 0) {
          iVar24 = (*param_6)();
          uVar11 = 7;
          if (iVar24 == 0) break;
        }
        iVar24 = FUN_7153f47c(auStack_450,param_4,0,0);
        uVar11 = 7;
        if (iVar24 != 0) break;
      }
      uVar10 = FUN_71554898(param_2,puVar12);
      imp___aeabi_memcpy4(uVar10,&uStack_458,0x430);
      uVar11 = 0;
    }
    break;
  case 5:
    iVar24 = FUN_7155367c(&iStack_460,auStack_470,0);
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
      uVar22 = auStack_470[2];
      if ((auStack_470[0] & 1) == 0) {
        uVar22 = (uint)auStack_470 | 1;
      }
      iVar24 = FUN_7154a564(param_4,uVar22);
      uStack_44a = (undefined2)iVar24;
      if (iVar24 != 0xffff) goto LAB_715520a4;
      uStack_45c = 6;
      uVar11 = uStack_45c;
    }
    break;
  case 6:
    uStack_480 = 0xffffffff;
    uStack_484 = 0xffffffff;
    uStack_488 = 0xffffffff;
    iVar24 = FUN_715538a0(&iStack_460,&bStack_461);
    uVar11 = uStack_45c;
    if ((iVar24 != 0) &&
       (iVar24 = FUN_71553d08(&iStack_460,&uStack_488), uVar11 = uStack_45c, iVar24 != 0)) {
      psVar8 = &sStack_440;
      sVar1 = psVar8[(uint)bStack_461 * 9];
      if (sVar1 == -1) {
        uStack_45c = 7;
      }
      iVar24 = 0x132;
      do {
        if (*psVar8 == sVar1) {
          *(uint *)(psVar8 + 7) = uStack_480;
          *(uint *)(psVar8 + 5) = uStack_484;
          *(uint *)(psVar8 + 3) = uStack_488;
        }
        iVar24 = iVar24 + -0x12;
        psVar8 = psVar8 + 9;
      } while (iVar24 != 0);
      goto LAB_71552070;
    }
    break;
  case 7:
    iVar24 = FUN_715538a0(&iStack_460,&bStack_461);
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
      iVar24 = FUN_71553e5c(&iStack_460,auStack_450,param_4,bStack_461);
      goto LAB_71551d68;
    }
    break;
  case 8:
    puVar9 = (undefined4 *)((uint)&uStack_488 | 4);
    uVar22 = uStack_488 >> 0x10;
    puVar9[3] = 0x3f800000;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    uStack_488 = CONCAT22((ushort)uVar22 & 0xff00,0xffff);
    iVar24 = FUN_71554018(&iStack_460,&uStack_488);
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
      uVar22 = FUN_7155609c(auStack_450,uStack_488 & 0xffff);
      if (uVar22 == 10) {
        if (uStack_244 < 10) {
          uVar22 = uStack_244;
          uStack_244 = uStack_244 + 1;
LAB_71552088:
          auStack_30c[uVar22 * 5] = uStack_488;
          auStack_30c[uVar22 * 5 + 1] = uStack_484;
          auStack_30c[uVar22 * 5 + 2] = uStack_480;
          auStack_30c[uVar22 * 5 + 3] = uStack_47c;
          auStack_30c[uVar22 * 5 + 4] = uStack_478;
          goto LAB_715520a4;
        }
      }
      else if (uVar22 < 10) goto LAB_71552088;
LAB_71552130:
      uStack_45c = 7;
      uVar11 = uStack_45c;
    }
    break;
  case 9:
    iVar24 = FUN_7155367c(&iStack_460,auStack_470,0);
    uVar11 = uStack_45c;
    if (iVar24 != 0) {
      uVar22 = auStack_470[2];
      if ((auStack_470[0] & 1) == 0) {
        uVar22 = (uint)auStack_470 | 1;
      }
      iVar24 = FUN_7154a7b4(param_4,uVar22);
      if (iVar24 == 0xffff) goto LAB_71552064;
      iVar24 = FUN_7153f3a4(auStack_450);
      if (iVar24 != 0) goto LAB_715520a4;
      goto LAB_71552038;
    }
    break;
  case 10:
    uVar22 = *(uint *)(param_3 + 0x129);
    if ((int)(uVar22 + 0x20) <= *(int *)(param_3 + 0x12)) {
      iVar24 = *(int *)(param_3 + 3);
      uVar25 = uVar22 & 7;
      uVar14 = 8 - uVar25;
      pcVar23 = (char *)(iVar24 + ((int)uVar22 >> 3));
      bVar4 = *pcVar23 << uVar25;
      if (uVar25 != 0) {
        bVar4 = bVar4 | (byte)pcVar23[1] >> (uVar14 & 0xff);
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 8;
      pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 8) >> 3));
      bVar5 = *pcVar23 << uVar25;
      if (uVar25 != 0) {
        bVar5 = bVar5 | (byte)pcVar23[1] >> (uVar14 & 0xff);
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 0x10;
      pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 0x10) >> 3));
      bVar6 = *pcVar23 << uVar25;
      if (uVar25 != 0) {
        bVar6 = bVar6 | (byte)pcVar23[1] >> (uVar14 & 0xff);
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 0x18;
      pbVar18 = (byte *)(iVar24 + ((int)(uVar22 + 0x18) >> 3));
      bVar7 = *pbVar18;
      bVar2 = bVar7 << uVar25;
      if (uVar25 != 0) {
        bVar7 = pbVar18[1];
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 0x20;
      if (uVar25 != 0) {
        bVar2 = bVar2 | bVar7 >> (uVar14 & 0xff);
      }
      uStack_240 = CONCAT13(bVar2,CONCAT12(bVar6,CONCAT11(bVar5,bVar4)));
      goto LAB_715520a4;
    }
    break;
  case 0xb:
    uVar22 = *(uint *)(param_3 + 0x129);
    if ((int)(uVar22 + 0x20) <= *(int *)(param_3 + 0x12)) {
      iVar24 = *(int *)(param_3 + 3);
      uVar25 = uVar22 & 7;
      uVar14 = 8 - uVar25;
      pcVar23 = (char *)(iVar24 + ((int)uVar22 >> 3));
      bVar4 = *pcVar23 << uVar25;
      if (uVar25 != 0) {
        bVar4 = bVar4 | (byte)pcVar23[1] >> (uVar14 & 0xff);
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 8;
      pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 8) >> 3));
      bVar5 = *pcVar23 << uVar25;
      if (uVar25 != 0) {
        bVar5 = bVar5 | (byte)pcVar23[1] >> (uVar14 & 0xff);
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 0x10;
      pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 0x10) >> 3));
      bVar6 = *pcVar23 << uVar25;
      uStack_454._3_1_ = 0;
      if (uVar25 != 0) {
        bVar6 = bVar6 | (byte)pcVar23[1] >> (uVar14 & 0xff);
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 0x18;
      pcVar23 = (char *)(iVar24 + ((int)(uVar22 + 0x18) >> 3));
      bVar7 = *pcVar23 << uVar25;
      if (uVar25 != 0) {
        uStack_454._3_1_ = pcVar23[1];
      }
      *(uint *)(param_3 + 0x129) = uVar22 + 0x20;
      if (uVar25 != 0) {
        bVar7 = bVar7 | uStack_454._3_1_ >> (uVar14 & 0xff);
      }
      uStack_454 = CONCAT13(bVar7,CONCAT12(bVar6,CONCAT11(bVar5,bVar4)));
      if ((uStack_454 != 0) && (iVar24 = (*param_6)(), iVar24 != 0)) {
        uStack_458 = 0;
        goto LAB_715520a4;
      }
    }
    uStack_458 = 0;
LAB_71552038:
    uStack_45c = 7;
    uVar11 = uStack_45c;
    break;
  case 0xc:
    if (uStack_458._1_1_ == '\0') {
      imp___aeabi_memcpy4(auStack_23c,auStack_450,0x214);
      uStack_458 = CONCAT11(1,(char)uStack_458);
      goto LAB_715520a4;
    }
LAB_71551b28:
    uStack_45c = 9;
    uVar11 = uStack_45c;
    break;
  default:
    if (uStack_458._1_1_ == '\0') goto LAB_71551b28;
    if (bVar4 == 0xe) {
      imp___aeabi_memcpy4(auStack_450,auStack_23c,0x214);
    }
    uStack_458 = uStack_458 & 0xff;
    goto LAB_715520a4;
  }
LAB_71552140:
  param_1[9] = uVar11;
LAB_71552144:
  if ((auStack_470[0] & 1) == 0) {
    return;
  }
  thunk_qNQrlu(auStack_470[2]);
  return;
}


// =========================================================================
// Function: FUN_715524a4
// Entry: 0x715524a4 | Size: 1356 bytes
// =========================================================================

void FUN_715524a4(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  param_1[0xa4] = 0xffff;
  param_1[0x116] = 0xffff;
  param_1[0x111] = 0;
  param_1[0x100] = 0xffff;
  param_1[0xf6] = 0xffff;
  param_1[0xec] = 0xffff;
  param_1[0xe2] = 0xffff;
  param_1[0xd8] = 0xffff;
  param_1[0xce] = 0xffff;
  param_1[0xc4] = 0xffff;
  param_1[0xba] = 0xffff;
  param_1[0xb0] = 0xffff;
  param_1[0xa6] = 0xffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0x1ae] = 0xffff;
  param_1[0x20a] = 0xffff;
  param_1[0x200] = 0xffff;
  param_1[0x1f6] = 0xffff;
  param_1[0x1ec] = 0xffff;
  param_1[0x1e2] = 0xffff;
  param_1[0x1d8] = 0xffff;
  param_1[0x1ce] = 0xffff;
  param_1[0x1c4] = 0xffff;
  param_1[0x1ba] = 0xffff;
  param_1[0xc] = 0xffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x67) = 1;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6e) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x82) = 1;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x87) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x83) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x9b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x99) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x97) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9d) = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x117) = 1;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xea) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined4 *)(param_1 + 0xda) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11e) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined4 *)(param_1 + 0x121) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x123) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x127) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x129) = 1;
  *(undefined4 *)(param_1 + 0x12a) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x132) = 1;
  *(undefined4 *)(param_1 + 0x133) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x135) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x137) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x139) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x13b) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x142) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x145) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x147) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x149) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14b) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14d) = 1;
  *(undefined4 *)(param_1 + 0x14e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x152) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x157) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x156) = 1;
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x15f) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x162) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x166) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x168) = 1;
  *(undefined4 *)(param_1 + 0x16f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x171) = 1;
  *(undefined4 *)(param_1 + 0x172) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x176) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x17a) = 1;
  *(undefined4 *)(param_1 + 0x181) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17b) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x183) = 1;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x186) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18c) = 1;
  *(undefined4 *)(param_1 + 0x193) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x191) = 0xffffffff;
  *(undefined4 *)(param_1 + 399) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x195) = 1;
  *(undefined4 *)(param_1 + 0x196) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x19e) = 1;
  *(undefined4 *)(param_1 + 0x1a5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a3) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a7) = 1;
  *(undefined4 *)(param_1 + 0x1aa) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
  param_1[0x1b0] = 0xffff;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x212) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x216) = 0;
  *(undefined1 *)(param_1 + 0x20b) = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x206) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x201) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fa) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x1fe) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1f7) = 0;
  *(undefined4 *)(param_1 + 0x1ee) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f2) = 0;
  *(undefined4 *)(param_1 + 500) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ed) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e6) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ea) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e3) = 0;
  *(undefined4 *)(param_1 + 0x1da) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d6) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1ca) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1c5) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c2) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  return;
}


// =========================================================================
// Function: FUN_71552a08
// Entry: 0x71552a08 | Size: 2792 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71552a08(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  bool bVar18;
  uint uStack_15c;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  param_2[3] = 0;
  *param_2 = 0xffff0000;
  param_2[1] = 0xffff;
  uStack_148 = 0xffffffff;
  uStack_144 = 0xffffffff;
  uStack_140 = 0xffffffff;
  uStack_13c = 0xffffffff;
  puVar6 = (ushort *)(param_2 + 4);
  puVar6[0] = 0xffff;
  puVar6[1] = 1;
  uStack_3c = 0xffffffff;
  param_2[5] = 0xffffffff;
  param_2[6] = 0xffffffff;
  param_2[7] = 0xffffffff;
  param_2[8] = 0xffffffff;
  uStack_34 = 0xffffffff;
  uStack_40 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x2a) = 0xffffffff;
  uStack_48 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uStack_50 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x32) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x26) = 0xffffffff;
  uStack_58 = 0xffffffff;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0xffffffff;
  param_2[0x10] = 0xffffffff;
  uStack_5c = 0xffffffff;
  uStack_60 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x52) = 0xffffffff;
  uStack_68 = 0xffffffff;
  uStack_6c = 0xffffffff;
  uStack_70 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x4e) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x4a) = 0xffffffff;
  uStack_78 = 0xffffffff;
  param_2[0x17] = 0xffffffff;
  param_2[0x18] = 0xffffffff;
  param_2[0x19] = 0xffffffff;
  uStack_7c = 0xffffffff;
  uStack_80 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x76) = 0xffffffff;
  uStack_88 = 0xffffffff;
  uStack_8c = 0xffffffff;
  uStack_90 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x72) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x6e) = 0xffffffff;
  uStack_98 = 0xffffffff;
  param_2[0x20] = 0xffffffff;
  param_2[0x21] = 0xffffffff;
  param_2[0x22] = 0xffffffff;
  uStack_9c = 0xffffffff;
  uStack_a0 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x9a) = 0xffffffff;
  uStack_a8 = 0xffffffff;
  uStack_ac = 0xffffffff;
  uStack_b0 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x96) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x92) = 0xffffffff;
  uStack_b8 = 0xffffffff;
  param_2[0x29] = 0xffffffff;
  param_2[0x2a] = 0xffffffff;
  param_2[0x2b] = 0xffffffff;
  uStack_bc = 0xffffffff;
  uStack_c0 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xbe) = 0xffffffff;
  uStack_c8 = 0xffffffff;
  uStack_cc = 0xffffffff;
  uStack_d0 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xba) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xb6) = 0xffffffff;
  uStack_d8 = 0xffffffff;
  param_2[0x32] = 0xffffffff;
  param_2[0x33] = 0xffffffff;
  param_2[0x34] = 0xffffffff;
  uStack_dc = 0xffffffff;
  uStack_e0 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xe2) = 0xffffffff;
  uStack_e8 = 0xffffffff;
  uStack_ec = 0xffffffff;
  uStack_f0 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xde) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xda) = 0xffffffff;
  uStack_f8 = 0xffffffff;
  param_2[0x3b] = 0xffffffff;
  param_2[0x3c] = 0xffffffff;
  param_2[0x3d] = 0xffffffff;
  uStack_fc = 0xffffffff;
  uStack_100 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x106) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xfe) = 0xffffffff;
  uStack_108 = 0xffffffff;
  uStack_10c = 0xffffffff;
  uStack_110 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x102) = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x10e) = 1;
  uStack_118 = 0xffffffff;
  param_2[0x44] = 0xffffffff;
  param_2[0x45] = 0xffffffff;
  param_2[0x46] = 0xffffffff;
  uStack_11c = 0xffffffff;
  uStack_120 = 0xffffffff;
  *(undefined2 *)(param_2 + 0x48) = 1;
  *(undefined4 *)((int)param_2 + 0x126) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x122) = 0xffffffff;
  uStack_128 = 0xffffffff;
  uStack_12c = 0xffffffff;
  uStack_130 = 0xffffffff;
  *(undefined2 *)(param_2 + 9) = 1;
  *(undefined2 *)((int)param_2 + 0x36) = 1;
  *(undefined2 *)(param_2 + 0x12) = 1;
  *(undefined2 *)((int)param_2 + 0x5a) = 1;
  *(undefined2 *)(param_2 + 0x1b) = 1;
  *(undefined2 *)((int)param_2 + 0x7e) = 1;
  *(undefined2 *)(param_2 + 0x24) = 1;
  *(undefined2 *)((int)param_2 + 0xa2) = 1;
  *(undefined2 *)(param_2 + 0x2d) = 1;
  *(undefined2 *)((int)param_2 + 0xc6) = 1;
  *(undefined2 *)(param_2 + 0x36) = 1;
  *(undefined2 *)((int)param_2 + 0xea) = 1;
  *(undefined2 *)(param_2 + 0x3f) = 1;
  *(undefined2 *)((int)param_2 + 0x132) = 1;
  param_2[0x4e] = 0xffffffff;
  uStack_124 = 0xffff;
  param_2[0x4d] = 0xffffffff;
  *(undefined2 *)(param_2 + 0x50) = 0xffff;
  *(undefined4 *)((int)param_2 + 0x15a) = 0;
  uStack_38 = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x166) = 0;
  *(undefined2 *)(param_2 + 0x5b) = 0xffff;
  *(undefined4 *)((int)param_2 + 0x16e) = 0;
  *(undefined2 *)((int)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x60) = 0xffff;
  *(undefined4 *)((int)param_2 + 0x182) = 0;
  uStack_44 = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x18e) = 0;
  *(undefined2 *)(param_2 + 0x65) = 0xffff;
  *(undefined4 *)((int)param_2 + 0x196) = 0;
  *(undefined4 *)((int)param_2 + 0x2e) = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x1a2) = 0;
  *(undefined2 *)(param_2 + 0x6a) = 0xffff;
  *(undefined4 *)((int)param_2 + 0x1aa) = 0;
  *(undefined2 *)((int)param_2 + 0x1b6) = 0;
  *(undefined2 *)(param_2 + 0x6f) = 0xffff;
  *(undefined4 *)((int)param_2 + 0x1be) = 0;
  uStack_54 = 0xffffffff;
  param_2[0x11] = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x1ca) = 0;
  uStack_64 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x56) = 0xffffffff;
  *(undefined2 *)(param_2 + 0x74) = 0xffff;
  uStack_74 = 0xffffffff;
  param_2[0x1a] = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x1d2) = 0;
  uStack_84 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x7a) = 0xffffffff;
  uStack_94 = 0xffffffff;
  param_2[0x23] = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x1de) = 0;
  uStack_a4 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x9e) = 0xffffffff;
  *(undefined2 *)(param_2 + 0x79) = 0xffff;
  uStack_b4 = 0xffffffff;
  param_2[0x2c] = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x146) = 0;
  *(undefined4 *)((int)param_2 + 0x1e6) = 0;
  uStack_c4 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xc2) = 0xffffffff;
  uStack_d4 = 0xffffffff;
  param_2[0x35] = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x152) = 0;
  *(undefined2 *)((int)param_2 + 0x1f2) = 0;
  uStack_e4 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0xe6) = 0xffffffff;
  *(undefined2 *)(param_2 + 0x56) = 0xffff;
  *(undefined2 *)(param_2 + 0x7e) = 0xffff;
  uStack_f4 = 0xffffffff;
  uStack_104 = 0xffffffff;
  uStack_114 = 0xffffffff;
  param_2[0x3e] = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x1fa) = 0;
  *(undefined4 *)((int)param_2 + 0x10a) = 0xffffffff;
  param_2[0x47] = 0xffffffff;
  *(undefined2 *)((int)param_2 + 0x206) = 0;
  param_2[0x55] = 0x3f800000;
  param_2[0x5a] = 0x3f800000;
  param_2[0x5f] = 0x3f800000;
  param_2[100] = 0x3f800000;
  param_2[0x69] = 0x3f800000;
  param_2[0x6e] = 0x3f800000;
  param_2[0x73] = 0x3f800000;
  param_2[0x78] = 0x3f800000;
  param_2[0x7d] = 0x3f800000;
  param_2[0x82] = 0x3f800000;
  param_2[2] = 0;
  *(undefined4 *)((int)param_2 + 0x12e) = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x12a) = 0xffffffff;
  param_2[0x4f] = 0xffffffff;
  *(undefined4 *)((int)param_2 + 0x142) = 0xffff0000;
  *(undefined4 *)((int)param_2 + 0x14e) = 0;
  *(undefined4 *)((int)param_2 + 0x14a) = 0;
  *(undefined4 *)((int)param_2 + 0x162) = 0;
  *(undefined4 *)((int)param_2 + 0x15e) = 0;
  *(undefined4 *)((int)param_2 + 0x176) = 0;
  *(undefined4 *)((int)param_2 + 0x172) = 0;
  *(undefined4 *)((int)param_2 + 0x18a) = 0;
  *(undefined4 *)((int)param_2 + 0x186) = 0;
  *(undefined4 *)((int)param_2 + 0x19e) = 0;
  *(undefined4 *)((int)param_2 + 0x19a) = 0;
  *(undefined4 *)((int)param_2 + 0x1b2) = 0;
  *(undefined4 *)((int)param_2 + 0x1ae) = 0;
  *(undefined4 *)((int)param_2 + 0x1c6) = 0;
  *(undefined4 *)((int)param_2 + 0x1c2) = 0;
  *(undefined4 *)((int)param_2 + 0x1da) = 0;
  *(undefined4 *)((int)param_2 + 0x1d6) = 0;
  *(undefined4 *)((int)param_2 + 0x1ee) = 0;
  *(undefined4 *)((int)param_2 + 0x1ea) = 0;
  *(undefined4 *)((int)param_2 + 0x202) = 0;
  *(undefined4 *)((int)param_2 + 0x1fe) = 0;
  param_2[0x83] = 0;
  param_2[0x84] = 0;
  iVar2 = FUN_71553980(param_1,param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = *param_1, *(int *)(iVar2 + 0x129) + 0x20 <= *(int *)(iVar2 + 0x12)))
  {
    param_2[0x84] = 0;
    uVar7 = *(uint *)(iVar2 + 0x129) & 7;
    bVar10 = *(char *)(*(int *)(iVar2 + 3) + ((int)*(uint *)(iVar2 + 0x129) >> 3)) << uVar7;
    uVar4 = 8 - uVar7;
    *(byte *)(param_2 + 0x84) = bVar10;
    if (uVar7 != 0) {
      *(byte *)(param_2 + 0x84) =
           bVar10 | *(byte *)(*(int *)(iVar2 + 3) + (*(int *)(iVar2 + 0x129) >> 3) + 1) >>
                    (uVar4 & 0xff);
    }
    iVar15 = *(int *)(iVar2 + 0x129) + 8;
    *(int *)(iVar2 + 0x129) = iVar15;
    bVar10 = *(byte *)((int)param_2 + 0x211) |
             *(char *)(*(int *)(iVar2 + 3) + (iVar15 >> 3)) << uVar7;
    *(byte *)((int)param_2 + 0x211) = bVar10;
    if (uVar7 != 0) {
      *(byte *)((int)param_2 + 0x211) =
           bVar10 | *(byte *)(*(int *)(iVar2 + 3) + (*(int *)(iVar2 + 0x129) >> 3) + 1) >>
                    (uVar4 & 0xff);
    }
    iVar15 = *(int *)(iVar2 + 0x129) + 8;
    *(int *)(iVar2 + 0x129) = iVar15;
    bVar10 = *(byte *)((int)param_2 + 0x212) |
             *(char *)(*(int *)(iVar2 + 3) + (iVar15 >> 3)) << uVar7;
    *(byte *)((int)param_2 + 0x212) = bVar10;
    if (uVar7 != 0) {
      *(byte *)((int)param_2 + 0x212) =
           bVar10 | *(byte *)(*(int *)(iVar2 + 3) + (*(int *)(iVar2 + 0x129) >> 3) + 1) >>
                    (uVar4 & 0xff);
    }
    iVar15 = *(int *)(iVar2 + 0x129) + 8;
    *(int *)(iVar2 + 0x129) = iVar15;
    bVar10 = *(byte *)((int)param_2 + 0x213) |
             *(char *)(*(int *)(iVar2 + 3) + (iVar15 >> 3)) << uVar7;
    *(byte *)((int)param_2 + 0x213) = bVar10;
    if (uVar7 != 0) {
      *(byte *)((int)param_2 + 0x213) =
           bVar10 | *(byte *)(*(int *)(iVar2 + 3) + (*(int *)(iVar2 + 0x129) >> 3) + 1) >>
                    (uVar4 & 0xff);
    }
    *(int *)(iVar2 + 0x129) = *(int *)(iVar2 + 0x129) + 8;
    iVar2 = *param_1;
    uVar4 = *(uint *)(iVar2 + 0x129);
    if ((int)(uVar4 + 8) <= *(int *)(iVar2 + 0x12)) {
      uVar7 = uVar4 & 7;
      bVar17 = uVar7 != 0;
      pbVar11 = (byte *)(*(int *)(iVar2 + 3) + ((int)uVar4 >> 3));
      uVar13 = (uint)*pbVar11;
      if (bVar17) {
        pbVar11 = (byte *)(uint)pbVar11[1];
      }
      uVar8 = uVar13 << uVar7;
      if (bVar17) {
        uVar13 = 8 - uVar7;
      }
      *(uint *)(iVar2 + 0x129) = uVar4 + 8;
      if (bVar17) {
        uVar8 = uVar8 | (uint)pbVar11 >> (uVar13 & 0xff);
      }
      uVar8 = uVar8 & 0xff;
      if (uVar8 < 0x12) {
        if (uVar8 != 0) {
          uVar4 = 0;
          uStack_15c = 0;
          do {
            uStack_140 = 0;
            uStack_144 = 0;
            uStack_148 = 0;
            iVar2 = FUN_7155367c(param_1,&uStack_148,0);
            bVar17 = true;
            if (iVar2 != 0) {
              iVar2 = *param_1;
              uVar7 = *(uint *)(iVar2 + 0x129);
              if ((int)(uVar7 + 8) <= *(int *)(iVar2 + 0x12)) {
                pbVar11 = (byte *)(*(int *)(iVar2 + 3) + ((int)uVar7 >> 3));
                bVar10 = *pbVar11;
                uVar13 = uVar7 & 7;
                bVar18 = uVar13 != 0;
                if (bVar18) {
                  pbVar11 = (byte *)(uint)pbVar11[1];
                }
                uVar14 = (uint)bVar10 << uVar13;
                uVar9 = 0;
                if (bVar18) {
                  uVar9 = 8 - uVar13;
                }
                *(uint *)(iVar2 + 0x129) = uVar7 + 8;
                if (bVar18) {
                  uVar14 = uVar14 | (uint)pbVar11 >> (uVar9 & 0xff);
                }
                if ((uVar14 & 0xff) < 2) {
                  uVar7 = uStack_140;
                  if ((uStack_148 & 1) == 0) {
                    uVar7 = (uint)&uStack_148 | 1;
                  }
                  uVar7 = FUN_7154a2d8(param_3,uVar7);
                  iVar2 = FUN_7154a83c(param_3,uVar7);
                  if (iVar2 == 0) {
                    uVar1 = 6;
                  }
                  else {
                    if ((*(uint *)(iVar2 + 0xc) & uStack_15c) == 0) {
                      FUN_7153e7c4(&uStack_40,param_2,param_3,uVar7);
                      if ((char)uStack_40 != '\0') {
                        uVar12 = 0;
                        uStack_15c = *(uint *)(iVar2 + 0xc) | uStack_15c;
                        if (((((((*puVar6 == uVar7) ||
                                (uVar12 = 1, *(ushort *)((int)param_2 + 0x22) == uVar7)) ||
                               (uVar12 = 2, *(ushort *)(param_2 + 0xd) == uVar7)) ||
                              ((uVar12 = 3, *(ushort *)((int)param_2 + 0x46) == uVar7 ||
                               (uVar12 = 4, *(ushort *)(param_2 + 0x16) == uVar7)))) ||
                             (((uVar12 = 5, *(ushort *)((int)param_2 + 0x6a) == uVar7 ||
                               ((uVar12 = 6, *(ushort *)(param_2 + 0x1f) == uVar7 ||
                                (uVar12 = 7, *(ushort *)((int)param_2 + 0x8e) == uVar7)))) ||
                              (uVar12 = 8, *(ushort *)(param_2 + 0x28) == uVar7)))) ||
                            ((((uVar12 = 9, *(ushort *)((int)param_2 + 0xb2) == uVar7 ||
                               (uVar12 = 10, *(ushort *)(param_2 + 0x31) == uVar7)) ||
                              (uVar12 = 0xb, *(ushort *)((int)param_2 + 0xd6) == uVar7)) ||
                             (((uVar12 = 0xc, *(ushort *)(param_2 + 0x3a) == uVar7 ||
                               (uVar12 = 0xd, *(ushort *)((int)param_2 + 0xfa) == uVar7)) ||
                              ((uVar12 = 0xe, *(ushort *)(param_2 + 0x43) == uVar7 ||
                               ((uVar12 = 0xf, *(ushort *)((int)param_2 + 0x11e) == uVar7 ||
                                (uVar12 = 0x10, *(ushort *)(param_2 + 0x4c) == uVar7)))))))))) &&
                           (iVar2 = FUN_71553e5c(param_1,param_2,param_3,uVar12), iVar2 != 0)) {
                          uStack_38 = 0xffffffff;
                          uStack_3c = 0xffffffff;
                          uStack_40 = 0xffffffff;
                          iVar2 = FUN_71553d08(param_1,&uStack_40);
                          if (iVar2 != 0) {
                            iVar2 = 0x132;
                            puVar5 = puVar6;
                            do {
                              if (*puVar5 == uVar7) {
                                *(char *)(puVar5 + 1) = (char)uVar14;
                                *(undefined4 *)(puVar5 + 7) = uStack_38;
                                *(undefined4 *)(puVar5 + 5) = uStack_3c;
                                *(undefined4 *)(puVar5 + 3) = uStack_40;
                              }
                              iVar2 = iVar2 + -0x12;
                              puVar5 = puVar5 + 9;
                            } while (iVar2 != 0);
                            bVar17 = false;
                          }
                        }
                        goto LAB_71553170;
                      }
                    }
                    uVar1 = 7;
                  }
                  *(undefined1 *)(param_1 + 1) = uVar1;
                }
              }
            }
LAB_71553170:
            if ((uStack_148 & 1) != 0) {
              thunk_qNQrlu(uStack_140);
            }
            if (bVar17) goto LAB_715534c8;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar8);
        }
        iVar2 = *param_1;
        uVar4 = *(uint *)(iVar2 + 0x129);
        if ((int)(uVar4 + 8) <= *(int *)(iVar2 + 0x12)) {
          uVar7 = uVar4 & 7;
          bVar17 = uVar7 != 0;
          pbVar11 = (byte *)(*(int *)(iVar2 + 3) + ((int)uVar4 >> 3));
          bVar10 = *pbVar11;
          if (bVar17) {
            pbVar11 = (byte *)(uint)pbVar11[1];
          }
          uVar13 = (uint)bVar10 << uVar7;
          uVar8 = 0;
          if (bVar17) {
            uVar8 = 8 - uVar7;
          }
          *(uint *)(iVar2 + 0x129) = uVar4 + 8;
          if (bVar17) {
            uVar13 = uVar13 | (uint)pbVar11 >> (uVar8 & 0xff);
          }
          uVar13 = uVar13 & 0xff;
          if ((uVar13 < 0xb) && (uVar13 != 0)) {
            puVar3 = (undefined4 *)((uint)&uStack_148 | 4);
            uVar4 = 0;
            do {
              uVar7 = uStack_148 >> 0x10;
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0x3f800000;
              uStack_148 = CONCAT22((ushort)uVar7 & 0xff00,0xffff);
              iVar2 = FUN_71554018(param_1,&uStack_148,param_3);
              if (iVar2 == 0) break;
              iVar2 = FUN_7155609c(param_2,uStack_148 & 0xffff);
              if (iVar2 != 10) {
                *(undefined1 *)(param_1 + 1) = 7;
                break;
              }
              iVar2 = param_2[0x83];
              uVar4 = uVar4 + 1;
              param_2[0x83] = iVar2 + 1;
              puVar16 = param_2 + iVar2 * 5 + 0x51;
              *puVar16 = uStack_148;
              puVar16[1] = uStack_144;
              puVar16[2] = uStack_140;
              puVar16[3] = uStack_13c;
              puVar16[4] = uStack_138;
            } while (uVar4 < uVar13);
          }
        }
      }
    }
  }
LAB_715534c8:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_7155367c
// Entry: 0x7155367c | Size: 412 bytes
// =========================================================================

bool FUN_7155367c(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  iVar7 = *param_1;
  bVar2 = false;
  uVar8 = *(uint *)(iVar7 + 0x129);
  if ((int)(uVar8 + 8) <= *(int *)(iVar7 + 0x12)) {
    uVar3 = uVar8 & 7;
    bVar10 = uVar3 != 0;
    pbVar6 = (byte *)(*(int *)(iVar7 + 3) + ((int)uVar8 >> 3));
    bVar1 = *pbVar6;
    if (bVar10) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    uVar9 = (uint)bVar1 << uVar3;
    uVar4 = 0;
    if (bVar10) {
      uVar4 = 8 - uVar3;
    }
    *(uint *)(iVar7 + 0x129) = uVar8 + 8;
    if (bVar10) {
      uVar9 = uVar9 | (uint)pbVar6 >> (uVar4 & 0xff);
    }
    uVar8 = uVar9 & 0xff;
    if ((uVar8 < 0x40) && (uVar8 != 0 || param_3 != 0)) {
      uVar9 = uVar9 & 0x3f;
      thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
                (param_2,uVar9,0);
      if (uVar8 != 0) {
        iVar7 = *param_1;
        uVar8 = uVar9 << 3;
        pbVar6 = *(byte **)(param_2 + 8);
        uVar3 = *(uint *)(iVar7 + 0x129);
        if ((*param_2 & 1) == 0) {
          pbVar6 = param_2 + 1;
        }
        iVar5 = uVar3 + uVar9 * 8;
        if ((uVar3 & 7) == 0) {
          if (*(int *)(iVar7 + 0x12) < iVar5) {
            return false;
          }
          imp___aeabi_memcpy(pbVar6,*(int *)(iVar7 + 3) + ((int)uVar3 >> 3),uVar9);
LAB_715537f0:
          *(uint *)(iVar7 + 0x129) = *(int *)(iVar7 + 0x129) + uVar8;
        }
        else {
          if (*(int *)(iVar7 + 0x12) < iVar5) {
            return false;
          }
          imp___aeabi_memclr(pbVar6,uVar9);
          uVar9 = *(uint *)(iVar7 + 0x129);
          uVar3 = uVar9 & 7;
          do {
            uVar9 = (uint)*pbVar6 |
                    (uint)*(byte *)(*(int *)(iVar7 + 3) + ((int)uVar9 >> 3)) << uVar3;
            *pbVar6 = (byte)uVar9;
            if (uVar3 != 0) {
              if (8 - uVar3 < uVar8) {
                uVar9 = uVar9 | *(byte *)(*(int *)(iVar7 + 3) + (*(int *)(iVar7 + 0x129) >> 3) + 1)
                                >> (8 - uVar3 & 0xff);
                *pbVar6 = (byte)uVar9;
                goto LAB_71553798;
              }
LAB_715537e0:
              *pbVar6 = (byte)((uVar9 & 0xff) >> (8 - uVar8 & 0xff));
              goto LAB_715537f0;
            }
LAB_71553798:
            if (uVar8 == 0) goto LAB_715537e0;
            pbVar6 = pbVar6 + 1;
            uVar4 = uVar8 - 8;
            uVar9 = *(int *)(iVar7 + 0x129) + 8;
            *(uint *)(iVar7 + 0x129) = uVar9;
            bVar2 = 7 < (int)uVar8;
            uVar8 = uVar4;
          } while (uVar4 != 0 && bVar2);
        }
      }
      iVar7 = thunk_jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (param_2,0,0);
      bVar2 = iVar7 == -1;
    }
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_715538a0
// Entry: 0x715538a0 | Size: 88 bytes
// =========================================================================

bool FUN_715538a0(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  bVar8 = false;
  uVar3 = *(uint *)(iVar2 + 0x129);
  if ((int)(uVar3 + 8) <= *(int *)(iVar2 + 0x12)) {
    pbVar6 = (byte *)(*(int *)(iVar2 + 3) + ((int)uVar3 >> 3));
    bVar1 = *pbVar6;
    uVar4 = uVar3 & 7;
    bVar8 = uVar4 != 0;
    if (bVar8) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    uVar7 = (uint)bVar1 << uVar4;
    uVar5 = 0;
    if (bVar8) {
      uVar5 = 8 - uVar4;
    }
    *(uint *)(iVar2 + 0x129) = uVar3 + 8;
    if (bVar8) {
      uVar7 = uVar7 | (uint)pbVar6 >> (uVar5 & 0xff);
    }
    bVar8 = (uVar7 & 0xff) < 0x11;
    if (bVar8) {
      *param_2 = (char)uVar7;
    }
  }
  return bVar8;
}


// =========================================================================
// Function: FUN_71553910
// Entry: 0x71553910 | Size: 88 bytes
// =========================================================================

bool FUN_71553910(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  iVar2 = *param_1;
  bVar8 = false;
  uVar3 = *(uint *)(iVar2 + 0x129);
  if ((int)(uVar3 + 8) <= *(int *)(iVar2 + 0x12)) {
    pbVar6 = (byte *)(*(int *)(iVar2 + 3) + ((int)uVar3 >> 3));
    bVar1 = *pbVar6;
    uVar4 = uVar3 & 7;
    bVar8 = uVar4 != 0;
    if (bVar8) {
      pbVar6 = (byte *)(uint)pbVar6[1];
    }
    uVar7 = (uint)bVar1 << uVar4;
    uVar5 = 0;
    if (bVar8) {
      uVar5 = 8 - uVar4;
    }
    *(uint *)(iVar2 + 0x129) = uVar3 + 8;
    if (bVar8) {
      uVar7 = uVar7 | (uint)pbVar6 >> (uVar5 & 0xff);
    }
    bVar8 = (uVar7 & 0xff) < 2;
    if (bVar8) {
      *param_2 = (char)uVar7;
    }
  }
  return bVar8;
}


// =========================================================================
// Function: FUN_71553980
// Entry: 0x71553980 | Size: 516 bytes
// =========================================================================

undefined4 FUN_71553980(int *param_1,char *param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  uint uVar11;
  bool bVar12;
  uint auStack_50 [4];
  uint auStack_40 [4];
  uint auStack_30 [3];
  
  iVar2 = *param_1;
  uVar9 = 0;
  auStack_30[2] = 0;
  uVar11 = *(uint *)(iVar2 + 0x129);
  auStack_30[1] = 0;
  auStack_30[0] = 0;
  auStack_40[2] = 0;
  auStack_40[1] = 0;
  auStack_40[0] = 0;
  auStack_50[2] = 0;
  auStack_50[1] = 0;
  auStack_50[0] = 0;
  if ((int)(uVar11 + 8) <= *(int *)(iVar2 + 0x12)) {
    uVar7 = uVar11 & 7;
    bVar12 = uVar7 != 0;
    pcVar5 = param_2;
    if (bVar12) {
      pcVar5 = (char *)(8 - uVar7);
    }
    pbVar8 = (byte *)(*(int *)(iVar2 + 3) + ((int)uVar11 >> 3));
    uVar6 = param_3;
    if (bVar12) {
      uVar6 = (uint)pbVar8[1];
    }
    uVar7 = (uint)*pbVar8 << uVar7;
    *(uint *)(iVar2 + 0x129) = uVar11 + 8;
    if (bVar12) {
      uVar7 = uVar7 | uVar6 >> ((uint)pcVar5 & 0xff);
    }
    if ((uVar7 & 0xff) < 2) {
      iVar2 = FUN_7155367c(param_1,auStack_30,0);
      if (iVar2 != 0) {
        iVar2 = FUN_7155367c(param_1,auStack_40,0);
        if (iVar2 != 0) {
          iVar2 = FUN_7155367c(param_1,auStack_50,0);
          if (iVar2 != 0) {
            FUN_7153ed10(param_2,uVar7 & 0xff);
            uVar11 = auStack_30[2];
            if ((auStack_30[0] & 1) == 0) {
              uVar11 = (uint)auStack_30 | 1;
            }
            uVar1 = FUN_7154a73c(param_3,uVar11);
            *(undefined2 *)(param_2 + 2) = uVar1;
            uVar11 = auStack_40[2];
            if ((auStack_40[0] & 1) == 0) {
              uVar11 = (uint)auStack_40 | 1;
            }
            uVar1 = FUN_7154a778(param_3,uVar11);
            *(undefined2 *)(param_2 + 4) = uVar1;
            uVar11 = auStack_50[2];
            if ((auStack_50[0] & 1) == 0) {
              uVar11 = (uint)auStack_50 | 1;
            }
            uVar1 = FUN_7154a564(param_3,uVar11);
            *(undefined2 *)(param_2 + 6) = uVar1;
            iVar2 = FUN_7154aa58(param_3,*(undefined2 *)(param_2 + 2));
            iVar3 = FUN_7154aa9c(param_3,*(undefined2 *)(param_2 + 4));
            uVar10 = 6;
            if ((iVar2 != 0 && iVar3 != 0) &&
               (iVar4 = FUN_7154a7f0(param_3,*(undefined2 *)(param_2 + 6)), iVar4 != 0)) {
              uVar10 = 7;
              if ((*(char *)(iVar2 + 0xc) == *param_2) &&
                 (uVar9 = 1, *(char *)(iVar3 + 0xc) == *(char *)(iVar2 + 0xc))) goto LAB_71553af4;
            }
            uVar9 = 0;
            *(undefined1 *)(param_1 + 1) = uVar10;
          }
        }
      }
    }
  }
LAB_71553af4:
  if ((auStack_50[0] & 1) != 0) {
    thunk_qNQrlu(auStack_50[2]);
  }
  if ((auStack_40[0] & 1) != 0) {
    thunk_qNQrlu(auStack_40[2]);
  }
  if ((auStack_30[0] & 1) != 0) {
    thunk_qNQrlu(auStack_30[2]);
  }
  return uVar9;
}


// =========================================================================
// Function: FUN_71553d08
// Entry: 0x71553d08 | Size: 316 bytes
// =========================================================================

bool FUN_71553d08(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  
  iVar5 = 0;
  do {
    iVar6 = *param_1;
    uVar7 = *(uint *)(iVar6 + 0x129);
    iVar13 = *(int *)(iVar6 + 0x12);
    iVar12 = uVar7 + 0x20;
    if (iVar13 < iVar12) break;
    iVar9 = *(int *)(iVar6 + 3);
    uVar8 = uVar7 & 7;
    uVar10 = 8 - uVar8;
    iVar11 = iVar9 + 1;
    bVar3 = *(byte *)(iVar9 + ((int)uVar7 >> 3));
    uVar2 = 0;
    bStack_28 = bVar3 << uVar8;
    if (uVar8 != 0) {
      bVar3 = bStack_28 | *(byte *)(iVar11 + ((int)uVar7 >> 3)) >> (uVar10 & 0xff);
    }
    *(uint *)(iVar6 + 0x129) = uVar7 + 8;
    if (uVar8 != 0) {
      bStack_28 = bVar3;
    }
    iVar1 = (int)(uVar7 + 8) >> 3;
    bStack_29 = *(char *)(iVar9 + iVar1) << uVar8;
    if (uVar8 != 0) {
      uVar2 = (uint)*(byte *)(iVar11 + iVar1);
    }
    *(uint *)(iVar6 + 0x129) = uVar7 + 0x10;
    if (uVar8 != 0) {
      bStack_29 = bStack_29 | (byte)(uVar2 >> (uVar10 & 0xff));
    }
    iVar1 = (int)(uVar7 + 0x10) >> 3;
    bVar3 = *(byte *)(iVar9 + iVar1);
    bStack_2a = bVar3 << uVar8;
    if (uVar8 != 0) {
      bVar3 = *(byte *)(iVar11 + iVar1);
    }
    *(uint *)(iVar6 + 0x129) = uVar7 + 0x18;
    if (uVar8 != 0) {
      bStack_2a = bStack_2a | bVar3 >> (uVar10 & 0xff);
    }
    iVar1 = (int)(uVar7 + 0x18) >> 3;
    bVar3 = *(byte *)(iVar9 + iVar1);
    bStack_2b = bVar3 << uVar8;
    if (uVar8 != 0) {
      bVar3 = *(byte *)(iVar11 + iVar1);
    }
    *(int *)(iVar6 + 0x129) = iVar12;
    if (uVar8 != 0) {
      bStack_2b = bStack_2b | bVar3 >> (uVar10 & 0xff);
    }
    pbVar4 = (byte *)(param_2 + iVar5);
    *pbVar4 = bStack_2b;
    iVar5 = iVar5 + 4;
    pbVar4[3] = bStack_28;
    pbVar4[2] = bStack_29;
    pbVar4[1] = bStack_2a;
  } while (iVar5 != 0xc);
  return iVar12 <= iVar13;
}


// =========================================================================
// Function: FUN_71553e5c
// Entry: 0x71553e5c | Size: 280 bytes
// =========================================================================

undefined4 FUN_71553e5c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar4 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = FUN_7155367c(param_1,&uStack_30,1);
  if (iVar1 != 0) {
    iVar1 = FUN_7154a83c(param_3,*(undefined2 *)(param_2 + param_4 * 0x12 + 0x10));
    uVar2 = 7;
    if (iVar1 != 0) {
      uVar3 = uStack_2c;
      if ((uStack_30 & 1) == 0) {
        uVar3 = (uint)((byte)uStack_30 >> 1);
      }
      if (uVar3 == 0) {
        iVar1 = 0xffff;
      }
      else {
        uVar3 = uStack_28;
        if ((uStack_30 & 1) == 0) {
          uVar3 = (uint)&uStack_30 | 1;
        }
        iVar1 = FUN_7152ebac(iVar1,uVar3);
      }
      uVar3 = (uint)((byte)uStack_30 >> 1);
      if ((uStack_30 & 1) != 0) {
        uVar3 = uStack_2c;
      }
      if ((iVar1 != 0xffff) || (uVar2 = 6, uVar3 == 0)) {
        iVar1 = FUN_7153f250(param_2,param_3,param_4);
        uVar4 = 1;
        uVar2 = 7;
        if (iVar1 != 0) goto LAB_71553f54;
      }
    }
    uVar4 = 0;
    *(undefined1 *)(param_1 + 4) = uVar2;
  }
LAB_71553f54:
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_71554018
// Entry: 0x71554018 | Size: 1704 bytes
// =========================================================================

undefined4 FUN_71554018(int *param_1,undefined2 *param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  undefined1 uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  uint auStack_30 [3];
  
  uVar8 = 0;
  auStack_30[2] = 0;
  auStack_30[1] = 0;
  auStack_30[0] = 0;
  iVar1 = FUN_7155367c(param_1,auStack_30,0);
  if (iVar1 != 0) {
    iVar1 = *param_1;
    uVar3 = *(uint *)(iVar1 + 0x129);
    if ((int)(uVar3 + 8) <= *(int *)(iVar1 + 0x12)) {
      uVar6 = uVar3 & 7;
      bVar15 = uVar6 != 0;
      pbVar5 = (byte *)(*(int *)(iVar1 + 3) + ((int)uVar3 >> 3));
      uVar11 = (uint)*pbVar5;
      if (bVar15) {
        pbVar5 = (byte *)(uint)pbVar5[1];
      }
      uVar4 = uVar11 << uVar6;
      if (bVar15) {
        uVar11 = 8 - uVar6;
      }
      *(uint *)(iVar1 + 0x129) = uVar3 + 8;
      if (bVar15) {
        uVar4 = uVar4 | (uint)pbVar5 >> (uVar11 & 0xff);
      }
      if ((uVar4 & 0xff) < 2) {
        uVar3 = auStack_30[2];
        if ((auStack_30[0] & 1) == 0) {
          uVar3 = (uint)auStack_30 | 1;
        }
        *(char *)(param_2 + 1) = (char)uVar4;
        iVar1 = FUN_7154a7b4(param_3,uVar3);
        *param_2 = (short)iVar1;
        if (iVar1 == 0xffff) {
          uVar12 = 6;
        }
        else {
          if (*(char *)(param_2 + 1) == '\0') {
            uVar8 = 1;
            goto LAB_715546a0;
          }
          iVar1 = *param_1;
          if (*(int *)(iVar1 + 0x12) < *(int *)(iVar1 + 0x129) + 0x20) goto LAB_715546a0;
          puVar2 = (uint *)(param_2 + 2);
          *puVar2 = 0;
          uVar6 = *(uint *)(iVar1 + 0x129) & 7;
          bVar10 = *(char *)(*(int *)(iVar1 + 3) + ((int)*(uint *)(iVar1 + 0x129) >> 3)) << uVar6;
          uVar3 = 8 - uVar6;
          *(byte *)puVar2 = bVar10;
          if (uVar6 != 0) {
            *(byte *)puVar2 =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 5) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 5) = bVar10;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 5) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)(param_2 + 3) | *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)(param_2 + 3) = bVar10;
          if (uVar6 != 0) {
            *(byte *)(param_2 + 3) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 7) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 7) = bVar10;
          iVar9 = 0;
          if (uVar6 != 0) {
            iVar9 = *(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3);
          }
          uVar8 = 0;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 7) = bVar10 | *(byte *)(iVar9 + 1) >> (uVar3 & 0xff);
          }
          *(int *)(iVar1 + 0x129) = *(int *)(iVar1 + 0x129) + 8;
          iVar1 = *param_1;
          if (*(int *)(iVar1 + 0x12) < *(int *)(iVar1 + 0x129) + 0x20) goto LAB_715546a0;
          puVar13 = (uint *)(param_2 + 4);
          *puVar13 = 0;
          uVar6 = *(uint *)(iVar1 + 0x129) & 7;
          bVar10 = *(char *)(*(int *)(iVar1 + 3) + ((int)*(uint *)(iVar1 + 0x129) >> 3)) << uVar6;
          uVar3 = 8 - uVar6;
          *(byte *)puVar13 = bVar10;
          if (uVar6 != 0) {
            *(byte *)puVar13 =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 9) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 9) = bVar10;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 9) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)(param_2 + 5) | *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)(param_2 + 5) = bVar10;
          if (uVar6 != 0) {
            *(byte *)(param_2 + 5) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 0xb) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 0xb) = bVar10;
          iVar9 = 0;
          if (uVar6 != 0) {
            iVar9 = *(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3);
          }
          uVar8 = 0;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 0xb) = bVar10 | *(byte *)(iVar9 + 1) >> (uVar3 & 0xff);
          }
          *(int *)(iVar1 + 0x129) = *(int *)(iVar1 + 0x129) + 8;
          iVar1 = *param_1;
          if (*(int *)(iVar1 + 0x12) < *(int *)(iVar1 + 0x129) + 0x20) goto LAB_715546a0;
          puVar14 = (uint *)(param_2 + 6);
          *puVar14 = 0;
          uVar6 = *(uint *)(iVar1 + 0x129) & 7;
          bVar10 = *(char *)(*(int *)(iVar1 + 3) + ((int)*(uint *)(iVar1 + 0x129) >> 3)) << uVar6;
          uVar3 = 8 - uVar6;
          *(byte *)puVar14 = bVar10;
          if (uVar6 != 0) {
            *(byte *)puVar14 =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 0xd) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 0xd) = bVar10;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 0xd) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)(param_2 + 7) | *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)(param_2 + 7) = bVar10;
          if (uVar6 != 0) {
            *(byte *)(param_2 + 7) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 0xf) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 0xf) = bVar10;
          iVar9 = 0;
          if (uVar6 != 0) {
            iVar9 = *(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3);
          }
          uVar8 = 0;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 0xf) = bVar10 | *(byte *)(iVar9 + 1) >> (uVar3 & 0xff);
          }
          *(int *)(iVar1 + 0x129) = *(int *)(iVar1 + 0x129) + 8;
          iVar1 = *param_1;
          if (*(int *)(iVar1 + 0x12) < *(int *)(iVar1 + 0x129) + 0x20) goto LAB_715546a0;
          puVar7 = (uint *)(param_2 + 8);
          *puVar7 = 0;
          uVar6 = *(uint *)(iVar1 + 0x129) & 7;
          bVar10 = *(char *)(*(int *)(iVar1 + 3) + ((int)*(uint *)(iVar1 + 0x129) >> 3)) << uVar6;
          uVar3 = 8 - uVar6;
          *(byte *)puVar7 = bVar10;
          if (uVar6 != 0) {
            *(byte *)puVar7 =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 0x11) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 0x11) = bVar10;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 0x11) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)(param_2 + 9) | *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)(param_2 + 9) = bVar10;
          if (uVar6 != 0) {
            *(byte *)(param_2 + 9) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          iVar9 = *(int *)(iVar1 + 0x129) + 8;
          *(int *)(iVar1 + 0x129) = iVar9;
          bVar10 = *(byte *)((int)param_2 + 0x13) |
                   *(char *)(*(int *)(iVar1 + 3) + (iVar9 >> 3)) << uVar6;
          *(byte *)((int)param_2 + 0x13) = bVar10;
          if (uVar6 != 0) {
            *(byte *)((int)param_2 + 0x13) =
                 bVar10 | *(byte *)(*(int *)(iVar1 + 3) + (*(int *)(iVar1 + 0x129) >> 3) + 1) >>
                          (uVar3 & 0xff);
          }
          *(int *)(iVar1 + 0x129) = *(int *)(iVar1 + 0x129) + 8;
          uVar3 = *puVar2 & 0x7fffffff;
          iVar1 = FUN_71ba2cf0(uVar3,0x7f800000);
          iVar9 = FUN_71ba0408(uVar3,0x7f800000);
          uVar12 = 7;
          if ((iVar9 == 0 && iVar1 == 0) && (iVar1 = FUN_71ba2d30(uVar3,0x41800000), iVar1 != 0)) {
            uVar3 = *puVar13 & 0x7fffffff;
            iVar1 = FUN_71ba2cf0(uVar3,0x7f800000);
            iVar9 = FUN_71ba0408(uVar3,0x7f800000);
            if ((iVar9 == 0 && iVar1 == 0) && (iVar1 = FUN_71ba2d30(uVar3,0x41800000), iVar1 != 0))
            {
              uVar3 = *puVar14 & 0x7fffffff;
              iVar1 = FUN_71ba2cf0(uVar3,0x7f800000);
              iVar9 = FUN_71ba0408(uVar3,0x7f800000);
              if ((iVar9 == 0 && iVar1 == 0) && (iVar1 = FUN_71ba2d30(uVar3,0x43b40000), iVar1 != 0)
                 ) {
                uVar3 = *puVar7;
                iVar1 = FUN_71ba2cf0(uVar3 & 0x7fffffff,0x7f800000);
                iVar9 = FUN_71ba0408(uVar3 & 0x7fffffff,0x7f800000);
                if ((iVar9 == 0 && iVar1 == 0) && (iVar1 = FUN_71ba2d70(uVar3,0), iVar1 != 0)) {
                  iVar1 = FUN_71ba2d30(uVar3,0x41800000);
                  uVar8 = 1;
                  if (iVar1 != 0) goto LAB_715546a0;
                }
              }
            }
          }
        }
        uVar8 = 0;
        *(undefined1 *)(param_1 + 1) = uVar12;
      }
    }
  }
LAB_715546a0:
  if ((auStack_30[0] & 1) != 0) {
    thunk_qNQrlu(auStack_30[2]);
  }
  return uVar8;
}


// =========================================================================
// Function: FUN_71554898
// Entry: 0x71554898 | Size: 212 bytes
// =========================================================================

int * FUN_71554898(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = (int *)param_1[1];
  uVar1 = *param_2;
  piVar5 = param_1 + 1;
  do {
    piVar6 = piVar5;
    if (piVar2 == (int *)0x0) {
LAB_715548f8:
      puVar3 = (undefined4 *)thunk_MwhHq(0x444);
      *(ushort *)(puVar3 + 4) = uVar1;
      imp___aeabi_memclr4(puVar3 + 5,0x430);
      FUN_715524a4(puVar3 + 5);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = piVar6;
      *piVar5 = (int)puVar3;
      puVar4 = puVar3;
      if (*(int *)*param_1 != 0) {
        *param_1 = *(int *)*param_1;
        puVar4 = (undefined4 *)*piVar5;
      }
      FUN_712f807c(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      return puVar3 + 5;
    }
    while (piVar6 = piVar2, *(ushort *)(piVar6 + 4) <= uVar1) {
      if (uVar1 <= *(ushort *)(piVar6 + 4)) {
        return piVar6 + 5;
      }
      piVar2 = (int *)piVar6[1];
      if ((int *)piVar6[1] == (int *)0x0) {
        piVar5 = piVar6 + 1;
        goto LAB_715548f8;
      }
    }
    piVar2 = (int *)*piVar6;
    piVar5 = piVar6;
  } while( true );
}


// =========================================================================
// Function: FUN_715549f4
// Entry: 0x715549f4 | Size: 1612 bytes
// =========================================================================

void FUN_715549f4(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar5 = *(int *)(param_1 + 0x12);
  uVar8 = iVar5 + 8;
  if ((-8 < iVar5) &&
     (iVar10 = *(int *)(param_1 + 0x139), iVar10 + -1 >> 3 < (int)(iVar5 + 7U >> 3))) {
    iVar5 = uVar8 * 2;
    uVar11 = uVar8 * 2;
    iVar6 = *(int *)(param_1 + 3);
    if (iVar6 == param_1 + 0x27) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar11;
      if (bVar1) {
        uVar7 = imp_malloc(iVar5 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar7;
        imp___aeabi_memcpy(uVar7,iVar6,iVar10 + 7 >> 3);
      }
    }
    else {
      uVar7 = imp_realloc();
      *(undefined4 *)(param_1 + 3) = uVar7;
      uVar8 = uVar11;
    }
  }
  if (*(int *)(param_1 + 0x139) < (int)uVar8) {
    *(uint *)(param_1 + 0x139) = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x12) & 7;
  if (uVar8 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 3) + ((int)*(uint *)(param_1 + 0x12) >> 3)) = 1;
  }
  else {
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)(1 << (8 - uVar8 & 0xff));
  }
  iVar5 = *(int *)(param_1 + 0x12);
  iVar10 = *(int *)(param_1 + 0x139);
  uVar8 = iVar5 + 0x10;
  *(int *)(param_1 + 0x12) = iVar5 + 8;
  if ((-0x10 < iVar5) && (iVar10 + -1 >> 3 < (int)(iVar5 + 0xfU >> 3))) {
    iVar5 = uVar8 * 2;
    uVar11 = uVar8 * 2;
    if (*(int *)(param_1 + 3) == param_1 + 0x27) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar11;
      if (bVar1) {
        uVar7 = imp_malloc(iVar5 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar7;
        imp___aeabi_memcpy(uVar7,param_1 + 0x27,iVar10 + 7 >> 3);
      }
    }
    else {
      uVar7 = imp_realloc();
      iVar10 = *(int *)(param_1 + 0x139);
      *(undefined4 *)(param_1 + 3) = uVar7;
      uVar8 = uVar11;
    }
  }
  if (iVar10 < (int)uVar8) {
    *(uint *)(param_1 + 0x139) = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar8 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 3) + iVar5) = 0x80;
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)(0x80 >> uVar8);
    *(undefined1 *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x12);
  iVar10 = *(int *)(param_1 + 0x139);
  *(int *)(param_1 + 0x12) = iVar5 + 8;
  uVar3 = *(ushort *)(param_2 + 2);
  uVar8 = iVar5 + 0x18;
  if ((-0x18 < iVar5) && (iVar10 + -1 >> 3 < (int)(iVar5 + 0x17U >> 3))) {
    iVar5 = uVar8 * 2;
    uVar11 = uVar8 * 2;
    if (*(int *)(param_1 + 3) == param_1 + 0x27) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar11;
      if (bVar1) {
        uVar7 = imp_malloc(iVar5 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar7;
        imp___aeabi_memcpy(uVar7,param_1 + 0x27,iVar10 + 7 >> 3);
      }
    }
    else {
      uVar7 = imp_realloc();
      iVar10 = *(int *)(param_1 + 0x139);
      *(undefined4 *)(param_1 + 3) = uVar7;
      uVar8 = uVar11;
    }
  }
  if (iVar10 < (int)uVar8) {
    *(uint *)(param_1 + 0x139) = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  cVar4 = (char)(uVar3 >> 8);
  if (uVar8 == 0) {
    *(char *)(*(int *)(param_1 + 3) + iVar5) = (char)uVar3;
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    *(char *)(*(int *)(param_1 + 3) + (iVar5 >> 3)) = cVar4;
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((uVar3 & 0xff) >> uVar8);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar3 & 0xff) << (8 - uVar8 & 0xff));
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    iVar5 = iVar5 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((uVar3 >> 8) >> uVar8);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         cVar4 << (8 - uVar8 & 0xff);
  }
  iVar5 = *(int *)(param_1 + 0x12);
  iVar10 = *(int *)(param_1 + 0x139);
  *(int *)(param_1 + 0x12) = iVar5 + 8;
  uVar11 = *(uint *)(param_2 + 4);
  uVar8 = iVar5 + 0x28;
  if ((-0x28 < iVar5) && (iVar10 + -1 >> 3 < (int)(iVar5 + 0x27U >> 3))) {
    iVar5 = uVar8 * 2;
    uVar9 = uVar8 * 2;
    if (*(int *)(param_1 + 3) == param_1 + 0x27) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar9;
      if (bVar1) {
        uVar7 = imp_malloc(iVar5 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar7;
        imp___aeabi_memcpy(uVar7,param_1 + 0x27,iVar10 + 7 >> 3);
      }
    }
    else {
      uVar7 = imp_realloc();
      iVar10 = *(int *)(param_1 + 0x139);
      *(undefined4 *)(param_1 + 3) = uVar7;
      uVar8 = uVar9;
    }
  }
  if (iVar10 < (int)uVar8) {
    *(uint *)(param_1 + 0x139) = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar8 == 0) {
    *(char *)(*(int *)(param_1 + 3) + iVar5) = (char)uVar11;
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    *(char *)(*(int *)(param_1 + 3) + (iVar5 >> 3)) = (char)(uVar11 >> 8);
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    *(char *)(*(int *)(param_1 + 3) + (iVar5 >> 3)) = (char)(uVar11 >> 0x10);
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    *(char *)(*(int *)(param_1 + 3) + (iVar5 >> 3)) = (char)(uVar11 >> 0x18);
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((uVar11 & 0xff) >> uVar8);
    uVar9 = 8 - uVar8;
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)(uVar11 << (uVar9 & 0xff));
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    iVar5 = iVar5 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((uVar11 >> 8 & 0xff) >> uVar8);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar11 >> 8) << (uVar9 & 0xff));
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    iVar5 = iVar5 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((uVar11 >> 0x10 & 0xff) >> uVar8);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar11 >> 0x10) << (uVar9 & 0xff));
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    iVar5 = iVar5 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((uVar11 >> 0x18) >> uVar8);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar11 >> 0x18) << (uVar9 & 0xff));
  }
  iVar5 = *(int *)(param_1 + 0x12);
  iVar10 = *(int *)(param_1 + 0x139);
  *(int *)(param_1 + 0x12) = iVar5 + 8;
  bVar2 = *(byte *)(param_2 + 8);
  uVar8 = iVar5 + 0x10;
  if ((-0x10 < iVar5) && (iVar10 + -1 >> 3 < (int)(iVar5 + 0xfU >> 3))) {
    iVar5 = uVar8 * 2;
    uVar11 = uVar8 * 2;
    if (*(int *)(param_1 + 3) == param_1 + 0x27) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar11;
      if (bVar1) {
        uVar7 = imp_malloc(iVar5 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar7;
        imp___aeabi_memcpy(uVar7,param_1 + 0x27,iVar10 + 7 >> 3);
      }
    }
    else {
      uVar7 = imp_realloc();
      iVar10 = *(int *)(param_1 + 0x139);
      *(undefined4 *)(param_1 + 3) = uVar7;
      uVar8 = uVar11;
    }
  }
  if (iVar10 < (int)uVar8) {
    *(uint *)(param_1 + 0x139) = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar8 == 0) {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) = bVar2;
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | bVar2 >> uVar8;
    *(byte *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         bVar2 << (8 - uVar8 & 0xff);
  }
  iVar5 = *(int *)(param_1 + 0x12);
  iVar10 = *(int *)(param_1 + 0x139);
  *(int *)(param_1 + 0x12) = iVar5 + 8;
  bVar2 = *(byte *)(param_2 + 9);
  uVar8 = iVar5 + 0x10;
  if ((-0x10 < iVar5) && (iVar10 + -1 >> 3 < (int)(iVar5 + 0xfU >> 3))) {
    iVar5 = uVar8 * 2;
    uVar11 = uVar8 * 2;
    if (*(int *)(param_1 + 3) == param_1 + 0x27) {
      bVar1 = 0x400 < uVar8;
      uVar8 = uVar11;
      if (bVar1) {
        uVar7 = imp_malloc(iVar5 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar7;
        imp___aeabi_memcpy(uVar7,param_1 + 0x27,iVar10 + 7 >> 3);
      }
    }
    else {
      uVar7 = imp_realloc();
      iVar10 = *(int *)(param_1 + 0x139);
      *(undefined4 *)(param_1 + 3) = uVar7;
      uVar8 = uVar11;
    }
  }
  if (iVar10 < (int)uVar8) {
    *(uint *)(param_1 + 0x139) = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar8 == 0) {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) = bVar2;
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | bVar2 >> uVar8;
    *(byte *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         bVar2 << (8 - uVar8 & 0xff);
  }
  *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 8;
  return;
}


// =========================================================================
// Function: FUN_715552a0
// Entry: 0x715552a0 | Size: 424 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715552a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *unaff_r5;
  char acStack_2a4 [14];
  undefined1 auStack_296 [3];
  undefined1 *puStack_293;
  undefined4 uStack_284;
  undefined1 auStack_26f [258];
  undefined4 uStack_16d;
  char cStack_169;
  int iStack_15d;
  undefined1 auStack_159 [3];
  int iStack_156;
  uint uStack_147;
  undefined4 uStack_30;
  char cStack_2c;
  uint uStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (((param_1 != (int *)0x0) && (uVar4 = param_1[1], uVar4 - 0x40 < 0x7fc1)) && ((uVar4 & 7) == 0)
     ) {
    iVar1 = *param_1;
    iVar3 = 0;
    if (iVar1 != 0) {
      unaff_r5 = &DAT_711f6d58;
      iVar3 = DAT_711f6d58;
    }
    if (iVar1 != 0 && iVar3 != 0) {
      cStack_2c = '\0';
      uStack_30 = 0;
      iStack_156 = iVar1;
      uStack_147 = uVar4;
      uStack_20 = uVar4;
      uVar2 = FUN_7153ffec();
      FUN_71551640(acStack_2a4,&DAT_711a38f0,auStack_159,uVar2,0x3ec,&LAB_715555a8);
      iVar3 = 0;
      if (acStack_2a4[0] != '\0') {
        iVar3 = *(int *)*unaff_r5;
      }
      if (acStack_2a4[0] != '\0' && iVar3 != 0) {
        iStack_15d = 0x800;
        cStack_169 = '\x01';
        puStack_293 = auStack_26f;
        uStack_284 = 0;
        uStack_16d = 0;
        FUN_715549f4(auStack_296,acStack_2a4);
        (**(code **)(**(int **)*unaff_r5 + 0x94))
                  (*(int **)*unaff_r5,0xa8,auStack_296,1,9,0,0,0xffffffff,0xffff,0xffff,0,0);
        if ((cStack_169 != '\0') && (0x800 < iStack_15d)) {
          imp_free(puStack_293);
        }
      }
      if ((cStack_2c != '\0') && (0x800 < (int)uStack_20)) {
        imp_free(iStack_156);
      }
    }
  }
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_715555e0
// Entry: 0x715555e0 | Size: 520 bytes
// =========================================================================

void FUN_715555e0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  
  if ((undefined4 **)DAT_711a38f0 != &DAT_711a38f4) {
    puVar6 = DAT_711a38f0;
    do {
      uVar10 = (uint)*(ushort *)(puVar6 + 4);
      puVar7 = (undefined4 *)puVar6[1];
      puVar4 = puVar6;
      if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
        do {
          puVar9 = (undefined4 *)puVar4[2];
          bVar11 = (undefined4 *)*puVar9 != puVar4;
          puVar4 = puVar9;
        } while (bVar11);
      }
      else {
        do {
          puVar9 = puVar7;
          puVar7 = (undefined4 *)*puVar9;
        } while ((undefined4 *)*puVar9 != (undefined4 *)0x0);
      }
      if (*(ushort *)(puVar6 + 4) >> 2 < 0xfb) {
        iVar1 = 0;
        if (DAT_711f6d58 != 0) {
          iVar1 = *(int *)(DAT_711f6d58 + 0xac);
        }
        if (DAT_711f6d58 != 0 && iVar1 != 0) {
          puVar5 = (ushort *)(iVar1 + 0x1f68);
          if (*puVar5 == uVar10) {
            if (*(int *)(iVar1 + 0x1f6c) != 0) {
              piVar2 = (int *)(*(int *)(iVar1 + 0x1f6c) + 0x130);
LAB_71555634:
              iVar1 = *piVar2;
              if (iVar1 != 0) {
                puVar5 = *(ushort **)(iVar1 + 0x8c);
              }
              if (iVar1 != 0 && puVar5 != (ushort *)0x0) {
                if (*(char *)(puVar6 + 5) == '\0') {
                  FUN_71557078();
                  FUN_715be6fc(iVar1,puVar6[6],0);
                  puVar6 = &DAT_711a38f4;
                  puVar7 = DAT_711a38f4;
                  if (DAT_711a38f4 != (undefined4 *)0x0) {
                    do {
                      puVar4 = puVar7;
                      if (*(ushort *)(puVar7 + 4) < uVar10) {
                        puVar7 = puVar7 + 1;
                        puVar4 = puVar6;
                      }
                      puVar7 = (undefined4 *)*puVar7;
                      puVar6 = puVar4;
                    } while (puVar7 != (undefined4 *)0x0);
                    if (((undefined4 **)puVar4 != &DAT_711a38f4) &&
                       (*(ushort *)(puVar4 + 4) <= uVar10)) {
                      puVar7 = (undefined4 *)puVar4[1];
                      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
                        do {
                          puVar8 = (undefined4 *)puVar6[2];
                          bVar11 = (undefined4 *)*puVar8 != puVar6;
                          puVar6 = puVar8;
                        } while (bVar11);
                      }
                      else {
                        do {
                          puVar8 = puVar7;
                          puVar7 = (undefined4 *)*puVar8;
                        } while ((undefined4 *)*puVar8 != (undefined4 *)0x0);
                      }
                      if (DAT_711a38f0 == puVar4) {
                        DAT_711a38f0 = puVar8;
                      }
                      DAT_711a38f8 = DAT_711a38f8 + -1;
                      FUN_71368054(DAT_711a38f4,puVar4);
                      thunk_qNQrlu(puVar4);
                    }
                  }
                }
                else {
                  uVar3 = FUN_71556bcc();
                  FUN_71557f40(uVar3,puVar6 + 7);
                }
              }
            }
          }
          else {
            iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x1f8c);
            if (iVar1 != 0) {
              piVar2 = (int *)(iVar1 + 0x10);
              goto LAB_71555634;
            }
          }
        }
      }
      puVar6 = puVar9;
    } while ((undefined4 **)puVar9 != &DAT_711a38f4);
  }
  return;
}


// =========================================================================
// Function: FUN_715559a8
// Entry: 0x715559a8 | Size: 200 bytes
// =========================================================================

void FUN_715559a8(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (DAT_711a38f4 != (undefined4 *)0x0) {
    puVar2 = &DAT_711a38f4;
    puVar4 = DAT_711a38f4;
    do {
      puVar3 = puVar4;
      if (*(ushort *)(puVar4 + 4) < param_1) {
        puVar4 = puVar4 + 1;
        puVar3 = puVar2;
      }
      puVar2 = puVar3;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
    if ((undefined4 **)puVar2 != &DAT_711a38f4) {
      if (*(ushort *)(puVar2 + 4) <= param_1) {
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
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
        if (DAT_711a38f0 == puVar2) {
          DAT_711a38f0 = puVar1;
        }
        DAT_711a38f8 = DAT_711a38f8 + -1;
        FUN_71368054(DAT_711a38f4,puVar2);
        thunk_qNQrlu(puVar2);
        return;
      }
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71555b00
// Entry: 0x71555b00 | Size: 284 bytes
// =========================================================================

void FUN_71555b00(void)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  iVar6 = DAT_711f6d58;
  puVar8 = DAT_711a38f0;
  if (DAT_711a38f0 != &DAT_711a38f4) {
    do {
      uVar1 = *(ushort *)(puVar8 + 4);
      uVar7 = (uint)(uVar1 >> 2);
      if (uVar7 < 0xfb) {
        if (iVar6 != 0) {
          uVar7 = *(uint *)(iVar6 + 0xac);
        }
        if (iVar6 != 0 && uVar7 != 0) {
          if ((uint)*(ushort *)(uVar7 + 0x1f68) == (uint)uVar1) {
            if (*(int *)(uVar7 + 0x1f6c) != 0) {
              piVar4 = (int *)(*(int *)(uVar7 + 0x1f6c) + 0x130);
LAB_71555bdc:
              if (*piVar4 != 0) {
                FUN_71557078();
                iVar6 = DAT_711f6d58;
              }
            }
          }
          else {
            iVar5 = *(int *)(uVar7 + (uint)uVar1 * 4 + 0x1f8c);
            if (iVar5 != 0) {
              piVar4 = (int *)(iVar5 + 0x10);
              goto LAB_71555bdc;
            }
          }
        }
      }
      puVar2 = (undefined4 *)puVar8[1];
      if ((undefined4 *)puVar8[1] == (undefined4 *)0x0) {
        do {
          puVar3 = (undefined4 *)puVar8[2];
          bVar9 = (undefined4 *)*puVar3 != puVar8;
          puVar8 = puVar3;
        } while (bVar9);
      }
      else {
        do {
          puVar3 = puVar2;
          puVar2 = (undefined4 *)*puVar3;
        } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
      }
      puVar8 = puVar3;
    } while (puVar3 != &DAT_711a38f4);
  }
  FUN_71555cac(&DAT_711a38f0,DAT_711a38f4);
  DAT_711a38f0 = &DAT_711a38f4;
  DAT_711a38f4 = 0;
  DAT_711a38f8 = 0;
  return;
}


// =========================================================================
// Function: FUN_71555cac
// Entry: 0x71555cac | Size: 60 bytes
// =========================================================================

void FUN_71555cac(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71555cac(param_1,*param_2);
  FUN_71555cac(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_71555e18
// Entry: 0x71555e18 | Size: 284 bytes
// =========================================================================

void FUN_71555e18(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  iVar1 = FUN_71ba2d10(uVar4,0);
  if (iVar1 != 0) {
    uVar4 = 0;
  }
  iVar1 = FUN_71ba2d70(uVar4,0x3f800000);
  if (iVar1 != 0) {
    uVar4 = 0x3f800000;
  }
  iVar1 = FUN_71ba2d10(uVar5,0);
  if (iVar1 != 0) {
    uVar5 = 0;
  }
  iVar1 = FUN_71ba2d70(uVar5,0x3f800000);
  uVar2 = FUN_71ba240c(0x3f800000,uVar4);
  if (iVar1 != 0) {
    uVar5 = 0x3f800000;
  }
  uVar2 = FUN_71ba240c(uVar2,uVar5);
  iVar1 = FUN_71ba2d30(uVar2,0);
  if (iVar1 != 0) {
    uVar2 = FUN_71ba0b38(uVar4,uVar5);
    iVar1 = FUN_71ba2d70(uVar2,0);
    uVar3 = FUN_71ba13e0(0x3f800000,uVar2);
    uVar2 = 0x3f800000;
    if (iVar1 != 0) {
      uVar2 = uVar3;
    }
    uVar5 = FUN_71ba21e8(uVar5,uVar2);
    uVar4 = FUN_71ba21e8(uVar4,uVar2);
    uVar2 = 0;
  }
  *param_2 = uVar2;
  *param_3 = uVar4;
  *param_4 = uVar5;
  return;
}


// =========================================================================
// Function: FUN_7155609c
// Entry: 0x7155609c | Size: 100 bytes
// =========================================================================

uint FUN_7155609c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  
  if (param_2 != 0xffff) {
    uVar1 = *(uint *)(param_1 + 0x20c);
    uVar2 = 10;
    if (uVar1 < 10) {
      uVar2 = uVar1;
    }
    if (uVar1 == 0) {
      return 10;
    }
    uVar1 = 0;
    puVar3 = (ushort *)(param_1 + 0x144);
    do {
      if (*puVar3 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 10;
    } while (uVar2 != uVar1);
  }
  return 10;
}


// =========================================================================
// Function: FUN_71556118
// Entry: 0x71556118 | Size: 716 bytes
// =========================================================================

undefined4 FUN_71556118(char *param_1,char *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = 0;
  if ((((*param_1 == *param_2) && (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) &&
      (*(short *)(param_1 + 4) == *(short *)(param_2 + 4))) &&
     (*(short *)(param_1 + 6) == *(short *)(param_2 + 6))) {
    iVar3 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
    if (((((iVar3 == 0) ||
          (iVar3 = FUN_71ba2cf0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc)),
          iVar3 == 0)) ||
         ((*(int *)(param_1 + 0x210) != *(int *)(param_2 + 0x210) ||
          ((iVar3 = FUN_715566e8(param_1 + 0x10,param_2 + 0x10), iVar3 == 0 ||
           (iVar3 = FUN_715566e8(param_1 + 0x22,param_2 + 0x22), iVar3 == 0)))))) ||
        ((iVar3 = FUN_715566e8(param_1 + 0x34,param_2 + 0x34), iVar3 == 0 ||
         ((((iVar3 = FUN_715566e8(param_1 + 0x46,param_2 + 0x46), iVar3 == 0 ||
            (iVar3 = FUN_715566e8(param_1 + 0x58,param_2 + 0x58), iVar3 == 0)) ||
           (iVar3 = FUN_715566e8(param_1 + 0x6a,param_2 + 0x6a), iVar3 == 0)) ||
          ((iVar3 = FUN_715566e8(param_1 + 0x7c,param_2 + 0x7c), iVar3 == 0 ||
           (iVar3 = FUN_715566e8(param_1 + 0x8e,param_2 + 0x8e), iVar3 == 0)))))))) ||
       (((((iVar3 = FUN_715566e8(param_1 + 0xa0,param_2 + 0xa0), iVar3 == 0 ||
           ((iVar3 = FUN_715566e8(param_1 + 0xb2,param_2 + 0xb2), iVar3 == 0 ||
            (iVar3 = FUN_715566e8(param_1 + 0xc4,param_2 + 0xc4), iVar3 == 0)))) ||
          (iVar3 = FUN_715566e8(param_1 + 0xd6,param_2 + 0xd6), iVar3 == 0)) ||
         (((iVar3 = FUN_715566e8(param_1 + 0xe8,param_2 + 0xe8), iVar3 == 0 ||
           (iVar3 = FUN_715566e8(param_1 + 0xfa,param_2 + 0xfa), iVar3 == 0)) ||
          (iVar3 = FUN_715566e8(param_1 + 0x10c,param_2 + 0x10c), iVar3 == 0)))) ||
        ((iVar3 = FUN_715566e8(param_1 + 0x11e,param_2 + 0x11e), iVar3 == 0 ||
         (iVar3 = FUN_715566e8(param_1 + 0x130,param_2 + 0x130), iVar3 == 0)))))) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 0x20c);
    uVar2 = 0;
    if (uVar7 == *(uint *)(param_2 + 0x20c)) {
      uVar4 = uVar7;
      if (9 < uVar7) {
        uVar4 = 10;
      }
      if (uVar7 != 0) {
        iVar3 = 0;
        do {
          uVar1 = *(ushort *)(param_2 + iVar3 + 0x144);
          uVar6 = *(ushort *)(param_1 + iVar3 + 0x144);
          bVar8 = uVar6 != uVar1;
          if (!bVar8) {
            uVar1 = (ushort)(byte)param_1[iVar3 + 0x146];
            uVar6 = (ushort)(byte)param_2[iVar3 + 0x146];
          }
          if (bVar8 || uVar1 != uVar6) {
            return 0;
          }
          if (uVar1 != 0) {
            iVar5 = FUN_71ba2cf0(*(undefined4 *)(param_1 + iVar3 + 0x148),
                                 *(undefined4 *)(param_2 + iVar3 + 0x148));
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = FUN_71ba2cf0(*(undefined4 *)(param_1 + iVar3 + 0x14c),
                                 *(undefined4 *)(param_2 + iVar3 + 0x14c));
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = FUN_71ba2cf0(*(undefined4 *)(param_1 + iVar3 + 0x150),
                                 *(undefined4 *)(param_2 + iVar3 + 0x150));
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = FUN_71ba2cf0(*(undefined4 *)(param_1 + iVar3 + 0x154),
                                 *(undefined4 *)(param_2 + iVar3 + 0x154));
            if (iVar5 == 0) {
              return 0;
            }
          }
          iVar3 = iVar3 + 0x14;
        } while (uVar4 * 0x14 - iVar3 != 0);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71556680
// Entry: 0x71556680 | Size: 80 bytes
// =========================================================================

void FUN_71556680(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 0x2da) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x26e) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x272) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2de) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffff0000;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  return;
}


// =========================================================================
// Function: FUN_715566e8
// Entry: 0x715566e8 | Size: 256 bytes
// =========================================================================

bool FUN_715566e8(short *param_1,short *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((((*param_1 == *param_2) && ((char)param_1[1] == (char)param_2[1])) &&
       (param_1[2] == param_2[2])) &&
      ((((char)param_1[3] == (char)param_2[3] &&
        (*(char *)((int)param_1 + 7) == *(char *)((int)param_2 + 7))) &&
       (((char)param_1[4] == (char)param_2[4] &&
        ((*(char *)((int)param_1 + 9) == *(char *)((int)param_2 + 9) &&
         ((char)param_1[5] == (char)param_2[5])))))))) &&
     ((*(char *)((int)param_1 + 0xb) == *(char *)((int)param_2 + 0xb) &&
      (((((char)param_1[6] == (char)param_2[6] &&
         (*(char *)((int)param_1 + 0xd) == *(char *)((int)param_2 + 0xd))) &&
        ((char)param_1[7] == (char)param_2[7])) &&
       (*(char *)((int)param_1 + 0xf) == *(char *)((int)param_2 + 0xf))))))) {
    if ((char)param_1[8] != (char)param_2[8]) {
      return false;
    }
    bVar1 = *(char *)((int)param_1 + 0x11) == *(char *)((int)param_2 + 0x11);
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_7155699c
// Entry: 0x7155699c | Size: 12 bytes
// =========================================================================

undefined4 * FUN_7155699c(void)

{
  return &DAT_700c3a38;
}


// =========================================================================
// Function: FUN_715569e0
// Entry: 0x715569e0 | Size: 348 bytes
// =========================================================================

byte FUN_715569e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  int *unaff_r5;
  
  uVar1 = DAT_711a391c;
  if (DAT_711a391c != 0) {
    uVar5 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar2 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar5 = DAT_711a391c - (DAT_711a391c >> 1 & 0x55555555);
    uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar5 < 2) {
      uVar6 = DAT_711a391c - 1 & uVar2;
    }
    else {
      uVar6 = uVar2;
      if (DAT_711a391c <= uVar2) {
        FUN_71ba33fc(uVar2,DAT_711a391c);
        uVar6 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_711a3918 + uVar6 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r5 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r5 != (int *)0x0) {
      do {
        uVar4 = unaff_r5[1];
        if (uVar4 == uVar2) {
          if (unaff_r5[2] == param_1) {
            return *(byte *)(unaff_r5 + 4) ^ 1;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar1);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar6) {
            return 0;
          }
        }
        unaff_r5 = (int *)*unaff_r5;
      } while (unaff_r5 != (int *)0x0);
    }
  }
  return 0;
}


