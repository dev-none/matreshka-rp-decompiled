// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717c49d0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: fXbhusfClRWAy_EkEllQoh
// Entry: 0x717c4dec | Size: 420 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fXbhusfClRWAy_EkEllQoh(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar3 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar3 << 1));
    uVar5 = (uint)&uStack_50 | 1;
    if (uVar3 != 0) goto LAB_717c4e6c;
  }
  else {
    uVar5 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_50 = (uVar3 | 7) + 2;
    uStack_4c = uVar3;
    uStack_48 = uVar5;
LAB_717c4e6c:
    imp___aeabi_memcpy(uVar5,param_1,uVar3);
  }
  uVar2 = uStack_50;
  *(undefined1 *)(uVar5 + uVar3) = 0;
  iVar1 = DAT_712017fc;
  if (DAT_712017fc == 0) goto LAB_717c4f54;
  if ((uStack_50 & 1) == 0) {
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    uStack_58 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_60,uStack_48,uStack_4c);
  }
  iVar6 = 0x14;
  iStack_54 = param_2;
  piStack_30 = (int *)thunk_MwhHq(0x14);
  *piStack_30 = (int)&DAT_70b0f6ec;
  piStack_30[1] = uStack_60;
  piStack_30[2] = uStack_5c;
  piStack_30[3] = uStack_58;
  piStack_30[4] = param_2;
  piVar4 = aiStack_40;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  FUN_717ccb10(iVar1,piVar4);
  if (piStack_30 == piVar4) {
    iVar6 = 0x10;
LAB_717c4f34:
    (**(code **)(*piVar4 + iVar6))();
  }
  else {
    piVar4 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_717c4f34;
  }
  if ((uStack_60 & 1) != 0) {
    thunk_qNQrlu(uStack_58);
  }
LAB_717c4f54:
  if ((uVar2 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: iUPYRtDWkCpTPMCDIXxLroLA
// Entry: 0x717c5140 | Size: 440 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iUPYRtDWkCpTPMCDIXxLroLA(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar2 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar2 << 1));
    uVar5 = (uint)&uStack_50 | 1;
    if (uVar2 != 0) goto LAB_717c51c4;
  }
  else {
    uVar5 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_50 = (uVar2 | 7) + 2;
    uStack_4c = uVar2;
    uStack_48 = uVar5;
LAB_717c51c4:
    imp___aeabi_memcpy(uVar5,param_1,uVar2);
  }
  uVar1 = uStack_50;
  *(undefined1 *)(uVar5 + uVar2) = 0;
  iVar4 = DAT_712017fc;
  if (DAT_712017fc == 0) goto LAB_717c52bc;
  if ((uStack_50 & 1) == 0) {
    uStack_68 = uStack_50;
    uStack_64 = uStack_4c;
    uStack_60 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_68,uStack_48,uStack_4c);
  }
  iStack_58 = param_3;
  iStack_54 = param_4;
  piStack_30 = (int *)thunk_MwhHq(0x20);
  uVar2 = uStack_68;
  piStack_30[6] = param_3;
  piStack_30[7] = param_4;
  piVar3 = aiStack_40;
  *piStack_30 = (int)&DAT_70b0f710;
  uStack_68 = 0;
  piStack_30[2] = uVar2;
  piStack_30[3] = uStack_64;
  piStack_30[4] = uStack_60;
  uStack_64 = 0;
  uStack_60 = 0;
  FUN_717ccb10(iVar4,piVar3);
  if (piStack_30 == piVar3) {
    iVar4 = 0x10;
LAB_717c529c:
    (**(code **)(*piVar3 + iVar4))();
  }
  else {
    iVar4 = 0x14;
    piVar3 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_717c529c;
  }
  if ((uStack_68 & 1) != 0) {
    thunk_qNQrlu(uStack_60);
  }
LAB_717c52bc:
  if ((uVar1 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: dNnGEgQlDdsiVEraVfWPlaVWn
// Entry: 0x717c54a8 | Size: 668 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dNnGEgQlDdsiVEraVfWPlaVWn(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar3 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_50 | 1;
    if (uVar3 != 0) goto LAB_717c5528;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_50 = (uVar3 | 7) + 2;
    uStack_4c = uVar3;
    uStack_48 = uVar6;
LAB_717c5528:
    imp___aeabi_memcpy(uVar6,param_1,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar3 = imp_strlen(param_2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_60);
  }
  if (uVar3 < 0xb) {
    uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_60 | 1;
    if (uVar3 != 0) goto LAB_717c5598;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_60 = (uVar3 | 7) + 2;
    uStack_5c = uVar3;
    uStack_58 = uVar6;
LAB_717c5598:
    imp___aeabi_memcpy(uVar6,param_2,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  iVar5 = DAT_712017fc;
  if (DAT_712017fc == 0) {
    uVar3 = uStack_60 & 1;
    goto LAB_717c56ec;
  }
  if ((uStack_50 & 1) == 0) {
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_78,uStack_48,uStack_4c);
  }
  uVar3 = uStack_60 & 1;
  if ((uStack_60 & 1) == 0) {
    uStack_6c = uStack_60;
    uStack_68 = uStack_5c;
    uStack_64 = uStack_58;
  }
  else {
    FUN_712f6d58(&uStack_6c,uStack_58,uStack_5c);
  }
  piStack_30 = (int *)thunk_MwhHq(0x1c);
  uVar2 = uStack_64;
  uVar1 = uStack_68;
  uVar6 = uStack_6c;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  piVar4 = aiStack_40;
  *piStack_30 = (int)&DAT_70b0f734;
  piStack_30[1] = uStack_78;
  piStack_30[2] = uStack_74;
  piStack_30[3] = uStack_70;
  piStack_30[4] = uVar6;
  piStack_30[5] = uVar1;
  piStack_30[6] = uVar2;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  FUN_717ccb10(iVar5,piVar4);
  if (piStack_30 == piVar4) {
    iVar5 = 0x10;
LAB_717c56b8:
    (**(code **)(*piVar4 + iVar5))();
  }
  else {
    iVar5 = 0x14;
    piVar4 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_717c56b8;
  }
  if ((uStack_6c & 1) != 0) {
    thunk_qNQrlu(uStack_64);
  }
  if ((uStack_78 & 1) != 0) {
    thunk_qNQrlu(uStack_70);
  }
LAB_717c56ec:
  if (uVar3 != 0) {
    thunk_qNQrlu(uStack_58);
  }
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: nqHipGwmtPsmeBYMSdnyoa
// Entry: 0x717c59b8 | Size: 412 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nqHipGwmtPsmeBYMSdnyoa(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_48);
  }
  if (uVar3 < 0xb) {
    uStack_48 = CONCAT31(uStack_48._1_3_,(char)(uVar3 << 1));
    uVar5 = (uint)&uStack_48 | 1;
    if (uVar3 == 0) goto LAB_717c5a44;
  }
  else {
    uVar5 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_48 = (uVar3 | 7) + 2;
    uStack_44 = uVar3;
    uStack_40 = uVar5;
  }
  imp___aeabi_memcpy(uVar5,param_1,uVar3);
LAB_717c5a44:
  uVar2 = uStack_48;
  *(undefined1 *)(uVar5 + uVar3) = 0;
  iVar1 = DAT_712017fc;
  if (DAT_712017fc != 0) {
    if ((uStack_48 & 1) == 0) {
      uStack_58 = uStack_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
    }
    else {
      FUN_712f6d58(&uStack_58,uStack_40,uStack_44);
    }
    iVar6 = 0x10;
    piStack_28 = (int *)thunk_MwhHq(0x10);
    *piStack_28 = (int)&DAT_70b0f758;
    piStack_28[1] = uStack_58;
    piStack_28[2] = uStack_54;
    piStack_28[3] = uStack_50;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    FUN_717ccb10(iVar1,aiStack_38);
    piVar4 = aiStack_38;
    if ((piStack_28 == aiStack_38) || (iVar6 = 0x14, piVar4 = piStack_28, piStack_28 != (int *)0x0))
    {
      (**(code **)(*piVar4 + iVar6))(piVar4);
    }
    if ((uStack_58 & 1) != 0) {
      thunk_qNQrlu(uStack_50);
    }
  }
  if ((uVar2 & 1) != 0) {
    thunk_qNQrlu(uStack_40);
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: RsLoZIDCsUoqMWtzFTnxk
// Entry: 0x717c5d04 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RsLoZIDCsUoqMWtzFTnxk(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    apuStack_30[0] = &DAT_70b0f77c;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(DAT_712017fc,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_717c5d88;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_717c5d88:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717c5e7c
// Entry: 0x717c5e7c | Size: 72 bytes
// =========================================================================

undefined4 FUN_717c5e7c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_712017dc);
  iVar1 = FUN_717ca090(&DAT_71201798,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_712017dc);
  return uVar2;
}


// =========================================================================
// Function: FUN_717c5f90
// Entry: 0x717c5f90 | Size: 88 bytes
// =========================================================================

undefined4 FUN_717c5f90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_712017dc);
  iVar1 = FUN_717c89c8(&DAT_712017b0,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_71ba242c(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_712017dc);
  return uVar2;
}


// =========================================================================
// Function: FUN_717c60d0
// Entry: 0x717c60d0 | Size: 132 bytes
// =========================================================================

void FUN_717c60d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_712017dc);
  iVar1 = FUN_71659d04(&DAT_712017c8,param_2);
  if (iVar1 == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else if ((*(byte *)(iVar1 + 0x14) & 1) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    *param_1 = *(undefined4 *)(iVar1 + 0x14);
    param_1[1] = uVar3;
    param_1[2] = uVar2;
  }
  else {
    FUN_712f6d58(param_1,*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(iVar1 + 0x18));
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_712017dc);
  return;
}


// =========================================================================
// Function: FUN_717c623c
// Entry: 0x717c623c | Size: 924 bytes
// =========================================================================

void FUN_717c623c(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  bool bVar10;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  undefined1 uStack_25;
  undefined4 uStack_24;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_712017dc);
  iVar2 = FUN_717ca090(&DAT_71201798,param_1);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x14) != param_2)) {
    uStack_24 = param_1;
    FUN_717c7f98(&iStack_5c,&DAT_71201798,param_1,&DAT_70085623,&uStack_24,&uStack_25);
    *(int *)(iStack_5c + 0x14) = param_2;
    iVar2 = FUN_717c89c8(&DAT_712017b0,param_1);
    if (iVar2 != 0) {
      FUN_717c8c5c(&iStack_5c,&DAT_712017b0,iVar2);
      iVar2 = iStack_5c;
      iStack_5c = 0;
      if (iVar2 != 0) {
        bVar10 = (uStack_54 & 0xff) != 0;
        bVar1 = 0;
        if (bVar10) {
          bVar1 = *(byte *)(iVar2 + 8);
        }
        if (bVar10 && (bVar1 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(iVar2 + 0x10));
        }
        thunk_qNQrlu(iVar2);
      }
    }
    FUN_717c8ec0(&DAT_712017c8,param_1);
    iVar2 = DAT_712017f8;
    DataMemoryBarrier(0xb);
    if (((DAT_712017e4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_712017e4), iVar9 != 0))
    {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb018);
      if (*pcVar5 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb008);
        *(undefined1 *)(puVar7 + 4) = 1;
        *puVar7 = 0x7688b790;
        puVar7[1] = 0xb2d3a129;
        puVar7[2] = 0x67848881;
        puVar7[3] = 0xd3f1bb0e;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_717c7f04,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb018);
        *puVar8 = 1;
      }
      pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb008);
      if (pbVar6[0x10] != 0) {
        *pbVar6 = *pbVar6 ^ 0xf3;
        pbVar6[1] = pbVar6[1] ^ 0xdb;
        pbVar6[2] = pbVar6[2] ^ 0xe1;
        pbVar6[3] = pbVar6[3] ^ 0x13;
        pbVar6[0x10] = 0;
        pbVar6[4] = pbVar6[4] ^ 0x47;
        pbVar6[5] = pbVar6[5] ^ 0xd5;
        pbVar6[6] = pbVar6[6] ^ 0x85;
        pbVar6[7] = pbVar6[7] ^ 0xd3;
        pbVar6[8] = pbVar6[8] ^ 0xf3;
        pbVar6[9] = pbVar6[9] ^ 0xdb;
        pbVar6[10] = pbVar6[10] ^ 0xe1;
        pbVar6[0xb] = pbVar6[0xb] ^ 0x13;
        pbVar6[0xc] = pbVar6[0xc] ^ 0x47;
        pbVar6[0xd] = pbVar6[0xd] ^ 0xd5;
        pbVar6[0xe] = pbVar6[0xe] ^ 0x85;
        pbVar6[0xf] = pbVar6[0xf] ^ 0xd3;
      }
      DAT_712017e0 = FUN_71885ba4(pbVar6,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_712017e4);
    }
    iVar9 = DAT_712017e0;
    imp___aeabi_memclr4(&uStack_58,0x30);
    iStack_5c = iVar9;
    FUN_71524948(&iStack_5c,param_1);
    uVar3 = FUN_713a0424(&iStack_5c,param_2);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2 + 0x34);
    piVar4 = (int *)thunk_MwhHq(0x3c);
    *piVar4 = 0;
    piVar4[1] = 0;
    FUN_713a10f8(piVar4 + 2,uVar3);
    piVar4[1] = iVar2 + 0x38;
    iVar9 = *(int *)(iVar2 + 0x38);
    *piVar4 = iVar9;
    *(int **)(iVar9 + 4) = piVar4;
    *(int **)(iVar2 + 0x38) = piVar4;
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2 + 0x34);
    if (iStack_40 != 0) {
      iStack_3c = iStack_40;
      thunk_qNQrlu();
    }
    if (iStack_4c != 0) {
      iStack_48 = iStack_4c;
      thunk_qNQrlu();
    }
    if (uStack_58 != 0) {
      uStack_54 = uStack_58;
      thunk_qNQrlu();
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_712017dc);
  return;
}


// =========================================================================
// Function: FUN_717c6b64
// Entry: 0x717c6b64 | Size: 1064 bytes
// =========================================================================

void FUN_717c6b64(undefined4 param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  undefined1 uStack_29;
  undefined4 uStack_28;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_712017dc);
  iVar6 = FUN_71659d04(&DAT_712017c8,param_1);
  if (iVar6 == 0) {
    uVar12 = *(uint *)(param_2 + 4);
    if ((*param_2 & 1) == 0) {
      uVar12 = (uint)(*param_2 >> 1);
    }
joined_r0x717c6c20:
    if (uVar12 == 0) goto LAB_717c6e14;
  }
  else {
    bVar17 = *param_2;
    uVar16 = *(uint *)(iVar6 + 0x18);
    bVar2 = *(byte *)(iVar6 + 0x14);
    uVar12 = *(uint *)(param_2 + 4);
    if ((bVar17 & 1) == 0) {
      uVar12 = (uint)(bVar17 >> 1);
    }
    if ((bVar2 & 1) == 0) {
      uVar16 = (uint)(bVar2 >> 1);
    }
    if (uVar16 == uVar12) {
      pbVar13 = *(byte **)(param_2 + 8);
      if ((bVar17 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      if ((bVar2 & 1) == 0) {
        if (1 < bVar2) {
          uVar12 = (uint)(bVar2 >> 1);
          pbVar7 = (byte *)(iVar6 + 0x15);
          do {
            if (*pbVar7 != *pbVar13) goto LAB_717c6c38;
            pbVar13 = pbVar13 + 1;
            uVar12 = uVar12 - 1;
            pbVar7 = pbVar7 + 1;
          } while (uVar12 != 0);
        }
        goto LAB_717c6e14;
      }
      uVar12 = imp_memcmp(*(undefined4 *)(iVar6 + 0x1c));
      goto joined_r0x717c6c20;
    }
  }
LAB_717c6c38:
  uStack_28 = param_1;
  FUN_7165a1fc(&iStack_60,&DAT_712017c8,param_1,&DAT_70085623,&uStack_28,&uStack_29);
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (iStack_60 + 0x14,param_2);
  iVar6 = FUN_717ca090(&DAT_71201798,param_1);
  if (iVar6 != 0) {
    FUN_717ca324(&iStack_60,&DAT_71201798,iVar6);
    iVar6 = iStack_60;
    iStack_60 = 0;
    if (iVar6 != 0) {
      bVar19 = (uStack_58 & 0xff) != 0;
      bVar17 = 0;
      if (bVar19) {
        bVar17 = *(byte *)(iVar6 + 8);
      }
      if (bVar19 && (bVar17 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(iVar6 + 0x10));
      }
      thunk_qNQrlu(iVar6);
    }
  }
  iVar6 = FUN_717c89c8(&DAT_712017b0,param_1);
  if (iVar6 != 0) {
    FUN_717c8c5c(&iStack_60,&DAT_712017b0,iVar6);
    iVar6 = iStack_60;
    iStack_60 = 0;
    if (iVar6 != 0) {
      bVar19 = (uStack_58 & 0xff) != 0;
      bVar17 = 0;
      if (bVar19) {
        bVar17 = *(byte *)(iVar6 + 8);
      }
      if (bVar19 && (bVar17 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(iVar6 + 0x10));
      }
      thunk_qNQrlu(iVar6);
    }
  }
  iVar6 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_712017ec & 1) == 0) && (iVar18 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_712017ec), iVar18 != 0))
  {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb038);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb028);
      *(undefined1 *)((int)puVar10 + 0x13) = 1;
      uVar5 = DAT_7008561c;
      uVar4 = DAT_70085618;
      uVar3 = DAT_70085614;
      *puVar10 = DAT_70085610;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined2 *)(puVar10 + 4) = DAT_70085620;
      *(undefined1 *)((int)puVar10 + 0x12) = DAT_70085622;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717c7f34,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb038);
      *puVar11 = 1;
    }
    iVar18 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb028);
    if (*(char *)(iVar18 + 0x13) != '\0') {
      uVar12 = 0;
      uVar16 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar17 = (byte)(0x6f49fdeb >> iVar14) |
                 (byte)(-0x20088231 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar17 = (byte)(0xdff77dcf >> (uVar15 & 0xff));
        }
        *(byte *)(iVar18 + uVar12) = *(byte *)(iVar18 + uVar12) ^ bVar17;
        bVar20 = 0xfffffffe < uVar12;
        bVar19 = uVar16 == 0;
        bVar1 = (0x11 < uVar12) <= uVar16;
        uVar12 = uVar12 + 1;
        uVar16 = uVar16 + bVar20;
      } while (bVar19 && bVar1);
      *(undefined1 *)(iVar18 + 0x13) = 0;
    }
    DAT_712017e8 = FUN_71885ba4(iVar18,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_712017ec);
  }
  iVar18 = DAT_712017e8;
  imp___aeabi_memclr4(&uStack_5c,0x30);
  iStack_60 = iVar18;
  FUN_71524948(&iStack_60,param_1);
  FUN_71524948(&iStack_60,param_2);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6 + 0x34);
  piVar8 = (int *)thunk_MwhHq(0x3c);
  *piVar8 = 0;
  piVar8[1] = 0;
  FUN_713a10f8(piVar8 + 2,&iStack_60);
  piVar8[1] = iVar6 + 0x38;
  iVar18 = *(int *)(iVar6 + 0x38);
  *piVar8 = iVar18;
  *(int **)(iVar18 + 4) = piVar8;
  *(int **)(iVar6 + 0x38) = piVar8;
  *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6 + 0x34);
  if (iStack_44 != 0) {
    iStack_40 = iStack_44;
    thunk_qNQrlu();
  }
  if (iStack_50 != 0) {
    iStack_4c = iStack_50;
    thunk_qNQrlu();
  }
  if (uStack_5c != 0) {
    uStack_58 = uStack_5c;
    thunk_qNQrlu();
  }
LAB_717c6e14:
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_712017dc);
  return;
}


// =========================================================================
// Function: FUN_717c75e4
// Entry: 0x717c75e4 | Size: 920 bytes
// =========================================================================

void FUN_717c75e4(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  bool bVar9;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_712017dc);
  iVar2 = FUN_717ca090(&DAT_71201798,param_1);
  if (iVar2 != 0) {
    FUN_717ca324(&iStack_4c,&DAT_71201798,iVar2);
    iVar2 = iStack_4c;
    iStack_4c = 0;
    if (iVar2 != 0) {
      bVar9 = (uStack_44 & 0xff) != 0;
      bVar1 = 0;
      if (bVar9) {
        bVar1 = *(byte *)(iVar2 + 8);
      }
      if (bVar9 && (bVar1 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(iVar2 + 0x10));
      }
      thunk_qNQrlu(iVar2);
    }
  }
  iVar2 = FUN_717c89c8(&DAT_712017b0,param_1);
  if (iVar2 != 0) {
    FUN_717c8c5c(&iStack_4c,&DAT_712017b0,iVar2);
    iVar2 = iStack_4c;
    iStack_4c = 0;
    if (iVar2 != 0) {
      bVar9 = (uStack_44 & 0xff) != 0;
      bVar1 = 0;
      if (bVar9) {
        bVar1 = *(byte *)(iVar2 + 8);
      }
      if (bVar9 && (bVar1 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(iVar2 + 0x10));
      }
      thunk_qNQrlu(iVar2);
    }
  }
  FUN_717c8ec0(&DAT_712017c8,param_1);
  iVar2 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_712017f4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_712017f4), iVar8 != 0)) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb058);
    if (*pcVar4 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb048);
      *(undefined1 *)(puVar6 + 4) = 1;
      *puVar6 = 0x862ca79a;
      puVar6[1] = 0x4a6185e5;
      puVar6[2] = 0x8f208f8b;
      puVar6[3] = 0x2b5285ee;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_717c7f68,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb058);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700fb048);
    if (pbVar5[0x10] != 0) {
      *pbVar5 = *pbVar5 ^ 0xf9;
      pbVar5[1] = pbVar5[1] ^ 0xcb;
      pbVar5[2] = pbVar5[2] ^ 0x45;
      pbVar5[3] = pbVar5[3] ^ 0xe3;
      pbVar5[0x10] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x8b;
      pbVar5[5] = pbVar5[5] ^ 0xf1;
      pbVar5[6] = pbVar5[6] ^ 0x37;
      pbVar5[7] = pbVar5[7] ^ 0x2b;
      pbVar5[8] = pbVar5[8] ^ 0xf9;
      pbVar5[9] = pbVar5[9] ^ 0xcb;
      pbVar5[10] = pbVar5[10] ^ 0x45;
      pbVar5[0xb] = pbVar5[0xb] ^ 0xe3;
      pbVar5[0xc] = pbVar5[0xc] ^ 0x8b;
      pbVar5[0xd] = pbVar5[0xd] ^ 0xf1;
      pbVar5[0xe] = pbVar5[0xe] ^ 0x37;
      pbVar5[0xf] = pbVar5[0xf] ^ 0x2b;
    }
    DAT_712017f0 = FUN_71885ba4(pbVar5,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_712017f4);
  }
  iVar8 = DAT_712017f0;
  imp___aeabi_memclr4(&uStack_48,0x30);
  iStack_4c = iVar8;
  FUN_71524948(&iStack_4c,param_1);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2 + 0x34);
  piVar3 = (int *)thunk_MwhHq(0x3c);
  *piVar3 = 0;
  piVar3[1] = 0;
  FUN_713a10f8(piVar3 + 2,&iStack_4c);
  piVar3[1] = iVar2 + 0x38;
  iVar8 = *(int *)(iVar2 + 0x38);
  *piVar3 = iVar8;
  *(int **)(iVar8 + 4) = piVar3;
  *(int **)(iVar2 + 0x38) = piVar3;
  *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2 + 0x34);
  if (iStack_30 != 0) {
    iStack_2c = iStack_30;
    thunk_qNQrlu();
  }
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    thunk_qNQrlu();
  }
  if (uStack_48 != 0) {
    uStack_44 = uStack_48;
    thunk_qNQrlu();
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_712017dc);
  return;
}


// =========================================================================
// Function: FUN_717c7f98
// Entry: 0x717c7f98 | Size: 1060 bytes
// =========================================================================

void FUN_717c7f98(undefined4 *param_1,int *param_2,byte *param_3,undefined4 param_4,
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
LAB_717c8034:
    uVar9 = (uVar9 ^ *pbVar14) * 0x5bd1e995;
  }
  else {
    if (uVar13 == 2) {
LAB_717c802c:
      uVar9 = uVar9 ^ (uint)pbVar14[1] << 8;
      goto LAB_717c8034;
    }
    if (uVar13 == 3) {
      uVar9 = uVar9 ^ (uint)pbVar14[2] << 0x10;
      goto LAB_717c802c;
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
LAB_717c8310:
                uVar2 = 0;
                goto LAB_717c83ac;
              }
              uVar7 = 0;
              while (*(byte *)((int)piVar15 + uVar7 + 9) == pbVar10[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar1 >> 1 == uVar7) goto LAB_717c8310;
              }
            }
            else {
              iVar11 = imp_memcmp(piVar15[4],pbVar10);
              if (iVar11 == 0) goto LAB_717c8310;
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
  piVar15[5] = 0;
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
    FUN_717c8578(param_2,uVar9);
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
    if (*piVar15 == 0) goto LAB_717c839c;
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
LAB_717c839c:
  param_2[3] = param_2[3] + 1;
  uVar2 = 1;
LAB_717c83ac:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar15;
  return;
}


// =========================================================================
// Function: FUN_717c8578
// Entry: 0x717c8578 | Size: 692 bytes
// =========================================================================

void FUN_717c8578(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_717c85c4;
    }
    return;
  }
LAB_717c85c4:
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
// Function: FUN_717c89c8
// Entry: 0x717c89c8 | Size: 552 bytes
// =========================================================================

int * FUN_717c89c8(int *param_1,byte *param_2)

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
      if (uVar9 != 3) goto LAB_717c8a68;
      uVar7 = uVar7 ^ (uint)pbVar11[2] << 0x10;
    }
    uVar7 = uVar7 ^ (uint)pbVar11[1] << 8;
  }
  uVar7 = (uVar7 ^ *pbVar11) * 0x5bd1e995;
LAB_717c8a68:
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
// Function: FUN_717c8c5c
// Entry: 0x717c8c5c | Size: 476 bytes
// =========================================================================

void FUN_717c8c5c(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = param_2[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar6 = param_3[1];
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar5 - 1 & uVar6;
  }
  else if (uVar5 <= uVar6) {
    FUN_71ba33fc(uVar6,uVar5);
    uVar6 = extraout_r1;
  }
  iVar7 = *param_2;
  piVar1 = *(int **)(iVar7 + uVar6 * 4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_3);
  if (piVar3 != param_2 + 2) {
    uVar4 = piVar3[1];
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_00;
    }
    if (uVar4 == uVar6) goto LAB_717c8da4;
  }
  if (*param_3 != 0) {
    uVar4 = *(uint *)(*param_3 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_01;
    }
    if (uVar4 == uVar6) goto LAB_717c8da4;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_717c8da4:
  iVar8 = *param_3;
  iVar7 = 0;
  if (iVar8 != 0) {
    uVar4 = *(uint *)(iVar8 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    iVar7 = iVar8;
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: FUN_717c8ec0
// Entry: 0x717c8ec0 | Size: 148 bytes
// =========================================================================

undefined4 FUN_717c8ec0(undefined4 param_1)

{
  int iVar1;
  int aiStack_1c [2];
  char cStack_14;
  
  iVar1 = FUN_71659d04();
  if (iVar1 != 0) {
    FUN_71659f98(aiStack_1c,param_1,iVar1);
    iVar1 = aiStack_1c[0];
    aiStack_1c[0] = 0;
    if (iVar1 != 0) {
      if (cStack_14 != '\0') {
        if ((*(byte *)(iVar1 + 0x14) & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(iVar1 + 0x1c));
        }
        if ((*(byte *)(iVar1 + 8) & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(iVar1 + 0x10));
        }
      }
      thunk_qNQrlu(iVar1);
    }
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_717c9318
// Entry: 0x717c9318 | Size: 48 bytes
// =========================================================================

void FUN_717c9318(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_717c965c
// Entry: 0x717c965c | Size: 1064 bytes
// =========================================================================

void FUN_717c965c(undefined4 *param_1,int *param_2,byte *param_3,undefined4 param_4,
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
LAB_717c96f8:
    uVar9 = (uVar9 ^ *pbVar14) * 0x5bd1e995;
  }
  else {
    if (uVar13 == 2) {
LAB_717c96f0:
      uVar9 = uVar9 ^ (uint)pbVar14[1] << 8;
      goto LAB_717c96f8;
    }
    if (uVar13 == 3) {
      uVar9 = uVar9 ^ (uint)pbVar14[2] << 0x10;
      goto LAB_717c96f0;
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
LAB_717c99d8:
                uVar2 = 0;
                goto LAB_717c9a74;
              }
              uVar7 = 0;
              while (*(byte *)((int)piVar15 + uVar7 + 9) == pbVar10[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar1 >> 1 == uVar7) goto LAB_717c99d8;
              }
            }
            else {
              iVar11 = imp_memcmp(piVar15[4],pbVar10);
              if (iVar11 == 0) goto LAB_717c99d8;
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
  piVar15 = (int *)thunk_MwhHq(0x20);
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
  piVar15[6] = 0;
  piVar15[7] = 0;
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
    FUN_717c9c40(param_2,uVar9);
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
    if (*piVar15 == 0) goto LAB_717c9a64;
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
LAB_717c9a64:
  param_2[3] = param_2[3] + 1;
  uVar2 = 1;
LAB_717c9a74:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar15;
  return;
}


// =========================================================================
// Function: FUN_717c9c40
// Entry: 0x717c9c40 | Size: 692 bytes
// =========================================================================

void FUN_717c9c40(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_717c9c8c;
    }
    return;
  }
LAB_717c9c8c:
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
// Function: FUN_717ca090
// Entry: 0x717ca090 | Size: 552 bytes
// =========================================================================

int * FUN_717ca090(int *param_1,byte *param_2)

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
      if (uVar9 != 3) goto LAB_717ca130;
      uVar7 = uVar7 ^ (uint)pbVar11[2] << 0x10;
    }
    uVar7 = uVar7 ^ (uint)pbVar11[1] << 8;
  }
  uVar7 = (uVar7 ^ *pbVar11) * 0x5bd1e995;
LAB_717ca130:
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
// Function: FUN_717ca324
// Entry: 0x717ca324 | Size: 476 bytes
// =========================================================================

void FUN_717ca324(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = param_2[1];
  uVar2 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar6 = param_3[1];
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  if (uVar2 < 2) {
    uVar6 = uVar5 - 1 & uVar6;
  }
  else if (uVar5 <= uVar6) {
    FUN_71ba33fc(uVar6,uVar5);
    uVar6 = extraout_r1;
  }
  iVar7 = *param_2;
  piVar1 = *(int **)(iVar7 + uVar6 * 4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
  } while ((int *)*piVar3 != param_3);
  if (piVar3 != param_2 + 2) {
    uVar4 = piVar3[1];
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_00;
    }
    if (uVar4 == uVar6) goto LAB_717ca46c;
  }
  if (*param_3 != 0) {
    uVar4 = *(uint *)(*param_3 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_01;
    }
    if (uVar4 == uVar6) goto LAB_717ca46c;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_717ca46c:
  iVar8 = *param_3;
  iVar7 = 0;
  if (iVar8 != 0) {
    uVar4 = *(uint *)(iVar8 + 4);
    if (uVar2 < 2) {
      uVar4 = uVar4 & uVar5 - 1;
    }
    else if (uVar5 <= uVar4) {
      FUN_71ba33fc(uVar4,uVar5);
      uVar4 = extraout_r1_02;
    }
    iVar7 = iVar8;
    if (uVar4 != uVar6) {
      *(int **)(*param_2 + uVar4 * 4) = piVar3;
      iVar7 = *param_3;
    }
  }
  *piVar3 = iVar7;
  *param_3 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar7 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = iVar7 + -1;
  return;
}


// =========================================================================
// Function: FUN_717ca8a8
// Entry: 0x717ca8a8 | Size: 48 bytes
// =========================================================================

void FUN_717ca8a8(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_717cb030
// Entry: 0x717cb030 | Size: 64 bytes
// =========================================================================

void FUN_717cb030(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_717cb790
// Entry: 0x717cb790 | Size: 48 bytes
// =========================================================================

void FUN_717cb790(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_717cbc5c
// Entry: 0x717cbc5c | Size: 4 bytes
// =========================================================================

void FUN_717cbc5c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717cbc78 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717cc2f4
// Entry: 0x717cc2f4 | Size: 76 bytes
// =========================================================================

undefined4 * FUN_717cc2f4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(param_1 + 8);
  param_1[0xd] = 0;
  param_1[10] = param_1[8];
  param_1[0xb] = param_1[9];
  param_1[0xc] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_717cc374
// Entry: 0x717cc374 | Size: 512 bytes
// =========================================================================

uint FUN_717cc374(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r12;
  uint extraout_r12_00;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 in_cr15;
  
  uVar4 = *param_1;
  uVar1 = param_1[2];
  if (param_4 <= (uint)((int)(uVar1 - uVar4) >> 3)) {
    iVar3 = param_1[1] - uVar4;
    if ((uint)(iVar3 >> 3) < param_4) {
      iVar3 = param_2 + iVar3;
      if (param_1[1] != uVar4) {
        imp___aeabi_memmove8(uVar4,param_2);
        uVar4 = param_1[1];
      }
      iVar2 = param_3 - iVar3;
      if (iVar2 != 0) {
        imp___aeabi_memmove8(uVar4,iVar3,iVar2);
      }
      param_1[1] = uVar4 + iVar2;
      return uVar4 + iVar2;
    }
    iVar3 = param_3 - param_2;
    if (iVar3 != 0) {
      imp___aeabi_memmove8(uVar4,param_2,iVar3);
    }
LAB_717cc484:
    param_1[1] = uVar4 + iVar3;
    return uVar4 + iVar3;
  }
  if (uVar4 != 0) {
    param_1[1] = uVar4;
    thunk_qNQrlu(uVar4);
    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar8 = 0x1fffffff < param_4;
  if (!(bool)uVar8) {
    if (param_4 < (uint)((int)uVar1 >> 2)) {
      param_4 = (int)uVar1 >> 2;
    }
    if (0x7ffffff7 < uVar1) {
      param_4 = 0x1fffffff;
    }
    uVar8 = 0x1fffffff < param_4;
    if (!(bool)uVar8) {
      uVar4 = thunk_MwhHq(param_4 << 3);
      iVar3 = param_3 - param_2;
      *param_1 = uVar4;
      param_1[1] = uVar4;
      param_1[2] = uVar4 + param_4 * 8;
      if (iVar3 != 0) {
        imp___aeabi_memcpy8(uVar4,param_2,iVar3);
      }
      goto LAB_717cc484;
    }
  }
  uVar7 = SBORROW4(param_4,0x20000000);
  uVar6 = param_4 == 0x20000000;
  uVar1 = FUN_713a1414(param_1);
  uVar5 = extraout_r12;
  if (!(bool)uVar8 || (bool)uVar6) {
    uVar1 = func_0x72c580ac();
    uVar5 = extraout_r12_00;
  }
  if (!(bool)uVar7) {
    coprocessor_loadlong(0,in_cr15,param_2 + -0xb0);
  }
  if ((bool)uVar8 && !(bool)uVar6) {
    uVar1 = uVar1 & (uint)param_1 >> 2;
  }
  if ((bool)uVar6) {
    uVar4 = uVar1 & uVar4 & uVar5 << (uVar1 & uVar4 & 0xff);
    uVar4 = uVar4 & uVar5 >> (uVar4 & 0xff);
    uVar4 = uVar4 & uVar5 << (uVar4 & 0xff);
    uVar1 = uVar4 & 0x1f;
    uVar4 = uVar4 & ((uint)param_1 >> uVar1 | (int)param_1 << 0x20 - uVar1);
    uVar4 = uVar4 & uVar5 << (uVar4 & 0xff);
    uVar4 = uVar4 & uVar4 >> 1;
    uVar1 = uVar4 & uVar5 << (uVar4 & 0xff) & (int)uVar5 >> 1;
    uVar1 = param_3 >> 1 & uVar1 & uVar5 << (uVar1 & 0xff);
    uVar1 = uVar1 & uVar5 << (uVar1 & 0xff) & uVar5 << 2;
    uVar1 = uVar1 & uVar5 << (uVar1 & 0xff);
    uVar1 = uVar1 & uVar1 >> 2;
  }
  iVar3 = *(int *)(uVar1 + 0x28);
  *(int *)(uVar1 + 0x28) = iVar3 + 1;
  return *(uint *)(*(int *)(uVar1 + 4) + iVar3 * 4);
}


// =========================================================================
// Function: cPUjiFydkFwyaZUXKIlcSLZIbcBJ
// Entry: 0x717cc574 | Size: 24 bytes
// =========================================================================

undefined4 cPUjiFydkFwyaZUXKIlcSLZIbcBJ(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  return *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4);
}


// =========================================================================
// Function: sIErACXbVVCjdFUqg_lQHdyOv
// Entry: 0x717cc5a4 | Size: 24 bytes
// =========================================================================

undefined4 sIErACXbVVCjdFUqg_lQHdyOv(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2c) = iVar1 + 1;
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar1 * 4);
}


// =========================================================================
// Function: FnyTrHF_pyIoqlpkevHafFPXEmPhuPK
// Entry: 0x717cc5d4 | Size: 28 bytes
// =========================================================================

undefined8 FnyTrHF_pyIoqlpkevHafFPXEmPhuPK(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  return *(undefined8 *)(*(int *)(param_1 + 0x1c) + iVar1 * 8);
}


// =========================================================================
// Function: mYLtRyMxGeYPOUibbTBVTYVKoKAwk
// Entry: 0x717cc608 | Size: 540 bytes
// =========================================================================

int mYLtRyMxGeYPOUibbTBVTYVKoKAwk(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  piVar1 = DAT_712017f8;
  iVar2 = DAT_712017f8[0x11];
  if (iVar2 != 0) {
    param_2 = DAT_712017f8[0x14];
  }
  if (iVar2 != 0 && iVar2 != param_2) {
    do {
      if (*(char *)(iVar2 + 0x18) == '\0') break;
      piVar1[0x11] = *(int *)(iVar2 + 0x1c);
      if (*(int **)(iVar2 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_71539164();
      }
      (**(code **)(**(int **)(iVar2 + 0x10) + 0x18))();
      iVar3 = piVar1[0x15] + 1;
      piVar1[0x15] = iVar3;
      *(undefined1 *)(piVar1[0x13] + 0x18) = 0;
      piVar1[0x13] = *(int *)(piVar1[0x13] + 0x1c);
      iVar2 = piVar1[0x11];
      if (iVar2 != 0) {
        iVar3 = piVar1[0x14];
      }
    } while (iVar2 != 0 && iVar2 != iVar3);
  }
  if (*piVar1 != 0) {
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    *piVar1 = 0;
    for (uVar6 = piVar1[10]; uVar6 < (uint)(iVar3 - iVar2 >> 2); uVar6 = uVar6 + 1) {
      imp_free(*(undefined4 *)(iVar2 + uVar6 * 4));
      iVar2 = piVar1[1];
      iVar3 = piVar1[2];
    }
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[2] = iVar2;
    piVar1[5] = piVar1[4];
    piVar1[8] = piVar1[7];
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(piVar1 + 0xd);
    piVar7 = (int *)piVar1[0xf];
    piVar4 = (int *)piVar7[1];
    *(int **)(*piVar7 + 4) = piVar4;
    *piVar4 = *piVar7;
    piVar1[0x10] = piVar1[0x10] + -1;
    if (piVar7[9] != 0) {
      piVar7[10] = piVar7[9];
      thunk_qNQrlu();
    }
    if (piVar7[6] != 0) {
      piVar7[7] = piVar7[6];
      thunk_qNQrlu();
    }
    if (piVar7[3] != 0) {
      piVar7[4] = piVar7[3];
      thunk_qNQrlu();
    }
    thunk_qNQrlu(piVar7);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(piVar1 + 0xd);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(piVar1 + 0xd);
  if (piVar1[0x10] != 0) {
    iVar2 = piVar1[0xf];
    *piVar1 = *(int *)(iVar2 + 8);
    if ((int *)(iVar2 + 8) != piVar1) {
      FUN_717cd118(piVar1 + 1,*(int *)(iVar2 + 0xc),*(int *)(iVar2 + 0x10),
                   *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2);
      FUN_717cd318(piVar1 + 4,*(int *)(iVar2 + 0x18),*(int *)(iVar2 + 0x1c),
                   *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2);
      FUN_717cc374(piVar1 + 7,*(int *)(iVar2 + 0x24),*(int *)(iVar2 + 0x28),
                   *(int *)(iVar2 + 0x28) - *(int *)(iVar2 + 0x24) >> 3);
    }
    iVar3 = *(int *)(iVar2 + 0x34);
    iVar5 = *(int *)(iVar2 + 0x38);
    piVar1[10] = *(int *)(iVar2 + 0x30);
    piVar1[0xb] = iVar3;
    piVar1[0xc] = iVar5;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(piVar1 + 0xd);
  return *piVar1;
}


// =========================================================================
// Function: ymVnmhnXVNLSRuXOEOaIhzwfKhDXz
// Entry: 0x717cc9fc | Size: 24 bytes
// =========================================================================

int * ymVnmhnXVNLSRuXOEOaIhzwfKhDXz(void)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*DAT_712017f8 != 0) {
    piVar1 = DAT_712017f8;
  }
  return piVar1;
}


// =========================================================================
// Function: FUN_717cca4c
// Entry: 0x717cca4c | Size: 144 bytes
// =========================================================================

void FUN_717cca4c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_2 = param_1[3];
  }
  if (iVar1 != 0 && iVar1 != param_2) {
    do {
      if (*(char *)(iVar1 + 0x18) == '\0') {
        return;
      }
      *param_1 = *(int *)(iVar1 + 0x1c);
      if (*(int **)(iVar1 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_71539164();
      }
      (**(code **)(**(int **)(iVar1 + 0x10) + 0x18))();
      iVar2 = param_1[4] + 1;
      param_1[4] = iVar2;
      *(undefined1 *)(param_1[2] + 0x18) = 0;
      param_1[2] = *(int *)(param_1[2] + 0x1c);
      iVar1 = *param_1;
      if (iVar1 != 0) {
        iVar2 = param_1[3];
      }
    } while (iVar1 != 0 && iVar1 != iVar2);
  }
  return;
}


// =========================================================================
// Function: FUN_717ccb10
// Entry: 0x717ccb10 | Size: 332 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717ccb10(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  piVar3 = aiStack_38;
  iStack_1c = _ext___stack_chk_guard;
  iVar4 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar4 + 0x1c) + 0x18) != '\0')) {
    uVar5 = *(undefined4 *)(iVar4 + 0x1c);
    iVar1 = thunk_MwhHq(0x20);
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(int *)(iVar4 + 0x1c) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x1c) = uVar5;
    iVar4 = *(int *)(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar4 + 0x1c);
  piVar2 = (int *)param_2[4];
  if (piVar2 == (int *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else if (piVar2 == param_2) {
    piStack_28 = aiStack_38;
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  else {
    piStack_28 = (int *)(**(code **)(*piVar2 + 8))();
  }
  FUN_717cd518(aiStack_38,iVar4);
  if (piStack_28 == aiStack_38) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = 0x14;
    piVar3 = piStack_28;
    if (piStack_28 == (int *)0x0) goto LAB_717ccc14;
  }
  (**(code **)(*piVar3 + iVar4))();
LAB_717ccc14:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x18) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c);
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717ccd08
// Entry: 0x717ccd08 | Size: 332 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717ccd08(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  piVar3 = aiStack_38;
  iStack_1c = _ext___stack_chk_guard;
  iVar4 = *(int *)(param_1 + 0x48);
  if ((*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0x4c)) ||
     (*(char *)(*(int *)(iVar4 + 0x1c) + 0x18) != '\0')) {
    uVar5 = *(undefined4 *)(iVar4 + 0x1c);
    iVar1 = thunk_MwhHq(0x20);
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(int *)(iVar4 + 0x1c) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x48) + 0x1c) + 0x1c) = uVar5;
    iVar4 = *(int *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + 0x1c);
  piVar2 = (int *)param_2[4];
  if (piVar2 == (int *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else if (piVar2 == param_2) {
    piStack_28 = aiStack_38;
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  else {
    piStack_28 = (int *)(**(code **)(*piVar2 + 8))();
  }
  FUN_717cd518(aiStack_38,iVar4);
  if (piStack_28 == aiStack_38) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = 0x14;
    piVar3 = piStack_28;
    if (piStack_28 == (int *)0x0) goto LAB_717cce0c;
  }
  (**(code **)(*piVar3 + iVar4))();
LAB_717cce0c:
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x1c);
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717cd118
// Entry: 0x717cd118 | Size: 416 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_717cd118(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 in_cr15;
  
  iVar3 = *param_1;
  uVar1 = param_1[2];
  if (param_4 <= (uint)((int)(uVar1 - iVar3) >> 2)) {
    iVar2 = param_1[1] - iVar3;
    if ((uint)(iVar2 >> 2) < param_4) {
      iVar2 = param_2 + iVar2;
      if (param_1[1] != iVar3) {
        imp___aeabi_memmove4(iVar3,param_2);
        iVar3 = param_1[1];
      }
      param_3 = param_3 - iVar2;
      if (param_3 != 0) {
        imp___aeabi_memmove4(iVar3,iVar2,param_3);
      }
      param_1[1] = iVar3 + param_3;
      return;
    }
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      imp___aeabi_memmove4(iVar3,param_2,param_3);
    }
LAB_717cd228:
    param_1[1] = iVar3 + param_3;
    return;
  }
  if (iVar3 != 0) {
    param_1[1] = iVar3;
    thunk_qNQrlu(iVar3);
    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  bVar6 = 0x3fffffff < param_4;
  if (!bVar6) {
    if (param_4 < (uint)((int)uVar1 >> 1)) {
      param_4 = (int)uVar1 >> 1;
    }
    if (0x7ffffffb < uVar1) {
      param_4 = 0x3fffffff;
    }
    bVar6 = 0x3fffffff < param_4;
    if (!bVar6) {
      iVar3 = thunk_MwhHq(param_4 << 2);
      param_3 = param_3 - param_2;
      *param_1 = iVar3;
      param_1[1] = iVar3;
      param_1[2] = iVar3 + param_4 * 4;
      if (param_3 != 0) {
        imp___aeabi_memcpy4(iVar3,param_2,param_3);
      }
      goto LAB_717cd228;
    }
  }
  uVar5 = SBORROW4(param_4,0x40000000);
  bVar4 = param_4 == 0x40000000;
  FUN_713a1344(param_1);
  if (!bVar6 || bVar4) {
    func_0x72c58e50();
  }
  if (!(bool)uVar5) {
    coprocessor_loadlong(0,in_cr15,param_2 + -0xb0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_717cd318
// Entry: 0x717cd318 | Size: 416 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_717cd318(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 in_cr15;
  
  iVar3 = *param_1;
  uVar1 = param_1[2];
  if (param_4 <= (uint)((int)(uVar1 - iVar3) >> 2)) {
    iVar2 = param_1[1] - iVar3;
    if ((uint)(iVar2 >> 2) < param_4) {
      iVar2 = param_2 + iVar2;
      if (param_1[1] != iVar3) {
        imp___aeabi_memmove4(iVar3,param_2);
        iVar3 = param_1[1];
      }
      param_3 = param_3 - iVar2;
      if (param_3 != 0) {
        imp___aeabi_memmove4(iVar3,iVar2,param_3);
      }
      param_1[1] = iVar3 + param_3;
      return;
    }
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      imp___aeabi_memmove4(iVar3,param_2,param_3);
    }
LAB_717cd428:
    param_1[1] = iVar3 + param_3;
    return;
  }
  if (iVar3 != 0) {
    param_1[1] = iVar3;
    thunk_qNQrlu(iVar3);
    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  bVar6 = 0x3fffffff < param_4;
  if (!bVar6) {
    if (param_4 < (uint)((int)uVar1 >> 1)) {
      param_4 = (int)uVar1 >> 1;
    }
    if (0x7ffffffb < uVar1) {
      param_4 = 0x3fffffff;
    }
    bVar6 = 0x3fffffff < param_4;
    if (!bVar6) {
      iVar3 = thunk_MwhHq(param_4 << 2);
      param_3 = param_3 - param_2;
      *param_1 = iVar3;
      param_1[1] = iVar3;
      param_1[2] = iVar3 + param_4 * 4;
      if (param_3 != 0) {
        imp___aeabi_memcpy4(iVar3,param_2,param_3);
      }
      goto LAB_717cd428;
    }
  }
  uVar5 = SBORROW4(param_4,0x40000000);
  bVar4 = param_4 == 0x40000000;
  FUN_713a13ac(param_1);
  if (!bVar6 || bVar4) {
    func_0x72c59050();
  }
  if (!(bool)uVar5) {
    coprocessor_loadlong(0,in_cr15,param_2 + -0xb0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_717cd518
// Entry: 0x717cd518 | Size: 364 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717cd518(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int aiStack_30 [5];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (param_2 != param_1) {
    piVar2 = (int *)param_1[4];
    piVar1 = (int *)param_2[4];
    if (piVar2 == param_1) {
      if (piVar1 != param_2) {
        (**(code **)(*param_1 + 0xc))();
        (**(code **)(*(int *)param_1[4] + 0x10))();
        param_1[4] = param_2[4];
        param_2[4] = (int)param_2;
        goto LAB_717cd660;
      }
      (**(code **)(*param_1 + 0xc))(param_1,aiStack_30);
      (**(code **)(*(int *)param_1[4] + 0x10))();
      param_1[4] = 0;
      (**(code **)(*(int *)param_2[4] + 0xc))((int *)param_2[4],param_1);
      (**(code **)(*(int *)param_2[4] + 0x10))();
      param_2[4] = 0;
      param_1[4] = (int)param_1;
      (**(code **)(aiStack_30[0] + 0xc))(aiStack_30,param_2);
      (**(code **)(aiStack_30[0] + 0x10))(aiStack_30);
    }
    else {
      if (piVar1 != param_2) {
        param_1[4] = (int)piVar1;
        param_2[4] = (int)piVar2;
        goto LAB_717cd660;
      }
      (**(code **)(*param_2 + 0xc))(param_2,param_1);
      (**(code **)(*(int *)param_2[4] + 0x10))();
      param_2[4] = param_1[4];
      param_2 = param_1;
    }
    param_2[4] = (int)param_2;
  }
LAB_717cd660:
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: QxfruDJUbxPhXKVAgdYLOIDGqXjH
// Entry: 0x717cd850 | Size: 68 bytes
// =========================================================================

void QxfruDJUbxPhXKVAgdYLOIDGqXjH(void)

{
  int iVar1;
  
  iVar1 = thunk_MwhHq(0x13d);
  *(undefined4 *)(iVar1 + 0x139) = 0x800;
  *(undefined4 *)(iVar1 + 0x12) = 0;
  *(undefined4 *)(iVar1 + 0x129) = 0;
  *(undefined1 *)(iVar1 + 0x12d) = 1;
  *(int *)(iVar1 + 3) = iVar1 + 0x27;
  return;
}


// =========================================================================
// Function: BwFTSRUoLCWlQBgtCVjW_NylqmXV
// Entry: 0x717cd8bc | Size: 168 bytes
// =========================================================================

int BwFTSRUoLCWlQBgtCVjW_NylqmXV(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = thunk_MwhHq(0x13d);
  *(uint *)(iVar2 + 0x139) = param_2 << 3;
  *(undefined1 *)(iVar2 + 0x12d) = 1;
  *(undefined4 *)(iVar2 + 0x129) = 0;
  *(uint *)(iVar2 + 0x12) = param_2 << 3;
  if (param_2 != 0) {
    if (param_2 < 0x100) {
      *(undefined4 *)(iVar2 + 0x139) = 0x800;
      iVar1 = iVar2 + 0x27;
    }
    else {
      iVar1 = imp_malloc(param_2);
    }
    *(int *)(iVar2 + 3) = iVar1;
    imp___aeabi_memcpy(iVar1,param_1,param_2);
    return iVar2;
  }
  *(undefined4 *)(iVar2 + 3) = 0;
  return iVar2;
}


// =========================================================================
// Function: qVbyXlJOkDZUYeNsc_kNo_QdoWYf
// Entry: 0x717cd9ac | Size: 176 bytes
// =========================================================================

int qVbyXlJOkDZUYeNsc_kNo_QdoWYf(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = thunk_MwhHq(0x13d);
  uVar5 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(int *)(param_1 + 0x12) + 7;
  *(undefined1 *)(iVar2 + 0x12d) = 1;
  uVar4 = uVar3 & 0xfffffff8;
  uVar3 = (int)uVar3 >> 3;
  *(undefined4 *)(iVar2 + 0x129) = 0;
  *(uint *)(iVar2 + 0x139) = uVar4;
  *(uint *)(iVar2 + 0x12) = uVar4;
  if (uVar3 != 0) {
    if (uVar3 < 0x100) {
      *(undefined4 *)(iVar2 + 0x139) = 0x800;
      iVar1 = iVar2 + 0x27;
    }
    else {
      iVar1 = imp_malloc(uVar3);
    }
    *(int *)(iVar2 + 3) = iVar1;
    imp___aeabi_memcpy(iVar1,uVar5,uVar3);
    return iVar2;
  }
  *(undefined4 *)(iVar2 + 3) = 0;
  return iVar2;
}


// =========================================================================
// Function: hiMUljPFdHaltoxWpNTqafFLJt
// Entry: 0x717cdaa4 | Size: 88 bytes
// =========================================================================

void hiMUljPFdHaltoxWpNTqafFLJt(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x12d) != '\0') && (0x800 < *(int *)(param_1 + 0x139))) {
    imp_free(*(undefined4 *)(param_1 + 3));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: zadFFnksVwOzpVwVKsRTceGmoYe
// Entry: 0x717cdb38 | Size: 16 bytes
// =========================================================================

void zadFFnksVwOzpVwVKsRTceGmoYe(int param_1)

{
  *(undefined4 *)(param_1 + 0x129) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}


// =========================================================================
// Function: IYBlKafVkqW_JmECPHBhU_ULHUghuSTTqhLgzP
// Entry: 0x717cdb60 | Size: 12 bytes
// =========================================================================

void IYBlKafVkqW_JmECPHBhU_ULHUghuSTTqhLgzP(int param_1)

{
  *(undefined4 *)(param_1 + 0x129) = 0;
  return;
}


// =========================================================================
// Function: YnuSCqgpKCbMUUCiQaQRzcZjyMeBkJLaSgupxUz
// Entry: 0x717cdb84 | Size: 12 bytes
// =========================================================================

void YnuSCqgpKCbMUUCiQaQRzcZjyMeBkJLaSgupxUz(int param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}


// =========================================================================
// Function: HfNettHnNwlRZFWVecGRcaDcEsmQeVcg
// Entry: 0x717cdba8 | Size: 16 bytes
// =========================================================================

void HfNettHnNwlRZFWVecGRcaDcEsmQeVcg(int param_1,int param_2)

{
  *(int *)(param_1 + 0x129) = *(int *)(param_1 + 0x129) + param_2;
  return;
}


// =========================================================================
// Function: vBSFGPiccojNhSfyMCuCNx_VuzFJjVIfOvRl
// Entry: 0x717cdbd0 | Size: 8 bytes
// =========================================================================

void vBSFGPiccojNhSfyMCuCNx_VuzFJjVIfOvRl(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x12) = param_2;
  return;
}


// =========================================================================
// Function: qyKeauwUYqEJveiEAcaWdwPINgHwabLnySNl
// Entry: 0x717cdbf0 | Size: 8 bytes
// =========================================================================

undefined4 qyKeauwUYqEJveiEAcaWdwPINgHwabLnySNl(int param_1)

{
  return *(undefined4 *)(param_1 + 0x12);
}


// =========================================================================
// Function: oOjhcwzZNLSfSBNZFpimCLlDCJvaWQfpatE
// Entry: 0x717cdc10 | Size: 8 bytes
// =========================================================================

void oOjhcwzZNLSfSBNZFpimCLlDCJvaWQfpatE(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x129) = param_2;
  return;
}


// =========================================================================
// Function: ickRmVcUyAvk_tGpkmYFjcRZiqRkwNcFAQk
// Entry: 0x717cdc30 | Size: 8 bytes
// =========================================================================

undefined4 ickRmVcUyAvk_tGpkmYFjcRZiqRkwNcFAQk(int param_1)

{
  return *(undefined4 *)(param_1 + 0x129);
}


// =========================================================================
// Function: nsqyGrPrvCkktcdTvFiAuKRsGbvwhp
// Entry: 0x717cdc50 | Size: 60 bytes
// =========================================================================

uint nsqyGrPrvCkktcdTvFiAuKRsGbvwhp(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(uint *)(param_1 + 0x129);
  if ((int)uVar3 < *(int *)(param_1 + 0x12)) {
    bVar1 = *(byte *)(*(int *)(param_1 + 3) + ((int)uVar3 >> 3));
    *(uint *)(param_1 + 0x129) = uVar3 + 1;
    uVar2 = ((uint)bVar1 << (uVar3 & 7) & 0xff) >> 7;
  }
  return uVar2;
}


// =========================================================================
// Function: q_rmutmYVAM_vHQldLMqPBfKmIVAEO
// Entry: 0x717cdca4 | Size: 76 bytes
// =========================================================================

uint q_rmutmYVAM_vHQldLMqPBfKmIVAEO(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = *(uint *)(param_1 + 0x129);
  uVar1 = 0;
  if ((int)(uVar4 + 8) <= *(int *)(param_1 + 0x12)) {
    pbVar2 = (byte *)(*(int *)(param_1 + 3) + ((int)uVar4 >> 3));
    uVar3 = (uint)*pbVar2;
    uVar5 = uVar4 & 7;
    bVar6 = uVar5 != 0;
    if (bVar6) {
      pbVar2 = (byte *)(uint)pbVar2[1];
    }
    uVar1 = uVar3 << uVar5;
    if (bVar6) {
      uVar3 = 8 - uVar5;
    }
    *(uint *)(param_1 + 0x129) = uVar4 + 8;
    if (bVar6) {
      uVar1 = uVar1 | (uint)pbVar2 >> (uVar3 & 0xff);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


// =========================================================================
// Function: IRxHrUvvMwlQCgCNAXTbUyZvUHNiftj
// Entry: 0x717cdd08 | Size: 152 bytes
// =========================================================================

int IRxHrUvvMwlQCgCNAXTbUyZvUHNiftj(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bStack_13;
  byte bStack_12;
  
  uVar5 = *(uint *)(param_1 + 0x129);
  iVar2 = 0;
  if ((int)(uVar5 + 0x10) <= *(int *)(param_1 + 0x12)) {
    uVar4 = uVar5 & 7;
    pcVar6 = (char *)(*(int *)(param_1 + 3) + ((int)uVar5 >> 3));
    cVar1 = *pcVar6;
    if (uVar4 != 0) {
      pcVar6 = (char *)(uint)(byte)pcVar6[1];
    }
    *(uint *)(param_1 + 0x129) = uVar5 + 8;
    bStack_12 = cVar1 << uVar4;
    pcVar3 = (char *)(*(int *)(param_1 + 3) + ((int)(uVar5 + 8) >> 3));
    cVar1 = *pcVar3;
    if (uVar4 != 0) {
      bStack_12 = bStack_12 | (byte)((uint)pcVar6 >> (8 - uVar4 & 0xff));
    }
    if (uVar4 != 0) {
      pcVar3 = (char *)(uint)(byte)pcVar3[1];
    }
    bStack_13 = cVar1 << uVar4;
    *(uint *)(param_1 + 0x129) = uVar5 + 0x10;
    if (uVar4 != 0) {
      bStack_13 = bStack_13 | (byte)((uint)pcVar3 >> (8 - uVar4 & 0xff));
    }
    iVar2 = (int)CONCAT11(bStack_13,bStack_12);
  }
  return iVar2;
}


// =========================================================================
// Function: vkonvXAWQLMsSuAoSVxAOrSClPoiW
// Entry: 0x717cddb8 | Size: 264 bytes
// =========================================================================

uint vkonvXAWQLMsSuAoSVxAOrSClPoiW(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  byte bStack_1c;
  
  uVar5 = *(uint *)(param_1 + 0x129);
  uVar2 = 0;
  if ((int)(uVar5 + 0x20) <= *(int *)(param_1 + 0x12)) {
    uVar2 = uVar5 & 7;
    uVar7 = 8 - uVar2;
    iVar3 = *(int *)(param_1 + 3);
    pcVar6 = (char *)(iVar3 + ((int)uVar5 >> 3));
    cVar1 = *pcVar6;
    if (uVar2 != 0) {
      pcVar6 = (char *)(uint)(byte)pcVar6[1];
    }
    bStack_1c = cVar1 << uVar2;
    if (uVar2 != 0) {
      bStack_1c = bStack_1c | (byte)((uint)pcVar6 >> (uVar7 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar5 + 8;
    pcVar6 = (char *)(iVar3 + ((int)(uVar5 + 8) >> 3));
    cVar1 = *pcVar6;
    if (uVar2 != 0) {
      pcVar6 = (char *)(uint)(byte)pcVar6[1];
    }
    bStack_1d = cVar1 << uVar2;
    if (uVar2 != 0) {
      bStack_1d = bStack_1d | (byte)((uint)pcVar6 >> (uVar7 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar5 + 0x10;
    pcVar6 = (char *)(iVar3 + ((int)(uVar5 + 0x10) >> 3));
    cVar1 = *pcVar6;
    if (uVar2 != 0) {
      pcVar6 = (char *)(uint)(byte)pcVar6[1];
    }
    *(uint *)(param_1 + 0x129) = uVar5 + 0x18;
    bStack_1e = cVar1 << uVar2;
    pcVar4 = (char *)(iVar3 + ((int)(uVar5 + 0x18) >> 3));
    cVar1 = *pcVar4;
    if (uVar2 != 0) {
      bStack_1e = bStack_1e | (byte)((uint)pcVar6 >> (uVar7 & 0xff));
    }
    if (uVar2 != 0) {
      pcVar4 = (char *)(uint)(byte)pcVar4[1];
    }
    bStack_1f = cVar1 << uVar2;
    *(uint *)(param_1 + 0x129) = uVar5 + 0x20;
    if (uVar2 != 0) {
      bStack_1f = bStack_1f | (byte)((uint)pcVar4 >> (uVar7 & 0xff));
    }
    uVar2 = (uint)bStack_1f << 0x18 | (uint)bStack_1e << 0x10 | (uint)bStack_1d << 8 |
            (uint)bStack_1c;
  }
  return uVar2;
}


// =========================================================================
// Function: WqrWMKOHvmnsZrATYKPVEHpiZjSvLQU
// Entry: 0x717cded8 | Size: 260 bytes
// =========================================================================

undefined4 WqrWMKOHvmnsZrATYKPVEHpiZjSvLQU(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uStack_1c;
  
  uVar10 = *(uint *)(param_1 + 0x129);
  uVar8 = 0;
  if ((int)(uVar10 + 0x20) <= *(int *)(param_1 + 0x12)) {
    uVar9 = uVar10 & 7;
    uVar12 = 8 - uVar9;
    iVar6 = *(int *)(param_1 + 3);
    pcVar11 = (char *)(iVar6 + ((int)uVar10 >> 3));
    cVar1 = *pcVar11;
    if (uVar9 != 0) {
      pcVar11 = (char *)(uint)(byte)pcVar11[1];
    }
    bVar2 = cVar1 << uVar9;
    if (uVar9 != 0) {
      bVar2 = bVar2 | (byte)((uint)pcVar11 >> (uVar12 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar10 + 8;
    pcVar11 = (char *)(iVar6 + ((int)(uVar10 + 8) >> 3));
    cVar1 = *pcVar11;
    if (uVar9 != 0) {
      pcVar11 = (char *)(uint)(byte)pcVar11[1];
    }
    bVar3 = cVar1 << uVar9;
    if (uVar9 != 0) {
      bVar3 = bVar3 | (byte)((uint)pcVar11 >> (uVar12 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar10 + 0x10;
    pcVar11 = (char *)(iVar6 + ((int)(uVar10 + 0x10) >> 3));
    cVar1 = *pcVar11;
    if (uVar9 != 0) {
      pcVar11 = (char *)(uint)(byte)pcVar11[1];
    }
    *(uint *)(param_1 + 0x129) = uVar10 + 0x18;
    bVar4 = cVar1 << uVar9;
    pcVar7 = (char *)(iVar6 + ((int)(uVar10 + 0x18) >> 3));
    cVar1 = *pcVar7;
    if (uVar9 != 0) {
      bVar4 = bVar4 | (byte)((uint)pcVar11 >> (uVar12 & 0xff));
    }
    if (uVar9 != 0) {
      pcVar7 = (char *)(uint)(byte)pcVar7[1];
    }
    bVar5 = cVar1 << uVar9;
    *(uint *)(param_1 + 0x129) = uVar10 + 0x20;
    if (uVar9 != 0) {
      bVar5 = bVar5 | (byte)((uint)pcVar7 >> (uVar12 & 0xff));
    }
    uStack_1c = CONCAT13(bVar5,CONCAT12(bVar4,CONCAT11(bVar3,bVar2)));
    uVar8 = FUN_71ba1638(uStack_1c);
  }
  return uVar8;
}


// =========================================================================
// Function: FWKenuYWxmnxvKFAVbWDrZsylcpMHZ
// Entry: 0x717ce004 | Size: 464 bytes
// =========================================================================

uint FWKenuYWxmnxvKFAVbWDrZsylcpMHZ(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte bStack_20;
  
  uVar4 = *(uint *)(param_1 + 0x129);
  uVar2 = 0;
  if ((int)(uVar4 + 0x40) <= *(int *)(param_1 + 0x12)) {
    uVar2 = uVar4 & 7;
    uVar6 = 8 - uVar2;
    iVar3 = *(int *)(param_1 + 3);
    pcVar5 = (char *)(iVar3 + ((int)uVar4 >> 3));
    cVar1 = *pcVar5;
    if (uVar2 != 0) {
      pcVar5 = (char *)(uint)(byte)pcVar5[1];
    }
    bStack_20 = cVar1 << uVar2;
    if (uVar2 != 0) {
      bStack_20 = bStack_20 | (byte)((uint)pcVar5 >> (uVar6 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar4 + 8;
    pcVar5 = (char *)(iVar3 + ((int)(uVar4 + 8) >> 3));
    cVar1 = *pcVar5;
    if (uVar2 != 0) {
      pcVar5 = (char *)(uint)(byte)pcVar5[1];
    }
    bStack_21 = cVar1 << uVar2;
    if (uVar2 != 0) {
      bStack_21 = bStack_21 | (byte)((uint)pcVar5 >> (uVar6 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar4 + 0x10;
    pcVar5 = (char *)(iVar3 + ((int)(uVar4 + 0x10) >> 3));
    cVar1 = *pcVar5;
    if (uVar2 != 0) {
      pcVar5 = (char *)(uint)(byte)pcVar5[1];
    }
    bStack_22 = cVar1 << uVar2;
    if (uVar2 != 0) {
      bStack_22 = bStack_22 | (byte)((uint)pcVar5 >> (uVar6 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar4 + 0x18;
    pcVar5 = (char *)(iVar3 + ((int)(uVar4 + 0x18) >> 3));
    cVar1 = *pcVar5;
    if (uVar2 != 0) {
      pcVar5 = (char *)(uint)(byte)pcVar5[1];
    }
    bStack_23 = cVar1 << uVar2;
    if (uVar2 != 0) {
      bStack_23 = bStack_23 | (byte)((uint)pcVar5 >> (uVar6 & 0xff));
    }
    *(uint *)(param_1 + 0x129) = uVar4 + 0x20;
    *(uint *)(param_1 + 0x129) = uVar4 + 0x28;
    *(uint *)(param_1 + 0x129) = uVar4 + 0x30;
    *(uint *)(param_1 + 0x129) = uVar4 + 0x38;
    *(uint *)(param_1 + 0x129) = uVar4 + 0x40;
    uVar2 = (uint)bStack_23 << 0x18 | (uint)bStack_22 << 0x10 | (uint)bStack_21 << 8 |
            (uint)bStack_20;
  }
  return uVar2;
}


// =========================================================================
// Function: tylyFldNKlHEKfPalNZjEIAlzZXyBwKW
// Entry: 0x717ce1ec | Size: 584 bytes
// =========================================================================

int tylyFldNKlHEKfPalNZjEIAlzZXyBwKW(int param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  pbVar4 = (byte *)thunk__IBDl(param_2);
  uVar10 = *(uint *)(param_1 + 0x129);
  uVar9 = param_2 * 8;
  uVar11 = uVar10 & 7;
  if (uVar11 == 0) {
    if ((int)(uVar10 + uVar9) <= *(int *)(param_1 + 0x12)) {
      imp___aeabi_memcpy(pbVar4,*(int *)(param_1 + 3) + ((int)uVar10 >> 3),param_2);
      *(uint *)(param_1 + 0x129) = uVar10 + uVar9;
    }
LAB_717ce2b4:
    if (0xfffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_3c);
    }
  }
  else {
    if ((int)param_2 < 1) goto LAB_717ce2b4;
    if ((int)(uVar10 + uVar9) <= *(int *)(param_1 + 0x12)) {
      imp___aeabi_memclr(pbVar4,param_2 & 0x1fffffff);
      iVar5 = *(int *)(param_1 + 3);
      uVar3 = 8 - uVar11;
      pbVar6 = pbVar4;
      do {
        pcVar7 = (char *)(iVar5 + ((int)uVar10 >> 3));
        uVar10 = uVar10 + 8;
        bVar2 = *pbVar6 | *pcVar7 << uVar11;
        *pbVar6 = bVar2;
        if (uVar3 < uVar9) {
          pcVar7 = (char *)(uint)(byte)pcVar7[1];
        }
        *(uint *)(param_1 + 0x129) = uVar10;
        if (uVar3 < uVar9) {
          *pbVar6 = bVar2 | (byte)((uint)pcVar7 >> (uVar3 & 0xff));
        }
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar9 - 8;
        bVar1 = 7 < (int)uVar9;
        uVar9 = uVar8;
      } while (uVar8 != 0 && bVar1);
      goto LAB_717ce2b4;
    }
  }
  if (param_2 < 0xb) {
    uVar9 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(param_2 << 1));
    if (param_2 == 0) goto LAB_717ce318;
  }
  else {
    uVar9 = thunk_MwhHq((param_2 | 7) + 1);
    uStack_3c = (param_2 | 7) + 2;
    uStack_38 = param_2;
    uStack_34 = uVar9;
  }
  imp___aeabi_memcpy(uVar9,pbVar4,param_2);
LAB_717ce318:
  *(undefined1 *)(uVar9 + param_2) = 0;
  FUN_71800cf0(abStack_30,&uStack_3c);
  if ((uStack_3c & 1) != 0) {
    qNQrlu(uStack_34);
  }
  dGrRHE(pbVar4);
  uVar9 = uStack_2c;
  if ((abStack_30[0] & 1) == 0) {
    uVar9 = (uint)(abStack_30[0] >> 1);
  }
  iVar5 = imp_malloc(uVar9 + 1);
  uVar10 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar10 = (uint)abStack_30 | 1;
  }
  imp___aeabi_memcpy(iVar5,uVar10,uVar9);
  *(undefined1 *)(iVar5 + uVar9) = 0;
  if ((abStack_30[0] & 1) != 0) {
    qNQrlu(uStack_28);
  }
  return iVar5;
}


// =========================================================================
// Function: EfGaHXiGqBziqbeQIvfPSegEnpCrRrp
// Entry: 0x717ce510 | Size: 488 bytes
// =========================================================================

void EfGaHXiGqBziqbeQIvfPSegEnpCrRrp(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = *(uint *)(param_1 + 0x12);
  uVar6 = uVar4 + 1;
  if (param_2 == 0) {
    if ((-1 < (int)uVar4) &&
       (iVar8 = *(int *)(param_1 + 0x139), iVar8 + -1 >> 3 < (int)(uVar4 >> 3))) {
      iVar7 = *(int *)(param_1 + 3);
      iVar2 = uVar6 * 2;
      uVar4 = uVar6 * 2;
      if (iVar7 == param_1 + 0x27) {
        bVar1 = 0x400 < uVar6;
        uVar6 = uVar4;
        if (bVar1) {
          uVar3 = imp_malloc(iVar2 + 7U >> 3);
          *(undefined4 *)(param_1 + 3) = uVar3;
          imp___aeabi_memcpy(uVar3,iVar7,iVar8 + 7 >> 3);
        }
      }
      else {
        uVar3 = imp_realloc(iVar7);
        *(undefined4 *)(param_1 + 3) = uVar3;
        uVar6 = uVar4;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x12);
    if (*(int *)(param_1 + 0x139) < (int)uVar6) {
      *(uint *)(param_1 + 0x139) = uVar6;
    }
    if ((uVar4 & 7) != 0) goto LAB_717ce644;
    iVar8 = *(int *)(param_1 + 3);
    uVar5 = 0;
LAB_717ce63c:
    *(undefined1 *)(iVar8 + ((int)uVar4 >> 3)) = uVar5;
  }
  else {
    if ((-1 < (int)uVar4) &&
       (iVar8 = *(int *)(param_1 + 0x139), iVar8 + -1 >> 3 < (int)(uVar4 >> 3))) {
      iVar2 = uVar6 * 2;
      uVar4 = uVar6 * 2;
      if (*(int *)(param_1 + 3) == param_1 + 0x27) {
        bVar1 = 0x400 < uVar6;
        uVar6 = uVar4;
        if (bVar1) {
          uVar3 = imp_malloc(iVar2 + 7U >> 3);
          *(undefined4 *)(param_1 + 3) = uVar3;
          imp___aeabi_memcpy(uVar3,param_1 + 0x27,iVar8 + 7 >> 3);
        }
      }
      else {
        uVar3 = imp_realloc(*(int *)(param_1 + 3));
        *(undefined4 *)(param_1 + 3) = uVar3;
        uVar6 = uVar4;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x12);
    if (*(int *)(param_1 + 0x139) < (int)uVar6) {
      *(uint *)(param_1 + 0x139) = uVar6;
    }
    if ((uVar4 & 7) == 0) {
      iVar8 = *(int *)(param_1 + 3);
      uVar5 = 0x80;
      goto LAB_717ce63c;
    }
    *(byte *)(*(int *)(param_1 + 3) + ((int)uVar4 >> 3)) =
         *(byte *)(*(int *)(param_1 + 3) + ((int)uVar4 >> 3)) | (byte)(0x80 >> (uVar4 & 7));
  }
  uVar4 = *(uint *)(param_1 + 0x12);
LAB_717ce644:
  *(uint *)(param_1 + 0x12) = uVar4 + 1;
  return;
}


// =========================================================================
// Function: wVFtZxXCvxuqceBRToeRYIyHetdZFhq
// Entry: 0x717ce770 | Size: 312 bytes
// =========================================================================

void wVFtZxXCvxuqceBRToeRYIyHetdZFhq(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x12);
  uVar6 = iVar5 + 8;
  if ((-8 < iVar5) && (iVar7 = *(int *)(param_1 + 0x139), iVar7 + -1 >> 3 < (int)(iVar5 + 7U >> 3)))
  {
    iVar5 = *(int *)(param_1 + 3);
    uVar2 = uVar6 * 2;
    uVar3 = uVar6 * 2 + 7 >> 3;
    if (iVar5 == param_1 + 0x27) {
      bVar1 = 0x400 < uVar6;
      uVar6 = uVar2;
      if (bVar1) {
        uVar4 = imp_malloc(uVar3);
        *(undefined4 *)(param_1 + 3) = uVar4;
        imp___aeabi_memcpy(uVar4,iVar5,iVar7 + 7 >> 3);
      }
    }
    else {
      uVar4 = imp_realloc(iVar5,uVar3);
      *(undefined4 *)(param_1 + 3) = uVar4;
      uVar6 = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x139) < (int)uVar6) {
    *(uint *)(param_1 + 0x139) = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar6 == 0) {
    *(char *)(*(int *)(param_1 + 3) + iVar5) = (char)param_2;
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((param_2 & 0xff) >> uVar6);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)(param_2 << (8 - uVar6 & 0xff));
  }
  *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 8;
  return;
}


// =========================================================================
// Function: EXPVKzoBKjSnkhVSVnREtbATahEZQjbH
// Entry: 0x717ce8f0 | Size: 388 bytes
// =========================================================================

void EXPVKzoBKjSnkhVSVnREtbATahEZQjbH(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x12);
  uVar6 = iVar5 + 0x10;
  if ((-0x10 < iVar5) &&
     (iVar7 = *(int *)(param_1 + 0x139), iVar7 + -1 >> 3 < (int)(iVar5 + 0xfU >> 3))) {
    iVar5 = *(int *)(param_1 + 3);
    uVar2 = uVar6 * 2;
    uVar3 = uVar6 * 2 + 7 >> 3;
    if (iVar5 == param_1 + 0x27) {
      bVar1 = 0x400 < uVar6;
      uVar6 = uVar2;
      if (bVar1) {
        uVar4 = imp_malloc(uVar3);
        *(undefined4 *)(param_1 + 3) = uVar4;
        imp___aeabi_memcpy(uVar4,iVar5,iVar7 + 7 >> 3);
      }
    }
    else {
      uVar4 = imp_realloc(iVar5,uVar3);
      *(undefined4 *)(param_1 + 3) = uVar4;
      uVar6 = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x139) < (int)uVar6) {
    *(uint *)(param_1 + 0x139) = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0x12) & 7;
  iVar5 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar6 == 0) {
    *(char *)(*(int *)(param_1 + 3) + iVar5) = (char)param_2;
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    *(char *)(*(int *)(param_1 + 3) + (iVar5 >> 3)) = (char)(param_2 >> 8);
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((param_2 & 0xff) >> uVar6);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)(param_2 << (8 - uVar6 & 0xff));
    iVar5 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar5;
    iVar5 = iVar5 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar5) =
         *(byte *)(*(int *)(param_1 + 3) + iVar5) | (byte)((param_2 >> 8 & 0xff) >> uVar6);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((param_2 >> 8) << (8 - uVar6 & 0xff));
  }
  *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 8;
  return;
}


// =========================================================================
// Function: w_LmTppKiGLZhnpnDCOHIOwRjfDylO
// Entry: 0x717ceabc | Size: 536 bytes
// =========================================================================

void w_LmTppKiGLZhnpnDCOHIOwRjfDylO(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x12);
  uVar5 = iVar4 + 0x20;
  if ((-0x20 < iVar4) &&
     (iVar7 = *(int *)(param_1 + 0x139), iVar7 + -1 >> 3 < (int)(iVar4 + 0x1fU >> 3))) {
    iVar4 = *(int *)(param_1 + 3);
    uVar6 = uVar5 * 2;
    uVar2 = uVar5 * 2 + 7 >> 3;
    if (iVar4 == param_1 + 0x27) {
      bVar1 = 0x400 < uVar5;
      uVar5 = uVar6;
      if (bVar1) {
        uVar3 = imp_malloc(uVar2);
        *(undefined4 *)(param_1 + 3) = uVar3;
        imp___aeabi_memcpy(uVar3,iVar4,iVar7 + 7 >> 3);
      }
    }
    else {
      uVar3 = imp_realloc(iVar4,uVar2);
      *(undefined4 *)(param_1 + 3) = uVar3;
      uVar5 = uVar6;
    }
  }
  if (*(int *)(param_1 + 0x139) < (int)uVar5) {
    *(uint *)(param_1 + 0x139) = uVar5;
  }
  uVar5 = *(uint *)(param_1 + 0x12) & 7;
  iVar4 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar5 == 0) {
    *(char *)(*(int *)(param_1 + 3) + iVar4) = (char)param_2;
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    *(char *)(*(int *)(param_1 + 3) + (iVar4 >> 3)) = (char)(param_2 >> 8);
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    *(char *)(*(int *)(param_1 + 3) + (iVar4 >> 3)) = (char)(param_2 >> 0x10);
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    *(char *)(*(int *)(param_1 + 3) + (iVar4 >> 3)) = (char)(param_2 >> 0x18);
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)((param_2 & 0xff) >> uVar5);
    uVar6 = 8 - uVar5;
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)(param_2 << (uVar6 & 0xff));
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    iVar4 = iVar4 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)((param_2 >> 8 & 0xff) >> uVar5);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((param_2 >> 8) << (uVar6 & 0xff));
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    iVar4 = iVar4 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)((param_2 >> 0x10 & 0xff) >> uVar5);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((param_2 >> 0x10) << (uVar6 & 0xff));
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    iVar4 = iVar4 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)((param_2 >> 0x18) >> uVar5);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((param_2 >> 0x18) << (uVar6 & 0xff));
  }
  *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 8;
  return;
}


// =========================================================================
// Function: eTskBpExqRVPQhYKaExhacLSDUllYALC
// Entry: 0x717ced1c | Size: 556 bytes
// =========================================================================

void eTskBpExqRVPQhYKaExhacLSDUllYALC
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = FUN_71ba242c(param_3,param_4);
  iVar4 = *(int *)(param_1 + 0x12);
  uVar5 = iVar4 + 0x20;
  if ((-0x20 < iVar4) &&
     (iVar8 = *(int *)(param_1 + 0x139), iVar8 + -1 >> 3 < (int)(iVar4 + 0x1fU >> 3))) {
    iVar7 = *(int *)(param_1 + 3);
    iVar4 = uVar5 * 2;
    uVar6 = uVar5 * 2;
    if (iVar7 == param_1 + 0x27) {
      bVar1 = 0x400 < uVar5;
      uVar5 = uVar6;
      if (bVar1) {
        uVar3 = imp_malloc(iVar4 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar3;
        imp___aeabi_memcpy(uVar3,iVar7,iVar8 + 7 >> 3);
      }
    }
    else {
      uVar3 = imp_realloc(iVar7);
      *(undefined4 *)(param_1 + 3) = uVar3;
      uVar5 = uVar6;
    }
  }
  if (*(int *)(param_1 + 0x139) < (int)uVar5) {
    *(uint *)(param_1 + 0x139) = uVar5;
  }
  uVar5 = *(uint *)(param_1 + 0x12) & 7;
  iVar4 = (int)*(uint *)(param_1 + 0x12) >> 3;
  if (uVar5 == 0) {
    *(char *)(*(int *)(param_1 + 3) + iVar4) = (char)uVar2;
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    *(char *)(*(int *)(param_1 + 3) + (iVar4 >> 3)) = (char)(uVar2 >> 8);
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    *(char *)(*(int *)(param_1 + 3) + (iVar4 >> 3)) = (char)(uVar2 >> 0x10);
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    *(char *)(*(int *)(param_1 + 3) + (iVar4 >> 3)) = (char)(uVar2 >> 0x18);
  }
  else {
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)((uVar2 & 0xff) >> uVar5);
    uVar6 = 8 - uVar5;
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)(uVar2 << (uVar6 & 0xff));
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    iVar4 = iVar4 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)(((uVar2 & 0xffff) >> 8) >> uVar5);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar2 >> 8) << (uVar6 & 0xff));
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    iVar4 = iVar4 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)(((uVar2 & 0xffffff) >> 0x10) >> uVar5);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar2 >> 0x10) << (uVar6 & 0xff));
    iVar4 = *(int *)(param_1 + 0x12) + 8;
    *(int *)(param_1 + 0x12) = iVar4;
    iVar4 = iVar4 >> 3;
    *(byte *)(*(int *)(param_1 + 3) + iVar4) =
         *(byte *)(*(int *)(param_1 + 3) + iVar4) | (byte)((uVar2 >> 0x18) >> uVar5);
    *(char *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
         (char)((uVar2 >> 0x18) << (uVar6 & 0xff));
  }
  *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + 8;
  return;
}


// =========================================================================
// Function: WFaswoFIGjmwKnvoFdwHjnkEsvdxhUD
// Entry: 0x717cefa0 | Size: 344 bytes
// =========================================================================

void WFaswoFIGjmwKnvoFdwHjnkEsvdxhUD(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iStack_20;
  int iStack_1c;
  
  iStack_20 = param_2;
  iStack_1c = param_2 >> 0x1f;
  iVar4 = *(int *)(param_1 + 0x12);
  uVar6 = iVar4 + 0x40;
  if ((-0x40 < iVar4) &&
     (iVar11 = *(int *)(param_1 + 0x139), iVar11 + -1 >> 3 < (int)(iVar4 + 0x3fU >> 3))) {
    iVar8 = *(int *)(param_1 + 3);
    iVar4 = uVar6 * 2;
    uVar5 = uVar6 * 2;
    if (iVar8 == param_1 + 0x27) {
      bVar1 = 0x400 < uVar6;
      uVar6 = uVar5;
      if (bVar1) {
        uVar3 = imp_malloc(iVar4 + 7U >> 3);
        *(undefined4 *)(param_1 + 3) = uVar3;
        imp___aeabi_memcpy(uVar3,iVar8,iVar11 + 7 >> 3);
      }
    }
    else {
      uVar3 = imp_realloc(iVar8);
      *(undefined4 *)(param_1 + 3) = uVar3;
      uVar6 = uVar5;
    }
  }
  uVar7 = 0x40;
  uVar9 = *(uint *)(param_1 + 0x12);
  uVar5 = uVar9 & 7;
  if (*(int *)(param_1 + 0x139) < (int)uVar6) {
    *(uint *)(param_1 + 0x139) = uVar6;
  }
  pbVar10 = (byte *)&iStack_20;
  do {
    bVar2 = *pbVar10;
    iVar4 = (int)uVar9 >> 3;
    if (uVar5 == 0) {
      *(byte *)(*(int *)(param_1 + 3) + iVar4) = bVar2;
    }
    else {
      *(byte *)(*(int *)(param_1 + 3) + iVar4) =
           *(byte *)(*(int *)(param_1 + 3) + iVar4) | bVar2 >> uVar5;
      if (8 - uVar5 < uVar7) {
        *(byte *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
             bVar2 << (8 - uVar5 & 0xff);
      }
    }
    uVar7 = uVar7 - 8;
    uVar9 = *(int *)(param_1 + 0x12) + 8;
    *(uint *)(param_1 + 0x12) = uVar9;
    pbVar10 = pbVar10 + 1;
  } while (uVar7 != 0);
  return;
}


// =========================================================================
// Function: PsUvSHDBxmGQguhtpSPIxCJQxlhmEoqlE
// Entry: 0x717cf140 | Size: 840 bytes
// =========================================================================

void PsUvSHDBxmGQguhtpSPIxCJQxlhmEoqlE(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  byte abStack_30 [8];
  byte *pbStack_28;
  
  uVar6 = imp_strlen(param_2);
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar6 < 0xb) {
    uVar9 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar6 << 1));
    if (uVar6 == 0) goto LAB_717cf1c0;
  }
  else {
    uVar9 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_3c = (uVar6 | 7) + 2;
    uStack_38 = uVar6;
    uStack_34 = uVar9;
  }
  imp___aeabi_memcpy(uVar9,param_2,uVar6);
LAB_717cf1c0:
  *(undefined1 *)(uVar9 + uVar6) = 0;
  FUN_71800d24(abStack_30,&uStack_3c);
  if ((uStack_3c & 1) != 0) {
    qNQrlu(uStack_34);
  }
  pbVar11 = pbStack_28;
  if ((abStack_30[0] & 1) == 0) {
    pbVar11 = (byte *)((uint)abStack_30 | 1);
  }
  if (param_3 != 0) {
    uVar9 = *(uint *)(param_1 + 0x12);
    uVar6 = param_3 * 8;
    if ((uVar9 & 7) == 0) {
      if (0 < (int)uVar6) {
        uVar9 = uVar9 + uVar6;
        if ((0 < (int)uVar9) &&
           (iVar10 = *(int *)(param_1 + 0x139), iVar10 + -1 >> 3 < (int)(uVar9 - 1 >> 3))) {
          uVar8 = uVar9 >> 2;
          uVar5 = uVar9 * 2;
          if (*(int *)(param_1 + 3) == param_1 + 0x27) {
            bVar1 = 0x400 < uVar9;
            uVar9 = uVar5;
            if (bVar1) {
              uVar7 = imp_malloc(uVar8);
              *(undefined4 *)(param_1 + 3) = uVar7;
              imp___aeabi_memcpy(uVar7,param_1 + 0x27,iVar10 + 7 >> 3);
            }
          }
          else {
            uVar7 = imp_realloc();
            *(undefined4 *)(param_1 + 3) = uVar7;
            uVar9 = uVar5;
          }
        }
        if (*(int *)(param_1 + 0x139) < (int)uVar9) {
          *(uint *)(param_1 + 0x139) = uVar9;
        }
      }
      imp___aeabi_memcpy(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) + 7 >> 3),pbVar11,param_3
                        );
      *(uint *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + uVar6;
    }
    else if (0 < param_3) {
      uVar9 = uVar9 + uVar6;
      if ((0 < (int)uVar9) &&
         (iVar10 = *(int *)(param_1 + 0x139), iVar10 + -1 >> 3 < (int)(uVar9 - 1 >> 3))) {
        iVar2 = uVar9 * 2;
        uVar5 = uVar9 * 2;
        iVar4 = *(int *)(param_1 + 3);
        if (iVar4 == param_1 + 0x27) {
          bVar1 = 0x400 < uVar9;
          uVar9 = uVar5;
          if (bVar1) {
            uVar7 = imp_malloc(iVar2 + 7U >> 3);
            *(undefined4 *)(param_1 + 3) = uVar7;
            imp___aeabi_memcpy(uVar7,iVar4,iVar10 + 7 >> 3);
          }
        }
        else {
          uVar7 = imp_realloc();
          *(undefined4 *)(param_1 + 3) = uVar7;
          uVar9 = uVar5;
        }
      }
      uVar8 = *(uint *)(param_1 + 0x12);
      uVar5 = uVar8 & 7;
      if (*(int *)(param_1 + 0x139) < (int)uVar9) {
        *(uint *)(param_1 + 0x139) = uVar9;
      }
      do {
        bVar3 = *pbVar11;
        iVar10 = (int)uVar8 >> 3;
        if (uVar5 == 0) {
          *(byte *)(*(int *)(param_1 + 3) + iVar10) = bVar3;
        }
        else {
          *(byte *)(*(int *)(param_1 + 3) + iVar10) =
               *(byte *)(*(int *)(param_1 + 3) + iVar10) | bVar3 >> uVar5;
          if (8 - uVar5 < uVar6) {
            *(byte *)(*(int *)(param_1 + 3) + (*(int *)(param_1 + 0x12) >> 3) + 1) =
                 bVar3 << (8 - uVar5 & 0xff);
          }
        }
        uVar9 = uVar6 - 8;
        uVar8 = *(int *)(param_1 + 0x12) + 8;
        *(uint *)(param_1 + 0x12) = uVar8;
        bVar1 = 7 < (int)uVar6;
        uVar6 = uVar9;
        pbVar11 = pbVar11 + 1;
      } while (uVar9 != 0 && bVar1);
    }
  }
  if ((abStack_30[0] & 1) != 0) {
    qNQrlu(pbStack_28);
  }
  return;
}


// =========================================================================
// Function: wbNZJajvfqWFWRkiloPXYBzg
// Entry: 0x717cf584 | Size: 4 bytes
// =========================================================================

void wbNZJajvfqWFWRkiloPXYBzg(void)

{
  return;
}


// =========================================================================
// Function: imp_free
// Entry: 0x717cf5a0 | Size: 4 bytes
// =========================================================================

void imp_free(void)

{
  return;
}


// =========================================================================
// Function: ZGUyiTKIHTkTKTRMscCvQNQctIe_
// Entry: 0x717cf5bc | Size: 4 bytes
// =========================================================================

void ZGUyiTKIHTkTKTRMscCvQNQctIe_(void)

{
  return;
}


// =========================================================================
// Function: imp_malloc
// Entry: 0x717cf5d8 | Size: 4 bytes
// =========================================================================

void imp_malloc(void)

{
  return;
}


// =========================================================================
// Function: PtH_cWRGYCltleJQKoGyDUzUcb
// Entry: 0x717cf5f4 | Size: 3740 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PtH_cWRGYCltleJQKoGyDUzUcb(int param_1,byte *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  uint uStack_7c;
  uint auStack_68 [4];
  uint uStack_58;
  uint uStack_54;
  byte *pbStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte *pbStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int *piStack_30;
  uint uStack_28;
  
  uStack_28 = _ext___stack_chk_guard;
  uVar21 = _ext___stack_chk_guard;
  if (param_2 != (byte *)0x0) {
    uVar21 = (uint)*param_2;
  }
  if (param_2 == (byte *)0x0 || uVar21 == 0) goto LAB_717cf628;
  uVar21 = imp_strlen(param_2);
  if (0xfffffff7 < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_4c);
  }
  if (uVar21 < 0xb) {
    pbVar19 = (byte *)((uint)&uStack_4c | 1);
    uStack_4c = CONCAT31(uStack_4c._1_3_,(char)(uVar21 << 1));
    if (uVar21 != 0) goto LAB_717cf6bc;
  }
  else {
    pbVar19 = (byte *)thunk_MwhHq((uVar21 | 7) + 1);
    uStack_4c = (uVar21 | 7) + 2;
    uStack_48 = uVar21;
    pbStack_44 = pbVar19;
LAB_717cf6bc:
    imp___aeabi_memcpy(pbVar19,param_2,uVar21);
  }
  uVar17 = 0;
  pbVar19[uVar21] = 0;
  uVar21 = ~(uStack_4c & 0xff) & 1;
  pbStack_50 = (byte *)0x0;
  bVar1 = 0x200 < uStack_48;
  uStack_54 = 0;
  uStack_58 = 0;
  auStack_68[2] = 0;
  auStack_68[1] = 0;
  auStack_68[0] = 0;
  if (uVar21 != 0 || !bVar1) goto LAB_717cf70c;
  uVar16 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                     (&uStack_4c,0x2e,0);
  if (uVar16 != 0xffffffff) {
    uVar18 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                       (&uStack_4c,0x2e,uVar16 + 1);
    if (uVar18 != 0xffffffff) {
      iVar5 = jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (&uStack_4c,0x2e,uVar18 + 1);
      if (iVar5 == -1) {
        pbVar19 = (byte *)((uint)&uStack_4c | 1);
        uStack_7c = uStack_48;
        if ((uStack_4c & 1) == 0) {
          uStack_7c = uStack_4c >> 1 & 0x7f;
        }
        pbVar23 = pbStack_44;
        if ((uStack_4c & 1) == 0) {
          pbVar23 = pbVar19;
        }
        if (((((1 < uVar16) && ((uVar16 & 3) != 1)) &&
             (uVar14 = uVar18 + ~uVar16, auStack_68[0] = uVar16, 1 < uVar14)) &&
            (((uVar14 & 3) != 1 &&
             (uStack_7c = uStack_7c + ~uVar18, auStack_68[1] = uVar14, 1 < uStack_7c)))) &&
           ((uStack_7c & 3) != 1)) {
          uVar4 = uStack_7c * 3;
          uVar2 = uVar14 * 3 >> 2;
          auStack_68[2] = uStack_7c;
          if (0xfffffdff < (uVar2 + (uVar16 * 3 >> 2) + (uVar4 >> 2)) - 0x201) {
            if ((uStack_58 & 1) == 0) {
              uStack_58 = uStack_58 & 0xffff0000;
            }
            else {
              *pbStack_50 = 0;
              uStack_54 = 0;
            }
            pbVar8 = pbVar23 + uVar18 + 1;
            unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb(&uStack_58)
            ;
            uVar22 = 0;
            uVar25 = 0;
            do {
              uVar9 = (uint)pbVar23[uVar17];
              uVar12 = uVar9 - 0x41;
              if (uVar12 < 0x1a) {
LAB_717cfdc0:
                uVar15 = uVar12;
                if ((int)uVar12 < 0) goto LAB_717cfcdc;
              }
              else {
                if (uVar9 - 0x61 < 0x1a) {
                  uVar12 = uVar9 - 0x47;
                  goto LAB_717cfdc0;
                }
                if (uVar9 - 0x30 < 10) {
                  uVar15 = uVar9 + 4;
                }
                else {
                  uVar12 = 0xffffffff;
                  if (uVar9 == 0x5f) {
                    uVar12 = 0x3f;
                  }
                  uVar15 = 0x3e;
                  if (uVar9 != 0x2d) goto LAB_717cfdc0;
                }
              }
              uVar25 = uVar15 | uVar25 << 6;
              if ((int)uVar22 < 2) {
                uVar22 = uVar22 + 6;
              }
              else {
                uVar22 = uVar22 - 2;
                tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_58,uVar25 >> (uVar22 & 0xff) & 0xff);
              }
              uVar17 = uVar17 + 1;
            } while (uVar16 != uVar17);
            uVar18 = uVar18 - 1;
            uVar17 = 0;
            uVar22 = 0;
            do {
              pbVar23 = pbVar23 + 1;
              uVar25 = (uint)pbVar23[uVar16];
              uVar9 = uVar25 - 0x41;
              if (uVar9 < 0x1a) {
LAB_717cfe7c:
                uVar12 = uVar9;
                if ((int)uVar9 < 0) goto LAB_717cfcdc;
              }
              else {
                if (uVar25 - 0x61 < 0x1a) {
                  uVar9 = uVar25 - 0x47;
                  goto LAB_717cfe7c;
                }
                if (uVar25 - 0x30 < 10) {
                  uVar12 = uVar25 + 4;
                }
                else {
                  uVar9 = 0xffffffff;
                  if (uVar25 == 0x5f) {
                    uVar9 = 0x3f;
                  }
                  uVar12 = 0x3e;
                  if (uVar25 != 0x2d) goto LAB_717cfe7c;
                }
              }
              uVar22 = uVar12 | uVar22 << 6;
              if ((int)uVar17 < 2) {
                uVar17 = uVar17 + 6;
              }
              else {
                uVar17 = uVar17 - 2;
                tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_58,uVar22 >> (uVar17 & 0xff) & 0xff);
              }
              uVar18 = uVar18 - 1;
            } while (uVar16 != uVar18);
            uVar18 = 0;
            uVar22 = 0;
            uVar17 = uStack_7c;
LAB_717cff04:
            do {
              uVar25 = (uint)*pbVar8;
              uVar9 = uVar25 - 0x41;
              if (uVar9 < 0x1a) {
LAB_717cff24:
                uVar12 = uVar9;
                if ((int)uVar9 < 0) goto LAB_717cfcdc;
              }
              else {
                if (uVar25 - 0x61 < 0x1a) {
                  uVar9 = uVar25 - 0x47;
                  goto LAB_717cff24;
                }
                if (uVar25 - 0x30 < 10) {
                  uVar12 = uVar25 + 4;
                }
                else {
                  uVar9 = 0xffffffff;
                  if (uVar25 == 0x5f) {
                    uVar9 = 0x3f;
                  }
                  uVar12 = 0x3e;
                  if (uVar25 != 0x2d) goto LAB_717cff24;
                }
              }
              uVar22 = uVar12 | uVar22 << 6;
              if (1 < (int)uVar18) {
                uVar18 = uVar18 - 2;
                tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_58,uVar22 >> (uVar18 & 0xff) & 0xff);
                uVar17 = uVar17 - 1;
                pbVar8 = pbVar8 + 1;
                if (uVar17 == 0) break;
                goto LAB_717cff04;
              }
              uVar18 = uVar18 + 6;
              uVar17 = uVar17 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar17 != 0);
            uVar18 = 0;
            uStack_38 = 0;
            uVar17 = uStack_48;
            if ((uStack_4c & 1) == 0) {
              uVar17 = uStack_4c >> 1 & 0x7f;
            }
            uStack_3c = 0;
            uStack_40 = 0;
            unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
                      (&uStack_40,uVar17);
            pbVar23 = (byte *)((uint)&uStack_58 | 1);
            uVar17 = uVar16 * 3 >> 2;
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              pbVar8 = pbStack_50;
              if ((uStack_58 & 1) == 0) {
                pbVar8 = pbVar23;
              }
              uVar22 = (uint)pbVar8[uVar18 >> 3] << 8;
              if ((uVar18 >> 3) + 1 < uVar17) {
                pbVar13 = pbStack_50;
                if ((uStack_58 & 1) == 0) {
                  pbVar13 = pbVar23;
                }
                uVar22 = (uint)CONCAT11(pbVar8[uVar18 >> 3],pbVar13[(uVar18 >> 3) + 1]);
              }
              tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                        (&uStack_40,
                         s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_700709d9
                         [uVar22 >> (10 - (uVar18 & 6) & 0xff) & 0x3f]);
              uVar18 = uVar18 + 6;
            }
            tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (&uStack_40,0x2e);
            if (uVar14 != 0) {
              uVar16 = 0;
              do {
                iVar5 = uVar17 + (uVar16 >> 3);
                pbVar8 = pbStack_50;
                if ((uStack_58 & 1) == 0) {
                  pbVar8 = pbVar23;
                }
                uVar18 = (uint)pbVar8[iVar5] << 8;
                if ((uVar16 >> 3) + 1 < uVar2) {
                  pbVar13 = pbStack_50;
                  if ((uStack_58 & 1) == 0) {
                    pbVar13 = pbVar23;
                  }
                  uVar18 = (uint)CONCAT11(pbVar8[iVar5],pbVar13[iVar5 + 1]);
                }
                tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_40,
                           s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_700709d9
                           [uVar18 >> (10 - (uVar16 & 6) & 0xff) & 0x3f]);
                uVar16 = uVar16 + 6;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                      (&uStack_40,0x2e);
            if (uStack_7c != 0) {
              uVar16 = 0;
              do {
                iVar5 = uVar2 + uVar17 + (uVar16 >> 3);
                pbVar8 = pbStack_50;
                if ((uStack_58 & 1) == 0) {
                  pbVar8 = pbVar23;
                }
                uVar18 = (uint)pbVar8[iVar5] << 8;
                if ((uVar16 >> 3) + 1 < uVar4 >> 2) {
                  pbVar13 = pbStack_50;
                  if ((uStack_58 & 1) == 0) {
                    pbVar13 = pbVar23;
                  }
                  uVar18 = (uint)CONCAT11(pbVar8[iVar5],pbVar13[iVar5 + 1]);
                }
                tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_40,
                           s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_700709d9
                           [uVar18 >> (10 - (uVar16 & 6) & 0xff) & 0x3f]);
                uVar16 = uVar16 + 6;
                uStack_7c = uStack_7c - 1;
              } while (uStack_7c != 0);
            }
            uVar11 = uStack_38;
            uVar17 = uStack_48;
            if ((uStack_4c & 1) == 0) {
              uVar17 = uStack_4c >> 1 & 0x7f;
            }
            uVar16 = uStack_3c;
            if ((uStack_40 & 1) == 0) {
              uVar16 = (uint)((byte)uStack_40 >> 1);
            }
            if (uVar16 == uVar17) {
              pbVar23 = pbStack_44;
              if ((uStack_4c & 1) == 0) {
                pbVar23 = pbVar19;
              }
              if ((uStack_40 & 1) == 0) {
                if (1 < (byte)uStack_40) {
                  uVar17 = 0;
                  do {
                    if (*(byte *)((int)&uStack_40 + uVar17 + 1) != pbVar23[uVar17])
                    goto LAB_717d0210;
                    uVar17 = uVar17 + 1;
                  } while ((byte)uStack_40 >> 1 != uVar17);
                }
              }
              else {
                iVar5 = imp_memcmp(uStack_38);
                qNQrlu(uVar11);
                if (iVar5 != 0) goto LAB_717cfcdc;
              }
LAB_717cf70c:
              iVar10 = thunk_MwhHq(0x13d);
              iVar24 = 0;
              *(undefined4 *)(iVar10 + 0x139) = 0x800;
              iVar5 = iVar10 + 0x27;
              *(undefined4 *)(iVar10 + 0x129) = 0;
              *(undefined1 *)(iVar10 + 0x12d) = 1;
              *(int *)(iVar10 + 3) = iVar5;
              if (uVar21 == 0 && bVar1) {
                iVar6 = 0x20;
                *(undefined4 *)(iVar10 + 0x12) = 0x20;
                *(undefined4 *)(iVar10 + 0x27) = 0x4a575431;
                do {
                  uVar17 = auStack_68[-iVar24];
                  uVar21 = iVar6 + 0x20;
                  iVar20 = *(int *)(iVar10 + 0x139);
                  if ((-0x20 < iVar6) && (iVar20 + -1 >> 3 < (int)(iVar6 + 0x1fU >> 3))) {
                    iVar6 = uVar21 * 2;
                    uVar16 = uVar21 * 2;
                    if (*(int *)(iVar10 + 3) == iVar5) {
                      bVar1 = 0x400 < uVar21;
                      uVar21 = uVar16;
                      if (bVar1) {
                        uVar11 = imp_malloc(iVar6 + 7U >> 3);
                        *(undefined4 *)(iVar10 + 3) = uVar11;
                        imp___aeabi_memcpy(uVar11,iVar5,iVar20 + 7 >> 3);
                      }
                    }
                    else {
                      uVar11 = imp_realloc();
                      iVar20 = *(int *)(iVar10 + 0x139);
                      *(undefined4 *)(iVar10 + 3) = uVar11;
                      uVar21 = uVar16;
                    }
                  }
                  if (iVar20 < (int)uVar21) {
                    *(uint *)(iVar10 + 0x139) = uVar21;
                  }
                  uVar21 = *(uint *)(iVar10 + 0x12) & 7;
                  iVar6 = (int)*(uint *)(iVar10 + 0x12) >> 3;
                  if (uVar21 == 0) {
                    *(char *)(*(int *)(iVar10 + 3) + iVar6) = (char)uVar17;
                    iVar6 = *(int *)(iVar10 + 0x12) + 8;
                    *(int *)(iVar10 + 0x12) = iVar6;
                    *(char *)(*(int *)(iVar10 + 3) + (iVar6 >> 3)) = (char)(uVar17 >> 8);
                    iVar6 = *(int *)(iVar10 + 0x12) + 8;
                    *(int *)(iVar10 + 0x12) = iVar6;
                    *(char *)(*(int *)(iVar10 + 3) + (iVar6 >> 3)) = (char)(uVar17 >> 0x10);
                    iVar6 = *(int *)(iVar10 + 0x12) + 8;
                    *(int *)(iVar10 + 0x12) = iVar6;
                    *(char *)(*(int *)(iVar10 + 3) + (iVar6 >> 3)) = (char)(uVar17 >> 0x18);
                  }
                  else {
                    *(byte *)(*(int *)(iVar10 + 3) + iVar6) =
                         *(byte *)(*(int *)(iVar10 + 3) + iVar6) | (byte)((uVar17 & 0xff) >> uVar21)
                    ;
                    uVar16 = 8 - uVar21;
                    *(char *)(*(int *)(iVar10 + 3) + (*(int *)(iVar10 + 0x12) >> 3) + 1) =
                         (char)(uVar17 << (uVar16 & 0xff));
                    iVar6 = *(int *)(iVar10 + 0x12) + 8;
                    *(int *)(iVar10 + 0x12) = iVar6;
                    iVar6 = iVar6 >> 3;
                    *(byte *)(*(int *)(iVar10 + 3) + iVar6) =
                         *(byte *)(*(int *)(iVar10 + 3) + iVar6) |
                         (byte)((uVar17 >> 8 & 0xff) >> uVar21);
                    *(char *)(*(int *)(iVar10 + 3) + (*(int *)(iVar10 + 0x12) >> 3) + 1) =
                         (char)((uVar17 >> 8) << (uVar16 & 0xff));
                    iVar6 = *(int *)(iVar10 + 0x12) + 8;
                    *(int *)(iVar10 + 0x12) = iVar6;
                    iVar6 = iVar6 >> 3;
                    *(byte *)(*(int *)(iVar10 + 3) + iVar6) =
                         *(byte *)(*(int *)(iVar10 + 3) + iVar6) |
                         (byte)((uVar17 >> 0x10 & 0xff) >> uVar21);
                    *(char *)(*(int *)(iVar10 + 3) + (*(int *)(iVar10 + 0x12) >> 3) + 1) =
                         (char)((uVar17 >> 0x10) << (uVar16 & 0xff));
                    iVar6 = *(int *)(iVar10 + 0x12) + 8;
                    *(int *)(iVar10 + 0x12) = iVar6;
                    iVar6 = iVar6 >> 3;
                    *(byte *)(*(int *)(iVar10 + 3) + iVar6) =
                         *(byte *)(*(int *)(iVar10 + 3) + iVar6) |
                         (byte)((uVar17 >> 0x18) >> uVar21);
                    *(char *)(*(int *)(iVar10 + 3) + (*(int *)(iVar10 + 0x12) >> 3) + 1) =
                         (char)((uVar17 >> 0x18) << (uVar16 & 0xff));
                  }
                  uVar21 = *(uint *)(iVar10 + 0x12);
                  iVar24 = iVar24 + -1;
                  iVar6 = uVar21 + 8;
                  *(int *)(iVar10 + 0x12) = iVar6;
                } while (iVar24 != -3);
                pbVar19 = pbStack_50;
                uVar17 = uStack_54;
                if ((uStack_58 & 1) == 0) {
                  uVar17 = uStack_58 >> 1 & 0x7f;
                  pbVar19 = (byte *)((uint)&uStack_58 | 1);
                }
                if (uVar17 != 0) {
                  uVar16 = uVar17 * 8;
                  if ((uVar21 & 7) == 0) {
                    if (0 < (int)uVar16) {
                      iVar24 = *(int *)(iVar10 + 0x139);
                      uVar21 = iVar6 + uVar16;
                      if ((0 < (int)uVar21) && (iVar24 + -1 >> 3 < (int)(uVar21 - 1 >> 3))) {
                        uVar14 = uVar21 >> 2;
                        uVar18 = uVar21 * 2;
                        if (*(int *)(iVar10 + 3) == iVar5) {
                          bVar1 = 0x400 < uVar21;
                          uVar21 = uVar18;
                          if (bVar1) {
                            uVar11 = imp_malloc(uVar14);
                            *(undefined4 *)(iVar10 + 3) = uVar11;
                            imp___aeabi_memcpy(uVar11,iVar5,iVar24 + 7 >> 3);
                          }
                        }
                        else {
                          uVar11 = imp_realloc();
                          iVar24 = *(int *)(iVar10 + 0x139);
                          *(undefined4 *)(iVar10 + 3) = uVar11;
                          uVar21 = uVar18;
                        }
                      }
                      if (iVar24 < (int)uVar21) {
                        *(uint *)(iVar10 + 0x139) = uVar21;
                      }
                    }
                    iVar5 = *(int *)(iVar10 + 3) + (*(int *)(iVar10 + 0x12) + 7 >> 3);
                    goto LAB_717cfc48;
                  }
                  if (0 < (int)uVar17) {
                    iVar24 = *(int *)(iVar10 + 0x139);
                    uVar21 = iVar6 + uVar16;
                    if ((0 < (int)uVar21) && (iVar24 + -1 >> 3 < (int)(uVar21 - 1 >> 3))) {
                      iVar6 = uVar21 * 2;
                      uVar17 = uVar21 * 2;
                      if (*(int *)(iVar10 + 3) == iVar5) {
                        bVar1 = 0x400 < uVar21;
                        uVar21 = uVar17;
                        if (bVar1) {
                          uVar11 = imp_malloc(iVar6 + 7U >> 3);
                          *(undefined4 *)(iVar10 + 3) = uVar11;
                          imp___aeabi_memcpy(uVar11,iVar5,iVar24 + 7 >> 3);
                        }
                      }
                      else {
                        uVar11 = imp_realloc();
                        iVar24 = *(int *)(iVar10 + 0x139);
                        *(undefined4 *)(iVar10 + 3) = uVar11;
                        uVar21 = uVar17;
                      }
                    }
                    uVar17 = *(uint *)(iVar10 + 0x12);
                    if (iVar24 < (int)uVar21) {
                      *(uint *)(iVar10 + 0x139) = uVar21;
                    }
                    uVar21 = uVar17 & 7;
                    do {
                      bVar3 = *pbVar19;
                      iVar5 = (int)uVar17 >> 3;
                      if (uVar21 == 0) {
                        *(byte *)(*(int *)(iVar10 + 3) + iVar5) = bVar3;
                      }
                      else {
                        *(byte *)(*(int *)(iVar10 + 3) + iVar5) =
                             *(byte *)(*(int *)(iVar10 + 3) + iVar5) | bVar3 >> uVar21;
                        if (8 - uVar21 < uVar16) {
                          *(byte *)(*(int *)(iVar10 + 3) + (*(int *)(iVar10 + 0x12) >> 3) + 1) =
                               bVar3 << (8 - uVar21 & 0xff);
                        }
                      }
                      uVar18 = uVar16 - 8;
                      uVar17 = *(int *)(iVar10 + 0x12) + 8;
                      *(uint *)(iVar10 + 0x12) = uVar17;
                      bVar1 = 7 < (int)uVar16;
                      uVar16 = uVar18;
                      pbVar19 = pbVar19 + 1;
                    } while (uVar18 != 0 && bVar1);
                  }
                }
              }
              else {
                *(undefined4 *)(iVar10 + 0x27) = 0x4a575432;
                *(undefined4 *)(iVar10 + 0x12) = 0x40;
                uVar17 = uStack_48;
                pbVar19 = pbStack_44;
                if ((uStack_4c & 1) == 0) {
                  pbVar19 = (byte *)((uint)&uStack_4c | 1);
                  uVar17 = uStack_4c >> 1 & 0x7f;
                }
                *(uint *)(iVar10 + 0x2b) = uVar17;
                if (uVar17 != 0) {
                  uVar16 = uVar17 * 8;
                  if (0x7c0 < (int)uVar16) {
                    iVar24 = imp_malloc(uVar16 + 0x40 >> 2);
                    *(int *)(iVar10 + 3) = iVar24;
                    imp___aeabi_memcpy(iVar24,iVar5,0x100);
                    *(uint *)(iVar10 + 0x139) = (uVar16 + 0x40) * 2;
                    iVar5 = iVar24;
                  }
                  iVar5 = iVar5 + 8;
LAB_717cfc48:
                  imp___aeabi_memcpy(iVar5,pbVar19,uVar17);
                  *(uint *)(iVar10 + 0x12) = *(int *)(iVar10 + 0x12) + uVar16;
                }
              }
              uVar11 = DAT_712017fc;
              iVar5 = 0x14;
              piStack_30 = (int *)thunk_MwhHq(0x14);
              *piStack_30 = (int)&DAT_70b0f7a0;
              piStack_30[1] = param_1;
              piStack_30[2] = iVar10;
              piVar7 = &uStack_40;
              piStack_30[3] = param_3;
              piStack_30[4] = param_4;
              FUN_717ccb10(uVar11,piVar7);
              if (piStack_30 == piVar7) {
                iVar5 = 0x10;
              }
              else {
                piVar7 = piStack_30;
                if (piStack_30 == (int *)0x0) goto LAB_717cfcdc;
              }
              (**(code **)(*piVar7 + iVar5))();
            }
            else {
LAB_717d0210:
              if ((uStack_40 & 1) != 0) {
                qNQrlu(uStack_38);
              }
            }
          }
        }
      }
    }
  }
LAB_717cfcdc:
  if ((uStack_58 & 1) != 0) {
    qNQrlu(pbStack_50);
  }
  if ((uStack_4c & 1) != 0) {
    qNQrlu(pbStack_44);
  }
LAB_717cf628:
  if (_ext___stack_chk_guard != uStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(uStack_28);
  }
  return;
}


// =========================================================================
// Function: aEViyaXbaKylcpXzCOUu
// Entry: 0x717d077c | Size: 452 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aEViyaXbaKylcpXzCOUu(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  piVar2 = aiStack_40;
  iStack_28 = _ext___stack_chk_guard;
  iVar3 = thunk_MwhHq(0x13d);
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(int *)(param_2 + 0x12) + 7;
  *(undefined1 *)(iVar3 + 0x12d) = 1;
  uVar5 = uVar4 & 0xfffffff8;
  uVar4 = (int)uVar4 >> 3;
  *(undefined4 *)(iVar3 + 0x129) = 0;
  *(uint *)(iVar3 + 0x139) = uVar5;
  *(uint *)(iVar3 + 0x12) = uVar5;
  if (uVar4 == 0) {
    *(undefined4 *)(iVar3 + 3) = 0;
  }
  else {
    if (uVar4 < 0x100) {
      *(undefined4 *)(iVar3 + 0x139) = 0x800;
      iVar1 = iVar3 + 0x27;
    }
    else {
      iVar1 = imp_malloc(uVar4);
    }
    *(int *)(iVar3 + 3) = iVar1;
    imp___aeabi_memcpy(iVar1,uVar6,uVar4);
  }
  uVar6 = DAT_712017fc;
  iVar1 = 0x14;
  piStack_30 = (int *)thunk_MwhHq(0x14);
  piStack_30[2] = iVar3;
  piStack_30[3] = param_3;
  piStack_30[4] = param_4;
  *piStack_30 = (int)&DAT_70b0f7c4;
  piStack_30[1] = param_1;
  FUN_717ccb10(uVar6,aiStack_40);
  if (piStack_30 == aiStack_40) {
    iVar1 = 0x10;
  }
  else {
    piVar2 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_717d0894;
  }
  (**(code **)(*piVar2 + iVar1))();
LAB_717d0894:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717d09f8
// Entry: 0x717d09f8 | Size: 1160 bytes
// =========================================================================

void FUN_717d09f8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  
  iVar2 = thunk_MwhHq(0x13d);
  uVar9 = *param_1;
  uVar10 = param_1[1];
  iVar8 = (uVar10 >> 3) + 1;
  *(undefined1 *)(iVar2 + 0x12d) = 1;
  *(undefined4 *)(iVar2 + 0x129) = 0;
  *(int *)(iVar2 + 0x139) = iVar8 * 8;
  *(int *)(iVar2 + 0x12) = iVar8 * 8;
  if (uVar10 >> 3 < 0xff) {
    *(undefined4 *)(iVar2 + 0x139) = 0x800;
    iVar1 = iVar2 + 0x27;
  }
  else {
    iVar1 = imp_malloc(iVar8);
  }
  *(int *)(iVar2 + 3) = iVar1;
  imp___aeabi_memcpy(iVar1,uVar9,iVar8);
  iVar8 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if ((DAT_71201804 & 1) == 0) {
    iVar1 = cuKsjVZRyspaVsDnqLy(&DAT_71201804);
    if (iVar1 != 0) {
      pcVar4 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb078);
      if (*pcVar4 == '\0') {
        puVar6 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb068);
        *(undefined2 *)(puVar6 + 3) = 0x19d;
        *puVar6 = 0x46bb9714;
        puVar6[1] = 0x3f181cfe;
        puVar6[2] = 0x60b9ab1e;
        GFDIUClbc_QcPNgD_wH(&LAB_717d1090,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb078);
        *puVar7 = 1;
      }
      pbVar5 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb068);
      if (pbVar5[0xd] != 0) {
        *pbVar5 = *pbVar5 ^ 0x7b;
        pbVar5[1] = pbVar5[1] ^ 0xf9;
        pbVar5[2] = pbVar5[2] ^ 0xe9;
        pbVar5[3] = pbVar5[3] ^ 0x23;
        pbVar5[0xd] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x9d;
        pbVar5[5] = pbVar5[5] ^ 0x79;
        pbVar5[6] = pbVar5[6] ^ 0x71;
        pbVar5[7] = pbVar5[7] ^ 0x49;
        pbVar5[8] = pbVar5[8] ^ 0x7b;
        pbVar5[9] = pbVar5[9] ^ 0xf9;
        pbVar5[10] = pbVar5[10] ^ 0xe9;
        pbVar5[0xb] = pbVar5[0xb] ^ 0x23;
        pbVar5[0xc] = pbVar5[0xc] ^ 0x9d;
      }
      DAT_71201800 = FUN_71885ba4(pbVar5,0);
      SixizuLbAnqfgRApsCY(&DAT_71201804);
    }
  }
  uVar9 = DAT_71201800;
  imp___aeabi_memclr4(&iStack_48,0x30);
  uStack_4c = uVar9;
  uVar9 = FUN_713a05a0(&uStack_4c,iVar2);
  cfqspBX_JrdDvACwYrAyrngjQ(iVar8 + 0x34);
  piVar3 = (int *)thunk_MwhHq(0x3c);
  *piVar3 = 0;
  piVar3[1] = 0;
  FUN_713a10f8(piVar3 + 2,uVar9);
  piVar3[1] = iVar8 + 0x38;
  iVar2 = *(int *)(iVar8 + 0x38);
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  *(int **)(iVar8 + 0x38) = piVar3;
  *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + 1;
  QgduklVhdVlmSiqzGQeutncbrNj(iVar8 + 0x34);
  if (iStack_30 != 0) {
    iStack_2c = iStack_30;
    qNQrlu();
  }
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    qNQrlu();
  }
  if (iStack_48 != 0) {
    iStack_44 = iStack_48;
    qNQrlu();
  }
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717d11f8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717d1214 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717d1484 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717d14a0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717d1660
// Entry: 0x717d1660 | Size: 1312 bytes
// =========================================================================

undefined4 FUN_717d1660(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  
  piVar9 = (int *)FUN_717d1dc8();
  if (piVar9 != (int *)0x0) {
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb098);
    if (*pcVar10 == '\0') {
      puVar14 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb088);
      *(undefined1 *)((int)puVar14 + 0x19) = 1;
      uVar5 = DAT_7008563c;
      uVar4 = DAT_70085638;
      uVar3 = DAT_70085634;
      uVar8 = DAT_70085630;
      uVar7 = DAT_7008562c;
      *puVar14 = DAT_70085628;
      puVar14[1] = uVar7;
      puVar14[2] = uVar8;
      puVar14[3] = uVar3;
      puVar14[4] = uVar4;
      puVar14[5] = uVar5;
      *(undefined1 *)(puVar14 + 6) = DAT_70085640;
      GFDIUClbc_QcPNgD_wH(&LAB_717db4d8,puVar14,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb098);
      *puVar16 = 1;
    }
    iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb088);
    if (*(char *)(iVar11 + 0x19) != '\0') {
      uVar17 = 0;
      uVar18 = 0;
      do {
        iVar19 = (uVar17 & 7) * 8;
        uVar20 = iVar19 - 0x20;
        bVar6 = (byte)(0x570fc78f >> iVar19) |
                (byte)(-0x382c2403 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar20) {
          bVar6 = (byte)(0xc7d3dbfd >> (uVar20 & 0xff));
        }
        *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar6;
        bVar21 = 0xfffffffe < uVar17;
        bVar1 = uVar18 == 0;
        bVar2 = (0x17 < uVar17) <= uVar18;
        uVar17 = uVar17 + 1;
        uVar18 = uVar18 + bVar21;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar11 + 0x19) = 0;
    }
    uVar7 = (**(code **)(*piVar9 + 0x18))(piVar9);
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0b8);
    if (*pcVar10 == '\0') {
      puVar14 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0a8);
      *puVar14 = 0xda686fa0;
      puVar14[1] = 0xf1312b7e;
      *(undefined1 *)(puVar14 + 2) = 1;
      GFDIUClbc_QcPNgD_wH(&LAB_717db514,puVar14,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0b8);
      *puVar16 = 1;
    }
    pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0a8);
    if (pbVar12[8] != 0) {
      pbVar12[8] = 0;
      *pbVar12 = *pbVar12 ^ 0xf3;
      pbVar12[1] = pbVar12[1] ^ 0x2b;
      pbVar12[2] = pbVar12[2] ^ 0x23;
      pbVar12[3] = pbVar12[3] ^ 0x85;
      pbVar12[4] = pbVar12[4] ^ 0x37;
      pbVar12[5] = pbVar12[5] ^ 0x65;
      pbVar12[6] = pbVar12[6] ^ 0x65;
      pbVar12[7] = pbVar12[7] ^ 0xf1;
    }
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0d8);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0c8);
      *puVar15 = 0x2bba;
      *(undefined1 *)(puVar15 + 1) = 1;
      GFDIUClbc_QcPNgD_wH(&LAB_717db53c,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0d8);
      *puVar16 = 1;
    }
    pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0c8);
    if (pbVar13[2] != 0) {
      pbVar13[2] = 0;
      *pbVar13 = *pbVar13 ^ 0xf3;
      pbVar13[1] = pbVar13[1] ^ 0x2b;
    }
    uVar8 = (**(code **)(*piVar9 + 0x240))(piVar9,uVar7,pbVar12);
    uVar7 = (**(code **)(*piVar9 + 600))(piVar9,uVar7,uVar8);
    iVar11 = (**(code **)(*piVar9 + 0x390))(piVar9);
    if (iVar11 == 0) {
      return uVar7;
    }
    (**(code **)(*piVar9 + 0x40))(piVar9);
    (**(code **)(*piVar9 + 0x44))(piVar9);
  }
  return 0;
}


// =========================================================================
// Function: FUN_717d1dc8
// Entry: 0x717d1dc8 | Size: 304 bytes
// =========================================================================

undefined4 FUN_717d1dc8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  uVar2 = 0;
  uStack_14 = 0;
  iVar1 = (**(code **)(*DAT_71201870 + 0x18))(DAT_71201870,&uStack_14,0x10004);
  uVar3 = uVar2;
  if (((iVar1 != -3 && iVar1 != -1) && (uVar3 = uStack_14, iVar1 == -2)) &&
     (iVar1 = FUN_717e9154(), uVar3 = uVar2, iVar1 == 0)) {
    imp_pthread_once(&DAT_71201874,&LAB_717dad58);
    iVar1 = (**(code **)(*DAT_71201870 + 0x1c))(DAT_71201870,&uStack_14,0);
    if (iVar1 == 0) {
      imp_pthread_setspecific(DAT_71201878,1);
      uVar3 = uStack_14;
    }
  }
  return uVar3;
}


// =========================================================================
// Function: Java_com_native_Main_hasFlutter
// Entry: 0x717d1f84 | Size: 40 bytes
// =========================================================================

void Java_com_native_Main_hasFlutter(undefined4 param_1,undefined4 param_2,int param_3)

{
  DAT_7120186c = param_3 != 0;
  return;
}


// =========================================================================
// Function: FnMfWSIASLNlGijZhr
// Entry: 0x717d1fd4 | Size: 872 bytes
// =========================================================================

void FnMfWSIASLNlGijZhr(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 0xff;
  uVar1 = imp_gettid();
  imp_syscall(0xf1,uVar1,4,&uStack_28);
  FUN_717ef3ac();
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_34);
  }
  if (uVar2 < 0xb) {
    uVar3 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(uVar2 << 1));
    if (uVar2 != 0) goto LAB_717d206c;
  }
  else {
    uVar3 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_34 = (uVar2 | 7) + 2;
    uStack_30 = uVar2;
    uStack_2c = uVar3;
LAB_717d206c:
    imp___aeabi_memcpy(uVar3,param_1,uVar2);
  }
  *(undefined1 *)(uVar3 + uVar2) = 0;
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&DAT_71201810,&uStack_34);
  if ((uStack_34 & 1) != 0) {
    qNQrlu(uStack_2c);
  }
  DAT_7120181c = param_2;
  uVar2 = imp_strlen(param_3);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar2 < 0xb) {
    uVar3 = (uint)&uStack_40 | 1;
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar2 << 1));
    if (uVar2 != 0) goto LAB_717d210c;
  }
  else {
    uVar3 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_40 = (uVar2 | 7) + 2;
    uStack_3c = uVar2;
    uStack_38 = uVar3;
LAB_717d210c:
    imp___aeabi_memcpy(uVar3,param_3,uVar2);
  }
  *(undefined1 *)(uVar3 + uVar2) = 0;
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&DAT_71201840,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    qNQrlu(uStack_38);
  }
  uVar2 = imp_strlen(param_4);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_4c);
  }
  if (uVar2 < 0xb) {
    uVar3 = (uint)&uStack_4c | 1;
    uStack_4c = CONCAT31(uStack_4c._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_717d21b0;
  }
  else {
    uVar3 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_4c = (uVar2 | 7) + 2;
    uStack_48 = uVar2;
    uStack_44 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_4,uVar2);
LAB_717d21b0:
  *(undefined1 *)(uVar3 + uVar2) = 0;
  lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&DAT_71201850,&uStack_4c);
  if ((uStack_4c & 1) != 0) {
    qNQrlu(uStack_44);
  }
  FUN_714ba2b8();
  return;
}


// =========================================================================
// Function: FUN_717d2500
// Entry: 0x717d2500 | Size: 28 bytes
// =========================================================================

undefined1 * FUN_717d2500(void)

{
  return &DAT_71201810;
}


// =========================================================================
// Function: FUN_717d2544
// Entry: 0x717d2544 | Size: 28 bytes
// =========================================================================

undefined4 * FUN_717d2544(void)

{
  return &DAT_7120181c;
}


// =========================================================================
// Function: FUN_717d2588
// Entry: 0x717d2588 | Size: 32 bytes
// =========================================================================

undefined4 FUN_717d2588(void)

{
  return DAT_7120181c;
}


// =========================================================================
// Function: FUN_717d25cc
// Entry: 0x717d25cc | Size: 624 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_717d25cc(void)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  byte abStack_60 [4];
  uint uStack_5c;
  uint uStack_58;
  byte abStack_54 [8];
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  uVar6 = CONCAT22(DAT_71201824._2_2_,(undefined2)DAT_71201824);
  if ((DAT_71201820 & 1) == 0) {
    uVar6 = (uint)(DAT_71201820 >> 1);
  }
  if (uVar6 == 0) {
    abStack_54[0] = 0x10;
    abStack_54[1] = 0x61;
    abStack_54[2] = 0x6e;
    abStack_54[3] = 100;
    abStack_54[4] = 0x72;
    abStack_54[5] = 0x6f;
    abStack_54[6] = 0x69;
    abStack_54[7] = 100;
    uStack_4c = 0x20;
    uVar6 = DAT_71201814;
    puVar5 = DAT_71201818;
    if ((DAT_71201810 & 1) == 0) {
      puVar5 = &DAT_71201811;
      uVar6 = (uint)(DAT_71201810 >> 1);
    }
    puVar3 = (uint *)fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                               (abStack_54,puVar5,uVar6);
    uStack_48 = *puVar3;
    uStack_44 = puVar3[1];
    uStack_40 = puVar3[2];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = (uint *)PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                               (&uStack_48,&DAT_7006223e);
    uStack_38 = *puVar3;
    uStack_34 = puVar3[1];
    uStack_30 = puVar3[2];
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    JTLCYfEcbCeQVXSyFtQFASTx(abStack_60,DAT_7120181c);
    uVar6 = uStack_58;
    if ((abStack_60[0] & 1) == 0) {
      uStack_5c = (uint)(abStack_60[0] >> 1);
      uVar6 = (uint)abStack_60 | 1;
    }
    pbVar4 = (byte *)fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                               (&uStack_38,uVar6,uStack_5c);
    uVar7 = *(undefined4 *)(pbVar4 + 8);
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    uStack_28 = *(undefined4 *)(pbVar4 + 2);
    bVar1 = *pbVar4;
    bVar2 = pbVar4[1];
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    uStack_24 = *(undefined2 *)(pbVar4 + 6);
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    if ((DAT_71201820 & 1) != 0) {
      qNQrlu(DAT_71201828);
    }
    _DAT_71201822 = (undefined2)uStack_28;
    DAT_71201824._0_2_ = (undefined2)((uint)uStack_28 >> 0x10);
    DAT_71201824._2_2_ = uStack_24;
    DAT_71201820 = bVar1;
    DAT_71201821 = bVar2;
    DAT_71201828 = uVar7;
    if ((abStack_60[0] & 1) != 0) {
      qNQrlu(uStack_58);
    }
    if ((uStack_38 & 1) != 0) {
      qNQrlu(uStack_30);
    }
    if ((uStack_48 & 1) != 0) {
      qNQrlu(uStack_40);
    }
    if ((abStack_54[0] & 1) != 0) {
      qNQrlu(uStack_4c);
    }
  }
  return &DAT_71201820;
}


// =========================================================================
// Function: FUN_717d2930
// Entry: 0x717d2930 | Size: 28 bytes
// =========================================================================

undefined * FUN_717d2930(void)

{
  return &DAT_71201850;
}


// =========================================================================
// Function: FUN_717d2974
// Entry: 0x717d2974 | Size: 40 bytes
// =========================================================================

void FUN_717d2974(int param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  imp_AAssetManager_open(*(undefined4 *)(param_1 + 8),pbVar1,0);
  return;
}


// =========================================================================
// Function: FUN_717d29c8
// Entry: 0x717d29c8 | Size: 16 bytes
// =========================================================================

void FUN_717d29c8(undefined4 param_1,undefined4 param_2)

{
  imp_AAsset_close(param_2);
  return;
}


// =========================================================================
// Function: FUN_717d2a04
// Entry: 0x717d2a04 | Size: 24 bytes
// =========================================================================

void FUN_717d2a04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp_AAsset_read(param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_717d2a48
// Entry: 0x717d2a48 | Size: 16 bytes
// =========================================================================

void FUN_717d2a48(undefined4 param_1,undefined4 param_2)

{
  imp_AAsset_getLength(param_2);
  return;
}


// =========================================================================
// Function: FUN_717d2a84
// Entry: 0x717d2a84 | Size: 64 bytes
// =========================================================================

int FUN_717d2a84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = imp_AAsset_getLength(param_2);
  iVar2 = imp_AAsset_getRemainingLength(param_2);
  return iVar1 - iVar2;
}


// =========================================================================
// Function: FUN_717d2afc
// Entry: 0x717d2afc | Size: 24 bytes
// =========================================================================

void FUN_717d2afc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  imp_AAsset_seek(param_2,param_3,0);
  return;
}


// =========================================================================
// Function: FUN_717d2b40
// Entry: 0x717d2b40 | Size: 1688 bytes
// =========================================================================

void FUN_717d2b40(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar9 = (int *)FUN_717d1dc8();
  if (piVar9 == (int *)0x0) {
    *(undefined2 *)param_1 = 0;
    return;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0f8);
  if (*pcVar10 == '\0') {
    puVar14 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0e8);
    *(undefined1 *)((int)puVar14 + 0x11) = 1;
    uVar3 = DAT_70085654;
    uVar8 = DAT_70085650;
    uVar7 = DAT_7008564c;
    *puVar14 = DAT_70085648;
    puVar14[1] = uVar7;
    puVar14[2] = uVar8;
    puVar14[3] = uVar3;
    *(undefined1 *)(puVar14 + 4) = DAT_70085658;
    GFDIUClbc_QcPNgD_wH(&LAB_717db560,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb0f8);
    *puVar15 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb0e8);
  if (*(char *)(iVar11 + 0x11) != '\0') {
    uVar13 = 0;
    uVar18 = 0;
    do {
      iVar16 = (uVar13 & 7) * 8;
      bVar6 = (byte)(0x8d9b893b >> iVar16) |
              (byte)(-0x2a443e0d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      uVar17 = iVar16 - 0x20;
      if (-1 < (int)uVar17) {
        bVar6 = (byte)(0xd5bbc1f3 >> (uVar17 & 0xff));
      }
      *(byte *)(iVar11 + uVar13) = *(byte *)(iVar11 + uVar13) ^ bVar6;
      bVar19 = 0xfffffffe < uVar13;
      bVar1 = uVar18 == 0;
      bVar2 = (0xf < uVar13) <= uVar18;
      uVar13 = uVar13 + 1;
      uVar18 = uVar18 + bVar19;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x11) = 0;
  }
  uVar7 = (**(code **)(*piVar9 + 0x18))(piVar9);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb118);
  if (*pcVar10 == '\0') {
    puVar14 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb108);
    *puVar14 = 0x10cf00bc;
    *(undefined1 *)((int)puVar14 + 6) = 1;
    *(undefined2 *)(puVar14 + 1) = 0x3dd5;
    GFDIUClbc_QcPNgD_wH(&LAB_717db594,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb118);
    *puVar15 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb108);
  if (pbVar12[6] != 0) {
    pbVar12[6] = 0;
    *pbVar12 = *pbVar12 ^ 0xf1;
    pbVar12[1] = pbVar12[1] ^ 0x4f;
    pbVar12[2] = pbVar12[2] ^ 0x8b;
    pbVar12[3] = pbVar12[3] ^ 0x55;
    pbVar12[4] = pbVar12[4] ^ 0x99;
    pbVar12[5] = pbVar12[5] ^ 0x3d;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb138);
  if (*pcVar10 == '\0') {
    puVar14 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb128);
    *(undefined1 *)((int)puVar14 + 0x13) = 1;
    uVar4 = DAT_7008566c;
    uVar3 = DAT_70085668;
    uVar8 = DAT_70085664;
    *puVar14 = DAT_70085660;
    puVar14[1] = uVar8;
    puVar14[2] = uVar3;
    puVar14[3] = uVar4;
    uVar5 = DAT_70085672;
    *(undefined2 *)(puVar14 + 4) = DAT_70085670;
    *(undefined1 *)((int)puVar14 + 0x12) = uVar5;
    GFDIUClbc_QcPNgD_wH(&LAB_717db5bc,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb138);
    *puVar15 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb128);
  if (*(char *)(iVar11 + 0x13) != '\0') {
    uVar13 = 0;
    uVar18 = 0;
    do {
      iVar16 = (uVar13 & 7) * 8;
      bVar6 = (byte)(0x558b4ff1 >> iVar16) | (byte)(0x211b3d99 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar17 = iVar16 - 0x20;
      if (-1 < (int)uVar17) {
        bVar6 = (byte)(0x211b3d99 >> (uVar17 & 0xff));
      }
      *(byte *)(iVar11 + uVar13) = *(byte *)(iVar11 + uVar13) ^ bVar6;
      bVar19 = 0xfffffffe < uVar13;
      bVar1 = uVar18 == 0;
      bVar2 = (0x11 < uVar13) <= uVar18;
      uVar13 = uVar13 + 1;
      uVar18 = uVar18 + bVar19;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x13) = 0;
  }
  uVar8 = (**(code **)(*piVar9 + 0x240))(piVar9,uVar7,pbVar12);
  uVar7 = (**(code **)(*piVar9 + 0x244))(piVar9,uVar7,uVar8);
  uVar8 = (**(code **)(*piVar9 + 0x2a4))(piVar9,uVar7,0);
  uVar13 = imp_strlen();
  if (0xfffffff7 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar13 < 0xb) {
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar13 << 1));
    uVar18 = (uint)&uStack_30 | 1;
    if (uVar13 == 0) goto LAB_717d2df0;
  }
  else {
    uVar18 = thunk_MwhHq((uVar13 | 7) + 1);
    uStack_30 = (uVar13 | 7) + 2;
    uStack_2c = uVar13;
    uStack_28 = uVar18;
  }
  imp___aeabi_memmove(uVar18,uVar8,uVar13);
LAB_717d2df0:
  *(undefined1 *)(uVar18 + uVar13) = 0;
  (**(code **)(*piVar9 + 0x2a8))(piVar9,uVar7,uVar8);
  iVar11 = (**(code **)(*piVar9 + 0x390))(piVar9);
  if (iVar11 == 0) {
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    return;
  }
  (**(code **)(*piVar9 + 0x40))(piVar9);
  (**(code **)(*piVar9 + 0x44))(piVar9);
  *(undefined2 *)param_1 = 0;
  if ((uStack_30 & 1) != 0) {
    qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_717d3484
// Entry: 0x717d3484 | Size: 7072 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717d3484(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte bVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined1 auStack_19d [4];
  undefined1 uStack_199;
  undefined1 auStack_198 [260];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [88];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  piVar9 = (int *)FUN_717d1dc8();
  if (piVar9 == (int *)0x0) {
    bVar6 = false;
  }
  else {
    uVar7 = (**(code **)(*piVar9 + 0x7c))(piVar9,*(undefined4 *)(param_1 + 4));
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb158);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb148);
      *(undefined1 *)((int)puVar15 + 0x12) = 1;
      uVar2 = DAT_70085684;
      uVar13 = DAT_70085680;
      uVar8 = DAT_7008567c;
      *puVar15 = DAT_70085678;
      puVar15[1] = uVar8;
      puVar15[2] = uVar13;
      puVar15[3] = uVar2;
      *(undefined2 *)(puVar15 + 4) = DAT_70085688;
      GFDIUClbc_QcPNgD_wH(&LAB_717db5f0,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb158);
      *puVar16 = 1;
    }
    iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb148);
    if (*(char *)(iVar11 + 0x12) != '\0') {
      uVar17 = 0;
      uVar18 = 0;
      do {
        iVar19 = (uVar17 & 7) * 8;
        uVar20 = iVar19 - 0x20;
        bVar21 = (byte)(0xed61eb31 >> iVar19) |
                 (byte)(-0x7a500ef9 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar20) {
          bVar21 = (byte)(0x85aff107 >> (uVar20 & 0xff));
        }
        *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
        bVar23 = 0xfffffffe < uVar17;
        bVar6 = uVar18 == 0;
        bVar1 = (0x10 < uVar17) <= uVar18;
        uVar17 = uVar17 + 1;
        uVar18 = uVar18 + bVar23;
      } while (bVar6 && bVar1);
      *(undefined1 *)(iVar11 + 0x12) = 0;
    }
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb178);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb168);
      *(undefined1 *)((int)puVar15 + 0x26) = 1;
      uVar2 = DAT_7008569c;
      uVar13 = DAT_70085698;
      uVar8 = DAT_70085694;
      *puVar15 = DAT_70085690;
      puVar15[1] = uVar8;
      puVar15[2] = uVar13;
      puVar15[3] = uVar2;
      uVar3 = DAT_700856b0;
      uVar2 = DAT_700856ac;
      uVar13 = DAT_700856a8;
      uVar8 = DAT_700856a4;
      puVar15[4] = DAT_700856a0;
      puVar15[5] = uVar8;
      puVar15[6] = uVar13;
      puVar15[7] = uVar2;
      puVar15[8] = uVar3;
      *(undefined2 *)(puVar15 + 9) = DAT_700856b4;
      GFDIUClbc_QcPNgD_wH(&LAB_717db624,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb178);
      *puVar16 = 1;
    }
    iVar19 = XcxSszXLPjQrEGhecEv_(&DAT_700fb168);
    if (*(char *)(iVar19 + 0x26) != '\0') {
      uVar17 = 0;
      uVar18 = 0;
      do {
        iVar22 = (uVar17 & 7) * 8;
        uVar20 = iVar22 - 0x20;
        bVar21 = (byte)(0xed61eb31 >> iVar22) |
                 (byte)(-0x7a500ef9 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar20) {
          bVar21 = (byte)(0x85aff107 >> (uVar20 & 0xff));
        }
        *(byte *)(iVar19 + uVar17) = *(byte *)(iVar19 + uVar17) ^ bVar21;
        bVar23 = 0xfffffffe < uVar17;
        bVar6 = uVar18 == 0;
        bVar1 = (0x24 < uVar17) <= uVar18;
        uVar17 = uVar17 + 1;
        uVar18 = uVar18 + bVar23;
      } while (bVar6 && bVar1);
      *(undefined1 *)(iVar19 + 0x26) = 0;
    }
    uVar8 = (**(code **)(*piVar9 + 0x84))(piVar9,uVar7,iVar11);
    uVar8 = FUN_717d6920(piVar9,*(undefined4 *)(param_1 + 4),uVar8);
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb198);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb188);
      *puVar15 = 0x61efe4cc;
      puVar15[1] = 0xc828b86a;
      puVar15[2] = 0x50d5e4cc;
      *(undefined1 *)((int)puVar15 + 0xf) = 1;
      *(undefined4 *)((int)puVar15 + 0xb) = 0x43be6650;
      GFDIUClbc_QcPNgD_wH(&LAB_717db674,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb198);
      *puVar16 = 1;
    }
    pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb188);
    if (pbVar12[0xf] != 0) {
      *pbVar12 = *pbVar12 ^ 0xab;
      pbVar12[1] = pbVar12[1] ^ 0x81;
      pbVar12[2] = pbVar12[2] ^ 0x9b;
      pbVar12[3] = pbVar12[3] ^ 0x31;
      pbVar12[0xf] = 0;
      pbVar12[4] = pbVar12[4] ^ 0xb;
      pbVar12[5] = pbVar12[5] ^ 0xdb;
      pbVar12[6] = pbVar12[6] ^ 0x43;
      pbVar12[7] = pbVar12[7] ^ 0xa9;
      pbVar12[8] = pbVar12[8] ^ 0xab;
      pbVar12[9] = pbVar12[9] ^ 0x81;
      pbVar12[10] = pbVar12[10] ^ 0x9b;
      pbVar12[0xb] = pbVar12[0xb] ^ 0x31;
      pbVar12[0xc] = pbVar12[0xc] ^ 0xb;
      pbVar12[0xd] = pbVar12[0xd] ^ 0xdb;
      pbVar12[0xe] = pbVar12[0xe] ^ 0x43;
    }
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1b8);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1a8);
      *(undefined1 *)((int)puVar15 + 0x15) = 1;
      uVar4 = DAT_700856c8;
      uVar3 = DAT_700856c4;
      uVar2 = DAT_700856c0;
      uVar13 = DAT_700856bc;
      *puVar15 = DAT_700856b8;
      puVar15[1] = uVar13;
      puVar15[2] = uVar2;
      puVar15[3] = uVar3;
      puVar15[4] = uVar4;
      *(undefined1 *)(puVar15 + 5) = DAT_700856cc;
      GFDIUClbc_QcPNgD_wH(&LAB_717db6a4,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1b8);
      *puVar16 = 1;
    }
    iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb1a8);
    if (*(char *)(iVar11 + 0x15) != '\0') {
      uVar17 = 0;
      uVar18 = 0;
      do {
        iVar19 = (uVar17 & 7) * 8;
        bVar21 = (byte)(0x319b81ab >> iVar19) |
                 (byte)(-0x56bc24f5 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
        uVar20 = iVar19 - 0x20;
        if (-1 < (int)uVar20) {
          bVar21 = (byte)(0xa943db0b >> (uVar20 & 0xff));
        }
        *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
        bVar23 = 0xfffffffe < uVar17;
        bVar6 = uVar18 == 0;
        bVar1 = (0x13 < uVar17) <= uVar18;
        uVar17 = uVar17 + 1;
        uVar18 = uVar18 + bVar23;
      } while (bVar6 && bVar1);
      *(undefined1 *)(iVar11 + 0x15) = 0;
    }
    uVar7 = (**(code **)(*piVar9 + 0x84))(piVar9,uVar7,pbVar12);
    uVar13 = FUN_717d6920(piVar9,*(undefined4 *)(param_1 + 4),uVar7);
    iVar11 = FUN_717d1660();
    uVar7 = (**(code **)(*piVar9 + 0x7c))(piVar9,uVar8);
    if (iVar11 < 0x1c) {
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb298);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb288);
        *puVar15 = 0xb745346c;
        puVar15[1] = 0x98d6c48a;
        puVar15[2] = 0x8978346c;
        *(undefined1 *)((int)puVar15 + 0xf) = 1;
        *(undefined4 *)((int)puVar15 + 0xb) = 0xbdc88d89;
        GFDIUClbc_QcPNgD_wH(&LAB_717db860,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb298);
        *puVar16 = 1;
      }
      pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb288);
      if (pbVar12[0xf] != 0) {
        *pbVar12 = *pbVar12 ^ 0xb;
        pbVar12[1] = pbVar12[1] ^ 0x51;
        pbVar12[2] = pbVar12[2] ^ 0x31;
        pbVar12[3] = pbVar12[3] ^ 0xe7;
        pbVar12[0xf] = 0;
        pbVar12[4] = pbVar12[4] ^ 0xeb;
        pbVar12[5] = pbVar12[5] ^ 0xa7;
        pbVar12[6] = pbVar12[6] ^ 0xbd;
        pbVar12[7] = pbVar12[7] ^ 0xf9;
        pbVar12[8] = pbVar12[8] ^ 0xb;
        pbVar12[9] = pbVar12[9] ^ 0x51;
        pbVar12[10] = pbVar12[10] ^ 0x31;
        pbVar12[0xb] = pbVar12[0xb] ^ 0xe7;
        pbVar12[0xc] = pbVar12[0xc] ^ 0xeb;
        pbVar12[0xd] = pbVar12[0xd] ^ 0xa7;
        pbVar12[0xe] = pbVar12[0xe] ^ 0xbd;
      }
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2b8);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2a8);
        *(undefined1 *)((int)puVar15 + 0x36) = 1;
        uVar4 = DAT_7008577c;
        uVar3 = DAT_70085778;
        uVar2 = DAT_70085774;
        *puVar15 = DAT_70085770;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar4 = DAT_7008578c;
        uVar3 = DAT_70085788;
        uVar2 = DAT_70085784;
        puVar15[4] = DAT_70085780;
        puVar15[5] = uVar2;
        puVar15[6] = uVar3;
        puVar15[7] = uVar4;
        uVar5 = DAT_700857a0;
        uVar4 = DAT_7008579c;
        uVar3 = DAT_70085798;
        uVar2 = DAT_70085794;
        puVar15[8] = DAT_70085790;
        puVar15[9] = uVar2;
        puVar15[10] = uVar3;
        puVar15[0xb] = uVar4;
        puVar15[0xc] = uVar5;
        *(undefined2 *)(puVar15 + 0xd) = DAT_700857a4;
        GFDIUClbc_QcPNgD_wH(&LAB_717db890,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2b8);
        *puVar16 = 1;
      }
      iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb2a8);
      if (*(char *)(iVar11 + 0x36) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar19 = (uVar17 & 7) * 8;
          uVar20 = iVar19 - 0x20;
          bVar21 = (byte)(0xe731510b >> iVar19) |
                   (byte)(-0x6425815 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0xf9bda7eb >> (uVar20 & 0xff));
          }
          *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x34 < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar11 + 0x36) = 0;
      }
      uVar7 = (**(code **)(*piVar9 + 0x84))(piVar9,uVar7,pbVar12);
      uVar8 = FUN_717d6920(piVar9,uVar8,uVar7,uVar13,0x40);
      uVar7 = (**(code **)(*piVar9 + 0x7c))(piVar9,uVar8);
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2d8);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2c8);
        *puVar15 = 0x6b94e600;
        puVar15[1] = 0xa3681746;
        *(undefined1 *)((int)puVar15 + 0xb) = 1;
        *(undefined4 *)((int)puVar15 + 7) = 0xf3fc16a3;
        GFDIUClbc_QcPNgD_wH(&LAB_717db8e0,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2d8);
        *puVar16 = 1;
      }
      pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2c8);
      if (pbVar12[0xb] != 0) {
        *pbVar12 = *pbVar12 ^ 0x73;
        pbVar12[1] = pbVar12[1] ^ 0x8f;
        pbVar12[2] = pbVar12[2] ^ 0xf3;
        pbVar12[3] = pbVar12[3] ^ 5;
        pbVar12[0xb] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x27;
        pbVar12[5] = pbVar12[5] ^ 99;
        pbVar12[6] = pbVar12[6] ^ 0x1d;
        pbVar12[7] = pbVar12[7] ^ 0xd1;
        pbVar12[8] = pbVar12[8] ^ 0x73;
        pbVar12[9] = pbVar12[9] ^ 0x8f;
        pbVar12[10] = pbVar12[10] ^ 0xf3;
      }
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2f8);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2e8);
        *(undefined1 *)(puVar15 + 8) = 1;
        uVar3 = DAT_700608a4;
        uVar2 = DAT_700608a0;
        uVar13 = DAT_7006089c;
        *puVar15 = DAT_70060898;
        puVar15[1] = uVar13;
        puVar15[2] = uVar2;
        puVar15[3] = uVar3;
        uVar3 = DAT_700608b4;
        uVar2 = DAT_700608b0;
        uVar13 = DAT_700608ac;
        puVar15[4] = DAT_700608a8;
        puVar15[5] = uVar13;
        puVar15[6] = uVar2;
        puVar15[7] = uVar3;
        GFDIUClbc_QcPNgD_wH(&LAB_717db90c,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb2f8);
        *puVar16 = 1;
      }
      iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb2e8);
      if (*(char *)(iVar11 + 0x20) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar19 = (uVar17 & 7) * 8;
          bVar21 = (byte)(0x5f38f73 >> iVar19) |
                   (byte)(-0x2ee29cd9 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          uVar20 = iVar19 - 0x20;
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0xd11d6327 >> (uVar20 & 0xff));
          }
          *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x1e < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar11 + 0x20) = 0;
      }
      uVar7 = (**(code **)(*piVar9 + 0x178))(piVar9,uVar7,pbVar12);
      uVar7 = (**(code **)(*piVar9 + 0x17c))(piVar9,uVar8,uVar7);
    }
    else {
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1d8);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1c8);
        *puVar15 = 0xe7e9d0ec;
        puVar15[1] = 0x80801258;
        puVar15[2] = 0xd9d4d0ec;
        *(undefined1 *)((int)puVar15 + 0xf) = 1;
        *(undefined4 *)((int)puVar15 + 0xb) = 0xeb1e5fd9;
        GFDIUClbc_QcPNgD_wH(&LAB_717db6dc,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1d8);
        *puVar16 = 1;
      }
      pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1c8);
      if (pbVar12[0xf] != 0) {
        *pbVar12 = *pbVar12 ^ 0x8b;
        pbVar12[1] = pbVar12[1] ^ 0xb5;
        pbVar12[2] = pbVar12[2] ^ 0x9d;
        pbVar12[3] = pbVar12[3] ^ 0xb7;
        pbVar12[0xf] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x39;
        pbVar12[5] = pbVar12[5] ^ 0x71;
        pbVar12[6] = pbVar12[6] ^ 0xeb;
        pbVar12[7] = pbVar12[7] ^ 0xe1;
        pbVar12[8] = pbVar12[8] ^ 0x8b;
        pbVar12[9] = pbVar12[9] ^ 0xb5;
        pbVar12[10] = pbVar12[10] ^ 0x9d;
        pbVar12[0xb] = pbVar12[0xb] ^ 0xb7;
        pbVar12[0xc] = pbVar12[0xc] ^ 0x39;
        pbVar12[0xd] = pbVar12[0xd] ^ 0x71;
        pbVar12[0xe] = pbVar12[0xe] ^ 0xeb;
      }
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1f8);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1e8);
        *(undefined1 *)((int)puVar15 + 0x36) = 1;
        uVar4 = DAT_700856dc;
        uVar3 = DAT_700856d8;
        uVar2 = DAT_700856d4;
        *puVar15 = DAT_700856d0;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar4 = DAT_700856ec;
        uVar3 = DAT_700856e8;
        uVar2 = DAT_700856e4;
        puVar15[4] = DAT_700856e0;
        puVar15[5] = uVar2;
        puVar15[6] = uVar3;
        puVar15[7] = uVar4;
        uVar5 = DAT_70085700;
        uVar4 = DAT_700856fc;
        uVar3 = DAT_700856f8;
        uVar2 = DAT_700856f4;
        puVar15[8] = DAT_700856f0;
        puVar15[9] = uVar2;
        puVar15[10] = uVar3;
        puVar15[0xb] = uVar4;
        puVar15[0xc] = uVar5;
        *(undefined2 *)(puVar15 + 0xd) = DAT_70085704;
        GFDIUClbc_QcPNgD_wH(&LAB_717db70c,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb1f8);
        *puVar16 = 1;
      }
      iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb1e8);
      if (*(char *)(iVar11 + 0x36) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar19 = (uVar17 & 7) * 8;
          uVar20 = iVar19 - 0x20;
          bVar21 = (byte)(0xb79db58b >> iVar19) |
                   (byte)(-0x1e148ec7 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0xe1eb7139 >> (uVar20 & 0xff));
          }
          *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x34 < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar11 + 0x36) = 0;
      }
      uVar7 = (**(code **)(*piVar9 + 0x84))(piVar9,uVar7,pbVar12);
      uVar8 = FUN_717d6920(piVar9,uVar8,uVar7,uVar13,0x8000000);
      uVar7 = (**(code **)(*piVar9 + 0x7c))(piVar9,uVar8);
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb218);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb208);
        *(undefined1 *)(puVar15 + 3) = 1;
        *puVar15 = 0x29e02c90;
        puVar15[1] = 0x3276df7c;
        puVar15[2] = 0x47e8238d;
        GFDIUClbc_QcPNgD_wH(&LAB_717db75c,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb218);
        *puVar16 = 1;
      }
      pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb208);
      if (pbVar12[0xc] != 0) {
        *pbVar12 = *pbVar12 ^ 0xe3;
        pbVar12[1] = pbVar12[1] ^ 0x45;
        pbVar12[2] = pbVar12[2] ^ 0x87;
        pbVar12[3] = pbVar12[3] ^ 0x47;
        pbVar12[0xc] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x15;
        pbVar12[5] = pbVar12[5] ^ 0xb1;
        pbVar12[6] = pbVar12[6] ^ 0x11;
        pbVar12[7] = pbVar12[7] ^ 0x7b;
        pbVar12[8] = pbVar12[8] ^ 0xe3;
        pbVar12[9] = pbVar12[9] ^ 0x45;
        pbVar12[10] = pbVar12[10] ^ 0x87;
        pbVar12[0xb] = pbVar12[0xb] ^ 0x47;
      }
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb238);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb228);
        *(undefined1 *)((int)puVar15 + 0x21) = 1;
        uVar4 = DAT_70085714;
        uVar3 = DAT_70085710;
        uVar2 = DAT_7008570c;
        *puVar15 = DAT_70085708;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar4 = DAT_70085724;
        uVar3 = DAT_70085720;
        uVar2 = DAT_7008571c;
        puVar15[4] = DAT_70085718;
        puVar15[5] = uVar2;
        puVar15[6] = uVar3;
        puVar15[7] = uVar4;
        *(undefined1 *)(puVar15 + 8) = DAT_70085728;
        GFDIUClbc_QcPNgD_wH(&LAB_717db788,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb238);
        *puVar16 = 1;
      }
      iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb228);
      if (*(char *)(iVar11 + 0x21) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar19 = (uVar17 & 7) * 8;
          uVar20 = iVar19 - 0x20;
          bVar21 = (byte)(0x478745e3 >> iVar19) |
                   (byte)(0x7b11b115 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0x7b11b115 >> (uVar20 & 0xff));
          }
          *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x1f < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar11 + 0x21) = 0;
      }
      uVar7 = (**(code **)(*piVar9 + 0x178))(piVar9,uVar7,pbVar12);
      uVar7 = (**(code **)(*piVar9 + 0x17c))(piVar9,uVar8,uVar7);
      uVar8 = (**(code **)(*piVar9 + 0x7c))(piVar9,uVar7);
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb258);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb248);
        *(undefined1 *)((int)puVar15 + 0x16) = 1;
        uVar5 = DAT_70085740;
        uVar4 = DAT_7008573c;
        uVar3 = DAT_70085738;
        uVar2 = DAT_70085734;
        *puVar15 = DAT_70085730;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        puVar15[4] = uVar5;
        *(undefined2 *)(puVar15 + 5) = DAT_70085744;
        GFDIUClbc_QcPNgD_wH(&LAB_717db7d8,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb258);
        *puVar16 = 1;
      }
      iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb248);
      if (*(char *)(iVar11 + 0x16) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar19 = (uVar17 & 7) * 8;
          uVar20 = iVar19 - 0x20;
          bVar21 = (byte)(0x5779cb5d >> iVar19) |
                   (byte)(-0x69a58a3 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0xf965a75d >> (uVar20 & 0xff));
          }
          *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x14 < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar11 + 0x16) = 0;
      }
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb278);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb268);
        *(undefined1 *)((int)puVar15 + 0x22) = 1;
        uVar4 = DAT_70085754;
        uVar3 = DAT_70085750;
        uVar2 = DAT_7008574c;
        *puVar15 = DAT_70085748;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        uVar4 = DAT_70085764;
        uVar3 = DAT_70085760;
        uVar2 = DAT_7008575c;
        puVar15[4] = DAT_70085758;
        puVar15[5] = uVar2;
        puVar15[6] = uVar3;
        puVar15[7] = uVar4;
        *(undefined2 *)(puVar15 + 8) = DAT_70085768;
        GFDIUClbc_QcPNgD_wH(&LAB_717db810,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb278);
        *puVar16 = 1;
      }
      iVar19 = XcxSszXLPjQrEGhecEv_(&DAT_700fb268);
      if (*(char *)(iVar19 + 0x22) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar22 = (uVar17 & 7) * 8;
          uVar20 = iVar22 - 0x20;
          bVar21 = (byte)(0x5779cb5d >> iVar22) |
                   (byte)(-0x69a58a3 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0xf965a75d >> (uVar20 & 0xff));
          }
          *(byte *)(iVar19 + uVar17) = *(byte *)(iVar19 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x20 < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar19 + 0x22) = 0;
      }
      uVar8 = (**(code **)(*piVar9 + 0x84))(piVar9,uVar8,iVar11);
      uVar7 = FUN_717d6920(piVar9,uVar7,uVar8,uVar13,0x8000000);
    }
    uVar7 = (**(code **)(*piVar9 + 0x2b4))(piVar9,uVar7,0);
    uVar8 = (**(code **)(*piVar9 + 0x7c))(piVar9,uVar7);
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb318);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb308);
      *(undefined1 *)(puVar15 + 3) = 1;
      *puVar15 = 0xe6976425;
      puVar15[1] = 0x5b643a8b;
      puVar15[2] = 0x9fac6a23;
      GFDIUClbc_QcPNgD_wH(&LAB_717db94c,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb318);
      *puVar16 = 1;
    }
    pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb308);
    if (pbVar12[0xc] != 0) {
      *pbVar12 = *pbVar12 ^ 0x51;
      pbVar12[1] = pbVar12[1] ^ 0xb;
      pbVar12[2] = pbVar12[2] ^ 0xd5;
      pbVar12[3] = pbVar12[3] ^ 0x9f;
      pbVar12[0xc] = 0;
      pbVar12[4] = ~pbVar12[4];
      pbVar12[5] = pbVar12[5] ^ 0x5f;
      pbVar12[6] = pbVar12[6] ^ 0x25;
      pbVar12[7] = pbVar12[7] ^ 0x29;
      pbVar12[8] = pbVar12[8] ^ 0x51;
      pbVar12[9] = pbVar12[9] ^ 0xb;
      pbVar12[10] = pbVar12[10] ^ 0xd5;
      pbVar12[0xb] = pbVar12[0xb] ^ 0x9f;
    }
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb338);
    if (*pcVar10 == '\0') {
      puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb328);
      *puVar15 = 0xdd8e2279;
      *(undefined2 *)(puVar15 + 1) = 0x1ff;
      GFDIUClbc_QcPNgD_wH(&LAB_717db978,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb338);
      *puVar16 = 1;
    }
    pbVar14 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb328);
    if (pbVar14[5] != 0) {
      pbVar14[5] = 0;
      *pbVar14 = *pbVar14 ^ 0x51;
      pbVar14[1] = pbVar14[1] ^ 0xb;
      pbVar14[2] = pbVar14[2] ^ 0xd5;
      pbVar14[3] = pbVar14[3] ^ 0x9f;
      pbVar14[4] = ~pbVar14[4];
    }
    uVar8 = (**(code **)(*piVar9 + 0x84))(piVar9,uVar8,pbVar12);
    uVar13 = FUN_717d6920(piVar9,uVar7,uVar8);
    FUN_71887894(auStack_84);
    uStack_199 = 1;
    uVar7 = (**(code **)(*piVar9 + 0x2ac))(piVar9,uVar13);
    (**(code **)(*piVar9 + 100))(piVar9,uVar13);
    uVar8 = (**(code **)(*piVar9 + 0x2e0))(piVar9,uVar13,&uStack_199);
    FUN_718878f0(auStack_84,uVar8,uVar7);
    FUN_71888488(auStack_94,auStack_84);
    (**(code **)(*piVar9 + 0x300))(piVar9,uVar13,uVar8,2);
    (**(code **)(*piVar9 + 0x5c))(piVar9,uVar13);
    imp___aeabi_memclr8(auStack_198,0x100);
    pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb348);
    iVar11 = 0;
    do {
      uVar24 = XcxSszXLPjQrEGhecEv_(&DAT_700fb358);
      uVar17 = (uint)((ulonglong)uVar24 >> 0x20);
      if (*(char *)uVar24 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb348);
        *puVar15 = 0xe5172152;
        *(undefined2 *)(puVar15 + 1) = 0x129;
        GFDIUClbc_QcPNgD_wH(&LAB_717db9a0,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb358);
        uVar17 = 1;
        *puVar16 = 1;
      }
      if (pbVar12[5] != 0) {
        uVar17 = (uint)pbVar12[1];
        *pbVar12 = *pbVar12 ^ 0x77;
        pbVar12[1] = pbVar12[1] ^ 0x11;
        pbVar12[2] = pbVar12[2] ^ 0x25;
        pbVar12[3] = pbVar12[3] ^ 0xbd;
        pbVar12[5] = 0;
        pbVar12[4] = pbVar12[4] ^ 0x29;
      }
      FUN_717d6970(auStack_19d,uVar17,pbVar12,auStack_94[iVar11]);
      imp___strcat_chk(auStack_198,auStack_19d,0x100);
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x10);
    iVar11 = (**(code **)(*piVar9 + 0x390))(piVar9);
    if (iVar11 == 0) {
      pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb378);
      if (*pcVar10 == '\0') {
        puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb368);
        *(undefined1 *)((int)puVar15 + 0x21) = 1;
        uVar13 = DAT_700857b4;
        uVar8 = DAT_700857b0;
        uVar7 = DAT_700857ac;
        *puVar15 = DAT_700857a8;
        puVar15[1] = uVar7;
        puVar15[2] = uVar8;
        puVar15[3] = uVar13;
        uVar13 = DAT_700857c4;
        uVar8 = DAT_700857c0;
        uVar7 = DAT_700857bc;
        puVar15[4] = DAT_700857b8;
        puVar15[5] = uVar7;
        puVar15[6] = uVar8;
        puVar15[7] = uVar13;
        *(undefined1 *)(puVar15 + 8) = DAT_700857c8;
        GFDIUClbc_QcPNgD_wH(&LAB_717db9c8,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb378);
        *puVar16 = 1;
      }
      iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb368);
      if (*(char *)(iVar11 + 0x21) != '\0') {
        uVar17 = 0;
        uVar18 = 0;
        do {
          iVar19 = (uVar17 & 7) * 8;
          uVar20 = iVar19 - 0x20;
          bVar21 = (byte)(0x95499f39 >> iVar19) |
                   (byte)(0x3fe1bd3b << ((uVar17 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar21 = (byte)(0x3fe1bd3b >> (uVar20 & 0xff));
          }
          *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
          bVar23 = 0xfffffffe < uVar17;
          bVar6 = uVar18 == 0;
          bVar1 = (0x1f < uVar17) <= uVar18;
          uVar17 = uVar17 + 1;
          uVar18 = uVar18 + bVar23;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar11 + 0x21) = 0;
      }
      iVar11 = imp_strcmp(auStack_198);
      if (iVar11 == 0) {
        bVar6 = true;
      }
      else {
        pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb398);
        if (*pcVar10 == '\0') {
          puVar15 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb388);
          *(undefined1 *)((int)puVar15 + 0x21) = 1;
          uVar13 = DAT_700857dc;
          uVar8 = DAT_700857d8;
          uVar7 = DAT_700857d4;
          *puVar15 = DAT_700857d0;
          puVar15[1] = uVar7;
          puVar15[2] = uVar8;
          puVar15[3] = uVar13;
          uVar13 = DAT_700857ec;
          uVar8 = DAT_700857e8;
          uVar7 = DAT_700857e4;
          puVar15[4] = DAT_700857e0;
          puVar15[5] = uVar7;
          puVar15[6] = uVar8;
          puVar15[7] = uVar13;
          *(undefined1 *)(puVar15 + 8) = DAT_700857f0;
          GFDIUClbc_QcPNgD_wH(&LAB_717dba18,puVar15,&DAT_70b0e000);
          puVar16 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb398);
          *puVar16 = 1;
        }
        iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb388);
        if (*(char *)(iVar11 + 0x21) != '\0') {
          uVar17 = 0;
          uVar18 = 0;
          do {
            iVar19 = (uVar17 & 7) * 8;
            uVar20 = iVar19 - 0x20;
            bVar21 = (byte)(0x39372de3 >> iVar19) |
                     (byte)(-0x38caa073 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar20) {
              bVar21 = (byte)(0xc7355f8d >> (uVar20 & 0xff));
            }
            *(byte *)(iVar11 + uVar17) = *(byte *)(iVar11 + uVar17) ^ bVar21;
            bVar23 = 0xfffffffe < uVar17;
            bVar6 = uVar18 == 0;
            bVar1 = (0x1f < uVar17) <= uVar18;
            uVar17 = uVar17 + 1;
            uVar18 = uVar18 + bVar23;
          } while (bVar6 && bVar1);
          *(undefined1 *)(iVar11 + 0x21) = 0;
        }
        iVar11 = imp_strcmp(auStack_198);
        bVar6 = iVar11 == 0;
      }
    }
    else {
      (**(code **)(*piVar9 + 0x40))(piVar9);
      (**(code **)(*piVar9 + 0x44))(piVar9);
      bVar6 = false;
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(bVar6);
}


// =========================================================================
// Function: FUN_717d6920
// Entry: 0x717d6920 | Size: 56 bytes
// =========================================================================

void FUN_717d6920(int *param_1)

{
  (**(code **)(*param_1 + 0x8c))();
  return;
}


// =========================================================================
// Function: FUN_717d6970
// Entry: 0x717d6970 | Size: 80 bytes
// =========================================================================

void FUN_717d6970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,4,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_717d69e8
// Entry: 0x717d69e8 | Size: 4 bytes
// =========================================================================

void FUN_717d69e8(void)

{
  return;
}


// =========================================================================
// Function: KlXaEEiIORJbDDMaTbPMKpV
// Entry: 0x717d6a58 | Size: 452 bytes
// =========================================================================

void KlXaEEiIORJbDDMaTbPMKpV(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  
  iVar1 = DAT_71201808;
  uVar2 = imp_strlen(param_2);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar2 < 0xb) {
    uVar6 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_717d6b44;
  }
  else {
    uVar6 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_38 = (uVar2 | 7) + 2;
    uStack_34 = uVar2;
    uStack_30 = uVar6;
  }
  imp___aeabi_memcpy(uVar6,param_2,uVar2);
LAB_717d6b44:
  *(undefined1 *)(uVar6 + uVar2) = 0;
  puVar3 = (undefined4 *)FUN_717dc030((int *)(iVar1 + 0x30),&uStack_28,&uStack_38);
  puVar5 = (undefined4 *)*puVar3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)thunk_MwhHq(0x20);
    *puVar5 = 0;
    puVar5[4] = uStack_38;
    puVar5[5] = uStack_34;
    puVar5[6] = uStack_30;
    puVar5[7] = 0;
    puVar5[1] = 0;
    puVar5[2] = uStack_28;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    *puVar3 = puVar5;
    puVar4 = puVar5;
    if (**(int **)(iVar1 + 0x30) != 0) {
      *(int *)(iVar1 + 0x30) = **(int **)(iVar1 + 0x30);
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_712f807c(*(undefined4 *)(iVar1 + 0x34),puVar4);
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
  }
  puVar5[7] = param_1;
  if ((uStack_38 & 1) != 0) {
    qNQrlu(uStack_30);
  }
  return;
}


// =========================================================================
// Function: FUN_717d6cf0
// Entry: 0x717d6cf0 | Size: 11624 bytes
// =========================================================================

undefined4 * FUN_717d6cf0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  param_1[0xf] = 0xffffffff;
  *param_1 = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[1] = 0;
  param_1[0xc] = param_1 + 0xd;
  uVar7 = (**(code **)(*param_2 + 0x54))(param_2,param_3);
  param_1[1] = uVar7;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3a8);
    *(undefined1 *)((int)puVar16 + 0x22) = 1;
    uVar14 = DAT_70085804;
    uVar8 = DAT_70085800;
    uVar7 = DAT_700857fc;
    *puVar16 = DAT_700857f8;
    puVar16[1] = uVar7;
    puVar16[2] = uVar8;
    puVar16[3] = uVar14;
    uVar14 = DAT_70085814;
    uVar8 = DAT_70085810;
    uVar7 = DAT_7008580c;
    puVar16[4] = DAT_70085808;
    puVar16[5] = uVar7;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    *(undefined2 *)(puVar16 + 8) = DAT_70085818;
    GFDIUClbc_QcPNgD_wH(&LAB_717dba68,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3b8);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb3a8);
  if (*(char *)(iVar11 + 0x22) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0x13cb311b >> iVar20) | (byte)(0x77d119b1 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x77d119b1 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x20 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x22) = 0;
  }
  uVar7 = (**(code **)(*param_2 + 0x18))(param_2);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3d8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3c8);
    *(undefined1 *)(puVar16 + 3) = 1;
    *puVar16 = 0x74aa541e;
    puVar16[1] = 0x61cbbe9c;
    puVar16[2] = 0x11b55b16;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbab8,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3d8);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3c8);
  if (pbVar12[0xc] != 0) {
    *pbVar12 = *pbVar12 ^ 0x73;
    pbVar12[1] = pbVar12[1] ^ 0x35;
    pbVar12[2] = pbVar12[2] ^ 0xc1;
    pbVar12[3] = pbVar12[3] ^ 0x11;
    pbVar12[0xc] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xdf;
    pbVar12[5] = pbVar12[5] ^ 0xcb;
    pbVar12[6] = pbVar12[6] ^ 0xb9;
    pbVar12[7] = pbVar12[7] ^ 0x13;
    pbVar12[8] = pbVar12[8] ^ 0x73;
    pbVar12[9] = pbVar12[9] ^ 0x35;
    pbVar12[10] = pbVar12[10] ^ 0xc1;
    pbVar12[0xb] = pbVar12[0xb] ^ 0x11;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3f8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3e8);
    *puVar16 = 0x119b1c5b;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbae4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3f8);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb3e8);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x73;
    pbVar13[1] = pbVar13[1] ^ 0x35;
    pbVar13[2] = pbVar13[2] ^ 0xc1;
    pbVar13[3] = pbVar13[3] ^ 0x11;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[3] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb418);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb408);
    *puVar16 = 0x7c8627e6;
    puVar16[1] = 0x52d42a22;
    puVar16[2] = 0x73ae3be1;
    *(undefined1 *)((int)puVar16 + 0xe) = 1;
    *(undefined2 *)(puVar16 + 3) = 0x4f3d;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb08,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb418);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb408);
  if (pbVar12[0xe] != 0) {
    *pbVar12 = *pbVar12 ^ 0x93;
    pbVar12[1] = pbVar12[1] ^ 0x49;
    pbVar12[2] = pbVar12[2] ^ 0xcb;
    pbVar12[3] = pbVar12[3] ^ 0x1d;
    pbVar12[0xe] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x49;
    pbVar12[5] = pbVar12[5] ^ 0x4f;
    pbVar12[6] = pbVar12[6] ^ 0x97;
    pbVar12[7] = pbVar12[7] ^ 0x27;
    pbVar12[8] = pbVar12[8] ^ 0x93;
    pbVar12[9] = pbVar12[9] ^ 0x49;
    pbVar12[10] = pbVar12[10] ^ 0xcb;
    pbVar12[0xb] = pbVar12[0xb] ^ 0x1d;
    pbVar12[0xc] = pbVar12[0xc] ^ 0x49;
    pbVar12[0xd] = pbVar12[0xd] ^ 0x4f;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb438);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb428);
    *puVar16 = 0x1d9160bb;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb38,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb438);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb428);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x93;
    pbVar13[1] = pbVar13[1] ^ 0x49;
    pbVar13[2] = pbVar13[2] ^ 0xcb;
    pbVar13[3] = pbVar13[3] ^ 0x1d;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[4] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb458);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb448);
    *(undefined1 *)(puVar16 + 3) = 1;
    *puVar16 = 0xcbb6ca56;
    puVar16[1] = 0x9d2936a7;
    puVar16[2] = 0xbba4cf40;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb5c,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb458);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb448);
  if (pbVar12[0xc] != 0) {
    *pbVar12 = *pbVar12 ^ 0x25;
    pbVar12[1] = pbVar12[1] ^ 0xbd;
    pbVar12[2] = pbVar12[2] ^ 0xd7;
    pbVar12[3] = pbVar12[3] ^ 0xbb;
    pbVar12[0xc] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xe5;
    pbVar12[5] = pbVar12[5] ^ 0x43;
    pbVar12[6] = pbVar12[6] ^ 0x4f;
    pbVar12[7] = pbVar12[7] ^ 0xfb;
    pbVar12[8] = pbVar12[8] ^ 0x25;
    pbVar12[9] = pbVar12[9] ^ 0xbd;
    pbVar12[10] = pbVar12[10] ^ 0xd7;
    pbVar12[0xb] = pbVar12[0xb] ^ 0xbb;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb478);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb468);
    *puVar16 = 0xbb8d940d;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbb88,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb478);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb468);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x25;
    pbVar13[1] = pbVar13[1] ^ 0xbd;
    pbVar13[2] = pbVar13[2] ^ 0xd7;
    pbVar13[3] = pbVar13[3] ^ 0xbb;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[5] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb498);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb488);
    *puVar16 = 0xa14f5658;
    puVar16[1] = 0xe62c5adf;
    puVar16[2] = 0x8e565a73;
    *(undefined1 *)((int)puVar16 + 0xe) = 1;
    *(undefined2 *)(puVar16 + 3) = 0x3bd9;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbbac,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb498);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb488);
  if (pbVar12[0xe] != 0) {
    *pbVar12 = *pbVar12 ^ 0x3f;
    pbVar12[1] = pbVar12[1] ^ 0x33;
    pbVar12[2] = pbVar12[2] ^ 0x3b;
    pbVar12[3] = pbVar12[3] ^ 0xe7;
    pbVar12[0xe] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xad;
    pbVar12[5] = pbVar12[5] ^ 0x3b;
    pbVar12[6] = pbVar12[6] ^ 0x41;
    pbVar12[7] = pbVar12[7] ^ 0x83;
    pbVar12[8] = pbVar12[8] ^ 0x3f;
    pbVar12[9] = pbVar12[9] ^ 0x33;
    pbVar12[10] = pbVar12[10] ^ 0x3b;
    pbVar12[0xb] = pbVar12[0xb] ^ 0xe7;
    pbVar12[0xc] = pbVar12[0xc] ^ 0xad;
    pbVar12[0xd] = pbVar12[0xd] ^ 0x3b;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4a8);
    *puVar16 = 0xe7721a17;
    *(undefined1 *)(puVar16 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbbdc,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4b8);
    *puVar17 = 1;
  }
  pbVar13 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4a8);
  if (pbVar13[4] != 0) {
    pbVar13[4] = 0;
    *pbVar13 = *pbVar13 ^ 0x3f;
    pbVar13[1] = pbVar13[1] ^ 0x33;
    pbVar13[2] = pbVar13[2] ^ 0x3b;
    pbVar13[3] = pbVar13[3] ^ 0xe7;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[6] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4d8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4c8);
    *puVar16 = 0x7b516c84;
    puVar16[1] = 0xda9c903d;
    puVar16[2] = 0x7b474ca3;
    *(undefined1 *)((int)puVar16 + 0xf) = 1;
    *(undefined4 *)((int)puVar16 + 0xb) = 0xcf883d7b;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbc00,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4d8);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4c8);
  if (pbVar12[0xf] != 0) {
    *pbVar12 = *pbVar12 ^ 0xd7;
    pbVar12[1] = pbVar12[1] ^ 9;
    pbVar12[2] = pbVar12[2] ^ 0x3f;
    pbVar12[3] = pbVar12[3] ^ 0xf;
    pbVar12[0xf] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x4f;
    pbVar12[5] = pbVar12[5] ^ 0xe9;
    pbVar12[6] = pbVar12[6] ^ 0xcf;
    pbVar12[7] = pbVar12[7] ^ 0xbf;
    pbVar12[8] = pbVar12[8] ^ 0xd7;
    pbVar12[9] = pbVar12[9] ^ 9;
    pbVar12[10] = pbVar12[10] ^ 0x3f;
    pbVar12[0xb] = pbVar12[0xb] ^ 0xf;
    pbVar12[0xc] = pbVar12[0xc] ^ 0x4f;
    pbVar12[0xd] = pbVar12[0xd] ^ 0xe9;
    pbVar12[0xe] = pbVar12[0xe] ^ 0xcf;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4f8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4e8);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_70085830;
    uVar9 = DAT_7008582c;
    uVar14 = DAT_70085828;
    uVar8 = DAT_70085824;
    *puVar16 = DAT_70085820;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_70085844;
    uVar9 = DAT_70085840;
    uVar14 = DAT_7008583c;
    uVar8 = DAT_70085838;
    puVar16[5] = DAT_70085834;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbc30,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb4f8);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb4e8);
  if (*(char *)(iVar11 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      bVar6 = (byte)(0xf3f09d7 >> iVar20) | (byte)(-0x403016b1 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar21 = iVar20 - 0x20;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xbfcfe94f >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x28) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  param_1[7] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb518);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb508);
    *(undefined1 *)((int)puVar16 + 0x12) = 1;
    uVar9 = DAT_70085854;
    uVar14 = DAT_70085850;
    uVar8 = DAT_7008584c;
    *puVar16 = DAT_70085848;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    *(undefined2 *)(puVar16 + 4) = DAT_70085858;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbc80,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb518);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb508);
  if (*(char *)(iVar11 + 0x12) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0x933d6703 >> iVar20) |
              (byte)(-0x369a9aff << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xc9656501 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x10 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x12) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb538);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb528);
    *(undefined1 *)((int)puVar16 + 0x16) = 1;
    uVar3 = DAT_70085870;
    uVar9 = DAT_7008586c;
    uVar14 = DAT_70085868;
    uVar8 = DAT_70085864;
    *puVar16 = DAT_70085860;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    *(undefined2 *)(puVar16 + 5) = DAT_70085874;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbcb4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb538);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb528);
  if (*(char *)(iVar20 + 0x16) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0x933d6703 >> iVar22) |
              (byte)(-0x369a9aff << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xc9656501 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x14 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x16) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[8] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb558);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb548);
    *(undefined1 *)((int)puVar16 + 0x1a) = 1;
    uVar4 = DAT_7008588c;
    uVar3 = DAT_70085888;
    uVar9 = DAT_70085884;
    uVar14 = DAT_70085880;
    uVar8 = DAT_7008587c;
    *puVar16 = DAT_70085878;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    puVar16[5] = uVar4;
    *(undefined2 *)(puVar16 + 6) = DAT_70085890;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbcec,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb558);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb548);
  if (*(char *)(iVar11 + 0x1a) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0xf9f30ff9 >> iVar20) | (byte)(0x196d2be5 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x196d2be5 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x18 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x1a) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb578);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb568);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_700858a8;
    uVar9 = DAT_700858a4;
    uVar14 = DAT_700858a0;
    uVar8 = DAT_7008589c;
    *puVar16 = DAT_70085898;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_700858bc;
    uVar9 = DAT_700858b8;
    uVar14 = DAT_700858b4;
    uVar8 = DAT_700858b0;
    puVar16[5] = DAT_700858ac;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbd28,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb578);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb568);
  if (*(char *)(iVar20 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0xf9f30ff9 >> iVar22) | (byte)(0x196d2be5 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x196d2be5 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x28) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[9] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb598);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb588);
    *(undefined1 *)((int)puVar16 + 0x19) = 1;
    uVar4 = DAT_700858d4;
    uVar3 = DAT_700858d0;
    uVar9 = DAT_700858cc;
    uVar14 = DAT_700858c8;
    uVar8 = DAT_700858c4;
    *puVar16 = DAT_700858c0;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    puVar16[5] = uVar4;
    *(undefined1 *)(puVar16 + 6) = DAT_700858d8;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbd78,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb598);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb588);
  if (*(char *)(iVar11 + 0x19) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0xcf27f13b >> iVar20) | (byte)(0x359d6f5d << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x359d6f5d >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x17 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x19) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5a8);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_700858f0;
    uVar9 = DAT_700858ec;
    uVar14 = DAT_700858e8;
    uVar8 = DAT_700858e4;
    *puVar16 = DAT_700858e0;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_70085904;
    uVar9 = DAT_70085900;
    uVar14 = DAT_700858fc;
    uVar8 = DAT_700858f8;
    puVar16[5] = DAT_700858f4;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbdb4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5b8);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb5a8);
  if (*(char *)(iVar20 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0xcf27f13b >> iVar22) | (byte)(0x359d6f5d << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x359d6f5d >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x28) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[10] = uVar8;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5d8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5c8);
    *(undefined1 *)((int)puVar16 + 0x19) = 1;
    uVar4 = DAT_7008591c;
    uVar3 = DAT_70085918;
    uVar9 = DAT_70085914;
    uVar14 = DAT_70085910;
    uVar8 = DAT_7008590c;
    *puVar16 = DAT_70085908;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    puVar16[5] = uVar4;
    *(undefined1 *)(puVar16 + 6) = DAT_70085920;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbe04,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5d8);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb5c8);
  if (*(char *)(iVar11 + 0x19) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      uVar21 = iVar20 - 0x20;
      bVar6 = (byte)(0x67e17d33 >> iVar20) |
              (byte)(-0x2ac46e71 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xd53b918f >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x17 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x19) = 0;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5f8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5e8);
    *(undefined1 *)(puVar16 + 10) = 1;
    uVar3 = DAT_70085938;
    uVar9 = DAT_70085934;
    uVar14 = DAT_70085930;
    uVar8 = DAT_7008592c;
    *puVar16 = DAT_70085928;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    puVar16[4] = uVar3;
    uVar3 = DAT_7008594c;
    uVar9 = DAT_70085948;
    uVar14 = DAT_70085944;
    uVar8 = DAT_70085940;
    puVar16[5] = DAT_7008593c;
    puVar16[6] = uVar8;
    puVar16[7] = uVar14;
    puVar16[8] = uVar9;
    puVar16[9] = uVar3;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbe40,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb5f8);
    *puVar17 = 1;
  }
  iVar20 = XcxSszXLPjQrEGhecEv_(&DAT_700fb5e8);
  if (*(char *)(iVar20 + 0x28) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar22 = (uVar15 & 7) * 8;
      uVar21 = iVar22 - 0x20;
      bVar6 = (byte)(0x67e17d33 >> iVar22) |
              (byte)(-0x2ac46e71 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0xd53b918f >> (uVar21 & 0xff));
      }
      *(byte *)(iVar20 + uVar15) = *(byte *)(iVar20 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x26 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar20 + 0x28) = 0;
  }
  uVar7 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,iVar11);
  param_1[0xb] = uVar7;
  uVar7 = (**(code **)(*param_2 + 0x7c))(param_2,param_3);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb618);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb608);
    *(undefined2 *)(puVar16 + 3) = 0x1e9;
    *puVar16 = 0x7f776aa2;
    puVar16[1] = 0xafcd48c;
    puVar16[2] = 0x5e666cb7;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbe90,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb618);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb608);
  if (pbVar12[0xd] != 0) {
    *pbVar12 = *pbVar12 ^ 0xc5;
    pbVar12[1] = pbVar12[1] ^ 0xf;
    pbVar12[2] = pbVar12[2] ^ 3;
    pbVar12[3] = pbVar12[3] ^ 0x2d;
    pbVar12[0xd] = 0;
    pbVar12[4] = pbVar12[4] ^ 0xe9;
    pbVar12[5] = pbVar12[5] ^ 0xa7;
    pbVar12[6] = pbVar12[6] ^ 0x93;
    pbVar12[7] = pbVar12[7] ^ 0x7f;
    pbVar12[8] = pbVar12[8] ^ 0xc5;
    pbVar12[9] = pbVar12[9] ^ 0xf;
    pbVar12[10] = pbVar12[10] ^ 3;
    pbVar12[0xb] = pbVar12[0xb] ^ 0x2d;
    pbVar12[0xc] = pbVar12[0xc] ^ 0xe9;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb638);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb628);
    *(undefined1 *)((int)puVar16 + 0x22) = 1;
    uVar9 = DAT_7008595c;
    uVar14 = DAT_70085958;
    uVar8 = DAT_70085954;
    *puVar16 = DAT_70085950;
    puVar16[1] = uVar8;
    puVar16[2] = uVar14;
    puVar16[3] = uVar9;
    uVar9 = DAT_7008596c;
    uVar14 = DAT_70085968;
    uVar8 = DAT_70085964;
    puVar16[4] = DAT_70085960;
    puVar16[5] = uVar8;
    puVar16[6] = uVar14;
    puVar16[7] = uVar9;
    *(undefined2 *)(puVar16 + 8) = DAT_70085970;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbec0,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb638);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb628);
  if (*(char *)(iVar11 + 0x22) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      bVar6 = (byte)(0x2d030fc5 >> iVar20) | (byte)(0x7f93a7e9 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar21 = iVar20 - 0x20;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x7f93a7e9 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x20 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x22) = 0;
  }
  uVar8 = (**(code **)(*param_2 + 0x84))(param_2,uVar7,pbVar12);
  uVar14 = FUN_717d6920(param_2,param_3,uVar8);
  uVar8 = (**(code **)(*param_2 + 0x7c))(param_2,uVar14);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb658);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb648);
    *puVar16 = 0x3c319ca6;
    puVar16[1] = 0x29a2ec14;
    *(undefined1 *)((int)puVar16 + 10) = 1;
    *(undefined2 *)(puVar16 + 2) = 0xf9b2;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbf10,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb658);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb648);
  if (pbVar12[10] != 0) {
    *pbVar12 = *pbVar12 ^ 0xc1;
    pbVar12[1] = pbVar12[1] ^ 0xf9;
    pbVar12[2] = pbVar12[2] ^ 0x45;
    pbVar12[3] = pbVar12[3] ^ 0x7d;
    pbVar12[10] = 0;
    pbVar12[4] = pbVar12[4] ^ 0x67;
    pbVar12[5] = pbVar12[5] ^ 0x9f;
    pbVar12[6] = pbVar12[6] ^ 199;
    pbVar12[7] = pbVar12[7] ^ 0x5d;
    pbVar12[8] = pbVar12[8] ^ 0xc1;
    pbVar12[9] = pbVar12[9] ^ 0xf9;
  }
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb678);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb668);
    *(undefined1 *)((int)puVar16 + 0x25) = 1;
    uVar4 = DAT_70085984;
    uVar3 = DAT_70085980;
    uVar9 = DAT_7008597c;
    *puVar16 = DAT_70085978;
    puVar16[1] = uVar9;
    puVar16[2] = uVar3;
    puVar16[3] = uVar4;
    uVar5 = DAT_70085998;
    uVar4 = DAT_70085994;
    uVar3 = DAT_70085990;
    uVar9 = DAT_7008598c;
    puVar16[4] = DAT_70085988;
    puVar16[5] = uVar9;
    puVar16[6] = uVar3;
    puVar16[7] = uVar4;
    puVar16[8] = uVar5;
    *(undefined1 *)(puVar16 + 9) = DAT_7008599c;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbf3c,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb678);
    *puVar17 = 1;
  }
  iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fb668);
  if (*(char *)(iVar11 + 0x25) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar20 = (uVar15 & 7) * 8;
      bVar6 = (byte)(0x7d45f9c1 >> iVar20) | (byte)(0x5dc79f67 << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar21 = iVar20 - 0x20;
      if (-1 < (int)uVar21) {
        bVar6 = (byte)(0x5dc79f67 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar6;
      bVar23 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x23 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar23;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x25) = 0;
  }
  uVar9 = (**(code **)(*param_2 + 0x84))(param_2,uVar8,pbVar12);
  uVar9 = FUN_717d6920(param_2,uVar14,uVar9);
  uVar9 = (**(code **)(*param_2 + 0x54))(param_2,uVar9);
  uVar9 = imp_AAssetManager_fromJava(param_2,uVar9);
  param_1[2] = uVar9;
  (**(code **)(*param_2 + 0x5c))(param_2,uVar14);
  (**(code **)(*param_2 + 0x5c))(param_2,uVar7);
  (**(code **)(*param_2 + 0x5c))(param_2,uVar8);
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb698);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb688);
    *puVar16 = 0x1cf8d64;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbf8c,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb698);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb688);
  if (pbVar12[3] != 0) {
    pbVar12[3] = 0;
    *pbVar12 = *pbVar12 ^ 9;
    pbVar12[1] = pbVar12[1] ^ 0xf9;
    pbVar12[2] = pbVar12[2] ^ 0xcf;
  }
  uVar15 = imp_strlen(pbVar12);
  if (0xfffffff7 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar15 < 0xb) {
    uVar18 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar15 << 1));
    if (uVar15 == 0) goto LAB_717d7f00;
  }
  else {
    uVar18 = thunk_MwhHq((uVar15 | 7) + 1);
    uStack_30 = (uVar15 | 7) + 2;
    uStack_2c = uVar15;
    uStack_28 = uVar18;
  }
  imp___aeabi_memmove(uVar18,pbVar12,uVar15);
LAB_717d7f00:
  *(undefined1 *)(uVar18 + uVar15) = 0;
  pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6b8);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6a8);
    *puVar16 = 0xc4634870;
    *(undefined2 *)(puVar16 + 1) = 0x16d;
    GFDIUClbc_QcPNgD_wH(&LAB_717dbfb4,puVar16,&DAT_70b0e000);
    puVar17 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6b8);
    *puVar17 = 1;
  }
  pbVar12 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6a8);
  uVar15 = uStack_30;
  if (pbVar12[5] != 0) {
    pbVar12[5] = 0;
    *pbVar12 = *pbVar12 ^ 0x5d;
    pbVar12[1] = pbVar12[1] ^ 0x3d;
    pbVar12[2] = pbVar12[2] ^ 0xd;
    pbVar12[3] = pbVar12[3] ^ 0xaf;
    pbVar12[4] = pbVar12[4] ^ 0x6d;
  }
  uVar18 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    uVar18 = uStack_30 >> 1 & 0x7f;
  }
  iVar11 = imp_strlen(pbVar12);
  uStack_3c = uVar18 + iVar11;
  if (0xfffffff7 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uStack_3c < 0xb) {
    uStack_40 = (uint)(byte)((char)uStack_3c * '\x02');
    uStack_38 = 0;
    uVar21 = 0;
    uStack_3c = 0;
  }
  else {
    uStack_38 = thunk_MwhHq((uStack_3c | 7) + 1);
    uStack_40 = (uStack_3c | 7) + 2;
    uVar21 = uStack_40 & 0xff;
  }
  uVar19 = uStack_38;
  if ((uVar21 & 1) == 0) {
    uVar19 = (uint)&uStack_40 | 1;
  }
  if (uVar18 != 0) {
    uVar21 = uStack_28;
    if ((uVar15 & 1) == 0) {
      uVar21 = (uint)&uStack_30 | 1;
    }
    imp___aeabi_memmove(uVar19,uVar21,uVar18);
  }
  if (iVar11 != 0) {
    imp___aeabi_memmove(uVar19 + uVar18,pbVar12,iVar11);
  }
  *(undefined1 *)(uVar19 + uVar18 + iVar11) = 0;
  if ((DAT_71201860 & 1) != 0) {
    qNQrlu(DAT_71201868);
  }
  DAT_71201860 = uStack_40;
  DAT_71201864 = uStack_3c;
  DAT_71201868 = uStack_38;
  if ((uVar15 & 1) != 0) {
    qNQrlu(uStack_28);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_717dade0
// Entry: 0x717dade0 | Size: 56 bytes
// =========================================================================

void FUN_717dade0(int *param_1)

{
  (**(code **)(*param_1 + 200))();
  return;
}


// =========================================================================
// Function: FUN_717dae30
// Entry: 0x717dae30 | Size: 84 bytes
// =========================================================================

bool FUN_717dae30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_717d1dc8();
  if (iVar1 != 0) {
    iVar1 = FUN_717daebc(iVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    return iVar1 == 1;
  }
  return false;
}


// =========================================================================
// Function: FUN_717daebc
// Entry: 0x717daebc | Size: 56 bytes
// =========================================================================

void FUN_717daebc(int *param_1)

{
  (**(code **)(*param_1 + 0x98))();
  return;
}


// =========================================================================
// Function: FUN_717daf0c
// Entry: 0x717daf0c | Size: 64 bytes
// =========================================================================

void FUN_717daf0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_717d1dc8();
  if (iVar1 != 0) {
    FUN_717daebc(iVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717daf88
// Entry: 0x717daf88 | Size: 236 bytes
// =========================================================================

bool FUN_717daf88(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  DataMemoryBarrier(0xb);
  DAT_711ad154 = DAT_711ad14c;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  DAT_711ad158 = DAT_711ad150;
  DataMemoryBarrier(0xb);
  DAT_711ad14c = 0;
  DAT_711ad150 = 0;
  iVar1 = FUN_717d1dc8();
  if (iVar1 != 0) {
    iVar1 = FUN_717daebc(iVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_717db1d0
// Entry: 0x717db1d0 | Size: 4 bytes
// =========================================================================

void FUN_717db1d0(void)

{
  return;
}


// =========================================================================
// Function: FUN_717db1ec
// Entry: 0x717db1ec | Size: 188 bytes
// =========================================================================

void FUN_717db1ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_717d1dc8();
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x29c))(piVar3,param_2);
    uVar2 = (**(code **)(*piVar3 + 0x29c))(piVar3,param_3);
    FUN_717db2e0(piVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x1c),uVar1,uVar2);
    (**(code **)(*piVar3 + 0x5c))(piVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x717db284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x5c))(piVar3,uVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717db2e0
// Entry: 0x717db2e0 | Size: 56 bytes
// =========================================================================

void FUN_717db2e0(int *param_1)

{
  (**(code **)(*param_1 + 0xf8))();
  return;
}


// =========================================================================
// Function: FUN_717db330
// Entry: 0x717db330 | Size: 124 bytes
// =========================================================================

void FUN_717db330(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_717d1dc8();
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 0x29c))(piVar2,param_2);
    FUN_717db2e0(piVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x20),uVar1);
                    /* WARNING: Could not recover jumptable at 0x717db38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x5c))(piVar2,uVar1);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717db3e4
// Entry: 0x717db3e4 | Size: 188 bytes
// =========================================================================

void FUN_717db3e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_717d1dc8();
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x29c))(piVar3,param_2);
    uVar2 = (**(code **)(*piVar3 + 0x29c))(piVar3,param_3);
    FUN_717db2e0(piVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x24),uVar1,uVar2);
    (**(code **)(*piVar3 + 0x5c))(piVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x717db47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x5c))(piVar3,uVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_717dc030
// Entry: 0x717dc030 | Size: 280 bytes
// =========================================================================

int * FUN_717dc030(int param_1,undefined4 *param_2,byte *param_3)

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
        if (bVar1) goto LAB_717dc11c;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_717dc11c;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_717dc11c:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_717dc420
// Entry: 0x717dc420 | Size: 56 bytes
// =========================================================================

undefined4 * FUN_717dc420(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(param_1 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_717dc48c
// Entry: 0x717dc48c | Size: 68 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717dc48c(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_34;
  undefined1 auStack_2d [9];
  int iStack_24;
  
  param_2 = param_2 - param_1;
  iStack_24 = _ext___stack_chk_guard;
  if (param_2 == 8 || param_2 == 6) {
    imp___strncpy_chk(auStack_2d,param_1,param_2,9);
    auStack_2d[param_2] = 0;
    uStack_34 = 0;
    iVar2 = imp_sscanf(auStack_2d,&DAT_70063e60,&uStack_34);
    uVar1 = uStack_34;
    if (0 < iVar2) {
      uVar3 = FUN_71ba1e0c((uStack_34 & 0xffffff) >> 0x10);
      uVar3 = FUN_71ba13e0(uVar3,0x437f0000);
      *param_3 = uVar3;
      uVar3 = FUN_71ba1e0c(uVar1 & 0xff);
      uVar3 = FUN_71ba13e0(uVar3,0x437f0000);
      param_3[2] = uVar3;
      uVar3 = FUN_71ba1e0c((uVar1 & 0xffff) >> 8);
      uVar3 = FUN_71ba13e0(uVar3,0x437f0000);
      param_3[1] = uVar3;
      uVar3 = FUN_71ba1e0c(uVar1 >> 0x18);
      uVar3 = FUN_71ba13e0(uVar3,0x437f0000);
      if (param_2 != 8) {
        uVar3 = 0x3f800000;
      }
      param_3[3] = uVar3;
    }
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_24);
}


// =========================================================================
// Function: FUN_717dc75c
// Entry: 0x717dc75c | Size: 196 bytes
// =========================================================================

undefined4 FUN_717dc75c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = imp_strlen(param_1);
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    iVar4 = 0;
    uVar5 = 0;
    do {
      if ((*(char *)(param_1 + iVar4) == '{') && (iVar4 + 7 < iVar1)) {
        pcVar3 = (char *)(param_1 + iVar4 + 7);
        if (*pcVar3 == '}') {
          uStack_2c = 0;
          uStack_30 = 0;
          uStack_34 = 0;
          uStack_38 = 0;
          iVar2 = FUN_717dc48c(param_1 + iVar4 + 1,pcVar3,&uStack_38);
          if (iVar2 != 0) {
            uVar5 = 1;
            *param_2 = uStack_38;
            param_2[1] = uStack_34;
            param_2[2] = uStack_30;
            param_2[3] = uStack_2c;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return uVar5;
}


// =========================================================================
// Function: FUN_717dc878
// Entry: 0x717dc878 | Size: 388 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717dc878(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_838;
  undefined4 uStack_834;
  char acStack_82d [2049];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar2 = imp_strlen(param_2);
    iVar6 = 0;
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        cVar1 = *(char *)(param_2 + uVar5);
        if (cVar1 == '\0') break;
        uVar4 = uVar5 + 7;
        if (uVar4 < uVar2) {
          if (cVar1 == '{') {
            uVar2 = (uint)*(byte *)(param_2 + uVar4);
          }
          if (cVar1 != '{' || uVar2 != 0x7d) goto LAB_717dc8d4;
        }
        else {
LAB_717dc8d4:
          acStack_82d[iVar6] = cVar1;
          iVar6 = iVar6 + 1;
          uVar4 = uVar5;
        }
        uVar5 = uVar4 + 1;
        uVar2 = imp_strlen(param_2);
      } while (uVar5 < uVar2);
    }
    *param_1 = 0;
    acStack_82d[iVar6] = '\0';
    param_1[1] = 0;
    iVar6 = FUN_71ba2cf0(param_3,0);
    if (iVar6 == 0) {
      FUN_719083a4(&uStack_838,*(undefined4 *)(DAT_711e9ee4 + 0x20),param_3,0x7f7fffff,0xbf800000,
                   acStack_82d,0,0);
      *param_1 = uStack_838;
      param_1[1] = uStack_834;
      FUN_71ba0b38(uStack_838,0x3f733333);
      FUN_71ba17bc();
      uVar3 = FUN_71ba1b94();
      *param_1 = uVar3;
    }
    else {
      FUN_718cc4ac(param_1,acStack_82d,0,0,0xbf800000);
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717dcb70
// Entry: 0x717dcb70 | Size: 752 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_717dcb70(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 auStack_1050 [2];
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  char acStack_102c [4095];
  undefined1 uStack_2d;
  int iStack_2c;
  
  uStack_1034 = param_9;
  uStack_1038 = param_8;
  uStack_103c = param_7;
  uStack_1040 = param_6;
  iStack_2c = _ext___stack_chk_guard;
  uStack_1044 = param_5;
  uStack_1048 = param_4;
  imp___strcpy_chk(acStack_102c,param_10,0x1000);
  uStack_2d = 0;
  pcVar7 = acStack_102c;
  pcVar4 = acStack_102c;
  iVar8 = 0;
  do {
    iVar5 = DAT_711e9ee4;
    cVar2 = acStack_102c[iVar8];
    if (cVar2 == '\n') {
      uVar6 = FUN_718c91a0(&uStack_1040);
      FUN_71651ec0(iVar5,&uStack_1048,uVar6,param_3 != 0,pcVar4,pcVar7,param_2,param_1,1);
      uStack_1044 = FUN_71ba0b38(uStack_1044,param_2);
      uStack_1048 = param_4;
LAB_717dcc10:
      pcVar4 = pcVar7 + 1;
    }
    else {
      if (cVar2 == '{') {
        if (pcVar7 != pcVar4) {
          uVar6 = FUN_718c91a0(&uStack_1040);
          FUN_71651ec0(iVar5,&uStack_1048,uVar6,param_3 != 0,pcVar4,pcVar7,param_2,param_1,1);
          FUN_718ead58(auStack_1050,*(undefined4 *)(DAT_711e9ee4 + 0x20),param_2,pcVar4,pcVar7,0,
                       0xbf800000);
          uStack_1048 = FUN_71ba0b38(auStack_1050[0],uStack_1048);
        }
        pcVar4 = pcVar7 + 1;
        iVar5 = iVar8;
        do {
          iVar8 = iVar5 + 1;
          iVar3 = iVar5 + 1;
          iVar5 = iVar8;
        } while (acStack_102c[iVar3] != '}' && acStack_102c[iVar3] != '\0');
        pcVar7 = acStack_102c + iVar8;
        uStack_1054 = 0;
        uStack_1058 = 0;
        uStack_105c = 0;
        uStack_1060 = 0;
        iVar5 = FUN_717dc48c(pcVar4,pcVar7,&uStack_1060);
        if (iVar5 != 0) {
          uStack_1040 = uStack_1060;
          uStack_103c = uStack_105c;
          uStack_1038 = uStack_1058;
          uStack_1034 = uStack_1054;
        }
        goto LAB_717dcc10;
      }
      if (cVar2 == '\0') break;
    }
    pcVar7 = acStack_102c + iVar8 + 1;
    bVar1 = iVar8 < 0xfff;
    iVar8 = iVar8 + 1;
  } while (bVar1);
  iVar8 = DAT_711e9ee4;
  if (pcVar7 != pcVar4) {
    uVar6 = FUN_718c91a0(&uStack_1040);
    FUN_71651ec0(iVar8,&uStack_1048,uVar6,param_3 != 0,pcVar4,pcVar7,param_2,param_1,1);
    FUN_718ead58(auStack_1050,*(undefined4 *)(DAT_711e9ee4 + 0x20),param_2,pcVar4,pcVar7,0,
                 0xbf800000);
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_717dd084
// Entry: 0x717dd084 | Size: 64 bytes
// =========================================================================

void FUN_717dd084(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_7120188c = param_2;
  DAT_7120187c = param_1;
  DAT_71201888 = param_2;
  DAT_71201884 = param_3;
  DAT_71201880 = param_3;
  return;
}


// =========================================================================
// Function: UlJmrwhUwfbWDiKSsHDG
// Entry: 0x717dd17c | Size: 268 bytes
// =========================================================================

void UlJmrwhUwfbWDiKSsHDG(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte abStack_38 [4];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar1 = imp_strlen();
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar1 < 0xb) {
    uVar2 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_717dd1f4;
  }
  else {
    uVar2 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_2c = (uVar1 | 7) + 2;
    uStack_28 = uVar1;
    uStack_24 = uVar2;
  }
  imp___aeabi_memcpy(uVar2,param_1,uVar1);
LAB_717dd1f4:
  *(undefined1 *)(uVar2 + uVar1) = 0;
  FUN_717dd39c(abStack_38,&uStack_2c);
  uVar1 = uStack_34;
  if ((abStack_38[0] & 1) == 0) {
    uVar1 = (uint)(abStack_38[0] >> 1);
  }
  if (0x3f < (int)uVar1) {
    imp_raise(5);
  }
  uVar2 = uStack_30;
  if ((abStack_38[0] & 1) == 0) {
    uVar2 = (uint)abStack_38 | 1;
  }
  imp___aeabi_memcpy(param_2,uVar2,uVar1);
  *(undefined1 *)(param_2 + uVar1) = 0;
  if ((abStack_38[0] & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return;
}


// =========================================================================
// Function: FUN_717dd39c
// Entry: 0x717dd39c | Size: 12188 bytes
// =========================================================================
// Decompile failed: 
Low-level Error: Overlapping input varnodes

// =========================================================================
// Function: FUN_717e07c0
// Entry: 0x717e07c0 | Size: 584 bytes
// =========================================================================

uint FUN_717e07c0(int param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,int param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  uVar16 = (uint)((ulonglong)param_2 * 0x85ebca87);
  iVar12 = 0;
  puVar5 = (uint *)(param_3 + 0xb);
  uVar15 = param_2 * -0x61c8864f + (int)((ulonglong)param_2 * 0x85ebca87 >> 0x20);
  do {
    puVar13 = (uint *)(param_3 + iVar12);
    puVar6 = (uint *)(param_1 + iVar12);
    iVar12 = iVar12 + 0x10;
    uVar9 = *puVar13 + param_5 ^ *puVar6;
    uVar10 = puVar13[1] + param_6 + (uint)CARRY4(*puVar13,param_5) ^ puVar6[1];
    uVar8 = puVar13[2] - param_5 ^ puVar6[2];
    uVar3 = (ulonglong)uVar9 * (ulonglong)uVar8;
    uVar7 = puVar13[3] - (param_6 + (uint)(puVar13[2] < param_5)) ^ puVar6[3];
    uVar4 = (ulonglong)uVar10 * (ulonglong)uVar8;
    uVar1 = (ulonglong)uVar7 * (ulonglong)uVar9 + (uVar4 & 0xffffffff) + (uVar3 >> 0x20);
    lVar2 = (ulonglong)uVar7 * (ulonglong)uVar10 + (uVar4 >> 0x20) + (uVar1 >> 0x20);
    uVar7 = (uint)uVar3 ^ (uint)lVar2;
    bVar17 = CARRY4(uVar7,uVar16);
    uVar16 = uVar7 + uVar16;
    uVar15 = ((uint)uVar1 ^ (uint)((ulonglong)lVar2 >> 0x20)) + uVar15 + (uint)bVar17;
  } while (iVar12 != 0x80);
  iVar12 = param_1 + param_2;
  uVar10 = *(uint *)(param_3 + 0x77) + param_5 ^ *(uint *)(iVar12 + -0x10);
  uVar7 = *(int *)(param_3 + 0x7b) + param_6 + (uint)CARRY4(*(uint *)(param_3 + 0x77),param_5) ^
          *(uint *)(iVar12 + -0xc);
  uVar8 = *(uint *)(param_3 + 0x7f) - param_5 ^ *(uint *)(iVar12 + -8);
  uVar3 = (ulonglong)uVar10 * (ulonglong)uVar8;
  uVar9 = *(int *)(param_3 + 0x83) - (param_6 + (uint)(*(uint *)(param_3 + 0x7f) < param_5)) ^
          *(uint *)(iVar12 + -4);
  uVar4 = (ulonglong)uVar7 * (ulonglong)uVar8;
  uVar1 = (ulonglong)uVar9 * (ulonglong)uVar10 + (uVar4 & 0xffffffff) + (uVar3 >> 0x20);
  lVar2 = (ulonglong)uVar9 * (ulonglong)uVar7 + (uVar4 >> 0x20) + (uVar1 >> 0x20);
  uVar7 = (uint)uVar3 ^ (uint)lVar2;
  uVar16 = uVar16 ^ uVar15 >> 5;
  uVar8 = (uint)uVar1 ^ (uint)((ulonglong)lVar2 >> 0x20);
  lVar2 = (ulonglong)uVar16 * 0x9e3779f9;
  uVar15 = uVar15 * -0x61c88607 + uVar16 * 0x16566791 + (int)((ulonglong)lVar2 >> 0x20);
  uVar16 = uVar15 ^ (uint)lVar2;
  if (0x8f < param_2) {
    iVar12 = (param_2 >> 4) - 8;
    puVar6 = (uint *)(param_1 + 0x80);
    do {
      uVar9 = puVar5[-2] + param_5 ^ *puVar6;
      uVar10 = puVar5[-1] + param_6 + (uint)CARRY4(puVar5[-2],param_5) ^ puVar6[1];
      uVar14 = *puVar5 - param_5 ^ puVar6[2];
      uVar3 = (ulonglong)uVar9 * (ulonglong)uVar14;
      uVar11 = puVar5[1] - (param_6 + (uint)(*puVar5 < param_5)) ^ puVar6[3];
      puVar6 = puVar6 + 4;
      uVar4 = (ulonglong)uVar10 * (ulonglong)uVar14;
      puVar5 = puVar5 + 4;
      uVar1 = (ulonglong)uVar11 * (ulonglong)uVar9 + (uVar4 & 0xffffffff) + (uVar3 >> 0x20);
      lVar2 = (ulonglong)uVar11 * (ulonglong)uVar10 + (uVar4 >> 0x20) + (uVar1 >> 0x20);
      uVar9 = (uint)uVar3 ^ (uint)lVar2;
      bVar17 = CARRY4(uVar9,uVar7);
      uVar7 = uVar9 + uVar7;
      uVar8 = ((uint)uVar1 ^ (uint)((ulonglong)lVar2 >> 0x20)) + uVar8 + (uint)bVar17;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  uVar15 = uVar15 + uVar8 + (uint)CARRY4(uVar16,uVar7);
  uVar16 = uVar16 + uVar7 ^ uVar15 >> 5;
  lVar2 = (ulonglong)uVar16 * 0x9e3779f9;
  return uVar15 * -0x61c88607 + uVar16 * 0x16566791 + (int)((ulonglong)lVar2 >> 0x20) ^ (uint)lVar2;
}


// =========================================================================
// Function: FUN_717e0a20
// Entry: 0x717e0a20 | Size: 712 bytes
// =========================================================================

void FUN_717e0a20(int *param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  pbVar1 = (byte *)imp_strsignal(param_2);
  if (pbVar1 == (byte *)0x0) {
    pcVar2 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fb704);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6f4);
      *puVar4 = 0xb1526772;
      puVar4[1] = 0xbd519400;
      puVar4[2] = 0xb15e6054;
      *(undefined1 *)((int)puVar4 + 0xf) = 1;
      *(undefined4 *)((int)puVar4 + 0xb) = 0x3f8f0eb1;
      GFDIUClbc_QcPNgD_wH(&LAB_717ef7ac,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fb704);
      *puVar5 = 1;
    }
    pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fb6f4);
    if (pbVar1[0xf] != 0) {
      *pbVar1 = *pbVar1 ^ 0x27;
      pbVar1[1] = pbVar1[1] ^ 9;
      pbVar1[2] = pbVar1[2] ^ 0x39;
      pbVar1[3] = pbVar1[3] ^ 0xdf;
      pbVar1[0xf] = 0;
      pbVar1[4] = pbVar1[4] ^ 0x6f;
      pbVar1[5] = pbVar1[5] ^ 0xe3;
      pbVar1[6] = pbVar1[6] ^ 0x3f;
      pbVar1[7] = pbVar1[7] ^ 0x9d;
      pbVar1[8] = pbVar1[8] ^ 0x27;
      pbVar1[9] = pbVar1[9] ^ 9;
      pbVar1[10] = pbVar1[10] ^ 0x39;
      pbVar1[0xb] = pbVar1[0xb] ^ 0xdf;
      pbVar1[0xc] = pbVar1[0xc] ^ 0x6f;
      pbVar1[0xd] = pbVar1[0xd] ^ 0xe3;
      pbVar1[0xe] = pbVar1[0xe] ^ 0x3f;
    }
  }
  uVar3 = imp_strlen(pbVar1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar3 < 0xb) {
    puVar5 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar3 << 1);
    if (uVar3 == 0) goto LAB_717e0b94;
  }
  else {
    puVar5 = (undefined1 *)thunk_MwhHq((uVar3 | 7) + 1);
    *param_1 = (uVar3 | 7) + 2;
    param_1[1] = uVar3;
    param_1[2] = (int)puVar5;
  }
  imp___aeabi_memmove(puVar5,pbVar1,uVar3);
LAB_717e0b94:
  puVar5[uVar3] = 0;
  return;
}


// =========================================================================
// Function: FUN_717e0e04
// Entry: 0x717e0e04 | Size: 19500 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 717e0e04: process: timeout


// =========================================================================
// Function: FUN_717e7bf4
// Entry: 0x717e7bf4 | Size: 3740 bytes
// =========================================================================

void FUN_717e7bf4(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  
  switch(*param_1) {
  case 4:
  case 5:
  case 7:
  case 8:
  case 0xb:
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbca4);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbc94);
      *(undefined1 *)((int)puVar12 + 0x15) = 1;
      uVar6 = DAT_70085fe8;
      uVar5 = DAT_70085fe4;
      uVar4 = DAT_70085fe0;
      uVar3 = DAT_70085fdc;
      *puVar12 = DAT_70085fd8;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      *(undefined1 *)(puVar12 + 5) = DAT_70085fec;
      GFDIUClbc_QcPNgD_wH(&LAB_717f0364,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbca4);
      *puVar13 = 1;
    }
    pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fbc94);
    if (pbVar9[0x15] == 0) goto LAB_717e7d20;
    uVar15 = 0;
    uVar16 = 0;
    do {
      iVar11 = (uVar15 & 7) * 8;
      uVar18 = iVar11 - 0x20;
      bVar14 = (byte)(0xafbbe305 >> iVar11) |
               (byte)(-0x123e1871 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar18) {
        bVar14 = (byte)(0xedc1e78f >> (uVar18 & 0xff));
      }
      pbVar9[uVar15] = pbVar9[uVar15] ^ bVar14;
      bVar19 = 0xfffffffe < uVar15;
      bVar1 = uVar16 == 0;
      bVar2 = (0x13 < uVar15) <= uVar16;
      uVar15 = uVar15 + 1;
      uVar16 = uVar16 + bVar19;
    } while (bVar1 && bVar2);
    break;
  default:
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd84);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd74);
      *(undefined1 *)(puVar12 + 0xc) = 1;
      uVar7 = DAT_70086054;
      uVar6 = DAT_70086050;
      uVar5 = DAT_7008604c;
      uVar4 = DAT_70086048;
      uVar3 = DAT_70086044;
      *puVar12 = DAT_70086040;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      uVar7 = DAT_7008606c;
      uVar6 = DAT_70086068;
      uVar5 = DAT_70086064;
      uVar4 = DAT_70086060;
      uVar3 = DAT_7008605c;
      puVar12[6] = DAT_70086058;
      puVar12[7] = uVar3;
      puVar12[8] = uVar4;
      puVar12[9] = uVar5;
      puVar12[10] = uVar6;
      puVar12[0xb] = uVar7;
      GFDIUClbc_QcPNgD_wH(&LAB_717f043c,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd84);
      *puVar13 = 1;
    }
    iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fbd74);
    if (*(char *)(iVar11 + 0x30) != '\0') {
      uVar15 = 0;
      uVar16 = 0;
      do {
        iVar17 = (uVar15 & 7) * 8;
        uVar18 = iVar17 - 0x20;
        bVar14 = (byte)(0xd3739db3 >> iVar17) |
                 (byte)(0x3fa781a3 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar14 = (byte)(0x3fa781a3 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar14;
        bVar19 = 0xfffffffe < uVar15;
        bVar1 = uVar16 == 0;
        bVar2 = (0x2e < uVar15) <= uVar16;
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + bVar19;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar11 + 0x30) = 0;
    }
    FUN_7188543c();
    return;
  case 0x11:
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcc4);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcb4);
      *(undefined1 *)(puVar12 + 4) = 1;
      *puVar12 = 0x8f2ca3ba;
      puVar12[1] = 0xb44d6ef;
      puVar12[2] = 0xd90182a9;
      puVar12[3] = 0x2b53d4ab;
      GFDIUClbc_QcPNgD_wH(&LAB_717c7f68,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcc4);
      *puVar13 = 1;
    }
    pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcb4);
    if (pbVar9[0x10] != 0) {
      *pbVar9 = *pbVar9 ^ 0xf9;
      pbVar9[1] = pbVar9[1] ^ 0xcb;
      pbVar9[2] = pbVar9[2] ^ 0x45;
      pbVar9[3] = pbVar9[3] ^ 0xe3;
      pbVar9[0x10] = 0;
      pbVar9[4] = pbVar9[4] ^ 0x8b;
      pbVar9[5] = pbVar9[5] ^ 0xf1;
      pbVar9[6] = pbVar9[6] ^ 0x37;
      pbVar9[7] = pbVar9[7] ^ 0x2b;
      pbVar9[8] = pbVar9[8] ^ 0xf9;
      pbVar9[9] = pbVar9[9] ^ 0xcb;
      pbVar9[10] = pbVar9[10] ^ 0x45;
      pbVar9[0xb] = pbVar9[0xb] ^ 0xe3;
      pbVar9[0xc] = pbVar9[0xc] ^ 0x8b;
      pbVar9[0xd] = pbVar9[0xd] ^ 0xf1;
      pbVar9[0xe] = pbVar9[0xe] ^ 0x37;
      pbVar9[0xf] = pbVar9[0xf] ^ 0x2b;
    }
    FUN_7188543c(pbVar9,param_1[3]);
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbce4);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcd4);
      *(undefined1 *)(puVar12 + 4) = 1;
      *puVar12 = 0x6500b986;
      puVar12[1] = 0x5f7a4201;
      puVar12[2] = 0x332d9890;
      puVar12[3] = 0x7f6d4045;
      GFDIUClbc_QcPNgD_wH(&LAB_717f039c,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbce4);
      *puVar13 = 1;
    }
    pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcd4);
    if (pbVar9[0x10] != 0) {
      *pbVar9 = *pbVar9 ^ 0xc5;
      pbVar9[1] = pbVar9[1] ^ 0xd1;
      pbVar9[2] = pbVar9[2] ^ 0x69;
      pbVar9[3] = pbVar9[3] ^ 9;
      pbVar9[0x10] = 0;
      pbVar9[4] = pbVar9[4] ^ 0x65;
      pbVar9[5] = pbVar9[5] ^ 0x65;
      pbVar9[6] = pbVar9[6] ^ 9;
      pbVar9[7] = pbVar9[7] ^ 0x7f;
      pbVar9[8] = pbVar9[8] ^ 0xc5;
      pbVar9[9] = pbVar9[9] ^ 0xd1;
      pbVar9[10] = pbVar9[10] ^ 0x69;
      pbVar9[0xb] = pbVar9[0xb] ^ 9;
      pbVar9[0xc] = pbVar9[0xc] ^ 0x65;
      pbVar9[0xd] = pbVar9[0xd] ^ 0x65;
      pbVar9[0xe] = pbVar9[0xe] ^ 9;
      pbVar9[0xf] = pbVar9[0xf] ^ 0x7f;
    }
    FUN_7188543c(pbVar9,param_1[4]);
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd04);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbcf4);
      *(undefined1 *)(puVar12 + 6) = 1;
      uVar7 = DAT_70086004;
      uVar6 = DAT_70086000;
      uVar5 = DAT_70085ffc;
      uVar4 = DAT_70085ff8;
      uVar3 = DAT_70085ff4;
      *puVar12 = DAT_70085ff0;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      GFDIUClbc_QcPNgD_wH(&LAB_717f03cc,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd04);
      *puVar13 = 1;
    }
    iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fbcf4);
    if (*(char *)(iVar11 + 0x18) != '\0') {
      uVar15 = 0;
      uVar16 = 0;
      do {
        iVar17 = (uVar15 & 7) * 8;
        uVar18 = iVar17 - 0x20;
        bVar14 = (byte)(0x71ffd95b >> iVar17) |
                 (byte)(0x1ff1a10b << ((uVar15 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar14 = (byte)(0x1ff1a10b >> (uVar18 & 0xff));
        }
        *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar14;
        bVar19 = 0xfffffffe < uVar15;
        bVar1 = uVar16 == 0;
        bVar2 = (0x16 < uVar15) <= uVar16;
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + bVar19;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar11 + 0x18) = 0;
    }
    FUN_7188543c(iVar11,param_1[5]);
    return;
  case 0x1d:
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd24);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd14);
      *(undefined1 *)(puVar12 + 4) = 1;
      *puVar12 = 0xb99b8a51;
      puVar12[1] = 0xe2a7c2ad;
      puVar12[2] = 0xfdcf9f7d;
      puVar12[3] = 0x87b5cba8;
      GFDIUClbc_QcPNgD_wH(&LAB_713385ec,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd24);
      *puVar13 = 1;
    }
    pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd14);
    if (pbVar9[0x10] != 0) {
      *pbVar9 = *pbVar9 ^ 0x13;
      pbVar9[1] = pbVar9[1] ^ 0xeb;
      pbVar9[2] = pbVar9[2] ^ 0xf5;
      pbVar9[3] = pbVar9[3] ^ 0xdd;
      pbVar9[0x10] = 0;
      pbVar9[4] = pbVar9[4] ^ 0x8d;
      pbVar9[5] = pbVar9[5] ^ 0xa7;
      pbVar9[6] = pbVar9[6] ^ 0xd1;
      pbVar9[7] = pbVar9[7] ^ 0x87;
      pbVar9[8] = pbVar9[8] ^ 0x13;
      pbVar9[9] = pbVar9[9] ^ 0xeb;
      pbVar9[10] = pbVar9[10] ^ 0xf5;
      pbVar9[0xb] = pbVar9[0xb] ^ 0xdd;
      pbVar9[0xc] = pbVar9[0xc] ^ 0x8d;
      pbVar9[0xd] = pbVar9[0xd] ^ 0xa7;
      pbVar9[0xe] = pbVar9[0xe] ^ 0xd1;
      pbVar9[0xf] = pbVar9[0xf] ^ 0x87;
    }
    goto LAB_717e7d20;
  case 0x1f:
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd44);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd34);
      *(undefined1 *)((int)puVar12 + 0x1b) = 1;
      uVar7 = DAT_7008601c;
      uVar6 = DAT_70086018;
      uVar5 = DAT_70086014;
      uVar4 = DAT_70086010;
      uVar3 = DAT_7008600c;
      *puVar12 = DAT_70086008;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      puVar12[5] = uVar7;
      uVar8 = DAT_70086022;
      *(undefined2 *)(puVar12 + 6) = DAT_70086020;
      *(undefined1 *)((int)puVar12 + 0x1a) = uVar8;
      GFDIUClbc_QcPNgD_wH(&LAB_71432918,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd44);
      *puVar13 = 1;
    }
    iVar11 = XcxSszXLPjQrEGhecEv_(&DAT_700fbd34);
    if (*(char *)(iVar11 + 0x1b) != '\0') {
      uVar15 = 0;
      uVar16 = 0;
      do {
        iVar17 = (uVar15 & 7) * 8;
        uVar18 = iVar17 - 0x20;
        bVar14 = (byte)(0x85990b51 >> iVar17) |
                 (byte)(-0x140af4e7 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar18) {
          bVar14 = (byte)(0xebf50b19 >> (uVar18 & 0xff));
        }
        *(byte *)(iVar11 + uVar15) = *(byte *)(iVar11 + uVar15) ^ bVar14;
        bVar19 = 0xfffffffe < uVar15;
        bVar1 = uVar16 == 0;
        bVar2 = (0x19 < uVar15) <= uVar16;
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + bVar19;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar11 + 0x1b) = 0;
    }
    FUN_7188543c(iVar11,param_1[4]);
    pcVar10 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd64);
    if (*pcVar10 == '\0') {
      puVar12 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd54);
      *(undefined1 *)((int)puVar12 + 0x15) = 1;
      uVar6 = DAT_70086038;
      uVar5 = DAT_70086034;
      uVar4 = DAT_70086030;
      uVar3 = DAT_7008602c;
      *puVar12 = DAT_70086028;
      puVar12[1] = uVar3;
      puVar12[2] = uVar4;
      puVar12[3] = uVar5;
      puVar12[4] = uVar6;
      *(undefined1 *)(puVar12 + 5) = DAT_7008603c;
      GFDIUClbc_QcPNgD_wH(&LAB_717f0404,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd64);
      *puVar13 = 1;
    }
    pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fbd54);
    if (pbVar9[0x15] == 0) goto LAB_717e7d20;
    uVar15 = 0;
    uVar16 = 0;
    do {
      iVar11 = (uVar15 & 7) * 8;
      uVar18 = iVar11 - 0x20;
      bVar14 = (byte)(0x5338b95 >> iVar11) | (byte)(-0x65a9c8d << ((uVar15 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar18) {
        bVar14 = (byte)(0xf9a56373 >> (uVar18 & 0xff));
      }
      pbVar9[uVar15] = pbVar9[uVar15] ^ bVar14;
      bVar19 = 0xfffffffe < uVar15;
      bVar1 = uVar16 == 0;
      bVar2 = (0x13 < uVar15) <= uVar16;
      uVar15 = uVar15 + 1;
      uVar16 = uVar16 + bVar19;
    } while (bVar1 && bVar2);
  }
  pbVar9[0x15] = 0;
LAB_717e7d20:
  FUN_7188543c(pbVar9,param_1[3]);
  return;
}


// =========================================================================
// Function: FUN_717e9154
// Entry: 0x717e9154 | Size: 40 bytes
// =========================================================================

bool FUN_717e9154(void)

{
  return DAT_71201dc8 != 0;
}


// =========================================================================
// Function: FUN_717ee7d4
// Entry: 0x717ee7d4 | Size: 1640 bytes
// =========================================================================

void FUN_717ee7d4(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uStack_34;
  int iStack_30;
  uint uStack_2c;
  
  if (DAT_70b2e804 != 0) {
    bVar19 = DAT_70b2e804 <= param_2;
    bVar18 = param_2 == DAT_70b2e804;
    if (bVar19 && !bVar18) {
      bVar19 = param_2 <= DAT_70b2e808;
      bVar18 = DAT_70b2e808 == param_2;
    }
    if (bVar19 && !bVar18) {
      iVar7 = param_2 - DAT_70b2e804;
      FUN_712f0bc8(&uStack_34,&DAT_70b2e804,iVar7);
      pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc104);
      if (*pcVar8 == '\0') {
        puVar9 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc0f4);
        *(undefined1 *)((int)puVar9 + 0x13) = 1;
        uVar3 = DAT_700861c4;
        uVar2 = DAT_700861c0;
        uVar1 = DAT_700861bc;
        *puVar9 = DAT_700861b8;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        uVar4 = DAT_700861ca;
        *(undefined2 *)(puVar9 + 4) = DAT_700861c8;
        *(undefined1 *)((int)puVar9 + 0x12) = uVar4;
        GFDIUClbc_QcPNgD_wH(&LAB_717f1afc,puVar9,&DAT_70b0e000);
        puVar10 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc104);
        *puVar10 = 1;
      }
      iVar14 = XcxSszXLPjQrEGhecEv_(&DAT_700fc0f4);
      if (*(char *)(iVar14 + 0x13) != '\0') {
        uVar13 = 0;
        uVar12 = 0;
        do {
          iVar16 = (uVar13 & 7) * 8;
          uVar15 = iVar16 - 0x20;
          bVar11 = (byte)(0xa7dde3a3 >> iVar16) |
                   (byte)(-0x4292888b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar15) {
            bVar11 = (byte)(0xbd6d7775 >> (uVar15 & 0xff));
          }
          *(byte *)(iVar14 + uVar13) = *(byte *)(iVar14 + uVar13) ^ bVar11;
          bVar20 = 0xfffffffe < uVar13;
          bVar18 = uVar12 == 0;
          bVar19 = (0x11 < uVar13) <= uVar12;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + bVar20;
        } while (bVar18 && bVar19);
        *(undefined1 *)(iVar14 + 0x13) = 0;
      }
      uVar13 = uStack_2c;
      if ((uStack_34 & 1) == 0) {
        uVar13 = (uint)&uStack_34 | 1;
      }
      FUN_7188543c(iVar14,param_1,iVar7,uVar13);
      if (((byte)uStack_34 & 1) != 0) {
        qNQrlu(uStack_2c);
        return;
      }
      return;
    }
  }
  iVar7 = imp_dladdr(param_2,&uStack_34);
  uVar13 = 0;
  if (iVar7 != 0) {
    uVar13 = uStack_34;
  }
  if (iVar7 != 0 && uVar13 != 0) {
    uVar13 = 0x7006b92a;
    if (uStack_2c != 0) {
      uVar13 = uStack_2c;
    }
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc124);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc114);
      *(undefined1 *)(puVar9 + 6) = 1;
      uVar6 = DAT_700861e4;
      uVar5 = DAT_700861e0;
      uVar3 = DAT_700861dc;
      uVar2 = DAT_700861d8;
      uVar1 = DAT_700861d4;
      *puVar9 = DAT_700861d0;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      puVar9[4] = uVar5;
      puVar9[5] = uVar6;
      GFDIUClbc_QcPNgD_wH(&LAB_717f1b30,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc124);
      *puVar10 = 1;
    }
    iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fc114);
    if (*(char *)(iVar7 + 0x18) != '\0') {
      uVar12 = 0;
      uVar15 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar11 = (byte)(0xf12f5bbb >> iVar14) |
                 (byte)(-0x3cfab4ed << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar17 = iVar14 - 0x20;
        if (-1 < (int)uVar17) {
          bVar11 = (byte)(0xc3054b13 >> (uVar17 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar11;
        bVar20 = 0xfffffffe < uVar12;
        bVar18 = uVar15 == 0;
        bVar19 = (0x16 < uVar12) <= uVar15;
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 + bVar20;
      } while (bVar18 && bVar19);
      *(undefined1 *)(iVar7 + 0x18) = 0;
    }
    FUN_7188543c(iVar7,param_1,param_2 - iStack_30,uStack_34,uVar13);
    return;
  }
  pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc144);
  if (*pcVar8 == '\0') {
    puVar9 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc134);
    *(undefined1 *)((int)puVar9 + 0x19) = 1;
    uVar6 = DAT_700861fc;
    uVar5 = DAT_700861f8;
    uVar3 = DAT_700861f4;
    uVar2 = DAT_700861f0;
    uVar1 = DAT_700861ec;
    *puVar9 = DAT_700861e8;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    puVar9[4] = uVar5;
    puVar9[5] = uVar6;
    *(undefined1 *)(puVar9 + 6) = DAT_70086200;
    GFDIUClbc_QcPNgD_wH(&LAB_717f1b68,puVar9,&DAT_70b0e000);
    puVar10 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc144);
    *puVar10 = 1;
  }
  iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fc134);
  if (*(char *)(iVar7 + 0x19) != '\0') {
    uVar13 = 0;
    uVar12 = 0;
    do {
      iVar14 = (uVar13 & 7) * 8;
      bVar11 = (byte)(0xcb43878f >> iVar14) |
               (byte)(0x215fbf1f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      uVar15 = iVar14 - 0x20;
      if (-1 < (int)uVar15) {
        bVar11 = (byte)(0x215fbf1f >> (uVar15 & 0xff));
      }
      *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar11;
      bVar20 = 0xfffffffe < uVar13;
      bVar18 = uVar12 == 0;
      bVar19 = (0x17 < uVar13) <= uVar12;
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + bVar20;
    } while (bVar18 && bVar19);
    *(undefined1 *)(iVar7 + 0x19) = 0;
  }
  FUN_7188543c(iVar7,param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_717ef11c
// Entry: 0x717ef11c | Size: 412 bytes
// =========================================================================

void FUN_717ef11c(void)

{
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_717ef3ac();
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  puStack_28 = (undefined1 *)0x0;
  imp_sigemptyset((uint)&puStack_28 | 4);
  uStack_20 = 4;
  puStack_28 = &LAB_717e91a0;
  imp_sigaction(DAT_700fb6c8,&puStack_28,&DAT_71201894);
  imp_sigaction(DAT_700fb6cc,&puStack_28,&DAT_712018a4);
  imp_sigaction(DAT_700fb6d0,&puStack_28,&DAT_712018b4);
  imp_sigaction(DAT_700fb6d4,&puStack_28,&DAT_712018c4);
  imp_sigaction(DAT_700fb6d8,&puStack_28,&DAT_712018d4);
  imp_sigaction(DAT_700fb6dc,&puStack_28,&DAT_712018e4);
  imp_sigaction(DAT_700fb6e0,&puStack_28,&DAT_712018f4);
  imp_sigaction(DAT_700fb6e4,&puStack_28,&DAT_71201904);
  return;
}


// =========================================================================
// Function: FUN_717ef3ac
// Entry: 0x717ef3ac | Size: 440 bytes
// =========================================================================

void FUN_717ef3ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_30 [24];
  
  if (DAT_71201914 == 0) {
    DAT_71201914 = FUN_714b9668(&DAT_70064a63);
  }
  imp_pthread_mutex_lock();
  iVar3 = 0;
  iVar1 = imp_gettid();
  do {
    if (*(int *)((int)&DAT_71201918 - iVar3) == iVar1) {
      imp_pthread_mutex_unlock(DAT_71201914);
      return;
    }
    iVar3 = iVar3 + -0xc;
  } while (iVar3 != -0x4b0);
  iVar3 = 0;
  do {
    if (*(int *)((int)&DAT_71201918 - iVar3) == 0) {
      uVar2 = imp_pthread_self();
      imp_pthread_getattr_np(uVar2,auStack_30);
      imp_pthread_attr_getstack(auStack_30,-iVar3 + 0x7120191c,-iVar3 + 0x71201920);
      imp_pthread_attr_destroy(auStack_30);
      *(int *)((int)&DAT_71201918 - iVar3) = iVar1;
      break;
    }
    iVar3 = iVar3 + -0xc;
  } while (iVar3 != -0x4b0);
  imp_pthread_mutex_unlock(DAT_71201914);
  return;
}


// =========================================================================
// Function: FUN_717ef664
// Entry: 0x717ef664 | Size: 4 bytes
// =========================================================================

void FUN_717ef664(void)

{
  return;
}


// =========================================================================
// Function: FUN_717ef680
// Entry: 0x717ef680 | Size: 184 bytes
// =========================================================================

void FUN_717ef680(void)

{
  int iVar1;
  int iVar2;
  
  imp_pthread_mutex_lock(DAT_71201914);
  iVar2 = 0;
  iVar1 = imp_gettid();
  do {
    if (*(int *)((int)&DAT_71201918 + iVar2) == iVar1) {
      *(undefined4 *)((int)&DAT_71201918 + iVar2) = 0;
      *(undefined4 *)(iVar2 + 0x7120191c) = 0;
      *(undefined4 *)(iVar2 + 0x71201920) = 0;
      break;
    }
    iVar2 = iVar2 + 0xc;
  } while (iVar2 != 0x4b0);
  imp_pthread_mutex_unlock(DAT_71201914);
  return;
}


// =========================================================================
// Function: FUN_717f07c0
// Entry: 0x717f07c0 | Size: 288 bytes
// =========================================================================

void FUN_717f07c0(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc024);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc014);
    *puVar2 = 0xc5b8437c;
    *(undefined1 *)((int)puVar2 + 6) = 1;
    *(undefined2 *)(puVar2 + 1) = 0x4928;
    GFDIUClbc_QcPNgD_wH(&LAB_717f1664,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc024);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_700fc014);
  return;
}


// =========================================================================
// Function: FUN_717f09a8
// Entry: 0x717f09a8 | Size: 284 bytes
// =========================================================================

void FUN_717f09a8(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc044);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc034);
    *puVar2 = 0xc781d31f;
    *(undefined2 *)(puVar2 + 1) = 0x1bf;
    GFDIUClbc_QcPNgD_wH(&LAB_717f168c,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc044);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_700fc034);
  return;
}


// =========================================================================
// Function: FUN_717f0b8c
// Entry: 0x717f0b8c | Size: 284 bytes
// =========================================================================

void FUN_717f0b8c(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc064);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc054);
    *puVar2 = 0x29d96a41;
    *(undefined2 *)(puVar2 + 1) = 0x1eb;
    GFDIUClbc_QcPNgD_wH(&LAB_717f16b4,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc064);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_700fc054);
  return;
}


// =========================================================================
// Function: FUN_717f0d70
// Entry: 0x717f0d70 | Size: 288 bytes
// =========================================================================

void FUN_717f0d70(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc084);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc074);
    *puVar2 = 0x5bda2946;
    *(undefined1 *)((int)puVar2 + 6) = 1;
    *(undefined2 *)(puVar2 + 1) = 0x1961;
    GFDIUClbc_QcPNgD_wH(&LAB_717f16dc,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc084);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_700fc074);
  return;
}


// =========================================================================
// Function: FUN_717f0f58
// Entry: 0x717f0f58 | Size: 276 bytes
// =========================================================================

void FUN_717f0f58(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc0a4);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined2 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc094);
    *puVar2 = 0x4708;
    *(undefined1 *)(puVar2 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_717f1704,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc0a4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_700fc094);
  return;
}


// =========================================================================
// Function: FUN_717f1134
// Entry: 0x717f1134 | Size: 276 bytes
// =========================================================================

void FUN_717f1134(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc0c4);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc0b4);
    *puVar2 = 0x1675240;
    GFDIUClbc_QcPNgD_wH(&LAB_717f1728,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc0c4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_700fc0b4);
  return;
}


// =========================================================================
// Function: FUN_717f1438
// Entry: 0x717f1438 | Size: 280 bytes
// =========================================================================

int * FUN_717f1438(int param_1,byte *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  
  piVar9 = (int *)(param_1 + 4);
  piVar5 = (int *)*piVar9;
  if (piVar5 != (int *)0x0) {
    pbVar10 = *(byte **)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 4);
    piVar6 = piVar9;
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar8 = (uint)(*param_2 >> 1);
    }
    do {
      uVar7 = piVar5[5];
      iVar3 = piVar5[6];
      if ((*(byte *)(piVar5 + 4) & 1) == 0) {
        uVar7 = (uint)(*(byte *)(piVar5 + 4) >> 1);
        iVar3 = (int)piVar5 + 0x11;
      }
      uVar4 = uVar7;
      if (uVar8 < uVar7) {
        uVar4 = uVar8;
      }
      iVar3 = imp_memcmp(iVar3,pbVar10,uVar4);
      bVar1 = uVar8 <= uVar7;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      piVar2 = piVar5;
      if (!bVar1) {
        piVar5 = piVar5 + 1;
        piVar2 = piVar6;
      }
      piVar6 = piVar2;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    if (piVar6 != piVar9) {
      uVar7 = piVar6[5];
      iVar3 = piVar6[6];
      if ((*(byte *)(piVar6 + 4) & 1) == 0) {
        uVar7 = (uint)(*(byte *)(piVar6 + 4) >> 1);
        iVar3 = (int)piVar6 + 0x11;
      }
      uVar4 = uVar8;
      if (uVar7 < uVar8) {
        uVar4 = uVar7;
      }
      iVar3 = imp_memcmp(pbVar10,iVar3,uVar4);
      bVar1 = uVar7 <= uVar8;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      if (bVar1) {
        piVar9 = piVar6;
      }
    }
  }
  return piVar9;
}


// =========================================================================
// Function: FUN_717f1750
// Entry: 0x717f1750 | Size: 244 bytes
// =========================================================================

void FUN_717f1750(undefined4 *param_1,int *param_2,undefined4 param_3,byte *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)FUN_717f189c(param_2,&uStack_24);
  puVar6 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)thunk_MwhHq(0x1c);
    if ((*param_4 & 1) == 0) {
      uVar4 = *(undefined4 *)(param_4 + 4);
      uVar5 = *(undefined4 *)(param_4 + 8);
      puVar6[4] = *(undefined4 *)param_4;
      puVar6[5] = uVar4;
      puVar6[6] = uVar5;
    }
    else {
      FUN_712f6d58(puVar6 + 4,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 4));
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = uStack_24;
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
// Function: FUN_717f189c
// Entry: 0x717f189c | Size: 280 bytes
// =========================================================================

int * FUN_717f189c(int param_1,undefined4 *param_2,byte *param_3)

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
        if (bVar1) goto LAB_717f1988;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_717f1988;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_717f1988:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_717f19ec
// Entry: 0x717f19ec | Size: 120 bytes
// =========================================================================

void FUN_717f19ec(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_717f19ec(param_1,*param_2);
  FUN_717f19ec(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: TyHbyKyKTCvukMdUCLAOVl
// Entry: 0x717f1cd8 | Size: 3404 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void TyHbyKyKTCvukMdUCLAOVl
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  bool bVar31;
  undefined4 uStack_140;
  byte bStack_13c;
  undefined4 uStack_13b;
  undefined3 uStack_137;
  undefined4 uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_60;
  undefined3 uStack_5c;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  undefined4 uStack_48;
  undefined3 uStack_44;
  undefined4 uStack_40;
  undefined3 uStack_3c;
  undefined4 uStack_38;
  undefined3 uStack_34;
  undefined4 uStack_30;
  undefined3 uStack_2c;
  
  uVar16 = imp_strlen(param_2);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_70);
  }
  if (uVar16 < 0xb) {
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_70 | 1;
    if (uVar16 != 0) goto LAB_717f1d4c;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_70 = (uVar16 | 7) + 2;
    uStack_6c = uVar16;
    uStack_68 = uVar25;
LAB_717f1d4c:
    imp___aeabi_memcpy(uVar25,param_2,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  uVar16 = imp_strlen(param_3);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_80);
  }
  if (uVar16 < 0xb) {
    uStack_80 = CONCAT31(uStack_80._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_80 | 1;
    if (uVar16 != 0) goto LAB_717f1dbc;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_80 = (uVar16 | 7) + 2;
    uStack_7c = uVar16;
    uStack_78 = uVar25;
LAB_717f1dbc:
    imp___aeabi_memcpy(uVar25,param_3,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  uVar16 = imp_strlen(param_4);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_90);
  }
  if (uVar16 < 0xb) {
    uStack_90 = CONCAT31(uStack_90._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_90 | 1;
    if (uVar16 != 0) goto LAB_717f1e30;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_90 = (uVar16 | 7) + 2;
    uStack_8c = uVar16;
    uStack_88 = uVar25;
LAB_717f1e30:
    imp___aeabi_memcpy(uVar25,param_4,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  uVar16 = imp_strlen(param_10);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_a0);
  }
  if (uVar16 < 0xb) {
    uStack_a0 = CONCAT31(uStack_a0._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_a0 | 1;
    if (uVar16 != 0) goto LAB_717f1ea4;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_a0 = (uVar16 | 7) + 2;
    uStack_9c = uVar16;
    uStack_98 = uVar25;
LAB_717f1ea4:
    imp___aeabi_memcpy(uVar25,param_10,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  uVar16 = imp_strlen(param_11);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_b0);
  }
  if (uVar16 < 0xb) {
    uStack_b0 = CONCAT31(uStack_b0._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_b0 | 1;
    if (uVar16 != 0) goto LAB_717f1f18;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_b0 = (uVar16 | 7) + 2;
    uStack_ac = uVar16;
    uStack_a8 = uVar25;
LAB_717f1f18:
    imp___aeabi_memcpy(uVar25,param_11,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  uVar16 = imp_strlen(param_13);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_c0);
  }
  if (uVar16 < 0xb) {
    uStack_c0 = CONCAT31(uStack_c0._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_c0 | 1;
    if (uVar16 != 0) goto LAB_717f1f8c;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_c0 = (uVar16 | 7) + 2;
    uStack_bc = uVar16;
    uStack_b8 = uVar25;
LAB_717f1f8c:
    imp___aeabi_memcpy(uVar25,param_13,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  uVar16 = imp_strlen(param_14);
  if (0xfffffff7 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_d0);
  }
  if (uVar16 < 0xb) {
    uStack_d0 = CONCAT31(uStack_d0._1_3_,(char)(uVar16 << 1));
    uVar25 = (uint)&uStack_d0 | 1;
    if (uVar16 != 0) goto LAB_717f1ffc;
  }
  else {
    uVar25 = thunk_MwhHq((uVar16 | 7) + 1);
    uStack_d0 = (uVar16 | 7) + 2;
    uStack_cc = uVar16;
    uStack_c8 = uVar25;
LAB_717f1ffc:
    imp___aeabi_memcpy(uVar25,param_14,uVar16);
  }
  *(undefined1 *)(uVar25 + uVar16) = 0;
  iVar17 = DAT_71201ddc;
  if (DAT_71201ddc == 0) {
    iVar17 = thunk_MwhHq(4);
    uVar18 = thunk_MwhHq(4);
    thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
    puVar19 = (undefined4 *)thunk_MwhHq(4);
    *puVar19 = uVar18;
    iVar20 = imp_pthread_create(iVar17,0,FUN_717f9624,puVar19);
    if (iVar20 != 0) goto LAB_717f2a14;
  }
  DAT_71201ddc = iVar17;
  thunk_hNNuIKbSIfMIcLLugm_WGLsY_kgMHJsFRTrO(&DAT_71201dec);
  puVar21 = (uint *)((uint)&uStack_140 | 4);
  uStack_140 = param_1;
  if ((uStack_70 & 1) == 0) {
    *puVar21 = uStack_70;
    puVar21[1] = uStack_6c;
    puVar21[2] = uStack_68;
  }
  else {
    FUN_712f6d58(puVar21,uStack_68,uStack_6c);
  }
  if ((uStack_80 & 1) == 0) {
    uStack_130 = uStack_80;
    uStack_12c = uStack_7c;
    uStack_128 = uStack_78;
  }
  else {
    FUN_712f6d58(&uStack_130,uStack_78,uStack_7c);
  }
  if ((uStack_90 & 1) == 0) {
    uStack_124 = uStack_90;
    uStack_120 = uStack_8c;
    uStack_11c = uStack_88;
  }
  else {
    FUN_712f6d58(&uStack_124,uStack_88,uStack_8c);
  }
  if ((uStack_a0 & 1) == 0) {
    uStack_118 = uStack_a0;
    uStack_114 = uStack_9c;
    uStack_110 = uStack_98;
  }
  else {
    FUN_712f6d58(&uStack_118,uStack_98,uStack_9c);
  }
  if ((uStack_b0 & 1) == 0) {
    uStack_10c = uStack_b0;
    uStack_108 = uStack_ac;
    uStack_104 = uStack_a8;
  }
  else {
    FUN_712f6d58(&uStack_10c,uStack_a8,uStack_ac);
  }
  uStack_fc = param_5;
  uStack_ec = param_9;
  uStack_f0 = param_8;
  uStack_f4 = param_7;
  uStack_f8 = param_6;
  uStack_100 = param_12;
  if ((uStack_c0 & 1) == 0) {
    uStack_e8 = uStack_c0;
    uStack_e4 = uStack_bc;
    uStack_e0 = uStack_b8;
  }
  else {
    FUN_712f6d58(&uStack_e8,uStack_b8,uStack_bc);
  }
  if ((uStack_d0 & 1) == 0) {
    uStack_dc = uStack_d0;
    uStack_d8 = uStack_cc;
    uStack_d4 = uStack_c8;
  }
  else {
    FUN_712f6d58(&uStack_dc,uStack_c8,uStack_cc);
  }
  uVar15 = uStack_d4;
  uVar13 = uStack_d8;
  uVar11 = uStack_e0;
  uVar9 = uStack_104;
  uVar7 = uStack_110;
  uVar25 = uStack_11c;
  uVar16 = uStack_128;
  uVar4 = uStack_134;
  bVar3 = bStack_13c;
  uVar18 = uStack_140;
  piVar2 = DAT_71201de4;
  piVar30 = DAT_71201de0;
  if (DAT_71201de4 < DAT_71201de8) {
    uStack_30 = uStack_13b;
    uStack_2c = uStack_137;
    uVar5 = (undefined1)uStack_130;
    uVar6 = (undefined1)uStack_124;
    uStack_38 = CONCAT13((undefined1)uStack_12c,uStack_130._1_3_);
    uStack_34 = (undefined3)(uStack_12c >> 8);
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[2] = 0;
    uStack_40 = CONCAT13((undefined1)uStack_120,uStack_124._1_3_);
    uStack_3c = (undefined3)(uStack_120 >> 8);
    uVar8 = (undefined1)uStack_118;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_48 = CONCAT13((undefined1)uStack_114,uStack_118._1_3_);
    uStack_44 = (undefined3)(uStack_114 >> 8);
    uVar10 = (undefined1)uStack_10c;
    uStack_50 = CONCAT13((undefined1)uStack_108,uStack_10c._1_3_);
    uStack_4c = (undefined3)(uStack_108 >> 8);
    uVar12 = (undefined1)uStack_e8;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_58 = CONCAT13((undefined1)uStack_e4,uStack_e8._1_3_);
    uStack_54 = (undefined3)(uStack_e4 >> 8);
    uVar14 = (undefined1)uStack_dc;
    uStack_60 = CONCAT13((undefined1)uStack_d8,uStack_dc._1_3_);
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_5c = (undefined3)(uVar13 >> 8);
    puVar19 = (undefined4 *)thunk_MwhHq(0x74);
    *(byte *)(puVar19 + 2) = bVar3;
    puVar19[0x10] = uVar9;
    *puVar19 = &DAT_70b0f828;
    puVar19[1] = uVar18;
    *(undefined1 *)(puVar19 + 5) = uVar5;
    puVar19[4] = uVar4;
    *(undefined1 *)(puVar19 + 8) = uVar6;
    puVar19[7] = uVar16;
    *(undefined4 *)((int)puVar19 + 9) = uStack_30;
    *(undefined4 *)((int)puVar19 + 0x15) = uStack_38;
    *(undefined4 *)((int)puVar19 + 0x21) = uStack_40;
    *(undefined1 *)(puVar19 + 0xb) = uVar8;
    puVar19[3] = CONCAT31(uStack_2c,uStack_30._3_1_);
    puVar19[10] = uVar25;
    puVar19[6] = CONCAT31(uStack_34,uStack_38._3_1_);
    *(undefined1 *)(puVar19 + 0xe) = uVar10;
    puVar19[9] = CONCAT31(uStack_3c,uStack_40._3_1_);
    puVar19[0xd] = uVar7;
    puVar19[0xc] = CONCAT31(uStack_44,uStack_48._3_1_);
    *(undefined4 *)((int)puVar19 + 0x2d) = uStack_48;
    puVar19[0xf] = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(undefined4 *)((int)puVar19 + 0x39) = uStack_50;
    puVar19[0x11] = uStack_100;
    puVar19[0x12] = uStack_fc;
    puVar19[0x13] = uStack_f8;
    puVar19[0x14] = uStack_f4;
    puVar19[0x15] = uStack_f0;
    puVar19[0x16] = uStack_ec;
    piVar29 = piVar2 + 6;
    *(undefined1 *)(puVar19 + 0x17) = uVar12;
    *(undefined1 *)(puVar19 + 0x1a) = uVar14;
    puVar19[0x19] = uVar11;
    *(undefined4 *)((int)puVar19 + 0x5d) = uStack_58;
    puVar19[0x18] = CONCAT31(uStack_54,uStack_58._3_1_);
    *(undefined4 *)((int)puVar19 + 0x69) = uStack_60;
    puVar19[0x1c] = uVar15;
    puVar19[0x1b] = CONCAT31(uStack_5c,uStack_60._3_1_);
    piVar2[4] = (int)puVar19;
  }
  else {
    iVar20 = (int)DAT_71201de4 - (int)DAT_71201de0;
    iVar17 = iVar20 >> 3;
    uVar16 = iVar17 * -0x55555555 + 1;
    if (0xaaaaaaa < uVar16) {
      iVar20 = FUN_717fc054(&DAT_71201de0);
LAB_717f2a14:
                    /* WARNING: Subroutine does not return */
      thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar20,s_thread_constructor_failed_70063c8c);
    }
    iVar22 = 0;
    iVar1 = (int)DAT_71201de8 - (int)DAT_71201de0 >> 3;
    if (uVar16 < (uint)(iVar1 * 0x55555556)) {
      uVar16 = iVar1 * 0x55555556;
    }
    if (0x5555554 < (uint)(iVar1 * -0x55555555)) {
      uVar16 = 0xaaaaaaa;
    }
    if (uVar16 != 0) {
      if (0xaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar22 = thunk_MwhHq(uVar16 * 0x18);
    }
    uVar15 = uStack_d4;
    uVar13 = uStack_e0;
    uVar11 = uStack_104;
    uVar9 = uStack_110;
    uVar7 = uStack_11c;
    uVar25 = uStack_128;
    uVar4 = uStack_134;
    bVar3 = bStack_13c;
    uVar18 = uStack_140;
    uVar5 = (undefined1)uStack_130;
    uVar6 = (undefined1)uStack_124;
    uStack_38 = CONCAT13((undefined1)uStack_12c,uStack_130._1_3_);
    uStack_34 = (undefined3)(uStack_12c >> 8);
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar21[2] = 0;
    uStack_40 = CONCAT13((undefined1)uStack_120,uStack_124._1_3_);
    uStack_3c = (undefined3)(uStack_120 >> 8);
    uVar8 = (undefined1)uStack_118;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_48 = CONCAT13((undefined1)uStack_114,uStack_118._1_3_);
    uStack_44 = (undefined3)(uStack_114 >> 8);
    uVar10 = (undefined1)uStack_10c;
    uStack_50 = CONCAT13((undefined1)uStack_108,uStack_10c._1_3_);
    uStack_4c = (undefined3)(uStack_108 >> 8);
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uVar12 = (undefined1)uStack_e8;
    uStack_58 = CONCAT13((undefined1)uStack_e4,uStack_e8._1_3_);
    uStack_54 = (undefined3)(uStack_e4 >> 8);
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uVar14 = (undefined1)uStack_dc;
    uStack_60 = CONCAT13((undefined1)uStack_d8,uStack_dc._1_3_);
    uStack_5c = (undefined3)(uStack_d8 >> 8);
    uStack_30 = uStack_13b;
    uStack_2c = uStack_137;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    puVar19 = (undefined4 *)thunk_MwhHq(0x74);
    *(byte *)(puVar19 + 2) = bVar3;
    *puVar19 = &DAT_70b0f828;
    puVar19[1] = uVar18;
    *(undefined1 *)(puVar19 + 5) = uVar5;
    puVar19[4] = uVar4;
    *(undefined1 *)(puVar19 + 8) = uVar6;
    puVar19[7] = uVar25;
    *(undefined4 *)((int)puVar19 + 9) = uStack_30;
    *(undefined4 *)((int)puVar19 + 0x15) = uStack_38;
    *(undefined4 *)((int)puVar19 + 0x21) = uStack_40;
    *(undefined1 *)(puVar19 + 0xb) = uVar8;
    puVar19[10] = uVar7;
    puVar19[3] = CONCAT31(uStack_2c,uStack_30._3_1_);
    *(undefined1 *)(puVar19 + 0xe) = uVar10;
    puVar19[6] = CONCAT31(uStack_34,uStack_38._3_1_);
    puVar19[0xd] = uVar9;
    puVar19[9] = CONCAT31(uStack_3c,uStack_40._3_1_);
    puVar19[0x10] = uVar11;
    puVar19[0xc] = CONCAT31(uStack_44,uStack_48._3_1_);
    *(undefined4 *)((int)puVar19 + 0x2d) = uStack_48;
    puVar19[0xf] = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(undefined4 *)((int)puVar19 + 0x39) = uStack_50;
    puVar19[0x11] = uStack_100;
    puVar19[0x12] = uStack_fc;
    puVar19[0x13] = uStack_f8;
    puVar19[0x14] = uStack_f4;
    puVar19[0x15] = uStack_f0;
    puVar19[0x16] = uStack_ec;
    *(undefined1 *)(puVar19 + 0x17) = uVar12;
    *(undefined1 *)(puVar19 + 0x1a) = uVar14;
    puVar19[0x19] = uVar13;
    puVar19[0x1c] = uVar15;
    *(undefined4 *)((int)puVar19 + 0x5d) = uStack_58;
    iVar17 = iVar22 + iVar17 * 8;
    puVar19[0x18] = CONCAT31(uStack_54,uStack_58._3_1_);
    *(undefined4 *)((int)puVar19 + 0x69) = uStack_60;
    *(undefined4 **)(iVar17 + 0x10) = puVar19;
    puVar19[0x1b] = CONCAT31(uStack_5c,uStack_60._3_1_);
    piVar26 = (int *)(iVar22 + uVar16 * 0x18);
    piVar29 = (int *)(iVar17 + 0x18);
    piVar28 = (int *)(iVar17 - iVar20);
    piVar24 = piVar30;
    piVar27 = piVar28;
    if (piVar30 != piVar2) {
      do {
        piVar23 = (int *)piVar24[4];
        if (piVar23 == (int *)0x0) {
          piVar27[4] = 0;
        }
        else if (piVar24 == piVar23) {
          piVar27[4] = (int)piVar27;
          (**(code **)(*piVar24 + 0xc))(piVar24,piVar27);
        }
        else {
          piVar27[4] = (int)piVar23;
          piVar24[4] = 0;
        }
        piVar24 = piVar24 + 6;
        piVar27 = piVar27 + 6;
      } while (piVar24 != piVar2);
      do {
        piVar24 = (int *)piVar30[4];
        if (piVar30 == piVar24) {
          iVar17 = 0x10;
          piVar24 = piVar30;
LAB_717f2844:
          (**(code **)(*piVar24 + iVar17))();
        }
        else {
          iVar17 = 0x14;
          if (piVar24 != (int *)0x0) goto LAB_717f2844;
        }
        piVar30 = piVar30 + 6;
      } while (piVar30 != piVar2);
    }
    bVar31 = DAT_71201de0 != (int *)0x0;
    DAT_71201de0 = piVar28;
    DAT_71201de8 = piVar26;
    if (bVar31) {
      DAT_71201de4 = piVar29;
      thunk_qNQrlu();
    }
  }
  DAT_71201de4 = piVar29;
  if ((uStack_dc & 1) != 0) {
    thunk_qNQrlu(uStack_d4);
  }
  if ((uStack_e8 & 1) != 0) {
    thunk_qNQrlu(uStack_e0);
  }
  if ((uStack_10c & 1) != 0) {
    thunk_qNQrlu(uStack_104);
  }
  if ((uStack_118 & 1) != 0) {
    thunk_qNQrlu(uStack_110);
  }
  if ((uStack_124 & 1) != 0) {
    thunk_qNQrlu(uStack_11c);
  }
  if ((uStack_130 & 1) != 0) {
    thunk_qNQrlu(uStack_128);
  }
  if ((bStack_13c & 1) != 0) {
    thunk_qNQrlu(uStack_134);
  }
  thunk_oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx(&DAT_71201dec);
  if ((uStack_d0 & 1) != 0) {
    thunk_qNQrlu(uStack_c8);
  }
  if ((uStack_c0 & 1) != 0) {
    thunk_qNQrlu(uStack_b8);
  }
  if ((uStack_b0 & 1) != 0) {
    thunk_qNQrlu(uStack_a8);
  }
  if ((uStack_a0 & 1) != 0) {
    thunk_qNQrlu(uStack_98);
  }
  if ((uStack_90 & 1) != 0) {
    thunk_qNQrlu(uStack_88);
  }
  if ((uStack_80 & 1) != 0) {
    thunk_qNQrlu(uStack_78);
  }
  if ((uStack_70 & 1) != 0) {
    thunk_qNQrlu(uStack_68);
  }
  return;
}


// =========================================================================
// Function: ssmXpMklGuTlnzgF_AEFq
// Entry: 0x717f345c | Size: 4 bytes
// =========================================================================

void ssmXpMklGuTlnzgF_AEFq(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  
  uVar1 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar2 = (undefined4 *)thunk_MwhHq(8);
  *puVar2 = uVar1;
  puVar2[1] = param_1;
  iVar3 = imp_pthread_create(auStack_14,0,FUN_717fecac);
  if (iVar3 == 0) {
    thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_14);
    thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
}


// =========================================================================
// Function: FUN_717f3494
// Entry: 0x717f3494 | Size: 116 bytes
// =========================================================================

void FUN_717f3494(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_14 [4];
  
  uVar1 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar2 = (undefined4 *)thunk_MwhHq(8);
  *puVar2 = uVar1;
  puVar2[1] = param_1;
  iVar3 = imp_pthread_create(auStack_14,0,FUN_717fecac);
  if (iVar3 == 0) {
    thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_14);
    thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
}


// =========================================================================
// Function: FUN_717f3c18
// Entry: 0x717f3c18 | Size: 1044 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717f3c18(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint *puStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  piVar5 = (int *)param_2[4];
  if (piVar5 == (int *)0x0) {
    puStack_30 = (uint *)0x0;
  }
  else if (piVar5 == param_2) {
    puStack_30 = &uStack_40;
    (**(code **)(*param_2 + 0xc))(param_2,puStack_30);
  }
  else {
    puStack_30 = (uint *)(**(code **)(*piVar5 + 8))();
  }
  puVar6 = &uStack_40;
  FUN_717cd518(puVar6,param_1 + 0x78);
  if (puStack_30 == puVar6) {
    iVar8 = 0x10;
LAB_717f3cc8:
    (**(code **)(*puVar6 + iVar8))();
  }
  else {
    iVar8 = 0x14;
    puVar6 = puStack_30;
    if (puStack_30 != (uint *)0x0) goto LAB_717f3cc8;
  }
  piVar5 = (int *)param_3[4];
  if (piVar5 == (int *)0x0) {
    puStack_30 = (uint *)0x0;
  }
  else if (piVar5 == param_3) {
    puStack_30 = &uStack_40;
    (**(code **)(*param_3 + 0xc))(param_3);
  }
  else {
    puStack_30 = (uint *)(**(code **)(*piVar5 + 8))();
  }
  puVar6 = &uStack_40;
  FUN_717ff554(puVar6,param_1 + 0x90);
  if (puStack_30 == puVar6) {
    iVar8 = 0x10;
LAB_717f3d54:
    (**(code **)(*puVar6 + iVar8))();
  }
  else {
    iVar8 = 0x14;
    puVar6 = puStack_30;
    if (puStack_30 != (uint *)0x0) goto LAB_717f3d54;
  }
  piVar5 = (int *)param_4[4];
  if (piVar5 == (int *)0x0) {
    puStack_30 = (uint *)0x0;
  }
  else if (piVar5 == param_4) {
    puStack_30 = &uStack_40;
    (**(code **)(*param_4 + 0xc))(param_4);
  }
  else {
    puStack_30 = (uint *)(**(code **)(*piVar5 + 8))();
  }
  puVar6 = &uStack_40;
  FUN_717cd518(puVar6,param_1 + 0xa8);
  if (puStack_30 == puVar6) {
    iVar8 = 0x10;
LAB_717f3de4:
    (**(code **)(*puVar6 + iVar8))();
  }
  else {
    iVar8 = 0x14;
    puVar6 = puStack_30;
    if (puStack_30 != (uint *)0x0) goto LAB_717f3de4;
  }
  piVar5 = (int *)param_5[4];
  if (piVar5 == (int *)0x0) {
    puStack_30 = (uint *)0x0;
  }
  else if (piVar5 == param_5) {
    puStack_30 = &uStack_40;
    (**(code **)(*param_5 + 0xc))(param_5);
  }
  else {
    puStack_30 = (uint *)(**(code **)(*piVar5 + 8))();
  }
  puVar6 = &uStack_40;
  FUN_717ff734(puVar6,param_1 + 0xc0);
  if (puStack_30 == puVar6) {
    iVar8 = 0x10;
LAB_717f3e70:
    (**(code **)(*puVar6 + iVar8))();
  }
  else {
    iVar8 = 0x14;
    puVar6 = puStack_30;
    if (puStack_30 != (uint *)0x0) goto LAB_717f3e70;
  }
  bVar1 = *(byte *)(param_1 + 0x14);
  uVar10 = *(uint *)(param_1 + 0x18);
  if ((bVar1 & 1) == 0) {
    uVar10 = (uint)(bVar1 >> 1);
  }
  uVar13 = uVar10 + 1;
  if (0xfffffff7 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar13 < 0xb) {
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = (uint)(byte)((char)uVar13 * '\x02');
    uVar11 = (uint)&uStack_40 | 1;
    if (uVar10 == 0) goto LAB_717f3f04;
  }
  else {
    uVar11 = thunk_MwhHq((uVar13 | 7) + 1);
    uStack_40 = (uVar13 | 7) + 2;
    uStack_3c = uVar13;
    uStack_38 = uVar11;
  }
  iVar8 = *(int *)(param_1 + 0x1c);
  if ((bVar1 & 1) == 0) {
    iVar8 = param_1 + 0x15;
  }
  imp___aeabi_memmove(uVar11,iVar8,uVar10);
LAB_717f3f04:
  *(undefined2 *)(uVar11 + uVar10) = 0x2f;
  uVar10 = *(uint *)(param_1 + 0x24);
  iVar8 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uVar10 = (uint)(*(byte *)(param_1 + 0x20) >> 1);
    iVar8 = param_1 + 0x21;
  }
  puVar7 = (undefined4 *)
           thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                     (&uStack_40,iVar8,uVar10);
  uVar9 = *(undefined4 *)((int)puVar7 + 2);
  uVar2 = *(undefined1 *)puVar7;
  uVar3 = *(undefined1 *)((int)puVar7 + 1);
  *puVar7 = 0;
  uVar4 = *(undefined2 *)((int)puVar7 + 6);
  uVar12 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x120));
  }
  *(undefined4 *)(param_1 + 0x11a) = uVar9;
  *(undefined2 *)(param_1 + 0x11e) = uVar4;
  *(undefined1 *)(param_1 + 0x119) = uVar3;
  *(undefined1 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x120) = uVar12;
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  uVar9 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar7 = (undefined4 *)thunk_MwhHq(8);
  *puVar7 = uVar9;
  puVar7[1] = param_1;
  iVar8 = imp_pthread_create(&uStack_40,0,FUN_717ff914);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar8,s_thread_constructor_failed_70063c8c);
  }
  thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(&uStack_40);
  thunk_uQwrLJbzyUVbHmvQcVNflhV(&uStack_40);
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717f42bc
// Entry: 0x717f42bc | Size: 1780 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717f42bc(int param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uStack_fc;
  uint auStack_f8 [2];
  undefined4 *puStack_f0;
  uint uStack_ec;
  undefined4 auStack_e4 [2];
  undefined *puStack_dc;
  undefined *puStack_d8;
  int iStack_d4;
  uint auStack_cc [13];
  int iStack_98;
  undefined *apuStack_7c [7];
  undefined4 uStack_60;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x131) = 1;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    FUN_717f500c(param_1);
    DataMemoryBarrier(0xb);
    if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
      if (*(int **)(param_1 + 0x88) == (int *)0x0) goto LAB_717f49a4;
      (**(code **)(**(int **)(param_1 + 0x88) + 0x18))();
      if (*(int *)(param_1 + 100) < 1) {
        iVar17 = thunk_MwhHq(0x18);
        puStack_d8 = (undefined *)0x14;
        puStack_dc = (undefined *)0x19;
        iStack_d4 = iVar17;
        imp___aeabi_memcpy(iVar17,s_connectionCount_<__0_70075c90,0x14);
        *(undefined1 *)(iVar17 + 0x14) = 0;
        piVar10 = *(int **)(param_1 + 0xd0);
        if (piVar10 == (int *)0x0) goto LAB_717f49a4;
        (**(code **)(*piVar10 + 0x18))(piVar10,&puStack_dc);
        if (((uint)puStack_dc & 1) != 0) {
          thunk_qNQrlu(iStack_d4);
        }
        goto LAB_717f4454;
      }
      uVar4 = FUN_717f5e04();
      uVar13 = *(uint *)(param_1 + 0x50);
      if ((uVar13 == 0) || (uVar18 = *(uint *)(param_1 + 0xe4), uVar18 <= uVar13)) {
LAB_717f44c8:
        iVar17 = *(int *)(param_1 + 0x120);
        if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
          iVar17 = param_1 + 0x119;
        }
        imp_remove(iVar17);
      }
      else {
        uVar11 = *(uint *)(param_1 + 0x30);
        bVar1 = *(byte *)(param_1 + 0x2c);
        if ((bVar1 & 1) == 0) {
          uVar11 = (uint)(bVar1 >> 1);
        }
        if (uVar11 == 0) goto LAB_717f44c8;
        bVar2 = *(byte *)(param_1 + 0x124);
        uVar15 = *(uint *)(param_1 + 0x128);
        if ((bVar2 & 1) == 0) {
          uVar15 = (uint)(bVar2 >> 1);
        }
        if (uVar11 != uVar15) goto LAB_717f44c8;
        pcVar8 = *(char **)(param_1 + 300);
        if ((bVar2 & 1) == 0) {
          pcVar8 = (char *)(param_1 + 0x125);
        }
        if ((bVar1 & 1) == 0) {
          bVar3 = true;
          if (1 < bVar1) {
            uVar11 = (uint)(bVar1 >> 1);
            pcVar12 = (char *)(param_1 + 0x2d);
            do {
              if (*pcVar12 != *pcVar8) goto LAB_717f44c8;
              pcVar8 = pcVar8 + 1;
              uVar11 = uVar11 - 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar17 = imp_memcmp(*(undefined4 *)(param_1 + 0x34));
          bVar3 = iVar17 == 0;
        }
        if ((uVar4 != uVar18) || (!bVar3)) goto LAB_717f44c8;
        *(uint *)(param_1 + 0xe8) = uVar13;
        *(uint *)(param_1 + 0xec) = uVar13;
        *(uint *)(param_1 + 0xf0) = uVar13;
      }
      iVar17 = 0;
      uStack_60 = 0;
      puStack_dc = &DAT_70b13e64;
      apuStack_7c[0] = &DAT_70b13e78;
      thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_7c,&puStack_d8);
      puStack_dc = &DAT_70b13e2c;
      uStack_34 = 0;
      uStack_30 = 0xffffffff;
      apuStack_7c[0] = &DAT_70b13e40;
      thunk_azjfLPxMogyHkNbyxUJJRuQTBnWZPlhMPCJBlycIPmSzBbRwbMKGmt(&puStack_d8);
      iVar9 = *(int *)(param_1 + 0x120);
      if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
        iVar9 = param_1 + 0x119;
      }
      iVar9 = thunk_RwqzrmzAkMQghYbV_YuXdEAmptcLevTkifczlTccrBfEOfiWtukCLMVhVNtO
                        (&puStack_d8,iVar9,0x1c);
      if (iVar9 == 0) {
        thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                  ((int)&puStack_dc + *(int *)(puStack_dc + -0xc),
                   *(uint *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) | 4);
      }
      if ((iStack_98 == 0) &&
         (thunk_DvnMjaDGTcuvqchgjJALXSMKDBO_jbDCiHzGydVYfqyJrJhrRVmzJXcuMaOjRD_PVGaWanMNsHEyURaZngvJVGSPwIqcNa_LwXQqR
                    (&puStack_dc,param_1 + 0x118,0x14), iStack_98 == 0)) {
        puStack_f0 = (undefined4 *)thunk_MwhHq(0x18);
        *puStack_f0 = 0x6e65704f;
        puStack_f0[1] = 0x6c696620;
        puStack_f0[2] = 0x61662065;
        puStack_f0[3] = 0x64656c69;
        *(undefined1 *)(puStack_f0 + 4) = 0;
        auStack_f8[1] = 0x10;
        auStack_f8[0] = 0x19;
        piVar10 = *(int **)(param_1 + 0xd0);
        if (piVar10 == (int *)0x0) {
LAB_717f49a4:
                    /* WARNING: Subroutine does not return */
          FUN_71539164();
        }
        (**(code **)(*piVar10 + 0x18))(piVar10,auStack_f8);
        if ((auStack_f8[0] & 1) != 0) {
          thunk_qNQrlu(puStack_f0);
        }
LAB_717f494c:
        DataMemoryBarrier(0xb);
        *(undefined1 *)(param_1 + 0x132) = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        iVar9 = *(int *)(param_1 + 0xe4);
        if (iVar9 != 0) {
          thunk_PvgkqSpamLbZrSkGHVYUggfDztprmEjdiqirRAVMMhqnPUmvlqjutKEzVJqDRVoS
                    (auStack_e4,&puStack_dc);
          if (((*(byte *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) & 5) == 0) &&
             (piVar10 = *(int **)((int)auStack_cc + *(int *)(puStack_dc + -0xc) + 8),
             (**(code **)(*piVar10 + 0x14))(auStack_f8,piVar10,0,0,iVar9 + -1,0,0x10),
             ((uint)puStack_f0 & uStack_ec) == 0xffffffff)) {
            thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                      ((int)&puStack_dc + *(int *)(puStack_dc + -0xc),
                       *(uint *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) | 4);
          }
          thunk_IwJFjSZTTKIzSUeBzSWvOofbERBfzNDjjyZpVsRdZ_uQhTxSEIuAGaOTkXzDt(auStack_e4);
          thunk_SyrgGOqkHOjKZxTwhjDUTaNGMiWvTWsQLTIHjeQJWv_nmnoWZsAIZwpjTXGqV
                    (&puStack_dc,&DAT_7008621a,1);
        }
        iVar9 = param_1 + 0x138;
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar9);
        DataMemoryBarrier(0xb);
        if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
          iVar14 = *(int *)(param_1 + 100);
          iVar16 = 0;
          puStack_f0 = (undefined4 *)0x0;
          auStack_f8[1] = 0;
          auStack_f8[0] = 0;
          if (iVar14 != 0) {
            if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_717ffa6c(auStack_f8);
            }
            iVar17 = thunk_MwhHq(iVar14);
            imp___aeabi_memclr(iVar17,iVar14);
            iVar16 = iVar17 + iVar14;
          }
          iVar5 = *(int *)(param_1 + 0x13c);
          if (iVar5 != 0) {
            *(int *)(param_1 + 0x140) = iVar5;
            thunk_qNQrlu();
            iVar14 = *(int *)(param_1 + 100);
          }
          *(int *)(param_1 + 0x13c) = iVar17;
          *(int *)(param_1 + 0x140) = iVar16;
          *(int *)(param_1 + 0x144) = iVar16;
          if (0 < iVar14) {
            iVar17 = 0;
            do {
              DataMemoryBarrier(0xb);
              *(undefined1 *)(*(int *)(param_1 + 0x13c) + iVar17) = 0;
              DataMemoryBarrier(0xb);
              iVar14 = *(int *)(param_1 + 0x13c);
              uVar6 = thunk_MwhHq(4);
              thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
              puVar7 = (undefined4 *)thunk_MwhHq(0x10);
              *puVar7 = uVar6;
              puVar7[1] = param_1;
              puVar7[2] = iVar17;
              puVar7[3] = iVar14 + iVar17;
              iVar14 = imp_pthread_create(auStack_f8,0,FUN_717ffad4,puVar7);
              if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi
                          (iVar14,s_thread_constructor_failed_70063c8c);
              }
              thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_f8);
              thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_f8);
              iVar17 = iVar17 + 1;
            } while (iVar17 < *(int *)(param_1 + 100));
          }
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
          DataMemoryBarrier(0xb);
          if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
            do {
              thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1 + 0xf8);
              uVar4 = *(uint *)(param_1 + 0xe8);
              thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0xf8);
              uStack_fc = uVar4;
              iVar17 = FUN_71886108();
              if (*(uint *)(param_1 + 0x54) < (uint)(iVar17 - *(int *)(param_1 + 0x148))) {
                auStack_e4[0] = *(undefined4 *)(param_1 + 0xe4);
                piVar10 = *(int **)(param_1 + 0xa0);
                auStack_f8[0] = uVar4;
                if (piVar10 == (int *)0x0) goto LAB_717f49a4;
                (**(code **)(*piVar10 + 0x18))(piVar10,auStack_f8,auStack_e4);
                uVar6 = FUN_71886108();
                *(undefined4 *)(param_1 + 0x148) = uVar6;
              }
              FUN_717f6170(param_1,&puStack_dc);
              FUN_717f6550(param_1);
              FUN_717f6f84(param_1,(int *)(param_1 + 0x13c),&uStack_fc,&puStack_dc);
              auStack_f8[0] = 10000000;
              auStack_f8[1] = 0;
              thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
                        (auStack_f8);
              DataMemoryBarrier(0xb);
            } while ((*(byte *)(param_1 + 0x130) & 1) == 0);
          }
          iVar17 = thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF(&puStack_d8);
          if (iVar17 == 0) {
            thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                      ((int)&puStack_dc + *(int *)(puStack_dc + -0xc),
                       *(uint *)((int)auStack_cc + *(int *)(puStack_dc + -0xc)) | 4);
          }
          goto LAB_717f494c;
        }
        DataMemoryBarrier(0xb);
        *(undefined1 *)(param_1 + 0x132) = 1;
        DataMemoryBarrier(0xb);
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
      }
      puStack_dc = &DAT_70b13e2c;
      apuStack_7c[0] = &DAT_70b13e40;
      thunk_wxuswyFjhpJiKeiAszVAwjXUfMjeQrLSXBycuYWdZhMLBBnQZzGWA_(&puStack_d8);
      thunk_JJRaJAVqXjXXFJCnfaqgOAFBIBNGhsrbVgKGcfdLdtYkUBLEodGbFu(&puStack_dc,&DAT_70b13e4c);
      thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_7c);
      goto LAB_717f4464;
    }
LAB_717f4454:
    DataMemoryBarrier(0xb);
  }
  else {
    DataMemoryBarrier(0xb);
  }
  *(undefined1 *)(param_1 + 0x132) = 1;
  DataMemoryBarrier(0xb);
LAB_717f4464:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_717f500c
// Entry: 0x717f500c | Size: 1828 bytes
// =========================================================================

void FUN_717f500c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined4 *puStack_28;
  
  iVar3 = imp_curl_easy_init();
  if (iVar3 == 0) {
    puStack_28 = (undefined4 *)thunk_MwhHq(0x10);
    *puStack_28 = 0x4c525543;
    puStack_28[1] = 0x696e6920;
    puStack_28[2] = 0x72652074;
    *(undefined4 *)((int)puStack_28 + 0xb) = 0x726f7272;
    *(undefined1 *)((int)puStack_28 + 0xf) = 0;
    uStack_2c = 0xf;
    uStack_2b = 0;
    uStack_2a = 0;
    uStack_30 = 0x11;
    piVar14 = *(int **)(param_1 + 0xd0);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x10);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      iVar9 = param_1 + 9;
    }
    imp_curl_easy_setopt(iVar3,0x2712,iVar9);
    imp_curl_easy_setopt(iVar3,0x2c,1);
    imp_curl_easy_setopt(iVar3,0x2a,1);
    imp_curl_easy_setopt(iVar3,0x4e,0xf);
    imp_curl_easy_setopt(iVar3,0x4e6f,&DAT_717f8f40);
    imp_curl_easy_setopt(iVar3,0x272d,param_1);
    imp_curl_easy_setopt(iVar3,0x40,1);
    imp_curl_easy_setopt(iVar3,0x51,2);
    iVar9 = *(int *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      iVar9 = param_1 + 0x39;
    }
    imp_curl_easy_setopt(iVar3,0x2751,iVar9);
    imp_curl_easy_setopt(iVar3,0x54,3);
    imp_curl_easy_setopt(iVar3,0x4e58,&LAB_717f8738);
    imp_curl_easy_setopt(iVar3,0x2749,param_1 + 0x130);
    uVar12 = 0;
    imp_curl_easy_setopt(iVar3,0x2b,0);
    piVar14 = *(int **)(param_1 + 0x68);
    if (piVar14 != (int *)(param_1 + 0x6c)) {
      do {
        bVar1 = *(byte *)(piVar14 + 4);
        uVar10 = piVar14[5];
        if ((bVar1 & 1) == 0) {
          uVar10 = (uint)(bVar1 >> 1);
        }
        uVar13 = uVar10 + 2;
        if (0xfffffff7 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_40);
        }
        if (uVar13 < 0xb) {
          uStack_38 = 0;
          uStack_3c = 0;
          uStack_40 = (uint)(byte)((char)uVar13 * '\x02');
          uVar4 = (uint)&uStack_40 | 1;
          if (uVar10 != 0) goto LAB_717f51d0;
        }
        else {
          uVar4 = thunk_MwhHq((uVar13 | 7) + 1);
          uStack_40 = (uVar13 | 7) + 2;
          uStack_3c = uVar13;
          uStack_38 = uVar4;
LAB_717f51d0:
          iVar9 = piVar14[6];
          if ((bVar1 & 1) == 0) {
            iVar9 = (int)piVar14 + 0x11;
          }
          imp___aeabi_memmove(uVar4,iVar9,uVar10);
        }
        *(undefined2 *)(uVar4 + uVar10) = 0x203a;
        *(undefined1 *)((undefined2 *)(uVar4 + uVar10) + 1) = 0;
        uVar10 = piVar14[8];
        iVar9 = piVar14[9];
        if ((*(byte *)(piVar14 + 7) & 1) == 0) {
          uVar10 = (uint)(*(byte *)(piVar14 + 7) >> 1);
          iVar9 = (int)piVar14 + 0x1d;
        }
        puVar5 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                                   (&uStack_40,iVar9,uVar10);
        uStack_30 = *puVar5;
        uVar10 = puVar5[1];
        puStack_28 = (undefined4 *)puVar5[2];
        uStack_2c = (undefined1)uVar10;
        uStack_2b = (undefined1)(uVar10 >> 8);
        uStack_2a = (undefined2)(uVar10 >> 0x10);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        uVar10 = (uint)puStack_28;
        if ((uStack_30 & 1) == 0) {
          uVar10 = (uint)&uStack_30 | 1;
        }
        uVar12 = imp_curl_slist_append(uVar12,uVar10);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(puStack_28);
        }
        if ((uStack_40 & 1) != 0) {
          thunk_qNQrlu(uStack_38);
        }
        piVar2 = (int *)piVar14[1];
        piVar15 = piVar14;
        if ((int *)piVar14[1] == (int *)0x0) {
          do {
            piVar14 = (int *)piVar15[2];
            bVar16 = (int *)*piVar14 != piVar15;
            piVar15 = piVar14;
          } while (bVar16);
        }
        else {
          do {
            piVar14 = piVar2;
            piVar2 = (int *)*piVar14;
          } while ((int *)*piVar14 != (int *)0x0);
        }
      } while (piVar14 != (int *)(param_1 + 0x6c));
    }
    imp_curl_easy_setopt(iVar3,0x2727,uVar12);
    iVar9 = *(int *)(param_1 + 0x4c);
    if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
      iVar9 = param_1 + 0x45;
    }
    uVar6 = imp_curl_slist_append(0,iVar9);
    imp_curl_easy_setopt(iVar3,0x27db,uVar6);
    iVar9 = imp_curl_easy_perform(iVar3);
    DataMemoryBarrier(0xb);
    if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
      imp_curl_slist_free_all(uVar12);
      imp_curl_slist_free_all(uVar6);
      imp_curl_easy_cleanup(iVar3);
      return;
    }
    if (iVar9 != 0) {
      thunk_JTLCYfEcbCeQVXSyFtQFASTx(&uStack_40);
      puVar5 = (uint *)thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                                 (&uStack_40,0,s_Headers_error_7006e60a);
      uStack_30 = *puVar5;
      uVar10 = puVar5[1];
      puStack_28 = (undefined4 *)puVar5[2];
      uStack_2c = (undefined1)uVar10;
      uStack_2b = (undefined1)(uVar10 >> 8);
      uStack_2a = (undefined2)(uVar10 >> 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      if ((uStack_40 & 1) != 0) {
        thunk_qNQrlu(uStack_38);
      }
      piVar14 = *(int **)(param_1 + 0xd0);
      if (piVar14 == (int *)0x0) goto LAB_717f5724;
      (**(code **)(*piVar14 + 0x18))(piVar14,&uStack_30);
      imp_curl_slist_free_all(uVar12);
      imp_curl_slist_free_all(uVar6);
      imp_curl_easy_cleanup(iVar3);
      goto LAB_717f5414;
    }
    imp_curl_slist_free_all(uVar12);
    imp_curl_slist_free_all(uVar6);
    imp_curl_easy_cleanup(iVar3);
    puStack_28 = (undefined4 *)thunk_MwhHq(0x10);
    *(undefined2 *)(puStack_28 + 3) = 0x6874;
    *puStack_28 = 0x746e6f43;
    *(undefined1 *)((int)puStack_28 + 0xe) = 0;
    piVar14 = (int *)(param_1 + 0xd8);
    puStack_28[1] = 0x2d746e65;
    puStack_28[2] = 0x676e654c;
    uStack_2c = 0xe;
    uStack_2b = 0;
    uStack_2a = 0;
    uStack_30 = 0x11;
    iVar3 = FUN_7180093c(piVar14,&uStack_30);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(puStack_28);
    }
    if (param_1 + 0xdc != iVar3) {
      puStack_28 = (undefined4 *)thunk_MwhHq(0x10);
      puStack_28[1] = 0x2d746e65;
      *(undefined2 *)(puStack_28 + 3) = 0x6874;
      *puStack_28 = 0x746e6f43;
      puStack_28[2] = 0x676e654c;
      *(undefined1 *)((int)puStack_28 + 0xe) = 0;
      uStack_2c = 0xe;
      uStack_2b = 0;
      uStack_2a = 0;
      uStack_30 = 0x11;
      puVar7 = (undefined4 *)FUN_715f2a38(piVar14,&uStack_40,&uStack_30);
      puVar11 = (undefined4 *)*puVar7;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)thunk_MwhHq(0x28);
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[4] = uStack_30;
        puVar11[5] = CONCAT22(uStack_2a,CONCAT11(uStack_2b,uStack_2c));
        puVar11[6] = puStack_28;
        puVar11[7] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = uStack_40;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_2b = 0;
        uStack_2a = 0;
        puStack_28 = (undefined4 *)0x0;
        *puVar7 = puVar11;
        puVar8 = puVar11;
        if (*(int *)*piVar14 != 0) {
          *piVar14 = *(int *)*piVar14;
          puVar8 = (undefined4 *)*puVar7;
        }
        FUN_712f807c(*(undefined4 *)(param_1 + 0xdc),puVar8);
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      }
      iVar3 = puVar11[9];
      if ((*(byte *)(puVar11 + 7) & 1) == 0) {
        iVar3 = (int)puVar11 + 0x1d;
      }
      uVar12 = imp_atoll(iVar3);
      *(undefined4 *)(param_1 + 0xe4) = uVar12;
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(puStack_28);
      }
      uStack_2b = 0;
      uStack_30 = 0x61544508;
      uStack_2c = 0x67;
      iVar3 = FUN_7180093c(piVar14,&uStack_30);
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(puStack_28);
      }
      if (param_1 + 0xdc == iVar3) {
        return;
      }
      uStack_2b = 0;
      uStack_30 = 0x61544508;
      uStack_2c = 0x67;
      puVar7 = (undefined4 *)FUN_715f2a38(piVar14,&uStack_40,&uStack_30);
      puVar11 = (undefined4 *)*puVar7;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)thunk_MwhHq(0x28);
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[4] = uStack_30;
        puVar11[5] = CONCAT22(uStack_2a,CONCAT11(uStack_2b,uStack_2c));
        puVar11[6] = puStack_28;
        puVar11[7] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = uStack_40;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_2b = 0;
        uStack_2a = 0;
        puStack_28 = (undefined4 *)0x0;
        *puVar7 = puVar11;
        puVar8 = puVar11;
        if (*(int *)*piVar14 != 0) {
          *piVar14 = *(int *)*piVar14;
          puVar8 = (undefined4 *)*puVar7;
        }
        FUN_712f807c(*(undefined4 *)(param_1 + 0xdc),puVar8);
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      }
      thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                (param_1 + 0x124,puVar11 + 7);
      goto LAB_717f5414;
    }
    puVar7 = (undefined4 *)thunk_MwhHq(0x18);
    uStack_2c = 0x14;
    uStack_2b = 0;
    uStack_2a = 0;
    uStack_30 = 0x19;
    puStack_28 = puVar7;
    imp___aeabi_memcpy(puVar7,s_Content_Length_error_70075aa0,0x14);
    *(undefined1 *)(puVar7 + 5) = 0;
    piVar14 = *(int **)(param_1 + 0xd0);
  }
  if (piVar14 == (int *)0x0) {
LAB_717f5724:
                    /* WARNING: Subroutine does not return */
    FUN_71539164();
  }
  (**(code **)(*piVar14 + 0x18))(piVar14,&uStack_30);
LAB_717f5414:
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(puStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_717f5e04
// Entry: 0x717f5e04 | Size: 384 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717f5e04(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined1 auStack_f0 [20];
  undefined *apuStack_dc [2];
  undefined1 auStack_d4 [8];
  uint auStack_cc [14];
  int iStack_94;
  undefined *apuStack_78 [7];
  undefined4 uStack_5c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uStack_5c = 0;
  apuStack_dc[0] = &DAT_70b13dd4;
  apuStack_78[0] = &DAT_70b13de8;
  apuStack_dc[1] = (undefined *)0x0;
  thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_78,auStack_d4);
  apuStack_dc[0] = &DAT_70b13d9c;
  uStack_30 = 0;
  uStack_2c = 0xffffffff;
  apuStack_78[0] = &DAT_70b13db0;
  thunk_azjfLPxMogyHkNbyxUJJRuQTBnWZPlhMPCJBlycIPmSzBbRwbMKGmt(auStack_d4);
  pbVar2 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  iVar1 = thunk_RwqzrmzAkMQghYbV_YuXdEAmptcLevTkifczlTccrBfEOfiWtukCLMVhVNtO(auStack_d4,pbVar2,0xe);
  if (iVar1 == 0) {
    thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
              ((int)apuStack_dc + *(int *)(apuStack_dc[0] + -0xc),
               *(uint *)((int)auStack_cc + *(int *)(apuStack_dc[0] + -0xc)) | 4);
  }
  if (iStack_94 != 0) {
    thunk_wbASMAxZzWjKdanmdVIXrT_SOMBkfHvErxLcEKmOHqCzeXaUpTEEXsnTpC(auStack_f0,apuStack_dc);
    iVar1 = thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF(auStack_d4);
    if (iVar1 == 0) {
      thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd
                ((int)apuStack_dc + *(int *)(apuStack_dc[0] + -0xc),
                 *(uint *)((int)auStack_cc + *(int *)(apuStack_dc[0] + -0xc)) | 4);
    }
  }
  apuStack_dc[0] = &DAT_70b13d9c;
  apuStack_78[0] = &DAT_70b13db0;
  thunk_wxuswyFjhpJiKeiAszVAwjXUfMjeQrLSXBycuYWdZhMLBBnQZzGWA_(auStack_d4);
  thunk_DhNFDYkimsodFXaqFoxFvGpEvVmaAoNDguokgwPHfvblltnSiOJqIZ(apuStack_dc,&DAT_70b13dbc);
  thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_78);
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_717f6170
// Entry: 0x717f6170 | Size: 604 bytes
// =========================================================================

void FUN_717f6170(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 auStack_40 [8];
  uint uStack_38;
  uint uStack_34;
  undefined1 auStack_2c [8];
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  piVar5 = *(int **)(param_1 + 0xfc);
  piVar6 = *(int **)(param_1 + 0x100);
  if (piVar5 != piVar6) {
    do {
      if (*piVar5 != 0) {
        iVar7 = piVar5[1];
        thunk_PvgkqSpamLbZrSkGHVYUggfDztprmEjdiqirRAVMMhqnPUmvlqjutKEzVJqDRVoS(auStack_2c,param_2);
        if (((*(byte *)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x10) & 5) == 0) &&
           (piVar6 = *(int **)((int)param_2 + *(int *)(*param_2 + -0xc) + 0x18),
           (**(code **)(*piVar6 + 0x14))(auStack_40,piVar6,0,0,iVar7,0,0x10),
           (uStack_38 & uStack_34) == 0xffffffff)) {
          iVar7 = (int)param_2 + *(int *)(*param_2 + -0xc);
          thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd(iVar7,*(uint *)(iVar7 + 0x10) | 4);
        }
        thunk_IwJFjSZTTKIzSUeBzSWvOofbERBfzNDjjyZpVsRdZ_uQhTxSEIuAGaOTkXzDt(auStack_2c);
        thunk_SyrgGOqkHOjKZxTwhjDUTaNGMiWvTWsQLTIHjeQJWv_nmnoWZsAIZwpjTXGqV
                  (param_2,*piVar5,piVar5[2]);
        if (*piVar5 != 0) {
          thunk_dGrRHE();
        }
        *piVar5 = 0;
        piVar6 = *(int **)(param_1 + 0x10c);
        if (piVar6 < *(int **)(param_1 + 0x110)) {
          iVar7 = piVar5[1];
          iVar3 = piVar5[2];
          piVar9 = piVar6 + 3;
          *piVar6 = *piVar5;
          piVar6[1] = iVar7;
          piVar6[2] = iVar3;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x108);
          iVar3 = (int)piVar6 - iVar7;
          uVar8 = (iVar3 >> 2) * -0x55555555 + 1;
          if (0x15555555 < uVar8) {
            FUN_717ffbec((int *)(param_1 + 0x108));
LAB_717f63c8:
                    /* WARNING: Subroutine does not return */
            FUN_712f6cf0();
          }
          iVar1 = (int)*(int **)(param_1 + 0x110) - iVar7 >> 2;
          if (uVar8 < (uint)(iVar1 * 0x55555556)) {
            uVar8 = iVar1 * 0x55555556;
          }
          if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
            uVar8 = 0x15555555;
          }
          if (uVar8 == 0) {
            iVar1 = 0;
          }
          else {
            if (0x15555555 < uVar8) goto LAB_717f63c8;
            iVar1 = thunk_MwhHq(uVar8 * 0xc);
          }
          iVar2 = piVar5[1];
          iVar4 = piVar5[2];
          piVar6 = (int *)(iVar1 + (iVar3 >> 2) * 4);
          *piVar6 = *piVar5;
          piVar6[1] = iVar2;
          piVar6[2] = iVar4;
          imp___aeabi_memcpy4((int)piVar6 - iVar3,iVar7,iVar3);
          piVar9 = piVar6 + 3;
          *(int *)(param_1 + 0x108) = (int)piVar6 - iVar3;
          *(int **)(param_1 + 0x10c) = piVar9;
          *(uint *)(param_1 + 0x110) = iVar1 + uVar8 * 0xc;
          if (iVar7 != 0) {
            thunk_qNQrlu(iVar7);
          }
        }
        *(int **)(param_1 + 0x10c) = piVar9;
        piVar6 = *(int **)(param_1 + 0x100);
      }
      iVar7 = (int)piVar6 - (int)(piVar5 + 3);
      if (iVar7 != 0) {
        imp___aeabi_memmove4(piVar5,piVar5 + 3,iVar7);
      }
      piVar6 = (int *)((int)piVar5 + iVar7);
      *(int **)(param_1 + 0x100) = piVar6;
    } while (piVar5 != piVar6);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0x114);
  return;
}


// =========================================================================
// Function: FUN_717f6550
// Entry: 0x717f6550 | Size: 1592 bytes
// =========================================================================

void FUN_717f6550(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined3 uStack_38;
  undefined4 uStack_34;
  undefined3 uStack_30;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
  iVar18 = *(int *)(param_1 + 0x108);
  iVar12 = *(int *)(param_1 + 0x10c);
  if (iVar18 != iVar12) {
    do {
      while (*(int *)(param_1 + 0xf0) != *(int *)(iVar18 + 4)) {
        iVar18 = iVar18 + 0xc;
        if (iVar18 == iVar12) goto LAB_717f65c4;
      }
      *(int *)(param_1 + 0xf0) = *(int *)(iVar18 + 8) + *(int *)(param_1 + 0xf0);
      iVar12 = iVar12 - (iVar18 + 0xc);
      if (iVar12 != 0) {
        imp___aeabi_memmove4(iVar18,iVar18 + 0xc,iVar12);
      }
      iVar12 = iVar18 + iVar12;
      *(int *)(param_1 + 0x10c) = iVar12;
    } while (iVar18 != iVar12);
  }
LAB_717f65c4:
  iVar12 = FUN_71886108();
  if (1000 < (uint)(iVar12 - *(int *)(param_1 + 0x14c))) {
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uStack_48 = *(uint *)(param_1 + 8);
      uStack_44 = *(undefined4 *)(param_1 + 0xc);
      uStack_40 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      FUN_712f6d58(&uStack_48,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
    }
    if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
      uStack_58 = *(uint *)(param_1 + 0x118);
      uStack_54 = *(undefined4 *)(param_1 + 0x11c);
      uStack_50 = *(undefined4 *)(param_1 + 0x120);
    }
    else {
      FUN_712f6d58(&uStack_58,*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x11c));
    }
    if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
      uStack_68 = *(uint *)(param_1 + 0x124);
      uStack_64 = *(undefined4 *)(param_1 + 0x128);
      uStack_60 = *(undefined4 *)(param_1 + 300);
    }
    else {
      FUN_712f6d58(&uStack_68,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x128));
    }
    uVar23 = *(undefined4 *)(param_1 + 0xf0);
    iVar12 = thunk_NSvtcoRaEJbwwqcTwihB_gGUKPDWhmLINE_PEvgc(&DAT_71201dec);
    if (iVar12 != 0) {
      if ((uStack_48 & 1) == 0) {
        uStack_90 = uStack_48;
        uStack_8c = uStack_44;
        uStack_88 = uStack_40;
      }
      else {
        FUN_712f6d58(&uStack_90,uStack_40,uStack_44);
      }
      if ((uStack_58 & 1) == 0) {
        uStack_84 = uStack_58;
        uStack_80 = uStack_54;
        uStack_7c = uStack_50;
      }
      else {
        FUN_712f6d58(&uStack_84,uStack_50,uStack_54);
      }
      if ((uStack_68 & 1) == 0) {
        uStack_78 = uStack_68;
        uStack_74 = uStack_64;
        uStack_70 = uStack_60;
      }
      else {
        FUN_712f6d58(&uStack_78,uStack_60,uStack_64);
      }
      uVar11 = uStack_70;
      uVar9 = uStack_7c;
      uVar8 = uStack_80;
      uVar4 = uStack_84;
      uVar6 = uStack_88;
      uVar5 = uStack_8c;
      uVar24 = uStack_90;
      piVar2 = DAT_71201de4;
      piVar21 = DAT_71201de0;
      uStack_6c = uVar23;
      if (DAT_71201de4 < DAT_71201de8) {
        uStack_3c = CONCAT13((undefined1)uStack_74,uStack_78._1_3_);
        uStack_38 = (undefined3)((uint)uStack_74 >> 8);
        uVar3 = (undefined1)uStack_90;
        uStack_80 = 0;
        uStack_84 = 0;
        uStack_7c = 0;
        uVar10 = (undefined1)uStack_78;
        uStack_8c = 0;
        uStack_90 = 0;
        uStack_2c._0_3_ = (undefined3)(uVar24 >> 8);
        uStack_2c._3_1_ = (undefined1)uVar5;
        uStack_28 = (undefined3)((uint)uVar5 >> 8);
        uStack_88 = 0;
        uStack_34._0_3_ = (undefined3)(uVar4 >> 8);
        uStack_34._3_1_ = (undefined1)uVar8;
        uStack_30 = (undefined3)((uint)uVar8 >> 8);
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        puVar13 = (undefined4 *)thunk_MwhHq(0x2c);
        *(undefined1 *)(puVar13 + 1) = uVar3;
        piVar22 = piVar2 + 6;
        *(undefined1 *)(puVar13 + 7) = uVar10;
        *puVar13 = &DAT_70b0f990;
        *(char *)(puVar13 + 4) = (char)uVar4;
        puVar13[3] = uVar6;
        *(undefined4 *)((int)puVar13 + 5) = uStack_2c;
        puVar13[2] = CONCAT31(uStack_28,uStack_2c._3_1_);
        *(undefined4 *)((int)puVar13 + 0x11) = uStack_34;
        puVar13[5] = CONCAT31(uStack_30,uStack_34._3_1_);
        *(undefined4 *)((int)puVar13 + 0x1d) = uStack_3c;
        puVar13[9] = uVar11;
        puVar13[6] = uVar9;
        puVar13[8] = CONCAT31(uStack_38,uStack_3c._3_1_);
        puVar13[10] = uVar23;
        piVar2[4] = (int)puVar13;
      }
      else {
        iVar18 = (int)DAT_71201de4 - (int)DAT_71201de0;
        iVar12 = iVar18 >> 3;
        uVar24 = iVar12 * -0x55555555 + 1;
        if (0xaaaaaaa < uVar24) {
          FUN_717fc054(&DAT_71201de0);
LAB_717f6b84:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        iVar14 = 0;
        iVar1 = (int)DAT_71201de8 - (int)DAT_71201de0 >> 3;
        if (uVar24 < (uint)(iVar1 * 0x55555556)) {
          uVar24 = iVar1 * 0x55555556;
        }
        if (0x5555554 < (uint)(iVar1 * -0x55555555)) {
          uVar24 = 0xaaaaaaa;
        }
        if (uVar24 != 0) {
          if (0xaaaaaaa < uVar24) goto LAB_717f6b84;
          iVar14 = thunk_MwhHq(uVar24 * 0x18);
        }
        uVar9 = uStack_70;
        uVar8 = uStack_7c;
        uVar6 = uStack_80;
        uVar7 = uStack_84;
        uVar5 = uStack_88;
        uVar4 = uStack_90;
        uStack_3c = CONCAT13((undefined1)uStack_74,uStack_78._1_3_);
        uStack_38 = (undefined3)((uint)uStack_74 >> 8);
        uStack_2c._0_3_ = (undefined3)(uStack_90 >> 8);
        uStack_2c._3_1_ = (undefined1)uStack_8c;
        uStack_28 = (undefined3)((uint)uStack_8c >> 8);
        uStack_80 = 0;
        uStack_84 = 0;
        uStack_7c = 0;
        uVar3 = (undefined1)uStack_78;
        uStack_8c = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_34._0_3_ = (undefined3)(uVar7 >> 8);
        uStack_34._3_1_ = (undefined1)uVar6;
        uStack_30 = (undefined3)((uint)uVar6 >> 8);
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        puVar13 = (undefined4 *)thunk_MwhHq(0x2c);
        *(char *)(puVar13 + 1) = (char)uVar4;
        *(undefined1 *)(puVar13 + 7) = uVar3;
        *puVar13 = &DAT_70b0f990;
        *(char *)(puVar13 + 4) = (char)uVar7;
        puVar13[3] = uVar5;
        puVar13[6] = uVar8;
        *(undefined4 *)((int)puVar13 + 5) = uStack_2c;
        puVar13[2] = CONCAT31(uStack_28,uStack_2c._3_1_);
        *(undefined4 *)((int)puVar13 + 0x11) = uStack_34;
        puVar13[5] = CONCAT31(uStack_30,uStack_34._3_1_);
        *(undefined4 *)((int)puVar13 + 0x1d) = uStack_3c;
        puVar13[8] = CONCAT31(uStack_38,uStack_3c._3_1_);
        puVar13[9] = uVar9;
        puVar13[10] = uVar23;
        iVar12 = iVar14 + iVar12 * 8;
        piVar22 = (int *)(iVar12 + 0x18);
        *(undefined4 **)(iVar12 + 0x10) = puVar13;
        piVar19 = (int *)(iVar14 + uVar24 * 0x18);
        piVar15 = (int *)(iVar12 - iVar18);
        piVar17 = piVar21;
        piVar20 = piVar15;
        piVar16 = piVar2;
        if (piVar21 != piVar2) {
          do {
            piVar16 = (int *)piVar17[4];
            if (piVar16 == (int *)0x0) {
              piVar20[4] = 0;
            }
            else if (piVar17 == piVar16) {
              piVar20[4] = (int)piVar20;
              (**(code **)(*piVar17 + 0xc))(piVar17,piVar20);
            }
            else {
              piVar20[4] = (int)piVar16;
              piVar17[4] = 0;
            }
            piVar17 = piVar17 + 6;
            piVar20 = piVar20 + 6;
          } while (piVar17 != piVar2);
          do {
            piVar17 = (int *)piVar21[4];
            if (piVar21 == piVar17) {
              iVar12 = 0x10;
              piVar17 = piVar21;
LAB_717f6a7c:
              (**(code **)(*piVar17 + iVar12))();
            }
            else {
              iVar12 = 0x14;
              if (piVar17 != (int *)0x0) goto LAB_717f6a7c;
            }
            piVar21 = piVar21 + 6;
            piVar16 = DAT_71201de0;
          } while (piVar21 != piVar2);
        }
        DAT_71201de0 = piVar15;
        DAT_71201de8 = piVar19;
        if (piVar16 != (int *)0x0) {
          DAT_71201de4 = piVar22;
          thunk_qNQrlu(piVar16);
        }
      }
      DAT_71201de4 = piVar22;
      if ((uStack_78 & 1) != 0) {
        thunk_qNQrlu(uStack_70);
      }
      if ((uStack_84 & 1) != 0) {
        thunk_qNQrlu(uStack_7c);
      }
      if ((uStack_90 & 1) != 0) {
        thunk_qNQrlu(uStack_88);
      }
      thunk_oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx(&DAT_71201dec);
      uVar23 = FUN_71886108();
      *(undefined4 *)(param_1 + 0x14c) = uVar23;
    }
    if ((uStack_68 & 1) != 0) {
      thunk_qNQrlu(uStack_60);
    }
    if ((uStack_58 & 1) != 0) {
      thunk_qNQrlu(uStack_50);
    }
    if ((uStack_48 & 1) != 0) {
      thunk_qNQrlu(uStack_40);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717f6f84
// Entry: 0x717f6f84 | Size: 424 bytes
// =========================================================================

void FUN_717f6f84(int param_1,undefined4 *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint auStack_24 [3];
  
  DataMemoryBarrier(0xb);
  iVar4 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x134) < iVar4 * 3) {
    pbVar5 = (byte *)*param_2;
    iVar2 = 0;
    if (pbVar5 != (byte *)param_2[1]) {
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        DataMemoryBarrier(0xb);
        iVar2 = iVar2 + (bVar1 & 1);
      } while (pbVar5 != (byte *)param_2[1]);
      iVar4 = *(int *)(param_1 + 100);
    }
    if (iVar2 != iVar4) {
      return;
    }
    if (*(uint *)(param_1 + 0xe4) <= *param_3) {
      if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xb8) + 0x18))();
        iVar4 = thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF(param_4 + 1);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = (int)param_4 + *(int *)(*param_4 + -0xc);
        thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd(iVar4,*(uint *)(iVar4 + 0x10) | 4);
        return;
      }
      goto LAB_717f7128;
    }
    iVar4 = thunk_MwhHq(0x28);
    auStack_24[1] = 0x24;
    auStack_24[0] = 0x29;
    auStack_24[2] = iVar4;
    imp___aeabi_memcpy(iVar4,s_Threads_ends_but_file_not_downlo_70075960,0x24);
    *(undefined1 *)(iVar4 + 0x24) = 0;
  }
  else {
    iVar4 = thunk_MwhHq(0x18);
    auStack_24[1] = 0x17;
    auStack_24[0] = 0x19;
    auStack_24[2] = iVar4;
    imp___aeabi_memcpy(iVar4,s_Request_error_in_thread_70075b68,0x17);
    *(undefined1 *)(iVar4 + 0x17) = 0;
  }
  piVar3 = *(int **)(param_1 + 0xd0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(piVar3,auStack_24);
    if ((auStack_24[0] & 1) != 0) {
      thunk_qNQrlu(auStack_24[2]);
    }
    iVar4 = thunk_oqNOvOAfqShVXSMjjGG_NGlzgujEYwsztyucVgcRkJvxnPuZnMqlLMf_DF(param_4 + 1);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = (int)param_4 + *(int *)(*param_4 + -0xc);
    thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd(iVar4,*(uint *)(iVar4 + 0x10) | 4);
    return;
  }
LAB_717f7128:
                    /* WARNING: Subroutine does not return */
  FUN_71539164();
}


// =========================================================================
// Function: FUN_717f729c
// Entry: 0x717f729c | Size: 1924 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717f729c(int param_1,undefined4 param_2,undefined1 *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  uint auStack_d8 [4];
  uint uStack_c8;
  undefined4 *puStack_c4;
  byte *pbStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    iVar3 = imp_curl_easy_init();
    if (iVar3 != 0) {
      iVar9 = *(int *)(param_1 + 0x10);
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        iVar9 = param_1 + 9;
      }
      imp_curl_easy_setopt(iVar3,0x2712,iVar9);
      imp_curl_easy_setopt(iVar3,0x40,1);
      imp_curl_easy_setopt(iVar3,0x51,2);
      iVar9 = *(int *)(param_1 + 0x40);
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        iVar9 = param_1 + 0x39;
      }
      imp_curl_easy_setopt(iVar3,0x2751,iVar9);
      imp_curl_easy_setopt(iVar3,0x4e,0xf);
      imp_curl_easy_setopt(iVar3,0x54,3);
      imp_curl_easy_setopt(iVar3,0x2776,&DAT_70064a63);
      imp_curl_easy_setopt(iVar3,0x62,*(undefined4 *)(param_1 + 0x5c));
      piVar14 = *(int **)(param_1 + 0x68);
      if (piVar14 == (int *)(param_1 + 0x6c)) {
        uStack_ec = 0;
      }
      else {
        uStack_ec = 0;
        do {
          bVar1 = *(byte *)(piVar14 + 4);
          uVar10 = piVar14[5];
          if ((bVar1 & 1) == 0) {
            uVar10 = (uint)(bVar1 >> 1);
          }
          puVar13 = (undefined4 *)(uVar10 + 2);
          if ((undefined4 *)0xfffffff7 < puVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_c8);
          }
          if (puVar13 < (undefined4 *)0xb) {
            pbStack_c0 = (byte *)0x0;
            puStack_c4 = (undefined4 *)0x0;
            uStack_c8 = (uint)(byte)((char)puVar13 * '\x02');
            pbVar11 = (byte *)((uint)&uStack_c8 | 1);
            if (uVar10 != 0) goto LAB_717f743c;
          }
          else {
            pbVar11 = (byte *)thunk_MwhHq(((uint)puVar13 | 7) + 1);
            uStack_c8 = ((uint)puVar13 | 7) + 2;
            puStack_c4 = puVar13;
            pbStack_c0 = pbVar11;
LAB_717f743c:
            iVar9 = piVar14[6];
            if ((bVar1 & 1) == 0) {
              iVar9 = (int)piVar14 + 0x11;
            }
            imp___aeabi_memmove(pbVar11,iVar9,uVar10);
          }
          pbVar11 = pbVar11 + uVar10;
          pbVar11[0] = 0x3a;
          pbVar11[1] = 0x20;
          pbVar11[2] = 0;
          uVar10 = piVar14[8];
          iVar9 = piVar14[9];
          if ((*(byte *)(piVar14 + 7) & 1) == 0) {
            uVar10 = (uint)(*(byte *)(piVar14 + 7) >> 1);
            iVar9 = (int)piVar14 + 0x1d;
          }
          puVar4 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                                     (&uStack_c8,iVar9,uVar10);
          uStack_b0 = *puVar4;
          uStack_ac = puVar4[1];
          uStack_a8 = puVar4[2];
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          uVar10 = uStack_a8;
          if ((uStack_b0 & 1) == 0) {
            uVar10 = (uint)&uStack_b0 | 1;
          }
          uStack_ec = imp_curl_slist_append(uStack_ec,uVar10);
          if ((uStack_b0 & 1) != 0) {
            thunk_qNQrlu(uStack_a8);
          }
          if ((uStack_c8 & 1) != 0) {
            thunk_qNQrlu(pbStack_c0);
          }
          piVar2 = (int *)piVar14[1];
          piVar15 = piVar14;
          if ((int *)piVar14[1] == (int *)0x0) {
            do {
              piVar14 = (int *)piVar15[2];
              bVar16 = (int *)*piVar14 != piVar15;
              piVar15 = piVar14;
            } while (bVar16);
          }
          else {
            do {
              piVar14 = piVar2;
              piVar2 = (int *)*piVar14;
            } while ((int *)*piVar14 != (int *)0x0);
          }
        } while (piVar14 != (int *)(param_1 + 0x6c));
      }
      imp_curl_easy_setopt(iVar3,0x2727,uStack_ec);
      iVar9 = *(int *)(param_1 + 0x4c);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        iVar9 = param_1 + 0x45;
      }
      uVar5 = imp_curl_slist_append(0,iVar9);
      imp_curl_easy_setopt(iVar3,0x27db);
      DataMemoryBarrier(0xb);
      if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
        pbVar11 = (byte *)(param_1 + 0x130);
        iVar9 = param_1 + 0xf4;
        piVar14 = (int *)(param_1 + 0x134);
        do {
          thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar9);
          uVar10 = *(uint *)(param_1 + 0xec);
          if (*(uint *)(param_1 + 0xe4) <= uVar10) {
            thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
            break;
          }
          *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0x5c) + uVar10;
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar9);
          do {
            uVar6 = *(int *)(param_1 + 0x5c) + uVar10;
            uVar8 = *(uint *)(param_1 + 0xe4);
            if (uVar6 < *(uint *)(param_1 + 0xe4)) {
              uVar8 = uVar6;
            }
            FUN_717f8274(&uStack_b0);
            uVar12 = *(undefined4 *)(param_1 + 0x5c);
            uVar6 = thunk_rMLVpBatktRctmEtzNK(uVar12,&DAT_7009c3d9);
            if (uVar6 == 0) {
              pbVar11 = (byte *)thunk_MwhHq(0x18);
              puStack_c4 = (undefined4 *)0x14;
              uStack_c8 = 0x19;
              pbStack_c0 = pbVar11;
              imp___aeabi_memcpy(pbVar11,s_Buffer_not_allocated_70075c38,0x14);
              pbVar11[0x14] = 0;
              piVar14 = *(int **)(param_1 + 0xd0);
              if (piVar14 == (int *)0x0) goto LAB_717f7a1c;
              (**(code **)(*piVar14 + 0x18))(piVar14,&uStack_c8);
              if ((uStack_c8 & 1) != 0) {
                thunk_qNQrlu(pbStack_c0);
              }
              imp_curl_slist_free_all(uStack_ec);
              imp_curl_slist_free_all(uVar5);
              imp_curl_easy_cleanup(iVar3);
              DataMemoryBarrier(0xb);
              *param_3 = 1;
              goto LAB_717f7590;
            }
            puStack_c4 = &uStack_b4;
            uStack_b4 = 0;
            auStack_d8[2] = 0;
            auStack_d8[1] = 0;
            auStack_d8[0] = 0;
            uStack_c8 = uVar6;
            pbStack_c0 = pbVar11;
            uStack_bc = uVar12;
            imp_curl_easy_setopt(iVar3,0x4e2b,FUN_717f8304);
            imp_curl_easy_setopt(iVar3,0x2711,&uStack_c8);
            imp_curl_easy_setopt(iVar3,0x2717,&uStack_b0);
            imp_curl_easy_setopt(iVar3,0x4e6f,FUN_717f83a8);
            imp_curl_easy_setopt(iVar3,0x272d,auStack_d8);
            imp_curl_easy_setopt(iVar3,0x4e58,&LAB_717f8738);
            imp_curl_easy_setopt(iVar3,0x2749,pbVar11);
            imp_curl_easy_setopt(iVar3,0x2b,0);
            iVar7 = imp_curl_easy_perform(iVar3);
            DataMemoryBarrier(0xb);
            if ((*pbVar11 & 1) == 0) {
              if (iVar7 == 0) {
                iVar7 = FUN_717f8760(param_1,auStack_d8);
                if (iVar7 == 0) {
                  thunk_dGrRHE(uVar6);
                  imp_curl_slist_free_all(uStack_ec);
                  imp_curl_slist_free_all(uVar5);
                  imp_curl_easy_cleanup(iVar3);
                  DataMemoryBarrier(0xb);
                  iVar7 = 1;
                  *param_3 = 1;
                  DataMemoryBarrier(0xb);
                }
                else {
                  uStack_e8 = uVar6;
                  uStack_e4 = uVar10;
                  iStack_e0 = uVar8 - uVar10;
                  FUN_717f8b24(param_1,&uStack_e8);
                  thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1 + 0xf8);
                  *(uint *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + (uVar8 - uVar10);
                  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0xf8);
                  iVar7 = 0;
                }
              }
              else {
                thunk_dGrRHE(uVar6);
                DataMemoryBarrier(0xb);
                do {
                  bVar16 = (bool)hasExclusiveAccess(piVar14);
                } while (!bVar16);
                *piVar14 = *piVar14 + 1;
                DataMemoryBarrier(0xb);
                DataMemoryBarrier(0xb);
                if ((*pbVar11 & 1) == 0) {
                  uStack_e4 = 0;
                  uStack_e8 = 200000000;
                  thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
                            (&uStack_e8);
                  iVar7 = 6;
                }
                else {
                  imp_curl_slist_free_all(uStack_ec);
                  imp_curl_slist_free_all(uVar5);
                  imp_curl_easy_cleanup(iVar3);
                  DataMemoryBarrier(0xb);
                  iVar7 = 1;
                  *param_3 = 1;
                  DataMemoryBarrier(0xb);
                }
              }
            }
            else {
              thunk_dGrRHE(uVar6);
              imp_curl_slist_free_all(uStack_ec);
              imp_curl_slist_free_all(uVar5);
              imp_curl_easy_cleanup(iVar3);
              DataMemoryBarrier(0xb);
              iVar7 = 1;
              *param_3 = 1;
              DataMemoryBarrier(0xb);
            }
            if ((auStack_d8[0] & 1) != 0) {
              thunk_qNQrlu(auStack_d8[2]);
            }
          } while (iVar7 == 6);
          if (iVar7 != 0) goto LAB_717f7594;
          DataMemoryBarrier(0xb);
        } while ((*pbVar11 & 1) == 0);
      }
      imp_curl_slist_free_all(uStack_ec);
      imp_curl_slist_free_all(uVar5);
      imp_curl_easy_cleanup(iVar3);
      DataMemoryBarrier(0xb);
      *param_3 = 1;
      goto LAB_717f7590;
    }
    uVar10 = thunk_MwhHq(0x20);
    uStack_ac = 0x19;
    uStack_b0 = 0x21;
    uStack_a8 = uVar10;
    imp___aeabi_memcpy(uVar10,s_CURL_init_error_in_thread_700759e0,0x19);
    *(undefined1 *)(uVar10 + 0x19) = 0;
    piVar14 = *(int **)(param_1 + 0xd0);
    if (piVar14 == (int *)0x0) {
LAB_717f7a1c:
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    (**(code **)(*piVar14 + 0x18))(piVar14,&uStack_b0);
    if ((uStack_b0 & 1) != 0) {
      thunk_qNQrlu(uStack_a8);
    }
  }
  DataMemoryBarrier(0xb);
  *param_3 = 1;
LAB_717f7590:
  DataMemoryBarrier(0xb);
LAB_717f7594:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_717f8274
// Entry: 0x717f8274 | Size: 60 bytes
// =========================================================================

void FUN_717f8274(undefined4 param_1)

{
  imp___vsnprintf_chk(param_1,0x80,0,0x80,s__zu__zu_70063e63,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_717f8304
// Entry: 0x717f8304 | Size: 112 bytes
// =========================================================================

int FUN_717f8304(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  param_3 = param_3 * param_2;
  DataMemoryBarrier(0xb);
  iVar1 = param_3;
  if ((*(byte *)param_4[2] & 1) == 0) {
    iVar1 = 0;
    if ((uint)(*(int *)param_4[1] + param_3) <= (uint)param_4[3]) {
      imp___aeabi_memcpy(*param_4 + *(int *)param_4[1],param_1,param_3);
      *(int *)param_4[1] = *(int *)param_4[1] + param_3;
      iVar1 = param_3;
    }
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_717f83a8
// Entry: 0x717f83a8 | Size: 580 bytes
// =========================================================================

uint FUN_717f83a8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  
  uVar6 = param_3 * param_2;
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar6 < 0xb) {
    pcVar8 = (char *)((uint)&uStack_2c | 1);
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)uVar6 * '\x02');
    if (uVar6 != 0) goto LAB_717f840c;
  }
  else {
    pcVar8 = (char *)thunk_MwhHq((uVar6 | 7) + 1);
    uStack_2c = (uVar6 | 7) + 2;
    uStack_28 = uVar6;
    pcStack_24 = pcVar8;
LAB_717f840c:
    imp___aeabi_memcpy(pcVar8,param_1,uVar6);
  }
  pcVar8[uVar6] = '\0';
  pcVar8 = pcStack_24;
  uVar1 = uStack_28;
  if ((uStack_2c & 1) == 0) {
    uVar1 = uStack_2c >> 1 & 0x7f;
    pcVar8 = (char *)((uint)&uStack_2c | 1);
  }
  uVar3 = uVar1;
  if (5 < uVar1) {
    uVar3 = 6;
  }
  if (uVar1 == 0) goto LAB_717f85b4;
  pcVar9 = pcVar8 + uVar3;
  pcVar4 = pcVar8;
  pcVar10 = pcVar9;
  do {
    while (pcVar5 = pcVar4 + 1, *pcVar4 == 'E') {
      if (pcVar5 == pcVar9) goto LAB_717f8500;
      if (pcVar4[1] == 'T') {
        if (pcVar4 + 2 == pcVar9) goto LAB_717f8500;
        if (pcVar4[2] == 'a') {
          if (pcVar4 + 3 == pcVar9) goto LAB_717f8500;
          if (pcVar4[3] == 'g') {
            if (pcVar4 + 4 == pcVar9) goto LAB_717f8500;
            if (pcVar4[4] == ':') {
              if (pcVar4 + 5 == pcVar9) goto LAB_717f8500;
              if (pcVar4[5] == ' ') {
                pcVar10 = pcVar4;
              }
            }
          }
        }
      }
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == pcVar9) goto LAB_717f8500;
    }
    pcVar4 = pcVar5;
  } while (pcVar5 != pcVar9);
LAB_717f8500:
  if ((pcVar10 == pcVar9) || (pcVar10 != pcVar8)) goto LAB_717f85b4;
  if (uVar1 < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6b48(&uStack_38);
  }
  pcVar8 = pcStack_24 + 6;
  if ((uStack_2c & 1) == 0) {
    pcVar8 = (char *)((int)&uStack_28 + 3);
  }
  uVar3 = uVar1 - 6;
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar3 < 0xb) {
    uVar7 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)uVar3 * '\x02');
    if (uVar1 != 6) goto LAB_717f8574;
  }
  else {
    uVar7 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_38 = (uVar3 | 7) + 2;
    uStack_34 = uVar3;
    uStack_30 = uVar7;
LAB_717f8574:
    imp___aeabi_memmove(uVar7,pcVar8,uVar3);
  }
  *(undefined1 *)(uVar7 + uVar3) = 0;
  uVar2 = FUN_7188617c(&uStack_38);
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(param_4,uVar2);
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
LAB_717f85b4:
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(pcStack_24);
  }
  return uVar6;
}


// =========================================================================
// Function: FUN_717f8760
// Entry: 0x717f8760 | Size: 544 bytes
// =========================================================================

byte FUN_717f8760(int param_1,uint *param_2)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte abStack_44 [4];
  uint uStack_40;
  char *pcStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  uVar6 = param_2[1];
  bVar1 = (byte)*param_2;
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint)(bVar1 >> 1);
  }
  if (uVar6 == 0) {
    return 1;
  }
  if ((bVar1 & 1) == 0) {
    uStack_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
  }
  else {
    FUN_712f6d58(&uStack_38,param_2[2]);
  }
  FUN_717f8d48(&uStack_2c,&uStack_38);
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    uStack_50 = *(uint *)(param_1 + 0x124);
    uStack_4c = *(undefined4 *)(param_1 + 0x128);
    uStack_48 = *(undefined4 *)(param_1 + 300);
  }
  else {
    FUN_712f6d58(&uStack_50,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x128));
  }
  FUN_717f8d48(abStack_44,&uStack_50);
  bVar7 = true;
  if ((abStack_44[0] & 1) == 0) {
    uStack_40 = (uint)(abStack_44[0] >> 1);
  }
  if (((byte)uStack_2c & 1) == 0) {
    uStack_28 = (uint)((byte)uStack_2c >> 1);
  }
  if (uStack_28 == uStack_40) {
    pcVar5 = pcStack_3c;
    if ((abStack_44[0] & 1) == 0) {
      pcVar5 = (char *)((uint)abStack_44 | 1);
    }
    if (((byte)uStack_2c & 1) == 0) {
      bVar7 = false;
      if (1 < (byte)uStack_2c) {
        uVar6 = (uint)((byte)uStack_2c >> 1);
        pcVar2 = (char *)((uint)&uStack_2c | 1);
        do {
          uVar6 = uVar6 - 1;
          bVar7 = *pcVar2 != *pcVar5;
          if (bVar7) break;
          pcVar2 = pcVar2 + 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      iVar3 = imp_memcmp(iStack_24);
      bVar7 = false;
      if (iVar3 != 0) {
        bVar7 = true;
      }
    }
  }
  if ((abStack_44[0] & 1) != 0) {
    thunk_qNQrlu(pcStack_3c);
  }
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (((byte)uStack_2c & 1) != 0) {
    thunk_qNQrlu(iStack_24);
  }
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  if (bVar7 != false) {
    iVar3 = thunk_MwhHq(0x20);
    uStack_28 = 0x1a;
    uStack_2c = 0x21;
    iStack_24 = iVar3;
    imp___aeabi_memcpy(iVar3,s_File_ETag_in_process_error_70075998,0x1a);
    *(undefined1 *)(iVar3 + 0x1a) = 0;
    piVar4 = *(int **)(param_1 + 0xd0);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_71539164();
    }
    (**(code **)(*piVar4 + 0x18))(piVar4,&uStack_2c);
    if ((uStack_2c & 1) != 0) {
      thunk_qNQrlu(iStack_24);
    }
  }
  return bVar7 ^ 1;
}


// =========================================================================
// Function: FUN_717f8b24
// Entry: 0x717f8b24 | Size: 328 bytes
// =========================================================================

void FUN_717f8b24(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1 + 0x114);
  puVar2 = *(undefined4 **)(param_1 + 0x100);
  if (puVar2 < *(undefined4 **)(param_1 + 0x104)) {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    puVar5 = puVar2 + 3;
    *puVar2 = *param_2;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
  }
  else {
    iVar8 = *(int *)(param_1 + 0xfc);
    iVar7 = (int)puVar2 - iVar8;
    uVar6 = (iVar7 >> 2) * -0x55555555 + 1;
    if (0x15555555 < uVar6) {
      FUN_717ffbec();
LAB_717f8c68:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar1 = (int)*(undefined4 **)(param_1 + 0x104) - iVar8 >> 2;
    if (uVar6 < (uint)(iVar1 * 0x55555556)) {
      uVar6 = iVar1 * 0x55555556;
    }
    if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
      uVar6 = 0x15555555;
    }
    if (uVar6 == 0) {
      iVar1 = 0;
    }
    else {
      if (0x15555555 < uVar6) goto LAB_717f8c68;
      iVar1 = thunk_MwhHq(uVar6 * 0xc);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    puVar2 = (undefined4 *)(iVar1 + (iVar7 >> 2) * 4);
    *puVar2 = *param_2;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    imp___aeabi_memcpy4((int)puVar2 - iVar7,iVar8,iVar7);
    puVar5 = puVar2 + 3;
    *(int *)(param_1 + 0xfc) = (int)puVar2 - iVar7;
    *(undefined4 **)(param_1 + 0x100) = puVar5;
    *(uint *)(param_1 + 0x104) = iVar1 + uVar6 * 0xc;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  *(undefined4 **)(param_1 + 0x100) = puVar5;
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_1 + 0x134) = 0;
  DataMemoryBarrier(0xb);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1 + 0x114);
  return;
}


// =========================================================================
// Function: FUN_717f8d48
// Entry: 0x717f8d48 | Size: 340 bytes
// =========================================================================

void FUN_717f8d48(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar8 = *(uint *)(param_2 + 4);
  pbVar9 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    uVar8 = (uint)(*param_2 >> 1);
    pbVar9 = param_2 + 1;
  }
  uVar1 = uVar8;
  if (1 < uVar8) {
    uVar1 = 2;
  }
  if (uVar8 == 0) goto LAB_717f8e6c;
  pbVar3 = pbVar9 + uVar1;
  pbVar5 = pbVar9;
  pbVar2 = pbVar3;
  do {
    while (pbVar6 = pbVar5, pbVar5 = pbVar6 + 1, *pbVar6 == 0x57) {
      if (pbVar5 == pbVar3) goto LAB_717f8dc8;
      if (*pbVar5 == 0x2f) {
        pbVar2 = pbVar6;
      }
    }
  } while (pbVar5 != pbVar3);
LAB_717f8dc8:
  if ((pbVar2 == pbVar3) || (pbVar2 != pbVar9)) goto LAB_717f8e6c;
  if (uVar8 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6b48(&iStack_30);
  }
  uVar8 = uVar8 - 2;
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&iStack_30);
  }
  if (uVar8 < 0xb) {
    iStack_30 = CONCAT31(iStack_30._1_3_,(char)uVar8 * '\x02');
    uVar1 = (uint)&iStack_30 | 1;
    if (uVar8 != 0) goto LAB_717f8e34;
  }
  else {
    uVar1 = thunk_MwhHq((uVar8 | 7) + 1);
    iStack_30 = (uVar8 | 7) + 2;
    uStack_2c = uVar8;
    uStack_28 = uVar1;
LAB_717f8e34:
    imp___aeabi_memmove(uVar1,pbVar9 + 2,uVar8);
  }
  *(undefined1 *)(uVar1 + uVar8) = 0;
  if ((*param_2 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_2 + 8));
  }
  *(int *)param_2 = iStack_30;
  *(uint *)(param_2 + 4) = uStack_2c;
  *(uint *)(param_2 + 8) = uStack_28;
LAB_717f8e6c:
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)(param_2 + 8);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}


// =========================================================================
// Function: FUN_717f9624
// Entry: 0x717f9624 | Size: 408 bytes
// =========================================================================

void FUN_717f9624(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar2 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  uVar6 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar2,uVar6);
  FUN_717ef3ac();
  do {
    thunk_hNNuIKbSIfMIcLLugm_WGLsY_kgMHJsFRTrO(&DAT_71201dec);
    piVar1 = DAT_71201de0;
    piVar3 = DAT_71201de4;
joined_r0x717f969c:
    DAT_71201de4 = piVar3;
    if (DAT_71201de4 != piVar1) {
      if ((int *)piVar1[4] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_71539164();
      }
      (**(code **)(*(int *)piVar1[4] + 0x18))();
      piVar5 = DAT_71201de4;
      piVar3 = piVar1;
      piVar8 = piVar1;
      piVar4 = piVar1 + 6;
      if (piVar1 + 6 != DAT_71201de4) break;
      goto LAB_717f9798;
    }
    thunk_oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx(&DAT_71201dec);
    uStack_2c = 0;
    uStack_30 = 10000000;
    thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
              (&uStack_30);
  } while( true );
  do {
    piVar3 = (int *)piVar8[4];
    piVar8[4] = 0;
    if (piVar8 == piVar3) {
      iVar7 = 0x10;
      piVar3 = piVar8;
LAB_717f9720:
      (**(code **)(*piVar3 + iVar7))();
    }
    else {
      iVar7 = 0x14;
      if (piVar3 != (int *)0x0) goto LAB_717f9720;
    }
    piVar4 = (int *)piVar8[10];
    piVar3 = piVar8 + 6;
    if (piVar4 == (int *)0x0) {
      piVar8[4] = 0;
    }
    else if (piVar3 == piVar4) {
      piVar8[4] = (int)piVar8;
      (**(code **)(piVar8[6] + 0xc))(piVar3,piVar8);
    }
    else {
      piVar8[10] = 0;
      piVar8[4] = (int)piVar4;
    }
    piVar4 = piVar8 + 0xc;
    piVar8 = piVar3;
  } while (piVar4 != piVar5);
  piVar4 = DAT_71201de4;
  if (piVar3 != DAT_71201de4) {
LAB_717f9798:
    do {
      piVar5 = (int *)piVar4[-2];
      piVar4 = piVar4 + -6;
      if (piVar4 == piVar5) {
        iVar7 = 0x10;
        piVar5 = piVar4;
LAB_717f9784:
        (**(code **)(*piVar5 + iVar7))();
      }
      else {
        iVar7 = 0x14;
        if (piVar5 != (int *)0x0) goto LAB_717f9784;
      }
    } while (piVar4 != piVar3);
  }
  goto joined_r0x717f969c;
}


// =========================================================================
// Function: FUN_717f98f8
// Entry: 0x717f98f8 | Size: 96 bytes
// =========================================================================

void FUN_717f98f8(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_717f98f8(param_1,*param_2);
  FUN_717f98f8(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 7) & 1) != 0) {
    thunk_qNQrlu(param_2[9]);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    thunk_qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_717fa774
// Entry: 0x717fa774 | Size: 648 bytes
// =========================================================================

void FUN_717fa774(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    piVar3 = param_1 + 1;
    *param_1 = piVar3;
    *(undefined4 *)(*piVar3 + 8) = 0;
    param_1[2] = 0;
    *piVar3 = 0;
    piVar3 = (int *)piVar1[1];
    if (piVar3 == (int *)0x0) {
      piVar3 = piVar1;
    }
    if (piVar3 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      puVar2 = (undefined4 *)piVar3[2];
      piVar4 = (int *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = 0;
          piVar4 = (int *)piVar3[2];
          while (piVar1 = (int *)piVar4[1], (int *)piVar4[1] != (int *)0x0) {
            do {
              piVar4 = piVar1;
              piVar1 = (int *)*piVar4;
            } while ((int *)*piVar4 != (int *)0x0);
          }
        }
        else {
          puVar2[1] = 0;
          piVar4 = (int *)piVar3[2];
          piVar1 = (int *)*piVar4;
          while (piVar1 != (int *)0x0) {
            do {
              piVar4 = piVar1;
              piVar1 = (int *)*piVar4;
            } while ((int *)*piVar4 != (int *)0x0);
            piVar1 = (int *)piVar4[1];
          }
        }
      }
      do {
        piVar1 = piVar4;
        if (param_2 == param_3) break;
        thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                  (piVar3 + 4,param_2 + 4);
        thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                  (piVar3 + 7,param_2 + 7);
        FUN_717faabc(param_1,piVar3);
        piVar1 = (int *)0x0;
        if ((piVar4 != (int *)0x0) &&
           (puVar2 = (undefined4 *)piVar4[2], puVar2 != (undefined4 *)0x0)) {
          if ((int *)*puVar2 == piVar4) {
            *puVar2 = 0;
            piVar1 = (int *)piVar4[2];
            while (piVar3 = (int *)piVar1[1], (int *)piVar1[1] != (int *)0x0) {
              do {
                piVar1 = piVar3;
                piVar3 = (int *)*piVar1;
              } while ((int *)*piVar1 != (int *)0x0);
            }
          }
          else {
            puVar2[1] = 0;
            piVar1 = (int *)piVar4[2];
            piVar3 = (int *)*piVar1;
            while (piVar3 != (int *)0x0) {
              do {
                piVar1 = piVar3;
                piVar3 = (int *)*piVar1;
              } while ((int *)*piVar1 != (int *)0x0);
              piVar3 = (int *)piVar1[1];
            }
          }
        }
        piVar3 = (int *)param_2[1];
        piVar5 = param_2;
        if ((int *)param_2[1] == (int *)0x0) {
          do {
            param_2 = (int *)piVar5[2];
            bVar6 = (int *)*param_2 != piVar5;
            piVar5 = param_2;
          } while (bVar6);
        }
        else {
          do {
            param_2 = piVar3;
            piVar3 = (int *)*param_2;
          } while ((int *)*param_2 != (int *)0x0);
        }
        bVar6 = piVar4 != (int *)0x0;
        piVar3 = piVar4;
        piVar4 = piVar1;
      } while (bVar6);
      FUN_717f98f8(param_1,piVar3);
      if (piVar1 == (int *)0x0) goto joined_r0x717fa974;
      piVar3 = (int *)piVar1[2];
      while (piVar4 = piVar3, piVar4 != (int *)0x0) {
        piVar1 = piVar4;
        piVar3 = (int *)piVar4[2];
      }
    }
    FUN_717f98f8(param_1,piVar1);
  }
joined_r0x717fa974:
  while (param_2 != param_3) {
    FUN_717fac08(param_1,param_2 + 4);
    piVar3 = (int *)param_2[1];
    piVar1 = param_2;
    if ((int *)param_2[1] == (int *)0x0) {
      do {
        param_2 = (int *)piVar1[2];
        bVar6 = (int *)*param_2 != piVar1;
        piVar1 = param_2;
      } while (bVar6);
    }
    else {
      do {
        param_2 = piVar3;
        piVar3 = (int *)*param_2;
      } while ((int *)*param_2 != (int *)0x0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_717faabc
// Entry: 0x717faabc | Size: 252 bytes
// =========================================================================

undefined4 * FUN_717faabc(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  piVar7 = param_1 + 1;
  piVar2 = (int *)*piVar7;
  piVar6 = piVar7;
  if (piVar2 != (int *)0x0) {
    uVar9 = param_2[5];
    iVar10 = param_2[6];
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      iVar10 = (int)param_2 + 0x11;
      uVar9 = (uint)(*(byte *)(param_2 + 4) >> 1);
    }
    do {
      while( true ) {
        piVar7 = piVar2;
        uVar8 = piVar7[5];
        iVar3 = piVar7[6];
        if ((*(byte *)(piVar7 + 4) & 1) == 0) {
          uVar8 = (uint)(*(byte *)(piVar7 + 4) >> 1);
          iVar3 = (int)piVar7 + 0x11;
        }
        uVar5 = uVar9;
        if (uVar8 < uVar9) {
          uVar5 = uVar8;
        }
        iVar3 = imp_memcmp(iVar10,iVar3,uVar5);
        bVar1 = uVar8 <= uVar9;
        if (iVar3 != 0) {
          bVar1 = -1 < iVar3;
        }
        if (bVar1) break;
        piVar2 = (int *)*piVar7;
        piVar6 = piVar7;
        if ((int *)*piVar7 == (int *)0x0) goto LAB_717fab74;
      }
      piVar2 = (int *)piVar7[1];
    } while ((int *)piVar7[1] != (int *)0x0);
    piVar6 = piVar7 + 1;
  }
LAB_717fab74:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = piVar7;
  *piVar6 = (int)param_2;
  puVar4 = param_2;
  if (*(int *)*param_1 != 0) {
    *param_1 = *(int *)*param_1;
    puVar4 = (undefined4 *)*piVar6;
  }
  FUN_712f807c(param_1[1],puVar4);
  param_1[2] = param_1[2] + 1;
  return param_2;
}


// =========================================================================
// Function: FUN_717fac08
// Entry: 0x717fac08 | Size: 360 bytes
// =========================================================================

undefined4 * FUN_717fac08(int *param_1,byte *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  
  puVar2 = (undefined4 *)thunk_MwhHq(0x28);
  if ((*param_2 & 1) == 0) {
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    puVar2[4] = *(undefined4 *)param_2;
    puVar2[5] = uVar6;
    puVar2[6] = uVar9;
  }
  else {
    FUN_712f6d58(puVar2 + 4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  }
  piVar11 = param_1 + 1;
  if ((param_2[0xc] & 1) == 0) {
    uVar9 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    puVar2[7] = *(undefined4 *)(param_2 + 0xc);
    puVar2[8] = uVar9;
    puVar2[9] = uVar6;
  }
  else {
    FUN_712f6d58(puVar2 + 7,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x10));
  }
  piVar3 = (int *)*piVar11;
  piVar8 = piVar11;
  if (piVar3 != (int *)0x0) {
    iVar13 = puVar2[6];
    uVar10 = puVar2[5];
    if ((*(byte *)(puVar2 + 4) & 1) == 0) {
      iVar13 = (int)puVar2 + 0x11;
      uVar10 = (uint)(*(byte *)(puVar2 + 4) >> 1);
    }
    do {
      while( true ) {
        piVar11 = piVar3;
        uVar12 = piVar11[5];
        iVar4 = piVar11[6];
        if ((*(byte *)(piVar11 + 4) & 1) == 0) {
          uVar12 = (uint)(*(byte *)(piVar11 + 4) >> 1);
          iVar4 = (int)piVar11 + 0x11;
        }
        uVar7 = uVar10;
        if (uVar12 < uVar10) {
          uVar7 = uVar12;
        }
        iVar4 = imp_memcmp(iVar13,iVar4,uVar7);
        bVar1 = uVar12 <= uVar10;
        if (iVar4 != 0) {
          bVar1 = -1 < iVar4;
        }
        if (bVar1) break;
        piVar3 = (int *)*piVar11;
        piVar8 = piVar11;
        if ((int *)*piVar11 == (int *)0x0) goto LAB_717fad2c;
      }
      piVar3 = (int *)piVar11[1];
    } while ((int *)piVar11[1] != (int *)0x0);
    piVar8 = piVar11 + 1;
  }
LAB_717fad2c:
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = piVar11;
  *piVar8 = (int)puVar2;
  puVar5 = puVar2;
  if (*(int *)*param_1 != 0) {
    *param_1 = *(int *)*param_1;
    puVar5 = (undefined4 *)*piVar8;
  }
  FUN_712f807c(param_1[1],puVar5);
  param_1[2] = param_1[2] + 1;
  return puVar2;
}


// =========================================================================
// Function: FUN_717fae14
// Entry: 0x717fae14 | Size: 264 bytes
// =========================================================================

void FUN_717fae14(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
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
  
  puVar2 = (undefined4 *)FUN_717fafc0(param_2,param_3,&uStack_24,auStack_28,param_4);
  puVar6 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)thunk_MwhHq(0x28);
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
    if ((param_5[0xc] & 1) == 0) {
      uVar5 = *(undefined4 *)(param_5 + 0x10);
      uVar4 = *(undefined4 *)(param_5 + 0x14);
      puVar6[7] = *(undefined4 *)(param_5 + 0xc);
      puVar6[8] = uVar5;
      puVar6[9] = uVar4;
    }
    else {
      FUN_712f6d58(puVar6 + 7,*(undefined4 *)(param_5 + 0x14),*(undefined4 *)(param_5 + 0x10));
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = uStack_24;
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
// Function: FUN_717fafc0
// Entry: 0x717fafc0 | Size: 740 bytes
// =========================================================================

int * FUN_717fafc0(int *param_1,int *param_2,undefined4 *param_3,int *param_4,byte *param_5)

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
LAB_717fb270:
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
      if (!bVar13) goto LAB_717fb270;
      goto LAB_717fb144;
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
LAB_717fb144:
      piVar4 = (int *)FUN_715f2a38(param_1,param_3,param_5);
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
// Function: FUN_717fb458
// Entry: 0x717fb458 | Size: 4 bytes
// =========================================================================

void FUN_717fb458(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717fb474 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717fc054
// Entry: 0x717fc054 | Size: 20 bytes
// =========================================================================

void FUN_717fc054(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_717fc1e8
// Entry: 0x717fc1e8 | Size: 4 bytes
// =========================================================================

void FUN_717fc1e8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717fc204 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717fcf0c
// Entry: 0x717fcf0c | Size: 4 bytes
// =========================================================================

void FUN_717fcf0c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717fcf28 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717fdc48
// Entry: 0x717fdc48 | Size: 4 bytes
// =========================================================================

void FUN_717fdc48(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x717fdc64 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_717fe168
// Entry: 0x717fe168 | Size: 204 bytes
// =========================================================================

void FUN_717fe168(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = *param_2;
  if ((param_2[1] & 1) == 0) {
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
  }
  else {
    FUN_712f6d58(&uStack_24,param_2[3],param_2[2]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = (undefined4 *)thunk_MwhHq(0x14);
  *puVar1 = &DAT_70b0f948;
  puVar1[1] = uVar2;
  if ((uStack_24 & 1) == 0) {
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    puVar1[2] = uStack_24;
    puVar1[3] = uStack_20;
    puVar1[4] = uStack_1c;
    return;
  }
  FUN_712f6d58(puVar1 + 2,uStack_1c,uStack_20);
  *(undefined4 **)(param_1 + 0x10) = puVar1;
  if ((uStack_24 & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  return;
}


// =========================================================================
// Function: FUN_717fecac
// Entry: 0x717fecac | Size: 596 bytes
// =========================================================================

undefined4 FUN_717fecac(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  
  puVar3 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  iVar8 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar3,iVar8);
  thunk_hNNuIKbSIfMIcLLugm_WGLsY_kgMHJsFRTrO(&DAT_71201dec);
  piVar2 = DAT_71201de4;
  piVar13 = DAT_71201de0;
  iVar8 = param_1[1];
  if (DAT_71201de4 < DAT_71201de8) {
    DAT_71201de4[4] = (int)DAT_71201de4;
    *DAT_71201de4 = (int)&DAT_70b0f96c;
    DAT_71201de4[1] = iVar8;
    piVar10 = DAT_71201de4 + 6;
  }
  else {
    iVar9 = (int)DAT_71201de4 - (int)DAT_71201de0;
    iVar1 = iVar9 >> 3;
    uVar14 = iVar1 * -0x55555555 + 1;
    if (0xaaaaaaa < uVar14) {
      FUN_717fc054(&DAT_71201de0);
LAB_717feefc:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar4 = (int)DAT_71201de8 - (int)DAT_71201de0 >> 3;
    if (uVar14 < (uint)(iVar4 * 0x55555556)) {
      uVar14 = iVar4 * 0x55555556;
    }
    if (0x5555554 < (uint)(iVar4 * -0x55555555)) {
      uVar14 = 0xaaaaaaa;
    }
    if (uVar14 == 0) {
      iVar4 = 0;
    }
    else {
      if (0xaaaaaaa < uVar14) goto LAB_717feefc;
      iVar4 = thunk_MwhHq(uVar14 * 0x18);
    }
    puVar3 = (undefined4 *)(iVar4 + iVar1 * 8);
    *puVar3 = &DAT_70b0f96c;
    piVar11 = (int *)((int)puVar3 - iVar9);
    piVar10 = puVar3 + 6;
    puVar3[1] = iVar8;
    piVar5 = (int *)(iVar4 + uVar14 * 0x18);
    puVar3[4] = puVar3;
    piVar7 = piVar13;
    piVar12 = piVar11;
    piVar6 = piVar2;
    if (piVar13 != piVar2) {
      do {
        piVar6 = (int *)piVar7[4];
        if (piVar6 == (int *)0x0) {
          piVar12[4] = 0;
        }
        else if (piVar7 == piVar6) {
          piVar12[4] = (int)piVar12;
          (**(code **)(*piVar7 + 0xc))(piVar7,piVar12);
        }
        else {
          piVar12[4] = (int)piVar6;
          piVar7[4] = 0;
        }
        piVar7 = piVar7 + 6;
        piVar12 = piVar12 + 6;
      } while (piVar7 != piVar2);
      do {
        piVar7 = (int *)piVar13[4];
        if (piVar13 == piVar7) {
          iVar8 = 0x10;
          piVar7 = piVar13;
LAB_717fee44:
          (**(code **)(*piVar7 + iVar8))();
        }
        else {
          iVar8 = 0x14;
          if (piVar7 != (int *)0x0) goto LAB_717fee44;
        }
        piVar13 = piVar13 + 6;
        piVar6 = DAT_71201de0;
      } while (piVar13 != piVar2);
    }
    DAT_71201de0 = piVar11;
    DAT_71201de8 = piVar5;
    if (piVar6 != (int *)0x0) {
      DAT_71201de4 = piVar10;
      thunk_qNQrlu(piVar6);
    }
  }
  DAT_71201de4 = piVar10;
  thunk_oZakKGqmETUHXnsYJRInxtnJQqaVfpWbtodHMx(&DAT_71201dec);
  iVar8 = *param_1;
  *param_1 = 0;
  if (iVar8 != 0) {
    thunk_RYJOfoHFfaslEZJHEIdHJEJsamhUbv_Gq();
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return 0;
}


// =========================================================================
// Function: FUN_717ff554
// Entry: 0x717ff554 | Size: 364 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717ff554(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int aiStack_30 [5];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (param_2 != param_1) {
    piVar2 = (int *)param_1[4];
    piVar1 = (int *)param_2[4];
    if (piVar2 == param_1) {
      if (piVar1 != param_2) {
        (**(code **)(*param_1 + 0xc))();
        (**(code **)(*(int *)param_1[4] + 0x10))();
        param_1[4] = param_2[4];
        param_2[4] = (int)param_2;
        goto LAB_717ff69c;
      }
      (**(code **)(*param_1 + 0xc))(param_1,aiStack_30);
      (**(code **)(*(int *)param_1[4] + 0x10))();
      param_1[4] = 0;
      (**(code **)(*(int *)param_2[4] + 0xc))((int *)param_2[4],param_1);
      (**(code **)(*(int *)param_2[4] + 0x10))();
      param_2[4] = 0;
      param_1[4] = (int)param_1;
      (**(code **)(aiStack_30[0] + 0xc))(aiStack_30,param_2);
      (**(code **)(aiStack_30[0] + 0x10))(aiStack_30);
    }
    else {
      if (piVar1 != param_2) {
        param_1[4] = (int)piVar1;
        param_2[4] = (int)piVar2;
        goto LAB_717ff69c;
      }
      (**(code **)(*param_2 + 0xc))(param_2,param_1);
      (**(code **)(*(int *)param_2[4] + 0x10))();
      param_2[4] = param_1[4];
      param_2 = param_1;
    }
    param_2[4] = (int)param_2;
  }
LAB_717ff69c:
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_717ff734
// Entry: 0x717ff734 | Size: 364 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_717ff734(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int aiStack_30 [5];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (param_2 != param_1) {
    piVar2 = (int *)param_1[4];
    piVar1 = (int *)param_2[4];
    if (piVar2 == param_1) {
      if (piVar1 != param_2) {
        (**(code **)(*param_1 + 0xc))();
        (**(code **)(*(int *)param_1[4] + 0x10))();
        param_1[4] = param_2[4];
        param_2[4] = (int)param_2;
        goto LAB_717ff87c;
      }
      (**(code **)(*param_1 + 0xc))(param_1,aiStack_30);
      (**(code **)(*(int *)param_1[4] + 0x10))();
      param_1[4] = 0;
      (**(code **)(*(int *)param_2[4] + 0xc))((int *)param_2[4],param_1);
      (**(code **)(*(int *)param_2[4] + 0x10))();
      param_2[4] = 0;
      param_1[4] = (int)param_1;
      (**(code **)(aiStack_30[0] + 0xc))(aiStack_30,param_2);
      (**(code **)(aiStack_30[0] + 0x10))(aiStack_30);
    }
    else {
      if (piVar1 != param_2) {
        param_1[4] = (int)piVar1;
        param_2[4] = (int)piVar2;
        goto LAB_717ff87c;
      }
      (**(code **)(*param_2 + 0xc))(param_2,param_1);
      (**(code **)(*(int *)param_2[4] + 0x10))();
      param_2[4] = param_1[4];
      param_2 = param_1;
    }
    param_2[4] = (int)param_2;
  }
LAB_717ff87c:
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_717ff914
// Entry: 0x717ff914 | Size: 96 bytes
// =========================================================================

undefined4 FUN_717ff914(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  iVar2 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar1,iVar2);
  iVar2 = param_1[1];
  FUN_717ef3ac();
  FUN_717f42bc(iVar2);
  FUN_717ef680();
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
// Function: FUN_717ffa6c
// Entry: 0x717ffa6c | Size: 20 bytes
// =========================================================================

void FUN_717ffa6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_717ffad4
// Entry: 0x717ffad4 | Size: 88 bytes
// =========================================================================

undefined4 FUN_717ffad4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  
  puVar1 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  iVar2 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar1,iVar2);
  FUN_717f729c(param_1[1],extraout_r1,param_1[3]);
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
// Function: FUN_717ffbec
// Entry: 0x717ffbec | Size: 20 bytes
// =========================================================================

void FUN_717ffbec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7180093c
// Entry: 0x7180093c | Size: 256 bytes
// =========================================================================

int * FUN_7180093c(int param_1,byte *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  
  piVar9 = (int *)(param_1 + 4);
  piVar5 = (int *)*piVar9;
  if (piVar5 != (int *)0x0) {
    pbVar10 = *(byte **)(param_2 + 8);
    uVar8 = *(uint *)(param_2 + 4);
    piVar6 = piVar9;
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar8 = (uint)(*param_2 >> 1);
    }
    do {
      uVar7 = piVar5[5];
      iVar3 = piVar5[6];
      if ((*(byte *)(piVar5 + 4) & 1) == 0) {
        uVar7 = (uint)(*(byte *)(piVar5 + 4) >> 1);
        iVar3 = (int)piVar5 + 0x11;
      }
      uVar4 = uVar7;
      if (uVar8 < uVar7) {
        uVar4 = uVar8;
      }
      iVar3 = imp_memcmp(iVar3,pbVar10,uVar4);
      bVar1 = uVar8 <= uVar7;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      piVar2 = piVar5;
      if (!bVar1) {
        piVar5 = piVar5 + 1;
        piVar2 = piVar6;
      }
      piVar6 = piVar2;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    if (piVar6 != piVar9) {
      uVar7 = piVar6[5];
      iVar3 = piVar6[6];
      if ((*(byte *)(piVar6 + 4) & 1) == 0) {
        uVar7 = (uint)(*(byte *)(piVar6 + 4) >> 1);
        iVar3 = (int)piVar6 + 0x11;
      }
      uVar4 = uVar8;
      if (uVar7 < uVar8) {
        uVar4 = uVar7;
      }
      iVar3 = imp_memcmp(pbVar10,iVar3,uVar4);
      bVar1 = uVar7 <= uVar8;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      if (bVar1) {
        piVar9 = piVar6;
      }
    }
  }
  return piVar9;
}


// =========================================================================
// Function: FUN_71800cf0
// Entry: 0x71800cf0 | Size: 28 bytes
// =========================================================================

void FUN_71800cf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// =========================================================================
// Function: FUN_71800d24
// Entry: 0x71800d24 | Size: 28 bytes
// =========================================================================

void FUN_71800d24(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// =========================================================================
// Function: MUkpEaPnNEjfoggsZkSHGIrEASe
// Entry: 0x71800d58 | Size: 28 bytes
// =========================================================================

void MUkpEaPnNEjfoggsZkSHGIrEASe(code *UNRECOVERED_JUMPTABLE)

{
  DAT_71201e18 = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x71800d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&UNK_71800dcc);
  return;
}


// =========================================================================
// Function: FUN_71800de8
// Entry: 0x71800de8 | Size: 96 bytes
// =========================================================================

undefined4 * FUN_71800de8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[9] = 0xffffffff;
  *(undefined2 *)(param_1 + 8) = 0x100;
  param_1[7] = param_3;
  *param_1 = &DAT_70b0f9b4;
  FUN_71800e9c(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_71800e9c
// Entry: 0x71800e9c | Size: 276 bytes
// =========================================================================

void FUN_71800e9c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  
  iVar1 = imp_avformat_alloc_context();
  piVar7 = (int *)(param_1 + 4);
  *piVar7 = iVar1;
  uVar6 = 0;
  imp_avformat_open_input(piVar7,param_2,0,0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x18) != 0) {
    do {
      piVar5 = *(int **)(*(int *)(*(int *)(iVar1 + 0x1c) + uVar6 * 4) + 0xc);
      iVar1 = imp_avcodec_find_decoder(piVar5[1]);
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_1 + 0x1c);
        iVar2 = *piVar5;
        bVar8 = iVar2 == iVar4;
        if (bVar8) {
          iVar4 = *(int *)(param_1 + 0x24);
        }
        if (bVar8 && iVar4 == -1) {
          *(uint *)(param_1 + 0x24) = uVar6;
          uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + uVar6 * 4);
          *(int **)(param_1 + 0x10) = piVar5;
          *(undefined4 *)(param_1 + 8) = uVar3;
          uVar3 = imp_avcodec_alloc_context3();
          *(undefined4 *)(param_1 + 0xc) = uVar3;
          imp_avcodec_parameters_to_context(uVar3,*(undefined4 *)(param_1 + 0x10));
          imp_avcodec_open2(*(undefined4 *)(param_1 + 0xc),iVar1,0);
          iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + uVar6 * 4);
          uVar3 = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(param_1 + 0x18) = uVar3;
          iVar2 = *piVar5;
        }
        if (iVar2 == 1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
      }
      iVar1 = *piVar7;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar1 + 0x18));
  }
  uVar3 = imp_av_frame_alloc();
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = imp_av_packet_alloc();
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  return;
}


// =========================================================================
// Function: FUN_718012f8
// Entry: 0x718012f8 | Size: 20 bytes
// =========================================================================

void FUN_718012f8(int param_1)

{
  if (*(char *)(param_1 + 0x21) != '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_71801324
// Entry: 0x71801324 | Size: 464 bytes
// =========================================================================

void FUN_71801324(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_71ba2cf0(param_2,0);
  if (iVar1 == 0) {
    uVar5 = FUN_71ba1638(param_2);
    uVar6 = FUN_71ba1980(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = FUN_71ba1b10(*(undefined4 *)(param_1 + 0x14));
    uVar8 = FUN_71ba1b10(uVar4);
    uVar7 = FUN_71ba0f98((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                         (int)((ulonglong)uVar8 >> 0x20));
    uVar6 = FUN_71ba1ea0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20));
    iVar1 = FUN_71ba2c9c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                         (int)((ulonglong)uVar5 >> 0x20));
    if (iVar1 == 0) goto LAB_718013dc;
  }
  imp_av_seek_frame(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x24),0,0,1);
LAB_718013dc:
  iVar1 = FUN_71ba2cf0(param_2,0);
  if (iVar1 == 0) {
    uVar5 = FUN_71ba1638(param_2);
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = FUN_71ba1b10(*(undefined4 *)(param_1 + 0x14));
    uVar7 = FUN_71ba1b10(uVar3);
    uVar6 = FUN_71ba0f98((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
    FUN_71ba0f98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                 (int)((ulonglong)uVar6 >> 0x20));
    uVar6 = FUN_71ba16f4();
    imp_av_seek_frame(uVar4,uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
  }
  else {
    uVar5 = FUN_71ba1638(param_2);
  }
  imp_avcodec_flush_buffers(*(undefined4 *)(param_1 + 0xc));
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar6 = FUN_71ba1b10(*(undefined4 *)(param_1 + 0x14));
  uVar7 = FUN_71ba1b10(uVar4);
  uVar6 = FUN_71ba0f98((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  FUN_71ba0f98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,(int)((ulonglong)uVar6 >> 0x20)
              );
  uVar5 = FUN_71ba16f4();
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  return;
}


// =========================================================================
// Function: FUN_718017ac
// Entry: 0x718017ac | Size: 292 bytes
// =========================================================================

undefined4 * FUN_718017ac(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_71800de8(param_1,param_2,1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &DAT_70b0f9c8;
  iVar1 = param_1[3];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar2 = param_1 + 0x14;
  *puVar2 = 0;
  iVar3 = *(int *)(iVar1 + 0x130);
  if ((*(int *)(iVar1 + 300) != 16000 || iVar3 != 1) || (iVar3 = 1, *(int *)(iVar1 + 0x13c) != 1)) {
    uStack_40 = *(undefined4 *)(iVar1 + 0x138);
    uStack_30 = *(undefined4 *)(iVar1 + 0x148);
    uStack_2c = *(undefined4 *)(iVar1 + 0x14c);
    uStack_38 = 4;
    uStack_34 = 0;
    uStack_3c = 1;
    imp_swr_alloc_set_opts2
              (puVar2,&uStack_40,1,16000,(undefined4 *)(iVar1 + 0x138),iVar3,*(int *)(iVar1 + 300),0
               ,0);
    imp_swr_init(*puVar2);
  }
  param_1[0x15] = 0xffffffff;
  param_1[0x21] = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x42c80000;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71801a5c
// Entry: 0x71801a5c | Size: 388 bytes
// =========================================================================

void FUN_71801a5c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  
  piVar6 = (int *)(param_1 + 0x54);
  if (*piVar6 != -1) {
    imp_alGetSourcei(*piVar6,0x1010,auStack_2c);
    imp_alGetSourcei(*piVar6,0x1016,&iStack_28);
    imp_alSourceStop(*piVar6);
    if (0 < iStack_28) {
      do {
        imp_alSourceUnqueueBuffers(*(undefined4 *)(param_1 + 0x54),1,&uStack_30);
        iVar2 = *(int *)(param_1 + 0x5c);
        uVar4 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68);
        uVar5 = 0;
        if (*(int *)(param_1 + 0x60) != iVar2) {
          uVar5 = (*(int *)(param_1 + 0x60) - iVar2) * 0x100 - 1;
        }
        if (uVar5 == uVar4) {
          FUN_71802e88(param_1 + 0x58);
          iVar2 = *(int *)(param_1 + 0x5c);
          uVar4 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c);
        }
        *(undefined4 *)(*(int *)(iVar2 + (uVar4 >> 10) * 4) + (uVar4 & 0x3ff) * 4) = uStack_30;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        iVar2 = iStack_28 + -1;
        bVar1 = 0 < iStack_28;
        iStack_28 = iVar2;
      } while (iVar2 != 0 && bVar1);
    }
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x6c);
    }
    if (param_2 != 0 && iVar2 != 0) {
      puVar3 = *(undefined4 **)(param_1 + 0x5c);
      uVar5 = *(uint *)(param_1 + 0x68);
      do {
        uStack_30 = *(undefined4 *)(puVar3[uVar5 >> 10] + (uVar5 & 0x3ff) * 4);
        imp_alDeleteBuffers(1,&uStack_30);
        puVar3 = *(undefined4 **)(param_1 + 0x5c);
        iVar2 = *(int *)(param_1 + 0x6c) + -1;
        uVar5 = *(int *)(param_1 + 0x68) + 1;
        *(uint *)(param_1 + 0x68) = uVar5;
        *(int *)(param_1 + 0x6c) = iVar2;
        if (0x7ff < uVar5) {
          thunk_qNQrlu(*puVar3);
          iVar2 = *(int *)(param_1 + 0x6c);
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0x5c) + 4);
          *(undefined4 **)(param_1 + 0x5c) = puVar3;
          uVar5 = *(int *)(param_1 + 0x68) - 0x400;
          *(uint *)(param_1 + 0x68) = uVar5;
        }
      } while (iVar2 != 0);
    }
    imp_alDeleteSources(1,piVar6);
    *piVar6 = -1;
  }
  return;
}


// =========================================================================
// Function: FUN_71801df8
// Entry: 0x71801df8 | Size: 240 bytes
// =========================================================================

void FUN_71801df8(int param_1)

{
  if (*(int *)(param_1 + 0x54) != -1) {
    return;
  }
  imp_alGenSources(1);
  imp_alSourceRewind(*(undefined4 *)(param_1 + 0x54));
  imp_alSourcei(*(undefined4 *)(param_1 + 0x54),0x1007,0);
  imp_alSourcei(*(undefined4 *)(param_1 + 0x54),0x1009,0);
  imp_alSourcefv(*(undefined4 *)(param_1 + 0x54),0x1004,param_1 + 0x74);
  imp_alSourcefv(*(undefined4 *)(param_1 + 0x54),0x1006,&DAT_71201e1c);
  imp_alSourcefv(*(undefined4 *)(param_1 + 0x54),0x1005,&DAT_71201e1c);
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1023,*(undefined4 *)(param_1 + 0x80));
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1020,0x40000000);
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1021,0x3f99999a);
  imp_alSourcei(*(undefined4 *)(param_1 + 0x54),0x202,*(byte *)(param_1 + 0x71) ^ 1);
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x100a,0x3f800000);
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1003,0x3f800000);
  return;
}


// =========================================================================
// Function: FUN_71802780
// Entry: 0x71802780 | Size: 528 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71802780(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_7d3c;
  int iStack_7d38;
  int iStack_7d34;
  undefined1 *puStack_7d30;
  undefined1 auStack_7d2c [32000];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  piVar6 = *(int **)(param_1 + 0x28);
  iVar8 = piVar6[8];
  puStack_7d30 = (undefined1 *)*piVar6;
  if (*(int *)(param_1 + 0x50) != 0) {
    puStack_7d30 = auStack_7d2c;
    uVar2 = imp_swr_convert(*(int *)(param_1 + 0x50),&puStack_7d30,16000,piVar6,piVar6[0x13]);
    iVar8 = imp_av_samples_get_buffer_size(0,1,uVar2,1,1);
  }
  imp_alGetSourcei(*(undefined4 *)(param_1 + 0x54),0x1010,&iStack_7d38);
  imp_alGetSourcei(*(undefined4 *)(param_1 + 0x54),0x1016,&iStack_7d34);
  if (iStack_7d34 < 1) {
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  else {
    do {
      imp_alSourceUnqueueBuffers(*(undefined4 *)(param_1 + 0x54),1,&uStack_7d3c);
      iVar3 = *(int *)(param_1 + 0x5c);
      uVar5 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68);
      uVar7 = 0;
      if (*(int *)(param_1 + 0x60) != iVar3) {
        uVar7 = (*(int *)(param_1 + 0x60) - iVar3) * 0x100 - 1;
      }
      if (uVar7 == uVar5) {
        FUN_71802e88(param_1 + 0x58);
        iVar3 = *(int *)(param_1 + 0x5c);
        uVar5 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c);
      }
      *(undefined4 *)(*(int *)(iVar3 + (uVar5 >> 10) * 4) + (uVar5 & 0x3ff) * 4) = uStack_7d3c;
      iVar3 = *(int *)(param_1 + 0x6c) + 1;
      *(int *)(param_1 + 0x6c) = iVar3;
      iVar4 = iStack_7d34 + -1;
      bVar1 = 0 < iStack_7d34;
      iStack_7d34 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  uStack_7d3c = 0;
  if (iVar3 == 0) {
    imp_alGenBuffers(1,&uStack_7d3c);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x68);
    uStack_7d3c = *(undefined4 *)
                   ((*(undefined4 **)(param_1 + 0x5c))[uVar7 >> 10] + (uVar7 & 0x3ff) * 4);
    *(uint *)(param_1 + 0x68) = uVar7 + 1;
    *(int *)(param_1 + 0x6c) = iVar3 + -1;
    if (0x7ff < uVar7 + 1) {
      thunk_qNQrlu(**(undefined4 **)(param_1 + 0x5c));
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 4;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -0x400;
    }
  }
  imp_alBufferData(uStack_7d3c,0x1101,puStack_7d30,iVar8,16000);
  imp_alSourceQueueBuffers(*(undefined4 *)(param_1 + 0x54),1,&uStack_7d3c);
  if (iStack_7d38 != 0x1012) {
    imp_alSourcePlay(*(undefined4 *)(param_1 + 0x54));
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_71802b38
// Entry: 0x71802b38 | Size: 140 bytes
// =========================================================================

void FUN_71802b38(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_71801df8();
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0x78) = param_4;
  *(undefined4 *)(param_1 + 0x7c) = param_5;
  *(char *)(param_1 + 0x71) = (char)param_2;
  imp_alSourcei(*(undefined4 *)(param_1 + 0x54),0x202,param_2 ^ 1);
  if (param_2 != 0) {
    uStack_24 = param_5;
    uStack_2c = param_3;
    uStack_28 = param_4;
    imp_alSourcefv(*(undefined4 *)(param_1 + 0x54),0x1004,&uStack_2c);
    return;
  }
  imp_alSourcefv(*(undefined4 *)(param_1 + 0x54),0x1004,&DAT_71201e1c);
  return;
}


// =========================================================================
// Function: FUN_71802c6c
// Entry: 0x71802c6c | Size: 80 bytes
// =========================================================================

void FUN_71802c6c(int param_1,undefined4 param_2)

{
  FUN_71801df8();
  *(undefined4 *)(param_1 + 0x80) = param_2;
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1020,0x40000000);
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1023,param_2);
  imp_alSourcef(*(undefined4 *)(param_1 + 0x54),0x1021,0x3f99999a);
  return;
}


// =========================================================================
// Function: FUN_71802d44
// Entry: 0x71802d44 | Size: 8 bytes
// =========================================================================

void FUN_71802d44(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}


// =========================================================================
// Function: FUN_71802e88
// Entry: 0x71802e88 | Size: 860 bytes
// =========================================================================

void FUN_71802e88(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  uint uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  uint uStack_2c;
  uint *puStack_28;
  
  if (param_1[4] < 0x400) {
    uVar14 = param_1[1];
    uVar12 = param_1[2];
    uVar2 = uVar12 - uVar14;
    puVar5 = param_1 + 3;
    uVar3 = *puVar5;
    uVar9 = uVar3 - *param_1;
    if (uVar9 <= uVar2) {
      uVar9 = (int)uVar9 >> 1;
      if (uVar3 == *param_1) {
        uVar9 = 1;
      }
      puStack_28 = puVar5;
      if (uVar9 < 0x40000000) {
        uVar3 = thunk_MwhHq(uVar9 << 2);
        uVar1 = uVar3 + uVar9 * 4;
        puVar7 = (undefined4 *)(uVar3 + uVar2);
        uStack_38 = uVar3;
        puStack_34 = puVar7;
        uStack_2c = uVar1;
        uVar13 = thunk_MwhHq(0x1000);
        if (uVar2 == uVar9 * 4) {
          if ((int)uVar2 < 1) {
            uVar2 = (int)uVar2 >> 1;
            if (uVar12 == uVar14) {
              uVar2 = 1;
            }
            if (0x3fffffff < uVar2) goto LAB_718031e0;
            uVar9 = thunk_MwhHq(uVar2 << 2);
            uVar1 = uVar9 + uVar2 * 4;
            puVar7 = (undefined4 *)(uVar9 + (uVar2 & 0xfffffffc));
            uStack_38 = uVar9;
            puStack_34 = puVar7;
            uStack_2c = uVar1;
            thunk_qNQrlu(uVar3);
            uVar14 = param_1[1];
            uVar12 = param_1[2];
            uVar3 = uVar9;
          }
          else {
            puVar7 = (undefined4 *)((int)puVar7 - ((uVar2 >> 1) + 2 & 0xfffffffc));
            puStack_34 = puVar7;
          }
        }
        puStack_30 = puVar7 + 1;
        *puVar7 = uVar13;
        uVar9 = uVar14;
        if (uVar12 != uVar14) {
          uVar14 = uVar12;
          do {
            uVar14 = uVar14 - 4;
            FUN_718036d0(&uStack_38,uVar14);
          } while (uVar14 != param_1[1]);
          uVar9 = param_1[2];
          uVar3 = uStack_38;
          puVar7 = puStack_34;
          uVar1 = uStack_2c;
        }
        param_1[2] = (uint)puStack_30;
        bVar16 = uVar9 != uVar14;
        uStack_2c = param_1[3];
        uVar2 = uStack_2c;
        if (bVar16) {
          uVar2 = uVar14 - uVar9;
        }
        uStack_38 = *param_1;
        if (bVar16) {
          uVar2 = uVar2 + 3 & 0xfffffffc;
        }
        param_1[1] = (uint)puVar7;
        puStack_30 = (undefined4 *)uVar9;
        if (bVar16) {
          puStack_30 = (undefined4 *)(uVar9 + uVar2);
        }
        *param_1 = uVar3;
        param_1[3] = uVar1;
        if (uStack_38 != 0) {
          puStack_34 = (undefined4 *)uVar14;
          thunk_qNQrlu();
        }
        return;
      }
LAB_718031e0:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    if (uVar3 != uVar12) {
      uStack_38 = thunk_MwhHq(0x1000);
      FUN_718033a0(param_1,&uStack_38);
      return;
    }
    uStack_38 = thunk_MwhHq(0x1000);
    FUN_7180353c(param_1,&uStack_38);
    puVar11 = (undefined4 *)param_1[2];
    puVar7 = (undefined4 *)param_1[1] + 1;
    uVar13 = *(undefined4 *)param_1[1];
    param_1[1] = (uint)puVar7;
    if (puVar11 != (undefined4 *)param_1[3]) goto LAB_71803078;
    puVar8 = (undefined4 *)*param_1;
    if (puVar7 <= puVar8) {
      uVar9 = (int)puVar11 - (int)puVar8 >> 1;
      if ((int)puVar11 - (int)puVar8 == 0) {
        uVar9 = 1;
      }
      if (0x3fffffff < uVar9) goto LAB_718031e0;
      uVar2 = thunk_MwhHq(uVar9 << 2);
      uVar14 = uVar2 + uVar9 * 4;
      puVar6 = (undefined4 *)(uVar2 + (uVar9 & 0xfffffffc));
      puVar15 = puVar6;
      if (puVar11 != puVar7) {
        iVar4 = (int)puVar11 - (int)puVar7;
        puVar15 = (undefined4 *)((int)puVar6 + iVar4);
        puVar11 = puVar6;
        do {
          iVar4 = iVar4 + -4;
          *puVar11 = *puVar7;
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
      }
      goto LAB_7180302c;
    }
  }
  else {
    puVar11 = (undefined4 *)param_1[2];
    param_1[4] = param_1[4] - 0x400;
    puVar7 = (undefined4 *)param_1[1] + 1;
    uVar13 = *(undefined4 *)param_1[1];
    param_1[1] = (uint)puVar7;
    if (puVar11 != (undefined4 *)param_1[3]) goto LAB_71803078;
    puVar8 = (undefined4 *)*param_1;
    if (puVar7 <= puVar8) {
      uVar9 = (int)puVar11 - (int)puVar8 >> 1;
      if ((int)puVar11 - (int)puVar8 == 0) {
        uVar9 = 1;
      }
      if (0x3fffffff < uVar9) goto LAB_718031e0;
      uVar2 = thunk_MwhHq(uVar9 << 2);
      uVar14 = uVar2 + uVar9 * 4;
      puVar6 = (undefined4 *)(uVar2 + (uVar9 & 0xfffffffc));
      puVar15 = puVar6;
      if (puVar11 != puVar7) {
        iVar4 = (int)puVar11 - (int)puVar7;
        puVar15 = (undefined4 *)((int)puVar6 + iVar4);
        puVar11 = puVar6;
        do {
          iVar4 = iVar4 + -4;
          *puVar11 = *puVar7;
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
      }
LAB_7180302c:
      *param_1 = uVar2;
      param_1[1] = (uint)puVar6;
      param_1[2] = (uint)puVar15;
      param_1[3] = uVar14;
      thunk_qNQrlu(puVar8);
      puVar11 = (undefined4 *)param_1[2];
      goto LAB_71803078;
    }
  }
  iVar10 = (int)puVar11 - (int)puVar7;
  iVar4 = (((int)puVar7 - (int)puVar8 >> 2) + 1) / 2;
  puVar11 = puVar7 + -iVar4;
  if (iVar10 != 0) {
    imp___aeabi_memmove4(puVar11,puVar7,iVar10);
    puVar7 = (undefined4 *)param_1[1];
  }
  puVar11 = (undefined4 *)((int)puVar11 + iVar10);
  param_1[1] = (uint)(puVar7 + -iVar4);
  param_1[2] = (uint)puVar11;
LAB_71803078:
  *puVar11 = uVar13;
  param_1[2] = param_1[2] + 4;
  return;
}


// =========================================================================
// Function: FUN_718033a0
// Entry: 0x718033a0 | Size: 276 bytes
// =========================================================================

void FUN_718033a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar4 = (undefined4 *)param_1[2];
  if (puVar4 == (undefined4 *)param_1[3]) {
    puVar6 = (undefined4 *)*param_1;
    puVar7 = (undefined4 *)param_1[1];
    if (puVar6 < puVar7) {
      iVar8 = (int)puVar4 - (int)puVar7;
      iVar1 = (((int)puVar7 - (int)puVar6 >> 2) + 1) / 2;
      puVar6 = puVar4;
      if (iVar8 != 0) {
        imp___aeabi_memmove4(puVar7 + -iVar1,puVar7,iVar8);
        puVar6 = (undefined4 *)param_1[1];
      }
      puVar4 = (undefined4 *)((int)(puVar7 + -iVar1) + iVar8);
      param_1[1] = (int)(puVar6 + -iVar1);
      param_1[2] = (int)puVar4;
    }
    else {
      uVar5 = (int)puVar4 - (int)puVar6 >> 1;
      if ((int)puVar4 - (int)puVar6 == 0) {
        uVar5 = 1;
      }
      if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar1 = thunk_MwhHq(uVar5 << 2);
      puVar3 = (undefined4 *)(iVar1 + (uVar5 & 0xfffffffc));
      puVar2 = puVar3;
      if (puVar4 != puVar7) {
        iVar8 = (int)puVar4 - (int)puVar7;
        puVar2 = (undefined4 *)((int)puVar3 + iVar8);
        puVar4 = puVar3;
        do {
          iVar8 = iVar8 + -4;
          *puVar4 = *puVar7;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar8 != 0);
      }
      puVar4 = puVar2;
      *param_1 = iVar1;
      param_1[1] = (int)puVar3;
      param_1[2] = (int)puVar4;
      param_1[3] = iVar1 + uVar5 * 4;
      if (puVar6 != (undefined4 *)0x0) {
        thunk_qNQrlu(puVar6);
        puVar4 = (undefined4 *)param_1[2];
      }
    }
  }
  *puVar4 = *param_2;
  param_1[2] = param_1[2] + 4;
  return;
}


// =========================================================================
// Function: FUN_7180353c
// Entry: 0x7180353c | Size: 268 bytes
// =========================================================================

void FUN_7180353c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar4 = (undefined4 *)param_1[1];
  puVar6 = puVar4;
  if (puVar4 == (undefined4 *)*param_1) {
    puVar5 = (undefined4 *)param_1[2];
    puVar6 = (undefined4 *)param_1[3];
    if (puVar5 < puVar6) {
      iVar1 = (((int)puVar6 - (int)puVar5 >> 2) + 1) / 2;
      puVar6 = (undefined4 *)((int)puVar5 + (iVar1 * 4 - ((int)puVar5 - (int)puVar4)));
      if ((int)puVar5 - (int)puVar4 != 0) {
        imp___aeabi_memmove4(puVar6,puVar4);
        puVar4 = (undefined4 *)param_1[2];
      }
      param_1[1] = (int)puVar6;
      param_1[2] = (int)(puVar4 + iVar1);
    }
    else {
      uVar7 = (int)puVar6 - (int)puVar4 >> 1;
      if ((int)puVar6 - (int)puVar4 == 0) {
        uVar7 = 1;
      }
      if (0x3fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar1 = thunk_MwhHq(uVar7 << 2);
      puVar6 = (undefined4 *)(iVar1 + (uVar7 + 3 & 0xfffffffc));
      puVar2 = puVar6;
      if (puVar5 != puVar4) {
        iVar3 = (int)puVar5 - (int)puVar4;
        puVar2 = (undefined4 *)((int)puVar6 + iVar3);
        puVar5 = puVar6;
        puVar8 = puVar4;
        do {
          iVar3 = iVar3 + -4;
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar3 != 0);
      }
      *param_1 = iVar1;
      param_1[1] = (int)puVar6;
      param_1[2] = (int)puVar2;
      param_1[3] = iVar1 + uVar7 * 4;
      if (puVar4 != (undefined4 *)0x0) {
        thunk_qNQrlu(puVar4);
        puVar6 = (undefined4 *)param_1[1];
      }
    }
  }
  puVar6[-1] = *param_2;
  param_1[1] = param_1[1] + -4;
  return;
}


// =========================================================================
// Function: FUN_718036d0
// Entry: 0x718036d0 | Size: 268 bytes
// =========================================================================

void FUN_718036d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar4 = (undefined4 *)param_1[1];
  puVar6 = puVar4;
  if (puVar4 == (undefined4 *)*param_1) {
    puVar5 = (undefined4 *)param_1[2];
    puVar6 = (undefined4 *)param_1[3];
    if (puVar5 < puVar6) {
      iVar1 = (((int)puVar6 - (int)puVar5 >> 2) + 1) / 2;
      puVar6 = (undefined4 *)((int)puVar5 + (iVar1 * 4 - ((int)puVar5 - (int)puVar4)));
      if ((int)puVar5 - (int)puVar4 != 0) {
        imp___aeabi_memmove4(puVar6,puVar4);
        puVar4 = (undefined4 *)param_1[2];
      }
      param_1[1] = (int)puVar6;
      param_1[2] = (int)(puVar4 + iVar1);
    }
    else {
      uVar7 = (int)puVar6 - (int)puVar4 >> 1;
      if ((int)puVar6 - (int)puVar4 == 0) {
        uVar7 = 1;
      }
      if (0x3fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar1 = thunk_MwhHq(uVar7 << 2);
      puVar6 = (undefined4 *)(iVar1 + (uVar7 + 3 & 0xfffffffc));
      puVar2 = puVar6;
      if (puVar5 != puVar4) {
        iVar3 = (int)puVar5 - (int)puVar4;
        puVar2 = (undefined4 *)((int)puVar6 + iVar3);
        puVar5 = puVar6;
        puVar8 = puVar4;
        do {
          iVar3 = iVar3 + -4;
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar3 != 0);
      }
      *param_1 = iVar1;
      param_1[1] = (int)puVar6;
      param_1[2] = (int)puVar2;
      param_1[3] = iVar1 + uVar7 * 4;
      if (puVar4 != (undefined4 *)0x0) {
        thunk_qNQrlu(puVar4);
        puVar6 = (undefined4 *)param_1[1];
      }
    }
  }
  puVar6[-1] = *param_2;
  param_1[1] = param_1[1] + -4;
  return;
}


// =========================================================================
// Function: FUN_71803864
// Entry: 0x71803864 | Size: 124 bytes
// =========================================================================

uint * FUN_71803864(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_718039a0(param_1 + 3);
  uVar1 = thunk_MwhHq(0x68);
  uVar2 = FUN_718043a4(uVar1,param_2);
  *param_1 = uVar2;
  if (param_3 != 0) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x20);
  }
  if (param_3 != 0 && uVar2 != 0) {
    uVar1 = thunk_MwhHq(0x88);
    uVar2 = FUN_718017ac(uVar1,param_2);
    param_1[1] = uVar2;
    *(undefined4 *)(uVar2 + 0x4c) = *(undefined4 *)(*param_1 + 0x4c);
  }
  else {
    param_1[1] = 0;
  }
  uVar2 = FUN_71886108();
  param_1[2] = uVar2;
  return param_1;
}


// =========================================================================
// Function: FUN_718039a0
// Entry: 0x718039a0 | Size: 256 bytes
// =========================================================================

undefined4 * FUN_718039a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  param_1[3] = iVar1;
  iVar2 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(int *)(iVar1 + 0x18) = iVar2;
  iVar2 = *(int *)(iVar1 + 0x18);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar2 + 0x18) = iVar1;
  iVar2 = *(int *)(param_1[2] + 0x18);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar2 + 0x18) = iVar1;
  iVar2 = *(int *)(param_1[2] + 0x18);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar2 + 0x18) = iVar1;
  iVar2 = *(int *)(param_1[2] + 0x18);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar2 + 0x18) = iVar1;
  iVar2 = *(int *)(param_1[2] + 0x18);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar2 + 0x18) = iVar1;
  iVar2 = *(int *)(param_1[2] + 0x18);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(0x1c);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar2 + 0x18) = iVar1;
  uVar3 = param_1[3];
  *(undefined4 *)(*(int *)(param_1[2] + 0x18) + 0x18) = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  return param_1;
}


// =========================================================================
// Function: FUN_71803b98
// Entry: 0x71803b98 | Size: 52 bytes
// =========================================================================

void FUN_71803b98(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = FUN_71886108();
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = FUN_71886108();
  uVar1 = FUN_71ba1e0c(iVar2 - iVar3);
  FUN_71ba13e0(uVar1,0x447a0000);
  return;
}


// =========================================================================
// Function: FUN_71803c54
// Entry: 0x71803c54 | Size: 580 bytes
// =========================================================================

undefined4 FUN_71803c54(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  byte *unaff_r8;
  
  piVar5 = *(int **)param_1;
  uVar4 = 0;
  pbVar3 = (byte *)piVar5[3];
  pbVar1 = param_1;
  if (pbVar3 != (byte *)0x0) {
    pbVar1 = (byte *)piVar5[6];
    unaff_r8 = param_1;
  }
  if (pbVar3 != (byte *)0x0 && pbVar3 != pbVar1) {
    do {
      if (pbVar3[0x14] == 0) {
        return uVar4;
      }
      piVar5[3] = *(int *)(pbVar3 + 0x18);
      if (*pbVar3 < 10) {
        pbVar1 = pbVar3 + 4;
        switch(*pbVar3) {
        case 0:
          *(undefined1 *)(*piVar5 + 0x21) = 1;
          if (piVar5[1] != 0) {
            *(undefined1 *)(piVar5[1] + 0x21) = 1;
          }
          break;
        case 1:
          *(undefined1 *)(*piVar5 + 0x21) = 0;
          if (piVar5[1] != 0) {
            *(undefined1 *)(piVar5[1] + 0x21) = 0;
          }
          break;
        case 2:
          *(undefined1 *)(*piVar5 + 0x22) = 1;
          if (piVar5[1] != 0) {
            *(undefined1 *)(piVar5[1] + 0x22) = 1;
          }
          break;
        case 3:
          *(undefined1 *)(*piVar5 + 0x22) = 0;
          if (piVar5[1] != 0) {
            *(undefined1 *)(piVar5[1] + 0x22) = 0;
          }
          break;
        case 4:
          FUN_71801324(*piVar5,*(undefined4 *)pbVar1);
          if (piVar5[1] == 0) {
            uVar4 = 1;
          }
          else {
            FUN_71801324(piVar5[1],*(undefined4 *)pbVar1);
            uVar4 = 1;
            FUN_71801a5c(piVar5[1],1);
          }
          break;
        case 6:
          if (piVar5[1] != 0) {
            FUN_71802b38(piVar5[1],pbVar3[4],*(undefined4 *)(pbVar3 + 8),
                         *(undefined4 *)(pbVar3 + 0xc),*(undefined4 *)(pbVar3 + 0x10));
          }
          break;
        case 7:
          if (piVar5[1] != 0) {
            FUN_71802c6c(piVar5[1],*(undefined4 *)pbVar1);
          }
          break;
        case 8:
          if (piVar5[1] != 0) {
            FUN_71802d44(piVar5[1],*(undefined4 *)pbVar1);
          }
          break;
        case 9:
          piVar5[7] = piVar5[7] + 1;
          *(undefined1 *)(piVar5[5] + 0x14) = 0;
          piVar5[5] = *(int *)(piVar5[5] + 0x18);
          piVar5 = *(int **)unaff_r8;
          if (piVar5 == (int *)0x0) goto LAB_71803eb4;
          if ((int *)*piVar5 != (int *)0x0) {
            (**(code **)(*(int *)*piVar5 + 4))();
          }
          if ((int *)piVar5[1] != (int *)0x0) {
            (**(code **)(*(int *)piVar5[1] + 4))();
          }
          iVar6 = piVar5[4];
          iVar2 = *(int *)(iVar6 + 0x18);
          piVar5[5] = iVar2;
          if (iVar2 == iVar6) goto LAB_71803ea4;
          do {
            iVar2 = *(int *)(iVar2 + 0x18);
            thunk_qNQrlu();
            piVar5[5] = iVar2;
          } while (iVar2 != piVar5[4]);
          iVar6 = iVar2;
          if (iVar2 != 0) {
LAB_71803ea4:
            thunk_qNQrlu(iVar6);
          }
          thunk_qNQrlu(piVar5);
LAB_71803eb4:
          unaff_r8[0] = 0;
          unaff_r8[1] = 0;
          unaff_r8[2] = 0;
          unaff_r8[3] = 0;
          return 1;
        }
      }
      piVar5[7] = piVar5[7] + 1;
      *(undefined1 *)(piVar5[5] + 0x14) = 0;
      pbVar1 = *(byte **)(piVar5[5] + 0x18);
      pbVar3 = (byte *)piVar5[3];
      piVar5[5] = (int)pbVar1;
      if (pbVar3 != (byte *)0x0) {
        pbVar1 = (byte *)piVar5[6];
      }
    } while (pbVar3 != (byte *)0x0 && pbVar3 != pbVar1);
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_71803fd4
// Entry: 0x71803fd4 | Size: 140 bytes
// =========================================================================

void FUN_71803fd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  if ((*(int *)(puVar3 + 0x18) == *(int *)(param_1 + 0x14)) ||
     (*(char *)(*(int *)(puVar3 + 0x18) + 0x14) != '\0')) {
    uVar2 = *(undefined4 *)(puVar3 + 0x18);
    iVar1 = thunk_MwhHq(0x1c);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    *(int *)(puVar3 + 0x18) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 0x18) = uVar2;
    puVar3 = *(undefined1 **)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar3 + 0x18);
  *puVar3 = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
  return;
}


// =========================================================================
// Function: FUN_71804094
// Entry: 0x71804094 | Size: 136 bytes
// =========================================================================

void FUN_71804094(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  if ((*(int *)(puVar3 + 0x18) == *(int *)(param_1 + 0x14)) ||
     (*(char *)(*(int *)(puVar3 + 0x18) + 0x14) != '\0')) {
    uVar2 = *(undefined4 *)(puVar3 + 0x18);
    iVar1 = thunk_MwhHq(0x1c);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    *(int *)(puVar3 + 0x18) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 0x18) = uVar2;
    puVar3 = *(undefined1 **)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar3 + 0x18);
  *puVar3 = 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
  return;
}


// =========================================================================
// Function: FUN_71804150
// Entry: 0x71804150 | Size: 152 bytes
// =========================================================================

void FUN_71804150(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  if ((*(int *)(puVar3 + 0x18) == *(int *)(param_1 + 0x14)) ||
     (*(char *)(*(int *)(puVar3 + 0x18) + 0x14) != '\0')) {
    uVar4 = *(undefined4 *)(puVar3 + 0x18);
    iVar2 = thunk_MwhHq(0x1c);
    *(undefined1 *)(iVar2 + 0x14) = 0;
    *(int *)(puVar3 + 0x18) = iVar2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 0x18) = uVar4;
    puVar3 = *(undefined1 **)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar3 + 0x18);
  uVar1 = 3;
  if (param_2 != 0) {
    uVar1 = 2;
  }
  *puVar3 = uVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
  return;
}


// =========================================================================
// Function: FUN_7180421c
// Entry: 0x7180421c | Size: 148 bytes
// =========================================================================

void FUN_7180421c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  if ((*(int *)(puVar2 + 0x18) == *(int *)(param_1 + 0x14)) ||
     (*(char *)(*(int *)(puVar2 + 0x18) + 0x14) != '\0')) {
    uVar3 = *(undefined4 *)(puVar2 + 0x18);
    iVar1 = thunk_MwhHq(0x1c);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    *(int *)(puVar2 + 0x18) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 0x18) = uVar3;
    puVar2 = *(undefined1 **)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar2 + 0x18);
  *(undefined4 *)(puVar2 + 4) = param_2;
  *puVar2 = 4;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
  return;
}


// =========================================================================
// Function: FUN_718042e4
// Entry: 0x718042e4 | Size: 140 bytes
// =========================================================================

void FUN_718042e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x10);
  if ((*(int *)(puVar3 + 0x18) == *(int *)(param_1 + 0x14)) ||
     (*(char *)(*(int *)(puVar3 + 0x18) + 0x14) != '\0')) {
    uVar2 = *(undefined4 *)(puVar3 + 0x18);
    iVar1 = thunk_MwhHq(0x1c);
    *(undefined1 *)(iVar1 + 0x14) = 0;
    *(int *)(puVar3 + 0x18) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 0x18) = uVar2;
    puVar3 = *(undefined1 **)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar3 + 0x18);
  *puVar3 = 9;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
  return;
}


// =========================================================================
// Function: FUN_718043a4
// Entry: 0x718043a4 | Size: 216 bytes
// =========================================================================

undefined4 * FUN_718043a4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_71800de8(param_1,param_2,0);
  *param_1 = &DAT_70b0f9dc;
  iVar3 = *(int *)(param_1[4] + 0x38);
  param_1[0x14] = iVar3;
  iVar1 = *(int *)(param_1[4] + 0x3c);
  param_1[0x15] = iVar1;
  param_1[0x16] = 0;
  uVar2 = imp_malloc(iVar3 * iVar1 * 3);
  param_1[0x17] = uVar2;
  iVar1 = param_1[2];
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar4 = *(undefined4 *)(iVar1 + 0xac);
  uVar5 = *(undefined4 *)(iVar1 + 0xb0);
  uVar2 = FUN_71ba19d8(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34));
  FUN_71ba0b38(uVar2,0xc0400000);
  uVar6 = FUN_71ba1638();
  uVar7 = FUN_71ba1b10(uVar4);
  uVar8 = FUN_71ba1b10(uVar5);
  uVar7 = FUN_71ba0f98((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                       (int)((ulonglong)uVar8 >> 0x20));
  FUN_71ba0f98((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20)
              );
  uVar2 = FUN_71ba242c();
  param_1[0x13] = uVar2;
  return param_1;
}


// =========================================================================
// Function: FUN_71804ea8
// Entry: 0x71804ea8 | Size: 72 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71804ea8(byte *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  byte bVar18;
  int iVar19;
  bool bVar20;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  uint uStack_680;
  undefined1 auStack_67c [396];
  undefined4 uStack_4f0;
  uint uStack_4ec;
  uint uStack_4e8;
  uint uStack_4e4;
  int iStack_360;
  uint uStack_35c;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined2 uStack_3c;
  ushort uStack_3a;
  undefined4 uStack_38;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if (((*param_1 - 0x3a < 0xfffffff6) &&
      (param_1 = (byte *)FUN_718c4a50(&DAT_71204291,param_1), param_1 == (byte *)0x0)) ||
     (DAT_71201e28 = imp_socket(2,2,0x11), DAT_71201e28 == -1)) goto LAB_718051f8;
  uStack_688 = 5;
  uStack_684 = 0;
  iVar7 = imp_setsockopt(DAT_71201e28,1,0x14,&uStack_688,8);
  if (iVar7 == -1) goto LAB_718051f8;
  uStack_3c = 2;
  uStack_3a = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  uStack_38 = imp_inet_addr(param_1);
  imp___aeabi_memclr8(&uStack_1d0,400);
  pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc624);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc614);
    *(undefined2 *)(puVar11 + 2) = 0x11d;
    *puVar11 = 0xfd8b9850;
    puVar11[1] = 0xa3ba9afa;
    GFDIUClbc_QcPNgD_wH(&LAB_71806af0,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc624);
    *puVar12 = 1;
  }
  pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc614);
  if (pbVar9[9] != 0) {
    pbVar9[9] = 0;
    *pbVar9 = *pbVar9 ^ 0x1d;
    pbVar9[1] = pbVar9[1] ^ 0xdb;
    pbVar9[2] = pbVar9[2] ^ 0xd9;
    pbVar9[3] = pbVar9[3] ^ 0xb5;
    pbVar9[4] = pbVar9[4] ^ 0xc9;
    pbVar9[5] = pbVar9[5] ^ 0xab;
    pbVar9[6] = pbVar9[6] ^ 0x8b;
    pbVar9[7] = pbVar9[7] ^ 0x93;
    pbVar9[8] = pbVar9[8] ^ 0x1d;
  }
  uStack_1d0 = *(undefined4 *)pbVar9;
  uStack_1cc = *(undefined4 *)(pbVar9 + 4);
  iVar7 = imp_sendto(DAT_71201e28,&uStack_1d0,400,0,&uStack_3c,0x10);
  if (iVar7 == -1) goto LAB_718051f8;
  imp___aeabi_memclr8(&iStack_360,400);
  uStack_68c = 0x10;
  iVar7 = imp_recvfrom(DAT_71201e28,&iStack_360,400,0,&uStack_3c,&uStack_68c);
  if (iVar7 == -1) goto LAB_718051f8;
  pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc644);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc634);
    *puVar11 = 0x96637626;
    *(undefined2 *)(puVar11 + 1) = 0x15d;
    GFDIUClbc_QcPNgD_wH(&LAB_71806b1c,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc644);
    *puVar12 = 1;
  }
  pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc634);
  if (pbVar9[5] != 0) {
    pbVar9[5] = 0;
    *pbVar9 = *pbVar9 ^ 0x6b;
    pbVar9[1] = pbVar9[1] ^ 0x35;
    pbVar9[2] = pbVar9[2] ^ 0x31;
    pbVar9[3] = pbVar9[3] ^ 0xd5;
    pbVar9[4] = pbVar9[4] ^ 0x5d;
  }
  if (iStack_360 != *(int *)pbVar9) goto LAB_718051f8;
  imp___aeabi_memclr8(&uStack_4f0,400);
  uStack_680 = uStack_35c;
  if (DAT_711f6c2f == '\0') {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc684);
    if (*pcVar8 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc674);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar4 = DAT_7008625c;
      uVar3 = DAT_70086258;
      uVar10 = DAT_70086254;
      *puVar11 = DAT_70086250;
      puVar11[1] = uVar10;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar5 = DAT_70086270;
      uVar4 = DAT_7008626c;
      uVar3 = DAT_70086268;
      uVar10 = DAT_70086264;
      puVar11[4] = DAT_70086260;
      puVar11[5] = uVar10;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      uVar5 = DAT_70086284;
      uVar4 = DAT_70086280;
      uVar3 = DAT_7008627c;
      uVar10 = DAT_70086278;
      puVar11[9] = DAT_70086274;
      puVar11[10] = uVar10;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      uVar6 = DAT_7008628a;
      *(undefined2 *)(puVar11 + 0xe) = DAT_70086288;
      *(undefined1 *)((int)puVar11 + 0x3a) = uVar6;
      GFDIUClbc_QcPNgD_wH(&LAB_71806b44,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc684);
      *puVar12 = 1;
    }
    iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fc674);
    if (*(char *)(iVar7 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar18 = (byte)(0x4167492b >> iVar15) |
                 (byte)(0x5d5373a5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar18 = (byte)(0x5d5373a5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar20;
      } while (bVar1 && bVar2);
      goto LAB_718052a0;
    }
  }
  else {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc664);
    if (*pcVar8 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc654);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar4 = DAT_7008625c;
      uVar3 = DAT_70086258;
      uVar10 = DAT_70086254;
      *puVar11 = DAT_70086250;
      puVar11[1] = uVar10;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar5 = DAT_70086270;
      uVar4 = DAT_7008626c;
      uVar3 = DAT_70086268;
      uVar10 = DAT_70086264;
      puVar11[4] = DAT_70086260;
      puVar11[5] = uVar10;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      uVar5 = DAT_70086284;
      uVar4 = DAT_70086280;
      uVar3 = DAT_7008627c;
      uVar10 = DAT_70086278;
      puVar11[9] = DAT_70086274;
      puVar11[10] = uVar10;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      *(undefined2 *)(puVar11 + 0xe) = DAT_70086288;
      *(undefined1 *)((int)puVar11 + 0x3a) = DAT_7008628a;
      GFDIUClbc_QcPNgD_wH(&LAB_71806b44,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc664);
      *puVar12 = 1;
    }
    iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fc654);
    if (*(char *)(iVar7 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar18 = (byte)(0x4167492b >> iVar15) |
                 (byte)(0x5d5373a5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar18 = (byte)(0x5d5373a5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar20;
      } while (bVar1 && bVar2);
LAB_718052a0:
      *(undefined1 *)(iVar7 + 0x3b) = 0;
    }
  }
  if (DAT_711f6c2f == '\0') {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6c4);
    if (*pcVar8 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6b4);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar4 = DAT_7008625c;
      uVar3 = DAT_70086258;
      uVar10 = DAT_70086254;
      *puVar11 = DAT_70086250;
      puVar11[1] = uVar10;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar5 = DAT_70086270;
      uVar4 = DAT_7008626c;
      uVar3 = DAT_70086268;
      uVar10 = DAT_70086264;
      puVar11[4] = DAT_70086260;
      puVar11[5] = uVar10;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      uVar5 = DAT_70086284;
      uVar4 = DAT_70086280;
      uVar3 = DAT_7008627c;
      uVar10 = DAT_70086278;
      puVar11[9] = DAT_70086274;
      puVar11[10] = uVar10;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      *(undefined2 *)(puVar11 + 0xe) = DAT_70086288;
      *(undefined1 *)((int)puVar11 + 0x3a) = DAT_7008628a;
      GFDIUClbc_QcPNgD_wH(&LAB_71806b44,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6c4);
      *puVar12 = 1;
    }
    iVar15 = XcxSszXLPjQrEGhecEv_(&DAT_700fc6b4);
    if (*(char *)(iVar15 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar19 = (uVar13 & 7) * 8;
        uVar16 = iVar19 - 0x20;
        bVar18 = (byte)(0x4167492b >> iVar19) |
                 (byte)(0x5d5373a5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar18 = (byte)(0x5d5373a5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar15 + uVar13) = *(byte *)(iVar15 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar20;
      } while (bVar1 && bVar2);
      goto LAB_718053bc;
    }
  }
  else {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6a4);
    if (*pcVar8 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc694);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar4 = DAT_7008625c;
      uVar3 = DAT_70086258;
      uVar10 = DAT_70086254;
      *puVar11 = DAT_70086250;
      puVar11[1] = uVar10;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar5 = DAT_70086270;
      uVar4 = DAT_7008626c;
      uVar3 = DAT_70086268;
      uVar10 = DAT_70086264;
      puVar11[4] = DAT_70086260;
      puVar11[5] = uVar10;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      uVar5 = DAT_70086284;
      uVar4 = DAT_70086280;
      uVar3 = DAT_7008627c;
      uVar10 = DAT_70086278;
      puVar11[9] = DAT_70086274;
      puVar11[10] = uVar10;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      *(undefined2 *)(puVar11 + 0xe) = DAT_70086288;
      *(undefined1 *)((int)puVar11 + 0x3a) = DAT_7008628a;
      GFDIUClbc_QcPNgD_wH(&LAB_71806b44,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6a4);
      *puVar12 = 1;
    }
    iVar15 = XcxSszXLPjQrEGhecEv_(&DAT_700fc694);
    if (*(char *)(iVar15 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar19 = (uVar13 & 7) * 8;
        uVar16 = iVar19 - 0x20;
        bVar18 = (byte)(0x4167492b >> iVar19) |
                 (byte)(0x5d5373a5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar18 = (byte)(0x5d5373a5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar15 + uVar13) = *(byte *)(iVar15 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar20;
      } while (bVar1 && bVar2);
LAB_718053bc:
      *(undefined1 *)(iVar15 + 0x3b) = 0;
    }
  }
  uVar10 = imp_strlen();
  imp___memcpy_chk(auStack_67c,iVar7,uVar10,0x18c);
  pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6e4);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6d4);
    *puVar11 = 0x69e39608;
    *(undefined2 *)(puVar11 + 1) = 0x1af;
    GFDIUClbc_QcPNgD_wH(&LAB_71806b94,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6e4);
    *puVar12 = 1;
  }
  pbVar9 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6d4);
  if (pbVar9[5] != 0) {
    pbVar9[5] = 0;
    *pbVar9 = *pbVar9 ^ 0x45;
    pbVar9[1] = pbVar9[1] ^ 0xd5;
    pbVar9[2] = pbVar9[2] ^ 0xb1;
    pbVar9[3] = pbVar9[3] ^ 0x3b;
    pbVar9[4] = pbVar9[4] ^ 0xaf;
  }
  uStack_4f0 = *(undefined4 *)pbVar9;
  uStack_4ec = uStack_35c;
  if (DAT_711f6c2f == '\0') {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc724);
    if (*pcVar8 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc714);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar4 = DAT_7008629c;
      uVar3 = DAT_70086298;
      uVar10 = DAT_70086294;
      *puVar11 = DAT_70086290;
      puVar11[1] = uVar10;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar5 = DAT_700862b0;
      uVar4 = DAT_700862ac;
      uVar3 = DAT_700862a8;
      uVar10 = DAT_700862a4;
      puVar11[4] = DAT_700862a0;
      puVar11[5] = uVar10;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      uVar5 = DAT_700862c4;
      uVar4 = DAT_700862c0;
      uVar3 = DAT_700862bc;
      uVar10 = DAT_700862b8;
      puVar11[9] = DAT_700862b4;
      puVar11[10] = uVar10;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      uVar6 = DAT_700862ca;
      *(undefined2 *)(puVar11 + 0xe) = DAT_700862c8;
      *(undefined1 *)((int)puVar11 + 0x3a) = uVar6;
      GFDIUClbc_QcPNgD_wH(&LAB_71806bbc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc724);
      *puVar12 = 1;
    }
    iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fc714);
    if (*(char *)(iVar7 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        bVar18 = (byte)(0xbb4fdb95 >> iVar15) |
                 (byte)(-0x626a25d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar16 = iVar15 - 0x20;
        if (-1 < (int)uVar16) {
          bVar18 = (byte)(0xf9d95da3 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar20;
      } while (bVar1 && bVar2);
      goto LAB_718055ac;
    }
  }
  else {
    pcVar8 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_700fc704);
    if (*pcVar8 == '\0') {
      puVar11 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc6f4);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar4 = DAT_7008629c;
      uVar3 = DAT_70086298;
      uVar10 = DAT_70086294;
      *puVar11 = DAT_70086290;
      puVar11[1] = uVar10;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      uVar5 = DAT_700862b0;
      uVar4 = DAT_700862ac;
      uVar3 = DAT_700862a8;
      uVar10 = DAT_700862a4;
      puVar11[4] = DAT_700862a0;
      puVar11[5] = uVar10;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      uVar5 = DAT_700862c4;
      uVar4 = DAT_700862c0;
      uVar3 = DAT_700862bc;
      uVar10 = DAT_700862b8;
      puVar11[9] = DAT_700862b4;
      puVar11[10] = uVar10;
      puVar11[0xb] = uVar3;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      uVar6 = DAT_700862ca;
      *(undefined2 *)(puVar11 + 0xe) = DAT_700862c8;
      *(undefined1 *)((int)puVar11 + 0x3a) = uVar6;
      GFDIUClbc_QcPNgD_wH(&LAB_71806bbc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_700fc704);
      *puVar12 = 1;
    }
    iVar7 = XcxSszXLPjQrEGhecEv_(&DAT_700fc6f4);
    if (*(char *)(iVar7 + 0x3b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        bVar18 = (byte)(0xbb4fdb95 >> iVar15) |
                 (byte)(-0x626a25d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar16 = iVar15 - 0x20;
        if (-1 < (int)uVar16) {
          bVar18 = (byte)(0xf9d95da3 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar7 + uVar13) = *(byte *)(iVar7 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x39 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar20;
      } while (bVar1 && bVar2);
LAB_718055ac:
      *(undefined1 *)(iVar7 + 0x3b) = 0;
    }
  }
  iVar7 = imp_strlen();
  iVar7 = iVar7 + 4;
  uStack_4e8 = 0;
  puVar17 = &uStack_680;
  if (0 < iVar7) {
    do {
      iVar7 = iVar7 + -1;
      uStack_4e8 = *(uint *)(&DAT_700fc214 + (uStack_4e8 & 0xff ^ (uint)(byte)*puVar17) * 4) ^
                   uStack_4e8 >> 8;
      puVar17 = (uint *)((int)puVar17 + 1);
    } while (iVar7 != 0);
  }
  uVar13 = *(uint *)(&DAT_700fc214 + (uStack_4e8 & 0xff ^ uStack_35c & 0xff) * 4) ^ uStack_4e8 >> 8;
  uVar13 = *(uint *)(&DAT_700fc214 + (uVar13 & 0xff ^ uStack_35c >> 8 & 0xff) * 4) ^ uVar13 >> 8;
  uVar13 = *(uint *)(&DAT_700fc214 + (uVar13 & 0xff ^ uStack_35c >> 0x10 & 0xff) * 4) ^ uVar13 >> 8;
  uStack_4e4 = *(uint *)(&DAT_700fc214 + (uVar13 & 0xff ^ uStack_35c >> 0x18) * 4) ^ uVar13 >> 8;
  iVar7 = imp_sendto(DAT_71201e28,&uStack_4f0,400,0,&uStack_3c,0x10);
  if (iVar7 != -1) {
    imp_close(DAT_71201e28);
    DAT_71201e28 = 0;
  }
LAB_718051f8:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_7185050c
// Entry: 0x7185050c | Size: 80 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71850e10) */
/* WARNING: Removing unreachable block (ram,0x71850c14) */
/* WARNING: Removing unreachable block (ram,0x71851040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7185050c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  byte *pbVar28;
  byte *pbVar29;
  char *pcVar30;
  undefined4 *puVar31;
  undefined1 *puVar32;
  uint uVar33;
  byte *pbVar34;
  uint uVar35;
  byte bVar36;
  uint uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  bool bVar41;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_51;
  uint auStack_50 [2];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x95;
  uStack_48 = 0x4e;
  uStack_30 = 0xff330093;
  uStack_58 = uStack_58 & 0xffffff00;
  do {
    *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
         (char)uStack_40 + (char)puStack_38 ^
         (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
    bVar36 = (byte)uStack_58 + 1;
    uStack_58 = CONCAT31(uStack_58._1_3_,bVar36);
  } while (bVar36 < 4);
  uStack_58._0_1_ = 0;
  do {
    uStack_58._0_1_ = (byte)uStack_58 + 1;
    uStack_30 = uStack_48 + 0xacacac ^
                (uint)(0xc1ceb9f9 < uStack_3c &&
                      (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
  } while ((byte)uStack_58 < 8);
  uStack_58._0_1_ = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
         *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
         (char)uStack_40 + (char)puStack_38;
    uVar40 = uStack_48;
    uVar39 = auStack_50[0];
    uStack_58._0_1_ = (byte)uStack_58 + 1;
  } while ((byte)uStack_58 < 4);
  uStack_58._0_1_ = 0;
  do {
    uStack_58._0_1_ = (byte)uStack_58 + 1;
  } while ((byte)uStack_58 < 8);
  uStack_34 = 0x26d5d038;
  uStack_3c = 0;
  uStack_48 = 0x4c;
  uStack_44 = 0;
  uStack_30 = 0xccff6e;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x98;
  uStack_58._0_1_ = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
         (char)uStack_40 + (char)puStack_38 ^
         (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
    uStack_58._0_1_ = (byte)uStack_58 + 1;
  } while ((byte)uStack_58 < 4);
  uStack_58._0_1_ = 0;
  do {
    uStack_58._0_1_ = (byte)uStack_58 + 1;
    uStack_30 = uStack_48 + 0xacacac ^
                (uint)(0xc1ceb9f9 < uStack_3c &&
                      (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
  } while ((byte)uStack_58 < 8);
  uStack_58._0_1_ = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
         *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
         (char)uStack_40 + (char)puStack_38;
    uStack_58._0_1_ = (byte)uStack_58 + 1;
  } while ((byte)uStack_58 < 4);
  uStack_58 = (uint)uStack_58._1_3_ << 8;
  do {
    bVar36 = (byte)uStack_58 + 1;
    uStack_58 = CONCAT31(uStack_58._1_3_,bVar36);
  } while (bVar36 < 8);
  uVar39 = uVar39 ^ uVar40 ^ 0xccff22;
  uStack_5c = auStack_50[0] ^ uStack_48 ^ 0xccff22;
  if ((int)uStack_5c < (int)param_2) {
    pbVar28 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100744,uStack_5c,uStack_5c,uStack_44);
    pbVar29 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100764);
    do {
      uStack_40 = 0x9a;
      uStack_3c = 0;
      puStack_38 = &LAB_49abac16;
      uStack_30 = 0xccff6f;
      bVar36 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bVar36) =
             (char)uStack_40 + (char)puStack_38 ^
             (byte)(uStack_30 >> (((int)(char)bVar36 & 0x1fU) << 3));
        bVar36 = bVar36 + 1;
      } while (bVar36 < 4);
      bVar36 = 0;
      do {
        bVar36 = bVar36 + 1;
        uStack_30 = uStack_48 + 0xacacac ^
                    (uint)(0xc1ceb9f9 < uStack_3c &&
                          (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                    (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
      } while (bVar36 < 8);
      bVar36 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bVar36) =
             *(byte *)((int)auStack_50 + (int)(char)bVar36) ^ (char)uStack_40 + (char)puStack_38;
        bVar36 = bVar36 + 1;
      } while (bVar36 < 4);
      bStack_51 = 0;
      do {
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 8);
      uStack_58 = auStack_50[0] ^ uStack_48 ^ 0xccff22;
      uVar40 = uVar39 ^ *(byte *)(param_1 + uStack_5c);
      if (DAT_711f6c2f == '\0') {
        uStack_40 = 0xa1;
        uStack_3c = 0;
        puStack_38 = &LAB_49abac16;
        uStack_34 = 0x26d5d038;
        bStack_51 = 0;
        do {
          *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
               (byte)(0xccff9b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xb7;
          bStack_51 = bStack_51 + 1;
        } while (bStack_51 < 4);
        uStack_30 = 0xccff9b;
        bStack_51 = 0;
        do {
          bStack_51 = bStack_51 + 1;
          uStack_30 = (uStack_30 | 0xccabe6) >> 2 ^ 0xacacf2;
        } while (bStack_51 < 8);
        bStack_51 = 0;
        do {
          *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
               *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xb7;
          bStack_51 = bStack_51 + 1;
        } while (bStack_51 < 4);
        bStack_51 = 0;
        do {
          bStack_51 = bStack_51 + 1;
        } while (bStack_51 < 8);
        uVar38 = *(undefined4 *)(&DAT_71201e30 + ((auStack_50[0] ^ 0xccff64) & uVar40) * 4);
        pcVar30 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_70100774,&DAT_71201e30,0x46,0);
        if (*pcVar30 == '\0') {
          puVar31 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70100764);
          *puVar31 = 0x1e7ff9a;
          GFDIUClbc_QcPNgD_wH(&LAB_718731a8,puVar31,&DAT_70b0e000);
          puVar32 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100774);
          *puVar32 = 1;
        }
        pbVar34 = pbVar29;
        if (pbVar29[3] != 0) {
          *pbVar29 = *pbVar29 ^ 0xbf;
          pbVar29[1] = pbVar29[1] ^ 0x87;
          bVar36 = pbVar29[2] ^ 0xe7;
          goto LAB_71850f48;
        }
      }
      else {
        uStack_40 = 0x9e;
        uStack_3c = 0;
        puStack_38 = &LAB_49abac16;
        uStack_34 = 0x26d5d038;
        bStack_51 = 0;
        do {
          *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
               (byte)(0xccff95 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xb4;
          bStack_51 = bStack_51 + 1;
        } while (bStack_51 < 4);
        uStack_30 = 0xccff95;
        bStack_51 = 0;
        do {
          bStack_51 = bStack_51 + 1;
          uStack_30 = (uStack_30 | 0xccabd5) >> 2 ^ 0xacacf4;
        } while (bStack_51 < 8);
        bStack_51 = 0;
        do {
          *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
               *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xb4;
          bStack_51 = bStack_51 + 1;
        } while (bStack_51 < 4);
        bStack_51 = 0;
        uVar33 = 0x9e;
        uVar37 = 0;
        do {
          iVar26 = (int)(char)bStack_51;
          bVar41 = iVar26 + 0xccaaffU < uVar33;
          bStack_51 = bStack_51 + 1;
          uVar33 = uVar33 ^ (iVar26 + 0xccaaffU) - uVar33 ^ 0x48;
          uVar37 = uVar37 ^ -(uVar37 + bVar41);
        } while (bStack_51 < 8);
        uVar38 = *(undefined4 *)(&DAT_71202230 + ((auStack_50[0] ^ 0xccff6a) & uVar40) * 4);
        pcVar30 = (char *)XcxSszXLPjQrEGhecEv_(&DAT_70100754,&DAT_71202230,0x48,uVar37);
        if (*pcVar30 == '\0') {
          puVar31 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70100744);
          *puVar31 = 0x1531fc2;
          GFDIUClbc_QcPNgD_wH(&LAB_71873180,puVar31,&DAT_70b0e000);
          puVar32 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100754);
          *puVar32 = 1;
        }
        pbVar34 = pbVar28;
        if (pbVar28[3] != 0) {
          *pbVar28 = *pbVar28 ^ 0xe7;
          pbVar28[1] = pbVar28[1] ^ 0x67;
          bVar36 = pbVar28[2] ^ 0x53;
LAB_71850f48:
          pbVar34[3] = 0;
          pbVar34[2] = bVar36;
        }
      }
      imp_sscanf(uVar38,pbVar34,&uStack_58);
      uStack_48 = 0x40;
      uStack_44 = 0;
      uStack_40 = 0xa8;
      uStack_3c = 0;
      puStack_38 = &LAB_49abac16;
      uStack_34 = 0x26d5d038;
      bStack_51 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
             (byte)(0xccff6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xbe;
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 4);
      uStack_30 = 0xccff6a;
      bStack_51 = 0;
      do {
        bStack_51 = bStack_51 + 1;
        uStack_30 = (uStack_30 | 0xccabe7) >> 2 ^ 0xacacec;
      } while (bStack_51 < 8);
      bStack_51 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
             *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xbe;
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 4);
      bStack_51 = 0;
      do {
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 8);
      uStack_5c = uStack_5c + 1;
      uVar39 = uStack_58 ^ (int)uVar39 >> ((auStack_50[0] ^ 0xccff62) & 0xff);
    } while (uStack_5c != param_2);
  }
  uStack_30 = 0xff330082;
  uStack_58 = uStack_58 & 0xffffff00;
  do {
    *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
         (char)uStack_40 + (char)puStack_38 ^
         (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
    bVar36 = (byte)uStack_58 + 1;
    uStack_58 = CONCAT31(uStack_58._1_3_,bVar36);
  } while (bVar36 < 4);
  uStack_58._0_1_ = 0;
  do {
    uStack_58._0_1_ = (byte)uStack_58 + 1;
    uStack_30 = uStack_48 + 0xacacac ^
                (uint)(0xc1ceb9f9 < uStack_3c &&
                      (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
  } while ((byte)uStack_58 < 8);
  uStack_58._0_1_ = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
         *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
         (char)uStack_40 + (char)puStack_38;
    uVar37 = uStack_48;
    uVar40 = auStack_50[0];
    uStack_58._0_1_ = (byte)uStack_58 + 1;
  } while ((byte)uStack_58 < 4);
  uStack_58._0_1_ = 0;
  uVar33 = uStack_40;
  uVar35 = uStack_3c;
  do {
    iVar26 = (int)(char)(byte)uStack_58;
    bVar41 = iVar26 + 0xccaaffU < uVar33;
    uStack_58._0_1_ = (byte)uStack_58 + 1;
    uVar33 = uVar33 ^ (iVar26 + 0xccaaffU) - uVar33 ^ uStack_48;
    uVar35 = uVar35 ^ -(uVar35 + bVar41) ^ uStack_44;
  } while ((byte)uStack_58 < 8);
  iVar26 = (**(code **)(DAT_71201e2c + 0x10))(*(code **)(DAT_71201e2c + 0x10),uVar35);
  if ((iVar26 == 0) && (iVar26 = (**(code **)(DAT_71201e2c + 0x1c))(), iVar26 == 0)) {
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff74;
    uStack_40 = 0xb6;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar35 = uStack_48;
      uVar33 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff8b;
    uStack_40 = 0xb7;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar13 = uStack_48;
      uVar1 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff7c;
    uStack_40 = 0xb8;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar14 = uStack_48;
      uVar2 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff8b;
    uStack_40 = 0xb9;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar15 = uStack_48;
      uVar3 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff7c;
    uStack_40 = 0xba;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar16 = uStack_48;
      uVar4 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff74;
    uStack_40 = 0xbb;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar17 = uStack_48;
      uVar5 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff8b;
    uStack_40 = 0xbc;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar18 = uStack_48;
      uVar6 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff7c;
    uStack_40 = 0xbd;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar19 = uStack_48;
      uVar7 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff8b;
    uStack_40 = 0xbe;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar20 = uStack_48;
      uVar8 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff6c;
    uStack_40 = 0xbf;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar21 = uStack_48;
      uVar9 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff8b;
    uStack_40 = 0xc0;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar22 = uStack_48;
      uVar10 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_48 = 0x56;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_30 = 0xccff64;
    uStack_40 = 0xc1;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar23 = uStack_48;
      uVar11 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_48 = 0x56;
    uStack_30 = 0xccff6c;
    uStack_40 = 0xc2;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar24 = uStack_48;
      uVar12 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_3c = 0;
    uStack_48 = 0x56;
    uStack_30 = 0xccff8b;
    puStack_38 = &LAB_49abac16;
    uStack_40 = 0xc3;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uVar40 = uVar39 ^ uVar40 ^ uVar37 ^ 0xccff22;
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar25 = uStack_48;
      uVar37 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_3c = 0;
    uStack_30 = 0xccff6c;
    uStack_34 = 0x26d5d038;
    uStack_48 = 0x56;
    uStack_44 = 0;
    puStack_38 = &LAB_49abac16;
    uStack_40 = 0xc4;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    uVar27 = uStack_40;
    uVar39 = uStack_3c;
    do {
      iVar26 = (int)(char)(byte)uStack_58;
      bVar41 = iVar26 + 0xccaaffU < uVar27;
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uVar27 = uVar27 ^ (iVar26 + 0xccaaffU) - uVar27 ^ uStack_48;
      uVar39 = uVar39 ^ -(uVar39 + bVar41) ^ uStack_44;
    } while ((byte)uStack_58 < 8);
    uVar40 = (uVar1 ^ uVar13 ^ 0xccff22) & (int)uVar40 >> ((uVar33 ^ uVar35 ^ 0xccff22) & 0xff) |
             ((uVar3 ^ uVar15 ^ 0xccff22) & (int)uVar40 >> ((uVar2 ^ uVar14 ^ 0xccff22) & 0xff)) <<
             ((uVar4 ^ uVar16 ^ 0xccff22) & 0xff) |
             ((uVar10 ^ uVar22 ^ 0xccff22) &
             (uVar9 ^ uVar21 ^ 0xccff22) +
             ((uVar8 ^ uVar20 ^ 0xccff22) & (int)uVar40 >> ((uVar7 ^ uVar19 ^ 0xccff22) & 0xff) ^
             (uVar6 ^ uVar18 ^ 0xccff22) & (int)uVar40 >> ((uVar5 ^ uVar17 ^ 0xccff22) & 0xff))) <<
             ((uVar11 ^ uVar23 ^ 0xccff22) & 0xff) |
             ((uVar37 ^ uVar25 ^ 0xccff22) & (int)uVar40 >> ((uVar12 ^ uVar24 ^ 0xccff22) & 0xff))
             << ((auStack_50[0] ^ uStack_48 ^ 0xff22) & 0xff);
  }
  else {
    uVar39 = (**(code **)(DAT_71201e2c + 0xc))();
    uStack_3c = 0;
    uStack_48 = 0x5b;
    uStack_30 = 0xccff71;
    puStack_38 = &LAB_49abac16;
    uStack_40 = 0xb1;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uVar37 = uStack_48;
      uVar40 = auStack_50[0];
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uStack_34 = 0x26d5d038;
    uStack_48 = 0x5b;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_30 = 0xccf3b5;
    puStack_38 = &LAB_49abac16;
    uStack_40 = 0xb2;
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           (char)uStack_40 + (char)puStack_38 ^
           (byte)(uStack_30 >> (((int)(char)(byte)uStack_58 & 0x1fU) << 3));
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
      uStack_30 = uStack_48 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_3c &&
                        (uint)(uStack_40 < 0xa46ec51) <= 0xc1ceb9fa - uStack_3c) ^
                  (uStack_30 | uStack_40 + 0xccaaff ^ uStack_48) >> 2;
    } while ((byte)uStack_58 < 8);
    uStack_58._0_1_ = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) =
           *(byte *)((int)auStack_50 + (int)(char)(byte)uStack_58) ^
           (char)uStack_40 + (char)puStack_38;
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 4);
    uStack_58._0_1_ = 0;
    do {
      uStack_58._0_1_ = (byte)uStack_58 + 1;
    } while ((byte)uStack_58 < 8);
    uVar40 = auStack_50[0] ^ uStack_48 ^ 0xccff22 | uVar39 >> ((uVar40 ^ uVar37 ^ 0xff22) & 0xff);
    uVar39 = uStack_44;
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(uVar40,iStack_28,_ext___stack_chk_guard,uVar39);
}


// =========================================================================
// Function: FUN_71865910
// Entry: 0x71865910 | Size: 16708 bytes
// =========================================================================

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff7c */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x718672e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71865910(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r3;
  byte *pbVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  byte *pbStack_100;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  byte abStack_f4 [8];
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 uStack_ad;
  int iStack_ac;
  int iStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  byte bStack_91;
  uint auStack_90 [6];
  undefined1 *puStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint auStack_6c [2];
  undefined4 uStack_64;
  byte abStack_60 [8];
  undefined4 uStack_58;
  byte abStack_54 [8];
  undefined4 uStack_4c;
  byte abStack_48 [8];
  undefined4 uStack_40;
  byte abStack_3c [8];
  undefined4 uStack_34;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  DataMemoryBarrier(0xb);
  if (((DAT_71202634 & 1) != 0) || (iVar6 = cuKsjVZRyspaVsDnqLy(&DAT_71202634), iVar6 == 0))
  goto LAB_71865950;
  auStack_90[2] = 0;
  auStack_90[1] = 0;
  auStack_90[0] = 0;
  imp___system_property_foreach(&LAB_718779ec,auStack_90);
  uVar4 = auStack_90[1];
  uVar3 = auStack_90[0];
  uStack_98 = auStack_90[2];
  uStack_a0 = auStack_90[0];
  uStack_9c = auStack_90[1];
  iVar6 = FUN_71873c70(&iStack_bc);
  if (*(char *)(iVar6 + 0x13) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar11 & 7) * 8;
      uVar10 = iVar9 - 0x20;
      bVar2 = (byte)(0x57f97d9b >> iVar9) | (byte)(0x71a36f0b << ((uVar11 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0x71a36f0b >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar11) = *(byte *)(iVar6 + uVar11) ^ bVar2;
      bVar17 = uVar13 == 0;
      bVar1 = (0x11 < uVar11) <= uVar13;
      uVar13 = uVar13 + (0xfffffffe < uVar11);
      uVar11 = uVar11 + 1;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x13) = 0;
  }
  FUN_71315100(auStack_90);
  iVar6 = FUN_71873e94(&pbStack_c8);
  if (*(char *)(iVar6 + 0x17) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      uVar10 = iVar9 - 0x20;
      bVar2 = (byte)(0x57f97d9b >> iVar9) | (byte)(0x71a36f0b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0x71a36f0b >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x15 < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x17) = 0;
  }
  FUN_71315100(auStack_90 + 3);
  iVar6 = FUN_718740b8(&uStack_d8);
  if (*(char *)(iVar6 + 0x19) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      bVar2 = (byte)(0x4341d76d >> iVar9) | (byte)(0x7f7301d9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      uVar10 = iVar9 - 0x20;
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0x7f7301d9 >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x17 < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x19) = 0;
  }
  FUN_71315100(&puStack_78);
  iVar6 = FUN_718742dc(&uStack_e8);
  if (*(char *)(iVar6 + 0x19) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      uVar10 = iVar9 - 0x20;
      bVar2 = (byte)(0x4341d76d >> iVar9) | (byte)(0x7f7301d9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0x7f7301d9 >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x17 < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x19) = 0;
  }
  FUN_71315100(auStack_6c);
  iVar6 = FUN_71874500(abStack_f4);
  if (*(char *)(iVar6 + 0x1d) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      bVar2 = (byte)(0xfff94399 >> iVar9) | (byte)(-0x580eac67 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar10 = iVar9 - 0x20;
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0xa7f15399 >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x1b < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x1d) = 0;
  }
  FUN_71315100(abStack_60);
  iVar6 = FUN_71874724(&bStack_91);
  if (*(char *)(iVar6 + 0x18) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      uVar10 = iVar9 - 0x20;
      bVar2 = (byte)(0xfff94399 >> iVar9) | (byte)(-0x580eac67 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0xa7f15399 >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x16 < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x18) = 0;
  }
  FUN_71315100(abStack_54);
  pbVar7 = (byte *)FUN_71874948(&uStack_ad);
  if (pbVar7[0xf] != 0) {
    *pbVar7 = *pbVar7 ^ 0x31;
    pbVar7[1] = pbVar7[1] ^ 199;
    pbVar7[2] = pbVar7[2] ^ 0x9b;
    pbVar7[3] = pbVar7[3] ^ 0x93;
    pbVar7[0xf] = 0;
    pbVar7[4] = pbVar7[4] ^ 0xfd;
    pbVar7[5] = pbVar7[5] ^ 0x31;
    pbVar7[6] = pbVar7[6] ^ 0xa1;
    pbVar7[7] = pbVar7[7] ^ 0x4f;
    pbVar7[8] = pbVar7[8] ^ 0x31;
    pbVar7[9] = pbVar7[9] ^ 199;
    pbVar7[10] = pbVar7[10] ^ 0x9b;
    pbVar7[0xb] = pbVar7[0xb] ^ 0x93;
    pbVar7[0xc] = pbVar7[0xc] ^ 0xfd;
    pbVar7[0xd] = pbVar7[0xd] ^ 0x31;
    pbVar7[0xe] = pbVar7[0xe] ^ 0xa1;
  }
  FUN_71315100(abStack_48);
  FUN_71874b4c(&iStack_ac,auStack_90,7);
  if ((abStack_48[0] & 1) != 0) {
    qNQrlu(uStack_40);
  }
  if ((abStack_54[0] & 1) != 0) {
    qNQrlu(uStack_4c);
  }
  if ((abStack_60[0] & 1) != 0) {
    qNQrlu(uStack_58);
  }
  if ((auStack_6c[0] & 1) != 0) {
    qNQrlu(uStack_64);
  }
  if (((byte)puStack_78 & 1) != 0) {
    qNQrlu(uStack_70);
  }
  if ((auStack_90[3] & 1) != 0) {
    qNQrlu(auStack_90[5]);
  }
  if ((auStack_90[0] & 1) != 0) {
    qNQrlu(auStack_90[2]);
  }
  iVar6 = FUN_71874c64(&pbStack_c8);
  if (*(char *)(iVar6 + 0x13) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      bVar2 = (byte)(0xe343e76f >> iVar9) | (byte)(0x3377231b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
      uVar10 = iVar9 - 0x20;
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0x3377231b >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x11 < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x13) = 0;
  }
  FUN_71315100(auStack_90);
  iVar6 = FUN_71874e88(&uStack_d8);
  if (*(char *)(iVar6 + 0x18) != '\0') {
    uVar13 = 0;
    uVar11 = 0;
    do {
      iVar9 = (uVar13 & 7) * 8;
      bVar2 = (byte)(0x8bedc9d9 >> iVar9) | (byte)(-0x7ea282a3 << ((uVar13 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar10 = iVar9 - 0x20;
      if (-1 < (int)uVar10) {
        bVar2 = (byte)(0x815d7d5d >> (uVar10 & 0xff));
      }
      *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar2;
      bVar16 = 0xfffffffe < uVar13;
      bVar17 = uVar11 == 0;
      bVar1 = (0x16 < uVar13) <= uVar11;
      uVar13 = uVar13 + 1;
      uVar11 = uVar11 + bVar16;
    } while (bVar17 && bVar1);
    *(undefined1 *)(iVar6 + 0x18) = 0;
  }
  FUN_71315100(auStack_90 + 3);
  FUN_71874b4c(&iStack_bc,auStack_90,2);
  if ((auStack_90[3] & 1) != 0) {
    qNQrlu(auStack_90[5]);
  }
  iVar6 = iStack_bc;
  iVar9 = iStack_b8;
  if ((auStack_90[0] & 1) != 0) {
    qNQrlu(auStack_90[2]);
    iVar6 = iStack_bc;
    iVar9 = iStack_b8;
  }
  for (; uVar3 != uVar4; uVar3 = uVar3 + 0x18) {
    iStack_bc = iVar6;
    iStack_b8 = iVar9;
    if (iVar6 != iVar9) {
      uVar13 = 0x96;
LAB_71866000:
      iVar8 = FUN_718750ac(uVar3 + 0xc,iVar6,0);
      if (iVar8 == -1) goto code_r0x71866018;
      auStack_90[2] = 0x6cc;
      auStack_90[3] = 0;
      auStack_90[4] = 0x602;
      auStack_90[5] = 0;
      puStack_78 = &LAB_49abac16;
      uStack_74 = 0x26d5d038;
      uStack_70 = uVar13 ^ 0xccf9ee;
      pbStack_c8 = (byte *)((uint)pbStack_c8 & 0xffffff00);
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)(uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
        bVar2 = (byte)pbStack_c8 + 1;
        pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
      } while (bVar2 < 4);
      pbStack_c8._0_1_ = 0;
      do {
        pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)pbStack_c8 < 8);
      pbStack_c8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
             (char)auStack_90[4] + (char)puStack_78;
        pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
      } while ((byte)pbStack_c8 < 4);
      pbStack_c8 = (byte *)((uint)pbStack_c8._1_3_ << 8);
      do {
        bVar2 = (byte)pbStack_c8 + 1;
        pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
      } while (bVar2 < 8);
      bVar2 = (byte)auStack_90[0] ^ (byte)auStack_90[2];
      auStack_90[5] = auStack_90[0];
      goto LAB_71867634;
    }
LAB_71865fcc:
    iVar6 = iStack_bc;
    iVar9 = iStack_b8;
  }
  uStack_74 = 0x26d5d038;
  auStack_90[2] = 0x6c6;
  auStack_90[3] = 0;
  puStack_78 = &LAB_49abac16;
  auStack_90[5] = 0;
  uStack_70 = 0xccf9e4;
  auStack_90[4] = 0x609;
  pbStack_c8 = (byte *)((uint)pbStack_c8 & 0xffffff00);
  do {
    *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
         (char)auStack_90[4] + (char)puStack_78 ^
         (byte)(uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
    bVar2 = (byte)pbStack_c8 + 1;
    pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
  } while (bVar2 < 4);
  pbStack_c8._0_1_ = 0;
  do {
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
    uStack_70 = auStack_90[2] + 0xacacac ^
                (uint)(0xc1ceb9f9 < auStack_90[5] &&
                      (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
  } while ((byte)pbStack_c8 < 8);
  pbStack_c8._0_1_ = 0;
  do {
    *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
         *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
         (char)auStack_90[4] + (char)puStack_78;
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
  } while ((byte)pbStack_c8 < 4);
  pbStack_c8 = (byte *)((uint)pbStack_c8._1_3_ << 8);
  do {
    bVar2 = (byte)pbStack_c8 + 1;
    pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
  } while (bVar2 < 8);
  pbStack_100 = (byte *)(auStack_90[0] ^ auStack_90[2] ^ 0xccff22);
  if (pbStack_100 < (uint)((iStack_a8 - iStack_ac >> 2) * -0x55555555)) {
LAB_71866418:
    iVar6 = iStack_ac;
    imp___aeabi_memclr8(auStack_90,0x5c);
    pbVar12 = (byte *)(iVar6 + (int)pbStack_100 * 0xc);
    pbVar7 = *(byte **)(pbVar12 + 8);
    if ((*pbVar12 & 1) == 0) {
      pbVar7 = pbVar12 + 1;
    }
    iVar6 = imp___system_property_get(pbVar7,auStack_90);
    if (iVar6 == 0) {
      uStack_c0 = 0;
      pbStack_c4 = (byte *)0x0;
      pbStack_c8 = (byte *)0x0;
    }
    else {
      FUN_71873a60(&pbStack_c8,auStack_90,iVar6);
    }
    pbVar7 = (byte *)FUN_718751bc(&uStack_e8);
    if (pbVar7[4] != 0) {
      pbVar7[4] = 0;
      *pbVar7 = *pbVar7 ^ 0x23;
      pbVar7[1] = pbVar7[1] ^ 0x25;
      pbVar7[2] = pbVar7[2] ^ 0xd3;
      pbVar7[3] = pbVar7[3] ^ 0x5b;
    }
    uVar3 = FUN_714bb604(&pbStack_c8,pbVar7,0);
    auStack_90[2] = 0x6c7;
    auStack_90[3] = 0;
    auStack_90[4] = 0x60b;
    auStack_90[5] = 0;
    uStack_70 = 0xff33061a;
    puStack_78 = &LAB_49abac16;
    uStack_74 = 0x26d5d038;
    auStack_6c[0] = 0;
    uStack_d8 = uStack_d8 & 0xffffff00;
    do {
      uVar4 = (uint)(char)(byte)uStack_d8;
      bVar2 = (byte)(uStack_70 >> ((uVar4 & 0x1f) << 3)) |
              (byte)(auStack_6c[0] << (uVar4 * -8 + 0x20 & 0xff));
      uVar4 = uVar4 * 8 - 0x20;
      if (-1 < (int)uVar4) {
        bVar2 = (byte)(auStack_6c[0] >> (uVar4 & 0xff));
      }
      *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
           bVar2 ^ (char)auStack_90[4] + (char)puStack_78;
      bVar2 = (byte)uStack_d8 + 1;
      uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
    } while (bVar2 < 8);
    uStack_d8._0_1_ = 0;
    do {
      auStack_6c[0] = auStack_6c[0] | auStack_90[5] + (0xff335500 < auStack_90[4]) ^ auStack_90[3];
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      uStack_70 = auStack_90[2] + 0xacacac ^
                  (uint)(0xc1ceb9f9 < auStack_90[5] &&
                        (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                  ((uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2 |
                  auStack_6c[0] << 0x1e);
      auStack_6c[0] = auStack_90[3] + (uint)(0xff535353 < auStack_90[2]) ^ auStack_6c[0] >> 2;
    } while ((byte)uStack_d8 < 0x10);
    uStack_d8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
           *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
           (char)auStack_90[4] + (char)puStack_78;
      uVar10 = auStack_90[3];
      uVar11 = auStack_90[2];
      uVar13 = auStack_90[1];
      uVar4 = auStack_90[0];
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
    } while ((byte)uStack_d8 < 8);
    uStack_d8 = (uint)uStack_d8._1_3_ << 8;
    uVar5 = auStack_90[4];
    do {
      iVar6 = (int)(char)(byte)uStack_d8;
      bVar2 = (byte)uStack_d8 + 1;
      uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
      bVar17 = iVar6 + 0xccaaffU < uVar5;
      uVar5 = uVar5 ^ (iVar6 + 0xccaaffU) - uVar5 ^ auStack_90[2];
      auStack_90[5] = auStack_90[5] ^ -(auStack_90[5] + bVar17) ^ auStack_90[3];
    } while (bVar2 < 0x10);
    if (((uint)pbStack_c8 & 1) != 0) {
      qNQrlu(uStack_c0,auStack_90[5]);
    }
    if ((uVar4 ^ uVar3 ^ uVar11) == 0xccff22 && uVar13 == uVar10) goto code_r0x7186673c;
    uStack_74 = 0x26d5d038;
    auStack_90[2] = 0x6c4;
    auStack_90[3] = 0;
    uStack_70 = (int)pbStack_100 + 1U ^ 0xccf9e6;
    puStack_78 = &LAB_49abac16;
    auStack_90[5] = 0;
    auStack_90[4] = 0x60d;
    pbStack_c8 = (byte *)((uint)pbStack_c8 & 0xffffff00);
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
           (char)auStack_90[4] + (char)puStack_78 ^
           (byte)(uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
      bVar2 = (byte)pbStack_c8 + 1;
      pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
    } while (bVar2 < 4);
    pbStack_c8._0_1_ = 0;
    do {
      pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
      uStack_70 = auStack_90[2] + 0xacacac ^
                  (uint)(0xc1ceb9f9 < auStack_90[5] &&
                        (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                  (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
    } while ((byte)pbStack_c8 < 8);
    pbStack_c8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
           *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
           (char)auStack_90[4] + (char)puStack_78;
      pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
    } while ((byte)pbStack_c8 < 4);
    pbStack_c8 = (byte *)((uint)pbStack_c8._1_3_ << 8);
    uVar3 = auStack_90[4];
    do {
      iVar6 = (int)(char)(byte)pbStack_c8;
      bVar2 = (byte)pbStack_c8 + 1;
      pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
      bVar17 = iVar6 + 0xccaaffU < uVar3;
      uVar3 = uVar3 ^ (iVar6 + 0xccaaffU) - uVar3 ^ auStack_90[2];
      auStack_90[5] = auStack_90[5] ^ -(auStack_90[5] + bVar17) ^ auStack_90[3];
    } while (bVar2 < 8);
    goto LAB_7186762c;
  }
LAB_7186676c:
  pbVar7 = (byte *)FUN_7187539c();
  if (pbVar7[0xe] != 0) {
    *pbVar7 = *pbVar7 ^ 0xd9;
    pbVar7[1] = pbVar7[1] ^ 0x4d;
    pbVar7[2] = pbVar7[2] ^ 0x4b;
    pbVar7[3] = pbVar7[3] ^ 0xdb;
    pbVar7[0xe] = 0;
    pbVar7[4] = pbVar7[4] ^ 0x87;
    pbVar7[5] = pbVar7[5] ^ 0x7d;
    pbVar7[6] = pbVar7[6] ^ 0x5b;
    pbVar7[7] = pbVar7[7] ^ 0x25;
    pbVar7[8] = pbVar7[8] ^ 0xd9;
    pbVar7[9] = pbVar7[9] ^ 0x4d;
    pbVar7[10] = pbVar7[10] ^ 0x4b;
    pbVar7[0xb] = pbVar7[0xb] ^ 0xdb;
    pbVar7[0xc] = pbVar7[0xc] ^ 0x87;
    pbVar7[0xd] = pbVar7[0xd] ^ 0x7d;
  }
  uStack_74 = 0x26d5d038;
  auStack_90[2] = 0x6c0;
  auStack_90[3] = 0;
  puStack_78 = &LAB_49abac16;
  auStack_90[5] = 0;
  uStack_70 = 0xccf9e6;
  auStack_90[4] = 0x612;
  pbStack_c8 = (byte *)((uint)pbStack_c8 & 0xffffff00);
  do {
    *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
         (char)auStack_90[4] + (char)puStack_78 ^
         (byte)(uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
    bVar2 = (byte)pbStack_c8 + 1;
    pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
  } while (bVar2 < 4);
  pbStack_c8._0_1_ = 0;
  do {
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
    uStack_70 = auStack_90[2] + 0xacacac ^
                (uint)(0xc1ceb9f9 < auStack_90[5] &&
                      (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
  } while ((byte)pbStack_c8 < 8);
  pbStack_c8._0_1_ = 0;
  do {
    *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
         *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
         (char)auStack_90[4] + (char)puStack_78;
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
  } while ((byte)pbStack_c8 < 4);
  pbStack_c8._0_1_ = 0;
  do {
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
  } while ((byte)pbStack_c8 < 8);
  uVar3 = imp_access(pbVar7,auStack_90[0] ^ auStack_90[2] ^ 0xccff22,0xccff22,auStack_90[3]);
  puStack_78 = &LAB_49abac16;
  uStack_74 = 0x26d5d038;
  auStack_90[5] = 0;
  auStack_90[2] = 0x6c0;
  auStack_90[3] = 0;
  uStack_70 = 0xff33061d;
  auStack_90[4] = 0x613;
  pbStack_c8._0_1_ = 0;
  do {
    *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
         (char)auStack_90[4] + (char)puStack_78 ^
         (byte)((int)uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
  } while ((byte)pbStack_c8 < 4);
  pbStack_c8._0_1_ = 0;
  do {
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
    uStack_70 = auStack_90[2] + 0xacacac ^
                (uint)(0xc1ceb9f9 < auStack_90[5] &&
                      (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                (int)(uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
  } while ((byte)pbStack_c8 < 8);
  pbStack_c8._0_1_ = 0;
  do {
    *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
         *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
         (char)auStack_90[4] + (char)puStack_78;
    pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
  } while ((byte)pbStack_c8 < 4);
  pbStack_c8 = (byte *)((uint)pbStack_c8._1_3_ << 8);
  do {
    bVar2 = (byte)pbStack_c8 + 1;
    pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
  } while (bVar2 < 8);
  if ((auStack_90[0] ^ uVar3 ^ auStack_90[2]) == 0xccff22) {
    iVar6 = FUN_7187559c(&uStack_ad,0xccff22,auStack_90[2],auStack_90[3]);
    if (*(char *)(iVar6 + 0x15) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0x93eb658b >> iVar9) | (byte)(0x51f56dfb << ((uVar3 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x51f56dfb >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x13 < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x15) = 0;
    }
    FUN_71315100(&uStack_d8);
    imp___aeabi_memclr8(auStack_90,0x5c);
    uVar3 = uStack_d0;
    if ((uStack_d8 & 1) == 0) {
      uVar3 = (uint)&uStack_d8 | 1;
    }
    iVar6 = imp___system_property_get(uVar3,auStack_90);
    if (iVar6 == 0) {
      uVar3 = 0;
      uStack_c0 = 0;
      pbStack_c4 = (byte *)0x0;
      pbStack_c8 = (byte *)0x0;
    }
    else {
      FUN_71873a60(&pbStack_c8,auStack_90,iVar6);
      uVar3 = (uint)pbStack_c8 & 0xff;
    }
    uVar4 = uVar3 & 1;
    pbVar7 = pbStack_c4;
    if (uVar4 == 0) {
      pbVar7 = (byte *)(uVar3 >> 1);
    }
    if (pbVar7 == (byte *)0x0) {
      bVar17 = false;
    }
    else {
      iVar6 = FUN_718757c0(&uStack_f5);
      if (*(char *)(iVar6 + 0x15) != '\0') {
        uVar3 = 0;
        uVar4 = 0;
        do {
          iVar9 = (uVar3 & 7) * 8;
          uVar13 = iVar9 - 0x20;
          bVar2 = (byte)(0x93eb658b >> iVar9) |
                  (byte)(0x51f56dfb << ((uVar3 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar13) {
            bVar2 = (byte)(0x51f56dfb >> (uVar13 & 0xff));
          }
          *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
          bVar16 = 0xfffffffe < uVar3;
          bVar17 = uVar4 == 0;
          bVar1 = (0x13 < uVar3) <= uVar4;
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 + bVar16;
        } while (bVar17 && bVar1);
        *(undefined1 *)(iVar6 + 0x15) = 0;
      }
      FUN_71315100(abStack_f4);
      imp___aeabi_memclr8(auStack_90,0x5c);
      uVar3 = uStack_ec;
      if ((abStack_f4[0] & 1) == 0) {
        uVar3 = (uint)abStack_f4 | 1;
      }
      iVar6 = imp___system_property_get(uVar3,auStack_90);
      if (iVar6 == 0) {
        uVar3 = 0;
        uStack_e0 = 0;
        uStack_e4 = 0;
        uStack_e8 = 0;
      }
      else {
        FUN_71873a60(&uStack_e8,auStack_90,iVar6);
        uVar3 = uStack_e8 & 0xff;
      }
      uVar4 = uStack_e0;
      uVar13 = uStack_e0;
      if ((uVar3 & 1) == 0) {
        uVar13 = (uint)&uStack_e8 | 1;
      }
      uVar13 = imp_atoi(uVar13);
      auStack_90[2] = 0x6db;
      auStack_90[3] = 0;
      uStack_74 = 0x26d5d038;
      puStack_78 = &LAB_49abac16;
      auStack_90[5] = 0;
      auStack_90[4] = 0x61c;
      bStack_91 = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)bStack_91) =
             (byte)(0xccf9e3 >> (((int)(char)bStack_91 & 0x1fU) << 3)) ^ 0x32;
        bStack_91 = bStack_91 + 1;
      } while (bStack_91 < 4);
      uStack_70 = 0xccf9e3;
      bStack_91 = 0;
      do {
        bStack_91 = bStack_91 + 1;
        uStack_70 = (uStack_70 | 0xccb7c0) >> 2 ^ 0xacb387;
      } while (bStack_91 < 8);
      bStack_91 = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)bStack_91) =
             *(byte *)((int)auStack_90 + (int)(char)bStack_91) ^ 0x32;
        bStack_91 = bStack_91 + 1;
      } while (bStack_91 < 4);
      bStack_91 = 0;
      do {
        bStack_91 = bStack_91 + 1;
      } while (bStack_91 < 8);
      bVar17 = (auStack_90[0] ^ 0xccf9f9) <= uVar13;
      if ((uVar3 & 1) != 0) {
        qNQrlu(uVar4,uVar13,0x6db,0);
      }
      if ((abStack_f4[0] & 1) != 0) {
        qNQrlu(uStack_ec);
      }
      uVar4 = (uint)pbStack_c8 & 1;
    }
    if (uVar4 != 0) {
      qNQrlu(uStack_c0);
    }
    if ((uStack_d8 & 1) != 0) {
      qNQrlu(uStack_d0);
    }
    if (bVar17) {
      uStack_74 = 0x26d5d038;
      auStack_90[2] = 0x6d8;
      auStack_90[3] = 0;
      auStack_90[5] = 0;
      uStack_70 = (iStack_a8 - iStack_ac >> 2) * -0x55555555 + 3U ^ 0xccf9fa;
      puStack_78 = &LAB_49abac16;
      auStack_90[4] = 0x61e;
      pbStack_c8 = (byte *)((uint)pbStack_c8 & 0xffffff00);
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)(uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
        bVar2 = (byte)pbStack_c8 + 1;
        pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
      } while (bVar2 < 4);
      pbStack_c8._0_1_ = 0;
      do {
        pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)pbStack_c8 < 8);
      pbStack_c8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
             (char)auStack_90[4] + (char)puStack_78;
        pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
      } while ((byte)pbStack_c8 < 4);
      pbStack_c8 = (byte *)((uint)pbStack_c8._1_3_ << 8);
      uVar3 = auStack_90[4];
      do {
        iVar6 = (int)(char)(byte)pbStack_c8;
        bVar2 = (byte)pbStack_c8 + 1;
        pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
        bVar17 = iVar6 + 0xccaaffU < uVar3;
        uVar3 = uVar3 ^ (iVar6 + 0xccaaffU) - uVar3 ^ auStack_90[2];
        auStack_90[5] = auStack_90[5] ^ -(auStack_90[5] + bVar17) ^ auStack_90[3];
      } while (bVar2 < 8);
      goto LAB_7186762c;
    }
    iVar6 = FUN_718759e4(&uStack_d8);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0x230de30d >> iVar9) | (byte)(0x6f775f05 << ((uVar3 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x6f775f05 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x1a < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
    }
    FUN_71315100(auStack_90);
    iVar6 = FUN_71875c08(&uStack_e8);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0x230de30d >> iVar9) | (byte)(0x6f775f05 << ((uVar3 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x6f775f05 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x1c < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x1e) = 0;
    }
    FUN_71315100(auStack_90 + 3);
    iVar6 = FUN_71875e2c(abStack_f4);
    if (*(char *)(iVar6 + 0x1a) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0xe1ed3dcd >> iVar9) |
                (byte)(-0x50bcae25 << ((uVar3 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0xaf4351db >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x18 < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x1a) = 0;
    }
    FUN_71315100(&puStack_78);
    iVar6 = FUN_71876050(&bStack_91);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0xe1ed3dcd >> iVar9) |
                (byte)(-0x50bcae25 << ((uVar3 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0xaf4351db >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x1a < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
    }
    FUN_71315100(auStack_6c);
    iVar6 = FUN_71876274(&uStack_ad);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0xcf61a11d >> iVar9) | (byte)(0x1dfc549 << ((uVar3 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x1dfc549 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x1b < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x1d) = 0;
    }
    FUN_71315100(abStack_60);
    iVar6 = FUN_71876498(&uStack_f5);
    if (*(char *)(iVar6 + 0x1f) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0xcf61a11d >> iVar9) | (byte)(0x1dfc549 << ((uVar3 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x1dfc549 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x1d < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x1f) = 0;
    }
    FUN_71315100(abStack_54);
    iVar6 = FUN_718766bc(&uStack_f6);
    if (*(char *)(iVar6 + 0x15) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        uVar13 = iVar9 - 0x20;
        bVar2 = (byte)(0x21ef05f9 >> iVar9) | (byte)(0x4d7f1327 << ((uVar3 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x4d7f1327 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x13 < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x15) = 0;
    }
    FUN_71315100(abStack_48);
    iVar6 = FUN_718768e0(&uStack_f7);
    if (*(char *)(iVar6 + 0x17) != '\0') {
      uVar3 = 0;
      uVar4 = 0;
      do {
        iVar9 = (uVar3 & 7) * 8;
        bVar2 = (byte)(0x21ef05f9 >> iVar9) | (byte)(0x4d7f1327 << ((uVar3 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar13 = iVar9 - 0x20;
        if (-1 < (int)uVar13) {
          bVar2 = (byte)(0x4d7f1327 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
        bVar16 = 0xfffffffe < uVar3;
        bVar17 = uVar4 == 0;
        bVar1 = (0x15 < uVar3) <= uVar4;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + bVar16;
      } while (bVar17 && bVar1);
      *(undefined1 *)(iVar6 + 0x17) = 0;
    }
    FUN_71315100(abStack_3c);
    FUN_71874b4c(&pbStack_c8,auStack_90,8);
    if ((abStack_3c[0] & 1) != 0) {
      qNQrlu(uStack_34);
    }
    if ((abStack_48[0] & 1) != 0) {
      qNQrlu(uStack_40);
    }
    if ((abStack_54[0] & 1) != 0) {
      qNQrlu(uStack_4c);
    }
    if ((abStack_60[0] & 1) != 0) {
      qNQrlu(uStack_58);
    }
    if ((auStack_6c[0] & 1) != 0) {
      qNQrlu(uStack_64);
    }
    if (((uint)puStack_78 & 1) != 0) {
      qNQrlu(uStack_70);
    }
    if ((auStack_90[3] & 1) != 0) {
      qNQrlu(auStack_90[5]);
    }
    if ((auStack_90[0] & 1) != 0) {
      qNQrlu(auStack_90[2]);
    }
    pbVar7 = pbStack_c4;
    pbStack_100 = pbStack_c8;
    if (pbStack_c8 != pbStack_c4) {
LAB_71867b50:
      pbVar12 = *(byte **)(pbStack_100 + 8);
      auStack_90[2] = 0x6ec;
      auStack_90[3] = 0;
      auStack_90[4] = 0x62b;
      auStack_90[5] = 0;
      puStack_78 = &LAB_49abac16;
      uStack_74 = 0x26d5d038;
      uStack_70 = 0xccf9ca;
      uStack_d8 = uStack_d8 & 0xffffff00;
      if ((*pbStack_100 & 1) == 0) {
        pbVar12 = pbStack_100 + 1;
      }
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)(uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
        bVar2 = (byte)uStack_d8 + 1;
        uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
      } while (bVar2 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)uStack_d8 < 8);
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
             (char)auStack_90[4] + (char)puStack_78;
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 8);
      uVar3 = imp_access(pbVar12,auStack_90[0] ^ auStack_90[2] ^ 0xccff22,0xccff22,auStack_90[3]);
      auStack_90[2] = 0x6ec;
      auStack_90[3] = 0;
      auStack_90[4] = 0x62c;
      auStack_90[5] = 0;
      puStack_78 = &LAB_49abac16;
      uStack_74 = 0x26d5d038;
      uStack_70 = 0xff330631;
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)((int)uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (int)(uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)uStack_d8 < 8);
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
             (char)auStack_90[4] + (char)puStack_78;
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8 = (uint)uStack_d8._1_3_ << 8;
      do {
        bVar2 = (byte)uStack_d8 + 1;
        uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
      } while (bVar2 < 8);
      if ((auStack_90[0] ^ uVar3 ^ auStack_90[2]) == 0xccff22) goto code_r0x71867f14;
      auStack_90[2] = 0x6ea;
      auStack_90[3] = 0;
      auStack_90[4] = 0x62f;
      auStack_90[5] = 0;
      puStack_78 = &LAB_49abac16;
      uStack_74 = 0x26d5d038;
      uStack_70 = (iStack_a8 - iStack_ac >> 2) * -0x55555555 + 4U ^ 0xccf9c8;
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)(uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)uStack_d8 < 8);
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
             (char)auStack_90[4] + (char)puStack_78;
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8 = (uint)uStack_d8._1_3_ << 8;
      do {
        bVar2 = (byte)uStack_d8 + 1;
        uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
      } while (bVar2 < 8);
      bVar2 = (byte)auStack_90[0] ^ (byte)auStack_90[2];
      auStack_90[5] = auStack_90[0];
      goto LAB_71868f6c;
    }
LAB_71867f2c:
    pbVar7 = (byte *)FUN_71876b04(&uStack_e8);
    if (pbVar7[0xf] != 0) {
      *pbVar7 = *pbVar7 ^ 0xa1;
      pbVar7[1] = pbVar7[1] ^ 0x5b;
      pbVar7[2] = pbVar7[2] ^ 0xc3;
      pbVar7[3] = pbVar7[3] ^ 0xd7;
      pbVar7[0xf] = 0;
      pbVar7[4] = ~pbVar7[4];
      pbVar7[5] = pbVar7[5] ^ 5;
      pbVar7[6] = pbVar7[6] ^ 0xad;
      pbVar7[7] = pbVar7[7] ^ 0x35;
      pbVar7[8] = pbVar7[8] ^ 0xa1;
      pbVar7[9] = pbVar7[9] ^ 0x5b;
      pbVar7[10] = pbVar7[10] ^ 0xc3;
      pbVar7[0xb] = pbVar7[0xb] ^ 0xd7;
      pbVar7[0xc] = ~pbVar7[0xc];
      pbVar7[0xd] = pbVar7[0xd] ^ 5;
      pbVar7[0xe] = pbVar7[0xe] ^ 0xad;
    }
    uStack_74 = 0x26d5d038;
    auStack_90[2] = 0x6e2;
    auStack_90[3] = 0;
    puStack_78 = &LAB_49abac16;
    auStack_90[5] = 0;
    uStack_70 = 0xccf9c4;
    auStack_90[4] = 0x638;
    uStack_d8 = uStack_d8 & 0xffffff00;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
           (char)auStack_90[4] + (char)puStack_78 ^
           (byte)(uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
      bVar2 = (byte)uStack_d8 + 1;
      uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
    } while (bVar2 < 4);
    uStack_d8._0_1_ = 0;
    do {
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      uStack_70 = auStack_90[2] + 0xacacac ^
                  (uint)(0xc1ceb9f9 < auStack_90[5] &&
                        (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                  (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
    } while ((byte)uStack_d8 < 8);
    uStack_d8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
           *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
           (char)auStack_90[4] + (char)puStack_78;
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
    } while ((byte)uStack_d8 < 4);
    uStack_d8._0_1_ = 0;
    do {
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
    } while ((byte)uStack_d8 < 8);
    uVar3 = imp_access(pbVar7,auStack_90[0] ^ auStack_90[2] ^ 0xccff22,0xccff22,auStack_90[3]);
    uStack_74 = 0x26d5d038;
    puStack_78 = &LAB_49abac16;
    auStack_90[5] = 0;
    auStack_90[2] = 0x6e2;
    auStack_90[3] = 0;
    uStack_70 = 0xff33063f;
    auStack_90[4] = 0x639;
    uStack_d8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
           (char)auStack_90[4] + (char)puStack_78 ^
           (byte)((int)uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
    } while ((byte)uStack_d8 < 4);
    uStack_d8._0_1_ = 0;
    do {
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      uStack_70 = auStack_90[2] + 0xacacac ^
                  (uint)(0xc1ceb9f9 < auStack_90[5] &&
                        (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                  (int)(uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
    } while ((byte)uStack_d8 < 8);
    uStack_d8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
           *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
           (char)auStack_90[4] + (char)puStack_78;
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
    } while ((byte)uStack_d8 < 4);
    uStack_d8._0_1_ = 0;
    do {
      uStack_d8._0_1_ = (byte)uStack_d8 + 1;
    } while ((byte)uStack_d8 < 8);
    if ((auStack_90[0] ^ uVar3 ^ auStack_90[2]) == 0xccff22) {
      pbVar7 = (byte *)FUN_71876d08(&uStack_e8,0xccff22,auStack_90[2],auStack_90[3]);
      if (pbVar7[0xd] != 0) {
        *pbVar7 = *pbVar7 ^ 0x19;
        pbVar7[1] = pbVar7[1] ^ 0x35;
        pbVar7[2] = pbVar7[2] ^ 0xc3;
        pbVar7[3] = pbVar7[3] ^ 0xcd;
        pbVar7[0xd] = 0;
        pbVar7[4] = pbVar7[4] ^ 9;
        pbVar7[5] = pbVar7[5] ^ 0x61;
        pbVar7[6] = pbVar7[6] ^ 0x5b;
        pbVar7[7] = pbVar7[7] ^ 0xa3;
        pbVar7[8] = pbVar7[8] ^ 0x19;
        pbVar7[9] = pbVar7[9] ^ 0x35;
        pbVar7[10] = pbVar7[10] ^ 0xc3;
        pbVar7[0xb] = pbVar7[0xb] ^ 0xcd;
        pbVar7[0xc] = pbVar7[0xc] ^ 9;
      }
      uStack_74 = 0x26d5d038;
      auStack_90[2] = 0x6ff;
      auStack_90[3] = 0;
      puStack_78 = &LAB_49abac16;
      auStack_90[5] = 0;
      uStack_70 = 0xccf9d9;
      auStack_90[4] = 0x640;
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)(uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)uStack_d8 < 8);
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
             (char)auStack_90[4] + (char)puStack_78;
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 8);
      uVar3 = imp_access(pbVar7,auStack_90[0] ^ auStack_90[2] ^ 0xccff22,0xccff22,auStack_90[3]);
      uStack_74 = 0x26d5d038;
      puStack_78 = &LAB_49abac16;
      auStack_90[5] = 0;
      auStack_90[2] = 0x6ff;
      auStack_90[3] = 0;
      uStack_70 = 0xff330622;
      auStack_90[4] = 0x641;
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)((int)uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (int)(uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)uStack_d8 < 8);
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
             (char)auStack_90[4] + (char)puStack_78;
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8 = (uint)uStack_d8._1_3_ << 8;
      do {
        bVar2 = (byte)uStack_d8 + 1;
        uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
      } while (bVar2 < 8);
      if ((auStack_90[0] ^ uVar3 ^ auStack_90[2]) != 0xccff22) {
        uStack_74 = 0x26d5d038;
        auStack_90[2] = 0x6fd;
        auStack_90[3] = 0;
        auStack_90[5] = 0;
        uStack_70 = (iStack_a8 - iStack_ac >> 2) * -0x55555555 + 7U ^ 0xccf9df;
        puStack_78 = &LAB_49abac16;
        auStack_90[4] = 0x644;
        uStack_d8._0_1_ = 0;
        do {
          *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
               (char)auStack_90[4] + (char)puStack_78 ^
               (byte)(uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
          uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        } while ((byte)uStack_d8 < 4);
        uStack_d8._0_1_ = 0;
        do {
          uStack_d8._0_1_ = (byte)uStack_d8 + 1;
          uStack_70 = auStack_90[2] + 0xacacac ^
                      (uint)(0xc1ceb9f9 < auStack_90[5] &&
                            (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                      (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
        } while ((byte)uStack_d8 < 8);
        uStack_d8._0_1_ = 0;
        do {
          *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
               *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
               (char)auStack_90[4] + (char)puStack_78;
          uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        } while ((byte)uStack_d8 < 4);
        uStack_d8 = (uint)uStack_d8._1_3_ << 8;
        uVar3 = auStack_90[4];
        do {
          iVar6 = (int)(char)(byte)uStack_d8;
          bVar2 = (byte)uStack_d8 + 1;
          uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
          bVar17 = iVar6 + 0xccaaffU < uVar3;
          uVar3 = uVar3 ^ (iVar6 + 0xccaaffU) - uVar3 ^ auStack_90[2];
          auStack_90[5] = auStack_90[5] ^ -(auStack_90[5] + bVar17) ^ auStack_90[3];
        } while (bVar2 < 8);
        goto LAB_71868f64;
      }
      pbVar7 = (byte *)FUN_71876f04(abStack_f4,0xccff22,auStack_90[2],auStack_90[3]);
      if (pbVar7[0x10] != 0) {
        *pbVar7 = *pbVar7 ^ 0xd5;
        pbVar7[1] = pbVar7[1] ^ 0xe9;
        pbVar7[2] = pbVar7[2] ^ 0x77;
        pbVar7[3] = pbVar7[3] ^ 5;
        pbVar7[0x10] = 0;
        pbVar7[4] = pbVar7[4] ^ 0x27;
        pbVar7[5] = pbVar7[5] ^ 0x79;
        pbVar7[6] = pbVar7[6] ^ 0xf1;
        pbVar7[7] = pbVar7[7] ^ 0xd9;
        pbVar7[8] = pbVar7[8] ^ 0xd5;
        pbVar7[9] = pbVar7[9] ^ 0xe9;
        pbVar7[10] = pbVar7[10] ^ 0x77;
        pbVar7[0xb] = pbVar7[0xb] ^ 5;
        pbVar7[0xc] = pbVar7[0xc] ^ 0x27;
        pbVar7[0xd] = pbVar7[0xd] ^ 0x79;
        pbVar7[0xe] = pbVar7[0xe] ^ 0xf1;
        pbVar7[0xf] = pbVar7[0xf] ^ 0xd9;
      }
      FUN_71315100(&uStack_e8);
      imp___aeabi_memclr8(auStack_90,0x5c);
      uVar3 = uStack_e0;
      if ((uStack_e8 & 1) == 0) {
        uVar3 = (uint)&uStack_e8 | 1;
      }
      iVar6 = imp___system_property_get(uVar3,auStack_90);
      if (iVar6 == 0) {
        uStack_d0 = 0;
        uStack_d4 = 0;
        uStack_d8 = 0;
      }
      else {
        FUN_71873a60(&uStack_d8,auStack_90,iVar6);
      }
      pbVar7 = (byte *)FUN_71877108(auStack_90);
      if (pbVar7[0x10] != 0) {
        *pbVar7 = *pbVar7 ^ 0xd5;
        pbVar7[1] = pbVar7[1] ^ 0xe9;
        pbVar7[2] = pbVar7[2] ^ 0x77;
        pbVar7[3] = pbVar7[3] ^ 5;
        pbVar7[0x10] = 0;
        pbVar7[4] = pbVar7[4] ^ 0x27;
        pbVar7[5] = pbVar7[5] ^ 0x79;
        pbVar7[6] = pbVar7[6] ^ 0xf1;
        pbVar7[7] = pbVar7[7] ^ 0xd9;
        pbVar7[8] = pbVar7[8] ^ 0xd5;
        pbVar7[9] = pbVar7[9] ^ 0xe9;
        pbVar7[10] = pbVar7[10] ^ 0x77;
        pbVar7[0xb] = pbVar7[0xb] ^ 5;
        pbVar7[0xc] = pbVar7[0xc] ^ 0x27;
        pbVar7[0xd] = pbVar7[0xd] ^ 0x79;
        pbVar7[0xe] = pbVar7[0xe] ^ 0xf1;
        pbVar7[0xf] = pbVar7[0xf] ^ 0xd9;
      }
      iVar6 = FUN_7152e8b0(&uStack_d8);
      if ((uStack_d8 & 1) != 0) {
        qNQrlu(uStack_d0);
      }
      if ((uStack_e8 & 1) != 0) {
        qNQrlu(uStack_e0);
      }
      if (iVar6 != 0) {
LAB_718693e8:
        software_interrupt(0);
        imp___aeabi_memcpy(0,&DAT_70086658,0x3c,0x22);
        pbVar7 = (byte *)0x0;
        do {
          *pbVar7 = *pbVar7 ^ 0x50;
          pbVar12 = pbVar7 + 1;
          uVar18 = (byte *)0x3b < pbVar12;
          uVar14 = (int)(pbVar7 + -0x3b) < 0;
          uVar15 = pbVar12 == (byte *)0x3c;
          pbVar7 = pbVar12;
        } while (!(bool)uVar15);
        uRam00000000 = 0xe3b0003c;
        _LAB_00000004 = 0xe3b01065;
        FUN_719344e4(0,0x3c,0);
        (*(code *)0x0)();
        coprocessor_movefromRt(3,7,6,in_cr13,in_cr0);
        coprocessor_function2(4,0xf,4,in_cr13,in_cr13,in_cr4);
        if ((bool)uVar14) {
          uVar18 = true;
          uVar15 = (extraout_r3 | 0xd0000001) == 0;
        }
        if ((bool)uVar18 && !(bool)uVar15) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar7 = (byte *)FUN_7187730c(&uStack_e8);
      if (pbVar7[10] != 0) {
        *pbVar7 = *pbVar7 ^ 0xeb;
        pbVar7[1] = pbVar7[1] ^ 0xbf;
        pbVar7[2] = pbVar7[2] ^ 0x6d;
        pbVar7[3] = pbVar7[3] ^ 0xb7;
        pbVar7[10] = 0;
        pbVar7[4] = pbVar7[4] ^ 0x77;
        pbVar7[5] = pbVar7[5] ^ 0xa9;
        pbVar7[6] = pbVar7[6] ^ 0xa5;
        pbVar7[7] = pbVar7[7] ^ 0xd5;
        pbVar7[8] = pbVar7[8] ^ 0xeb;
        pbVar7[9] = pbVar7[9] ^ 0xbf;
      }
      FUN_71315100(auStack_90);
      iVar6 = FUN_71877500(abStack_f4);
      if (*(char *)(iVar6 + 0x17) != '\0') {
        uVar3 = 0;
        uVar4 = 0;
        do {
          iVar9 = (uVar3 & 7) * 8;
          bVar2 = (byte)(0xb76dbfeb >> iVar9) |
                  (byte)(-0x2a5a5689 << ((uVar3 & 7) * -8 + 0x20 & 0xff));
          uVar13 = iVar9 - 0x20;
          if (-1 < (int)uVar13) {
            bVar2 = (byte)(0xd5a5a977 >> (uVar13 & 0xff));
          }
          *(byte *)(iVar6 + uVar3) = *(byte *)(iVar6 + uVar3) ^ bVar2;
          bVar16 = 0xfffffffe < uVar3;
          bVar17 = uVar4 == 0;
          bVar1 = (0x15 < uVar3) <= uVar4;
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 + bVar16;
        } while (bVar17 && bVar1);
        *(undefined1 *)(iVar6 + 0x17) = 0;
      }
      FUN_71315100(auStack_90 + 3);
      FUN_71874b4c(&uStack_d8,auStack_90,2);
      if ((auStack_90[3] & 1) != 0) {
        qNQrlu(auStack_90[5]);
      }
      if ((auStack_90[0] & 1) != 0) {
        qNQrlu(auStack_90[2]);
      }
      pbVar7 = (byte *)FUN_71877724(auStack_90);
      if (pbVar7[0xc] != 0) {
        *pbVar7 = *pbVar7 ^ 5;
        pbVar7[1] = pbVar7[1] ^ 0x5f;
        pbVar7[2] = pbVar7[2] ^ 0xb5;
        pbVar7[3] = pbVar7[3] ^ 0x77;
        pbVar7[0xc] = 0;
        pbVar7[4] = pbVar7[4] ^ 0x35;
        pbVar7[5] = pbVar7[5] ^ 0x6f;
        pbVar7[6] = pbVar7[6] ^ 0x49;
        pbVar7[7] = pbVar7[7] ^ 0xf9;
        pbVar7[8] = pbVar7[8] ^ 5;
        pbVar7[9] = pbVar7[9] ^ 0x5f;
        pbVar7[10] = pbVar7[10] ^ 0xb5;
        pbVar7[0xb] = pbVar7[0xb] ^ 0x77;
      }
      iVar6 = imp_opendir();
      if (iVar6 != 0) {
        iVar9 = imp_readdir();
        uVar3 = uStack_d4;
        while (uStack_d4 = uVar3, iVar9 != 0) {
          uVar4 = uStack_d8;
          if (*(char *)(iVar9 + 0x13) != '.') {
            for (; uVar4 != uVar3; uVar4 = uVar4 + 0xc) {
              iVar8 = FUN_7187791c((char *)(iVar9 + 0x13),uVar4);
              if (iVar8 != 0) {
                pbVar7 = (byte *)0x0;
                software_interrupt(0);
                imp___aeabi_memcpy(0,&DAT_70086658,0x3c,0x22);
                do {
                  *pbVar7 = *pbVar7 ^ 0x50;
                  pbVar7 = pbVar7 + 1;
                } while (pbVar7 != (byte *)0x3c);
                uRam00000000 = 0xe3b0003c;
                _LAB_00000004 = 0xe3b01066;
                FUN_719344e4(0,0x3c,0);
                (*(code *)0x0)();
                goto LAB_718693e8;
              }
            }
          }
          iVar9 = imp_readdir(iVar6);
          uVar3 = uStack_d4;
        }
        imp_closedir(iVar6);
      }
      FUN_71312c98(&uStack_d8);
      bVar2 = 0;
      auStack_90[5] = extraout_r1_00;
    }
    else {
      uStack_74 = 0x26d5d038;
      auStack_90[2] = 0x6e0;
      auStack_90[3] = 0;
      auStack_90[5] = 0;
      uStack_70 = (iStack_a8 - iStack_ac >> 2) * -0x55555555 + 6U ^ 0xccf9c2;
      puStack_78 = &LAB_49abac16;
      auStack_90[4] = 0x63c;
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             (char)auStack_90[4] + (char)puStack_78 ^
             (byte)(uStack_70 >> (((int)(char)(byte)uStack_d8 & 0x1fU) << 3));
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8._0_1_ = 0;
      do {
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
        uStack_70 = auStack_90[2] + 0xacacac ^
                    (uint)(0xc1ceb9f9 < auStack_90[5] &&
                          (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                    (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
      } while ((byte)uStack_d8 < 8);
      uStack_d8._0_1_ = 0;
      do {
        *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) =
             *(byte *)((int)auStack_90 + (int)(char)(byte)uStack_d8) ^
             (char)auStack_90[4] + (char)puStack_78;
        uStack_d8._0_1_ = (byte)uStack_d8 + 1;
      } while ((byte)uStack_d8 < 4);
      uStack_d8 = (uint)uStack_d8._1_3_ << 8;
      uVar3 = auStack_90[4];
      do {
        iVar6 = (int)(char)(byte)uStack_d8;
        bVar2 = (byte)uStack_d8 + 1;
        uStack_d8 = CONCAT31(uStack_d8._1_3_,bVar2);
        bVar17 = iVar6 + 0xccaaffU < uVar3;
        uVar3 = uVar3 ^ (iVar6 + 0xccaaffU) - uVar3 ^ auStack_90[2];
        auStack_90[5] = auStack_90[5] ^ -(auStack_90[5] + bVar17) ^ auStack_90[3];
      } while (bVar2 < 8);
LAB_71868f64:
      bVar2 = (byte)auStack_90[0] ^ (byte)auStack_90[2];
LAB_71868f6c:
      bVar2 = bVar2 ^ 0x22;
    }
    FUN_71312c98(&pbStack_c8,auStack_90[5]);
    auStack_90[5] = extraout_r1;
  }
  else {
    uStack_74 = 0x26d5d038;
    auStack_90[2] = 0x6de;
    auStack_90[3] = 0;
    auStack_90[5] = 0;
    uStack_70 = (iStack_a8 - iStack_ac >> 2) * -0x55555555 + 2U ^ 0xccf9fc;
    puStack_78 = &LAB_49abac16;
    auStack_90[4] = 0x616;
    pbStack_c8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
           (char)auStack_90[4] + (char)puStack_78 ^
           (byte)(uStack_70 >> (((int)(char)(byte)pbStack_c8 & 0x1fU) << 3));
      pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
    } while ((byte)pbStack_c8 < 4);
    pbStack_c8._0_1_ = 0;
    do {
      pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
      uStack_70 = auStack_90[2] + 0xacacac ^
                  (uint)(0xc1ceb9f9 < auStack_90[5] &&
                        (uint)(auStack_90[4] < 0xa46ec51) <= 0xc1ceb9fa - auStack_90[5]) ^
                  (uStack_70 | auStack_90[4] + 0xccaaff ^ auStack_90[2]) >> 2;
    } while ((byte)pbStack_c8 < 8);
    pbStack_c8._0_1_ = 0;
    do {
      *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) =
           *(byte *)((int)auStack_90 + (int)(char)(byte)pbStack_c8) ^
           (char)auStack_90[4] + (char)puStack_78;
      pbStack_c8._0_1_ = (byte)pbStack_c8 + 1;
    } while ((byte)pbStack_c8 < 4);
    pbStack_c8 = (byte *)((uint)pbStack_c8._1_3_ << 8);
    uVar3 = auStack_90[4];
    do {
      iVar6 = (int)(char)(byte)pbStack_c8;
      bVar2 = (byte)pbStack_c8 + 1;
      pbStack_c8 = (byte *)CONCAT31(pbStack_c8._1_3_,bVar2);
      bVar17 = iVar6 + 0xccaaffU < uVar3;
      uVar3 = uVar3 ^ (iVar6 + 0xccaaffU) - uVar3 ^ auStack_90[2];
      auStack_90[5] = auStack_90[5] ^ -(auStack_90[5] + bVar17) ^ auStack_90[3];
    } while (bVar2 < 8);
LAB_7186762c:
    bVar2 = (byte)auStack_90[0] ^ (byte)auStack_90[2];
LAB_71867634:
    bVar2 = bVar2 ^ 0x22;
  }
  FUN_71312c98(&iStack_bc,auStack_90[5]);
  FUN_71312c98(&iStack_ac);
  FUN_712f1e64(&uStack_a0);
  DAT_71202630 = bVar2;
  SixizuLbAnqfgRApsCY(&DAT_71202634);
LAB_71865950:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(DAT_71202630);
  }
  return;
code_r0x71866018:
  iVar6 = iVar6 + 0xc;
  uVar13 = uVar13 + 1;
  if (iVar6 == iVar9) goto LAB_71865fcc;
  goto LAB_71866000;
code_r0x7186673c:
  pbStack_100 = (byte *)((int)pbStack_100 + 1);
  if ((uint)((iStack_a8 - iStack_ac >> 2) * -0x55555555) <= pbStack_100) goto LAB_7186676c;
  goto LAB_71866418;
code_r0x71867f14:
  pbStack_100 = pbStack_100 + 0xc;
  if (pbStack_100 == pbVar7) goto LAB_71867f2c;
  goto LAB_71867b50;
}


// =========================================================================
// Function: FUN_7186a29c
// Entry: 0x7186a29c | Size: 20 bytes
// =========================================================================

uint FUN_7186a29c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = imp_rand();
  uVar2 = imp_rand();
  uVar3 = imp_rand();
  iVar4 = imp_rand();
  return (uVar3 & 0xff) << 0x10 | iVar4 << 0x18 | (uVar2 & 0xff) << 8 | uVar1 & 0xff;
}


// =========================================================================
// Function: FUN_7186b6b0
// Entry: 0x7186b6b0 | Size: 64 bytes
// =========================================================================

void FUN_7186b6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x100,0,0x100,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7186b718
// Entry: 0x7186b718 | Size: 80 bytes
// =========================================================================

void FUN_7186b718(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,param_2,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_71873a60
// Entry: 0x71873a60 | Size: 156 bytes
// =========================================================================

int * FUN_71873a60(int *param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (param_3 < 0xb) {
    puVar1 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71873ac4;
  }
  else {
    puVar1 = (undefined1 *)thunk_MwhHq((param_3 | 7) + 1);
    *param_1 = (param_3 | 7) + 2;
    param_1[1] = param_3;
    param_1[2] = (int)puVar1;
  }
  imp___aeabi_memmove(puVar1,param_2,param_3);
LAB_71873ac4:
  puVar1[param_3] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_71873c70
// Entry: 0x71873c70 | Size: 316 bytes
// =========================================================================

void FUN_71873c70(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100e34);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100e24);
    *(undefined1 *)(iVar2 + 0x13) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086460,0x13);
    GFDIUClbc_QcPNgD_wH(&LAB_71878058,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100e34);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100e24);
  return;
}


// =========================================================================
// Function: FUN_71873e94
// Entry: 0x71873e94 | Size: 316 bytes
// =========================================================================

void FUN_71873e94(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100e54);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100e44);
    *(undefined1 *)(iVar2 + 0x17) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086478,0x17);
    GFDIUClbc_QcPNgD_wH(&LAB_7187808c,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100e54);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100e44);
  return;
}


// =========================================================================
// Function: FUN_718740b8
// Entry: 0x718740b8 | Size: 316 bytes
// =========================================================================

void FUN_718740b8(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100e74);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100e64);
    *(undefined1 *)(iVar2 + 0x19) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086490,0x19);
    GFDIUClbc_QcPNgD_wH(&LAB_718780c4,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100e74);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100e64);
  return;
}


// =========================================================================
// Function: FUN_718742dc
// Entry: 0x718742dc | Size: 316 bytes
// =========================================================================

void FUN_718742dc(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100e94);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100e84);
    *(undefined1 *)(iVar2 + 0x19) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_700864b0,0x19);
    GFDIUClbc_QcPNgD_wH(&LAB_718780c4,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100e94);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100e84);
  return;
}


// =========================================================================
// Function: FUN_71874500
// Entry: 0x71874500 | Size: 316 bytes
// =========================================================================

void FUN_71874500(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100eb4);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100ea4);
    *(undefined1 *)(iVar2 + 0x1d) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_700864d0,0x1d);
    GFDIUClbc_QcPNgD_wH(&LAB_71878100,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100eb4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100ea4);
  return;
}


// =========================================================================
// Function: FUN_71874724
// Entry: 0x71874724 | Size: 316 bytes
// =========================================================================

void FUN_71874724(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100ed4);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100ec4);
    *(undefined1 *)(iVar2 + 0x18) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_700864f0,0x18);
    GFDIUClbc_QcPNgD_wH(&LAB_71878140,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100ed4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100ec4);
  return;
}


// =========================================================================
// Function: FUN_71874948
// Entry: 0x71874948 | Size: 316 bytes
// =========================================================================

void FUN_71874948(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100ef4);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70100ee4);
    *puVar2 = 0xf1b5a843;
    *(undefined1 *)((int)puVar2 + 0xf) = 1;
    puVar2[1] = 0x26cf5e94;
    puVar2[2] = 0xe1fae952;
    *(undefined4 *)((int)puVar2 + 0xb) = 0xa1599ee1;
    GFDIUClbc_QcPNgD_wH(&LAB_71878178,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100ef4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100ee4);
  return;
}


// =========================================================================
// Function: FUN_71874b4c
// Entry: 0x71874b4c | Size: 204 bytes
// =========================================================================

undefined4 * FUN_71874b4c(undefined4 *param_1,byte *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x15555555 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6ffc(param_1);
    }
    iVar4 = param_3 * 0xc;
    puVar1 = (undefined4 *)thunk_MwhHq(iVar4);
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_3 * 3;
    do {
      if ((*param_2 & 1) == 0) {
        uVar2 = *(undefined4 *)(param_2 + 4);
        uVar3 = *(undefined4 *)(param_2 + 8);
        *puVar1 = *(undefined4 *)param_2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
      }
      else {
        FUN_712f6d58(puVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
      }
      iVar4 = iVar4 + -0xc;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + 0xc;
    } while (iVar4 != 0);
    param_1[1] = puVar1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71874c64
// Entry: 0x71874c64 | Size: 316 bytes
// =========================================================================

void FUN_71874c64(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100f14);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100f04);
    *(undefined1 *)(iVar2 + 0x13) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086508,0x13);
    GFDIUClbc_QcPNgD_wH(&LAB_718781a8,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f14);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100f04);
  return;
}


// =========================================================================
// Function: FUN_71874e88
// Entry: 0x71874e88 | Size: 316 bytes
// =========================================================================

void FUN_71874e88(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100f34);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100f24);
    *(undefined1 *)(iVar2 + 0x18) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086520,0x18);
    GFDIUClbc_QcPNgD_wH(&LAB_718781dc,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f34);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100f24);
  return;
}


// =========================================================================
// Function: FUN_718750ac
// Entry: 0x718750ac | Size: 216 bytes
// =========================================================================

uint FUN_718750ac(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  
  uVar9 = *(uint *)(param_2 + 4);
  pbVar10 = *(byte **)(param_2 + 8);
  bVar11 = (*param_2 & 1) == 0;
  if (bVar11) {
    pbVar10 = param_2 + 1;
  }
  if (bVar11) {
    uVar9 = (uint)(*param_2 >> 1);
  }
  uVar6 = *(uint *)(param_1 + 4);
  pbVar8 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
    uVar6 = (uint)(*param_1 >> 1);
  }
  uVar2 = 0xffffffff;
  if (param_3 <= uVar6) {
    if (uVar9 == 0) {
      return param_3;
    }
    pbVar3 = pbVar8 + param_3;
    pbVar7 = pbVar8 + uVar6;
    iVar4 = (int)pbVar7 - (int)pbVar3;
    pbVar5 = pbVar7;
    if ((int)uVar9 <= iVar4) {
      bVar1 = *pbVar10;
      do {
        pbVar5 = pbVar7;
        if (((0xfffffffe < iVar4 - uVar9) ||
            (pbVar3 = (byte *)imp_memchr(pbVar3,bVar1,(iVar4 - uVar9) + 1), pbVar3 == (byte *)0x0))
           || (iVar4 = imp_memcmp(pbVar3,pbVar10,uVar9), pbVar5 = pbVar3, iVar4 == 0)) break;
        pbVar3 = pbVar3 + 1;
        iVar4 = (int)pbVar7 - (int)pbVar3;
        pbVar5 = pbVar7;
      } while ((int)uVar9 <= iVar4);
    }
    uVar2 = (int)pbVar5 - (int)pbVar8;
    if (pbVar5 == pbVar7) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_718751bc
// Entry: 0x718751bc | Size: 280 bytes
// =========================================================================

void FUN_718751bc(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100f54);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f44);
    *puVar2 = 0x5be51d5b;
    *(undefined1 *)(puVar2 + 1) = 1;
    GFDIUClbc_QcPNgD_wH(&LAB_71878214,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f54);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100f44);
  return;
}


// =========================================================================
// Function: FUN_7187539c
// Entry: 0x7187539c | Size: 312 bytes
// =========================================================================

void FUN_7187539c(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100f74);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f64);
    *puVar2 = 0xaf2520f6;
    *(undefined1 *)((int)puVar2 + 0xe) = 1;
    puVar2[1] = 0x4b320aa8;
    puVar2[2] = 0xa83c22bd;
    *(undefined2 *)(puVar2 + 3) = 0x7da8;
    GFDIUClbc_QcPNgD_wH(&LAB_71878238,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f74);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100f64);
  return;
}


// =========================================================================
// Function: FUN_7187559c
// Entry: 0x7187559c | Size: 316 bytes
// =========================================================================

void FUN_7187559c(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100f94);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100f84);
    *(undefined1 *)(iVar2 + 0x15) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086538,0x15);
    GFDIUClbc_QcPNgD_wH(&LAB_71878268,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100f94);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100f84);
  return;
}


// =========================================================================
// Function: FUN_718757c0
// Entry: 0x718757c0 | Size: 316 bytes
// =========================================================================

void FUN_718757c0(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100fb4);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100fa4);
    *(undefined1 *)(iVar2 + 0x15) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086550,0x15);
    GFDIUClbc_QcPNgD_wH(&LAB_71878268,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100fb4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100fa4);
  return;
}


// =========================================================================
// Function: FUN_718759e4
// Entry: 0x718759e4 | Size: 316 bytes
// =========================================================================

void FUN_718759e4(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100fd4);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100fc4);
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086568,0x1c);
    GFDIUClbc_QcPNgD_wH(&LAB_718782a0,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100fd4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100fc4);
  return;
}


// =========================================================================
// Function: FUN_71875c08
// Entry: 0x71875c08 | Size: 316 bytes
// =========================================================================

void FUN_71875c08(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70100ff4);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70100fe4);
    *(undefined1 *)(iVar2 + 0x1e) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086588,0x1e);
    GFDIUClbc_QcPNgD_wH(&LAB_718782dc,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70100ff4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70100fe4);
  return;
}


// =========================================================================
// Function: FUN_71875e2c
// Entry: 0x71875e2c | Size: 316 bytes
// =========================================================================

void FUN_71875e2c(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101014);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70101004);
    *(undefined1 *)(iVar2 + 0x1a) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_700865a8,0x1a);
    GFDIUClbc_QcPNgD_wH(&LAB_7187831c,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101014);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101004);
  return;
}


// =========================================================================
// Function: FUN_71876050
// Entry: 0x71876050 | Size: 316 bytes
// =========================================================================

void FUN_71876050(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101034);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70101024);
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_700865c8,0x1c);
    GFDIUClbc_QcPNgD_wH(&LAB_71878358,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101034);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101024);
  return;
}


// =========================================================================
// Function: FUN_71876274
// Entry: 0x71876274 | Size: 316 bytes
// =========================================================================

void FUN_71876274(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101054);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70101044);
    *(undefined1 *)(iVar2 + 0x1d) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_700865e8,0x1d);
    GFDIUClbc_QcPNgD_wH(&LAB_71878394,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101054);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101044);
  return;
}


// =========================================================================
// Function: FUN_71876498
// Entry: 0x71876498 | Size: 316 bytes
// =========================================================================

void FUN_71876498(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101074);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70101064);
    *(undefined1 *)(iVar2 + 0x1f) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086608,0x1f);
    GFDIUClbc_QcPNgD_wH(&LAB_718783d4,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101074);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101064);
  return;
}


// =========================================================================
// Function: FUN_718766bc
// Entry: 0x718766bc | Size: 316 bytes
// =========================================================================

void FUN_718766bc(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101094);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70101084);
    *(undefined1 *)(iVar2 + 0x15) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086628,0x15);
    GFDIUClbc_QcPNgD_wH(&LAB_71878414,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101094);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101084);
  return;
}


// =========================================================================
// Function: FUN_718768e0
// Entry: 0x718768e0 | Size: 316 bytes
// =========================================================================

void FUN_718768e0(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_701010b4);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_701010a4);
    *(undefined1 *)(iVar2 + 0x17) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086640,0x17);
    GFDIUClbc_QcPNgD_wH(&LAB_7187844c,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_701010b4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_701010a4);
  return;
}


// =========================================================================
// Function: FUN_71876b04
// Entry: 0x71876b04 | Size: 316 bytes
// =========================================================================

void FUN_71876b04(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_701010d4);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_701010c4);
    *puVar2 = 0xa3a23f8e;
    *(undefined1 *)((int)puVar2 + 0xf) = 1;
    puVar2[1] = 0x5ac92a9e;
    puVar2[2] = 0xa3ed3ecf;
    *(undefined4 *)((int)puVar2 + 0xb) = 0xad7187a3;
    GFDIUClbc_QcPNgD_wH(&LAB_71878484,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_701010d4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_701010c4);
  return;
}


// =========================================================================
// Function: FUN_71876d08
// Entry: 0x71876d08 | Size: 308 bytes
// =========================================================================

void FUN_71876d08(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_701010f4);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_701010e4);
    *puVar2 = 0xaeb75036;
    *(undefined2 *)(puVar2 + 3) = 0x109;
    puVar2[1] = 0xca350826;
    puVar2[2] = 0xa5b01b6d;
    GFDIUClbc_QcPNgD_wH(&LAB_718784b4,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_701010f4);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_701010e4);
  return;
}


// =========================================================================
// Function: FUN_71876f04
// Entry: 0x71876f04 | Size: 316 bytes
// =========================================================================

void FUN_71876f04(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101114);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70101104);
    *puVar2 = 0x755986a7;
    *(undefined1 *)(puVar2 + 4) = 1;
    puVar2[1] = 0xb89a1a46;
    puVar2[2] = 0x6b598cb2;
    puVar2[3] = 0xd9941446;
    GFDIUClbc_QcPNgD_wH(&LAB_718784e4,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101114);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101104);
  return;
}


// =========================================================================
// Function: FUN_71877108
// Entry: 0x71877108 | Size: 316 bytes
// =========================================================================

void FUN_71877108(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101134);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70101124);
    *puVar2 = 0x2b1a86b6;
    *(undefined1 *)(puVar2 + 4) = 1;
    puVar2[1] = 0xaa9e1451;
    puVar2[2] = 0x6a188efb;
    puVar2[3] = 0xd9941540;
    GFDIUClbc_QcPNgD_wH(&LAB_718784e4,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101134);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101124);
  return;
}


// =========================================================================
// Function: FUN_7187730c
// Entry: 0x7187730c | Size: 300 bytes
// =========================================================================

void FUN_7187730c(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101154);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70101144);
    *puVar2 = 0xd21ed29d;
    *(undefined1 *)((int)puVar2 + 10) = 1;
    puVar2[1] = 0xb6ccdf05;
    *(undefined2 *)(puVar2 + 2) = 0xbf8e;
    GFDIUClbc_QcPNgD_wH(&LAB_71878514,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101154);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101144);
  return;
}


// =========================================================================
// Function: FUN_71877500
// Entry: 0x71877500 | Size: 316 bytes
// =========================================================================

void FUN_71877500(void)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101174);
  if ((*pbVar1 & 1) == 0) {
    iVar2 = XcxSszXLPjQrEGhecEv_(&DAT_70101164);
    *(undefined1 *)(iVar2 + 0x17) = 1;
    imp___aeabi_memcpy(iVar2,&DAT_70086698,0x17);
    GFDIUClbc_QcPNgD_wH(&LAB_71878540,iVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101174);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101164);
  return;
}


// =========================================================================
// Function: FUN_71877724
// Entry: 0x71877724 | Size: 304 bytes
// =========================================================================

void FUN_71877724(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101194);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70101184);
    *puVar2 = 0x4cc2c2a;
    *(undefined1 *)(puVar2 + 3) = 1;
    puVar2[1] = 0xd6240a41;
    puVar2[2] = 0x77c52f64;
    GFDIUClbc_QcPNgD_wH(&LAB_71878578,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101194);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101184);
  return;
}


// =========================================================================
// Function: FUN_7187791c
// Entry: 0x7187791c | Size: 132 bytes
// =========================================================================

bool FUN_7187791c(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = imp_strlen();
  bVar1 = *param_2;
  uVar6 = *(uint *)(param_2 + 4);
  bVar2 = false;
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint)(bVar1 >> 1);
  }
  if (uVar4 == uVar6) {
    if (uVar4 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6b48(param_2);
    }
    pbVar3 = *(byte **)(param_2 + 8);
    if ((bVar1 & 1) == 0) {
      pbVar3 = param_2 + 1;
    }
    iVar5 = imp_memcmp(pbVar3,param_1);
    bVar2 = iVar5 == 0;
  }
  return bVar2;
}


// =========================================================================
// Function: FUN_71877a58
// Entry: 0x71877a58 | Size: 564 bytes
// =========================================================================

void FUN_71877a58(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_70064a63;
  }
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar1 < 0xb) {
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar1 << 1));
    uVar5 = (uint)&uStack_30 | 1;
    if (uVar1 != 0) goto LAB_71877ae0;
  }
  else {
    uVar5 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_30 = (uVar1 | 7) + 2;
    uStack_2c = uVar1;
    uStack_28 = uVar5;
LAB_71877ae0:
    imp___aeabi_memcpy(uVar5,param_2,uVar1);
  }
  puVar4 = &DAT_70064a63;
  if (param_3 != (undefined1 *)0x0) {
    puVar4 = param_3;
  }
  *(undefined1 *)(uVar5 + uVar1) = 0;
  uVar1 = imp_strlen(puVar4);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar1 < 0xb) {
    uVar5 = (uint)&uStack_40 | 1;
    uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_71877b68;
  }
  else {
    uVar5 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_40 = (uVar1 | 7) + 2;
    uStack_3c = uVar1;
    uStack_38 = uVar5;
  }
  imp___aeabi_memcpy(uVar5,puVar4,uVar1);
LAB_71877b68:
  *(undefined1 *)(uVar5 + uVar1) = 0;
  puVar3 = *(uint **)(param_1 + 4);
  if (puVar3 < *(uint **)(param_1 + 8)) {
    *puVar3 = uStack_30;
    puVar3[1] = uStack_2c;
    puVar3[2] = uStack_28;
    uStack_30 = 0;
    puVar3[3] = uStack_40;
    puVar3[4] = uStack_3c;
    puVar3[5] = uStack_38;
    *(uint **)(param_1 + 4) = puVar3 + 6;
    uStack_2c = 0;
    uStack_28 = 0;
  }
  else {
    uVar2 = FUN_71877d6c(param_1,&uStack_30,&uStack_40);
    *(undefined4 *)(param_1 + 4) = uVar2;
    if ((uStack_40 & 1) != 0) {
      qNQrlu(uStack_38);
    }
  }
  if ((uStack_30 & 1) != 0) {
    qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_71877d6c
// Entry: 0x71877d6c | Size: 520 bytes
// =========================================================================

undefined4 * FUN_71877d6c(int *param_1,undefined4 *param_2,undefined4 *param_3)

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
    FUN_71877ff0(param_1);
LAB_71c0b2e4:
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
    if (0xaaaaaaa < uVar8) goto LAB_71c0b2e4;
    iVar2 = thunk_MwhHq(uVar8 * 0x18);
  }
  uVar14 = *param_2;
  uVar15 = param_2[1];
  uVar12 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  uVar9 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
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
        qNQrlu(*(undefined4 *)(pbVar10 + 0x14));
      }
      if ((*pbVar10 & 1) != 0) {
        qNQrlu(*(undefined4 *)(pbVar10 + 8));
      }
      pbVar10 = pbVar10 + 0x18;
    } while (pbVar10 != pbVar11);
    pbVar11 = (byte *)*param_1;
  }
  *param_1 = (int)puVar13;
  param_1[1] = (int)(puVar7 + 6);
  param_1[2] = iVar2 + uVar8 * 0x18;
  if (pbVar11 != (byte *)0x0) {
    qNQrlu(pbVar11);
  }
  return puVar7 + 6;
}


// =========================================================================
// Function: FUN_71877ff0
// Entry: 0x71877ff0 | Size: 44 bytes
// =========================================================================

void FUN_71877ff0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71878630
// Entry: 0x71878630 | Size: 312 bytes
// =========================================================================

void FUN_71878630(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  pbVar1 = (byte *)XcxSszXLPjQrEGhecEv_(&DAT_70101234);
  if ((*pbVar1 & 1) == 0) {
    puVar2 = (undefined4 *)XcxSszXLPjQrEGhecEv_(&DAT_70101224);
    *puVar2 = 0x2c538ec3;
    *(undefined1 *)((int)puVar2 + 0xe) = 1;
    puVar2[1] = 0x59b8a607;
    puVar2[2] = 0x3e1f84ca;
    *(undefined2 *)(puVar2 + 3) = 0xc51e;
    GFDIUClbc_QcPNgD_wH(&LAB_71881720,puVar2,&DAT_70b0e000);
    puVar3 = (undefined1 *)XcxSszXLPjQrEGhecEv_(&DAT_70101234);
    *puVar3 = 1;
  }
  XcxSszXLPjQrEGhecEv_(&DAT_70101224);
  return;
}


