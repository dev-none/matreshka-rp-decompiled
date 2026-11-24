// =========================================================================
// Function: FUN_7140cfb8
// Entry: 0x7140cfb8 | Size: 372 bytes
// =========================================================================

void FUN_7140cfb8(void)

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
  if (((DAT_70ffc950 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc950), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be2b4);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be2a4);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_7007c6c4;
      uVar4 = DAT_7007c6c0;
      uVar3 = DAT_7007c6bc;
      *puVar10 = DAT_7007c6b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007c6d4;
      uVar4 = DAT_7007c6d0;
      uVar3 = DAT_7007c6cc;
      puVar10[4] = DAT_7007c6c8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007c6da;
      *(undefined2 *)(puVar10 + 8) = DAT_7007c6d8;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d3fc0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be2b4);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be2a4);
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
    DAT_70ffc94c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc950);
  }
                    /* WARNING: Could not recover jumptable at 0x7140cfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc94c)();
  return;
}


// =========================================================================
// Function: FUN_7140d3c4
// Entry: 0x7140d3c4 | Size: 396 bytes
// =========================================================================

void FUN_7140d3c4(undefined4 param_1)

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
  if (((DAT_70ffc9c4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9c4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be5f4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be5e4);
      *(undefined1 *)((int)puVar11 + 0x2f) = 1;
      uVar6 = DAT_7007c820;
      uVar5 = DAT_7007c81c;
      uVar4 = DAT_7007c818;
      uVar3 = DAT_7007c814;
      *puVar11 = DAT_7007c810;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007c838;
      uVar6 = DAT_7007c834;
      uVar5 = DAT_7007c830;
      uVar4 = DAT_7007c82c;
      uVar3 = DAT_7007c828;
      puVar11[5] = DAT_7007c824;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007c83c;
      *(undefined1 *)((int)puVar11 + 0x2e) = DAT_7007c83e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431ca0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be5f4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be5e4);
    if (*(char *)(iVar9 + 0x2f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x7549b775 >> iVar15) |
                (byte)(-0x529c12c3 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xad63ed3d >> (uVar16 & 0xff));
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
    DAT_70ffc9c0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9c4);
  }
                    /* WARNING: Could not recover jumptable at 0x7140d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9c0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7140d7e8
// Entry: 0x7140d7e8 | Size: 396 bytes
// =========================================================================

void FUN_7140d7e8(undefined4 param_1)

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
  if (((DAT_70ffc9cc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9cc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be614);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be604);
      *(undefined1 *)((int)puVar11 + 0x33) = 1;
      uVar7 = DAT_7007c854;
      uVar6 = DAT_7007c850;
      uVar5 = DAT_7007c84c;
      uVar4 = DAT_7007c848;
      uVar3 = DAT_7007c844;
      *puVar11 = DAT_7007c840;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007c86c;
      uVar6 = DAT_7007c868;
      uVar5 = DAT_7007c864;
      uVar4 = DAT_7007c860;
      uVar3 = DAT_7007c85c;
      puVar11[6] = DAT_7007c858;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined2 *)(puVar11 + 0xc) = DAT_7007c870;
      *(undefined1 *)((int)puVar11 + 0x32) = DAT_7007c872;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431cf0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be614);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be604);
    if (*(char *)(iVar9 + 0x33) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x730d6b67 >> iVar15) |
                (byte)(0x67f7a945 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x67f7a945 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x31 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x33) = 0;
    }
    DAT_70ffc9c8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9cc);
  }
                    /* WARNING: Could not recover jumptable at 0x7140d814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9c8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7140dc0c
// Entry: 0x7140dc0c | Size: 408 bytes
// =========================================================================

void FUN_7140dc0c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffc9d4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9d4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be634,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be624);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_7007c888;
      uVar5 = DAT_7007c884;
      uVar4 = DAT_7007c880;
      uVar3 = DAT_7007c87c;
      *puVar11 = DAT_7007c878;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007c8a0;
      uVar6 = DAT_7007c89c;
      uVar5 = DAT_7007c898;
      uVar4 = DAT_7007c894;
      uVar3 = DAT_7007c890;
      puVar11[5] = DAT_7007c88c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_7007c8a4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431d40,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be634);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be624);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x89812fa5 >> iVar15) |
                (byte)(0x49edfd3f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x49edfd3f >> (uVar16 & 0xff));
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
    DAT_70ffc9d0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9d4);
  }
                    /* WARNING: Could not recover jumptable at 0x7140dc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9d0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7140e03c
// Entry: 0x7140e03c | Size: 356 bytes
// =========================================================================

void FUN_7140e03c(void)

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
  if (((DAT_70ffc9dc & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9dc), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be654);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be644);
      *(undefined1 *)((int)puVar8 + 0x11) = 1;
      uVar5 = DAT_7007c8b4;
      uVar4 = DAT_7007c8b0;
      uVar3 = DAT_7007c8ac;
      *puVar8 = DAT_7007c8a8;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      *(undefined1 *)(puVar8 + 4) = DAT_7007c8b8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431d90,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be654);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be644);
    if (*(char *)(iVar6 + 0x11) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x2557e107 >> iVar12) |
                 (byte)(0x13bfd92d << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x13bfd92d >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0xf < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x11) = 0;
    }
    DAT_70ffc9d8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9dc);
  }
                    /* WARNING: Could not recover jumptable at 0x7140e068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9d8)();
  return;
}


// =========================================================================
// Function: FUN_7140e438
// Entry: 0x7140e438 | Size: 364 bytes
// =========================================================================

void FUN_7140e438(void)

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
  if (((DAT_70ffc9e4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9e4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be674);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be664);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_7007c8cc;
      uVar4 = DAT_7007c8c8;
      uVar3 = DAT_7007c8c4;
      *puVar9 = DAT_7007c8c0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007c8d2;
      *(undefined2 *)(puVar9 + 4) = DAT_7007c8d0;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431dc4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be674);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be664);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x33032df5 >> iVar13) |
                 (byte)(-0xaa870ed << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xf5578f13 >> (uVar14 & 0xff));
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
    DAT_70ffc9e0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9e4);
  }
                    /* WARNING: Could not recover jumptable at 0x7140e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9e0)();
  return;
}


// =========================================================================
// Function: FUN_7140e83c
// Entry: 0x7140e83c | Size: 380 bytes
// =========================================================================

void FUN_7140e83c(undefined4 param_1)

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
  if (((DAT_70ffc9ec & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9ec), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be694);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be684);
      *(undefined1 *)((int)puVar10 + 0x16) = 1;
      uVar6 = DAT_7007c8e8;
      uVar5 = DAT_7007c8e4;
      uVar4 = DAT_7007c8e0;
      uVar3 = DAT_7007c8dc;
      *puVar10 = DAT_7007c8d8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined2 *)(puVar10 + 5) = DAT_7007c8ec;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431df8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be694);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be684);
    if (*(char *)(iVar8 + 0x16) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xeb59dbd3 >> iVar14) |
                (byte)(0x769f7eb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x769f7eb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x14 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x16) = 0;
    }
    DAT_70ffc9e8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9ec);
  }
                    /* WARNING: Could not recover jumptable at 0x7140e868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9e8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7140ec50
// Entry: 0x7140ec50 | Size: 356 bytes
// =========================================================================

void FUN_7140ec50(void)

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
  if (((DAT_70ffc9f4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9f4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6b4);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6a4);
      *(undefined1 *)((int)puVar8 + 0x12) = 1;
      uVar5 = DAT_7007c8fc;
      uVar4 = DAT_7007c8f8;
      uVar3 = DAT_7007c8f4;
      *puVar8 = DAT_7007c8f0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      *(undefined2 *)(puVar8 + 4) = DAT_7007c900;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431e30,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6b4);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6a4);
    if (*(char *)(iVar6 + 0x12) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xa9fd3505 >> iVar12) |
                 (byte)(-0x7e9a3e31 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x8165c1cf >> (uVar13 & 0xff));
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
    DAT_70ffc9f0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9f4);
  }
                    /* WARNING: Could not recover jumptable at 0x7140ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9f0)();
  return;
}


// =========================================================================
// Function: FUN_7140f04c
// Entry: 0x7140f04c | Size: 356 bytes
// =========================================================================

void FUN_7140f04c(void)

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
  if (((DAT_70ffc9fc & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffc9fc), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6d4);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6c4);
      *(undefined1 *)((int)puVar8 + 0x12) = 1;
      uVar5 = DAT_7007c914;
      uVar4 = DAT_7007c910;
      uVar3 = DAT_7007c90c;
      *puVar8 = DAT_7007c908;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      *(undefined2 *)(puVar8 + 4) = DAT_7007c918;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431e64,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6d4);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6c4);
    if (*(char *)(iVar6 + 0x12) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xbffb17b5 >> iVar12) |
                 (byte)(0x6bdffbd1 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x6bdffbd1 >> (uVar13 & 0xff));
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
    DAT_70ffc9f8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffc9fc);
  }
                    /* WARNING: Could not recover jumptable at 0x7140f078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffc9f8)();
  return;
}


// =========================================================================
// Function: FUN_7140f448
// Entry: 0x7140f448 | Size: 368 bytes
// =========================================================================

void FUN_7140f448(void)

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
  if (((DAT_70ffca04 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca04), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6f4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6e4);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007c934;
      uVar6 = DAT_7007c930;
      uVar5 = DAT_7007c92c;
      uVar4 = DAT_7007c928;
      uVar3 = DAT_7007c924;
      *puVar11 = DAT_7007c920;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar8 = DAT_7007c93a;
      *(undefined2 *)(puVar11 + 6) = DAT_7007c938;
      *(undefined1 *)((int)puVar11 + 0x1a) = uVar8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431e98,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6f4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be6e4);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar17 = (byte)(0x13e1dbf3 >> iVar15) |
                 (byte)(-0x2c7a2ab9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar17 = (byte)(0xd385d547 >> (uVar16 & 0xff));
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
    DAT_70ffca00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca04);
  }
                    /* WARNING: Could not recover jumptable at 0x7140f474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca00)();
  return;
}


// =========================================================================
// Function: FUN_7140f850
// Entry: 0x7140f850 | Size: 388 bytes
// =========================================================================

void FUN_7140f850(undefined4 param_1)

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
  if (((DAT_70ffca0c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca0c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be714);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be704);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007c94c;
      uVar4 = DAT_7007c948;
      uVar3 = DAT_7007c944;
      *puVar10 = DAT_7007c940;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007c960;
      uVar5 = DAT_7007c95c;
      uVar4 = DAT_7007c958;
      uVar3 = DAT_7007c954;
      puVar10[4] = DAT_7007c950;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007c964;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431ed4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be714);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be704);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x85296fdf >> iVar14) |
                (byte)(-0x141ebe87 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xebe14179 >> (uVar15 & 0xff));
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
    DAT_70ffca08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca0c);
  }
                    /* WARNING: Could not recover jumptable at 0x7140f87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca08)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7140fc6c
// Entry: 0x7140fc6c | Size: 436 bytes
// =========================================================================

void FUN_7140fc6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  if ((DAT_70ffca14 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca14);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be734,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be724);
        *(undefined1 *)(iVar3 + 0x66) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007c968,0x66);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431f24,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be734);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be724);
      if (*(char *)(iVar3 + 0x66) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0x1325072d >> iVar8) |
                   (byte)(0x6f5d0185 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0x6f5d0185 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (100 < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x66) = 0;
      }
      DAT_70ffca10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca14);
    }
  }
  (*DAT_70ffca10)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


// =========================================================================
// Function: FUN_714100d4
// Entry: 0x714100d4 | Size: 428 bytes
// =========================================================================

void FUN_714100d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffca1c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca1c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be754,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be744);
      *(undefined1 *)((int)puVar10 + 0x3e) = 1;
      uVar6 = DAT_7007c9e0;
      uVar5 = DAT_7007c9dc;
      uVar4 = DAT_7007c9d8;
      uVar3 = DAT_7007c9d4;
      *puVar10 = DAT_7007c9d0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007c9f4;
      uVar5 = DAT_7007c9f0;
      uVar4 = DAT_7007c9ec;
      uVar3 = DAT_7007c9e8;
      puVar10[5] = DAT_7007c9e4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007ca08;
      uVar5 = DAT_7007ca04;
      uVar4 = DAT_7007ca00;
      uVar3 = DAT_7007c9fc;
      puVar10[10] = DAT_7007c9f8;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_7007ca0c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431f74,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be754);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be744);
    if (*(char *)(iVar8 + 0x3e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0xd531356b >> iVar14) |
                (byte)(0x5be9895d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x5be9895d >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3c < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3e) = 0;
    }
    DAT_70ffca18 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca1c);
  }
                    /* WARNING: Could not recover jumptable at 0x71410108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca18)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71410518
// Entry: 0x71410518 | Size: 412 bytes
// =========================================================================

void FUN_71410518(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffca24 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca24);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be774,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be764);
        *(undefined1 *)(iVar4 + 0x52) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007ca10,0x52);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71431fc4,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be774);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be764);
      if (*(char *)(iVar4 + 0x52) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xb555f99b >> iVar9) |
                  (byte)(0x7d410717 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x7d410717 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x50 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x52) = 0;
      }
      DAT_70ffca20 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca24);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7141054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca20)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71410968
// Entry: 0x71410968 | Size: 392 bytes
// =========================================================================

void FUN_71410968(undefined4 param_1)

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
  if (((DAT_70ffca2c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca2c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be794);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be784);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_7007ca70;
      uVar3 = DAT_7007ca6c;
      *puVar10 = DAT_7007ca68;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_7007ca80;
      uVar4 = DAT_7007ca7c;
      uVar3 = DAT_7007ca78;
      puVar10[3] = DAT_7007ca74;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007ca86;
      *(undefined2 *)(puVar10 + 7) = DAT_7007ca84;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432014,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be794);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be784);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x4d91d391 >> iVar14) |
                (byte)(0x93de57d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x93de57d >> (uVar15 & 0xff));
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
    DAT_70ffca28 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca2c);
  }
                    /* WARNING: Could not recover jumptable at 0x71410994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca28)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71410d88
// Entry: 0x71410d88 | Size: 396 bytes
// =========================================================================

void FUN_71410d88(undefined4 param_1)

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
  if (((DAT_70ffca34 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca34), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7b4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7a4);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007ca94;
      uVar4 = DAT_7007ca90;
      uVar3 = DAT_7007ca8c;
      *puVar11 = DAT_7007ca88;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_7007caa8;
      uVar5 = DAT_7007caa4;
      uVar4 = DAT_7007caa0;
      uVar3 = DAT_7007ca9c;
      puVar11[4] = DAT_7007ca98;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007caae;
      *(undefined2 *)(puVar11 + 9) = DAT_7007caac;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432054,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7b4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7a4);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x5fa1fbe3 >> iVar15) |
                (byte)(0x1dcb7db7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x1dcb7db7 >> (uVar16 & 0xff));
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
    DAT_70ffca30 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca34);
  }
                    /* WARNING: Could not recover jumptable at 0x71410db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca30)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714111ac
// Entry: 0x714111ac | Size: 380 bytes
// =========================================================================

void FUN_714111ac(undefined4 param_1)

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
  if (((DAT_70ffca3c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca3c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7c4);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_7007cac0;
      uVar5 = DAT_7007cabc;
      uVar4 = DAT_7007cab8;
      uVar3 = DAT_7007cab4;
      *puVar10 = DAT_7007cab0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007cad4;
      uVar5 = DAT_7007cad0;
      uVar4 = DAT_7007cacc;
      uVar3 = DAT_7007cac8;
      puVar10[5] = DAT_7007cac4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714320a4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7c4);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x478bbd0b >> iVar14) |
                (byte)(-0x24940853 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xdb6bf7ad >> (uVar15 & 0xff));
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
    DAT_70ffca38 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca3c);
  }
                    /* WARNING: Could not recover jumptable at 0x714111d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca38)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714115c0
// Entry: 0x714115c0 | Size: 388 bytes
// =========================================================================

void FUN_714115c0(undefined4 param_1)

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
  if (((DAT_70ffca44 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca44), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7f4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7e4);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007cae4;
      uVar4 = DAT_7007cae0;
      uVar3 = DAT_7007cadc;
      *puVar10 = DAT_7007cad8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007caf8;
      uVar5 = DAT_7007caf4;
      uVar4 = DAT_7007caf0;
      uVar3 = DAT_7007caec;
      puVar10[4] = DAT_7007cae8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007cafc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714320f4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be7e4);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x47b10f6b >> iVar14) |
                (byte)(0x75eb2f59 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x75eb2f59 >> (uVar15 & 0xff));
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
    DAT_70ffca40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca44);
  }
                    /* WARNING: Could not recover jumptable at 0x714115ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca40)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714119dc
// Entry: 0x714119dc | Size: 416 bytes
// =========================================================================

void FUN_714119dc(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffca4c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca4c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be814,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be804);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007cb0c;
      uVar4 = DAT_7007cb08;
      uVar3 = DAT_7007cb04;
      *puVar10 = DAT_7007cb00;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007cb1c;
      uVar4 = DAT_7007cb18;
      uVar3 = DAT_7007cb14;
      puVar10[4] = DAT_7007cb10;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007cb30;
      uVar5 = DAT_7007cb2c;
      uVar4 = DAT_7007cb28;
      uVar3 = DAT_7007cb24;
      puVar10[8] = DAT_7007cb20;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007cb34;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432144,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be814);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be804);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x8fbd6dbf >> iVar14) |
                (byte)(0x558bf9a5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x558bf9a5 >> (uVar15 & 0xff));
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
    DAT_70ffca48 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca4c);
  }
                    /* WARNING: Could not recover jumptable at 0x71411a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca48)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71411e14
// Entry: 0x71411e14 | Size: 408 bytes
// =========================================================================

void FUN_71411e14(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffca54 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca54), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be834,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be824);
      *(undefined1 *)((int)puVar11 + 0x32) = 1;
      uVar7 = DAT_7007cb4c;
      uVar6 = DAT_7007cb48;
      uVar5 = DAT_7007cb44;
      uVar4 = DAT_7007cb40;
      uVar3 = DAT_7007cb3c;
      *puVar11 = DAT_7007cb38;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007cb64;
      uVar6 = DAT_7007cb60;
      uVar5 = DAT_7007cb5c;
      uVar4 = DAT_7007cb58;
      uVar3 = DAT_7007cb54;
      puVar11[6] = DAT_7007cb50;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined2 *)(puVar11 + 0xc) = DAT_7007cb68;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432194,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be834);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be824);
    if (*(char *)(iVar9 + 0x32) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x4167492b >> iVar15) |
                (byte)(0x5d5373a5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x5d5373a5 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x30 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x32) = 0;
    }
    DAT_70ffca50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca54);
  }
                    /* WARNING: Could not recover jumptable at 0x71411e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca50)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71412244
// Entry: 0x71412244 | Size: 416 bytes
// =========================================================================

void FUN_71412244(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffca5c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca5c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be854,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be844);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007cb7c;
      uVar4 = DAT_7007cb78;
      uVar3 = DAT_7007cb74;
      *puVar10 = DAT_7007cb70;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007cb8c;
      uVar4 = DAT_7007cb88;
      uVar3 = DAT_7007cb84;
      puVar10[4] = DAT_7007cb80;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007cba0;
      uVar5 = DAT_7007cb9c;
      uVar4 = DAT_7007cb98;
      uVar3 = DAT_7007cb94;
      puVar10[8] = DAT_7007cb90;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007cba4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714321e4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be854);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be844);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb1535d77 >> iVar14) |
                (byte)(0x35558361 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x35558361 >> (uVar15 & 0xff));
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
    DAT_70ffca58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca5c);
  }
                    /* WARNING: Could not recover jumptable at 0x71412278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca58)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7141267c
// Entry: 0x7141267c | Size: 428 bytes
// =========================================================================

void FUN_7141267c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffca64 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca64), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be874,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be864);
      *(undefined1 *)((int)puVar10 + 0x3e) = 1;
      uVar6 = DAT_7007cbb8;
      uVar5 = DAT_7007cbb4;
      uVar4 = DAT_7007cbb0;
      uVar3 = DAT_7007cbac;
      *puVar10 = DAT_7007cba8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007cbcc;
      uVar5 = DAT_7007cbc8;
      uVar4 = DAT_7007cbc4;
      uVar3 = DAT_7007cbc0;
      puVar10[5] = DAT_7007cbbc;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007cbe0;
      uVar5 = DAT_7007cbdc;
      uVar4 = DAT_7007cbd8;
      uVar3 = DAT_7007cbd4;
      puVar10[10] = DAT_7007cbd0;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_7007cbe4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432234,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be874);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be864);
    if (*(char *)(iVar8 + 0x3e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0xc961f7a9 >> iVar14) |
                (byte)(0x7fcb4991 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x7fcb4991 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3c < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3e) = 0;
    }
    DAT_70ffca60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca64);
  }
                    /* WARNING: Could not recover jumptable at 0x714126b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca60)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71412ac0
// Entry: 0x71412ac0 | Size: 384 bytes
// =========================================================================

void FUN_71412ac0(undefined4 param_1)

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
  if (((DAT_70ffca6c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca6c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be894);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be884);
      *(undefined1 *)((int)puVar9 + 0x21) = 1;
      uVar5 = DAT_7007cbf4;
      uVar4 = DAT_7007cbf0;
      uVar3 = DAT_7007cbec;
      *puVar9 = DAT_7007cbe8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007cc04;
      uVar4 = DAT_7007cc00;
      uVar3 = DAT_7007cbfc;
      puVar9[4] = DAT_7007cbf8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined1 *)(puVar9 + 8) = DAT_7007cc08;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432284,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be894);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be884);
    if (*(char *)(iVar7 + 0x21) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xbb4fdb95 >> iVar13) |
                (byte)(-0x626a25d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xf9d95da3 >> (uVar14 & 0xff));
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
    DAT_70ffca68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca6c);
  }
                    /* WARNING: Could not recover jumptable at 0x71412aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca68)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71412ed8
// Entry: 0x71412ed8 | Size: 380 bytes
// =========================================================================

void FUN_71412ed8(undefined4 param_1)

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
  if (((DAT_70ffca74 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca74), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8a4);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_7007cc20;
      uVar5 = DAT_7007cc1c;
      uVar4 = DAT_7007cc18;
      uVar3 = DAT_7007cc14;
      *puVar10 = DAT_7007cc10;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007cc34;
      uVar5 = DAT_7007cc30;
      uVar4 = DAT_7007cc2c;
      uVar3 = DAT_7007cc28;
      puVar10[5] = DAT_7007cc24;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714322d4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8a4);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x9815153 >> iVar14) |
                (byte)(-0x78e69c8d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x87196373 >> (uVar15 & 0xff));
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
    DAT_70ffca70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca74);
  }
                    /* WARNING: Could not recover jumptable at 0x71412f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca70)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714132ec
// Entry: 0x714132ec | Size: 380 bytes
// =========================================================================

void FUN_714132ec(undefined4 param_1)

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
  if (((DAT_70ffca7c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca7c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8c4);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007cc44;
      uVar4 = DAT_7007cc40;
      uVar3 = DAT_7007cc3c;
      *puVar10 = DAT_7007cc38;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007cc58;
      uVar5 = DAT_7007cc54;
      uVar4 = DAT_7007cc50;
      uVar3 = DAT_7007cc4c;
      puVar10[4] = DAT_7007cc48;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432324,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8c4);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xdff74797 >> iVar14) |
                (byte)(-0x1e28406d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe1d7bf93 >> (uVar15 & 0xff));
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
    DAT_70ffca78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca7c);
  }
                    /* WARNING: Could not recover jumptable at 0x71413318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca78)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71413700
// Entry: 0x71413700 | Size: 428 bytes
// =========================================================================

void FUN_71413700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffca84 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca84);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8f4,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8e4);
        *(undefined1 *)(iVar3 + 0x8b) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007cc60,0x8b);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432374,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8f4);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be8e4);
      if (*(char *)(iVar3 + 0x8b) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0x1b4949a3 >> iVar5) |
                  (byte)(-0x74424c51 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0x8bbdb3af >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0x89 < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x8b) = 0;
      }
      DAT_70ffca80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca84);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71413744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca80)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71413b60
// Entry: 0x71413b60 | Size: 416 bytes
// =========================================================================

void FUN_71413b60(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffca8c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca8c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be914,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be904);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007ccfc;
      uVar4 = DAT_7007ccf8;
      uVar3 = DAT_7007ccf4;
      *puVar10 = DAT_7007ccf0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007cd0c;
      uVar4 = DAT_7007cd08;
      uVar3 = DAT_7007cd04;
      puVar10[4] = DAT_7007cd00;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007cd20;
      uVar5 = DAT_7007cd1c;
      uVar4 = DAT_7007cd18;
      uVar3 = DAT_7007cd14;
      puVar10[8] = DAT_7007cd10;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007cd24;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714323c4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be914);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be904);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x8b9d9be7 >> iVar14) |
                (byte)(0x717f5d0f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x717f5d0f >> (uVar15 & 0xff));
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
    DAT_70ffca88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca8c);
  }
                    /* WARNING: Could not recover jumptable at 0x71413b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca88)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71413f98
// Entry: 0x71413f98 | Size: 400 bytes
// =========================================================================

void FUN_71413f98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffca94 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca94), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be934,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be924);
      *(undefined1 *)(iVar4 + 0x61) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007cd28,0x61);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432414,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be934);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be924);
    if (*(char *)(iVar4 + 0x61) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x7b375791 >> iVar9) |
                (byte)(-0x1a8040e1 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xe57fbf1f >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x5f < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x61) = 0;
    }
    DAT_70ffca90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca94);
  }
                    /* WARNING: Could not recover jumptable at 0x71413fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca90)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_714143dc
// Entry: 0x714143dc | Size: 420 bytes
// =========================================================================

void FUN_714143dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffca9c & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffca9c);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be954,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be944);
        *(undefined1 *)(iVar4 + 0x96) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007cd90,0x96);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432464,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be954);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be944);
      if (*(char *)(iVar4 + 0x96) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xf1953f9d >> iVar10) |
                  (byte)(0x27cf676f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0x27cf676f >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x94 < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x96) = 0;
      }
      DAT_70ffca98 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffca9c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71414418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffca98)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71414834
// Entry: 0x71414834 | Size: 400 bytes
// =========================================================================

void FUN_71414834(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcaa4 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcaa4), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be974,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be964);
      *(undefined1 *)(iVar4 + 0x67) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007ce28,0x67);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714324b4,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be974);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be964);
    if (*(char *)(iVar4 + 0x67) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x6d5367e7 >> iVar9) | (byte)(0xb834d21 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xb834d21 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x65 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x67) = 0;
    }
    DAT_70ffcaa0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcaa4);
  }
                    /* WARNING: Could not recover jumptable at 0x71414868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcaa0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71414c78
// Entry: 0x71414c78 | Size: 412 bytes
// =========================================================================

void FUN_71414c78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcaac & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcaac);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be994,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be984);
        *(undefined1 *)(iVar4 + 0x60) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007ce90,0x60);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432504,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be994);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be984);
      if (*(char *)(iVar4 + 0x60) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x67055da1 >> iVar9) |
                  (byte)(-0x64c4be87 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x9b3b4179 >> (uVar10 & 0xff));
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
      DAT_70ffcaa8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcaac);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71414cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcaa8)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_714150c8
// Entry: 0x714150c8 | Size: 440 bytes
// =========================================================================

void FUN_714150c8(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffcab4 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcab4), iVar1 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9b4);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9a4);
      *puVar4 = 0x14aef0ed;
      puVar4[1] = 0xdba6bb5c;
      puVar4[2] = 0x42ceafdb;
      *(undefined1 *)((int)puVar4 + 0xe) = 1;
      *(undefined2 *)(puVar4 + 3) = 0xff4e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432554,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9b4);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9a4);
    if (pbVar3[0xe] != 0) {
      *pbVar3 = *pbVar3 ^ 0xbf;
      pbVar3[1] = pbVar3[1] ^ 0x87;
      pbVar3[2] = pbVar3[2] ^ 0xe7;
      pbVar3[3] = pbVar3[3] ^ 0x79;
      pbVar3[0xe] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x6f;
      pbVar3[5] = ~pbVar3[5];
      pbVar3[6] = pbVar3[6] ^ 0xe3;
      pbVar3[7] = pbVar3[7] ^ 0xb5;
      pbVar3[8] = pbVar3[8] ^ 0xbf;
      pbVar3[9] = pbVar3[9] ^ 0x87;
      pbVar3[10] = pbVar3[10] ^ 0xe7;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x79;
      pbVar3[0xc] = pbVar3[0xc] ^ 0x6f;
      pbVar3[0xd] = ~pbVar3[0xd];
    }
    DAT_70ffcab0 = (code *)FUN_712f1f4c(&DAT_70b2e804,pbVar3,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcab4);
  }
                    /* WARNING: Could not recover jumptable at 0x714150f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcab0)();
  return;
}


// =========================================================================
// Function: FUN_714154f8
// Entry: 0x714154f8 | Size: 412 bytes
// =========================================================================

void FUN_714154f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcabc & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcabc);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9d4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9c4);
        *(undefined1 *)(iVar4 + 0x6c) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007cef0,0x6c);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432584,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9d4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9c4);
      if (*(char *)(iVar4 + 0x6c) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x75f311ed >> iVar9) |
                  (byte)(0x730b5fc1 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x730b5fc1 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x6a < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x6c) = 0;
      }
      DAT_70ffcab8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcabc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7141552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcab8)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71415948
// Entry: 0x71415948 | Size: 400 bytes
// =========================================================================

void FUN_71415948(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcac4 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcac4), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9f4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9e4);
      *(undefined1 *)(iVar4 + 0x62) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007cf60,0x62);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714325d4,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9f4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700be9e4);
    if (*(char *)(iVar4 + 0x62) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xe345cbf9 >> iVar9) | (byte)(0x2b37f18b << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x2b37f18b >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x60 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x62) = 0;
    }
    DAT_70ffcac0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcac4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcac0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71415d8c
// Entry: 0x71415d8c | Size: 420 bytes
// =========================================================================

void FUN_71415d8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcacc & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcacc);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea14,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea04);
        *(undefined1 *)(iVar4 + 0xa3) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007cfc8,0xa3);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432624,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea14);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea04);
      if (*(char *)(iVar4 + 0xa3) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x969d1c5 >> iVar10) |
                  (byte)(0x7f096565 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0x7f096565 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0xa1 < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0xa3) = 0;
      }
      DAT_70ffcac8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcacc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71415dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcac8)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_714161e4
// Entry: 0x714161e4 | Size: 412 bytes
// =========================================================================

void FUN_714161e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcad4 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcad4);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea34,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea24);
        *(undefined1 *)(iVar4 + 0xaf) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007d070,0xaf);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432674,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea34);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea24);
      if (*(char *)(iVar4 + 0xaf) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xb145a519 >> iVar9) |
                  (byte)(-0x10c86299 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xef379d67 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0xad < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0xaf) = 0;
      }
      DAT_70ffcad0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcad4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71416218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcad0)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71416634
// Entry: 0x71416634 | Size: 400 bytes
// =========================================================================

void FUN_71416634(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcadc & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcadc), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea54,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea44);
      *(undefined1 *)(iVar4 + 0x5e) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d120,0x5e);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714326c4,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea54);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea44);
    if (*(char *)(iVar4 + 0x5e) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x454d8351 >> iVar9) | (byte)(0x5feb8129 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x5feb8129 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x5c < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x5e) = 0;
    }
    DAT_70ffcad8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcadc);
  }
                    /* WARNING: Could not recover jumptable at 0x71416668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcad8)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71416a78
// Entry: 0x71416a78 | Size: 416 bytes
// =========================================================================

void FUN_71416a78(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcae4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcae4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea74,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea64);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_7007d190;
      uVar5 = DAT_7007d18c;
      uVar4 = DAT_7007d188;
      uVar3 = DAT_7007d184;
      *puVar10 = DAT_7007d180;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007d1a4;
      uVar5 = DAT_7007d1a0;
      uVar4 = DAT_7007d19c;
      uVar3 = DAT_7007d198;
      puVar10[5] = DAT_7007d194;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007d1b8;
      uVar5 = DAT_7007d1b4;
      uVar4 = DAT_7007d1b0;
      uVar3 = DAT_7007d1ac;
      puVar10[10] = DAT_7007d1a8;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_7007d1bc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432714,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea74);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea64);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xddf5eb13 >> iVar14) |
                (byte)(-0x782e5873 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x87d1a78d >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3d) = 0;
    }
    DAT_70ffcae0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcae4);
  }
                    /* WARNING: Could not recover jumptable at 0x71416aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcae0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714172f4
// Entry: 0x714172f4 | Size: 388 bytes
// =========================================================================

void FUN_714172f4(undefined4 param_1)

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
  if (((DAT_70ffcaf4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcaf4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beab4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beaa4);
      *(undefined1 *)((int)puVar11 + 0x31) = 1;
      uVar7 = DAT_7007d22c;
      uVar6 = DAT_7007d228;
      uVar5 = DAT_7007d224;
      uVar4 = DAT_7007d220;
      uVar3 = DAT_7007d21c;
      *puVar11 = DAT_7007d218;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007d244;
      uVar6 = DAT_7007d240;
      uVar5 = DAT_7007d23c;
      uVar4 = DAT_7007d238;
      uVar3 = DAT_7007d234;
      puVar11[6] = DAT_7007d230;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined1 *)(puVar11 + 0xc) = DAT_7007d248;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714327b4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beab4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beaa4);
    if (*(char *)(iVar9 + 0x31) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x73351343 >> iVar15) |
                (byte)(0x3d63618b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x3d63618b >> (uVar16 & 0xff));
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
    DAT_70ffcaf0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcaf4);
  }
                    /* WARNING: Could not recover jumptable at 0x71417320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcaf0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71417b34
// Entry: 0x71417b34 | Size: 396 bytes
// =========================================================================

void FUN_71417b34(undefined4 param_1)

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
  if (((DAT_70ffcb04 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb04), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beaf4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beae4);
      *(undefined1 *)((int)puVar10 + 0x36) = 1;
      uVar5 = DAT_7007d29c;
      uVar4 = DAT_7007d298;
      uVar3 = DAT_7007d294;
      *puVar10 = DAT_7007d290;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007d2ac;
      uVar4 = DAT_7007d2a8;
      uVar3 = DAT_7007d2a4;
      puVar10[4] = DAT_7007d2a0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007d2c0;
      uVar5 = DAT_7007d2bc;
      uVar4 = DAT_7007d2b8;
      uVar3 = DAT_7007d2b4;
      puVar10[8] = DAT_7007d2b0;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined2 *)(puVar10 + 0xd) = DAT_7007d2c4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432854,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beaf4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beae4);
    if (*(char *)(iVar8 + 0x36) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x87214d1b >> iVar14) |
                (byte)(0x61a7ddf5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x61a7ddf5 >> (uVar15 & 0xff));
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
    DAT_70ffcb00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb04);
  }
                    /* WARNING: Could not recover jumptable at 0x71417b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb00)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71417f58
// Entry: 0x71417f58 | Size: 376 bytes
// =========================================================================

void FUN_71417f58(undefined4 param_1)

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
  if (((DAT_70ffcb0c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb0c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb14);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb04);
      *(undefined1 *)((int)puVar10 + 0x16) = 1;
      uVar6 = DAT_7007d2d8;
      uVar5 = DAT_7007d2d4;
      uVar4 = DAT_7007d2d0;
      uVar3 = DAT_7007d2cc;
      *puVar10 = DAT_7007d2c8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined2 *)(puVar10 + 5) = DAT_7007d2dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714328a4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb14);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb04);
    if (*(char *)(iVar8 + 0x16) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x9c71599 >> iVar14) |
                (byte)(0x51533f15 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x51533f15 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x14 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x16) = 0;
    }
    DAT_70ffcb08 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb0c);
  }
                    /* WARNING: Could not recover jumptable at 0x71417f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb08)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71418368
// Entry: 0x71418368 | Size: 384 bytes
// =========================================================================

void FUN_71418368(undefined4 param_1)

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
  if (((DAT_70ffcb14 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb14), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb34);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb24);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007d2f4;
      uVar6 = DAT_7007d2f0;
      uVar5 = DAT_7007d2ec;
      uVar4 = DAT_7007d2e8;
      uVar3 = DAT_7007d2e4;
      *puVar11 = DAT_7007d2e0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_7007d2f8;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7007d2fa;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714328dc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb34);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb24);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe5433955 >> iVar15) |
                (byte)(-0x1a8a4ef3 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xe575b10d >> (uVar16 & 0xff));
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
    DAT_70ffcb10 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb14);
  }
                    /* WARNING: Could not recover jumptable at 0x71418394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb10)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71418780
// Entry: 0x71418780 | Size: 384 bytes
// =========================================================================

void FUN_71418780(undefined4 param_1)

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
  if (((DAT_70ffcb1c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb1c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb54);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb44);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007d314;
      uVar6 = DAT_7007d310;
      uVar5 = DAT_7007d30c;
      uVar4 = DAT_7007d308;
      uVar3 = DAT_7007d304;
      *puVar11 = DAT_7007d300;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_7007d318;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7007d31a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432918,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb54);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb44);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x85990b51 >> iVar15) |
                (byte)(-0x140af4e7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xebf50b19 >> (uVar16 & 0xff));
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
    DAT_70ffcb18 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb1c);
  }
                    /* WARNING: Could not recover jumptable at 0x714187ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb18)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71418b98
// Entry: 0x71418b98 | Size: 380 bytes
// =========================================================================

void FUN_71418b98(undefined4 param_1)

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
  if (((DAT_70ffcb24 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb24), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb74);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb64);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_7007d328;
      uVar3 = DAT_7007d324;
      *puVar9 = DAT_7007d320;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007d338;
      uVar4 = DAT_7007d334;
      uVar3 = DAT_7007d330;
      puVar9[3] = DAT_7007d32c;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007d33c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432954,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb74);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb64);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x5338b95 >> iVar13) |
                (byte)(-0x65a9c8d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xf9a56373 >> (uVar14 & 0xff));
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
    DAT_70ffcb20 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb24);
  }
                    /* WARNING: Could not recover jumptable at 0x71418bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb20)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71418fac
// Entry: 0x71418fac | Size: 404 bytes
// =========================================================================

void FUN_71418fac(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcb2c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb2c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb94,param_2);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb84);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_7007d348;
      uVar3 = DAT_7007d344;
      *puVar9 = DAT_7007d340;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007d358;
      uVar4 = DAT_7007d354;
      uVar3 = DAT_7007d350;
      puVar9[3] = DAT_7007d34c;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007d35c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432994,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb94);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beb84);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xc52d9dfd >> iVar13) |
                (byte)(-0xcb66a27 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xf34995d9 >> (uVar14 & 0xff));
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
    DAT_70ffcb28 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb2c);
  }
                    /* WARNING: Could not recover jumptable at 0x71418fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb28)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714193d8
// Entry: 0x714193d8 | Size: 388 bytes
// =========================================================================

void FUN_714193d8(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcb34 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb34), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebb4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beba4);
      *(undefined1 *)(puVar10 + 5) = 1;
      uVar6 = DAT_7007d370;
      uVar5 = DAT_7007d36c;
      uVar4 = DAT_7007d368;
      uVar3 = DAT_7007d364;
      *puVar10 = DAT_7007d360;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714329d4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebb4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beba4);
    if (*(char *)(iVar8 + 0x14) != '\0') {
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
        bVar2 = (0x12 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x14) = 0;
    }
    DAT_70ffcb30 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb34);
  }
                    /* WARNING: Could not recover jumptable at 0x7141940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb30)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714197f4
// Entry: 0x714197f4 | Size: 364 bytes
// =========================================================================

void FUN_714197f4(undefined4 param_1)

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
  if (((DAT_70ffcb3c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb3c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebd4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebc4);
      *(undefined1 *)(puVar10 + 5) = 1;
      uVar6 = DAT_7007d388;
      uVar5 = DAT_7007d384;
      uVar4 = DAT_7007d380;
      uVar3 = DAT_7007d37c;
      *puVar10 = DAT_7007d378;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432a08,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebd4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebc4);
    if (*(char *)(iVar8 + 0x14) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1dc5cf41 >> iVar14) |
                (byte)(0x5d874375 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x5d874375 >> (uVar15 & 0xff));
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
    DAT_70ffcb38 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb3c);
  }
                    /* WARNING: Could not recover jumptable at 0x71419820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb38)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71419bf8
// Entry: 0x71419bf8 | Size: 400 bytes
// =========================================================================

void FUN_71419bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcb44 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb44), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebf4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebe4);
      *(undefined1 *)(iVar4 + 0x60) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d390,0x60);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432a3c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebf4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bebe4);
    if (*(char *)(iVar4 + 0x60) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x934d83bf >> iVar9) |
                (byte)(-0x408e9839 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xbf7167c7 >> (uVar10 & 0xff));
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
    DAT_70ffcb40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb44);
  }
                    /* WARNING: Could not recover jumptable at 0x71419c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb40)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7141a03c
// Entry: 0x7141a03c | Size: 580 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7141a154) */
/* WARNING: Removing unreachable block (ram,0x7141a27c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7141a03c(undefined4 param_1,undefined4 param_2)

{
  byte bStack_51;
  uint auStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = _ext___stack_chk_guard;
  uStack_3c = 0;
  uStack_44 = 0;
  uStack_34 = 0x26d5d038;
  puStack_38 = &LAB_49abac16;
  uStack_40 = 0xbb;
  uStack_48 = 0x68;
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         (byte)(0xd07abb >> (((int)(char)bStack_51 & 0x1fU) << 3)) ^ 0xd1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  uStack_30 = 0xd07abb;
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
    uStack_30 = (uStack_30 | 0xccabd2) >> 2 ^ 0xacad14;
  } while (bStack_51 < 8);
  bStack_51 = 0;
  do {
    *(byte *)((int)auStack_50 + (int)(char)bStack_51) =
         *(byte *)((int)auStack_50 + (int)(char)bStack_51) ^ 0xd1;
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 4);
  bStack_51 = 0;
  do {
    bStack_51 = bStack_51 + 1;
  } while (bStack_51 < 8);
                    /* WARNING: Could not recover jumptable at 0x7141a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((auStack_50[0] ^ 0xccff4a) + DAT_7120187c))(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7141a314
// Entry: 0x7141a314 | Size: 384 bytes
// =========================================================================

void FUN_7141a314(undefined4 param_1)

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
  if (((DAT_70ffcb4c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb4c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec14);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec04);
      *(undefined1 *)((int)puVar9 + 0x1e) = 1;
      uVar4 = DAT_7007d3f8;
      uVar3 = DAT_7007d3f4;
      *puVar9 = DAT_7007d3f0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007d408;
      uVar4 = DAT_7007d404;
      uVar3 = DAT_7007d400;
      puVar9[3] = DAT_7007d3fc;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      *(undefined2 *)(puVar9 + 7) = DAT_7007d40c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432a8c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec14);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec04);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xd3739db3 >> iVar13) |
                (byte)(0x3fa781a3 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x3fa781a3 >> (uVar14 & 0xff));
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
    DAT_70ffcb48 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb4c);
  }
                    /* WARNING: Could not recover jumptable at 0x7141a340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb48)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141a72c
// Entry: 0x7141a72c | Size: 424 bytes
// =========================================================================

void FUN_7141a72c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcb54 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb54), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec34,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec24);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_7007d41c;
      uVar4 = DAT_7007d418;
      uVar3 = DAT_7007d414;
      *puVar10 = DAT_7007d410;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007d430;
      uVar5 = DAT_7007d42c;
      uVar4 = DAT_7007d428;
      uVar3 = DAT_7007d424;
      puVar10[4] = DAT_7007d420;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007d444;
      uVar5 = DAT_7007d440;
      uVar4 = DAT_7007d43c;
      uVar3 = DAT_7007d438;
      puVar10[9] = DAT_7007d434;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007d448;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_7007d44a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432acc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec34);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec24);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xadc343bd >> iVar14) |
                (byte)(-0xe467e03 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xf1b981fd >> (uVar15 & 0xff));
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
    DAT_70ffcb50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb54);
  }
                    /* WARNING: Could not recover jumptable at 0x7141a760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb50)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7141ab6c
// Entry: 0x7141ab6c | Size: 360 bytes
// =========================================================================

void FUN_7141ab6c(void)

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
  if (((DAT_70ffcb5c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb5c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec54);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec44);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_7007d464;
      uVar6 = DAT_7007d460;
      uVar5 = DAT_7007d45c;
      uVar4 = DAT_7007d458;
      uVar3 = DAT_7007d454;
      *puVar10 = DAT_7007d450;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_7007d468;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432b1c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec54);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec44);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x5179717b >> iVar14) |
                 (byte)(0x3d559f1b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x3d559f1b >> (uVar15 & 0xff));
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
    DAT_70ffcb58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7141ab98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb58)();
  return;
}


// =========================================================================
// Function: FUN_7141af6c
// Entry: 0x7141af6c | Size: 412 bytes
// =========================================================================

void FUN_7141af6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcb64 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb64);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec74,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec64);
        *(undefined1 *)(iVar4 + 0x60) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007d470,0x60);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432b58,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec74);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec64);
      if (*(char *)(iVar4 + 0x60) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xc51ddfb3 >> iVar9) |
                  (byte)(0x530d433b << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x530d433b >> (uVar10 & 0xff));
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
      DAT_70ffcb60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb64);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7141afa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb60)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7141b3bc
// Entry: 0x7141b3bc | Size: 364 bytes
// =========================================================================

void FUN_7141b3bc(void)

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
  if (((DAT_70ffcb6c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb6c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec94);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec84);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_7007d4dc;
      uVar4 = DAT_7007d4d8;
      uVar3 = DAT_7007d4d4;
      *puVar9 = DAT_7007d4d0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007d4e2;
      *(undefined2 *)(puVar9 + 4) = DAT_7007d4e0;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432ba8,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec94);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bec84);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xdf95413f >> iVar13) |
                 (byte)(-0x5422ac2b << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xabdd53d5 >> (uVar14 & 0xff));
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
    DAT_70ffcb68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb6c);
  }
                    /* WARNING: Could not recover jumptable at 0x7141b3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb68)();
  return;
}


// =========================================================================
// Function: FUN_7141b7c0
// Entry: 0x7141b7c0 | Size: 396 bytes
// =========================================================================

void FUN_7141b7c0(undefined4 param_1)

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
  if (((DAT_70ffcb74 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb74), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becb4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beca4);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007d4f4;
      uVar4 = DAT_7007d4f0;
      uVar3 = DAT_7007d4ec;
      *puVar11 = DAT_7007d4e8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_7007d508;
      uVar5 = DAT_7007d504;
      uVar4 = DAT_7007d500;
      uVar3 = DAT_7007d4fc;
      puVar11[4] = DAT_7007d4f8;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007d50e;
      *(undefined2 *)(puVar11 + 9) = DAT_7007d50c;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432bdc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becb4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beca4);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x65cda327 >> iVar15) |
                (byte)(0x2b6d3519 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x2b6d3519 >> (uVar16 & 0xff));
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
    DAT_70ffcb70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb74);
  }
                    /* WARNING: Could not recover jumptable at 0x7141b7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb70)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141bbe4
// Entry: 0x7141bbe4 | Size: 388 bytes
// =========================================================================

void FUN_7141bbe4(undefined4 param_1)

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
  if (((DAT_70ffcb7c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb7c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becd4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becc4);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_7007d51c;
      uVar4 = DAT_7007d518;
      uVar3 = DAT_7007d514;
      *puVar10 = DAT_7007d510;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007d530;
      uVar5 = DAT_7007d52c;
      uVar4 = DAT_7007d528;
      uVar3 = DAT_7007d524;
      puVar10[4] = DAT_7007d520;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_7007d534;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432c2c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becd4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becc4);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x8debe1ed >> iVar14) |
                (byte)(-0x40187071 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xbfe78f8f >> (uVar15 & 0xff));
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
    DAT_70ffcb78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb7c);
  }
                    /* WARNING: Could not recover jumptable at 0x7141bc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb78)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141c000
// Entry: 0x7141c000 | Size: 412 bytes
// =========================================================================

void FUN_7141c000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcb84 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb84);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becf4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bece4);
        *(undefined1 *)(iVar4 + 0x5f) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007d538,0x5f);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432c7c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700becf4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bece4);
      if (*(char *)(iVar4 + 0x5f) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x1bd16de9 >> iVar9) |
                  (byte)(-0x46c0d2bf << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xb93f2d41 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x5d < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x5f) = 0;
      }
      DAT_70ffcb80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb84);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7141c034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb80)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7141c450
// Entry: 0x7141c450 | Size: 400 bytes
// =========================================================================

void FUN_7141c450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcb8c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb8c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed14,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed04);
      *(undefined1 *)(iVar4 + 0x51) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d598,0x51);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432ccc,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed14);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed04);
    if (*(char *)(iVar4 + 0x51) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x7787b167 >> iVar9) | (byte)(-0xc2adab3 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf3d5254d >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x4f < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x51) = 0;
    }
    DAT_70ffcb88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb8c);
  }
                    /* WARNING: Could not recover jumptable at 0x7141c484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb88)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7141c894
// Entry: 0x7141c894 | Size: 416 bytes
// =========================================================================

void FUN_7141c894(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcb94 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb94), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed34,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed24);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_7007d600;
      uVar5 = DAT_7007d5fc;
      uVar4 = DAT_7007d5f8;
      uVar3 = DAT_7007d5f4;
      *puVar10 = DAT_7007d5f0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007d614;
      uVar5 = DAT_7007d610;
      uVar4 = DAT_7007d60c;
      uVar3 = DAT_7007d608;
      puVar10[5] = DAT_7007d604;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007d628;
      uVar5 = DAT_7007d624;
      uVar4 = DAT_7007d620;
      uVar3 = DAT_7007d61c;
      puVar10[10] = DAT_7007d618;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_7007d62c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432d1c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed34);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed24);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x57fcd0d >> iVar14) |
                (byte)(0x13bdc327 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x13bdc327 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3d) = 0;
    }
    DAT_70ffcb90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb94);
  }
                    /* WARNING: Could not recover jumptable at 0x7141c8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb90)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7141cccc
// Entry: 0x7141cccc | Size: 416 bytes
// =========================================================================

void FUN_7141cccc(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcb9c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcb9c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed54,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed44);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007d63c;
      uVar4 = DAT_7007d638;
      uVar3 = DAT_7007d634;
      *puVar10 = DAT_7007d630;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007d64c;
      uVar4 = DAT_7007d648;
      uVar3 = DAT_7007d644;
      puVar10[4] = DAT_7007d640;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007d660;
      uVar5 = DAT_7007d65c;
      uVar4 = DAT_7007d658;
      uVar3 = DAT_7007d654;
      puVar10[8] = DAT_7007d650;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007d664;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432d6c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed54);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed44);
    if (*(char *)(iVar8 + 0x35) != '\0') {
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
        bVar2 = (0x33 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x35) = 0;
    }
    DAT_70ffcb98 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcb9c);
  }
                    /* WARNING: Could not recover jumptable at 0x7141cd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcb98)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7141d104
// Entry: 0x7141d104 | Size: 356 bytes
// =========================================================================

void FUN_7141d104(void)

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
  if (((DAT_70ffcba4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcba4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed74);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed64);
      *(undefined1 *)((int)puVar8 + 0x12) = 1;
      uVar5 = DAT_7007d674;
      uVar4 = DAT_7007d670;
      uVar3 = DAT_7007d66c;
      *puVar8 = DAT_7007d668;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      *(undefined2 *)(puVar8 + 4) = DAT_7007d678;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432dbc,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed74);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed64);
    if (*(char *)(iVar6 + 0x12) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x3dbd4397 >> iVar12) |
                 (byte)(0x7ff8d77 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x7ff8d77 >> (uVar13 & 0xff));
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
    DAT_70ffcba0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcba4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcba0)();
  return;
}


// =========================================================================
// Function: FUN_7141d500
// Entry: 0x7141d500 | Size: 384 bytes
// =========================================================================

void FUN_7141d500(undefined4 param_1)

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
  if (((DAT_70ffcbac & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbac), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed94);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed84);
      *(undefined1 *)((int)puVar9 + 0x21) = 1;
      uVar5 = DAT_7007d68c;
      uVar4 = DAT_7007d688;
      uVar3 = DAT_7007d684;
      *puVar9 = DAT_7007d680;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007d69c;
      uVar4 = DAT_7007d698;
      uVar3 = DAT_7007d694;
      puVar9[4] = DAT_7007d690;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined1 *)(puVar9 + 8) = DAT_7007d6a0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432df0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed94);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bed84);
    if (*(char *)(iVar7 + 0x21) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x5949d57f >> iVar13) |
                (byte)(0x69bd2b5b << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x69bd2b5b >> (uVar14 & 0xff));
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
    DAT_70ffcba8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbac);
  }
                    /* WARNING: Could not recover jumptable at 0x7141d52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcba8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141d918
// Entry: 0x7141d918 | Size: 400 bytes
// =========================================================================

void FUN_7141d918(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcbb4 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbb4), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedb4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beda4);
      *(undefined1 *)(iVar4 + 0x4c) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d6a8,0x4c);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432e40,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedb4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beda4);
    if (*(char *)(iVar4 + 0x4c) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xefbff58d >> iVar9) |
                (byte)(-0x22c6aa27 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xdd3955d9 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x4a < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x4c) = 0;
    }
    DAT_70ffcbb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbb4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141d94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbb0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7141dd5c
// Entry: 0x7141dd5c | Size: 412 bytes
// =========================================================================

void FUN_7141dd5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcbbc & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbbc);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedd4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedc4);
        *(undefined1 *)(iVar4 + 0x5a) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007d6f8,0x5a);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432e90,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedd4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedc4);
      if (*(char *)(iVar4 + 0x5a) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x135b9fb3 >> iVar9) |
                  (byte)(-0x265aca69 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xd9a53597 >> (uVar10 & 0xff));
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
      DAT_70ffcbb8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbbc);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7141dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbb8)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7141e1ac
// Entry: 0x7141e1ac | Size: 400 bytes
// =========================================================================

void FUN_7141e1ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcbc4 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbc4), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedf4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bede4);
      *(undefined1 *)(iVar4 + 0x4e) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d758,0x4e);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432ee0,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bedf4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bede4);
    if (*(char *)(iVar4 + 0x4e) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xc7a9fbe5 >> iVar9) | (byte)(0x61f17745 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x61f17745 >> (uVar10 & 0xff));
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
    DAT_70ffcbc0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbc4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141e1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbc0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7141e5f0
// Entry: 0x7141e5f0 | Size: 400 bytes
// =========================================================================

void FUN_7141e5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcbcc & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbcc), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee14,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee04);
      *(undefined1 *)(iVar4 + 0x4e) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d7a8,0x4e);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432f30,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee14);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee04);
    if (*(char *)(iVar4 + 0x4e) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x29270ddd >> iVar9) | (byte)(0x611df905 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x611df905 >> (uVar10 & 0xff));
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
    DAT_70ffcbc8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbcc);
  }
                    /* WARNING: Could not recover jumptable at 0x7141e624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbc8)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7141ea34
// Entry: 0x7141ea34 | Size: 416 bytes
// =========================================================================

void FUN_7141ea34(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcbd4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbd4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee34,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee24);
      *(undefined1 *)((int)puVar10 + 0x3a) = 1;
      uVar5 = DAT_7007d804;
      uVar4 = DAT_7007d800;
      uVar3 = DAT_7007d7fc;
      *puVar10 = DAT_7007d7f8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007d818;
      uVar5 = DAT_7007d814;
      uVar4 = DAT_7007d810;
      uVar3 = DAT_7007d80c;
      puVar10[4] = DAT_7007d808;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007d82c;
      uVar5 = DAT_7007d828;
      uVar4 = DAT_7007d824;
      uVar3 = DAT_7007d820;
      puVar10[9] = DAT_7007d81c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007d830;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432f80,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee34);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee24);
    if (*(char *)(iVar8 + 0x3a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x29297fe1 >> iVar14) |
                (byte)(0x415dbdcb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x415dbdcb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x38 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3a) = 0;
    }
    DAT_70ffcbd0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbd4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141ea68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbd0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7141ee6c
// Entry: 0x7141ee6c | Size: 376 bytes
// =========================================================================

void FUN_7141ee6c(undefined4 param_1)

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
  if (((DAT_70ffcbdc & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbdc), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee54);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee44);
      *(undefined1 *)(puVar9 + 8) = 1;
      uVar5 = DAT_70060b04;
      uVar4 = DAT_70060b00;
      uVar3 = DAT_70060afc;
      *puVar9 = DAT_70060af8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70060b14;
      uVar4 = DAT_70060b10;
      uVar3 = DAT_70060b0c;
      puVar9[4] = DAT_70060b08;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432fd0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee54);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee44);
    if (*(char *)(iVar7 + 0x20) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xfbef85f1 >> iVar13) |
                (byte)(-0x225ce697 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xdda31969 >> (uVar14 & 0xff));
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
    DAT_70ffcbd8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbdc);
  }
                    /* WARNING: Could not recover jumptable at 0x7141ee98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbd8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141f27c
// Entry: 0x7141f27c | Size: 380 bytes
// =========================================================================

void FUN_7141f27c(undefined4 param_1)

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
  if (((DAT_70ffcbe4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbe4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee74);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee64);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_7007d848;
      uVar5 = DAT_7007d844;
      uVar4 = DAT_7007d840;
      uVar3 = DAT_7007d83c;
      *puVar10 = DAT_7007d838;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007d85c;
      uVar5 = DAT_7007d858;
      uVar4 = DAT_7007d854;
      uVar3 = DAT_7007d850;
      puVar10[5] = DAT_7007d84c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433010,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee74);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee64);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x7537e95d >> iVar14) |
                (byte)(0x1dc3834d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x1dc3834d >> (uVar15 & 0xff));
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
    DAT_70ffcbe0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbe4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141f2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbe0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141f690
// Entry: 0x7141f690 | Size: 388 bytes
// =========================================================================

void FUN_7141f690(undefined4 param_1)

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
  if (((DAT_70ffcbec & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbec), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee94);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee84);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_7007d86c;
      uVar4 = DAT_7007d868;
      uVar3 = DAT_7007d864;
      *puVar10 = DAT_7007d860;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007d880;
      uVar5 = DAT_7007d87c;
      uVar4 = DAT_7007d878;
      uVar3 = DAT_7007d874;
      puVar10[4] = DAT_7007d870;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_7007d884;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433060,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee94);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bee84);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x9d6d63cd >> iVar14) |
                (byte)(0x497df58f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x497df58f >> (uVar15 & 0xff));
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
    DAT_70ffcbe8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbec);
  }
                    /* WARNING: Could not recover jumptable at 0x7141f6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbe8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7141faac
// Entry: 0x7141faac | Size: 364 bytes
// =========================================================================

void FUN_7141faac(void)

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
  if (((DAT_70ffcbf4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbf4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beeb4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beea4);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_7007d894;
      uVar4 = DAT_7007d890;
      uVar3 = DAT_7007d88c;
      *puVar9 = DAT_7007d888;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007d89a;
      *(undefined2 *)(puVar9 + 4) = DAT_7007d898;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714330b0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beeb4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beea4);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xb12339e1 >> iVar13) |
                 (byte)(-0x42cf0bd << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xfbd30f43 >> (uVar14 & 0xff));
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
    DAT_70ffcbf0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbf4);
  }
                    /* WARNING: Could not recover jumptable at 0x7141fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbf0)();
  return;
}


// =========================================================================
// Function: FUN_7141feb0
// Entry: 0x7141feb0 | Size: 424 bytes
// =========================================================================

void FUN_7141feb0(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcbfc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcbfc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beed4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beec4);
      *(undefined1 *)((int)puVar10 + 0x37) = 1;
      uVar5 = DAT_7007d8ac;
      uVar4 = DAT_7007d8a8;
      uVar3 = DAT_7007d8a4;
      *puVar10 = DAT_7007d8a0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007d8bc;
      uVar4 = DAT_7007d8b8;
      uVar3 = DAT_7007d8b4;
      puVar10[4] = DAT_7007d8b0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007d8d0;
      uVar5 = DAT_7007d8cc;
      uVar4 = DAT_7007d8c8;
      uVar3 = DAT_7007d8c4;
      puVar10[8] = DAT_7007d8c0;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined2 *)(puVar10 + 0xd) = DAT_7007d8d4;
      *(undefined1 *)((int)puVar10 + 0x36) = DAT_7007d8d6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714330e4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beed4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beec4);
    if (*(char *)(iVar8 + 0x37) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf5f5e985 >> iVar14) |
                (byte)(0x6709d1a1 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x6709d1a1 >> (uVar15 & 0xff));
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
    DAT_70ffcbf8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcbfc);
  }
                    /* WARNING: Could not recover jumptable at 0x7141fee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcbf8)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714202f0
// Entry: 0x714202f0 | Size: 416 bytes
// =========================================================================

void FUN_714202f0(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc04 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc04), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beef4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beee4);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_7007d8e4;
      uVar4 = DAT_7007d8e0;
      uVar3 = DAT_7007d8dc;
      *puVar10 = DAT_7007d8d8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007d8f8;
      uVar5 = DAT_7007d8f4;
      uVar4 = DAT_7007d8f0;
      uVar3 = DAT_7007d8ec;
      puVar10[4] = DAT_7007d8e8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007d90c;
      uVar5 = DAT_7007d908;
      uVar4 = DAT_7007d904;
      uVar3 = DAT_7007d900;
      puVar10[9] = DAT_7007d8fc;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_7007d910;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433134,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beef4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beee4);
    if (*(char *)(iVar8 + 0x39) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x83f57d85 >> iVar14) |
                (byte)(0x3d39cd17 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x3d39cd17 >> (uVar15 & 0xff));
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
    DAT_70ffcc00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc04);
  }
                    /* WARNING: Could not recover jumptable at 0x71420324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc00)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71420728
// Entry: 0x71420728 | Size: 416 bytes
// =========================================================================

void FUN_71420728(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc0c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc0c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef14,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef04);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_7007d928;
      uVar5 = DAT_7007d924;
      uVar4 = DAT_7007d920;
      uVar3 = DAT_7007d91c;
      *puVar10 = DAT_7007d918;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007d93c;
      uVar5 = DAT_7007d938;
      uVar4 = DAT_7007d934;
      uVar3 = DAT_7007d930;
      puVar10[5] = DAT_7007d92c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007d950;
      uVar5 = DAT_7007d94c;
      uVar4 = DAT_7007d948;
      uVar3 = DAT_7007d944;
      puVar10[10] = DAT_7007d940;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_7007d954;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433184,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef14);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef04);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x6f755dd1 >> iVar14) |
                (byte)(-0x24ceb84b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xdb3147b5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3d) = 0;
    }
    DAT_70ffcc08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc0c);
  }
                    /* WARNING: Could not recover jumptable at 0x7142075c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc08)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71420b60
// Entry: 0x71420b60 | Size: 380 bytes
// =========================================================================

void FUN_71420b60(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc14 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc14), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef34,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef24);
      *(undefined1 *)(iVar4 + 0x43) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007d958,0x43);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714331d4,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef34);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef24);
    if (*(char *)(iVar4 + 0x43) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xa11fd99f >> iVar9) | (byte)(0x5b23df97 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x5b23df97 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x41 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x43) = 0;
    }
    DAT_70ffcc10 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc14);
  }
                    /* WARNING: Could not recover jumptable at 0x71420b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc10)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71420f90
// Entry: 0x71420f90 | Size: 420 bytes
// =========================================================================

void FUN_71420f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcc1c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc1c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef54,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef44);
      *(undefined1 *)(puVar10 + 0xf) = 1;
      uVar6 = DAT_7007d9b0;
      uVar5 = DAT_7007d9ac;
      uVar4 = DAT_7007d9a8;
      uVar3 = DAT_7007d9a4;
      *puVar10 = DAT_7007d9a0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007d9c4;
      uVar5 = DAT_7007d9c0;
      uVar4 = DAT_7007d9bc;
      uVar3 = DAT_7007d9b8;
      puVar10[5] = DAT_7007d9b4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007d9d8;
      uVar5 = DAT_7007d9d4;
      uVar4 = DAT_7007d9d0;
      uVar3 = DAT_7007d9cc;
      puVar10[10] = DAT_7007d9c8;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433224,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef54);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef44);
    if (*(char *)(iVar8 + 0x3c) != '\0') {
      uVar12 = 0;
      uVar15 = 0;
      do {
        iVar13 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0x4d37c5d1 >> iVar13) |
                (byte)(-0x3ec69cff << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar13 - 0x20;
        if (-1 < (int)uVar14) {
          bVar7 = (byte)(0xc1396301 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar7;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar15 == 0;
        bVar2 = (0x3a < uVar12) <= uVar15;
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3c) = 0;
    }
    DAT_70ffcc18 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc1c);
  }
                    /* WARNING: Could not recover jumptable at 0x71420fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc18)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_714213cc
// Entry: 0x714213cc | Size: 388 bytes
// =========================================================================

void FUN_714213cc(undefined4 param_1)

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
  if (((DAT_70ffcc24 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc24), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef74);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef64);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_7007d9f0;
      uVar5 = DAT_7007d9ec;
      uVar4 = DAT_7007d9e8;
      uVar3 = DAT_7007d9e4;
      *puVar10 = DAT_7007d9e0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007da04;
      uVar5 = DAT_7007da00;
      uVar4 = DAT_7007d9fc;
      uVar3 = DAT_7007d9f8;
      puVar10[5] = DAT_7007d9f4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_7007da08;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433274,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef74);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef64);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x47db73c7 >> iVar14) |
                (byte)(0x43573ddf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x43573ddf >> (uVar15 & 0xff));
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
    DAT_70ffcc20 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc24);
  }
                    /* WARNING: Could not recover jumptable at 0x714213f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc20)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714217e8
// Entry: 0x714217e8 | Size: 384 bytes
// =========================================================================

void FUN_714217e8(undefined4 param_1)

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
  if (((DAT_70ffcc2c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc2c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef94);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef84);
      *(undefined1 *)((int)puVar9 + 0x22) = 1;
      uVar5 = DAT_7007da1c;
      uVar4 = DAT_7007da18;
      uVar3 = DAT_7007da14;
      *puVar9 = DAT_7007da10;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007da2c;
      uVar4 = DAT_7007da28;
      uVar3 = DAT_7007da24;
      puVar9[4] = DAT_7007da20;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined2 *)(puVar9 + 8) = DAT_7007da30;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714332c4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef94);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bef84);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x3dba913 >> iVar13) |
                (byte)(0x752f0169 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x752f0169 >> (uVar14 & 0xff));
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
    DAT_70ffcc28 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc2c);
  }
                    /* WARNING: Could not recover jumptable at 0x71421814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc28)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71421c00
// Entry: 0x71421c00 | Size: 416 bytes
// =========================================================================

void FUN_71421c00(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc34 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc34), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befb4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befa4);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007da44;
      uVar4 = DAT_7007da40;
      uVar3 = DAT_7007da3c;
      *puVar10 = DAT_7007da38;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007da54;
      uVar4 = DAT_7007da50;
      uVar3 = DAT_7007da4c;
      puVar10[4] = DAT_7007da48;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007da68;
      uVar5 = DAT_7007da64;
      uVar4 = DAT_7007da60;
      uVar3 = DAT_7007da5c;
      puVar10[8] = DAT_7007da58;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007da6c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433314,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befb4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befa4);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc1734b63 >> iVar14) |
                (byte)(0x35c1a781 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x35c1a781 >> (uVar15 & 0xff));
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
    DAT_70ffcc30 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc34);
  }
                    /* WARNING: Could not recover jumptable at 0x71421c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc30)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71422038
// Entry: 0x71422038 | Size: 408 bytes
// =========================================================================

void FUN_71422038(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc3c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc3c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befd4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befc4);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      uVar5 = DAT_7007da7c;
      uVar4 = DAT_7007da78;
      uVar3 = DAT_7007da74;
      *puVar10 = DAT_7007da70;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007da90;
      uVar5 = DAT_7007da8c;
      uVar4 = DAT_7007da88;
      uVar3 = DAT_7007da84;
      puVar10[4] = DAT_7007da80;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007daa4;
      uVar5 = DAT_7007daa0;
      uVar4 = DAT_7007da9c;
      uVar3 = DAT_7007da98;
      puVar10[9] = DAT_7007da94;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433364,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befd4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befc4);
    if (*(char *)(iVar8 + 0x38) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x1ddcb53 >> iVar14) |
                (byte)(0x1b4bd31f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x1b4bd31f >> (uVar15 & 0xff));
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
    DAT_70ffcc38 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc3c);
  }
                    /* WARNING: Could not recover jumptable at 0x7142206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc38)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71422468
// Entry: 0x71422468 | Size: 416 bytes
// =========================================================================

void FUN_71422468(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc44 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc44), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beff4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befe4);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007dab4;
      uVar4 = DAT_7007dab0;
      uVar3 = DAT_7007daac;
      *puVar10 = DAT_7007daa8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007dac4;
      uVar4 = DAT_7007dac0;
      uVar3 = DAT_7007dabc;
      puVar10[4] = DAT_7007dab8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007dad8;
      uVar5 = DAT_7007dad4;
      uVar4 = DAT_7007dad0;
      uVar3 = DAT_7007dacc;
      puVar10[8] = DAT_7007dac8;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007dadc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714333b4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700beff4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700befe4);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x69abdfd1 >> iVar14) |
                (byte)(-0xa0eecaf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xf5f11351 >> (uVar15 & 0xff));
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
    DAT_70ffcc40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc44);
  }
                    /* WARNING: Could not recover jumptable at 0x7142249c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc40)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71422cb0
// Entry: 0x71422cb0 | Size: 400 bytes
// =========================================================================

void FUN_71422cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcc54 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc54), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf034,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf024);
      *(undefined1 *)(iVar4 + 0x4e) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007dae0,0x4e);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433444,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf034);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf024);
    if (*(char *)(iVar4 + 0x4e) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x579b9527 >> iVar9) | (byte)(0xf0d79c7 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf0d79c7 >> (uVar10 & 0xff));
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
    DAT_70ffcc50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc54);
  }
                    /* WARNING: Could not recover jumptable at 0x71422ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc50)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_714230f4
// Entry: 0x714230f4 | Size: 380 bytes
// =========================================================================

void FUN_714230f4(undefined4 param_1)

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
  if (((DAT_70ffcc5c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc5c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf054);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf044);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007db3c;
      uVar4 = DAT_7007db38;
      uVar3 = DAT_7007db34;
      *puVar10 = DAT_7007db30;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007db50;
      uVar5 = DAT_7007db4c;
      uVar4 = DAT_7007db48;
      uVar3 = DAT_7007db44;
      puVar10[4] = DAT_7007db40;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433494,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf054);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf044);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xaf9979bd >> iVar14) |
                (byte)(-0x50aa503b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xaf55afc5 >> (uVar15 & 0xff));
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
    DAT_70ffcc58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc5c);
  }
                    /* WARNING: Could not recover jumptable at 0x71423120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc58)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71423508
// Entry: 0x71423508 | Size: 380 bytes
// =========================================================================

void FUN_71423508(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc64 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc64), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf074,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf064);
      *(undefined1 *)(iVar4 + 0x43) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007db58,0x43);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714334e4,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf074);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf064);
    if (*(char *)(iVar4 + 0x43) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x97759395 >> iVar9) | (byte)(0x652bf3a3 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x652bf3a3 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x41 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x43) = 0;
    }
    DAT_70ffcc60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc64);
  }
                    /* WARNING: Could not recover jumptable at 0x71423534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc60)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71423938
// Entry: 0x71423938 | Size: 424 bytes
// =========================================================================

void FUN_71423938(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc6c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc6c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf094,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf084);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_7007dbac;
      uVar4 = DAT_7007dba8;
      uVar3 = DAT_7007dba4;
      *puVar10 = DAT_7007dba0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007dbc0;
      uVar5 = DAT_7007dbbc;
      uVar4 = DAT_7007dbb8;
      uVar3 = DAT_7007dbb4;
      puVar10[4] = DAT_7007dbb0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007dbd4;
      uVar5 = DAT_7007dbd0;
      uVar4 = DAT_7007dbcc;
      uVar3 = DAT_7007dbc8;
      puVar10[9] = DAT_7007dbc4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007dbd8;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_7007dbda;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433534,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf094);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf084);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x39a13991 >> iVar14) |
                (byte)(-0x66364c9d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x99c9b363 >> (uVar15 & 0xff));
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
    DAT_70ffcc68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc6c);
  }
                    /* WARNING: Could not recover jumptable at 0x7142396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc68)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71423d78
// Entry: 0x71423d78 | Size: 380 bytes
// =========================================================================

void FUN_71423d78(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffcc74 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc74), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0b4,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0a4);
      *(undefined1 *)(iVar4 + 0x53) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007dbe0,0x53);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433584,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0b4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0a4);
    if (*(char *)(iVar4 + 0x53) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xf7f7567 >> iVar9) | (byte)(0x1901a1eb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x1901a1eb >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x51 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x53) = 0;
    }
    DAT_70ffcc70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc74);
  }
                    /* WARNING: Could not recover jumptable at 0x71423da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc70)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714241a8
// Entry: 0x714241a8 | Size: 380 bytes
// =========================================================================

void FUN_714241a8(undefined4 param_1)

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
  if (((DAT_70ffcc7c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc7c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0d4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0c4);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_7007dc4c;
      uVar6 = DAT_7007dc48;
      uVar5 = DAT_7007dc44;
      uVar4 = DAT_7007dc40;
      uVar3 = DAT_7007dc3c;
      *puVar11 = DAT_7007dc38;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007dc64;
      uVar6 = DAT_7007dc60;
      uVar5 = DAT_7007dc5c;
      uVar4 = DAT_7007dc58;
      uVar3 = DAT_7007dc54;
      puVar11[6] = DAT_7007dc50;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714335d4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0d4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0c4);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x599d19f5 >> iVar15) |
                (byte)(-0x7aa454e5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x855bab1b >> (uVar16 & 0xff));
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
    DAT_70ffcc78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc7c);
  }
                    /* WARNING: Could not recover jumptable at 0x714241d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc78)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714245bc
// Entry: 0x714245bc | Size: 348 bytes
// =========================================================================

void FUN_714245bc(void)

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
  if (((DAT_70ffcc84 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc84), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0f4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0e4);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar7 = DAT_7007dc7c;
      uVar6 = DAT_7007dc78;
      uVar5 = DAT_7007dc74;
      uVar4 = DAT_7007dc70;
      uVar3 = DAT_7007dc6c;
      *puVar10 = DAT_7007dc68;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433624,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf0e4);
    if (*(char *)(iVar8 + 0x18) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xdf55afe7 >> iVar14) |
                 (byte)(-0x7c50facd << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x83af0533 >> (uVar15 & 0xff));
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
    DAT_70ffcc80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc84);
  }
                    /* WARNING: Could not recover jumptable at 0x714245e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc80)();
  return;
}


// =========================================================================
// Function: FUN_714249b0
// Entry: 0x714249b0 | Size: 360 bytes
// =========================================================================

void FUN_714249b0(void)

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
  if (((DAT_70ffcc8c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc8c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf114);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf104);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_7007dc8c;
      uVar4 = DAT_7007dc88;
      uVar3 = DAT_7007dc84;
      *puVar9 = DAT_7007dc80;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007dc92;
      *(undefined2 *)(puVar9 + 4) = DAT_7007dc90;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143365c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf114);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf104);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xcfe1adab >> iVar13) |
                 (byte)(-0x781c3c1d << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x87e3c3e3 >> (uVar14 & 0xff));
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
    DAT_70ffcc88 = (code *)FUN_712f4948(&DAT_70b2e804);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc8c);
  }
                    /* WARNING: Could not recover jumptable at 0x714249dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc88)();
  return;
}


// =========================================================================
// Function: FUN_71424db0
// Entry: 0x71424db0 | Size: 356 bytes
// =========================================================================

void FUN_71424db0(void)

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
  if (((DAT_70ffcc94 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc94), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf134);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf124);
      *(undefined1 *)((int)puVar9 + 0x15) = 1;
      uVar6 = DAT_7007dca8;
      uVar5 = DAT_7007dca4;
      uVar4 = DAT_7007dca0;
      uVar3 = DAT_7007dc9c;
      *puVar9 = DAT_7007dc98;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined1 *)(puVar9 + 5) = DAT_7007dcac;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433690,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf134);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf124);
    if (*(char *)(iVar7 + 0x15) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xe9ffe523 >> iVar13) |
                 (byte)(0x79e9a5d7 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x79e9a5d7 >> (uVar14 & 0xff));
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
    DAT_70ffcc90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc94);
  }
                    /* WARNING: Could not recover jumptable at 0x71424ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc90)();
  return;
}


// =========================================================================
// Function: FUN_714251ac
// Entry: 0x714251ac | Size: 348 bytes
// =========================================================================

void FUN_714251ac(void)

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
  if (((DAT_70ffcc9c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcc9c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf154);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf144);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar7 = DAT_7007dcc4;
      uVar6 = DAT_7007dcc0;
      uVar5 = DAT_7007dcbc;
      uVar4 = DAT_7007dcb8;
      uVar3 = DAT_7007dcb4;
      *puVar10 = DAT_7007dcb0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714336c8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf154);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf144);
    if (*(char *)(iVar8 + 0x18) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xcb393d5f >> iVar14) |
                 (byte)(-0x346c40a9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xcb93bf57 >> (uVar15 & 0xff));
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
    DAT_70ffcc98 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcc9c);
  }
                    /* WARNING: Could not recover jumptable at 0x714251d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcc98)();
  return;
}


// =========================================================================
// Function: FUN_714255a0
// Entry: 0x714255a0 | Size: 360 bytes
// =========================================================================

void FUN_714255a0(void)

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
  if (((DAT_70ffcca4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcca4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf174);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf164);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_7007dcdc;
      uVar6 = DAT_7007dcd8;
      uVar5 = DAT_7007dcd4;
      uVar4 = DAT_7007dcd0;
      uVar3 = DAT_7007dccc;
      *puVar10 = DAT_7007dcc8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_7007dce0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433700,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf174);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf164);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x6f2d0fbb >> iVar14) |
                 (byte)(-0x6068041d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x9f97fbe3 >> (uVar15 & 0xff));
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
    DAT_70ffcca0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcca4);
  }
                    /* WARNING: Could not recover jumptable at 0x714255cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcca0)();
  return;
}


// =========================================================================
// Function: FUN_714259a0
// Entry: 0x714259a0 | Size: 356 bytes
// =========================================================================

void FUN_714259a0(void)

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
  if (((DAT_70ffccac & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccac), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf194);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf184);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_7007dcf0;
      uVar3 = DAT_7007dcec;
      *puVar8 = DAT_7007dce8;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007dd00;
      uVar4 = DAT_7007dcfc;
      uVar3 = DAT_7007dcf8;
      puVar8[3] = DAT_7007dcf4;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143373c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf194);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf184);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x59e3913f >> iVar12) |
                 (byte)(-0x1a7284df << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xe58d7b21 >> (uVar13 & 0xff));
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
    DAT_70ffcca8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccac);
  }
                    /* WARNING: Could not recover jumptable at 0x714259cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcca8)();
  return;
}


// =========================================================================
// Function: FUN_71425d9c
// Entry: 0x71425d9c | Size: 348 bytes
// =========================================================================

void FUN_71425d9c(void)

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
  if (((DAT_70ffccb4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccb4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1a4);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar7 = DAT_7007dd1c;
      uVar6 = DAT_7007dd18;
      uVar5 = DAT_7007dd14;
      uVar4 = DAT_7007dd10;
      uVar3 = DAT_7007dd0c;
      *puVar10 = DAT_7007dd08;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433778,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1a4);
    if (*(char *)(iVar8 + 0x18) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x15fbb583 >> iVar14) |
                 (byte)(0x1f3fd56d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x1f3fd56d >> (uVar15 & 0xff));
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
    DAT_70ffccb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccb4);
  }
                    /* WARNING: Could not recover jumptable at 0x71425dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccb0)();
  return;
}


// =========================================================================
// Function: FUN_71426190
// Entry: 0x71426190 | Size: 360 bytes
// =========================================================================

void FUN_71426190(void)

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
  if (((DAT_70ffccbc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccbc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1c4);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_7007dd34;
      uVar6 = DAT_7007dd30;
      uVar5 = DAT_7007dd2c;
      uVar4 = DAT_7007dd28;
      uVar3 = DAT_7007dd24;
      *puVar10 = DAT_7007dd20;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_7007dd38;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714337b0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1c4);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x9b5ff149 >> iVar14) |
                 (byte)(-0x62e8727f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x9d178d81 >> (uVar15 & 0xff));
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
    DAT_70ffccb8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccbc);
  }
                    /* WARNING: Could not recover jumptable at 0x714261bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccb8)();
  return;
}


// =========================================================================
// Function: FUN_71426590
// Entry: 0x71426590 | Size: 360 bytes
// =========================================================================

void FUN_71426590(void)

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
  if (((DAT_70ffccc4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccc4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1f4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1e4);
      *(undefined1 *)((int)puVar10 + 0x1a) = 1;
      uVar7 = DAT_7007dd54;
      uVar6 = DAT_7007dd50;
      uVar5 = DAT_7007dd4c;
      uVar4 = DAT_7007dd48;
      uVar3 = DAT_7007dd44;
      *puVar10 = DAT_7007dd40;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined2 *)(puVar10 + 6) = DAT_7007dd58;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714337ec,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf1e4);
    if (*(char *)(iVar8 + 0x1a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x5b075983 >> iVar14) |
                 (byte)(0x6f4f25eb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x6f4f25eb >> (uVar15 & 0xff));
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
    DAT_70ffccc0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccc4);
  }
                    /* WARNING: Could not recover jumptable at 0x714265bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccc0)();
  return;
}


// =========================================================================
// Function: FUN_71426990
// Entry: 0x71426990 | Size: 360 bytes
// =========================================================================

void FUN_71426990(void)

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
  if (((DAT_70ffcccc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcccc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf214);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf204);
      *(undefined1 *)((int)puVar10 + 0x19) = 1;
      uVar7 = DAT_7007dd74;
      uVar6 = DAT_7007dd70;
      uVar5 = DAT_7007dd6c;
      uVar4 = DAT_7007dd68;
      uVar3 = DAT_7007dd64;
      *puVar10 = DAT_7007dd60;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined1 *)(puVar10 + 6) = DAT_7007dd78;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433828,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf214);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf204);
    if (*(char *)(iVar8 + 0x19) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x45812963 >> iVar14) |
                 (byte)(-0xede40bf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xf121bf41 >> (uVar15 & 0xff));
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
    DAT_70ffccc8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcccc);
  }
                    /* WARNING: Could not recover jumptable at 0x714269bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccc8)();
  return;
}


// =========================================================================
// Function: FUN_71426d90
// Entry: 0x71426d90 | Size: 436 bytes
// =========================================================================

void FUN_71426d90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffccd4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccd4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf234,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf224);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_7007dd8c;
      uVar4 = DAT_7007dd88;
      uVar3 = DAT_7007dd84;
      *puVar10 = DAT_7007dd80;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007dda0;
      uVar5 = DAT_7007dd9c;
      uVar4 = DAT_7007dd98;
      uVar3 = DAT_7007dd94;
      puVar10[4] = DAT_7007dd90;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007ddb4;
      uVar5 = DAT_7007ddb0;
      uVar4 = DAT_7007ddac;
      uVar3 = DAT_7007dda8;
      puVar10[9] = DAT_7007dda4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007ddb8;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_7007ddba;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433864,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf234);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf224);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0xc735a39b >> iVar14) |
                (byte)(0x6f63b32f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x6f63b32f >> (uVar15 & 0xff));
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
    DAT_70ffccd0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccd4);
  }
                    /* WARNING: Could not recover jumptable at 0x71426dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccd0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_714271dc
// Entry: 0x714271dc | Size: 384 bytes
// =========================================================================

void FUN_714271dc(undefined4 param_1)

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
  if (((DAT_70ffccdc & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccdc), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf254);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf244);
      *(undefined1 *)((int)puVar9 + 0x22) = 1;
      uVar5 = DAT_7007ddcc;
      uVar4 = DAT_7007ddc8;
      uVar3 = DAT_7007ddc4;
      *puVar9 = DAT_7007ddc0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_7007dddc;
      uVar4 = DAT_7007ddd8;
      uVar3 = DAT_7007ddd4;
      puVar9[4] = DAT_7007ddd0;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined2 *)(puVar9 + 8) = DAT_7007dde0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714338b4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf254);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf244);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x7d99b1a9 >> iVar13) |
                (byte)(-0x2c7e4e41 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xd381b1bf >> (uVar14 & 0xff));
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
    DAT_70ffccd8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccdc);
  }
                    /* WARNING: Could not recover jumptable at 0x71427208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccd8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714275f4
// Entry: 0x714275f4 | Size: 412 bytes
// =========================================================================

void FUN_714275f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffcce4 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcce4);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf274,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf264);
        *(undefined1 *)(iVar4 + 0x60) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007dde8,0x60);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433904,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf274);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf264);
      if (*(char *)(iVar4 + 0x60) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x59cbbb6b >> iVar9) |
                  (byte)(-0x32b6b893 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xcd49476d >> (uVar10 & 0xff));
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
      DAT_70ffcce0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcce4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71427628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcce0)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71427a44
// Entry: 0x71427a44 | Size: 356 bytes
// =========================================================================

void FUN_71427a44(void)

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
  if (((DAT_70ffccec & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccec), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf294);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf284);
      *(undefined1 *)((int)puVar9 + 0x15) = 1;
      uVar6 = DAT_7007de58;
      uVar5 = DAT_7007de54;
      uVar4 = DAT_7007de50;
      uVar3 = DAT_7007de4c;
      *puVar9 = DAT_7007de48;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined1 *)(puVar9 + 5) = DAT_7007de5c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433954,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf294);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf284);
    if (*(char *)(iVar7 + 0x15) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xc9e5198d >> iVar13) |
                 (byte)(-0x4416f227 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xbbe90dd9 >> (uVar14 & 0xff));
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
    DAT_70ffcce8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccec);
  }
                    /* WARNING: Could not recover jumptable at 0x71427a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcce8)();
  return;
}


// =========================================================================
// Function: FUN_71427e40
// Entry: 0x71427e40 | Size: 388 bytes
// =========================================================================

void FUN_71427e40(undefined4 param_1)

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
  if (((DAT_70ffccf4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccf4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2b4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2a4);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_7007de70;
      uVar5 = DAT_7007de6c;
      uVar4 = DAT_7007de68;
      uVar3 = DAT_7007de64;
      *puVar10 = DAT_7007de60;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007de84;
      uVar5 = DAT_7007de80;
      uVar4 = DAT_7007de7c;
      uVar3 = DAT_7007de78;
      puVar10[5] = DAT_7007de74;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_7007de88;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143398c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2a4);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x49e19bb9 >> iVar14) |
                (byte)(-0x76229a11 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x89dd65ef >> (uVar15 & 0xff));
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
    DAT_70ffccf0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccf4);
  }
                    /* WARNING: Could not recover jumptable at 0x71427e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccf0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7142825c
// Entry: 0x7142825c | Size: 380 bytes
// =========================================================================

void FUN_7142825c(undefined4 param_1)

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
  if (((DAT_70ffccfc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffccfc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2c4);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_7007dea0;
      uVar5 = DAT_7007de9c;
      uVar4 = DAT_7007de98;
      uVar3 = DAT_7007de94;
      *puVar10 = DAT_7007de90;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007deb4;
      uVar5 = DAT_7007deb0;
      uVar4 = DAT_7007deac;
      uVar3 = DAT_7007dea8;
      puVar10[5] = DAT_7007dea4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714339dc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2c4);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xddebdf93 >> iVar14) |
                (byte)(0x7d27a173 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x7d27a173 >> (uVar15 & 0xff));
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
    DAT_70ffccf8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffccfc);
  }
                    /* WARNING: Could not recover jumptable at 0x71428288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffccf8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71428670
// Entry: 0x71428670 | Size: 400 bytes
// =========================================================================

void FUN_71428670(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcd04 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcd04), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2f4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2e4);
      *(undefined1 *)(iVar4 + 0x5e) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007deb8,0x5e);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433a2c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2f4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf2e4);
    if (*(char *)(iVar4 + 0x5e) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xc79f85eb >> iVar9) |
                (byte)(-0x20180ad9 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xdfe7f527 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x5c < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x5e) = 0;
    }
    DAT_70ffcd00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcd04);
  }
                    /* WARNING: Could not recover jumptable at 0x714286a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcd00)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71428ab4
// Entry: 0x71428ab4 | Size: 400 bytes
// =========================================================================

void FUN_71428ab4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffcd0c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcd0c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf314,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf304);
      *(undefined1 *)(iVar4 + 0x48) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007df18,0x48);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433a7c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf314);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf304);
    if (*(char *)(iVar4 + 0x48) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xb371bf99 >> iVar9) | (byte)(0x6b9d49c7 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x6b9d49c7 >> (uVar10 & 0xff));
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
    DAT_70ffcd08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcd0c);
  }
                    /* WARNING: Could not recover jumptable at 0x71428ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcd08)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71428ef8
// Entry: 0x71428ef8 | Size: 48 bytes
// =========================================================================

undefined1 FUN_71428ef8(void)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (DAT_70ffcd24 == '\0' && DAT_70ffcd26 == '\0') {
    uVar1 = DAT_70ffcd27;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71428fa0
// Entry: 0x71428fa0 | Size: 1040 bytes
// =========================================================================

void FUN_71428fa0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_71413b60(1,0);
  FUN_71446e40();
  FUN_7140f448();
  FUN_7136cdfc(&uStack_30);
  FUN_7136cdfc(&uStack_3c);
  piVar2 = DAT_70b46f00;
  iVar12 = *DAT_70b46f00;
  iVar4 = FUN_713c301c(0);
  if (iVar4 != 0) {
    iVar4 = *(int *)(DAT_70b46c18 + 0x14) + 0x30;
    if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
      iVar4 = DAT_70b46c18 + 4;
    }
    FUN_7136d040(&uStack_3c,iVar4);
    iVar4 = FUN_713c301c(0);
    iVar10 = *(int *)(iVar4 + 0x14) + 0x30;
    if (*(int *)(iVar4 + 0x14) == 0) {
      iVar10 = iVar4 + 4;
    }
    FUN_7136d040(&uStack_30,iVar10);
  }
  DAT_70ffcd14 = FUN_71886108();
  DAT_70ffcd10 = 1;
  if (DAT_711e9ee4 != 0) {
    FUN_7164e210();
  }
  FUN_71735004();
  iVar4 = FUN_713c301c(0);
  if (iVar4 == 0) {
    return;
  }
  uVar5 = FUN_71ba13e0(uStack_3c,0x42480000);
  FUN_71ba0b38(uVar5,0x42a00000);
  imp_floorf();
  iVar10 = FUN_71ba17bc();
  uVar5 = FUN_71ba13e0(uStack_38,0x42480000);
  FUN_71ba0b38(uVar5,0x42a00000);
  imp_floorf();
  iVar6 = FUN_71ba17bc();
  if (*(int *)(iVar4 + *(char *)(iVar4 + 0x71c) * 0x1c + 0x5a4) == 0x10) {
    FUN_713bdc8c(iVar4);
  }
  uVar7 = iVar10 - DAT_70ffcd1c;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  if (uVar7 < 9) {
    uVar7 = iVar6 - DAT_70ffcd20;
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    if (8 < uVar7) goto LAB_71429134;
  }
  else {
LAB_71429134:
    iVar8 = *(int *)(DAT_70b46c18 + 0x14) + 0x30;
    if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
      iVar8 = DAT_70b46c18 + 4;
    }
    FUN_71360e94(iVar8);
    FUN_71361824();
    DAT_70ffcd1c = iVar10;
    DAT_70ffcd20 = iVar6;
  }
  iVar3 = DAT_70ffcd20;
  iVar8 = DAT_70ffcd1c;
  if (iVar12 == *piVar2) {
    puVar11 = (undefined4 *)(*(int *)(DAT_70b46c18 + 0x14) + 0x30);
    if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
      puVar11 = (undefined4 *)(DAT_70b46c18 + 4);
    }
    uVar14 = puVar11[1];
    uVar13 = puVar11[2];
    uVar5 = FUN_71ba240c(*puVar11,uStack_3c);
    uVar14 = FUN_71ba240c(uVar14,uStack_38);
    uVar14 = FUN_71ba21e8(uVar14,uVar14);
    uVar5 = FUN_71ba21e8(uVar5,uVar5);
    uVar5 = FUN_71ba0b38(uVar5,uVar14);
    uVar14 = FUN_71ba240c(uVar13,uStack_34);
    uVar14 = FUN_71ba21e8(uVar14,uVar14);
    FUN_71ba0b38(uVar14,uVar5);
    uVar5 = imp_sqrtf();
    uVar15 = FUN_71ba2d70(uVar5,0x42c80000);
    iVar12 = (int)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 == 0) {
      puVar11 = (undefined4 *)(*(int *)(iVar4 + 0x14) + 0x30);
      if (*(int *)(iVar4 + 0x14) == 0) {
        puVar11 = (undefined4 *)(iVar4 + 4);
      }
      uVar14 = puVar11[1];
      uVar13 = puVar11[2];
      uVar5 = FUN_71ba240c(*puVar11,uStack_30);
      uVar14 = FUN_71ba240c(uVar14,uStack_2c);
      uVar14 = FUN_71ba21e8(uVar14,uVar14);
      uVar5 = FUN_71ba21e8(uVar5,uVar5);
      uVar5 = FUN_71ba0b38(uVar5,uVar14);
      uVar14 = FUN_71ba240c(uVar13,uStack_28);
      uVar14 = FUN_71ba21e8(uVar14,uVar14);
      FUN_71ba0b38(uVar14,uVar5);
      uVar5 = imp_sqrtf();
      uVar15 = FUN_71ba2d70(uVar5,0x42c80000);
      iVar12 = (int)((ulonglong)uVar15 >> 0x20);
      if ((int)uVar15 == 0) {
        return;
      }
    }
    iVar1 = iVar10;
    if (iVar8 == iVar10) {
      iVar12 = iVar3;
      iVar1 = iVar6;
    }
    if (iVar8 == iVar10 && iVar12 == iVar1) goto LAB_71429318;
    puVar11 = (undefined4 *)(*(int *)(iVar4 + 0x14) + 0x30);
    if (*(int *)(iVar4 + 0x14) == 0) {
      puVar11 = (undefined4 *)(iVar4 + 4);
    }
    uStack_48 = *puVar11;
    uStack_44 = puVar11[1];
    uStack_40 = puVar11[2];
  }
  else {
    uStack_48 = 0;
    *(undefined4 *)((uint)&uStack_48 | 4) = 0;
    ((undefined4 *)((uint)&uStack_48 | 4))[1] = 0;
  }
  FUN_71360e94(&uStack_48);
  FUN_71361824();
LAB_71429318:
  piVar2 = DAT_70b2fd4c;
  piVar9 = (int *)*DAT_70b2fd4c;
  if (1 < piVar9[2]) {
    iVar12 = 0;
    iVar4 = 0;
    do {
      if (((-1 < *(char *)(piVar9[1] + iVar4 + 1)) && (*(char *)(*piVar9 + iVar12 + 0x54) != '\0'))
         && (*(short *)(*piVar9 + iVar12 + 0x52) == 0)) {
        FUN_7135f82c(iVar4 + 0x61a9);
        piVar9 = (int *)*piVar2;
      }
      iVar10 = iVar4 + 2;
      iVar12 = iVar12 + 0x2c;
      iVar4 = iVar4 + 1;
    } while (iVar10 < piVar9[2]);
  }
  FUN_714ad090();
  return;
}


// =========================================================================
// Function: FUN_71429a88
// Entry: 0x71429a88 | Size: 1232 bytes
// =========================================================================

void FUN_71429a88(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 unaff_r4;
  byte bVar18;
  undefined4 unaff_r5;
  undefined4 *puVar19;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar20;
  int iVar21;
  int iVar22;
  
  FUN_71451504();
  iVar5 = DAT_710ea8a4;
  if (*DAT_70b88ab0 == '\0') {
    iVar16 = (int)*(short *)(DAT_710ea8a4 + 0x2a);
    iVar14 = (int)*(short *)(DAT_710ea8a4 + 0x28);
    iVar12 = (int)*(short *)(DAT_710ea8a4 + 0x26);
    iVar8 = (int)*(short *)(DAT_710ea8a4 + 0x24);
    iVar21 = (int)*(short *)(DAT_710ea8a4 + 0x2c);
    iVar22 = (int)*(short *)(DAT_710ea8a4 + 0x2e);
  }
  else {
    iVar8 = 0xff;
    *(undefined2 *)(DAT_710ea8a4 + 0x2e) = 0xff;
    *(undefined4 *)(iVar5 + 0x2a) = 0xff00ff;
    iVar12 = 0xff;
    iVar21 = 0xff;
    iVar14 = 0xff;
    iVar22 = 0xff;
    iVar16 = 0xff;
  }
  iVar8 = FUN_7140fc6c(iVar8,iVar12,iVar14,iVar16,iVar21,iVar22,0xff);
  if (iVar8 == 0) {
    return;
  }
  DAT_70ffcd18 = 8;
  FUN_7140e03c();
  if (DAT_711ad148 == '\0') {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    DAT_700c036c = *(undefined4 *)(iVar5 + 0x50);
    FUN_7141feb0(DAT_70ffc978[1],0x44c80000);
  }
  else {
    FUN_7141feb0(DAT_70ffc978[1],DAT_700c71c0);
    DAT_700c036c = DAT_700c71c0;
  }
  if (*(int *)(DAT_70b46c18 + 0x8d8) != 0) {
    FUN_7141feb0(*(int *)(DAT_70b46c18 + 0x8d8),*(undefined4 *)(DAT_70ffc978[1] + 0x84));
  }
  *(undefined4 *)(DAT_70ffc978[1] + 0x88) = *(undefined4 *)(iVar5 + 0x54);
  DAT_70ffcd18 = 9;
  uVar9 = FUN_714e0b34(*(undefined4 *)(DAT_711a3938 + 0x13898));
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  iVar5 = DAT_71201738;
  uVar10 = FUN_71ba1b94(DAT_71201738);
  uVar11 = FUN_71ba21e8(uVar10,0x3c5a74c0);
  uVar11 = FUN_71ba0b38(uVar11,0x3ecccccd);
  uVar10 = FUN_71ba13e0(uVar10,0x43700000);
  uVar10 = FUN_71ba0b38(uVar10,0x3f15551d);
  uVar9 = FUN_71ba13e0(uVar9,0x42c80000);
  uVar9 = FUN_71ba0b38(uVar9,0x3e333333);
  if (iVar5 < 0x14) {
    uVar10 = uVar11;
  }
  uVar10 = FUN_71ba21e8(uVar9,uVar10);
  uVar10 = FUN_71ba13e0(uVar10,0x3f333333);
  *DAT_7100cedc = uVar10;
  FUN_715d3ce4();
  FUN_715d54f8();
  FUN_7140d3c4(*DAT_70ffc978);
  FUN_71452114(0);
  DAT_70ffcd18 = 10;
  FUN_7140e83c(1);
  DAT_70ffcd18 = 0x21;
  FUN_71452114(1);
  DAT_70ffcd18 = 0x22;
  FUN_7148d89c();
  iVar5 = DAT_710eabf8;
  iVar8 = DAT_710eabf8 + 0xc;
  iVar12 = *(int *)(DAT_710eabf8 + 8);
  if (iVar12 != iVar8) {
    iVar14 = DAT_710eabf8 + 0x18;
    do {
      iVar16 = *(int *)(iVar12 + 8);
      if (*(int *)(iVar12 + 4) != 0) {
        *(int *)(*(int *)(iVar12 + 4) + 8) = iVar16;
      }
      if (iVar16 != 0) {
        *(undefined4 *)(iVar16 + 4) = *(undefined4 *)(iVar12 + 4);
      }
      iVar16 = *(int *)(iVar5 + 0x20);
      *(int *)(iVar12 + 8) = iVar16;
      *(int *)(iVar16 + 4) = iVar12;
      *(int *)(iVar12 + 4) = iVar14;
      *(int *)(iVar5 + 0x20) = iVar12;
      iVar12 = *(int *)(iVar5 + 8);
    } while (iVar12 != iVar8);
  }
  if (*DAT_70ffc9a8 == '\0') {
    FUN_7140ec50();
  }
  FUN_7140f04c();
  FUN_713455b0();
  FUN_71452538(1);
  FUN_715b283c();
  for (puVar19 = DAT_711a3bb0; puVar19 != &DAT_711a3bac; puVar19 = (undefined4 *)puVar19[1]) {
    if (puVar19[2] != 0) {
      FUN_715b2cc8();
    }
  }
  DAT_70ffcd18 = 0x23;
  DataMemoryBarrier(0xb);
  if (((DAT_70b36018 & 1) == 0) && (iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b36018), iVar5 != 0)) {
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4d8);
    if (*pcVar6 == '\0') {
      puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4c8);
      *(undefined1 *)((int)puVar19 + 0x1a) = 1;
      uVar4 = DAT_700741f4;
      uVar3 = DAT_700741f0;
      uVar11 = DAT_700741ec;
      uVar9 = DAT_700741e8;
      uVar10 = DAT_700741e4;
      *puVar19 = DAT_700741e0;
      puVar19[1] = uVar10;
      puVar19[2] = uVar9;
      puVar19[3] = uVar11;
      puVar19[4] = uVar3;
      puVar19[5] = uVar4;
      *(undefined2 *)(puVar19 + 6) = DAT_700741f8;
      thunk_GFDIUClbc_QcPNgD_wH
                (&LAB_7133d250,puVar19,&DAT_70b0e000,uVar10,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                 unaff_r8,unaff_r10,unaff_r11,unaff_lr);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4d8);
      *puVar7 = 1;
    }
    iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700ba4c8);
    if (*(char *)(iVar5 + 0x1a) != '\0') {
      uVar13 = 0;
      uVar15 = 0;
      do {
        iVar8 = (uVar13 & 7) * 8;
        uVar17 = iVar8 - 0x20;
        bVar18 = (byte)(0x19cfe32d >> iVar8) |
                 (byte)(-0x266c1045 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar17) {
          bVar18 = (byte)(0xd993efbb >> (uVar17 & 0xff));
        }
        *(byte *)(iVar5 + uVar13) = *(byte *)(iVar5 + uVar13) ^ bVar18;
        bVar20 = 0xfffffffe < uVar13;
        bVar1 = uVar15 == 0;
        bVar2 = (0x18 < uVar13) <= uVar15;
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + bVar20;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar5 + 0x1a) = 0;
    }
    DAT_70b36014 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar5,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b36018);
  }
                    /* WARNING: Could not recover jumptable at 0x7133cd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b36014)();
  return;
}


// =========================================================================
// Function: FUN_7142a440
// Entry: 0x7142a440 | Size: 6732 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7142a440(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  byte bVar13;
  ushort *puVar14;
  ushort uVar15;
  ushort uVar16;
  char *pcVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint *puVar23;
  undefined4 *puVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  uint *puVar31;
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
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined4 uVar51;
  uint uVar52;
  int iVar53;
  uint uVar54;
  uint uVar55;
  uint *puVar56;
  uint *puVar57;
  uint uVar58;
  uint *puVar59;
  uint *puVar60;
  uint uVar61;
  uint *puVar62;
  uint uVar63;
  bool bVar64;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined8 uVar65;
  uint auStack_b0 [5];
  uint *apuStack_9c [2];
  int iStack_94;
  int iStack_90;
  uint uStack_8c;
  ushort *puStack_88;
  uint *puStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  uint *puStack_78;
  uint *puStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint uStack_68;
  uint *puStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar59 = auStack_b0;
  puVar60 = auStack_b0;
  DAT_70ffcd18 = 0;
  if (*DAT_70ffc960 != '\0') {
    *DAT_70ffc960 = '\0';
  }
  pcVar17 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf334);
  if (*pcVar17 == '\0') {
    puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf324);
    *(undefined1 *)(puVar24 + 3) = 1;
    *puVar24 = 0xdbfb945b;
    puVar24[1] = 0xdbc67574;
    puVar24[2] = 0xbff09540;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433acc,puVar24,&DAT_70b0e000);
    puVar25 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf334);
    *puVar25 = 1;
  }
  pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf324);
  if (pbVar18[0xc] != 0) {
    *pbVar18 = *pbVar18 ^ 0x29;
    pbVar18[1] = pbVar18[1] ^ 0xf1;
    pbVar18[2] = pbVar18[2] ^ 0x95;
    pbVar18[3] = pbVar18[3] ^ 0xbf;
    pbVar18[0xc] = 0;
    pbVar18[4] = pbVar18[4] ^ 0x11;
    pbVar18[5] = pbVar18[5] ^ 7;
    pbVar18[6] = pbVar18[6] ^ 0x99;
    pbVar18[7] = pbVar18[7] ^ 0xb3;
    pbVar18[8] = pbVar18[8] ^ 0x29;
    pbVar18[9] = pbVar18[9] ^ 0xf1;
    pbVar18[10] = pbVar18[10] ^ 0x95;
    pbVar18[0xb] = pbVar18[0xb] ^ 0xbf;
  }
  uVar19 = imp_strlen(pbVar18);
  if (0xfffffff7 < uVar19) goto LAB_7142ede0;
  auStack_b0[3] = param_2;
  iStack_94 = param_1;
  if (uVar19 < 0xb) {
    uVar52 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar19 << 1));
    if (uVar19 != 0) goto LAB_7142a5a4;
  }
  else {
    uVar52 = thunk_MwhHq((uVar19 | 7) + 1);
    uStack_30 = (uVar19 | 7) + 2;
    uStack_2c = uVar19;
    uStack_28 = uVar52;
LAB_7142a5a4:
    imp___aeabi_memmove(uVar52,pbVar18,uVar19);
  }
  *(undefined1 *)(uVar52 + uVar19) = 0;
  iVar20 = FUN_717c5e7c(&uStack_30);
  DAT_70ffcd24 = iVar20 != 0;
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  pcVar17 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf354);
  if (*pcVar17 == '\0') {
    puVar24 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf344);
    *puVar24 = 0x5fa12a6b;
    puVar24[1] = 0xa1003748;
    puVar24[2] = 0x52b92a6b;
    *(undefined1 *)((int)puVar24 + 0xf) = 1;
    *(undefined4 *)((int)puVar24 + 0xb) = 0x5f324852;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433af8,puVar24,&DAT_70b0e000);
    puVar25 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf354);
    *puVar25 = 1;
  }
  pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf344);
  if (pbVar18[0xf] != 0) {
    *pbVar18 = *pbVar18 ^ 0x19;
    pbVar18[1] = pbVar18[1] ^ 0x4f;
    pbVar18[2] = pbVar18[2] ^ 0xcf;
    pbVar18[3] = pbVar18[3] ^ 0x3b;
    pbVar18[0xf] = 0;
    pbVar18[4] = pbVar18[4] ^ 0x2d;
    pbVar18[5] = pbVar18[5] ^ 0x45;
    pbVar18[6] = pbVar18[6] ^ 0x5f;
    pbVar18[7] = pbVar18[7] ^ 0xd1;
    pbVar18[8] = pbVar18[8] ^ 0x19;
    pbVar18[9] = pbVar18[9] ^ 0x4f;
    pbVar18[10] = pbVar18[10] ^ 0xcf;
    pbVar18[0xb] = pbVar18[0xb] ^ 0x3b;
    pbVar18[0xc] = pbVar18[0xc] ^ 0x2d;
    pbVar18[0xd] = pbVar18[0xd] ^ 0x45;
    pbVar18[0xe] = pbVar18[0xe] ^ 0x5f;
  }
  uVar19 = imp_strlen(pbVar18);
  if (0xfffffff7 < uVar19) {
LAB_7142ede0:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar19 < 0xb) {
    uVar52 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar19 << 1));
    if (uVar19 != 0) goto LAB_7142a734;
  }
  else {
    uVar52 = thunk_MwhHq((uVar19 | 7) + 1);
    uStack_30 = (uVar19 | 7) + 2;
    uStack_2c = uVar19;
    uStack_28 = uVar52;
LAB_7142a734:
    imp___aeabi_memmove(uVar52,pbVar18,uVar19);
  }
  *(undefined1 *)(uVar52 + uVar19) = 0;
  iVar20 = FUN_717c5e7c(&uStack_30);
  DAT_70ffcd25 = iVar20 != 0;
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  DAT_70ffcd18 = 1;
  uVar19 = FUN_714cc744();
  iVar20 = FUN_714ccb40();
  iVar21 = FUN_714cc744();
  if (0x280 < iVar21) {
    iVar53 = *(int *)(DAT_70c38f30 + 0x28);
    iVar21 = thunk_FUN_714cc744();
    uVar19 = ((iVar21 + -0x280) * iVar53) / 100 + 0x280;
  }
  uVar22 = FUN_714cc744();
  cVar12 = DAT_70ffcd26;
  cVar3 = DAT_70ffcd24;
  uVar52 = 1;
  if (1 < uVar19) {
    uVar52 = uVar19;
  }
  uStack_8c = uVar52 + 3 & 0xfffffffc;
  iVar20 = FUN_71ba0440(uVar52 * iVar20,uVar22);
  auStack_b0[4] = DAT_700c1ad0;
  if (cVar3 == '\0' && cVar12 == '\0') {
    DAT_710eaf4d = DAT_70ffcd27;
    if (DAT_70ffcd27 == 0) goto LAB_7142a888;
  }
  else {
    DAT_710eaf4d = 1;
  }
  DAT_700c1ad0 = 0x1400000;
LAB_7142a888:
  FUN_713a7794(uStack_8c,iVar20 + 3U & 0xfffffffc);
  if (DAT_70ffcd24 != '\0') {
    FUN_713a8558();
  }
  DAT_70ffcd18 = 3;
  if (*DAT_70ffc9a8 == '\0') {
    thunk_FUN_71712bec();
  }
  FUN_71359a0c();
  FUN_71447fa0();
  DAT_70ffcd18 = 4;
  *DAT_70ffd370 = 0;
  bVar13 = DAT_70ffcd27;
  cVar3 = DAT_70ffcd25;
  iVar20 = DAT_70c38ed8;
  if (DAT_70ffcd24 == '\0' && DAT_70ffcd26 == '\0') {
    DAT_710eaf4c = DAT_70ffcd25;
    uVar19 = (uint)DAT_70ffcd27;
    apuStack_9c[1] = (uint *)(DAT_70c38ed8 + 0x24);
    *apuStack_9c[1] = uVar19;
    *(uint *)(iVar20 + 0x2c) = uVar19;
    uVar15 = 1;
    puStack_84 = (uint *)(iVar20 + 0x2c);
    if (bVar13 == 0 && cVar3 == '\0') {
      uVar15 = FUN_7156ab28();
      uVar15 = uVar15 ^ 1;
    }
  }
  else {
    uVar15 = 1;
    DAT_710eaf4c = '\x01';
    apuStack_9c[1] = (uint *)(DAT_70c38ed8 + 0x24);
    *apuStack_9c[1] = 1;
    *(uint *)(iVar20 + 0x2c) = 1;
    puStack_84 = (uint *)(iVar20 + 0x2c);
  }
  puStack_88 = (ushort *)(DAT_70b889d4 + 0x110);
  *puStack_88 = uVar15;
  puVar23 = auStack_b0;
  if (*DAT_70ffc9a8 == '\0') {
    FUN_713eb4b8(1);
    FUN_713cf634();
    puVar23 = auStack_b0;
  }
  while( true ) {
    uVar19 = *puVar23 ^ 0x6a4dab1f;
    uVar52 = uVar19 | puVar23[1] ^ 0x679b29b;
    bVar64 = uVar52 == 0;
    if (bVar64) {
      uVar52 = puVar23[3] ^ 0xfcc126c8;
      uVar19 = puVar23[2] ^ 0x6efdd0cf;
    }
    if ((bVar64 && (uVar19 == 0 && uVar52 == 0)) &&
       (puVar23[4] == 0xbefc55d6 && puVar23[5] == 0x370f3a77)) break;
    puVar23 = puVar23 + 1;
  }
  puVar31 = puVar23 + 0xc01a;
  auStack_b0[2] = 0x27d4eb7f;
  auStack_b0[1] = 0x56d677d6;
  iStack_90 = iVar20;
  if ((int)*puVar31 < 9) {
    *puVar31 = *puVar31 + 1;
    apuStack_9c[0] = puVar23 + 0xc019;
    puStack_74 = (uint *)*apuStack_9c[0];
    puStack_78 = puVar23 + 0x800b;
    if ((uint *)0xfff < puStack_74) {
      puStack_74 = (uint *)0x0;
      *apuStack_9c[0] = 0;
    }
    uVar19 = 0;
LAB_7142b280:
    if ((int)puStack_74 + uVar19 >> 0xc == 0) {
      iVar20 = 0x27d4eb7f;
      puVar23 = puStack_78 + (int)((int)puStack_74 + uVar19) * 4;
      puVar31 = (uint *)*puVar23;
      puStack_6c = (uint *)puVar23[2];
      puVar57 = (uint *)puVar23[1];
      puStack_70 = (uint *)puVar23[3];
      uVar52 = 0x56d677d6;
      if (&DAT_0000001f < puVar57) {
        uStack_34 = 0x61c8869e;
        iVar20 = 0;
        puStack_38 = (uint *)0x40801011;
        uStack_3c = 0x50;
        uStack_4c = 0xba94458a;
        uStack_40 = 0x6854fb60;
        uVar48 = 0x60ea283e;
        uStack_44 = 0xc2b2ae8d;
        uStack_48 = 0xee40c5e7;
        puVar23 = puVar31;
        puVar56 = puVar57;
        do {
          lVar4 = (ulonglong)puVar23[6] * 0x27d4eb4f;
          uVar52 = (uint)lVar4;
          uVar32 = uVar52 + uStack_4c;
          uVar52 = puVar23[7] * 0x27d4eb4f +
                   puVar23[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                   (uint)CARRY4(uVar52,uStack_4c);
          uVar58 = uVar52 >> 1;
          uStack_54 = uVar32 * -0x80000000 | uVar58;
          uVar32 = uVar32 >> 1;
          uStack_58 = uVar52 * -0x80000000 | uVar32;
          uStack_4c = (uint)((ulonglong)uStack_54 * 0x85ebca87);
          uStack_34 = uStack_58 * -0x7a143579 +
                      uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar23[4] * 0x27d4eb4f;
          uVar52 = (uint)lVar4;
          puVar62 = puVar23 + 1;
          uVar54 = uVar52 + (int)puStack_38;
          uVar52 = puVar23[5] * 0x27d4eb4f +
                   puVar23[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_3c +
                   (uint)CARRY4(uVar52,(uint)puStack_38);
          uVar47 = uVar52 >> 1;
          uStack_60 = uVar54 * -0x80000000 | uVar47;
          uVar54 = uVar54 >> 1;
          uStack_5c = uVar52 * -0x80000000 | uVar54;
          puStack_38 = (uint *)((ulonglong)uStack_60 * 0x85ebca87);
          puVar1 = puVar23 + 3;
          uStack_3c = uStack_5c * -0x7a143579 +
                      uStack_60 * -0x61c8864f + (int)((ulonglong)uStack_60 * 0x85ebca87 >> 0x20);
          uVar42 = *puVar23;
          puVar2 = puVar23 + 2;
          puVar23 = puVar23 + 8;
          lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar52 = (uint)lVar4;
          uVar33 = uVar52 + uStack_40;
          uVar52 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_44 + (uint)CARRY4(uVar52,uStack_40);
          uVar55 = uVar52 >> 1;
          puStack_64 = (uint *)(uVar33 * -0x80000000 | uVar55);
          uStack_40 = (uint)(ZEXT48(puStack_64) * 0x85ebca87);
          uVar33 = uVar33 >> 1;
          uStack_50 = uVar52 * -0x80000000 | uVar33;
          uStack_44 = uStack_50 * -0x7a143579 +
                      (int)puStack_64 * -0x61c8864f + (int)(ZEXT48(puStack_64) * 0x85ebca87 >> 0x20)
          ;
          lVar4 = (ulonglong)uVar42 * 0x27d4eb4f;
          uVar52 = (uint)lVar4;
          uVar34 = uVar52 + uStack_48;
          uVar52 = *puVar62 * 0x27d4eb4f + uVar42 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar48 + (uint)CARRY4(uVar52,uStack_48);
          bVar64 = puVar56 < (uint *)0x20;
          puVar56 = puVar56 + -8;
          iVar20 = iVar20 - (uint)bVar64;
          uVar42 = uVar52 >> 1;
          uVar63 = uVar34 * -0x80000000 | uVar42;
          uVar34 = uVar34 >> 1;
          uVar52 = uVar52 * -0x80000000 | uVar34;
          uStack_48 = (uint)((ulonglong)uVar63 * 0x85ebca87);
          uVar48 = uVar52 * -0x7a143579 +
                   uVar63 * -0x61c8864f + (int)((ulonglong)uVar63 * 0x85ebca87 >> 0x20);
        } while ((uint)(puVar56 < (uint *)0x20) <= (uint)-iVar20);
        uVar43 = uStack_48 << 1 | uVar48 >> 0x1f;
        uVar49 = uStack_40 << 7 | uStack_44 >> 0x19;
        uVar44 = uVar49 + uVar43;
        uVar41 = uStack_3c * 0x1000;
        uVar61 = (uint)puStack_38 >> 0x14;
        uVar50 = (int)puStack_38 << 0xc | uStack_3c >> 0x14;
        uVar45 = uVar44 + uVar50;
        puStack_38 = (uint *)((ulonglong)uVar63 * 0x80000000 >> 0x20);
        uVar26 = uStack_4c << 0x12 | uStack_34 >> 0xe;
        uVar35 = (uint)((ulonglong)uVar63 * 0x80000000) |
                 uVar52 * 0xf796ca9 +
                 uVar63 * -0x210ca4ff + (int)((ulonglong)uVar63 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar35 * 0x85ebca87;
        uVar63 = uVar45 + uVar26 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar63 * 0x85ebca87;
        uStack_3c = (uint)lVar5;
        uVar46 = (uint)(ZEXT48(puStack_64) * 0x80000000) |
                 uStack_50 * 0xf796ca9 +
                 (int)puStack_64 * -0x210ca4ff + (int)(ZEXT48(puStack_64) * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar46 * 0x85ebca87;
        uVar27 = uStack_3c + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar27 * 0x85ebca87;
        uVar36 = (uint)lVar7;
        uVar37 = (uint)((ulonglong)uStack_60 * 0x80000000) |
                 uStack_5c * 0xf796ca9 +
                 uStack_60 * -0x210ca4ff + (int)((ulonglong)uStack_60 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar37 * 0x85ebca87;
        uVar28 = uVar36 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar28 * 0x85ebca87;
        uVar38 = (uint)lVar9;
        uVar39 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                 uStack_58 * 0xf796ca9 +
                 uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar39 * 0x85ebca87;
        uVar29 = uVar38 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar29 * 0x85ebca87;
        uVar40 = (uint)lVar11;
        uVar52 = uVar40 + 0xc2b2ae63;
        iVar20 = (((((uStack_44 * 0x80 | uStack_40 >> 0x19) + (uVar48 * 2 | uStack_48 >> 0x1f) +
                     (uint)CARRY4(uVar49,uVar43) + (uVar41 | uVar61) + (uint)CARRY4(uVar44,uVar50) +
                     (uStack_34 * 0x40000 | uStack_4c >> 0xe) + (uint)CARRY4(uVar45,uVar26) ^
                    (int)(puStack_38 + uVar42 * -0x1e10d26b + uVar34 * -0x20000000) * -0x7a143579 +
                    uVar35 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                    uVar63 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                    (uint)(0x3d4d519c < uStack_3c) ^
                   (uVar33 * -0x80000000 +
                   uVar55 * -0x784349ac + (int)(ZEXT48(puStack_64) * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                  (uVar54 * -0x80000000 +
                  uVar47 * -0x784349ac + (int)((ulonglong)uStack_60 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar38) ^
                 (uVar32 * -0x80000000 +
                 uVar58 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                 -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar40);
        puStack_80 = puVar57;
        puStack_7c = puVar31;
      }
      uVar48 = uVar52 + (int)puVar57;
      uVar52 = iVar20 + (uint)CARRY4(uVar52,(uint)puVar57);
      puVar31 = (uint *)((int)puVar31 + ((uint)puVar57 & 0xffffffe0));
      uVar58 = (uint)puVar57 & 0x1f;
      uVar32 = 0;
      do {
        if (uVar32 == 0 && (7 < uVar58) <= uVar32) {
          if (uVar32 == 0 && (3 < uVar58) <= uVar32) {
            if (uVar58 == 0 && uVar32 == 0) goto LAB_7142b204;
            lVar4 = (ulonglong)(uint)(byte)*puVar31 * 0x165667c5;
            uVar47 = (uint)lVar4 ^ uVar48;
            uVar52 = (uint)(byte)*puVar31 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar52;
            uVar54 = uVar47 << 0xb | uVar52 >> 0x15;
            lVar4 = (ulonglong)uVar54 * 0x85ebca87;
            uVar48 = (uint)lVar4;
            uVar52 = (uVar52 << 0xb | uVar47 >> 0x15) * -0x7a143579 +
                     uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
            uVar54 = 0xffffffff;
            iVar20 = 1;
          }
          else {
            lVar4 = (ulonglong)*puVar31 * 0x85ebca87;
            uVar47 = (uint)lVar4 ^ uVar48;
            uVar52 = *puVar31 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar52;
            uVar55 = uVar47 << 0x17 | uVar52 >> 9;
            lVar4 = (ulonglong)uVar55 * 0x27d4eb4f;
            uVar54 = (uint)lVar4;
            uVar48 = uVar54 + 0x9e3779f9;
            iVar20 = 4;
            uVar52 = (uVar52 << 0x17 | uVar47 >> 9) * 0x27d4eb4f +
                     uVar55 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar54);
            uVar54 = 0xfffffffc;
          }
        }
        else {
          uVar55 = *puVar31;
          uVar54 = (uint)((ulonglong)uVar55 * 0x80000000) |
                   puVar31[1] * 0x27d4eb4f +
                   uVar55 * -0x3d4d51c3 + (int)((ulonglong)uVar55 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar54 * 0x85ebca87;
          uVar47 = (uint)lVar4 ^ uVar48;
          uVar52 = (puVar31[1] * -0x80000000 +
                   uVar55 * -0x6c158a59 + (int)((ulonglong)uVar55 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar52;
          uVar33 = uVar47 << 0x1b | uVar52 >> 5;
          lVar4 = (ulonglong)uVar33 * 0x85ebca87;
          uVar55 = (uint)lVar4;
          uVar54 = 0xfffffff8;
          uVar48 = uVar55 + 0xc2b2ae63;
          iVar20 = 8;
          uVar52 = (uVar52 << 0x1b | uVar47 >> 5) * -0x7a143579 +
                   uVar33 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar55);
          puStack_38 = puVar31;
          uStack_34 = uVar32;
        }
        bVar64 = CARRY4(uVar54,uVar58);
        uVar58 = uVar54 + uVar58;
        puVar31 = (uint *)((int)puVar31 + iVar20);
        uVar32 = (uVar32 - 1) + (uint)bVar64;
      } while( true );
    }
    goto LAB_7142b274;
  }
  uVar19 = 0;
  *puVar31 = 0;
  apuStack_9c[0] = puVar23 + 0xc018;
  if (*apuStack_9c[0] >> 0xc != 0) {
    *apuStack_9c[0] = 0;
  }
  puStack_74 = puVar23 + 0x400b;
  puStack_78 = (uint *)*apuStack_9c[0];
LAB_7142ab64:
  if ((int)puStack_78 + uVar19 >> 0xc == 0) {
    puVar31 = puVar23 + 0x400b + ((int)puStack_78 + uVar19) * 4;
    puVar56 = (uint *)*puVar31;
    puStack_6c = (uint *)puVar31[2];
    puVar57 = (uint *)puVar31[1];
    puStack_70 = (uint *)puVar31[3];
    uVar52 = 0x56d677d6;
    iVar20 = 0x27d4eb7f;
    if (&DAT_0000001f < puVar57) {
      uStack_34 = 0x61c8869e;
      puStack_38 = (uint *)0x50;
      uStack_3c = 0x6854fb60;
      iVar20 = 0;
      uStack_44 = 0xba94458a;
      uStack_4c = 0x40801011;
      uVar48 = 0xee40c5e7;
      uStack_40 = 0xc2b2ae8d;
      uVar52 = 0x60ea283e;
      puVar31 = puVar56;
      puVar62 = puVar57;
      do {
        uStack_48 = uVar52;
        lVar4 = (ulonglong)puVar31[6] * 0x27d4eb4f;
        uVar52 = (uint)lVar4;
        uVar32 = uVar52 + uStack_44;
        uVar52 = puVar31[7] * 0x27d4eb4f +
                 puVar31[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                 (uint)CARRY4(uVar52,uStack_44);
        uVar58 = uVar52 >> 1;
        uStack_54 = uVar32 * -0x80000000 | uVar58;
        uStack_44 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
        uVar32 = uVar32 >> 1;
        uStack_58 = uVar52 * -0x80000000 | uVar32;
        uStack_34 = uStack_58 * -0x7a143579 +
                    uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
        puVar1 = puVar31 + 3;
        lVar4 = (ulonglong)puVar31[4] * 0x27d4eb4f;
        uVar52 = (uint)lVar4;
        uVar54 = uVar52 + uStack_4c;
        uVar52 = puVar31[5] * 0x27d4eb4f +
                 puVar31[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + (int)puStack_38 +
                 (uint)CARRY4(uVar52,uStack_4c);
        uVar47 = uVar52 >> 1;
        uStack_5c = uVar54 * -0x80000000 | uVar47;
        uStack_4c = (uint)((ulonglong)uStack_5c * 0x85ebca87);
        uVar54 = uVar54 >> 1;
        uStack_60 = uVar52 * -0x80000000 | uVar54;
        puStack_38 = (uint *)(uStack_60 * -0x7a143579 +
                             uStack_5c * -0x61c8864f +
                             (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20));
        puVar2 = puVar31 + 2;
        uVar42 = *puVar31;
        uStack_50 = puVar31[1];
        puVar31 = puVar31 + 8;
        lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
        uVar52 = (uint)lVar4;
        uVar33 = uVar52 + uStack_3c;
        uVar52 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                 uStack_40 + (uint)CARRY4(uVar52,uStack_3c);
        uVar55 = uVar52 >> 1;
        uVar63 = uVar33 * -0x80000000 | uVar55;
        uVar33 = uVar33 >> 1;
        puStack_64 = (uint *)(uVar52 * -0x80000000 | uVar33);
        uStack_3c = (uint)((ulonglong)uVar63 * 0x85ebca87);
        uStack_40 = (int)puStack_64 * -0x7a143579 +
                    uVar63 * -0x61c8864f + (int)((ulonglong)uVar63 * 0x85ebca87 >> 0x20);
        lVar4 = (ulonglong)uVar42 * 0x27d4eb4f;
        uVar52 = (uint)lVar4;
        uVar34 = uVar52 + uVar48;
        uVar52 = uStack_50 * 0x27d4eb4f + uVar42 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                 uStack_48 + (uint)CARRY4(uVar52,uVar48);
        bVar64 = puVar62 < (uint *)0x20;
        puVar62 = puVar62 + -8;
        uVar42 = uVar52 >> 1;
        uVar61 = uVar34 * -0x80000000 | uVar42;
        iVar20 = iVar20 - (uint)bVar64;
        uVar48 = (uint)((ulonglong)uVar61 * 0x85ebca87);
        uVar34 = uVar34 >> 1;
        uVar41 = uVar52 * -0x80000000 | uVar34;
        uVar52 = uVar41 * -0x7a143579 +
                 uVar61 * -0x61c8864f + (int)((ulonglong)uVar61 * 0x85ebca87 >> 0x20);
      } while ((uint)(puVar62 < (uint *)0x20) <= (uint)-iVar20);
      uVar28 = uVar48 << 1 | uVar52 >> 0x1f;
      uVar26 = uStack_3c << 7 | uStack_40 >> 0x19;
      uVar29 = uVar26 + uVar28;
      uVar27 = uStack_4c << 0xc | (uint)puStack_38 >> 0x14;
      uVar44 = uVar29 + uVar27;
      puStack_38 = (uint *)((uStack_40 * 0x80 | uStack_3c >> 0x19) + (uVar52 * 2 | uVar48 >> 0x1f) +
                            (uint)CARRY4(uVar26,uVar28) +
                            ((int)puStack_38 * 0x1000 | uStack_4c >> 0x14) +
                           (uint)CARRY4(uVar29,uVar27));
      uVar48 = uStack_44 << 0x12 | uStack_34 >> 0xe;
      uVar26 = (uint)((ulonglong)uVar61 * 0x80000000) |
               uVar41 * 0xf796ca9 +
               uVar61 * -0x210ca4ff + (int)((ulonglong)uVar61 * 0xf796ca9 >> 0x20) >> 1;
      lVar4 = (ulonglong)uVar26 * 0x85ebca87;
      uVar41 = uVar44 + uVar48 ^ (uint)lVar4;
      lVar5 = (ulonglong)uVar41 * 0x85ebca87;
      uVar43 = (uint)lVar5;
      uVar38 = (uint)((ulonglong)uVar63 * 0x80000000) |
               (int)puStack_64 * 0xf796ca9 +
               uVar63 * -0x210ca4ff + (int)((ulonglong)uVar63 * 0xf796ca9 >> 0x20) >> 1;
      lVar6 = (ulonglong)uVar38 * 0x85ebca87;
      uVar27 = uVar43 + 0xc2b2ae63 ^ (uint)lVar6;
      lVar7 = (ulonglong)uVar27 * 0x85ebca87;
      uVar39 = (uint)lVar7;
      uVar40 = (uint)((ulonglong)uStack_5c * 0x80000000) |
               uStack_60 * 0xf796ca9 +
               uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
      lVar8 = (ulonglong)uVar40 * 0x85ebca87;
      uVar28 = uVar39 + 0xc2b2ae63 ^ (uint)lVar8;
      lVar9 = (ulonglong)uVar28 * 0x85ebca87;
      uVar35 = (uint)lVar9;
      uVar36 = (uint)((ulonglong)uStack_54 * 0x80000000) |
               uStack_58 * 0xf796ca9 +
               uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
      lVar10 = (ulonglong)uVar36 * 0x85ebca87;
      uVar29 = uVar35 + 0xc2b2ae63 ^ (uint)lVar10;
      lVar11 = (ulonglong)uVar29 * 0x85ebca87;
      uVar37 = (uint)lVar11;
      uVar52 = uVar37 + 0xc2b2ae63;
      iVar20 = (((((uint)((int)puStack_38 +
                         (uint)CARRY4(uVar44,uVar48) + (uStack_34 * 0x40000 | uStack_44 >> 0xe)) ^
                  (uVar34 * -0x80000000 +
                  uVar42 * -0x784349ac + (int)((ulonglong)uVar61 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                  -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar43) ^
                 (uVar33 * -0x80000000 +
                 uVar55 * -0x784349ac + (int)((ulonglong)uVar63 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) * -0x7a143579 +
                 uVar27 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar39) ^
                (uVar54 * -0x80000000 +
                uVar47 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) * -0x7a143579
                + uVar28 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589 +
                (uint)(0x3d4d519c < uVar35) ^
               (uVar32 * -0x80000000 +
               uVar58 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
               -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579
               + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar37);
      puStack_80 = puVar57;
      puStack_7c = puVar56;
    }
    uVar48 = uVar52 + (int)puVar57;
    puVar56 = (uint *)((int)puVar56 + ((uint)puVar57 & 0xffffffe0));
    uVar58 = (uint)puVar57 & 0x1f;
    uVar52 = iVar20 + (uint)CARRY4(uVar52,(uint)puVar57);
    uVar32 = 0;
    do {
      if (uVar32 == 0 && (7 < uVar58) <= uVar32) {
        if (uVar32 == 0 && (3 < uVar58) <= uVar32) {
          if (uVar58 == 0 && uVar32 == 0) goto LAB_7142aae8;
          lVar4 = (ulonglong)(uint)(byte)*puVar56 * 0x165667c5;
          uVar47 = (uint)lVar4 ^ uVar48;
          uVar52 = (uint)(byte)*puVar56 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar52;
          uVar54 = uVar47 << 0xb | uVar52 >> 0x15;
          lVar4 = (ulonglong)uVar54 * 0x85ebca87;
          uVar48 = (uint)lVar4;
          uVar52 = (uVar52 << 0xb | uVar47 >> 0x15) * -0x7a143579 +
                   uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20);
          uVar54 = 0xffffffff;
          iVar20 = 1;
        }
        else {
          lVar4 = (ulonglong)*puVar56 * 0x85ebca87;
          uVar47 = (uint)lVar4 ^ uVar48;
          uVar52 = *puVar56 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar52;
          uVar55 = uVar47 << 0x17 | uVar52 >> 9;
          lVar4 = (ulonglong)uVar55 * 0x27d4eb4f;
          uVar54 = (uint)lVar4;
          uVar48 = uVar54 + 0x9e3779f9;
          iVar20 = 4;
          uVar52 = (uVar52 << 0x17 | uVar47 >> 9) * 0x27d4eb4f +
                   uVar55 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                   (uint)(0x61c88606 < uVar54);
          uVar54 = 0xfffffffc;
        }
      }
      else {
        uVar55 = *puVar56;
        uVar54 = (uint)((ulonglong)uVar55 * 0x80000000) |
                 puVar56[1] * 0x27d4eb4f +
                 uVar55 * -0x3d4d51c3 + (int)((ulonglong)uVar55 * 0x27d4eb4f >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar54 * 0x85ebca87;
        uVar47 = (uint)lVar4 ^ uVar48;
        uVar52 = (puVar56[1] * -0x80000000 +
                 uVar55 * -0x6c158a59 + (int)((ulonglong)uVar55 * 0x80000000 >> 0x20)) * -0x7a143579
                 + uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar52;
        uVar33 = uVar47 << 0x1b | uVar52 >> 5;
        lVar4 = (ulonglong)uVar33 * 0x85ebca87;
        uVar55 = (uint)lVar4;
        uVar54 = 0xfffffff8;
        uVar48 = uVar55 + 0xc2b2ae63;
        iVar20 = 8;
        uVar52 = (uVar52 << 0x1b | uVar47 >> 5) * -0x7a143579 +
                 uVar33 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar55);
      }
      bVar64 = CARRY4(uVar54,uVar58);
      uVar58 = uVar54 + uVar58;
      puVar56 = (uint *)((int)puVar56 + iVar20);
      uVar32 = (uVar32 - 1) + (uint)bVar64;
    } while( true );
  }
  goto LAB_7142ab58;
LAB_7142b204:
  uVar48 = uVar48 ^ uVar52 >> 1;
  lVar4 = (ulonglong)uVar48 * 0x27d4eb4f;
  uVar58 = (uint)lVar4;
  uVar52 = uVar52 * 0x27d4eb4f + uVar48 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar58 = (uVar58 >> 0x1d | uVar52 * 8) ^ uVar58;
  lVar4 = (ulonglong)uVar58 * 0x9e3779f9;
  puVar23 = (uint *)((uVar52 ^ uVar52 >> 0x1d) * -0x61c88607 +
                    uVar58 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  uStack_68 = uVar19;
  if (puStack_6c != (uint *)((uint)puVar23 ^ (uint)lVar4) || puStack_70 != puVar23)
  goto LAB_7142eeb4;
LAB_7142b274:
  uVar19 = uVar19 + 1;
  if (uVar19 == 0x12) goto LAB_7142b948;
  goto LAB_7142b280;
LAB_7142b948:
  iVar20 = 0x12;
  goto LAB_7142b94c;
LAB_7142aae8:
  uVar48 = uVar48 ^ uVar52 >> 1;
  lVar4 = (ulonglong)uVar48 * 0x27d4eb4f;
  uVar58 = (uint)lVar4;
  uVar52 = uVar52 * 0x27d4eb4f + uVar48 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar58 = (uVar58 >> 0x1d | uVar52 * 8) ^ uVar58;
  lVar4 = (ulonglong)uVar58 * 0x9e3779f9;
  puVar31 = (uint *)((uVar52 ^ uVar52 >> 0x1d) * -0x61c88607 +
                    uVar58 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  uStack_68 = uVar19;
  if (puStack_6c == (uint *)((uint)puVar31 ^ (uint)lVar4) && puStack_70 == puVar31) {
LAB_7142ab58:
    uVar19 = uVar19 + 1;
    if (uVar19 == 0x16) goto LAB_7142b930;
    goto LAB_7142ab64;
  }
  pbVar18 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
  do {
    *pbVar18 = *pbVar18 ^ 0x50;
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != (byte *)0x3c);
  uRam00000000 = 0xe3b00004;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7142eeb4:
  pbVar18 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
  do {
    *pbVar18 = *pbVar18 ^ 0x50;
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != (byte *)0x3c);
  uRam00000000 = 0xe3b00002;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
  goto LAB_7142ef68;
LAB_7142ca0c:
  uVar52 = (uint)puVar25 ^ uVar19 >> 1;
  lVar4 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar4;
  uVar19 = uVar19 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar19 * 8) ^ uVar48;
  lVar4 = (ulonglong)uVar48 * 0x9e3779f9;
  puVar59 = (uint *)((uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
                    uVar48 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  if (puVar23[7] != ((uint)puVar59 ^ (uint)lVar4) || (uint *)puVar23[8] != puVar59)
  goto LAB_7142f1e4;
  puVar31 = (uint *)puVar23[1];
  puVar57 = puVar23;
  puVar59 = puStack_70;
  if ((uint *)puVar23[1] == (uint *)0x0) {
    do {
      puVar23 = (uint *)puVar57[2];
      bVar64 = (uint *)*puVar23 != puVar57;
      puVar57 = puVar23;
    } while (bVar64);
  }
  else {
    do {
      puVar23 = puVar31;
      puVar31 = (uint *)*puVar23;
    } while ((uint *)*puVar23 != (uint *)0x0);
  }
  goto LAB_7142c378;
LAB_7142d184:
  uVar52 = uVar52 ^ uVar19 >> 1;
  lVar4 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar4;
  uVar19 = uVar19 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar19 * 8) ^ uVar48;
  lVar4 = (ulonglong)uVar48 * 0x9e3779f9;
  puVar23 = (uint *)((uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
                    uVar48 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  if (puVar59[0xc011] == ((uint)puVar23 ^ (uint)lVar4) && puStack_6c == puVar23) goto LAB_7142d214;
  goto LAB_7142f324;
LAB_7142cab8:
  uVar52 = (uint)puVar25 ^ uVar19 >> 1;
  lVar4 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar4;
  uVar19 = uVar19 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar19 * 8) ^ uVar48;
  lVar4 = (ulonglong)uVar48 * 0x9e3779f9;
  puVar23 = (uint *)((uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
                    uVar48 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  if ((uint *)puVar59[0x4009] != (uint *)((uint)puVar23 ^ (uint)lVar4) ||
      (uint *)puVar59[0x400a] != puVar23) goto LAB_7142f284;
  goto LAB_7142d214;
LAB_7142e4d0:
  uVar52 = (uint)puVar25 ^ uVar19 >> 1;
  lVar4 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar4;
  uVar19 = uVar19 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar19 * 8) ^ uVar48;
  lVar4 = (ulonglong)uVar48 * 0x9e3779f9;
  puVar60 = (uint *)((uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
                    uVar48 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  if (puVar59[7] != ((uint)puVar60 ^ (uint)lVar4) || (uint *)puVar59[8] != puVar60)
  goto LAB_7142f640;
  puVar23 = (uint *)puVar59[1];
  puVar31 = puVar59;
  puVar60 = puStack_70;
  if ((uint *)puVar59[1] == (uint *)0x0) {
    do {
      puVar59 = (uint *)puVar31[2];
      bVar64 = (uint *)*puVar59 != puVar31;
      puVar31 = puVar59;
    } while (bVar64);
  }
  else {
    do {
      puVar59 = puVar23;
      puVar23 = (uint *)*puVar59;
    } while ((uint *)*puVar59 != (uint *)0x0);
  }
  goto LAB_7142de1c;
LAB_7142ec40:
  uVar52 = (uint)puVar25 ^ uVar19 >> 1;
  lVar4 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar4;
  uVar19 = uVar19 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar19 * 8) ^ uVar48;
  lVar4 = (ulonglong)uVar48 * 0x9e3779f9;
  uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
           uVar48 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20);
  if ((uint *)puVar60[0xc011] != (uint *)(uVar19 ^ (uint)lVar4) || uStack_68 != uVar19)
  goto LAB_7142f780;
  goto LAB_7142eca8;
LAB_7142e57c:
  uVar52 = (uint)puVar25 ^ uVar19 >> 1;
  lVar4 = (ulonglong)uVar52 * 0x27d4eb4f;
  uVar48 = (uint)lVar4;
  uVar19 = uVar19 * 0x27d4eb4f + uVar52 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20);
  uVar48 = (uVar48 >> 0x1d | uVar19 * 8) ^ uVar48;
  lVar4 = (ulonglong)uVar48 * 0x9e3779f9;
  puVar59 = (uint *)((uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 +
                    uVar48 * 0x165667b1 + (int)((ulonglong)lVar4 >> 0x20));
  if ((uint *)puVar60[0x4009] == (uint *)((uint)puVar59 ^ (uint)lVar4) &&
      (uint *)puVar60[0x400a] == puVar59) goto LAB_7142eca8;
  goto LAB_7142f6e0;
LAB_7142b930:
  iVar20 = 0x16;
LAB_7142b94c:
  iVar21 = -0x61c8864f;
  *apuStack_9c[0] = *apuStack_9c[0] + iVar20;
  *puStack_88 = 0;
  DAT_710eaf4c = '\0';
  DAT_70ffcd18 = 5;
  *apuStack_9c[1] = 0;
  *puStack_84 = 0;
  FUN_7130c838(DAT_70b2fb54);
  FUN_7140d3c4(*DAT_70ffc978);
  DAT_70ffcd18 = 6;
  if (iStack_94 == 0) {
    DAT_70ffcd18 = 6;
    return;
  }
  if ((*(int *)(DAT_70c38f4c + 0x280) != 0) && (iVar20 = FUN_713f6aec(), iVar20 != 0)) {
    FUN_713f3ee0(0xa0,0,1);
  }
  puVar14 = puStack_88;
  if (uStack_8c == 0) {
    DAT_700c1ad0 = auStack_b0[4];
    return;
  }
  uVar15 = *puStack_88;
  uVar16 = 1;
  if (DAT_70ffcd24 == '\0' && DAT_70ffcd26 == '\0') {
    uVar16 = (ushort)DAT_70ffcd27;
  }
  *puStack_88 = uVar16 | uVar15 != 0;
  FUN_713f3ae4();
  *puVar14 = (ushort)(uVar15 != 0);
  if (auStack_b0[3] == 0) {
    FUN_71410d88(DAT_70ffc978[1]);
  }
  FUN_71610830(&DAT_711acf38);
  DAT_70ffcd18 = 7;
  while( true ) {
    uVar52 = puVar59[1] ^ 0x679b29b;
    uVar19 = *puVar59 ^ 0x6a4dab1f | uVar52;
    bVar64 = uVar19 == 0;
    if (bVar64) {
      uVar52 = puVar59[3] ^ 0xfcc126c8;
      uVar19 = puVar59[2] ^ 0x6efdd0cf;
    }
    if ((bVar64 && (uVar19 == 0 && uVar52 == 0)) &&
       (puVar59[4] == 0xbefc55d6 && puVar59[5] == 0x370f3a77)) break;
    puVar59 = puVar59 + 1;
  }
  bVar64 = (char)puVar59[0x4006] != '\0';
  cVar3 = '\0';
  if (bVar64) {
    cVar3 = *(char *)((int)puVar59 + 0x10019);
  }
  if (bVar64 && cVar3 != '\0') goto LAB_7142bbc8;
  do {
    iVar21 = -1;
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    puVar59 = (uint *)0x0;
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b0003a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142bbc8:
  } while (*(char *)((int)puVar59 + 0x1001a) == '\0');
  if (puVar59[0xc01e] == puVar59[0xc01c]) {
LAB_7142ef68:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b00006;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f004:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b00008;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f0a4:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f144:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b00036;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f1e4:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000c;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f284:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000e;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f324:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b00010;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f3c4:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b00006;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f460:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b00008;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_7142f500:
    pbVar18 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
    do {
      *pbVar18 = *pbVar18 ^ 0x50;
      pbVar18 = pbVar18 + 1;
    } while (pbVar18 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
  }
  else {
    uVar19 = puVar59[0xc01c];
    if ((uVar19 < 0x7142bc04) && (0x7142bc04 < puVar59[0xc01d] + uVar19)) goto LAB_7142f004;
    uVar19 = puVar59[0xc01e];
    if ((0x7142bc04 < uVar19) || (puVar59[0xc01f] + uVar19 < 0x7142bc04)) goto LAB_7142f0a4;
    iVar20 = FUN_717d2588();
    if (iVar20 != 0xa1b) goto LAB_7142f144;
    puStack_80 = puVar59 + 0xc01b;
    uVar19 = *puStack_80;
    if (uVar19 == 0x1e) {
      *puStack_80 = 0;
      uVar19 = *puStack_80;
    }
    puStack_70 = puVar59;
    if (((uVar19 & 3) == 0) && (puVar59[0xc017] != 0)) {
      puVar24 = (undefined4 *)puVar59[0xc017];
      puStack_74 = puVar24 + 1;
      puVar23 = (uint *)*puVar24;
LAB_7142c378:
      if (puVar23 != puStack_74) {
        puVar31 = (uint *)puVar23[6];
        iVar20 = 0x27d4eb7f;
        uStack_68 = puVar23[7];
        puVar59 = (uint *)puVar23[5];
        puStack_6c = (uint *)puVar23[8];
        uVar19 = 0x56d677d6;
        puStack_64 = puVar23;
        if (&DAT_0000001f < puVar31) {
          uStack_34 = 0xba94458a;
          iVar20 = 0;
          puStack_38 = (uint *)0x61c8869e;
          uVar19 = 0x60ea283e;
          uStack_3c = 0x40801011;
          uStack_40 = 0x50;
          uStack_44 = 0x6854fb60;
          uStack_48 = 0xc2b2ae8d;
          puStack_7c = puVar31;
          uStack_4c = 0xee40c5e7;
          puStack_78 = puVar59;
          puVar57 = puVar31;
          puVar56 = puVar59;
          do {
            lVar4 = (ulonglong)puVar56[6] * 0x27d4eb4f;
            uVar52 = (uint)lVar4;
            uStack_50 = uVar19;
            puVar62 = puVar56 + 1;
            uVar48 = uVar52 + uStack_34;
            pbVar18 = (byte *)((int)puStack_38 +
                              (uint)CARRY4(uVar52,uStack_34) +
                              puVar56[7] * 0x27d4eb4f +
                              puVar56[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20));
            uVar52 = (uint)pbVar18 >> 1;
            uStack_54 = uVar48 * -0x80000000 | uVar52;
            uVar48 = uVar48 >> 1;
            uStack_58 = (int)pbVar18 * -0x80000000 | uVar48;
            uStack_34 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            puStack_38 = (uint *)(uStack_58 * -0x7a143579 +
                                 uStack_54 * -0x61c8864f +
                                 (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20));
            lVar4 = (ulonglong)puVar56[4] * 0x27d4eb4f;
            uVar58 = (uint)lVar4;
            uVar32 = uVar58 + uStack_3c;
            uVar47 = puVar56[5] * 0x27d4eb4f +
                     puVar56[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_40 +
                     (uint)CARRY4(uVar58,uStack_3c);
            uVar58 = uVar47 >> 1;
            uStack_60 = uVar32 * -0x80000000 | uVar58;
            uVar32 = uVar32 >> 1;
            uStack_5c = uVar47 * -0x80000000 | uVar32;
            uStack_3c = (uint)((ulonglong)uStack_60 * 0x85ebca87);
            puVar1 = puVar56 + 3;
            uStack_40 = uStack_5c * -0x7a143579 +
                        uStack_60 * -0x61c8864f + (int)((ulonglong)uStack_60 * 0x85ebca87 >> 0x20);
            uVar34 = *puVar56;
            puVar2 = puVar56 + 2;
            puVar56 = puVar56 + 8;
            lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
            uVar47 = (uint)lVar4;
            uVar54 = uVar47 + uStack_44;
            uVar55 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uStack_48 + (uint)CARRY4(uVar47,uStack_44);
            uVar47 = uVar55 >> 1;
            uVar42 = uVar54 * -0x80000000 | uVar47;
            uStack_44 = (uint)((ulonglong)uVar42 * 0x85ebca87);
            uVar54 = uVar54 >> 1;
            uVar63 = uVar55 * -0x80000000 | uVar54;
            uStack_48 = uVar63 * -0x7a143579 +
                        uVar42 * -0x61c8864f + (int)((ulonglong)uVar42 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)uVar34 * 0x27d4eb4f;
            uVar55 = (uint)lVar4;
            uVar33 = uVar55 + uStack_4c;
            uVar19 = *puVar62 * 0x27d4eb4f + uVar34 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uVar19 + (uint)CARRY4(uVar55,uStack_4c);
            bVar64 = puVar57 < (uint *)0x20;
            puVar57 = puVar57 + -8;
            uVar55 = uVar19 >> 1;
            uVar41 = uVar33 * -0x80000000 | uVar55;
            uStack_4c = (uint)((ulonglong)uVar41 * 0x85ebca87);
            uVar33 = uVar33 >> 1;
            uVar34 = uVar19 * -0x80000000 | uVar33;
            iVar20 = iVar20 - (uint)bVar64;
            uVar19 = uVar34 * -0x7a143579 +
                     uVar41 * -0x61c8864f + (int)((ulonglong)uVar41 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar57 < (uint *)0x20) <= (uint)-iVar20);
          uVar27 = uStack_44 << 7 | uStack_48 >> 0x19;
          uVar61 = uStack_4c << 1 | uVar19 >> 0x1f;
          uVar26 = uVar27 + uVar61;
          uVar28 = uStack_3c << 0xc | uStack_40 >> 0x14;
          uVar39 = uVar26 + uVar28;
          uStack_3c = (uStack_48 * 0x80 | uStack_44 >> 0x19) + (uVar19 * 2 | uStack_4c >> 0x1f) +
                      (uint)CARRY4(uVar27,uVar61) + (uStack_40 * 0x1000 | uStack_3c >> 0x14) +
                      (uint)CARRY4(uVar26,uVar28);
          uStack_40 = (uint)((ulonglong)uVar41 * 0x80000000 >> 0x20);
          uVar38 = (uint)((ulonglong)uVar41 * 0x80000000) |
                   uVar34 * 0xf796ca9 +
                   uVar41 * -0x210ca4ff + (int)((ulonglong)uVar41 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar38 * 0x85ebca87;
          uVar37 = uStack_34 << 0x12 | (uint)puStack_38 >> 0xe;
          iVar21 = -0x61c8864f;
          uVar35 = uVar39 + uVar37 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar35 * 0x85ebca87;
          uStack_44 = (uint)lVar5;
          uVar36 = (uint)((ulonglong)uVar42 * 0x80000000) |
                   uVar63 * 0xf796ca9 +
                   uVar42 * -0x210ca4ff + (int)((ulonglong)uVar42 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar36 * 0x85ebca87;
          uVar34 = uStack_44 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar34 * 0x85ebca87;
          uVar61 = (uint)lVar7;
          uVar26 = (uint)((ulonglong)uStack_60 * 0x80000000) |
                   uStack_5c * 0xf796ca9 +
                   uStack_60 * -0x210ca4ff + (int)((ulonglong)uStack_60 * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar26 * 0x85ebca87;
          uVar63 = uVar61 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar63 * 0x85ebca87;
          uVar27 = (uint)lVar9;
          uVar28 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar28 * 0x85ebca87;
          uVar41 = uVar27 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar41 * 0x85ebca87;
          uVar29 = (uint)lVar11;
          uVar19 = uVar29 + 0xc2b2ae63;
          iVar20 = ((((uStack_3c + ((int)puStack_38 * 0x40000 | uStack_34 >> 0xe) +
                       (uint)CARRY4(uVar39,uVar37) ^
                      (uVar33 * -0x80000000 + uVar55 * -0x784349ac + uStack_40) * -0x7a143579 +
                      uVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                      uVar35 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uStack_44) ^
                     (uVar54 * -0x80000000 +
                     uVar47 * -0x784349ac + (int)((ulonglong)uVar42 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                     -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar61) ^
                    (uVar32 * -0x80000000 +
                    uVar58 * -0x784349ac + (int)((ulonglong)uStack_60 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                    -0x7a143579 + uVar63 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar27) ^
                   (uVar48 * -0x80000000 +
                   uVar52 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                   -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar29);
        }
        puVar25 = (undefined1 *)(uVar19 + (int)puVar31);
        puVar59 = (uint *)((int)puVar59 + ((uint)puVar31 & 0xffffffe0));
        uVar19 = iVar20 + (uint)CARRY4(uVar19,(uint)puVar31);
        uVar52 = (uint)puVar31 & 0x1f;
        uVar48 = 0;
        do {
          if (uVar48 == 0 && (7 < uVar52) <= uVar48) {
            if (uVar48 == 0 && (3 < uVar52) <= uVar48) {
              if (uVar52 == 0 && uVar48 == 0) goto LAB_7142ca0c;
              lVar4 = (ulonglong)(uint)(byte)*puVar59 * 0x165667c5;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = (uint)(byte)*puVar59 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
              uVar32 = uVar58 << 0xb | uVar19 >> 0x15;
              iVar20 = 1;
              lVar4 = (ulonglong)uVar32 * 0x85ebca87;
              puVar25 = (undefined1 *)lVar4;
              uVar19 = (uVar19 << 0xb | uVar58 >> 0x15) * -0x7a143579 +
                       uVar32 * iVar21 + (int)((ulonglong)lVar4 >> 0x20);
              uVar58 = 0xffffffff;
            }
            else {
              lVar4 = (ulonglong)*puVar59 * 0x85ebca87;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = *puVar59 * iVar21 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
              uVar47 = uVar58 << 0x17 | uVar19 >> 9;
              lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
              uVar32 = (uint)lVar4;
              puVar25 = (undefined1 *)(uVar32 + 0x9e3779f9);
              uVar19 = (uVar19 << 0x17 | uVar58 >> 9) * 0x27d4eb4f +
                       uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar32);
              uVar58 = 0xfffffffc;
              iVar20 = 4;
            }
          }
          else {
            uVar58 = *puVar59;
            uStack_34 = uVar48;
            uVar47 = (uint)((ulonglong)uVar58 * 0x80000000) |
                     puVar59[1] * 0x27d4eb4f +
                     uVar58 * -0x3d4d51c3 + (int)((ulonglong)uVar58 * 0x27d4eb4f >> 0x20) >> 1;
            lVar4 = (ulonglong)uVar47 * 0x85ebca87;
            iVar21 = -0x61c8864f;
            uVar32 = (uint)lVar4 ^ (uint)puVar25;
            uVar19 = (puVar59[1] * -0x80000000 +
                     uVar58 * -0x6c158a59 + (int)((ulonglong)uVar58 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar47 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar54 = uVar32 << 0x1b | uVar19 >> 5;
            lVar4 = (ulonglong)uVar54 * 0x85ebca87;
            uVar47 = (uint)lVar4;
            uVar58 = 0xfffffff8;
            puVar25 = (undefined1 *)(uVar47 + 0xc2b2ae63);
            uVar19 = (uVar19 << 0x1b | uVar32 >> 5) * -0x7a143579 +
                     uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar47);
            iVar20 = 8;
          }
          bVar64 = CARRY4(uVar58,uVar52);
          uVar52 = uVar58 + uVar52;
          puVar59 = (uint *)((int)puVar59 + iVar20);
          uVar48 = (uVar48 - 1) + (uint)bVar64;
        } while( true );
      }
    }
    uVar19 = *puStack_80;
    *puStack_80 = uVar19 + 1;
    puVar24 = DAT_711a3bb0;
    if (uVar19 == 6) {
      iVar20 = 0x27d4eb7f;
      uStack_68 = puVar59[0xc011];
      puVar31 = (uint *)puVar59[0xc010];
      puStack_6c = (uint *)puVar59[0xc012];
      puVar23 = (uint *)puVar59[0xc00f];
      uVar19 = 0x56d677d6;
      if (&DAT_0000001f < puVar31) {
        uStack_34 = 0x61c8869e;
        puStack_38 = (uint *)0x40801011;
        uStack_3c = 0x50;
        uStack_40 = 0x6854fb60;
        iVar20 = 0;
        uStack_48 = 0xc2b2ae8d;
        uStack_4c = 0xba94458a;
        uVar52 = 0x60ea283e;
        uStack_44 = 0xee40c5e7;
        puVar57 = puVar31;
        puVar56 = puVar23;
        do {
          lVar4 = (ulonglong)puVar56[6] * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar58 = uVar19 + uStack_4c;
          uVar19 = puVar56[7] * 0x27d4eb4f +
                   puVar56[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                   (uint)CARRY4(uVar19,uStack_4c);
          uVar48 = uVar19 >> 1;
          uStack_54 = uVar58 * -0x80000000 | uVar48;
          uStack_4c = (uint)((ulonglong)uStack_54 * 0x85ebca87);
          uVar58 = uVar58 >> 1;
          uStack_58 = uVar19 * -0x80000000 | uVar58;
          uStack_34 = uStack_58 * -0x7a143579 +
                      uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar56[4] * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar47 = uVar19 + (int)puStack_38;
          uVar19 = puVar56[5] * 0x27d4eb4f +
                   puVar56[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_3c +
                   (uint)CARRY4(uVar19,(uint)puStack_38);
          uVar32 = uVar19 >> 1;
          uStack_5c = uVar47 * -0x80000000 | uVar32;
          puStack_38 = (uint *)((ulonglong)uStack_5c * 0x85ebca87);
          uVar47 = uVar47 >> 1;
          uStack_60 = uVar19 * -0x80000000 | uVar47;
          puVar62 = puVar56 + 2;
          uStack_3c = uStack_60 * -0x7a143579 +
                      uStack_5c * -0x61c8864f + (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20);
          puVar1 = puVar56 + 3;
          uVar33 = *puVar56;
          uStack_50 = puVar56[1];
          puVar56 = puVar56 + 8;
          lVar4 = (ulonglong)*puVar62 * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar55 = uVar19 + uStack_40;
          uVar19 = *puVar1 * 0x27d4eb4f + *puVar62 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_48 + (uint)CARRY4(uVar19,uStack_40);
          uVar54 = uVar19 >> 1;
          puStack_64 = (uint *)(uVar55 * -0x80000000 | uVar54);
          uStack_40 = (uint)(ZEXT48(puStack_64) * 0x85ebca87);
          uVar55 = uVar55 >> 1;
          uVar63 = uVar19 * -0x80000000 | uVar55;
          uStack_48 = uVar63 * -0x7a143579 +
                      (int)puStack_64 * -0x61c8864f + (int)(ZEXT48(puStack_64) * 0x85ebca87 >> 0x20)
          ;
          lVar4 = (ulonglong)uVar33 * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar42 = uVar19 + uStack_44;
          uVar19 = uStack_50 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar52 + (uint)CARRY4(uVar19,uStack_44);
          bVar64 = puVar57 < (uint *)0x20;
          puVar57 = puVar57 + -8;
          uVar33 = uVar19 >> 1;
          uVar34 = uVar42 * -0x80000000 | uVar33;
          iVar20 = iVar20 - (uint)bVar64;
          uStack_44 = (uint)((ulonglong)uVar34 * 0x85ebca87);
          uVar42 = uVar42 >> 1;
          uVar19 = uVar19 * -0x80000000 | uVar42;
          uVar52 = uVar19 * -0x7a143579 +
                   uVar34 * -0x61c8864f + (int)((ulonglong)uVar34 * 0x85ebca87 >> 0x20);
        } while ((uint)(puVar57 < (uint *)0x20) <= (uint)-iVar20);
        uVar61 = uStack_44 << 1 | uVar52 >> 0x1f;
        uVar45 = uStack_40 << 7 | uStack_48 >> 0x19;
        uVar26 = uVar45 + uVar61;
        uVar41 = (uint)puStack_38 >> 0x14;
        uVar46 = (int)puStack_38 << 0xc | uStack_3c >> 0x14;
        uVar27 = uVar26 + uVar46;
        uVar49 = uStack_4c << 0x12 | uStack_34 >> 0xe;
        uVar44 = (uint)((ulonglong)uVar34 * 0x80000000) |
                 uVar19 * 0xf796ca9 +
                 uVar34 * -0x210ca4ff + (int)((ulonglong)uVar34 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar44 * 0x85ebca87;
        uVar28 = uVar27 + uVar49 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar28 * 0x85ebca87;
        puStack_38 = (uint *)lVar5;
        iVar21 = -0x61c8864f;
        uVar36 = (uint)(ZEXT48(puStack_64) * 0x80000000) |
                 uVar63 * 0xf796ca9 +
                 (int)puStack_64 * -0x210ca4ff + (int)(ZEXT48(puStack_64) * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar36 * 0x85ebca87;
        uVar63 = (uint)((int)puStack_38 + -0x3d4d519d) ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar63 * 0x85ebca87;
        uVar37 = (uint)lVar7;
        uVar38 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                 uStack_60 * 0xf796ca9 +
                 uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar38 * 0x85ebca87;
        uVar29 = uVar37 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar29 * 0x85ebca87;
        uVar39 = (uint)lVar9;
        uVar40 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                 uStack_58 * 0xf796ca9 +
                 uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar40 * 0x85ebca87;
        uVar35 = uVar39 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar35 * 0x85ebca87;
        uVar43 = (uint)lVar11;
        uVar19 = uVar43 + 0xc2b2ae63;
        iVar20 = (((((uStack_48 * 0x80 | uStack_40 >> 0x19) + (uVar52 * 2 | uStack_44 >> 0x1f) +
                     (uint)CARRY4(uVar45,uVar61) + (uStack_3c * 0x1000 | uVar41) +
                     (uint)CARRY4(uVar26,uVar46) + (uStack_34 * 0x40000 | uStack_4c >> 0xe) +
                     (uint)CARRY4(uVar27,uVar49) ^
                    (uVar42 * -0x80000000 +
                    uVar33 * -0x784349ac + (int)((ulonglong)uVar34 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                    -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                    -0x7a143589 + (uint)((uint *)0x3d4d519c < puStack_38) ^
                   (uVar55 * -0x80000000 +
                   uVar54 * -0x784349ac + (int)(ZEXT48(puStack_64) * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar63 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar37) ^
                  (uVar47 * -0x80000000 +
                  uVar32 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar39) ^
                 (uVar58 * -0x80000000 +
                 uVar48 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                 -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar43);
        puStack_74 = puVar31;
        puStack_70 = puVar23;
      }
      uVar52 = uVar19 + (int)puVar31;
      puVar23 = (uint *)((int)puVar23 + ((uint)puVar31 & 0xffffffe0));
      uVar19 = iVar20 + (uint)CARRY4(uVar19,(uint)puVar31);
      uVar48 = (uint)puVar31 & 0x1f;
      uVar58 = 0;
      do {
        if (uVar58 == 0 && (7 < uVar48) <= uVar58) {
          if (uVar58 == 0 && (3 < uVar48) <= uVar58) {
            if (uVar48 == 0 && uVar58 == 0) goto LAB_7142d184;
            lVar4 = (ulonglong)(uint)(byte)*puVar23 * 0x165667c5;
            uVar32 = (uint)lVar4 ^ uVar52;
            uVar19 = (uint)(byte)*puVar23 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar47 = uVar32 << 0xb | uVar19 >> 0x15;
            lVar4 = (ulonglong)uVar47 * 0x85ebca87;
            uVar52 = (uint)lVar4;
            uVar19 = (uVar19 << 0xb | uVar32 >> 0x15) * -0x7a143579 +
                     uVar47 * iVar21 + (int)((ulonglong)lVar4 >> 0x20);
            uVar47 = 0xffffffff;
            iVar20 = 1;
          }
          else {
            lVar4 = (ulonglong)*puVar23 * 0x85ebca87;
            uVar32 = (uint)lVar4 ^ uVar52;
            uVar19 = *puVar23 * iVar21 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar54 = uVar32 << 0x17 | uVar19 >> 9;
            lVar4 = (ulonglong)uVar54 * 0x27d4eb4f;
            uVar47 = (uint)lVar4;
            uVar52 = uVar47 + 0x9e3779f9;
            iVar20 = 4;
            uVar19 = (uVar19 << 0x17 | uVar32 >> 9) * 0x27d4eb4f +
                     uVar54 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar47);
            uVar47 = 0xfffffffc;
          }
        }
        else {
          uVar54 = *puVar23;
          uVar47 = (uint)((ulonglong)uVar54 * 0x80000000) |
                   puVar23[1] * 0x27d4eb4f +
                   uVar54 * -0x3d4d51c3 + (int)((ulonglong)uVar54 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar47 * 0x85ebca87;
          iVar21 = -0x61c8864f;
          uVar32 = (uint)lVar4 ^ uVar52;
          uVar19 = (puVar23[1] * -0x80000000 +
                   uVar54 * -0x6c158a59 + (int)((ulonglong)uVar54 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar47 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
          uVar55 = uVar32 << 0x1b | uVar19 >> 5;
          lVar4 = (ulonglong)uVar55 * 0x85ebca87;
          uVar54 = (uint)lVar4;
          uVar47 = 0xfffffff8;
          uVar52 = uVar54 + 0xc2b2ae63;
          iVar20 = 8;
          uVar19 = (uVar19 << 0x1b | uVar32 >> 5) * -0x7a143579 +
                   uVar55 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar54);
          uStack_34 = uVar58;
        }
        bVar64 = CARRY4(uVar47,uVar48);
        uVar48 = uVar47 + uVar48;
        puVar23 = (uint *)((int)puVar23 + iVar20);
        uVar58 = (uVar58 - 1) + (uint)bVar64;
      } while( true );
    }
    if (uVar19 == 2) {
      uStack_68 = uVar19 + 1;
      puStack_6c = (uint *)puVar59[0x4009];
      puVar31 = (uint *)puVar59[0x4008];
      puVar23 = (uint *)puVar59[0x4007];
      puStack_74 = (uint *)puVar59[0x400a];
      uVar19 = 0x56d677d6;
      iVar20 = 0x27d4eb7f;
      if (&DAT_0000001f < puVar31) {
        uStack_34 = 0x61c8869e;
        puStack_38 = (uint *)0x50;
        uStack_44 = 0x6854fb60;
        uStack_3c = 0xc2b2ae8d;
        iVar20 = 0;
        uStack_48 = 0xba94458a;
        uStack_4c = 0x40801011;
        uVar52 = 0x60ea283e;
        uStack_40 = 0xee40c5e7;
        puStack_7c = puVar31;
        puStack_78 = puVar23;
        puVar57 = puVar31;
        puVar56 = puVar23;
        do {
          lVar4 = (ulonglong)puVar56[6] * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar58 = uVar19 + uStack_48;
          uVar19 = puVar56[7] * 0x27d4eb4f +
                   puVar56[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                   (uint)CARRY4(uVar19,uStack_48);
          uVar48 = uVar19 >> 1;
          uStack_54 = uVar58 * -0x80000000 | uVar48;
          uStack_48 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
          uVar58 = uVar58 >> 1;
          uStack_58 = uVar19 * -0x80000000 | uVar58;
          uStack_34 = uStack_58 * -0x7a143579 +
                      uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)puVar56[4] * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar47 = uVar19 + uStack_4c;
          uVar19 = puVar56[5] * 0x27d4eb4f +
                   puVar56[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + (int)puStack_38 +
                   (uint)CARRY4(uVar19,uStack_4c);
          uVar32 = uVar19 >> 1;
          uStack_5c = uVar47 * -0x80000000 | uVar32;
          uVar47 = uVar47 >> 1;
          uStack_60 = uVar19 * -0x80000000 | uVar47;
          uStack_4c = (uint)((ulonglong)uStack_5c * 0x85ebca87);
          uVar33 = *puVar56;
          puStack_38 = (uint *)(uStack_60 * -0x7a143579 +
                               uStack_5c * -0x61c8864f +
                               (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20));
          puVar62 = puVar56 + 3;
          puVar1 = puVar56 + 1;
          uStack_50 = *puVar1;
          puVar2 = puVar56 + 2;
          puVar56 = puVar56 + 8;
          lVar4 = (ulonglong)*puVar2 * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar55 = uVar19 + uStack_44;
          uVar19 = *puVar62 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar19,uStack_44);
          uVar54 = uVar19 >> 1;
          uVar34 = uVar55 * -0x80000000 | uVar54;
          uVar55 = uVar55 >> 1;
          puStack_64 = (uint *)(uVar19 * -0x80000000 | uVar55);
          uStack_44 = (uint)((ulonglong)uVar34 * 0x85ebca87);
          uStack_3c = (int)puStack_64 * -0x7a143579 +
                      uVar34 * -0x61c8864f + (int)((ulonglong)uVar34 * 0x85ebca87 >> 0x20);
          lVar4 = (ulonglong)uVar33 * 0x27d4eb4f;
          uVar19 = (uint)lVar4;
          uVar42 = uVar19 + uStack_40;
          uVar52 = *puVar1 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) +
                   uVar52 + (uint)CARRY4(uVar19,uStack_40);
          bVar64 = puVar57 < (uint *)0x20;
          puVar57 = puVar57 + -8;
          uVar33 = uVar52 >> 1;
          uVar19 = uVar42 * -0x80000000 | uVar33;
          iVar20 = iVar20 - (uint)bVar64;
          uStack_40 = (uint)((ulonglong)uVar19 * 0x85ebca87);
          uVar42 = uVar42 >> 1;
          uVar63 = uVar52 * -0x80000000 | uVar42;
          uVar52 = uVar63 * -0x7a143579 +
                   uVar19 * -0x61c8864f + (int)((ulonglong)uVar19 * 0x85ebca87 >> 0x20);
        } while ((uint)(puVar57 < (uint *)0x20) <= (uint)-iVar20);
        uVar46 = uStack_40 << 1 | uVar52 >> 0x1f;
        uVar43 = uStack_44 << 7 | uStack_3c >> 0x19;
        uVar49 = uVar43 + uVar46;
        uVar41 = (int)puStack_38 * 0x1000;
        uVar44 = uStack_4c << 0xc | (uint)puStack_38 >> 0x14;
        uVar50 = uVar49 + uVar44;
        puStack_38 = (uint *)((ulonglong)uVar19 * 0x80000000 >> 0x20);
        iVar21 = -0x61c8864f;
        uVar39 = uStack_48 << 0x12 | uStack_34 >> 0xe;
        uVar35 = (uint)((ulonglong)uVar19 * 0x80000000) |
                 uVar63 * 0xf796ca9 +
                 uVar19 * -0x210ca4ff + (int)((ulonglong)uVar19 * 0xf796ca9 >> 0x20) >> 1;
        lVar4 = (ulonglong)uVar35 * 0x85ebca87;
        uVar40 = uVar50 + uVar39 ^ (uint)lVar4;
        lVar5 = (ulonglong)uVar40 * 0x85ebca87;
        uVar45 = (uint)lVar5;
        uVar36 = (uint)((ulonglong)uVar34 * 0x80000000) |
                 (int)puStack_64 * 0xf796ca9 +
                 uVar34 * -0x210ca4ff + (int)((ulonglong)uVar34 * 0xf796ca9 >> 0x20) >> 1;
        lVar6 = (ulonglong)uVar36 * 0x85ebca87;
        uVar26 = uVar45 + 0xc2b2ae63 ^ (uint)lVar6;
        lVar7 = (ulonglong)uVar26 * 0x85ebca87;
        uVar37 = (uint)lVar7;
        uVar38 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                 uStack_60 * 0xf796ca9 +
                 uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar38 * 0x85ebca87;
        uVar63 = uVar37 + 0xc2b2ae63 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar63 * 0x85ebca87;
        uVar27 = (uint)lVar9;
        uVar28 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                 uStack_58 * 0xf796ca9 +
                 uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar28 * 0x85ebca87;
        uVar61 = uVar27 + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar61 * 0x85ebca87;
        uVar29 = (uint)lVar11;
        uVar19 = uVar29 + 0xc2b2ae63;
        iVar20 = (((((uStack_3c * 0x80 | uStack_44 >> 0x19) + (uVar52 * 2 | uStack_40 >> 0x1f) +
                     (uint)CARRY4(uVar43,uVar46) + (uVar41 | uStack_4c >> 0x14) +
                     (uint)CARRY4(uVar49,uVar44) + (uStack_34 * 0x40000 | uStack_48 >> 0xe) +
                     (uint)CARRY4(uVar50,uVar39) ^
                    (int)(puStack_38 + uVar33 * -0x1e10d26b + uVar42 * -0x20000000) * -0x7a143579 +
                    uVar35 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                    uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                    (uint)(0x3d4d519c < uVar45) ^
                   (uVar55 * -0x80000000 +
                   uVar54 * -0x784349ac + (int)((ulonglong)uVar34 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                   -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar37) ^
                  (uVar47 * -0x80000000 +
                  uVar32 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                  -0x7a143579 + uVar63 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589
                  + (uint)(0x3d4d519c < uVar27) ^
                 (uVar58 * -0x80000000 +
                 uVar48 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                 -0x7a143579 + uVar61 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar29);
      }
      puVar25 = (undefined1 *)(uVar19 + (int)puVar31);
      uVar19 = iVar20 + (uint)CARRY4(uVar19,(uint)puVar31);
      puVar23 = (uint *)((int)puVar23 + ((uint)puVar31 & 0xffffffe0));
      uVar52 = (uint)puVar31 & 0x1f;
      uVar48 = 0;
      do {
        if (uVar48 == 0 && (7 < uVar52) <= uVar48) {
          if (uVar48 == 0 && (3 < uVar52) <= uVar48) {
            if (uVar52 == 0 && uVar48 == 0) goto LAB_7142cab8;
            lVar4 = (ulonglong)(uint)(byte)*puVar23 * 0x165667c5;
            uVar58 = (uint)lVar4 ^ (uint)puVar25;
            uVar19 = (uint)(byte)*puVar23 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar32 = uVar58 << 0xb | uVar19 >> 0x15;
            lVar4 = (ulonglong)uVar32 * 0x85ebca87;
            puVar25 = (undefined1 *)lVar4;
            iVar20 = 1;
            uVar19 = (uVar19 << 0xb | uVar58 >> 0x15) * -0x7a143579 +
                     uVar32 * iVar21 + (int)((ulonglong)lVar4 >> 0x20);
            uVar58 = 0xffffffff;
          }
          else {
            lVar4 = (ulonglong)*puVar23 * 0x85ebca87;
            uVar58 = (uint)lVar4 ^ (uint)puVar25;
            uVar19 = *puVar23 * iVar21 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar47 = uVar58 << 0x17 | uVar19 >> 9;
            lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
            uVar32 = (uint)lVar4;
            puVar25 = (undefined1 *)(uVar32 + 0x9e3779f9);
            iVar20 = 4;
            uVar19 = (uVar19 << 0x17 | uVar58 >> 9) * 0x27d4eb4f +
                     uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                     (uint)(0x61c88606 < uVar32);
            uVar58 = 0xfffffffc;
          }
        }
        else {
          uVar47 = *puVar23;
          uStack_34 = uVar48;
          uVar58 = (uint)((ulonglong)uVar47 * 0x80000000) |
                   puVar23[1] * 0x27d4eb4f +
                   uVar47 * -0x3d4d51c3 + (int)((ulonglong)uVar47 * 0x27d4eb4f >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar58 * 0x85ebca87;
          iVar21 = -0x61c8864f;
          uVar32 = (uint)lVar4 ^ (uint)puVar25;
          uVar19 = (puVar23[1] * -0x80000000 +
                   uVar47 * -0x6c158a59 + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar58 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
          uVar54 = uVar32 << 0x1b | uVar19 >> 5;
          lVar4 = (ulonglong)uVar54 * 0x85ebca87;
          uVar47 = (uint)lVar4;
          uVar58 = 0xfffffff8;
          puVar25 = (undefined1 *)(uVar47 + 0xc2b2ae63);
          iVar20 = 8;
          uVar19 = (uVar19 << 0x1b | uVar32 >> 5) * -0x7a143579 +
                   uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar47);
        }
        bVar64 = CARRY4(uVar58,uVar52);
        uVar52 = uVar58 + uVar52;
        puVar23 = (uint *)((int)puVar23 + iVar20);
        uVar48 = (uVar48 - 1) + (uint)bVar64;
      } while( true );
    }
LAB_7142d214:
    for (; puVar24 != &DAT_711a3bac; puVar24 = (undefined4 *)puVar24[1]) {
      if (puVar24[2] != 0) {
        FUN_715b1f18();
      }
    }
    FUN_714f46e4();
    FUN_71465e10();
    FUN_714691c4();
    FUN_713e5d8c();
    FUN_71461864(DAT_7100037c);
    cVar3 = DAT_70ffcd24;
    if (DAT_70ffcd24 == '\0') {
      cVar3 = DAT_70ffcd26;
    }
    if ((DAT_70ffcd24 == '\0' && cVar3 == '\0') && (DAT_70ffcd27 == 0)) {
      FUN_71429a88();
    }
    FUN_71428fa0();
    if (DAT_70ffcd26 != '\0') {
      FUN_71446a44();
      FUN_71ba21e8(*DAT_70ffd1b4,0x3c0efa03);
      uVar51 = DAT_70ffc978[1];
      uVar22 = imp_tanf();
      FUN_71410518(uVar51,0,uVar22,*DAT_70ffd1b8);
      FUN_7148e65c(DAT_70ffc978[1]);
      FUN_71420f90(DAT_70ffc978[1],DAT_70ffc9a0,2);
      FUN_714111ac(DAT_70ffc978[1]);
      *puStack_84 = 1;
      if (*DAT_70c38ea8 == 0) {
        FUN_713f07c8(iStack_90);
        FUN_713679dc();
        FUN_713ebcc4();
      }
      iVar20 = iStack_90;
      FUN_713f03ac(iStack_90);
      FUN_713f03ac(iVar20);
      if (DAT_70ffcd26 == '\0') {
        FUN_713ebcc4();
        FUN_713f0bdc(iVar20);
      }
      else {
        FUN_713eff90(iVar20);
      }
      *puStack_84 = 0;
    }
    if (DAT_70ffcd27 == 0) {
LAB_7142ecdc:
      DAT_70ffcd18 = 0x24;
      FUN_7140f850(1);
      DAT_70ffcd18 = 0x25;
      FUN_7133c8d8();
      FUN_714aceec();
      DAT_700c1ad0 = auStack_b0[4];
      return;
    }
    FUN_71446a44();
    FUN_71ba21e8(*DAT_70ffd1b4,0x3c0efa03);
    uVar51 = DAT_70ffc978[1];
    uVar22 = imp_tanf();
    FUN_71410518(uVar51,0,uVar22,*DAT_70ffd1b8);
    FUN_7148e65c(DAT_70ffc978[1]);
    FUN_71420f90(DAT_70ffc978[1],DAT_70ffc9a0,2);
    FUN_714111ac(DAT_70ffc978[1]);
    DataMemoryBarrier(0xb);
    if (((DAT_70ffcd38 & 1) == 0) &&
       (iVar20 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcd38), iVar20 != 0)) {
      uVar65 = FUN_714cac4c();
      DAT_70ffcd34 = (undefined4)((ulonglong)uVar65 >> 0x20);
      DAT_70ffcd30 = (undefined4)uVar65;
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcd38);
    }
    *puStack_84 = 1;
    *(undefined1 *)(iStack_90 + 0x6d) = 1;
    cVar3 = DAT_70ffcd29;
    if (DAT_70ffcd29 == '\x01') {
      cVar3 = DAT_70ffcd28;
    }
    if (DAT_70ffcd29 != '\x01' || cVar3 != '\0') {
      FUN_713f1408();
      DAT_70ffcd29 = '\x01';
      DAT_70ffcd28 = '\0';
    }
    uVar65 = FUN_714cac4c();
    uVar30 = (undefined4)((ulonglong)uVar65 >> 0x20);
    *(undefined1 *)(iStack_90 + 0x6c) = 1;
    uVar51 = DAT_70ffcd34;
    uVar22 = DAT_70ffcd30;
    DAT_70ffcd30 = (int)uVar65;
    DAT_70ffcd34 = uVar30;
    FUN_7145aad4();
    *DAT_710002d0 = 0x457a0000;
    FUN_71ba23ec((int)uVar65,uVar30,uVar22,uVar51);
    FUN_71ba242c();
    FUN_713f1804();
    while( true ) {
      uVar52 = puVar60[1] ^ 0x679b29b;
      uVar19 = *puVar60 ^ 0x6a4dab1f | uVar52;
      bVar64 = uVar19 == 0;
      if (bVar64) {
        uVar52 = puVar60[3] ^ 0xfcc126c8;
        uVar19 = puVar60[2] ^ 0x6efdd0cf;
      }
      if ((bVar64 && (uVar19 == 0 && uVar52 == 0)) &&
         (puVar60[4] == 0xbefc55d6 && puVar60[5] == 0x370f3a77)) break;
      puVar60 = puVar60 + 1;
    }
    bVar64 = (char)puVar60[0x4006] != '\0';
    cVar3 = '\0';
    if (bVar64) {
      cVar3 = *(char *)((int)puVar60 + 0x10019);
    }
    if (bVar64 && cVar3 != '\0') goto LAB_7142d648;
    do {
      iVar21 = -1;
      pbVar18 = (byte *)0x0;
      software_interrupt(0);
      puVar60 = (uint *)0x0;
      imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
      do {
        *pbVar18 = *pbVar18 ^ 0x50;
        pbVar18 = pbVar18 + 1;
      } while (pbVar18 != (byte *)0x3c);
      uRam00000000 = 0xe3b0003a;
      _LAB_00000004 = 0xe3b01000;
      FUN_719344e4(0,0x3c,0);
      (*(code *)0x0)();
LAB_7142d648:
    } while (*(char *)((int)puVar60 + 0x1001a) == '\0');
    if (puVar60[0xc01e] == puVar60[0xc01c]) goto LAB_7142f3c4;
    puVar25 = (undefined1 *)puVar60[0xc01c];
    if ((puVar25 < &LAB_7142d684) && (&LAB_7142d684 < puVar25 + puVar60[0xc01d])) goto LAB_7142f460;
    puVar25 = (undefined1 *)puVar60[0xc01e];
    if ((&LAB_7142d684 < puVar25) || (puVar25 + puVar60[0xc01f] < &LAB_7142d684)) goto LAB_7142f500;
    iVar53 = FUN_717d2588();
    iVar20 = iStack_90;
    if (iVar53 == 0xa1b) {
      puStack_80 = puVar60 + 0xc01b;
      uVar19 = *puStack_80;
      if (uVar19 == 0x1e) {
        *puStack_80 = 0;
        uVar19 = *puStack_80;
      }
      puStack_70 = puVar60;
      if (((uVar19 & 3) == 0) && (puVar60[0xc017] != 0)) {
        puVar24 = (undefined4 *)puVar60[0xc017];
        puStack_74 = puVar24 + 1;
        puVar59 = (uint *)*puVar24;
LAB_7142de1c:
        if (puVar59 != puStack_74) {
          puVar23 = (uint *)puVar59[6];
          iVar53 = 0x27d4eb7f;
          uStack_68 = puVar59[7];
          puVar60 = (uint *)puVar59[5];
          puStack_6c = (uint *)puVar59[8];
          uVar19 = 0x56d677d6;
          puStack_64 = puVar59;
          if (&DAT_0000001f < puVar23) {
            uStack_34 = 0x61c8869e;
            puStack_38 = (uint *)0x40801011;
            uStack_3c = 0x50;
            iVar21 = 0;
            uStack_40 = 0x6854fb60;
            uStack_50 = 0xba94458a;
            uStack_44 = 0xc2b2ae8d;
            uStack_48 = 0xee40c5e7;
            uStack_4c = 0x60ea283e;
            puStack_7c = puVar23;
            puStack_78 = puVar60;
            puVar31 = puVar23;
            puVar57 = puVar60;
            do {
              lVar4 = (ulonglong)puVar57[6] * 0x27d4eb4f;
              uVar19 = (uint)lVar4;
              uVar48 = uVar19 + uStack_50;
              uVar19 = puVar57[7] * 0x27d4eb4f +
                       puVar57[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                       (uint)CARRY4(uVar19,uStack_50);
              uVar52 = uVar19 >> 1;
              uStack_54 = uVar48 * -0x80000000 | uVar52;
              uVar48 = uVar48 >> 1;
              uStack_58 = uVar19 * -0x80000000 | uVar48;
              uStack_50 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
              uStack_34 = uStack_58 * -0x7a143579 +
                          uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20)
              ;
              lVar4 = (ulonglong)puVar57[4] * 0x27d4eb4f;
              uVar19 = (uint)lVar4;
              uVar32 = uVar19 + (int)puStack_38;
              uVar19 = puVar57[5] * 0x27d4eb4f +
                       puVar57[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_3c +
                       (uint)CARRY4(uVar19,(uint)puStack_38);
              uVar58 = uVar19 >> 1;
              uStack_5c = uVar32 * -0x80000000 | uVar58;
              uVar32 = uVar32 >> 1;
              uStack_60 = uVar19 * -0x80000000 | uVar32;
              puStack_38 = (uint *)((ulonglong)uStack_5c * 0x85ebca87);
              puVar56 = puVar57 + 3;
              uVar55 = *puVar57;
              uStack_3c = uStack_60 * -0x7a143579 +
                          uStack_5c * -0x61c8864f + (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20)
              ;
              puVar62 = puVar57 + 1;
              puVar1 = puVar57 + 2;
              puVar57 = puVar57 + 8;
              lVar4 = (ulonglong)*puVar1 * 0x27d4eb4f;
              uVar19 = (uint)lVar4;
              uVar54 = uVar19 + uStack_40;
              uVar19 = *puVar56 * 0x27d4eb4f +
                       *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_44 +
                       (uint)CARRY4(uVar19,uStack_40);
              uVar47 = uVar19 >> 1;
              uVar42 = uVar54 * -0x80000000 | uVar47;
              uVar54 = uVar54 >> 1;
              uVar34 = uVar19 * -0x80000000 | uVar54;
              uStack_40 = (uint)((ulonglong)uVar42 * 0x85ebca87);
              uStack_44 = uVar34 * -0x7a143579 +
                          uVar42 * -0x61c8864f + (int)((ulonglong)uVar42 * 0x85ebca87 >> 0x20);
              lVar4 = (ulonglong)uVar55 * 0x27d4eb4f;
              uVar19 = (uint)lVar4;
              uVar33 = uVar19 + uStack_48;
              uVar19 = *puVar62 * 0x27d4eb4f +
                       uVar55 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_4c +
                       (uint)CARRY4(uVar19,uStack_48);
              bVar64 = puVar31 < (uint *)0x20;
              puVar31 = puVar31 + -8;
              uVar55 = uVar19 >> 1;
              uVar63 = uVar33 * -0x80000000 | uVar55;
              uVar33 = uVar33 >> 1;
              uVar19 = uVar19 * -0x80000000 | uVar33;
              iVar21 = iVar21 - (uint)bVar64;
              uStack_48 = (uint)((ulonglong)uVar63 * 0x85ebca87);
              uStack_4c = uVar19 * -0x7a143579 +
                          uVar63 * -0x61c8864f + (int)((ulonglong)uVar63 * 0x85ebca87 >> 0x20);
            } while ((uint)(puVar31 < (uint *)0x20) <= (uint)-iVar21);
            uVar41 = uStack_48 << 1 | uStack_4c >> 0x1f;
            uVar26 = uStack_40 << 7 | uStack_44 >> 0x19;
            uVar61 = uVar26 + uVar41;
            uVar27 = (int)puStack_38 << 0xc | uStack_3c >> 0x14;
            uVar40 = uVar61 + uVar27;
            puStack_38 = (uint *)((uStack_44 * 0x80 | uStack_40 >> 0x19) +
                                  (uStack_4c * 2 | uStack_48 >> 0x1f) + (uint)CARRY4(uVar26,uVar41)
                                  + (uStack_3c * 0x1000 | (uint)puStack_38 >> 0x14) +
                                 (uint)CARRY4(uVar61,uVar27));
            uStack_3c = (uint)((ulonglong)uVar63 * 0x80000000 >> 0x20);
            uVar39 = uStack_50 << 0x12 | uStack_34 >> 0xe;
            uVar36 = (uint)((ulonglong)uVar63 * 0x80000000) |
                     uVar19 * 0xf796ca9 +
                     uVar63 * -0x210ca4ff + (int)((ulonglong)uVar63 * 0xf796ca9 >> 0x20) >> 1;
            lVar4 = (ulonglong)uVar36 * 0x85ebca87;
            uVar63 = uVar40 + uVar39 ^ (uint)lVar4;
            lVar5 = (ulonglong)uVar63 * 0x85ebca87;
            uVar38 = (uint)lVar5;
            iVar21 = -0x61c8864f;
            uVar37 = (uint)((ulonglong)uVar42 * 0x80000000) |
                     uVar34 * 0xf796ca9 +
                     uVar42 * -0x210ca4ff + (int)((ulonglong)uVar42 * 0xf796ca9 >> 0x20) >> 1;
            lVar6 = (ulonglong)uVar37 * 0x85ebca87;
            uVar34 = uVar38 + 0xc2b2ae63 ^ (uint)lVar6;
            lVar7 = (ulonglong)uVar34 * 0x85ebca87;
            uVar26 = (uint)lVar7;
            uVar27 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                     uStack_60 * 0xf796ca9 +
                     uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
            lVar8 = (ulonglong)uVar27 * 0x85ebca87;
            uVar41 = uVar26 + 0xc2b2ae63 ^ (uint)lVar8;
            lVar9 = (ulonglong)uVar41 * 0x85ebca87;
            uVar28 = (uint)lVar9;
            uVar29 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                     uStack_58 * 0xf796ca9 +
                     uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
            lVar10 = (ulonglong)uVar29 * 0x85ebca87;
            uVar61 = uVar28 + 0xc2b2ae63 ^ (uint)lVar10;
            lVar11 = (ulonglong)uVar61 * 0x85ebca87;
            uVar35 = (uint)lVar11;
            uVar19 = uVar35 + 0xc2b2ae63;
            iVar53 = (((((uint)((int)puStack_38 +
                               (uint)CARRY4(uVar40,uVar39) +
                               (uStack_34 * 0x40000 | uStack_50 >> 0xe)) ^
                        (uVar33 * -0x80000000 + uVar55 * -0x784349ac + uStack_3c) * -0x7a143579 +
                        uVar36 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                        uVar63 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar38) ^
                       (uVar54 * -0x80000000 +
                       uVar47 * -0x784349ac + (int)((ulonglong)uVar42 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                       -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                       -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                      (uVar32 * -0x80000000 +
                      uVar58 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                      -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar28) ^
                     (uVar48 * -0x80000000 +
                     uVar52 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                     -0x7a143579 + uVar61 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar35);
          }
          puVar25 = (undefined1 *)(uVar19 + (int)puVar23);
          puVar60 = (uint *)((int)puVar60 + ((uint)puVar23 & 0xffffffe0));
          uVar19 = iVar53 + (uint)CARRY4(uVar19,(uint)puVar23);
          uVar52 = (uint)puVar23 & 0x1f;
          uVar48 = 0;
          do {
            if (uVar48 == 0 && (7 < uVar52) <= uVar48) {
              if (uVar48 == 0 && (3 < uVar52) <= uVar48) {
                if (uVar52 == 0 && uVar48 == 0) goto LAB_7142e4d0;
                lVar4 = (ulonglong)(uint)(byte)*puVar60 * 0x165667c5;
                uVar58 = (uint)lVar4 ^ (uint)puVar25;
                uVar19 = (uint)(byte)*puVar60 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^
                         uVar19;
                uVar32 = uVar58 << 0xb | uVar19 >> 0x15;
                lVar4 = (ulonglong)uVar32 * 0x85ebca87;
                puVar25 = (undefined1 *)lVar4;
                uVar19 = (uVar19 << 0xb | uVar58 >> 0x15) * -0x7a143579 +
                         uVar32 * iVar21 + (int)((ulonglong)lVar4 >> 0x20);
                uVar32 = 0xffffffff;
                iVar53 = 1;
              }
              else {
                lVar4 = (ulonglong)*puVar60 * 0x85ebca87;
                uVar58 = (uint)lVar4 ^ (uint)puVar25;
                uVar19 = *puVar60 * iVar21 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
                uVar47 = uVar58 << 0x17 | uVar19 >> 9;
                lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
                uVar32 = (uint)lVar4;
                puVar25 = (undefined1 *)(uVar32 + 0x9e3779f9);
                iVar53 = 4;
                uVar19 = (uVar19 << 0x17 | uVar58 >> 9) * 0x27d4eb4f +
                         uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                         (uint)(0x61c88606 < uVar32);
                uVar32 = 0xfffffffc;
              }
            }
            else {
              uVar47 = *puVar60;
              uStack_34 = uVar48;
              uVar32 = (uint)((ulonglong)uVar47 * 0x80000000) |
                       puVar60[1] * 0x27d4eb4f +
                       uVar47 * -0x3d4d51c3 + (int)((ulonglong)uVar47 * 0x27d4eb4f >> 0x20) >> 1;
              lVar4 = (ulonglong)uVar32 * 0x85ebca87;
              iVar21 = -0x61c8864f;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = (puVar60[1] * -0x80000000 +
                       uVar47 * -0x6c158a59 + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19
              ;
              uVar54 = uVar58 << 0x1b | uVar19 >> 5;
              lVar4 = (ulonglong)uVar54 * 0x85ebca87;
              uVar47 = (uint)lVar4;
              uVar32 = 0xfffffff8;
              puVar25 = (undefined1 *)(uVar47 + 0xc2b2ae63);
              iVar53 = 8;
              uVar19 = (uVar19 << 0x1b | uVar58 >> 5) * -0x7a143579 +
                       uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                       (uint)(0x3d4d519c < uVar47);
            }
            bVar64 = CARRY4(uVar32,uVar52);
            uVar52 = uVar32 + uVar52;
            puVar60 = (uint *)((int)puVar60 + iVar53);
            uVar48 = (uVar48 - 1) + (uint)bVar64;
          } while( true );
        }
      }
      uVar19 = *puStack_80;
      *puStack_80 = uVar19 + 1;
      if (uVar19 == 6) {
        puStack_64 = (uint *)puVar60[0xc011];
        puVar23 = (uint *)puVar60[0xc010];
        puVar59 = (uint *)puVar60[0xc00f];
        uStack_68 = puVar60[0xc012];
        if (&DAT_0000001f < puVar23) {
          uStack_34 = 0xba94458a;
          puStack_38 = (uint *)0x61c8869e;
          iVar21 = 0;
          uStack_3c = 0x40801011;
          uStack_40 = 0x50;
          uStack_44 = 0xee40c5e7;
          uVar52 = 0xc2b2ae8d;
          uStack_48 = 0x6854fb60;
          puVar31 = puVar59;
          puVar57 = puVar23;
          uVar19 = 0x60ea283e;
          do {
            uStack_50 = uVar19;
            lVar4 = (ulonglong)puVar31[6] * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            puVar56 = puVar31 + 1;
            uVar58 = uVar19 + uStack_34;
            pbVar18 = (byte *)((int)puStack_38 +
                              (uint)CARRY4(uVar19,uStack_34) +
                              puVar31[7] * 0x27d4eb4f +
                              puVar31[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20));
            uVar48 = (uint)pbVar18 >> 1;
            uStack_54 = uVar58 * -0x80000000 | uVar48;
            uVar58 = uVar58 >> 1;
            uStack_58 = (int)pbVar18 * -0x80000000 | uVar58;
            uStack_34 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            puStack_38 = (uint *)(uStack_58 * -0x7a143579 +
                                 uStack_54 * -0x61c8864f +
                                 (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20));
            lVar4 = (ulonglong)puVar31[4] * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar47 = uVar19 + uStack_3c;
            uVar19 = puVar31[5] * 0x27d4eb4f +
                     puVar31[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_40 +
                     (uint)CARRY4(uVar19,uStack_3c);
            uVar32 = uVar19 >> 1;
            uStack_5c = uVar47 * -0x80000000 | uVar32;
            uVar47 = uVar47 >> 1;
            uStack_60 = uVar19 * -0x80000000 | uVar47;
            uStack_3c = (uint)((ulonglong)uStack_5c * 0x85ebca87);
            puVar62 = puVar31 + 3;
            uStack_40 = uStack_60 * -0x7a143579 +
                        uStack_5c * -0x61c8864f + (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20);
            uVar33 = *puVar31;
            puVar1 = puVar31 + 2;
            puVar31 = puVar31 + 8;
            lVar4 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar55 = uVar19 + uStack_48;
            uVar19 = *puVar62 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uVar52 + (uint)CARRY4(uVar19,uStack_48);
            uVar54 = uVar19 >> 1;
            uStack_4c = uVar55 * -0x80000000 | uVar54;
            uStack_48 = (uint)((ulonglong)uStack_4c * 0x85ebca87);
            uVar55 = uVar55 >> 1;
            uVar34 = uVar19 * -0x80000000 | uVar55;
            uVar52 = uVar34 * -0x7a143579 +
                     uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)uVar33 * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar42 = uVar19 + uStack_44;
            uVar19 = *puVar56 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uStack_50 + (uint)CARRY4(uVar19,uStack_44);
            bVar64 = puVar57 < (uint *)0x20;
            puVar57 = puVar57 + -8;
            iVar21 = iVar21 - (uint)bVar64;
            uVar33 = uVar19 >> 1;
            uVar41 = uVar42 * -0x80000000 | uVar33;
            uVar42 = uVar42 >> 1;
            uVar63 = uVar19 * -0x80000000 | uVar42;
            uStack_44 = (uint)((ulonglong)uVar41 * 0x85ebca87);
            uVar19 = uVar63 * -0x7a143579 +
                     uVar41 * -0x61c8864f + (int)((ulonglong)uVar41 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar57 < (uint *)0x20) <= (uint)-iVar21);
          uVar61 = uStack_44 << 1 | uVar19 >> 0x1f;
          uVar27 = uStack_48 << 7 | uVar52 >> 0x19;
          uVar26 = uVar27 + uVar61;
          uVar28 = uStack_3c << 0xc | uStack_40 >> 0x14;
          uVar38 = uVar26 + uVar28;
          uStack_3c = (uVar52 * 0x80 | uStack_48 >> 0x19) + (uVar19 * 2 | uStack_44 >> 0x1f) +
                      (uint)CARRY4(uVar27,uVar61) + (uStack_40 * 0x1000 | uStack_3c >> 0x14) +
                      (uint)CARRY4(uVar26,uVar28);
          uStack_40 = (uint)((ulonglong)uVar41 * 0x80000000 >> 0x20);
          uVar36 = (uint)((ulonglong)uVar41 * 0x80000000) |
                   uVar63 * 0xf796ca9 +
                   uVar41 * -0x210ca4ff + (int)((ulonglong)uVar41 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar36 * 0x85ebca87;
          uVar19 = uStack_34 << 0x12 | (uint)puStack_38 >> 0xe;
          iVar21 = -0x61c8864f;
          uVar52 = uVar38 + uVar19 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar52 * 0x85ebca87;
          uVar35 = (uint)lVar5;
          uVar37 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                   uVar34 * 0xf796ca9 +
                   uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar37 * 0x85ebca87;
          uVar34 = uVar35 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar34 * 0x85ebca87;
          uVar61 = (uint)lVar7;
          uVar26 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                   uStack_60 * 0xf796ca9 +
                   uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar26 * 0x85ebca87;
          uVar63 = uVar61 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar63 * 0x85ebca87;
          uVar27 = (uint)lVar9;
          uVar28 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar28 * 0x85ebca87;
          uVar41 = uVar27 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar41 * 0x85ebca87;
          uVar29 = (uint)lVar11;
          auStack_b0[1] = uVar29 + 0xc2b2ae63;
          auStack_b0[2] =
               ((((uStack_3c + ((int)puStack_38 * 0x40000 | uStack_34 >> 0xe) +
                   (uint)CARRY4(uVar38,uVar19) ^
                  (uVar42 * -0x80000000 + uVar33 * -0x784349ac + uStack_40) * -0x7a143579 +
                  uVar36 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                  uVar52 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                  (uint)(0x3d4d519c < uVar35) ^
                 (uVar55 * -0x80000000 +
                 uVar54 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) * -0x7a143579
                 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) + -0x7a143589 +
                 (uint)(0x3d4d519c < uVar61) ^
                (uVar47 * -0x80000000 +
                uVar32 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) * -0x7a143579
                + uVar63 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589 +
                (uint)(0x3d4d519c < uVar27) ^
               (uVar58 * -0x80000000 +
               uVar48 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
               -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) * -0x7a143579
               + uVar41 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar29);
          puStack_70 = puVar23;
          puStack_6c = puVar59;
        }
        uVar52 = (uint)puVar23 & 0x1f;
        uVar48 = 0;
        puVar25 = (undefined1 *)(auStack_b0[1] + (int)puVar23);
        uVar19 = auStack_b0[2] + CARRY4(auStack_b0[1],(uint)puVar23);
        puVar59 = (uint *)((int)puVar59 + ((uint)puVar23 & 0xffffffe0));
        do {
          if (uVar48 == 0 && (7 < uVar52) <= uVar48) {
            if (uVar48 == 0 && (3 < uVar52) <= uVar48) {
              if (uVar52 == 0 && uVar48 == 0) goto LAB_7142ec40;
              lVar4 = (ulonglong)(uint)(byte)*puVar59 * 0x165667c5;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = (uint)(byte)*puVar59 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
              uVar32 = uVar58 << 0xb | uVar19 >> 0x15;
              iVar53 = 1;
              lVar4 = (ulonglong)uVar32 * 0x85ebca87;
              puVar25 = (undefined1 *)lVar4;
              uVar19 = (uVar19 << 0xb | uVar58 >> 0x15) * -0x7a143579 +
                       uVar32 * iVar21 + (int)((ulonglong)lVar4 >> 0x20);
              uVar54 = 0xffffffff;
            }
            else {
              lVar4 = (ulonglong)*puVar59 * 0x85ebca87;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = *puVar59 * iVar21 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
              uVar47 = uVar58 << 0x17 | uVar19 >> 9;
              lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
              uVar32 = (uint)lVar4;
              puVar25 = (undefined1 *)(uVar32 + 0x9e3779f9);
              uVar19 = (uVar19 << 0x17 | uVar58 >> 9) * 0x27d4eb4f +
                       uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar32);
              uVar54 = 0xfffffffc;
              iVar53 = 4;
            }
          }
          else {
            uVar58 = *puVar59;
            uVar47 = (uint)((ulonglong)uVar58 * 0x80000000) |
                     puVar59[1] * 0x27d4eb4f +
                     uVar58 * -0x3d4d51c3 + (int)((ulonglong)uVar58 * 0x27d4eb4f >> 0x20) >> 1;
            lVar4 = (ulonglong)uVar47 * 0x85ebca87;
            iVar21 = -0x61c8864f;
            uVar32 = (uint)lVar4 ^ (uint)puVar25;
            uVar19 = (puVar59[1] * -0x80000000 +
                     uVar58 * -0x6c158a59 + (int)((ulonglong)uVar58 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar47 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar47 = uVar32 << 0x1b | uVar19 >> 5;
            lVar4 = (ulonglong)uVar47 * 0x85ebca87;
            uVar58 = (uint)lVar4;
            puVar25 = (undefined1 *)(uVar58 + 0xc2b2ae63);
            uVar54 = 0xfffffff8;
            uVar19 = (uVar19 << 0x1b | uVar32 >> 5) * -0x7a143579 +
                     uVar47 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar58);
            iVar53 = 8;
            uStack_34 = uVar48;
          }
          bVar64 = CARRY4(uVar54,uVar52);
          uVar52 = uVar54 + uVar52;
          puVar59 = (uint *)((int)puVar59 + iVar53);
          uVar48 = (uVar48 - 1) + (uint)bVar64;
        } while( true );
      }
      if (uVar19 == 2) {
        uStack_68 = uVar19 + 1;
        puStack_6c = (uint *)puVar60[0x4009];
        puVar23 = (uint *)puVar60[0x4008];
        puVar59 = (uint *)puVar60[0x4007];
        puStack_74 = (uint *)puVar60[0x400a];
        uVar19 = 0x56d677d6;
        iVar53 = 0x27d4eb7f;
        if (&DAT_0000001f < puVar23) {
          uStack_34 = 0x61c8869e;
          puStack_38 = (uint *)0x50;
          uStack_44 = 0x6854fb60;
          uStack_3c = 0xc2b2ae8d;
          iVar21 = 0;
          uStack_48 = 0xba94458a;
          uStack_4c = 0x40801011;
          uVar52 = 0x60ea283e;
          uStack_40 = 0xee40c5e7;
          puStack_7c = puVar23;
          puStack_78 = puVar59;
          puVar31 = puVar23;
          puVar57 = puVar59;
          do {
            lVar4 = (ulonglong)puVar57[6] * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar58 = uVar19 + uStack_48;
            uVar19 = puVar57[7] * 0x27d4eb4f +
                     puVar57[6] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + uStack_34 +
                     (uint)CARRY4(uVar19,uStack_48);
            uVar48 = uVar19 >> 1;
            uStack_54 = uVar58 * -0x80000000 | uVar48;
            uStack_48 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            uVar58 = uVar58 >> 1;
            uStack_58 = uVar19 * -0x80000000 | uVar58;
            uStack_34 = uStack_58 * -0x7a143579 +
                        uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)puVar57[4] * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar47 = uVar19 + uStack_4c;
            uVar19 = puVar57[5] * 0x27d4eb4f +
                     puVar57[4] * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + (int)puStack_38 +
                     (uint)CARRY4(uVar19,uStack_4c);
            uVar32 = uVar19 >> 1;
            uStack_5c = uVar47 * -0x80000000 | uVar32;
            uVar47 = uVar47 >> 1;
            uStack_60 = uVar19 * -0x80000000 | uVar47;
            uStack_4c = (uint)((ulonglong)uStack_5c * 0x85ebca87);
            uVar33 = *puVar57;
            puStack_38 = (uint *)(uStack_60 * -0x7a143579 +
                                 uStack_5c * -0x61c8864f +
                                 (int)((ulonglong)uStack_5c * 0x85ebca87 >> 0x20));
            puVar56 = puVar57 + 3;
            puVar62 = puVar57 + 1;
            uStack_50 = *puVar62;
            puVar1 = puVar57 + 2;
            puVar57 = puVar57 + 8;
            lVar4 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar55 = uVar19 + uStack_44;
            uVar19 = *puVar56 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar19,uStack_44);
            uVar54 = uVar19 >> 1;
            uVar34 = uVar55 * -0x80000000 | uVar54;
            uVar55 = uVar55 >> 1;
            puStack_64 = (uint *)(uVar19 * -0x80000000 | uVar55);
            uStack_44 = (uint)((ulonglong)uVar34 * 0x85ebca87);
            uStack_3c = (int)puStack_64 * -0x7a143579 +
                        uVar34 * -0x61c8864f + (int)((ulonglong)uVar34 * 0x85ebca87 >> 0x20);
            lVar4 = (ulonglong)uVar33 * 0x27d4eb4f;
            uVar19 = (uint)lVar4;
            uVar42 = uVar19 + uStack_40;
            uVar52 = *puVar62 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20)
                     + uVar52 + (uint)CARRY4(uVar19,uStack_40);
            bVar64 = puVar31 < (uint *)0x20;
            puVar31 = puVar31 + -8;
            uVar33 = uVar52 >> 1;
            uVar19 = uVar42 * -0x80000000 | uVar33;
            iVar21 = iVar21 - (uint)bVar64;
            uStack_40 = (uint)((ulonglong)uVar19 * 0x85ebca87);
            uVar42 = uVar42 >> 1;
            uVar63 = uVar52 * -0x80000000 | uVar42;
            uVar52 = uVar63 * -0x7a143579 +
                     uVar19 * -0x61c8864f + (int)((ulonglong)uVar19 * 0x85ebca87 >> 0x20);
          } while ((uint)(puVar31 < (uint *)0x20) <= (uint)-iVar21);
          uVar46 = uStack_40 << 1 | uVar52 >> 0x1f;
          uVar43 = uStack_44 << 7 | uStack_3c >> 0x19;
          uVar49 = uVar43 + uVar46;
          uVar41 = (int)puStack_38 * 0x1000;
          uVar44 = uStack_4c << 0xc | (uint)puStack_38 >> 0x14;
          uVar50 = uVar49 + uVar44;
          puStack_38 = (uint *)((ulonglong)uVar19 * 0x80000000 >> 0x20);
          iVar21 = -0x61c8864f;
          uVar39 = uStack_48 << 0x12 | uStack_34 >> 0xe;
          uVar35 = (uint)((ulonglong)uVar19 * 0x80000000) |
                   uVar63 * 0xf796ca9 +
                   uVar19 * -0x210ca4ff + (int)((ulonglong)uVar19 * 0xf796ca9 >> 0x20) >> 1;
          lVar4 = (ulonglong)uVar35 * 0x85ebca87;
          uVar40 = uVar50 + uVar39 ^ (uint)lVar4;
          lVar5 = (ulonglong)uVar40 * 0x85ebca87;
          uVar45 = (uint)lVar5;
          uVar36 = (uint)((ulonglong)uVar34 * 0x80000000) |
                   (int)puStack_64 * 0xf796ca9 +
                   uVar34 * -0x210ca4ff + (int)((ulonglong)uVar34 * 0xf796ca9 >> 0x20) >> 1;
          lVar6 = (ulonglong)uVar36 * 0x85ebca87;
          uVar26 = uVar45 + 0xc2b2ae63 ^ (uint)lVar6;
          lVar7 = (ulonglong)uVar26 * 0x85ebca87;
          uVar37 = (uint)lVar7;
          uVar38 = (uint)((ulonglong)uStack_5c * 0x80000000) |
                   uStack_60 * 0xf796ca9 +
                   uStack_5c * -0x210ca4ff + (int)((ulonglong)uStack_5c * 0xf796ca9 >> 0x20) >> 1;
          lVar8 = (ulonglong)uVar38 * 0x85ebca87;
          uVar63 = uVar37 + 0xc2b2ae63 ^ (uint)lVar8;
          lVar9 = (ulonglong)uVar63 * 0x85ebca87;
          uVar27 = (uint)lVar9;
          uVar28 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar10 = (ulonglong)uVar28 * 0x85ebca87;
          uVar61 = uVar27 + 0xc2b2ae63 ^ (uint)lVar10;
          lVar11 = (ulonglong)uVar61 * 0x85ebca87;
          uVar29 = (uint)lVar11;
          uVar19 = uVar29 + 0xc2b2ae63;
          iVar53 = (((((uStack_3c * 0x80 | uStack_44 >> 0x19) + (uVar52 * 2 | uStack_40 >> 0x1f) +
                       (uint)CARRY4(uVar43,uVar46) + (uVar41 | uStack_4c >> 0x14) +
                       (uint)CARRY4(uVar49,uVar44) + (uStack_34 * 0x40000 | uStack_48 >> 0xe) +
                       (uint)CARRY4(uVar50,uVar39) ^
                      (int)(puStack_38 + uVar33 * -0x1e10d26b + uVar42 * -0x20000000) * -0x7a143579
                      + uVar35 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) * -0x7a143579 +
                      uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar45) ^
                     (uVar55 * -0x80000000 +
                     uVar54 * -0x784349ac + (int)((ulonglong)uVar34 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                     -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar37) ^
                    (uVar47 * -0x80000000 +
                    uVar32 * -0x784349ac + (int)((ulonglong)uStack_5c * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                    -0x7a143579 + uVar63 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar27) ^
                   (uVar58 * -0x80000000 +
                   uVar48 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                   -0x7a143579 + uVar61 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar29);
        }
        puVar25 = (undefined1 *)(uVar19 + (int)puVar23);
        uVar19 = iVar53 + (uint)CARRY4(uVar19,(uint)puVar23);
        puVar59 = (uint *)((int)puVar59 + ((uint)puVar23 & 0xffffffe0));
        uVar52 = (uint)puVar23 & 0x1f;
        uVar48 = 0;
        do {
          if (uVar48 == 0 && (7 < uVar52) <= uVar48) {
            if (uVar48 == 0 && (3 < uVar52) <= uVar48) {
              if (uVar52 == 0 && uVar48 == 0) goto LAB_7142e57c;
              lVar4 = (ulonglong)(uint)(byte)*puVar59 * 0x165667c5;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = (uint)(byte)*puVar59 * 0x27d4eb2f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
              uVar32 = uVar58 << 0xb | uVar19 >> 0x15;
              lVar4 = (ulonglong)uVar32 * 0x85ebca87;
              puVar25 = (undefined1 *)lVar4;
              iVar53 = 1;
              uVar19 = (uVar19 << 0xb | uVar58 >> 0x15) * -0x7a143579 +
                       uVar32 * iVar21 + (int)((ulonglong)lVar4 >> 0x20);
              uVar58 = 0xffffffff;
            }
            else {
              lVar4 = (ulonglong)*puVar59 * 0x85ebca87;
              uVar58 = (uint)lVar4 ^ (uint)puVar25;
              uVar19 = *puVar59 * iVar21 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
              uVar47 = uVar58 << 0x17 | uVar19 >> 9;
              lVar4 = (ulonglong)uVar47 * 0x27d4eb4f;
              uVar32 = (uint)lVar4;
              puVar25 = (undefined1 *)(uVar32 + 0x9e3779f9);
              iVar53 = 4;
              uVar19 = (uVar19 << 0x17 | uVar58 >> 9) * 0x27d4eb4f +
                       uVar47 * -0x3d4d51c3 + (int)((ulonglong)lVar4 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar32);
              uVar58 = 0xfffffffc;
            }
          }
          else {
            uVar47 = *puVar59;
            uStack_34 = uVar48;
            uVar58 = (uint)((ulonglong)uVar47 * 0x80000000) |
                     puVar59[1] * 0x27d4eb4f +
                     uVar47 * -0x3d4d51c3 + (int)((ulonglong)uVar47 * 0x27d4eb4f >> 0x20) >> 1;
            lVar4 = (ulonglong)uVar58 * 0x85ebca87;
            iVar21 = -0x61c8864f;
            uVar32 = (uint)lVar4 ^ (uint)puVar25;
            uVar19 = (puVar59[1] * -0x80000000 +
                     uVar47 * -0x6c158a59 + (int)((ulonglong)uVar47 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar58 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) ^ uVar19;
            uVar54 = uVar32 << 0x1b | uVar19 >> 5;
            lVar4 = (ulonglong)uVar54 * 0x85ebca87;
            uVar47 = (uint)lVar4;
            uVar58 = 0xfffffff8;
            puVar25 = (undefined1 *)(uVar47 + 0xc2b2ae63);
            iVar53 = 8;
            uVar19 = (uVar19 << 0x1b | uVar32 >> 5) * -0x7a143579 +
                     uVar54 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar47);
          }
          bVar64 = CARRY4(uVar58,uVar52);
          uVar52 = uVar58 + uVar52;
          puVar59 = (uint *)((int)puVar59 + iVar53);
          uVar48 = (uVar48 - 1) + (uint)bVar64;
        } while( true );
      }
LAB_7142eca8:
      FUN_713f0ff8(iStack_90);
      FUN_7145fdf4();
      *(undefined2 *)(iVar20 + 0x6c) = 0;
      *puStack_84 = 0;
      goto LAB_7142ecdc;
    }
  }
  pbVar18 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
  do {
    *pbVar18 = *pbVar18 ^ 0x50;
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != (byte *)0x3c);
  uRam00000000 = 0xe3b00036;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7142f640:
  pbVar18 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
  do {
    *pbVar18 = *pbVar18 ^ 0x50;
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000c;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7142f6e0:
  pbVar18 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
  do {
    *pbVar18 = *pbVar18 ^ 0x50;
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000e;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_7142f780:
  pbVar18 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_7007df60,0x3c,0x22);
  do {
    *pbVar18 = *pbVar18 ^ 0x50;
    pbVar18 = pbVar18 + 1;
  } while (pbVar18 != (byte *)0x3c);
  uRam00000000 = 0xe3b00010;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  uVar22 = (*(code *)0x0)();
  coprocessor_moveto(5,6,7,uVar22,in_cr9,in_cr12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_714310d4
// Entry: 0x714310d4 | Size: 228 bytes
// =========================================================================

undefined4 FUN_714310d4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_714245bc();
  uVar2 = 0;
  if (((((((iVar1 != 0) && (iVar1 = FUN_714249b0(), iVar1 != 0)) &&
         (iVar1 = FUN_71424db0(), iVar1 != 0)) &&
        ((iVar1 = FUN_714251ac(), iVar1 != 0 && (iVar1 = FUN_714255a0(), iVar1 != 0)))) &&
       ((iVar1 = FUN_7148b76c(), iVar1 != 0 &&
        ((iVar1 = FUN_714259a0(), iVar1 != 0 && (iVar1 = FUN_7136a1b8(), iVar1 != 0)))))) &&
      (iVar1 = FUN_71425d9c(), iVar1 != 0)) &&
     ((((iVar1 = FUN_71426190(), iVar1 != 0 && (iVar1 = FUN_714449fc(), iVar1 != 0)) &&
       (iVar1 = FUN_7155ec14(), iVar1 != 0)) &&
      (((iVar1 = FUN_71440400(), iVar1 != 0 && (iVar1 = FUN_71426590(), iVar1 != 0)) &&
       ((iVar1 = FUN_7140cfb8(), iVar1 != 0 &&
        ((iVar1 = FUN_7143fb08(), iVar1 != 0 && (iVar1 = FUN_71426990(), uVar2 = 0, iVar1 != 0))))))
      )))) {
    uVar2 = 1;
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_714313ac
// Entry: 0x714313ac | Size: 388 bytes
// =========================================================================

void FUN_714313ac(undefined4 param_1)

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
  if (((DAT_70ffcd40 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcd40), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf374);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf364);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_7007dfb0;
      uVar5 = DAT_7007dfac;
      uVar4 = DAT_7007dfa8;
      uVar3 = DAT_7007dfa4;
      *puVar10 = DAT_7007dfa0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007dfc4;
      uVar5 = DAT_7007dfc0;
      uVar4 = DAT_7007dfbc;
      uVar3 = DAT_7007dfb8;
      puVar10[5] = DAT_7007dfb4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_7007dfc8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433b28,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf374);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf364);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x853b7319 >> iVar14) |
                (byte)(-0xe32aa61 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xf1cd559f >> (uVar15 & 0xff));
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
    DAT_70ffcd3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcd40);
  }
                    /* WARNING: Could not recover jumptable at 0x714313d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcd3c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143a0b4
// Entry: 0x7143a0b4 | Size: 1936 bytes
// =========================================================================

void FUN_7143a0b4(int param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5,int param_6,
                 undefined4 *param_7,int param_8,int param_9,int param_10,int param_11)

{
  byte bVar1;
  ushort uVar2;
  char *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int unaff_r6;
  undefined4 uVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  int iVar25;
  bool bVar26;
  undefined8 uVar27;
  int iStack_38;
  int iStack_34;
  undefined2 *puStack_2c;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0 || param_3 == 0) {
    return;
  }
  if (param_7 == (undefined4 *)0x0) {
    return;
  }
  iVar25 = (int)*(short *)(param_2 + 0x14);
  if (iVar25 >= 0) {
    unaff_r6 = (int)*(short *)((int)param_2 + 0x52);
  }
  if (iVar25 < 0 || unaff_r6 < 0) {
    return;
  }
  iVar7 = iVar25;
  if (iVar25 < *(int *)(param_3 + 0x18)) {
    iVar7 = unaff_r6;
  }
  if (*(int *)(param_3 + 0x18) <= iVar7) {
    return;
  }
  puVar20 = *(undefined4 **)(param_1 + 8);
  puVar11 = *(undefined4 **)(param_1 + 0xc);
  puVar9 = *(undefined4 **)(param_1 + 0x18);
  if (iVar25 != unaff_r6) {
    if (*(uint *)(param_3 + 0x14) < (uint)((int)puVar9 + (int)puVar11)) {
      return;
    }
    iVar7 = *(int *)(param_3 + 0x60) + unaff_r6 * 0x1c;
    iVar5 = *(int *)(param_3 + 0x60) + iVar25 * 0x1c;
    iVar15 = *(int *)(iVar7 + 0x14);
    iVar25 = *(int *)(iVar5 + 0x14);
    uVar27 = FUN_71ba21e8(param_2[0x16],param_2[0x17]);
    param_2 = (undefined4 *)((ulonglong)uVar27 >> 0x20);
    uVar8 = (undefined4)uVar27;
    if ((param_4 & 0x10) == 0) {
      if (puVar11 != (undefined4 *)0x0) {
        puVar6 = param_7;
        puVar24 = puVar11;
        do {
          puVar18 = (undefined4 *)(iVar25 + (int)puVar9 * 0xc);
          uVar17 = *puVar18;
          puVar22 = (undefined4 *)(iVar15 + (int)puVar9 * 0xc);
          uVar13 = FUN_71ba240c(*puVar22,uVar17);
          uVar13 = FUN_71ba21e8(uVar8,uVar13);
          uVar13 = FUN_71ba0b38(uVar13,uVar17);
          uVar17 = puVar22[2];
          uVar12 = puVar18[1];
          uVar16 = puVar18[2];
          uVar23 = puVar22[1];
          *puVar6 = uVar13;
          uVar13 = FUN_71ba240c(uVar17,uVar16);
          uVar13 = FUN_71ba21e8(uVar8,uVar13);
          uVar13 = FUN_71ba0b38(uVar13,uVar16);
          puVar6[2] = uVar13;
          uVar13 = FUN_71ba240c(uVar23,uVar12);
          uVar13 = FUN_71ba21e8(uVar8,uVar13);
          uVar13 = FUN_71ba0b38(uVar13,uVar12);
          iVar25 = iVar25 + 0xc;
          puVar6[1] = uVar13;
          iVar15 = iVar15 + 0xc;
          puVar6 = (undefined4 *)((int)puVar6 + (int)puVar20);
          puVar24 = (undefined4 *)((int)puVar24 + -1);
          param_2 = puVar20;
        } while (puVar24 != (undefined4 *)0x0);
      }
    }
    else if (puVar11 != (undefined4 *)0x0) {
      iStack_34 = *(int *)(iVar7 + 0x18);
      iStack_38 = *(int *)(iVar5 + 0x18);
      iVar7 = (int)puVar9 * 0xc;
      puVar6 = puVar11;
      puVar24 = param_7;
      do {
        puVar22 = (undefined4 *)(iVar25 + iVar7);
        uVar17 = *puVar22;
        puVar18 = (undefined4 *)(iVar15 + iVar7);
        uVar13 = FUN_71ba240c(*puVar18,uVar17);
        uVar13 = FUN_71ba21e8(uVar8,uVar13);
        uVar13 = FUN_71ba0b38(uVar13,uVar17);
        uVar17 = puVar18[2];
        uVar12 = puVar22[1];
        uVar23 = puVar22[2];
        uVar16 = puVar18[1];
        *puVar24 = uVar13;
        uVar13 = FUN_71ba240c(uVar17,uVar23);
        uVar13 = FUN_71ba21e8(uVar8,uVar13);
        uVar13 = FUN_71ba0b38(uVar13,uVar23);
        puVar24[2] = uVar13;
        uVar13 = FUN_71ba240c(uVar16,uVar12);
        uVar13 = FUN_71ba21e8(uVar8,uVar13);
        uVar13 = FUN_71ba0b38(uVar13,uVar12);
        puVar24[1] = uVar13;
        puVar22 = (undefined4 *)(iStack_38 + iVar7);
        uVar17 = *puVar22;
        puVar18 = (undefined4 *)(iStack_34 + iVar7);
        uVar13 = FUN_71ba240c(*puVar18,uVar17);
        uVar13 = FUN_71ba21e8(uVar8,uVar13);
        uVar13 = FUN_71ba0b38(uVar13,uVar17);
        uVar17 = puVar18[2];
        uVar12 = puVar22[1];
        uVar23 = puVar22[2];
        uVar16 = puVar18[1];
        puVar24[3] = uVar13;
        uVar13 = FUN_71ba240c(uVar17,uVar23);
        uVar13 = FUN_71ba21e8(uVar8,uVar13);
        uVar13 = FUN_71ba0b38(uVar13,uVar23);
        puVar24[5] = uVar13;
        uVar13 = FUN_71ba240c(uVar16,uVar12);
        uVar13 = FUN_71ba21e8(uVar8,uVar13);
        uVar13 = FUN_71ba0b38(uVar13,uVar12);
        puVar24[4] = uVar13;
        iStack_38 = iStack_38 + 0xc;
        iVar15 = iVar15 + 0xc;
        iStack_34 = iStack_34 + 0xc;
        iVar25 = iVar25 + 0xc;
        puVar24 = (undefined4 *)((int)puVar24 + (int)puVar20);
        puVar6 = (undefined4 *)((int)puVar6 + -1);
        param_2 = puVar20;
      } while (puVar6 != (undefined4 *)0x0);
    }
    goto LAB_7143a52c;
  }
  if ((param_6 == 0) ||
     (param_2 = (undefined4 *)(uint)*(ushort *)(param_3 + 0xc),
     (*(ushort *)(param_3 + 0xc) & 2) != 0)) {
    if (*(uint *)(param_3 + 0x14) < (uint)((int)puVar9 + (int)puVar11)) {
      return;
    }
    if (puVar11 != (undefined4 *)0x0) {
      puVar18 = (undefined4 *)
                (*(int *)(*(int *)(param_3 + 0x60) + iVar25 * 0x1c + 0x14) + (int)puVar9 * 0xc);
      puVar6 = param_7;
      puVar24 = puVar11;
      do {
        param_2 = (undefined4 *)puVar18[1];
        uVar13 = puVar18[2];
        puVar24 = (undefined4 *)((int)puVar24 + -1);
        uVar8 = *puVar18;
        puVar18 = puVar18 + 3;
        *puVar6 = uVar8;
        puVar6[1] = param_2;
        puVar6[2] = uVar13;
        puVar6 = (undefined4 *)((int)puVar6 + (int)puVar20);
      } while (puVar24 != (undefined4 *)0x0);
    }
    if ((param_4 & 0x10) == 0) goto LAB_7143a52c;
    puVar6 = param_2;
    if (param_6 != 0) {
      param_2 = (undefined4 *)(uint)*(ushort *)(param_3 + 0xc);
      goto LAB_7143a310;
    }
  }
  else {
    if ((param_4 & 0x10) == 0) goto LAB_7143a52c;
LAB_7143a310:
    puVar6 = puVar9;
    if (((uint)param_2 & 4) == 0) goto LAB_7143a52c;
  }
  if (*(uint *)(param_3 + 0x14) < (uint)((int)puVar9 + (int)puVar11)) {
    return;
  }
  param_2 = puVar6;
  if (puVar11 != (undefined4 *)0x0) {
    puVar24 = (undefined4 *)
              (*(int *)(*(int *)(param_3 + 0x60) + iVar25 * 0x1c + 0x18) + (int)puVar9 * 0xc);
    param_2 = param_7 + 3;
    puVar6 = puVar11;
    do {
      uVar8 = *puVar24;
      uVar17 = puVar24[1];
      puVar6 = (undefined4 *)((int)puVar6 + -1);
      uVar13 = puVar24[2];
      puVar24 = puVar24 + 3;
      *param_2 = uVar8;
      param_2[1] = uVar17;
      param_2[2] = uVar13;
      param_2 = (undefined4 *)((int)param_2 + (int)puVar20);
    } while (puVar6 != (undefined4 *)0x0);
  }
LAB_7143a52c:
  iVar25 = 0x18;
  if ((param_4 & 0x10) == 0) {
    iVar25 = 0xc;
  }
  if ((param_4 & 0x1000) != 0) {
    if (param_6 == 0) {
      if (param_10 == 0) {
        return;
      }
      param_2 = puVar11;
      if (puVar11 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(param_10 + (int)puVar9 * 4);
        puVar24 = (undefined4 *)((int)param_7 + iVar25);
        puVar18 = puVar11;
        do {
          puVar18 = (undefined4 *)((int)puVar18 + -1);
          param_2 = (undefined4 *)((int)puVar24 + (int)puVar20);
          *puVar24 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar24 = param_2;
        } while (puVar18 != (undefined4 *)0x0);
      }
    }
    iVar25 = iVar25 + 4;
  }
  if ((param_4 & 0x2000) != 0) {
    if (param_11 != 0) {
      param_2 = puVar11;
    }
    if (param_11 != 0 && param_2 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(param_11 + (int)puVar9 * 4);
      puVar24 = (undefined4 *)((int)param_7 + iVar25);
      puVar18 = puVar11;
      do {
        puVar18 = (undefined4 *)((int)puVar18 + -1);
        *puVar24 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar24 = (undefined4 *)((int)puVar24 + (int)puVar20);
      } while (puVar18 != (undefined4 *)0x0);
    }
    iVar25 = iVar25 + 4;
  }
  if ((param_4 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    if ((param_6 == 0) || (uVar21 = 0, (*(ushort *)(param_3 + 0xc) & 8) != 0)) {
      bVar26 = param_8 == 0;
      if (bVar26) {
        param_8 = *(int *)(param_3 + 0x30);
      }
      if (bVar26 && param_8 == 0) {
        return;
      }
      iVar7 = param_9;
      if (param_9 != 0) {
        iVar7 = param_9 + (int)puVar9 * 4;
      }
      if (puVar11 == (undefined4 *)0x0) {
        uVar21 = 0;
      }
      else {
        bVar10 = 0xff;
        pbVar14 = (byte *)((int)param_7 + iVar25 + 3);
        iVar5 = 0;
        do {
          puVar19 = (undefined2 *)(param_8 + (int)puVar9 * 4 + iVar5 * -4);
          uVar4 = *puVar19;
          bVar1 = *(byte *)((int)puVar19 + 3);
          pbVar14[-1] = *(byte *)(puVar19 + 1);
          bVar10 = bVar1 & bVar10;
          *(undefined2 *)(pbVar14 + -3) = uVar4;
          *pbVar14 = bVar1;
          if (iVar7 != 0) {
            *(undefined4 *)(pbVar14 + 1) = *(undefined4 *)(iVar7 + iVar5 * -4);
          }
          iVar5 = iVar5 + -1;
          pbVar14 = pbVar14 + (int)puVar20;
        } while ((undefined4 *)-iVar5 != puVar11);
        uVar21 = (uint)(bVar10 != 0xff);
      }
    }
    *(uint *)(param_1 + 0x34) = uVar21;
    iVar7 = 8;
    if (param_9 == 0) {
      iVar7 = 4;
    }
    iVar25 = iVar25 + iVar7;
  }
  pcVar3 = DAT_70ffc9bc;
  if (0 < (int)param_5) {
    if (7 < param_5) {
      param_5 = 8;
    }
    uVar2 = *(ushort *)(param_3 + 0xc);
    if ((param_6 == 0) || ((uVar2 & 0xff0) != 0)) {
      puStack_2c = (undefined2 *)((int)param_7 + iVar25 + 2);
      uVar21 = 0;
      do {
        if ((param_6 == 0) || (((uint)uVar2 & 0x10 << (uVar21 & 0xff)) != 0)) {
          puVar24 = (undefined4 *)(*(int *)(param_3 + 0x34 + uVar21 * 4) + (int)puVar9 * 8);
          puVar6 = puVar11;
          puVar19 = puStack_2c;
          puVar18 = param_7;
          if (*pcVar3 == '\0') {
            for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)((int)puVar6 + -1)) {
              uVar8 = *puVar24;
              FUN_71ba21e8(puVar24[1],0x44000000);
              uVar4 = FUN_71ba17bc();
              *puVar19 = uVar4;
              FUN_71ba21e8(uVar8,0x44000000);
              uVar4 = FUN_71ba17bc();
              puVar19[-1] = uVar4;
              puVar24 = puVar24 + 2;
              puVar19 = (undefined2 *)((int)puVar19 + (int)puVar20);
            }
          }
          else {
            for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)((int)puVar6 + -1)) {
              uVar8 = puVar24[1];
              *(undefined4 *)((int)puVar18 + iVar25) = *puVar24;
              puVar24 = puVar24 + 2;
              ((undefined4 *)((int)puVar18 + iVar25))[1] = uVar8;
              puVar18 = (undefined4 *)((int)puVar18 + (int)puVar20);
            }
          }
        }
        uVar21 = uVar21 + 1;
        iVar25 = iVar25 + 8;
        puStack_2c = puStack_2c + 4;
      } while (uVar21 != param_5);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7143abfc
// Entry: 0x7143abfc | Size: 516 bytes
// =========================================================================

undefined4
FUN_7143abfc(int *param_1,uint *param_2,int *param_3,int *param_4,int param_5,uint param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int unaff_r6;
  int *piVar10;
  uint unaff_r10;
  int *piStack_34;
  
  uVar7 = 0;
  if (param_7 != 0) {
    unaff_r6 = param_5;
  }
  if (param_7 != 0 && unaff_r6 != 0) {
    if (param_6 != 0) {
      unaff_r10 = *param_2;
    }
    if ((param_6 != 0 && unaff_r10 != 0) && (unaff_r10 >> 0x10 == 0)) {
      if (DAT_70ffce0c < unaff_r10) {
        DAT_70ffce10 = (int *)imp_realloc(DAT_70ffce10,unaff_r10 << 2);
        DAT_70ffce0c = 0;
        if (DAT_70ffce10 != (int *)0x0) {
          DAT_70ffce0c = unaff_r10;
        }
      }
      if (DAT_70ffce14 < param_6) {
        DAT_70ffce18 = imp_realloc(DAT_70ffce18,param_6 << 1);
        DAT_70ffce14 = 0;
        if (DAT_70ffce18 != 0) {
          DAT_70ffce14 = param_6;
        }
      }
      iVar1 = DAT_70ffce18;
      piVar10 = DAT_70ffce10;
      if (DAT_70ffce10 != (int *)0x0) {
        piStack_34 = param_3;
      }
      if (DAT_70ffce10 != (int *)0x0 && DAT_70ffce18 != 0) {
        imp___aeabi_memset4(DAT_70ffce10,unaff_r10 << 2,0xff);
        iVar2 = 0;
        uVar3 = 0;
        do {
          uVar6 = (uint)*(ushort *)(unaff_r6 + iVar2);
          if (unaff_r10 <= uVar6) {
            return 0;
          }
          uVar4 = piVar10[uVar6];
          if ((int)uVar4 < 0) {
            piVar10[uVar6] = uVar3;
            uVar4 = uVar3;
            uVar3 = uVar3 + 1;
          }
          puVar5 = (undefined2 *)(iVar1 + iVar2);
          param_6 = param_6 - 1;
          iVar2 = iVar2 + 2;
          *puVar5 = (short)uVar4;
        } while (param_6 != 0);
        if (uVar3 < unaff_r10) {
          iVar2 = imp_malloc(uVar3 * param_7);
          uVar7 = 0;
          if (iVar2 != 0) {
            iVar8 = *param_1;
            iVar9 = iVar8;
            do {
              if (-1 < *piVar10) {
                imp___aeabi_memcpy(*piVar10 * param_7 + iVar2,iVar9,param_7);
              }
              iVar9 = iVar9 + param_7;
              unaff_r10 = unaff_r10 - 1;
              piVar10 = piVar10 + 1;
            } while (unaff_r10 != 0);
            imp_free(iVar8);
            uVar7 = 1;
            *param_1 = iVar2;
            *param_2 = uVar3;
            *piStack_34 = uVar3 * param_7;
            *param_4 = iVar1;
          }
        }
      }
    }
  }
  return uVar7;
}


// =========================================================================
// Function: FUN_7143b470
// Entry: 0x7143b470 | Size: 412 bytes
// =========================================================================

void FUN_7143b470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffce24 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce24);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3b4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3a4);
        *(undefined1 *)(iVar4 + 0x4e) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007dfd0,0x4e);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143c9a0,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3b4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3a4);
      if (*(char *)(iVar4 + 0x4e) != '\0') {
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
          bVar2 = (0x4c < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x4e) = 0;
      }
      DAT_70ffce20 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce24);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7143b4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce20)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7143b8c0
// Entry: 0x7143b8c0 | Size: 380 bytes
// =========================================================================

void FUN_7143b8c0(undefined4 param_1)

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
  if (((DAT_70ffce2c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce2c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3d4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3c4);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007e02c;
      uVar4 = DAT_7007e028;
      uVar3 = DAT_7007e024;
      *puVar10 = DAT_7007e020;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007e040;
      uVar5 = DAT_7007e03c;
      uVar4 = DAT_7007e038;
      uVar3 = DAT_7007e034;
      puVar10[4] = DAT_7007e030;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143c9f0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3d4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3c4);
    if (*(char *)(iVar8 + 0x24) != '\0') {
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
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70ffce28 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce2c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143b8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce28)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143bcd4
// Entry: 0x7143bcd4 | Size: 416 bytes
// =========================================================================

void FUN_7143bcd4(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffce34 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce34), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3f4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3e4);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_7007e054;
      uVar4 = DAT_7007e050;
      uVar3 = DAT_7007e04c;
      *puVar10 = DAT_7007e048;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007e068;
      uVar5 = DAT_7007e064;
      uVar4 = DAT_7007e060;
      uVar3 = DAT_7007e05c;
      puVar10[4] = DAT_7007e058;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007e07c;
      uVar5 = DAT_7007e078;
      uVar4 = DAT_7007e074;
      uVar3 = DAT_7007e070;
      puVar10[9] = DAT_7007e06c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_7007e080;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143ca40,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf3e4);
    if (*(char *)(iVar8 + 0x39) != '\0') {
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
        bVar2 = (0x37 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x39) = 0;
    }
    DAT_70ffce30 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce34);
  }
                    /* WARNING: Could not recover jumptable at 0x7143bd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce30)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7143c10c
// Entry: 0x7143c10c | Size: 400 bytes
// =========================================================================

void FUN_7143c10c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffce3c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce3c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf414,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf404);
      *(undefined1 *)(iVar4 + 0x42) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007e088,0x42);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143ca90,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf414);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf404);
    if (*(char *)(iVar4 + 0x42) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x63671535 >> iVar9) | (byte)(-0xaac1a99 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf553e567 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x40 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x42) = 0;
    }
    DAT_70ffce38 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce3c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143c140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce38)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7143c550
// Entry: 0x7143c550 | Size: 392 bytes
// =========================================================================

void FUN_7143c550(undefined4 param_1)

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
  if (((DAT_70ffce44 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce44), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf434);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf424);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_7007e0dc;
      uVar4 = DAT_7007e0d8;
      uVar3 = DAT_7007e0d4;
      *puVar10 = DAT_7007e0d0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007e0ec;
      uVar4 = DAT_7007e0e8;
      uVar3 = DAT_7007e0e4;
      puVar10[4] = DAT_7007e0e0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007e0f2;
      *(undefined2 *)(puVar10 + 8) = DAT_7007e0f0;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d8124,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf434);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf424);
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
    DAT_70ffce40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce44);
  }
                    /* WARNING: Could not recover jumptable at 0x7143c57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce40)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143cf50
// Entry: 0x7143cf50 | Size: 380 bytes
// =========================================================================

void FUN_7143cf50(undefined4 param_1)

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
  if (((DAT_70ffce54 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce54), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf454);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf444);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007e104;
      uVar4 = DAT_7007e100;
      uVar3 = DAT_7007e0fc;
      *puVar10 = DAT_7007e0f8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007e118;
      uVar5 = DAT_7007e114;
      uVar4 = DAT_7007e110;
      uVar3 = DAT_7007e10c;
      puVar10[4] = DAT_7007e108;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f3698,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf454);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf444);
    if (*(char *)(iVar8 + 0x24) != '\0') {
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
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70ffce50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce54);
  }
                    /* WARNING: Could not recover jumptable at 0x7143cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce50)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143d364
// Entry: 0x7143d364 | Size: 396 bytes
// =========================================================================

void FUN_7143d364(undefined4 param_1)

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
  if (((DAT_70ffce5c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce5c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf474);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf464);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007e12c;
      uVar4 = DAT_7007e128;
      uVar3 = DAT_7007e124;
      *puVar11 = DAT_7007e120;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_7007e140;
      uVar5 = DAT_7007e13c;
      uVar4 = DAT_7007e138;
      uVar3 = DAT_7007e134;
      puVar11[4] = DAT_7007e130;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007e146;
      *(undefined2 *)(puVar11 + 9) = DAT_7007e144;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133d1c0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf474);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf464);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x45a9b135 >> iVar15) |
                (byte)(-0x760ad4c7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x89f52b39 >> (uVar16 & 0xff));
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
    DAT_70ffce58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce58)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143d788
// Entry: 0x7143d788 | Size: 424 bytes
// =========================================================================

void FUN_7143d788(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffce64 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce64), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf494,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf484);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_7007e154;
      uVar4 = DAT_7007e150;
      uVar3 = DAT_7007e14c;
      *puVar10 = DAT_7007e148;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007e168;
      uVar5 = DAT_7007e164;
      uVar4 = DAT_7007e160;
      uVar3 = DAT_7007e15c;
      puVar10[4] = DAT_7007e158;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007e17c;
      uVar5 = DAT_7007e178;
      uVar4 = DAT_7007e174;
      uVar3 = DAT_7007e170;
      puVar10[9] = DAT_7007e16c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007e180;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_7007e182;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143f8d8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf494);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf484);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
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
        bVar2 = (0x39 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70ffce60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce64);
  }
                    /* WARNING: Could not recover jumptable at 0x7143d7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce60)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7143dbc8
// Entry: 0x7143dbc8 | Size: 424 bytes
// =========================================================================

void FUN_7143dbc8(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffce6c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce6c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4b4,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4a4);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_7007e194;
      uVar4 = DAT_7007e190;
      uVar3 = DAT_7007e18c;
      *puVar10 = DAT_7007e188;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007e1a8;
      uVar5 = DAT_7007e1a4;
      uVar4 = DAT_7007e1a0;
      uVar3 = DAT_7007e19c;
      puVar10[4] = DAT_7007e198;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007e1bc;
      uVar5 = DAT_7007e1b8;
      uVar4 = DAT_7007e1b4;
      uVar3 = DAT_7007e1b0;
      puVar10[9] = DAT_7007e1ac;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_7007e1c0;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_7007e1c2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143f928,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4b4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4a4);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
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
        bVar2 = (0x39 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70ffce68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce6c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143dbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce68)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7143e42c
// Entry: 0x7143e42c | Size: 396 bytes
// =========================================================================

void FUN_7143e42c(undefined4 param_1)

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
  if (((DAT_70ffce7c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce7c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4f4);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4e4);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_7007e218;
      uVar5 = DAT_7007e214;
      uVar4 = DAT_7007e210;
      uVar3 = DAT_7007e20c;
      *puVar10 = DAT_7007e208;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007e22c;
      uVar5 = DAT_7007e228;
      uVar4 = DAT_7007e224;
      uVar3 = DAT_7007e220;
      puVar10[5] = DAT_7007e21c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_7007e240;
      uVar5 = DAT_7007e23c;
      uVar4 = DAT_7007e238;
      uVar3 = DAT_7007e234;
      puVar10[10] = DAT_7007e230;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_7007e244;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143f9c8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4f4);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4e4);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
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
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3d) = 0;
    }
    DAT_70ffce78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce7c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143e458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce78)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143e850
// Entry: 0x7143e850 | Size: 380 bytes
// =========================================================================

void FUN_7143e850(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffce84 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce84), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf514,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf504);
      *(undefined1 *)(iVar4 + 0x4b) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007e248,0x4b);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143fa18,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf514);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf504);
    if (*(char *)(iVar4 + 0x4b) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x1ff3fb37 >> iVar9) |
                (byte)(-0x14d86497 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xeb279b69 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x49 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x4b) = 0;
    }
    DAT_70ffce80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce84);
  }
                    /* WARNING: Could not recover jumptable at 0x7143e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce80)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7143ec80
// Entry: 0x7143ec80 | Size: 364 bytes
// =========================================================================

void FUN_7143ec80(void)

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
  if (((DAT_70ffce8c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce8c), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf534);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf524);
      *(undefined1 *)((int)puVar8 + 0x1e) = 1;
      uVar4 = DAT_7007e2a0;
      uVar3 = DAT_7007e29c;
      *puVar8 = DAT_7007e298;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007e2b0;
      uVar4 = DAT_7007e2ac;
      uVar3 = DAT_7007e2a8;
      puVar8[3] = DAT_7007e2a4;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined2 *)(puVar8 + 7) = DAT_7007e2b4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71352648,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf534);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf524);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x63671535 >> iVar12) |
                 (byte)(-0xaac1a99 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xf553e567 >> (uVar13 & 0xff));
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
    DAT_70ffce88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce8c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce88)();
  return;
}


// =========================================================================
// Function: FUN_7143f084
// Entry: 0x7143f084 | Size: 424 bytes
// =========================================================================

void FUN_7143f084(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffce94 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce94), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf554,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf544);
      *(undefined1 *)((int)puVar10 + 0x37) = 1;
      uVar5 = DAT_7007e2c4;
      uVar4 = DAT_7007e2c0;
      uVar3 = DAT_7007e2bc;
      *puVar10 = DAT_7007e2b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007e2d4;
      uVar4 = DAT_7007e2d0;
      uVar3 = DAT_7007e2cc;
      puVar10[4] = DAT_7007e2c8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007e2e8;
      uVar5 = DAT_7007e2e4;
      uVar4 = DAT_7007e2e0;
      uVar3 = DAT_7007e2dc;
      puVar10[8] = DAT_7007e2d8;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined2 *)(puVar10 + 0xd) = DAT_7007e2ec;
      *(undefined1 *)((int)puVar10 + 0x36) = DAT_7007e2ee;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143fa68,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf554);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf544);
    if (*(char *)(iVar8 + 0x37) != '\0') {
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
        bVar2 = (0x35 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x37) = 0;
    }
    DAT_70ffce90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce94);
  }
                    /* WARNING: Could not recover jumptable at 0x7143f0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce90)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7143f4c4
// Entry: 0x7143f4c4 | Size: 380 bytes
// =========================================================================

void FUN_7143f4c4(undefined4 param_1)

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
  if (((DAT_70ffce9c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce9c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf574);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf564);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_7007e300;
      uVar5 = DAT_7007e2fc;
      uVar4 = DAT_7007e2f8;
      uVar3 = DAT_7007e2f4;
      *puVar10 = DAT_7007e2f0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007e314;
      uVar5 = DAT_7007e310;
      uVar4 = DAT_7007e30c;
      uVar3 = DAT_7007e308;
      puVar10[5] = DAT_7007e304;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143fab8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf574);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf564);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x851d8be7 >> iVar14) |
                (byte)(-0x642a6a51 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x9bd595af >> (uVar15 & 0xff));
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
    DAT_70ffce98 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce9c);
  }
                    /* WARNING: Could not recover jumptable at 0x7143f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce98)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7143fb08
// Entry: 0x7143fb08 | Size: 356 bytes
// =========================================================================

void FUN_7143fb08(void)

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
  if (((DAT_70ffcea4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcea4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf594);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf584);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_7007e320;
      uVar3 = DAT_7007e31c;
      *puVar8 = DAT_7007e318;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007e330;
      uVar4 = DAT_7007e32c;
      uVar3 = DAT_7007e328;
      puVar8[3] = DAT_7007e324;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143ff04,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf594);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf584);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xc77d4573 >> iVar12) |
                 (byte)(-0x164a4c4f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xe9b5b3b1 >> (uVar13 & 0xff));
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
    DAT_70ffcea0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcea4);
  }
                    /* WARNING: Could not recover jumptable at 0x7143fb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcea0)();
  return;
}


// =========================================================================
// Function: FUN_7143ff40
// Entry: 0x7143ff40 | Size: 444 bytes
// =========================================================================

void FUN_7143ff40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffceac & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffceac);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5b4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5a4);
        *(undefined1 *)(iVar4 + 0x7f) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007e338,0x7f);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714403b0,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5b4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5a4);
      if (*(char *)(iVar4 + 0x7f) != '\0') {
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
          bVar2 = (0x7d < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x7f) = 0;
      }
      DAT_70ffcea8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffceac);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7143ff94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcea8)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71440400
// Entry: 0x71440400 | Size: 356 bytes
// =========================================================================

void FUN_71440400(void)

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
  if (((DAT_70ffceb4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffceb4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5d4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5c4);
      *(undefined1 *)(puVar9 + 9) = 1;
      uVar5 = DAT_7007e3c4;
      uVar4 = DAT_7007e3c0;
      uVar3 = DAT_7007e3bc;
      *puVar9 = DAT_7007e3b8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007e3d8;
      uVar5 = DAT_7007e3d4;
      uVar4 = DAT_7007e3d0;
      uVar3 = DAT_7007e3cc;
      puVar9[4] = DAT_7007e3c8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714407fc,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5d4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf5c4);
    if (*(char *)(iVar7 + 0x24) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x9f9d9cf >> iVar13) |
                 (byte)(0xb5181c5 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xb5181c5 >> (uVar14 & 0xff));
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
    DAT_70ffceb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffceb4);
  }
                    /* WARNING: Could not recover jumptable at 0x7144042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffceb0)();
  return;
}


// =========================================================================
// Function: FUN_7144084c
// Entry: 0x7144084c | Size: 592 bytes
// =========================================================================

void FUN_7144084c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  DataMemoryBarrier(0xb);
  if ((DAT_70ffcec8 & 1) == 0) {
    iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcec8);
    if (iVar5 != 0) {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf654);
      if (*pcVar6 == '\0') {
        iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf644);
        *(undefined1 *)(iVar5 + 0x1c3) = 1;
        imp___aeabi_memcpy8(iVar5,&DAT_7007e410,0x1c3);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71441738,iVar5,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf654);
        *puVar7 = 1;
      }
      iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf644);
      if (*(char *)(iVar5 + 0x1c3) != '\0') {
        uVar8 = 0;
        uVar9 = 0;
        bVar3 = 0;
        do {
          iVar10 = (uVar9 & 7) * 8;
          uVar11 = iVar10 - 0x20;
          bVar4 = (byte)(0xd93d3145 >> iVar10) |
                  (byte)(-0x1840f2d9 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar11) {
            bVar4 = (byte)(0xe7bf0d27 >> (uVar11 & 0xff));
          }
          *(byte *)(iVar5 + uVar9) = *(byte *)(iVar5 + uVar9) ^ bVar4;
          bVar12 = 0xfffffffe < uVar9;
          uVar11 = uVar8 >> 1;
          uVar1 = (uint)bVar3;
          uVar2 = uVar9 >> 1;
          uVar8 = uVar8 + bVar12;
          uVar9 = uVar9 + 1;
          bVar3 = bVar3 ^ bVar12;
        } while (uVar11 == 0 && (0xe0 < (uVar1 << 0x1f | uVar2)) <= uVar11);
        *(undefined1 *)(iVar5 + 0x1c3) = 0;
      }
      DAT_70ffcec4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar5,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcec8);
    }
  }
  (*DAT_70ffcec4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                  param_20,param_21);
  return;
}


// =========================================================================
// Function: FUN_71440d50
// Entry: 0x71440d50 | Size: 412 bytes
// =========================================================================

void FUN_71440d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffced0 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffced0);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf674,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf664);
        *(undefined1 *)(iVar4 + 0x60) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007e5d8,0x60);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71441788,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf674);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf664);
      if (*(char *)(iVar4 + 0x60) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xb4d771d >> iVar9) |
                  (byte)(-0x44defc41 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xbb2103bf >> (uVar10 & 0xff));
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
      DAT_70ffcecc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffced0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71440d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcecc)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_714411a0
// Entry: 0x714411a0 | Size: 584 bytes
// =========================================================================

void FUN_714411a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21)

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
  if ((DAT_70ffced8 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffced8);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf694);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf684);
        *(undefined1 *)(iVar4 + 0x1c9) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007e638,0x1c9);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714417d8,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf694);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf684);
      if (*(char *)(iVar4 + 0x1c9) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0x6bad4799 >> iVar9) |
                  (byte)(-0x388088dd << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xc77f7723 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x1c7 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x1c9) = 0;
      }
      DAT_70ffced4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffced8);
    }
  }
  (*DAT_70ffced4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                  param_20,param_21);
  return;
}


// =========================================================================
// Function: FUN_714424a0
// Entry: 0x714424a0 | Size: 380 bytes
// =========================================================================

void FUN_714424a0(void)

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
  if (((DAT_70ffcf00 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcf00), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf6f4);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf6e4);
      *(undefined1 *)((int)puVar11 + 0x3b) = 1;
      uVar5 = DAT_7007e884;
      uVar4 = DAT_7007e880;
      uVar3 = DAT_7007e87c;
      *puVar11 = DAT_7007e878;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_7007e898;
      uVar5 = DAT_7007e894;
      uVar4 = DAT_7007e890;
      uVar3 = DAT_7007e88c;
      puVar11[4] = DAT_7007e888;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar6 = DAT_7007e8ac;
      uVar5 = DAT_7007e8a8;
      uVar4 = DAT_7007e8a4;
      uVar3 = DAT_7007e8a0;
      puVar11[9] = DAT_7007e89c;
      puVar11[10] = uVar3;
      puVar11[0xb] = uVar4;
      puVar11[0xc] = uVar5;
      puVar11[0xd] = uVar6;
      uVar7 = DAT_7007e8b2;
      *(undefined2 *)(puVar11 + 0xe) = DAT_7007e8b0;
      *(undefined1 *)((int)puVar11 + 0x3a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71443ca8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf6f4);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf6e4);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
      uVar10 = 0;
      uVar13 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar14 = (byte)(0xd3c78945 >> iVar15) |
                 (byte)(0x5f694973 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar14 = (byte)(0x5f694973 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar14;
        bVar1 = uVar10 == 0;
        bVar2 = (0x39 < uVar13) <= uVar10;
        uVar10 = uVar10 + (0xfffffffe < uVar13);
        uVar13 = uVar13 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_70ffcefc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcf00);
  }
                    /* WARNING: Could not recover jumptable at 0x714424cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcefc)();
  return;
}


// =========================================================================
// Function: FUN_714428b4
// Entry: 0x714428b4 | Size: 708 bytes
// =========================================================================

undefined4 FUN_714428b4(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(iVar4 + 8);
  *(uint *)(param_2 + 4) = uVar1;
  iVar5 = DAT_700bf744;
  if (param_4 == 0) {
    if ((uVar1 & 0x1000000) != 0) goto LAB_71442b04;
    iVar5 = 0x18;
    if ((uVar1 & 0x10) == 0) {
      iVar5 = 0xc;
    }
    iVar2 = 3;
    if (*DAT_70ffc9bc == '\0') {
      iVar2 = 2;
    }
    iVar2 = (uVar1 >> 10 & 4 | uVar1 & 8) + iVar5 + (*(int *)(iVar4 + 0x1c) << iVar2);
    iVar6 = *DAT_70ffcef8;
    *(int *)(param_2 + 8) = iVar2;
    iVar2 = iVar2 * *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0x10) = iVar2;
    iVar5 = DAT_700bf744;
  }
  else {
    if ((*(ushort *)(iVar4 + 0xc) & 0xfff) == 0) {
      return 1;
    }
    if ((uVar1 & 0x1000000) != 0) {
LAB_71442b04:
      FUN_717016f4(iVar4);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar4 + 0x54);
      return 1;
    }
    iVar6 = *DAT_70ffcef8;
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_713a6860();
    }
    iVar2 = *(int *)(param_2 + 0x10);
  }
  uStack_28 = imp_malloc(iVar2);
  FUN_7143a0b4(param_2,param_1,iVar4,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x1c),
               param_4,uStack_28,((undefined4 *)(iVar4 + iVar6))[1],*(undefined4 *)(iVar4 + iVar6),
               *(undefined4 *)(iVar4 + iVar5),0);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 0x10);
  iStack_34 = *(int *)(param_2 + 0x2c);
  FUN_7143abfc(&uStack_28,&uStack_2c,&uStack_30,&iStack_34,iStack_34,*(undefined4 *)(param_2 + 0x28)
               ,*(undefined4 *)(param_2 + 8));
  FUN_713a6980();
  if (iStack_34 != 0) {
    FUN_713a6c0c(iStack_34,0x1403,*(undefined4 *)(param_2 + 0x28));
  }
  FUN_713a6d24(uStack_28,uStack_30,uStack_2c,*(undefined4 *)(param_2 + 8));
  FUN_713a68ec(0,3,0x1406,0,0);
  uVar1 = *(uint *)(iVar4 + 8);
  iVar5 = 0xc;
  if ((uVar1 & 0x10) != 0) {
    FUN_713a68ec(2,3,0x1406,0,0xc);
    uVar1 = *(uint *)(iVar4 + 8);
    iVar5 = 0x18;
  }
  if ((uVar1 & 0x1000) != 0) {
    FUN_713a68ec(7,4,0x1401,1,iVar5);
    uVar1 = *(uint *)(iVar4 + 8);
    iVar5 = iVar5 + 4;
  }
  if ((uVar1 & 8) != 0) {
    FUN_713a68ec(3,4,0x1401,1,iVar5);
    FUN_713a68ec(6,4,0x1401,1,iVar5 + 4);
    iVar5 = iVar5 + 8;
  }
  if (0 < *(int *)(iVar4 + 0x1c)) {
    uVar3 = 0x1406;
    if (*DAT_70ffc9bc == '\0') {
      uVar3 = 0x1403;
    }
    FUN_713a68ec(1,2,uVar3,0,iVar5);
  }
  uVar3 = FUN_713a6b6c(param_4 & 0xff,1);
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  return 1;
}


// =========================================================================
// Function: FUN_71442df4
// Entry: 0x71442df4 | Size: 1112 bytes
// =========================================================================

void FUN_71442df4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  bool bVar20;
  bool bVar21;
  
  piVar8 = DAT_70ffcf24;
  piVar7 = DAT_70ffce1c;
  uVar6 = DAT_70ffc96c;
  piVar5 = DAT_70ffc968;
  piVar4 = DAT_70ffc964;
  if (param_1 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x1a) != 0) {
    uVar14 = 0;
    piVar19 = (int *)(param_1 + 0x50);
    do {
      piVar18 = (int *)piVar19[-1];
      iVar16 = *piVar19;
      cVar1 = *(char *)((int)piVar18 + 7);
      FUN_713a99fc(((uint)param_4 & 0xf) >> 3,*DAT_70ffcef4);
      if (cVar1 != '\0') {
        bVar20 = iVar16 != 0 || cVar1 != -1;
        if (bVar20) {
          uVar9 = FUN_71ba1e0c(cVar1,0);
          FUN_71ba13e0(uVar9,0x437f0000);
          FUN_713a91d4();
        }
        FUN_71423938(0xc,bVar20);
        if (*piVar5 == 0) {
          if (*piVar4 != 0) {
            FUN_713a63b0(0xb57);
            *piVar4 = 0;
          }
          if (((uint)param_4 & 8) == 0) {
            FUN_713a813c(uVar6);
          }
        }
        else {
          FUN_71423d78(piVar18,param_4);
        }
        uVar10 = FUN_71ba1910(piVar18[4]);
        if ((uVar10 & 1) != 0) {
          puVar15 = *(undefined1 **)((int)piVar18 + *piVar8);
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar9 = FUN_71ba1e0c(puVar15[4]);
          uVar9 = FUN_71ba21e8(uVar9,0x3b8080c4);
          uVar11 = FUN_71ba1e0c(uVar2);
          uVar11 = FUN_71ba21e8(uVar11,0x3e000000);
          uVar12 = FUN_71ba1e0c(uVar3);
          uVar12 = FUN_71ba21e8(uVar12,0x3e000000);
          FUN_71445874(*(undefined4 *)(puVar15 + 8),uVar9,uVar11,uVar12,0,0);
        }
        bVar21 = ((uint)param_4 & 0x84) != 0;
        piVar13 = param_4;
        if (bVar21) {
          piVar13 = (int *)*piVar18;
        }
        if ((bVar21 && piVar13 != (int *)0x0) && (*piVar13 != 0)) {
          if ((*(ushort *)(*piVar13 + 0x30) & 1) == 0) {
            FUN_71423938(0x1f,(int)(char)piVar18[0xb]);
            if (((uint)param_4 & 0x1000) != 0) {
              piVar13 = (int *)piVar18[7];
              iVar16 = extraout_r1;
              if (piVar13 != (int *)0x0) {
                iVar16 = *piVar13;
              }
              if (piVar13 != (int *)0x0 && iVar16 != 0) {
                DAT_70b466fc = DAT_70b466fc | 0x800;
                iVar17 = *piVar13;
                iVar16 = *piVar7;
                FUN_71423508(1,iVar17);
                FUN_7138c474(*(undefined4 *)(iVar17 + iVar16),0);
                iVar16 = extraout_r1_00;
              }
              piVar13 = (int *)piVar18[8];
              if (piVar13 != (int *)0x0) {
                iVar16 = *piVar13;
              }
              if (piVar13 != (int *)0x0 && iVar16 != 0) {
                DAT_70b466fc = DAT_70b466fc | 0x1000;
                iVar17 = *piVar13;
                iVar16 = *piVar7;
                FUN_71423508(1,iVar17);
                FUN_7138c474(*(undefined4 *)(iVar17 + iVar16),1);
                iVar16 = extraout_r1_01;
              }
              piVar13 = (int *)piVar18[9];
              if (piVar13 != (int *)0x0) {
                iVar16 = *piVar13;
              }
              if (piVar13 != (int *)0x0 && iVar16 != 0) {
                DAT_70b466fc = DAT_70b466fc | 0x2000;
                iVar17 = *piVar13;
                iVar16 = *piVar7;
                FUN_71423508(1,iVar17);
                FUN_7138c474(*(undefined4 *)(iVar17 + iVar16),2);
                iVar16 = extraout_r1_02;
              }
              piVar13 = (int *)piVar18[10];
              if (piVar13 != (int *)0x0) {
                iVar16 = *piVar13;
              }
              if (piVar13 != (int *)0x0 && iVar16 != 0) {
                DAT_70b466fc = DAT_70b466fc | 0x4000;
                iVar17 = *piVar13;
                iVar16 = *piVar7;
                FUN_71423508(1,iVar17);
                FUN_7138c474(*(undefined4 *)(iVar17 + iVar16),3);
              }
            }
            FUN_71423508(1,*(undefined4 *)*piVar18);
            FUN_71423938(9,*(undefined1 *)(*piVar18 + 0x50));
            FUN_714313ac(piVar19 + -0xd);
            FUN_71423938(0x1f,0xffffffff);
          }
        }
        else {
          FUN_71423938(1,0);
          FUN_714313ac(piVar19 + -0xd);
        }
        DAT_70b466fc = DAT_70b466fc & 0xffff87ff;
        if (bVar20) {
          FUN_713a95f8();
        }
        uVar10 = FUN_71ba1910(piVar18[4]);
        if ((uVar10 & 1) != 0) {
          FUN_71445010();
        }
      }
      piVar19 = piVar19 + 0xe;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ushort *)(param_1 + 0x1a));
  }
  FUN_713a99fc(0,0);
  return;
}


// =========================================================================
// Function: FUN_71443798
// Entry: 0x71443798 | Size: 20 bytes
// =========================================================================

undefined4 FUN_71443798(int param_1)

{
  return *(undefined4 *)(param_1 + *DAT_70ffcef8);
}


// =========================================================================
// Function: FUN_714449fc
// Entry: 0x714449fc | Size: 116 bytes
// =========================================================================

undefined4 FUN_714449fc(void)

{
  FUN_714424a0();
  DAT_700bf744 = FUN_71415d8c(4,0x15ceaa8,&LAB_71444b9c,FUN_71444be8,0);
  FUN_714161e4(0x15ceaa8,FUN_71444c74,&DAT_71444dd0,&LAB_71444dec);
  return 1;
}


// =========================================================================
// Function: FUN_71444be8
// Entry: 0x71444be8 | Size: 56 bytes
// =========================================================================

void FUN_71444be8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_700bf744;
  if (*(int *)(param_1 + DAT_700bf744) != 0) {
    thunk_qNQrlu(*(int *)(param_1 + DAT_700bf744));
  }
  *(undefined4 *)(param_1 + iVar1) = 0;
  return;
}


// =========================================================================
// Function: FUN_71444c74
// Entry: 0x71444c74 | Size: 180 bytes
// =========================================================================

undefined4 FUN_71444c74(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_1c;
  
  iStack_1c = 0;
  FUN_71426d90(param_1,&iStack_1c,4);
  if (iStack_1c == 0) {
    if (4 < param_2) {
      param_2 = param_2 + -4;
      do {
        FUN_71426d90(param_1,&iStack_1c,4);
        param_2 = param_2 + -4;
      } while (param_2 != 0);
    }
  }
  else {
    *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x1000;
    iVar1 = DAT_700bf744;
    iVar2 = *(uint *)(param_3 + 0x14) << 2;
    if (0x3fffffff < *(uint *)(param_3 + 0x14)) {
      iVar2 = -1;
    }
    uVar3 = thunk__IBDl(iVar2);
    *(undefined4 *)(param_3 + iVar1) = uVar3;
    FUN_71426d90(param_1,uVar3,*(int *)(param_3 + 0x14) << 2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71444e14
// Entry: 0x71444e14 | Size: 140 bytes
// =========================================================================

undefined4 FUN_71444e14(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_714271dc();
  uVar2 = 1;
  if ((uVar1 & 0xfffffffb) != 0x53f20098) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 8);
    if ((uVar1 & 0x1000000) == 0 || (uVar1 & 0x1200) == 0) {
      if ((uVar1 & 0x1208) == 0) {
        return 0;
      }
      iVar3 = FUN_71443798(*(int *)(param_1 + 0x18));
      uVar2 = 1;
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x30);
      }
      if ((iVar3 == 0 || iVar4 == 0) &&
         (uVar2 = 0, *(int *)(*(int *)(param_1 + 0x18) + DAT_700bf744) != 0)) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_71444f10
// Entry: 0x71444f10 | Size: 852 bytes
// =========================================================================

void FUN_71444f10(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_r3;
  undefined4 uVar9;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  int iVar10;
  uint uVar11;
  undefined4 unaff_r5;
  uint uVar12;
  bool bVar13;
  
  iVar10 = *(int *)(param_1 + 0x18);
  uVar7 = *(uint *)(iVar10 + 8);
  if (((uVar7 & 0x1208) != 0x1208) && ((uVar7 & 0x1000000) == 0 || (uVar7 & 0x1200) == 0)) {
    iVar6 = FUN_71443798(iVar10);
    iVar8 = 0;
    if (iVar6 != 0) {
      iVar8 = *(int *)(iVar10 + 0x30);
    }
    if ((iVar6 == 0 || iVar8 == 0) && (*(int *)(iVar10 + DAT_700bf744) == 0)) {
      DataMemoryBarrier(0xb);
      if (((DAT_70ffcf20 & 1) == 0) &&
         (iVar10 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcf20), iVar10 != 0)) {
        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf734);
        if (*pcVar4 == '\0') {
          iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf724);
          *(undefined1 *)(iVar10 + 0x44) = 1;
          imp___aeabi_memcpy8(iVar10,&DAT_7007e900,0x44);
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714449ac,iVar10,&DAT_70b0e000);
          puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf734);
          *puVar5 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf724);
        uVar9 = extraout_r3_00;
        if (*(char *)(iVar10 + 0x44) != '\0') {
          uVar9 = 0xe569d1dd;
          uVar7 = 0;
          uVar11 = 0;
          do {
            iVar8 = (uVar7 & 7) * 8;
            bVar3 = (byte)(0xe569d1dd >> iVar8) |
                    (byte)(0x750729cb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
            uVar12 = iVar8 - 0x20;
            if (-1 < (int)uVar12) {
              bVar3 = (byte)(0x750729cb >> (uVar12 & 0xff));
            }
            *(byte *)(iVar10 + uVar7) = *(byte *)(iVar10 + uVar7) ^ bVar3;
            bVar13 = 0xfffffffe < uVar7;
            bVar1 = uVar11 == 0;
            bVar2 = (0x42 < uVar7) <= uVar11;
            uVar7 = uVar7 + 1;
            uVar11 = uVar11 + bVar13;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar10 + 0x44) = 0;
        }
        DAT_70ffcf1c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar10,1,uVar9,unaff_r4,unaff_r5);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcf20);
      }
                    /* WARNING: Could not recover jumptable at 0x714445b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_70ffcf1c)(param_1);
      return;
    }
  }
  DataMemoryBarrier(0xb);
  if (((DAT_70ffcf08 & 1) == 0) && (iVar10 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcf08), iVar10 != 0))
  {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf714);
    if (*pcVar4 == '\0') {
      iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf704);
      *(undefined1 *)(iVar10 + 0x46) = 1;
      imp___aeabi_memcpy8(iVar10,&DAT_7007e8b8,0x46);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71443cf8,iVar10,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf714);
      *puVar5 = 1;
    }
    iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf704);
    uVar9 = extraout_r3;
    if (*(char *)(iVar10 + 0x46) != '\0') {
      uVar9 = 0xb12339e1;
      uVar7 = 0;
      uVar11 = 0;
      do {
        iVar8 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xb12339e1 >> iVar8) | (byte)(-0x42cf0bd << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar12 = iVar8 - 0x20;
        if (-1 < (int)uVar12) {
          bVar3 = (byte)(0xfbd30f43 >> (uVar12 & 0xff));
        }
        *(byte *)(iVar10 + uVar7) = *(byte *)(iVar10 + uVar7) ^ bVar3;
        bVar13 = 0xfffffffe < uVar7;
        bVar1 = uVar11 == 0;
        bVar2 = (0x44 < uVar7) <= uVar11;
        uVar7 = uVar7 + 1;
        uVar11 = uVar11 + bVar13;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x46) = 0;
    }
    DAT_70ffcf04 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar10,1,uVar9,unaff_r4,unaff_r5);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcf08);
  }
                    /* WARNING: Could not recover jumptable at 0x71443810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcf04)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71445010
// Entry: 0x71445010 | Size: 464 bytes
// =========================================================================

void FUN_71445010(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffcf30 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcf30), iVar1 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf798);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf788);
      *(undefined1 *)(puVar4 + 4) = 1;
      *puVar4 = 0x403ab65f;
      puVar4[1] = 0x130f3631;
      puVar4[2] = 0xd39b240;
      puVar4[3] = 0x6540486c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71445d60,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf798);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf788);
    if (pbVar3[0x10] != 0) {
      *pbVar3 = *pbVar3 ^ 0xd;
      pbVar3[1] = pbVar3[1] ^ 0xd3;
      pbVar3[2] = pbVar3[2] ^ 0x49;
      pbVar3[3] = pbVar3[3] ^ 0x25;
      pbVar3[0x10] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x45;
      pbVar3[5] = pbVar3[5] ^ 0x73;
      pbVar3[6] = pbVar3[6] ^ 0x61;
      pbVar3[7] = pbVar3[7] ^ 0x65;
      pbVar3[8] = pbVar3[8] ^ 0xd;
      pbVar3[9] = pbVar3[9] ^ 0xd3;
      pbVar3[10] = pbVar3[10] ^ 0x49;
      pbVar3[0xb] = pbVar3[0xb] ^ 0x25;
      pbVar3[0xc] = pbVar3[0xc] ^ 0x45;
      pbVar3[0xd] = pbVar3[0xd] ^ 0x73;
      pbVar3[0xe] = pbVar3[0xe] ^ 0x61;
      pbVar3[0xf] = pbVar3[0xf] ^ 0x65;
    }
    DAT_70ffcf2c = (code *)FUN_712f1f4c(&DAT_70b2e804,pbVar3,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcf30);
  }
                    /* WARNING: Could not recover jumptable at 0x7144503c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcf2c)();
  return;
}


// =========================================================================
// Function: FUN_71445458
// Entry: 0x71445458 | Size: 388 bytes
// =========================================================================

void FUN_71445458(undefined4 param_1)

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
  if (((DAT_70ffcf38 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcf38), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7b8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7a8);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_7007e988;
      uVar5 = DAT_7007e984;
      uVar4 = DAT_7007e980;
      uVar3 = DAT_7007e97c;
      *puVar11 = DAT_7007e978;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007e98e;
      *(undefined2 *)(puVar11 + 5) = DAT_7007e98c;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133a9d4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7b8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7a8);
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
    DAT_70ffcf34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcf38);
  }
                    /* WARNING: Could not recover jumptable at 0x71445484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffcf34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71445874
// Entry: 0x71445874 | Size: 428 bytes
// =========================================================================

void FUN_71445874(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  if ((DAT_70ffcf40 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcf40);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7d8,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7c8);
        *(undefined1 *)(iVar3 + 0x4c) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007e990,0x4c);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71445d90,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7d8);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf7c8);
      if (*(char *)(iVar3 + 0x4c) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0x45a9b135 >> iVar5) |
                  (byte)(-0x760ad4c7 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0x89f52b39 >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0x4a < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x4c) = 0;
      }
      DAT_70ffcf3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcf40);
    }
  }
  (*DAT_70ffcf3c)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: FUN_71446a44
// Entry: 0x71446a44 | Size: 356 bytes
// =========================================================================

void FUN_71446a44(void)

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
  if (((DAT_70ffd1c8 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1c8), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf858);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf848);
      *(undefined1 *)(puVar8 + 8) = 1;
      uVar5 = DAT_70060a84;
      uVar4 = DAT_70060a80;
      uVar3 = DAT_70060a7c;
      *puVar8 = DAT_70060a78;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar5 = DAT_70060a94;
      uVar4 = DAT_70060a90;
      uVar3 = DAT_70060a8c;
      puVar8[4] = DAT_70060a88;
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714472c8,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf858);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf848);
    if (*(char *)(iVar6 + 0x20) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x2549d30d >> iVar12) |
                 (byte)(0x65617345 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x65617345 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1e < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x20) = 0;
    }
    DAT_70ffd1c4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1c8);
  }
                    /* WARNING: Could not recover jumptable at 0x71446a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd1c4)();
  return;
}


// =========================================================================
// Function: FUN_71446e40
// Entry: 0x71446e40 | Size: 400 bytes
// =========================================================================

void FUN_71446e40(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffd1d0 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1d0), iVar1 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf878);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf868);
      *puVar4 = 0xc0931c81;
      puVar4[1] = 0xc6efdae5;
      *(undefined1 *)((int)puVar4 + 0xb) = 1;
      *(undefined4 *)((int)puVar4 + 7) = 0xd552fec6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71447308,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf878);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf868);
    if (pbVar3[0xb] != 0) {
      *pbVar3 = *pbVar3 ^ 0xc5;
      pbVar3[1] = pbVar3[1] ^ 0x73;
      pbVar3[2] = pbVar3[2] ^ 0xd5;
      pbVar3[3] = pbVar3[3] ^ 0xa1;
      pbVar3[0xb] = 0;
      pbVar3[4] = pbVar3[4] ^ 0x81;
      pbVar3[5] = pbVar3[5] ^ 0xbf;
      pbVar3[6] = pbVar3[6] ^ 199;
      pbVar3[7] = pbVar3[7] ^ 0xef;
      pbVar3[8] = pbVar3[8] ^ 0xc5;
      pbVar3[9] = pbVar3[9] ^ 0x73;
      pbVar3[10] = pbVar3[10] ^ 0xd5;
    }
    DAT_70ffd1cc = (code *)FUN_712f1f4c(&DAT_70b2e804,pbVar3,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1d0);
  }
                    /* WARNING: Could not recover jumptable at 0x71446e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd1cc)();
  return;
}


// =========================================================================
// Function: FUN_71447ba4
// Entry: 0x71447ba4 | Size: 356 bytes
// =========================================================================

void FUN_71447ba4(void)

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
  if (((DAT_70ffd1ec & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1ec), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8b8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8a8);
      *(undefined1 *)((int)puVar9 + 0x16) = 1;
      uVar6 = DAT_7007ea40;
      uVar5 = DAT_7007ea3c;
      uVar4 = DAT_7007ea38;
      uVar3 = DAT_7007ea34;
      *puVar9 = DAT_7007ea30;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined2 *)(puVar9 + 5) = DAT_7007ea44;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c648,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8b8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8a8);
    if (*(char *)(iVar7 + 0x16) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x45a9b135 >> iVar13) |
                 (byte)(-0x760ad4c7 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x89f52b39 >> (uVar14 & 0xff));
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
    DAT_70ffd1e8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1ec);
  }
                    /* WARNING: Could not recover jumptable at 0x71447bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd1e8)();
  return;
}


// =========================================================================
// Function: FUN_71447fa0
// Entry: 0x71447fa0 | Size: 348 bytes
// =========================================================================

void FUN_71447fa0(void)

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
  if (((DAT_70ffd1f4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1f4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8d8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8c8);
      *(undefined1 *)(puVar10 + 6) = 1;
      uVar7 = DAT_7007ea5c;
      uVar6 = DAT_7007ea58;
      uVar5 = DAT_7007ea54;
      uVar4 = DAT_7007ea50;
      uVar3 = DAT_7007ea4c;
      *puVar10 = DAT_7007ea48;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c680,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8d8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8c8);
    if (*(char *)(iVar8 + 0x18) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xd93d3145 >> iVar14) |
                 (byte)(-0x1840f2d9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xe7bf0d27 >> (uVar15 & 0xff));
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
    DAT_70ffd1f0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1f4);
  }
                    /* WARNING: Could not recover jumptable at 0x71447fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd1f0)();
  return;
}


// =========================================================================
// Function: FUN_71448394
// Entry: 0x71448394 | Size: 404 bytes
// =========================================================================

void FUN_71448394(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffd1fc & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1fc), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8f8);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8e8);
      *(undefined1 *)((int)puVar10 + 0x1e) = 1;
      uVar4 = DAT_7007ea68;
      uVar3 = DAT_7007ea64;
      *puVar10 = DAT_7007ea60;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_7007ea78;
      uVar4 = DAT_7007ea74;
      uVar3 = DAT_7007ea70;
      puVar10[3] = DAT_7007ea6c;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      *(undefined2 *)(puVar10 + 7) = DAT_7007ea7c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133d210,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8f8);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf8e8);
    if (*(char *)(iVar7 + 0x1e) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        bVar13 = (byte)(0xb4d771d >> iVar15) |
                 (byte)(-0x44defc41 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar15 - 0x20;
        if (-1 < (int)uVar14) {
          bVar13 = (byte)(0xbb2103bf >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x1c < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1e) = 0;
    }
    DAT_70ffd1f8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1fc);
  }
  pcVar6 = DAT_70ffd1f8;
  FUN_71358f2c(auStack_28,param_1);
  FUN_71358f2c(auStack_24,auStack_28);
  (*pcVar6)();
  return;
}


// =========================================================================
// Function: FUN_714487f8
// Entry: 0x714487f8 | Size: 400 bytes
// =========================================================================

void FUN_714487f8(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffd204 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd204), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf918);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf908);
      *(undefined1 *)(puVar11 + 10) = 1;
      uVar6 = DAT_7007ea90;
      uVar5 = DAT_7007ea8c;
      uVar4 = DAT_7007ea88;
      uVar3 = DAT_7007ea84;
      *puVar11 = DAT_7007ea80;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_7007eaa4;
      uVar5 = DAT_7007eaa0;
      uVar4 = DAT_7007ea9c;
      uVar3 = DAT_7007ea98;
      puVar11[5] = DAT_7007ea94;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c6b8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf918);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf908);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar10 = 0;
      uVar13 = 0;
      do {
        iVar16 = (uVar13 & 7) * 8;
        bVar14 = (byte)(0x19cfe32d >> iVar16) |
                 (byte)(-0x266c1045 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar16 - 0x20;
        if (-1 < (int)uVar15) {
          bVar14 = (byte)(0xd993efbb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar13) = *(byte *)(iVar8 + uVar13) ^ bVar14;
        bVar1 = uVar10 == 0;
        bVar2 = (0x26 < uVar13) <= uVar10;
        uVar10 = uVar10 + (0xfffffffe < uVar13);
        uVar13 = uVar13 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x28) = 0;
    }
    DAT_70ffd200 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd204);
  }
  pcVar7 = DAT_70ffd200;
  FUN_71358f2c(auStack_28,param_1);
  FUN_71358f2c(auStack_24,auStack_28);
  (*pcVar7)();
  return;
}


// =========================================================================
// Function: FUN_71448c58
// Entry: 0x71448c58 | Size: 404 bytes
// =========================================================================

void FUN_71448c58(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  DataMemoryBarrier(0xb);
  if (((DAT_70ffd20c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd20c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf938);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf928);
      *(undefined1 *)((int)puVar10 + 0x22) = 1;
      uVar5 = DAT_7007eab4;
      uVar4 = DAT_7007eab0;
      uVar3 = DAT_7007eaac;
      *puVar10 = DAT_7007eaa8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007eac4;
      uVar4 = DAT_7007eac0;
      uVar3 = DAT_7007eabc;
      puVar10[4] = DAT_7007eab8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      *(undefined2 *)(puVar10 + 8) = DAT_7007eac8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713525a8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf938);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf928);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        bVar13 = (byte)(0xd3c78945 >> iVar15) |
                 (byte)(0x5f694973 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar15 - 0x20;
        if (-1 < (int)uVar14) {
          bVar13 = (byte)(0x5f694973 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x20 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x22) = 0;
    }
    DAT_70ffd208 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd20c);
  }
  pcVar6 = DAT_70ffd208;
  FUN_71358f2c(auStack_28,param_1);
  FUN_71358f2c(auStack_24,auStack_28);
  (*pcVar6)();
  return;
}


// =========================================================================
// Function: FUN_714490bc
// Entry: 0x714490bc | Size: 356 bytes
// =========================================================================

void FUN_714490bc(void)

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
  if (((DAT_70ffd214 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd214), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf958);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf948);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_7007ead8;
      uVar3 = DAT_7007ead4;
      *puVar8 = DAT_7007ead0;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007eae8;
      uVar4 = DAT_7007eae4;
      uVar3 = DAT_7007eae0;
      puVar8[3] = DAT_7007eadc;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f2178,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf958);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf948);
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
    DAT_70ffd210 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd214);
  }
                    /* WARNING: Could not recover jumptable at 0x714490e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd210)();
  return;
}


// =========================================================================
// Function: FUN_714494b8
// Entry: 0x714494b8 | Size: 388 bytes
// =========================================================================

void FUN_714494b8(undefined4 param_1)

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
  if (((DAT_70ffd21c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd21c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf978);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf968);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007eafc;
      uVar4 = DAT_7007eaf8;
      uVar3 = DAT_7007eaf4;
      *puVar10 = DAT_7007eaf0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007eb10;
      uVar5 = DAT_7007eb0c;
      uVar4 = DAT_7007eb08;
      uVar3 = DAT_7007eb04;
      puVar10[4] = DAT_7007eb00;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007eb14;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c708,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf978);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf968);
    if (*(char *)(iVar8 + 0x25) != '\0') {
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
        bVar2 = (0x23 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x25) = 0;
    }
    DAT_70ffd218 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd21c);
  }
                    /* WARNING: Could not recover jumptable at 0x714494e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd218)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714498d4
// Entry: 0x714498d4 | Size: 388 bytes
// =========================================================================

void FUN_714498d4(undefined4 param_1)

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
  if (((DAT_70ffd224 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd224), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf998);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf988);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_7007eb28;
      uVar5 = DAT_7007eb24;
      uVar4 = DAT_7007eb20;
      uVar3 = DAT_7007eb1c;
      *puVar11 = DAT_7007eb18;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007eb40;
      uVar6 = DAT_7007eb3c;
      uVar5 = DAT_7007eb38;
      uVar4 = DAT_7007eb34;
      uVar3 = DAT_7007eb30;
      puVar11[5] = DAT_7007eb2c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_7007eb44;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c758,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf998);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf988);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x851d8be7 >> iVar15) |
                (byte)(-0x642a6a51 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x9bd595af >> (uVar16 & 0xff));
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
    DAT_70ffd220 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd224);
  }
                    /* WARNING: Could not recover jumptable at 0x71449900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd220)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71449cf0
// Entry: 0x71449cf0 | Size: 388 bytes
// =========================================================================

void FUN_71449cf0(undefined4 param_1)

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
  if (((DAT_70ffd22c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd22c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9b8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9a8);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007eb5c;
      uVar6 = DAT_7007eb58;
      uVar5 = DAT_7007eb54;
      uVar4 = DAT_7007eb50;
      uVar3 = DAT_7007eb4c;
      *puVar11 = DAT_7007eb48;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_7007eb60;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_7007eb62;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c7a8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9b8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9a8);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xbb935373 >> iVar15) |
                (byte)(0x39e3c19b << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x39e3c19b >> (uVar16 & 0xff));
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
    DAT_70ffd228 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd22c);
  }
                    /* WARNING: Could not recover jumptable at 0x71449d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd228)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144a10c
// Entry: 0x7144a10c | Size: 376 bytes
// =========================================================================

void FUN_7144a10c(undefined4 param_1)

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
  if (((DAT_70ffd234 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd234), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9d8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9c8);
      *(undefined1 *)(puVar9 + 8) = 1;
      uVar5 = DAT_70060ce4;
      uVar4 = DAT_70060ce0;
      uVar3 = DAT_70060cdc;
      *puVar9 = DAT_70060cd8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70060cf4;
      uVar4 = DAT_70060cf0;
      uVar3 = DAT_70060cec;
      puVar9[4] = DAT_70060ce8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c7e4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9d8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9c8);
    if (*(char *)(iVar7 + 0x20) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xd7fe737 >> iVar13) |
                (byte)(-0x68e6be27 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x971941d9 >> (uVar14 & 0xff));
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
    DAT_70ffd230 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd234);
  }
                    /* WARNING: Could not recover jumptable at 0x7144a138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd230)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144a51c
// Entry: 0x7144a51c | Size: 416 bytes
// =========================================================================

void FUN_7144a51c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffd23c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd23c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9f8,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9e8);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_7007eb74;
      uVar4 = DAT_7007eb70;
      uVar3 = DAT_7007eb6c;
      *puVar10 = DAT_7007eb68;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007eb88;
      uVar5 = DAT_7007eb84;
      uVar4 = DAT_7007eb80;
      uVar3 = DAT_7007eb7c;
      puVar10[4] = DAT_7007eb78;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007eb9c;
      uVar5 = DAT_7007eb98;
      uVar4 = DAT_7007eb94;
      uVar3 = DAT_7007eb90;
      puVar10[9] = DAT_7007eb8c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_7007eba0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c824,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9f8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf9e8);
    if (*(char *)(iVar8 + 0x39) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf9913b87 >> iVar14) |
                (byte)(-0x3688e4bb << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xc9771b45 >> (uVar15 & 0xff));
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
    DAT_70ffd238 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd23c);
  }
                    /* WARNING: Could not recover jumptable at 0x7144a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd238)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7144a954
// Entry: 0x7144a954 | Size: 396 bytes
// =========================================================================

void FUN_7144a954(undefined4 param_1)

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
  if (((DAT_70ffd244 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd244), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa18);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa08);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007ebb4;
      uVar4 = DAT_7007ebb0;
      uVar3 = DAT_7007ebac;
      *puVar11 = DAT_7007eba8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_7007ebc8;
      uVar5 = DAT_7007ebc4;
      uVar4 = DAT_7007ebc0;
      uVar3 = DAT_7007ebbc;
      puVar11[4] = DAT_7007ebb8;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007ebce;
      *(undefined2 *)(puVar11 + 9) = DAT_7007ebcc;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c874,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa18);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa08);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xab056bdd >> iVar15) |
                (byte)(0x7d0149af << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x7d0149af >> (uVar16 & 0xff));
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
    DAT_70ffd240 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd244);
  }
                    /* WARNING: Could not recover jumptable at 0x7144a980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd240)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144ad78
// Entry: 0x7144ad78 | Size: 376 bytes
// =========================================================================

void FUN_7144ad78(undefined4 param_1)

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
  if (((DAT_70ffd24c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd24c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa38);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa28);
      *(undefined1 *)(puVar9 + 8) = 1;
      uVar5 = DAT_700609c4;
      uVar4 = DAT_700609c0;
      uVar3 = DAT_700609bc;
      *puVar9 = DAT_700609b8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_700609d4;
      uVar4 = DAT_700609d0;
      uVar3 = DAT_700609cc;
      puVar9[4] = DAT_700609c8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c8c4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa38);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa28);
    if (*(char *)(iVar7 + 0x20) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0xb1c9b5ef >> iVar13) |
                (byte)(-0x78f822dd << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x8707dd23 >> (uVar14 & 0xff));
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
    DAT_70ffd248 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd24c);
  }
                    /* WARNING: Could not recover jumptable at 0x7144ada4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd248)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144b188
// Entry: 0x7144b188 | Size: 388 bytes
// =========================================================================

void FUN_7144b188(undefined4 param_1)

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
  if (((DAT_70ffd254 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd254), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa58);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa48);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_7007ebe0;
      uVar5 = DAT_7007ebdc;
      uVar4 = DAT_7007ebd8;
      uVar3 = DAT_7007ebd4;
      *puVar11 = DAT_7007ebd0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007ebf8;
      uVar6 = DAT_7007ebf4;
      uVar5 = DAT_7007ebf0;
      uVar4 = DAT_7007ebec;
      uVar3 = DAT_7007ebe8;
      puVar11[5] = DAT_7007ebe4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007ebfc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c904,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa58);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa48);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
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
        bVar2 = (0x2c < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2e) = 0;
    }
    DAT_70ffd250 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd254);
  }
                    /* WARNING: Could not recover jumptable at 0x7144b1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd250)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144b5a4
// Entry: 0x7144b5a4 | Size: 380 bytes
// =========================================================================

void FUN_7144b5a4(undefined4 param_1)

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
  if (((DAT_70ffd25c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd25c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa78);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa68);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_7007ec10;
      uVar5 = DAT_7007ec0c;
      uVar4 = DAT_7007ec08;
      uVar3 = DAT_7007ec04;
      *puVar10 = DAT_7007ec00;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007ec24;
      uVar5 = DAT_7007ec20;
      uVar4 = DAT_7007ec1c;
      uVar3 = DAT_7007ec18;
      puVar10[5] = DAT_7007ec14;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c954,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa78);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa68);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x6f799353 >> iVar14) |
                (byte)(-0x7e7c0257 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x8183fda9 >> (uVar15 & 0xff));
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
    DAT_70ffd258 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd25c);
  }
                    /* WARNING: Could not recover jumptable at 0x7144b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd258)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144b9b8
// Entry: 0x7144b9b8 | Size: 420 bytes
// =========================================================================

void FUN_7144b9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffd264 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd264), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa98,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa88);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      uVar5 = DAT_7007ec34;
      uVar4 = DAT_7007ec30;
      uVar3 = DAT_7007ec2c;
      *puVar10 = DAT_7007ec28;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007ec48;
      uVar5 = DAT_7007ec44;
      uVar4 = DAT_7007ec40;
      uVar3 = DAT_7007ec3c;
      puVar10[4] = DAT_7007ec38;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007ec5c;
      uVar5 = DAT_7007ec58;
      uVar4 = DAT_7007ec54;
      uVar3 = DAT_7007ec50;
      puVar10[9] = DAT_7007ec4c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c9a4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa98);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfa88);
    if (*(char *)(iVar8 + 0x38) != '\0') {
      uVar12 = 0;
      uVar15 = 0;
      do {
        iVar13 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0x93b4331 >> iVar13) |
                (byte)(-0x3e962c5f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar14 = iVar13 - 0x20;
        if (-1 < (int)uVar14) {
          bVar7 = (byte)(0xc169d3a1 >> (uVar14 & 0xff));
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
    DAT_70ffd260 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd264);
  }
                    /* WARNING: Could not recover jumptable at 0x7144b9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd260)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7144bdf4
// Entry: 0x7144bdf4 | Size: 388 bytes
// =========================================================================

void FUN_7144bdf4(undefined4 param_1)

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
  if (((DAT_70ffd26c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd26c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfab8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfaa8);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_7007ec70;
      uVar5 = DAT_7007ec6c;
      uVar4 = DAT_7007ec68;
      uVar3 = DAT_7007ec64;
      *puVar10 = DAT_7007ec60;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007ec84;
      uVar5 = DAT_7007ec80;
      uVar4 = DAT_7007ec7c;
      uVar3 = DAT_7007ec78;
      puVar10[5] = DAT_7007ec74;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_7007ec88;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c9f4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfab8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfaa8);
    if (*(char *)(iVar8 + 0x29) != '\0') {
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
        bVar2 = (0x27 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x29) = 0;
    }
    DAT_70ffd268 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd26c);
  }
                    /* WARNING: Could not recover jumptable at 0x7144be20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd268)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144c210
// Entry: 0x7144c210 | Size: 416 bytes
// =========================================================================

void FUN_7144c210(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffd274 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd274), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfad8,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfac8);
      *(undefined1 *)((int)puVar10 + 0x35) = 1;
      uVar5 = DAT_7007ec9c;
      uVar4 = DAT_7007ec98;
      uVar3 = DAT_7007ec94;
      *puVar10 = DAT_7007ec90;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007ecac;
      uVar4 = DAT_7007eca8;
      uVar3 = DAT_7007eca4;
      puVar10[4] = DAT_7007eca0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007ecc0;
      uVar5 = DAT_7007ecbc;
      uVar4 = DAT_7007ecb8;
      uVar3 = DAT_7007ecb4;
      puVar10[8] = DAT_7007ecb0;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      *(undefined1 *)(puVar10 + 0xd) = DAT_7007ecc4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144ca44,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfad8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfac8);
    if (*(char *)(iVar8 + 0x35) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x25097b7b >> iVar14) |
                (byte)(-0x1c6ed203 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xe3912dfd >> (uVar15 & 0xff));
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
    DAT_70ffd270 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd274);
  }
                    /* WARNING: Could not recover jumptable at 0x7144c244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd270)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7144cefc
// Entry: 0x7144cefc | Size: 420 bytes
// =========================================================================

void FUN_7144cefc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

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
  if ((DAT_70ffd288 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd288);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb18,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb08);
        *(undefined1 *)(iVar4 + 0x81) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007ecc8,0x81);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144e03c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb18);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb08);
      if (*(char *)(iVar4 + 0x81) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x93a3c787 >> iVar10) |
                  (byte)(0x47abcda5 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0x47abcda5 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x7f < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x81) = 0;
      }
      DAT_70ffd284 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd288);
    }
  }
  (*DAT_70ffd284)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// =========================================================================
// Function: FUN_7144d354
// Entry: 0x7144d354 | Size: 420 bytes
// =========================================================================

void FUN_7144d354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

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
  if ((DAT_70ffd290 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd290);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb38,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb28);
        *(undefined1 *)(iVar4 + 0x7a) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007ed50,0x7a);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144e08c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb38);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb28);
      if (*(char *)(iVar4 + 0x7a) != '\0') {
        uVar7 = 0;
        uVar9 = 0;
        do {
          iVar10 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0xa1d573c5 >> iVar10) |
                  (byte)(-0x1038407f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar8 = iVar10 - 0x20;
          if (-1 < (int)uVar8) {
            bVar3 = (byte)(0xefc7bf81 >> (uVar8 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar9 == 0;
          bVar2 = (0x78 < uVar7) <= uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = uVar9 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x7a) = 0;
      }
      DAT_70ffd28c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd290);
    }
  }
  (*DAT_70ffd28c)(param_1,param_2,param_3,param_4,param_5);
  return;
}


// =========================================================================
// Function: FUN_7144d7ac
// Entry: 0x7144d7ac | Size: 416 bytes
// =========================================================================

void FUN_7144d7ac(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffd298 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd298), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb58,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb48);
      *(undefined1 *)((int)puVar11 + 0x2f) = 1;
      uVar6 = DAT_7007ede0;
      uVar5 = DAT_7007eddc;
      uVar4 = DAT_7007edd8;
      uVar3 = DAT_7007edd4;
      *puVar11 = DAT_7007edd0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007edf8;
      uVar6 = DAT_7007edf4;
      uVar5 = DAT_7007edf0;
      uVar4 = DAT_7007edec;
      uVar3 = DAT_7007ede8;
      puVar11[5] = DAT_7007ede4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007edfc;
      *(undefined1 *)((int)puVar11 + 0x2e) = DAT_7007edfe;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144e0dc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb58);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb48);
    if (*(char *)(iVar9 + 0x2f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xd93d3145 >> iVar15) |
                (byte)(-0x1840f2d9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xe7bf0d27 >> (uVar16 & 0xff));
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
    DAT_70ffd294 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd298);
  }
                    /* WARNING: Could not recover jumptable at 0x7144d7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd294)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7144dbe4
// Entry: 0x7144dbe4 | Size: 408 bytes
// =========================================================================

void FUN_7144dbe4(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffd2a0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2a0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb78,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb68);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_7007ee10;
      uVar5 = DAT_7007ee0c;
      uVar4 = DAT_7007ee08;
      uVar3 = DAT_7007ee04;
      *puVar10 = DAT_7007ee00;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007ee24;
      uVar5 = DAT_7007ee20;
      uVar4 = DAT_7007ee1c;
      uVar3 = DAT_7007ee18;
      puVar10[5] = DAT_7007ee14;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_7007ee28;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144e12c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb78);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb68);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
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
        bVar2 = (0x28 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2a) = 0;
    }
    DAT_70ffd29c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2a0);
  }
                    /* WARNING: Could not recover jumptable at 0x7144dc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd29c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7144e57c
// Entry: 0x7144e57c | Size: 380 bytes
// =========================================================================

void FUN_7144e57c(undefined4 param_1)

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
  if (((DAT_70ffd2b0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2b0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb98);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb88);
      *(undefined1 *)((int)puVar10 + 0x15) = 1;
      uVar6 = DAT_7007ee40;
      uVar5 = DAT_7007ee3c;
      uVar4 = DAT_7007ee38;
      uVar3 = DAT_7007ee34;
      *puVar10 = DAT_7007ee30;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined1 *)(puVar10 + 5) = DAT_7007ee44;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d29b4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb98);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfb88);
    if (*(char *)(iVar8 + 0x15) != '\0') {
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
        bVar2 = (0x13 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x15) = 0;
    }
    DAT_70ffd2ac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2b0);
  }
                    /* WARNING: Could not recover jumptable at 0x7144e5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2ac)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144e990
// Entry: 0x7144e990 | Size: 380 bytes
// =========================================================================

void FUN_7144e990(undefined4 param_1)

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
  if (((DAT_70ffd2b8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2b8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbb8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfba8);
      *(undefined1 *)((int)puVar10 + 0x15) = 1;
      uVar6 = DAT_7007ee58;
      uVar5 = DAT_7007ee54;
      uVar4 = DAT_7007ee50;
      uVar3 = DAT_7007ee4c;
      *puVar10 = DAT_7007ee48;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined1 *)(puVar10 + 5) = DAT_7007ee5c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714506c0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbb8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfba8);
    if (*(char *)(iVar8 + 0x15) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x93a3c787 >> iVar14) |
                (byte)(0x47abcda5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x47abcda5 >> (uVar15 & 0xff));
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
    DAT_70ffd2b4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2b8);
  }
                    /* WARNING: Could not recover jumptable at 0x7144e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2b4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144eda4
// Entry: 0x7144eda4 | Size: 380 bytes
// =========================================================================

void FUN_7144eda4(undefined4 param_1)

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
  if (((DAT_70ffd2c0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2c0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbd8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbc8);
      *(undefined1 *)((int)puVar10 + 0x15) = 1;
      uVar6 = DAT_7007ee70;
      uVar5 = DAT_7007ee6c;
      uVar4 = DAT_7007ee68;
      uVar3 = DAT_7007ee64;
      *puVar10 = DAT_7007ee60;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      *(undefined1 *)(puVar10 + 5) = DAT_7007ee74;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714506f8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbd8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbc8);
    if (*(char *)(iVar8 + 0x15) != '\0') {
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
        bVar2 = (0x13 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x15) = 0;
    }
    DAT_70ffd2bc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2c0);
  }
                    /* WARNING: Could not recover jumptable at 0x7144edd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2bc)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144f1b8
// Entry: 0x7144f1b8 | Size: 376 bytes
// =========================================================================

void FUN_7144f1b8(undefined4 param_1)

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
  if (((DAT_70ffd2c8 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2c8), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbf8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbe8);
      *(undefined1 *)(puVar9 + 7) = 1;
      uVar4 = DAT_7007ee80;
      uVar3 = DAT_7007ee7c;
      *puVar9 = DAT_7007ee78;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_7007ee90;
      uVar4 = DAT_7007ee8c;
      uVar3 = DAT_7007ee88;
      puVar9[3] = DAT_7007ee84;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713d563c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbf8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfbe8);
    if (*(char *)(iVar7 + 0x1c) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x2549d30d >> iVar13) |
                (byte)(0x65617345 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x65617345 >> (uVar14 & 0xff));
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
    DAT_70ffd2c4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2c8);
  }
                    /* WARNING: Could not recover jumptable at 0x7144f1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2c4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7144f5c8
// Entry: 0x7144f5c8 | Size: 400 bytes
// =========================================================================

void FUN_7144f5c8(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffd2d0 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2d0), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc18,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc08);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_7007eea8;
      uVar5 = DAT_7007eea4;
      uVar4 = DAT_7007eea0;
      uVar3 = DAT_7007ee9c;
      *puVar11 = DAT_7007ee98;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007eec0;
      uVar6 = DAT_7007eebc;
      uVar5 = DAT_7007eeb8;
      uVar4 = DAT_7007eeb4;
      uVar3 = DAT_7007eeb0;
      puVar11[5] = DAT_7007eeac;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71450730,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc18);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc08);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x45a9b135 >> iVar15) |
                (byte)(-0x760ad4c7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x89f52b39 >> (uVar16 & 0xff));
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
    DAT_70ffd2cc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2d0);
  }
                    /* WARNING: Could not recover jumptable at 0x7144f5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2cc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7144f9f0
// Entry: 0x7144f9f0 | Size: 428 bytes
// =========================================================================

void FUN_7144f9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffd2d8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2d8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc38,param_2,param_3);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc28);
      *(undefined1 *)((int)puVar11 + 0x33) = 1;
      uVar7 = DAT_7007eedc;
      uVar6 = DAT_7007eed8;
      uVar5 = DAT_7007eed4;
      uVar4 = DAT_7007eed0;
      uVar3 = DAT_7007eecc;
      *puVar11 = DAT_7007eec8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007eef4;
      uVar6 = DAT_7007eef0;
      uVar5 = DAT_7007eeec;
      uVar4 = DAT_7007eee8;
      uVar3 = DAT_7007eee4;
      puVar11[6] = DAT_7007eee0;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined2 *)(puVar11 + 0xc) = DAT_7007eef8;
      *(undefined1 *)((int)puVar11 + 0x32) = DAT_7007eefa;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71450780,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc38);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc28);
    if (*(char *)(iVar9 + 0x33) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        bVar8 = (byte)(0xd93d3145 >> iVar15) |
                (byte)(-0x1840f2d9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        uVar16 = iVar15 - 0x20;
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xe7bf0d27 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x31 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x33) = 0;
    }
    DAT_70ffd2d4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2d8);
  }
                    /* WARNING: Could not recover jumptable at 0x7144fa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2d4)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7144fe34
// Entry: 0x7144fe34 | Size: 400 bytes
// =========================================================================

void FUN_7144fe34(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70ffd2e0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2e0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc58,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc48);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007ef0c;
      uVar4 = DAT_7007ef08;
      uVar3 = DAT_7007ef04;
      *puVar10 = DAT_7007ef00;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007ef20;
      uVar5 = DAT_7007ef1c;
      uVar4 = DAT_7007ef18;
      uVar3 = DAT_7007ef14;
      puVar10[4] = DAT_7007ef10;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143c9f0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc58);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc48);
    if (*(char *)(iVar8 + 0x24) != '\0') {
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
        bVar2 = (0x22 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x24) = 0;
    }
    DAT_70ffd2dc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2e0);
  }
                    /* WARNING: Could not recover jumptable at 0x7144fe68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2dc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7145025c
// Entry: 0x7145025c | Size: 432 bytes
// =========================================================================

void FUN_7145025c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

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
  if ((DAT_70ffd2e8 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2e8);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc78,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc68);
        *(undefined1 *)(iVar4 + 0x98) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007ef28,0x98);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714507d0,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc78);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfc68);
      if (*(char *)(iVar4 + 0x98) != '\0') {
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
          bVar2 = (0x96 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x98) = 0;
      }
      DAT_70ffd2e4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2e8);
    }
  }
  (*DAT_70ffd2e4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


// =========================================================================
// Function: FUN_71450820
// Entry: 0x71450820 | Size: 412 bytes
// =========================================================================

void FUN_71450820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70ffd2f4 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd2f4);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfcb8,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfca8);
        *(undefined1 *)(iVar4 + 0x4d) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007efc0,0x4d);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71450c98,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfcb8);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfca8);
      if (*(char *)(iVar4 + 0x4d) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x93a3c787 >> iVar9) |
                  (byte)(0x47abcda5 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x47abcda5 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x4b < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x4d) = 0;
      }
      DAT_70ffd2f0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd2f4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71450854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd2f0)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71451504
// Entry: 0x71451504 | Size: 372 bytes
// =========================================================================

void FUN_71451504(void)

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
  if (((DAT_70ffd324 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd324), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfd98);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfd88);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_7007f0e8;
      uVar3 = DAT_7007f0e4;
      *puVar10 = DAT_7007f0e0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_7007f0f8;
      uVar4 = DAT_7007f0f4;
      uVar3 = DAT_7007f0f0;
      puVar10[3] = DAT_7007f0ec;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007f0fe;
      *(undefined2 *)(puVar10 + 7) = DAT_7007f0fc;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71452988,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfd98);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfd88);
    if (*(char *)(iVar7 + 0x1f) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0xd93d3145 >> iVar14) |
                 (byte)(-0x1840f2d9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0xe7bf0d27 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x1d < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x1f) = 0;
    }
    DAT_70ffd320 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd324);
  }
                    /* WARNING: Could not recover jumptable at 0x71451530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd320)();
  return;
}


// =========================================================================
// Function: FUN_71451910
// Entry: 0x71451910 | Size: 356 bytes
// =========================================================================

void FUN_71451910(void)

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
  if (((DAT_70ffd32c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd32c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdb8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfda8);
      *(undefined1 *)(puVar9 + 10) = 1;
      uVar6 = DAT_7007f110;
      uVar5 = DAT_7007f10c;
      uVar4 = DAT_7007f108;
      uVar3 = DAT_7007f104;
      *puVar9 = DAT_7007f100;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_7007f124;
      uVar5 = DAT_7007f120;
      uVar4 = DAT_7007f11c;
      uVar3 = DAT_7007f118;
      puVar9[5] = DAT_7007f114;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7144c6b8,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdb8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfda8);
    if (*(char *)(iVar7 + 0x28) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x19cfe32d >> iVar13) |
                 (byte)(-0x266c1045 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xd993efbb >> (uVar14 & 0xff));
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
    DAT_70ffd328 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd32c);
  }
                    /* WARNING: Could not recover jumptable at 0x7145193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd328)();
  return;
}


// =========================================================================
// Function: FUN_71451d0c
// Entry: 0x71451d0c | Size: 368 bytes
// =========================================================================

void FUN_71451d0c(void)

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
  if (((DAT_70ffd334 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd334), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdd8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdc8);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007f13c;
      uVar6 = DAT_7007f138;
      uVar5 = DAT_7007f134;
      uVar4 = DAT_7007f130;
      uVar3 = DAT_7007f12c;
      *puVar11 = DAT_7007f128;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar8 = DAT_7007f142;
      *(undefined2 *)(puVar11 + 6) = DAT_7007f140;
      *(undefined1 *)((int)puVar11 + 0x1a) = uVar8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714529c8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdd8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdc8);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar17 = (byte)(0xd3c78945 >> iVar15) |
                 (byte)(0x5f694973 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar17 = (byte)(0x5f694973 >> (uVar16 & 0xff));
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
    DAT_70ffd330 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd334);
  }
                    /* WARNING: Could not recover jumptable at 0x71451d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd330)();
  return;
}


// =========================================================================
// Function: FUN_71452114
// Entry: 0x71452114 | Size: 396 bytes
// =========================================================================

void FUN_71452114(undefined4 param_1)

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
  if (((DAT_70ffd33c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd33c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdf8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfde8);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007f154;
      uVar4 = DAT_7007f150;
      uVar3 = DAT_7007f14c;
      *puVar11 = DAT_7007f148;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_7007f168;
      uVar5 = DAT_7007f164;
      uVar4 = DAT_7007f160;
      uVar3 = DAT_7007f15c;
      puVar11[4] = DAT_7007f158;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007f16e;
      *(undefined2 *)(puVar11 + 9) = DAT_7007f16c;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71452a04,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfdf8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfde8);
    if (*(char *)(iVar9 + 0x27) != '\0') {
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
        bVar2 = (0x25 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x27) = 0;
    }
    DAT_70ffd338 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd33c);
  }
                    /* WARNING: Could not recover jumptable at 0x71452140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd338)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71452538
// Entry: 0x71452538 | Size: 388 bytes
// =========================================================================

void FUN_71452538(undefined4 param_1)

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
  if (((DAT_70ffd344 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd344), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe18);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe08);
      *(undefined1 *)((int)puVar10 + 0x25) = 1;
      uVar5 = DAT_7007f17c;
      uVar4 = DAT_7007f178;
      uVar3 = DAT_7007f174;
      *puVar10 = DAT_7007f170;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007f190;
      uVar5 = DAT_7007f18c;
      uVar4 = DAT_7007f188;
      uVar3 = DAT_7007f184;
      puVar10[4] = DAT_7007f180;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined1 *)(puVar10 + 9) = DAT_7007f194;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71452a54,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe18);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe08);
    if (*(char *)(iVar8 + 0x25) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x63671535 >> iVar14) |
                (byte)(-0xaac1a99 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xf553e567 >> (uVar15 & 0xff));
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
    DAT_70ffd340 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd344);
  }
                    /* WARNING: Could not recover jumptable at 0x71452564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd340)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71453ee8
// Entry: 0x71453ee8 | Size: 368 bytes
// =========================================================================

void FUN_71453ee8(void)

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
  if (((DAT_70ffd37c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd37c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe78);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe68);
      *(undefined1 *)((int)puVar10 + 0x2e) = 1;
      uVar6 = DAT_7007f1d8;
      uVar5 = DAT_7007f1d4;
      uVar4 = DAT_7007f1d0;
      uVar3 = DAT_7007f1cc;
      *puVar10 = DAT_7007f1c8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar7 = DAT_7007f1f0;
      uVar6 = DAT_7007f1ec;
      uVar5 = DAT_7007f1e8;
      uVar4 = DAT_7007f1e4;
      uVar3 = DAT_7007f1e0;
      puVar10[5] = DAT_7007f1dc;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      puVar10[10] = uVar7;
      *(undefined2 *)(puVar10 + 0xb) = DAT_7007f1f4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71454d78,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe78);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe68);
    if (*(char *)(iVar8 + 0x2e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x45a9b135 >> iVar14) |
                 (byte)(-0x760ad4c7 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x89f52b39 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar16;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x2c < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x2e) = 0;
    }
    DAT_70ffd378 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd37c);
  }
                    /* WARNING: Could not recover jumptable at 0x71453f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd378)();
  return;
}


// =========================================================================
// Function: FUN_714542f0
// Entry: 0x714542f0 | Size: 400 bytes
// =========================================================================

void FUN_714542f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70ffd384 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd384), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe98,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe88);
      *(undefined1 *)(iVar4 + 0x6b) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f1f8,0x6b);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71454dc8,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe98);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfe88);
    if (*(char *)(iVar4 + 0x6b) != '\0') {
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
        bVar2 = (0x69 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x6b) = 0;
    }
    DAT_70ffd380 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd384);
  }
                    /* WARNING: Could not recover jumptable at 0x71454324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd380)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71454734
// Entry: 0x71454734 | Size: 612 bytes
// =========================================================================

void FUN_71454734(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
                 undefined1 param_13,undefined4 param_14)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = param_7;
  uStack_38 = param_6;
  uStack_3c = param_5;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_7136cdfc(&uStack_48);
  iVar6 = *(int *)(DAT_70b46c18 + 0x14) + 0x30;
  if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
    iVar6 = DAT_70b46c18 + 4;
  }
  FUN_7136d040(&uStack_48,iVar6);
  uVar1 = FUN_71ba0b38(param_8,0x41700000);
  uVar2 = FUN_71ba240c(param_2,uStack_48);
  iVar6 = FUN_71ba2d30(uVar2,uVar1 ^ 0x80000000);
  if ((iVar6 == 0) && (iVar6 = FUN_71ba2d50(uVar2,uVar1), iVar6 == 0)) {
    uVar3 = FUN_71ba240c(param_3,uStack_44);
    iVar6 = FUN_71ba2d30(uVar3,uVar1 ^ 0x80000000);
    if ((iVar6 == 0) &&
       ((iVar6 = FUN_71ba2d50(uVar3,uVar1), iVar6 == 0 && (iVar6 = *DAT_70ffd370, iVar6 < 0x20)))) {
      uVar4 = FUN_71ba240c(param_4,uStack_40);
      uVar3 = FUN_71ba21e8(uVar3,uVar3);
      uVar2 = FUN_71ba21e8(uVar2,uVar2);
      uVar2 = FUN_71ba0b38(uVar2,uVar3);
      uVar3 = FUN_71ba21e8(uVar4,uVar4);
      FUN_71ba0b38(uVar3,uVar2);
      uVar2 = imp_sqrtf();
      iVar5 = FUN_71ba2d50(uVar2,uVar1);
      if (iVar5 == 0) {
        iVar7 = DAT_70ffd374 + iVar6 * 0x30;
        *(undefined1 *)(iVar7 + 0x2d) = param_12;
        *(undefined1 *)(iVar7 + 0x2c) = param_1;
        FUN_7136d040(iVar7,&uStack_30);
        FUN_7136d040(iVar7 + 0xc,&uStack_3c);
        *(undefined1 *)(iVar7 + 0x2e) = param_13;
        *(undefined4 *)(iVar7 + 0x28) = param_14;
        *(undefined4 *)(iVar7 + 0x18) = param_8;
        uVar3 = FUN_71ba21e8(uVar1,0x3f400000);
        iVar5 = FUN_71ba2d50(uVar2,uVar3);
        if (iVar5 != 0) {
          uVar2 = FUN_71ba13e0(uVar2,uVar1);
          uVar2 = FUN_71ba0b38(uVar2,0xbf400000);
          uVar2 = FUN_71ba21e8(uVar2,0xc0800000);
          uVar2 = FUN_71ba0b38(uVar2,0x3f800000);
          param_9 = FUN_71ba21e8(uVar2,param_9);
          param_10 = FUN_71ba21e8(uVar2,param_10);
          param_11 = FUN_71ba21e8(uVar2,param_11);
        }
        *(undefined4 *)(iVar7 + 0x24) = param_11;
        *(undefined4 *)(iVar7 + 0x1c) = param_9;
        *(undefined4 *)(iVar7 + 0x20) = param_10;
        *DAT_70ffd370 = iVar6 + 1;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71455634
// Entry: 0x71455634 | Size: 364 bytes
// =========================================================================

void FUN_71455634(void)

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
  if (((DAT_70ffd3a4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd3a4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfef8);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfee8);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar4 = DAT_7007f290;
      uVar3 = DAT_7007f28c;
      *puVar8 = DAT_7007f288;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007f2a0;
      uVar4 = DAT_7007f29c;
      uVar3 = DAT_7007f298;
      puVar8[3] = DAT_7007f294;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined1 *)(puVar8 + 7) = DAT_7007f2a4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71455ab8,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfef8);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfee8);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xb4d771d >> iVar12) |
                 (byte)(-0x44defc41 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xbb2103bf >> (uVar13 & 0xff));
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
    DAT_70ffd3a0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd3a4);
  }
                    /* WARNING: Could not recover jumptable at 0x71455660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffd3a0)();
  return;
}


// =========================================================================
// Function: FUN_71457948
// Entry: 0x71457948 | Size: 388 bytes
// =========================================================================

void FUN_71457948(undefined4 param_1)

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
  if (((DAT_710002e4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710002e4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bffe8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bffd8);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_7007f304;
      uVar4 = DAT_7007f300;
      uVar3 = DAT_7007f2fc;
      *puVar10 = DAT_7007f2f8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_7007f318;
      uVar5 = DAT_7007f314;
      uVar4 = DAT_7007f310;
      uVar3 = DAT_7007f30c;
      puVar10[4] = DAT_7007f308;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_7007f31c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461308,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bffe8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bffd8);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x4bd1a9a9 >> iVar14) |
                (byte)(0x6f2bc975 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x6f2bc975 >> (uVar15 & 0xff));
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
    DAT_710002e0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710002e4);
  }
                    /* WARNING: Could not recover jumptable at 0x71457974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710002e0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71457d64
// Entry: 0x71457d64 | Size: 796 bytes
// =========================================================================

void FUN_71457d64(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  bool bVar21;
  byte *pbStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  uStack_30 = 0;
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0008);
  if (*pcVar10 == '\0') {
    puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfff8);
    *(undefined1 *)((int)puVar15 + 0x19) = 1;
    uVar8 = DAT_7007f334;
    uVar7 = DAT_7007f330;
    uVar6 = DAT_7007f32c;
    uVar5 = DAT_7007f328;
    uVar4 = DAT_7007f324;
    *puVar15 = DAT_7007f320;
    puVar15[1] = uVar4;
    puVar15[2] = uVar5;
    puVar15[3] = uVar6;
    puVar15[4] = uVar7;
    puVar15[5] = uVar8;
    *(undefined1 *)(puVar15 + 6) = DAT_7007f338;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f99f4,puVar15,&DAT_70b0e000);
    puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0008);
    *puVar20 = 1;
  }
  iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bfff8);
  if (*(char *)(iVar11 + 0x19) != '\0') {
    uVar14 = 0;
    uVar19 = 0;
    do {
      iVar17 = (uVar14 & 7) * 8;
      uVar18 = iVar17 - 0x20;
      bVar9 = (byte)(0xa37d1fd3 >> iVar17) | (byte)(-0x2b00e43 << ((uVar14 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar18) {
        bVar9 = (byte)(0xfd4ff1bd >> (uVar18 & 0xff));
      }
      *(byte *)(iVar11 + uVar14) = *(byte *)(iVar11 + uVar14) ^ bVar9;
      bVar21 = 0xfffffffe < uVar14;
      bVar1 = uVar19 == 0;
      bVar2 = (0x17 < uVar14) <= uVar19;
      uVar14 = uVar14 + 1;
      uVar19 = uVar19 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar11 + 0x19) = 0;
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0028);
  if (*pcVar10 == '\0') {
    puVar16 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0018);
    *puVar16 = 0x1fa1;
    *(undefined1 *)(puVar16 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461358,puVar16,&DAT_70b0e000);
    puVar20 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0028);
    *puVar20 = 1;
  }
  pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0018);
  if (pbVar12[2] != 0) {
    pbVar12[2] = 0;
    *pbVar12 = *pbVar12 ^ 0xd3;
    pbVar12[1] = pbVar12[1] ^ 0x1f;
  }
  iVar11 = FUN_71339d5c(iVar11);
  if (iVar11 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  pbVar12 = (byte *)FUN_7132d218();
  piVar3 = piStack_2c;
  do {
    pbStack_34 = pbVar12;
    piStack_2c = piVar3;
    if (pbVar12 == (byte *)0x0) {
      FUN_7133a194(iVar11);
      *param_1 = uStack_30;
      param_1[1] = piStack_2c;
      param_1[2] = piStack_28;
      return;
    }
    bVar9 = *pbVar12;
    pbVar13 = pbVar12;
    if (bVar9 != 0) {
      do {
        if (bVar9 < 0x21) {
          *pbVar13 = 0;
        }
        else if (bVar9 == 0x2c) {
          *pbVar13 = 0;
        }
        bVar9 = pbVar13[1];
        pbVar13 = pbVar13 + 1;
      } while (bVar9 != 0);
      if (*pbVar12 != 0) {
        if (piVar3 < piStack_28) {
          uVar14 = imp_strlen(pbVar12);
          if (0xfffffff7 < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(piVar3);
          }
          if (uVar14 < 0xb) {
            puVar20 = (undefined1 *)((int)piVar3 + 1);
            *(char *)piVar3 = (char)(uVar14 << 1);
            if (uVar14 != 0) goto LAB_71457f84;
          }
          else {
            puVar20 = (undefined1 *)thunk_MwhHq((uVar14 | 7) + 1);
            *piVar3 = (uVar14 | 7) + 2;
            piVar3[1] = uVar14;
            piVar3[2] = (int)puVar20;
LAB_71457f84:
            imp___aeabi_memmove(puVar20,pbVar12,uVar14);
          }
          puVar20[uVar14] = 0;
          piStack_2c = piVar3 + 3;
        }
        else {
          piStack_2c = (int *)FUN_713a2448(&uStack_30,&pbStack_34);
        }
      }
    }
    pbVar12 = (byte *)FUN_7132d218(iVar11);
    piVar3 = piStack_2c;
  } while( true );
}


// =========================================================================
// Function: FUN_71458e54
// Entry: 0x71458e54 | Size: 52 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71458e54(int param_1,int param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_24;
  
  iVar4 = param_1;
  if (param_1 < 0x10) {
    iVar4 = param_2;
  }
  iStack_24 = _ext___stack_chk_guard;
  if ((0xf < iVar4) || (param_1 = param_1 + param_2 * 0x10, (&DAT_70fffec4)[param_1] != 0))
  goto LAB_71458e94;
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00a8);
  if (*pcVar1 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0098);
    *puVar5 = 0x5a2f2a69;
    *(undefined1 *)((int)puVar5 + 6) = 1;
    *(undefined2 *)(puVar5 + 1) = 0x35c3;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714613f4,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00a8);
    *puVar6 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0098);
  if (pbVar2[6] != 0) {
    pbVar2[6] = 0;
    *pbVar2 = *pbVar2 ^ 0x1b;
    pbVar2[1] = pbVar2[1] ^ 0x4b;
    pbVar2[2] = pbVar2[2] ^ 0x4b;
    pbVar2[3] = pbVar2[3] ^ 0x3b;
    pbVar2[4] = pbVar2[4] ^ 0xb1;
    pbVar2[5] = pbVar2[5] ^ 0x35;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_44);
  }
  if (uVar3 < 0xb) {
    uVar8 = (uint)&uStack_44 | 1;
    uStack_44 = CONCAT31(uStack_44._1_3_,(char)(uVar3 << 1));
    if (uVar3 != 0) goto LAB_71458fac;
  }
  else {
    uVar8 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_44 = (uVar3 | 7) + 2;
    uStack_40 = uVar3;
    uStack_3c = uVar8;
LAB_71458fac:
    imp___aeabi_memmove(uVar8,pbVar2,uVar3);
  }
  *(undefined1 *)(uVar8 + uVar3) = 0;
  iVar4 = FUN_714b362c(&uStack_44);
  if ((uStack_44 & 1) != 0) {
    thunk_qNQrlu(uStack_3c);
  }
  if (iVar4 != 0) {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00c8);
    if (*pcVar1 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00b8);
      *puVar5 = 0x9e153ea3;
      puVar5[1] = 0xd8a97883;
      *(undefined1 *)((int)puVar5 + 10) = 1;
      *(undefined2 *)(puVar5 + 2) = 0x5fb5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146141c,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00c8);
      *puVar6 = 1;
    }
    uVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00b8);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    pbVar2 = (byte *)uVar9;
    if (pbVar2[10] != 0) {
      *pbVar2 = *pbVar2 ^ 0xd1;
      pbVar2[1] = pbVar2[1] ^ 0x5f;
      pbVar2[2] = pbVar2[2] ^ 0x71;
      pbVar2[3] = ~pbVar2[3];
      uVar7 = 0;
      pbVar2[10] = 0;
      pbVar2[4] = pbVar2[4] ^ 0xf1;
      pbVar2[5] = pbVar2[5] ^ 0x5d;
      pbVar2[6] = pbVar2[6] ^ 0x99;
      pbVar2[7] = pbVar2[7] ^ 0xeb;
      pbVar2[8] = pbVar2[8] ^ 0xd1;
      pbVar2[9] = pbVar2[9] ^ 0x5f;
    }
    FUN_714597c4(&uStack_44,uVar7,pbVar2,param_1);
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00e8);
    if (*pcVar1 == '\0') {
      puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00d8);
      *puVar5 = 0xdcad6a03;
      *(undefined1 *)((int)puVar5 + 6) = 1;
      *(undefined2 *)(puVar5 + 1) = 0xad3f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461448,puVar5,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00e8);
      *puVar6 = 1;
    }
    pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00d8);
    if (pbVar2[6] != 0) {
      pbVar2[6] = 0;
      *pbVar2 = *pbVar2 ^ 0x71;
      pbVar2[1] = pbVar2[1] ^ 0xb;
      pbVar2[2] = pbVar2[2] ^ 0xc9;
      pbVar2[3] = pbVar2[3] ^ 0xbd;
      pbVar2[4] = pbVar2[4] ^ 0x4d;
      pbVar2[5] = pbVar2[5] ^ 0xad;
    }
    iVar4 = FUN_714afc58(pbVar2,&uStack_44,1);
    (&DAT_70fffec4)[param_1] = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
      *(undefined1 *)((&DAT_70fffec4)[param_1] + 0x50) = 2;
    }
  }
LAB_71458e94:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714597c4
// Entry: 0x714597c4 | Size: 68 bytes
// =========================================================================

void FUN_714597c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x20,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_7145983c
// Entry: 0x7145983c | Size: 60 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7145983c(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  pbVar1 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00f8);
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0118);
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0138);
  iVar11 = 0;
  do {
    iVar12 = -0x10;
    iVar13 = iVar11;
    do {
      if ((((param_2 + 1 < iVar12 + 0x10) || (iVar11 < param_1 + -1)) || (param_1 + 1 < iVar11)) ||
         (iVar12 + 0x10 < param_2 + -1)) {
        if ((&DAT_70fffec4)[iVar13] != 0) {
          FUN_7143d364();
          (&DAT_70fffec4)[iVar13] = 0;
        }
      }
      else if ((&DAT_70fffec4)[iVar13] == 0) {
        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0108);
        if (*pcVar4 == '\0') {
          puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c00f8);
          *puVar8 = 0xb4555419;
          *(undefined1 *)((int)puVar8 + 6) = 1;
          *(undefined2 *)(puVar8 + 1) = 0x892f;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461470,puVar8,&DAT_70b0e000);
          puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0108);
          *puVar9 = 1;
        }
        if (pbVar1[6] != 0) {
          pbVar1[6] = 0;
          *pbVar1 = *pbVar1 ^ 0x6b;
          pbVar1[1] = pbVar1[1] ^ 0x35;
          pbVar1[2] = pbVar1[2] ^ 0x31;
          pbVar1[3] = pbVar1[3] ^ 0xd5;
          pbVar1[4] = pbVar1[4] ^ 0x5d;
          pbVar1[5] = pbVar1[5] ^ 0x89;
        }
        uVar5 = imp_strlen(pbVar1);
        if (0xfffffff7 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_48);
        }
        if (uVar5 < 0xb) {
          uStack_48 = CONCAT31(uStack_48._1_3_,(char)(uVar5 << 1));
          uVar6 = (uint)&uStack_48 | 1;
          if (uVar5 != 0) goto LAB_71459a1c;
        }
        else {
          uVar6 = thunk_MwhHq((uVar5 | 7) + 1);
          uStack_48 = (uVar5 | 7) + 2;
          uStack_44 = uVar5;
          uStack_40 = uVar6;
LAB_71459a1c:
          imp___aeabi_memmove(uVar6,pbVar1,uVar5);
        }
        *(undefined1 *)(uVar6 + uVar5) = 0;
        iVar7 = FUN_714b362c(&uStack_48);
        if ((uStack_48 & 1) != 0) {
          thunk_qNQrlu(uStack_40);
        }
        if (iVar7 != 0) {
          uVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0128);
          uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
          if (*(char *)uVar15 == '\0') {
            puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0118);
            *(undefined1 *)((int)puVar8 + 10) = 1;
            *puVar8 = 0x4421b683;
            puVar8[1] = 0x40f5c025;
            *(undefined2 *)(puVar8 + 2) = 0xd795;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461498,puVar8,&DAT_70b0e000);
            puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0128);
            uVar10 = 1;
            *puVar9 = 1;
          }
          if (pbVar2[10] != 0) {
            *pbVar2 = *pbVar2 ^ 0xf1;
            uVar10 = 0;
            pbVar2[1] = pbVar2[1] ^ 0xd7;
            pbVar2[2] = pbVar2[2] ^ 0x45;
            pbVar2[3] = pbVar2[3] ^ 0x25;
            pbVar2[10] = 0;
            pbVar2[4] = pbVar2[4] ^ 0x57;
            pbVar2[5] = pbVar2[5] ^ 0xe5;
            pbVar2[6] = pbVar2[6] ^ 0xc5;
            pbVar2[7] = pbVar2[7] ^ 0x73;
            pbVar2[8] = pbVar2[8] ^ 0xf1;
            pbVar2[9] = pbVar2[9] ^ 0xd7;
          }
          FUN_714597c4(&uStack_48,uVar10,pbVar2,iVar13);
          pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0148);
          if (*pcVar4 == '\0') {
            puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0138);
            *puVar8 = 0x3ec59a91;
            *(undefined1 *)((int)puVar8 + 6) = 1;
            *(undefined2 *)(puVar8 + 1) = 0x7dc5;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714614c4,puVar8,&DAT_70b0e000);
            puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0148);
            *puVar9 = 1;
          }
          if (pbVar3[6] != 0) {
            pbVar3[6] = 0;
            *pbVar3 = *pbVar3 ^ 0xe3;
            pbVar3[1] = pbVar3[1] ^ 0xfb;
            pbVar3[2] = pbVar3[2] ^ 0xa1;
            pbVar3[3] = pbVar3[3] ^ 0x5f;
            pbVar3[4] = pbVar3[4] ^ 0xb7;
            pbVar3[5] = pbVar3[5] ^ 0x7d;
          }
          iVar7 = FUN_714afc58(pbVar3,&uStack_48,1);
          if (iVar7 != 0) {
            (&DAT_70fffec4)[iVar13] = iVar7;
            *(undefined1 *)(iVar7 + 0x50) = 2;
            *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
          }
        }
      }
      bVar14 = iVar12 != -1;
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 0x10;
    } while (bVar14);
    iVar11 = iVar11 + 1;
    if (iVar11 == 0x10) {
      if (_ext___stack_chk_guard == iStack_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      imp___stack_chk_fail();
    }
  } while( true );
}


// =========================================================================
// Function: FUN_7145a3f4
// Entry: 0x7145a3f4 | Size: 184 bytes
// =========================================================================

void FUN_7145a3f4(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_2 | param_1) < 0x10) {
    uVar2 = FUN_71ba1b94();
    uVar2 = FUN_71ba21e8(uVar2,0x43d2f000);
    uVar2 = FUN_71ba0b38(uVar2,0xc552f000);
    uVar3 = FUN_71ba0b38(uVar2,0xc3d2f000);
    *DAT_710002cc = uVar3;
    uVar3 = FUN_71ba1b94(0xf - param_2);
    uVar3 = FUN_71ba21e8(uVar3,0x43d2f000);
    uVar3 = FUN_71ba0b38(uVar3,0xc552f000);
    uVar4 = FUN_71ba0b38(uVar3,0xc3d2f000);
    puVar1 = DAT_710002cc;
    DAT_710002cc[3] = uVar4;
    uVar2 = FUN_71ba0b38(uVar2,0x4452f000);
    puVar1[2] = uVar2;
    uVar2 = FUN_71ba0b38(uVar3,0x4452f000);
    puVar1[1] = uVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7145a61c
// Entry: 0x7145a61c | Size: 144 bytes
// =========================================================================

void FUN_7145a61c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_71ba1b94();
  uVar1 = FUN_71ba21e8(uVar1,0x43d2f000);
  uVar1 = FUN_71ba0b38(uVar1,0xc552f000);
  param_3[4] = uVar1;
  *param_3 = uVar1;
  uVar2 = FUN_71ba1b94(0xf - param_2);
  uVar2 = FUN_71ba21e8(uVar2,0x43d2f000);
  uVar2 = FUN_71ba0b38(uVar2,0xc552f000);
  param_3[7] = uVar2;
  uVar1 = FUN_71ba0b38(uVar1,0x43d2f000);
  param_3[2] = uVar1;
  param_3[5] = uVar2;
  param_3[6] = uVar1;
  uVar1 = FUN_71ba0b38(uVar2,0x43d2f000);
  param_3[3] = uVar1;
  param_3[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7145a7a4
// Entry: 0x7145a7a4 | Size: 140 bytes
// =========================================================================

void FUN_7145a7a4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba1b94(param_3);
  uVar1 = FUN_71ba21e8(uVar1,0x43d2f000);
  uVar1 = FUN_71ba0b38(uVar1,0xc552f000);
  uVar1 = FUN_71ba240c(*param_2,uVar1);
  uVar1 = FUN_71ba13e0(uVar1,0x43d2f000);
  *param_1 = uVar1;
  uVar1 = FUN_71ba1b94(0x10 - param_4);
  uVar1 = FUN_71ba21e8(uVar1,0x43d2f000);
  uVar1 = FUN_71ba0b38(uVar1,0xc552f000);
  uVar1 = FUN_71ba240c(param_2[1],uVar1);
  uVar1 = FUN_71ba21e8(uVar1,0xbb1b5837);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7145a960
// Entry: 0x7145a960 | Size: 124 bytes
// =========================================================================

void FUN_7145a960(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = param_1[1];
  uVar1 = FUN_71ba0b38(*param_1,0x4552f000);
  FUN_71ba13e0(uVar1,0x43d2f000);
  uVar2 = FUN_71ba17bc();
  uVar1 = FUN_71ba0b38(uVar6,0x4552f000);
  FUN_71ba13e0(uVar1,0x43d2f000);
  imp_ceilf();
  iVar3 = FUN_71ba17bc();
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  uVar4 = 0xfU - iVar3 & ~((int)(0xfU - iVar3) >> 0x1f);
  if (0xe < uVar2) {
    uVar2 = 0xf;
  }
  uVar5 = 0xf;
  if (uVar4 < 0xf) {
    uVar5 = uVar4;
  }
  FUN_7145983c(uVar2,uVar5);
  return;
}


// =========================================================================
// Function: FUN_7145aad4
// Entry: 0x7145aad4 | Size: 356 bytes
// =========================================================================

void FUN_7145aad4(void)

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
  if (((DAT_710002f0 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710002f0), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0168);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0158);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_7007f348;
      uVar3 = DAT_7007f344;
      *puVar8 = DAT_7007f340;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_7007f358;
      uVar4 = DAT_7007f354;
      uVar3 = DAT_7007f350;
      puVar8[3] = DAT_7007f34c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714614ec,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0168);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0158);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x9d6d63cd >> iVar12) |
                 (byte)(0x497df58f << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x497df58f >> (uVar13 & 0xff));
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
    DAT_710002ec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710002f0);
  }
                    /* WARNING: Could not recover jumptable at 0x7145ab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710002ec)();
  return;
}


// =========================================================================
// Function: FUN_7145aed0
// Entry: 0x7145aed0 | Size: 424 bytes
// =========================================================================

void FUN_7145aed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_710002f8 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710002f8);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0188,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0178);
        *(undefined1 *)(iVar3 + 0x7b) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007f360,0x7b);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461528,iVar3,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0188);
        *puVar6 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0178);
      if (*(char *)(iVar3 + 0x7b) != '\0') {
        uVar5 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar7 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar10 = (byte)(0x6f755dd1 >> iVar8) |
                   (byte)(-0x24ceb84b << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar10 = (byte)(0xdb3147b5 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar7) = *(byte *)(iVar3 + uVar7) ^ bVar10;
          bVar1 = uVar5 == 0;
          bVar2 = (0x79 < uVar7) <= uVar5;
          uVar5 = uVar5 + (0xfffffffe < uVar7);
          uVar7 = uVar7 + 1;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x7b) = 0;
      }
      DAT_710002f4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710002f8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7145af1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710002f4)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7145b32c
// Entry: 0x7145b32c | Size: 408 bytes
// =========================================================================

void FUN_7145b32c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_71000300 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000300), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01a8,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0198);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_7007f3ec;
      uVar4 = DAT_7007f3e8;
      uVar3 = DAT_7007f3e4;
      *puVar10 = DAT_7007f3e0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007f3fc;
      uVar4 = DAT_7007f3f8;
      uVar3 = DAT_7007f3f4;
      puVar10[4] = DAT_7007f3f0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007f410;
      uVar5 = DAT_7007f40c;
      uVar4 = DAT_7007f408;
      uVar3 = DAT_7007f404;
      puVar10[8] = DAT_7007f400;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461578,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01a8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0198);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa11fd99f >> iVar14) |
                (byte)(0x5b23df97 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x5b23df97 >> (uVar15 & 0xff));
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
    DAT_710002fc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000300);
  }
                    /* WARNING: Could not recover jumptable at 0x7145b360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710002fc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7145b75c
// Entry: 0x7145b75c | Size: 392 bytes
// =========================================================================

void FUN_7145b75c(undefined4 param_1)

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
  if (((DAT_71000308 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000308), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01c8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01b8);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_7007f420;
      uVar3 = DAT_7007f41c;
      *puVar10 = DAT_7007f418;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_7007f430;
      uVar4 = DAT_7007f42c;
      uVar3 = DAT_7007f428;
      puVar10[3] = DAT_7007f424;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007f436;
      *(undefined2 *)(puVar10 + 7) = DAT_7007f434;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714615c8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01c8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01b8);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x4d37c5d1 >> iVar14) |
                (byte)(-0x3ec69cff << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xc1396301 >> (uVar15 & 0xff));
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
    DAT_71000304 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000308);
  }
                    /* WARNING: Could not recover jumptable at 0x7145b788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71000304)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7145bb7c
// Entry: 0x7145bb7c | Size: 380 bytes
// =========================================================================

void FUN_7145bb7c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_71000310 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000310), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01e8,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01d8);
      *(undefined1 *)(iVar4 + 0x56) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f438,0x56);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461608,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01e8);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01d8);
    if (*(char *)(iVar4 + 0x56) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x2f5715f9 >> iVar9) | (byte)(0x29814937 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x29814937 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x54 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x56) = 0;
    }
    DAT_7100030c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000310);
  }
                    /* WARNING: Could not recover jumptable at 0x7145bba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7100030c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7145bfac
// Entry: 0x7145bfac | Size: 380 bytes
// =========================================================================

void FUN_7145bfac(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_71000318 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000318), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0208,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01f8);
      *(undefined1 *)(iVar4 + 0x53) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f490,0x53);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461658,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0208);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c01f8);
    if (*(char *)(iVar4 + 0x53) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x9ba1215d >> iVar9) |
                (byte)(-0x7a66fcab << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x85990355 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x51 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x53) = 0;
    }
    DAT_71000314 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000318);
  }
                    /* WARNING: Could not recover jumptable at 0x7145bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71000314)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7145c3dc
// Entry: 0x7145c3dc | Size: 388 bytes
// =========================================================================

void FUN_7145c3dc(undefined4 param_1)

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
  if (((DAT_71000320 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000320), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0228);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0218);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_7007f4f8;
      uVar5 = DAT_7007f4f4;
      uVar4 = DAT_7007f4f0;
      uVar3 = DAT_7007f4ec;
      *puVar10 = DAT_7007f4e8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007f50c;
      uVar5 = DAT_7007f508;
      uVar4 = DAT_7007f504;
      uVar3 = DAT_7007f500;
      puVar10[5] = DAT_7007f4fc;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_7007f510;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71433274,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0228);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0218);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x47db73c7 >> iVar14) |
                (byte)(0x43573ddf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x43573ddf >> (uVar15 & 0xff));
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
    DAT_7100031c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000320);
  }
                    /* WARNING: Could not recover jumptable at 0x7145c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7100031c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7145c7f8
// Entry: 0x7145c7f8 | Size: 388 bytes
// =========================================================================

void FUN_7145c7f8(undefined4 param_1)

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
  if (((DAT_71000328 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000328), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0248);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0238);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_7007f528;
      uVar5 = DAT_7007f524;
      uVar4 = DAT_7007f520;
      uVar3 = DAT_7007f51c;
      *puVar11 = DAT_7007f518;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007f540;
      uVar6 = DAT_7007f53c;
      uVar5 = DAT_7007f538;
      uVar4 = DAT_7007f534;
      uVar3 = DAT_7007f530;
      puVar11[5] = DAT_7007f52c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_7007f544;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714616a8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0248);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0238);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x19dfe721 >> iVar15) |
                (byte)(0x7bfd0539 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x7bfd0539 >> (uVar16 & 0xff));
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
    DAT_71000324 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000328);
  }
                    /* WARNING: Could not recover jumptable at 0x7145c824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71000324)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7145cc14
// Entry: 0x7145cc14 | Size: 400 bytes
// =========================================================================

void FUN_7145cc14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_71000330 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000330), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0268,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0258);
      *(undefined1 *)(iVar4 + 0x4f) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f548,0x4f);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714616f8,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0268);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0258);
    if (*(char *)(iVar4 + 0x4f) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x3dba913 >> iVar9) | (byte)(0x752f0169 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x752f0169 >> (uVar10 & 0xff));
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
    DAT_7100032c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000330);
  }
                    /* WARNING: Could not recover jumptable at 0x7145cc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7100032c)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7145d058
// Entry: 0x7145d058 | Size: 360 bytes
// =========================================================================

void FUN_7145d058(void)

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
  if (((DAT_71000338 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000338), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0288);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0278);
      *(undefined1 *)((int)puVar10 + 0x1a) = 1;
      uVar7 = DAT_7007f5ac;
      uVar6 = DAT_7007f5a8;
      uVar5 = DAT_7007f5a4;
      uVar4 = DAT_7007f5a0;
      uVar3 = DAT_7007f59c;
      *puVar10 = DAT_7007f598;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined2 *)(puVar10 + 6) = DAT_7007f5b0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461748,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0288);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0278);
    if (*(char *)(iVar8 + 0x1a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xc1734b63 >> iVar14) |
                 (byte)(0x35c1a781 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x35c1a781 >> (uVar15 & 0xff));
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
    DAT_71000334 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000338);
  }
                    /* WARNING: Could not recover jumptable at 0x7145d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71000334)();
  return;
}


// =========================================================================
// Function: FUN_7145d458
// Entry: 0x7145d458 | Size: 380 bytes
// =========================================================================

void FUN_7145d458(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_71000340 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000340), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c02a8,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0298);
      *(undefined1 *)(iVar4 + 0x48) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f5b8,0x48);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461784,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c02a8);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0298);
    if (*(char *)(iVar4 + 0x48) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x1ddcb53 >> iVar9) | (byte)(0x1b4bd31f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x1b4bd31f >> (uVar10 & 0xff));
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
    DAT_7100033c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000340);
  }
                    /* WARNING: Could not recover jumptable at 0x7145d484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7100033c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7145d888
// Entry: 0x7145d888 | Size: 388 bytes
// =========================================================================

void FUN_7145d888(undefined4 param_1)

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
  if (((DAT_71000348 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000348), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c02c8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c02b8);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_7007f610;
      uVar5 = DAT_7007f60c;
      uVar4 = DAT_7007f608;
      uVar3 = DAT_7007f604;
      *puVar11 = DAT_7007f600;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007f628;
      uVar6 = DAT_7007f624;
      uVar5 = DAT_7007f620;
      uVar4 = DAT_7007f61c;
      uVar3 = DAT_7007f618;
      puVar11[5] = DAT_7007f614;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_7007f62c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714617d4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c02c8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c02b8);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x69abdfd1 >> iVar15) |
                (byte)(-0xa0eecaf << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xf5f11351 >> (uVar16 & 0xff));
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
    DAT_71000344 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000348);
  }
                    /* WARNING: Could not recover jumptable at 0x7145d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71000344)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7145e0b4
// Entry: 0x7145e0b4 | Size: 1736 bytes
// =========================================================================

void FUN_7145e0b4(uint param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined4 auStack_108 [16];
  undefined4 auStack_c8 [16];
  undefined4 auStack_88 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 < 0x10) {
    puVar17 = (undefined4 *)0x0;
    if (0xf < param_1) {
      bVar2 = true;
      goto LAB_7145e128;
    }
    bVar2 = false;
    if (*DAT_710ead48 == '\0') {
      puVar17 = *(undefined4 **)((int)&DAT_70fffec4 + (param_2 << 6 | param_1 << 2));
      if (puVar17 == (undefined4 *)0x0) {
        return;
      }
      goto LAB_7145e128;
    }
  }
  else {
    bVar2 = true;
  }
  puVar17 = (undefined4 *)0x0;
LAB_7145e128:
  uVar4 = FUN_71ba1b94();
  uVar4 = FUN_71ba21e8(uVar4,0x43d2f000);
  uVar4 = FUN_71ba0b38(uVar4,0xc552f000);
  uVar5 = FUN_71ba1b94(0xf - param_2);
  uVar5 = FUN_71ba21e8(uVar5,0x43d2f000);
  uVar5 = FUN_71ba0b38(uVar5,0xc552f000);
  uVar24 = *DAT_710002c8;
  uVar18 = DAT_710002c8[1];
  uVar6 = FUN_71ba240c();
  uVar7 = FUN_71ba0b38(uVar4,0x43d2f000);
  uVar7 = FUN_71ba240c(uVar7,uVar24);
  uVar8 = FUN_71ba13e0(0x3f800000,*DAT_710002d0);
  uVar6 = FUN_71ba21e8(uVar8,uVar6);
  uVar7 = FUN_71ba21e8(uVar8,uVar7);
  uVar26 = *DAT_710002d4;
  uVar9 = FUN_71ba21e8(uVar26,uVar6);
  uVar22 = *DAT_710002d8;
  uVar10 = FUN_71ba21e8(uVar7,uVar22 ^ 0x80000000);
  uStack_3c = FUN_71ba0b38(uVar9,uVar10);
  uVar6 = FUN_71ba21e8(uVar6,uVar22);
  uVar7 = FUN_71ba21e8(uVar26,uVar7);
  uStack_40 = FUN_71ba0b38(uVar7,uVar6);
  uVar24 = FUN_71ba240c(uVar4,uVar24);
  uVar24 = FUN_71ba21e8(uVar8,uVar24);
  uVar11 = FUN_71ba21e8(uVar24,uVar22 ^ 0x80000000);
  uStack_44 = FUN_71ba0b38(uVar9,uVar11);
  uVar5 = FUN_71ba0b38(uVar5,0x43d2f000);
  uVar5 = FUN_71ba240c(uVar5,uVar18);
  uVar5 = FUN_71ba21e8(uVar8,uVar5);
  uVar8 = FUN_71ba21e8(uVar26,uVar5);
  uStack_2c = FUN_71ba0b38(uVar8,uVar11);
  uVar9 = FUN_71ba21e8(uVar26,uVar24);
  uVar5 = FUN_71ba21e8(uVar5,uVar22);
  uStack_30 = FUN_71ba0b38(uVar9,uVar5);
  uStack_34 = FUN_71ba0b38(uVar8,uVar10);
  uStack_38 = FUN_71ba0b38(uVar7,uVar5);
  uStack_48 = FUN_71ba0b38(uVar9,uVar6);
  puVar27 = auStack_88;
  imp___aeabi_memclr8(puVar27,0x40);
  iVar12 = FUN_7145d458(puVar27,&uStack_48);
  if (iVar12 != 0) {
    uVar5 = FUN_71ba1b94(0x10 - param_2);
    uVar5 = FUN_71ba21e8(uVar5,0x43d2f000);
    uVar5 = FUN_71ba0b38(uVar5,0xc552f000);
    iVar3 = DAT_70c38f4c;
    if (0 < iVar12) {
      puVar23 = auStack_c8;
      puVar28 = auStack_108;
      cVar1 = *(char *)(DAT_70c38ed8 + 0x6c);
      puVar19 = (undefined4 *)(DAT_70c38ed8 + 0x58);
      uVar6 = *DAT_710002c8;
      uVar9 = DAT_710002c8[1];
      uVar7 = *DAT_710002d0;
      uVar22 = *DAT_710002d8;
      uVar8 = *DAT_710002d4;
      puVar13 = (undefined4 *)(DAT_70c38ed8 + 0x60);
      puVar14 = (undefined4 *)(DAT_70c38ed8 + 0x5c);
      iVar20 = iVar12;
      do {
        uVar11 = puVar27[1];
        uVar10 = FUN_71ba21e8(uVar11,uVar22 ^ 0x80000000);
        uVar18 = *puVar27;
        uVar24 = FUN_71ba21e8(uVar8,uVar18);
        uVar10 = FUN_71ba0b38(uVar24,uVar10);
        uVar10 = FUN_71ba21e8(uVar7,uVar10);
        uVar10 = FUN_71ba0b38(uVar10,uVar6);
        uVar10 = FUN_71ba240c(uVar10,uVar4);
        uVar10 = FUN_71ba13e0(uVar10,0x43d2f000);
        *puVar28 = uVar10;
        uVar10 = FUN_71ba21e8(uVar8,uVar11);
        uVar24 = FUN_71ba21e8(uVar22,uVar18);
        uVar10 = FUN_71ba0b38(uVar24,uVar10);
        uVar10 = FUN_71ba21e8(uVar7,uVar10);
        uVar10 = FUN_71ba0b38(uVar10,uVar9);
        uVar10 = FUN_71ba240c(uVar10,uVar5);
        uVar10 = FUN_71ba21e8(uVar10,0xbb1b5837);
        puVar28[1] = uVar10;
        if (cVar1 == '\0') {
          iVar15 = *(int *)(iVar3 + 0x284);
          if (iVar15 != 0) {
            uVar26 = *(undefined4 *)(iVar15 + 0x20);
            uVar25 = *(undefined4 *)(iVar15 + 0x28);
            uVar21 = *(undefined4 *)(iVar15 + 0x24);
            uVar10 = *(undefined4 *)(iVar15 + 0x2c);
            uVar16 = FUN_71ba240c(uVar25,uVar26);
            uVar24 = FUN_71ba21e8(uVar16 & 0x7fffffff,0x3f000000);
            uVar26 = FUN_71ba0b38(uVar25,uVar26);
            uVar26 = FUN_71ba21e8(uVar26,0x3f000000);
            uVar24 = FUN_71ba21e8(uVar18,uVar24);
            uVar24 = FUN_71ba0b38(uVar24,uVar26);
            *puVar23 = uVar24;
            uVar16 = FUN_71ba240c(uVar21,uVar10);
            uVar24 = FUN_71ba21e8(uVar16 & 0x7fffffff,0x3f000000);
            uVar10 = FUN_71ba0b38(uVar21,uVar10);
            uVar10 = FUN_71ba21e8(uVar10,0x3f000000);
            uVar24 = FUN_71ba21e8(uVar11,uVar24);
            goto LAB_7145e490;
          }
        }
        else {
          uVar24 = *puVar19;
          uVar10 = FUN_71ba21e8(uVar18,uVar24);
          uVar10 = FUN_71ba0b38(uVar10,*puVar14);
          *puVar23 = uVar10;
          uVar24 = FUN_71ba21e8(uVar11,uVar24);
          uVar10 = *puVar13;
LAB_7145e490:
          uVar10 = FUN_71ba240c(uVar10,uVar24);
          puVar23[1] = uVar10;
        }
        puVar23 = puVar23 + 2;
        puVar28 = puVar28 + 2;
        iVar20 = iVar20 + -1;
        puVar27 = puVar27 + 2;
      } while (iVar20 != 0);
    }
    FUN_71358f74(auStack_10c);
    if (bVar2) {
      FUN_71413b60(1,0);
      FUN_71358efc(auStack_110,0x20,0x76,0xa0,param_3);
      FUN_71359020(auStack_10c,auStack_110);
    }
    else {
      if (*DAT_710ead48 == '\0') {
        FUN_71413b60(1,*puVar17);
        uVar4 = 0xff;
        uVar5 = 0xff;
        uVar6 = 0xff;
      }
      else {
        FUN_71413b60(1,0);
        uVar4 = 0xcc;
        uVar5 = 0xcc;
        uVar6 = 0xcc;
      }
      FUN_71358efc(auStack_110,uVar4,uVar5,uVar6,param_3);
      FUN_71359020(auStack_10c,auStack_110);
    }
    FUN_7135b3b4(iVar12,auStack_c8,auStack_108,auStack_10c);
    if (2 < iVar12) {
      FUN_714143dc(3,DAT_70b3ef24,8,&DAT_700bff08,iVar12 * 3 + -6);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7145f1e0
// Entry: 0x7145f1e0 | Size: 272 bytes
// =========================================================================

void FUN_7145f1e0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [4];
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (((param_2 | param_1) < 0x10) &&
     ((undefined4 *)(&DAT_70fffec4)[param_1 + param_2 * 0x10] != (undefined4 *)0x0)) {
    FUN_71413b60(1,*(undefined4 *)(&DAT_70fffec4)[param_1 + param_2 * 0x10]);
    FUN_71413b60(9,2);
    uStack_24 = param_6;
    uStack_2c = param_6;
    uStack_30 = param_5;
    uStack_38 = param_5;
    uStack_60 = DAT_70060b98;
    uStack_5c = DAT_70060b9c;
    uStack_58 = DAT_70060ba0;
    uStack_54 = DAT_70060ba4;
    uStack_50 = DAT_70060ba8;
    uStack_4c = DAT_70060bac;
    uStack_48 = DAT_70060bb0;
    uStack_44 = DAT_70060bb4;
    uStack_40 = param_3;
    uStack_3c = param_4;
    uStack_34 = param_4;
    uStack_28 = param_3;
    FUN_71ba21e8(param_7,0x437f0000);
    uVar1 = FUN_71ba17bc();
    FUN_71358efc(auStack_64,0xff,0xff,0xff,uVar1);
    FUN_7135b3b4(4,&uStack_40,&uStack_60,auStack_64);
    FUN_714143dc(3,DAT_70b3ef24,4,&DAT_700bff08,6);
  }
  return;
}


// =========================================================================
// Function: FUN_7145f44c
// Entry: 0x7145f44c | Size: 876 bytes
// =========================================================================

void FUN_7145f44c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_7145d058();
  uVar8 = *DAT_710002c8;
  uVar2 = FUN_71ba0b38(DAT_710002c8[1],0x4552f000);
  uVar2 = FUN_71ba13e0(uVar2,0x43d2f000);
  uVar2 = FUN_71ba240c(0x41700000,uVar2);
  FUN_71ba0b38(uVar2,0x3f000000);
  iVar3 = FUN_71ba17bc();
  uVar2 = FUN_71ba0b38(uVar8,0x4552f000);
  FUN_71ba13e0(uVar2,0x43d2f000);
  iVar4 = FUN_71ba17bc();
  FUN_7145a3f4(iVar4,iVar3);
  FUN_7145983c(iVar4,iVar3);
  FUN_71413b60(0xe,0);
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_71413b60(9,2);
  FUN_71413b60(7,1);
  FUN_71413b60(6,1);
  FUN_71413b60(8,0);
  FUN_71413b60(0xc,0);
  FUN_71413b60(2,3);
  FUN_71413b60(5,0);
  FUN_71413b60(0xc,1);
  if (*(int *)(DAT_70c38f4c + 0x284) != 0) {
    uVar1 = 0xff;
    iVar7 = iVar4 + -1;
    iVar6 = iVar3 + -1;
    bVar10 = *(int *)(DAT_70c38ed8 + 0x24) == 0;
    iVar5 = DAT_70c38ed8;
    if (bVar10) {
      iVar5 = *(int *)(DAT_70c38ed8 + 0x2c);
    }
    if (bVar10 && iVar5 == 0) {
      uVar1 = *(undefined1 *)(*(int *)(DAT_70c38f4c + 0x284) + 0x4c);
    }
    FUN_7145e0b4(iVar7,iVar6,uVar1);
    FUN_7145e0b4(iVar4,iVar6,uVar1);
    iVar5 = iVar4 + 1;
    FUN_7145e0b4(iVar5,iVar6,uVar1);
    FUN_7145e0b4(iVar7,iVar3,uVar1);
    FUN_7145e0b4(iVar4,iVar3,uVar1);
    FUN_7145e0b4(iVar5,iVar3,uVar1);
    iVar3 = iVar3 + 1;
    FUN_7145e0b4(iVar7,iVar3,uVar1);
    FUN_7145e0b4(iVar4,iVar3,uVar1);
    FUN_7145e0b4(iVar5,iVar3,uVar1);
    FUN_7145d888(0);
    iVar3 = FUN_713c2bdc(0xffffffff,0);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x5a4) == 4)) && (*(short *)(iVar3 + 0x26) != 0x21b)) {
      FUN_713c3438(&uStack_30,0);
      uVar8 = *DAT_710002d4;
      uVar9 = *DAT_710002d8;
      *DAT_710002d8 = 0xb3bbbd4d;
      *DAT_710002d4 = 0xbf800000;
      uVar2 = imp_atan2f(*(uint *)(*(int *)(iVar3 + 0x14) + 0x24) ^ 0x80000000,
                         *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x28));
      uStack_38 = FUN_71ba0b38(uStack_30,0x447a0000);
      uStack_3c = FUN_71ba0b38(uStack_2c,0x44fa0000);
      uVar2 = FUN_71ba21e8(uVar2,0xc2652ebe);
      uVar2 = FUN_71ba0b38(uVar2,uVar2);
      uStack_34 = FUN_71ba0b38(uVar2,uStack_2c);
      uStack_40 = FUN_71ba0b38(uStack_30,0xc47a0000);
      uVar2 = FUN_71ba1b94(uVar1);
      FUN_71ba21e8(uVar2,0x3f4ccccd);
      uVar1 = FUN_71ba17bc();
      FUN_71358efc(auStack_44,0x14,0xaf,0x14,uVar1);
      FUN_7145cc14(&uStack_40,auStack_44,0);
      *DAT_710002d8 = uVar9;
      *DAT_710002d4 = uVar8;
    }
  }
  FUN_71413b60(6,0);
  return;
}


// =========================================================================
// Function: FUN_7145fdf4
// Entry: 0x7145fdf4 | Size: 1980 bytes
// =========================================================================

void FUN_7145fdf4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uStack_4c;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = DAT_70c38ed8;
  *(undefined1 *)(DAT_70c38ed8 + 0x6c) = 1;
  FUN_7145aad4();
  iVar15 = 0;
  *DAT_710002d0 = 0x457a0000;
  do {
    FUN_71458e54(iVar15,0);
    FUN_71458e54(iVar15,1);
    FUN_71458e54(iVar15,2);
    FUN_71458e54(iVar15,3);
    FUN_71458e54(iVar15,4);
    FUN_71458e54(iVar15,5);
    FUN_71458e54(iVar15,6);
    FUN_71458e54(iVar15,7);
    FUN_71458e54(iVar15,8);
    FUN_71458e54(iVar15,9);
    FUN_71458e54(iVar15,10);
    FUN_71458e54(iVar15,0xb);
    FUN_71458e54(iVar15,0xc);
    FUN_71458e54(iVar15,0xd);
    FUN_71458e54(iVar15,0xe);
    FUN_71458e54(iVar15,0xf);
    iVar15 = iVar15 + 1;
  } while (iVar15 != 0x10);
  uVar19 = *(undefined4 *)(iVar1 + 0x58);
  uVar2 = FUN_71ba21e8(uVar19,0x3e000000);
  iVar16 = *(int *)(DAT_70ffc974 + 4);
  uVar17 = *(undefined4 *)(DAT_70ffc974 + 8);
  iVar15 = *(int *)(DAT_70c38f4c + 600);
  if (iVar15 == 0) {
    uVar17 = FUN_71ba1b94(uVar17);
    uVar3 = FUN_71ba1b94(iVar16);
    uStack_4c = uVar19;
  }
  else {
    *(undefined4 *)(iVar15 + 0x2c) = 0;
    *(undefined4 *)(iVar15 + 0x20) = 0;
    uVar3 = FUN_71ba1b94(iVar16);
    *(undefined4 *)(iVar15 + 0x28) = uVar3;
    uVar17 = FUN_71ba1b94(uVar17);
    *(undefined4 *)(iVar15 + 0x24) = uVar17;
    uStack_4c = *(undefined4 *)(iVar1 + 0x58);
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x5c);
  uVar14 = *(undefined4 *)(iVar1 + 0x60);
  FUN_71358f74(auStack_38);
  uStack_34 = 0;
  uStack_28 = 0;
  uStack_30 = uVar17;
  uStack_2c = uVar3;
  FUN_71358efc(auStack_3c,0,0,0,0xff);
  FUN_71359020(auStack_38,auStack_3c);
  FUN_7135af7c(&uStack_34,auStack_38);
  FUN_71358efc(auStack_3c,0x20,0x76,0xa0,0xff);
  uVar14 = FUN_71ba240c(uVar14,uStack_4c);
  uVar14 = FUN_71ba13e0(uVar14,0x43e00000);
  uVar14 = FUN_71ba21e8(uVar14,uVar17);
  uVar2 = FUN_71ba13e0(uVar2,0x43e00000);
  uVar2 = FUN_71ba21e8(uVar2,uVar17);
  uVar5 = FUN_71ba21e8(uVar2,0x42000000);
  uStack_28 = FUN_71ba0b38(uVar5,uVar14);
  uStack_30 = uVar14;
  uVar4 = FUN_71ba240c(uVar4,uStack_4c);
  uVar4 = FUN_71ba13e0(uVar4,0x43e00000);
  uVar4 = FUN_71ba21e8(uVar4,uVar17);
  uStack_34 = uVar4;
  uStack_2c = FUN_71ba0b38(uVar5,uVar4);
  FUN_7135af7c(&uStack_34,auStack_3c);
  uVar19 = FUN_71ba21e8(uVar19,0x3e200000);
  uVar19 = FUN_71ba13e0(uVar19,0x43e00000);
  uVar19 = FUN_71ba21e8(uVar19,uVar17);
  uVar4 = FUN_71ba0b38(uVar19,uVar4);
  uVar19 = FUN_71ba0b38(uVar19,uVar14);
  uVar6 = FUN_71ba21e8(uVar2,0x3f580000);
  uVar2 = FUN_71ba0b38(uVar6,uVar3);
  uVar14 = FUN_71ba0b38(uVar6,uVar17);
  iVar15 = 0;
  do {
    uVar5 = FUN_71ba1b94(iVar15);
    uVar5 = FUN_71ba21e8(uVar6,uVar5);
    uVar5 = FUN_71ba0b38(uVar5,uVar4);
    iVar7 = FUN_71ba2d30(uVar5,uVar6 ^ 0x80000000);
    iVar8 = iVar15 + 1;
    uVar9 = FUN_71ba1b94();
    uVar9 = FUN_71ba21e8(uVar6,uVar9);
    uVar9 = FUN_71ba0b38(uVar9,uVar4);
    iVar10 = FUN_71ba2d50(uVar9,uVar2);
    iVar18 = 0;
    do {
      if (iVar7 == 0) {
        uVar11 = FUN_71ba1b94(iVar18);
        uVar11 = FUN_71ba21e8(uVar6,uVar11);
        uVar11 = FUN_71ba0b38(uVar11,uVar19);
        iVar12 = FUN_71ba2d30(uVar11,uVar6 ^ 0x80000000);
        if (iVar12 == 0 && iVar10 == 0) {
          uVar13 = FUN_71ba1b94(iVar18 + 1);
          uVar13 = FUN_71ba21e8(uVar6,uVar13);
          uVar13 = FUN_71ba0b38(uVar13,uVar19);
          iVar12 = FUN_71ba2d50(uVar13,uVar14);
          if (iVar12 == 0) {
            FUN_7145f1e0(iVar15,iVar18,uVar5,uVar11,uVar9,uVar13,0x3f800000);
          }
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0x10);
    iVar15 = iVar8;
  } while (iVar8 != 0x10);
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_7145d888(1);
  if (*DAT_710ead4c == '\0' && *DAT_710ead48 == '\0') {
    imp_fmodf(*DAT_710002dc,0x3f800000);
    FUN_71457948();
  }
  FUN_71ba1b94(iVar16 + -10);
  FUN_71449cf0();
  FUN_7144bdf4(0x41200000);
  FUN_714490bc();
  iVar15 = FUN_7133c4d4();
  if ((iVar15 == 1) && (*(char *)(iVar1 + 0x6d) != '\0')) {
    uVar2 = FUN_71ba21e8(uVar17,0x3f000000);
    uVar17 = FUN_71ba0b38(uVar2,0xbf800000);
    uStack_30 = FUN_71ba0b38(uVar17,0xbf800000);
    uVar19 = FUN_71ba21e8(uVar3,0x3f000000);
    uVar3 = FUN_71ba0b38(uVar19,0x41700000);
    uStack_2c = FUN_71ba0b38(uVar3,0x3f800000);
    uVar4 = FUN_71ba0b38(uVar2,0x3f800000);
    uStack_28 = FUN_71ba0b38(uVar4,0x3f800000);
    uVar14 = FUN_71ba0b38(uVar19,0xc1700000);
    uStack_34 = FUN_71ba0b38(uVar14,0xbf800000);
    FUN_71358efc(auStack_40,0,0,0,0xff);
    FUN_71359020(auStack_38,auStack_40);
    FUN_7135af7c(&uStack_34,auStack_38);
    uStack_34 = uVar14;
    uStack_30 = uVar17;
    uStack_2c = uVar3;
    uStack_28 = uVar4;
    FUN_71358efc(auStack_40,0xff,0xff,0xff,0xff);
    FUN_71359020(auStack_38,auStack_40);
    FUN_7135af7c(&uStack_34,auStack_38);
    uVar17 = FUN_71ba0b38(uVar2,0xc1700000);
    uStack_30 = FUN_71ba0b38(uVar17,0xbf800000);
    uVar3 = FUN_71ba0b38(uVar19,0x3f800000);
    uStack_2c = FUN_71ba0b38(uVar3,0xbf800000);
    uVar2 = FUN_71ba0b38(uVar2,0x41700000);
    uStack_28 = FUN_71ba0b38(uVar2,0xbf800000);
    uVar19 = FUN_71ba0b38(uVar19,0xbf800000);
    uStack_34 = FUN_71ba0b38(uVar19,0xbf800000);
    FUN_71358efc(auStack_40,0,0,0,0xff);
    FUN_71359020(auStack_38,auStack_40);
    FUN_7135af7c(&uStack_34,auStack_38);
    uStack_34 = uVar19;
    uStack_30 = uVar17;
    uStack_2c = uVar3;
    uStack_28 = uVar2;
    FUN_71358efc(auStack_40,0xff,0xff,0xff,0xff);
    FUN_71359020(auStack_38,auStack_40);
    FUN_7135af7c(&uStack_34,auStack_38);
  }
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  return;
}


// =========================================================================
// Function: FUN_71461864
// Entry: 0x71461864 | Size: 392 bytes
// =========================================================================

void FUN_71461864(undefined4 param_1)

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
  if (((DAT_71000384 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71000384), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0328);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0318);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_7007f654;
      uVar4 = DAT_7007f650;
      uVar3 = DAT_7007f64c;
      *puVar10 = DAT_7007f648;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_7007f664;
      uVar4 = DAT_7007f660;
      uVar3 = DAT_7007f65c;
      puVar10[4] = DAT_7007f658;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_7007f66a;
      *(undefined2 *)(puVar10 + 8) = DAT_7007f668;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714620b4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0328);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0318);
    if (*(char *)(iVar8 + 0x23) != '\0') {
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
        bVar2 = (0x21 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x23) = 0;
    }
    DAT_71000380 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71000384);
  }
                    /* WARNING: Could not recover jumptable at 0x71461890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71000380)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71462570
// Entry: 0x71462570 | Size: 400 bytes
// =========================================================================

void FUN_71462570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_7101476c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_7101476c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c05f4,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c05e4);
      *(undefined1 *)(iVar4 + 0x54) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f8e0,0x54);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e3f8,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c05f4);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c05e4);
    if (*(char *)(iVar4 + 0x54) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x85ef9dbf >> iVar9) | (byte)(-0x656b801 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf9a947ff >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x52 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x54) = 0;
    }
    DAT_71014768 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_7101476c);
  }
                    /* WARNING: Could not recover jumptable at 0x714625a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71014768)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_714629b4
// Entry: 0x714629b4 | Size: 400 bytes
// =========================================================================

void FUN_714629b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_71014774 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71014774), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0614,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0604);
      *(undefined1 *)(iVar4 + 0x58) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_7007f938,0x58);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e448,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0614);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0604);
    if (*(char *)(iVar4 + 0x58) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0xd9dfef83 >> iVar9) |
                (byte)(-0x7ad21a23 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x852de5dd >> (uVar10 & 0xff));
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
    DAT_71014770 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71014774);
  }
                    /* WARNING: Could not recover jumptable at 0x714629e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71014770)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_71462df8
// Entry: 0x71462df8 | Size: 360 bytes
// =========================================================================

void FUN_71462df8(void)

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
  if (((DAT_7101477c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_7101477c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0634);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0624);
      *(undefined1 *)((int)puVar10 + 0x1a) = 1;
      uVar7 = DAT_7007f9a4;
      uVar6 = DAT_7007f9a0;
      uVar5 = DAT_7007f99c;
      uVar4 = DAT_7007f998;
      uVar3 = DAT_7007f994;
      *puVar10 = DAT_7007f990;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      *(undefined2 *)(puVar10 + 6) = DAT_7007f9a8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e498,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0634);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0624);
    if (*(char *)(iVar8 + 0x1a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x137bcf6f >> iVar14) |
                 (byte)(0x4bad89f9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x4bad89f9 >> (uVar15 & 0xff));
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
    DAT_71014778 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_7101477c);
  }
                    /* WARNING: Could not recover jumptable at 0x71462e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71014778)();
  return;
}


// =========================================================================
// Function: FUN_714631f8
// Entry: 0x714631f8 | Size: 364 bytes
// =========================================================================

void FUN_714631f8(void)

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
  if (((DAT_71014784 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71014784), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0654);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0644);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_7007f9bc;
      uVar4 = DAT_7007f9b8;
      uVar3 = DAT_7007f9b4;
      *puVar9 = DAT_7007f9b0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_7007f9c2;
      *(undefined2 *)(puVar9 + 4) = DAT_7007f9c0;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e4d4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0654);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0644);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xb5d3957b >> iVar13) |
                 (byte)(0x2b3dcfb5 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x2b3dcfb5 >> (uVar14 & 0xff));
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
    DAT_71014780 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71014784);
  }
                    /* WARNING: Could not recover jumptable at 0x71463224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_71014780)();
  return;
}


// =========================================================================
// Function: FUN_714635fc
// Entry: 0x714635fc | Size: 364 bytes
// =========================================================================

undefined4 FUN_714635fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar2 = param_1;
  }
  iVar6 = *(int *)(*(int *)(DAT_70c39074 + *(short *)(iVar2 + 0x26) * 4) + 0x2c);
  if (iVar6 != 0) {
    FUN_713b7c8c(&uStack_2c,iVar2,iVar6 + 0x18);
    uVar4 = DAT_7100ceec[1];
    uVar5 = DAT_7100ceec[2];
    uVar1 = FUN_71ba240c(uStack_2c,*DAT_7100ceec);
    uVar4 = FUN_71ba240c(uStack_28,uVar4);
    uVar5 = FUN_71ba240c(uStack_24,uVar5);
    uVar4 = FUN_71ba21e8(uVar4,uVar4);
    uVar1 = FUN_71ba21e8(uVar1,uVar1);
    uVar1 = FUN_71ba0b38(uVar1,uVar4);
    uVar4 = FUN_71ba21e8(uVar5,uVar5);
    FUN_71ba0b38(uVar4,uVar1);
    uVar1 = imp_sqrtf();
    uVar4 = FUN_71ba240c(uVar1,*(undefined4 *)(iVar6 + 0x24));
    iVar2 = FUN_71ba2d70(uVar4,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = uVar4;
    }
    return uVar1;
  }
  puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x14) + 0x30);
  if (*(int *)(iVar2 + 0x14) == 0) {
    puVar3 = (undefined4 *)(iVar2 + 4);
  }
  uVar4 = puVar3[1];
  uVar8 = puVar3[2];
  uVar7 = DAT_7100ceec[1];
  uVar5 = DAT_7100ceec[2];
  uVar1 = FUN_71ba240c(*puVar3,*DAT_7100ceec);
  uVar4 = FUN_71ba240c(uVar4,uVar7);
  uVar4 = FUN_71ba21e8(uVar4,uVar4);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar4);
  uVar4 = FUN_71ba240c(uVar8,uVar5);
  uVar4 = FUN_71ba21e8(uVar4,uVar4);
  FUN_71ba0b38(uVar4,uVar1);
  uVar1 = imp_sqrtf();
  return uVar1;
}


// =========================================================================
// Function: FUN_71463a2c
// Entry: 0x71463a2c | Size: 128 bytes
// =========================================================================

void FUN_71463a2c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar1 = FUN_71ba240c(*param_2,*param_1);
  uVar2 = FUN_71ba240c(uVar2,uVar3);
  uVar3 = FUN_71ba240c(uVar5,uVar4);
  uVar2 = FUN_71ba21e8(uVar2,uVar2);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar3,uVar3);
  FUN_71ba0b38(uVar2,uVar1);
  imp_sqrtf();
  return;
}


// =========================================================================
// Function: FUN_71463bc0
// Entry: 0x71463bc0 | Size: 320 bytes
// =========================================================================

void FUN_71463bc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = DAT_7100ceec;
  iVar2 = *(int *)(*(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4) + 0x2c);
  puVar6 = DAT_7100ceec + 1;
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
    if (*(int *)(param_1 + 0x14) == 0) {
      puVar5 = (undefined4 *)(param_1 + 4);
    }
    uVar4 = puVar5[1];
    uVar7 = puVar5[2];
    uVar3 = FUN_71ba240c(*puVar5,*DAT_7100ceec);
    uVar8 = puVar1[2];
    uVar4 = FUN_71ba240c(uVar4,*puVar6);
    uVar4 = FUN_71ba21e8(uVar4,uVar4);
    uVar3 = FUN_71ba21e8(uVar3,uVar3);
    uVar3 = FUN_71ba0b38(uVar3,uVar4);
    uVar4 = FUN_71ba240c(uVar7,uVar8);
    uVar4 = FUN_71ba21e8(uVar4,uVar4);
  }
  else {
    FUN_713b7c8c(&uStack_2c,param_1,iVar2 + 0x18);
    uVar3 = FUN_71ba240c(uStack_2c,*puVar1);
    uVar7 = puVar1[2];
    uVar4 = FUN_71ba240c(uStack_28,*puVar6);
    uVar7 = FUN_71ba240c(uStack_24,uVar7);
    uVar4 = FUN_71ba21e8(uVar4,uVar4);
    uVar3 = FUN_71ba21e8(uVar3,uVar3);
    uVar3 = FUN_71ba0b38(uVar3,uVar4);
    uVar4 = FUN_71ba21e8(uVar7,uVar7);
  }
  FUN_71ba0b38(uVar4,uVar3);
  imp_sqrtf();
  return;
}


// =========================================================================
// Function: FUN_71463f34
// Entry: 0x71463f34 | Size: 140 bytes
// =========================================================================

void FUN_71463f34(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_71ba21e8(param_1,0x3f000000);
  iVar2 = FUN_71ba2d10(uVar1,0x41700000);
  uVar4 = 0x41700000;
  if (iVar2 != 0) {
    uVar4 = uVar1;
  }
  uVar1 = FUN_71ba21e8(param_1,0x3e19999a);
  iVar2 = FUN_71ba2d10(uVar1,uVar4);
  iVar3 = FUN_71ba2d70(uVar1,0x42c80000);
  if (iVar3 != 0) {
    uVar1 = 0x42c80000;
  }
  if (iVar2 != 0) {
    uVar1 = uVar4;
  }
  FUN_71ba21e8(uVar1,*DAT_71014764);
  return;
}


// =========================================================================
// Function: FUN_714640a0
// Entry: 0x714640a0 | Size: 560 bytes
// =========================================================================

void FUN_714640a0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = DAT_700c0380;
  uVar4 = (param_1 >> 4) * 0x1b1;
  iVar2 = (uVar4 & 0x7ff) * 0xc;
  puVar3 = (uint *)(&DAT_71014788 + iVar2);
  puVar6 = puVar3;
  if (*puVar3 != param_1) {
    iVar1 = (uVar4 + 1 & 0x7ff) * 0xc;
    puVar6 = (uint *)(&DAT_71014788 + iVar1);
    if (*puVar6 != param_1) {
      if ((DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2) < 2) &&
         (puVar3 = puVar6, DAT_700c0380 - *(int *)(&DAT_71014790 + iVar1) < 2)) {
        puVar3 = (uint *)0x0;
      }
      iVar2 = (uVar4 + 2 & 0x7ff) * 0xc;
      puVar6 = (uint *)(&DAT_71014788 + iVar2);
      if (*puVar6 != param_1) {
        if ((puVar3 == (uint *)0x0) &&
           (puVar3 = puVar6, DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2) < 2)) {
          puVar3 = (uint *)0x0;
        }
        iVar2 = (uVar4 + 3 & 0x7ff) * 0xc;
        puVar6 = (uint *)(&DAT_71014788 + iVar2);
        if (*puVar6 != param_1) {
          if ((puVar3 == (uint *)0x0) &&
             (puVar3 = puVar6, DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2) < 2)) {
            puVar3 = (uint *)0x0;
          }
          iVar2 = (uVar4 + 4 & 0x7ff) * 0xc;
          puVar6 = (uint *)(&DAT_71014788 + iVar2);
          if (*puVar6 != param_1) {
            if ((puVar3 == (uint *)0x0) &&
               (puVar3 = puVar6, DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2) < 2)) {
              puVar3 = (uint *)0x0;
            }
            iVar2 = (uVar4 + 5 & 0x7ff) * 0xc;
            puVar6 = (uint *)(&DAT_71014788 + iVar2);
            if (*puVar6 != param_1) {
              if ((puVar3 == (uint *)0x0) &&
                 (puVar3 = puVar6, DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2) < 2)) {
                puVar3 = (uint *)0x0;
              }
              iVar2 = (uVar4 + 6 & 0x7ff) * 0xc;
              puVar6 = (uint *)(&DAT_71014788 + iVar2);
              if (*puVar6 != param_1) {
                if ((puVar3 == (uint *)0x0) &&
                   (puVar3 = puVar6, DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2) < 2)) {
                  puVar3 = (uint *)0x0;
                }
                iVar2 = (uVar4 + 7 & 0x7ff) * 0xc;
                puVar6 = (uint *)(&DAT_71014788 + iVar2);
                if (*puVar6 != param_1) {
                  if (puVar3 == (uint *)0x0) {
                    if (1 < DAT_700c0380 - *(int *)(&DAT_71014790 + iVar2)) {
                      *puVar6 = param_1;
                      *(uint *)(&DAT_7101478c + iVar2) = param_2;
                      *(uint *)(&DAT_71014790 + iVar2) = uVar5;
                    }
                    return;
                  }
                  *puVar3 = param_1;
                  puVar3[1] = param_2;
                  puVar3[2] = uVar5;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar3 = puVar6 + 1;
  if (puVar6[2] != DAT_700c0380) {
    puVar6[2] = DAT_700c0380;
    *puVar3 = param_2;
    return;
  }
  uVar5 = *puVar3;
  iVar2 = FUN_71ba2d10(uVar5);
  if (iVar2 == 0) {
    param_2 = uVar5;
  }
  *puVar3 = param_2;
  return;
}


// =========================================================================
// Function: FUN_71464344
// Entry: 0x71464344 | Size: 292 bytes
// =========================================================================

uint FUN_71464344(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * 0x1b1;
  puVar2 = (uint *)(&DAT_71014788 + (uVar3 & 0x7ff) * 0xc);
  uVar1 = 0xbf800000;
  if (((((*puVar2 != param_1) &&
        (puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 1 & 0x7ff) * 0xc), *puVar2 != param_1)) &&
       (puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 2 & 0x7ff) * 0xc), *puVar2 != param_1)) &&
      ((puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 3 & 0x7ff) * 0xc), *puVar2 != param_1 &&
       (puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 4 & 0x7ff) * 0xc), *puVar2 != param_1)))) &&
     ((puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 5 & 0x7ff) * 0xc), *puVar2 != param_1 &&
      ((puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 6 & 0x7ff) * 0xc), *puVar2 != param_1 &&
       (puVar2 = (uint *)(&DAT_71014788 + (uVar3 + 7 & 0x7ff) * 0xc), *puVar2 != param_1)))))) {
    return 0xbf800000;
  }
  if (DAT_700c0380 - puVar2[2] < 2) {
    uVar1 = puVar2[1];
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_714644c0
// Entry: 0x714644c0 | Size: 856 bytes
// =========================================================================

int FUN_714644c0(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  bool bVar18;
  bool bVar19;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar7 = FUN_71ba21e8(*(undefined4 *)(DAT_70b46c18 + 0xec),param_2[0xc]);
  if ((((*(byte *)(param_1 + 0x3a) & 7) == 4) && ((*(byte *)(param_1 + 0x144) & 1) != 0)) &&
     (iVar8 = (**(code **)(*param_2 + 0x14))(param_2), iVar8 == 4)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0674);
    if (*pcVar9 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0664);
      *(undefined1 *)((int)puVar11 + 0x16) = 1;
      uVar5 = DAT_7007f9d8;
      uVar4 = DAT_7007f9d4;
      uVar3 = DAT_7007f9d0;
      uVar2 = DAT_7007f9cc;
      *puVar11 = DAT_7007f9c8;
      puVar11[1] = uVar2;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      puVar11[4] = uVar5;
      *(undefined2 *)(puVar11 + 5) = DAT_7007f9dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e508,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0674);
      *puVar12 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0664);
    if (*(char *)(iVar8 + 0x16) != '\0') {
      uVar10 = 0;
      uVar16 = 0;
      do {
        iVar13 = (uVar10 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x47db73c7 >> iVar13) |
                (byte)(0x43573ddf << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x43573ddf >> (uVar14 & 0xff));
        }
        *(byte *)(iVar8 + uVar10) = *(byte *)(iVar8 + uVar10) ^ bVar6;
        bVar19 = 0xfffffffe < uVar10;
        bVar18 = uVar16 == 0;
        bVar1 = (0x14 < uVar10) <= uVar16;
        uVar10 = uVar10 + 1;
        uVar16 = uVar16 + bVar19;
      } while (bVar18 && bVar1);
      *(undefined1 *)(iVar8 + 0x16) = 0;
    }
    uVar10 = imp_strlen(iVar8);
    if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_30);
    }
    if (uVar10 < 0xb) {
      uVar16 = (uint)&uStack_30 | 1;
      uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
      if (uVar10 != 0) goto LAB_7146461c;
    }
    else {
      uVar16 = thunk_MwhHq((uVar10 | 7) + 1);
      uStack_30 = (uVar10 | 7) + 2;
      uStack_2c = uVar10;
      uStack_28 = uVar16;
LAB_7146461c:
      imp___aeabi_memmove(uVar16,iVar8,uVar10);
    }
    *(undefined1 *)(uVar16 + uVar10) = 0;
    iVar8 = FUN_717c5e7c(&uStack_30);
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if ((iVar8 - 1U < 2) && (iVar8 = FUN_71ba2d10(iVar7,0x43480000), iVar8 != 0)) {
      iVar7 = 0x43480000;
    }
  }
  if ((*(byte *)((int)param_2 + 0x29) & 0x78) == 8) {
    iVar7 = FUN_71ba21e8(iVar7,DAT_700c0364);
    if (*(int *)(param_1 + 0x34) != 0) {
LAB_714646c0:
      iVar13 = *DAT_7100cee4;
      iVar8 = FUN_71ba2d10(iVar13,iVar7);
      if (iVar8 != 0) {
        iVar7 = iVar13;
      }
      piVar17 = &DAT_700c0808;
      goto LAB_71464774;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_714646c0;
    bVar6 = *(byte *)(param_1 + 0x1d);
    bVar18 = (bVar6 & 1) == 0;
    if (bVar18) {
      bVar6 = *(byte *)(param_1 + 0x38);
    }
    if (!bVar18 || bVar6 != 0) {
      iVar7 = FUN_71ba21e8(iVar7,DAT_700c0360);
    }
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    iVar7 = FUN_71ba21e8(iVar7,*DAT_7100cee0);
  }
  piVar17 = &DAT_700c080c;
  if (*(char *)(param_1 + 0x38) == '\0') {
    piVar17 = &DAT_700c0808;
  }
  iVar13 = *DAT_7100cee4;
  iVar8 = FUN_71ba2d10(iVar13,iVar7);
  if (iVar8 != 0) {
    iVar7 = iVar13;
  }
LAB_71464774:
  iVar15 = *piVar17;
  iVar8 = param_2[0xc];
  iVar13 = FUN_71ba2d10(iVar15,iVar8);
  if (iVar13 != 0) {
    iVar8 = iVar15;
  }
  iVar13 = FUN_71ba2d10(iVar7,iVar8);
  if (iVar13 == 0) {
    iVar8 = iVar7;
  }
  return iVar8;
}


// =========================================================================
// Function: FUN_714650b4
// Entry: 0x714650b4 | Size: 1292 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_714650b4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  
  iVar2 = DAT_70b46c18;
  iVar5 = *(int *)(DAT_70b46c18 + 0x8d8);
  FUN_7136cdfc(&uStack_c4);
  FUN_7136cdfc();
  puVar4 = &uStack_ac;
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc(&uStack_7c);
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc(auStack_34);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(&uStack_c4,&uStack_dc);
  puVar6 = (uint *)(iVar5 + 0x84);
  uVar7 = *puVar6;
  uVar8 = *(undefined4 *)(iVar5 + 0x68);
  uStack_b8 = FUN_71ba21e8(uVar8,uVar7 ^ 0x80000000);
  uStack_94 = uStack_b8;
  uStack_ac = FUN_71ba21e8(uVar7,uVar8);
  uVar8 = *(undefined4 *)(iVar5 + 0x6c);
  uStack_b0 = uVar7;
  uStack_a4 = uVar7;
  uStack_a0 = uStack_ac;
  uStack_98 = uVar7;
  uStack_8c = uVar7;
  uStack_b4 = FUN_71ba21e8(uVar7,uVar8);
  uStack_a8 = uStack_b4;
  uStack_9c = FUN_71ba21e8(uVar8,uVar7 ^ 0x80000000);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_90 = uStack_9c;
  FUN_7136d040(&uStack_88,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(&uStack_7c,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_70,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_64,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_58,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_4c,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_40,&uStack_dc);
  FUN_713e8168();
  puVar1 = DAT_7100ceec;
  if (param_1 == 0) {
    param_1 = *(int *)(*(int *)(iVar2 + 0x8d8) + 4) + 0x10;
  }
  *DAT_7100ceec = *(undefined4 *)(param_1 + 0x30);
  puVar1[1] = *(undefined4 *)(param_1 + 0x34);
  puVar1[2] = *(undefined4 *)(param_1 + 0x38);
  uVar8 = DAT_700c0368;
  *DAT_7100cee4 = DAT_700c0368;
  DAT_7100cec4 = param_2;
  iVar2 = FUN_71ba2d70(*(undefined4 *)(param_1 + 0x28),0);
  if (iVar2 == 0) {
    uVar3 = FUN_71ba21e8(uVar8,uStack_b0);
    uVar7 = *puVar6;
    uStack_d4 = FUN_71ba13e0(uVar3,uVar7);
    uVar3 = FUN_71ba21e8(uVar8,uStack_b4);
    uStack_d8 = FUN_71ba13e0(uVar3,uVar7);
    uVar8 = FUN_71ba21e8(uVar8,uStack_b8);
    uStack_dc = FUN_71ba13e0(uVar8,uVar7);
    FUN_7136d040(&uStack_88,&uStack_dc);
    uVar8 = DAT_700c0368;
    uVar3 = FUN_71ba21e8(DAT_700c0368,uStack_a4);
    uVar7 = *puVar6;
    uStack_d4 = FUN_71ba13e0(uVar3,uVar7);
    uVar3 = FUN_71ba21e8(uVar8,uStack_a8);
    uStack_d8 = FUN_71ba13e0(uVar3,uVar7);
  }
  else {
    uVar3 = FUN_71ba21e8(uVar8,uStack_8c);
    uVar7 = *puVar6;
    uStack_d4 = FUN_71ba13e0(uVar3,uVar7);
    uVar3 = FUN_71ba21e8(uVar8,uStack_90);
    uStack_d8 = FUN_71ba13e0(uVar3,uVar7);
    uVar8 = FUN_71ba21e8(uVar8,uStack_94);
    uStack_dc = FUN_71ba13e0(uVar8,uVar7);
    FUN_7136d040(&uStack_88,&uStack_dc);
    uVar8 = DAT_700c0368;
    uVar3 = FUN_71ba21e8(DAT_700c0368,uStack_98);
    uVar7 = *puVar6;
    uStack_d4 = FUN_71ba13e0(uVar3,uVar7);
    uVar3 = FUN_71ba21e8(uVar8,uStack_9c);
    uStack_d8 = FUN_71ba13e0(uVar3,uVar7);
    puVar4 = &uStack_a0;
  }
  uVar8 = FUN_71ba21e8(uVar8,*puVar4);
  uStack_dc = FUN_71ba13e0(uVar8,uVar7);
  FUN_7136d040(&uStack_7c,&uStack_dc);
  FUN_714154f8(&uStack_c4,&uStack_c4,0xc,param_1);
  uVar8 = FUN_71ba13e0(uStack_c0,0x42480000);
  uStack_d8 = FUN_71ba0b38(uVar8,0x42a00000);
  uVar8 = FUN_71ba13e0(uStack_84,0x42480000);
  uStack_d0 = FUN_71ba0b38(uVar8,0x42a00000);
  uVar8 = FUN_71ba13e0(uStack_88,0x42480000);
  uStack_d4 = FUN_71ba0b38(uVar8,0x42a00000);
  uVar8 = FUN_71ba13e0(uStack_78,0x42480000);
  uStack_c8 = FUN_71ba0b38(uVar8,0x42a00000);
  uVar8 = FUN_71ba13e0(uStack_7c,0x42480000);
  uStack_cc = FUN_71ba0b38(uVar8,0x42a00000);
  uVar8 = FUN_71ba13e0(uStack_c4,0x42480000);
  uStack_dc = FUN_71ba0b38(uVar8,0x42a00000);
  FUN_71462570(&uStack_dc,3,&LAB_71464c60);
  return;
}


// =========================================================================
// Function: FUN_71465e10
// Entry: 0x71465e10 | Size: 1096 bytes
// =========================================================================

void FUN_71465e10(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 unaff_r4;
  byte bVar16;
  undefined4 unaff_r5;
  undefined4 *puVar17;
  undefined4 unaff_r6;
  undefined4 uVar18;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar19;
  
  FUN_714d869c();
  iVar6 = DAT_70b46c18;
  puVar17 = (undefined4 *)(*(int *)(DAT_70b46c18 + 0x14) + 0x30);
  if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
    puVar17 = (undefined4 *)(DAT_70b46c18 + 4);
  }
  uVar9 = FUN_713cdb9c(*puVar17,puVar17[1],puVar17[2]);
  *(bool *)DAT_7100cecc = (uVar9 & 0x880) != 0;
  *(bool *)DAT_7100ced0 = (uVar9 & 0x880) != 0x800;
  *DAT_7100cee0 = 0x3f800000;
  *DAT_7100ced4 = 0;
  iVar10 = FUN_713c301c(0);
  if ((iVar10 != 0) && (*(char *)(iVar10 + 0x33) == '\0')) {
    uVar11 = FUN_713b108c(iVar6,0);
    iVar13 = *(int *)(iVar10 + 0x14) + 0x30;
    if (*(int *)(iVar10 + 0x14) == 0) {
      iVar13 = iVar10 + 4;
    }
    uVar18 = *(undefined4 *)(iVar13 + 8);
    uVar11 = FUN_71ba240c(uVar18,uVar11);
    iVar10 = FUN_71ba2d70(uVar11,0x42480000);
    if (iVar10 != 0) {
      uVar11 = FUN_713b108c(iVar6,2);
      uVar11 = FUN_71ba240c(uVar18,uVar11);
      iVar10 = FUN_71ba2d70(uVar11,0x41200000);
      if ((iVar10 != 0) && (iVar10 = FUN_713c2bdc(0,0), iVar10 != 0)) {
        *DAT_7100ced4 = 1;
      }
    }
    uVar11 = puVar17[2];
    iVar10 = FUN_71ba2d70(uVar11,0x42a00000);
    if (iVar10 != 0) {
      uVar11 = FUN_71ba0b38(uVar11,0xc2a00000);
      uVar11 = FUN_71ba13e0(uVar11,0x432a0000);
      iVar10 = FUN_71ba2d10(uVar11,0x3f800000);
      if (iVar10 == 0) {
        uVar11 = 0x3f800000;
      }
      uVar11 = FUN_71ba21e8(uVar11,0x3f99999a);
      uVar11 = FUN_71ba0b38(uVar11,0x3f800000);
      *DAT_7100cee0 = uVar11;
    }
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar11 = FUN_71ba1b94(DAT_71201738);
  uVar11 = FUN_71ba21e8(uVar11,0x3c23d70a);
  uVar11 = FUN_71ba0b38(uVar11,0xbd8f5c29);
  uVar11 = FUN_71ba13e0(uVar11,0x3cf5c290);
  iVar10 = FUN_71ba2d70(uVar11,0);
  if (iVar10 == 0) {
    uVar11 = 0;
  }
  iVar10 = FUN_71ba2d10(uVar11,0x3f800000);
  if (iVar10 == 0) {
    uVar11 = 0x3f800000;
  }
  uVar18 = FUN_71ba21e8(uVar11,uVar11);
  uVar11 = FUN_71ba0b38(uVar11,uVar11);
  uVar11 = FUN_71ba240c(0x40400000,uVar11);
  uVar18 = FUN_71ba21e8(uVar18,uVar11);
  uVar11 = DAT_700c0804;
  uVar12 = FUN_71ba240c(*(undefined4 *)(DAT_710ea8a4 + 0xa8),DAT_700c0804);
  uVar18 = FUN_71ba21e8(uVar12,uVar18);
  uVar11 = FUN_71ba0b38(uVar18,uVar11);
  puVar5 = DAT_7100cee0;
  uVar11 = FUN_71ba21e8(*DAT_7100cee0,uVar11);
  *puVar5 = uVar11;
  FUN_71451910();
  FUN_71345a64();
  *DAT_7100cefc = 0;
  *DAT_7100cef8 = 0;
  DAT_7100cf00 = 0;
  *DAT_7100cef4 = 0;
  DAT_7100cf08 = 0;
  DAT_7100cf04 = 0;
  FUN_7136d040(DAT_7100ceec,puVar17);
  uVar11 = FUN_713c4e90(iVar6);
  *DAT_7100cee8 = uVar11;
  *DAT_7100cee4 = DAT_700c036c;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  iVar6 = DAT_71201738;
  DAT_700c0368 = 0x43960000;
  DAT_700c0380 = DAT_700c0380 + 1;
  uVar18 = FUN_71ba1b94(DAT_71201738);
  iVar10 = FUN_71ba2d10(uVar18,0x40a00000);
  uVar11 = FUN_71ba21e8(uVar18,0x3c5a74c0);
  uVar12 = FUN_71ba0b38(uVar11,0x3ecccccd);
  uVar11 = FUN_71ba13e0(uVar18,0x43700000);
  uVar11 = FUN_71ba0b38(uVar11,0x3f15551d);
  if (iVar10 != 0) {
    uVar18 = 0x40a00000;
  }
  uVar18 = FUN_71ba21e8(uVar18,0x3c23d70a);
  if (iVar6 < 0x14) {
    uVar11 = uVar12;
  }
  DAT_700c0360 = FUN_71ba13e0(uVar18,uVar11);
  DAT_700c0364 = FUN_71ba13e0(0x3f800000,uVar11);
  *DAT_7101475c = &DAT_710003a4;
  *DAT_71014760 = 0;
  FUN_71466b88();
  FUN_71467a0c();
  DataMemoryBarrier(0xb);
  if (((DAT_70b41f5c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41f5c), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad38);
    if (*pcVar7 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad28);
      *(undefined1 *)(puVar17 + 9) = 1;
      uVar12 = DAT_70074e1c;
      uVar18 = DAT_70074e18;
      uVar11 = DAT_70074e14;
      *puVar17 = DAT_70074e10;
      puVar17[1] = uVar11;
      puVar17[2] = uVar18;
      puVar17[3] = uVar12;
      uVar4 = DAT_70074e30;
      uVar3 = DAT_70074e2c;
      uVar12 = DAT_70074e28;
      uVar18 = DAT_70074e24;
      uVar11 = DAT_70074e20;
      puVar17[4] = DAT_70074e20;
      puVar17[5] = uVar18;
      puVar17[6] = uVar12;
      puVar17[7] = uVar3;
      puVar17[8] = uVar4;
      thunk_GFDIUClbc_QcPNgD_wH
                (&LAB_713620ec,puVar17,&DAT_70b0e000,uVar11,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                 unaff_r8,unaff_r10,unaff_r11,unaff_lr);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad38);
      *puVar8 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad28);
    if (*(char *)(iVar6 + 0x24) != '\0') {
      uVar9 = 0;
      uVar14 = 0;
      do {
        iVar10 = (uVar9 & 7) * 8;
        uVar15 = iVar10 - 0x20;
        bVar16 = (byte)(0xc98f5399 >> iVar10) |
                 (byte)(-0x3c6875 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xffc3978b >> (uVar15 & 0xff));
        }
        *(byte *)(iVar6 + uVar9) = *(byte *)(iVar6 + uVar9) ^ bVar16;
        bVar19 = 0xfffffffe < uVar9;
        bVar1 = uVar14 == 0;
        bVar2 = (0x22 < uVar9) <= uVar14;
        uVar9 = uVar9 + 1;
        uVar14 = uVar14 + bVar19;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x24) = 0;
    }
    DAT_70b41f58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41f5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7135cb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41f58)();
  return;
}


// =========================================================================
// Function: FUN_71466b88
// Entry: 0x71466b88 | Size: 1364 bytes
// =========================================================================

void FUN_71466b88(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [16];
  
  iVar4 = DAT_70b46c18;
  iVar12 = *(int *)(DAT_70b46c18 + 0x8d8);
  uVar11 = *DAT_7100cee4;
  FUN_7136cdfc(&uStack_c4);
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc(&uStack_88);
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  FUN_7136cdfc();
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(&uStack_c4,&uStack_dc);
  uVar9 = *(undefined4 *)(iVar12 + 0x68);
  uStack_b8 = FUN_71ba21e8(uVar9,uVar11 ^ 0x80000000);
  uStack_94 = uStack_b8;
  uStack_ac = FUN_71ba21e8(uVar11,uVar9);
  uVar9 = *(undefined4 *)(iVar12 + 0x6c);
  uStack_b0 = uVar11;
  uStack_a4 = uVar11;
  uStack_a0 = uStack_ac;
  uStack_98 = uVar11;
  uStack_8c = uVar11;
  uStack_b4 = FUN_71ba21e8(uVar11,uVar9);
  uStack_a8 = uStack_b4;
  uStack_9c = FUN_71ba21e8(uVar9,uVar11 ^ 0x80000000);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_90 = uStack_9c;
  FUN_7136d040(&uStack_88,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(&uStack_7c,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_70,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_64,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_58,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_4c,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_40,&uStack_dc);
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  FUN_7136d040(auStack_34,&uStack_dc);
  *DAT_7100cec8 = 0;
  FUN_714914d8();
  FUN_713e8168();
  uVar9 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x8d8) + 4) + 0x38);
  iVar12 = FUN_71ba2d70(uVar9,0);
  puVar8 = &uStack_b8;
  if (iVar12 != 0) {
    puVar8 = &uStack_94;
  }
  FUN_7136d040(&uStack_88,puVar8);
  iVar12 = FUN_71ba2d70(uVar9,0);
  puVar8 = &uStack_ac;
  if (iVar12 != 0) {
    puVar8 = &uStack_a0;
  }
  FUN_7136d040(&uStack_7c,puVar8);
  FUN_714154f8(&uStack_c4,&uStack_c4,0xd,*(int *)(*(int *)(iVar4 + 0x8d8) + 4) + 0x10);
  uVar6 = uStack_78;
  uVar7 = uStack_84;
  uVar9 = uStack_c0;
  *DAT_7100ced8 = 0;
  if (DAT_700c0359 != '\0') {
    uVar3 = FUN_71ba13e0(uStack_c0,0x42480000);
    uStack_d8 = FUN_71ba0b38(uVar3,0x42a00000);
    uVar2 = uStack_7c;
    uVar1 = uStack_88;
    uVar3 = uStack_c4;
    iVar4 = FUN_71ba2d10(uVar11,0x3f800000);
    if (iVar4 != 0) {
      uVar11 = 0x3f800000;
    }
    uVar5 = FUN_71ba13e0(0x43960000,uVar11);
    iVar4 = FUN_71ba2d10(uVar5,0x3f800000);
    uVar10 = 0x3f800000;
    if (iVar4 != 0) {
      uVar10 = uVar5;
    }
    uVar6 = FUN_71ba240c(uVar6,uVar9);
    uVar6 = FUN_71ba21e8(uVar10,uVar6);
    uVar6 = FUN_71ba0b38(uVar9,uVar6);
    uVar6 = FUN_71ba13e0(uVar6,0x42480000);
    uStack_c8 = FUN_71ba0b38(uVar6,0x42a00000);
    uVar6 = FUN_71ba240c(uVar2,uVar3);
    uVar6 = FUN_71ba21e8(uVar10,uVar6);
    uVar6 = FUN_71ba0b38(uVar3,uVar6);
    uVar6 = FUN_71ba13e0(uVar6,0x42480000);
    uStack_cc = FUN_71ba0b38(uVar6,0x42a00000);
    uVar7 = FUN_71ba240c(uVar7,uVar9);
    uVar7 = FUN_71ba21e8(uVar10,uVar7);
    uVar9 = FUN_71ba0b38(uVar9,uVar7);
    uVar9 = FUN_71ba13e0(uVar9,0x42480000);
    uStack_d0 = FUN_71ba0b38(uVar9,0x42a00000);
    uVar9 = FUN_71ba240c(uVar1,uVar3);
    uVar9 = FUN_71ba21e8(uVar10,uVar9);
    uVar9 = FUN_71ba0b38(uVar3,uVar9);
    uVar9 = FUN_71ba13e0(uVar9,0x42480000);
    uStack_d4 = FUN_71ba0b38(uVar9,0x42a00000);
    uVar9 = FUN_71ba13e0(uVar3,0x42480000);
    uStack_dc = FUN_71ba0b38(uVar9,0x42a00000);
    FUN_71462570(&uStack_dc,3,FUN_714689dc);
  }
  if (DAT_700c0358 != '\0') {
    uVar9 = FUN_71ba13e0(uStack_c0,0x43480000);
    uStack_d8 = FUN_71ba0b38(uVar9,0x41a00000);
    uVar9 = FUN_71ba13e0(uStack_88,0x43480000);
    uStack_d4 = FUN_71ba0b38(uVar9,0x41a00000);
    uVar9 = FUN_71ba13e0(uStack_84,0x43480000);
    uStack_d0 = FUN_71ba0b38(uVar9,0x41a00000);
    uVar9 = FUN_71ba13e0(uStack_7c,0x43480000);
    uStack_cc = FUN_71ba0b38(uVar9,0x41a00000);
    uVar9 = FUN_71ba13e0(uStack_78,0x43480000);
    uStack_c8 = FUN_71ba0b38(uVar9,0x41a00000);
    uVar9 = FUN_71ba13e0(uStack_c4,0x43480000);
    uStack_dc = FUN_71ba0b38(uVar9,0x41a00000);
    FUN_71462570(&uStack_dc,3,&DAT_71468cb4);
  }
  return;
}


// =========================================================================
// Function: FUN_71467a0c
// Entry: 0x71467a0c | Size: 640 bytes
// =========================================================================

void FUN_71467a0c(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  
  puVar3 = DAT_7101475c;
  piVar7 = (int *)*DAT_7101475c;
  piVar4 = &DAT_710003a4;
  if (piVar7 == &DAT_710003a4) {
    bVar12 = true;
  }
  else {
    do {
      iVar10 = *piVar4;
      if ((iVar10 != 0) && ((*(byte *)(iVar10 + 0x1c) & 0x80) == 0)) {
        *(undefined1 *)(iVar10 + 0x39) = 0;
        *piVar4 = 0;
        piVar7 = (int *)*puVar3;
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar7);
    bVar12 = piVar7 == &DAT_710003a4;
  }
  iVar10 = DAT_70c39074;
  do {
    if (bVar12) {
      return;
    }
    bVar9 = false;
    piVar4 = &DAT_710003a4;
    do {
      iVar5 = *piVar4;
      if (iVar5 != 0) {
        if ((*(byte *)(iVar5 + 0x38) == 0) ||
           ((int)*(char *)(iVar5 + 0x39) != (uint)*(byte *)(iVar5 + 0x38))) {
          iVar8 = *(int *)(iVar5 + 0x34);
          if (iVar8 != 0) {
            bVar1 = *(byte *)(*(int *)(iVar10 + *(short *)(iVar5 + 0x26) * 4) + 0x22);
            bVar12 = bVar1 != 0xff;
            if (bVar12) {
              bVar1 = *(byte *)(iVar8 + 0x1f);
            }
            if (bVar12 && (bVar1 & 2) != 0) {
              *(undefined1 *)(iVar8 + 0x39) = 0;
            }
            if (*(int *)(iVar5 + 0x18) == 0) {
              if ((*(byte *)(*(int *)(iVar5 + 0x34) + 0x1f) & 2) != 0) {
                *(undefined1 *)(*(int *)(iVar5 + 0x34) + 0x39) = 0x80;
              }
              *piVar4 = 0;
              *(undefined1 *)(iVar5 + 0x39) = 0;
              FUN_7135d734((int)*(short *)(iVar5 + 0x26),0);
              puVar3 = DAT_7101475c;
            }
          }
        }
        else {
          *(undefined1 *)(iVar5 + 0x39) = 0;
          bVar9 = true;
          *piVar4 = 0;
        }
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != (int *)*puVar3);
    bVar12 = false;
  } while (bVar9);
  piVar7 = &DAT_710003a4;
  do {
    iVar5 = *piVar7;
    if ((iVar5 != 0) && ('\0' < *(char *)(iVar5 + 0x39))) {
      *(undefined1 *)(iVar5 + 0x39) = 0;
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfdffffff;
      *piVar7 = 0;
      piVar4 = (int *)*puVar3;
    }
    piVar7 = piVar7 + 2;
  } while (piVar7 != piVar4);
  piVar4 = (int *)*puVar3;
  piVar7 = &DAT_710003a4;
  if (piVar4 != &DAT_710003a4) {
    do {
      iVar5 = *piVar7;
      if (iVar5 != 0) {
        if (*(char *)(iVar5 + 0x39) == '\0') {
          uVar11 = *(uint *)(iVar5 + 0x1c);
          *(uint *)(iVar5 + 0x1c) = uVar11 | 0x2000000;
          iVar8 = *(int *)(iVar10 + *(short *)(iVar5 + 0x26) * 4);
          if (*(char *)(iVar5 + 0x38) == '\0') {
            bVar12 = false;
            uVar6 = 0;
          }
          else {
            uVar2 = FUN_71464344(iVar5);
            uVar13 = FUN_71ba2d50(uVar2,0);
            uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
            bVar12 = false;
            if ((int)uVar13 != 0) {
              bVar12 = true;
            }
          }
          if (!bVar12) {
            uVar6 = (uint)*(byte *)(iVar8 + 0x22);
          }
          if (bVar12 || uVar6 != 0xff) {
            *(uint *)(iVar5 + 0x1c) = uVar11 | 0x2008000;
          }
          uVar2 = 0;
          if (bVar12) {
            uVar2 = 0x3dcccccd;
          }
          uVar2 = FUN_71ba0b38(uVar2,piVar7[1]);
          FUN_7146a7e0(iVar5,uVar2);
          puVar3 = DAT_7101475c;
        }
        *(undefined1 *)(iVar5 + 0x39) = 0;
        piVar4 = (int *)*puVar3;
      }
      piVar7 = piVar7 + 2;
    } while (piVar7 != piVar4);
  }
  return;
}


// =========================================================================
// Function: FUN_71467e50
// Entry: 0x71467e50 | Size: 1204 bytes
// =========================================================================

void FUN_71467e50(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 unaff_r4;
  byte bVar17;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar18;
  
  iVar12 = DAT_70b46c18;
  puVar14 = (undefined4 *)(*(int *)(DAT_70b46c18 + 0x14) + 0x30);
  if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
    puVar14 = (undefined4 *)(DAT_70b46c18 + 4);
  }
  uVar7 = FUN_713cdb9c(*puVar14,puVar14[1],puVar14[2]);
  *(bool *)DAT_7100cecc = (uVar7 & 0x880) != 0;
  *(bool *)DAT_7100ced0 = (uVar7 & 0x880) != 0x800;
  *DAT_7100ced4 = 0;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  uVar8 = FUN_71ba1b94(DAT_71201738);
  uVar8 = FUN_71ba21e8(uVar8,0x3c23d70a);
  uVar8 = FUN_71ba0b38(uVar8,0xbd8f5c29);
  uVar8 = FUN_71ba13e0(uVar8,0x3cf5c290);
  iVar9 = FUN_71ba2d70(uVar8,0);
  if (iVar9 == 0) {
    uVar8 = 0;
  }
  iVar9 = FUN_71ba2d10(uVar8,0x3f800000);
  if (iVar9 == 0) {
    uVar8 = 0x3f800000;
  }
  uVar10 = FUN_71ba21e8(uVar8,uVar8);
  uVar8 = FUN_71ba0b38(uVar8,uVar8);
  uVar8 = FUN_71ba240c(0x40400000,uVar8);
  uVar10 = FUN_71ba21e8(uVar10,uVar8);
  uVar8 = DAT_700c0804;
  uVar11 = FUN_71ba240c(*(undefined4 *)(DAT_710ea8a4 + 0xa8),DAT_700c0804);
  uVar10 = FUN_71ba21e8(uVar11,uVar10);
  uVar8 = FUN_71ba0b38(uVar10,uVar8);
  uVar8 = FUN_71ba21e8(uVar8,0x3f333333);
  *DAT_7100cee0 = uVar8;
  FUN_71345a64();
  *DAT_7100cefc = 0;
  *DAT_7100cef8 = 0;
  DAT_7100cf00 = 0;
  *DAT_7100cef4 = 0;
  DAT_7100cf08 = 0;
  DAT_7100cf04 = 0;
  iVar9 = FUN_713c301c(0xffffffff);
  iVar13 = *(int *)(iVar9 + 0x14) + 0x30;
  if (*(int *)(iVar9 + 0x14) == 0) {
    iVar13 = iVar9 + 4;
  }
  FUN_7136d040(DAT_7100ceec,iVar13);
  uVar8 = FUN_713c4e90(iVar12);
  uVar8 = FUN_71ba0b38(uVar8,0x40490fdb);
  *DAT_7100cee8 = uVar8;
  uVar8 = FUN_71ba21e8(DAT_700c036c,0x3f266666);
  iVar12 = FUN_71ba2d70(uVar8,0x43c80000);
  if (iVar12 != 0) {
    uVar8 = 0x43c80000;
  }
  *DAT_7100cee4 = uVar8;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  iVar12 = DAT_71201738;
  DAT_700c0368 = 0x43960000;
  uVar10 = FUN_71ba1b94(DAT_71201738);
  iVar9 = FUN_71ba2d10(uVar10,0x40a00000);
  uVar8 = FUN_71ba21e8(uVar10,0x3c5a74c0);
  uVar11 = FUN_71ba0b38(uVar8,0x3ecccccd);
  uVar8 = FUN_71ba13e0(uVar10,0x43700000);
  uVar8 = FUN_71ba0b38(uVar8,0x3f15551d);
  if (iVar9 != 0) {
    uVar10 = 0x40a00000;
  }
  uVar10 = FUN_71ba21e8(uVar10,0x3c23d70a);
  if (iVar12 < 0x14) {
    uVar8 = uVar11;
  }
  DAT_700c0360 = FUN_71ba13e0(uVar10,uVar8);
  DAT_700c0364 = FUN_71ba13e0(0x3f800000,uVar8);
  *DAT_7101475c = &DAT_710003a4;
  *DAT_71014760 = 0;
  FUN_71466b88();
  *DAT_7100cee4 = DAT_700c036c;
  FUN_71467a0c();
  DataMemoryBarrier(0xb);
  if (((DAT_70b41f5c & 1) == 0) && (iVar12 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41f5c), iVar12 != 0))
  {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad38);
    if (*pcVar5 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad28);
      *(undefined1 *)(puVar14 + 9) = 1;
      uVar11 = DAT_70074e1c;
      uVar10 = DAT_70074e18;
      uVar8 = DAT_70074e14;
      *puVar14 = DAT_70074e10;
      puVar14[1] = uVar8;
      puVar14[2] = uVar10;
      puVar14[3] = uVar11;
      uVar4 = DAT_70074e30;
      uVar3 = DAT_70074e2c;
      uVar11 = DAT_70074e28;
      uVar10 = DAT_70074e24;
      uVar8 = DAT_70074e20;
      puVar14[4] = DAT_70074e20;
      puVar14[5] = uVar10;
      puVar14[6] = uVar11;
      puVar14[7] = uVar3;
      puVar14[8] = uVar4;
      thunk_GFDIUClbc_QcPNgD_wH
                (&LAB_713620ec,puVar14,&DAT_70b0e000,uVar8,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                 unaff_r8,unaff_r10,unaff_r11,unaff_lr);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad38);
      *puVar6 = 1;
    }
    iVar12 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bad28);
    if (*(char *)(iVar12 + 0x24) != '\0') {
      uVar7 = 0;
      uVar15 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar16 = iVar9 - 0x20;
        bVar17 = (byte)(0xc98f5399 >> iVar9) | (byte)(-0x3c6875 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar16) {
          bVar17 = (byte)(0xffc3978b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar12 + uVar7) = *(byte *)(iVar12 + uVar7) ^ bVar17;
        bVar18 = 0xfffffffe < uVar7;
        bVar1 = uVar15 == 0;
        bVar2 = (0x22 < uVar7) <= uVar15;
        uVar7 = uVar7 + 1;
        uVar15 = uVar15 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar12 + 0x24) = 0;
    }
    DAT_70b41f58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar12,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41f5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7135cb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41f58)();
  return;
}


// =========================================================================
// Function: FUN_71468920
// Entry: 0x71468920 | Size: 80 bytes
// =========================================================================

void FUN_71468920(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *param_3;
  uVar2 = param_3[1];
  uVar1 = FUN_71ba240c(param_2[2],param_3[2]);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba240c(uVar3,uVar2);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba240c(uVar5,uVar4);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_714689dc
// Entry: 0x714689dc | Size: 352 bytes
// =========================================================================

void FUN_714689dc(uint param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_7146c428();
  iVar4 = FUN_713e6434(param_1,param_2);
  piVar2 = DAT_7100039c;
  uVar1 = param_2;
  if ((int)param_2 < 0xa0) {
    uVar1 = param_1;
  }
  if (((int)uVar1 < 0xa0) && (-1 < (int)(param_2 | param_1))) {
    iVar6 = FUN_713e63c8(param_1);
    iVar7 = 0;
    if (DAT_700c035c != '\0') {
      iVar7 = iVar6;
    }
    *piVar2 = iVar7;
    if (DAT_700c035d == '\0') {
      iVar5 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
    }
    else {
      iVar5 = iVar4 + 8;
      piVar2[1] = iVar5;
      piVar2[2] = iVar4;
      piVar2[3] = iVar4 + 4;
      piVar2[4] = iVar6 + 4;
    }
    if (iVar7 != 0) {
      FUN_7146c674(iVar7,uVar3);
      iVar5 = piVar2[1];
    }
    if (iVar5 == 0) goto LAB_71468ae0;
  }
  else {
    *DAT_7100039c = 0;
    if (DAT_700c035d == '\0') {
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      goto LAB_71468ae0;
    }
    iVar5 = iVar4 + 8;
    piVar2[1] = iVar5;
    piVar2[2] = iVar4;
    piVar2[3] = iVar4 + 4;
    piVar2[4] = 0;
  }
  FUN_7146c674(iVar5,uVar3);
LAB_71468ae0:
  if (piVar2[2] != 0) {
    FUN_7146c674(piVar2[2],uVar3);
  }
  if (piVar2[3] != 0) {
    FUN_7146c674(piVar2[3],uVar3);
  }
  if (piVar2[4] == 0) {
    return;
  }
  FUN_7146c674(piVar2[4],uVar3);
  return;
}


// =========================================================================
// Function: FUN_714691c4
// Entry: 0x714691c4 | Size: 1356 bytes
// =========================================================================

void FUN_714691c4(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 unaff_r4;
  int *piVar17;
  undefined4 unaff_r5;
  byte bVar18;
  undefined4 unaff_r6;
  int *piVar19;
  undefined4 unaff_r7;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  
  iVar10 = DAT_70c38f30;
  iVar8 = *(int *)(DAT_70c38f30 + 8);
  cVar2 = *(char *)(DAT_70b4645c + 5);
  bVar21 = cVar2 == '\0';
  if (bVar21) {
    cVar2 = *(char *)(DAT_70b4645c + 4);
  }
  if ((bVar21 && cVar2 == '\0') && (*(char *)(DAT_70b4645c + 0xe) == '\0')) {
    uVar15 = 0x3f800000;
    if (iVar8 == 2) {
      uVar15 = 0x3f000000;
    }
  }
  else {
    uVar15 = 0x3f800000;
    if (iVar8 == 2) {
      uVar15 = 0x3e800000;
    }
    if (iVar8 == 3) {
      uVar15 = 0x3f19999a;
    }
  }
  if (iVar8 < 2) {
    uVar15 = 0;
  }
  *DAT_71014764 = uVar15;
  if (0 < *DAT_7100cef8) {
    iVar8 = 0;
    do {
      (**(code **)(*(int *)(&DAT_7100e1cc)[iVar8] + 0x48))();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *DAT_7100cef8);
  }
  if (0 < *DAT_7100cefc) {
    iVar8 = 0;
    do {
      (**(code **)(*(int *)(&DAT_7100d22c)[iVar8] + 0x48))();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *DAT_7100cefc);
  }
  if (0 < *DAT_7100cef0) {
    iVar8 = 0;
    do {
      (**(code **)(*(int *)(&DAT_7100d164)[iVar8] + 0x48))();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *DAT_7100cef0);
  }
  if (0 < *DAT_7100cef4) {
    iVar8 = 0;
    do {
      (**(code **)(*(int *)(&DAT_7100cf0c)[iVar8] + 0x48))();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *DAT_7100cef4);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_7101a78c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_7101a78c), iVar8 != 0)) {
    pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0694);
    if (*pcVar11 == '\0') {
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0684);
      *(undefined1 *)(iVar8 + 0x41) = 1;
      imp___aeabi_memcpy8(iVar8,&DAT_7007f9e0,0x41);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e540,iVar8,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0694);
      *puVar14 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0684);
    if (*(char *)(iVar8 + 0x41) != '\0') {
      uVar12 = 0;
      uVar16 = 0;
      do {
        iVar9 = (uVar12 & 7) * 8;
        uVar20 = iVar9 - 0x20;
        bVar18 = (byte)(0x9f19214d >> iVar9) |
                 (byte)(0x69e14f39 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar20) {
          bVar18 = (byte)(0x69e14f39 >> (uVar20 & 0xff));
        }
        *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar18;
        bVar22 = 0xfffffffe < uVar12;
        bVar21 = uVar16 == 0;
        bVar1 = (0x3f < uVar12) <= uVar16;
        uVar12 = uVar12 + 1;
        uVar16 = uVar16 + bVar22;
      } while (bVar21 && bVar1);
      *(undefined1 *)(iVar8 + 0x41) = 0;
    }
    DAT_7101a788 = FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_7101a78c);
  }
  piVar19 = (int *)(DAT_710eabfc + 0x14);
  iVar8 = DAT_7101a788;
  for (piVar17 = *(int **)(DAT_710eabfc + 0x10); piVar17 != piVar19; piVar17 = (int *)piVar17[4]) {
    if (iVar8 == piVar17[1]) {
      *(uint *)(*piVar17 + 0x1c) = *(uint *)(*piVar17 + 0x1c) & 0xfffdffff;
      (**(code **)(*(int *)*piVar17 + 0x48))();
      iVar8 = DAT_7101a788;
    }
  }
  piVar19 = (int *)(DAT_710eac08 + 0x14);
  iVar8 = DAT_7101a788;
  for (piVar17 = *(int **)(DAT_710eac08 + 0x10); piVar17 != piVar19; piVar17 = (int *)piVar17[4]) {
    if (iVar8 == piVar17[1]) {
      *(uint *)(*piVar17 + 0x1c) = *(uint *)(*piVar17 + 0x1c) & 0xfffdffff;
      (**(code **)(*(int *)*piVar17 + 0x48))();
      iVar8 = DAT_7101a788;
    }
  }
  FUN_714d8770();
  if (*(int *)(iVar10 + 0xa8) != 2) {
    DataMemoryBarrier(0xb);
    if (((DAT_710ea860 & 1) == 0) &&
       (iVar10 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ea860), iVar10 != 0)) {
      pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07b4);
      if (*pcVar11 == '\0') {
        puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07a4);
        *(undefined1 *)((int)puVar13 + 0x27) = 1;
        uVar4 = DAT_7007fc5c;
        uVar3 = DAT_7007fc58;
        uVar15 = DAT_7007fc54;
        *puVar13 = DAT_7007fc50;
        puVar13[1] = uVar15;
        puVar13[2] = uVar3;
        puVar13[3] = uVar4;
        uVar5 = DAT_7007fc70;
        uVar4 = DAT_7007fc6c;
        uVar3 = DAT_7007fc68;
        uVar15 = DAT_7007fc64;
        puVar13[4] = DAT_7007fc60;
        puVar13[5] = uVar15;
        puVar13[6] = uVar3;
        puVar13[7] = uVar4;
        puVar13[8] = uVar5;
        uVar7 = DAT_7007fc76;
        uVar6 = DAT_7007fc74;
        *(undefined2 *)(puVar13 + 9) = DAT_7007fc74;
        *(undefined1 *)((int)puVar13 + 0x26) = uVar7;
        thunk_GFDIUClbc_QcPNgD_wH
                  (&LAB_71475be8,puVar13,&DAT_70b0e000,uVar6,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07b4);
        *puVar14 = 1;
      }
      iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07a4);
      if (*(char *)(iVar10 + 0x27) != '\0') {
        uVar12 = 0;
        uVar16 = 0;
        do {
          iVar8 = (uVar16 & 7) * 8;
          uVar20 = iVar8 - 0x20;
          bVar18 = (byte)(0x4bd1a9a9 >> iVar8) |
                   (byte)(0x6f2bc975 << ((uVar16 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar20) {
            bVar18 = (byte)(0x6f2bc975 >> (uVar20 & 0xff));
          }
          *(byte *)(iVar10 + uVar16) = *(byte *)(iVar10 + uVar16) ^ bVar18;
          bVar21 = uVar12 == 0;
          bVar1 = (0x25 < uVar16) <= uVar12;
          uVar12 = uVar12 + (0xfffffffe < uVar16);
          uVar16 = uVar16 + 1;
        } while (bVar21 && bVar1);
        *(undefined1 *)(iVar10 + 0x27) = 0;
      }
      DAT_710ea85c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar10,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710ea860);
    }
                    /* WARNING: Could not recover jumptable at 0x71473ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_710ea85c)();
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71469b08
// Entry: 0x71469b08 | Size: 368 bytes
// =========================================================================

void FUN_71469b08(void)

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
  if (((DAT_7101a794 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_7101a794), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06b4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06a4);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007fa3c;
      uVar6 = DAT_7007fa38;
      uVar5 = DAT_7007fa34;
      uVar4 = DAT_7007fa30;
      uVar3 = DAT_7007fa2c;
      *puVar11 = DAT_7007fa28;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar8 = DAT_7007fa42;
      *(undefined2 *)(puVar11 + 6) = DAT_7007fa40;
      *(undefined1 *)((int)puVar11 + 0x1a) = uVar8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e590,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06b4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06a4);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar17 = (byte)(0x9f77fb4b >> iVar15) |
                 (byte)(-0x64c438cb << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar17 = (byte)(0x9b3bc735 >> (uVar16 & 0xff));
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
    DAT_7101a790 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_7101a794);
  }
                    /* WARNING: Could not recover jumptable at 0x71469b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7101a790)();
  return;
}


// =========================================================================
// Function: FUN_71469f10
// Entry: 0x71469f10 | Size: 356 bytes
// =========================================================================

void FUN_71469f10(void)

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
  if (((DAT_7101a79c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_7101a79c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06d4);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06c4);
      *(undefined1 *)(puVar9 + 10) = 1;
      uVar6 = DAT_7007fa58;
      uVar5 = DAT_7007fa54;
      uVar4 = DAT_7007fa50;
      uVar3 = DAT_7007fa4c;
      *puVar9 = DAT_7007fa48;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      uVar6 = DAT_7007fa6c;
      uVar5 = DAT_7007fa68;
      uVar4 = DAT_7007fa64;
      uVar3 = DAT_7007fa60;
      puVar9[5] = DAT_7007fa5c;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      puVar9[8] = uVar5;
      puVar9[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e5cc,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06d4);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06c4);
    if (*(char *)(iVar7 + 0x28) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x4fa333d1 >> iVar13) |
                 (byte)(-0x4a80dcaf << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xb57f2351 >> (uVar14 & 0xff));
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
    DAT_7101a798 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_7101a79c);
  }
                    /* WARNING: Could not recover jumptable at 0x71469f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7101a798)();
  return;
}


// =========================================================================
// Function: FUN_7146a30c
// Entry: 0x7146a30c | Size: 380 bytes
// =========================================================================

void FUN_7146a30c(undefined4 param_1)

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
  if (((DAT_7101a7a4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_7101a7a4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06f4);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06e4);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_7007fa84;
      uVar6 = DAT_7007fa80;
      uVar5 = DAT_7007fa7c;
      uVar4 = DAT_7007fa78;
      uVar3 = DAT_7007fa74;
      *puVar11 = DAT_7007fa70;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007fa9c;
      uVar6 = DAT_7007fa98;
      uVar5 = DAT_7007fa94;
      uVar4 = DAT_7007fa90;
      uVar3 = DAT_7007fa8c;
      puVar11[6] = DAT_7007fa88;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7146e61c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06f4);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c06e4);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xd317a5ef >> iVar15) |
                (byte)(-0x2a36e817 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd5c917e9 >> (uVar16 & 0xff));
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
    DAT_7101a7a0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_7101a7a4);
  }
                    /* WARNING: Could not recover jumptable at 0x7146a338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_7101a7a0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7146a7e0
// Entry: 0x7146a7e0 | Size: 360 bytes
// =========================================================================

void FUN_7146a7e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar2 = *(int *)(DAT_70c39074 + *(short *)(param_1 + 0x26) * 4);
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(byte *)(param_1 + 0x1e) & 0x10) >> 4 ^ 1;
  }
  *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) & 0xfe;
  iVar2 = FUN_714d8244(param_1);
  if (iVar2 != 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x3a) & 7;
  if (uVar7 == 0) {
    if (bVar1 == 1) {
      pcVar3 = &DAT_700c035b;
      goto LAB_7146a878;
    }
  }
  else if (bVar1 == 1) {
    pcVar3 = &DAT_700c035a;
LAB_7146a878:
    if (*pcVar3 == '\0') {
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x1c) & 0x8000) == 0) {
    if ((*(uint *)(param_1 + 0x1c) & 0x4000) != 0) {
      uVar4 = FUN_71463bc0(param_1);
      iVar2 = FUN_7148e22c(param_1,uVar4);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffff7fff;
        piVar5 = &DAT_7100cf00;
        goto LAB_7146a938;
      }
    }
  }
  else {
    iVar2 = FUN_7148e22c(param_1,param_2);
    if (iVar2 != 0) {
      piVar5 = &DAT_7100cf00;
      goto LAB_7146a938;
    }
  }
  if (uVar7 == 0) {
    iVar2 = *DAT_7100cefc;
    if (999 < iVar2) {
      return;
    }
    puVar6 = &DAT_7100d22c;
    piVar5 = DAT_7100cefc;
  }
  else {
    iVar2 = *DAT_7100cef8;
    if (0x1963 < iVar2) {
      return;
    }
    puVar6 = &DAT_7100e1cc;
    piVar5 = DAT_7100cef8;
  }
  puVar6[iVar2] = param_1;
LAB_7146a938:
  *piVar5 = *piVar5 + 1;
  return;
}


// =========================================================================
// Function: FUN_7146aaf0
// Entry: 0x7146aaf0 | Size: 1608 bytes
// =========================================================================

undefined4 FUN_7146aaf0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint extraout_r3;
  int *piVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar11 = DAT_70c39074;
  piVar16 = *(int **)(DAT_70c39074 + *(short *)((int)param_1 + 0x26) * 4);
  iVar5 = (**(code **)(*piVar16 + 8))(piVar16);
  cVar4 = '\0';
  if (iVar5 != 0) {
    cVar4 = DAT_70ffd31c;
  }
  if ((iVar5 != 0 && cVar4 != '\0') && ((*(byte *)((int)piVar16 + 0x29) & 1) == 0)) {
    if (param_1[0xd] != 0) {
      return 0;
    }
    if ((char)param_1[0xe] == '\0') {
      return 0;
    }
  }
  uVar6 = *(ushort *)((int)param_1 + 0x26) - 0x348c;
  if ((uVar6 < 0x1d) && ((1 << (uVar6 & 0xff) & 0x1c000001U) != 0)) {
    if (param_1[6] != 0) {
      param_1[7] = param_1[7] & 0xffff7f7fU | 0x80;
      *param_2 = 0x3f800000;
      return 1;
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    return 3;
  }
  if (((*(byte *)((int)param_1 + 0x3a) & 7) == 2) && (uVar6 = param_1[7], -1 < (int)uVar6)) {
    if ((0x3fffffff < uVar6) && (*DAT_7100cecc == '\0')) {
      return 0;
    }
    if ((uVar6 < 0x40000000) && (*DAT_7100ced0 == '\0')) {
      return 0;
    }
  }
  iVar7 = (**(code **)(*piVar16 + 0x14))(piVar16);
  if (iVar5 == 0) {
    uVar17 = 1;
    if ((iVar7 != 5) && (iVar11 = (**(code **)(*piVar16 + 0x14))(piVar16), iVar11 != 4)) {
      piVar16 = (int *)FUN_713c2bdc(0,0);
      if ((piVar16 == param_1) && (iVar11 = FUN_716ac9ac(), iVar11 != 0)) {
LAB_7146acec:
        *DAT_7100cec8 = (int)param_1;
        return 2;
      }
      uVar18 = FUN_713c2bdc(0,0);
      iVar11 = DAT_70b46c18;
      uVar6 = (uint)((ulonglong)uVar18 >> 0x20);
      if (((int *)uVar18 == param_1) && (*DAT_71000398 != '\0')) {
        iVar7 = *(int *)(DAT_70b46c18 + (uint)*(byte *)(DAT_70b46c18 + 0x57) * 0x210 + 400);
        iVar5 = FUN_713c2bdc(0,0);
        uVar6 = *(uint *)(*(int *)(iVar5 + 0x388) + 0xcc);
        if (((uVar6 & 0x1000000) == 0) || (-1 < *(char *)(iVar5 + 0x628))) {
          if (iVar7 == 3) {
            return 2;
          }
          uVar15 = (uint)*(ushort *)((int)param_1 + 0x26);
          uVar9 = extraout_r3;
          if (uVar15 != 0x1b0) {
            uVar9 = 0x1b5;
          }
          if (uVar15 == 0x1b0 || uVar15 == uVar9) {
            return 2;
          }
          if (*(char *)(iVar11 + 0x20) != '\0') {
            return 2;
          }
          if (iVar7 != 0) {
            *DAT_7100cec8 = (int)param_1;
            return 2;
          }
          if ((uVar6 & 0x4000) != 0) {
            return 2;
          }
          if (((uVar6 & 0x8000000) == 0) ||
             ((uVar15 - 0x1ae < 0x1f &&
              (uVar6 = 1, (1 << (uVar15 - 0x1ae & 0xff) & 0x41800001U) != 0)))) goto LAB_7146acec;
        }
      }
      if (param_1[6] == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 7) & 0x80) == 0) {
        if (*DAT_70ffd314 == 0) {
          return 0;
        }
        if (*(short *)((int)param_1 + 0x26) != 0) {
          return 0;
        }
      }
      uVar9 = (uint)*(byte *)((int)param_1 + 0x33);
      if (uVar9 != 0xd) {
        uVar6 = *DAT_70b46f00;
      }
      if ((uVar9 != 0xd && uVar6 != uVar9) && ((*(byte *)((int)param_1 + 0x3a) & 7) == 2)) {
        return 0;
      }
      iVar11 = FUN_713b4dec(param_1);
      if (iVar11 == 0) {
        return 2;
      }
      iVar11 = FUN_713b5208(param_1);
      if (iVar11 != 0) {
        return 2;
      }
      if ((param_1[7] & 0x40U) == 0) {
        return 1;
      }
      param_1[7] = param_1[7] & 0xffff7fff;
      piVar16 = (int *)(param_1[5] + 0x30);
      if (param_1[5] == 0) {
        piVar16 = param_1 + 1;
      }
      uVar17 = FUN_71463a2c(DAT_7100ceec,piVar16);
      FUN_7146a7e0(param_1,uVar17);
      return 0;
    }
    goto LAB_7146af64;
  }
  if (iVar7 != 3) {
    uVar17 = 1;
    if ((param_1[7] & 0x80000U) != 0) {
      if (param_1[6] == 0) {
        return 0;
      }
      if ((param_1[7] & 0x80U) == 0) {
        if (*DAT_70ffd314 == 0) {
          return 0;
        }
        if (*(short *)((int)param_1 + 0x26) != 0) {
          return 0;
        }
      }
      iVar11 = FUN_713b4dec(param_1);
      if (iVar11 == 0) {
        return 2;
      }
      iVar11 = FUN_713b5208(param_1);
      if (iVar11 != 0) {
        return 2;
      }
      if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
        return 1;
      }
      piVar16 = (int *)(param_1[5] + 0x30);
      if (param_1[5] == 0) {
        piVar16 = param_1 + 1;
      }
      FUN_71468920(&uStack_30,piVar16,DAT_7100ceec);
      uVar17 = FUN_71ba21e8(uStack_2c,uStack_2c);
      uVar14 = FUN_71ba21e8(uStack_30,uStack_30);
      uVar17 = FUN_71ba0b38(uVar14,uVar17);
      uVar14 = FUN_71ba21e8(uStack_28,uStack_28);
      FUN_71ba0b38(uVar14,uVar17);
      uVar17 = imp_sqrtf();
      FUN_7148e22c(param_1,uVar17);
      param_1[7] = param_1[7] & 0xffff7fff;
      return 0;
    }
    goto LAB_7146af64;
  }
  pbVar8 = (byte *)(**(code **)(*piVar16 + 0x18))(piVar16);
  bVar1 = *pbVar8;
  sVar3 = *(short *)(pbVar8 + 2);
  bVar2 = *DAT_70b46ecc;
  if (pbVar8[1] < bVar1) {
    if (bVar2 < bVar1) {
LAB_7146ae1c:
      if (pbVar8[1] <= bVar2) goto LAB_7146ae48;
    }
    uVar17 = 1;
    if ((sVar3 != -1) && (*(int *)(*(int *)(iVar11 + sVar3 * 4) + 0x34) != 0)) {
      *(undefined1 *)((int)piVar16 + 0x22) = 0xff;
    }
  }
  else {
    if (bVar1 <= bVar2) goto LAB_7146ae1c;
LAB_7146ae48:
    if ((sVar3 == -1) || (*(int *)(*(int *)(iVar11 + sVar3 * 4) + 0x34) != 0)) {
      (**(code **)(*param_1 + 0x24))(param_1);
      return 0;
    }
    uVar17 = 0;
  }
LAB_7146af64:
  if ((*(byte *)((int)param_1 + 0x33) != 0xd) &&
     (*DAT_70b46f00 != (uint)*(byte *)((int)param_1 + 0x33))) {
    return 0;
  }
  uVar10 = FUN_714635fc(param_1);
  *param_2 = uVar10;
  uVar14 = DAT_700c0368;
  iVar11 = FUN_71ba2d70(uVar10,DAT_700c0368);
  if (iVar11 != 0) {
    uVar12 = FUN_71ba21e8(*(undefined4 *)(DAT_70b46c18 + 0xec),piVar16[0xc]);
    iVar11 = FUN_71ba2d70(uVar12,uVar14);
    uVar13 = FUN_71ba0b38(uVar12,0x41a00000);
    if ((iVar11 != 0) && (iVar11 = FUN_71ba2d70(uVar13,uVar10), iVar11 != 0)) {
      uVar14 = FUN_71ba240c(uVar12,uVar14);
      uVar10 = FUN_71ba0b38(uVar10,uVar14);
      *param_2 = uVar10;
    }
  }
  uVar17 = FUN_7146b664(param_1,piVar16,uVar10,uVar17);
  return uVar17;
}


// =========================================================================
// Function: FUN_7146b664
// Entry: 0x7146b664 | Size: 1256 bytes
// =========================================================================

undefined4 FUN_7146b664(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  
  uVar7 = param_1[7];
  if (-1 < (int)uVar7) {
    if ((0x3fffffff < uVar7) && (*DAT_7100cecc == '\0')) {
      return 0;
    }
    if ((uVar7 < 0x40000000) && (*DAT_7100ced0 == '\0')) {
      return 0;
    }
  }
  if (DAT_70ffd31c != '\0') {
    if ((param_1[0xd] != 0) && ((*(byte *)(param_2 + 0x29) & 1) == 0)) {
      return 0;
    }
    if (((char)param_1[0xe] == '\0') && ((*(byte *)(param_2 + 0x29) & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = FUN_714644c0(param_1,param_2);
  uVar2 = FUN_71ba21e8(uVar1,0x3f000000);
  iVar3 = FUN_71ba2d10(uVar2,0x41700000);
  uVar5 = 0x41700000;
  if (iVar3 != 0) {
    uVar5 = uVar2;
  }
  uVar2 = FUN_71ba21e8(uVar1,0x3e19999a);
  iVar3 = FUN_71ba2d10(uVar2,uVar5);
  iVar4 = FUN_71ba2d70(uVar2,0x42c80000);
  if (iVar4 != 0) {
    uVar2 = 0x42c80000;
  }
  if (iVar3 != 0) {
    uVar2 = uVar5;
  }
  uVar5 = FUN_71ba21e8(*DAT_71014764,uVar2);
  iVar3 = *(int *)(param_2 + 0x34);
  if (iVar3 == 0) {
    iVar4 = param_1[0xd];
    if (iVar4 != 0) {
      uVar2 = FUN_71ba240c(uVar1,uVar5);
      iVar6 = FUN_71ba2d70(uVar2,param_3);
      if ((iVar6 != 0) && (1 < *(byte *)(iVar4 + 0x38))) {
        piVar8 = (int *)*DAT_7101475c;
        uVar5 = 3;
        goto joined_r0x7146b89c;
      }
    }
  }
  else {
    uVar2 = FUN_71ba240c(uVar1,uVar5);
    iVar4 = FUN_71ba2d30(uVar2,param_3);
    if (iVar4 == 0) {
      if ((param_1[6] == 0) && ((**(code **)(*param_1 + 0x20))(param_1), param_1[6] == 0)) {
        return 0;
      }
      if ((*(byte *)(param_1 + 7) & 0x80) == 0) {
        return 0;
      }
      iVar3 = FUN_713b4dec(param_1);
      if ((iVar3 == 0) || (iVar3 = FUN_713b5208(param_1), iVar3 != 0)) {
        *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfe;
        return 2;
      }
      if ((char)param_1[0xe] == '\0') {
        bVar10 = false;
      }
      else {
        uVar5 = FUN_71464344(param_1);
        iVar3 = FUN_71ba2d50(uVar5,0);
        bVar10 = iVar3 != 0;
      }
      iVar3 = param_1[0xd];
      uVar9 = param_1[7] & 0xffff7fffU | 0x8000;
      uVar7 = param_1[7] & 0xffff7fffU;
      if (*(char *)(param_2 + 0x22) != -1) {
        uVar7 = uVar9;
      }
      if (bVar10) {
        uVar7 = uVar9;
      }
      param_1[7] = uVar7;
      if (iVar3 == 0) {
        return 1;
      }
      if (*(char *)(param_2 + 0x22) == -1) {
        *(char *)(iVar3 + 0x39) = *(char *)(iVar3 + 0x39) + '\x01';
        iVar3 = param_1[0xd];
      }
      if (*(byte *)(iVar3 + 0x38) < 2) {
        return 1;
      }
      piVar8 = (int *)*DAT_7101475c;
      uVar5 = 0;
joined_r0x7146b89c:
      if (piVar8 == (int *)0x7100cebc) {
        return uVar5;
      }
      *piVar8 = (int)param_1;
      piVar8 = DAT_7101475c;
      *(undefined4 *)(*DAT_7101475c + 4) = param_3;
      *piVar8 = *piVar8 + 8;
      return uVar5;
    }
  }
  uVar7 = param_1[7];
  if ((uVar7 & 0x80000) != 0) {
    return 0;
  }
  iVar4 = FUN_71ba2d70(uVar1,param_3);
  if (iVar4 == 0 || iVar3 == 0) {
    uVar5 = FUN_71ba0b38(param_3,0xc2480000);
    iVar3 = FUN_71ba2d50(uVar5,uVar1);
    if (iVar3 == 0) {
      if (param_4 == 0 || (uVar7 & 0x80) == 0) {
        return 0;
      }
      if (param_1[6] != 0) {
        return 3;
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      return 3;
    }
  }
  else {
    if (param_1[6] == 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
      if (param_1[6] == 0) {
        return 0;
      }
      uVar7 = param_1[7];
    }
    if ((uVar7 & 0x80) != 0) {
      iVar3 = FUN_713b4dec(param_1);
      if ((iVar3 == 0) || (iVar3 = FUN_713b5208(param_1), iVar3 != 0)) {
        *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfe;
      }
      else {
        iVar3 = param_1[0xd];
        param_1[7] = param_1[7] | 0x8000;
        if ((iVar3 != 0) && (DAT_70ffd31c == '\0')) {
          uVar1 = FUN_71ba240c(uVar1,param_3);
          uVar5 = FUN_71ba13e0(uVar1,uVar5);
          iVar4 = FUN_71ba2d70(uVar5,0x3f800000);
          if (iVar4 != 0) {
            uVar5 = 0x3f800000;
          }
          uVar5 = FUN_71ba240c(0x3f800000,uVar5);
          FUN_714640a0(iVar3,uVar5);
          iVar3 = param_1[0xd];
        }
        if ((iVar3 == 0) || (*(byte *)(iVar3 + 0x38) < 2)) {
          FUN_7146a7e0(param_1,param_3);
        }
        else if ((int *)*DAT_7101475c != (int *)0x7100cebc) {
          *(int *)*DAT_7101475c = (int)param_1;
          piVar8 = DAT_7101475c;
          *(undefined4 *)(*DAT_7101475c + 4) = param_3;
          *piVar8 = *piVar8 + 8;
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_7146bfdc
// Entry: 0x7146bfdc | Size: 676 bytes
// =========================================================================

uint FUN_7146bfdc(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  
  iVar8 = DAT_70c39074;
  puVar10 = &DAT_70c39074;
  piVar11 = *(int **)(DAT_70c39074 + *(short *)((int)param_1 + 0x26) * 4);
  puVar4 = (undefined4 *)(uint)*(byte *)((int)param_1 + 0x33);
  if (puVar4 != (undefined4 *)&DAT_0000000d) {
    puVar10 = (undefined4 *)*DAT_70b46f00;
  }
  if (puVar4 != (undefined4 *)&DAT_0000000d && puVar10 != puVar4) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar11 + 0x14))(piVar11);
  if (iVar5 != 3) {
    iVar8 = (**(code **)(*piVar11 + 0x14))(piVar11);
    uVar12 = 1;
    if (iVar8 == 6) {
      iVar8 = FUN_713b97dc(param_1);
      if (iVar8 == 0) {
        return 0;
      }
      uVar9 = FUN_713b5208(param_1);
      return uVar9 ^ 1;
    }
    goto LAB_7146c124;
  }
  pbVar6 = (byte *)(**(code **)(*piVar11 + 0x18))(piVar11);
  bVar1 = *pbVar6;
  sVar3 = *(short *)(pbVar6 + 2);
  bVar2 = *DAT_70b46ecc;
  if (pbVar6[1] < bVar1) {
    if (bVar2 < bVar1) {
LAB_7146c0c4:
      if (pbVar6[1] <= bVar2) goto LAB_7146c0f0;
    }
    uVar12 = 1;
    if ((sVar3 != -1) && (*(int *)(*(int *)(iVar8 + sVar3 * 4) + 0x34) != 0)) {
      *(undefined1 *)((int)piVar11 + 0x22) = 0xff;
    }
  }
  else {
    if (bVar1 <= bVar2) goto LAB_7146c0c4;
LAB_7146c0f0:
    if ((sVar3 == -1) || (*(int *)(*(int *)(iVar8 + sVar3 * 4) + 0x34) != 0)) {
      (**(code **)(*param_1 + 0x24))(param_1);
      return 0;
    }
    uVar12 = 0;
  }
LAB_7146c124:
  uVar7 = FUN_714635fc(param_1);
  *param_2 = uVar7;
  if (*(char *)((int)param_1 + 0x39) < '\x01') {
    uVar9 = FUN_7146b664(param_1,piVar11,uVar7,uVar12);
    if ((uVar9 == 1) && (uVar9 = 1, 1 < *(byte *)(param_1 + 0xe))) {
      iVar8 = param_1[0xd];
      if ((iVar8 != 0) && (*(char *)((int)piVar11 + 0x22) == -1)) {
        *(char *)(iVar8 + 0x39) = *(char *)(iVar8 + 0x39) + '\x01';
      }
      if ((int *)*DAT_7101475c == (int *)0x7100cebc) {
        return 0;
      }
      uVar12 = *param_2;
      *(int *)*DAT_7101475c = (int)param_1;
      piVar11 = DAT_7101475c;
      *(undefined4 *)(*DAT_7101475c + 4) = uVar12;
      *piVar11 = *piVar11 + 8;
      return 0;
    }
  }
  else {
    iVar8 = param_1[0xd];
    if (iVar8 != 0) {
      *(char *)(iVar8 + 0x39) = *(char *)(iVar8 + 0x39) + '\x01';
    }
    if (*(byte *)(param_1 + 0xe) < 2) {
      *(undefined1 *)((int)param_1 + 0x39) = 0;
    }
    else if ((int *)*DAT_7101475c != (int *)0x7100cebc) {
      uVar12 = *param_2;
      *(int *)*DAT_7101475c = (int)param_1;
      piVar11 = DAT_7101475c;
      *(undefined4 *)(*DAT_7101475c + 4) = uVar12;
      *piVar11 = *piVar11 + 8;
    }
    uVar9 = 3;
    if (param_1[6] == 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
      return 3;
    }
  }
  return uVar9;
}


// =========================================================================
// Function: FUN_7146c428
// Entry: 0x7146c428 | Size: 192 bytes
// =========================================================================

bool FUN_7146c428(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_71ba1b94(param_1 * 0x32 + -0xf87);
  puVar1 = DAT_7100ceec;
  uVar3 = FUN_71ba240c(uVar2,*DAT_7100ceec);
  uVar2 = FUN_71ba21e8(uVar3,uVar3);
  uVar2 = FUN_71ba0b38(uVar2,0);
  iVar4 = FUN_71ba2d10(uVar2,0x461c4000);
  if (iVar4 != 0) {
    return true;
  }
  uVar2 = FUN_71ba1b94(param_2 * 0x32 + -0xf87);
  uVar2 = FUN_71ba240c(uVar2,puVar1[1]);
  uVar5 = *DAT_7100cee8;
  uVar2 = imp_atan2f(uVar3 ^ 0x80000000,uVar2);
  FUN_71ba240c(uVar2,uVar5);
  uVar3 = FUN_7133b360();
  iVar4 = FUN_71ba2d10(uVar3 & 0x7fffffff,0x3eb851ec);
  return iVar4 != 0;
}


// =========================================================================
// Function: FUN_7146c674
// Entry: 0x7146c674 | Size: 280 bytes
// =========================================================================

void FUN_7146c674(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 auStack_3c [2];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  
  uVar4 = DAT_70c39074;
  uVar3 = DAT_70b41f88;
  uVar2 = DAT_70b41f84;
  uVar1 = DAT_70b41f74;
  if ((int *)*param_1 != (int *)0x0) {
    piVar7 = (int *)*param_1;
    do {
      piVar5 = (int *)piVar7[1];
      if (piVar5 != (int *)0x0) {
        HintPreloadData(piVar5);
        HintPreloadData(*piVar5);
      }
      iVar6 = *piVar7;
      if (*DAT_70b88b84 != *(short *)(iVar6 + 0x30)) {
        *(short *)(iVar6 + 0x30) = *DAT_70b88b84;
        auStack_3c[0] = 0;
        DAT_7100cf04 = DAT_7100cf04 + 1;
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffdffff;
        iVar6 = FUN_7146aaf0(iVar6,auStack_3c,param_3,param_4,uVar2,uVar1,param_2,auStack_28,uVar4,
                             uVar3,auStack_30,auStack_34);
                    /* WARNING: Could not recover jumptable at 0x7146c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_7146c794 + *(int *)(&DAT_7146c794 + iVar6 * 4)))();
        return;
      }
      piVar7 = piVar5;
    } while (piVar5 != (int *)0x0);
  }
  return;
}


// =========================================================================
// Function: FUN_7146cd3c
// Entry: 0x7146cd3c | Size: 1076 bytes
// =========================================================================

uint * FUN_7146cd3c(uint *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar9;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint *extraout_r1_03;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  
  iVar2 = FUN_713e6434();
  puVar7 = DAT_7100039c;
  cVar1 = DAT_700c035d;
  puVar12 = param_2;
  if ((int)param_2 < 0xa0) {
    puVar12 = param_1;
  }
  if (((int)puVar12 < 0xa0) && (-1 < (int)((uint)param_2 | (uint)param_1))) {
    piVar4 = (int *)FUN_713e63c8(param_1);
    piVar8 = (int *)0x0;
    if (DAT_700c035c != '\0') {
      piVar8 = piVar4;
    }
    bVar14 = DAT_700c035d == '\0';
    *puVar7 = piVar8;
    if (bVar14) {
      piVar3 = (int *)0x0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
    }
    else {
      piVar3 = (int *)(iVar2 + 8);
      puVar7[1] = piVar3;
      puVar7[2] = iVar2;
      puVar7[3] = iVar2 + 4;
      puVar7[4] = piVar4 + 1;
    }
    puVar12 = DAT_70b46f00;
    if (piVar8 != (int *)0x0) {
      param_1 = (uint *)*piVar8;
    }
    if (piVar8 != (int *)0x0 && param_1 != (uint *)0x0) {
      do {
        puVar5 = (undefined4 *)param_1[1];
        if (puVar5 != (undefined4 *)0x0) {
          HintPreloadData(puVar5);
          HintPreloadData(*puVar5);
        }
        uVar11 = *param_1;
        if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
          FUN_713b8280(uVar11);
          uVar6 = (uint)*(byte *)(uVar11 + 0x33);
          uVar9 = extraout_r1;
          if (uVar6 != 0xd) {
            uVar9 = *puVar12;
          }
          if (uVar6 == 0xd || uVar9 == uVar6) {
            *DAT_710003a0 = uVar11;
            DAT_710003a0 = DAT_710003a0 + 1;
          }
        }
        param_1 = (uint *)param_1[1];
      } while (param_1 != (uint *)0x0);
      piVar3 = (int *)puVar7[1];
      param_1 = (uint *)0x0;
    }
    if (piVar3 == (int *)0x0) goto LAB_7146cf74;
  }
  else {
    *DAT_7100039c = 0;
    if (cVar1 == '\0') {
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      goto LAB_7146cf74;
    }
    piVar3 = (int *)(iVar2 + 8);
    puVar7[1] = piVar3;
    puVar7[2] = iVar2;
    puVar7[3] = iVar2 + 4;
    puVar7[4] = 0;
  }
  puVar13 = DAT_70b46f00;
  for (puVar12 = (uint *)*piVar3; param_1 = (uint *)0x0, puVar12 != (uint *)0x0;
      puVar12 = (uint *)puVar12[1]) {
    puVar5 = (undefined4 *)puVar12[1];
    if (puVar5 != (undefined4 *)0x0) {
      HintPreloadData(puVar5);
      HintPreloadData(*puVar5);
    }
    uVar11 = *puVar12;
    if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
      FUN_713b8280(uVar11);
      uVar6 = (uint)*(byte *)(uVar11 + 0x33);
      uVar9 = extraout_r1_00;
      if (uVar6 != 0xd) {
        uVar9 = *puVar13;
      }
      if (uVar6 == 0xd || uVar9 == uVar6) {
        *DAT_710003a0 = uVar11;
        DAT_710003a0 = DAT_710003a0 + 1;
      }
    }
  }
LAB_7146cf74:
  puVar12 = DAT_70b46f00;
  piVar3 = (int *)puVar7[2];
  if (piVar3 != (int *)0x0) {
    param_1 = (uint *)*piVar3;
  }
  puVar13 = param_1;
  if (piVar3 != (int *)0x0 && param_1 != (uint *)0x0) {
    do {
      puVar5 = (undefined4 *)puVar13[1];
      if (puVar5 != (undefined4 *)0x0) {
        HintPreloadData(puVar5);
        HintPreloadData(*puVar5);
      }
      uVar11 = *puVar13;
      if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
        FUN_713b8280(uVar11);
        uVar6 = (uint)*(byte *)(uVar11 + 0x33);
        uVar9 = extraout_r1_01;
        if (uVar6 != 0xd) {
          uVar9 = *puVar12;
        }
        if (uVar6 == 0xd || uVar9 == uVar6) {
          *DAT_710003a0 = uVar11;
          DAT_710003a0 = DAT_710003a0 + 1;
        }
      }
      puVar10 = puVar13 + 1;
      param_1 = (uint *)0x0;
      puVar13 = (uint *)*puVar10;
    } while ((uint *)*puVar10 != (uint *)0x0);
  }
  puVar12 = DAT_70b46f00;
  piVar3 = (int *)puVar7[3];
  if (piVar3 != (int *)0x0) {
    param_1 = (uint *)*piVar3;
  }
  puVar13 = param_1;
  if (piVar3 != (int *)0x0 && param_1 != (uint *)0x0) {
    do {
      puVar5 = (undefined4 *)puVar13[1];
      if (puVar5 != (undefined4 *)0x0) {
        HintPreloadData(puVar5);
        HintPreloadData(*puVar5);
      }
      uVar11 = *puVar13;
      if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
        FUN_713b8280(uVar11);
        uVar6 = (uint)*(byte *)(uVar11 + 0x33);
        uVar9 = extraout_r1_02;
        if (uVar6 != 0xd) {
          uVar9 = *puVar12;
        }
        if (uVar6 == 0xd || uVar9 == uVar6) {
          *DAT_710003a0 = uVar11;
          DAT_710003a0 = DAT_710003a0 + 1;
        }
      }
      puVar10 = puVar13 + 1;
      param_1 = (uint *)0x0;
      puVar13 = (uint *)*puVar10;
    } while ((uint *)*puVar10 != (uint *)0x0);
  }
  puVar13 = DAT_70b46f00;
  puVar12 = (uint *)puVar7[4];
  if (puVar12 != (uint *)0x0) {
    param_1 = (uint *)*puVar12;
  }
  if (puVar12 != (uint *)0x0 && param_1 != (uint *)0x0) {
    do {
      puVar7 = (undefined4 *)param_1[1];
      puVar12 = (uint *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        HintPreloadData(puVar7);
        puVar12 = (uint *)*puVar7;
        HintPreloadData(puVar12);
      }
      uVar11 = *param_1;
      if ((uVar11 != 0) && (puVar12 = (uint *)FUN_713b8224(uVar11), puVar12 == (uint *)0x0)) {
        FUN_713b8280(uVar11);
        puVar12 = (uint *)(uint)*(byte *)(uVar11 + 0x33);
        puVar10 = extraout_r1_03;
        if (puVar12 != (uint *)&DAT_0000000d) {
          puVar10 = (uint *)*puVar13;
        }
        if (puVar12 == (uint *)&DAT_0000000d || puVar10 == puVar12) {
          *DAT_710003a0 = uVar11;
          puVar12 = DAT_710003a0 + 1;
          DAT_710003a0 = puVar12;
        }
      }
      param_1 = (uint *)param_1[1];
    } while (param_1 != (uint *)0x0);
  }
  return puVar12;
}


// =========================================================================
// Function: FUN_7146d5b8
// Entry: 0x7146d5b8 | Size: 1156 bytes
// =========================================================================

uint * FUN_7146d5b8(uint *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar9;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint *extraout_r1_03;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  
  iVar2 = FUN_713e6434();
  puVar7 = DAT_7100039c;
  cVar1 = DAT_700c035d;
  puVar12 = param_2;
  if ((int)param_2 < 0xa0) {
    puVar12 = param_1;
  }
  if (((int)puVar12 < 0xa0) && (-1 < (int)((uint)param_2 | (uint)param_1))) {
    piVar4 = (int *)FUN_713e63c8(param_1);
    piVar8 = (int *)0x0;
    if (DAT_700c035c != '\0') {
      piVar8 = piVar4;
    }
    bVar14 = DAT_700c035d == '\0';
    *puVar7 = piVar8;
    if (bVar14) {
      piVar3 = (int *)0x0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
    }
    else {
      piVar3 = (int *)(iVar2 + 8);
      puVar7[1] = piVar3;
      puVar7[2] = iVar2;
      puVar7[3] = iVar2 + 4;
      puVar7[4] = piVar4 + 1;
    }
    puVar12 = DAT_70b46f00;
    if (piVar8 != (int *)0x0) {
      param_1 = (uint *)*piVar8;
    }
    if (piVar8 != (int *)0x0 && param_1 != (uint *)0x0) {
      do {
        puVar5 = (undefined4 *)param_1[1];
        if (puVar5 != (undefined4 *)0x0) {
          HintPreloadData(puVar5);
          HintPreloadData(*puVar5);
        }
        uVar11 = *param_1;
        if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
          FUN_713b8280(uVar11);
          uVar6 = (uint)*(byte *)(uVar11 + 0x33);
          uVar9 = extraout_r1;
          if (uVar6 != 0xd) {
            uVar9 = *puVar12;
          }
          if ((uVar6 == 0xd || uVar9 == uVar6) && (iVar2 = FUN_713b97dc(uVar11), iVar2 != 0)) {
            *DAT_710003a0 = uVar11;
            DAT_710003a0 = DAT_710003a0 + 1;
          }
        }
        param_1 = (uint *)param_1[1];
      } while (param_1 != (uint *)0x0);
      piVar3 = (int *)puVar7[1];
      param_1 = (uint *)0x0;
    }
    if (piVar3 == (int *)0x0) goto LAB_7146d810;
  }
  else {
    *DAT_7100039c = 0;
    if (cVar1 == '\0') {
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      goto LAB_7146d810;
    }
    piVar3 = (int *)(iVar2 + 8);
    puVar7[1] = piVar3;
    puVar7[2] = iVar2;
    puVar7[3] = iVar2 + 4;
    puVar7[4] = 0;
  }
  puVar13 = DAT_70b46f00;
  for (puVar12 = (uint *)*piVar3; param_1 = (uint *)0x0, puVar12 != (uint *)0x0;
      puVar12 = (uint *)puVar12[1]) {
    puVar5 = (undefined4 *)puVar12[1];
    if (puVar5 != (undefined4 *)0x0) {
      HintPreloadData(puVar5);
      HintPreloadData(*puVar5);
    }
    uVar11 = *puVar12;
    if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
      FUN_713b8280(uVar11);
      uVar6 = (uint)*(byte *)(uVar11 + 0x33);
      uVar9 = extraout_r1_00;
      if (uVar6 != 0xd) {
        uVar9 = *puVar13;
      }
      if ((uVar6 == 0xd || uVar9 == uVar6) && (iVar2 = FUN_713b97dc(uVar11), iVar2 != 0)) {
        *DAT_710003a0 = uVar11;
        DAT_710003a0 = DAT_710003a0 + 1;
      }
    }
  }
LAB_7146d810:
  puVar12 = DAT_70b46f00;
  piVar3 = (int *)puVar7[2];
  if (piVar3 != (int *)0x0) {
    param_1 = (uint *)*piVar3;
  }
  puVar13 = param_1;
  if (piVar3 != (int *)0x0 && param_1 != (uint *)0x0) {
    do {
      puVar5 = (undefined4 *)puVar13[1];
      if (puVar5 != (undefined4 *)0x0) {
        HintPreloadData(puVar5);
        HintPreloadData(*puVar5);
      }
      uVar11 = *puVar13;
      if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
        FUN_713b8280(uVar11);
        uVar6 = (uint)*(byte *)(uVar11 + 0x33);
        uVar9 = extraout_r1_01;
        if (uVar6 != 0xd) {
          uVar9 = *puVar12;
        }
        if ((uVar6 == 0xd || uVar9 == uVar6) && (iVar2 = FUN_713b97dc(uVar11), iVar2 != 0)) {
          *DAT_710003a0 = uVar11;
          DAT_710003a0 = DAT_710003a0 + 1;
        }
      }
      puVar10 = puVar13 + 1;
      param_1 = (uint *)0x0;
      puVar13 = (uint *)*puVar10;
    } while ((uint *)*puVar10 != (uint *)0x0);
  }
  puVar12 = DAT_70b46f00;
  piVar3 = (int *)puVar7[3];
  if (piVar3 != (int *)0x0) {
    param_1 = (uint *)*piVar3;
  }
  puVar13 = param_1;
  if (piVar3 != (int *)0x0 && param_1 != (uint *)0x0) {
    do {
      puVar5 = (undefined4 *)puVar13[1];
      if (puVar5 != (undefined4 *)0x0) {
        HintPreloadData(puVar5);
        HintPreloadData(*puVar5);
      }
      uVar11 = *puVar13;
      if ((uVar11 != 0) && (iVar2 = FUN_713b8224(uVar11), iVar2 == 0)) {
        FUN_713b8280(uVar11);
        uVar6 = (uint)*(byte *)(uVar11 + 0x33);
        uVar9 = extraout_r1_02;
        if (uVar6 != 0xd) {
          uVar9 = *puVar12;
        }
        if ((uVar6 == 0xd || uVar9 == uVar6) && (iVar2 = FUN_713b97dc(uVar11), iVar2 != 0)) {
          *DAT_710003a0 = uVar11;
          DAT_710003a0 = DAT_710003a0 + 1;
        }
      }
      puVar10 = puVar13 + 1;
      param_1 = (uint *)0x0;
      puVar13 = (uint *)*puVar10;
    } while ((uint *)*puVar10 != (uint *)0x0);
  }
  puVar13 = DAT_70b46f00;
  puVar12 = (uint *)puVar7[4];
  if (puVar12 != (uint *)0x0) {
    param_1 = (uint *)*puVar12;
  }
  if (puVar12 != (uint *)0x0 && param_1 != (uint *)0x0) {
    do {
      puVar7 = (undefined4 *)param_1[1];
      puVar12 = (uint *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        HintPreloadData(puVar7);
        puVar12 = (uint *)*puVar7;
        HintPreloadData(puVar12);
      }
      uVar11 = *param_1;
      if ((uVar11 != 0) && (puVar12 = (uint *)FUN_713b8224(uVar11), puVar12 == (uint *)0x0)) {
        FUN_713b8280(uVar11);
        puVar12 = (uint *)(uint)*(byte *)(uVar11 + 0x33);
        puVar10 = extraout_r1_03;
        if (puVar12 != (uint *)&DAT_0000000d) {
          puVar10 = (uint *)*puVar13;
        }
        if (puVar12 == (uint *)&DAT_0000000d || puVar10 == puVar12) {
          iVar2 = FUN_713b97dc(uVar11);
          puVar12 = (uint *)0x0;
          if (iVar2 != 0) {
            *DAT_710003a0 = uVar11;
            puVar12 = DAT_710003a0 + 1;
            DAT_710003a0 = puVar12;
          }
        }
      }
      param_1 = (uint *)param_1[1];
    } while (param_1 != (uint *)0x0);
  }
  return puVar12;
}


// =========================================================================
// Function: FUN_7147338c
// Entry: 0x7147338c | Size: 372 bytes
// =========================================================================

void FUN_7147338c(undefined4 param_1)

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
  if (((DAT_710ea850 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ea850), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0774);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0764);
      *(undefined1 *)(puVar11 + 6) = 1;
      uVar7 = DAT_7007fb04;
      uVar6 = DAT_7007fb00;
      uVar5 = DAT_7007fafc;
      uVar4 = DAT_7007faf8;
      uVar3 = DAT_7007faf4;
      *puVar11 = DAT_7007faf0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71475b60,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0774);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0764);
    if (*(char *)(iVar9 + 0x18) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x19cfe32d >> iVar15) |
                (byte)(-0x266c1045 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xd993efbb >> (uVar16 & 0xff));
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
    DAT_710ea84c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ea850);
  }
                    /* WARNING: Could not recover jumptable at 0x714733b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ea84c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71473798
// Entry: 0x71473798 | Size: 552 bytes
// =========================================================================

void FUN_71473798(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  DataMemoryBarrier(0xb);
  if ((DAT_710ea858 & 1) == 0) {
    iVar5 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ea858);
    if (iVar5 != 0) {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0794);
      if (*pcVar6 == '\0') {
        iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0784);
        *(undefined1 *)(iVar5 + 0x143) = 1;
        imp___aeabi_memcpy8(iVar5,&DAT_7007fb08,0x143);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71475b98,iVar5,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0794);
        *puVar7 = 1;
      }
      iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c0784);
      if (*(char *)(iVar5 + 0x143) != '\0') {
        uVar8 = 0;
        uVar9 = 0;
        bVar3 = 0;
        do {
          iVar10 = (uVar9 & 7) * 8;
          uVar11 = iVar10 - 0x20;
          bVar4 = (byte)(0x81e15bed >> iVar10) |
                  (byte)(0x7fd3adb1 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar11) {
            bVar4 = (byte)(0x7fd3adb1 >> (uVar11 & 0xff));
          }
          *(byte *)(iVar5 + uVar9) = *(byte *)(iVar5 + uVar9) ^ bVar4;
          bVar12 = 0xfffffffe < uVar9;
          uVar11 = uVar8 >> 1;
          uVar1 = (uint)bVar3;
          uVar2 = uVar9 >> 1;
          uVar8 = uVar8 + bVar12;
          uVar9 = uVar9 + 1;
          bVar3 = bVar3 ^ bVar12;
        } while (uVar11 == 0 && (0xa0 < (uVar1 << 0x1f | uVar2)) <= uVar11);
        *(undefined1 *)(iVar5 + 0x143) = 0;
      }
      DAT_710ea854 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar5,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710ea858);
    }
  }
  (*DAT_710ea854)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15,param_16);
  return;
}


// =========================================================================
// Function: FUN_71474080
// Entry: 0x71474080 | Size: 588 bytes
// =========================================================================

void FUN_71474080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

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
  if ((DAT_710ea868 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ea868);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07d4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07c4);
        *(undefined1 *)(iVar3 + 0x166) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007fc78,0x166);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71475c38,iVar3,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07d4);
        *puVar5 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07c4);
      if (*(char *)(iVar3 + 0x166) != '\0') {
        uVar6 = 0;
        uVar10 = 0;
        do {
          iVar8 = (uVar6 & 7) * 8;
          uVar9 = iVar8 - 0x20;
          bVar7 = (byte)(0xc59f19cf >> iVar8) |
                  (byte)(-0x2450bc7d << ((uVar6 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar9) {
            bVar7 = (byte)(0xdbaf4383 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar6) = *(byte *)(iVar3 + uVar6) ^ bVar7;
          bVar11 = 0xfffffffe < uVar6;
          bVar1 = uVar10 == 0;
          bVar2 = (0x164 < uVar6) <= uVar10;
          uVar6 = uVar6 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x166) = 0;
      }
      DAT_710ea864 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710ea868);
    }
  }
  (*DAT_710ea864)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
  return;
}


// =========================================================================
// Function: FUN_71474580
// Entry: 0x71474580 | Size: 616 bytes
// =========================================================================

void FUN_71474580(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  
  iVar11 = DAT_710ea848 + param_1 * 0x40;
  uVar1 = FUN_71ba0b38(*(uint *)(iVar11 + 0x20) & 0x7fffffff,*(uint *)(iVar11 + 0x18) & 0x7fffffff);
  uVar10 = *(undefined4 *)(iVar11 + 0xc);
  uVar2 = FUN_71ba240c(uVar10,uVar1);
  uVar3 = FUN_71ba13e0(uVar2,0x42480000);
  FUN_71ba0b38(uVar3,0x42a00000);
  imp_floorf();
  iVar4 = FUN_71ba17bc();
  uVar3 = FUN_71ba0b38(*(uint *)(iVar11 + 0x24) & 0x7fffffff,*(uint *)(iVar11 + 0x1c) & 0x7fffffff);
  uVar13 = *(undefined4 *)(iVar11 + 0x10);
  uVar5 = FUN_71ba240c(uVar13,uVar3);
  uVar6 = FUN_71ba13e0(uVar5,0x42480000);
  FUN_71ba0b38(uVar6,0x42a00000);
  imp_floorf();
  iVar7 = FUN_71ba17bc();
  uVar1 = FUN_71ba0b38(uVar1,uVar10);
  uVar6 = FUN_71ba13e0(uVar1,0x42480000);
  FUN_71ba0b38(uVar6,0x42a00000);
  imp_floorf();
  iVar8 = FUN_71ba17bc();
  uVar3 = FUN_71ba0b38(uVar13,uVar3);
  uVar6 = FUN_71ba13e0(uVar3,0x42480000);
  FUN_71ba0b38(uVar6,0x42a00000);
  imp_floorf();
  iVar9 = FUN_71ba17bc();
  FUN_713e8168();
  if (iVar7 <= iVar9) {
    do {
      iVar12 = iVar4;
      if (iVar4 <= iVar8) {
        do {
          uVar6 = FUN_713e63c8(iVar12,iVar7);
          FUN_71474080(uVar6,uVar2,uVar5,uVar1,uVar3,(undefined4 *)(iVar11 + 0xc),
                       *(uint *)(iVar11 + 0x18),*(uint *)(iVar11 + 0x1c),*(uint *)(iVar11 + 0x20),
                       *(uint *)(iVar11 + 0x24),0,0,0,0,*(undefined4 *)(iVar11 + 0x28),
                       *(undefined4 *)(iVar11 + 0x2c),iVar11 + 4,iVar11 + 0x3d,0);
          iVar12 = iVar12 + 1;
        } while (iVar8 + 1 != iVar12);
      }
      bVar14 = iVar7 != iVar9;
      iVar7 = iVar7 + 1;
    } while (bVar14);
  }
  return;
}


// =========================================================================
// Function: FUN_71474adc
// Entry: 0x71474adc | Size: 1428 bytes
// =========================================================================

bool FUN_71474adc(int param_1,undefined1 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined1 param_16,
                 undefined4 param_17)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined1 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_54;
  undefined2 uStack_50;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_7136e6f0(&uStack_2c,param_4);
  iVar9 = DAT_70b46c18;
  iVar10 = *(int *)(DAT_70b46c18 + 0x14) + 0x30;
  if (*(int *)(DAT_70b46c18 + 0x14) == 0) {
    iVar10 = DAT_70b46c18 + 4;
  }
  FUN_7136e6f0(&uStack_34,iVar10);
  uVar1 = FUN_71ba240c(uStack_2c,uStack_34);
  uVar2 = FUN_71ba240c(uStack_28,uStack_30);
  uVar2 = FUN_71ba21e8(uVar2,uVar2);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  iVar12 = 0;
  iVar10 = FUN_71ba2cf0(param_15,0);
  uStack_5c = (undefined1)param_12;
  uStack_58 = (undefined1)param_11;
  uStack_54 = (undefined1)param_10;
  uStack_50 = (undefined2)param_9;
  if (iVar10 == 0) {
    uVar2 = FUN_71ba21e8(param_15,param_15);
    iVar10 = FUN_71ba2d50(uVar1,uVar2);
    if (iVar10 != 0) {
      return true;
    }
    uVar1 = imp_sqrtf(uVar1);
    uVar2 = FUN_71ba21e8(param_15,0x3f400000);
    iVar10 = FUN_71ba2d50(uVar1,uVar2);
    if (iVar10 != 0) {
      uVar2 = FUN_71ba13e0(0xc0800000,param_15);
      uVar3 = FUN_71ba21e8(param_15,0xbf400000);
      uVar1 = FUN_71ba0b38(uVar1,uVar3);
      uVar1 = FUN_71ba21e8(uVar2,uVar1);
      uVar1 = FUN_71ba0b38(uVar1,0x3f800000);
      uVar2 = FUN_71ba1e0c(param_10);
      FUN_71ba21e8(uVar1,uVar2);
      uStack_54 = FUN_71ba17bc();
      uVar2 = FUN_71ba1e0c(param_11);
      FUN_71ba21e8(uVar1,uVar2);
      uStack_58 = FUN_71ba17bc();
      uVar2 = FUN_71ba1e0c(param_12);
      FUN_71ba21e8(uVar1,uVar2);
      uStack_5c = FUN_71ba17bc();
      uVar2 = FUN_71ba1b94(param_9);
      FUN_71ba21e8(uVar1,uVar2);
      uStack_50 = FUN_71ba17bc();
    }
  }
  sVar11 = 0;
  iVar10 = DAT_710ea848;
  do {
    iVar7 = iVar10;
    if ((*(int *)(iVar10 + iVar12) == param_1) &&
       (iVar13 = iVar10 + iVar12, *(int *)(iVar13 + 4) != 0)) {
      uVar5 = FUN_71ba240c(*param_4,*(undefined4 *)(iVar13 + 0xc));
      uVar6 = FUN_71ba240c(param_4[1],*(undefined4 *)(iVar13 + 0x10));
      iVar7 = FUN_71ba2d10(uVar5 & 0x7fffffff,param_17);
      if ((iVar7 != 0) && (iVar7 = FUN_71ba2d10(uVar6 & 0x7fffffff,param_17), iVar7 != 0)) {
LAB_71474e70:
        *(undefined1 *)(iVar13 + 0x39) = uStack_5c;
        *(undefined1 *)(iVar13 + 0x38) = uStack_58;
        *(undefined1 *)(iVar13 + 0x37) = uStack_54;
        *(undefined1 *)(iVar13 + 0x36) = param_2;
        *(undefined4 *)(iVar13 + 0x28) = param_13;
        *(undefined2 *)(iVar13 + 0x34) = uStack_50;
        *(undefined4 *)(iVar13 + 0x2c) = param_14;
        *(undefined1 *)(iVar13 + 0x3a) = 1;
        *(undefined4 *)(iVar13 + 0x30) = param_3;
        uVar1 = *DAT_70b4204c;
        *(undefined1 *)(iVar13 + 0x3c) = param_16;
        *(undefined4 *)(iVar13 + 8) = uVar1;
        return true;
      }
      uVar8 = FUN_71ba240c(param_4[2],*(undefined4 *)(iVar13 + 0x14));
      iVar7 = FUN_71ba2d10(uVar5 & 0x7fffffff,0x3d4ccccd);
      if (((iVar7 != 0) && (iVar7 = FUN_71ba2d10(uVar6 & 0x7fffffff,0x3d4ccccd), iVar7 != 0)) &&
         (iVar7 = FUN_71ba2d10(uVar8 & 0x7fffffff,0x40000000), iVar7 != 0)) {
        uVar1 = *(undefined4 *)(iVar13 + 0x1c);
        iVar7 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x18),param_5);
        if ((iVar7 != 0) && (iVar7 = FUN_71ba2cf0(uVar1,param_6), iVar7 != 0)) {
          uVar1 = *(undefined4 *)(iVar13 + 0x24);
          iVar7 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x20),param_7);
          if ((iVar7 != 0) && (iVar7 = FUN_71ba2cf0(uVar1,param_8), iVar7 != 0)) goto LAB_71474e70;
        }
      }
      uVar2 = *(undefined4 *)(iVar13 + 0x28);
      uVar1 = *(undefined4 *)(iVar13 + 0x2c);
      iVar7 = FUN_71ba2d10(uVar1,uVar2);
      if (iVar7 != 0) {
        uVar1 = uVar2;
      }
      uVar1 = FUN_71ba0b38(uVar1,0x40000000);
      iVar4 = FUN_713b0418(iVar9,(undefined4 *)(iVar13 + 0xc),uVar1);
      iVar7 = DAT_710ea848;
      if (iVar4 == 0) {
        FUN_7147338c(iVar13);
        *(undefined1 *)(iVar13 + 0x39) = uStack_5c;
        *(undefined1 *)(iVar13 + 0x38) = uStack_58;
        *(undefined1 *)(iVar13 + 0x37) = uStack_54;
        *(undefined1 *)(iVar13 + 0x36) = param_2;
        *(undefined4 *)(iVar13 + 0x30) = param_3;
        *(undefined2 *)(iVar13 + 0x34) = uStack_50;
        *(undefined4 *)(iVar13 + 0x2c) = param_14;
        *(undefined1 *)(iVar13 + 0x3a) = 1;
        *(undefined4 *)(iVar13 + 0x28) = param_13;
        *(undefined4 *)(iVar13 + 8) = *DAT_70b4204c;
        *(undefined4 *)(iVar13 + 0x24) = param_8;
        *(int *)(iVar10 + iVar12) = param_1;
        *(undefined4 *)(iVar13 + 0x20) = param_7;
        *(undefined1 *)(iVar13 + 0x3c) = param_16;
        *(undefined4 *)(iVar13 + 0x1c) = param_6;
        *(undefined4 *)(iVar13 + 0x18) = param_5;
        FUN_7136d040(iVar13 + 0xc,param_4);
        FUN_71474580((int)sVar11);
        iVar9 = *(int *)(iVar13 + 4);
        goto LAB_71475060;
      }
    }
    iVar12 = iVar12 + 0x40;
    sVar11 = sVar11 + 1;
    iVar10 = iVar7;
    if (iVar12 == 0xc00) {
      iVar9 = 0;
      sVar11 = 0;
      while (iVar10 = iVar7 + iVar9, *(int *)(iVar10 + 4) != 0) {
        iVar9 = iVar9 + 0x40;
        sVar11 = sVar11 + 1;
        if (iVar9 == 0xc00) {
          return true;
        }
      }
      *(undefined1 *)(iVar10 + 0x39) = uStack_5c;
      *(undefined1 *)(iVar10 + 0x38) = uStack_58;
      *(undefined1 *)(iVar10 + 0x37) = uStack_54;
      *(undefined2 *)(iVar10 + 0x34) = uStack_50;
      *(undefined4 *)(iVar10 + 0x2c) = param_14;
      *(undefined1 *)(iVar10 + 0x3a) = 1;
      *(undefined1 *)(iVar10 + 0x36) = param_2;
      *(undefined4 *)(iVar10 + 0x30) = param_3;
      *(undefined4 *)(iVar10 + 0x28) = param_13;
      uVar1 = *DAT_70b4204c;
      *(int *)(iVar7 + iVar9) = param_1;
      *(undefined1 *)(iVar10 + 0x3c) = param_16;
      *(undefined4 *)(iVar10 + 0x24) = param_8;
      *(undefined4 *)(iVar10 + 0x20) = param_7;
      *(undefined4 *)(iVar10 + 8) = uVar1;
      *(undefined4 *)(iVar10 + 0x1c) = param_6;
      *(undefined4 *)(iVar10 + 0x18) = param_5;
      FUN_7136d040(iVar10 + 0xc,param_4);
      FUN_71474580((int)sVar11);
      iVar9 = *(int *)(iVar10 + 4);
LAB_71475060:
      return iVar9 != 0;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_714756c0
// Entry: 0x714756c0 | Size: 492 bytes
// =========================================================================

void FUN_714756c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  if ((DAT_710ea870 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ea870);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07f4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07e4);
        *(undefined1 *)(iVar4 + 0xe4) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_7007fde0,0xe4);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71475c88,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07f4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c07e4);
      if (*(char *)(iVar4 + 0xe4) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0x8b41e993 >> iVar9) |
                  (byte)(0x4727c973 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x4727c973 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0xe2 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0xe4) = 0;
      }
      DAT_710ea86c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710ea870);
    }
  }
  (*DAT_710ea86c)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12);
  return;
}


// =========================================================================
// Function: FUN_71476a68
// Entry: 0x71476a68 | Size: 2212 bytes
// =========================================================================

void FUN_71476a68(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
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
  undefined4 uStack_30;
  undefined1 auStack_2c [8];
  
  uStack_30 = 0x3fa3d70a;
  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1140);
  if (*pcVar5 == '\0') {
    puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1130);
    *puVar13 = 0x1b1b737;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71479110,puVar13,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1140);
    *puVar12 = 1;
  }
  pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1130);
  if (pbVar6[3] != 0) {
    pbVar6[3] = 0;
    *pbVar6 = *pbVar6 ^ 0x45;
    pbVar6[1] = pbVar6[1] ^ 0xd5;
    pbVar6[2] = pbVar6[2] ^ 0xb1;
  }
  iVar7 = FUN_71339d5c(param_1);
  if (iVar7 != 0) {
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1150);
    iVar18 = 0;
    do {
      iVar19 = 0;
      do {
        pcVar5 = (char *)FUN_7132d218(iVar7);
        while (pcVar5 != (char *)0x0) {
          if (*pcVar5 != '/' && *pcVar5 != '\0') goto LAB_71477188;
          pcVar5 = (char *)FUN_7132d218(iVar7);
        }
        pcVar5 = (char *)0x0;
LAB_71477188:
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1160);
        if (*pcVar10 == '\0') {
          iVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1150);
          *(undefined1 *)(iVar15 + 0x9e) = 1;
          imp___aeabi_memcpy8(iVar15,&DAT_700807d8,0x9e);
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71479138,iVar15,&DAT_70b0e000);
          puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1160);
          *puVar12 = 1;
        }
        if (*(char *)(iVar8 + 0x9e) != '\0') {
          uVar11 = 0;
          uVar14 = 0;
          do {
            iVar15 = (uVar11 & 7) * 8;
            uVar16 = iVar15 - 0x20;
            bVar17 = (byte)(0xefed2135 >> iVar15) |
                     (byte)(0x75915999 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar16) {
              bVar17 = (byte)(0x75915999 >> (uVar16 & 0xff));
            }
            *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar17;
            bVar20 = 0xfffffffe < uVar11;
            bVar1 = uVar14 == 0;
            bVar2 = (0x9c < uVar11) <= uVar14;
            uVar11 = uVar11 + 1;
            uVar14 = uVar14 + bVar20;
          } while (bVar1 && bVar2);
          *(undefined1 *)(iVar8 + 0x9e) = 0;
        }
        imp_sscanf(pcVar5,iVar8,&uStack_34,&uStack_38,&uStack_3c,&uStack_40,&uStack_44,&uStack_48,
                   auStack_2c,auStack_2c,auStack_2c,&uStack_4c,&uStack_50,&uStack_54,&uStack_58,
                   &uStack_5c,&uStack_60,&uStack_64,&uStack_68,&uStack_6c,&uStack_70,&uStack_74,
                   &uStack_78,&uStack_7c,&uStack_80,&uStack_84,&uStack_88,&uStack_8c,&uStack_90,
                   &uStack_94,&uStack_98,&uStack_9c,&uStack_a0,&uStack_a4,&uStack_a8,&uStack_ac,
                   &uStack_b0,&uStack_b4,&uStack_b8,&uStack_bc,&uStack_c0,&uStack_c4,&uStack_c8,
                   &uStack_cc,&uStack_d0,&uStack_d4,&uStack_d8,&uStack_dc,&uStack_e0,&uStack_e4,
                   &uStack_e8,&uStack_ec,&uStack_f0,&uStack_30);
        *(char *)(iVar19 * 0x17 + DAT_710ea8a8 + iVar18) = (char)uStack_34;
        *(char *)(iVar19 * 0x17 + DAT_710ea8ac + iVar18) = (char)uStack_38;
        *(char *)(iVar19 * 0x17 + DAT_710ea8b0 + iVar18) = (char)uStack_3c;
        *(char *)(iVar19 * 0x17 + DAT_710ea8b4 + iVar18) = (char)uStack_40;
        *(char *)(iVar19 * 0x17 + DAT_710ea8b8 + iVar18) = (char)uStack_44;
        *(char *)(iVar19 * 0x17 + DAT_710ea8bc + iVar18) = (char)uStack_48;
        *(char *)(iVar19 * 0x17 + DAT_710ea8c0 + iVar18) = (char)uStack_4c;
        *(char *)(iVar19 * 0x17 + DAT_710ea8c4 + iVar18) = (char)uStack_50;
        *(char *)(iVar19 * 0x17 + DAT_710ea8c8 + iVar18) = (char)uStack_54;
        *(char *)(iVar19 * 0x17 + DAT_710ea8cc + iVar18) = (char)uStack_58;
        *(char *)(iVar19 * 0x17 + DAT_710ea8d0 + iVar18) = (char)uStack_5c;
        *(char *)(iVar19 * 0x17 + DAT_710ea8d4 + iVar18) = (char)uStack_60;
        *(char *)(iVar19 * 0x17 + DAT_710ea8e8 + iVar18) = (char)uStack_64;
        *(char *)(iVar19 * 0x17 + DAT_710ea8ec + iVar18) = (char)uStack_68;
        *(char *)(iVar19 * 0x17 + DAT_710ea8f0 + iVar18) = (char)uStack_6c;
        *(char *)(iVar19 * 0x17 + DAT_710ea8dc + iVar18) = (char)uStack_70;
        *(char *)(iVar19 * 0x17 + DAT_710ea8e0 + iVar18) = (char)uStack_74;
        *(char *)(iVar19 * 0x17 + DAT_710ea8e4 + iVar18) = (char)uStack_78;
        iVar15 = iVar19 * 0x17 + DAT_710ea8d8;
        uVar9 = FUN_71ba21e8(uStack_7c,0x41200000);
        FUN_71ba0b38(uVar9,0x3f000000);
        uVar3 = FUN_71ba17bc();
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea90c;
        uVar9 = FUN_71ba21e8(uStack_80,0x41200000);
        FUN_71ba0b38(uVar9,0x3f000000);
        uVar3 = FUN_71ba17bc();
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea910;
        uVar9 = FUN_71ba21e8(uStack_84,0x41200000);
        FUN_71ba0b38(uVar9,0x3f000000);
        uVar3 = FUN_71ba17bc();
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        *(char *)(iVar19 * 0x17 + DAT_710ea900 + iVar18) = (char)uStack_88;
        *(char *)(iVar19 * 0x17 + DAT_710ea904 + iVar18) = (char)uStack_8c;
        *(char *)(iVar19 * 0x17 + DAT_710ea908 + iVar18) = (char)uStack_90;
        iVar15 = iVar19 * 0x2e + DAT_710ea8f4;
        uVar4 = FUN_71ba17bc(uStack_94);
        *(undefined2 *)(iVar15 + iVar18 * 2) = uVar4;
        iVar15 = iVar19 * 0x2e + DAT_710ea8f8;
        uVar4 = FUN_71ba17bc(uStack_98);
        *(undefined2 *)(iVar15 + iVar18 * 2) = uVar4;
        iVar15 = iVar19 * 0x17 + DAT_710ea8fc;
        uVar3 = FUN_71ba17bc(uStack_9c);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        *(char *)(iVar19 * 0x17 + DAT_710ea914 + iVar18) = (char)uStack_a0;
        *(char *)(iVar19 * 0x17 + DAT_710ea918 + iVar18) = (char)uStack_a4;
        *(char *)(iVar19 * 0x17 + DAT_710ea91c + iVar18) = (char)uStack_a8;
        *(char *)(iVar19 * 0x17 + DAT_710ea920 + iVar18) = (char)uStack_ac;
        *(char *)(iVar19 * 0x17 + DAT_710ea924 + iVar18) = (char)uStack_b0;
        *(char *)(iVar19 * 0x17 + DAT_710ea928 + iVar18) = (char)uStack_b4;
        iVar15 = iVar19 * 0x17 + DAT_710ea92c;
        uVar3 = FUN_71ba17bc(uStack_b8);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea930;
        uVar3 = FUN_71ba17bc(uStack_bc);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea934;
        uVar3 = FUN_71ba17bc(uStack_c0);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea938;
        uVar3 = FUN_71ba17bc(uStack_c4);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea948;
        uVar3 = FUN_71ba17bc(uStack_c8);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea93c;
        uVar3 = FUN_71ba17bc(uStack_cc);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea940;
        uVar3 = FUN_71ba17bc(uStack_d0);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea944;
        uVar3 = FUN_71ba17bc(uStack_d4);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea958;
        uVar3 = FUN_71ba17bc(uStack_d8);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea94c;
        uVar3 = FUN_71ba17bc(uStack_dc);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea950;
        uVar3 = FUN_71ba17bc(uStack_e0);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea954;
        uVar3 = FUN_71ba17bc(uStack_e4);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar15 = iVar19 * 0x17 + DAT_710ea95c;
        uVar3 = FUN_71ba17bc(uStack_e8);
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        *(char *)(iVar19 * 0x17 + DAT_710ea960 + iVar18) = (char)uStack_ec;
        *(char *)(iVar19 * 0x17 + DAT_710ea964 + iVar18) = (char)uStack_f0;
        iVar15 = iVar19 * 0x17 + DAT_710ea968;
        FUN_71ba21e8(uStack_30,0x42c80000);
        uVar3 = FUN_71ba17bc();
        *(undefined1 *)(iVar15 + iVar18) = uVar3;
        iVar19 = iVar19 + 1;
      } while (iVar19 != 8);
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0x17);
    FUN_7133a194(iVar7);
    *DAT_710ea88c = 0xbf800000;
    DAT_710ea88c[2] = 0x3f350529;
    FUN_7136ce28();
    *DAT_710ea988 = 0;
    *DAT_710ea8a0 = 0;
  }
  return;
}


