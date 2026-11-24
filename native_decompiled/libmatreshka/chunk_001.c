// =========================================================================
// Function: FUN_71350000
// Entry: 0x71350000 | Size: 124 bytes
// =========================================================================

undefined8 FUN_71350000(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_713500cc
// Entry: 0x713500cc | Size: 892 bytes
// =========================================================================

int FUN_713500cc(int param_1)

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
  uVar13 = 0x71350120;
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
    FUN_71ba33fc(uVar9,-0xecafd64 - (iVar2 + 0x7135029c + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3135029cU & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_71350384;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_71350384:
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
// Function: FUN_713506c8
// Entry: 0x713506c8 | Size: 124 bytes
// =========================================================================

undefined8 FUN_713506c8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = thunk__IBDl(param_3 * param_2);
  *param_1 = uVar1;
  iVar2 = thunk__IBDl(param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[1] = iVar2;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) | 0x80;
      *(byte *)(param_1[1] + iVar2) = *(byte *)(param_1[1] + iVar2) & 0x80;
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return CONCAT44(iVar2,param_1);
}


// =========================================================================
// Function: FUN_71350794
// Entry: 0x71350794 | Size: 396 bytes
// =========================================================================

void FUN_71350794(undefined4 param_1)

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
  if (((DAT_70b3ee18 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee18), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa58);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa48);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_700748e0;
      uVar5 = DAT_700748dc;
      uVar4 = DAT_700748d8;
      uVar3 = DAT_700748d4;
      *puVar11 = DAT_700748d0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_700748f4;
      uVar5 = DAT_700748f0;
      uVar4 = DAT_700748ec;
      uVar3 = DAT_700748e8;
      puVar11[5] = DAT_700748e4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_700748fa;
      *(undefined2 *)(puVar11 + 10) = DAT_700748f8;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713527f4,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa58);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa48);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xf1953f9d >> iVar15) |
                (byte)(0x27cf676f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x27cf676f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b3ee14 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee18);
  }
                    /* WARNING: Could not recover jumptable at 0x713507c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee14)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71350bb8
// Entry: 0x71350bb8 | Size: 392 bytes
// =========================================================================

void FUN_71350bb8(undefined4 param_1)

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
  if (((DAT_70b3ee20 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee20), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa78);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa68);
      *(undefined1 *)((int)puVar10 + 0x1f) = 1;
      uVar4 = DAT_70074908;
      uVar3 = DAT_70074904;
      *puVar10 = DAT_70074900;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      uVar5 = DAT_70074918;
      uVar4 = DAT_70074914;
      uVar3 = DAT_70074910;
      puVar10[3] = DAT_7007490c;
      puVar10[4] = uVar3;
      puVar10[5] = uVar4;
      puVar10[6] = uVar5;
      uVar6 = DAT_7007491e;
      *(undefined2 *)(puVar10 + 7) = DAT_7007491c;
      *(undefined1 *)((int)puVar10 + 0x1e) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71352844,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa78);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa68);
    if (*(char *)(iVar8 + 0x1f) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x9f9f81c5 >> iVar14) |
                (byte)(0x2327bd99 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x2327bd99 >> (uVar15 & 0xff));
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
    DAT_70b3ee1c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee20);
  }
                    /* WARNING: Could not recover jumptable at 0x71350be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee1c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71350fd8
// Entry: 0x71350fd8 | Size: 388 bytes
// =========================================================================

void FUN_71350fd8(undefined4 param_1)

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
  if (((DAT_70b3ee28 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee28), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa98);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa88);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_70074930;
      uVar5 = DAT_7007492c;
      uVar4 = DAT_70074928;
      uVar3 = DAT_70074924;
      *puVar11 = DAT_70074920;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70074936;
      *(undefined2 *)(puVar11 + 5) = DAT_70074934;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71352884,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa98);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baa88);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xc5cb6335 >> iVar15) |
                (byte)(-0x6a24fad1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x95db052f >> (uVar16 & 0xff));
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
    DAT_70b3ee24 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee28);
  }
                    /* WARNING: Could not recover jumptable at 0x71351004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee24)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713513f4
// Entry: 0x713513f4 | Size: 388 bytes
// =========================================================================

void FUN_713513f4(undefined4 param_1)

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
  if (((DAT_70b3ee30 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee30), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baab8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baaa8);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007494c;
      uVar6 = DAT_70074948;
      uVar5 = DAT_70074944;
      uVar4 = DAT_70074940;
      uVar3 = DAT_7007493c;
      *puVar11 = DAT_70074938;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      *(undefined2 *)(puVar11 + 6) = DAT_70074950;
      *(undefined1 *)((int)puVar11 + 0x1a) = DAT_70074952;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713528bc,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baab8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baaa8);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x6d5367e7 >> iVar15) |
                (byte)(0xb834d21 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xb834d21 >> (uVar16 & 0xff));
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
    DAT_70b3ee2c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee30);
  }
                    /* WARNING: Could not recover jumptable at 0x71351420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee2c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71351810
// Entry: 0x71351810 | Size: 388 bytes
// =========================================================================

void FUN_71351810(undefined4 param_1)

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
  if (((DAT_70b3ee38 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee38), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baad8);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baac8);
      *(undefined1 *)((int)puVar11 + 0x17) = 1;
      uVar6 = DAT_70074968;
      uVar5 = DAT_70074964;
      uVar4 = DAT_70074960;
      uVar3 = DAT_7007495c;
      *puVar11 = DAT_70074958;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_7007496e;
      *(undefined2 *)(puVar11 + 5) = DAT_7007496c;
      *(undefined1 *)((int)puVar11 + 0x16) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713528f8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baad8);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baac8);
    if (*(char *)(iVar9 + 0x17) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x67055da1 >> iVar15) |
                (byte)(-0x64c4be87 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x9b3b4179 >> (uVar16 & 0xff));
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
    DAT_70b3ee34 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee38);
  }
                    /* WARNING: Could not recover jumptable at 0x7135183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee34)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71351c2c
// Entry: 0x71351c2c | Size: 376 bytes
// =========================================================================

void FUN_71351c2c(undefined4 param_1)

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
  if (((DAT_70b3ee40 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee40), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baaf8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baae8);
      *(undefined1 *)(puVar9 + 7) = 1;
      uVar4 = DAT_70074978;
      uVar3 = DAT_70074974;
      *puVar9 = DAT_70074970;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      uVar5 = DAT_70074988;
      uVar4 = DAT_70074984;
      uVar3 = DAT_70074980;
      puVar9[3] = DAT_7007497c;
      puVar9[4] = uVar3;
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71352930,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baaf8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baae8);
    if (*(char *)(iVar7 + 0x1c) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x8fbf972b >> iVar13) |
                (byte)(0x33936bbb << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0x33936bbb >> (uVar14 & 0xff));
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
    DAT_70b3ee3c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee40);
  }
                    /* WARNING: Could not recover jumptable at 0x71351c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee3c)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7135203c
// Entry: 0x7135203c | Size: 380 bytes
// =========================================================================

void FUN_7135203c(undefined4 param_1)

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
  if (((DAT_70b3ee48 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ee48), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab18);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab08);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_700749a0;
      uVar5 = DAT_7007499c;
      uVar4 = DAT_70074998;
      uVar3 = DAT_70074994;
      *puVar10 = DAT_70074990;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700749b4;
      uVar5 = DAT_700749b0;
      uVar4 = DAT_700749ac;
      uVar3 = DAT_700749a8;
      puVar10[5] = DAT_700749a4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135296c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab18);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab08);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x7c34bcd >> iVar14) |
                (byte)(0x1bb371b9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x1bb371b9 >> (uVar15 & 0xff));
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
    DAT_70b3ee44 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ee48);
  }
                    /* WARNING: Could not recover jumptable at 0x71352068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ee44)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71356e3c
// Entry: 0x71356e3c | Size: 76 bytes
// =========================================================================

void FUN_71356e3c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    *param_1 = iVar2;
    if (*(int *)(iVar1 + 8) != 0) {
      *(int *)(*(int *)(iVar1 + 8) + 4) = iVar2;
    }
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    }
    FUN_71357260();
    iVar1 = *param_1;
  }
  return;
}


// =========================================================================
// Function: FUN_71356ebc
// Entry: 0x71356ebc | Size: 48 bytes
// =========================================================================

undefined4 * FUN_71356ebc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_71357154(0xc);
  *puVar1 = param_2;
  FUN_713572dc(puVar1,param_1);
  return puVar1;
}


// =========================================================================
// Function: FUN_71356f3c
// Entry: 0x71356f3c | Size: 88 bytes
// =========================================================================

void FUN_71356f3c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar2 = piVar4;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    if (*piVar2 == param_2) {
      if (piVar4 == piVar2) {
        *param_1 = piVar4[1];
      }
      iVar3 = piVar2[1];
      if (piVar2[2] != 0) {
        *(int *)(piVar2[2] + 4) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 8) = piVar2[2];
      }
      FUN_71357260();
      return;
    }
    piVar1 = piVar2 + 1;
    piVar2 = (int *)*piVar1;
  } while ((int *)*piVar1 != (int *)0x0);
  return;
}


// =========================================================================
// Function: FUN_71356fc8
// Entry: 0x71356fc8 | Size: 52 bytes
// =========================================================================

void FUN_71356fc8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 4);
    FUN_7135741c();
    iVar1 = *param_1;
  }
  return;
}


// =========================================================================
// Function: FUN_71357030
// Entry: 0x71357030 | Size: 48 bytes
// =========================================================================

undefined4 * FUN_71357030(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_71357314(8);
  *puVar1 = param_2;
  FUN_7135748c(puVar1,param_1);
  return puVar1;
}


// =========================================================================
// Function: FUN_713570b0
// Entry: 0x713570b0 | Size: 112 bytes
// =========================================================================

void FUN_713570b0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    return;
  }
  piVar2 = piVar3;
  if (*piVar3 != param_2) {
    do {
      piVar1 = piVar2;
      piVar2 = (int *)piVar1[1];
      if (piVar2 == (int *)0x0) {
        return;
      }
    } while (*piVar2 != param_2);
    if (piVar3 != piVar2) {
      piVar1[1] = piVar2[1];
      goto LAB_71357110;
    }
  }
  *param_1 = piVar3[1];
LAB_71357110:
  FUN_7135741c(piVar2);
  return;
}


// =========================================================================
// Function: FUN_71357154
// Entry: 0x71357154 | Size: 184 bytes
// =========================================================================

int FUN_71357154(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  bVar3 = false;
  piVar4 = (int *)*DAT_70b3edf4;
  iVar2 = piVar4[3];
  do {
    iVar2 = iVar2 + 1;
    piVar4[3] = iVar2;
    if (piVar4[2] <= iVar2) {
      if (bVar3) {
        imp_raise(5);
        piVar4[3] = -1;
        return 0;
      }
      iVar2 = 0;
      bVar3 = true;
      piVar4[3] = 0;
    }
    bVar1 = *(byte *)(piVar4[1] + iVar2);
  } while (-1 < (char)bVar1);
  *(byte *)(piVar4[1] + iVar2) = bVar1 & 0x7f;
  bVar1 = *(byte *)(piVar4[1] + piVar4[3]);
  *(byte *)(piVar4[1] + piVar4[3]) = bVar1 + 1 & 0x7f | bVar1 & 0x80;
  return *piVar4 + piVar4[3] * 0xc;
}


// =========================================================================
// Function: FUN_71357260
// Entry: 0x71357260 | Size: 68 bytes
// =========================================================================

void FUN_71357260(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_70b3edf4;
  iVar1 = (param_1 - *piVar2 >> 2) * -0x55555555;
  *(byte *)(piVar2[1] + iVar1) = *(byte *)(piVar2[1] + iVar1) | 0x80;
  if (iVar1 < piVar2[3]) {
    piVar2[3] = iVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_713572dc
// Entry: 0x713572dc | Size: 32 bytes
// =========================================================================

void FUN_713572dc(int param_1,int *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *param_2;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_1;
  }
  *param_2 = param_1;
  return;
}


// =========================================================================
// Function: FUN_71357314
// Entry: 0x71357314 | Size: 180 bytes
// =========================================================================

int FUN_71357314(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  
  bVar3 = false;
  piVar4 = (int *)*DAT_70b3edf0;
  iVar2 = piVar4[3];
  do {
    iVar2 = iVar2 + 1;
    piVar4[3] = iVar2;
    if (piVar4[2] <= iVar2) {
      if (bVar3) {
        imp_raise(5);
        piVar4[3] = -1;
        return 0;
      }
      iVar2 = 0;
      bVar3 = true;
      piVar4[3] = 0;
    }
    bVar1 = *(byte *)(piVar4[1] + iVar2);
  } while (-1 < (char)bVar1);
  *(byte *)(piVar4[1] + iVar2) = bVar1 & 0x7f;
  bVar1 = *(byte *)(piVar4[1] + piVar4[3]);
  *(byte *)(piVar4[1] + piVar4[3]) = bVar1 + 1 & 0x7f | bVar1 & 0x80;
  return *piVar4 + piVar4[3] * 8;
}


// =========================================================================
// Function: FUN_7135741c
// Entry: 0x7135741c | Size: 56 bytes
// =========================================================================

void FUN_7135741c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_70b3edf0;
  iVar1 = param_1 - *piVar2 >> 3;
  *(byte *)(piVar2[1] + iVar1) = *(byte *)(piVar2[1] + iVar1) | 0x80;
  if (iVar1 < piVar2[3]) {
    piVar2[3] = iVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_7135748c
// Entry: 0x7135748c | Size: 16 bytes
// =========================================================================

void FUN_7135748c(int param_1,int *param_2)

{
  *(int *)(param_1 + 4) = *param_2;
  *param_2 = param_1;
  return;
}


// =========================================================================
// Function: FUN_71357554
// Entry: 0x71357554 | Size: 360 bytes
// =========================================================================

void FUN_71357554(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FUN_71ba0b38(param_2,0x3f800000);
  uVar2 = FUN_71ba0b38(uVar1,param_7);
  uVar3 = FUN_71ba0b38(uVar2,param_12);
  iVar4 = FUN_71ba2d70(uVar3,0);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = imp_sqrtf(uVar2);
  uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
  *param_1 = uVar2;
  uVar3 = FUN_71ba240c(0x3f800000,param_2);
  uVar2 = FUN_71ba240c(uVar3,param_7);
  uVar5 = FUN_71ba0b38(uVar2,param_12);
  iVar4 = FUN_71ba2d70(uVar5,0);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = uVar5;
  }
  uVar2 = imp_sqrtf(uVar2);
  uVar6 = FUN_71ba21e8(uVar2,0x3f000000);
  uVar7 = FUN_71ba240c(param_6,param_3);
  param_1[3] = uVar6 & 0x7fffffff | uVar7 & 0x80000000;
  uVar2 = FUN_71ba0b38(uVar3,param_7);
  uVar3 = FUN_71ba240c(uVar2,param_12);
  iVar4 = FUN_71ba2d70(uVar3,0);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar2 = imp_sqrtf(uVar2);
  uVar6 = FUN_71ba21e8(uVar2,0x3f000000);
  uVar7 = FUN_71ba240c(param_4,param_10);
  param_1[2] = uVar6 & 0x7fffffff | uVar7 & 0x80000000;
  uVar2 = FUN_71ba240c(uVar1,param_7);
  uVar1 = FUN_71ba240c(uVar2,param_12);
  iVar4 = FUN_71ba2d70(uVar1,0);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = uVar1;
  }
  uVar2 = imp_sqrtf(uVar2);
  uVar6 = FUN_71ba21e8(uVar2,0x3f000000);
  uVar7 = FUN_71ba240c(param_11,param_8);
  param_1[1] = uVar6 & 0x7fffffff | uVar7 & 0x80000000;
  return;
}


// =========================================================================
// Function: FUN_71357990
// Entry: 0x71357990 | Size: 392 bytes
// =========================================================================

void FUN_71357990(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = param_2[5];
  uVar8 = param_2[10];
  uVar1 = FUN_71ba0b38(*param_2,0x3f800000);
  uVar1 = FUN_71ba0b38(uVar1,uVar7);
  uVar7 = FUN_71ba0b38(uVar1,uVar8);
  iVar2 = FUN_71ba2d70(uVar7,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = uVar7;
  }
  uVar1 = imp_sqrtf(uVar1);
  uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
  *param_1 = uVar1;
  uVar7 = param_2[5];
  uVar8 = param_2[10];
  uVar1 = FUN_71ba0b38(*param_2,0x3f800000);
  uVar1 = FUN_71ba240c(uVar1,uVar7);
  uVar7 = FUN_71ba240c(uVar1,uVar8);
  iVar2 = FUN_71ba2d70(uVar7,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = uVar7;
  }
  uVar1 = imp_sqrtf(uVar1);
  uVar3 = FUN_71ba21e8(uVar1,0x3f000000);
  param_1[1] = uVar3;
  uVar7 = param_2[5];
  uVar8 = param_2[10];
  uVar1 = FUN_71ba240c(0x3f800000,*param_2);
  uVar1 = FUN_71ba0b38(uVar1,uVar7);
  uVar7 = FUN_71ba240c(uVar1,uVar8);
  iVar2 = FUN_71ba2d70(uVar7,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = uVar7;
  }
  uVar1 = imp_sqrtf(uVar1);
  uVar4 = FUN_71ba21e8(uVar1,0x3f000000);
  param_1[2] = uVar4;
  uVar7 = param_2[5];
  uVar8 = param_2[10];
  uVar1 = FUN_71ba240c(0x3f800000,*param_2);
  uVar1 = FUN_71ba240c(uVar1,uVar7);
  uVar7 = FUN_71ba0b38(uVar1,uVar8);
  iVar2 = FUN_71ba2d70(uVar7,0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = uVar7;
  }
  uVar1 = imp_sqrtf(uVar1);
  uVar5 = FUN_71ba21e8(uVar1,0x3f000000);
  param_1[3] = uVar5;
  uVar6 = FUN_71ba240c(param_2[9],param_2[6]);
  param_1[1] = uVar3 & 0x7fffffff | uVar6 & 0x80000000;
  uVar3 = FUN_71ba240c(param_2[2],param_2[8]);
  param_1[2] = uVar4 & 0x7fffffff | uVar3 & 0x80000000;
  uVar3 = FUN_71ba240c(param_2[4],param_2[1]);
  param_1[3] = uVar5 & 0x7fffffff | uVar3 & 0x80000000;
  return;
}


// =========================================================================
// Function: FUN_71357e24
// Entry: 0x71357e24 | Size: 464 bytes
// =========================================================================

void FUN_71357e24(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar4 = param_1 + 1;
  uVar1 = FUN_71ba21e8(*param_1,*param_1);
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar2 = FUN_71ba21e8(*puVar4,*puVar4);
  uVar5 = FUN_71ba21e8(uVar5,uVar5);
  uVar6 = FUN_71ba21e8(uVar6,uVar6);
  uVar3 = FUN_71ba240c(uVar5,uVar2);
  uVar3 = FUN_71ba240c(uVar3,uVar6);
  uVar3 = FUN_71ba0b38(uVar1,uVar3);
  param_2[5] = uVar3;
  uVar3 = FUN_71ba240c(uVar2,uVar5);
  uVar3 = FUN_71ba240c(uVar3,uVar6);
  uVar3 = FUN_71ba0b38(uVar1,uVar3);
  *param_2 = uVar3;
  uVar5 = FUN_71ba240c(uVar2 ^ 0x80000000,uVar5);
  uVar5 = FUN_71ba0b38(uVar5,uVar6);
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  param_2[10] = uVar1;
  uVar5 = param_1[3];
  uVar1 = FUN_71ba21e8(*puVar4,param_1[2]);
  uVar5 = FUN_71ba21e8(uVar5,*param_1);
  uVar6 = FUN_71ba240c(uVar1,uVar5);
  uVar6 = FUN_71ba0b38(uVar6,uVar6);
  param_2[1] = uVar6;
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  param_2[4] = uVar1;
  uVar5 = param_1[2];
  uVar1 = FUN_71ba21e8(*puVar4,param_1[3]);
  uVar5 = FUN_71ba21e8(uVar5,*param_1);
  uVar6 = FUN_71ba0b38(uVar1,uVar5);
  uVar6 = FUN_71ba0b38(uVar6,uVar6);
  param_2[2] = uVar6;
  uVar1 = FUN_71ba240c(uVar1,uVar5);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  param_2[8] = uVar1;
  uVar5 = *puVar4;
  uVar1 = FUN_71ba21e8(param_1[2],param_1[3]);
  uVar5 = FUN_71ba21e8(uVar5,*param_1);
  uVar6 = FUN_71ba240c(uVar1,uVar5);
  uVar6 = FUN_71ba0b38(uVar6,uVar6);
  param_2[6] = uVar6;
  uVar1 = FUN_71ba0b38(uVar1,uVar5);
  uVar1 = FUN_71ba0b38(uVar1,uVar1);
  param_2[9] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71358370
// Entry: 0x71358370 | Size: 184 bytes
// =========================================================================

void FUN_71358370(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_1[2];
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[3];
  uVar1 = FUN_71ba21e8(uVar4,uVar4);
  uVar2 = FUN_71ba21e8(uVar6,uVar6);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(uVar3,uVar3);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(uVar5,uVar5);
  FUN_71ba0b38(uVar2,uVar1);
  uVar1 = imp_sqrtf();
  uVar2 = FUN_71ba13e0(uVar3,uVar1);
  param_1[3] = uVar2;
  uVar2 = FUN_71ba13e0(uVar4,uVar1);
  param_1[2] = uVar2;
  uVar2 = FUN_71ba13e0(uVar6,uVar1);
  param_1[1] = uVar2;
  uVar1 = FUN_71ba13e0(uVar5,uVar1);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71358590
// Entry: 0x71358590 | Size: 996 bytes
// =========================================================================

void FUN_71358590(undefined4 *param_1,undefined4 *param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_34;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((param_3 != (uint *)0x0) && (iVar1 = FUN_71ba2d70(param_4,0x3f800000), iVar1 == 0)) {
      uVar2 = param_2[2];
      uVar10 = param_2[3];
      uVar6 = param_3[2];
      uStack_50 = param_3[3];
      uVar7 = param_2[1];
      uVar12 = param_3[1];
      uVar3 = FUN_71ba21e8();
      uVar4 = FUN_71ba21e8(uVar7,uVar12);
      uVar3 = FUN_71ba0b38(uVar4,uVar3);
      uVar4 = FUN_71ba21e8(uVar10,uStack_50);
      uVar3 = FUN_71ba0b38(uVar4,uVar3);
      uVar8 = *param_3;
      uVar4 = *param_2;
      uVar5 = FUN_71ba21e8(uVar4,uVar8);
      uVar3 = FUN_71ba0b38(uVar5,uVar3);
      uVar13 = FUN_71ba1638();
      uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
      iVar1 = FUN_71ba2d10(uVar3,0);
      if (iVar1 != 0) {
        uVar8 = uVar8 ^ 0x80000000;
        uVar9 = uVar9 ^ 0x80000000;
        uVar6 = uVar6 ^ 0x80000000;
        uVar12 = uVar12 ^ 0x80000000;
        uStack_50 = uStack_50 ^ 0x80000000;
      }
      uVar14 = FUN_71ba23ec(0,0x3ff00000,(int)uVar13,uVar9);
      iVar1 = FUN_71ba2c9c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0x9999999a,0x3fb99999);
      if (iVar1 == 0) {
        uVar14 = FUN_71ba1638(param_4);
        uVar13 = FUN_71ba23ec(0,0x3ff00000,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      }
      else {
        uVar14 = imp_acos((int)uVar13,uVar9);
        uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar15 = imp_sin();
        uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar16 = FUN_71ba1638(param_4);
        uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar13 = FUN_71ba23ec(0,0x3ff00000,(int)uVar16,uVar11);
        FUN_71ba1ea0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,uVar3);
        uVar13 = imp_sin();
        uVar13 = FUN_71ba0f98((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar15,uVar5);
        FUN_71ba1ea0((int)uVar14,uVar3,(int)uVar16,uVar11);
        uVar14 = imp_sin();
        uVar14 = FUN_71ba0f98((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar15,uVar5);
      }
      uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar5 = (undefined4)uVar14;
      uStack_54 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_34 = (undefined4)uVar13;
      uVar13 = FUN_71ba1638(uVar10);
      uVar14 = FUN_71ba1638(uStack_50);
      uVar14 = FUN_71ba1ea0(uVar5,uVar11,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      uVar13 = FUN_71ba1ea0(uStack_34,uStack_54,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      FUN_71ba0670((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                   (int)((ulonglong)uVar14 >> 0x20));
      uVar3 = FUN_71ba242c();
      param_1[3] = uVar3;
      uVar13 = FUN_71ba1638(uVar2);
      uVar14 = FUN_71ba1638(uVar6);
      uVar14 = FUN_71ba1ea0(uVar5,uVar11,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      uVar13 = FUN_71ba1ea0(uStack_34,uStack_54,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      FUN_71ba0670((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                   (int)((ulonglong)uVar14 >> 0x20));
      uVar2 = FUN_71ba242c();
      param_1[2] = uVar2;
      uVar13 = FUN_71ba1638(uVar7);
      uVar14 = FUN_71ba1638(uVar12);
      uVar14 = FUN_71ba1ea0(uVar5,uVar11,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      uVar13 = FUN_71ba1ea0(uStack_34,uStack_54,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      FUN_71ba0670((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                   (int)((ulonglong)uVar14 >> 0x20));
      uVar2 = FUN_71ba242c();
      param_1[1] = uVar2;
      uVar13 = FUN_71ba1638(uVar4);
      uVar14 = FUN_71ba1638(uVar8);
      uVar14 = FUN_71ba1ea0(uVar5,uVar11,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      uVar13 = FUN_71ba1ea0(uStack_34,uStack_54,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
      FUN_71ba0670((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                   (int)((ulonglong)uVar14 >> 0x20));
      uVar2 = FUN_71ba242c();
      *param_1 = uVar2;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71358ecc
// Entry: 0x71358ecc | Size: 24 bytes
// =========================================================================

void FUN_71358ecc(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0xff;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: FUN_71358efc
// Entry: 0x71358efc | Size: 24 bytes
// =========================================================================

void FUN_71358efc(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: FUN_71358f2c
// Entry: 0x71358f2c | Size: 12 bytes
// =========================================================================

void FUN_71358f2c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// =========================================================================
// Function: FUN_71358f50
// Entry: 0x71358f50 | Size: 12 bytes
// =========================================================================

void FUN_71358f50(uint *param_1,uint param_2)

{
  *param_1 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
             param_2 >> 0x18;
  return;
}


// =========================================================================
// Function: FUN_71358f74
// Entry: 0x71358f74 | Size: 4 bytes
// =========================================================================

void FUN_71358f74(void)

{
  return;
}


// =========================================================================
// Function: FUN_71358f90
// Entry: 0x71358f90 | Size: 16 bytes
// =========================================================================

void FUN_71358f90(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: FUN_71358fb8
// Entry: 0x71358fb8 | Size: 80 bytes
// =========================================================================

bool FUN_71358fb8(char *param_1,char *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    if (param_1[2] != param_2[2]) {
      return false;
    }
    bVar1 = param_1[3] == param_2[3];
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_71359020
// Entry: 0x71359020 | Size: 12 bytes
// =========================================================================

void FUN_71359020(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}


// =========================================================================
// Function: FUN_71359044
// Entry: 0x71359044 | Size: 532 bytes
// =========================================================================

void FUN_71359044(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

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
  if ((DAT_70b3eed8 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3eed8);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab38,param_2);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab28);
        *(undefined1 *)(iVar4 + 0x10d) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_700749b8,0x10d);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135996c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab38);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab28);
      if (*(char *)(iVar4 + 0x10d) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0x93a3c787 >> iVar9) |
                  (byte)(0x47abcda5 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x47abcda5 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x10b < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x10d) = 0;
      }
      DAT_70b3eed4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3eed8);
    }
  }
  (*DAT_70b3eed4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14,param_15);
  return;
}


// =========================================================================
// Function: FUN_7135950c
// Entry: 0x7135950c | Size: 428 bytes
// =========================================================================

void FUN_7135950c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  if ((DAT_70b3eee0 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3eee0);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab58,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab48);
        *(undefined1 *)(iVar3 + 0x7a) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70074ac8,0x7a);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713599bc,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab58);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bab48);
      if (*(char *)(iVar3 + 0x7a) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0x2549d30d >> iVar5) |
                  (byte)(0x65617345 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0x65617345 >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0x78 < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x7a) = 0;
      }
      DAT_70b3eedc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3eee0);
    }
  }
  (*DAT_70b3eedc)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


// =========================================================================
// Function: FUN_71359a0c
// Entry: 0x71359a0c | Size: 356 bytes
// =========================================================================

void FUN_71359a0c(void)

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
  if (((DAT_70b3eef0 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3eef0), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babb8);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baba8);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_70074b88;
      uVar3 = DAT_70074b84;
      *puVar8 = DAT_70074b80;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70074b98;
      uVar4 = DAT_70074b94;
      uVar3 = DAT_70074b90;
      puVar8[3] = DAT_70074b8c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135b840,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babb8);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baba8);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
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
        bVar2 = (0x1a < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
    }
    DAT_70b3eeec = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3eef0);
  }
                    /* WARNING: Could not recover jumptable at 0x71359a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3eeec)();
  return;
}


// =========================================================================
// Function: FUN_71359e08
// Entry: 0x71359e08 | Size: 408 bytes
// =========================================================================

void FUN_71359e08(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70b3eef8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3eef8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babd8,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babc8);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_70074bb0;
      uVar5 = DAT_70074bac;
      uVar4 = DAT_70074ba8;
      uVar3 = DAT_70074ba4;
      *puVar10 = DAT_70074ba0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70074bc4;
      uVar5 = DAT_70074bc0;
      uVar4 = DAT_70074bbc;
      uVar3 = DAT_70074bb8;
      puVar10[5] = DAT_70074bb4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_70074bc8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135b87c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babd8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babc8);
    if (*(char *)(iVar8 + 0x29) != '\0') {
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
        bVar2 = (0x27 < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x29) = 0;
    }
    DAT_70b3eef4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3eef8);
  }
                    /* WARNING: Could not recover jumptable at 0x71359e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3eef4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7135a238
// Entry: 0x7135a238 | Size: 428 bytes
// =========================================================================

void FUN_7135a238(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70b3ef00 & 1) == 0) {
    iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ef00);
    if (iVar3 != 0) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babf8,param_2,param_3,param_4);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babe8);
        *(undefined1 *)(iVar3 + 0x53) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_70074bd0,0x53);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135b8cc,iVar3,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babf8);
        *puVar7 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700babe8);
      if (*(char *)(iVar3 + 0x53) != '\0') {
        uVar8 = 0;
        uVar10 = 0;
        do {
          iVar5 = (uVar8 & 7) * 8;
          uVar6 = iVar5 - 0x20;
          bVar9 = (byte)(0x63671535 >> iVar5) |
                  (byte)(-0xaac1a99 << ((uVar8 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar6) {
            bVar9 = (byte)(0xf553e567 >> (uVar6 & 0xff));
          }
          *(byte *)(iVar3 + uVar8) = *(byte *)(iVar3 + uVar8) ^ bVar9;
          bVar11 = 0xfffffffe < uVar8;
          bVar1 = uVar10 == 0;
          bVar2 = (0x51 < uVar8) <= uVar10;
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar3 + 0x53) = 0;
      }
      DAT_70b3eefc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ef00);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7135a27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3eefc)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7135a698
// Entry: 0x7135a698 | Size: 492 bytes
// =========================================================================

void FUN_7135a698(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70b3ef08 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ef08);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac18,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac08);
        *(undefined1 *)(iVar4 + 0x89) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70074c28,0x89);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135b91c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac18);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac08);
      if (*(char *)(iVar4 + 0x89) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          uVar10 = iVar9 - 0x20;
          bVar3 = (byte)(0xbb935373 >> iVar9) |
                  (byte)(0x39e3c19b << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x39e3c19b >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (0x87 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x89) = 0;
      }
      DAT_70b3ef04 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ef08);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7135a704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ef04)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7135ab38
// Entry: 0x7135ab38 | Size: 428 bytes
// =========================================================================

void FUN_7135ab38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70b3ef10 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ef10), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac38,param_2,param_3);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac28);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_70074cc4;
      uVar4 = DAT_70074cc0;
      uVar3 = DAT_70074cbc;
      *puVar10 = DAT_70074cb8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70074cd8;
      uVar5 = DAT_70074cd4;
      uVar4 = DAT_70074cd0;
      uVar3 = DAT_70074ccc;
      puVar10[4] = DAT_70074cc8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_70074cec;
      uVar5 = DAT_70074ce8;
      uVar4 = DAT_70074ce4;
      uVar3 = DAT_70074ce0;
      puVar10[9] = DAT_70074cdc;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_70074cf0;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135b96c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac38);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac28);
    if (*(char *)(iVar8 + 0x39) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0x6bad4799 >> iVar14) |
                (byte)(-0x388088dd << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar15 = iVar14 - 0x20;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xc77f7723 >> (uVar15 & 0xff));
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
    DAT_70b3ef0c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ef10);
  }
                    /* WARNING: Could not recover jumptable at 0x7135ab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ef0c)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7135af7c
// Entry: 0x7135af7c | Size: 416 bytes
// =========================================================================

void FUN_7135af7c(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70b3ef18 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ef18), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac58,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac48);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_70074d08;
      uVar5 = DAT_70074d04;
      uVar4 = DAT_70074d00;
      uVar3 = DAT_70074cfc;
      *puVar10 = DAT_70074cf8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70074d1c;
      uVar5 = DAT_70074d18;
      uVar4 = DAT_70074d14;
      uVar3 = DAT_70074d10;
      puVar10[5] = DAT_70074d0c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70074d30;
      uVar5 = DAT_70074d2c;
      uVar4 = DAT_70074d28;
      uVar3 = DAT_70074d24;
      puVar10[10] = DAT_70074d20;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_70074d34;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135b9bc,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac58);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac48);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xab056bdd >> iVar14) |
                (byte)(0x7d0149af << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x7d0149af >> (uVar15 & 0xff));
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
    DAT_70b3ef14 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ef18);
  }
                    /* WARNING: Could not recover jumptable at 0x7135afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ef14)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7135b3b4
// Entry: 0x7135b3b4 | Size: 412 bytes
// =========================================================================

void FUN_7135b3b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  if ((DAT_70b3ef20 & 1) == 0) {
    iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b3ef20);
    if (iVar4 != 0) {
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac78,param_2,param_3,param_4);
      if (*pcVar5 == '\0') {
        iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac68);
        *(undefined1 *)(iVar4 + 0x65) = 1;
        imp___aeabi_memcpy8(iVar4,&DAT_70074d38,0x65);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7135ba0c,iVar4,&DAT_70b0e000);
        puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac78);
        *puVar6 = 1;
      }
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bac68);
      if (*(char *)(iVar4 + 0x65) != '\0') {
        uVar7 = 0;
        uVar8 = 0;
        do {
          iVar9 = (uVar7 & 7) * 8;
          bVar3 = (byte)(0x6f799353 >> iVar9) |
                  (byte)(-0x7e7c0257 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
          uVar10 = iVar9 - 0x20;
          if (-1 < (int)uVar10) {
            bVar3 = (byte)(0x8183fda9 >> (uVar10 & 0xff));
          }
          *(byte *)(iVar4 + uVar7) = *(byte *)(iVar4 + uVar7) ^ bVar3;
          bVar11 = 0xfffffffe < uVar7;
          bVar1 = uVar8 == 0;
          bVar2 = (99 < uVar7) <= uVar8;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + bVar11;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar4 + 0x65) = 0;
      }
      DAT_70b3ef1c = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70b3ef20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x7135b3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b3ef1c)(param_1,param_2,param_3,param_4);
  return;
}


// =========================================================================
// Function: FUN_7135ceec
// Entry: 0x7135ceec | Size: 368 bytes
// =========================================================================

void FUN_7135ceec(undefined4 param_1)

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
  if (((DAT_70b41f94 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41f94), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baed8);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baec8);
      *(undefined1 *)(iVar4 + 0x41) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70074fa0,0x41);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71362488,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baed8);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baec8);
    if (*(char *)(iVar4 + 0x41) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x7b6501a9 >> iVar9) | (byte)(0x57fb21ed << ((uVar7 & 7) * -8 + 0x20 & 0xff))
        ;
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0x57fb21ed >> (uVar10 & 0xff));
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
    DAT_70b41f90 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41f94);
  }
                    /* WARNING: Could not recover jumptable at 0x7135cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41f90)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7135d310
// Entry: 0x7135d310 | Size: 396 bytes
// =========================================================================

void FUN_7135d310(undefined4 param_1)

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
  if (((DAT_70b41f9c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41f9c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baef8);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baee8);
      *(undefined1 *)((int)puVar10 + 0x39) = 1;
      uVar5 = DAT_70074ff4;
      uVar4 = DAT_70074ff0;
      uVar3 = DAT_70074fec;
      *puVar10 = DAT_70074fe8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70075008;
      uVar5 = DAT_70075004;
      uVar4 = DAT_70075000;
      uVar3 = DAT_70074ffc;
      puVar10[4] = DAT_70074ff8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      uVar6 = DAT_7007501c;
      uVar5 = DAT_70075018;
      uVar4 = DAT_70075014;
      uVar3 = DAT_70075010;
      puVar10[9] = DAT_7007500c;
      puVar10[10] = uVar3;
      puVar10[0xb] = uVar4;
      puVar10[0xc] = uVar5;
      puVar10[0xd] = uVar6;
      *(undefined1 *)(puVar10 + 0xe) = DAT_70075020;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713624d8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baef8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baee8);
    if (*(char *)(iVar8 + 0x39) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xdf2fa55d >> iVar14) |
                (byte)(-0x249c2c5b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xdb63d3a5 >> (uVar15 & 0xff));
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
    DAT_70b41f98 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41f9c);
  }
                    /* WARNING: Could not recover jumptable at 0x7135d33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41f98)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7135d734
// Entry: 0x7135d734 | Size: 776 bytes
// =========================================================================

void FUN_7135d734(uint param_1,uint param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  
  puVar6 = (ushort *)(DAT_70b41f74 + param_1 * 0x14);
  cVar4 = (char)puVar6[8];
  if (cVar4 == '\x02') {
    if (((param_2 & 0x10) == 0) || (((byte)puVar6[3] & 0x10) != 0)) {
      *(byte *)(puVar6 + 3) = (byte)puVar6[3] | (byte)param_2;
      return;
    }
    *DAT_70b41f80 = *DAT_70b41f80 + 1;
    cVar4 = (char)puVar6[8];
    uVar5 = (byte)puVar6[3] | 0x10;
  }
  else {
    if (cVar4 == '\0') {
      *(byte *)(puVar6 + 3) = (byte)puVar6[3] | (byte)param_2;
      goto LAB_7135d7e8;
    }
    uVar5 = (uint)(byte)puVar6[3];
    param_2 = param_2 & 0xffffffef;
  }
  uVar5 = uVar5 | param_2;
  *(char *)(puVar6 + 3) = (char)uVar5;
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      iVar3 = (int)(short)*puVar6;
      if (iVar3 != -1) {
        uVar5 = (uint)puVar6[1];
        param_2 = 0xffff;
      }
      if (iVar3 != -1 && uVar5 != param_2) {
        *(short *)(*DAT_70b41f8c + iVar3 * 0x14 + 2) = (short)uVar5;
        *(ushort *)(*DAT_70b41f8c + (short)puVar6[1] * 0x14) = *puVar6;
        puVar6[1] = (ushort)param_2;
        *puVar6 = (ushort)param_2;
        if ((19999 < param_1) ||
           (uVar5 = (**(code **)(**(int **)(DAT_70c39074 + param_1 * 4) + 0x14))(),
           (uVar5 & 0xfffffffe) != 6)) {
          if ((puVar6[3] & 6) == 0) {
            puVar7 = (ushort *)*DAT_70b41f64;
            uVar5 = (uint)*puVar6;
            bVar8 = uVar5 != param_2;
            if (bVar8) {
              uVar5 = (uint)puVar6[1];
            }
            if (bVar8 && uVar5 != param_2) {
              imp_raise(5);
            }
            *puVar6 = *puVar7;
            piVar2 = DAT_70b41f8c;
            puVar6[1] = (short)((uint)((int)puVar7 - *DAT_70b41f8c) >> 2) * -0x3333;
            uVar1 = (short)((uint)((int)puVar6 - *piVar2) >> 2) * -0x3333;
            *puVar7 = uVar1;
            *(ushort *)(*DAT_70b41f8c + (short)*puVar6 * 0x14 + 2) = uVar1;
            return;
          }
          return;
        }
      }
    }
    return;
  }
LAB_7135d7e8:
  if (param_1 < 20000) {
    iVar3 = (**(code **)(**(int **)(DAT_70c39074 + param_1 * 4) + 0x3c))();
    if (iVar3 != -1) {
      FUN_7135d734(iVar3 + 0x63e7,8);
    }
  }
  else if (param_1 - 20000 < 5000) {
    puVar6[8] = 1;
    puVar6[9] = 0;
    return;
  }
  uVar1 = *puVar6;
  puVar7 = (ushort *)*DAT_70b41f6c;
  bVar8 = uVar1 != 0xffff;
  if (bVar8) {
    uVar1 = puVar6[1];
  }
  if (bVar8 && uVar1 != 0xffff) {
    imp_raise(5);
  }
  *puVar6 = *puVar7;
  piVar2 = DAT_70b41f8c;
  puVar6[1] = (short)((uint)((int)puVar7 - *DAT_70b41f8c) >> 2) * -0x3333;
  uVar1 = (short)((uint)((int)puVar6 - *piVar2) >> 2) * -0x3333;
  *puVar7 = uVar1;
  *(ushort *)(*DAT_70b41f8c + (short)*puVar6 * 0x14 + 2) = uVar1;
  *DAT_70b41f84 = *DAT_70b41f84 + 1;
  if ((param_2 & 0x10) != 0) {
    *DAT_70b41f80 = *DAT_70b41f80 + 1;
  }
  *(undefined1 *)(puVar6 + 8) = 2;
  *(byte *)(puVar6 + 3) = (byte)puVar6[3] | (byte)param_2;
  return;
}


// =========================================================================
// Function: FUN_7135dce8
// Entry: 0x7135dce8 | Size: 580 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7135dce8(void)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_68 [64];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf18);
  if (*pcVar7 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf08);
    *(undefined1 *)((int)puVar12 + 0x17) = 1;
    uVar5 = DAT_70075038;
    uVar4 = DAT_70075034;
    uVar11 = DAT_70075030;
    uVar9 = DAT_7007502c;
    *puVar12 = DAT_70075028;
    puVar12[1] = uVar9;
    puVar12[2] = uVar11;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    uVar6 = DAT_7007503e;
    *(undefined2 *)(puVar12 + 5) = DAT_7007503c;
    *(undefined1 *)((int)puVar12 + 0x16) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71362528,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf18);
    *puVar13 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf08);
  if (*(char *)(iVar8 + 0x17) != '\0') {
    uVar15 = 0;
    uVar18 = 0;
    do {
      iVar16 = (uVar15 & 7) * 8;
      uVar17 = iVar16 - 0x20;
      bVar14 = (byte)(0xf1953f9d >> iVar16) |
               (byte)(0x27cf676f << ((uVar15 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar17) {
        bVar14 = (byte)(0x27cf676f >> (uVar17 & 0xff));
      }
      *(byte *)(iVar8 + uVar15) = *(byte *)(iVar8 + uVar15) ^ bVar14;
      bVar19 = 0xfffffffe < uVar15;
      bVar1 = uVar18 == 0;
      bVar2 = (0x15 < uVar15) <= uVar18;
      uVar15 = uVar15 + 1;
      uVar18 = uVar18 + bVar19;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x17) = 0;
  }
  uVar9 = FUN_71339d5c(iVar8,&DAT_7006d52d);
  pbVar10 = (byte *)FUN_7132d218();
  if (pbVar10 != (byte *)0x0) {
    do {
      bVar14 = *pbVar10;
      pbVar3 = pbVar10;
      if (bVar14 != 0) {
        do {
          if (bVar14 < 0x21) {
            *pbVar3 = 0;
          }
          else if (bVar14 == 0x2c) {
            *pbVar3 = 0;
          }
          bVar14 = pbVar3[1];
          pbVar3 = pbVar3 + 1;
        } while (bVar14 != 0);
        if (*pbVar10 != 0) {
          FUN_7135e248(auStack_68);
          iVar8 = 0;
          do {
            if ((&DAT_70b3ef4c)[-iVar8] == '\0') {
              iVar8 = -iVar8;
              (&DAT_70b3ef74)[iVar8] = 1;
              uVar11 = FUN_71326610(auStack_68,0);
              *(undefined4 *)((int)&DAT_70b3ef78 + iVar8) = uVar11;
              (&DAT_70b3ef74)[iVar8] = 0;
              uVar11 = imp___strlen_chk(auStack_68,0x40);
              imp___strncpy_chk2((int)&DAT_70b3ef4c + iVar8,auStack_68,uVar11,0x28,0x40);
              break;
            }
            iVar8 = iVar8 + -0x30;
          } while (iVar8 != -0x3000);
        }
      }
      pbVar10 = (byte *)FUN_7132d218(uVar9);
    } while (pbVar10 != (byte *)0x0);
  }
  FUN_71326264();
  FUN_7133a194(uVar9);
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7135e248
// Entry: 0x7135e248 | Size: 68 bytes
// =========================================================================

void FUN_7135e248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x40,s_models__s_7006e376,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_7135e390
// Entry: 0x7135e390 | Size: 1148 bytes
// =========================================================================

void FUN_7135e390(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  int iStack_34;
  byte abStack_30 [4];
  undefined4 uStack_2c;
  uint uStack_28;
  
  uVar4 = (uint)(&DAT_70b3ef78)[param_2 * 0xc] >> 0x18;
  iVar17 = (&DAT_70b33dc0)[uVar4 * 8];
  if (iVar17 == 0) {
    iVar17 = FUN_71326f90((&DAT_70b3ef78)[param_2 * 0xc],param_1);
    if (iVar17 == 0) {
      return;
    }
    iVar17 = (&DAT_70b33dc0)[uVar4 * 8];
  }
  piVar3 = (int *)FUN_719f7b9c(iVar17);
  uVar1 = DAT_710ead50;
  if (piVar3[1] != *piVar3) {
    iVar15 = -1;
    uVar4 = (piVar3[1] - *piVar3) * -0x73ecade3;
    iVar10 = 0;
    uVar16 = 0;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar5 = (uint)abStack_30 | 1;
    do {
      iVar6 = uVar16 * 0x35 + *piVar3;
      uVar11 = *(uint *)(iVar6 + 0x1d);
      FUN_719f77d4(abStack_30,iVar17,*(undefined4 *)(iVar6 + 4));
      uVar12 = (uVar11 >> 0xb) + 1;
      uVar11 = *DAT_70b41f4c;
      if (*DAT_70b41f4c <= uVar12) {
        uVar11 = uVar12;
      }
      *DAT_70b41f4c = uVar11;
      iVar6 = thunk_jqZqCEXeMbwWkPQPsWPXtLIXsrprfLcULRyTsuHQaLjzixodrunQzQjJ_zMKoMhElbhaqoVSUZW
                        (abStack_30,0x2e,0);
      if (iVar6 == -1) {
LAB_7135e638:
        iVar6 = -1;
      }
      else {
        uVar11 = uStack_2c;
        if ((abStack_30[0] & 1) == 0) {
          uVar11 = (uint)(abStack_30[0] >> 1);
        }
        if (uVar11 - iVar6 < 4) goto LAB_7135e638;
        uVar11 = uStack_28;
        if ((abStack_30[0] & 1) == 0) {
          uVar11 = uVar5;
        }
        puVar14 = (undefined1 *)(uVar11 + iVar6);
        *puVar14 = 0;
        pcVar18 = puVar14 + 1;
        if (*pcVar18 != '\0') {
          uVar11 = 0;
          do {
            bVar2 = pcVar18[uVar11];
            if (0xffffffe5 < bVar2 - 0x7b) {
              bVar2 = bVar2 ^ 0x20;
            }
            pcVar18[uVar11] = bVar2;
            uVar11 = uVar11 + 1;
            uVar7 = imp_strlen(pcVar18);
          } while (uVar11 < uVar7);
        }
        iStack_34 = -1;
        iVar6 = imp_memcmp(pcVar18,&DAT_7006dadc,3);
        if (iVar6 == 0) {
          uVar11 = uStack_28;
          if ((abStack_30[0] & 1) == 0) {
            uVar11 = uVar5;
          }
          iVar6 = FUN_713fe4f8(uVar11,&iStack_34);
          iVar13 = iStack_34;
          if (iVar6 != 0) goto LAB_7135e778;
          iVar6 = -1;
        }
        else {
          iVar6 = imp_memcmp(pcVar18,&DAT_700683e1,3);
          iVar13 = -1;
          if (iVar6 == 0) {
LAB_7135e778:
            iVar9 = DAT_70b41f74 + iVar13 * 0x14;
            iVar6 = iVar15;
            if (*(int *)(iVar9 + 0xc) != 0) goto joined_r0x7135e63c;
          }
          else {
            iVar6 = imp_memcmp(pcVar18,&DAT_70061f74,3);
            if (iVar6 == 0) {
              iVar6 = FUN_713218fc();
              if (iVar6 == -1) {
                uVar11 = uStack_28;
                if ((abStack_30[0] & 1) == 0) {
                  uVar11 = uVar5;
                }
                iVar6 = FUN_7132191c(uVar11);
              }
              iStack_34 = 25000;
LAB_7135e770:
              iStack_34 = iVar6 + iStack_34;
              iVar13 = iStack_34;
              goto LAB_7135e778;
            }
            iVar6 = imp_memcmp(pcVar18,&DAT_70063b85,3);
            if (iVar6 == 0) {
              uVar11 = uStack_28;
              if ((abStack_30[0] & 1) == 0) {
                uVar11 = uVar5;
              }
              iVar6 = FUN_7133dec4(uVar11);
              if (iVar6 == -1) {
                uVar11 = uStack_28;
                if ((abStack_30[0] & 1) == 0) {
                  uVar11 = uVar5;
                }
                iVar6 = FUN_7133e2e8(uVar11);
              }
              iStack_34 = 0x62a7;
              goto LAB_7135e770;
            }
            iVar6 = imp_memcmp(pcVar18,&DAT_700673b3,3);
            if (iVar6 != 0) {
              iVar6 = imp_memcmp(pcVar18,&DAT_7006f3bf,3);
              if (iVar6 == 0) {
                uVar11 = uStack_28;
                if ((abStack_30[0] & 1) == 0) {
                  uVar11 = uVar5;
                }
                iVar6 = FUN_71303044(uVar11);
                iStack_34 = 0x63e7;
              }
              else {
                iVar6 = imp_memcmp(pcVar18,&DAT_7006dae0,3);
                if (iVar6 == 0) goto LAB_7135e778;
                iVar6 = imp_memcmp(pcVar18,&DAT_70060fdd,3);
                if (iVar6 != 0) {
                  *puVar14 = 0x2e;
                  iVar6 = iVar13;
                  goto joined_r0x7135e63c;
                }
                uVar11 = uStack_28;
                if ((abStack_30[0] & 1) == 0) {
                  uVar11 = uVar5;
                }
                iVar6 = FUN_71497200(uVar1,uVar11);
                iStack_34 = 0x6676;
              }
              goto LAB_7135e770;
            }
            iVar6 = uStack_28 + 5;
            if ((abStack_30[0] & 1) == 0) {
              iVar6 = (int)&uStack_2c + 2;
            }
            imp_sscanf(iVar6,&DAT_7006cd62,&iStack_34);
            iVar13 = iStack_34 + 0x63a7;
            iVar9 = DAT_70b41f74 + iVar13 * 0x14;
            iStack_34 = iVar13;
          }
          iVar8 = DAT_70b41f74;
          *(char *)(iVar9 + 7) = (char)param_2;
          *(int *)(iVar9 + 8) = iVar10;
          *(uint *)(iVar9 + 0xc) = uVar12;
          *(undefined1 *)(iVar9 + 6) = 0;
          iVar6 = iVar13;
          if ((iVar15 != -1) &&
             (iVar8 = iVar8 + iVar15 * 0x14, *(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 8) == iVar10))
          {
            *(short *)(iVar8 + 4) = (short)iVar13;
            iVar6 = iStack_34;
          }
        }
      }
joined_r0x7135e63c:
      iVar15 = iVar6;
      if ((abStack_30[0] & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      uVar16 = uVar16 + 1;
      iVar10 = uVar12 + iVar10;
    } while (uVar16 != uVar4);
  }
  FUN_719f776c(iVar17);
  return;
}


// =========================================================================
// Function: FUN_7135ec88
// Entry: 0x7135ec88 | Size: 296 bytes
// =========================================================================

void FUN_7135ec88(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  FUN_7135ef94();
  FUN_7135dce8();
  iVar2 = 0;
  *DAT_70b41f4c = *DAT_70b41f4c << 1;
  uVar4 = *DAT_70b41f4c;
  pcVar3 = &DAT_70b3ef4c;
  do {
    if ((*pcVar3 != '\0') && (pcVar3[0x28] == '\0')) {
      FUN_7135e390(pcVar3,iVar2);
      pcVar3[0x28] = '\x01';
    }
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + 0x30;
  } while (iVar2 != 0x100);
  uVar1 = *DAT_70b41f4c;
  if (uVar1 <= uVar4) {
    *DAT_70b41f4c = uVar1 >> 1;
    return;
  }
  if ((uVar1 & 1) != 0) {
    *DAT_70b41f4c = uVar1 + 1;
  }
  imp_free(*(undefined4 *)(*DAT_70b41f50 + -4));
  uVar4 = imp_malloc(*DAT_70b41f4c * 0x800 + 0x800);
  *(uint *)((uVar4 & 0xfffff800) + 0x7fc) = uVar4;
  *DAT_70b41f4c = *DAT_70b41f4c >> 1;
  iVar2 = (uVar4 & 0xfffff800) + 0x800;
  *DAT_70b41f50 = iVar2;
  DAT_70b41f50[1] = iVar2 + *DAT_70b41f4c * 0x800;
  return;
}


// =========================================================================
// Function: FUN_7135ef94
// Entry: 0x7135ef94 | Size: 364 bytes
// =========================================================================

void FUN_7135ef94(void)

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
  if (((DAT_70b41fbc & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41fbc), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf98);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf88);
      *(undefined1 *)((int)puVar8 + 0x1e) = 1;
      uVar4 = DAT_700750c0;
      uVar3 = DAT_700750bc;
      *puVar8 = DAT_700750b8;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_700750d0;
      uVar4 = DAT_700750cc;
      uVar3 = DAT_700750c8;
      puVar8[3] = DAT_700750c4;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined2 *)(puVar8 + 7) = DAT_700750d4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71362650,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf98);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf88);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x95b52df3 >> iVar12) |
                 (byte)(-0x20d874a5 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xdf278b5b >> (uVar13 & 0xff));
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
    DAT_70b41fb8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41fbc);
  }
                    /* WARNING: Could not recover jumptable at 0x7135efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41fb8)();
  return;
}


// =========================================================================
// Function: FUN_7135f45c
// Entry: 0x7135f45c | Size: 412 bytes
// =========================================================================

void FUN_7135f45c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  do {
    iVar1 = param_1 - iVar6;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (param_3 < iVar1) {
      iVar1 = 0;
      do {
        iVar2 = param_2 - iVar1;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (param_4 < iVar2) {
          iVar2 = FUN_713e6434(iVar6,iVar1);
          uVar7 = FUN_713e63c8(iVar6,iVar1);
          uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
          for (piVar5 = (int *)*(undefined4 *)uVar7; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]
              ) {
            piVar3 = (int *)*piVar5;
            if (piVar3 != (int *)0x0) {
              uVar4 = piVar3[6];
            }
            if (((piVar3 != (int *)0x0 && uVar4 != 0) && (uVar4 = piVar3[7], (uVar4 & 0x2000) == 0))
               && (uVar4 = uVar4 & 0x500, uVar4 != 0x400)) {
              (**(code **)(*piVar3 + 0x24))();
              uVar4 = extraout_r1;
            }
          }
          for (piVar5 = *(int **)(iVar2 + 8); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
            piVar3 = (int *)*piVar5;
            if (piVar3 != (int *)0x0) {
              uVar4 = piVar3[6];
            }
            if (((piVar3 != (int *)0x0 && uVar4 != 0) && (uVar4 = piVar3[7], (uVar4 & 0x2000) == 0))
               && (uVar4 = uVar4 & 0x500, uVar4 != 0x400)) {
              (**(code **)(*piVar3 + 0x24))();
              uVar4 = extraout_r1_00;
            }
          }
          for (piVar5 = (int *)((undefined4 *)uVar7)[1]; piVar5 != (int *)0x0;
              piVar5 = (int *)piVar5[1]) {
            piVar3 = (int *)*piVar5;
            if (piVar3 != (int *)0x0) {
              uVar4 = piVar3[6];
            }
            if (((piVar3 != (int *)0x0 && uVar4 != 0) && (uVar4 = piVar3[7], (uVar4 & 0x2000) == 0))
               && (uVar4 = uVar4 & 0x500, uVar4 != 0x400)) {
              (**(code **)(*piVar3 + 0x24))();
              uVar4 = extraout_r1_01;
            }
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xa0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xa0);
  return;
}


// =========================================================================
// Function: FUN_7135f648
// Entry: 0x7135f648 | Size: 252 bytes
// =========================================================================

undefined4 FUN_7135f648(int *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar2 = DAT_70c39074;
  puVar6 = (undefined4 *)*param_1;
  do {
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar5 = (int *)*puVar6;
    if ((((piVar5 != (int *)0x0) && (iVar3 = FUN_713b8224(piVar5), iVar3 == 0)) &&
        (FUN_713b8280(piVar5), (*(byte *)((int)piVar5 + 0x1d) & 0x24) == 0)) && (piVar5[6] != 0)) {
      psVar4 = (short *)(DAT_70b41f74 + *(short *)((int)piVar5 + 0x26) * 0x14);
      sVar1 = *psVar4;
      if (sVar1 != -1) {
        psVar4 = (short *)(uint)(ushort)psVar4[1];
      }
      if (((sVar1 != -1 && psVar4 != (short *)&DAT_0000ffff) &&
          (iVar3 = FUN_713c301c(0), *(int **)(iVar3 + 0x588) != piVar5)) &&
         (((**(code **)(*piVar5 + 0x24))(piVar5),
          *(short *)(*(int *)(iVar2 + *(short *)((int)piVar5 + 0x26) * 4) + 0x1e) == 0 &&
          (FUN_7135f82c(), *DAT_70b41f7c < param_2)))) {
        return 1;
      }
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


// =========================================================================
// Function: FUN_7135f82c
// Entry: 0x7135f82c | Size: 384 bytes
// =========================================================================

void FUN_7135f82c(undefined4 param_1)

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
  if (((DAT_70b41fac & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41fac), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf58);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf48);
      *(undefined1 *)((int)puVar9 + 0x22) = 1;
      uVar5 = DAT_70075074;
      uVar4 = DAT_70075070;
      uVar3 = DAT_7007506c;
      *puVar9 = DAT_70075068;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_70075084;
      uVar4 = DAT_70075080;
      uVar3 = DAT_7007507c;
      puVar9[4] = DAT_70075078;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined2 *)(puVar9 + 8) = DAT_70075088;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713625b0,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf58);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf48);
    if (*(char *)(iVar7 + 0x22) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar6 = (byte)(0x8d05b563 >> iVar13) |
                (byte)(0xdb18b17 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar6 = (byte)(0xdb18b17 >> (uVar14 & 0xff));
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
    DAT_70b41fa8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41fac);
  }
                    /* WARNING: Could not recover jumptable at 0x7135f858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41fa8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7135fc44
// Entry: 0x7135fc44 | Size: 268 bytes
// =========================================================================

undefined4 FUN_7135fc44(int *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar2 = DAT_70c39074;
  puVar6 = (undefined4 *)*param_1;
  do {
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    piVar5 = (int *)*puVar6;
    if (((((piVar5 != (int *)0x0) && (iVar4 = FUN_713b8224(piVar5), iVar4 == 0)) &&
         (FUN_713b8280(piVar5), (*(byte *)((int)piVar5 + 0x1d) & 0x24) == 0)) && (piVar5[6] != 0))
       && ((iVar4 = FUN_713b97dc(piVar5), iVar4 == 0 || ((*(byte *)((int)piVar5 + 0x1e) & 2) != 0)))
       ) {
      psVar3 = (short *)(DAT_70b41f74 + *(short *)((int)piVar5 + 0x26) * 0x14);
      sVar1 = *psVar3;
      if (sVar1 != -1) {
        psVar3 = (short *)(uint)(ushort)psVar3[1];
      }
      if (((sVar1 != -1 && psVar3 != (short *)&DAT_0000ffff) &&
          ((**(code **)(*piVar5 + 0x24))(piVar5),
          *(short *)(*(int *)(iVar2 + *(short *)((int)piVar5 + 0x26) * 4) + 0x1e) == 0)) &&
         (FUN_7135f82c(), *DAT_70b41f7c < param_2)) {
        return 1;
      }
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


// =========================================================================
// Function: FUN_7135fe38
// Entry: 0x7135fe38 | Size: 1744 bytes
// =========================================================================

void FUN_7135fe38(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_1 <= *DAT_70b41f7c) {
    iVar11 = *(int *)(DAT_70b46c18 + 0x14);
    puVar12 = (undefined4 *)(iVar11 + 0x30);
    if (iVar11 == 0) {
      puVar12 = (undefined4 *)(DAT_70b46c18 + 4);
    }
    uVar13 = *puVar12;
    uVar14 = puVar12[1];
    FUN_7136e6f0(&uStack_2c,iVar11 + 0x10);
    uVar13 = FUN_71ba13e0(uVar13,0x42480000);
    FUN_71ba0b38(uVar13,0x42a00000);
    imp_floorf();
    iVar11 = FUN_71ba17bc();
    uVar13 = FUN_71ba13e0(uVar14,0x42480000);
    FUN_71ba0b38(uVar13,0x42a00000);
    imp_floorf();
    iVar3 = FUN_71ba17bc();
    uVar2 = uStack_28;
    uVar1 = uStack_2c;
    iVar4 = FUN_71ba2d10(uStack_28 & 0x7fffffff,uStack_2c & 0x7fffffff);
    if (iVar4 == 0) {
      iVar4 = 0x95;
      if (iVar11 < 0x95) {
        iVar4 = iVar11;
      }
      if (iVar11 < 0xb) {
        iVar11 = 10;
      }
      iVar5 = FUN_71ba2d30(uVar2,0);
      if (iVar5 == 0) {
        iVar15 = iVar3;
        if (iVar3 < 3) {
          iVar15 = 2;
        }
        iVar5 = 10;
        if (10 < iVar3) {
          iVar5 = iVar3;
        }
        iVar15 = iVar15 + -2;
        iVar5 = iVar5 + -10;
        iVar6 = 1;
      }
      else {
        iVar5 = 0x95;
        if (iVar3 < 0x95) {
          iVar5 = iVar3;
        }
        iVar15 = iVar3;
        if (0x9c < iVar3) {
          iVar15 = 0x9d;
        }
        iVar15 = iVar15 + 2;
        iVar5 = iVar5 + 10;
        iVar6 = -1;
      }
      iVar4 = iVar4 + 10;
      iVar7 = iVar11 + -10;
      FUN_713e8168();
      if (iVar5 != iVar15) {
        do {
          iVar16 = iVar11 + -0xb;
          if (iVar7 <= iVar4) {
            do {
              iVar16 = iVar16 + 1;
              iVar8 = FUN_713e6434(iVar16,iVar5);
              iVar9 = FUN_713e63c8(iVar16,iVar5);
              iVar10 = FUN_7135f648(iVar9,param_1);
              if (iVar10 != 0) {
                return;
              }
              iVar9 = FUN_7135f648(iVar9 + 4,param_1);
              if (iVar9 != 0) {
                return;
              }
              iVar8 = FUN_7135f648(iVar8 + 8,param_1);
              if (iVar8 != 0) {
                return;
              }
            } while (iVar16 < iVar4);
          }
          iVar5 = iVar5 + iVar6;
        } while (iVar5 != iVar15);
      }
      iVar5 = FUN_71ba2d30(uStack_28,0);
      if (iVar5 == 0) {
        iVar5 = iVar3;
        if (0x94 < iVar3) {
          iVar5 = 0x95;
        }
        if (iVar3 < 3) {
          iVar3 = 2;
        }
        iVar5 = iVar5 + 10;
        iVar3 = iVar3 + -2;
        iVar15 = 1;
      }
      else {
        iVar5 = iVar3;
        if (iVar3 < 0xb) {
          iVar5 = 10;
        }
        if (0x9c < iVar3) {
          iVar3 = 0x9d;
        }
        iVar5 = iVar5 + -10;
        iVar3 = iVar3 + 2;
        iVar15 = -1;
      }
      FUN_713e8168();
      if (iVar5 != iVar3) {
        iVar6 = iVar5;
        do {
          iVar16 = iVar11 + -0xb;
          if (iVar7 <= iVar4) {
            do {
              iVar16 = iVar16 + 1;
              iVar8 = FUN_713e6434(iVar16,iVar6);
              iVar9 = FUN_713e63c8(iVar16,iVar6);
              iVar10 = FUN_7135fc44(iVar9,param_1);
              if (iVar10 != 0) {
                return;
              }
              iVar9 = FUN_7135fc44(iVar9 + 4,param_1);
              if (iVar9 != 0) {
                return;
              }
              iVar8 = FUN_7135fc44(iVar8 + 8,param_1);
              if (iVar8 != 0) {
                return;
              }
            } while (iVar16 < iVar4);
          }
          iVar6 = iVar6 - iVar15;
        } while (iVar6 != iVar3);
        if (iVar5 != iVar3) {
          do {
            iVar6 = iVar11 + -0xb;
            if (iVar7 <= iVar4) {
              do {
                iVar6 = iVar6 + 1;
                iVar16 = FUN_713e6434(iVar6,iVar5);
                iVar8 = FUN_713e63c8(iVar6,iVar5);
                iVar9 = FUN_7135f648(iVar8,param_1);
                if (iVar9 != 0) {
                  return;
                }
                iVar8 = FUN_7135f648(iVar8 + 4,param_1);
                if (iVar8 != 0) {
                  return;
                }
                iVar16 = FUN_7135f648(iVar16 + 8,param_1);
                if (iVar16 != 0) {
                  return;
                }
              } while (iVar6 < iVar4);
            }
            iVar5 = iVar5 - iVar15;
          } while (iVar5 != iVar3);
        }
      }
    }
    else {
      iVar4 = 0x95;
      if (iVar3 < 0x95) {
        iVar4 = iVar3;
      }
      if (iVar3 < 0xb) {
        iVar3 = 10;
      }
      iVar5 = FUN_71ba2d30(uVar1,0);
      if (iVar5 == 0) {
        iVar5 = iVar11;
        if (iVar11 < 3) {
          iVar5 = 2;
        }
        iVar15 = 10;
        if (10 < iVar11) {
          iVar15 = iVar11;
        }
        iVar5 = iVar5 + -2;
        iVar15 = iVar15 + -10;
        iVar6 = 1;
      }
      else {
        iVar5 = iVar11;
        if (0x9c < iVar11) {
          iVar5 = 0x9d;
        }
        iVar5 = iVar5 + 2;
        iVar15 = 0x95;
        if (iVar11 < 0x95) {
          iVar15 = iVar11;
        }
        iVar15 = iVar15 + 10;
        iVar6 = -1;
      }
      iVar7 = iVar3 + -10;
      iVar4 = iVar4 + 10;
      FUN_713e8168();
      if (iVar15 != iVar5) {
        do {
          iVar16 = iVar3 + -0xb;
          if (iVar7 <= iVar4) {
            do {
              iVar16 = iVar16 + 1;
              iVar8 = FUN_713e6434(iVar15,iVar16);
              iVar9 = FUN_713e63c8(iVar15,iVar16);
              iVar10 = FUN_7135f648(iVar9,param_1);
              if (iVar10 != 0) {
                return;
              }
              iVar9 = FUN_7135f648(iVar9 + 4,param_1);
              if (iVar9 != 0) {
                return;
              }
              iVar8 = FUN_7135f648(iVar8 + 8,param_1);
              if (iVar8 != 0) {
                return;
              }
            } while (iVar16 < iVar4);
          }
          iVar15 = iVar15 + iVar6;
        } while (iVar15 != iVar5);
      }
      iVar5 = FUN_71ba2d30(uStack_2c,0);
      if (iVar5 == 0) {
        iVar5 = iVar11;
        if (0x94 < iVar11) {
          iVar5 = 0x95;
        }
        iVar5 = iVar5 + 10;
        if (iVar11 < 3) {
          iVar11 = 2;
        }
        iVar11 = iVar11 + -2;
        iVar15 = 1;
      }
      else {
        iVar5 = iVar11;
        if (iVar11 < 0xb) {
          iVar5 = 10;
        }
        iVar5 = iVar5 + -10;
        if (0x9c < iVar11) {
          iVar11 = 0x9d;
        }
        iVar11 = iVar11 + 2;
        iVar15 = -1;
      }
      FUN_713e8168();
      if (iVar5 == iVar11) {
        FUN_713e8168();
      }
      else {
        iVar6 = iVar5;
        do {
          iVar16 = iVar3 + -0xb;
          if (iVar7 <= iVar4) {
            do {
              iVar16 = iVar16 + 1;
              iVar8 = FUN_713e6434(iVar6,iVar16);
              iVar9 = FUN_713e63c8(iVar6,iVar16);
              iVar10 = FUN_7135fc44(iVar9,param_1);
              if (iVar10 != 0) {
                return;
              }
              iVar9 = FUN_7135fc44(iVar9 + 4,param_1);
              if (iVar9 != 0) {
                return;
              }
              iVar8 = FUN_7135fc44(iVar8 + 8,param_1);
              if (iVar8 != 0) {
                return;
              }
            } while (iVar16 < iVar4);
          }
          iVar6 = iVar6 - iVar15;
        } while (iVar6 != iVar11);
        FUN_713e8168();
        if (iVar5 != iVar11) {
          do {
            iVar6 = iVar3 + -0xb;
            if (iVar7 <= iVar4) {
              do {
                iVar6 = iVar6 + 1;
                iVar16 = FUN_713e6434(iVar5,iVar6);
                iVar8 = FUN_713e63c8(iVar5,iVar6);
                iVar9 = FUN_7135f648(iVar8,param_1);
                if (iVar9 != 0) {
                  return;
                }
                iVar8 = FUN_7135f648(iVar8 + 4,param_1);
                if (iVar8 != 0) {
                  return;
                }
                iVar16 = FUN_7135f648(iVar16 + 8,param_1);
                if (iVar16 != 0) {
                  return;
                }
              } while (iVar6 < iVar4);
            }
            iVar5 = iVar5 - iVar15;
          } while (iVar5 != iVar11);
        }
      }
    }
    do {
      if (*DAT_70b41f7c < param_1) {
        return;
      }
      iVar11 = FUN_7135d310(0);
    } while (iVar11 != 0);
  }
  return;
}


// =========================================================================
// Function: FUN_71360b14
// Entry: 0x71360b14 | Size: 364 bytes
// =========================================================================

void FUN_71360b14(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint extraout_r1;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar11 = *param_1;
  uVar9 = param_1[1];
  uVar1 = FUN_71ba13e0(uVar11,0x42480000);
  FUN_71ba0b38(uVar1,0x42a00000);
  imp_floorf();
  uVar1 = FUN_71ba17bc();
  uVar2 = FUN_71ba13e0(uVar9,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar2 = FUN_71ba17bc();
  FUN_7135f45c(uVar1,uVar2,3,3);
  uVar1 = FUN_71ba13e0(uVar11,0x43480000);
  FUN_71ba0b38(uVar1,0x41a00000);
  imp_floorf();
  iVar3 = FUN_71ba17bc();
  uVar1 = FUN_71ba13e0(uVar9,0x43480000);
  FUN_71ba0b38(uVar1,0x41a00000);
  imp_floorf();
  uVar12 = FUN_71ba17bc();
  uVar6 = (uint)((ulonglong)uVar12 >> 0x20);
  iVar8 = 0;
  do {
    uVar4 = iVar3 - iVar8;
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    if (2 < uVar4) {
      iVar7 = 0;
      do {
        uVar4 = (int)uVar12 - iVar7;
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if (2 < uVar4) {
          for (piVar10 = (int *)(&DAT_70c1f790)[iVar7 * 0x28 + iVar8]; piVar10 != (int *)0x0;
              piVar10 = (int *)piVar10[1]) {
            piVar5 = (int *)*piVar10;
            if (piVar5 != (int *)0x0) {
              uVar6 = piVar5[6];
            }
            if (((piVar5 != (int *)0x0 && uVar6 != 0) && (uVar6 = piVar5[7], (uVar6 & 0x2000) == 0))
               && (uVar6 = uVar6 & 0x500, uVar6 != 0x400)) {
              (**(code **)(*piVar5 + 0x24))();
              uVar6 = extraout_r1;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x28);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x28);
  return;
}


// =========================================================================
// Function: FUN_71360e94
// Entry: 0x71360e94 | Size: 364 bytes
// =========================================================================

void FUN_71360e94(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint extraout_r1;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar11 = *param_1;
  uVar9 = param_1[1];
  uVar1 = FUN_71ba13e0(uVar11,0x42480000);
  FUN_71ba0b38(uVar1,0x42a00000);
  imp_floorf();
  uVar1 = FUN_71ba17bc();
  uVar2 = FUN_71ba13e0(uVar9,0x42480000);
  FUN_71ba0b38(uVar2,0x42a00000);
  imp_floorf();
  uVar2 = FUN_71ba17bc();
  FUN_7135f45c(uVar1,uVar2,6,6);
  uVar1 = FUN_71ba13e0(uVar11,0x43480000);
  FUN_71ba0b38(uVar1,0x41a00000);
  imp_floorf();
  iVar3 = FUN_71ba17bc();
  uVar1 = FUN_71ba13e0(uVar9,0x43480000);
  FUN_71ba0b38(uVar1,0x41a00000);
  imp_floorf();
  uVar12 = FUN_71ba17bc();
  uVar6 = (uint)((ulonglong)uVar12 >> 0x20);
  iVar8 = 0;
  do {
    uVar4 = iVar3 - iVar8;
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    if (2 < uVar4) {
      iVar7 = 0;
      do {
        uVar4 = (int)uVar12 - iVar7;
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if (2 < uVar4) {
          for (piVar10 = (int *)(&DAT_70c1f790)[iVar7 * 0x28 + iVar8]; piVar10 != (int *)0x0;
              piVar10 = (int *)piVar10[1]) {
            piVar5 = (int *)*piVar10;
            if (piVar5 != (int *)0x0) {
              uVar6 = piVar5[6];
            }
            if (((piVar5 != (int *)0x0 && uVar6 != 0) && (uVar6 = piVar5[7], (uVar6 & 0x2000) == 0))
               && (uVar6 = uVar6 & 0x500, uVar6 != 0x400)) {
              (**(code **)(*piVar5 + 0x24))();
              uVar6 = extraout_r1;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x28);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x28);
  return;
}


// =========================================================================
// Function: FUN_71361410
// Entry: 0x71361410 | Size: 380 bytes
// =========================================================================

void FUN_71361410(undefined4 param_1)

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
  if (((DAT_70b41fa4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41fa4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf38);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf28);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_70075050;
      uVar5 = DAT_7007504c;
      uVar4 = DAT_70075048;
      uVar3 = DAT_70075044;
      *puVar10 = DAT_70075040;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70075064;
      uVar5 = DAT_70075060;
      uVar4 = DAT_7007505c;
      uVar3 = DAT_70075058;
      puVar10[5] = DAT_70075054;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71362560,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf38);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf28);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xa7e96d57 >> iVar14) |
                (byte)(-0x2a1cd285 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd5e32d7b >> (uVar15 & 0xff));
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
    DAT_70b41fa0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41fa4);
  }
                    /* WARNING: Could not recover jumptable at 0x7136143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41fa0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71361824
// Entry: 0x71361824 | Size: 364 bytes
// =========================================================================

void FUN_71361824(void)

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
  if (((DAT_70b41fb4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41fb4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf78);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf68);
      *(undefined1 *)((int)puVar9 + 0x26) = 1;
      uVar5 = DAT_7007509c;
      uVar4 = DAT_70075098;
      uVar3 = DAT_70075094;
      *puVar9 = DAT_70075090;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_700750b0;
      uVar5 = DAT_700750ac;
      uVar4 = DAT_700750a8;
      uVar3 = DAT_700750a4;
      puVar9[4] = DAT_700750a0;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      *(undefined2 *)(puVar9 + 9) = DAT_700750b4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71362600,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf78);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700baf68);
    if (*(char *)(iVar7 + 0x26) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x1f5d074b >> iVar13) |
                 (byte)(0x565e3d7 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x565e3d7 >> (uVar14 & 0xff));
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
    DAT_70b41fb0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41fb4);
  }
                    /* WARNING: Could not recover jumptable at 0x71361850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41fb0)();
  return;
}


// =========================================================================
// Function: FUN_71361c28
// Entry: 0x71361c28 | Size: 356 bytes
// =========================================================================

void FUN_71361c28(void)

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
  if (((DAT_70b41fc4 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b41fc4), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bafb8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bafa8);
      *(undefined1 *)((int)puVar9 + 0x16) = 1;
      uVar6 = DAT_700750e8;
      uVar5 = DAT_700750e4;
      uVar4 = DAT_700750e0;
      uVar3 = DAT_700750dc;
      *puVar9 = DAT_700750d8;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      *(undefined2 *)(puVar9 + 5) = DAT_700750ec;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71362690,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bafb8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bafa8);
    if (*(char *)(iVar7 + 0x16) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x9d312be1 >> iVar13) |
                 (byte)(-0x70f86ee5 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x8f07911b >> (uVar14 & 0xff));
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
    DAT_70b41fc0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b41fc4);
  }
                    /* WARNING: Could not recover jumptable at 0x71361c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b41fc0)();
  return;
}


// =========================================================================
// Function: FUN_71366368
// Entry: 0x71366368 | Size: 356 bytes
// =========================================================================

uint FUN_71366368(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  
  puVar2 = (uint *)&stack0xffffffe8;
  while( true ) {
    uVar9 = puVar2[1] ^ 0x679b29b;
    uVar7 = *puVar2 ^ 0x6a4dab1f | uVar9;
    bVar10 = uVar7 == 0;
    if (bVar10) {
      uVar9 = puVar2[3] ^ 0xfcc126c8;
      uVar7 = puVar2[2] ^ 0x6efdd0cf;
    }
    if ((bVar10 && (uVar7 == 0 && uVar9 == 0)) &&
       (puVar2[4] == 0xbefc55d6 && puVar2[5] == 0x370f3a77)) break;
    puVar2 = puVar2 + 1;
  }
  if (puVar2[0xc017] != 0) {
    piVar4 = (int *)puVar2[0xc017];
    piVar6 = piVar4 + 1;
    piVar8 = (int *)*piVar6;
    piVar3 = piVar8;
    piVar5 = piVar6;
    if (piVar8 != (int *)0x0) {
      do {
        piVar1 = piVar3;
        if ((uint)piVar3[4] < param_1) {
          piVar3 = piVar3 + 1;
          piVar1 = piVar5;
        }
        piVar3 = (int *)*piVar3;
        piVar5 = piVar1;
      } while (piVar3 != (int *)0x0);
      if ((piVar1 != piVar6) && ((uint)piVar1[4] <= param_1)) {
        piVar3 = (int *)piVar1[1];
        if ((int *)piVar1[1] == (int *)0x0) {
          do {
            piVar6 = (int *)piVar5[2];
            bVar10 = (int *)*piVar6 != piVar5;
            piVar5 = piVar6;
          } while (bVar10);
        }
        else {
          do {
            piVar6 = piVar3;
            piVar3 = (int *)*piVar6;
          } while ((int *)*piVar6 != (int *)0x0);
        }
        if ((int *)*piVar4 == piVar1) {
          *piVar4 = (int)piVar6;
        }
        piVar4[2] = piVar4[2] + -1;
        FUN_71368054(piVar8,piVar1);
        thunk_qNQrlu(piVar1);
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: thunk_FUN_71712bec
// Entry: 0x7136652c | Size: 4 bytes
// =========================================================================

void thunk_FUN_71712bec(void)

{
  undefined8 uVar1;
  
  (*DAT_700f9ca8)();
  if (*DAT_70b42044 != '\0') {
    return;
  }
  if (*DAT_70b42048 != '\0') {
    return;
  }
  FUN_71ba13e0(*DAT_70b42050,0x42480000);
  uVar1 = FUN_71ba1638();
  uVar1 = FUN_71ba0670(DAT_70b42058,DAT_70b4205c,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  DAT_70b42058 = (int)uVar1;
  DAT_70b4205c = (int)((ulonglong)uVar1 >> 0x20);
  return;
}


// =========================================================================
// Function: FUN_71366564
// Entry: 0x71366564 | Size: 348 bytes
// =========================================================================

void FUN_71366564(void)

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
  if (((DAT_70b4206c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4206c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb098);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb088);
      *(undefined1 *)(puVar9 + 5) = 1;
      uVar6 = DAT_70075198;
      uVar5 = DAT_70075194;
      uVar4 = DAT_70075190;
      uVar3 = DAT_7007518c;
      *puVar9 = DAT_70075188;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar9[4] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71367ef4,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb098);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb088);
    if (*(char *)(iVar7 + 0x14) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x1fef9f7d >> iVar13) |
                 (byte)(-0x32ea76f1 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0xcd15890f >> (uVar14 & 0xff));
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
    DAT_70b42068 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4206c);
  }
                    /* WARNING: Could not recover jumptable at 0x71366590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b42068)();
  return;
}


// =========================================================================
// Function: FUN_71366958
// Entry: 0x71366958 | Size: 364 bytes
// =========================================================================

void FUN_71366958(void)

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
  if (((DAT_70b42074 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b42074), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0b8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0a8);
      *(undefined1 *)((int)puVar9 + 0x13) = 1;
      uVar5 = DAT_700751ac;
      uVar4 = DAT_700751a8;
      uVar3 = DAT_700751a4;
      *puVar9 = DAT_700751a0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_700751b2;
      *(undefined2 *)(puVar9 + 4) = DAT_700751b0;
      *(undefined1 *)((int)puVar9 + 0x12) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71367f28,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0b8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0a8);
    if (*(char *)(iVar7 + 0x13) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0x7ba3590f >> iVar13) |
                 (byte)(0x6f55cd95 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x6f55cd95 >> (uVar14 & 0xff));
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
    DAT_70b42070 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b42074);
  }
                    /* WARNING: Could not recover jumptable at 0x71366984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b42070)();
  return;
}


// =========================================================================
// Function: FUN_71366d5c
// Entry: 0x71366d5c | Size: 372 bytes
// =========================================================================

void FUN_71366d5c(void)

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
  if (((DAT_70b4207c & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4207c), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0d8);
    if (*pcVar8 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0c8);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_700751c4;
      uVar4 = DAT_700751c0;
      uVar3 = DAT_700751bc;
      *puVar10 = DAT_700751b8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700751d4;
      uVar4 = DAT_700751d0;
      uVar3 = DAT_700751cc;
      puVar10[4] = DAT_700751c8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700751da;
      *(undefined2 *)(puVar10 + 8) = DAT_700751d8;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71367f5c,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0d8);
      *puVar11 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0c8);
    if (*(char *)(iVar7 + 0x23) != '\0') {
      uVar9 = 0;
      uVar12 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar13 = (byte)(0xdf2fa55d >> iVar14) |
                 (byte)(-0x249c2c5b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar13 = (byte)(0xdb63d3a5 >> (uVar15 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar13;
        bVar1 = uVar9 == 0;
        bVar2 = (0x21 < uVar12) <= uVar9;
        uVar9 = uVar9 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x23) = 0;
    }
    DAT_70b42078 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4207c);
  }
                    /* WARNING: Could not recover jumptable at 0x71366d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b42078)();
  return;
}


// =========================================================================
// Function: FUN_71367168
// Entry: 0x71367168 | Size: 356 bytes
// =========================================================================

void FUN_71367168(void)

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
  if (((DAT_70b42084 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b42084), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0f8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0e8);
      *(undefined1 *)(puVar9 + 9) = 1;
      uVar5 = DAT_700751ec;
      uVar4 = DAT_700751e8;
      uVar3 = DAT_700751e4;
      *puVar9 = DAT_700751e0;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar6 = DAT_70075200;
      uVar5 = DAT_700751fc;
      uVar4 = DAT_700751f8;
      uVar3 = DAT_700751f4;
      puVar9[4] = DAT_700751f0;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71367fac,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0f8);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb0e8);
    if (*(char *)(iVar7 + 0x24) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar11 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar15 = (byte)(0xafbf43e9 >> iVar13) |
                 (byte)(0x55d5cd91 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar15 = (byte)(0x55d5cd91 >> (uVar14 & 0xff));
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
    DAT_70b42080 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar7,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b42084);
  }
                    /* WARNING: Could not recover jumptable at 0x71367194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b42080)();
  return;
}


// =========================================================================
// Function: FUN_71367564
// Entry: 0x71367564 | Size: 524 bytes
// =========================================================================

void FUN_71367564(void)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if (*(int *)(DAT_70c38ed8 + 0x24) == 0) {
    DAT_70b42088 = 1;
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb118);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb108);
    *(undefined1 *)(puVar4 + 3) = 1;
    *puVar4 = 0xac4c6857;
    puVar4[1] = 0xe94cbc0a;
    puVar4[2] = 0xdf5c7d46;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71367ffc,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb118);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb108);
  if (pbVar2[0xc] != 0) {
    *pbVar2 = *pbVar2 ^ 0x27;
    pbVar2[1] = pbVar2[1] ^ 9;
    pbVar2[2] = pbVar2[2] ^ 0x39;
    pbVar2[3] = pbVar2[3] ^ 0xdf;
    pbVar2[0xc] = 0;
    pbVar2[4] = pbVar2[4] ^ 0x6f;
    pbVar2[5] = pbVar2[5] ^ 0xe3;
    pbVar2[6] = pbVar2[6] ^ 0x3f;
    pbVar2[7] = pbVar2[7] ^ 0x9d;
    pbVar2[8] = pbVar2[8] ^ 0x27;
    pbVar2[9] = pbVar2[9] ^ 9;
    pbVar2[10] = pbVar2[10] ^ 0x39;
    pbVar2[0xb] = pbVar2[0xb] ^ 0xdf;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_24);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_24 | 1;
    uStack_24 = CONCAT31(uStack_24._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_713676cc;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_24 = (uVar3 | 7) + 2;
    uStack_20 = uVar3;
    uStack_1c = uVar6;
  }
  imp___aeabi_memmove(uVar6,pbVar2,uVar3);
LAB_713676cc:
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_717c623c(&uStack_24,1);
  if ((uStack_24 & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  *DAT_70b42048 = 1;
  return;
}


// =========================================================================
// Function: FUN_713679dc
// Entry: 0x713679dc | Size: 492 bytes
// =========================================================================

void FUN_713679dc(void)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb138);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb128);
    *(undefined1 *)(puVar4 + 3) = 1;
    *puVar4 = 0x247aa6ff;
    puVar4[1] = 0xb3a08498;
    puVar4[2] = 0x576ab3ee;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71368028,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb138);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb128);
  if (pbVar2[0xc] != 0) {
    *pbVar2 = *pbVar2 ^ 0x8f;
    pbVar2[1] = pbVar2[1] ^ 199;
    pbVar2[2] = pbVar2[2] ^ 0xf;
    pbVar2[3] = pbVar2[3] ^ 0x57;
    pbVar2[0xc] = 0;
    pbVar2[4] = pbVar2[4] ^ 0xfd;
    pbVar2[5] = pbVar2[5] ^ 0xdb;
    pbVar2[6] = pbVar2[6] ^ 0xd3;
    pbVar2[7] = pbVar2[7] ^ 199;
    pbVar2[8] = pbVar2[8] ^ 0x8f;
    pbVar2[9] = pbVar2[9] ^ 199;
    pbVar2[10] = pbVar2[10] ^ 0xf;
    pbVar2[0xb] = pbVar2[0xb] ^ 0x57;
  }
  uVar3 = imp_strlen(pbVar2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_24);
  }
  if (uVar3 < 0xb) {
    uVar6 = (uint)&uStack_24 | 1;
    uStack_24 = CONCAT31(uStack_24._1_3_,(char)(uVar3 << 1));
    if (uVar3 == 0) goto LAB_71367b1c;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_24 = (uVar3 | 7) + 2;
    uStack_20 = uVar3;
    uStack_1c = uVar6;
  }
  imp___aeabi_memmove(uVar6,pbVar2,uVar3);
LAB_71367b1c:
  *(undefined1 *)(uVar6 + uVar3) = 0;
  FUN_717c623c(&uStack_24,0);
  if ((uStack_24 & 1) != 0) {
    thunk_qNQrlu(uStack_1c);
  }
  *DAT_70b42048 = 0;
  DAT_70b42088 = 0;
  return;
}


// =========================================================================
// Function: FUN_71368054
// Entry: 0x71368054 | Size: 1080 bytes
// =========================================================================

void FUN_71368054(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  piVar9 = (int *)*param_2;
  piVar2 = param_2;
  if (piVar9 == (int *)0x0) {
LAB_7136808c:
    piVar9 = (int *)piVar2[1];
    if (piVar9 != (int *)0x0) goto LAB_71368098;
    puVar3 = (undefined4 *)piVar2[2];
    piVar9 = (int *)0x0;
    bVar1 = true;
  }
  else {
    piVar4 = (int *)param_2[1];
    if ((int *)param_2[1] != (int *)0x0) {
      do {
        piVar2 = piVar4;
        piVar4 = (int *)*piVar2;
      } while ((int *)*piVar2 != (int *)0x0);
      goto LAB_7136808c;
    }
LAB_71368098:
    puVar3 = (undefined4 *)piVar2[2];
    bVar1 = false;
    piVar9[2] = (int)puVar3;
  }
  if ((int *)*puVar3 == piVar2) {
    *puVar3 = piVar9;
    if (piVar2 == param_1) {
      piVar4 = (int *)0x0;
      param_1 = piVar9;
      goto LAB_713680e4;
    }
    puVar3 = (undefined4 *)(piVar2[2] + 4);
  }
  else {
    puVar3[1] = piVar9;
    puVar3 = (undefined4 *)piVar2[2];
  }
  piVar4 = (int *)*puVar3;
LAB_713680e4:
  iVar5 = piVar2[3];
  if (piVar2 != param_2) {
    puVar6 = (undefined4 *)param_2[2];
    piVar2[2] = (int)puVar6;
    puVar3 = puVar6 + 1;
    if ((int *)*puVar6 == param_2) {
      puVar3 = puVar6;
    }
    *puVar3 = piVar2;
    iVar7 = *param_2;
    *piVar2 = iVar7;
    *(int **)(iVar7 + 8) = piVar2;
    iVar7 = param_2[1];
    piVar2[1] = iVar7;
    if (iVar7 != 0) {
      *(int **)(iVar7 + 8) = piVar2;
    }
    if (param_1 == param_2) {
      param_1 = piVar2;
    }
    *(char *)(piVar2 + 3) = (char)param_2[3];
  }
  if ((char)iVar5 == '\0' || param_1 == (int *)0x0) {
    return;
  }
  if (!bVar1) {
    *(undefined1 *)(piVar9 + 3) = 1;
    return;
  }
  do {
    puVar3 = (undefined4 *)piVar4[2];
    if ((int *)*puVar3 == piVar4) {
      if ((char)piVar4[3] == '\0') {
        *(undefined1 *)(piVar4 + 3) = 1;
        *(undefined1 *)(puVar3 + 3) = 0;
        piVar2 = (int *)piVar4[2];
        iVar5 = *piVar2;
        iVar7 = *(int *)(iVar5 + 4);
        *piVar2 = iVar7;
        if (iVar7 != 0) {
          *(int **)(iVar7 + 8) = piVar2;
        }
        piVar8 = (int *)piVar2[2];
        *(int **)(iVar5 + 8) = piVar8;
        piVar9 = piVar8 + 1;
        if ((int *)*piVar8 == piVar2) {
          piVar9 = piVar8;
        }
        *piVar9 = iVar5;
        *(int **)(iVar5 + 4) = piVar2;
        piVar2[2] = iVar5;
        if (param_1 == (int *)piVar4[1]) {
          param_1 = piVar4;
        }
        piVar4 = *(int **)piVar4[1];
      }
      iVar5 = *piVar4;
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0xc) == '\0')) {
LAB_71368430:
        *(undefined1 *)(piVar4 + 3) = *(undefined1 *)(piVar4[2] + 0xc);
        *(undefined1 *)(piVar4[2] + 0xc) = 1;
        *(undefined1 *)(*piVar4 + 0xc) = 1;
        piVar2 = (int *)piVar4[2];
        iVar5 = *piVar2;
        iVar7 = *(int *)(iVar5 + 4);
        *piVar2 = iVar7;
        if (iVar7 != 0) {
          *(int **)(iVar7 + 8) = piVar2;
        }
        piVar4 = (int *)piVar2[2];
        *(int **)(iVar5 + 8) = piVar4;
        piVar9 = piVar4 + 1;
        if ((int *)*piVar4 == piVar2) {
          piVar9 = piVar4;
        }
        *piVar9 = iVar5;
        *(int **)(iVar5 + 4) = piVar2;
        piVar2[2] = iVar5;
        return;
      }
      iVar7 = piVar4[1];
      if ((iVar7 != 0) && (*(char *)(iVar7 + 0xc) == '\0')) {
        if (iVar5 != 0) {
          if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_71368430;
          iVar7 = piVar4[1];
        }
        *(undefined1 *)(iVar7 + 0xc) = 1;
        *(undefined1 *)(piVar4 + 3) = 0;
        piVar2 = (int *)piVar4[1];
        iVar5 = *piVar2;
        piVar4[1] = iVar5;
        if (iVar5 != 0) {
          *(int **)(iVar5 + 8) = piVar4;
        }
        puVar6 = (undefined4 *)piVar4[2];
        piVar2[2] = (int)puVar6;
        puVar3 = puVar6 + 1;
        if ((int *)*puVar6 == piVar4) {
          puVar3 = puVar6;
        }
        *puVar3 = piVar2;
        *piVar2 = (int)piVar4;
        piVar4[2] = (int)piVar2;
        piVar4 = piVar2;
        goto LAB_71368430;
      }
      *(undefined1 *)(piVar4 + 3) = 0;
      piVar9 = (int *)piVar4[2];
      piVar2 = piVar9;
      if ((char)piVar9[3] == '\0' || piVar9 == param_1) {
LAB_713682d8:
        *(undefined1 *)(piVar2 + 3) = 1;
        return;
      }
    }
    else {
      if ((char)piVar4[3] == '\0') {
        *(undefined1 *)(piVar4 + 3) = 1;
        *(undefined1 *)(puVar3 + 3) = 0;
        iVar5 = piVar4[2];
        piVar2 = *(int **)(iVar5 + 4);
        iVar7 = *piVar2;
        *(int *)(iVar5 + 4) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 8) = iVar5;
        }
        piVar8 = *(int **)(iVar5 + 8);
        piVar2[2] = (int)piVar8;
        piVar9 = piVar8 + 1;
        if (*piVar8 == iVar5) {
          piVar9 = piVar8;
        }
        *piVar9 = (int)piVar2;
        *piVar2 = iVar5;
        *(int **)(iVar5 + 8) = piVar2;
        if (param_1 == (int *)*piVar4) {
          param_1 = piVar4;
        }
        piVar4 = (int *)((int *)*piVar4)[1];
      }
      iVar5 = *piVar4;
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0xc) == '\0')) {
        iVar7 = piVar4[1];
        if (iVar7 != 0) {
LAB_71368310:
          if (*(char *)(iVar7 + 0xc) == '\0') goto LAB_7136836c;
        }
        *(undefined1 *)(iVar5 + 0xc) = 1;
        *(undefined1 *)(piVar4 + 3) = 0;
        piVar2 = (int *)*piVar4;
        iVar5 = piVar2[1];
        *piVar4 = iVar5;
        if (iVar5 != 0) {
          *(int **)(iVar5 + 8) = piVar4;
        }
        piVar8 = (int *)piVar4[2];
        piVar2[2] = (int)piVar8;
        piVar9 = piVar8 + 1;
        if ((int *)*piVar8 == piVar4) {
          piVar9 = piVar8;
        }
        *piVar9 = (int)piVar2;
        piVar2[1] = (int)piVar4;
        piVar4[2] = (int)piVar2;
        piVar4 = piVar2;
LAB_7136836c:
        *(undefined1 *)(piVar4 + 3) = *(undefined1 *)(piVar4[2] + 0xc);
        *(undefined1 *)(piVar4[2] + 0xc) = 1;
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        iVar5 = piVar4[2];
        piVar2 = *(int **)(iVar5 + 4);
        iVar7 = *piVar2;
        *(int *)(iVar5 + 4) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 8) = iVar5;
        }
        piVar4 = *(int **)(iVar5 + 8);
        piVar2[2] = (int)piVar4;
        piVar9 = piVar4 + 1;
        if (*piVar4 == iVar5) {
          piVar9 = piVar4;
        }
        *piVar9 = (int)piVar2;
        *piVar2 = iVar5;
        *(int **)(iVar5 + 8) = piVar2;
        return;
      }
      iVar7 = piVar4[1];
      if ((iVar7 != 0) && (*(char *)(iVar7 + 0xc) == '\0')) goto LAB_71368310;
      *(undefined1 *)(piVar4 + 3) = 0;
      piVar9 = (int *)piVar4[2];
      piVar2 = param_1;
      if ((piVar9 == param_1) || (piVar2 = piVar9, (char)piVar9[3] == '\0')) goto LAB_713682d8;
    }
    puVar6 = (undefined4 *)piVar9[2];
    puVar3 = puVar6 + 1;
    if ((int *)*puVar6 != piVar9) {
      puVar3 = puVar6;
    }
    piVar4 = (int *)*puVar3;
  } while( true );
}


// =========================================================================
// Function: FUN_7136a1b8
// Entry: 0x7136a1b8 | Size: 356 bytes
// =========================================================================

void FUN_7136a1b8(void)

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
  if (((DAT_70b420c4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420c4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb178);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb168);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar4 = DAT_70075228;
      uVar3 = DAT_70075224;
      *puVar8 = DAT_70075220;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70075238;
      uVar4 = DAT_70075234;
      uVar3 = DAT_70075230;
      puVar8[3] = DAT_7007522c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c7d4,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb178);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb168);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x93a3c787 >> iVar12) |
                 (byte)(0x47abcda5 << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x47abcda5 >> (uVar13 & 0xff));
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
    DAT_70b420c0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420c4);
  }
                    /* WARNING: Could not recover jumptable at 0x7136a1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420c0)();
  return;
}


// =========================================================================
// Function: FUN_7136a5b4
// Entry: 0x7136a5b4 | Size: 380 bytes
// =========================================================================

void FUN_7136a5b4(undefined4 param_1)

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
  if (((DAT_70b420cc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420cc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb198);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb188);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_70075254;
      uVar6 = DAT_70075250;
      uVar5 = DAT_7007524c;
      uVar4 = DAT_70075248;
      uVar3 = DAT_70075244;
      *puVar11 = DAT_70075240;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_7007526c;
      uVar6 = DAT_70075268;
      uVar5 = DAT_70075264;
      uVar4 = DAT_70075260;
      uVar3 = DAT_7007525c;
      puVar11[6] = DAT_70075258;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c810,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb198);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb188);
    if (*(char *)(iVar9 + 0x30) != '\0') {
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
        bVar2 = (0x2e < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x30) = 0;
    }
    DAT_70b420c8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420cc);
  }
                    /* WARNING: Could not recover jumptable at 0x7136a5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420c8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7136a9c8
// Entry: 0x7136a9c8 | Size: 124 bytes
// =========================================================================

int FUN_7136a9c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_714af734(param_1,0,1);
  if (iVar1 == 0) {
    iVar1 = FUN_714af734(param_1,0,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar2 = FUN_7143ec80();
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = FUN_7143e850(iVar2,param_1);
      if (iVar1 != 0) break;
      iVar2 = FUN_7136a5b4(iVar2);
    }
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7136ab08
// Entry: 0x7136ab08 | Size: 560 bytes
// =========================================================================

void FUN_7136ab08(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 unaff_r4;
  uint uVar13;
  undefined4 unaff_r5;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  puVar7 = (undefined4 *)FUN_7136acb0(0x14);
  uVar8 = thunk__IBDl(2800000);
  *puVar7 = uVar8;
  uVar8 = thunk__IBDl(50000);
  puVar7[1] = uVar8;
  puVar7[2] = 50000;
  iVar9 = 0;
  *(undefined1 *)(puVar7 + 4) = 1;
  puVar7[3] = 0xffffffff;
  do {
    *(byte *)(puVar7[1] - iVar9) = *(byte *)(puVar7[1] - iVar9) | 0x80;
    *(byte *)(puVar7[1] - iVar9) = *(byte *)(puVar7[1] - iVar9) & 0x80;
    iVar9 = iVar9 + -1;
  } while (iVar9 != -50000);
  *DAT_70b420bc = (int)puVar7;
  FUN_7143e42c(FUN_7136a9c8);
  DataMemoryBarrier(0xb);
  if (((DAT_70ffce74 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffce74), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4d4);
    if (*pcVar10 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4c4);
      *(undefined1 *)((int)puVar7 + 0x3d) = 1;
      uVar5 = DAT_7007e1d8;
      uVar4 = DAT_7007e1d4;
      uVar3 = DAT_7007e1d0;
      uVar8 = DAT_7007e1cc;
      *puVar7 = DAT_7007e1c8;
      puVar7[1] = uVar8;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7[4] = uVar5;
      uVar5 = DAT_7007e1ec;
      uVar4 = DAT_7007e1e8;
      uVar3 = DAT_7007e1e4;
      uVar8 = DAT_7007e1e0;
      puVar7[5] = DAT_7007e1dc;
      puVar7[6] = uVar8;
      puVar7[7] = uVar3;
      puVar7[8] = uVar4;
      puVar7[9] = uVar5;
      uVar5 = DAT_7007e200;
      uVar4 = DAT_7007e1fc;
      uVar3 = DAT_7007e1f8;
      uVar8 = DAT_7007e1f4;
      puVar7[10] = DAT_7007e1f0;
      puVar7[0xb] = uVar8;
      puVar7[0xc] = uVar3;
      puVar7[0xd] = uVar4;
      puVar7[0xe] = uVar5;
      *(undefined1 *)(puVar7 + 0xf) = DAT_7007e204;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7143f978,puVar7,&DAT_70b0e000,uVar8,unaff_r4,unaff_r5);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4d4);
      *puVar11 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf4c4);
    if (*(char *)(iVar9 + 0x3d) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar6 = (byte)(0x19cfe32d >> iVar14) |
                (byte)(-0x266c1045 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar6 = (byte)(0xd993efbb >> (uVar15 & 0xff));
        }
        *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar6;
        bVar16 = 0xfffffffe < uVar12;
        bVar1 = uVar13 == 0;
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x3d) = 0;
    }
    DAT_70ffce70 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70ffce74);
  }
                    /* WARNING: Could not recover jumptable at 0x7143e034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70ffce70)(&UNK_7136aae8);
  return;
}


// =========================================================================
// Function: FUN_7136acb0
// Entry: 0x7136acb0 | Size: 892 bytes
// =========================================================================

int FUN_7136acb0(int param_1)

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
  uVar13 = 0x7136ad04;
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
    FUN_71ba33fc(uVar9,-0xec95180 - (iVar2 + 0x7136ae80 + iVar3));
    iVar3 = imp_sysconf(0x28);
    iVar4 = imp_sysconf(0x28);
    aiStack_38[0] = -1;
    aiStack_38[1] = 0;
    iVar2 = imp_mmap(extraout_r1 + iVar3 + 0x3136ae80U & -iVar4,iVar2,3,&DAT_00100022);
    piVar6 = aiStack_38;
    if (iVar2 != -1) goto LAB_7136af68;
    uVar13 = uVar13 + 1;
    piVar6 = (int *)imp___errno();
  } while (*piVar6 == 0x11);
  aiStack_38[0] = -1;
  aiStack_38[1] = 0;
  iVar2 = imp_mmap(0,aiStack_38[4],3,0x22);
  piVar6 = aiStack_38;
LAB_7136af68:
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
// Function: FUN_7136b2ac
// Entry: 0x7136b2ac | Size: 364 bytes
// =========================================================================

void FUN_7136b2ac(void)

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
  if (((DAT_70b420d4 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420d4), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1b8);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1a8);
      *(undefined1 *)((int)puVar8 + 0x1e) = 1;
      uVar4 = DAT_70075278;
      uVar3 = DAT_70075274;
      *puVar8 = DAT_70075270;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_70075288;
      uVar4 = DAT_70075284;
      uVar3 = DAT_70075280;
      puVar8[3] = DAT_7007527c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined2 *)(puVar8 + 7) = DAT_7007528c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c860,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1b8);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1a8);
    if (*(char *)(iVar6 + 0x1e) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x115f355b >> iVar12) |
                 (byte)(0x3b7577db << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0x3b7577db >> (uVar13 & 0xff));
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
    DAT_70b420d0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420d4);
  }
                    /* WARNING: Could not recover jumptable at 0x7136b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420d0)();
  return;
}


// =========================================================================
// Function: FUN_7136b6b0
// Entry: 0x7136b6b0 | Size: 364 bytes
// =========================================================================

void FUN_7136b6b0(void)

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
  if (((DAT_70b420dc & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420dc), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1d8);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1c8);
      *(undefined1 *)((int)puVar8 + 0x1d) = 1;
      uVar4 = DAT_70075298;
      uVar3 = DAT_70075294;
      *puVar8 = DAT_70075290;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      uVar5 = DAT_700752a8;
      uVar4 = DAT_700752a4;
      uVar3 = DAT_700752a0;
      puVar8[3] = DAT_7007529c;
      puVar8[4] = uVar3;
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      *(undefined1 *)(puVar8 + 7) = DAT_700752ac;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c8a0,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1d8);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1c8);
    if (*(char *)(iVar6 + 0x1d) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0xd6b2541 >> iVar12) |
                 (byte)(-0x5286beef << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xad794111 >> (uVar13 & 0xff));
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
    DAT_70b420d8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420dc);
  }
                    /* WARNING: Could not recover jumptable at 0x7136b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420d8)();
  return;
}


// =========================================================================
// Function: FUN_7136bab4
// Entry: 0x7136bab4 | Size: 416 bytes
// =========================================================================

void FUN_7136bab4(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70b420e4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420e4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1f8,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1e8);
      *(undefined1 *)((int)puVar10 + 0x3e) = 1;
      uVar6 = DAT_700752c0;
      uVar5 = DAT_700752bc;
      uVar4 = DAT_700752b8;
      uVar3 = DAT_700752b4;
      *puVar10 = DAT_700752b0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_700752d4;
      uVar5 = DAT_700752d0;
      uVar4 = DAT_700752cc;
      uVar3 = DAT_700752c8;
      puVar10[5] = DAT_700752c4;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_700752e8;
      uVar5 = DAT_700752e4;
      uVar4 = DAT_700752e0;
      uVar3 = DAT_700752dc;
      puVar10[10] = DAT_700752d8;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined2 *)(puVar10 + 0xf) = DAT_700752ec;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c8e0,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1f8);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb1e8);
    if (*(char *)(iVar8 + 0x3e) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x874b0533 >> iVar14) |
                (byte)(0x31070921 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x31070921 >> (uVar15 & 0xff));
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
    DAT_70b420e0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420e4);
  }
                    /* WARNING: Could not recover jumptable at 0x7136bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420e0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7136beec
// Entry: 0x7136beec | Size: 396 bytes
// =========================================================================

void FUN_7136beec(undefined4 param_1)

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
  if (((DAT_70b420ec & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420ec), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb218);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb208);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_70075300;
      uVar5 = DAT_700752fc;
      uVar4 = DAT_700752f8;
      uVar3 = DAT_700752f4;
      *puVar11 = DAT_700752f0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70075314;
      uVar5 = DAT_70075310;
      uVar4 = DAT_7007530c;
      uVar3 = DAT_70075308;
      puVar11[5] = DAT_70075304;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_7007531a;
      *(undefined2 *)(puVar11 + 10) = DAT_70075318;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c930,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb218);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb208);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe943fb13 >> iVar15) |
                (byte)(-0x5ed0d44d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xa12f2bb3 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b420e8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420ec);
  }
                    /* WARNING: Could not recover jumptable at 0x7136bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420e8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7136c310
// Entry: 0x7136c310 | Size: 400 bytes
// =========================================================================

void FUN_7136c310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (((DAT_70b420f4 & 1) == 0) && (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b420f4), iVar4 != 0)) {
    pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb238,param_2,param_3);
    if (*pcVar5 == '\0') {
      iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb228);
      *(undefined1 *)(iVar4 + 0x51) = 1;
      imp___aeabi_memcpy8(iVar4,&DAT_70075320,0x51);
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7136c980,iVar4,&DAT_70b0e000);
      puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb238);
      *puVar6 = 1;
    }
    iVar4 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb228);
    if (*(char *)(iVar4 + 0x51) != '\0') {
      uVar7 = 0;
      uVar8 = 0;
      do {
        iVar9 = (uVar7 & 7) * 8;
        bVar3 = (byte)(0x377b9db1 >> iVar9) |
                (byte)(-0x30700477 << ((uVar7 & 7) * -8 + 0x20 & 0xff));
        uVar10 = iVar9 - 0x20;
        if (-1 < (int)uVar10) {
          bVar3 = (byte)(0xcf8ffb89 >> (uVar10 & 0xff));
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
    DAT_70b420f0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar4,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b420f4);
  }
                    /* WARNING: Could not recover jumptable at 0x7136c344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b420f0)(param_1,param_2,param_3);
  return;
}


// =========================================================================
// Function: FUN_7136c754
// Entry: 0x7136c754 | Size: 48 bytes
// =========================================================================

void FUN_7136c754(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_7136beec();
  if (iVar1 != -1) {
    return;
  }
  FUN_7136c310(param_1,param_2,1);
  return;
}


// =========================================================================
// Function: FUN_7136cdfc
// Entry: 0x7136cdfc | Size: 20 bytes
// =========================================================================

void FUN_7136cdfc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// =========================================================================
// Function: FUN_7136ce28
// Entry: 0x7136ce28 | Size: 204 bytes
// =========================================================================

void FUN_7136ce28(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = param_1[1];
  uVar1 = FUN_71ba21e8(uVar6,uVar6);
  uVar5 = *param_1;
  uVar2 = FUN_71ba21e8(uVar5,uVar5);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar4 = param_1[2];
  uVar2 = FUN_71ba21e8(uVar4,uVar4);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  iVar3 = FUN_71ba2d30(uVar1,0);
  uVar2 = 0x3f800000;
  if (iVar3 == 0) {
    uVar1 = imp_sqrtf(uVar1);
    uVar1 = FUN_71ba13e0(0x3f800000,uVar1);
    uVar2 = FUN_71ba21e8(uVar4,uVar1);
    param_1[2] = uVar2;
    uVar2 = FUN_71ba21e8(uVar6,uVar1);
    param_1[1] = uVar2;
    uVar2 = FUN_71ba21e8(uVar5,uVar1);
  }
  *param_1 = uVar2;
  return;
}


// =========================================================================
// Function: FUN_7136d040
// Entry: 0x7136d040 | Size: 28 bytes
// =========================================================================

void FUN_7136d040(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


// =========================================================================
// Function: FUN_7136d074
// Entry: 0x7136d074 | Size: 68 bytes
// =========================================================================

void FUN_7136d074(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = FUN_71ba0b38(*param_2,*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_71ba0b38(param_2[1],uVar2);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba0b38(param_2[2],uVar3);
  param_1[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136d124
// Entry: 0x7136d124 | Size: 68 bytes
// =========================================================================

void FUN_7136d124(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = FUN_71ba21e8(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_71ba21e8(uVar2,param_2);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba21e8(uVar3,param_2);
  param_1[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136d1d4
// Entry: 0x7136d1d4 | Size: 68 bytes
// =========================================================================

void FUN_7136d1d4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = FUN_71ba13e0(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_71ba13e0(uVar2,param_2);
  param_1[1] = uVar1;
  uVar1 = FUN_71ba13e0(uVar3,param_2);
  param_1[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136d284
// Entry: 0x7136d284 | Size: 272 bytes
// =========================================================================

void FUN_7136d284(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *param_2;
  uVar3 = *param_3;
  uVar4 = param_3[8];
  uVar5 = param_2[2];
  uVar1 = FUN_71ba21e8(param_3[4],param_2[1]);
  uVar2 = FUN_71ba21e8(uVar3,uVar2);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(uVar4,uVar5);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  *param_1 = uVar1;
  uVar3 = param_3[9];
  uVar4 = param_2[2];
  uVar5 = param_3[1];
  uVar2 = *param_2;
  uVar1 = FUN_71ba21e8(param_3[5],param_2[1]);
  uVar2 = FUN_71ba21e8(uVar5,uVar2);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(uVar3,uVar4);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  param_1[1] = uVar1;
  uVar4 = *param_2;
  uVar3 = param_2[2];
  uVar2 = param_3[2];
  uVar5 = param_3[10];
  uVar1 = FUN_71ba21e8(param_3[6],param_2[1]);
  uVar2 = FUN_71ba21e8(uVar2,uVar4);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(uVar5,uVar3);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  param_1[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136d550
// Entry: 0x7136d550 | Size: 180 bytes
// =========================================================================

void FUN_7136d550(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = imp_rand();
  uVar3 = FUN_71ba1e0c(uVar1);
  uVar3 = FUN_71ba21e8(uVar3,0x30000000);
  uVar4 = FUN_71ba240c(param_3,param_2);
  uVar3 = FUN_71ba21e8(uVar3,uVar4);
  uVar3 = FUN_71ba0b38(uVar3,param_2);
  uVar1 = imp_rand();
  uVar2 = imp_rand();
  *param_1 = uVar3;
  uVar3 = FUN_71ba1e0c(uVar1);
  uVar3 = FUN_71ba21e8(uVar3,0x30000000);
  uVar3 = FUN_71ba21e8(uVar3,uVar4);
  uVar3 = FUN_71ba0b38(uVar3,param_2);
  param_1[1] = uVar3;
  uVar3 = FUN_71ba1e0c(uVar2);
  uVar3 = FUN_71ba21e8(uVar3,0x30000000);
  uVar3 = FUN_71ba21e8(uVar3,uVar4);
  uVar3 = FUN_71ba0b38(uVar3,param_2);
  param_1[2] = uVar3;
  return;
}


// =========================================================================
// Function: FUN_7136d7dc
// Entry: 0x7136d7dc | Size: 452 bytes
// =========================================================================

void FUN_7136d7dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[4];
  uVar4 = param_2[6];
  uVar1 = FUN_71ba21e8(param_2[5],param_2[5]);
  uVar3 = FUN_71ba21e8(uVar3,uVar3);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = imp_sqrtf();
  FUN_7133bb90(uVar4,uVar1);
  uVar5 = FUN_71ba1638();
  uVar5 = FUN_71ba1ea0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x53f7ced9,0x404ca5e3);
  uVar5 = FUN_71ba0670((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0xc0568000);
  FUN_71ba23ec(0,0x40768000,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  uVar1 = FUN_71ba242c();
  *param_1 = uVar1;
  uVar4 = param_2[2];
  uVar3 = *param_2;
  uVar1 = FUN_71ba21e8(param_2[1],param_2[1]);
  uVar3 = FUN_71ba21e8(uVar3,uVar3);
  FUN_71ba0b38(uVar3,uVar1);
  uVar1 = imp_sqrtf();
  FUN_7133bb90(uVar4,uVar1);
  uVar5 = FUN_71ba1638();
  uVar5 = FUN_71ba1ea0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x53f7ced9,0x404ca5e3);
  FUN_71ba0670((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0xc0568000);
  uVar1 = FUN_71ba242c();
  param_1[1] = uVar1;
  FUN_7133bb90(param_2[4],param_2[5]);
  uVar5 = FUN_71ba1638();
  uVar5 = FUN_71ba1ea0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x53f7ced9,0x404ca5e3);
  FUN_71ba0670((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0xc0568000);
  uVar3 = FUN_71ba242c();
  uVar1 = *param_1;
  param_1[2] = uVar3;
  iVar2 = FUN_71ba2d70(uVar1,0x43b40000);
  while (iVar2 != 0) {
    uVar1 = FUN_71ba0b38(uVar1,0xc3b40000);
    iVar2 = FUN_71ba2d70(uVar1,0x43b40000);
  }
  iVar2 = FUN_71ba2d10(uVar1,0);
  while (iVar2 != 0) {
    uVar1 = FUN_71ba0b38(uVar1,0x43b40000);
    iVar2 = FUN_71ba2d10(uVar1,0);
  }
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136dd00
// Entry: 0x7136dd00 | Size: 424 bytes
// =========================================================================

void FUN_7136dd00(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  iVar1 = FUN_71ba2d10(uVar4,0);
  uVar2 = FUN_71ba0b38(uVar4,0x43b40000);
  if (iVar1 == 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_71ba2d50(uVar2,0x43b40000);
  if ((iVar1 != 0) || (iVar1 = FUN_71ba2d50(uVar2,0x43b40000), iVar1 != 0)) {
    uVar4 = FUN_71ba0b38(uVar2,0xc3b40000);
    if (iVar3 == 0) {
      uVar4 = uVar2;
    }
    *param_1 = uVar4;
  }
  uVar4 = param_1[1];
  iVar1 = FUN_71ba2d10(uVar4,0);
  uVar2 = FUN_71ba0b38(uVar4,0x43b40000);
  if (iVar1 == 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_71ba2d50(uVar2,0x43b40000);
  if ((iVar1 != 0) || (iVar1 = FUN_71ba2d50(uVar2,0x43b40000), iVar1 != 0)) {
    uVar4 = FUN_71ba0b38(uVar2,0xc3b40000);
    if (iVar3 == 0) {
      uVar4 = uVar2;
    }
    param_1[1] = uVar4;
  }
  uVar4 = param_1[2];
  iVar1 = FUN_71ba2d10(uVar4,0);
  uVar2 = FUN_71ba0b38(uVar4,0x43b40000);
  if (iVar1 == 0) {
    uVar2 = uVar4;
  }
  iVar3 = FUN_71ba2d50(uVar2,0x43b40000);
  if ((iVar1 == 0) && (iVar1 = FUN_71ba2d50(uVar2,0x43b40000), iVar1 == 0)) {
    return;
  }
  uVar4 = FUN_71ba0b38(uVar2,0xc3b40000);
  if (iVar3 == 0) {
    uVar4 = uVar2;
  }
  param_1[2] = uVar4;
  return;
}


// =========================================================================
// Function: FUN_7136e064
// Entry: 0x7136e064 | Size: 296 bytes
// =========================================================================

void FUN_7136e064(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_71ba21e8(param_3,param_3);
  uVar2 = FUN_71ba21e8(param_2,param_2);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(param_4,param_4);
  FUN_71ba0b38(uVar2,uVar1);
  uVar2 = imp_sqrtf();
  uVar3 = FUN_71ba13e0(param_4,uVar2);
  uVar1 = imp_sqrtf(uVar1);
  uVar2 = FUN_71ba13e0(uVar1,uVar2);
  imp_atan2f(uVar3,uVar2);
  param_1[1] = 0;
  uVar4 = FUN_71ba1638();
  uVar4 = FUN_71ba0f98((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x5fdd3550,0x400921fb);
  FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40668000);
  uVar2 = FUN_71ba242c();
  *param_1 = uVar2;
  uVar2 = FUN_71ba13e0(param_2 ^ 0x80000000,uVar1);
  uVar1 = FUN_71ba13e0(param_3,uVar1);
  imp_atan2f(uVar2,uVar1);
  uVar4 = FUN_71ba1638();
  uVar4 = FUN_71ba0f98((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0x5fdd3550,0x400921fb);
  FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x40668000);
  uVar1 = FUN_71ba242c();
  param_1[2] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136e3f0
// Entry: 0x7136e3f0 | Size: 52 bytes
// =========================================================================

void FUN_7136e3f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}


// =========================================================================
// Function: FUN_7136e43c
// Entry: 0x7136e43c | Size: 164 bytes
// =========================================================================

void FUN_7136e43c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  uVar6 = *param_3;
  uVar1 = FUN_71ba21e8(uVar5);
  uVar2 = FUN_71ba21e8(uVar4,uVar7);
  uVar1 = FUN_71ba240c(uVar2,uVar1);
  *param_1 = uVar1;
  uVar1 = FUN_71ba21e8(uVar6,uVar4);
  uVar2 = FUN_71ba21e8(uVar8,uVar5);
  uVar1 = FUN_71ba240c(uVar2,uVar1);
  param_1[2] = uVar1;
  uVar1 = FUN_71ba21e8(uVar7,uVar8);
  uVar2 = FUN_71ba21e8(uVar3,uVar6);
  uVar1 = FUN_71ba240c(uVar2,uVar1);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136e5f4
// Entry: 0x7136e5f4 | Size: 88 bytes
// =========================================================================

void FUN_7136e5f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = param_1[2];
  uVar4 = param_2[2];
  uVar5 = *param_1;
  uVar3 = *param_2;
  uVar1 = FUN_71ba21e8(param_1[1],param_2[1]);
  uVar2 = FUN_71ba21e8(uVar2,uVar4);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar2 = FUN_71ba21e8(uVar5,uVar3);
  FUN_71ba0b38(uVar2,uVar1);
  return;
}


// =========================================================================
// Function: FUN_7136e6f0
// Entry: 0x7136e6f0 | Size: 12 bytes
// =========================================================================

void FUN_7136e6f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7136e714
// Entry: 0x7136e714 | Size: 28 bytes
// =========================================================================

undefined4 FUN_7136e714(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 7) {
    uVar1 = *(undefined4 *)(&DAT_70075374 + (param_1 - 1U) * 4);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7136f010
// Entry: 0x7136f010 | Size: 376 bytes
// =========================================================================

int * FUN_7136f010(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if ((char)param_1[8] == '\0') {
    return param_1;
  }
  if (*param_1 != 0) {
    imp_free();
    *param_1 = 0;
  }
  if (param_1[4] != 0) {
    imp_free();
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[9];
  if (piVar1 == (int *)0x0) goto LAB_7136f104;
  if ((0 < *piVar1) && (iVar2 = *piVar1 + -1, *piVar1 = iVar2, iVar2 == 0)) {
    iVar2 = param_1[9];
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = FUN_713a475c(*(int *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0xc),
                           *(undefined4 *)(iVar2 + 8));
      if (iVar2 != 0) {
        iVar3 = param_1[9];
        iVar2 = *(int *)(iVar3 + 4);
        if (*DAT_70b466bc == iVar2) {
          *DAT_70b466bc = 0;
          iVar3 = param_1[9];
          iVar2 = *(int *)(iVar3 + 4);
        }
        if (iVar2 != 0) {
          thunk_qNQrlu();
          iVar3 = param_1[9];
        }
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      if (param_1[9] == 0) goto LAB_7136f0fc;
    }
    thunk_qNQrlu();
  }
LAB_7136f0fc:
  param_1[9] = 0;
LAB_7136f104:
  if (param_1[0x39] != 0) {
    FUN_7138df4c();
    param_1[0x39] = 0;
  }
  iVar2 = *DAT_70b42100;
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0x10);
    if (piVar1 != (int *)0x0) {
      piVar5 = piVar1;
      if (piVar1 == param_1) {
        *(int *)(iVar2 + 0x10) = param_1[10];
      }
      else {
        do {
          piVar4 = piVar5;
          piVar5 = (int *)piVar4[10];
          if (piVar5 == piVar1 || piVar5 == (int *)0x0) goto LAB_7136f178;
        } while (piVar5 != param_1);
        piVar4[10] = param_1[10];
      }
    }
LAB_7136f178:
    param_1[10] = 0;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7136f288
// Entry: 0x7136f288 | Size: 288 bytes
// =========================================================================

void FUN_7136f288(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = DAT_70b466e4;
  if (*(char *)(param_1 + 0x44) == '\0') {
    uVar3 = *DAT_70b466e0 & 0xfffbffff;
  }
  else {
    uVar3 = *DAT_70b466e0 & 0xfffbffff;
    if (*(int *)(param_1 + 0x48) == 4) {
      uVar3 = uVar3 | 0x40000;
    }
    if (*(int *)(param_1 + 0x54) == 3) {
      uVar3 = uVar3 | 0x20000;
    }
    else {
      uVar3 = uVar3 & 0xfffdffff;
    }
  }
  uVar5 = 0x80;
  uVar3 = uVar3 & 0xff9ffe7f;
  uVar4 = uVar3;
  if (*(int *)(param_1 + 0x68) == 2) {
    uVar4 = uVar3 | 0x400000;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar4 = uVar3;
  }
  cVar1 = *(char *)(param_1 + 0x6c);
  if (cVar1 == '\0') {
    uVar4 = uVar4 | 0x200000;
  }
  if (*(int *)(param_1 + 0x84) == 4) {
    uVar5 = 0x100;
  }
  uVar3 = uVar4;
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar3 = uVar4 | uVar5;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    uVar3 = uVar4;
  }
  uVar4 = *DAT_70b466e4 & 0xff7fffff;
  *DAT_70b466e0 = uVar3;
  if (cVar1 != '\0') {
    uVar4 = uVar4 | 0x800000;
  }
  *puVar2 = uVar4;
  FUN_71379828(*(undefined1 *)(param_1 + 0x58));
  if (DAT_70b42134 != 0) {
    uVar3 = (DAT_70b42134 + DAT_70b42130) - 1;
    FUN_71378be8(*(undefined4 *)
                  (*(int *)(*(int *)(DAT_70b42124 + (uVar3 >> 10) * 4) + (uVar3 & 0x3ff) * 4) + 4),1
                );
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7136f458
// Entry: 0x7136f458 | Size: 268 bytes
// =========================================================================

undefined4 FUN_7136f458(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0xe] == 0) {
    iVar1 = param_1[7];
    param_1[0x36] = iVar1;
    param_1[0x31] = iVar1;
    param_1[0x2c] = iVar1;
    param_1[0x27] = iVar1;
    param_1[0x22] = iVar1;
    param_1[0x1d] = iVar1;
    param_1[0x18] = iVar1;
    param_1[0x13] = iVar1;
    param_1[0xe] = iVar1;
  }
  if (*DAT_70b4643c != 0) {
    FUN_7138e188(0);
  }
  if (param_1[9] == 0) {
    FUN_7138d1e4(param_1[4],param_1[7] * param_1[6],0);
    if (param_3 != 0) goto LAB_7136f510;
    iVar1 = *param_1;
    if (iVar1 == 0) goto LAB_7136f554;
    iVar2 = param_1[2];
LAB_7136f54c:
    FUN_7137c84c(iVar1,iVar2 << 1);
  }
  else {
    FUN_7138d528(*(undefined4 *)(param_1[9] + 8));
    if (param_3 == 0) {
      iVar1 = 0;
      if (*param_1 != 0) {
        iVar1 = param_1[9];
      }
      if (*param_1 == 0 || iVar1 == 0) goto LAB_7136f554;
    }
    else {
LAB_7136f510:
      if (param_2 == (int *)0x0) goto LAB_7136f554;
      iVar1 = param_2[9];
      if (iVar1 == 0) {
        iVar1 = *param_2;
        iVar2 = param_2[2];
        goto LAB_7136f54c;
      }
    }
    FUN_7137cafc(*(undefined4 *)(iVar1 + 0xc));
  }
LAB_7136f554:
  FUN_7138e724(param_1 + 0xc);
  return 0;
}


// =========================================================================
// Function: FUN_71370744
// Entry: 0x71370744 | Size: 28 bytes
// =========================================================================

void FUN_71370744(void)

{
  DAT_70b42118 = DAT_70b466e0;
  return;
}


// =========================================================================
// Function: FUN_713709a8
// Entry: 0x713709a8 | Size: 24 bytes
// =========================================================================

void FUN_713709a8(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffe;
  return;
}


// =========================================================================
// Function: FUN_713709d8
// Entry: 0x713709d8 | Size: 76 bytes
// =========================================================================

void FUN_713709d8(int param_1)

{
  if ((*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) != 0)) {
    imp_glDeleteBuffers(1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// =========================================================================
// Function: FUN_71371b90
// Entry: 0x71371b90 | Size: 1328 bytes
// =========================================================================

void FUN_71371b90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_70b0e00c;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0x1c;
    *(undefined4 *)((int)param_1 + iVar2 + 4) = 0xfffffffe;
    *(undefined4 *)((int)param_1 + iVar2 + 8) = 1;
    *(undefined4 *)((int)param_1 + iVar2 + 0xc) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar2 + 0x10) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar2 + 0x14) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar2 + 0x18) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar2 + 0x1c) = 4;
    iVar2 = iVar1;
  } while (iVar1 != 0x2a0);
  iVar1 = 0x404;
  param_1[0xa9] = 0xfffffffe;
  param_1[0xaa] = 1;
  param_1[0xab] = 0x3f800000;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0x3f800000;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0x3f800000;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0x3f800000;
  param_1[0xbc] = 0xfffffffe;
  param_1[0xbd] = 1;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  param_1[0xbe] = 0x3f800000;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0x3f800000;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0x3f800000;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xce) = 1;
  param_1[0xcd] = 0x3f800000;
  param_1[0xcf] = 0xfffffffe;
  param_1[0xd0] = 1;
  param_1[0xd1] = 0x3f800000;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0x3f800000;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0x3f800000;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0x3f800000;
  param_1[0xe2] = 0xfffffffe;
  param_1[0xe3] = 1;
  *(undefined1 *)(param_1 + 0xe1) = 1;
  param_1[0xe4] = 0x3f800000;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0x3f800000;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0x3f800000;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0x3f800000;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  param_1[0xf8] = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xf5] = 0xffffffff;
  param_1[0xf6] = 0;
  *(undefined1 *)(param_1 + 0xf4) = 1;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 0x1c;
    *(undefined4 *)((int)param_1 + iVar2 + 0x3f0) = 0xfffffffe;
    *(undefined4 *)((int)param_1 + iVar2 + 0x3f4) = 1;
    *(undefined4 *)((int)param_1 + iVar2 + 0x3f8) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar2 + 0x3fc) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar2 + 0x400) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 0x1c;
    *(undefined4 *)((int)param_1 + iVar2 + 0x408) = 4;
    iVar2 = iVar3;
  } while (iVar3 != 0x16c);
  param_1[0x157] = 0xfffffffe;
  param_1[0x158] = 1;
  param_1[0x159] = 0x3f800000;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0x3f800000;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0x3f800000;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0x3f800000;
  param_1[0x16a] = 0xfffffffe;
  param_1[0x16b] = 1;
  *(undefined1 *)(param_1 + 0x169) = 1;
  param_1[0x16c] = 0x3f800000;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0x3f800000;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0x3f800000;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined1 *)(param_1 + 0x17c) = 1;
  param_1[0x17b] = 0x3f800000;
  param_1[0x17d] = 0xfffffffe;
  param_1[0x17e] = 1;
  param_1[0x17f] = 0x3f800000;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0x3f800000;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0x3f800000;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0x3f800000;
  param_1[400] = 0xfffffffe;
  param_1[0x191] = 1;
  *(undefined1 *)(param_1 + 399) = 1;
  param_1[0x192] = 0x3f800000;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0x3f800000;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0x3f800000;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0x3f800000;
  param_1[0x1a3] = 0xfffffffe;
  param_1[0x1a4] = 1;
  *(undefined1 *)(param_1 + 0x1a2) = 1;
  param_1[0x1a5] = 0x3f800000;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0x3f800000;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0x3f800000;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0x3f800000;
  param_1[0x1b6] = 0xfffffffe;
  param_1[0x1b7] = 1;
  *(undefined1 *)(param_1 + 0x1b5) = 1;
  param_1[0x1b8] = 0x3f800000;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0x3f800000;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0x3f800000;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0x3f800000;
  param_1[0x1c9] = 0xfffffffe;
  param_1[0x1ca] = 1;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  param_1[0x1cb] = 0x3f800000;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0x3f800000;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0x3f800000;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0x3f800000;
  param_1[0x1dc] = 0xfffffffe;
  param_1[0x1dd] = 1;
  *(undefined1 *)(param_1 + 0x1db) = 1;
  param_1[0x1de] = 0x3f800000;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0x3f800000;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0x3f800000;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0x3f800000;
  param_1[0x1ef] = 0xfffffffe;
  param_1[0x1f0] = 1;
  *(undefined1 *)(param_1 + 0x1ee) = 1;
  param_1[0x1f1] = 0x3f800000;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0x3f800000;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0x3f800000;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0x3f800000;
  param_1[0x202] = 0xfffffffe;
  param_1[0x203] = 1;
  *(undefined1 *)(param_1 + 0x201) = 1;
  param_1[0x204] = 0x3f800000;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0x3f800000;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0x3f800000;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0x3f800000;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  *(undefined1 *)(param_1 + 0x214) = 1;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  param_1[0xf8] = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xf5] = 0xffffffff;
  param_1[0xf6] = 0;
  return;
}


// =========================================================================
// Function: FUN_713720f8
// Entry: 0x713720f8 | Size: 120 bytes
// =========================================================================

undefined4 * FUN_713720f8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_70b0e00c;
  if ((undefined4 *)*DAT_70b42168 == param_1) {
    *DAT_70b42168 = 0;
    imp_glUseProgram(0);
  }
  imp_glDeleteProgram(param_1[0xfa]);
  if (*(char *)(param_1 + 0xf7) != '\0') {
    imp_glDeleteShader(param_1[0xf6]);
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    imp_glDeleteShader(param_1[0xf8]);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71372238
// Entry: 0x71372238 | Size: 124 bytes
// =========================================================================

void FUN_71372238(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_70b0e00c;
  if ((undefined4 *)*DAT_70b42168 == param_1) {
    *DAT_70b42168 = 0;
    imp_glUseProgram(0);
  }
  imp_glDeleteProgram(param_1[0xfa]);
  if (*(char *)(param_1 + 0xf7) != '\0') {
    imp_glDeleteShader(param_1[0xf6]);
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    imp_glDeleteShader(param_1[0xf8]);
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71372398
// Entry: 0x71372398 | Size: 32 bytes
// =========================================================================

void FUN_71372398(int param_1)

{
  if (*DAT_70b42168 == param_1) {
    return;
  }
  *DAT_70b42168 = param_1;
  imp_glUseProgram(*(undefined4 *)(param_1 + 1000));
  return;
}


// =========================================================================
// Function: FUN_7137240c
// Entry: 0x7137240c | Size: 1776 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7137240c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_46 [30];
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  if (*DAT_70b42168 != param_1) {
    *DAT_70b42168 = param_1;
    imp_glUseProgram(*(undefined4 *)(param_1 + 1000));
  }
  iVar6 = 0;
  iVar4 = 0x4c;
  do {
    iVar1 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),(&DAT_70b0e028)[iVar6]);
    if (iVar1 != -1) {
      imp_glUniform1i(iVar1,iVar6);
    }
    iVar4 = iVar4 + -4;
    iVar6 = iVar6 + 1;
  } while (iVar4 != 0);
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_ProjMatrix_700662da);
  *(undefined4 *)(param_1 + 0x2a4) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_ViewMatrix_70063b89);
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),&DAT_70064a64);
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_NormalMatrix_7006b6bb);
  *(undefined4 *)(param_1 + 0x388) = uVar2;
  iVar4 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_AmbientLightColor_70063066);
  *(int *)(param_1 + 4) = iVar4;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirLightDiffuseColor_7006a898);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirLightDirection_7006dae4);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirBackLightDirection_70064a6e)
  ;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirLight2DiffuseColor_7006fcb9)
  ;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirLight2Direction_7006a1ba);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirLight3DiffuseColor_700683e5)
  ;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DirLight3Direction_7006c47d);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_MaterialEmissive_70068cf6);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_MaterialAmbient_7006daf6);
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_MaterialDiffuse_70060fe1);
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_EnvMapCoefficient_70060ff1);
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_CameraPosition_700643e0);
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_FogDistances_7006fccf);
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_FogColor_70067c77);
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_ContrastMult_70061003);
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_ContrastAdd_700683fb);
  *(undefined4 *)(param_1 + 0x1c4) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_DetailTiling_70063078);
  *(undefined4 *)(param_1 + 0x1e0) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_AlphaModulate_70071f5f);
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_ColorInterp_7006db06);
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_RedGrade_7006b6c8);
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_GreenGrade_70070731);
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_BlueGrade_7006e380);
  *(undefined4 *)(param_1 + 0x26c) = uVar2;
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_WaterSpecs_7006e38a);
  *(int *)(param_1 + 0x288) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,1);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x55c) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,2);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x5a8) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,3);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x5f4) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,4);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x640) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,5);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x68c) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,6);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x6d8) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,7);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x724) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,8);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x770) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,9);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x7bc) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_Decal_dMatrix_70062600,10);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x808) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_SnowMult_70065936);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x3f0) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),&DAT_70068d07);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x40c) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_vFresnelParams_70068d0c);
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(undefined4 *)(param_1 + 0x428) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_HazeParams_7006a1cd);
  *(undefined4 *)(param_1 + 0x4b4) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_HazeColorHorizon_7006c490);
  *(undefined4 *)(param_1 + 0x4d0) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_HazeColorMid_7006c4a1);
  *(undefined4 *)(param_1 + 0x4ec) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_HazeColorZenith_70070f60);
  *(undefined4 *)(param_1 + 0x508) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_HazeDisabled_70065195);
  *(undefined4 *)(param_1 + 0x524) = uVar2;
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_RenderSnapshotRefl_7006db12);
  *(int *)(param_1 + 0x540) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_BodyRegions_70068d1b);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x444) = (int)uVar11;
  uVar7 = 0;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_TintColor_d_7006ebf2,0);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x460) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_TintColor_d_7006ebf2,1);
  uVar11 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(int *)(param_1 + 0x47c) = (int)uVar11;
  FUN_713738b0(auStack_46,(int)((ulonglong)uVar11 >> 0x20),s_TintColor_d_7006ebf2,2);
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),auStack_46);
  *(undefined4 *)(param_1 + 0x498) = uVar2;
  uVar2 = imp_glGetUniformLocation(*(undefined4 *)(param_1 + 1000),s_Bones_70063085);
  *(undefined4 *)(param_1 + 0x3d4) = uVar2;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x858) = 0;
  piVar5 = (int *)(param_1 + 4);
  do {
    if (-1 < *piVar5) {
      uVar3 = uVar3 | 1 << (uVar7 & 0xff);
      *(uint *)(param_1 + 0x858) = uVar3;
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 7;
  } while (uVar7 != 0x18);
  uVar7 = 0;
  *(uint *)(param_1 + 0x860) = 0;
  uVar9 = 0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  piVar5 = (int *)(param_1 + 0x3f0);
  do {
    if (-1 < *piVar5) {
      uVar8 = 1 << (uVar7 & 0xff);
      uVar10 = uVar7 - 0x20;
      if (-1 < (int)uVar10) {
        uVar8 = 0;
      }
      uVar9 = uVar9 | uVar8;
      *(uint *)(param_1 + 0x860) = uVar9;
      uVar8 = 1 >> (0x20 - uVar7 & 0xff);
      if (-1 < (int)uVar10) {
        uVar8 = 1 << (uVar10 & 0xff);
      }
      uVar3 = uVar3 | uVar8;
      *(uint *)(param_1 + 0x864) = uVar3;
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 7;
  } while (uVar7 != 0xd);
  uVar7 = ~*(uint *)(param_1 + 0x55c) >> 0x1f;
  *(uint *)(param_1 + 0x868) = uVar7;
  if (*(uint *)(param_1 + 0x5a8) < 0x80000000) {
    uVar7 = uVar7 | 2;
  }
  if (-1 < (int)*(uint *)(param_1 + 0x5a8)) {
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x5f4)) {
    uVar7 = uVar7 | 4;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x640)) {
    uVar7 = uVar7 | 8;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x68c)) {
    uVar7 = uVar7 | 0x10;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x6d8)) {
    uVar7 = uVar7 | 0x20;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x724)) {
    uVar7 = uVar7 | 0x40;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x770)) {
    uVar7 = uVar7 | 0x80;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x7bc)) {
    uVar7 = uVar7 | 0x100;
    *(uint *)(param_1 + 0x868) = uVar7;
  }
  if (-1 < *(int *)(param_1 + 0x808)) {
    *(uint *)(param_1 + 0x868) = uVar7 | 0x200;
  }
  if (*(undefined4 **)(param_1 + 0x86c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x86c))();
  }
  if (_ext___stack_chk_guard != iStack_28) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_713738b0
// Entry: 0x713738b0 | Size: 68 bytes
// =========================================================================

void FUN_713738b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  imp___vsprintf_chk(param_1,0,0x1e,param_3,&uStack_4);
  return;
}


// =========================================================================
// Function: FUN_71373928
// Entry: 0x71373928 | Size: 96 bytes
// =========================================================================

void FUN_71373928(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x1c;
  iVar2 = param_1 + 4;
  if (0x18 < param_2) {
    iVar2 = param_1 + 0x134;
  }
  *(int *)(iVar2 + 0x18) = param_4;
  iVar1 = imp_memcmp(iVar2 + 8,param_3,param_4 << 2);
  if (iVar1 != 0) {
    imp___aeabi_memcpy(iVar2 + 8,param_3,param_4 << 2);
    *(undefined4 *)(iVar2 + 4) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_713739d8
// Entry: 0x713739d8 | Size: 92 bytes
// =========================================================================

void FUN_713739d8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_2 * 0x4c + param_1;
  iVar2 = param_1 + 0x2a4;
  if (4 < param_2) {
    iVar2 = param_1 + 0x3e0;
  }
  iVar1 = imp_memcmp(iVar2 + 8,param_3,0x40);
  if (iVar1 != 0) {
    imp___aeabi_memcpy(iVar2 + 8,param_3,0x40);
    *(undefined1 *)(iVar2 + 0x48) = 1;
    *(undefined4 *)(iVar2 + 4) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_71373a84
// Entry: 0x71373a84 | Size: 304 bytes
// =========================================================================

void FUN_71373a84(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_70b46448;
  iVar2 = *DAT_70b46448;
  if (*(uint *)(iVar2 + 0x264) <= *(int *)(iVar2 + 0x324) + param_2 * 0x10 + 0x414U) {
    FUN_7139a77c();
    iVar2 = *piVar1;
  }
  *(undefined4 *)(iVar2 + 0x278) = 0x11;
  **(undefined4 **)(iVar2 + 0x274) = 0x11;
  iVar4 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar4 + 4;
  *(undefined4 *)(iVar4 + 4) = param_1;
  iVar4 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar4 + 4;
  *(undefined4 *)(iVar4 + 4) = 6;
  iVar4 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar4 + 4;
  *(int *)(iVar4 + 4) = param_2;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  imp___aeabi_memcpy(*(undefined4 *)(iVar2 + 0x274),param_3,param_2 * 0x10);
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + param_2 * 0x10;
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = 8;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
  uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar3;
  *(uint *)(iVar2 + 0x274) = uVar3;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71374494
// Entry: 0x71374494 | Size: 1800 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71374494(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  byte bVar16;
  int *piVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined4 uStack_1040;
  int iStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 auStack_1030 [1025];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uStack_1038 = param_3;
  uStack_1034 = param_2;
  if (*(int *)(param_1 + 1000) != 0) {
    imp_glDeleteProgram();
  }
  bVar19 = *(char *)(param_1 + 0x3dc) != '\0';
  iVar7 = 0;
  if (bVar19) {
    iVar7 = *(int *)(param_1 + 0x3d8);
  }
  if (bVar19 && iVar7 != 0) {
    imp_glDeleteShader();
  }
  bVar19 = *(char *)(param_1 + 0x3e4) != '\0';
  iVar7 = 0;
  if (bVar19) {
    iVar7 = *(int *)(param_1 + 0x3e0);
  }
  if (bVar19 && iVar7 != 0) {
    imp_glDeleteShader();
  }
  uVar8 = imp_glCreateProgram();
  *(undefined4 *)(param_1 + 1000) = uVar8;
  iVar7 = FUN_71885ba4(param_2,0);
  puVar6 = DAT_70b422f0;
  uVar9 = DAT_70b422f0[1];
  if (uVar9 != 0) {
    piVar17 = (int *)(DAT_70b422f0[2] + 4);
    do {
      if (piVar17[-1] == iVar7) {
        if (*piVar17 != -1) {
          *(int *)(param_1 + 0x3d8) = *piVar17;
          *(undefined1 *)(param_1 + 0x3dc) = 0;
          goto LAB_71374654;
        }
        break;
      }
      piVar17 = piVar17 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar8 = imp_glCreateShader(0x8b30);
  *(undefined1 *)(param_1 + 0x3dc) = 1;
  *(undefined4 *)(param_1 + 0x3d8) = uVar8;
  auStack_1030[0] = imp_strlen(param_2);
  imp_glShaderSource(uVar8,1,&uStack_1034,auStack_1030);
  imp_glCompileShader(*(undefined4 *)(param_1 + 0x3d8));
  iVar10 = FUN_71375610(param_1,*(undefined4 *)(param_1 + 0x3d8),0,uStack_1034);
  if (iVar10 != 0) {
    uVar9 = puVar6[1] + 1;
    uVar8 = *(undefined4 *)(param_1 + 0x3d8);
    if (*puVar6 < uVar9) {
      uVar11 = (uVar9 * 3 >> 1) + 3;
      *puVar6 = uVar11;
      if (puVar6[2] == 0) {
        uVar11 = imp_malloc(uVar11 * 8);
      }
      else {
        uVar11 = imp_realloc();
        uVar9 = puVar6[1] + 1;
      }
      iVar10 = uVar11 + uVar9 * 8;
      puVar6[1] = uVar9;
      puVar6[2] = uVar11;
    }
    else {
      puVar6[1] = uVar9;
      iVar10 = puVar6[2] + uVar9 * 8;
    }
    *(int *)(iVar10 + -8) = iVar7;
    *(undefined4 *)(iVar10 + -4) = uVar8;
    param_3 = uStack_1038;
LAB_71374654:
    iVar7 = FUN_71885ba4(param_3,0);
    puVar6 = DAT_70b422f4;
    uVar9 = DAT_70b422f4[1];
    if (uVar9 != 0) {
      piVar17 = (int *)(DAT_70b422f4[2] + 4);
      do {
        if (piVar17[-1] == iVar7) {
          iVar10 = *piVar17;
          if (iVar10 != -1) {
            *(int *)(param_1 + 0x3e0) = iVar10;
            *(undefined1 *)(param_1 + 0x3e4) = 0;
            goto LAB_71374798;
          }
          break;
        }
        piVar17 = piVar17 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar8 = imp_glCreateShader(0x8b31);
    *(undefined1 *)(param_1 + 0x3e4) = 1;
    *(undefined4 *)(param_1 + 0x3e0) = uVar8;
    auStack_1030[0] = imp_strlen(param_3);
    imp_glShaderSource(uVar8,1,&uStack_1038,auStack_1030);
    imp_glCompileShader(*(undefined4 *)(param_1 + 0x3e0));
    iVar10 = FUN_71375610(param_1,*(undefined4 *)(param_1 + 0x3e0),1,uStack_1038);
    if (iVar10 != 0) {
      uVar9 = puVar6[1] + 1;
      uVar8 = *(undefined4 *)(param_1 + 0x3e0);
      if (*puVar6 < uVar9) {
        uVar11 = (uVar9 * 3 >> 1) + 3;
        *puVar6 = uVar11;
        if (puVar6[2] == 0) {
          uVar11 = imp_malloc(uVar11 * 8);
        }
        else {
          uVar11 = imp_realloc();
          uVar9 = puVar6[1] + 1;
        }
        iVar10 = uVar11 + uVar9 * 8;
        puVar6[1] = uVar9;
        puVar6[2] = uVar11;
      }
      else {
        puVar6[1] = uVar9;
        iVar10 = puVar6[2] + uVar9 * 8;
      }
      *(int *)(iVar10 + -8) = iVar7;
      *(undefined4 *)(iVar10 + -4) = uVar8;
      iVar10 = *(int *)(param_1 + 0x3e0);
LAB_71374798:
      imp_glAttachShader(*(undefined4 *)(param_1 + 1000),iVar10);
      imp_glAttachShader(*(undefined4 *)(param_1 + 1000),*(undefined4 *)(param_1 + 0x3d8));
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),0,s_Position_70061010);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),1,s_TexCoord0_70067c80);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),2,s_Normal_700673b7);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),3,s_GlobalColor_70067c8a);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),4,s_BoneWeight_70064a84);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),5,s_BoneIndices_7006ebfe);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),6,s_Color2_70061019);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),7,s_TexBlend_70071f6d);
      imp_glBindAttribLocation(*(undefined4 *)(param_1 + 1000),8,s_PedData_70066ac0);
      imp_glLinkProgram(*(undefined4 *)(param_1 + 1000));
      imp_glGetProgramiv(*(undefined4 *)(param_1 + 1000),0x8b82,&iStack_103c);
      if (iStack_103c == 0) {
        pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb378);
        if (*pcVar12 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb368);
          *(undefined1 *)((int)puVar14 + 0x16) = 1;
          uVar4 = DAT_70075498;
          uVar3 = DAT_70075494;
          uVar2 = DAT_70075490;
          uVar8 = DAT_7007548c;
          *puVar14 = DAT_70075488;
          puVar14[1] = uVar8;
          puVar14[2] = uVar2;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          *(undefined2 *)(puVar14 + 5) = DAT_7007549c;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71376198,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb378);
          *puVar15 = 1;
        }
        iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb368);
        if (*(char *)(iVar7 + 0x16) != '\0') {
          uVar9 = 0;
          uVar11 = 0;
          do {
            iVar10 = (uVar9 & 7) * 8;
            uVar18 = iVar10 - 0x20;
            bVar16 = (byte)(0x2137eb3b >> iVar10) |
                     (byte)(0x3137030b << ((uVar9 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar16 = (byte)(0x3137030b >> (uVar18 & 0xff));
            }
            *(byte *)(iVar7 + uVar9) = *(byte *)(iVar7 + uVar9) ^ bVar16;
            bVar20 = 0xfffffffe < uVar9;
            bVar19 = uVar11 == 0;
            bVar1 = (0x14 < uVar9) <= uVar11;
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 + bVar20;
          } while (bVar19 && bVar1);
          *(undefined1 *)(iVar7 + 0x16) = 0;
        }
        FUN_7188543c();
        pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb398);
        if (*pcVar12 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb388);
          *(undefined1 *)((int)puVar14 + 0x17) = 1;
          uVar4 = DAT_700754b0;
          uVar3 = DAT_700754ac;
          uVar2 = DAT_700754a8;
          uVar8 = DAT_700754a4;
          *puVar14 = DAT_700754a0;
          puVar14[1] = uVar8;
          puVar14[2] = uVar2;
          puVar14[3] = uVar3;
          puVar14[4] = uVar4;
          uVar5 = DAT_700754b6;
          *(undefined2 *)(puVar14 + 5) = DAT_700754b4;
          *(undefined1 *)((int)puVar14 + 0x16) = uVar5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_713761d0,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb398);
          *puVar15 = 1;
        }
        iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb388);
        if (*(char *)(iVar7 + 0x17) != '\0') {
          uVar9 = 0;
          uVar11 = 0;
          do {
            iVar10 = (uVar9 & 7) * 8;
            uVar18 = iVar10 - 0x20;
            bVar16 = (byte)(0x69038921 >> iVar10) |
                     (byte)(0x31f9cd89 << ((uVar9 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar18) {
              bVar16 = (byte)(0x31f9cd89 >> (uVar18 & 0xff));
            }
            *(byte *)(iVar7 + uVar9) = *(byte *)(iVar7 + uVar9) ^ bVar16;
            bVar20 = 0xfffffffe < uVar9;
            bVar19 = uVar11 == 0;
            bVar1 = (0x15 < uVar9) <= uVar11;
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 + bVar20;
          } while (bVar19 && bVar1);
          *(undefined1 *)(iVar7 + 0x17) = 0;
        }
        FUN_7188543c(iVar7,*(undefined4 *)(param_1 + 0x3ec),*(undefined4 *)(param_1 + 0x854));
        imp___aeabi_memclr8(auStack_1030,0x1000);
        uStack_1040 = 0;
        imp_glGetProgramInfoLog(*(undefined4 *)(param_1 + 1000),0x1000,&uStack_1040,auStack_1030);
        pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3b8);
        if (*pcVar12 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3a8);
          *puVar14 = 0x1493a80;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_712f6ab0,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3b8);
          *puVar15 = 1;
        }
        pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3a8);
        if (pbVar13[3] != 0) {
          pbVar13[3] = 0;
          *pbVar13 = *pbVar13 ^ 0xa5;
          pbVar13[1] = pbVar13[1] ^ 0x49;
          pbVar13[2] = pbVar13[2] ^ 0x49;
        }
        FUN_7188543c(pbVar13,auStack_1030);
        FUN_7138ac04(uStack_1034);
        FUN_7138ac04(uStack_1038);
      }
      FUN_7137240c(param_1);
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_2c);
}


// =========================================================================
// Function: FUN_71375610
// Entry: 0x71375610 | Size: 1192 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71375610(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_434 [4];
  int iStack_430;
  undefined1 auStack_42c [1024];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  imp_glGetShaderiv(param_2,0x8b81,&iStack_430);
  if (iStack_430 != 0) goto LAB_713758f4;
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3d8);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3c8);
    *(undefined1 *)((int)puVar12 + 0x19) = 1;
    uVar7 = DAT_700754cc;
    uVar6 = DAT_700754c8;
    uVar5 = DAT_700754c4;
    uVar4 = DAT_700754c0;
    uVar3 = DAT_700754bc;
    *puVar12 = DAT_700754b8;
    puVar12[1] = uVar3;
    puVar12[2] = uVar4;
    puVar12[3] = uVar5;
    puVar12[4] = uVar6;
    puVar12[5] = uVar7;
    *(undefined1 *)(puVar12 + 6) = DAT_700754d0;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71376208,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3d8);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3c8);
  if (*(char *)(iVar9 + 0x19) != '\0') {
    uVar14 = 0;
    uVar16 = 0;
    do {
      iVar18 = (uVar14 & 7) * 8;
      uVar19 = iVar18 - 0x20;
      bVar17 = (byte)(0x95499f39 >> iVar18) |
               (byte)(0x3fe1bd3b << ((uVar14 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar19) {
        bVar17 = (byte)(0x3fe1bd3b >> (uVar19 & 0xff));
      }
      *(byte *)(iVar9 + uVar14) = *(byte *)(iVar9 + uVar14) ^ bVar17;
      bVar20 = 0xfffffffe < uVar14;
      bVar1 = uVar16 == 0;
      bVar2 = (0x17 < uVar14) <= uVar16;
      uVar14 = uVar14 + 1;
      uVar16 = uVar16 + bVar20;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x19) = 0;
  }
  if (param_3 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb418);
    if (*pcVar8 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb408);
      *puVar12 = 0xf031f669;
      *(undefined1 *)((int)puVar12 + 6) = 1;
      *(undefined2 *)(puVar12 + 1) = 0xbd57;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7137626c,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb418);
      *puVar13 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb408);
    pbVar11 = pbVar10 + 6;
    if (*pbVar11 != 0) {
      *pbVar10 = *pbVar10 ^ 0x39;
      bVar17 = 0xbd;
      pbVar10[1] = pbVar10[1] ^ 0x9f;
      pbVar10[2] = pbVar10[2] ^ 0x49;
      pbVar10[3] = pbVar10[3] ^ 0x95;
      pbVar10[4] = pbVar10[4] ^ 0x3b;
      pbVar15 = pbVar10 + 5;
      goto LAB_71375814;
    }
  }
  else {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3f8);
    if (*pcVar8 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3e8);
      *puVar12 = 0xe13bfa6f;
      *(undefined1 *)((int)puVar12 + 7) = 1;
      *(undefined4 *)((int)puVar12 + 3) = 0xe1c55ee1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71376244,puVar12,&DAT_70b0e000);
      puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3f8);
      *puVar13 = 1;
    }
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb3e8);
    pbVar11 = pbVar10 + 7;
    if (*pbVar11 != 0) {
      *pbVar10 = *pbVar10 ^ 0x39;
      bVar17 = 0xe1;
      pbVar10[1] = pbVar10[1] ^ 0x9f;
      pbVar10[2] = pbVar10[2] ^ 0x49;
      pbVar10[3] = pbVar10[3] ^ 0x95;
      pbVar10[4] = pbVar10[4] ^ 0x3b;
      pbVar10[5] = pbVar10[5] ^ 0xbd;
      pbVar15 = pbVar10 + 6;
LAB_71375814:
      *pbVar11 = 0;
      *pbVar15 = *pbVar15 ^ bVar17;
    }
  }
  FUN_7188543c(iVar9,pbVar10,*(undefined4 *)(param_1 + 0x3ec),*(undefined4 *)(param_1 + 0x854));
  FUN_7138ac04(param_4);
  imp_glGetShaderInfoLog(param_2,0x400,auStack_434,auStack_42c);
  pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb438);
  if (*pcVar8 == '\0') {
    puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb428);
    *(undefined1 *)((int)puVar12 + 0x12) = 1;
    uVar5 = DAT_700754e4;
    uVar4 = DAT_700754e0;
    uVar3 = DAT_700754dc;
    *puVar12 = DAT_700754d8;
    puVar12[1] = uVar3;
    puVar12[2] = uVar4;
    puVar12[3] = uVar5;
    *(undefined2 *)(puVar12 + 4) = DAT_700754e8;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71376294,puVar12,&DAT_70b0e000);
    puVar13 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb438);
    *puVar13 = 1;
  }
  iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb428);
  if (*(char *)(iVar9 + 0x12) != '\0') {
    uVar14 = 0;
    uVar16 = 0;
    do {
      iVar18 = (uVar14 & 7) * 8;
      uVar19 = iVar18 - 0x20;
      bVar17 = (byte)(0x6193d1d9 >> iVar18) |
               (byte)(-0x66506ca9 << ((uVar14 & 7) * -8 + 0x20 & 0xff));
      if (-1 < (int)uVar19) {
        bVar17 = (byte)(0x99af9357 >> (uVar19 & 0xff));
      }
      *(byte *)(iVar9 + uVar14) = *(byte *)(iVar9 + uVar14) ^ bVar17;
      bVar20 = 0xfffffffe < uVar14;
      bVar1 = uVar16 == 0;
      bVar2 = (0x10 < uVar14) <= uVar16;
      uVar14 = uVar14 + 1;
      uVar16 = uVar16 + bVar20;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar9 + 0x12) = 0;
  }
  FUN_7188543c(iVar9,auStack_42c);
LAB_713758f4:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_71376ae4
// Entry: 0x71376ae4 | Size: 136 bytes
// =========================================================================

void FUN_71376ae4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (&DAT_70b42180)[iVar2];
    if (iVar1 != 0) {
      param_1 = (&DAT_70b421d0)[iVar2];
    }
    if (iVar1 != 0 && param_1 != iVar1) {
      if (iVar2 != *DAT_70b42224) {
        imp_glActiveTexture(iVar2 + 0x84c0);
        *DAT_70b42224 = iVar2;
        iVar1 = (&DAT_70b42180)[iVar2];
      }
      imp_glBindTexture(0xde1,iVar1);
      param_1 = (&DAT_70b42180)[iVar2];
      (&DAT_70b421d0)[iVar2] = param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  return;
}


// =========================================================================
// Function: FUN_71376c3c
// Entry: 0x71376c3c | Size: 216 bytes
// =========================================================================

undefined4 * FUN_71376c3c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 10;
  *param_1 = &PTR_FUN_70b0e07c;
  iVar1 = 0;
  do {
    if (((&DAT_70b421d0)[iVar1] != 0) && ((&DAT_70b421d0)[iVar1] == *piVar2)) {
      if (iVar1 != *DAT_70b42224) {
        imp_glActiveTexture(iVar1 + 0x84c0);
        *DAT_70b42224 = iVar1;
      }
      imp_glBindTexture(0xde1,0);
      (&DAT_70b421d0)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x15);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_70b42180 + iVar1) == *piVar2) {
      *(undefined4 *)((int)&DAT_70b42180 + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x50);
  imp_glDeleteTextures(1,piVar2);
  return param_1;
}


// =========================================================================
// Function: FUN_71376e20
// Entry: 0x71376e20 | Size: 220 bytes
// =========================================================================

void FUN_71376e20(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 10;
  *param_1 = &PTR_FUN_70b0e07c;
  iVar1 = 0;
  do {
    if (((&DAT_70b421d0)[iVar1] != 0) && ((&DAT_70b421d0)[iVar1] == *piVar2)) {
      if (iVar1 != *DAT_70b42224) {
        imp_glActiveTexture(iVar1 + 0x84c0);
        *DAT_70b42224 = iVar1;
      }
      imp_glBindTexture(0xde1,0);
      (&DAT_70b421d0)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x15);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_70b42180 - iVar1) == *piVar2) {
      *(undefined4 *)((int)&DAT_70b42180 - iVar1) = 0;
    }
    iVar1 = iVar1 + -4;
  } while (iVar1 != -0x50);
  imp_glDeleteTextures(1,piVar2);
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_7137725c
// Entry: 0x7137725c | Size: 196 bytes
// =========================================================================

void FUN_7137725c(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  (&DAT_70b46318)[param_2] = param_1;
  piVar1 = DAT_70b46448;
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 0x18;
  **(undefined4 **)(iVar3 + 0x274) = 0x18;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = param_1;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(int **)(iVar3 + 0x274) = param_2;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
  uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar2;
  *(uint *)(iVar3 + 0x274) = uVar2;
  FUN_7139bc08(iVar3);
  if (*(int *)(iVar3 + 0x274) + 0x401U <= *(uint *)(iVar3 + 0x264)) {
    return;
  }
  FUN_7139a77c(iVar3);
  return;
}


// =========================================================================
// Function: FUN_713773d0
// Entry: 0x713773d0 | Size: 176 bytes
// =========================================================================

void FUN_713773d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_70b46448;
  *(undefined4 *)(iVar2 + 0x278) = 0x36;
  **(undefined4 **)(iVar2 + 0x274) = 0x36;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_1;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_2;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_3;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(char **)(iVar3 + 4) = s_Unknown_7006305d;
  uVar1 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar1;
  *(uint *)(iVar2 + 0x274) = uVar1;
  FUN_7139bc08(iVar2);
  if (*(int *)(iVar2 + 0x274) + 0x401U <= *(uint *)(iVar2 + 0x264)) {
    return;
  }
  FUN_7139a77c(iVar2);
  return;
}


// =========================================================================
// Function: FUN_7137793c
// Entry: 0x7137793c | Size: 28 bytes
// =========================================================================

void FUN_7137793c(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}


// =========================================================================
// Function: FUN_71377970
// Entry: 0x71377970 | Size: 76 bytes
// =========================================================================

void FUN_71377970(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) != 0)) {
    imp_glDeleteBuffers(1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// =========================================================================
// Function: FUN_71378b20
// Entry: 0x71378b20 | Size: 92 bytes
// =========================================================================

undefined4 * FUN_71378b20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = imp_strdup(param_2);
  uVar2 = imp_strdup(param_3);
  uVar1 = FUN_7138aa40(uVar1,uVar2,0,0);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}


// =========================================================================
// Function: FUN_71378be8
// Entry: 0x71378be8 | Size: 392 bytes
// =========================================================================

void FUN_71378be8(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70b422a8 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b422a8), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5a0,param_2);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb590);
      *(undefined1 *)(puVar11 + 6) = 1;
      uVar7 = DAT_7007562c;
      uVar6 = DAT_70075628;
      uVar5 = DAT_70075624;
      uVar4 = DAT_70075620;
      uVar3 = DAT_7007561c;
      *puVar11 = DAT_70075618;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7137a708,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5a0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb590);
    if (*(char *)(iVar9 + 0x18) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x9f490ddb >> iVar15) |
                (byte)(-0x20504abf << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xdfafb541 >> (uVar16 & 0xff));
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
    DAT_70b422a4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b422a8);
  }
                    /* WARNING: Could not recover jumptable at 0x71378c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b422a4)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_71379008
// Entry: 0x71379008 | Size: 364 bytes
// =========================================================================

void FUN_71379008(void)

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
  if (((DAT_70b422b0 & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b422b0), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5c0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5b0);
      *(undefined1 *)((int)puVar8 + 0x21) = 1;
      uVar5 = DAT_7007563c;
      uVar4 = DAT_70075638;
      uVar3 = DAT_70075634;
      *puVar8 = DAT_70075630;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      uVar5 = DAT_7007564c;
      uVar4 = DAT_70075648;
      uVar3 = DAT_70075644;
      puVar8[4] = DAT_70075640;
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      puVar8[7] = uVar5;
      *(undefined1 *)(puVar8 + 8) = DAT_70075650;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7137a740,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5c0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5b0);
    if (*(char *)(iVar6 + 0x21) != '\0') {
      uVar10 = 0;
      uVar11 = 0;
      do {
        iVar12 = (uVar10 & 7) * 8;
        uVar13 = iVar12 - 0x20;
        bVar14 = (byte)(0x69abdfd1 >> iVar12) |
                 (byte)(-0xa0eecaf << ((uVar10 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar13) {
          bVar14 = (byte)(0xf5f11351 >> (uVar13 & 0xff));
        }
        *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) ^ bVar14;
        bVar15 = 0xfffffffe < uVar10;
        bVar1 = uVar11 == 0;
        bVar2 = (0x1f < uVar10) <= uVar11;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + bVar15;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x21) = 0;
    }
    DAT_70b422ac = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar6,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b422b0);
  }
                    /* WARNING: Could not recover jumptable at 0x71379034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b422ac)();
  return;
}


// =========================================================================
// Function: FUN_7137940c
// Entry: 0x7137940c | Size: 388 bytes
// =========================================================================

void FUN_7137940c(undefined4 param_1)

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
  if (((DAT_70b422b8 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b422b8), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5e0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5d0);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_70075668;
      uVar5 = DAT_70075664;
      uVar4 = DAT_70075660;
      uVar3 = DAT_7007565c;
      *puVar10 = DAT_70075658;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007567c;
      uVar5 = DAT_70075678;
      uVar4 = DAT_70075674;
      uVar3 = DAT_70075670;
      puVar10[5] = DAT_7007566c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_70075680;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7137a790,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5e0);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5d0);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x19a31f5d >> iVar14) |
                (byte)(0x1b75bd11 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x1b75bd11 >> (uVar15 & 0xff));
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
    DAT_70b422b4 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b422b8);
  }
                    /* WARNING: Could not recover jumptable at 0x71379438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b422b4)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71379828
// Entry: 0x71379828 | Size: 1128 bytes
// =========================================================================

void FUN_71379828(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*DAT_70b42268 != 0) {
    bVar12 = *(char *)(DAT_70b4645c + 0xb) != '\0';
    iVar2 = 0;
    if (bVar12) {
      iVar2 = DAT_700bb4e8;
    }
    if (bVar12 && iVar2 != 0) {
      DAT_700bb4ec = 0;
      DAT_700bb4e8 = 0;
      iVar10 = *DAT_70b46448;
      *(undefined4 *)(iVar10 + 0x278) = 0x27;
      **(undefined4 **)(iVar10 + 0x274) = 0x27;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = 0;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = 0;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(char **)(iVar2 + 4) = s_Unknown_7006305d;
      uVar3 = *(int *)(iVar10 + 0x274) + 0x13U & 0xfffffff0;
      *(uint *)(iVar10 + 0x270) = uVar3;
      *(uint *)(iVar10 + 0x274) = uVar3;
      FUN_7139bc08(iVar10);
      if (*(uint *)(iVar10 + 0x264) < *(int *)(iVar10 + 0x274) + 0x401U) {
        FUN_7139a77c(iVar10);
        return;
      }
    }
    return;
  }
  if (*DAT_70b42270 == '\0') {
    FUN_7137a294();
  }
  if ((*(byte *)(DAT_70b466e4 + 3) & 0x10) == 0) {
    if (param_1 == 0) {
      FUN_7137940c();
    }
  }
  else {
    FUN_7137940c();
  }
  puVar1 = DAT_70b466e0;
  uVar11 = *DAT_70b466e0;
  FUN_71379008();
  uVar3 = *puVar1;
  *puVar1 = uVar11;
  if (*(char *)(DAT_70b4645c + 0xb) != '\0') {
    if ((uVar3 & 1) == 0) {
      if (DAT_700bb4e8 == 0) goto LAB_71379b34;
      DAT_700bb4ec = 0;
      DAT_700bb4e8 = 0;
      iVar10 = *DAT_70b46448;
      *(undefined4 *)(iVar10 + 0x278) = 0x27;
      **(undefined4 **)(iVar10 + 0x274) = 0x27;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = 0;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    else {
      uVar6 = 0x3f800000;
      if ((uVar3 & 4) != 0) {
        uVar6 = FUN_713a9e3c(0x3f800000);
      }
      uVar7 = 0x3f000000;
      if ((uVar3 & 0x200) == 0) {
        uVar7 = 0x3e4ccccd;
      }
      uVar8 = 0x3f4ccccd;
      if ((uVar3 & 0x800) == 0) {
        uVar8 = uVar7;
      }
      uVar6 = FUN_71ba21e8(uVar6,uVar8);
      uVar3 = uVar3 & 0xfffffffe;
      if ((DAT_700bb4e8 == 4) && (iVar2 = FUN_71ba2cf0(DAT_700bb4ec,uVar6), iVar2 != 0))
      goto LAB_71379b34;
      DAT_700bb4e8 = 4;
      iVar10 = *DAT_70b46448;
      DAT_700bb4ec = uVar6;
      *(undefined4 *)(iVar10 + 0x278) = 0x27;
      **(undefined4 **)(iVar10 + 0x274) = 0x27;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = 4;
      iVar2 = *(int *)(iVar10 + 0x274);
      *(int *)(iVar10 + 0x274) = iVar2 + 4;
      *(undefined4 *)(iVar2 + 4) = uVar6;
    }
    iVar2 = *(int *)(iVar10 + 0x274);
    *(int *)(iVar10 + 0x274) = iVar2 + 4;
    *(char **)(iVar2 + 4) = s_Unknown_7006305d;
    uVar11 = *(int *)(iVar10 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar10 + 0x270) = uVar11;
    *(uint *)(iVar10 + 0x274) = uVar11;
    FUN_7139bc08(iVar10);
    if (*(uint *)(iVar10 + 0x264) < *(int *)(iVar10 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar10);
    }
  }
LAB_71379b34:
  uVar11 = DAT_70b466fc;
  iVar2 = *DAT_70b4226c;
  if (iVar2 != 0) {
    uVar9 = *(uint *)(iVar2 + 8);
    bVar12 = uVar9 == uVar3;
    if (bVar12) {
      uVar9 = *(uint *)(iVar2 + 0x18);
    }
    if (bVar12 && uVar9 == DAT_70b466fc) {
      FUN_71378be8(iVar2,0);
      return;
    }
  }
  uVar9 = uVar3 & 0xff;
  iVar2 = *(int *)(DAT_70b42260 + uVar9 * 4);
  while( true ) {
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)thunk_MwhHq(0x1c);
      puVar5[6] = uVar11;
      puVar5[2] = uVar3;
      FUN_7138a900(uVar3,uVar11,&uStack_24,&uStack_28);
      uVar6 = FUN_71885ba4(uStack_24,0);
      puVar5[3] = uVar6;
      uVar6 = FUN_71885ba4(uStack_28,0);
      puVar5[4] = uVar6;
      uVar6 = imp_strdup(uStack_24);
      uVar7 = imp_strdup(uStack_28);
      uVar6 = FUN_7138aa40(uVar6,uVar7,uVar3,uVar11);
      *puVar5 = uVar6;
      *(undefined1 *)(puVar5 + 1) = 1;
      puVar5[5] = *(undefined4 *)(DAT_70b42260 + uVar9 * 4);
      *DAT_70b4226c = (int)puVar5;
      *(undefined4 **)(DAT_70b42260 + uVar9 * 4) = puVar5;
      FUN_71378be8(puVar5);
      return;
    }
    uVar4 = *(uint *)(iVar2 + 8);
    bVar12 = uVar4 == uVar3;
    if (bVar12) {
      uVar4 = *(uint *)(iVar2 + 0x18);
    }
    if (bVar12 && uVar4 == DAT_70b466fc) break;
    iVar2 = *(int *)(iVar2 + 0x14);
  }
  FUN_71378be8(iVar2,1);
  *DAT_70b4226c = iVar2;
  return;
}


// =========================================================================
// Function: FUN_7137a294
// Entry: 0x7137a294 | Size: 368 bytes
// =========================================================================

void FUN_7137a294(void)

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
  if (((DAT_70b42278 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b42278), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb600);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5f0);
      *(undefined1 *)((int)puVar11 + 0x1b) = 1;
      uVar7 = DAT_7007569c;
      uVar6 = DAT_70075698;
      uVar5 = DAT_70075694;
      uVar4 = DAT_70075690;
      uVar3 = DAT_7007568c;
      *puVar11 = DAT_70075688;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar8 = DAT_700756a2;
      *(undefined2 *)(puVar11 + 6) = DAT_700756a0;
      *(undefined1 *)((int)puVar11 + 0x1a) = uVar8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7137a7e0,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb600);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb5f0);
    if (*(char *)(iVar9 + 0x1b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar17 = (byte)(0x1d07abc9 >> iVar15) |
                 (byte)(-0x4c7a4add << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar17 = (byte)(0xb385b523 >> (uVar16 & 0xff));
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
    DAT_70b42274 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b42278);
  }
                    /* WARNING: Could not recover jumptable at 0x7137a2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b42274)();
  return;
}


// =========================================================================
// Function: FUN_7137bc44
// Entry: 0x7137bc44 | Size: 160 bytes
// =========================================================================

void FUN_7137bc44(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = DAT_70b42144;
  piVar3 = DAT_70b42140;
  piVar2 = DAT_70b4213c;
  piVar1 = DAT_70b42138;
  iVar6 = *DAT_70b42138;
  if (iVar6 != 0) {
    iVar5 = *DAT_70b4213c;
    iVar7 = *DAT_70b42144;
    if (*DAT_70b42140 < iVar7) {
      if (iVar5 != 0) {
        imp_free();
        iVar7 = *piVar4;
      }
      *piVar3 = (iVar7 << 2) / 3;
      iVar5 = imp_malloc();
      *piVar2 = iVar5;
      iVar7 = *piVar4;
      iVar6 = *piVar1;
    }
    imp___aeabi_memcpy(iVar5,iVar6,iVar7);
    *piVar1 = *piVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7137bdd0
// Entry: 0x7137bdd0 | Size: 208 bytes
// =========================================================================

undefined4 FUN_7137bdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = thunk_MwhHq(0x18);
  FUN_713709a8(uVar1,param_1);
  *DAT_70b422bc = uVar1;
  iVar4 = *DAT_70b46448;
  *(undefined4 *)(iVar4 + 0x278) = 6;
  **(undefined4 **)(iVar4 + 0x274) = 6;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(char **)(iVar2 + 4) = s_IndexCreate_700673c8;
  uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar4 + 0x270) = uVar3;
  *(uint *)(iVar4 + 0x274) = uVar3;
  FUN_7139bc08(iVar4);
  if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar4);
  }
  FUN_7137bfa4(uVar1,param_2,param_3);
  return uVar1;
}


// =========================================================================
// Function: FUN_7137bfa4
// Entry: 0x7137bfa4 | Size: 276 bytes
// =========================================================================

void FUN_7137bfa4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  FUN_7137c4a8();
  piVar1 = DAT_70b46448;
  iVar2 = *DAT_70b46448;
  if (*(uint *)(iVar2 + 0x264) <= param_3 + *(int *)(iVar2 + 0x324) + 0x400U) {
    FUN_7139a77c();
    iVar2 = *piVar1;
  }
  *(undefined4 *)(iVar2 + 0x278) = 7;
  **(undefined4 **)(iVar2 + 0x274) = 7;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = param_1;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(int **)(iVar2 + 0x274) = param_3;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  imp___aeabi_memcpy(*(undefined4 *)(iVar2 + 0x274),param_2,param_3);
  *(uint *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + (param_3 + 3U & 0xfffffffc);
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
  uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar3;
  *(uint *)(iVar2 + 0x274) = uVar3;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7137c4a8
// Entry: 0x7137c4a8 | Size: 208 bytes
// =========================================================================

void FUN_7137c4a8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*DAT_70b4643c != 0) {
    FUN_7138e188(0);
  }
  if (*DAT_70b422bc != param_1) {
    *DAT_70b422bc = param_1;
    iVar3 = *DAT_70b46448;
    *(undefined4 *)(iVar3 + 0x278) = 5;
    **(undefined4 **)(iVar3 + 0x274) = 5;
    iVar1 = *(int *)(iVar3 + 0x274);
    *(int *)(iVar3 + 0x274) = iVar1 + 4;
    *(int *)(iVar1 + 4) = param_1;
    iVar1 = *(int *)(iVar3 + 0x274);
    *(int *)(iVar3 + 0x274) = iVar1 + 4;
    *(char **)(iVar1 + 4) = s_Unknown_7006305d;
    uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar3 + 0x270) = uVar2;
    *(uint *)(iVar3 + 0x274) = uVar2;
    FUN_7139bc08(iVar3);
    if (*(int *)(iVar3 + 0x274) + 0x401U <= *(uint *)(iVar3 + 0x264)) {
      return;
    }
    FUN_7139a77c(iVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7137c664
// Entry: 0x7137c664 | Size: 288 bytes
// =========================================================================

void FUN_7137c664(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_70b46448;
  if (*DAT_70b422bc == param_1) {
    *DAT_70b422bc = 0;
    iVar4 = *piVar1;
    *(undefined4 *)(iVar4 + 0x278) = 5;
    **(undefined4 **)(iVar4 + 0x274) = 5;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(undefined4 *)(iVar2 + 4) = param_2;
    uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar4 + 0x270) = uVar3;
    *(uint *)(iVar4 + 0x274) = uVar3;
    FUN_7139bc08(iVar4);
    if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar4);
    }
  }
  iVar4 = *piVar1;
  *(undefined4 *)(iVar4 + 0x278) = 9;
  **(undefined4 **)(iVar4 + 0x274) = 9;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(int *)(iVar2 + 4) = param_1;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(undefined4 *)(iVar2 + 4) = param_2;
  uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar4 + 0x270) = uVar3;
  *(uint *)(iVar4 + 0x274) = uVar3;
  FUN_7139bc08(iVar4);
  if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar4);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7137c84c
// Entry: 0x7137c84c | Size: 400 bytes
// =========================================================================

void FUN_7137c84c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = DAT_70b46448;
  if (*DAT_70b422bc != 0) {
    *DAT_70b422bc = 0;
    iVar2 = *piVar1;
    *(undefined4 *)(iVar2 + 0x278) = 5;
    **(undefined4 **)(iVar2 + 0x274) = 5;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar1;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar1;
    **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
    uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar2 + 0x270) = uVar3;
    *(uint *)(iVar2 + 0x274) = uVar3;
    FUN_7139bc08(iVar2);
    if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar2);
    }
  }
  iVar2 = *piVar1;
  if (*(uint *)(iVar2 + 0x264) <= param_2 + *(int *)(iVar2 + 0x324) + 0x400U) {
    FUN_7139a77c();
    iVar2 = *piVar1;
  }
  *(undefined4 *)(iVar2 + 0x278) = 8;
  **(undefined4 **)(iVar2 + 0x274) = 8;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(int **)(iVar2 + 0x274) = param_2;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  imp___aeabi_memcpy(*(undefined4 *)(iVar2 + 0x274),param_1,param_2);
  *(uint *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + (param_2 + 3U & 0xfffffffc);
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
  uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar3;
  *(uint *)(iVar2 + 0x274) = uVar3;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7137cafc
// Entry: 0x7137cafc | Size: 172 bytes
// =========================================================================

void FUN_7137cafc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*DAT_70b422bc == param_1) {
    return;
  }
  *DAT_70b422bc = param_1;
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 5;
  **(undefined4 **)(iVar3 + 0x274) = 5;
  iVar2 = *(int *)(iVar3 + 0x274);
  *(int *)(iVar3 + 0x274) = iVar2 + 4;
  *(int *)(iVar2 + 4) = param_1;
  iVar2 = *(int *)(iVar3 + 0x274);
  *(int *)(iVar3 + 0x274) = iVar2 + 4;
  *(char **)(iVar2 + 4) = s_Unknown_7006305d;
  uVar1 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar1;
  *(uint *)(iVar3 + 0x274) = uVar1;
  FUN_7139bc08(iVar3);
  if (*(int *)(iVar3 + 0x274) + 0x401U <= *(uint *)(iVar3 + 0x264)) {
    return;
  }
  FUN_7139a77c(iVar3);
  return;
}


// =========================================================================
// Function: FUN_7137d0bc
// Entry: 0x7137d0bc | Size: 416 bytes
// =========================================================================

void FUN_7137d0bc(undefined4 param_1,undefined4 param_2)

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
  if (((DAT_70b422d4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b422d4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb680,param_2);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb670);
      *(undefined1 *)((int)puVar10 + 0x3d) = 1;
      uVar6 = DAT_70075718;
      uVar5 = DAT_70075714;
      uVar4 = DAT_70075710;
      uVar3 = DAT_7007570c;
      *puVar10 = DAT_70075708;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007572c;
      uVar5 = DAT_70075728;
      uVar4 = DAT_70075724;
      uVar3 = DAT_70075720;
      puVar10[5] = DAT_7007571c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      uVar6 = DAT_70075740;
      uVar5 = DAT_7007573c;
      uVar4 = DAT_70075738;
      uVar3 = DAT_70075734;
      puVar10[10] = DAT_70075730;
      puVar10[0xb] = uVar3;
      puVar10[0xc] = uVar4;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      *(undefined1 *)(puVar10 + 0xf) = DAT_70075744;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130dac8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb680);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb670);
    if (*(char *)(iVar8 + 0x3d) != '\0') {
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
        bVar2 = (0x3b < uVar12) <= uVar13;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + bVar16;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar8 + 0x3d) = 0;
    }
    DAT_70b422d0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b422d4);
  }
                    /* WARNING: Could not recover jumptable at 0x7137d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b422d0)(param_1,param_2);
  return;
}


// =========================================================================
// Function: FUN_7137d4f4
// Entry: 0x7137d4f4 | Size: 440 bytes
// =========================================================================

void FUN_7137d4f4(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  if (param_1 != (int *)0x0) {
    iVar13 = 0;
    do {
      if (*(int *)((int)&DAT_70b46318 + iVar13) == *param_1) {
        *(undefined4 *)((int)&DAT_70b46318 + iVar13) = 0;
      }
      iVar13 = iVar13 + 4;
    } while (iVar13 != 0x54);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_70b422dc & 1) == 0) && (iVar13 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b422dc), iVar13 != 0))
  {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb6a0);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb690);
      *(undefined1 *)((int)puVar10 + 0x32) = 1;
      uVar7 = DAT_7007575c;
      uVar6 = DAT_70075758;
      uVar5 = DAT_70075754;
      uVar4 = DAT_70075750;
      uVar3 = DAT_7007574c;
      *puVar10 = DAT_70075748;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      puVar10[5] = uVar7;
      uVar7 = DAT_70075774;
      uVar6 = DAT_70075770;
      uVar5 = DAT_7007576c;
      uVar4 = DAT_70075768;
      uVar3 = DAT_70075764;
      puVar10[6] = DAT_70075760;
      puVar10[7] = uVar3;
      puVar10[8] = uVar4;
      puVar10[9] = uVar5;
      puVar10[10] = uVar6;
      puVar10[0xb] = uVar7;
      *(undefined2 *)(puVar10 + 0xc) = DAT_70075778;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7137df84,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb6a0);
      *puVar11 = 1;
    }
    iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb690);
    if (*(char *)(iVar13 + 0x32) != '\0') {
      uVar12 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x63671535 >> iVar15) |
                (byte)(-0xaac1a99 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xf553e567 >> (uVar16 & 0xff));
        }
        *(byte *)(iVar13 + uVar12) = *(byte *)(iVar13 + uVar12) ^ bVar8;
        bVar17 = 0xfffffffe < uVar12;
        bVar1 = uVar14 == 0;
        bVar2 = (0x30 < uVar12) <= uVar14;
        uVar12 = uVar12 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar13 + 0x32) = 0;
    }
    DAT_70b422d8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar13,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b422dc);
  }
                    /* WARNING: Could not recover jumptable at 0x7137d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b422d8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7137db74
// Entry: 0x7137db74 | Size: 288 bytes
// =========================================================================

undefined4 * FUN_7137db74(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)thunk_MwhHq(0x1c);
  puVar2[6] = 0;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2[3] = 0;
  puVar3 = (undefined4 *)thunk_MwhHq(0x2c);
  puVar3[8] = 0;
  puVar3[9] = puVar2;
  puVar3[10] = 0;
  *puVar3 = &PTR_FUN_70b0e07c;
  puVar3[1] = param_1;
  puVar3[2] = param_2;
  puVar3[3] = 0;
  puVar3[4] = (uint)(param_3 == 0) << 1;
  puVar3[5] = 1;
  puVar3[6] = 1;
  puVar3[7] = 0;
  *puVar2 = puVar3;
  piVar1 = DAT_70b46448;
  iVar5 = *DAT_70b46448;
  *(undefined4 *)(iVar5 + 0x278) = 0x1a;
  **(undefined4 **)(iVar5 + 0x274) = 0x1a;
  *(int *)(iVar5 + 0x274) = *(int *)(iVar5 + 0x274) + 4;
  iVar5 = *piVar1;
  **(undefined4 **)(iVar5 + 0x274) = puVar2;
  *(int *)(iVar5 + 0x274) = *(int *)(iVar5 + 0x274) + 4;
  iVar5 = *piVar1;
  **(undefined4 **)(iVar5 + 0x274) = s_Unknown_7006305d;
  uVar4 = *(int *)(iVar5 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar5 + 0x270) = uVar4;
  *(uint *)(iVar5 + 0x274) = uVar4;
  FUN_7139bc08(iVar5);
  if (*(uint *)(iVar5 + 0x264) < *(int *)(iVar5 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar5);
  }
  return puVar2;
}


// =========================================================================
// Function: FUN_7137dd7c
// Entry: 0x7137dd7c | Size: 256 bytes
// =========================================================================

void FUN_7137dd7c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_70b46448;
  *(undefined4 *)(iVar2 + 0x278) = 0x1e;
  **(undefined4 **)(iVar2 + 0x274) = 0x1e;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_1;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = *param_2;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_2[1];
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_2[2];
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_2[3];
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_3;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(undefined4 *)(iVar3 + 4) = param_4;
  iVar3 = *(int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x274) = iVar3 + 4;
  *(char **)(iVar3 + 4) = s_Unknown_7006305d;
  uVar1 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar1;
  *(uint *)(iVar2 + 0x274) = uVar1;
  FUN_7139bc08(iVar2);
  if (*(int *)(iVar2 + 0x274) + 0x401U <= *(uint *)(iVar2 + 0x264)) {
    return;
  }
  FUN_7139a77c(iVar2);
  return;
}


// =========================================================================
// Function: FUN_7137e7fc
// Entry: 0x7137e7fc | Size: 8468 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_7137e7fc(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s__version_300_es_7006bd81);
  uVar2 = DAT_70b462f8;
  if (0 < iVar1) {
    uVar2 = DAT_70b462f8 + iVar1;
  }
  if (0 < iVar1) {
    DAT_70b462f8 = uVar2;
  }
  iVar1 = FUN_71384558(uVar2,0xffffffff,(int)&DAT_70b442f8 - uVar2,
                       s_precision_mediump_float__7006d540);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_precision_lowp_sampler2D__7006308b);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_out_mediump_vec4_FragColor__7006e395);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_uniform_lowp_float_Bias__700662ed);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  uVar2 = param_2 & 0x8000;
  if (uVar2 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_vec3_vWorldPosition__7006ec0a);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_float_vSnowMult__700630a5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  uVar7 = param_1 & 0x20;
  if (uVar7 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_Diffuse__70061f81);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec2_Out_Tex0__70070f70);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x800) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend1__700630c1), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x1000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend2__7006cd65), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x2000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend3__7006db25), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x4000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_uniform_sampler2D_DiffuseBlend4__70068407), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_2 & 0x7800) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_lowp_vec4_Out_TexBlend__7006ec22);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s__define_BLEND_MIP_BIAS_0_65_7006ec3d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (((param_2 & 0x60000) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_lowp_vec4_TintColor0__70068428), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_2 & 0x20000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_TintMask__700630e2);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_vec4_TintColor1__70061020);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_vec4_TintColor2__700630fe);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (((param_2 & 0x80000) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_sampler2D_TexLayer__70066ac8), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if (uVar2 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_Diffuse11__70068d27);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec2_Out_Tex12__7006db46);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  uVar3 = 1;
  do {
    uVar8 = uVar3 + 1;
    if ((param_2 >> (uVar3 & 0xff) & 1) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_sampler2D_Diffuse_d__70066ae4,uVar3);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_mediump_vec2_Out_Tex_d__70066306,uVar8);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
    }
    uVar3 = uVar8;
  } while (uVar8 != 0xb);
  uVar3 = 0xb;
  if ((param_2 & 0x100000) != 0) {
    uVar10 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                          s_in_lowp_vec3_Out_DecalLight__7006fcdc);
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    if (0 < (int)uVar10) {
      uVar3 = DAT_70b462f8;
      DAT_70b462f8 = DAT_70b462f8 + (int)uVar10;
    }
  }
  if ((param_1 & 0x1000040) == 0) {
    if ((param_1 & 0x10000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_sampler2D_EnvMap__7006ec5b);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      pcVar5 = s_uniform_float_DetailTiling__70066b01;
      goto LAB_7137ee04;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_sampler2D_EnvMap__7006ec5b);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_float_EnvMapCoeffic_7006f3c3);
    if (0 < (int)uVar3) {
      DAT_70b462f8 = DAT_70b462f8 + uVar3;
    }
    if ((param_1 & 0x40) != 0) {
      pcVar5 = s_in_mediump_vec2_Out_Tex1__7006311c;
LAB_7137ee04:
      uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,pcVar5);
      if (0 < (int)uVar3) {
        DAT_70b462f8 = DAT_70b462f8 + uVar3;
      }
    }
  }
  if ((param_1 & 0x400) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_lowp_vec3_Out_HazeColor__70068446);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec3_Out_HazeCamVec__70070f8a);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_mediump_vec4_HazeParams__70068d44);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_float_HazeDisabled__7006a8ad);
    if (0 < (int)uVar3) {
      DAT_70b462f8 = DAT_70b462f8 + uVar3;
    }
  }
  if (((param_1 & 0x12) != 0) &&
     (uVar3 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_lowp_vec4_Out_Color__7006a1e1), 0 < (int)uVar3)) {
    DAT_70b462f8 = DAT_70b462f8 + uVar3;
  }
  bVar9 = (param_1 & 0x2000) != 0;
  if (bVar9) {
    uVar3 = 0x10001c0;
  }
  if ((bVar9 && (param_1 & uVar3) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_lowp_vec3_Out_Spec__70071f88), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_highp_vec3_CameraPositio_7006cd86);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_highp_vec3_v_reflectPos__70062617);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec3_v_reflectNormal__7006b6e8);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_mediump_vec3_vFresnelPar_70066b1d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_in_mediump_vec3_Out_Refl__7006f3e9);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_uniform_lowp_float_RenderSnapsho_7006593f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_1 & 0x2000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_highp_vec3_DirLightDirec_7006db61);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_mediump_float_v_diffuse__70062633);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
    }
  }
  if (((param_1 & 4) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_uniform_lowp_float_AlphaModulate_7006cda9), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if (((param_1 & 0x80000) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_in_mediump_float_Out_WaterAlphaB_700643ef), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_void_main___7006db87);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70071705);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_lowp_vec4_fcolor__7006ec75);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  uVar3 = param_2 & 0x7fe;
  if ((uVar3 == 0 && uVar7 == 0) && uVar2 == 0) {
LAB_7137f24c:
    if ((param_1 & 0x12) == 0) {
      pcVar5 = s_fcolor___0_0__700651d6;
    }
    else {
      pcVar5 = s_fcolor___Out_Color__7006c533;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
LAB_7137f398:
    if ((param_2 & 0x40000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor_rgb____TintColor0_rgb__7006a8ce);
      goto joined_r0x7137f3c4;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_diffuseColor__7006ec87);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (uVar7 == 0) goto LAB_7137f24c;
    pcVar5 = s_BLEND_MIP_BIAS_700673d4;
    if ((param_2 & 0x7800) == 0) {
      pcVar5 = &DAT_70068d07;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_diffuseColor___texture_Diffuse__O_7006103e,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_2 & 0x7800) == 0) {
      pcVar5 = s_diffuseColor_70066b42;
    }
    else {
      if (((param_2 & 0x800) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex1___texture_Di_7006fcf9,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if (((param_2 & 0x1000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex2___texture_Di_70061f9c,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if (((param_2 & 0x2000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex3___texture_Di_7006c4b7,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if (((param_2 & 0x4000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                               s_lowp_vec4_blendTex4___texture_Di_70064aa6,pcVar5), 0 < iVar1)) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_lowp_vec4_TexBlendColor__70064415,pcVar5);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      if ((param_2 & 0x800) == 0) {
        pcVar5 = s_diffuseColor_70066b42;
      }
      else {
        pcVar5 = s_TexBlendColor_70071f9f;
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_70063b94,s_diffuseColor_70066b42);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      if ((param_2 & 0x1000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_7006c4ff,pcVar5);
        pcVar5 = s_TexBlendColor_70071f9f;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      if ((param_2 & 0x2000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_700651a2,pcVar5);
        pcVar5 = s_TexBlendColor_70071f9f;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      if ((param_2 & 0x4000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_TexBlendColor___mix__s__blendTex_70071fad,pcVar5);
        pcVar5 = s_TexBlendColor_70071f9f;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor____s__7006cdcb,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_2 & 0x20000) == 0) goto LAB_7137f398;
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_tintMask___texture_Tin_7006442e,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__fco_70066b4f,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__fco_7006a1f9,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__fco_7006187d,pcVar5);
joined_r0x7137f3c4:
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_2 & 0x100000) == 0) {
    if ((uVar3 != 0) && ((param_2 & 0x200000) == 0)) {
      FUN_713845c0(param_2);
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_decalOver___vec4_0_0___70065af2);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    uVar10 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                          s_lowp_vec4_decalSample__7006a2f1);
    iVar4 = (int)((ulonglong)uVar10 >> 0x20);
    iVar1 = (int)uVar10;
    if (0 < iVar1) {
      iVar4 = -0x83915c;
    }
    uVar8 = 1;
    if (0 < iVar1) {
      DAT_70b462f8 = *(int *)(iVar4 + 0x7137f454) + iVar1;
    }
    do {
      uVar6 = uVar8 + 1;
      if ((param_2 >> (uVar8 & 0xff) & 1) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalSample___texture_Diffuse_d__700685b4,uVar8,uVar6);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        uVar8 = uVar6;
        uVar11 = uVar6;
        uVar12 = uVar6;
        uVar13 = uVar6;
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalSample_a____step_0_0__Out_T_7006c72c,uVar6,uVar6,uVar6,uVar6);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalSample_rgb____decalSample_a_7006ed8c,uVar8,uVar11,uVar12,uVar13)
        ;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalOver_rgb___decalSample_rgb___7007213d,uVar8,uVar11,uVar12,uVar13
                            );
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalOver_a___decalSample_a____d_7006be86,uVar8,uVar11,uVar12,uVar13)
        ;
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
      }
      uVar8 = uVar6;
    } while (uVar6 != 0xb);
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_decalOver_rgb____Out_DecalLight__700652b3);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (uVar7 == 0 || (param_2 & 0x80000) == 0) {
    if (uVar7 != 0) {
      if ((param_1 & 0x12) != 0) goto LAB_7137f680;
      goto joined_r0x7137f6c0;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_texLayer___texture_Tex_7006c547);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_rgb___mix_fcolor_rgb__tex_7006a8ec);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_1 & 0x12) == 0) {
joined_r0x7137f6c0:
      if ((param_1 & 0x80000) != 0) {
LAB_7137f800:
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_fcolor_a____Out_WaterAlphaBlend__70071707);
        if (0 < iVar1) goto LAB_7137f820;
      }
    }
    else {
LAB_7137f680:
      iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
      if ((param_1 & 0x10000) == 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_fcolor____Out_Color__70067cad);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        goto joined_r0x7137f6c0;
      }
      if ((param_1 & 0x80000) != 0) {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_fcolor____Out_Color__70067cad);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        goto LAB_7137f800;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_fcolor____vec4_Out_Color_xyz___t_70066b96
                          );
      if (iVar1 < 1) goto LAB_7137f830;
LAB_7137f820:
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
LAB_7137f830:
  if (((param_1 & 0x40) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor_xyz___mix_fcolor_xyz__tex_7006a924), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_if__RenderSnapshotRefl_>_0_5____70070753);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec2_ReflPos___normalize_Out_Ref_70068d65);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_ReflPos____ReflPos___vec2_0_5__0_7006c57f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_ReflTexture___texture__70071fe1);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz___mix_fcolor_xyz__Ref_7006cdd8);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_w____ReflTexture_b___0_12_7006c5b6);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s___else___7006ce1a);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_viewVec___normalize_7006c5d9);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_nrm___normalize_v_r_7006ce23);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_tangA___1_0___max__7006ce52);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_T___vec3_1_0___nrm__7006f403);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_Out_ReflPBR___refle_70067cc2);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_reflT___dot_Out_Re_7006f457);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_stretchedRefl___nor_70067cf4);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec2_ReflPos___normalize_stretch_70064aee);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_ReflPos___ReflPos___0_5___0_5__7006a974);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec3_envmap___texture_EnvMap__Re_7006fd41);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_viewDir____viewVec__7006264f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_cosTheta___max_dot_7006ce88);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_fresnelFactor___vF_70072013);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fresnelFactor___min_fresnelFacto_7006106d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_1 & 0x2000) == 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_vec3_specular___vec3_0_0___7006db93);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      pcVar5 = s_vec3_diffuseVec___vec3_0_0___7006a9fd;
    }
    else {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_vec3_B___cross_nrm__T___7006a240);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_vec3_halfwayDir___normal_700618c4);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_TdotH___dot_T__hal_700610a3);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_BdotH___dot_B__hal_70063136);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_NdotH___max_dot_nr_7006d559);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_mediump_float_exponent_____TdotH_7006a993);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_float_spec___exp2_exponent___1_4_700651e4);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_vec3_specular___vec3_spec___70061906);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      pcVar5 = s_vec3_diffuseVec___vec3_max_dot_n_70066321;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_envmap____sqrt_fresnelFactor___700673e3);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz____diffuseVec___specu_70068da7);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_w____fresnelFactor___0_15_700610cd);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if (((param_1 & 0x2000) != 0) && (*(char *)(DAT_70b4645c + 8) == '\0')) {
    if ((param_1 & 0x1000000) == 0) {
      if ((param_1 & 0x40) == 0) goto LAB_713804b8;
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor_xyz____Out_Spec__70065966);
    }
    else {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_if__RenderSnapshotRefl_>_0_5__fc_70068462);
    }
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
LAB_713804b8:
  if (((param_1 & 0x400) != 0) && (*(char *)(DAT_70b4645c + 8) == '\0')) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_if__HazeDisabled_<_0_5)___700610ef);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_vec3_HazeAbsVec___abs_Ou_7006597e);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_HazeScale___max_ma_70065212);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_HazeDist___HazeSca_70068dd5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_mediump_float_HazeAmt___clamp__H_7006d58f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_HazeAmt___1_0____1_0___HazeAmt____7006f482);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz___mix_fcolor_xyz__Out_70068498);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (((param_2 & 0x100000) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_decalOver_rgb___mix_decalOver_rg_70067d3c), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_1 & 0x4000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor_xyz____fcolor_xyz___0_5__7006fd6d);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if ((param_2 & 0x100000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_decalOver_rgb____decalOver_rgb___70065260);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      goto LAB_713807a4;
    }
  }
  if (((param_2 & 0x300000) == 0x200000) && (uVar3 != 0)) {
    FUN_713845c0(param_2);
  }
LAB_713807a4:
  if (uVar2 != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_float_snowFactor___smoothstep_0__700684ce);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_vec4_snowTexture___texture__70072086);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec3_baseSnowColor___snowTexture_70061109);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_vec3_snowEffect___mix_fcolor_xyz_70066372);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_fcolor___vec4_snowEffect__fcolor_700720c3);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                       s_FragColor___fcolor__70068e36);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  if ((param_2 & 0x100000) != 0) {
    if (((param_1 & 4) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                             s_FragColor_a____AlphaModulate__70068509), 0 < iVar1)) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_lowp_float_decalOutA___decalOver_70067402);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_FragColor_rgb____decalOver_rgb___7006e3b1);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s_FragColor_a___decalOutA__700659ad);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((param_1 & 1) != 0) {
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s___ATBEGIN___70062670);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    if (uVar7 == 0) {
      if ((param_1 & 0x800) == 0) {
        iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
        if ((param_1 & 0x200) == 0) {
          pcVar5 = s_if__FragColor_a_<_0_2)___discard_70070faa;
        }
        else {
          iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,
                               s_if__FragColor_a_<_0_5)___discard_700663e0);
          if (0 < iVar1) {
            DAT_70b462f8 = DAT_70b462f8 + iVar1;
          }
          iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
          pcVar5 = s_FragColor_a___Out_Color_a__7006aa1a;
        }
      }
      else {
        iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
        pcVar5 = s_if__FragColor_a_<_0_8)___discard_700663bc;
      }
    }
    else if ((param_1 & 0x800) == 0) {
      iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
      if ((param_1 & 0x200) == 0) {
        pcVar5 = s_if__diffuseColor_a_<_0_2)___disc_7006e41e;
      }
      else {
        iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,s_FragColor_a___Out_Color_a__7006aa1a);
        if (0 < iVar1) {
          DAT_70b462f8 = DAT_70b462f8 + iVar1;
        }
        iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
        pcVar5 = s_if__diffuseColor_a_<_0_5)___disc_7006fd8d;
      }
    }
    else {
      iVar1 = (int)&DAT_70b442f8 - DAT_70b462f8;
      pcVar5 = s_if__diffuseColor_a_<_0_8)___disc_7006112f;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,iVar1,pcVar5);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                         s___ATEND___7006ec9f);
    if (0 < iVar1) {
      DAT_70b462f8 = DAT_70b462f8 + iVar1;
    }
  }
  if ((((param_1 & 4) != 0) && ((param_2 & 0x100000) == 0)) &&
     (iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_FragColor_a____AlphaModulate__70068509), 0 < iVar1)) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,&DAT_70061922);
  if (0 < iVar1) {
    DAT_70b462f8 = DAT_70b462f8 + iVar1;
  }
  return;
}


// =========================================================================
// Function: FUN_71384558
// Entry: 0x71384558 | Size: 52 bytes
// =========================================================================

void FUN_71384558(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,param_3,0,param_2,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_713845c0
// Entry: 0x713845c0 | Size: 400 bytes
// =========================================================================

void FUN_713845c0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = 1;
  do {
    uVar3 = uVar2 + 1;
    if ((param_1 >> (uVar2 & 0xff) & 1) != 0) {
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_diffuseColor___texture_Diffuse_d_7006fec3,uVar2,uVar3);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      uVar2 = uVar3;
      uVar4 = uVar3;
      uVar5 = uVar3;
      uVar6 = uVar3;
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_diffuseColor_a____step_0_0__Out__7006e4d5,uVar3,uVar3,uVar3,uVar3);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_diffuseColor_rgb____diffuseColor_7006dc7a,uVar2,uVar4,uVar5,uVar6);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_diffuseColor_rgb___diffuseColor__70070ffe,uVar2,uVar4,uVar5,uVar6);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_diffuseColor_a___diffuseColor_a___700664be,uVar2,uVar4,uVar5,uVar6);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462f8,0xffffffff,(int)&DAT_70b442f8 - DAT_70b462f8,
                           s_fcolor___diffuseColor__7006ab25,uVar2,uVar4,uVar5,uVar6);
      if (0 < iVar1) {
        DAT_70b462f8 = DAT_70b462f8 + iVar1;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 0xb);
  return;
}


// =========================================================================
// Function: FUN_713849f0
// Entry: 0x713849f0 | Size: 8764 bytes
// =========================================================================

void FUN_713849f0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s__version_300_es_7006bd81);
  iVar2 = DAT_70b462fc;
  if (0 < iVar1) {
    iVar2 = DAT_70b462fc + iVar1;
  }
  if (0 < iVar1) {
    DAT_70b462fc = iVar2;
  }
  iVar2 = FUN_71384558(iVar2,0xffffffff,(int)&DAT_70b462f8 - iVar2,s_precision_highp_float__7006dbae
                      );
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_uniform_mat4_ProjMatrix__70061924);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_uniform_mat4_ViewMatrix__7006d5e2);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_uniform_mat4_ObjMatrix__7006f4b5);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  uVar9 = param_2 & 0x8000;
  if (uVar9 != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_vec3_vWorldPosition__7006e446);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_float_vSnowMult__7006cebe);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 2) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec3_AmbientLightCo_70063bc8);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec4_MaterialEmissi_7006b709);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec4_MaterialDiffus_7006744a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_vec4_MaterialAmbien_7006bd92);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    if ((param_1 & 0x2000) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_lowp_vec3_DirLightDiffus_7006aa35);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_DirLightDirection__70064460);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
    if ((param_1 & 0x4000) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_lowp_vec3_DirLight2Diffu_700720e8);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_DirLight2Direction__70061156);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
    if ((param_1 & 0x8000) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_lowp_vec3_DirLight3Diffu_7006aa5d);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_DirLight3Direction__700659c6);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_in_vec3_Position__70061fe4);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_in_vec3_Normal__70067d86);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  uVar8 = param_2 & 0x7fe;
  uVar3 = param_1 & 0x20;
  if ((uVar8 != 0 || uVar3 != 0) || uVar9 != 0) {
    if ((param_1 & 0x40000) == 0) {
      pcVar6 = s_in_vec2_TexCoord0__7006267c;
    }
    else {
      pcVar6 = s_in_vec4_TexCoord0__700659e7;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar6);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_in_vec4_GlobalColor__70066c00);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x180) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_BoneWeight__7006746d);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_BoneIndices__70068e4a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = *DAT_70b46460 * 3;
    if (*DAT_70b46460 == 0) {
      iVar2 = 0x180;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_highp_vec4_Bones__d___70067481,iVar2);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((uVar3 != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_mediump_vec2_Out_Tex0__7006268f), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if (uVar9 != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec2_Out_Tex12__70063160);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_mediump_float_SnowMult__7006d5fb);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if (uVar8 != 0) {
    uVar10 = 1;
    do {
      uVar11 = uVar10 + 1;
      if ((param_2 >> (uVar10 & 0xff) & 1) != 0) {
        iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_out_mediump_vec2_Out_Tex_d__7006d61b,uVar11);
        if (0 < iVar2) {
          DAT_70b462fc = DAT_70b462fc + iVar2;
        }
        iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_uniform_mediump_mat3_Decal_dMatr_70068e5f,uVar10);
        if (0 < iVar2) {
          DAT_70b462fc = DAT_70b462fc + iVar2;
        }
      }
      uVar10 = uVar11;
    } while (uVar11 != 0xb);
  }
  if (((param_2 & 0x100000) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_lowp_vec3_Out_DecalLight__70071728), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if (((param_1 & 0x2000000) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_mat3_NormalMatrix__7006cedb), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x1000040) != 0) {
    if (((param_1 & 0x40) != 0) &&
       (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_out_mediump_vec2_Out_Tex1__70065286), 0 < iVar2)) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_float_EnvMapCoeffic_7006f3c3);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_highp_vec3_v_reflectPos__7006dbc5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec3_v_reflectNormal_70061177);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec3_Out_Refl__70061ff6);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    if (((param_1 & 0x2000) != 0) &&
       (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_out_mediump_float_v_diffuse__7006b72d), 0 < iVar2)) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if (((param_1 & 0x18807c0) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_uniform_vec3_CameraPosition__7006e45f), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x400) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_lowp_vec3_Out_HazeColor__70071746);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_vec3_Out_HazeCamVec__7006cef6);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_mediump_vec4_HazeParams__70068d44);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec4_HazeColorHorizon__70068527);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec4_HazeColorMid__70070773);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec4_HazeColorZenith__7006193d);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_float_HazeDisabled__7006a8ad);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x80000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_vec3_WaterSpecs__7006cf17);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_mediump_float_Out_WaterAlpha_7006fdb4);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_2 & 0x7800) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_TexBlend__700652a1);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_out_lowp_vec4_Out_TexBlend__7006317c);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_2 & 0x10000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_PedData__7006195b);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_highp_vec2_BodyRegions__7006eca9);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x100000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_in_vec4_Color2__70063198);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_uniform_lowp_float_ColorInterp__70068e83);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if (((param_1 & 0x12) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_lowp_vec4_Out_Color__70067d96), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((((param_1 & 0x2000) != 0) && ((param_1 & 0x10001c0) != 0)) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_out_lowp_vec3_Out_Spec__700631a8), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                       s_void_main_____700626aa);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if (uVar9 != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vWorldPosition___Normal_xyz__70066404);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vSnowMult___SnowMult__7006e47c);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 0x180) == 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec4_WorldPos___ObjMatrix___vec4_700631c0);
  }
  else {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_ivec4_BlendIndexArray___ivec4_Bo_7006dbe2);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_mat4_BoneToLocal__7006bdb5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_0____Bones_BlendInde_7007078e);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_1____Bones_BlendInde_700626b8);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_2____Bones_BlendInde_700626f7);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_3____vec4_0_0_0_0_0__7006aa86);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_0_____Bones_BlendInd_7006bdc8);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_1_____Bones_BlendInd_70067daf);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_2_____Bones_BlendInd_70068546);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_0_____Bones_BlendInd_7006fddb);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_1_____Bones_BlendInd_7006a260);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_BoneToLocal_2_____Bones_BlendInd_70061199);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    if ((param_1 & 0x100) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_BoneToLocal_0_____Bones_BlendInd_7006ecc9);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_BoneToLocal_1_____Bones_BlendInd_700659fa);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_BoneToLocal_2_____Bones_BlendInd_70062736);
      if (0 < iVar2) {
        DAT_70b462fc = DAT_70b462fc + iVar2;
      }
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec4_WorldPos___ObjMatrix____vec_7006f4cd);
  }
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_1 & 0x800000) == 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec4_ViewPos___ViewMatrix___Worl_70064b3a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_gl_Position___ProjMatrix___ViewP_7006aaf1);
  }
  else {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_ReflVector___WorldPos_xyz___70067def);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_ReflPos___normalize_ReflVec_7006fe19);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_ReflPos_xy___normalize_ReflPos_x_7006aaaf);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_gl_Position___vec4_ReflPos_xy__l_700707cb);
  }
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  if ((param_2 & 0x10000) != 0) {
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_int_bodyRegion___int_PedData_x___70070fce);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_int_bodyBits___bodyRegion_<_16___70064b61);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_int_bodyShift___bodyRegion_<_16___7006a2a0);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_if_bodyRegion_<_32_&&_((bodyBits_7006cf30);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_gl_Position___vec4_2_0__2_0__2_0_7006b74a);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  if ((param_1 & 2) == 0) {
    if ((param_1 & 0x1000040) != 0) {
      iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_vec3_WorldNormal___vec3_0_0__0_0_700644c3);
      goto joined_r0x71385e64;
    }
  }
  else {
    if (((param_1 & 0x201) == 0x201) && ((param_1 & 0xe000) != 0)) {
      pcVar6 = s_vec3_WorldNormal___normalize_vec_70063bed;
    }
    else if ((param_1 & 0x180) == 0) {
      pcVar6 = s_vec3_WorldNormal____ObjMatrix___v_700631f1;
    }
    else {
      pcVar6 = s_vec3_WorldNormal___mat3_ObjMatri_70064480;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar6);
joined_r0x71385e64:
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
  iVar2 = DAT_70b4645c;
  if (((param_1 & 0x400) != 0) && (*(char *)(DAT_70b4645c + 8) == '\0')) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_if__HazeDisabled_<_0_5)___700610ef);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_CamVec___WorldPos_xyz___Cam_7006b774);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_float_HazeBw___clamp__CamVec_z___70067e28);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_HazeCol__70062011);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_if__HazeBw_>__HazeParams_w____7006f50e);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___HazeColorZenith_xyz__7006e492);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_else_if__HazeBw_>_HazeParams_z____70063c41);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___mix_HazeColorMid_xyz__H_7006f52c);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_pow_clamp__HazeBw___HazeParams_z_7006f565);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,s_else___7006fe40
                        );
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___mix_HazeColorHorizon_x_7006fe47);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_pow_clamp_HazeBw___HazeParams_z__7006f5d3);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___clamp__7006f61c);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_HazeCol___HazeColorHorizon_xyz___70066421);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_0_0__1_0___7006d637);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeColor___HazeCol__7006749f);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeCamVec___CamVec__7006dc0f);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s___else___7006ce1a);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeColor___vec3_0_0___70063228);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_HazeCamVec___vec3_0_0___7006e4b5);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
  pcVar6 = s_TexCoord0___512_0_7006be06;
  if ((param_1 & 0x20000) == 0) {
    pcVar6 = s_TexCoord0_70067c80;
  }
  pcVar7 = s_TexCoord0_xy___TexCoord0_w_7006cf6b;
  if ((param_1 & 0x40000) == 0) {
    pcVar7 = pcVar6;
  }
  if (uVar3 != 0) {
    if ((param_1 & 0x2000000) == 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Tex0____s__7006ab16,pcVar7);
    }
    else {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Tex0____NormalMatrix___vec3__70068586,pcVar7);
    }
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
  if ((param_2 & 0x87fe) != 0) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_mediump_vec2_Out_TexTemp__7006d646);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if (uVar3 == 0) {
      if ((param_1 & 0x2000000) != 0) {
        pcVar6 = s_Out_TexTemp____NormalMatrix___ve_7006d660;
        goto LAB_71386490;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_TexTemp____s__7007080d,pcVar7);
    }
    else {
      pcVar6 = s_Out_TexTemp___Out_Tex0__70064bac;
LAB_71386490:
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar6);
    }
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((uVar9 != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_Out_Tex12____Out_TexTemp___vec2__70072111), 0 < iVar1)) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if (uVar8 != 0) {
      uVar9 = 1;
      do {
        uVar3 = uVar9 + 1;
        if (((param_2 >> (uVar9 & 0xff) & 1) != 0) &&
           (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                                 s_Out_Tex_d____Decal_dMatrix___vec_7006d691,uVar3,uVar9), 0 < iVar1
           )) {
          DAT_70b462fc = DAT_70b462fc + iVar1;
        }
        uVar9 = uVar3;
      } while (uVar3 != 0xb);
    }
  }
  if ((param_1 & 0x40) != 0) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_reflVector___normalize_Worl_7006647e);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_reflVector___reflVector___2_0___d_700644eb);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_Tex1___vec2_length_reflVecto_70066c15);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
  if ((param_1 & 0x1000000) != 0) {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_v_reflectPos___WorldPos_xyz__70062776);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_v_reflectNormal___WorldNormal__70067e78);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_snapshotRefl___normalize_Wo_7006fe81);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_snapshotRefl___snapshotRefl___2__7006be18);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_Refl___snapshotRefl__7006d6ca);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if (((param_1 & 0x2000) == 0) || (*(char *)(iVar2 + 8) != '\0')) {
      if ((param_1 & 0x2000) == 0) goto LAB_713868a0;
    }
    else {
      uVar5 = 0x40220000;
      if (*(char *)(iVar2 + 0xd) == '\0') {
        uVar5 = 0x40240000;
      }
      uVar12 = 0;
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_float_snapshotSpecAmt___max_pow__7006c61a,0,uVar5);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Spec___snapshotSpecAmt___Dir_70064bc4,uVar12,uVar5);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_v_diffuse___max_dot_normalize_Wo_7006dc28);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
  }
LAB_713868a0:
  if (((param_2 & 0x7800) != 0) &&
     (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_TexBlend___TexBlend__70063247), 0 < iVar1)) {
    DAT_70b462fc = DAT_70b462fc + iVar1;
  }
  if ((param_1 & 0x100000) == 0) {
    pcVar6 = s_GlobalColor_70067c8a;
    if ((param_1 & 2) != 0) goto LAB_713868f8;
LAB_71386a5c:
    if (((param_1 & 0x12) != 0) &&
       (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                             s_Out_Color____s__7006a2e1,pcVar6), 0 < iVar1)) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((param_2 & 0x100000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_DecalLight___vec3_1_0___7006be6a);
      goto joined_r0x71386acc;
    }
  }
  else {
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_lowp_vec4_InterpColor___mix_Glob_7006b7a5);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    pcVar6 = s_InterpColor_70071763;
    if ((param_1 & 2) == 0) goto LAB_71386a5c;
LAB_713868f8:
    iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_vec3_Out_LightingColor__700674b8);
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((param_1 & 8) == 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_LightingColor___AmbientLight_7006c687);
    }
    else {
      if ((param_1 & 0x200) == 0) {
        pcVar7 = s_Out_LightingColor___AmbientLight_70068ea3;
      }
      else {
        pcVar7 = s_Out_LightingColor___AmbientLight_7006cf86;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar7);
    }
    if (0 < iVar1) {
      DAT_70b462fc = DAT_70b462fc + iVar1;
    }
    if ((param_1 & 0xe000) != 0) {
      if (((param_1 & 0x2000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_Out_LightingColor____max_dot_Dir_700674d0), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x4000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_Out_LightingColor____max_dot_Dir_70062793), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x8000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_Out_LightingColor____max_dot_Dir_7006ed07), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
    if ((param_1 & 0x12) != 0) {
      if ((param_1 & 0x10) == 0) {
        pcVar7 = s_Out_Color___vec4_Out_LightingCol_70065a3a;
      }
      else {
        pcVar7 = s_Out_Color___vec4__Out_LightingCo_7007176f;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,pcVar7,pcVar6);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_Color___clamp_Out_Color__0_0_7006ed64,pcVar6);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
    if ((param_2 & 0x100000) != 0) {
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_vec3_decalLight___AmbientLightCo_7006b7e4);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x2000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_decalLight____max_dot_DirLightDi_70068ee9), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x4000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_decalLight____max_dot_DirLight2D_7006b809), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      if (((param_1 & 0x8000) != 0) &&
         (iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                               s_decalLight____max_dot_DirLight3D_70063260), 0 < iVar1)) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_DecalLight___clamp_decalLigh_7007081f);
joined_r0x71386acc:
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
    }
  }
  if (((param_1 & 0x2000) != 0) && (*(char *)(iVar2 + 8) == '\0')) {
    if ((param_1 & 0x40) == 0) {
      if ((param_1 & 0x180) == 0) goto LAB_71386e40;
      iVar1 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_vec3_reflVector___normalize_Worl_7006647e);
      if (0 < iVar1) {
        DAT_70b462fc = DAT_70b462fc + iVar1;
      }
      iVar4 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_reflVector___reflVector___2_0___d_700644eb);
      uVar5 = 0x40140000;
      iVar1 = DAT_70b462fc;
      if (0 < iVar4) {
        iVar1 = DAT_70b462fc + iVar4;
      }
      if (0 < iVar4) {
        DAT_70b462fc = iVar1;
      }
      if (*(char *)(iVar2 + 0xd) == '\0') {
        uVar5 = 0x40100000;
      }
      pcVar6 = s_float_specAmt___max_pow_dot_refl_7006c6db;
    }
    else {
      uVar5 = 0x40220000;
      if (*(char *)(iVar2 + 0xd) == '\0') {
        uVar5 = 0x40240000;
      }
      pcVar6 = s_float_specAmt___max_pow_dot_refl_70065a8f;
      iVar1 = DAT_70b462fc;
    }
    uVar12 = 0;
    iVar2 = FUN_71384558(iVar1,0xffffffff,(int)&DAT_70b462f8 - iVar1,pcVar6,0,uVar5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
    iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                         s_Out_Spec___specAmt___DirLightDif_700632b6,uVar12,uVar5);
    if (0 < iVar2) {
      DAT_70b462fc = DAT_70b462fc + iVar2;
    }
  }
LAB_71386e40:
  if (((param_1 & 0x80000) != 0) &&
     (iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,
                           s_Out_WaterAlphaBlend___distance_W_70066c5a), 0 < iVar2)) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  iVar2 = FUN_71384558(DAT_70b462fc,0xffffffff,(int)&DAT_70b462f8 - DAT_70b462fc,&DAT_70061922);
  if (0 < iVar2) {
    DAT_70b462fc = DAT_70b462fc + iVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7138a900
// Entry: 0x7138a900 | Size: 112 bytes
// =========================================================================

undefined4
FUN_7138a900(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  DAT_70b442f8 = 0;
  DAT_70b422f8 = 0;
  DAT_70b462f8 = &DAT_70b422f8;
  DAT_70b462fc = &DAT_70b442f8;
  FUN_7137e7fc(param_1);
  FUN_713849f0(param_1,param_2);
  *param_3 = &DAT_70b422f8;
  *param_4 = &DAT_70b442f8;
  return 1;
}


// =========================================================================
// Function: FUN_7138aa40
// Entry: 0x7138aa40 | Size: 252 bytes
// =========================================================================

undefined4 FUN_7138aa40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = thunk_MwhHq(0x870);
  FUN_71371b90();
  piVar1 = DAT_70b46448;
  iVar4 = *DAT_70b46448;
  *(undefined4 *)(iVar4 + 0x278) = 0x10;
  **(undefined4 **)(iVar4 + 0x274) = 0x10;
  iVar5 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar5 + 4;
  *(undefined4 *)(iVar5 + 4) = uVar2;
  iVar5 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar5 + 4;
  *(undefined4 *)(iVar5 + 4) = param_1;
  iVar5 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar5 + 4;
  *(undefined4 *)(iVar5 + 4) = param_2;
  iVar5 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar5 + 4;
  *(undefined4 *)(iVar5 + 4) = param_3;
  iVar5 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar5 + 4;
  *(undefined4 *)(iVar5 + 4) = param_4;
  *(int *)(iVar4 + 0x274) = *(int *)(iVar4 + 0x274) + 4;
  iVar4 = *piVar1;
  **(undefined4 **)(iVar4 + 0x274) = s_RQCreateShader_70063c63;
  uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar4 + 0x270) = uVar3;
  *(uint *)(iVar4 + 0x274) = uVar3;
  FUN_7139bc08(iVar4);
  if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar4);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_7138ac04
// Entry: 0x7138ac04 | Size: 380 bytes
// =========================================================================

void FUN_7138ac04(undefined4 param_1)

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
  if (((DAT_70b46304 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46304), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb700);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb6f0);
      *(undefined1 *)(puVar10 + 9) = 1;
      uVar5 = DAT_7007578c;
      uVar4 = DAT_70075788;
      uVar3 = DAT_70075784;
      *puVar10 = DAT_70075780;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_700757a0;
      uVar5 = DAT_7007579c;
      uVar4 = DAT_70075798;
      uVar3 = DAT_70075794;
      puVar10[4] = DAT_70075790;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7138b078,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb700);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb6f0);
    if (*(char *)(iVar8 + 0x24) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xf9b5b55 >> iVar14) | (byte)(0x5a367b5 << ((uVar12 & 7) * -8 + 0x20 & 0xff))
        ;
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x5a367b5 >> (uVar15 & 0xff));
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
    DAT_70b46300 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46304);
  }
                    /* WARNING: Could not recover jumptable at 0x7138ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46300)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7138b944
// Entry: 0x7138b944 | Size: 296 bytes
// =========================================================================

uint FUN_7138b944(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  switch(param_3) {
  case 0:
    return param_2 * param_1 * 4;
  case 1:
    return param_2 * param_1 * 3;
  case 2:
  case 3:
  case 4:
  case 6:
    return param_2 * param_1 * 2;
  case 5:
    return param_2 * param_1;
  case 7:
  case 8:
  case 0xb:
  case 0x12:
    if (param_1 < 5) {
      param_1 = 4;
    }
    uVar1 = 4;
    if (4 < param_2) {
      uVar1 = param_2;
    }
    return uVar1 * param_1 >> 1;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
    if (param_1 < 5) {
      param_1 = 4;
    }
    uVar1 = 4;
    if (4 < param_2) {
      uVar1 = param_2;
    }
    return uVar1 * param_1;
  case 0xe:
  case 0xf:
    if (param_2 < 9) {
      param_2 = 8;
    }
    uVar1 = 8;
    if (8 < param_1) {
      uVar1 = param_1;
    }
    return uVar1 * param_2 * 2 + 7 >> 3;
  case 0x10:
  case 0x11:
    if (param_2 < 9) {
      param_2 = 8;
    }
    uVar1 = 8;
    if (8 < param_1) {
      uVar1 = param_1;
    }
    return uVar1 * param_2 * 4 + 7 >> 3;
  case 0x13:
    if (param_2 < 5) {
      param_2 = 4;
    }
    uVar1 = 4;
    if (4 < param_1) {
      uVar1 = param_1;
    }
    uVar1 = uVar1 * 2 + 6 & 0xfffffff9;
    break;
  case 0x14:
    if (param_2 < 5) {
      param_2 = 4;
    }
    uVar1 = 4;
    if (4 < param_1) {
      uVar1 = param_1;
    }
    uVar1 = uVar1 * 4 + 0xc & 0xfffffff3;
    break;
  default:
    return 0;
  }
  return uVar1 * (param_2 + 3 >> 2);
}


// =========================================================================
// Function: FUN_7138bad8
// Entry: 0x7138bad8 | Size: 256 bytes
// =========================================================================

undefined4 *
FUN_7138bad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)thunk_MwhHq(0x2c);
  puVar2[8] = 0xff;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *puVar2 = &PTR_FUN_70b0e07c;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puVar2[4] = param_1;
  puVar2[5] = 1;
  puVar2[6] = 1;
  puVar2[7] = 0;
  piVar1 = DAT_70b46448;
  iVar4 = *DAT_70b46448;
  *(undefined4 *)(iVar4 + 0x278) = 0x13;
  **(undefined4 **)(iVar4 + 0x274) = 0x13;
  *(int *)(iVar4 + 0x274) = *(int *)(iVar4 + 0x274) + 4;
  iVar4 = *piVar1;
  **(undefined4 **)(iVar4 + 0x274) = puVar2;
  *(int *)(iVar4 + 0x274) = *(int *)(iVar4 + 0x274) + 4;
  iVar4 = *piVar1;
  **(undefined4 **)(iVar4 + 0x274) = s_Unknown_7006305d;
  uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar4 + 0x270) = uVar3;
  *(uint *)(iVar4 + 0x274) = uVar3;
  FUN_7139bc08(iVar4);
  if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar4);
  }
  return puVar2;
}


// =========================================================================
// Function: FUN_7138bca4
// Entry: 0x7138bca4 | Size: 508 bytes
// =========================================================================

void FUN_7138bca4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = DAT_70b46448;
  if (DAT_70b46318 == param_1) {
    DAT_70b46318 = 0;
  }
  if (DAT_70b4631c == param_1) {
    DAT_70b4631c = 0;
  }
  if (DAT_70b46320 == param_1) {
    DAT_70b46320 = 0;
  }
  if (DAT_70b46324 == param_1) {
    DAT_70b46324 = 0;
  }
  if (DAT_70b46328 == param_1) {
    DAT_70b46328 = 0;
  }
  if (DAT_70b4632c == param_1) {
    DAT_70b4632c = 0;
  }
  if (DAT_70b46330 == param_1) {
    DAT_70b46330 = 0;
  }
  if (DAT_70b46334 == param_1) {
    DAT_70b46334 = 0;
  }
  if (DAT_70b46338 == param_1) {
    DAT_70b46338 = 0;
  }
  if (DAT_70b4633c == param_1) {
    DAT_70b4633c = 0;
  }
  if (DAT_70b46340 == param_1) {
    DAT_70b46340 = 0;
  }
  if (DAT_70b46344 == param_1) {
    DAT_70b46344 = 0;
  }
  if (DAT_70b46348 == param_1) {
    DAT_70b46348 = 0;
  }
  if (DAT_70b4634c == param_1) {
    DAT_70b4634c = 0;
  }
  if (DAT_70b46350 == param_1) {
    DAT_70b46350 = 0;
  }
  if (DAT_70b46354 == param_1) {
    DAT_70b46354 = 0;
  }
  if (DAT_70b46358 == param_1) {
    DAT_70b46358 = 0;
  }
  if (DAT_70b4635c == param_1) {
    DAT_70b4635c = 0;
  }
  if (DAT_70b46360 == param_1) {
    DAT_70b46360 = 0;
  }
  if (DAT_70b46364 == param_1) {
    DAT_70b46364 = 0;
  }
  if (DAT_70b46368 == param_1) {
    DAT_70b46368 = 0;
  }
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 0x19;
  **(undefined4 **)(iVar3 + 0x274) = 0x19;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(int **)(iVar3 + 0x274) = param_1;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
  uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar2;
  *(uint *)(iVar3 + 0x274) = uVar2;
  FUN_7139bc08(iVar3);
  if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138bf70
// Entry: 0x7138bf70 | Size: 212 bytes
// =========================================================================

void FUN_7138bf70(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x20);
  bVar4 = iVar3 != param_2;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  if (bVar4 && iVar3 != 0) {
    *(int *)(param_1 + 0x20) = param_2;
    piVar1 = DAT_70b46448;
    iVar3 = *DAT_70b46448;
    *(undefined4 *)(iVar3 + 0x278) = 0x17;
    **(undefined4 **)(iVar3 + 0x274) = 0x17;
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar1;
    **(int **)(iVar3 + 0x274) = param_1;
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar1;
    **(int **)(iVar3 + 0x274) = param_2;
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar1;
    **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
    uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar3 + 0x270) = uVar2;
    *(uint *)(iVar3 + 0x274) = uVar2;
    FUN_7139bc08(iVar3);
    if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar3);
      return;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138c0d4
// Entry: 0x7138c0d4 | Size: 196 bytes
// =========================================================================

void FUN_7138c0d4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  bVar4 = iVar3 == param_2;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0x18);
  }
  if (bVar4 && iVar3 == param_3) {
    return;
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x18) = param_3;
  piVar1 = DAT_70b46448;
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 0x15;
  **(undefined4 **)(iVar3 + 0x274) = 0x15;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(int **)(iVar3 + 0x274) = param_1;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
  uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar2;
  *(uint *)(iVar3 + 0x274) = uVar2;
  FUN_7139bc08(iVar3);
  if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138c228
// Entry: 0x7138c228 | Size: 192 bytes
// =========================================================================

void FUN_7138c228(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    param_2 = 2;
  }
  if (param_2 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  piVar1 = DAT_70b46448;
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 0x14;
  **(undefined4 **)(iVar3 + 0x274) = 0x14;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(int **)(iVar3 + 0x274) = param_1;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
  uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar2;
  *(uint *)(iVar3 + 0x274) = uVar2;
  FUN_7139bc08(iVar3);
  if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138c3c4
// Entry: 0x7138c3c4 | Size: 24 bytes
// =========================================================================

void FUN_7138c3c4(int *param_1,uint param_2)

{
  if (9 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x7138c3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 2);
  return;
}


// =========================================================================
// Function: FUN_7138c3f4
// Entry: 0x7138c3f4 | Size: 24 bytes
// =========================================================================

void FUN_7138c3f4(int *param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x7138c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0xc);
  return;
}


// =========================================================================
// Function: FUN_7138c424
// Entry: 0x7138c424 | Size: 16 bytes
// =========================================================================

void FUN_7138c424(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x7138c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0x11);
  return;
}


// =========================================================================
// Function: FUN_7138c44c
// Entry: 0x7138c44c | Size: 16 bytes
// =========================================================================

void FUN_7138c44c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x7138c458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0x12);
  return;
}


// =========================================================================
// Function: FUN_7138c474
// Entry: 0x7138c474 | Size: 24 bytes
// =========================================================================

void FUN_7138c474(int *param_1,uint param_2)

{
  if (3 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x7138c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 0xd);
  return;
}


// =========================================================================
// Function: FUN_7138c4a4
// Entry: 0x7138c4a4 | Size: 160 bytes
// =========================================================================

void FUN_7138c4a4(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = DAT_70b4223c;
  piVar3 = DAT_70b42238;
  piVar2 = DAT_70b42234;
  piVar1 = DAT_70b42230;
  iVar6 = *DAT_70b42230;
  if (iVar6 != 0) {
    iVar5 = *DAT_70b42234;
    iVar7 = *DAT_70b4223c;
    if (*DAT_70b42238 < iVar7) {
      if (iVar5 != 0) {
        imp_free();
        iVar7 = *piVar4;
      }
      *piVar3 = (iVar7 << 2) / 3;
      iVar5 = imp_malloc();
      *piVar2 = iVar5;
      iVar7 = *piVar4;
      iVar6 = *piVar1;
    }
    imp___aeabi_memcpy(iVar5,iVar6,iVar7);
    *piVar1 = *piVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7138c630
// Entry: 0x7138c630 | Size: 284 bytes
// =========================================================================

void FUN_7138c630(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  FUN_7138c830();
  piVar1 = DAT_70b46448;
  iVar2 = *DAT_70b46448;
  if (*(uint *)(iVar2 + 0x264) <= param_3 + *(int *)(iVar2 + 0x324) + 0x400U) {
    FUN_7139a77c();
    iVar2 = *piVar1;
  }
  *(undefined4 *)(iVar2 + 0x278) = 2;
  **(undefined4 **)(iVar2 + 0x274) = 2;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = param_1;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(int **)(iVar2 + 0x274) = param_3;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  if (param_3 != 0) {
    iVar2 = *piVar1;
    imp___aeabi_memcpy(*(undefined4 *)(iVar2 + 0x274),param_2,param_3);
    *(uint *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + (param_3 + 3U & 0xfffffffc);
  }
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
  uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar3;
  *(uint *)(iVar2 + 0x274) = uVar3;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138c830
// Entry: 0x7138c830 | Size: 224 bytes
// =========================================================================

void FUN_7138c830(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*DAT_70b4643c != 0) {
    FUN_7138e188(0);
  }
  if (*DAT_70b4636c != param_1) {
    *DAT_70b4636c = param_1;
    *DAT_70b46370 = 1;
    iVar3 = *DAT_70b46448;
    *(undefined4 *)(iVar3 + 0x278) = 0;
    **(undefined4 **)(iVar3 + 0x274) = 0;
    iVar1 = *(int *)(iVar3 + 0x274);
    *(int *)(iVar3 + 0x274) = iVar1 + 4;
    *(int *)(iVar1 + 4) = param_1;
    iVar1 = *(int *)(iVar3 + 0x274);
    *(int *)(iVar3 + 0x274) = iVar1 + 4;
    *(char **)(iVar1 + 4) = s_Unknown_7006305d;
    uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar3 + 0x270) = uVar2;
    *(uint *)(iVar3 + 0x274) = uVar2;
    FUN_7139bc08(iVar3);
    if (*(int *)(iVar3 + 0x274) + 0x401U <= *(uint *)(iVar3 + 0x264)) {
      return;
    }
    FUN_7139a77c(iVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138ca1c
// Entry: 0x7138ca1c | Size: 224 bytes
// =========================================================================

undefined4 FUN_7138ca1c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = thunk_MwhHq(0x24);
  FUN_7137793c();
  *DAT_70b4636c = uVar1;
  *DAT_70b46370 = 1;
  iVar4 = *DAT_70b46448;
  *(undefined4 *)(iVar4 + 0x278) = 1;
  **(undefined4 **)(iVar4 + 0x274) = 1;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(undefined4 *)(iVar2 + 4) = *DAT_70b4636c;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(char **)(iVar2 + 4) = s_VertexCreate_70072188;
  uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar4 + 0x270) = uVar3;
  *(uint *)(iVar4 + 0x274) = uVar3;
  FUN_7139bc08(iVar4);
  if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar4);
  }
  FUN_7138c630(uVar1,param_1,param_2);
  return uVar1;
}


// =========================================================================
// Function: FUN_7138cc40
// Entry: 0x7138cc40 | Size: 484 bytes
// =========================================================================

void FUN_7138cc40(undefined4 param_1,int param_2,code *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*DAT_70b4643c != 0) {
    FUN_7138e188(0);
  }
  if (*DAT_70b4636c != 0) {
    *DAT_70b4636c = 0;
    piVar3 = DAT_70b46448;
    iVar2 = *DAT_70b46448;
    *(undefined4 *)(iVar2 + 0x278) = 0;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
    uVar1 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar2 + 0x270) = uVar1;
    *(uint *)(iVar2 + 0x274) = uVar1;
    FUN_7139bc08(iVar2);
    if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar2);
    }
  }
  piVar3 = DAT_70b46448;
  if (param_3 == (code *)0x0) {
    iVar2 = *DAT_70b46448;
    if (*(uint *)(iVar2 + 0x264) <= param_2 + *(int *)(iVar2 + 0x324) + 0x400U) {
      FUN_7139a77c();
      iVar2 = *piVar3;
    }
    *(undefined4 *)(iVar2 + 0x278) = 3;
    **(undefined4 **)(iVar2 + 0x274) = 3;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    **(int **)(iVar2 + 0x274) = param_2;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    imp___aeabi_memcpy(*(undefined4 *)(iVar2 + 0x274),param_1,param_2);
    *(uint *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + (param_2 + 3U & 0xfffffffc);
  }
  else {
    (*param_3)();
    piVar3 = DAT_70b46448;
  }
  iVar2 = *piVar3;
  **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
  uVar1 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar1;
  *(uint *)(iVar2 + 0x274) = uVar1;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
  }
  *DAT_70b46370 = 1;
  return;
}


// =========================================================================
// Function: FUN_7138cfe0
// Entry: 0x7138cfe0 | Size: 316 bytes
// =========================================================================

void FUN_7138cfe0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = DAT_70b46448;
  if (*DAT_70b4636c == param_1) {
    *DAT_70b4636c = 0;
    iVar2 = *piVar1;
    *(undefined4 *)(iVar2 + 0x278) = 0;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar1;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar1;
    **(undefined4 **)(iVar2 + 0x274) = param_2;
    uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar2 + 0x270) = uVar3;
    *(uint *)(iVar2 + 0x274) = uVar3;
    FUN_7139bc08(iVar2);
    if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar2);
    }
  }
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x278) = 4;
  **(undefined4 **)(iVar2 + 0x274) = 4;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(int **)(iVar2 + 0x274) = param_1;
  *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
  iVar2 = *piVar1;
  **(undefined4 **)(iVar2 + 0x274) = param_2;
  uVar3 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar3;
  *(uint *)(iVar2 + 0x274) = uVar3;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138d1e4
// Entry: 0x7138d1e4 | Size: 452 bytes
// =========================================================================

void FUN_7138d1e4(undefined4 param_1,int param_2,code *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*DAT_70b4636c != 0) {
    *DAT_70b4636c = 0;
    piVar3 = DAT_70b46448;
    iVar2 = *DAT_70b46448;
    *(undefined4 *)(iVar2 + 0x278) = 0;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    **(undefined4 **)(iVar2 + 0x274) = 0;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
    uVar1 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar2 + 0x270) = uVar1;
    *(uint *)(iVar2 + 0x274) = uVar1;
    FUN_7139bc08(iVar2);
    if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar2);
    }
  }
  piVar3 = DAT_70b46448;
  if (param_3 == (code *)0x0) {
    iVar2 = *DAT_70b46448;
    if (*(uint *)(iVar2 + 0x264) <= param_2 + *(int *)(iVar2 + 0x324) + 0x400U) {
      FUN_7139a77c();
      iVar2 = *piVar3;
    }
    *(undefined4 *)(iVar2 + 0x278) = 3;
    **(undefined4 **)(iVar2 + 0x274) = 3;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    **(int **)(iVar2 + 0x274) = param_2;
    *(int *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + 4;
    iVar2 = *piVar3;
    imp___aeabi_memcpy(*(undefined4 *)(iVar2 + 0x274),param_1,param_2);
    *(uint *)(iVar2 + 0x274) = *(int *)(iVar2 + 0x274) + (param_2 + 3U & 0xfffffffc);
  }
  else {
    (*param_3)();
    piVar3 = DAT_70b46448;
  }
  iVar2 = *piVar3;
  **(undefined4 **)(iVar2 + 0x274) = s_Unknown_7006305d;
  uVar1 = *(int *)(iVar2 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar2 + 0x270) = uVar1;
  *(uint *)(iVar2 + 0x274) = uVar1;
  FUN_7139bc08(iVar2);
  if (*(uint *)(iVar2 + 0x264) < *(int *)(iVar2 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar2);
  }
  *DAT_70b46370 = 1;
  return;
}


// =========================================================================
// Function: FUN_7138d528
// Entry: 0x7138d528 | Size: 188 bytes
// =========================================================================

void FUN_7138d528(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*DAT_70b4636c == param_1) {
    return;
  }
  *DAT_70b4636c = param_1;
  *DAT_70b46370 = 1;
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 0;
  **(undefined4 **)(iVar3 + 0x274) = 0;
  iVar2 = *(int *)(iVar3 + 0x274);
  *(int *)(iVar3 + 0x274) = iVar2 + 4;
  *(int *)(iVar2 + 4) = param_1;
  iVar2 = *(int *)(iVar3 + 0x274);
  *(int *)(iVar3 + 0x274) = iVar2 + 4;
  *(char **)(iVar2 + 4) = s_Unknown_7006305d;
  uVar1 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar1;
  *(uint *)(iVar3 + 0x274) = uVar1;
  FUN_7139bc08(iVar3);
  if (*(int *)(iVar3 + 0x274) + 0x401U <= *(uint *)(iVar3 + 0x264)) {
    return;
  }
  FUN_7139a77c(iVar3);
  return;
}


// =========================================================================
// Function: FUN_7138df4c
// Entry: 0x7138df4c | Size: 308 bytes
// =========================================================================

void FUN_7138df4c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_70b46448;
  if ((*DAT_70b4643c == param_1) && (*DAT_70b4643c != 0)) {
    iVar4 = *DAT_70b46448;
    *(undefined4 *)(iVar4 + 0x278) = 0xb;
    **(undefined4 **)(iVar4 + 0x274) = 0xb;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(char **)(iVar2 + 4) = s_Unknown_7006305d;
    uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar4 + 0x270) = uVar3;
    *(uint *)(iVar4 + 0x274) = uVar3;
    FUN_7139bc08(iVar4);
    if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar4);
    }
    *DAT_70b4643c = 0;
  }
  iVar4 = *piVar1;
  *(undefined4 *)(iVar4 + 0x278) = 0xc;
  **(undefined4 **)(iVar4 + 0x274) = 0xc;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(int *)(iVar2 + 4) = param_1;
  iVar2 = *(int *)(iVar4 + 0x274);
  *(int *)(iVar4 + 0x274) = iVar2 + 4;
  *(char **)(iVar2 + 4) = s_Unknown_7006305d;
  uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar4 + 0x270) = uVar3;
  *(uint *)(iVar4 + 0x274) = uVar3;
  FUN_7139bc08(iVar4);
  if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar4);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138e188
// Entry: 0x7138e188 | Size: 240 bytes
// =========================================================================

void FUN_7138e188(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*DAT_70b4643c != param_1) {
    iVar3 = *DAT_70b46448;
    *(undefined4 *)(iVar3 + 0x278) = 0xb;
    **(undefined4 **)(iVar3 + 0x274) = 0xb;
    iVar1 = *(int *)(iVar3 + 0x274);
    *(int *)(iVar3 + 0x274) = iVar1 + 4;
    *(int *)(iVar1 + 4) = param_1;
    iVar1 = *(int *)(iVar3 + 0x274);
    *(int *)(iVar3 + 0x274) = iVar1 + 4;
    *(char **)(iVar1 + 4) = s_Unknown_7006305d;
    uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar3 + 0x270) = uVar2;
    *(uint *)(iVar3 + 0x274) = uVar2;
    FUN_7139bc08(iVar3);
    if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar3);
    }
    *DAT_70b4643c = param_1;
    if (param_1 != 0) {
      DAT_70b4638c = 0xffff;
      *DAT_70b4636c = 0;
      *DAT_70b422bc = 0;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7138e3a8
// Entry: 0x7138e3a8 | Size: 416 bytes
// =========================================================================

void FUN_7138e3a8(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*DAT_70b4643c != 0) {
    iVar4 = *DAT_70b46448;
    *(undefined4 *)(iVar4 + 0x278) = 0xb;
    **(undefined4 **)(iVar4 + 0x274) = 0xb;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(char **)(iVar2 + 4) = s_Unknown_7006305d;
    uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar4 + 0x270) = uVar3;
    *(uint *)(iVar4 + 0x274) = uVar3;
    FUN_7139bc08(iVar4);
    if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar4);
    }
    *DAT_70b4643c = 0;
  }
  pbVar1 = DAT_70b46370;
  if ((*DAT_70b46370 != 0) || (iVar2 = imp_memcmp(param_1,&DAT_70b46388,0xb4), iVar2 != 0)) {
    imp___aeabi_memcpy4(&DAT_70b46388,param_1,0xb4);
    iVar4 = *DAT_70b46448;
    *(undefined4 *)(iVar4 + 0x278) = 0xd;
    **(undefined4 **)(iVar4 + 0x274) = 0xd;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(uint *)(iVar2 + 4) = (uint)*pbVar1;
    iVar2 = *(int *)(iVar4 + 0x274) + 4;
    *(int *)(iVar4 + 0x274) = iVar2;
    imp___aeabi_memcpy(iVar2,param_1,0xb4);
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 0xb4;
    *(char **)(iVar2 + 0xb4) = s_Unknown_7006305d;
    uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar4 + 0x270) = uVar3;
    *(uint *)(iVar4 + 0x274) = uVar3;
    FUN_7139bc08(iVar4);
    if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar4);
    }
    *pbVar1 = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_7138e724
// Entry: 0x7138e724 | Size: 256 bytes
// =========================================================================

void FUN_7138e724(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = DAT_70b46370;
  if ((*DAT_70b46370 != 0) || (iVar2 = imp_memcmp(param_1,&DAT_70b46388,0xb4), iVar2 != 0)) {
    imp___aeabi_memcpy4(&DAT_70b46388,param_1,0xb4);
    iVar4 = *DAT_70b46448;
    *(undefined4 *)(iVar4 + 0x278) = 0xd;
    **(undefined4 **)(iVar4 + 0x274) = 0xd;
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 4;
    *(uint *)(iVar2 + 4) = (uint)*pbVar1;
    iVar2 = *(int *)(iVar4 + 0x274) + 4;
    *(int *)(iVar4 + 0x274) = iVar2;
    imp___aeabi_memcpy(iVar2,param_1,0xb4);
    iVar2 = *(int *)(iVar4 + 0x274);
    *(int *)(iVar4 + 0x274) = iVar2 + 0xb4;
    *(char **)(iVar2 + 0xb4) = s_Unknown_7006305d;
    uVar3 = *(int *)(iVar4 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar4 + 0x270) = uVar3;
    *(uint *)(iVar4 + 0x274) = uVar3;
    FUN_7139bc08(iVar4);
    if (*(uint *)(iVar4 + 0x264) < *(int *)(iVar4 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar4);
    }
    *pbVar1 = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_7138eec8
// Entry: 0x7138eec8 | Size: 80 bytes
// =========================================================================

void FUN_7138eec8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)*param_1;
  *param_1 = (int)((int *)*param_1 + 1);
  imp_glGenBuffers(1,iVar3 + 8);
  *DAT_70b42230 = 0;
  iVar1 = *(int *)(iVar3 + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar3 + 0x1c) = iVar1;
    iVar2 = iVar1;
  }
  imp_glBindBuffer(0x8892,iVar2);
  return;
}


// =========================================================================
// Function: FUN_7138ef88
// Entry: 0x7138ef88 | Size: 144 bytes
// =========================================================================

void FUN_7138ef88(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  iVar3 = *piVar2;
  *param_1 = (int)(piVar2 + 1);
  iVar1 = piVar2[1];
  piVar2 = piVar2 + 2;
  *param_1 = (int)piVar2;
  if (iVar1 != 0) {
    if (*(char *)(iVar3 + 0x20) != '\0') {
      DAT_70b46528 = DAT_70b46528 - *(int *)(iVar3 + 4);
      piVar2 = (int *)*param_1;
    }
    *param_1 = (iVar1 + 3U & 0xfffffffc) + (int)piVar2;
    *(int *)(iVar3 + 4) = iVar1;
    *(undefined1 *)(iVar3 + 0x20) = 1;
    DAT_70b46528 = DAT_70b46528 + iVar1;
    imp_glBufferData(0x8892,iVar1,piVar2,0x88e4);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138f2b4
// Entry: 0x7138f2b4 | Size: 80 bytes
// =========================================================================

void FUN_7138f2b4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)*param_1;
  *param_1 = (int)((int *)*param_1 + 1);
  imp_glGenBuffers(1,iVar3 + 0xc);
  *DAT_70b42138 = 0;
  iVar1 = *(int *)(iVar3 + 0xc);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar3 + 0x10) = iVar1;
    iVar2 = iVar1;
  }
  imp_glBindBuffer(0x8893,iVar2);
  return;
}


// =========================================================================
// Function: FUN_7138f374
// Entry: 0x7138f374 | Size: 144 bytes
// =========================================================================

void FUN_7138f374(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  iVar3 = *piVar2;
  *param_1 = (int)(piVar2 + 1);
  iVar1 = piVar2[1];
  piVar2 = piVar2 + 2;
  *param_1 = (int)piVar2;
  if (iVar1 != 0) {
    if (*(char *)(iVar3 + 0x14) != '\0') {
      DAT_70b46524 = DAT_70b46524 - *(int *)(iVar3 + 8);
      piVar2 = (int *)*param_1;
    }
    *param_1 = (iVar1 + 3U & 0xfffffffc) + (int)piVar2;
    *(int *)(iVar3 + 8) = iVar1;
    *(undefined1 *)(iVar3 + 0x14) = 1;
    DAT_70b46524 = DAT_70b46524 + iVar1;
    imp_glBufferData(0x8893,iVar1,piVar2,0x88e4);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7138f608
// Entry: 0x7138f608 | Size: 172 bytes
// =========================================================================

void FUN_7138f608(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)*param_1;
  *param_1 = (int)((int *)*param_1 + 1);
  puVar3 = (undefined4 *)(iVar2 + 0x28);
  imp_glGenTextures(1,puVar3);
  piVar1 = DAT_70b42224;
  if (*DAT_70b42224 != 0x14) {
    imp_glActiveTexture(0x84d4);
    *piVar1 = 0x14;
  }
  imp_glBindTexture(0xde1,*puVar3);
  DAT_70b42220 = *puVar3;
  imp_glTexParameteri(0xde1,0x2801,0x2601);
  imp_glTexParameteri(0xde1,0x2800,0x2601);
  imp_glTexParameteri(0xde1,0x2802,0x812f);
  imp_glTexParameteri(0xde1,0x2803,0x812f);
  return;
}


// =========================================================================
// Function: FUN_7138f7d0
// Entry: 0x7138f7d0 | Size: 140 bytes
// =========================================================================

void FUN_7138f7d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  *param_1 = (int)((int *)*param_1 + 1);
  piVar1 = DAT_70b42224;
  if (*DAT_70b42224 != 0x14) {
    imp_glActiveTexture(0x84d4);
    *piVar1 = 0x14;
  }
  imp_glBindTexture(0xde1,*(undefined4 *)(iVar2 + 0x28));
  DAT_70b42220 = *(undefined4 *)(iVar2 + 0x28);
  imp_glTexParameteri(0xde1,0x2802,*(undefined4 *)(&DAT_70075830 + *(int *)(iVar2 + 0x14) * 4));
  imp_glTexParameteri(0xde1,0x2803,*(undefined4 *)(&DAT_70075830 + *(int *)(iVar2 + 0x18) * 4));
  return;
}


// =========================================================================
// Function: FUN_7138f944
// Entry: 0x7138f944 | Size: 148 bytes
// =========================================================================

void FUN_7138f944(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  iVar4 = *piVar2;
  *param_1 = (int)(piVar2 + 1);
  iVar3 = piVar2[1];
  *param_1 = (int)(piVar2 + 2);
  piVar2 = DAT_70b42224;
  if (*DAT_70b42224 != 0x14) {
    imp_glActiveTexture(0x84d4);
    *piVar2 = 0x14;
  }
  imp_glBindTexture(0xde1,*(undefined4 *)(iVar4 + 0x28));
  DAT_70b42220 = *(undefined4 *)(iVar4 + 0x28);
  uVar1 = FUN_71ba1b94(1 << (iVar3 + 1U & 0xff));
  if (iVar3 == 0xff) {
    uVar1 = 0x3f800000;
  }
  imp_glTexParameterf(0xde1,0x84fe,uVar1);
  return;
}


// =========================================================================
// Function: FUN_7138faa0
// Entry: 0x7138faa0 | Size: 144 bytes
// =========================================================================

void FUN_7138faa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  *param_1 = (int)((int *)*param_1 + 1);
  piVar1 = DAT_70b42224;
  if (*DAT_70b42224 != 0x14) {
    imp_glActiveTexture(0x84d4);
    *piVar1 = 0x14;
  }
  imp_glBindTexture(0xde1,*(undefined4 *)(iVar2 + 0x28));
  DAT_70b42220 = *(undefined4 *)(iVar2 + 0x28);
  if (2 < *(uint *)(iVar2 + 0x1c)) {
    return;
  }
  imp_glTexParameteri(0xde1,0x2801,*(undefined4 *)(&DAT_70076258 + *(uint *)(iVar2 + 0x1c) * 4));
  imp_glTexParameteri(0xde1,0x2800,0x2601);
  return;
}


// =========================================================================
// Function: FUN_7138fcbc
// Entry: 0x7138fcbc | Size: 292 bytes
// =========================================================================

void FUN_7138fcbc(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  piVar2 = (int *)*param_1;
  iVar6 = *piVar2;
  piVar8 = piVar2 + 5;
  *param_1 = (int)(piVar2 + 1);
  iVar3 = piVar2[1];
  *param_1 = (int)(piVar2 + 2);
  uVar5 = piVar2[2];
  *param_1 = (int)(piVar2 + 3);
  uVar4 = piVar2[3];
  *param_1 = (int)(piVar2 + 4);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  iVar9 = piVar2[4];
  uVar7 = 1;
  if (1 < uVar4) {
    uVar7 = uVar4;
  }
  *param_1 = (iVar9 + 3U & 0xfffffffc) + (int)piVar8;
  piVar2 = DAT_70b42224;
  iVar1 = *(int *)(iVar6 + 0x10) * 0x10;
  if (*DAT_70b42224 != 0x14) {
    imp_glActiveTexture(0x84d4);
    *piVar2 = 0x14;
  }
  imp_glBindTexture(0xde1,*(undefined4 *)(iVar6 + 0x28));
  DAT_70b42220 = *(undefined4 *)(iVar6 + 0x28);
  if (*(int *)(&DAT_700bb77c + iVar1) != 0) {
    imp_glCompressedTexImage2D
              (0xde1,iVar3,*(undefined4 *)(&DAT_700bb784 + iVar1),uVar5,uVar7,0,iVar9,piVar8);
    return;
  }
  imp_glTexImage2D(0xde1,iVar3,*(undefined4 *)(&DAT_700bb780 + iVar1),uVar5,uVar7,0,
                   *(undefined4 *)(&DAT_700bb780 + iVar1),*(undefined4 *)(&DAT_700bb784 + iVar1),
                   piVar8);
  return;
}


// =========================================================================
// Function: FUN_7138fec8
// Entry: 0x7138fec8 | Size: 332 bytes
// =========================================================================

void FUN_7138fec8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar4 = (uint *)*param_1;
  uVar5 = *puVar4;
  *param_1 = (int)(puVar4 + 1);
  uVar6 = puVar4[4];
  uVar9 = puVar4[1];
  uVar10 = puVar4[2];
  uVar8 = puVar4[3];
  *param_1 = (int)(puVar4 + 5);
  uVar11 = puVar4[5];
  *param_1 = (int)(puVar4 + 6);
  uVar7 = puVar4[6];
  *param_1 = (int)(puVar4 + 7);
  iVar3 = FUN_71ba2cf0(DAT_70b46530,uVar9);
  uVar2 = DAT_70b4653c;
  uVar1 = DAT_70b46538;
  if (iVar3 != 0) {
    iVar3 = FUN_71ba2cf0(DAT_70b46534,uVar10);
    if (((iVar3 != 0) && (iVar3 = FUN_71ba2cf0(uVar1,uVar8), iVar3 != 0)) &&
       (iVar3 = FUN_71ba2cf0(uVar2,uVar6), iVar3 != 0)) goto LAB_7138ff9c;
  }
  DAT_70b46530 = uVar9;
  DAT_70b46534 = uVar10;
  DAT_70b46538 = uVar8;
  DAT_70b4653c = uVar6;
  imp_glClearColor(uVar9,uVar10,uVar8);
LAB_7138ff9c:
  iVar3 = FUN_71ba2cf0(uVar11,DAT_70b46540);
  if (iVar3 == 0) {
    DAT_70b46540 = uVar11;
    imp_glClearDepthf(uVar11);
  }
  if (uVar7 != DAT_70b46544) {
    DAT_70b46544 = uVar7;
    imp_glClearStencil();
  }
  imp_glClear((uVar5 & 2) << 7 | (uVar5 & 4) << 8 | (uVar5 & 1) << 0xe);
  return;
}


// =========================================================================
// Function: FUN_713901e8
// Entry: 0x713901e8 | Size: 420 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_713901e8(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_402c [16384];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  piVar2 = (int *)*param_1;
  iVar7 = *piVar2;
  *param_1 = (int)(piVar2 + 1);
  iVar6 = piVar2[1];
  *param_1 = (int)(piVar2 + 2);
  iVar5 = piVar2[2];
  *param_1 = (int)(piVar2 + 3);
  iVar3 = piVar2[3];
  *param_1 = (int)(piVar2 + 4);
  iVar4 = piVar2[4];
  *param_1 = (int)(piVar2 + 5);
  *(int *)(iVar7 + 0x3ec) = iVar3;
  *(int *)(iVar7 + 0x854) = iVar4;
  iVar3 = FUN_71374494(iVar7,iVar6,iVar5);
  if (iVar3 == 0) {
    imp___strcpy_chk(auStack_402c,iVar6,0x4000);
    uVar1 = imp_strlen(s___ATBEGIN_70075bf0);
    for (iVar3 = imp_strstr(auStack_402c,s___ATBEGIN___70062670); iVar3 != 0;
        iVar3 = imp_strstr(iVar3,s___ATBEGIN___70062670)) {
      imp___aeabi_memcpy(iVar3,s___ATBEGIN_70075bf0,uVar1);
    }
    uVar1 = imp_strlen(s_ATEND___70075a80);
    for (iVar3 = imp_strstr(auStack_402c,s___ATEND___7006ec9f); iVar3 != 0;
        iVar3 = imp_strstr(iVar3,s___ATEND___7006ec9f)) {
      imp___aeabi_memcpy(iVar3,s_ATEND___70075a80,uVar1);
    }
    iVar3 = FUN_71374494(iVar7,auStack_402c,iVar5);
    if (iVar3 == 0) {
      imp_raise(5);
    }
  }
  imp_free(iVar6);
  imp_free(iVar5);
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_71390688
// Entry: 0x71390688 | Size: 784 bytes
// =========================================================================

void FUN_71390688(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar1 = (int *)*param_1;
  iVar6 = *piVar1;
  *param_1 = (int)(piVar1 + 1);
  uVar8 = piVar1[1];
  *param_1 = (int)(piVar1 + 2);
  FUN_71372398(iVar6);
  if (*(int **)(iVar6 + 0x86c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar6 + 0x86c) + 4))();
  }
  if (uVar8 != 8) {
    puVar2 = (uint *)*param_1;
    do {
      puVar5 = puVar2 + 1;
      uVar4 = *puVar2;
      *param_1 = (int)puVar5;
      if (uVar8 < 4) {
        if ((int)uVar4 < 0x19) {
          piVar1 = (int *)(iVar6 + 4 + uVar4 * 0x1c);
        }
        else {
          piVar1 = (int *)(iVar6 + uVar4 * 0x1c + 0x134);
        }
joined_r0x713907cc:
        if (uVar8 < 8) {
          piVar7 = piVar1;
          switch(uVar8) {
          case 0:
            *param_1 = (int)(puVar2 + 2);
            if (-1 < *piVar1) {
              imp_glUniform1fv(*piVar1,1,puVar5);
            }
            break;
          case 1:
            *param_1 = (int)(puVar2 + 3);
            if (-1 < *piVar1) {
              imp_glUniform2fv(*piVar1,1,puVar5);
            }
            break;
          case 2:
            *param_1 = (int)(puVar2 + 4);
            if (-1 < *piVar1) {
              imp_glUniform3fv(*piVar1,1,puVar5);
            }
            break;
          case 3:
            *param_1 = (int)(puVar2 + 5);
            iVar3 = *piVar1;
            if (-1 < iVar3) {
              uVar4 = 1;
              goto LAB_71390964;
            }
            break;
          case 4:
            *param_1 = (int)(puVar2 + 0x11);
            if (-1 < *piVar1) {
              uStack_48 = *puVar5;
              uStack_40 = puVar2[3];
              uStack_44 = puVar2[2];
              uStack_30 = puVar2[9];
              uStack_3c = puVar2[5];
              uStack_38 = puVar2[6];
              uStack_34 = puVar2[7];
              uStack_28 = puVar2[0xb];
              uStack_2c = puVar2[10];
              imp_glUniformMatrix3fv(*piVar1,1,0,&uStack_48);
            }
            break;
          case 5:
            *param_1 = (int)(puVar2 + 0x11);
            if (-1 < *piVar1) {
              imp_glUniformMatrix4fv(*piVar1,1,0);
            }
            break;
          case 6:
            goto switchD_71390808_caseD_6;
          case 7:
            *param_1 = (int)(puVar2 + 5);
            imp_glVertexAttrib4fv(3,puVar5);
          }
        }
      }
      else {
        if ((uVar8 & 0xfffffffe) == 4) {
          if ((int)uVar4 < 5) {
            piVar1 = (int *)(uVar4 * 0x4c + iVar6 + 0x2a4);
          }
          else {
            piVar1 = (int *)(uVar4 * 0x4c + iVar6 + 0x3e0);
          }
          goto joined_r0x713907cc;
        }
        piVar1 = (int *)0x0;
        piVar7 = (int *)(iVar6 + 0x3d4);
        if (uVar8 != 6) goto joined_r0x713907cc;
switchD_71390808_caseD_6:
        *param_1 = (int)(puVar5 + uVar4 * 4);
        iVar3 = *piVar7;
        if (-1 < iVar3) {
LAB_71390964:
          imp_glUniform4fv(iVar3,uVar4,puVar5);
        }
      }
      puVar2 = (uint *)*param_1 + 1;
      uVar8 = *(uint *)*param_1;
      *param_1 = (int)puVar2;
    } while (uVar8 != 8);
  }
  return;
}


// =========================================================================
// Function: FUN_71390b08
// Entry: 0x71390b08 | Size: 480 bytes
// =========================================================================

void FUN_71390b08(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  
  puVar5 = (uint *)*param_1;
  puVar15 = puVar5 + 1;
  uVar11 = *puVar5;
  *param_1 = (int)(puVar5 + 0x2e);
  uVar2 = *DAT_70b42230;
  if (uVar2 != 0) {
    uVar11 = uVar11 | 1;
  }
  uVar3 = uVar2;
  if (uVar11 == 0) {
    uVar3 = (uint)DAT_70b46520;
  }
  if ((uVar11 != 0 || uVar3 != 0) || (iVar10 = imp_memcmp(&DAT_70b4646c,puVar15,0xb4), iVar10 != 0))
  {
    iVar14 = 0;
    iVar10 = 0;
    do {
      puVar13 = (uint *)((int)&DAT_70b4646c + iVar14);
      puVar5 = (uint *)((int)puVar15 + iVar14);
      if ((char)*puVar5 == '\0') {
        bVar1 = DAT_70b46520;
        if (DAT_70b46520 == 0) {
          bVar1 = (byte)*puVar13;
        }
        if (DAT_70b46520 != 0 || bVar1 != 0) {
          imp_glDisableVertexAttribArray(iVar10);
          *(byte *)puVar13 = 0;
        }
      }
      else {
        if (((byte)*puVar13 == 0) || (DAT_70b46520 != 0)) {
          imp_glEnableVertexAttribArray(iVar10);
        }
        piVar4 = (int *)((int)puVar15 + iVar14 + 8);
        if (uVar11 == 0) {
          uVar6 = puVar5[1];
          iVar16 = *piVar4;
          uVar3 = *puVar5 >> 8;
          iVar9 = *(int *)((int)puVar15 + iVar14 + 0xc);
          iVar7 = *(int *)((int)puVar15 + iVar14 + 0x10);
          if (((*(uint *)((int)&DAT_70b4646c + iVar14) == *puVar5 &&
                *(uint *)((int)&DAT_70b46470 + iVar14) == uVar6) &&
              (*(int *)((int)&DAT_70b46474 + iVar14) == iVar16 &&
               *(int *)((int)&DAT_70b46478 + iVar14) == iVar9)) &&
             (*(int *)((int)&DAT_70b4647c + iVar14) == iVar7)) goto LAB_71390bac;
        }
        else {
          iVar9 = *(int *)((int)puVar15 + iVar14 + 0xc);
          iVar7 = *(int *)((int)puVar15 + iVar14 + 0x10);
          uVar3 = (uint)*(byte *)((int)puVar15 + iVar14 + 1);
          uVar6 = *(uint *)((int)puVar15 + iVar14 + 4);
          iVar16 = *piVar4;
        }
        imp_glVertexAttribPointer
                  (iVar10,uVar6,*(undefined4 *)(&DAT_700bb8c8 + iVar7 * 4),uVar3 & 0xff,iVar16,
                   iVar9 + uVar2);
        uVar3 = puVar5[1];
        uVar6 = puVar5[2];
        uVar8 = puVar5[3];
        uVar12 = puVar5[4];
        *puVar13 = *puVar5;
        *(uint *)((int)&DAT_70b46470 + iVar14) = uVar3;
        *(uint *)((int)&DAT_70b46474 + iVar14) = uVar6;
        *(uint *)((int)&DAT_70b46478 + iVar14) = uVar8;
        *(uint *)((int)&DAT_70b4647c + iVar14) = uVar12;
      }
LAB_71390bac:
      iVar14 = iVar14 + 0x14;
      iVar10 = iVar10 + 1;
    } while (iVar14 != 0xb4);
    DAT_70b46520 = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_71390e90
// Entry: 0x71390e90 | Size: 912 bytes
// =========================================================================

void FUN_71390e90(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iStack_24;
  
  puVar4 = (undefined4 *)*param_1;
  uVar7 = *puVar4;
  *param_1 = (int)(puVar4 + 1);
  uVar6 = puVar4[1];
  *param_1 = (int)(puVar4 + 2);
  iVar8 = puVar4[2];
  *param_1 = (int)(puVar4 + 3);
  FUN_71376ae4();
  uVar3 = DAT_70b46474;
  piVar2 = DAT_70b42230;
  iStack_24 = iVar8 + *DAT_70b42138;
  switch(uVar7) {
  case 0:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_711ad150);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    uVar3 = 4;
    DAT_711ad14c = DAT_711ad14c + 1;
    DAT_711ad150 = DAT_711ad150 + uVar6 / 3;
    break;
  case 1:
    if ((*DAT_70b42138 == 0) || (*DAT_70b42230 == 0)) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      iVar8 = uVar6 - 2;
      if (uVar6 < 2) {
        iVar8 = 0;
      }
      do {
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad150);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      DAT_711ad14c = DAT_711ad14c + 1;
      DAT_711ad150 = DAT_711ad150 + iVar8;
    }
    else {
      if (*(char *)(DAT_70b4645c + 0xd) != '\0') {
        iVar9 = 0;
        iVar8 = 0;
        do {
          if (*(char *)((int)&DAT_70b4646c - iVar9) == '\0') {
            imp_glVertexAttribPointer(iVar8,3,0x1406,0,uVar3,*piVar2);
            imp_glDisableVertexAttribArray(iVar8);
          }
          iVar9 = iVar9 + -0x14;
          iVar8 = iVar8 + 1;
        } while (iVar9 != -0xb4);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = DAT_711ad14c + 1;
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      iVar9 = uVar6 - 2;
      if (uVar6 < 2) {
        iVar9 = 0;
      }
      do {
        iVar5 = DAT_711ad150 + iVar9;
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad150);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = DAT_711ad160 + 1;
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad160);
      } while (!bVar1);
      DAT_711ad14c = iVar8;
      DAT_711ad150 = iVar5;
      DAT_711ad160 = iVar9;
      if ((DAT_711ad15c & 1) != 0) {
        imp_glDrawElements(5,uVar6,0x1403,&iStack_24);
        return;
      }
    }
    uVar3 = 5;
    break;
  case 2:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    iVar8 = uVar6 - 2;
    if (uVar6 < 2) {
      iVar8 = 0;
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_711ad150);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    uVar3 = 6;
    DAT_711ad14c = DAT_711ad14c + 1;
    DAT_711ad150 = DAT_711ad150 + iVar8;
    break;
  case 3:
    if ((int)uVar6 < 1) {
      return;
    }
    iVar8 = 0;
    do {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(&DAT_711ad150);
      } while (!bVar1);
      DataMemoryBarrier(0xb);
      DAT_711ad14c = DAT_711ad14c + 1;
      DAT_711ad150 = DAT_711ad150 + 2;
      imp_glDrawElements(6,4,0x1403,iStack_24 + uVar6);
      iVar8 = iVar8 + 4;
    } while (iVar8 < (int)uVar6);
    return;
  case 4:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    uVar3 = 1;
    DAT_711ad14c = DAT_711ad14c + 1;
    break;
  case 5:
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_711ad14c);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    uVar3 = 3;
    DAT_711ad14c = DAT_711ad14c + 1;
    break;
  default:
    return;
  }
  imp_glDrawElements(uVar3,uVar6,0x1403,iStack_24);
  return;
}


// =========================================================================
// Function: FUN_71391538
// Entry: 0x71391538 | Size: 648 bytes
// =========================================================================

void FUN_71391538(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_1c;
  
  piVar4 = *(int **)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  iVar3 = *piVar4;
  if (*DAT_70b422c8 == -1) {
    imp_glGetIntegerv(0x8ca6);
  }
  uStack_1c = 0;
  imp_glGetIntegerv(0x8ca6,&uStack_1c);
  if ((piVar4[3] == 0) && (piVar4[2] != 0)) {
    imp_glGenRenderbuffers(1,piVar4 + 5);
    imp_glBindRenderbuffer(0x8d41,piVar4[5]);
    if (piVar4[2] == 1) {
      uVar2 = 0x81a5;
    }
    else {
      if (piVar4[2] != 2) goto LAB_71391594;
      uVar2 = 0x8e2c;
      if ((DAT_70b4645c[2] == '\0') && (uVar2 = 0x81a6, *DAT_70b4645c == '\0')) {
        uVar2 = 0x81a5;
      }
    }
    imp_glRenderbufferStorage(0x8d41,uVar2,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
  }
LAB_71391594:
  imp_glGenRenderbuffers(1,piVar4 + 4);
  imp_glBindRenderbuffer(0x8d41,piVar4[4]);
  uVar2 = 0x8d62;
  if ((piVar4[1] == 1) && (uVar2 = 0x8058, DAT_70b4645c[6] == '\0')) {
    uVar2 = 0x8d62;
  }
  imp_glRenderbufferStorage(0x8d41,uVar2,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
  imp_glGenFramebuffers(1,piVar4 + 6);
  imp_glBindFramebuffer(0x8d40,piVar4[6]);
  imp_glFramebufferRenderbuffer(0x8d40,0x8ce0,0x8d41,piVar4[4]);
  piVar1 = (int *)piVar4[3];
  if (((int *)piVar4[3] != (int *)0x0) || (piVar1 = piVar4, piVar4[2] != 0)) {
    imp_glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,piVar1[5]);
  }
  imp_glGenTextures(1,iVar3 + 0x28);
  piVar1 = DAT_70b42224;
  if (*DAT_70b42224 != 0x14) {
    imp_glActiveTexture(0x84d4);
    *piVar1 = 0x14;
  }
  imp_glBindTexture(0xde1,*(undefined4 *)(iVar3 + 0x28));
  DAT_70b42220 = *(undefined4 *)(iVar3 + 0x28);
  imp_glTexParameteri(0xde1,0x2801,0x2601);
  imp_glTexParameteri(0xde1,0x2800,0x2601);
  imp_glTexParameteri(0xde1,0x2802,0x812f);
  imp_glTexParameteri(0xde1,0x2803,0x812f);
  uVar2 = 0x1908;
  if (piVar4[1] == 0) {
    uVar2 = 0x1907;
  }
  imp_glTexImage2D(0xde1,0,uVar2,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),0,uVar2,
                   0x1401,0);
  imp_glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,*(undefined4 *)(iVar3 + 0x28),0);
  imp_glCheckFramebufferStatus(0x8d40);
  imp_glClear(0x4000);
  imp_glBindFramebuffer(0x8d40,uStack_1c);
  return;
}


// =========================================================================
// Function: FUN_71391b18
// Entry: 0x71391b18 | Size: 756 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71391b18(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  imp_glGetError();
  imp_glFrontFace(0x901);
  iVar2 = imp_glGetString(0x1f03);
  pcVar4 = DAT_70b4645c;
  if (iVar2 == 0) {
    imp_exit(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_70b4645c[0xe] = '\x01';
  iVar3 = imp_strstr(iVar2,s_GL_OES_depth24_700685e7);
  if (iVar3 != 0) {
    *pcVar4 = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_OES_packed_depth_stencil_7006edae);
  if (iVar3 != 0) {
    DAT_70b4645c[1] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_NV_depth_nonlinear_7006752b);
  if (iVar3 != 0) {
    DAT_70b4645c[2] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_EXT_texture_compression_dxt1_70065b13);
  if ((iVar3 != 0) ||
     (iVar3 = imp_strstr(iVar2,s_GL_EXT_texture_compression_s3tc_700685f6), iVar3 != 0)) {
    DAT_70b4645c[3] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_AMD_compressed_ATC_texture_7006f62d);
  pcVar4 = DAT_70b4645c;
  if (iVar3 != 0) {
    DAT_70b4645c[0xc] = '\x01';
    pcVar4[4] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_IMG_texture_compression_pvrtc_70064bf7);
  if (iVar3 != 0) {
    pcVar4[5] = '\x01';
  }
  cVar1 = pcVar4[3];
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = pcVar4[4];
  }
  if ((bVar7 && cVar1 == '\0') && (pcVar4[5] == '\0')) {
    pcVar4[0xd] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_OES_rgb8_rgba8_70064537);
  if (iVar3 != 0) {
    pcVar4[6] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_EXT_texture_filter_anisotropi_7006becb);
  if (iVar3 != 0) {
    pcVar4[7] = '\x01';
  }
  iVar3 = imp_strstr(iVar2,s_GL_QCOM_alpha_test_7006b85f);
  if (iVar3 != 0) {
    pcVar4[0xb] = '\x01';
  }
  iVar2 = imp_strstr(iVar2,s_GL_QCOM_binning_control_70066ca9);
  if (iVar2 != 0) {
    imp_glHint(0x8fb0,0x8fb1);
    DAT_70b4645c[10] = '\x01';
  }
  imp_glHint(0xc54,0x1101);
  imp_glHint(0xc52,0x1101);
  imp_glHint(0xc50,0x1101);
  imp_glHint(0xc51,0x1101);
  iStack_1c = 0x80;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  DAT_70b4645c[9] = '\0';
  imp_glGetIntegerv(0x8dfb,&iStack_1c);
  imp_glGetIntegerv(0x8872,&uStack_20);
  imp_glGetIntegerv(0x8b4d,&uStack_24);
  imp_glGetIntegerv(0xd33,&uStack_28);
  iVar2 = (iStack_1c + -0x20) / 3;
  if (0x1a2 < iStack_1c) {
    iVar2 = 0x80;
  }
  *DAT_70b46460 = iVar2;
  if (*DAT_70b46460 == 0) {
    *DAT_70b46460 = 0x80;
  }
  if (*DAT_70b4645c != '\0') {
    pcVar4 = DAT_70b4645c;
    if (DAT_70b4645c[5] == '\0') {
      pcVar4 = (char *)(uint)(byte)DAT_70b4645c[0xd];
    }
    if (DAT_70b4645c[5] == '\0' && pcVar4 == (char *)0x0) {
      uVar5 = 0xbe200000;
      uVar6 = 0xbc800000;
      goto LAB_71391dd0;
    }
  }
  uVar5 = 0xc1200000;
  uVar6 = 0xbf800000;
LAB_71391dd0:
  imp_glPolygonOffset(uVar5,uVar6);
  return;
}


// =========================================================================
// Function: FUN_71392380
// Entry: 0x71392380 | Size: 380 bytes
// =========================================================================

void FUN_71392380(undefined4 param_1)

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
  if (((DAT_70b4654c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4654c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9d0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9c0);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_70075d84;
      uVar6 = DAT_70075d80;
      uVar5 = DAT_70075d7c;
      uVar4 = DAT_70075d78;
      uVar3 = DAT_70075d74;
      *puVar11 = DAT_70075d70;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70075d9c;
      uVar6 = DAT_70075d98;
      uVar5 = DAT_70075d94;
      uVar4 = DAT_70075d90;
      uVar3 = DAT_70075d8c;
      puVar11[6] = DAT_70075d88;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139e9d8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9d0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9c0);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x1ddda983 >> iVar15) |
                (byte)(0x3f8f2723 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x3f8f2723 >> (uVar16 & 0xff));
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
    DAT_70b46548 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4654c);
  }
                    /* WARNING: Could not recover jumptable at 0x713923ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46548)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71392794
// Entry: 0x71392794 | Size: 396 bytes
// =========================================================================

void FUN_71392794(undefined4 param_1)

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
  if (((DAT_70b46554 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46554), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9f0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9e0);
      *(undefined1 *)((int)puVar11 + 0x2f) = 1;
      uVar6 = DAT_70075db0;
      uVar5 = DAT_70075dac;
      uVar4 = DAT_70075da8;
      uVar3 = DAT_70075da4;
      *puVar11 = DAT_70075da0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70075dc8;
      uVar6 = DAT_70075dc4;
      uVar5 = DAT_70075dc0;
      uVar4 = DAT_70075dbc;
      uVar3 = DAT_70075db8;
      puVar11[5] = DAT_70075db4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_70075dcc;
      *(undefined1 *)((int)puVar11 + 0x2e) = DAT_70075dce;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ea28,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9f0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bb9e0);
    if (*(char *)(iVar9 + 0x2f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x6bef39cd >> iVar15) |
                (byte)(-0x201c0a41 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xdfe3f5bf >> (uVar16 & 0xff));
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
    DAT_70b46550 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46554);
  }
                    /* WARNING: Could not recover jumptable at 0x713927c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46550)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71392bb8
// Entry: 0x71392bb8 | Size: 380 bytes
// =========================================================================

void FUN_71392bb8(undefined4 param_1)

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
  if (((DAT_70b4655c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4655c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba10);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba00);
      *(undefined1 *)(puVar11 + 0xc) = 1;
      uVar7 = DAT_70075de4;
      uVar6 = DAT_70075de0;
      uVar5 = DAT_70075ddc;
      uVar4 = DAT_70075dd8;
      uVar3 = DAT_70075dd4;
      *puVar11 = DAT_70075dd0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      puVar11[5] = uVar7;
      uVar7 = DAT_70075dfc;
      uVar6 = DAT_70075df8;
      uVar5 = DAT_70075df4;
      uVar4 = DAT_70075df0;
      uVar3 = DAT_70075dec;
      puVar11[6] = DAT_70075de8;
      puVar11[7] = uVar3;
      puVar11[8] = uVar4;
      puVar11[9] = uVar5;
      puVar11[10] = uVar6;
      puVar11[0xb] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ea78,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba10);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba00);
    if (*(char *)(iVar9 + 0x30) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xabcf0dd5 >> iVar15) |
                (byte)(0x75351913 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x75351913 >> (uVar16 & 0xff));
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
    DAT_70b46558 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4655c);
  }
                    /* WARNING: Could not recover jumptable at 0x71392be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46558)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71392fcc
// Entry: 0x71392fcc | Size: 388 bytes
// =========================================================================

void FUN_71392fcc(undefined4 param_1)

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
  if (((DAT_70b46564 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46564), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba30);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba20);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_70075e10;
      uVar5 = DAT_70075e0c;
      uVar4 = DAT_70075e08;
      uVar3 = DAT_70075e04;
      *puVar11 = DAT_70075e00;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70075e28;
      uVar6 = DAT_70075e24;
      uVar5 = DAT_70075e20;
      uVar4 = DAT_70075e1c;
      uVar3 = DAT_70075e18;
      puVar11[5] = DAT_70075e14;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_70075e2c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139eac8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba30);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba20);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe507d159 >> iVar15) |
                (byte)(-0x146a066d << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xeb95f993 >> (uVar16 & 0xff));
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
    DAT_70b46560 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46564);
  }
                    /* WARNING: Could not recover jumptable at 0x71392ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46560)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713933e8
// Entry: 0x713933e8 | Size: 396 bytes
// =========================================================================

void FUN_713933e8(undefined4 param_1)

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
  if (((DAT_70b4656c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4656c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba50);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba40);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_70075e40;
      uVar5 = DAT_70075e3c;
      uVar4 = DAT_70075e38;
      uVar3 = DAT_70075e34;
      *puVar11 = DAT_70075e30;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70075e54;
      uVar5 = DAT_70075e50;
      uVar4 = DAT_70075e4c;
      uVar3 = DAT_70075e48;
      puVar11[5] = DAT_70075e44;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_70075e5a;
      *(undefined2 *)(puVar11 + 10) = DAT_70075e58;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139eb18,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba50);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba40);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x5b3f3b09 >> iVar15) |
                (byte)(0x13cd033f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x13cd033f >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b46568 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4656c);
  }
                    /* WARNING: Could not recover jumptable at 0x71393414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46568)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7139380c
// Entry: 0x7139380c | Size: 396 bytes
// =========================================================================

void FUN_7139380c(undefined4 param_1)

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
  if (((DAT_70b46574 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46574), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba70);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba60);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_70075e70;
      uVar5 = DAT_70075e6c;
      uVar4 = DAT_70075e68;
      uVar3 = DAT_70075e64;
      *puVar11 = DAT_70075e60;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_70075e84;
      uVar5 = DAT_70075e80;
      uVar4 = DAT_70075e7c;
      uVar3 = DAT_70075e78;
      puVar11[5] = DAT_70075e74;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_70075e8a;
      *(undefined2 *)(puVar11 + 10) = DAT_70075e88;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139eb68,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba70);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba60);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x8b45c9ab >> iVar15) |
                (byte)(-0x7a361e55 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x85c9e1ab >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b46570 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46574);
  }
                    /* WARNING: Could not recover jumptable at 0x71393838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46570)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71393c30
// Entry: 0x71393c30 | Size: 388 bytes
// =========================================================================

void FUN_71393c30(undefined4 param_1)

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
  if (((DAT_70b4657c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4657c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba90);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba80);
      *(undefined1 *)((int)puVar11 + 0x2d) = 1;
      uVar6 = DAT_70075ea0;
      uVar5 = DAT_70075e9c;
      uVar4 = DAT_70075e98;
      uVar3 = DAT_70075e94;
      *puVar11 = DAT_70075e90;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70075eb8;
      uVar6 = DAT_70075eb4;
      uVar5 = DAT_70075eb0;
      uVar4 = DAT_70075eac;
      uVar3 = DAT_70075ea8;
      puVar11[5] = DAT_70075ea4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined1 *)(puVar11 + 0xb) = DAT_70075ebc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ebb8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba90);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bba80);
    if (*(char *)(iVar9 + 0x2d) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xe77995bb >> iVar15) |
                (byte)(0x37f9d3f5 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x37f9d3f5 >> (uVar16 & 0xff));
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
    DAT_70b46578 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4657c);
  }
                    /* WARNING: Could not recover jumptable at 0x71393c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46578)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7139404c
// Entry: 0x7139404c | Size: 380 bytes
// =========================================================================

void FUN_7139404c(undefined4 param_1)

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
  if (((DAT_70b46584 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46584), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbab0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbaa0);
      *(undefined1 *)(puVar11 + 0xb) = 1;
      uVar6 = DAT_70075ed0;
      uVar5 = DAT_70075ecc;
      uVar4 = DAT_70075ec8;
      uVar3 = DAT_70075ec4;
      *puVar11 = DAT_70075ec0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70075ee8;
      uVar6 = DAT_70075ee4;
      uVar5 = DAT_70075ee0;
      uVar4 = DAT_70075edc;
      uVar3 = DAT_70075ed8;
      puVar11[5] = DAT_70075ed4;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ec08,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbab0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbaa0);
    if (*(char *)(iVar9 + 0x2c) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x73110fc5 >> iVar15) |
                (byte)(-0x5e705ac9 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xa18fa537 >> (uVar16 & 0xff));
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
    DAT_70b46580 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46584);
  }
                    /* WARNING: Could not recover jumptable at 0x71394078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46580)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71394460
// Entry: 0x71394460 | Size: 388 bytes
// =========================================================================

void FUN_71394460(undefined4 param_1)

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
  if (((DAT_70b4658c & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4658c), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbad0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbac0);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_70075f00;
      uVar5 = DAT_70075efc;
      uVar4 = DAT_70075ef8;
      uVar3 = DAT_70075ef4;
      *puVar11 = DAT_70075ef0;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70075f18;
      uVar6 = DAT_70075f14;
      uVar5 = DAT_70075f10;
      uVar4 = DAT_70075f0c;
      uVar3 = DAT_70075f08;
      puVar11[5] = DAT_70075f04;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_70075f1c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ec58,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbad0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbac0);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x2f711da7 >> iVar15) |
                (byte)(0x2d07fda1 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x2d07fda1 >> (uVar16 & 0xff));
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
    DAT_70b46588 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4658c);
  }
                    /* WARNING: Could not recover jumptable at 0x7139448c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46588)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7139487c
// Entry: 0x7139487c | Size: 396 bytes
// =========================================================================

void FUN_7139487c(undefined4 param_1)

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
  if (((DAT_70b46594 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46594), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbaf0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbae0);
      *(undefined1 *)((int)puVar11 + 0x2f) = 1;
      uVar6 = DAT_70075f30;
      uVar5 = DAT_70075f2c;
      uVar4 = DAT_70075f28;
      uVar3 = DAT_70075f24;
      *puVar11 = DAT_70075f20;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_70075f48;
      uVar6 = DAT_70075f44;
      uVar5 = DAT_70075f40;
      uVar4 = DAT_70075f3c;
      uVar3 = DAT_70075f38;
      puVar11[5] = DAT_70075f34;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_70075f4c;
      *(undefined1 *)((int)puVar11 + 0x2e) = DAT_70075f4e;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139eca8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbaf0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbae0);
    if (*(char *)(iVar9 + 0x2f) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x6bdf995d >> iVar15) |
                (byte)(0x25a1a563 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x25a1a563 >> (uVar16 & 0xff));
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
    DAT_70b46590 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46594);
  }
                    /* WARNING: Could not recover jumptable at 0x713948a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46590)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71394ca0
// Entry: 0x71394ca0 | Size: 388 bytes
// =========================================================================

void FUN_71394ca0(undefined4 param_1)

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
  if (((DAT_70b4659c & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b4659c), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb10);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb00);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70075f60;
      uVar5 = DAT_70075f5c;
      uVar4 = DAT_70075f58;
      uVar3 = DAT_70075f54;
      *puVar10 = DAT_70075f50;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70075f74;
      uVar5 = DAT_70075f70;
      uVar4 = DAT_70075f6c;
      uVar3 = DAT_70075f68;
      puVar10[5] = DAT_70075f64;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70075f78;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ecf8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb10);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb00);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x15df8f13 >> iVar14) |
                (byte)(-0x4262d401 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xbd9d2bff >> (uVar15 & 0xff));
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
    DAT_70b46598 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b4659c);
  }
                    /* WARNING: Could not recover jumptable at 0x71394ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46598)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713950bc
// Entry: 0x713950bc | Size: 380 bytes
// =========================================================================

void FUN_713950bc(undefined4 param_1)

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
  if (((DAT_70b465a4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465a4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb30);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb20);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_70075f90;
      uVar5 = DAT_70075f8c;
      uVar4 = DAT_70075f88;
      uVar3 = DAT_70075f84;
      *puVar10 = DAT_70075f80;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70075fa4;
      uVar5 = DAT_70075fa0;
      uVar4 = DAT_70075f9c;
      uVar3 = DAT_70075f98;
      puVar10[5] = DAT_70075f94;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ed48,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb30);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb20);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x4925eb35 >> iVar14) |
                (byte)(0x11394f4f << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x11394f4f >> (uVar15 & 0xff));
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
    DAT_70b465a0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465a4);
  }
                    /* WARNING: Could not recover jumptable at 0x713950e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465a0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713954d0
// Entry: 0x713954d0 | Size: 380 bytes
// =========================================================================

void FUN_713954d0(undefined4 param_1)

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
  if (((DAT_70b465ac & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465ac), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb50);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb40);
      *(undefined1 *)(puVar10 + 10) = 1;
      uVar6 = DAT_70075fb8;
      uVar5 = DAT_70075fb4;
      uVar4 = DAT_70075fb0;
      uVar3 = DAT_70075fac;
      *puVar10 = DAT_70075fa8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70075fcc;
      uVar5 = DAT_70075fc8;
      uVar4 = DAT_70075fc4;
      uVar3 = DAT_70075fc0;
      puVar10[5] = DAT_70075fbc;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ed98,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb50);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb40);
    if (*(char *)(iVar8 + 0x28) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x3c55f5b >> iVar14) |
                (byte)(0x19536d93 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x19536d93 >> (uVar15 & 0xff));
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
    DAT_70b465a8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465ac);
  }
                    /* WARNING: Could not recover jumptable at 0x713954fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465a8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713958e4
// Entry: 0x713958e4 | Size: 388 bytes
// =========================================================================

void FUN_713958e4(undefined4 param_1)

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
  if (((DAT_70b465b4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465b4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb70);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb60);
      *(undefined1 *)((int)puVar10 + 0x26) = 1;
      uVar5 = DAT_70075fdc;
      uVar4 = DAT_70075fd8;
      uVar3 = DAT_70075fd4;
      *puVar10 = DAT_70075fd0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar6 = DAT_70075ff0;
      uVar5 = DAT_70075fec;
      uVar4 = DAT_70075fe8;
      uVar3 = DAT_70075fe4;
      puVar10[4] = DAT_70075fe0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      puVar10[8] = uVar6;
      *(undefined2 *)(puVar10 + 9) = DAT_70075ff4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ede8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb70);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb60);
    if (*(char *)(iVar8 + 0x26) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x23b109cd >> iVar14) |
                (byte)(0x353b47d9 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x353b47d9 >> (uVar15 & 0xff));
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
    DAT_70b465b0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465b4);
  }
                    /* WARNING: Could not recover jumptable at 0x71395910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465b0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71395d00
// Entry: 0x71395d00 | Size: 388 bytes
// =========================================================================

void FUN_71395d00(undefined4 param_1)

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
  if (((DAT_70b465bc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465bc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb90);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb80);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70076008;
      uVar5 = DAT_70076004;
      uVar4 = DAT_70076000;
      uVar3 = DAT_70075ffc;
      *puVar10 = DAT_70075ff8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_7007601c;
      uVar5 = DAT_70076018;
      uVar4 = DAT_70076014;
      uVar3 = DAT_70076010;
      puVar10[5] = DAT_7007600c;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70076020;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ee38,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb90);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbb80);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x13ebe1fd >> iVar14) |
                (byte)(0x2305970b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x2305970b >> (uVar15 & 0xff));
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
    DAT_70b465b8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465bc);
  }
                    /* WARNING: Could not recover jumptable at 0x71395d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465b8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_7139611c
// Entry: 0x7139611c | Size: 396 bytes
// =========================================================================

void FUN_7139611c(undefined4 param_1)

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
  if (((DAT_70b465c4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465c4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbb0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbba0);
      *(undefined1 *)((int)puVar11 + 0x2b) = 1;
      uVar6 = DAT_70076038;
      uVar5 = DAT_70076034;
      uVar4 = DAT_70076030;
      uVar3 = DAT_7007602c;
      *puVar11 = DAT_70076028;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar6 = DAT_7007604c;
      uVar5 = DAT_70076048;
      uVar4 = DAT_70076044;
      uVar3 = DAT_70076040;
      puVar11[5] = DAT_7007603c;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      uVar7 = DAT_70076052;
      *(undefined2 *)(puVar11 + 10) = DAT_70076050;
      *(undefined1 *)((int)puVar11 + 0x2a) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ee88,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbb0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbba0);
    if (*(char *)(iVar9 + 0x2b) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xcfd50be9 >> iVar15) |
                (byte)(-0x485e7e23 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xb7a181dd >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar13) = *(byte *)(iVar9 + uVar13) ^ bVar8;
        bVar17 = 0xfffffffe < uVar13;
        bVar1 = uVar14 == 0;
        bVar2 = (0x29 < uVar13) <= uVar14;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + bVar17;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x2b) = 0;
    }
    DAT_70b465c0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465c4);
  }
                    /* WARNING: Could not recover jumptable at 0x71396148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465c0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71396540
// Entry: 0x71396540 | Size: 396 bytes
// =========================================================================

void FUN_71396540(undefined4 param_1)

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
  if (((DAT_70b465cc & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465cc), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbd0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbc0);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_70076064;
      uVar4 = DAT_70076060;
      uVar3 = DAT_7007605c;
      *puVar11 = DAT_70076058;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_70076078;
      uVar5 = DAT_70076074;
      uVar4 = DAT_70076070;
      uVar3 = DAT_7007606c;
      puVar11[4] = DAT_70076068;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_7007607e;
      *(undefined2 *)(puVar11 + 9) = DAT_7007607c;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139eed8,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbd0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbc0);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xdd6753a3 >> iVar15) |
                (byte)(-0x6f47805 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xf90b87fb >> (uVar16 & 0xff));
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
    DAT_70b465c8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465cc);
  }
                    /* WARNING: Could not recover jumptable at 0x7139656c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465c8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71396964
// Entry: 0x71396964 | Size: 388 bytes
// =========================================================================

void FUN_71396964(undefined4 param_1)

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
  if (((DAT_70b465d4 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465d4), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbf0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbe0);
      *(undefined1 *)((int)puVar11 + 0x2e) = 1;
      uVar6 = DAT_70076090;
      uVar5 = DAT_7007608c;
      uVar4 = DAT_70076088;
      uVar3 = DAT_70076084;
      *puVar11 = DAT_70076080;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11[4] = uVar6;
      uVar7 = DAT_700760a8;
      uVar6 = DAT_700760a4;
      uVar5 = DAT_700760a0;
      uVar4 = DAT_7007609c;
      uVar3 = DAT_70076098;
      puVar11[5] = DAT_70076094;
      puVar11[6] = uVar3;
      puVar11[7] = uVar4;
      puVar11[8] = uVar5;
      puVar11[9] = uVar6;
      puVar11[10] = uVar7;
      *(undefined2 *)(puVar11 + 0xb) = DAT_700760ac;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ef28,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbf0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbbe0);
    if (*(char *)(iVar9 + 0x2e) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0xdd5fa717 >> iVar15) |
                (byte)(0x7bc195a7 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0x7bc195a7 >> (uVar16 & 0xff));
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
    DAT_70b465d0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465d4);
  }
                    /* WARNING: Could not recover jumptable at 0x71396990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465d0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71396d80
// Entry: 0x71396d80 | Size: 392 bytes
// =========================================================================

void FUN_71396d80(undefined4 param_1)

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
  if (((DAT_70b465dc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465dc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc10);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc00);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_700760bc;
      uVar4 = DAT_700760b8;
      uVar3 = DAT_700760b4;
      *puVar10 = DAT_700760b0;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700760cc;
      uVar4 = DAT_700760c8;
      uVar3 = DAT_700760c4;
      puVar10[4] = DAT_700760c0;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700760d2;
      *(undefined2 *)(puVar10 + 8) = DAT_700760d0;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139ef78,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc10);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc00);
    if (*(char *)(iVar8 + 0x23) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x57f97f8f >> iVar14) |
                (byte)(0x39ff6997 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x39ff6997 >> (uVar15 & 0xff));
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
    DAT_70b465d8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465dc);
  }
                    /* WARNING: Could not recover jumptable at 0x71396dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465d8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713971a0
// Entry: 0x713971a0 | Size: 392 bytes
// =========================================================================

void FUN_713971a0(undefined4 param_1)

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
  if (((DAT_70b465e4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465e4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc30);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc20);
      *(undefined1 *)((int)puVar10 + 0x23) = 1;
      uVar5 = DAT_700760e4;
      uVar4 = DAT_700760e0;
      uVar3 = DAT_700760dc;
      *puVar10 = DAT_700760d8;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      uVar5 = DAT_700760f4;
      uVar4 = DAT_700760f0;
      uVar3 = DAT_700760ec;
      puVar10[4] = DAT_700760e8;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
      uVar6 = DAT_700760fa;
      *(undefined2 *)(puVar10 + 8) = DAT_700760f8;
      *(undefined1 *)((int)puVar10 + 0x22) = uVar6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139efc8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc30);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc20);
    if (*(char *)(iVar8 + 0x23) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xb3d76f35 >> iVar14) |
                (byte)(-0x6a8648a3 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0x9579b75d >> (uVar15 & 0xff));
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
    DAT_70b465e0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465e4);
  }
                    /* WARNING: Could not recover jumptable at 0x713971cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465e0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713975c0
// Entry: 0x713975c0 | Size: 388 bytes
// =========================================================================

void FUN_713975c0(undefined4 param_1)

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
  if (((DAT_70b465ec & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465ec), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc50);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc40);
      *(undefined1 *)((int)puVar10 + 0x29) = 1;
      uVar6 = DAT_70076110;
      uVar5 = DAT_7007610c;
      uVar4 = DAT_70076108;
      uVar3 = DAT_70076104;
      *puVar10 = DAT_70076100;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076124;
      uVar5 = DAT_70076120;
      uVar4 = DAT_7007611c;
      uVar3 = DAT_70076118;
      puVar10[5] = DAT_70076114;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined1 *)(puVar10 + 10) = DAT_70076128;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139f018,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc50);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc40);
    if (*(char *)(iVar8 + 0x29) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0xc5ed1125 >> iVar14) |
                (byte)(-0x30eeac47 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xcf1153b9 >> (uVar15 & 0xff));
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
    DAT_70b465e8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465ec);
  }
                    /* WARNING: Could not recover jumptable at 0x713975ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465e8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713979dc
// Entry: 0x713979dc | Size: 388 bytes
// =========================================================================

void FUN_713979dc(undefined4 param_1)

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
  if (((DAT_70b465f4 & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465f4), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc70);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc60);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70076140;
      uVar5 = DAT_7007613c;
      uVar4 = DAT_70076138;
      uVar3 = DAT_70076134;
      *puVar10 = DAT_70076130;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076154;
      uVar5 = DAT_70076150;
      uVar4 = DAT_7007614c;
      uVar3 = DAT_70076148;
      puVar10[5] = DAT_70076144;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70076158;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139f068,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc70);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc60);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x5dbf3bb >> iVar14) |
                (byte)(-0x2a16f2ab << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd5e90d55 >> (uVar15 & 0xff));
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
    DAT_70b465f0 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465f4);
  }
                    /* WARNING: Could not recover jumptable at 0x71397a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465f0)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71397df8
// Entry: 0x71397df8 | Size: 388 bytes
// =========================================================================

void FUN_71397df8(undefined4 param_1)

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
  if (((DAT_70b465fc & 1) == 0) && (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b465fc), iVar8 != 0)) {
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc90);
    if (*pcVar9 == '\0') {
      puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc80);
      *(undefined1 *)((int)puVar10 + 0x2a) = 1;
      uVar6 = DAT_70076170;
      uVar5 = DAT_7007616c;
      uVar4 = DAT_70076168;
      uVar3 = DAT_70076164;
      *puVar10 = DAT_70076160;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar10[4] = uVar6;
      uVar6 = DAT_70076184;
      uVar5 = DAT_70076180;
      uVar4 = DAT_7007617c;
      uVar3 = DAT_70076178;
      puVar10[5] = DAT_70076174;
      puVar10[6] = uVar3;
      puVar10[7] = uVar4;
      puVar10[8] = uVar5;
      puVar10[9] = uVar6;
      *(undefined2 *)(puVar10 + 10) = DAT_70076188;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139f0b8,puVar10,&DAT_70b0e000);
      puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc90);
      *puVar11 = 1;
    }
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbc80);
    if (*(char *)(iVar8 + 0x2a) != '\0') {
      uVar12 = 0;
      uVar13 = 0;
      do {
        iVar14 = (uVar12 & 7) * 8;
        uVar15 = iVar14 - 0x20;
        bVar7 = (byte)(0x8563e1ab >> iVar14) |
                (byte)(-0x28ae1a77 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar15) {
          bVar7 = (byte)(0xd751e589 >> (uVar15 & 0xff));
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
    DAT_70b465f8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar8,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b465fc);
  }
                    /* WARNING: Could not recover jumptable at 0x71397e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b465f8)(param_1);
  return;
}


// =========================================================================
// Function: FUN_71398214
// Entry: 0x71398214 | Size: 396 bytes
// =========================================================================

void FUN_71398214(undefined4 param_1)

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
  if (((DAT_70b46604 & 1) == 0) && (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46604), iVar9 != 0)) {
    pcVar10 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcb0);
    if (*pcVar10 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbca0);
      *(undefined1 *)((int)puVar11 + 0x27) = 1;
      uVar5 = DAT_7007619c;
      uVar4 = DAT_70076198;
      uVar3 = DAT_70076194;
      *puVar11 = DAT_70076190;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar6 = DAT_700761b0;
      uVar5 = DAT_700761ac;
      uVar4 = DAT_700761a8;
      uVar3 = DAT_700761a4;
      puVar11[4] = DAT_700761a0;
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      puVar11[8] = uVar6;
      uVar7 = DAT_700761b6;
      *(undefined2 *)(puVar11 + 9) = DAT_700761b4;
      *(undefined1 *)((int)puVar11 + 0x26) = uVar7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7139f108,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcb0);
      *puVar12 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbca0);
    if (*(char *)(iVar9 + 0x27) != '\0') {
      uVar13 = 0;
      uVar14 = 0;
      do {
        iVar15 = (uVar13 & 7) * 8;
        uVar16 = iVar15 - 0x20;
        bVar8 = (byte)(0x610bf3e5 >> iVar15) |
                (byte)(-0x24d06c79 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar16) {
          bVar8 = (byte)(0xdb2f9387 >> (uVar16 & 0xff));
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
    DAT_70b46600 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar9,1);
    thunk_SixizuLbAnqfgRApsCY(&DAT_70b46604);
  }
                    /* WARNING: Could not recover jumptable at 0x71398240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_70b46600)(param_1);
  return;
}


// =========================================================================
// Function: FUN_713986a4
// Entry: 0x713986a4 | Size: 216 bytes
// =========================================================================

void FUN_713986a4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_24;
  
  iVar2 = *param_1;
  uVar1 = imp_strlen(iVar2);
  *param_1 = (uVar1 & 0xfffffffc) + iVar2 + 4;
  iVar4 = *DAT_70b46448;
  piVar3 = *(int **)(iVar4 + 0x338);
  iStack_24 = iVar2;
  if (*(int **)(iVar4 + 0x33c) <= piVar3) {
    piVar3 = (int *)FUN_713a2448(iVar4 + 0x334,&iStack_24);
    goto LAB_71398768;
  }
  uVar1 = imp_strlen(iVar2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(piVar3);
  }
  if (uVar1 < 0xb) {
    puVar5 = (undefined1 *)((int)piVar3 + 1);
    *(char *)piVar3 = (char)(uVar1 << 1);
    if (uVar1 != 0) goto LAB_7139874c;
  }
  else {
    puVar5 = (undefined1 *)thunk_MwhHq((uVar1 | 7) + 1);
    *piVar3 = (uVar1 | 7) + 2;
    piVar3[1] = uVar1;
    piVar3[2] = (int)puVar5;
LAB_7139874c:
    imp___aeabi_memmove(puVar5,iVar2,uVar1);
  }
  puVar5[uVar1] = 0;
  piVar3 = piVar3 + 3;
LAB_71398768:
  *(int **)(iVar4 + 0x338) = piVar3;
  return;
}


// =========================================================================
// Function: FUN_7139885c
// Entry: 0x7139885c | Size: 56 bytes
// =========================================================================

void FUN_7139885c(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *DAT_70b46448;
  iVar1 = *(int *)(iVar2 + 0x338);
  pbVar3 = (byte *)(iVar1 + -0xc);
  if ((*pbVar3 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(iVar1 + -4));
  }
  *(byte **)(iVar2 + 0x338) = pbVar3;
  return;
}


// =========================================================================
// Function: FUN_713988e8
// Entry: 0x713988e8 | Size: 780 bytes
// =========================================================================

void FUN_713988e8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_2a;
  char cStack_29;
  int *piStack_28;
  
  piVar3 = (int *)*param_1;
  iVar6 = *piVar3;
  *param_1 = (int)(piVar3 + 1);
  piStack_28 = (int *)piVar3[1];
  *param_1 = (int)(piVar3 + 2);
  iVar5 = piVar3[2];
  *param_1 = (int)(piVar3 + 3);
  iVar1 = FUN_71803c54(&piStack_28);
  piVar3 = piStack_28;
  if (iVar1 != 0) {
    iVar5 = 0;
  }
  if (piStack_28 == (int *)0x0) {
    return;
  }
  iVar1 = *piStack_28;
  if (*(char *)(iVar1 + 0x22) != '\0') {
    uVar4 = *(undefined4 *)(iVar1 + 0x4c);
    uVar8 = FUN_71ba1980(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c));
    uVar7 = *(undefined4 *)(iVar1 + 0x18);
    uVar9 = FUN_71ba1b10(*(undefined4 *)(iVar1 + 0x14));
    uVar10 = FUN_71ba1b10(uVar7);
    uVar9 = FUN_71ba0f98((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                         (int)((ulonglong)uVar10 >> 0x20));
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar8 = FUN_71ba1ea0((int)uVar9,uVar7,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar10 = FUN_71ba1638(uVar4);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar2 = FUN_71ba2c7c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar10,uVar4);
    if (iVar2 == 0) {
      uVar8 = FUN_71ba1980(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44));
      uVar8 = FUN_71ba1ea0((int)uVar9,uVar7,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      iVar2 = FUN_71ba2c7c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar10,uVar4);
      if (iVar2 == 0) goto LAB_71398a58;
    }
    iVar5 = 0;
    FUN_71801324(iVar1,0);
    piVar3 = piStack_28;
    if (piStack_28[1] != 0) {
      FUN_71801324(piStack_28[1],0);
      FUN_71801a5c(piStack_28[1],1);
      piVar3 = piStack_28;
    }
  }
LAB_71398a58:
  iVar1 = *piVar3;
  uVar7 = FUN_71ba0b38(iVar5,*(undefined4 *)(iVar1 + 0x48));
  *(undefined4 *)(iVar1 + 0x48) = uVar7;
  (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3,&cStack_29);
  piVar3 = piStack_28;
  iVar1 = piStack_28[1];
  if (iVar1 != 0) {
    iVar2 = *piStack_28;
    if (*(char *)(iVar2 + 0x60) == '\0') {
      uVar7 = FUN_71ba0b38(iVar5,*(undefined4 *)(iVar1 + 0x48));
      *(undefined4 *)(iVar1 + 0x48) = uVar7;
    }
    else {
      uVar7 = *(undefined4 *)(iVar2 + 0x14);
      uVar4 = *(undefined4 *)(iVar2 + 0x18);
      uVar8 = FUN_71ba1980(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44));
      uVar9 = FUN_71ba1b10(uVar7);
      uVar10 = FUN_71ba1b10(uVar4);
      uVar9 = FUN_71ba0f98((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                           (int)((ulonglong)uVar10 >> 0x20));
      FUN_71ba1ea0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar8,
                   (int)((ulonglong)uVar8 >> 0x20));
      uVar7 = FUN_71ba242c();
      FUN_71801324(iVar1,uVar7);
      FUN_71801a5c(piStack_28[1],1);
      *(undefined1 *)(*piStack_28 + 0x60) = 0;
      piVar3 = piStack_28;
    }
    (**(code **)(*(int *)piVar3[1] + 8))((int *)piVar3[1],&uStack_2a);
    *(undefined1 *)(piStack_28[1] + 0x70) = 0;
  }
  piVar3 = DAT_70b42224;
  if (cStack_29 != '\0') {
    if (*DAT_70b42224 != 0x14) {
      imp_glActiveTexture(0x84d4);
      *piVar3 = 0x14;
    }
    imp_glBindTexture(0xde1,*(undefined4 *)(iVar6 + 0x28));
    DAT_70b42220 = *(undefined4 *)(iVar6 + 0x28);
    iVar1 = *piStack_28;
    imp_glTexImage2D(0xde1,0,0x1907,*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),0,
                     0x1907,0x1401,*(undefined4 *)(iVar1 + 0x5c));
  }
  return;
}


// =========================================================================
// Function: WWgTycoCpUcBYfczcPziMusrTlOzHtxq
// Entry: 0x713990e4 | Size: 32 bytes
// =========================================================================

void WWgTycoCpUcBYfczcPziMusrTlOzHtxq(int param_1)

{
  DataMemoryBarrier(0xb);
  DAT_70b466a0 = param_1 != 0;
  DataMemoryBarrier(0xb);
  return;
}


// =========================================================================
// Function: bNFjGnMOicsNnOeLgxrGFWwnm
// Entry: 0x7139913c | Size: 212 bytes
// =========================================================================

undefined4
bNFjGnMOicsNnOeLgxrGFWwnm
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b4660c);
  if (DAT_70b46624 == 0) {
    uVar3 = 0;
  }
  else {
    DAT_70b46624 = DAT_70b46624 + -1;
    uVar1 = DAT_70b46620 >> 8;
    uVar5 = DAT_70b46620 & 0xff;
    DAT_70b46620 = DAT_70b46620 + 1;
    puVar2 = (undefined4 *)(DAT_70b46614[uVar1] + uVar5 * 0x10);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    if (0x1ff < DAT_70b46620) {
      thunk_qNQrlu(*DAT_70b46614);
      DAT_70b46614 = DAT_70b46614 + 1;
      DAT_70b46620 = DAT_70b46620 - 0x100;
    }
    uVar3 = 1;
    *param_1 = uVar4;
    *param_2 = uVar6;
    *param_3 = uVar7;
    *param_4 = uVar8;
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b4660c);
  return uVar3;
}


// =========================================================================
// Function: FUN_71399438
// Entry: 0x71399438 | Size: 920 bytes
// =========================================================================

void FUN_71399438(void)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  FUN_715a4f64();
  puVar8 = DAT_70b4664c;
  puVar11 = DAT_70b46658;
  puVar3 = DAT_70b4665c;
  if (DAT_70b4664c != DAT_70b46650) {
    do {
      while (iVar4 = imp_glClientWaitSync(puVar8[0xb],0,0,0), iVar4 != 0x911b) {
        iVar4 = puVar8[2] * puVar8[1] * 4;
        if (0x3fffffff < (uint)(puVar8[2] * puVar8[1])) {
          iVar4 = -1;
        }
        uVar5 = thunk__IBDl(iVar4);
        puVar11 = puVar8 + 8;
        imp_glBindBuffer(0x88eb,*puVar11);
        iVar4 = imp_glMapBufferRange(0x88eb,0,puVar8[10],1);
        if (iVar4 == 0) {
          imp_glBindBuffer(0x88eb,0);
          imp_glDeleteSync(puVar8[0xb]);
          puVar3 = DAT_70b46658;
          if (DAT_70b4665c < DAT_70b46660) {
            uVar7 = puVar8[9];
            puVar9 = DAT_70b4665c + 2;
            *DAT_70b4665c = *puVar11;
            DAT_70b4665c[1] = uVar7;
          }
          else {
            iVar10 = (int)DAT_70b4665c - (int)DAT_70b46658;
            iVar4 = iVar10 >> 3;
            uVar12 = iVar4 + 1;
            if (0x1fffffff < uVar12) goto LAB_713997c0;
            uVar1 = (int)DAT_70b46660 - (int)DAT_70b46658 >> 2;
            if (uVar12 < uVar1) {
              uVar12 = uVar1;
            }
            if (0x7ffffff7 < (uint)((int)DAT_70b46660 - (int)DAT_70b46658)) {
              uVar12 = 0x1fffffff;
            }
            if (uVar12 == 0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              if (0x1fffffff < uVar12) goto LAB_713997cc;
              puVar6 = (undefined4 *)thunk_MwhHq(uVar12 << 3);
            }
            uVar7 = puVar8[9];
            puVar9 = puVar6 + iVar4 * 2;
            *puVar9 = *puVar11;
            puVar9[1] = uVar7;
            imp___aeabi_memcpy4(puVar6,puVar3,iVar10);
            DAT_70b46660 = puVar6 + uVar12 * 2;
            puVar9 = puVar9 + 2;
            DAT_70b46658 = puVar6;
            if (puVar3 != (undefined4 *)0x0) {
              DAT_70b4665c = puVar9;
              thunk_qNQrlu(puVar3);
            }
          }
          DAT_70b4665c = puVar9;
          thunk_dGrRHE(uVar5);
          FUN_714eb5e4(*puVar8,6);
        }
        else {
          imp___aeabi_memcpy(uVar5,iVar4,puVar8[10]);
          imp_glUnmapBuffer(0x88eb);
          imp_glBindBuffer(0x88eb,0);
          imp_glDeleteSync(puVar8[0xb]);
          puVar3 = DAT_70b46658;
          if (DAT_70b4665c < DAT_70b46660) {
            uVar7 = puVar8[9];
            puVar9 = DAT_70b4665c + 2;
            *DAT_70b4665c = *puVar11;
            DAT_70b4665c[1] = uVar7;
          }
          else {
            iVar10 = (int)DAT_70b4665c - (int)DAT_70b46658;
            iVar4 = iVar10 >> 3;
            uVar12 = iVar4 + 1;
            if (0x1fffffff < uVar12) {
LAB_713997c0:
              FUN_7139f27c(&DAT_70b46658);
LAB_713997cc:
                    /* WARNING: Subroutine does not return */
              FUN_712f6cf0();
            }
            uVar1 = (int)DAT_70b46660 - (int)DAT_70b46658 >> 2;
            if (uVar12 < uVar1) {
              uVar12 = uVar1;
            }
            if (0x7ffffff7 < (uint)((int)DAT_70b46660 - (int)DAT_70b46658)) {
              uVar12 = 0x1fffffff;
            }
            if (uVar12 == 0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              if (0x1fffffff < uVar12) goto LAB_713997cc;
              puVar6 = (undefined4 *)thunk_MwhHq(uVar12 << 3);
            }
            uVar7 = puVar8[9];
            puVar9 = puVar6 + iVar4 * 2;
            *puVar9 = *puVar11;
            puVar9[1] = uVar7;
            imp___aeabi_memcpy4(puVar6,puVar3,iVar10);
            DAT_70b46660 = puVar6 + uVar12 * 2;
            puVar9 = puVar9 + 2;
            DAT_70b46658 = puVar6;
            if (puVar3 != (undefined4 *)0x0) {
              DAT_70b4665c = puVar9;
              thunk_qNQrlu(puVar3);
            }
          }
          DAT_70b4665c = puVar9;
          FUN_7139a470(&DAT_70b46628,puVar8,uVar5);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = DAT_70b46608 + -1;
          bVar2 = (bool)hasExclusiveAccess(0x70b46608);
        } while (!bVar2);
        DataMemoryBarrier(0xb);
        iVar10 = (int)DAT_70b46650 - (int)(puVar8 + 0xc);
        DAT_70b46608 = iVar4;
        if (iVar10 != 0) {
          imp___aeabi_memmove4(puVar8,puVar8 + 0xc,iVar10);
        }
        DAT_70b46650 = (undefined4 *)((int)puVar8 + iVar10);
        if (puVar8 == DAT_70b46650) goto LAB_71399760;
      }
      puVar8 = puVar8 + 0xc;
    } while (puVar8 != DAT_70b46650);
LAB_71399760:
    puVar11 = DAT_70b46658;
    puVar3 = DAT_70b4665c;
    if (DAT_70b4664c != DAT_70b46650) {
      return;
    }
  }
  for (; puVar8 = DAT_70b4665c, puVar11 != DAT_70b4665c; puVar11 = puVar11 + 2) {
    DAT_70b4665c = puVar3;
    imp_glDeleteBuffers(1,puVar11);
    puVar3 = DAT_70b4665c;
    DAT_70b4665c = puVar8;
  }
  DAT_70b4665c = DAT_70b46658;
  return;
}


// =========================================================================
// Function: FUN_71399c88
// Entry: 0x71399c88 | Size: 1032 bytes
// =========================================================================

void FUN_71399c88(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar4 = (undefined4 *)*param_1;
  uVar7 = *puVar4;
  *param_1 = (int)(puVar4 + 1);
  iVar9 = puVar4[1];
  *param_1 = (int)(puVar4 + 2);
  iVar11 = puVar4[2];
  *param_1 = (int)(puVar4 + 3);
  uVar8 = puVar4[3];
  *param_1 = (int)(puVar4 + 4);
  uStack_38 = puVar4[4];
  *param_1 = (int)(puVar4 + 5);
  uStack_34 = puVar4[5];
  *param_1 = (int)(puVar4 + 6);
  uStack_30 = puVar4[6];
  *param_1 = (int)(puVar4 + 7);
  uStack_2c = puVar4[7];
  *param_1 = (int)(puVar4 + 8);
  uStack_48 = uVar7;
  iStack_44 = iVar9;
  iStack_40 = iVar11;
  uStack_3c = uVar8;
  if ((int)DAT_700bb8dc < 0) {
    iVar3 = imp_glGetString(0x1f02);
    if (iVar3 == 0) {
      DAT_700bb8dc = 0;
    }
    else {
      iVar3 = imp_strstr(iVar3,s_OpenGL_ES_3_70070873);
      DAT_700bb8dc = (uint)(iVar3 != 0);
    }
  }
  if (DAT_700bb8dc != 1) {
    iVar3 = iVar11 * iVar9 * 4;
    if (0x3fffffff < (uint)(iVar11 * iVar9)) {
      iVar3 = -1;
    }
    uVar7 = thunk__IBDl(iVar3);
    imp_glReadPixels(0,0,iVar9,iVar11,0x1908,0x1401,uVar7);
    FUN_7139a470(&DAT_70b46628,&uStack_48,uVar7);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x70b46608);
    } while (!bVar1);
    DAT_70b46608 = DAT_70b46608 + -1;
    DataMemoryBarrier(0xb);
    return;
  }
  FUN_715aa3c8(uVar7,iVar9,iVar11,uVar8);
  iVar3 = iVar9 * iVar11 * 4;
  if (DAT_70b46658 != DAT_70b4665c) {
    iVar5 = (int)DAT_70b4665c - (int)DAT_70b46658;
    puVar4 = DAT_70b46658;
    do {
      iVar5 = iVar5 + -8;
      if (iVar3 <= (int)puVar4[1]) {
        uVar7 = *puVar4;
        iStack_4c = puVar4[1];
        uStack_50 = uVar7;
        if (puVar4 + 2 != DAT_70b4665c) {
          imp___aeabi_memmove4(puVar4,puVar4 + 2,iVar5);
        }
        DAT_70b4665c = (undefined4 *)((int)puVar4 + iVar5);
        goto LAB_71399e30;
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != DAT_70b4665c);
  }
  uStack_50 = 0;
  iStack_4c = iVar3;
  imp_glGenBuffers(1,&uStack_50);
  imp_glBindBuffer(0x88eb,uStack_50);
  imp_glBufferData(0x88eb,iVar3,0,0x88e1);
  imp_glBindBuffer(0x88eb,0);
  uVar7 = uStack_50;
LAB_71399e30:
  imp_glBindBuffer(0x88eb,uVar7);
  imp_glReadPixels(0,0,iVar9,iVar11,0x1908,0x1401,0);
  imp_glBindBuffer(0x88eb,0);
  uVar8 = imp_glFenceSync(0x9117,0);
  imp_glFlush();
  iVar11 = iStack_4c;
  uVar7 = uStack_50;
  uVar10 = (uint)DAT_70b46650;
  iVar9 = DAT_70b4664c;
  if (DAT_70b46650 < DAT_70b46654) {
    imp___aeabi_memmove4(DAT_70b46650,&uStack_48,0x20);
    *(undefined4 *)(uVar10 + 0x20) = uVar7;
    *(int *)(uVar10 + 0x24) = iVar11;
    *(int *)(uVar10 + 0x28) = iVar3;
    *(undefined4 *)(uVar10 + 0x2c) = uVar8;
    puVar4 = (undefined4 *)(uVar10 + 0x30);
  }
  else {
    iVar6 = (int)DAT_70b46650 - DAT_70b4664c;
    iVar5 = iVar6 >> 4;
    uVar10 = iVar5 * -0x55555555 + 1;
    if (0x5555555 < uVar10) {
      FUN_713a26bc(&DAT_70b4664c);
LAB_7139a08c:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar2 = (int)(DAT_70b46654 - DAT_70b4664c) >> 4;
    if (uVar10 < (uint)(iVar2 * 0x55555556)) {
      uVar10 = iVar2 * 0x55555556;
    }
    if (0x2aaaaa9 < (uint)(iVar2 * -0x55555555)) {
      uVar10 = 0x5555555;
    }
    if (uVar10 == 0) {
      iVar2 = 0;
    }
    else {
      if (0x5555555 < uVar10) goto LAB_7139a08c;
      iVar2 = thunk_MwhHq(uVar10 * 0x30);
    }
    puVar4 = (undefined4 *)(iVar2 + iVar5 * 0x10);
    *puVar4 = uStack_48;
    puVar4[1] = iStack_44;
    puVar4[2] = iStack_40;
    puVar4[3] = uStack_3c;
    puVar4[4] = uStack_38;
    puVar4[5] = uStack_34;
    puVar4[6] = uStack_30;
    puVar4[7] = uStack_2c;
    puVar4[8] = uVar7;
    puVar4[10] = iVar3;
    iVar6 = (int)puVar4 - iVar6;
    puVar4[9] = iVar11;
    puVar4[0xb] = uVar8;
    imp___aeabi_memcpy4(iVar6,iVar9);
    puVar4 = puVar4 + 0xc;
    DAT_70b46654 = iVar2 + uVar10 * 0x30;
    DAT_70b4664c = iVar6;
    if (iVar9 != 0) {
      DAT_70b46650 = puVar4;
      thunk_qNQrlu(iVar9);
    }
  }
  DAT_70b46650 = puVar4;
  return;
}


// =========================================================================
// Function: FUN_7139a470
// Entry: 0x7139a470 | Size: 352 bytes
// =========================================================================

void FUN_7139a470(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ();
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = thunk_MwhHq(4);
    thunk_IqYTnHtEYRLvLLTOJMZHzxakOfRAHvNTt();
    puVar2 = (undefined4 *)thunk_MwhHq(0x10);
    *puVar2 = uVar1;
    puVar2[1] = FUN_7139f2e4;
    puVar2[2] = 0;
    puVar2[3] = param_1;
    iVar3 = imp_pthread_create(&uStack_40,0,FUN_713a14b0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_BryazjfoMPqEkZEtKkG_KttlecoGMjr_tAmWbCi(iVar3,s_thread_constructor_failed_70063c8c);
    }
    thunk_dtOmRBwkVHnGtYLYirTdLYLImchz(&uStack_40);
    thunk_uQwrLJbzyUVbHmvQcVNflhV(&uStack_40);
  }
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  uStack_28 = param_2[6];
  uStack_24 = param_2[7];
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x10) != iVar3) {
    uVar5 = (*(int *)(param_1 + 0x10) - iVar3 >> 2) * 0x71 - 1;
  }
  if (uVar5 == uVar4) {
    FUN_713a15c0(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    uVar4 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
  }
  puVar2 = (undefined4 *)(*(int *)(iVar3 + (uVar4 / 0x71) * 4) + (uVar4 % 0x71) * 0x24);
  *puVar2 = uStack_40;
  puVar2[1] = uStack_3c;
  puVar2[2] = uStack_38;
  puVar2[3] = uStack_34;
  puVar2[4] = uStack_30;
  puVar2[5] = uStack_2c;
  puVar2[6] = uStack_28;
  puVar2[7] = uStack_24;
  puVar2[8] = param_3;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(param_1);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(param_1 + 4);
  return;
}


// =========================================================================
// Function: FUN_7139a77c
// Entry: 0x7139a77c | Size: 1920 bytes
// =========================================================================

void FUN_7139a77c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  bool bVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  bool bVar24;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  *(undefined1 *)(param_1 + 0x26c) = 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_70b46468);
  uVar6 = *DAT_70b46454;
  iVar7 = FUN_714b98c8(uVar6,1000);
  piVar14 = DAT_710eb1b8;
  if (iVar7 == 0) {
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbce0);
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd00);
    iVar7 = 0;
    bVar20 = false;
    do {
      while( true ) {
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
        iVar21 = *piVar14;
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
        bVar17 = DAT_700c1e08;
        iVar10 = 0;
        if (iVar21 == 0) {
          iVar10 = iVar7 + 1;
        }
        iVar7 = iVar10;
        if (iVar21 == 0 && iVar7 == 10) break;
        iVar10 = FUN_714b98c8(uVar6,1000);
        if (iVar10 != 0) {
          if (!bVar20) {
            return;
          }
          goto LAB_7139accc;
        }
      }
      DataMemoryBarrier(0xb);
      pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcf0);
      if (*pcVar13 == '\0') {
        puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbce0);
        *(undefined1 *)(puVar15 + 0xe) = 1;
        uVar3 = DAT_700761dc;
        uVar2 = DAT_700761d8;
        uVar22 = DAT_700761d4;
        *puVar15 = DAT_700761d0;
        puVar15[1] = uVar22;
        puVar15[2] = uVar2;
        puVar15[3] = uVar3;
        uVar4 = DAT_700761f0;
        uVar3 = DAT_700761ec;
        uVar2 = DAT_700761e8;
        uVar22 = DAT_700761e4;
        puVar15[4] = DAT_700761e0;
        puVar15[5] = uVar22;
        puVar15[6] = uVar2;
        puVar15[7] = uVar3;
        puVar15[8] = uVar4;
        uVar4 = DAT_70076204;
        uVar3 = DAT_70076200;
        uVar2 = DAT_700761fc;
        uVar22 = DAT_700761f8;
        puVar15[9] = DAT_700761f4;
        puVar15[10] = uVar22;
        puVar15[0xb] = uVar2;
        puVar15[0xc] = uVar3;
        puVar15[0xd] = uVar4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a2118,puVar15,&DAT_70b0e000);
        puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcf0);
        *puVar16 = 1;
      }
      if (*(char *)(iVar8 + 0x38) != '\0') {
        uVar12 = 0;
        uVar18 = 0;
        do {
          iVar7 = (uVar12 & 7) * 8;
          uVar23 = iVar7 - 0x20;
          bVar19 = (byte)(0xb5d9db1d >> iVar7) |
                   (byte)(-0x6c745437 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar23) {
            bVar19 = (byte)(0x938babc9 >> (uVar23 & 0xff));
          }
          *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar19;
          bVar24 = 0xfffffffe < uVar12;
          bVar20 = uVar18 == 0;
          bVar1 = (0x36 < uVar12) <= uVar18;
          uVar12 = uVar12 + 1;
          uVar18 = uVar18 + bVar24;
        } while (bVar20 && bVar1);
        *(undefined1 *)(iVar8 + 0x38) = 0;
      }
      FUN_7188543c(iVar8);
      iVar7 = DAT_712017f8;
      if (DAT_712017f8 != 0) {
        DataMemoryBarrier(0xb);
        if (((DAT_70b466b0 & 1) == 0) &&
           (iVar10 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b466b0), iVar10 != 0)) {
          pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd10);
          if (*pcVar13 == '\0') {
            puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd00);
            *(undefined1 *)((int)puVar15 + 0x15) = 1;
            uVar4 = DAT_70076218;
            uVar3 = DAT_70076214;
            uVar2 = DAT_70076210;
            uVar22 = DAT_7007620c;
            *puVar15 = DAT_70076208;
            puVar15[1] = uVar22;
            puVar15[2] = uVar2;
            puVar15[3] = uVar3;
            puVar15[4] = uVar4;
            *(undefined1 *)(puVar15 + 5) = DAT_7007621c;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a2168,puVar15,&DAT_70b0e000);
            puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd10);
            *puVar16 = 1;
          }
          if (*(char *)(iVar9 + 0x15) != '\0') {
            uVar12 = 0;
            uVar18 = 0;
            do {
              iVar10 = (uVar12 & 7) * 8;
              bVar19 = (byte)(0xe51fa977 >> iVar10) |
                       (byte)(0x695fdf51 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
              uVar23 = iVar10 - 0x20;
              if (-1 < (int)uVar23) {
                bVar19 = (byte)(0x695fdf51 >> (uVar23 & 0xff));
              }
              *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar19;
              bVar24 = 0xfffffffe < uVar12;
              bVar20 = uVar18 == 0;
              bVar1 = (0x13 < uVar12) <= uVar18;
              uVar12 = uVar12 + 1;
              uVar18 = uVar18 + bVar24;
            } while (bVar20 && bVar1);
            *(undefined1 *)(iVar9 + 0x15) = 0;
          }
          DAT_70b466ac = FUN_71885ba4(iVar9,0);
          thunk_SixizuLbAnqfgRApsCY(&DAT_70b466b0);
        }
        uVar22 = DAT_70b466ac;
        imp___aeabi_memclr4(&iStack_54,0x30);
        uStack_58 = uVar22;
        uVar22 = FUN_713a1f9c(&uStack_58,bVar17 & 1);
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar7 + 0x34);
        piVar11 = (int *)thunk_MwhHq(0x3c);
        *piVar11 = 0;
        piVar11[1] = 0;
        FUN_713a10f8(piVar11 + 2,uVar22);
        piVar11[1] = iVar7 + 0x38;
        iVar10 = *(int *)(iVar7 + 0x38);
        *piVar11 = iVar10;
        *(int **)(iVar10 + 4) = piVar11;
        *(int **)(iVar7 + 0x38) = piVar11;
        *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 1;
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar7 + 0x34);
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
      iVar10 = FUN_714b98c8(uVar6,1000);
      bVar20 = true;
      iVar7 = 10;
    } while (iVar10 == 0);
LAB_7139accc:
    pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd30);
    if (*pcVar13 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd20);
      *(undefined1 *)((int)puVar15 + 0x1b) = 1;
      uVar4 = DAT_70076234;
      uVar3 = DAT_70076230;
      uVar2 = DAT_7007622c;
      uVar22 = DAT_70076228;
      uVar6 = DAT_70076224;
      *puVar15 = DAT_70076220;
      puVar15[1] = uVar6;
      puVar15[2] = uVar22;
      puVar15[3] = uVar2;
      puVar15[4] = uVar3;
      puVar15[5] = uVar4;
      uVar5 = DAT_7007623a;
      *(undefined2 *)(puVar15 + 6) = DAT_70076238;
      *(undefined1 *)((int)puVar15 + 0x1a) = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a21a0,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd30);
      *puVar16 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd20);
    if (*(char *)(iVar7 + 0x1b) != '\0') {
      uVar12 = 0;
      uVar18 = 0;
      do {
        iVar8 = (uVar12 & 7) * 8;
        uVar23 = iVar8 - 0x20;
        bVar17 = (byte)(0xb1dfcd87 >> iVar8) |
                 (byte)(-0x3a6082cf << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar23) {
          bVar17 = (byte)(0xc59f7d31 >> (uVar23 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar17;
        bVar24 = 0xfffffffe < uVar12;
        bVar20 = uVar18 == 0;
        bVar1 = (0x19 < uVar12) <= uVar18;
        uVar12 = uVar12 + 1;
        uVar18 = uVar18 + bVar24;
      } while (bVar20 && bVar1);
      *(undefined1 *)(iVar7 + 0x1b) = 0;
    }
    FUN_7188543c();
    iVar7 = DAT_712017f8;
    if (DAT_712017f8 != 0) {
      DataMemoryBarrier(0xb);
      if (((DAT_70b466b8 & 1) == 0) &&
         (iVar8 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b466b8), iVar8 != 0)) {
        pcVar13 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd50);
        if (*pcVar13 == '\0') {
          puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd40);
          *(undefined1 *)((int)puVar15 + 0x17) = 1;
          uVar3 = DAT_70076250;
          uVar2 = DAT_7007624c;
          uVar22 = DAT_70076248;
          uVar6 = DAT_70076244;
          *puVar15 = DAT_70076240;
          puVar15[1] = uVar6;
          puVar15[2] = uVar22;
          puVar15[3] = uVar2;
          puVar15[4] = uVar3;
          uVar5 = DAT_70076256;
          *(undefined2 *)(puVar15 + 5) = DAT_70076254;
          *(undefined1 *)((int)puVar15 + 0x16) = uVar5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a21dc,puVar15,&DAT_70b0e000);
          puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd50);
          *puVar16 = 1;
        }
        iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd40);
        if (*(char *)(iVar8 + 0x17) != '\0') {
          uVar12 = 0;
          uVar18 = 0;
          do {
            iVar9 = (uVar12 & 7) * 8;
            bVar17 = (byte)(0x33032df5 >> iVar9) |
                     (byte)(-0xaa870ed << ((uVar12 & 7) * -8 + 0x20 & 0xff));
            uVar23 = iVar9 - 0x20;
            if (-1 < (int)uVar23) {
              bVar17 = (byte)(0xf5578f13 >> (uVar23 & 0xff));
            }
            *(byte *)(iVar8 + uVar12) = *(byte *)(iVar8 + uVar12) ^ bVar17;
            bVar24 = 0xfffffffe < uVar12;
            bVar20 = uVar18 == 0;
            bVar1 = (0x15 < uVar12) <= uVar18;
            uVar12 = uVar12 + 1;
            uVar18 = uVar18 + bVar24;
          } while (bVar20 && bVar1);
          *(undefined1 *)(iVar8 + 0x17) = 0;
        }
        DAT_70b466b4 = FUN_71885ba4(iVar8,0);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70b466b8);
      }
      uVar6 = DAT_70b466b4;
      imp___aeabi_memclr4(&iStack_54,0x30);
      uStack_58 = uVar6;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar7 + 0x34);
      piVar14 = (int *)thunk_MwhHq(0x3c);
      *piVar14 = 0;
      piVar14[1] = 0;
      FUN_713a10f8(piVar14 + 2,&uStack_58);
      piVar14[1] = iVar7 + 0x38;
      iVar8 = *(int *)(iVar7 + 0x38);
      *piVar14 = iVar8;
      *(int **)(iVar8 + 4) = piVar14;
      *(int **)(iVar7 + 0x38) = piVar14;
      *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 1;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar7 + 0x34);
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
  }
  return;
}


// =========================================================================
// Function: FUN_7139bad4
// Entry: 0x7139bad4 | Size: 76 bytes
// =========================================================================

void FUN_7139bad4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  bool bVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  bool bVar24;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  *(undefined1 *)(param_1 + 0x26d) = 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_70b46468);
  uVar16 = *DAT_70b46458;
  iVar6 = FUN_714b98c8(uVar16,1000);
  piVar13 = DAT_710eb1b8;
  if (iVar6 == 0) {
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbce0);
    iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd00);
    iVar6 = 0;
    bVar20 = false;
    do {
      while( true ) {
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
        iVar21 = *piVar13;
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
        bVar17 = DAT_700c1e08;
        iVar9 = 0;
        if (iVar21 == 0) {
          iVar9 = iVar6 + 1;
        }
        iVar6 = iVar9;
        if (iVar21 == 0 && iVar6 == 10) break;
        iVar9 = FUN_714b98c8(uVar16,1000);
        if (iVar9 != 0) {
          if (!bVar20) {
            return;
          }
          goto LAB_7139accc;
        }
      }
      DataMemoryBarrier(0xb);
      pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcf0);
      if (*pcVar12 == '\0') {
        puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbce0);
        *(undefined1 *)(puVar14 + 0xe) = 1;
        uVar3 = DAT_700761dc;
        uVar2 = DAT_700761d8;
        uVar22 = DAT_700761d4;
        *puVar14 = DAT_700761d0;
        puVar14[1] = uVar22;
        puVar14[2] = uVar2;
        puVar14[3] = uVar3;
        uVar4 = DAT_700761f0;
        uVar3 = DAT_700761ec;
        uVar2 = DAT_700761e8;
        uVar22 = DAT_700761e4;
        puVar14[4] = DAT_700761e0;
        puVar14[5] = uVar22;
        puVar14[6] = uVar2;
        puVar14[7] = uVar3;
        puVar14[8] = uVar4;
        uVar4 = DAT_70076204;
        uVar3 = DAT_70076200;
        uVar2 = DAT_700761fc;
        uVar22 = DAT_700761f8;
        puVar14[9] = DAT_700761f4;
        puVar14[10] = uVar22;
        puVar14[0xb] = uVar2;
        puVar14[0xc] = uVar3;
        puVar14[0xd] = uVar4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a2118,puVar14,&DAT_70b0e000);
        puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcf0);
        *puVar15 = 1;
      }
      if (*(char *)(iVar7 + 0x38) != '\0') {
        uVar11 = 0;
        uVar18 = 0;
        do {
          iVar6 = (uVar11 & 7) * 8;
          uVar23 = iVar6 - 0x20;
          bVar19 = (byte)(0xb5d9db1d >> iVar6) |
                   (byte)(-0x6c745437 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar23) {
            bVar19 = (byte)(0x938babc9 >> (uVar23 & 0xff));
          }
          *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar19;
          bVar24 = 0xfffffffe < uVar11;
          bVar20 = uVar18 == 0;
          bVar1 = (0x36 < uVar11) <= uVar18;
          uVar11 = uVar11 + 1;
          uVar18 = uVar18 + bVar24;
        } while (bVar20 && bVar1);
        *(undefined1 *)(iVar7 + 0x38) = 0;
      }
      FUN_7188543c(iVar7);
      iVar6 = DAT_712017f8;
      if (DAT_712017f8 != 0) {
        DataMemoryBarrier(0xb);
        if (((DAT_70b466b0 & 1) == 0) &&
           (iVar9 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b466b0), iVar9 != 0)) {
          pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd10);
          if (*pcVar12 == '\0') {
            puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd00);
            *(undefined1 *)((int)puVar14 + 0x15) = 1;
            uVar4 = DAT_70076218;
            uVar3 = DAT_70076214;
            uVar2 = DAT_70076210;
            uVar22 = DAT_7007620c;
            *puVar14 = DAT_70076208;
            puVar14[1] = uVar22;
            puVar14[2] = uVar2;
            puVar14[3] = uVar3;
            puVar14[4] = uVar4;
            *(undefined1 *)(puVar14 + 5) = DAT_7007621c;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a2168,puVar14,&DAT_70b0e000);
            puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd10);
            *puVar15 = 1;
          }
          if (*(char *)(iVar8 + 0x15) != '\0') {
            uVar11 = 0;
            uVar18 = 0;
            do {
              iVar9 = (uVar11 & 7) * 8;
              bVar19 = (byte)(0xe51fa977 >> iVar9) |
                       (byte)(0x695fdf51 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
              uVar23 = iVar9 - 0x20;
              if (-1 < (int)uVar23) {
                bVar19 = (byte)(0x695fdf51 >> (uVar23 & 0xff));
              }
              *(byte *)(iVar8 + uVar11) = *(byte *)(iVar8 + uVar11) ^ bVar19;
              bVar24 = 0xfffffffe < uVar11;
              bVar20 = uVar18 == 0;
              bVar1 = (0x13 < uVar11) <= uVar18;
              uVar11 = uVar11 + 1;
              uVar18 = uVar18 + bVar24;
            } while (bVar20 && bVar1);
            *(undefined1 *)(iVar8 + 0x15) = 0;
          }
          DAT_70b466ac = FUN_71885ba4(iVar8,0);
          thunk_SixizuLbAnqfgRApsCY(&DAT_70b466b0);
        }
        uVar22 = DAT_70b466ac;
        imp___aeabi_memclr4(&iStack_54,0x30);
        uStack_58 = uVar22;
        uVar22 = FUN_713a1f9c(&uStack_58,bVar17 & 1);
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6 + 0x34);
        piVar10 = (int *)thunk_MwhHq(0x3c);
        *piVar10 = 0;
        piVar10[1] = 0;
        FUN_713a10f8(piVar10 + 2,uVar22);
        piVar10[1] = iVar6 + 0x38;
        iVar9 = *(int *)(iVar6 + 0x38);
        *piVar10 = iVar9;
        *(int **)(iVar9 + 4) = piVar10;
        *(int **)(iVar6 + 0x38) = piVar10;
        *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 1;
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6 + 0x34);
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
      iVar9 = FUN_714b98c8(uVar16,1000);
      bVar20 = true;
      iVar6 = 10;
    } while (iVar9 == 0);
LAB_7139accc:
    pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd30);
    if (*pcVar12 == '\0') {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd20);
      *(undefined1 *)((int)puVar14 + 0x1b) = 1;
      uVar4 = DAT_70076234;
      uVar3 = DAT_70076230;
      uVar2 = DAT_7007622c;
      uVar22 = DAT_70076228;
      uVar16 = DAT_70076224;
      *puVar14 = DAT_70076220;
      puVar14[1] = uVar16;
      puVar14[2] = uVar22;
      puVar14[3] = uVar2;
      puVar14[4] = uVar3;
      puVar14[5] = uVar4;
      uVar5 = DAT_7007623a;
      *(undefined2 *)(puVar14 + 6) = DAT_70076238;
      *(undefined1 *)((int)puVar14 + 0x1a) = uVar5;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a21a0,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd30);
      *puVar15 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd20);
    if (*(char *)(iVar6 + 0x1b) != '\0') {
      uVar11 = 0;
      uVar18 = 0;
      do {
        iVar7 = (uVar11 & 7) * 8;
        uVar23 = iVar7 - 0x20;
        bVar17 = (byte)(0xb1dfcd87 >> iVar7) |
                 (byte)(-0x3a6082cf << ((uVar11 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar23) {
          bVar17 = (byte)(0xc59f7d31 >> (uVar23 & 0xff));
        }
        *(byte *)(iVar6 + uVar11) = *(byte *)(iVar6 + uVar11) ^ bVar17;
        bVar24 = 0xfffffffe < uVar11;
        bVar20 = uVar18 == 0;
        bVar1 = (0x19 < uVar11) <= uVar18;
        uVar11 = uVar11 + 1;
        uVar18 = uVar18 + bVar24;
      } while (bVar20 && bVar1);
      *(undefined1 *)(iVar6 + 0x1b) = 0;
    }
    FUN_7188543c();
    iVar6 = DAT_712017f8;
    if (DAT_712017f8 != 0) {
      DataMemoryBarrier(0xb);
      if (((DAT_70b466b8 & 1) == 0) &&
         (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b466b8), iVar7 != 0)) {
        pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd50);
        if (*pcVar12 == '\0') {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd40);
          *(undefined1 *)((int)puVar14 + 0x17) = 1;
          uVar3 = DAT_70076250;
          uVar2 = DAT_7007624c;
          uVar22 = DAT_70076248;
          uVar16 = DAT_70076244;
          *puVar14 = DAT_70076240;
          puVar14[1] = uVar16;
          puVar14[2] = uVar22;
          puVar14[3] = uVar2;
          puVar14[4] = uVar3;
          uVar5 = DAT_70076256;
          *(undefined2 *)(puVar14 + 5) = DAT_70076254;
          *(undefined1 *)((int)puVar14 + 0x16) = uVar5;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a21dc,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd50);
          *puVar15 = 1;
        }
        iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbd40);
        if (*(char *)(iVar7 + 0x17) != '\0') {
          uVar11 = 0;
          uVar18 = 0;
          do {
            iVar8 = (uVar11 & 7) * 8;
            bVar17 = (byte)(0x33032df5 >> iVar8) |
                     (byte)(-0xaa870ed << ((uVar11 & 7) * -8 + 0x20 & 0xff));
            uVar23 = iVar8 - 0x20;
            if (-1 < (int)uVar23) {
              bVar17 = (byte)(0xf5578f13 >> (uVar23 & 0xff));
            }
            *(byte *)(iVar7 + uVar11) = *(byte *)(iVar7 + uVar11) ^ bVar17;
            bVar24 = 0xfffffffe < uVar11;
            bVar20 = uVar18 == 0;
            bVar1 = (0x15 < uVar11) <= uVar18;
            uVar11 = uVar11 + 1;
            uVar18 = uVar18 + bVar24;
          } while (bVar20 && bVar1);
          *(undefined1 *)(iVar7 + 0x17) = 0;
        }
        DAT_70b466b4 = FUN_71885ba4(iVar7,0);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70b466b8);
      }
      uVar16 = DAT_70b466b4;
      imp___aeabi_memclr4(&iStack_54,0x30);
      uStack_58 = uVar16;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar6 + 0x34);
      piVar13 = (int *)thunk_MwhHq(0x3c);
      *piVar13 = 0;
      piVar13[1] = 0;
      FUN_713a10f8(piVar13 + 2,&uStack_58);
      piVar13[1] = iVar6 + 0x38;
      iVar7 = *(int *)(iVar6 + 0x38);
      *piVar13 = iVar7;
      *(int **)(iVar7 + 4) = piVar13;
      *(int **)(iVar6 + 0x38) = piVar13;
      *(int *)(iVar6 + 0x40) = *(int *)(iVar6 + 0x40) + 1;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar6 + 0x34);
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
  }
  return;
}


// =========================================================================
// Function: FUN_7139bc08
// Entry: 0x7139bc08 | Size: 64 bytes
// =========================================================================

void FUN_7139bc08(int param_1)

{
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x274);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_70b46468);
  return;
}


// =========================================================================
// Function: FUN_7139bcf4
// Entry: 0x7139bcf4 | Size: 132 bytes
// =========================================================================

void FUN_7139bcf4(undefined4 param_1)

{
  bool bVar1;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  *DAT_710eb1b8 = param_1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_70b46468);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_710eb1c0);
  bVar1 = 0xfffffffe < DAT_710eb1c8;
  DAT_710eb1c8 = DAT_710eb1c8 + 1;
  DAT_710eb1cc = DAT_710eb1cc + (uint)bVar1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_710eb1c0);
  thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_710eb1c4);
  return;
}


// =========================================================================
// Function: FUN_7139be24
// Entry: 0x7139be24 | Size: 136 bytes
// =========================================================================

void FUN_7139be24(void)

{
  if (*DAT_70b46448 == 0) {
    return;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  *DAT_70b4644c = 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  thunk_tkvbOnmCSxVfIPPuYv_NfXgZnHyxdtUqWQHQfcWPfPSShU(&DAT_70b46468);
  FUN_714ba270(*DAT_70b46450);
  FUN_714ba19c(*DAT_70b46450);
  *DAT_70b46450 = 0;
  return;
}


// =========================================================================
// Function: FUN_7139c030
// Entry: 0x7139c030 | Size: 1912 bytes
// =========================================================================

undefined4 * FUN_7139c030(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  param_1[0xca] = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  uVar1 = FUN_714b9668(s_RenderCommand_700627f0);
  param_1[0x97] = uVar1;
  iVar2 = imp_calloc(1,0x1600000);
  *(undefined2 *)(param_1 + 0x9b) = 0;
  param_1[0x99] = iVar2 + 0x1600000;
  uVar3 = iVar2 + 0xfU & 0xfffffff0;
  param_1[0x9c] = uVar3;
  param_1[0x9d] = uVar3;
  param_1[0x98] = uVar3;
  param_1[0x9a] = uVar3;
  DataMemoryBarrier(0xb);
  param_1[0xc9] = uVar3;
  DataMemoryBarrier(0xb);
  param_1[100] = s_rqVertexBufferSelect_70072195;
  *param_1 = &LAB_7138ee0c;
  param_1[0x32] = 4;
  param_1[0x65] = s_rqVertexBufferCreate_700717db;
  param_1[0x33] = 4;
  param_1[1] = FUN_7138eec8;
  param_1[0x66] = s_rqVertexBufferUpdate_70065b33;
  param_1[0x34] = 0xffffffff;
  param_1[2] = FUN_7138ef88;
  param_1[0x67] = s_rqVertexBufferCPU_7007104b;
  param_1[0x35] = 0xffffffff;
  param_1[3] = &LAB_7138f0ac;
  param_1[0x68] = s_rqVertexBufferDelete_7007105d;
  param_1[0x36] = 4;
  param_1[4] = &LAB_7138f140;
  param_1[0x69] = s_rqIndexBufferSelect_700721aa;
  param_1[0x37] = 4;
  param_1[5] = &LAB_7138f21c;
  param_1[0x6a] = s_rqIndexBufferCreate_7006a308;
  param_1[6] = FUN_7138f2b4;
  param_1[0x38] = 4;
  param_1[0x6b] = s_rqIndexBufferUpdate_7006a31c;
  param_1[7] = FUN_7138f374;
  param_1[0x39] = 0xffffffff;
  param_1[0x6c] = s_rqIndexBufferCPU_7006beed;
  param_1[8] = &LAB_7138f498;
  param_1[0x3a] = 0xffffffff;
  param_1[0x6d] = s_rqIndexBufferDelete_70065b48;
  param_1[9] = &LAB_7138f52c;
  param_1[0x3b] = 4;
  param_1[0x6e] = s_rqVertexStateCreate_7006befe;
  param_1[10] = FUN_71392380;
  param_1[0x6f] = s_rqVertexStateApply_7006d6e3;
  param_1[0x3c] = 0x98;
  param_1[0x3d] = 4;
  param_1[0xb] = FUN_71392794;
  param_1[0x70] = s_rqVertexStateDelete_70064c18;
  param_1[0x3e] = 4;
  param_1[0xc] = FUN_71392bb8;
  param_1[0x71] = s_rqSetVertexDescription_700611d9;
  param_1[0xd] = FUN_71390b08;
  param_1[0x3f] = 0xb8;
  param_1[0x72] = s_rqDrawIndexed_70063c72;
  param_1[0x40] = 0xc;
  param_1[0xe] = FUN_71390e90;
  param_1[0x73] = s_rqDrawNonIndexed_7006cfc3;
  param_1[0x41] = 0xc;
  param_1[0xf] = FUN_71392fcc;
  param_1[0x74] = s_rqBuildShader_7006e54a;
  param_1[0x10] = FUN_713901e8;
  param_1[0x42] = 0x10;
  param_1[0x75] = s_rqSelectShader_7006c7a0;
  param_1[0x43] = 0xffffffff;
  param_1[0x11] = FUN_71390688;
  param_1[0x76] = s_rqDeleteShader_7006ab3c;
  param_1[0x44] = 4;
  param_1[0x12] = &LAB_71390ab0;
  param_1[0x77] = s_rqInitTexture_70066cc1;
  param_1[0x45] = 4;
  param_1[0x13] = FUN_7138f608;
  param_1[0x78] = s_rqTextureMipMode_70068616;
  param_1[0x46] = 4;
  param_1[0x14] = FUN_7138faa0;
  param_1[0x79] = s_rqTextureWrap_70066505;
  param_1[0x47] = 4;
  param_1[0x15] = FUN_7138f7d0;
  param_1[0x7a] = s_rqTextureMip_700721be;
  param_1[0x48] = 0xffffffff;
  param_1[0x16] = FUN_7138fcbc;
  param_1[0x7b] = s_rqTextureAniso_7006201f;
  param_1[0x17] = FUN_7138f944;
  param_1[0x49] = 8;
  param_1[0x7c] = s_rqSelectTexture_700652d4;
  param_1[0x4a] = 8;
  param_1[0x18] = &LAB_7138fc18;
  param_1[0x7d] = s_rqDeleteTexture_7006dcb6;
  param_1[0x4b] = 4;
  param_1[0x19] = &LAB_7138fc80;
  param_1[0x7e] = s_rqTargetCreate_70064c2c;
  param_1[0x4c] = 4;
  param_1[0x1a] = FUN_71391538;
  param_1[0x7f] = s_rqTargetSelect_70064549;
  param_1[0x4d] = 4;
  param_1[0x1b] = FUN_713933e8;
  param_1[0x80] = s_rqTargetDelete_700611f0;
  param_1[0x4e] = 4;
  param_1[0x1c] = FUN_7139380c;
  param_1[0x81] = s_rqTargetViewport_70068f3d;
  param_1[0x4f] = 0x10;
  param_1[0x1d] = FUN_71393c30;
  param_1[0x82] = s_rqTargetClear_7007084d;
  param_1[0x1e] = FUN_7138fec8;
  param_1[0x50] = 0x1c;
  param_1[0x83] = s_rqTargetScissor_7006ab4b;
  param_1[0x51] = 0x10;
  param_1[0x1f] = FUN_7139404c;
  param_1[0x84] = s_rqEnableDepthRead_7006b872;
  param_1[0x52] = 4;
  param_1[0x20] = FUN_71394460;
  param_1[0x85] = s_rqEnableDepthWrite_7006dcc6;
  param_1[0x53] = 4;
  param_1[0x21] = FUN_7139487c;
  param_1[0x86] = s_rqEnableBlend_700611ff;
  param_1[0x54] = 4;
  param_1[0x22] = FUN_71394ca0;
  param_1[0x87] = s_rqBlendFunc_7006b884;
  param_1[0x55] = 4;
  param_1[0x23] = FUN_713950bc;
  param_1[0x88] = s_rqDepthFunc_70065b5c;
  param_1[0x56] = 4;
  param_1[0x24] = FUN_713954d0;
  param_1[0x89] = s_rqSetCull_7006c7af;
  param_1[0x57] = 4;
  param_1[0x25] = FUN_713958e4;
  param_1[0x8a] = s_rqDisableCull_700627fe;
  param_1[0x58] = 4;
  param_1[0x26] = FUN_71395d00;
  param_1[0x8b] = s_rqSetAlphaTest_70068f4e;
  param_1[0x59] = 8;
  param_1[0x27] = FUN_7139611c;
  param_1[0x8c] = s_rqSetZBias_7006ab5b;
  param_1[0x5a] = 4;
  param_1[0x28] = FUN_71396540;
  param_1[0x8d] = s_rqSetWindingOrder_7006202e;
  param_1[0x5b] = 4;
  param_1[0x29] = FUN_71396964;
  param_1[0x8e] = s_rqFree_7006f64b;
  param_1[0x5c] = 4;
  param_1[0x2a] = FUN_71396d80;
  param_1[0x8f] = s_rqCopy_7006fef7;
  param_1[0x5d] = 0xc;
  param_1[0x2b] = FUN_713971a0;
  param_1[0x90] = s_rqInit_70068f5d;
  param_1[0x5e] = 0;
  param_1[0x2c] = FUN_71391b18;
  param_1[0x91] = s_rqReadPixels_7006e558;
  param_1[0x5f] = 0x14;
  param_1[0x2d] = FUN_713975c0;
  param_1[0x92] = s_rqSwapBuffers_7006a330;
  param_1[0x60] = 0;
  param_1[0x2e] = FUN_713979dc;
  param_1[0x93] = s_rqDebugMarker_7006b890;
  param_1[0x61] = 0;
  param_1[0x2f] = FUN_71397df8;
  param_1[0x94] = s_rqShutdown_7006e565;
  param_1[0x62] = 0;
  param_1[0x30] = FUN_71398214;
  param_1[0x95] = s_rqCleanup_70068f64;
  param_1[0x31] = &DAT_71390aec;
  param_1[0xbb] = s_rqEnableRender_7006d6f6;
  param_1[99] = 0;
  param_1[0x9f] = &LAB_71398638;
  param_1[0xad] = 8;
  param_1[0xbd] = s_rqRegionStart_7006c7b9;
  param_1[0xaf] = 0xffffffff;
  param_1[0xa1] = FUN_713986a4;
  param_1[0xbe] = s_rqRegionEnd_7006120d;
  param_1[0xb0] = 0;
  param_1[0xa2] = FUN_7139885c;
  param_1[0xbf] = s_rqMediaProcess_7006edca;
  param_1[0xb1] = 0xc;
  param_1[0xa3] = FUN_713988e8;
  param_1[0xc0] = s_rqRenderObjectId_7006196c;
  param_1[0xb2] = 4;
  param_1[0xa4] = &LAB_71398f40;
  param_1[0xc1] = s_rqReadPixelsSnapshot_70067e97;
  param_1[0xa5] = FUN_71399c88;
  param_1[0xb3] = 0x20;
  param_1[0xc2] = s_rqPollSnapshotReadbacks_7007085b;
  param_1[0xb4] = 0;
  param_1[0xa6] = FUN_71399438;
  param_1[0xc3] = s_rqLivePreviewReadback_700652e4;
  param_1[0xa7] = FUN_715a0bf8;
  param_1[0xb5] = 0x14;
  param_1[0xc4] = s_rqLivePreviewPoll_7006d705;
  param_1[0xa8] = FUN_715a2bdc;
  param_1[0xb6] = 0;
  param_1[0xc5] = s_rqLivePreviewRelease_7006bf12;
  param_1[0xa9] = FUN_715a332c;
  param_1[0xb7] = 4;
  param_1[0xab] = FUN_715a553c;
  param_1[0xb9] = 0xc;
  param_1[199] = s_rqLivePreviewMeasure_7006dcd9;
  param_1[200] = s_rqSnapshotMeasure_7006e570;
  param_1[0xac] = FUN_715a44b0;
  param_1[0xba] = 0xc;
  return param_1;
}


// =========================================================================
// Function: Java_com_native_RenderQueue_Lock
// Entry: 0x7139d798 | Size: 20 bytes
// =========================================================================

void Java_com_native_RenderQueue_Lock(void)

{
  if (DAT_70b46664 == 0) {
    return;
  }
  imp_pthread_mutex_lock();
  return;
}


// =========================================================================
// Function: Java_com_native_RenderQueue_Unlock
// Entry: 0x7139d800 | Size: 20 bytes
// =========================================================================

void Java_com_native_RenderQueue_Unlock(void)

{
  if (DAT_70b46664 == 0) {
    return;
  }
  imp_pthread_mutex_unlock();
  return;
}


// =========================================================================
// Function: FUN_7139d868
// Entry: 0x7139d868 | Size: 1568 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7139d868(void)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined *puStack_40;
  char cStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined *puStack_30;
  uint uStack_2c;
  
  DAT_70b46664 = FUN_714b9668(&DAT_70065b68);
  uVar4 = FUN_714c9888();
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  puStack_30 = &DAT_70b46464;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  piVar3 = DAT_710eb1b8;
  cVar9 = *DAT_70b4644c;
joined_r0x7139d8c0:
  if (cVar9 != '\0') {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_30);
joined_r0x7139de68:
    if (uVar4 != 0) {
LAB_7139de78:
      FUN_714c9978();
    }
    return 0;
  }
LAB_7139d950:
  if ((*piVar3 == 0) &&
     (DataMemoryBarrier(0xb), *(uint *)(*DAT_70b46448 + 0x324) <= *(uint *)(*DAT_70b46448 + 0x268)))
  goto code_r0x7139d97c;
  goto LAB_7139d99c;
code_r0x7139d97c:
  uVar5 = *DAT_70b46448;
  bVar12 = *(char *)(uVar5 + 0x26c) == '\0';
  if (bVar12) {
    uVar5 = (uint)*(byte *)(uVar5 + 0x26d);
  }
  if ((bVar12 && uVar5 == 0) &&
     (thunk_STeqdXQsnAyiTBJTFCuiFKcPKNhdgVCrrMQVYFZSLEEADdhRfhXIrTCuEWwQWomPgRHz
                (&DAT_70b46468,&puStack_30), *DAT_70b4644c == '\0')) goto LAB_7139d950;
LAB_7139d99c:
  cVar9 = *DAT_70b4644c;
  if ((uStack_2c & 0xff) != 0) {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_30);
  }
  if (cVar9 != '\0') {
    uVar4 = uVar4 & 1;
    goto joined_r0x7139de68;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  iVar10 = *piVar3;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  if (iVar10 != 0) {
    if ((uVar4 & 1) != 0) {
      FUN_714c9978();
    }
    cStack_3c = '\x01';
    puStack_40 = &DAT_70b46464;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
    if (*piVar3 != 0) goto LAB_7139dc80;
    cVar9 = *DAT_70b4644c;
    goto LAB_7139de28;
  }
  if ((uVar4 & 1) == 0) goto LAB_7139dd38;
  DataMemoryBarrier(0xb);
  if ((DAT_700c1e08 & 1) != 0) {
    uVar11 = *DAT_70b46448;
    DataMemoryBarrier(0xb);
    uVar5 = *(uint *)(uVar11 + 0x268);
    if (uVar5 < *(uint *)(uVar11 + 0x324)) {
      do {
        piVar6 = (int *)(uVar5 + 0xf & 0xfffffff0);
        *(int **)(uVar11 + 0x268) = piVar6;
        iVar10 = *piVar6;
        *(uint *)(uVar11 + 0x268) = (uint)piVar6 | 4;
        puVar7 = (undefined4 *)(uVar11 + iVar10 * 4);
        if (0x31 < iVar10) {
          puVar7 = (undefined4 *)(uVar11 + iVar10 * 4 + 0x1b4);
        }
        (*(code *)*puVar7)((uint *)(uVar11 + 0x268));
        *(uint *)(uVar11 + 0x268) = *(int *)(uVar11 + 0x268) + 0x13U & 0xfffffff0;
        DataMemoryBarrier(0xb);
        uVar5 = *(uint *)(uVar11 + 0x268);
      } while (uVar5 < *(uint *)(uVar11 + 0x324));
    }
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
    cVar9 = *(char *)(*DAT_70b46448 + 0x26c);
    cVar1 = *(char *)(*DAT_70b46448 + 0x26d);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
    if (cVar9 != '\0') {
      uVar11 = *DAT_70b46448;
      DataMemoryBarrier(0xb);
      uVar5 = *(uint *)(uVar11 + 0x268);
      if (uVar5 < *(uint *)(uVar11 + 0x324)) {
        do {
          piVar6 = (int *)(uVar5 + 0xf & 0xfffffff0);
          *(int **)(uVar11 + 0x268) = piVar6;
          iVar10 = *piVar6;
          *(uint *)(uVar11 + 0x268) = (uint)piVar6 | 4;
          puVar7 = (undefined4 *)(uVar11 + iVar10 * 4);
          if (0x31 < iVar10) {
            puVar7 = (undefined4 *)(uVar11 + iVar10 * 4 + 0x1b4);
          }
          (*(code *)*puVar7)((uint *)(uVar11 + 0x268));
          *(uint *)(uVar11 + 0x268) = *(int *)(uVar11 + 0x268) + 0x13U & 0xfffffff0;
          DataMemoryBarrier(0xb);
          uVar5 = *(uint *)(uVar11 + 0x268);
        } while (uVar5 < *(uint *)(uVar11 + 0x324));
      }
      FUN_7137bc44();
      FUN_7138c4a4();
      uVar5 = *DAT_70b46448;
      uVar8 = *(undefined4 *)(uVar5 + 0x260);
      *(undefined4 *)(uVar5 + 0x324) = uVar8;
      *(undefined4 *)(uVar5 + 0x268) = uVar8;
      *(undefined4 *)(uVar5 + 0x270) = uVar8;
      *(undefined4 *)(uVar5 + 0x274) = uVar8;
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
      *(undefined1 *)(*DAT_70b46448 + 0x26c) = 0;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
      imp_sem_post(*DAT_70b46454);
    }
    if (cVar1 != '\0') {
      uVar11 = *DAT_70b46448;
      DataMemoryBarrier(0xb);
      uVar5 = *(uint *)(uVar11 + 0x268);
      if (uVar5 < *(uint *)(uVar11 + 0x324)) {
        do {
          piVar6 = (int *)(uVar5 + 0xf & 0xfffffff0);
          *(int **)(uVar11 + 0x268) = piVar6;
          iVar10 = *piVar6;
          *(uint *)(uVar11 + 0x268) = (uint)piVar6 | 4;
          puVar7 = (undefined4 *)(uVar11 + iVar10 * 4);
          if (0x31 < iVar10) {
            puVar7 = (undefined4 *)(uVar11 + iVar10 * 4 + 0x1b4);
          }
          (*(code *)*puVar7)((uint *)(uVar11 + 0x268));
          *(uint *)(uVar11 + 0x268) = *(int *)(uVar11 + 0x268) + 0x13U & 0xfffffff0;
          DataMemoryBarrier(0xb);
          uVar5 = *(uint *)(uVar11 + 0x268);
        } while (uVar5 < *(uint *)(uVar11 + 0x324));
      }
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
      *(undefined1 *)(*DAT_70b46448 + 0x26d) = 0;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
      imp_sem_post(*DAT_70b46458);
    }
    uStack_2c = CONCAT31(uStack_2c._1_3_,1);
    puStack_30 = &DAT_70b46464;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
    if (*DAT_70b4644c != '\0') {
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_30);
      goto LAB_7139de78;
    }
    goto LAB_7139d950;
  }
  FUN_714c9978();
LAB_7139dd38:
  cStack_3c = '\x01';
  puStack_40 = &DAT_70b46464;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_38);
  puStack_30 = (undefined *)(uStack_38 + 10000000);
  uStack_2c = uStack_34 + (0xff67697f < uStack_38);
  do {
    if (*DAT_70b4644c != '\0') break;
    iVar10 = FUN_713a2214(&DAT_70b46468,&puStack_40,&puStack_30);
  } while (iVar10 != 1);
  cVar9 = *DAT_70b4644c;
  if (cStack_3c != '\0') {
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_40);
  }
  if (cVar9 != '\0') {
    return 0;
  }
  uVar4 = FUN_714c9888();
LAB_7139de3c:
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  puStack_30 = &DAT_70b46464;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  cVar9 = *DAT_70b4644c;
  goto joined_r0x7139d8c0;
LAB_7139dc80:
  do {
    if (*DAT_70b4644c != '\0') {
      cVar9 = '\x01';
      goto LAB_7139de18;
    }
    thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_30);
    thunk_qQIuwbHcsSjxNZVoVQngv_KeaxNCHbhktIDXxmX(&uStack_38);
    uVar8 = 0;
    if (uStack_38 == 0 && uStack_34 == 0) {
LAB_7139dc5c:
      lVar2 = CONCAT44(uVar8,10000000);
    }
    else {
      if ((int)uStack_34 < (int)(uint)(uStack_38 == 0)) {
        uVar8 = 0x80000000;
        if (uStack_34 < 0xffdf3b65 && (uint)(0x5a1cac08 < uStack_38) <= uStack_34 + 0x20c49c)
        goto LAB_7139dc5c;
      }
      else if ((0x20c49b < uStack_34 || uStack_34 - 0x20c49b < (uint)(0xa5e353f7 < uStack_38)) ||
              (0x20c49b < uStack_34 || uStack_34 - 0x20c49b < (uint)(0xa5e32ce7 < uStack_38))) {
        lVar2 = 0x7fffffffffffffff;
        goto LAB_7139dc60;
      }
      lVar2 = (ulonglong)uStack_38 * 1000 + CONCAT44(uStack_34 * 1000,10000000);
    }
LAB_7139dc60:
    thunk_YwerwxXBOMHGtLqZFHKk_ctGQKOazwsbWzmajglPWUmyfxDDJCitmTGYiWAlTLbKzAEFbljsHNKfnxcGvCZhTLJFsJcqWOojIovWxBWOerwQpaGkjlYUtTEYpZjuULBtAETRotEQBPHtSZgMvJ_hHUCgwDuFGxUCpOweXArnbe
              (&DAT_70b46468,&puStack_40,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
    thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_38);
  } while (*piVar3 != 0);
  cVar9 = *DAT_70b4644c;
LAB_7139de18:
  if (cStack_3c != '\0') {
LAB_7139de28:
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_40);
  }
  uVar4 = 0;
  if (cVar9 != '\0') {
    return 0;
  }
  goto LAB_7139de3c;
}


// =========================================================================
// Function: FUN_7139e614
// Entry: 0x7139e614 | Size: 168 bytes
// =========================================================================

void FUN_7139e614(void)

{
  undefined4 uVar1;
  
  thunk_MwhHq(0x340);
  uVar1 = FUN_7139c030();
  *DAT_70b46448 = uVar1;
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b46464);
  *DAT_70b4644c = 0;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b46464);
  FUN_714c9978();
  uVar1 = FUN_714b97d4();
  *DAT_70b46454 = uVar1;
  uVar1 = FUN_714b97d4();
  *DAT_70b46458 = uVar1;
  uVar1 = FUN_714b9e98(FUN_7139d868,0,2,s_RenderQueue_70063c80,0,3);
  *DAT_70b46450 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7139f27c
// Entry: 0x7139f27c | Size: 20 bytes
// =========================================================================

void FUN_7139f27c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7139f2e4
// Entry: 0x7139f2e4 | Size: 2444 bytes
// =========================================================================

void FUN_7139f2e4(int param_1)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  int *piVar21;
  char *pcVar22;
  undefined1 *puVar23;
  int iVar24;
  uint uVar25;
  byte *pbVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  undefined4 uVar30;
  uint uVar31;
  byte *pbVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
  undefined4 *puVar36;
  byte *pbVar37;
  int iVar38;
  int iVar39;
  byte *pbVar40;
  byte *pbVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined8 uVar45;
  byte *pbStack_94;
  byte *pbStack_84;
  byte *pbStack_70;
  byte *pbStack_60;
  int iStack_58;
  uint uStack_54;
  uint uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcc0);
  do {
    uStack_54 = CONCAT31(uStack_54._1_3_,1);
    iStack_58 = param_1;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(param_1);
    while (*(int *)(param_1 + 0x1c) == 0) {
      thunk_STeqdXQsnAyiTBJTFCuiFKcPKNhdgVCrrMQVYFZSLEEADdhRfhXIrTCuEWwQWomPgRHz
                (param_1 + 4,&iStack_58);
    }
    uVar25 = *(uint *)(param_1 + 0x18);
    puVar36 = (undefined4 *)
              ((*(undefined4 **)(param_1 + 0xc))[uVar25 / 0x71] + (uVar25 % 0x71) * 0x24);
    uVar30 = *puVar36;
    iVar11 = puVar36[3];
    uVar12 = puVar36[4];
    uVar13 = puVar36[5];
    uVar14 = puVar36[6];
    iVar15 = puVar36[8];
    uVar33 = puVar36[7];
    pbVar40 = (byte *)puVar36[1];
    iVar44 = puVar36[2];
    *(uint *)(param_1 + 0x18) = uVar25 + 1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    if (0xe1 < uVar25 + 1) {
      thunk_qNQrlu(**(undefined4 **)(param_1 + 0xc));
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -0x71;
    }
    if ((uStack_54 & 0xff) != 0) {
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(iStack_58);
    }
    pbVar18 = pbVar40;
    iVar19 = iVar44;
    if (iVar44 < 1) {
      uVar25 = 0;
      pbStack_84 = (byte *)0x0;
      iVar43 = 0;
      pbStack_60 = (byte *)0x0;
      iVar35 = 0;
      pbStack_94 = (byte *)0x0;
      pbVar26 = pbStack_84;
    }
    else {
      iVar1 = (int)pbVar40 * 4;
      iVar34 = iVar15 + -1;
      iVar24 = iVar15 + 3;
      iVar28 = 0;
      iVar43 = -1;
      pbVar26 = (byte *)0xffffffff;
      iVar35 = iVar44;
      pbVar41 = pbVar40;
      do {
        pbVar32 = (byte *)0x0;
        if ((int)pbVar40 < 1) {
LAB_7139f498:
          pbVar37 = pbVar40;
          if (pbVar32 != pbVar40) {
            do {
              iVar43 = (int)pbVar37 * 4;
              pbVar37 = pbVar37 + -1;
            } while (*(char *)(iVar34 + iVar43) == '\0');
            if (iVar35 == iVar44) {
              iVar35 = iVar28;
            }
            if ((int)pbVar26 <= (int)pbVar37) {
              pbVar26 = pbVar37;
            }
            iVar43 = iVar28;
            if ((int)pbVar32 < (int)pbVar41) {
              pbVar41 = pbVar32;
            }
          }
        }
        else {
          do {
            if (*(char *)(iVar24 + (int)pbVar32 * 4) != '\0') goto LAB_7139f498;
            pbVar32 = pbVar32 + 1;
          } while (pbVar40 != pbVar32);
        }
        iVar28 = iVar28 + 1;
        iVar34 = iVar34 + iVar1;
        iVar24 = iVar24 + iVar1;
      } while (iVar28 != iVar44);
      if ((int)pbVar26 < 0) {
        pbStack_94 = (byte *)0x0;
        iVar43 = 0;
        pbStack_84 = (byte *)0x0;
        iVar35 = 0;
        pbStack_60 = (byte *)0x0;
        uVar25 = 0;
        pbVar26 = pbStack_84;
      }
      else {
        uVar16 = FUN_71ba1b94(pbVar26 + (1 - (int)pbVar41));
        FUN_71ba21e8(uVar12,uVar16);
        iVar24 = FUN_71ba17bc();
        uVar12 = FUN_71ba1b94((iVar43 - iVar35) + 1);
        FUN_71ba21e8(uVar13,uVar12);
        iVar28 = FUN_71ba17bc();
        FUN_71ba21e8(uVar14,uVar16);
        imp_ceilf();
        iVar34 = FUN_71ba17bc();
        FUN_71ba21e8(uVar33,uVar12);
        imp_ceilf();
        iVar17 = FUN_71ba17bc();
        pbVar26 = (byte *)((uint)(pbVar41 + iVar24) & ~((int)(pbVar41 + iVar24) >> 0x1f));
        iVar43 = iVar35 + iVar17;
        if (iVar44 <= iVar35 + iVar17) {
          iVar43 = iVar44;
        }
        pbStack_60 = pbVar41 + iVar34;
        if ((int)pbVar40 <= (int)(pbVar41 + iVar34)) {
          pbStack_60 = pbVar40;
        }
        if (((int)pbVar26 < (int)pbStack_60) &&
           (uVar25 = iVar35 + iVar28 & ~(iVar35 + iVar28 >> 0x1f), (int)uVar25 < iVar43)) {
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          pbVar18 = (byte *)FUN_71ba0440(pbStack_60 + iVar11 + ~(uint)pbVar26,iVar11);
          iVar19 = FUN_71ba0440(iVar11 + ~uVar25 + iVar43,iVar11);
          uVar45 = imp_malloc((int)pbVar18 * iVar19 * 4);
          pbStack_94 = (byte *)((ulonglong)uVar45 >> 0x20);
          iVar35 = (int)uVar45;
          if (iVar35 == 0) {
            iVar35 = 0;
            pbVar18 = pbVar40;
            iVar19 = iVar44;
          }
          else if (0 < iVar19) {
            iVar44 = 0;
            pbStack_94 = (byte *)(iVar15 + iVar1 * uVar25 + (int)pbVar26 * 4 + 1);
            do {
              iVar28 = iVar44 * iVar11 + uVar25;
              iVar24 = iVar28 + iVar11;
              if (iVar43 < iVar28 + iVar11) {
                iVar24 = iVar43;
              }
              if (0 < (int)pbVar18) {
                pbVar40 = (byte *)0x0;
                pbStack_70 = pbStack_94;
                do {
                  iVar17 = 0;
                  iVar39 = 0;
                  uVar31 = 0;
                  iVar34 = 0;
                  pbVar32 = pbVar26 + (int)pbVar40 * iVar11;
                  pbVar41 = pbVar32 + iVar11;
                  if ((int)pbStack_60 < (int)(pbVar32 + iVar11)) {
                    pbVar41 = pbStack_60;
                  }
                  iVar38 = 0;
                  pbVar37 = pbStack_70;
                  iVar42 = iVar28;
                  if (iVar28 < iVar43) {
                    do {
                      pbVar20 = pbVar32;
                      pbVar29 = pbVar37;
                      if ((int)pbVar32 < (int)pbStack_60) {
                        do {
                          pbVar20 = pbVar20 + 1;
                          uVar31 = uVar31 + 1;
                          iVar34 = iVar34 + (uint)pbVar29[-1];
                          pbVar2 = pbVar29 + 2;
                          iVar38 = iVar38 + (uint)*pbVar29;
                          iVar17 = iVar17 + (uint)pbVar29[1];
                          pbVar29 = pbVar29 + 4;
                          iVar39 = iVar39 + (uint)*pbVar2;
                        } while ((int)pbVar20 < (int)pbVar41);
                      }
                      iVar42 = iVar42 + 1;
                      pbVar37 = pbVar37 + iVar1;
                    } while (iVar42 < iVar24);
                  }
                  bVar6 = FUN_71ba0484(iVar34 + (uVar31 >> 1),uVar31);
                  pbVar41 = (byte *)(iVar35 + iVar44 * (int)pbVar18 * 4 + (int)pbVar40 * 4);
                  *pbVar41 = bVar6;
                  bVar7 = FUN_71ba0484(iVar17 + (uVar31 >> 1),uVar31);
                  pbVar41[2] = bVar7;
                  bVar8 = FUN_71ba0484(iVar38 + (uVar31 >> 1),uVar31);
                  pbVar41[1] = bVar8;
                  bVar9 = FUN_71ba0484(iVar39 + (uVar31 >> 1),uVar31);
                  pbVar40 = pbVar40 + 1;
                  if (bVar6 < bVar9) {
                    bVar6 = bVar9;
                  }
                  if (bVar6 <= bVar8) {
                    bVar6 = bVar8;
                  }
                  if (bVar6 <= bVar7) {
                    bVar6 = bVar7;
                  }
                  pbVar41[3] = bVar6;
                  pbStack_70 = pbStack_70 + iVar11 * 4;
                } while (pbVar40 != pbVar18);
              }
              iVar44 = iVar44 + 1;
              pbStack_94 = pbStack_94 + iVar1 * iVar11;
            } while (iVar44 != iVar19);
          }
        }
        else {
          pbStack_60 = (byte *)0x0;
          pbStack_84 = (byte *)0x0;
          iVar43 = 0;
          iVar35 = 0;
          uVar25 = 0;
          pbStack_94 = pbVar26;
          pbVar26 = pbStack_84;
        }
      }
    }
    if (iVar15 != 0) {
      thunk_dGrRHE(iVar15,pbStack_94,uVar25);
    }
    if (iVar35 == 0) {
      FUN_714eb5e4(uVar30,5,uVar25);
    }
    else {
      FUN_715aace0(uVar30,pbVar26,uVar25,pbStack_60,iVar43,pbVar18,iVar19);
      iVar11 = DAT_712017f8;
      if ((DAT_70b466a0 & 1) == 0) {
        DataMemoryBarrier(0xb);
        if (((DAT_70b466a8 & 1) == 0) &&
           (iVar15 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b466a8), iVar15 != 0)) {
          pcVar22 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcd0);
          if (*pcVar22 == '\0') {
            puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcc0);
            *(undefined1 *)((int)puVar36 + 0x13) = 1;
            uVar14 = DAT_700761c4;
            uVar13 = DAT_700761c0;
            uVar12 = DAT_700761bc;
            *puVar36 = DAT_700761b8;
            puVar36[1] = uVar12;
            puVar36[2] = uVar13;
            puVar36[3] = uVar14;
            uVar5 = DAT_700761ca;
            *(undefined2 *)(puVar36 + 4) = DAT_700761c8;
            *(undefined1 *)((int)puVar36 + 0x12) = uVar5;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_713a147c,puVar36,&DAT_70b0e000);
            puVar23 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bbcd0);
            *puVar23 = 1;
          }
          if (*(char *)(iVar10 + 0x13) != '\0') {
            uVar25 = 0;
            uVar31 = 0;
            do {
              iVar15 = (uVar31 & 7) * 8;
              uVar27 = iVar15 - 0x20;
              bVar6 = (byte)(0x57835d53 >> iVar15) |
                      (byte)(0x279df385 << ((uVar31 & 7) * -8 + 0x20 & 0xff));
              if (-1 < (int)uVar27) {
                bVar6 = (byte)(0x279df385 >> (uVar27 & 0xff));
              }
              *(byte *)(iVar10 + uVar31) = *(byte *)(iVar10 + uVar31) ^ bVar6;
              bVar3 = uVar25 == 0;
              bVar4 = (0x11 < uVar31) <= uVar25;
              uVar25 = uVar25 + (0xfffffffe < uVar31);
              uVar31 = uVar31 + 1;
            } while (bVar3 && bVar4);
            *(undefined1 *)(iVar10 + 0x13) = 0;
          }
          DAT_70b466a4 = FUN_71885ba4(iVar10,0);
          thunk_SixizuLbAnqfgRApsCY(&DAT_70b466a8);
        }
        iVar15 = DAT_70b466a4;
        imp___aeabi_memclr4(&uStack_54,0x30);
        iStack_58 = iVar15;
        uVar12 = FUN_713a0424(&iStack_58,uVar30);
        uVar12 = FUN_713a05a0(uVar12,iVar35);
        uVar12 = FUN_713a0424(uVar12,pbVar18);
        uVar12 = FUN_713a0424(uVar12,iVar19);
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar11 + 0x34);
        piVar21 = (int *)thunk_MwhHq(0x3c);
        *piVar21 = 0;
        piVar21[1] = 0;
        FUN_713a10f8(piVar21 + 2,uVar12);
        piVar21[1] = iVar11 + 0x38;
        iVar15 = *(int *)(iVar11 + 0x38);
        *piVar21 = iVar15;
        *(int **)(iVar15 + 4) = piVar21;
        *(int **)(iVar11 + 0x38) = piVar21;
        *(int *)(iVar11 + 0x40) = *(int *)(iVar11 + 0x40) + 1;
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar11 + 0x34);
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
      }
      else {
        thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_70b4660c);
        uVar25 = 0;
        if (DAT_70b46618 != DAT_70b46614) {
          uVar25 = (DAT_70b46618 - DAT_70b46614) * 0x40 - 1;
        }
        uVar31 = DAT_70b46624 + DAT_70b46620;
        if (uVar25 == uVar31) {
          FUN_713a071c();
          uVar31 = DAT_70b46620 + DAT_70b46624;
        }
        puVar36 = (undefined4 *)
                  (*(int *)(DAT_70b46614 + (uVar31 >> 8) * 4) + (uVar31 & 0xff) * 0x10);
        *puVar36 = uVar30;
        puVar36[1] = iVar35;
        puVar36[2] = pbVar18;
        puVar36[3] = iVar19;
        DAT_70b46624 = DAT_70b46624 + 1;
        thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_70b4660c);
      }
    }
  } while( true );
}


// =========================================================================
// Function: FUN_713a0424
// Entry: 0x713a0424 | Size: 216 bytes
// =========================================================================

int FUN_713a0424(int param_1,undefined4 param_2)

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
LAB_713a04f8:
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
      if (0x3fffffff < uVar6) goto LAB_713a04f8;
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
// Function: FUN_713a05a0
// Entry: 0x713a05a0 | Size: 216 bytes
// =========================================================================

int FUN_713a05a0(int param_1,undefined4 param_2)

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
LAB_713a0674:
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
      if (0x3fffffff < uVar6) goto LAB_713a0674;
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
// Function: FUN_713a071c
// Entry: 0x713a071c | Size: 860 bytes
// =========================================================================

void FUN_713a071c(uint *param_1)

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
  
  if (param_1[4] < 0x100) {
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
            if (0x3fffffff < uVar2) goto LAB_713a0a74;
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
            FUN_713a0f64(&uStack_38,uVar14);
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
LAB_713a0a74:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    if (uVar3 != uVar12) {
      uStack_38 = thunk_MwhHq(0x1000);
      FUN_713a0c34(param_1,&uStack_38);
      return;
    }
    uStack_38 = thunk_MwhHq(0x1000);
    FUN_713a0dd0(param_1,&uStack_38);
    puVar11 = (undefined4 *)param_1[2];
    puVar7 = (undefined4 *)param_1[1] + 1;
    uVar13 = *(undefined4 *)param_1[1];
    param_1[1] = (uint)puVar7;
    if (puVar11 != (undefined4 *)param_1[3]) goto LAB_713a090c;
    puVar8 = (undefined4 *)*param_1;
    if (puVar7 <= puVar8) {
      uVar9 = (int)puVar11 - (int)puVar8 >> 1;
      if ((int)puVar11 - (int)puVar8 == 0) {
        uVar9 = 1;
      }
      if (0x3fffffff < uVar9) goto LAB_713a0a74;
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
      goto LAB_713a08c0;
    }
  }
  else {
    puVar11 = (undefined4 *)param_1[2];
    param_1[4] = param_1[4] - 0x100;
    puVar7 = (undefined4 *)param_1[1] + 1;
    uVar13 = *(undefined4 *)param_1[1];
    param_1[1] = (uint)puVar7;
    if (puVar11 != (undefined4 *)param_1[3]) goto LAB_713a090c;
    puVar8 = (undefined4 *)*param_1;
    if (puVar7 <= puVar8) {
      uVar9 = (int)puVar11 - (int)puVar8 >> 1;
      if ((int)puVar11 - (int)puVar8 == 0) {
        uVar9 = 1;
      }
      if (0x3fffffff < uVar9) goto LAB_713a0a74;
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
LAB_713a08c0:
      *param_1 = uVar2;
      param_1[1] = (uint)puVar6;
      param_1[2] = (uint)puVar15;
      param_1[3] = uVar14;
      thunk_qNQrlu(puVar8);
      puVar11 = (undefined4 *)param_1[2];
      goto LAB_713a090c;
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
LAB_713a090c:
  *puVar11 = uVar13;
  param_1[2] = param_1[2] + 4;
  return;
}


// =========================================================================
// Function: FUN_713a0c34
// Entry: 0x713a0c34 | Size: 276 bytes
// =========================================================================

void FUN_713a0c34(int *param_1,undefined4 *param_2)

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
// Function: FUN_713a0dd0
// Entry: 0x713a0dd0 | Size: 268 bytes
// =========================================================================

void FUN_713a0dd0(int *param_1,undefined4 *param_2)

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
// Function: FUN_713a0f64
// Entry: 0x713a0f64 | Size: 268 bytes
// =========================================================================

void FUN_713a0f64(int *param_1,undefined4 *param_2)

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
// Function: FUN_713a10f8
// Entry: 0x713a10f8 | Size: 312 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_713a10f8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  iVar4 = param_2[1];
  if (param_2[2] != iVar4) {
    iVar5 = param_2[2] - iVar4;
    if (-1 < iVar5) {
      iVar1 = thunk_MwhHq(iVar5);
      param_1[1] = iVar1;
      param_1[2] = iVar1;
      param_1[3] = iVar1 + iVar5;
      imp___aeabi_memcpy4(iVar1,iVar4,iVar5);
      param_1[2] = iVar1 + iVar5;
      goto LAB_713a1168;
    }
    FUN_713a1344();
LAB_713a1228:
    FUN_713a13ac();
LAB_713a122c:
    FUN_713a1414();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_713a1168:
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar4 = param_2[4];
  if (param_2[5] != iVar4) {
    iVar5 = param_2[5] - iVar4;
    if (iVar5 < 0) goto LAB_713a1228;
    iVar1 = thunk_MwhHq(iVar5);
    param_1[4] = iVar1;
    param_1[5] = iVar1;
    param_1[6] = iVar1 + iVar5;
    imp___aeabi_memcpy4(iVar1,iVar4,iVar5);
    param_1[5] = iVar1 + iVar5;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar4 = param_2[7];
  if (param_2[8] != iVar4) {
    iVar5 = param_2[8] - iVar4;
    if (iVar5 < 0) goto LAB_713a122c;
    iVar1 = thunk_MwhHq(iVar5);
    param_1[7] = iVar1;
    param_1[8] = iVar1;
    param_1[9] = iVar1 + iVar5;
    imp___aeabi_memcpy8(iVar1,iVar4,iVar5);
    param_1[8] = iVar1 + iVar5;
  }
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  return param_1;
}


// =========================================================================
// Function: FUN_713a1344
// Entry: 0x713a1344 | Size: 20 bytes
// =========================================================================

void FUN_713a1344(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_713a13ac
// Entry: 0x713a13ac | Size: 20 bytes
// =========================================================================

void FUN_713a13ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_713a1414
// Entry: 0x713a1414 | Size: 20 bytes
// =========================================================================

void FUN_713a1414(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_713a14b0
// Entry: 0x713a14b0 | Size: 108 bytes
// =========================================================================

undefined4 FUN_713a14b0(int *param_1)

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
// Function: FUN_713a15c0
// Entry: 0x713a15c0 | Size: 860 bytes
// =========================================================================

void FUN_713a15c0(uint *param_1)

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
  
  if (param_1[4] < 0x71) {
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
        uVar13 = thunk_MwhHq(0xfe4);
        if (uVar2 == uVar9 * 4) {
          if ((int)uVar2 < 1) {
            uVar2 = (int)uVar2 >> 1;
            if (uVar12 == uVar14) {
              uVar2 = 1;
            }
            if (0x3fffffff < uVar2) goto LAB_713a1918;
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
            FUN_713a1e08(&uStack_38,uVar14);
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
LAB_713a1918:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    if (uVar3 != uVar12) {
      uStack_38 = thunk_MwhHq(0xfe4);
      FUN_713a1ad8(param_1,&uStack_38);
      return;
    }
    uStack_38 = thunk_MwhHq(0xfe4);
    FUN_713a1c74(param_1,&uStack_38);
    puVar11 = (undefined4 *)param_1[2];
    puVar7 = (undefined4 *)param_1[1] + 1;
    uVar13 = *(undefined4 *)param_1[1];
    param_1[1] = (uint)puVar7;
    if (puVar11 != (undefined4 *)param_1[3]) goto LAB_713a17b0;
    puVar8 = (undefined4 *)*param_1;
    if (puVar7 <= puVar8) {
      uVar9 = (int)puVar11 - (int)puVar8 >> 1;
      if ((int)puVar11 - (int)puVar8 == 0) {
        uVar9 = 1;
      }
      if (0x3fffffff < uVar9) goto LAB_713a1918;
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
      goto LAB_713a1764;
    }
  }
  else {
    puVar11 = (undefined4 *)param_1[2];
    param_1[4] = param_1[4] - 0x71;
    puVar7 = (undefined4 *)param_1[1] + 1;
    uVar13 = *(undefined4 *)param_1[1];
    param_1[1] = (uint)puVar7;
    if (puVar11 != (undefined4 *)param_1[3]) goto LAB_713a17b0;
    puVar8 = (undefined4 *)*param_1;
    if (puVar7 <= puVar8) {
      uVar9 = (int)puVar11 - (int)puVar8 >> 1;
      if ((int)puVar11 - (int)puVar8 == 0) {
        uVar9 = 1;
      }
      if (0x3fffffff < uVar9) goto LAB_713a1918;
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
LAB_713a1764:
      *param_1 = uVar2;
      param_1[1] = (uint)puVar6;
      param_1[2] = (uint)puVar15;
      param_1[3] = uVar14;
      thunk_qNQrlu(puVar8);
      puVar11 = (undefined4 *)param_1[2];
      goto LAB_713a17b0;
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
LAB_713a17b0:
  *puVar11 = uVar13;
  param_1[2] = param_1[2] + 4;
  return;
}


// =========================================================================
// Function: FUN_713a1ad8
// Entry: 0x713a1ad8 | Size: 276 bytes
// =========================================================================

void FUN_713a1ad8(int *param_1,undefined4 *param_2)

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
// Function: FUN_713a1c74
// Entry: 0x713a1c74 | Size: 268 bytes
// =========================================================================

void FUN_713a1c74(int *param_1,undefined4 *param_2)

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
// Function: FUN_713a1e08
// Entry: 0x713a1e08 | Size: 268 bytes
// =========================================================================

void FUN_713a1e08(int *param_1,undefined4 *param_2)

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
// Function: FUN_713a1f9c
// Entry: 0x713a1f9c | Size: 216 bytes
// =========================================================================

int FUN_713a1f9c(int param_1,undefined4 param_2)

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
LAB_713a2070:
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
      if (0x3fffffff < uVar6) goto LAB_713a2070;
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
// Function: FUN_713a2214
// Entry: 0x713a2214 | Size: 344 bytes
// =========================================================================

bool FUN_713a2214(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_40);
  uVar6 = *param_3;
  uVar4 = param_3[1];
  if ((int)(iStack_3c - (uVar4 + (uStack_40 < uVar6))) < 0 ==
      (SBORROW4(iStack_3c,uVar4) != SBORROW4(iStack_3c - uVar4,(uint)(uStack_40 < uVar6)))) {
    return true;
  }
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_38);
  uVar7 = uVar6 - uStack_38;
  uVar4 = uVar4 - (iStack_34 + (uint)(uVar6 < uStack_38));
  if ((int)uVar4 < (int)(uint)(uVar7 == 0)) goto LAB_713a2340;
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_28);
  thunk_qQIuwbHcsSjxNZVoVQngv_KeaxNCHbhktIDXxmX(&uStack_30);
  if (uStack_30 == 0 && uStack_2c == 0) {
    uVar6 = 0;
    iVar1 = 0;
LAB_713a2324:
    iVar2 = uVar6 + uVar7;
    iVar3 = iVar1 + uVar4 + (uint)CARRY4(uVar6,uVar7);
  }
  else {
    if ((int)uStack_2c < (int)(uint)(uStack_30 == 0)) {
      if (0xffdf3b64 < uStack_2c || uStack_2c + 0x20c49c < (uint)(0x5a1cac08 < uStack_30))
      goto LAB_713a22fc;
      iVar1 = -0x80000000;
      uVar6 = 0;
      goto LAB_713a2324;
    }
    if (uStack_2c < 0x20c49b || 0x20c49b - uStack_2c < (uint)(uStack_30 < 0xa5e353f8)) {
LAB_713a22fc:
      uVar6 = (uint)((ulonglong)uStack_30 * 1000);
      iVar1 = uStack_2c * 1000 + (int)((ulonglong)uStack_30 * 1000 >> 0x20);
    }
    else {
      iVar1 = 0x7fffffff;
      uVar6 = 0xffffffff;
    }
    iVar3 = 0x7fffffff;
    uVar5 = uVar4 ^ 0x7fffffff;
    iVar2 = -1;
    if ((int)(uVar5 - (iVar1 + (uint)(~uVar7 < uVar6))) < 0 ==
        (SBORROW4(uVar5,iVar1) != SBORROW4(uVar5 - iVar1,(uint)(~uVar7 < uVar6))))
    goto LAB_713a2324;
  }
  thunk_YwerwxXBOMHGtLqZFHKk_ctGQKOazwsbWzmajglPWUmyfxDDJCitmTGYiWAlTLbKzAEFbljsHNKfnxcGvCZhTLJFsJcqWOojIovWxBWOerwQpaGkjlYUtTEYpZjuULBtAETRotEQBPHtSZgMvJ_hHUCgwDuFGxUCpOweXArnbe
            (param_1,param_2,iVar2,iVar3);
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_30);
LAB_713a2340:
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_28);
  uVar4 = param_3[1];
  return (int)(iStack_24 - (uVar4 + (uStack_28 < *param_3))) < 0 ==
         (SBORROW4(iStack_24,uVar4) != SBORROW4(iStack_24 - uVar4,(uint)(uStack_28 < *param_3)));
}


// =========================================================================
// Function: FUN_713a2448
// Entry: 0x713a2448 | Size: 352 bytes
// =========================================================================

int * FUN_713a2448(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar4 = param_1[1] - *param_1 >> 2;
  uVar3 = iVar4 * -0x55555555 + 1;
  if (0x15555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6ffc(param_1);
  }
  iVar1 = param_1[2] - *param_1 >> 2;
  if (uVar3 < (uint)(iVar1 * 0x55555556)) {
    uVar3 = iVar1 * 0x55555556;
  }
  if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
    uVar3 = 0x15555555;
  }
  if (uVar3 == 0) {
    iVar1 = 0;
  }
  else {
    if (0x15555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar1 = thunk_MwhHq(uVar3 * 0xc);
  }
  uVar8 = *param_2;
  piVar7 = (int *)(iVar1 + iVar4 * 4);
  uVar2 = imp_strlen(uVar8);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(piVar7);
  }
  if (uVar2 < 0xb) {
    puVar5 = (undefined1 *)((int)piVar7 + 1);
    *(char *)piVar7 = (char)(uVar2 << 1);
    if (uVar2 == 0) goto LAB_713a254c;
  }
  else {
    puVar5 = (undefined1 *)thunk_MwhHq((uVar2 | 7) + 1);
    *piVar7 = (uVar2 | 7) + 2;
    piVar7[1] = uVar2;
    piVar7[2] = (int)puVar5;
  }
  imp___aeabi_memmove(puVar5,uVar8,uVar2);
LAB_713a254c:
  puVar5[uVar2] = 0;
  iVar4 = *param_1;
  iVar6 = (int)piVar7 - (param_1[1] - iVar4);
  imp___aeabi_memcpy4(iVar6,iVar4);
  *param_1 = iVar6;
  param_1[1] = (int)(piVar7 + 3);
  param_1[2] = iVar1 + uVar3 * 0xc;
  if (iVar4 != 0) {
    thunk_qNQrlu(iVar4);
  }
  return piVar7 + 3;
}


// =========================================================================
// Function: FUN_713a26bc
// Entry: 0x713a26bc | Size: 20 bytes
// =========================================================================

void FUN_713a26bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_713a475c
// Entry: 0x713a475c | Size: 852 bytes
// =========================================================================

bool FUN_713a475c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[0x20];
  iVar2 = param_1[0x22] + 1;
  param_1[0x22] = iVar2;
  if (iVar2 == iVar3) {
    iVar1 = 0;
    do {
      if (param_1[iVar1] != 0) {
        FUN_7137c664(param_1[iVar1],s_ForceFullDelete_700721cb);
        param_1[iVar1] = 0;
      }
      if (param_1[iVar1 + 0x10] != 0) {
        FUN_7138cfe0(param_1[iVar1 + 0x10],s_ForceFullDelete_700721cb);
        param_1[iVar1 + 0x10] = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    goto LAB_713a4a9c;
  }
  if (param_2 != 0) {
    iVar1 = 0;
    if (*param_1 != param_2) {
      if (param_1[1] == param_2) {
        iVar1 = 1;
      }
      else if (param_1[2] == param_2) {
        iVar1 = 2;
      }
      else if (param_1[3] == param_2) {
        iVar1 = 3;
      }
      else if (param_1[4] == param_2) {
        iVar1 = 4;
      }
      else if (param_1[5] == param_2) {
        iVar1 = 5;
      }
      else if (param_1[6] == param_2) {
        iVar1 = 6;
      }
      else if (param_1[7] == param_2) {
        iVar1 = 7;
      }
      else if (param_1[8] == param_2) {
        iVar1 = 8;
      }
      else if (param_1[9] == param_2) {
        iVar1 = 9;
      }
      else if (param_1[10] == param_2) {
        iVar1 = 10;
      }
      else if (param_1[0xb] == param_2) {
        iVar1 = 0xb;
      }
      else if (param_1[0xc] == param_2) {
        iVar1 = 0xc;
      }
      else if (param_1[0xd] == param_2) {
        iVar1 = 0xd;
      }
      else if (param_1[0xe] == param_2) {
        iVar1 = 0xe;
      }
      else {
        if (param_1[0xf] != param_2) goto LAB_713a4940;
        iVar1 = 0xf;
      }
    }
    FUN_7137c664(param_2,s_ForceSelectDelete_7006a33e);
    param_1[iVar1] = 0;
  }
LAB_713a4940:
  if (param_3 != 0) {
    iVar1 = 0;
    if (param_1[0x10] != param_3) {
      if (param_1[0x11] == param_3) {
        iVar1 = 1;
      }
      else if (param_1[0x12] == param_3) {
        iVar1 = 2;
      }
      else if (param_1[0x13] == param_3) {
        iVar1 = 3;
      }
      else if (param_1[0x14] == param_3) {
        iVar1 = 4;
      }
      else if (param_1[0x15] == param_3) {
        iVar1 = 5;
      }
      else if (param_1[0x16] == param_3) {
        iVar1 = 6;
      }
      else if (param_1[0x17] == param_3) {
        iVar1 = 7;
      }
      else if (param_1[0x18] == param_3) {
        iVar1 = 8;
      }
      else if (param_1[0x19] == param_3) {
        iVar1 = 9;
      }
      else if (param_1[0x1a] == param_3) {
        iVar1 = 10;
      }
      else if (param_1[0x1b] == param_3) {
        iVar1 = 0xb;
      }
      else if (param_1[0x1c] == param_3) {
        iVar1 = 0xc;
      }
      else if (param_1[0x1d] == param_3) {
        iVar1 = 0xd;
      }
      else if (param_1[0x1e] == param_3) {
        iVar1 = 0xe;
      }
      else {
        if (param_1[0x1f] != param_3) goto LAB_713a4a9c;
        iVar1 = 0xf;
      }
    }
    FUN_7138cfe0(param_3,s_ForceSelectDelete_7006a33e);
    (param_1 + 0x10)[iVar1] = 0;
  }
LAB_713a4a9c:
  return iVar2 == iVar3;
}


// =========================================================================
// Function: FUN_713a4b98
// Entry: 0x713a4b98 | Size: 204 bytes
// =========================================================================

int FUN_713a4b98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  imp___aeabi_memclr4(param_1,0x80);
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_7137bdd0(0,0,0);
    piVar4 = (int *)(param_1 + iVar3 * 4);
    *piVar4 = iVar1;
    iVar2 = FUN_7138ca1c(0,0);
    piVar4[0x10] = iVar2;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *piVar4;
    }
    if (iVar2 == 0 || iVar1 == 0) break;
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x10) goto LAB_713a4bf4;
  }
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if (iVar1 != 0) {
      FUN_7137c664(iVar1,s_AllocationCleanup_700721db);
      *(undefined4 *)(param_1 + iVar3 * 4) = 0;
    }
    iVar2 = param_1 + iVar3 * 4;
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar1 != 0) {
      FUN_7138cfe0(iVar1,s_AllocationCleanup_700721db);
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
LAB_713a4bf4:
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return param_1;
}


