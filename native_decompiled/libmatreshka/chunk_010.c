// =========================================================================
// Function: FUN_7164a1b4
// Entry: 0x7164a1b4 | Size: 100 bytes
// =========================================================================

void FUN_7164a1b4(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = *param_2;
  pbVar2 = param_2;
  while (bVar1 != 0) {
    if (bVar1 < 0x20) {
      *pbVar2 = 0x20;
    }
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  FUN_71649964(param_1,param_2,0,param_1);
  return;
}


// =========================================================================
// Function: FUN_7164a25c
// Entry: 0x7164a25c | Size: 68 bytes
// =========================================================================

void FUN_7164a25c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x300,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_7164a2d4
// Entry: 0x7164a2d4 | Size: 724 bytes
// =========================================================================

void FUN_7164a2d4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  iVar1 = DAT_712017f8;
  if (DAT_71201808 != 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_711e9adc & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711e9adc), iVar3 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c64);
      if (*pcVar4 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c54);
        *(undefined1 *)(puVar6 + 4) = 1;
        *puVar6 = 0x233a64bf;
        puVar6[1] = 0x302ad66;
        puVar6[2] = 0x383a7482;
        puVar6[3] = 0x7706a244;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164b678,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c64);
        *puVar7 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7c54);
      if (pbVar5[0x10] != 0) {
        *pbVar5 = *pbVar5 ^ 0xcf;
        pbVar5[1] = pbVar5[1] ^ 0x11;
        pbVar5[2] = pbVar5[2] ^ 0x49;
        pbVar5[3] = pbVar5[3] ^ 0x4b;
        pbVar5[0x10] = 0;
        pbVar5[4] = pbVar5[4] ^ 0x25;
        pbVar5[5] = pbVar5[5] ^ 0xc5;
        pbVar5[6] = pbVar5[6] ^ 99;
        pbVar5[7] = pbVar5[7] ^ 0x77;
        pbVar5[8] = pbVar5[8] ^ 0xcf;
        pbVar5[9] = pbVar5[9] ^ 0x11;
        pbVar5[10] = pbVar5[10] ^ 0x49;
        pbVar5[0xb] = pbVar5[0xb] ^ 0x4b;
        pbVar5[0xc] = pbVar5[0xc] ^ 0x25;
        pbVar5[0xd] = pbVar5[0xd] ^ 0xc5;
        pbVar5[0xe] = pbVar5[0xe] ^ 99;
        pbVar5[0xf] = pbVar5[0xf] ^ 0x77;
      }
      DAT_711e9ad8 = FUN_71885ba4(pbVar5,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711e9adc);
    }
    uVar8 = DAT_711e9ad8;
    imp___aeabi_memclr4(&iStack_54,0x30);
    uStack_58 = uVar8;
    uVar8 = FUN_713a0424(&uStack_58,param_1 >> 8 | 0xff000000);
    FUN_71524948(uVar8,param_2);
    uVar8 = FUN_713a0424(uVar8,param_3);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar2 = (int *)thunk_MwhHq(0x3c);
    *piVar2 = 0;
    piVar2[1] = 0;
    FUN_713a10f8(piVar2 + 2,uVar8);
    piVar2[1] = iVar1 + 0x38;
    iVar3 = *(int *)(iVar1 + 0x38);
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    *(int **)(iVar1 + 0x38) = piVar2;
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
    if (iStack_54 != 0) {
      iStack_50 = iStack_54;
      thunk_qNQrlu();
    }
  }
  return;
}


// =========================================================================
// Function: XdnGKmcyDNox_WHbWz
// Entry: 0x7164ad98 | Size: 440 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XdnGKmcyDNox_WHbWz(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_54);
  }
  if (uVar2 < 0xb) {
    uVar4 = (uint)&uStack_54 | 1;
    uStack_54 = CONCAT31(uStack_54._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_7164ae24;
  }
  else {
    uVar4 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_54 = (uVar2 | 7) + 2;
    uStack_50 = uVar2;
    uStack_4c = uVar4;
  }
  imp___aeabi_memcpy(uVar4,param_1,uVar2);
LAB_7164ae24:
  *(undefined1 *)(uVar4 + uVar2) = 0;
  FUN_71800d24(&uStack_48,&uStack_54);
  if ((uStack_54 & 1) != 0) {
    thunk_qNQrlu(uStack_4c);
  }
  iVar1 = DAT_712017fc;
  if (DAT_712017fc != 0) {
    if ((uStack_48 & 1) == 0) {
      uStack_60 = uStack_48;
      iStack_5c = iStack_44;
      iStack_58 = iStack_40;
    }
    else {
      FUN_712f6d58(&uStack_60,iStack_40,iStack_44);
    }
    iVar5 = 0x10;
    piStack_28 = (int *)thunk_MwhHq(0x10);
    *piStack_28 = (int)&DAT_70b0ee80;
    piStack_28[1] = uStack_60;
    piStack_28[2] = iStack_5c;
    piStack_28[3] = iStack_58;
    uStack_60 = 0;
    iStack_5c = 0;
    iStack_58 = 0;
    FUN_717ccb10(iVar1,aiStack_38);
    piVar3 = aiStack_38;
    if ((piStack_28 == aiStack_38) || (iVar5 = 0x14, piVar3 = piStack_28, piStack_28 != (int *)0x0))
    {
      (**(code **)(*piVar3 + iVar5))(piVar3);
    }
    if ((uStack_60 & 1) != 0) {
      thunk_qNQrlu(iStack_58);
    }
  }
  if ((uStack_48 & 1) != 0) {
    thunk_qNQrlu(iStack_40);
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: TcumY_GfXqnHLMeEVN_NSCh
// Entry: 0x7164b138 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TcumY_GfXqnHLMeEVN_NSCh(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0eea4;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_7164b1c4;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_7164b1c4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7164b9a4
// Entry: 0x7164b9a4 | Size: 48 bytes
// =========================================================================

void FUN_7164b9a4(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_7164bd00
// Entry: 0x7164bd00 | Size: 4 bytes
// =========================================================================

void FUN_7164bd00(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7164bd1c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_7164bd90
// Entry: 0x7164bd90 | Size: 632 bytes
// =========================================================================

void FUN_7164bd90(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  
  iVar6 = FUN_718d0d4c();
  iVar6 = *(int *)(iVar6 + 0x90);
  if (param_3 == 0) {
    uVar7 = FUN_718ff930();
  }
  else {
    uVar7 = FUN_7191193c();
  }
  *(undefined4 *)(iVar6 + 0x458) = uVar7;
  *(undefined4 *)(iVar6 + 0x45c) = 0x10;
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ccc);
  if (*pcVar8 == '\0') {
    puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cbc);
    *(undefined1 *)((int)puVar13 + 0x16) = 1;
    uVar4 = DAT_700838b8;
    uVar3 = DAT_700838b4;
    uVar12 = DAT_700838b0;
    uVar7 = DAT_700838ac;
    *puVar13 = DAT_700838a8;
    puVar13[1] = uVar7;
    puVar13[2] = uVar12;
    puVar13[3] = uVar3;
    puVar13[4] = uVar4;
    *(undefined2 *)(puVar13 + 5) = DAT_700838bc;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7164d3f4,puVar13,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ccc);
    *puVar14 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cbc);
  if (*(char *)(iVar9 + 0x16) != '\0') {
    uVar10 = 0;
    uVar17 = 0;
    do {
      iVar15 = (uVar10 & 7) * 8;
      bVar5 = (byte)(0x13e1dbf3 >> iVar15) |
              (byte)(-0x2c7a2ab9 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      uVar16 = iVar15 - 0x20;
      if (-1 < (int)uVar16) {
        bVar5 = (byte)(0xd385d547 >> (uVar16 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar5;
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
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_44);
  }
  if (uVar10 < 0xb) {
    uVar17 = (uint)&uStack_44 | 1;
    uStack_44 = CONCAT31(uStack_44._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_7164bed0;
  }
  else {
    uVar17 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_44 = (uVar10 | 7) + 2;
    uStack_40 = uVar10;
    uStack_3c = uVar17;
  }
  imp___aeabi_memmove(uVar17,iVar9,uVar10);
LAB_7164bed0:
  *(undefined1 *)(uVar17 + uVar10) = 0;
  puVar11 = (uint *)thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                              (&uStack_44,param_1);
  uStack_38 = *puVar11;
  uStack_34 = puVar11[1];
  uStack_30 = puVar11[2];
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  uVar10 = uStack_30;
  if ((uStack_38 & 1) == 0) {
    uVar10 = (uint)&uStack_38 | 1;
  }
  FUN_714c5f6c(0,&uStack_28,uVar10,0);
  if ((uStack_38 & 1) != 0) {
    thunk_qNQrlu(uStack_30);
  }
  if ((uStack_44 & 1) != 0) {
    thunk_qNQrlu(uStack_3c);
  }
  uVar7 = FUN_714c8774(uStack_28);
  uVar12 = imp_malloc();
  FUN_714c5410(uStack_28,uVar12,uVar7);
  FUN_714c82ec(uStack_28);
  FUN_718fe87c(iVar6,uVar12,uVar7,param_2,0,&DAT_70083866);
  return;
}


// =========================================================================
// Function: FUN_7164c36c
// Entry: 0x7164c36c | Size: 540 bytes
// =========================================================================

void FUN_7164c36c(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = FUN_71ba21e8(param_2,0x3f400000);
  iVar3 = imp_lroundf();
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar4 = FUN_718d0d4c();
  DAT_700c7c90 = iVar3;
  uVar5 = FUN_71ba21e8(param_2,0x3f4ccccd);
  FUN_71ba240c(uVar5,uVar2);
  uVar6 = imp_lroundf();
  uVar5 = DAT_700c7c84;
  uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
  DAT_700c7c94 = uVar6;
  uVar7 = FUN_71ba1b94(DAT_700c7c80);
  uVar7 = FUN_71ba21e8(uVar2,uVar7);
  uVar5 = FUN_71ba1b94(uVar5);
  FUN_71ba13e0(uVar7,uVar5);
  iVar8 = imp_lroundf();
  uVar1 = DAT_700c7c74;
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uVar11 = *(undefined4 *)(iVar4 + 0x90);
  DAT_700c7c8c = iVar8;
  uVar5 = FUN_71ba21e8(param_2,0x3d75c28f);
  uVar7 = FUN_71ba1b94(iVar8);
  uVar7 = FUN_71ba0b38(uVar5,uVar7);
  uVar9 = imp_lroundf(param_2);
  if ((int)uVar9 < 2) {
    uVar9 = 1;
  }
  if (uVar9 <= uVar6 + iVar3) {
    uVar9 = uVar6 + iVar3;
  }
  DAT_700c7c88 = FUN_718ff3a4(uVar11,param_1,uVar1,iVar8,uVar9,uVar7,&uStack_2c);
  uVar7 = DAT_700c7ca8;
  DAT_700c7cb4 = iVar3;
  DAT_700c7cb8 = uVar6;
  uVar10 = FUN_71ba1b94(DAT_700c7ca4);
  uVar2 = FUN_71ba21e8(uVar2,uVar10);
  uVar7 = FUN_71ba1b94(uVar7);
  FUN_71ba13e0(uVar2,uVar7);
  iVar4 = imp_lroundf();
  uVar1 = DAT_700c7c98;
  iVar3 = 1;
  if (1 < iVar4) {
    iVar3 = iVar4;
  }
  uStack_28 = 0;
  uStack_2c = 0;
  DAT_700c7cb0 = iVar3;
  uVar2 = FUN_71ba1b94(iVar3);
  uVar2 = FUN_71ba0b38(uVar5,uVar2);
  DAT_700c7cac = FUN_718ff3a4(uVar11,param_1,uVar1,iVar3,uVar9,uVar2,&uStack_2c);
  DAT_711e9ae0 = 0;
  return;
}


// =========================================================================
// Function: FUN_7164c8a0
// Entry: 0x7164c8a0 | Size: 1196 bytes
// =========================================================================

void FUN_7164c8a0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_25;
  
  iVar3 = FUN_718d0d4c();
  iVar3 = *(int *)(iVar3 + 0x90);
  iStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  FUN_718fe1a8(iVar3,&iStack_2c,&iStack_30,&uStack_34,0);
  if (iStack_2c != 0) {
    uStack_38 = 0;
    iStack_3c = 0;
    iVar20 = 0;
    iStack_40 = 0;
    uVar2 = 1;
    do {
      uVar1 = 0;
      if (((-1 < *(int *)((int)&DAT_700c7c88 + iVar20)) &&
          (iVar14 = *(int *)(iVar3 + 0x48), iVar14 != 0)) &&
         (iVar14 = iVar14 + *(int *)((int)&DAT_700c7c88 + iVar20) * 0x1c,
         *(short *)(iVar14 + 4) != -1)) {
        uStack_25 = 0;
        FUN_7164d42c(&iStack_40,
                     *(int *)((int)&DAT_700c7c84 + iVar20) * *(int *)((int)&DAT_700c7c80 + iVar20),
                     &uStack_25);
        uVar4 = *(uint *)(iVar20 + 0x700c7c7c);
        if (1 < uVar4) {
          uVar17 = 0;
          iVar23 = 0;
          do {
            if ((uint)(iStack_3c - iStack_40) <= uVar17) break;
            uVar15 = (iStack_3c - iStack_40) - uVar17;
            uVar21 = (uint)*(byte *)(*(int *)(iVar20 + 0x700c7c78) + iVar23 + 1);
            if (uVar15 < uVar21) {
              uVar21 = uVar15;
            }
            if (uVar21 != 0) {
              imp___aeabi_memset(iStack_40 + uVar17,uVar21,
                                 *(undefined1 *)(*(int *)(iVar20 + 0x700c7c78) + iVar23));
              uVar4 = *(uint *)(iVar20 + 0x700c7c7c);
            }
            uVar15 = iVar23 + 3;
            uVar17 = uVar21 + uVar17;
            iVar23 = iVar23 + 2;
          } while (uVar15 < uVar4);
        }
        iVar23 = *(int *)((int)&DAT_700c7c90 + iVar20);
        uVar1 = uVar2;
        if (0 < iVar23) {
          iVar18 = *(int *)((int)&DAT_700c7c8c + iVar20);
          iVar22 = 0;
          do {
            uVar5 = FUN_71ba1b94(iVar22);
            uVar5 = FUN_71ba0b38(uVar5,0x3f000000);
            uVar6 = FUN_71ba1b94(iVar23);
            uVar5 = FUN_71ba13e0(uVar5,uVar6);
            if (0 < iVar18) {
              iVar23 = iStack_2c +
                       iStack_30 *
                       (*(int *)((int)&DAT_700c7c94 + iVar20) + iVar22 +
                       (uint)*(ushort *)(iVar14 + 6)) * 4 + (uint)*(ushort *)(iVar14 + 4) * 4;
              iVar7 = 0;
              do {
                uVar6 = FUN_71ba1b94(iVar7);
                uVar6 = FUN_71ba0b38(uVar6,0x3f000000);
                uVar8 = FUN_71ba1b94(iVar18);
                uVar6 = FUN_71ba13e0(uVar6,uVar8);
                iVar24 = *(int *)((int)&DAT_700c7c80 + iVar20);
                iVar16 = *(int *)((int)&DAT_700c7c84 + iVar20);
                uVar8 = FUN_71ba1b94(iVar24);
                uVar6 = FUN_71ba21e8(uVar6,uVar8);
                uVar6 = FUN_71ba0b38(uVar6,0xbf000000);
                iVar18 = FUN_71ba2d10(uVar6,0);
                uVar8 = FUN_71ba0b38(uVar8,0xbf800000);
                if (iVar18 != 0) {
                  uVar6 = 0;
                }
                iVar18 = FUN_71ba2d10(uVar8,uVar6);
                if (iVar18 != 0) {
                  uVar6 = uVar8;
                }
                uVar9 = FUN_71ba1b94(iVar16);
                uVar8 = FUN_71ba21e8(uVar5,uVar9);
                uVar8 = FUN_71ba0b38(uVar8,0xbf000000);
                iVar18 = FUN_71ba2d10(uVar8,0);
                uVar9 = FUN_71ba0b38(uVar9,0xbf800000);
                if (iVar18 != 0) {
                  uVar8 = 0;
                }
                iVar18 = FUN_71ba2d10(uVar9,uVar8);
                iVar10 = FUN_71ba17bc(uVar6);
                uVar11 = FUN_71ba1b94();
                uVar6 = FUN_71ba240c(uVar6,uVar11);
                if (iVar18 != 0) {
                  uVar8 = uVar9;
                }
                iVar12 = FUN_71ba17bc(uVar8);
                iVar18 = iStack_40;
                iVar19 = iVar24 * iVar12 + iStack_40;
                iVar25 = iVar10 + 1;
                if (iVar24 + -1 < iVar10 + 1) {
                  iVar25 = iVar24 + -1;
                }
                uVar9 = FUN_71ba1e0c(*(undefined1 *)(iVar19 + iVar25));
                uVar9 = FUN_71ba21e8(uVar6,uVar9);
                uVar11 = FUN_71ba1e0c(*(undefined1 *)(iVar19 + iVar10));
                uVar13 = FUN_71ba240c(0x3f800000,uVar6);
                uVar11 = FUN_71ba21e8(uVar11,uVar13);
                uVar9 = FUN_71ba0b38(uVar11,uVar9);
                iVar16 = iVar16 + -1;
                iVar19 = iVar12 + 1;
                if (iVar16 < iVar12 + 1) {
                  iVar19 = iVar16;
                }
                iVar18 = iVar19 * iVar24 + iVar18;
                uVar11 = FUN_71ba1e0c(*(undefined1 *)(iVar18 + iVar25));
                uVar6 = FUN_71ba21e8(uVar6,uVar11);
                uVar11 = FUN_71ba1e0c(*(undefined1 *)(iVar18 + iVar10));
                uVar11 = FUN_71ba21e8(uVar11,uVar13);
                uVar6 = FUN_71ba0b38(uVar11,uVar6);
                uVar11 = FUN_71ba1b94(iVar12);
                uVar8 = FUN_71ba240c(uVar8,uVar11);
                uVar6 = FUN_71ba21e8(uVar8,uVar6);
                uVar8 = FUN_71ba240c(0x3f800000,uVar8);
                uVar8 = FUN_71ba21e8(uVar9,uVar8);
                uVar6 = FUN_71ba0b38(uVar8,uVar6);
                FUN_71ba0b38(uVar6,0x3f000000);
                iVar18 = FUN_71ba17bc();
                *(uint *)(iVar23 + iVar7 * 4) = iVar18 << 0x18 | 0xffffff;
                iVar18 = *(int *)((int)&DAT_700c7c8c + iVar20);
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar18);
              iVar23 = *(int *)((int)&DAT_700c7c90 + iVar20);
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 < iVar23);
        }
      }
      iVar20 = iVar20 + 0x24;
      uVar2 = uVar1;
    } while (iVar20 != 0x48);
    DAT_711e9ae0 = uVar1;
    if (iStack_40 != 0) {
      iStack_3c = iStack_40;
      thunk_qNQrlu();
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7164d304
// Entry: 0x7164d304 | Size: 16 bytes
// =========================================================================

undefined1 FUN_7164d304(void)

{
  return DAT_711e9ae0;
}


// =========================================================================
// Function: FUN_7164d34c
// Entry: 0x7164d34c | Size: 284 bytes
// =========================================================================

undefined4 FUN_7164d34c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = FUN_718d0d4c();
  FUN_718fe144(*(undefined4 *)(iVar1 + 0x90));
  FUN_7164c8a0();
  iVar1 = FUN_718d0d4c();
  FUN_718fe1a8(*(undefined4 *)(iVar1 + 0x90),&iStack_1c,&uStack_20,&uStack_24,&iStack_28);
  iVar2 = FUN_7141267c(uStack_20,uStack_24,iStack_28 << 3);
  FUN_71412ed8();
  if (0 < *(int *)(iVar2 + 8)) {
    iVar3 = *(int *)(iVar2 + 0x10);
    iVar4 = 0;
    iVar5 = *(int *)(iVar2 + 0x14);
    do {
      imp___aeabi_memcpy(iVar5,iVar3 * iVar4 + iStack_1c);
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + iVar3;
    } while (iVar4 < *(int *)(iVar2 + 8));
  }
  FUN_71413700(iVar2,4,&uStack_2c,&uStack_30,&uStack_34,&uStack_38);
  DAT_712042e8 = FUN_7143b470(uStack_2c,uStack_30,uStack_34,uStack_38);
  DAT_712042e8 = FUN_7143bcd4(DAT_712042e8,iVar2);
  FUN_71412ac0(iVar2);
  *(undefined4 *)(*(int *)(iVar1 + 0x90) + 8) = DAT_712042e8;
  return 1;
}


// =========================================================================
// Function: FUN_7164d42c
// Entry: 0x7164d42c | Size: 240 bytes
// =========================================================================

void FUN_7164d42c(int *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  uVar3 = param_1[2];
  if (uVar3 - iVar2 < param_2) {
    if (iVar2 != 0) {
      param_1[1] = iVar2;
      thunk_qNQrlu();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_7153a130(param_1);
    }
    uVar4 = param_2;
    if (param_2 < uVar3 << 1) {
      uVar4 = uVar3 << 1;
    }
    if (0x3ffffffe < uVar3) {
      uVar4 = 0x7fffffff;
    }
    iVar2 = thunk_MwhHq(uVar4);
    *param_1 = iVar2;
    param_1[1] = iVar2;
    param_1[2] = iVar2 + uVar4;
    uVar1 = *param_3;
  }
  else {
    uVar4 = param_1[1] - iVar2;
    uVar3 = param_2;
    if (uVar4 < param_2) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      imp___aeabi_memset(iVar2,uVar3,*param_3);
    }
    if (param_2 <= uVar4) {
      param_1[1] = *param_1 + param_2;
      return;
    }
    param_2 = param_2 - uVar4;
    uVar1 = *param_3;
    iVar2 = param_1[1];
  }
  imp___aeabi_memset(iVar2,param_2,uVar1);
  param_1[1] = iVar2 + param_2;
  return;
}


// =========================================================================
// Function: FRbSzPZu_mtXrBcbaVxbjX
// Entry: 0x7164d5c0 | Size: 12 bytes
// =========================================================================

undefined1 * FRbSzPZu_mtXrBcbaVxbjX(void)

{
  return &DAT_711e9ae1;
}


// =========================================================================
// Function: PgoPDtSR_JVWsBCHIuTxvfydgJ
// Entry: 0x7164d604 | Size: 16 bytes
// =========================================================================

undefined1 PgoPDtSR_JVWsBCHIuTxvfydgJ(void)

{
  return DAT_711e9ee1;
}


// =========================================================================
// Function: MdWAooLXOJyvrAwXwfYSBcI_zWz
// Entry: 0x7164d64c | Size: 16 bytes
// =========================================================================

undefined1 MdWAooLXOJyvrAwXwfYSBcI_zWz(void)

{
  return DAT_711e9ee2;
}


// =========================================================================
// Function: OYmCSClorftJGNdhjfO
// Entry: 0x7164d694 | Size: 68 bytes
// =========================================================================

void OYmCSClorftJGNdhjfO(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5)

{
  DAT_711e9eec = param_2;
  DAT_711e9ee8 = param_1;
  DAT_711e9ef0 = param_3;
  DAT_711e9ef4 = param_4;
  DAT_711e9ef8 = param_5;
  return;
}


// =========================================================================
// Function: FUN_7164d790
// Entry: 0x7164d790 | Size: 988 bytes
// =========================================================================

int FUN_7164d790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = FUN_7164e018();
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  FUN_717cc2f4(iVar1 + 0x58);
  FUN_717dc420(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0x1010101;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x1010101;
  FUN_718ef20c(&DAT_700619bf,0x1510,0x414,8,0x10,0x14,2);
  FUN_718cfce4(0);
  iVar1 = FUN_718d0d4c();
  FUN_71919184();
  uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar1 + 8),0x3a088888);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar1 + 0xc),0x3a72b9d6);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_71ba21e8(uVar2,0x41f00000);
  puVar7 = (undefined4 *)(param_1 + 0x34);
  *puVar7 = uVar2;
  iVar1 = FUN_718c9f94();
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 4) = 0x41000000;
  *(undefined4 *)(iVar1 + 8) = 0x41000000;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar2 = FUN_71ba21e8(uVar2,0x425c0000);
  *(undefined4 *)(iVar1 + 0x70) = uVar2;
  FUN_718f592c(0);
  pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cec);
  if (*pcVar3 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cdc);
    *puVar5 = 0x200e3b4a;
    puVar5[1] = 0x32312cc9;
    puVar5[2] = 0x35492d47;
    *(undefined1 *)((int)puVar5 + 0xf) = 1;
    *(undefined4 *)((int)puVar5 + 0xb) = 0x5315d135;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7165309c,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cec);
    *puVar6 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cdc);
  if (pbVar4[0xf] != 0) {
    *pbVar4 = *pbVar4 ^ 0x2b;
    pbVar4[1] = pbVar4[1] ^ 0x49;
    pbVar4[2] = pbVar4[2] ^ 0x67;
    pbVar4[3] = pbVar4[3] ^ 0x41;
    pbVar4[0xf] = 0;
    pbVar4[4] = pbVar4[4] ^ 0xa5;
    pbVar4[5] = pbVar4[5] ^ 0x73;
    pbVar4[6] = pbVar4[6] ^ 0x53;
    pbVar4[7] = pbVar4[7] ^ 0x5d;
    pbVar4[8] = pbVar4[8] ^ 0x2b;
    pbVar4[9] = pbVar4[9] ^ 0x49;
    pbVar4[10] = pbVar4[10] ^ 0x67;
    pbVar4[0xb] = pbVar4[0xb] ^ 0x41;
    pbVar4[0xc] = pbVar4[0xc] ^ 0xa5;
    pbVar4[0xd] = pbVar4[0xd] ^ 0x73;
    pbVar4[0xe] = pbVar4[0xe] ^ 0x53;
  }
  uVar2 = FUN_7164bd90(pbVar4,*puVar7,1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  FUN_7164c36c(uVar2,*puVar7);
  pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d0c);
  if (*pcVar3 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cfc);
    *(undefined2 *)(puVar5 + 3) = 0x1af;
    *puVar5 = 0x5dd0a722;
    puVar5[1] = 0x82d96cc9;
    puVar5[2] = 0x5dc5a16b;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716530cc,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d0c);
    *puVar6 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7cfc);
  if (pbVar4[0xd] != 0) {
    *pbVar4 = *pbVar4 ^ 0x45;
    pbVar4[1] = pbVar4[1] ^ 0xd5;
    pbVar4[2] = pbVar4[2] ^ 0xb1;
    pbVar4[3] = pbVar4[3] ^ 0x3b;
    pbVar4[0xd] = 0;
    pbVar4[4] = pbVar4[4] ^ 0xaf;
    pbVar4[5] = pbVar4[5] ^ 5;
    pbVar4[6] = pbVar4[6] ^ 0xad;
    pbVar4[7] = pbVar4[7] ^ 0xfb;
    pbVar4[8] = pbVar4[8] ^ 0x45;
    pbVar4[9] = pbVar4[9] ^ 0xd5;
    pbVar4[10] = pbVar4[10] ^ 0xb1;
    pbVar4[0xb] = pbVar4[0xb] ^ 0x3b;
    pbVar4[0xc] = pbVar4[0xc] ^ 0xaf;
  }
  uVar2 = FUN_7164bd90(pbVar4,*puVar7,1);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  FUN_7164d34c();
  return param_1;
}


// =========================================================================
// Function: FUN_7164e018
// Entry: 0x7164e018 | Size: 256 bytes
// =========================================================================

undefined4 * FUN_7164e018(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  param_1[3] = iVar1;
  iVar2 = thunk_MwhHq(8);
  *(undefined1 *)(iVar2 + 2) = 0;
  *(int *)(iVar1 + 4) = iVar2;
  iVar2 = *(int *)(iVar1 + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  iVar2 = *(int *)(param_1[2] + 4);
  param_1[2] = iVar2;
  iVar1 = thunk_MwhHq(8);
  *(undefined1 *)(iVar1 + 2) = 0;
  *(int *)(iVar2 + 4) = iVar1;
  uVar3 = param_1[3];
  *(undefined4 *)(*(int *)(param_1[2] + 4) + 4) = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3;
  return param_1;
}


// =========================================================================
// Function: FUN_7164e210
// Entry: 0x7164e210 | Size: 400 bytes
// =========================================================================

void FUN_7164e210(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_71626910();
  iVar1 = FUN_718d0d4c();
  FUN_71919184();
  uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar1 + 8),0x3a088888);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar1 + 0xc),0x3a72b9d6);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_71ba21e8(uVar2,0x41f00000);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  iVar1 = FUN_718d0d4c();
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0xe0) = uVar2;
  *(undefined1 *)(iVar1 + 0xe4) = *(undefined1 *)(param_1 + 0x39);
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(char *)(param_1 + 0x44) != '\0') {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x44) != '\0') {
    *(undefined4 *)(iVar1 + 0xdc) = 0xbf800000;
    *(undefined4 *)(iVar1 + 0xe0) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  FUN_7164e724(param_1);
  FUN_714e753c();
  FUN_71617c50();
  FUN_71508cf8();
  FUN_719194a0();
  FUN_718d2da0();
  if (DAT_711f6d58 != 0) {
    if (*(int *)(DAT_711f6d58 + 0x24) != 0) {
      FUN_7173e6dc();
    }
    if (*(int *)(DAT_711f6d58 + 0x1c) != 0) {
      FUN_717b63a0();
    }
    if (DAT_711e9f4c != 0) {
      FUN_71654f10();
    }
    FUN_71626990();
    if (*(int *)(DAT_711f6d58 + 0x18) != 0) {
      FUN_717b7bf0();
    }
  }
  FUN_71648960();
  FUN_7163fea0();
  FUN_71624610();
  FUN_71639ce0();
  FUN_7164e950();
  FUN_718e83bc();
  iVar1 = FUN_7163d6b4();
  if (iVar1 != 0) {
    FUN_718ea258();
    FUN_718d0d94();
    FUN_71918aec();
  }
  iVar1 = FUN_718d0d4c();
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(iVar1 + 0xe4) == '\0')) {
    *(undefined4 *)(iVar1 + 0xdc) = 0xbf800000;
    *(undefined4 *)(iVar1 + 0xe0) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_7164e724
// Entry: 0x7164e724 | Size: 348 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7164e724(undefined4 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *extraout_r1;
  undefined1 auStack_169 [3];
  undefined2 *puStack_166;
  undefined4 uStack_157;
  undefined2 auStack_142 [129];
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  puVar1 = (undefined2 *)*param_1;
  if (puVar1 != (undefined2 *)0x0) {
    param_2 = (undefined2 *)param_1[3];
  }
  if (puVar1 != (undefined2 *)0x0 && puVar1 != param_2) {
    do {
      if (*(char *)(puVar1 + 1) == '\0') break;
      *param_1 = *(undefined4 *)(puVar1 + 2);
      cStack_3c = '\x01';
      iStack_30 = 0x800;
      uStack_40 = 0;
      auStack_142[0] = *puVar1;
      uStack_157 = 0x10;
      puStack_166 = auStack_142;
      (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
                ((int *)*DAT_711f6d58,&DAT_7010223c,auStack_169,1,10,0,0,0xffffffff,0xffff,0xffff,0)
      ;
      puVar2 = (undefined2 *)(param_1[4] + 1);
      param_1[4] = puVar2;
      *(undefined1 *)(param_1[2] + 2) = 0;
      param_1[2] = *(undefined4 *)(param_1[2] + 4);
      if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
        imp_free(puStack_166);
        puVar2 = extraout_r1;
      }
      puVar1 = (undefined2 *)*param_1;
      if (puVar1 != (undefined2 *)0x0) {
        puVar2 = (undefined2 *)param_1[3];
      }
    } while (puVar1 != (undefined2 *)0x0 && puVar1 != puVar2);
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_7164e950
// Entry: 0x7164e950 | Size: 5328 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7164e950(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  char *pcVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined1 *puVar19;
  short *psVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int iStack_268;
  int iStack_264;
  byte abStack_22c [512];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_712016a4 != 0) {
    iVar5 = 0;
    if (DAT_711a3bb4 != 0) {
      iVar5 = DAT_711a3b94;
    }
    if (DAT_711a3bb4 == 0 || iVar5 == 0) {
      DAT_711e9ee1 = '\x01';
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      DAT_711e9ee2 = DAT_712016a8 != 0;
      DataMemoryBarrier(0xb);
      if (((DAT_711e9f00 & 1) == 0) &&
         (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711e9f00), iVar5 != 0)) {
        DAT_711e9efc = *DAT_70b42040;
        thunk_SixizuLbAnqfgRApsCY(&DAT_711e9f00);
      }
      DataMemoryBarrier(0xb);
      if (((DAT_711e9f08 & 1) == 0) &&
         (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711e9f08), iVar5 != 0)) {
        DAT_711e9f04 = FUN_71886108();
        thunk_SixizuLbAnqfgRApsCY(&DAT_711e9f08);
      }
      iVar5 = FUN_71886108();
      if (100 < (uint)(iVar5 - DAT_711e9f04)) {
        DAT_711e9f04 = FUN_71886108();
        DAT_711e9efc = *DAT_70b42040;
      }
      if (((DAT_711f6d58 != (undefined4 *)0x0) &&
          (iVar5 = (**(code **)(*(int *)*DAT_711f6d58 + 0x48))(), iVar5 != 0)) &&
         (iVar5 = (**(code **)(*(int *)*DAT_711f6d58 + 0x30))(), iVar5 != 0)) {
        uVar22 = *(undefined4 *)(iVar5 + 0x78);
        uVar6 = FUN_71ba1e0c(*(undefined4 *)(iVar5 + 0x5c));
        uVar6 = FUN_71ba21e8(uVar6,0x42c80000);
        uVar22 = FUN_71ba1e0c(uVar22);
        uVar6 = FUN_71ba13e0(uVar6,uVar22);
        (**(code **)(*(int *)*DAT_711f6d58 + 0x68))();
        iVar7 = FUN_71886108();
        uVar23 = DAT_711e9f1c;
        uVar15 = DAT_711e9f10;
        uVar21 = *(uint *)(iVar5 + 0x70);
        if (DAT_711e9f0c == 0) {
          uVar25 = *(uint *)(iVar5 + 0x78);
LAB_7164fb48:
          uVar8 = 0;
          uVar22 = 0;
          DAT_711e9f24 = 0;
          DAT_711e9f28 = 0;
          iVar24 = *(int *)(iVar5 + 0x8c);
          DAT_711e9f20 = 0;
          uVar9 = DAT_711e9f28;
LAB_7164fb80:
          DAT_711e9f28 = uVar9;
          DAT_711e9f18 = *(int *)(iVar5 + 0x5c);
          DAT_711e9f0c = iVar7;
          DAT_711e9f10 = uVar21;
          DAT_711e9f14 = iVar24;
          DAT_711e9f1c = uVar25;
        }
        else {
          uVar25 = *(uint *)(iVar5 + 0x78);
          if ((uVar21 < DAT_711e9f10) || (uVar25 < DAT_711e9f1c)) goto LAB_7164fb48;
          uVar22 = DAT_711e9f20;
          uVar8 = DAT_711e9f24;
          if (0x7c < (uint)(iVar7 - DAT_711e9f0c) >> 2) {
            uVar22 = FUN_71ba1e0c(iVar7 - DAT_711e9f0c);
            uVar8 = FUN_71ba13e0(uVar22,0x447a0000);
            uVar22 = FUN_71ba1e0c(uVar21 - uVar15);
            uVar22 = FUN_71ba13e0(uVar22,uVar8);
            iVar24 = *(int *)(iVar5 + 0x8c);
            DAT_711e9f20 = uVar22;
            uVar9 = FUN_71ba1e0c(iVar24 - DAT_711e9f14);
            uVar8 = FUN_71ba13e0(uVar9,uVar8);
            DAT_711e9f24 = uVar8;
            uVar9 = 0;
            if (uVar25 != uVar23) {
              uVar9 = FUN_71ba1e0c(*(int *)(iVar5 + 0x5c) - DAT_711e9f18);
              uVar9 = FUN_71ba21e8(uVar9,0x42c80000);
              uVar10 = FUN_71ba1e0c(uVar25 - uVar23);
              uVar9 = FUN_71ba13e0(uVar9,uVar10);
            }
            goto LAB_7164fb80;
          }
        }
        uVar9 = DAT_711e9f28;
        FUN_71ba1638(uVar6);
        FUN_71ba1638(uVar9);
        FUN_71ba1638(uVar22);
        FUN_71ba1638(uVar8);
      }
      DataMemoryBarrier(0xb);
      if (((DAT_711e9f30 & 1) == 0) &&
         (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711e9f30), iVar5 != 0)) {
        DAT_711e9f2c = FUN_71886108();
        thunk_SixizuLbAnqfgRApsCY(&DAT_711e9f30);
      }
      FUN_71886108();
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      if (DAT_712016a8 == 0) {
        pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e0c);
        if (*pcVar16 == '\0') {
          iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dfc);
          *(undefined1 *)(iVar5 + 0x44) = 1;
          imp___aeabi_memcpy8(iVar5,&DAT_70084748,0x44);
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71653250,iVar5,&DAT_70b0e000);
          puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e0c);
          *puVar19 = 1;
        }
        iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dfc);
        if (*(char *)(iVar5 + 0x44) != '\0') {
          uVar15 = 0;
          uVar23 = 0;
          do {
            iVar7 = (uVar15 & 7) * 8;
            uVar21 = iVar7 - 0x20;
            bVar4 = (byte)(0xf9f30ff9 >> iVar7) |
                    (byte)(0x196d2be5 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar21) {
              bVar4 = (byte)(0x196d2be5 >> (uVar21 & 0xff));
            }
            *(byte *)(iVar5 + uVar15) = *(byte *)(iVar5 + uVar15) ^ bVar4;
            bVar26 = 0xfffffffe < uVar15;
            bVar1 = uVar23 == 0;
            bVar2 = (0x42 < uVar15) <= uVar23;
            uVar15 = uVar15 + 1;
            uVar23 = uVar23 + bVar26;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar5 + 0x44) = 0;
        }
        uVar6 = DAT_711e9efc;
        FUN_717d25cc();
        FUN_71ba1638(uVar6);
        pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e2c);
        if (*pcVar16 == '\0') {
          puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e1c);
          *puVar18 = 0x1a5c3de;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716532a0,puVar18,&DAT_70b0e000);
          puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e2c);
          *puVar19 = 1;
        }
        pbVar17 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e1c);
        if (pbVar17[3] != 0) {
          pbVar17[3] = 0;
          *pbVar17 = *pbVar17 ^ 0xed;
          pbVar17[1] = pbVar17[1] ^ 0xf1;
          pbVar17[2] = pbVar17[2] ^ 0xa5;
        }
        FUN_71651b94();
        if (_ext___stack_chk_guard == iStack_2c) {
          return;
        }
        goto LAB_7164fb2c;
      }
      if (DAT_711e9f48 < 0x3b) {
        DAT_711e9f48 = DAT_711e9f48 + 1;
        iVar5 = FUN_71ba2c9c(DAT_711e9f38,DAT_711e9f3c,0,0);
        uVar28 = CONCAT44(DAT_711e9f44,DAT_711e9f40);
        uVar27 = CONCAT44(DAT_711e9f3c,DAT_711e9f38);
        if (iVar5 == 0) goto LAB_7164ef6c;
      }
      else {
LAB_7164ef6c:
        DAT_711e9f48 = 0;
        pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d2c);
        if (*pcVar16 == '\0') {
          puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d1c);
          *puVar18 = 0x62b7c508;
          puVar18[1] = 0xb2d07c7c;
          puVar18[2] = 0x6babdc4a;
          *(undefined1 *)((int)puVar18 + 0xe) = 1;
          *(undefined2 *)(puVar18 + 3) = 0x5370;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716530fc,puVar18,&DAT_70b0e000);
          puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d2c);
          *puVar19 = 1;
        }
        pbVar17 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d1c);
        if (pbVar17[0xe] != 0) {
          *pbVar17 = *pbVar17 ^ 0x27;
          pbVar17[1] = pbVar17[1] ^ 0xb5;
          pbVar17[2] = pbVar17[2] ^ 0xc5;
          pbVar17[3] = pbVar17[3] ^ 0xd;
          pbVar17[0xe] = 0;
          pbVar17[4] = pbVar17[4] ^ 0x1f;
          pbVar17[5] = pbVar17[5] ^ 0x53;
          pbVar17[6] = pbVar17[6] ^ 0xbd;
          pbVar17[7] = pbVar17[7] ^ 0xd7;
          pbVar17[8] = pbVar17[8] ^ 0x27;
          pbVar17[9] = pbVar17[9] ^ 0xb5;
          pbVar17[10] = pbVar17[10] ^ 0xc5;
          pbVar17[0xb] = pbVar17[0xb] ^ 0xd;
          pbVar17[0xc] = pbVar17[0xc] ^ 0x1f;
          pbVar17[0xd] = pbVar17[0xd] ^ 0x53;
        }
        iVar5 = imp___open_2(pbVar17,0);
        if (iVar5 < 0) {
          uVar27 = 0;
          uVar28 = 0;
        }
        else {
          pbVar17 = abStack_22c;
          iVar7 = imp_read(iVar5,pbVar17,0x1ff);
          imp_close(iVar5);
          if ((iVar7 < 1) || (pbVar17[iVar7] = 0, abStack_22c[0] == 0)) {
            uVar27 = 0;
            iStack_264 = 0;
            iStack_268 = 0;
            iStack_274 = 0;
          }
          else {
            pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d3c);
            pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d5c);
            pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d7c);
            pbVar14 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d9c);
            uVar15 = 0;
            iVar5 = 0;
            uVar27 = 0;
            iStack_264 = 0;
            iStack_268 = 0;
            iStack_274 = 0;
            do {
              if (abStack_22c[0] == 0x4d) {
                bVar4 = pbVar17[3];
                if (bVar4 != 0x54) goto LAB_7164f1e0;
                pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d4c);
                if (*pcVar16 == '\0') {
                  puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d3c);
                  *(undefined1 *)((int)puVar18 + 10) = 1;
                  *puVar18 = 0xd761abe;
                  puVar18[1] = 0x962e71e;
                  *(undefined2 *)(puVar18 + 2) = 0x7fc9;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_7165312c,puVar18,&DAT_70b0e000);
                  puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d4c);
                  *puVar19 = 1;
                }
                if (pbVar11[10] != 0) {
                  *pbVar11 = *pbVar11 ^ 0xf3;
                  pbVar11[1] = pbVar11[1] ^ 0x7f;
                  pbVar11[2] = pbVar11[2] ^ 0x1b;
                  pbVar11[3] = pbVar11[3] ^ 0x59;
                  pbVar11[10] = 0;
                  pbVar11[4] = pbVar11[4] ^ 0x71;
                  pbVar11[5] = pbVar11[5] ^ 0x93;
                  pbVar11[6] = pbVar11[6] ^ 3;
                  pbVar11[7] = pbVar11[7] ^ 0x65;
                  pbVar11[8] = pbVar11[8] ^ 0xf3;
                  pbVar11[9] = pbVar11[9] ^ 0x7f;
                }
                uVar15 = imp_strncmp(pbVar17,pbVar11,9);
                if (uVar15 != 0) {
                  abStack_22c[0] = *pbVar17;
                  goto LAB_7164f1d4;
                }
                imp_strtol(pbVar17 + 9,0,10);
                uVar27 = FUN_71ba1b10();
LAB_7164f470:
                iVar5 = iVar5 + 1;
              }
              else {
LAB_7164f1d4:
                if (abStack_22c[0] == 0x4d) {
                  bVar4 = pbVar17[3];
LAB_7164f1e0:
                  if (bVar4 == 0x46) {
                    pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d6c);
                    if (*pcVar16 == '\0') {
                      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d5c);
                      *(undefined2 *)(puVar18 + 2) = 0x1c1;
                      *puVar18 = 0xf3ecd88c;
                      puVar18[1] = 0x11700af3;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71653158,puVar18,&DAT_70b0e000);
                      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d6c);
                      *puVar19 = 1;
                    }
                    if (pbVar12[9] != 0) {
                      pbVar12[9] = 0;
                      *pbVar12 = *pbVar12 ^ 0xc1;
                      pbVar12[1] = pbVar12[1] ^ 0xbd;
                      pbVar12[2] = pbVar12[2] ^ 0x81;
                      pbVar12[3] = pbVar12[3] ^ 0xb5;
                      pbVar12[4] = pbVar12[4] ^ 0x81;
                      pbVar12[5] = pbVar12[5] ^ 0x6f;
                      pbVar12[6] = pbVar12[6] ^ 0x15;
                      pbVar12[7] = pbVar12[7] ^ 0x2b;
                      pbVar12[8] = pbVar12[8] ^ 0xc1;
                    }
                    uVar15 = imp_strncmp(pbVar17,pbVar12,8);
                    if (uVar15 == 0) {
                      iStack_264 = imp_strtol(pbVar17 + 8,0,10);
                      goto LAB_7164f470;
                    }
                    abStack_22c[0] = *pbVar17;
                    goto LAB_7164f29c;
                  }
                }
                else {
LAB_7164f29c:
                  if (abStack_22c[0] == 0x42) {
                    pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d8c);
                    if (*pcVar16 == '\0') {
                      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d7c);
                      *(undefined2 *)(puVar18 + 2) = 0x145;
                      *puVar18 = 0xf7ed8c07;
                      puVar18[1] = 0x43b0c120;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71653184,puVar18,&DAT_70b0e000);
                      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d8c);
                      *puVar19 = 1;
                    }
                    if (pbVar13[9] != 0) {
                      pbVar13[9] = 0;
                      *pbVar13 = *pbVar13 ^ 0x45;
                      pbVar13[1] = pbVar13[1] ^ 0xf9;
                      pbVar13[2] = pbVar13[2] ^ 0x8b;
                      pbVar13[3] = pbVar13[3] ^ 0x91;
                      pbVar13[4] = pbVar13[4] ^ 0x45;
                      pbVar13[5] = pbVar13[5] ^ 0xb3;
                      pbVar13[6] = pbVar13[6] ^ 0xc3;
                      pbVar13[7] = pbVar13[7] ^ 0x79;
                      pbVar13[8] = pbVar13[8] ^ 0x45;
                    }
                    uVar15 = imp_strncmp(pbVar17,pbVar13,8);
                    if (uVar15 == 0) {
                      iStack_268 = imp_strtol(pbVar17 + 8,0,10);
                      goto LAB_7164f470;
                    }
                    abStack_22c[0] = *pbVar17;
                  }
                  if (abStack_22c[0] == 0x43) {
                    uVar15 = (uint)pbVar17[1];
                  }
                  if (abStack_22c[0] == 0x43 && uVar15 == 0x61) {
                    pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dac);
                    if (*pcVar16 == '\0') {
                      puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7d9c);
                      *puVar18 = 0x19ce6238;
                      puVar18[1] = 0xc3c37f08;
                      *(undefined1 *)(puVar18 + 2) = 1;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716531b0,puVar18,&DAT_70b0e000);
                      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dac);
                      *puVar19 = 1;
                    }
                    if (pbVar14[8] != 0) {
                      pbVar14[8] = 0;
                      *pbVar14 = *pbVar14 ^ 0x7b;
                      pbVar14[1] = pbVar14[1] ^ 3;
                      pbVar14[2] = pbVar14[2] ^ 0xad;
                      pbVar14[3] = pbVar14[3] ^ 0x71;
                      pbVar14[4] = pbVar14[4] ^ 0x6d;
                      pbVar14[5] = pbVar14[5] ^ 0x1b;
                      pbVar14[6] = pbVar14[6] ^ 0xf9;
                      pbVar14[7] = pbVar14[7] ^ 0xc3;
                    }
                    iVar7 = imp_strncmp(pbVar17,pbVar14,7);
                    if (iVar7 == 0) {
                      iStack_274 = imp_strtol(pbVar17 + 7,0,10);
                      goto LAB_7164f470;
                    }
                  }
                }
              }
              for (; uVar15 = (uint)*pbVar17, uVar15 != 0 && uVar15 != 10; pbVar17 = pbVar17 + 1) {
              }
              if (uVar15 != 0) {
                pbVar17 = pbVar17 + 1;
              }
              abStack_22c[0] = *pbVar17;
            } while ((abStack_22c[0] != 0) && (iVar5 < 4));
          }
          uStack_270 = (undefined4)((ulonglong)uVar27 >> 0x20);
          uStack_26c = (undefined4)uVar27;
          uVar27 = FUN_71ba1ea0(uStack_26c,uStack_270,0,0x3f500000);
          uVar28 = FUN_71ba1b10(iStack_268 + iStack_264 + iStack_274);
          uVar28 = FUN_71ba23ec(uStack_26c,uStack_270,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
          uVar28 = FUN_71ba1ea0((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),0,0x3f500000);
        }
      }
      DAT_711e9f44 = (undefined4)((ulonglong)uVar28 >> 0x20);
      DAT_711e9f40 = (undefined4)uVar28;
      DAT_711e9f3c = (undefined4)((ulonglong)uVar27 >> 0x20);
      DAT_711e9f38 = (undefined4)uVar27;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      psVar20 = (short *)0x0;
      if (*(short *)*DAT_70b41f64 != -1) {
        psVar20 = (short *)(*DAT_70b41f8c + *(short *)*DAT_70b41f64 * 0x14);
      }
      while (psVar20 != (short *)*DAT_70b41f68) {
        sVar3 = *psVar20;
        psVar20 = (short *)0x0;
        if (sVar3 != -1) {
          psVar20 = (short *)(*DAT_70b41f8c + sVar3 * 0x14);
        }
      }
      pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dcc);
      if (*pcVar16 == '\0') {
        iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dbc);
        *(undefined1 *)(iVar5 + 0x10d) = 1;
        imp___aeabi_memcpy8(iVar5,&DAT_70084638,0x10d);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716531d8,iVar5,&DAT_70b0e000);
        puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dcc);
        *puVar19 = 1;
      }
      iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dbc);
      if (*(char *)(iVar5 + 0x10d) != '\0') {
        uVar15 = 0;
        uVar23 = 0;
        do {
          iVar7 = (uVar15 & 7) * 8;
          uVar21 = iVar7 - 0x20;
          bVar4 = (byte)(0x333b31e9 >> iVar7) |
                  (byte)(0xbb75737 << ((uVar15 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar21) {
            bVar4 = (byte)(0xbb75737 >> (uVar21 & 0xff));
          }
          *(byte *)(iVar5 + uVar15) = *(byte *)(iVar5 + uVar15) ^ bVar4;
          bVar26 = 0xfffffffe < uVar15;
          bVar1 = uVar23 == 0;
          bVar2 = (0x10b < uVar15) <= uVar23;
          uVar15 = uVar15 + 1;
          uVar23 = uVar23 + bVar26;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar5 + 0x10d) = 0;
      }
      FUN_71ba1638(DAT_711e9efc);
      FUN_715f1504(*DAT_70b41f7c,0);
      FUN_715f1504(*DAT_70b41f78,0);
      FUN_715f1504(DAT_70b46524,0);
      FUN_715f1504(DAT_70b46528,0);
      FUN_715f1504(DAT_710eaf18,DAT_710eaf18 >> 0x1f);
      FUN_715f1504(DAT_710eaf20,DAT_710eaf20 >> 0x1f);
      FUN_717d25cc();
      pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dec);
      if (*pcVar16 == '\0') {
        puVar18 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ddc);
        *puVar18 = 0x14de5e8;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71653228,puVar18,&DAT_70b0e000);
        puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7dec);
        *puVar19 = 1;
      }
      pbVar17 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ddc);
      if (pbVar17[3] != 0) {
        pbVar17[3] = 0;
        *pbVar17 = *pbVar17 ^ 0xdb;
        pbVar17[1] = pbVar17[1] ^ 0xd7;
        pbVar17[2] = pbVar17[2] ^ 0x4d;
      }
      FUN_71651b94();
      if (_ext___stack_chk_guard == iStack_2c) {
        return;
      }
      goto LAB_7164fb2c;
    }
  }
  if (DAT_711e9ee1 == '\x01') {
    DAT_711e9ee1 = '\0';
    DAT_711e9ee2 = 0;
    DAT_711e9ae1 = 0;
  }
  DAT_7120269c = 0;
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
LAB_7164fb2c:
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71651b94
// Entry: 0x71651b94 | Size: 60 bytes
// =========================================================================

void FUN_71651b94(void)

{
  undefined4 in_r3;
  
  imp___vsnprintf_chk(&DAT_711e9ae1,0x400,0,0x400,in_r3,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_71651c24
// Entry: 0x71651c24 | Size: 256 bytes
// =========================================================================

byte FUN_71651c24(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = FUN_718d0d4c();
  bVar1 = FUN_716444cc(param_2,param_3,param_4,param_5);
  if (param_3 == 0) {
    puVar6 = (undefined4 *)(param_1 + 0x3c);
    puVar5 = (undefined4 *)(iVar2 + 0xdc);
    *(int *)(param_1 + 0x48) = param_2;
    if (param_2 == 1) {
      *(undefined1 *)(param_1 + 0x39) = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x40);
      *puVar5 = *puVar6;
      *(undefined4 *)(iVar2 + 0xe0) = uVar3;
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    else if (param_2 == 3) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      uVar3 = FUN_71ba1b94(param_5);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      uVar4 = FUN_71ba1b94(param_4);
      *puVar6 = uVar4;
      *puVar5 = uVar4;
      *(undefined4 *)(iVar2 + 0xe0) = uVar3;
    }
    else if (param_2 == 2) {
      uVar3 = FUN_71ba1b94(param_5);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      uVar4 = FUN_71ba1b94(param_4);
      *puVar6 = uVar4;
      *puVar5 = uVar4;
      *(undefined4 *)(iVar2 + 0xe0) = uVar3;
      *(undefined2 *)(param_1 + 0x38) = 0x100;
    }
  }
  FUN_718d2304();
  return bVar1 & (*(byte *)(iVar2 + 0x34c) ^ 1);
}


// =========================================================================
// Function: FUN_71651e00
// Entry: 0x71651e00 | Size: 140 bytes
// =========================================================================

void FUN_71651e00(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined2 **)(param_1 + 4);
  if ((*(int *)(puVar2 + 2) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(puVar2 + 2) + 2) != '\0')) {
    uVar3 = *(undefined4 *)(puVar2 + 2);
    iVar1 = thunk_MwhHq(8);
    *(undefined1 *)(iVar1 + 2) = 0;
    *(int *)(puVar2 + 2) = iVar1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4) = uVar3;
    puVar2 = *(undefined2 **)(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar2 + 2);
  *puVar2 = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 2) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
  return;
}


// =========================================================================
// Function: FUN_71651ec0
// Entry: 0x71651ec0 | Size: 1364 bytes
// =========================================================================

void FUN_71651ec0(int param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_4 != 0) {
    FUN_71ba17bc(*(undefined4 *)(param_1 + 0x30));
    uVar1 = FUN_71ba1b94();
    if (param_9 != 0) {
      uVar1 = 0x3f800000;
    }
    uVar2 = FUN_71ba240c(*param_2);
    *param_2 = uVar2;
    iVar3 = FUN_71ba2cf0(param_7,0);
    uVar4 = FUN_718d103c();
    puVar5 = (undefined4 *)(param_1 + 0x34);
    uStack_2c = 0;
    uVar2 = *puVar5;
    if (iVar3 == 0) {
      uVar2 = param_7;
    }
    uVar12 = 0;
    iVar9 = *(int *)(param_1 + 0x20);
    if (param_8 != 0) {
      iVar9 = param_8;
    }
    bVar13 = iVar3 == 0;
    uVar6 = param_3 & 0xff;
    uVar10 = 0;
    uStack_28 = 0x3f800000;
    if (param_9 != 0) {
      uVar12 = FUN_71ba1e0c(uVar6);
      uVar12 = FUN_71ba21e8(uVar12,0x3b808081);
      uVar10 = FUN_71ba1e0c((param_3 & 0xffff) >> 8);
      uVar10 = FUN_71ba21e8(uVar10,0x3b808081);
      uVar7 = FUN_71ba1e0c((param_3 & 0xffffff) >> 0x10);
      uStack_2c = FUN_71ba21e8(uVar7,0x3b808081);
      uVar7 = FUN_71ba1e0c(param_3 >> 0x18);
      uStack_28 = FUN_71ba21e8(uVar7,0x3b808081);
    }
    uStack_34 = uVar12;
    uStack_30 = uVar10;
    uVar12 = FUN_718c91a0(&uStack_34);
    FUN_718fb9d0(uVar4,iVar9,uVar2,param_2,uVar12,param_5,param_6,0,0);
    uVar2 = FUN_71ba0b38(uVar1,*param_2);
    uVar2 = FUN_71ba0b38(uVar1,uVar2);
    *param_2 = uVar2;
    uVar4 = FUN_718d103c();
    uVar12 = 0;
    uVar10 = 0;
    uVar7 = 0;
    uVar2 = *puVar5;
    if (bVar13) {
      uVar2 = param_7;
    }
    iVar3 = *(int *)(param_1 + 0x20);
    if (param_8 != 0) {
      iVar3 = param_8;
    }
    uVar8 = 0x3f800000;
    if (param_9 != 0) {
      uVar12 = FUN_71ba1e0c(uVar6);
      uVar12 = FUN_71ba21e8(uVar12,0x3b808081);
      uVar10 = FUN_71ba1e0c((param_3 & 0xffff) >> 8);
      uVar10 = FUN_71ba21e8(uVar10,0x3b808081);
      uVar7 = FUN_71ba1e0c((param_3 & 0xffffff) >> 0x10);
      uVar7 = FUN_71ba21e8(uVar7,0x3b808081);
      uVar8 = FUN_71ba1e0c(param_3 >> 0x18);
      uVar8 = FUN_71ba21e8(uVar8,0x3b808081);
    }
    uStack_34 = uVar12;
    uStack_30 = uVar10;
    uStack_2c = uVar7;
    uStack_28 = uVar8;
    uVar12 = FUN_718c91a0(&uStack_34);
    FUN_718fb9d0(uVar4,iVar3,uVar2,param_2,uVar12,param_5,param_6,0,0);
    uVar2 = FUN_71ba240c(*param_2,uVar1);
    *param_2 = uVar2;
    puVar11 = param_2 + 1;
    uVar2 = FUN_71ba240c(*puVar11,uVar1);
    *puVar11 = uVar2;
    uVar4 = FUN_718d103c();
    uVar12 = 0;
    uVar10 = 0;
    uVar2 = *puVar5;
    if (bVar13) {
      uVar2 = param_7;
    }
    uVar7 = 0;
    iVar3 = *(int *)(param_1 + 0x20);
    if (param_8 != 0) {
      iVar3 = param_8;
    }
    uVar8 = 0x3f800000;
    if (param_9 != 0) {
      uVar12 = FUN_71ba1e0c(uVar6);
      uVar7 = FUN_71ba21e8(uVar12,0x3b808081);
      uVar12 = FUN_71ba1e0c((param_3 & 0xffff) >> 8);
      uVar12 = FUN_71ba21e8(uVar12,0x3b808081);
      uVar10 = FUN_71ba1e0c((param_3 & 0xffffff) >> 0x10);
      uVar10 = FUN_71ba21e8(uVar10,0x3b808081);
      uVar8 = FUN_71ba1e0c(param_3 >> 0x18);
      uVar8 = FUN_71ba21e8(uVar8,0x3b808081);
    }
    uStack_34 = uVar7;
    uStack_30 = uVar12;
    uStack_2c = uVar10;
    uStack_28 = uVar8;
    uVar12 = FUN_718c91a0(&uStack_34);
    uVar10 = 0;
    FUN_718fb9d0(uVar4,iVar3,uVar2,param_2,uVar12,param_5,param_6,0,0);
    uVar2 = FUN_71ba0b38(uVar1,*puVar11);
    uVar2 = FUN_71ba0b38(uVar1,uVar2);
    *puVar11 = uVar2;
    uVar4 = FUN_718d103c();
    uVar12 = 0;
    uVar7 = 0;
    uVar2 = *puVar5;
    if (bVar13) {
      uVar2 = param_7;
    }
    iVar3 = *(int *)(param_1 + 0x20);
    if (param_8 != 0) {
      iVar3 = param_8;
    }
    uVar8 = 0x3f800000;
    if (param_9 != 0) {
      uVar12 = FUN_71ba1e0c(uVar6);
      uVar10 = FUN_71ba21e8(uVar12,0x3b808081);
      uVar12 = FUN_71ba1e0c((param_3 & 0xffff) >> 8);
      uVar12 = FUN_71ba21e8(uVar12,0x3b808081);
      uVar7 = FUN_71ba1e0c((param_3 & 0xffffff) >> 0x10);
      uVar7 = FUN_71ba21e8(uVar7,0x3b808081);
      uVar8 = FUN_71ba1e0c(param_3 >> 0x18);
      uVar8 = FUN_71ba21e8(uVar8,0x3b808081);
    }
    uStack_34 = uVar10;
    uStack_30 = uVar12;
    uStack_2c = uVar7;
    uStack_28 = uVar8;
    uVar12 = FUN_718c91a0(&uStack_34);
    FUN_718fb9d0(uVar4,iVar3,uVar2,param_2,uVar12,param_5,param_6,0,0);
    uVar1 = FUN_71ba240c(*puVar11,uVar1);
    *puVar11 = uVar1;
  }
  iVar3 = FUN_71ba2cf0(param_7,0);
  uVar2 = FUN_718d103c();
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  if (iVar3 == 0) {
    uVar1 = param_7;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (param_8 != 0) {
    iVar3 = param_8;
  }
  FUN_718fb9d0(uVar2,iVar3,uVar1,param_2,param_3,param_5,param_6,0,0);
  return;
}


// =========================================================================
// Function: FUN_71652a84
// Entry: 0x71652a84 | Size: 632 bytes
// =========================================================================

void FUN_71652a84(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  if (param_4 != 0) {
    uStack_30 = FUN_71ba240c();
    uVar1 = FUN_718d103c();
    uStack_34 = 0x3f800000;
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar2 = FUN_718c91a0(&uStack_40);
    FUN_718fb9d0(uVar1,uVar4,uVar5,&uStack_30,uVar2,param_5,param_6,0,0);
    uVar1 = FUN_71ba0b38(uVar3,uStack_30);
    uStack_30 = FUN_71ba0b38(uVar3,uVar1);
    uVar1 = FUN_718d103c();
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uStack_34 = 0x3f800000;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar4 = FUN_718c91a0(&uStack_40);
    FUN_718fb9d0(uVar1,uVar2,uVar5,&uStack_30,uVar4,param_5,param_6,0,0);
    uVar1 = uStack_2c;
    uStack_30 = FUN_71ba240c(uStack_30,uVar3);
    uStack_2c = FUN_71ba240c(uVar1,uVar3);
    uVar1 = FUN_718d103c();
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uStack_34 = 0x3f800000;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar4 = FUN_718c91a0(&uStack_40);
    FUN_718fb9d0(uVar1,uVar2,uVar5,&uStack_30,uVar4,param_5,param_6,0,0);
    uVar1 = FUN_71ba0b38(uVar3,uStack_2c);
    uStack_2c = FUN_71ba0b38(uVar3,uVar1);
    uVar1 = FUN_718d103c();
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    uStack_34 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar5 = FUN_718c91a0(&uStack_40);
    FUN_718fb9d0(uVar1,uVar2,uVar4,&uStack_30,uVar5,param_5,param_6,0,0);
    uStack_2c = FUN_71ba240c(uStack_2c,uVar3);
  }
  uVar3 = FUN_718d103c();
  FUN_718fb9d0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34),param_2,param_3
               ,param_5,param_6,0,0);
  return;
}


// =========================================================================
// Function: FUN_71652f7c
// Entry: 0x71652f7c | Size: 100 bytes
// =========================================================================

void FUN_71652f7c(int param_1,uint param_2,undefined4 param_3)

{
  if ((6 < param_2) || (*(char *)(param_1 + param_2 + 0x4c) = (char)param_3, DAT_711a3938 == 0)) {
    return;
  }
  if (param_2 == 5) {
    thunk_FUN_7156ad48(param_3,2);
    return;
  }
  if (param_2 != 4) {
    if (param_2 != 3) {
      return;
    }
    thunk_FUN_7156a9f4(param_3,2);
    return;
  }
  thunk_FUN_7156ab84(param_3,2);
  return;
}


// =========================================================================
// Function: FUN_7165306c
// Entry: 0x7165306c | Size: 24 bytes
// =========================================================================

undefined1 FUN_7165306c(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_2 < 7) {
    uVar1 = *(undefined1 *)(param_1 + param_2 + 0x4c);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_716532c8
// Entry: 0x716532c8 | Size: 36 bytes
// =========================================================================

int FUN_716532c8(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  byte abStack_48 [4];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  imp___aeabi_memclr4(param_1,0x60);
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e50);
  if (*pcVar1 == '\0') {
    puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e40);
    *puVar7 = 0x19d926f4;
    puVar7[1] = 0xac170446;
    *(undefined1 *)((int)puVar7 + 10) = 1;
    *(undefined2 *)(puVar7 + 2) = 0x47f8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461208,puVar7,&DAT_70b0e000);
    puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e50);
    *puVar8 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e40);
  if (pbVar2[10] != 0) {
    *pbVar2 = *pbVar2 ^ 0x99;
    pbVar2[1] = pbVar2[1] ^ 0x47;
    pbVar2[2] = pbVar2[2] ^ 0xad;
    pbVar2[3] = pbVar2[3] ^ 0x6b;
    pbVar2[10] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x23;
    pbVar2[5] = pbVar2[5] ^ 0x77;
    pbVar2[6] = pbVar2[6] ^ 0x7f;
    pbVar2[7] = pbVar2[7] ^ 199;
    pbVar2[8] = pbVar2[8] ^ 0x99;
    pbVar2[9] = pbVar2[9] ^ 0x47;
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e70);
  if (*pcVar1 == '\0') {
    puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e60);
    *(undefined2 *)(puVar7 + 2) = 0x199;
    *puVar7 = 0x34c621f8;
    puVar7[1] = 0xa910144a;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658cac,puVar7,&DAT_70b0e000);
    puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e70);
    *puVar8 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e60);
  if (pbVar3[9] != 0) {
    pbVar3[9] = 0;
    *pbVar3 = *pbVar3 ^ 0x99;
    pbVar3[1] = pbVar3[1] ^ 0x47;
    pbVar3[2] = pbVar3[2] ^ 0xad;
    pbVar3[3] = pbVar3[3] ^ 0x6b;
    pbVar3[4] = pbVar3[4] ^ 0x23;
    pbVar3[5] = pbVar3[5] ^ 0x77;
    pbVar3[6] = pbVar3[6] ^ 0x7f;
    pbVar3[7] = pbVar3[7] ^ 199;
    pbVar3[8] = pbVar3[8] ^ 0x99;
  }
  uVar4 = FUN_715ec410(pbVar2,pbVar3,1);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e80);
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ea0);
  iVar10 = 0x19;
  do {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e90);
    if (*pcVar1 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e80);
      *(undefined1 *)((int)puVar7 + 10) = 1;
      *puVar7 = 0xc3bdd482;
      puVar7[1] = 0xec6fae46;
      *(undefined2 *)(puVar7 + 2) = 0xb58e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151c278,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7e90);
      *puVar8 = 1;
    }
    if (pbVar2[10] != 0) {
      *pbVar2 = *pbVar2 ^ 0xef;
      pbVar2[1] = pbVar2[1] ^ 0xb5;
      pbVar2[2] = pbVar2[2] ^ 0xc9;
      pbVar2[3] = pbVar2[3] ^ 0xb1;
      pbVar2[10] = 0;
      pbVar2[4] = pbVar2[4] ^ 0x23;
      pbVar2[5] = pbVar2[5] ^ 0xdd;
      pbVar2[6] = pbVar2[6] ^ 7;
      pbVar2[7] = pbVar2[7] ^ 0x87;
      pbVar2[8] = pbVar2[8] ^ 0xef;
      pbVar2[9] = pbVar2[9] ^ 0xb5;
    }
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7eb0);
    if (*pcVar1 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ea0);
      *(undefined1 *)((int)puVar7 + 0xe) = 1;
      *puVar7 = 0xdcacc79f;
      puVar7[1] = 0xd86aa84a;
      puVar7[2] = 0xdfa6d686;
      *(undefined2 *)(puVar7 + 3) = 0xdd7c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658cd8,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7eb0);
      *puVar8 = 1;
    }
    if (pbVar3[0xe] != 0) {
      *pbVar3 = *pbVar3 ^ 0xef;
      pbVar3[1] = pbVar3[1] ^ 0xb5;
      pbVar3[2] = pbVar3[2] ^ 0xc9;
      pbVar3[3] = pbVar3[3] ^ 0xb1;
      pbVar3[0xe] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x23;
      pbVar3[5] = pbVar3[5] ^ 0xdd;
      pbVar3[6] = pbVar3[6] ^ 7;
      pbVar3[7] = pbVar3[7] ^ 0x87;
      pbVar3[8] = pbVar3[8] ^ 0xef;
      pbVar3[9] = pbVar3[9] ^ 0xb5;
      pbVar3[10] = pbVar3[10] ^ 0xc9;
      pbVar3[0xb] = pbVar3[0xb] ^ 0xb1;
      pbVar3[0xc] = pbVar3[0xc] ^ 0x23;
      pbVar3[0xd] = pbVar3[0xd] ^ 0xdd;
    }
    uVar5 = imp_strlen(pbVar3);
    if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_3c);
    }
    if (uVar5 < 0xb) {
      uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar5 << 1));
      uVar9 = (uint)&uStack_3c | 1;
      if (uVar5 != 0) goto LAB_71653674;
    }
    else {
      uVar9 = thunk_MwhHq((uVar5 | 7) + 1);
      uStack_3c = (uVar5 | 7) + 2;
      uStack_38 = uVar5;
      uStack_34 = uVar9;
LAB_71653674:
      imp___aeabi_memmove(uVar9,pbVar3,uVar5);
    }
    *(undefined1 *)(uVar9 + uVar5) = 0;
    thunk_JTLCYfEcbCeQVXSyFtQFASTx(abStack_48,iVar10 + -0x18);
    uVar9 = uStack_40;
    uVar5 = uStack_44;
    if ((abStack_48[0] & 1) == 0) {
      uVar5 = (uint)(abStack_48[0] >> 1);
      uVar9 = (uint)abStack_48 | 1;
    }
    puVar6 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                               (&uStack_3c,uVar9,uVar5);
    uStack_30 = *puVar6;
    uStack_2c = puVar6[1];
    uStack_28 = puVar6[2];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    uVar5 = uStack_28;
    if ((uStack_30 & 1) == 0) {
      uVar5 = (uint)&uStack_30 | 1;
    }
    uVar4 = FUN_715ec410(pbVar2,uVar5,1);
    *(undefined4 *)(param_1 + iVar10 * 4) = uVar4;
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if ((abStack_48[0] & 1) != 0) {
      thunk_qNQrlu(uStack_40);
    }
    if ((uStack_3c & 1) != 0) {
      thunk_qNQrlu(uStack_34);
    }
    iVar10 = iVar10 + 1;
    if (iVar10 == 0x1f) {
      pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ed0);
      if (*pcVar1 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ec0);
        *puVar7 = 0x7b4f225c;
        puVar7[1] = 0xaa01a0c4;
        *(undefined1 *)((int)puVar7 + 10) = 1;
        *(undefined2 *)(puVar7 + 2) = 0x4350;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714612dc,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ed0);
        *puVar8 = 1;
      }
      pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ec0);
      if (pbVar2[10] != 0) {
        *pbVar2 = *pbVar2 ^ 0x31;
        pbVar2[1] = pbVar2[1] ^ 0x43;
        pbVar2[2] = pbVar2[2] ^ 0x3b;
        pbVar2[3] = pbVar2[3] ^ 9;
        pbVar2[10] = 0;
        pbVar2[4] = pbVar2[4] ^ 0xa1;
        pbVar2[5] = pbVar2[5] ^ 0xd3;
        pbVar2[6] = pbVar2[6] ^ 0x69;
        pbVar2[7] = pbVar2[7] ^ 0xc1;
        pbVar2[8] = pbVar2[8] ^ 0x31;
        pbVar2[9] = pbVar2[9] ^ 0x43;
      }
      pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ef0);
      if (*pcVar1 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ee0);
        *puVar7 = 0x7b582a5c;
        puVar7[1] = 0xa2008cce;
        *(undefined1 *)((int)puVar7 + 0xb) = 1;
        *(undefined4 *)((int)puVar7 + 7) = 0x3b2d5ea2;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139e9ac,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ef0);
        *puVar8 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ee0);
      if (pbVar3[0xb] != 0) {
        *pbVar3 = *pbVar3 ^ 0x31;
        pbVar3[1] = pbVar3[1] ^ 0x43;
        pbVar3[2] = pbVar3[2] ^ 0x3b;
        pbVar3[3] = pbVar3[3] ^ 9;
        pbVar3[0xb] = 0;
        pbVar3[4] = pbVar3[4] ^ 0xa1;
        pbVar3[5] = pbVar3[5] ^ 0xd3;
        pbVar3[6] = pbVar3[6] ^ 0x69;
        pbVar3[7] = pbVar3[7] ^ 0xc1;
        pbVar3[8] = pbVar3[8] ^ 0x31;
        pbVar3[9] = pbVar3[9] ^ 0x43;
        pbVar3[10] = pbVar3[10] ^ 0x3b;
      }
      uVar4 = FUN_715ec410(pbVar2,pbVar3,1);
      *(undefined4 *)(param_1 + 0x7c) = uVar4;
      pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f10);
      if (*pcVar1 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f00);
        *puVar7 = 0x6d9bfe10;
        puVar7[1] = 0xa67dfa6a;
        *(undefined1 *)((int)puVar7 + 10) = 1;
        *(undefined2 *)(puVar7 + 2) = 0x9f1c;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517a7c,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f10);
        *puVar8 = 1;
      }
      pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f00);
      if (pbVar2[10] != 0) {
        *pbVar2 = *pbVar2 ^ 0x7d;
        pbVar2[1] = pbVar2[1] ^ 0x9f;
        pbVar2[2] = pbVar2[2] ^ 0xef;
        pbVar2[3] = pbVar2[3] ^ 0x1f;
        pbVar2[10] = 0;
        pbVar2[4] = pbVar2[4] ^ 0xf;
        pbVar2[5] = pbVar2[5] ^ 0x89;
        pbVar2[6] = pbVar2[6] ^ 0x15;
        pbVar2[7] = pbVar2[7] ^ 0xcd;
        pbVar2[8] = pbVar2[8] ^ 0x7d;
        pbVar2[9] = pbVar2[9] ^ 0x9f;
      }
      pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f30);
      if (*pcVar1 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f20);
        *puVar7 = 0x769cea10;
        puVar7[1] = 0xac79f96c;
        puVar7[2] = 0x7c86c004;
        *(undefined1 *)((int)puVar7 + 0xf) = 1;
        *(undefined4 *)((int)puVar7 + 0xb) = 0x15e7607c;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658d08,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f30);
        *puVar8 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f20);
      if (pbVar3[0xf] != 0) {
        *pbVar3 = *pbVar3 ^ 0x7d;
        pbVar3[1] = pbVar3[1] ^ 0x9f;
        pbVar3[2] = pbVar3[2] ^ 0xef;
        pbVar3[3] = pbVar3[3] ^ 0x1f;
        pbVar3[0xf] = 0;
        pbVar3[4] = pbVar3[4] ^ 0xf;
        pbVar3[5] = pbVar3[5] ^ 0x89;
        pbVar3[6] = pbVar3[6] ^ 0x15;
        pbVar3[7] = pbVar3[7] ^ 0xcd;
        pbVar3[8] = pbVar3[8] ^ 0x7d;
        pbVar3[9] = pbVar3[9] ^ 0x9f;
        pbVar3[10] = pbVar3[10] ^ 0xef;
        pbVar3[0xb] = pbVar3[0xb] ^ 0x1f;
        pbVar3[0xc] = pbVar3[0xc] ^ 0xf;
        pbVar3[0xd] = pbVar3[0xd] ^ 0x89;
        pbVar3[0xe] = pbVar3[0xe] ^ 0x15;
      }
      uVar4 = FUN_715ec410(pbVar2,pbVar3,1);
      *(undefined4 *)(param_1 + 0x80) = uVar4;
      pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f50);
      if (*pcVar1 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f40);
        *puVar7 = 0x9d73862;
        puVar7[1] = 0x43dbef0;
        *(undefined1 *)((int)puVar7 + 10) = 1;
        *(undefined2 *)(puVar7 + 2) = 0x596e;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658d38,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f50);
        *puVar8 = 1;
      }
      pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f40);
      if (pbVar2[10] != 0) {
        *pbVar2 = *pbVar2 ^ 0xf;
        pbVar2[1] = pbVar2[1] ^ 0x59;
        pbVar2[2] = pbVar2[2] ^ 0xa3;
        pbVar2[3] = pbVar2[3] ^ 0x7b;
        pbVar2[10] = 0;
        pbVar2[4] = pbVar2[4] ^ 0x95;
        pbVar2[5] = pbVar2[5] ^ 0xcd;
        pbVar2[6] = pbVar2[6] ^ 0x55;
        pbVar2[7] = pbVar2[7] ^ 0x6f;
        pbVar2[8] = pbVar2[8] ^ 0xf;
        pbVar2[9] = pbVar2[9] ^ 0x59;
      }
      pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f70);
      if (*pcVar1 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f60);
        *puVar7 = 0x12d02c62;
        puVar7[1] = 0x1b20a0f6;
        puVar7[2] = 0x18ca066a;
        *(undefined1 *)((int)puVar7 + 0xf) = 1;
        *(undefined4 *)((int)puVar7 + 0xb) = 0x55a3fa18;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658d64,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f70);
        *puVar8 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f60);
      if (pbVar3[0xf] != 0) {
        *pbVar3 = *pbVar3 ^ 0xf;
        pbVar3[1] = pbVar3[1] ^ 0x59;
        pbVar3[2] = pbVar3[2] ^ 0xa3;
        pbVar3[3] = pbVar3[3] ^ 0x7b;
        pbVar3[0xf] = 0;
        pbVar3[4] = pbVar3[4] ^ 0x95;
        pbVar3[5] = pbVar3[5] ^ 0xcd;
        pbVar3[6] = pbVar3[6] ^ 0x55;
        pbVar3[7] = pbVar3[7] ^ 0x6f;
        pbVar3[8] = pbVar3[8] ^ 0xf;
        pbVar3[9] = pbVar3[9] ^ 0x59;
        pbVar3[10] = pbVar3[10] ^ 0xa3;
        pbVar3[0xb] = pbVar3[0xb] ^ 0x7b;
        pbVar3[0xc] = pbVar3[0xc] ^ 0x95;
        pbVar3[0xd] = pbVar3[0xd] ^ 0xcd;
        pbVar3[0xe] = pbVar3[0xe] ^ 0x55;
      }
      uVar4 = FUN_715ec410(pbVar2,pbVar3,1);
      *(undefined4 *)(param_1 + 0x84) = uVar4;
      *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      imp___aeabi_memclr4(param_1 + 0x4ef8,0x1f60);
      iVar10 = 0;
      do {
        *(undefined1 *)((param_1 + 0x6e58) - iVar10) = 0;
        iVar10 = iVar10 + -1;
      } while (iVar10 != -0x3ec);
      return param_1;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_71654f10
// Entry: 0x71654f10 | Size: 48 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71654f10(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  int *piVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int unaff_r10;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int iStack_f4;
  undefined1 auStack_dc [64];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  iVar5 = FUN_7163d6b4();
  if (iVar5 == 0) goto LAB_716550c0;
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f90);
  if (*pcVar6 == '\0') {
    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f80);
    *(undefined1 *)((int)puVar14 + 0x17) = 1;
    uVar10 = DAT_700847b0;
    uVar9 = DAT_700847ac;
    uVar20 = DAT_700847a8;
    uVar11 = DAT_700847a4;
    *puVar14 = DAT_700847a0;
    puVar14[1] = uVar11;
    puVar14[2] = uVar20;
    puVar14[3] = uVar9;
    puVar14[4] = uVar10;
    uVar3 = DAT_700847b6;
    *(undefined2 *)(puVar14 + 5) = DAT_700847b4;
    *(undefined1 *)((int)puVar14 + 0x16) = uVar3;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658d94,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f90);
    *puVar15 = 1;
  }
  iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7f80);
  if (*(char *)(iVar5 + 0x17) != '\0') {
    uVar7 = 0;
    uVar23 = 0;
    do {
      iVar21 = (uVar7 & 7) * 8;
      uVar22 = iVar21 - 0x20;
      bVar4 = (byte)(0x9f490ddb >> iVar21) | (byte)(-0x20504abf << ((uVar7 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar22) {
        bVar4 = (byte)(0xdfafb541 >> (uVar22 & 0xff));
      }
      *(byte *)(iVar5 + uVar7) = *(byte *)(iVar5 + uVar7) ^ bVar4;
      bVar26 = 0xfffffffe < uVar7;
      bVar25 = uVar23 == 0;
      bVar1 = (0x15 < uVar7) <= uVar23;
      uVar7 = uVar7 + 1;
      uVar23 = uVar23 + bVar26;
    } while (bVar25 && bVar1);
    *(undefined1 *)(iVar5 + 0x17) = 0;
  }
  uVar7 = imp_strlen(iVar5);
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_90);
  }
  if (uVar7 < 0xb) {
    uVar23 = (uint)&uStack_90 | 1;
    uStack_90 = CONCAT31(uStack_90._1_3_,(char)(uVar7 << 1));
    if (uVar7 != 0) goto LAB_71655044;
  }
  else {
    uVar23 = thunk_MwhHq((uVar7 | 7) + 1);
    uStack_90 = (uVar7 | 7) + 2;
    uStack_8c = uVar7;
    uStack_88 = uVar23;
LAB_71655044:
    imp___aeabi_memmove(uVar23,iVar5,uVar7);
  }
  *(undefined1 *)(uVar23 + uVar7) = 0;
  iVar5 = FUN_717c5e7c(&uStack_90);
  if ((uStack_90 & 1) != 0) {
    thunk_qNQrlu(uStack_88);
  }
  if ((iVar5 == 0) && (FUN_7136cdfc(&uStack_9c), DAT_711f6d58 != 0)) {
    bVar25 = *(char *)(DAT_711f6d58 + 0x350) != '\0';
    cVar2 = '\0';
    if (bVar25) {
      cVar2 = DAT_700c7e3c;
    }
    if (bVar25 && cVar2 != '\0') {
      iVar21 = *(int *)(DAT_711f6d58 + 0xac);
      piVar17 = (int *)(DAT_711a3938 + 0x1389c);
      iVar5 = *piVar17;
      if (iVar5 == 0) {
        iVar5 = FUN_713c301c(0);
        if (iVar5 == 0) {
          iVar5 = *piVar17;
        }
        else {
          thunk_MwhHq(0x3a0);
          iVar5 = FUN_715ba834();
          *piVar17 = iVar5;
        }
      }
      thunk_FUN_715600f0(iVar5,auStack_dc);
      iVar5 = param_1 + 0x6e58;
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fa0);
      iVar24 = 0;
      uVar7 = 0;
      iStack_f4 = 0;
      do {
        if (*(char *)(iVar21 + 0x3eec + uVar7) != '\0') {
          pcVar6 = *(char **)(iVar21 + 0x1f8c + uVar7 * 4);
          if (pcVar6 != (char *)0x0) {
            unaff_r10 = *(int *)(pcVar6 + 0x10);
          }
          if (pcVar6 != (char *)0x0 && unaff_r10 != 0) {
            cVar2 = '\0';
            if (pcVar6[0x28] != '\0') {
              cVar2 = *pcVar6;
            }
            if (pcVar6[0x28] != '\0' && cVar2 != '\0') {
              if (*(char *)(iVar5 + uVar7) != '\0') {
                uVar11 = thunk_FUN_71561220(unaff_r10);
                iVar12 = FUN_71ba2d30(uVar11,*(undefined4 *)(param_1 + 0x1038 + iVar24));
                if (iVar12 != 0) {
                  iVar12 = thunk_FUN_715609f0(unaff_r10);
                  if (iVar12 == 0) goto LAB_7165525c;
                  uStack_9c = 0;
                  uStack_98 = 0;
                  uStack_94 = 0;
                  FUN_715c8990(unaff_r10,8,&uStack_9c);
                  uVar11 = thunk_FUN_71561220(unaff_r10);
                  FUN_71655eac(param_1,uVar7 & 0xffff,&uStack_9c,uVar11);
                }
                iVar12 = FUN_71886108();
                puVar18 = (uint *)(iVar5 + iVar24 + -0x3ec0);
                if (*puVar18 <= (uint)(iVar12 - *(int *)(iVar5 + iVar24 + -0x2f10))) {
                  if (*(char *)(iVar5 + uVar7) != '\0') {
                    *puVar18 = 0;
                  }
                  *(undefined1 *)(iVar5 + uVar7) = 0;
                }
              }
              uVar11 = thunk_FUN_71561220(unaff_r10);
              iVar12 = FUN_71ba2d30(uVar11,*(undefined4 *)(DAT_711f6d58 + 0x410));
              if ((iVar12 != 0) && (iVar12 = thunk_FUN_715609f0(unaff_r10), iVar12 != 0)) {
                iVar19 = 0;
                uStack_9c = 0;
                uStack_98 = 0;
                uStack_94 = 0;
                FUN_715c8990(unaff_r10,8,&uStack_9c);
                iVar12 = FUN_7151dc0c();
                if (*(char *)(DAT_711f6d58 + 0x2b8) != '\0') {
                  uVar27 = FUN_71ba1638(uStack_98);
                  uVar28 = FUN_71ba1638(uStack_94);
                  uVar11 = *(undefined4 *)(iVar12 + 0x10);
                  uVar20 = *(undefined4 *)(iVar12 + 0x14);
                  uVar29 = FUN_71ba1638(*(undefined4 *)(iVar12 + 0xc));
                  uVar30 = FUN_71ba1638(uVar11);
                  uVar31 = FUN_71ba1638(uVar20);
                  uVar32 = FUN_71ba1638(uStack_9c);
                  uVar11 = (undefined4)((ulonglong)uVar32 >> 0x20);
                  iVar19 = FUN_715d33c8(&DAT_7008478c,uVar11,(int)uVar32,uVar11,uVar27,uVar28,uVar29
                                        ,uVar30,uVar31,1,0,0,1,0);
                }
                if (((iVar19 == 0 & *(byte *)(DAT_711f6d58 + 0x2b8)) == 0) && (iStack_f4 < 0xf)) {
                  pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fb0);
                  if (*pcVar13 == '\0') {
                    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fa0);
                    *puVar14 = 0x47698ece;
                    puVar14[1] = 0xdfde19ea;
                    *(undefined1 *)(puVar14 + 2) = 1;
                    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71658dcc,puVar14,&DAT_70b0e000);
                    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fb0);
                    *puVar15 = 1;
                  }
                  if (pbVar8[8] != 0) {
                    pbVar8[8] = 0;
                    *pbVar8 = *pbVar8 ^ 0xeb;
                    pbVar8[1] = pbVar8[1] ^ 0xfd;
                    pbVar8[2] = pbVar8[2] ^ 0x49;
                    pbVar8[3] = pbVar8[3] ^ 0x6f;
                    pbVar8[4] = pbVar8[4] ^ 0xcf;
                    pbVar8[5] = pbVar8[5] ^ 0x7d;
                    pbVar8[6] = pbVar8[6] ^ 0xf7;
                    pbVar8[7] = pbVar8[7] ^ 0xdf;
                  }
                  FUN_71796884(iVar21,uVar7 & 0xffff);
                  FUN_71656474(&uStack_90);
                  uVar11 = thunk_FUN_717a0c74(pcVar6);
                  uVar20 = thunk_FUN_71561220(unaff_r10);
                  uVar16 = *(undefined4 *)(pcVar6 + 4);
                  uVar9 = *(undefined4 *)(pcVar6 + 8);
                  cVar2 = pcVar6[0x1d];
                  uVar10 = FUN_714d2528(uVar7 & 0xffff);
                  FUN_716564dc(param_1,&uStack_9c,&uStack_90,uVar11,uVar20,uVar16,uVar9,cVar2,uVar10
                               ,0,*(undefined1 *)(unaff_r10 + 0x178),pcVar6[2]);
                  iStack_f4 = iStack_f4 + 1;
                }
              }
            }
          }
        }
LAB_7165525c:
        uVar7 = uVar7 + 1;
        iVar24 = iVar24 + 4;
      } while (uVar7 != 0x3ec);
    }
  }
LAB_716550c0:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71655eac
// Entry: 0x71655eac | Size: 660 bytes
// =========================================================================

void FUN_71655eac(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 auStack_44 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_7136cdfc(&uStack_30);
  uStack_30 = *param_3;
  uStack_2c = param_3[1];
  uVar11 = param_3[2];
  uVar3 = FUN_71ba21e8(param_4,0x3d8a3d71);
  uVar3 = FUN_71ba0b38(uVar3,0x3ee66666);
  iVar12 = param_1 + param_2 * 4;
  uVar4 = FUN_71ba1b94(*(undefined4 *)(iVar12 + 0x7244));
  uVar5 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x30),0x3eb33333);
  uVar4 = FUN_71ba21e8(uVar4,uVar5);
  uVar3 = FUN_71ba0b38(uVar4,uVar3);
  uStack_28 = FUN_71ba0b38(uVar11,uVar3);
  FUN_7136cdfc(&uStack_3c);
  FUN_7135950c(&uStack_30,&uStack_3c,0,0,0,0);
  iVar6 = FUN_71ba2d10(uStack_34,0x3f800000);
  if (iVar6 == 0) {
    puVar10 = (undefined4 *)(iVar12 + 0x1fe8);
    uVar3 = *puVar10;
    iVar6 = FUN_71ba2d10(uVar3,0);
    if (iVar6 != 0) {
      pcVar9 = *(char **)(param_1 + 0x5ea8 + param_2 * 4);
      pcVar2 = pcVar9;
      do {
        while( true ) {
          pcVar13 = pcVar2 + 1;
          cVar1 = *pcVar2;
          if (cVar1 != '\n') break;
          FUN_718cc4ac(auStack_44,pcVar9,pcVar2 + -1,0,0xbf800000);
          uVar4 = auStack_44[0];
          uVar3 = *puVar10;
          iVar6 = FUN_71ba2d70(auStack_44[0],uVar3);
          pcVar9 = pcVar13;
          pcVar2 = pcVar13;
          if (iVar6 != 0) {
            *puVar10 = uVar4;
            uVar3 = uVar4;
          }
        }
        pcVar2 = pcVar13;
      } while (cVar1 != '\0');
      iVar6 = FUN_71ba2d10(uVar3,0);
      if (iVar6 != 0) {
        FUN_718cc4ac(auStack_44,*(undefined4 *)(param_1 + 0x5ea8 + param_2 * 4),0,0,0xbf800000);
        *puVar10 = auStack_44[0];
        uVar3 = auStack_44[0];
      }
    }
    uVar7 = *(uint *)(iVar12 + 0x88);
    uVar4 = FUN_71ba1e0c(uVar7 >> 8 & 0xff);
    uVar4 = FUN_71ba21e8(uVar4,0x3b808081);
    uVar5 = FUN_71ba1e0c(uVar7 & 0xff);
    uVar5 = FUN_71ba21e8(uVar5,0x3b808081);
    uVar3 = FUN_71ba21e8(uVar3,0xbf000000);
    uVar3 = FUN_71ba0b38(uStack_3c,uVar3);
    uVar11 = FUN_71ba1e0c(uVar7 >> 0x18);
    uVar11 = FUN_71ba21e8(uVar11,0x3b808081);
    uVar8 = FUN_71ba1e0c(uVar7 >> 0x10 & 0xff);
    uVar8 = FUN_71ba21e8(uVar8,0x3b808081);
    FUN_71884a34(uVar3,uStack_38,uVar11,uVar8,uVar4,uVar5,*(undefined4 *)(iVar12 + 0x4ef8),0,1);
  }
  return;
}


// =========================================================================
// Function: FUN_71656474
// Entry: 0x71656474 | Size: 52 bytes
// =========================================================================

void FUN_71656474(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,100,0,100,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_716564dc
// Entry: 0x716564dc | Size: 3476 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_716564dc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
                 undefined4 param_10,int param_11,int param_12)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_158 [300];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  FUN_7136cdfc(&uStack_164);
  uStack_164 = *param_2;
  uStack_160 = param_2[1];
  uVar2 = FUN_71ba21e8(param_5,0x3d428f5c);
  uVar2 = FUN_71ba0b38(uVar2,0x3e800000);
  uStack_15c = FUN_71ba0b38(uVar2,param_2[2]);
  FUN_7136cdfc(&uStack_170);
  bVar1 = false;
  FUN_7135950c(&uStack_164,&uStack_170,0,0,0,0);
  iVar3 = FUN_71ba2d10(uStack_168,0x3f800000);
  if (iVar3 != 0) goto LAB_716570fc;
  FUN_718842a8(auStack_158,param_3,0);
  uVar2 = uStack_170;
  if ((param_11 - 1U < 6) && (bVar1 = false, param_1[param_11 + 0x18] != 0)) {
    bVar1 = true;
  }
  uStack_174 = uStack_16c;
  FUN_718cc4ac(&uStack_180,auStack_158,0,0,0xbf800000);
  uVar4 = FUN_71ba21e8(uStack_180,0xbf000000);
  uVar2 = FUN_71ba0b38(uVar2,uVar4);
  iVar3 = DAT_711e9ee4;
  uStack_178 = uVar2;
  if (bVar1) {
    uVar4 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0xbfc00000);
    uVar4 = FUN_71ba21e8(uVar4,0x3f000000);
    uStack_178 = FUN_71ba0b38(uVar2,uVar4);
    FUN_71652a84(iVar3,&uStack_178,
                 (param_4 >> 8 & 0xff) << 0x10 | 0xff000000 | (param_4 >> 0x10 & 0xff) << 8 |
                 param_4 >> 0x18,1,auStack_158,0);
    uVar2 = FUN_71ba0b38(uStack_178,uStack_180);
    uVar21 = *(undefined4 *)(DAT_711e9ee4 + 0x34);
    uVar4 = FUN_71ba21e8(uVar21,0x3e4ccccd);
    uVar2 = FUN_71ba0b38(uVar4,uVar2);
    uStack_1ac = uVar2;
    uVar4 = FUN_71ba21e8(uVar21,0x3fa66666);
    uVar21 = FUN_71ba240c(uVar4,uStack_17c);
    uVar21 = FUN_71ba21e8(uVar21,0x3f000000);
    uStack_1a8 = FUN_71ba240c(uStack_174,uVar21);
    uStack_1b4 = FUN_71ba0b38(uVar4,uStack_1a8);
    uStack_1b8 = FUN_71ba0b38(uVar4,uVar2);
    uVar2 = FUN_718cf92c();
    uStack_18c = 0x3f800000;
    uStack_190 = 0x3f800000;
    uStack_184 = 0;
    uStack_188 = 0;
    FUN_718fd1c0(uVar2,*(undefined4 *)param_1[param_11 + 0x18],&uStack_1ac,&uStack_1b8,&uStack_188,
                 &uStack_190,0xffffffff);
  }
  else {
    FUN_71652a84(DAT_711e9ee4,&uStack_178,
                 (param_4 >> 8 & 0xff) << 0x10 | 0xff000000 | (param_4 >> 0x10 & 0xff) << 8 |
                 param_4 >> 0x18,1,auStack_158,0);
  }
  iVar3 = FUN_71ba2d10(param_6,0);
  if (iVar3 != 0) goto LAB_716570fc;
  puVar23 = param_1 + 1;
  FUN_71ba17bc(uStack_16c);
  uVar2 = FUN_71ba1b94();
  param_1[0x13] = 0x3f800000;
  param_1[0x12] = 0x3da0a0a1;
  param_1[0x11] = 0x3d30b0b1;
  puVar20 = param_1 + 0x10;
  *puVar20 = 0x3e969697;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0x3e20a0a1;
  param_1[0xd] = 0x3e088889;
  puVar19 = param_1 + 0xc;
  *puVar19 = 0x3f39b9ba;
  FUN_71ba17bc(uStack_170);
  uVar4 = FUN_71ba1b94();
  uVar24 = *(undefined4 *)(DAT_711e9ee4 + 0x30);
  uStack_170 = uVar4;
  uVar21 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x2c),0x42700000);
  uVar5 = FUN_71ba21e8(uVar21,0x3f000000);
  uVar6 = FUN_71ba0b38(uVar24,uVar5);
  uVar7 = FUN_71ba240c(uVar4,uVar6);
  *param_1 = uVar7;
  iVar3 = DAT_711e9ee4;
  uVar8 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3f99999a);
  uVar8 = FUN_71ba0b38(uVar8,uVar2);
  *puVar23 = uVar8;
  uVar9 = FUN_71ba21e8(uVar24,0x41200000);
  uVar6 = FUN_71ba0b38(uVar6,uVar4);
  puVar26 = param_1 + 2;
  *puVar26 = uVar6;
  uVar10 = FUN_71ba21e8(*(undefined4 *)(iVar3 + 0x34),0x3f99999a);
  uVar2 = FUN_71ba0b38(uVar10,uVar2);
  uVar2 = FUN_71ba0b38(uVar9,uVar2);
  uVar9 = FUN_71ba240c(uVar2,uVar24);
  puVar25 = param_1 + 0xb;
  *puVar25 = uVar9;
  iVar3 = FUN_71ba2d70(param_6,0x42c80000);
  uVar21 = FUN_71ba13e0(uVar21,0x42c80000);
  if (iVar3 != 0) {
    param_6 = 0x42c80000;
  }
  uVar10 = FUN_71ba21e8(param_6);
  uVar10 = FUN_71ba240c(uVar10,uVar5);
  uVar4 = FUN_71ba0b38(uVar10,uVar4);
  puVar17 = param_1 + 10;
  *puVar17 = uVar4;
  puVar11 = param_1 + 7;
  *puVar11 = uVar9;
  puVar12 = param_1 + 3;
  *puVar12 = uVar2;
  uVar4 = FUN_71ba0b38(uVar24,uVar8);
  puVar13 = param_1 + 9;
  *puVar13 = uVar4;
  uVar7 = FUN_71ba0b38(uVar24,uVar7);
  puVar14 = param_1 + 8;
  *puVar14 = uVar7;
  uVar6 = FUN_71ba240c(uVar6,uVar24);
  puVar18 = param_1 + 6;
  *puVar18 = uVar6;
  puVar15 = param_1 + 4;
  *puVar15 = uVar7;
  puVar22 = param_1 + 5;
  *puVar22 = uVar4;
  iVar3 = FUN_71ba2d70(param_7,0);
  iVar16 = FUN_71ba2d70(param_7,0);
  if (iVar3 != 0) {
    uVar2 = FUN_71ba0b38(uVar2,0x41500000);
    *puVar12 = uVar2;
    uVar2 = FUN_71ba0b38(uVar8,0x41500000);
    *puVar23 = uVar2;
    uVar2 = FUN_71ba0b38(uVar4,0x41500000);
    *puVar22 = uVar2;
    uVar4 = FUN_71ba0b38(uVar9,0x41500000);
    *puVar25 = uVar4;
    *puVar11 = uVar4;
    *puVar13 = uVar2;
  }
  uVar2 = FUN_718cf92c();
  uVar4 = FUN_718c91a0();
  FUN_718fb1d0(uVar2,param_1,puVar26,uVar4,0,0xf);
  uVar2 = FUN_718cf92c();
  uVar4 = FUN_718c91a0(puVar20);
  FUN_718fb1d0(uVar2,puVar15,puVar18,uVar4,0,0xf);
  uVar2 = FUN_718cf92c();
  uVar4 = FUN_718c91a0();
  FUN_718fb1d0(uVar2,puVar14,puVar17,uVar4,0,0xf);
  if (iVar16 != 0) {
    *puVar19 = 0x3f48c8ca;
    param_1[0xd] = 0x3f48c8ca;
    param_1[0xe] = 0x3f48c8ca;
    *puVar20 = 0x3e20a0a1;
    param_1[0xf] = 0x3f800000;
    param_1[0x11] = 0x3e20a0a1;
    param_1[0x12] = 0x3e20a0a1;
    uVar2 = FUN_71ba0b38(*puVar23,0xc1500000);
    *puVar23 = uVar2;
    uVar2 = FUN_71ba0b38(*puVar12,0xc1500000);
    *puVar12 = uVar2;
    uVar2 = FUN_71ba0b38(*puVar22,0xc1500000);
    *puVar22 = uVar2;
    uVar2 = FUN_71ba0b38(*puVar11,0xc1500000);
    *puVar11 = uVar2;
    uVar2 = FUN_71ba0b38(*puVar13,0xc1500000);
    *puVar13 = uVar2;
    uVar2 = FUN_71ba0b38(*puVar25,0xc1500000);
    *puVar25 = uVar2;
    param_1[0x13] = 0x3f800000;
    iVar3 = FUN_71ba2d70(param_7,0x42c80000);
    if (iVar3 != 0) {
      param_7 = 0x42c80000;
    }
    uVar2 = FUN_71ba21e8(param_7,uVar21);
    uVar2 = FUN_71ba240c(uVar2,uVar5);
    uVar2 = FUN_71ba0b38(uVar2,uStack_170);
    *puVar17 = uVar2;
    uVar2 = FUN_718cf92c();
    uVar4 = FUN_718c91a0(param_1 + 0x14);
    FUN_718fb1d0(uVar2,param_1,puVar26,uVar4,0,0xf);
    uVar2 = FUN_718cf92c();
    uVar4 = FUN_718c91a0(puVar20);
    FUN_718fb1d0(uVar2,puVar15,puVar18,uVar4,0,0xf);
    uVar2 = FUN_718cf92c();
    uVar4 = FUN_718c91a0(puVar19);
    FUN_718fb1d0(uVar2,puVar14,puVar17,uVar4,0,0xf);
  }
  if (param_8 == 0) {
    if (param_12 == 2) {
      iVar3 = 0;
      if (param_1[0x21] != 0) {
        uVar5 = *puVar23;
        uVar21 = *(undefined4 *)(DAT_711e9ee4 + 0x34);
        uStack_1a8 = uVar5;
        uVar2 = FUN_71ba21e8(uVar21,0xbfb33333);
        uVar2 = FUN_71ba0b38(*param_1,uVar2);
        uStack_1ac = uVar2;
        uVar4 = FUN_71ba21e8(uVar21,0x3fa66666);
        uStack_1b4 = FUN_71ba0b38(uVar4,uVar5);
        uVar4 = FUN_71ba21e8(uVar21,0x3f99999a);
        uStack_1b8 = FUN_71ba0b38(uVar4,uVar2);
        uVar2 = FUN_718cf92c();
        puVar19 = (undefined4 *)param_1[0x21];
        goto LAB_716570ac;
      }
    }
    else {
      iVar3 = 0;
      if ((param_12 == 1) && (iVar3 = 0, param_1[0x20] != 0)) {
        uVar5 = *puVar23;
        uVar21 = *(undefined4 *)(DAT_711e9ee4 + 0x34);
        uStack_1a8 = uVar5;
        uVar2 = FUN_71ba21e8(uVar21,0xbfb33333);
        uVar2 = FUN_71ba0b38(*param_1,uVar2);
        uStack_1ac = uVar2;
        uVar4 = FUN_71ba21e8(uVar21,0x3fa66666);
        uStack_1b4 = FUN_71ba0b38(uVar4,uVar5);
        uVar4 = FUN_71ba21e8(uVar21,0x3f99999a);
        uStack_1b8 = FUN_71ba0b38(uVar4,uVar2);
        uVar2 = FUN_718cf92c();
        puVar19 = (undefined4 *)param_1[0x20];
LAB_716570ac:
        uVar4 = *puVar19;
        uStack_184 = 0;
        puVar26 = &uStack_190;
        uStack_188 = 0;
        uStack_18c = 0x3f800000;
        puVar23 = &uStack_188;
        uStack_190 = 0x3f800000;
        puVar20 = &uStack_1b8;
        puVar19 = &uStack_1ac;
        goto LAB_716570e4;
      }
    }
  }
  else {
    uVar21 = *puVar23;
    uVar4 = *(undefined4 *)(DAT_711e9ee4 + 0x34);
    uStack_1a8 = uVar21;
    uVar2 = FUN_71ba21e8(uVar4,0xbfb33333);
    uVar2 = FUN_71ba0b38(*param_1,uVar2);
    uStack_1ac = uVar2;
    uVar4 = FUN_71ba21e8(uVar4,0x3fa66666);
    uStack_1b4 = FUN_71ba0b38(uVar4,uVar21);
    uStack_1b8 = FUN_71ba0b38(uVar4,uVar2);
    uVar2 = FUN_718cf92c();
    uStack_184 = 0;
    uStack_188 = 0;
    uStack_18c = 0x3f800000;
    uStack_190 = 0x3f800000;
    iVar3 = FUN_718fd1c0(uVar2,*(undefined4 *)param_1[0x18],&uStack_1ac,&uStack_1b8,&uStack_188,
                         &uStack_190,0xffffffff);
    if (param_12 == 2) {
      iVar3 = 0;
      if (param_1[0x21] != 0) {
        uVar5 = *puVar23;
        uVar21 = *(undefined4 *)(DAT_711e9ee4 + 0x34);
        uStack_184 = uVar5;
        uVar2 = FUN_71ba21e8(uVar21,0xc039999a);
        uVar2 = FUN_71ba0b38(*param_1,uVar2);
        uStack_188 = uVar2;
        uVar4 = FUN_71ba21e8(uVar21,0x3fa66666);
        uStack_18c = FUN_71ba0b38(uVar4,uVar5);
        uVar4 = FUN_71ba21e8(uVar21,0x3f99999a);
        uStack_190 = FUN_71ba0b38(uVar4,uVar2);
        uVar2 = FUN_718cf92c();
        puVar19 = (undefined4 *)param_1[0x21];
        goto LAB_71656fe4;
      }
    }
    else if ((param_12 == 1) && (iVar3 = 0, param_1[0x20] != 0)) {
      uVar5 = *puVar23;
      uVar21 = *(undefined4 *)(DAT_711e9ee4 + 0x34);
      uStack_184 = uVar5;
      uVar2 = FUN_71ba21e8(uVar21,0xc039999a);
      uVar2 = FUN_71ba0b38(*param_1,uVar2);
      uStack_188 = uVar2;
      uVar4 = FUN_71ba21e8(uVar21,0x3fa66666);
      uStack_18c = FUN_71ba0b38(uVar4,uVar5);
      uVar4 = FUN_71ba21e8(uVar21,0x3f99999a);
      uStack_190 = FUN_71ba0b38(uVar4,uVar2);
      uVar2 = FUN_718cf92c();
      puVar19 = (undefined4 *)param_1[0x20];
LAB_71656fe4:
      uVar4 = *puVar19;
      uStack_194 = 0;
      puVar26 = &uStack_1a0;
      uStack_198 = 0;
      uStack_19c = 0x3f800000;
      puVar23 = &uStack_198;
      uStack_1a0 = 0x3f800000;
      puVar20 = &uStack_190;
      puVar19 = &uStack_188;
LAB_716570e4:
      iVar3 = FUN_718fd1c0(uVar2,uVar4,puVar19,puVar20,puVar23,puVar26,0xffffffff);
    }
  }
  if (param_9 != 0) {
    iVar3 = param_1[0x1f];
  }
  if (param_9 != 0 && iVar3 != 0) {
    FUN_7136cdfc(&uStack_1ac);
    uStack_1a8 = param_2[1];
    uVar2 = FUN_71ba0b38(param_2[2],0x3f266666);
    uVar4 = FUN_71ba21e8(param_5,0x3d428f5c);
    uStack_1a4 = FUN_71ba0b38(uVar4,uVar2);
    uStack_1ac = *param_2;
    FUN_7136cdfc(&uStack_1b8);
    FUN_7135950c(&uStack_1ac,&uStack_1b8,0,0,0,0);
    iVar3 = FUN_71ba2d50(uStack_1b0,0x3f800000);
    uVar2 = uStack_1b4;
    if (iVar3 != 0) {
      uStack_184 = uStack_1b4;
      uVar21 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x34),0x3fa66666);
      uVar5 = FUN_71ba21e8(uVar21,0x3f000000);
      uVar4 = uStack_1b8;
      uStack_188 = FUN_71ba240c(uStack_1b8,uVar5);
      uStack_18c = FUN_71ba0b38(uVar21,uVar2);
      uStack_190 = FUN_71ba0b38(uVar4,uVar5);
      uVar2 = FUN_718cf92c();
      uStack_194 = 0;
      uStack_198 = 0;
      uStack_19c = 0x3f800000;
      uStack_1a0 = 0x3f800000;
      FUN_718fd1c0(uVar2,*(undefined4 *)param_1[0x1f],&uStack_188,&uStack_190,&uStack_198,
                   &uStack_1a0,0xffffffff);
    }
  }
LAB_716570fc:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716582cc
// Entry: 0x716582cc | Size: 52 bytes
// =========================================================================

void FUN_716582cc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1 + 0x5ea8;
  iVar8 = param_1 + 0x4ef8;
  iVar5 = param_1 + 0x6e58;
  if (*(char *)(iVar5 + param_2) != '\0') {
    iVar4 = param_1 + param_2 * 4;
    iVar6 = 0;
    *(undefined1 *)(iVar5 + param_2) = 0;
    *(undefined4 *)(iVar4 + 0x1038) = param_5;
    *(undefined4 *)(iVar4 + 0x2f98) = param_6;
    *(undefined4 *)(iVar4 + 0x88) = param_4;
    uVar1 = FUN_71886108();
    *(undefined4 *)(iVar4 + 0x3f48) = uVar1;
    *(undefined1 *)(iVar5 + param_2) = 1;
    *(undefined4 *)(iVar4 + 0x1fe8) = 0xbf800000;
    FUN_718842a8(*(undefined4 *)(iVar8 + param_2 * 4),param_3,0);
    FUN_718842a8(*(undefined4 *)(iVar7 + param_2 * 4),param_3,0);
    FUN_7188461c(*(undefined4 *)(iVar8 + param_2 * 4),0x400);
    FUN_7188461c(*(undefined4 *)(iVar7 + param_2 * 4),0x400);
    FUN_7188514c(*(undefined4 *)(iVar7 + param_2 * 4));
    pcVar3 = *(char **)(iVar7 + param_2 * 4);
    *(undefined4 *)(param_1 + 0x7244 + param_2 * 4) = 0;
    do {
      if (*pcVar3 == '\n') {
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 0x7244 + param_2 * 4) = iVar6;
      }
      else if (*pcVar3 == '\0') {
        return;
      }
      pcVar3 = pcVar3 + 1;
    } while( true );
  }
  iVar4 = param_1 + param_2 * 4;
  *(undefined4 *)(iVar4 + 0x1038) = param_5;
  *(undefined4 *)(iVar4 + 0x2f98) = param_6;
  *(undefined4 *)(iVar4 + 0x88) = param_4;
  uVar1 = FUN_71886108();
  *(undefined4 *)(iVar4 + 0x3f48) = uVar1;
  *(undefined1 *)(iVar5 + param_2) = 1;
  *(undefined4 *)(iVar4 + 0x1fe8) = 0xbf800000;
  uVar1 = thunk__IBDl(0x400);
  *(undefined4 *)(iVar8 + param_2 * 4) = uVar1;
  uVar2 = thunk__IBDl(0x400);
  *(undefined4 *)(iVar7 + param_2 * 4) = uVar2;
  iVar5 = 0;
  FUN_718842a8(uVar1,param_3,0);
  FUN_718842a8(*(undefined4 *)(iVar7 + param_2 * 4),param_3,0);
  FUN_7188461c(*(undefined4 *)(iVar8 + param_2 * 4),0x400);
  FUN_7188461c(*(undefined4 *)(iVar7 + param_2 * 4),0x400);
  FUN_7188514c(*(undefined4 *)(iVar7 + param_2 * 4));
  pcVar3 = *(char **)(iVar7 + param_2 * 4);
  *(undefined4 *)(param_1 + 0x7244 + param_2 * 4) = 0;
  do {
    if (*pcVar3 == '\n') {
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x7244 + param_2 * 4) = iVar5;
    }
    else if (*pcVar3 == '\0') {
      return;
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}


// =========================================================================
// Function: FUN_71658660
// Entry: 0x71658660 | Size: 16 bytes
// =========================================================================

void FUN_71658660(undefined1 param_1)

{
  DAT_700c7e3c = param_1;
  return;
}


// =========================================================================
// Function: FUN_716586a8
// Entry: 0x716586a8 | Size: 16 bytes
// =========================================================================

undefined1 FUN_716586a8(void)

{
  return DAT_711e9f50;
}


// =========================================================================
// Function: yMSYbxIEAiYjSbxZwnHShrqgEehaeWroW
// Entry: 0x716586f0 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void yMSYbxIEAiYjSbxZwnHShrqgEehaeWroW(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0eec8;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_7165877c;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_7165877c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: uTSEJdxqhTXAZcqeHTAzL_Qqd_
// Entry: 0x71658870 | Size: 568 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uTSEJdxqhTXAZcqeHTAzL_Qqd_
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iStack_88;
  byte bStack_84;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
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
  uVar2 = imp_strlen(param_2);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_5c);
  }
  if (uVar2 < 0xb) {
    uVar6 = (uint)&uStack_5c | 1;
    uStack_5c = CONCAT31(uStack_5c._1_3_,(char)(uVar2 << 1));
    if (uVar2 != 0) goto LAB_716588f4;
  }
  else {
    uVar6 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_5c = (uVar2 | 7) + 2;
    uStack_58 = uVar2;
    uStack_54 = uVar6;
LAB_716588f4:
    imp___aeabi_memcpy(uVar6,param_2,uVar2);
  }
  *(undefined1 *)(uVar6 + uVar2) = 0;
  FUN_71800d24(&uStack_50,&uStack_5c);
  if ((uStack_5c & 1) != 0) {
    thunk_qNQrlu(uStack_54);
  }
  uVar2 = uStack_50 & 0xff;
  if (((uStack_50 & 1) != 0) && (0xff < uStack_4c)) {
    thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
              (&uStack_50,0xff,0);
    uVar2 = uStack_50 & 0xff;
  }
  iVar4 = DAT_712017fc;
  if (DAT_712017fc == 0) goto LAB_71658a6c;
  puVar7 = (uint *)((uint)&iStack_88 | 4);
  iStack_88 = param_1;
  if ((uVar2 & 1) == 0) {
    *puVar7 = uStack_50;
    puVar7[1] = uStack_4c;
    puVar7[2] = uStack_48;
  }
  else {
    FUN_712f6d58(puVar7,uStack_48,uStack_4c);
  }
  iVar1 = iStack_88;
  iStack_70 = param_5;
  iStack_68 = param_7;
  iStack_6c = param_6;
  iStack_78 = param_3;
  piStack_30 = (int *)thunk_MwhHq(0x30);
  piStack_30[2] = iVar1;
  *piStack_30 = (int)&DAT_70b0eeec;
  uVar2 = *puVar7;
  uVar6 = puVar7[1];
  uVar5 = puVar7[2];
  *puVar7 = 0;
  piStack_30[3] = uVar2;
  piStack_30[4] = uVar6;
  piStack_30[5] = uVar5;
  puVar7[1] = 0;
  puVar7[2] = 0;
  piStack_30[6] = iStack_78;
  piStack_30[7] = iStack_74;
  piStack_30[8] = iStack_70;
  piStack_30[9] = iStack_6c;
  piStack_30[10] = iStack_68;
  piVar3 = aiStack_40;
  FUN_717ccb10(iVar4,piVar3);
  if (piStack_30 == piVar3) {
    iVar4 = 0x10;
LAB_71658a48:
    (**(code **)(*piVar3 + iVar4))();
  }
  else {
    iVar4 = 0x14;
    piVar3 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_71658a48;
  }
  if ((bStack_84 & 1) != 0) {
    thunk_qNQrlu(uStack_7c);
  }
  uVar2 = uStack_50 & 0xff;
LAB_71658a6c:
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
// Function: FUN_71658f00
// Entry: 0x71658f00 | Size: 4 bytes
// =========================================================================

void FUN_71658f00(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71658f1c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716592e8
// Entry: 0x716592e8 | Size: 48 bytes
// =========================================================================

void FUN_716592e8(int param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x14));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: dXuwPPUpJcpBMAfnepBeAjVD
// Entry: 0x716598f0 | Size: 552 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dXuwPPUpJcpBMAfnepBeAjVD(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_50 = 0;
    if (DAT_712017fc == 0) goto LAB_71659aec;
LAB_716599f4:
    bVar1 = true;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    uStack_58 = uStack_48;
    iVar5 = DAT_712017fc;
LAB_71659a2c:
    piStack_30 = (int *)0x0;
    iStack_54 = param_3;
    piVar3 = (int *)thunk_MwhHq(0x18);
    *piVar3 = (int)&DAT_70b0ef10;
    piVar3[1] = param_1;
    if ((uStack_60 & 1) == 0) {
      piVar3[2] = uStack_60;
      piVar3[3] = uStack_5c;
      piVar3[4] = uStack_58;
    }
    else {
      FUN_712f6d58(piVar3 + 2,uStack_58,uStack_5c);
      param_3 = iStack_54;
    }
    piVar4 = aiStack_40;
    piVar3[5] = param_3;
    piStack_30 = piVar3;
    FUN_717ccb10(iVar5,piVar4);
    if (piStack_30 == piVar4) {
      iVar5 = 0x10;
LAB_71659abc:
      (**(code **)(*piVar4 + iVar5))();
    }
    else {
      iVar5 = 0x14;
      piVar4 = piStack_30;
      if (piStack_30 != (int *)0x0) goto LAB_71659abc;
    }
    if ((uStack_60 & 1) != 0) {
      thunk_qNQrlu(uStack_58);
    }
    if (bVar1) goto LAB_71659aec;
  }
  else {
    uVar2 = imp_strlen(param_2);
    if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_50);
    }
    if (uVar2 < 0xb) {
      uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar2 << 1));
      uVar6 = (uint)&uStack_50 | 1;
      if (uVar2 != 0) goto LAB_716599b0;
    }
    else {
      uVar6 = thunk_MwhHq((uVar2 | 7) + 1);
      uStack_50 = (uVar2 | 7) + 2;
      uStack_4c = uVar2;
      uStack_48 = uVar6;
LAB_716599b0:
      imp___aeabi_memcpy(uVar6,param_2,uVar2);
    }
    *(undefined1 *)(uVar6 + uVar2) = 0;
    iVar5 = DAT_712017fc;
    if (DAT_712017fc != 0) {
      if ((uStack_50 & 1) == 0) goto LAB_716599f4;
      FUN_712f6d58(&uStack_60,uStack_48,uStack_4c);
      bVar1 = false;
      goto LAB_71659a2c;
    }
    if ((uStack_50 & 1) == 0) goto LAB_71659aec;
  }
  thunk_qNQrlu(uStack_48);
LAB_71659aec:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71659d04
// Entry: 0x71659d04 | Size: 552 bytes
// =========================================================================

int * FUN_71659d04(int *param_1,byte *param_2)

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
      if (uVar9 != 3) goto LAB_71659da4;
      uVar7 = uVar7 ^ (uint)pbVar11[2] << 0x10;
    }
    uVar7 = uVar7 ^ (uint)pbVar11[1] << 8;
  }
  uVar7 = (uVar7 ^ *pbVar11) * 0x5bd1e995;
LAB_71659da4:
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
// Function: FUN_71659f98
// Entry: 0x71659f98 | Size: 476 bytes
// =========================================================================

void FUN_71659f98(undefined4 *param_1,int *param_2,int *param_3)

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
    if (uVar4 == uVar6) goto LAB_7165a0e0;
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
    if (uVar4 == uVar6) goto LAB_7165a0e0;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_7165a0e0:
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
// Function: FUN_7165a1fc
// Entry: 0x7165a1fc | Size: 1008 bytes
// =========================================================================

void FUN_7165a1fc(undefined4 *param_1,int *param_2,byte *param_3,undefined4 param_4,
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
LAB_7165a298:
    uVar9 = (uVar9 ^ *pbVar14) * 0x5bd1e995;
  }
  else {
    if (uVar13 == 2) {
LAB_7165a290:
      uVar9 = uVar9 ^ (uint)pbVar14[1] << 8;
      goto LAB_7165a298;
    }
    if (uVar13 == 3) {
      uVar9 = uVar9 ^ (uint)pbVar14[2] << 0x10;
      goto LAB_7165a290;
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
LAB_7165a53c:
                uVar2 = 0;
                goto LAB_7165a5dc;
              }
              uVar7 = 0;
              while (*(byte *)((int)piVar15 + uVar7 + 9) == pbVar10[uVar7]) {
                uVar7 = uVar7 + 1;
                if (bVar1 >> 1 == uVar7) goto LAB_7165a53c;
              }
            }
            else {
              iVar11 = imp_memcmp(piVar15[4],pbVar10);
              if (iVar11 == 0) goto LAB_7165a53c;
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
  piVar15[5] = 0;
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
    FUN_7165a7a8(param_2,uVar9);
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
    if (*piVar15 == 0) goto LAB_7165a5cc;
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
LAB_7165a5cc:
  param_2[3] = param_2[3] + 1;
  uVar2 = 1;
LAB_7165a5dc:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar15;
  return;
}


// =========================================================================
// Function: FUN_7165a7a8
// Entry: 0x7165a7a8 | Size: 692 bytes
// =========================================================================

void FUN_7165a7a8(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_7165a7f4;
    }
    return;
  }
LAB_7165a7f4:
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
// Function: FUN_7165af24
// Entry: 0x7165af24 | Size: 48 bytes
// =========================================================================

void FUN_7165af24(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_7165b148
// Entry: 0x7165b148 | Size: 712 bytes
// =========================================================================

void FUN_7165b148(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  iVar1 = imp_strcmp(param_1,s_glAlphaFuncQCOM_700633e0);
  if (iVar1 != 0) {
LAB_7165b168:
    imp_eglGetProcAddress(param_1);
    return;
  }
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fd0);
  if (*pcVar2 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fc0);
    *(undefined1 *)(puVar4 + 4) = 1;
    *puVar4 = 0xb57c5d22;
    puVar4[1] = 0xa1de6557;
    puVar4[2] = 0x885e5f30;
    puVar4[3] = 0xe7f24264;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7165c0a8,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fd0);
    *puVar5 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fc0);
  if (pbVar3[0x10] != 0) {
    *pbVar3 = *pbVar3 ^ 0x45;
    pbVar3[1] = pbVar3[1] ^ 0x31;
    pbVar3[2] = pbVar3[2] ^ 0x3d;
    pbVar3[3] = pbVar3[3] ^ 0xd9;
    pbVar3[0x10] = 0;
    pbVar3[4] = pbVar3[4] ^ 0x27;
    pbVar3[5] = pbVar3[5] ^ 0xd;
    pbVar3[6] = pbVar3[6] ^ 0xbf;
    pbVar3[7] = pbVar3[7] ^ 0xe7;
    pbVar3[8] = pbVar3[8] ^ 0x45;
    pbVar3[9] = pbVar3[9] ^ 0x31;
    pbVar3[10] = pbVar3[10] ^ 0x3d;
    pbVar3[0xb] = pbVar3[0xb] ^ 0xd9;
    pbVar3[0xc] = pbVar3[0xc] ^ 0x27;
    pbVar3[0xd] = pbVar3[0xd] ^ 0xd;
    pbVar3[0xe] = pbVar3[0xe] ^ 0xbf;
    pbVar3[0xf] = pbVar3[0xf] ^ 0xe7;
  }
  iVar1 = imp_eglGetProcAddress();
  if (iVar1 == 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ff0);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fe0);
      *(undefined1 *)(puVar4 + 3) = 1;
      *puVar4 = 0x758e8f4a;
      puVar4[1] = 0x9ff287cb;
      puVar4[2] = 0x19ac8d58;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7165c0d8,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7ff0);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c7fe0);
    if (pbVar3[0xc] != 0) {
      *pbVar3 = *pbVar3 ^ 0x2d;
      pbVar3[1] = pbVar3[1] ^ 0xe3;
      pbVar3[2] = pbVar3[2] ^ 0xcf;
      pbVar3[3] = pbVar3[3] ^ 0x19;
      pbVar3[0xc] = 0;
      pbVar3[4] = pbVar3[4] ^ 0xbb;
      pbVar3[5] = pbVar3[5] ^ 0xef;
      pbVar3[6] = pbVar3[6] ^ 0x93;
      pbVar3[7] = pbVar3[7] ^ 0xd9;
      pbVar3[8] = pbVar3[8] ^ 0x2d;
      pbVar3[9] = pbVar3[9] ^ 0xe3;
      pbVar3[10] = pbVar3[10] ^ 0xcf;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x19;
    }
    iVar1 = imp_eglGetProcAddress();
    if (iVar1 == 0) goto LAB_7165b168;
  }
  return;
}


// =========================================================================
// Function: FUN_7165b750
// Entry: 0x7165b750 | Size: 1412 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7165b860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7165b750(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x30;
  uStack_48 = 0xd5;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xabd52f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xabd52f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfa) >> 2 ^ 0xacad81;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(code **)((auStack_50[0] ^ 0xccfff7) + DAT_7120187c) = FUN_7165b148;
  *DAT_7120188c = ext_alBufferData;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alDeleteBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alDeleteSources;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alDistanceModel;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alGenBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alGetSourcei;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alListener3f;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alListenerf;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alListenerfv;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSource3f;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcePause;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcePlay;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourceQueueBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourceStop;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourceUnqueueBuffers;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcef;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alSourcei;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcCloseDevice;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcCreateContext;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcDestroyContext;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcMakeContextCurrent;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alcOpenDevice;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = ext_alGenSources;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7165c104
// Entry: 0x7165c104 | Size: 1092 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7165c240) */
/* WARNING: Removing unreachable block (ram,0x7165c420) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7165c104(int *param_1)

{
  int iVar1;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uStack_40 = 0x2b;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xaa87da >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x41;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xaa87da;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccabf2) >> 2 ^ 0xacad84;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x41;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    if (iVar1 != (auStack_50[0] ^ 0xccfffa) + DAT_7120187c) {
      uStack_48 = 0xd8;
      uStack_44 = 0;
      puStack_38 = &LAB_49abac16;
      uStack_3c = 0;
      uStack_34 = 0x26d5d038;
      uStack_40 = 0x2c;
      bStack_51 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
             (byte)(0xaa8802 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x42;
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 4);
      uStack_30 = 0xaa8802;
      bStack_51 = 0;
      do {
        bStack_51 = bStack_51 + 1;
        uStack_30 = (uStack_30 | 0xccabf3) >> 2 ^ 0xacad84;
      } while (bStack_51 < 8);
      bStack_51 = 0;
      do {
        *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
             *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x42;
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 4);
      bStack_51 = 0;
      do {
        bStack_51 = bStack_51 + 1;
      } while (bStack_51 < 8);
      if (iVar1 != (auStack_50[0] ^ 0xccfffa) + DAT_7120187c) goto LAB_7165c520;
    }
    uStack_34 = 0x26d5d038;
    puStack_38 = &LAB_49abac16;
    uStack_3c = 0;
    uStack_44 = 0;
    uStack_48 = 0xd8;
    (**(code **)(iVar1 + 0xc))(param_1);
  }
LAB_7165c520:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_28);
}


// =========================================================================
// Function: FUN_7165c738
// Entry: 0x7165c738 | Size: 196 bytes
// =========================================================================

void FUN_7165c738(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_2;
  iVar2 = FUN_71ba2cf0(uVar1 & 0x7fffffff,0x7f800000);
  iVar3 = FUN_71ba0408(uVar1 & 0x7fffffff,0x7f800000);
  if (iVar3 == 0 && iVar2 == 0) {
    uVar1 = param_2[1];
    iVar2 = FUN_71ba2cf0(uVar1 & 0x7fffffff,0x7f800000);
    iVar3 = FUN_71ba0408(uVar1 & 0x7fffffff,0x7f800000);
    if (iVar3 == 0 && iVar2 == 0) {
      uVar1 = param_2[2];
      iVar2 = FUN_71ba2cf0(uVar1 & 0x7fffffff,0x7f800000);
      iVar3 = FUN_71ba0408(uVar1 & 0x7fffffff,0x7f800000);
      if (iVar3 == 0 && iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x7165c7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_700c8004)(param_1,param_2);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7165c8dc
// Entry: 0x7165c8dc | Size: 876 bytes
// =========================================================================

void FUN_7165c8dc(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_7165c104;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8000 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165c5dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165cfc0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7165cff8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7165d030;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165c6e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7131260c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71312774;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7131271c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71312678;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713126fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71312650;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71311af8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7130f06c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71314290;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7131520c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71315588;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713156a8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71315768;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713157c0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8004 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165c738;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7165d068
// Entry: 0x7165d068 | Size: 192 bytes
// =========================================================================

void FUN_7165d068(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = FUN_713aeb00();
  if (param_2 == 0x35) {
    uVar4 = DAT_70b46c18;
    if (DAT_70b46c18 == param_1) {
      uVar4 = (uint)*(ushort *)(iVar1 + 0xe);
    }
    if ((DAT_70b46c18 == param_1 && uVar4 == 4) && (iVar1 = FUN_7165d210(), iVar1 != 0)) {
      iVar2 = FUN_713c301c(0);
      iVar1 = DAT_711f697c;
      if (DAT_711f697c == iVar2) {
        iVar1 = *(int *)(iVar2 + 0x720);
      }
      if ((DAT_711f697c == iVar2 && iVar1 == 0) &&
         (piVar3 = (int *)FUN_713dacc4(iVar2 + *(char *)(iVar2 + 0x71c) * 0x1c + 0x5a4),
         *piVar3 == 1)) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7165d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8008)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7165d210
// Entry: 0x7165d210 | Size: 500 bytes
// =========================================================================

byte FUN_7165d210(int param_1)

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
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar8 = FUN_716ac9ac();
  if (iVar8 != 0) {
    return 0;
  }
  iVar8 = FUN_716e69cc();
  if (iVar8 == 0) {
    return 0;
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8020);
  if (*pcVar9 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8010);
    *(undefined1 *)((int)puVar11 + 0x16) = 1;
    uVar6 = DAT_700847c8;
    uVar5 = DAT_700847c4;
    uVar4 = DAT_700847c0;
    uVar3 = DAT_700847bc;
    *puVar11 = DAT_700847b8;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    puVar11[4] = uVar6;
    *(undefined2 *)(puVar11 + 5) = DAT_700847cc;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713eb858,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8020);
    *puVar12 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8010);
  if (*(char *)(iVar8 + 0x16) != '\0') {
    uVar10 = 0;
    uVar15 = 0;
    do {
      iVar13 = (uVar10 & 7) * 8;
      uVar14 = iVar13 - 0x20;
      bVar7 = (byte)(0x4bd1a9a9 >> iVar13) | (byte)(0x6f2bc975 << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar14) {
        bVar7 = (byte)(0x6f2bc975 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar8 + uVar10) = *(byte *)(iVar8 + uVar10) ^ bVar7;
      bVar16 = 0xfffffffe < uVar10;
      bVar1 = uVar15 == 0;
      bVar2 = (0x14 < uVar10) <= uVar15;
      uVar10 = uVar10 + 1;
      uVar15 = uVar15 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x16) = 0;
  }
  uVar10 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar10 < 0xb) {
    uVar15 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_7165d33c;
  }
  else {
    uVar15 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_2c = (uVar10 | 7) + 2;
    uStack_28 = uVar10;
    uStack_24 = uVar15;
  }
  imp___aeabi_memmove(uVar15,iVar8,uVar10);
LAB_7165d33c:
  bVar7 = 0;
  *(undefined1 *)(uVar15 + uVar10) = 0;
  iVar8 = FUN_717c5e7c(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if (((iVar8 == 1) && (iVar8 = FUN_713c301c(0), iVar8 != 0)) && (*(int *)(param_1 + 500) == iVar8))
  {
    bVar7 = ~*(byte *)(iVar8 + 0x485) & 1;
  }
  return bVar7;
}


// =========================================================================
// Function: FUN_7165d684
// Entry: 0x7165d684 | Size: 60 bytes
// =========================================================================

undefined4 FUN_7165d684(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_713aeb00();
  iVar1 = FUN_7165d210();
  if (iVar1 != 0) {
    iVar1 = FUN_713c301c(0);
    if (*(int *)(iVar1 + 0x720) == 0) {
      return 2;
    }
  }
  uVar2 = FUN_7133c4d4();
  return uVar2;
}


// =========================================================================
// Function: FUN_7165d748
// Entry: 0x7165d748 | Size: 104 bytes
// =========================================================================

void FUN_7165d748(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 10) != '\0') {
    uVar1 = FUN_7165d210();
    param_6 = uVar1 | param_6;
  }
  (*DAT_700c800c)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: FUN_7165d804
// Entry: 0x7165d804 | Size: 16 bytes
// =========================================================================

undefined1 FUN_7165d804(void)

{
  return DAT_711e9f8c;
}


// =========================================================================
// Function: FUN_7165d84c
// Entry: 0x7165d84c | Size: 1752 bytes
// =========================================================================

undefined4 FUN_7165d84c(int param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  uint uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  char *pcStack_40;
  int *piStack_3c;
  undefined1 *puStack_38;
  undefined1 uStack_31;
  int iStack_30;
  int iStack_2c;
  char cStack_25;
  
  cStack_25 = (char)param_1;
  DAT_711e9f8c = 0;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  iVar4 = 0xe0;
  if (param_1 != 0) {
    iVar4 = 0xdc;
  }
  iStack_2c = *(int *)((int)&DAT_71201668 + iVar4);
  if (iStack_2c == 3) {
    return param_2;
  }
  iVar4 = FUN_713c301c(0);
  if ((iVar4 != 0) && (param_1 == 0)) {
    uVar5 = (uint)*(byte *)(iVar4 + 0x485);
    bVar16 = (*(byte *)(iVar4 + 0x485) & 1) != 0;
    if (bVar16) {
      uVar5 = *(uint *)(iVar4 + 0x590);
    }
    if ((bVar16 && uVar5 != 0) && (iVar4 = FUN_713bb684(), iVar4 != -1)) {
      return param_2;
    }
  }
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8040);
  if (*pcVar6 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8030);
    *(undefined1 *)(puVar15 + 5) = 1;
    uVar8 = DAT_700847e0;
    uVar13 = DAT_700847dc;
    uVar12 = DAT_700847d8;
    uVar7 = DAT_700847d4;
    *puVar15 = DAT_700847d0;
    puVar15[1] = uVar7;
    puVar15[2] = uVar12;
    puVar15[3] = uVar13;
    puVar15[4] = uVar8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7165fc84,puVar15,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8040);
    *puVar9 = 1;
  }
  iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8030);
  if (*(char *)(iVar4 + 0x14) != '\0') {
    uVar5 = 0;
    uVar11 = 0;
    do {
      iVar10 = (uVar5 & 7) * 8;
      bVar3 = (byte)(0x8feb1737 >> iVar10) | (byte)(0x4dc13fb3 << ((uVar5 & 7) * -8 + 0x20 & 0xff));
      uVar14 = iVar10 - 0x20;
      if (-1 < (int)uVar14) {
        bVar3 = (byte)(0x4dc13fb3 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar4 + uVar5) = *(byte *)(iVar4 + uVar5) ^ bVar3;
      bVar17 = 0xfffffffe < uVar5;
      bVar16 = uVar11 == 0;
      bVar1 = (0x12 < uVar5) <= uVar11;
      uVar5 = uVar5 + 1;
      uVar11 = uVar11 + bVar17;
    } while (bVar16 && bVar1);
    *(undefined1 *)(iVar4 + 0x14) = 0;
  }
  uVar5 = imp_strlen(iVar4);
  if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&piStack_44);
  }
  if (uVar5 < 0xb) {
    uVar11 = (uint)&piStack_44 | 1;
    piStack_44 = (int *)CONCAT31(piStack_44._1_3_,(char)(uVar5 << 1));
    if (uVar5 != 0) goto LAB_7165d9d4;
  }
  else {
    uVar11 = thunk_MwhHq((uVar5 | 7) + 1);
    piStack_44 = (int *)((uVar5 | 7) + 2);
    pcStack_40 = (char *)uVar5;
    piStack_3c = (int *)uVar11;
LAB_7165d9d4:
    imp___aeabi_memmove(uVar11,iVar4,uVar5);
  }
  *(undefined1 *)(uVar11 + uVar5) = 0;
  iVar4 = FUN_717c5e7c(&piStack_44);
  if (((uint)piStack_44 & 1) != 0) {
    thunk_qNQrlu(piStack_3c);
  }
  if (iVar4 != 0) {
    return param_2;
  }
  iVar4 = FUN_713aeb00();
  iStack_30 = *(int *)(iVar4 + 500);
  iVar10 = FUN_71ba2d70(param_3 & 0x7fffffff,0x38d1b717);
  cVar2 = cStack_25;
  if (iVar10 != 0) {
    DAT_711e9f88 = *DAT_70b4204c;
  }
  puStack_38 = &uStack_31;
  piStack_3c = &iStack_2c;
  pcStack_40 = &cStack_25;
  piStack_44 = &iStack_30;
  if (iStack_2c == 2) {
    return 0;
  }
  puVar15 = (undefined4 *)(iVar4 + 0x94);
  if (iStack_2c != 1) {
    if (iStack_2c == 0) {
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      iVar10 = 0xe4;
      if (cVar2 == '\0') {
        iVar10 = 0xe8;
      }
      uVar7 = FUN_71ba1b94(*(undefined4 *)((int)&DAT_71201668 + iVar10));
      iVar10 = FUN_71ba2d10(uVar7,0x3f800000);
      if (iVar10 != 0) {
        uVar7 = 0x3f800000;
      }
      uVar12 = *DAT_70b42050;
      iVar10 = FUN_71ba2d10(uVar12,0);
      if (iVar10 != 0) {
        uVar12 = 0;
      }
      uVar5 = FUN_71ba21e8(uVar12,0x41a00000);
      iVar10 = FUN_71ba2d30(uVar5,0);
      if (iVar10 == 0) {
        if ((uint)(*DAT_70b4204c - DAT_711e9f88) < 500) {
          return 0;
        }
        uVar13 = *(undefined4 *)(iStack_30 + 0x48);
        uVar12 = FUN_71ba21e8(*(undefined4 *)(iStack_30 + 0x4c));
        uVar13 = FUN_71ba21e8(uVar13,uVar13);
        FUN_71ba0b38(uVar13,uVar12);
        uVar12 = imp_sqrtf();
        iVar10 = FUN_71ba2d30(uVar12,0x3ca3d70a);
        if (iVar10 == 0) {
          uVar12 = FUN_7165e924(&piStack_44);
          uVar13 = *puVar15;
          uStack_48 = FUN_71ba240c(uVar12,uVar13);
          FUN_7165ee7c(&uStack_48);
          if (cStack_25 != '\0') {
            uVar8 = imp_atan2f(*(uint *)(iVar4 + 0x168) ^ 0x80000000,*(undefined4 *)(iVar4 + 0x16c))
            ;
            uVar8 = FUN_71ba0b38(uVar8,0xbfc90fd0);
            uStack_4c = FUN_71ba240c(uVar12,uVar8);
            FUN_7165ee7c(&uStack_4c);
            iVar10 = FUN_71ba2d50(uStack_4c & 0x7fffffff,0x403de4f7);
            if (iVar10 != 0) {
              return param_2;
            }
          }
          FUN_71ba13e0(uVar5 ^ 0x80000000,uVar7);
          uVar7 = imp_expf();
          uVar7 = FUN_71ba240c(0x3f800000,uVar7);
          uVar7 = FUN_71ba21e8(uStack_48,uVar7);
          uVar7 = FUN_71ba0b38(uVar7,uVar13);
          *puVar15 = uVar7;
          FUN_7165ee7c(puVar15);
          goto LAB_7165deb8;
        }
      }
    }
    return param_2;
  }
  uVar7 = FUN_7165e924(&piStack_44);
  uVar5 = FUN_71ba240c(uVar7,*puVar15);
  iVar10 = FUN_71ba2d70(uVar5,0x40490fdb);
  while (iVar10 != 0) {
    uVar5 = FUN_71ba0b38(uVar5,0xc0c90fd0);
    iVar10 = FUN_71ba2d70(uVar5,0x40490fdb);
  }
  iVar10 = FUN_71ba2d10(uVar5,0xc0490fdb);
  cVar2 = cStack_25;
  while (cStack_25 = cVar2, iVar10 != 0) {
    uVar5 = FUN_71ba0b38(uVar5,0x40c90fd0);
    iVar10 = FUN_71ba2d10(uVar5,0xc0490fdb);
    cVar2 = cStack_25;
  }
  DAT_711e9f8c = 1;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  iVar10 = FUN_71ba2d30(uVar5 & 0x7fffffff,0x3b23d70a);
  if (iVar10 == 0) {
    iVar10 = 0xec;
    if (cVar2 == '\0') {
      iVar10 = 0xf0;
    }
    uVar7 = FUN_71ba1b94(*(undefined4 *)((int)&DAT_71201668 + iVar10));
    iVar10 = FUN_71ba2d10(uVar7,0x41a00000);
    if (iVar10 != 0) {
      uVar7 = 0x41a00000;
    }
    uVar7 = FUN_71ba13e0(0x41a00000,uVar7);
    iVar10 = FUN_71ba2d70(uVar7,0x3f800000);
    if (iVar10 != 0) {
      uVar7 = 0x3f800000;
    }
    uVar12 = *DAT_70b42050;
    iVar10 = FUN_71ba2d10(uVar12,0);
    uVar7 = FUN_71ba240c(0x3f800000,uVar7);
    if (iVar10 != 0) {
      uVar12 = 0;
    }
    uVar7 = imp_powf(uVar7,uVar12);
    uVar7 = FUN_71ba240c(0x3f800000,uVar7);
    uVar5 = FUN_71ba21e8(uVar5,uVar7);
    uVar7 = *puVar15;
  }
  else {
    uVar7 = *puVar15;
  }
  uVar7 = FUN_71ba0b38(uVar5,uVar7);
  *puVar15 = uVar7;
  iVar10 = FUN_71ba2d70(uVar7,0x40490fdb);
  if (iVar10 != 0) {
    do {
      uVar7 = FUN_71ba0b38(uVar7,0xc0c90fd0);
      iVar10 = FUN_71ba2d70(uVar7,0x40490fdb);
    } while (iVar10 != 0);
    *puVar15 = uVar7;
  }
  iVar10 = FUN_71ba2d10(uVar7,0xc0490fdb);
  if (iVar10 != 0) {
    do {
      uVar7 = FUN_71ba0b38(uVar7,0x40c90fd0);
      iVar10 = FUN_71ba2d10(uVar7,0xc0490fdb);
    } while (iVar10 != 0);
    *puVar15 = uVar7;
  }
LAB_7165deb8:
  *(undefined4 *)(iVar4 + 0x98) = 0;
  return 0;
}


// =========================================================================
// Function: FUN_7165e924
// Entry: 0x7165e924 | Size: 608 bytes
// =========================================================================

undefined4 FUN_7165e924(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = FUN_713c4e90(*(undefined4 *)*param_1);
  uVar2 = FUN_71ba0b38(uVar2,0xbfc90fd0);
  if (*(char *)param_1[1] != '\0') {
    DAT_711e9f90 = 0;
    DAT_711e9f8d = '\0';
    goto LAB_7165eaec;
  }
  iVar3 = *(int *)*param_1;
  iVar6 = DAT_711e9f90;
  if (DAT_711e9f90 == iVar3) {
LAB_7165e9c0:
    uVar7 = *(uint *)param_1[2];
    bVar1 = false;
    if (uVar7 < 2) {
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      piVar4 = &DAT_71201760;
      if (uVar7 == 0) {
        piVar4 = &DAT_7120175c;
      }
      bVar1 = *piVar4 == 0;
    }
  }
  else {
    bVar1 = false;
    iVar6 = *(int *)*param_1;
    DAT_711e9f8d = '\0';
    DAT_711e9f90 = iVar3;
    if (*(char *)param_1[1] == '\0') goto LAB_7165e9c0;
  }
  if (iVar6 == 0) {
    if (!bVar1) goto LAB_7165ea34;
  }
  else if (*(int *)(iVar6 + 0x5a4) != 3 && !bVar1) {
LAB_7165ea34:
    iVar6 = *(int *)*param_1;
    uVar8 = *(undefined4 *)(iVar6 + 0x48);
    uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x10);
    uVar5 = FUN_71ba21e8(*(undefined4 *)(iVar6 + 0x4c),
                         *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x14));
    uVar8 = FUN_71ba21e8(uVar8,uVar9);
    uVar5 = FUN_71ba0b38(uVar8,uVar5);
    iVar6 = FUN_71ba2d10(uVar5,0xbcf5c28f);
    if (iVar6 == 0) {
      iVar6 = FUN_71ba2d70(uVar5,0x3cf5c28f);
      if (iVar6 != 0) goto LAB_7165eab0;
      if (DAT_711e9f8d == '\0') goto LAB_7165eaec;
    }
    else {
      DAT_711e9f8d = '\x01';
    }
    uVar2 = FUN_71ba0b38(uVar2,0x40490fdb);
    goto LAB_7165eaec;
  }
LAB_7165eab0:
  DAT_711e9f8d = '\0';
LAB_7165eaec:
  iVar6 = FUN_71ba2d70(uVar2,0x40490fdb);
  while (iVar6 != 0) {
    uVar2 = FUN_71ba0b38(uVar2,0xc0c90fd0);
    iVar6 = FUN_71ba2d70(uVar2,0x40490fdb);
  }
  iVar6 = FUN_71ba2d10(uVar2,0xc0490fdb);
  while (iVar6 != 0) {
    uVar2 = FUN_71ba0b38(uVar2,0x40c90fd0);
    iVar6 = FUN_71ba2d10(uVar2,0xc0490fdb);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_7165ee7c
// Entry: 0x7165ee7c | Size: 172 bytes
// =========================================================================

void FUN_7165ee7c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = FUN_71ba2d70(uVar2,0x40490fdb);
  if (iVar1 != 0) {
    do {
      uVar2 = FUN_71ba0b38(uVar2,0xc0c90fd0);
      iVar1 = FUN_71ba2d70(uVar2,0x40490fdb);
    } while (iVar1 != 0);
    *param_1 = uVar2;
  }
  iVar1 = FUN_71ba2d10(uVar2,0xc0490fdb);
  if (iVar1 != 0) {
    do {
      uVar2 = FUN_71ba0b38(uVar2,0x40c90fd0);
      iVar1 = FUN_71ba2d10(uVar2,0xc0490fdb);
    } while (iVar1 != 0);
    *param_1 = uVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7165f198
// Entry: 0x7165f198 | Size: 776 bytes
// =========================================================================

void FUN_7165f198(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  byte abStack_30 [8];
  undefined4 uStack_28;
  
  iVar4 = FUN_713aeb00();
  iVar14 = 0;
  iVar5 = FUN_713c301c(0);
  bVar3 = 0;
  if (iVar5 != 0) {
    bVar3 = *(byte *)(iVar5 + 0x485);
  }
  if (iVar5 != 0 && (bVar3 & 1) != 0) {
    iVar14 = *(int *)(iVar5 + 0x590);
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_71201748 == 0) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    if ((DAT_7120175c == 0) && (iVar14 != 0)) {
      iVar6 = *(int *)(iVar4 + 500);
      bVar17 = iVar14 == iVar6;
      if (bVar17) {
        iVar6 = *(int *)(iVar14 + 0x464);
      }
      if (((bVar17 && iVar6 == iVar5) && (*(int *)(iVar14 + 0x5a4) != 3)) &&
         (*(int *)(iVar4 + 0x1e0) != *DAT_70b4204c)) {
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8060);
        if (*pcVar7 == '\0') {
          puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8050);
          *(undefined1 *)(puVar10 + 5) = 1;
          uVar2 = DAT_700847f8;
          uVar15 = DAT_700847f4;
          uVar13 = DAT_700847f0;
          uVar8 = DAT_700847ec;
          *puVar10 = DAT_700847e8;
          puVar10[1] = uVar8;
          puVar10[2] = uVar13;
          puVar10[3] = uVar15;
          puVar10[4] = uVar2;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_7165fcb8,puVar10,&DAT_70b0e000);
          puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8060);
          *puVar11 = 1;
        }
        iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8050);
        if (*(char *)(iVar5 + 0x14) != '\0') {
          uVar9 = 0;
          uVar16 = 0;
          do {
            iVar6 = (uVar9 & 7) * 8;
            bVar3 = (byte)(0xcfbf69d9 >> iVar6) |
                    (byte)(0x1d038f45 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
            uVar12 = iVar6 - 0x20;
            if (-1 < (int)uVar12) {
              bVar3 = (byte)(0x1d038f45 >> (uVar12 & 0xff));
            }
            *(byte *)(iVar5 + uVar9) = *(byte *)(iVar5 + uVar9) ^ bVar3;
            bVar18 = 0xfffffffe < uVar9;
            bVar17 = uVar16 == 0;
            bVar1 = (0x12 < uVar9) <= uVar16;
            uVar9 = uVar9 + 1;
            uVar16 = uVar16 + bVar18;
          } while (bVar17 && bVar1);
          *(undefined1 *)(iVar5 + 0x14) = 0;
        }
        FUN_71315100(abStack_30);
        iVar5 = FUN_717c5e7c();
        if ((abStack_30[0] & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        if (iVar5 == 0) {
          uVar13 = *(undefined4 *)(iVar14 + 0x48);
          uVar15 = *(undefined4 *)(*(int *)(iVar14 + 0x14) + 0x10);
          uVar8 = FUN_71ba21e8(*(undefined4 *)(iVar14 + 0x4c),
                               *(undefined4 *)(*(int *)(iVar14 + 0x14) + 0x14));
          uVar13 = FUN_71ba21e8(uVar13,uVar15);
          uVar8 = FUN_71ba0b38(uVar13,uVar8);
          iVar5 = FUN_71ba2d10(uVar8,0);
          if (iVar5 != 0) {
            uVar13 = *(undefined4 *)(iVar4 + 0x124);
            uVar15 = *(undefined4 *)(iVar4 + 0x128);
            uVar8 = FUN_71ba240c(*(undefined4 *)(iVar4 + 0x120),*(undefined4 *)(iVar4 + 0x1b0));
            uVar13 = FUN_71ba240c(uVar13,*(undefined4 *)(iVar4 + 0x1b4));
            uVar15 = FUN_71ba240c(uVar15,*(undefined4 *)(iVar4 + 0x1b8));
            uVar13 = FUN_71ba21e8(uVar13,uVar13);
            uVar8 = FUN_71ba21e8(uVar8,uVar8);
            uVar8 = FUN_71ba0b38(uVar8,uVar13);
            uVar13 = FUN_71ba21e8(uVar15,uVar15);
            uVar9 = FUN_71ba0b38(uVar13,uVar8);
            iVar4 = FUN_71ba2d70(uVar9,0x358637bd);
            if (iVar4 != 0) {
              iVar4 = FUN_71ba2cf0(uVar9 & 0x7fffffff,0x7f800000);
              iVar5 = FUN_71ba0408(uVar9 & 0x7fffffff,0x7f800000);
              if (iVar5 == 0 && iVar4 == 0) {
                uVar8 = imp_sqrtf(uVar8);
                imp_atan2f(uVar15,uVar8);
                return;
              }
            }
          }
        }
      }
    }
  }
  imp_asinf(param_1);
  return;
}


// =========================================================================
// Function: FUN_7165f958
// Entry: 0x7165f958 | Size: 372 bytes
// =========================================================================

void FUN_7165f958(void)

{
  undefined4 *puVar1;
  
  DAT_700c8008 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_7165d068;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165d684;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c800c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165d748;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165f198;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165f060;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165efe8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7165f11c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7165fcec
// Entry: 0x7165fcec | Size: 2120 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7165fdf8) */

void FUN_7165fcec(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int *piVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  uint uVar52;
  bool bVar53;
  int aiStack_68 [11];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar25 = (int *)0xfcc126c8;
  for (piVar13 = aiStack_68;
      ((*piVar13 != 0x6a4dab1f || piVar13[1] != 0x679b29b ||
       (piVar13[2] != 0x6efdd0cf || piVar13[3] != -0x33ed938)) ||
      (piVar13[4] != -0x4103aa2a || piVar13[5] != 0x370f3a77)); piVar13 = piVar13 + 1) {
  }
  piVar44 = (int *)piVar13[0xc017];
  bVar53 = piVar44 != (int *)0x0;
  if (bVar53) {
    piVar44 = piVar44 + 1;
    piVar25 = (int *)*piVar44;
  }
  piVar20 = piVar44;
  if (bVar53 && piVar25 != (int *)0x0) {
    do {
      piVar12 = piVar25;
      if ((uint)piVar25[4] <= (int)&DAT_70b42060 + 3U) {
        piVar25 = piVar25 + 1;
        piVar12 = piVar20;
      }
      piVar25 = (int *)*piVar25;
      piVar20 = piVar12;
    } while (piVar25 != (int *)0x0);
    if ((piVar12 != piVar44) && ((uint)piVar12[4] < (int)&DAT_70b42064 + 1U)) {
      DAT_70b42064 = 0;
      piVar25 = (int *)piVar13[0xc017];
      do {
        piVar25 = *(int **)((int)piVar25 + 4);
        while( true ) {
          if (piVar25 == (int *)0x0) {
            piVar25 = (int *)FUN_712f6bb0(s_map__at__key_not_found_700619a7);
            goto LAB_7165fe38;
          }
          if ((undefined4 *)piVar25[4] < (undefined4 *)((int)&DAT_70b42064 + 1)) break;
          piVar25 = (int *)*piVar25;
        }
      } while ((undefined4 *)piVar25[4] < &DAT_70b42064);
LAB_7165fe38:
      uVar26 = *(uint *)((int)piVar25 + 0x18);
      if (uVar26 < 0x20) {
        iVar48 = 0x27d4eb7f;
        uVar50 = 0x56d677d6;
      }
      else {
        uStack_38 = 0xee40c5e7;
        uVar41 = 0x60ea283e;
        uStack_3c = 0xc2b2ae8d;
        iVar48 = 0;
        uStack_34 = 0x6854fb60;
        uStack_30 = 0x50;
        uStack_2c = 0x40801011;
        uStack_28 = 0x61c8869e;
        uVar14 = 0xba94458a;
        puVar51 = *(uint **)((int)piVar25 + 0x14);
        uVar50 = uVar26;
        do {
          lVar4 = (ulonglong)puVar51[6] * 0x27d4eb4f;
          uVar27 = (uint)lVar4;
          uVar28 = uVar27 + uVar14;
          uVar14 = puVar51[7] * 0x27d4eb4f +
                   puVar51[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar27,uVar14);
          uVar27 = uVar14 >> 1;
          uVar45 = uVar28 * -0x80000000 | uVar27;
          uVar28 = uVar28 >> 1;
          uVar16 = uVar14 * -0x80000000 | uVar28;
          uVar14 = (uint)((ulonglong)uVar45 * 0x85ebca87);
          uStack_28 = uVar16 * -0x7a143579 +
                      uVar45 * -0x61c8864f + (int)((ulonglong)uVar45 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar51[4] * 0x27d4eb4f;
          uVar29 = (uint)lVar4;
          uVar30 = uVar29 + uStack_2c;
          uVar17 = puVar51[5] * 0x27d4eb4f +
                   puVar51[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar29,uStack_2c);
          uVar29 = uVar17 >> 1;
          uVar46 = uVar30 * -0x80000000 | uVar29;
          uVar30 = uVar30 >> 1;
          uVar18 = uVar17 * -0x80000000 | uVar30;
          uStack_2c = (uint)((ulonglong)uVar46 * 0x85ebca87);
          puVar1 = puVar51 + 1;
          puVar2 = puVar51 + 3;
          uStack_30 = uVar18 * -0x7a143579 +
                      uVar46 * -0x61c8864f + (int)((ulonglong)uVar46 * 0x85ebca87 >> 0x20);
          puVar3 = puVar51 + 2;
          lVar4 = (ulonglong)*puVar3 * 0x27d4eb4f;
          uVar17 = (uint)lVar4;
          uVar19 = *puVar51;
          puVar51 = puVar51 + 8;
          uVar42 = uVar17 + uStack_34;
          uVar38 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar17,uStack_34);
          uVar17 = uVar38 >> 1;
          uVar47 = uVar42 * -0x80000000 | uVar17;
          uStack_34 = (uint)((ulonglong)uVar47 * 0x85ebca87);
          uVar42 = uVar42 >> 1;
          uVar15 = uVar38 * -0x80000000 | uVar42;
          uStack_3c = uVar15 * -0x7a143579 +
                      uVar47 * -0x61c8864f + (int)((ulonglong)uVar47 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar19 * 0x27d4eb4f;
          uVar43 = (uint)lVar4;
          uVar38 = uVar43 + uStack_38;
          uVar41 = *puVar1 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar41 + (uint)CARRY4(uVar43,uStack_38);
          bVar53 = uVar50 < 0x20;
          uVar50 = uVar50 - 0x20;
          iVar48 = iVar48 - (uint)bVar53;
          uVar19 = uVar41 >> 1;
          uVar31 = uVar38 * -0x80000000 | uVar19;
          uVar38 = uVar38 >> 1;
          uVar43 = uVar41 * -0x80000000 | uVar38;
          uStack_38 = (uint)((ulonglong)uVar31 * 0x85ebca87);
          uVar41 = uVar43 * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)uVar31 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar50 < 0x20) <= (uint)-iVar48);
        uVar39 = uStack_38 << 1 | uVar41 >> 0x1f;
        uVar21 = uStack_34 << 7 | uStack_3c >> 0x19;
        uVar52 = uVar21 + uVar39;
        uVar22 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar49 = uVar52 + uVar22;
        uVar23 = uVar14 << 0x12 | uStack_28 >> 0xe;
        uVar40 = (uint)((ulonglong)uVar31 * 0x80000000) |
                 uVar43 * 0xf796ca9 +
                 uVar31 * -0x210ca4ff + (int)((ulonglong)uVar31 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar40 * 0x85ebca87;
        uVar24 = uVar49 + uVar23 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar24 * 0x85ebca87;
        uVar43 = (uint)lVar5;
        uVar32 = (uint)((ulonglong)uVar47 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar47 * -0x210ca4ff + (int)((ulonglong)uVar47 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar32 * 0x85ebca87;
        uVar15 = uVar43 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar15 * 0x85ebca87;
        uVar33 = (uint)lVar7;
        uVar34 = (uint)((ulonglong)uVar46 * 0x80000000) |
                 uVar18 * 0xf796ca9 +
                 uVar46 * -0x210ca4ff + (int)((ulonglong)uVar46 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar34 * 0x85ebca87;
        uVar18 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar18 * 0x85ebca87;
        uVar35 = (uint)lVar9;
        uVar36 = (uint)((ulonglong)uVar45 * 0x80000000) |
                 uVar16 * 0xf796ca9 +
                 uVar45 * -0x210ca4ff + (int)((ulonglong)uVar45 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar36 * 0x85ebca87;
        uVar16 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar16 * 0x85ebca87;
        uVar37 = (uint)lVar11;
        uVar50 = uVar37 + 0xc2b2ae63;
        iVar48 = (((((uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar41 * 2 | uStack_38 >> 0x1f) +
                     (uint)CARRY4(uVar21,uVar39) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                     (uint)CARRY4(uVar52,uVar22) + (uStack_28 * 0x40000 | uVar14 >> 0xe) +
                     (uint)CARRY4(uVar49,uVar23) ^
                    (uVar38 * -0x80000000 +
                    uVar19 * -0x784349ac + (int)((ulonglong)uVar31 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                   (uVar42 * -0x80000000 +
                   uVar17 * -0x784349ac + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                  (uVar30 * -0x80000000 +
                  uVar29 * -0x784349ac + (int)((ulonglong)uVar46 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar35) ^
                 (uVar28 * -0x80000000 +
                 uVar27 * -0x784349ac + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579 +
                 uVar16 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar37);
      }
      uStack_28 = uVar50 + uVar26;
      uVar14 = uVar26 & 0x1f;
      uVar50 = iVar48 + (uint)CARRY4(uVar50,uVar26);
      puVar51 = (uint *)((int)*(uint **)((int)piVar25 + 0x14) + (uVar26 & 0xffffffe0));
      uVar26 = 0;
      do {
        if (uVar26 == 0 && (7 < uVar14) <= uVar26) {
          if (uVar26 == 0 && (3 < uVar14) <= uVar26) {
            if (uVar14 == 0 && uVar26 == 0) {
              uStack_28 = uStack_28 ^ uVar50 >> 1;
              lVar4 = (ulonglong)uStack_28 * 0x27d4eb4f;
              uVar14 = (uint)lVar4;
              uVar26 = uVar50 * 0x27d4eb4f +
                       uStack_28 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
              uVar14 = (uVar14 >> 0x1d | uVar26 * 8) ^ uVar14;
              lVar4 = (ulonglong)uVar14 * 0x9e3779f9;
              uVar26 = (uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
                       uVar14 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
              *(uint *)((int)piVar25 + 0x20) = uVar26;
              *(uint *)((int)piVar25 + 0x1c) = uVar26 ^ (uint)lVar4;
              return;
            }
            iVar48 = 1;
            lVar4 = (ulonglong)(uint)(byte)*puVar51 * 0x165667c5;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = (uint)(byte)*puVar51 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0xb | uVar50 >> 0x15;
            lVar4 = (ulonglong)uVar27 * 0x85ebca87;
            uStack_28 = (uint)lVar4;
            uVar50 = (uVar50 << 0xb | uVar41 >> 0x15) * -0x7a143579 +
                     uVar27 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar29 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar51 * 0x85ebca87;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = *puVar51 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0x17 | uVar50 >> 9;
            lVar4 = (ulonglong)uVar27 * 0x27d4eb4f;
            uVar28 = (uint)lVar4;
            iVar48 = 4;
            uStack_28 = uVar28 + 0x9e3779f9;
            uVar50 = (uVar50 << 0x17 | uVar41 >> 9) * 0x27d4eb4f +
                     uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar28);
            uVar29 = 0xfffffffc;
          }
        }
        else {
          uVar28 = *puVar51;
          uVar41 = (uint)((ulonglong)uVar28 * 0x80000000) |
                   puVar51[1] * 0x27d4eb4f +
                   uVar28 * -0x3d4d51c3 + (int)((ulonglong)uVar28 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          iVar48 = 8;
          uVar27 = (uint)lVar4 ^ uStack_28;
          uVar50 = (puVar51[1] * -0x80000000 +
                   uVar28 * -0x6c158a59 + (int)((ulonglong)uVar28 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
          uVar41 = uVar27 << 0x1b | uVar50 >> 5;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          uVar28 = (uint)lVar4;
          uVar29 = 0xfffffff8;
          uStack_28 = uVar28 + 0xc2b2ae63;
          uVar50 = (uVar50 << 0x1b | uVar27 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar28);
        }
        bVar53 = CARRY4(uVar29,uVar14);
        uVar14 = uVar29 + uVar14;
        puVar51 = (uint *)((int)puVar51 + iVar48);
        uVar26 = (uVar26 - 1) + (uint)bVar53;
      } while( true );
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71660580
// Entry: 0x71660580 | Size: 2120 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7166068c) */

void FUN_71660580(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int *piVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  uint uVar52;
  bool bVar53;
  int aiStack_68 [11];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar25 = (int *)0xfcc126c8;
  for (piVar13 = aiStack_68;
      ((*piVar13 != 0x6a4dab1f || piVar13[1] != 0x679b29b ||
       (piVar13[2] != 0x6efdd0cf || piVar13[3] != -0x33ed938)) ||
      (piVar13[4] != -0x4103aa2a || piVar13[5] != 0x370f3a77)); piVar13 = piVar13 + 1) {
  }
  piVar44 = (int *)piVar13[0xc017];
  bVar53 = piVar44 != (int *)0x0;
  if (bVar53) {
    piVar44 = piVar44 + 1;
    piVar25 = (int *)*piVar44;
  }
  piVar20 = piVar44;
  if (bVar53 && piVar25 != (int *)0x0) {
    do {
      piVar12 = piVar25;
      if ((uint)piVar25[4] <= (int)&DAT_70b42060 + 3U) {
        piVar25 = piVar25 + 1;
        piVar12 = piVar20;
      }
      piVar25 = (int *)*piVar25;
      piVar20 = piVar12;
    } while (piVar25 != (int *)0x0);
    if ((piVar12 != piVar44) && ((uint)piVar12[4] < (int)&DAT_70b42064 + 1U)) {
      DAT_70b42064 = 0x3f800000;
      piVar25 = (int *)piVar13[0xc017];
      do {
        piVar25 = *(int **)((int)piVar25 + 4);
        while( true ) {
          if (piVar25 == (int *)0x0) {
            piVar25 = (int *)FUN_712f6bb0(s_map__at__key_not_found_700619a7);
            goto LAB_716606cc;
          }
          if ((undefined4 *)piVar25[4] < (undefined4 *)((int)&DAT_70b42064 + 1)) break;
          piVar25 = (int *)*piVar25;
        }
      } while ((undefined4 *)piVar25[4] < &DAT_70b42064);
LAB_716606cc:
      uVar26 = *(uint *)((int)piVar25 + 0x18);
      if (uVar26 < 0x20) {
        iVar48 = 0x27d4eb7f;
        uVar50 = 0x56d677d6;
      }
      else {
        uStack_38 = 0xee40c5e7;
        uVar41 = 0x60ea283e;
        uStack_3c = 0xc2b2ae8d;
        iVar48 = 0;
        uStack_34 = 0x6854fb60;
        uStack_30 = 0x50;
        uStack_2c = 0x40801011;
        uStack_28 = 0x61c8869e;
        uVar14 = 0xba94458a;
        puVar51 = *(uint **)((int)piVar25 + 0x14);
        uVar50 = uVar26;
        do {
          lVar4 = (ulonglong)puVar51[6] * 0x27d4eb4f;
          uVar27 = (uint)lVar4;
          uVar28 = uVar27 + uVar14;
          uVar14 = puVar51[7] * 0x27d4eb4f +
                   puVar51[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar27,uVar14);
          uVar27 = uVar14 >> 1;
          uVar45 = uVar28 * -0x80000000 | uVar27;
          uVar28 = uVar28 >> 1;
          uVar16 = uVar14 * -0x80000000 | uVar28;
          uVar14 = (uint)((ulonglong)uVar45 * 0x85ebca87);
          uStack_28 = uVar16 * -0x7a143579 +
                      uVar45 * -0x61c8864f + (int)((ulonglong)uVar45 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar51[4] * 0x27d4eb4f;
          uVar29 = (uint)lVar4;
          uVar30 = uVar29 + uStack_2c;
          uVar17 = puVar51[5] * 0x27d4eb4f +
                   puVar51[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar29,uStack_2c);
          uVar29 = uVar17 >> 1;
          uVar46 = uVar30 * -0x80000000 | uVar29;
          uVar30 = uVar30 >> 1;
          uVar18 = uVar17 * -0x80000000 | uVar30;
          uStack_2c = (uint)((ulonglong)uVar46 * 0x85ebca87);
          puVar1 = puVar51 + 1;
          puVar2 = puVar51 + 3;
          uStack_30 = uVar18 * -0x7a143579 +
                      uVar46 * -0x61c8864f + (int)((ulonglong)uVar46 * 0x85ebca87 >> 0x20);
          puVar3 = puVar51 + 2;
          lVar4 = (ulonglong)*puVar3 * 0x27d4eb4f;
          uVar17 = (uint)lVar4;
          uVar19 = *puVar51;
          puVar51 = puVar51 + 8;
          uVar42 = uVar17 + uStack_34;
          uVar38 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar17,uStack_34);
          uVar17 = uVar38 >> 1;
          uVar47 = uVar42 * -0x80000000 | uVar17;
          uStack_34 = (uint)((ulonglong)uVar47 * 0x85ebca87);
          uVar42 = uVar42 >> 1;
          uVar15 = uVar38 * -0x80000000 | uVar42;
          uStack_3c = uVar15 * -0x7a143579 +
                      uVar47 * -0x61c8864f + (int)((ulonglong)uVar47 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar19 * 0x27d4eb4f;
          uVar43 = (uint)lVar4;
          uVar38 = uVar43 + uStack_38;
          uVar41 = *puVar1 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar41 + (uint)CARRY4(uVar43,uStack_38);
          bVar53 = uVar50 < 0x20;
          uVar50 = uVar50 - 0x20;
          iVar48 = iVar48 - (uint)bVar53;
          uVar19 = uVar41 >> 1;
          uVar31 = uVar38 * -0x80000000 | uVar19;
          uVar38 = uVar38 >> 1;
          uVar43 = uVar41 * -0x80000000 | uVar38;
          uStack_38 = (uint)((ulonglong)uVar31 * 0x85ebca87);
          uVar41 = uVar43 * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)uVar31 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar50 < 0x20) <= (uint)-iVar48);
        uVar39 = uStack_38 << 1 | uVar41 >> 0x1f;
        uVar21 = uStack_34 << 7 | uStack_3c >> 0x19;
        uVar52 = uVar21 + uVar39;
        uVar22 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar49 = uVar52 + uVar22;
        uVar23 = uVar14 << 0x12 | uStack_28 >> 0xe;
        uVar40 = (uint)((ulonglong)uVar31 * 0x80000000) |
                 uVar43 * 0xf796ca9 +
                 uVar31 * -0x210ca4ff + (int)((ulonglong)uVar31 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar40 * 0x85ebca87;
        uVar24 = uVar49 + uVar23 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar24 * 0x85ebca87;
        uVar43 = (uint)lVar5;
        uVar32 = (uint)((ulonglong)uVar47 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar47 * -0x210ca4ff + (int)((ulonglong)uVar47 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar32 * 0x85ebca87;
        uVar15 = uVar43 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar15 * 0x85ebca87;
        uVar33 = (uint)lVar7;
        uVar34 = (uint)((ulonglong)uVar46 * 0x80000000) |
                 uVar18 * 0xf796ca9 +
                 uVar46 * -0x210ca4ff + (int)((ulonglong)uVar46 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar34 * 0x85ebca87;
        uVar18 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar18 * 0x85ebca87;
        uVar35 = (uint)lVar9;
        uVar36 = (uint)((ulonglong)uVar45 * 0x80000000) |
                 uVar16 * 0xf796ca9 +
                 uVar45 * -0x210ca4ff + (int)((ulonglong)uVar45 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar36 * 0x85ebca87;
        uVar16 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar16 * 0x85ebca87;
        uVar37 = (uint)lVar11;
        uVar50 = uVar37 + 0xc2b2ae63;
        iVar48 = (((((uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar41 * 2 | uStack_38 >> 0x1f) +
                     (uint)CARRY4(uVar21,uVar39) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                     (uint)CARRY4(uVar52,uVar22) + (uStack_28 * 0x40000 | uVar14 >> 0xe) +
                     (uint)CARRY4(uVar49,uVar23) ^
                    (uVar38 * -0x80000000 +
                    uVar19 * -0x784349ac + (int)((ulonglong)uVar31 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                   (uVar42 * -0x80000000 +
                   uVar17 * -0x784349ac + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                  (uVar30 * -0x80000000 +
                  uVar29 * -0x784349ac + (int)((ulonglong)uVar46 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar35) ^
                 (uVar28 * -0x80000000 +
                 uVar27 * -0x784349ac + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579 +
                 uVar16 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar37);
      }
      uStack_28 = uVar50 + uVar26;
      uVar14 = uVar26 & 0x1f;
      uVar50 = iVar48 + (uint)CARRY4(uVar50,uVar26);
      puVar51 = (uint *)((int)*(uint **)((int)piVar25 + 0x14) + (uVar26 & 0xffffffe0));
      uVar26 = 0;
      do {
        if (uVar26 == 0 && (7 < uVar14) <= uVar26) {
          if (uVar26 == 0 && (3 < uVar14) <= uVar26) {
            if (uVar14 == 0 && uVar26 == 0) {
              uStack_28 = uStack_28 ^ uVar50 >> 1;
              lVar4 = (ulonglong)uStack_28 * 0x27d4eb4f;
              uVar14 = (uint)lVar4;
              uVar26 = uVar50 * 0x27d4eb4f +
                       uStack_28 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
              uVar14 = (uVar14 >> 0x1d | uVar26 * 8) ^ uVar14;
              lVar4 = (ulonglong)uVar14 * 0x9e3779f9;
              uVar26 = (uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
                       uVar14 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
              *(uint *)((int)piVar25 + 0x20) = uVar26;
              *(uint *)((int)piVar25 + 0x1c) = uVar26 ^ (uint)lVar4;
              return;
            }
            iVar48 = 1;
            lVar4 = (ulonglong)(uint)(byte)*puVar51 * 0x165667c5;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = (uint)(byte)*puVar51 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0xb | uVar50 >> 0x15;
            lVar4 = (ulonglong)uVar27 * 0x85ebca87;
            uStack_28 = (uint)lVar4;
            uVar50 = (uVar50 << 0xb | uVar41 >> 0x15) * -0x7a143579 +
                     uVar27 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar29 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar51 * 0x85ebca87;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = *puVar51 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0x17 | uVar50 >> 9;
            lVar4 = (ulonglong)uVar27 * 0x27d4eb4f;
            uVar28 = (uint)lVar4;
            iVar48 = 4;
            uStack_28 = uVar28 + 0x9e3779f9;
            uVar50 = (uVar50 << 0x17 | uVar41 >> 9) * 0x27d4eb4f +
                     uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar28);
            uVar29 = 0xfffffffc;
          }
        }
        else {
          uVar28 = *puVar51;
          uVar41 = (uint)((ulonglong)uVar28 * 0x80000000) |
                   puVar51[1] * 0x27d4eb4f +
                   uVar28 * -0x3d4d51c3 + (int)((ulonglong)uVar28 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          iVar48 = 8;
          uVar27 = (uint)lVar4 ^ uStack_28;
          uVar50 = (puVar51[1] * -0x80000000 +
                   uVar28 * -0x6c158a59 + (int)((ulonglong)uVar28 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
          uVar41 = uVar27 << 0x1b | uVar50 >> 5;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          uVar28 = (uint)lVar4;
          uVar29 = 0xfffffff8;
          uStack_28 = uVar28 + 0xc2b2ae63;
          uVar50 = (uVar50 << 0x1b | uVar27 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar28);
        }
        bVar53 = CARRY4(uVar29,uVar14);
        uVar14 = uVar29 + uVar14;
        puVar51 = (uint *)((int)puVar51 + iVar48);
        uVar26 = (uVar26 - 1) + (uint)bVar53;
      } while( true );
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71660e14
// Entry: 0x71660e14 | Size: 2120 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71660f20) */

void FUN_71660e14(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int *piVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  uint uVar52;
  bool bVar53;
  int aiStack_68 [11];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar25 = (int *)0xfcc126c8;
  for (piVar13 = aiStack_68;
      ((*piVar13 != 0x6a4dab1f || piVar13[1] != 0x679b29b ||
       (piVar13[2] != 0x6efdd0cf || piVar13[3] != -0x33ed938)) ||
      (piVar13[4] != -0x4103aa2a || piVar13[5] != 0x370f3a77)); piVar13 = piVar13 + 1) {
  }
  piVar44 = (int *)piVar13[0xc017];
  bVar53 = piVar44 != (int *)0x0;
  if (bVar53) {
    piVar44 = piVar44 + 1;
    piVar25 = (int *)*piVar44;
  }
  piVar20 = piVar44;
  if (bVar53 && piVar25 != (int *)0x0) {
    do {
      piVar12 = piVar25;
      if ((uint)piVar25[4] <= (int)&DAT_70b42060 + 3U) {
        piVar25 = piVar25 + 1;
        piVar12 = piVar20;
      }
      piVar25 = (int *)*piVar25;
      piVar20 = piVar12;
    } while (piVar25 != (int *)0x0);
    if ((piVar12 != piVar44) && ((uint)piVar12[4] < (int)&DAT_70b42064 + 1U)) {
      DAT_70b42064 = 0x3f800000;
      piVar25 = (int *)piVar13[0xc017];
      do {
        piVar25 = *(int **)((int)piVar25 + 4);
        while( true ) {
          if (piVar25 == (int *)0x0) {
            piVar25 = (int *)FUN_712f6bb0(s_map__at__key_not_found_700619a7);
            goto LAB_71660f60;
          }
          if ((undefined4 *)piVar25[4] < (undefined4 *)((int)&DAT_70b42064 + 1)) break;
          piVar25 = (int *)*piVar25;
        }
      } while ((undefined4 *)piVar25[4] < &DAT_70b42064);
LAB_71660f60:
      uVar26 = *(uint *)((int)piVar25 + 0x18);
      if (uVar26 < 0x20) {
        iVar48 = 0x27d4eb7f;
        uVar50 = 0x56d677d6;
      }
      else {
        uStack_38 = 0xee40c5e7;
        uVar41 = 0x60ea283e;
        uStack_3c = 0xc2b2ae8d;
        iVar48 = 0;
        uStack_34 = 0x6854fb60;
        uStack_30 = 0x50;
        uStack_2c = 0x40801011;
        uStack_28 = 0x61c8869e;
        uVar14 = 0xba94458a;
        puVar51 = *(uint **)((int)piVar25 + 0x14);
        uVar50 = uVar26;
        do {
          lVar4 = (ulonglong)puVar51[6] * 0x27d4eb4f;
          uVar27 = (uint)lVar4;
          uVar28 = uVar27 + uVar14;
          uVar14 = puVar51[7] * 0x27d4eb4f +
                   puVar51[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar27,uVar14);
          uVar27 = uVar14 >> 1;
          uVar45 = uVar28 * -0x80000000 | uVar27;
          uVar28 = uVar28 >> 1;
          uVar16 = uVar14 * -0x80000000 | uVar28;
          uVar14 = (uint)((ulonglong)uVar45 * 0x85ebca87);
          uStack_28 = uVar16 * -0x7a143579 +
                      uVar45 * -0x61c8864f + (int)((ulonglong)uVar45 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar51[4] * 0x27d4eb4f;
          uVar29 = (uint)lVar4;
          uVar30 = uVar29 + uStack_2c;
          uVar17 = puVar51[5] * 0x27d4eb4f +
                   puVar51[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar29,uStack_2c);
          uVar29 = uVar17 >> 1;
          uVar46 = uVar30 * -0x80000000 | uVar29;
          uVar30 = uVar30 >> 1;
          uVar18 = uVar17 * -0x80000000 | uVar30;
          uStack_2c = (uint)((ulonglong)uVar46 * 0x85ebca87);
          puVar1 = puVar51 + 1;
          puVar2 = puVar51 + 3;
          uStack_30 = uVar18 * -0x7a143579 +
                      uVar46 * -0x61c8864f + (int)((ulonglong)uVar46 * 0x85ebca87 >> 0x20);
          puVar3 = puVar51 + 2;
          lVar4 = (ulonglong)*puVar3 * 0x27d4eb4f;
          uVar17 = (uint)lVar4;
          uVar19 = *puVar51;
          puVar51 = puVar51 + 8;
          uVar42 = uVar17 + uStack_34;
          uVar38 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar17,uStack_34);
          uVar17 = uVar38 >> 1;
          uVar47 = uVar42 * -0x80000000 | uVar17;
          uStack_34 = (uint)((ulonglong)uVar47 * 0x85ebca87);
          uVar42 = uVar42 >> 1;
          uVar15 = uVar38 * -0x80000000 | uVar42;
          uStack_3c = uVar15 * -0x7a143579 +
                      uVar47 * -0x61c8864f + (int)((ulonglong)uVar47 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar19 * 0x27d4eb4f;
          uVar43 = (uint)lVar4;
          uVar38 = uVar43 + uStack_38;
          uVar41 = *puVar1 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar41 + (uint)CARRY4(uVar43,uStack_38);
          bVar53 = uVar50 < 0x20;
          uVar50 = uVar50 - 0x20;
          iVar48 = iVar48 - (uint)bVar53;
          uVar19 = uVar41 >> 1;
          uVar31 = uVar38 * -0x80000000 | uVar19;
          uVar38 = uVar38 >> 1;
          uVar43 = uVar41 * -0x80000000 | uVar38;
          uStack_38 = (uint)((ulonglong)uVar31 * 0x85ebca87);
          uVar41 = uVar43 * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)uVar31 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar50 < 0x20) <= (uint)-iVar48);
        uVar39 = uStack_38 << 1 | uVar41 >> 0x1f;
        uVar21 = uStack_34 << 7 | uStack_3c >> 0x19;
        uVar52 = uVar21 + uVar39;
        uVar22 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar49 = uVar52 + uVar22;
        uVar23 = uVar14 << 0x12 | uStack_28 >> 0xe;
        uVar40 = (uint)((ulonglong)uVar31 * 0x80000000) |
                 uVar43 * 0xf796ca9 +
                 uVar31 * -0x210ca4ff + (int)((ulonglong)uVar31 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar40 * 0x85ebca87;
        uVar24 = uVar49 + uVar23 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar24 * 0x85ebca87;
        uVar43 = (uint)lVar5;
        uVar32 = (uint)((ulonglong)uVar47 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar47 * -0x210ca4ff + (int)((ulonglong)uVar47 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar32 * 0x85ebca87;
        uVar15 = uVar43 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar15 * 0x85ebca87;
        uVar33 = (uint)lVar7;
        uVar34 = (uint)((ulonglong)uVar46 * 0x80000000) |
                 uVar18 * 0xf796ca9 +
                 uVar46 * -0x210ca4ff + (int)((ulonglong)uVar46 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar34 * 0x85ebca87;
        uVar18 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar18 * 0x85ebca87;
        uVar35 = (uint)lVar9;
        uVar36 = (uint)((ulonglong)uVar45 * 0x80000000) |
                 uVar16 * 0xf796ca9 +
                 uVar45 * -0x210ca4ff + (int)((ulonglong)uVar45 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar36 * 0x85ebca87;
        uVar16 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar16 * 0x85ebca87;
        uVar37 = (uint)lVar11;
        uVar50 = uVar37 + 0xc2b2ae63;
        iVar48 = (((((uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar41 * 2 | uStack_38 >> 0x1f) +
                     (uint)CARRY4(uVar21,uVar39) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                     (uint)CARRY4(uVar52,uVar22) + (uStack_28 * 0x40000 | uVar14 >> 0xe) +
                     (uint)CARRY4(uVar49,uVar23) ^
                    (uVar38 * -0x80000000 +
                    uVar19 * -0x784349ac + (int)((ulonglong)uVar31 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                   (uVar42 * -0x80000000 +
                   uVar17 * -0x784349ac + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                  (uVar30 * -0x80000000 +
                  uVar29 * -0x784349ac + (int)((ulonglong)uVar46 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar35) ^
                 (uVar28 * -0x80000000 +
                 uVar27 * -0x784349ac + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579 +
                 uVar16 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar37);
      }
      uStack_28 = uVar50 + uVar26;
      uVar14 = uVar26 & 0x1f;
      uVar50 = iVar48 + (uint)CARRY4(uVar50,uVar26);
      puVar51 = (uint *)((int)*(uint **)((int)piVar25 + 0x14) + (uVar26 & 0xffffffe0));
      uVar26 = 0;
      do {
        if (uVar26 == 0 && (7 < uVar14) <= uVar26) {
          if (uVar26 == 0 && (3 < uVar14) <= uVar26) {
            if (uVar14 == 0 && uVar26 == 0) {
              uStack_28 = uStack_28 ^ uVar50 >> 1;
              lVar4 = (ulonglong)uStack_28 * 0x27d4eb4f;
              uVar14 = (uint)lVar4;
              uVar26 = uVar50 * 0x27d4eb4f +
                       uStack_28 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
              uVar14 = (uVar14 >> 0x1d | uVar26 * 8) ^ uVar14;
              lVar4 = (ulonglong)uVar14 * 0x9e3779f9;
              uVar26 = (uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
                       uVar14 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
              *(uint *)((int)piVar25 + 0x20) = uVar26;
              *(uint *)((int)piVar25 + 0x1c) = uVar26 ^ (uint)lVar4;
              return;
            }
            iVar48 = 1;
            lVar4 = (ulonglong)(uint)(byte)*puVar51 * 0x165667c5;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = (uint)(byte)*puVar51 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0xb | uVar50 >> 0x15;
            lVar4 = (ulonglong)uVar27 * 0x85ebca87;
            uStack_28 = (uint)lVar4;
            uVar50 = (uVar50 << 0xb | uVar41 >> 0x15) * -0x7a143579 +
                     uVar27 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar29 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar51 * 0x85ebca87;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = *puVar51 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0x17 | uVar50 >> 9;
            lVar4 = (ulonglong)uVar27 * 0x27d4eb4f;
            uVar28 = (uint)lVar4;
            iVar48 = 4;
            uStack_28 = uVar28 + 0x9e3779f9;
            uVar50 = (uVar50 << 0x17 | uVar41 >> 9) * 0x27d4eb4f +
                     uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar28);
            uVar29 = 0xfffffffc;
          }
        }
        else {
          uVar28 = *puVar51;
          uVar41 = (uint)((ulonglong)uVar28 * 0x80000000) |
                   puVar51[1] * 0x27d4eb4f +
                   uVar28 * -0x3d4d51c3 + (int)((ulonglong)uVar28 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          iVar48 = 8;
          uVar27 = (uint)lVar4 ^ uStack_28;
          uVar50 = (puVar51[1] * -0x80000000 +
                   uVar28 * -0x6c158a59 + (int)((ulonglong)uVar28 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
          uVar41 = uVar27 << 0x1b | uVar50 >> 5;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          uVar28 = (uint)lVar4;
          uVar29 = 0xfffffff8;
          uStack_28 = uVar28 + 0xc2b2ae63;
          uVar50 = (uVar50 << 0x1b | uVar27 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar28);
        }
        bVar53 = CARRY4(uVar29,uVar14);
        uVar14 = uVar29 + uVar14;
        puVar51 = (uint *)((int)puVar51 + iVar48);
        uVar26 = (uVar26 - 1) + (uint)bVar53;
      } while( true );
    }
  }
  return;
}


// =========================================================================
// Function: FUN_716616a8
// Entry: 0x716616a8 | Size: 2124 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x716617b8) */

void FUN_716616a8(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int *piVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  uint uVar52;
  bool bVar53;
  int aiStack_68 [11];
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar25 = (int *)0xfcc126c8;
  for (piVar13 = aiStack_68;
      ((*piVar13 != 0x6a4dab1f || piVar13[1] != 0x679b29b ||
       (piVar13[2] != 0x6efdd0cf || piVar13[3] != -0x33ed938)) ||
      (piVar13[4] != -0x4103aa2a || piVar13[5] != 0x370f3a77)); piVar13 = piVar13 + 1) {
  }
  piVar44 = (int *)piVar13[0xc017];
  bVar53 = piVar44 != (int *)0x0;
  if (bVar53) {
    piVar44 = piVar44 + 1;
    piVar25 = (int *)*piVar44;
  }
  piVar20 = piVar44;
  if (bVar53 && piVar25 != (int *)0x0) {
    do {
      piVar12 = piVar25;
      if ((uint)piVar25[4] <= (int)&DAT_70b42060 + 3U) {
        piVar25 = piVar25 + 1;
        piVar12 = piVar20;
      }
      piVar25 = (int *)*piVar25;
      piVar20 = piVar12;
    } while (piVar25 != (int *)0x0);
    if ((piVar12 != piVar44) && ((uint)piVar12[4] < (int)&DAT_70b42064 + 1U)) {
      DAT_70b42064 = 0x3e99999a;
      piVar25 = (int *)piVar13[0xc017];
      do {
        piVar25 = *(int **)((int)piVar25 + 4);
        while( true ) {
          if (piVar25 == (int *)0x0) {
            piVar25 = (int *)FUN_712f6bb0(s_map__at__key_not_found_700619a7);
            goto LAB_716617f8;
          }
          if ((undefined4 *)piVar25[4] < (undefined4 *)((int)&DAT_70b42064 + 1)) break;
          piVar25 = (int *)*piVar25;
        }
      } while ((undefined4 *)piVar25[4] < &DAT_70b42064);
LAB_716617f8:
      uVar26 = *(uint *)((int)piVar25 + 0x18);
      if (uVar26 < 0x20) {
        iVar48 = 0x27d4eb7f;
        uVar50 = 0x56d677d6;
      }
      else {
        uStack_38 = 0xee40c5e7;
        uVar41 = 0x60ea283e;
        uStack_3c = 0xc2b2ae8d;
        iVar48 = 0;
        uStack_34 = 0x6854fb60;
        uStack_30 = 0x50;
        uStack_2c = 0x40801011;
        uStack_28 = 0x61c8869e;
        uVar14 = 0xba94458a;
        puVar51 = *(uint **)((int)piVar25 + 0x14);
        uVar50 = uVar26;
        do {
          lVar4 = (ulonglong)puVar51[6] * 0x27d4eb4f;
          uVar27 = (uint)lVar4;
          uVar28 = uVar27 + uVar14;
          uVar14 = puVar51[7] * 0x27d4eb4f +
                   puVar51[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar27,uVar14);
          uVar27 = uVar14 >> 1;
          uVar45 = uVar28 * -0x80000000 | uVar27;
          uVar28 = uVar28 >> 1;
          uVar16 = uVar14 * -0x80000000 | uVar28;
          uVar14 = (uint)((ulonglong)uVar45 * 0x85ebca87);
          uStack_28 = uVar16 * -0x7a143579 +
                      uVar45 * -0x61c8864f + (int)((ulonglong)uVar45 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar51[4] * 0x27d4eb4f;
          uVar29 = (uint)lVar4;
          uVar30 = uVar29 + uStack_2c;
          uVar17 = puVar51[5] * 0x27d4eb4f +
                   puVar51[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar29,uStack_2c);
          uVar29 = uVar17 >> 1;
          uVar46 = uVar30 * -0x80000000 | uVar29;
          uVar30 = uVar30 >> 1;
          uVar18 = uVar17 * -0x80000000 | uVar30;
          uStack_2c = (uint)((ulonglong)uVar46 * 0x85ebca87);
          puVar1 = puVar51 + 1;
          puVar2 = puVar51 + 3;
          uStack_30 = uVar18 * -0x7a143579 +
                      uVar46 * -0x61c8864f + (int)((ulonglong)uVar46 * 0x85ebca87 >> 0x20);
          puVar3 = puVar51 + 2;
          lVar4 = (ulonglong)*puVar3 * 0x27d4eb4f;
          uVar17 = (uint)lVar4;
          uVar19 = *puVar51;
          puVar51 = puVar51 + 8;
          uVar42 = uVar17 + uStack_34;
          uVar38 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar17,uStack_34);
          uVar17 = uVar38 >> 1;
          uVar47 = uVar42 * -0x80000000 | uVar17;
          uStack_34 = (uint)((ulonglong)uVar47 * 0x85ebca87);
          uVar42 = uVar42 >> 1;
          uVar15 = uVar38 * -0x80000000 | uVar42;
          uStack_3c = uVar15 * -0x7a143579 +
                      uVar47 * -0x61c8864f + (int)((ulonglong)uVar47 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar19 * 0x27d4eb4f;
          uVar43 = (uint)lVar4;
          uVar38 = uVar43 + uStack_38;
          uVar41 = *puVar1 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar41 + (uint)CARRY4(uVar43,uStack_38);
          bVar53 = uVar50 < 0x20;
          uVar50 = uVar50 - 0x20;
          iVar48 = iVar48 - (uint)bVar53;
          uVar19 = uVar41 >> 1;
          uVar31 = uVar38 * -0x80000000 | uVar19;
          uVar38 = uVar38 >> 1;
          uVar43 = uVar41 * -0x80000000 | uVar38;
          uStack_38 = (uint)((ulonglong)uVar31 * 0x85ebca87);
          uVar41 = uVar43 * -0x7a143579 +
                   uVar31 * -0x61c8864f + (int)((ulonglong)uVar31 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar50 < 0x20) <= (uint)-iVar48);
        uVar39 = uStack_38 << 1 | uVar41 >> 0x1f;
        uVar21 = uStack_34 << 7 | uStack_3c >> 0x19;
        uVar52 = uVar21 + uVar39;
        uVar22 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar49 = uVar52 + uVar22;
        uVar23 = uVar14 << 0x12 | uStack_28 >> 0xe;
        uVar40 = (uint)((ulonglong)uVar31 * 0x80000000) |
                 uVar43 * 0xf796ca9 +
                 uVar31 * -0x210ca4ff + (int)((ulonglong)uVar31 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar40 * 0x85ebca87;
        uVar24 = uVar49 + uVar23 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar24 * 0x85ebca87;
        uVar43 = (uint)lVar5;
        uVar32 = (uint)((ulonglong)uVar47 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar47 * -0x210ca4ff + (int)((ulonglong)uVar47 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar32 * 0x85ebca87;
        uVar15 = uVar43 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar15 * 0x85ebca87;
        uVar33 = (uint)lVar7;
        uVar34 = (uint)((ulonglong)uVar46 * 0x80000000) |
                 uVar18 * 0xf796ca9 +
                 uVar46 * -0x210ca4ff + (int)((ulonglong)uVar46 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar34 * 0x85ebca87;
        uVar18 = uVar33 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar18 * 0x85ebca87;
        uVar35 = (uint)lVar9;
        uVar36 = (uint)((ulonglong)uVar45 * 0x80000000) |
                 uVar16 * 0xf796ca9 +
                 uVar45 * -0x210ca4ff + (int)((ulonglong)uVar45 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar36 * 0x85ebca87;
        uVar16 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar16 * 0x85ebca87;
        uVar37 = (uint)lVar11;
        uVar50 = uVar37 + 0xc2b2ae63;
        iVar48 = (((((uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar41 * 2 | uStack_38 >> 0x1f) +
                     (uint)CARRY4(uVar21,uVar39) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                     (uint)CARRY4(uVar52,uVar22) + (uStack_28 * 0x40000 | uVar14 >> 0xe) +
                     (uint)CARRY4(uVar49,uVar23) ^
                    (uVar38 * -0x80000000 +
                    uVar19 * -0x784349ac + (int)((ulonglong)uVar31 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                   (uVar42 * -0x80000000 +
                   uVar17 * -0x784349ac + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                  (uVar30 * -0x80000000 +
                  uVar29 * -0x784349ac + (int)((ulonglong)uVar46 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar35) ^
                 (uVar28 * -0x80000000 +
                 uVar27 * -0x784349ac + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579 +
                 uVar16 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar37);
      }
      uStack_28 = uVar50 + uVar26;
      uVar14 = uVar26 & 0x1f;
      uVar50 = iVar48 + (uint)CARRY4(uVar50,uVar26);
      puVar51 = (uint *)((int)*(uint **)((int)piVar25 + 0x14) + (uVar26 & 0xffffffe0));
      uVar26 = 0;
      do {
        if (uVar26 == 0 && (7 < uVar14) <= uVar26) {
          if (uVar26 == 0 && (3 < uVar14) <= uVar26) {
            if (uVar14 == 0 && uVar26 == 0) {
              uStack_28 = uStack_28 ^ uVar50 >> 1;
              lVar4 = (ulonglong)uStack_28 * 0x27d4eb4f;
              uVar14 = (uint)lVar4;
              uVar26 = uVar50 * 0x27d4eb4f +
                       uStack_28 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
              uVar14 = (uVar14 >> 0x1d | uVar26 * 8) ^ uVar14;
              lVar4 = (ulonglong)uVar14 * 0x9e3779f9;
              uVar26 = (uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
                       uVar14 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
              *(uint *)((int)piVar25 + 0x20) = uVar26;
              *(uint *)((int)piVar25 + 0x1c) = uVar26 ^ (uint)lVar4;
              return;
            }
            iVar48 = 1;
            lVar4 = (ulonglong)(uint)(byte)*puVar51 * 0x165667c5;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = (uint)(byte)*puVar51 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0xb | uVar50 >> 0x15;
            lVar4 = (ulonglong)uVar27 * 0x85ebca87;
            uStack_28 = (uint)lVar4;
            uVar50 = (uVar50 << 0xb | uVar41 >> 0x15) * -0x7a143579 +
                     uVar27 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar29 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar51 * 0x85ebca87;
            uVar41 = (uint)lVar4 ^ uStack_28;
            uVar50 = *puVar51 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
            uVar27 = uVar41 << 0x17 | uVar50 >> 9;
            lVar4 = (ulonglong)uVar27 * 0x27d4eb4f;
            uVar28 = (uint)lVar4;
            iVar48 = 4;
            uStack_28 = uVar28 + 0x9e3779f9;
            uVar50 = (uVar50 << 0x17 | uVar41 >> 9) * 0x27d4eb4f +
                     uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar28);
            uVar29 = 0xfffffffc;
          }
        }
        else {
          uVar28 = *puVar51;
          uVar41 = (uint)((ulonglong)uVar28 * 0x80000000) |
                   puVar51[1] * 0x27d4eb4f +
                   uVar28 * -0x3d4d51c3 + (int)((ulonglong)uVar28 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          iVar48 = 8;
          uVar27 = (uint)lVar4 ^ uStack_28;
          uVar50 = (puVar51[1] * -0x80000000 +
                   uVar28 * -0x6c158a59 + (int)((ulonglong)uVar28 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar50;
          uVar41 = uVar27 << 0x1b | uVar50 >> 5;
          lVar4 = (ulonglong)uVar41 * 0x85ebca87;
          uVar28 = (uint)lVar4;
          uVar29 = 0xfffffff8;
          uStack_28 = uVar28 + 0xc2b2ae63;
          uVar50 = (uVar50 << 0x1b | uVar27 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar28);
        }
        bVar53 = CARRY4(uVar29,uVar14);
        uVar14 = uVar29 + uVar14;
        puVar51 = (uint *)((int)puVar51 + iVar48);
        uVar26 = (uVar26 - 1) + (uint)bVar53;
      } while( true );
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71661f40
// Entry: 0x71661f40 | Size: 2148 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71662058) */

void FUN_71661f40(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  int *piVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  bool bVar45;
  int aiStack_68 [2];
  uint *puStack_60;
  int aiStack_5c [6];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar19 = (int *)0xfcc126c8;
  for (piVar13 = aiStack_68;
      ((*piVar13 != 0x6a4dab1f || piVar13[1] != 0x679b29b ||
       (piVar13[2] != 0x6efdd0cf || piVar13[3] != -0x33ed938)) ||
      (piVar13[4] != -0x4103aa2a || piVar13[5] != 0x370f3a77)); piVar13 = piVar13 + 1) {
  }
  piVar38 = (int *)piVar13[0xc017];
  bVar45 = piVar38 != (int *)0x0;
  if (bVar45) {
    piVar38 = piVar38 + 1;
    piVar19 = (int *)*piVar38;
  }
  piVar16 = piVar38;
  if (bVar45 && piVar19 != (int *)0x0) {
    do {
      piVar12 = piVar19;
      if ((uint)piVar19[4] <= (int)&DAT_70b42060 + 3U) {
        piVar19 = piVar19 + 1;
        piVar12 = piVar16;
      }
      piVar19 = (int *)*piVar19;
      piVar16 = piVar12;
    } while (piVar19 != (int *)0x0);
    if ((piVar12 != piVar38) && ((uint)piVar12[4] < (int)&DAT_70b42064 + 1U)) {
      DAT_70b42064 = 0x3f800000;
      aiStack_5c[0] = piVar13[0xc017];
      do {
        aiStack_5c[0] = *(int *)(aiStack_5c[0] + 4);
        while( true ) {
          if (aiStack_5c[0] == 0) {
            aiStack_5c[0] = FUN_712f6bb0(s_map__at__key_not_found_700619a7);
            goto LAB_71662098;
          }
          if (*(undefined4 **)(aiStack_5c[0] + 0x10) < (undefined4 *)((int)&DAT_70b42064 + 1))
          break;
          aiStack_5c[0] = *(int *)aiStack_5c[0];
        }
      } while (*(undefined4 **)(aiStack_5c[0] + 0x10) < &DAT_70b42064);
LAB_71662098:
      uVar20 = *(uint *)(aiStack_5c[0] + 0x18);
      puVar35 = *(uint **)(aiStack_5c[0] + 0x14);
      if (uVar20 < 0x20) {
        iVar40 = 0x27d4eb7f;
        uVar21 = 0x56d677d6;
      }
      else {
        uStack_38 = 0xee40c5e7;
        uStack_3c = 0xc2b2ae8d;
        iVar40 = 0;
        uStack_34 = 0x6854fb60;
        uStack_30 = 0x50;
        uStack_2c = 0x40801011;
        uStack_28 = 0x61c8869e;
        uStack_40 = 0xba94458a;
        puVar17 = puVar35;
        uVar21 = 0x60ea283e;
        uVar42 = uVar20;
        do {
          uStack_44 = uVar21;
          lVar4 = (ulonglong)puVar17[6] * 0x27d4eb4f;
          uVar21 = (uint)lVar4;
          uVar22 = uVar21 + uStack_40;
          uVar21 = puVar17[7] * 0x27d4eb4f +
                   puVar17[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_28 +
                   (uint)CARRY4(uVar21,uStack_40);
          uVar15 = uVar21 >> 1;
          aiStack_5c[5] = uVar22 * -0x80000000 | uVar15;
          uVar22 = uVar22 >> 1;
          aiStack_5c[4] = uVar21 * -0x80000000 | uVar22;
          uStack_40 = (uint)((ulonglong)(uint)aiStack_5c[5] * 0x85ebca87);
          uStack_28 = aiStack_5c[4] * -0x7a143579 +
                      aiStack_5c[5] * -0x61c8864f +
                      (int)((ulonglong)(uint)aiStack_5c[5] * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar17[4] * 0x27d4eb4f;
          uVar21 = (uint)lVar4;
          uVar23 = uVar21 + uStack_2c;
          uVar21 = puVar17[5] * 0x27d4eb4f +
                   puVar17[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_30 +
                   (uint)CARRY4(uVar21,uStack_2c);
          uVar37 = uVar21 >> 1;
          aiStack_5c[3] = uVar23 * -0x80000000 | uVar37;
          uVar23 = uVar23 >> 1;
          aiStack_5c[2] = uVar21 * -0x80000000 | uVar23;
          uStack_2c = (uint)((ulonglong)(uint)aiStack_5c[3] * 0x85ebca87);
          puVar1 = puVar17 + 1;
          uStack_30 = aiStack_5c[2] * -0x7a143579 +
                      aiStack_5c[3] * -0x61c8864f +
                      (int)((ulonglong)(uint)aiStack_5c[3] * 0x85ebca87 >> 0x20);
          puVar2 = puVar17 + 2;
          puVar3 = puVar17 + 3;
          lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar43 = (uint)lVar4;
          uVar21 = *puVar17;
          puVar17 = puVar17 + 8;
          uVar34 = uVar43 + uStack_34;
          uVar31 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar43,uStack_34);
          uVar43 = uVar31 >> 1;
          uVar39 = uVar34 * -0x80000000 | uVar43;
          uStack_34 = (uint)((ulonglong)uVar39 * 0x85ebca87);
          uVar34 = uVar34 >> 1;
          aiStack_5c[1] = uVar31 * -0x80000000 | uVar34;
          uStack_3c = aiStack_5c[1] * -0x7a143579 +
                      uVar39 * -0x61c8864f + (int)((ulonglong)uVar39 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar21 * 0x27d4eb4f;
          uVar31 = (uint)lVar4;
          uVar36 = uVar31 + uStack_38;
          uVar21 = *puVar1 * 0x27d4eb4f + uVar21 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_44 + (uint)CARRY4(uVar31,uStack_38);
          bVar45 = uVar42 < 0x20;
          uVar42 = uVar42 - 0x20;
          iVar40 = iVar40 - (uint)bVar45;
          uVar31 = uVar21 >> 1;
          uVar24 = uVar36 * -0x80000000 | uVar31;
          uVar36 = uVar36 >> 1;
          uVar14 = uVar21 * -0x80000000 | uVar36;
          uStack_38 = (uint)((ulonglong)uVar24 * 0x85ebca87);
          uVar21 = uVar14 * -0x7a143579 +
                   uVar24 * -0x61c8864f + (int)((ulonglong)uVar24 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar42 < 0x20) <= (uint)-iVar40);
        uVar32 = uStack_38 << 1 | uVar21 >> 0x1f;
        uVar42 = uStack_34 << 7 | uStack_3c >> 0x19;
        uVar44 = uVar42 + uVar32;
        uVar18 = uStack_2c << 0xc | uStack_30 >> 0x14;
        uVar41 = uVar44 + uVar18;
        uStack_2c = (uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar21 * 2 | uStack_38 >> 0x1f) +
                    (uint)CARRY4(uVar42,uVar32) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                    (uint)CARRY4(uVar44,uVar18);
        uStack_30 = (uint)((ulonglong)uVar24 * 0x80000000 >> 0x20);
        uVar18 = uStack_40 << 0x12 | uStack_28 >> 0xe;
        uVar33 = (uint)((ulonglong)uVar24 * 0x80000000) |
                 uVar14 * 0xf796ca9 +
                 uVar24 * -0x210ca4ff + (int)((ulonglong)uVar24 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar33 * 0x85ebca87;
        uVar14 = uVar41 + uVar18 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar14 * 0x85ebca87;
        uVar42 = (uint)lVar5;
        uVar25 = (uint)((ulonglong)uVar39 * 0x80000000) |
                 aiStack_5c[1] * 0xf796ca9 +
                 uVar39 * -0x210ca4ff + (int)((ulonglong)uVar39 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar25 * 0x85ebca87;
        uVar24 = uVar42 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar24 * 0x85ebca87;
        uVar26 = (uint)lVar7;
        uVar27 = (uint)((ulonglong)(uint)aiStack_5c[3] * 0x80000000) |
                 (uint)(aiStack_5c[2] * 0xf796ca9 +
                       aiStack_5c[3] * -0x210ca4ff +
                       (int)((ulonglong)(uint)aiStack_5c[3] * 0xf796ca9 >> 0x20)) >> 1;
        lVar8 = (ulonglong)uVar27 * 0x85ebca87;
        uVar32 = uVar26 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar32 * 0x85ebca87;
        uVar28 = (uint)lVar9;
        uVar29 = (uint)((ulonglong)(uint)aiStack_5c[5] * 0x80000000) |
                 (uint)(aiStack_5c[4] * 0xf796ca9 +
                       aiStack_5c[5] * -0x210ca4ff +
                       (int)((ulonglong)(uint)aiStack_5c[5] * 0xf796ca9 >> 0x20)) >> 1;
        lVar10 = (ulonglong)uVar29 * 0x85ebca87;
        uVar44 = uVar28 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar44 * 0x85ebca87;
        uVar30 = (uint)lVar11;
        uVar21 = uVar30 + 0xc2b2ae63;
        iVar40 = ((((uStack_2c + (uStack_28 * 0x40000 | uStack_40 >> 0xe) +
                     (uint)CARRY4(uVar41,uVar18) ^
                    (uVar36 * -0x80000000 + uVar31 * -0x784349ac + uStack_30) * -0x7a143579 +
                    uVar33 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                    uVar14 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                    (uint)(0x3d4d519c < uVar42) ^
                   (uVar34 * -0x80000000 +
                   uVar43 * -0x784349ac + (int)((ulonglong)uVar39 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                  (uVar23 * -0x80000000 +
                  uVar37 * -0x784349ac + (int)((ulonglong)(uint)aiStack_5c[3] * 0x80000000 >> 0x20))
                  * -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar28) ^
                 (uVar22 * -0x80000000 +
                 uVar15 * -0x784349ac + (int)((ulonglong)(uint)aiStack_5c[5] * 0x80000000 >> 0x20))
                 * -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                 -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar30);
        aiStack_68[1] = uVar20;
        puStack_60 = puVar35;
      }
      uStack_28 = uVar21 + uVar20;
      uVar42 = uVar20 & 0x1f;
      uVar21 = iVar40 + (uint)CARRY4(uVar21,uVar20);
      puVar35 = (uint *)((int)puVar35 + (uVar20 & 0xffffffe0));
      uVar20 = 0;
      do {
        if (uVar20 == 0 && (7 < uVar42) <= uVar20) {
          if (uVar20 == 0 && (3 < uVar42) <= uVar20) {
            if (uVar42 == 0 && uVar20 == 0) goto LAB_71662704;
            iVar40 = 1;
            lVar4 = (ulonglong)(uint)(byte)*puVar35 * 0x165667c5;
            uVar15 = (uint)lVar4 ^ uStack_28;
            uVar21 = (uint)(byte)*puVar35 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar21;
            uVar22 = uVar15 << 0xb | uVar21 >> 0x15;
            lVar4 = (ulonglong)uVar22 * 0x85ebca87;
            uStack_28 = (uint)lVar4;
            uVar21 = (uVar21 << 0xb | uVar15 >> 0x15) * -0x7a143579 +
                     uVar22 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar23 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar35 * 0x85ebca87;
            uVar15 = (uint)lVar4 ^ uStack_28;
            uVar21 = *puVar35 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar21;
            uVar22 = uVar15 << 0x17 | uVar21 >> 9;
            lVar4 = (ulonglong)uVar22 * 0x27d4eb4f;
            uVar37 = (uint)lVar4;
            iVar40 = 4;
            uStack_28 = uVar37 + 0x9e3779f9;
            uVar21 = (uVar21 << 0x17 | uVar15 >> 9) * 0x27d4eb4f +
                     uVar22 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar37);
            uVar23 = 0xfffffffc;
          }
        }
        else {
          uVar37 = *puVar35;
          uVar15 = (uint)((ulonglong)uVar37 * 0x80000000) |
                   puVar35[1] * 0x27d4eb4f +
                   uVar37 * -0x3d4d51c3 + (int)((ulonglong)uVar37 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar15 * 0x85ebca87;
          iVar40 = 8;
          uVar22 = (uint)lVar4 ^ uStack_28;
          uVar21 = (puVar35[1] * -0x80000000 +
                   uVar37 * -0x6c158a59 + (int)((ulonglong)uVar37 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar15 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar21;
          uVar15 = uVar22 << 0x1b | uVar21 >> 5;
          lVar4 = (ulonglong)uVar15 * 0x85ebca87;
          uVar37 = (uint)lVar4;
          uVar23 = 0xfffffff8;
          uStack_28 = uVar37 + 0xc2b2ae63;
          uVar21 = (uVar21 << 0x1b | uVar22 >> 5) * -0x7a143579 +
                   uVar15 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar37);
        }
        bVar45 = CARRY4(uVar23,uVar42);
        uVar42 = uVar23 + uVar42;
        puVar35 = (uint *)((int)puVar35 + iVar40);
        uVar20 = (uVar20 - 1) + (uint)bVar45;
      } while( true );
    }
  }
LAB_71661ffc:
                    /* WARNING: Could not recover jumptable at 0x7166200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8070)();
  return;
LAB_71662704:
  uVar20 = uStack_28 ^ uVar21 >> 1;
  lVar4 = (ulonglong)uVar20 * 0x27d4eb4f;
  uVar42 = (uint)lVar4;
  uVar20 = uVar21 * 0x27d4eb4f + uVar20 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar42 = (uVar42 >> 0x1d | uVar20 * 8) ^ uVar42;
  lVar4 = (ulonglong)uVar42 * 0x9e3779f9;
  uVar20 = (uVar20 ^ uVar20 >> 0x1d) * -0x61c88607 +
           uVar42 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
  *(uint *)(aiStack_5c[0] + 0x20) = uVar20;
  *(uint *)(aiStack_5c[0] + 0x1c) = uVar20 ^ (uint)lVar4;
  goto LAB_71661ffc;
}


// =========================================================================
// Function: FUN_716627fc
// Entry: 0x716627fc | Size: 44 bytes
// =========================================================================

undefined8 FUN_716627fc(undefined4 param_1,undefined4 param_2)

{
  software_interrupt(0);
  return CONCAT44(param_2,param_1);
}


// =========================================================================
// Function: FUN_71662840
// Entry: 0x71662840 | Size: 1796 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71662d10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71662840(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716627fc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8070 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71661f40;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7165fcec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71660580;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71660e14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716616a8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x18a;
  uStack_48 = 0x1bb;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab9605 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa0;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab9605;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccad32) >> 2 ^ 0xacae67;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa0;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar3 = 0x18a;
  do {
    iVar4 = (int)(char)bStack_51;
    bStack_51 = bStack_51 + 1;
    uVar3 = uVar3 ^ (iVar4 + 0xccaaff) - uVar3 ^ 0x1bb;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfe99) + DAT_7120187c) = &DAT_70b42064;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iVar2,_ext___stack_chk_guard,uVar3,0);
}


// =========================================================================
// Function: FUN_71663220
// Entry: 0x71663220 | Size: 272964 bytes
// =========================================================================
// Decompile failed: Exception while decompiling 71663220: process: timeout


// =========================================================================
// Function: FUN_716aa108
// Entry: 0x716aa108 | Size: 496 bytes
// =========================================================================

void FUN_716aa108(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  DAT_711f6965 = *DAT_7118e024;
  DAT_711f6960 = param_1;
  uVar9 = thunk_FUN_715ec3a8();
  bVar8 = (int)uVar9 != 0;
  uVar7 = 0;
  DAT_711f6964 = (char)uVar9;
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  if (bVar8) {
    iVar5 = DAT_711f6960;
  }
  DAT_711f6968 = 0;
  if ((bVar8 && iVar5 != 0) && (DAT_711f6965 == '\0')) {
    uVar1 = *DAT_71180c18;
    uVar3 = FUN_7151df5c();
    *DAT_71180c18 = uVar3;
    thunk_FUN_7151e3a8();
    FUN_7151e55c(DAT_711f6964);
    FUN_7151dc64();
    FUN_7151de30(DAT_711f6964);
    thunk_FUN_7151e868();
    FUN_7151e770(DAT_711f6964);
    sVar2 = *DAT_71180c1c;
    sVar4 = FUN_7151df5c(DAT_711f6964);
    *DAT_71180c1c = sVar4;
    if (*DAT_71180c1c == 4) {
      *DAT_71180c1c = 0;
    }
    DAT_711f29ba = 1;
    DAT_711f29b9 = 1;
    *DAT_7118e024 = DAT_711f6964;
    (*DAT_700c8074)(param_1);
    DAT_711f29ba = 0;
    DAT_711f29b9 = 0;
    *DAT_7118e024 = '\0';
    *DAT_71180c18 = uVar1;
    FUN_7151dcd8();
    thunk_FUN_7151e450();
    thunk_FUN_7151e684();
    *DAT_71180c1c = sVar2;
  }
  else {
    iVar5 = FUN_713c301c(0);
    if (iVar5 == param_1) {
      uVar6 = (uint)*(byte *)(param_1 + 0x485);
      uVar7 = 1;
      bVar8 = (*(byte *)(param_1 + 0x485) & 1) != 0;
      if (bVar8) {
        uVar6 = *(uint *)(param_1 + 0x590);
      }
      if ((bVar8 && uVar6 != 0) && (uVar7 = 3, *(int *)(uVar6 + 0x464) == param_1)) {
        uVar7 = 2;
      }
    }
    DAT_711f29b8 = 1;
    DAT_711f6968 = uVar7;
    (*DAT_700c8074)(param_1);
    DAT_711f29b8 = 0;
  }
  DAT_711f6968 = 0;
  return;
}


// =========================================================================
// Function: FUN_716aa63c
// Entry: 0x716aa63c | Size: 1308 bytes
// =========================================================================

void FUN_716aa63c(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  bool bVar3;
  char *pcVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  int iVar14;
  int unaff_r6;
  int iVar15;
  code *pcVar16;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar16 = (code *)0x0;
  switch(*(undefined4 *)(param_1 + 0x5a4)) {
  case 0:
    pcVar16 = DAT_711f29bc;
    break;
  case 1:
    pcVar16 = DAT_711f29d4;
    break;
  case 2:
    pcVar16 = DAT_711f29d8;
    break;
  case 3:
    pcVar16 = DAT_711f29cc;
    break;
  case 4:
    pcVar16 = DAT_711f29c8;
    break;
  case 5:
    pcVar16 = DAT_711f29c0;
    break;
  case 9:
    pcVar16 = DAT_711f29c4;
    break;
  case 10:
    pcVar16 = DAT_711f29d0;
    break;
  case 0xb:
    pcVar16 = DAT_711f29e0;
  }
  iVar15 = 0;
  DAT_711f6965 = *DAT_7118e024;
  iVar14 = *(int *)(param_1 + 0x464);
  iVar8 = FUN_713c301c(0);
  DAT_711f6968 = (uint)(iVar14 == iVar8) << 1;
  if (DAT_711f6d58 != 0) {
    unaff_r6 = *(int *)(DAT_711f6d58 + 4);
  }
  if ((((DAT_711f6d58 != 0 && unaff_r6 != 0) &&
       (uVar9 = FUN_717b92b8(unaff_r6,param_1), uVar9 != 0xffff)) && (uVar9 < 0x7d1)) &&
     (*(char *)(unaff_r6 + uVar9 + 0x3e88) != '\0')) {
    iVar15 = *(int *)(unaff_r6 + uVar9 * 4);
    DAT_711f696c = 0;
    if (iVar15 == 0) {
      bVar3 = true;
      iVar15 = 0;
    }
    else {
      uVar11 = FUN_71602ffc(iVar15);
      bVar3 = false;
      iVar8 = FUN_71ba2cf0(uVar11,0);
      if ((iVar8 == 0) &&
         ((iVar8 = thunk_FUN_715f4594(iVar15), iVar8 == 0 ||
          (iVar8 = thunk_FUN_715f4594(iVar15), iVar8 == 9)))) {
        FUN_7136cdfc(&uStack_30);
        thunk_FUN_715608f0(iVar15,&uStack_30);
        uVar11 = uStack_28;
        uVar12 = FUN_71ba21e8(uStack_2c,uStack_2c);
        uVar10 = FUN_71ba21e8(uStack_30,uStack_30);
        uVar12 = FUN_71ba0b38(uVar10,uVar12);
        uVar11 = FUN_71ba21e8(uVar11,uVar11);
        FUN_71ba0b38(uVar11,uVar12);
        uVar11 = imp_sqrtf();
        uVar12 = FUN_71602ffc(iVar15);
        iVar8 = FUN_71ba2d70(uVar11,uVar12);
        if (iVar8 == 0) {
LAB_716aa9a0:
          uVar12 = FUN_71602ffc(iVar15);
          iVar8 = FUN_71ba2d70(uVar11,uVar12);
          if (iVar8 != 0) {
            iVar8 = FUN_71ba2d10(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x90),0);
            uVar13 = 0xff;
            if (iVar8 != 0) goto LAB_716aa9d8;
          }
        }
        else {
          iVar8 = FUN_71ba2d70(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x90),0);
          uVar13 = 1;
          if (iVar8 == 0) goto LAB_716aa9a0;
LAB_716aa9d8:
          DAT_711f696c = uVar13;
        }
      }
    }
  }
  else {
    bVar3 = true;
    DAT_711f696c = 0;
  }
  if (*(int *)(param_1 + 0x464) == 0) {
LAB_716aa868:
    FUN_7131e4d8(param_1 + 0x13c);
    (*pcVar16)(param_1);
    DAT_711f6968 = 0;
    return;
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x464) + 0x59c);
  if (((iVar8 != 0) || (DAT_711f6968 == 2)) || (DAT_711f6965 != '\0')) {
    if (iVar8 == 0 && DAT_711f6968 == 2) {
      if ((*(byte *)(param_1 + 0x42c) & 0x10) == 0) {
        if (*(int *)(param_1 + 0x5a4) != 3) goto LAB_716aa868;
        bVar5 = *(byte *)(param_1 + 0x3a) | 0x20;
      }
      else {
        bVar5 = *(byte *)(param_1 + 0x3a) & 0xdf;
      }
      *(byte *)(param_1 + 0x3a) = bVar5;
    }
    goto LAB_716aa868;
  }
  DAT_711f6964 = thunk_FUN_715ec3a8();
  uVar1 = *DAT_71180c18;
  uVar6 = FUN_7151df5c();
  *DAT_71180c18 = uVar6;
  sVar2 = *DAT_71180c1c;
  sVar7 = FUN_7151df5c(DAT_711f6964);
  *DAT_71180c1c = sVar7;
  if (*DAT_71180c1c == 4) {
    *DAT_71180c1c = 0;
  }
  thunk_FUN_7151e3a8();
  FUN_7151e55c(DAT_711f6964);
  if ((*(byte *)(param_1 + 0x42c) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x5a4) != 3) goto LAB_716aa9f4;
    bVar5 = *(byte *)(param_1 + 0x3a) | 0x20;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x3a) & 0xdf;
  }
  *(byte *)(param_1 + 0x3a) = bVar5;
LAB_716aa9f4:
  uVar11 = *(undefined4 *)(param_1 + 0x65c);
  uVar12 = *(undefined4 *)(param_1 + 0x660);
  *DAT_7118e024 = '\0';
  *(undefined4 *)(*(int *)(param_1 + 0x464) + 0x59c) = 4;
  uVar13 = *(undefined1 *)(param_1 + 0x3a);
  *(undefined1 *)(param_1 + 0x3a) = 0x1a;
  FUN_7131e4d8(param_1 + 0x13c);
  pcVar4 = DAT_7118e024;
  *(undefined1 *)(param_1 + 0x3a) = uVar13;
  *(undefined4 *)(*(int *)(param_1 + 0x464) + 0x59c) = 0;
  *pcVar4 = DAT_711f6964;
  FUN_7136cdfc(&uStack_30);
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    FUN_7136d040(&uStack_30,param_1 + 0x48);
  }
  (*pcVar16)(param_1);
  iVar14 = *(int *)(param_1 + 0x5a4);
  if ((iVar14 - 3U < 3) && (*(int *)(param_1 + 0x14) != 0)) {
    *(undefined4 *)(param_1 + 0x50) = uStack_28;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38) = *(undefined4 *)(iVar8 + 0x38);
    iVar14 = *(int *)(param_1 + 0x5a4);
  }
  if (iVar14 - 9U < 2) {
    *(undefined4 *)(param_1 + 0x660) = uVar12;
    *(undefined4 *)(param_1 + 0x65c) = uVar11;
    if (!bVar3) {
      FUN_71603338(iVar15);
    }
  }
  *DAT_7118e024 = '\0';
  *DAT_71180c18 = uVar1;
  *DAT_71180c1c = sVar2;
  thunk_FUN_7151e450();
  DAT_711f6968 = 0;
  return;
}


// =========================================================================
// Function: FUN_716ab224
// Entry: 0x716ab224 | Size: 40 bytes
// =========================================================================

undefined4 FUN_716ab224(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = imp_isnanf();
  if (iVar1 == 0) {
    uVar2 = FUN_7133b360(param_1);
    return uVar2;
  }
  return 0;
}


// =========================================================================
// Function: FUN_716ab29c
// Entry: 0x716ab29c | Size: 576 bytes
// =========================================================================

void FUN_716ab29c(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_716aa01c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716aa088;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716a9fac;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8074 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716aa0f4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f29bc = *(undefined4 *)(DAT_7120187c + 0x66d6a4);
  *(undefined4 *)(DAT_7120187c + 0x66d6a4) = FUN_716aa63c;
  DAT_711f29c0 = *(undefined4 *)(DAT_7120187c + 0x66da4c);
  *(code **)(DAT_7120187c + 0x66da4c) = FUN_716aa63c;
  DAT_711f29c4 = *(undefined4 *)(DAT_7120187c + 0x66d81c);
  *(code **)(DAT_7120187c + 0x66d81c) = FUN_716aa63c;
  DAT_711f29c8 = *(undefined4 *)(DAT_7120187c + 0x66ddb0);
  *(code **)(DAT_7120187c + 0x66ddb0) = FUN_716aa63c;
  DAT_711f29cc = *(undefined4 *)(DAT_7120187c + 0x66db60);
  *(undefined4 *)(DAT_7120187c + 0x66db60) = FUN_716aa63c;
  DAT_711f29d0 = *(undefined4 *)(DAT_7120187c + 0x66d934);
  *(code **)(DAT_7120187c + 0x66d934) = FUN_716aa63c;
  DAT_711f29d4 = *(undefined4 *)(DAT_7120187c + 0x66dc88);
  *(code **)(DAT_7120187c + 0x66dc88) = FUN_716aa63c;
  DAT_711f29d8 = *(undefined4 *)(DAT_7120187c + 0x66ded8);
  *(code **)(DAT_7120187c + 0x66ded8) = FUN_716aa63c;
  DAT_711f29dc = *(undefined4 *)(DAT_7120187c + 0x66e128);
  *(undefined4 *)(DAT_7120187c + 0x66e128) = FUN_716aa63c;
  DAT_711f29e0 = *(undefined4 *)(DAT_7120187c + 0x66e000);
  *(code **)(DAT_7120187c + 0x66e000) = FUN_716aa63c;
  *DAT_7120188c = FUN_716ab224;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716ab818
// Entry: 0x716ab818 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716ab818(undefined4 param_1,char *param_2)

{
  undefined4 uStack_220;
  undefined1 auStack_21c [512];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  imp___strcpy_chk(auStack_21c,DAT_70b35fac,0x200);
  imp___strcat_chk(auStack_21c,param_1,0x200);
  FUN_714c5f6c(*DAT_70b35fa8,&uStack_220,auStack_21c,*param_2 == 'w');
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(uStack_220);
  }
  return;
}


// =========================================================================
// Function: FUN_716ab9c8
// Entry: 0x716ab9c8 | Size: 112 bytes
// =========================================================================

void FUN_716ab9c8(void)

{
  DAT_700c8078 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716ab818;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716abc60
// Entry: 0x716abc60 | Size: 828 bytes
// =========================================================================

void FUN_716abc60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_70c38f30;
  iVar1 = DAT_70b46c28;
  DAT_711f29fc = (undefined1)param_1;
  puVar4 = (undefined4 *)(DAT_70b46c28 + 4);
  if (param_1 != 0) {
    DAT_711f2a00 = *puVar4;
    DAT_711f2a1c = *(undefined4 *)(DAT_70b46c28 + 8);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *puVar4 = 0xbfc00000;
    *(undefined4 *)(iVar1 + 8) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    DAT_711f2a04 = *(undefined4 *)(iVar1 + 0x40);
    DAT_711f2a20 = *(undefined4 *)(iVar1 + 0x44);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *(undefined4 *)(iVar1 + 0x40) = 0xbfc00000;
    *(undefined4 *)(iVar1 + 0x44) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    DAT_711f2a08 = *(undefined4 *)(iVar1 + 0x7c);
    DAT_711f2a24 = *(undefined4 *)(iVar1 + 0x80);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *(undefined4 *)(iVar1 + 0x7c) = 0xbfc00000;
    *(undefined4 *)(iVar1 + 0x80) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    DAT_711f2a0c = *(undefined4 *)(iVar1 + 0xb8);
    DAT_711f2a28 = *(undefined4 *)(iVar1 + 0xbc);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *(undefined4 *)(iVar1 + 0xb8) = 0xbfc00000;
    *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    DAT_711f2a10 = *(undefined4 *)(iVar1 + 0xf4);
    DAT_711f2a2c = *(undefined4 *)(iVar1 + 0xf8);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *(undefined4 *)(iVar1 + 0xf4) = 0xbfc00000;
    *(undefined4 *)(iVar1 + 0xf8) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    DAT_711f2a14 = *(undefined4 *)(iVar1 + 0x130);
    DAT_711f2a30 = *(undefined4 *)(iVar1 + 0x134);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *(undefined4 *)(iVar1 + 0x134) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x130) = 0xbfc00000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    DAT_711f2a18 = *(undefined4 *)(iVar1 + 0x16c);
    DAT_711f2a34 = *(undefined4 *)(iVar1 + 0x170);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_711f2a38 = DAT_7120168c;
    *(undefined4 *)(iVar1 + 0x170) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x16c) = 0xbfc00000;
    *(undefined4 *)(iVar2 + 0x148) = 0;
    thunk_FUN_7156a9f4(0,3);
    thunk_FUN_7156ad48(0,3);
    thunk_FUN_7156ab84(0,3);
    FUN_716ac460(0);
    return;
  }
  *puVar4 = DAT_711f2a00;
  *(undefined4 *)(iVar1 + 8) = DAT_711f2a1c;
  uVar3 = DAT_711f2a38;
  *(undefined4 *)(iVar1 + 0x40) = DAT_711f2a04;
  *(undefined4 *)(iVar1 + 0x44) = DAT_711f2a20;
  *(undefined4 *)(iVar1 + 0x7c) = DAT_711f2a08;
  *(undefined4 *)(iVar1 + 0x80) = DAT_711f2a24;
  *(undefined4 *)(iVar1 + 0xb8) = DAT_711f2a0c;
  *(undefined4 *)(iVar1 + 0xbc) = DAT_711f2a28;
  *(undefined4 *)(iVar1 + 0xf4) = DAT_711f2a10;
  *(undefined4 *)(iVar1 + 0xf8) = DAT_711f2a2c;
  *(undefined4 *)(iVar1 + 0x130) = DAT_711f2a14;
  *(undefined4 *)(iVar1 + 0x134) = DAT_711f2a30;
  *(undefined4 *)(iVar1 + 0x16c) = DAT_711f2a18;
  *(undefined4 *)(iVar1 + 0x170) = DAT_711f2a34;
  *(undefined4 *)(iVar2 + 0x148) = uVar3;
  thunk_FUN_7156a9f4(1,3);
  thunk_FUN_7156ad48(1,3);
  thunk_FUN_7156ab84(1,3);
  return;
}


// =========================================================================
// Function: FUN_716ac460
// Entry: 0x716ac460 | Size: 472 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716ac460(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_161 [3];
  undefined1 *puStack_15e;
  undefined4 uStack_14f;
  undefined1 auStack_13a [258];
  undefined4 uStack_38;
  char cStack_34;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  if (DAT_711f2a3c != param_1) {
    uVar4 = 0x3f07ae14;
    if (param_1 != 0) {
      uVar4 = 0x3f000000;
    }
    DAT_711f2a3c = (byte)param_1;
    uVar1 = 0x3ecccccd;
    if (param_1 != 0) {
      uVar1 = 0x3f000000;
    }
    *DAT_70b46c1c = uVar4;
    *DAT_70b46c20 = uVar1;
    if (param_1 == 0) {
      iVar2 = FUN_713aeb00();
      if (((((DAT_711a3938 != 0) && (*(int *)(DAT_711a3938 + 0x1389c) != 0)) &&
           (iVar3 = thunk_FUN_715bf66c(), iVar3 != 0)) &&
          ((*(char *)(DAT_70b46c18 + 0x29) != '\0' && (*(short *)(iVar2 + 0xe) == 0x12)))) &&
         ((iVar6 = *(int *)(iVar2 + 500), iVar3 = FUN_716488a8(DAT_711a3938),
          iVar6 == *(int *)(*(int *)(iVar3 + 0x8c) + 0x590) &&
          (*(char *)(*(int *)(DAT_711a3938 + 0x13898) + 8) == '\0')))) {
        *(undefined1 *)(iVar2 + 10) = 1;
      }
      DAT_711f2a96 = 0;
      DAT_711f2a97 = 0;
      DAT_711f2aac = 0;
    }
    else {
      DAT_711f2a98 = 0;
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
      FUN_715c6584(iVar2,0);
    }
    if ((DAT_711f6d58 != (undefined4 *)0x0) && (DAT_711f6d58[10] == 0xe)) {
      auStack_13a[0] = 0;
      if (param_1 != 0) {
        auStack_13a[0] = 0x80;
      }
      cStack_34 = '\x01';
      uStack_14f = 1;
      iStack_28 = 0x800;
      puStack_15e = auStack_13a;
      uStack_38 = 0;
      (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                ((int *)*DAT_711f6d58,2,auStack_161,1,8,0,0,0xffffffff,0xffff,0xffff,0,0);
      if ((cStack_34 != '\0') && (0x800 < iStack_28)) {
        imp_free(puStack_15e);
      }
    }
  }
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716ac9ac
// Entry: 0x716ac9ac | Size: 16 bytes
// =========================================================================

undefined1 FUN_716ac9ac(void)

{
  return DAT_711f2a3c;
}


// =========================================================================
// Function: FUN_716ac9f4
// Entry: 0x716ac9f4 | Size: 440 bytes
// =========================================================================

bool FUN_716ac9f4(void)

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
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80b0);
  if (*pcVar8 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80a0);
    *(undefined1 *)((int)puVar11 + 0x13) = 1;
    uVar5 = DAT_7008480c;
    uVar4 = DAT_70084808;
    uVar3 = DAT_70084804;
    *puVar11 = DAT_70084800;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    uVar6 = DAT_70084812;
    *(undefined2 *)(puVar11 + 4) = DAT_70084810;
    *(undefined1 *)((int)puVar11 + 0x12) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716b9c18,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80b0);
    *puVar12 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80a0);
  if (*(char *)(iVar9 + 0x13) != '\0') {
    uVar10 = 0;
    uVar13 = 0;
    do {
      iVar14 = (uVar10 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar7 = (byte)(0xafbbe305 >> iVar14) |
              (byte)(-0x123e1871 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar15) {
        bVar7 = (byte)(0xedc1e78f >> (uVar15 & 0xff));
      }
      *(byte *)(iVar9 + uVar10) = *(byte *)(iVar9 + uVar10) ^ bVar7;
      bVar16 = 0xfffffffe < uVar10;
      bVar1 = uVar13 == 0;
      bVar2 = (0x11 < uVar10) <= uVar13;
      uVar10 = uVar10 + 1;
      uVar13 = uVar13 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x13) = 0;
  }
  uVar10 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_24);
  }
  if (uVar10 < 0xb) {
    uVar13 = (uint)&uStack_24 | 1;
    uStack_24 = CONCAT31(uStack_24._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_716acb00;
  }
  else {
    uVar13 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_24 = (uVar10 | 7) + 2;
    uStack_20 = uVar10;
    uStack_1c = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar9,uVar10);
LAB_716acb00:
  *(undefined1 *)(uVar13 + uVar10) = 0;
  iVar9 = FUN_717c5e7c(&uStack_24);
  if ((uStack_24 & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  return iVar9 != 0;
}


// =========================================================================
// Function: FUN_716acdd8
// Entry: 0x716acdd8 | Size: 96 bytes
// =========================================================================

void FUN_716acdd8(void)

{
  int iVar1;
  
  iVar1 = DAT_70b46c18;
  if (DAT_711f2a3d != '\0') {
    *(undefined4 *)(DAT_70b46c18 + 0xc4) = DAT_711f2a40;
    *(undefined4 *)(iVar1 + 0xb0) = DAT_711f2a44;
  }
  DAT_711f2a3d = 0;
  DAT_711f2a3e = 0;
  DAT_711f2a3f = 0;
  FUN_716ac460(0);
  return;
}


// =========================================================================
// Function: FUN_716acf2c
// Entry: 0x716acf2c | Size: 264 bytes
// =========================================================================

undefined4 FUN_716acf2c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  
  piVar5 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar5;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar5 = iVar1;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x8c);
  if ((*(int *)(iVar1 + 0x18) != 0) && (iVar2 = FUN_714172f4(), iVar2 != 0)) {
    uVar6 = FUN_71416a78(iVar2,5);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    iVar3 = (int)uVar6;
    if (iVar3 != -1) {
      iVar4 = *(int *)(iVar2 + 8);
    }
    if (iVar3 != -1 && iVar4 != 0) {
      iVar4 = iVar4 + iVar3 * 0x40;
      iVar2 = FUN_71ba2d30(*(uint *)(iVar4 + 0x28) & 0x7fffffff,0x3f800000);
      if ((iVar2 != 0) &&
         (iVar2 = FUN_71ba2d30(*(uint *)(iVar4 + 0x14) & 0x7fffffff,0x3f800000), iVar2 != 0)) {
        return 1;
      }
      iVar2 = DAT_70b46c18;
      *(undefined4 *)(DAT_70b46c18 + 0x92c) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x30);
      *(undefined4 *)(iVar2 + 0x930) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x34);
      *(undefined4 *)(iVar2 + 0x934) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x38);
      return 0;
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_716ad150
// Entry: 0x716ad150 | Size: 692 bytes
// =========================================================================

void FUN_716ad150(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_60 [72];
  
  DataMemoryBarrier(0xb);
  piVar6 = DAT_70b4204c;
  if (((DAT_711f2b08 & 1) == 0) &&
     (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2b08), piVar6 = DAT_70b4204c, iVar2 != 0)) {
    DAT_711f2b04 = *DAT_70b4204c;
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f2b08);
  }
  DAT_711f2aa8 = *piVar6 - DAT_711f2b04;
  DAT_711f2b04 = *piVar6;
  if (((DAT_711a3938 != 0) && (*(int *)(DAT_711a3938 + 0x1389c) != 0)) &&
     (iVar2 = FUN_716acf2c(), iVar2 != 0)) {
    uVar3 = FUN_716ac9f4();
    iVar2 = DAT_70b46c18;
    if (DAT_711f2a3d != uVar3) {
      if (uVar3 == 0) {
        *(undefined4 *)(DAT_70b46c18 + 0xc4) = DAT_711f2a40;
        *(undefined4 *)(iVar2 + 0xb0) = DAT_711f2a44;
        uVar4 = 0;
        if (DAT_711f2a3e != '\0') {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 1;
        DAT_711f2a40 = *(undefined4 *)(DAT_70b46c18 + 0xc4);
        *(undefined4 *)(DAT_70b46c18 + 0xc4) = 1;
        DAT_711f2a44 = *(undefined4 *)(iVar2 + 0xb0);
        *(undefined4 *)(iVar2 + 0xb0) = 1;
        DAT_711f2a3e = DAT_711f2a3c != '\0' || DAT_711f2a3f != '\0';
      }
      DAT_711f2a3d = (byte)uVar3;
      DAT_711f2a3f = '\0';
      FUN_716ac460(uVar4);
    }
    FUN_716ad928();
    if (DAT_711f2a3c != '\0' || DAT_711ad118 != '\0') {
      FUN_716add80();
      if (DAT_711f2a96 == '\x03') {
        FUN_716b144c();
      }
      else if (DAT_711f2a96 == '\x02') {
        FUN_716b0ee4();
      }
      else if (DAT_711f2a96 == '\x01') {
        FUN_716ae430();
      }
      FUN_7133f834(auStack_60);
      FUN_716b47c8();
      imp___aeabi_memcpy8(&DAT_711f2a48,auStack_60,0x48);
      FUN_716b4a9c(&DAT_711f2a48);
      cVar1 = DAT_711f2a96;
      if (((DAT_711f2a96 == '\x01') && (iVar2 = FUN_71ba2d10(DAT_711f2a98,0xc2480000), iVar2 != 0))
         || ((uVar5 = 0x3d4ccccd, cVar1 == '\x03' &&
             (iVar2 = FUN_71ba2d10(DAT_711f2aa0,0xc2480000), iVar2 != 0)))) {
        uVar5 = 0x3ca3d70a;
      }
      *(undefined4 *)(*(int *)(DAT_70ffc978 + 4) + 0x80) = uVar5;
      FUN_7133fdcc(auStack_60);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_716ad928
// Entry: 0x716ad928 | Size: 540 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716ad928(void)

{
  short sVar1;
  char cVar2;
  undefined1 auStack_159 [3];
  undefined1 *puStack_156;
  undefined4 uStack_147;
  undefined1 auStack_132 [258];
  undefined4 uStack_30;
  char cStack_2c;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  cVar2 = DAT_711f2a3f;
  if ((((*(char *)(DAT_70b46c18 + 0x29) == '\0') ||
       (sVar1 = *(short *)(DAT_70b46c18 + (uint)*(byte *)(DAT_70b46c18 + 0x57) * 0x210 + 0x17e),
       sVar1 == 7)) || (sVar1 == 0x22 || sVar1 == 0x2e)) ||
     (*(char *)(*(int *)(DAT_711a3938 + 0x13898) + 8) != '\0')) {
    if (DAT_711f2a3c != '\0') {
      cVar2 = '\x01';
      *DAT_70b46c1c = 0x3f07ae14;
      *DAT_70b46c20 = 0x3ecccccd;
      DAT_711f2a3c = '\0';
      DAT_711f2a96 = 0;
      DAT_711f2a97 = 0;
      DAT_711f2aac = 0;
      if ((DAT_711f6d58 != (undefined4 *)0x0) && (DAT_711f6d58[10] == 0xe)) {
        iStack_20 = 0x800;
        puStack_156 = auStack_132;
        auStack_132[0] = 0;
        cStack_2c = '\x01';
        uStack_30 = 0;
        uStack_147 = 1;
        (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                  ((int *)*DAT_711f6d58,2,auStack_159,1,8,0,0,0xffffffff,0xffff,0xffff,0,0);
        if ((cStack_2c != '\0') && (0x800 < iStack_20)) {
          imp_free(puStack_156);
        }
      }
    }
  }
  else if (DAT_711f2a3f != '\0' || DAT_711f2a3d != '\0') {
    FUN_716ac460(1);
    cVar2 = '\0';
  }
  DAT_711f2a3f = cVar2;
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716add80
// Entry: 0x716add80 | Size: 856 bytes
// =========================================================================

void FUN_716add80(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  
  piVar4 = (int *)(DAT_711a3938 + 0x1389c);
  iVar6 = *piVar4;
  if (iVar6 == 0) {
    iVar6 = FUN_713c301c(0);
    if (iVar6 == 0) {
      iVar6 = *piVar4;
    }
    else {
      iVar6 = thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar4 = iVar1;
    }
  }
  iVar8 = *(int *)(iVar6 + 0x8c);
  piVar4 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar4;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar4 = iVar1;
    }
  }
  iVar5 = -1;
  if ((*(int *)(iVar1 + 0x8c) != 0) &&
     (piVar4 = (int *)FUN_7149eda4(*(int *)(*(int *)(iVar1 + 0x8c) + 0x440) + 4),
     piVar4 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar4;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar4 = iVar1;
    }
  }
  iVar7 = -1;
  if ((*(int *)(iVar1 + 0x8c) != 0) &&
     (piVar4 = (int *)FUN_7149f1c0(*(int *)(*(int *)(iVar1 + 0x8c) + 0x440) + 4),
     piVar4 != (int *)0x0)) {
    iVar7 = (**(code **)(*piVar4 + 0x14))();
  }
  DAT_711f2a97 = DAT_711f2a96;
  iVar6 = thunk_FUN_715bf66c(iVar6);
  if (iVar6 == 0) {
    if ((((iVar7 != 0x32e) &&
         (((0xd < iVar5 - 700U || ((1 << (iVar5 - 700U & 0xff) & 0x3003U) == 0)) && (iVar5 != 0xd0))
         )) && (((2 < iVar5 - 0x337U && (iVar6 = FUN_716b51e8(iVar8), iVar6 == 0)) &&
                (iVar6 = FUN_713bcc24(iVar8), iVar6 != 0)))) &&
       ((iVar5 != 0xd7 && iVar5 != 0xd9 && (3 < iVar7 - 0x191U)))) {
      if (*(int *)(iVar8 + 0x18) == 0) {
        uVar2 = 0;
      }
      else {
        iVar6 = FUN_71308114(*(int *)(iVar8 + 0x18),0x39);
        if (iVar6 != 0) {
          DAT_711f2a96 = 2;
          return;
        }
        uVar2 = *(undefined4 *)(iVar8 + 0x18);
      }
      iVar6 = FUN_71308114(uVar2,0x3b);
      if (iVar6 == 0) {
        DAT_711f2a96 = 1;
        if (DAT_711f2a97 == '\x01') {
          DAT_711f2a96 = 1;
          return;
        }
        uVar2 = FUN_7136cdfc(auStack_2c);
        FUN_7136d7dc(uVar2,DAT_70b46c18 + 0x8fc);
        DAT_711f2a98 = auStack_2c[0];
        DAT_711f2a9c = uStack_24;
        iVar6 = FUN_71ba2d70(auStack_2c[0],0x43340000);
        if (iVar6 == 0) {
          return;
        }
        uVar3 = FUN_71ba240c(0x43b40000,auStack_2c[0]);
        DAT_711f2a98 = uVar3 ^ 0x80000000;
        return;
      }
    }
  }
  else if (((iVar7 != 0x32e) && (2 < iVar5 - 0x337U)) && (iVar5 != 0xd0)) {
    if (*(int *)(iVar8 + 0x18) == 0) {
      uVar2 = 0;
    }
    else {
      iVar6 = FUN_71308114(*(int *)(iVar8 + 0x18),0x6c);
      if (iVar6 != 0) {
        DAT_711f2a96 = 2;
        return;
      }
      uVar2 = *(undefined4 *)(iVar8 + 0x18);
    }
    iVar6 = FUN_71308114(uVar2,0x6d);
    if (iVar6 == 0) {
      DAT_711f2a96 = 3;
      if (DAT_711f2a97 == '\x03') {
        DAT_711f2a96 = 3;
        return;
      }
      DAT_711f2aa0 = 0;
      DAT_711f2aa4 = 0;
      return;
    }
  }
  DAT_711f2a96 = 2;
  return;
}


// =========================================================================
// Function: FUN_716ae430
// Entry: 0x716ae430 | Size: 4112 bytes
// =========================================================================

void FUN_716ae430(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b4 [72];
  undefined1 auStack_6c [72];
  
  piVar9 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar9;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar9;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar9 = iVar1;
    }
  }
  iVar11 = *(int *)(iVar1 + 0x8c);
  FUN_7133bb90(*(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x10),
               *(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x14));
  uVar12 = FUN_71ba1638();
  uVar12 = FUN_71ba1ea0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x53f7ced9,0x404ca5e3);
  FUN_71ba0670((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0xc0568000);
  uVar2 = FUN_71ba242c();
  FUN_713d5ec0(0);
  iVar1 = FUN_713d62e0();
  if ((iVar1 != 0) || (iVar1 = FUN_71ba2cf0(DAT_711f2aac,0), iVar1 == 0)) {
    DataMemoryBarrier(0xb);
    if (((DAT_711f2b24 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2b24), iVar1 != 0))
    {
      FUN_71510c6c(&DAT_711f2b14);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2b24);
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711f2b38 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2b38), iVar1 != 0))
    {
      FUN_71510c6c(&DAT_711f2b28);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2b38);
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711f2b5c & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2b5c), iVar1 != 0))
    {
      iVar1 = FUN_71510c6c(&DAT_711f2b3c);
      FUN_71510c6c(iVar1 + 0x10);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2b5c);
    }
    if (DAT_711f2b60 == '\0') {
      uVar3 = FUN_7133f834(auStack_b4);
      FUN_71340234(uVar3,0x42340000,0,0);
      FUN_71510cc0(&DAT_711f2b28,auStack_b4);
      FUN_71340234(auStack_b4,0xc2340000,0,0);
      FUN_71510cc0(&DAT_711f2b14,auStack_b4);
      DAT_711f2b60 = '\x01';
      FUN_7133fdcc(auStack_b4);
    }
    FUN_713d5ec0(0);
    iVar1 = FUN_713d62e0();
    if (iVar1 == 0) {
      uVar2 = FUN_71ba1e0c(DAT_711f2aa8);
      uVar2 = FUN_71ba21e8(uVar2,0xc0a00000);
      uVar2 = FUN_71ba13e0(uVar2,0x447a0000);
      DAT_711f2aac = FUN_71ba0b38(DAT_711f2aac,uVar2);
      iVar1 = FUN_71ba2d30(DAT_711f2aac,0);
      if (iVar1 != 0) {
        DAT_711f2aac = 0;
      }
    }
    else {
      iVar1 = FUN_71ba2cf0(DAT_711f2aac,0);
      if (iVar1 == 0) {
        uVar2 = FUN_71ba1e0c(DAT_711f2aa8);
        uVar2 = FUN_71ba21e8(uVar2,0x40a00000);
        uVar2 = FUN_71ba13e0(uVar2,0x447a0000);
        DAT_711f2aac = FUN_71ba0b38(DAT_711f2aac,uVar2);
        iVar1 = FUN_71ba2d70(DAT_711f2aac,0x3f800000);
        if (iVar1 != 0) {
          DAT_711f2aac = 0x3f800000;
          FUN_7133f834(auStack_b4);
          DAT_711f2a98 = 0;
          FUN_71340234(auStack_b4,0,0,DAT_711f2a9c);
          FUN_71510cc0(&DAT_711f2b3c,auStack_b4);
          FUN_7133fdcc(auStack_b4);
        }
      }
      else {
        iVar1 = FUN_7133f834(auStack_b4);
        FUN_7133f834();
        uVar6 = FUN_71ba0b38(uVar2,0xc3330000);
        iVar4 = FUN_71ba2d70(uVar6,0x43b40000);
        iVar5 = FUN_71ba2d70(uVar6,0x43b40000);
        uVar8 = DAT_711f2a9c;
        uVar3 = uVar6;
        while (iVar4 != 0) {
          uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
          iVar4 = FUN_71ba2d70(uVar3,0x43b40000);
        }
        iVar4 = FUN_71ba2d10(uVar3,0);
        while (iVar4 != 0) {
          uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
          iVar4 = FUN_71ba2d10(uVar3,0);
        }
        uVar3 = FUN_71ba240c(uVar8,uVar3);
        iVar4 = FUN_71ba2d70(uVar3,0x43b40000);
        while (iVar4 != 0) {
          uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
          iVar4 = FUN_71ba2d70(uVar3,0x43b40000);
        }
        iVar4 = FUN_71ba2d10(uVar3,0);
        while (iVar4 != 0) {
          uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
          iVar4 = FUN_71ba2d10(uVar3,0);
        }
        DAT_711f2b10 = uVar2;
        iVar4 = FUN_71ba2d10(uVar3,0x43340000);
        DAT_711f2b0c = iVar4 != 0;
        FUN_71340234(auStack_b4,DAT_711f2a98,0,uVar8);
        while (iVar5 != 0) {
          uVar6 = FUN_71ba0b38(uVar6,0xc3b40000);
          iVar5 = FUN_71ba2d70(uVar6,0x43b40000);
        }
        iVar4 = FUN_71ba2d10(uVar6,0);
        while (iVar4 != 0) {
          uVar6 = FUN_71ba0b38(uVar6,0x43b40000);
          iVar4 = FUN_71ba2d10(uVar6,0);
        }
        FUN_71340234(iVar1 + 0x48,0,0,uVar6);
        FUN_71510cc0(&DAT_711f2b3c,auStack_b4);
        FUN_71510cc0(&DAT_711f2b4c,iVar1 + 0x48);
        uVar2 = FUN_71ba1e0c(DAT_711f2aa8);
        uVar2 = FUN_71ba21e8(uVar2,0x40a00000);
        uVar2 = FUN_71ba13e0(uVar2,0x447a0000);
        DAT_711f2aac = FUN_71ba0b38(DAT_711f2aac,uVar2);
        FUN_7133fdcc(auStack_6c);
        FUN_7133fdcc(auStack_b4);
      }
    }
    FUN_7133f834(auStack_b4);
    FUN_71510c6c(&uStack_c4);
    uVar2 = DAT_711f2b10;
    piVar9 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar9;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar9;
      }
      else {
        iVar1 = thunk_MwhHq(0x3a0);
        iVar4 = FUN_715ba834();
        *piVar9 = iVar4;
      }
    }
    uVar3 = FUN_71ba21e8(uVar2,0x3c8ef998);
    iVar1 = *(int *)(iVar1 + 0x8c);
    *(undefined4 *)(iVar1 + 0x55c) = uVar3;
    *(undefined4 *)(iVar1 + 0x560) = uVar3;
    FUN_71340234(*(undefined4 *)(iVar1 + 0x14),0,0,uVar2);
    FUN_715119f4(&uStack_c4,&DAT_711f2b3c,&DAT_711f2b4c,DAT_711f2aac);
    FUN_71511538(&uStack_c4,auStack_b4);
    puVar10 = &DAT_711f2b14;
    if (DAT_711f2b0c == '\0') {
      puVar10 = &DAT_711f2b28;
    }
    FUN_716b5768(3,puVar10,DAT_711f2aac);
    FUN_716b5928(auStack_b4);
    FUN_713b45b4(iVar11);
    goto LAB_716af3ec;
  }
  uStack_c0 = 0;
  uStack_c4 = 0;
  iVar1 = FUN_713f3ee0(0xaf,&uStack_c4,1);
  if (iVar1 == 0) {
    uStack_c0 = 0;
    uStack_c4 = 0;
  }
  uVar3 = uStack_c4;
  uVar6 = FUN_71ba21e8(uStack_c0,0xbd4ccccd);
  uVar6 = FUN_71ba0b38(DAT_711f2a98,uVar6);
  DAT_711f2a98 = uVar6;
  uVar7 = FUN_71ba21e8(uVar3,0xbd4ccccd);
  iVar1 = FUN_71ba2d70(uVar6,0x42700000);
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d10(uVar6,0xc28c0000);
    if (iVar1 != 0) {
      DAT_711f2a98 = 0xc28c0000;
    }
  }
  else {
    DAT_711f2a98 = 0x42700000;
  }
  iVar1 = FUN_71ba2d70(uVar3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d10(uVar3,0);
    uVar3 = DAT_711f2a9c;
    if (iVar1 != 0) {
      uVar3 = FUN_71ba0b38(uVar2,0x42b40000);
      iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
      uVar6 = DAT_711f2a9c;
      while (iVar1 != 0) {
        uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
        iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
      }
      iVar1 = FUN_71ba2d10(uVar3,0);
      while (iVar1 != 0) {
        uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
        iVar1 = FUN_71ba2d10(uVar3,0);
      }
      uVar8 = FUN_71ba240c(uVar6,uVar3);
      iVar1 = FUN_71ba2d70(uVar8,0x43b40000);
      while (iVar1 != 0) {
        uVar8 = FUN_71ba0b38(uVar8,0xc3b40000);
        iVar1 = FUN_71ba2d70(uVar8,0x43b40000);
      }
      iVar1 = FUN_71ba2d10(uVar8,0);
      while (iVar1 != 0) {
        uVar8 = FUN_71ba0b38(uVar8,0x43b40000);
        iVar1 = FUN_71ba2d10(uVar8,0);
      }
      uVar3 = FUN_71ba0b38(uVar7,uVar6);
      DAT_711f2a9c = uVar3;
      iVar1 = FUN_71ba2d10(uVar8,uVar7);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_713bfa30(*(undefined4 *)(iVar11 + 0x440)), uVar3 = DAT_711f2a9c, iVar1 == 0))
      {
        uVar2 = FUN_71ba0b38(DAT_711f2a9c,0xc2b40000);
        iVar1 = FUN_71ba2d70(uVar2,0x43b40000);
        while (iVar1 != 0) {
          uVar2 = FUN_71ba0b38(uVar2,0xc3b40000);
          iVar1 = FUN_71ba2d70(uVar2,0x43b40000);
        }
        iVar1 = FUN_71ba2d10(uVar2,0);
        while (iVar1 != 0) {
          uVar2 = FUN_71ba0b38(uVar2,0x43b40000);
          iVar1 = FUN_71ba2d10(uVar2,0);
        }
        goto LAB_716af0b8;
      }
    }
  }
  else {
    uVar3 = FUN_71ba0b38(uVar2,0xc2b40000);
    iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
    uVar6 = DAT_711f2a9c;
    while (iVar1 != 0) {
      uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
      iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
    }
    iVar1 = FUN_71ba2d10(uVar3,0);
    while (iVar1 != 0) {
      uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
      iVar1 = FUN_71ba2d10(uVar3,0);
    }
    uVar8 = FUN_71ba240c(uVar6,uVar3);
    iVar1 = FUN_71ba2d70(uVar8,0x43b40000);
    while (iVar1 != 0) {
      uVar8 = FUN_71ba0b38(uVar8,0xc3b40000);
      iVar1 = FUN_71ba2d70(uVar8,0x43b40000);
    }
    iVar1 = FUN_71ba2d10(uVar8,0);
    while (iVar1 != 0) {
      uVar8 = FUN_71ba0b38(uVar8,0x43b40000);
      iVar1 = FUN_71ba2d10(uVar8,0);
    }
    uVar3 = FUN_71ba0b38(uVar7,uVar6);
    DAT_711f2a9c = uVar3;
    iVar1 = FUN_71ba2d10(uVar8,uVar7 ^ 0x80000000);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_713bfa30(*(undefined4 *)(iVar11 + 0x440)), uVar3 = DAT_711f2a9c, iVar1 == 0)) {
      uVar2 = FUN_71ba0b38(DAT_711f2a9c,0x42b40000);
      iVar1 = FUN_71ba2d70(uVar2,0x43b40000);
      while (iVar1 != 0) {
        uVar2 = FUN_71ba0b38(uVar2,0xc3b40000);
        iVar1 = FUN_71ba2d70(uVar2,0x43b40000);
      }
      iVar1 = FUN_71ba2d10(uVar2,0);
      while (iVar1 != 0) {
        uVar2 = FUN_71ba0b38(uVar2,0x43b40000);
        iVar1 = FUN_71ba2d10(uVar2,0);
      }
LAB_716af0b8:
      piVar9 = (int *)(DAT_711a3938 + 0x1389c);
      iVar1 = *piVar9;
      if (iVar1 == 0) {
        iVar1 = FUN_713c301c(0);
        if (iVar1 == 0) {
          iVar1 = *piVar9;
        }
        else {
          iVar1 = thunk_MwhHq(0x3a0);
          iVar4 = FUN_715ba834();
          *piVar9 = iVar4;
        }
      }
      uVar3 = FUN_71ba21e8(uVar2,0x3c8ef998);
      iVar1 = *(int *)(iVar1 + 0x8c);
      *(undefined4 *)(iVar1 + 0x55c) = uVar3;
      *(undefined4 *)(iVar1 + 0x560) = uVar3;
      FUN_71340234(*(undefined4 *)(iVar1 + 0x14),0,0,uVar2);
      uVar3 = DAT_711f2a9c;
    }
  }
  iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
  while (iVar1 != 0) {
    uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
    iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
  }
  iVar1 = FUN_71ba2d10(uVar3,0);
  while (iVar1 != 0) {
    uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
    iVar1 = FUN_71ba2d10(uVar3,0);
  }
  DAT_711f2a9c = uVar3;
  uVar3 = FUN_71ba240c(uVar2,uVar3);
  iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
  while (iVar1 != 0) {
    uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
    iVar1 = FUN_71ba2d70(uVar3,0x43b40000);
  }
  iVar1 = FUN_71ba2d10(uVar3,0);
  while (iVar1 != 0) {
    uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
    iVar1 = FUN_71ba2d10(uVar3,0);
  }
  iVar1 = FUN_71ba2d70(uVar3,0x42b40000);
  uVar6 = DAT_711f2a9c;
  if ((iVar1 != 0) && (iVar1 = FUN_71ba2d10(uVar3,0x43870000), uVar6 = DAT_711f2a9c, iVar1 != 0)) {
    iVar1 = FUN_71ba2d70(uVar3,0x43340000);
    if (iVar1 == 0) {
      uVar6 = FUN_71ba0b38(uVar2,0xc2b40000);
      iVar1 = FUN_71ba2d70(uVar6,0x43b40000);
      while (iVar1 != 0) {
        uVar6 = FUN_71ba0b38(uVar6,0xc3b40000);
        iVar1 = FUN_71ba2d70(uVar6,0x43b40000);
      }
      iVar1 = FUN_71ba2d10(uVar6,0);
      while (iVar1 != 0) {
        uVar6 = FUN_71ba0b38(uVar6,0x43b40000);
        iVar1 = FUN_71ba2d10(uVar6,0);
      }
    }
    else {
      uVar6 = FUN_71ba0b38(uVar2,0x42b40000);
      iVar1 = FUN_71ba2d70(uVar6,0x43b40000);
      while (iVar1 != 0) {
        uVar6 = FUN_71ba0b38(uVar6,0xc3b40000);
        iVar1 = FUN_71ba2d70(uVar6,0x43b40000);
      }
      iVar1 = FUN_71ba2d10(uVar6,0);
      while (iVar1 != 0) {
        uVar6 = FUN_71ba0b38(uVar6,0x43b40000);
        iVar1 = FUN_71ba2d10(uVar6,0);
      }
    }
  }
  DAT_711f2a9c = uVar6;
  uVar2 = FUN_7133f834(auStack_b4);
  FUN_71340234(uVar2,DAT_711f2a98,0,DAT_711f2a9c);
  FUN_716b5928(auStack_b4);
  FUN_713b45b4(iVar11);
LAB_716af3ec:
  FUN_7133fdcc(auStack_b4);
  return;
}


// =========================================================================
// Function: FUN_716b0ee4
// Entry: 0x716b0ee4 | Size: 20 bytes
// =========================================================================

void FUN_716b0ee4(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar4 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar4;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar4 = iVar1;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x8c);
  DataMemoryBarrier(0xb);
  if (((DAT_711f2b74 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2b74), iVar2 != 0)) {
    FUN_71510c6c(&DAT_711f2b64);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f2b74);
  }
  if (DAT_711f2a97 != '\x02') {
    FUN_716b5928(&DAT_711f2a48);
    uVar5 = 0x3f800000;
    DAT_700c8080 = 0x3f800000;
    if (*(int *)(iVar1 + 0x18) == 0) goto LAB_716b1018;
    uVar5 = FUN_714172f4();
    iVar2 = FUN_71416a78(uVar5,5);
    puVar3 = *(undefined4 **)
              (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar1 + 0x18)) + 0x10) + iVar2 * 0x18 +
              0x10);
    DAT_711f2b64 = *puVar3;
    DAT_711f2b68 = puVar3[1];
    DAT_711f2b6c = puVar3[2];
    DAT_711f2b70 = puVar3[3];
  }
  uVar5 = DAT_700c8080;
  iVar2 = FUN_71ba2d70(DAT_700c8080,0);
  if (iVar2 == 0) {
    return;
  }
LAB_716b1018:
  FUN_716b5768(5,&DAT_711f2b64,uVar5);
  FUN_713b45b4(iVar1);
  uVar5 = FUN_71ba1e0c(DAT_711f2aa8);
  uVar5 = FUN_71ba21e8(uVar5,0xc0400000);
  uVar5 = FUN_71ba13e0(uVar5,0x447a0000);
  DAT_700c8080 = FUN_71ba0b38(DAT_700c8080,uVar5);
  return;
}


// =========================================================================
// Function: FUN_716b144c
// Entry: 0x716b144c | Size: 5544 bytes
// =========================================================================

void FUN_716b144c(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int unaff_r8;
  int iVar11;
  bool bVar12;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  piVar7 = (int *)(DAT_711a3938 + 0x1389c);
  iVar2 = *piVar7;
  if (iVar2 == 0) {
    iVar2 = FUN_713c301c(0);
    if (iVar2 == 0) {
      iVar2 = *piVar7;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar2 = FUN_715ba834();
      *piVar7 = iVar2;
    }
  }
  iVar11 = *(int *)(iVar2 + 0x8c);
  iVar2 = *(int *)(DAT_711f6d58 + 4);
  uVar3 = FUN_717b92b8(iVar2,*(undefined4 *)(iVar11 + 0x590));
  if (2000 < uVar3) {
    return;
  }
  bVar12 = *(char *)(iVar2 + uVar3 + 0x3e88) != '\0';
  if (bVar12) {
    unaff_r8 = *(int *)(iVar2 + uVar3 * 4);
  }
  if (!bVar12 || unaff_r8 == 0) {
    return;
  }
  piVar7 = (int *)(DAT_711a3938 + 0x1389c);
  iVar2 = *piVar7;
  if (iVar2 == 0) {
    iVar2 = FUN_713c301c(0);
    if (iVar2 == 0) {
      iVar2 = *piVar7;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar2 = FUN_715ba834();
      *piVar7 = iVar2;
    }
  }
  iVar9 = -1;
  if ((*(int *)(iVar2 + 0x8c) != 0) &&
     (piVar7 = (int *)FUN_7149eda4(*(int *)(*(int *)(iVar2 + 0x8c) + 0x440) + 4),
     piVar7 != (int *)0x0)) {
    iVar9 = (**(code **)(*piVar7 + 0x14))();
  }
  piVar7 = (int *)(DAT_711a3938 + 0x1389c);
  iVar2 = *piVar7;
  if (iVar2 == 0) {
    iVar2 = FUN_713c301c(0);
    if (iVar2 == 0) {
      iVar2 = *piVar7;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar2 = FUN_715ba834();
      *piVar7 = iVar2;
    }
  }
  if ((*(int *)(iVar2 + 0x8c) != 0) &&
     (piVar7 = (int *)FUN_7149f1c0(*(int *)(*(int *)(iVar2 + 0x8c) + 0x440) + 4),
     piVar7 != (int *)0x0)) {
    (**(code **)(*piVar7 + 0x14))();
  }
  if (DAT_711f6c88 == '\0') {
    FUN_713d5ec0(0);
    iVar2 = FUN_713d6b30();
    if (iVar2 == 0) goto LAB_716b1644;
LAB_716b16b4:
    if (iVar9 != 0x2c0) {
      iVar2 = 0x2ca;
    }
    if (((iVar9 != 0x2c0 && iVar9 != iVar2) && (iVar2 = thunk_FUN_715f4594(unaff_r8), iVar2 != 3))
       && (iVar2 = thunk_FUN_715f4594(unaff_r8), iVar2 != 4)) {
      if (DAT_711f6c88 == '\0') {
        FUN_713d5ec0(0);
        iVar2 = FUN_713d6b30();
        if (iVar2 != 0) {
          uVar4 = FUN_71ba1e0c(DAT_711f2aa8);
          uVar4 = FUN_71ba21e8(uVar4,0xc4340000);
          uVar4 = FUN_71ba13e0(uVar4,0x447a0000);
          uVar6 = FUN_71ba0b38(DAT_711f2aa4,uVar4);
          iVar2 = FUN_71ba2d30(uVar6,0xc3340000);
          uVar3 = DAT_711f2aa0;
          if (iVar2 != 0) {
            uVar6 = 0xc3340000;
          }
          DAT_711f2aa4 = uVar6;
          iVar2 = FUN_71ba2d70(DAT_711f2aa0,0);
          if (iVar2 == 0) {
            iVar2 = FUN_71ba2d10(uVar3,0);
            if (iVar2 != 0) {
              uVar4 = FUN_716b5534(0x43340000);
              DAT_711f2aa0 = FUN_71ba0b38(uVar4,DAT_711f2aa0);
              iVar2 = FUN_71ba2d50(DAT_711f2aa0,0);
              goto LAB_716b226c;
            }
          }
          else {
            uVar4 = FUN_716b5534(0x43340000);
            DAT_711f2aa0 = FUN_71ba240c(DAT_711f2aa0,uVar4);
            iVar2 = FUN_71ba2d30(DAT_711f2aa0,0);
LAB_716b226c:
            if (iVar2 != 0) {
              DAT_711f2aa0 = 0;
            }
          }
          DAT_711f2aac = 0x3f800000;
          goto LAB_716b1a90;
        }
      }
      uVar4 = FUN_713d5ec0(0);
      iVar2 = FUN_713d6f48(uVar4,0);
      uVar3 = DAT_711f2aa4;
      if (iVar2 == 0) {
        iVar2 = FUN_716b5d04();
        uVar3 = DAT_711f2aa4;
        if (iVar2 == 0) {
          iVar2 = FUN_71ba2d10(DAT_711f2aa4,0);
          if (iVar2 == 0) {
            iVar2 = FUN_71ba2d70(uVar3,0);
            if (iVar2 == 0) goto LAB_716b1a90;
            uVar4 = FUN_716b5534(0x44340000);
            DAT_711f2aa4 = FUN_71ba240c(DAT_711f2aa4,uVar4);
            iVar2 = FUN_71ba2d30(DAT_711f2aa4,0);
          }
          else {
            uVar4 = FUN_716b5534(0x44340000);
            DAT_711f2aa4 = FUN_71ba0b38(uVar4,DAT_711f2aa4);
            iVar2 = FUN_71ba2d50(DAT_711f2aa4,0);
          }
          if (iVar2 != 0) {
            DAT_711f2aa4 = 0;
            DAT_711f2aac = 0;
          }
          goto LAB_716b1a90;
        }
        uVar6 = 0xc2b40000;
        iVar2 = FUN_71ba2d70(DAT_711f2aa4,0xc2b40000);
        if (iVar2 == 0) {
          iVar2 = FUN_71ba2d10(uVar3,0xc2b40000);
          if (iVar2 != 0) {
            uVar4 = FUN_716b5534(0x44340000);
            DAT_711f2aa4 = FUN_71ba0b38(uVar4,DAT_711f2aa4);
            uVar4 = 0xc2b40000;
            goto LAB_716b2134;
          }
          goto LAB_716b2140;
        }
        uVar4 = FUN_716b5534(0x44340000);
        DAT_711f2aa4 = FUN_71ba240c(DAT_711f2aa4,uVar4);
        iVar2 = FUN_71ba2d30(DAT_711f2aa4,0xc2b40000);
LAB_716b2138:
        if (iVar2 != 0) {
          DAT_711f2aa4 = uVar6;
        }
      }
      else {
        uVar6 = 0x42b40000;
        iVar2 = FUN_71ba2d70(DAT_711f2aa4,0x42b40000);
        if (iVar2 != 0) {
          uVar4 = FUN_716b5534(0x44340000);
          DAT_711f2aa4 = FUN_71ba240c(DAT_711f2aa4,uVar4);
          iVar2 = FUN_71ba2d30(DAT_711f2aa4,0x42b40000);
          goto LAB_716b2138;
        }
        iVar2 = FUN_71ba2d10(uVar3,0x42b40000);
        if (iVar2 != 0) {
          uVar4 = FUN_716b5534(0x44340000);
          DAT_711f2aa4 = FUN_71ba0b38(uVar4,DAT_711f2aa4);
          uVar4 = 0x42b40000;
LAB_716b2134:
          iVar2 = FUN_71ba2d50(DAT_711f2aa4,uVar4);
          goto LAB_716b2138;
        }
      }
LAB_716b2140:
      uVar3 = DAT_711f2aa0;
      iVar2 = FUN_71ba2d70(DAT_711f2aa0,0);
      if (iVar2 == 0) {
        iVar2 = FUN_71ba2d10(uVar3,0);
        if (iVar2 != 0) {
          uVar4 = FUN_716b5534(0x43340000);
          DAT_711f2aa0 = FUN_71ba0b38(uVar4,DAT_711f2aa0);
          iVar2 = FUN_71ba2d50(DAT_711f2aa0,0);
          goto LAB_716b21c0;
        }
      }
      else {
        uVar4 = FUN_716b5534(0x43340000);
        DAT_711f2aa0 = FUN_71ba240c(DAT_711f2aa0,uVar4);
        iVar2 = FUN_71ba2d30(DAT_711f2aa0,0);
LAB_716b21c0:
        if (iVar2 != 0) {
          DAT_711f2aa0 = 0;
        }
      }
      DAT_711f2aac = 0x3f000000;
      goto LAB_716b1a90;
    }
  }
  else {
LAB_716b1644:
    uVar4 = FUN_713d5ec0(0);
    iVar2 = FUN_713d6f48(uVar4,0);
    if (iVar2 != 0) goto LAB_716b16b4;
    uVar4 = FUN_713d5ec0(0);
    iVar2 = FUN_713d7380(uVar4,0);
    if (iVar2 != 0) goto LAB_716b16b4;
    iVar5 = FUN_71ba2cf0(DAT_711f2aac,0);
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_716b16b4;
  }
  DAT_711f2aac = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  iVar2 = FUN_713f3ee0(0xaf,&uStack_70,1);
  if (iVar2 == 0) {
    uStack_6c = 0;
    uStack_70 = 0;
  }
  iVar2 = FUN_713bcc24(iVar11);
  if ((iVar2 != 0) && (iVar9 != 0xd7 && iVar9 != 0xd9)) {
    uVar4 = FUN_71ba21e8(uStack_70,0x3d4ccccd);
    DAT_711f2aa4 = FUN_71ba240c(DAT_711f2aa4,uVar4);
    uVar4 = FUN_71ba21e8(uStack_6c,0x3d4ccccd);
    DAT_711f2aa0 = FUN_71ba240c(DAT_711f2aa0,uVar4);
  }
  uVar3 = DAT_711f2aa0;
  iVar2 = FUN_71ba2d70(DAT_711f2aa0,0x42700000);
  if (iVar2 == 0) {
    iVar2 = FUN_71ba2d10(uVar3,0xc28c0000);
    if (iVar2 != 0) {
      DAT_711f2aa0 = 0xc28c0000;
    }
  }
  else {
    DAT_711f2aa0 = 0x42700000;
  }
  if (iVar9 != 0x2c0) {
    iVar2 = 0x2ca;
  }
  if (((iVar9 != 0x2c0 && iVar9 != iVar2) && (iVar2 = thunk_FUN_715f4594(unaff_r8), iVar2 != 3)) &&
     (iVar2 = thunk_FUN_715f4594(unaff_r8), uVar3 = DAT_711f2aa4, iVar2 != 4)) {
    iVar2 = FUN_71ba2d70(DAT_711f2aa4,0x43340000);
    uVar6 = 0x43340000;
    if (iVar2 == 0) {
      uVar10 = 0xc3340000;
LAB_716b17b0:
      iVar2 = FUN_71ba2d10(uVar3,uVar10);
      uVar6 = DAT_711f2aa4;
      if (iVar2 != 0) {
        uVar6 = uVar10;
      }
    }
  }
  else {
    uVar3 = DAT_711f2aa4;
    iVar2 = FUN_71ba2d70(DAT_711f2aa4,0x42b40000);
    uVar6 = 0x42b40000;
    if (iVar2 == 0) {
      uVar10 = 0xc2b40000;
      goto LAB_716b17b0;
    }
  }
  DAT_711f2aa4 = uVar6;
  iVar2 = thunk_FUN_71561954(unaff_r8);
  if (((((iVar2 == 0) || (iVar2 = FUN_71ba2d30(DAT_711f2aa0 & 0x7fffffff,0x41f00000), iVar2 == 0))
       || (iVar2 = FUN_71ba2d30(DAT_711f2aa4 & 0x7fffffff,0x42480000), uVar4 = uStack_6c, iVar2 == 0
          )) || ((DAT_711f2b78 != '\x01' || (iVar2 = FUN_71ba2cf0(uStack_70,0), iVar2 == 0)))) ||
     (iVar2 = FUN_71ba2cf0(uVar4,0), iVar2 == 0)) {
    iVar2 = *DAT_70b4204c;
    DAT_711f2b7c = iVar2;
  }
  else {
    iVar2 = *DAT_70b4204c;
  }
  uVar3 = DAT_711f2aa4;
  if ((uint)(iVar2 - DAT_711f2b7c) < 2000) goto LAB_716b1a90;
  DAT_711f2b78 = '\0';
  iVar2 = FUN_71ba2d10(DAT_711f2aa4,0);
  if (iVar2 == 0) {
    iVar2 = FUN_71ba2d70(uVar3,0);
    if (iVar2 != 0) {
      uVar4 = FUN_71ba1e0c(DAT_711f2aa8);
      uVar4 = FUN_71ba21e8(uVar4,0xc3160000);
      uVar4 = FUN_71ba13e0(uVar4,0x447a0000);
      DAT_711f2aa4 = FUN_71ba0b38(DAT_711f2aa4,uVar4);
      iVar2 = FUN_71ba2d30(DAT_711f2aa4,0);
      goto LAB_716b1968;
    }
  }
  else {
    uVar4 = FUN_71ba1e0c(DAT_711f2aa8);
    uVar4 = FUN_71ba21e8(uVar4,0x43160000);
    uVar4 = FUN_71ba13e0(uVar4,0x447a0000);
    DAT_711f2aa4 = FUN_71ba0b38(DAT_711f2aa4,uVar4);
    iVar2 = FUN_71ba2d50(DAT_711f2aa4,0);
LAB_716b1968:
    if (iVar2 != 0) {
      DAT_711f2aa4 = 0;
    }
  }
  uVar3 = DAT_711f2aa0;
  iVar2 = FUN_71ba2d10(DAT_711f2aa0,0);
  if (iVar2 == 0) {
    iVar2 = FUN_71ba2d70(uVar3,0);
    if (iVar2 != 0) {
      uVar4 = FUN_71ba1e0c(DAT_711f2aa8);
      uVar4 = FUN_71ba21e8(uVar4,0xc3160000);
      uVar4 = FUN_71ba13e0(uVar4,0x447a0000);
      uVar3 = FUN_71ba0b38(DAT_711f2aa0,uVar4);
      DAT_711f2aa0 = uVar3;
      iVar2 = FUN_71ba2d30(uVar3,0);
      goto LAB_716b1a58;
    }
  }
  else {
    uVar4 = FUN_71ba1e0c(DAT_711f2aa8);
    uVar4 = FUN_71ba21e8(uVar4,0x43160000);
    uVar4 = FUN_71ba13e0(uVar4,0x447a0000);
    uVar3 = FUN_71ba0b38(DAT_711f2aa0,uVar4);
    DAT_711f2aa0 = uVar3;
    iVar2 = FUN_71ba2d50(uVar3,0);
LAB_716b1a58:
    if (iVar2 != 0) {
      uVar3 = 0;
      DAT_711f2aa0 = 0;
    }
  }
  iVar2 = FUN_71ba2cf0(uVar3,0);
  if ((iVar2 != 0) && (iVar2 = FUN_71ba2cf0(DAT_711f2aa4,0), iVar2 != 0)) {
    DAT_711f2b78 = '\x01';
  }
LAB_716b1a90:
  uVar1 = FUN_715f8740(unaff_r8);
  FUN_716b5d84(uVar1);
  iVar2 = FUN_71ba2d70(DAT_711f2aa4 & 0x7fffffff,0x42b40000);
  if (((iVar2 != 0) && (iVar2 = thunk_FUN_715f4594(unaff_r8), iVar2 != 3)) &&
     (iVar2 = thunk_FUN_715f4594(unaff_r8), iVar2 != 4)) {
    DataMemoryBarrier(0xb);
    if (((DAT_711f2c30 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2c30), iVar2 != 0))
    {
      FUN_71510c9c(&DAT_711f2b80,0x3eb6887b,0xbdc4b5dd,0xbe0fa82f,0x3f6b2f45);
      FUN_71510c9c(&DAT_711f2b90,0x3e8adc0a,0x3b8301a8,0x3dc90e67,0x3f751e11);
      FUN_71510c9c(&DAT_711f2ba0,0xbb3016b4,0x3c1c0732,0x3e844674,0x3f774bc7);
      FUN_71510c9c(&DAT_711f2bb0,0xbf15d053,0x3edb0f28,0x3f222292,0x3e8aae29);
      FUN_71510c9c(&DAT_711f2bc0,0x3e431a4c,0xbedbb83d,0x3eaeb463,0x3f5075f7);
      FUN_71510c9c(&DAT_711f2bd0,0x3ef234ec,0xbf297050,0xbd961566,0x3f13ad19);
      FUN_71510c9c(&DAT_711f2be0,0xbdf991bc,0x3c0de820,0xba8b6523,0x3f7e1672);
      FUN_71510c9c(&DAT_711f2bf0,0x3f478961,0xbe3cf80e,0x3f11ac9b,0x3e3e8922);
      FUN_71510c9c(&DAT_711f2c00,0xbe760957,0xbe947842,0xbbf25d80,0xbf6d2546);
      FUN_71510c9c(&DAT_711f2c10,0xb509ffff,0xb2ffff4b,0x3f72e148,0xbea1ceaf);
      FUN_71510c9c(&DAT_711f2c20,0xbf26e632,0xbd9e8577,0x3be00b6e,0x3f4117d7);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2c30);
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711f2ce4 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2ce4), iVar2 != 0))
    {
      FUN_71510c9c(&DAT_711f2c34,0xbe47b353,0xbd370047,0x3e0f27bb,0x3f784231);
      FUN_71510c9c(&DAT_711f2c44,0xbede6320,0xbd7877ab,0x3e181301,0x3f62e925);
      FUN_71510c9c(&DAT_711f2c54,0x3c86b378,0x3c2c0c63,0x3dd652bd,0x3f7e8f08);
      FUN_71510c9c(&DAT_711f2c64,0x3f437803,0xbe88b978,0xbf0c26fe,0xbe5b6ed6);
      FUN_71510c9c(&DAT_711f2c74,0x3d36598e,0xbeaa1cac,0x3cadf506,0x3f7121ab);
      FUN_71510c9c(&DAT_711f2c84,0x3d8e10cf,0xbf3102de,0xbdba8deb,0x3f369a2c);
      FUN_71510c9c(&DAT_711f2c94,0,0,0,0x3f800000);
      FUN_71510c9c(&DAT_711f2ca4,0x3f27e7c0,0xbee0029f,0x3f1967cb,0x3e0e5365);
      FUN_71510c9c(&DAT_711f2cb4,0xbea5b574,0x3e9d4025,0x3f262e0a,0x3f1db574);
      FUN_71510c9c(&DAT_711f2cc4,0xbeb4de7f,0x3f38a676,0xbf0661d0,0x3e9042d9);
      FUN_71510c9c(&DAT_711f2cd4,0,0,0,0x3f800000);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2ce4);
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711f2d98 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2d98), iVar2 != 0))
    {
      FUN_71510c9c(&DAT_711f2ce8,0x3eb6887b,0xbdc4b5dd,0xbe0fa82f,0x3f6b2f45);
      FUN_71510c9c(&DAT_711f2cf8,0x3cc0df59,0x3c6bbfd7,0x3e66809d,0x3f795183);
      FUN_71510c9c(&DAT_711f2d08,0,0,0,0x3f800000);
      FUN_71510c9c(&DAT_711f2d18,0xbf214c44,0x3ea45f5b,0x3f255c53,0x3e9342ee);
      FUN_71510c9c(&DAT_711f2d28,0x3ef4dbe0,0xbe5544bb,0x3e3dd6e0,0x3f553459);
      FUN_71510c9c(&DAT_711f2d38,0xbb29102f,0xbe175643,0xbc8d66f1,0x3f7d23f6);
      FUN_71510c9c(&DAT_711f2d48,0xbdf991bc,0x3c0de820,0xba8b6523,0x3f7e1672);
      FUN_71510c9c(&DAT_711f2d58,0x3eefbfc6,0xbea5b424,0x3f4ce65c,0x3e408312);
      FUN_71510c9c(&DAT_711f2d68,0x3ec9d9d3,0x3e9a1b5c,0x3d77a701,0x3f5dbd51);
      FUN_71510c9c(&DAT_711f2d78,0x3cc3e74b,0xbc2e70c1,0xbed02de0,0x3f69c971);
      FUN_71510c9c(&DAT_711f2d88,0xbed86595,0,0,0x3f680000);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2d98);
    }
    DataMemoryBarrier(0xb);
    if (((DAT_711f2e4c & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f2e4c), iVar2 != 0))
    {
      FUN_71510c9c(&DAT_711f2d9c,0xbeb6887b,0x3dc4b5dd,0xbe0fa82f,0x3f6b2f45);
      FUN_71510c9c(&DAT_711f2dac,0xbcc0df59,0xbc6bbfd7,0x3e66809d,0x3f795183);
      FUN_71510c9c(&DAT_711f2dbc,0,0,0,0x3f800000);
      FUN_71510c9c(&DAT_711f2dcc,0xbefaaf79,0x3eb6501e,0x3f47f584,0x3e1c6541);
      FUN_71510c9c(&DAT_711f2ddc,0x3ec8de2b,0xbe6e1c58,0x3e359360,0x3f5f3ffb);
      FUN_71510c9c(&DAT_711f2dec,0x3d187d70,0xbeafa440,0xbd4f68be,0x3f6feef6);
      FUN_71510c9c(&DAT_711f2dfc,0xbe31cc10,0x3c8ccdd9,0xbb469eb5,0x3f7c100e);
      FUN_71510c9c(&DAT_711f2e0c,0x3f114270,0xbeb0068e,0x3f33d85a,0x3e83d70a);
      FUN_71510c9c(&DAT_711f2e1c,0xbecafe1e,0x3e353261,0x3d55c209,0x3f663bcd);
      FUN_71510c9c(&DAT_711f2e2c,0x3b469eb5,0x3e31cc10,0xbc8ccdd9,0x3f7c100e);
      FUN_71510c9c(&DAT_711f2e3c,0,0,0,0x3f800000);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f2e4c);
    }
    iVar2 = thunk_FUN_715f4594(unaff_r8);
    uVar3 = DAT_711f2aa4;
    iVar9 = FUN_71ba2d10(DAT_711f2aa4,0);
    if (iVar2 == 9) {
      if (iVar9 == 0) {
        uVar4 = FUN_71ba0b38(uVar3,0xc2b40000);
        uVar4 = FUN_71ba13e0(uVar4,0x42b40000);
        FUN_716b5fe0(&DAT_711f2ce8,uVar4);
      }
      else {
        uVar4 = FUN_71ba240c(0xc2b40000,uVar3);
        uVar4 = FUN_71ba13e0(uVar4,0x42b40000);
        FUN_716b5fe0(&DAT_711f2d9c,uVar4);
      }
    }
    else if (iVar9 == 0) {
      uVar4 = FUN_71ba0b38(uVar3,0xc2b40000);
      uVar3 = FUN_71ba13e0(uVar4,0x42b40000);
      uVar3 = uVar3 & 0x7fffffff;
      FUN_716b5fe0(&DAT_711f2b80,uVar3);
      uVar4 = FUN_714172f4(*(undefined4 *)(iVar11 + 0x18));
      iVar2 = FUN_71416a78(uVar4,0);
      puVar8 = *(undefined4 **)
                (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar11 + 0x18)) + 0x10) + iVar2 * 0x18 +
                0x10);
      uStack_b4 = 0;
      uStack_b0 = 0x3de76c8b;
      uStack_b8 = 0xbecccccd;
      FUN_7136cdfc(&uStack_100);
      FUN_71511fb0(puVar8,&uStack_b8,&uStack_100,uVar3);
      *puVar8 = uStack_100;
      puVar8[1] = uStack_fc;
      puVar8[2] = uStack_f8;
      FUN_71510c9c(&uStack_70,0x3df33db0,0xbe48d64d,0x3f2d2f6f,0x3f332852);
      FUN_716b5768(0,&uStack_70,uVar3);
    }
    else {
      uVar4 = FUN_71ba240c(0xc2b40000,uVar3);
      uVar3 = FUN_71ba13e0(uVar4,0x42b40000);
      FUN_716b5fe0(&DAT_711f2c34,uVar3 & 0x7fffffff);
      uVar4 = FUN_714172f4(*(undefined4 *)(iVar11 + 0x18));
      iVar2 = FUN_71416a78(uVar4,0);
      puVar8 = *(undefined4 **)
                (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar11 + 0x18)) + 0x10) + iVar2 * 0x18 +
                0x10);
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_70 = 0x3e99999a;
      FUN_7136cdfc(&uStack_b8);
      FUN_71511fb0(puVar8,&uStack_70,&uStack_b8,uVar3 & 0x7fffffff);
      *puVar8 = uStack_b8;
      puVar8[1] = uStack_b4;
      puVar8[2] = uStack_b0;
    }
  }
  FUN_7133f834(&uStack_70);
  FUN_7133f834(&uStack_b8);
  thunk_FUN_715600f0(unaff_r8,&uStack_70);
  FUN_71340234(&uStack_b8,DAT_711f2aa0,0,DAT_711f2aa4);
  FUN_71342a3c(&uStack_100,&uStack_70,&uStack_b8);
  imp___aeabi_memcpy8(&uStack_b8,&uStack_100,0x48);
  FUN_7133fdcc(&uStack_100);
  FUN_716b5928(&uStack_b8);
  FUN_7133fdcc(&uStack_b8);
  FUN_7133fdcc(&uStack_70);
  return;
}


// =========================================================================
// Function: FUN_716b47c8
// Entry: 0x716b47c8 | Size: 268 bytes
// =========================================================================

void FUN_716b47c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [48];
  undefined4 uStack_78;
  undefined1 auStack_60 [72];
  
  piVar4 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar4;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar4 = iVar1;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x8c);
  FUN_713b45b4(iVar1);
  iVar1 = FUN_714172f4(*(undefined4 *)(iVar1 + 0x18));
  iVar2 = FUN_71416a78(iVar1,5);
  FUN_7133f914(auStack_60,*(int *)(iVar1 + 8) + iVar2 * 0x40,0);
  uVar3 = FUN_7133f834(auStack_a8);
  FUN_71340438(uVar3,0,0x3fc90ff9,0);
  uStack_78 = 0x3dcccccd;
  FUN_71342a3c(auStack_f0,auStack_60,auStack_a8);
  imp___aeabi_memcpy(param_1,auStack_f0,0x48);
  FUN_7133fdcc(auStack_f0);
  FUN_7133fdcc(auStack_a8);
  FUN_7133fdcc(auStack_60);
  return;
}


// =========================================================================
// Function: FUN_716b4a9c
// Entry: 0x716b4a9c | Size: 740 bytes
// =========================================================================

void FUN_716b4a9c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar6 = DAT_70b46c18;
  imp___aeabi_memcpy(DAT_70b46c18 + 0x8fc,param_1,0x48);
  iVar10 = iVar6 + 0x170;
  *(uint *)(iVar6 + 0x8fc) = *(uint *)(iVar6 + 0x8fc) ^ 0x80000000;
  *(uint *)(iVar6 + 0x900) = *(uint *)(iVar6 + 0x900) ^ 0x80000000;
  *(uint *)(iVar6 + 0x904) = *(uint *)(iVar6 + 0x904) ^ 0x80000000;
  FUN_7136d040(iVar10 + (uint)*(byte *)(iVar6 + 0x57) * 0x210 + 0x168,param_1 + 0x10);
  FUN_7136d040(iVar10 + (uint)*(byte *)(iVar6 + 0x57) * 0x210 + 0x18c,param_1 + 0x20);
  FUN_7136d040(iVar10 + (uint)*(byte *)(iVar6 + 0x57) * 0x210 + 0x174,param_1 + 0x30);
  uVar1 = FUN_7133bb90(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x14));
  uVar9 = FUN_71ba21e8(uVar9,uVar9);
  FUN_71ba0b38(uVar9,uVar2);
  uVar2 = imp_sqrtf();
  FUN_7133bb90(uVar8,uVar2);
  uVar11 = FUN_71ba1638();
  uVar11 = FUN_71ba1ea0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x53f7ced9,0x404ca5e3);
  uVar11 = FUN_71ba0670((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0xc0568000);
  FUN_71ba23ec(0,0x40768000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar3 = FUN_71ba242c();
  iVar4 = FUN_71ba2d70(uVar3,0x43b40000);
  while (iVar4 != 0) {
    uVar3 = FUN_71ba0b38(uVar3,0xc3b40000);
    iVar4 = FUN_71ba2d70(uVar3,0x43b40000);
  }
  iVar4 = FUN_71ba2d10(uVar3,0);
  while (iVar4 != 0) {
    uVar3 = FUN_71ba0b38(uVar3,0x43b40000);
    iVar4 = FUN_71ba2d10(uVar3,0);
  }
  uVar5 = FUN_71ba240c(0x43b40000,uVar3);
  iVar4 = FUN_71ba2d70(uVar3,0x43b40000);
  uVar7 = uVar3;
  if (iVar4 == 0) {
    uVar7 = uVar5 ^ 0x80000000;
  }
  iVar4 = FUN_71ba2d10(uVar3,0x43340000);
  if (iVar4 != 0) {
    uVar7 = uVar3;
  }
  uVar11 = FUN_71ba1638(uVar7);
  FUN_71ba0f98((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x53f7ced9,0x404ca5e3);
  uVar2 = FUN_71ba242c();
  iVar10 = iVar10 + (uint)*(byte *)(iVar6 + 0x57) * 0x210;
  *(undefined4 *)(iVar10 + 0x84) = uVar2;
  uVar11 = FUN_71ba1638(uVar1);
  uVar11 = FUN_71ba1ea0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x53f7ced9,0x404ca5e3);
  FUN_71ba0670((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0xc0568000);
  uVar7 = FUN_71ba242c();
  uVar5 = FUN_71ba240c(0x43b40000,uVar7);
  iVar6 = FUN_71ba2d70(uVar7,0x42b40000);
  uVar3 = uVar7;
  if (iVar6 == 0) {
    uVar3 = uVar5 ^ 0x80000000;
  }
  iVar6 = FUN_71ba2d10(uVar7,0x43870000);
  if (iVar6 != 0) {
    uVar3 = uVar7;
  }
  uVar11 = FUN_71ba1638(uVar3);
  uVar11 = FUN_71ba0f98((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x53f7ced9,0x404ca5e3);
  FUN_71ba0670((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x20000000,0xbff921ff);
  uVar1 = FUN_71ba242c();
  *(undefined4 *)(iVar10 + 0x94) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_716b51e8
// Entry: 0x716b51e8 | Size: 24 bytes
// =========================================================================

bool FUN_716b51e8(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = (int *)(DAT_711a3938 + 0x1389c);
  iVar3 = *piVar6;
  if (iVar3 == 0) {
    iVar3 = FUN_713c301c(0);
    if (iVar3 == 0) {
      iVar3 = *piVar6;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar3 = FUN_715ba834();
      *piVar6 = iVar3;
    }
  }
  bVar1 = false;
  if ((*(int *)(iVar3 + 0x8c) != 0) &&
     (piVar6 = (int *)FUN_7149eda4(*(int *)(*(int *)(iVar3 + 0x8c) + 0x440) + 4),
     piVar6 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar6 + 0x14))();
    bVar1 = iVar3 == 0xd0;
  }
  piVar6 = (int *)(DAT_711a3938 + 0x1389c);
  iVar3 = *piVar6;
  if (iVar3 == 0) {
    iVar3 = FUN_713c301c(0);
    if (iVar3 == 0) {
      iVar3 = *piVar6;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar3 = FUN_715ba834();
      *piVar6 = iVar3;
    }
  }
  bVar2 = false;
  if ((*(int *)(iVar3 + 0x8c) != 0) &&
     (piVar6 = (int *)FUN_7149f1c0(*(int *)(*(int *)(iVar3 + 0x8c) + 0x440) + 4),
     piVar6 != (int *)0x0)) {
    uVar4 = (**(code **)(*piVar6 + 0x14))();
    bVar2 = (uVar4 & 0xfffffffd) == 0xcd;
  }
  if (!bVar1 && !bVar2) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar5 = 0;
    }
    else {
      iVar3 = FUN_71308114(*(int *)(param_1 + 0x18),0x70);
      if (iVar3 != 0) {
        return true;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x18);
    }
    iVar3 = FUN_71308114(uVar5,0x71);
    if ((iVar3 == 0) && (iVar3 = FUN_71308114(*(undefined4 *)(param_1 + 0x18),0x72), iVar3 == 0)) {
      iVar3 = FUN_71308114(*(undefined4 *)(param_1 + 0x18),0x73);
      return iVar3 != 0;
    }
  }
  return true;
}


// =========================================================================
// Function: FUN_716b5534
// Entry: 0x716b5534 | Size: 24 bytes
// =========================================================================

void FUN_716b5534(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba1e0c(DAT_711f2aa8);
  uVar1 = FUN_71ba21e8(uVar1,param_1);
  FUN_71ba13e0(uVar1,0x447a0000);
  return;
}


// =========================================================================
// Function: FUN_716b5768
// Entry: 0x716b5768 | Size: 24 bytes
// =========================================================================

void FUN_716b5768(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar3;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar3 = iVar1;
    }
  }
  iVar4 = *(int *)(iVar1 + 0x8c);
  uVar2 = FUN_714172f4(*(undefined4 *)(iVar4 + 0x18));
  iVar1 = FUN_71416a78(uVar2,param_1);
  uVar2 = *(undefined4 *)
           (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar4 + 0x18)) + 0x10) + iVar1 * 0x18 + 0x10)
  ;
  FUN_715119f4(uVar2,uVar2,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_716b5928
// Entry: 0x716b5928 | Size: 388 bytes
// =========================================================================

void FUN_716b5928(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [76];
  
  piVar5 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar5;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar5 = iVar1;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x8c);
  if (*(int *)(iVar1 + 0x18) != 0) {
    FUN_713b45b4(iVar1);
    iVar2 = FUN_714172f4(*(undefined4 *)(iVar1 + 0x18));
    iVar3 = FUN_71416a78(iVar2,4);
    FUN_7133f914(auStack_70,*(int *)(iVar2 + 8) + iVar3 * 0x40,0);
    uVar4 = FUN_7133f834(auStack_b8);
    FUN_713401e4(uVar4,auStack_70);
    FUN_71342a3c(&uStack_100,auStack_b8,param_1);
    FUN_7136cdfc(&uStack_10c);
    uStack_104 = uStack_f8 ^ 0x80000000;
    uStack_108 = uStack_fc ^ 0x80000000;
    uStack_10c = uStack_100 ^ 0x80000000;
    FUN_7136d040(&uStack_100,auStack_e0);
    FUN_7136d040(auStack_e0,&uStack_10c);
    iVar2 = FUN_71416a78(iVar2,5);
    FUN_71510cc0(*(undefined4 *)
                  (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar1 + 0x18)) + 0x10) + iVar2 * 0x18
                  + 0x10),&uStack_100);
    FUN_7133fdcc(&uStack_100);
    FUN_7133fdcc(auStack_b8);
    FUN_7133fdcc(auStack_70);
  }
  return;
}


// =========================================================================
// Function: FUN_716b5d04
// Entry: 0x716b5d04 | Size: 20 bytes
// =========================================================================

void FUN_716b5d04(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_713d5ec0(0);
  FUN_713d7380(uVar1,0);
  return;
}


// =========================================================================
// Function: FUN_716b5d84
// Entry: 0x716b5d84 | Size: 24 bytes
// =========================================================================

void FUN_716b5d84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  piVar3 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar3;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar3 = iVar1;
    }
  }
  iVar4 = *(int *)(iVar1 + 0x8c);
  uVar2 = FUN_714172f4(*(undefined4 *)(iVar4 + 0x18));
  iVar1 = FUN_71416a78(uVar2,5);
  puVar5 = *(undefined4 **)
            (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar4 + 0x18)) + 0x10) + iVar1 * 0x18 + 0x10
            );
  uVar2 = 0x3df5c28f;
  if (param_1 < 0x1f6) {
    if (param_1 == 0x19b) goto LAB_716b5e9c;
    if ((param_1 != 0x19f) && (param_1 != 0x1ad)) {
      return;
    }
  }
  else {
    if (param_1 == 0x1f6) goto LAB_716b5e9c;
    if (param_1 == 0x1f7) {
      uVar2 = 0x3e19999a;
      goto LAB_716b5e9c;
    }
    if (param_1 != 0x20e) {
      return;
    }
  }
  uVar2 = 0x3dcccccd;
LAB_716b5e9c:
  uVar6 = puVar5[1];
  uVar2 = FUN_71ba0b38(uVar2,*puVar5);
  *puVar5 = uVar2;
  uVar2 = FUN_71ba0b38(uVar6,0x3c23d70a);
  puVar5[1] = uVar2;
  return;
}


// =========================================================================
// Function: FUN_716b5fe0
// Entry: 0x716b5fe0 | Size: 24 bytes
// =========================================================================

void FUN_716b5fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(DAT_711a3938 + 0x1389c);
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    iVar2 = FUN_713c301c(0);
    if (iVar2 == 0) {
      iVar2 = *piVar3;
    }
    else {
      iVar2 = thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar3 = iVar1;
    }
  }
  iVar1 = FUN_71ba2d70(param_2,0x3f800000);
  if (iVar1 != 0) {
    param_2 = 0x3f800000;
  }
  iVar1 = FUN_71ba2d30(param_2,0);
  if ((iVar1 == 0) && (*(int *)(*(int *)(iVar2 + 0x8c) + 0x18) != 0)) {
    FUN_716b5768(2,param_1,param_2);
    FUN_716b5768(3,param_1 + 0x10,param_2);
    FUN_716b5768(4,param_1 + 0x20,param_2);
    FUN_716b5768(0x15,param_1 + 0x30,param_2);
    FUN_716b5768(0x16,param_1 + 0x40,param_2);
    FUN_716b5768(0x17,param_1 + 0x50,param_2);
    FUN_716b5768(0x18,param_1 + 0x60,param_2);
    FUN_716b5768(0x1f,param_1 + 0x70,param_2);
    FUN_716b5768(0x20,param_1 + 0x80,param_2);
    FUN_716b5768(0x21,param_1 + 0x90,param_2);
    FUN_716b5768(0x22,param_1 + 0xa0,param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_716b6da0
// Entry: 0x716b6da0 | Size: 812 bytes
// =========================================================================

void FUN_716b6da0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  int unaff_r4;
  byte *pbVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar2 = 0;
  if (DAT_711f6d58 != 0) {
    iVar2 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (DAT_711f6d58 != 0 && iVar2 != 0) {
    puVar8 = (undefined *)0x1f8c;
    iVar12 = 0;
    do {
      iVar3 = *(int *)(iVar2 + 0x1f8c + iVar12 * -4);
      if (iVar3 != 0) {
        puVar8 = (undefined *)(uint)*(byte *)((iVar2 + 0x3eec) - iVar12);
      }
      if (iVar3 != 0 && puVar8 != (undefined *)0x0) {
        iVar11 = *(int *)(iVar3 + 0x10);
        if (iVar11 != 0) {
          unaff_r4 = *(int *)(iVar11 + 0x8c);
        }
        if (iVar11 != 0 && unaff_r4 != 0) {
          if (*(char *)(iVar3 + 0xc) == '\0') {
LAB_716b6fd8:
            if (*(int *)(unaff_r4 + 0x18) == 0) goto LAB_716b6e2c;
            iVar3 = FUN_71308114(*(int *)(unaff_r4 + 0x18),0x2a);
            if (iVar3 != 0) {
              *(undefined4 *)(iVar3 + 0x18) = 0;
            }
            iVar3 = FUN_71308114(*(undefined4 *)(unaff_r4 + 0x18),0x2b);
            if (iVar3 != 0) {
              *(undefined4 *)(iVar3 + 0x18) = 0;
            }
            iVar3 = FUN_71308114(*(undefined4 *)(unaff_r4 + 0x18),0x2c);
            uVar10 = 0;
            if (iVar3 != 0) {
              *(undefined4 *)(iVar3 + 0x18) = 0;
            }
          }
          else {
            uVar4 = FUN_713bd448(unaff_r4);
            iVar3 = FUN_713c067c(*(undefined4 *)(unaff_r4 + 0x440));
            if (iVar3 != 0) {
              uVar13 = FUN_713db648(*(undefined4 *)
                                     (unaff_r4 + *(char *)(unaff_r4 + 0x71c) * 0x1c + 0x5a4),uVar4);
              puVar8 = (undefined *)((ulonglong)uVar13 >> 0x20);
              if ((*(byte *)((int)uVar13 + 0x18) & 2) == 0) goto LAB_716b6fd8;
            }
            uVar13 = FUN_713c0260(*(undefined4 *)(unaff_r4 + 0x440));
            puVar8 = (undefined *)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) goto LAB_716b6fd8;
            uVar13 = FUN_713bfe4c(*(undefined4 *)(unaff_r4 + 0x440));
            puVar8 = (undefined *)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) goto LAB_716b6fd8;
            uVar13 = FUN_713bfa30(*(undefined4 *)(unaff_r4 + 0x440));
            puVar8 = (undefined *)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) goto LAB_716b6fd8;
            pbVar9 = (byte *)(iVar11 + 0x52);
            (&DAT_711f51b0)[(short)(ushort)*pbVar9 * 0x1d] = 0;
            (&DAT_711f51b1)[(short)(ushort)*pbVar9 * 0x1d] = 0;
            bVar1 = *pbVar9;
            uVar4 = FUN_71ba1b94((int)*(short *)(&DAT_711f5195 + (short)(ushort)bVar1 * 0x1d));
            uVar5 = FUN_71ba1b94(-(int)*(short *)(&DAT_711f5197 + (short)(ushort)bVar1 * 0x1d));
            if (*(int *)(unaff_r4 + 0x18) == 0) {
              iStack_34 = 0;
              iStack_30 = 0;
LAB_716b6fa4:
              iStack_38 = 0;
            }
            else {
              iStack_34 = FUN_71308114(*(int *)(unaff_r4 + 0x18),0x2a);
              if (iStack_34 != 0) {
                *(undefined4 *)(iStack_34 + 0x18) = 0;
              }
              iStack_30 = FUN_71308114(*(undefined4 *)(unaff_r4 + 0x18),0x2b);
              if (iStack_30 != 0) {
                *(undefined4 *)(iStack_30 + 0x18) = 0;
              }
              iStack_38 = FUN_71308114(*(undefined4 *)(unaff_r4 + 0x18),0x2c);
              if (iStack_38 == 0) goto LAB_716b6fa4;
              *(undefined4 *)(iStack_38 + 0x18) = 0;
            }
            uVar6 = FUN_71ba21e8(uVar4,0x3c000000);
            uVar7 = FUN_71ba21e8(uVar5,0x3c000000);
            uVar13 = FUN_71ba2d10(uVar7,0);
            puVar8 = (undefined *)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 == 0) goto LAB_716b6fd8;
            uVar10 = 1;
            if (*(int *)(unaff_r4 + 0x18) != 0) {
              if (iStack_30 == 0) {
                iStack_30 = FUN_713067a4(*(int *)(unaff_r4 + 0x18),0,0x2b);
              }
              *(uint *)(iStack_30 + 0x18) = uVar7 ^ 0x80000000;
              iVar3 = FUN_71ba2d10(uVar6,0);
              if (iVar3 != 0) {
                if (iStack_34 == 0) {
                  iStack_34 = FUN_713067a4(*(undefined4 *)(unaff_r4 + 0x18),0,0x2a);
                }
                *(uint *)(iStack_34 + 0x18) = uVar6 ^ 0x80000000;
              }
              iVar3 = FUN_71ba2d70(uVar6,0);
              if (iVar3 != 0) {
                if (iStack_38 == 0) {
                  iStack_38 = FUN_713067a4(*(undefined4 *)(unaff_r4 + 0x18),0,0x2c);
                }
                *(uint *)(iStack_38 + 0x18) = uVar6;
              }
            }
          }
          puVar8 = &DAT_711f5195;
          (&DAT_711f51b0)[(short)(ushort)*(byte *)(iVar11 + 0x52) * 0x1d] = uVar10;
          (&DAT_711f51b1)[(short)(ushort)*(byte *)(iVar11 + 0x52) * 0x1d] = uVar10;
        }
      }
LAB_716b6e2c:
      iVar12 = iVar12 + -1;
    } while (iVar12 != -0x3ec);
  }
  return;
}


// =========================================================================
// Function: FUN_716b73b4
// Entry: 0x716b73b4 | Size: 1088 bytes
// =========================================================================

undefined4 FUN_716b73b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  bool bVar22;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar9 = FUN_716ac9f4();
  if (iVar9 != 0) {
    return 0;
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80d0);
  if (*pcVar10 == '\0') {
    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80c0);
    *(undefined1 *)((int)puVar14 + 0x19) = 1;
    uVar6 = DAT_7008482c;
    uVar5 = DAT_70084828;
    uVar4 = DAT_70084824;
    uVar3 = DAT_70084820;
    uVar12 = DAT_7008481c;
    *puVar14 = DAT_70084818;
    puVar14[1] = uVar12;
    puVar14[2] = uVar3;
    puVar14[3] = uVar4;
    puVar14[4] = uVar5;
    puVar14[5] = uVar6;
    *(undefined1 *)(puVar14 + 6) = DAT_70084830;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716b9c4c,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80d0);
    *puVar15 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80c0);
  if (*(char *)(iVar9 + 0x19) != '\0') {
    uVar11 = 0;
    uVar19 = 0;
    do {
      iVar17 = (uVar11 & 7) * 8;
      bVar8 = (byte)(0x3d0b9929 >> iVar17) |
              (byte)(-0x40a42047 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
      uVar21 = iVar17 - 0x20;
      if (-1 < (int)uVar21) {
        bVar8 = (byte)(0xbf5bdfb9 >> (uVar21 & 0xff));
      }
      *(byte *)(iVar9 + uVar11) = *(byte *)(iVar9 + uVar11) ^ bVar8;
      bVar22 = 0xfffffffe < uVar11;
      bVar1 = uVar19 == 0;
      bVar2 = (0x17 < uVar11) <= uVar19;
      uVar11 = uVar11 + 1;
      uVar19 = uVar19 + bVar22;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x19) = 0;
  }
  uVar11 = imp_strlen(iVar9);
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar11 < 0xb) {
    uVar19 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar11 << 1));
    if (uVar11 != 0) goto LAB_716b74cc;
  }
  else {
    uVar19 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_30 = (uVar11 | 7) + 2;
    uStack_2c = uVar11;
    uStack_28 = uVar19;
LAB_716b74cc:
    imp___aeabi_memmove(uVar19,iVar9,uVar11);
  }
  *(undefined1 *)(uVar19 + uVar11) = 0;
  iVar9 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar9 == 1) {
    return 0;
  }
  piVar18 = (int *)(DAT_711a3938 + 0x1389c);
  iVar9 = *piVar18;
  if (iVar9 == 0) {
    iVar9 = FUN_713c301c(0);
    if (iVar9 == 0) {
      iVar9 = *piVar18;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar9 = FUN_715ba834();
      *piVar18 = iVar9;
    }
  }
  iVar17 = thunk_FUN_715bf66c(iVar9);
  iVar9 = DAT_70b46c18;
  iVar16 = 0xc4;
  if (iVar17 != 0) {
    iVar16 = 0xb0;
  }
  iVar17 = *(int *)(DAT_70b46c18 + iVar16);
  uVar12 = FUN_713d5ec0(0);
  iVar16 = FUN_7133c0b0(9);
  cVar7 = DAT_711f29fc;
  if (iVar16 != 0) {
    return 1;
  }
  if (*(int *)(DAT_70c38f4c + 700) == 0) {
    return 1;
  }
  if (DAT_70ffcd27 == '\0') {
    piVar13 = (int *)(iVar9 + 0xb0);
    piVar18 = (int *)(iVar9 + 0xc4);
    iVar9 = FUN_7156ab28();
    if (cVar7 == '\0') {
      if ((iVar9 == 0) || (iVar9 = FUN_713d77a8(uVar12), iVar9 == 0)) {
        iVar9 = 1;
        if (DAT_711f2a3c == '\0') goto joined_r0x716b76c4;
      }
      else if (DAT_711f2a3c == '\0') {
        if (iVar17 < 3) goto LAB_716b7638;
LAB_716b76d4:
        iVar9 = 0;
        if (DAT_711f29fc == '\0') {
          FUN_716488a8(DAT_711a3938);
          iVar9 = thunk_FUN_715bf66c();
          if (iVar9 != 0) {
            piVar18 = piVar13;
          }
          *piVar18 = 1;
          FUN_716ac460();
          return 0;
        }
      }
      else {
        FUN_716ac460(0);
        iVar9 = 1;
      }
    }
    else {
      if ((iVar9 == 0) || (iVar9 = FUN_713d77a8(uVar12), iVar9 == 0)) {
        if (iVar17 != 1) {
          FUN_71886108();
        }
        goto LAB_716b75c0;
      }
      iVar9 = 1;
      if (iVar17 < 3) {
LAB_716b7638:
        iVar17 = iVar17 + 1;
joined_r0x716b76c4:
        iVar9 = iVar17;
        if (iVar9 == 0) goto LAB_716b76d4;
      }
    }
    piVar20 = (int *)(DAT_711a3938 + 0x1389c);
    iVar17 = *piVar20;
    if (iVar17 == 0) {
      iVar17 = FUN_713c301c(0);
      if (iVar17 == 0) {
        iVar17 = *piVar20;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar17 = FUN_715ba834();
        *piVar20 = iVar17;
      }
    }
    iVar17 = thunk_FUN_715bf66c(iVar17);
    cVar7 = DAT_711f29fc;
    if (iVar17 != 0) {
      piVar18 = piVar13;
    }
    *piVar18 = iVar9;
    uVar12 = 0;
    if (cVar7 != '\0') {
      FUN_716ac460(0);
    }
  }
  else {
LAB_716b75c0:
    uVar12 = (*DAT_700c8084)(param_1,param_2,param_3);
  }
  return uVar12;
}


// =========================================================================
// Function: FUN_716b7df0
// Entry: 0x716b7df0 | Size: 520 bytes
// =========================================================================

void FUN_716b7df0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar11 = FUN_714f658c();
  if (iVar11 == 0) {
    iVar11 = FUN_7154e760();
    uVar12 = DAT_700c807c;
    if (DAT_711f2a3c == '\0') {
      uVar12 = param_1;
    }
    if (iVar11 != 0) {
      uVar12 = 0x42340000;
    }
  }
  else {
    param_2 = 0;
    uVar12 = DAT_700c2d18;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_70ffd1c0 & 1) == 0) && (iVar11 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1c0), iVar11 != 0))
  {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf838,param_2);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf828);
      *(undefined1 *)(puVar9 + 0xd) = 1;
      uVar5 = DAT_7007ea04;
      uVar4 = DAT_7007ea00;
      uVar3 = DAT_7007e9fc;
      *puVar9 = DAT_7007e9f8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007ea14;
      uVar4 = DAT_7007ea10;
      uVar3 = DAT_7007ea0c;
      puVar9[4] = DAT_7007ea08;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      uVar6 = DAT_7007ea28;
      uVar5 = DAT_7007ea24;
      uVar4 = DAT_7007ea20;
      uVar3 = DAT_7007ea1c;
      puVar9[8] = DAT_7007ea18;
      puVar9[9] = uVar3;
      puVar9[10] = uVar4;
      puVar9[0xb] = uVar5;
      puVar9[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71447278,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf838);
      *puVar10 = 1;
    }
    iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf828);
    if (*(char *)(iVar11 + 0x34) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar7 = (byte)(0xf7f5f1d5 >> iVar15) |
                (byte)(-0x6ede64e1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar7 = (byte)(0x91219b1f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar11 + uVar13) = *(byte *)(iVar11 + uVar13) ^ bVar7;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x32 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar11 + 0x34) = 0;
    }
    DAT_70ffd1bc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar11,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1c0);
  }
                    /* WARNING: Could not recover jumptable at 0x71446648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd1bc)(uVar12,param_2);
  return;
}


// =========================================================================
// Function: FUN_716b7f18
// Entry: 0x716b7f18 | Size: 240 bytes
// =========================================================================

void FUN_716b7f18(void)

{
  int iVar1;
  int *piVar2;
  
  (*DAT_700c8088)();
  piVar2 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar2;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar2 = iVar1;
    }
  }
  FUN_715c89f8(iVar1);
  FUN_716ad150();
  if (*(int *)(DAT_711a3938 + 0x13898) != 0) {
    FUN_714de138();
  }
  if (DAT_711ad118 != '\0') {
    piVar2 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar2;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar2 = iVar1;
      }
    }
    iVar1 = FUN_7130854c(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x18),s_IDLE_STANCE_70062222);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_716b8228
// Entry: 0x716b8228 | Size: 640 bytes
// =========================================================================

void FUN_716b8228(int param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar5 = (int *)(DAT_711a3938 + 0x1389c);
  iVar6 = *piVar5;
  if (iVar6 == 0) {
    uVar8 = FUN_713c301c(0);
    param_2 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      iVar6 = *piVar5;
    }
    else {
      iVar6 = thunk_MwhHq(0x3a0);
      uVar8 = FUN_715ba834();
      param_2 = (uint)((ulonglong)uVar8 >> 0x20);
      *piVar5 = (int)uVar8;
    }
  }
  if (iVar6 != 0) {
    param_2 = (uint)DAT_711ad118;
  }
  if ((iVar6 != 0 && param_2 != 0) && (*(int *)(iVar6 + 0x8c) == param_1)) {
    return;
  }
  if (*(int *)(iVar6 + 0x8c) != param_1) {
    iVar6 = *(int *)(DAT_711f6d58 + 0xac);
    uVar3 = FUN_71796d54(iVar6,param_1);
    bVar1 = true;
    iVar7 = 0;
    if (0x3ec < uVar3) goto LAB_716b8304;
    iVar4 = *(int *)(iVar6 + uVar3 * 4 + 0x1f8c);
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 0x10);
    }
    if (iVar4 == 0 || iVar6 == 0) goto LAB_716b8304;
  }
  FUN_713b96e0(param_1,*(undefined1 *)(iVar6 + 0x91));
  bVar1 = false;
  iVar7 = iVar6;
LAB_716b8304:
  cVar2 = '\0';
  if (DAT_711f6d58 != 0) {
    cVar2 = DAT_711f2a3c;
  }
  if (DAT_711f6d58 != 0 && cVar2 != '\0') {
    piVar5 = (int *)(DAT_711a3938 + 0x1389c);
    iVar6 = *piVar5;
    if (iVar6 == 0) {
      iVar6 = FUN_713c301c(0);
      if (iVar6 == 0) {
        iVar6 = *piVar5;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar6 = FUN_715ba834();
        *piVar5 = iVar6;
      }
    }
    if ((*(int *)(iVar6 + 0x8c) == param_1) && (iVar6 = FUN_716acf2c(), iVar6 != 0)) {
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      iVar6 = FUN_714172f4(*(undefined4 *)(param_1 + 0x18));
      iVar4 = FUN_71416a78(iVar6,5);
      FUN_7141c450(*(int *)(iVar6 + 8) + iVar4 * 0x40,&uStack_30,1);
      iVar4 = FUN_71416a78(iVar6,6);
      FUN_7141c450(*(int *)(iVar6 + 8) + iVar4 * 0x40,&uStack_30,1);
      iVar4 = FUN_71416a78(iVar6,7);
      FUN_7141c450(*(int *)(iVar6 + 8) + iVar4 * 0x40,&uStack_30,1);
      iVar4 = FUN_71416a78(iVar6,8);
      FUN_7141c450(*(int *)(iVar6 + 8) + iVar4 * 0x40,&uStack_30,1);
    }
  }
  if (!bVar1) {
    iVar6 = FUN_71556e90(iVar7);
    if (iVar6 == 0) {
      (*DAT_700c8090)(param_1);
    }
    else {
      FUN_7155c874();
      (*DAT_700c8090)(param_1);
      FUN_7155dba8(iVar6);
    }
    FUN_713b96e0(param_1,0xff);
    return;
  }
  (*DAT_700c8090)(param_1);
  return;
}


// =========================================================================
// Function: FUN_716b8d08
// Entry: 0x716b8d08 | Size: 464 bytes
// =========================================================================

undefined4 FUN_716b8d08(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80f0);
  if (*pcVar7 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80e0);
    *(undefined1 *)((int)puVar10 + 0x15) = 1;
    uVar5 = DAT_70084848;
    uVar4 = DAT_70084844;
    uVar3 = DAT_70084840;
    uVar15 = DAT_7008483c;
    *puVar10 = DAT_70084838;
    puVar10[1] = uVar15;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    puVar10[4] = uVar5;
    *(undefined1 *)(puVar10 + 5) = DAT_7008484c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716b9c88,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80f0);
    *puVar11 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c80e0);
  if (*(char *)(iVar8 + 0x15) != '\0') {
    uVar9 = 0;
    uVar13 = 0;
    do {
      iVar12 = (uVar9 & 7) * 8;
      bVar6 = (byte)(0x57f97d9b >> iVar12) | (byte)(0x71a36f0b << ((uVar9 & 7) * -8 + 0x20 & 0xff));
      uVar14 = iVar12 - 0x20;
      if (-1 < (int)uVar14) {
        bVar6 = (byte)(0x71a36f0b >> (uVar14 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar6;
      bVar16 = 0xfffffffe < uVar9;
      bVar1 = uVar13 == 0;
      bVar2 = (0x13 < uVar9) <= uVar13;
      uVar9 = uVar9 + 1;
      uVar13 = uVar13 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x15) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar9 < 0xb) {
    uVar13 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar9 << 1));
    if (uVar9 == 0) goto LAB_716b8e1c;
  }
  else {
    uVar13 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_30 = (uVar9 | 7) + 2;
    uStack_2c = uVar9;
    uStack_28 = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar8,uVar9);
LAB_716b8e1c:
  uVar15 = 0;
  *(undefined1 *)(uVar13 + uVar9) = 0;
  iVar8 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar8 != 1) {
    uVar15 = (*DAT_700c809c)(param_1,param_2);
  }
  return uVar15;
}


// =========================================================================
// Function: FUN_716b9124
// Entry: 0x716b9124 | Size: 764 bytes
// =========================================================================

void FUN_716b9124(void)

{
  undefined4 *puVar1;
  
  DAT_700c8084 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716b73b4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b7df0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8088 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b7f18;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c808c = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716b81b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8090 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b8228;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8094 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b8828;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b9738;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b9850;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b99d0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b9aa8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8098 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b8c58;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716b9b7c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c809c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716b8d08;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716b9738
// Entry: 0x716b9738 | Size: 104 bytes
// =========================================================================

void FUN_716b9738(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_711f2a3c != '\0') {
    imp___aeabi_memcpy(&DAT_711f2ab0,DAT_70b46c18 + 0x8fc,0x48);
  }
  FUN_7136e43c(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_716b9850
// Entry: 0x716b9850 | Size: 120 bytes
// =========================================================================

void FUN_716b9850(void)

{
  if (DAT_711f2a3c != '\0') {
    imp___aeabi_memcpy(DAT_70b46c18 + 0x8fc,&DAT_711f2ab0,0x48);
  }
  if (DAT_711a3938 != 0) {
    if (*(int *)(DAT_711a3938 + 0x13898) != 0) {
      FUN_714df51c();
    }
  }
  FUN_714eae1c();
  imp_rand();
  return;
}


// =========================================================================
// Function: FUN_716b9ed0
// Entry: 0x716b9ed0 | Size: 216 bytes
// =========================================================================

undefined4 FUN_716b9ed0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (DAT_711f6d58 != 0) {
    iVar3 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (DAT_711f6d58 == 0 || iVar3 == 0) {
    return 0x3f800000;
  }
  piVar4 = (int *)(DAT_711a3938 + 0x1389c);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    iVar3 = FUN_713c301c(0);
    if (iVar3 == 0) {
      iVar3 = *piVar4;
    }
    else {
      iVar3 = thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar4 = iVar1;
    }
  }
  if (((*(int *)(iVar3 + 0x8c) != param_1) &&
      (uVar2 = FUN_71796d54(*(undefined4 *)(DAT_711f6d58 + 0xac),param_1), uVar2 < 0x3ed)) &&
     (iVar1 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + uVar2 * 4 + 0x1f8c), iVar1 != 0)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xe8);
  }
  return *(undefined4 *)(iVar3 + 0xe8);
}


// =========================================================================
// Function: FUN_716ba784
// Entry: 0x716ba784 | Size: 708 bytes
// =========================================================================

void FUN_716ba784(undefined1 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  DAT_711f2e50 = param_1;
  if (DAT_711f6d58 != 0) {
    if (*(int *)(DAT_711f6d58 + 0x10) != 0) {
      FUN_7175134c();
      if (DAT_711f6d58 == 0) goto LAB_716395d0;
    }
    if (*(int *)(DAT_711f6d58 + 0x14) != 0) {
      FUN_7179a0dc();
    }
  }
LAB_716395d0:
  iVar3 = DAT_70c38ed8;
  if (DAT_711e9ab8 == '\0') {
    uStack_24 = 0;
    uStack_28 = 0;
    uVar1 = *(undefined1 *)(DAT_70c38ed8 + 0x6c);
    *(undefined1 *)(DAT_70c38ed8 + 0x6c) = 0;
    uStack_2c = 0xbf800000;
    uStack_30 = 0xbf800000;
    FUN_7145bfac(&uStack_28,&uStack_30);
    uVar7 = uStack_24;
    DAT_711b2fa8 = FUN_71ba0b38(uStack_28,0x40000000);
    DAT_711b2fac = FUN_71ba0b38(uVar7,0xc0000000);
    uStack_2c = 0x3f800000;
    uStack_30 = 0x3f800000;
    FUN_7145bfac(&uStack_28,&uStack_30);
    uVar7 = uStack_24;
    DAT_711e9ab8 = '\x01';
    *(undefined1 *)(iVar3 + 0x6c) = uVar1;
    DAT_711b2fb0 = FUN_71ba0b38(uStack_28,0xc0000000);
    DAT_711b2fb4 = FUN_71ba0b38(uVar7,0x40000000);
  }
  iVar3 = thunk_FUN_71566860();
  if (iVar3 == 0) {
    piVar6 = (int *)(DAT_711a3938 + 0x1389c);
    iVar3 = *piVar6;
    if (iVar3 == 0) {
      iVar3 = FUN_713c301c(0);
      if (iVar3 == 0) {
        iVar3 = *piVar6;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar3 = FUN_715ba834();
        *piVar6 = iVar3;
      }
    }
    iVar4 = thunk_FUN_715bf66c(iVar3);
    iVar3 = DAT_70c38ed8;
    if (iVar4 != 0) {
      uVar5 = *(uint *)(DAT_70c38ed8 + 0x48);
      if (uVar5 != 0) {
        if ((*DAT_70b42044 == '\0') && (*DAT_70b42048 == '\0')) {
          cVar2 = *(char *)(DAT_70c38ed8 + 0x6d);
          bVar8 = cVar2 == '\0';
          if (bVar8) {
            cVar2 = *(char *)(DAT_70c38ed8 + 0x6c);
          }
          if ((bVar8 && cVar2 == '\0') && (DAT_711b2f88 != uVar5)) {
            iVar4 = FUN_7156ace4();
            if (iVar4 == 0) {
              uVar5 = (uint)*(ushort *)(iVar3 + 0x48);
            }
            else {
              uVar5 = *(uint *)(iVar3 + 0x48);
              DAT_711b2f88 = uVar5;
            }
          }
        }
        iVar3 = ((uVar5 & 0xffff) * 4 + (uVar5 & 0xffff)) * 8;
        uVar7 = *(undefined4 *)(&DAT_70ffd3c8 + iVar3);
        iVar4 = FUN_71ba2cf0(uVar7,0);
        if (iVar4 != 0) {
          uVar7 = FUN_713ea438(*(undefined4 *)(&DAT_70ffd3c0 + iVar3),
                               *(undefined4 *)(&DAT_70ffd3c4 + iVar3));
          uVar7 = FUN_71ba0b38(uVar7,0x40a00000);
          *(undefined4 *)(&DAT_70ffd3c8 + iVar3) = uVar7;
        }
        FUN_716382cc(*(undefined4 *)(&DAT_70ffd3c0 + iVar3),*(undefined4 *)(&DAT_70ffd3c4 + iVar3),
                     uVar7,DAT_700c7464,1,0);
      }
      iVar3 = 0;
      if (DAT_711f6d58 != 0) {
        iVar3 = *(int *)(DAT_711f6d58 + 0x24);
      }
      if (DAT_711f6d58 != 0 && iVar3 != 0) {
        FUN_717401e4();
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_716ba88c
// Entry: 0x716ba88c | Size: 228 bytes
// =========================================================================

undefined4
FUN_716ba88c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (((DAT_711f6977 == '\0') && (DAT_711f6d58 != 0)) && (iVar1 = FUN_713d7bc4(), iVar1 != 0)) {
    iVar1 = *(int *)(DAT_711f6d58 + 4);
    uVar2 = FUN_717b92b8(iVar1,param_3);
    if (((uVar2 < 0x7d1) && (*(char *)(iVar1 + uVar2 + 0x3e88) != '\0')) &&
       ((iVar1 = *(int *)(iVar1 + uVar2 * 4), *(char *)(iVar1 + 0x1d) == '\0' &&
        (iVar1 = *(int *)(iVar1 + 0xc), *(short *)(iVar1 + 0x26) != 0x23a)))) {
      iVar3 = *(int *)(iVar1 + 0x464);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x59c);
      }
      if (iVar3 == 0 || iVar1 == 0) {
        FUN_7175cf1c(*(undefined4 *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c),uVar2,0,0x23a,param_5);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_716baa1c
// Entry: 0x716baa1c | Size: 188 bytes
// =========================================================================

void FUN_716baa1c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_711f6d58 != 0) && (iVar1 = FUN_713c301c(0), *(int *)(iVar1 + 0x590) == param_2)) {
    uVar2 = *(undefined4 *)(DAT_711f6d58 + 4);
    iVar1 = FUN_713c301c(0);
    uVar2 = FUN_717b92b8(uVar2,*(undefined4 *)(iVar1 + 0x590));
    FUN_7175d430(*(undefined4 *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c),uVar2);
  }
  (*DAT_700c8118)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: FUN_716bbc34
// Entry: 0x716bbc34 | Size: 2000 bytes
// =========================================================================

void FUN_716bbc34(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  bool bVar29;
  bool bVar30;
  int iStack_54;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = DAT_70c38f4c;
  if (DAT_711f6b52 != '\0') {
    if (*(int *)(DAT_70c38f4c + 0x29c) != 0) {
      *(undefined1 *)(*(int *)(DAT_70c38f4c + 0x29c) + 0x4c) = 0xff;
    }
    if (*(int *)(iVar4 + 0x2b0) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x2b0) + 0x4c) = 0xff;
    }
    if (*(int *)(iVar4 + 0x14) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x14) + 0x4c) = 0xff;
    }
    if (*(int *)(iVar4 + 0x18) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x18) + 0x4c) = 0xff;
    }
    if (*(int *)(iVar4 + 0x2b4) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x2b4) + 0x4c) = 0xff;
    }
  }
  uVar28 = 0;
  iVar4 = FUN_716ac9f4();
  if ((iVar4 == 0) || (iStack_54 = *(int *)(DAT_70c38f4c + 0x48), iStack_54 == 0)) {
    uVar27 = 0;
    bVar3 = true;
    iStack_54 = 0;
  }
  else {
    uVar27 = *(undefined1 *)(iStack_54 + 0x4c);
    bVar3 = false;
    *(undefined1 *)(iStack_54 + 0x4c) = 0;
  }
  iVar5 = FUN_716e69cc();
  iVar4 = DAT_70c38f4c;
  uVar17 = 0;
  uVar19 = 0;
  uVar21 = 0;
  uVar24 = 0;
  uVar20 = 0;
  if (iVar5 != 0) {
    iVar15 = *(int *)(DAT_70c38f4c + 4);
    if (iVar15 != 0) {
      uVar28 = *(undefined1 *)(iVar15 + 0x4c);
      *(undefined1 *)(iVar15 + 0x4c) = 0;
    }
    iVar15 = *(int *)(iVar4 + 0x4c);
    if (iVar15 != 0) {
      uVar17 = *(undefined1 *)(iVar15 + 0x4c);
      *(undefined1 *)(iVar15 + 0x4c) = 0;
    }
    iVar15 = *(int *)(iVar4 + 0x50);
    if (iVar15 != 0) {
      uVar19 = *(undefined1 *)(iVar15 + 0x4c);
      *(undefined1 *)(iVar15 + 0x4c) = 0;
    }
    iVar15 = *(int *)(iVar4 + 0x54);
    if (iVar15 != 0) {
      uVar21 = *(undefined1 *)(iVar15 + 0x4c);
      *(undefined1 *)(iVar15 + 0x4c) = 0;
    }
    iVar15 = *(int *)(iVar4 + 0x58);
    if (iVar15 != 0) {
      uVar24 = *(undefined1 *)(iVar15 + 0x4c);
      *(undefined1 *)(iVar15 + 0x4c) = 0;
    }
    iVar4 = *(int *)(iVar4 + 0x74);
    if (iVar4 != 0) {
      uVar20 = *(undefined1 *)(iVar4 + 0x4c);
      *(undefined1 *)(iVar4 + 0x4c) = 0;
    }
  }
  iVar4 = FUN_7163d6b4();
  if (iVar4 != 0) {
    FUN_713f508c(param_1);
    iVar15 = 0;
    iVar4 = 0;
    if (DAT_711a3938 != 0) {
      piVar22 = (int *)(DAT_711a3938 + 0x1389c);
      iVar4 = *piVar22;
      if (iVar4 == 0) {
        iVar4 = FUN_713c301c(0);
        if (iVar4 == 0) {
          iVar4 = *piVar22;
        }
        else {
          iVar4 = thunk_MwhHq(0x3a0);
          iVar6 = FUN_715ba834();
          *piVar22 = iVar6;
        }
      }
    }
    if ((DAT_711f6d58 != 0) && (*(int *)(DAT_711f6d58 + 0xac) != 0)) {
      iVar15 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
    }
    iVar6 = FUN_716e69cc();
    if ((iVar4 != 0) && (iVar6 != 0 && iVar15 != 0)) {
      bVar29 = *(int *)(iVar4 + 0x8c) != 0;
      cVar2 = '\0';
      if (bVar29) {
        cVar2 = *(char *)(iVar15 + 0x12a);
      }
      if ((((bVar29 && cVar2 != '\0') && (iVar15 = thunk_FUN_715c8334(iVar4), iVar15 == 0)) &&
          (iVar15 = thunk_FUN_715bf66c(iVar4), iVar15 == 0)) &&
         ((*DAT_70b42048 == '\0' && (*DAT_70b42044 == '\0')))) {
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8144);
        if (*pcVar7 == '\0') {
          puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8134);
          *(undefined1 *)((int)puVar13 + 0x16) = 1;
          uVar26 = DAT_70084860;
          uVar11 = DAT_7008485c;
          uVar10 = DAT_70084858;
          uVar9 = DAT_70084854;
          *puVar13 = DAT_70084850;
          puVar13[1] = uVar9;
          puVar13[2] = uVar10;
          puVar13[3] = uVar11;
          puVar13[4] = uVar26;
          *(undefined2 *)(puVar13 + 5) = DAT_70084864;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716be4d4,puVar13,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8144);
          *puVar14 = 1;
        }
        iVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8134);
        if (*(char *)(iVar15 + 0x16) != '\0') {
          uVar16 = 0;
          uVar25 = 0;
          do {
            iVar6 = (uVar16 & 7) * 8;
            uVar8 = iVar6 - 0x20;
            bVar18 = (byte)(0xe941b9fb >> iVar6) |
                     (byte)(0x2bd14d25 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar8) {
              bVar18 = (byte)(0x2bd14d25 >> (uVar8 & 0xff));
            }
            *(byte *)(iVar15 + uVar16) = *(byte *)(iVar15 + uVar16) ^ bVar18;
            bVar30 = 0xfffffffe < uVar16;
            bVar29 = uVar25 == 0;
            bVar1 = (0x14 < uVar16) <= uVar25;
            uVar16 = uVar16 + 1;
            uVar25 = uVar25 + bVar30;
          } while (bVar29 && bVar1);
          *(undefined1 *)(iVar15 + 0x16) = 0;
        }
        FUN_71315100(&uStack_34);
        iVar15 = FUN_717c5e7c();
        if (((byte)uStack_34 & 1) != 0) {
          thunk_qNQrlu(uStack_2c);
        }
        uVar26 = *(undefined4 *)(DAT_70ffc974 + 4);
        uVar9 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 8));
        uVar10 = FUN_71ba21e8(*DAT_70b46c20,uVar9);
        uVar9 = FUN_71ba13e0(uVar9,0x43e00000);
        uVar11 = FUN_71ba21e8(uVar9,0xbfc00000);
        uStack_28 = FUN_71ba0b38(uVar11,uVar10);
        uVar23 = *DAT_70b46c1c;
        uVar26 = FUN_71ba1b94(uVar26);
        uVar26 = FUN_71ba21e8(uVar23,uVar26);
        uVar23 = FUN_71ba21e8(uVar9,0x3fc00000);
        uStack_2c = FUN_71ba0b38(uVar23,uVar26);
        uStack_30 = FUN_71ba0b38(uVar23,uVar10);
        uStack_34 = FUN_71ba0b38(uVar11,uVar26);
        FUN_71358efc(auStack_38,0,0,0,200);
        FUN_7135af7c(&uStack_34,auStack_38);
        uStack_28 = FUN_71ba240c(uVar10,uVar9);
        uStack_2c = FUN_71ba0b38(uVar26,uVar9);
        uStack_30 = FUN_71ba0b38(uVar9,uVar10);
        uStack_34 = FUN_71ba240c(uVar26,uVar9);
        FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
        FUN_7135af7c(&uStack_34,auStack_38);
        if (iVar15 != 2) {
          iVar15 = *(int *)(iVar4 + 0x8c);
          iVar4 = FUN_716e81c8(2);
          if ((iVar4 != 0) &&
             (piVar22 = (int *)FUN_713dacc4(iVar15 + *(char *)(iVar15 + 0x71c) * 0x1c + 0x5a4,iVar15
                                           ), *piVar22 == 1)) {
            uVar11 = FUN_713c23b0(iVar15);
            uStack_30 = uVar10;
            uStack_2c = uVar26;
            uVar9 = FUN_71ba21e8(uVar9,0x42800000);
            uVar9 = FUN_71ba21e8(uVar9,uVar11);
            uVar11 = FUN_71ba21e8(uVar9,0xbf000000);
            uVar23 = FUN_71ba0b38(uVar11,uVar10);
            uStack_28 = uVar23;
            uVar11 = FUN_71ba0b38(uVar11,uVar26);
            uStack_34 = uVar11;
            FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
            iVar4 = DAT_70b8896c + 4;
            FUN_7135ab38(iVar4,&uStack_34,auStack_38);
            uStack_30 = uVar10;
            uStack_2c = uVar26;
            uStack_28 = uVar23;
            uVar12 = FUN_71ba0b38(uVar9,uVar11);
            uStack_34 = uVar12;
            FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
            FUN_7135ab38(iVar4,&uStack_34,auStack_38);
            uVar9 = FUN_71ba0b38(uVar9,uVar23);
            uStack_34 = uVar11;
            uStack_30 = uVar10;
            uStack_2c = uVar26;
            uStack_28 = uVar9;
            FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
            FUN_7135ab38(iVar4,&uStack_34,auStack_38);
            uStack_34 = uVar12;
            uStack_30 = uVar10;
            uStack_2c = uVar26;
            uStack_28 = uVar9;
            FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
            FUN_7135ab38(iVar4,&uStack_34,auStack_38);
          }
        }
      }
    }
  }
  iVar4 = DAT_70c38f4c;
  if (iVar5 != 0) {
    if (*(int *)(DAT_70c38f4c + 4) != 0) {
      *(undefined1 *)(*(int *)(DAT_70c38f4c + 4) + 0x4c) = uVar28;
    }
    if (*(int *)(iVar4 + 0x4c) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x4c) + 0x4c) = uVar17;
    }
    if (*(int *)(iVar4 + 0x50) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x50) + 0x4c) = uVar19;
    }
    if (*(int *)(iVar4 + 0x54) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x54) + 0x4c) = uVar21;
    }
    if (*(int *)(iVar4 + 0x58) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x58) + 0x4c) = uVar24;
    }
    if (*(int *)(iVar4 + 0x74) != 0) {
      *(undefined1 *)(*(int *)(iVar4 + 0x74) + 0x4c) = uVar20;
    }
  }
  if (!bVar3) {
    *(undefined1 *)(iStack_54 + 0x4c) = uVar27;
  }
  return;
}


// =========================================================================
// Function: FUN_716bcd24
// Entry: 0x716bcd24 | Size: 216 bytes
// =========================================================================

void FUN_716bcd24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r10;
  undefined4 uStack_28;
  
  iVar3 = 0;
  if (DAT_711f6d58 != 0) {
    iVar3 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (DAT_711f6d58 != 0 && iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + 0x1f6c);
    iVar3 = FUN_71760104(uVar4);
    iVar1 = FUN_71760144(uVar4);
    puVar2 = (undefined4 *)FUN_713e6434(param_2,param_3);
    if (iVar3 != 0) {
      uStack_28 = puVar2[1];
      puVar2[1] = 0;
    }
    if (iVar1 != 0) {
      unaff_r10 = *puVar2;
      *puVar2 = 0;
    }
    (*DAT_700c812c)(param_1,param_2,param_3);
    if (iVar3 != 0) {
      puVar2[1] = uStack_28;
    }
    if (iVar1 != 0) {
      *puVar2 = unaff_r10;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x716bcd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c812c)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_716bcec8
// Entry: 0x716bcec8 | Size: 1020 bytes
// =========================================================================

undefined4 FUN_716bcec8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_716e69cc();
  if (iVar1 == 0) {
    uVar6 = *(undefined4 *)(DAT_70ffc974 + 4);
    uVar7 = *(undefined4 *)(DAT_70ffc974 + 8);
    iVar1 = FUN_716ac9ac();
    if (iVar1 == 0) {
      uVar2 = FUN_71ba1b94(uVar6);
      uVar6 = FUN_71ba1b94(uVar7);
      uVar8 = FUN_71ba13e0(uVar6,0x41100000);
      uVar6 = FUN_71ba21e8(uVar8,0xc1800000);
      uVar3 = FUN_71ba0b38(uVar2,uVar6);
      uVar6 = 0;
      iVar1 = FUN_71ba2d70(uVar3,0);
      if (iVar1 != 0) {
        uVar6 = FUN_71ba21e8(uVar2,0x3c23d70a);
        iVar1 = FUN_71ba2d70(uVar3,uVar6);
        uVar6 = FUN_71ba13e0(uVar2,uVar3);
        uVar6 = FUN_71ba0b38(uVar6,uVar6);
        if (iVar1 == 0) {
          uVar6 = 0;
        }
      }
      uVar2 = FUN_71ba21e8(uVar3,0x3f000000);
      uVar8 = FUN_71ba21e8(uVar8,0x41800000);
      uVar3 = FUN_71ba21e8(uVar8,0x3f0624dd);
      uVar2 = FUN_71ba0b38(uVar3,uVar2);
      uVar8 = FUN_71ba13e0(uVar8,0x41200000);
      uVar8 = FUN_71ba21e8(uVar8,0x40c00000);
      uVar8 = FUN_71ba21e8(uVar8,0x3ecccccd);
      uVar6 = FUN_71ba0b38(uVar8,uVar6);
    }
    else {
      uVar6 = FUN_71ba1b94(uVar6);
      uVar2 = FUN_71ba21e8(*DAT_70b46c1c,uVar6);
      uVar6 = FUN_71ba1b94(uVar7);
      uVar6 = FUN_71ba21e8(*DAT_70b46c20,uVar6);
    }
    uVar8 = FUN_713c23b0(param_1);
    iVar1 = FUN_71ba2cf0(uVar8,0x3e4ccccd);
    if (iVar1 != 0) {
      uStack_28 = FUN_71ba0b38(uVar6,0xbf800000);
      uStack_2c = FUN_71ba0b38(uVar2,0x3f800000);
      uStack_30 = FUN_71ba0b38(uVar6,0x3f800000);
      uStack_34 = FUN_71ba0b38(uVar2,0xbf800000);
      FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
      FUN_7135af7c(&uStack_34,auStack_38);
    }
    uVar7 = FUN_71ba1b94(uVar7);
    uVar7 = FUN_71ba13e0(uVar7,0x43e00000);
    uVar7 = FUN_71ba21e8(uVar7,0x42800000);
    uVar7 = FUN_71ba21e8(uVar7,uVar8);
    uVar3 = FUN_71ba21e8(uVar7,0x3f000000);
    uVar6 = FUN_71ba0b38(uVar3,uVar6);
    uVar6 = FUN_71ba240c(uVar6,uVar7);
    uStack_28 = uVar6;
    uVar2 = FUN_71ba0b38(uVar3,uVar2);
    uVar2 = FUN_71ba240c(uVar2,uVar7);
    uVar4 = FUN_71ba0b38(uVar3,uVar2);
    uStack_2c = uVar4;
    uVar3 = FUN_71ba0b38(uVar3,uVar6);
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
    iVar1 = DAT_70b8896c + 4;
    FUN_7135ab38(iVar1,&uStack_34,auStack_38);
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    uStack_28 = uVar6;
    uVar5 = FUN_71ba0b38(uVar7,uVar2);
    uStack_34 = uVar5;
    FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
    FUN_7135ab38(iVar1,&uStack_34,auStack_38);
    uVar6 = FUN_71ba0b38(uVar7,uVar6);
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    uStack_28 = uVar6;
    FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
    FUN_7135ab38(iVar1,&uStack_34,auStack_38);
    uStack_34 = uVar5;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    uStack_28 = uVar6;
    FUN_71358efc(auStack_38,0xff,0xff,0xff,0xff);
    FUN_7135ab38(iVar1,&uStack_34,auStack_38);
  }
  else {
    uVar8 = 0x3e4ccccd;
  }
  return uVar8;
}


// =========================================================================
// Function: FUN_716bd9f4
// Entry: 0x716bd9f4 | Size: 60 bytes
// =========================================================================

undefined4 FUN_716bd9f4(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + param_2 * 4);
  }
  FUN_7151c9e4(s_No_materials_700612f0);
  return *(undefined4 *)(*param_1 + param_2 * 4);
}


// =========================================================================
// Function: FUN_716bda84
// Entry: 0x716bda84 | Size: 1336 bytes
// =========================================================================

void FUN_716bda84(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_716bd9f4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8110 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba6ec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8114 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ba784;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ba88c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8118 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716baa1c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c811c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716baba0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bac10;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8120 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bacfc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8124 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bafc4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bb7d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bba50;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8128 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bb238;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c812c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bcd24;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bcca0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bbc34;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716bbbec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bcec8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8108 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba374;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c810c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba530;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8100 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba090;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8104 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ba170;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8130 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716bd930;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713d4414;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716be548
// Entry: 0x716be548 | Size: 112 bytes
// =========================================================================

void FUN_716be548(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uStack_1c;
  
  uVar2 = *param_1;
  pcVar3 = (code *)param_1[1];
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_717db1d0(DAT_71201808);
    uStack_1c = 0xff;
    uVar1 = imp_gettid();
    imp_syscall(0xf1,uVar1,4,&uStack_1c);
  }
  imp_free(param_1);
  (*pcVar3)(uVar2);
  return;
}


// =========================================================================
// Function: FUN_716be660
// Entry: 0x716be660 | Size: 40 bytes
// =========================================================================

int FUN_716be660(int param_1)

{
  (*DAT_700c8154)();
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  return param_1;
}


// =========================================================================
// Function: FUN_716be6c0
// Entry: 0x716be6c0 | Size: 72 bytes
// =========================================================================

void FUN_716be6c0(void)

{
  (*DAT_700c8158)();
  if (DAT_711f2fec != '\0') {
    return;
  }
  FUN_71732500();
  FUN_713efb10(0,0);
  FUN_713f329c();
  DAT_711f2fec = 1;
  return;
}


// =========================================================================
// Function: FUN_716be808
// Entry: 0x716be808 | Size: 96 bytes
// =========================================================================

void FUN_716be808(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_70b41f7c;
  uVar3 = *DAT_70b41f7c;
  DAT_700c8640 = param_2;
  iVar2 = (*DAT_700c815c)(param_1,param_2,0);
  if ((param_2 - 25000U < 0xff) && (iVar2 != 0)) {
    *puVar1 = uVar3;
  }
  DAT_700c8640 = 0xffffffff;
  return;
}


// =========================================================================
// Function: FUN_716be8e0
// Entry: 0x716be8e0 | Size: 84 bytes
// =========================================================================

void FUN_716be8e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = param_1 - 25000;
  uVar2 = uVar1;
  if (uVar1 < 0xff) {
    uVar2 = 0;
  }
  puVar3 = (uint *)(DAT_70b41f74 + param_1 * 0x14 + 0xc);
  uVar4 = *puVar3;
  DAT_700c863c = param_1;
  if (uVar1 < 0xff) {
    *puVar3 = uVar2;
  }
  (*DAT_700c8160)();
  *puVar3 = uVar4;
  return;
}


// =========================================================================
// Function: FUN_716bea04
// Entry: 0x716bea04 | Size: 1788 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716bea04(undefined4 param_1,int param_2)

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
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint unaff_lr;
  bool bVar18;
  undefined8 uVar19;
  undefined1 auStack_12c [256];
  int iStack_2c;
  
  iVar9 = DAT_70c39074;
  iStack_2c = _ext___stack_chk_guard;
  iVar17 = *(int *)(DAT_70c39074 + *(short *)(param_2 + 0x26) * 4);
  if (iVar17 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84cc);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84bc);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70084890;
      uVar5 = DAT_7008488c;
      uVar4 = DAT_70084888;
      uVar3 = DAT_70084884;
      *puVar10 = DAT_70084880;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700848a4;
      uVar5 = DAT_700848a0;
      uVar4 = DAT_7008489c;
      uVar3 = DAT_70084898;
      puVar10[5] = DAT_70084894;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_700848a8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd2b0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84cc);
      *puVar11 = 1;
    }
    iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84bc);
    if (*(char *)(iVar17 + 0x2a) != '\0') {
      uVar16 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar16 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar12 = (byte)(0xd1a3317d >> iVar14) |
                 (byte)(0x6bad4921 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar12 = (byte)(0x6bad4921 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar17 + uVar16) = *(byte *)(iVar17 + uVar16) ^ bVar12;
        bVar18 = 0xfffffffe < uVar16;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar16) <= uVar13;
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar17 + 0x2a) = 0;
    }
    FUN_7188543c(iVar17,DAT_70b2e804,unaff_lr - DAT_70b2e804,-(uint)(unaff_lr < DAT_70b2e804));
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84ec);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84dc);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_700848c0;
      uVar5 = DAT_700848bc;
      uVar4 = DAT_700848b8;
      uVar3 = DAT_700848b4;
      *puVar10 = DAT_700848b0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700848d4;
      uVar5 = DAT_700848d0;
      uVar4 = DAT_700848cc;
      uVar3 = DAT_700848c8;
      puVar10[5] = DAT_700848c4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd300,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84ec);
      *puVar11 = 1;
    }
    iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84dc);
    if (*(char *)(iVar17 + 0x28) != '\0') {
      uVar16 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar16 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar12 = (byte)(0x871fab4b >> iVar14) |
                 (byte)(0x57e3df4d << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar12 = (byte)(0x57e3df4d >> (uVar15 & 0xff));
        }
        *(byte *)(iVar17 + uVar16) = *(byte *)(iVar17 + uVar16) ^ bVar12;
        bVar18 = 0xfffffffe < uVar16;
        bVar1 = uVar13 == 0;
        bVar2 = (0x26 < uVar16) <= uVar13;
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar17 + 0x28) = 0;
    }
    FUN_7188543c(iVar17,(int)*(short *)(param_2 + 0x26));
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c850c);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84fc);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_700848e4;
      uVar4 = DAT_700848e0;
      uVar3 = DAT_700848dc;
      *puVar10 = DAT_700848d8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700848f4;
      uVar4 = DAT_700848f0;
      uVar3 = DAT_700848ec;
      puVar10[4] = DAT_700848e8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70084908;
      uVar5 = DAT_70084904;
      uVar4 = DAT_70084900;
      uVar3 = DAT_700848fc;
      puVar10[8] = DAT_700848f8;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd350,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c850c);
      *puVar11 = 1;
    }
    uVar19 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c84fc);
    uVar16 = (uint)((ulonglong)uVar19 >> 0x20);
    iVar17 = (int)uVar19;
    if (*(char *)(iVar17 + 0x34) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar14 = (uVar13 & 7) * 8;
        uVar16 = iVar14 - 0x20;
        bVar12 = (byte)(0xb581bdc1 >> iVar14) |
                 (byte)(0x2b156f81 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar12 = (byte)(0x2b156f81 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar17 + uVar13) = *(byte *)(iVar17 + uVar13) ^ bVar12;
        bVar18 = 0xfffffffe < uVar13;
        uVar16 = uVar13 + 1;
        bVar1 = uVar15 == 0;
        bVar2 = (0x32 < uVar13) <= uVar15;
        uVar13 = uVar16;
        uVar15 = uVar15 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar17 + 0x34) = 0;
    }
    FUN_716bfb78(auStack_12c,uVar16,iVar17,(int)*(short *)(param_2 + 0x26));
    FUN_7151c9e4(auStack_12c);
    iVar17 = *(int *)(iVar9 + *(short *)(param_2 + 0x26) * 4);
  }
  if (*(int *)(iVar17 + 0x2c) == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c852c);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c851c);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70084920;
      uVar5 = DAT_7008491c;
      uVar4 = DAT_70084918;
      uVar3 = DAT_70084914;
      *puVar10 = DAT_70084910;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70084934;
      uVar5 = DAT_70084930;
      uVar4 = DAT_7008492c;
      uVar3 = DAT_70084928;
      puVar10[5] = DAT_70084924;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70084938;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd3a0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c852c);
      *puVar11 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c851c);
    if (*(char *)(iVar9 + 0x2a) != '\0') {
      uVar16 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar16 & 7) * 8;
        bVar12 = (byte)(0x1f156fd1 >> iVar14) |
                 (byte)(0x51f57db5 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar12 = (byte)(0x51f57db5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar9 + uVar16) = *(byte *)(iVar9 + uVar16) ^ bVar12;
        bVar18 = 0xfffffffe < uVar16;
        bVar1 = uVar13 == 0;
        bVar2 = (0x28 < uVar16) <= uVar13;
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2a) = 0;
    }
    FUN_7188543c(iVar9,DAT_70b2e804,unaff_lr - DAT_70b2e804,-(uint)(unaff_lr < DAT_70b2e804));
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c854c);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c853c);
      *(undefined1 *)((int)puVar10 + 0x2b) = 1;
      uVar6 = DAT_70084950;
      uVar5 = DAT_7008494c;
      uVar4 = DAT_70084948;
      uVar3 = DAT_70084944;
      *puVar10 = DAT_70084940;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70084964;
      uVar5 = DAT_70084960;
      uVar4 = DAT_7008495c;
      uVar3 = DAT_70084958;
      puVar10[5] = DAT_70084954;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar7 = DAT_7008496a;
      *(undefined2 *)(puVar10 + 10) = DAT_70084968;
      *(undefined1 *)((int)puVar10 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd3f0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c854c);
      *puVar11 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c853c);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar16 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar16 & 7) * 8;
        bVar12 = (byte)(0x9b1301fb >> iVar14) |
                 (byte)(0x4fc10367 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar12 = (byte)(0x4fc10367 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar9 + uVar16) = *(byte *)(iVar9 + uVar16) ^ bVar12;
        bVar18 = 0xfffffffe < uVar16;
        bVar1 = uVar13 == 0;
        bVar2 = (0x29 < uVar16) <= uVar13;
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    FUN_7188543c(iVar9,(int)*(short *)(param_2 + 0x26),iVar17 + 8);
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c856c);
    if (*pcVar8 == '\0') {
      iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c855c);
      *(undefined1 *)(iVar9 + 0x42) = 1;
      imp___aeabi_memcpy8(iVar9,&DAT_70084970,0x42);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd440,iVar9,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c856c);
      *puVar11 = 1;
    }
    uVar19 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c855c);
    uVar16 = (uint)((ulonglong)uVar19 >> 0x20);
    iVar9 = (int)uVar19;
    if (*(char *)(iVar9 + 0x42) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar14 = (uVar13 & 7) * 8;
        uVar16 = iVar14 - 0x20;
        bVar12 = (byte)(0x1d77ffa1 >> iVar14) |
                 (byte)(0x5161b16f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar12 = (byte)(0x5161b16f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar12;
        bVar18 = 0xfffffffe < uVar13;
        uVar16 = uVar13 + 1;
        bVar1 = uVar15 == 0;
        bVar2 = (0x40 < uVar13) <= uVar15;
        uVar13 = uVar16;
        uVar15 = uVar15 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x42) = 0;
    }
    FUN_716bfb78(auStack_12c,uVar16,iVar9,(int)*(short *)(param_2 + 0x26),iVar17 + 8);
    FUN_7151c9e4(auStack_12c);
  }
  (*DAT_700c8168)(param_1,param_2);
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_716bfb78
// Entry: 0x716bfb78 | Size: 68 bytes
// =========================================================================

void FUN_716bfb78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x100,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_716bfc04
// Entry: 0x716bfc04 | Size: 296 bytes
// =========================================================================

undefined4 FUN_716bfc04(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint unaff_lr;
  bool bVar15;
  
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c858c);
  if (*pcVar6 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c857c);
    *(undefined1 *)((int)puVar8 + 0x22) = 1;
    uVar5 = DAT_700849c4;
    uVar4 = DAT_700849c0;
    uVar3 = DAT_700849bc;
    *puVar8 = DAT_700849b8;
    puVar8[1] = uVar3;
    puVar8[2] = uVar4;
    puVar8[3] = uVar5;
    uVar5 = DAT_700849d4;
    uVar4 = DAT_700849d0;
    uVar3 = DAT_700849cc;
    puVar8[4] = DAT_700849c8;
    puVar8[5] = uVar3;
    puVar8[6] = uVar4;
    puVar8[7] = uVar5;
    *(undefined2 *)(puVar8 + 8) = DAT_700849d8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd490,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c858c);
    *puVar9 = 1;
  }
  iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c857c);
  if (*(char *)(iVar7 + 0x22) != '\0') {
    uVar11 = 0;
    uVar12 = 0;
    do {
      iVar13 = (uVar11 & 7) * 8;
      uVar14 = iVar13 - 0x20;
      bVar10 = (byte)(0x69038921 >> iVar13) |
               (byte)(0x31f9cd89 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar14) {
        bVar10 = (byte)(0x31f9cd89 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar10;
      bVar15 = 0xfffffffe < uVar11;
      bVar1 = uVar12 == 0;
      bVar2 = (0x20 < uVar11) <= uVar12;
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + bVar15;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x22) = 0;
  }
  FUN_7188543c(iVar7,DAT_70b2e804,unaff_lr - DAT_70b2e804,-(uint)(unaff_lr < DAT_70b2e804));
  return 0;
}


// =========================================================================
// Function: FUN_716bff0c
// Entry: 0x716bff0c | Size: 37468 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x716c3f68) */
/* WARNING: Removing unreachable block (ram,0x716c33f0) */
/* WARNING: Removing unreachable block (ram,0x716c2878) */
/* WARNING: Removing unreachable block (ram,0x716c11ac) */
/* WARNING: Removing unreachable block (ram,0x716c4af0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716bff0c(undefined4 param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint *puVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  bool bVar50;
  uint auStack_b0 [2];
  uint *puStack_a8;
  uint uStack_a4;
  uint *apuStack_a0 [2];
  int iStack_98;
  uint *puStack_94;
  uint *puStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  byte bStack_51;
  uint auStack_50 [2];
  uint auStack_48 [6];
  uint uStack_30;
  int iStack_28;
  
  puVar40 = auStack_b0;
  iStack_28 = _ext___stack_chk_guard;
  auStack_b0[1] = param_1;
  pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85ac);
  if (*pcVar11 == '\0') {
    puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c859c);
    *puVar17 = 0x10d352f;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd4e0,puVar17,&DAT_70b0e000);
    puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85ac);
    *puVar18 = 1;
  }
  pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c859c);
  if (pbVar12[3] != 0) {
    pbVar12[3] = 0;
    *pbVar12 = *pbVar12 ^ 0x5d;
    pbVar12[1] = pbVar12[1] ^ 0x57;
    pbVar12[2] = pbVar12[2] ^ 0xd;
  }
  iVar13 = FUN_71339d5c(auStack_b0[1]);
  if (iVar13 == 0) {
    iVar13 = 4;
  }
  else {
    pcVar11 = (char *)thunk_MwhHq(0x10000);
    imp___aeabi_memclr(pcVar11,0x10000);
    uVar14 = FUN_714c8774(iVar13);
    if ((int)uVar14 < 1) {
      iVar38 = 0;
      iVar48 = 0;
    }
    else {
      iVar48 = 0;
      iVar38 = 0;
      do {
        uVar39 = 0x10000;
        if (uVar14 < 0x10000) {
          uVar39 = uVar14;
        }
        FUN_714c5410(iVar13,pcVar11,uVar39);
        iVar15 = 0;
        uVar19 = uVar39;
        pcVar23 = pcVar11;
        do {
          if (*pcVar23 == '\n') {
            iVar15 = iVar15 + 1;
          }
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar23 + 1;
        } while (uVar19 != 0);
        iVar20 = 0;
        uVar19 = uVar39;
        pcVar23 = pcVar11;
        do {
          if (*pcVar23 == '\r') {
            iVar20 = iVar20 + 1;
          }
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar23 + 1;
        } while (uVar19 != 0);
        uVar14 = uVar14 - uVar39;
        iVar48 = iVar15 + iVar48;
        iVar38 = iVar20 + iVar38;
      } while (0 < (int)uVar14);
    }
    FUN_7133a194(iVar13);
    thunk_qNQrlu(pcVar11);
    if (iVar38 < iVar48) {
      iVar38 = iVar48;
    }
    iVar13 = (iVar38 + 1U) * 4;
    if (0x3ffffffe < iVar38 + 1U && iVar38 != 0x3ffffffe) {
      iVar13 = -1;
    }
  }
  puStack_58 = auStack_48;
  DAT_711f2fe8 = thunk__IBDl(iVar13);
  FUN_712f1b5c(&DAT_70b2e804,0);
  puVar16 = puStack_58;
  while( true ) {
    uVar14 = *puVar40 ^ 0x6a4dab1f;
    uVar39 = uVar14 | puVar40[1] ^ 0x679b29b;
    bVar50 = uVar39 == 0;
    if (bVar50) {
      uVar39 = puVar40[3] ^ 0xfcc126c8;
      uVar14 = puVar40[2] ^ 0x6efdd0cf;
    }
    if ((bVar50 && (uVar14 == 0 && uVar39 == 0)) &&
       (puVar40[4] == 0xbefc55d6 && puVar40[5] == 0x370f3a77)) break;
    puVar40 = puVar40 + 1;
  }
  puVar40[0xc020] = 0xffffffff;
  puStack_90 = puVar40 + 0xc020;
  puVar40[0xc021] = 0;
  puStack_94 = puVar40 + 0xc021;
  uStack_5c = DAT_7120187c;
  puStack_58[5] = 0x26d5d038;
  *puVar16 = 0x1ba;
  puVar16[1] = 0;
  puVar16[3] = 0;
  puVar35 = puVar16 + 4;
  *puVar35 = (uint)&LAB_49abac16;
  uStack_30 = 0x8a6dd8;
  puVar46 = puVar16 + 2;
  *puVar46 = 0x18a;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar35 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puVar16[3] &&
                      (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puVar16[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + uStack_5c != -1) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1ba;
    puStack_58[1] = 0;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x18b;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(0x8a6dd8 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6dd8;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + uStack_5c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1ba;
  puStack_58[1] = 0;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x18c;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^ (byte)(0x8a6dd8 >> (((int)(char)bStack_51 & 0x1fU) << 3))
    ;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6dd8;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_64 = auStack_50[0];
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1ba;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x189;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^ (byte)(0x8a6fd8 >> (((int)(char)bStack_51 & 0x1fU) << 3))
    ;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6fd8;
  bStack_51 = 0;
  uStack_70 = *puStack_58;
  uStack_68 = uStack_70 + 0xacacac;
  uStack_6c = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_70 + 0xacacac ^
                (uint)(0xc1ceb9f9 < uStack_6c &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_6c) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ uStack_70) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + uStack_5c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - uStack_5c) + 1;
  puStack_58[3] = 0;
  *puStack_58 = 0x1ba;
  puStack_58[1] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x18d;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^ (byte)(0x8a6dd8 >> (((int)(char)bStack_51 & 0x1fU) << 3))
    ;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6dd8;
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1ba;
    puStack_58[1] = 0;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x18e;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(0x8a6dd8 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6dd8;
    bStack_51 = 0;
    uStack_60 = *puStack_58 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_60 ^
                  (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64)
                  ^ (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1bb;
  puStack_58[1] = 0;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x191;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^ (byte)(0x8a6ddd >> (((int)(char)bStack_51 & 0x1fU) << 3))
    ;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6ddd;
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  uStack_64 = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1bb;
    puStack_58[1] = 0;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x192;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(0x8a6ddd >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6ddd;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1bb;
  puStack_58[1] = 0;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x193;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^ (byte)(0x8a6ddd >> (((int)(char)bStack_51 & 0x1fU) << 3))
    ;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6ddd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_64 = auStack_50[0];
  uStack_60 = DAT_711f2fe8;
  uStack_30 = 0x8a6fcb;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1bb;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 400;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  uStack_6c = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < uStack_6c && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_6c) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  *puStack_58 = 0x1bb;
  puStack_58[1] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6ddd;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x194;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1bb;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6ddd;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x195;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_60 = *puStack_58 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_60 ^
                  (0xc1ceb9f9 < uStack_64 && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64)
                  ^ (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b8;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dd2;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x198;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    *puStack_58 = 0x1b8;
    puStack_58[1] = 0;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    uStack_30 = 0x8a6dd2;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x199;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b8;
  puStack_58[1] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  uStack_30 = 0x8a6dd2;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x19a;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_64 = auStack_50[0];
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1b8;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  uStack_30 = 0x8a6d82;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x197;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  uStack_6c = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < uStack_6c && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_6c) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b8;
  puStack_58[1] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6dd2;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x19b;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b8;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dd2;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x19c;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_60 = *puStack_58 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_60 ^
                  (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64)
                  ^ (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b9;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dd7;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x19f;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  uStack_64 = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b9;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dd7;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1a0;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b9;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dd7;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1a1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_64 = auStack_50[0];
  uStack_60 = DAT_711f2fe8;
  uStack_30 = 0x8a6fc5;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b9;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x19e;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  uStack_6c = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < uStack_6c && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_6c) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b9;
  puStack_58[1] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6dd7;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1a2;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b9;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dd7;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1a3;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_60 = *puStack_58 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_60 ^
                  (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64)
                  ^ (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b6;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dc4;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1a6;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b6;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dc4;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1a7;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b6;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dc4;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1a8;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_64 = auStack_50[0];
  uStack_60 = DAT_711f2fe8;
  uStack_30 = 0x8a6fe2;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b6;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1a5;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  uStack_6c = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < uStack_6c && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_6c) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b6;
  puStack_58[1] = 0;
  uStack_5c = DAT_7120187c;
  uStack_30 = 0x8a6dc4;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1a9;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b6;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dc4;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1aa;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_60 = *puStack_58 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_60 ^
                  (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64)
                  ^ (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b7;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dcd;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1ad;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b7;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dcd;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1ae;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b7;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dcd;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1af;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_64 = auStack_50[0];
  uStack_60 = DAT_711f2fe8;
  uStack_30 = 0x8a6f0f;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b7;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1ac;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  uStack_6c = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < uStack_6c && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_6c) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b7;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dcd;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1b0;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    *puStack_58 = 0x1b7;
    puStack_58[3] = 0;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dcd;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1b1;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_68 = *puStack_58;
    uStack_60 = uStack_68 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_68 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_64 &&
                        (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                  (uStack_30 | *puVar46 + 0xccaaff ^ uStack_68) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  *puStack_58 = 0x1b4;
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dca;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1b4;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    *puStack_58 = 0x1b4;
    puStack_58[1] = 0;
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    uStack_30 = 0x8a6dca;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1b5;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  *puStack_58 = 0x1b4;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  uStack_30 = 0x8a6dca;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1b6;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uVar14 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar39 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_60 = DAT_711f2fe8;
  uStack_30 = 0x8a6f0a;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b4;
  puStack_58[1] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1b3;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  uStack_68 = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < uStack_68 && (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - uStack_68) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar14 ^ uVar39 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  *puStack_58 = 0x1b4;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6dca;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1b7;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b4;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dca;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1b8;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_68 = *puStack_58;
    uStack_60 = uStack_68 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_68 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_64 &&
                        (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                  (uStack_30 | *puVar46 + 0xccaaff ^ uStack_68) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b5;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6de3;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1bb;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b5;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6de3;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1bc;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b5;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6de3;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1bd;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uStack_64 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar14 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1b5;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  uStack_30 = 0x8a6c57;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1ba;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uStack_64 ^ uVar14 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  *puStack_58 = 0x1b5;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6de3;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1be;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b5;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6de3;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1bf;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_68 = *puStack_58;
    uStack_60 = uStack_68 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_68 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_64 &&
                        (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                  (uStack_30 | *puVar46 + 0xccaaff ^ uStack_68) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b2;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dec;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1c2;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b2;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dec;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1c3;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b2;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6dec;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1c4;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uStack_64 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar14 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1b2;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  uStack_30 = 0x8a6c46;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1c1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uStack_64 ^ uVar14 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  *puStack_58 = 0x1b2;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6dec;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1c5;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b2;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6dec;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1c6;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_68 = *puStack_58;
    uStack_60 = uStack_68 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_68 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_64 &&
                        (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                  (uStack_30 | *puVar46 + 0xccaaff ^ uStack_68) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b3;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d1d;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1c9;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  uStack_64 = puStack_58[3];
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < uStack_64 && (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b3;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6d1d;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1ca;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b3;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d1d;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1cb;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uStack_64 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar14 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1b3;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  uStack_30 = 0x8a734b;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1c8;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uStack_64 ^ uVar14 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b3;
  puStack_58[1] = 0;
  uStack_5c = DAT_7120187c;
  uStack_30 = 0x8a6d1d;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1cc;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b3;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6d1d;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1cd;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_68 = *puStack_58;
    uStack_60 = uStack_68 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_68 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_64 &&
                        (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                  (uStack_30 | *puVar46 + 0xccaaff ^ uStack_68) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b0;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d32;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1d0;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b0;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6d32;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1d1;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b0;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d32;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1d2;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uStack_64 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar14 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1b0;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  uStack_30 = 0x8a6c80;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1cf;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uStack_64 ^ uVar14 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  *puStack_58 = 0x1b0;
  puStack_58[1] = 0;
  puStack_58[3] = 0;
  uStack_5c = DAT_7120187c;
  uStack_60 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  uStack_30 = 0x8a6d32;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1d3;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_64 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_64 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (uStack_60 < DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b0;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6d32;
    puVar16 = puStack_58 + 4;
    *puVar16 = (uint)&LAB_49abac16;
    puVar46 = puStack_58 + 2;
    *puVar46 = 0x1d4;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar46 + (char)*puVar16 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_68 = *puStack_58;
    uStack_60 = uStack_68 + 0xacacac;
    uStack_64 = puStack_58[3];
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_68 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < uStack_64 &&
                        (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - uStack_64) ^
                  (uStack_30 | *puVar46 + 0xccaaff ^ uStack_68) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_94 = DAT_7120187c + 4 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
  }
  uVar14 = *puStack_90;
  puStack_58[3] = 0;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b1;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d37;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1d7;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c < uVar14) {
    puStack_58[5] = 0x26d5d038;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puStack_58[3] = 0;
    *puStack_58 = 0x1b1;
    puStack_58[1] = 0;
    uStack_30 = 0x8a6d37;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1d8;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = *puStack_58 + 0xacacac ^
                  (uint)(0xc1ceb9f9 < puStack_58[3] &&
                        (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    *puStack_90 = (auStack_50[0] ^ *puStack_58 ^ 0xccff22) + DAT_7120187c;
  }
  puStack_58[5] = 0x26d5d038;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  puStack_58[3] = 0;
  *puStack_58 = 0x1b1;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d37;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1d9;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = *puStack_58 + 0xacacac ^
                (uint)(0xc1ceb9f9 < puStack_58[3] &&
                      (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    uStack_64 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar14 = *puStack_58;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_60 = DAT_711f2fe8;
  *puStack_58 = 0x1b1;
  puStack_58[1] = 0;
  puStack_58[5] = 0x26d5d038;
  puStack_58[3] = 0;
  puVar46 = puStack_58 + 4;
  *puVar46 = (uint)&LAB_49abac16;
  uStack_30 = 0x8a6c99;
  puVar16 = puStack_58 + 2;
  *puVar16 = 0x1d6;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar16 + (char)*puVar46 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_68 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_68 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uStack_64 ^ uVar14 ^ 0xccff22) + DAT_7120187c) =
       (auStack_50[0] ^ *puStack_58 ^ 0xff3300dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  puStack_58[3] = 0;
  uStack_5c = DAT_7120187c;
  uVar14 = *puStack_94;
  puStack_58[5] = 0x26d5d038;
  *puStack_58 = 0x1b1;
  puStack_58[1] = 0;
  uStack_30 = 0x8a6d37;
  puVar16 = puStack_58 + 4;
  *puVar16 = (uint)&LAB_49abac16;
  puVar46 = puStack_58 + 2;
  *puVar46 = 0x1da;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (char)*puVar46 + (char)*puVar16 ^
         (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uStack_60 = *puStack_58 + 0xacacac;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = uStack_60 ^
                (0xc1ceb9f9 < puStack_58[3] &&
                (uint)(*puVar46 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                (uStack_30 | *puVar46 + 0xccaaff ^ *puStack_58) >> 2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar46 + (char)*puVar16;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uVar39 = DAT_7120187c + 4;
  if (uVar14 < uVar39 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22)) {
    puStack_58[5] = 0x26d5d038;
    *puStack_58 = 0x1b1;
    puStack_58[1] = 0;
    puStack_58[3] = 0;
    uStack_30 = 0x8a6d37;
    puVar46 = puStack_58 + 4;
    *puVar46 = (uint)&LAB_49abac16;
    puVar16 = puStack_58 + 2;
    *puVar16 = 0x1db;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (char)*puVar16 + (char)*puVar46 ^
           (byte)(uStack_30 >> (((int)(char)bStack_51 & 0x1fU) << 3));
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    uStack_60 = *puStack_58 + 0xacacac;
    uStack_5c = uVar39;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = uStack_60 ^
                  (0xc1ceb9f9 < puStack_58[3] &&
                  (uint)(*puVar16 < 0xa46ec51) <= 0xc1ceb9fa - puStack_58[3]) ^
                  (uStack_30 | *puVar16 + 0xccaaff ^ *puStack_58) >> 2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ (char)*puVar16 + (char)*puVar46;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    uVar14 = uVar39 + (auStack_50[0] ^ *puStack_58 ^ 0xccff22);
    *puStack_94 = uVar14;
  }
  if ((*puStack_90 != 0xffffffff) && (*puStack_90 < uVar14)) {
    puVar40 = puVar40 + 0x800b;
    iVar13 = 0;
    apuStack_a0[0] = puVar40;
LAB_716c8ac0:
    puVar16 = puVar40 + iVar13 * 4;
    puVar46 = (uint *)*puVar16;
    uVar14 = puVar16[1];
    if ((*puStack_90 <= uVar14 + (int)puVar46) && (puVar46 <= (uint *)*puStack_94)) {
      apuStack_a0[1] = puVar16;
      iStack_98 = iVar13;
      if (uVar14 < 0x20) {
        iVar38 = 0x27d4eb7f;
        uVar39 = 0x56d677d6;
      }
      else {
        uStack_68 = 0x6854fb60;
        uStack_64 = 0x50;
        uStack_60 = 0x40801011;
        uVar43 = 0x60ea283e;
        uStack_5c = 0x61c8869e;
        uVar19 = 0xee40c5e7;
        uVar41 = 0xc2b2ae8d;
        iVar38 = 0;
        puStack_58 = (uint *)0xba94458a;
        uStack_a4 = uVar14;
        puStack_a8 = puVar46;
        puVar40 = puVar46;
        uVar39 = uVar14;
        do {
          uStack_70 = uVar19;
          uStack_6c = uVar43;
          lVar3 = (ulonglong)puVar40[6] * 0x27d4eb4f;
          uVar42 = (uint)lVar3;
          uVar44 = uVar42 + (int)puStack_58;
          uVar24 = puVar40[7] * 0x27d4eb4f +
                   puVar40[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_5c +
                   (uint)CARRY4(uVar42,(uint)puStack_58);
          uVar42 = uVar24 >> 1;
          uStack_7c = uVar44 * -0x80000000 | uVar42;
          puStack_58 = (uint *)((ulonglong)uStack_7c * 0x85ebca87);
          uVar44 = uVar44 >> 1;
          uStack_80 = uVar24 * -0x80000000 | uVar44;
          uStack_5c = uStack_80 * -0x7a143579 +
                      uStack_7c * -0x61c8864f + (int)((ulonglong)uStack_7c * 0x85ebca87 >> 0x20);
          lVar3 = (ulonglong)puVar40[4] * 0x27d4eb4f;
          uVar24 = (uint)lVar3;
          uVar45 = uVar24 + uStack_60;
          uVar25 = puVar40[5] * 0x27d4eb4f +
                   puVar40[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + uStack_64 +
                   (uint)CARRY4(uVar24,uStack_60);
          uVar24 = uVar25 >> 1;
          uStack_84 = uVar45 * -0x80000000 | uVar24;
          uStack_60 = (uint)((ulonglong)uStack_84 * 0x85ebca87);
          uVar45 = uVar45 >> 1;
          uStack_88 = uVar25 * -0x80000000 | uVar45;
          uStack_64 = uStack_88 * -0x7a143579 +
                      uStack_84 * -0x61c8864f + (int)((ulonglong)uStack_84 * 0x85ebca87 >> 0x20);
          puVar35 = puVar40 + 2;
          puVar1 = puVar40 + 3;
          uVar26 = *puVar40;
          puVar2 = puVar40 + 1;
          puVar40 = puVar40 + 8;
          uStack_78 = *puVar2;
          lVar3 = (ulonglong)*puVar35 * 0x27d4eb4f;
          uVar25 = (uint)lVar3;
          uVar47 = uVar25 + uStack_68;
          uVar41 = *puVar1 * 0x27d4eb4f + *puVar35 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
                   uVar41 + (uint)CARRY4(uVar25,uStack_68);
          uVar25 = uVar41 >> 1;
          uStack_74 = uVar47 * -0x80000000 | uVar25;
          uVar47 = uVar47 >> 1;
          uStack_8c = uVar41 * -0x80000000 | uVar47;
          uStack_68 = (uint)((ulonglong)uStack_74 * 0x85ebca87);
          uVar41 = uStack_8c * -0x7a143579 +
                   uStack_74 * -0x61c8864f + (int)((ulonglong)uStack_74 * 0x85ebca87 >> 0x20);
          lVar3 = (ulonglong)uVar26 * 0x27d4eb4f;
          uVar21 = (uint)lVar3;
          uVar22 = uVar21 + uVar19;
          uVar19 = *puVar2 * 0x27d4eb4f + uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
                   uVar43 + (uint)CARRY4(uVar21,uVar19);
          bVar50 = uVar39 < 0x20;
          uVar39 = uVar39 - 0x20;
          iVar38 = iVar38 - (uint)bVar50;
          uVar21 = uVar19 >> 1;
          uVar26 = uVar22 * -0x80000000 | uVar21;
          uVar22 = uVar22 >> 1;
          uVar49 = uVar19 * -0x80000000 | uVar22;
          uVar19 = (uint)((ulonglong)uVar26 * 0x85ebca87);
          uVar43 = uVar49 * -0x7a143579 +
                   uVar26 * -0x61c8864f + (int)((ulonglong)uVar26 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar39 < 0x20) <= (uint)-iVar38);
        uVar39 = uVar19 << 1 | uVar43 >> 0x1f;
        uVar36 = uStack_68 << 7 | uVar41 >> 0x19;
        uVar31 = uVar36 + uVar39;
        uVar37 = uStack_60 << 0xc | uStack_64 >> 0x14;
        uVar32 = uVar31 + uVar37;
        uStack_60 = (uVar41 * 0x80 | uStack_68 >> 0x19) + (uVar43 * 2 | uVar19 >> 0x1f) +
                    (uint)CARRY4(uVar36,uVar39) + (uStack_64 * 0x1000 | uStack_60 >> 0x14) +
                    (uint)CARRY4(uVar31,uVar37);
        uVar36 = (uint)((ulonglong)uVar26 * 0x80000000) |
                 uVar49 * 0xf796ca9 +
                 uVar26 * -0x210ca4ff + (int)((ulonglong)uVar26 * 0xf796ca9 >> 0x20) >> 1;
        uVar19 = (int)puStack_58 << 0x12 | uStack_5c >> 0xe;
        lVar3 = (ulonglong)uVar36 * 0x85ebca87;
        uVar41 = uVar32 + uVar19 ^ (uint)lVar3;
        lVar4 = (ulonglong)uVar41 * 0x85ebca87;
        uVar33 = (uint)lVar4;
        uVar34 = (uint)((ulonglong)uStack_74 * 0x80000000) |
                 uStack_8c * 0xf796ca9 +
                 uStack_74 * -0x210ca4ff + (int)((ulonglong)uStack_74 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar34 * 0x85ebca87;
        uVar43 = uVar33 + 0xc2b2ae63 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar43 * 0x85ebca87;
        uVar37 = (uint)lVar6;
        uVar27 = (uint)((ulonglong)uStack_84 * 0x80000000) |
                 uStack_88 * 0xf796ca9 +
                 uStack_84 * -0x210ca4ff + (int)((ulonglong)uStack_84 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar27 * 0x85ebca87;
        uVar49 = uVar37 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar49 * 0x85ebca87;
        uVar28 = (uint)lVar8;
        uVar29 = (uint)((ulonglong)uStack_7c * 0x80000000) |
                 uStack_80 * 0xf796ca9 +
                 uStack_7c * -0x210ca4ff + (int)((ulonglong)uStack_7c * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar29 * 0x85ebca87;
        uVar31 = uVar28 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar31 * 0x85ebca87;
        uVar30 = (uint)lVar10;
        uVar39 = uVar30 + 0xc2b2ae63;
        iVar38 = ((((uStack_60 + (uStack_5c * 0x40000 | (uint)puStack_58 >> 0xe) +
                     (uint)CARRY4(uVar32,uVar19) ^
                    (uVar22 * -0x80000000 +
                    uVar21 * -0x784349ac + (int)((ulonglong)uVar26 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                    -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar33) ^
                   (uVar47 * -0x80000000 +
                   uVar25 * -0x784349ac + (int)((ulonglong)uStack_74 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                   -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar37) ^
                  (uVar45 * -0x80000000 +
                  uVar24 * -0x784349ac + (int)((ulonglong)uStack_84 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                  -0x7a143579 + uVar49 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar28) ^
                 (uVar44 * -0x80000000 +
                 uVar42 * -0x784349ac + (int)((ulonglong)uStack_7c * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) * -0x7a143579
                 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar30);
      }
      uVar41 = uVar14 & 0x1f;
      uVar19 = iVar38 + (uint)CARRY4(uVar39,uVar14);
      puVar46 = (uint *)((int)puVar46 + (uVar14 & 0xffffffe0));
      uVar43 = 0;
      puStack_58 = (uint *)(uVar39 + uVar14);
      do {
        if (uVar43 == 0 && (7 < uVar41) <= uVar43) {
          if (uVar43 == 0 && (3 < uVar41) <= uVar43) {
            if (uVar41 == 0 && uVar43 == 0) goto LAB_716c8a58;
            lVar3 = (ulonglong)(uint)(byte)*puVar46 * 0x165667c5;
            uVar14 = (uint)lVar3 ^ (uint)puStack_58;
            uVar19 = (uint)(byte)*puVar46 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
            uVar39 = uVar14 << 0xb | uVar19 >> 0x15;
            lVar3 = (ulonglong)uVar39 * 0x85ebca87;
            iVar38 = 1;
            puStack_58 = (uint *)lVar3;
            uVar19 = (uVar19 << 0xb | uVar14 >> 0x15) * -0x7a143579 +
                     uVar39 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
            uVar44 = 0xffffffff;
          }
          else {
            lVar3 = (ulonglong)*puVar46 * 0x85ebca87;
            uVar14 = (uint)lVar3 ^ (uint)puStack_58;
            uVar19 = *puVar46 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
            uVar39 = uVar14 << 0x17 | uVar19 >> 9;
            lVar3 = (ulonglong)uVar39 * 0x27d4eb4f;
            uVar42 = (uint)lVar3;
            puStack_58 = (uint *)(uVar42 + 0x9e3779f9);
            iVar38 = 4;
            uVar19 = (uVar19 << 0x17 | uVar14 >> 9) * 0x27d4eb4f +
                     uVar39 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar42);
            uVar44 = 0xfffffffc;
          }
        }
        else {
          uVar39 = *puVar46;
          uStack_5c = uVar19;
          uVar14 = (uint)((ulonglong)uVar39 * 0x80000000) |
                   puVar46[1] * 0x27d4eb4f +
                   uVar39 * -0x3d4d51c3 + (int)((ulonglong)uVar39 * 0x27d4eb4f >> 0x20) >> 1;
          lVar3 = (ulonglong)uVar14 * 0x85ebca87;
          uVar19 = (puVar46[1] * -0x80000000 +
                   uVar39 * -0x6c158a59 + (int)((ulonglong)uVar39 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar14 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
          uVar14 = (uint)lVar3 ^ (uint)puStack_58;
          uVar44 = 0xfffffff8;
          uVar39 = uVar14 << 0x1b | uVar19 >> 5;
          lVar3 = (ulonglong)uVar39 * 0x85ebca87;
          uVar42 = (uint)lVar3;
          puStack_58 = (uint *)(uVar42 + 0xc2b2ae63);
          iVar38 = 8;
          uVar19 = (uVar19 << 0x1b | uVar14 >> 5) * -0x7a143579 +
                   uVar39 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar42);
        }
        bVar50 = CARRY4(uVar44,uVar41);
        uVar41 = uVar44 + uVar41;
        puVar46 = (uint *)((int)puVar46 + iVar38);
        uVar43 = (uVar43 - 1) + (uint)bVar50;
      } while( true );
    }
    goto LAB_716c8ab4;
  }
LAB_716c9114:
  FUN_712f1b5c(&DAT_70b2e804,1);
  (*DAT_700c8170)(auStack_b0[1]);
  if (DAT_711f2fe8 == 0) {
    if (_ext___stack_chk_guard == iStack_28) {
      return;
    }
  }
  else if (_ext___stack_chk_guard == iStack_28) {
    thunk_dGrRHE();
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
LAB_716c8a58:
  uVar14 = (uint)puStack_58 ^ uVar19 >> 1;
  lVar3 = (ulonglong)uVar14 * 0x27d4eb4f;
  uVar39 = (uint)lVar3;
  uVar14 = uVar19 * 0x27d4eb4f + uVar14 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
  uVar39 = (uVar39 >> 0x1d | uVar14 * 8) ^ uVar39;
  lVar3 = (ulonglong)uVar39 * 0x9e3779f9;
  uVar14 = (uVar14 ^ uVar14 >> 0x1d) * -0x61c88607 +
           uVar39 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20);
  puVar16[3] = uVar14;
  puVar16[2] = uVar14 ^ (uint)lVar3;
  puVar40 = apuStack_a0[0];
LAB_716c8ab4:
  iVar13 = iVar13 + 1;
  if (iVar13 == 0x1000) goto LAB_716c90fc;
  goto LAB_716c8ac0;
LAB_716c90fc:
  *puStack_94 = 0;
  *puStack_90 = 0xffffffff;
  goto LAB_716c9114;
}


// =========================================================================
// Function: FUN_716c983c
// Entry: 0x716c983c | Size: 976 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716c983c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  undefined1 auStack_12c [256];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85cc);
  if (*pcVar7 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85bc);
    *(undefined1 *)((int)puVar10 + 0x15) = 1;
    uVar4 = DAT_700849f0;
    uVar3 = DAT_700849ec;
    uVar2 = DAT_700849e8;
    uVar12 = DAT_700849e4;
    *puVar10 = DAT_700849e0;
    puVar10[1] = uVar12;
    puVar10[2] = uVar2;
    puVar10[3] = uVar3;
    puVar10[4] = uVar4;
    *(undefined1 *)(puVar10 + 5) = DAT_700849f4;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd508,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85cc);
    *puVar11 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85bc);
  if (*(char *)(iVar8 + 0x15) != '\0') {
    uVar9 = 0;
    uVar15 = 0;
    do {
      iVar13 = (uVar9 & 7) * 8;
      uVar14 = iVar13 - 0x20;
      bVar5 = (byte)(0xf12f5bbb >> iVar13) | (byte)(-0x3cfab4ed << ((uVar9 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar14) {
        bVar5 = (byte)(0xc3054b13 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar5;
      bVar18 = 0xfffffffe < uVar9;
      bVar6 = uVar15 == 0;
      bVar1 = (0x13 < uVar9) <= uVar15;
      uVar9 = uVar9 + 1;
      uVar15 = uVar15 + bVar18;
    } while (bVar6 && bVar1);
    *(undefined1 *)(iVar8 + 0x15) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_138);
  }
  if (uVar9 < 0xb) {
    uVar15 = (uint)&uStack_138 | 1;
    uStack_138 = CONCAT31(uStack_138._1_3_,(char)(uVar9 << 1));
    if (uVar9 == 0) goto LAB_716c9970;
  }
  else {
    uVar15 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_138 = (uVar9 | 7) + 2;
    uStack_134 = uVar9;
    uStack_130 = uVar15;
  }
  imp___aeabi_memmove(uVar15,iVar8,uVar9);
LAB_716c9970:
  *(undefined1 *)(uVar15 + uVar9) = 0;
  iVar8 = *DAT_711f2ff0;
  if (0 < iVar8) {
    iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85dc);
    bVar6 = false;
    iVar17 = 0;
    do {
      while( true ) {
        iVar16 = *(int *)(DAT_711f2fe8 + iVar17 * 4);
        if ((*(int *)(iVar16 + 0x34) != -1) && (iVar8 < *(int *)(iVar16 + 0x34))) break;
        iVar17 = iVar17 + 1;
        if (iVar8 <= iVar17) {
          if (!bVar6) goto LAB_716c9b4c;
          goto LAB_716c9b38;
        }
      }
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85ec);
      if (*pcVar7 == '\0') {
        puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85dc);
        *(undefined1 *)(puVar10 + 9) = 1;
        uVar3 = DAT_70084a04;
        uVar2 = DAT_70084a00;
        uVar12 = DAT_700849fc;
        *puVar10 = DAT_700849f8;
        puVar10[1] = uVar12;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        uVar4 = DAT_70084a18;
        uVar3 = DAT_70084a14;
        uVar2 = DAT_70084a10;
        uVar12 = DAT_70084a0c;
        puVar10[4] = DAT_70084a08;
        puVar10[5] = uVar12;
        puVar10[6] = uVar2;
        puVar10[7] = uVar3;
        puVar10[8] = uVar4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd540,puVar10,&DAT_70b0e000);
        puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85ec);
        *puVar11 = 1;
      }
      if (*(char *)(iVar13 + 0x24) != '\0') {
        uVar9 = 0;
        uVar15 = 0;
        do {
          iVar8 = (uVar9 & 7) * 8;
          uVar14 = iVar8 - 0x20;
          bVar5 = (byte)(0x49753109 >> iVar8) |
                  (byte)(-0x6c88b83d << ((uVar9 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar14) {
            bVar5 = (byte)(0x937747c3 >> (uVar14 & 0xff));
          }
          *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar5;
          bVar18 = 0xfffffffe < uVar9;
          bVar6 = uVar15 == 0;
          bVar1 = (0x22 < uVar9) <= uVar15;
          uVar9 = uVar9 + 1;
          uVar15 = uVar15 + bVar18;
        } while (bVar6 && bVar1);
        *(undefined1 *)(iVar13 + 0x24) = 0;
      }
      FUN_716bfb78(auStack_12c,*(undefined4 *)(iVar16 + 0x34),iVar13,iVar17,
                   (int)*(short *)(iVar16 + 0x26),*(undefined4 *)(iVar16 + 0x34));
      thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                (&uStack_138,auStack_12c);
      iVar17 = iVar17 + 1;
      iVar8 = *DAT_711f2ff0;
      bVar6 = true;
    } while (iVar17 < iVar8);
LAB_716c9b38:
    uVar9 = uStack_130;
    if ((uStack_138 & 1) == 0) {
      uVar9 = (uint)&uStack_138 | 1;
    }
    FUN_7151c9e4(uVar9);
  }
LAB_716c9b4c:
  uVar12 = (*DAT_700c8174)(param_1,param_2,param_3);
  if ((uStack_138 & 1) != 0) {
    thunk_qNQrlu(uStack_130);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(uVar12);
}


// =========================================================================
// Function: FUN_716ca0b8
// Entry: 0x716ca0b8 | Size: 176 bytes
// =========================================================================

void FUN_716ca0b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_712016fc != 0) {
                    /* WARNING: Could not recover jumptable at 0x716ca15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_700c8178)(param_1,param_2,param_3);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_716ca88c
// Entry: 0x716ca88c | Size: 164 bytes
// =========================================================================

undefined4 FUN_716ca88c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  uVar2 = (*DAT_700c817c)();
  iVar1 = DAT_70b2e880;
  if (*(int *)(DAT_70b2e880 + 0x30) != 0) {
    thunk_qNQrlu();
  }
  *(int *)(iVar1 + 8) = iVar1 + 0xc;
  *(int *)(iVar1 + 0x28) = iVar1 + 0x18;
  *(int *)(iVar1 + 0x10) = iVar1;
  uVar3 = thunk__IBDl(0x1c20);
  iVar7 = iVar1 + 0x24;
  *(undefined4 *)(iVar1 + 0x30) = uVar3;
  iVar4 = 600;
  uVar5 = 0x259;
  iVar6 = 0x1c1c;
  do {
    iVar9 = *(int *)(iVar1 + 0x30);
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 - 1;
    piVar8 = (int *)(iVar9 + iVar6);
    *piVar8 = iVar7;
    iVar6 = iVar6 + -0xc;
    *(int **)(iVar7 + 4) = piVar8 + -2;
    piVar8[-1] = iVar1 + 0x18;
    *(int **)(iVar1 + 0x20) = piVar8 + -2;
    iVar7 = iVar9 + iVar4 * 0xc;
  } while (1 < uVar5);
  return uVar2;
}


// =========================================================================
// Function: FUN_716caa18
// Entry: 0x716caa18 | Size: 824 bytes
// =========================================================================

void FUN_716caa18(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  (*DAT_700c8180)();
  FUN_714d8880();
  pcVar1 = DAT_70b88a74;
  if (*DAT_70b88a74 != '\0') {
    if (DAT_711f2ff4 == '\x01') {
      DAT_711f2ff4 = 0;
      FUN_71366564();
      iVar5 = DAT_70ffc974;
      iVar12 = *(int *)(DAT_70ffc974 + 4);
      iVar13 = *(int *)(DAT_70ffc974 + 8);
      uVar10 = iVar13 * iVar12;
      iVar2 = uVar10 * 4;
      if (0x3fffffff < uVar10) {
        iVar2 = -1;
      }
      uVar3 = thunk__IBDl(iVar2);
      FUN_713a8d78(0,0,iVar12,iVar13,0x1908,0x1401,uVar3);
      iVar2 = DAT_712017f8;
      DataMemoryBarrier(0xb);
      if (((DAT_711f3010 & 1) == 0) &&
         (iVar12 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f3010), iVar12 != 0)) {
        pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c860c);
        if (*pcVar6 == '\0') {
          puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85fc);
          *puVar8 = 0x46b6bde2;
          puVar8[1] = 0x4a853a64;
          puVar8[2] = 0x539abbdd;
          *(undefined1 *)((int)puVar8 + 0xe) = 1;
          *(undefined2 *)(puVar8 + 3) = 0x5f66;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_716dd590,puVar8,&DAT_70b0e000);
          puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c860c);
          *puVar9 = 1;
        }
        pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c85fc);
        if (pbVar7[0xe] != 0) {
          *pbVar7 = *pbVar7 ^ 0x8d;
          pbVar7[1] = pbVar7[1] ^ 0xd3;
          pbVar7[2] = pbVar7[2] ^ 0xf5;
          pbVar7[3] = pbVar7[3] ^ 0x27;
          pbVar7[0xe] = 0;
          pbVar7[4] = pbVar7[4] ^ 9;
          pbVar7[5] = pbVar7[5] ^ 0x5f;
          pbVar7[6] = pbVar7[6] ^ 0xf7;
          pbVar7[7] = pbVar7[7] ^ 0x2b;
          pbVar7[8] = pbVar7[8] ^ 0x8d;
          pbVar7[9] = pbVar7[9] ^ 0xd3;
          pbVar7[10] = pbVar7[10] ^ 0xf5;
          pbVar7[0xb] = pbVar7[0xb] ^ 0x27;
          pbVar7[0xc] = pbVar7[0xc] ^ 9;
          pbVar7[0xd] = pbVar7[0xd] ^ 0x5f;
        }
        DAT_711f300c = FUN_71885ba4(pbVar7,0);
        thunk_SixizuLbAnqfgRApsCY(&DAT_711f3010);
      }
      uVar11 = DAT_711f300c;
      imp___aeabi_memclr4(&iStack_54,0x30);
      uStack_58 = uVar11;
      uVar3 = FUN_713a05a0(&uStack_58,uVar3);
      uVar3 = FUN_713a0424(uVar3,*(undefined4 *)(iVar5 + 4));
      uVar3 = FUN_713a0424(uVar3,*(undefined4 *)(iVar5 + 8));
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar2 + 0x34);
      piVar4 = (int *)thunk_MwhHq(0x3c);
      *piVar4 = 0;
      piVar4[1] = 0;
      FUN_713a10f8(piVar4 + 2,uVar3);
      piVar4[1] = iVar2 + 0x38;
      iVar5 = *(int *)(iVar2 + 0x38);
      *piVar4 = iVar5;
      *(int **)(iVar5 + 4) = piVar4;
      *(int **)(iVar2 + 0x38) = piVar4;
      *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar2 + 0x34);
      if (iStack_3c != 0) {
        iStack_38 = iStack_3c;
        thunk_qNQrlu();
      }
      if (iStack_48 != 0) {
        iStack_44 = iStack_48;
        thunk_qNQrlu();
      }
      if (iStack_54 != 0) {
        iStack_50 = iStack_54;
        thunk_qNQrlu();
      }
      FUN_71366958();
      *pcVar1 = '\0';
      return;
    }
    DAT_711f2ff4 = '\x01';
  }
  return;
}


// =========================================================================
// Function: FUN_716cb208
// Entry: 0x716cb208 | Size: 500 bytes
// =========================================================================

int FUN_716cb208(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar1 = (*DAT_700c8184)();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_71ba2cf0(param_1[10],0x3f800000);
  if ((((iVar2 != 0) && (iVar2 = FUN_71ba2cf0(param_1[0xb],0x3f800000), iVar2 != 0)) &&
      (iVar2 = FUN_71ba2cf0(param_1[0xc],0x3f800000), iVar2 != 0)) &&
     ((*(byte *)((int)param_1 + 0x21) & 0x20) == 0)) goto LAB_716cb394;
  if (*(int *)(iVar1 + 0x14) == 0) {
    FUN_713c4a74(iVar1);
  }
  uVar3 = param_1[8];
  uVar5 = param_1[3];
  if (((uVar3 & 0x2000) == 0) && (iVar2 = FUN_71ba2d70(uVar5 & 0x7fffffff,0x3d4ccccd), iVar2 == 0))
  {
    uVar7 = param_1[4];
    iVar2 = FUN_71ba2d70(uVar7 & 0x7fffffff,0x3d4ccccd);
    if ((iVar2 != 0) ||
       ((((uVar3 & 0x200) != 0 && (iVar2 = FUN_71ba2cf0(uVar5,0), iVar2 == 0)) &&
        (iVar2 = FUN_71ba2cf0(uVar7,0), iVar2 == 0)))) goto LAB_716cb308;
    uVar4 = param_1[6];
    iVar2 = FUN_71ba2d10(param_1[5],0);
    uVar6 = 0xc0000000;
    if (iVar2 != 0) {
      uVar6 = 0x40000000;
    }
    uVar4 = imp_acosf(uVar4);
    uVar4 = FUN_71ba21e8(uVar4,uVar6);
    FUN_713c4ee4(iVar1,uVar4);
  }
  else {
LAB_716cb308:
    uStack_30 = uVar5 ^ 0x80000000;
    uStack_2c = param_1[4] ^ 0x80000000;
    uStack_28 = param_1[5] ^ 0x80000000;
    uStack_34 = param_1[6];
    param_1[3] = uStack_30;
    param_1[4] = uStack_2c;
    param_1[5] = uStack_28;
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar2 == 0) {
      FUN_713c4654(iVar1);
      FUN_713c5c74(iVar1 + 4,*(undefined4 *)(iVar1 + 0x14));
      iVar2 = *(int *)(iVar1 + 0x14);
    }
    FUN_7134106c(iVar2,&uStack_34);
  }
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 != 0) {
    FUN_7136d124(iVar2,param_1[10]);
    FUN_7136d124(iVar2 + 0x10,param_1[0xb]);
    FUN_7136d124(iVar2 + 0x20,param_1[0xc]);
  }
LAB_716cb394:
  uStack_34 = *param_1;
  uStack_30 = param_1[1];
  uStack_2c = param_1[2];
  iVar2 = *(int *)(iVar1 + 0x14) + 0x30;
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar2 = iVar1 + 4;
  }
  FUN_7136d040(iVar2,&uStack_34);
  return iVar1;
}


// =========================================================================
// Function: FUN_716cb728
// Entry: 0x716cb728 | Size: 216 bytes
// =========================================================================

void FUN_716cb728(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_71201734 == 0) {
    if ((DAT_711acb94 == 0 || param_1 == 0) || (*(char *)(DAT_711acb94 + 0x20) == '\0'))
    goto LAB_716cb7dc;
  }
  else if (param_1 == 0) goto LAB_716cb7dc;
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = FUN_7141ee6c();
    uVar3 = FUN_714542f0(iVar2 + 0x30,0,0);
    FUN_71ba21e8(uVar3,0x3f000000);
    FUN_7140d7e8();
    (*DAT_700c8190)(param_1);
    FUN_71453ee8();
    FUN_7140d3c4(*DAT_70ffc978);
    return;
  }
LAB_716cb7dc:
                    /* WARNING: Could not recover jumptable at 0x716cb7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8190)(param_1);
  return;
}


// =========================================================================
// Function: FUN_716cb998
// Entry: 0x716cb998 | Size: 164 bytes
// =========================================================================

void FUN_716cb998(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_7130c3e4();
  bVar1 = 1;
  if (*(int *)(param_2 + 0x464) != 0) {
    bVar1 = FUN_713b9fcc();
    bVar1 = bVar1 ^ 1;
  }
  bVar1 = iVar2 == param_2 & bVar1;
  DAT_711f2ff5 = 1;
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0xa6) == '\0') {
      FUN_7131ebec(param_1);
    }
  }
  else if (*(char *)(param_1 + 0xa6) != '\0') {
    FUN_7131f008(param_1);
  }
  *(byte *)(param_1 + 0xa6) = bVar1;
  DAT_711f2ff5 = 0;
                    /* WARNING: Could not recover jumptable at 0x716cba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8194)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_716cbd3c
// Entry: 0x716cbd3c | Size: 224 bytes
// =========================================================================

void FUN_716cbd3c(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar1 = DAT_711f2ffc;
  if (DAT_711f2ff8 == 0 || DAT_711f2ffc == 0) {
    if (DAT_711f2ffc == 0) {
      return;
    }
  }
  else {
    bVar6 = *(char *)(DAT_711f2ff8 + 0xa6) != '\0';
    iVar3 = 0;
    if (bVar6) {
      iVar3 = *(int *)(DAT_711f2ffc + 0x10);
    }
    if (bVar6 && iVar3 != 0) {
      uVar5 = *(undefined4 *)(iVar3 + 0x4a0);
      iVar4 = FUN_71ba2d10(uVar5,0);
      if (iVar4 != 0) {
        uVar5 = 0;
      }
      iVar4 = FUN_71ba2d70(uVar5,0x3f800000);
      if (iVar4 != 0) {
        uVar5 = 0x3f800000;
      }
      FUN_71ba21e8(uVar5,0x437f0000);
      uVar2 = imp_lroundf();
      *(undefined2 *)(iVar1 + 0x20) = uVar2;
      uVar5 = *(undefined4 *)(iVar3 + 0x4a4);
      iVar3 = FUN_71ba2d10(uVar5,0);
      if (iVar3 != 0) {
        uVar5 = 0;
      }
      iVar3 = FUN_71ba2d70(uVar5,0x3f800000);
      if (iVar3 != 0) {
        uVar5 = 0x3f800000;
      }
      FUN_71ba21e8(uVar5,0x437f0000);
      uVar2 = imp_lroundf();
      *(undefined2 *)(iVar1 + 0x22) = uVar2;
      return;
    }
  }
  *(undefined2 *)(DAT_711f2ffc + 0x20) = 0;
  return;
}


// =========================================================================
// Function: FUN_716cbf54
// Entry: 0x716cbf54 | Size: 72 bytes
// =========================================================================

int FUN_716cbf54(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_714901f0();
  if ((param_2 & 3) == 0) {
    cVar1 = '\0';
  }
  else {
    if ((uVar2 & 3) == 0) {
      return param_1;
    }
    cVar1 = ((param_2 & 3) == (uVar2 & 3)) << 2;
  }
  *(char *)(param_1 + 2) = cVar1;
  return param_1;
}


// =========================================================================
// Function: FUN_716cbfd0
// Entry: 0x716cbfd0 | Size: 62972 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x716da990) */
/* WARNING: Removing unreachable block (ram,0x716d8378) */
/* WARNING: Removing unreachable block (ram,0x716d7800) */
/* WARNING: Removing unreachable block (ram,0x716d6c8c) */
/* WARNING: Removing unreachable block (ram,0x716d6118) */
/* WARNING: Removing unreachable block (ram,0x716d55a4) */
/* WARNING: Removing unreachable block (ram,0x716d4a30) */
/* WARNING: Removing unreachable block (ram,0x716d3ebc) */
/* WARNING: Removing unreachable block (ram,0x716d3348) */
/* WARNING: Removing unreachable block (ram,0x716d27d4) */
/* WARNING: Removing unreachable block (ram,0x716d1c60) */
/* WARNING: Removing unreachable block (ram,0x716d10ec) */
/* WARNING: Removing unreachable block (ram,0x716cfc14) */
/* WARNING: Removing unreachable block (ram,0x716cf6ac) */
/* WARNING: Removing unreachable block (ram,0x716cf0b4) */
/* WARNING: Removing unreachable block (ram,0x716ceb30) */
/* WARNING: Removing unreachable block (ram,0x716ce50c) */
/* WARNING: Removing unreachable block (ram,0x716cdd60) */
/* WARNING: Removing unreachable block (ram,0x716ccfc8) */
/* WARNING: Removing unreachable block (ram,0x716cc53c) */
/* WARNING: Removing unreachable block (ram,0x716dac1c) */
/* WARNING: Removing unreachable block (ram,0x716dab80) */
/* WARNING: Removing unreachable block (ram,0x716da770) */
/* WARNING: Removing unreachable block (ram,0x716da3c0) */
/* WARNING: Removing unreachable block (ram,0x716d9078) */
/* WARNING: Removing unreachable block (ram,0x716d8c7c) */
/* WARNING: Removing unreachable block (ram,0x716d88ec) */
/* WARNING: Removing unreachable block (ram,0x716d8520) */
/* WARNING: Removing unreachable block (ram,0x716d8104) */
/* WARNING: Removing unreachable block (ram,0x716d7d74) */
/* WARNING: Removing unreachable block (ram,0x716d79a8) */
/* WARNING: Removing unreachable block (ram,0x716d7590) */
/* WARNING: Removing unreachable block (ram,0x716d7200) */
/* WARNING: Removing unreachable block (ram,0x716d6e34) */
/* WARNING: Removing unreachable block (ram,0x716d6a1c) */
/* WARNING: Removing unreachable block (ram,0x716d668c) */
/* WARNING: Removing unreachable block (ram,0x716d62c0) */
/* WARNING: Removing unreachable block (ram,0x716d5ea8) */
/* WARNING: Removing unreachable block (ram,0x716d5b18) */
/* WARNING: Removing unreachable block (ram,0x716d574c) */
/* WARNING: Removing unreachable block (ram,0x716d5334) */
/* WARNING: Removing unreachable block (ram,0x716d4fa4) */
/* WARNING: Removing unreachable block (ram,0x716d4bd8) */
/* WARNING: Removing unreachable block (ram,0x716d47c0) */
/* WARNING: Removing unreachable block (ram,0x716d4430) */
/* WARNING: Removing unreachable block (ram,0x716d4064) */
/* WARNING: Removing unreachable block (ram,0x716d3c4c) */
/* WARNING: Removing unreachable block (ram,0x716d38bc) */
/* WARNING: Removing unreachable block (ram,0x716d34f0) */
/* WARNING: Removing unreachable block (ram,0x716d30d8) */
/* WARNING: Removing unreachable block (ram,0x716d2d48) */
/* WARNING: Removing unreachable block (ram,0x716d297c) */
/* WARNING: Removing unreachable block (ram,0x716d2564) */
/* WARNING: Removing unreachable block (ram,0x716d21d4) */
/* WARNING: Removing unreachable block (ram,0x716d1e08) */
/* WARNING: Removing unreachable block (ram,0x716d19f0) */
/* WARNING: Removing unreachable block (ram,0x716d1660) */
/* WARNING: Removing unreachable block (ram,0x716d1294) */
/* WARNING: Removing unreachable block (ram,0x716d0e80) */
/* WARNING: Removing unreachable block (ram,0x716d0af0) */
/* WARNING: Removing unreachable block (ram,0x716cffec) */
/* WARNING: Removing unreachable block (ram,0x716cfbd8) */
/* WARNING: Removing unreachable block (ram,0x716cf854) */
/* WARNING: Removing unreachable block (ram,0x716cf480) */
/* WARNING: Removing unreachable block (ram,0x716cf070) */
/* WARNING: Removing unreachable block (ram,0x716cecdc) */
/* WARNING: Removing unreachable block (ram,0x716ce8f8) */
/* WARNING: Removing unreachable block (ram,0x716ce4c0) */
/* WARNING: Removing unreachable block (ram,0x716ce118) */
/* WARNING: Removing unreachable block (ram,0x716cdd1c) */
/* WARNING: Removing unreachable block (ram,0x716cd924) */
/* WARNING: Removing unreachable block (ram,0x716cd57c) */
/* WARNING: Removing unreachable block (ram,0x716cd100) */
/* WARNING: Removing unreachable block (ram,0x716ccba4) */
/* WARNING: Removing unreachable block (ram,0x716cc76c) */
/* WARNING: Removing unreachable block (ram,0x716cc99c) */
/* WARNING: Removing unreachable block (ram,0x716cce18) */
/* WARNING: Removing unreachable block (ram,0x716cd344) */
/* WARNING: Removing unreachable block (ram,0x716cd754) */
/* WARNING: Removing unreachable block (ram,0x716cdb28) */
/* WARNING: Removing unreachable block (ram,0x716cdf2c) */
/* WARNING: Removing unreachable block (ram,0x716ce2f8) */
/* WARNING: Removing unreachable block (ram,0x716ce704) */
/* WARNING: Removing unreachable block (ram,0x716ceaec) */
/* WARNING: Removing unreachable block (ram,0x716ceeb0) */
/* WARNING: Removing unreachable block (ram,0x716cf2a0) */
/* WARNING: Removing unreachable block (ram,0x716cf670) */
/* WARNING: Removing unreachable block (ram,0x716cfa28) */
/* WARNING: Removing unreachable block (ram,0x716cfe04) */
/* WARNING: Removing unreachable block (ram,0x716d0924) */
/* WARNING: Removing unreachable block (ram,0x716d0cc8) */
/* WARNING: Removing unreachable block (ram,0x716d10a0) */
/* WARNING: Removing unreachable block (ram,0x716d1484) */
/* WARNING: Removing unreachable block (ram,0x716d1838) */
/* WARNING: Removing unreachable block (ram,0x716d1c10) */
/* WARNING: Removing unreachable block (ram,0x716d1ff8) */
/* WARNING: Removing unreachable block (ram,0x716d23ac) */
/* WARNING: Removing unreachable block (ram,0x716d2784) */
/* WARNING: Removing unreachable block (ram,0x716d2b6c) */
/* WARNING: Removing unreachable block (ram,0x716d2f20) */
/* WARNING: Removing unreachable block (ram,0x716d32f8) */
/* WARNING: Removing unreachable block (ram,0x716d36e0) */
/* WARNING: Removing unreachable block (ram,0x716d3a94) */
/* WARNING: Removing unreachable block (ram,0x716d3e6c) */
/* WARNING: Removing unreachable block (ram,0x716d4254) */
/* WARNING: Removing unreachable block (ram,0x716d4608) */
/* WARNING: Removing unreachable block (ram,0x716d49e0) */
/* WARNING: Removing unreachable block (ram,0x716d4dc8) */
/* WARNING: Removing unreachable block (ram,0x716d517c) */
/* WARNING: Removing unreachable block (ram,0x716d5554) */
/* WARNING: Removing unreachable block (ram,0x716d593c) */
/* WARNING: Removing unreachable block (ram,0x716d5cf0) */
/* WARNING: Removing unreachable block (ram,0x716d60c8) */
/* WARNING: Removing unreachable block (ram,0x716d64b0) */
/* WARNING: Removing unreachable block (ram,0x716d6864) */
/* WARNING: Removing unreachable block (ram,0x716d6c3c) */
/* WARNING: Removing unreachable block (ram,0x716d7024) */
/* WARNING: Removing unreachable block (ram,0x716d73d8) */
/* WARNING: Removing unreachable block (ram,0x716d77b0) */
/* WARNING: Removing unreachable block (ram,0x716d7b98) */
/* WARNING: Removing unreachable block (ram,0x716d7f4c) */
/* WARNING: Removing unreachable block (ram,0x716d8324) */
/* WARNING: Removing unreachable block (ram,0x716d8710) */
/* WARNING: Removing unreachable block (ram,0x716d8ac4) */
/* WARNING: Removing unreachable block (ram,0x716d8e98) */
/* WARNING: Removing unreachable block (ram,0x716da0bc) */
/* WARNING: Removing unreachable block (ram,0x716da594) */
/* WARNING: Removing unreachable block (ram,0x716da928) */
/* WARNING: Removing unreachable block (ram,0x716dadcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_716cbfd0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  bool bVar53;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  DAT_700c8184 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716cb208;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8168 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716bea04;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c816c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716bfbf0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be50c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be50c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be50c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be548;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8154 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be660;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8158 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be6c0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c815c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be808;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8160 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716be8e0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8164 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be9ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b8818;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716be7b4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f3000 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd25c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f3004 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd278;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f3008 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd294;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  imp___aeabi_memset(DAT_70b88a54,100,1);
  *DAT_70b88a58 = 100;
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x418;
  uStack_48 = 0x374;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x2e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcaa;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac63) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x2e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  uStack_40 = 0x496562e8;
  uStack_3c = 0x26d5d038;
  if ((auStack_50[0] ^ 0xccfc56) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x2f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4dcaa;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6c) >> 2 ^ 0xacb020;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x2f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc56) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x30;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcaa;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6d) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x30;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcbc >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x2d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcbc;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac62) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x2d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc56) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303a9) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x31;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4dcaa;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6e) >> 2 ^ 0xacb020;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x31;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc56))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4dcaa >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x32;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4dcaa;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6f) >> 2 ^ 0xacb020;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x32;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc56));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6b) >> 2 ^ 0xacb021;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc57) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x36;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4ed6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6a) >> 2 ^ 0xacb021;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x36;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc57) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x37;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac55) >> 2 ^ 0xacb021;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x37;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed65 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed65;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac68) >> 2 ^ 0xacb021;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc57) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303a8) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4ed6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac54) >> 2 ^ 0xacb021;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc57))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4ed6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x39;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4ed6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac57) >> 2 ^ 0xacb021;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x39;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc57));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4eca0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac57) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc50) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4eca0;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac54) >> 2 ^ 0xacb01e;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc50) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4eca0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac55) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3e;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f10a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f10a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac56) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc50) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303af) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4eca0;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5a) >> 2 ^ 0xacb01e;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc50))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4eca0 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x40;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4eca0;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5b) >> 2 ^ 0xacb01e;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x40;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc50));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f0b9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5f) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x43;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc51) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x44;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4f0b9;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5e) >> 2 ^ 0xacb01f;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x44;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc51) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x45;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f0b9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5d) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x45;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f631 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f631;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac58) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc51) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303ae) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f0b9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5c) >> 2 ^ 0xacb01f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x46;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc51))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4f0b9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x47;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4f0b9;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac43) >> 2 ^ 0xacb01f;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x47;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc51));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4fa02;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac43) >> 2 ^ 0xacb01c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc52) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4fa02;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac44) >> 2 ^ 0xacb01c;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc52) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4fa02;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac45) >> 2 ^ 0xacb01c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4c;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4f9ba >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x49;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4f9ba;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac42) >> 2 ^ 0xacb01c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x49;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc52) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff3303ad) - DAT_7120187c) + 0x711f2e59;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xe4fa02;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac46) >> 2 ^ 0xacb01c;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc52))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0xe4fa02 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x4e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0xe4fa02;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac47) >> 2 ^ 0xacb01c;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x4e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc52));
  }
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar19 = 0;
    puVar13 = DAT_70135cd4;
LAB_716d01cc:
    puVar44 = (uint *)(&DAT_70125c7c)[iVar19 * 4];
    uVar35 = (&DAT_70125c80)[iVar19 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar35 + (int)puVar44)) && (puVar44 <= puVar13)) {
      uVar14 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (0x1f < uVar35) {
        uStack_58 = 0x61c8869e;
        uStack_5c = 0x40801011;
        uStack_60 = 0x50;
        iVar20 = 0;
        uStack_64 = 0x6854fb60;
        uVar52 = 0xba94458a;
        uVar48 = 0xee40c5e7;
        uVar51 = 0x60ea283e;
        uStack_68 = 0xc2b2ae8d;
        uVar14 = uVar35;
        puVar13 = puVar44;
        do {
          lVar5 = (ulonglong)puVar13[6] * 0x27d4eb4f;
          uVar40 = (uint)lVar5;
          uVar41 = uVar40 + uVar52;
          uVar52 = puVar13[7] * 0x27d4eb4f +
                   puVar13[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_58 +
                   (uint)CARRY4(uVar40,uVar52);
          uVar40 = uVar52 >> 1;
          uVar21 = uVar41 * -0x80000000 | uVar40;
          uVar41 = uVar41 >> 1;
          uVar15 = uVar52 * -0x80000000 | uVar41;
          uVar52 = (uint)((ulonglong)uVar21 * 0x85ebca87);
          uStack_58 = uVar15 * -0x7a143579 +
                      uVar21 * -0x61c8864f + (int)((ulonglong)uVar21 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar13[4] * 0x27d4eb4f;
          uVar42 = (uint)lVar5;
          uVar39 = uVar42 + uStack_5c;
          uVar16 = puVar13[5] * 0x27d4eb4f +
                   puVar13[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar42,uStack_5c);
          uVar42 = uVar16 >> 1;
          uVar22 = uVar39 * -0x80000000 | uVar42;
          uVar39 = uVar39 >> 1;
          uVar17 = uVar16 * -0x80000000 | uVar39;
          puVar2 = puVar13 + 2;
          uStack_5c = (uint)((ulonglong)uVar22 * 0x85ebca87);
          lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar16 = (uint)lVar5;
          puVar3 = puVar13 + 3;
          uStack_60 = uVar17 * -0x7a143579 +
                      uVar22 * -0x61c8864f + (int)((ulonglong)uVar22 * 0x85ebca87 >> 0x20);
          puVar4 = puVar13 + 1;
          uVar23 = uVar16 + uStack_64;
          uVar18 = *puVar13;
          puVar13 = puVar13 + 8;
          uVar36 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uStack_68 + (uint)CARRY4(uVar16,uStack_64);
          uVar16 = uVar36 >> 1;
          uVar49 = uVar23 * -0x80000000 | uVar16;
          uStack_64 = (uint)((ulonglong)uVar49 * 0x85ebca87);
          uVar23 = uVar23 >> 1;
          uVar50 = uVar36 * -0x80000000 | uVar23;
          uStack_68 = uVar50 * -0x7a143579 +
                      uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar18 * 0x27d4eb4f;
          uVar24 = (uint)lVar5;
          uVar36 = uVar24 + uVar48;
          uVar51 = *puVar4 * 0x27d4eb4f + uVar18 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar51 + (uint)CARRY4(uVar24,uVar48);
          bVar53 = uVar14 < 0x20;
          uVar14 = uVar14 - 0x20;
          uVar18 = uVar51 >> 1;
          uVar24 = uVar36 * -0x80000000 | uVar18;
          iVar20 = iVar20 - (uint)bVar53;
          uVar48 = (uint)((ulonglong)uVar24 * 0x85ebca87);
          uVar36 = uVar36 >> 1;
          uVar43 = uVar51 * -0x80000000 | uVar36;
          uVar51 = uVar43 * -0x7a143579 +
                   uVar24 * -0x61c8864f + (int)((ulonglong)uVar24 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar14 < 0x20) <= (uint)-iVar20);
        uVar31 = uVar48 << 1 | uVar51 >> 0x1f;
        uVar45 = uStack_64 << 7 | uStack_68 >> 0x19;
        uVar32 = uVar45 + uVar31;
        uVar46 = uStack_5c << 0xc | uStack_60 >> 0x14;
        uVar33 = uVar32 + uVar46;
        uVar37 = uVar52 << 0x12 | uStack_58 >> 0xe;
        uVar25 = (uint)((ulonglong)uVar24 * 0x80000000) |
                 uVar43 * 0xf796ca9 +
                 uVar24 * -0x210ca4ff + (int)((ulonglong)uVar24 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar25 * 0x85ebca87;
        uVar34 = uVar33 + uVar37 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar34 * 0x85ebca87;
        uVar38 = (uint)lVar6;
        uVar50 = (uint)((ulonglong)uVar49 * 0x80000000) |
                 uVar50 * 0xf796ca9 +
                 uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar50 * 0x85ebca87;
        uVar43 = uVar38 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar43 * 0x85ebca87;
        uVar26 = (uint)lVar8;
        uVar27 = (uint)((ulonglong)uVar22 * 0x80000000) |
                 uVar17 * 0xf796ca9 +
                 uVar22 * -0x210ca4ff + (int)((ulonglong)uVar22 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar27 * 0x85ebca87;
        uVar17 = uVar26 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar17 * 0x85ebca87;
        uVar28 = (uint)lVar10;
        uVar29 = (uint)((ulonglong)uVar21 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar21 * -0x210ca4ff + (int)((ulonglong)uVar21 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar29 * 0x85ebca87;
        uVar15 = uVar28 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar15 * 0x85ebca87;
        uVar30 = (uint)lVar12;
        uVar14 = uVar30 + 0xc2b2ae63;
        iVar20 = (((((uStack_68 * 0x80 | uStack_64 >> 0x19) + (uVar51 * 2 | uVar48 >> 0x1f) +
                     (uint)CARRY4(uVar45,uVar31) + (uStack_60 * 0x1000 | uStack_5c >> 0x14) +
                     (uint)CARRY4(uVar32,uVar46) + (uStack_58 * 0x40000 | uVar52 >> 0xe) +
                     (uint)CARRY4(uVar33,uVar37) ^
                    (uVar36 * -0x80000000 +
                    uVar18 * -0x784349ac + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar38) ^
                   (uVar23 * -0x80000000 +
                   uVar16 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                  (uVar39 * -0x80000000 +
                  uVar42 * -0x784349ac + (int)((ulonglong)uVar22 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                 (uVar41 * -0x80000000 +
                 uVar40 * -0x784349ac + (int)((ulonglong)uVar21 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar30);
      }
      uVar52 = uVar14 + uVar35;
      uVar14 = iVar20 + (uint)CARRY4(uVar14,uVar35);
      puVar44 = (uint *)((int)puVar44 + (uVar35 & 0xffffffe0));
      uVar35 = uVar35 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar35) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar35) <= uVar48) {
            if (uVar35 == 0 && uVar48 == 0) goto LAB_716d014c;
            lVar5 = (ulonglong)(uint)(byte)*puVar44 * 0x165667c5;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = (uint)(byte)*puVar44 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar40 = uVar51 << 0xb | uVar14 >> 0x15;
            iVar20 = 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar52 = (uint)lVar5;
            uVar14 = (uVar14 << 0xb | uVar51 >> 0x15) * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar42 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar44 * 0x85ebca87;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = *puVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar41 = uVar51 << 0x17 | uVar14 >> 9;
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar40 = (uint)lVar5;
            uVar52 = uVar40 + 0x9e3779f9;
            uVar14 = (uVar14 << 0x17 | uVar51 >> 9) * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar40);
            uVar42 = 0xfffffffc;
            iVar20 = 4;
          }
        }
        else {
          uVar51 = *puVar44;
          uVar41 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar44[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar40 = (uint)lVar5 ^ uVar52;
          uVar14 = (puVar44[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
          uVar41 = uVar40 << 0x1b | uVar14 >> 5;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar51 = (uint)lVar5;
          uVar52 = uVar51 + 0xc2b2ae63;
          uVar42 = 0xfffffff8;
          uVar14 = (uVar14 << 0x1b | uVar40 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
          iVar20 = 8;
        }
        bVar53 = CARRY4(uVar42,uVar35);
        uVar35 = uVar42 + uVar35;
        puVar44 = (uint *)((int)puVar44 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_716d01bc;
  }
LAB_716d0828:
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x58;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac49) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x58;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ 0xccfc2a) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x59;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6a;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac4a) >> 2 ^ 0xacafb4;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x59;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc2a) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac4b) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5a;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x57;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac48) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x57;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc2a) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d5) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6a;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac4c) >> 2 ^ 0xacafb4;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2a))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6a >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6a;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac4d) >> 2 ^ 0xacafb4;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2a));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac41) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc2b) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x60;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac40) >> 2 ^ 0xacafb5;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x60;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc2b) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x61;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac43) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x61;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d79 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x5e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d79;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac4e) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x5e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc2b) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d4) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x62;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac42) >> 2 ^ 0xacafb5;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x62;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2b))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 99;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac45) >> 2 ^ 0xacafb5;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 99;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc2b));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x66;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac49) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x66;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc24) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x67;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac56) >> 2 ^ 0xacafb2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x67;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc24) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x68;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac57) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x68;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f3c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x65;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f3c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac48) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x65;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc24) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303db) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x69;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f6c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac54) >> 2 ^ 0xacafb2;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x69;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc24))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f6c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f6c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac55) >> 2 ^ 0xacafb2;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc24));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f69;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac51) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc25) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f69;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac50) >> 2 ^ 0xacafb3;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6e;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc25) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f69;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5f) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6f;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d7b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x6c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d7b;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac52) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x6c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc25) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303da) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x70;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f69;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5e) >> 2 ^ 0xacafb3;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x70;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc25))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f69 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x71;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f69;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5d) >> 2 ^ 0xacafb3;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x71;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc25));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x74;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f76;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac59) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x74;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc26) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x75;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f76;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac5a) >> 2 ^ 0xacafb0;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x75;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc26) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x76;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f76;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac5b) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x76;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6d50 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x73;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6d50;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac58) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x73;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc26) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d9) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x77;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f76;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac64) >> 2 ^ 0xacafb0;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x77;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc26))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f76 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x78;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f76;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac65) >> 2 ^ 0xacafb0;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x78;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc26));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac61) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc27) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac60) >> 2 ^ 0xacafb1;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7c;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc27) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac63) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7d;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6dbd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6dbd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac66) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc27) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303d8) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7f;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac62) >> 2 ^ 0xacafb1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc27))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7f >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x7f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7f;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6d) >> 2 ^ 0xacafb1;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x7f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc27));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x82;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac69) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x82;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc20) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x83;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6e) >> 2 ^ 0xacafae;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x83;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc20) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x84;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6f) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x84;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6dbc >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x81;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6dbc;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac68) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x81;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc20) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303df) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x85;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f7c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac6c) >> 2 ^ 0xacafae;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x85;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc20))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f7c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x86;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f7c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac6d) >> 2 ^ 0xacafae;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x86;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc20));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x89;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f55;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac71) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x89;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc21) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f55;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac70) >> 2 ^ 0xacafaf;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc21) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8b;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f55;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac77) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8b;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6ee1 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x88;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6ee1;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac72) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x88;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc21) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303de) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f55;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac76) >> 2 ^ 0xacafaf;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8c;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc21))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f55 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f55;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac75) >> 2 ^ 0xacafaf;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8d;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc21));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x90;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f5e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac79) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x90;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc22) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x91;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f5e;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac7a) >> 2 ^ 0xacafac;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x91;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc22) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x92;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f5e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac7b) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x92;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6ef4 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x8f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6ef4;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac78) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x8f;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc22) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303dd) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x93;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f5e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac7c) >> 2 ^ 0xacafac;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x93;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc22))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f5e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x94;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f5e;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac7d) >> 2 ^ 0xacafac;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x94;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc22));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x97;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6faf;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac81) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x97;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc23) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x98;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6faf;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac80) >> 2 ^ 0xacafad;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x98;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc23) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x99;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6faf;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac83) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x99;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a71f9 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x96;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a71f9;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac7e) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x96;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc23) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303dc) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6faf;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac82) >> 2 ^ 0xacafad;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9a;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc23))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6faf >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6faf;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac85) >> 2 ^ 0xacafad;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9b;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc23));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f9c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac99) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc3c) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f9c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac96) >> 2 ^ 0xacafca;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9f;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc3c) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa0;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f9c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac97) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa0;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6e2e >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x9d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6e2e;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac98) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x9d;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc3c) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303c3) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f9c;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac94) >> 2 ^ 0xacafca;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3c))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f9c >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa2;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f9c;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac95) >> 2 ^ 0xacafca;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa2;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3c));
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa5;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f99;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac91) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa5;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((uint *)((auStack_50[0] ^ 0xccfc3d) + DAT_7120187c) < DAT_70135cd0) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa6;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f99;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac90) >> 2 ^ 0xacafcb;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa6;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfc3d) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa7;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f99;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac8f) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa7;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6e37 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa4;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6e37;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac92) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa4;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfc3d) + DAT_7120187c) =
       (auStack_50[0] ^ 0xff3303c2) + (DAT_711f2fe8 - DAT_7120187c) + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa8;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x8a6f99;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccac8e) >> 2 ^ 0xacafcb;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa8;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3d))) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x8a6f99 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xa9;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x8a6f99;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccac8d) >> 2 ^ 0xacafcb;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xa9;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfc3d));
  }
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar19 = 0;
    puVar13 = DAT_70135cd4;
LAB_716d924c:
    puVar44 = (uint *)(&DAT_70125c7c)[iVar19 * 4];
    uVar35 = (&DAT_70125c80)[iVar19 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar35 + (int)puVar44)) && (puVar44 <= puVar13)) {
      uVar14 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (0x1f < uVar35) {
        uStack_58 = 0xba94458a;
        uStack_5c = 0x61c8869e;
        uStack_60 = 0x50;
        iVar20 = 0;
        uVar48 = 0x40801011;
        uVar52 = 0xc2b2ae8d;
        uVar51 = 0xee40c5e7;
        uVar40 = 0x60ea283e;
        uStack_64 = 0x6854fb60;
        puVar13 = puVar44;
        uVar14 = uVar35;
        do {
          lVar5 = (ulonglong)puVar13[6] * 0x27d4eb4f;
          uVar41 = (uint)lVar5;
          uVar42 = uVar41 + uStack_58;
          uVar39 = puVar13[7] * 0x27d4eb4f +
                   puVar13[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_5c +
                   (uint)CARRY4(uVar41,uStack_58);
          uVar41 = uVar39 >> 1;
          uVar43 = uVar42 * -0x80000000 | uVar41;
          uVar42 = uVar42 >> 1;
          uVar17 = uVar39 * -0x80000000 | uVar42;
          uStack_58 = (uint)((ulonglong)uVar43 * 0x85ebca87);
          uStack_5c = uVar17 * -0x7a143579 +
                      uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar13[4] * 0x27d4eb4f;
          uVar39 = (uint)lVar5;
          uVar16 = uVar39 + uVar48;
          puVar2 = puVar13 + 3;
          uVar23 = puVar13[5] * 0x27d4eb4f +
                   puVar13[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar39,uVar48);
          uVar39 = uVar23 >> 1;
          uVar24 = uVar16 * -0x80000000 | uVar39;
          uVar48 = (uint)((ulonglong)uVar24 * 0x85ebca87);
          uVar16 = uVar16 >> 1;
          uVar21 = uVar23 * -0x80000000 | uVar16;
          puVar3 = puVar13 + 2;
          uStack_60 = uVar21 * -0x7a143579 +
                      uVar24 * -0x61c8864f + (int)((ulonglong)uVar24 * 0x85ebca87 >> 0x20);
          uVar49 = *puVar13;
          puVar4 = puVar13 + 1;
          puVar13 = puVar13 + 8;
          lVar5 = (ulonglong)*puVar3 * 0x27d4eb4f;
          uVar23 = (uint)lVar5;
          uVar18 = uVar23 + uStack_64;
          uVar52 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar52 + (uint)CARRY4(uVar23,uStack_64);
          uVar23 = uVar52 >> 1;
          uVar50 = uVar18 * -0x80000000 | uVar23;
          uVar18 = uVar18 >> 1;
          uVar22 = uVar52 * -0x80000000 | uVar18;
          uStack_64 = (uint)((ulonglong)uVar50 * 0x85ebca87);
          uVar52 = uVar22 * -0x7a143579 +
                   uVar50 * -0x61c8864f + (int)((ulonglong)uVar50 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar49 * 0x27d4eb4f;
          uVar36 = (uint)lVar5;
          uVar15 = uVar36 + uVar51;
          uVar51 = *puVar4 * 0x27d4eb4f + uVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar40 + (uint)CARRY4(uVar36,uVar51);
          bVar53 = uVar14 < 0x20;
          uVar14 = uVar14 - 0x20;
          iVar20 = iVar20 - (uint)bVar53;
          uVar36 = uVar51 >> 1;
          uVar49 = uVar15 * -0x80000000 | uVar36;
          uVar15 = uVar15 >> 1;
          uVar25 = uVar51 * -0x80000000 | uVar15;
          uVar51 = (uint)((ulonglong)uVar49 * 0x85ebca87);
          uVar40 = uVar25 * -0x7a143579 +
                   uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar14 < 0x20) <= (uint)-iVar20);
        uVar33 = uVar51 << 1 | uVar40 >> 0x1f;
        uVar46 = uStack_64 << 7 | uVar52 >> 0x19;
        uVar34 = uVar46 + uVar33;
        uVar47 = uVar48 << 0xc | uStack_60 >> 0x14;
        uVar45 = uVar34 + uVar47;
        uVar37 = (uint)((ulonglong)uVar49 * 0x80000000) |
                 uVar25 * 0xf796ca9 +
                 uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar37 * 0x85ebca87;
        uVar25 = uStack_58 << 0x12 | uStack_5c >> 0xe;
        uVar26 = uVar45 + uVar25 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar26 * 0x85ebca87;
        uVar27 = (uint)lVar6;
        uVar38 = (uint)((ulonglong)uVar50 * 0x80000000) |
                 uVar22 * 0xf796ca9 +
                 uVar50 * -0x210ca4ff + (int)((ulonglong)uVar50 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar38 * 0x85ebca87;
        uVar22 = uVar27 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar22 * 0x85ebca87;
        uVar28 = (uint)lVar8;
        uVar29 = (uint)((ulonglong)uVar24 * 0x80000000) |
                 uVar21 * 0xf796ca9 +
                 uVar24 * -0x210ca4ff + (int)((ulonglong)uVar24 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar29 * 0x85ebca87;
        uVar21 = uVar28 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar21 * 0x85ebca87;
        uVar30 = (uint)lVar10;
        uVar31 = (uint)((ulonglong)uVar43 * 0x80000000) |
                 uVar17 * 0xf796ca9 +
                 uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar31 * 0x85ebca87;
        uVar17 = uVar30 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar17 * 0x85ebca87;
        uVar32 = (uint)lVar12;
        uVar14 = uVar32 + 0xc2b2ae63;
        iVar20 = (((((uVar52 * 0x80 | uStack_64 >> 0x19) + (uVar40 * 2 | uVar51 >> 0x1f) +
                     (uint)CARRY4(uVar46,uVar33) + (uStack_60 * 0x1000 | uVar48 >> 0x14) +
                     (uint)CARRY4(uVar34,uVar47) + (uStack_5c * 0x40000 | uStack_58 >> 0xe) +
                     (uint)CARRY4(uVar45,uVar25) ^
                    (uVar15 * -0x80000000 +
                    uVar36 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar27) ^
                   (uVar18 * -0x80000000 +
                   uVar23 * -0x784349ac + (int)((ulonglong)uVar50 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar22 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                  (uVar16 * -0x80000000 +
                  uVar39 * -0x784349ac + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar21 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar30) ^
                 (uVar42 * -0x80000000 +
                 uVar41 * -0x784349ac + (int)((ulonglong)uVar43 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar17 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar32);
      }
      uVar52 = uVar14 + uVar35;
      uVar14 = iVar20 + (uint)CARRY4(uVar14,uVar35);
      puVar44 = (uint *)((int)puVar44 + (uVar35 & 0xffffffe0));
      uVar35 = uVar35 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar35) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar35) <= uVar48) {
            if (uVar35 == 0 && uVar48 == 0) goto LAB_716d91b8;
            lVar5 = (ulonglong)(uint)(byte)*puVar44 * 0x165667c5;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = (uint)(byte)*puVar44 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar40 = uVar51 << 0xb | uVar14 >> 0x15;
            iVar20 = 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar52 = (uint)lVar5;
            uVar14 = (uVar14 << 0xb | uVar51 >> 0x15) * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar41 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar44 * 0x85ebca87;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = *puVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar41 = uVar51 << 0x17 | uVar14 >> 9;
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar40 = (uint)lVar5;
            uVar52 = uVar40 + 0x9e3779f9;
            uVar14 = (uVar14 << 0x17 | uVar51 >> 9) * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar40);
            uVar41 = 0xfffffffc;
            iVar20 = 4;
          }
        }
        else {
          uVar51 = *puVar44;
          uVar41 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar44[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar40 = (uint)lVar5 ^ uVar52;
          uVar14 = (puVar44[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
          uVar42 = uVar40 << 0x1b | uVar14 >> 5;
          lVar5 = (ulonglong)uVar42 * 0x85ebca87;
          uVar51 = (uint)lVar5;
          uVar52 = uVar51 + 0xc2b2ae63;
          uVar41 = 0xfffffff8;
          uVar14 = (uVar14 << 0x1b | uVar40 >> 5) * -0x7a143579 +
                   uVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
          iVar20 = 8;
        }
        bVar53 = CARRY4(uVar41,uVar35);
        uVar35 = uVar41 + uVar35;
        puVar44 = (uint *)((int)puVar44 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_716d9240;
  }
LAB_716d98dc:
  DAT_700c8170 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716bff0c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8174 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716c983c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7132f200;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7132191c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_71201884 = DAT_71201884 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8178 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca0b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca1f8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca228;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca258;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca288;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca2b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca2e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca318;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca348;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca37c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca3ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca3dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca40c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca43c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca46c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca49c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca4cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca4fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca52c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca55c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca58c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca5bc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca5ec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca61c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca64c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca67c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca6ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca6dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca70c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca73c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca76c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca79c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca7cc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca7fc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca82c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca85c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xa487dd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x26;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xa487dd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb48c) >> 2 ^ 0xacb12f;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x26;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccfba1) + DAT_7120187c) = &DAT_700c81a4;
  *DAT_7120188c = &LAB_716ca9c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ca9e8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8180 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716caa18;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c817c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ca88c;
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x36;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c57ff;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb48a) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x36;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if ((auStack_50[0] ^ 0xccfbb7) + DAT_7120187c != -1) {
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x37;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x9c57ff;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccb4b5) >> 2 ^ 0xacb141;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x37;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd0 = (uint *)((auStack_50[0] ^ 0xccfbb7) + DAT_7120187c);
  }
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x38;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c57ff;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb4b4) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x38;
    uVar35 = auStack_50[0];
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c50e5 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c50e5;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb48b) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x35;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(uint *)((uVar35 ^ 0xccfbb7) + DAT_7120187c) =
       ((auStack_50[0] ^ 0xff330448) - DAT_7120187c) + 0x70084869;
  uStack_40 = 0x523;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x39;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0x9c57ff;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccb4b7) >> 2 ^ 0xacb141;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x39;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  if (DAT_70135cd4 < (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfbb7))) {
    uStack_40 = 0x524;
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           (byte)(0x9c57ff >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    uStack_30 = 0x9c57ff;
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
      uStack_30 = (uStack_30 | 0xccb4b6) >> 2 ^ 0xacb141;
    } while (bStack_51 < 8);
    bStack_51 = 0;
    do {
      *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
           *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3a;
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 4);
    bStack_51 = 0;
    do {
      bStack_51 = bStack_51 + 1;
    } while (bStack_51 < 8);
    DAT_70135cd4 = (uint *)(DAT_7120187c + 4 + (auStack_50[0] ^ 0xccfbb7));
  }
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_48 = 0x495;
  if ((DAT_70135cd0 != (uint *)0xffffffff) && (DAT_70135cd0 < DAT_70135cd4)) {
    iVar19 = 0;
    puVar13 = DAT_70135cd4;
LAB_716dafe8:
    puVar44 = (uint *)(&DAT_70125c7c)[iVar19 * 4];
    uVar35 = (&DAT_70125c80)[iVar19 * 4];
    if ((DAT_70135cd0 <= (uint *)(uVar35 + (int)puVar44)) && (puVar44 <= puVar13)) {
      uVar14 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (0x1f < uVar35) {
        uStack_58 = 0x61c8869e;
        uStack_5c = 0x40801011;
        uStack_60 = 0x50;
        iVar20 = 0;
        uStack_64 = 0x6854fb60;
        uVar51 = 0xba94458a;
        uVar52 = 0xee40c5e7;
        uVar48 = 0x60ea283e;
        uStack_68 = 0xc2b2ae8d;
        puVar13 = puVar44;
        uVar14 = uVar35;
        do {
          lVar5 = (ulonglong)puVar13[6] * 0x27d4eb4f;
          uVar40 = (uint)lVar5;
          uVar41 = uVar40 + uVar51;
          uVar51 = puVar13[7] * 0x27d4eb4f +
                   puVar13[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_58 +
                   (uint)CARRY4(uVar40,uVar51);
          uVar40 = uVar51 >> 1;
          uVar49 = uVar41 * -0x80000000 | uVar40;
          uVar41 = uVar41 >> 1;
          uVar15 = uVar51 * -0x80000000 | uVar41;
          uVar51 = (uint)((ulonglong)uVar49 * 0x85ebca87);
          uStack_58 = uVar15 * -0x7a143579 +
                      uVar49 * -0x61c8864f + (int)((ulonglong)uVar49 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)puVar13[4] * 0x27d4eb4f;
          uVar42 = (uint)lVar5;
          uVar39 = uVar42 + uStack_5c;
          uVar16 = puVar13[5] * 0x27d4eb4f +
                   puVar13[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_60 +
                   (uint)CARRY4(uVar42,uStack_5c);
          uVar42 = uVar16 >> 1;
          uVar17 = uVar39 * -0x80000000 | uVar42;
          uStack_5c = (uint)((ulonglong)uVar17 * 0x85ebca87);
          uVar39 = uVar39 >> 1;
          uVar24 = uVar16 * -0x80000000 | uVar39;
          uStack_60 = uVar24 * -0x7a143579 +
                      uVar17 * -0x61c8864f + (int)((ulonglong)uVar17 * 0x85ebca87 >> 0x20);
          puVar2 = puVar13 + 2;
          puVar3 = puVar13 + 3;
          uVar22 = *puVar13;
          lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar16 = (uint)lVar5;
          puVar4 = puVar13 + 1;
          puVar13 = puVar13 + 8;
          uVar23 = uVar16 + uStack_64;
          uVar18 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uStack_68 + (uint)CARRY4(uVar16,uStack_64);
          uVar16 = uVar18 >> 1;
          uVar43 = uVar23 * -0x80000000 | uVar16;
          uVar23 = uVar23 >> 1;
          uVar21 = uVar18 * -0x80000000 | uVar23;
          uStack_64 = (uint)((ulonglong)uVar43 * 0x85ebca87);
          uStack_68 = uVar21 * -0x7a143579 +
                      uVar43 * -0x61c8864f + (int)((ulonglong)uVar43 * 0x85ebca87 >> 0x20);
          lVar5 = (ulonglong)uVar22 * 0x27d4eb4f;
          uVar18 = (uint)lVar5;
          uVar36 = uVar18 + uVar52;
          uVar52 = *puVar4 * 0x27d4eb4f + uVar22 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                   uVar48 + (uint)CARRY4(uVar18,uVar52);
          bVar53 = uVar14 < 0x20;
          uVar14 = uVar14 - 0x20;
          uVar18 = uVar52 >> 1;
          uVar22 = uVar36 * -0x80000000 | uVar18;
          uVar36 = uVar36 >> 1;
          uVar50 = uVar52 * -0x80000000 | uVar36;
          iVar20 = iVar20 - (uint)bVar53;
          uVar52 = (uint)((ulonglong)uVar22 * 0x85ebca87);
          uVar48 = uVar50 * -0x7a143579 +
                   uVar22 * -0x61c8864f + (int)((ulonglong)uVar22 * 0x85ebca87 >> 0x20);
        } while ((uint)(uVar14 < 0x20) <= (uint)-iVar20);
        uVar31 = uVar52 << 1 | uVar48 >> 0x1f;
        uVar38 = uStack_64 << 7 | uStack_68 >> 0x19;
        uVar32 = uVar38 + uVar31;
        uVar45 = uStack_5c << 0xc | uStack_60 >> 0x14;
        uVar33 = uVar32 + uVar45;
        uVar37 = uVar51 << 0x12 | uStack_58 >> 0xe;
        uVar50 = (uint)((ulonglong)uVar22 * 0x80000000) |
                 uVar50 * 0xf796ca9 +
                 uVar22 * -0x210ca4ff + (int)((ulonglong)uVar22 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar50 * 0x85ebca87;
        uVar34 = uVar33 + uVar37 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar34 * 0x85ebca87;
        uVar46 = (uint)lVar6;
        uVar25 = (uint)((ulonglong)uVar43 * 0x80000000) |
                 uVar21 * 0xf796ca9 +
                 uVar43 * -0x210ca4ff + (int)((ulonglong)uVar43 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar25 * 0x85ebca87;
        uVar21 = uVar46 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar21 * 0x85ebca87;
        uVar26 = (uint)lVar8;
        uVar27 = (uint)((ulonglong)uVar17 * 0x80000000) |
                 uVar24 * 0xf796ca9 +
                 uVar17 * -0x210ca4ff + (int)((ulonglong)uVar17 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar27 * 0x85ebca87;
        uVar24 = uVar26 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar24 * 0x85ebca87;
        uVar28 = (uint)lVar10;
        uVar29 = (uint)((ulonglong)uVar49 * 0x80000000) |
                 uVar15 * 0xf796ca9 +
                 uVar49 * -0x210ca4ff + (int)((ulonglong)uVar49 * 0xf796ca9 >> 0x20) >> 1;
        lVar11 = (ulonglong)uVar29 * 0x85ebca87;
        uVar15 = uVar28 + 0xc2b2ae63 ^ (uint)lVar11;
        lVar12 = (ulonglong)uVar15 * 0x85ebca87;
        uVar30 = (uint)lVar12;
        uVar14 = uVar30 + 0xc2b2ae63;
        iVar20 = (((((uStack_68 * 0x80 | uStack_64 >> 0x19) + (uVar48 * 2 | uVar52 >> 0x1f) +
                     (uint)CARRY4(uVar38,uVar31) + (uStack_60 * 0x1000 | uStack_5c >> 0x14) +
                     (uint)CARRY4(uVar32,uVar45) + (uStack_58 * 0x40000 | uVar51 >> 0xe) +
                     (uint)CARRY4(uVar33,uVar37) ^
                    (uVar36 * -0x80000000 +
                    uVar18 * -0x784349ac + (int)((ulonglong)uVar22 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar50 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                   (uVar23 * -0x80000000 +
                   uVar16 * -0x784349ac + (int)((ulonglong)uVar43 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar21 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                  (uVar39 * -0x80000000 +
                  uVar42 * -0x784349ac + (int)((ulonglong)uVar17 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                  -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                 (uVar41 * -0x80000000 +
                 uVar40 * -0x784349ac + (int)((ulonglong)uVar49 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) * -0x7a143579 +
                 uVar15 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar30);
      }
      uVar52 = uVar14 + uVar35;
      uVar14 = iVar20 + (uint)CARRY4(uVar14,uVar35);
      puVar44 = (uint *)((int)puVar44 + (uVar35 & 0xffffffe0));
      uVar35 = uVar35 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar35) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar35) <= uVar48) {
            if (uVar35 == 0 && uVar48 == 0) goto LAB_716daf64;
            lVar5 = (ulonglong)(uint)(byte)*puVar44 * 0x165667c5;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = (uint)(byte)*puVar44 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar40 = uVar51 << 0xb | uVar14 >> 0x15;
            iVar20 = 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar52 = (uint)lVar5;
            uVar14 = (uVar14 << 0xb | uVar51 >> 0x15) * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
            uVar42 = 0xffffffff;
          }
          else {
            lVar5 = (ulonglong)*puVar44 * 0x85ebca87;
            uVar51 = (uint)lVar5 ^ uVar52;
            uVar14 = *puVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
            uVar41 = uVar51 << 0x17 | uVar14 >> 9;
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar40 = (uint)lVar5;
            uVar52 = uVar40 + 0x9e3779f9;
            uVar14 = (uVar14 << 0x17 | uVar51 >> 9) * 0x27d4eb4f +
                     uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar40);
            uVar42 = 0xfffffffc;
            iVar20 = 4;
          }
        }
        else {
          uVar51 = *puVar44;
          uVar41 = (uint)((ulonglong)uVar51 * 0x80000000) |
                   puVar44[1] * 0x27d4eb4f +
                   uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar40 = (uint)lVar5 ^ uVar52;
          uVar14 = (puVar44[1] * -0x80000000 +
                   uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar14;
          uVar41 = uVar40 << 0x1b | uVar14 >> 5;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar51 = (uint)lVar5;
          uVar52 = uVar51 + 0xc2b2ae63;
          uVar42 = 0xfffffff8;
          uVar14 = (uVar14 << 0x1b | uVar40 >> 5) * -0x7a143579 +
                   uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar51);
          iVar20 = 8;
        }
        bVar53 = CARRY4(uVar42,uVar35);
        uVar35 = uVar42 + uVar35;
        puVar44 = (uint *)((int)puVar44 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar53;
      } while( true );
    }
    goto LAB_716dafdc;
  }
LAB_716db638:
  DAT_700c8188 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &DAT_716cb648;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c818c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716cb6b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8190 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cb728;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8194 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cb998;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8198 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbb04;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c819c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbbc4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c81a0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbca0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cbd3c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716cbc78;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716cbf54;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
LAB_716d014c:
  uVar52 = uVar52 ^ uVar14 >> 1;
  lVar5 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar5;
  uVar35 = uVar14 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar35 * 8) ^ uVar48;
  lVar5 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar35 = (uVar35 ^ uVar35 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar19 * 4] = uVar35;
  (&DAT_70125c84)[iVar19 * 4] = uVar35 ^ (uint)lVar5;
  puVar13 = DAT_70135cd4;
LAB_716d01bc:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x1000) goto LAB_716d0828;
  goto LAB_716d01cc;
LAB_716d91b8:
  uVar52 = uVar52 ^ uVar14 >> 1;
  lVar5 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar5;
  uVar35 = uVar14 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar35 * 8) ^ uVar48;
  lVar5 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar35 = (uVar35 ^ uVar35 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar19 * 4] = uVar35;
  (&DAT_70125c84)[iVar19 * 4] = uVar35 ^ (uint)lVar5;
  puVar13 = DAT_70135cd4;
LAB_716d9240:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x1000) goto LAB_716d98dc;
  goto LAB_716d924c;
LAB_716daf64:
  uVar52 = uVar52 ^ uVar14 >> 1;
  lVar5 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar5;
  uVar35 = uVar14 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar35 * 8) ^ uVar48;
  lVar5 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar35 = (uVar35 ^ uVar35 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  (&DAT_70125c88)[iVar19 * 4] = uVar35;
  (&DAT_70125c84)[iVar19 * 4] = uVar35 ^ (uint)lVar5;
  puVar13 = DAT_70135cd4;
LAB_716dafdc:
  iVar19 = iVar19 + 1;
  if (iVar19 == 0x1000) goto LAB_716db618;
  goto LAB_716dafe8;
LAB_716db618:
  DAT_70135cd4 = (uint *)0x0;
  DAT_70135cd0 = (uint *)0xffffffff;
  goto LAB_716db638;
}


// =========================================================================
// Function: FUN_716dd640
// Entry: 0x716dd640 | Size: 60 bytes
// =========================================================================

void FUN_716dd640(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_70c38f30;
  iVar2 = *(int *)(DAT_70c38f30 + 8);
  if (0 < iVar2) {
    *(undefined4 *)(DAT_70c38f30 + 8) = 0;
    (*DAT_700c861c)();
    *(int *)(iVar1 + 8) = iVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_716dd7a0
// Entry: 0x716dd7a0 | Size: 60 bytes
// =========================================================================

void FUN_716dd7a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_700c5784;
  uVar1 = DAT_700c5780;
  *param_2 = DAT_700c577c;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x716dd7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8624)();
  return;
}


// =========================================================================
// Function: FUN_716dd834
// Entry: 0x716dd834 | Size: 444 bytes
// =========================================================================

int FUN_716dd834(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar2 = (uint *)(DAT_710ea894 + *DAT_710ea96c * 0xc);
  uStack_30 = *puVar2 ^ 0x80000000;
  uVar6 = puVar2[2];
  uStack_2c = puVar2[1] ^ 0x80000000;
  iVar1 = FUN_71ba2d70(uVar6,0);
  uStack_28 = 0x3eb33333;
  if (iVar1 != 0) {
    uStack_28 = 0xbeb33333;
  }
  iVar1 = FUN_71ba2d10(uVar6 & 0x7fffffff);
  if (iVar1 == 0) {
    uStack_28 = uVar6 ^ 0x80000000;
  }
  FUN_7136ce28(&uStack_30);
  FUN_7136cdfc(&uStack_40);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_48 = 0x3f800000;
  FUN_7136e43c(auStack_5c,&uStack_50,&uStack_30);
  FUN_7136d040(&uStack_40,auStack_5c);
  FUN_7136ce28(&uStack_40);
  FUN_7136e43c(auStack_5c,&uStack_30,&uStack_40);
  FUN_7136d040(&uStack_50,auStack_5c);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  *(undefined4 *)(iVar7 + 0x14) = uStack_3c;
  *(undefined4 *)(iVar7 + 0x18) = uStack_38;
  *(undefined4 *)(iVar7 + 0x20) = uStack_50;
  *(undefined4 *)(iVar7 + 0x24) = uStack_4c;
  *(undefined4 *)(iVar7 + 0x28) = uStack_48;
  *(uint *)(iVar7 + 0x30) = uStack_30;
  *(uint *)(iVar7 + 0x34) = uStack_2c;
  *(uint *)(iVar7 + 0x38) = uStack_28;
  *(undefined4 *)(iVar7 + 0x10) = uStack_40;
  FUN_7141bbe4();
  FUN_7141b7c0(iVar7);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  iVar5 = *(int *)(**(int **)(param_1 + 8) + 4);
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar5 + 0x10) = uVar3;
  *(undefined4 *)(iVar5 + 0x18) = uVar4;
  uVar3 = *(undefined4 *)(iVar1 + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(iVar5 + 0x24) = uVar3;
  *(undefined4 *)(iVar5 + 0x28) = uVar4;
  uVar4 = *(undefined4 *)(iVar1 + 0x34);
  uVar3 = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)(iVar5 + 0x34) = uVar4;
  *(undefined4 *)(iVar5 + 0x38) = uVar3;
  FUN_7141bbe4();
  FUN_7141b7c0(iVar5);
  return iVar7;
}


// =========================================================================
// Function: FUN_716ddbb4
// Entry: 0x716ddbb4 | Size: 128 bytes
// =========================================================================

void FUN_716ddbb4(void)

{
  int iVar1;
  
  DataMemoryBarrier(0xb);
  if (((DAT_71174c5c & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c5c), iVar1 != 0)) {
    FUN_7158234c(&DAT_71174c40);
    thunk_raw_10ab3090(FUN_7150317c,&DAT_71174c40,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71174c5c);
  }
  FUN_71585674(&DAT_71174c40,0);
  return;
}


// =========================================================================
// Function: FUN_716dddb8
// Entry: 0x716dddb8 | Size: 340 bytes
// =========================================================================

void FUN_716dddb8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_7156fbec(&DAT_700c56f8);
  *DAT_710ea96c = 0;
  uVar4 = *DAT_710ea894;
  uVar5 = DAT_710ea894[1];
  uVar1 = FUN_71ba21e8(uVar5,uVar5);
  uVar2 = FUN_71ba21e8(uVar4,uVar4);
  FUN_71ba0b38(uVar2,uVar1);
  uVar1 = imp_sqrtf();
  uVar2 = FUN_71ba13e0(0x3f800000,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,0x3f800000);
  uVar1 = FUN_71ba21e8(uVar1,uVar2);
  uVar3 = FUN_71ba21e8(uVar1,uVar4);
  uVar3 = FUN_71ba21e8(uVar3,0xbf000000);
  *DAT_710ea970 = uVar3;
  uVar1 = FUN_71ba21e8(uVar1,uVar5);
  uVar1 = FUN_71ba21e8(uVar1,0xbf000000);
  *DAT_710ea974 = uVar1;
  uVar1 = FUN_71ba21e8(uVar2,uVar5);
  uVar1 = FUN_71ba21e8(uVar1,0xbf000000);
  *DAT_710ea978 = uVar1;
  uVar1 = FUN_71ba21e8(uVar4,uVar2);
  uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
  *DAT_710ea97c = uVar1;
  uVar1 = FUN_71ba21e8(uVar4,0xbf000000);
  *DAT_710ea980 = uVar1;
  uVar1 = FUN_71ba21e8(uVar5,0xbf000000);
  *DAT_710ea984 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_716de23c
// Entry: 0x716de23c | Size: 372 bytes
// =========================================================================

void FUN_716de23c(void)

{
  undefined4 *puVar1;
  
  FUN_71370744();
  DAT_700c861c = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716dd640;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8620 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716dd6d4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8624 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dd7a0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dd834;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ddbb4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dddb8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716de584
// Entry: 0x716de584 | Size: 284 bytes
// =========================================================================

void FUN_716de584(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = DAT_711f3020;
  if ((DAT_711f3018 & 1) == 0) {
    puVar3 = &DAT_711f3019;
  }
  piVar2 = (int *)(param_1 + 0x3fdfc);
  while( true ) {
    iVar1 = *piVar2;
    if ((*(byte *)(piVar2 + -2) & 1) == 0) {
      iVar1 = (int)piVar2 + -7;
    }
    iVar1 = imp_strcmp(iVar1,puVar3);
    if (iVar1 == 0) break;
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 3;
    if (uVar4 == 600) {
      uVar4 = 0xffff;
LAB_716de5fc:
      (*DAT_700c8628)(param_1,param_2);
      if ((*(byte *)(param_2 + 0xcf) & 1) != 0) {
        iVar1 = FUN_71ba2d10(*(undefined4 *)(param_2 + 0x8c),0xbd638eb0);
        if (iVar1 != 0) {
          *(undefined4 *)(param_2 + 0x8c) = 0xbd638eb0;
        }
      }
      if (0x4a < (uVar4 & 0xffff) >> 3) {
        return;
      }
      iVar1 = (uVar4 & 0xffff) * 0xe0 + 0x71153b60;
      imp___aeabi_memclr4(iVar1,0xe0);
      if (param_2 != 0) {
        imp___aeabi_memcpy(iVar1,param_2,0xe0);
        return;
      }
      return;
    }
  }
  FUN_714f4da4(uVar4 & 0xffff,param_2);
  goto LAB_716de5fc;
}


// =========================================================================
// Function: FUN_716de714
// Entry: 0x716de714 | Size: 264 bytes
// =========================================================================

int FUN_716de714(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl(&DAT_711f3018)
  ;
  iVar4 = 0xd2;
  puVar1 = &DAT_70b86d34;
  iVar2 = DAT_70b46f3c;
  do {
    if (DAT_711f3024 != '\0') break;
    thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
              (puVar1,iVar2);
    puVar1 = puVar1 + 0xc;
    iVar2 = iVar2 + 0xe;
    iVar4 = iVar4 + -1;
    DAT_70b88954 = DAT_70b88954 + 1;
  } while (iVar4 != 0);
  iVar2 = 0;
  DAT_711f3024 = 1;
  piVar3 = &DAT_70b86d3c;
  while( true ) {
    iVar4 = *piVar3;
    if ((*(byte *)(piVar3 + -2) & 1) == 0) {
      iVar4 = (int)piVar3 + -7;
    }
    iVar4 = imp_strcmp(iVar4,param_2);
    if (iVar4 == 0) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
    if (iVar2 == 600) {
      thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
                (&DAT_70b86d34 + DAT_70b88954 * 0xc,param_2);
      iVar2 = DAT_70b88954;
      DAT_70b88954 = DAT_70b88954 + 1;
      return iVar2;
    }
  }
  return iVar2;
}


// =========================================================================
// Function: FUN_716de924
// Entry: 0x716de924 | Size: 92 bytes
// =========================================================================

int FUN_716de924(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &DAT_70b86d3c;
  while( true ) {
    iVar1 = *piVar3;
    if ((*(byte *)(piVar3 + -2) & 1) == 0) {
      iVar1 = (int)piVar3 + -7;
    }
    iVar1 = imp_strcmp(iVar1,param_2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 3;
    if (iVar2 == 600) {
      return -1;
    }
  }
  return iVar2;
}


// =========================================================================
// Function: FUN_716deb34
// Entry: 0x716deb34 | Size: 100 bytes
// =========================================================================

int FUN_716deb34(int param_1,int param_2)

{
  uint uVar1;
  
  (*DAT_700c8630)();
  uVar1 = (uint)*(ushort *)(*(int *)(DAT_70c39074 + param_2 * 4) + 0x62);
  *(undefined **)(param_1 + 0x650) = &DAT_70b67c54 + uVar1 * 0x40;
  *(undefined **)(param_1 + 0x38c) = &DAT_70b71254 + uVar1 * 0x58;
  return param_1;
}


// =========================================================================
// Function: FUN_716dec10
// Entry: 0x716dec10 | Size: 120 bytes
// =========================================================================

int FUN_716dec10(int param_1,int param_2)

{
  uint uVar1;
  
  (*DAT_700c8634)();
  uVar1 = (uint)*(ushort *)(*(int *)(DAT_70c39074 + param_2 * 4) + 0x62);
  *(undefined **)(param_1 + 0x99c) = &DAT_70b67c54 + uVar1 * 0x40;
  *(undefined **)(param_1 + 0x38c) = &DAT_70b71254 + uVar1 * 0x58;
  if (*(short *)(param_1 + 0x26) == 0x7ec) {
    *(undefined4 *)(param_1 + 0x9a0) = 0x8b;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_716ded00
// Entry: 0x716ded00 | Size: 304 bytes
// =========================================================================

void FUN_716ded00(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if ((DAT_711f6d58 != 0) && (uVar4 = (uint)*(ushort *)(param_1 + 0x24), uVar4 < 0x7d1)) {
    iVar3 = *(int *)(DAT_711f6d58 + 4);
    bVar5 = *(char *)(iVar3 + uVar4 + 0x3e88) != '\0';
    if (bVar5) {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
    }
    if ((bVar5 && iVar3 != 0) && (*(int *)(iVar3 + 0x44) != 0)) {
      iVar1 = **(int **)(param_1 + 0x388) * 0xe0;
      uVar2 = (&DAT_70b46fc8)[iVar1];
      (&DAT_70b46fc8)[iVar1] = *(undefined1 *)(*(int *)(iVar3 + 0x44) + 0x74);
      (*DAT_700c8638)();
      (&DAT_70b46fc8)[**(int **)(param_1 + 0x388) * 0xe0] = uVar2;
      return;
    }
  }
  (*DAT_700c8638)();
  return;
}


// =========================================================================
// Function: FUN_716deec8
// Entry: 0x716deec8 | Size: 1136 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x716defd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716deec8(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0xa6;
  uStack_48 = 0x5f;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab88bd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xbc;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab88bd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabfa) >> 2 ^ 0xacad0b;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xbc;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined **)((auStack_50[0] ^ 0xccff7d) + DAT_7120187c) = &DAT_70b46f40;
  DAT_700c862c = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716de714;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8628 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716de584;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716de924;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716de9d4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716deadc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716dea28;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716dea80;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8630 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716deb34;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8634 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716dec10;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8638 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ded00;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716df70c
// Entry: 0x716df70c | Size: 284 bytes
// =========================================================================

void FUN_716df70c(void)

{
  FUN_712f1b5c(&DAT_70b2e804,0);
  FUN_7165b750();
  FUN_716e5f64();
  FUN_716cbfd0();
  FUN_716ab9c8();
  FUN_71716be8();
  FUN_716deec8();
  FUN_716fe884();
  FUN_716de23c();
  FUN_716e82f0();
  FUN_716f84a0();
  FUN_716edd38();
  FUN_716fa1f4();
  FUN_716ab29c();
  FUN_71728b80();
  FUN_7171e630();
  FUN_717165a0();
  FUN_71719d08();
  FUN_716fb7f4();
  FUN_716bda84();
  FUN_71663220();
  FUN_7165c8dc();
  FUN_7165f958();
  FUN_716b9124();
  FUN_71662840();
  FUN_7172c914();
  FUN_71700300();
  FUN_71700580();
  FUN_71700b1c();
  FUN_71701034();
  FUN_7170147c();
  FUN_717015fc();
  FUN_71702014();
  FUN_7170241c();
  FUN_717024d0();
  FUN_7170390c();
  FUN_71704fcc();
  FUN_717010e8();
  FUN_717089fc();
  FUN_71708ed8();
  FUN_7170c1d4();
  FUN_7170c98c();
  FUN_71708cf4();
  FUN_7170ca40();
  FUN_7170cb7c();
  FUN_7170d4dc();
  FUN_7170da8c();
  FUN_7170f3b4();
  FUN_7170fb90();
  FUN_71710a24();
  FUN_71711a2c();
  FUN_71712d80();
  FUN_7171320c();
  FUN_717007c4();
  FUN_71713674();
  FUN_7171376c();
  FUN_717154c8();
  FUN_71715694();
  FUN_717158ec();
  FUN_716ff644();
  FUN_71701f60();
  FUN_712f1b5c(&DAT_70b2e804,1);
  return;
}


// =========================================================================
// Function: FUN_716e3d3c
// Entry: 0x716e3d3c | Size: 92 bytes
// =========================================================================

undefined4 FUN_716e3d3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    puVar2 = *(undefined **)((int)&DAT_711f3050 + iVar3);
    if (((&DAT_711f3048)[iVar3] & 1) == 0) {
      puVar2 = &DAT_711f3049 + iVar3;
    }
    iVar1 = imp_strcmp(param_3,puVar2);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 0x10;
    if (iVar3 == 0xe0) {
      return 0;
    }
  }
  return *(undefined4 *)((int)&DAT_711f3054 + iVar3);
}


// =========================================================================
// Function: FUN_716e3f8c
// Entry: 0x716e3f8c | Size: 212 bytes
// =========================================================================

undefined4 FUN_716e3f8c(undefined4 param_1,undefined4 *param_2)

{
  imp___aeabi_memset(&DAT_711f312c,0xffc,0x5a);
  DAT_711f3484 = &DAT_716e3f70;
  DAT_711f33d0 = &LAB_716e4214;
  DAT_711f33cc = &LAB_716e3f50;
  DAT_711f3368 = &LAB_716e4214;
  DAT_711f33c4 = &LAB_716e3f30;
  DAT_711f32f4 = &LAB_716e4214;
  DAT_711f32ec = &LAB_716e4214;
  DAT_711f32a0 = &LAB_716e4214;
  DAT_711f3220 = &DAT_716e3f14;
  DAT_711f3208 = &LAB_716e3ef4;
  DAT_711f31f0 = &LAB_716e3ed4;
  DAT_711f31c0 = &LAB_716e3e0c;
  DAT_711f31b4 = &LAB_716e3dec;
  DAT_711f3184 = &LAB_716e4214;
  DAT_711f31ac = FUN_716e3d3c;
  DAT_711f316c = &LAB_716e4214;
  DAT_711f3140 = &LAB_716e4214;
  DAT_711f317c = &LAB_716e3d18;
  DAT_711f3128 = &DAT_711f3128;
  *param_2 = &DAT_711f3128;
  return 0;
}


// =========================================================================
// Function: FUN_716e4278
// Entry: 0x716e4278 | Size: 380 bytes
// =========================================================================

void FUN_716e4278(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c881c);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c880c);
    *(undefined2 *)(puVar4 + 3) = 0x1e3;
    *puVar4 = 0x9daef9f8;
    puVar4[1] = 0xd8a684a2;
    puVar4[2] = 0x9baee2f9;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716e6474,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c881c);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c880c);
  if (pbVar2[0xd] != 0) {
    *pbVar2 = *pbVar2 ^ 0xab;
    pbVar2[1] = pbVar2[1] ^ 0xad;
    pbVar2[2] = pbVar2[2] ^ 0xe1;
    pbVar2[3] = pbVar2[3] ^ 0xcf;
    pbVar2[0xd] = 0;
    pbVar2[4] = pbVar2[4] ^ 0xe3;
    pbVar2[5] = pbVar2[5] ^ 0xc3;
    pbVar2[6] = pbVar2[6] ^ 0xe3;
    pbVar2[7] = pbVar2[7] ^ 0x87;
    pbVar2[8] = pbVar2[8] ^ 0xab;
    pbVar2[9] = pbVar2[9] ^ 0xad;
    pbVar2[10] = pbVar2[10] ^ 0xe1;
    pbVar2[0xb] = pbVar2[0xb] ^ 0xcf;
    pbVar2[0xc] = pbVar2[0xc] ^ 0xe3;
  }
  iVar3 = imp_strcmp(param_4);
  if (iVar3 != 0) {
    return;
  }
  uVar6 = DAT_711f6bd8;
  if (((byte)DAT_711f6bd0 & 1) == 0) {
    uVar6 = 0x711f6bd1;
  }
  imp_strcpy(param_2,uVar6);
  return;
}


// =========================================================================
// Function: RRPALJeaSXMvjIoKM
// Entry: 0x716e4678 | Size: 312 bytes
// =========================================================================

void RRPALJeaSXMvjIoKM(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar3 = FUN_714c9a38();
  if (iVar3 <= param_2) {
    return;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar3 = DAT_711f4128;
  if (DAT_711f412c < DAT_711f4130) {
    DAT_711f412c[1] = param_2;
    DAT_711f412c[2] = param_3;
    puVar6 = DAT_711f412c + 4;
    *DAT_711f412c = param_1;
    DAT_711f412c[3] = param_4;
  }
  else {
    iVar5 = (int)DAT_711f412c - DAT_711f4128;
    iVar1 = iVar5 >> 4;
    uVar7 = iVar1 + 1;
    if (0xfffffff < uVar7) {
      FUN_716e65c8(&DAT_711f4128);
LAB_716e47ac:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar2 = (int)DAT_711f4130 - DAT_711f4128 >> 3;
    if (uVar7 < uVar2) {
      uVar7 = uVar2;
    }
    if (0x7fffffef < (uint)((int)DAT_711f4130 - DAT_711f4128)) {
      uVar7 = 0xfffffff;
    }
    if (uVar7 == 0) {
      iVar4 = 0;
    }
    else {
      if (0xfffffff < uVar7) goto LAB_716e47ac;
      iVar4 = thunk_MwhHq(uVar7 << 4);
    }
    puVar6 = (undefined4 *)(iVar4 + iVar1 * 0x10);
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[2] = param_3;
    puVar6[3] = param_4;
    imp___aeabi_memcpy4(iVar4,iVar3,iVar5);
    puVar6 = puVar6 + 4;
    DAT_711f4130 = (undefined4 *)(iVar4 + uVar7 * 0x10);
    DAT_711f4128 = iVar4;
    if (iVar3 != 0) {
      DAT_711f412c = puVar6;
      thunk_qNQrlu(iVar3);
    }
  }
  DAT_711f412c = puVar6;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  return;
}


// =========================================================================
// Function: Java_com_native_Main_touchEvent
// Entry: 0x716e4968 | Size: 16 bytes
// =========================================================================

void Java_com_native_Main_touchEvent
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  thunk_RRPALJeaSXMvjIoKM(param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: NroQkUCuYHJ_ApHiquDw
// Entry: 0x716e49ac | Size: 456 bytes
// =========================================================================

void NroQkUCuYHJ_ApHiquDw(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar1 = DAT_711f4134;
  uVar8 = 0x31;
  switch(param_2) {
  case 0x61:
    uVar8 = 0x1b;
    break;
  case 0x62:
  case 99:
  case 0x65:
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
  case 0x74:
  case 0x75:
  case 0x76:
    goto switchD_716e49f0_caseD_62;
  case 100:
    uVar8 = 0x1e;
    break;
  case 0x66:
    uVar8 = 0x20;
    break;
  case 0x73:
    uVar8 = 0x2d;
    break;
  case 0x77:
    break;
  default:
    if (param_2 == 0x102) {
      uVar8 = 0x37;
    }
    else {
      if (param_2 != 0x20) goto switchD_716e49f0_caseD_62;
      uVar8 = 5;
    }
  }
  if (DAT_711f4138 < DAT_711f413c) {
    *(undefined4 *)(DAT_711f4138 + 4) = uVar8;
    *(undefined4 *)(DAT_711f4138 + 8) = param_4;
    *(undefined2 *)(DAT_711f4138 + 1) = 0;
    *(bool *)DAT_711f4138 = param_1 != 0;
    *(undefined1 *)(DAT_711f4138 + 3) = 0;
    DAT_711f4138 = DAT_711f4138 + 0xc;
  }
  else {
    iVar3 = DAT_711f4138 - DAT_711f4134;
    uVar7 = (iVar3 >> 2) * -0x55555555 + 1;
    if (0x15555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_716e6630(&DAT_711f4134);
    }
    iVar6 = 0;
    iVar2 = (int)(DAT_711f413c - DAT_711f4134) >> 2;
    if (uVar7 < (uint)(iVar2 * 0x55555556)) {
      uVar7 = iVar2 * 0x55555556;
    }
    if (0xaaaaaa9 < (uint)(iVar2 * -0x55555555)) {
      uVar7 = 0x15555555;
    }
    if (uVar7 != 0) {
      if (0x15555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar6 = thunk_MwhHq(uVar7 * 0xc);
    }
    iVar5 = iVar6 + (iVar3 >> 2) * 4;
    *(bool *)iVar5 = param_1 != 0;
    iVar2 = iVar5 - iVar3;
    *(undefined4 *)(iVar5 + 4) = uVar8;
    *(undefined4 *)(iVar5 + 8) = param_4;
    *(undefined2 *)(iVar5 + 1) = 0;
    *(undefined1 *)(iVar5 + 3) = 0;
    imp___aeabi_memcpy4(iVar2,iVar1,iVar3);
    uVar4 = iVar5 + 0xc;
    DAT_711f413c = iVar6 + uVar7 * 0xc;
    DAT_711f4134 = iVar2;
    DAT_711f4138 = uVar4;
    if (iVar1 != 0) {
      thunk_qNQrlu(iVar1);
      DAT_711f4138 = uVar4;
    }
  }
switchD_716e49f0_caseD_62:
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  return;
}


// =========================================================================
// Function: Java_com_native_Main_appEvent
// Entry: 0x716e4d6c | Size: 276 bytes
// =========================================================================

void Java_com_native_Main_appEvent(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar3 = DAT_711f4140;
  if (DAT_711f4144 < DAT_711f4148) {
    puVar6 = DAT_711f4144 + 1;
    *DAT_711f4144 = param_3;
  }
  else {
    iVar7 = (int)DAT_711f4144 - DAT_711f4140;
    iVar1 = iVar7 >> 2;
    uVar5 = iVar1 + 1;
    if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_714f2b1c(&DAT_711f4140);
    }
    uVar2 = (int)DAT_711f4148 - DAT_711f4140 >> 1;
    if (uVar5 < uVar2) {
      uVar5 = uVar2;
    }
    if (0x7ffffffb < (uint)((int)DAT_711f4148 - DAT_711f4140)) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x3fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar4 = thunk_MwhHq(uVar5 << 2);
    }
    puVar6 = (uint *)(iVar4 + iVar1 * 4);
    *puVar6 = param_3;
    imp___aeabi_memcpy4(iVar4,iVar3,iVar7);
    DAT_711f4148 = (uint *)(iVar4 + uVar5 * 4);
    puVar6 = puVar6 + 1;
    DAT_711f4140 = iVar4;
    if (iVar3 != 0) {
      DAT_711f4144 = puVar6;
      thunk_qNQrlu(iVar3);
    }
  }
  DAT_711f4144 = puVar6;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  if ((param_3 < 10) && ((1 << (param_3 & 0xff) & 0x301U) != 0)) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
    bVar8 = 0xfffffffe < DAT_710eb1c8;
    DAT_710eb1c8 = DAT_710eb1c8 + 1;
    DAT_710eb1cc = DAT_710eb1cc + (uint)bVar8;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb1c0);
    thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_710eb1c4);
    return;
  }
  return;
}


// =========================================================================
// Function: Java_com_native_Main_windowSize
// Entry: 0x716e5018 | Size: 24 bytes
// =========================================================================

void Java_com_native_Main_windowSize
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_711f6bec = param_3;
  DAT_711f6bf0 = param_4;
  return;
}


// =========================================================================
// Function: FUN_716e5068
// Entry: 0x716e5068 | Size: 400 bytes
// =========================================================================

void FUN_716e5068(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar2 = DAT_711f4128;
  puVar6 = (undefined1 *)0x0;
  puVar7 = (undefined4 *)0x0;
  uStack_28 = 0;
  puVar8 = (undefined4 *)0x0;
  uStack_2c = 0;
  uStack_30 = 0;
  if (DAT_711f412c != DAT_711f4128) {
    iVar3 = DAT_711f412c - DAT_711f4128;
    if (iVar3 < 0) {
      FUN_716e65c8(&uStack_30);
      goto LAB_716e51f0;
    }
    puVar8 = (undefined4 *)thunk_MwhHq(iVar3);
    imp___aeabi_memcpy4(puVar8,iVar2,iVar3);
    puVar7 = (undefined4 *)((int)puVar8 + iVar3);
  }
  iVar3 = DAT_711f4134;
  uStack_34 = 0;
  puVar9 = (undefined1 *)0x0;
  uStack_38 = 0;
  uStack_3c = 0;
  if (DAT_711f4138 != DAT_711f4134) {
    iVar4 = DAT_711f4138 - DAT_711f4134;
    if (0x15555555 < (uint)((iVar4 >> 2) * -0x55555555)) {
LAB_716e51f0:
                    /* WARNING: Subroutine does not return */
      FUN_716e6630(&uStack_3c);
    }
    puVar9 = (undefined1 *)thunk_MwhHq(iVar4);
    imp___aeabi_memcpy4(puVar9,iVar3,iVar4);
    puVar6 = puVar9 + iVar4;
  }
  DAT_711f4138 = iVar3;
  DAT_711f412c = iVar2;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  for (puVar5 = puVar9; puVar1 = puVar8, puVar5 != puVar6; puVar5 = puVar5 + 0xc) {
    FUN_714b6f68(*puVar5,*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 8),0);
  }
  for (; puVar1 != puVar7; puVar1 = puVar1 + 4) {
    FUN_714b73b8(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  }
  if (puVar9 != (undefined1 *)0x0) {
    thunk_qNQrlu(puVar9);
  }
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  thunk_qNQrlu(puVar8);
  return;
}


// =========================================================================
// Function: FUN_716e5460
// Entry: 0x716e5460 | Size: 312 bytes
// =========================================================================

undefined4 FUN_716e5460(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = DAT_70ffc9a4;
  *DAT_70ffc9a4 = DAT_711f6bec;
  puVar1[1] = DAT_711f6bf0;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f414c);
  iVar3 = DAT_711f4144;
  iVar5 = DAT_711f4140;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  if (DAT_711f4144 == DAT_711f4140) {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
  }
  else {
    iVar6 = DAT_711f4144 - DAT_711f4140;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_714f2b1c(&uStack_2c);
    }
    piVar4 = (int *)thunk_MwhHq(iVar6);
    imp___aeabi_memcpy4(piVar4,iVar5,iVar6);
    DAT_711f4144 = iVar5;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f414c);
    piVar2 = DAT_710eb1b8;
    piVar7 = piVar4;
    if (iVar3 != iVar5) {
      do {
        iVar5 = *piVar7;
        if (iVar5 == 9) {
          uVar8 = 0;
          if (*piVar2 != 0) {
LAB_716e5528:
            FUN_714b8cc4(iVar5,0);
          }
LAB_716e5530:
          FUN_7139bcf4(uVar8);
        }
        else if (iVar5 == 8) {
          uVar8 = 1;
          if (*piVar2 == 0) goto LAB_716e5528;
          goto LAB_716e5530;
        }
        iVar6 = iVar6 + -4;
        piVar7 = piVar7 + 1;
      } while (iVar6 != 0);
    }
    thunk_qNQrlu(piVar4);
  }
  return 0;
}


// =========================================================================
// Function: FUN_716e5e4c
// Entry: 0x716e5e4c | Size: 100 bytes
// =========================================================================

void FUN_716e5e4c(void)

{
  if (DAT_711f4164 != '\0') {
    return;
  }
  DAT_711f4164 = 1;
  *DAT_711f4154 = 1;
  FUN_714b9e98(&DAT_716e6558,0,4,s_NVEvent_70067712,0,0);
  return;
}


// =========================================================================
// Function: FUN_716e5f64
// Entry: 0x716e5f64 | Size: 272 bytes
// =========================================================================

void FUN_716e5f64(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_70ffc9a4;
  *DAT_70ffc9a4 = DAT_711f6bec;
  puVar1[1] = DAT_711f6bf0;
  *DAT_710eb1b4 = 0;
  imp___aeabi_memset(&DAT_711f4169,0xffc,0x5a);
  DAT_711f4165 = &DAT_711f4165;
  DAT_711f417d = FUN_716e3f8c;
  *DAT_7120188c = &DAT_716e57ac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e4234;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716e5460;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716e4278;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716e65c8
// Entry: 0x716e65c8 | Size: 20 bytes
// =========================================================================

void FUN_716e65c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_716e6630
// Entry: 0x716e6630 | Size: 20 bytes
// =========================================================================

void FUN_716e6630(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_716e6698
// Entry: 0x716e6698 | Size: 140 bytes
// =========================================================================

void FUN_716e6698(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_1c [4];
  
  uVar1 = FUN_71886108();
  uVar2 = thunk_MwhHq(4);
  thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar3 = (undefined4 *)thunk_MwhHq(0x10);
  *puVar3 = uVar2;
  puVar3[1] = param_1;
  puVar3[2] = param_2;
  puVar3[3] = uVar1;
  iVar4 = imp_pthread_create(auStack_1c,0,FUN_716e8420,puVar3);
  if (iVar4 == 0) {
    thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(auStack_1c);
    thunk_uQwrLJbzyUVbHmvQcVNflhV(auStack_1c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar4,s_thread_constructor_failed_70063c8c);
}


// =========================================================================
// Function: XrRYLjHAoRp_SpycWFQJbR
// Entry: 0x716e685c | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XrRYLjHAoRp_SpycWFQJbR(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0ef34;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_716e68d8;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_716e68d8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716e69cc
// Entry: 0x716e69cc | Size: 464 bytes
// =========================================================================

undefined4 FUN_716e69cc(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c889c);
  if (*pcVar7 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c888c);
    *(undefined1 *)((int)puVar10 + 0x16) = 1;
    uVar5 = DAT_70084ae0;
    uVar4 = DAT_70084adc;
    uVar3 = DAT_70084ad8;
    uVar12 = DAT_70084ad4;
    *puVar10 = DAT_70084ad0;
    puVar10[1] = uVar12;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    puVar10[4] = uVar5;
    *(undefined2 *)(puVar10 + 5) = DAT_70084ae4;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716e83b0,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c889c);
    *puVar11 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c888c);
  if (*(char *)(iVar8 + 0x16) != '\0') {
    uVar9 = 0;
    uVar13 = 0;
    do {
      iVar14 = (uVar9 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar6 = (byte)(0xd9dfef83 >> iVar14) | (byte)(-0x7ad21a23 << ((uVar9 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar15) {
        bVar6 = (byte)(0x852de5dd >> (uVar15 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar6;
      bVar16 = 0xfffffffe < uVar9;
      bVar1 = uVar13 == 0;
      bVar2 = (0x14 < uVar9) <= uVar13;
      uVar9 = uVar9 + 1;
      uVar13 = uVar13 + bVar16;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x16) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar9 < 0xb) {
    uVar13 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar9 << 1));
    if (uVar9 == 0) goto LAB_716e6ad8;
  }
  else {
    uVar13 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_2c = (uVar9 | 7) + 2;
    uStack_28 = uVar9;
    uStack_24 = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar8,uVar9);
LAB_716e6ad8:
  uVar12 = 0;
  *(undefined1 *)(uVar13 + uVar9) = 0;
  iVar8 = FUN_717c5e7c(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if (((DAT_711f6d58 != 0) && (*(int *)(DAT_711f6d58 + 0x28) == 0xe)) && (iVar8 - 1U < 2)) {
    uVar12 = 1;
  }
  return uVar12;
}


// =========================================================================
// Function: FUN_716e6de8
// Entry: 0x716e6de8 | Size: 216 bytes
// =========================================================================

void FUN_716e6de8(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((DAT_711f6984 == 2) && (DAT_711a3938 != 0)) {
    piVar3 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar3;
        if (iVar1 == 0) goto LAB_716e6e78;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar3 = iVar1;
      }
    }
    iVar2 = *(int *)(iVar1 + 0x8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x444);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      FUN_715c3a48();
    }
  }
LAB_716e6e78:
  if (DAT_711f6984 != 0) {
    DAT_711f5180._3_1_ = 0;
    DAT_711f5180._0_1_ = 0;
    DAT_711f517e = 0;
  }
  DAT_711f6988 = 0;
  DAT_711f6984 = 0;
  DAT_711f698c = 0;
  return;
}


// =========================================================================
// Function: JYHXrdiNZDWoNfDzOIJdI
// Entry: 0x716e7028 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void JYHXrdiNZDWoNfDzOIJdI(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0ef58;
  uStack_2c = param_1;
  uStack_28 = param_2;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_716e70ac;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_716e70ac:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716e71a0
// Entry: 0x716e71a0 | Size: 1840 bytes
// =========================================================================

void FUN_716e71a0(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  char cVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (DAT_711f6984 == 0) {
    return;
  }
  iVar11 = 0;
  iVar20 = 0;
  if (DAT_711a3938 != 0) {
    piVar12 = (int *)(DAT_711a3938 + 0x1389c);
    iVar20 = *piVar12;
    if (iVar20 == 0) {
      iVar20 = FUN_713c301c(0);
      if (iVar20 == 0) {
        iVar20 = *piVar12;
      }
      else {
        iVar20 = thunk_MwhHq(0x3a0);
        iVar4 = FUN_715ba834();
        *piVar12 = iVar4;
      }
    }
  }
  iVar4 = 0;
  if (DAT_711f6d58 != 0) {
    iVar4 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (DAT_711f6d58 != 0 && iVar4 != 0) {
    iVar11 = *(int *)(iVar4 + 0x1f6c);
  }
  if (iVar20 == 0 || iVar11 == 0) goto LAB_716e7258;
  bVar21 = *(int *)(iVar20 + 0x8c) != 0;
  cVar10 = '\0';
  if (bVar21) {
    cVar10 = *(char *)(iVar11 + 0x12a);
  }
  if ((!bVar21 || cVar10 == '\0') || (iVar4 = FUN_716e69cc(), iVar11 = DAT_711f6988, iVar4 == 0))
  goto LAB_716e7258;
  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c88bc);
  if (*pcVar5 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c88ac);
    *(undefined1 *)((int)puVar8 + 0x16) = 1;
    uVar19 = DAT_70084af8;
    uVar18 = DAT_70084af4;
    uVar17 = DAT_70084af0;
    uVar7 = DAT_70084aec;
    *puVar8 = DAT_70084ae8;
    puVar8[1] = uVar7;
    puVar8[2] = uVar17;
    puVar8[3] = uVar18;
    puVar8[4] = uVar19;
    *(undefined2 *)(puVar8 + 5) = DAT_70084afc;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716e83e8,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c88bc);
    *puVar9 = 1;
  }
  iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c88ac);
  if (*(char *)(iVar4 + 0x16) != '\0') {
    uVar6 = 0;
    uVar15 = 0;
    do {
      iVar13 = (uVar6 & 7) * 8;
      uVar14 = iVar13 - 0x20;
      bVar3 = (byte)(0x87214d1b >> iVar13) | (byte)(0x61a7ddf5 << ((uVar6 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar14) {
        bVar3 = (byte)(0x61a7ddf5 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar4 + uVar6) = *(byte *)(iVar4 + uVar6) ^ bVar3;
      bVar22 = 0xfffffffe < uVar6;
      bVar21 = uVar15 == 0;
      bVar1 = (0x14 < uVar6) <= uVar15;
      uVar6 = uVar6 + 1;
      uVar15 = uVar15 + bVar22;
    } while (bVar21 && bVar1);
    *(undefined1 *)(iVar4 + 0x16) = 0;
  }
  uVar6 = imp_strlen(iVar4);
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar6 < 0xb) {
    uVar15 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar6 << 1));
    if (uVar6 != 0) goto LAB_716e7368;
  }
  else {
    uVar15 = thunk_MwhHq((uVar6 | 7) + 1);
    uStack_30 = (uVar6 | 7) + 2;
    uStack_2c = uVar6;
    uStack_28 = uVar15;
LAB_716e7368:
    imp___aeabi_memmove(uVar15,iVar4,uVar6);
  }
  *(undefined1 *)(uVar15 + uVar6) = 0;
  iVar4 = FUN_717c5e7c(&uStack_30);
  cVar10 = '\x01';
  if (((((iVar11 == iVar4) && (iVar11 = thunk_FUN_715c8334(iVar20), iVar11 == 0)) &&
       (iVar11 = thunk_FUN_715bf66c(iVar20), iVar11 == 0)) &&
      ((iVar11 = FUN_715d07a0(iVar20), iVar11 == 0 && (iVar11 = FUN_715d0c0c(iVar20), iVar11 == 0)))
      ) && ((iVar11 = thunk_FUN_715c51c4(iVar20), iVar11 != 0 &&
            (iVar11 = FUN_7156ab28(), iVar11 != 0)))) {
    bVar21 = *(short *)(DAT_70b889d4 + 0x110) == 0;
    uVar6 = DAT_70b889d4;
    if (bVar21) {
      uVar6 = (uint)*(byte *)(DAT_70b889d4 + 0x12f);
    }
    if ((bVar21 && uVar6 == 0) && (*DAT_70b42048 == '\0')) {
      cVar10 = *DAT_70b42044;
    }
  }
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (cVar10 == '\0') {
    iVar11 = *DAT_70b42060;
    if (DAT_711f6990 == iVar11) {
      return;
    }
    iVar4 = *(int *)(iVar20 + 0x8c);
    DAT_711f6990 = iVar11;
    if (DAT_711f6984 == 2) {
      iVar11 = FUN_713aeb00();
      uVar2 = *(ushort *)(iVar11 + 0xe);
      iVar11 = FUN_716ac9ac();
      if ((iVar11 == 0) &&
         (((uVar15 = uVar2 - 0x31, uVar6 = (uVar15 & 0xffff) >> 1,
           8 < (uVar15 * 0x8000 & 0xffff | uVar6) || ((1 << (uVar6 & 0xff) & 0x10dU) == 0)) &&
          (iVar11 = *(int *)(iVar4 + 0x14), iVar11 != 0)))) {
        uVar19 = *(undefined4 *)(iVar11 + 0x38);
        uVar17 = *(undefined4 *)(iVar11 + 0x30);
        uVar18 = *(undefined4 *)(iVar11 + 0x34);
        FUN_7136cdfc(&uStack_30);
        uVar7 = FUN_7136cdfc(&uStack_3c);
        FUN_713b14bc(DAT_70b46c18,0x42480000,uVar17,uVar18,uVar19,&uStack_30,uVar7);
        uVar6 = FUN_71ba240c(uStack_3c,uVar17);
        iVar11 = FUN_71ba2cf0(uVar6 & 0x7fffffff,0x7f800000);
        iVar13 = FUN_71ba0408(uVar6 & 0x7fffffff,0x7f800000);
        uVar15 = FUN_71ba240c(uStack_38,uVar18);
        if (iVar13 == 0 && iVar11 == 0) {
          iVar11 = FUN_71ba2cf0(uVar15 & 0x7fffffff,0x7f800000);
          iVar13 = FUN_71ba0408(uVar15 & 0x7fffffff,0x7f800000);
          if (iVar13 == 0 && iVar11 == 0) {
            uVar7 = FUN_71ba21e8(uVar15,uVar15);
            uVar17 = FUN_71ba21e8(uVar6,uVar6);
            uVar7 = FUN_71ba0b38(uVar17,uVar7);
            iVar11 = FUN_71ba2d10(uVar7,0x3c23d70a);
            if (iVar11 == 0) {
              imp_atan2f(uVar6 ^ 0x80000000,uVar15);
              uVar7 = FUN_7133b360();
              *(undefined4 *)(iVar4 + 0x55c) = uVar7;
              *(undefined4 *)(iVar4 + 0x560) = uVar7;
              FUN_713c4ee4(iVar4,uVar7);
            }
          }
        }
      }
    }
    uVar6 = 0xffffffff;
    bVar21 = true;
    puVar16 = (uint *)(iVar4 + 0x5a4);
    iVar11 = 0x5a4;
LAB_716e74d0:
    iVar13 = iVar11 + 0x1c;
    do {
      uVar15 = *puVar16;
      if (uVar15 < 0x2f) {
        piVar12 = (int *)FUN_713dacc4(puVar16,iVar4);
        if ((DAT_711f6984 == 1 && *piVar12 == 0) ||
           (((DAT_711f6984 == 2 && (0xfffffffd < *piVar12 - 3U)) && (0 < (int)puVar16[3]))))
        goto LAB_716e7540;
      }
      iVar11 = iVar11 + 0x1c;
      iVar13 = iVar13 + 0x1c;
      puVar16 = (uint *)(iVar4 + iVar11);
      if (iVar13 == 0x72c) {
        uVar15 = uVar6;
        if (bVar21) {
          DAT_711f698c = 0;
          return;
        }
        goto LAB_716e75a0;
      }
    } while( true );
  }
LAB_716e7258:
  FUN_716e6de8();
  return;
LAB_716e7540:
  if (uVar15 != 0) goto LAB_716e75a0;
  puVar16 = (uint *)(iVar4 + iVar13);
  bVar21 = false;
  uVar6 = 0;
  uVar15 = 0;
  iVar11 = iVar13;
  if (iVar13 == 0x710) {
LAB_716e75a0:
    DAT_711f698c = 0;
    uVar6 = FUN_715c0530(iVar20);
    if (uVar6 != uVar15) {
      FUN_715c3b44(iVar20,uVar15);
    }
    uVar6 = FUN_715c0530(iVar20);
    if (uVar6 != uVar15) {
      return;
    }
    iVar11 = FUN_715671d4(iVar4,1);
    if (iVar11 == 0) {
      return;
    }
    if (DAT_711f6984 == 2) {
      if (((*(int *)(iVar4 + 0x444) != 0) &&
          ((*(ushort *)(*(int *)(iVar4 + 0x444) + 0x34) & 8) == 0)) &&
         (FUN_715c3d90(iVar20), DAT_711f6984 != 2)) {
        DAT_711f698c = 1;
        return;
      }
      DAT_711f698c = 1;
      iVar11 = FUN_713dacc4((uint *)(iVar4 + 0x5a4) + *(char *)(iVar4 + 0x71c) * 7,iVar4);
      if ((*(byte *)(iVar11 + 0x19) & 1) == 0) {
        return;
      }
      if (*(int *)(iVar4 + 0x440) != 0) {
        piVar12 = *(int **)(*(int *)(iVar4 + 0x440) + 0x18);
        if (piVar12 != (int *)0x0) {
          iVar20 = (**(code **)(*piVar12 + 0x14))();
          DAT_711f698c = iVar20 == 0x3fa;
          return;
        }
        iVar20 = FUN_71ba2c7c(DAT_70b42058,DAT_70b4205c,*(undefined4 *)(iVar20 + 0x398),
                              *(undefined4 *)(iVar20 + 0x39c));
        if (iVar20 == 0) {
          DAT_711f698c = 0;
          return;
        }
        DAT_711f698c = 1;
        return;
      }
      DAT_711f698c = 0;
      return;
    }
    DAT_711f698c = 1;
    return;
  }
  goto LAB_716e74d0;
}


// =========================================================================
// Function: FUN_716e81c8
// Entry: 0x716e81c8 | Size: 24 bytes
// =========================================================================

bool FUN_716e81c8(int param_1)

{
  return DAT_711f6984 == param_1;
}


// =========================================================================
// Function: FUN_716e8218
// Entry: 0x716e8218 | Size: 16 bytes
// =========================================================================

undefined1 FUN_716e8218(void)

{
  return DAT_711f698c;
}


// =========================================================================
// Function: FUN_716e82a8
// Entry: 0x716e82a8 | Size: 16 bytes
// =========================================================================

void FUN_716e82a8(undefined1 param_1)

{
  DAT_711f6977 = param_1;
  return;
}


// =========================================================================
// Function: FUN_716e82f0
// Entry: 0x716e82f0 | Size: 72 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716e82f0(void)

{
  DAT_711f5194 = 0;
  _DAT_711f5178 = 0;
  _DAT_711f517c = 0;
  DAT_711f5180 = 0;
  DAT_711f5184 = 0;
  DAT_711f5188 = 0;
  DAT_711f518c = 0;
  DAT_711f5190 = 0;
  DAT_711f6981 = 0;
  DAT_711f6980 = 0;
  return;
}


// =========================================================================
// Function: FUN_716e8420
// Entry: 0x716e8420 | Size: 208 bytes
// =========================================================================

undefined4 FUN_716e8420(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = (undefined4 *)thunk_CWDJZZ_nnrPtjJmsyGMAFPvZcxAtXsiYS_H();
  iVar2 = *param_1;
  *param_1 = 0;
  imp_pthread_setspecific(*puVar1,iVar2);
  uVar5 = param_1[1];
  uVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar2 = FUN_71886108();
  if ((uint)(iVar2 - iVar4) < uVar3) {
    do {
      if ((uVar5 & 0x40) != 0) {
        DAT_711f517e = 1;
      }
      if ((uVar5 & 0x20) != 0) {
        DAT_711f5180._0_1_ = 1;
      }
      uStack_2c = 0;
      if ((uVar5 & 0x10) != 0) {
        DAT_711f5180._3_1_ = 1;
      }
      uStack_30 = 2000000;
      thunk_PZTXYifKVWeMAfhDWPQpfincoMtPAUNNFwTuvXgQaliszcdJKGQksZEhvbzxsZzLzTDnkdfypPojrqTmhvvq_duQDZ
                (&uStack_30);
      iVar2 = FUN_71886108();
    } while ((uint)(iVar2 - iVar4) < uVar3);
  }
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
// Function: FUN_716e8704
// Entry: 0x716e8704 | Size: 4 bytes
// =========================================================================

void FUN_716e8704(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x716e8720 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716e892c
// Entry: 0x716e892c | Size: 4 bytes
// =========================================================================

void FUN_716e892c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x716e8948 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716ebb88
// Entry: 0x716ebb88 | Size: 64 bytes
// =========================================================================

void FUN_716ebb88(undefined4 param_1,int param_2,undefined4 param_3,byte param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(iVar4 + 0x464);
  uVar1 = *(undefined1 *)(iVar4 + 0x3a);
  uVar2 = (undefined1)iVar3;
  if (iVar3 != 0) {
    param_4 = *(byte *)(iVar3 + 0x485);
    uVar2 = 2;
  }
  if (iVar3 == 0 || (param_4 & 1) == 0) {
    uVar2 = 0x22;
  }
  *(undefined1 *)(iVar4 + 0x3a) = uVar2;
  (*DAT_700c891c)();
  *(undefined1 *)(iVar4 + 0x3a) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_716ebc00
// Entry: 0x716ebc00 | Size: 212 bytes
// =========================================================================

undefined1 FUN_716ebc00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (*DAT_7118e024 == '\0') {
    bVar1 = false;
    if (DAT_711f6968 == 2) {
      iVar2 = FUN_713c2bdc(0,0);
      if ((iVar2 == 0) || (iVar2 = FUN_713c2bdc(0,0), *(short *)(iVar2 + 0x26) == 0x197)) {
        iVar2 = (*DAT_700c8920)(param_1,param_2,param_3);
        DAT_711f517e = iVar2 != 0;
        bVar1 = (bool)DAT_711f517e;
      }
      else {
        DAT_711f517e = false;
        bVar1 = (bool)DAT_711f517e;
      }
    }
    return bVar1;
  }
  return (&DAT_711f519b)[(short)(ushort)DAT_711f6964 * 0x1d];
}


// =========================================================================
// Function: FUN_716ec3e0
// Entry: 0x716ec3e0 | Size: 148 bytes
// =========================================================================

uint FUN_716ec3e0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*DAT_7118e024 != '\0') {
    return (uint)(byte)(&DAT_711f5199)[(short)(ushort)DAT_711f6964 * 0x1d];
  }
  if (DAT_711f6968 == 2) {
    uVar1 = (*DAT_700c8934)(param_1);
    uVar2 = 0;
    if (uVar1 != 0) {
      DAT_711f517c = 1;
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0;
}


// =========================================================================
// Function: FUN_716ec54c
// Entry: 0x716ec54c | Size: 1276 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716ec54c(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  byte bStack_16c;
  undefined2 uStack_16b;
  undefined1 *puStack_169;
  undefined1 uStack_165;
  uint uStack_164;
  undefined4 uStack_15a;
  undefined1 auStack_145 [258];
  undefined4 uStack_43;
  char cStack_3f;
  int iStack_33;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if ((DAT_711f6977 != '\0') || (*DAT_7118e024 != '\0')) goto LAB_716ec72c;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a04);
  if (*pcVar7 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c89f4);
    *(undefined1 *)((int)puVar10 + 0x12) = 1;
    uVar4 = DAT_70084b24;
    uVar3 = DAT_70084b20;
    uVar2 = DAT_70084b1c;
    *puVar10 = DAT_70084b18;
    puVar10[1] = uVar2;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    *(undefined2 *)(puVar10 + 4) = DAT_70084b28;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716eed48,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a04);
    *puVar11 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c89f4);
  if (*(char *)(iVar8 + 0x12) != '\0') {
    uVar9 = 0;
    uVar13 = 0;
    do {
      iVar12 = (uVar9 & 7) * 8;
      bVar6 = (byte)(0xc121c599 >> iVar12) | (byte)(-0x58eec67f << ((uVar9 & 7) * -8 + 0x20 & 0xff))
      ;
      uVar14 = iVar12 - 0x20;
      if (-1 < (int)uVar14) {
        bVar6 = (byte)(0xa7113981 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar6;
      bVar16 = 0xfffffffe < uVar9;
      bVar15 = uVar13 == 0;
      bVar1 = (0x10 < uVar9) <= uVar13;
      uVar9 = uVar9 + 1;
      uVar13 = uVar13 + bVar16;
    } while (bVar15 && bVar1);
    *(undefined1 *)(iVar8 + 0x12) = 0;
  }
  uVar9 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar9) goto LAB_716eca40;
  if (uVar9 < 0xb) {
    uVar13 = (uint)&bStack_16c | 1;
    bStack_16c = (byte)(uVar9 << 1);
    if (uVar9 != 0) goto LAB_716ec69c;
  }
  else {
    uVar13 = thunk_MwhHq((uVar9 | 7) + 1);
    iVar12 = (uVar9 | 7) + 2;
    uStack_165 = (undefined1)(uVar9 >> 0x18);
    bStack_16c = (byte)iVar12;
    uStack_16b = (undefined2)((uint)iVar12 >> 8);
    puStack_169._0_1_ = (undefined1)((uint)iVar12 >> 0x18);
    puStack_169 = (undefined1 *)CONCAT31((int3)uVar9,puStack_169._0_1_);
    uStack_164 = uVar13;
LAB_716ec69c:
    imp___aeabi_memmove(uVar13,iVar8,uVar9);
  }
  *(undefined1 *)(uVar13 + uVar9) = 0;
  iVar8 = FUN_717c5e7c(&bStack_16c);
  if ((bStack_16c & 1) != 0) {
    thunk_qNQrlu(uStack_164);
  }
  if (iVar8 != 0) goto LAB_716ec72c;
  uVar17 = (*DAT_700c8938)(param_1,param_2,param_3,param_4,param_5);
  bVar15 = (int)uVar17 != 0;
  iVar8 = (int)((ulonglong)uVar17 >> 0x20);
  if (bVar15) {
    param_3 = &DAT_711f6d58;
    iVar8 = DAT_711f6d58;
  }
  if (!bVar15 || iVar8 == 0) goto LAB_716ec72c;
  if (param_4 == 0) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a24);
    if (*pcVar7 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a14);
      *(undefined1 *)((int)puVar10 + 0x13) = 1;
      uVar4 = DAT_70084b3c;
      uVar3 = DAT_70084b38;
      uVar2 = DAT_70084b34;
      *puVar10 = DAT_70084b30;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      uVar5 = DAT_70084b42;
      *(undefined2 *)(puVar10 + 4) = DAT_70084b40;
      *(undefined1 *)((int)puVar10 + 0x12) = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716eed7c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a24);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a14);
    if (*(char *)(iVar8 + 0x13) != '\0') {
      uVar9 = 0;
      uVar13 = 0;
      do {
        iVar12 = (uVar9 & 7) * 8;
        bVar6 = (byte)(0xb1f9d75f >> iVar12) |
                (byte)(0x69816393 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar12 - 0x20;
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x69816393 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar8 + uVar9) = *(byte *)(iVar8 + uVar9) ^ bVar6;
        bVar16 = 0xfffffffe < uVar9;
        bVar15 = uVar13 == 0;
        bVar1 = (0x11 < uVar9) <= uVar13;
        uVar9 = uVar9 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar15 && bVar1);
      *(undefined1 *)(iVar8 + 0x13) = 0;
    }
    uVar9 = imp_strlen(iVar8);
    if (0xfffffff7 < uVar9) {
LAB_716eca40:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&bStack_16c);
    }
    if (uVar9 < 0xb) {
      uVar13 = (uint)&bStack_16c | 1;
      bStack_16c = (byte)(uVar9 << 1);
      if (uVar9 != 0) goto LAB_716ec894;
    }
    else {
      uVar13 = thunk_MwhHq((uVar9 | 7) + 1);
      iVar12 = (uVar9 | 7) + 2;
      uStack_165 = (undefined1)(uVar9 >> 0x18);
      bStack_16c = (byte)iVar12;
      uStack_16b = (undefined2)((uint)iVar12 >> 8);
      puStack_169._0_1_ = (undefined1)((uint)iVar12 >> 0x18);
      puStack_169 = (undefined1 *)CONCAT31((int3)uVar9,puStack_169._0_1_);
      uStack_164 = uVar13;
LAB_716ec894:
      imp___aeabi_memmove(uVar13,iVar8,uVar9);
    }
    *(undefined1 *)(uVar13 + uVar9) = 0;
    iVar8 = FUN_717c5e7c(&bStack_16c);
    if ((bStack_16c & 1) != 0) {
      thunk_qNQrlu(uStack_164);
    }
    if (iVar8 != 0) {
      iStack_33 = 0x800;
      cStack_3f = '\x01';
      uStack_15a = 8;
      puStack_169 = auStack_145;
      uStack_43 = 0;
      auStack_145[0] = 0;
      (**(code **)(**(int **)*param_3 + 0x94))
                (*(int **)*param_3,0xc,&bStack_16c,1,9,0,0,0xffffffff,0xffff,0xffff,0,0);
      if ((cStack_3f != '\0') && (0x800 < iStack_33)) {
        imp_free(puStack_169);
      }
      goto LAB_716ec72c;
    }
    iVar8 = *param_3;
  }
  if ((*(int *)(iVar8 + 0xac) != 0) &&
     (iVar8 = *(int *)(*(int *)(iVar8 + 0xac) + 0x1f6c), iVar8 != 0)) {
    FUN_7175ccb4(iVar8);
  }
LAB_716ec72c:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_2c);
}


// =========================================================================
// Function: FUN_716ecf80
// Entry: 0x716ecf80 | Size: 548 bytes
// =========================================================================

undefined4
FUN_716ecf80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (*DAT_7118e024 != '\0') {
    return 0;
  }
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a44);
  if (*pcVar6 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a34);
    *(undefined1 *)((int)puVar10 + 0x12) = 1;
    uVar4 = DAT_70084b54;
    uVar3 = DAT_70084b50;
    uVar9 = DAT_70084b4c;
    *puVar10 = DAT_70084b48;
    puVar10[1] = uVar9;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    *(undefined2 *)(puVar10 + 4) = DAT_70084b58;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_712ed110,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a44);
    *puVar11 = 1;
  }
  iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a34);
  if (*(char *)(iVar7 + 0x12) != '\0') {
    uVar8 = 0;
    uVar13 = 0;
    do {
      iVar12 = (uVar8 & 7) * 8;
      bVar5 = (byte)(0x7f7a77d >> iVar12) | (byte)(0x37fa3f5 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
      uVar14 = iVar12 - 0x20;
      if (-1 < (int)uVar14) {
        bVar5 = (byte)(0x37fa3f5 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8) ^ bVar5;
      bVar15 = 0xfffffffe < uVar8;
      bVar1 = uVar13 == 0;
      bVar2 = (0x10 < uVar8) <= uVar13;
      uVar8 = uVar8 + 1;
      uVar13 = uVar13 + bVar15;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x12) = 0;
  }
  uVar8 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar8 < 0xb) {
    uVar13 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar8 << 1));
    if (uVar8 == 0) goto LAB_716ed0c4;
  }
  else {
    uVar13 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_30 = (uVar8 | 7) + 2;
    uStack_2c = uVar8;
    uStack_28 = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar7,uVar8);
LAB_716ed0c4:
  *(undefined1 *)(uVar13 + uVar8) = 0;
  iVar7 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar7 != 0) {
    return 0;
  }
  DAT_711f6994 = 1;
  uVar9 = (*DAT_700c8938)(param_1,param_2,param_3,param_4,param_5);
  DAT_711f6994 = 0;
  return uVar9;
}


// =========================================================================
// Function: FUN_716ed430
// Entry: 0x716ed430 | Size: 552 bytes
// =========================================================================

undefined4 FUN_716ed430(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (DAT_711f6977 != '\0') {
    return 0;
  }
  if (*DAT_7118e024 != '\0') {
    return 0;
  }
  pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a64);
  if (*pcVar6 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a54);
    *(undefined1 *)((int)puVar10 + 0x12) = 1;
    uVar4 = DAT_70084b6c;
    uVar3 = DAT_70084b68;
    uVar9 = DAT_70084b64;
    *puVar10 = DAT_70084b60;
    puVar10[1] = uVar9;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    *(undefined2 *)(puVar10 + 4) = DAT_70084b70;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_716eedb0,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a64);
    *puVar11 = 1;
  }
  iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8a54);
  if (*(char *)(iVar7 + 0x12) != '\0') {
    uVar8 = 0;
    uVar13 = 0;
    do {
      iVar12 = (uVar8 & 7) * 8;
      bVar5 = (byte)(0x693df995 >> iVar12) | (byte)(0x25b94f45 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
      uVar14 = iVar12 - 0x20;
      if (-1 < (int)uVar14) {
        bVar5 = (byte)(0x25b94f45 >> (uVar14 & 0xff));
      }
      *(byte *)(iVar7 + uVar8) = *(byte *)(iVar7 + uVar8) ^ bVar5;
      bVar15 = 0xfffffffe < uVar8;
      bVar1 = uVar13 == 0;
      bVar2 = (0x10 < uVar8) <= uVar13;
      uVar8 = uVar8 + 1;
      uVar13 = uVar13 + bVar15;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar7 + 0x12) = 0;
  }
  uVar8 = imp_strlen(iVar7);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar8 < 0xb) {
    uVar13 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar8 << 1));
    if (uVar8 == 0) goto LAB_716ed590;
  }
  else {
    uVar13 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_2c = (uVar8 | 7) + 2;
    uStack_28 = uVar8;
    uStack_24 = uVar13;
  }
  imp___aeabi_memmove(uVar13,iVar7,uVar8);
LAB_716ed590:
  *(undefined1 *)(uVar13 + uVar8) = 0;
  iVar7 = FUN_717c5e7c(&uStack_2c);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  if (iVar7 == 0) {
    if (DAT_711f6968 != 2) {
      return 0;
    }
    uVar9 = (*DAT_700c893c)(param_1);
    return uVar9;
  }
  return 0;
}


// =========================================================================
// Function: FUN_716edc78
// Entry: 0x716edc78 | Size: 76 bytes
// =========================================================================

longlong FUN_716edc78(undefined4 param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)DAT_711f6c88;
  if ((uVar1 == 0) && (uVar1 = FUN_71508cb0(), uVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x716edcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*DAT_700c8950)(param_1);
    return lVar2;
  }
  return (ulonglong)uVar1 << 0x20;
}


// =========================================================================
// Function: FUN_716edd38
// Entry: 0x716edd38 | Size: 1992 bytes
// =========================================================================

void FUN_716edd38(void)

{
  undefined4 *puVar1;
  
  DAT_700c88ec = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &LAB_716e8f5c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88f0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e8ff0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88f4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e9164;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88f8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e92d8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c88fc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e94b4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8900 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e94e8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8904 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e9650;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8908 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716e97b8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c890c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ea058;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8910 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ea50c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8914 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ea860;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8918 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716eb1a0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c891c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ebb88;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8920 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ebc00;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8924 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ebe04;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8928 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ebf7c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c892c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ec0fc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8930 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ec27c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8934 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ec3e0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8938 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ec54c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ecf80;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c893c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716ed430;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ed90c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8940 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ed964;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8944 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716edae4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8948 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716edc38;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c894c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716edc58;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8950 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716edc78;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716f79d0
// Entry: 0x716f79d0 | Size: 316 bytes
// =========================================================================

undefined4 FUN_716f79d0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  byte bVar5;
  
  if ((((param_2 != 0) && (DAT_711f697c == param_2)) && (iVar2 = FUN_713c301c(0), iVar2 == param_2))
     && ((piVar4 = (int *)(param_2 + *(char *)(param_2 + 0x71c) * 0x1c + 0x5a4), *piVar4 == 0x18 &&
         (iVar2 = FUN_715b9eec(param_2,piVar4), iVar2 != 0)))) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      bVar1 = false;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x10) & 0xfe;
      bVar1 = bVar5 == 2;
      if (param_4 == 7 && bVar5 == 2) {
        *(undefined1 *)(param_1 + 9) = 1;
        return 1;
      }
    }
    if (((param_4 & 0xfffffffe) == 2 && !bVar1) &&
       (iVar2 = FUN_715ba454(param_1,param_2,param_3), iVar2 != 0)) {
      DAT_711f517e = 0;
      param_4 = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x716f7aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*DAT_700c8ab8)(param_1,param_2,param_3,param_4);
  return uVar3;
}


// =========================================================================
// Function: FUN_716f7df4
// Entry: 0x716f7df4 | Size: 292 bytes
// =========================================================================

undefined4 FUN_716f7df4(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (DAT_711a3938 == 0) {
LAB_716f7ea0:
    iVar2 = FUN_715ba454();
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f6970);
    uVar1 = DAT_711f6974;
    if (iVar2 != 0) {
      puVar3 = &DAT_711f6975;
      goto LAB_716f7ee8;
    }
  }
  else {
    piVar5 = (int *)(DAT_711a3938 + 0x1389c);
    iVar2 = *piVar5;
    if (iVar2 == 0) {
      iVar2 = FUN_713c301c(0);
      if (iVar2 == 0) {
        iVar2 = *piVar5;
        if (iVar2 == 0) goto LAB_716f7ea0;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar2 = FUN_715ba834();
        *piVar5 = iVar2;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x8c);
    if ((((iVar2 == 0) || ((*(uint *)(iVar2 + 0x484) & 0x100) != 0)) ||
        (*(int *)(iVar2 + 0x440) == 0)) ||
       (((*(uint *)(iVar2 + 0x484) & 0x10) == 0 && (iVar2 = FUN_713c067c(), iVar2 == 0))))
    goto LAB_716f7ea0;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711f6970);
    uVar1 = 0;
  }
  puVar3 = &DAT_711f6974;
  DAT_711f6975 = uVar1;
LAB_716f7ee8:
  *puVar3 = 0;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711f6970);
  uVar4 = (*DAT_700c8ac8)();
  FUN_716e71a0();
  return uVar4;
}


// =========================================================================
// Function: FUN_716f814c
// Entry: 0x716f814c | Size: 352 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716f814c(undefined4 param_1)

{
  int iVar1;
  int unaff_r8;
  undefined1 auStack_161 [3];
  undefined1 *puStack_15e;
  undefined4 uStack_14f;
  undefined1 auStack_13a [258];
  undefined4 uStack_38;
  char cStack_34;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  iVar1 = FUN_713c301c(0);
  if (unaff_r8 == iVar1) {
    if ((uint)(*DAT_70b4204c - DAT_711f6a84) < 1000) {
      *DAT_70b88a74 = 0;
    }
    else {
      iStack_28 = 0x800;
      uStack_14f = 0;
      cStack_34 = '\x01';
      puStack_15e = auStack_13a;
      uStack_38 = 0;
      DAT_711f6a84 = *DAT_70b4204c;
      (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                ((int *)*DAT_711f6d58,0x1c,auStack_161,1,8,9,0,0xffffffff,0xffff,0xffff,0,0);
      if ((cStack_34 != '\0') && (0x800 < iStack_28)) {
        imp_free(puStack_15e);
      }
      (*DAT_700c8acc)(param_1);
    }
  }
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_24);
  }
  return;
}


// =========================================================================
// Function: FUN_716f8418
// Entry: 0x716f8418 | Size: 52 bytes
// =========================================================================

undefined4 FUN_716f8418(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71508cb0();
  if (iVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x716f8448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_700c8ad0)(param_1);
  return uVar2;
}


// =========================================================================
// Function: FUN_716f84a0
// Entry: 0x716f84a0 | Size: 1952 bytes
// =========================================================================

void FUN_716f84a0(void)

{
  undefined4 *puVar1;
  
  DAT_711f6998 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = &LAB_716eede4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_711f699c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716efb48;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a74 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f08a8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a78 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f0e2c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a7c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f13dc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a80 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f229c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a84 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f2f9c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a88 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f3c94;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a8c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f41ec;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a90 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f44bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a94 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f45f4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a98 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f4b20;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8a9c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f504c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aa0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f56bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aa4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f5948;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aa8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f6198;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8aac = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f68d4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ab0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7178;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ab4 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f78dc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ab8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f79d0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8abc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7bd8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ac0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7cf4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7d3c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ac4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716f7dc0;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ac8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f7df4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8acc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f814c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ad0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f8418;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716f9878
// Entry: 0x716f9878 | Size: 156 bytes
// =========================================================================

undefined4 FUN_716f9878(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_711f6d58 != 0) {
    iVar4 = *(int *)(DAT_711f6d58 + 0x20);
  }
  if ((((DAT_711f6d58 != 0 && iVar4 != 0) && (uVar3 = FUN_7173c750(iVar4), uVar3 != 0xffff)) &&
      (uVar3 >> 3 < 0x7d)) && (*(char *)(*(int *)(DAT_711f6d58 + 0x20) + uVar3) != '\0')) {
    iVar4 = *(int *)(*(int *)(DAT_711f6d58 + 0x20) + uVar3 * 4 + 1000);
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0x10);
    }
    if (iVar4 != 0 && cVar1 != '\0') {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x716f98a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_700c8df4)(param_1,param_2);
  return uVar2;
}


// =========================================================================
// Function: FUN_716f9988
// Entry: 0x716f9988 | Size: 156 bytes
// =========================================================================

undefined4 FUN_716f9988(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_711f6d58 != 0) {
    iVar4 = *(int *)(DAT_711f6d58 + 0x20);
  }
  if ((((DAT_711f6d58 != 0 && iVar4 != 0) && (uVar3 = FUN_7173c750(iVar4), uVar3 != 0xffff)) &&
      (uVar3 >> 3 < 0x7d)) && (*(char *)(*(int *)(DAT_711f6d58 + 0x20) + uVar3) != '\0')) {
    iVar4 = *(int *)(*(int *)(DAT_711f6d58 + 0x20) + uVar3 * 4 + 1000);
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0x10);
    }
    if (iVar4 != 0 && cVar1 != '\0') {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x716f99b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_700c8df8)(param_1,param_2);
  return uVar2;
}


// =========================================================================
// Function: FUN_716f9a98
// Entry: 0x716f9a98 | Size: 80 bytes
// =========================================================================

void FUN_716f9a98(void)

{
  int iVar1;
  
  iVar1 = DAT_70b41f74;
  if (*(int *)(DAT_70b41f74 + 0x24) == 1) {
    return;
  }
  FUN_7135d734(1,0xc);
  FUN_7135ceec(0);
  while (*(int *)(iVar1 + 0x24) != 1) {
    imp_usleep(0x1e);
  }
  return;
}


// =========================================================================
// Function: FUN_716f9b74
// Entry: 0x716f9b74 | Size: 60 bytes
// =========================================================================

void FUN_716f9b74(void)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = DAT_70ffc988;
  uVar1 = *(undefined1 *)(*DAT_70ffc988 + 2);
  *(undefined1 *)(*DAT_70ffc988 + 2) = 0;
  (*DAT_700c8dfc)();
  *(undefined1 *)(*piVar2 + 2) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_716f9c08
// Entry: 0x716f9c08 | Size: 44 bytes
// =========================================================================

undefined4 FUN_716f9c08(undefined4 param_1,int param_2)

{
  (*DAT_700c8e00)(param_1,param_2,param_2 != 0);
  return param_1;
}


// =========================================================================
// Function: FUN_716f9c6c
// Entry: 0x716f9c6c | Size: 64 bytes
// =========================================================================

void FUN_716f9c6c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  (*DAT_700c8e04)(param_1);
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}


// =========================================================================
// Function: FUN_716f9ce4
// Entry: 0x716f9ce4 | Size: 232 bytes
// =========================================================================

undefined4 FUN_716f9ce4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_711a3938 == 0) goto LAB_716f9db8;
  piVar5 = (int *)(DAT_711a3938 + 0x1389c);
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    iVar4 = FUN_713c301c(0);
    if (iVar4 == 0) {
      iVar4 = *piVar5;
    }
    else {
      iVar4 = thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar5 = iVar1;
    }
  }
  if (*(int *)(iVar4 + 0x8c) != param_1) {
    iVar4 = *(int *)(DAT_711f6d58 + 0xac);
    uVar2 = FUN_71796d54(iVar4,param_1);
    if (0x3ec < uVar2) goto LAB_716f9db8;
    iVar1 = *(int *)(iVar4 + uVar2 * 4 + 0x1f8c);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x10);
    }
    if (iVar1 == 0 || iVar4 == 0) goto LAB_716f9db8;
  }
  iVar1 = FUN_715d07a0(iVar4);
  if ((iVar1 != 0) || (iVar4 = FUN_715d0c0c(iVar4), iVar4 != 0)) {
    return 0;
  }
LAB_716f9db8:
                    /* WARNING: Could not recover jumptable at 0x716f9dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*DAT_700c8e08)(param_1);
  return uVar3;
}


// =========================================================================
// Function: FUN_716f9eec
// Entry: 0x716f9eec | Size: 68 bytes
// =========================================================================

void FUN_716f9eec(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_7149f1c0(*(int *)(*param_1 + 0x440) + 4);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x716f9f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_700c8e0c)(param_1,param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_716f9f84
// Entry: 0x716f9f84 | Size: 212 bytes
// =========================================================================

undefined4 FUN_716f9f84(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (DAT_711f6d58 != 0) {
    iVar1 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (DAT_711f6d58 == 0 || iVar1 == 0) {
    return 0x3f800000;
  }
  piVar2 = (int *)(DAT_711a3938 + 0x1389c);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    iVar1 = FUN_713c301c(0);
    if (iVar1 == 0) {
      iVar1 = *piVar2;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar2 = iVar1;
    }
  }
  if (*(int *)(iVar1 + 0x8c) != param_1) {
    iVar1 = FUN_71796d54(*(undefined4 *)(DAT_711f6d58 + 0xac),param_1);
    return *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(DAT_711f6d58 + 0xac) + iVar1 * 4 + 0x1f8c) + 0x10) + 0xe4);
  }
  return *(undefined4 *)(iVar1 + 0xe4);
}


// =========================================================================
// Function: FUN_716fa130
// Entry: 0x716fa130 | Size: 84 bytes
// =========================================================================

void FUN_716fa130(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_715188d8(param_1,*(undefined4 *)(param_1 + *(char *)(param_1 + 0x71c) * 0x1c + 0x5a4))
  ;
  uVar1 = FUN_7171fc7c(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x716fa180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e10)(param_1,uVar1);
  return;
}


// =========================================================================
// Function: FUN_716fa1f4
// Entry: 0x716fa1f4 | Size: 724 bytes
// =========================================================================

void FUN_716fa1f4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_716f9a98;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8df4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9878;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8df8 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9988;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e00 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9c08;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e10 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fa130;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8dfc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9b74;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e04 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9c6c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e08 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9ce4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e0c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9eec;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9f84;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716f9f84;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: DhjuPzPxeNXbKTQvoqMp
// Entry: 0x716fa7a0 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DhjuPzPxeNXbKTQvoqMp(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0ef7c;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_716fa81c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_716fa81c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: HNDyLdQYTwWugHTEQUtC
// Entry: 0x716fa910 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HNDyLdQYTwWugHTEQUtC(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0efa0;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_716fa98c;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_716fa98c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: klMYvr_NlpKjSRzcVVjtMCQdmdPi
// Entry: 0x716faa80 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void klMYvr_NlpKjSRzcVVjtMCQdmdPi(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0efc4;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_716faafc;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_716faafc:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_716fac60
// Entry: 0x716fac60 | Size: 560 bytes
// =========================================================================

undefined4 FUN_716fac60(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 unaff_r4;
  uint uVar13;
  int unaff_r5;
  int *piVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar8 = unaff_r5;
  if (DAT_711f6d58 != 0) {
    iVar8 = DAT_711a3938;
  }
  if (DAT_711f6d58 != 0 && iVar8 != 0) {
    piVar14 = (int *)(iVar8 + 0x1389c);
    iVar8 = *piVar14;
    if (iVar8 == 0) {
      iVar8 = FUN_713c301c(0);
      if (iVar8 == 0) {
        iVar8 = *piVar14;
        if (iVar8 == 0) goto LAB_713d92dc;
      }
      else {
        iVar8 = thunk_MwhHq(0x3a0);
        iVar15 = FUN_715ba834();
        *piVar14 = iVar15;
      }
    }
    iVar15 = thunk_FUN_715bf66c(iVar8);
    if ((iVar15 != 0) && (iVar8 = thunk_FUN_715c3f6c(iVar8), iVar8 != 0)) {
      return 1;
    }
  }
LAB_713d92dc:
  DataMemoryBarrier(0xb);
  if (((DAT_70b88a50 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b88a50), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd114);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd104);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar4 = DAT_70077774;
      uVar3 = DAT_70077770;
      uVar7 = DAT_7007776c;
      *puVar10 = DAT_70077768;
      puVar10[1] = uVar7;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      uVar5 = DAT_70077788;
      uVar4 = DAT_70077784;
      uVar3 = DAT_70077780;
      uVar7 = DAT_7007777c;
      puVar10[4] = DAT_70077778;
      puVar10[5] = uVar7;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      *(undefined2 *)(puVar10 + 9) = DAT_7007778c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d96f8,puVar10,&DAT_70b0e000,uVar7,unaff_r4,unaff_r5);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd114);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bd104);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar6 = (byte)(0xe569d1dd >> iVar15) |
                (byte)(0x750729cb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar6 = (byte)(0x750729cb >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar6;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_70b88a4c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b88a50);
  }
                    /* WARNING: Could not recover jumptable at 0x713d9308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*DAT_70b88a4c)(&DAT_70c242a4);
  return uVar7;
}


// =========================================================================
// Function: FUN_716fae2c
// Entry: 0x716fae2c | Size: 420 bytes
// =========================================================================

void FUN_716fae2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  if (DAT_711f6d58 != 0) {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e2c);
    if (*pcVar1 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e1c);
      *puVar4 = 0xcc7f9a1e;
      puVar4[1] = 0x73ac662;
      *(undefined1 *)(puVar4 + 2) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716fbba0,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e2c);
      *puVar5 = 1;
    }
    pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e1c);
    if (pbVar2[8] != 0) {
      pbVar2[8] = 0;
      *pbVar2 = *pbVar2 ^ 0x5d;
      pbVar2[1] = pbVar2[1] ^ 0xd5;
      pbVar2[2] = pbVar2[2] ^ 0x3b;
      pbVar2[3] = pbVar2[3] ^ 0x89;
      pbVar2[4] = pbVar2[4] ^ 0x35;
      pbVar2[5] = pbVar2[5] ^ 0x87;
      pbVar2[6] = pbVar2[6] ^ 99;
      pbVar2[7] = pbVar2[7] ^ 7;
    }
    iVar3 = imp_strncmp(param_7,pbVar2,7);
    if (iVar3 == 0) {
      FUN_714d4e00(param_2,param_3,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x716faf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e14)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_716fb220
// Entry: 0x716fb220 | Size: 608 bytes
// =========================================================================

void FUN_716fb220(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  
  iVar2 = FUN_713f4324(0xa1,0,1);
  iVar1 = DAT_712017f8;
  if (iVar2 != 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_711f6a8c & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6a8c), iVar2 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e4c);
      if (*pcVar4 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e3c);
        *(undefined1 *)(puVar6 + 3) = 1;
        *puVar6 = 0xaeb087f0;
        puVar6[1] = 0xf15e849b;
        puVar6[2] = 0xd9af8ece;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_716fbbc8,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e4c);
        *puVar7 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e3c);
      if (pbVar5[0xc] != 0) {
        *pbVar5 = *pbVar5 ^ 0x83;
        pbVar5[1] = pbVar5[1] ^ 0xef;
        pbVar5[2] = pbVar5[2] ^ 0xdf;
        pbVar5[3] = pbVar5[3] ^ 0xd9;
        pbVar5[0xc] = 0;
        pbVar5[4] = pbVar5[4] ^ 0xdd;
        pbVar5[5] = pbVar5[5] ^ 0xe5;
        pbVar5[6] = pbVar5[6] ^ 0x2d;
        pbVar5[7] = pbVar5[7] ^ 0x85;
        pbVar5[8] = pbVar5[8] ^ 0x83;
        pbVar5[9] = pbVar5[9] ^ 0xef;
        pbVar5[10] = pbVar5[10] ^ 0xdf;
        pbVar5[0xb] = pbVar5[0xb] ^ 0xd9;
      }
      DAT_711f6a88 = FUN_71885ba4(pbVar5,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_711f6a8c);
    }
    uVar8 = DAT_711f6a88;
    imp___aeabi_memclr4(&iStack_48,0x30);
    uStack_4c = uVar8;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar3 = (int *)thunk_MwhHq(0x3c);
    *piVar3 = 0;
    piVar3[1] = 0;
    FUN_713a10f8(piVar3 + 2,&uStack_4c);
    piVar3[1] = iVar1 + 0x38;
    iVar2 = *(int *)(iVar1 + 0x38);
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    *(int **)(iVar1 + 0x38) = piVar3;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
    if (iStack_30 != 0) {
      iStack_2c = iStack_30;
      thunk_qNQrlu();
    }
    if (iStack_3c != 0) {
      iStack_38 = iStack_3c;
      thunk_qNQrlu();
    }
    if (iStack_48 != 0) {
      iStack_44 = iStack_48;
      thunk_qNQrlu();
    }
  }
  return;
}


// =========================================================================
// Function: FUN_716fb7f4
// Entry: 0x716fb7f4 | Size: 500 bytes
// =========================================================================

void FUN_716fb7f4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_716fac60;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716fabf0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fac28;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fb1e8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0xc57a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0x457a0000;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = 0xc57a0000;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e18 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_716fb1ac;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e14 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fae2c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fb220;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716fbcf0
// Entry: 0x716fbcf0 | Size: 4 bytes
// =========================================================================

void FUN_716fbcf0(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x716fbd0c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716fbe8c
// Entry: 0x716fbe8c | Size: 4 bytes
// =========================================================================

void FUN_716fbe8c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x716fbea8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716fc028
// Entry: 0x716fc028 | Size: 4 bytes
// =========================================================================

void FUN_716fc028(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x716fc044 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_716fc0c8
// Entry: 0x716fc0c8 | Size: 488 bytes
// =========================================================================

void FUN_716fc0c8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_700c036c;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar1 = FUN_71ba1b94(DAT_71201738);
  uVar1 = FUN_716fc5a4(&DAT_700c56f8,uVar1);
  DAT_700bbd90 = DAT_700c571c;
  DAT_700bbd94 = DAT_700c5720;
  DAT_700bbd98 = DAT_700c5724;
  DAT_700bbda0 = DAT_700c5710;
  DAT_700bbda4 = DAT_700c5714;
  DAT_700bbda8 = DAT_700c5718;
  iVar2 = FUN_71ba2d70(uVar4,0x3f800000);
  uVar3 = FUN_71ba21e8(uVar4,uVar1);
  DAT_700bbd80 = 0x4e6e6b28;
  if (iVar2 != 0) {
    DAT_700bbd80 = uVar3;
  }
  uVar1 = FUN_71ba240c(0x3f800000,uVar1);
  uVar4 = FUN_71ba21e8(uVar4,uVar1);
  DAT_700bbd84 = FUN_71ba13e0(0x3f800000,uVar4);
  uVar4 = DAT_700c582c;
  if (iVar2 == 0) {
    DAT_700bbd84 = 0;
  }
  iVar2 = FUN_71ba2d10(DAT_700c582c,0x3ca3d70a);
  if (iVar2 != 0) {
    uVar4 = 0x3ca3d70a;
  }
  iVar2 = FUN_71ba2d70(uVar4,0x3f7ae148);
  if (iVar2 != 0) {
    uVar4 = 0x3f7ae148;
  }
  DAT_700bbd88 = uVar4;
  uVar1 = FUN_71ba0b38(uVar4,0x3ca3d70a);
  uVar4 = DAT_700c5828;
  iVar2 = FUN_71ba2d10(DAT_700c5828,uVar1);
  if (iVar2 != 0) {
    uVar4 = uVar1;
  }
  iVar2 = FUN_71ba2d70(uVar4,0x3f800000);
  uVar3 = DAT_700c5840;
  uVar1 = DAT_700c5830;
  if (iVar2 != 0) {
    uVar4 = 0x3f800000;
  }
  DAT_700bbdb0 = DAT_700c5704;
  DAT_700bbdb4 = DAT_700c5708;
  DAT_700bbdb8 = DAT_700c570c;
  DAT_700bbd8c = uVar4;
  iVar2 = FUN_71ba2d70(DAT_700c5840,0);
  uVar4 = DAT_700c5834;
  DAT_700bbd9c = 0;
  if (iVar2 != 0) {
    DAT_700bbd9c = uVar3;
  }
  iVar2 = FUN_71ba2d70(DAT_700c5834,0x3d4ccccd);
  DAT_700bbdac = uVar4;
  if (iVar2 == 0) {
    DAT_700bbdac = 0x3d4ccccd;
  }
  iVar2 = FUN_71ba2d70(uVar1,0x3d4ccccd);
  DAT_700bbdbc = 0x3d4ccccd;
  if (iVar2 != 0) {
    DAT_700bbdbc = uVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_716fc5a4
// Entry: 0x716fc5a4 | Size: 264 bytes
// =========================================================================

undefined4 FUN_716fc5a4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_71ba2d30(param_2,0x41a00000);
  if (iVar1 == 0) {
    iVar1 = FUN_71ba2d30(param_2,0x42700000);
    if (iVar1 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x160);
      uVar2 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x164),uVar5);
      uVar4 = 0xc2700000;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x15c);
      uVar2 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x160),uVar5);
      uVar4 = 0xc1a00000;
    }
    param_2 = FUN_71ba0b38(param_2,uVar4);
    uVar4 = 0x3ccccccd;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x158);
    uVar2 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x15c),uVar5);
    uVar4 = 0x3d4ccccd;
  }
  uVar4 = FUN_71ba21e8(param_2,uVar4);
  uVar2 = FUN_71ba21e8(uVar2,uVar4);
  uVar2 = FUN_71ba0b38(uVar2,uVar5);
  iVar1 = FUN_71ba2d10(uVar2,0);
  iVar3 = FUN_71ba2d70(uVar2,0x3f7ae148);
  if (iVar3 != 0) {
    uVar2 = 0x3f7ae148;
  }
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_716fc83c
// Entry: 0x716fc83c | Size: 96 bytes
// =========================================================================

void FUN_716fc83c(void)

{
  FUN_71413b60(0xe,1);
  FUN_71413b60(0xc,1);
  FUN_71413b60(0x14,2);
  if (*DAT_70b46f00 == 0) {
    FUN_71413b60(0x1e,0x8c);
  }
                    /* WARNING: Could not recover jumptable at 0x716fc898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e60)();
  return;
}


// =========================================================================
// Function: FUN_716fc964
// Entry: 0x716fc964 | Size: 80 bytes
// =========================================================================

void FUN_716fc964(void)

{
  int in_r3;
  int *piVar1;
  
  piVar1 = *(int **)(in_r3 + 4);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *(undefined4 *)(in_r3 + 4) = 0;
    (*DAT_700c8e64)();
    *(int **)(in_r3 + 4) = piVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x716fc990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e64)();
  return;
}


// =========================================================================
// Function: FUN_716fcae4
// Entry: 0x716fcae4 | Size: 408 bytes
// =========================================================================

void FUN_716fcae4(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_711f6a98 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711f6a98), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8eac,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e9c);
      *(undefined1 *)(puVar10 + 0xf) = 1;
      uVar6 = DAT_70084cf0;
      uVar5 = DAT_70084cec;
      uVar4 = DAT_70084ce8;
      uVar3 = DAT_70084ce4;
      *puVar10 = DAT_70084ce0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70084d04;
      uVar5 = DAT_70084d00;
      uVar4 = DAT_70084cfc;
      uVar3 = DAT_70084cf8;
      puVar10[5] = DAT_70084cf4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70084d18;
      uVar5 = DAT_70084d14;
      uVar4 = DAT_70084d10;
      uVar3 = DAT_70084d0c;
      puVar10[10] = DAT_70084d08;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_716ff5f4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8eac);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c8e9c);
    if (*(char *)(iVar8 + 0x3c) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf19fff5f >> iVar14) |
                (byte)(0xbdb0dcf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xbdb0dcf >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3a < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3c) = 0;
    }
    DAT_711f6a94 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711f6a98);
  }
                    /* WARNING: Could not recover jumptable at 0x716fcb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_711f6a94)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_716fcf14
// Entry: 0x716fcf14 | Size: 200 bytes
// =========================================================================

undefined4 FUN_716fcf14(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piStack_14;
  
  iVar1 = *DAT_70ffce1c;
  FUN_716fcae4(1,&piStack_14);
  if (piStack_14 == param_2) {
    FUN_71423938(1,0);
  }
  piVar2 = (int *)((int)param_2 + iVar1);
  if (((char)param_2[8] == '\x05') && (piVar2[6] != 0)) {
    FUN_7137d4f4();
  }
  else if (*piVar2 != 0) {
    FUN_7138bca4();
  }
  piVar2[6] = 0;
  *piVar2 = 0;
  if ((int *)*param_2 == param_2) {
    if (param_2[1] != 0) {
      imp_free();
    }
    if (param_2[2] != 0) {
      imp_free();
    }
  }
  imp___aeabi_memclr(param_2,0x34);
  return 1;
}


// =========================================================================
// Function: FUN_716fd170
// Entry: 0x716fd170 | Size: 748 bytes
// =========================================================================

void FUN_716fd170(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  (*DAT_700c8e70)();
  piVar4 = (int *)*param_1;
  uVar1 = param_1[6];
  if ((uVar1 & 0x7fe) != 0) {
    uVar1 = 0;
    do {
      if (((uint)param_1[6] >> (uVar1 & 0xff) & 2) != 0) {
        uVar2 = FUN_713a57bc(uVar1);
        (**(code **)(*piVar4 + 0xc))(piVar4,uVar1 + 5,uVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 10);
    uVar1 = param_1[6];
  }
  if ((uVar1 & 0x8000) != 0) {
    uStack_24 = FUN_713a5804();
    (**(code **)(*piVar4 + 8))(piVar4,0x19,&uStack_24,1);
  }
  uVar2 = DAT_70b466f8;
  iVar3 = FUN_71ba2cf0(DAT_70b466f8,0);
  uStack_24 = DAT_70b466f4;
  if (iVar3 == 0) {
    uStack_24 = uVar2;
  }
  (**(code **)(*piVar4 + 8))(piVar4,0x1a,&uStack_24,1);
  if ((*(byte *)((int)param_1 + 0xb) & 1) != 0) {
    if (DAT_711acb94 != 0) {
      uStack_28 = 0;
      if (*(char *)(DAT_711acb94 + 0x20) != '\0') {
        uStack_28 = 0x3f800000;
      }
      (**(code **)(*piVar4 + 8))(piVar4,0x25,&uStack_28,1);
    }
    uVar2 = FUN_713a5890();
    (**(code **)(*piVar4 + 8))(piVar4,0x1b,uVar2,3);
  }
  uVar1 = param_1[6];
  if ((uVar1 & 0x60000) != 0) {
    uVar2 = FUN_713a5974(0);
    (**(code **)(*piVar4 + 8))(piVar4,0x1d,uVar2,4);
    if ((uVar1 & 0x20000) != 0) {
      uVar2 = FUN_713a5974(1);
      (**(code **)(*piVar4 + 8))(piVar4,0x1e,uVar2,4);
      uVar2 = FUN_713a5974(2);
      (**(code **)(*piVar4 + 8))(piVar4,0x1f,uVar2,4);
    }
    uVar1 = param_1[6];
  }
  if ((uVar1 & 0x10000) != 0) {
    uVar2 = FUN_713a5930();
    (**(code **)(*piVar4 + 8))(piVar4,0x1c,uVar2,2);
  }
  if ((*(byte *)((int)param_1 + 9) & 4) != 0) {
    uStack_28 = 0;
    if (DAT_711ad149 != '\0') {
      uStack_28 = 0x3f800000;
    }
    (**(code **)(*piVar4 + 8))(piVar4,0x24,&uStack_28,1);
    if ((param_2 != 0) || (iVar3 = FUN_713a6840(), iVar3 != 0)) {
      (**(code **)(*piVar4 + 8))(piVar4,0x20,&DAT_700bbd80,4);
      (**(code **)(*piVar4 + 8))(piVar4,0x21,&DAT_700bbd90,4);
      (**(code **)(*piVar4 + 8))(piVar4,0x22,&DAT_700bbda0,4);
      (**(code **)(*piVar4 + 8))(piVar4,0x23,&DAT_700bbdb0,4);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_716fd690
// Entry: 0x716fd690 | Size: 60 bytes
// =========================================================================

int FUN_716fd690(int param_1)

{
  (*DAT_700c8e74)();
  if (((*(byte *)(param_1 + 0x66) & 1) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_716fd75c
// Entry: 0x716fd75c | Size: 92 bytes
// =========================================================================

int FUN_716fd75c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (*DAT_700c8e78)(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    imp_strncpy(iVar1 + 0x108,param_2,0x1e);
    *(undefined1 *)(iVar1 + 0x125) = 0;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_716fd80c
// Entry: 0x716fd80c | Size: 92 bytes
// =========================================================================

int FUN_716fd80c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (*DAT_700c8e7c)(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    imp_strncpy(iVar1 + 0x108,param_2,0x1e);
    *(undefined1 *)(iVar1 + 0x125) = 0;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_716fd8bc
// Entry: 0x716fd8bc | Size: 80 bytes
// =========================================================================

void FUN_716fd8bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  imp___strcpy_chk(&DAT_711f3025,param_1 + 0x108,0x1e);
  (*DAT_700c8e80)(param_1,param_2,param_3);
  DAT_711f3025 = 0;
  return;
}


// =========================================================================
// Function: FUN_716fd980
// Entry: 0x716fd980 | Size: 68 bytes
// =========================================================================

int FUN_716fd980(int param_1)

{
  imp___strcpy_chk(&DAT_711f3025,param_1 + 0x108,0x1e);
  (*DAT_700c8e84)(param_1);
  DAT_711f3025 = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_716fda38
// Entry: 0x716fda38 | Size: 768 bytes
// =========================================================================

void FUN_716fda38(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_714e8628(*(undefined2 *)(param_1 + 0x26));
  if (iVar3 != 0) {
    return;
  }
  if (((*DAT_70ffd318 != '\0') && ((*(byte *)(param_1 + 0x3a) & 7) == 4)) &&
     (iVar3 = FUN_714e8928(param_1), iVar3 != 0)) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x3a) & 7;
  if (bVar2 == 1) {
    iVar3 = *(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4);
    if (iVar3 != 0) {
      uVar5 = (uint)*(byte *)(iVar3 + 0x29);
      if (((uVar5 & 0x7f) >> 3) - 1 < 2) {
        if (DAT_70ffd31c != '\0') {
          return;
        }
        iVar6 = *(int *)(DAT_70c38f30 + 8);
        if (iVar6 == 3) {
          uVar4 = 0x3f4ccccd;
        }
        else if (iVar6 == 2) {
          uVar4 = 0x3f800000;
        }
        else {
          uVar4 = 0x3fc00000;
          if (iVar6 == 1) {
            uVar4 = 0x3fa66666;
          }
        }
        FUN_713a807c(uVar4);
        uVar5 = (uint)*(byte *)(iVar3 + 0x29);
      }
      iVar3 = DAT_70c38f30;
      if ((uVar5 & 1) != 0) {
        iVar6 = *(int *)(DAT_70c38f30 + 8);
        if (iVar6 == 3) {
          uVar4 = 0xbff33333;
        }
        else if (iVar6 == 2) {
          uVar4 = 0xbf99999a;
        }
        else {
          uVar4 = 0xbf000000;
          if (iVar6 == 1) {
            uVar4 = 0xbf4ccccd;
          }
        }
        FUN_713a807c(uVar4);
        uVar4 = 0xff;
        if (*(int *)(iVar3 + 8) == 3) {
          uVar4 = 1;
        }
        FUN_713a8034(uVar4);
      }
      if (DAT_70ffd31c == '\0') {
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
        if (DAT_71201730 == 0) goto LAB_716fdc20;
        iVar3 = DAT_71201730 + -1;
      }
      else {
        FUN_713a807c(0x3fcccccd);
        iVar3 = 0xff;
      }
      FUN_713a8034(iVar3);
    }
  }
  else if (bVar2 == 3) {
    FUN_713a807c(0x3f800000);
  }
  else if (bVar2 == 2) {
    FUN_71413b60(0x14,2);
    FUN_713a807c(0x3f000000);
  }
LAB_716fdc20:
  piVar1 = DAT_70b46448;
  iVar6 = *DAT_70b46448;
  *(undefined4 *)(iVar6 + 0x278) = 0x37;
  **(undefined4 **)(iVar6 + 0x274) = 0x37;
  iVar3 = *(int *)(iVar6 + 0x274);
  *(int *)(iVar6 + 0x274) = iVar3 + 4;
  *(int *)(iVar3 + 4) = (int)*(short *)(param_1 + 0x26);
  iVar3 = *(int *)(iVar6 + 0x274);
  *(int *)(iVar6 + 0x274) = iVar3 + 4;
  *(char **)(iVar3 + 4) = s_Unknown_7006305d;
  uVar5 = *(int *)(iVar6 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar6 + 0x270) = uVar5;
  *(uint *)(iVar6 + 0x274) = uVar5;
  FUN_7139bc08(iVar6);
  if (*(uint *)(iVar6 + 0x264) < *(int *)(iVar6 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar6);
  }
  (*DAT_700c8e88)(param_1);
  FUN_713a80c4();
  FUN_713a8034(0xff);
  iVar6 = *piVar1;
  *(undefined4 *)(iVar6 + 0x278) = 0x37;
  **(undefined4 **)(iVar6 + 0x274) = 0x37;
  iVar3 = *(int *)(iVar6 + 0x274);
  *(int *)(iVar6 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = 0xffffffff;
  iVar3 = *(int *)(iVar6 + 0x274);
  *(int *)(iVar6 + 0x274) = iVar3 + 4;
  *(char **)(iVar3 + 4) = s_Unknown_7006305d;
  uVar5 = *(int *)(iVar6 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar6 + 0x270) = uVar5;
  *(uint *)(iVar6 + 0x274) = uVar5;
  FUN_7139bc08(iVar6);
  if (*(int *)(iVar6 + 0x274) + 0x401U <= *(uint *)(iVar6 + 0x264)) {
    return;
  }
  FUN_7139a77c(iVar6);
  return;
}


// =========================================================================
// Function: FUN_716fe088
// Entry: 0x716fe088 | Size: 148 bytes
// =========================================================================

void FUN_716fe088(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((*(ushort *)(param_1 + 0x26) - 0x4606 < 2) || (*(ushort *)(param_1 + 0x26) == 0x4872)) {
    uVar4 = *(uint *)(param_1 + 0x4a0);
    iVar1 = FUN_71ba2d30(uVar4,0);
    uVar2 = FUN_71ba21e8(uVar4 & 0x7fffffff,0x3f000000);
    uVar3 = FUN_71ba0b38(uVar2,0x3f000000);
    uVar2 = 0x3f000000;
    if (iVar1 == 0) {
      uVar2 = uVar3;
    }
    FUN_713c6588(param_1,uVar2);
    if ((*(ushort *)(param_1 + 0x26) & 0xfffe) == 0x4606) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x716fe118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e8c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_716fe258
// Entry: 0x716fe258 | Size: 120 bytes
// =========================================================================

void FUN_716fe258(int param_1)

{
  uint uVar1;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar1 = 0x10000000;
  if (DAT_71201734 == 0) {
    if (DAT_711acb94 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(byte *)(DAT_711acb94 + 0x20) << 0x1c;
    }
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xefffffff | uVar1;
                    /* WARNING: Could not recover jumptable at 0x716fe2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e94)(param_1);
  return;
}


// =========================================================================
// Function: FUN_716fe380
// Entry: 0x716fe380 | Size: 156 bytes
// =========================================================================

void FUN_716fe380(int param_1)

{
  char cVar1;
  uint uVar2;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar2 = 0x10000000;
  if (DAT_71201734 == 0) {
    cVar1 = '\0';
    if (DAT_711acb94 != 0) {
      cVar1 = *(char *)(DAT_711acb94 + 0x20);
    }
    if (DAT_711acb94 == 0 || cVar1 == '\0') {
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      uVar2 = (uint)(0 < DAT_712016bc) << 0x1c;
    }
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xefffffff | uVar2;
                    /* WARNING: Could not recover jumptable at 0x716fe418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8e98)(param_1);
  return;
}


// =========================================================================
// Function: FUN_716fe504
// Entry: 0x716fe504 | Size: 104 bytes
// =========================================================================

void FUN_716fe504(void)

{
  undefined1 uVar1;
  
  FUN_71453ee8();
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar1 = 1;
  if (DAT_71201734 == 0) {
    if (DAT_711acb94 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(DAT_711acb94 + 0x20);
    }
  }
  *(undefined1 *)(*DAT_70ffc988 + 2) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_716fe638
// Entry: 0x716fe638 | Size: 108 bytes
// =========================================================================

void FUN_716fe638(void)

{
  char cVar1;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_71201734 == 0) {
    cVar1 = '\0';
    if (DAT_711acb94 != 0) {
      cVar1 = *(char *)(DAT_711acb94 + 0x20);
    }
    if (DAT_711acb94 == 0 || cVar1 == '\0') {
      return;
    }
  }
  *(undefined1 *)(*DAT_70ffc988 + 2) = 1;
  return;
}


// =========================================================================
// Function: FUN_716fe754
// Entry: 0x716fe754 | Size: 100 bytes
// =========================================================================

void FUN_716fe754(void)

{
  char cVar1;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  if (DAT_71201734 == 0) {
    cVar1 = '\0';
    if (DAT_711acb94 != 0) {
      cVar1 = *(char *)(DAT_711acb94 + 0x20);
    }
    if (DAT_711acb94 == 0 || cVar1 == '\0') {
      return;
    }
  }
  FUN_7140d3c4(*DAT_70ffc978);
  return;
}


// =========================================================================
// Function: FUN_716fe884
// Entry: 0x716fe884 | Size: 1832 bytes
// =========================================================================

void FUN_716fe884(void)

{
  undefined4 *puVar1;
  
  DAT_700c8e70 = *DAT_71201884 + DAT_71201880 | 1;
  DAT_71201884 = DAT_71201884 + 1;
  *DAT_7120188c = FUN_716fd170;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fc0c8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e60 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fc83c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e5c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fc7f8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e68 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fca0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fca7c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e64 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fc964;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  *DAT_70ffc984 = 1;
  *DAT_7120188c = FUN_716fcf14;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd0d8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e74 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd690;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd704;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ff5a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716ff5a4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e78 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd75c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e7c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd80c;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e80 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd8bc;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e84 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fd980;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e6c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fd100;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e88 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fda38;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e94 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe258;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe754;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e98 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe380;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe504;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe504;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe638;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e8c = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_716fe088;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8e90 = *DAT_71201884 + DAT_71201880;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_716fe1c4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71454734;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_716ff644
// Entry: 0x716ff644 | Size: 2440 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x716ffcec) */
/* WARNING: Removing unreachable block (ram,0x716ff92c) */
/* WARNING: Removing unreachable block (ram,0x716ffb20) */
/* WARNING: Removing unreachable block (ram,0x716ffebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_716ff644(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  *DAT_7120188c = FUN_71467a0c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146aaf0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146b664;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71468cb4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714689dc;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71464c60;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146cd3c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146d5b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7146a7e0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7146a720;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71467e50;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714650b4;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab9b8b >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x3e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x3e;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccffff) + DAT_7120187c) = &DAT_7100e1cc;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab8714 >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x40;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff8) + DAT_7120187c) = &DAT_7100d22c;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab747d >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x42;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfff9) + DAT_7120187c) = &DAT_7100cf0c;
  uStack_48 = 0xd8;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x2e;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab94da >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x44;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab94da;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabf5) >> 2 ^ 0xacad84;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x44;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  uVar3 = 0x2e;
  do {
    iVar4 = (int)(char)bStack_51;
    bStack_51 = bStack_51 + 1;
    uVar3 = uVar3 ^ (iVar4 + 0xccaaff) - uVar3 ^ 0xd8;
  } while (bStack_51 < 8);
  *(undefined4 **)((auStack_50[0] ^ 0xccfffa) + DAT_7120187c) = &DAT_7100d164;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iVar2,_ext___stack_chk_guard,uVar3,0);
}


// =========================================================================
// Function: FUN_71700300
// Entry: 0x71700300 | Size: 296 bytes
// =========================================================================

void FUN_71700300(void)

{
  undefined4 *puVar1;
  
  *DAT_710eb188 = 0;
  *DAT_7120188c = FUN_714b5e7c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b5f6c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b603c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b6104;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b7808;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b61d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_714b73b8;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71700580
// Entry: 0x71700580 | Size: 60 bytes
// =========================================================================

void FUN_71700580(void)

{
  *DAT_7120188c = &DAT_71700634;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717006c8
// Entry: 0x717006c8 | Size: 72 bytes
// =========================================================================

void FUN_717006c8(void)

{
  (*DAT_700c8ec0)();
  return;
}


// =========================================================================
// Function: FUN_71700748
// Entry: 0x71700748 | Size: 68 bytes
// =========================================================================

void FUN_71700748(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (param_3 == 0xd) {
    iVar1 = 9;
  }
  if (param_3 == 0xc) {
    iVar1 = 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x71700788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_700c8ec4)(param_1,param_2,iVar1);
  return;
}


// =========================================================================
// Function: FUN_717007c4
// Entry: 0x717007c4 | Size: 336 bytes
// =========================================================================

void FUN_717007c4(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &DAT_71700aac;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71700ae4;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ec0 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_717006c8;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ec4 = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71700748;
  DAT_71201890 = DAT_71201890 + 1;
  DAT_700c8ebc = *DAT_71201884 + DAT_71201880 | 1;
  puVar1 = DAT_7120188c + 1;
  DAT_71201884 = DAT_71201884 + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_7170066c;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_71700b1c
// Entry: 0x71700b1c | Size: 836 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71700c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71700b1c(void)

{
  undefined4 *puVar1;
  int iVar2;
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_28;
  
  iVar2 = _ext___stack_chk_guard;
  iStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0x1e;
  uStack_48 = 199;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xab66dd >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xab66dd;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabda) >> 2 ^ 0xacad73;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0x34;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
  *(undefined1 **)((auStack_50[0] ^ 0xccffe5) + DAT_7120187c) = &DAT_70b2fdc0;
  *DAT_7120188c = FUN_7132634c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713273d8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713274b8;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71327738;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_713277c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71327804;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71327918;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  if (_ext___stack_chk_guard == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_71701034
// Entry: 0x71701034 | Size: 60 bytes
// =========================================================================

void FUN_71701034(void)

{
  *DAT_7120188c = FUN_71322c04;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717010e8
// Entry: 0x717010e8 | Size: 240 bytes
// =========================================================================

void FUN_717010e8(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = &LAB_717012f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71701328;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_71701374;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &LAB_717013c0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_7170140c;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = &DAT_71701444;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_7170147c
// Entry: 0x7170147c | Size: 168 bytes
// =========================================================================

void FUN_7170147c(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_71339d10;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713284f0;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_7132fa58;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_71334c20;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717015fc
// Entry: 0x717015fc | Size: 96 bytes
// =========================================================================

void FUN_717015fc(void)

{
  undefined4 *puVar1;
  
  *DAT_7120188c = FUN_713cf2a4;
  DAT_71201890 = DAT_71201890 + 1;
  puVar1 = DAT_7120188c + 1;
  DAT_7120188c = DAT_7120188c + 1;
  *puVar1 = FUN_713ce7dc;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


// =========================================================================
// Function: FUN_717016f4
// Entry: 0x717016f4 | Size: 500 bytes
// =========================================================================

void FUN_717016f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  if (param_1 == 0) {
    return;
  }
  bVar11 = (*(byte *)(param_1 + 0xb) & 1) != 0;
  if (bVar11) {
    unaff_r4 = *(int *)(param_1 + 0x54);
  }
  if (!bVar11 || unaff_r4 == 0) {
    return;
  }
  if (*(int *)(unaff_r4 + 0x24) != 0) {
    return;
  }
  if (*(int *)(unaff_r4 + 0x10) == 0) {
    return;
  }
  iVar2 = FUN_7155f284();
  if ((iVar2 == 0) || (*(char *)(unaff_r4 + 0xd0) != '\0')) {
    iVar5 = *(int *)(unaff_r4 + 0x1c);
  }
  else {
    uVar6 = *(uint *)(unaff_r4 + 0x18);
    iVar10 = *(int *)(unaff_r4 + 0x1c);
    iVar5 = iVar10;
    if (uVar6 == *(uint *)(param_1 + 0x14)) {
      iVar5 = iVar10 + 4;
      iVar8 = imp_malloc(uVar6 * iVar5);
      if (iVar8 == 0) {
        return;
      }
      if (uVar6 != 0) {
        iVar3 = *(int *)(unaff_r4 + 0x10);
        uVar9 = 0;
        iVar7 = iVar8;
        do {
          imp___aeabi_memcpy(iVar7,iVar3,iVar10);
          iVar1 = uVar9 * 4;
          iVar3 = iVar3 + iVar10;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(iVar7 + iVar10) = *(undefined4 *)(iVar2 + iVar1);
          iVar7 = iVar7 + iVar5;
        } while (uVar9 < uVar6);
      }
      iVar2 = 1;
      goto LAB_7170176c;
    }
  }
  iVar8 = *(int *)(unaff_r4 + 0x10);
  iVar2 = 0;
  iVar10 = iVar5;
LAB_7170176c:
  FUN_713a6980();
  FUN_713a6d24(iVar8,*(int *)(unaff_r4 + 0x18) * iVar5,*(int *)(unaff_r4 + 0x18),iVar5);
  iVar7 = 0;
  iVar5 = 0;
  do {
    iVar3 = unaff_r4 - iVar7;
    if (*(char *)(iVar3 + 0x30) != '\0') {
      uVar4 = 0;
      if (*(uint *)(iVar3 + 0x40) < 5) {
        uVar4 = *(undefined4 *)(&DAT_70084d1c + *(uint *)(iVar3 + 0x40) * 4);
      }
      FUN_713a68ec(iVar5,*(undefined4 *)(iVar3 + 0x34),uVar4,*(undefined1 *)(iVar3 + 0x31),
                   *(undefined4 *)(iVar3 + 0x3c));
    }
    iVar7 = iVar7 + -0x14;
    iVar5 = iVar5 + 1;
  } while (iVar7 != -0xb4);
  if (iVar2 == 0) {
    iVar2 = FUN_713a6b6c(0,0);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    FUN_713a68ec(8,4,0x1401,1,iVar10);
    iVar2 = FUN_713a6b6c(0,iVar2);
    if (iVar2 == 0) {
      imp_free(iVar8);
      return;
    }
  }
  *(int *)(param_1 + 0x54) = iVar2;
  FUN_713a6860(unaff_r4);
  return;
}


// =========================================================================
// Function: FUN_71701a54
// Entry: 0x71701a54 | Size: 812 bytes
// =========================================================================

int FUN_71701a54(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  if ((*(uint *)(param_2 + 8) & 0x1000000) != 0) {
    if (1 < *(int *)(param_2 + 0x1c)) {
      *(undefined4 *)(param_2 + 0x1c) = 1;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffff7f | 4;
    }
    FUN_713a6980();
    iVar11 = 0;
    iStack_28 = 0;
    FUN_71428ab4(param_1,&iStack_28,4);
    if (iStack_28 < 1) {
      iStack_44 = -1;
      iStack_48 = -1;
    }
    else {
      iVar7 = 0;
      bVar10 = false;
      iStack_48 = -1;
      iStack_44 = -1;
      do {
        FUN_71428ab4(param_1,&iStack_2c,4);
        FUN_71428ab4(param_1,&uStack_30,4);
        FUN_71428ab4(param_1,&iStack_34,4);
        FUN_71428ab4(param_1,&uStack_38,4);
        FUN_71428ab4(param_1,&iStack_3c,4);
        FUN_71428ab4(param_1,&iStack_40,4);
        iVar11 = iStack_3c;
        if ((iStack_2c == 1) && (bVar10)) {
          bVar10 = true;
        }
        else {
          uVar4 = 0;
          if (uStack_30 < 5) {
            uVar4 = *(undefined4 *)(&DAT_70084d1c + uStack_30 * 4);
          }
          bVar10 = (bool)(iStack_2c == 1 | bVar10);
          FUN_713a68ec(iStack_2c,uStack_38,uVar4,iStack_34 != 0,iStack_40);
          if (iStack_2c == 6) {
            iStack_44 = iStack_40;
          }
          if (iStack_2c == 3) {
            iStack_48 = iStack_40;
          }
          if (iStack_2c == 7) {
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_28);
    }
    iVar8 = *(int *)(param_2 + 0x14) * iVar11;
    iVar1 = imp_malloc(iVar8);
    iVar2 = FUN_71426d90(param_1,iVar1,iVar8);
    iVar7 = DAT_7120187c;
    if (iVar2 == 0) {
      imp_free(iVar1);
      param_2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x14);
      if (iVar2 != 0 && iStack_44 != -1) {
        puVar3 = &DAT_7120187c;
        if ((*(char *)(DAT_7120187c + 0x6bd6a4) != '\0') && (0 < iVar2)) {
          if (iVar11 == 1) {
            pcVar6 = (char *)(iVar1 + iStack_44 + 1);
            cVar5 = *pcVar6;
            iVar9 = iVar2;
            do {
              *pcVar6 = cVar5 + '\f';
              iVar9 = iVar9 + -1;
              cVar5 = pcVar6[1] + '\x10';
              pcVar6[1] = cVar5;
              puVar3 = (undefined4 *)((byte)pcVar6[-1] + 0xc);
              pcVar6[-1] = (char)puVar3;
              pcVar6 = pcVar6 + 1;
            } while (iVar9 != 0);
          }
          else {
            pcVar6 = (char *)(iStack_44 + iVar1 + 1);
            iVar9 = iVar2;
            do {
              iVar9 = iVar9 + -1;
              pcVar6[-1] = pcVar6[-1] + '\f';
              puVar3 = (undefined4 *)((byte)pcVar6[1] + 0x10);
              *pcVar6 = *pcVar6 + '\f';
              pcVar6[1] = (char)puVar3;
              pcVar6 = pcVar6 + iVar11;
            } while (iVar9 != 0);
          }
        }
        if (iStack_48 != -1) {
          puVar3 = (undefined4 *)(uint)*(byte *)(iVar7 + 0x6bd6a5);
        }
        if ((iStack_48 != -1 && puVar3 != (undefined4 *)0x0) && (0 < iVar2)) {
          iVar9 = iVar1 + 3;
          iVar7 = iVar2;
          do {
            *(undefined1 *)(iVar9 + iStack_44) = 0xff;
            iVar7 = iVar7 + -1;
            *(undefined1 *)(iVar9 + iStack_48) = 0xff;
            iVar9 = iVar9 + iVar11;
          } while (iVar7 != 0);
        }
      }
      FUN_713a6d24(iVar1,iVar8,iVar2,iVar11);
      uVar4 = FUN_713a6b6c(1,1);
      *(undefined4 *)(param_2 + 0x54) = uVar4;
    }
  }
  return param_2;
}


// =========================================================================
// Function: FUN_71701f60
// Entry: 0x71701f60 | Size: 60 bytes
// =========================================================================

void FUN_71701f60(void)

{
  *DAT_7120188c = FUN_71701a54;
  DAT_7120188c = DAT_7120188c + 1;
  DAT_71201890 = DAT_71201890 + 1;
  return;
}


