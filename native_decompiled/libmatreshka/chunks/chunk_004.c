// =========================================================================
// Function: FUN_7148b76c
// Entry: 0x7148b76c | Size: 364 bytes
// =========================================================================

void FUN_7148b76c(void)

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
  if (((DAT_710eac44 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac44), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13a0);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1390);
      *(undefined1 *)((int)puVar9 + 0x25) = 1;
      uVar5 = DAT_70080b24;
      uVar4 = DAT_70080b20;
      uVar3 = DAT_70080b1c;
      *puVar9 = DAT_70080b18;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_70080b38;
      uVar5 = DAT_70080b34;
      uVar4 = DAT_70080b30;
      uVar3 = DAT_70080b2c;
      puVar9[4] = DAT_70080b28;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      *(undefined1 *)(puVar9 + 9) = DAT_70080b3c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491c6c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13a0);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1390);
    if (*(char *)(iVar7 + 0x25) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x874b0533 >> iVar13) |
                 (byte)(0x31070921 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x31070921 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar15;
        bVar16 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x23 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x25) = 0;
    }
    DAT_710eac40 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac44);
  }
                    /* WARNING: Could not recover jumptable at 0x7148b798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac40)();
  return;
}


// =========================================================================
// Function: FUN_7148bb70
// Entry: 0x7148bb70 | Size: 372 bytes
// =========================================================================

void FUN_7148bb70(void)

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
  if (((DAT_710eac4c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac4c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13c0);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13b0);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_70080b4c;
      uVar4 = DAT_70080b48;
      uVar3 = DAT_70080b44;
      *puVar10 = DAT_70080b40;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70080b5c;
      uVar4 = DAT_70080b58;
      uVar3 = DAT_70080b54;
      puVar10[4] = DAT_70080b50;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70080b62;
      *(undefined2 *)(puVar10 + 8) = DAT_70080b60;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491cbc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13c0);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13b0);
    if (*(char *)(iVar7 + 0x23) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0xe943fb13 >> iVar14) |
                 (byte)(-0x5ed0d44d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0xa12f2bb3 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x21 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x23) = 0;
    }
    DAT_710eac48 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac4c);
  }
                    /* WARNING: Could not recover jumptable at 0x7148bb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac48)();
  return;
}


// =========================================================================
// Function: FUN_7148bf7c
// Entry: 0x7148bf7c | Size: 388 bytes
// =========================================================================

void FUN_7148bf7c(undefined4 param_1)

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
  if (((DAT_710eac54 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac54), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13e0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13d0);
      *(undefined1 *)(puVar10 + 0xd) = 1;
      uVar5 = DAT_70080b74;
      uVar4 = DAT_70080b70;
      uVar3 = DAT_70080b6c;
      *puVar10 = DAT_70080b68;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70080b84;
      uVar4 = DAT_70080b80;
      uVar3 = DAT_70080b7c;
      puVar10[4] = DAT_70080b78;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70080b98;
      uVar5 = DAT_70080b94;
      uVar4 = DAT_70080b90;
      uVar3 = DAT_70080b8c;
      puVar10[8] = DAT_70080b88;
      puVar10[9] = uVar3;
      puVar10[10] = uVar4;
      puVar10[0xb] = uVar5;
      puVar10[0xc] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491d0c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13e0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13d0);
    if (*(char *)(iVar8 + 0x34) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x377b9db1 >> iVar14) |
                (byte)(-0x30700477 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xcf8ffb89 >> (uVar15 & 0xff));
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
    DAT_710eac50 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac54);
  }
                    /* WARNING: Could not recover jumptable at 0x7148bfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac50)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7148c398
// Entry: 0x7148c398 | Size: 380 bytes
// =========================================================================

void FUN_7148c398(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eac5c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac5c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1400,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13f0);
      *(undefined1 *)(iVar4 + 0x53) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70080ba0,0x53);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491d5c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1400);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c13f0);
    if (*(char *)(iVar4 + 0x53) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xdd55518f >> iVar9) |
                (byte)(-0x124264cb << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xedbd9b35 >> (uVar10 & 0xff));
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
    DAT_710eac58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7148c3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac58)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7148c7c8
// Entry: 0x7148c7c8 | Size: 380 bytes
// =========================================================================

void FUN_7148c7c8(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eac64 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac64), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1420,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1410);
      *(undefined1 *)(iVar4 + 0x45) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70080bf8,0x45);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491dac,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1420);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1410);
    if (*(char *)(iVar4 + 0x45) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0xc59f19cf >> iVar9) |
                (byte)(-0x2450bc7d << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xdbaf4383 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x43 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x45) = 0;
    }
    DAT_710eac60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac64);
  }
                    /* WARNING: Could not recover jumptable at 0x7148c7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac60)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7148cbf8
// Entry: 0x7148cbf8 | Size: 380 bytes
// =========================================================================

void FUN_7148cbf8(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eac6c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac6c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1440,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1430);
      *(undefined1 *)(iVar4 + 0x47) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70080c40,0x47);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491dfc,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1440);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1430);
    if (*(char *)(iVar4 + 0x47) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x65f3d5f1 >> iVar9) | (byte)(0x1cdc31f << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x1cdc31f >> (uVar10 & 0xff));
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
    DAT_710eac68 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac6c);
  }
                    /* WARNING: Could not recover jumptable at 0x7148cc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac68)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7148d028
// Entry: 0x7148d028 | Size: 380 bytes
// =========================================================================

void FUN_7148d028(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eac74 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac74), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1460,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1450);
      *(undefined1 *)(iVar4 + 0x49) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70080c88,0x49);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491e4c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1460);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1450);
    if (*(char *)(iVar4 + 0x49) != '\0') {
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
        bVar2 = (0x47 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x49) = 0;
    }
    DAT_710eac70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac74);
  }
                    /* WARNING: Could not recover jumptable at 0x7148d054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac70)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7148d458
// Entry: 0x7148d458 | Size: 400 bytes
// =========================================================================

void FUN_7148d458(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_710eac7c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac7c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1480,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1470);
      *(undefined1 *)(iVar4 + 0x70) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70080cd8,0x70);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491e9c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1480);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1470);
    if (*(char *)(iVar4 + 0x70) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x85232bf3 >> iVar9) | (byte)(-0xe9a9ac9 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xf1656537 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x6e < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x70) = 0;
    }
    DAT_710eac78 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac7c);
  }
                    /* WARNING: Could not recover jumptable at 0x7148d48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac78)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7148d89c
// Entry: 0x7148d89c | Size: 368 bytes
// =========================================================================

void FUN_7148d89c(void)

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
  if (((DAT_710eac84 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac84), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14a0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1490);
      *(undefined1 *)((int)puVar10 + 0x2e) = 1;
      uVar6 = DAT_70080d58;
      uVar5 = DAT_70080d54;
      uVar4 = DAT_70080d50;
      uVar3 = DAT_70080d4c;
      *puVar10 = DAT_70080d48;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar7 = DAT_70080d70;
      uVar6 = DAT_70080d6c;
      uVar5 = DAT_70080d68;
      uVar4 = DAT_70080d64;
      uVar3 = DAT_70080d60;
      puVar10[5] = DAT_70080d5c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      puVar10[10] = uVar7;
      *(undefined2 *)(puVar10 + 0xb) = DAT_70080d74;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491eec,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14a0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1490);
    if (*(char *)(iVar8 + 0x2e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0x23519919 >> iVar14) |
                 (byte)(-0x30dad651 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0xcf2529af >> (uVar15 & 0xff));
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
    DAT_710eac80 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac84);
  }
                    /* WARNING: Could not recover jumptable at 0x7148d8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac80)();
  return;
}


// =========================================================================
// Function: FUN_7148dca4
// Entry: 0x7148dca4 | Size: 624 bytes
// =========================================================================

void FUN_7148dca4(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  uint uStack_24;
  
  if (param_1[6] == 0) {
    return;
  }
  uVar8 = 0xbf800000;
  iVar7 = *(int *)(DAT_70c39074 + *(short *)((int)param_1 + 0x26) * 4);
  bVar1 = *(byte *)((int)param_1 + 0x1d);
  bVar9 = (bVar1 & 0x80) != 0;
  if (bVar9) {
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  if (bVar9 && bVar1 != 0) {
    uVar8 = FUN_71464344(param_1);
  }
  iVar2 = FUN_71ba2d50(uVar8,0);
  bVar9 = iVar2 != 0 || (*(byte *)(iVar7 + 0x28) & 8) != 0;
  if (bVar9) {
    FUN_71413b60(8,0);
  }
  if ((*(byte *)((int)param_1 + 0x1d) & 0x80) == 0) {
    uVar3 = *DAT_70b46f00;
    bVar10 = uVar3 == 0;
    if (bVar10) {
      uVar3 = (uint)*(byte *)(iVar7 + 0x28);
    }
    if (bVar10 && (uVar3 & 8) == 0) {
      uVar8 = 100;
    }
    else {
      uVar8 = 0;
    }
    FUN_71413b60(0x1e,uVar8);
    FUN_7146a30c(param_1);
    goto LAB_7148def8;
  }
  FUN_71413b60(0x1e,0);
  if (iVar2 == 0) {
    uVar8 = FUN_714644c0(param_1,iVar7);
    uVar4 = FUN_71463f34();
    iVar2 = FUN_71ba2d30(uVar4,0);
    if (iVar2 == 0) {
      uVar8 = FUN_71ba240c(uVar8,param_2);
      uVar8 = FUN_71ba13e0(uVar8,uVar4);
      goto LAB_7148ddd4;
    }
    uVar3 = (uint)*(byte *)(iVar7 + 0x22);
  }
  else {
    uVar8 = FUN_71ba21e8(uVar8,0x40800000);
LAB_7148ddd4:
    iVar2 = FUN_71ba2d10(uVar8,0);
    if (iVar2 != 0) {
      uVar8 = 0;
    }
    iVar2 = FUN_71ba2d70(uVar8,0x3f800000);
    if (iVar2 != 0) {
      uVar8 = 0x3f800000;
    }
    uVar4 = FUN_71ba1e0c(*(undefined1 *)(iVar7 + 0x22));
    FUN_71ba21e8(uVar8,uVar4);
    uVar3 = FUN_71ba17bc();
  }
  uVar5 = param_1[7];
  param_1[7] = uVar5 | 0x2000;
  if ((uVar5 & 0x8000000) == 0) {
    FUN_71413b60(0x14,1);
  }
  uVar8 = (**(code **)(*param_1 + 0x50))(param_1);
  uStack_24 = uVar3;
  if ((*(byte *)(iVar7 + 0x28) & 4) != 0) {
    FUN_71413b60(0xb,2);
  }
  pcVar6 = (char *)param_1[6];
  if (*pcVar6 == '\x01') {
    FUN_7148d028(pcVar6,uVar3);
  }
  else {
    FUN_71422cb0(pcVar6,&LAB_71491fdc,&uStack_24);
  }
  if ((*(byte *)(iVar7 + 0x28) & 4) != 0) {
    FUN_71413b60(0xb,6);
  }
  (**(code **)(*param_1 + 0x54))(param_1,uVar8);
  uVar3 = param_1[7];
  param_1[7] = uVar3 & 0xffffdfff;
  if ((uVar3 & 0x8000000) == 0) {
    FUN_71413b60(0x14,2);
  }
LAB_7148def8:
  if (bVar9) {
    FUN_71413b60(8,1);
  }
  return;
}


// =========================================================================
// Function: FUN_7148e22c
// Entry: 0x7148e22c | Size: 380 bytes
// =========================================================================

void FUN_7148e22c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eac8c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac8c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14c0,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14b0);
      *(undefined1 *)(iVar4 + 0x4b) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70080d78,0x4b);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491f3c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14c0);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14b0);
    if (*(char *)(iVar4 + 0x4b) != '\0') {
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
        bVar2 = (0x49 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x4b) = 0;
    }
    DAT_710eac88 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac8c);
  }
                    /* WARNING: Could not recover jumptable at 0x7148e258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac88)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7148e65c
// Entry: 0x7148e65c | Size: 3288 bytes
// =========================================================================

void FUN_7148e65c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  bool bVar23;
  int iStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
  *DAT_710eac18 = param_1;
  *DAT_710eac1c = *(int *)(param_1 + 4) + 0x40;
  iVar18 = DAT_70b46c18;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(DAT_70b46c18 + 0xec),0x41a00000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  *DAT_710eac20 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xec),0x42480000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  *DAT_710eac24 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xf0),0x41f00000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  *DAT_710eac10 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xf0),0x42340000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  *DAT_710eac28 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xf0),0x42700000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  *DAT_710eac2c = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xf0),0x43160000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  *DAT_710eac14 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xec),0x42340000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  *DAT_710eac30 = uVar1;
  uVar1 = FUN_71ba21e8(*(undefined4 *)(iVar18 + 0xec),0x42340000);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  *DAT_710eac34 = uVar1;
  piVar17 = DAT_7100cefc;
  if (DAT_711f6d58 == 0) {
    return;
  }
  if (*DAT_710eac1c == 0) {
    return;
  }
  puVar14 = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  puStack_2c = (undefined4 *)0x0;
  iVar18 = *(int *)(DAT_711f6d58 + 4);
  puStack_30 = (undefined4 *)0x0;
  if (iVar18 == 0) {
    return;
  }
  if (0 < *DAT_7100cefc) {
    iVar21 = 0;
    do {
      puVar15 = puStack_2c;
      if (((((&DAT_7100d22c)[iVar21] != 0) && ((*(byte *)((&DAT_7100d22c)[iVar21] + 0x3a) & 7) == 2)
           ) && (uVar2 = FUN_717b92b8(iVar18), puVar15 = puStack_2c, uVar2 != 0xffff)) &&
         (((uVar2 < 0x7d1 && (*(char *)(iVar18 + 0x3e88 + uVar2) != '\0')) &&
          ((iVar12 = *(int *)(iVar18 + uVar2 * 4), iVar12 != 0 &&
           (iVar3 = thunk_FUN_715f4594(iVar12), puVar15 = puStack_2c, iVar3 == 0)))))) {
        puVar15 = (undefined4 *)*DAT_710eac1c;
        iVar3 = FUN_7141ee6c(*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0xc) + 0x18) + 4));
        uVar19 = *(undefined4 *)(iVar3 + 0x34);
        uVar1 = *(undefined4 *)(iVar3 + 0x38);
        uVar4 = puVar15[2];
        uVar8 = puVar15[1];
        uVar5 = FUN_71ba240c(*(undefined4 *)(iVar3 + 0x30),*puVar15);
        uVar8 = FUN_71ba240c(uVar19,uVar8);
        uVar1 = FUN_71ba240c(uVar1,uVar4);
        uVar4 = FUN_71ba21e8(uVar8,uVar8);
        uVar5 = FUN_71ba21e8(uVar5,uVar5);
        uVar4 = FUN_71ba0b38(uVar5,uVar4);
        uVar1 = FUN_71ba21e8(uVar1,uVar1);
        uVar1 = FUN_71ba0b38(uVar1,uVar4);
        puVar16 = puStack_30;
        if (puVar14 < puStack_28) {
          *puVar14 = uVar1;
          puVar14[1] = iVar12;
          puVar14 = puVar14 + 2;
          puVar15 = puVar14;
        }
        else {
          iVar3 = (int)puVar14 - (int)puStack_30 >> 3;
          uVar2 = iVar3 + 1;
          if (0x1fffffff < uVar2) {
            FUN_7149202c(&puStack_30);
LAB_7148f330:
                    /* WARNING: Subroutine does not return */
            FUN_712f6cf0();
          }
          uVar7 = (int)puStack_28 - (int)puStack_30 >> 2;
          if (uVar2 < uVar7) {
            uVar2 = uVar7;
          }
          if (0x7ffffff7 < (uint)((int)puStack_28 - (int)puStack_30)) {
            uVar2 = 0x1fffffff;
          }
          if (uVar2 == 0) {
            puVar15 = (undefined4 *)0x0;
          }
          else {
            if (0x1fffffff < uVar2) goto LAB_7148f330;
            puVar15 = (undefined4 *)thunk_MwhHq(uVar2 << 3);
          }
          puVar14 = puVar15 + iVar3 * 2;
          *puVar14 = uVar1;
          puVar14[1] = iVar12;
          imp___aeabi_memcpy4(puVar15,puVar16);
          puStack_28 = puVar15 + uVar2 * 2;
          puVar14 = puVar14 + 2;
          puStack_30 = puVar15;
          puVar15 = puVar14;
          if (puVar16 != (undefined4 *)0x0) {
            thunk_qNQrlu(puVar16);
          }
        }
      }
      puStack_2c = puVar15;
      iVar21 = iVar21 + 1;
    } while (iVar21 < *piVar17);
  }
  uVar4 = DAT_700c71bc;
  uVar1 = DAT_700c71b8;
  uVar2 = DAT_700c71b4;
  if ((int)DAT_700c71b4 < 1) {
    uVar2 = 0;
  }
  else {
    uVar7 = (int)puVar14 - (int)puStack_30 >> 3;
    if (uVar7 < DAT_700c71b4) {
      uVar2 = 0;
      if (puVar14 != puStack_30) {
        uVar2 = uVar7;
      }
    }
    else if ((DAT_700c71b4 < uVar7) &&
            (puVar16 = puStack_30 + DAT_700c71b4 * 2, puVar15 = puStack_30, puVar16 != puVar14)) {
LAB_7148eac4:
      uVar7 = (int)puVar14 - (int)puVar15 >> 3;
      if (1 < uVar7) {
        if (uVar7 != 3) {
          if (uVar7 == 2) {
            uVar8 = *puVar15;
            uVar5 = puVar14[-2];
            iVar21 = FUN_71ba2d10(uVar5,uVar8);
            if (iVar21 != 0) {
              puVar16 = puVar15 + 1;
              *puVar15 = uVar5;
              puVar11 = puVar14 + -1;
              puVar14[-2] = uVar8;
              goto LAB_7148f1a8;
            }
          }
          else if ((int)uVar7 < 8) {
            while (puVar16 = puVar15, puVar14 + -2 != puVar16) {
              puVar15 = puVar16 + 2;
              if (puVar16 != puVar14 && puVar15 != puVar14) {
                uVar8 = *puVar16;
                uVar5 = uVar8;
                puVar11 = puVar16;
                puVar20 = puVar15;
                do {
                  puVar10 = puVar20 + 2;
                  uVar19 = *puVar20;
                  iVar21 = FUN_71ba2d10(uVar19,uVar5);
                  iVar12 = FUN_71ba2d10(uVar19,uVar5);
                  if (iVar12 != 0) {
                    puVar11 = puVar20;
                  }
                  if (iVar21 != 0) {
                    uVar5 = uVar19;
                  }
                  puVar20 = puVar10;
                } while (puVar10 != puVar14);
                if (puVar11 != puVar16) {
                  *puVar16 = *puVar11;
                  *puVar11 = uVar8;
                  uVar5 = puVar16[1];
                  puVar16[1] = puVar11[1];
                  puVar11[1] = uVar5;
                }
              }
            }
          }
          else {
            uVar19 = *puVar15;
            puVar11 = puVar15 + (uVar7 & 0x3ffffffe);
            uVar5 = *puVar11;
            iVar21 = FUN_71ba2d10(uVar5,uVar19);
            puVar20 = puVar14 + -2;
            uVar8 = *puVar20;
            iVar12 = FUN_71ba2d10(uVar8,uVar5);
            if (iVar21 == 0) {
              if (iVar12 == 0) {
                iStack_34 = 0;
              }
              else {
                *puVar11 = uVar8;
                *puVar20 = uVar5;
                puVar10 = puVar11 + 1;
                uVar5 = *puVar10;
                *puVar10 = puVar14[-1];
                puVar14[-1] = uVar5;
                uVar5 = *puVar11;
                uVar8 = *puVar15;
                iVar21 = FUN_71ba2d10(uVar5,uVar8);
                iStack_34 = 1;
                if (iVar21 != 0) {
                  puVar9 = puVar15 + 1;
                  *puVar15 = uVar5;
                  *puVar11 = uVar8;
                  goto LAB_7148ec0c;
                }
              }
            }
            else {
              if (iVar12 == 0) {
                puVar9 = puVar11 + 1;
                uVar8 = puVar15[1];
                puVar15[1] = *puVar9;
                *puVar15 = uVar5;
                *puVar11 = uVar19;
                *puVar9 = uVar8;
                uVar5 = *puVar20;
                iVar21 = FUN_71ba2d10(uVar5,uVar19);
                if (iVar21 == 0) {
                  iStack_34 = 1;
                  uVar5 = uVar19;
                  goto LAB_7148ec3c;
                }
                *puVar11 = uVar5;
                puVar10 = puVar14 + -1;
                *puVar20 = uVar19;
LAB_7148ec0c:
                iStack_34 = 2;
              }
              else {
                puVar9 = puVar15 + 1;
                *puVar15 = uVar8;
                *puVar20 = uVar19;
                puVar10 = puVar14 + -1;
                iStack_34 = 1;
              }
              uVar5 = *puVar9;
              *puVar9 = *puVar10;
              *puVar10 = uVar5;
              uVar5 = *puVar11;
            }
LAB_7148ec3c:
            uVar8 = *puVar15;
            iVar21 = FUN_71ba2d10(uVar8,uVar5);
            puVar10 = puVar20;
            if (iVar21 == 0) {
              do {
                puVar9 = puVar10;
                puVar10 = puVar9 + -2;
                if (puVar10 == puVar15) {
                  uVar5 = *puVar20;
                  iVar21 = FUN_71ba2d10(uVar8,uVar5);
                  puVar11 = puVar15 + 2;
                  if (iVar21 != 0) goto LAB_7148eedc;
                  goto joined_r0x7148ee70;
                }
                uVar19 = *puVar10;
                iVar21 = FUN_71ba2d10(uVar19,uVar5);
              } while (iVar21 == 0);
              *puVar15 = uVar19;
              *puVar10 = uVar8;
              uVar5 = puVar15[1];
              puVar15[1] = puVar9[-1];
              puVar9[-1] = uVar5;
              iStack_34 = iStack_34 + 1;
              puVar20 = puVar10;
            }
            puVar13 = puVar15 + 2;
            puVar10 = puVar13;
            puVar9 = puVar13;
            if (puVar13 < puVar20) {
              while( true ) {
                uVar5 = *puVar11;
                do {
                  puVar9 = puVar10;
                  uVar8 = *puVar9;
                  iVar21 = FUN_71ba2d10(uVar8,uVar5);
                  puVar10 = puVar9 + 2;
                } while (iVar21 != 0);
                do {
                  puVar22 = puVar20;
                  puVar20 = puVar22 + -2;
                  uVar19 = *puVar20;
                  iVar21 = FUN_71ba2d10(uVar19,uVar5);
                } while (iVar21 == 0);
                if (puVar20 <= puVar9) break;
                *puVar9 = uVar19;
                *puVar20 = uVar8;
                if (puVar9 == puVar11) {
                  puVar11 = puVar20;
                }
                uVar5 = puVar9[1];
                puVar9[1] = puVar22[-1];
                puVar22[-1] = uVar5;
                iStack_34 = iStack_34 + 1;
              }
            }
            if (puVar9 != puVar11) {
              uVar5 = *puVar11;
              uVar8 = *puVar9;
              iVar21 = FUN_71ba2d10(uVar5,uVar8);
              if (iVar21 != 0) {
                *puVar9 = uVar5;
                *puVar11 = uVar8;
                uVar5 = puVar9[1];
                puVar9[1] = puVar11[1];
                puVar11[1] = uVar5;
                iStack_34 = iStack_34 + 1;
              }
            }
            if (puVar9 != puVar16) {
              if (iStack_34 == 0) {
                puVar11 = puVar9;
                if (puVar16 < puVar9) {
                  do {
                    if (puVar13 == puVar9) goto LAB_7148f1bc;
                    iVar21 = FUN_71ba2d10(*puVar13,puVar13[-2]);
                    puVar13 = puVar13 + 2;
                  } while (iVar21 == 0);
                }
                else {
                  do {
                    puVar20 = puVar11 + 2;
                    if (puVar20 == puVar14) goto LAB_7148f1bc;
                    iVar21 = FUN_71ba2d10(*puVar20,*puVar11);
                    puVar11 = puVar20;
                  } while (iVar21 == 0);
                }
              }
              if (puVar9 <= puVar16) {
                puVar15 = puVar9 + 2;
                puVar9 = puVar14;
              }
              goto LAB_7148ef5c;
            }
          }
          goto LAB_7148f1bc;
        }
        puVar20 = puVar15 + 2;
        uVar5 = *puVar20;
        uVar19 = *puVar15;
        iVar21 = FUN_71ba2d10(uVar5,uVar19);
        puVar11 = puVar14 + -2;
        uVar8 = *puVar11;
        iVar12 = FUN_71ba2d10(uVar8,uVar5);
        if (iVar21 == 0) {
          if (iVar12 == 0) goto LAB_7148f1bc;
          *puVar20 = uVar8;
          *puVar11 = uVar5;
          puVar11 = puVar15 + 3;
          uVar5 = *puVar11;
          *puVar11 = puVar14[-1];
          puVar14[-1] = uVar5;
          uVar5 = *puVar20;
          uVar8 = *puVar15;
          iVar21 = FUN_71ba2d10(uVar5,uVar8);
          if (iVar21 == 0) goto LAB_7148f1bc;
          *puVar20 = uVar8;
          puVar16 = puVar15 + 1;
          *puVar15 = uVar5;
        }
        else {
          if (iVar12 == 0) {
            *puVar20 = uVar19;
            uVar8 = puVar15[1];
            puVar16 = puVar15 + 3;
            puVar15[1] = *puVar16;
            *puVar15 = uVar5;
            *puVar16 = uVar8;
            uVar5 = *puVar11;
            iVar21 = FUN_71ba2d10(uVar5,uVar19);
            if (iVar21 == 0) goto LAB_7148f1bc;
            *puVar20 = uVar5;
            *puVar11 = uVar19;
          }
          else {
            puVar16 = puVar15 + 1;
            *puVar15 = uVar8;
            *puVar11 = uVar19;
          }
          puVar11 = puVar14 + -1;
        }
LAB_7148f1a8:
        uVar5 = *puVar16;
        *puVar16 = *puVar11;
        *puVar11 = uVar5;
      }
    }
  }
LAB_7148f1bc:
  puVar14 = puStack_30;
  if (puStack_2c != puStack_30) {
    uVar7 = (int)puStack_2c - (int)puStack_30 >> 3;
    uVar6 = 1;
    if (1 < uVar7) {
      uVar6 = uVar7;
    }
    uVar7 = 0;
    do {
      iVar21 = uVar7 * 2;
      bVar23 = uVar7 < uVar2;
      uVar7 = uVar7 + 1;
      uVar5 = uVar4;
      if (bVar23) {
        uVar5 = uVar1;
      }
      *(undefined4 *)(puStack_30[iVar21 + 1] + 0x77c) = uVar5;
    } while (uVar6 != uVar7);
  }
  if (DAT_711a3938 != 0) {
    piVar17 = (int *)(DAT_711a3938 + 0x1389c);
    if (*piVar17 == 0) {
      iVar21 = FUN_713c301c(0);
      if (iVar21 == 0) {
        if (*piVar17 == 0) goto LAB_7148f2fc;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar21 = FUN_715ba834();
        *piVar17 = iVar21;
      }
    }
    piVar17 = (int *)(DAT_711a3938 + 0x1389c);
    iVar21 = *piVar17;
    if (iVar21 == 0) {
      iVar21 = FUN_713c301c(0);
      if (iVar21 == 0) {
        iVar21 = *piVar17;
        if (iVar21 == 0) goto LAB_7148f2fc;
      }
      else {
        iVar21 = thunk_MwhHq(0x3a0);
        iVar12 = FUN_715ba834();
        *piVar17 = iVar12;
      }
    }
    iVar12 = thunk_FUN_715bf66c(iVar21);
    if (((iVar12 != 0) && (iVar21 = thunk_FUN_715c4004(iVar21), iVar21 != 0)) &&
       (uVar2 = FUN_717b92b8(iVar18,iVar21), uVar2 < 0x7d1)) {
      bVar23 = *(char *)(iVar18 + uVar2 + 0x3e88) != '\0';
      if (bVar23) {
        uVar2 = *(uint *)(iVar18 + uVar2 * 4);
      }
      if (bVar23 && uVar2 != 0) {
        *(undefined4 *)(uVar2 + 0x77c) = DAT_700c71b8;
      }
    }
  }
LAB_7148f2fc:
  if (puVar14 != (undefined4 *)0x0) {
    thunk_qNQrlu(puVar14);
  }
  return;
joined_r0x7148ee70:
  if (puVar11 == puVar20) goto LAB_7148f1bc;
  uVar19 = *puVar11;
  iVar21 = FUN_71ba2d10(uVar8,uVar19);
  if (iVar21 != 0) goto LAB_7148eeb8;
  puVar11 = puVar11 + 2;
  goto joined_r0x7148ee70;
LAB_7148eeb8:
  *puVar11 = uVar5;
  *puVar20 = uVar19;
  uVar5 = puVar11[1];
  puVar11[1] = puVar14[-1];
  puVar11 = puVar11 + 2;
  puVar14[-1] = uVar5;
LAB_7148eedc:
  if (puVar11 == puVar20) goto LAB_7148f1bc;
  while( true ) {
    uVar5 = *puVar15;
    do {
      puVar10 = puVar11;
      puVar11 = puVar10 + 2;
      uVar8 = *puVar10;
      iVar21 = FUN_71ba2d10(uVar5,uVar8);
    } while (iVar21 == 0);
    do {
      puVar9 = puVar20;
      puVar20 = puVar9 + -2;
      uVar19 = *puVar20;
      iVar21 = FUN_71ba2d10(uVar5,uVar19);
    } while (iVar21 != 0);
    if (puVar20 <= puVar10) break;
    *puVar10 = uVar19;
    *puVar20 = uVar8;
    uVar5 = puVar10[1];
    puVar10[1] = puVar9[-1];
    puVar9[-1] = uVar5;
  }
  puVar9 = puVar14;
  puVar15 = puVar10;
  if (puVar16 < puVar10) goto LAB_7148f1bc;
LAB_7148ef5c:
  puVar14 = puVar9;
  if (puVar9 == puVar16) goto LAB_7148f1bc;
  goto LAB_7148eac4;
}


// =========================================================================
// Function: FUN_7148fe14
// Entry: 0x7148fe14 | Size: 140 bytes
// =========================================================================

undefined4 FUN_7148fe14(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *DAT_710eac38;
  iVar1 = FUN_71ba2d50(uVar3,*DAT_710eac14);
  if (iVar1 == 0) {
    uVar2 = FUN_71ba0b38(*DAT_710eac10,0x42c80000);
    iVar1 = FUN_71ba2d50(uVar3,uVar2);
    if (iVar1 == 0) {
      FUN_7148cbf8(param_1,0x2000);
    }
    else {
      FUN_7148c7c8(param_1,0x2000);
    }
    FUN_714241a8(param_1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7148ffc0
// Entry: 0x7148ffc0 | Size: 184 bytes
// =========================================================================

undefined4 FUN_7148ffc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *DAT_710eac38;
  iVar1 = FUN_71ba2d50(uVar4,*DAT_710eac14);
  if (iVar1 == 0) {
    uVar2 = FUN_71ba0b38(*DAT_710eac10,0x42c80000);
    iVar1 = FUN_71ba2d50(uVar4,uVar2);
    if (iVar1 == 0) {
      FUN_7148cbf8(param_1,0x2000);
    }
    else {
      FUN_7148c7c8(param_1,0x2000);
    }
    uVar3 = FUN_714901f0(param_1);
    if (((uVar3 & 0x40) == 0) || (iVar1 = FUN_7148c398(param_1,*DAT_710eac38), iVar1 == 0)) {
      FUN_714241a8(param_1);
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_714901f0
// Entry: 0x714901f0 | Size: 404 bytes
// =========================================================================

void FUN_714901f0(undefined4 param_1)

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
  if (((DAT_710eac94 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eac94), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14e0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14d0);
      *(undefined1 *)((int)puVar11 + 0x37) = 1;
      uVar5 = DAT_70080dd4;
      uVar4 = DAT_70080dd0;
      uVar3 = DAT_70080dcc;
      *puVar11 = DAT_70080dc8;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar5 = DAT_70080de4;
      uVar4 = DAT_70080de0;
      uVar3 = DAT_70080ddc;
      puVar11[4] = DAT_70080dd8;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      uVar6 = DAT_70080df8;
      uVar5 = DAT_70080df4;
      uVar4 = DAT_70080df0;
      uVar3 = DAT_70080dec;
      puVar11[8] = DAT_70080de8;
      puVar11[9] = uVar3;
      puVar11[10] = uVar4;
      puVar11[0xb] = uVar5;
      puVar11[0xc] = uVar6;
      uVar7 = DAT_70080dfe;
      *(undefined2 *)(puVar11 + 0xd) = DAT_70080dfc;
      *(undefined1 *)((int)puVar11 + 0x36) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71491f8c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14e0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14d0);
    if (*(char *)(iVar9 + 0x37) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x1bf7b37b >> iVar15) |
                (byte)(-0x526a82bb << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xad957d45 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x35 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x37) = 0;
    }
    DAT_710eac90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eac94);
  }
                    /* WARNING: Could not recover jumptable at 0x7149021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eac90)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7149061c
// Entry: 0x7149061c | Size: 112 bytes
// =========================================================================

int FUN_7149061c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_71ba2d10(*DAT_710eac38,*DAT_710eac14);
  if (iVar1 == 0) {
    FUN_7148c7c8(param_1,0x2000);
    iVar1 = FUN_7148bf7c(*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0xff) {
      FUN_714241a8(param_1);
      return param_1;
    }
    FUN_7148d028(param_1,iVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71490770
// Entry: 0x71490770 | Size: 232 bytes
// =========================================================================

int FUN_71490770(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_r4;
  
  if (param_1 != 0) {
    param_3 = DAT_711a3938;
  }
  puVar4 = DAT_710eac28;
  if (param_1 != 0 && param_3 != (int *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    if (uVar3 != 0) {
      param_3 = param_3 + 1;
      unaff_r4 = (int *)*param_3;
    }
    piVar5 = param_3;
    if (uVar3 != 0 && unaff_r4 != (int *)0x0) {
      do {
        piVar1 = unaff_r4;
        if ((uint)unaff_r4[4] < uVar3) {
          unaff_r4 = unaff_r4 + 1;
          piVar1 = piVar5;
        }
        unaff_r4 = (int *)*unaff_r4;
        piVar5 = piVar1;
      } while (unaff_r4 != (int *)0x0);
      if (((piVar1 != param_3) && ((uint)piVar1[4] <= uVar3)) && (piVar1[5] != 0)) {
        puVar4 = (undefined4 *)(piVar1[5] + 0x77c);
      }
    }
  }
  iVar2 = FUN_71ba2d10(*DAT_710eac38,*puVar4);
  if (iVar2 == 0) {
    FUN_7148c7c8(param_1,0x2000);
    iVar2 = FUN_7148bf7c(*(undefined4 *)(param_1 + 0x3c));
    if (iVar2 == 0xff) {
      FUN_714241a8(param_1);
      return param_1;
    }
    FUN_7148d028(param_1,iVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7149095c
// Entry: 0x7149095c | Size: 460 bytes
// =========================================================================

int FUN_7149095c(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  uVar8 = *DAT_710eac38;
  if (param_1 != 0) {
    param_2 = DAT_711a3938;
  }
  puVar4 = DAT_710eac28;
  if (param_1 != 0 && param_2 != (int *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    if (uVar3 != 0) {
      param_2 = param_2 + 1;
      param_4 = (int *)*param_2;
    }
    piVar7 = param_2;
    if (uVar3 != 0 && param_4 != (int *)0x0) {
      do {
        piVar1 = param_4;
        if ((uint)param_4[4] < uVar3) {
          param_4 = param_4 + 1;
          piVar1 = piVar7;
        }
        param_4 = (int *)*param_4;
        piVar7 = piVar1;
      } while (param_4 != (int *)0x0);
      if (((piVar1 != param_2) && ((uint)piVar1[4] <= uVar3)) && (piVar1[5] != 0)) {
        puVar4 = (undefined4 *)(piVar1[5] + 0x77c);
      }
    }
  }
  iVar5 = FUN_71ba2d50(uVar8,*puVar4);
  if (iVar5 != 0) {
    return param_1;
  }
  iVar5 = FUN_71ba2d50(uVar8,*DAT_710eac10);
  if (iVar5 == 0) {
    FUN_7148cbf8(param_1,0x2000);
  }
  else {
    FUN_7148c7c8(param_1,0x2000);
  }
  uVar2 = FUN_714901f0(param_1);
  iVar5 = FUN_71ba2d70(*DAT_710eac38,*DAT_710eac20);
  if (((iVar5 != 0) && ((uVar2 & 0x400) == 0)) &&
     (iVar5 = FUN_71ba2d10(DAT_710eac3c,0x3e4ccccd), iVar5 != 0)) {
    uVar8 = FUN_7141ee6c(*(undefined4 *)(param_1 + 4));
    uVar6 = FUN_7141ee6c(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4));
    uVar8 = FUN_7148d458(uVar8,uVar6,uVar2);
    iVar5 = FUN_71ba2d70(uVar8,0);
    if (iVar5 != 0) {
      if ((uVar2 & 0x80) != 0) {
        return param_1;
      }
      uVar6 = FUN_71ba21e8(*DAT_710eac38,0x3dcccccd);
      uVar8 = FUN_71ba21e8(uVar8,uVar8);
      iVar5 = FUN_71ba2d10(uVar6,uVar8);
      if (iVar5 != 0) {
        return param_1;
      }
    }
  }
  FUN_714241a8(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_71490de4
// Entry: 0x71490de4 | Size: 632 bytes
// =========================================================================

int FUN_71490de4(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  
  uVar13 = *DAT_710eac38;
  if (param_1 != 0) {
    param_2 = DAT_711a3938;
  }
  puVar4 = DAT_710eac28;
  if (param_1 != 0 && param_2 != (int *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    if (uVar3 != 0) {
      param_2 = param_2 + 1;
      param_4 = (int *)*param_2;
    }
    piVar11 = param_2;
    if (uVar3 != 0 && param_4 != (int *)0x0) {
      do {
        piVar1 = param_4;
        if ((uint)param_4[4] < uVar3) {
          param_4 = param_4 + 1;
          piVar1 = piVar11;
        }
        param_4 = (int *)*param_4;
        piVar11 = piVar1;
      } while (param_4 != (int *)0x0);
      if (((piVar1 != param_2) && ((uint)piVar1[4] <= uVar3)) && (piVar1[5] != 0)) {
        puVar4 = (undefined4 *)(piVar1[5] + 0x77c);
      }
    }
  }
  iVar5 = FUN_71ba2d50(uVar13,*puVar4);
  if (iVar5 != 0) {
    return param_1;
  }
  iVar5 = FUN_71ba2d50(uVar13,*DAT_710eac10);
  if (iVar5 == 0) {
    FUN_7148cbf8(param_1,0x2000);
  }
  else {
    FUN_7148c7c8(param_1,0x2000);
  }
  uVar2 = FUN_714901f0(param_1);
  uVar13 = FUN_7141ee6c(*(undefined4 *)(param_1 + 4));
  uVar6 = FUN_7141ee6c(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 4));
  uVar13 = FUN_7148d458(uVar13,uVar6,uVar2);
  uVar6 = *DAT_710eac38;
  iVar5 = FUN_71ba2d70(uVar6,*DAT_710eac20);
  if (((iVar5 != 0) && (iVar5 = FUN_71ba2d70(uVar13,0), iVar5 != 0)) &&
     (((uVar2 & 0x400) == 0 && (iVar5 = FUN_71ba2d10(DAT_710eac3c,0x3e4ccccd), iVar5 != 0)))) {
    if ((uVar2 & 0x80) != 0) {
      return param_1;
    }
    uVar7 = FUN_71ba21e8(uVar6,0x3dcccccd);
    uVar8 = FUN_71ba21e8(uVar13,uVar13);
    iVar5 = FUN_71ba2d10(uVar7,uVar8);
    if (iVar5 != 0) {
      return param_1;
    }
  }
  uVar7 = 0xb8d1b717;
  if ((uVar2 & 0x40) == 0) {
    uVar7 = uVar13;
  }
  iVar9 = FUN_71ba0b38(uVar7,uVar6);
  iVar5 = DAT_710eac00;
  iVar12 = DAT_710eac00 + 0x14;
  iVar14 = DAT_710eac00;
  do {
    iVar14 = *(int *)(iVar14 + 0x10);
    iVar15 = iVar12;
    if (iVar14 == iVar12) break;
    iVar10 = FUN_71ba2d50(*(undefined4 *)(iVar14 + 8),iVar9);
    iVar15 = iVar14;
  } while (iVar10 == 0);
  piVar11 = *(int **)(iVar5 + 0x38);
  if (piVar11 == (int *)(iVar5 + 0x3c)) {
    FUN_714241a8(param_1);
    return param_1;
  }
  *(int *)(piVar11[4] + 0xc) = iVar5 + 0x28;
  *(int *)(iVar5 + 0x38) = piVar11[4];
  piVar11[2] = iVar9;
  piVar11[1] = (int)FUN_714241a8;
  *piVar11 = param_1;
  iVar5 = *(int *)(iVar15 + 0xc);
  piVar11[4] = iVar15;
  piVar11[3] = iVar5;
  *(int **)(*(int *)(iVar15 + 0xc) + 0x10) = piVar11;
  *(int **)(iVar15 + 0xc) = piVar11;
  return param_1;
}


// =========================================================================
// Function: FUN_71491370
// Entry: 0x71491370 | Size: 184 bytes
// =========================================================================

int FUN_71491370(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_r4;
  
  if (param_1 != 0) {
    param_3 = DAT_711a3938;
  }
  puVar4 = DAT_710eac28;
  if (param_1 != 0 && param_3 != (int *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    if (uVar3 != 0) {
      param_3 = param_3 + 1;
      unaff_r4 = (int *)*param_3;
    }
    piVar5 = param_3;
    if (uVar3 != 0 && unaff_r4 != (int *)0x0) {
      do {
        piVar1 = unaff_r4;
        if ((uint)unaff_r4[4] < uVar3) {
          unaff_r4 = unaff_r4 + 1;
          piVar1 = piVar5;
        }
        unaff_r4 = (int *)*unaff_r4;
        piVar5 = piVar1;
      } while (unaff_r4 != (int *)0x0);
      if (((piVar1 != param_3) && ((uint)piVar1[4] <= uVar3)) && (piVar1[5] != 0)) {
        puVar4 = (undefined4 *)(piVar1[5] + 0x77c);
      }
    }
  }
  iVar2 = FUN_71ba2d50(*DAT_710eac38,*puVar4);
  if (iVar2 == 0) {
    FUN_714241a8(param_1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_714914d8
// Entry: 0x714914d8 | Size: 504 bytes
// =========================================================================

void FUN_714914d8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar1 = DAT_710eabfc;
  if (DAT_710eac98 == '\0') {
    if (*(int *)(DAT_710eabfc + 0x50) != 0) {
      thunk_qNQrlu();
    }
    *(int *)(iVar1 + 0x10) = iVar1 + 0x14;
    *(int *)(iVar1 + 0x48) = iVar1 + 0x28;
    *(int *)(iVar1 + 0x20) = iVar1;
    uVar2 = thunk__IBDl(20000);
    iVar6 = iVar1 + 0x3c;
    *(undefined4 *)(iVar1 + 0x50) = uVar2;
    iVar3 = 1000;
    uVar4 = 0x3e9;
    iVar5 = 0x4e1c;
    do {
      iVar8 = *(int *)(iVar1 + 0x50);
      iVar3 = iVar3 + -1;
      uVar4 = uVar4 - 1;
      piVar7 = (int *)(iVar8 + iVar5);
      *piVar7 = iVar6;
      iVar5 = iVar5 + -0x14;
      *(int **)(iVar6 + 0xc) = piVar7 + -4;
      piVar7[-1] = iVar1 + 0x28;
      *(int **)(iVar1 + 0x38) = piVar7 + -4;
      iVar6 = iVar8 + iVar3 * 0x14;
    } while (1 < uVar4);
    DAT_710eac98 = '\x01';
  }
  iVar1 = DAT_710eabfc;
  iVar3 = DAT_710eabfc + 0x14;
  iVar5 = *(int *)(DAT_710eabfc + 0x10);
  if (iVar5 != iVar3) {
    iVar6 = DAT_710eabfc + 0x28;
    do {
      iVar8 = *(int *)(iVar5 + 0x10);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 0x10) = iVar8;
      }
      if (iVar8 != 0) {
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      }
      iVar8 = *(int *)(iVar1 + 0x38);
      *(int *)(iVar5 + 0x10) = iVar8;
      *(int *)(iVar8 + 0xc) = iVar5;
      *(int *)(iVar5 + 0xc) = iVar6;
      *(int *)(iVar1 + 0x38) = iVar5;
      iVar5 = *(int *)(iVar1 + 0x10);
    } while (iVar5 != iVar3);
  }
  iVar1 = DAT_710eac04;
  iVar3 = DAT_710eac04 + 0x14;
  iVar5 = *(int *)(DAT_710eac04 + 0x10);
  if (iVar5 != iVar3) {
    iVar6 = DAT_710eac04 + 0x28;
    do {
      iVar8 = *(int *)(iVar5 + 0x10);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 0x10) = iVar8;
      }
      if (iVar8 != 0) {
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      }
      iVar8 = *(int *)(iVar1 + 0x38);
      *(int *)(iVar5 + 0x10) = iVar8;
      *(int *)(iVar8 + 0xc) = iVar5;
      *(int *)(iVar5 + 0xc) = iVar6;
      *(int *)(iVar1 + 0x38) = iVar5;
      iVar5 = *(int *)(iVar1 + 0x10);
    } while (iVar5 != iVar3);
  }
  iVar1 = DAT_710eac08;
  iVar3 = DAT_710eac08 + 0x14;
  iVar5 = *(int *)(DAT_710eac08 + 0x10);
  if (iVar5 != iVar3) {
    iVar6 = DAT_710eac08 + 0x28;
    do {
      iVar8 = *(int *)(iVar5 + 0x10);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 0x10) = iVar8;
      }
      if (iVar8 != 0) {
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      }
      iVar8 = *(int *)(iVar1 + 0x38);
      *(int *)(iVar5 + 0x10) = iVar8;
      *(int *)(iVar8 + 0xc) = iVar5;
      *(int *)(iVar5 + 0xc) = iVar6;
      *(int *)(iVar1 + 0x38) = iVar5;
      iVar5 = *(int *)(iVar1 + 0x10);
    } while (iVar5 != iVar3);
  }
  iVar1 = DAT_710eac0c;
  iVar3 = DAT_710eac0c + 0x14;
  iVar5 = *(int *)(DAT_710eac0c + 0x10);
  if (iVar5 != iVar3) {
    iVar6 = DAT_710eac0c + 0x28;
    do {
      iVar8 = *(int *)(iVar5 + 0x10);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 0x10) = iVar8;
      }
      if (iVar8 != 0) {
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      }
      iVar8 = *(int *)(iVar1 + 0x38);
      *(int *)(iVar5 + 0x10) = iVar8;
      *(int *)(iVar8 + 0xc) = iVar5;
      *(int *)(iVar5 + 0xc) = iVar6;
      *(int *)(iVar1 + 0x38) = iVar5;
      iVar5 = *(int *)(iVar1 + 0x10);
    } while (iVar5 != iVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_7149202c
// Entry: 0x7149202c | Size: 20 bytes
// =========================================================================

void FUN_7149202c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7149656c
// Entry: 0x7149656c | Size: 380 bytes
// =========================================================================

void FUN_7149656c(undefined4 param_1)

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
  if (((DAT_710ead28 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead28), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1500);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14f0);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70080e10;
      uVar5 = DAT_70080e0c;
      uVar4 = DAT_70080e08;
      uVar3 = DAT_70080e04;
      *puVar11 = DAT_70080e00;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70080e28;
      uVar6 = DAT_70080e24;
      uVar5 = DAT_70080e20;
      uVar4 = DAT_70080e1c;
      uVar3 = DAT_70080e18;
      puVar11[5] = DAT_70080e14;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71496980,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1500);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c14f0);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe569d1dd >> iVar15) |
                (byte)(0x750729cb << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x750729cb >> (uVar16 & 0xff));
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
    DAT_710ead24 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ead28);
  }
                    /* WARNING: Could not recover jumptable at 0x71496598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead24)(param_1);
  return;
}


// =========================================================================
// Function: FUN_714969d0
// Entry: 0x714969d0 | Size: 380 bytes
// =========================================================================

void FUN_714969d0(undefined4 param_1)

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
  if (((DAT_710ead30 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead30), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1520);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1510);
      *(undefined1 *)((int)puVar11 + 0x19) = 1;
      uVar7 = DAT_70080e44;
      uVar6 = DAT_70080e40;
      uVar5 = DAT_70080e3c;
      uVar4 = DAT_70080e38;
      uVar3 = DAT_70080e34;
      *puVar11 = DAT_70080e30;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined1 *)(puVar11 + 6) = DAT_70080e48;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7131280c,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1520);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1510);
    if (*(char *)(iVar9 + 0x19) != '\0') {
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
        bVar2 = (0x17 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x19) = 0;
    }
    DAT_710ead2c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ead30);
  }
                    /* WARNING: Could not recover jumptable at 0x714969fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead2c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71496de4
// Entry: 0x71496de4 | Size: 388 bytes
// =========================================================================

void FUN_71496de4(undefined4 param_1)

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
  if (((DAT_710ead38 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead38), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1540);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1530);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_70080e5c;
      uVar4 = DAT_70080e58;
      uVar3 = DAT_70080e54;
      *puVar10 = DAT_70080e50;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70080e70;
      uVar5 = DAT_70080e6c;
      uVar4 = DAT_70080e68;
      uVar3 = DAT_70080e64;
      puVar10[4] = DAT_70080e60;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_70080e74;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130ccf4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1540);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1530);
    if (*(char *)(iVar8 + 0x26) != '\0') {
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
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_710ead34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ead38);
  }
                    /* WARNING: Could not recover jumptable at 0x71496e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71497200
// Entry: 0x71497200 | Size: 424 bytes
// =========================================================================

void FUN_71497200(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710ead40 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead40), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1560,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1550);
      *(undefined1 *)((int)puVar10 + 0x3b) = 1;
      uVar5 = DAT_70080e84;
      uVar4 = DAT_70080e80;
      uVar3 = DAT_70080e7c;
      *puVar10 = DAT_70080e78;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70080e98;
      uVar5 = DAT_70080e94;
      uVar4 = DAT_70080e90;
      uVar3 = DAT_70080e8c;
      puVar10[4] = DAT_70080e88;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70080eac;
      uVar5 = DAT_70080ea8;
      uVar4 = DAT_70080ea4;
      uVar3 = DAT_70080ea0;
      puVar10[9] = DAT_70080e9c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_70080eb0;
      *(undefined1 *)((int)puVar10 + 0x3a) = DAT_70080eb2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c60ac,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1560);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1550);
    if (*(char *)(iVar8 + 0x3b) != '\0') {
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
        bVar2 = (0x39 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3b) = 0;
    }
    DAT_710ead3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ead40);
  }
                    /* WARNING: Could not recover jumptable at 0x71497234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead3c)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71497640
// Entry: 0x71497640 | Size: 380 bytes
// =========================================================================

void FUN_71497640(undefined4 param_1)

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
  if (((DAT_710ead5c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead5c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1620);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1610);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_70080f58;
      uVar5 = DAT_70080f54;
      uVar4 = DAT_70080f50;
      uVar3 = DAT_70080f4c;
      *puVar10 = DAT_70080f48;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70080f6c;
      uVar5 = DAT_70080f68;
      uVar4 = DAT_70080f64;
      uVar3 = DAT_70080f60;
      puVar10[5] = DAT_70080f5c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71497f54,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1620);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1610);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x45a9b135 >> iVar14) |
                (byte)(-0x760ad4c7 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x89f52b39 >> (uVar15 & 0xff));
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
    DAT_710ead58 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ead5c);
  }
                    /* WARNING: Could not recover jumptable at 0x7149766c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead58)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71497a54
// Entry: 0x71497a54 | Size: 428 bytes
// =========================================================================

void FUN_71497a54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_710ead64 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead64);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1640,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1630);
        *(undefined1 *)(iVar3 + 0x6f) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70080f70,0x6f);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71497fa4,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1640);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1630);
      if (*(char *)(iVar3 + 0x6f) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0xb4d771d >> iVar5) |
                  (byte)(-0x44defc41 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0xbb2103bf >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0x6d < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x6f) = 0;
      }
      DAT_710ead60 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710ead64);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x71497a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead60)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_71499434
// Entry: 0x71499434 | Size: 392 bytes
// =========================================================================

void FUN_71499434(undefined4 param_1)

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
  if (((DAT_710ead94 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710ead94), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1660);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1650);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_70080fec;
      uVar4 = DAT_70080fe8;
      uVar3 = DAT_70080fe4;
      *puVar10 = DAT_70080fe0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_70080ffc;
      uVar4 = DAT_70080ff8;
      uVar3 = DAT_70080ff4;
      puVar10[4] = DAT_70080ff0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_70081002;
      *(undefined2 *)(puVar10 + 8) = DAT_70081000;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149be14,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1660);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1650);
    if (*(char *)(iVar8 + 0x23) != '\0') {
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
        bVar2 = (0x21 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x23) = 0;
    }
    DAT_710ead90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710ead94);
  }
                    /* WARNING: Could not recover jumptable at 0x71499460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710ead90)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71499c68
// Entry: 0x71499c68 | Size: 396 bytes
// =========================================================================

undefined4 * FUN_71499c68(undefined4 *param_1)

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
  
  *param_1 = &PTR_FUN_70b0e33c;
  DataMemoryBarrier(0xb);
  if (((DAT_710eada4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eada4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c16a0,iVar7);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1690);
      *(undefined1 *)((int)puVar9 + 0x11) = 1;
      uVar5 = DAT_7008103c;
      uVar4 = DAT_70081038;
      uVar3 = DAT_70081034;
      *puVar9 = DAT_70081030;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      *(undefined1 *)(puVar9 + 4) = DAT_70081040;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7133d18c,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c16a0);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1690);
    if (*(char *)(iVar7 + 0x11) != '\0') {
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
        bVar2 = (0xf < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x11) = 0;
    }
    DAT_710eada0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eada4);
  }
  (*DAT_710eada0)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_7149a0ac
// Entry: 0x7149a0ac | Size: 396 bytes
// =========================================================================

undefined4 * FUN_7149a0ac(undefined4 *param_1)

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
  
  *param_1 = &PTR_FUN_70b0e33c;
  DataMemoryBarrier(0xb);
  if (((bRam710eadac & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(0x710eadac), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(0x700c16c0,iVar7);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(0x700c16b0);
      *(undefined1 *)((int)puVar9 + 0x12) = 1;
      uVar5 = uRam70081054;
      uVar4 = uRam70081050;
      uVar3 = uRam7008104c;
      *puVar9 = uRam70081048;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      *(undefined2 *)(puVar9 + 4) = uRam70081058;
      thunk_GFDIUClbc_QcPNgD_wH(&UNK_7149be64,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(0x700c16c0);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(0x700c16b0);
    if (*(char *)(iVar7 + 0x12) != '\0') {
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
        bVar2 = (0x10 < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x12) = 0;
    }
    pcRam710eada8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(0x710eadac);
  }
  (*pcRam710eada8)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_7149bfcc
// Entry: 0x7149bfcc | Size: 396 bytes
// =========================================================================

void FUN_7149bfcc(undefined4 param_1)

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
  if (((DAT_710eade4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eade4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17a0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1790);
      *(undefined1 *)((int)puVar11 + 0x33) = 1;
      uVar7 = DAT_7008114c;
      uVar6 = DAT_70081148;
      uVar5 = DAT_70081144;
      uVar4 = DAT_70081140;
      uVar3 = DAT_7008113c;
      *puVar11 = DAT_70081138;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70081164;
      uVar6 = DAT_70081160;
      uVar5 = DAT_7008115c;
      uVar4 = DAT_70081158;
      uVar3 = DAT_70081154;
      puVar11[6] = DAT_70081150;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      *(undefined2 *)(puVar11 + 0xc) = DAT_70081168;
      *(undefined1 *)((int)puVar11 + 0x32) = DAT_7008116a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71357504,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17a0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1790);
    if (*(char *)(iVar9 + 0x33) != '\0') {
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
        bVar2 = (0x31 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x33) = 0;
    }
    DAT_710eade0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eade4);
  }
                    /* WARNING: Could not recover jumptable at 0x7149bff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eade0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7149c3f0
// Entry: 0x7149c3f0 | Size: 400 bytes
// =========================================================================

void FUN_7149c3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_710eadec & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eadec), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17c0,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17b0);
      *(undefined1 *)(iVar4 + 0x68) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70081170,0x68);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149ecf8,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17c0);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17b0);
    if (*(char *)(iVar4 + 0x68) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x45a9b135 >> iVar9) |
                (byte)(-0x760ad4c7 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x89f52b39 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x66 < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x68) = 0;
    }
    DAT_710eade8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eadec);
  }
                    /* WARNING: Could not recover jumptable at 0x7149c424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eade8)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7149c834
// Entry: 0x7149c834 | Size: 1300 bytes
// =========================================================================

void FUN_7149c834(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  undefined4 unaff_r4;
  uint uVar12;
  undefined4 unaff_r5;
  undefined4 uVar13;
  undefined4 unaff_r6;
  int iVar14;
  uint uVar15;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 uVar16;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar17;
  
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0xc0))(param_1);
  if (param_3 == 0) {
    if (puVar7 == (undefined4 *)0x0) {
      uVar13 = 0x41;
      if ((*(byte *)((int)param_1 + 0x42d) & 8) == 0) {
        uVar13 = 0x40;
      }
      goto LAB_7149c8e8;
    }
    uVar13 = 0xc2;
    uVar16 = *puVar7;
    if (*(short *)((int)param_1 + 0x26) == 0x7ec) {
      uVar13 = 0xcd;
    }
  }
  else if (puVar7 == (undefined4 *)0x0) {
    if (param_1[0x169] == 5) {
      if ((*(byte *)(param_1[0xe2] + 0xcd) & 4) == 0) {
        uVar13 = 0x51;
      }
      else {
LAB_7149c8dc:
        uVar13 = 0x3c;
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x42d) & 8) == 0) goto LAB_7149c8dc;
      uVar13 = 0x3d;
    }
LAB_7149c8e8:
    uVar16 = 0;
  }
  else {
    uVar16 = *puVar7;
    uVar13 = 0xc2;
  }
  if (*(ushort *)((int)param_1 + 0x26) - 0x48ab < 2) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17e0);
    if (*pcVar8 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17d0);
      *puVar7 = 0x30cfac2b;
      puVar7[1] = 0x494688d6;
      puVar7[2] = 0x3bdcb328;
      *(undefined1 *)((int)puVar7 + 0xe) = 1;
      *(undefined2 *)(puVar7 + 3) = 0xcddb;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149ed48,puVar7,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17e0);
      *puVar6 = 1;
    }
    pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17d0);
    if (pbVar9[0xe] != 0) {
      *pbVar9 = *pbVar9 ^ 0x6d;
      pbVar9[1] = pbVar9[1] ^ 0xe5;
      pbVar9[2] = pbVar9[2] ^ 0x99;
      pbVar9[3] = pbVar9[3] ^ 0x75;
      pbVar9[0xe] = 0;
      pbVar9[4] = pbVar9[4] ^ 0x8f;
      pbVar9[5] = pbVar9[5] ^ 0xcd;
      pbVar9[6] = pbVar9[6] ^ 7;
      pbVar9[7] = pbVar9[7] ^ 0x1b;
      pbVar9[8] = pbVar9[8] ^ 0x6d;
      pbVar9[9] = pbVar9[9] ^ 0xe5;
      pbVar9[10] = pbVar9[10] ^ 0x99;
      pbVar9[0xb] = pbVar9[0xb] ^ 0x75;
      pbVar9[0xc] = pbVar9[0xc] ^ 0x8f;
      pbVar9[0xd] = pbVar9[0xd] ^ 0xcd;
    }
    iVar10 = FUN_713040e0();
    if (iVar10 != 0) {
      pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1800);
      if (*pcVar8 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17f0);
        *(undefined1 *)(puVar7 + 3) = 1;
        *puVar7 = 0x63befc8a;
        puVar7[1] = 0x5b385c58;
        puVar7[2] = 0x7bafd90;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149ed78,puVar7,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1800);
        *puVar6 = 1;
      }
      pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c17f0);
      if (pbVar9[0xc] != 0) {
        *pbVar9 = *pbVar9 ^ 0xf9;
        pbVar9[1] = pbVar9[1] ^ 0x99;
        pbVar9[2] = pbVar9[2] ^ 0xdf;
        pbVar9[3] = pbVar9[3] ^ 7;
        pbVar9[0xc] = 0;
        pbVar9[4] = pbVar9[4] ^ 0x37;
        pbVar9[5] = pbVar9[5] ^ 0x33;
        pbVar9[6] = pbVar9[6] ^ 0x67;
        pbVar9[7] = pbVar9[7] ^ 0x29;
        pbVar9[8] = pbVar9[8] ^ 0xf9;
        pbVar9[9] = pbVar9[9] ^ 0x99;
        pbVar9[10] = pbVar9[10] ^ 0xdf;
        pbVar9[0xb] = pbVar9[0xb] ^ 7;
      }
      iVar10 = FUN_71304504(pbVar9,iVar10);
      if (iVar10 != 0) {
        FUN_7130747c(*(undefined4 *)(param_2 + 0x18),iVar10,0x1004,0x447a0000);
        goto LAB_713bd030;
      }
    }
  }
  FUN_7130702c(*(undefined4 *)(param_2 + 0x18),uVar16,uVar13,0x447a0000);
LAB_713bd030:
  DataMemoryBarrier(0xb);
  if (((DAT_70b46d48 & 1) == 0) && (iVar10 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46d48), iVar10 != 0))
  {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5b0);
    if (*pcVar8 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5a0);
      *(undefined1 *)((int)puVar7 + 0x1e) = 1;
      uVar16 = DAT_70076970;
      uVar13 = DAT_7007696c;
      *puVar7 = DAT_70076968;
      puVar7[1] = uVar13;
      puVar7[2] = uVar16;
      uVar4 = DAT_70076980;
      uVar3 = DAT_7007697c;
      uVar16 = DAT_70076978;
      uVar13 = DAT_70076974;
      puVar7[3] = DAT_70076974;
      puVar7[4] = uVar16;
      puVar7[5] = uVar3;
      puVar7[6] = uVar4;
      *(undefined2 *)(puVar7 + 7) = DAT_70076984;
      thunk_GFDIUClbc_QcPNgD_wH
                (&LAB_713beff4,puVar7,&DAT_70b0e000,uVar13,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                 unaff_r8,unaff_r9,unaff_r11,unaff_lr);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5b0);
      *puVar6 = 1;
    }
    iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc5a0);
    if (*(char *)(iVar10 + 0x1e) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar11 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar5 = (byte)(0xcf65775b >> iVar14) |
                (byte)(0x298b4d93 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar5 = (byte)(0x298b4d93 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar10 + uVar11) = *(byte *)(iVar10 + uVar11) ^ bVar5;
        bVar17 = 0xfffffffe < uVar11;
        bVar1 = uVar12 == 0;
        bVar2 = (0x1c < uVar11) <= uVar12;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x1e) = 0;
    }
    DAT_70b46d44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar10,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46d48);
  }
                    /* WARNING: Could not recover jumptable at 0x713bd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46d44)(param_2);
  return;
}


// =========================================================================
// Function: FUN_7149cf04
// Entry: 0x7149cf04 | Size: 1432 bytes
// =========================================================================

void FUN_7149cf04(undefined4 *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar7 = &uStack_30;
  FUN_7136cdfc(puVar7);
  iVar2 = FUN_7136cdfc(&uStack_3c);
  puVar9 = (undefined4 *)(iVar2 + 4);
  iVar8 = *(int *)(DAT_70c39074 + *(short *)((int)param_2 + 0x26) * 4);
  if ((param_2[0x169] == 9) || (iVar4 = param_2[0xe2], (*(byte *)(iVar4 + 0xcd) & 2) != 0)) {
    if (param_3 == 0x12) {
      FUN_7130bb60(&uStack_48,&DAT_70b2e958 + (short)(ushort)*(byte *)(param_2[0xe2] + 0xde) * 0x94,
                   2);
      FUN_7136d040(&uStack_3c,&uStack_48);
      iVar2 = 0;
      if (param_2[0x169] != 5) {
        iVar2 = 0x30;
      }
      FUN_7136d040(&uStack_30,*(int *)(iVar8 + 0x74) + iVar2 + 0x32c);
      FUN_7136cdfc(&uStack_48);
      uVar6 = *puVar9;
      uStack_44 = FUN_71ba0b38(uStack_2c,uVar6);
      uStack_40 = FUN_71ba240c(uStack_28,uVar6);
      uStack_48 = FUN_71ba240c(uStack_30,uStack_3c);
      iVar8 = param_2[5];
      if (iVar8 == 0) {
        FUN_713c4654(param_2);
        FUN_713c5c74(param_2 + 1,param_2[5]);
        iVar8 = param_2[5];
      }
    }
    else {
      FUN_7130bb60(&uStack_48,&DAT_70b2e958 + (short)(ushort)*(byte *)(param_2[0xe2] + 0xde) * 0x94,
                   0);
      FUN_7136d040(&uStack_3c,&uStack_48);
      if ((param_3 & 0xfffffffd) == 9) {
        iVar8 = *(int *)(iVar8 + 0x74) + 0x368;
      }
      else {
        iVar4 = 0;
        if (param_2[0x169] != 5) {
          iVar4 = 0x30;
        }
        iVar8 = *(int *)(iVar8 + 0x74) + iVar4 + 0x32c;
      }
      FUN_7136d040(&uStack_30,iVar8);
      if (param_2[0x169] == 9) {
        if ((param_3 & 0xfffffffe) == 8) {
          uStack_3c = uStack_3c ^ 0x80000000;
        }
        FUN_7136cdfc(param_1);
        FUN_713c6eb0(param_2,param_1,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28);
        return;
      }
      if ((param_3 & 0xfffffffe) == 8) {
        uStack_3c = uStack_3c ^ 0x80000000;
        uStack_30 = FUN_71ba0b38(*(undefined4 *)(param_2[0xe2] + 0xd4),uStack_30);
      }
      else {
        uStack_30 = FUN_71ba240c(uStack_30,*(undefined4 *)(param_2[0xe2] + 0xd4));
      }
      iVar8 = param_2[5];
      if (iVar8 == 0) {
        FUN_713c4654(param_2);
        FUN_713c5c74(param_2 + 1,param_2[5]);
        iVar8 = param_2[5];
      }
      uVar3 = uStack_30;
      uVar6 = *puVar9;
      uStack_40 = FUN_71ba240c(uStack_28,*(undefined4 *)(iVar2 + 8));
      uStack_44 = FUN_71ba240c(uStack_2c,uVar6);
      uStack_48 = FUN_71ba240c(uVar3,uStack_3c);
    }
    FUN_71340b14(param_1,iVar8,&uStack_48);
    return;
  }
  bVar1 = *(byte *)(iVar4 + 0xde);
  bVar10 = (param_3 & 0xfffffffd) == 9;
  if (bVar10) {
    puVar7 = (uint *)0x0;
  }
  if (!bVar10 || bVar1 != 0x65) {
    puVar7 = *(uint **)(iVar4 + 0xd4);
  }
  if (param_3 < 0x13) {
    if ((1 << (param_3 & 0xff) & 0x3a00U) != 0) {
      uVar6 = 1;
      goto LAB_7149d240;
    }
    uVar6 = 0;
    if ((1 << (param_3 & 0xff) & 0x500U) != 0) goto LAB_7149d240;
    if (param_3 != 0x12) goto LAB_7149d23c;
    FUN_7130bb60(&uStack_48,&DAT_70b2e958 + (short)(ushort)bVar1 * 0x94,2);
    FUN_7136d040(&uStack_3c,&uStack_48);
switchD_7149d280_default:
    iVar4 = 0;
    if (param_2[0x169] != 5) {
      iVar4 = 0x30;
    }
    FUN_7136d040(&uStack_30,*(int *)(iVar8 + 0x74) + iVar4 + 0x32c);
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    FUN_7136d040(&uStack_3c,&uStack_48);
    goto LAB_7149d3ac;
  }
LAB_7149d23c:
  uVar6 = 0xffffffff;
LAB_7149d240:
  FUN_7130bb60(&uStack_48,&DAT_70b2e958 + (short)(ushort)bVar1 * 0x94,uVar6);
  FUN_7136d040(&uStack_3c,&uStack_48);
  switch(param_3) {
  case 8:
    uVar3 = (uint)(param_2[0x169] != 5) << 2;
    if (*(short *)((int)param_2 + 0x26) == 0x7ec) {
      uVar3 = 5;
    }
    iVar8 = *(int *)(iVar8 + 0x74) + (uVar3 | uVar3 << 1) * 4 + 0x32c;
    break;
  case 9:
    iVar8 = *(int *)(iVar8 + 0x74) + 0x368;
    break;
  case 10:
    iVar4 = 0;
    if (param_2[0x169] != 5) {
      iVar4 = 0x30;
    }
    iVar8 = *(int *)(iVar8 + 0x74) + iVar4 + 0x32c;
    goto LAB_7149d348;
  case 0xb:
    iVar8 = *(int *)(iVar8 + 0x74) + 0x368;
LAB_7149d348:
    FUN_7136d040(&uStack_30,iVar8);
    uStack_30 = FUN_71ba0b38(puVar7,uStack_30);
    uStack_30 = uStack_30 ^ 0x80000000;
    goto LAB_7149d3ac;
  case 0xc:
    FUN_7136d040(&uStack_30,*(int *)(iVar8 + 0x74) + 0x3f8);
    goto LAB_7149d3ac;
  case 0xd:
    FUN_7136d040(&uStack_30,*(int *)(iVar8 + 0x74) + 0x404);
    goto LAB_7149d3a0;
  default:
    goto switchD_7149d280_default;
  }
  FUN_7136d040(&uStack_30,iVar8);
  uStack_30 = FUN_71ba0b38(puVar7,uStack_30);
LAB_7149d3a0:
  uStack_3c = uStack_3c ^ 0x80000000;
LAB_7149d3ac:
  uVar6 = *(undefined4 *)(iVar2 + 8);
  uStack_44 = FUN_71ba240c(uStack_2c,*puVar9);
  uStack_48 = FUN_71ba240c(uStack_30,uStack_3c);
  uStack_40 = FUN_71ba240c(uStack_28,uVar6);
  uVar3 = param_2[0x169];
  if (uVar3 != 1) {
    bVar10 = uVar3 == 4;
    if (!bVar10) {
      uVar3 = *(uint *)(param_2[0xe2] + 0xcc);
    }
    if (bVar10 || (uVar3 & 8) == 0) goto LAB_7149d44c;
  }
  (**(code **)(*param_2 + 0xd8))(param_2);
  uVar11 = FUN_71ba1638();
  FUN_71ba23ec(0x610802ae,0x3fee6666,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uStack_40 = FUN_71ba242c();
LAB_7149d44c:
  uVar6 = FUN_7136cdfc(&uStack_54);
  FUN_7136d284(uVar6,&uStack_48,param_2[5]);
  piVar5 = (int *)(param_2[5] + 0x30);
  if (param_2[5] == 0) {
    piVar5 = param_2 + 1;
  }
  iVar2 = piVar5[1];
  iVar8 = piVar5[2];
  uVar6 = FUN_71ba0b38(*piVar5,uStack_54);
  *param_1 = uVar6;
  uVar6 = FUN_71ba0b38(iVar8,uStack_4c);
  param_1[2] = uVar6;
  uVar6 = FUN_71ba0b38(iVar2,uStack_50);
  param_1[1] = uVar6;
  return;
}


// =========================================================================
// Function: FUN_7149da90
// Entry: 0x7149da90 | Size: 2328 bytes
// =========================================================================

undefined4
FUN_7149da90(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  
  iVar12 = *(int *)(DAT_70c39074 + *(short *)(param_2 + 0x26) * 4);
  FUN_7136cdfc(&uStack_30);
  FUN_7136cdfc(&uStack_3c);
  FUN_7136cdfc(&uStack_48);
  if (*(byte *)(*(int *)(param_2 + 0x388) + 0xde) - 0xf < 2) {
    if ((param_6 != 0) && ((*(byte *)(param_2 + 0x48a) & 4) != 0)) {
      return 0;
    }
    if ((param_7 != 0) && (iVar12 = FUN_7149c3f0(param_2,8,0), iVar12 == 0)) {
      return 0;
    }
    FUN_7149cf04(&uStack_54,param_2,8);
    FUN_7136d040(param_3,&uStack_54);
    *param_4 = 8;
    return 1;
  }
  uStack_70 = 0x4479c000;
  if ((*(int *)(param_2 + 0x5a4) == 9) || ((*(byte *)(*(int *)(param_2 + 0x388) + 0xcd) & 2) != 0))
  {
    uVar2 = 0;
    if (param_5 != 0) {
      uVar2 = *(uint *)(param_2 + 0x468);
    }
    if (param_5 == 0 || uVar2 == 0) {
      if (param_6 != 0) {
        uVar2 = (uint)*(byte *)(param_2 + 0x48a);
      }
      if (param_6 == 0 || (uVar2 & 2) == 0) {
        if ((param_7 != 0) && (iVar3 = FUN_7149c3f0(param_2,0xb,0), iVar3 == 0)) goto LAB_7149ddb0;
        FUN_7149cf04(&uStack_54,param_2,0xb);
        FUN_7136d040(&uStack_3c,&uStack_54);
        uVar9 = uStack_38;
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
        if (*(int *)(param_1 + 0x14) == 0) {
          puVar7 = (undefined4 *)(param_1 + 4);
        }
        uVar10 = *puVar7;
        uVar8 = puVar7[1];
        uStack_4c = FUN_71ba240c(uStack_34,puVar7[2]);
        uStack_50 = FUN_71ba240c(uVar9,uVar8);
        uStack_54 = FUN_71ba240c(uStack_3c,uVar10);
        FUN_7136e6f0(&uStack_5c,&uStack_54);
        uVar9 = 0x4479c000;
        uStack_6c = uStack_5c;
        uVar11 = 1;
        uVar10 = uVar9;
        uVar8 = uStack_58;
        goto LAB_7149ddc4;
      }
    }
LAB_7149dd84:
    uVar11 = 0;
    uVar9 = 0x4479c000;
    uStack_6c = 0x4479c000;
    uVar10 = uVar9;
    uVar8 = uVar9;
  }
  else {
    uVar2 = 0;
    if (param_5 != 0) {
      uVar2 = *(uint *)(param_2 + 0x468);
    }
    if (param_5 != 0 && uVar2 != 0) goto LAB_7149dd84;
    if (param_6 != 0) {
      uVar2 = (uint)*(byte *)(param_2 + 0x48a);
    }
    if (param_6 != 0 && (uVar2 & 4) != 0) goto LAB_7149dd84;
    if ((param_7 == 0) || (iVar3 = FUN_7149c3f0(param_2,8,0), iVar3 != 0)) {
      FUN_7149cf04(&uStack_54,param_2,8);
      FUN_7136d040(&uStack_30,&uStack_54);
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar7 = (undefined4 *)(param_1 + 4);
      }
      uVar9 = *puVar7;
      uVar10 = puVar7[1];
      uStack_4c = FUN_71ba240c(uStack_28,puVar7[2]);
      uStack_50 = FUN_71ba240c(uStack_2c,uVar10);
      uStack_54 = FUN_71ba240c(uStack_30,uVar9);
      FUN_7136e6f0(&uStack_5c,&uStack_54);
      uVar11 = 1;
      uStack_6c = 0x4479c000;
      uVar9 = uStack_58;
      uVar10 = uStack_5c;
      uVar8 = 0x4479c000;
    }
    else {
LAB_7149ddb0:
      uVar11 = 0;
      uVar9 = 0x4479c000;
      uStack_6c = 0x4479c000;
      uVar10 = uVar9;
      uVar8 = uVar9;
    }
  }
LAB_7149ddc4:
  if ('\x03' < *(char *)(iVar12 + 100)) {
    bVar1 = *(byte *)(*(int *)(param_2 + 0x388) + 0xcd);
    uVar2 = (uint)bVar1;
    if (((bVar1 & 0x80) == 0) ||
       ((*(int *)(param_2 + 0x5a0) == 0 && (uVar2 = *(uint *)(param_2 + 0x688), uVar2 != 0)))) {
      if (param_6 != 0) {
        uVar2 = (uint)*(byte *)(param_2 + 0x48a);
      }
      if ((param_6 == 0 || (uVar2 & 2) == 0) &&
         ((param_7 == 0 || (iVar3 = FUN_7149c3f0(param_2,0xb,0), iVar3 != 0)))) {
        iVar13 = *(int *)(iVar12 + 0x74);
        iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x3f8),0);
        if (iVar3 == 0) {
LAB_7149de5c:
          if ((param_5 != 0) && (*(int *)(param_2 + 0x474) != 0)) {
LAB_7149de7c:
            if (*(int *)(param_2 + 0x46c) != 0) goto LAB_7149dfc8;
          }
          if (iVar3 != 0) {
            uVar4 = *(undefined4 *)(iVar13 + 0x3fc);
            goto LAB_7149de98;
          }
LAB_7149debc:
          iVar3 = 0;
          if (param_5 != 0) {
            iVar3 = *(int *)(param_2 + 0x474);
          }
          if (param_5 == 0 || iVar3 == 0) {
            uVar8 = 0xc;
            goto LAB_7149dee0;
          }
LAB_7149df40:
          if (*(int *)(param_2 + 0x46c) == 0) goto LAB_7149e2b0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar13 + 0x3fc);
          iVar5 = FUN_71ba2cf0(uVar4,0);
          if ((iVar5 == 0) || (iVar5 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x400),0), iVar5 == 0))
          goto LAB_7149de5c;
          if (param_5 != 0) goto LAB_7149de7c;
LAB_7149de98:
          iVar3 = FUN_71ba2cf0(uVar4,0);
          if ((iVar3 == 0) || (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x400),0), iVar3 == 0))
          goto LAB_7149debc;
          if (param_5 != 0) goto LAB_7149df40;
LAB_7149e2b0:
          uVar8 = 0xb;
LAB_7149dee0:
          FUN_7149cf04(&uStack_54,param_2,uVar8);
          FUN_7136d040(&uStack_3c,&uStack_54);
        }
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
        if (*(int *)(param_1 + 0x14) == 0) {
          puVar7 = (undefined4 *)(param_1 + 4);
        }
        uVar8 = *puVar7;
        uVar11 = puVar7[1];
        uStack_4c = FUN_71ba240c(uStack_34,puVar7[2]);
        uStack_50 = FUN_71ba240c(uStack_38,uVar11);
        uStack_54 = FUN_71ba240c(uStack_3c,uVar8);
        FUN_7136e6f0(&uStack_5c,&uStack_54);
        uVar11 = 1;
        uStack_6c = uStack_5c;
        uVar8 = uStack_58;
      }
    }
LAB_7149dfc8:
    if (((*(byte *)(*(int *)(param_2 + 0x388) + 0xcd) & 0x80) == 0) ||
       ((*(int *)(param_2 + 0x5a0) == 0 && (*(int *)(param_2 + 0x680) != 0)))) {
      uVar2 = 0;
      if (param_5 != 0) {
        uVar2 = *(uint *)(param_2 + 0x470);
      }
      if (param_5 == 0 || uVar2 == 0) {
        if (param_6 != 0) {
          uVar2 = (uint)*(byte *)(param_2 + 0x48a);
        }
        if ((param_6 == 0 || (uVar2 & 8) == 0) &&
           ((param_7 == 0 || (iVar3 = FUN_7149c3f0(param_2,9,0), iVar3 != 0)))) {
          iVar13 = *(int *)(iVar12 + 0x74);
          iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x404),0);
          if ((iVar3 == 0) ||
             ((iVar5 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x408),0), iVar5 == 0 ||
              (iVar5 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x40c),0), iVar5 == 0)))) {
            iVar5 = 0;
            if (param_5 != 0) {
              iVar5 = *(int *)(param_2 + 0x478);
            }
            if (param_5 != 0 && iVar5 != 0) goto LAB_7149e2cc;
LAB_7149e078:
            if (((iVar3 == 0) ||
                (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x408),0), iVar3 == 0)) ||
               (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x40c),0), iVar3 == 0)) {
              if ((param_5 == 0) || (*(int *)(param_2 + 0x478) == 0)) goto LAB_7149e308;
            }
            else if (param_5 == 0) goto LAB_7149e0d4;
            if (*(int *)(param_2 + 0x470) == 0) {
LAB_7149e0d4:
              uVar11 = 9;
              goto LAB_7149e314;
            }
          }
          else {
            if (param_5 != 0) {
LAB_7149e2cc:
              if (*(int *)(param_2 + 0x470) != 0) goto LAB_7149e0f0;
              goto LAB_7149e078;
            }
            iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x40c),0);
            if (iVar3 != 0) goto LAB_7149e0d4;
LAB_7149e308:
            uVar11 = 0xd;
LAB_7149e314:
            FUN_7149cf04(&uStack_54,param_2,uVar11);
            FUN_7136d040(&uStack_48,&uStack_54);
          }
          puVar7 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x30);
          if (*(int *)(param_1 + 0x14) == 0) {
            puVar7 = (undefined4 *)(param_1 + 4);
          }
          uVar11 = *puVar7;
          uVar4 = puVar7[1];
          uStack_4c = FUN_71ba240c(uStack_40,puVar7[2]);
          uStack_50 = FUN_71ba240c(uStack_44,uVar4);
          uStack_54 = FUN_71ba240c(uStack_48,uVar11);
          FUN_7136e6f0(&uStack_5c,&uStack_54);
          uVar11 = 1;
          uStack_70 = uStack_58;
          uVar4 = uStack_5c;
          goto LAB_7149e0f8;
        }
      }
    }
  }
LAB_7149e0f0:
  uVar4 = 0x4479c000;
LAB_7149e0f8:
  FUN_7136d040(param_3,&uStack_30);
  *param_4 = 8;
  uVar8 = FUN_71ba21e8(uVar8,uVar8);
  uVar6 = FUN_71ba21e8(uStack_6c,uStack_6c);
  uVar8 = FUN_71ba0b38(uVar6,uVar8);
  uVar9 = FUN_71ba21e8(uVar9,uVar9);
  uVar10 = FUN_71ba21e8(uVar10,uVar10);
  uVar9 = FUN_71ba0b38(uVar10,uVar9);
  iVar3 = FUN_71ba2d10(uVar8,uVar9);
  if (iVar3 != 0) {
    *param_4 = 0xb;
    iVar13 = *(int *)(iVar12 + 0x74);
    iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x3f8),0);
    if (((iVar3 == 0) || (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x3fc),0), iVar3 == 0)) ||
       (iVar3 = FUN_71ba2cf0(*(undefined4 *)(iVar13 + 0x400),0), iVar3 == 0)) {
      iVar3 = 0;
      if (param_5 != 0) {
        iVar3 = *(int *)(param_2 + 0x474);
      }
      if (param_5 == 0 || iVar3 == 0) {
        *param_4 = 0xc;
      }
    }
    FUN_7136d040(param_3,&uStack_3c);
    uVar9 = uVar8;
  }
  uVar10 = FUN_71ba21e8(uStack_70,uStack_70);
  uVar8 = FUN_71ba21e8(uVar4,uVar4);
  uVar10 = FUN_71ba0b38(uVar8,uVar10);
  iVar3 = FUN_71ba2d10(uVar10,uVar9);
  if (iVar3 != 0) {
    *param_4 = 9;
    iVar3 = *(int *)(iVar12 + 0x74);
    iVar12 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x404),0);
    if (((iVar12 == 0) || (iVar12 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x408),0), iVar12 == 0)) ||
       (iVar12 = FUN_71ba2cf0(*(undefined4 *)(iVar3 + 0x40c),0), iVar12 == 0)) {
      iVar12 = 0;
      if (param_5 != 0) {
        iVar12 = *(int *)(param_2 + 0x478);
      }
      if (param_5 == 0 || iVar12 == 0) {
        *param_4 = 0xd;
      }
    }
    FUN_7136d040(param_3,&uStack_48);
  }
  return uVar11;
}


// =========================================================================
// Function: FUN_7149ec18
// Entry: 0x7149ec18 | Size: 152 bytes
// =========================================================================

undefined4 FUN_7149ec18(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x464) == param_2) {
    return 10;
  }
  uVar1 = 8;
  if ((*(byte *)(param_1 + 0x42d) & 2) == 0) {
    uVar2 = FUN_713bb684(param_1);
    uVar1 = 0xb;
    switch(uVar2) {
    case 0:
      if (*(int *)(param_1 + 0x5a4) != 9) {
        uVar1 = 0xb;
        if ((*(byte *)(*(int *)(param_1 + 0x388) + 0xcd) & 2) == 0) {
          uVar1 = 8;
        }
        return uVar1;
      }
      break;
    case 1:
      break;
    case 2:
      return 9;
    case 3:
      return 0xc;
    case 4:
      return 0xd;
    default:
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7149eda4
// Entry: 0x7149eda4 | Size: 388 bytes
// =========================================================================

void FUN_7149eda4(undefined4 param_1)

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
  if (((DAT_710eadf4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eadf4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1820);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1810);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_700811fc;
      uVar4 = DAT_700811f8;
      uVar3 = DAT_700811f4;
      *puVar10 = DAT_700811f0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70081210;
      uVar5 = DAT_7008120c;
      uVar4 = DAT_70081208;
      uVar3 = DAT_70081204;
      puVar10[4] = DAT_70081200;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_70081214;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149fa14,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1820);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1810);
    if (*(char *)(iVar8 + 0x26) != '\0') {
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
        bVar2 = (0x24 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x26) = 0;
    }
    DAT_710eadf0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eadf4);
  }
                    /* WARNING: Could not recover jumptable at 0x7149edd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eadf0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7149f1c0
// Entry: 0x7149f1c0 | Size: 388 bytes
// =========================================================================

void FUN_7149f1c0(undefined4 param_1)

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
  if (((DAT_710eadfc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eadfc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1840);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1830);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_70081228;
      uVar5 = DAT_70081224;
      uVar4 = DAT_70081220;
      uVar3 = DAT_7008121c;
      *puVar11 = DAT_70081218;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70081240;
      uVar6 = DAT_7008123c;
      uVar5 = DAT_70081238;
      uVar4 = DAT_70081234;
      uVar3 = DAT_70081230;
      puVar11[5] = DAT_7008122c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_70081244;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149fa64,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1840);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1830);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe569d1dd >> iVar15) |
                (byte)(0x750729cb << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x750729cb >> (uVar16 & 0xff));
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
    DAT_710eadf8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eadfc);
  }
                    /* WARNING: Could not recover jumptable at 0x7149f1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eadf8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7149f5dc
// Entry: 0x7149f5dc | Size: 416 bytes
// =========================================================================

void FUN_7149f5dc(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eae04 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eae04), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1860,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1850);
      *(undefined1 *)((int)puVar10 + 0x3a) = 1;
      uVar5 = DAT_70081254;
      uVar4 = DAT_70081250;
      uVar3 = DAT_7008124c;
      *puVar10 = DAT_70081248;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70081268;
      uVar5 = DAT_70081264;
      uVar4 = DAT_70081260;
      uVar3 = DAT_7008125c;
      puVar10[4] = DAT_70081258;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7008127c;
      uVar5 = DAT_70081278;
      uVar4 = DAT_70081274;
      uVar3 = DAT_70081270;
      puVar10[9] = DAT_7008126c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined2 *)(puVar10 + 0xe) = DAT_70081280;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7149fab4,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1860);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1850);
    if (*(char *)(iVar8 + 0x3a) != '\0') {
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
        bVar2 = (0x38 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3a) = 0;
    }
    DAT_710eae00 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eae04);
  }
                    /* WARNING: Could not recover jumptable at 0x7149f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eae00)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7149fb04
// Entry: 0x7149fb04 | Size: 396 bytes
// =========================================================================

undefined4 * FUN_7149fb04(undefined4 *param_1)

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
  
  FUN_71499c68();
  *param_1 = &DAT_70b0e364;
  DataMemoryBarrier(0xb);
  if (((DAT_710eae0c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eae0c), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1880);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1870);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar4 = DAT_70081290;
      uVar3 = DAT_7008128c;
      *puVar8 = DAT_70081288;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_700812a0;
      uVar4 = DAT_7008129c;
      uVar3 = DAT_70081298;
      puVar8[3] = DAT_70081294;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined1 *)(puVar8 + 7) = DAT_700812a4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713f2048,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1880);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1870);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
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
        bVar2 = (0x1b < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1d) = 0;
    }
    DAT_710eae08 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eae0c);
  }
  (*DAT_710eae08)(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_714a0f60
// Entry: 0x714a0f60 | Size: 380 bytes
// =========================================================================

void FUN_714a0f60(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eae2c & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eae2c), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1900,param_2);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c18f0);
      *(undefined1 *)(iVar4 + 0x6d) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70081378,0x6d);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714a152c,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1900);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c18f0);
    if (*(char *)(iVar4 + 0x6d) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        uVar10 = iVar9 - 0x20;
        bVar3 = (byte)(0x2549d30d >> iVar9) | (byte)(0x65617345 << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x65617345 >> (uVar10 & 0xff));
        }
        *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
        bVar11 = 0xfffffffe < uVar7;
        bVar1 = uVar8 == 0;
        bVar2 = (0x6b < uVar7) <= uVar8;
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar4 + 0x6d) = 0;
    }
    DAT_710eae28 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eae2c);
  }
                    /* WARNING: Could not recover jumptable at 0x714a0f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eae28)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714a157c
// Entry: 0x714a157c | Size: 480 bytes
// =========================================================================

undefined4 *
FUN_714a157c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

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
  
  FUN_7149fb04();
  *param_1 = &DAT_70b0e3c4;
  FUN_7136cdfc(param_1 + 3);
  *param_1 = &DAT_70b0e394;
  FUN_7136cdfc(param_1 + 8);
  DataMemoryBarrier(0xb);
  if (((DAT_710eae34 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eae34), iVar3 != 0)) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1920);
    if (*pcVar4 == '\0') {
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1910);
      *(undefined1 *)(iVar3 + 0xa7) = 1;
      imp___aeabi_memcpy8(iVar3,&DAT_700813e8,0xa7);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714a3468,iVar3,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1920);
      *puVar7 = 1;
    }
    iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1910);
    if (*(char *)(iVar3 + 0xa7) != '\0') {
      uVar9 = 0;
      uVar10 = 0;
      do {
        iVar5 = (uVar9 & 7) * 8;
        uVar6 = iVar5 - 0x20;
        bVar8 = (byte)(0x93a3c787 >> iVar5) | (byte)(0x47abcda5 << ((uVar9 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar6) {
          bVar8 = (byte)(0x47abcda5 >> (uVar6 & 0xff));
        }
        *(byte *)(iVar3 + uVar9) = *(byte *)(iVar3 + uVar9) ^ bVar8;
        bVar11 = 0xfffffffe < uVar9;
        bVar1 = uVar10 == 0;
        bVar2 = (0xa5 < uVar9) <= uVar10;
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + bVar11;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar3 + 0xa7) = 0;
    }
    DAT_710eae30 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eae34);
  }
  (*DAT_710eae30)(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}


// =========================================================================
// Function: FUN_714a35e8
// Entry: 0x714a35e8 | Size: 52 bytes
// =========================================================================

void FUN_714a35e8(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x1c))(param_1,param_2,1,0);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0xd) = 0;
  return;
}


// =========================================================================
// Function: FUN_714a4e4c
// Entry: 0x714a4e4c | Size: 472 bytes
// =========================================================================

void FUN_714a4e4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *(int *)*param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if ((*(byte *)(iVar1 + 0x484) & 3) == 0) {
    puVar8 = (undefined4 *)param_1[2];
    uVar4 = *(undefined4 *)(iVar1 + 0x48);
    uVar10 = *(undefined4 *)(iVar1 + 0x4c);
    uVar9 = *(undefined4 *)(iVar1 + 0x50);
    iVar1 = param_1[1];
    uVar5 = *(undefined4 *)(iVar1 + 0x30);
    uVar6 = *(undefined4 *)(iVar1 + 0x34);
    uVar7 = FUN_71ba240c(uVar9,*(undefined4 *)(iVar1 + 0x38));
    uVar3 = *puVar8;
    uVar2 = puVar8[1];
    uVar9 = FUN_71ba240c(uVar9,puVar8[2]);
    uStack_34 = FUN_71ba0b38(uVar7,uVar9);
    uVar7 = FUN_71ba240c(uVar10,uVar6);
    uVar2 = FUN_71ba240c(uVar10,uVar2);
    uStack_38 = FUN_71ba0b38(uVar7,uVar2);
    uVar7 = FUN_71ba240c(uVar4,uVar5);
    uVar3 = FUN_71ba240c(uVar4,uVar3);
    uStack_3c = FUN_71ba0b38(uVar7,uVar3);
    uVar7 = FUN_7136e5f4(&uStack_3c,&uStack_30);
    uVar7 = FUN_71ba21e8(uVar7,0x3e4ccccd);
    uVar7 = FUN_71ba0b38(*param_5,uVar7);
    *param_5 = uVar7;
  }
  else {
    uVar7 = *param_5;
  }
  uVar3 = imp_sinf(*param_6);
  puVar8 = DAT_70b42050;
  uVar3 = FUN_71ba21e8(*DAT_70b42050,uVar3);
  uVar3 = FUN_71ba21e8(uVar3,0xbc23d70a);
  uVar7 = FUN_71ba0b38(uVar7,uVar3);
  *param_5 = uVar7;
  uVar7 = FUN_71ba21e8(uVar7,*(undefined4 *)param_1[3]);
  *param_5 = uVar7;
  uVar7 = FUN_71ba21e8(uVar7,*puVar8);
  uVar7 = FUN_71ba0b38(uVar7,*param_6);
  iVar1 = FUN_71ba2d10(uVar7,0xbf490ff9);
  if (iVar1 != 0) {
    uVar7 = 0xbf490ff9;
  }
  iVar1 = FUN_71ba2d70(uVar7,0x3f490ff9);
  if (iVar1 != 0) {
    uVar7 = 0x3f490ff9;
  }
  *param_6 = uVar7;
  return;
}


// =========================================================================
// Function: FUN_714a52a8
// Entry: 0x714a52a8 | Size: 1392 bytes
// =========================================================================

void FUN_714a52a8(uint *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_7136cdfc();
  FUN_7136cdfc(&uStack_30);
  uVar14 = *(uint *)(param_2 + 0x18);
  iVar1 = *(int *)(DAT_70c39074 + *(short *)(param_3 + 0x26) * 4);
  if (((*(byte *)(param_3 + 0x42d) & 1) == 0) || (uVar2 = 0, (uVar14 & 0xfffffffd) != 9)) {
    uVar2 = FUN_71ba21e8(*(undefined4 *)(*(int *)(param_3 + 0x388) + 0xd4),param_4);
  }
  uVar9 = 0;
  if (param_5 == 0) {
LAB_714a5390:
    uVar7 = uVar14 - 8;
    if ((uVar7 < 0xb) && ((0x43fU >> (uVar7 & 0xff) & 1) != 0)) {
      uVar9 = *(undefined4 *)(&DAT_700815d0 + uVar7 * 4);
    }
  }
  else {
    uVar7 = (uint)*(short *)(param_5 + 0x2c);
    if (0x17b < (int)uVar7) {
      uVar7 = uVar7 - 0x17c & 0xffff;
      if (uVar7 < 9) {
        uVar9 = *(undefined4 *)(&DAT_700815ac + uVar7 * 4);
      }
      goto LAB_714a5390;
    }
    if ((int)uVar7 < 0x17a) {
      if ((int)uVar7 < 0x175) {
        if ((uVar7 & 0xfffffffe) == 0x6c) {
          uVar9 = 3;
        }
      }
      else if (uVar7 != 0x179) {
        uVar9 = 3;
      }
      goto LAB_714a5390;
    }
  }
  if (((param_5 == 0) || (1 < *(ushort *)(param_5 + 0x2c) - 0x185)) ||
     (iVar6 = (short)(ushort)*(byte *)(*(int *)(param_3 + 0x388) + 0xde) * 0x94,
     ((&DAT_70b2e960)[iVar6] & 0x20) == 0)) {
    puVar8 = &uStack_3c;
    FUN_7130bb60(puVar8,&DAT_70b2e958 +
                        (short)(ushort)*(byte *)(*(int *)(param_3 + 0x388) + 0xde) * 0x94,uVar9);
  }
  else {
    FUN_7130bb60(&uStack_3c,&DAT_70b2e958 + iVar6,uVar9);
    FUN_7136d040(&uStack_30,&uStack_3c);
    FUN_7130bb60(&uStack_3c,
                 &DAT_70b2e958 + (short)(ushort)*(byte *)(*(int *)(param_3 + 0x388) + 0xde) * 0x94,
                 uVar9);
    uVar9 = uStack_2c;
    uVar12 = *(undefined4 *)(param_5 + 0x18);
    uVar3 = FUN_71ba21e8(uVar12,uStack_28);
    uVar4 = FUN_71ba240c(0x3f800000,uVar12);
    uVar5 = FUN_71ba21e8(uVar4,uStack_34);
    uStack_40 = FUN_71ba0b38(uVar3,uVar5);
    uVar9 = FUN_71ba21e8(uVar12,uVar9);
    uVar3 = FUN_71ba21e8(uVar4,uStack_38);
    uStack_44 = FUN_71ba0b38(uVar9,uVar3);
    uVar9 = FUN_71ba21e8(uVar12,uStack_30);
    uVar3 = FUN_71ba21e8(uVar4,uStack_3c);
    uStack_48 = FUN_71ba0b38(uVar9,uVar3);
    puVar8 = &uStack_48;
  }
  FUN_7136d040(&uStack_30,puVar8);
  if (10 < uVar14 - 8) {
switchD_714a544c_caseD_e:
    iVar6 = 0;
    if (*(int *)(param_3 + 0x5a4) != 5) {
      iVar6 = 0x30;
    }
    FUN_7136d040(param_1,*(int *)(iVar1 + 0x74) + iVar6 + 0x32c);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    param_1 = &uStack_30;
    goto LAB_714a5838;
  }
  puVar11 = param_1 + 1;
  switch(uVar14) {
  case 8:
    iVar6 = 5;
    if (*(short *)(param_3 + 0x26) != 0x7ec) {
      iVar6 = (uint)(*(int *)(param_3 + 0x5a4) != 5) << 2;
    }
    FUN_7136d040(param_1,*(int *)(iVar1 + 0x74) + iVar6 * 0xc + 0x32c);
    uVar14 = FUN_71ba0b38(uVar2,*param_1);
    *param_1 = uVar14;
    uVar10 = *puVar11;
    uVar13 = param_1[2];
    uVar7 = uStack_30;
    uVar2 = uStack_2c;
    goto LAB_714a56c8;
  case 9:
    FUN_7136d040(param_1,*(int *)(iVar1 + 0x74) + 0x368);
    uVar14 = FUN_71ba0b38(uVar2,*param_1);
    uVar10 = *puVar11;
    uVar13 = param_1[2];
    *param_1 = uVar14;
    uVar7 = uStack_30;
    uVar2 = uStack_2c;
LAB_714a56c8:
    uStack_30 = uVar7 ^ 0x80000000;
    uStack_34 = FUN_71ba240c(uVar13,uStack_28);
    uStack_38 = FUN_71ba240c(uVar10,uVar2);
    break;
  case 10:
    iVar6 = 0;
    if (*(int *)(param_3 + 0x5a4) != 5) {
      iVar6 = 0x30;
    }
    iVar1 = *(int *)(iVar1 + 0x74) + iVar6 + 0x32c;
    goto LAB_714a5788;
  case 0xb:
    iVar1 = *(int *)(iVar1 + 0x74) + 0x368;
LAB_714a5788:
    FUN_7136d040(param_1,iVar1);
    uVar14 = FUN_71ba0b38(uVar2,*param_1);
    uVar14 = uVar14 ^ 0x80000000;
    uVar7 = *puVar11;
    *param_1 = uVar14;
    uStack_34 = FUN_71ba240c(param_1[2],uStack_28);
    uStack_38 = FUN_71ba240c(uVar7,uStack_2c);
LAB_714a5828:
    uStack_3c = FUN_71ba240c(uVar14,uStack_30);
    goto LAB_714a5838;
  case 0xc:
    FUN_7136d040(param_1,*(int *)(iVar1 + 0x74) + 0x3f8);
    uVar14 = *puVar11;
    uStack_34 = FUN_71ba240c(param_1[2],uStack_28);
    uStack_38 = FUN_71ba240c(uVar14,uStack_2c);
    uVar14 = *param_1;
    goto LAB_714a5828;
  case 0xd:
    FUN_7136d040(param_1,*(int *)(iVar1 + 0x74) + 0x404);
    uVar14 = uStack_30;
    uStack_30 = uStack_30 ^ 0x80000000;
    uVar7 = *puVar11;
    uStack_34 = FUN_71ba240c(param_1[2],uStack_28);
    uStack_38 = FUN_71ba240c(uVar7,uStack_2c);
    uVar7 = *param_1;
    break;
  default:
    goto switchD_714a544c_caseD_e;
  case 0x12:
    iVar6 = 0;
    if (*(int *)(param_3 + 0x5a4) != 5) {
      iVar6 = 0x30;
    }
    FUN_7136d040(param_1,*(int *)(iVar1 + 0x74) + iVar6 + 0x32c);
    uVar14 = *puVar11;
    uStack_34 = FUN_71ba0b38(param_1[2],uStack_28);
    uStack_38 = FUN_71ba0b38(uVar14,uStack_2c);
    uVar14 = *param_1;
    uVar7 = uStack_30;
  }
  uStack_3c = FUN_71ba0b38(uVar14,uVar7);
LAB_714a5838:
  FUN_7136d040(param_1,&uStack_3c);
  return;
}


// =========================================================================
// Function: FUN_714a6e6c
// Entry: 0x714a6e6c | Size: 1352 bytes
// =========================================================================

int FUN_714a6e6c(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined1 uVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined1 auStack_138 [260];
  undefined2 *puStack_34;
  undefined1 uStack_2d;
  uint *apuStack_2c [2];
  
  piVar23 = (int *)(param_1 + 4);
  *piVar23 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  piVar8 = (int *)(param_1 + 8);
  *piVar8 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            ((undefined4 *)(param_1 + 0x24),param_2);
  *(char *)(param_1 + 0x30) = (char)param_3;
  iVar9 = thunk_MwhHq(0x98);
  imp___aeabi_memclr8(iVar9,0x68);
  *(int *)(iVar9 + 0x58) = iVar9 + 0x5c;
  imp___aeabi_memclr4(iVar9 + 100,0x34);
  iVar20 = *piVar23;
  *piVar23 = iVar9;
  if (iVar20 != 0) {
    FUN_719f4a70(iVar20);
    thunk_qNQrlu();
    iVar9 = *piVar23;
  }
  FUN_719f5944(iVar9,param_2,1,1,1);
  piVar10 = (int *)FUN_719f7b9c(*piVar23);
  iVar19 = *piVar10;
  iVar24 = piVar10[1];
  iVar9 = iVar24 - iVar19;
  uVar26 = iVar9 * -0x73ecade3;
  lVar6 = (ulonglong)uVar26 * 0x48;
  uVar11 = (uint)lVar6;
  iVar20 = uVar11 + 8;
  if (0xfffffff7 < uVar11) {
    iVar20 = -1;
  }
  if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
    iVar20 = -1;
  }
  puVar12 = (undefined4 *)thunk__IBDl(iVar20);
  *puVar12 = 0x48;
  puVar12[1] = uVar26;
  puVar12 = puVar12 + 2;
  if (iVar24 != iVar19) {
    puVar18 = puVar12;
    do {
      puVar18[0x11] = 0;
      *puVar18 = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      puVar18[10] = 0;
      puVar18[0xb] = 0;
      puVar18[0xc] = 0;
      puVar18 = puVar18 + 0x12;
    } while (puVar18 != puVar12 + iVar9 * 0x195bc60a);
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar12;
  *(int *)(param_1 + 0x20) = (piVar10[1] - *piVar10) * -0x73ecade3;
  iVar9 = *piVar10;
  if (piVar10[1] != iVar9) {
    uVar11 = 0;
    do {
      FUN_719f7a3c(&puStack_34,*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(uVar11 * 0x35 + iVar9 + 0x31),1);
      iVar20 = *(int *)(param_1 + 0x1c);
      piVar16 = *(int **)(puStack_34 + 4);
      uVar4 = puStack_34[1];
      uVar5 = *puStack_34;
      uVar1 = *(undefined1 *)(puStack_34 + 2);
      uVar2 = *(undefined1 *)(puStack_34 + 3);
      uVar22 = *(undefined1 *)((int)puStack_34 + 5);
      uVar3 = *(undefined1 *)((int)puStack_34 + 7);
      imp___aeabi_memcpy(auStack_138,puStack_34 + 6,0x100);
      iVar9 = FUN_719f87a8(*(undefined4 *)(param_1 + 4));
      if (iVar9 != 0) {
        uVar22 = (char)param_3;
      }
      iVar9 = uVar11 * 0x35 + *piVar10;
      piVar25 = (int *)(iVar20 + uVar11 * 0x48);
      iVar20 = *(int *)(iVar9 + 0x2d);
      iVar19 = 0;
      if (*(char *)(iVar9 + 8) != '\0') {
        iVar19 = *(int *)(iVar9 + 0x19);
      }
      piVar25[5] = *(int *)(iVar9 + 0x1d);
      *(undefined1 *)((int)piVar25 + 10) = uVar2;
      *(undefined1 *)(piVar25 + 2) = uVar1;
      *(undefined2 *)((int)piVar25 + 6) = uVar4;
      *(undefined2 *)(piVar25 + 1) = uVar5;
      piVar25[3] = iVar20;
      piVar25[4] = iVar19;
      *(undefined1 *)((int)piVar25 + 0xb) = uVar3;
      *(undefined1 *)((int)piVar25 + 9) = uVar22;
      *piVar25 = param_1;
      FUN_719f77d4(&iStack_148,*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(uVar11 * 0x35 + *piVar10 + 4));
      if ((*(byte *)(piVar25 + 6) & 1) != 0) {
        thunk_qNQrlu(piVar25[8]);
      }
      piVar25[6] = iStack_148;
      piVar25[7] = iStack_144;
      piVar25[8] = iStack_140;
      iVar9 = piVar25[8];
      if ((*(byte *)(piVar25 + 6) & 1) == 0) {
        iVar9 = (int)piVar25 + 0x19;
      }
      uVar26 = FUN_714af5b8(iVar9);
      puVar17 = (uint *)(piVar25 + 9);
      *puVar17 = uVar26;
      if (piVar16 == (int *)0x0) {
        iVar20 = FUN_719f87a8(*piVar23);
        iVar9 = 0;
        if (iVar20 != 0) {
          iVar9 = param_3;
        }
        if (iVar20 != 0 && iVar9 != 0) {
          iVar9 = 0xc0;
          if ((*(byte *)((int)piVar25 + 0xb) < 0x15) &&
             ((1 << (uint)*(byte *)((int)piVar25 + 0xb) & 0x100019U) != 0)) {
            iVar9 = 0x100;
          }
          piVar25[0xf] = iVar9;
          iVar20 = imp_malloc(iVar9);
          piVar25[0xe] = iVar20;
          imp___aeabi_memclr(iVar20,iVar9);
        }
      }
      else {
        piVar25[0xf] = (int)piVar16;
        iVar9 = imp_malloc(piVar16);
        piVar25[0xe] = iVar9;
        imp___aeabi_memcpy(iVar9,auStack_138,piVar16);
      }
      uVar26 = *(uint *)(param_1 + 0xc);
      if (uVar26 != 0) {
        uVar21 = *puVar17;
        uVar13 = uVar26 - (uVar26 >> 1 & 0x55555555);
        uVar13 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar13 < 2) {
          uVar27 = uVar26 - 1 & uVar21;
        }
        else {
          uVar27 = uVar21;
          if (uVar26 <= uVar21) {
            FUN_71ba33fc(uVar21,uVar26);
            uVar27 = extraout_r1;
          }
        }
        piVar14 = *(int **)(*piVar8 + uVar27 * 4);
        if (piVar14 != (int *)0x0) {
          piVar16 = (int *)*piVar14;
        }
        if (piVar14 != (int *)0x0 && piVar16 != (int *)0x0) {
          do {
            uVar15 = piVar16[1];
            if (uVar21 == uVar15) {
              if (piVar16[2] == uVar21) goto LAB_714a7314;
            }
            else {
              if (uVar13 < 2) {
                uVar15 = uVar15 & uVar26 - 1;
              }
              else if (uVar26 <= uVar15) {
                FUN_71ba33fc(uVar15,uVar26);
                uVar15 = extraout_r1_00;
              }
              if (uVar15 != uVar27) break;
            }
            piVar16 = (int *)*piVar16;
          } while (piVar16 != (int *)0x0);
        }
      }
      apuStack_2c[0] = puVar17;
      FUN_714a9c8c(&iStack_148,piVar8,puVar17,&DAT_70081715,apuStack_2c,&uStack_2d);
      *(int **)(iStack_148 + 0xc) = piVar25;
LAB_714a7314:
      puVar7 = puStack_34;
      puStack_34 = (undefined2 *)0x0;
      if (puVar7 != (undefined2 *)0x0) {
        thunk_qNQrlu();
      }
      uVar11 = uVar11 + 1;
      iVar9 = *piVar10;
    } while (uVar11 < (uint)((piVar10[1] - iVar9) * -0x73ecade3));
  }
  FUN_719f776c(*(undefined4 *)(param_1 + 4));
  return param_1;
}


// =========================================================================
// Function: FUN_714a76a8
// Entry: 0x714a76a8 | Size: 1940 bytes
// =========================================================================

bool FUN_714a76a8(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  undefined1 uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  byte bVar22;
  int iVar23;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar24;
  int iVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  int iStack_170;
  byte abStack_148 [8];
  undefined4 uStack_140;
  undefined2 *puStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  byte abStack_34 [8];
  uint uStack_2c;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar23 = 0;
    uVar24 = 0;
    do {
      uVar24 = uVar24 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar23 + 0x14) = 0;
      iVar25 = *(int *)(param_1 + 0x1c) + iVar23;
      iVar23 = iVar23 + 0x48;
      *(undefined4 *)(iVar25 + 0x10) = 0;
    } while (uVar24 < *(uint *)(param_1 + 0x20));
  }
  iVar23 = thunk_MwhHq(0x98);
  imp___aeabi_memclr8(iVar23,0x68);
  *(int *)(iVar23 + 0x58) = iVar23 + 0x5c;
  imp___aeabi_memclr4(iVar23 + 100,0x34);
  iVar25 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar23;
  if (iVar25 != 0) {
    FUN_719f4a70(iVar25);
    thunk_qNQrlu();
    iVar23 = *(int *)(param_1 + 4);
  }
  FUN_719f5944(iVar23,(uint *)(param_1 + 0x24),1,1,1);
  iVar23 = FUN_719f8780(*(undefined4 *)(param_1 + 4));
  if ((iVar23 == 0) && (iVar23 = FUN_719f87a8(*(undefined4 *)(param_1 + 4)), iVar23 == 0)) {
    pcVar19 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1a80);
    if (*pcVar19 == '\0') {
      puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1a70);
      *(undefined1 *)((int)puVar20 + 0x2b) = 1;
      uVar9 = DAT_700816a8;
      uVar8 = DAT_700816a4;
      uVar7 = DAT_700816a0;
      uVar18 = DAT_7008169c;
      *puVar20 = DAT_70081698;
      puVar20[1] = uVar18;
      puVar20[2] = uVar7;
      puVar20[3] = uVar8;
      puVar20[4] = uVar9;
      uVar9 = DAT_700816bc;
      uVar8 = DAT_700816b8;
      uVar7 = DAT_700816b4;
      uVar18 = DAT_700816b0;
      puVar20[5] = DAT_700816ac;
      puVar20[6] = uVar18;
      puVar20[7] = uVar7;
      puVar20[8] = uVar8;
      puVar20[9] = uVar9;
      uVar2 = DAT_700816c2;
      *(undefined2 *)(puVar20 + 10) = DAT_700816c0;
      *(undefined1 *)((int)puVar20 + 0x2a) = uVar2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714a9bb4,puVar20,&DAT_70b0e000);
      puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1a80);
      *puVar21 = 1;
    }
    iVar23 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1a70);
    if (*(char *)(iVar23 + 0x2b) != '\0') {
      uVar24 = 0;
      uVar14 = 0;
      do {
        iVar25 = (uVar24 & 7) * 8;
        bVar22 = (byte)(0x9df19131 >> iVar25) |
                 (byte)(0x7dbd4949 << ((uVar24 & 7) * -8 + 0x20 & 0xff));
        uVar27 = iVar25 - 0x20;
        if (-1 < (int)uVar27) {
          bVar22 = (byte)(0x7dbd4949 >> (uVar27 & 0xff));
        }
        *(byte *)(iVar23 + uVar24) = *(byte *)(iVar23 + uVar24) ^ bVar22;
        bVar30 = 0xfffffffe < uVar24;
        bVar26 = uVar14 == 0;
        bVar1 = (0x29 < uVar24) <= uVar14;
        uVar24 = uVar24 + 1;
        uVar14 = uVar14 + bVar30;
      } while (bVar26 && bVar1);
      *(undefined1 *)(iVar23 + 0x2b) = 0;
    }
    iVar25 = *(int *)(param_1 + 0x2c);
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      iVar25 = param_1 + 0x25;
    }
    FUN_7188543c(iVar23,iVar25);
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      uStack_40 = *(uint *)(param_1 + 0x24);
      uStack_3c = *(undefined4 *)(param_1 + 0x28);
      uStack_38 = *(undefined4 *)(param_1 + 0x2c);
    }
    else {
      FUN_712f6d58(&uStack_40,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
    }
    FUN_714bab0c(abStack_148,&uStack_40);
    FUN_714ba554(abStack_34,abStack_148,0,0,0);
    if ((abStack_148[0] & 1) != 0) {
      thunk_qNQrlu(uStack_140);
    }
    if ((uStack_40 & 1) != 0) {
      thunk_qNQrlu(uStack_38);
    }
    imp___aeabi_memclr8(abStack_148,0x68);
    uVar24 = uStack_2c;
    if ((abStack_34[0] & 1) == 0) {
      uVar24 = (uint)abStack_34 | 1;
    }
    iVar23 = imp_stat(uVar24,abStack_148);
    if (iVar23 == 0) {
      bVar26 = false;
    }
    else {
      piVar13 = (int *)imp___errno();
      bVar26 = *piVar13 == 2;
    }
    iVar23 = *(int *)(param_1 + 0x20);
    if ((abStack_34[0] & 1) != 0) {
      thunk_qNQrlu(uStack_2c);
    }
    return (bool)(bVar26 & iVar23 == 0);
  }
  piVar13 = (int *)FUN_719f7b9c(*(undefined4 *)(param_1 + 4));
  iVar23 = *piVar13;
  if (piVar13[1] == iVar23) {
    iStack_170 = 0;
  }
  else {
    uVar24 = 0;
    iStack_170 = 0;
    do {
      FUN_719f7a3c(&puStack_44,*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(uVar24 * 0x35 + iVar23 + 0x31),1);
      uVar2 = *(undefined1 *)(puStack_44 + 2);
      uVar12 = *(undefined1 *)((int)puStack_44 + 5);
      uVar3 = *(undefined1 *)(puStack_44 + 3);
      uVar4 = *(undefined1 *)((int)puStack_44 + 7);
      uVar5 = puStack_44[1];
      uVar6 = *puStack_44;
      uVar27 = *(uint *)(puStack_44 + 4);
      imp___aeabi_memcpy(abStack_148,puStack_44 + 6,0x100);
      FUN_719f77d4(abStack_34,*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(uVar24 * 0x35 + *piVar13 + 4));
      uVar14 = uStack_2c;
      if ((abStack_34[0] & 1) == 0) {
        uVar14 = (uint)abStack_34 | 1;
      }
      uVar14 = FUN_714af5b8(uVar14);
      uVar28 = *(uint *)(param_1 + 0xc);
      if (uVar28 != 0) {
        uVar15 = uVar28 - (uVar28 >> 1 & 0x55555555);
        uVar15 = (uVar15 & 0x33333333) + (uVar15 >> 2 & 0x33333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar15 < 2) {
          uVar29 = uVar28 - 1 & uVar14;
        }
        else {
          uVar29 = uVar14;
          if (uVar28 <= uVar14) {
            FUN_71ba33fc(uVar14,uVar28);
            uVar29 = extraout_r1;
          }
        }
        piVar16 = *(int **)(*(int *)(param_1 + 8) + uVar29 * 4);
        if ((piVar16 != (int *)0x0) && (piVar16 = (int *)*piVar16, piVar16 != (int *)0x0)) {
          do {
            uVar17 = piVar16[1];
            if (uVar17 == uVar14) {
              if (piVar16[2] == uVar14) {
                iVar25 = piVar16[3];
                *(undefined1 *)(iVar25 + 8) = uVar2;
                *(undefined2 *)(iVar25 + 6) = uVar5;
                *(undefined2 *)(iVar25 + 4) = uVar6;
                iVar23 = FUN_719f87a8(*(undefined4 *)(param_1 + 4));
                if (iVar23 != 0) {
                  uVar12 = *(undefined1 *)(param_1 + 0x30);
                }
                *(undefined1 *)(iVar25 + 0xb) = uVar4;
                *(undefined1 *)(iVar25 + 10) = uVar3;
                *(undefined1 *)(iVar25 + 9) = uVar12;
                *(undefined4 *)(iVar25 + 0xc) = *(undefined4 *)(uVar24 * 0x35 + *piVar13 + 0x2d);
                iVar23 = uVar24 * 0x35 + *piVar13;
                if (*(char *)(iVar23 + 8) == '\0') {
                  uVar18 = 0;
                }
                else {
                  uVar18 = *(undefined4 *)(iVar23 + 0x19);
                }
                *(undefined4 *)(iVar25 + 0x10) = uVar18;
                *(undefined4 *)(iVar25 + 0x14) = *(undefined4 *)(uVar24 * 0x35 + *piVar13 + 0x1d);
                if (uVar27 != 0) {
                  iVar23 = *(int *)(iVar25 + 0x38);
                  if (iVar23 == 0) {
LAB_714a7a50:
                    iVar23 = imp_malloc(uVar27);
                    *(int *)(iVar25 + 0x38) = iVar23;
                  }
                  else if (*(uint *)(iVar25 + 0x3c) < uVar27) {
                    imp_free();
                    goto LAB_714a7a50;
                  }
                  *(uint *)(iVar25 + 0x3c) = uVar27;
                  imp___aeabi_memcpy(iVar23,abStack_148,uVar27);
                }
                iStack_170 = iStack_170 + 1;
                break;
              }
            }
            else {
              if (uVar15 < 2) {
                uVar17 = uVar17 & uVar28 - 1;
              }
              else if (uVar28 <= uVar17) {
                FUN_71ba33fc(uVar17,uVar28);
                uVar17 = extraout_r1_00;
              }
              if (uVar17 != uVar29) break;
            }
            piVar16 = (int *)*piVar16;
          } while (piVar16 != (int *)0x0);
        }
      }
      if ((abStack_34[0] & 1) != 0) {
        thunk_qNQrlu(uStack_2c);
      }
      puVar11 = puStack_44;
      puStack_44 = (undefined2 *)0x0;
      if (puVar11 != (undefined2 *)0x0) {
        thunk_qNQrlu();
      }
      iVar23 = *piVar13;
      uVar24 = uVar24 + 1;
    } while (uVar24 < (uint)((piVar13[1] - iVar23) * -0x73ecade3));
  }
  FUN_719f776c(*(undefined4 *)(param_1 + 4));
  iVar23 = iStack_170;
  if (iStack_170 != *(int *)(param_1 + 0x20)) {
    pcVar19 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1aa0);
    if (*pcVar19 == '\0') {
      puVar20 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1a90);
      *(undefined1 *)((int)puVar20 + 0x33) = 1;
      uVar10 = DAT_700816dc;
      uVar9 = DAT_700816d8;
      uVar8 = DAT_700816d4;
      uVar7 = DAT_700816d0;
      uVar18 = DAT_700816cc;
      *puVar20 = DAT_700816c8;
      puVar20[1] = uVar18;
      puVar20[2] = uVar7;
      puVar20[3] = uVar8;
      puVar20[4] = uVar9;
      puVar20[5] = uVar10;
      uVar10 = DAT_700816f4;
      uVar9 = DAT_700816f0;
      uVar8 = DAT_700816ec;
      uVar7 = DAT_700816e8;
      uVar18 = DAT_700816e4;
      puVar20[6] = DAT_700816e0;
      puVar20[7] = uVar18;
      puVar20[8] = uVar7;
      puVar20[9] = uVar8;
      puVar20[10] = uVar9;
      puVar20[0xb] = uVar10;
      uVar2 = DAT_700816fa;
      *(undefined2 *)(puVar20 + 0xc) = DAT_700816f8;
      *(undefined1 *)((int)puVar20 + 0x32) = uVar2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714a9c04,puVar20,&DAT_70b0e000);
      puVar21 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1aa0);
      *puVar21 = 1;
    }
    iVar23 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1a90);
    if (*(char *)(iVar23 + 0x33) != '\0') {
      uVar24 = 0;
      uVar14 = 0;
      do {
        iVar25 = (uVar24 & 7) * 8;
        uVar27 = iVar25 - 0x20;
        bVar22 = (byte)(0x3bb1d545 >> iVar25) |
                 (byte)(-0x452fa51 << ((uVar24 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar27) {
          bVar22 = (byte)(0xfbad05af >> (uVar27 & 0xff));
        }
        *(byte *)(iVar23 + uVar24) = *(byte *)(iVar23 + uVar24) ^ bVar22;
        bVar30 = 0xfffffffe < uVar24;
        bVar26 = uVar14 == 0;
        bVar1 = (0x31 < uVar24) <= uVar14;
        uVar24 = uVar24 + 1;
        uVar14 = uVar14 + bVar30;
      } while (bVar26 && bVar1);
      *(undefined1 *)(iVar23 + 0x33) = 0;
    }
    iVar25 = *(int *)(param_1 + 0x2c);
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
      iVar25 = param_1 + 0x25;
    }
    FUN_7188543c(iVar23,iVar25,iStack_170,*(undefined4 *)(param_1 + 0x20));
    iVar23 = *(int *)(param_1 + 0x20);
  }
  return iStack_170 != 0 || iVar23 == 0;
}


// =========================================================================
// Function: FUN_714a84c8
// Entry: 0x714a84c8 | Size: 204 bytes
// =========================================================================

undefined4 FUN_714a84c8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_719f8780(*(undefined4 *)(param_1 + 4));
  if ((iVar1 == 0) && (iVar1 = FUN_719f87a8(*(undefined4 *)(param_1 + 4)), iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      FUN_719f7bbc(*(undefined4 *)(param_1 + 4),DAT_710eaeb4,*(int *)(param_2 + 0x14),
                   *(undefined4 *)(param_2 + 0xc),0);
    }
    else {
      FUN_719f7bbc(*(undefined4 *)(param_1 + 4),DAT_710eaeb8,*(int *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0xc),0);
      thunk_qq_DXQfD_mTyeCa
                (DAT_710eaeb4,*(undefined4 *)(param_2 + 0x14),DAT_710eaeb8,
                 *(undefined4 *)(param_2 + 0x10));
    }
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_714a8678
// Entry: 0x714a8678 | Size: 1272 bytes
// =========================================================================

undefined4 FUN_714a8678(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iStack_50;
  uint uStack_28;
  
  piVar5 = *(int **)(param_1 + 0x30);
  iVar6 = 0;
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
  }
  if (piVar5 != (int *)0x0 && iVar6 != 0) {
    FUN_7143b8c0();
    **(undefined4 **)(param_1 + 0x30) = 0;
    DAT_710eaf20 = DAT_710eaf20 - *(int *)(param_1 + 0x40);
  }
  uVar7 = (uint)*(ushort *)(param_1 + 6);
  uVar17 = 0;
  uVar20 = (uint)*(ushort *)(param_1 + 4);
  uVar22 = uVar7;
  if (uVar7 < uVar20) {
    uVar22 = uVar20;
  }
  uVar13 = (uint)DAT_710eaf24;
  if (((uVar13 == 0 || uVar13 <= uVar22) && (uVar13 != 0 && uVar22 != uVar13)) &&
     (*(byte *)(param_1 + 10) != 0)) {
    do {
      uVar8 = 1;
      if (1 < uVar22 >> (uVar17 & 0xff)) {
        uVar8 = uVar22 >> (uVar17 & 0xff);
      }
      if (uVar8 <= uVar13) goto LAB_714a86fc;
      uVar17 = uVar17 + 1;
    } while (*(byte *)(param_1 + 10) != uVar17);
    uVar17 = 0;
  }
LAB_714a86fc:
  uVar22 = 1;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  if (param_3 != 0) {
    uVar7 = 8;
  }
  bVar3 = *(byte *)(param_1 + 10);
  uVar13 = 1;
  if (1 < uVar7 >> (uVar17 & 0xff)) {
    uVar13 = uVar7 >> (uVar17 & 0xff);
  }
  if (uVar20 < 2) {
    uVar20 = 1;
  }
  if (param_3 != 0) {
    uVar20 = 8;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0xb);
  if (1 < uVar20 >> (uVar17 & 0xff)) {
    uVar22 = uVar20 >> (uVar17 & 0xff);
  }
  uStack_28 = uVar8;
  uVar4 = (uint)bVar3;
  if ((param_3 != 0) &&
     ((uVar4 = 1, 0x14 < uVar8 || (uStack_28 = 0, (1 << uVar8 & 0x100019U) == 0)))) {
    uStack_28 = 1;
  }
  uVar15 = 0x604;
  if ((uVar8 < 0x15) && ((1 << uVar8 & 0x100019U) != 0)) {
    uVar15 = 0x504;
  }
  if (1 < uVar4) {
    uVar15 = uVar15 | 0x8000;
  }
  iVar6 = FUN_7143b470(uVar22,uVar13,0x20,uVar15);
  iVar23 = *DAT_70ffce1c;
  piVar5 = (int *)FUN_7138bad8(uStack_28,uVar22,uVar13,1 < uVar4);
  puVar18 = (undefined4 *)(iVar6 + iVar23);
  *puVar18 = piVar5;
  uVar12 = 1;
  if ((*(byte *)(param_1 + 0xb) < 0x15) && ((1 << (uint)*(byte *)(param_1 + 0xb) & 0x100019U) != 0))
  {
    uVar12 = 5;
  }
  *(undefined1 *)((int)puVar18 + 0x15) = 0;
  *(undefined1 *)(puVar18 + 5) = uVar12;
  *(byte *)((int)puVar18 + 0x16) =
       *(byte *)(param_1 + 0xb) < 0x15 & (byte)(0x100019 >> (uint)*(byte *)(param_1 + 0xb));
  (**(code **)(*piVar5 + 0xc))(piVar5,1,1);
  if (param_3 == 0) {
    if (bVar3 != 0) {
      iVar23 = 3;
      uVar8 = 0x20;
      uVar15 = 0;
      iStack_50 = param_2;
      if (uStack_28 == 0x14) {
        iVar23 = 4;
      }
      do {
        uVar1 = uVar20 >> (uVar15 & 0xff);
        uVar24 = 1;
        if (1 < uVar1) {
          uVar24 = uVar20 >> (uVar15 & 0xff);
        }
        uVar19 = 1;
        uVar2 = uVar7 >> (uVar15 & 0xff);
        if (1 < uVar2) {
          uVar19 = uVar7 >> (uVar15 & 0xff);
        }
        iVar10 = FUN_7138b944(uVar24,uVar19,uStack_28);
        if (uVar17 <= uVar15) {
          iVar21 = 0;
          iVar11 = iStack_50;
          if (uStack_28 - 0x13 < 2) {
            iVar11 = FUN_71ba0440(uVar8 + (uVar19 + 3 >> 2) + -1,uVar8);
            if (iVar11 < 1) {
              iVar21 = 0;
            }
            else {
              uVar14 = uVar19 + 3 >> 2;
              iVar21 = 0;
              do {
                uVar16 = uVar8;
                if ((int)uVar14 < (int)uVar8) {
                  uVar16 = uVar14;
                }
                uVar14 = uVar14 - uVar8;
                iVar11 = iVar11 + -1;
                iVar21 = iVar21 + (uVar16 * (uVar24 + 3 >> 2) << iVar23);
              } while (iVar11 != 0);
            }
            if (uVar2 < 4) {
              param_2 = iStack_50;
            }
            iVar11 = param_2;
            if (uVar1 < 4) {
              param_2 = iStack_50;
              iVar11 = iStack_50;
            }
          }
          iStack_50 = iVar11;
          (**(code **)(*piVar5 + 0x14))(piVar5,uVar15 - uVar17,param_2,iVar10,uVar24,uVar19,0);
          if (0 < iVar21) {
            iVar10 = iVar21;
          }
          uVar8 = uVar8 << 1;
        }
        param_2 = param_2 + iVar10;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar4);
    }
  }
  else {
    uVar9 = FUN_7138b944(8,8,uStack_28);
    (**(code **)(*piVar5 + 0x14))(piVar5,0,param_2,uVar9,8,8,0);
  }
  (**(code **)(*piVar5 + 0x10))(piVar5,(uint)(uVar4 != 1) << 1);
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar9 = FUN_7143cf50(iVar6);
    iVar23 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x30) = uVar9;
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      iVar23 = param_1 + 0x19;
    }
    FUN_7143d788(uVar9,iVar23);
    DAT_710eaf1c = DAT_710eaf1c + 1;
  }
  else {
    FUN_7143dbc8(*(int *)(param_1 + 0x30),iVar6);
  }
  iVar23 = FUN_7138b944(uVar22,uVar13,uStack_28);
  *(int *)(param_1 + 0x40) = iVar23;
  if ((*(int *)(param_1 + 0x28) == 2) && (param_3 != 0)) {
    iVar23 = -iVar23;
  }
  else if (param_3 != 0) goto LAB_714a8b1c;
  DAT_710eaf20 = DAT_710eaf20 + iVar23;
LAB_714a8b1c:
  *(int *)(iVar6 + 0x2c) = param_1;
  return *(undefined4 *)(param_1 + 0x30);
}


// =========================================================================
// Function: FUN_714a8d80
// Entry: 0x714a8d80 | Size: 292 bytes
// =========================================================================

void FUN_714a8d80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int aiStack_30 [3];
  
  iVar6 = 1000;
  if (param_2 == 0) {
    iVar1 = FUN_71428ef8();
    iVar6 = 10;
    if (iVar1 != 0) {
      iVar6 = 1000;
    }
  }
  piVar5 = *(int **)(param_1 + 0x68);
  if (piVar5 != (int *)0x0) {
    iVar1 = 0;
    do {
      while( true ) {
        if (iVar6 < iVar1) {
          return;
        }
        iVar7 = piVar5[3];
        if (iVar7 != 0) break;
LAB_714a8dd0:
        piVar5 = (int *)*piVar5;
        if (piVar5 == (int *)0x0) {
          return;
        }
      }
      iVar2 = *(int *)(iVar7 + 0x30);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x54);
      }
      if (iVar2 != 0 && iVar3 != 1) goto LAB_714a8dd0;
      piVar5 = (int *)*piVar5;
      FUN_714aa518(aiStack_30,param_1 + 0x60);
      iVar3 = aiStack_30[0];
      aiStack_30[0] = 0;
      if (iVar3 != 0) {
        thunk_qNQrlu();
      }
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      if (*(int *)(iVar7 + 0x30) != 0) {
        *(undefined4 *)(*(int *)(iVar7 + 0x30) + 0x54) = 0;
        piVar4 = *(int **)(iVar7 + 0x30);
        if (*piVar4 != 0) {
          *(undefined4 *)(*piVar4 + 0x2c) = 0;
          piVar4 = *(int **)(iVar7 + 0x30);
        }
        FUN_7143f4c4(piVar4);
        *(undefined4 *)(iVar7 + 0x30) = 0;
        DAT_710eaf1c = DAT_710eaf1c + -1;
        if (*(int *)(iVar7 + 0x28) == 2) {
          DAT_710eaf20 = DAT_710eaf20 - *(int *)(iVar7 + 0x40);
        }
        *(undefined4 *)(iVar7 + 0x28) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (piVar5 != (int *)0x0);
  }
  return;
}


// =========================================================================
// Function: FUN_714a8f6c
// Entry: 0x714a8f6c | Size: 316 bytes
// =========================================================================

void FUN_714a8f6c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int aiStack_30 [3];
  
  if (param_2 == 0) {
    if (DAT_710eaf20 <= DAT_700c1ad0) {
      return;
    }
    FUN_71428ef8();
  }
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    piVar5 = *(int **)(param_1 + 0x40);
    do {
      while( true ) {
        iVar3 = piVar5[3];
        if ((((param_2 == 0) && (iVar2 = FUN_71428ef8(), iVar2 == 0)) &&
            (iVar2 = FUN_719f87a8(*(undefined4 *)(param_1 + 4)), iVar2 == 0)) &&
           (DAT_710eaf20 <= DAT_700c1ad0)) {
          return;
        }
        if ((*(int *)(iVar3 + 0x44) != DAT_710eaf38) && (*(int *)(iVar3 + 0x28) == 2)) break;
LAB_714a9040:
        piVar5 = (int *)*piVar5;
        if (piVar5 == (int *)0x0) {
          return;
        }
      }
      bVar6 = *(char *)(iVar3 + 9) != '\0';
      cVar1 = '\0';
      if (bVar6) {
        cVar1 = *(char *)(iVar3 + 8);
      }
      if (!bVar6 || cVar1 == '\0') goto LAB_714a9040;
      FUN_714a8678(iVar3,*(undefined4 *)(iVar3 + 0x38),1);
      *(undefined4 *)(iVar3 + 0x28) = 1;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      piVar4 = (int *)*piVar5;
      FUN_714aa518(aiStack_30,param_1 + 0x38,piVar5);
      iVar3 = aiStack_30[0];
      aiStack_30[0] = 0;
      if (iVar3 != 0) {
        thunk_qNQrlu();
      }
      piVar5 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return;
}


// =========================================================================
// Function: FUN_714a9208
// Entry: 0x714a9208 | Size: 496 bytes
// =========================================================================

void FUN_714a9208(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 uStack_31;
  int *piStack_30;
  int aiStack_2c [2];
  
  FUN_714a8d80(param_1,0);
  for (piVar3 = *(int **)(param_1 + 0x40); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    iVar2 = piVar3[3];
    if ((*(int *)(iVar2 + 0x2c) == 2) && (*(int *)(iVar2 + 0x44) == DAT_710eaf38)) {
      if (*(int *)(iVar2 + 0x28) == 1) {
        FUN_714acdb8(iVar2);
      }
      else {
        DAT_710eaf18 = DAT_710eaf18 + *(int *)(iVar2 + 0x40);
        DAT_710eaf14 = DAT_710eaf14 + 1;
      }
      *(undefined4 *)(iVar2 + 0x2c) = 1;
    }
  }
  for (piVar3 = *(int **)(param_1 + 0x54); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if (*(int *)(piVar3[3] + 0x28) == 1) {
      FUN_714acdb8();
    }
    else {
      DAT_710eaf18 = DAT_710eaf18 + *(int *)(piVar3[3] + 0x40);
      DAT_710eaf14 = DAT_710eaf14 + 1;
    }
  }
  FUN_714a8f6c(param_1,0);
  piVar3 = *(int **)(param_1 + 0x54);
  if (piVar3 != (int *)0x0) {
    do {
      piStack_30 = piVar3 + 2;
      *(undefined4 *)(piVar3[3] + 0x2c) = 1;
      iVar2 = piVar3[3];
      FUN_714a9c8c(aiStack_2c,param_1 + 0x38,piStack_30,&DAT_70081715,&piStack_30,&uStack_31);
      *(int *)(aiStack_2c[0] + 0xc) = iVar2;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    piVar3 = *(int **)(param_1 + 0x54);
    while (piVar3 != (int *)0x0) {
      piVar3 = (int *)*piVar3;
      thunk_qNQrlu();
    }
    iVar2 = *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (iVar2 != 0) {
      iVar1 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar2 != iVar1);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_714a9578
// Entry: 0x714a9578 | Size: 960 bytes
// =========================================================================

void FUN_714a9578(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  uint extraout_r1;
  int *piVar11;
  uint uVar12;
  uint extraout_r1_00;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  bool bVar21;
  undefined1 uStack_31;
  int iStack_30;
  int aiStack_2c [2];
  
  iVar14 = *(int *)(param_2 + 0x2c);
  if (iVar14 == param_3) {
    return;
  }
  if (0x14 < *(byte *)(param_2 + 0xb)) {
    return;
  }
  if (param_3 == 2 && iVar14 == 1) {
    param_3 = 2;
    *(undefined4 *)(param_2 + 0x44) = DAT_710eaf38;
    goto LAB_714a97e4;
  }
  switch(iVar14) {
  case 1:
    iVar14 = param_1 + 0x38;
    goto LAB_714a9668;
  case 2:
    uVar15 = *(uint *)(param_1 + 0x3c);
    uVar16 = *(uint *)(param_2 + 0x24);
    if (uVar15 != 0) {
      piVar18 = (int *)(param_1 + 0x38);
      uVar13 = uVar15 - (uVar15 >> 1 & 0x55555555);
      uVar13 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar13 < 2) {
        uVar20 = uVar15 - 1 & uVar16;
      }
      else {
        uVar20 = uVar16;
        if (uVar15 <= uVar16) {
          FUN_71ba33fc(uVar16,uVar15);
          uVar20 = extraout_r1;
        }
      }
      piVar11 = *(int **)(*piVar18 + uVar20 * 4);
      piVar19 = piVar18;
      if (piVar11 != (int *)0x0) {
        piVar19 = (int *)*piVar11;
      }
      if (piVar11 != (int *)0x0 && piVar19 != (int *)0x0) {
        do {
          uVar12 = piVar19[1];
          if (uVar16 == uVar12) {
            if (piVar19[2] == uVar16) goto LAB_714a9848;
          }
          else {
            if (uVar13 < 2) {
              uVar12 = uVar12 & uVar15 - 1;
            }
            else if (uVar15 <= uVar12) {
              FUN_71ba33fc(uVar12,uVar15);
              uVar12 = extraout_r1_00;
            }
            if (uVar12 != uVar20) break;
          }
          piVar19 = (int *)*piVar19;
        } while (piVar19 != (int *)0x0);
      }
    }
    piVar18 = (int *)(param_1 + 0x4c);
LAB_714a9848:
    FUN_714aa77c(piVar18,(uint *)(param_2 + 0x24));
    break;
  case 3:
    iVar14 = param_1 + 0x60;
LAB_714a9668:
    FUN_714aa77c(iVar14,param_2 + 0x24);
    break;
  default:
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ac0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ab0);
      *(undefined1 *)((int)puVar8 + 0x15) = 1;
      uVar6 = DAT_70081710;
      uVar5 = DAT_7008170c;
      uVar4 = DAT_70081708;
      uVar3 = DAT_70081704;
      *puVar8 = DAT_70081700;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8[4] = uVar6;
      *(undefined1 *)(puVar8 + 5) = DAT_70081714;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714a9c54,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ac0);
      *puVar9 = 1;
    }
    iVar14 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ab0);
    if (*(char *)(iVar14 + 0x15) != '\0') {
      uVar15 = 0;
      uVar16 = 0;
      do {
        iVar17 = (uVar15 & 7) * 8;
        bVar10 = (byte)(0x319d297f >> iVar17) |
                 (byte)(-0x32d23c9d << ((uVar15 & 7) * -8 + 0x20 & 0xff));
        uVar13 = iVar17 - 0x20;
        if (-1 < (int)uVar13) {
          bVar10 = (byte)(0xcd2dc363 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar14 + uVar15) = *(byte *)(iVar14 + uVar15) ^ bVar10;
        bVar21 = 0xfffffffe < uVar15;
        bVar1 = uVar16 == 0;
        bVar2 = (0x13 < uVar15) <= uVar16;
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + bVar21;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar14 + 0x15) = 0;
    }
    iVar17 = *(int *)(param_2 + 0x20);
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      iVar17 = param_2 + 0x19;
    }
    FUN_7188543c(iVar14,iVar17,iVar17,param_3);
  case 0:
  }
  if (param_3 == 3) {
    param_1 = param_1 + 0x60;
  }
  else if (param_3 == 2) {
    param_1 = param_1 + 0x4c;
  }
  else {
    if (param_3 != 1) goto LAB_714a97e4;
    param_1 = param_1 + 0x38;
  }
  iStack_30 = param_2 + 0x24;
  FUN_714a9c8c(aiStack_2c,param_1,iStack_30,&DAT_70081715,&iStack_30,&uStack_31);
  *(int *)(aiStack_2c[0] + 0xc) = param_2;
LAB_714a97e4:
  *(int *)(param_2 + 0x2c) = param_3;
  return;
}


// =========================================================================
// Function: FUN_714a9c8c
// Entry: 0x714a9c8c | Size: 696 bytes
// =========================================================================

void FUN_714a9c8c(int *param_1,int *param_2,uint *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  int *piVar7;
  int iVar8;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint unaff_r10;
  
  uVar11 = param_2[1];
  uVar9 = *param_3;
  if (uVar11 != 0) {
    uVar2 = uVar11 - (uVar11 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      unaff_r10 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_r10 = uVar9;
      if (uVar11 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar11);
        unaff_r10 = extraout_r1;
      }
    }
    puVar3 = *(undefined4 **)(*param_2 + unaff_r10 * 4);
    piVar10 = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      piVar10 = (int *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && piVar10 != (int *)0x0) {
      do {
        uVar6 = piVar10[1];
        if (uVar6 == uVar9) {
          if (piVar10[2] == uVar9) {
            uVar1 = 0;
            goto LAB_714a9f28;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar6 = uVar6 & uVar11 - 1;
          }
          else if (uVar11 <= uVar6) {
            FUN_71ba33fc(uVar6,uVar11);
            uVar6 = extraout_r1_00;
          }
          if (uVar6 != unaff_r10) break;
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)0x0);
    }
  }
  piVar10 = (int *)thunk_MwhHq(0x10);
  piVar7 = (int *)*param_5;
  piVar10[1] = uVar9;
  *piVar10 = 0;
  iVar8 = *piVar7;
  piVar10[3] = 0;
  piVar10[2] = iVar8;
  uVar4 = FUN_71ba1e0c(uVar11);
  iVar8 = param_2[3];
  iVar12 = param_2[4];
  uVar4 = FUN_71ba21e8(iVar12,uVar4);
  uVar5 = FUN_71ba1e0c(iVar8 + 1);
  if ((uVar11 == 0) || (iVar8 = FUN_71ba2d10(uVar4,uVar5), iVar8 != 0)) {
    uVar2 = 1;
    if ((2 < uVar11) && (uVar2 = 0, (uVar11 & uVar11 - 1) != 0)) {
      uVar2 = 1;
    }
    uVar2 = uVar2 | uVar11 << 1;
    FUN_71ba13e0(uVar5,iVar12);
    imp_ceilf();
    uVar11 = FUN_71ba1910();
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    FUN_714aa0c8(param_2,uVar2);
    uVar11 = param_2[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_r10 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_r10 = uVar9;
      if (uVar11 <= uVar9) {
        FUN_71ba33fc(uVar9,uVar11);
        unaff_r10 = extraout_r1_01;
      }
    }
  }
  iVar8 = *param_2;
  piVar7 = *(int **)(iVar8 + unaff_r10 * 4);
  if (piVar7 == (int *)0x0) {
    piVar7 = param_2 + 2;
    *piVar10 = *piVar7;
    *piVar7 = (int)piVar10;
    *(int **)(iVar8 + unaff_r10 * 4) = piVar7;
    if (*piVar10 == 0) goto LAB_714a9f18;
    uVar9 = *(uint *)(*piVar10 + 4);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar9 = uVar9 & uVar11 - 1;
    }
    else if (uVar11 <= uVar9) {
      FUN_71ba33fc(uVar9,uVar11);
      uVar9 = extraout_r1_02;
    }
    piVar7 = (int *)(*param_2 + uVar9 * 4);
  }
  else {
    *piVar10 = *piVar7;
  }
  *piVar7 = (int)piVar10;
LAB_714a9f18:
  param_2[3] = param_2[3] + 1;
  uVar1 = 1;
LAB_714a9f28:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = (int)piVar10;
  return;
}


// =========================================================================
// Function: FUN_714aa0c8
// Entry: 0x714aa0c8 | Size: 692 bytes
// =========================================================================

void FUN_714aa0c8(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_714aa114;
    }
    return;
  }
LAB_714aa114:
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
// Function: FUN_714aa518
// Entry: 0x714aa518 | Size: 476 bytes
// =========================================================================

void FUN_714aa518(undefined4 *param_1,int *param_2,int *param_3)

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
    if (uVar4 == uVar6) goto LAB_714aa660;
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
    if (uVar4 == uVar6) goto LAB_714aa660;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_714aa660:
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
// Function: FUN_714aa77c
// Entry: 0x714aa77c | Size: 332 bytes
// =========================================================================

undefined4 FUN_714aa77c(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  int *unaff_r5;
  uint uVar6;
  uint uVar7;
  int aiStack_30 [3];
  
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar7 = *param_2;
    uVar2 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar5 = uVar6 - 1 & uVar7;
    }
    else {
      uVar5 = uVar7;
      if (uVar6 <= uVar7) {
        FUN_71ba33fc(uVar7,uVar6);
        uVar5 = extraout_r1;
      }
    }
    piVar3 = *(int **)(*param_1 + uVar5 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r5 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r5 != (int *)0x0) {
      do {
        uVar4 = unaff_r5[1];
        if (uVar4 == uVar7) {
          if (unaff_r5[2] == uVar7) {
            FUN_714aa518(aiStack_30,param_1,unaff_r5);
            iVar1 = aiStack_30[0];
            aiStack_30[0] = 0;
            if (iVar1 != 0) {
              thunk_qNQrlu();
            }
            return 1;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar6 - 1;
          }
          else if (uVar6 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar6);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar5) {
            return 0;
          }
        }
        unaff_r5 = (int *)*unaff_r5;
      } while (unaff_r5 != (int *)0x0);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_714aaae8
// Entry: 0x714aaae8 | Size: 232 bytes
// =========================================================================

void FUN_714aaae8(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  do {
    imp_sem_wait(DAT_710eae9c);
    if (DAT_710eaec4 != 0) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        piVar2 = (int *)(&DAT_710eaec8)[uVar4];
        if (piVar2[4] < 1) {
          FUN_719f7bbc(*(undefined4 *)(*piVar2 + 4),DAT_710eaeb4 + iVar3,piVar2[5],piVar2[3],0);
        }
        else {
          FUN_719f7bbc(*(undefined4 *)(*piVar2 + 4),DAT_710eaeb8,piVar2[4],piVar2[3],0);
          thunk_qq_DXQfD_mTyeCa(DAT_710eaeb4 + iVar3,piVar2[5],DAT_710eaeb8,piVar2[4]);
        }
        uVar4 = uVar4 + 1;
        iVar3 = piVar2[5] + iVar3;
      } while (uVar4 < DAT_710eaec4);
    }
    imp_pthread_mutex_lock(DAT_710eaea4);
    cVar1 = DAT_710eae99;
    DAT_710eaea8 = 0;
    DAT_710eae99 = '\0';
    imp_pthread_mutex_unlock(DAT_710eaea4);
    if (cVar1 != '\0') {
      imp_sem_post(DAT_710eaea0);
    }
  } while( true );
}


// =========================================================================
// Function: FUN_714aaccc
// Entry: 0x714aaccc | Size: 1652 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714aaccc(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int *piVar34;
  int *piVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 *puVar45;
  uint uVar46;
  uint uVar47;
  bool bVar48;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr13;
  uint uStack_80;
  uint *apuStack_7c [2];
  uint uStack_74;
  uint *apuStack_70 [3];
  uint uStack_64;
  int *piStack_60;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar27 = &uStack_80;
  iStack_5c = param_1;
  puVar45 = &DAT_710eae98;
  if (DAT_710eaea8 != '\0') {
    return;
  }
  if (DAT_710eaea9 == '\0') {
LAB_714aae3c:
    if (*(int *)(puVar45 + 0x2c) == 0) {
      return;
    }
    *(undefined4 *)(puVar45 + 0x24) = 0;
    *(undefined2 *)(puVar45 + 0x10) = 0x101;
    imp_sem_post(*(undefined4 *)(puVar45 + 4));
    return;
  }
  while( true ) {
    uVar26 = *puVar27 ^ 0x6a4dab1f;
    uVar33 = uVar26 | puVar27[1] ^ 0x679b29b;
    bVar48 = uVar33 == 0;
    if (bVar48) {
      uVar33 = puVar27[3] ^ 0xfcc126c8;
      uVar26 = puVar27[2] ^ 0x6efdd0cf;
    }
    if ((bVar48 && (uVar26 == 0 && uVar33 == 0)) &&
       (puVar27[4] == 0xbefc55d6 && puVar27[5] == 0x370f3a77)) break;
    puVar27 = puVar27 + 1;
  }
  bVar48 = (char)puVar27[0x4006] != '\0';
  cVar4 = '\0';
  if (bVar48) {
    cVar4 = *(char *)((int)puVar27 + 0x10019);
  }
  if ((!bVar48 || cVar4 == '\0') || (*(char *)((int)puVar27 + 0x1001a) == '\0')) {
    puVar45 = (undefined1 *)0xffffffff;
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b0003a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
    goto LAB_714aae3c;
  }
  if (puVar27[0xc01e] == puVar27[0xc01c]) {
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b00006;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_714ac634:
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b00008;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_714ac6d4:
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
  }
  else {
    uVar26 = puVar27[0xc01c];
    if ((uVar26 < 0x714aaea4) && (0x714aaea4 < puVar27[0xc01d] + uVar26)) goto LAB_714ac634;
    uVar26 = puVar27[0xc01e];
    if ((0x714aaea4 < uVar26) || (puVar27[0xc01f] + uVar26 < 0x714aaea4)) goto LAB_714ac6d4;
    apuStack_7c[1] = puVar27;
    iVar15 = FUN_717d2588();
    piVar13 = DAT_70b46448;
    if (iVar15 == 0xa1b) {
      apuStack_7c[0] = apuStack_7c[1] + 0xc01b;
      uVar26 = *apuStack_7c[0];
      if (uVar26 == 0x1e) {
        *apuStack_7c[0] = 0;
        uVar26 = *apuStack_7c[0];
      }
      if (((uVar26 & 3) == 0) && (apuStack_7c[1][0xc017] != 0)) {
        puVar25 = (undefined4 *)apuStack_7c[1][0xc017];
        piVar35 = puVar25 + 1;
        piVar34 = (int *)*puVar25;
        if (piVar34 != piVar35) {
LAB_714ab4a4:
          piStack_60 = piVar34;
          uStack_64 = piStack_60[7];
          iVar15 = 0x27d4eb7f;
          uVar33 = piStack_60[6];
          puVar27 = (uint *)piStack_60[5];
          apuStack_70[2] = (uint *)piStack_60[8];
          uVar26 = 0x56d677d6;
          if (0x1f < uVar33) {
            uStack_28 = 0xba94458a;
            uStack_2c = 0x61c8869e;
            iVar15 = 0;
            uStack_30 = 0x40801011;
            uStack_34 = 0x50;
            uVar24 = 0xc2b2ae8d;
            uStack_38 = 0x6854fb60;
            uVar26 = uVar33;
            uVar43 = 0x60ea283e;
            uVar17 = 0xee40c5e7;
            puVar28 = puVar27;
            do {
              uStack_40 = uVar17;
              uStack_44 = uVar43;
              uStack_3c = uVar26;
              lVar5 = (ulonglong)puVar28[6] * 0x27d4eb4f;
              uVar26 = (uint)lVar5;
              uVar44 = uVar26 + uStack_28;
              uVar26 = puVar28[7] * 0x27d4eb4f +
                       puVar28[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_2c +
                       (uint)CARRY4(uVar26,uStack_28);
              uVar18 = uVar26 >> 1;
              uStack_48 = uVar44 * -0x80000000 | uVar18;
              uStack_28 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
              uVar44 = uVar44 >> 1;
              uStack_4c = uVar26 * -0x80000000 | uVar44;
              uStack_2c = uStack_4c * -0x7a143579 +
                          uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20)
              ;
              lVar5 = (ulonglong)puVar28[4] * 0x27d4eb4f;
              uVar26 = (uint)lVar5;
              uVar40 = uVar26 + uStack_30;
              uVar26 = puVar28[5] * 0x27d4eb4f +
                       puVar28[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_34 +
                       (uint)CARRY4(uVar26,uStack_30);
              uVar21 = uVar26 >> 1;
              uStack_50 = uVar40 * -0x80000000 | uVar21;
              uVar40 = uVar40 >> 1;
              uStack_54 = uVar26 * -0x80000000 | uVar40;
              puVar1 = puVar28 + 1;
              uStack_30 = (uint)((ulonglong)uStack_50 * 0x85ebca87);
              uStack_34 = uStack_54 * -0x7a143579 +
                          uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20)
              ;
              puVar2 = puVar28 + 2;
              puVar3 = puVar28 + 3;
              lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
              uVar43 = (uint)lVar5;
              uVar26 = *puVar28;
              puVar28 = puVar28 + 8;
              uVar16 = uVar43 + uStack_38;
              uVar43 = *puVar3 * 0x27d4eb4f +
                       *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uVar24 +
                       (uint)CARRY4(uVar43,uStack_38);
              uVar22 = uVar43 >> 1;
              uStack_58 = uVar16 * -0x80000000 | uVar22;
              uVar16 = uVar16 >> 1;
              uVar46 = uVar43 * -0x80000000 | uVar16;
              uStack_38 = (uint)((ulonglong)uStack_58 * 0x85ebca87);
              uVar24 = uVar46 * -0x7a143579 +
                       uStack_58 * -0x61c8864f + (int)((ulonglong)uStack_58 * 0x85ebca87 >> 0x20);
              lVar5 = (ulonglong)uVar26 * 0x27d4eb4f;
              uVar43 = (uint)lVar5;
              uVar41 = uVar43 + uStack_40;
              uVar26 = *puVar1 * 0x27d4eb4f + uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                       + uStack_44 + (uint)CARRY4(uVar43,uStack_40);
              uVar19 = uVar26 >> 1;
              uVar29 = uVar41 * -0x80000000 | uVar19;
              uVar41 = uVar41 >> 1;
              uVar30 = uVar26 * -0x80000000 | uVar41;
              uVar17 = (uint)((ulonglong)uVar29 * 0x85ebca87);
              iVar15 = iVar15 - (uint)(uStack_3c < 0x20);
              uVar43 = uVar30 * -0x7a143579 +
                       uVar29 * -0x61c8864f + (int)((ulonglong)uVar29 * 0x85ebca87 >> 0x20);
              uVar26 = uStack_3c - 0x20;
            } while ((uint)(uStack_3c - 0x20 < 0x20) <= (uint)-iVar15);
            uVar37 = uVar17 << 1 | uVar43 >> 0x1f;
            uVar26 = uStack_38 << 7 | uVar24 >> 0x19;
            uVar23 = uVar26 + uVar37;
            uVar36 = uStack_30 << 0xc | uStack_34 >> 0x14;
            uVar42 = uVar23 + uVar36;
            uStack_30 = (uVar24 * 0x80 | uStack_38 >> 0x19) + (uVar43 * 2 | uVar17 >> 0x1f) +
                        (uint)CARRY4(uVar26,uVar37) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                        (uint)CARRY4(uVar23,uVar36);
            uStack_34 = (uint)((ulonglong)uVar29 * 0x80000000 >> 0x20);
            uVar36 = (uint)((ulonglong)uVar29 * 0x80000000) |
                     uVar30 * 0xf796ca9 +
                     uVar29 * -0x210ca4ff + (int)((ulonglong)uVar29 * 0xf796ca9 >> 0x20) >> 1;
            uVar31 = uStack_28 << 0x12 | uStack_2c >> 0xe;
            lVar5 = (ulonglong)uVar36 * 0x85ebca87;
            uVar32 = uVar42 + uVar31 ^ (uint)lVar5;
            lVar6 = (ulonglong)uVar32 * 0x85ebca87;
            uVar39 = (uint)lVar6;
            uVar47 = (uint)((ulonglong)uStack_58 * 0x80000000) |
                     uVar46 * 0xf796ca9 +
                     uStack_58 * -0x210ca4ff + (int)((ulonglong)uStack_58 * 0xf796ca9 >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar47 * 0x85ebca87;
            uVar43 = uVar39 + 0xc2b2ae63 ^ (uint)lVar7;
            lVar8 = (ulonglong)uVar43 * 0x85ebca87;
            uVar37 = (uint)lVar8;
            uVar23 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                     uStack_54 * 0xf796ca9 +
                     uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
            lVar9 = (ulonglong)uVar23 * 0x85ebca87;
            uVar17 = uVar37 + 0xc2b2ae63 ^ (uint)lVar9;
            lVar10 = (ulonglong)uVar17 * 0x85ebca87;
            uVar46 = (uint)lVar10;
            uVar29 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                     uStack_4c * 0xf796ca9 +
                     uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
            lVar11 = (ulonglong)uVar29 * 0x85ebca87;
            uVar24 = uVar46 + 0xc2b2ae63 ^ (uint)lVar11;
            lVar12 = (ulonglong)uVar24 * 0x85ebca87;
            uVar30 = (uint)lVar12;
            uVar26 = uVar30 + 0xc2b2ae63;
            iVar15 = ((((uStack_30 + (uStack_2c * 0x40000 | uStack_28 >> 0xe) +
                         (uint)CARRY4(uVar42,uVar31) ^
                        (uVar41 * -0x80000000 + uVar19 * -0x784349ac + uStack_34) * -0x7a143579 +
                        uVar36 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                        uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar39) ^
                       (uVar16 * -0x80000000 +
                       uVar22 * -0x784349ac + (int)((ulonglong)uStack_58 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar47 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                       -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                       -0x7a143589 + (uint)(0x3d4d519c < uVar37) ^
                      (uVar40 * -0x80000000 +
                      uVar21 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                      -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                     (uVar44 * -0x80000000 +
                     uVar18 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                     -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar30);
            uStack_74 = uVar33;
            apuStack_70[0] = puVar27;
          }
          puVar27 = (uint *)((int)puVar27 + (uVar33 & 0xffffffe0));
          uVar17 = uVar33 & 0x1f;
          uVar24 = 0;
          uVar43 = uVar26 + uVar33;
          uVar26 = iVar15 + (uint)CARRY4(uVar26,uVar33);
          do {
            if (uVar24 == 0 && (7 < uVar17) <= uVar24) {
              if (uVar24 == 0 && (3 < uVar17) <= uVar24) {
                if (uVar17 == 0 && uVar24 == 0) goto LAB_714abaa4;
                lVar5 = (ulonglong)(uint)(byte)*puVar27 * 0x165667c5;
                uVar43 = (uint)lVar5 ^ uVar43;
                uVar26 = (uint)(byte)*puVar27 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^
                         uVar26;
                uVar33 = uVar43 << 0xb | uVar26 >> 0x15;
                lVar5 = (ulonglong)uVar33 * 0x85ebca87;
                uVar40 = (uint)lVar5;
                uVar33 = (uVar26 << 0xb | uVar43 >> 0x15) * -0x7a143579 +
                         uVar33 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
                uVar21 = 0xffffffff;
                iVar15 = 1;
              }
              else {
                lVar5 = (ulonglong)*puVar27 * 0x85ebca87;
                uVar43 = (uint)lVar5 ^ uVar43;
                uVar26 = *puVar27 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar26;
                uVar33 = uVar43 << 0x17 | uVar26 >> 9;
                lVar5 = (ulonglong)uVar33 * 0x27d4eb4f;
                uVar18 = (uint)lVar5;
                uVar40 = uVar18 + 0x9e3779f9;
                iVar15 = 4;
                uVar33 = (uVar26 << 0x17 | uVar43 >> 9) * 0x27d4eb4f +
                         uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                         (uint)(0x61c88606 < uVar18);
                uVar21 = 0xfffffffc;
              }
            }
            else {
              uVar33 = *puVar27;
              uVar18 = (uint)((ulonglong)uVar33 * 0x80000000) |
                       puVar27[1] * 0x27d4eb4f +
                       uVar33 * -0x3d4d51c3 + (int)((ulonglong)uVar33 * 0x27d4eb4f >> 0x20) >> 1;
              lVar5 = (ulonglong)uVar18 * 0x85ebca87;
              uVar21 = 0xfffffff8;
              uVar33 = (puVar27[1] * -0x80000000 +
                       uVar33 * -0x6c158a59 + (int)((ulonglong)uVar33 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar26
              ;
              uVar18 = (uint)lVar5 ^ uVar43;
              uVar44 = uVar18 << 0x1b | uVar33 >> 5;
              lVar5 = (ulonglong)uVar44 * 0x85ebca87;
              uVar22 = (uint)lVar5;
              uVar40 = uVar22 + 0xc2b2ae63;
              iVar15 = 8;
              uVar33 = (uVar33 << 0x1b | uVar18 >> 5) * -0x7a143579 +
                       uVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                       (uint)(0x3d4d519c < uVar22);
              uStack_2c = uVar43;
              uStack_28 = uVar26;
            }
            bVar48 = CARRY4(uVar21,uVar17);
            uVar17 = uVar21 + uVar17;
            puVar27 = (uint *)((int)puVar27 + iVar15);
            uVar24 = (uVar24 - 1) + (uint)bVar48;
            uVar43 = uVar40;
            uVar26 = uVar33;
          } while( true );
        }
      }
LAB_714aaf54:
      uVar26 = *apuStack_7c[0];
      *apuStack_7c[0] = uVar26 + 1;
      if (uVar26 == 6) {
        piStack_60 = (int *)apuStack_7c[1][0xc011];
        piVar34 = (int *)apuStack_7c[1][0xc010];
        puVar27 = (uint *)apuStack_7c[1][0xc00f];
        uStack_64 = apuStack_7c[1][0xc012];
        if (piVar34 < (int *)0x20) {
          iVar15 = 0x27d4eb7f;
          uVar26 = 0x56d677d6;
        }
        else {
          uStack_30 = 0x50;
          uStack_38 = 0x40801011;
          uStack_2c = 0x61c8869e;
          uStack_28 = 0xba94458a;
          uStack_3c = 0xc2b2ae8d;
          iVar15 = 0;
          uStack_34 = 0x6854fb60;
          uVar26 = 0xee40c5e7;
          uVar33 = 0x60ea283e;
          puVar28 = puVar27;
          piVar35 = piVar34;
          do {
            uStack_44 = uVar33;
            uStack_40 = uVar26;
            lVar5 = (ulonglong)puVar28[6] * 0x27d4eb4f;
            uVar26 = (uint)lVar5;
            uVar17 = uVar26 + uStack_28;
            uVar26 = puVar28[7] * 0x27d4eb4f +
                     puVar28[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar26,uStack_28);
            uVar43 = uVar26 >> 1;
            uStack_48 = uVar17 * -0x80000000 | uVar43;
            uVar17 = uVar17 >> 1;
            uStack_4c = uVar26 * -0x80000000 | uVar17;
            uStack_28 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
            uStack_2c = uStack_4c * -0x7a143579 +
                        uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)puVar28[4] * 0x27d4eb4f;
            uVar26 = (uint)lVar5;
            uVar18 = uVar26 + uStack_38;
            uVar26 = puVar28[5] * 0x27d4eb4f +
                     puVar28[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar26,uStack_38);
            uVar24 = uVar26 >> 1;
            uStack_50 = uVar18 * -0x80000000 | uVar24;
            uVar18 = uVar18 >> 1;
            uStack_54 = uVar26 * -0x80000000 | uVar18;
            puVar1 = puVar28 + 1;
            uStack_38 = (uint)((ulonglong)uStack_50 * 0x85ebca87);
            uStack_30 = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            puVar2 = puVar28 + 2;
            puVar3 = puVar28 + 3;
            lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
            uVar33 = (uint)lVar5;
            uVar26 = *puVar28;
            puVar28 = puVar28 + 8;
            uVar21 = uVar33 + uStack_34;
            uVar33 = *puVar3 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar33,uStack_34);
            uVar44 = uVar33 >> 1;
            uVar41 = uVar21 * -0x80000000 | uVar44;
            uVar21 = uVar21 >> 1;
            uStack_58 = uVar33 * -0x80000000 | uVar21;
            uStack_34 = (uint)((ulonglong)uVar41 * 0x85ebca87);
            uStack_3c = uStack_58 * -0x7a143579 +
                        uVar41 * -0x61c8864f + (int)((ulonglong)uVar41 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)uVar26 * 0x27d4eb4f;
            uVar33 = (uint)lVar5;
            uVar22 = uVar33 + uStack_40;
            uVar26 = *puVar1 * 0x27d4eb4f + uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                     uStack_44 + (uint)CARRY4(uVar33,uStack_40);
            bVar48 = piVar35 < (int *)0x20;
            piVar35 = piVar35 + -8;
            uVar40 = uVar26 >> 1;
            uVar16 = uVar22 * -0x80000000 | uVar40;
            uVar22 = uVar22 >> 1;
            uVar19 = uVar26 * -0x80000000 | uVar22;
            iVar15 = iVar15 - (uint)bVar48;
            uVar26 = (uint)((ulonglong)uVar16 * 0x85ebca87);
            uVar33 = uVar19 * -0x7a143579 +
                     uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
          } while ((uint)(piVar35 < (int *)0x20) <= (uint)-iVar15);
          uVar30 = uVar26 << 1 | uVar33 >> 0x1f;
          uVar46 = uStack_34 << 7 | uStack_3c >> 0x19;
          uVar36 = uVar46 + uVar30;
          uVar29 = uStack_38 << 0xc | uStack_30 >> 0x14;
          uVar42 = uVar36 + uVar29;
          uStack_30 = (uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar33 * 2 | uVar26 >> 0x1f) +
                      (uint)CARRY4(uVar46,uVar30) + (uStack_30 * 0x1000 | uStack_38 >> 0x14) +
                      (uint)CARRY4(uVar36,uVar29);
          uStack_34 = (uint)((ulonglong)uVar16 * 0x80000000 >> 0x20);
          uVar39 = (uint)((ulonglong)uVar16 * 0x80000000) |
                   uVar19 * 0xf796ca9 +
                   uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
          uVar46 = uStack_28 << 0x12 | uStack_2c >> 0xe;
          lVar5 = (ulonglong)uVar39 * 0x85ebca87;
          uVar29 = uVar42 + uVar46 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar29 * 0x85ebca87;
          uVar47 = (uint)lVar6;
          uVar30 = (uint)((ulonglong)uVar41 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uVar41 * -0x210ca4ff + (int)((ulonglong)uVar41 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar30 * 0x85ebca87;
          uVar33 = uVar47 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar33 * 0x85ebca87;
          uVar36 = (uint)lVar8;
          uVar37 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar37 * 0x85ebca87;
          uVar16 = uVar36 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar16 * 0x85ebca87;
          uVar23 = (uint)lVar10;
          uVar31 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar31 * 0x85ebca87;
          uVar19 = uVar23 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar19 * 0x85ebca87;
          uVar32 = (uint)lVar12;
          uVar26 = uVar32 + 0xc2b2ae63;
          iVar15 = ((((uStack_30 + (uStack_2c * 0x40000 | uStack_28 >> 0xe) +
                       (uint)CARRY4(uVar42,uVar46) ^
                      (uVar22 * -0x80000000 + uVar40 * -0x784349ac + uStack_34) * -0x7a143579 +
                      uVar39 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                      uVar29 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar47) ^
                     (uVar21 * -0x80000000 +
                     uVar44 * -0x784349ac + (int)((ulonglong)uVar41 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                     -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                    (uVar18 * -0x80000000 +
                    uVar24 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                    -0x7a143579 + uVar16 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar23) ^
                   (uVar17 * -0x80000000 +
                   uVar43 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                   -0x7a143579 + uVar19 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar32);
          apuStack_70[1] = (uint *)piVar34;
          apuStack_70[2] = puVar27;
        }
        uVar33 = uVar26 + (int)piVar34;
        uVar43 = (uint)piVar34 & 0x1f;
        uVar26 = iVar15 + (uint)CARRY4(uVar26,(uint)piVar34);
        puVar27 = (uint *)((int)puVar27 + ((uint)piVar34 & 0xffffffe0));
        uVar17 = 0;
        do {
          if (uVar17 == 0 && (7 < uVar43) <= uVar17) {
            if (uVar17 == 0 && (3 < uVar43) <= uVar17) {
              if (uVar43 == 0 && uVar17 == 0) goto LAB_714ac448;
              lVar5 = (ulonglong)(uint)(byte)*puVar27 * 0x165667c5;
              uVar24 = (uint)lVar5 ^ uVar33;
              uVar26 = (uint)(byte)*puVar27 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar26;
              uVar18 = uVar24 << 0xb | uVar26 >> 0x15;
              lVar5 = (ulonglong)uVar18 * 0x85ebca87;
              uVar33 = (uint)lVar5;
              iVar15 = 1;
              uVar26 = (uVar26 << 0xb | uVar24 >> 0x15) * -0x7a143579 +
                       uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
              uVar24 = 0xffffffff;
            }
            else {
              lVar5 = (ulonglong)*puVar27 * 0x85ebca87;
              uVar24 = (uint)lVar5 ^ uVar33;
              uVar26 = *puVar27 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar26;
              uVar44 = uVar24 << 0x17 | uVar26 >> 9;
              lVar5 = (ulonglong)uVar44 * 0x27d4eb4f;
              uVar18 = (uint)lVar5;
              uVar33 = uVar18 + 0x9e3779f9;
              iVar15 = 4;
              uVar26 = (uVar26 << 0x17 | uVar24 >> 9) * 0x27d4eb4f +
                       uVar44 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar18);
              uVar24 = 0xfffffffc;
            }
          }
          else {
            uVar24 = *puVar27;
            uVar18 = (uint)((ulonglong)uVar24 * 0x80000000) |
                     puVar27[1] * 0x27d4eb4f +
                     uVar24 * -0x3d4d51c3 + (int)((ulonglong)uVar24 * 0x27d4eb4f >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar18 * 0x85ebca87;
            uVar44 = (uint)lVar5 ^ uVar33;
            uVar26 = (puVar27[1] * -0x80000000 +
                     uVar24 * -0x6c158a59 + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar26;
            uVar18 = uVar44 << 0x1b | uVar26 >> 5;
            lVar5 = (ulonglong)uVar18 * 0x85ebca87;
            uVar24 = (uint)lVar5;
            uVar33 = uVar24 + 0xc2b2ae63;
            iVar15 = 8;
            uVar26 = (uVar26 << 0x1b | uVar44 >> 5) * -0x7a143579 +
                     uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar24);
            uVar24 = 0xfffffff8;
          }
          bVar48 = CARRY4(uVar24,uVar43);
          uVar43 = uVar24 + uVar43;
          puVar27 = (uint *)((int)puVar27 + iVar15);
          uVar17 = (uVar17 - 1) + (uint)bVar48;
        } while( true );
      }
      if (uVar26 == 2) {
        piStack_60 = (int *)apuStack_7c[1][0x4009];
        piVar34 = (int *)apuStack_7c[1][0x4008];
        puVar27 = (uint *)apuStack_7c[1][0x4007];
        uStack_64 = apuStack_7c[1][0x400a];
        if (piVar34 < (int *)0x20) {
          iVar15 = 0x27d4eb7f;
          uVar26 = 0x56d677d6;
        }
        else {
          uStack_30 = 0x50;
          uStack_2c = 0x40801011;
          uStack_28 = 0x61c8869e;
          uStack_38 = 0xc2b2ae8d;
          uStack_40 = 0xba94458a;
          iVar15 = 0;
          uStack_34 = 0x6854fb60;
          uVar26 = 0xee40c5e7;
          puVar28 = puVar27;
          piVar35 = piVar34;
          uVar33 = 0x60ea283e;
          do {
            uStack_3c = uVar33;
            uStack_44 = uVar26;
            puVar1 = puVar28 + 1;
            lVar5 = (ulonglong)puVar28[6] * 0x27d4eb4f;
            uVar26 = (uint)lVar5;
            uVar17 = uVar26 + uStack_40;
            uVar26 = puVar28[7] * 0x27d4eb4f +
                     puVar28[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_28 +
                     (uint)CARRY4(uVar26,uStack_40);
            uVar43 = uVar26 >> 1;
            uStack_48 = uVar17 * -0x80000000 | uVar43;
            uVar17 = uVar17 >> 1;
            uStack_4c = uVar26 * -0x80000000 | uVar17;
            uStack_40 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
            uStack_28 = uStack_4c * -0x7a143579 +
                        uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)puVar28[4] * 0x27d4eb4f;
            uVar26 = (uint)lVar5;
            uVar18 = uVar26 + uStack_2c;
            uVar26 = puVar28[5] * 0x27d4eb4f +
                     puVar28[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar26,uStack_2c);
            uVar24 = uVar26 >> 1;
            uStack_50 = uVar18 * -0x80000000 | uVar24;
            uVar18 = uVar18 >> 1;
            uStack_54 = uVar26 * -0x80000000 | uVar18;
            puVar2 = puVar28 + 3;
            uStack_2c = (uint)((ulonglong)uStack_50 * 0x85ebca87);
            uStack_30 = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            uVar33 = *puVar28;
            puVar3 = puVar28 + 2;
            puVar28 = puVar28 + 8;
            lVar5 = (ulonglong)*puVar3 * 0x27d4eb4f;
            uVar26 = (uint)lVar5;
            uVar21 = uVar26 + uStack_34;
            uVar26 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_38 + (uint)CARRY4(uVar26,uStack_34);
            uVar44 = uVar26 >> 1;
            uVar19 = uVar21 * -0x80000000 | uVar44;
            uVar21 = uVar21 >> 1;
            uVar16 = uVar26 * -0x80000000 | uVar21;
            uStack_34 = (uint)((ulonglong)uVar19 * 0x85ebca87);
            uStack_38 = uVar16 * -0x7a143579 +
                        uVar19 * -0x61c8864f + (int)((ulonglong)uVar19 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)uVar33 * 0x27d4eb4f;
            uVar26 = (uint)lVar5;
            uVar22 = uVar26 + uStack_44;
            uVar26 = *puVar1 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                     uStack_3c + (uint)CARRY4(uVar26,uStack_44);
            bVar48 = piVar35 < (int *)0x20;
            piVar35 = piVar35 + -8;
            uVar40 = uVar26 >> 1;
            uVar41 = uVar22 * -0x80000000 | uVar40;
            uVar22 = uVar22 >> 1;
            uVar46 = uVar26 * -0x80000000 | uVar22;
            iVar15 = iVar15 - (uint)bVar48;
            uVar26 = (uint)((ulonglong)uVar41 * 0x85ebca87);
            uVar33 = uVar46 * -0x7a143579 +
                     uVar41 * -0x61c8864f + (int)((ulonglong)uVar41 * 0x85ebca87 >> 0x20);
          } while ((uint)(piVar35 < (int *)0x20) <= (uint)-iVar15);
          uVar29 = uVar26 << 1 | uVar33 >> 0x1f;
          uVar36 = uStack_34 << 7 | uStack_38 >> 0x19;
          uVar30 = uVar36 + uVar29;
          uVar37 = uStack_2c << 0xc | uStack_30 >> 0x14;
          uVar31 = uVar30 + uVar37;
          uStack_2c = (uStack_38 * 0x80 | uStack_34 >> 0x19) + (uVar33 * 2 | uVar26 >> 0x1f) +
                      (uint)CARRY4(uVar36,uVar29) + (uStack_30 * 0x1000 | uStack_2c >> 0x14) +
                      (uint)CARRY4(uVar30,uVar37);
          uStack_30 = (uint)((ulonglong)uVar41 * 0x80000000 >> 0x20);
          uVar33 = (uint)((ulonglong)uVar41 * 0x80000000) |
                   uVar46 * 0xf796ca9 +
                   uVar41 * -0x210ca4ff + (int)((ulonglong)uVar41 * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar33 * 0x85ebca87;
          uVar39 = uStack_40 << 0x12 | uStack_28 >> 0xe;
          uVar32 = uVar31 + uVar39 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar32 * 0x85ebca87;
          uStack_34 = (uint)lVar6;
          uVar42 = (uint)((ulonglong)uVar19 * 0x80000000) |
                   uVar16 * 0xf796ca9 +
                   uVar19 * -0x210ca4ff + (int)((ulonglong)uVar19 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar42 * 0x85ebca87;
          uVar16 = uStack_34 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar16 * 0x85ebca87;
          uVar29 = (uint)lVar8;
          uVar30 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar30 * 0x85ebca87;
          uVar41 = uVar29 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar41 * 0x85ebca87;
          uVar36 = (uint)lVar10;
          uVar37 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar37 * 0x85ebca87;
          uVar46 = uVar36 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar46 * 0x85ebca87;
          uVar23 = (uint)lVar12;
          uVar26 = uVar23 + 0xc2b2ae63;
          iVar15 = ((((uStack_2c + (uStack_28 * 0x40000 | uStack_40 >> 0xe) +
                       (uint)CARRY4(uVar31,uVar39) ^
                      (uVar22 * -0x80000000 + uVar40 * -0x784349ac + uStack_30) * -0x7a143579 +
                      uVar33 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                      uVar32 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uStack_34) ^
                     (uVar21 * -0x80000000 +
                     uVar44 * -0x784349ac + (int)((ulonglong)uVar19 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                     -0x7a143579 + uVar16 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar29) ^
                    (uVar18 * -0x80000000 +
                    uVar24 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                    -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                   (uVar17 * -0x80000000 +
                   uVar43 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                   -0x7a143579 + uVar46 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar23);
          apuStack_70[1] = (uint *)piVar34;
          apuStack_70[2] = puVar27;
        }
        uVar33 = uVar26 + (int)piVar34;
        uVar43 = (uint)piVar34 & 0x1f;
        uStack_28 = iVar15 + (uint)CARRY4(uVar26,(uint)piVar34);
        uVar26 = 0;
        puVar27 = (uint *)((int)puVar27 + ((uint)piVar34 & 0xffffffe0));
        do {
          if (uVar26 == 0 && (7 < uVar43) <= uVar26) {
            if (uVar26 == 0 && (3 < uVar43) <= uVar26) {
              if (uVar43 == 0 && uVar26 == 0) goto LAB_714abd54;
              iVar15 = 1;
              lVar5 = (ulonglong)(uint)(byte)*puVar27 * 0x165667c5;
              uVar17 = (uint)lVar5 ^ uVar33;
              uStack_28 = (uint)(byte)*puVar27 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^
                          uStack_28;
              uVar24 = uVar17 << 0xb | uStack_28 >> 0x15;
              lVar5 = (ulonglong)uVar24 * 0x85ebca87;
              uVar33 = (uint)lVar5;
              uStack_28 = (uStack_28 << 0xb | uVar17 >> 0x15) * -0x7a143579 +
                          uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
              uVar17 = 0xffffffff;
            }
            else {
              lVar5 = (ulonglong)*puVar27 * 0x85ebca87;
              uVar17 = (uint)lVar5 ^ uVar33;
              uStack_28 = *puVar27 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uStack_28;
              uVar24 = uVar17 << 0x17 | uStack_28 >> 9;
              lVar5 = (ulonglong)uVar24 * 0x27d4eb4f;
              uVar18 = (uint)lVar5;
              iVar15 = 4;
              uVar33 = uVar18 + 0x9e3779f9;
              uStack_28 = (uStack_28 << 0x17 | uVar17 >> 9) * 0x27d4eb4f +
                          uVar24 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                          (uint)(0x61c88606 < uVar18);
              uVar17 = 0xfffffffc;
            }
          }
          else {
            uVar17 = *puVar27;
            uVar24 = (uint)((ulonglong)uVar17 * 0x80000000) |
                     puVar27[1] * 0x27d4eb4f +
                     uVar17 * -0x3d4d51c3 + (int)((ulonglong)uVar17 * 0x27d4eb4f >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar24 * 0x85ebca87;
            uStack_28 = (puVar27[1] * -0x80000000 +
                        uVar17 * -0x6c158a59 + (int)((ulonglong)uVar17 * 0x80000000 >> 0x20)) *
                        -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^
                        uStack_28;
            uVar17 = (uint)lVar5 ^ uVar33;
            iVar15 = 8;
            uVar24 = uVar17 << 0x1b | uStack_28 >> 5;
            lVar5 = (ulonglong)uVar24 * 0x85ebca87;
            uVar18 = (uint)lVar5;
            uVar33 = uVar18 + 0xc2b2ae63;
            uStack_28 = (uStack_28 << 0x1b | uVar17 >> 5) * -0x7a143579 +
                        uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar18);
            uVar17 = 0xfffffff8;
            uStack_2c = uVar26;
          }
          bVar48 = CARRY4(uVar17,uVar43);
          uVar43 = uVar17 + uVar43;
          puVar27 = (uint *)((int)puVar27 + iVar15);
          uVar26 = (uVar26 - 1) + (uint)bVar48;
        } while( true );
      }
      goto LAB_714ac4b0;
    }
  }
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b00036;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_714ac814:
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000c;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_714ac8b4:
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000e;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_714ac954:
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081718,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b00010;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
  coprocessor_movefromRt(1,5,1,in_cr13,in_cr4);
  coprocessor_movefromRt(0,5,4,in_cr13,in_cr8);
  coprocessor_movefromRt(0xf,5,7,in_cr13,in_cr8);
  coprocessor_movefromRt(0xf,5,2,in_cr13,in_cr8);
  coprocessor_movefromRt(0xe,5,5,in_cr13,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_714abaa4:
  uVar43 = uVar43 ^ uVar26 >> 1;
  lVar5 = (ulonglong)uVar43 * 0x27d4eb4f;
  uVar33 = (uint)lVar5;
  uVar26 = uVar26 * 0x27d4eb4f + uVar43 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar33 = (uVar33 >> 0x1d | uVar26 * 8) ^ uVar33;
  lVar5 = (ulonglong)uVar33 * 0x9e3779f9;
  puVar27 = (uint *)((uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
                    uVar33 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20));
  apuStack_70[1] = (uint *)piVar35;
  if (uStack_64 != ((uint)puVar27 ^ (uint)lVar5) || apuStack_70[2] != puVar27) goto LAB_714ac814;
  piVar14 = (int *)piStack_60[1];
  piVar20 = piStack_60;
  if ((int *)piStack_60[1] == (int *)0x0) {
    do {
      piVar34 = (int *)piVar20[2];
      bVar48 = (int *)*piVar34 != piVar20;
      piVar20 = piVar34;
    } while (bVar48);
  }
  else {
    do {
      piVar34 = piVar14;
      piVar14 = (int *)*piVar34;
    } while ((int *)*piVar34 != (int *)0x0);
  }
  if (piVar34 == piVar35) goto LAB_714aaf54;
  goto LAB_714ab4a4;
LAB_714ac448:
  uVar33 = uVar33 ^ uVar26 >> 1;
  lVar5 = (ulonglong)uVar33 * 0x27d4eb4f;
  uVar43 = (uint)lVar5;
  uVar26 = uVar26 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar43 = (uVar43 >> 0x1d | uVar26 * 8) ^ uVar43;
  lVar5 = (ulonglong)uVar43 * 0x9e3779f9;
  uVar26 = (uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
           uVar43 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  if (piStack_60 == (int *)(uVar26 ^ (uint)lVar5) && uStack_64 == uVar26) goto LAB_714ac4b0;
  goto LAB_714ac954;
LAB_714abd54:
  uVar33 = uVar33 ^ uStack_28 >> 1;
  lVar5 = (ulonglong)uVar33 * 0x27d4eb4f;
  uVar43 = (uint)lVar5;
  uVar26 = uStack_28 * 0x27d4eb4f + uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar43 = (uVar43 >> 0x1d | uVar26 * 8) ^ uVar43;
  lVar5 = (ulonglong)uVar43 * 0x9e3779f9;
  uVar26 = (uVar26 ^ uVar26 >> 0x1d) * -0x61c88607 +
           uVar43 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  uStack_58 = 3;
  if (piStack_60 == (int *)(uVar26 ^ (uint)lVar5) && uStack_64 == uVar26) {
    uStack_58 = 3;
LAB_714ac4b0:
    if (DAT_710eaec4 != 0) {
      uVar33 = 0;
      uVar26 = DAT_710eaec4;
      do {
        iVar15 = (&DAT_710eaec8)[uVar33];
        if (iVar15 != 0) {
          if (*(int *)(iVar15 + 0x2c) != 0) {
            if ((iStack_5c == 0) &&
               (*(uint *)(*piVar13 + 0x264) <=
                *(int *)(iVar15 + 0x14) + *(int *)(*piVar13 + 0x324) + 0x400U)) {
              return;
            }
            FUN_714a8678(iVar15,DAT_710eaeb4 + DAT_710eaebc,0);
            *(undefined4 *)((&DAT_710eaec8)[uVar33] + 0x28) = 2;
            iVar15 = (&DAT_710eaec8)[uVar33];
            uVar26 = DAT_710eaec4;
          }
          DAT_710eaebc = DAT_710eaebc + *(int *)(iVar15 + 0x14);
          (&DAT_710eaec8)[uVar33] = 0;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 < uVar26);
    }
    DAT_710eaebc = 0;
    DAT_710eaec0 = 0;
    DAT_710eaec4 = 0;
    DAT_710eaea9 = 0;
    return;
  }
  goto LAB_714ac8b4;
}


// =========================================================================
// Function: FUN_714acdb8
// Entry: 0x714acdb8 | Size: 196 bytes
// =========================================================================

void FUN_714acdb8(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar3 = FUN_719f8780(*(undefined4 *)(*param_1 + 4));
  if (((iVar3 != 0) || (iVar3 = FUN_719f87a8(*(undefined4 *)(*param_1 + 4)), iVar3 != 0)) &&
     (param_1[5] != 0)) {
    cVar2 = DAT_710eaea8;
    if (DAT_710eaea8 == '\0') {
      cVar2 = DAT_710eaea9;
    }
    if ((DAT_710eaea8 == '\0' && cVar2 == '\0') && (DAT_710eaec4 < 10)) {
      if (param_1[10] != 1) {
        return;
      }
      if (DAT_710eaec4 != 0) {
        puVar5 = &DAT_710eaec8;
        uVar4 = DAT_710eaec4;
        do {
          if ((int *)*puVar5 == param_1) {
            return;
          }
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar4 = DAT_710eaec0 + param_1[5];
      if (uVar4 < DAT_710eaeac) {
        piVar1 = &DAT_710eaec8 + DAT_710eaec4;
        DAT_710eaec0 = uVar4;
        DAT_710eaec4 = DAT_710eaec4 + 1;
        *piVar1 = (int)param_1;
      }
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714aceec
// Entry: 0x714aceec | Size: 180 bytes
// =========================================================================

void FUN_714aceec(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  DAT_710eaf18 = 0;
  DAT_710eaf14 = 0;
  puVar3 = DAT_710eaef0;
  if (DAT_710eaef0 != &DAT_710eaef4) {
    do {
      FUN_714a9208(puVar3[7]);
      puVar1 = (undefined4 *)puVar3[1];
      if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
        do {
          puVar2 = (undefined4 *)puVar3[2];
          bVar4 = (undefined4 *)*puVar2 != puVar3;
          puVar3 = puVar2;
        } while (bVar4);
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = (undefined4 *)*puVar2;
        } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
      }
      puVar3 = puVar2;
    } while (puVar2 != &DAT_710eaef4);
  }
  FUN_714aaccc(0);
  DAT_710eaf38 = DAT_710eaf38 + 1;
  return;
}


// =========================================================================
// Function: FUN_714ad090
// Entry: 0x714ad090 | Size: 140 bytes
// =========================================================================

void FUN_714ad090(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar4 = DAT_710eaef0;
  if (DAT_710eaef0 != &DAT_710eaef4) {
    do {
      uVar3 = puVar4[7];
      FUN_714a8d80(uVar3,1);
      FUN_714a8f6c(uVar3,0);
      puVar1 = (undefined4 *)puVar4[1];
      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
        do {
          puVar2 = (undefined4 *)puVar4[2];
          bVar5 = (undefined4 *)*puVar2 != puVar4;
          puVar4 = puVar2;
        } while (bVar5);
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = (undefined4 *)*puVar2;
        } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
      }
      puVar4 = puVar2;
    } while (puVar2 != &DAT_710eaef4);
  }
  return;
}


// =========================================================================
// Function: FUN_714ad18c
// Entry: 0x714ad18c | Size: 320 bytes
// =========================================================================

void FUN_714ad18c(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  uVar3 = thunk_pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                    (param_2,0x5f,0xffffffff);
  bVar2 = *param_2;
  if (uVar3 != 0xffffffff) {
    uVar6 = *(uint *)(param_2 + 4);
    if ((bVar2 & 1) == 0) {
      uVar6 = (uint)(bVar2 >> 1);
    }
    if (uVar3 - uVar6 < 0xfffffffe) {
      pbVar4 = *(byte **)(param_2 + 8);
      uVar8 = uVar3 + 1;
      if ((bVar2 & 1) == 0) {
        pbVar4 = param_2 + 1;
      }
      do {
        if (uVar6 <= uVar8) {
          if (uVar6 < uVar3) {
            uVar3 = uVar6;
          }
          if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(param_1);
          }
          if (uVar3 < 0xb) {
            puVar9 = (undefined1 *)((int)param_1 + 1);
            *(char *)param_1 = (char)(uVar3 << 1);
            if (uVar3 == 0) goto LAB_714ad2b8;
          }
          else {
            puVar9 = (undefined1 *)thunk_MwhHq((uVar3 | 7) + 1);
            *param_1 = (uVar3 | 7) + 2;
            param_1[1] = uVar3;
            param_1[2] = (int)puVar9;
          }
          imp___aeabi_memmove(puVar9,pbVar4,uVar3);
LAB_714ad2b8:
          puVar9[uVar3] = 0;
          return;
        }
      } while ((0x2f < pbVar4[uVar8]) &&
              (pbVar1 = pbVar4 + uVar8, uVar8 = uVar8 + 1, *pbVar1 < 0x3a));
      if ((bVar2 & 1) != 0) {
        FUN_712f6d58(param_1);
        return;
      }
      goto LAB_714ad230;
    }
  }
  if ((bVar2 & 1) != 0) {
    FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    return;
  }
LAB_714ad230:
  iVar5 = *(int *)(param_2 + 4);
  iVar7 = *(int *)(param_2 + 8);
  *param_1 = *(int *)param_2;
  param_1[1] = iVar5;
  param_1[2] = iVar7;
  return;
}


// =========================================================================
// Function: FUN_714ad38c
// Entry: 0x714ad38c | Size: 3708 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714ad38c(void)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [32];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ae4);
  if (*pcVar4 == '\0') {
    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ad4);
    *(undefined1 *)(puVar14 + 7) = 1;
    uVar12 = DAT_70081760;
    uVar7 = DAT_7008175c;
    *puVar14 = DAT_70081758;
    puVar14[1] = uVar7;
    puVar14[2] = uVar12;
    uVar2 = DAT_70081770;
    uVar12 = DAT_7008176c;
    uVar7 = DAT_70081768;
    puVar14[3] = DAT_70081764;
    puVar14[4] = uVar7;
    puVar14[5] = uVar12;
    puVar14[6] = uVar2;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3c24,puVar14,&DAT_70b0e000);
    puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ae4);
    *puVar19 = 1;
  }
  iVar5 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ad4);
  if (*(char *)(iVar5 + 0x1c) != '\0') {
    uVar9 = 0;
    uVar11 = 0;
    do {
      iVar23 = (uVar9 & 7) * 8;
      uVar24 = iVar23 - 0x20;
      bVar3 = (byte)(0x5949d57f >> iVar23) | (byte)(0x69bd2b5b << ((uVar9 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar24) {
        bVar3 = (byte)(0x69bd2b5b >> (uVar24 & 0xff));
      }
      *(byte *)(iVar5 + uVar9) = *(byte *)(iVar5 + uVar9) ^ bVar3;
      bVar27 = 0xfffffffe < uVar9;
      bVar26 = uVar11 == 0;
      bVar1 = (0x1a < uVar9) <= uVar11;
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + bVar27;
    } while (bVar26 && bVar1);
    *(undefined1 *)(iVar5 + 0x1c) = 0;
  }
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b04);
  if (*pcVar4 == '\0') {
    puVar18 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1af4);
    *puVar18 = 0xd50d;
    *(undefined1 *)(puVar18 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3c60,puVar18,&DAT_70b0e000);
    puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b04);
    *puVar19 = 1;
  }
  pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1af4);
  if (pbVar6[2] != 0) {
    pbVar6[2] = 0;
    *pbVar6 = *pbVar6 ^ 0x7f;
    pbVar6[1] = pbVar6[1] ^ 0xd5;
  }
  uVar7 = FUN_71339d5c(iVar5);
  iVar5 = FUN_7132d218();
  if (iVar5 != 0) {
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b14);
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b34);
    uVar9 = (uint)&uStack_60 | 1;
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b54);
    uVar11 = (uint)&uStack_60 | 1;
    do {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b24);
      if (*pcVar4 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b14);
        *puVar14 = 0x5a163ef8;
        puVar14[1] = 0x6179dc25;
        *(undefined1 *)(puVar14 + 2) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3c84,puVar14,&DAT_70b0e000);
        puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b24);
        *puVar19 = 1;
      }
      if (pbVar6[8] != 0) {
        pbVar6[8] = 0;
        *pbVar6 = *pbVar6 ^ 0xdd;
        pbVar6[1] = pbVar6[1] ^ 0xd;
        pbVar6[2] = pbVar6[2] ^ 0x27;
        pbVar6[3] = pbVar6[3] ^ 0x29;
        pbVar6[4] = pbVar6[4] ^ 5;
        pbVar6[5] = pbVar6[5] ^ 0xf9;
        pbVar6[6] = pbVar6[6] ^ 0x1d;
        pbVar6[7] = pbVar6[7] ^ 0x61;
      }
      iVar5 = imp_sscanf(iVar5,pbVar6,auStack_48,&iStack_50);
      if (iVar5 == 2) {
        uVar12 = thunk_MwhHq(0x74);
        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b44);
        if (*pcVar4 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b34);
          *puVar14 = 0x514b0e5f;
          *(undefined1 *)((int)puVar14 + 7) = 1;
          *(undefined4 *)((int)puVar14 + 3) = 0xd1688151;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71302658,puVar14,&DAT_70b0e000);
          puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b44);
          *puVar19 = 1;
        }
        if (pbVar8[7] != 0) {
          pbVar8[7] = 0;
          *pbVar8 = *pbVar8 ^ 0x2b;
          pbVar8[1] = pbVar8[1] ^ 0x6b;
          pbVar8[2] = pbVar8[2] ^ 0x33;
          pbVar8[3] = pbVar8[3] ^ 0x35;
          pbVar8[4] = pbVar8[4] ^ 0xe3;
          pbVar8[5] = pbVar8[5] ^ 0x47;
          pbVar8[6] = pbVar8[6] ^ 0xd1;
        }
        uVar24 = imp_strlen(pbVar8);
        if (0xfffffff7 < uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_7c);
        }
        if (uVar24 < 0xb) {
          uStack_7c = CONCAT31(uStack_7c._1_3_,(char)(uVar24 << 1));
          uVar15 = (uint)&uStack_7c | 1;
          if (uVar24 != 0) goto LAB_714ad6d0;
        }
        else {
          uVar15 = thunk_MwhHq((uVar24 | 7) + 1);
          uStack_7c = (uVar24 | 7) + 2;
          uStack_78 = uVar24;
          uStack_74 = uVar15;
LAB_714ad6d0:
          imp___aeabi_memmove(uVar15,pbVar8,uVar24);
        }
        *(undefined1 *)(uVar15 + uVar24) = 0;
        puVar13 = (uint *)thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                                    (&uStack_7c,auStack_48);
        uStack_70 = *puVar13;
        uStack_6c = puVar13[1];
        uStack_68 = puVar13[2];
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b64);
        if (*pcVar4 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b54);
          *(undefined1 *)((int)puVar14 + 10) = 1;
          *puVar14 = 0x57541d05;
          puVar14[1] = 0x33b52996;
          *(undefined2 *)(puVar14 + 2) = 0x6b4e;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3cac,puVar14,&DAT_70b0e000);
          puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b64);
          *puVar19 = 1;
        }
        if (pbVar10[10] != 0) {
          *pbVar10 = *pbVar10 ^ 0x2b;
          pbVar10[1] = pbVar10[1] ^ 0x6b;
          pbVar10[2] = pbVar10[2] ^ 0x33;
          pbVar10[3] = pbVar10[3] ^ 0x35;
          pbVar10[10] = 0;
          pbVar10[4] = pbVar10[4] ^ 0xe3;
          pbVar10[5] = pbVar10[5] ^ 0x47;
          pbVar10[6] = pbVar10[6] ^ 0xd1;
          pbVar10[7] = pbVar10[7] ^ 0x5f;
          pbVar10[8] = pbVar10[8] ^ 0x2b;
          pbVar10[9] = pbVar10[9] ^ 0x6b;
        }
        puVar13 = (uint *)thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                                    (&uStack_70);
        uStack_60 = *puVar13;
        uStack_5c = puVar13[1];
        uStack_58 = puVar13[2];
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        FUN_714a6e6c(uVar12,&uStack_60,iStack_50 != 0);
        uVar24 = imp_strlen(auStack_48);
        if (0xfffffff7 < uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_88);
        }
        if (uVar24 < 0xb) {
          uStack_88 = CONCAT31(uStack_88._1_3_,(char)(uVar24 << 1));
          uVar15 = (uint)&uStack_88 | 1;
          if (uVar24 != 0) goto LAB_714ad844;
        }
        else {
          uVar15 = thunk_MwhHq((uVar24 | 7) + 1);
          uStack_88 = (uVar24 | 7) + 2;
          uStack_84 = uVar24;
          uStack_80 = uVar15;
LAB_714ad844:
          imp___aeabi_memcpy(uVar15,auStack_48,uVar24);
        }
        *(undefined1 *)(uVar15 + uVar24) = 0;
        puVar14 = (undefined4 *)FUN_714b4120(&DAT_710eaef0,&uStack_4c,&uStack_88);
        puVar22 = (undefined4 *)*puVar14;
        if (puVar22 == (undefined4 *)0x0) {
          puVar22 = (undefined4 *)thunk_MwhHq(0x20);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[4] = uStack_88;
          puVar22[5] = uStack_84;
          puVar22[6] = uStack_80;
          puVar22[7] = 0;
          puVar22[2] = uStack_4c;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          *puVar14 = puVar22;
          puVar20 = puVar22;
          if ((undefined4 *)*DAT_710eaef0 != (undefined4 *)0x0) {
            puVar20 = (undefined4 *)*puVar14;
            DAT_710eaef0 = (undefined4 *)*DAT_710eaef0;
          }
          FUN_712f807c(DAT_710eaef4,puVar20);
          DAT_710eaef8 = DAT_710eaef8 + 1;
        }
        puVar22[7] = uVar12;
        if ((uStack_88 & 1) != 0) {
          thunk_qNQrlu(uStack_80);
        }
        if ((uStack_60 & 1) != 0) {
          thunk_qNQrlu(uStack_58);
        }
        if ((uStack_70 & 1) != 0) {
          thunk_qNQrlu(uStack_68);
        }
        if ((uStack_7c & 1) != 0) {
          thunk_qNQrlu(uStack_74);
        }
        uVar12 = imp_strdup(auStack_48);
        uVar24 = imp_strlen(auStack_48);
        if (0xfffffff7 < uVar24) goto LAB_714ae1e0;
        if (uVar24 < 0xb) {
          uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar24 << 1));
          uVar15 = uVar9;
          if (uVar24 != 0) goto LAB_714ad9a0;
        }
        else {
          uVar15 = thunk_MwhHq((uVar24 | 7) + 1);
          uStack_60 = (uVar24 | 7) + 2;
          uStack_5c = uVar24;
          uStack_58 = uVar15;
LAB_714ad9a0:
          imp___aeabi_memcpy(uVar15,auStack_48,uVar24);
        }
        *(undefined1 *)(uVar15 + uVar24) = 0;
        puVar14 = (undefined4 *)FUN_714b4120(&DAT_710eaef0,&uStack_70,&uStack_60);
        puVar22 = (undefined4 *)*puVar14;
        if (puVar22 == (undefined4 *)0x0) {
          puVar22 = (undefined4 *)thunk_MwhHq(0x20);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[4] = uStack_60;
          puVar22[5] = uStack_5c;
          puVar22[6] = uStack_58;
          puVar22[7] = 0;
          puVar22[2] = uStack_70;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          *puVar14 = puVar22;
          puVar20 = puVar22;
          if ((undefined4 *)*DAT_710eaef0 != (undefined4 *)0x0) {
            puVar20 = (undefined4 *)*puVar14;
            DAT_710eaef0 = (undefined4 *)*DAT_710eaef0;
          }
          FUN_712f807c(DAT_710eaef4,puVar20);
          DAT_710eaef8 = DAT_710eaef8 + 1;
        }
        *(undefined4 *)puVar22[7] = uVar12;
        if ((uStack_60 & 1) != 0) {
          thunk_qNQrlu(uStack_58);
        }
        uVar24 = imp_strlen(auStack_48);
        if (0xfffffff7 < uVar24) {
LAB_714ae1e0:
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_60);
        }
        if (uVar24 < 0xb) {
          uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar24 << 1));
          uVar15 = uVar11;
          if (uVar24 != 0) goto LAB_714adab0;
        }
        else {
          uVar15 = thunk_MwhHq((uVar24 | 7) + 1);
          uStack_60 = (uVar24 | 7) + 2;
          uStack_5c = uVar24;
          uStack_58 = uVar15;
LAB_714adab0:
          imp___aeabi_memcpy(uVar15,auStack_48,uVar24);
        }
        *(undefined1 *)(uVar15 + uVar24) = 0;
        puVar14 = (undefined4 *)FUN_714b4120(&DAT_710eaef0,&uStack_70,&uStack_60);
        puVar22 = (undefined4 *)*puVar14;
        if (puVar22 == (undefined4 *)0x0) {
          puVar22 = (undefined4 *)thunk_MwhHq(0x20);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[4] = uStack_60;
          puVar22[5] = uStack_5c;
          puVar22[6] = uStack_58;
          puVar22[7] = 0;
          puVar22[2] = uStack_70;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          *puVar14 = puVar22;
          puVar20 = puVar22;
          if ((undefined4 *)*DAT_710eaef0 != (undefined4 *)0x0) {
            puVar20 = (undefined4 *)*puVar14;
            DAT_710eaef0 = (undefined4 *)*DAT_710eaef0;
          }
          FUN_712f807c(DAT_710eaef4,puVar20);
          DAT_710eaef8 = DAT_710eaef8 + 1;
        }
        iVar5 = DAT_710eaf28;
        if (DAT_710eaf2c < DAT_710eaf30) {
          puVar14 = DAT_710eaf2c + 1;
          *DAT_710eaf2c = puVar22[7];
        }
        else {
          iVar25 = (int)DAT_710eaf2c - DAT_710eaf28;
          iVar23 = iVar25 >> 2;
          uVar24 = iVar23 + 1;
          if (0x3fffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_714b4270(&DAT_710eaf28);
          }
          uVar15 = (int)DAT_710eaf30 - DAT_710eaf28 >> 1;
          if (uVar24 < uVar15) {
            uVar24 = uVar15;
          }
          if (0x7ffffffb < (uint)((int)DAT_710eaf30 - DAT_710eaf28)) {
            uVar24 = 0x3fffffff;
          }
          if (uVar24 == 0) {
            iVar16 = 0;
          }
          else {
            if (0x3fffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            iVar16 = thunk_MwhHq(uVar24 << 2);
          }
          puVar14 = (undefined4 *)(iVar16 + iVar23 * 4);
          *puVar14 = puVar22[7];
          imp___aeabi_memcpy4(iVar16,iVar5,iVar25);
          puVar14 = puVar14 + 1;
          DAT_710eaf30 = (undefined4 *)(iVar16 + uVar24 * 4);
          DAT_710eaf28 = iVar16;
          if (iVar5 != 0) {
            DAT_710eaf2c = puVar14;
            thunk_qNQrlu(iVar5);
          }
        }
        DAT_710eaf2c = puVar14;
        if ((uStack_60 & 1) != 0) {
          thunk_qNQrlu(uStack_58);
        }
      }
      iVar5 = FUN_7132d218(uVar7);
    } while (iVar5 != 0);
  }
  FUN_7133a194(uVar7);
  FUN_714b401c(&DAT_710eaefc,DAT_710eaf00);
  uVar11 = DAT_710eaeb0;
  uVar9 = DAT_710eaeac;
  DAT_710eaefc = &DAT_710eaf00;
  DAT_710eaf00 = 0;
  DAT_710eaf04 = 0;
  puVar14 = DAT_710eaef0;
  if (DAT_710eaef0 != &DAT_710eaef4) {
    do {
      piVar17 = (int *)FUN_719f7b9c(*(undefined4 *)(puVar14[7] + 4));
      iVar5 = *piVar17;
      uVar24 = DAT_710eaeac;
      uVar15 = DAT_710eaeb0;
      while (iVar5 != piVar17[1]) {
        uVar21 = *(uint *)(iVar5 + 0x1d);
        if (uVar24 < uVar21) {
          uVar24 = uVar21;
          DAT_710eaeac = uVar21;
        }
        uVar21 = *(uint *)(iVar5 + 0x19);
        iVar5 = iVar5 + 0x35;
        if (uVar15 < uVar21) {
          uVar15 = uVar21;
          DAT_710eaeb0 = uVar21;
        }
      }
      puVar22 = (undefined4 *)puVar14[1];
      if ((undefined4 *)puVar14[1] == (undefined4 *)0x0) {
        do {
          puVar20 = (undefined4 *)puVar14[2];
          bVar26 = (undefined4 *)*puVar20 != puVar14;
          puVar14 = puVar20;
        } while (bVar26);
      }
      else {
        do {
          puVar20 = puVar22;
          puVar22 = (undefined4 *)*puVar20;
        } while ((undefined4 *)*puVar20 != (undefined4 *)0x0);
      }
      puVar14 = puVar20;
    } while (puVar20 != &DAT_710eaef4);
  }
  if (DAT_710eae98 == '\0') {
    DAT_710eae9c = FUN_714b97d4();
    DAT_710eaea0 = FUN_714b97d4();
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b84);
    if (*pcVar4 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b74);
      *puVar14 = 0x1c556aef;
      puVar14[1] = 0xfae38eae;
      *(undefined1 *)((int)puVar14 + 10) = 1;
      *(undefined2 *)(puVar14 + 2) = 0xfc3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3cd8,puVar14,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b84);
      *puVar19 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b74);
    if (pbVar6[10] != 0) {
      *pbVar6 = *pbVar6 ^ 0xbb;
      pbVar6[1] = pbVar6[1] ^ 0xf;
      pbVar6[2] = pbVar6[2] ^ 0x2d;
      pbVar6[3] = pbVar6[3] ^ 0x6f;
      pbVar6[10] = 0;
      pbVar6[4] = pbVar6[4] ^ 0xe3;
      pbVar6[5] = pbVar6[5] ^ 0xfb;
      pbVar6[6] = pbVar6[6] ^ 0x97;
      pbVar6[7] = pbVar6[7] ^ 0x9f;
      pbVar6[8] = pbVar6[8] ^ 0xbb;
      pbVar6[9] = pbVar6[9] ^ 0xf;
    }
    DAT_710eaea4 = FUN_714b9668();
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ba4);
    if (*pcVar4 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b94);
      *(undefined1 *)(puVar14 + 3) = 1;
      *puVar14 = 0x2a9bf46b;
      puVar14[1] = 0x81e30e63;
      puVar14[2] = 0x5990f453;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3d04,puVar14,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ba4);
      *puVar19 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1b94);
    if (pbVar6[0xc] != 0) {
      *pbVar6 = *pbVar6 ^ 0x3f;
      pbVar6[1] = pbVar6[1] ^ 0x91;
      pbVar6[2] = pbVar6[2] ^ 0xe3;
      pbVar6[3] = pbVar6[3] ^ 0x59;
      pbVar6[0xc] = 0;
      pbVar6[4] = pbVar6[4] ^ 0x21;
      pbVar6[5] = pbVar6[5] ^ 0x7b;
      pbVar6[6] = pbVar6[6] ^ 0x8d;
      pbVar6[7] = pbVar6[7] ^ 0xe5;
      pbVar6[8] = pbVar6[8] ^ 0x3f;
      pbVar6[9] = pbVar6[9] ^ 0x91;
      pbVar6[10] = pbVar6[10] ^ 0xe3;
      pbVar6[0xb] = pbVar6[0xb] ^ 0x59;
    }
    FUN_714b9e98(FUN_714aaae8,0,4,pbVar6,0,0);
    DAT_710eae98 = '\x01';
  }
  if (DAT_710eaeb4 == 0) {
LAB_714ae030:
    DAT_710eaeb4 = thunk__IBDl(DAT_710eaeac);
  }
  else if (uVar9 < DAT_710eaeac) {
    thunk_dGrRHE(DAT_710eaeb4);
    goto LAB_714ae030;
  }
  if (DAT_710eaeb8 != 0) {
    if (DAT_710eaeb0 <= uVar11) goto LAB_714ae060;
    thunk_dGrRHE();
  }
  DAT_710eaeb8 = thunk__IBDl(DAT_710eaeb0);
LAB_714ae060:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714af334
// Entry: 0x714af334 | Size: 276 bytes
// =========================================================================

void FUN_714af334(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[10] == 0 && DAT_710eaf34 == '\0') {
    if (*(char *)((int)param_1 + 9) != '\0') {
      FUN_714a8678(param_1,param_1[0xe],1);
      param_1[10] = 1;
      FUN_714a9578(*param_1,param_1,0);
      return;
    }
  }
  else {
    if (param_1[10] == 2) {
      return;
    }
    if ((*(char *)((int)param_1 + 9) != '\0') && (DAT_710eaf34 == '\0')) {
      return;
    }
  }
  imp_pthread_mutex_lock(DAT_710eaea4);
  if (DAT_710eaea8 == '\0') {
    imp_pthread_mutex_unlock(DAT_710eaea4);
  }
  else {
    DAT_710eae99 = 1;
    imp_pthread_mutex_unlock(DAT_710eaea4);
    imp_sem_wait(DAT_710eaea0);
  }
  FUN_714aaccc(1);
  if (param_1[10] == 2) {
    return;
  }
  iVar1 = FUN_714a84c8(*param_1,param_1);
  if (iVar1 != 0) {
    FUN_714a8678(param_1,DAT_710eaeb4,0);
    FUN_714a9578(*param_1,param_1,1);
    param_1[10] = 2;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714af5b8
// Entry: 0x714af5b8 | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714af5b8(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte abStack_20 [4];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  iVar2 = imp_strlen(param_1);
  pbVar5 = abStack_20 + -(iVar2 + 8U & 0xfffffff8);
  imp___aeabi_memcpy(pbVar5,param_1,iVar2);
  pbVar1 = pbVar5;
  for (iVar3 = iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
    bVar4 = *pbVar1;
    if (0xffffffe5 < bVar4 - 0x5b) {
      bVar4 = bVar4 | 0x20;
    }
    *pbVar1 = bVar4;
    pbVar1 = pbVar1 + 1;
  }
  pbVar5[iVar2] = 0;
  FUN_71885ba4(pbVar5,0);
  if (_ext___stack_chk_guard != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_714af734
// Entry: 0x714af734 | Size: 844 bytes
// =========================================================================

undefined4 FUN_714af734(char *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  int *unaff_r9;
  int *unaff_r10;
  uint uStack_38;
  undefined1 uStack_31;
  uint *puStack_30;
  int aiStack_2c [2];
  
  if (*param_1 != '\0') {
    uVar3 = FUN_714af5b8();
    piVar5 = DAT_710eaf2c;
    uStack_38 = uVar3;
    if (param_3 == 0) {
      piVar10 = DAT_710eaf28;
      if (DAT_710eaf28 == DAT_710eaf2c) {
        return 0;
      }
      do {
        iVar9 = *piVar10;
        uVar12 = *(uint *)(iVar9 + 0xc);
        if (uVar12 != 0) {
          uVar6 = uVar12 - (uVar12 >> 1 & 0x55555555);
          uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
          uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          if (uVar6 < 2) {
            uVar11 = uVar12 - 1 & uVar3;
          }
          else {
            uVar11 = uVar3;
            if (uVar12 <= uVar3) {
              FUN_71ba33fc(uVar3,uVar12);
              uVar11 = extraout_r1_01;
            }
          }
          piVar4 = (int *)(iVar9 + 8);
          piVar8 = *(int **)(*piVar4 + uVar11 * 4);
          if (piVar8 != (int *)0x0) {
            unaff_r10 = (int *)*piVar8;
          }
          if (piVar8 != (int *)0x0 && unaff_r10 != (int *)0x0) {
            do {
              uVar7 = unaff_r10[1];
              if (uVar3 == uVar7) {
                if (unaff_r10[2] == uVar3) goto LAB_714afa30;
              }
              else {
                if (uVar6 < 2) {
                  uVar7 = uVar7 & uVar12 - 1;
                }
                else if (uVar12 <= uVar7) {
                  FUN_71ba33fc(uVar7,uVar12);
                  uVar7 = extraout_r1_02;
                }
                if (uVar7 != uVar11) break;
              }
              unaff_r10 = (int *)*unaff_r10;
            } while (unaff_r10 != (int *)0x0);
          }
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != piVar5);
    }
    else {
      puVar13 = DAT_710eaf0c;
      if (DAT_710eaf0c == &DAT_710eaf08) {
        return 0;
      }
      do {
        iVar9 = *(int *)(puVar13 + 8);
        uVar12 = *(uint *)(iVar9 + 0xc);
        if (uVar12 != 0) {
          uVar6 = uVar12 - (uVar12 >> 1 & 0x55555555);
          uVar6 = (uVar6 & 0x33333333) + (uVar6 >> 2 & 0x33333333);
          uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          if (uVar6 < 2) {
            uVar11 = uVar12 - 1 & uVar3;
          }
          else {
            uVar11 = uVar3;
            if (uVar12 <= uVar3) {
              FUN_71ba33fc(uVar3,uVar12);
              uVar11 = extraout_r1;
            }
          }
          piVar4 = (int *)(iVar9 + 8);
          piVar5 = *(int **)(*piVar4 + uVar11 * 4);
          if (piVar5 != (int *)0x0) {
            unaff_r9 = (int *)*piVar5;
          }
          if (piVar5 != (int *)0x0 && unaff_r9 != (int *)0x0) {
            do {
              uVar7 = unaff_r9[1];
              if (uVar3 == uVar7) {
                if (unaff_r9[2] == uVar3) {
LAB_714afa30:
                  puStack_30 = &uStack_38;
                  FUN_714a9c8c(aiStack_2c,piVar4,puStack_30,&DAT_70081830,&puStack_30,&uStack_31);
                  uVar2 = DAT_710eaf34;
                  iVar9 = *(int *)(aiStack_2c[0] + 0xc);
                  if (param_2 == 0) {
                    FUN_714af334(iVar9);
                  }
                  else {
                    DAT_710eaf34 = 1;
                    FUN_714af334(iVar9);
                    DAT_710eaf34 = uVar2;
                  }
                  return *(undefined4 *)(iVar9 + 0x30);
                }
              }
              else {
                if (uVar6 < 2) {
                  uVar7 = uVar7 & uVar12 - 1;
                }
                else if (uVar12 <= uVar7) {
                  FUN_71ba33fc(uVar7,uVar12);
                  uVar7 = extraout_r1_00;
                }
                if (uVar7 != uVar11) break;
              }
              unaff_r9 = (int *)*unaff_r9;
            } while (unaff_r9 != (int *)0x0);
          }
        }
        puVar1 = (undefined4 *)(puVar13 + 4);
        puVar13 = (undefined *)*puVar1;
      } while ((undefined *)*puVar1 != &DAT_710eaf08);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_714afc58
// Entry: 0x714afc58 | Size: 616 bytes
// =========================================================================

int FUN_714afc58(undefined4 param_1,char *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *unaff_r8;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int *piStack_30;
  int *piStack_2c;
  
  if (*param_2 == '\0') {
    return 0;
  }
  uVar2 = FUN_714af5b8(param_2);
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar3 < 0xb) {
    uVar9 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_714afcf4;
  }
  else {
    uVar9 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_3c = (uVar3 | 7) + 2;
    uStack_38 = uVar3;
    uStack_34 = uVar9;
  }
  imp___aeabi_memcpy(uVar9,param_1,uVar3);
LAB_714afcf4:
  iVar6 = 0;
  *(undefined1 *)(uVar9 + uVar3) = 0;
  FUN_714b0048(&piStack_30,&uStack_3c);
  if ((uStack_3c & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  piVar8 = piStack_30;
  if (piStack_30 != piStack_2c) {
    do {
      iVar6 = *piVar8;
      uVar3 = *(uint *)(iVar6 + 0xc);
      if (uVar3 != 0) {
        uVar9 = uVar3 - (uVar3 >> 1 & 0x55555555);
        uVar9 = (uVar9 & 0x33333333) + (uVar9 >> 2 & 0x33333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar9 < 2) {
          uVar7 = uVar3 - 1 & uVar2;
        }
        else {
          uVar7 = uVar2;
          if (uVar3 <= uVar2) {
            FUN_71ba33fc(uVar2,uVar3);
            uVar7 = extraout_r1;
          }
        }
        piVar4 = *(int **)(*(int *)(iVar6 + 8) + uVar7 * 4);
        if (piVar4 != (int *)0x0) {
          unaff_r8 = (int *)*piVar4;
        }
        if (piVar4 != (int *)0x0 && unaff_r8 != (int *)0x0) {
          do {
            uVar1 = DAT_710eaf34;
            uVar5 = unaff_r8[1];
            if (uVar5 == uVar2) {
              if (unaff_r8[2] == uVar2) {
                iVar6 = unaff_r8[3];
                if (param_3 == 0) {
                  FUN_714af334(iVar6);
                }
                else {
                  DAT_710eaf34 = 1;
                  FUN_714af334(iVar6);
                  DAT_710eaf34 = uVar1;
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                if (iVar6 != 0) goto joined_r0x714afeb0;
                break;
              }
            }
            else {
              if (uVar9 < 2) {
                uVar5 = uVar5 & uVar3 - 1;
              }
              else if (uVar3 <= uVar5) {
                FUN_71ba33fc(uVar5,uVar3);
                uVar5 = extraout_r1_00;
              }
              if (uVar5 != uVar7) break;
            }
            unaff_r8 = (int *)*unaff_r8;
          } while (unaff_r8 != (int *)0x0);
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piStack_2c);
    iVar6 = 0;
  }
joined_r0x714afeb0:
  if (piStack_30 != (int *)0x0) {
    thunk_qNQrlu(piStack_30);
  }
  return iVar6;
}


// =========================================================================
// Function: FUN_714b0048
// Entry: 0x714b0048 | Size: 272 bytes
// =========================================================================

void FUN_714b0048(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte abStack_24 [8];
  undefined4 uStack_1c;
  
  puVar1 = (undefined4 *)FUN_714b42d8(&DAT_710eaef0);
  if (puVar1 != &DAT_710eaef4) {
    uVar3 = puVar1[7];
    puVar1 = (undefined4 *)thunk_MwhHq(4);
    *puVar1 = uVar3;
    *param_1 = (int)puVar1;
    param_1[1] = (int)(puVar1 + 1);
    param_1[2] = (int)(puVar1 + 1);
    return;
  }
  FUN_714ad18c(abStack_24,param_2);
  puVar1 = (undefined4 *)FUN_714b4428(&DAT_710eaefc,abStack_24);
  if ((abStack_24[0] & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  if (puVar1 == &DAT_710eaf00) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar5 = puVar1[7];
    if (puVar1[8] != iVar5) {
      iVar4 = puVar1[8] - iVar5;
      if (-1 < iVar4) {
        iVar2 = thunk_MwhHq(iVar4);
        *param_1 = iVar2;
        param_1[2] = iVar2 + iVar4;
        imp___aeabi_memcpy4(iVar2,iVar5,iVar4);
        param_1[1] = iVar2 + iVar4;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_714b4270(param_1);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714b0290
// Entry: 0x714b0290 | Size: 296 bytes
// =========================================================================

void FUN_714b0290(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (DAT_710eaf24 != param_1) {
    DAT_710eaf24 = (ushort)param_1;
    FUN_7139a77c(*DAT_70b46448);
    imp_pthread_mutex_lock(DAT_710eaea4);
    if (DAT_710eaea8 == '\0') {
      imp_pthread_mutex_unlock(DAT_710eaea4);
    }
    else {
      DAT_710eae99 = 1;
      imp_pthread_mutex_unlock(DAT_710eaea4);
      imp_sem_wait(DAT_710eaea0);
    }
    FUN_714aaccc(1);
    puVar3 = DAT_710eaef0;
    if (DAT_710eaef0 != &DAT_710eaef4) {
      do {
        for (puVar4 = *(undefined4 **)(puVar3[7] + 0x40); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          iVar1 = FUN_714a84c8(puVar3[7],puVar4[3]);
          if (iVar1 != 0) {
            FUN_714a8678(puVar4[3],DAT_710eaeb4,0);
          }
        }
        puVar4 = (undefined4 *)puVar3[1];
        if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
          do {
            puVar2 = (undefined4 *)puVar3[2];
            bVar5 = (undefined4 *)*puVar2 != puVar3;
            puVar3 = puVar2;
          } while (bVar5);
        }
        else {
          do {
            puVar2 = puVar4;
            puVar4 = (undefined4 *)*puVar2;
          } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
        }
        puVar3 = puVar2;
      } while (puVar2 != &DAT_710eaef4);
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714b0530
// Entry: 0x714b0530 | Size: 5972 bytes
// =========================================================================

uint FUN_714b0530(byte *param_1,byte *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  byte *pbVar24;
  undefined *puVar25;
  byte *pbVar26;
  uint uVar27;
  byte bVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  bool bVar37;
  bool bVar38;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  byte abStack_130 [8];
  undefined4 uStack_128;
  byte abStack_c4 [8];
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  int iStack_88;
  int iStack_84;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint *puStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  if (DAT_710eaf28 == DAT_710eaf2c) {
    uVar31 = 0;
  }
  else {
    FUN_7139a77c(*DAT_70b46448);
    bVar28 = DAT_710eaea8;
    if (DAT_710eaea8 == 0) {
      bVar28 = DAT_710eaea9;
    }
    if ((DAT_710eaea8 != 0 || bVar28 != 0) || (DAT_710eaec4 != 0)) {
      do {
        do {
          imp_pthread_mutex_lock(DAT_710eaea4);
          if (DAT_710eaea8 == 0) {
            imp_pthread_mutex_unlock(DAT_710eaea4);
          }
          else {
            DAT_710eae99 = 1;
            imp_pthread_mutex_unlock(DAT_710eaea4);
            imp_sem_wait(DAT_710eaea0);
          }
          FUN_714aaccc(1);
        } while (DAT_710eaea8 != 0);
        uVar8 = (uint)DAT_710eaea9;
        uVar31 = uVar8;
        if (uVar8 == 0) {
          uVar31 = DAT_710eaec4;
        }
      } while (uVar8 != 0 || uVar31 != 0);
    }
    puVar22 = DAT_710eaef0;
    if (DAT_710eaef0 != &DAT_710eaef4) {
      do {
        FUN_714a8d80(puVar22[7],1);
        FUN_719f4de0(*(undefined4 *)(puVar22[7] + 4));
        puVar7 = (undefined4 *)puVar22[1];
        if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
          do {
            puVar21 = (undefined4 *)puVar22[2];
            bVar37 = (undefined4 *)*puVar21 != puVar22;
            puVar22 = puVar21;
          } while (bVar37);
        }
        else {
          do {
            puVar21 = puVar7;
            puVar7 = (undefined4 *)*puVar21;
          } while ((undefined4 *)*puVar21 != (undefined4 *)0x0);
        }
        puVar22 = puVar21;
      } while (puVar21 != &DAT_710eaef4);
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bc4);
    if (*pcVar9 == '\0') {
      puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bb4);
      *(undefined2 *)(puVar22 + 3) = 0x113;
      *puVar22 = 0x834e2b94;
      puVar22[1] = 0xb72a7a67;
      puVar22[2] = 0x934b23de;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3d30,puVar22,&DAT_70b0e000);
      puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bc4);
      *puVar19 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bb4);
    if (pbVar10[0xd] != 0) {
      *pbVar10 = *pbVar10 ^ 0xbb;
      pbVar10[1] = pbVar10[1] ^ 0x5b;
      pbVar10[2] = pbVar10[2] ^ 0x2f;
      pbVar10[3] = pbVar10[3] ^ 0xf1;
      pbVar10[0xd] = 0;
      pbVar10[4] = pbVar10[4] ^ 0x13;
      pbVar10[5] = pbVar10[5] ^ 0x4b;
      pbVar10[6] = pbVar10[6] ^ 5;
      pbVar10[7] = pbVar10[7] ^ 0xc3;
      pbVar10[8] = pbVar10[8] ^ 0xbb;
      pbVar10[9] = pbVar10[9] ^ 0x5b;
      pbVar10[10] = pbVar10[10] ^ 0x2f;
      pbVar10[0xb] = pbVar10[0xb] ^ 0xf1;
      pbVar10[0xc] = pbVar10[0xc] ^ 0x13;
    }
    bVar28 = *param_1;
    uVar31 = *(uint *)(param_1 + 4);
    if ((bVar28 & 1) == 0) {
      uVar31 = (uint)(bVar28 >> 1);
    }
    iVar11 = imp_strlen(pbVar10);
    uVar8 = uVar31 + iVar11;
    if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_38);
    }
    if (uVar8 < 0xb) {
      uStack_38 = (uint)(byte)((char)uVar8 * '\x02');
      uStack_30 = 0;
      uVar12 = 0;
      uStack_34 = 0;
    }
    else {
      uStack_30 = thunk_MwhHq((uVar8 | 7) + 1);
      uStack_38 = (uVar8 | 7) + 2;
      uVar12 = uStack_38 & 0xff;
      uStack_34 = uVar8;
    }
    uVar23 = (uint)&uStack_38 | 1;
    uVar8 = uStack_30;
    if ((uVar12 & 1) == 0) {
      uVar8 = uVar23;
    }
    if (uVar31 != 0) {
      pbVar24 = *(byte **)(param_1 + 8);
      if ((bVar28 & 1) == 0) {
        pbVar24 = param_1 + 1;
      }
      imp___aeabi_memmove(uVar8,pbVar24,uVar31);
    }
    if (iVar11 != 0) {
      imp___aeabi_memmove(uVar8 + uVar31,pbVar10,iVar11);
    }
    *(undefined1 *)(uVar8 + uVar31 + iVar11) = 0;
    uVar31 = uStack_30;
    if ((uStack_38 & 1) == 0) {
      uVar31 = uVar23;
    }
    iVar11 = imp_opendir(uVar31);
    if (iVar11 == 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1be4);
      if (*pcVar9 == '\0') {
        puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bd4);
        *(undefined1 *)((int)puVar22 + 0x19) = 1;
        uVar6 = DAT_7008178c;
        uVar5 = DAT_70081788;
        uVar4 = DAT_70081784;
        uVar3 = DAT_70081780;
        uVar2 = DAT_7008177c;
        *puVar22 = DAT_70081778;
        puVar22[1] = uVar2;
        puVar22[2] = uVar3;
        puVar22[3] = uVar4;
        puVar22[4] = uVar5;
        puVar22[5] = uVar6;
        *(undefined1 *)(puVar22 + 6) = DAT_70081790;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3d60,puVar22,&DAT_70b0e000);
        puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1be4);
        *puVar19 = 1;
      }
      iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bd4);
      if (*(char *)(iVar11 + 0x19) != '\0') {
        uVar31 = 0;
        uVar8 = 0;
        do {
          iVar13 = (uVar31 & 7) * 8;
          uVar12 = iVar13 - 0x20;
          bVar28 = (byte)(0x9b5de92f >> iVar13) |
                   (byte)(0x17d14d6d << ((uVar31 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar12) {
            bVar28 = (byte)(0x17d14d6d >> (uVar12 & 0xff));
          }
          *(byte *)(iVar11 + uVar31) = *(byte *)(iVar11 + uVar31) ^ bVar28;
          bVar38 = 0xfffffffe < uVar31;
          bVar37 = uVar8 == 0;
          bVar1 = (0x17 < uVar31) <= uVar8;
          uVar31 = uVar31 + 1;
          uVar8 = uVar8 + bVar38;
        } while (bVar37 && bVar1);
        *(undefined1 *)(iVar11 + 0x19) = 0;
      }
      uVar31 = uStack_30;
      if ((uStack_38 & 1) == 0) {
        uVar31 = uVar23;
      }
      FUN_7188543c(iVar11,uVar31);
      uVar31 = 0;
    }
    else {
      puStack_3c = (uint *)0x0;
      puStack_40 = (uint *)0x0;
      puStack_44 = (uint *)0x0;
      DataMemoryBarrier(0xb);
      if (((DAT_710eaf48 & 1) == 0) &&
         (iVar13 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eaf48), iVar13 != 0)) {
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c04);
        if (*pcVar9 == '\0') {
          puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bf4);
          *puVar22 = 0xadbe2955;
          puVar22[1] = 0x25195dc8;
          *(undefined1 *)((int)puVar22 + 10) = 1;
          *(undefined2 *)(puVar22 + 2) = 0x5f1e;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3d9c,puVar22,&DAT_70b0e000);
          puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c04);
          *puVar19 = 1;
        }
        pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1bf4);
        if (pbVar10[10] != 0) {
          *pbVar10 = *pbVar10 ^ 0x7b;
          pbVar10[1] = pbVar10[1] ^ 0x5f;
          pbVar10[2] = pbVar10[2] ^ 0xd9;
          pbVar10[3] = pbVar10[3] ^ 0xcf;
          pbVar10[10] = 0;
          pbVar10[4] = pbVar10[4] ^ 0xbd;
          pbVar10[5] = pbVar10[5] ^ 0x33;
          pbVar10[6] = pbVar10[6] ^ 0x7d;
          pbVar10[7] = pbVar10[7] ^ 0x49;
          pbVar10[8] = pbVar10[8] ^ 0x7b;
          pbVar10[9] = pbVar10[9] ^ 0x5f;
        }
        FUN_71315100(&DAT_710eaf3c);
        thunk_raw_10ab3090(0x71b39013,&DAT_710eaf3c,&DAT_70b0e000);
        thunk_SixizuLbAnqfgRApsCY(&DAT_710eaf48);
      }
      iVar13 = imp_readdir(iVar11);
      if (iVar13 != 0) {
        uVar31 = (uint)&uStack_b8 | 1;
        do {
          uVar8 = imp_strlen(iVar13 + 0x13);
          if (0xfffffff7 < uVar8) goto LAB_714b1b2c;
          if (uVar8 < 0xb) {
            uStack_b8 = CONCAT31(uStack_b8._1_3_,(char)(uVar8 << 1));
            uVar12 = uVar31;
            if (uVar8 != 0) goto LAB_714b0910;
          }
          else {
            uVar12 = thunk_MwhHq((uVar8 | 7) + 1);
            uStack_b8 = (uVar8 | 7) + 2;
            uStack_b4 = uVar8;
            uStack_b0 = uVar12;
LAB_714b0910:
            imp___aeabi_memmove(uVar12,iVar13 + 0x13,uVar8);
          }
          uVar34 = uStack_b0;
          uVar27 = uStack_b4;
          *(undefined1 *)(uVar12 + uVar8) = 0;
          uVar12 = uStack_b8 & 1;
          uVar33 = uStack_b8 & 1;
          uVar36 = uStack_b8 & 1;
          uVar8 = uStack_b4;
          if ((uStack_b8 & 1) == 0) {
            uVar8 = uStack_b8 >> 1 & 0x7f;
          }
          uVar17 = DAT_710eaf40;
          if ((DAT_710eaf3c & 1) == 0) {
            uVar17 = (uint)(DAT_710eaf3c >> 1);
          }
          if (uVar17 <= uVar8) {
            if (uVar17 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6b48(&uStack_b8);
            }
            puVar25 = DAT_710eaf44;
            if ((DAT_710eaf3c & 1) == 0) {
              puVar25 = &DAT_710eaf3d;
            }
            uVar29 = uStack_b0;
            if ((uStack_b8 & 1) == 0) {
              uVar29 = uVar31;
            }
            iVar13 = imp_memcmp(uVar29 + (uVar8 - uVar17),puVar25);
            puVar30 = puStack_40;
            puVar35 = puStack_44;
            if (iVar13 == 0) {
              if (puStack_40 < puStack_3c) {
                if (uVar12 == 0) {
                  *puStack_40 = uStack_b8;
                  puStack_40[1] = uStack_b4;
                  puStack_40[2] = uStack_b0;
                  uVar36 = uStack_b8 & 1;
                }
                else {
                  FUN_712f6d58(puStack_40,uVar34,uVar27);
                  uVar36 = 1;
                }
              }
              else {
                iVar13 = (int)puStack_40 - (int)puStack_44;
                uVar8 = (iVar13 >> 2) * -0x55555555 + 1;
                if (0x15555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_712f6ffc(&puStack_44);
                }
                iVar14 = (int)puStack_3c - (int)puStack_44 >> 2;
                if (uVar8 < (uint)(iVar14 * 0x55555556)) {
                  uVar8 = iVar14 * 0x55555556;
                }
                if (0xaaaaaa9 < (uint)(iVar14 * -0x55555555)) {
                  uVar8 = 0x15555555;
                }
                if (uVar8 == 0) {
                  iVar14 = 0;
                }
                else {
                  if (0x15555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
                    FUN_712f6cf0();
                  }
                  iVar14 = thunk_MwhHq(uVar8 * 0xc);
                }
                puVar30 = (uint *)(iVar14 + (iVar13 >> 2) * 4);
                if (uVar33 == 0) {
                  *puVar30 = uStack_b8;
                  puVar30[1] = uStack_b4;
                  puVar30[2] = uStack_b0;
                }
                else {
                  FUN_712f6d58(puVar30,uVar34,uVar27);
                }
                puVar18 = (uint *)((int)puVar30 - iVar13);
                puVar32 = (uint *)(iVar14 + uVar8 * 0xc);
                imp___aeabi_memcpy4(puVar18,puVar35,iVar13);
                puStack_44 = puVar18;
                puStack_3c = puVar32;
                if (puVar35 != (uint *)0x0) {
                  thunk_qNQrlu(puVar35);
                }
              }
              puStack_40 = puVar30 + 3;
            }
          }
          if (uVar36 != 0) {
            thunk_qNQrlu(uStack_b0);
          }
          iVar13 = imp_readdir(iVar11);
        } while (iVar13 != 0);
      }
      imp_closedir(iVar11);
      puVar30 = puStack_40;
      puVar35 = puStack_44;
      if (puStack_44 == puStack_40) {
        uVar31 = 1;
        puVar18 = puStack_44;
      }
      else {
        uVar8 = (uint)&uStack_140 | 1;
        uVar12 = (uint)&uStack_50 | 1;
        pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c34);
        uVar33 = (uint)abStack_c4 | 1;
        pbVar24 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c54);
        iVar11 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c74);
        iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c94);
        iVar14 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1cb4);
        iVar15 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c14);
        uVar31 = 1;
        do {
          uVar34 = uStack_38;
          uVar27 = uStack_34;
          if ((uStack_38 & 1) == 0) {
            uVar27 = uStack_38 >> 1 & 0x7f;
          }
          iVar16 = imp_strlen(&DAT_700645a0);
          uVar36 = uVar27 + iVar16;
          if (0xfffffff7 < uVar36) {
LAB_714b1b2c:
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_b8);
          }
          if (uVar36 < 0xb) {
            uStack_b8 = (uint)(byte)((char)uVar36 * '\x02');
            uStack_b0 = 0;
            uVar17 = 0;
            uStack_b4 = 0;
          }
          else {
            uStack_b0 = thunk_MwhHq((uVar36 | 7) + 1);
            uStack_b8 = (uVar36 | 7) + 2;
            uVar17 = uStack_b8 & 0xff;
            uStack_b4 = uVar36;
          }
          uVar36 = uStack_b0;
          if ((uVar17 & 1) == 0) {
            uVar36 = (uint)&uStack_b8 | 1;
          }
          if (uVar27 != 0) {
            uVar17 = uStack_30;
            if ((uVar34 & 1) == 0) {
              uVar17 = uVar23;
            }
            imp___aeabi_memmove(uVar36,uVar17,uVar27);
          }
          if (iVar16 != 0) {
            imp___aeabi_memcpy(uVar36 + uVar27,&DAT_700645a0,iVar16);
          }
          *(undefined1 *)(uVar36 + uVar27 + iVar16) = 0;
          uVar27 = puVar35[1];
          pbVar26 = (byte *)puVar35[2];
          if (((byte)*puVar35 & 1) == 0) {
            uVar27 = (uint)(byte)((byte)*puVar35 >> 1);
            pbVar26 = (byte *)((int)puVar35 + 1);
          }
          puVar18 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                                      (&uStack_b8,pbVar26,uVar27);
          uStack_50 = *puVar18;
          uStack_4c = puVar18[1];
          uStack_48 = puVar18[2];
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          if ((uStack_b8 & 1) != 0) {
            thunk_qNQrlu(uStack_b0);
          }
          imp___aeabi_memclr8(&uStack_b8,0x68);
          uVar27 = uStack_48;
          if ((uStack_50 & 1) == 0) {
            uVar27 = uVar12;
          }
          iVar16 = imp_stat(uVar27,&uStack_b8);
          if ((iVar16 == 0) && (iStack_88 != 0 || iStack_84 != 0)) {
            pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c44);
            if (*pcVar9 == '\0') {
              puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c34);
              *puVar22 = 0xb94b960f;
              *(undefined1 *)((int)puVar22 + 7) = 1;
              *(undefined4 *)((int)puVar22 + 3) = 0xab72ebb9;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3e18,puVar22,&DAT_70b0e000);
              puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c44);
              *puVar19 = 1;
            }
            if (pbVar10[7] != 0) {
              *pbVar10 = *pbVar10 ^ 0x7b;
              pbVar10[1] = pbVar10[1] ^ 0xf3;
              pbVar10[2] = pbVar10[2] ^ 0x33;
              pbVar10[3] = pbVar10[3] ^ 0xdd;
              pbVar10[4] = pbVar10[4] ^ 0x89;
              pbVar10[7] = 0;
              pbVar10[5] = pbVar10[5] ^ 0x5d;
              pbVar10[6] = pbVar10[6] ^ 0xab;
            }
            thunk_ACPvXABgTDKppmRiQuPVXmvfB_HeOltD_lCwyaDGJj_TyPZR_zqPlpiRxgxdAFbXtfGHEsKfuSmuyghkCdavNUVKpNwbn
                      (abStack_130,pbVar10,puVar35);
            FUN_714ba554(abStack_c4,abStack_130,0,1,0);
            if ((abStack_130[0] & 1) != 0) {
              thunk_qNQrlu(uStack_128);
            }
            imp___aeabi_memclr8(abStack_130,0x68);
            uVar27 = uStack_bc;
            if ((abStack_c4[0] & 1) == 0) {
              uVar27 = uVar33;
            }
            iVar16 = imp_stat(uVar27,abStack_130);
            if (iVar16 == 0) {
              pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c64);
              if (*pcVar9 == '\0') {
                puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c54);
                *(undefined1 *)((int)puVar22 + 0xe) = 1;
                *puVar22 = 0x5f8a5506;
                puVar22[1] = 0xbd7ad633;
                puVar22[2] = 0x4f8f5d4c;
                *(undefined2 *)(puVar22 + 3) = 0xe768;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3e40,puVar22,&DAT_70b0e000);
                puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c64);
                *puVar19 = 1;
              }
              if (pbVar24[0xe] != 0) {
                *pbVar24 = *pbVar24 ^ 0x29;
                pbVar24[1] = pbVar24[1] ^ 0x25;
                pbVar24[2] = pbVar24[2] ^ 0xeb;
                pbVar24[3] = pbVar24[3] ^ 0x2d;
                pbVar24[0xe] = 0;
                pbVar24[4] = pbVar24[4] ^ 0x47;
                pbVar24[5] = pbVar24[5] ^ 0xe7;
                pbVar24[6] = pbVar24[6] ^ 0x55;
                pbVar24[7] = pbVar24[7] ^ 0xc9;
                pbVar24[8] = pbVar24[8] ^ 0x29;
                pbVar24[9] = pbVar24[9] ^ 0x25;
                pbVar24[10] = pbVar24[10] ^ 0xeb;
                pbVar24[0xb] = pbVar24[0xb] ^ 0x2d;
                pbVar24[0xc] = pbVar24[0xc] ^ 0x47;
                pbVar24[0xd] = pbVar24[0xd] ^ 0xe7;
              }
              bVar28 = *param_2;
              uVar27 = *(uint *)(param_2 + 4);
              if ((bVar28 & 1) == 0) {
                uVar27 = (uint)(bVar28 >> 1);
              }
              iVar16 = imp_strlen(pbVar24);
              uVar34 = uVar27 + iVar16;
              if (0xfffffff7 < uVar34) {
                    /* WARNING: Subroutine does not return */
                FUN_712f6c1c(&uStack_150);
              }
              if (uVar34 < 0xb) {
                uStack_150 = (uint)(byte)((char)uVar34 * '\x02');
                uStack_148 = 0;
                uVar36 = 0;
                uStack_14c = 0;
              }
              else {
                uStack_148 = thunk_MwhHq((uVar34 | 7) + 1);
                uStack_150 = (uVar34 | 7) + 2;
                uVar36 = uStack_150 & 0xff;
                uStack_14c = uVar34;
              }
              uVar34 = uStack_148;
              if ((uVar36 & 1) == 0) {
                uVar34 = (uint)&uStack_150 | 1;
              }
              if (uVar27 != 0) {
                pbVar26 = *(byte **)(param_2 + 8);
                if ((bVar28 & 1) == 0) {
                  pbVar26 = param_2 + 1;
                }
                imp___aeabi_memmove(uVar34,pbVar26,uVar27);
              }
              if (iVar16 != 0) {
                imp___aeabi_memmove(uVar34 + uVar27,pbVar24,iVar16);
              }
              *(undefined1 *)(uVar34 + uVar27 + iVar16) = 0;
              uVar27 = puVar35[1];
              pbVar26 = (byte *)puVar35[2];
              if (((byte)*puVar35 & 1) == 0) {
                uVar27 = (uint)(byte)((byte)*puVar35 >> 1);
                pbVar26 = (byte *)((int)puVar35 + 1);
              }
              puVar18 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                                          (&uStack_150,pbVar26,uVar27);
              uStack_140 = *puVar18;
              uStack_13c = puVar18[1];
              uStack_138 = puVar18[2];
              *puVar18 = 0;
              puVar18[1] = 0;
              puVar18[2] = 0;
              if ((uStack_150 & 1) != 0) {
                thunk_qNQrlu(uStack_148);
              }
              uVar27 = uStack_138;
              if ((uStack_140 & 1) == 0) {
                uVar27 = uVar8;
              }
              imp_remove(uVar27);
              uVar27 = uStack_bc;
              if ((abStack_c4[0] & 1) == 0) {
                uVar27 = uVar33;
              }
              uVar34 = uStack_138;
              if ((uStack_140 & 1) == 0) {
                uVar34 = uVar8;
              }
              iVar16 = imp_rename(uVar27,uVar34);
              if (iVar16 != 0) {
                pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c84);
                if (*pcVar9 == '\0') {
                  puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c74);
                  *(undefined1 *)((int)puVar22 + 0x2f) = 1;
                  uVar5 = DAT_700817d0;
                  uVar4 = DAT_700817cc;
                  uVar3 = DAT_700817c8;
                  uVar2 = DAT_700817c4;
                  *puVar22 = DAT_700817c0;
                  puVar22[1] = uVar2;
                  puVar22[2] = uVar3;
                  puVar22[3] = uVar4;
                  puVar22[4] = uVar5;
                  uVar6 = DAT_700817e8;
                  uVar5 = DAT_700817e4;
                  uVar4 = DAT_700817e0;
                  uVar3 = DAT_700817dc;
                  uVar2 = DAT_700817d8;
                  puVar22[5] = DAT_700817d4;
                  puVar22[6] = uVar2;
                  puVar22[7] = uVar3;
                  puVar22[8] = uVar4;
                  puVar22[9] = uVar5;
                  puVar22[10] = uVar6;
                  *(undefined2 *)(puVar22 + 0xb) = DAT_700817ec;
                  *(undefined1 *)((int)puVar22 + 0x2e) = DAT_700817ee;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3e70,puVar22,&DAT_70b0e000);
                  puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c84);
                  *puVar19 = 1;
                }
                if (*(char *)(iVar11 + 0x2f) != '\0') {
                  uVar27 = 0;
                  uVar34 = 0;
                  do {
                    iVar16 = (uVar27 & 7) * 8;
                    uVar36 = iVar16 - 0x20;
                    bVar28 = (byte)(0x29d9d305 >> iVar16) |
                             (byte)(-0x46ecf893 << ((uVar27 & 7) * -8 + 0x20 & 0xff));
                    if (-1 < (int)uVar36) {
                      bVar28 = (byte)(0xb913076d >> (uVar36 & 0xff));
                    }
                    *(byte *)(iVar11 + uVar27) = *(byte *)(iVar11 + uVar27) ^ bVar28;
                    bVar38 = 0xfffffffe < uVar27;
                    bVar37 = uVar34 == 0;
                    bVar1 = (0x2d < uVar27) <= uVar34;
                    uVar27 = uVar27 + 1;
                    uVar34 = uVar34 + bVar38;
                  } while (bVar37 && bVar1);
                  *(undefined1 *)(iVar11 + 0x2f) = 0;
                }
                uVar27 = uStack_bc;
                if ((abStack_c4[0] & 1) == 0) {
                  uVar27 = uVar33;
                }
                uVar34 = uStack_138;
                if ((uStack_140 & 1) == 0) {
                  uVar34 = uVar8;
                }
                FUN_7188543c(iVar11,uVar27,uVar34);
                uVar27 = uStack_bc;
                if ((abStack_c4[0] & 1) == 0) {
                  uVar27 = uVar33;
                }
                imp_remove(uVar27);
              }
              if ((uStack_140 & 1) != 0) {
                thunk_qNQrlu(uStack_138);
              }
            }
            uVar27 = uStack_48;
            if ((uStack_50 & 1) == 0) {
              uVar27 = uVar12;
            }
            uVar34 = uStack_bc;
            if ((abStack_c4[0] & 1) == 0) {
              uVar34 = uVar33;
            }
            iVar16 = imp_rename(uVar27,uVar34);
            if (iVar16 == 0) {
              pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1cc4);
              if (*pcVar9 == '\0') {
                puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1cb4);
                *(undefined1 *)(puVar22 + 6) = 1;
                uVar6 = DAT_7008182c;
                uVar5 = DAT_70081828;
                uVar4 = DAT_70081824;
                uVar3 = DAT_70081820;
                uVar2 = DAT_7008181c;
                *puVar22 = DAT_70081818;
                puVar22[1] = uVar2;
                puVar22[2] = uVar3;
                puVar22[3] = uVar4;
                puVar22[4] = uVar5;
                puVar22[5] = uVar6;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3f10,puVar22,&DAT_70b0e000);
                puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1cc4);
                *puVar19 = 1;
              }
              if (*(char *)(iVar14 + 0x18) != '\0') {
                uVar27 = 0;
                uVar34 = 0;
                do {
                  iVar16 = (uVar34 & 7) * 8;
                  uVar36 = iVar16 - 0x20;
                  bVar28 = (byte)(0xe5c303a9 >> iVar16) |
                           (byte)(-0x50c450a5 << ((uVar34 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar36) {
                    bVar28 = (byte)(0xaf3baf5b >> (uVar36 & 0xff));
                  }
                  *(byte *)(iVar14 + uVar34) = *(byte *)(iVar14 + uVar34) ^ bVar28;
                  bVar37 = uVar27 == 0;
                  bVar1 = (0x16 < uVar34) <= uVar27;
                  uVar27 = uVar27 + (0xfffffffe < uVar34);
                  uVar34 = uVar34 + 1;
                } while (bVar37 && bVar1);
                *(undefined1 *)(iVar14 + 0x18) = 0;
              }
              uVar27 = uStack_48;
              if ((uStack_50 & 1) == 0) {
                uVar27 = uVar12;
              }
              uVar34 = uStack_bc;
              if ((abStack_c4[0] & 1) == 0) {
                uVar34 = uVar33;
              }
              FUN_7188543c(iVar14,uVar27,uVar34);
            }
            else {
              pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ca4);
              if (*pcVar9 == '\0') {
                puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c94);
                *(undefined1 *)((int)puVar22 + 0x26) = 1;
                uVar4 = DAT_700817fc;
                uVar3 = DAT_700817f8;
                uVar2 = DAT_700817f4;
                *puVar22 = DAT_700817f0;
                puVar22[1] = uVar2;
                puVar22[2] = uVar3;
                puVar22[3] = uVar4;
                uVar5 = DAT_70081810;
                uVar4 = DAT_7008180c;
                uVar3 = DAT_70081808;
                uVar2 = DAT_70081804;
                puVar22[4] = DAT_70081800;
                puVar22[5] = uVar2;
                puVar22[6] = uVar3;
                puVar22[7] = uVar4;
                puVar22[8] = uVar5;
                *(undefined2 *)(puVar22 + 9) = DAT_70081814;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3ec0,puVar22,&DAT_70b0e000);
                puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ca4);
                *puVar19 = 1;
              }
              if (*(char *)(iVar13 + 0x26) != '\0') {
                uVar31 = 0;
                uVar27 = 0;
                do {
                  iVar16 = (uVar27 & 7) * 8;
                  uVar34 = iVar16 - 0x20;
                  bVar28 = (byte)(0xe5b5b7eb >> iVar16) |
                           (byte)(-0x1e564edb << ((uVar27 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar34) {
                    bVar28 = (byte)(0xe1a9b125 >> (uVar34 & 0xff));
                  }
                  *(byte *)(iVar13 + uVar27) = *(byte *)(iVar13 + uVar27) ^ bVar28;
                  bVar37 = uVar31 == 0;
                  bVar1 = (0x24 < uVar27) <= uVar31;
                  uVar31 = uVar31 + (0xfffffffe < uVar27);
                  uVar27 = uVar27 + 1;
                } while (bVar37 && bVar1);
                *(undefined1 *)(iVar13 + 0x26) = 0;
              }
              uVar31 = uStack_48;
              if ((uStack_50 & 1) == 0) {
                uVar31 = uVar12;
              }
              uVar27 = uStack_bc;
              if ((abStack_c4[0] & 1) == 0) {
                uVar27 = uVar33;
              }
              FUN_7188543c(iVar13,uVar31,uVar27);
              uVar31 = 0;
            }
            if ((abStack_c4[0] & 1) != 0) {
              thunk_qNQrlu(uStack_bc);
            }
          }
          else {
            pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c24);
            if (*pcVar9 == '\0') {
              puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c14);
              *(undefined1 *)((int)puVar22 + 0x26) = 1;
              uVar4 = DAT_700817a4;
              uVar3 = DAT_700817a0;
              uVar2 = DAT_7008179c;
              *puVar22 = DAT_70081798;
              puVar22[1] = uVar2;
              puVar22[2] = uVar3;
              puVar22[3] = uVar4;
              uVar5 = DAT_700817b8;
              uVar4 = DAT_700817b4;
              uVar3 = DAT_700817b0;
              uVar2 = DAT_700817ac;
              puVar22[4] = DAT_700817a8;
              puVar22[5] = uVar2;
              puVar22[6] = uVar3;
              puVar22[7] = uVar4;
              puVar22[8] = uVar5;
              *(undefined2 *)(puVar22 + 9) = DAT_700817bc;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b3dc8,puVar22,&DAT_70b0e000);
              puVar19 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1c24);
              *puVar19 = 1;
            }
            if (*(char *)(iVar15 + 0x26) != '\0') {
              uVar31 = 0;
              uVar27 = 0;
              do {
                iVar16 = (uVar27 & 7) * 8;
                uVar34 = iVar16 - 0x20;
                bVar28 = (byte)(0xe317d903 >> iVar16) |
                         (byte)(0x1dc54129 << ((uVar27 & 7) * -8 + 0x20 & 0xff));
                if (-1 < (int)uVar34) {
                  bVar28 = (byte)(0x1dc54129 >> (uVar34 & 0xff));
                }
                *(byte *)(iVar15 + uVar27) = *(byte *)(iVar15 + uVar27) ^ bVar28;
                bVar37 = uVar31 == 0;
                bVar1 = (0x24 < uVar27) <= uVar31;
                uVar31 = uVar31 + (0xfffffffe < uVar27);
                uVar27 = uVar27 + 1;
              } while (bVar37 && bVar1);
              *(undefined1 *)(iVar15 + 0x26) = 0;
            }
            uVar31 = uStack_48;
            if ((uStack_50 & 1) == 0) {
              uVar31 = uVar12;
            }
            FUN_7188543c(iVar15,uVar31);
            uVar31 = 0;
          }
          if ((uStack_50 & 1) != 0) {
            thunk_qNQrlu(uStack_48);
          }
          puVar35 = puVar35 + 3;
          puVar18 = puStack_44;
        } while (puVar35 != puVar30);
      }
      puStack_44 = puVar18;
      puVar35 = puStack_40;
      if (puVar18 != (uint *)0x0) {
        while (puVar30 = puVar35, puVar30 != puVar18) {
          puVar35 = puVar30 + -3;
          if ((*puVar35 & 1) != 0) {
            thunk_qNQrlu(puVar30[-1]);
          }
        }
        thunk_qNQrlu(puVar18);
      }
    }
    puVar22 = DAT_710eaef0;
    if (DAT_710eaef0 != &DAT_710eaef4) {
      do {
        uVar23 = FUN_714a76a8(puVar22[7]);
        uVar12 = DAT_710eaeb0;
        uVar8 = DAT_710eaeac;
        puVar7 = (undefined4 *)puVar22[1];
        if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
          do {
            puVar21 = (undefined4 *)puVar22[2];
            bVar37 = (undefined4 *)*puVar21 != puVar22;
            puVar22 = puVar21;
          } while (bVar37);
        }
        else {
          do {
            puVar21 = puVar7;
            puVar7 = (undefined4 *)*puVar21;
          } while ((undefined4 *)*puVar21 != (undefined4 *)0x0);
        }
        uVar31 = uVar31 & uVar23;
        puVar22 = puVar21;
      } while (puVar21 != &DAT_710eaef4);
      puVar22 = DAT_710eaef0;
      if (DAT_710eaef0 != &DAT_710eaef4) {
        do {
          piVar20 = (int *)FUN_719f7b9c(*(undefined4 *)(puVar22[7] + 4));
          iVar11 = *piVar20;
          uVar23 = DAT_710eaeac;
          uVar33 = DAT_710eaeb0;
          while (iVar11 != piVar20[1]) {
            uVar27 = *(uint *)(iVar11 + 0x1d);
            if (uVar23 < uVar27) {
              uVar23 = uVar27;
              DAT_710eaeac = uVar27;
            }
            uVar27 = *(uint *)(iVar11 + 0x19);
            iVar11 = iVar11 + 0x35;
            if (uVar33 < uVar27) {
              uVar33 = uVar27;
              DAT_710eaeb0 = uVar27;
            }
          }
          puVar7 = (undefined4 *)puVar22[1];
          if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
            do {
              puVar21 = (undefined4 *)puVar22[2];
              bVar37 = (undefined4 *)*puVar21 != puVar22;
              puVar22 = puVar21;
            } while (bVar37);
          }
          else {
            do {
              puVar21 = puVar7;
              puVar7 = (undefined4 *)*puVar21;
            } while ((undefined4 *)*puVar21 != (undefined4 *)0x0);
          }
          puVar22 = puVar21;
        } while (puVar21 != &DAT_710eaef4);
        if (uVar8 < uVar23) {
          if (DAT_710eaeb4 != 0) {
            thunk_dGrRHE();
            uVar23 = DAT_710eaeac;
            uVar33 = DAT_710eaeb0;
          }
          DAT_710eaeb4 = thunk__IBDl(uVar23);
        }
        if (uVar12 < uVar33) {
          if (DAT_710eaeb8 != 0) {
            thunk_dGrRHE();
            uVar33 = DAT_710eaeb0;
          }
          DAT_710eaeb8 = thunk__IBDl(uVar33);
        }
        puVar22 = DAT_710eaef0;
        if (DAT_710eaef0 != &DAT_710eaef4) {
          do {
            iVar13 = puVar22[7];
            iVar11 = FUN_719f8780(*(undefined4 *)(iVar13 + 4));
            if (((iVar11 != 0) || (iVar11 = FUN_719f87a8(*(undefined4 *)(iVar13 + 4)), iVar11 != 0))
               && (*(int *)(iVar13 + 0x20) != 0)) {
              iVar11 = 0;
              uVar8 = 0;
              do {
                iVar14 = *(int *)(iVar13 + 0x1c) + iVar11;
                if (((*(int *)(iVar14 + 0x30) != 0) && (*(int *)(iVar14 + 0x28) == 2)) &&
                   ((*(int *)(iVar14 + 0x14) != 0 &&
                    (iVar15 = FUN_714a84c8(iVar13,iVar14), iVar15 != 0)))) {
                  FUN_714a8678(iVar14,DAT_710eaeb4,0);
                }
                uVar8 = uVar8 + 1;
                iVar11 = iVar11 + 0x48;
              } while (uVar8 < *(uint *)(iVar13 + 0x20));
            }
            puVar7 = (undefined4 *)puVar22[1];
            puVar21 = puVar22;
            if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
              do {
                puVar22 = (undefined4 *)puVar21[2];
                bVar37 = (undefined4 *)*puVar22 != puVar21;
                puVar21 = puVar22;
              } while (bVar37);
            }
            else {
              do {
                puVar22 = puVar7;
                puVar7 = (undefined4 *)*puVar22;
              } while ((undefined4 *)*puVar22 != (undefined4 *)0x0);
            }
          } while (puVar22 != &DAT_710eaef4);
        }
      }
    }
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
    }
  }
  return uVar31;
}


// =========================================================================
// Function: FUN_714b34c8
// Entry: 0x714b34c8 | Size: 156 bytes
// =========================================================================

undefined4 FUN_714b34c8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *puVar3;
  byte abStack_24 [8];
  undefined4 uStack_1c;
  
  puVar1 = (undefined4 *)FUN_714b42d8(&DAT_710eaef0,param_1);
  if (puVar1 == &DAT_710eaef4) {
    FUN_714ad18c(abStack_24,param_1);
    puVar2 = (undefined4 *)FUN_714b4428(&DAT_710eaefc,abStack_24);
    puVar1 = extraout_r2;
    puVar3 = extraout_r3;
    if ((abStack_24[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1c);
      puVar1 = extraout_r2_00;
      puVar3 = extraout_r3_00;
    }
    if (puVar2 != &DAT_710eaf00) {
      puVar1 = (undefined4 *)puVar2[7];
      puVar3 = (undefined4 *)puVar2[8];
    }
    if (puVar2 == &DAT_710eaf00 || puVar1 == puVar3) {
      return 0;
    }
  }
  else {
    puVar1 = puVar1 + 7;
  }
  return *puVar1;
}


// =========================================================================
// Function: FUN_714b362c
// Entry: 0x714b362c | Size: 164 bytes
// =========================================================================

bool FUN_714b362c(undefined4 param_1)

{
  undefined4 *puVar1;
  int *extraout_r2;
  int *extraout_r2_00;
  int *piVar2;
  int *extraout_r3;
  int *extraout_r3_00;
  int *piVar3;
  byte abStack_24 [8];
  undefined4 uStack_1c;
  
  puVar1 = (undefined4 *)FUN_714b42d8(&DAT_710eaef0,param_1);
  if (puVar1 == &DAT_710eaef4) {
    FUN_714ad18c(abStack_24,param_1);
    puVar1 = (undefined4 *)FUN_714b4428(&DAT_710eaefc,abStack_24);
    piVar2 = extraout_r2;
    piVar3 = extraout_r3;
    if ((abStack_24[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1c);
      piVar2 = extraout_r2_00;
      piVar3 = extraout_r3_00;
    }
    if (puVar1 != &DAT_710eaf00) {
      piVar2 = (int *)puVar1[7];
      piVar3 = (int *)puVar1[8];
    }
    if (puVar1 == &DAT_710eaf00 || piVar2 == piVar3) {
      return false;
    }
  }
  else {
    piVar2 = puVar1 + 7;
  }
  return *piVar2 != 0;
}


// =========================================================================
// Function: FUN_714b3798
// Entry: 0x714b3798 | Size: 244 bytes
// =========================================================================

void FUN_714b3798(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  puVar1 = DAT_710eaf0c;
  if (param_1 == 0) {
    return;
  }
  piVar4 = *(int **)(param_1 + 0x34);
  if (piVar4 == (int *)0x0) {
    puVar3 = DAT_710eaf0c;
    if (DAT_710eaf0c != (undefined4 *)&DAT_710eaf08) {
      do {
        if (puVar3[2] == param_1) {
          return;
        }
        puVar2 = puVar3 + 1;
        puVar3 = (undefined4 *)*puVar2;
      } while ((undefined4 *)*puVar2 != (undefined4 *)&DAT_710eaf08);
    }
    DAT_710eaf0c = (undefined4 *)thunk_MwhHq(0xc);
    *DAT_710eaf0c = &DAT_710eaf08;
    DAT_710eaf0c[1] = puVar1;
    DAT_710eaf0c[2] = param_1;
    *puVar1 = DAT_710eaf0c;
    DAT_710eaf10 = DAT_710eaf10 + 1;
  }
  else {
    piVar6 = (int *)piVar4[1];
    for (piVar4 = (int *)*piVar4; piVar4 != piVar6; piVar4 = piVar4 + 1) {
      iVar5 = *piVar4;
      puVar3 = puVar1;
      if (puVar1 != (undefined4 *)&DAT_710eaf08) {
        do {
          puVar2 = puVar1;
          if (puVar3[2] == iVar5) goto LAB_714b37f8;
          puVar2 = puVar3 + 1;
          puVar3 = (undefined4 *)*puVar2;
        } while ((undefined4 *)*puVar2 != (undefined4 *)&DAT_710eaf08);
      }
      puVar2 = (undefined4 *)thunk_MwhHq(0xc);
      *puVar2 = &DAT_710eaf08;
      puVar2[1] = puVar1;
      puVar2[2] = iVar5;
      *puVar1 = puVar2;
      DAT_710eaf10 = DAT_710eaf10 + 1;
      DAT_710eaf0c = puVar2;
LAB_714b37f8:
      puVar1 = puVar2;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714b391c
// Entry: 0x714b391c | Size: 248 bytes
// =========================================================================

void FUN_714b391c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_1 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x34);
    piVar5 = DAT_710eaf0c;
    if (puVar4 == (undefined4 *)0x0) {
      while (piVar6 = piVar5, piVar6 != (int *)&DAT_710eaf08) {
        piVar5 = (int *)piVar6[1];
        if (piVar6[2] == param_1) {
          *(int **)(*piVar6 + 4) = piVar5;
          *piVar5 = *piVar6;
          DAT_710eaf10 = DAT_710eaf10 + -1;
          thunk_qNQrlu(piVar6);
          return;
        }
      }
    }
    else {
      piVar5 = (int *)*puVar4;
      piVar6 = (int *)puVar4[1];
      if (piVar5 != piVar6) {
        piVar2 = DAT_710eaf0c;
        do {
          piVar1 = (int *)&DAT_710eaf08;
          if (piVar2 != (int *)&DAT_710eaf08) {
            piVar3 = piVar2;
            do {
              piVar7 = (int *)piVar3[1];
              if (piVar3[2] == *piVar5) {
                *(int **)(*piVar3 + 4) = piVar7;
                *piVar7 = *piVar3;
                DAT_710eaf10 = DAT_710eaf10 + -1;
                thunk_qNQrlu();
                piVar1 = DAT_710eaf0c;
                break;
              }
              piVar1 = piVar2;
              piVar3 = piVar7;
            } while (piVar7 != (int *)&DAT_710eaf08);
          }
          piVar5 = piVar5 + 1;
          piVar2 = piVar1;
        } while (piVar5 != piVar6);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714b3aa4
// Entry: 0x714b3aa4 | Size: 156 bytes
// =========================================================================

void FUN_714b3aa4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *puVar4;
  byte abStack_24 [8];
  undefined4 uStack_1c;
  
  puVar1 = (undefined4 *)FUN_714b42d8(&DAT_710eaef0,param_1);
  if (puVar1 == &DAT_710eaef4) {
    FUN_714ad18c(abStack_24,param_1);
    puVar3 = (undefined4 *)FUN_714b4428(&DAT_710eaefc,abStack_24);
    puVar1 = extraout_r2;
    puVar4 = extraout_r3;
    if ((abStack_24[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1c);
      puVar1 = extraout_r2_00;
      puVar4 = extraout_r3_00;
    }
    uVar2 = 0;
    if (puVar3 != &DAT_710eaf00) {
      puVar1 = (undefined4 *)puVar3[7];
      puVar4 = (undefined4 *)puVar3[8];
    }
    if (puVar3 == &DAT_710eaf00 || puVar1 == puVar4) goto LAB_714b3b34;
  }
  else {
    puVar1 = puVar1 + 7;
  }
  uVar2 = *puVar1;
LAB_714b3b34:
  FUN_714b3798(uVar2);
  return;
}


// =========================================================================
// Function: FUN_714b401c
// Entry: 0x714b401c | Size: 96 bytes
// =========================================================================

void FUN_714b401c(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_714b401c(param_1,*param_2);
  FUN_714b401c(param_1,param_2[1]);
  if (param_2[7] != 0) {
    param_2[8] = param_2[7];
    thunk_qNQrlu();
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    thunk_qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_714b4120
// Entry: 0x714b4120 | Size: 256 bytes
// =========================================================================

int * FUN_714b4120(int param_1,undefined4 *param_2,byte *param_3)

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
        if (bVar1) goto LAB_714b420c;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_714b420c;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_714b420c:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_714b4270
// Entry: 0x714b4270 | Size: 20 bytes
// =========================================================================

void FUN_714b4270(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714b42d8
// Entry: 0x714b42d8 | Size: 256 bytes
// =========================================================================

int * FUN_714b42d8(int param_1,byte *param_2)

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
// Function: FUN_714b4428
// Entry: 0x714b4428 | Size: 256 bytes
// =========================================================================

int * FUN_714b4428(int param_1,byte *param_2)

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
// Function: FUN_714b5e7c
// Entry: 0x714b5e7c | Size: 124 bytes
// =========================================================================

undefined4 FUN_714b5e7c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((DAT_710eaf4c == '\0') && (iVar1 = FUN_714c9a38(), param_1 < iVar1)) {
    param_1 = param_1 * 0x88;
    *param_2 = *(undefined4 *)(&DAT_710eaf60 + param_1);
    *param_3 = *(undefined4 *)(&DAT_710eaf64 + param_1);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(&DAT_710eaf68 + param_1);
    }
    return 1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_714b5f6c
// Entry: 0x714b5f6c | Size: 92 bytes
// =========================================================================

undefined4 FUN_714b5f6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_710eaf4c == '\0') {
    iVar1 = FUN_714c9a38(0);
    uVar2 = 0xffffffff;
    if ((param_2 < 4) && (param_1 < iVar1)) {
      uVar2 = *(undefined4 *)(&DAT_710eaf50 + param_2 * 4 + param_1 * 0x88);
    }
    return uVar2;
  }
  return 0;
}


// =========================================================================
// Function: FUN_714b603c
// Entry: 0x714b603c | Size: 84 bytes
// =========================================================================

undefined4 FUN_714b603c(int param_1)

{
  int iVar1;
  
  if ((DAT_710eaf4c == '\0') && (iVar1 = FUN_714c9a38(), param_1 < iVar1)) {
    return *(undefined4 *)(&DAT_710eafd4 + param_1 * 0x88);
  }
  return 0;
}


// =========================================================================
// Function: FUN_714b6104
// Entry: 0x714b6104 | Size: 96 bytes
// =========================================================================

undefined1 FUN_714b6104(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((DAT_710eaf4c == '\0') && (iVar1 = FUN_714c9a38(), param_2 < 4)) {
    if (param_1 < iVar1) {
      uVar2 = (&DAT_710eaf88)[param_1 * 0x88 + param_2];
    }
    return uVar2;
  }
  return 0;
}


// =========================================================================
// Function: FUN_714b61d8
// Entry: 0x714b61d8 | Size: 1712 bytes
// =========================================================================

void FUN_714b61d8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar1 = DAT_710eb174;
  iVar4 = DAT_710eb170;
  if (0x16 < param_1 - 1U) goto switchD_714b6200_caseD_5;
  switch(param_1) {
  case 1:
    uVar6 = *(uint *)(DAT_710eb170 + 0x1ac);
    if (uVar6 < *(uint *)(DAT_710eb170 + 0x1a8)) {
      iVar1 = *(int *)(DAT_710eb170 + 0x1b0);
    }
    else {
      uVar8 = (int)((ulonglong)(uVar6 + 1) * 0xaaaaaaab >> 0x20) << 1 | 3;
      iVar1 = imp_malloc(uVar8 << 5);
      iVar3 = *(int *)(iVar4 + 0x1b0);
      if (iVar3 != 0) {
        imp___aeabi_memcpy(iVar1,iVar3,uVar6 << 5);
        imp_free(iVar3);
        uVar6 = *(uint *)(DAT_710eb170 + 0x1ac);
        iVar4 = DAT_710eb170;
      }
      *(int *)(iVar4 + 0x1b0) = iVar1;
      *(uint *)(iVar4 + 0x1a8) = uVar8;
    }
    *(int *)(iVar1 + uVar6 * 0x20) = *param_2;
    *(undefined4 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 4) = 2;
    *(undefined4 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 8) =
         *(undefined4 *)(DAT_710eb170 + 0x19c);
    *(undefined4 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 0xc) =
         *(undefined4 *)(DAT_710eb170 + 0x1a0);
    uVar12 = FUN_714cac4c();
    iVar4 = DAT_710eb170;
    *(undefined8 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 0x10) =
         uVar12;
    *(undefined4 *)(*(int *)(iVar4 + 0x1b0) + *(int *)(iVar4 + 0x1ac) * 0x20 + 0x18) = 0;
    goto LAB_714b67dc;
  case 2:
    uVar6 = *(uint *)(DAT_710eb170 + 0x1ac);
    if (uVar6 < *(uint *)(DAT_710eb170 + 0x1a8)) {
      iVar1 = *(int *)(DAT_710eb170 + 0x1b0);
    }
    else {
      uVar8 = (int)((ulonglong)(uVar6 + 1) * 0xaaaaaaab >> 0x20) << 1 | 3;
      iVar1 = imp_malloc(uVar8 << 5);
      iVar3 = *(int *)(iVar4 + 0x1b0);
      if (iVar3 != 0) {
        imp___aeabi_memcpy(iVar1,iVar3,uVar6 << 5);
        imp_free(iVar3);
        uVar6 = *(uint *)(DAT_710eb170 + 0x1ac);
        iVar4 = DAT_710eb170;
      }
      *(int *)(iVar4 + 0x1b0) = iVar1;
      *(uint *)(iVar4 + 0x1a8) = uVar8;
    }
    *(int *)(iVar1 + uVar6 * 0x20) = *param_2;
    *(undefined4 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 4) = 0;
    *(undefined4 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 8) =
         *(undefined4 *)(DAT_710eb170 + 0x19c);
    *(undefined4 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 0xc) =
         *(undefined4 *)(DAT_710eb170 + 0x1a0);
    uVar12 = FUN_714cac4c();
    iVar4 = DAT_710eb170;
    *(undefined8 *)(*(int *)(DAT_710eb170 + 0x1b0) + *(int *)(DAT_710eb170 + 0x1ac) * 0x20 + 0x10) =
         uVar12;
    *(undefined4 *)(*(int *)(iVar4 + 0x1b0) + *(int *)(iVar4 + 0x1ac) * 0x20 + 0x18) = 0;
LAB_714b67dc:
    *(int *)(DAT_710eb170 + 0x1ac) = *(int *)(DAT_710eb170 + 0x1ac) + 1;
    break;
  case 3:
    *(int *)(&DAT_710eaf6c + *param_2 * 0x88) = param_2[3];
    *(int *)(&DAT_710eaf70 + *param_2 * 0x88) = param_2[4];
    *(int *)(&DAT_710eaf74 + *param_2 * 0x88) = param_2[8];
    break;
  case 4:
    iVar1 = param_2[1];
    iVar3 = param_2[7];
    iVar11 = param_2[4];
    iVar5 = param_2[5];
    iVar4 = *param_2 * 0x88;
    iVar10 = param_2[6];
    uVar6 = *(uint *)(&DAT_710eaf7c + iVar4);
    if (uVar6 < *(uint *)(&DAT_710eaf78 + iVar4)) {
      iVar9 = *(int *)(&DAT_710eaf80 + iVar4);
    }
    else {
      uVar8 = (int)((ulonglong)(uVar6 + 1) * 0xaaaaaaab >> 0x20) << 1 | 3;
      iVar9 = imp_malloc(uVar8 << 5);
      iVar7 = *(int *)(&DAT_710eaf80 + iVar4);
      if (iVar7 != 0) {
        imp___aeabi_memcpy(iVar9,iVar7,uVar6 << 5);
        imp_free(iVar7);
        uVar6 = *(uint *)(&DAT_710eaf7c + iVar4);
      }
      *(uint *)(&DAT_710eaf78 + iVar4) = uVar8;
      *(int *)(&DAT_710eaf80 + iVar4) = iVar9;
    }
    *(int *)(iVar9 + uVar6 * 0x20) = iVar1;
    *(int *)(*(int *)(&DAT_710eaf80 + iVar4) + *(int *)(&DAT_710eaf7c + iVar4) * 0x20 + 4) = iVar3;
    *(undefined4 *)(*(int *)(&DAT_710eaf80 + iVar4) + *(int *)(&DAT_710eaf7c + iVar4) * 0x20 + 8) =
         *(undefined4 *)(&DAT_710eaf6c + iVar4);
    *(undefined4 *)(*(int *)(&DAT_710eaf80 + iVar4) + *(int *)(&DAT_710eaf7c + iVar4) * 0x20 + 0xc)
         = *(undefined4 *)(&DAT_710eaf70 + iVar4);
    iVar1 = *(int *)(&DAT_710eaf80 + iVar4) + *(int *)(&DAT_710eaf7c + iVar4) * 0x20;
    *(int *)(iVar1 + 0x10) = iVar11;
    *(int *)(iVar1 + 0x14) = iVar5;
    *(int *)(*(int *)(&DAT_710eaf80 + iVar4) + *(int *)(&DAT_710eaf7c + iVar4) * 0x20 + 0x18) =
         iVar10;
    *(int *)(&DAT_710eaf7c + iVar4) = *(int *)(&DAT_710eaf7c + iVar4) + 1;
    *(int *)(&DAT_710eaf6c + iVar4) = param_2[2];
    *(int *)(&DAT_710eaf70 + iVar4) = param_2[3];
    *(int *)(&DAT_710eaf74 + iVar4) = param_2[6];
    break;
  case 6:
    iVar4 = *param_2;
    iVar3 = param_2[2];
    iVar5 = DAT_710eb174 + iVar4 * 0x180;
    uVar6 = *(uint *)(iVar5 + 0x5c);
    if (*(uint *)(iVar5 + 0x58) <= uVar6) {
      uVar8 = (int)((ulonglong)(uVar6 + 1) * 0xaaaaaaab >> 0x20) << 1 | 3;
      uVar2 = imp_malloc(uVar8 << 5);
      iVar5 = *(int *)(iVar5 + 0x60);
      if (iVar5 != 0) {
        imp___aeabi_memcpy(uVar2,iVar5,uVar6 << 5);
        imp_free(iVar5);
        iVar1 = DAT_710eb174;
      }
      *(uint *)(iVar1 + iVar4 * 0x180 + 0x58) = uVar8;
      *(undefined4 *)(DAT_710eb174 + iVar4 * 0x180 + 0x60) = uVar2;
      uVar6 = *(uint *)(DAT_710eb174 + iVar4 * 0x180 + 0x5c);
    }
    *(int *)(*(int *)(DAT_710eb174 + iVar4 * 0x180 + 0x60) + uVar6 * 0x20) = iVar3;
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 4) = 2;
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 8) =
         *(undefined4 *)(iVar1 + 0x4c);
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 0xc) =
         *(undefined4 *)(iVar1 + 0x50);
    uVar12 = FUN_714cac4c();
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined8 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 0x10) = uVar12;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 0x18) = 0;
    goto LAB_714b65ec;
  case 7:
    iVar4 = *param_2;
    iVar3 = param_2[2];
    iVar5 = DAT_710eb174 + iVar4 * 0x180;
    uVar6 = *(uint *)(iVar5 + 0x5c);
    if (*(uint *)(iVar5 + 0x58) <= uVar6) {
      uVar8 = (int)((ulonglong)(uVar6 + 1) * 0xaaaaaaab >> 0x20) << 1 | 3;
      uVar2 = imp_malloc(uVar8 << 5);
      iVar5 = *(int *)(iVar5 + 0x60);
      if (iVar5 != 0) {
        imp___aeabi_memcpy(uVar2,iVar5,uVar6 << 5);
        imp_free(iVar5);
        iVar1 = DAT_710eb174;
      }
      *(uint *)(iVar1 + iVar4 * 0x180 + 0x58) = uVar8;
      *(undefined4 *)(DAT_710eb174 + iVar4 * 0x180 + 0x60) = uVar2;
      uVar6 = *(uint *)(DAT_710eb174 + iVar4 * 0x180 + 0x5c);
    }
    *(int *)(*(int *)(DAT_710eb174 + iVar4 * 0x180 + 0x60) + uVar6 * 0x20) = iVar3;
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 4) = 0;
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 8) =
         *(undefined4 *)(iVar1 + 0x4c);
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 0xc) =
         *(undefined4 *)(iVar1 + 0x50);
    uVar12 = FUN_714cac4c();
    iVar1 = DAT_710eb174 + iVar4 * 0x180;
    *(undefined8 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 0x10) = uVar12;
    *(undefined4 *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) * 0x20 + 0x18) = 0;
LAB_714b65ec:
    iVar4 = DAT_710eb174 + iVar4 * 0x180;
    *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + 1;
    break;
  case 0x17:
    iVar4 = *param_2;
    uVar2 = FUN_71ba0b38(param_2[4],*(undefined4 *)(&DAT_710eafd0 + iVar4 * 0x88));
    *(undefined4 *)(&DAT_710eafd0 + iVar4 * 0x88) = uVar2;
  }
switchD_714b6200_caseD_5:
  FUN_714b8cc4(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714b6f68
// Entry: 0x714b6f68 | Size: 412 bytes
// =========================================================================

void FUN_714b6f68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_710eb190 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eb190);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1df4,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1de4);
        *(undefined1 *)(iVar4 + 0x50) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70081868,0x50);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714b8690,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1df4);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1de4);
      if (*(char *)(iVar4 + 0x50) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x59e3913f >> iVar9) |
                  (byte)(-0x1a7284df << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0xe58d7b21 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x4e < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x50) = 0;
      }
      DAT_710eb18c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_710eb190);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x714b6f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eb18c)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_714b73b8
// Entry: 0x714b73b8 | Size: 544 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714b73b8(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int aiStack_44 [3];
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  if ((DAT_710eaf4d == '\0') && (*DAT_70b42048 == '\0')) {
    if (DAT_711ad10c != 0) {
      FUN_716179fc(DAT_711ad10c,1,param_1,param_2,param_3,param_4);
      FUN_716179fc(DAT_711ad10c,2,param_1,param_2,param_3,param_4);
      FUN_716179fc(DAT_711ad10c,3,param_1,param_2,param_3,param_4);
    }
    if (DAT_711e9ee4 != 0) {
      iVar3 = FUN_71651c24(DAT_711e9ee4,param_1,param_2,param_3,param_4);
      if (iVar3 == 0) goto LAB_714b750c;
    }
  }
  if (param_1 == 4) {
LAB_714b7434:
    iVar3 = param_2 * 0x1c;
    *(undefined4 *)(&DAT_700c1cdc + iVar3) = 0;
    FUN_714cac4c();
    iVar4 = *(int *)(&DAT_700c1ce0 + iVar3);
    uVar2 = FUN_71ba242c();
    *(undefined4 *)(iVar3 + iVar4 * 4 + 0x700c1ce4) = uVar2;
    *(uint *)(&DAT_700c1ce0 + iVar3) = (uint)(*(int *)(&DAT_700c1ce0 + iVar3) == 0);
LAB_714b7484:
    bVar1 = true;
  }
  else {
    if (param_1 == 2) {
      iVar3 = param_2 * 0x1c;
      *(undefined4 *)(&DAT_700c1cd4 + iVar3) = 0xffffffff;
      *(undefined4 *)(&DAT_700c1cd8 + iVar3) = 0xffffffff;
      *(undefined4 *)(&DAT_700c1cdc + iVar3) = 2;
      goto LAB_714b7484;
    }
    bVar1 = false;
    if (param_1 == 1) goto LAB_714b7434;
  }
  iVar3 = param_2 * 0x1c;
  piVar5 = (int *)(&DAT_700c1cd4 + iVar3);
  iVar4 = *piVar5;
  bVar6 = iVar4 == param_3;
  if (bVar6) {
    iVar4 = *(int *)(&DAT_700c1cd8 + iVar3);
  }
  if (!bVar6 || iVar4 != param_4) {
    *piVar5 = param_3;
    *(int *)(&DAT_700c1cd8 + iVar3) = param_4;
    iVar4 = param_2 * 0x88;
    *(int *)(&DAT_710eaf6c + iVar4) = param_3;
    *(int *)(&DAT_710eaf70 + iVar4) = param_4;
    *(undefined4 *)(&DAT_710eaf74 + iVar4) = 0;
    FUN_714b8cc4(3);
  }
  if (bVar1) {
    aiStack_44[1] = 0;
    uStack_2c = 0;
    aiStack_44[2] = *piVar5;
    uStack_38 = *(undefined4 *)(&DAT_700c1cd8 + iVar3);
    uStack_28 = *(undefined4 *)(&DAT_700c1cdc + iVar3);
    aiStack_44[0] = param_2;
    uStack_34 = FUN_714cac4c();
    FUN_714b61d8(4,aiStack_44);
  }
LAB_714b750c:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714b7808
// Entry: 0x714b7808 | Size: 204 bytes
// =========================================================================

void FUN_714b7808(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) && (*DAT_710eb178 != '\0')) {
    return;
  }
  *DAT_710eb178 = param_1 != 0;
  FUN_714b7a88(&DAT_710eaf50,DAT_710eb17c);
  FUN_714b7a88(&DAT_710eafd8,DAT_710eb17c);
  FUN_714b7a88(&DAT_710eb060,DAT_710eb17c);
  FUN_714b7a88(&DAT_710eb0e8,DAT_710eb17c);
  if (DAT_710eb17c != '\0') {
    DAT_710eb17c = '\0';
  }
  FUN_714b7e74(DAT_710eb170,0);
  iVar1 = DAT_710eb174;
  FUN_714b81ec(DAT_710eb174,DAT_710eb17c);
  FUN_714b81ec(iVar1 + 0x180,DAT_710eb17c);
  FUN_714b81ec(iVar1 + 0x300,DAT_710eb17c);
  FUN_714b81ec(iVar1 + 0x480,DAT_710eb17c);
  return;
}


// =========================================================================
// Function: FUN_714b7a88
// Entry: 0x714b7a88 | Size: 836 bytes
// =========================================================================

undefined4 FUN_714b7a88(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar6 = param_1[0x20];
  param_1[0x20] = 0;
  param_1[0x21] = iVar6;
  piVar4 = param_1 + 0xe;
  if (*param_1 < 1) {
    *param_1 = 1;
  }
  else if (*param_1 == 2) {
    *param_1 = 3;
  }
  if ((char)*piVar4 != '\0') {
    *(char *)piVar4 = '\0';
  }
  if (param_1[1] < 1) {
    param_1[1] = 1;
  }
  else if (param_1[1] == 2) {
    param_1[1] = 3;
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    *(undefined1 *)((int)param_1 + 0x39) = 0;
  }
  if (param_1[2] < 1) {
    param_1[2] = 1;
  }
  else if (param_1[2] == 2) {
    param_1[2] = 3;
  }
  if (*(char *)((int)param_1 + 0x3a) != '\0') {
    *(undefined1 *)((int)param_1 + 0x3a) = 0;
  }
  if (param_1[3] < 1) {
    param_1[3] = 1;
  }
  else if (param_1[3] == 2) {
    param_1[3] = 3;
  }
  if (*(char *)((int)param_1 + 0x3b) != '\0') {
    *(undefined1 *)((int)param_1 + 0x3b) = 0;
  }
  piVar1 = DAT_70ffc9a4;
  if (param_2 == 0) {
    uVar5 = param_1[0xb];
    if (uVar5 != 0) {
      uVar10 = 0;
      iVar6 = -0x18;
      do {
        iVar2 = param_1[0xc];
        iVar9 = *(int *)(iVar2 + iVar6 + 0x18);
        uVar3 = *(uint *)(iVar2 + iVar6 + 0x1c);
        uVar7 = param_1[iVar9];
        if ((uVar7 != uVar3) && (uVar7 != 1 || uVar3 != 0)) {
          if (uVar7 == 3) {
            if (uVar3 == 2) goto LAB_714b7c10;
          }
          else if ((uVar3 == 2) && (((int)uVar7 < 1 || ((uVar7 & 0xfffffffe) == 2)))) {
            piVar4 = (int *)(iVar2 + iVar6);
            param_1[4] = *piVar4;
            param_1[5] = piVar4[1];
            param_1[6] = piVar4[4];
            imp___aeabi_memmove(iVar2,piVar4 + 6,(uVar5 - uVar10) * 0x20);
            param_1[0xb] = param_1[0xb] - uVar10;
            return 0;
          }
          param_1[iVar9] = uVar3;
          iVar11 = param_1[0xc];
          iVar2 = iVar11 + iVar6;
          if (*(int *)(iVar2 + 0x1c) == 0) {
            piVar8 = param_1 + iVar9 * 2 + 0x10;
            uVar12 = FUN_71ba23ec(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),
                                  *piVar8,piVar8[1]);
            uVar13 = FUN_71ba1638(param_1[0xd]);
            iVar2 = FUN_71ba2c3c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20));
            if (iVar2 != 0) {
              iVar2 = param_1[4] - param_1[iVar9 + 0x18];
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              if (iVar2 < *piVar1 / 10) {
                uVar5 = param_1[5] - param_1[iVar9 + 0x1c];
                if ((int)uVar5 < 0) {
                  uVar5 = -uVar5;
                }
                if (uVar5 < (uint)(*piVar1 / 10)) {
                  *(char *)((int)piVar4 + iVar9) = '\x01';
                  iVar11 = param_1[0xc];
                }
              }
            }
            iVar2 = *(int *)(iVar11 + iVar6 + 0x2c);
            *piVar8 = *(int *)(iVar11 + iVar6 + 0x28);
            piVar8[1] = iVar2;
            param_1[iVar9 + 0x18] = param_1[4];
            param_1[iVar9 + 0x1c] = param_1[5];
          }
        }
LAB_714b7c10:
        uVar5 = param_1[0xb];
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 0x20;
      } while (uVar10 < uVar5);
    }
  }
  else {
    param_1[0xe] = 0;
    *param_1 = 1;
    param_1[1] = 1;
    param_1[2] = 1;
    param_1[3] = 1;
  }
  param_1[0xb] = 0;
  param_1[4] = param_1[7];
  param_1[5] = param_1[8];
  param_1[6] = param_1[9];
  return 1;
}


// =========================================================================
// Function: FUN_714b7e74
// Entry: 0x714b7e74 | Size: 720 bytes
// =========================================================================

undefined4 FUN_714b7e74(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x860);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x860) = 0;
  do {
    iVar9 = *(int *)(param_1 + iVar4 * -4);
    if (iVar9 < 1) {
      *(undefined4 *)(param_1 + iVar4 * -4) = 1;
    }
    else if (iVar9 == 2) {
      *(undefined4 *)(param_1 + iVar4 * -4) = 3;
    }
    iVar9 = param_1 - iVar4;
    iVar4 = iVar4 + -1;
    if (*(char *)(iVar9 + 0x1b8) != '\0') {
      *(undefined1 *)(iVar9 + 0x1b8) = 0;
    }
    piVar1 = DAT_70ffc9a4;
  } while (iVar4 != -100);
  if (param_2 == 0) {
    uVar5 = *(uint *)(param_1 + 0x1ac);
    if (uVar5 != 0) {
      uVar10 = 0;
      iVar4 = -0x18;
      do {
        iVar9 = *(int *)(param_1 + 0x1b0);
        iVar8 = *(int *)(iVar9 + iVar4 + 0x18);
        uVar2 = *(uint *)(iVar9 + iVar4 + 0x1c);
        uVar6 = *(uint *)(param_1 + iVar8 * 4);
        if ((uVar6 != uVar2) && (uVar6 != 1 || uVar2 != 0)) {
          if (uVar6 == 3) {
            if (uVar2 == 2) goto LAB_714b7f7c;
          }
          else if ((uVar2 == 2) && (((int)uVar6 < 1 || ((uVar6 & 0xfffffffe) == 2)))) {
            puVar7 = (undefined4 *)(iVar9 + iVar4);
            *(undefined4 *)(param_1 + 400) = *puVar7;
            *(undefined4 *)(param_1 + 0x194) = puVar7[1];
            *(undefined4 *)(param_1 + 0x198) = puVar7[4];
            imp___aeabi_memmove(iVar9,puVar7 + 6,(uVar5 - uVar10) * 0x20);
            *(uint *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) - uVar10;
            return 0;
          }
          *(uint *)(param_1 + iVar8 * 4) = uVar2;
          iVar11 = *(int *)(param_1 + 0x1b0);
          iVar9 = iVar11 + iVar4;
          if (*(int *)(iVar9 + 0x1c) == 0) {
            puVar7 = (undefined4 *)(param_1 + 0x220 + iVar8 * 8);
            uVar12 = FUN_71ba23ec(*(undefined4 *)(iVar9 + 0x28),*(undefined4 *)(iVar9 + 0x2c),
                                  *puVar7,puVar7[1]);
            uVar13 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x1b4));
            iVar9 = FUN_71ba2c3c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20));
            if (iVar9 != 0) {
              iVar9 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x540 + iVar8 * 4);
              if (iVar9 < 0) {
                iVar9 = -iVar9;
              }
              if (iVar9 < *piVar1 / 10) {
                uVar5 = *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x6d0 + iVar8 * 4);
                if ((int)uVar5 < 0) {
                  uVar5 = -uVar5;
                }
                if (uVar5 < (uint)(*piVar1 / 10)) {
                  *(undefined1 *)(param_1 + 0x1b8 + iVar8) = 1;
                  iVar11 = *(int *)(param_1 + 0x1b0);
                }
              }
            }
            uVar3 = *(undefined4 *)(iVar11 + iVar4 + 0x2c);
            *puVar7 = *(undefined4 *)(iVar11 + iVar4 + 0x28);
            puVar7[1] = uVar3;
            *(undefined4 *)(param_1 + 0x540 + iVar8 * 4) = *(undefined4 *)(param_1 + 400);
            *(undefined4 *)(param_1 + 0x6d0 + iVar8 * 4) = *(undefined4 *)(param_1 + 0x194);
          }
        }
LAB_714b7f7c:
        uVar5 = *(uint *)(param_1 + 0x1ac);
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar10 < uVar5);
    }
  }
  else {
    iVar4 = 0;
    do {
      *(undefined1 *)((param_1 - iVar4) + 0x1b8) = 0;
      *(undefined4 *)(param_1 + iVar4 * -4) = 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != -100);
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1a0);
  return 1;
}


// =========================================================================
// Function: FUN_714b81ec
// Entry: 0x714b81ec | Size: 780 bytes
// =========================================================================

undefined4 FUN_714b81ec(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1[0x5f] = param_1[0x5e];
  param_1[0x5e] = 0;
  iVar11 = 0;
  do {
    if ((int)param_1[iVar11] < 1) {
      param_1[iVar11] = 1;
    }
    else if (param_1[iVar11] == 2) {
      param_1[iVar11] = 3;
    }
    iVar5 = iVar11 + 1;
    if (*(char *)((int)param_1 + iVar11 + 0x68) != '\0') {
      *(undefined1 *)((int)param_1 + iVar11 + 0x68) = 0;
    }
    piVar1 = DAT_70ffc9a4;
    iVar11 = iVar5;
  } while (iVar5 != 0x10);
  if (param_2 == 0) {
    uVar6 = param_1[0x17];
    if (uVar6 != 0) {
      uVar9 = 0;
      iVar11 = -0x18;
      do {
        iVar5 = param_1[0x18];
        iVar8 = *(int *)(iVar5 + iVar11 + 0x18);
        uVar2 = *(uint *)(iVar5 + iVar11 + 0x1c);
        uVar7 = param_1[iVar8];
        if ((uVar7 != uVar2) && (uVar7 != 1 || uVar2 != 0)) {
          if (uVar7 == 3) {
            if (uVar2 == 2) goto LAB_714b8338;
          }
          else if ((uVar2 == 2) && (((int)uVar7 < 1 || ((uVar7 & 0xfffffffe) == 2)))) {
            puVar4 = (undefined4 *)(iVar5 + iVar11);
            param_1[0x10] = *puVar4;
            param_1[0x11] = puVar4[1];
            param_1[0x12] = puVar4[4];
            imp___aeabi_memmove(iVar5,puVar4 + 6,(uVar6 - uVar9) * 0x20);
            param_1[0x17] = param_1[0x17] - uVar9;
            return 0;
          }
          param_1[iVar8] = uVar2;
          iVar10 = param_1[0x18];
          iVar5 = iVar10 + iVar11;
          if (*(int *)(iVar5 + 0x1c) == 0) {
            puVar4 = param_1 + iVar8 * 2 + 0x1e;
            uVar12 = FUN_71ba23ec(*(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c),
                                  *puVar4,puVar4[1]);
            uVar13 = FUN_71ba1638(param_1[0x19]);
            iVar5 = FUN_71ba2c3c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                                 (int)((ulonglong)uVar13 >> 0x20));
            if (iVar5 != 0) {
              iVar5 = param_1[0x10] - param_1[iVar8 + 0x3e];
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              if (iVar5 < *piVar1 / 10) {
                uVar6 = param_1[0x11] - param_1[iVar8 + 0x4e];
                if ((int)uVar6 < 0) {
                  uVar6 = -uVar6;
                }
                if (uVar6 < (uint)(*piVar1 / 10)) {
                  *(undefined1 *)((int)param_1 + iVar8 + 0x68) = 1;
                  iVar10 = param_1[0x18];
                }
              }
            }
            uVar3 = *(undefined4 *)(iVar10 + iVar11 + 0x2c);
            *puVar4 = *(undefined4 *)(iVar10 + iVar11 + 0x28);
            puVar4[1] = uVar3;
            param_1[iVar8 + 0x3e] = param_1[0x10];
            param_1[iVar8 + 0x4e] = param_1[0x11];
          }
        }
LAB_714b8338:
        uVar6 = param_1[0x17];
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 0x20;
      } while (uVar9 < uVar6);
    }
  }
  else {
    param_1[0x17] = 0;
    *(undefined2 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
    *param_1 = 1;
    param_1[1] = 1;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[4] = 1;
    param_1[5] = 1;
    param_1[6] = 1;
    param_1[7] = 1;
    *(undefined4 *)((int)param_1 + 0x6e) = 0;
    *(undefined2 *)((int)param_1 + 0x72) = 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(undefined2 *)((int)param_1 + 0x75) = 0;
    *(undefined1 *)((int)param_1 + 0x77) = 0;
    param_1[8] = 1;
    param_1[9] = 1;
    param_1[10] = 1;
    param_1[0xb] = 1;
    param_1[0xc] = 1;
    param_1[0xd] = 1;
    param_1[0xe] = 1;
    param_1[0xf] = 1;
  }
  param_1[0x17] = 0;
  param_1[0x10] = param_1[0x13];
  param_1[0x11] = param_1[0x14];
  param_1[0x12] = param_1[0x15];
  return 1;
}


// =========================================================================
// Function: FUN_714b8818
// Entry: 0x714b8818 | Size: 212 bytes
// =========================================================================

void FUN_714b8818(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  
  piVar1 = (int *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1e0c);
  if (*piVar1 != 0) {
    uVar2 = FUN_71366d5c();
    uVar3 = FUN_71367168();
    iVar5 = *piVar1;
    FUN_714b8a44(&uStack_30,*(undefined4 *)(DAT_70ffc974 + 0xc),uVar2,uVar3,*DAT_70ffc958 != 0);
    *(bool *)(iVar5 + 0x10) =
         (int)-(iStack_2c + (uint)(uStack_30 != 0)) < 0 !=
         (SBORROW4(0,iStack_2c) != SBORROW4(-iStack_2c,(uint)(uStack_30 != 0)));
    thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_28);
    uVar4 = (uint)((ulonglong)uStack_30 * 1000);
    *(uint *)(iVar5 + 8) = uStack_28 + uVar4;
    *(uint *)(iVar5 + 0xc) =
         iStack_24 + iStack_2c * 1000 + (int)((ulonglong)uStack_30 * 1000 >> 0x20) +
         (uint)CARRY4(uStack_28,uVar4);
    return;
  }
  imp_usleep(param_1);
  return;
}


// =========================================================================
// Function: FUN_714b8a44
// Entry: 0x714b8a44 | Size: 224 bytes
// =========================================================================

void FUN_714b8a44(longlong *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = 1000;
  if (((param_4 != 0) && (lVar6 = 1000, 0 < param_2)) && (lVar6 = 1000, param_5 != 0)) {
    uVar1 = FUN_71ba1e0c(param_3);
    uVar2 = FUN_71ba1e0c(param_4);
    uVar2 = FUN_71ba21e8(uVar2,0x3a83126f);
    uVar1 = FUN_71ba13e0(uVar1,uVar2);
    uVar2 = FUN_71ba1b94(param_2);
    uVar2 = FUN_71ba13e0(0x49742400,uVar2);
    iVar3 = FUN_71ba2d70(uVar1,uVar2);
    lVar6 = 0;
    if (iVar3 == 0) {
      uVar4 = FUN_71ba1638(uVar2);
      uVar5 = FUN_71ba1638(uVar1);
      FUN_71ba23ec((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                   (int)((ulonglong)uVar5 >> 0x20));
      imp_floor();
      lVar6 = FUN_71ba16f4();
      lVar6 = lVar6 + 1;
    }
  }
  *param_1 = lVar6;
  return;
}


// =========================================================================
// Function: FUN_714b8cc4
// Entry: 0x714b8cc4 | Size: 464 bytes
// =========================================================================

void FUN_714b8cc4(uint param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
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
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  
  DataMemoryBarrier(0xb);
  if (((DAT_710eb1d4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eb1d4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1e8c,param_2);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1e7c);
      *(undefined1 *)(puVar9 + 0xd) = 1;
      uVar4 = DAT_700818dc;
      uVar3 = DAT_700818d8;
      uVar2 = DAT_700818d4;
      *puVar9 = DAT_700818d0;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      uVar4 = DAT_700818ec;
      uVar3 = DAT_700818e8;
      uVar2 = DAT_700818e4;
      puVar9[4] = DAT_700818e0;
      puVar9[5] = uVar2;
      puVar9[6] = uVar3;
      puVar9[7] = uVar4;
      uVar5 = DAT_70081900;
      uVar4 = DAT_700818fc;
      uVar3 = DAT_700818f8;
      uVar2 = DAT_700818f4;
      puVar9[8] = DAT_700818f0;
      puVar9[9] = uVar2;
      puVar9[10] = uVar3;
      puVar9[0xb] = uVar4;
      puVar9[0xc] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd3c0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1e8c);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1e7c);
    if (*(char *)(iVar7 + 0x34) != '\0') {
      uVar11 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar11 & 7) * 8;
        bVar6 = (byte)(0x3b4b4b1b >> iVar14) |
                (byte)(-0x66eeca4f << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        uVar12 = iVar14 - 0x20;
        if (-1 < (int)uVar12) {
          bVar6 = (byte)(0x991135b1 >> (uVar12 & 0xff));
        }
        *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar6;
        bVar16 = 0xfffffffe < uVar11;
        bVar15 = uVar13 == 0;
        bVar1 = (0x32 < uVar11) <= uVar13;
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar15 && bVar1);
      *(undefined1 *)(iVar7 + 0x34) = 0;
    }
    DAT_710eb1d0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eb1d4);
  }
  (*DAT_710eb1d0)(param_1,param_2);
  if ((param_1 < 10) && ((1 << (param_1 & 0xff) & 0x301U) != 0)) {
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
    bVar15 = 0xfffffffe < DAT_710eb1c8;
    DAT_710eb1c8 = DAT_710eb1c8 + 1;
    DAT_710eb1cc = DAT_710eb1cc + (uint)bVar15;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb1c0);
    thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_710eb1c4);
    return;
  }
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_lock
// Entry: 0x714b95f8 | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_lock(void)

{
  return;
}


// =========================================================================
// Function: imp_pthread_mutex_unlock
// Entry: 0x714b9630 | Size: 4 bytes
// =========================================================================

void imp_pthread_mutex_unlock(void)

{
  return;
}


// =========================================================================
// Function: FUN_714b9668
// Entry: 0x714b9668 | Size: 76 bytes
// =========================================================================

undefined4 * FUN_714b9668(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)thunk_MwhHq(8);
  *puVar1 = 0;
  puVar2 = puVar1 + 1;
  *puVar2 = 0;
  imp_pthread_mutexattr_init(puVar2);
  imp_pthread_mutexattr_settype(puVar2,1);
  imp_pthread_mutex_init(puVar1,puVar2);
  return puVar1;
}


// =========================================================================
// Function: FUN_714b973c
// Entry: 0x714b973c | Size: 44 bytes
// =========================================================================

void FUN_714b973c(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_pthread_mutex_destroy();
  imp_pthread_mutexattr_destroy(param_1 + 4);
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_714b97d4
// Entry: 0x714b97d4 | Size: 52 bytes
// =========================================================================

undefined4 * FUN_714b97d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)imp_malloc(4);
  *puVar1 = 0;
  imp_sem_init(puVar1,0,0);
  return puVar1;
}


// =========================================================================
// Function: imp_sem_post
// Entry: 0x714b9858 | Size: 4 bytes
// =========================================================================

void imp_sem_post(void)

{
  return;
}


// =========================================================================
// Function: imp_sem_wait
// Entry: 0x714b9890 | Size: 4 bytes
// =========================================================================

void imp_sem_wait(void)

{
  return;
}


// =========================================================================
// Function: FUN_714b98c8
// Entry: 0x714b98c8 | Size: 192 bytes
// =========================================================================

bool FUN_714b98c8(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = 0;
  iStack_20 = 0;
  imp_clock_gettime(0,&iStack_20);
  iStack_20 = iStack_20 + param_2 / 1000;
  iStack_1c = iStack_1c + (param_2 % 1000) * 1000000;
  if (999999999 < iStack_1c) {
    iStack_20 = iStack_20 + 1;
    iStack_1c = iStack_1c + -1000000000;
  }
  do {
    iVar1 = imp_sem_timedwait(param_1,&iStack_20);
    if (iVar1 == 0) break;
    piVar2 = (int *)imp___errno();
  } while (*piVar2 == 4);
  return iVar1 == 0;
}


// =========================================================================
// Function: imp_sem_destroy
// Entry: 0x714b99f4 | Size: 4 bytes
// =========================================================================

void imp_sem_destroy(void)

{
  return;
}


// =========================================================================
// Function: FUN_714b9a2c
// Entry: 0x714b9a2c | Size: 584 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714b9a2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uStack_30274;
  undefined1 auStack_30270 [4];
  undefined1 auStack_3026c [4];
  undefined1 auStack_30268 [24];
  uint uStack_30250;
  uint uStack_3024c;
  uint uStack_30248;
  uint uStack_30244;
  int iStack_30240;
  int iStack_3023c;
  
  iVar1 = _ext___stack_chk_guard;
  FUN_717ef3ac();
  uVar2 = imp_pthread_self();
  imp_pthread_getattr_np(uVar2,auStack_30268);
  imp_pthread_attr_getstack(auStack_30268,auStack_3026c,auStack_30270);
  imp_pthread_attr_destroy(auStack_30268);
  uStack_30274 = 0xff;
  uVar2 = imp_gettid();
  imp_syscall(0xf1,uVar2,4,&uStack_30274);
  pcVar5 = (code *)**(undefined4 **)(param_1 + 0x20);
  puVar6 = (uint *)(*(undefined4 **)(param_1 + 0x20))[1];
  FUN_717db1d0(DAT_71201808,param_1);
  imp___aeabi_memcpy(&uStack_30250,&DAT_70105c50,0x30224);
  pcVar7 = (code *)0x0;
  iStack_3023c = 0x370f3a77;
  iStack_30240 = -0x4103aa2a;
  uStack_30244 = 0xfcc126c8;
  if (puVar6 == (uint *)0x0) {
    puVar6 = &uStack_30250;
  }
  uStack_30248 = 0x6efdd0cf;
  uStack_30250 = 0x6a4dab1f;
  uStack_3024c = 0x679b29b;
  (*pcVar5)(puVar6);
  uVar4 = uStack_3024c ^ 0x679b29b;
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar3 = uStack_30250 ^ 0x6a4dab1f | uVar4;
  bVar8 = uVar3 == 0;
  if (bVar8) {
    uVar3 = uStack_30248 ^ 0x6efdd0cf;
    uVar4 = uStack_30244 ^ 0xfcc126c8;
  }
  pcVar5 = pcVar7;
  if (bVar8 && (uVar3 == 0 && uVar4 == 0)) goto LAB_714b9c20;
  do {
    software_interrupt(0);
    imp___aeabi_memcpy(pcVar5,&DAT_70081930,0x3c,0x22);
    pcVar7 = pcVar5;
    do {
      pcVar5[(int)pcVar7] = (code)((byte)pcVar5[(int)pcVar7] ^ 0x50);
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != (code *)0x3c);
    *(undefined4 *)pcVar5 = 0xe3b00044;
    *(undefined4 *)(pcVar5 + 4) = 0xe3b01000;
    FUN_719344e4(pcVar5,pcVar5 + 0x3c,0);
    (*pcVar5)();
LAB_714b9c20:
    pcVar5 = pcVar7;
  } while (iStack_30240 != -0x4103aa2a || iStack_3023c != 0x370f3a77);
  FUN_717ef680();
  if (_ext___stack_chk_guard != iVar1) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_714b9e98
// Entry: 0x714b9e98 | Size: 388 bytes
// =========================================================================

undefined4 *
FUN_714b9e98(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iStack_2c;
  undefined1 auStack_28 [8];
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x48);
  puVar2 = (undefined4 *)thunk_MwhHq(0xc);
  puVar1[8] = puVar2;
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = 0;
  if (param_4 == 0) {
    *(undefined2 *)(puVar1 + 2) = 100;
    puVar1[1] = 0x61657268;
    *puVar1 = 0x54707041;
  }
  else {
    imp___strcpy_chk(puVar1,param_4,0x20);
  }
  puVar1[9] = 0;
  puVar2 = puVar1 + 10;
  puVar1[0x10] = 0xffffffff;
  puVar1[0x11] = param_3;
  imp_pthread_attr_init(puVar2);
  imp_pthread_attr_getstacksize(puVar2,auStack_28);
  iVar3 = imp_sched_get_priority_min(0);
  iVar4 = imp_sched_get_priority_max(0);
  imp_pthread_attr_getschedparam(puVar2,&iStack_2c);
  switch(param_6) {
  case 0:
  case 1:
    iStack_2c = iVar3;
    break;
  case 2:
  case 3:
    iStack_2c = iVar4;
    break;
  case 4:
    iVar4 = (int)((ulonglong)((longlong)((iVar4 - iVar3) * 6) * -0x6db6db6d) >> 0x20) +
            (iVar4 - iVar3) * 6;
    iStack_2c = ((iVar4 >> 2) - (iVar4 >> 0x1f)) + iVar3;
  }
  if (iStack_2c == 0) {
    iStack_2c = 1;
  }
  imp_pthread_attr_setschedparam(puVar2,&iStack_2c);
  imp_pthread_create(puVar1 + 9,puVar2,FUN_714b9a2c,puVar1);
  imp_pthread_setschedparam(puVar1[9],0,&iStack_2c);
  return puVar1;
}


// =========================================================================
// Function: FUN_714ba19c
// Entry: 0x714ba19c | Size: 60 bytes
// =========================================================================

void FUN_714ba19c(int param_1)

{
  imp_pthread_attr_destroy(param_1 + 0x28);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_qNQrlu();
    }
    thunk_qNQrlu(param_1);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714ba270
// Entry: 0x714ba270 | Size: 20 bytes
// =========================================================================

void FUN_714ba270(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_pthread_join(*(undefined4 *)(param_1 + 0x24),0);
  return;
}


// =========================================================================
// Function: FUN_714ba2b8
// Entry: 0x714ba2b8 | Size: 4 bytes
// =========================================================================

void FUN_714ba2b8(void)

{
  return;
}


// =========================================================================
// Function: FUN_714ba2d4
// Entry: 0x714ba2d4 | Size: 336 bytes
// =========================================================================

bool FUN_714ba2d4(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte abStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  if ((*param_1 & 1) == 0) {
    uStack_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
  }
  else {
    FUN_712f6d58(&uStack_28,param_1[2],param_1[1]);
  }
  if (param_2 == 0) {
    if ((*param_1 & 1) == 0) {
      uStack_50 = *param_1;
      uStack_4c = param_1[1];
      uStack_48 = param_1[2];
    }
    else {
      FUN_712f6d58(&uStack_50,param_1[2],param_1[1]);
    }
    FUN_714bab0c(abStack_44,&uStack_50);
    FUN_714ba554(&uStack_38,abStack_44,0,param_3,0);
    if ((uStack_28 & 1) != 0) {
      thunk_qNQrlu(uStack_20);
    }
    uStack_28 = uStack_38;
    uStack_38 = uStack_38 & 0xffff0000;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    if ((abStack_44[0] & 1) != 0) {
      thunk_qNQrlu(uStack_3c);
    }
    if ((uStack_50 & 1) != 0) {
      thunk_qNQrlu(uStack_48);
    }
  }
  uVar1 = uStack_20;
  if ((uStack_28 & 1) == 0) {
    uVar1 = (uint)&uStack_28 | 1;
  }
  iVar2 = imp_opendir(uVar1);
  if (iVar2 != 0) {
    imp_closedir(iVar2);
  }
  if ((uStack_28 & 1) != 0) {
    thunk_qNQrlu(uStack_20);
  }
  return iVar2 != 0;
}


// =========================================================================
// Function: FUN_714ba554
// Entry: 0x714ba554 | Size: 724 bytes
// =========================================================================

void FUN_714ba554(undefined4 *param_1,byte *param_2,int param_3,int param_4)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  if (DAT_710eb1e0 == '\0') {
    if (param_3 == 1) {
      puVar7 = &DAT_711f6bd0;
      if (param_4 != 0) {
        puVar7 = &DAT_711f6be0;
      }
      if ((*puVar7 & 1) == 0) {
        uStack_28 = *puVar7;
        uStack_24 = puVar7[1];
        uStack_20 = puVar7[2];
      }
      else {
        puVar7 = &DAT_711f6bd0;
        if (param_4 != 0) {
          puVar7 = &DAT_711f6be0;
        }
        puVar1 = &DAT_711f6bd0;
        if (param_4 != 0) {
          puVar1 = &DAT_711f6be0;
        }
        FUN_712f6d58(&uStack_28,puVar7[2],puVar1[1]);
      }
      uVar8 = *(uint *)(param_2 + 4);
      pbVar10 = *(byte **)(param_2 + 8);
      if ((*param_2 & 1) == 0) {
        pbVar10 = param_2 + 1;
        uVar8 = (uint)(*param_2 >> 1);
      }
      puVar3 = (undefined4 *)
               thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                         (&uStack_28,pbVar10,uVar8);
      uVar5 = puVar3[1];
      uVar9 = puVar3[2];
      *param_1 = *puVar3;
      param_1[1] = uVar5;
      param_1[2] = uVar9;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    else {
      pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ecc);
      if (*pcVar2 == '\0') {
        puVar3 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ebc);
        *puVar3 = 0x49538eb9;
        *(undefined1 *)((int)puVar3 + 7) = 1;
        *(undefined4 *)((int)puVar3 + 3) = 0x9306449;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd460,puVar3,&DAT_70b0e000);
        puVar4 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ecc);
        *puVar4 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ebc);
      if (pbVar10[7] != 0) {
        pbVar10[7] = 0;
        *pbVar10 = *pbVar10 ^ 0xc9;
        pbVar10[1] = pbVar10[1] ^ 0xef;
        pbVar10[2] = pbVar10[2] ^ 0x21;
        pbVar10[3] = pbVar10[3] ^ 0x3d;
        pbVar10[4] = pbVar10[4] ^ 0x55;
        pbVar10[5] = pbVar10[5] ^ 0x1f;
        pbVar10[6] = pbVar10[6] ^ 9;
      }
      thunk_ACPvXABgTDKppmRiQuPVXmvfB_HeOltD_lCwyaDGJj_TyPZR_zqPlpiRxgxdAFbXtfGHEsKfuSmuyghkCdavNUVKpNwbn
                (&uStack_28,pbVar10,param_2);
      puVar7 = &DAT_711f6bd0;
      if (param_4 != 0) {
        puVar7 = &DAT_711f6be0;
      }
      if ((*puVar7 & 1) == 0) {
        uStack_38 = *puVar7;
        uStack_34 = puVar7[1];
        uStack_30 = puVar7[2];
      }
      else {
        puVar7 = &DAT_711f6bd0;
        if (param_4 != 0) {
          puVar7 = &DAT_711f6be0;
        }
        puVar1 = &DAT_711f6bd0;
        if (param_4 != 0) {
          puVar1 = &DAT_711f6be0;
        }
        FUN_712f6d58(&uStack_38,puVar1[2],puVar7[1]);
      }
      uVar6 = uStack_20;
      uVar8 = uStack_24;
      if ((uStack_28 & 1) == 0) {
        uVar8 = uStack_28 >> 1 & 0x7f;
        uVar6 = (uint)&uStack_28 | 1;
      }
      puVar3 = (undefined4 *)
               thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                         (&uStack_38,uVar6,uVar8);
      uVar5 = puVar3[1];
      uVar9 = puVar3[2];
      *param_1 = *puVar3;
      param_1[1] = uVar5;
      param_1[2] = uVar9;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      if ((uStack_38 & 1) != 0) {
        thunk_qNQrlu(uStack_30);
      }
    }
    if ((uStack_28 & 1) != 0) {
      thunk_qNQrlu(uStack_20);
    }
    return;
  }
  if ((*param_2 & 1) != 0) {
    FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    return;
  }
  uVar9 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 8);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar9;
  param_1[2] = uVar5;
  return;
}


// =========================================================================
// Function: FUN_714bab0c
// Entry: 0x714bab0c | Size: 808 bytes
// =========================================================================

void FUN_714bab0c(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  
  if ((*param_2 & 1) == 0) {
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
  }
  uVar9 = *(uint *)(param_1 + 4);
  pbVar10 = *(byte **)(param_1 + 8);
  pbVar12 = param_1 + 1;
  bVar3 = *param_1;
  pbVar5 = pbVar10;
  uVar1 = uVar9;
  if ((bVar3 & 1) == 0) {
    uVar1 = (uint)(bVar3 >> 1);
    pbVar5 = pbVar12;
  }
  if (uVar1 != 0) {
    do {
      if (*pbVar5 == 0x5c) {
        *pbVar5 = 0x2f;
      }
      uVar1 = uVar1 - 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar1 != 0);
    bVar3 = *param_1;
    uVar9 = *(uint *)(param_1 + 4);
    pbVar10 = *(byte **)(param_1 + 8);
  }
  uVar1 = (uint)(bVar3 >> 1);
  pbVar5 = pbVar10;
  uVar8 = uVar9;
  if ((bVar3 & 1) == 0) {
    pbVar5 = pbVar12;
    uVar8 = uVar1;
  }
  if (uVar8 != 0) {
    do {
      if (*pbVar5 == 10) {
        *pbVar5 = 0;
      }
      uVar8 = uVar8 - 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar8 != 0);
    bVar3 = *param_1;
    uVar9 = *(uint *)(param_1 + 4);
    pbVar10 = *(byte **)(param_1 + 8);
    uVar1 = (uint)(bVar3 >> 1);
  }
  pbVar5 = pbVar10;
  uVar8 = uVar9;
  if ((bVar3 & 1) == 0) {
    pbVar5 = pbVar12;
    uVar8 = uVar1;
  }
  if (uVar8 != 0) {
    do {
      if (*pbVar5 == 9) {
        *pbVar5 = 0;
      }
      uVar8 = uVar8 - 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar8 != 0);
    bVar3 = *param_1;
    uVar9 = *(uint *)(param_1 + 4);
    pbVar10 = *(byte **)(param_1 + 8);
    uVar1 = (uint)(bVar3 >> 1);
  }
  if ((bVar3 & 1) == 0) {
    pbVar10 = pbVar12;
    uVar9 = uVar1;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    if (*pbVar10 == 0x20) {
      *pbVar10 = 0;
    }
    pbVar10 = pbVar10 + 1;
  }
  do {
    iVar2 = imp_strlen(&DAT_7006c7c7);
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 4);
      pbVar10 = *(byte **)(param_1 + 8);
      if ((*param_1 & 1) == 0) {
        uVar1 = (uint)(*param_1 >> 1);
        pbVar10 = pbVar12;
      }
      if ((int)uVar1 < iVar2) break;
      pbVar11 = pbVar10 + uVar1;
      pbVar5 = pbVar10;
      while( true ) {
        if ((0xfffffffe < uVar1 - iVar2) ||
           (pbVar5 = (byte *)imp_memchr(pbVar5,0x2e,(uVar1 - iVar2) + 1), pbVar5 == (byte *)0x0))
        goto LAB_714bad1c;
        uVar13 = imp_memcmp(pbVar5,&DAT_7006c7c7,iVar2);
        iVar6 = (int)((ulonglong)uVar13 >> 0x20);
        if ((int)uVar13 == 0) break;
        pbVar5 = pbVar5 + 1;
        uVar1 = (int)pbVar11 - (int)pbVar5;
        if ((int)uVar1 < iVar2) goto LAB_714bad1c;
      }
      if (pbVar5 != pbVar11) {
        iVar6 = (int)pbVar5 - (int)pbVar10;
      }
      if (pbVar5 == pbVar11 || iVar6 == -1) break;
    }
    thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
              (param_1,iVar6,2);
  } while( true );
LAB_714bad1c:
  iVar2 = imp_strlen(&DAT_700645a2);
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  else {
    bVar3 = *param_1;
    uVar1 = *(uint *)(param_1 + 4);
    pbVar10 = *(byte **)(param_1 + 8);
    if ((bVar3 & 1) == 0) {
      uVar1 = (uint)(bVar3 >> 1);
      pbVar10 = pbVar12;
    }
    if ((int)uVar1 < iVar2) {
LAB_714badd8:
      if (uVar1 != 0) {
        uVar1 = 0;
        do {
          pbVar10 = *(byte **)(param_1 + 8);
          if ((bVar3 & 1) != 1) {
            pbVar10 = pbVar12;
          }
          bVar3 = pbVar10[uVar1];
          if (0xffffffe5 < bVar3 - 0x5b) {
            bVar3 = bVar3 | 0x20;
          }
          pbVar10[uVar1] = bVar3;
          uVar1 = uVar1 + 1;
          bVar3 = *param_1;
          uVar9 = *(uint *)(param_1 + 4);
          if ((bVar3 & 1) == 0) {
            uVar9 = (uint)(bVar3 >> 1);
          }
        } while (uVar1 < uVar9);
      }
      return;
    }
    pbVar11 = pbVar10 + uVar1;
    pbVar5 = pbVar10;
    uVar9 = uVar1;
    while( true ) {
      if ((0xfffffffe < uVar9 - iVar2) ||
         (pbVar5 = (byte *)imp_memchr(pbVar5,0x2e,(uVar9 - iVar2) + 1), pbVar5 == (byte *)0x0))
      goto LAB_714badd8;
      uVar13 = imp_memcmp(pbVar5,&DAT_700645a2,iVar2);
      iVar6 = (int)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar13 == 0) break;
      pbVar5 = pbVar5 + 1;
      uVar9 = (int)pbVar11 - (int)pbVar5;
      if ((int)uVar9 < iVar2) goto LAB_714badd8;
    }
    if (pbVar5 != pbVar11) {
      iVar6 = (int)pbVar5 - (int)pbVar10;
    }
    if (pbVar5 == pbVar11 || iVar6 == -1) goto LAB_714badd8;
  }
  thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc(param_1,iVar6,2)
  ;
  goto LAB_714bad1c;
}


// =========================================================================
// Function: FUN_714bafa8
// Entry: 0x714bafa8 | Size: 316 bytes
// =========================================================================

undefined4 FUN_714bafa8(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte abStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  if ((*param_1 & 1) == 0) {
    uStack_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
  }
  else {
    FUN_712f6d58(&uStack_28,param_1[2],param_1[1]);
  }
  if (param_2 == 0) {
    if ((*param_1 & 1) == 0) {
      uStack_50 = *param_1;
      uStack_4c = param_1[1];
      uStack_48 = param_1[2];
    }
    else {
      FUN_712f6d58(&uStack_50,param_1[2],param_1[1]);
    }
    FUN_714bab0c(abStack_44,&uStack_50);
    FUN_714ba554(&uStack_38,abStack_44,0,param_3,0);
    if ((uStack_28 & 1) != 0) {
      thunk_qNQrlu(uStack_20);
    }
    uStack_28 = uStack_38;
    uStack_38 = uStack_38 & 0xffff0000;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    if ((abStack_44[0] & 1) != 0) {
      thunk_qNQrlu(uStack_3c);
    }
    if ((uStack_50 & 1) != 0) {
      thunk_qNQrlu(uStack_48);
    }
  }
  uVar1 = uStack_20;
  if ((uStack_28 & 1) == 0) {
    uVar1 = (uint)&uStack_28 | 1;
  }
  uVar2 = imp_opendir(uVar1);
  if ((uStack_28 & 1) != 0) {
    thunk_qNQrlu(uStack_20);
  }
  return uVar2;
}


// =========================================================================
// Function: imp_closedir
// Entry: 0x714bb1f8 | Size: 4 bytes
// =========================================================================

void imp_closedir(void)

{
  return;
}


// =========================================================================
// Function: FUN_714bb230
// Entry: 0x714bb230 | Size: 540 bytes
// =========================================================================

bool FUN_714bb230(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1eec);
  if (*pcVar2 == '\0') {
    puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1edc);
    *puVar7 = 0x563ddf3e;
    puVar7[1] = 0xddec152a;
    puVar7[2] = 0x4079de33;
    *(undefined1 *)((int)puVar7 + 0xf) = 1;
    *(undefined4 *)((int)puVar7 + 0xb) = 0x8d063f40;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd488,puVar7,&DAT_70b0e000);
    puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1eec);
    *puVar8 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1edc);
  if (pbVar3[0xf] != 0) {
    *pbVar3 = *pbVar3 ^ 0x5f;
    pbVar3[1] = pbVar3[1] ^ 0xbb;
    pbVar3[2] = pbVar3[2] ^ 0x57;
    pbVar3[3] = pbVar3[3] ^ 0x23;
    pbVar3[0xf] = 0;
    pbVar3[4] = pbVar3[4] ^ 0x59;
    pbVar3[5] = pbVar3[5] ^ 0x61;
    pbVar3[6] = pbVar3[6] ^ 0x8d;
    pbVar3[7] = pbVar3[7] ^ 0xbf;
    pbVar3[8] = pbVar3[8] ^ 0x5f;
    pbVar3[9] = pbVar3[9] ^ 0xbb;
    pbVar3[10] = pbVar3[10] ^ 0x57;
    pbVar3[0xb] = pbVar3[0xb] ^ 0x23;
    pbVar3[0xc] = pbVar3[0xc] ^ 0x59;
    pbVar3[0xd] = pbVar3[0xd] ^ 0x61;
    pbVar3[0xe] = pbVar3[0xe] ^ 0x8d;
  }
  bVar1 = *param_1;
  pbVar11 = *(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar11 = param_1 + 1;
  }
  iVar4 = imp_strlen(pbVar3);
  if (iVar4 == 0) {
    return true;
  }
  uVar9 = *(uint *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    uVar9 = (uint)(bVar1 >> 1);
  }
  pbVar12 = pbVar11 + uVar9;
  pbVar10 = pbVar12;
  if (iVar4 <= (int)uVar9) {
    bVar1 = *pbVar3;
    pbVar5 = pbVar11;
    do {
      pbVar10 = pbVar12;
      if (((0xfffffffe < uVar9 - iVar4) ||
          (pbVar5 = (byte *)imp_memchr(pbVar5,bVar1,(uVar9 - iVar4) + 1), pbVar5 == (byte *)0x0)) ||
         (iVar6 = imp_memcmp(pbVar5,pbVar3,iVar4), pbVar10 = pbVar5, iVar6 == 0)) break;
      pbVar5 = pbVar5 + 1;
      uVar9 = (int)pbVar12 - (int)pbVar5;
      pbVar10 = pbVar12;
    } while (iVar4 <= (int)uVar9);
  }
  return pbVar10 != pbVar12 && (int)pbVar10 - (int)pbVar11 != -1;
}


// =========================================================================
// Function: FUN_714bb604
// Entry: 0x714bb604 | Size: 192 bytes
// =========================================================================

uint FUN_714bb604(byte *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar8 = *(uint *)(param_1 + 4);
  pbVar9 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar9 = param_1 + 1;
    uVar8 = (uint)(*param_1 >> 1);
  }
  iVar2 = imp_strlen(param_2);
  uVar3 = 0xffffffff;
  if (param_3 <= uVar8) {
    if (iVar2 == 0) {
      return param_3;
    }
    pbVar4 = pbVar9 + param_3;
    pbVar6 = pbVar9 + uVar8;
    iVar5 = (int)pbVar6 - (int)pbVar4;
    pbVar7 = pbVar6;
    if (iVar2 <= iVar5) {
      uVar1 = *param_2;
      do {
        pbVar7 = pbVar6;
        if (((0xfffffffe < (uint)(iVar5 - iVar2)) ||
            (pbVar4 = (byte *)imp_memchr(pbVar4,uVar1,(iVar5 - iVar2) + 1), pbVar4 == (byte *)0x0))
           || (iVar5 = imp_memcmp(pbVar4,param_2,iVar2), pbVar7 = pbVar4, iVar5 == 0)) break;
        pbVar4 = pbVar4 + 1;
        iVar5 = (int)pbVar6 - (int)pbVar4;
        pbVar7 = pbVar6;
      } while (iVar2 <= iVar5);
    }
    uVar3 = (int)pbVar7 - (int)pbVar9;
    if (pbVar7 == pbVar6) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_714bb730
// Entry: 0x714bb730 | Size: 540 bytes
// =========================================================================

bool FUN_714bb730(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f0c);
  if (*pcVar2 == '\0') {
    puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1efc);
    *puVar7 = 0x8639b5a6;
    puVar7[1] = 0x6baebf68;
    puVar7[2] = 0x907db4ab;
    *(undefined1 *)((int)puVar7 + 0xf) = 1;
    *(undefined4 *)((int)puVar7 + 0xb) = 0xcfac7d90;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd4b8,puVar7,&DAT_70b0e000);
    puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f0c);
    *puVar8 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1efc);
  if (pbVar3[0xf] != 0) {
    *pbVar3 = *pbVar3 ^ 199;
    pbVar3[1] = pbVar3[1] ^ 0xd1;
    pbVar3[2] = pbVar3[2] ^ 0x53;
    pbVar3[3] = pbVar3[3] ^ 0xf3;
    pbVar3[0xf] = 0;
    pbVar3[4] = pbVar3[4] ^ 0x1b;
    pbVar3[5] = pbVar3[5] ^ 0xcb;
    pbVar3[6] = pbVar3[6] ^ 0xcf;
    pbVar3[7] = pbVar3[7] ^ 9;
    pbVar3[8] = pbVar3[8] ^ 199;
    pbVar3[9] = pbVar3[9] ^ 0xd1;
    pbVar3[10] = pbVar3[10] ^ 0x53;
    pbVar3[0xb] = pbVar3[0xb] ^ 0xf3;
    pbVar3[0xc] = pbVar3[0xc] ^ 0x1b;
    pbVar3[0xd] = pbVar3[0xd] ^ 0xcb;
    pbVar3[0xe] = pbVar3[0xe] ^ 0xcf;
  }
  bVar1 = *param_1;
  pbVar11 = *(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar11 = param_1 + 1;
  }
  iVar4 = imp_strlen(pbVar3);
  if (iVar4 == 0) {
    return true;
  }
  uVar9 = *(uint *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    uVar9 = (uint)(bVar1 >> 1);
  }
  pbVar12 = pbVar11 + uVar9;
  pbVar10 = pbVar12;
  if (iVar4 <= (int)uVar9) {
    bVar1 = *pbVar3;
    pbVar5 = pbVar11;
    do {
      pbVar10 = pbVar12;
      if (((0xfffffffe < uVar9 - iVar4) ||
          (pbVar5 = (byte *)imp_memchr(pbVar5,bVar1,(uVar9 - iVar4) + 1), pbVar5 == (byte *)0x0)) ||
         (iVar6 = imp_memcmp(pbVar5,pbVar3,iVar4), pbVar10 = pbVar5, iVar6 == 0)) break;
      pbVar5 = pbVar5 + 1;
      uVar9 = (int)pbVar12 - (int)pbVar5;
      pbVar10 = pbVar12;
    } while (iVar4 <= (int)uVar9);
  }
  return pbVar10 != pbVar12 && (int)pbVar10 - (int)pbVar11 != -1;
}


// =========================================================================
// Function: FUN_714bbb04
// Entry: 0x714bbb04 | Size: 11296 bytes
// =========================================================================

void FUN_714bbb04(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  uint uStack_48;
  byte *pbStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar9 = imp_strlen(param_2);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar9 < 0xb) {
    uVar22 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)(uVar9 << 1));
    if (uVar9 != 0) goto LAB_714bbb70;
  }
  else {
    uVar22 = thunk_MwhHq((uVar9 | 7) + 1);
    uStack_3c = (uVar9 | 7) + 2;
    uStack_38 = uVar9;
    uStack_34 = uVar22;
LAB_714bbb70:
    imp___aeabi_memcpy(uVar22,param_2,uVar9);
  }
  *(undefined1 *)(uVar22 + uVar9) = 0;
  FUN_714bab0c(&uStack_30,&uStack_3c);
  if ((uStack_3c & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f2c);
  if (*pcVar10 == '\0') {
    puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f1c);
    *puVar17 = 0x59934207;
    *(undefined2 *)(puVar17 + 1) = 0x147;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd4e8,puVar17,&DAT_70b0e000);
    puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f2c);
    *puVar18 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f1c);
  uVar9 = uStack_30;
  if (pbVar11[5] != 0) {
    pbVar11[5] = 0;
    *pbVar11 = *pbVar11 ^ 0x29;
    pbVar11[1] = pbVar11[1] ^ 0x25;
    pbVar11[2] = pbVar11[2] ^ 0xeb;
    pbVar11[3] = pbVar11[3] ^ 0x2d;
    pbVar11[4] = pbVar11[4] ^ 0x47;
  }
  uVar12 = (uint)&uStack_30 | 1;
  uVar22 = uStack_28;
  if ((uStack_30 & 1) == 0) {
    uVar22 = uVar12;
  }
  iVar13 = imp_strlen(pbVar11);
  if (iVar13 == 0) {
    pbVar11 = (byte *)0x0;
LAB_714bbcbc:
    uVar9 = thunk_pqWMLpYQkevHwapJIPZboPsMrUGTuQHnfTsZrDxRScZyrsqnKLxWnFifGOliKNuSwJU_pwdbnMLX
                      (&uStack_30,0x2f,pbVar11);
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f4c);
    if (*pcVar10 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f3c);
      *puVar17 = 0x7c8988a9;
      puVar17[1] = 0x4b6637fa;
      *(undefined1 *)((int)puVar17 + 0xb) = 1;
      *(undefined4 *)((int)puVar17 + 7) = 0xfdc6b94b;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd510,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f4c);
      *puVar18 = 1;
    }
    uVar22 = uVar9 + 1;
    pbVar21 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f3c);
    if (pbVar21[0xb] != 0) {
      *pbVar21 = *pbVar21 ^ 0xcd;
      pbVar21[1] = pbVar21[1] ^ 0xe9;
      pbVar21[2] = pbVar21[2] ^ 0xfd;
      pbVar21[3] = pbVar21[3] ^ 0x1d;
      pbVar21[0xb] = 0;
      pbVar21[4] = pbVar21[4] ^ 0xd5;
      pbVar21[5] = pbVar21[5] ^ 0x43;
      pbVar21[6] = pbVar21[6] ^ 3;
      pbVar21[7] = pbVar21[7] ^ 0x33;
      pbVar21[8] = pbVar21[8] ^ 0xcd;
      pbVar21[9] = pbVar21[9] ^ 0xe9;
      pbVar21[10] = pbVar21[10] ^ 0xfd;
    }
    uVar19 = uStack_2c;
    if ((uStack_30 & 1) == 0) {
      uVar19 = uStack_30 >> 1 & 0x7f;
    }
    if (uVar19 < uVar22) goto LAB_714be5b4;
    uVar23 = uStack_28;
    if ((uStack_30 & 1) == 0) {
      uVar23 = uVar12;
    }
    pbVar20 = pbVar11 + ~uVar9 + 4;
    if ((byte *)(uVar19 - uVar22) < pbVar11 + ~uVar9 + 4) {
      pbVar20 = (byte *)(uVar19 - uVar22);
    }
    if ((byte *)0xfffffff7 < pbVar20) goto LAB_714be540;
    if (pbVar20 < (byte *)0xb) {
      uStack_48 = CONCAT31(uStack_48._1_3_,(char)((int)pbVar20 << 1));
      uVar9 = (uint)&uStack_48 | 1;
      if (pbVar20 != (byte *)0x0) goto LAB_714bbe20;
    }
    else {
      uVar9 = thunk_MwhHq(((uint)pbVar20 | 7) + 1);
      uStack_48 = ((uint)pbVar20 | 7) + 2;
      pbStack_44 = pbVar20;
      uStack_40 = uVar9;
LAB_714bbe20:
      imp___aeabi_memmove(uVar9,uVar23 + uVar22,pbVar20);
    }
    pbVar20[uVar9] = 0;
    puVar16 = (uint *)thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                                (&uStack_48,0,pbVar21);
    uVar9 = puVar16[1];
    uVar22 = puVar16[2];
    *param_1 = *puVar16;
    param_1[1] = uVar9;
    param_1[2] = uVar22;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    if ((uStack_48 & 1) != 0) {
      thunk_qNQrlu(uStack_40);
    }
    iVar13 = FUN_714c1ac8(param_1);
    if (iVar13 != 0) goto LAB_714bd208;
    if ((*param_1 & 1) != 0) {
      thunk_qNQrlu(param_1[2]);
    }
  }
  else {
    uVar19 = uStack_2c;
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9 >> 1 & 0x7f;
    }
    if (iVar13 <= (int)uVar19) {
      bVar8 = *pbVar11;
      iVar24 = uVar22 + uVar19;
      uVar9 = uVar22;
      do {
        if ((0xfffffffe < uVar19 - iVar13) ||
           (iVar14 = imp_memchr(uVar9,bVar8,(uVar19 - iVar13) + 1), iVar14 == 0)) break;
        iVar15 = imp_memcmp(iVar14,pbVar11,iVar13);
        if (iVar15 == 0) {
          if (iVar14 != iVar24) {
            pbVar11 = (byte *)(iVar14 - uVar22);
          }
          if (iVar14 != iVar24 && pbVar11 != (byte *)0xffffffff) goto LAB_714bbcbc;
          break;
        }
        uVar9 = iVar14 + 1;
        uVar19 = iVar24 - uVar9;
      } while (iVar13 <= (int)uVar19);
    }
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f6c);
  if (*pcVar10 == '\0') {
    puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f5c);
    *(undefined2 *)(puVar17 + 3) = 0x163;
    *puVar17 = 0x54f94612;
    puVar17[1] = 0xae02b00f;
    puVar17[2] = 0x1ef14510;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd53c,puVar17,&DAT_70b0e000);
    puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f6c);
    *puVar18 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f5c);
  uVar9 = uStack_30;
  if (pbVar11[0xd] != 0) {
    *pbVar11 = *pbVar11 ^ 0x7f;
    pbVar11[1] = pbVar11[1] ^ 0x29;
    pbVar11[2] = pbVar11[2] ^ 0x9d;
    pbVar11[3] = pbVar11[3] ^ 0x31;
    pbVar11[0xd] = 0;
    pbVar11[4] = pbVar11[4] ^ 99;
    pbVar11[5] = pbVar11[5] ^ 0xc3;
    pbVar11[6] = pbVar11[6] ^ 0x2d;
    pbVar11[7] = pbVar11[7] ^ 0xcd;
    pbVar11[8] = pbVar11[8] ^ 0x7f;
    pbVar11[9] = pbVar11[9] ^ 0x29;
    pbVar11[10] = pbVar11[10] ^ 0x9d;
    pbVar11[0xb] = pbVar11[0xb] ^ 0x31;
    pbVar11[0xc] = pbVar11[0xc] ^ 99;
  }
  uVar22 = uStack_28;
  if ((uStack_30 & 1) == 0) {
    uVar22 = uVar12;
  }
  iVar13 = imp_strlen(pbVar11);
  if (iVar13 == 0) {
    iVar24 = 0;
LAB_714bc018:
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f8c);
    if (*pcVar10 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f7c);
      *(undefined2 *)(puVar17 + 3) = 0x1c5;
      *puVar17 = 0x3a89f886;
      puVar17[1] = 0xb6ba4ca9;
      puVar17[2] = &DAT_7081fb84;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd56c,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f8c);
      *puVar18 = 1;
    }
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f7c);
    if (pbVar11[0xd] != 0) {
      *pbVar11 = *pbVar11 ^ 0xeb;
      pbVar11[1] = pbVar11[1] ^ 0x97;
      pbVar11[2] = pbVar11[2] ^ 0xed;
      pbVar11[3] = pbVar11[3] ^ 0x5f;
      pbVar11[0xd] = 0;
      pbVar11[4] = pbVar11[4] ^ 0xc5;
      pbVar11[5] = pbVar11[5] ^ 0x3f;
      pbVar11[6] = pbVar11[6] ^ 0x95;
      pbVar11[7] = pbVar11[7] ^ 0xd5;
      pbVar11[8] = pbVar11[8] ^ 0xeb;
      pbVar11[9] = pbVar11[9] ^ 0x97;
      pbVar11[10] = pbVar11[10] ^ 0xed;
      pbVar11[0xb] = pbVar11[0xb] ^ 0x5f;
      pbVar11[0xc] = pbVar11[0xc] ^ 0xc5;
    }
    iVar13 = imp_strlen();
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fac);
    if (*pcVar10 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f9c);
      *puVar17 = 0x676898b7;
      *(undefined2 *)(puVar17 + 1) = 0x1df;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd59c,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fac);
      *puVar18 = 1;
    }
    uVar9 = iVar13 + iVar24;
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1f9c);
    if (pbVar11[5] != 0) {
      pbVar11[5] = 0;
      *pbVar11 = *pbVar11 ^ 0x99;
      pbVar11[1] = pbVar11[1] ^ 0xfb;
      pbVar11[2] = pbVar11[2] ^ 7;
      pbVar11[3] = pbVar11[3] ^ 0xb;
      pbVar11[4] = pbVar11[4] ^ 0xdf;
    }
    uVar19 = uStack_28;
    uVar22 = uStack_2c;
    if ((uStack_30 & 1) == 0) {
      uVar22 = uStack_30 >> 1 & 0x7f;
      uVar19 = uVar12;
    }
    iVar13 = imp_strlen(pbVar11);
    if (uVar9 <= uVar22) {
      uVar23 = uVar9;
      if (iVar13 == 0) {
LAB_714bc22c:
        if (uVar23 != 0xffffffff) {
          pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fcc);
          if (*pcVar10 == '\0') {
            puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fbc);
            *puVar17 = 0x745550e9;
            puVar17[1] = 0x2922c294;
            *(undefined1 *)((int)puVar17 + 0xb) = 1;
            *(undefined4 *)((int)puVar17 + 7) = 0x211ee129;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd5c4,puVar17,&DAT_70b0e000);
            puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fcc);
            *puVar18 = 1;
          }
          pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fbc);
          if (pbVar11[0xb] != 0) {
            *pbVar11 = *pbVar11 ^ 0x8d;
            pbVar11[1] = pbVar11[1] ^ 0x31;
            pbVar11[2] = pbVar11[2] ^ 0x21;
            pbVar11[3] = pbVar11[3] ^ 0x15;
            pbVar11[0xb] = 0;
            pbVar11[4] = pbVar11[4] ^ 0xbb;
            pbVar11[5] = pbVar11[5] ^ 0xa1;
            pbVar11[6] = pbVar11[6] ^ 0x4d;
            pbVar11[7] = pbVar11[7] ^ 0x45;
            pbVar11[8] = pbVar11[8] ^ 0x8d;
            pbVar11[9] = pbVar11[9] ^ 0x31;
            pbVar11[10] = pbVar11[10] ^ 0x21;
          }
          uVar22 = uStack_2c;
          if ((uStack_30 & 1) == 0) {
            uVar22 = uStack_30 >> 1 & 0x7f;
          }
          if (uVar22 < uVar9) {
LAB_714be5b4:
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(&uStack_48);
          }
          uVar19 = uStack_28;
          if ((uStack_30 & 1) == 0) {
            uVar19 = uVar12;
          }
          pbVar21 = (byte *)((uVar23 - uVar9) + 4);
          if ((byte *)(uVar22 - uVar9) < pbVar21) {
            pbVar21 = (byte *)(uVar22 - uVar9);
          }
          if ((byte *)0xfffffff7 < pbVar21) goto LAB_714be540;
          if (pbVar21 < (byte *)0xb) {
            uStack_48 = CONCAT31(uStack_48._1_3_,(char)((int)pbVar21 << 1));
            uVar22 = (uint)&uStack_48 | 1;
            if (pbVar21 != (byte *)0x0) goto LAB_714bc37c;
          }
          else {
            uVar22 = thunk_MwhHq(((uint)pbVar21 | 7) + 1);
            uStack_48 = ((uint)pbVar21 | 7) + 2;
            pbStack_44 = pbVar21;
            uStack_40 = uVar22;
LAB_714bc37c:
            imp___aeabi_memmove(uVar22,uVar19 + uVar9,pbVar21);
          }
          pbVar21[uVar22] = 0;
          puVar16 = (uint *)thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                                      (&uStack_48,0,pbVar11);
          uVar9 = puVar16[1];
          uVar22 = puVar16[2];
          *param_1 = *puVar16;
          param_1[1] = uVar9;
          param_1[2] = uVar22;
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          if ((uStack_48 & 1) != 0) {
            thunk_qNQrlu(uStack_40);
          }
          iVar13 = FUN_714c1ac8(param_1);
          if (iVar13 != 0) goto LAB_714bd208;
          if ((*param_1 & 1) != 0) {
            thunk_qNQrlu(param_1[2]);
          }
        }
      }
      else {
        iVar24 = uVar19 + uVar9;
        iVar15 = uVar19 + uVar22;
        iVar14 = iVar15 - iVar24;
        if (iVar13 <= iVar14) {
          bVar8 = *pbVar11;
          do {
            if ((0xfffffffe < (uint)(iVar14 - iVar13)) ||
               (iVar24 = imp_memchr(iVar24,bVar8,(iVar14 - iVar13) + 1), iVar24 == 0)) break;
            iVar14 = imp_memcmp(iVar24,pbVar11,iVar13);
            if (iVar14 == 0) {
              if (iVar24 != iVar15) {
                uVar23 = iVar24 - uVar19;
                goto LAB_714bc22c;
              }
              break;
            }
            iVar24 = iVar24 + 1;
            iVar14 = iVar15 - iVar24;
          } while (iVar13 <= iVar14);
        }
      }
    }
  }
  else {
    uVar19 = uStack_2c;
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9 >> 1 & 0x7f;
    }
    if (iVar13 <= (int)uVar19) {
      bVar8 = *pbVar11;
      iVar14 = uVar22 + uVar19;
      uVar9 = uVar22;
      do {
        if ((0xfffffffe < uVar19 - iVar13) ||
           (iVar24 = imp_memchr(uVar9,bVar8,(uVar19 - iVar13) + 1), iVar24 == 0)) break;
        iVar15 = imp_memcmp(iVar24,pbVar11,iVar13);
        if (iVar15 == 0) {
          bVar25 = iVar24 != iVar14;
          if (bVar25) {
            iVar24 = iVar24 - uVar22;
          }
          if (bVar25 && iVar24 != -1) goto LAB_714bc018;
          break;
        }
        uVar9 = iVar24 + 1;
        uVar19 = iVar14 - uVar9;
      } while (iVar13 <= (int)uVar19);
    }
  }
  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fec);
  if (*pcVar10 == '\0') {
    puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fdc);
    *(undefined1 *)(puVar17 + 3) = 1;
    *puVar17 = 0x3491ffb2;
    puVar17[1] = 0x2d3c17ba;
    puVar17[2] = 0x5187e1b1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd5f0,puVar17,&DAT_70b0e000);
    puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fec);
    *puVar18 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1fdc);
  uVar9 = uStack_30;
  if (pbVar11[0xc] != 0) {
    *pbVar11 = *pbVar11 ^ 0xd7;
    pbVar11[1] = pbVar11[1] ^ 0x99;
    pbVar11[2] = pbVar11[2] ^ 0xf7;
    pbVar11[3] = pbVar11[3] ^ 0x51;
    pbVar11[0xc] = 0;
    pbVar11[4] = pbVar11[4] ^ 0xd9;
    pbVar11[5] = pbVar11[5] ^ 99;
    pbVar11[6] = pbVar11[6] ^ 0x4f;
    pbVar11[7] = pbVar11[7] ^ 3;
    pbVar11[8] = pbVar11[8] ^ 0xd7;
    pbVar11[9] = pbVar11[9] ^ 0x99;
    pbVar11[10] = pbVar11[10] ^ 0xf7;
    pbVar11[0xb] = pbVar11[0xb] ^ 0x51;
  }
  uVar22 = uStack_28;
  if ((uStack_30 & 1) == 0) {
    uVar22 = uVar12;
  }
  iVar13 = imp_strlen(pbVar11);
  if (iVar13 == 0) {
LAB_714bc568:
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c200c);
    if (*pcVar10 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ffc);
      *(undefined1 *)((int)puVar17 + 0x11) = 1;
      uVar4 = DAT_7008197c;
      uVar3 = DAT_70081978;
      uVar2 = DAT_70081974;
      *puVar17 = DAT_70081970;
      puVar17[1] = uVar2;
      puVar17[2] = uVar3;
      puVar17[3] = uVar4;
      *(undefined1 *)(puVar17 + 4) = DAT_70081980;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd61c,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c200c);
      *puVar18 = 1;
    }
    iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1ffc);
    if (*(char *)(iVar13 + 0x11) != '\0') {
      uVar9 = 0;
      uVar22 = 0;
      do {
        iVar24 = (uVar9 & 7) * 8;
        uVar19 = iVar24 - 0x20;
        bVar8 = (byte)(0x51f799d7 >> iVar24) | (byte)(0x34f63d9 << ((uVar9 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar19) {
          bVar8 = (byte)(0x34f63d9 >> (uVar19 & 0xff));
        }
        *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
        bVar26 = 0xfffffffe < uVar9;
        bVar25 = uVar22 == 0;
        bVar1 = (0xf < uVar9) <= uVar22;
        uVar9 = uVar9 + 1;
        uVar22 = uVar22 + bVar26;
      } while (bVar25 && bVar1);
      *(undefined1 *)(iVar13 + 0x11) = 0;
    }
    pbVar11 = (byte *)imp_strlen(iVar13);
    if ((byte *)0xfffffff7 < pbVar11) {
LAB_714be540:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_48);
    }
    if (pbVar11 < (byte *)0xb) {
      uVar9 = (uint)&uStack_48 | 1;
      uStack_48 = CONCAT31(uStack_48._1_3_,(char)((int)pbVar11 << 1));
      if (pbVar11 != (byte *)0x0) goto LAB_714bc658;
    }
    else {
      uVar9 = thunk_MwhHq(((uint)pbVar11 | 7) + 1);
      uStack_48 = ((uint)pbVar11 | 7) + 2;
      pbStack_44 = pbVar11;
      uStack_40 = uVar9;
LAB_714bc658:
      imp___aeabi_memmove(uVar9,iVar13,pbVar11);
    }
    pbVar11[uVar9] = 0;
    iVar13 = FUN_714c1ac8(&uStack_48);
    if ((uStack_48 & 1) != 0) {
      thunk_qNQrlu(uStack_40);
    }
    if (iVar13 == 0) goto LAB_714bc734;
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c202c);
    if (*pcVar10 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c201c);
      *(undefined1 *)((int)puVar17 + 0x11) = 1;
      uVar4 = DAT_70081994;
      uVar3 = DAT_70081990;
      uVar2 = DAT_7008198c;
      *puVar17 = DAT_70081988;
      puVar17[1] = uVar2;
      puVar17[2] = uVar3;
      puVar17[3] = uVar4;
      *(undefined1 *)(puVar17 + 4) = DAT_70081998;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd650,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c202c);
      *puVar18 = 1;
    }
    iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c201c);
    if (*(char *)(iVar13 + 0x11) != '\0') {
      uVar9 = 0;
      uVar22 = 0;
      do {
        iVar24 = (uVar9 & 7) * 8;
        uVar12 = iVar24 - 0x20;
        bVar8 = (byte)(0x8187c1a1 >> iVar24) |
                (byte)(-0x44d882ef << ((uVar9 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar12) {
          bVar8 = (byte)(0xbb277d11 >> (uVar12 & 0xff));
        }
        *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
        bVar26 = 0xfffffffe < uVar9;
        bVar25 = uVar22 == 0;
        bVar1 = (0xf < uVar9) <= uVar22;
        uVar9 = uVar9 + 1;
        uVar22 = uVar22 + bVar26;
      } while (bVar25 && bVar1);
      *(undefined1 *)(iVar13 + 0x11) = 0;
    }
  }
  else {
    uVar19 = uStack_2c;
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9 >> 1 & 0x7f;
    }
    if (iVar13 <= (int)uVar19) {
      bVar8 = *pbVar11;
      iVar24 = uVar22 + uVar19;
      uVar9 = uVar22;
      do {
        if ((0xfffffffe < uVar19 - iVar13) ||
           (iVar14 = imp_memchr(uVar9,bVar8,(uVar19 - iVar13) + 1), iVar14 == 0)) break;
        iVar15 = imp_memcmp(iVar14,pbVar11,iVar13);
        if (iVar15 == 0) {
          iVar13 = 0;
          if (iVar14 != iVar24) {
            iVar13 = iVar14 - uVar22;
          }
          if (iVar14 != iVar24 && iVar13 != -1) goto LAB_714bc568;
          break;
        }
        uVar9 = iVar14 + 1;
        uVar19 = iVar24 - uVar9;
      } while (iVar13 <= (int)uVar19);
    }
LAB_714bc734:
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c204c);
    if (*pcVar10 == '\0') {
      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c203c);
      *puVar17 = 0xbd5e8404;
      puVar17[1] = 0x2e617831;
      *(undefined1 *)((int)puVar17 + 0xb) = 1;
      *(undefined4 *)((int)puVar17 + 7) = 0x37880a2e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd684,puVar17,&DAT_70b0e000);
      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c204c);
      *puVar18 = 1;
    }
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c203c);
    uVar9 = uStack_30;
    if (pbVar11[0xb] != 0) {
      *pbVar11 = *pbVar11 ^ 0x69;
      pbVar11[1] = pbVar11[1] ^ 0xe5;
      pbVar11[2] = pbVar11[2] ^ 0x37;
      pbVar11[3] = pbVar11[3] ^ 0xd3;
      pbVar11[0xb] = 0;
      pbVar11[4] = pbVar11[4] ^ 0x47;
      pbVar11[5] = pbVar11[5] ^ 0x49;
      pbVar11[6] = pbVar11[6] ^ 0x4f;
      pbVar11[7] = pbVar11[7] ^ 0x5d;
      pbVar11[8] = pbVar11[8] ^ 0x69;
      pbVar11[9] = pbVar11[9] ^ 0xe5;
      pbVar11[10] = pbVar11[10] ^ 0x37;
    }
    uVar22 = uStack_28;
    if ((uStack_30 & 1) == 0) {
      uVar22 = uVar12;
    }
    iVar13 = imp_strlen(pbVar11);
    if (iVar13 == 0) {
LAB_714bce24:
      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c206c);
      if (*pcVar10 == '\0') {
        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c205c);
        *(undefined1 *)(puVar17 + 6) = 1;
        uVar6 = DAT_700819b4;
        uVar5 = DAT_700819b0;
        uVar4 = DAT_700819ac;
        uVar3 = DAT_700819a8;
        uVar2 = DAT_700819a4;
        *puVar17 = DAT_700819a0;
        puVar17[1] = uVar2;
        puVar17[2] = uVar3;
        puVar17[3] = uVar4;
        puVar17[4] = uVar5;
        puVar17[5] = uVar6;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd6b0,puVar17,&DAT_70b0e000);
        puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c206c);
        *puVar18 = 1;
      }
      iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c205c);
      if (*(char *)(iVar13 + 0x18) != '\0') {
        uVar9 = 0;
        uVar22 = 0;
        do {
          iVar24 = (uVar9 & 7) * 8;
          uVar12 = iVar24 - 0x20;
          bVar8 = (byte)(0xa37d05d7 >> iVar24) |
                  (byte)(-0x5c94fc2d << ((uVar9 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar12) {
            bVar8 = (byte)(0xa36b03d3 >> (uVar12 & 0xff));
          }
          *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
          bVar26 = 0xfffffffe < uVar9;
          bVar25 = uVar22 == 0;
          bVar1 = (0x16 < uVar9) <= uVar22;
          uVar9 = uVar9 + 1;
          uVar22 = uVar22 + bVar26;
        } while (bVar25 && bVar1);
LAB_714bd198:
        *(undefined1 *)(iVar13 + 0x18) = 0;
      }
    }
    else {
      uVar19 = uStack_2c;
      if ((uVar9 & 1) == 0) {
        uVar19 = uVar9 >> 1 & 0x7f;
      }
      if (iVar13 <= (int)uVar19) {
        bVar8 = *pbVar11;
        iVar24 = uVar22 + uVar19;
        uVar9 = uVar22;
        do {
          if ((0xfffffffe < uVar19 - iVar13) ||
             (iVar14 = imp_memchr(uVar9,bVar8,(uVar19 - iVar13) + 1), iVar14 == 0)) break;
          iVar15 = imp_memcmp(iVar14,pbVar11,iVar13);
          if (iVar15 == 0) {
            iVar13 = 0;
            if (iVar14 != iVar24) {
              iVar13 = iVar14 - uVar22;
            }
            if (iVar14 != iVar24 && iVar13 != -1) goto LAB_714bce24;
            break;
          }
          uVar9 = iVar14 + 1;
          uVar19 = iVar24 - uVar9;
        } while (iVar13 <= (int)uVar19);
      }
      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c208c);
      if (*pcVar10 == '\0') {
        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c207c);
        *(undefined2 *)(puVar17 + 3) = 0x181;
        *puVar17 = 0xa853a6ea;
        puVar17[1] = 0x96674df1;
        puVar17[2] = 0xa64cacb7;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd6e8,puVar17,&DAT_70b0e000);
        puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c208c);
        *puVar18 = 1;
      }
      pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c207c);
      uVar9 = uStack_30;
      if (pbVar11[0xd] != 0) {
        *pbVar11 = *pbVar11 ^ 0x99;
        pbVar11[1] = pbVar11[1] ^ 0xc5;
        pbVar11[2] = pbVar11[2] ^ 0x21;
        pbVar11[3] = pbVar11[3] ^ 0xc1;
        pbVar11[0xd] = 0;
        pbVar11[4] = pbVar11[4] ^ 0x81;
        pbVar11[5] = pbVar11[5] ^ 0x39;
        pbVar11[6] = pbVar11[6] ^ 0x11;
        pbVar11[7] = pbVar11[7] ^ 0xa7;
        pbVar11[8] = pbVar11[8] ^ 0x99;
        pbVar11[9] = pbVar11[9] ^ 0xc5;
        pbVar11[10] = pbVar11[10] ^ 0x21;
        pbVar11[0xb] = pbVar11[0xb] ^ 0xc1;
        pbVar11[0xc] = pbVar11[0xc] ^ 0x81;
      }
      uVar22 = uStack_28;
      if ((uStack_30 & 1) == 0) {
        uVar22 = uVar12;
      }
      iVar13 = imp_strlen(pbVar11);
      if (iVar13 == 0) {
LAB_714bcecc:
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20ac);
        if (*pcVar10 == '\0') {
          puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c209c);
          *(undefined1 *)((int)puVar17 + 0x1a) = 1;
          uVar6 = DAT_700819cc;
          uVar5 = DAT_700819c8;
          uVar4 = DAT_700819c4;
          uVar3 = DAT_700819c0;
          uVar2 = DAT_700819bc;
          *puVar17 = DAT_700819b8;
          puVar17[1] = uVar2;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          puVar17[4] = uVar5;
          puVar17[5] = uVar6;
          *(undefined2 *)(puVar17 + 6) = DAT_700819d0;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd718,puVar17,&DAT_70b0e000);
          puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20ac);
          *puVar18 = 1;
        }
        iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c209c);
        if (*(char *)(iVar13 + 0x1a) != '\0') {
          uVar9 = 0;
          uVar22 = 0;
          do {
            iVar24 = (uVar9 & 7) * 8;
            uVar12 = iVar24 - 0x20;
            bVar8 = (byte)(0x37fd033b >> iVar24) |
                    (byte)(0x512927bb << ((uVar9 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar12) {
              bVar8 = (byte)(0x512927bb >> (uVar12 & 0xff));
            }
            *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
            bVar26 = 0xfffffffe < uVar9;
            bVar25 = uVar22 == 0;
            bVar1 = (0x18 < uVar9) <= uVar22;
            uVar9 = uVar9 + 1;
            uVar22 = uVar22 + bVar26;
          } while (bVar25 && bVar1);
          *(undefined1 *)(iVar13 + 0x1a) = 0;
        }
      }
      else {
        uVar19 = uStack_2c;
        if ((uVar9 & 1) == 0) {
          uVar19 = uVar9 >> 1 & 0x7f;
        }
        if (iVar13 <= (int)uVar19) {
          bVar8 = *pbVar11;
          iVar24 = uVar22 + uVar19;
          uVar9 = uVar22;
          do {
            if ((0xfffffffe < uVar19 - iVar13) ||
               (iVar14 = imp_memchr(uVar9,bVar8,(uVar19 - iVar13) + 1), iVar14 == 0)) break;
            iVar15 = imp_memcmp(iVar14,pbVar11,iVar13);
            if (iVar15 == 0) {
              iVar13 = 0;
              if (iVar14 != iVar24) {
                iVar13 = iVar14 - uVar22;
              }
              if (iVar14 != iVar24 && iVar13 != -1) goto LAB_714bcecc;
              break;
            }
            uVar9 = iVar14 + 1;
            uVar19 = iVar24 - uVar9;
          } while (iVar13 <= (int)uVar19);
        }
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20cc);
        if (*pcVar10 == '\0') {
          puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20bc);
          *(undefined2 *)(puVar17 + 2) = 0x1e9;
          *puVar17 = 0x5c85b299;
          puVar17[1] = 0xf4bf3afd;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd754,puVar17,&DAT_70b0e000);
          puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20cc);
          *puVar18 = 1;
        }
        pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20bc);
        uVar9 = uStack_30;
        if (pbVar11[9] != 0) {
          pbVar11[9] = 0;
          *pbVar11 = *pbVar11 ^ 0xe9;
          pbVar11[1] = pbVar11[1] ^ 0xd7;
          pbVar11[2] = pbVar11[2] ^ 0xe1;
          pbVar11[3] = pbVar11[3] ^ 0x2f;
          pbVar11[4] = pbVar11[4] ^ 0xd3;
          pbVar11[5] = pbVar11[5] ^ 0x53;
          pbVar11[6] = pbVar11[6] ^ 0xdb;
          pbVar11[7] = pbVar11[7] ^ 0x91;
          pbVar11[8] = pbVar11[8] ^ 0xe9;
        }
        uVar22 = uStack_28;
        if ((uStack_30 & 1) == 0) {
          uVar22 = uVar12;
        }
        iVar13 = imp_strlen(pbVar11);
        if (iVar13 != 0) {
          uVar12 = uStack_2c;
          if ((uVar9 & 1) == 0) {
            uVar12 = uVar9 >> 1 & 0x7f;
          }
          if (iVar13 <= (int)uVar12) {
            bVar8 = *pbVar11;
            iVar24 = uVar22 + uVar12;
            uVar9 = uVar22;
            do {
              if ((0xfffffffe < uVar12 - iVar13) ||
                 (iVar14 = imp_memchr(uVar9,bVar8,(uVar12 - iVar13) + 1), iVar14 == 0)) break;
              iVar15 = imp_memcmp(iVar14,pbVar11,iVar13);
              if (iVar15 == 0) {
                iVar13 = 0;
                if (iVar14 != iVar24) {
                  iVar13 = iVar14 - uVar22;
                }
                if (iVar14 != iVar24 && iVar13 != -1) goto LAB_714bd108;
                break;
              }
              uVar9 = iVar14 + 1;
              uVar12 = iVar24 - uVar9;
            } while (iVar13 <= (int)uVar12);
          }
          pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c210c);
          if (*pcVar10 == '\0') {
            puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20fc);
            *(undefined2 *)(puVar17 + 3) = 0x193;
            *puVar17 = 0xd891b229;
            puVar17[1] = 0x1ae40ff0;
            puVar17[2] = 0xd49dbe71;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd7b8,puVar17,&DAT_70b0e000);
            puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c210c);
            *puVar18 = 1;
          }
          pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20fc);
          if (pbVar11[0xd] != 0) {
            *pbVar11 = *pbVar11 ^ 0x5f;
            pbVar11[1] = pbVar11[1] ^ 0xd7;
            pbVar11[2] = pbVar11[2] ^ 0xf9;
            pbVar11[3] = pbVar11[3] ^ 0xb1;
            pbVar11[0xd] = 0;
            pbVar11[4] = pbVar11[4] ^ 0x93;
            pbVar11[5] = pbVar11[5] ^ 99;
            pbVar11[6] = pbVar11[6] ^ 0x81;
            pbVar11[7] = pbVar11[7] ^ 0x69;
            pbVar11[8] = pbVar11[8] ^ 0x5f;
            pbVar11[9] = pbVar11[9] ^ 0xd7;
            pbVar11[10] = pbVar11[10] ^ 0xf9;
            pbVar11[0xb] = pbVar11[0xb] ^ 0xb1;
            pbVar11[0xc] = pbVar11[0xc] ^ 0x93;
          }
          iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
          if (iVar13 == -1) {
            pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c214c);
            if (*pcVar10 == '\0') {
              puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c213c);
              *puVar17 = 0x77204bfa;
              puVar17[1] = 0x9d83885f;
              *(undefined1 *)(puVar17 + 2) = 1;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd824,puVar17,&DAT_70b0e000);
              puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c214c);
              *puVar18 = 1;
            }
            pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c213c);
            if (pbVar11[8] != 0) {
              pbVar11[8] = 0;
              *pbVar11 = *pbVar11 ^ 0x9d;
              pbVar11[1] = pbVar11[1] ^ 0x3f;
              pbVar11[2] = pbVar11[2] ^ 0x41;
              pbVar11[3] = pbVar11[3] ^ 0x59;
              pbVar11[4] = pbVar11[4] ^ 0x3b;
              pbVar11[5] = pbVar11[5] ^ 0xe9;
              pbVar11[6] = pbVar11[6] ^ 0xf7;
              pbVar11[7] = pbVar11[7] ^ 0x9d;
            }
            iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
            if (iVar13 == -1) {
              pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c218c);
              if (*pcVar10 == '\0') {
                puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c217c);
                *(undefined2 *)(puVar17 + 3) = 0x1b1;
                *puVar17 = 0x77a55073;
                puVar17[1] = 0x10bf70dd;
                puVar17[2] = 0x74ad5235;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd884,puVar17,&DAT_70b0e000);
                puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c218c);
                *puVar18 = 1;
              }
              pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c217c);
              if (pbVar11[0xd] != 0) {
                *pbVar11 = *pbVar11 ^ 0x1b;
                pbVar11[1] = pbVar11[1] ^ 0x31;
                pbVar11[2] = pbVar11[2] ^ 0xcb;
                pbVar11[3] = pbVar11[3] ^ 0x13;
                pbVar11[0xd] = 0;
                pbVar11[4] = pbVar11[4] ^ 0xb1;
                pbVar11[5] = pbVar11[5] ^ 0x19;
                pbVar11[6] = pbVar11[6] ^ 0xd1;
                pbVar11[7] = pbVar11[7] ^ 0x77;
                pbVar11[8] = pbVar11[8] ^ 0x1b;
                pbVar11[9] = pbVar11[9] ^ 0x31;
                pbVar11[10] = pbVar11[10] ^ 0xcb;
                pbVar11[0xb] = pbVar11[0xb] ^ 0x13;
                pbVar11[0xc] = pbVar11[0xc] ^ 0xb1;
              }
              iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
              if (iVar13 == -1) {
                pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21cc);
                if (*pcVar10 == '\0') {
                  puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21bc);
                  *puVar17 = 0x6daa2ce4;
                  puVar17[1] = 0x43b92126;
                  *(undefined1 *)((int)puVar17 + 0xb) = 1;
                  *(undefined4 *)((int)puVar17 + 7) = 0xcb3df243;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd8f0,puVar17,&DAT_70b0e000);
                  puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21cc);
                  *puVar18 = 1;
                }
                pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21bc);
                if (pbVar11[0xb] != 0) {
                  *pbVar11 = *pbVar11 ^ 0x93;
                  pbVar11[1] = pbVar11[1] ^ 0x49;
                  pbVar11[2] = pbVar11[2] ^ 0xcb;
                  pbVar11[3] = pbVar11[3] ^ 0x1d;
                  pbVar11[0xb] = 0;
                  pbVar11[4] = pbVar11[4] ^ 0x49;
                  pbVar11[5] = pbVar11[5] ^ 0x4f;
                  pbVar11[6] = pbVar11[6] ^ 0x97;
                  pbVar11[7] = pbVar11[7] ^ 0x27;
                  pbVar11[8] = pbVar11[8] ^ 0x93;
                  pbVar11[9] = pbVar11[9] ^ 0x49;
                  pbVar11[10] = pbVar11[10] ^ 0xcb;
                }
                iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
                if (iVar13 == -1) {
                  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c220c);
                  if (*pcVar10 == '\0') {
                    puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21fc);
                    *puVar17 = 0x215b6ca7;
                    puVar17[1] = 0xbfbf8f26;
                    *(undefined1 *)(puVar17 + 2) = 1;
                    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd958,puVar17,&DAT_70b0e000);
                    puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c220c);
                    *puVar18 = 1;
                  }
                  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21fc);
                  if (pbVar11[8] != 0) {
                    pbVar11[8] = 0;
                    *pbVar11 = *pbVar11 ^ 0xd7;
                    pbVar11[1] = pbVar11[1] ^ 9;
                    pbVar11[2] = pbVar11[2] ^ 0x3f;
                    pbVar11[3] = pbVar11[3] ^ 0xf;
                    pbVar11[4] = pbVar11[4] ^ 0x4f;
                    pbVar11[5] = pbVar11[5] ^ 0xe9;
                    pbVar11[6] = pbVar11[6] ^ 0xcf;
                    pbVar11[7] = pbVar11[7] ^ 0xbf;
                  }
                  iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
                  if (iVar13 == -1) {
                    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c224c);
                    if (*pcVar10 == '\0') {
                      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c223c);
                      *puVar17 = 0xaa558548;
                      puVar17[1] = 0x5cb3023c;
                      *(undefined1 *)((int)puVar17 + 0xb) = 1;
                      *(undefined4 *)((int)puVar17 + 7) = 0x2798555c;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd9b8,puVar17,&DAT_70b0e000);
                      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c224c);
                      *puVar18 = 1;
                    }
                    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c223c);
                    if (pbVar11[0xb] != 0) {
                      *pbVar11 = *pbVar11 ^ 0x3b;
                      pbVar11[1] = pbVar11[1] ^ 0xf1;
                      pbVar11[2] = pbVar11[2] ^ 0x27;
                      pbVar11[3] = pbVar11[3] ^ 0xcf;
                      pbVar11[0xb] = 0;
                      pbVar11[4] = pbVar11[4] ^ 0x5d;
                      pbVar11[5] = pbVar11[5] ^ 0x6f;
                      pbVar11[6] = pbVar11[6] ^ 0x9d;
                      pbVar11[7] = pbVar11[7] ^ 0x35;
                      pbVar11[8] = pbVar11[8] ^ 0x3b;
                      pbVar11[9] = pbVar11[9] ^ 0xf1;
                      pbVar11[10] = pbVar11[10] ^ 0x27;
                    }
                    iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
                    if (iVar13 == -1) {
                      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c228c);
                      if (*pcVar10 == '\0') {
                        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c227c);
                        *(undefined1 *)((int)puVar17 + 0x15) = 1;
                        uVar5 = DAT_70081a90;
                        uVar4 = DAT_70081a8c;
                        uVar3 = DAT_70081a88;
                        uVar2 = DAT_70081a84;
                        *puVar17 = DAT_70081a80;
                        puVar17[1] = uVar2;
                        puVar17[2] = uVar3;
                        puVar17[3] = uVar4;
                        puVar17[4] = uVar5;
                        *(undefined1 *)(puVar17 + 5) = DAT_70081a94;
                        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cda14,puVar17,&DAT_70b0e000);
                        puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c228c);
                        *puVar18 = 1;
                      }
                      iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c227c);
                      if (*(char *)(iVar13 + 0x15) != '\0') {
                        uVar9 = 0;
                        uVar22 = 0;
                        do {
                          iVar24 = (uVar9 & 7) * 8;
                          uVar12 = iVar24 - 0x20;
                          bVar8 = (byte)(0xffc5852b >> iVar24) |
                                  (byte)(0x416d952b << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                          if (-1 < (int)uVar12) {
                            bVar8 = (byte)(0x416d952b >> (uVar12 & 0xff));
                          }
                          *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                          bVar26 = 0xfffffffe < uVar9;
                          bVar25 = uVar22 == 0;
                          bVar1 = (0x13 < uVar9) <= uVar22;
                          uVar9 = uVar9 + 1;
                          uVar22 = uVar22 + bVar26;
                        } while (bVar25 && bVar1);
                        *(undefined1 *)(iVar13 + 0x15) = 0;
                      }
                      iVar13 = FUN_714bb604(&uStack_30,iVar13,0);
                      if (iVar13 == -1) {
                        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22cc);
                        if (*pcVar10 == '\0') {
                          puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22bc);
                          *(undefined1 *)((int)puVar17 + 0x11) = 1;
                          uVar4 = DAT_70081ac4;
                          uVar3 = DAT_70081ac0;
                          uVar2 = DAT_70081abc;
                          *puVar17 = DAT_70081ab8;
                          puVar17[1] = uVar2;
                          puVar17[2] = uVar3;
                          puVar17[3] = uVar4;
                          *(undefined1 *)(puVar17 + 4) = DAT_70081ac8;
                          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cda88,puVar17,&DAT_70b0e000);
                          puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22cc);
                          *puVar18 = 1;
                        }
                        iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22bc);
                        if (*(char *)(iVar13 + 0x11) != '\0') {
                          uVar9 = 0;
                          uVar22 = 0;
                          do {
                            iVar24 = (uVar9 & 7) * 8;
                            uVar12 = iVar24 - 0x20;
                            bVar8 = (byte)(0x3d757b91 >> iVar24) |
                                    (byte)(0x75d74d17 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                            if (-1 < (int)uVar12) {
                              bVar8 = (byte)(0x75d74d17 >> (uVar12 & 0xff));
                            }
                            *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                            bVar26 = 0xfffffffe < uVar9;
                            bVar25 = uVar22 == 0;
                            bVar1 = (0xf < uVar9) <= uVar22;
                            uVar9 = uVar9 + 1;
                            uVar22 = uVar22 + bVar26;
                          } while (bVar25 && bVar1);
                          *(undefined1 *)(iVar13 + 0x11) = 0;
                        }
                        iVar13 = FUN_714bb604(&uStack_30,iVar13,0);
                        if (iVar13 == -1) {
                          pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c230c);
                          if (*pcVar10 == '\0') {
                            puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22fc);
                            *puVar17 = 0x4ee3860;
                            puVar17[1] = 0x19ebe455;
                            *(undefined1 *)((int)puVar17 + 0xb) = 1;
                            *(undefined4 *)((int)puVar17 + 7) = 0x8f2f6b19;
                            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdaf4,puVar17,&DAT_70b0e000);
                            puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c230c);
                            *puVar18 = 1;
                          }
                          pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22fc);
                          if (pbVar11[0xb] != 0) {
                            *pbVar11 = *pbVar11 ^ 0x13;
                            pbVar11[1] = pbVar11[1] ^ 0x5b;
                            pbVar11[2] = pbVar11[2] ^ 0x8f;
                            pbVar11[3] = pbVar11[3] ^ 0x67;
                            pbVar11[0xb] = 0;
                            pbVar11[4] = pbVar11[4] ^ 0x3d;
                            pbVar11[5] = pbVar11[5] ^ 0x81;
                            pbVar11[6] = pbVar11[6] ^ 0xc5;
                            pbVar11[7] = pbVar11[7] ^ 0x6d;
                            pbVar11[8] = pbVar11[8] ^ 0x13;
                            pbVar11[9] = pbVar11[9] ^ 0x5b;
                            pbVar11[10] = pbVar11[10] ^ 0x8f;
                          }
                          iVar13 = FUN_714bb604(&uStack_30,pbVar11,0);
                          uVar9 = uStack_30;
                          if (iVar13 == -1) {
                            uStack_30 = 0;
                            *param_1 = uVar9;
                            param_1[1] = uStack_2c;
                            param_1[2] = uStack_28;
                            uStack_2c = 0;
                            uStack_28 = 0;
                            goto LAB_714bd208;
                          }
                          pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c232c);
                          if (*pcVar10 == '\0') {
                            puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c231c);
                            *(undefined1 *)(puVar17 + 4) = 1;
                            *puVar17 = 0x7895d2ed;
                            puVar17[1] = 0xc8cc6cb0;
                            puVar17[2] = 0x3784dbea;
                            puVar17[3] = 0xa9db67eb;
                            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdb20,puVar17,&DAT_70b0e000);
                            puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c232c);
                            *puVar18 = 1;
                          }
                          pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c231c);
                          if (pbVar11[0x10] != 0) {
                            *pbVar11 = *pbVar11 ^ 0x89;
                            pbVar11[1] = pbVar11[1] ^ 0xb3;
                            pbVar11[2] = pbVar11[2] ^ 0xe1;
                            pbVar11[3] = pbVar11[3] ^ 0x19;
                            pbVar11[0x10] = 0;
                            pbVar11[4] = pbVar11[4] ^ 0x9f;
                            pbVar11[5] = pbVar11[5] ^ 0x1f;
                            pbVar11[6] = pbVar11[6] ^ 0xaf;
                            pbVar11[7] = pbVar11[7] ^ 0xa9;
                            pbVar11[8] = pbVar11[8] ^ 0x89;
                            pbVar11[9] = pbVar11[9] ^ 0xb3;
                            pbVar11[10] = pbVar11[10] ^ 0xe1;
                            pbVar11[0xb] = pbVar11[0xb] ^ 0x19;
                            pbVar11[0xc] = pbVar11[0xc] ^ 0x9f;
                            pbVar11[0xd] = pbVar11[0xd] ^ 0x1f;
                            pbVar11[0xe] = pbVar11[0xe] ^ 0xaf;
                            pbVar11[0xf] = pbVar11[0xf] ^ 0xa9;
                          }
                        }
                        else {
                          pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22ec);
                          if (*pcVar10 == '\0') {
                            puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22dc);
                            *(undefined1 *)((int)puVar17 + 0x16) = 1;
                            uVar5 = DAT_70081ae0;
                            uVar4 = DAT_70081adc;
                            uVar3 = DAT_70081ad8;
                            uVar2 = DAT_70081ad4;
                            *puVar17 = DAT_70081ad0;
                            puVar17[1] = uVar2;
                            puVar17[2] = uVar3;
                            puVar17[3] = uVar4;
                            puVar17[4] = uVar5;
                            *(undefined2 *)(puVar17 + 5) = DAT_70081ae4;
                            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdabc,puVar17,&DAT_70b0e000);
                            puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22ec);
                            *puVar18 = 1;
                          }
                          iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22dc);
                          if (*(char *)(iVar13 + 0x16) != '\0') {
                            uVar9 = 0;
                            uVar22 = 0;
                            do {
                              iVar24 = (uVar9 & 7) * 8;
                              uVar12 = iVar24 - 0x20;
                              bVar8 = (byte)(0x7d45f9c1 >> iVar24) |
                                      (byte)(0x5dc79f67 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                              if (-1 < (int)uVar12) {
                                bVar8 = (byte)(0x5dc79f67 >> (uVar12 & 0xff));
                              }
                              *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                              bVar26 = 0xfffffffe < uVar9;
                              bVar25 = uVar22 == 0;
                              bVar1 = (0x14 < uVar9) <= uVar22;
                              uVar9 = uVar9 + 1;
                              uVar22 = uVar22 + bVar26;
                            } while (bVar25 && bVar1);
                            *(undefined1 *)(iVar13 + 0x16) = 0;
                          }
                        }
                        FUN_71315100(param_1);
                        goto LAB_714bd208;
                      }
                      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22ac);
                      if (*pcVar10 == '\0') {
                        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c229c);
                        *(undefined1 *)((int)puVar17 + 0x1a) = 1;
                        uVar6 = DAT_70081aac;
                        uVar5 = DAT_70081aa8;
                        uVar4 = DAT_70081aa4;
                        uVar3 = DAT_70081aa0;
                        uVar2 = DAT_70081a9c;
                        *puVar17 = DAT_70081a98;
                        puVar17[1] = uVar2;
                        puVar17[2] = uVar3;
                        puVar17[3] = uVar4;
                        puVar17[4] = uVar5;
                        puVar17[5] = uVar6;
                        *(undefined2 *)(puVar17 + 6) = DAT_70081ab0;
                        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cda4c,puVar17,&DAT_70b0e000);
                        puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c22ac);
                        *puVar18 = 1;
                      }
                      iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c229c);
                      if (*(char *)(iVar13 + 0x1a) != '\0') {
                        uVar9 = 0;
                        uVar22 = 0;
                        do {
                          iVar24 = (uVar9 & 7) * 8;
                          uVar12 = iVar24 - 0x20;
                          bVar8 = (byte)(0x2d030fc5 >> iVar24) |
                                  (byte)(0x7f93a7e9 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                          if (-1 < (int)uVar12) {
                            bVar8 = (byte)(0x7f93a7e9 >> (uVar12 & 0xff));
                          }
                          *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                          bVar26 = 0xfffffffe < uVar9;
                          bVar25 = uVar22 == 0;
                          bVar1 = (0x18 < uVar9) <= uVar22;
                          uVar9 = uVar9 + 1;
                          uVar22 = uVar22 + bVar26;
                        } while (bVar25 && bVar1);
                        goto LAB_714bd390;
                      }
                    }
                    else {
                      pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c226c);
                      if (*pcVar10 == '\0') {
                        puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c225c);
                        *(undefined1 *)(puVar17 + 4) = 1;
                        *puVar17 = 0x6951c57;
                        puVar17[1] = 0xa74fe2a0;
                        puVar17[2] = 0x498c1c56;
                        puVar17[3] = 0xd552ffe6;
                        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd9e4,puVar17,&DAT_70b0e000);
                        puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c226c);
                        *puVar18 = 1;
                      }
                      pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c225c);
                      if (pbVar11[0x10] != 0) {
                        *pbVar11 = *pbVar11 ^ 0x33;
                        pbVar11[1] = pbVar11[1] ^ 0x7d;
                        pbVar11[2] = pbVar11[2] ^ 0xe1;
                        pbVar11[3] = pbVar11[3] ^ 0x67;
                        pbVar11[0x10] = 0;
                        pbVar11[4] = pbVar11[4] ^ 0x8f;
                        pbVar11[5] = pbVar11[5] ^ 0x91;
                        pbVar11[6] = pbVar11[6] ^ 0x3b;
                        pbVar11[7] = pbVar11[7] ^ 0xd5;
                        pbVar11[8] = pbVar11[8] ^ 0x33;
                        pbVar11[9] = pbVar11[9] ^ 0x7d;
                        pbVar11[10] = pbVar11[10] ^ 0xe1;
                        pbVar11[0xb] = pbVar11[0xb] ^ 0x67;
                        pbVar11[0xc] = pbVar11[0xc] ^ 0x8f;
                        pbVar11[0xd] = pbVar11[0xd] ^ 0x91;
                        pbVar11[0xe] = pbVar11[0xe] ^ 0x3b;
                        pbVar11[0xf] = pbVar11[0xf] ^ 0xd5;
                      }
                    }
                  }
                  else {
                    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c222c);
                    if (*pcVar10 == '\0') {
                      puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c221c);
                      *(undefined1 *)((int)puVar17 + 0x17) = 1;
                      uVar5 = DAT_70081a78;
                      uVar4 = DAT_70081a74;
                      uVar3 = DAT_70081a70;
                      uVar2 = DAT_70081a6c;
                      *puVar17 = DAT_70081a68;
                      puVar17[1] = uVar2;
                      puVar17[2] = uVar3;
                      puVar17[3] = uVar4;
                      puVar17[4] = uVar5;
                      uVar7 = DAT_70081a7e;
                      *(undefined2 *)(puVar17 + 5) = DAT_70081a7c;
                      *(undefined1 *)((int)puVar17 + 0x16) = uVar7;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd980,puVar17,&DAT_70b0e000);
                      puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c222c);
                      *puVar18 = 1;
                    }
                    iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c221c);
                    if (*(char *)(iVar13 + 0x17) != '\0') {
                      uVar9 = 0;
                      uVar22 = 0;
                      do {
                        iVar24 = (uVar9 & 7) * 8;
                        uVar12 = iVar24 - 0x20;
                        bVar8 = (byte)(0x933d6703 >> iVar24) |
                                (byte)(-0x369a9aff << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                        if (-1 < (int)uVar12) {
                          bVar8 = (byte)(0xc9656501 >> (uVar12 & 0xff));
                        }
                        *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                        bVar26 = 0xfffffffe < uVar9;
                        bVar25 = uVar22 == 0;
                        bVar1 = (0x15 < uVar9) <= uVar22;
                        uVar9 = uVar9 + 1;
                        uVar22 = uVar22 + bVar26;
                      } while (bVar25 && bVar1);
                      goto LAB_714bcdfc;
                    }
                  }
                }
                else {
                  pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21ec);
                  if (*pcVar10 == '\0') {
                    puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21dc);
                    *(undefined1 *)((int)puVar17 + 0x1a) = 1;
                    uVar6 = DAT_70081a5c;
                    uVar5 = DAT_70081a58;
                    uVar4 = DAT_70081a54;
                    uVar3 = DAT_70081a50;
                    uVar2 = DAT_70081a4c;
                    *puVar17 = DAT_70081a48;
                    puVar17[1] = uVar2;
                    puVar17[2] = uVar3;
                    puVar17[3] = uVar4;
                    puVar17[4] = uVar5;
                    puVar17[5] = uVar6;
                    *(undefined2 *)(puVar17 + 6) = DAT_70081a60;
                    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd91c,puVar17,&DAT_70b0e000);
                    puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21ec);
                    *puVar18 = 1;
                  }
                  iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21dc);
                  if (*(char *)(iVar13 + 0x1a) != '\0') {
                    uVar9 = 0;
                    uVar22 = 0;
                    do {
                      iVar24 = (uVar9 & 7) * 8;
                      uVar12 = iVar24 - 0x20;
                      bVar8 = (byte)(0xbbd7bd25 >> iVar24) |
                              (byte)(-0x4b0bc1b << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                      if (-1 < (int)uVar12) {
                        bVar8 = (byte)(0xfb4f43e5 >> (uVar12 & 0xff));
                      }
                      *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                      bVar26 = 0xfffffffe < uVar9;
                      bVar25 = uVar22 == 0;
                      bVar1 = (0x18 < uVar9) <= uVar22;
                      uVar9 = uVar9 + 1;
                      uVar22 = uVar22 + bVar26;
                    } while (bVar25 && bVar1);
LAB_714bd390:
                    *(undefined1 *)(iVar13 + 0x1a) = 0;
                  }
                }
              }
              else {
                pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21ac);
                if (*pcVar10 == '\0') {
                  puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c219c);
                  *(undefined1 *)(puVar17 + 7) = 1;
                  uVar3 = DAT_70081a30;
                  uVar2 = DAT_70081a2c;
                  *puVar17 = DAT_70081a28;
                  puVar17[1] = uVar2;
                  puVar17[2] = uVar3;
                  uVar4 = DAT_70081a40;
                  uVar3 = DAT_70081a3c;
                  uVar2 = DAT_70081a38;
                  puVar17[3] = DAT_70081a34;
                  puVar17[4] = uVar2;
                  puVar17[5] = uVar3;
                  puVar17[6] = uVar4;
                  thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd8b4,puVar17,&DAT_70b0e000);
                  puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c21ac);
                  *puVar18 = 1;
                }
                iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c219c);
                if (*(char *)(iVar13 + 0x1c) != '\0') {
                  uVar9 = 0;
                  uVar22 = 0;
                  do {
                    iVar24 = (uVar9 & 7) * 8;
                    uVar12 = iVar24 - 0x20;
                    bVar8 = (byte)(0x5db1f189 >> iVar24) |
                            (byte)(0x117f29cb << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                    if (-1 < (int)uVar12) {
                      bVar8 = (byte)(0x117f29cb >> (uVar12 & 0xff));
                    }
                    *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                    bVar26 = 0xfffffffe < uVar9;
                    bVar25 = uVar22 == 0;
                    bVar1 = (0x1a < uVar9) <= uVar22;
                    uVar9 = uVar9 + 1;
                    uVar22 = uVar22 + bVar26;
                  } while (bVar25 && bVar1);
                  goto LAB_714bcba4;
                }
              }
            }
            else {
              pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c216c);
              if (*pcVar10 == '\0') {
                puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c215c);
                *(undefined1 *)((int)puVar17 + 0x17) = 1;
                uVar5 = DAT_70081a20;
                uVar4 = DAT_70081a1c;
                uVar3 = DAT_70081a18;
                uVar2 = DAT_70081a14;
                *puVar17 = DAT_70081a10;
                puVar17[1] = uVar2;
                puVar17[2] = uVar3;
                puVar17[3] = uVar4;
                puVar17[4] = uVar5;
                uVar7 = DAT_70081a26;
                *(undefined2 *)(puVar17 + 5) = DAT_70081a24;
                *(undefined1 *)((int)puVar17 + 0x16) = uVar7;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd84c,puVar17,&DAT_70b0e000);
                puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c216c);
                *puVar18 = 1;
              }
              iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c215c);
              if (*(char *)(iVar13 + 0x17) != '\0') {
                uVar9 = 0;
                uVar22 = 0;
                do {
                  iVar24 = (uVar9 & 7) * 8;
                  uVar12 = iVar24 - 0x20;
                  bVar8 = (byte)(0x339575d5 >> iVar24) |
                          (byte)(-0x646c7225 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar12) {
                    bVar8 = (byte)(0x9b938ddb >> (uVar12 & 0xff));
                  }
                  *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                  bVar26 = 0xfffffffe < uVar9;
                  bVar25 = uVar22 == 0;
                  bVar1 = (0x15 < uVar9) <= uVar22;
                  uVar9 = uVar9 + 1;
                  uVar22 = uVar22 + bVar26;
                } while (bVar25 && bVar1);
LAB_714bcdfc:
                *(undefined1 *)(iVar13 + 0x17) = 0;
              }
            }
          }
          else {
            pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c212c);
            if (*pcVar10 == '\0') {
              puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c211c);
              *(undefined1 *)(puVar17 + 7) = 1;
              uVar3 = DAT_700819f8;
              uVar2 = DAT_700819f4;
              *puVar17 = DAT_700819f0;
              puVar17[1] = uVar2;
              puVar17[2] = uVar3;
              uVar4 = DAT_70081a08;
              uVar3 = DAT_70081a04;
              uVar2 = DAT_70081a00;
              puVar17[3] = DAT_700819fc;
              puVar17[4] = uVar2;
              puVar17[5] = uVar3;
              puVar17[6] = uVar4;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd7e8,puVar17,&DAT_70b0e000);
              puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c212c);
              *puVar18 = 1;
            }
            iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c211c);
            if (*(char *)(iVar13 + 0x1c) != '\0') {
              uVar9 = 0;
              uVar22 = 0;
              do {
                iVar24 = (uVar9 & 7) * 8;
                uVar12 = iVar24 - 0x20;
                bVar8 = (byte)(0x73a75bb1 >> iVar24) |
                        (byte)(0x271d9f5f << ((uVar9 & 7) * -8 + 0x20 & 0xff));
                if (-1 < (int)uVar12) {
                  bVar8 = (byte)(0x271d9f5f >> (uVar12 & 0xff));
                }
                *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
                bVar26 = 0xfffffffe < uVar9;
                bVar25 = uVar22 == 0;
                bVar1 = (0x1a < uVar9) <= uVar22;
                uVar9 = uVar9 + 1;
                uVar22 = uVar22 + bVar26;
              } while (bVar25 && bVar1);
LAB_714bcba4:
              *(undefined1 *)(iVar13 + 0x1c) = 0;
            }
          }
          FUN_71315100(param_1);
          goto LAB_714bd208;
        }
LAB_714bd108:
        pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20ec);
        if (*pcVar10 == '\0') {
          puVar17 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20dc);
          *(undefined1 *)(puVar17 + 6) = 1;
          uVar6 = DAT_700819ec;
          uVar5 = DAT_700819e8;
          uVar4 = DAT_700819e4;
          uVar3 = DAT_700819e0;
          uVar2 = DAT_700819dc;
          *puVar17 = DAT_700819d8;
          puVar17[1] = uVar2;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          puVar17[4] = uVar5;
          puVar17[5] = uVar6;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cd780,puVar17,&DAT_70b0e000);
          puVar18 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20ec);
          *puVar18 = 1;
        }
        iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c20dc);
        if (*(char *)(iVar13 + 0x18) != '\0') {
          uVar9 = 0;
          uVar22 = 0;
          do {
            iVar24 = (uVar9 & 7) * 8;
            uVar12 = iVar24 - 0x20;
            bVar8 = (byte)(0xad45f141 >> iVar24) |
                    (byte)(-0x5e68dea5 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar12) {
              bVar8 = (byte)(0xa197215b >> (uVar12 & 0xff));
            }
            *(byte *)(iVar13 + uVar9) = *(byte *)(iVar13 + uVar9) ^ bVar8;
            bVar26 = 0xfffffffe < uVar9;
            bVar25 = uVar22 == 0;
            bVar1 = (0x16 < uVar9) <= uVar22;
            uVar9 = uVar9 + 1;
            uVar22 = uVar22 + bVar26;
          } while (bVar25 && bVar1);
          goto LAB_714bd198;
        }
      }
    }
  }
  uVar9 = imp_strlen(iVar13);
  if (0xfffffff7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar9 < 0xb) {
    pbVar11 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)(uVar9 << 1);
    if (uVar9 != 0) goto LAB_714bd1f0;
  }
  else {
    pbVar11 = (byte *)thunk_MwhHq((uVar9 | 7) + 1);
    *param_1 = (uVar9 | 7) + 2;
    param_1[1] = uVar9;
    param_1[2] = (uint)pbVar11;
LAB_714bd1f0:
    imp___aeabi_memmove(pbVar11,iVar13,uVar9);
  }
  pbVar11[uVar9] = 0;
LAB_714bd208:
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_714c1ac8
// Entry: 0x714c1ac8 | Size: 1144 bytes
// =========================================================================

bool FUN_714c1ac8(byte *param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  byte abStack_30 [8];
  uint uStack_28;
  
  if (DAT_700c1e04 != 1) {
    return false;
  }
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c238c);
  if (*pcVar2 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c237c);
    *puVar8 = 0x263f7897;
    *(undefined1 *)((int)puVar8 + 6) = 1;
    *(undefined2 *)(puVar8 + 1) = 0x55ce;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdba8,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c238c);
    *puVar9 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c237c);
  if (pbVar3[6] != 0) {
    pbVar3[6] = 0;
    *pbVar3 = *pbVar3 ^ 0xf3;
    pbVar3[1] = pbVar3[1] ^ 0x19;
    pbVar3[2] = pbVar3[2] ^ 0x4b;
    pbVar3[3] = pbVar3[3] ^ 0x47;
    pbVar3[4] = pbVar3[4] ^ 0xe1;
    pbVar3[5] = pbVar3[5] ^ 0x55;
  }
  bVar1 = *param_1;
  pbVar14 = *(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar14 = param_1 + 1;
  }
  iVar4 = imp_strlen(pbVar3);
  if (iVar4 != 0) {
    uVar10 = *(uint *)(param_1 + 4);
    if ((bVar1 & 1) == 0) {
      uVar10 = (uint)(bVar1 >> 1);
    }
    if ((int)uVar10 < iVar4) {
      return false;
    }
    bVar1 = *pbVar3;
    pbVar13 = pbVar14 + uVar10;
    pbVar5 = pbVar14;
    while( true ) {
      if (0xfffffffe < uVar10 - iVar4) {
        return false;
      }
      pbVar5 = (byte *)imp_memchr(pbVar5,bVar1,(uVar10 - iVar4) + 1);
      if (pbVar5 == (byte *)0x0) {
        return false;
      }
      iVar6 = imp_memcmp(pbVar5,pbVar3,iVar4);
      if (iVar6 == 0) break;
      pbVar5 = pbVar5 + 1;
      uVar10 = (int)pbVar13 - (int)pbVar5;
      if ((int)uVar10 < iVar4) {
        return false;
      }
    }
    if (pbVar5 == pbVar13) {
      return false;
    }
    if (pbVar5 != pbVar14) {
      return false;
    }
  }
  FUN_714ba554(abStack_30,param_1,0,0,0);
  uVar10 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar10 = (uint)abStack_30 | 1;
  }
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23ac);
  if (*pcVar2 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c239c);
    *puVar8 = 0x109ed8b;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdbd0,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23ac);
    *puVar9 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c239c);
  if (pbVar3[3] != 0) {
    pbVar3[3] = 0;
    *pbVar3 = *pbVar3 ^ 0xf9;
    pbVar3[1] = pbVar3[1] ^ 0x8f;
    pbVar3[2] = pbVar3[2] ^ 9;
  }
  iVar4 = imp_fopen(uVar10);
  if (iVar4 != 0) {
    imp_fclose();
    bVar15 = true;
    goto LAB_714c1e20;
  }
  bVar15 = false;
  iVar4 = FUN_714c4db0();
  if (iVar4 == 0) goto LAB_714c1e20;
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23cc);
  if (*pcVar2 == '\0') {
    puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23bc);
    *puVar8 = 0xd6a5caf3;
    *(undefined1 *)((int)puVar8 + 6) = 1;
    *(undefined2 *)(puVar8 + 1) = 0xe1ce;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdbf8,puVar8,&DAT_70b0e000);
    puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23cc);
    *puVar9 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23bc);
  if (pbVar3[6] != 0) {
    pbVar3[6] = 0;
    *pbVar3 = *pbVar3 ^ 0x97;
    pbVar3[1] = pbVar3[1] ^ 0xab;
    pbVar3[2] = pbVar3[2] ^ 0xd1;
    pbVar3[3] = pbVar3[3] ^ 0xb7;
    pbVar3[4] = pbVar3[4] ^ 0xe1;
    pbVar3[5] = pbVar3[5] ^ 0xe1;
  }
  uVar7 = imp_strlen();
  bVar1 = *param_1;
  uVar10 = *(uint *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    uVar10 = (uint)(bVar1 >> 1);
  }
  if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6b48(&uStack_3c);
  }
  uVar11 = uVar10 - uVar7;
  pbVar3 = *(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_3c);
  }
  if (uVar11 < 0xb) {
    uVar12 = (uint)&uStack_3c | 1;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)uVar11 * '\x02');
    if (uVar10 != uVar7) goto LAB_714c1dd8;
  }
  else {
    uVar12 = thunk_MwhHq((uVar11 | 7) + 1);
    uStack_3c = (uVar11 | 7) + 2;
    uStack_38 = uVar11;
    uStack_34 = uVar12;
LAB_714c1dd8:
    imp___aeabi_memmove(uVar12,pbVar3 + uVar7,uVar11);
  }
  *(undefined1 *)(uVar12 + uVar11) = 0;
  iVar4 = FUN_719f84c8(&DAT_710eb1e8,&uStack_3c);
  bVar15 = iVar4 != 0;
  if ((uStack_3c & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
LAB_714c1e20:
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return bVar15;
}


// =========================================================================
// Function: FUN_714c2520
// Entry: 0x714c2520 | Size: 580 bytes
// =========================================================================

undefined * FUN_714c2520(void)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = FUN_719f8780(&DAT_710eb318);
  if (iVar1 != 0) goto LAB_714c26d4;
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c236c);
  if (*pcVar2 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c235c);
    *puVar6 = 0xe8f75c2a;
    puVar6[1] = 0x2ef14504;
    puVar6[2] = 0xe5fd5c29;
    *(undefined1 *)((int)puVar6 + 0xf) = 1;
    *(undefined4 *)((int)puVar6 + 0xb) = 0x870e07e5;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdb78,puVar6,&DAT_70b0e000);
    puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c236c);
    *puVar7 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c235c);
  if (pbVar3[0xf] != 0) {
    *pbVar3 = *pbVar3 ^ 0x4b;
    pbVar3[1] = pbVar3[1] ^ 0x29;
    pbVar3[2] = pbVar3[2] ^ 0x93;
    pbVar3[3] = pbVar3[3] ^ 0x81;
    pbVar3[0xf] = 0;
    pbVar3[4] = pbVar3[4] ^ 0x6b;
    pbVar3[5] = pbVar3[5] ^ 0x6b;
    pbVar3[6] = pbVar3[6] ^ 0x87;
    pbVar3[7] = pbVar3[7] ^ 0x49;
    pbVar3[8] = pbVar3[8] ^ 0x4b;
    pbVar3[9] = pbVar3[9] ^ 0x29;
    pbVar3[10] = pbVar3[10] ^ 0x93;
    pbVar3[0xb] = pbVar3[0xb] ^ 0x81;
    pbVar3[0xc] = pbVar3[0xc] ^ 0x6b;
    pbVar3[0xd] = pbVar3[0xd] ^ 0x6b;
    pbVar3[0xe] = pbVar3[0xe] ^ 0x87;
  }
  uVar4 = imp_strlen(pbVar3);
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar4 < 0xb) {
    uVar8 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar4 << 1));
    if (uVar4 != 0) goto LAB_714c268c;
  }
  else {
    uVar8 = thunk_MwhHq((uVar4 | 7) + 1);
    uStack_2c = (uVar4 | 7) + 2;
    uStack_28 = uVar4;
    uStack_24 = uVar8;
LAB_714c268c:
    imp___aeabi_memmove(uVar8,pbVar3,uVar4);
  }
  *(undefined1 *)(uVar8 + uVar4) = 0;
  FUN_719f5944(&DAT_710eb318,&uStack_2c,3,0,0);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
LAB_714c26d4:
  FUN_719f776c(&DAT_710eb318);
  iVar1 = FUN_719f8780(&DAT_710eb318);
  puVar5 = (undefined *)0x0;
  if (iVar1 != 0) {
    puVar5 = &DAT_710eb318;
  }
  return puVar5;
}


// =========================================================================
// Function: FUN_714c2a04
// Entry: 0x714c2a04 | Size: 3948 bytes
// =========================================================================

undefined4 * FUN_714c2a04(byte *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  bool bVar22;
  bool bVar23;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar5 = (undefined4 *)thunk_MwhHq(0xb0);
  imp___aeabi_memclr8(puVar5 + 2,0xa8);
  puVar5[0x1a] = 0xffffffff;
  puVar5[0x1b] = 0xffffffff;
  iVar8 = DAT_700c1e04;
  bVar22 = DAT_700c1e04 == 1;
  *puVar5 = 0;
  puVar5[1] = iVar8;
  if (bVar22) {
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23ec);
    if (*pcVar6 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23dc);
      *puVar11 = 0x48054239;
      *(undefined1 *)((int)puVar11 + 6) = 1;
      *(undefined2 *)(puVar11 + 1) = 0x1fa8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdc20,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23ec);
      *puVar12 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23dc);
    if (pbVar7[6] != 0) {
      pbVar7[6] = 0;
      *pbVar7 = *pbVar7 ^ 0x5d;
      pbVar7[1] = pbVar7[1] ^ 0x23;
      pbVar7[2] = pbVar7[2] ^ 0x71;
      pbVar7[3] = pbVar7[3] ^ 0x29;
      pbVar7[4] = pbVar7[4] ^ 0x87;
      pbVar7[5] = pbVar7[5] ^ 0x1f;
    }
    bVar13 = *param_1;
    pbVar19 = *(byte **)(param_1 + 8);
    if ((bVar13 & 1) == 0) {
      pbVar19 = param_1 + 1;
    }
    iVar8 = imp_strlen(pbVar7);
    if (iVar8 != 0) {
      uVar14 = *(uint *)(param_1 + 4);
      if ((bVar13 & 1) == 0) {
        uVar14 = (uint)(bVar13 >> 1);
      }
      if (iVar8 <= (int)uVar14) {
        bVar13 = *pbVar7;
        pbVar21 = pbVar19 + uVar14;
        pbVar10 = pbVar19;
        do {
          if ((0xfffffffe < uVar14 - iVar8) ||
             (pbVar10 = (byte *)imp_memchr(pbVar10,bVar13,(uVar14 - iVar8) + 1),
             pbVar10 == (byte *)0x0)) break;
          iVar16 = imp_memcmp(pbVar10,pbVar7,iVar8);
          if (iVar16 == 0) {
            if ((pbVar10 != pbVar21) && (pbVar10 == pbVar19)) goto LAB_714c3120;
            break;
          }
          pbVar10 = pbVar10 + 1;
          uVar14 = (int)pbVar21 - (int)pbVar10;
        } while (iVar8 <= (int)uVar14);
      }
      goto LAB_714c2b18;
    }
LAB_714c3120:
    FUN_714ba554(&uStack_30,param_1,0,0,0);
    uVar14 = uStack_28;
    if ((uStack_30 & 1) == 0) {
      uVar14 = (uint)&uStack_30 | 1;
    }
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c240c);
    if (*pcVar6 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23fc);
      *puVar11 = 0x1459789;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdc48,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c240c);
      *puVar12 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c23fc);
    if (pbVar7[3] != 0) {
      pbVar7[3] = 0;
      *pbVar7 = *pbVar7 ^ 0xfb;
      pbVar7[1] = pbVar7[1] ^ 0xf5;
      pbVar7[2] = pbVar7[2] ^ 0x45;
    }
    iVar8 = imp_fopen(uVar14);
    puVar5[2] = iVar8;
    if (iVar8 == 0) {
      FUN_714c4db0();
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c244c);
      if (*pcVar6 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c243c);
        *puVar11 = &DAT_70913cd5;
        *(undefined1 *)((int)puVar11 + 6) = 1;
        *(undefined2 *)(puVar11 + 1) = 0x9d22;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdca0,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c244c);
        *puVar12 = 1;
      }
      pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c243c);
      if (pbVar7[6] != 0) {
        pbVar7[6] = 0;
        *pbVar7 = *pbVar7 ^ 0xb1;
        pbVar7[1] = pbVar7[1] ^ 0x5d;
        pbVar7[2] = pbVar7[2] ^ 0xe5;
        pbVar7[3] = pbVar7[3] ^ 0x11;
        pbVar7[4] = pbVar7[4] ^ 0xd;
        pbVar7[5] = pbVar7[5] ^ 0x9d;
      }
      uVar20 = imp_strlen();
      bVar13 = *param_1;
      uVar14 = *(uint *)(param_1 + 4);
      if ((bVar13 & 1) == 0) {
        uVar14 = (uint)(bVar13 >> 1);
      }
      if (uVar14 < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6b48(&uStack_40);
      }
      uVar15 = uVar14 - uVar20;
      pbVar7 = *(byte **)(param_1 + 8);
      if ((bVar13 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      if (0xfffffff7 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_40);
      }
      if (uVar15 < 0xb) {
        uStack_40 = CONCAT31(uStack_40._1_3_,(char)uVar15 * '\x02');
        uVar17 = (uint)&uStack_40 | 1;
        if (uVar14 != uVar20) goto LAB_714c32f4;
      }
      else {
        uVar17 = thunk_MwhHq((uVar15 | 7) + 1);
        uStack_40 = (uVar15 | 7) + 2;
        uStack_3c = uVar15;
        uStack_38 = uVar17;
LAB_714c32f4:
        imp___aeabi_memmove(uVar17,pbVar7 + uVar20,uVar15);
      }
      *(undefined1 *)(uVar17 + uVar15) = 0;
      iVar8 = FUN_719f84c8(&DAT_710eb1e8,&uStack_40);
      puVar5[2] = iVar8;
      if ((uStack_40 & 1) != 0) {
        thunk_qNQrlu(uStack_38);
      }
      if (iVar8 != 0) {
        *(undefined1 *)((int)puVar5 + 0x21) = 1;
        *puVar5 = 3;
        if (*(char *)(iVar8 + 8) != '\0') {
          uVar18 = *(undefined4 *)(iVar8 + 0x1d);
          uVar9 = imp_malloc(uVar18);
          puVar5[3] = uVar9;
          puVar5[4] = uVar18;
          FUN_719f807c(&DAT_710eb1e8,iVar8);
        }
      }
      goto LAB_714c31d0;
    }
  }
  else {
LAB_714c2b18:
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c246c);
    if (*pcVar6 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c245c);
      *puVar11 = 0x7aa91804;
      *(undefined1 *)((int)puVar11 + 7) = 1;
      *(undefined4 *)((int)puVar11 + 3) = 0xc50ce47a;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdcc8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c246c);
      *puVar12 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c245c);
    if (pbVar7[7] != 0) {
      pbVar7[7] = 0;
      *pbVar7 = *pbVar7 ^ 0x65;
      pbVar7[1] = pbVar7[1] ^ 0x6d;
      pbVar7[2] = pbVar7[2] ^ 0xcd;
      pbVar7[3] = pbVar7[3] ^ 0x13;
      pbVar7[4] = pbVar7[4] ^ 0x8b;
      pbVar7[5] = pbVar7[5] ^ 0x23;
      pbVar7[6] = pbVar7[6] ^ 0xc5;
    }
    bVar13 = *param_1;
    pbVar19 = *(byte **)(param_1 + 8);
    if ((bVar13 & 1) == 0) {
      pbVar19 = param_1 + 1;
    }
    iVar8 = imp_strlen(pbVar7);
    if (iVar8 == 0) {
LAB_714c2f04:
      FUN_714ba554(&uStack_30,param_1,0,0,0);
      uVar20 = (uint)&uStack_30 | 1;
      uVar14 = uStack_28;
      if ((uStack_30 & 1) == 0) {
        uVar14 = uVar20;
      }
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c248c);
      if (*pcVar6 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c247c);
        *puVar11 = 0x1a9dfc3;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdcf0,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c248c);
        *puVar12 = 1;
      }
      pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c247c);
      if (pbVar7[3] != 0) {
        pbVar7[3] = 0;
        *pbVar7 = *pbVar7 ^ 0xb1;
        pbVar7[1] = pbVar7[1] ^ 0xbd;
        pbVar7[2] = pbVar7[2] ^ 0xa9;
      }
      iVar8 = imp_fopen(uVar14);
      puVar5[2] = iVar8;
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      if (iVar8 != 0) {
        *puVar5 = 1;
        return puVar5;
      }
      if (DAT_710eb3b0 == '\0') {
        pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24ac);
        if (*pcVar6 == '\0') {
          puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c249c);
          *puVar11 = 0xf6138e2a;
          puVar11[1] = 0xfc4de95a;
          puVar11[2] = 0xfb198e29;
          *(undefined1 *)((int)puVar11 + 0xf) = 1;
          *(undefined4 *)((int)puVar11 + 0xb) = 0x3ba259fb;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdd18,puVar11,&DAT_70b0e000);
          puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24ac);
          *puVar12 = 1;
        }
        pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c249c);
        if (pbVar7[0xf] != 0) {
          *pbVar7 = *pbVar7 ^ 0x4b;
          pbVar7[1] = pbVar7[1] ^ 0xfb;
          pbVar7[2] = pbVar7[2] ^ 0x77;
          pbVar7[3] = pbVar7[3] ^ 0x9f;
          pbVar7[0xf] = 0;
          pbVar7[4] = pbVar7[4] ^ 0x35;
          pbVar7[5] = pbVar7[5] ^ 199;
          pbVar7[6] = pbVar7[6] ^ 0x3b;
          pbVar7[7] = pbVar7[7] ^ 0x9b;
          pbVar7[8] = pbVar7[8] ^ 0x4b;
          pbVar7[9] = pbVar7[9] ^ 0xfb;
          pbVar7[10] = pbVar7[10] ^ 0x77;
          pbVar7[0xb] = pbVar7[0xb] ^ 0x9f;
          pbVar7[0xc] = pbVar7[0xc] ^ 0x35;
          pbVar7[0xd] = pbVar7[0xd] ^ 199;
          pbVar7[0xe] = pbVar7[0xe] ^ 0x3b;
        }
        uVar14 = imp_strlen(pbVar7);
        if (0xfffffff7 < uVar14) goto LAB_714c3950;
        if (uVar14 < 0xb) {
          uVar15 = (uint)&uStack_30 | 1;
          uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar14 << 1));
          if (uVar14 != 0) goto LAB_714c33a8;
        }
        else {
          uVar15 = thunk_MwhHq((uVar14 | 7) + 1);
          uStack_30 = (uVar14 | 7) + 2;
          uStack_2c = uVar14;
          uStack_28 = uVar15;
LAB_714c33a8:
          imp___aeabi_memmove(uVar15,pbVar7,uVar14);
        }
        *(undefined1 *)(uVar15 + uVar14) = 0;
        FUN_719f5944(&DAT_710eb318,&uStack_30,0,0,0);
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        FUN_719f776c(&DAT_710eb318);
        DAT_710eb3b0 = FUN_719f8780(&DAT_710eb318);
      }
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24cc);
      if (*pcVar6 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24bc);
        *puVar11 = 0xeef7080e;
        *(undefined1 *)((int)puVar11 + 7) = 1;
        *(undefined4 *)((int)puVar11 + 3) = 0x7b94baee;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_712ee7a4,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24cc);
        *puVar12 = 1;
      }
      pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24bc);
      if (pbVar7[7] != 0) {
        pbVar7[7] = 0;
        *pbVar7 = *pbVar7 ^ 0x6f;
        pbVar7[1] = pbVar7[1] ^ 0x7d;
        pbVar7[2] = pbVar7[2] ^ 0x93;
        pbVar7[3] = pbVar7[3] ^ 0x87;
        pbVar7[4] = pbVar7[4] ^ 0xd5;
        pbVar7[5] = pbVar7[5] ^ 0xbb;
        pbVar7[6] = pbVar7[6] ^ 0x7b;
      }
      uVar15 = imp_strlen();
      bVar13 = *param_1;
      uVar14 = *(uint *)(param_1 + 4);
      if ((bVar13 & 1) == 0) {
        uVar14 = (uint)(bVar13 >> 1);
      }
      if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6b48(&uStack_30);
      }
      uVar17 = uVar14 - uVar15;
      pbVar7 = *(byte **)(param_1 + 8);
      if ((bVar13 & 1) == 0) {
        pbVar7 = param_1 + 1;
      }
      if (0xfffffff7 < uVar17) {
LAB_714c3950:
                    /* WARNING: Subroutine does not return */
        FUN_712f6c1c(&uStack_30);
      }
      if (uVar17 < 0xb) {
        uStack_30 = CONCAT31(uStack_30._1_3_,(char)uVar17 * '\x02');
        if (uVar14 == uVar15) goto LAB_714c3524;
      }
      else {
        uVar20 = thunk_MwhHq((uVar17 | 7) + 1);
        uStack_30 = (uVar17 | 7) + 2;
        uStack_2c = uVar17;
        uStack_28 = uVar20;
      }
      imp___aeabi_memmove(uVar20,pbVar7 + uVar15,uVar17);
LAB_714c3524:
      *(undefined1 *)(uVar20 + uVar17) = 0;
      iVar8 = FUN_719f84c8(&DAT_710eb318,&uStack_30);
      puVar5[2] = iVar8;
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      if (iVar8 == 0) {
        return puVar5;
      }
      *(undefined1 *)((int)puVar5 + 0x21) = 1;
      *puVar5 = 5;
      if (*(char *)(iVar8 + 8) == '\0') {
        return puVar5;
      }
      uVar18 = *(undefined4 *)(iVar8 + 0x1d);
      uVar9 = imp_malloc(uVar18);
      puVar5[3] = uVar9;
      puVar5[4] = uVar18;
      FUN_719f807c(&DAT_710eb318,iVar8);
      return puVar5;
    }
    uVar14 = *(uint *)(param_1 + 4);
    if ((bVar13 & 1) == 0) {
      uVar14 = (uint)(bVar13 >> 1);
    }
    if (iVar8 <= (int)uVar14) {
      bVar13 = *pbVar7;
      pbVar21 = pbVar19 + uVar14;
      pbVar10 = pbVar19;
      do {
        if ((0xfffffffe < uVar14 - iVar8) ||
           (pbVar10 = (byte *)imp_memchr(pbVar10,bVar13,(uVar14 - iVar8) + 1),
           pbVar10 == (byte *)0x0)) break;
        iVar16 = imp_memcmp(pbVar10,pbVar7,iVar8);
        if (iVar16 == 0) {
          if ((pbVar10 != pbVar21) && (pbVar10 == pbVar19)) goto LAB_714c2f04;
          break;
        }
        pbVar10 = pbVar10 + 1;
        uVar14 = (int)pbVar21 - (int)pbVar10;
      } while (iVar8 <= (int)uVar14);
    }
    iVar8 = FUN_714bb230(param_1);
    if (iVar8 == 0) {
      if ((DAT_710eb1e0 == '\0') && (DAT_700c1e04 != 1)) {
        if (DAT_700c1e04 != 0) {
          return puVar5;
        }
        uVar9 = FUN_714bb730(param_1);
        FUN_714ba554(&uStack_30,param_1,0,uVar9,0);
        uVar14 = uStack_28;
        if ((uStack_30 & 1) == 0) {
          uVar14 = (uint)&uStack_30 | 1;
        }
        pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c252c);
        if (*pcVar6 == '\0') {
          puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c251c);
          *puVar11 = 0x11b0d79;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdda8,puVar11,&DAT_70b0e000);
          puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c252c);
          *puVar12 = 1;
        }
        pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c251c);
        if (pbVar7[3] != 0) {
          pbVar7[3] = 0;
          *pbVar7 = *pbVar7 ^ 0xb;
          pbVar7[1] = pbVar7[1] ^ 0x6f;
          pbVar7[2] = pbVar7[2] ^ 0x1b;
        }
        iVar8 = imp_fopen(uVar14);
        puVar5[2] = iVar8;
        if (iVar8 == 0) {
          uVar9 = FUN_714bb730(param_1);
          FUN_714ba554(&uStack_40,param_1,0,uVar9,0);
          if (((byte)uStack_30 & 1) != 0) {
            thunk_qNQrlu(uStack_28);
          }
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          uStack_28 = uStack_38;
          iVar8 = FUN_717d2974(DAT_71201808,&uStack_30);
          puVar5[2] = iVar8;
          if (iVar8 != 0) {
            *puVar5 = 6;
          }
        }
        else {
          *puVar5 = 1;
        }
        goto LAB_714c31d0;
      }
    }
    else {
      *(undefined1 *)((int)puVar5 + 0x21) = 1;
    }
    uVar9 = FUN_714bb730(param_1);
    FUN_714ba554(&uStack_30,param_1,iVar8,uVar9,0);
    uVar20 = (uint)&uStack_30 | 1;
    uVar14 = uStack_28;
    if ((uStack_30 & 1) == 0) {
      uVar14 = uVar20;
    }
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24ec);
    if (*pcVar6 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24dc);
      *puVar11 = 0x1616563;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdd48,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24ec);
      *puVar12 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24dc);
    if (pbVar7[3] != 0) {
      pbVar7[3] = 0;
      *pbVar7 = *pbVar7 ^ 0x11;
      pbVar7[1] = pbVar7[1] ^ 7;
      pbVar7[2] = pbVar7[2] ^ 0x61;
    }
    iVar8 = imp_fopen(uVar14);
    puVar5[2] = iVar8;
    if (iVar8 == 0) {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c250c);
      if (*pcVar6 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24fc);
        *(undefined1 *)(puVar11 + 6) = 1;
        uVar4 = DAT_70081afc;
        uVar3 = DAT_70081af8;
        uVar2 = DAT_70081af4;
        uVar18 = DAT_70081af0;
        uVar9 = DAT_70081aec;
        *puVar11 = DAT_70081ae8;
        puVar11[1] = uVar9;
        puVar11[2] = uVar18;
        puVar11[3] = uVar2;
        puVar11[4] = uVar3;
        puVar11[5] = uVar4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdd70,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c250c);
        *puVar12 = 1;
      }
      iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c24fc);
      if (*(char *)(iVar8 + 0x18) != '\0') {
        uVar14 = 0;
        uVar15 = 0;
        do {
          iVar16 = (uVar14 & 7) * 8;
          uVar17 = iVar16 - 0x20;
          bVar13 = (byte)(0xb765a14b >> iVar16) |
                   (byte)(-0x36725eb7 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar17) {
            bVar13 = (byte)(0xc98da149 >> (uVar17 & 0xff));
          }
          *(byte *)(iVar8 + uVar14) = *(byte *)(iVar8 + uVar14) ^ bVar13;
          bVar23 = 0xfffffffe < uVar14;
          bVar22 = uVar15 == 0;
          bVar1 = (0x16 < uVar14) <= uVar15;
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 + bVar23;
        } while (bVar22 && bVar1);
        *(undefined1 *)(iVar8 + 0x18) = 0;
      }
      uVar14 = uStack_28;
      if ((uStack_30 & 1) == 0) {
        uVar14 = uVar20;
      }
      FUN_7188543c(iVar8,uVar14);
      goto LAB_714c31d0;
    }
  }
  *puVar5 = 1;
LAB_714c31d0:
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return puVar5;
}


// =========================================================================
// Function: FUN_714c4db0
// Entry: 0x714c4db0 | Size: 576 bytes
// =========================================================================

void FUN_714c4db0(void)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (DAT_710eb3ec != '\0') goto LAB_714c4f70;
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c242c);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c241c);
    *puVar4 = 0x9ab93ed9;
    puVar4[1] = 0xe7e88701;
    puVar4[2] = 0x97a931c8;
    *(undefined1 *)((int)puVar4 + 0xe) = 1;
    *(undefined2 *)(puVar4 + 3) = 0xf14a;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdc70,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c242c);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c241c);
  if (pbVar2[0xe] != 0) {
    *pbVar2 = *pbVar2 ^ 0xbd;
    pbVar2[1] = pbVar2[1] ^ 0x5f;
    pbVar2[2] = pbVar2[2] ^ 0xcd;
    pbVar2[3] = pbVar2[3] ^ 0xfb;
    pbVar2[0xe] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x2f;
    pbVar2[5] = pbVar2[5] ^ 0xf1;
    pbVar2[6] = pbVar2[6] ^ 0x8f;
    pbVar2[7] = pbVar2[7] ^ 0x85;
    pbVar2[8] = pbVar2[8] ^ 0xbd;
    pbVar2[9] = pbVar2[9] ^ 0x5f;
    pbVar2[10] = pbVar2[10] ^ 0xcd;
    pbVar2[0xb] = pbVar2[0xb] ^ 0xfb;
    pbVar2[0xc] = pbVar2[0xc] ^ 0x2f;
    pbVar2[0xd] = pbVar2[0xd] ^ 0xf1;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_2c);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(uVar3 << 1));
    if (uVar3 != 0) goto LAB_714c4f0c;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_2c = (uVar3 | 7) + 2;
    uStack_28 = uVar3;
    uStack_24 = uVar6;
LAB_714c4f0c:
    imp___aeabi_memmove(uVar6,pbVar2,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_719f5944(&DAT_710eb1e8,&uStack_2c,0,0,0);
  if ((uStack_2c & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  FUN_719f776c(&DAT_710eb1e8);
  DAT_710eb3ec = FUN_719f8780(&DAT_710eb1e8);
LAB_714c4f70:
  FUN_719f8780(&DAT_710eb1e8);
  return;
}


// =========================================================================
// Function: FUN_714c52d0
// Entry: 0x714c52d0 | Size: 152 bytes
// =========================================================================

int FUN_714c52d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[1] != 0) {
    iVar1 = imp_ftell(param_1[1]);
    return iVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  switch(*puVar2) {
  case 1:
    iVar1 = imp_ftell(puVar2[2]);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    return puVar2[5];
  case 6:
    iVar1 = FUN_717d2a84(DAT_71201808,puVar2[2]);
    break;
  case 7:
    iVar1 = puVar2[5];
    goto LAB_714c5378;
  default:
    goto switchD_714c531c_default;
  }
  puVar2 = (undefined4 *)*param_1;
LAB_714c5378:
  iVar1 = iVar1 - puVar2[0xb];
switchD_714c531c_default:
  return iVar1;
}


// =========================================================================
// Function: FUN_714c5410
// Entry: 0x714c5410 | Size: 1496 bytes
// =========================================================================

undefined4 FUN_714c5410(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar1 = FUN_714c52d0();
  iVar2 = FUN_714c8774(param_1);
  piVar5 = (int *)*param_1;
  if (6 < *piVar5 - 1U) {
    return 0;
  }
  uVar10 = (int)uVar1 >> 0x1f;
  uVar13 = param_3;
  switch(*piVar5) {
  case 1:
    uVar4 = imp_fread(param_2,1,param_3,piVar5[2]);
    *(undefined4 *)(*param_1 + 0x1c) = uVar4;
    iVar2 = *param_1;
    uVar13 = *(uint *)(iVar2 + 0x1c);
    if ((*(char *)(iVar2 + 0x20) == '\0') ||
       ((uVar6 = *(uint *)(iVar2 + 0x24), uVar6 <= uVar1 &&
        (uVar6 = *(uint *)(iVar2 + 0x28), uVar1 < uVar6)))) goto joined_r0x714c58bc;
    if (uVar13 != 0) {
      uVar6 = (uint)*(byte *)(iVar2 + 0x60);
    }
    if (uVar13 == 0 || uVar6 == 0) goto joined_r0x714c58bc;
    uVar11 = uVar1 >> 6 | uVar10 << 0x1a;
    uVar1 = uVar1 & 0x3f;
    uVar10 = uVar10 >> 6;
    uVar6 = 0;
    do {
      uVar12 = *(uint *)(iVar2 + 0x6c) ^ uVar10;
      if (*(uint *)(iVar2 + 0x68) != uVar11 || uVar12 != 0) {
        FUN_714cdfc8(iVar2 + 0x30,uVar12,uVar11,uVar10,iVar2 + 0x50,iVar2 + 0x70);
        *(uint *)(iVar2 + 0x68) = uVar11;
        *(uint *)(iVar2 + 0x6c) = uVar10;
      }
      uVar12 = uVar13 - uVar6;
      if (0x40 - uVar1 < uVar13 - uVar6) {
        uVar12 = 0x40 - uVar1;
      }
      if (uVar13 != uVar6) {
        pbVar8 = (byte *)(iVar2 + 0x70 + uVar1);
        uVar1 = uVar12;
        pbVar9 = (byte *)(param_2 + uVar6);
        if (uVar12 < 2) {
          uVar1 = 1;
        }
        do {
          uVar1 = uVar1 - 1;
          *pbVar9 = *pbVar9 ^ *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar1 != 0);
      }
      bVar14 = 0xfffffffe < uVar11;
      uVar11 = uVar11 + 1;
      uVar6 = uVar12 + uVar6;
      uVar10 = uVar10 + bVar14;
      uVar1 = 0;
    } while (uVar6 < uVar13);
    break;
  case 2:
    uVar10 = piVar5[4];
    if (uVar10 <= uVar1) {
      return 2;
    }
    if (uVar10 <= uVar1 + param_3) {
      uVar13 = uVar10 - uVar1;
    }
    imp___aeabi_memcpy(param_2,piVar5[3] + uVar1,uVar13);
    uVar4 = 2;
    if (uVar13 == param_3) {
      uVar4 = 0;
    }
    *(uint *)(*param_1 + 0x1c) = uVar13;
    *(uint *)(*param_1 + 0x14) = uVar13 + uVar1;
    return uVar4;
  case 3:
    uVar10 = *(uint *)(piVar5[2] + 0x1d);
    if (uVar10 <= uVar1) {
      return 2;
    }
    iVar2 = piVar5[3];
    if (uVar10 <= uVar1 + param_3) {
      uVar13 = uVar10 - uVar1;
    }
    if (iVar2 == 0) {
      uVar4 = *(undefined4 *)(piVar5[2] + 0x2d);
      puVar3 = &DAT_710eb1e8;
      goto LAB_714c58f4;
    }
LAB_714c5664:
    imp___aeabi_memcpy(param_2,iVar2 + uVar1,uVar13);
    goto LAB_714c5900;
  case 4:
    uVar10 = *(uint *)(piVar5[2] + 0x1d);
    if (uVar10 <= uVar1) {
      return 2;
    }
    iVar2 = piVar5[3];
    if (uVar10 <= uVar1 + param_3) {
      uVar13 = uVar10 - uVar1;
    }
    if (iVar2 != 0) goto LAB_714c5664;
    uVar4 = *(undefined4 *)(piVar5[2] + 0x2d);
    puVar3 = &DAT_710eb280;
    goto LAB_714c58f4;
  case 5:
    uVar10 = *(uint *)(piVar5[2] + 0x1d);
    if (uVar10 <= uVar1) {
      return 2;
    }
    iVar2 = piVar5[3];
    if (uVar10 <= uVar1 + param_3) {
      uVar13 = uVar10 - uVar1;
    }
    if (iVar2 != 0) goto LAB_714c5664;
    uVar4 = *(undefined4 *)(piVar5[2] + 0x2d);
    puVar3 = &DAT_710eb318;
LAB_714c58f4:
    FUN_719f7bbc(puVar3,param_2,uVar13,uVar4,uVar1);
LAB_714c5900:
    *(uint *)(*param_1 + 0x1c) = uVar13;
    *(uint *)(*param_1 + 0x14) = uVar13 + uVar1;
    goto joined_r0x714c58bc;
  case 6:
    uVar4 = FUN_717d2a04(DAT_71201808,piVar5[2],param_2,param_3);
    *(undefined4 *)(*param_1 + 0x1c) = uVar4;
    iVar2 = *param_1;
    uVar13 = *(uint *)(iVar2 + 0x1c);
    if ((*(char *)(iVar2 + 0x20) == '\0') ||
       ((uVar6 = *(uint *)(iVar2 + 0x24), uVar6 <= uVar1 &&
        (uVar6 = *(uint *)(iVar2 + 0x28), uVar1 < uVar6)))) goto joined_r0x714c58bc;
    if (uVar13 != 0) {
      uVar6 = (uint)*(byte *)(iVar2 + 0x60);
    }
    if (uVar13 == 0 || uVar6 == 0) goto joined_r0x714c58bc;
    uVar11 = uVar1 >> 6 | uVar10 << 0x1a;
    uVar1 = uVar1 & 0x3f;
    uVar10 = uVar10 >> 6;
    uVar6 = 0;
    do {
      uVar12 = *(uint *)(iVar2 + 0x6c) ^ uVar10;
      if (*(uint *)(iVar2 + 0x68) != uVar11 || uVar12 != 0) {
        FUN_714cdfc8(iVar2 + 0x30,uVar12,uVar11,uVar10,iVar2 + 0x50,iVar2 + 0x70);
        *(uint *)(iVar2 + 0x68) = uVar11;
        *(uint *)(iVar2 + 0x6c) = uVar10;
      }
      uVar12 = uVar13 - uVar6;
      if (0x40 - uVar1 < uVar13 - uVar6) {
        uVar12 = 0x40 - uVar1;
      }
      if (uVar13 != uVar6) {
        pbVar8 = (byte *)(iVar2 + 0x70 + uVar1);
        uVar1 = uVar12;
        pbVar9 = (byte *)(param_2 + uVar6);
        if (uVar12 < 2) {
          uVar1 = 1;
        }
        do {
          uVar1 = uVar1 - 1;
          *pbVar9 = *pbVar9 ^ *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar1 != 0);
      }
      bVar14 = 0xfffffffe < uVar11;
      uVar11 = uVar11 + 1;
      uVar6 = uVar12 + uVar6;
      uVar10 = uVar10 + bVar14;
      uVar1 = 0;
    } while (uVar6 < uVar13);
    break;
  case 7:
    if (iVar2 < (int)uVar1) {
      return 2;
    }
    if (iVar2 <= (int)(uVar1 + param_3)) {
      uVar13 = iVar2 - uVar1;
    }
    uVar4 = imp_fread(param_2,1,uVar13,piVar5[2]);
    *(undefined4 *)(*param_1 + 0x1c) = uVar4;
    iVar2 = *param_1;
    if ((*(char *)(iVar2 + 0x20) != '\0') &&
       ((uVar6 = *(uint *)(iVar2 + 0x24), uVar1 < uVar6 ||
        (uVar6 = *(uint *)(iVar2 + 0x28), uVar6 <= uVar1)))) {
      if (uVar13 != 0) {
        uVar6 = (uint)*(byte *)(iVar2 + 0x60);
      }
      if (uVar13 != 0 && uVar6 != 0) {
        uVar6 = uVar1 & 0x3f;
        uVar12 = uVar1 >> 6 | uVar10 << 0x1a;
        uVar10 = uVar10 >> 6;
        uVar11 = 0;
        do {
          uVar7 = *(uint *)(iVar2 + 0x6c) ^ uVar10;
          if (*(uint *)(iVar2 + 0x68) != uVar12 || uVar7 != 0) {
            FUN_714cdfc8(iVar2 + 0x30,uVar7,uVar12,uVar10,iVar2 + 0x50,iVar2 + 0x70);
            *(uint *)(iVar2 + 0x68) = uVar12;
            *(uint *)(iVar2 + 0x6c) = uVar10;
          }
          uVar7 = uVar13 - uVar11;
          if (0x40 - uVar6 < uVar13 - uVar11) {
            uVar7 = 0x40 - uVar6;
          }
          if (uVar13 != uVar11) {
            pbVar8 = (byte *)(iVar2 + 0x70 + uVar6);
            uVar6 = uVar7;
            pbVar9 = (byte *)(param_2 + uVar11);
            if (uVar7 < 2) {
              uVar6 = 1;
            }
            do {
              uVar6 = uVar6 - 1;
              *pbVar9 = *pbVar9 ^ *pbVar8;
              pbVar8 = pbVar8 + 1;
              pbVar9 = pbVar9 + 1;
            } while (uVar6 != 0);
          }
          bVar14 = 0xfffffffe < uVar12;
          uVar12 = uVar12 + 1;
          uVar11 = uVar7 + uVar11;
          uVar10 = uVar10 + bVar14;
          uVar6 = 0;
        } while (uVar11 < uVar13);
      }
    }
    FUN_714c5bec(param_1,uVar13 + uVar1);
    goto joined_r0x714c58bc;
  }
  uVar13 = *(uint *)(*param_1 + 0x1c);
joined_r0x714c58bc:
  if (uVar13 == param_3) {
    return 0;
  }
  return 2;
}


// =========================================================================
// Function: FUN_714c5bec
// Entry: 0x714c5bec | Size: 284 bytes
// =========================================================================

undefined4 FUN_714c5bec(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  iVar2 = param_1[1];
  if (iVar2 != 0) {
LAB_714c5c10:
    iVar2 = imp_fseek(iVar2,param_2,0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 3;
    }
    return uVar1;
  }
  puVar3 = (undefined4 *)*param_1;
  uVar1 = 0;
  switch(*puVar3) {
  case 1:
    iVar2 = puVar3[2];
    param_2 = puVar3[0xb] + param_2;
    goto LAB_714c5c10;
  case 2:
    if ((int)param_2 < 0) {
      return 3;
    }
    uVar4 = puVar3[4];
    break;
  case 3:
  case 4:
  case 5:
    if ((int)param_2 < 0) {
      return 3;
    }
    uVar4 = *(uint *)(puVar3[2] + 0x1d);
    break;
  case 6:
    FUN_717d2afc(DAT_71201808,puVar3[2],puVar3[0xb] + param_2);
    return 0;
  case 7:
    param_2 = puVar3[0xb] + param_2;
    uVar1 = 3;
    if (-1 < (int)param_2) {
      if ((uint)puVar3[6] < param_2) {
        return 3;
      }
      puVar3[5] = param_2;
      imp_fseek(*(undefined4 *)(*param_1 + 8),*(int *)(*param_1 + 0x10) + param_2,0);
      return 0;
    }
  default:
    goto switchD_714c5c48_default;
  }
  uVar1 = 3;
  if (param_2 <= uVar4) {
    puVar3[5] = param_2;
    return 0;
  }
switchD_714c5c48_default:
  return uVar1;
}


// =========================================================================
// Function: FUN_714c5db0
// Entry: 0x714c5db0 | Size: 224 bytes
// =========================================================================

undefined4 FUN_714c5db0(uint *param_1)

{
  uint uVar1;
  byte abStack_90 [8];
  undefined4 uStack_88;
  undefined4 uStack_60;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  byte abStack_1c [8];
  uint uStack_14;
  
  if ((*param_1 & 1) == 0) {
    uStack_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
  }
  else {
    FUN_712f6d58(&uStack_28,param_1[2],param_1[1]);
  }
  FUN_714bab0c(abStack_90,&uStack_28);
  FUN_714ba554(abStack_1c,abStack_90,0,0,0);
  if ((abStack_90[0] & 1) != 0) {
    thunk_qNQrlu(uStack_88);
  }
  if ((uStack_28 & 1) != 0) {
    thunk_qNQrlu(uStack_20);
  }
  uVar1 = uStack_14;
  if ((abStack_1c[0] & 1) == 0) {
    uVar1 = (uint)abStack_1c | 1;
  }
  uVar1 = imp_stat(uVar1,abStack_90);
  if ((abStack_1c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_14);
  }
  if (0x7fffffff < uVar1) {
    uStack_60 = 0xffffffff;
  }
  return uStack_60;
}


// =========================================================================
// Function: FUN_714c5f6c
// Entry: 0x714c5f6c | Size: 3620 bytes
// =========================================================================

undefined4 FUN_714c5f6c(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  byte abStack_48 [8];
  undefined4 uStack_40;
  byte abStack_3c [8];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  piVar7 = (int *)thunk_MwhHq(0x20);
  *piVar7 = 0;
  piVar7[1] = 0;
  piVar7[2] = 0;
  piVar7[3] = 0;
  piVar7[4] = 0;
  piVar7[5] = 0;
  piVar7[6] = -1;
  piVar7[7] = -1;
  if (0xfffffffd < param_1 - 4U) {
    switch(param_4) {
    case 0:
    case 3:
      piVar18 = (int *)thunk_MwhHq(0xb0);
      imp___aeabi_memclr8(piVar18,0xb0);
      piVar18[0x1a] = -1;
      piVar18[0x1b] = -1;
      *piVar18 = 1;
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c234c);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c233c);
        *puVar12 = 0x1ade1f1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdb50,puVar12,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c234c);
        *puVar14 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c233c);
      if (pbVar10[3] != 0) {
        pbVar10[3] = 0;
        *pbVar10 = *pbVar10 ^ 0x83;
        pbVar10[1] = pbVar10[1] ^ 0x83;
        pbVar10[2] = pbVar10[2] ^ 0xad;
      }
      iVar8 = imp_fopen(param_3);
      piVar18[2] = iVar8;
      *piVar7 = (int)piVar18;
      goto LAB_714c6550;
    case 1:
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25cc);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25bc);
        *puVar12 = 0x1e33166;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cde64,puVar12,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25cc);
        *puVar14 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25bc);
      if (pbVar10[3] != 0) {
        pbVar10[3] = 0;
        *pbVar10 = *pbVar10 ^ 0x11;
        pbVar10[1] = pbVar10[1] ^ 0x53;
        pbVar10[2] = pbVar10[2] ^ 0xe3;
      }
      iVar8 = imp_fopen(param_3);
LAB_714c6264:
      piVar7[1] = iVar8;
      break;
    case 2:
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25ec);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25dc);
        *puVar12 = 0xfb3a09c1;
        *(undefined1 *)(puVar12 + 1) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cde8c,puVar12,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25ec);
        *puVar14 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25dc);
      if (pbVar10[4] != 0) {
        pbVar10[4] = 0;
        *pbVar10 = *pbVar10 ^ 0xb3;
        pbVar10[1] = pbVar10[1] ^ 0x6b;
        pbVar10[2] = pbVar10[2] ^ 0x11;
        pbVar10[3] = pbVar10[3] ^ 0xfb;
      }
      iVar8 = imp_fopen(param_3);
      piVar7[1] = iVar8;
      if (iVar8 == 0) {
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c260c);
        if (*pcVar9 == '\0') {
          puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25fc);
          *puVar12 = 0x1d1a0dec;
          *(undefined1 *)(puVar12 + 1) = 1;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdeb0,puVar12,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c260c);
          *puVar14 = 1;
        }
        pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25fc);
        if (pbVar10[4] != 0) {
          pbVar10[4] = 0;
          *pbVar10 = *pbVar10 ^ 0x9b;
          pbVar10[1] = pbVar10[1] ^ 0x6f;
          pbVar10[2] = pbVar10[2] ^ 0x31;
          pbVar10[3] = pbVar10[3] ^ 0x1d;
        }
        iVar8 = imp_fopen(param_3);
        *(undefined1 *)((int)piVar7 + 9) = 1;
        goto LAB_714c6264;
      }
    }
    goto switchD_714c604c_default;
  }
  FUN_714bbb04(abStack_48,param_3);
  FUN_714bab0c(abStack_3c,abStack_48);
  if ((abStack_48[0] & 1) != 0) {
    thunk_qNQrlu(uStack_40);
  }
  switch(param_4) {
  case 0:
  case 3:
    iVar8 = FUN_714c2a04(abStack_3c);
    *piVar7 = iVar8;
  default:
    uVar19 = 0;
    uVar15 = 0;
    break;
  case 1:
    FUN_714ba554(&uStack_58,abStack_3c,1,1,0);
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    uStack_28 = uStack_50;
    uVar19 = uStack_58 & 0xff;
    uVar17 = uStack_50;
    if ((uStack_58 & 1) == 0) {
      uVar17 = (uint)&uStack_30 | 1;
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c254c);
    if (*pcVar9 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c253c);
      *puVar12 = 0x16d51fa;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cddd0,puVar12,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c254c);
      *puVar14 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c253c);
    if (pbVar10[3] != 0) {
      pbVar10[3] = 0;
      *pbVar10 = *pbVar10 ^ 0x8d;
      pbVar10[1] = pbVar10[1] ^ 0x33;
      pbVar10[2] = pbVar10[2] ^ 0x6d;
    }
    goto LAB_714c63c4;
  case 2:
    FUN_714ba554(&uStack_58,abStack_3c,1,1,0);
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    uStack_28 = uStack_50;
    uVar19 = uStack_58 & 0xff;
    uVar17 = uStack_50;
    if ((uStack_58 & 1) == 0) {
      uVar17 = (uint)&uStack_30 | 1;
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c256c);
    if (*pcVar9 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c255c);
      *(undefined1 *)(puVar12 + 1) = 1;
      *puVar12 = 0x41fe43d5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cddf8,puVar12,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c256c);
      *puVar14 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c255c);
    if (pbVar10[4] != 0) {
      pbVar10[4] = 0;
      *pbVar10 = *pbVar10 ^ 0xa7;
      pbVar10[1] = pbVar10[1] ^ 0x21;
      pbVar10[2] = pbVar10[2] ^ 0xd5;
      pbVar10[3] = pbVar10[3] ^ 0x41;
    }
    iVar8 = imp_fopen(uVar17);
    piVar7[1] = iVar8;
    uVar15 = uStack_50;
    if (iVar8 == 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c258c);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c257c);
        *puVar12 = 0x29c83950;
        *(undefined1 *)(puVar12 + 1) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cde1c,puVar12,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c258c);
        *puVar14 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c257c);
      if (pbVar10[4] != 0) {
        pbVar10[4] = 0;
        *pbVar10 = *pbVar10 ^ 0x27;
        pbVar10[1] = pbVar10[1] ^ 0x5b;
        pbVar10[2] = pbVar10[2] ^ 0xe3;
        pbVar10[3] = pbVar10[3] ^ 0x29;
      }
      iVar8 = imp_fopen(uVar17);
      piVar7[1] = iVar8;
      *(undefined1 *)((int)piVar7 + 9) = 1;
    }
    break;
  case 4:
    FUN_714ba554(&uStack_58,abStack_3c,1,1,0);
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    uStack_28 = uStack_50;
    uVar19 = uStack_58 & 0xff;
    uVar17 = uStack_50;
    if ((uStack_58 & 1) == 0) {
      uVar17 = (uint)&uStack_30 | 1;
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25ac);
    if (*pcVar9 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c259c);
      *puVar12 = 0xbfd5109a;
      *(undefined1 *)(puVar12 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cde40,puVar12,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c25ac);
      *puVar14 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c259c);
    if (pbVar10[4] != 0) {
      pbVar10[4] = 0;
      *pbVar10 = *pbVar10 ^ 0xfb;
      pbVar10[1] = pbVar10[1] ^ 0x3b;
      pbVar10[2] = pbVar10[2] ^ 0xb7;
      pbVar10[3] = pbVar10[3] ^ 0xbf;
    }
LAB_714c63c4:
    iVar8 = imp_fopen(uVar17);
    piVar7[1] = iVar8;
    uVar15 = uStack_50;
  }
  if ((abStack_3c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  if ((uVar19 & 1) != 0) {
    thunk_qNQrlu(uVar15);
  }
switchD_714c604c_default:
  piVar18 = (int *)*piVar7;
  if (piVar18 == (int *)0x0) {
    piVar18 = (int *)0x0;
  }
  else {
LAB_714c6550:
    if (*piVar18 != 0) {
      FUN_714c5bec(piVar7,0);
    }
  }
  iVar8 = piVar7[1];
  bVar20 = iVar8 == 0;
  if (bVar20) {
    iVar8 = *piVar18;
  }
  if (!bVar20 || iVar8 != 0) {
    *param_2 = piVar7;
    return 0;
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c262c);
  if (*pcVar9 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c261c);
    *puVar12 = 0x40dfb024;
    *(undefined1 *)((int)puVar12 + 6) = 1;
    *(undefined2 *)(puVar12 + 1) = 0x35b6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cded4,puVar12,&DAT_70b0e000);
    puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c262c);
    *puVar14 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c261c);
  if (pbVar10[6] != 0) {
    pbVar10[6] = 0;
    *pbVar10 = *pbVar10 ^ 0x65;
    pbVar10[1] = pbVar10[1] ^ 0xe5;
    pbVar10[2] = pbVar10[2] ^ 0x9b;
    pbVar10[3] = pbVar10[3] ^ 9;
    pbVar10[4] = pbVar10[4] ^ 0xf9;
    pbVar10[5] = pbVar10[5] ^ 0x35;
  }
  iVar8 = imp_strstr(param_3);
  if (iVar8 == 0) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c264c);
    if (*pcVar9 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c263c);
      *puVar12 = 0x56fa9102;
      puVar12[1] = 0x6e9d548a;
      *(undefined1 *)((int)puVar12 + 0xb) = 1;
      *(undefined4 *)((int)puVar12 + 7) = 0x9b91006e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdefc,puVar12,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c264c);
      *puVar14 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c263c);
    if (pbVar10[0xb] != 0) {
      *pbVar10 = *pbVar10 ^ 0x65;
      pbVar10[1] = pbVar10[1] ^ 0xe5;
      pbVar10[2] = pbVar10[2] ^ 0x9b;
      pbVar10[3] = pbVar10[3] ^ 9;
      pbVar10[0xb] = 0;
      pbVar10[4] = pbVar10[4] ^ 0xf9;
      pbVar10[5] = pbVar10[5] ^ 0x35;
      pbVar10[6] = pbVar10[6] ^ 0xb3;
      pbVar10[7] = pbVar10[7] ^ 0x1d;
      pbVar10[8] = pbVar10[8] ^ 0x65;
      pbVar10[9] = pbVar10[9] ^ 0xe5;
      pbVar10[10] = pbVar10[10] ^ 0x9b;
    }
    iVar8 = imp_strstr(param_3);
    if (iVar8 == 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c266c);
      if (*pcVar9 == '\0') {
        puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c265c);
        *(undefined2 *)(puVar12 + 2) = 0x165;
        *puVar12 = 0x3afa9102;
        puVar12[1] = 0x74dd5cd7;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdf28,puVar12,&DAT_70b0e000);
        puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c266c);
        *puVar14 = 1;
      }
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c265c);
      if (pbVar10[9] != 0) {
        pbVar10[9] = 0;
        *pbVar10 = *pbVar10 ^ 0x65;
        pbVar10[1] = pbVar10[1] ^ 0xe5;
        pbVar10[2] = pbVar10[2] ^ 0x9b;
        pbVar10[3] = pbVar10[3] ^ 9;
        pbVar10[4] = pbVar10[4] ^ 0xf9;
        pbVar10[5] = pbVar10[5] ^ 0x35;
        pbVar10[6] = pbVar10[6] ^ 0xb3;
        pbVar10[7] = pbVar10[7] ^ 0x1d;
        pbVar10[8] = pbVar10[8] ^ 0x65;
      }
      iVar8 = imp_strstr(param_3);
      if (iVar8 == 0) {
        pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c268c);
        if (*pcVar9 == '\0') {
          puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c267c);
          *(undefined1 *)(puVar12 + 10) = 1;
          uVar5 = DAT_70081b10;
          uVar4 = DAT_70081b0c;
          uVar3 = DAT_70081b08;
          uVar2 = DAT_70081b04;
          *puVar12 = DAT_70081b00;
          puVar12[1] = uVar2;
          puVar12[2] = uVar3;
          puVar12[3] = uVar4;
          puVar12[4] = uVar5;
          uVar5 = DAT_70081b24;
          uVar4 = DAT_70081b20;
          uVar3 = DAT_70081b1c;
          uVar2 = DAT_70081b18;
          puVar12[5] = DAT_70081b14;
          puVar12[6] = uVar2;
          puVar12[7] = uVar3;
          puVar12[8] = uVar4;
          puVar12[9] = uVar5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdf54,puVar12,&DAT_70b0e000);
          puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c268c);
          *puVar14 = 1;
        }
        iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c267c);
        if (*(char *)(iVar8 + 0x28) != '\0') {
          uVar17 = 0;
          uVar19 = 0;
          do {
            iVar16 = (uVar17 & 7) * 8;
            bVar6 = (byte)(0x438dedfb >> iVar16) |
                    (byte)(0x7f870d17 << ((uVar17 & 7) * -8 + 0x20 & 0xff));
            uVar15 = iVar16 - 0x20;
            if (-1 < (int)uVar15) {
              bVar6 = (byte)(0x7f870d17 >> (uVar15 & 0xff));
            }
            *(byte *)(iVar8 + uVar17) = *(byte *)(iVar8 + uVar17) ^ bVar6;
            bVar21 = 0xfffffffe < uVar17;
            bVar20 = uVar19 == 0;
            bVar1 = (0x26 < uVar17) <= uVar19;
            uVar17 = uVar17 + 1;
            uVar19 = uVar19 + bVar21;
          } while (bVar20 && bVar1);
          *(undefined1 *)(iVar8 + 0x28) = 0;
        }
        if (param_4 - 1U < 2) {
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26ac);
          if (*pcVar9 == '\0') {
            puVar13 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c269c);
            *puVar13 = 0xedac;
            *(undefined1 *)(puVar13 + 1) = 1;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdfa4,puVar13,&DAT_70b0e000);
            puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26ac);
            *puVar14 = 1;
          }
          puVar11 = &DAT_700c269c;
        }
        else {
          pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26cc);
          if (*pcVar9 == '\0') {
            puVar13 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26bc);
            *puVar13 = 0xeda9;
            *(undefined1 *)(puVar13 + 1) = 1;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_714cdfa4,puVar13,&DAT_70b0e000);
            puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26cc);
            *puVar14 = 1;
          }
          puVar11 = &DAT_700c26bc;
        }
        pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(puVar11);
        if (pbVar10[2] != 0) {
          pbVar10[2] = 0;
          *pbVar10 = *pbVar10 ^ 0xfb;
          pbVar10[1] = pbVar10[1] ^ 0xed;
        }
        FUN_7188543c(iVar8,param_1,param_3);
      }
    }
  }
  *param_2 = 0;
  iVar8 = *piVar7;
  if (iVar8 != 0) {
    if (*(int *)(iVar8 + 0xc) != 0) {
      imp_free();
    }
    thunk_qNQrlu(iVar8);
  }
  thunk_qNQrlu(piVar7);
  return 1;
}


// =========================================================================
// Function: FUN_714c82ec
// Entry: 0x714c82ec | Size: 192 bytes
// =========================================================================

undefined4 FUN_714c82ec(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
LAB_714c8310:
    imp_fclose(iVar1);
    goto LAB_714c8314;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) goto LAB_714c838c;
  switch(*puVar2) {
  case 1:
  case 7:
    iVar1 = puVar2[2];
    goto LAB_714c8310;
  case 2:
    FUN_714c84a8(puVar2[2]);
    break;
  case 3:
  case 4:
  case 5:
    puVar2[2] = 0;
    break;
  case 6:
    FUN_717d29c8(DAT_71201808,puVar2[2]);
    break;
  default:
    goto switchD_714c8360_default;
  }
LAB_714c8314:
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
switchD_714c8360_default:
    if (puVar2[3] != 0) {
      imp_free();
    }
    thunk_qNQrlu(puVar2);
  }
LAB_714c838c:
  thunk_qNQrlu(param_1);
  return 0;
}


// =========================================================================
// Function: FUN_714c84a8
// Entry: 0x714c84a8 | Size: 348 bytes
// =========================================================================

void FUN_714c84a8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  if (*param_1 == -0x21524111) {
    pbVar4 = (byte *)param_1[5];
    if (pbVar4 != (byte *)0x0) {
      pbVar3 = (byte *)param_1[6];
      pbVar6 = pbVar4;
      if (pbVar3 != pbVar4) {
        do {
          pbVar6 = pbVar3 + -0xc;
          if ((*pbVar6 & 1) != 0) {
            thunk_qNQrlu(*(undefined4 *)(pbVar3 + -4));
          }
          pbVar3 = pbVar6;
        } while (pbVar6 != pbVar4);
        pbVar6 = (byte *)param_1[5];
      }
      param_1[6] = (int)pbVar4;
      thunk_qNQrlu(pbVar6);
    }
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      thunk_qNQrlu(param_1[4]);
    }
    thunk_qNQrlu(param_1);
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  uVar1 = param_1[5];
  if (uVar1 == 2) {
    FUN_71961818(param_1);
    uVar1 = param_1[5];
  }
  if ((uVar1 & 0xfffffffe) != 2) goto LAB_7196216c;
  iVar5 = *param_1;
  if ((code *)param_1[0xf] == FUN_71960384) {
    if ((uVar1 == 3) && (*(int *)(param_1[0x12] + 0x48) == 0)) goto LAB_71962144;
  }
  else if (uVar1 == 3) {
LAB_71962144:
    if (*(int *)(param_1[0x12] + 0x3c) != 0) {
      uVar2 = imp_fileno();
      imp_ftruncate(uVar2,iVar5);
    }
  }
  FUN_719604ac(param_1,1);
  uVar1 = param_1[5];
LAB_7196216c:
  if (uVar1 == 1) {
    FUN_7195e5c8(param_1,1);
  }
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: FUN_714c85ec
// Entry: 0x714c85ec | Size: 172 bytes
// =========================================================================

undefined4 FUN_714c85ec(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [80];
  undefined4 uStack_50;
  byte abStack_34 [8];
  uint uStack_2c;
  byte abStack_28 [8];
  undefined4 uStack_20;
  byte abStack_1c [8];
  undefined4 uStack_14;
  
  FUN_714bbb04(abStack_28);
  FUN_714bab0c(abStack_1c,abStack_28);
  if ((abStack_28[0] & 1) != 0) {
    thunk_qNQrlu(uStack_20);
  }
  FUN_714ba554(abStack_34,abStack_1c,param_1,0,0);
  uVar1 = uStack_2c;
  if ((abStack_34[0] & 1) == 0) {
    uVar1 = (uint)abStack_34 | 1;
  }
  imp_stat(uVar1,auStack_a0);
  if ((abStack_34[0] & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  if ((abStack_1c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_14);
  }
  return uStack_50;
}


// =========================================================================
// Function: FUN_714c8774
// Entry: 0x714c8774 | Size: 292 bytes
// =========================================================================

int FUN_714c8774(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    switch(*puVar3) {
    case 1:
      uVar1 = FUN_714c52d0();
      imp_fseek(*(undefined4 *)(*param_1 + 8),0,2);
      iVar2 = imp_ftell(*(undefined4 *)(*param_1 + 8));
      iVar4 = *(int *)(*param_1 + 0x2c);
      FUN_714c5bec(param_1,uVar1);
      return iVar2 - iVar4;
    case 2:
      return puVar3[4];
    case 3:
    case 4:
    case 5:
      return *(int *)(puVar3[2] + 0x1d);
    case 6:
      iVar2 = FUN_717d2a48(DAT_71201808,puVar3[2]);
      puVar3 = (undefined4 *)*param_1;
      break;
    case 7:
      iVar2 = puVar3[6];
      break;
    default:
      goto switchD_714c87a8_default;
    }
    return iVar2 - puVar3[0xb];
  }
  if (param_1[1] != 0) {
    uVar1 = FUN_714c52d0();
    imp_fseek(param_1[1],0,2);
    iVar2 = imp_ftell(param_1[1]);
    FUN_714c5bec(param_1,uVar1);
    return iVar2;
  }
switchD_714c87a8_default:
  return -1;
}


// =========================================================================
// Function: FUN_714c89e8
// Entry: 0x714c89e8 | Size: 28 bytes
// =========================================================================

void FUN_714c89e8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_1 != (int *)0x0) {
    param_4 = *param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != 0) {
    *(undefined4 *)(param_4 + 0x24) = param_2;
    *(undefined4 *)(*param_1 + 0x28) = param_3;
  }
  return;
}


// =========================================================================
// Function: FUN_714c8a1c
// Entry: 0x714c8a1c | Size: 316 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714c8a1c(int *param_1,int param_2)

{
  int unaff_r4;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  if (param_1 != (int *)0x0) {
    if (param_2 != 0) {
      unaff_r4 = *param_1;
    }
    if (param_2 != 0 && unaff_r4 != 0) {
      uStack_3c = 0x823f9dcc;
      uStack_40 = 0xb14a57e0;
      uStack_44 = 0xd8263fa9;
      uStack_48 = 0x54c1e7b;
      uStack_38 = 0x473be16;
      uStack_34 = 0x19fca8d5;
      uStack_30 = 0x640d7be2;
      uStack_2c = 0x915caf38;
      FUN_714cdfc8(&uStack_48,_ext___stack_chk_guard,*(undefined4 *)(param_2 + 8),
                   *(undefined4 *)(param_2 + 0xc),param_2,auStack_88);
      imp___aeabi_memcpy(unaff_r4 + 0x30,auStack_88,0x20);
      *(undefined4 *)(unaff_r4 + 0x68) = 0xffffffff;
      *(undefined4 *)(unaff_r4 + 0x6c) = 0xffffffff;
      *(undefined4 *)(unaff_r4 + 0x50) = uStack_68;
      *(undefined1 *)(unaff_r4 + 0x60) = 1;
      *(undefined1 *)(unaff_r4 + 0x20) = 1;
      *(undefined4 *)(unaff_r4 + 0x54) = uStack_64;
      *(undefined4 *)(unaff_r4 + 0x5c) = uStack_5c;
      *(undefined4 *)(unaff_r4 + 0x58) = uStack_60;
      *(undefined4 *)(unaff_r4 + 0x24) = 0;
      *(undefined4 *)(unaff_r4 + 0x28) = 0;
      *(undefined4 *)(unaff_r4 + 0x2c) = 0x10;
    }
  }
  if (_ext___stack_chk_guard != iStack_24) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_714c8c04
// Entry: 0x714c8c04 | Size: 40 bytes
// =========================================================================

void FUN_714c8c04(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x60) = 0;
    *(undefined1 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_714c8c44
// Entry: 0x714c8c44 | Size: 44 bytes
// =========================================================================

int FUN_714c8c44(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar2 != 0) {
    iVar1 = 0;
    if (*(char *)(iVar2 + 0x20) != '\0') {
      iVar1 = iVar2 + 0x30;
    }
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: FUN_714c8c88
// Entry: 0x714c8c88 | Size: 892 bytes
// =========================================================================

uint FUN_714c8c88(void)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  byte bVar10;
  
  uVar2 = FUN_717dae30(DAT_71201808);
  DataMemoryBarrier(0xb);
  do {
    uVar9 = (uint)DAT_700c1e08;
    bVar1 = (bool)hasExclusiveAccess(0x700c1e08);
  } while (!bVar1);
  DAT_700c1e08 = (byte)uVar2;
  if (uVar2 == (uVar9 & 1)) {
    return uVar2;
  }
  pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26ec);
  if (*pcVar3 == '\0') {
    puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26dc);
    *puVar7 = 0x9daba4ce;
    puVar7[1] = 0xd73ba8e6;
    puVar7[2] = 0x9d8280ea;
    *(undefined1 *)((int)puVar7 + 0xf) = 1;
    *(undefined4 *)((int)puVar7 + 0xb) = 0x49aeb09d;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce34c,puVar7,&DAT_70b0e000);
    puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26ec);
    *puVar8 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26dc);
  if (pbVar4[0xf] != 0) {
    *pbVar4 = *pbVar4 ^ 0x8b;
    pbVar4[1] = pbVar4[1] ^ 0xe3;
    pbVar4[2] = pbVar4[2] ^ 0xe7;
    pbVar4[3] = pbVar4[3] ^ 0xbd;
    pbVar4[0xf] = 0;
    pbVar4[4] = pbVar4[4] ^ 0x95;
    pbVar4[5] = pbVar4[5] ^ 0xdd;
    pbVar4[6] = pbVar4[6] ^ 0x49;
    pbVar4[7] = pbVar4[7] ^ 0xb1;
    pbVar4[8] = pbVar4[8] ^ 0x8b;
    pbVar4[9] = pbVar4[9] ^ 0xe3;
    pbVar4[10] = pbVar4[10] ^ 0xe7;
    pbVar4[0xb] = pbVar4[0xb] ^ 0xbd;
    pbVar4[0xc] = pbVar4[0xc] ^ 0x95;
    pbVar4[0xd] = pbVar4[0xd] ^ 0xdd;
    pbVar4[0xe] = pbVar4[0xe] ^ 0x49;
  }
  if (uVar2 == 0) {
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c272c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c271c);
      *puVar7 = 0xc9948ce7;
      *(undefined2 *)(puVar7 + 1) = 0x195;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce3a8,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c272c);
      *puVar8 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c271c);
    pbVar6 = pbVar5 + 5;
    if (*pbVar6 == 0) goto LAB_714c8ee4;
    *pbVar5 = *pbVar5 ^ 0x8b;
    pbVar5[1] = pbVar5[1] ^ 0xe3;
    pbVar5[2] = pbVar5[2] ^ 0xe7;
    pbVar5[3] = pbVar5[3] ^ 0xbd;
    pbVar5 = pbVar5 + 4;
    bVar10 = 0x95;
  }
  else {
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c270c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26fc);
      *(undefined2 *)(puVar7 + 2) = 0x18b;
      *puVar7 = 0xc99486f9;
      puVar7[1] = 0xd52caffa;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce37c,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c270c);
      *puVar8 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c26fc);
    pbVar6 = pbVar5 + 9;
    if (*pbVar6 == 0) goto LAB_714c8ee4;
    *pbVar5 = *pbVar5 ^ 0x8b;
    pbVar5[1] = pbVar5[1] ^ 0xe3;
    pbVar5[2] = pbVar5[2] ^ 0xe7;
    pbVar5[3] = pbVar5[3] ^ 0xbd;
    bVar10 = 0x8b;
    pbVar5[4] = pbVar5[4] ^ 0x95;
    pbVar5[5] = pbVar5[5] ^ 0xdd;
    pbVar5[6] = pbVar5[6] ^ 0x49;
    pbVar5[7] = pbVar5[7] ^ 0xb1;
    pbVar5 = pbVar5 + 8;
  }
  *pbVar6 = 0;
  *pbVar5 = *pbVar5 ^ bVar10;
LAB_714c8ee4:
  FUN_7188543c(pbVar4);
  return uVar2;
}


// =========================================================================
// Function: FUN_714c9478
// Entry: 0x714c9478 | Size: 16 bytes
// =========================================================================

void FUN_714c9478(void)

{
  FUN_717daf0c(DAT_71201808);
  return;
}


// =========================================================================
// Function: FUN_714c94dc
// Entry: 0x714c94dc | Size: 332 bytes
// =========================================================================

int FUN_714c94dc(void)

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
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  
  iVar8 = FUN_717daf88(DAT_71201808);
  bVar13 = DAT_700c1e08;
  if (iVar8 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x700c1e08);
    } while (!bVar2);
    DAT_700c1e08 = 0;
    if ((bVar13 & 1) != 0) {
      pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c274c);
      if (*pcVar9 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c273c);
        *(undefined1 *)((int)puVar11 + 0x19) = 1;
        uVar7 = DAT_70081b3c;
        uVar6 = DAT_70081b38;
        uVar5 = DAT_70081b34;
        uVar4 = DAT_70081b30;
        uVar3 = DAT_70081b2c;
        *puVar11 = DAT_70081b28;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar11[4] = uVar6;
        puVar11[5] = uVar7;
        *(undefined1 *)(puVar11 + 6) = DAT_70081b40;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce3d0,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c274c);
        *puVar12 = 1;
      }
      iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c273c);
      if (*(char *)(iVar10 + 0x19) != '\0') {
        uVar14 = 0;
        uVar15 = 0;
        do {
          iVar16 = (uVar14 & 7) * 8;
          uVar17 = iVar16 - 0x20;
          bVar13 = (byte)(0x415379d7 >> iVar16) |
                   (byte)(-0x30b84ae3 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar17) {
            bVar13 = (byte)(0xcf47b51d >> (uVar17 & 0xff));
          }
          *(byte *)(iVar10 + uVar14) = *(byte *)(iVar10 + uVar14) ^ bVar13;
          bVar18 = 0xfffffffe < uVar14;
          bVar2 = uVar15 == 0;
          bVar1 = (0x17 < uVar14) <= uVar15;
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 + bVar18;
        } while (bVar2 && bVar1);
        *(undefined1 *)(iVar10 + 0x19) = 0;
      }
      FUN_7188543c();
    }
  }
  return iVar8;
}


// =========================================================================
// Function: FUN_714c9824
// Entry: 0x714c9824 | Size: 16 bytes
// =========================================================================

undefined4 FUN_714c9824(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = DAT_71201808;
  piVar2 = (int *)FUN_717d1dc8();
  if (piVar2 != (int *)0x0) {
    bVar5 = *(int *)(iVar1 + 0x18) != 0;
    iVar4 = 0;
    if (bVar5) {
      iVar4 = *(int *)(iVar1 + 4);
    }
    if (bVar5 && iVar4 != 0) {
      iVar4 = (**(code **)(*piVar2 + 0x390))(piVar2);
      if (iVar4 == 0) {
        uVar3 = FUN_717dade0(piVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x18));
        iVar1 = (**(code **)(*piVar2 + 0x390))(piVar2);
        if (iVar1 == 0) {
          return uVar3;
        }
      }
      (**(code **)(*piVar2 + 0x44))(piVar2);
      return 0x3c;
    }
  }
  return 0x3c;
}


// =========================================================================
// Function: FUN_714c9888
// Entry: 0x714c9888 | Size: 68 bytes
// =========================================================================

int FUN_714c9888(void)

{
  int iVar1;
  
  imp_pthread_mutex_lock(*DAT_710eb1bc);
  iVar1 = FUN_714c8c88();
  if (iVar1 == 0) {
    imp_pthread_mutex_unlock(*DAT_710eb1bc);
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_714c9978
// Entry: 0x714c9978 | Size: 48 bytes
// =========================================================================

undefined4 FUN_714c9978(void)

{
  FUN_717daf0c(DAT_71201808);
  imp_pthread_mutex_unlock(*DAT_710eb1bc);
  return 1;
}


// =========================================================================
// Function: FUN_714c9a38
// Entry: 0x714c9a38 | Size: 8 bytes
// =========================================================================

undefined4 FUN_714c9a38(void)

{
  return 4;
}


// =========================================================================
// Function: FUN_714c9a58
// Entry: 0x714c9a58 | Size: 2804 bytes
// =========================================================================

undefined4 FUN_714c9a58(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 *puVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int *piVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int *piVar39;
  uint *puVar40;
  int *piVar41;
  uint uVar42;
  byte *pbVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  bool bVar47;
  uint uStack_e0;
  undefined4 *puStack_dc;
  uint uStack_d8;
  byte *apbStack_d4 [2];
  uint *apuStack_cc [2];
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint *puStack_b8;
  int iStack_b4;
  uint *puStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  byte abStack_78 [4];
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined *puStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  int iStack_50;
  int iStack_4c;
  undefined4 auStack_48 [2];
  char cStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = 0;
  uStack_34 = 0;
  iStack_b4 = DAT_70ffc974;
  uStack_2c = *(undefined4 *)(DAT_70ffc974 + 4);
  uStack_28 = *(undefined4 *)(DAT_70ffc974 + 8);
  FUN_7140dc0c(0,&uStack_34);
  puStack_b8 = DAT_70b88a9c;
  puStack_b0 = DAT_70ffc95c;
  pbVar43 = (byte *)auStack_48;
  iStack_bc = DAT_70c38ed8;
  puStack_dc = DAT_70ffc958;
  iStack_c0 = DAT_70b889b4 + 0xa8;
  iStack_c4 = DAT_70b889b4 + 0xa4;
  apuStack_cc[1] = (uint *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c1e0c);
  apbStack_d4[1] = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c275c);
  uStack_d8 = (uint)&uStack_6c | 1;
  apbStack_d4[0] = pbVar43;
  do {
    *puStack_dc = 1;
    while( true ) {
      uVar17 = *(uint *)(iStack_b4 + 0x10);
      bVar47 = uVar17 != 0;
      if (!bVar47) {
        uVar17 = (uint)*(byte *)(iStack_bc + 0x4c);
      }
      if (bVar47 || uVar17 != 0) break;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
      *(undefined4 *)pbVar43 = 0;
      *(undefined4 *)((int)pbVar43 + 4) = 0;
      cStack_40 = '\0';
      iStack_50 = DAT_710eb1c8;
      iStack_4c = DAT_710eb1cc;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb1c0);
      FUN_714cac4c();
      FUN_716e5068();
      if (*puStack_b0 != 9) {
        FUN_714b7808(1);
      }
      FUN_714b5e7c(0,iStack_c4,iStack_c0,0);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70ffc954);
      if (DAT_711f6c05 != '\0') {
        FUN_717cca4c(DAT_712017fc);
      }
      puVar16 = puStack_b0;
      puVar40 = apuStack_cc[1];
      uStack_7c = *puStack_b0;
      *apuStack_cc[1] = (uint)&iStack_50;
      uVar17 = *puStack_b0;
      FUN_713cfa38();
      *puVar40 = 0;
      if (*puVar16 != uVar17) {
        pcVar18 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c276c);
        if (*pcVar18 == '\0') {
          puVar19 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c275c);
          *puVar19 = 0xed448b8c;
          *(undefined1 *)((int)puVar19 + 7) = 1;
          *(undefined4 *)((int)puVar19 + 3) = 0x55bacaed;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce40c,puVar19,&DAT_70b0e000);
          puVar23 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c276c);
          *puVar23 = 1;
        }
        if (apbStack_d4[1][7] != 0) {
          apbStack_d4[1][7] = 0;
          *apbStack_d4[1] = ~*apbStack_d4[1];
          apbStack_d4[1][1] = ~apbStack_d4[1][1];
          apbStack_d4[1][2] = apbStack_d4[1][2] ^ 0x25;
          apbStack_d4[1][3] = apbStack_d4[1][3] ^ 0x99;
          apbStack_d4[1][4] = apbStack_d4[1][4] ^ 0xaf;
          apbStack_d4[1][5] = apbStack_d4[1][5] ^ 0xe5;
          apbStack_d4[1][6] = apbStack_d4[1][6] ^ 0x55;
        }
        uVar17 = imp_strlen(apbStack_d4[1]);
        if (0xfffffff7 < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_712f6c1c(&uStack_6c);
        }
        if (uVar17 < 0xb) {
          uStack_6c = CONCAT31(uStack_6c._1_3_,(char)(uVar17 << 1));
          uVar24 = uStack_d8;
          if (uVar17 != 0) goto LAB_714c9d18;
        }
        else {
          uVar24 = thunk_MwhHq((uVar17 | 7) + 1);
          uStack_6c = (uVar17 | 7) + 2;
          uStack_68 = uVar17;
          uStack_64 = uVar24;
LAB_714c9d18:
          imp___aeabi_memmove(uVar24,apbStack_d4[1],uVar17);
        }
        *(undefined1 *)(uVar24 + uVar17) = 0;
        thunk_JTLCYfEcbCeQVXSyFtQFASTx(abStack_78,*puStack_b0);
        uVar24 = uStack_70;
        uVar17 = uStack_74;
        if ((abStack_78[0] & 1) == 0) {
          uVar17 = (uint)(abStack_78[0] >> 1);
          uVar24 = (uint)abStack_78 | 1;
        }
        puVar19 = (undefined4 *)
                  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                            (&uStack_6c,uVar24,uVar17);
        puStack_60 = (undefined *)*puVar19;
        uStack_5c = puVar19[1];
        uStack_58 = puVar19[2];
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        uVar17 = uStack_58;
        if (((uint)puStack_60 & 1) == 0) {
          uVar17 = (uint)&puStack_60 | 1;
        }
        FUN_717316bc(uVar17,0);
        if (((uint)puStack_60 & 1) != 0) {
          thunk_qNQrlu(uStack_58);
        }
        if ((abStack_78[0] & 1) != 0) {
          thunk_qNQrlu(uStack_70);
        }
        if ((uStack_6c & 1) != 0) {
          thunk_qNQrlu(uStack_64);
        }
      }
      if ((*(int *)(iStack_b4 + 0x10) != 0) || (*(char *)(iStack_bc + 0x4c) != '\0')) {
        cStack_40 = '\0';
      }
      puVar40 = &uStack_e0;
      if (uStack_7c == 8) {
        while( true ) {
          uVar24 = puVar40[1] ^ 0x679b29b;
          uVar17 = *puVar40 ^ 0x6a4dab1f | uVar24;
          bVar47 = uVar17 == 0;
          if (bVar47) {
            uVar24 = puVar40[3] ^ 0xfcc126c8;
            uVar17 = puVar40[2] ^ 0x6efdd0cf;
          }
          if ((bVar47 && (uVar17 == 0 && uVar24 == 0)) &&
             (puVar40[4] == 0xbefc55d6 && puVar40[5] == 0x370f3a77)) break;
          puVar40 = puVar40 + 1;
        }
        puVar40 = puVar40 + 0xc017;
        if (*puVar40 == 0) {
          puVar19 = (undefined4 *)thunk_MwhHq(0xc);
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = puVar19 + 1;
          *puVar40 = (uint)puVar19;
        }
        puVar16 = puStack_b8;
        uStack_90 = 0xc2b2ae8d;
        uStack_88 = 0x6854fb60;
        uStack_84 = 0x50;
        uStack_8c = 0x40801011;
        uStack_80 = 0x61c8869e;
        uVar44 = 0xee40c5e7;
        uStack_7c = 0xba94458a;
        iVar30 = 0;
        uVar17 = 0x60ea283e;
        uVar24 = 0x2300;
        puVar46 = puStack_b8;
        do {
          uStack_98 = uVar24;
          uStack_9c = uVar17;
          iStack_94 = iVar30;
          lVar8 = (ulonglong)puVar46[6] * 0x27d4eb4f;
          uVar17 = (uint)lVar8;
          uVar25 = uVar17 + uStack_7c;
          uVar17 = puVar46[7] * 0x27d4eb4f +
                   puVar46[6] * -0x3d4d51c3 + (int)((ulonglong)lVar8 >> 0x20) + uStack_80 +
                   (uint)CARRY4(uVar17,uStack_7c);
          uVar1 = uVar17 >> 1;
          uStack_a0 = uVar25 * -0x80000000 | uVar1;
          uVar25 = uVar25 >> 1;
          uStack_a4 = uVar17 * -0x80000000 | uVar25;
          uStack_7c = (uint)((ulonglong)uStack_a0 * 0x85ebca87);
          uStack_80 = uStack_a4 * -0x7a143579 +
                      uStack_a0 * -0x61c8864f + (int)((ulonglong)uStack_a0 * 0x85ebca87 >> 0x20);
          lVar8 = (ulonglong)puVar46[4] * 0x27d4eb4f;
          uVar17 = (uint)lVar8;
          uVar26 = uVar17 + uStack_8c;
          uVar17 = puVar46[5] * 0x27d4eb4f +
                   puVar46[4] * -0x3d4d51c3 + (int)((ulonglong)lVar8 >> 0x20) + uStack_84 +
                   (uint)CARRY4(uVar17,uStack_8c);
          uVar2 = uVar17 >> 1;
          uStack_a8 = uVar26 * -0x80000000 | uVar2;
          uVar26 = uVar26 >> 1;
          uStack_ac = uVar17 * -0x80000000 | uVar26;
          uStack_8c = (uint)((ulonglong)uStack_a8 * 0x85ebca87);
          uVar24 = *puVar46;
          uStack_84 = uStack_ac * -0x7a143579 +
                      uStack_a8 * -0x61c8864f + (int)((ulonglong)uStack_a8 * 0x85ebca87 >> 0x20);
          puVar5 = puVar46 + 3;
          puVar6 = puVar46 + 1;
          puVar7 = puVar46 + 2;
          puVar46 = puVar46 + 8;
          lVar8 = (ulonglong)*puVar7 * 0x27d4eb4f;
          uVar17 = (uint)lVar8;
          uVar36 = uVar17 + uStack_88;
          uVar17 = *puVar5 * 0x27d4eb4f + *puVar7 * -0x3d4d51c3 + (int)((ulonglong)lVar8 >> 0x20) +
                   uStack_90 + (uint)CARRY4(uVar17,uStack_88);
          uVar3 = uVar17 >> 1;
          uVar42 = uVar36 * -0x80000000 | uVar3;
          uVar36 = uVar36 >> 1;
          uVar20 = uVar17 * -0x80000000 | uVar36;
          uStack_88 = (uint)((ulonglong)uVar42 * 0x85ebca87);
          uStack_90 = uVar20 * -0x7a143579 +
                      uVar42 * -0x61c8864f + (int)((ulonglong)uVar42 * 0x85ebca87 >> 0x20);
          lVar8 = (ulonglong)uVar24 * 0x27d4eb4f;
          uVar17 = (uint)lVar8;
          uVar32 = uVar17 + uVar44;
          uVar17 = *puVar6 * 0x27d4eb4f + uVar24 * -0x3d4d51c3 + (int)((ulonglong)lVar8 >> 0x20) +
                   uStack_9c + (uint)CARRY4(uVar17,uVar44);
          uVar4 = uVar17 >> 1;
          uVar34 = uVar32 * -0x80000000 | uVar4;
          uVar32 = uVar32 >> 1;
          uVar27 = uVar17 * -0x80000000 | uVar32;
          iVar30 = iStack_94 - (uint)(uStack_98 < 0x20);
          uVar44 = (uint)((ulonglong)uVar34 * 0x85ebca87);
          uVar17 = uVar27 * -0x7a143579 +
                   uVar34 * -0x61c8864f + (int)((ulonglong)uVar34 * 0x85ebca87 >> 0x20);
          uVar24 = uStack_98 - 0x20;
        } while (uStack_98 - 0x20 != 0 || iVar30 != 0);
        uVar37 = uVar44 << 1 | uVar17 >> 0x1f;
        uVar24 = uStack_88 << 7 | uStack_90 >> 0x19;
        uVar38 = uVar24 + uVar37;
        uVar33 = uStack_8c << 0xc | uStack_84 >> 0x14;
        uVar28 = uVar38 + uVar33;
        uStack_84 = (uStack_90 * 0x80 | uStack_88 >> 0x19) + (uVar17 * 2 | uVar44 >> 0x1f) +
                    (uint)CARRY4(uVar24,uVar37) + (uStack_84 * 0x1000 | uStack_8c >> 0x14) +
                    (uint)CARRY4(uVar38,uVar33);
        uStack_88 = (uint)((ulonglong)uVar34 * 0x80000000 >> 0x20);
        uVar45 = (uint)((ulonglong)uVar34 * 0x80000000) |
                 uVar27 * 0xf796ca9 +
                 uVar34 * -0x210ca4ff + (int)((ulonglong)uVar34 * 0xf796ca9 >> 0x20) >> 1;
        lVar8 = (ulonglong)uVar45 * 0x85ebca87;
        uVar27 = uStack_7c << 0x12 | uStack_80 >> 0xe;
        uVar34 = uVar28 + uVar27 ^ (uint)lVar8;
        lVar9 = (ulonglong)uVar34 * 0x85ebca87;
        uStack_8c = (uint)lVar9;
        uVar31 = (uint)((ulonglong)uVar42 * 0x80000000) |
                 uVar20 * 0xf796ca9 +
                 uVar42 * -0x210ca4ff + (int)((ulonglong)uVar42 * 0xf796ca9 >> 0x20) >> 1;
        lVar10 = (ulonglong)uVar31 * 0x85ebca87;
        uVar17 = uStack_8c + 0xc2b2ae63 ^ (uint)lVar10;
        lVar11 = (ulonglong)uVar17 * 0x85ebca87;
        uVar20 = (uint)lVar11;
        uVar33 = (uint)((ulonglong)uStack_a8 * 0x80000000) |
                 uStack_ac * 0xf796ca9 +
                 uStack_a8 * -0x210ca4ff + (int)((ulonglong)uStack_a8 * 0xf796ca9 >> 0x20) >> 1;
        lVar12 = (ulonglong)uVar33 * 0x85ebca87;
        uVar24 = uVar20 + 0xc2b2ae63 ^ (uint)lVar12;
        lVar13 = (ulonglong)uVar24 * 0x85ebca87;
        uVar37 = (uint)lVar13;
        uVar38 = (uint)((ulonglong)uStack_a0 * 0x80000000) |
                 uStack_a4 * 0xf796ca9 +
                 uStack_a0 * -0x210ca4ff + (int)((ulonglong)uStack_a0 * 0xf796ca9 >> 0x20) >> 1;
        lVar14 = (ulonglong)uVar38 * 0x85ebca87;
        uVar44 = uVar37 + 0xc2b2ae63 ^ (uint)lVar14;
        lVar15 = (ulonglong)uVar44 * 0x85ebca87;
        uVar29 = (uint)lVar15;
        uVar17 = ((((uStack_84 + (uStack_80 * 0x40000 | uStack_7c >> 0xe) +
                     (uint)CARRY4(uVar28,uVar27) ^
                    (uVar32 * -0x80000000 + uVar4 * -0x784349ac + uStack_88) * -0x7a143579 +
                    uVar45 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) * -0x7a143579 +
                    uVar34 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) + -0x7a143589 +
                    (uint)(0x3d4d519c < uStack_8c) ^
                   (uVar36 * -0x80000000 +
                   uVar3 * -0x784349ac + (int)((ulonglong)uVar42 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20)) *
                   -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar20) ^
                  (uVar26 * -0x80000000 +
                  uVar2 * -0x784349ac + (int)((ulonglong)uStack_a8 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20)) *
                  -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar13 >> 0x20) +
                  -0x7a143589 + (uint)(0x3d4d519c < uVar37) ^
                 (uVar25 * -0x80000000 +
                 uVar1 * -0x784349ac + (int)((ulonglong)uStack_a0 * 0x80000000 >> 0x20)) *
                 -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar14 >> 0x20)) *
                 -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar15 >> 0x20) + -0x7a143589
                 + (uint)(0x3d4d519c < uVar29) + (uint)(0xffffdcff < uVar29 + 0xc2b2ae63);
        piVar35 = (int *)*puVar40;
        piVar21 = (int *)piVar35[1];
        piVar39 = piVar35 + 1;
        while (piVar41 = piVar39, apuStack_cc[0] = puVar40, piVar21 != (int *)0x0) {
          while (piVar22 = piVar21, (uint *)piVar22[4] <= puStack_b8) {
            if (puStack_b8 <= (uint *)piVar22[4]) goto LAB_714ca3c8;
            piVar21 = (int *)piVar22[1];
            if ((int *)piVar22[1] == (int *)0x0) {
              piVar39 = piVar22 + 1;
              piVar41 = piVar22;
              goto LAB_714ca364;
            }
          }
          piVar39 = piVar22;
          piVar21 = (int *)*piVar22;
        }
LAB_714ca364:
        piVar22 = (int *)thunk_MwhHq(0x24);
        piVar22[4] = (int)puVar16;
        *piVar22 = 0;
        piVar22[1] = 0;
        piVar22[2] = (int)piVar41;
        *piVar39 = (int)piVar22;
        piVar21 = piVar22;
        if (*(int *)*piVar35 != 0) {
          *piVar35 = *(int *)*piVar35;
          piVar21 = (int *)*piVar39;
        }
        FUN_712f807c(piVar35[1],piVar21);
        piVar35[2] = piVar35[2] + 1;
LAB_714ca3c8:
        uVar24 = uVar29 + 0xc2b2d163 ^ uVar17 >> 1;
        lVar8 = (ulonglong)uVar24 * 0x27d4eb4f;
        uVar44 = (uint)lVar8;
        uVar17 = uVar17 * 0x27d4eb4f + uVar24 * -0x3d4d51c3 + (int)((ulonglong)lVar8 >> 0x20);
        uVar44 = (uVar44 >> 0x1d | uVar17 * 8) ^ uVar44;
        lVar8 = (ulonglong)uVar44 * 0x9e3779f9;
        uVar17 = (uVar17 ^ uVar17 >> 0x1d) * -0x61c88607 +
                 uVar44 * 0x165667b1 + (int)((ulonglong)lVar8 >> 0x20);
        piVar22[8] = uVar17;
        piVar22[7] = uVar17 ^ (uint)lVar8;
        piVar22[6] = 0x2300;
        piVar22[5] = (int)puStack_b8;
        pbVar43 = apbStack_d4[0];
      }
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70ffc954);
      if (cStack_40 != '\0') {
        uStack_5c = CONCAT31(uStack_5c._1_3_,1);
        puStack_60 = &DAT_710eb1c0;
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
        do {
          if (DAT_710eb1c8 != iStack_50 || DAT_710eb1cc != iStack_4c) break;
          iVar30 = FUN_713a2214(&DAT_710eb1c4,&puStack_60,pbVar43);
        } while (iVar30 != 1);
        if ((char)uStack_5c != '\0') {
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_60);
        }
      }
    }
    iVar30 = FUN_713cfe80();
    if (iVar30 == 0) {
      FUN_7140dc0c(0x16,0);
      FUN_7140dc0c(0x19,0);
      FUN_7139a77c(*DAT_70b46448);
      FUN_7139be24();
      return 0;
    }
  } while( true );
}


// =========================================================================
// Function: FUN_714cac4c
// Entry: 0x714cac4c | Size: 348 bytes
// =========================================================================

void FUN_714cac4c(void)

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
  if (((DAT_710eb3b8 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eb3b8), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c278c);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c277c);
      *(undefined1 *)(puVar9 + 5) = 1;
      uVar6 = DAT_70081b58;
      uVar5 = DAT_70081b54;
      uVar4 = DAT_70081b50;
      uVar3 = DAT_70081b4c;
      *puVar9 = DAT_70081b48;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce434,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c278c);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c277c);
    if (*(char *)(iVar7 + 0x14) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x73435109 >> iVar13) |
                 (byte)(-0xf4de79 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xff0b2187 >> (uVar14 & 0xff));
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
    DAT_710eb3b4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eb3b8);
  }
                    /* WARNING: Could not recover jumptable at 0x714cac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eb3b4)();
  return;
}


// =========================================================================
// Function: FUN_714cb040
// Entry: 0x714cb040 | Size: 952 bytes
// =========================================================================

undefined4 * FUN_714cb040(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  byte abStack_30 [8];
  uint uStack_28;
  
  uVar12 = *(uint *)(param_1 + 4);
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar12 = (uint)(bVar1 >> 1);
  }
  if (uVar12 - 4 <= uVar12) {
    uVar12 = uVar12 - 4;
  }
  pbVar9 = *(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    pbVar9 = param_1 + 1;
  }
  if (0xfffffff7 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_4c);
  }
  if (uVar12 < 0xb) {
    uVar11 = (uint)&uStack_4c | 1;
    uStack_4c = CONCAT31(uStack_4c._1_3_,(char)(uVar12 << 1));
    if (uVar12 == 0) goto LAB_714cb0ec;
  }
  else {
    uVar11 = thunk_MwhHq((uVar12 | 7) + 1);
    uStack_4c = (uVar12 | 7) + 2;
    uStack_48 = uVar12;
    uStack_44 = uVar11;
  }
  imp___aeabi_memmove(uVar11,pbVar9,uVar12);
LAB_714cb0ec:
  *(undefined1 *)(uVar11 + uVar12) = 0;
  uVar12 = uStack_44;
  if ((uStack_4c & 1) == 0) {
    uVar12 = (uint)&uStack_4c | 1;
  }
  FUN_714bbb04(&uStack_40,uVar12);
  FUN_714ba554(abStack_30,&uStack_40,0,0,0);
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  if ((uStack_4c & 1) != 0) {
    thunk_qNQrlu(uStack_44);
  }
  uVar12 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar12 = (uint)abStack_30 | 1;
  }
  iVar2 = imp_opendir(uVar12);
  if (iVar2 == 0) {
    pbVar9 = *(byte **)(param_1 + 8);
    if ((*param_1 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    puVar3 = (undefined4 *)FUN_71961d30(pbVar9,9,0x72,param_2,param_3);
  }
  else {
    puVar3 = (undefined4 *)thunk_MwhHq(0x20);
    *puVar3 = 0xdeadbeef;
    piVar4 = puVar3 + 1;
    *piVar4 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    iVar5 = imp_readdir(iVar2);
    if (iVar5 != 0) {
      uVar12 = (uint)&uStack_40 | 1;
      do {
        pcVar13 = (char *)(iVar5 + 0x13);
        if (*pcVar13 != '.') {
          *piVar4 = *piVar4 + 1;
          uVar11 = imp_strlen(pcVar13);
          if (0xfffffff7 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6c1c(&uStack_40);
          }
          if (uVar11 < 0xb) {
            uStack_40 = CONCAT31(uStack_40._1_3_,(char)(uVar11 << 1));
            uVar6 = uVar12;
            if (uVar11 != 0) goto LAB_714cb278;
          }
          else {
            uVar6 = thunk_MwhHq((uVar11 | 7) + 1);
            uStack_40 = (uVar11 | 7) + 2;
            uStack_3c = uVar11;
            uStack_38 = uVar6;
LAB_714cb278:
            imp___aeabi_memmove(uVar6,pcVar13,uVar11);
          }
          puVar7 = (uint *)puVar3[6];
          puVar10 = (uint *)puVar3[7];
          *(undefined1 *)(uVar6 + uVar11) = 0;
          if (puVar7 < puVar10) {
            puVar10 = puVar7 + 3;
            *puVar7 = uStack_40;
            puVar7[1] = uStack_3c;
            puVar7[2] = uStack_38;
          }
          else {
            iVar14 = puVar3[5];
            iVar5 = (int)puVar7 - iVar14;
            uVar11 = (iVar5 >> 2) * -0x55555555 + 1;
            if (0x15555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6ffc(puVar3 + 5);
            }
            iVar8 = (int)puVar10 - iVar14 >> 2;
            if (uVar11 < (uint)(iVar8 * 0x55555556)) {
              uVar11 = iVar8 * 0x55555556;
            }
            if (0xaaaaaa9 < (uint)(iVar8 * -0x55555555)) {
              uVar11 = 0x15555555;
            }
            if (uVar11 == 0) {
              iVar8 = 0;
            }
            else {
              if (0x15555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_712f6cf0();
              }
              iVar8 = thunk_MwhHq(uVar11 * 0xc);
            }
            puVar7 = (uint *)(iVar8 + (iVar5 >> 2) * 4);
            *puVar7 = uStack_40;
            puVar7[1] = uStack_3c;
            puVar7[2] = uStack_38;
            imp___aeabi_memcpy4((int)puVar7 - iVar5,iVar14,iVar5);
            puVar10 = puVar7 + 3;
            puVar3[5] = (int)puVar7 - iVar5;
            puVar3[6] = puVar10;
            puVar3[7] = iVar8 + uVar11 * 0xc;
            if (iVar14 != 0) {
              thunk_qNQrlu(iVar14);
            }
          }
          puVar3[6] = puVar10;
        }
        iVar5 = imp_readdir(iVar2);
      } while (iVar5 != 0);
    }
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (puVar3 + 2,abStack_30);
    imp_closedir(iVar2);
  }
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return puVar3;
}


// =========================================================================
// Function: FUN_714cb6b0
// Entry: 0x714cb6b0 | Size: 492 bytes
// =========================================================================

void FUN_714cb6b0(int *param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (*param_1 != -0x21524111) {
    pbVar6 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    FUN_7196226c(param_1,pbVar6);
    uVar3 = FUN_71963264(param_1);
    *param_3 = uVar3;
    uVar3 = FUN_71963290(param_1);
    *param_4 = uVar3;
    FUN_71962d18(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 2);
  uVar9 = param_1[3];
  if ((bVar1 & 1) == 0) {
    uVar9 = (uint)(bVar1 >> 1);
  }
  uVar8 = uVar9 + 1;
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_40);
  }
  if (uVar8 < 0xb) {
    uStack_38 = 0;
    uStack_3c = 0;
    uStack_40 = (uint)(byte)((char)uVar8 * '\x02');
    uVar7 = (uint)&uStack_40 | 1;
    if (uVar9 == 0) goto LAB_714cb7c0;
  }
  else {
    uVar7 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_40 = (uVar8 | 7) + 2;
    uStack_3c = uVar8;
    uStack_38 = uVar7;
  }
  iVar5 = param_1[4];
  if ((bVar1 & 1) == 0) {
    iVar5 = (int)param_1 + 9;
  }
  imp___aeabi_memmove(uVar7,iVar5,uVar9);
LAB_714cb7c0:
  *(undefined2 *)(uVar7 + uVar9) = 0x2f;
  uVar9 = *(uint *)(param_2 + 4);
  pbVar6 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    uVar9 = (uint)(*param_2 >> 1);
    pbVar6 = param_2 + 1;
  }
  puVar2 = (uint *)thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                             (&uStack_40,pbVar6,uVar9);
  uStack_30 = *puVar2;
  uStack_2c = puVar2[1];
  uVar8 = puVar2[2];
  *puVar2 = 0;
  uVar7 = uStack_30 & 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar9 = uVar8;
  if (uVar7 == 0) {
    uVar9 = (uint)&uStack_30 | 1;
  }
  uStack_28 = uVar8;
  uVar3 = imp_fopen(uVar9,&DAT_70068f6e);
  if (uVar7 != 0) {
    thunk_qNQrlu(uVar8);
  }
  if ((uStack_40 & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  imp_fseek(uVar3,0,2);
  uVar4 = imp_ftell(uVar3);
  imp_fseek(uVar3,0,0);
  imp_fclose(uVar3);
  *param_3 = uVar4;
  *param_4 = 1;
  return;
}


// =========================================================================
// Function: FUN_714cba78
// Entry: 0x714cba78 | Size: 348 bytes
// =========================================================================

void FUN_714cba78(int *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  
  if (*param_2 == -0x21524111) {
    pbVar1 = (byte *)(param_2[5] + param_3 * 0xc);
    if ((*pbVar1 & 1) != 0) {
      FUN_712f6d58(param_1,*(undefined4 *)(pbVar1 + 8),*(undefined4 *)(pbVar1 + 4));
      return;
    }
    iVar5 = *(int *)(pbVar1 + 4);
    iVar2 = *(int *)(pbVar1 + 8);
    *param_1 = *(int *)pbVar1;
    param_1[1] = iVar5;
    param_1[2] = iVar2;
    return;
  }
  iVar2 = FUN_71962c9c(param_2,param_3);
  if (iVar2 == 0) {
    uVar4 = FUN_7196323c(param_2);
    uVar3 = imp_strlen();
    if (0xfffffff7 < uVar3) goto LAB_714cbbcc;
    if (uVar3 < 0xb) {
      puVar6 = (undefined1 *)((int)param_1 + 1);
      *(char *)param_1 = (char)(uVar3 << 1);
      if (uVar3 == 0) goto LAB_714cbbb8;
    }
    else {
      puVar6 = (undefined1 *)thunk_MwhHq((uVar3 | 7) + 1);
      param_1[2] = (int)puVar6;
      *param_1 = (uVar3 | 7) + 2;
      param_1[1] = uVar3;
    }
    imp___aeabi_memmove(puVar6,uVar4,uVar3);
LAB_714cbbb8:
    puVar6[uVar3] = 0;
    FUN_71962d18(param_2);
    return;
  }
  uVar3 = imp_strlen(&DAT_70064a63);
  if (0xfffffff7 < uVar3) {
LAB_714cbbcc:
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(param_1);
  }
  if (uVar3 < 0xb) {
    puVar6 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(uVar3 << 1);
    if (uVar3 == 0) goto LAB_714cbb80;
  }
  else {
    puVar6 = (undefined1 *)thunk_MwhHq((uVar3 | 7) + 1);
    param_1[2] = (int)puVar6;
    *param_1 = (uVar3 | 7) + 2;
    param_1[1] = uVar3;
  }
  imp___aeabi_memclr(puVar6,uVar3);
LAB_714cbb80:
  puVar6[uVar3] = 0;
  return;
}


// =========================================================================
// Function: FUN_714cbd40
// Entry: 0x714cbd40 | Size: 788 bytes
// =========================================================================

bool FUN_714cbd40(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar2 = imp_strlen(param_2);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar2 < 0xb) {
    uVar8 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar2 << 1));
    if (uVar2 == 0) goto LAB_714cbdbc;
  }
  else {
    uVar8 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_30 = (uVar2 | 7) + 2;
    uStack_2c = uVar2;
    uStack_28 = uVar8;
  }
  imp___aeabi_memcpy(uVar8,param_2,uVar2);
LAB_714cbdbc:
  *(undefined1 *)(uVar8 + uVar2) = 0;
  piVar3 = (int *)FUN_714cb040(&uStack_30,0,0);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (piVar3 != (int *)0x0) {
    imp___strcpy_chk(param_1 + 0x10,param_2,0x104);
    if (*piVar3 == -0x21524111) {
      iVar9 = piVar3[1];
    }
    else {
      iVar9 = FUN_7196345c(piVar3);
    }
    if (iVar9 != 0) {
      uVar2 = (uint)&uStack_30 | 1;
      iVar10 = 0;
      iVar7 = 0;
      do {
        FUN_714cba78(&uStack_30,piVar3,iVar7);
        uVar5 = uStack_28;
        uVar8 = uStack_2c;
        if ((uStack_30 & 1) == 0) {
          uVar8 = uStack_30 >> 1 & 0x7f;
          uVar5 = uVar2;
        }
        cVar1 = *(char *)(uVar5 + uVar8 + -1);
        if (cVar1 != '/' && cVar1 != '\\') {
          if (*piVar3 == -0x21524111) {
            FUN_714cb6b0(piVar3,piVar3[5] + iVar10,auStack_34,&uStack_38);
          }
          else {
            FUN_719629a4(piVar3,iVar7);
            FUN_71963264(piVar3);
            uStack_38 = FUN_71963290(piVar3);
            FUN_71962d18(piVar3);
          }
          uVar6 = 0;
          if (*piVar3 != -0x21524111) {
            uVar8 = uStack_28;
            if ((uStack_30 & 1) == 0) {
              uVar8 = uVar2;
            }
            FUN_7196226c(piVar3,uVar8);
            uVar6 = FUN_719632bc(piVar3);
            FUN_71962d18(piVar3);
          }
          uVar5 = *(int *)(param_1 + 8) + 1;
          uVar8 = uVar5 * 3;
          if (*(uint *)(param_1 + 4) < uVar5) {
            iVar4 = (uVar8 >> 1) + 3;
            *(int *)(param_1 + 4) = iVar4;
            if (*(int *)(param_1 + 0xc) == 0) {
              iVar4 = imp_malloc(iVar4 * 0xc);
            }
            else {
              iVar4 = imp_realloc();
              uVar5 = *(int *)(param_1 + 8) + 1;
            }
            uVar8 = uVar5 * 3;
            *(uint *)(param_1 + 8) = uVar5;
            *(int *)(param_1 + 0xc) = iVar4;
          }
          else {
            *(uint *)(param_1 + 8) = uVar5;
            iVar4 = *(int *)(param_1 + 0xc);
          }
          iVar4 = iVar4 + uVar8 * 4;
          *(undefined4 *)(iVar4 + -0xc) = uVar6;
          *(undefined4 *)(iVar4 + -4) = 0;
          *(undefined4 *)(iVar4 + -8) = uStack_38;
          uVar8 = uStack_28;
          if ((uStack_30 & 1) == 0) {
            uVar8 = uVar2;
          }
          uVar6 = imp_strdup(uVar8);
          *(undefined4 *)(iVar4 + -4) = uVar6;
        }
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 != iVar7);
    }
    if (1 < *(uint *)(param_1 + 8)) {
      imp_qsort(*(undefined4 *)(param_1 + 0xc),*(uint *)(param_1 + 8),0xc,FUN_714cc2f4);
    }
  }
  return piVar3 != (int *)0x0;
}


// =========================================================================
// Function: FUN_714cc2f4
// Entry: 0x714cc2f4 | Size: 408 bytes
// =========================================================================

void FUN_714cc2f4(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_710eb3d0 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eb3d0), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27ec,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27dc);
      *(undefined1 *)(puVar10 + 0xe) = 1;
      uVar5 = DAT_70081b9c;
      uVar4 = DAT_70081b98;
      uVar3 = DAT_70081b94;
      *puVar10 = DAT_70081b90;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70081bb0;
      uVar5 = DAT_70081bac;
      uVar4 = DAT_70081ba8;
      uVar3 = DAT_70081ba4;
      puVar10[4] = DAT_70081ba0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70081bc4;
      uVar5 = DAT_70081bc0;
      uVar4 = DAT_70081bbc;
      uVar3 = DAT_70081bb8;
      puVar10[9] = DAT_70081bb4;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce4d8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27ec);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27dc);
    if (*(char *)(iVar8 + 0x38) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x9b89fb4f >> iVar14) |
                (byte)(-0x3052ac25 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xcfad53db >> (uVar15 & 0xff));
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
    DAT_710eb3cc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eb3d0);
  }
                    /* WARNING: Could not recover jumptable at 0x714cc328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eb3cc)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714cc744
// Entry: 0x714cc744 | Size: 356 bytes
// =========================================================================

void FUN_714cc744(void)

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
// Function: FUN_714ccb40
// Entry: 0x714ccb40 | Size: 364 bytes
// =========================================================================

void FUN_714ccb40(void)

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
  if (((DAT_710eb3c8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_710eb3c8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27cc);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27bc);
      *(undefined1 *)((int)puVar10 + 0x17) = 1;
      uVar6 = DAT_70081b88;
      uVar5 = DAT_70081b84;
      uVar4 = DAT_70081b80;
      uVar3 = DAT_70081b7c;
      *puVar10 = DAT_70081b78;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar7 = DAT_70081b8e;
      *(undefined2 *)(puVar10 + 5) = DAT_70081b8c;
      *(undefined1 *)((int)puVar10 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce4a0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27cc);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27bc);
    if (*(char *)(iVar8 + 0x17) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar16 = (byte)(0xbd3592f >> iVar14) |
                 (byte)(-0x7cf2888d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar16 = (byte)(0x830d7773 >> (uVar15 & 0xff));
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
    DAT_710eb3c4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_710eb3c8);
  }
                    /* WARNING: Could not recover jumptable at 0x714ccb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_710eb3c4)();
  return;
}


// =========================================================================
// Function: FUN_714ccf44
// Entry: 0x714ccf44 | Size: 248 bytes
// =========================================================================

undefined4 FUN_714ccf44(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  cVar1 = *param_1;
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c280c);
  if (*pcVar2 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27fc);
    *puVar5 = 0x11535d2;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714ce528,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c280c);
    *puVar6 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c27fc);
  if (pbVar3[3] != 0) {
    pbVar3[3] = 0;
    *pbVar3 = *pbVar3 ^ 0xa5;
    pbVar3[1] = pbVar3[1] ^ 0x57;
    pbVar3[2] = pbVar3[2] ^ 0x15;
  }
  iVar4 = imp_strcmp(param_2);
  uVar7 = 1;
  if (cVar1 == '/') {
    uVar7 = 3;
  }
  FUN_714c5f6c(uVar7,&uStack_1c,param_1,iVar4 == 0);
  return uStack_1c;
}


// =========================================================================
// Function: thunk_FUN_714c82ec
// Entry: 0x714cd1d8 | Size: 4 bytes
// =========================================================================

undefined4 thunk_FUN_714c82ec(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
LAB_714c8310:
    imp_fclose(iVar1);
    goto LAB_714c8314;
  }
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == (undefined4 *)0x0) goto LAB_714c838c;
  switch(*puVar2) {
  case 1:
  case 7:
    iVar1 = puVar2[2];
    goto LAB_714c8310;
  case 2:
    FUN_714c84a8(puVar2[2]);
    break;
  case 3:
  case 4:
  case 5:
    puVar2[2] = 0;
    break;
  case 6:
    FUN_717d29c8(DAT_71201808,puVar2[2]);
    break;
  default:
    goto switchD_714c8360_default;
  }
LAB_714c8314:
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
switchD_714c8360_default:
    if (puVar2[3] != 0) {
      imp_free();
    }
    thunk_qNQrlu(puVar2);
  }
LAB_714c838c:
  thunk_qNQrlu(param_1);
  return 0;
}


// =========================================================================
// Function: thunk_FUN_714c52d0
// Entry: 0x714cd270 | Size: 4 bytes
// =========================================================================

int thunk_FUN_714c52d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[1] != 0) {
    iVar1 = imp_ftell(param_1[1]);
    return iVar1;
  }
  puVar2 = (undefined4 *)*param_1;
  switch(*puVar2) {
  case 1:
    iVar1 = imp_ftell(puVar2[2]);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    return puVar2[5];
  case 6:
    iVar1 = FUN_717d2a84(DAT_71201808,puVar2[2]);
    break;
  case 7:
    iVar1 = puVar2[5];
    goto LAB_714c5378;
  default:
    goto switchD_714c531c_default;
  }
  puVar2 = (undefined4 *)*param_1;
LAB_714c5378:
  iVar1 = iVar1 - puVar2[0xb];
switchD_714c531c_default:
  return iVar1;
}


// =========================================================================
// Function: FUN_714cd2a8
// Entry: 0x714cd2a8 | Size: 52 bytes
// =========================================================================

void FUN_714cd2a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 != 2) {
      return;
    }
    param_2 = FUN_714c8774();
  }
  FUN_714c5bec(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_714cdfc8
// Entry: 0x714cdfc8 | Size: 848 bytes
// =========================================================================

void FUN_714cdfc8(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5,
                 int param_6)

{
  int iVar1;
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
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [16];
  uint auStack_68 [17];
  
  auStack_68[3] = 0x6b206574;
  auStack_68[2] = 0x79622d32;
  auStack_68[1] = 0x3320646e;
  auStack_68[0] = 0x61707865;
  imp___aeabi_memcpy(auStack_68 + 4,param_1,0x20);
  auStack_68[0xd] = param_4;
  auStack_68[0xc] = param_3;
  uStack_bc = *param_5;
  auStack_68[0xf] = param_5[1];
  auStack_68[0xe] = uStack_bc;
  iVar1 = 4;
  uStack_c4 = auStack_68[0];
  uStack_ac = auStack_68[1];
  uStack_b8 = auStack_68[2];
  uStack_b4 = auStack_68[9];
  uStack_c0 = param_3;
  uStack_b0 = param_4;
  do {
    auStack_68[0xf] = auStack_68[0xf] ^ auStack_68[3] + auStack_68[7];
    auStack_68[0xb] = auStack_68[0xb] + (auStack_68[0xf] >> 0x10 | auStack_68[0xf] << 0x10);
    uVar4 = auStack_68[0xb] ^ auStack_68[7];
    uVar9 = auStack_68[3] + auStack_68[7] + (uVar4 >> 0x14 | uVar4 << 0xc);
    uStack_c0 = uStack_c0 ^ uStack_c4 + auStack_68[4];
    auStack_68[8] = auStack_68[8] + (uStack_c0 >> 0x10 | uStack_c0 << 0x10);
    uVar6 = auStack_68[8] ^ auStack_68[4];
    uStack_c4 = uStack_c4 + auStack_68[4] + (uVar6 >> 0x14 | uVar6 << 0xc);
    uVar2 = uStack_c4 ^ (uStack_c0 >> 0x10 | uStack_c0 << 0x10);
    auStack_68[8] = auStack_68[8] + (uVar2 >> 0x18 | uVar2 << 8);
    uVar10 = auStack_68[8] ^ (uVar6 >> 0x14 | uVar6 << 0xc);
    auStack_68[3] = uVar9 + (uVar10 >> 0x19 | uVar10 << 7);
    uStack_bc = uStack_bc ^ uStack_b8 + auStack_68[6];
    auStack_68[10] = auStack_68[10] + (uStack_bc >> 0x10 | uStack_bc << 0x10);
    uVar7 = auStack_68[10] ^ auStack_68[6];
    uStack_b8 = uStack_b8 + auStack_68[6] + (uVar7 >> 0x14 | uVar7 << 0xc);
    uVar5 = uStack_b8 ^ (uStack_bc >> 0x10 | uStack_bc << 0x10);
    uVar3 = auStack_68[3] ^ (uVar5 >> 0x18 | uVar5 << 8);
    uStack_b0 = uStack_b0 ^ uStack_ac + auStack_68[5];
    uStack_b4 = uStack_b4 + (uStack_b0 >> 0x10 | uStack_b0 << 0x10);
    uVar8 = uStack_b4 ^ auStack_68[5];
    uStack_ac = uStack_ac + auStack_68[5] + (uVar8 >> 0x14 | uVar8 << 0xc);
    uVar12 = uStack_ac ^ (uStack_b0 >> 0x10 | uStack_b0 << 0x10);
    uStack_b4 = uStack_b4 + (uVar12 >> 0x18 | uVar12 << 8);
    uVar6 = uStack_b4 + (uVar3 >> 0x10 | uVar3 << 0x10);
    uVar11 = uVar6 ^ (uVar10 >> 0x19 | uVar10 << 7);
    auStack_68[3] = auStack_68[3] + (uVar11 >> 0x14 | uVar11 << 0xc);
    uVar3 = auStack_68[3] ^ (uVar3 >> 0x10 | uVar3 << 0x10);
    uStack_bc = uVar3 >> 0x18 | uVar3 << 8;
    uVar9 = uVar9 ^ (auStack_68[0xf] >> 0x10 | auStack_68[0xf] << 0x10);
    auStack_68[0xb] = auStack_68[0xb] + (uVar9 >> 0x18 | uVar9 << 8);
    uVar10 = auStack_68[0xb] ^ (uVar4 >> 0x14 | uVar4 << 0xc);
    uStack_b8 = uStack_b8 + (uVar10 >> 0x19 | uVar10 << 7);
    uVar4 = uStack_b8 ^ (uVar12 >> 0x18 | uVar12 << 8);
    auStack_68[10] = auStack_68[10] + (uVar5 >> 0x18 | uVar5 << 8);
    uVar5 = auStack_68[10] ^ (uVar7 >> 0x14 | uVar7 << 0xc);
    auStack_68[8] = auStack_68[8] + (uVar4 >> 0x10 | uVar4 << 0x10);
    uVar7 = auStack_68[8] ^ (uVar10 >> 0x19 | uVar10 << 7);
    uStack_b8 = uStack_b8 + (uVar7 >> 0x14 | uVar7 << 0xc);
    uVar12 = uStack_b8 ^ (uVar4 >> 0x10 | uVar4 << 0x10);
    uStack_b0 = uVar12 >> 0x18 | uVar12 << 8;
    uStack_ac = uStack_ac + (uVar5 >> 0x19 | uVar5 << 7);
    uVar2 = uStack_ac ^ (uVar2 >> 0x18 | uVar2 << 8);
    auStack_68[0xb] = auStack_68[0xb] + (uVar2 >> 0x10 | uVar2 << 0x10);
    uVar4 = auStack_68[0xb] ^ (uVar5 >> 0x19 | uVar5 << 7);
    uStack_ac = uStack_ac + (uVar4 >> 0x14 | uVar4 << 0xc);
    uVar2 = uStack_ac ^ (uVar2 >> 0x10 | uVar2 << 0x10);
    uStack_c0 = uVar2 >> 0x18 | uVar2 << 8;
    auStack_68[0xb] = auStack_68[0xb] + (uVar2 >> 0x18 | uVar2 << 8);
    uVar2 = auStack_68[0xb] ^ (uVar4 >> 0x14 | uVar4 << 0xc);
    uStack_b4 = uStack_b4 ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    uStack_c4 = uStack_c4 + (uStack_b4 >> 0x19 | uStack_b4 << 7);
    uVar10 = uStack_c4 ^ (uVar9 >> 0x18 | uVar9 << 8);
    auStack_68[10] = auStack_68[10] + (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar4 = auStack_68[10] ^ (uStack_b4 >> 0x19 | uStack_b4 << 7);
    uStack_c4 = uStack_c4 + (uVar4 >> 0x14 | uVar4 << 0xc);
    uVar10 = uStack_c4 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    uStack_b4 = uVar6 + (uVar3 >> 0x18 | uVar3 << 8);
    auStack_68[0xf] = uVar10 >> 0x18 | uVar10 << 8;
    uVar3 = uStack_b4 ^ (uVar11 >> 0x14 | uVar11 << 0xc);
    auStack_68[8] = auStack_68[8] + (uVar12 >> 0x18 | uVar12 << 8);
    auStack_68[10] = auStack_68[10] + (uVar10 >> 0x18 | uVar10 << 8);
    uVar6 = auStack_68[8] ^ (uVar7 >> 0x14 | uVar7 << 0xc);
    auStack_68[4] = uVar3 >> 0x19 | uVar3 << 7;
    auStack_68[7] = uVar6 >> 0x19 | uVar6 << 7;
    auStack_68[6] = uVar2 >> 0x19 | uVar2 << 7;
    uVar2 = auStack_68[10] ^ (uVar4 >> 0x14 | uVar4 << 0xc);
    auStack_68[5] = uVar2 >> 0x19 | uVar2 << 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  auStack_a8[0xc] = uStack_c0;
  auStack_a8[0] = uStack_c4;
  auStack_a8[0xd] = uStack_b0;
  auStack_a8[1] = uStack_ac;
  auStack_a8[4] = auStack_68[4];
  auStack_a8[9] = uStack_b4;
  auStack_a8[0xe] = uStack_bc;
  auStack_a8[3] = auStack_68[3];
  auStack_a8[2] = uStack_b8;
  iVar1 = 0;
  auStack_a8[8] = auStack_68[8];
  auStack_a8[5] = auStack_68[5];
  auStack_a8[6] = auStack_68[6];
  auStack_a8[10] = auStack_68[10];
  auStack_a8[7] = auStack_68[7];
  auStack_a8[0xf] = auStack_68[0xf];
  auStack_a8[0xb] = auStack_68[0xb];
  do {
    *(int *)(param_6 + iVar1) =
         *(int *)((int)auStack_68 + iVar1) + *(int *)((int)auStack_a8 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x40);
  return;
}


// =========================================================================
// Function: TybzobIPoPcvIIGLA
// Entry: 0x714cf614 | Size: 88 bytes
// =========================================================================

void TybzobIPoPcvIIGLA(void)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: FUN_714cf6c8
// Entry: 0x714cf6c8 | Size: 452 bytes
// =========================================================================

void FUN_714cf6c8(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if (DAT_710eb3f4 != (int *)0x0) {
    return;
  }
  uStack_20 = 10;
  uStack_24 = 0x101;
  uStack_28 = 5;
  uStack_2c = 32000;
  uStack_30 = 2;
  uStack_34 = 0x14;
  uStack_38 = 1;
  uStack_3c = 48000;
  XSsngtJdEltwXEPTHkftuHMfMYswVn(1);
  uStack_1c = 0;
  mrEXFvVDe_YKLJPAxfZeuqnGYoEXqN_y(&piStack_44);
  nxTRydxMudUzaKrqvZkMWmsMHXRndxvNY(&piStack_48);
  bGhOQgLuIAkZtmmrbConYQQoveQTzlRb_gjolxcsDLxEKbROHhbAmAExQaQwSAWPIREdvzPce_GUR_ciaesmXaiXRVfvoRTINFAriIpKupAjCeXuqKOjfPkqonwzgLvIfvyjhgXDIeEKkliXiAlbWpxG
            (&piStack_40,&uStack_3c,&piStack_44,&piStack_48);
  piVar2 = piStack_40;
  piVar1 = DAT_710eb3f4;
  bVar3 = DAT_710eb3f4 != (int *)0x0;
  piStack_40 = (int *)0x0;
  DAT_710eb3f4 = piVar2;
  if (bVar3) {
    (**(code **)(*piVar1 + 4))();
    piVar1 = piStack_40;
    piStack_40 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  piVar1 = piStack_48;
  piStack_48 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = piStack_44;
  piStack_44 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 8))();
  }
  return;
}


// =========================================================================
// Function: zyOcJoSEMyIoCLMcXLYea
// Entry: 0x714cf918 | Size: 500 bytes
// =========================================================================

void zyOcJoSEMyIoCLMcXLYea(void)

{
  int *piVar1;
  bool bVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f8);
  if (DAT_710eb428 == '\0') {
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f8);
  }
  else {
    DAT_710eb428 = '\0';
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f8);
    tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_710eb3fc);
    if (DAT_710eb400 != 0) {
      EmsGtgzylQfwlXgcdjuIMahxsc(&DAT_710eb400);
    }
  }
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0xc))();
    piVar1 = DAT_710eb3f4;
    bVar2 = DAT_710eb3f4 != (int *)0x0;
    DAT_710eb3f4 = (int *)0x0;
    if (bVar2) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: rIbREMKCUPkkIfnWHTRcGasSbU
// Entry: 0x714cfc4c | Size: 152 bytes
// =========================================================================

void rIbREMKCUPkkIfnWHTRcGasSbU(int param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x14))(DAT_710eb3f4,param_1 != 0);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: gdSKZwXpPHjuBCPXuljJtNVh
// Entry: 0x714cfd4c | Size: 192 bytes
// =========================================================================

void gdSKZwXpPHjuBCPXuljJtNVh(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  piVar1 = DAT_710eb3f4;
  if (DAT_710eb3f4 != (int *)0x0) {
    uVar2 = FUN_71ba242c(param_1,param_2);
    (**(code **)(*piVar1 + 0x3c))(piVar1,uVar2);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: zsJAnISlFxZiNEvzOnadeOHZ
// Entry: 0x714cfe94 | Size: 192 bytes
// =========================================================================

void zsJAnISlFxZiNEvzOnadeOHZ(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  piVar1 = DAT_710eb3f4;
  if (DAT_710eb3f4 != (int *)0x0) {
    uVar2 = FUN_71ba242c(param_1,param_2);
    (**(code **)(*piVar1 + 0x40))(piVar1,uVar2);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: XwwnmXPeUCjotTTBvPw_guThI
// Entry: 0x714cffdc | Size: 192 bytes
// =========================================================================

void XwwnmXPeUCjotTTBvPw_guThI(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  piVar1 = DAT_710eb3f4;
  if (DAT_710eb3f4 != (int *)0x0) {
    uVar2 = FUN_71ba242c(param_1,param_2);
    (**(code **)(*piVar1 + 0x44))(piVar1,uVar2);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: TSUWxShkmIuOxGipLYKTgrHgW
// Entry: 0x714d0124 | Size: 192 bytes
// =========================================================================

void TSUWxShkmIuOxGipLYKTgrHgW(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  piVar1 = DAT_710eb3f4;
  if (DAT_710eb3f4 != (int *)0x0) {
    uVar2 = FUN_71ba242c(param_1,param_2);
    (**(code **)(*piVar1 + 0x48))(piVar1,uVar2);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: sAftUTcmdRsAvHHpWfwKdGofgXSxyxLu
// Entry: 0x714d026c | Size: 192 bytes
// =========================================================================

void sAftUTcmdRsAvHHpWfwKdGofgXSxyxLu(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  piVar1 = DAT_710eb3f4;
  if (DAT_710eb3f4 != (int *)0x0) {
    uVar2 = FUN_71ba242c(param_1,param_2);
    (**(code **)(*piVar1 + 0x4c))(piVar1,uVar2);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: ummjbGtoODgQgypYCxXRoTBhHCccATSH
// Entry: 0x714d03b4 | Size: 168 bytes
// =========================================================================

void ummjbGtoODgQgypYCxXRoTBhHCccATSH(int param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x50))(DAT_710eb3f4,param_1 != 0);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: YexQKMYrWmZuiVIXLNHoF
// Entry: 0x714d04d4 | Size: 160 bytes
// =========================================================================

void YexQKMYrWmZuiVIXLNHoF(undefined2 param_1,int param_2)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x7c))(DAT_710eb3f4,param_1,param_2 != 0);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: UwwNTqrXtOppHzyKVZZMdlmbVg
// Entry: 0x714d05dc | Size: 184 bytes
// =========================================================================

void UwwNTqrXtOppHzyKVZZMdlmbVg
               (undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  piVar1 = DAT_710eb3f4;
  if (DAT_710eb3f4 != (int *)0x0) {
    uVar2 = FUN_71ba242c(param_3,param_4);
    (**(code **)(*piVar1 + 0x84))(piVar1,param_1,uVar2);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: roQVkhKSkUFwpuxokCSfk
// Entry: 0x714d070c | Size: 168 bytes
// =========================================================================

void roQVkhKSkUFwpuxokCSfk(int param_1)

{
  if (param_1 < 1) {
    return;
  }
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x1c))(DAT_710eb3f4,param_1);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: ppqiZIJvRBVpfRWcuIxJ
// Entry: 0x714d082c | Size: 136 bytes
// =========================================================================

void ppqiZIJvRBVpfRWcuIxJ(void)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x20))();
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: BpXYmjvPHNmUWCPYhfpbOtacJaTYqF
// Entry: 0x714d091c | Size: 160 bytes
// =========================================================================

void BpXYmjvPHNmUWCPYhfpbOtacJaTYqF(uint param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x28))(DAT_710eb3f4,param_1 & ~((int)param_1 >> 0x1f));
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: sWfdvaSBLMBxViFebqoUxRjBwMuCC
// Entry: 0x714d0a34 | Size: 160 bytes
// =========================================================================

void sWfdvaSBLMBxViFebqoUxRjBwMuCC(uint param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x30))(DAT_710eb3f4,param_1 & ~((int)param_1 >> 0x1f));
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: lmQ_WQAOHFGXN_ocTQFDgdwwpmcae
// Entry: 0x714d0b4c | Size: 156 bytes
// =========================================================================

undefined4 lmQ_WQAOHFGXN_ocTQFDgdwwpmcae(void)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0x2c))();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: mKEONut_rZLFtbNdClOyNjD
// Entry: 0x714d0c4c | Size: 188 bytes
// =========================================================================

undefined8 mKEONut_rZLFtbNdClOyNjD(void)

{
  undefined8 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0xc05e000000000000;
  }
  else {
    (**(code **)(*DAT_710eb3f4 + 0x90))();
    uVar1 = FUN_71ba1638();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: jafhsGbrrAaIDVSKnlDXLZaOqQEs
// Entry: 0x714d0d7c | Size: 188 bytes
// =========================================================================

undefined8 jafhsGbrrAaIDVSKnlDXLZaOqQEs(void)

{
  undefined8 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0xc05e000000000000;
  }
  else {
    (**(code **)(*DAT_710eb3f4 + 0x94))();
    uVar1 = FUN_71ba1638();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: akvPKgAFbLSlsYdAzOfzoGOcmrIZ
// Entry: 0x714d0eac | Size: 156 bytes
// =========================================================================

undefined4 akvPKgAFbLSlsYdAzOfzoGOcmrIZ(void)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0xb0))();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: NbqRnhHiv_ovqDsHmrTrL
// Entry: 0x714d0fac | Size: 156 bytes
// =========================================================================

undefined4 NbqRnhHiv_ovqDsHmrTrL(void)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0xac))();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: hiXRGCaxqpEPxuiOuSnbdZLciEG
// Entry: 0x714d10ac | Size: 168 bytes
// =========================================================================

undefined4 hiXRGCaxqpEPxuiOuSnbdZLciEG(undefined2 param_1)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0x88))(DAT_710eb3f4,param_1,500);
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: RBVTsyNyIrCabQwYyPIGzGy
// Entry: 0x714d11b8 | Size: 160 bytes
// =========================================================================

void RBVTsyNyIrCabQwYyPIGzGy(undefined4 param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x54))(DAT_710eb3f4,param_1);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: WORhGLHEYJKEvQpZdEE_bPNz_JMCFwAs
// Entry: 0x714d12d0 | Size: 168 bytes
// =========================================================================

void WORhGLHEYJKEvQpZdEE_bPNz_JMCFwAs(int param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x58))(DAT_710eb3f4,param_1 != 0);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: wbuoLxEhCwLHtaWqpxPBOpsrteOXy
// Entry: 0x714d13f0 | Size: 160 bytes
// =========================================================================

void wbuoLxEhCwLHtaWqpxPBOpsrteOXy(undefined4 param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x5c))(DAT_710eb3f4,param_1);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: nRgbWwhSV_YPgIJmwvdhJTxg
// Entry: 0x714d1508 | Size: 160 bytes
// =========================================================================

void nRgbWwhSV_YPgIJmwvdhJTxg(undefined4 param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  FUN_714cf6c8();
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 100))(DAT_710eb3f4,param_1);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: lYAwOtHvgdmWgUWuRICiVEr
// Entry: 0x714d1620 | Size: 136 bytes
// =========================================================================

void lYAwOtHvgdmWgUWuRICiVEr(void)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x68))();
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: FzePe_wwxpiVlowCKYhtxEX
// Entry: 0x714d1710 | Size: 152 bytes
// =========================================================================

void FzePe_wwxpiVlowCKYhtxEX(int param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x6c))(DAT_710eb3f4,param_1 != 0);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: cdQOSwNdwJMxlm_kjNIqabMhng
// Entry: 0x714d1810 | Size: 188 bytes
// =========================================================================

undefined8 cdQOSwNdwJMxlm_kjNIqabMhng(void)

{
  undefined8 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0xc05e000000000000;
  }
  else {
    (**(code **)(*DAT_710eb3f4 + 0x70))();
    uVar1 = FUN_71ba1638();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: OxJbgatX_cpJYNfQyc_so_oJ
// Entry: 0x714d1940 | Size: 156 bytes
// =========================================================================

undefined4 OxJbgatX_cpJYNfQyc_so_oJ(void)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0x74))();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: vLStwTypRDByCJaxY_ifYgYtvnOs
// Entry: 0x714d1a40 | Size: 156 bytes
// =========================================================================

undefined4 vLStwTypRDByCJaxY_ifYgYtvnOs(void)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0x78))();
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: FUN_714d1b40
// Entry: 0x714d1b40 | Size: 888 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_714d1b40(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == 0) {
    return;
  }
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f8);
  iStack_48 = CONCAT31(iStack_48._1_3_,1);
  puVar5 = (undefined4 *)((uint)&iStack_48 | 4);
  uVar1 = imp_strlen(param_1);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(puVar5);
  }
  if (uVar1 < 0xb) {
    uVar4 = (uint)&iStack_48 | 5;
    iStack_44 = CONCAT31(iStack_44._1_3_,(char)(uVar1 << 1));
    if (uVar1 != 0) goto LAB_714d1be4;
  }
  else {
    uVar4 = thunk_MwhHq((uVar1 | 7) + 1);
    iStack_44 = (uVar1 | 7) + 2;
    uStack_40 = uVar1;
    uStack_3c = uVar4;
LAB_714d1be4:
    imp___aeabi_memcpy(uVar4,param_1,uVar1);
  }
  *(undefined1 *)(uVar4 + uVar1) = 0;
  uStack_38 = CONCAT22(param_3,param_2);
  DAT_710eb408 = (undefined1)iStack_48;
  uStack_2c = param_6;
  uStack_30 = param_5;
  if ((DAT_710eb40c & 1) != 0) {
    qNQrlu(DAT_710eb414);
  }
  DAT_710eb40c = *puVar5;
  DAT_710eb410 = puVar5[1];
  DAT_710eb414 = puVar5[2];
  DAT_710eb418 = uStack_38;
  DAT_710eb41c = uStack_34;
  DAT_710eb420 = uStack_30;
  DAT_710eb424 = uStack_2c;
  DAT_710eb429 = 1;
  if (DAT_710eb428 != '\0') {
LAB_714d1cf4:
    tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_710eb3fc);
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f8);
    return;
  }
  DAT_710eb428 = '\x01';
  uVar2 = thunk_MwhHq(4);
  IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
  puVar5 = (undefined4 *)thunk_MwhHq(8);
  *puVar5 = uVar2;
  puVar5[1] = FUN_714d2634;
  iVar3 = imp_pthread_create(&iStack_48,0,&LAB_714d2a60);
  if (iVar3 == 0) {
    if (DAT_710eb400 == 0) {
      DAT_710eb400 = iStack_48;
      iStack_48 = 0;
      uQwrLJbzyUVbHmvQcVNflhV(&iStack_48);
      goto LAB_714d1cf4;
    }
  }
  else {
    BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
  }
  KLoalMQagZzrpvz();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: FUN_714d2048
// Entry: 0x714d2048 | Size: 232 bytes
// =========================================================================

void FUN_714d2048(void)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f8);
  DAT_710eb408 = 0;
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f8);
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0xa4))();
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: FUN_714d21d8
// Entry: 0x714d21d8 | Size: 216 bytes
// =========================================================================

void FUN_714d21d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0xb4))
              (DAT_710eb3f4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: FUN_714d2318
// Entry: 0x714d2318 | Size: 176 bytes
// =========================================================================

void FUN_714d2318(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0xb8))(DAT_710eb3f4,param_1,param_2,param_3,param_4);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: FUN_714d2430
// Entry: 0x714d2430 | Size: 144 bytes
// =========================================================================

void FUN_714d2430(undefined4 param_1)

{
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 != (int *)0x0) {
    (**(code **)(*DAT_710eb3f4 + 0x8c))(DAT_710eb3f4,param_1);
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return;
}


// =========================================================================
// Function: FUN_714d2528
// Entry: 0x714d2528 | Size: 168 bytes
// =========================================================================

undefined4 FUN_714d2528(undefined4 param_1)

{
  undefined4 uVar1;
  
  cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
  if (DAT_710eb3f4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_710eb3f4 + 0x88))(DAT_710eb3f4,param_1,500);
  }
  QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  return uVar1;
}


// =========================================================================
// Function: FUN_714d2634
// Entry: 0x714d2634 | Size: 732 bytes
// =========================================================================

void FUN_714d2634(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puStack_48;
  byte bStack_44;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar2 = (undefined4 *)((uint)&puStack_48 | 4);
  while( true ) {
    puStack_48 = &DAT_710eb3f8;
    bStack_44 = 1;
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f8);
    while ((cVar1 = DAT_710eb428, DAT_710eb429 == '\0' && (DAT_710eb428 != '\0'))) {
      STeqdXQsnAyiTBJTFCuiFKcPKNhdgVCrrMQVYFZSLEEADdhRfhXIrTCuEWwQWomPgRHz
                (&DAT_710eb3fc,&puStack_48);
    }
    if (DAT_710eb428 != '\0') {
      DAT_710eb429 = '\0';
    }
    if (bStack_44 != 0) {
      QgduklVhdVlmSiqzGQeutncbrNj(puStack_48);
    }
    if (cVar1 == '\0') break;
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f0);
    puStack_48 = (undefined *)((uint)puStack_48 & 0xffffff00);
    uStack_30 = 0;
    uStack_2c = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb3f8);
    puStack_48 = (undefined *)CONCAT31(puStack_48._1_3_,DAT_710eb408);
    lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(puVar2,&DAT_710eb40c)
    ;
    uStack_36 = (undefined2)((uint)DAT_710eb418 >> 0x10);
    uStack_38 = (undefined2)DAT_710eb418;
    uStack_34 = DAT_710eb41c;
    uStack_30 = DAT_710eb420;
    uStack_2c = DAT_710eb424;
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f8);
    if (((uint)puStack_48 & 0xff) != 0) {
      FUN_714cf6c8();
      if ((DAT_710eb3f4 != (int *)0x0) &&
         (iVar3 = (**(code **)(*DAT_710eb3f4 + 0xa8))(), iVar3 == 0)) {
        (**(code **)(*DAT_710eb3f4 + 0xa0))
                  (DAT_710eb3f4,puVar2,uStack_38,uStack_36,uStack_30,uStack_2c);
      }
    }
    if ((bStack_44 & 1) != 0) {
      qNQrlu(uStack_3c);
    }
    QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb3f0);
  }
  return;
}


// =========================================================================
// Function: FUN_714d2e60
// Entry: 0x714d2e60 | Size: 212 bytes
// =========================================================================

void FUN_714d2e60(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar4 = *(uint *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x28);
  if ((bVar1 & 1) == 0) {
    iVar5 = param_1 + 0x21;
    uVar4 = (uint)(bVar1 >> 1);
  }
  if ((*(uint *)(param_1 + 0x30) & 8) != 0) {
    *(int *)(param_1 + 8) = iVar5;
    *(int *)(param_1 + 0xc) = iVar5;
    *(uint *)(param_1 + 0x10) = iVar5 + uVar4;
    *(uint *)(param_1 + 0x2c) = iVar5 + uVar4;
  }
  if ((*(uint *)(param_1 + 0x30) & 0x10) != 0) {
    *(uint *)(param_1 + 0x2c) = iVar5 + uVar4;
    iVar2 = (*(uint *)(param_1 + 0x20) & 0xfffffffe) - 1;
    if ((bVar1 & 1) == 0) {
      iVar2 = 10;
    }
    thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
              ((byte *)(param_1 + 0x20),iVar2,0);
    uVar3 = *(uint *)(param_1 + 0x24);
    *(int *)(param_1 + 0x14) = iVar5;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar3 = (uint)(*(byte *)(param_1 + 0x20) >> 1);
    }
    *(uint *)(param_1 + 0x1c) = iVar5 + uVar3;
    *(int *)(param_1 + 0x18) = iVar5;
    if ((*(byte *)(param_1 + 0x30) & 3) != 0) {
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0x80000001;
        iVar2 = 0x7fffffff;
        if ((int)uVar4 < 0) {
          iVar2 = -2;
        }
        iVar5 = iVar5 + iVar2;
        if ((int)uVar4 < 0) {
          uVar4 = 1;
        }
      }
      else if (uVar4 == 0) {
        return;
      }
      *(uint *)(param_1 + 0x18) = iVar5 + uVar4;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: _hSAvGnMUgFnFjpx
// Entry: 0x714d352c | Size: 204 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _hSAvGnMUgFnFjpx(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  iVar1 = DAT_712017fc;
  piVar2 = aiStack_40;
  iStack_24 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    iVar3 = 0x14;
    piStack_30 = (int *)thunk_MwhHq(0x14);
    piStack_30[3] = param_3;
    piStack_30[4] = param_4;
    *piStack_30 = (int)&DAT_70b0e3f4;
    piStack_30[1] = param_1;
    piStack_30[2] = param_2;
    FUN_717ccb10(iVar1,aiStack_40);
    if (piStack_30 == aiStack_40) {
      iVar3 = 0x10;
    }
    else {
      piVar2 = piStack_30;
      if (piStack_30 == (int *)0x0) goto LAB_714d35d4;
    }
    (**(code **)(*piVar2 + iVar3))();
  }
LAB_714d35d4:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: vAGxXUkmDUlVNokWtMoqCQFnR
// Entry: 0x714d36e4 | Size: 12 bytes
// =========================================================================

undefined * vAGxXUkmDUlVNokWtMoqCQFnR(void)

{
  return &DAT_710eb480;
}


// =========================================================================
// Function: oitePMJLMeWZupjOvlpExMt
// Entry: 0x714d3728 | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void oitePMJLMeWZupjOvlpExMt(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e418;
    uStack_2c = param_1;
    uStack_28 = param_2;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_714d37b8;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_714d37b8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714d38ac
// Entry: 0x714d38ac | Size: 1416 bytes
// =========================================================================

void FUN_714d38ac(void)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  iVar4 = 0;
  if (DAT_710eb468 != 0) {
    iVar4 = DAT_710eb46c;
  }
  if (DAT_710eb468 != 0 && iVar4 != 0) {
    return;
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c286c);
  if (*pcVar1 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c285c);
    *puVar6 = 0xe85fb42f;
    *(undefined1 *)((int)puVar6 + 6) = 1;
    *(undefined2 *)(puVar6 + 1) = 0x8747;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5b0c,puVar6,&DAT_70b0e000);
    puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c286c);
    *puVar7 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c285c);
  if (pbVar2[6] != 0) {
    pbVar2[6] = 0;
    *pbVar2 = *pbVar2 ^ 0x5d;
    pbVar2[1] = pbVar2[1] ^ 0xd5;
    pbVar2[2] = pbVar2[2] ^ 0x3b;
    pbVar2[3] = pbVar2[3] ^ 0x89;
    pbVar2[4] = pbVar2[4] ^ 0x35;
    pbVar2[5] = pbVar2[5] ^ 0x87;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_24);
  }
  if (uVar3 < 0xb) {
    uVar8 = (uint)&uStack_24 | 1;
    uStack_24 = CONCAT31(uStack_24._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_714d39c0;
  }
  else {
    uVar8 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_24 = (uVar3 | 7) + 2;
    uStack_20 = uVar3;
    uStack_1c = uVar8;
  }
  imp___aeabi_memmove(uVar8,pbVar2,uVar3);
LAB_714d39c0:
  *(undefined1 *)(uVar8 + uVar3) = 0;
  iVar4 = FUN_714b362c(&uStack_24);
  if ((uStack_24 & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  if (iVar4 != 0) {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c288c);
    if (*pcVar1 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c287c);
      *puVar6 = 0x16fd424d;
      *(undefined1 *)((int)puVar6 + 6) = 1;
      *(undefined2 *)(puVar6 + 1) = 0xdbd7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5b34,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c288c);
      *puVar7 = 1;
    }
    pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c287c);
    if (pbVar2[6] != 0) {
      pbVar2[6] = 0;
      *pbVar2 = *pbVar2 ^ 0x3f;
      pbVar2[1] = pbVar2[1] ^ 0x23;
      pbVar2[2] = pbVar2[2] ^ 0x99;
      pbVar2[3] = pbVar2[3] ^ 0x77;
      pbVar2[4] = pbVar2[4] ^ 0xa5;
      pbVar2[5] = pbVar2[5] ^ 0xdb;
    }
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28ac);
    if (*pcVar1 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c289c);
      *(undefined2 *)(puVar6 + 2) = 0x13f;
      *puVar6 = 0x16fd424d;
      puVar6[1] = 0xccbd84d7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5b5c,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28ac);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c289c);
    if (pbVar5[9] != 0) {
      pbVar5[9] = 0;
      *pbVar5 = *pbVar5 ^ 0x3f;
      pbVar5[1] = pbVar5[1] ^ 0x23;
      pbVar5[2] = pbVar5[2] ^ 0x99;
      pbVar5[3] = pbVar5[3] ^ 0x77;
      pbVar5[4] = pbVar5[4] ^ 0xa5;
      pbVar5[5] = pbVar5[5] ^ 0xdb;
      pbVar5[6] = pbVar5[6] ^ 0xdf;
      pbVar5[7] = pbVar5[7] ^ 0xab;
      pbVar5[8] = pbVar5[8] ^ 0x3f;
    }
    DAT_710eb468 = FUN_715ec410(pbVar2,pbVar5,1);
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28cc);
    if (*pcVar1 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28bc);
      *(undefined1 *)((int)puVar6 + 6) = 1;
      *puVar6 = 0x18e9a4d1;
      *(undefined2 *)(puVar6 + 1) = 0x5d8f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5b88,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28cc);
      *puVar7 = 1;
    }
    pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28bc);
    if (pbVar2[6] != 0) {
      pbVar2[6] = 0;
      *pbVar2 = *pbVar2 ^ 0xa3;
      pbVar2[1] = pbVar2[1] ^ 0xc5;
      pbVar2[2] = pbVar2[2] ^ 0x8d;
      pbVar2[3] = pbVar2[3] ^ 0x79;
      pbVar2[4] = pbVar2[4] ^ 0xfd;
      pbVar2[5] = pbVar2[5] ^ 0x5d;
    }
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28ec);
    if (*pcVar1 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28dc);
      *(undefined2 *)(puVar6 + 2) = 0x1a3;
      *puVar6 = 0x18e9a4d1;
      puVar6[1] = 0xf253028f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5bb0,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28ec);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c28dc);
    if (pbVar5[9] != 0) {
      pbVar5[9] = 0;
      *pbVar5 = *pbVar5 ^ 0xa3;
      pbVar5[1] = pbVar5[1] ^ 0xc5;
      pbVar5[2] = pbVar5[2] ^ 0x8d;
      pbVar5[3] = pbVar5[3] ^ 0x79;
      pbVar5[4] = pbVar5[4] ^ 0xfd;
      pbVar5[5] = pbVar5[5] ^ 0x5d;
      pbVar5[6] = pbVar5[6] ^ 0x35;
      pbVar5[7] = pbVar5[7] ^ 0x95;
      pbVar5[8] = pbVar5[8] ^ 0xa3;
    }
    DAT_710eb46c = FUN_715ec410(pbVar2,pbVar5,1);
  }
  return;
}


// =========================================================================
// Function: FUN_714d4628
// Entry: 0x714d4628 | Size: 48 bytes
// =========================================================================

void FUN_714d4628(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = DAT_710eb470;
  uVar2 = DAT_710eb47c;
  uVar1 = DAT_710eb478;
  param_1[1] = DAT_710eb474;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return;
}


// =========================================================================
// Function: FUN_714d4e00
// Entry: 0x714d4e00 | Size: 1248 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714d4e00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_190;
  int iStack_18c;
  int iStack_184;
  int iStack_180;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  undefined4 uStack_157;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uVar1 = FUN_713ea438(param_1);
  iStack_30 = 0x800;
  cStack_3c = '\x01';
  puStack_166 = &uStack_142;
  uStack_40 = 0;
  uVar1 = FUN_71ba0b38(uVar1,0x3fc00000);
  uStack_13a = (undefined1)uVar1;
  uStack_13e = (undefined1)param_2;
  uStack_13b = (undefined1)((uint)param_2 >> 0x18);
  uStack_13c = (undefined1)((uint)param_2 >> 0x10);
  uStack_13d = (undefined1)((uint)param_2 >> 8);
  uStack_13f = (undefined1)((uint)param_1 >> 0x18);
  uStack_140 = (undefined1)((uint)param_1 >> 0x10);
  uStack_141 = (undefined1)((uint)param_1 >> 8);
  uStack_157 = 0x60;
  uStack_137 = (undefined1)((uint)uVar1 >> 0x18);
  uStack_138 = (undefined1)((uint)uVar1 >> 0x10);
  uStack_142 = (undefined1)param_1;
  uStack_139 = (undefined1)((uint)uVar1 >> 8);
  (**(code **)(*(int *)*DAT_711f6d58 + 0xec))
            ((int *)*DAT_711f6d58,&DAT_70102240,auStack_169,1,8,0,0,0xffffffff,0xffff,0xffff,0);
  iVar10 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_71132d2c & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71132d2c), iVar3 != 0)) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c292c);
    if (*pcVar4 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c291c);
      *puVar6 = 0xd8797f7e;
      puVar6[1] = 0x421c234c;
      *(undefined1 *)((int)puVar6 + 0xb) = 1;
      *(undefined4 *)((int)puVar6 + 7) = 0x1d757042;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714d5c14,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c292c);
      *puVar7 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c291c);
    if (pbVar5[0xb] != 0) {
      *pbVar5 = *pbVar5 ^ 0x1f;
      pbVar5[1] = pbVar5[1] ^ 0x1b;
      pbVar5[2] = pbVar5[2] ^ 0x1d;
      pbVar5[3] = pbVar5[3] ^ 0x95;
      pbVar5[0xb] = 0;
      pbVar5[4] = pbVar5[4] ^ 0x2d;
      pbVar5[5] = pbVar5[5] ^ 0x53;
      pbVar5[6] = pbVar5[6] ^ 0x55;
      pbVar5[7] = pbVar5[7] ^ 0x21;
      pbVar5[8] = pbVar5[8] ^ 0x1f;
      pbVar5[9] = pbVar5[9] ^ 0x1b;
      pbVar5[10] = pbVar5[10] ^ 0x1d;
    }
    DAT_71132d28 = FUN_71885ba4(pbVar5,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71132d2c);
  }
  uVar9 = DAT_71132d28;
  imp___aeabi_memclr4(&iStack_19c,0x30);
  uStack_1a0 = uVar9;
  uVar9 = FUN_713a0424(&uStack_1a0,0x186a2);
  uVar11 = FUN_71ba1638(param_1);
  uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar9 = FUN_714d597c(uVar9,uVar8,(int)uVar11,uVar8);
  uVar11 = FUN_71ba1638(param_2);
  uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar9 = FUN_714d597c(uVar9,uVar8,(int)uVar11,uVar8);
  uVar11 = FUN_71ba1638(uVar1);
  uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar9 = FUN_714d597c(uVar9,uVar8,(int)uVar11,uVar8);
  uVar9 = FUN_713a0424(uVar9,0x29);
  uVar9 = FUN_713a0424(uVar9,0);
  uVar9 = FUN_713a0424(uVar9,1);
  uVar9 = FUN_713a1f9c(uVar9,1);
  uVar11 = FUN_713a0424(uVar9,0xffffffff);
  uVar9 = FUN_714d597c((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar10 + 0x34);
  piVar2 = (int *)thunk_MwhHq(0x3c);
  *piVar2 = 0;
  piVar2[1] = 0;
  FUN_713a10f8(piVar2 + 2,uVar9);
  piVar2[1] = iVar10 + 0x38;
  iVar3 = *(int *)(iVar10 + 0x38);
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  *(int **)(iVar10 + 0x38) = piVar2;
  *(int *)(iVar10 + 0x40) = *(int *)(iVar10 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar10 + 0x34);
  if (iStack_184 != 0) {
    iStack_180 = iStack_184;
    thunk_qNQrlu();
  }
  if (iStack_190 != 0) {
    iStack_18c = iStack_190;
    thunk_qNQrlu();
  }
  if (iStack_19c != 0) {
    iStack_198 = iStack_19c;
    thunk_qNQrlu();
  }
  if (DAT_711f6bf8 != '\0') {
    piVar2 = (int *)(DAT_711a3938 + 0x1389c);
    iVar10 = *piVar2;
    if (iVar10 == 0) {
      iVar10 = FUN_713c301c(0);
      if (iVar10 == 0) {
        iVar10 = *piVar2;
        if (iVar10 == 0) goto LAB_714d5148;
      }
      else {
        iVar10 = thunk_MwhHq(0x3a0);
        iVar3 = FUN_715ba834();
        *piVar2 = iVar3;
      }
    }
    iVar3 = thunk_FUN_715bf66c(iVar10);
    if (iVar3 == 0) {
      FUN_715601e8(iVar10,param_1,param_2,uVar1);
    }
    else {
      FUN_715bf69c(iVar10,0xc2d9bff3,0x43a4baa6,0x414309d5);
    }
  }
LAB_714d5148:
  if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
    imp_free(puStack_166);
  }
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_714d597c
// Entry: 0x714d597c | Size: 236 bytes
// =========================================================================

int FUN_714d597c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  if (puVar5 < *(undefined4 **)(param_1 + 0x24)) {
    *puVar5 = param_3;
    puVar8 = puVar5 + 2;
    puVar5[1] = param_4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar1 = (int)puVar5 - iVar6 >> 3;
    uVar7 = iVar1 + 1;
    if (0x1fffffff < uVar7) {
      FUN_713a1414();
LAB_714d5a64:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar3 = (int)*(undefined4 **)(param_1 + 0x24) - iVar6;
    uVar2 = (int)uVar3 >> 2;
    if (uVar7 < uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffff7 < uVar3) {
      uVar7 = 0x1fffffff;
    }
    if (uVar7 == 0) {
      iVar4 = 0;
    }
    else {
      if (0x1fffffff < uVar7) goto LAB_714d5a64;
      iVar4 = thunk_MwhHq(uVar7 << 3);
    }
    puVar8 = (undefined4 *)(iVar4 + iVar1 * 8);
    *puVar8 = param_3;
    puVar8[1] = param_4;
    imp___aeabi_memcpy8(iVar4,iVar6,(int)puVar5 - iVar6);
    puVar8 = puVar8 + 2;
    *(int *)(param_1 + 0x1c) = iVar4;
    *(undefined4 **)(param_1 + 0x20) = puVar8;
    *(uint *)(param_1 + 0x24) = iVar4 + uVar7 * 8;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
    }
  }
  *(undefined4 **)(param_1 + 0x20) = puVar8;
  return param_1;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x714d5d78 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_714d6020
// Entry: 0x714d6020 | Size: 4 bytes
// =========================================================================

void FUN_714d6020(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x714d603c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_714d6b0c
// Entry: 0x714d6b0c | Size: 352 bytes
// =========================================================================

void FUN_714d6b0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x48);
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[10] = param_12;
  puVar1[9] = param_11;
  puVar1[8] = param_9;
  puVar1[7] = param_8;
  puVar1[6] = param_7;
  puVar1[5] = param_6;
  puVar1[4] = param_5;
  puVar1[3] = param_10;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  FUN_714d6da0();
  puVar4 = &DAT_71132d3c;
  puVar3 = DAT_71132d3c;
  do {
    puVar5 = puVar4;
    if (puVar3 == (undefined4 *)0x0) {
LAB_714d6c58:
      puVar2 = (undefined4 *)thunk_MwhHq(0x18);
      puVar2[4] = param_1;
      puVar2[5] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = puVar5;
      *puVar4 = puVar2;
      puVar3 = puVar2;
      if ((int *)*DAT_71132d38 != (int *)0x0) {
        puVar3 = (undefined4 *)*puVar4;
        DAT_71132d38 = (int *)*DAT_71132d38;
      }
      FUN_712f807c(DAT_71132d3c,puVar3);
      puVar2[5] = puVar1;
      DAT_71132d40 = DAT_71132d40 + 1;
      return;
    }
    while (puVar5 = puVar3, (int)puVar5[4] <= param_1) {
      if (param_1 <= (int)puVar5[4]) {
        puVar5[5] = puVar1;
        return;
      }
      puVar3 = (undefined4 *)puVar5[1];
      if ((undefined4 *)puVar5[1] == (undefined4 *)0x0) {
        puVar4 = puVar5 + 1;
        goto LAB_714d6c58;
      }
    }
    puVar3 = (undefined4 *)*puVar5;
    puVar4 = puVar5;
  } while( true );
}


// =========================================================================
// Function: FUN_714d6da0
// Entry: 0x714d6da0 | Size: 468 bytes
// =========================================================================

void FUN_714d6da0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (DAT_71132d3c != (undefined4 *)0x0) {
    puVar2 = &DAT_71132d3c;
    puVar3 = DAT_71132d3c;
    do {
      puVar5 = puVar3;
      if ((int)puVar3[4] < param_1) {
        puVar3 = puVar3 + 1;
        puVar5 = puVar2;
      }
      puVar2 = puVar5;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    puVar3 = &DAT_71132d3c;
    if (((undefined4 **)puVar2 != &DAT_71132d3c) && (puVar3 = puVar2, param_1 < (int)puVar2[4])) {
      puVar3 = &DAT_71132d3c;
    }
    puVar2 = DAT_71132d3c;
    if ((undefined4 **)puVar3 != &DAT_71132d3c) {
      do {
        while (puVar3 = puVar2, (int)puVar3[4] <= param_1) {
          if (param_1 <= (int)puVar3[4]) goto LAB_714d6ea4;
          puVar2 = (undefined4 *)puVar3[1];
          if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
            puVar5 = puVar3 + 1;
            goto LAB_714d6e48;
          }
        }
        puVar2 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
LAB_714d6e48:
      puVar1 = (undefined4 *)thunk_MwhHq(0x18);
      puVar1[4] = param_1;
      puVar1[5] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = puVar3;
      *puVar5 = puVar1;
      puVar2 = puVar1;
      if ((undefined4 *)*DAT_71132d38 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*puVar5;
        DAT_71132d38 = (undefined4 *)*DAT_71132d38;
      }
      FUN_712f807c(DAT_71132d3c,puVar2);
      DAT_71132d40 = DAT_71132d40 + 1;
      puVar3 = puVar1;
LAB_714d6ea4:
      iVar4 = puVar3[5];
      if (iVar4 != 0) {
        FUN_714d7304(iVar4);
        thunk_qNQrlu(iVar4);
      }
      if (DAT_71132d3c != (undefined4 *)0x0) {
        puVar2 = &DAT_71132d3c;
        puVar3 = DAT_71132d3c;
        do {
          puVar5 = puVar3;
          if ((int)puVar3[4] < param_1) {
            puVar3 = puVar3 + 1;
            puVar5 = puVar2;
          }
          puVar2 = puVar5;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
        if (((undefined4 **)puVar2 != &DAT_71132d3c) && ((int)puVar2[4] <= param_1)) {
          puVar3 = puVar2;
          puVar5 = (undefined4 *)puVar2[1];
          if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
            do {
              puVar1 = (undefined4 *)puVar3[2];
              bVar6 = (undefined4 *)*puVar1 != puVar3;
              puVar3 = puVar1;
            } while (bVar6);
          }
          else {
            do {
              puVar1 = puVar5;
              puVar5 = (undefined4 *)*puVar1;
            } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
          }
          if (DAT_71132d38 == puVar2) {
            DAT_71132d38 = puVar1;
          }
          DAT_71132d40 = DAT_71132d40 + -1;
          FUN_71368054(DAT_71132d3c,puVar2);
          thunk_qNQrlu(puVar2);
          return;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714d71cc
// Entry: 0x714d71cc | Size: 172 bytes
// =========================================================================

void FUN_714d71cc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar4 = DAT_71132d38;
  if (DAT_71132d38 != &DAT_71132d3c) {
    do {
      iVar3 = puVar4[5];
      if (iVar3 != 0) {
        FUN_714d7304(iVar3);
        thunk_qNQrlu(iVar3);
      }
      puVar1 = (undefined4 *)puVar4[1];
      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
        do {
          puVar2 = (undefined4 *)puVar4[2];
          bVar5 = (undefined4 *)*puVar2 != puVar4;
          puVar4 = puVar2;
        } while (bVar5);
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = (undefined4 *)*puVar2;
        } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
      }
      puVar4 = puVar2;
    } while (puVar2 != &DAT_71132d3c);
  }
  FUN_714d927c(&DAT_71132d38,DAT_71132d3c);
  DAT_71132d38 = &DAT_71132d3c;
  DAT_71132d3c = 0;
  DAT_71132d40 = 0;
  return;
}


// =========================================================================
// Function: FUN_714d7304
// Entry: 0x714d7304 | Size: 264 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x714d7388) */

void FUN_714d7304(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = DAT_71132d48;
  piVar3 = (int *)imp_wmemchr(DAT_71132d44,param_1,(int)DAT_71132d48 - DAT_71132d44 >> 2);
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar1 = piVar3;
  if (piVar3 != piVar2) {
    while (piVar1 = piVar1 + 1, piVar1 != piVar2) {
      if (*piVar1 != param_1) {
        *piVar3 = *piVar1;
        piVar3 = piVar3 + 1;
      }
    }
  }
  if (piVar3 != DAT_71132d48) {
    DAT_71132d48 = piVar3;
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      thunk_dGrRHE();
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      thunk_dGrRHE();
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_7145b75c();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_714d74f0
// Entry: 0x714d74f0 | Size: 2104 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714d74f0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  undefined4 uStack_15a;
  undefined2 uStack_156;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_43;
  char cStack_3f;
  uint uStack_33;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uStack_15a = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a);
  if (param_1[3] != 0) {
    puVar13 = param_1 + 1;
    piVar11 = (int *)(DAT_711a3938 + 0x1389c);
    iVar3 = *piVar11;
    if (iVar3 == 0) {
      iVar3 = FUN_713c301c(0);
      if (iVar3 == 0) {
        iVar3 = *piVar11;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar3 = FUN_715ba834();
        *piVar11 = iVar3;
      }
    }
    puVar14 = param_1 + 2;
    uVar4 = FUN_71561790(iVar3,*param_1,*puVar13,*puVar14);
    uVar12 = param_1[10];
    if (param_1[0xc] == 0) {
      iVar3 = FUN_71ba2d30(uVar4,uVar12);
      if (iVar3 != 0) {
        uVar10 = thunk_MwhHq(0x118);
        uVar5 = FUN_71ba0b38(*puVar14,0xbf800000);
        uVar12 = FUN_715b6bc4(uVar10,param_1[3],*param_1,*puVar13,uVar5,param_1[4],param_1[5],
                              param_1[6],uVar12);
        param_1[0xc] = uVar10;
        thunk_FUN_715607d8(uVar12,0);
        thunk_FUN_71560790(param_1[0xc],0);
        thunk_FUN_715600f0(param_1[0xc],&uStack_16c);
        uStack_178 = param_1[7];
        uStack_170 = param_1[8];
        uStack_174 = uStack_178;
        FUN_715ef454(&uStack_16c,&uStack_178);
        FUN_7156063c(param_1[0xc],uStack_16c,uStack_168,uStack_164,uStack_160,
                     CONCAT22((ushort)uStack_15a,uStack_15c),CONCAT22(uStack_156,uStack_15a._2_2_),
                     uStack_154,uStack_150,uStack_14c,uStack_148,uStack_144,uStack_140,uStack_13c,
                     uStack_138,uStack_134,uStack_130);
        iVar3 = *(int *)(param_1[0xc] + 4);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x80;
          *(uint *)(*(int *)(param_1[0xc] + 4) + 0x1c) =
               *(uint *)(*(int *)(param_1[0xc] + 4) + 0x1c) & 0xffff7fff;
          *(uint *)(*(int *)(param_1[0xc] + 4) + 0x1c) =
               *(uint *)(*(int *)(param_1[0xc] + 4) + 0x1c) | 0x4000;
        }
        if (param_1[0x11] == 0) {
          uVar12 = FUN_71563d2c(DAT_711a3938,0,*param_1,*puVar13,*puVar14,param_1[9],0);
          param_1[0x11] = uVar12;
        }
      }
    }
    else {
      iVar3 = FUN_71ba2d70(uVar4,uVar12);
      if (iVar3 != 0) {
        FUN_714d7304(param_1);
      }
    }
    uStack_15a = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a);
    if (param_1[0xc] != 0) {
      uVar12 = param_1[7];
      uVar10 = param_1[8];
      iVar3 = FUN_71ba2d10(uVar12,uVar10);
      if (iVar3 != 0) {
        uVar12 = uVar10;
      }
      uVar12 = FUN_71ba0b38(uVar12,0x3f800000);
      uVar12 = FUN_71ba0b38(uVar12,uVar12);
      iVar3 = FUN_71ba2d30(uVar4,uVar12);
      if (iVar3 == 0) {
        uVar7 = 0;
        if (*(char *)(param_1 + 0xb) == '\0') goto LAB_714d7ca4;
      }
      else {
        uStack_15a = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a);
        if (*(char *)(param_1 + 0xb) != '\0') goto LAB_714d7ca4;
        uVar7 = 1;
      }
      *(undefined1 *)(param_1 + 0xb) = uVar7;
      uStack_33 = 0x800;
      uStack_43 = 0;
      cStack_3f = '\x01';
      iVar16 = (int)&uStack_148 + 3;
      uStack_16c._3_1_ = (undefined1)iVar16;
      uStack_168._0_3_ = (undefined3)((uint)iVar16 >> 8);
      uVar7 = 0xff;
      puVar13 = DAT_71132d38;
      if (DAT_71132d38 != &DAT_71132d3c) {
        do {
          if ((undefined4 *)puVar13[5] == param_1) {
            uVar7 = (undefined1)puVar13[4];
            break;
          }
          puVar14 = (undefined4 *)puVar13[1];
          if ((undefined4 *)puVar13[1] == (undefined4 *)0x0) {
            do {
              puVar15 = (undefined4 *)puVar13[2];
              bVar17 = (undefined4 *)*puVar15 != puVar13;
              puVar13 = puVar15;
            } while (bVar17);
          }
          else {
            do {
              puVar15 = puVar14;
              puVar14 = (undefined4 *)*puVar15;
            } while ((undefined4 *)*puVar15 != (undefined4 *)0x0);
          }
          puVar13 = puVar15;
        } while (puVar15 != &DAT_71132d3c);
      }
      uStack_148 = CONCAT13(uVar7,(undefined3)uStack_148);
      uStack_15a._0_2_ = 9;
      uStack_15a._2_2_ = 0;
      uVar7 = 0x80;
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      uStack_144 = CONCAT31(uStack_144._1_3_,uVar7);
      uVar6 = (*(code *)DAT_71201e2c[3])();
      uVar9 = uStack_33;
      iVar3 = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a);
      uVar8 = iVar3 + 0x20;
      if ((-0x20 < iVar3) && ((int)(uStack_33 - 1) >> 3 < (int)(iVar3 + 0x1fU >> 3))) {
        iVar3 = uVar8 * 2;
        uVar1 = uVar8 * 2;
        if (CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) == iVar16) {
          bVar17 = 0x400 < uVar8;
          uVar8 = uVar1;
          if (bVar17) {
            uVar4 = imp_malloc(iVar3 + 7U >> 3);
            uStack_16c._3_1_ = (undefined1)uVar4;
            uStack_168._0_3_ = (undefined3)((uint)uVar4 >> 8);
            imp___aeabi_memcpy(uVar4,iVar16,(int)(uVar9 + 7) >> 3);
          }
        }
        else {
          uVar4 = imp_realloc(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_));
          uStack_16c._3_1_ = (undefined1)uVar4;
          uStack_168._0_3_ = (undefined3)((uint)uVar4 >> 8);
          uVar9 = uStack_33;
          uVar8 = uVar1;
        }
      }
      if ((int)uVar9 < (int)uVar8) {
        uStack_33 = uVar8;
      }
      uVar9 = (ushort)uStack_15a & 7;
      iVar3 = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a) >> 3;
      if (((ushort)uStack_15a & 7) == 0) {
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) = (char)uVar6;
        iVar3 = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + (iVar3 + 8 >> 3)) =
             (char)(uVar6 >> 8);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + (iVar3 + 0x10 >> 3)) =
             (char)(uVar6 >> 0x10);
        iVar3 = iVar3 + 0x18;
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + (iVar3 >> 3)) =
             (char)(uVar6 >> 0x18);
      }
      else {
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) |
             (byte)((uVar6 & 0xff) >> uVar9);
        uVar8 = 8 - uVar9;
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) +
                  (CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a) >> 3) + 1) =
             (char)(uVar6 << (uVar8 & 0xff));
        iVar3 = CONCAT22(uStack_15a._2_2_,(ushort)uStack_15a);
        iVar2 = iVar3 + 8 >> 3;
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2) |
             (byte)((uVar6 >> 8 & 0xff) >> uVar9);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2 + 1) =
             (char)((uVar6 >> 8) << (uVar8 & 0xff));
        iVar2 = iVar3 + 0x10 >> 3;
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2) |
             (byte)((uVar6 >> 0x10 & 0xff) >> uVar9);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2 + 1) =
             (char)((uVar6 >> 0x10) << (uVar8 & 0xff));
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar3 >> 3;
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2) |
             (byte)((uVar6 >> 0x18) >> uVar9);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar2 + 1) =
             (char)((uVar6 >> 0x18) << (uVar8 & 0xff));
      }
      uStack_15a = iVar3 + 8;
      uVar6 = (*(code *)*DAT_71201e2c)
                        (CONCAT31((undefined3)uStack_168,uStack_16c._3_1_),iVar3 + 0xf >> 3);
      uVar9 = uStack_33;
      uVar8 = uStack_15a + 0x20;
      if ((-0x20 < (int)uStack_15a) && ((int)(uStack_33 - 1) >> 3 < (int)(uStack_15a + 0x1f >> 3)))
      {
        iVar3 = uVar8 * 2;
        uVar1 = uVar8 * 2;
        if (CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) == iVar16) {
          bVar17 = 0x400 < uVar8;
          uVar8 = uVar1;
          if (bVar17) {
            uVar4 = imp_malloc(iVar3 + 7U >> 3);
            uStack_16c._3_1_ = (undefined1)uVar4;
            uStack_168._0_3_ = (undefined3)((uint)uVar4 >> 8);
            imp___aeabi_memcpy(uVar4,iVar16,(int)(uVar9 + 7) >> 3);
          }
        }
        else {
          uVar4 = imp_realloc(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_));
          uStack_16c._3_1_ = (undefined1)uVar4;
          uStack_168._0_3_ = (undefined3)((uint)uVar4 >> 8);
          uVar9 = uStack_33;
          uVar8 = uVar1;
        }
      }
      if ((int)uVar9 < (int)uVar8) {
        uStack_33 = uVar8;
      }
      uVar9 = uStack_15a & 7;
      iVar3 = (int)uStack_15a >> 3;
      if (uVar9 == 0) {
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) = (char)uVar6;
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + ((int)(uStack_15a + 8) >> 3))
             = (char)(uVar6 >> 8);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) +
                 ((int)(uStack_15a + 0x10) >> 3)) = (char)(uVar6 >> 0x10);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) +
                 ((int)(uStack_15a + 0x18) >> 3)) = (char)(uVar6 >> 0x18);
      }
      else {
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) |
             (byte)((uVar6 & 0xff) >> uVar9);
        uVar8 = 8 - uVar9;
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3 + 1) =
             (char)(uVar6 << (uVar8 & 0xff));
        iVar3 = (int)(uStack_15a + 8) >> 3;
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) |
             (byte)((uVar6 >> 8 & 0xff) >> uVar9);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3 + 1) =
             (char)((uVar6 >> 8) << (uVar8 & 0xff));
        iVar3 = (int)(uStack_15a + 0x10) >> 3;
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) |
             (byte)((uVar6 >> 0x10 & 0xff) >> uVar9);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3 + 1) =
             (char)((uVar6 >> 0x10) << (uVar8 & 0xff));
        iVar3 = (int)(uStack_15a + 0x18) >> 3;
        *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) =
             *(byte *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3) |
             (byte)((uVar6 >> 0x18) >> uVar9);
        *(char *)(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_) + iVar3 + 1) =
             (char)((uVar6 >> 0x18) << (uVar8 & 0xff));
      }
      uStack_15a = uStack_15a + 0x20;
      (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                ((int *)*DAT_711f6d58,0x1d,&uStack_16c,1,8,9,0,0xffffffff,0xffff,0xffff,0,0);
      if ((cStack_3f != '\0') && (0x800 < (int)uStack_33)) {
        imp_free(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_));
      }
    }
  }
LAB_714d7ca4:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714d8130
// Entry: 0x714d8130 | Size: 20 bytes
// =========================================================================

void FUN_714d8130(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_7156042c(*(int *)(param_1 + 0x30));
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714d8178
// Entry: 0x714d8178 | Size: 120 bytes
// =========================================================================

void FUN_714d8178(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar3 = DAT_71132d38;
  if (DAT_71132d38 != &DAT_71132d3c) {
    do {
      FUN_714d74f0(puVar3[5]);
      puVar1 = (undefined4 *)puVar3[1];
      if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
        do {
          puVar2 = (undefined4 *)puVar3[2];
          bVar4 = (undefined4 *)*puVar2 != puVar3;
          puVar3 = puVar2;
        } while (bVar4);
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = (undefined4 *)*puVar2;
        } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
      }
      puVar3 = puVar2;
    } while (puVar2 != &DAT_71132d3c);
  }
  return;
}


// =========================================================================
// Function: FUN_714d8244
// Entry: 0x714d8244 | Size: 468 bytes
// =========================================================================

undefined4 FUN_714d8244(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  
  piVar13 = DAT_71132d48;
  if ((*(byte *)(param_1 + 0x3a) & 7) == 4) {
    cVar3 = *DAT_70ffd318;
    cVar4 = cVar3;
    if (cVar3 == '\0') {
      cVar4 = DAT_70ffd31c;
    }
    if ((cVar3 == '\0' && cVar4 == '\0') && (puVar9 = DAT_71132d38, DAT_71132d38 != &DAT_71132d3c))
    {
      do {
        iVar10 = puVar9[5];
        if ((*(int *)(iVar10 + 0x30) != 0) && (*(int *)(*(int *)(iVar10 + 0x30) + 4) == param_1)) {
          piVar7 = (int *)imp_wmemchr(DAT_71132d44,iVar10,(int)DAT_71132d48 - DAT_71132d44 >> 2);
          iVar5 = DAT_71132d44;
          if (piVar7 == (int *)0x0) {
            piVar7 = piVar13;
          }
          if (piVar7 != DAT_71132d48) {
            return 1;
          }
          if (piVar7 < DAT_71132d4c) {
            piVar13 = piVar7 + 1;
            *piVar7 = iVar10;
          }
          else {
            iVar14 = (int)DAT_71132d48 - DAT_71132d44;
            iVar1 = iVar14 >> 2;
            uVar11 = iVar1 + 1;
            if (0x3fffffff < uVar11) {
              FUN_714d9324(&DAT_71132d44);
LAB_714d8414:
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            uVar2 = (int)DAT_71132d4c - DAT_71132d44 >> 1;
            if (uVar11 < uVar2) {
              uVar11 = uVar2;
            }
            if (0x7ffffffb < (uint)((int)DAT_71132d4c - DAT_71132d44)) {
              uVar11 = 0x3fffffff;
            }
            if (uVar11 == 0) {
              iVar8 = 0;
            }
            else {
              if (0x3fffffff < uVar11) goto LAB_714d8414;
              iVar8 = thunk_MwhHq(uVar11 << 2);
            }
            piVar13 = (int *)(iVar8 + iVar1 * 4);
            *piVar13 = iVar10;
            imp___aeabi_memcpy4(iVar8,iVar5,iVar14);
            DAT_71132d4c = (int *)(iVar8 + uVar11 * 4);
            piVar13 = piVar13 + 1;
            DAT_71132d44 = iVar8;
            if (iVar5 != 0) {
              DAT_71132d48 = piVar13;
              thunk_qNQrlu(iVar5);
            }
          }
          DAT_71132d48 = piVar13;
          return 1;
        }
        puVar6 = (undefined4 *)puVar9[1];
        puVar12 = puVar9;
        if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
          do {
            puVar9 = (undefined4 *)puVar12[2];
            bVar15 = (undefined4 *)*puVar9 != puVar12;
            puVar12 = puVar9;
          } while (bVar15);
        }
        else {
          do {
            puVar9 = puVar6;
            puVar6 = (undefined4 *)*puVar9;
          } while ((undefined4 *)*puVar9 != (undefined4 *)0x0);
        }
      } while (puVar9 != &DAT_71132d3c);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_714d85d8
// Entry: 0x714d85d8 | Size: 140 bytes
// =========================================================================

int FUN_714d85d8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar4 = DAT_71132d38;
  if (DAT_71132d38 != &DAT_71132d3c) {
    do {
      iVar3 = *(int *)(puVar4[5] + 0x30);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == param_1)) {
        return puVar4[5];
      }
      puVar1 = (undefined4 *)puVar4[1];
      if ((undefined4 *)puVar4[1] == (undefined4 *)0x0) {
        do {
          puVar2 = (undefined4 *)puVar4[2];
          bVar5 = (undefined4 *)*puVar2 != puVar4;
          puVar4 = puVar2;
        } while (bVar5);
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = (undefined4 *)*puVar2;
        } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
      }
      puVar4 = puVar2;
    } while (puVar2 != &DAT_71132d3c);
  }
  return 0;
}


// =========================================================================
// Function: FUN_714d869c
// Entry: 0x714d869c | Size: 60 bytes
// =========================================================================

void FUN_714d869c(void)

{
  if (*DAT_70ffd318 != '\0' || DAT_70ffd31c != '\0') {
    return;
  }
  DAT_71132d48 = DAT_71132d44;
  return;
}


// =========================================================================
// Function: FUN_714d8770
// Entry: 0x714d8770 | Size: 120 bytes
// =========================================================================

void FUN_714d8770(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = DAT_71132d48;
  piVar1 = DAT_71132d44;
  if (*DAT_70ffd318 != '\0' || DAT_70ffd31c != '\0') {
    return;
  }
  for (; piVar1 != piVar2; piVar1 = piVar1 + 1) {
    piVar3 = *(int **)(*(int *)(*piVar1 + 0x30) + 4);
    piVar3[7] = piVar3[7] & 0xfffdffff;
    (**(code **)(*piVar3 + 0x48))();
  }
  return;
}


// =========================================================================
// Function: FUN_714d8880
// Entry: 0x714d8880 | Size: 844 bytes
// =========================================================================

void FUN_714d8880(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int aiStack_9c [15];
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  piVar2 = DAT_71132d48;
  piVar6 = DAT_71132d44;
  if ((DAT_71132d44 != DAT_71132d48) && (*DAT_70ffd318 == '\0' && DAT_70ffd31c == '\0')) {
    uVar1 = (int)DAT_71132d48 - (int)DAT_71132d44 >> 2;
    uVar5 = uVar1;
    if (0x80 < (int)uVar1) {
      do {
        iVar4 = thunk_fhrooqEjTNzhNMST_Wq(uVar5 << 2,&DAT_7009c3d9);
        if (iVar4 != 0) {
          FUN_714d938c(piVar6,piVar2,uVar1,iVar4,uVar5);
          thunk_qNQrlu(iVar4);
          goto LAB_714d8948;
        }
        uVar5 = uVar5 >> 1;
      } while (uVar5 != 0);
    }
    FUN_714d938c(piVar6,piVar2,uVar1,0,0);
LAB_714d8948:
    imp___aeabi_memclr8(auStack_60,0x3c);
    piVar6 = DAT_70ffc970;
    aiStack_9c[0] = (**(code **)(*DAT_70ffc970 + 0x24))(1,auStack_60);
    aiStack_9c[1] = (**(code **)(*piVar6 + 0x24))(9,(uint)auStack_60 | 4);
    aiStack_9c[2] = (**(code **)(*piVar6 + 0x24))(3,auStack_58);
    aiStack_9c[3] = (**(code **)(*piVar6 + 0x24))(4,auStack_54);
    aiStack_9c[4] = (**(code **)(*piVar6 + 0x24))(6,auStack_50);
    aiStack_9c[5] = (**(code **)(*piVar6 + 0x24))(8,auStack_4c);
    aiStack_9c[6] = (**(code **)(*piVar6 + 0x24))(10,auStack_48);
    aiStack_9c[7] = (**(code **)(*piVar6 + 0x24))(0xb,auStack_44);
    aiStack_9c[8] = (**(code **)(*piVar6 + 0x24))(0xc,auStack_40);
    aiStack_9c[9] = (**(code **)(*piVar6 + 0x24))(0xe,auStack_3c);
    aiStack_9c[10] = (**(code **)(*piVar6 + 0x24))(0x14,auStack_38);
    aiStack_9c[0xb] = (**(code **)(*piVar6 + 0x24))(7,auStack_34);
    aiStack_9c[0xc] = (**(code **)(*piVar6 + 0x24))(0x1d,auStack_30);
    aiStack_9c[0xd] = (**(code **)(*piVar6 + 0x24))(0x1e,auStack_2c);
    aiStack_9c[0xe] = (**(code **)(*piVar6 + 0x24))(0x1f,auStack_28);
    FUN_71413b60(6,1);
    iVar4 = 0;
    FUN_71413b60(8,0);
    FUN_71413b60(10,5);
    FUN_71413b60(0xb,6);
    FUN_71413b60(0xc,1);
    FUN_71413b60(0xe,1);
    FUN_71413b60(7,2);
    FUN_71413b60(0x1d,5);
    FUN_71413b60(0x1e,0);
    piVar2 = DAT_71132d48;
    for (piVar6 = DAT_71132d44; piVar3 = DAT_71132d44, piVar6 != piVar2; piVar6 = piVar6 + 1) {
      if (*(int *)(*(int *)(*(int *)(*piVar6 + 0x30) + 4) + 0x18) != 0) {
        FUN_7146a30c();
      }
    }
    do {
      DAT_71132d48 = piVar3;
      if (aiStack_9c[-iVar4] != 0) {
        FUN_71413b60((&DAT_70081be8)[-iVar4],auStack_60[-iVar4]);
      }
      iVar4 = iVar4 + -1;
      piVar3 = DAT_71132d48;
    } while (iVar4 != -0xf);
  }
  return;
}


// =========================================================================
// Function: FUN_714d927c
// Entry: 0x714d927c | Size: 60 bytes
// =========================================================================

void FUN_714d927c(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_714d927c(param_1,*param_2);
  FUN_714d927c(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_714d9324
// Entry: 0x714d9324 | Size: 20 bytes
// =========================================================================

void FUN_714d9324(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714d938c
// Entry: 0x714d938c | Size: 1868 bytes
// =========================================================================

void FUN_714d938c(int *param_1,int *param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iStack_48;
  int *piStack_44;
  
  puVar12 = DAT_7100ceec;
  if (1 < param_3) {
    if (param_3 == 2) {
      iVar1 = param_2[-1];
      iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
      iVar8 = *(int *)(iVar2 + 0x14);
      puVar12 = (undefined4 *)(iVar8 + 0x30);
      if (iVar8 == 0) {
        puVar12 = (undefined4 *)(iVar2 + 4);
      }
      uVar19 = puVar12[1];
      uVar14 = puVar12[2];
      uVar18 = *DAT_7100ceec;
      uVar20 = DAT_7100ceec[1];
      uVar21 = DAT_7100ceec[2];
      uVar3 = FUN_71ba240c(*puVar12,uVar18);
      uVar19 = FUN_71ba240c(uVar19,uVar20);
      uVar19 = FUN_71ba21e8(uVar19,uVar19);
      uVar3 = FUN_71ba21e8(uVar3,uVar3);
      uVar3 = FUN_71ba0b38(uVar3,uVar19);
      uVar19 = FUN_71ba240c(uVar14,uVar21);
      uVar19 = FUN_71ba21e8(uVar19,uVar19);
      uVar3 = FUN_71ba0b38(uVar19,uVar3);
      iVar22 = *param_1;
      iVar2 = *(int *)(*(int *)(iVar22 + 0x30) + 4);
      iVar8 = *(int *)(iVar2 + 0x14);
      puVar12 = (undefined4 *)(iVar8 + 0x30);
      if (iVar8 == 0) {
        puVar12 = (undefined4 *)(iVar2 + 4);
      }
      uVar14 = puVar12[1];
      uVar15 = puVar12[2];
      uVar19 = FUN_71ba240c(*puVar12,uVar18);
      uVar14 = FUN_71ba240c(uVar14,uVar20);
      uVar14 = FUN_71ba21e8(uVar14,uVar14);
      uVar19 = FUN_71ba21e8(uVar19,uVar19);
      uVar19 = FUN_71ba0b38(uVar19,uVar14);
      uVar14 = FUN_71ba240c(uVar15,uVar21);
      uVar14 = FUN_71ba21e8(uVar14,uVar14);
      uVar19 = FUN_71ba0b38(uVar14,uVar19);
      iVar2 = FUN_71ba2d70(uVar3,uVar19);
      if (iVar2 != 0) {
        *param_1 = iVar1;
        param_2[-1] = iVar22;
        return;
      }
    }
    else if ((int)param_3 < 0x81) {
      if ((param_1 != param_2) && (piVar9 = param_1 + 1, piVar9 != param_2)) {
        puVar10 = DAT_7100ceec + 2;
        puVar4 = DAT_7100ceec + 1;
        iStack_48 = 0;
        piVar5 = piVar9;
        piVar16 = param_1;
        do {
          piVar6 = piVar5;
          iVar1 = *piVar6;
          iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
          iVar8 = *(int *)(iVar2 + 0x14);
          puVar13 = (undefined4 *)(iVar8 + 0x30);
          if (iVar8 == 0) {
            puVar13 = (undefined4 *)(iVar2 + 4);
          }
          uVar19 = puVar13[1];
          uVar18 = puVar13[2];
          uVar20 = *puVar12;
          uVar3 = FUN_71ba240c(*puVar13,uVar20);
          uVar21 = *puVar4;
          uVar19 = FUN_71ba240c(uVar19,uVar21);
          uVar19 = FUN_71ba21e8(uVar19,uVar19);
          uVar3 = FUN_71ba21e8(uVar3,uVar3);
          uVar3 = FUN_71ba0b38(uVar3,uVar19);
          uVar14 = *puVar10;
          uVar19 = FUN_71ba240c(uVar18,uVar14);
          uVar19 = FUN_71ba21e8(uVar19,uVar19);
          uVar3 = FUN_71ba0b38(uVar19,uVar3);
          iVar8 = *piVar16;
          iVar2 = *(int *)(*(int *)(iVar8 + 0x30) + 4);
          iVar22 = *(int *)(iVar2 + 0x14);
          puVar13 = (undefined4 *)(iVar22 + 0x30);
          if (iVar22 == 0) {
            puVar13 = (undefined4 *)(iVar2 + 4);
          }
          uVar18 = puVar13[1];
          uVar15 = puVar13[2];
          uVar19 = FUN_71ba240c(*puVar13,uVar20);
          uVar18 = FUN_71ba240c(uVar18,uVar21);
          uVar18 = FUN_71ba21e8(uVar18,uVar18);
          uVar19 = FUN_71ba21e8(uVar19,uVar19);
          uVar19 = FUN_71ba0b38(uVar19,uVar18);
          uVar14 = FUN_71ba240c(uVar15,uVar14);
          uVar14 = FUN_71ba21e8(uVar14,uVar14);
          uVar19 = FUN_71ba0b38(uVar14,uVar19);
          iVar22 = FUN_71ba2d70(uVar3,uVar19);
          iVar2 = iStack_48;
          if (iVar22 != 0) {
            do {
              *(int *)((int)piVar9 + iVar2) = iVar8;
              piVar5 = param_1;
              if (iVar2 == 0) goto LAB_714d9564;
              iVar8 = *(int *)((int)piVar9 + iVar2 + -8);
              iVar22 = *(int *)(*(int *)(iVar8 + 0x30) + 4);
              iVar11 = *(int *)(iVar22 + 0x14);
              puVar13 = (undefined4 *)(iVar11 + 0x30);
              if (iVar11 == 0) {
                puVar13 = (undefined4 *)(iVar22 + 4);
              }
              uVar19 = puVar13[1];
              uVar20 = *puVar12;
              uVar14 = puVar13[2];
              uVar3 = FUN_71ba240c(*puVar13,uVar20);
              uVar21 = *puVar4;
              uVar19 = FUN_71ba240c(uVar19,uVar21);
              uVar19 = FUN_71ba21e8(uVar19,uVar19);
              uVar3 = FUN_71ba21e8(uVar3,uVar3);
              uVar3 = FUN_71ba0b38(uVar3,uVar19);
              uVar18 = *puVar10;
              uVar19 = FUN_71ba240c(uVar14,uVar18);
              uVar19 = FUN_71ba21e8(uVar19,uVar19);
              uVar3 = FUN_71ba0b38(uVar19,uVar3);
              iVar22 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
              iVar11 = *(int *)(iVar22 + 0x14);
              puVar13 = (undefined4 *)(iVar11 + 0x30);
              if (iVar11 == 0) {
                puVar13 = (undefined4 *)(iVar22 + 4);
              }
              uVar14 = puVar13[1];
              uVar15 = puVar13[2];
              uVar19 = FUN_71ba240c(*puVar13,uVar20);
              uVar14 = FUN_71ba240c(uVar14,uVar21);
              uVar14 = FUN_71ba21e8(uVar14,uVar14);
              uVar19 = FUN_71ba21e8(uVar19,uVar19);
              uVar19 = FUN_71ba0b38(uVar19,uVar14);
              uVar14 = FUN_71ba240c(uVar15,uVar18);
              uVar14 = FUN_71ba21e8(uVar14,uVar14);
              uVar19 = FUN_71ba0b38(uVar14,uVar19);
              iVar22 = FUN_71ba2d70(uVar19,uVar3);
              iVar2 = iVar2 + -4;
            } while (iVar22 != 0);
            piVar5 = (int *)((int)piVar9 + iVar2);
LAB_714d9564:
            *piVar5 = iVar1;
          }
          iStack_48 = iStack_48 + 4;
          piVar5 = piVar6 + 1;
          piVar16 = piVar6;
        } while (piVar6 + 1 != param_2);
      }
    }
    else {
      uVar17 = param_3 >> 1;
      iVar1 = param_3 - (param_3 >> 1);
      piVar9 = param_1 + uVar17;
      if (param_5 < (int)param_3) {
        FUN_714d938c(param_1,piVar9,uVar17,param_4,param_5);
        FUN_714d938c(piVar9,param_2,iVar1,param_4,param_5);
        FUN_714db350(param_1,piVar9,param_2,uVar17,iVar1,param_4,param_5);
        return;
      }
      FUN_714da384(param_1,piVar9,uVar17,param_4);
      piVar5 = param_4 + uVar17;
      FUN_714da384(piVar9,param_2,iVar1,piVar5);
      puVar12 = DAT_7100ceec;
      piVar16 = param_4 + param_3;
      puVar10 = DAT_7100ceec + 2;
      puVar4 = DAT_7100ceec + 1;
      piVar9 = piVar5;
      piStack_44 = param_1;
      do {
        piVar6 = piVar9;
        if (piVar6 == piVar16) {
          if (param_4 == piVar5) {
            return;
          }
          iVar1 = 0;
          do {
            *(undefined4 *)((int)piStack_44 + iVar1) = *(undefined4 *)((int)param_4 + iVar1);
            iVar1 = iVar1 + 4;
          } while ((int *)((int)param_4 + iVar1) != piVar5);
          return;
        }
        iVar1 = *piVar6;
        iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
        iVar8 = *(int *)(iVar2 + 0x14);
        puVar13 = (undefined4 *)(iVar8 + 0x30);
        if (iVar8 == 0) {
          puVar13 = (undefined4 *)(iVar2 + 4);
        }
        uVar19 = puVar13[1];
        uVar21 = puVar13[2];
        uVar14 = *puVar12;
        uVar3 = FUN_71ba240c(*puVar13);
        uVar18 = *puVar4;
        uVar19 = FUN_71ba240c(uVar19);
        uVar19 = FUN_71ba21e8(uVar19,uVar19);
        uVar3 = FUN_71ba21e8(uVar3,uVar3);
        uVar3 = FUN_71ba0b38(uVar3,uVar19);
        uVar20 = *puVar10;
        uVar19 = FUN_71ba240c(uVar21);
        uVar19 = FUN_71ba21e8(uVar19,uVar19);
        uVar3 = FUN_71ba0b38(uVar19,uVar3);
        iVar2 = *param_4;
        iVar8 = *(int *)(*(int *)(iVar2 + 0x30) + 4);
        iVar22 = *(int *)(iVar8 + 0x14);
        puVar13 = (undefined4 *)(iVar22 + 0x30);
        if (iVar22 == 0) {
          puVar13 = (undefined4 *)(iVar8 + 4);
        }
        uVar21 = puVar13[1];
        uVar15 = puVar13[2];
        uVar19 = FUN_71ba240c(*puVar13,uVar14);
        uVar14 = FUN_71ba240c(uVar21,uVar18);
        uVar14 = FUN_71ba21e8(uVar14,uVar14);
        uVar19 = FUN_71ba21e8(uVar19,uVar19);
        uVar19 = FUN_71ba0b38(uVar19,uVar14);
        uVar14 = FUN_71ba240c(uVar15,uVar20);
        uVar14 = FUN_71ba21e8(uVar14,uVar14);
        uVar19 = FUN_71ba0b38(uVar14,uVar19);
        iVar8 = FUN_71ba2d70(uVar3,uVar19);
        iVar22 = FUN_71ba2d70(uVar3,uVar19);
        iVar11 = FUN_71ba2d70(uVar3,uVar19);
        if (iVar11 == 0) {
          param_4 = param_4 + 1;
        }
        if (iVar22 != 0) {
          iVar2 = iVar1;
        }
        uVar17 = (uint)(iVar8 != 0);
        piVar7 = piStack_44 + 1;
        *piStack_44 = iVar2;
        piVar9 = piVar6 + uVar17;
        piStack_44 = piVar7;
      } while (param_4 != piVar5);
      if (piVar6 + uVar17 != piVar16) {
        iVar1 = 0;
        do {
          *(undefined4 *)((int)piVar7 + iVar1) = *(undefined4 *)((int)piVar6 + iVar1 + uVar17 * 4);
          iVar1 = iVar1 + 4;
        } while ((int *)((int)piVar6 + iVar1 + uVar17 * 4) != piVar16);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714da384
// Entry: 0x714da384 | Size: 1880 bytes
// =========================================================================

void FUN_714da384(int *param_1,int *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iStack_4c;
  int *piStack_34;
  
  if (param_3 == 0) {
    return;
  }
  piVar13 = param_4;
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (8 < (int)param_3) {
        uVar15 = param_3 >> 1;
        piVar19 = param_1 + uVar15;
        FUN_714d938c(param_1,piVar19,uVar15,param_4,uVar15);
        iVar1 = param_3 - (param_3 >> 1);
        FUN_714d938c(piVar19,param_2,iVar1,param_4 + uVar15,iVar1);
        puVar11 = DAT_7100ceec;
        puVar10 = DAT_7100ceec + 2;
        puVar4 = DAT_7100ceec + 1;
        piVar13 = piVar19;
        piStack_34 = param_4;
        do {
          piVar5 = piVar13;
          if (piVar5 == param_2) {
            if (param_1 == piVar19) {
              return;
            }
            iVar1 = 0;
            do {
              *(undefined4 *)((int)piStack_34 + iVar1) = *(undefined4 *)((int)param_1 + iVar1);
              iVar1 = iVar1 + 4;
            } while ((int *)((int)param_1 + iVar1) != piVar19);
            return;
          }
          iVar1 = *piVar5;
          iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
          iVar8 = *(int *)(iVar2 + 0x14);
          puVar12 = (undefined4 *)(iVar8 + 0x30);
          if (iVar8 == 0) {
            puVar12 = (undefined4 *)(iVar2 + 4);
          }
          uVar18 = puVar12[1];
          uVar21 = puVar12[2];
          uVar20 = *puVar11;
          uVar3 = FUN_71ba240c(*puVar12,uVar20);
          uVar14 = *puVar4;
          uVar18 = FUN_71ba240c(uVar18);
          uVar18 = FUN_71ba21e8(uVar18,uVar18);
          uVar3 = FUN_71ba21e8(uVar3,uVar3);
          uVar3 = FUN_71ba0b38(uVar3,uVar18);
          uVar16 = *puVar10;
          uVar18 = FUN_71ba240c(uVar21);
          uVar18 = FUN_71ba21e8(uVar18,uVar18);
          uVar3 = FUN_71ba0b38(uVar18,uVar3);
          iVar2 = *param_1;
          iVar8 = *(int *)(*(int *)(iVar2 + 0x30) + 4);
          iVar9 = *(int *)(iVar8 + 0x14);
          puVar12 = (undefined4 *)(iVar9 + 0x30);
          if (iVar9 == 0) {
            puVar12 = (undefined4 *)(iVar8 + 4);
          }
          uVar17 = puVar12[1];
          uVar21 = puVar12[2];
          uVar18 = FUN_71ba240c(*puVar12,uVar20);
          uVar14 = FUN_71ba240c(uVar17,uVar14);
          uVar14 = FUN_71ba21e8(uVar14,uVar14);
          uVar18 = FUN_71ba21e8(uVar18,uVar18);
          uVar18 = FUN_71ba0b38(uVar18,uVar14);
          uVar14 = FUN_71ba240c(uVar21,uVar16);
          uVar14 = FUN_71ba21e8(uVar14,uVar14);
          uVar18 = FUN_71ba0b38(uVar14,uVar18);
          iVar8 = FUN_71ba2d70(uVar3,uVar18);
          iVar9 = FUN_71ba2d70(uVar3,uVar18);
          iVar6 = FUN_71ba2d70(uVar3,uVar18);
          if (iVar6 == 0) {
            param_1 = param_1 + 1;
          }
          if (iVar9 != 0) {
            iVar2 = iVar1;
          }
          uVar15 = (uint)(iVar8 != 0);
          piVar7 = piStack_34 + 1;
          *piStack_34 = iVar2;
          piVar13 = piVar5 + uVar15;
          piStack_34 = piVar7;
        } while (param_1 != piVar19);
        if (piVar5 + uVar15 == param_2) {
          return;
        }
        iVar1 = 0;
        do {
          *(undefined4 *)((int)piVar7 + iVar1) = *(undefined4 *)((int)piVar5 + iVar1 + uVar15 * 4);
          iVar1 = iVar1 + 4;
        } while ((int *)((int)piVar5 + iVar1 + uVar15 * 4) != param_2);
        return;
      }
      piVar13 = param_1;
      if (param_1 != param_2) {
        piVar13 = param_1 + 1;
        *param_4 = *param_1;
      }
      puVar11 = DAT_7100ceec;
      if (param_1 == param_2 || piVar13 == param_2) {
        return;
      }
      puVar10 = DAT_7100ceec + 2;
      puVar4 = DAT_7100ceec + 1;
      iStack_4c = 0;
      piVar19 = param_4;
      do {
        iVar1 = *piVar13;
        iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
        iVar8 = *(int *)(iVar2 + 0x14);
        puVar12 = (undefined4 *)(iVar8 + 0x30);
        if (iVar8 == 0) {
          puVar12 = (undefined4 *)(iVar2 + 4);
        }
        uVar18 = puVar12[1];
        uVar20 = puVar12[2];
        uVar21 = *puVar11;
        uVar3 = FUN_71ba240c(*puVar12,uVar21);
        uVar14 = *puVar4;
        uVar18 = FUN_71ba240c(uVar18,uVar14);
        uVar18 = FUN_71ba21e8(uVar18,uVar18);
        uVar3 = FUN_71ba21e8(uVar3,uVar3);
        uVar3 = FUN_71ba0b38(uVar3,uVar18);
        uVar16 = *puVar10;
        uVar18 = FUN_71ba240c(uVar20,uVar16);
        uVar18 = FUN_71ba21e8(uVar18,uVar18);
        uVar3 = FUN_71ba0b38(uVar18,uVar3);
        iVar2 = *piVar19;
        iVar8 = *(int *)(*(int *)(iVar2 + 0x30) + 4);
        iVar9 = *(int *)(iVar8 + 0x14);
        puVar12 = (undefined4 *)(iVar9 + 0x30);
        if (iVar9 == 0) {
          puVar12 = (undefined4 *)(iVar8 + 4);
        }
        uVar17 = puVar12[1];
        uVar20 = puVar12[2];
        uVar18 = FUN_71ba240c(*puVar12,uVar21);
        uVar14 = FUN_71ba240c(uVar17,uVar14);
        uVar14 = FUN_71ba21e8(uVar14,uVar14);
        uVar18 = FUN_71ba21e8(uVar18,uVar18);
        uVar18 = FUN_71ba0b38(uVar18,uVar14);
        uVar14 = FUN_71ba240c(uVar20,uVar16);
        uVar14 = FUN_71ba21e8(uVar14,uVar14);
        uVar18 = FUN_71ba0b38(uVar14,uVar18);
        iVar8 = FUN_71ba2d70(uVar3,uVar18);
        if (iVar8 == 0) {
          piVar19[1] = iVar1;
        }
        else {
          piVar19[1] = iVar2;
          piVar5 = param_4;
          iVar1 = iStack_4c;
          if (piVar19 != param_4) {
            do {
              piVar5 = (int *)((int)param_4 + iVar1);
              iVar2 = piVar5[-1];
              iVar8 = *(int *)(*(int *)(iVar2 + 0x30) + 4);
              iVar9 = *(int *)(iVar8 + 0x14);
              puVar12 = (undefined4 *)(iVar9 + 0x30);
              if (iVar9 == 0) {
                puVar12 = (undefined4 *)(iVar8 + 4);
              }
              uVar18 = puVar12[1];
              uVar21 = *puVar11;
              uVar14 = puVar12[2];
              uVar3 = FUN_71ba240c(*puVar12,uVar21);
              uVar20 = *puVar4;
              uVar18 = FUN_71ba240c(uVar18,uVar20);
              uVar18 = FUN_71ba21e8(uVar18,uVar18);
              uVar3 = FUN_71ba21e8(uVar3,uVar3);
              uVar3 = FUN_71ba0b38(uVar3,uVar18);
              uVar16 = *puVar10;
              uVar18 = FUN_71ba240c(uVar14,uVar16);
              uVar18 = FUN_71ba21e8(uVar18,uVar18);
              uVar3 = FUN_71ba0b38(uVar18,uVar3);
              iVar8 = *(int *)(*(int *)(*piVar13 + 0x30) + 4);
              iVar9 = *(int *)(iVar8 + 0x14);
              puVar12 = (undefined4 *)(iVar9 + 0x30);
              if (iVar9 == 0) {
                puVar12 = (undefined4 *)(iVar8 + 4);
              }
              uVar14 = puVar12[1];
              uVar17 = puVar12[2];
              uVar18 = FUN_71ba240c(*puVar12,uVar21);
              uVar14 = FUN_71ba240c(uVar14,uVar20);
              uVar14 = FUN_71ba21e8(uVar14,uVar14);
              uVar18 = FUN_71ba21e8(uVar18,uVar18);
              uVar18 = FUN_71ba0b38(uVar18,uVar14);
              uVar14 = FUN_71ba240c(uVar17,uVar16);
              uVar14 = FUN_71ba21e8(uVar14,uVar14);
              uVar18 = FUN_71ba0b38(uVar14,uVar18);
              iVar8 = FUN_71ba2d70(uVar18,uVar3);
              if (iVar8 == 0) break;
              iVar1 = iVar1 + -4;
              *piVar5 = iVar2;
              piVar5 = param_4;
            } while (iVar1 != 0);
          }
          *piVar5 = *piVar13;
        }
        piVar13 = piVar13 + 1;
        iStack_4c = iStack_4c + 4;
        piVar19 = piVar19 + 1;
        if (piVar13 == param_2) {
          return;
        }
      } while( true );
    }
    iVar1 = param_2[-1];
    iVar2 = *(int *)(*(int *)(iVar1 + 0x30) + 4);
    iVar8 = *(int *)(iVar2 + 0x14);
    puVar11 = (undefined4 *)(iVar8 + 0x30);
    if (iVar8 == 0) {
      puVar11 = (undefined4 *)(iVar2 + 4);
    }
    uVar18 = puVar11[1];
    uVar21 = puVar11[2];
    uVar20 = *DAT_7100ceec;
    uVar16 = DAT_7100ceec[1];
    uVar14 = DAT_7100ceec[2];
    uVar3 = FUN_71ba240c(*puVar11,uVar20);
    uVar18 = FUN_71ba240c(uVar18,uVar16);
    uVar18 = FUN_71ba21e8(uVar18,uVar18);
    uVar3 = FUN_71ba21e8(uVar3,uVar3);
    uVar3 = FUN_71ba0b38(uVar3,uVar18);
    uVar18 = FUN_71ba240c(uVar21,uVar14);
    uVar18 = FUN_71ba21e8(uVar18,uVar18);
    uVar3 = FUN_71ba0b38(uVar18,uVar3);
    iVar2 = *param_1;
    iVar8 = *(int *)(*(int *)(iVar2 + 0x30) + 4);
    iVar9 = *(int *)(iVar8 + 0x14);
    puVar11 = (undefined4 *)(iVar9 + 0x30);
    if (iVar9 == 0) {
      puVar11 = (undefined4 *)(iVar8 + 4);
    }
    uVar21 = puVar11[1];
    uVar17 = puVar11[2];
    uVar18 = FUN_71ba240c(*puVar11,uVar20);
    uVar16 = FUN_71ba240c(uVar21,uVar16);
    uVar16 = FUN_71ba21e8(uVar16,uVar16);
    uVar18 = FUN_71ba21e8(uVar18,uVar18);
    uVar18 = FUN_71ba0b38(uVar18,uVar16);
    uVar14 = FUN_71ba240c(uVar17,uVar14);
    uVar14 = FUN_71ba21e8(uVar14,uVar14);
    uVar18 = FUN_71ba0b38(uVar14,uVar18);
    iVar8 = FUN_71ba2d70(uVar3,uVar18);
    iVar9 = FUN_71ba2d70(uVar3,uVar18);
    if (iVar9 == 0) {
      param_1 = param_2 + -1;
    }
    if (iVar8 != 0) {
      iVar2 = iVar1;
    }
    piVar13 = param_4 + 1;
    *param_4 = iVar2;
  }
  *piVar13 = *param_1;
  return;
}


// =========================================================================
// Function: FUN_714db350
// Entry: 0x714db350 | Size: 3008 bytes
// =========================================================================

void FUN_714db350(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int *param_6,
                 int param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int extraout_r1;
  undefined4 *puVar19;
  int *piVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  bool bVar28;
  int *piStack_50;
  int iStack_4c;
  int *piStack_44;
  
  puVar1 = DAT_7100ceec;
  iStack_4c = param_5;
  if (param_5 != 0) {
    puVar10 = DAT_7100ceec + 2;
    puVar2 = DAT_7100ceec + 1;
    piStack_50 = param_3;
    piStack_44 = param_2;
    while( true ) {
      iVar3 = iStack_4c - param_7;
      iVar4 = iStack_4c;
      if (param_7 < iStack_4c) {
        iVar3 = param_4 - param_7;
        iVar4 = param_4;
      }
      if (iVar4 == param_7 || iVar3 < 0 != SBORROW4(iVar4,param_7)) break;
      if (param_4 == 0) {
        return;
      }
      iVar3 = *piStack_44;
      iVar4 = *(int *)(*(int *)(iVar3 + 0x30) + 4);
      iVar11 = *(int *)(iVar4 + 0x14);
      puVar19 = (undefined4 *)(iVar11 + 0x30);
      if (iVar11 == 0) {
        puVar19 = (undefined4 *)(iVar4 + 4);
      }
      uVar23 = puVar19[1];
      uVar12 = *puVar1;
      uVar21 = puVar19[2];
      uVar5 = FUN_71ba240c(*puVar19);
      uVar13 = *puVar2;
      uVar23 = FUN_71ba240c(uVar23);
      uVar23 = FUN_71ba21e8(uVar23,uVar23);
      uVar5 = FUN_71ba21e8(uVar5,uVar5);
      uVar5 = FUN_71ba0b38(uVar5,uVar23);
      uVar14 = *puVar10;
      uVar23 = FUN_71ba240c(uVar21);
      uVar23 = FUN_71ba21e8(uVar23,uVar23);
      uVar5 = FUN_71ba0b38(uVar23,uVar5);
      iVar4 = -param_4;
      iVar11 = 0;
      while( true ) {
        iVar22 = *(int *)((int)param_1 + iVar11);
        iVar6 = *(int *)(*(int *)(iVar22 + 0x30) + 4);
        iVar15 = *(int *)(iVar6 + 0x14);
        puVar19 = (undefined4 *)(iVar15 + 0x30);
        if (iVar15 == 0) {
          puVar19 = (undefined4 *)(iVar6 + 4);
        }
        uVar21 = puVar19[1];
        uVar24 = puVar19[2];
        uVar23 = FUN_71ba240c(*puVar19,uVar12);
        uVar21 = FUN_71ba240c(uVar21,uVar13);
        uVar21 = FUN_71ba21e8(uVar21,uVar21);
        uVar23 = FUN_71ba21e8(uVar23,uVar23);
        uVar23 = FUN_71ba0b38(uVar23,uVar21);
        uVar21 = FUN_71ba240c(uVar24,uVar14);
        uVar21 = FUN_71ba21e8(uVar21,uVar21);
        uVar23 = FUN_71ba0b38(uVar21,uVar23);
        iVar6 = FUN_71ba2d70(uVar5,uVar23);
        if (iVar6 != 0) break;
        iVar11 = iVar11 + 4;
        bVar28 = iVar4 == -1;
        iVar4 = iVar4 + 1;
        if (bVar28) {
          return;
        }
      }
      piVar7 = (int *)((int)param_1 + iVar11);
      if (-iVar4 < iStack_4c) {
        iVar3 = iStack_4c / 2;
        piVar27 = piStack_44 + iVar3;
        piVar8 = piStack_44;
        if ((int)piStack_44 - (int)param_1 != iVar11) {
          iVar6 = *(int *)(*(int *)(*piVar27 + 0x30) + 4);
          iVar15 = *(int *)(iVar6 + 0x14);
          puVar19 = (undefined4 *)(iVar15 + 0x30);
          if (iVar15 == 0) {
            puVar19 = (undefined4 *)(iVar6 + 4);
          }
          uVar23 = puVar19[1];
          uVar21 = puVar19[2];
          uVar5 = FUN_71ba240c(*puVar19,uVar12);
          uVar23 = FUN_71ba240c(uVar23,uVar13);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar5 = FUN_71ba21e8(uVar5,uVar5);
          uVar5 = FUN_71ba0b38(uVar5,uVar23);
          uVar23 = FUN_71ba240c(uVar21,uVar14);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar5 = FUN_71ba0b38(uVar23,uVar5);
          piVar8 = piVar7;
          uVar25 = ((int)piStack_44 - (int)param_1) - iVar11 >> 2;
          do {
            iVar6 = *(int *)(*(int *)(piVar8[uVar25 >> 1] + 0x30) + 4);
            iVar15 = *(int *)(iVar6 + 0x14);
            puVar19 = (undefined4 *)(iVar15 + 0x30);
            if (iVar15 == 0) {
              puVar19 = (undefined4 *)(iVar6 + 4);
            }
            uVar21 = puVar19[1];
            uVar24 = puVar19[2];
            uVar23 = FUN_71ba240c(*puVar19,uVar12);
            uVar21 = FUN_71ba240c(uVar21,uVar13);
            uVar21 = FUN_71ba21e8(uVar21,uVar21);
            uVar23 = FUN_71ba21e8(uVar23,uVar23);
            uVar23 = FUN_71ba0b38(uVar23,uVar21);
            uVar21 = FUN_71ba240c(uVar24,uVar14);
            uVar21 = FUN_71ba21e8(uVar21,uVar21);
            uVar23 = FUN_71ba0b38(uVar21,uVar23);
            iVar6 = FUN_71ba2d70(uVar5,uVar23);
            iVar15 = FUN_71ba2d70(uVar5,uVar23);
            uVar16 = uVar25 + ~(uVar25 >> 1);
            if (iVar15 != 0) {
              uVar16 = uVar25 >> 1;
            }
            if (iVar6 == 0) {
              piVar8 = piVar8 + (uVar25 >> 1) + 1;
            }
            uVar25 = uVar16;
          } while (uVar16 != 0);
        }
        param_4 = (int)piVar8 + (-iVar11 - (int)param_1) >> 2;
      }
      else {
        if (iVar4 == -1) {
          *(int *)((int)param_1 + iVar11) = iVar3;
          *piStack_44 = iVar22;
          return;
        }
        param_4 = -iVar4 / 2;
        piVar8 = (int *)((int)param_1 + iVar11 + param_4 * 4);
        piVar27 = piStack_50;
        if (piStack_50 != piStack_44) {
          iVar3 = *(int *)(*(int *)(*piVar8 + 0x30) + 4);
          iVar6 = *(int *)(iVar3 + 0x14);
          puVar19 = (undefined4 *)(iVar6 + 0x30);
          if (iVar6 == 0) {
            puVar19 = (undefined4 *)(iVar3 + 4);
          }
          uVar23 = puVar19[1];
          uVar21 = puVar19[2];
          uVar5 = FUN_71ba240c(*puVar19,uVar12);
          uVar23 = FUN_71ba240c(uVar23,uVar13);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar5 = FUN_71ba21e8(uVar5,uVar5);
          uVar5 = FUN_71ba0b38(uVar5,uVar23);
          uVar23 = FUN_71ba240c(uVar21,uVar14);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar5 = FUN_71ba0b38(uVar23,uVar5);
          piVar27 = piStack_44;
          uVar25 = (int)piStack_50 - (int)piStack_44 >> 2;
          do {
            uVar16 = uVar25 >> 1;
            iVar3 = *(int *)(*(int *)(piVar27[uVar16] + 0x30) + 4);
            iVar6 = *(int *)(iVar3 + 0x14);
            puVar19 = (undefined4 *)(iVar6 + 0x30);
            if (iVar6 == 0) {
              puVar19 = (undefined4 *)(iVar3 + 4);
            }
            uVar21 = puVar19[1];
            uVar24 = puVar19[2];
            uVar23 = FUN_71ba240c(*puVar19,uVar12);
            uVar21 = FUN_71ba240c(uVar21,uVar13);
            uVar21 = FUN_71ba21e8(uVar21,uVar21);
            uVar23 = FUN_71ba21e8(uVar23,uVar23);
            uVar23 = FUN_71ba0b38(uVar23,uVar21);
            uVar21 = FUN_71ba240c(uVar24,uVar14);
            uVar21 = FUN_71ba21e8(uVar21,uVar21);
            uVar23 = FUN_71ba0b38(uVar21,uVar23);
            iVar3 = FUN_71ba2d70(uVar23,uVar5);
            iVar6 = FUN_71ba2d70(uVar23,uVar5);
            if (iVar6 != 0) {
              piVar27 = piVar27 + uVar16 + 1;
            }
            if (iVar3 != 0) {
              uVar16 = uVar25 + ~(uVar25 >> 1);
            }
            uVar25 = uVar16;
          } while (uVar16 != 0);
        }
        iVar3 = (int)piVar27 - (int)piStack_44 >> 2;
      }
      piVar26 = piVar27;
      if ((piVar8 != piStack_44) && (piVar26 = piVar8, piVar27 != piStack_44)) {
        piVar9 = piVar8 + 1;
        if (piVar9 == piStack_44) {
          iVar6 = *piVar8;
          imp___aeabi_memmove4(piVar8,piStack_44,(int)piVar27 - (int)piStack_44);
          piVar26 = (int *)((int)piVar8 + ((int)piVar27 - (int)piStack_44));
          *piVar26 = iVar6;
        }
        else {
          piVar17 = piStack_44 + 1;
          if (piVar17 == piVar27) {
            iVar15 = piVar27[-1];
            iVar6 = (int)(piVar27 + -1) - (int)piVar8;
            piVar26 = (int *)((int)piVar27 - iVar6);
            if (iVar6 != 0) {
              imp___aeabi_memmove4(piVar26,piVar8);
            }
            *piVar8 = iVar15;
          }
          else {
            iVar6 = (int)piStack_44 - (int)piVar8 >> 2;
            iVar15 = (int)piVar27 - (int)piStack_44 >> 2;
            iVar22 = iVar6;
            if (iVar6 == iVar15) {
              do {
                iVar6 = piVar9[-1];
                piVar9[-1] = piVar17[-1];
                piVar17[-1] = iVar6;
                piVar26 = piStack_44;
                if (piVar9 == piStack_44) break;
                piVar9 = piVar9 + 1;
                bVar28 = piVar17 != piVar27;
                piVar17 = piVar17 + 1;
              } while (bVar28);
            }
            else {
              do {
                iVar18 = iVar15;
                FUN_71ba2da8(iVar22);
                iVar22 = iVar18;
                iVar15 = extraout_r1;
              } while (extraout_r1 != 0);
              piVar26 = piVar8 + iVar18;
              do {
                piVar26 = piVar26 + -1;
                iVar15 = *piVar26;
                piVar9 = piVar26;
                piVar17 = (int *)((int)piVar26 + ((int)piStack_44 - (int)piVar8));
                do {
                  piVar20 = piVar17;
                  piVar17 = piVar20 + iVar6;
                  *piVar9 = *piVar20;
                  iVar22 = (int)piVar27 - (int)piVar20 >> 2;
                  if (iVar22 <= iVar6) {
                    piVar17 = piVar8 + (iVar6 - iVar22);
                  }
                  piVar9 = piVar20;
                } while (piVar17 != piVar26);
                *piVar20 = iVar15;
              } while (piVar26 != piVar8);
              piVar26 = (int *)((int)piVar8 + ((int)piVar27 - (int)piStack_44));
            }
          }
        }
      }
      if (param_4 + iVar3 < (iStack_4c - (param_4 + iVar3)) - iVar4) {
        FUN_714db350((int)param_1 + iVar11,piVar8,piVar26,param_4,iVar3,param_6,param_7);
        piVar7 = piVar26;
        iVar3 = iStack_4c - iVar3;
        param_4 = -(param_4 + iVar4);
        piStack_44 = piVar27;
      }
      else {
        FUN_714db350(piVar26,piVar27,piStack_50,-(param_4 + iVar4),iStack_4c - iVar3,param_6,param_7
                    );
        piStack_50 = piVar26;
        piStack_44 = piVar8;
      }
      param_1 = piVar7;
      iStack_4c = iVar3;
      if (iVar3 == 0) {
        return;
      }
    }
    if (iStack_4c < param_4) {
      if (piStack_44 != piStack_50) {
        iVar3 = 0;
        do {
          *(undefined4 *)((int)param_6 + iVar3) = *(undefined4 *)((int)piStack_44 + iVar3);
          iVar3 = iVar3 + 4;
        } while ((int *)((int)piStack_44 + iVar3) != piStack_50);
        piVar7 = (int *)((int)param_6 + iVar3);
        do {
          piStack_50 = piStack_50 + -1;
          if (piStack_44 == param_1) {
            iVar3 = 0;
            do {
              *(undefined4 *)((int)piStack_50 + iVar3) = *(undefined4 *)((int)piVar7 + iVar3 + -4);
              iVar3 = iVar3 + -4;
            } while ((int *)((int)piVar7 + iVar3) != param_6);
            return;
          }
          iVar3 = piVar7[-1];
          iVar4 = *(int *)(*(int *)(iVar3 + 0x30) + 4);
          iVar11 = *(int *)(iVar4 + 0x14);
          puVar19 = (undefined4 *)(iVar11 + 0x30);
          if (iVar11 == 0) {
            puVar19 = (undefined4 *)(iVar4 + 4);
          }
          uVar23 = puVar19[1];
          uVar21 = puVar19[2];
          uVar12 = *puVar1;
          uVar5 = FUN_71ba240c(*puVar19);
          uVar13 = *puVar2;
          uVar23 = FUN_71ba240c(uVar23);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar5 = FUN_71ba21e8(uVar5,uVar5);
          uVar5 = FUN_71ba0b38(uVar5,uVar23);
          uVar14 = *puVar10;
          uVar23 = FUN_71ba240c(uVar21);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar5 = FUN_71ba0b38(uVar23,uVar5);
          iVar4 = piStack_44[-1];
          iVar11 = *(int *)(*(int *)(iVar4 + 0x30) + 4);
          iVar6 = *(int *)(iVar11 + 0x14);
          puVar19 = (undefined4 *)(iVar6 + 0x30);
          if (iVar6 == 0) {
            puVar19 = (undefined4 *)(iVar11 + 4);
          }
          uVar24 = puVar19[1];
          uVar21 = puVar19[2];
          uVar23 = FUN_71ba240c(*puVar19,uVar12);
          uVar12 = FUN_71ba240c(uVar24,uVar13);
          uVar12 = FUN_71ba21e8(uVar12,uVar12);
          uVar23 = FUN_71ba21e8(uVar23,uVar23);
          uVar23 = FUN_71ba0b38(uVar23,uVar12);
          uVar12 = FUN_71ba240c(uVar21,uVar14);
          uVar12 = FUN_71ba21e8(uVar12,uVar12);
          uVar23 = FUN_71ba0b38(uVar12,uVar23);
          iVar11 = FUN_71ba2d70(uVar5,uVar23);
          iVar6 = FUN_71ba2d70(uVar5,uVar23);
          iVar15 = FUN_71ba2d70(uVar5,uVar23);
          if (iVar15 == 0) {
            piVar7 = piVar7 + -1;
          }
          if (iVar6 != 0) {
            piStack_44 = piStack_44 + -1;
          }
          if (iVar11 != 0) {
            iVar3 = iVar4;
          }
          *piStack_50 = iVar3;
        } while (piVar7 != param_6);
      }
    }
    else if (param_1 != piStack_44) {
      iVar3 = 0;
      do {
        *(undefined4 *)((int)param_6 + iVar3) = *(undefined4 *)((int)param_1 + iVar3);
        iVar3 = iVar3 + 4;
      } while ((int *)((int)param_1 + iVar3) != piStack_44);
      piVar7 = param_6;
      do {
        if (piStack_44 == piStack_50) {
          imp___aeabi_memmove4(param_1,piVar7,(int)param_6 + (iVar3 - (int)piVar7));
          return;
        }
        iVar4 = *piStack_44;
        iVar11 = *(int *)(*(int *)(iVar4 + 0x30) + 4);
        iVar6 = *(int *)(iVar11 + 0x14);
        puVar19 = (undefined4 *)(iVar6 + 0x30);
        if (iVar6 == 0) {
          puVar19 = (undefined4 *)(iVar11 + 4);
        }
        uVar12 = *puVar1;
        uVar23 = puVar19[1];
        uVar21 = puVar19[2];
        uVar5 = FUN_71ba240c(*puVar19);
        uVar13 = *puVar2;
        uVar23 = FUN_71ba240c(uVar23);
        uVar23 = FUN_71ba21e8(uVar23,uVar23);
        uVar5 = FUN_71ba21e8(uVar5,uVar5);
        uVar5 = FUN_71ba0b38(uVar5,uVar23);
        uVar14 = *puVar10;
        uVar23 = FUN_71ba240c(uVar21);
        uVar23 = FUN_71ba21e8(uVar23,uVar23);
        uVar5 = FUN_71ba0b38(uVar23,uVar5);
        iVar11 = *piVar7;
        iVar6 = *(int *)(*(int *)(iVar11 + 0x30) + 4);
        iVar15 = *(int *)(iVar6 + 0x14);
        puVar19 = (undefined4 *)(iVar15 + 0x30);
        if (iVar15 == 0) {
          puVar19 = (undefined4 *)(iVar6 + 4);
        }
        uVar24 = puVar19[1];
        uVar21 = puVar19[2];
        uVar23 = FUN_71ba240c(*puVar19,uVar12);
        uVar12 = FUN_71ba240c(uVar24,uVar13);
        uVar12 = FUN_71ba21e8(uVar12,uVar12);
        uVar23 = FUN_71ba21e8(uVar23,uVar23);
        uVar23 = FUN_71ba0b38(uVar23,uVar12);
        uVar12 = FUN_71ba240c(uVar21,uVar14);
        uVar12 = FUN_71ba21e8(uVar12,uVar12);
        uVar23 = FUN_71ba0b38(uVar12,uVar23);
        iVar6 = FUN_71ba2d70(uVar5,uVar23);
        iVar15 = FUN_71ba2d70(uVar5,uVar23);
        iVar22 = FUN_71ba2d70(uVar5,uVar23);
        if (iVar22 != 0) {
          piStack_44 = piStack_44 + 1;
        }
        if (iVar15 == 0) {
          piVar7 = piVar7 + 1;
        }
        if (iVar6 != 0) {
          iVar11 = iVar4;
        }
        *param_1 = iVar11;
        param_1 = param_1 + 1;
      } while ((int *)((int)param_6 + iVar3) != piVar7);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714dcb38
// Entry: 0x714dcb38 | Size: 916 bytes
// =========================================================================

void FUN_714dcb38(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  DataMemoryBarrier(0xb);
  if (((DAT_71132d54 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71132d54), iVar7 != 0)) {
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c298c);
    if (*pcVar3 == '\0') {
      puVar1 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c297c);
      *puVar1 = 0xdf4bdd29;
      *(undefined1 *)(puVar1 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714dd320,puVar1,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c298c);
      *puVar6 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c297c);
    if (pbVar4[4] != 0) {
      pbVar4[4] = 0;
      *pbVar4 = *pbVar4 ^ 0x5d;
      pbVar4[1] = pbVar4[1] ^ 0xa5;
      pbVar4[2] = pbVar4[2] ^ 0x2f;
      pbVar4[3] = pbVar4[3] ^ 0xdf;
    }
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29ac);
    if (*pcVar3 == '\0') {
      puVar1 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c299c);
      *(undefined2 *)(puVar1 + 2) = 0x15d;
      *puVar1 = 0xbb4ecd2e;
      puVar1[1] = 0xab1bb6fa;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714dd344,puVar1,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29ac);
      *puVar6 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c299c);
    if (pbVar5[9] != 0) {
      pbVar5[9] = 0;
      *pbVar5 = *pbVar5 ^ 0x5d;
      pbVar5[1] = pbVar5[1] ^ 0xa5;
      pbVar5[2] = pbVar5[2] ^ 0x2f;
      pbVar5[3] = pbVar5[3] ^ 0xdf;
      pbVar5[4] = pbVar5[4] ^ 0xa5;
      pbVar5[5] = pbVar5[5] ^ 0xd3;
      pbVar5[6] = pbVar5[6] ^ 99;
      pbVar5[7] = pbVar5[7] ^ 0xdb;
      pbVar5[8] = pbVar5[8] ^ 0x5d;
    }
    DAT_71132d50 = FUN_715ec410(pbVar4,pbVar5,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71132d54);
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar7 = 0;
    do {
      iVar8 = DAT_70ffcec0 + iVar7;
      if (*(int *)(iVar8 + 0xc) == param_1) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar8 + 0x38) = 0;
        *(undefined4 *)(iVar8 + 0xc) = 0;
        break;
      }
      iVar7 = iVar7 + 0x3c;
    } while (iVar7 != 0xf00);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    FUN_714411a0(param_1,0,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                 *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),&uStack_30,
                 *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1,0,1,1,0,0,0,
                 *(undefined4 *)(param_1 + 0x10),1,0x3f800000,0,0);
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x28);
    uVar11 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = FUN_71ba0b38(*(undefined4 *)(param_1 + 0x20),0x3f800000);
    uVar9 = FUN_71ba17bc(uVar9);
    FUN_71473798(2,DAT_71132d50,*(undefined4 *)(param_1 + 4),0,uVar2,uVar2,0,uVar9,
                 *(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                 *(undefined1 *)(param_1 + 10),uVar10,1,uVar11,0,1);
  }
  return;
}


// =========================================================================
// Function: FUN_714dd3d4
// Entry: 0x714dd3d4 | Size: 56 bytes
// =========================================================================

void FUN_714dd3d4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_71132d5c;
  for (puVar2 = DAT_71132d58; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_714dcb38(*puVar2);
  }
  return;
}


// =========================================================================
// Function: FUN_714dd540
// Entry: 0x714dd540 | Size: 72 bytes
// =========================================================================

void FUN_714dd540(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = DAT_70b46c18 + 0x8fc;
  return;
}


// =========================================================================
// Function: FUN_714dd5c0
// Entry: 0x714dd5c0 | Size: 84 bytes
// =========================================================================

void FUN_714dd5c0(undefined4 *param_1)

{
  FUN_7154e7dc();
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_715d33c8(&DAT_70081c24,0);
  FUN_715d33c8(&DAT_70081c36);
  *param_1 = 0;
  FUN_715d33c8(&DAT_70081c48);
  FUN_715d33c8(&DAT_70081c5a);
  return;
}


// =========================================================================
// Function: FUN_714dd738
// Entry: 0x714dd738 | Size: 48 bytes
// =========================================================================

void FUN_714dd738(undefined4 *param_1)

{
  FUN_7154e7dc();
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_715d33c8(&DAT_70081c5a);
  return;
}


// =========================================================================
// Function: FUN_714dd7d8
// Entry: 0x714dd7d8 | Size: 12 bytes
// =========================================================================

void FUN_714dd7d8(int param_1)

{
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}


// =========================================================================
// Function: FUN_714dd7fc
// Entry: 0x714dd7fc | Size: 44 bytes
// =========================================================================

void FUN_714dd7fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_7154e7dc();
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_715d33c8(&DAT_70081c36);
  *param_1 = 0;
  uVar2 = FUN_71ba1638(param_3);
  uVar3 = FUN_71ba1638(param_4);
  uVar4 = FUN_71ba1638(param_5);
  uVar5 = FUN_71ba1638(param_6);
  uVar6 = FUN_71ba1638(param_7);
  uVar7 = FUN_71ba1638(param_2);
  uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
  FUN_715d33c8(&DAT_70081c6c,uVar1,(int)uVar7,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  return;
}


// =========================================================================
// Function: FUN_714dda40
// Entry: 0x714dda40 | Size: 44 bytes
// =========================================================================

void FUN_714dda40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_7154e7dc();
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_715d33c8(&DAT_70081c36);
  *param_1 = 0;
  uVar2 = FUN_71ba1638(param_3);
  uVar3 = FUN_71ba1638(param_4);
  uVar4 = FUN_71ba1638(param_2);
  uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
  FUN_715d33c8(&DAT_70081c7e,uVar1,(int)uVar4,uVar1,uVar2,uVar3,param_5);
  return;
}


// =========================================================================
// Function: FUN_714dde9c
// Entry: 0x714dde9c | Size: 44 bytes
// =========================================================================

void FUN_714dde9c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_7154e7dc();
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_715d33c8(&DAT_70081c36);
  FUN_715d33c8(&DAT_70081c90,1);
  uVar3 = *param_2;
  uVar1 = param_2[2];
  uVar4 = FUN_71ba1638(param_2[1]);
  uVar5 = FUN_71ba1638(uVar1);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar6 = FUN_71ba1638(*param_3);
  uVar7 = FUN_71ba1638(uVar1);
  uVar8 = FUN_71ba1638(uVar2);
  uVar9 = FUN_71ba1638(uVar3);
  uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_715d33c8(s_6_ffffffii_70081ca2,uVar1,(int)uVar9,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8,param_4,
               param_5);
  return;
}


// =========================================================================
// Function: FUN_714de138
// Entry: 0x714de138 | Size: 1692 bytes
// =========================================================================

void FUN_714de138(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xd) == '\0')) {
    iVar1 = FUN_713aeb00();
    uVar11 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x14),uVar11);
    iVar3 = FUN_71ba2d30(uVar2,0);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    uVar4 = FUN_71ba1e0c(*DAT_70b4204c);
    uVar11 = FUN_71ba240c(uVar4,uVar11);
    uVar2 = FUN_71ba13e0(uVar11,uVar2);
    iVar3 = FUN_71ba2d10(uVar2,0);
    if (iVar3 != 0) {
      uVar2 = 0;
    }
    iVar3 = FUN_71ba2d70(uVar2,0x3f800000);
    if (iVar3 != 0) {
      uVar2 = 0x3f800000;
    }
    uVar11 = FUN_71ba21e8(uVar2,uVar2);
    uVar4 = FUN_71ba0b38(uVar2,uVar2);
    uVar4 = FUN_71ba240c(0x40400000,uVar4);
    uVar11 = FUN_71ba21e8(uVar11,uVar4);
    uVar14 = *(undefined4 *)(param_1 + 0x18);
    puVar10 = (undefined4 *)(param_1 + 0x20);
    uVar4 = FUN_71ba240c(*puVar10,uVar14);
    uVar11 = FUN_71ba21e8(uVar4,uVar11);
    uVar11 = FUN_71ba0b38(uVar11,uVar14);
    puVar15 = (undefined4 *)(param_1 + 0x1c);
    *puVar15 = uVar11;
    FUN_714df1b0(&uStack_30);
    uVar11 = imp_cosf(*puVar15);
    puVar12 = (undefined4 *)(param_1 + 0x24);
    uVar4 = FUN_71ba21e8(uVar11,*puVar12);
    uVar11 = uStack_30;
    uVar5 = FUN_71ba240c(uStack_30,uVar4);
    puVar19 = (undefined4 *)(iVar1 + 0x174);
    *puVar19 = uVar5;
    uVar4 = imp_sinf(*puVar15);
    uVar6 = FUN_71ba21e8(uVar4,*puVar12);
    uVar14 = uStack_28;
    uVar4 = uStack_2c;
    uVar6 = FUN_71ba240c(uStack_2c,uVar6);
    puVar16 = (undefined4 *)(iVar1 + 0x178);
    *puVar16 = uVar6;
    uVar7 = FUN_71ba0b38(uVar14,*(undefined4 *)(param_1 + 0x28));
    puVar18 = (undefined4 *)(iVar1 + 0x17c);
    *puVar18 = uVar7;
    uStack_34 = FUN_71ba240c(uVar14,uVar7);
    uStack_38 = FUN_71ba240c(uVar4,uVar6);
    uStack_3c = FUN_71ba240c(uVar11,uVar5);
    iVar13 = iVar1 + 0x168;
    FUN_7136d040(iVar13,&uStack_3c);
    FUN_7136ce28(iVar13);
    FUN_7136d040(iVar1 + 0x120,&uStack_30);
    uVar11 = FUN_71ba240c(*puVar19,uStack_30);
    uVar4 = FUN_71ba240c(*puVar16,uStack_2c);
    uVar14 = FUN_71ba21e8(uVar4,uVar4);
    uVar5 = FUN_71ba21e8(uVar11,uVar11);
    uVar14 = FUN_71ba0b38(uVar5,uVar14);
    uVar5 = FUN_71ba240c(*puVar18,uStack_28);
    uVar5 = FUN_71ba21e8(uVar5,uVar5);
    FUN_71ba0b38(uVar5,uVar14);
    uVar5 = imp_sqrtf();
    uVar14 = imp_sqrtf(uVar14);
    iVar3 = FUN_71ba2d50(uVar14,0x3a83126f);
    if ((iVar3 != 0) && (iVar3 = FUN_71ba2d50(uVar5,0x3a83126f), iVar3 != 0)) {
      uVar11 = FUN_7133bb90(uVar11,uVar4);
      iVar3 = FUN_71ba2d70(uVar11,0x40490fd0);
      while (iVar3 != 0) {
        uVar11 = FUN_71ba0b38(uVar11,0xc0c90fd0);
        iVar3 = FUN_71ba2d70(uVar11,0x40490fd0);
      }
      iVar3 = FUN_71ba2d10(uVar11,0xc0490fd0);
      while (iVar3 != 0) {
        uVar11 = FUN_71ba0b38(uVar11,0x40c90fd0);
        iVar3 = FUN_71ba2d10(uVar11,0xc0490fd0);
      }
      *(undefined4 *)(iVar1 + 0x78) = uVar11;
      *(undefined4 *)(iVar1 + 0x1f8) = uVar5;
      *(undefined4 *)(iVar1 + 0x94) = uVar11;
      *(undefined4 *)(iVar1 + 0x98) = 0;
      *(undefined4 *)(iVar1 + 0x9c) = uVar5;
      *(undefined4 *)(iVar1 + 0x88) = 0;
    }
    FUN_713aeb54(iVar1);
    iVar3 = DAT_70b46c18;
    iVar17 = DAT_70b46c18 + 0x88c;
    FUN_7136d040(iVar17,puVar19);
    FUN_7136d040(iVar3 + 0x92c,puVar19);
    uVar8 = FUN_71ba240c(*puVar10,*puVar15);
    iVar9 = FUN_71ba2d50(uVar2,0x3f800000);
    if ((iVar9 != 0) || (iVar9 = FUN_71ba2d30(uVar8 & 0x7fffffff,0x3b656042), iVar9 != 0)) {
      FUN_714df1b0(&uStack_3c);
      uVar2 = imp_cosf(*puVar10);
      uVar11 = FUN_71ba21e8(uVar2,*puVar12);
      uVar2 = uStack_3c;
      uVar14 = FUN_71ba240c(uStack_3c,uVar11);
      *puVar19 = uVar14;
      uVar11 = imp_sinf(*puVar10);
      uVar5 = FUN_71ba21e8(uVar11,*puVar12);
      uVar4 = uStack_34;
      uVar11 = uStack_38;
      uVar5 = FUN_71ba240c(uStack_38,uVar5);
      *puVar16 = uVar5;
      uVar6 = FUN_71ba0b38(uVar4,*(undefined4 *)(param_1 + 0x28));
      *puVar18 = uVar6;
      uStack_40 = FUN_71ba240c(uVar4);
      uStack_44 = FUN_71ba240c(uVar11,uVar5);
      uStack_48 = FUN_71ba240c(uVar2,uVar14);
      FUN_7136d040(iVar13,&uStack_48);
      FUN_7136ce28(iVar13);
      FUN_7136d040(iVar1 + 0x120,&uStack_3c);
      uVar4 = FUN_71ba240c(*puVar19,uStack_3c);
      uVar11 = uStack_34;
      uVar14 = FUN_71ba240c(*puVar16,uStack_38);
      uVar5 = *puVar18;
      uVar2 = FUN_7133bb90(uVar4,uVar14);
      iVar13 = FUN_71ba2d70(uVar2,0x40490fd0);
      uVar11 = FUN_71ba240c(uVar5,uVar11);
      while (iVar13 != 0) {
        uVar2 = FUN_71ba0b38(uVar2,0xc0c90fd0);
        iVar13 = FUN_71ba2d70(uVar2,0x40490fd0);
      }
      iVar13 = FUN_71ba2d10(uVar2,0xc0490fd0);
      while (iVar13 != 0) {
        uVar2 = FUN_71ba0b38(uVar2,0x40c90fd0);
        iVar13 = FUN_71ba2d10(uVar2,0xc0490fd0);
      }
      *(undefined4 *)(iVar1 + 0x94) = uVar2;
      *(undefined4 *)(iVar1 + 0x78) = uVar2;
      *(undefined4 *)(iVar1 + 0x98) = 0;
      *(undefined4 *)(iVar1 + 0x88) = 0;
      uVar2 = FUN_71ba21e8(uVar14,uVar14);
      uVar4 = FUN_71ba21e8(uVar4,uVar4);
      uVar2 = FUN_71ba0b38(uVar4,uVar2);
      uVar11 = FUN_71ba21e8(uVar11,uVar11);
      FUN_71ba0b38(uVar11,uVar2);
      uVar2 = imp_sqrtf();
      *(undefined4 *)(iVar1 + 0x1f8) = uVar2;
      *(undefined4 *)(iVar1 + 0x9c) = uVar2;
      FUN_713aeb54(iVar1);
      FUN_7136d040(iVar17,puVar19);
      FUN_7136d040(iVar3 + 0x92c,puVar19);
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714df1b0
// Entry: 0x714df1b0 | Size: 348 bytes
// =========================================================================

void FUN_714df1b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_713aeb00();
  uVar4 = *(undefined4 *)(iVar1 + 0x174);
  uVar6 = *(undefined4 *)(iVar1 + 0x124);
  uVar7 = *(undefined4 *)(iVar1 + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x120);
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  uVar2 = FUN_71ba240c();
  uVar5 = *(undefined4 *)(iVar1 + 0x178);
  uVar6 = FUN_71ba240c(uVar6);
  uVar8 = *(undefined4 *)(iVar1 + 0x17c);
  uVar7 = FUN_71ba240c(uVar7,uVar8);
  uVar6 = FUN_71ba21e8(uVar6,uVar6);
  uVar2 = FUN_71ba21e8(uVar2,uVar2);
  uVar2 = FUN_71ba0b38(uVar2,uVar6);
  uVar6 = FUN_71ba21e8(uVar7,uVar7);
  uVar2 = FUN_71ba0b38(uVar6,uVar2);
  iVar3 = FUN_71ba2d10(uVar2,0x38d1b717);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar1 + 500);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x14) + 0x30;
      if (*(int *)(iVar3 + 0x14) == 0) {
        iVar1 = iVar3 + 4;
      }
      FUN_7136d040(param_1,iVar1);
      return;
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x168);
    uVar7 = *(undefined4 *)(iVar1 + 0x16c);
    uVar2 = FUN_71ba21e8(*(undefined4 *)(iVar1 + 0x170),0x41200000);
    uStack_28 = FUN_71ba0b38(uVar8,uVar2);
    uVar2 = FUN_71ba21e8(uVar7,0x41200000);
    uStack_2c = FUN_71ba0b38(uVar5,uVar2);
    uVar2 = FUN_71ba21e8(uVar6,0x41200000);
    uStack_30 = FUN_71ba0b38(uVar4,uVar2);
    FUN_7136d040(param_1,&uStack_30);
  }
  return;
}


// =========================================================================
// Function: FUN_714df51c
// Entry: 0x714df51c | Size: 1196 bytes
// =========================================================================

void FUN_714df51c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar14 = DAT_711ad134;
  uVar13 = DAT_711ad130;
  iVar16 = *param_1;
  if (iVar16 != 0) {
    iVar2 = FUN_71ba2cf0(DAT_711ad12c,0);
    if (((iVar2 == 0) || (iVar2 = FUN_71ba2cf0(uVar13,0), iVar2 == 0)) ||
       (iVar2 = FUN_71ba2cf0(uVar14,0), iVar2 == 0)) {
      puVar3 = (undefined4 *)FUN_713b3a08(iVar16);
      uVar1 = DAT_711ad134;
      uVar14 = DAT_711ad130;
      uVar13 = DAT_711ad12c;
      uVar15 = puVar3[2];
      uVar4 = *puVar3;
      uVar5 = puVar3[4];
      uVar19 = puVar3[1];
      uVar6 = FUN_71ba21e8(uVar15,DAT_711ad12c);
      uVar7 = puVar3[0xe];
      uVar6 = FUN_71ba0b38(uVar7,uVar6);
      uVar8 = puVar3[6];
      uVar9 = FUN_71ba21e8(uVar8,uVar14);
      uVar6 = FUN_71ba0b38(uVar6,uVar9);
      uVar9 = puVar3[10];
      uVar10 = FUN_71ba21e8(uVar9,uVar1);
      uVar6 = FUN_71ba0b38(uVar6,uVar10);
      uVar10 = puVar3[8];
      uVar20 = puVar3[9];
      uVar21 = puVar3[0xc];
      uVar17 = puVar3[0xd];
      uVar18 = puVar3[5];
      uStack_28 = uVar6;
      uVar11 = FUN_71ba21e8(uVar19,uVar13);
      uVar11 = FUN_71ba0b38(uVar17,uVar11);
      uVar12 = FUN_71ba21e8(uVar18,uVar14);
      uVar11 = FUN_71ba0b38(uVar11,uVar12);
      uVar12 = FUN_71ba21e8(uVar20,uVar1);
      uVar11 = FUN_71ba0b38(uVar11,uVar12);
      uStack_2c = uVar11;
      uVar13 = FUN_71ba21e8(uVar4,uVar13);
      uVar13 = FUN_71ba0b38(uVar21,uVar13);
      uVar14 = FUN_71ba21e8(uVar5,uVar14);
      uVar13 = FUN_71ba0b38(uVar13,uVar14);
      uVar14 = FUN_71ba21e8(uVar10,uVar1);
      uVar12 = FUN_71ba0b38(uVar13,uVar14);
      uVar1 = DAT_711ad140;
      uVar14 = DAT_711ad13c;
      uVar13 = DAT_711ad138;
      uStack_30 = uVar12;
      FUN_7154e7dc();
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_715d33c8(&DAT_70081c36);
      FUN_715d33c8(&DAT_70081c90,1);
      uVar22 = FUN_71ba1638(uVar11);
      uVar23 = FUN_71ba1638(uVar6);
      uVar24 = FUN_71ba1638(uVar12);
      uVar6 = (undefined4)((ulonglong)uVar24 >> 0x20);
      FUN_715d33c8(s_6_ffffffii_70081ca2,uVar6,(int)uVar24,uVar6,uVar22,uVar23,uVar24,uVar22,uVar23,
                   50000,1);
      FUN_7154e7dc();
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_715d33c8(&DAT_70081c24,1);
      uVar6 = FUN_71ba21e8(uVar19,uVar13);
      uVar6 = FUN_71ba0b38(uVar17,uVar6);
      uVar11 = FUN_71ba21e8(uVar18,uVar14);
      uVar6 = FUN_71ba0b38(uVar6,uVar11);
      uVar11 = FUN_71ba21e8(uVar20,uVar1);
      FUN_71ba0b38(uVar6,uVar11);
      uVar22 = FUN_71ba1638();
      uVar6 = FUN_71ba21e8(uVar15,uVar13);
      uVar6 = FUN_71ba0b38(uVar7,uVar6);
      uVar7 = FUN_71ba21e8(uVar8,uVar14);
      uVar6 = FUN_71ba0b38(uVar6,uVar7);
      uVar7 = FUN_71ba21e8(uVar9,uVar1);
      FUN_71ba0b38(uVar6,uVar7);
      uVar23 = FUN_71ba1638();
      uVar13 = FUN_71ba21e8(uVar4,uVar13);
      uVar13 = FUN_71ba0b38(uVar21,uVar13);
      uVar14 = FUN_71ba21e8(uVar5,uVar14);
      uVar13 = FUN_71ba0b38(uVar13,uVar14);
      uVar14 = FUN_71ba21e8(uVar10,uVar1);
      FUN_71ba0b38(uVar13,uVar14);
      uVar24 = FUN_71ba1638();
      uVar13 = (undefined4)((ulonglong)uVar24 >> 0x20);
      FUN_715d33c8(s_ffffffii_70081cb4,uVar13,(int)uVar24,uVar13,uVar22,uVar23,uVar24,uVar22,uVar23,
                   50000,1);
      iVar16 = DAT_70b46c18;
      FUN_7136d040(DAT_70b46c18 + 0x92c,&uStack_30);
      FUN_7136d040(iVar16 + (uint)*(byte *)(iVar16 + 0x57) * 0x210 + 0x2e4,&uStack_30);
      return;
    }
    iVar16 = *(int *)(iVar16 + 0x14) + 0x30;
    FUN_714dde9c(param_1,iVar16,iVar16,100,1);
  }
  return;
}


// =========================================================================
// Function: FUN_714e0110
// Entry: 0x714e0110 | Size: 44 bytes
// =========================================================================

void FUN_714e0110(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_7154e7dc();
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_715d33c8(&DAT_70081c24,1);
  uVar2 = *param_2;
  uVar1 = param_2[2];
  uVar4 = FUN_71ba1638(param_2[1]);
  uVar5 = FUN_71ba1638(uVar1);
  uVar1 = param_3[1];
  uVar3 = param_3[2];
  uVar6 = FUN_71ba1638(*param_3);
  uVar7 = FUN_71ba1638(uVar1);
  uVar8 = FUN_71ba1638(uVar3);
  uVar9 = FUN_71ba1638(uVar2);
  uVar1 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_715d33c8(s_ffffffii_70081cb4,uVar1,(int)uVar9,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8,param_4,
               param_5);
  return;
}


// =========================================================================
// Function: thunk_FUN_714e0378
// Entry: 0x714e0364 | Size: 12 bytes
// =========================================================================

void thunk_FUN_714e0378(void)

{
  FUN_714e0378();
  return;
}


// =========================================================================
// Function: FUN_714e0378
// Entry: 0x714e0378 | Size: 148 bytes
// =========================================================================

void FUN_714e0378(int param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)(param_1 + 4);
  param_2[1] = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  param_2[2] = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  param_2[4] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  param_2[5] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
  param_2[6] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
  param_2[8] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
  param_2[9] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
  param_2[10] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x28);
  param_2[0xc] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30);
  param_2[0xd] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34);
  param_2[0xe] = *(undefined4 *)(*(int *)(param_1 + 4) + 0x38);
  return;
}


// =========================================================================
// Function: FUN_714e0424
// Entry: 0x714e0424 | Size: 40 bytes
// =========================================================================

void FUN_714e0424(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  FUN_7154e7dc();
  iVar1 = FUN_713aeb00();
  FUN_714df1b0(&uStack_30);
  uVar3 = uStack_28;
  uVar2 = uStack_2c;
  uStack_3c = FUN_71ba240c(*(undefined4 *)(iVar1 + 0x174),uStack_30);
  uStack_34 = FUN_71ba240c(*(undefined4 *)(iVar1 + 0x17c),uVar3);
  uStack_38 = FUN_71ba240c(*(undefined4 *)(iVar1 + 0x178),uVar2);
  FUN_7136e6f0(&uStack_48,&uStack_3c);
  uVar2 = FUN_71ba21e8(uStack_44,uStack_44);
  uVar3 = FUN_71ba21e8(uStack_48,uStack_48);
  FUN_71ba0b38(uVar3,uVar2);
  uVar2 = imp_sqrtf();
  iVar4 = FUN_71ba2d30(param_3,0);
  if ((iVar4 == 0) && (iVar4 = FUN_71ba2d10(uVar2,0x3a83126f), iVar4 == 0)) {
    uVar3 = param_2[1];
    uStack_40 = FUN_71ba240c(param_2[2],uStack_28);
    uStack_44 = FUN_71ba240c(uVar3,uStack_2c);
    uStack_48 = FUN_71ba240c(*param_2,uStack_30);
    FUN_7136e6f0(&uStack_50,&uStack_48);
    uVar3 = FUN_71ba21e8(uStack_4c,uStack_4c);
    uVar5 = FUN_71ba21e8(uStack_50,uStack_50);
    FUN_71ba0b38(uVar5,uVar3);
    uVar3 = imp_sqrtf();
    iVar4 = FUN_71ba2d10(uVar3,0x3a83126f);
    if (iVar4 != 0) {
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    *(undefined2 *)(param_1 + 0xc) = 1;
    uVar3 = *DAT_70b4204c;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 0x28) = uStack_34;
    uVar2 = FUN_71ba1e0c(uVar3);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = FUN_71ba0b38(uVar2,param_3);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = FUN_71ba240c(uStack_30,*(undefined4 *)(iVar1 + 0x174));
    uVar3 = FUN_71ba240c(uStack_2c,*(undefined4 *)(iVar1 + 0x178));
    uVar3 = imp_atan2f(uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    uVar2 = imp_atan2f(uStack_44,uStack_48);
    uVar2 = FUN_71ba240c(uVar2,uVar3);
    iVar1 = FUN_71ba2d70(uVar2,0x40490fd0);
    while (iVar1 != 0) {
      uVar2 = FUN_71ba0b38(uVar2,0xc0c90fd0);
      iVar1 = FUN_71ba2d70(uVar2,0x40490fd0);
    }
    iVar1 = FUN_71ba2d10(uVar2,0xc0490fd0);
    while (iVar1 != 0) {
      uVar2 = FUN_71ba0b38(uVar2,0x40c90fd0);
      iVar1 = FUN_71ba2d10(uVar2,0xc0490fd0);
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    uVar2 = FUN_71ba0b38(uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    return;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}


// =========================================================================
// Function: FUN_714e0b34
// Entry: 0x714e0b34 | Size: 20 bytes
// =========================================================================

undefined4 FUN_714e0b34(void)

{
  int iVar1;
  
  iVar1 = FUN_716ac9ac();
  if (iVar1 == 0) {
    iVar1 = FUN_713aeb00();
    return *(undefined4 *)(iVar1 + 0x8c);
  }
  return DAT_700c807c;
}


// =========================================================================
// Function: FUN_714e0bec
// Entry: 0x714e0bec | Size: 88 bytes
// =========================================================================

void FUN_714e0bec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_71ba1638(param_3);
  uVar3 = FUN_71ba1638(param_2);
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  FUN_715d33c8(s___ffii_70081cc6,uVar1,(int)uVar3,uVar1,uVar2,param_4,param_5);
  return;
}


// =========================================================================
// Function: FUN_714e0d64
// Entry: 0x714e0d64 | Size: 24 bytes
// =========================================================================

undefined4 FUN_714e0d64(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iVar2 = DAT_71132d8c;
  uVar1 = DAT_71132d88;
  uVar4 = 0;
  iVar3 = 0;
  if (DAT_71132d78 != (int *)0x0) {
    iVar3 = *DAT_71132d78;
  }
  if (DAT_71132d78 != (int *)0x0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xb0);
    imp___aeabi_memclr(DAT_71132d8c,0x8000);
    uVar4 = 0x3f4ccccd;
    if (iVar3 == 1) {
      uVar4 = 0x3f800000;
    }
    iVar3 = 0;
    FUN_7162f0e4(param_1 + 8,uVar1,iVar2,0x100,0x80,uVar4,1,0);
    do {
      *(byte *)(DAT_71132d8c + iVar3) = ~*(byte *)(DAT_71132d8c + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x8000);
    uVar4 = 0;
    iVar3 = FUN_715ee838(DAT_71132d8c + 0x2800,0x100,0x100,0x40,0,0,0,0);
    if (iVar3 != 0) {
      iStack_24 = FUN_7143cf50();
      FUN_71358efc(auStack_28,0xff,0xff,0xff,0xff);
      FUN_71512960(DAT_71132d64);
      FUN_7135a238(DAT_71132d78,0,0,0x43800000,0x42800000,auStack_28);
      FUN_7135a238(&iStack_24,0x420c0000,0x41000000,0x43520000,0x42400000,auStack_28);
      uVar4 = FUN_71512a44(DAT_71132d64);
      if (iStack_24 != 0) {
        FUN_7143d364();
      }
    }
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_714e1140
// Entry: 0x714e1140 | Size: 24 bytes
// =========================================================================

undefined4 FUN_714e1140(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iVar2 = DAT_71132d8c;
  uVar1 = DAT_71132d88;
  uVar4 = 0;
  iVar3 = 0;
  if (DAT_71132d7c != (int *)0x0) {
    iVar3 = *DAT_71132d7c;
  }
  if (DAT_71132d7c != (int *)0x0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xb0);
    imp___aeabi_memclr(DAT_71132d8c,0x8000);
    uVar4 = 0x3f4ccccd;
    if (iVar3 == 1) {
      uVar4 = 0x3f800000;
    }
    iVar3 = 0;
    FUN_7162f0e4(param_1 + 8,uVar1,iVar2,0x100,0x80,uVar4,1,0);
    do {
      *(byte *)(DAT_71132d8c + iVar3) = ~*(byte *)(DAT_71132d8c + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x8000);
    uVar4 = 0;
    iVar3 = FUN_715ee838(DAT_71132d8c + 0x2800,0x100,0x100,0x40,0,0,0,0);
    if (iVar3 != 0) {
      iStack_24 = FUN_7143cf50();
      FUN_71358efc(auStack_28,0xff,0xff,0xff,0xff);
      FUN_71512960(DAT_71132d64);
      FUN_7135a238(DAT_71132d7c,0,0,0x43800000,0x42800000,auStack_28);
      FUN_7135a238(&iStack_24,0x42480000,0x41000000,0x43430000,0x42400000,auStack_28);
      uVar4 = FUN_71512a44(DAT_71132d64);
      if (iStack_24 != 0) {
        FUN_7143d364();
      }
    }
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_714e151c
// Entry: 0x714e151c | Size: 28 bytes
// =========================================================================

undefined4 FUN_714e151c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  
  iVar3 = DAT_71132d8c;
  uVar1 = DAT_71132d88;
  uVar2 = 0;
  iVar4 = 0;
  if (DAT_71132d84 != (int *)0x0) {
    iVar4 = *DAT_71132d84;
  }
  if (DAT_71132d84 != (int *)0x0 && iVar4 != 0) {
    imp___aeabi_memclr(DAT_71132d8c,0x8000);
    FUN_7162f0e4(param_1 + 8,uVar1,iVar3,0x100,0x80,0x3f4ccccd,1,0);
    iVar3 = FUN_715ee838(DAT_71132d8c + 0x2800,0x100,0x100,0x40,0,0x55,0xb9,0);
    iVar4 = DAT_71132d90;
    imp___aeabi_memclr(DAT_71132d90,0x4000);
    FUN_7162f0e4(param_1 + 0x26,uVar1,iVar4,0x80,0x80,0x3f4ccccd,1,0);
    iVar4 = FUN_715ee838(DAT_71132d90 + 0x1400,0x80,0x80,0x40,0,0x55,0xb9,0);
    if (iVar3 == 0 || iVar4 == 0) {
      if (iVar4 != 0) {
        FUN_7143b8c0();
      }
      uVar2 = 0;
      if (iVar3 != 0) {
        FUN_7143b8c0(iVar3);
        return 0;
      }
    }
    else {
      iStack_28 = FUN_7143cf50(iVar3);
      iStack_2c = FUN_7143cf50(iVar4);
      FUN_71358efc(auStack_30,0xff,0xff,0xff,0xff);
      FUN_71512960(DAT_71132d64);
      FUN_7135a238(DAT_71132d84,0,0,0x43800000,0x42800000,auStack_30);
      FUN_7135a238(&iStack_28,0x41500000,0x41200000,0x43160000,0x42200000,auStack_30);
      FUN_7135a238(&iStack_2c,0x433c0000,0x41000000,0x42600000,0x41f00000,auStack_30);
      uVar2 = FUN_71512a44(DAT_71132d64);
      if (iStack_2c != 0) {
        FUN_7143d364(iStack_2c);
      }
      if (iStack_28 != 0) {
        FUN_7143d364(iStack_28);
        return uVar2;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_714e1acc
// Entry: 0x714e1acc | Size: 28 bytes
// =========================================================================

undefined4 FUN_714e1acc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  
  iVar3 = DAT_71132d8c;
  uVar1 = DAT_71132d88;
  uVar2 = 0;
  iVar4 = 0;
  if (DAT_71132d80 != (int *)0x0) {
    iVar4 = *DAT_71132d80;
  }
  if (DAT_71132d80 != (int *)0x0 && iVar4 != 0) {
    imp___aeabi_memclr(DAT_71132d8c,0x8000);
    iVar4 = 0;
    FUN_7162f0e4(param_1 + 8,uVar1,iVar3,0x100,0x80,0x3f4ccccd,1,0);
    do {
      *(byte *)(DAT_71132d8c + iVar4) = ~*(byte *)(DAT_71132d8c + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x8000);
    iVar5 = 0;
    iVar3 = FUN_715ee838(DAT_71132d8c + 0x2800,0x100,0x100,0x40,0,0,0,0);
    iVar4 = DAT_71132d90;
    imp___aeabi_memclr(DAT_71132d90,0x4000);
    FUN_7162f0e4(param_1 + 0x26,uVar1,iVar4,0x80,0x80,0x3f4ccccd,1,0);
    do {
      *(byte *)(DAT_71132d90 + iVar5) = ~*(byte *)(DAT_71132d90 + iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x4000);
    iVar4 = FUN_715ee838(DAT_71132d90 + 0x1400,0x80,0x80,0x40,0,0,0,0);
    if (iVar3 == 0 || iVar4 == 0) {
      if (iVar4 != 0) {
        FUN_7143b8c0();
      }
      uVar2 = 0;
      if (iVar3 != 0) {
        FUN_7143b8c0(iVar3);
        return 0;
      }
    }
    else {
      iStack_24 = FUN_7143cf50(iVar3);
      iStack_28 = FUN_7143cf50(iVar4);
      FUN_71358efc(auStack_2c,0xff,0xff,0xff,0xff);
      FUN_71512960(DAT_71132d64);
      FUN_7135a238(DAT_71132d80,0,0,0x43800000,0x42800000,auStack_2c);
      FUN_7135a238(&iStack_24,0x42200000,0x41400000,0x430d0000,0x42200000,auStack_2c);
      FUN_7135a238(&iStack_28,0x43430000,0x41400000,0x42480000,0x42200000,auStack_2c);
      uVar2 = FUN_71512a44(DAT_71132d64);
      if (iStack_28 != 0) {
        FUN_7143d364(iStack_28);
      }
      if (iStack_24 != 0) {
        FUN_7143d364(iStack_24);
        return uVar2;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_714e20fc
// Entry: 0x714e20fc | Size: 28 bytes
// =========================================================================

undefined4 FUN_714e20fc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  
  iVar3 = DAT_71132d8c;
  uVar1 = DAT_71132d88;
  uVar2 = 0;
  iVar4 = 0;
  if (DAT_71132d74 != (int *)0x0) {
    iVar4 = *DAT_71132d74;
  }
  if (DAT_71132d74 != (int *)0x0 && iVar4 != 0) {
    imp___aeabi_memclr(DAT_71132d8c,0x8000);
    iVar4 = 0;
    FUN_7162f0e4(param_1 + 8,uVar1,iVar3,0x100,0x80,0x3f4ccccd,1,0);
    do {
      *(byte *)(DAT_71132d8c + iVar4) = ~*(byte *)(DAT_71132d8c + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x8000);
    iVar5 = 0;
    iVar3 = FUN_715ee838(DAT_71132d8c + 0x2800,0x100,0x100,0x40,0,0,0,0);
    iVar4 = DAT_71132d90;
    imp___aeabi_memclr(DAT_71132d90,0x4000);
    FUN_7162f0e4(param_1 + 0x26,uVar1,iVar4,0x80,0x80,0x3f4ccccd,1,0);
    do {
      *(byte *)(DAT_71132d90 + iVar5) = ~*(byte *)(DAT_71132d90 + iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x4000);
    iVar4 = FUN_715ee838(DAT_71132d90 + 0x1400,0x80,0x80,0x40,0,0,0,0);
    if (iVar3 == 0 || iVar4 == 0) {
      if (iVar4 != 0) {
        FUN_7143b8c0();
      }
      uVar2 = 0;
      if (iVar3 != 0) {
        FUN_7143b8c0(iVar3);
        return 0;
      }
    }
    else {
      iStack_24 = FUN_7143cf50(iVar3);
      iStack_28 = FUN_7143cf50(iVar4);
      FUN_71358efc(auStack_2c,0xff,0xff,0xff,0xff);
      FUN_71512960(DAT_71132d64);
      FUN_7135a238(DAT_71132d74,0,0,0x43800000,0x42800000,auStack_2c);
      FUN_7135a238(&iStack_24,0x41500000,0x41200000,0x43160000,0x42200000,auStack_2c);
      FUN_7135a238(&iStack_28,0x433a0000,0x41000000,0x42680000,0x41f00000,auStack_2c);
      uVar2 = FUN_71512a44(DAT_71132d64);
      if (iStack_28 != 0) {
        FUN_7143d364(iStack_28);
      }
      if (iStack_24 != 0) {
        FUN_7143d364(iStack_24);
        return uVar2;
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_714e272c
// Entry: 0x714e272c | Size: 20 bytes
// =========================================================================

void FUN_714e272c(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  byte bVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29cc);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29bc);
    *(undefined1 *)((int)puVar12 + 0x2e) = 1;
    uVar5 = DAT_70081ce8;
    uVar4 = DAT_70081ce4;
    uVar3 = DAT_70081ce0;
    uVar9 = DAT_70081cdc;
    *puVar12 = DAT_70081cd8;
    puVar12[1] = uVar9;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_70081d00;
    uVar5 = DAT_70081cfc;
    uVar4 = DAT_70081cf8;
    uVar3 = DAT_70081cf4;
    uVar9 = DAT_70081cf0;
    puVar12[5] = DAT_70081cec;
    puVar12[6] = uVar9;
    puVar12[7] = uVar3;
    puVar12[8] = uVar4;
    puVar12[9] = uVar5;
    puVar12[10] = uVar6;
    *(undefined2 *)(puVar12 + 0xb) = DAT_70081d04;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e56e0,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29cc);
    *puVar13 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29bc);
  if (*(char *)(iVar8 + 0x2e) != '\0') {
    uVar16 = 0;
    uVar17 = 0;
    do {
      iVar19 = (uVar16 & 7) * 8;
      uVar20 = iVar19 - 0x20;
      bVar14 = (byte)(0x1bf7b37b >> iVar19) |
               (byte)(-0x526a82bb << ((uVar16 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar20) {
        bVar14 = (byte)(0xad957d45 >> (uVar20 & 0xff));
      }
      *(byte *)(iVar8 + uVar16) = *(byte *)(iVar8 + uVar16) ^ bVar14;
      bVar21 = 0xfffffffe < uVar16;
      bVar1 = uVar17 == 0;
      bVar2 = (0x2c < uVar16) <= uVar17;
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 + bVar21;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x2e) = 0;
  }
  DAT_71132d88 = FUN_7162e9d8(iVar8,0x80);
  if (DAT_71132d88 != 0) {
    FUN_7162e468();
  }
  piVar18 = DAT_71132d6c;
  if (DAT_71132d70 != 0) {
    piVar15 = *(int **)(DAT_71132d68 + 4);
    *(int **)(*DAT_71132d6c + 4) = piVar15;
    *piVar15 = *piVar18;
    DAT_71132d70 = 0;
    while (piVar18 != &DAT_71132d68) {
      piVar18 = (int *)piVar18[1];
      thunk_qNQrlu();
    }
  }
  uVar9 = thunk_MwhHq(0x20);
  DAT_71132d64 = FUN_715128e0(uVar9,0x100,0x40,1);
  piVar18 = (int *)thunk_MwhHq(4);
  *piVar18 = 0;
  DAT_71132d74 = piVar18;
  DAT_71132d84 = (int *)thunk_MwhHq(4);
  *DAT_71132d84 = 0;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29ec);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29dc);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0x48b7721f;
    puVar12[1] = 0x54bc66c3;
    puVar12[2] = 0x2dac6307;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e5730,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29ec);
    *puVar13 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29dc);
  if (pbVar10[0xc] != 0) {
    *pbVar10 = *pbVar10 ^ 0x69;
    pbVar10[1] = pbVar10[1] ^ 0x17;
    pbVar10[2] = pbVar10[2] ^ 0xdf;
    pbVar10[3] = pbVar10[3] ^ 0x2d;
    pbVar10[0xc] = 0;
    pbVar10[4] = pbVar10[4] ^ 0xaf;
    pbVar10[5] = pbVar10[5] ^ 3;
    pbVar10[6] = pbVar10[6] ^ 0xd1;
    pbVar10[7] = pbVar10[7] ^ 0x31;
    pbVar10[8] = pbVar10[8] ^ 0x69;
    pbVar10[9] = pbVar10[9] ^ 0x17;
    pbVar10[10] = pbVar10[10] ^ 0xdf;
    pbVar10[0xb] = pbVar10[0xb] ^ 0x2d;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a0c);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29fc);
    *(undefined2 *)(puVar12 + 2) = 0x169;
    *puVar12 = 0x59be7b19;
    puVar12[1] = 0x44a35cca;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e575c,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a0c);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c29fc);
  if (pbVar11[9] != 0) {
    pbVar11[9] = 0;
    *pbVar11 = *pbVar11 ^ 0x69;
    pbVar11[1] = pbVar11[1] ^ 0x17;
    pbVar11[2] = pbVar11[2] ^ 0xdf;
    pbVar11[3] = pbVar11[3] ^ 0x2d;
    pbVar11[4] = pbVar11[4] ^ 0xaf;
    pbVar11[5] = pbVar11[5] ^ 3;
    pbVar11[6] = pbVar11[6] ^ 0xd1;
    pbVar11[7] = pbVar11[7] ^ 0x31;
    pbVar11[8] = pbVar11[8] ^ 0x69;
  }
  iVar8 = FUN_715ec410(pbVar10,pbVar11,1);
  if (*piVar18 != 0) {
    FUN_7143d364();
  }
  *piVar18 = iVar8;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a2c);
  piVar18 = DAT_71132d84;
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a1c);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0xd0f3c237;
    puVar12[1] = 0xce8ecc8f;
    puVar12[2] = 0xb5e8d32f;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e5788,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a2c);
    *puVar13 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a1c);
  if (pbVar10[0xc] != 0) {
    *pbVar10 = *pbVar10 ^ 0x41;
    pbVar10[1] = pbVar10[1] ^ 0xa7;
    pbVar10[2] = pbVar10[2] ^ 0x9b;
    pbVar10[3] = pbVar10[3] ^ 0xb5;
    pbVar10[0xc] = 0;
    pbVar10[4] = pbVar10[4] ^ 0xe3;
    pbVar10[5] = pbVar10[5] ^ 0xa9;
    pbVar10[6] = pbVar10[6] ^ 0xe3;
    pbVar10[7] = pbVar10[7] ^ 0xab;
    pbVar10[8] = pbVar10[8] ^ 0x41;
    pbVar10[9] = pbVar10[9] ^ 0xa7;
    pbVar10[10] = pbVar10[10] ^ 0x9b;
    pbVar10[0xb] = pbVar10[0xb] ^ 0xb5;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a4c);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a3c);
    *(undefined1 *)(puVar12 + 4) = 1;
    *puVar12 = 0xc1facb31;
    puVar12[1] = 0xde91f686;
    puVar12[2] = 0xd9f4d71e;
    puVar12[3] = 0xab86ca8a;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e57b4,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a4c);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a3c);
  if (pbVar11[0x10] != 0) {
    *pbVar11 = *pbVar11 ^ 0x41;
    pbVar11[1] = pbVar11[1] ^ 0xa7;
    pbVar11[2] = pbVar11[2] ^ 0x9b;
    pbVar11[3] = pbVar11[3] ^ 0xb5;
    pbVar11[0x10] = 0;
    pbVar11[4] = pbVar11[4] ^ 0xe3;
    pbVar11[5] = pbVar11[5] ^ 0xa9;
    pbVar11[6] = pbVar11[6] ^ 0xe3;
    pbVar11[7] = pbVar11[7] ^ 0xab;
    pbVar11[8] = pbVar11[8] ^ 0x41;
    pbVar11[9] = pbVar11[9] ^ 0xa7;
    pbVar11[10] = pbVar11[10] ^ 0x9b;
    pbVar11[0xb] = pbVar11[0xb] ^ 0xb5;
    pbVar11[0xc] = pbVar11[0xc] ^ 0xe3;
    pbVar11[0xd] = pbVar11[0xd] ^ 0xa9;
    pbVar11[0xe] = pbVar11[0xe] ^ 0xe3;
    pbVar11[0xf] = pbVar11[0xf] ^ 0xab;
  }
  iVar8 = FUN_715ec410(pbVar10,pbVar11,1);
  if (*piVar18 != 0) {
    FUN_7143d364();
  }
  *piVar18 = iVar8;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  piVar18 = (int *)thunk_MwhHq(4);
  *piVar18 = 0;
  DAT_71132d78 = piVar18;
  DAT_71132d7c = (int *)thunk_MwhHq(4);
  *DAT_71132d7c = 0;
  DAT_71132d80 = (int *)thunk_MwhHq(4);
  *DAT_71132d80 = 0;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a6c);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a5c);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0xee05b051;
    puVar12[1] = 0xf00ee26d;
    puVar12[2] = 0x8b1ea149;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e57e4,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a6c);
    *puVar13 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a5c);
  if (pbVar10[0xc] != 0) {
    *pbVar10 = *pbVar10 ^ 0x27;
    pbVar10[1] = pbVar10[1] ^ 0xd5;
    pbVar10[2] = pbVar10[2] ^ 0x6d;
    pbVar10[3] = pbVar10[3] ^ 0x8b;
    pbVar10[0xc] = 0;
    pbVar10[4] = pbVar10[4] ^ 1;
    pbVar10[5] = pbVar10[5] ^ 0x87;
    pbVar10[6] = pbVar10[6] ^ 99;
    pbVar10[7] = pbVar10[7] ^ 0x95;
    pbVar10[8] = pbVar10[8] ^ 0x27;
    pbVar10[9] = pbVar10[9] ^ 0xd5;
    pbVar10[10] = pbVar10[10] ^ 0x6d;
    pbVar10[0xb] = pbVar10[0xb] ^ 0x8b;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a8c);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a7c);
    *(undefined2 *)(puVar12 + 2) = 0x127;
    *puVar12 = 0xff0cb957;
    puVar12[1] = 0xf416d864;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e5810,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a8c);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a7c);
  if (pbVar11[9] != 0) {
    pbVar11[9] = 0;
    *pbVar11 = *pbVar11 ^ 0x27;
    pbVar11[1] = pbVar11[1] ^ 0xd5;
    pbVar11[2] = pbVar11[2] ^ 0x6d;
    pbVar11[3] = pbVar11[3] ^ 0x8b;
    pbVar11[4] = pbVar11[4] ^ 1;
    pbVar11[5] = pbVar11[5] ^ 0x87;
    pbVar11[6] = pbVar11[6] ^ 99;
    pbVar11[7] = pbVar11[7] ^ 0x95;
    pbVar11[8] = pbVar11[8] ^ 0x27;
  }
  iVar8 = FUN_715ec410(pbVar10,pbVar11,1);
  if (*piVar18 != 0) {
    FUN_7143d364();
  }
  *piVar18 = iVar8;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2aac);
  piVar18 = DAT_71132d7c;
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a9c);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0x38536233;
    puVar12[1] = 0xd61ed655;
    puVar12[2] = 0x5d48732b;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e583c,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2aac);
    *puVar13 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2a9c);
  if (pbVar10[0xc] != 0) {
    *pbVar10 = *pbVar10 ^ 0x45;
    pbVar10[1] = pbVar10[1] ^ 7;
    pbVar10[2] = pbVar10[2] ^ 0x3b;
    pbVar10[3] = pbVar10[3] ^ 0x5d;
    pbVar10[0xc] = 0;
    pbVar10[4] = pbVar10[4] ^ 0x39;
    pbVar10[5] = pbVar10[5] ^ 0xb3;
    pbVar10[6] = pbVar10[6] ^ 0x73;
    pbVar10[7] = pbVar10[7] ^ 0xb3;
    pbVar10[8] = pbVar10[8] ^ 0x45;
    pbVar10[9] = pbVar10[9] ^ 7;
    pbVar10[10] = pbVar10[10] ^ 0x3b;
    pbVar10[0xb] = pbVar10[0xb] ^ 0x5d;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2acc);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2abc);
    *(undefined2 *)(puVar12 + 2) = 0x145;
    *puVar12 = 0x295a6b35;
    puVar12[1] = 0xc611ec5c;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e5868,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2acc);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2abc);
  if (pbVar11[9] != 0) {
    pbVar11[9] = 0;
    *pbVar11 = *pbVar11 ^ 0x45;
    pbVar11[1] = pbVar11[1] ^ 7;
    pbVar11[2] = pbVar11[2] ^ 0x3b;
    pbVar11[3] = pbVar11[3] ^ 0x5d;
    pbVar11[4] = pbVar11[4] ^ 0x39;
    pbVar11[5] = pbVar11[5] ^ 0xb3;
    pbVar11[6] = pbVar11[6] ^ 0x73;
    pbVar11[7] = pbVar11[7] ^ 0xb3;
    pbVar11[8] = pbVar11[8] ^ 0x45;
  }
  iVar8 = FUN_715ec410(pbVar10,pbVar11,1);
  if (*piVar18 != 0) {
    FUN_7143d364();
  }
  *piVar18 = iVar8;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2aec);
  piVar18 = DAT_71132d80;
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2adc);
    *(undefined1 *)(puVar12 + 3) = 1;
    *puVar12 = 0x964f9225;
    puVar12[1] = 0xdec40c83;
    puVar12[2] = 0xf354833d;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e5894,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2aec);
    *puVar13 = 1;
  }
  pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2adc);
  if (pbVar10[0xc] != 0) {
    *pbVar10 = *pbVar10 ^ 0x53;
    pbVar10[1] = pbVar10[1] ^ 0xf7;
    pbVar10[2] = pbVar10[2] ^ 0x27;
    pbVar10[3] = pbVar10[3] ^ 0xf3;
    pbVar10[0xc] = 0;
    pbVar10[4] = pbVar10[4] ^ 0xef;
    pbVar10[5] = pbVar10[5] ^ 0x69;
    pbVar10[6] = pbVar10[6] ^ 0xa9;
    pbVar10[7] = pbVar10[7] ^ 0xbb;
    pbVar10[8] = pbVar10[8] ^ 0x53;
    pbVar10[9] = pbVar10[9] ^ 0xf7;
    pbVar10[10] = pbVar10[10] ^ 0x27;
    pbVar10[0xb] = pbVar10[0xb] ^ 0xf3;
  }
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b0c);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2afc);
    *(undefined2 *)(puVar12 + 2) = 0x153;
    *puVar12 = 0x87469b23;
    puVar12[1] = 0xc1c2368a;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e58c0,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b0c);
    *puVar13 = 1;
  }
  pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2afc);
  if (pbVar11[9] != 0) {
    pbVar11[9] = 0;
    *pbVar11 = *pbVar11 ^ 0x53;
    pbVar11[1] = pbVar11[1] ^ 0xf7;
    pbVar11[2] = pbVar11[2] ^ 0x27;
    pbVar11[3] = pbVar11[3] ^ 0xf3;
    pbVar11[4] = pbVar11[4] ^ 0xef;
    pbVar11[5] = pbVar11[5] ^ 0x69;
    pbVar11[6] = pbVar11[6] ^ 0xa9;
    pbVar11[7] = pbVar11[7] ^ 0xbb;
    pbVar11[8] = pbVar11[8] ^ 0x53;
  }
  iVar8 = FUN_715ec410(pbVar10,pbVar11,1);
  if (*piVar18 != 0) {
    FUN_7143d364();
  }
  *piVar18 = iVar8;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  DAT_71132d8c = thunk__IBDl(0x8000);
  DAT_71132d90 = thunk__IBDl(0x4000);
  return;
}


// =========================================================================
// Function: FUN_714e4868
// Entry: 0x714e4868 | Size: 52 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714e4868(undefined2 param_1,undefined4 param_2,undefined4 param_3,int param_4,byte *param_5
                 ,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined2 auStack_d0 [2];
  undefined4 uStack_cc;
  undefined1 auStack_c8 [30];
  undefined1 auStack_aa [10];
  undefined1 auStack_a0 [128];
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  auStack_d0[0] = param_1;
  uStack_cc = param_2;
  uVar2 = imp_strncpy(auStack_c8,param_3,0x1e);
  if (param_4 != 0) {
    uVar2 = imp_strncpy(auStack_aa,param_4,10);
  }
  if (param_5 != (byte *)0x0) {
    uVar2 = (uint)*param_5;
  }
  if (param_5 != (byte *)0x0 && uVar2 != 0) {
    imp_strncpy(auStack_a0,param_5,0x80);
  }
  else {
    auStack_a0[0] = 0;
  }
  uStack_20 = param_6;
  piVar3 = (int *)thunk_MwhHq(0xbc);
  imp___aeabi_memcpy4(piVar3 + 2,auStack_d0,0xb4);
  *piVar3 = (int)DAT_71132d68;
  piVar3[1] = (int)&DAT_71132d68;
  puVar1 = (undefined4 *)((int)DAT_71132d68 + 4);
  DAT_71132d68 = piVar3;
  *puVar1 = piVar3;
  DAT_71132d70 = DAT_71132d70 + 1;
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: thunk_FUN_714e4ac8
// Entry: 0x714e4ab4 | Size: 12 bytes
// =========================================================================

void thunk_FUN_714e4ac8(void)

{
  FUN_714e4ac8();
  return;
}


// =========================================================================
// Function: FUN_714e4ac8
// Entry: 0x714e4ac8 | Size: 1548 bytes
// =========================================================================

void FUN_714e4ac8(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  byte *unaff_r4;
  int *piVar11;
  ushort *puVar12;
  undefined4 uVar13;
  bool bVar14;
  
  piVar11 = DAT_71132d6c;
  if (DAT_71132d88 == 0) {
    return;
  }
  iVar4 = 0;
  if (DAT_71132d8c != 0) {
    iVar4 = DAT_71132d64;
  }
  if (DAT_71132d8c == 0 || iVar4 == 0) {
    return;
  }
  if (DAT_71132d6c != &DAT_71132d68) {
    pbVar1 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b1c);
    pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b3c);
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b5c);
    do {
      iVar4 = piVar11[3];
      puVar12 = (ushort *)(piVar11 + 2);
      switch(iVar4) {
      case 1:
        iVar4 = FUN_714e20fc(puVar12);
        break;
      case 2:
        iVar4 = FUN_714e0d64(puVar12);
        break;
      case 3:
        iVar4 = FUN_714e1140(puVar12);
        break;
      case 4:
        iVar4 = FUN_714e1acc(puVar12);
        break;
      case 5:
        iVar4 = FUN_714e151c(puVar12);
        break;
      default:
        goto switchD_714e4b84_default;
      }
      if (iVar4 == 0) {
        iVar4 = piVar11[3];
switchD_714e4b84_default:
        if (((iVar4 == 0) && (iVar4 = *(int *)(DAT_711f6d58 + 4), iVar4 != 0)) &&
           (uVar9 = (uint)*puVar12, uVar9 < 0x7d1)) {
          bVar14 = *(char *)(iVar4 + uVar9 + 0x3e88) != '\0';
          if (bVar14) {
            unaff_r4 = *(byte **)(iVar4 + uVar9 * 4);
          }
          if (bVar14 && unaff_r4 != (byte *)0x0) {
            pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b4c);
            if (*pcVar6 == '\0') {
              puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b3c);
              *(undefined1 *)((int)puVar7 + 0xe) = 1;
              *puVar7 = 0xcc584e3d;
              puVar7[1] = 0x7169acff;
              puVar7[2] = 0xf2505f2e;
              *(undefined2 *)(puVar7 + 3) = 0xf3ec;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e591c,puVar7,&DAT_70b0e000);
              puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b4c);
              *puVar8 = 1;
            }
            if (pbVar2[0xe] != 0) {
              *pbVar2 = *pbVar2 ^ 0x4f;
              pbVar2[1] = pbVar2[1] ^ 0x2b;
              pbVar2[2] = pbVar2[2] ^ 0x35;
              pbVar2[3] = pbVar2[3] ^ 0xad;
              pbVar2[0xe] = 0;
              pbVar2[4] = pbVar2[4] ^ 0x8f;
              pbVar2[5] = pbVar2[5] ^ 0xf3;
              pbVar2[6] = pbVar2[6] ^ 0x19;
              pbVar2[7] = pbVar2[7] ^ 0x1d;
              pbVar2[8] = pbVar2[8] ^ 0x4f;
              pbVar2[9] = pbVar2[9] ^ 0x2b;
              pbVar2[10] = pbVar2[10] ^ 0x35;
              pbVar2[0xb] = pbVar2[0xb] ^ 0xad;
              pbVar2[0xc] = pbVar2[0xc] ^ 0x8f;
              pbVar2[0xd] = pbVar2[0xd] ^ 0xf3;
            }
            iVar4 = FUN_715fb4bc(unaff_r4,pbVar2);
            if (iVar4 != 0) {
              uVar9 = (uint)*puVar12;
              uVar13 = 0;
              if ((uVar9 < 0x7d1) &&
                 (*(char *)(*(int *)(DAT_711f6d58 + 4) + uVar9 + 0x3e88) != '\0')) {
                uVar13 = *(undefined4 *)(*(int *)(DAT_711f6d58 + 4) + uVar9 * 4);
              }
              pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b6c);
              if (*pcVar6 == '\0') {
                puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b5c);
                *(undefined1 *)((int)puVar7 + 0xe) = 1;
                *puVar7 = 0xba0acaa5;
                puVar7[1] = &DAT_71c330c9;
                puVar7[2] = 0x8402dbb6;
                *(undefined2 *)(puVar7 + 3) = 0x6fda;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e594c,puVar7,&DAT_70b0e000);
                puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b6c);
                *puVar8 = 1;
              }
              if (pbVar3[0xe] != 0) {
                *pbVar3 = *pbVar3 ^ 0xd7;
                pbVar3[1] = pbVar3[1] ^ 0xaf;
                pbVar3[2] = pbVar3[2] ^ 0x67;
                pbVar3[3] = pbVar3[3] ^ 0xdb;
                pbVar3[0xe] = 0;
                pbVar3[4] = pbVar3[4] ^ 0xb9;
                pbVar3[5] = pbVar3[5] ^ 0x6f;
                pbVar3[6] = pbVar3[6] ^ 0xb3;
                pbVar3[7] = pbVar3[7] ^ 0x1d;
                pbVar3[8] = pbVar3[8] ^ 0xd7;
                pbVar3[9] = pbVar3[9] ^ 0xaf;
                pbVar3[10] = pbVar3[10] ^ 0x67;
                pbVar3[0xb] = pbVar3[0xb] ^ 0xdb;
                pbVar3[0xc] = pbVar3[0xc] ^ 0xb9;
                pbVar3[0xd] = pbVar3[0xd] ^ 0x6f;
              }
              FUN_715fa6b8(uVar13,pbVar3);
              unaff_r4 = pbVar3;
            }
          }
        }
      }
      else {
        iVar5 = *(int *)(DAT_711f6d58 + 4);
        if ((iVar5 != 0) && (uVar9 = (uint)*puVar12, uVar9 < 0x7d1)) {
          bVar14 = *(char *)(iVar5 + uVar9 + 0x3e88) != '\0';
          if (bVar14) {
            unaff_r4 = *(byte **)(iVar5 + uVar9 * 4);
          }
          if (bVar14 && unaff_r4 != (byte *)0x0) {
            pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b2c);
            if (*pcVar6 == '\0') {
              puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b1c);
              *(undefined1 *)((int)puVar7 + 0xe) = 1;
              *puVar7 = 0x60d6f2d7;
              puVar7[1] = 0x59e7f84f;
              puVar7[2] = 0x5edee3c4;
              *(undefined2 *)(puVar7 + 3) = 0xa75c;
              thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e58ec,puVar7,&DAT_70b0e000);
              puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b2c);
              *puVar8 = 1;
            }
            if (pbVar1[0xe] != 0) {
              *pbVar1 = *pbVar1 ^ 0xa5;
              pbVar1[1] = pbVar1[1] ^ 0x97;
              pbVar1[2] = pbVar1[2] ^ 0xbb;
              pbVar1[3] = pbVar1[3] ^ 1;
              pbVar1[0xe] = 0;
              pbVar1[4] = pbVar1[4] ^ 0x3f;
              pbVar1[5] = pbVar1[5] ^ 0xa7;
              pbVar1[6] = pbVar1[6] ^ 0x97;
              pbVar1[7] = pbVar1[7] ^ 0x35;
              pbVar1[8] = pbVar1[8] ^ 0xa5;
              pbVar1[9] = pbVar1[9] ^ 0x97;
              pbVar1[10] = pbVar1[10] ^ 0xbb;
              pbVar1[0xb] = pbVar1[0xb] ^ 1;
              pbVar1[0xc] = pbVar1[0xc] ^ 0x3f;
              pbVar1[0xd] = pbVar1[0xd] ^ 0xa7;
            }
            FUN_715fb56c(unaff_r4,pbVar1,iVar4);
          }
        }
      }
      piVar11 = (int *)piVar11[1];
    } while (piVar11 != &DAT_71132d68);
  }
  piVar11 = DAT_71132d6c;
  if (DAT_71132d70 != 0) {
    piVar10 = *(int **)(DAT_71132d68 + 4);
    *(int **)(*DAT_71132d6c + 4) = piVar10;
    *piVar10 = *piVar11;
    DAT_71132d70 = 0;
    while (piVar11 != &DAT_71132d68) {
      piVar11 = (int *)piVar11[1];
      thunk_qNQrlu();
    }
  }
  return;
}


