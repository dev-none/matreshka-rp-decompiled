// =========================================================================
// Function: thunk_VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF
// Entry: 0x71e085b0 | Size: 1 bytes
// =========================================================================

void thunk_VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  return;
}


// =========================================================================
// Function: thunk_svKOqEAWvFPyfvqm_iVgpeYCocczhrwNMWYPoAxoJHXQlq_XbpubAUJCAaSVwFdoXkcqODfPAoQzqgdZBVH
// Entry: 0x71e085c0 | Size: 1 bytes
// =========================================================================

void thunk_svKOqEAWvFPyfvqm_iVgpeYCocczhrwNMWYPoAxoJHXQlq_XbpubAUJCAaSVwFdoXkcqODfPAoQzqgdZBVH
               (uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iStack_150;
  float afStack_148 [24];
  float afStack_e8 [24];
  float afStack_88 [25];
  
  uVar10 = param_1[2];
  uVar16 = param_1[1];
  uVar6 = param_1[8];
  uVar19 = param_1[5];
  uVar21 = param_1[6];
  uVar18 = (int)(param_1[3] - uVar10) >> 2;
  uVar11 = uVar16;
  if (uVar18 < uVar16) {
    uVar11 = uVar18;
  }
  uVar2 = uVar16 * *param_1;
  uVar15 = 0;
  if (uVar11 != 0) {
    uVar15 = uVar10;
  }
  uVar1 = uVar16 * uVar16;
  if (param_1[3] == uVar10) {
    uVar10 = 0;
    uVar15 = 0;
    uVar11 = 0;
  }
  uVar8 = (int)(uVar21 - uVar19) >> 2;
  uVar13 = uVar2;
  if (uVar8 <= uVar2 && uVar2 - uVar8 != 0) {
    uVar13 = uVar8;
  }
  uVar14 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar19;
  }
  if (uVar21 == uVar19) {
    uVar13 = 0;
    uVar14 = 0;
  }
  uVar3 = 0;
  if (uVar21 != uVar19) {
    uVar3 = uVar19;
  }
  pfVar20 = (float *)0x0;
  if (uVar16 != 0) {
    pfVar20 = (float *)(param_1 + 0xc);
  }
  uVar19 = (int)(param_1[9] - uVar6) >> 2;
  uVar21 = uVar1;
  if (uVar19 <= uVar1 && uVar1 - uVar19 != 0) {
    uVar21 = uVar19;
  }
  uVar12 = 0;
  if (uVar21 != 0) {
    uVar12 = uVar6;
  }
  if (param_1[9] == uVar6) {
    uVar6 = 0;
    uVar12 = 0;
    uVar21 = 0;
  }
  if (param_3 == 0) {
    param_2 = (float *)0x0;
  }
  FUN_71b04984(*param_1,uVar16,param_2,param_3,pfVar20,uVar16,uVar15,uVar11,uVar14,uVar13,uVar12,
               uVar21,afStack_e8,0x18);
  uVar21 = param_1[1];
  iVar22 = 0;
  iVar23 = 0;
  uVar11 = 0;
  if (uVar21 < uVar18) {
    uVar11 = uVar18 - uVar21;
    if (uVar21 <= uVar18 - uVar21) {
      uVar11 = uVar21;
    }
    iVar23 = 0;
    if (uVar11 != 0) {
      iVar23 = uVar10 + uVar21 * 4;
    }
  }
  uVar15 = 0;
  if (uVar2 < uVar8) {
    uVar15 = uVar8 - uVar2;
    if (uVar2 <= uVar8 - uVar2) {
      uVar15 = uVar2;
    }
    iVar22 = 0;
    if (uVar15 != 0) {
      iVar22 = uVar3 + uVar2 * 4;
    }
  }
  uVar13 = 0;
  iVar17 = 0;
  iVar7 = 0;
  if (uVar1 < uVar19) {
    uVar13 = uVar19 - uVar1;
    if (uVar1 <= uVar19 - uVar1) {
      uVar13 = uVar1;
    }
    iVar7 = 0;
    if (uVar13 != 0) {
      iVar7 = uVar6 + uVar1 * 4;
    }
  }
  pfVar5 = afStack_148;
  FUN_71b04984(*param_1,uVar21,param_2,param_3,pfVar20,uVar16,iVar23,uVar11,iVar22,uVar15,iVar7,
               uVar13,pfVar5,0x18);
  uVar11 = param_1[1];
  if (uVar11 * 2 < uVar18) {
    uVar18 = uVar18 + uVar11 * -2;
    if (uVar11 <= uVar18) {
      uVar18 = uVar11;
    }
    iVar17 = 0;
    if (uVar18 != 0) {
      iVar17 = uVar10 + uVar11 * 8;
    }
  }
  iVar23 = 0;
  uVar18 = 0;
  iStack_150 = 0;
  if (uVar2 * 2 < uVar8) {
    uVar8 = uVar8 + uVar2 * -2;
    uVar18 = uVar2;
    if (uVar8 < uVar2) {
      uVar18 = uVar8;
    }
    iStack_150 = 0;
    if (uVar18 != 0) {
      iStack_150 = uVar3 + uVar2 * 8;
    }
  }
  if (uVar1 * 2 < uVar19) {
    uVar19 = uVar19 + uVar1 * -2;
    uVar10 = uVar1;
    if (uVar19 < uVar1) {
      uVar10 = uVar19;
    }
    iVar23 = 0;
    if (uVar10 != 0) {
      iVar23 = uVar6 + uVar1 * 8;
    }
  }
  else {
    uVar10 = 0;
  }
  if (0 < (int)uVar11) {
    uVar16 = *param_1;
    pfVar4 = afStack_88;
    uVar6 = uVar11;
    pfVar9 = pfVar20;
    do {
      fVar24 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      uVar6 = uVar6 - 1;
      fVar25 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      *pfVar4 = fVar25 * fVar24;
      pfVar4 = pfVar4 + 1;
    } while (uVar6 != 0);
    if (param_3 == 0) {
      fVar24 = 0.0;
      uVar18 = 0;
      do {
        pfVar9 = afStack_88;
        pfVar5 = (float *)0x0;
        iVar22 = uVar11 << 2;
        fVar25 = fVar24;
        if (uVar18 * uVar11 < uVar10) {
          pfVar5 = (float *)(iVar23 + uVar18 * uVar11 * 4);
        }
        do {
          fVar26 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar22 = iVar22 + -4;
          fVar27 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar25 = fVar25 + fVar27 * fVar26;
        } while (iVar22 != 0);
        pfVar5 = afStack_e8 + uVar18;
        fVar25 = *(float *)(iVar17 + uVar18 * 4) + 0.0 + fVar25;
        pfVar9 = pfVar20 + uVar18;
        uVar18 = uVar18 + 1;
        fVar26 = fVar24;
        if (0.0 < fVar25) {
          fVar26 = fVar25;
        }
        *pfVar9 = fVar26 * (1.0 - *pfVar5) + *pfVar5 * *pfVar9;
      } while (uVar18 != uVar11);
    }
    else {
      fVar24 = 0.0;
      uVar6 = 0;
      do {
        uVar19 = uVar6 * uVar16;
        pfVar5 = (float *)0x0;
        if (uVar19 < uVar18) {
          uVar21 = uVar18 - uVar19;
          if (uVar16 <= uVar18 - uVar19) {
            uVar21 = uVar16;
          }
          pfVar5 = (float *)0x0;
          if (uVar21 != 0) {
            pfVar5 = (float *)(iStack_150 + uVar19 * 4);
          }
        }
        iVar22 = uVar6 * 4;
        iVar7 = param_3 << 2;
        pfVar9 = param_2;
        fVar25 = fVar24;
        do {
          fVar26 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -4;
          fVar27 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar25 = fVar25 + fVar27 * fVar26;
        } while (iVar7 != 0);
        pfVar5 = (float *)0x0;
        if (uVar6 * uVar11 < uVar10) {
          pfVar5 = (float *)(iVar23 + uVar6 * uVar11 * 4);
        }
        pfVar9 = afStack_88;
        iVar7 = uVar11 << 2;
        fVar26 = fVar24;
        do {
          fVar27 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -4;
          fVar28 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar26 = fVar26 + fVar28 * fVar27;
        } while (iVar7 != 0);
        pfVar5 = afStack_e8 + uVar6;
        pfVar9 = pfVar20 + uVar6;
        uVar6 = uVar6 + 1;
        fVar26 = *(float *)(iVar17 + iVar22) + fVar25 + fVar26;
        fVar25 = fVar24;
        if (0.0 < fVar26) {
          fVar25 = fVar26;
        }
        *pfVar9 = fVar25 * (1.0 - *pfVar5) + *pfVar5 * *pfVar9;
      } while (uVar6 != uVar11);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_RkXUiEJSWWtfuxfotgSuWbaVVTrDouFtaqGveKznFSwtFCDBvRjyNjwVEWhRPGQUdKeUbvWQDU_qjFRxzkCxmwAIBzJjUTxwdJDFeUvqmeYsUyFlPQlVZbXPrGvqSzelndNh_zAfUPDJuexXIHmBETVunZHnzGUZ
// Entry: 0x71e085d0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_RkXUiEJSWWtfuxfotgSuWbaVVTrDouFtaqGveKznFSwtFCDBvRjyNjwVEWhRPGQUdKeUbvWQDU_qjFRxzkCxmwAIBzJjUTxwdJDFeUvqmeYsUyFlPQlVZbXPrGvqSzelndNh_zAfUPDJuexXIHmBETVunZHnzGUZ
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined2 *param_10)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_71b0424c(param_1 + 2,param_4,param_5,param_3);
  FUN_71b0424c(param_1 + 5,param_6,param_7,param_3);
  FUN_71b0424c(param_1 + 8,param_8,param_9,param_3);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar1 = *param_10;
  *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)(param_10 + 1);
  param_1[0xc] = 0;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = 0;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x14] = 0;
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar4;
  param_1[0x18] = 0;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar4;
  param_1[0x1c] = 0;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar4;
  param_1[0x20] = 0;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar4;
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  return param_1;
}


// =========================================================================
// Function: thunk_woeuiNivzmwPovMBoYYNOjQySvgOwKOAScxDpkgwrol
// Entry: 0x71e085e0 | Size: 1 bytes
// =========================================================================

int thunk_woeuiNivzmwPovMBoYYNOjQySvgOwKOAScxDpkgwrol(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_oKCIaDWsZIoSaaNcHBgIeLZUckaFoeuOum_NTUHXCdfnZaiZHfNcY
// Entry: 0x71e085f0 | Size: 1 bytes
// =========================================================================

void thunk_oKCIaDWsZIoSaaNcHBgIeLZUckaFoeuOum_NTUHXCdfnZaiZHfNcY(int param_1)

{
  imp___aeabi_memclr4(param_1 + 0xc6c,900);
  return;
}


// =========================================================================
// Function: thunk_whZOywNEBoKqTqyCVwFrVnvYSiLQZekKn_mkVkovVFXYXSRgNYDiWdgjhoCRUrVyjrmU_dAfKkOxINVMbWRojQgYORAR_fPSmrpVKTeWxGCEncntmdkv_kFAvOlEcdRatEKMlAuREmGM
// Entry: 0x71e08600 | Size: 1 bytes
// =========================================================================

bool thunk_whZOywNEBoKqTqyCVwFrVnvYSiLQZekKn_mkVkovVFXYXSRgNYDiWdgjhoCRUrVyjrmU_dAfKkOxINVMbWRojQgYORAR_fPSmrpVKTeWxGCEncntmdkv_kFAvOlEcdRatEKMlAuREmGM
               (int param_1,int param_2,int param_3,undefined8 *param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int aiStack_f0 [22];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float afStack_88 [8];
  
  uVar9 = *(undefined4 *)(param_1 + 0x3d0);
  uVar8 = *(undefined4 *)(param_1 + 0x3d4);
  thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(aiStack_f0,uVar9);
  iVar1 = 0x77c;
  iVar3 = 0;
  do {
    pfVar4 = (float *)(param_1 + iVar3);
    pfVar5 = (float *)(param_2 + iVar3);
    pfVar6 = (float *)(aiStack_f0[0] + iVar3);
    iVar3 = iVar3 + 4;
    *pfVar6 = *pfVar5 * *pfVar4;
    pfVar5 = (float *)(param_2 + iVar1);
    pfVar6 = (float *)(aiStack_f0[0] + iVar1);
    iVar1 = iVar1 + -4;
    *pfVar6 = *pfVar5 * *pfVar4;
  } while (iVar1 != 0x3bc);
  thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO(param_1 + 0x3c0,uVar9,uVar8,1);
  thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(&fStack_148,uVar8);
  iVar1 = 0;
  *(undefined4 *)((int)fStack_148 + 4) = 0;
  thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(&uStack_90,*(undefined4 *)(param_1 + 0x3d4));
  thunk_RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
            (param_1 + 0x3dc,uStack_90,uStack_8c,param_1 + 1000);
  fVar10 = *(float *)(param_1 + 1000) + 0.0 + *(float *)(param_1 + 0x3ec) +
           *(float *)(param_1 + 0x3f0) + *(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x3f8) +
           *(float *)(param_1 + 0x3fc) + *(float *)(param_1 + 0x400) + *(float *)(param_1 + 0x404) +
           *(float *)(param_1 + 0x408) + *(float *)(param_1 + 0x40c) + *(float *)(param_1 + 0x410) +
           *(float *)(param_1 + 0x414) + *(float *)(param_1 + 0x418) + *(float *)(param_1 + 0x41c) +
           *(float *)(param_1 + 0x420) + *(float *)(param_1 + 0x424) + *(float *)(param_1 + 0x428) +
           *(float *)(param_1 + 0x42c) + *(float *)(param_1 + 0x430) + *(float *)(param_1 + 0x434);
  if (0.04 <= fVar10) {
    uVar9 = *(undefined4 *)(param_1 + 0x3d0);
    uVar8 = *(undefined4 *)(param_1 + 0x3d8);
    thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(aiStack_f0,uVar9);
    iVar3 = 0x77c;
    do {
      pfVar4 = (float *)(param_1 + iVar1);
      pfVar5 = (float *)(param_3 + iVar1);
      pfVar6 = (float *)(aiStack_f0[0] + iVar1);
      iVar1 = iVar1 + 4;
      *pfVar6 = *pfVar5 * *pfVar4;
      pfVar5 = (float *)(param_3 + iVar3);
      pfVar6 = (float *)(aiStack_f0[0] + iVar3);
      iVar3 = iVar3 + -4;
      *pfVar6 = *pfVar5 * *pfVar4;
    } while (iVar3 != 0x3bc);
    thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
              (param_1 + 0x3c0,uVar9,uVar8,1);
    thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(&fStack_148,uVar8);
    iVar3 = 0;
    *(undefined4 *)((int)fStack_148 + 4) = 0;
    thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv
              (&uStack_98,*(undefined4 *)(param_1 + 0x3d8));
    thunk_RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
              (param_1 + 0x3dc,uStack_98,uStack_94,param_1 + 0x438);
    thunk_CjcFqQwPzbKvGNcjEQM_NsiakNHztNxsQNrykpoYrPCoEklXCGHvkjdHYQuEEqAvJo_z_JhXfWwHaUxIMfcaEMiDkYkEvAMgt
              (param_1 + 1000,0x14,aiStack_f0);
    thunk_EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
              (aiStack_f0,0x16,param_1 + 0x4d8,&fStack_148,0x16);
    fVar12 = fStack_148 + -12.0;
    fVar13 = fStack_144 + -4.0;
    fStack_148 = fVar12;
    fStack_144 = fVar13;
    imp___aeabi_memcpy4(*(int *)(param_1 + 0xc68) * 0x58 + param_1 + 0xc6c,&fStack_148,0x58);
    iVar1 = 0;
    if (*(int *)(param_1 + 0xc68) != 7) {
      iVar1 = *(int *)(param_1 + 0xc68) + 1;
    }
    iVar2 = iVar1 * 0x58 + 0xbbc;
    *(int *)(param_1 + 0xc68) = iVar1;
    iVar1 = iVar1 + -2;
    do {
      iVar7 = (short)(ushort)((uint)iVar1 >> 0x1f) * 0x2c0 + iVar2;
      iVar2 = iVar2 + -0x58;
      pfVar4 = (float *)(param_1 + iVar7);
      fVar14 = fVar12 - *pfVar4;
      fVar11 = fVar13 - pfVar4[1];
      pfVar5 = (float *)((int)afStack_88 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar5 = fVar14 * fVar14 + 0.0 + fVar11 * fVar11 +
                (fStack_140 - pfVar4[2]) * (fStack_140 - pfVar4[2]) +
                (fStack_13c - pfVar4[3]) * (fStack_13c - pfVar4[3]) +
                (fStack_138 - pfVar4[4]) * (fStack_138 - pfVar4[4]) +
                (fStack_134 - pfVar4[5]) * (fStack_134 - pfVar4[5]) +
                (fStack_130 - pfVar4[6]) * (fStack_130 - pfVar4[6]) +
                (fStack_12c - pfVar4[7]) * (fStack_12c - pfVar4[7]) +
                (fStack_128 - pfVar4[8]) * (fStack_128 - pfVar4[8]) +
                (fStack_124 - pfVar4[9]) * (fStack_124 - pfVar4[9]) +
                (fStack_120 - pfVar4[10]) * (fStack_120 - pfVar4[10]) +
                (fStack_11c - pfVar4[0xb]) * (fStack_11c - pfVar4[0xb]) +
                (fStack_118 - pfVar4[0xc]) * (fStack_118 - pfVar4[0xc]) +
                (fStack_114 - pfVar4[0xd]) * (fStack_114 - pfVar4[0xd]) +
                (fStack_110 - pfVar4[0xe]) * (fStack_110 - pfVar4[0xe]) +
                (fStack_10c - pfVar4[0xf]) * (fStack_10c - pfVar4[0xf]) +
                (fStack_108 - pfVar4[0x10]) * (fStack_108 - pfVar4[0x10]) +
                (fStack_104 - pfVar4[0x11]) * (fStack_104 - pfVar4[0x11]) +
                (fStack_100 - pfVar4[0x12]) * (fStack_100 - pfVar4[0x12]) +
                (fStack_fc - pfVar4[0x13]) * (fStack_fc - pfVar4[0x13]) +
                (fStack_f8 - pfVar4[0x14]) * (fStack_f8 - pfVar4[0x14]) +
                (fStack_f4 - pfVar4[0x15]) * (fStack_f4 - pfVar4[0x15]);
      iVar1 = iVar1 + -1;
    } while (iVar3 != 0x1c);
    imp___aeabi_memmove4(param_1 + 0xf2c,param_1 + 0xf4c,0xa4);
    *(float *)(param_1 + 0xfec) = afStack_88[0];
    *(float *)(param_1 + 0xf44) = afStack_88[6];
    *(float *)(param_1 + 0xf98) = afStack_88[3];
    *(float *)(param_1 + 0xfd0) = afStack_88[1];
    *(float *)(param_1 + 0xfb4) = afStack_88[2];
    *(float *)(param_1 + 0xf7c) = afStack_88[4];
    *(float *)(param_1 + 0xf60) = afStack_88[5];
    *param_4 = CONCAT44(fStack_12c,fStack_130);
    param_4[1] = CONCAT44(fStack_124,fStack_128);
    param_4[2] = CONCAT44(fStack_11c,fStack_120);
    param_4[3] = CONCAT44(fStack_114,fStack_118);
    param_4[4] = CONCAT44(fStack_10c,fStack_110);
    param_4[5] = CONCAT44(fStack_104,fStack_108);
    param_4[6] = CONCAT44(fStack_fc,fStack_100);
    param_4[7] = CONCAT44(fStack_f4,fStack_f8);
    thunk_nyLclPUihMwUaYqBZeeGrQgWuzBdEoYumDjzElqBBOIRVkelMVbHqyklRnrlFIsWqoeARvgHulvFKsmawxzGFAqtQTbznhMXnrSMwA
              (param_1,param_5,param_6,param_7);
    thunk_hGJZgOQNiaaUbZEscZvTJKiRk_vnSLrBdtafeeghYLG_gmgwKAdutoeUjsYAdOyVQbhMADmuoqQnNiIKjSnqUJhunlvOKCDRokWUfFBzYiV
              (param_1,param_8);
    uVar8 = thunk_qZPyvvvEsXeGYecCNKnUVCkNlRIZQeeeyfSyDvJvkCFZxtpQaJvTknxXFHkpBaLxZoli(param_1);
    *param_9 = uVar8;
  }
  return fVar10 < 0.04;
}


// =========================================================================
// Function: thunk_nyLclPUihMwUaYqBZeeGrQgWuzBdEoYumDjzElqBBOIRVkelMVbHqyklRnrlFIsWqoeARvgHulvFKsmawxzGFAqtQTbznhMXnrSMwA
// Entry: 0x71e08610 | Size: 1 bytes
// =========================================================================

void thunk_nyLclPUihMwUaYqBZeeGrQgWuzBdEoYumDjzElqBBOIRVkelMVbHqyklRnrlFIsWqoeARvgHulvFKsmawxzGFAqtQTbznhMXnrSMwA
               (int param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  iVar2 = *(int *)(param_1 + 0xc68);
  param_1 = param_1 + 0xc6c;
  pfVar3 = (float *)(((iVar2 - 2U >> 0x1c & 8) + (iVar2 - 2U)) * 0x58 + param_1);
  pfVar4 = (float *)(((iVar2 - 1U >> 0x1c & 8) + (iVar2 - 1U)) * 0x58 + param_1);
  pfVar1 = (float *)(((iVar2 - 3U >> 0x1c & 8) + (iVar2 - 3U)) * 0x58 + param_1);
  *param_2 = *pfVar4 + *pfVar3 + *pfVar1;
  *param_3 = *pfVar4 - *pfVar1;
  *param_4 = (*pfVar4 - (*pfVar3 + *pfVar3)) + *pfVar1;
  param_2[1] = pfVar4[1] + pfVar3[1] + pfVar1[1];
  param_3[1] = pfVar4[1] - pfVar1[1];
  param_4[1] = (pfVar4[1] - (pfVar3[1] + pfVar3[1])) + pfVar1[1];
  param_2[2] = pfVar4[2] + pfVar3[2] + pfVar1[2];
  param_3[2] = pfVar4[2] - pfVar1[2];
  param_4[2] = (pfVar4[2] - (pfVar3[2] + pfVar3[2])) + pfVar1[2];
  param_2[3] = pfVar4[3] + pfVar3[3] + pfVar1[3];
  param_3[3] = pfVar4[3] - pfVar1[3];
  param_4[3] = (pfVar4[3] - (pfVar3[3] + pfVar3[3])) + pfVar1[3];
  param_2[4] = pfVar4[4] + pfVar3[4] + pfVar1[4];
  param_3[4] = pfVar4[4] - pfVar1[4];
  param_4[4] = (pfVar4[4] - (pfVar3[4] + pfVar3[4])) + pfVar1[4];
  param_2[5] = pfVar4[5] + pfVar3[5] + pfVar1[5];
  param_3[5] = pfVar4[5] - pfVar1[5];
  param_4[5] = (pfVar4[5] - (pfVar3[5] + pfVar3[5])) + pfVar1[5];
  return;
}


// =========================================================================
// Function: thunk_hGJZgOQNiaaUbZEscZvTJKiRk_vnSLrBdtafeeghYLG_gmgwKAdutoeUjsYAdOyVQbhMADmuoqQnNiIKjSnqUJhunlvOKCDRokWUfFBzYiV
// Entry: 0x71e08620 | Size: 1 bytes
// =========================================================================

void thunk_hGJZgOQNiaaUbZEscZvTJKiRk_vnSLrBdtafeeghYLG_gmgwKAdutoeUjsYAdOyVQbhMADmuoqQnNiIKjSnqUJhunlvOKCDRokWUfFBzYiV
               (int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(&uStack_20,*(undefined4 *)(param_1 + 0x3d4));
  thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(&uStack_28,*(undefined4 *)(param_1 + 0x3d8));
  thunk_jfhkRwvXZxPmZfifvedmRFPBfUcB_ARYmVBSbNpVzuLalxxaKxfeQjOEkAWrmXlimTlQ_DRnofXHzkobXVjfzqreEZFMTPx_NcWGuGggEkSaR
            (param_1 + 0x3dc,uStack_20,uStack_1c,uStack_28,uStack_24,param_1 + 0x488);
  pfVar1 = (float *)(param_1 + 1000);
  iVar2 = 0x14;
  do {
    iVar2 = iVar2 + -1;
    pfVar1[0x28] = pfVar1[0x28] / SQRT(*pfVar1 * pfVar1[0x14] + 0.001);
    pfVar1 = pfVar1 + 1;
  } while (iVar2 != 0);
  thunk_EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
            (param_1 + 0x488,0x14,param_1 + 0x4d8,param_2,6);
  *param_2 = *param_2 + -1.3;
  param_2[1] = param_2[1] + -0.9;
  return;
}


// =========================================================================
// Function: thunk_qZPyvvvEsXeGYecCNKnUVCkNlRIZQeeeyfSyDvJvkCFZxtpQaJvTknxXFHkpBaLxZoli
// Entry: 0x71e08630 | Size: 1 bytes
// =========================================================================

float thunk_qZPyvvvEsXeGYecCNKnUVCkNlRIZQeeeyfSyDvJvkCFZxtpQaJvTknxXFHkpBaLxZoli(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = 3.4028235e+38;
  fVar13 = *(float *)(param_1 + 0xfd0);
  fVar12 = *(float *)(param_1 + 0xfcc);
  fVar9 = fVar8;
  if (*(float *)(param_1 + 0xfec) < 3.4028235e+38) {
    fVar9 = *(float *)(param_1 + 0xfec);
  }
  fVar11 = fVar9;
  if (fVar13 < fVar9) {
    fVar11 = fVar13;
  }
  fVar10 = fVar8;
  if (fVar13 < 3.4028235e+38) {
    fVar10 = fVar13;
  }
  if (fVar12 < fVar9) {
    fVar9 = fVar12;
  }
  if (*(float *)(param_1 + 0xfb4) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xfb4);
  }
  if (fVar12 < fVar10) {
    fVar10 = fVar12;
  }
  if (*(float *)(param_1 + 0xfb0) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xfb0);
  }
  if (*(float *)(param_1 + 0xf98) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf98);
  }
  if (*(float *)(param_1 + 0xfac) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xfac);
  }
  if (*(float *)(param_1 + 0xf94) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf94);
  }
  if (*(float *)(param_1 + 0xf7c) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf7c);
  }
  if (*(float *)(param_1 + 0xf90) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf90);
  }
  if (*(float *)(param_1 + 0xf78) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf78);
  }
  if (*(float *)(param_1 + 0xf60) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf60);
  }
  iVar6 = param_1 + 0xf2c;
  iVar2 = 0;
  if (*(float *)(param_1 + 0xf74) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf74);
  }
  if (*(float *)(param_1 + 0xf5c) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf5c);
  }
  if (*(float *)(param_1 + 0xf44) < fVar11) {
    fVar11 = *(float *)(param_1 + 0xf44);
  }
  if (*(float *)(param_1 + 0xf58) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf58);
  }
  if (*(float *)(param_1 + 0xf40) < fVar9) {
    fVar9 = *(float *)(param_1 + 0xf40);
  }
  if (*(float *)(param_1 + 0xf3c) < fVar10) {
    fVar10 = *(float *)(param_1 + 0xf3c);
  }
  fVar10 = fVar11 + 0.0 + fVar9 + fVar10;
  do {
    uVar7 = iVar2 + 3;
    uVar3 = uVar7 ^ 7;
    iVar4 = uVar3 * 7;
    iVar1 = iVar6 + uVar3 * 0x1c;
    fVar9 = fVar8;
    if (*(float *)(iVar1 + 0x18) < 3.4028235e+38) {
      fVar9 = *(float *)(iVar1 + 0x18);
    }
    if (*(float *)(iVar1 + 0x14) < fVar9) {
      fVar9 = *(float *)(iVar1 + 0x14);
    }
    if (*(float *)(iVar1 + 0x10) < fVar9) {
      fVar9 = *(float *)(iVar1 + 0x10);
    }
    if (iVar2 == 0) {
LAB_71b01c5c:
      iVar1 = 2;
      iVar5 = iVar4;
      if (uVar7 < 4) {
        iVar1 = uVar3 - 1;
        iVar5 = 0x15;
      }
      fVar12 = *(float *)(iVar6 + (iVar1 + iVar5) * 4);
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      if (iVar2 != 2) goto LAB_71b01c90;
LAB_71b01bb8:
      if (uVar7 < 6) {
        iVar4 = uVar3 + 6;
      }
      fVar12 = *(float *)(iVar6 + iVar4 * 4);
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      if (iVar2 == 4) {
        return (fVar10 + fVar9) * 0.125 + -2.1;
      }
    }
    else {
      if (*(float *)(iVar1 + 0xc) < fVar9) {
        fVar9 = *(float *)(iVar1 + 0xc);
      }
      if (iVar2 != 1) goto LAB_71b01c5c;
LAB_71b01c90:
      iVar1 = 1;
      iVar5 = iVar4;
      if (uVar7 < 5) {
        iVar1 = uVar3 - 1;
        iVar5 = 0xe;
      }
      fVar12 = *(float *)(iVar6 + (iVar1 + iVar5) * 4);
      if (fVar12 < fVar9) {
        fVar9 = fVar12;
      }
      if (iVar2 != 3) goto LAB_71b01bb8;
    }
    iVar2 = iVar2 + 1;
    fVar12 = *(float *)(iVar6 + uVar3 * 4 + -4);
    if (fVar12 < fVar9) {
      fVar9 = fVar12;
    }
    fVar10 = fVar10 + fVar9;
  } while( true );
}


// =========================================================================
// Function: thunk_JGnWLtHNBLpBfuQcLgBncnENCRQiYTWsMXbjcnavwcxjuu_le
// Entry: 0x71e08640 | Size: 1 bytes
// =========================================================================

int thunk_JGnWLtHNBLpBfuQcLgBncnENCRQiYTWsMXbjcnavwcxjuu_le(int param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  imp___aeabi_memclr4(param_1,0x3c0);
  iVar2 = 0;
  dVar3 = 0.0;
  do {
    dVar4 = ((dVar3 + 0.5) * 1.5707963267948966) / 240.0;
    dVar4 = (double)imp_sin(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    dVar4 = dVar4 * dVar4 * 1.5707963267948966;
    dVar4 = (double)imp_sin(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    pfVar1 = (float *)(param_1 + iVar2);
    dVar3 = dVar3 + 1.0;
    iVar2 = iVar2 + 4;
    *pfVar1 = (float)(dVar4 * 0.0020833334419876337);
  } while (iVar2 != 0x3c0);
  iVar2 = param_1 + 0x3c0;
  thunk_fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol(iVar2,0x1e0,0);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x3d0,iVar2);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x3d4,iVar2);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x3d8,iVar2);
  thunk_hRxEPENoECLOVScKDtwxlsSgEQtrymaxeeK_yrEozk(param_1 + 0x3dc);
  thunk_gfvelQZpEcIUFfuxEQUSqeLYk_ZzWLlKwAivU(param_1 + 0x4d8);
  imp___aeabi_memclr4(param_1 + 0xc68,0x388);
  return param_1;
}


// =========================================================================
// Function: thunk_GdKToftlFouRSZEDUOMXwtgbgQNtjewLtwpzjRURVAnpierwe
// Entry: 0x71e08650 | Size: 1 bytes
// =========================================================================

int thunk_GdKToftlFouRSZEDUOMXwtgbgQNtjewLtwpzjRURVAnpierwe(int param_1)

{
  int iVar1;
  
  thunk_fgFjqEsIAjLKMVtRCHZnYEpZFMyLyxKVkfPuMcgCXY(param_1 + 0x3dc);
  iVar1 = *(int *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  thunk_vCBnCSmxQftcHuTI_iwg(param_1 + 0x3c0);
  return param_1;
}


// =========================================================================
// Function: thunk_RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
// Entry: 0x71e08660 | Size: 1 bytes
// =========================================================================

void thunk_RlSeVVktKyHraGkAqXcLn_vlaXTpLigmWweuhjczAAYGmGplurfzUXqCMPThgwRdQthwoCrqVCAstmZIkiGWd_oxbQThrTusTfHTOcjjB
               (int *param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *param_4 = 0.0;
  param_2 = param_2 + 4;
  iVar8 = *param_1;
  if (param_3 == 0) {
    param_2 = 4;
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    iVar6 = (&DAT_70098970)[iVar4];
    param_4[iVar5] = 0.0;
    if (0 < iVar6) {
      pfVar7 = (float *)(param_2 + iVar3 * 8);
      pfVar2 = (float *)(iVar8 + iVar3 * 4);
      fVar9 = param_4[iVar4];
      iVar3 = iVar6 + iVar3;
      fVar10 = 0.0;
      do {
        fVar11 = *pfVar7;
        iVar6 = iVar6 + -1;
        pfVar1 = pfVar7 + -1;
        pfVar7 = pfVar7 + 2;
        fVar12 = fVar11 * fVar11 + *pfVar1 * *pfVar1;
        fVar11 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        fVar11 = fVar11 * fVar12;
        fVar10 = fVar10 + fVar11;
        fVar9 = fVar9 + (fVar12 - fVar11);
        param_4[iVar4] = fVar9;
        param_4[iVar5] = fVar10;
      } while (iVar6 != 0);
    }
    iVar4 = iVar5;
  } while (iVar5 != 0x13);
  *param_4 = *param_4 + *param_4;
  return;
}


// =========================================================================
// Function: thunk_jfhkRwvXZxPmZfifvedmRFPBfUcB_ARYmVBSbNpVzuLalxxaKxfeQjOEkAWrmXlimTlQ_DRnofXHzkobXVjfzqreEZFMTPx_NcWGuGggEkSaR
// Entry: 0x71e08670 | Size: 1 bytes
// =========================================================================

void thunk_jfhkRwvXZxPmZfifvedmRFPBfUcB_ARYmVBSbNpVzuLalxxaKxfeQjOEkAWrmXlimTlQ_DRnofXHzkobXVjfzqreEZFMTPx_NcWGuGggEkSaR
               (int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar6 = 0;
  *param_6 = 0.0;
  iVar8 = *param_1;
  iVar9 = 0;
  do {
    iVar10 = iVar9 + 1;
    iVar7 = (&DAT_70098970)[iVar9];
    param_6[iVar10] = 0.0;
    if (0 < iVar7) {
      pfVar4 = (float *)(iVar8 + iVar6 * 4);
      pfVar3 = (float *)(param_2 + 4 + iVar6 * 8);
      pfVar5 = (float *)(param_4 + 4 + iVar6 * 8);
      fVar11 = param_6[iVar9];
      iVar6 = iVar6 + iVar7;
      fVar12 = 0.0;
      do {
        fVar13 = *pfVar5;
        iVar7 = iVar7 + -1;
        fVar14 = *pfVar3;
        pfVar1 = pfVar5 + -1;
        pfVar5 = pfVar5 + 2;
        pfVar2 = pfVar3 + -1;
        pfVar3 = pfVar3 + 2;
        fVar14 = fVar14 * fVar13 + *pfVar2 * *pfVar1;
        fVar13 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar13 = fVar13 * fVar14;
        fVar12 = fVar13 + fVar12;
        fVar11 = fVar11 + (fVar14 - fVar13);
        param_6[iVar9] = fVar11;
        param_6[iVar10] = fVar12;
      } while (iVar7 != 0);
    }
    iVar9 = iVar10;
  } while (iVar10 != 0x13);
  *param_6 = *param_6 + *param_6;
  return;
}


// =========================================================================
// Function: thunk_CjcFqQwPzbKvGNcjEQM_NsiakNHztNxsQNrykpoYrPCoEklXCGHvkjdHYQuEEqAvJo_z_JhXfWwHaUxIMfcaEMiDkYkEvAMgt
// Entry: 0x71e08680 | Size: 1 bytes
// =========================================================================

void thunk_CjcFqQwPzbKvGNcjEQM_NsiakNHztNxsQNrykpoYrPCoEklXCGHvkjdHYQuEEqAvJo_z_JhXfWwHaUxIMfcaEMiDkYkEvAMgt
               (float *param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = -2.0;
  fVar7 = fVar6;
  if (param_2 != 0) {
    fVar6 = -2.0;
    iVar2 = param_2;
    pfVar3 = param_3;
    fVar7 = fVar6;
    do {
      fVar5 = *param_1;
      param_1 = param_1 + 1;
      fVar1 = (float)imp_log10f(fVar5 + 0.01);
      fVar6 = fVar6 + -1.5;
      fVar5 = fVar6;
      if (fVar6 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = fVar7 + -7.0;
      if (fVar7 + -7.0 < fVar5) {
        fVar1 = fVar5;
      }
      *pfVar3 = fVar1;
      pfVar3 = pfVar3 + 1;
      if (fVar6 < fVar1) {
        fVar6 = fVar1;
      }
      if (fVar7 < fVar1) {
        fVar7 = fVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (0x15 < param_2) {
      return;
    }
  }
  param_3 = param_3 + param_2;
  param_2 = param_2 + -0x16;
  do {
    fVar6 = fVar6 + -1.5;
    fVar5 = fVar6;
    if (fVar6 < -2.0) {
      fVar5 = -2.0;
    }
    fVar1 = fVar7 + -7.0;
    if (fVar7 + -7.0 < fVar5) {
      fVar1 = fVar5;
    }
    *param_3 = fVar1;
    param_3 = param_3 + 1;
    if (fVar6 < fVar1) {
      fVar6 = fVar1;
    }
    if (fVar7 < fVar1) {
      fVar7 = fVar1;
    }
    bVar4 = param_2 != -1;
    param_2 = param_2 + 1;
  } while (bVar4);
  return;
}


// =========================================================================
// Function: thunk_gfvelQZpEcIUFfuxEQUSqeLYk_ZzWLlKwAivU
// Entry: 0x71e08690 | Size: 1 bytes
// =========================================================================

void thunk_gfvelQZpEcIUFfuxEQUSqeLYk_ZzWLlKwAivU(int param_1)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar2 = 0;
  dVar4 = 0.0;
  do {
    dVar3 = dVar4 + 0.5;
    dVar7 = (dVar3 * 0.0 * 3.141592653589793) / 22.0;
    dVar24 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar25 = (dVar3 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 3.0 * 3.141592653589793) / 22.0;
    dVar7 = (dVar3 * 6.0 * 3.141592653589793) / 22.0;
    dVar9 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar25 = ((dVar3 + dVar3) * 3.141592653589793) / 22.0;
    dVar5 = (dVar3 * 14.0 * 3.141592653589793) / 22.0;
    dVar10 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar6 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar8 = (dVar3 * 5.0 * 3.141592653589793) / 22.0;
    dVar11 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar12 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar7 = (dVar3 * 7.0 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 8.0 * 3.141592653589793) / 22.0;
    dVar13 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar14 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar7 = (dVar3 * 9.0 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 10.0 * 3.141592653589793) / 22.0;
    dVar15 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar16 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar7 = (dVar3 * 11.0 * 3.141592653589793) / 22.0;
    dVar8 = (dVar3 * 12.0 * 3.141592653589793) / 22.0;
    dVar17 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar8 = (double)imp_cos(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
    dVar25 = (dVar3 * 15.0 * 3.141592653589793) / 22.0;
    dVar7 = (dVar3 * 13.0 * 3.141592653589793) / 22.0;
    dVar18 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar25 = (dVar3 * 4.0 * 3.141592653589793) / 22.0;
    dVar7 = (double)imp_cos(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20));
    dVar5 = (double)imp_cos(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
    dVar25 = (double)imp_cos(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20));
    dVar4 = dVar4 + 1.0;
    dVar19 = (dVar3 * 16.0 * 3.141592653589793) / 22.0;
    dVar19 = (double)imp_cos(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20));
    dVar20 = (dVar3 * 17.0 * 3.141592653589793) / 22.0;
    dVar20 = (double)imp_cos(SUB84(dVar20,0),(int)((ulonglong)dVar20 >> 0x20));
    dVar21 = (dVar3 * 18.0 * 3.141592653589793) / 22.0;
    dVar21 = (double)imp_cos(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20));
    pfVar1 = (float *)(param_1 + iVar2);
    dVar22 = (dVar3 * 19.0 * 3.141592653589793) / 22.0;
    *pfVar1 = (float)dVar24;
    dVar23 = (dVar3 * 20.0 * 3.141592653589793) / 22.0;
    dVar3 = (dVar3 * 21.0 * 3.141592653589793) / 22.0;
    dVar3 = (double)imp_cos(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
    pfVar1[0x15] = (float)dVar3;
    dVar3 = (double)imp_cos(SUB84(dVar23,0),(int)((ulonglong)dVar23 >> 0x20));
    pfVar1[0x14] = (float)dVar3;
    dVar3 = (double)imp_cos(SUB84(dVar22,0),(int)((ulonglong)dVar22 >> 0x20));
    iVar2 = iVar2 + 0x58;
    pfVar1[0xf] = (float)dVar18;
    pfVar1[0x13] = (float)dVar3;
    pfVar1[0xd] = (float)dVar7;
    pfVar1[5] = (float)dVar11;
    pfVar1[6] = (float)dVar12;
    pfVar1[0xe] = (float)dVar5;
    pfVar1[7] = (float)dVar13;
    pfVar1[0x10] = (float)dVar19;
    pfVar1[8] = (float)dVar14;
    pfVar1[0x11] = (float)dVar20;
    pfVar1[9] = (float)dVar15;
    pfVar1[0x12] = (float)dVar21;
    pfVar1[10] = (float)dVar16;
    pfVar1[0xb] = (float)dVar17;
    pfVar1[0xc] = (float)dVar8;
    *(ulonglong *)pfVar1 = CONCAT44((float)dVar9,(float)dVar24 * 0.70710677);
    *(ulonglong *)(pfVar1 + 2) = CONCAT44((float)dVar6,(float)dVar10);
    pfVar1[4] = (float)dVar25;
  } while (iVar2 != 0x790);
  return;
}


// =========================================================================
// Function: thunk_EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
// Entry: 0x71e086a0 | Size: 1 bytes
// =========================================================================

void thunk_EfVREGFIYJFIl_sGhndlgJJKWNrxyxpQxhNRGeAoZDmliHRqDsSbjertipnGOYGgxYKprYrP_PFzBOEwuKevqlWRnBd
               (float *param_1,int param_2,float *param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_5 != 0) {
    if (param_2 == 0) {
      imp___aeabi_memclr4(param_4,param_5 << 2);
      return;
    }
    iVar5 = 0;
    do {
      pfVar2 = (float *)(param_4 + iVar5 * 4);
      *pfVar2 = 0.0;
      iVar1 = param_2;
      pfVar3 = param_1;
      pfVar4 = param_3;
      fVar6 = 0.0;
      do {
        fVar8 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        iVar1 = iVar1 + -1;
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 0x16;
        fVar6 = fVar6 + fVar8 * fVar7;
        *pfVar2 = fVar6;
      } while (iVar1 != 0);
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 1;
      *pfVar2 = fVar6 * 0.30151135;
    } while (iVar5 != param_5);
  }
  return;
}


// =========================================================================
// Function: thunk_hRxEPENoECLOVScKDtwxlsSgEQtrymaxeeK_yrEozk
// Entry: 0x71e086b0 | Size: 1 bytes
// =========================================================================

int * thunk_hRxEPENoECLOVScKDtwxlsSgEQtrymaxeeK_yrEozk(int *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = thunk_MwhHq(0x3c0);
  *param_1 = iVar1;
  param_1[1] = iVar1;
  param_1[2] = iVar1 + 0x3c0;
  imp___aeabi_memcpy4(iVar1,&DAT_700985b0,0x3c0);
  param_1[1] = iVar1 + 0x3c0;
  return param_1;
}


// =========================================================================
// Function: thunk_fgFjqEsIAjLKMVtRCHZnYEpZFMyLyxKVkfPuMcgCXY
// Entry: 0x71e086c0 | Size: 1 bytes
// =========================================================================

int * thunk_fgFjqEsIAjLKMVtRCHZnYEpZFMyLyxKVkfPuMcgCXY(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return param_1;
  }
  param_1[1] = iVar1;
  thunk_qNQrlu(iVar1);
  return param_1;
}


// =========================================================================
// Function: thunk_ICUerHsoVUvxbUCMgwuWaoXtiPmxgxGqVtJaf_xpNeJhQ_QNqGBytlQfPyUS
// Entry: 0x71e086d0 | Size: 1 bytes
// =========================================================================

void thunk_ICUerHsoVUvxbUCMgwuWaoXtiPmxgxGqVtJaf_xpNeJhQ_QNqGBytlQfPyUS
               (undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_MwhHq(0x60);
  piVar1[2] = param_2;
  piVar1[3] = param_3;
  *piVar1 = (int)&DAT_70b138f4;
  piVar1[1] = param_4;
  thunk_aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp(piVar1 + 7);
  thunk_aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp(piVar1 + 0x10);
  (**(code **)(*piVar1 + 0x10))(piVar1);
  *param_1 = piVar1;
  return;
}


// =========================================================================
// Function: thunk_ujrFTqFvLamVMAPYWfBsmkNuMyOlkmNOSWczvxgowkayt
// Entry: 0x71e086e0 | Size: 1 bytes
// =========================================================================

void thunk_ujrFTqFvLamVMAPYWfBsmkNuMyOlkmNOSWczvxgowkayt(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// =========================================================================
// Function: thunk_MzRBVtEPCkFOFfkEFspDVKqCQgBJkgJwrigBXtcPSFuUTQMM
// Entry: 0x71e086f0 | Size: 1 bytes
// =========================================================================

void thunk_MzRBVtEPCkFOFfkEFspDVKqCQgBJkgJwrigBXtcPSFuUTQMM(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + iVar1 * 4) = param_2;
  iVar1 = iVar1 + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 4) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) < 4) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}


// =========================================================================
// Function: thunk_GpVIVmSCEIsprBHjRlAFDYlQHDtMKbMAjCPbIVQX_tanPB
// Entry: 0x71e08700 | Size: 1 bytes
// =========================================================================

void thunk_GpVIVmSCEIsprBHjRlAFDYlQHDtMKbMAjCPbIVQX_tanPB(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x14) != 4) {
      iVar1 = 0;
    }
    *param_1 = *(undefined4 *)(param_2 + iVar1 * 4);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: thunk_aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp
// Entry: 0x71e08710 | Size: 1 bytes
// =========================================================================

void thunk_aBjaBSBlrFwjLzGEWHqMVygIqMHHkqtYnnwontHTp(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// =========================================================================
// Function: thunk_dDzUANzAjOcgwmeNunbLdXagUVBmWzZauobjMLUgV
// Entry: 0x71e08720 | Size: 1 bytes
// =========================================================================

void thunk_dDzUANzAjOcgwmeNunbLdXagUVBmWzZauobjMLUgV(void)

{
  return;
}


// =========================================================================
// Function: thunk_sQJqqgUupXEgZHgwodUnFcPFapJigeDbRoXYBNlm
// Entry: 0x71e08730 | Size: 1 bytes
// =========================================================================

void thunk_sQJqqgUupXEgZHgwodUnFcPFapJigeDbRoXYBNlm(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 400;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 400;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


// =========================================================================
// Function: thunk_wWZmaEuOpQILDMjyRmKkaO_dLzhYiIL__VreQgVHSRf
// Entry: 0x71e08740 | Size: 1 bytes
// =========================================================================

void thunk_wWZmaEuOpQILDMjyRmKkaO_dLzhYiIL__VreQgVHSRf
               (int param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  if (0.95 <= param_4) {
    iVar2 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar2;
    if (*(int *)(param_1 + 0xc) == 0) {
      fVar6 = 0.9975;
    }
    else {
      fVar6 = 1.0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -10;
    }
    iVar1 = *(int *)(param_1 + 8);
    fVar5 = param_4 + *(float *)(param_1 + 0x14) * fVar6;
    fVar6 = param_2 * param_4 + *(float *)(param_1 + 0x10) * fVar6;
    *(float *)(param_1 + 0x14) = fVar5;
    *(float *)(param_1 + 0x10) = fVar6;
    if (iVar1 <= iVar2) {
      fVar6 = fVar6 / fVar5;
      fVar5 = fVar6;
      if (30.0 <= fVar6) {
        fVar5 = 30.0;
      }
      if (fVar6 <= -90.0) {
        fVar5 = -90.0;
      }
      *(float *)(param_1 + 0x24) = fVar5;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (1 < iVar1) {
      if (*(int *)(param_1 + 0x2c) < iVar1) {
        if (*(int *)(param_1 + 0x2c) < 1) goto LAB_71afe8d0;
        iVar2 = 0xc;
        iVar4 = 0x18;
      }
      else {
        iVar2 = 0x18;
        iVar4 = 0xc;
      }
      uVar7 = *(undefined8 *)(param_1 + iVar4);
      *(undefined4 *)((undefined8 *)(param_1 + iVar2) + 1) =
           *(undefined4 *)((undefined8 *)(param_1 + iVar4) + 1);
      *(undefined8 *)(param_1 + iVar2) = uVar7;
    }
LAB_71afe8d0:
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (iVar1 != 1) {
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
    bVar3 = false;
    if (iVar2 < iVar1) goto LAB_71afe90c;
  }
  bVar3 = *(int *)(param_1 + 0xc) == 0;
LAB_71afe90c:
  *(bool *)(param_1 + 0x28) = bVar3;
  return;
}


// =========================================================================
// Function: thunk_cGVcNoThBxSFtzltgAmvvfrLrXJajGQkGeOCexlNvaGtyKTYClcVpsXkzgOpXzacWvpWbuJkaziDLGQEPhNXquAVIOSAsiapIjYtRgXCMMjKKutztwgiAqXW
// Entry: 0x71e08750 | Size: 1 bytes
// =========================================================================

void thunk_cGVcNoThBxSFtzltgAmvvfrLrXJajGQkGeOCexlNvaGtyKTYClcVpsXkzgOpXzacWvpWbuJkaziDLGQEPhNXquAVIOSAsiapIjYtRgXCMMjKKutztwgiAqXW
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0xc);
  fVar1 = *(float *)(param_3 + 4);
  *param_1 = param_2;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[8] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 400;
  param_1[3] = 400;
  fVar1 = (-20.0 - fVar2) - fVar1;
  fVar2 = fVar1;
  if (30.0 <= fVar1) {
    fVar2 = 30.0;
  }
  if (fVar1 <= -90.0) {
    fVar2 = -90.0;
  }
  param_1[1] = fVar2;
  param_1[9] = fVar2;
  param_1[7] = fVar2;
  param_1[4] = fVar2;
  return;
}


// =========================================================================
// Function: thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
// Entry: 0x71e08760 | Size: 1 bytes
// =========================================================================

undefined4
thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piStack_24;
  
  piVar1 = (int *)thunk_MwhHq(0x1238);
  *piVar1 = (int)&DAT_70b1389c;
  thunk_nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf(piVar1 + 1,param_3);
  thunk_oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU(piVar1 + 0x424,param_3);
  piStack_24 = piVar1;
  thunk_vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
            (param_1,param_2,&piStack_24,param_4);
  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
// Entry: 0x71e08770 | Size: 1 bytes
// =========================================================================

int * thunk_vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
                (int *param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = param_2 % 10;
  if (iVar5 == 0) {
    *param_1 = param_2 / 10;
    iVar5 = param_4 % 100;
    if (iVar5 == 0) {
      piVar2 = (int *)*param_3;
      param_1[1] = param_4 / 100;
      param_1[2] = param_2 / 10;
      iVar5 = *piVar2;
      *param_3 = 0;
      param_1[3] = (int)piVar2;
      iVar5 = (**(code **)(iVar5 + 8))();
      uVar1 = iVar5 / 100;
      if (iVar5 % 100 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,
                   &DAT_700984d0,iVar5 % 100,0,iVar5,s_is_not_evenly_divisible_by_7006252f,100);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      uVar4 = 0;
      if (0xc6 < iVar5 + 99U) {
        if (0x3fffffff < uVar1) {
          FUN_71a0103c(param_1 + 4);
          thunk_eTKktchCxUIAfWJsyUVzqfAMKsvyEqWT(0);
          iVar5 = param_1[4];
          if (iVar5 != 0) {
            param_1[5] = iVar5;
            thunk_qNQrlu();
          }
          piVar2 = (int *)param_1[3];
          param_1[3] = 0;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))();
          }
                    /* WARNING: Subroutine does not return */
          thunk_NAUpeWJSovvMoxKm_();
        }
        iVar5 = uVar1 * 4;
        iVar3 = thunk_MwhHq(iVar5);
        param_1[6] = iVar3 + uVar1 * 4;
        param_1[4] = iVar3;
        imp___aeabi_memclr4(iVar3,iVar5);
        param_1[5] = iVar3 + iVar5;
        uVar4 = uVar1;
      }
      thunk__qYuhYJuttlHaXkRFtxtGpXKRzqne_YyBh(param_1 + 7,param_1[1],uVar4,1);
      (**(code **)(*(int *)param_1[3] + 0xc))();
      return param_1;
    }
    uVar6 = 100;
    param_2 = param_4;
  }
  else {
    uVar6 = 10;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_700984d0,
             iVar5,0,param_2,s_is_not_evenly_divisible_by_7006252f,uVar6);
}


// =========================================================================
// Function: thunk_pnCqRfrRoOXlKgD_ewUZVBItdmx_ZxaCOTIVaOdRTyAKaiAcFhftwcIGnizIvMIRdR_DMwEdotts
// Entry: 0x71e08780 | Size: 1 bytes
// =========================================================================

void thunk_pnCqRfrRoOXlKgD_ewUZVBItdmx_ZxaCOTIVaOdRTyAKaiAcFhftwcIGnizIvMIRdR_DMwEdotts
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = iVar1 + -1;
  param_1[2] = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    (**(code **)(*(int *)param_1[3] + 0xc))();
    param_1[2] = *param_1;
  }
  iVar2 = param_1[4];
  iVar1 = 0;
  if (param_1[5] != iVar2) {
    iVar1 = iVar2;
  }
  if (param_3 == 0) {
    param_4 = 0;
  }
  thunk_m_NAmIqKHROjwSkSTzOndZJFYJbvtHNzhYFMzUlOUiOBWngzTioUDiUNRSmlCLXIjlScHwMCSkgfhlQidE
            (param_1 + 7,param_4,param_3,iVar1,param_1[5] - iVar2 >> 2);
  iVar2 = param_1[4];
  iVar1 = 0;
  if (param_1[5] != iVar2) {
    iVar1 = iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x71afedb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],iVar1,param_1[5] - iVar2 >> 2);
  return;
}


// =========================================================================
// Function: thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
// Entry: 0x71e08790 | Size: 1 bytes
// =========================================================================

undefined4
thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piStack_24;
  
  piVar1 = (int *)thunk_MwhHq(0x1238);
  *piVar1 = (int)&DAT_70b1389c;
  thunk_nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf(piVar1 + 1,param_3);
  thunk_oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU(piVar1 + 0x424,param_3);
  piStack_24 = piVar1;
  thunk_vTiDqBTNjWWKPzQnmknEhzaBdQYpPiCOxEVdLvDXvrkuwRGyyNaMZxgJJQoEbEPJnrAaKKVlrikTrGShIkmsDgIfYQ_qVIGzcmYkfoLslCbMg
            (param_1,param_2,&piStack_24,param_4);
  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh
// Entry: 0x71e087a0 | Size: 1 bytes
// =========================================================================

int thunk_rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh(int param_1)

{
  int *piVar1;
  
  thunk_eTKktchCxUIAfWJsyUVzqfAMKsvyEqWT(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x10) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
    thunk_qNQrlu();
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_shtxPYEHLAr_vHvbHDJpEehubQY
// Entry: 0x71e087b0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_shtxPYEHLAr_vHvbHDJpEehubQY(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1[0x10];
  *param_1 = &DAT_70b13250;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[0x11];
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        piVar1 = (int *)*piVar4;
        *piVar4 = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      } while (piVar4 != piVar3);
      piVar1 = (int *)param_1[0x10];
    }
    param_1[0x11] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  piVar3 = (int *)param_1[0xd];
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[0xe];
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        piVar1 = (int *)*piVar4;
        *piVar4 = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      } while (piVar4 != piVar3);
      piVar1 = (int *)param_1[0xd];
    }
    param_1[0xe] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  iVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (iVar2 != 0) {
    thunk_ZDcQiBQbrKVrUyYWFaJjAWtOMyGTztH();
    thunk_qNQrlu();
  }
  iVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar2 != 0) {
    thunk_uxNIQrxHJctWnbiWQnpKjvJRVzOspbeI();
    thunk_qNQrlu();
  }
  iVar2 = param_1[10];
  param_1[10] = 0;
  if (iVar2 != 0) {
    thunk_uxNIQrxHJctWnbiWQnpKjvJRVzOspbeI();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_KFLgNNuBtswdyuFYOFRqjrnDDwVLmMLHDVTUaCEGESCIUPBaByNwerbTmPtsh
// Entry: 0x71e087c0 | Size: 1 bytes
// =========================================================================

void thunk_KFLgNNuBtswdyuFYOFRqjrnDDwVLmMLHDVTUaCEGESCIUPBaByNwerbTmPtsh(int param_1,uint param_2)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x4c) = 0;
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  *(uint *)(param_1 + 0x50) = param_2;
  return;
}


// =========================================================================
// Function: thunk_HFRCtZbufGFOAkzCGANuRutaUFymPmQuScJeGmZYAcyTRBkmEDajSI
// Entry: 0x71e087d0 | Size: 1 bytes
// =========================================================================

void thunk_HFRCtZbufGFOAkzCGANuRutaUFymPmQuScJeGmZYAcyTRBkmEDajSI(int param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


// =========================================================================
// Function: thunk_BJcxXJCgqSkCVHZjFlDFGx_GdNNiAGButjZVxrohKBjbjQzawdLTtFffKF
// Entry: 0x71e087e0 | Size: 1 bytes
// =========================================================================

void thunk_BJcxXJCgqSkCVHZjFlDFGx_GdNNiAGButjZVxrohKBjbjQzawdLTtFffKF(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float afStack_3c24 [3841];
  
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar9 = *(int *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(iVar9 + 0x18) = uVar1;
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x18) = uVar1;
  }
  uVar2 = *(uint *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0x1c);
  if ((uVar2 < 2) || (iVar6 != 1)) {
    if (iVar10 == iVar11) {
      if (iVar6 != 0) {
        uVar2 = 0;
        do {
          thunk_VXJnZdMGDcASooGSKgpqoygTkMUpzxkFQU
                    (param_2[uVar2],*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar2 * 4));
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x1c));
      }
    }
    else if (iVar6 != 0) {
      uVar2 = 0;
      do {
        thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                  (*(undefined4 *)(*(int *)(param_1 + 0x34) + uVar2 * 4),param_2[uVar2],
                   *(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar2 * 4),
                   *(undefined4 *)(param_1 + 0xc));
        uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar2 * 4);
        thunk_VXJnZdMGDcASooGSKgpqoygTkMUpzxkFQU(uVar1,*(undefined4 *)(param_1 + 0xc),uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x1c));
    }
    return;
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    pfVar4 = (float *)param_2[*(int *)(param_1 + 0x50)];
LAB_71a9d520:
    if (iVar10 != iVar11) {
LAB_71a9d540:
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (**(undefined4 **)(param_1 + 0x34),pfVar4,iVar10,**(undefined4 **)(iVar9 + 4),iVar11
                );
      iVar10 = *(int *)(param_1 + 0xc);
      pfVar4 = (float *)**(int **)(*(int *)(param_1 + 0x28) + 4);
      pfVar5 = pfVar4;
      goto LAB_71a9d570;
    }
  }
  else {
    if (iVar10 != 0) {
      iVar7 = *param_2;
      fVar12 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      iVar6 = 0;
      do {
        fVar13 = *(float *)(iVar7 + iVar6 * 4);
        iVar8 = uVar2 - 1;
        piVar3 = param_2;
        do {
          piVar3 = piVar3 + 1;
          iVar8 = iVar8 + -1;
          fVar13 = fVar13 + *(float *)(*piVar3 + iVar6 * 4);
        } while (iVar8 != 0);
        pfVar4 = afStack_3c24;
        pfVar5 = pfVar4 + iVar6;
        iVar6 = iVar6 + 1;
        *pfVar5 = (1.0 / fVar12) * fVar13;
      } while (iVar6 != iVar10);
      goto LAB_71a9d520;
    }
    pfVar4 = afStack_3c24;
    if (iVar11 != 0) goto LAB_71a9d540;
  }
  pfVar5 = (float *)**(int **)(iVar9 + 4);
LAB_71a9d570:
  thunk_VXJnZdMGDcASooGSKgpqoygTkMUpzxkFQU(pfVar4,iVar10,pfVar5);
  return;
}


// =========================================================================
// Function: thunk__oPvzRjlHIMwv_yPJAfZjqsbVr_pJuqrNaijdnSSvSznBnzXCVwyQxT
// Entry: 0x71e087f0 | Size: 1 bytes
// =========================================================================

void thunk__oPvzRjlHIMwv_yPJAfZjqsbVr_pJuqrNaijdnSSvSznBnzXCVwyQxT
               (int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_71a9d668:
      uVar3 = 0;
      uVar2 = *(uint *)(param_2 + 4);
      goto LAB_71a9d690;
    }
    uVar2 = 0;
    do {
      thunk_UKp_LlpsmTpJx_DTueGqdCsctLEhthUfwn
                (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar2 * 4),
                 *(undefined4 *)(param_1 + 0xc),param_3[uVar2]);
      uVar3 = *(uint *)(param_1 + 0x1c);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) goto LAB_71a9d668;
    uVar2 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar2 * 4);
      thunk_UKp_LlpsmTpJx_DTueGqdCsctLEhthUfwn(uVar1,*(undefined4 *)(param_1 + 0xc),uVar1);
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (*(undefined4 *)(*(int *)(param_1 + 0x40) + uVar2 * 4),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar2 * 4),
                 *(undefined4 *)(param_1 + 0xc),param_3[uVar2],*(undefined4 *)(param_1 + 0x14));
      uVar3 = *(uint *)(param_1 + 0x1c);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = *(uint *)(param_2 + 4);
LAB_71a9d690:
  for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
    imp___aeabi_memcpy4(param_3[uVar3],*param_3,*(int *)(param_1 + 0x14) << 2);
    uVar2 = *(uint *)(param_2 + 4);
  }
  return;
}


// =========================================================================
// Function: thunk_AGEpjwDGwOrzYhLMwhYLHycRlFOV_kjOpzPd
// Entry: 0x71e08800 | Size: 1 bytes
// =========================================================================

void thunk_AGEpjwDGwOrzYhLMwhYLHycRlFOV_kjOpzPd(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_71a9d760:
      uVar2 = 0;
      uVar3 = *(uint *)(param_2 + 0x1c);
      goto LAB_71a9d790;
    }
    uVar3 = 0;
    do {
      imp___aeabi_memcpy4(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x28) + 4) + uVar3 * 4),
                          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar3 * 4),
                          *(int *)(param_1 + 0xc) << 2);
      uVar2 = *(uint *)(param_1 + 0x1c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) goto LAB_71a9d760;
    uVar3 = 0;
    do {
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (*(undefined4 *)(*(int *)(param_1 + 0x40) + uVar3 * 4),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar3 * 4),
                 *(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x28) + 4) + uVar3 * 4),
                 *(undefined4 *)(param_2 + 0xc));
      uVar2 = *(uint *)(param_1 + 0x1c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar3 = *(uint *)(param_2 + 0x1c);
LAB_71a9d790:
  for (; uVar2 < uVar3; uVar2 = uVar2 + 1) {
    puVar1 = *(undefined4 **)(*(int *)(param_2 + 0x28) + 4);
    imp___aeabi_memcpy4(puVar1[uVar2],*puVar1,*(int *)(param_1 + 0x14) << 2);
    uVar3 = *(uint *)(param_2 + 0x1c);
  }
  return;
}


// =========================================================================
// Function: thunk_AtXEwoMjtrXPcKfVvTjITMTZLF_neGIBLRUeVChKIr_
// Entry: 0x71e08810 | Size: 1 bytes
// =========================================================================

void thunk_AtXEwoMjtrXPcKfVvTjITMTZLF_neGIBLRUeVChKIr_(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18) = param_2;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_2;
  }
  return;
}


// =========================================================================
// Function: thunk_lZrSONcTrOzBzjCRrIafxn_ExiSZqYxTRoujllxSyxSCsvB_jMFjsWXi
// Entry: 0x71e08820 | Size: 1 bytes
// =========================================================================

void thunk_lZrSONcTrOzBzjCRrIafxn_ExiSZqYxTRoujllxSyxSCsvB_jMFjsWXi(int param_1,short *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  uint in_fpscr;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 auStack_3c28 [1920];
  
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar11 = *(int *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(uint *)(iVar11 + 0x18) = uVar1;
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x18) = uVar1;
  }
  iVar20 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0xc);
  if (uVar1 == 1) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 == 1) {
      if (iVar20 == iVar7) {
        thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV(param_2,iVar20,**(undefined4 **)(iVar11 + 4));
        return;
      }
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV(param_2,iVar20,auStack_3c28);
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (**(undefined4 **)(param_1 + 0x34),auStack_3c28,*(undefined4 *)(param_1 + 4),
                 **(undefined4 **)(*(int *)(param_1 + 0x28) + 4),*(undefined4 *)(param_1 + 0xc));
      return;
    }
    if (iVar20 == iVar7) {
      puVar2 = (undefined8 *)**(int **)(iVar11 + 4);
    }
    else {
      puVar2 = auStack_3c28;
    }
    if (*(char *)(param_1 + 0x4c) == '\0') {
      if (iVar20 != 0) {
        psVar6 = param_2 + *(int *)(param_1 + 0x50);
        puVar13 = puVar2;
        iVar17 = iVar20;
        do {
          iVar17 = iVar17 + -1;
          uVar3 = VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x16) & 3);
          *(undefined4 *)puVar13 = uVar3;
          puVar13 = (undefined8 *)((int)puVar13 + 4);
          psVar6 = psVar6 + uVar1;
        } while (iVar17 != 0);
      }
    }
    else if (iVar20 != 0) {
      if (uVar1 == 0) {
        imp___aeabi_memclr4(puVar2,iVar20 << 2);
        if (iVar20 == iVar7) {
          return;
        }
        goto LAB_71a9db14;
      }
      uVar15 = uVar1 & 0xfffffffc;
      iVar19 = 0;
      iVar17 = 0;
      psVar6 = param_2;
      do {
        iVar4 = 0;
        iVar8 = iVar19;
        uVar5 = 0;
        if (uVar1 < 4) {
LAB_71a9d96c:
          iVar12 = uVar1 - uVar5;
          psVar9 = param_2 + iVar8;
          do {
            iVar12 = iVar12 + -1;
            iVar4 = iVar4 + *psVar9;
            psVar9 = psVar9 + 1;
          } while (iVar12 != 0);
        }
        else {
          auVar21 = (undefined1  [16])0x0;
          iVar8 = iVar19 + uVar15;
          uVar5 = uVar15;
          psVar9 = psVar6;
          do {
            uVar22 = *(undefined8 *)psVar9;
            psVar9 = psVar9 + 4;
            uVar5 = uVar5 - 4;
            auVar21 = VectorAdd(auVar21,uVar22,2,0);
          } while (uVar5 != 0);
          uVar22 = VectorAdd(auVar21._0_8_,auVar21._8_8_,4);
          iVar4 = (int)uVar22 + (int)((ulonglong)uVar22 >> 0x20);
          uVar5 = uVar15;
          if (uVar1 != uVar15) goto LAB_71a9d96c;
        }
        uVar3 = FUN_71ba0440(iVar4,(int)(short)uVar1);
        iVar19 = uVar1 + iVar19;
        uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        iVar8 = iVar17 * 4;
        iVar17 = iVar17 + 1;
        *(undefined4 *)((int)puVar2 + iVar8) = uVar3;
        psVar6 = psVar6 + uVar1;
      } while (iVar17 != iVar20);
    }
    if (iVar20 != iVar7) {
LAB_71a9db14:
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (**(undefined4 **)(param_1 + 0x34),puVar2,iVar20,**(undefined4 **)(iVar11 + 4),iVar7
                );
      return;
    }
  }
  else if (iVar20 == iVar7) {
    if (uVar1 != 0 && iVar20 != 0) {
      iVar7 = *(int *)(iVar11 + 4);
      uVar15 = 0;
      do {
        puVar18 = *(undefined4 **)(iVar7 + uVar15 * 4);
        psVar6 = param_2;
        iVar11 = iVar20;
        do {
          iVar11 = iVar11 + -1;
          uVar3 = VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x16) & 3);
          *puVar18 = uVar3;
          puVar18 = puVar18 + 1;
          psVar6 = psVar6 + uVar1;
        } while (iVar11 != 0);
        uVar15 = uVar15 + 1;
        param_2 = param_2 + 1;
      } while (uVar15 != uVar1);
    }
  }
  else if (uVar1 != 0) {
    uVar15 = 0;
    psVar6 = param_2;
    do {
      uVar5 = *(uint *)(param_1 + 4);
      if (uVar5 != 0) {
        uVar16 = 0;
        uVar14 = uVar15;
        if ((3 < uVar5) && (uVar1 == 1)) {
          uVar16 = uVar5 & 0xfffffffc;
          uVar14 = uVar16 + uVar15;
          uVar10 = uVar16;
          psVar9 = psVar6;
          puVar2 = auStack_3c28;
          do {
            uVar22 = *(undefined8 *)psVar9;
            psVar9 = psVar9 + 4;
            uVar10 = uVar10 - 4;
            auVar21 = VectorCopyLong(uVar22,2,0);
            auVar21 = FixedToFP(auVar21,0,0,0,0x20);
            *puVar2 = auVar21._0_8_;
            puVar2[1] = auVar21._8_8_;
            puVar2 = puVar2 + 2;
          } while (uVar10 != 0);
          if (uVar5 == uVar16) goto LAB_71a9d9a4;
        }
        puVar18 = (undefined4 *)((int)auStack_3c28 + uVar16 * 4);
        iVar7 = uVar5 - uVar16;
        psVar9 = param_2 + uVar14;
        do {
          iVar7 = iVar7 + -1;
          uVar3 = VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x16) & 3);
          *puVar18 = uVar3;
          puVar18 = puVar18 + 1;
          psVar9 = psVar9 + uVar1;
        } while (iVar7 != 0);
      }
LAB_71a9d9a4:
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (*(undefined4 *)(*(int *)(param_1 + 0x34) + uVar15 * 4),auStack_3c28,uVar5,
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar15 * 4),
                 *(undefined4 *)(param_1 + 0xc));
      uVar1 = *(uint *)(param_1 + 0x1c);
      uVar15 = uVar15 + 1;
      psVar6 = psVar6 + 1;
    } while (uVar15 < uVar1);
  }
  return;
}


// =========================================================================
// Function: thunk_QbwhOFAwp_EPKCTXYoDquExcnNDNavot_VjAfgunkKUpcJCHUkwIE
// Entry: 0x71e08830 | Size: 1 bytes
// =========================================================================

void thunk_QbwhOFAwp_EPKCTXYoDquExcnNDNavot_VjAfgunkKUpcJCHUkwIE
               (int param_1,int param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  undefined4 extraout_s1;
  float fVar21;
  undefined4 extraout_s5;
  undefined4 in_s5;
  undefined8 uVar22;
  undefined8 uVar23;
  float afStack_3c4c [3841];
  
  uVar20 = *(uint *)(param_1 + 0x1c);
  uVar10 = *(uint *)(param_2 + 4);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar17 = *(uint *)(param_1 + 0x14);
  if (uVar20 == 1) {
    if (uVar3 == uVar17) {
      pfVar18 = (float *)**(int **)(*(int *)(param_1 + 0x28) + 4);
      iVar16 = *(int *)(param_1 + 0x14);
    }
    else {
      pfVar18 = afStack_3c4c;
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (**(undefined4 **)(param_1 + 0x40),**(undefined4 **)(*(int *)(param_1 + 0x28) + 4),
                 uVar3,pfVar18,uVar17);
      iVar16 = *(int *)(param_1 + 0x14);
      in_s5 = extraout_s5;
    }
    if (uVar10 == 1) {
      if (iVar16 == 0) {
        return;
      }
      do {
        fVar21 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        if (32767.0 < fVar21) {
          fVar21 = 32767.0;
        }
        if (fVar21 < -32768.0) {
          fVar21 = -32768.0;
        }
        iVar16 = iVar16 + -1;
        uVar22 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s5,fVar21),0x3f0000003f000000);
        *(short *)param_3 = (short)(int)(fVar21 + (float)uVar22);
        param_3 = (undefined8 *)((int)param_3 + 2);
      } while (iVar16 != 0);
      return;
    }
    if (iVar16 == 0 || uVar10 == 0) {
      return;
    }
    uVar20 = uVar10 & 0xfffffff8;
    iVar6 = 0;
    iVar14 = 0;
    puVar11 = param_3;
    uVar17 = uVar10;
    do {
      fVar21 = pfVar18[iVar14];
      if (32767.0 < pfVar18[iVar14]) {
        fVar21 = 32767.0;
      }
      if (fVar21 < -32768.0) {
        fVar21 = -32768.0;
      }
      uVar22 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s5,fVar21),0x3f0000003f000000);
      uVar1 = (undefined2)(int)(fVar21 + (float)uVar22);
      iVar4 = iVar6;
      if (uVar10 < 8) {
LAB_71a9dc58:
        iVar5 = uVar17 - iVar4;
        puVar9 = (undefined2 *)((int)param_3 + iVar4 * 2);
        do {
          *puVar9 = uVar1;
          iVar5 = iVar5 + -1;
          puVar9 = puVar9 + 1;
        } while (iVar5 != 0);
      }
      else {
        uVar22 = CONCAT44(CONCAT22(uVar1,uVar1),CONCAT22(uVar1,uVar1));
        iVar4 = iVar6 + uVar20;
        uVar3 = uVar20;
        puVar8 = puVar11;
        do {
          *puVar8 = uVar22;
          puVar8[1] = uVar22;
          puVar8 = puVar8 + 2;
          uVar3 = uVar3 - 8;
        } while (uVar3 != 0);
        if (uVar10 != uVar20) goto LAB_71a9dc58;
      }
      iVar14 = iVar14 + 1;
      iVar6 = uVar10 + iVar6;
      uVar17 = uVar17 + uVar10;
      puVar11 = (undefined8 *)((int)puVar11 + uVar10 * 2);
      if (iVar14 == iVar16) {
        return;
      }
    } while( true );
  }
  if (uVar3 == uVar17) {
    uVar17 = uVar3;
    if (uVar20 == 0) {
      uVar20 = 0;
    }
    else {
      if (uVar3 == 0) {
        return;
      }
      iVar16 = *(int *)(*(int *)(param_1 + 0x28) + 4);
      uVar7 = 0;
      puVar11 = param_3;
      do {
        pfVar18 = *(float **)(iVar16 + uVar7 * 4);
        uVar12 = uVar3;
        puVar8 = puVar11;
        do {
          fVar21 = *pfVar18;
          pfVar18 = pfVar18 + 1;
          if (32767.0 < fVar21) {
            fVar21 = 32767.0;
          }
          if (fVar21 < -32768.0) {
            fVar21 = -32768.0;
          }
          uVar12 = uVar12 - 1;
          uVar22 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s5,fVar21),0x3f0000003f000000)
          ;
          *(short *)puVar8 = (short)(int)(fVar21 + (float)uVar22);
          puVar8 = (undefined8 *)((int)puVar8 + uVar10 * 2);
        } while (uVar12 != 0);
        uVar7 = uVar7 + 1;
        puVar11 = (undefined8 *)((int)puVar11 + 2);
      } while (uVar7 != uVar20);
    }
  }
  else {
    if (uVar20 == 0) {
      uVar20 = 0;
      if (uVar10 == 0) {
        return;
      }
      goto LAB_71a9de74;
    }
    uVar3 = 0;
    puVar11 = param_3;
    do {
      thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                (*(undefined4 *)(*(int *)(param_1 + 0x40) + uVar3 * 4),
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + uVar3 * 4),
                 *(undefined4 *)(param_1 + 0xc),afStack_3c4c,uVar17);
      uVar17 = *(uint *)(param_1 + 0x14);
      pfVar18 = afStack_3c4c;
      uVar20 = uVar17;
      puVar8 = puVar11;
      while (uVar20 != 0) {
        fVar21 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        if (32767.0 < fVar21) {
          fVar21 = 32767.0;
        }
        if (fVar21 < -32768.0) {
          fVar21 = -32768.0;
        }
        uVar20 = uVar20 - 1;
        uVar22 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(extraout_s1,fVar21),
                                     0x3f0000003f000000);
        *(short *)puVar8 = (short)(int)(fVar21 + (float)uVar22);
        puVar8 = (undefined8 *)((int)puVar8 + uVar10 * 2);
      }
      uVar20 = *(uint *)(param_1 + 0x1c);
      uVar3 = uVar3 + 1;
      puVar11 = (undefined8 *)((int)puVar11 + 2);
    } while (uVar3 < uVar20);
  }
  if (uVar10 <= uVar20) {
    return;
  }
LAB_71a9de74:
  if (uVar17 != 0) {
    uVar7 = uVar17 & 0xfffffff8;
    iVar16 = 0;
    uVar12 = 0;
    uVar3 = uVar20;
    do {
      uVar2 = 0;
      uVar13 = uVar20;
      uVar19 = uVar3;
      if ((uVar17 < 8 || uVar10 != 1) || (uVar12 & 0x7ffffff8) == 0) {
LAB_71a9df40:
        iVar6 = uVar17 - uVar2;
        puVar11 = param_3;
        do {
          puVar9 = (undefined2 *)((int)puVar11 + uVar13 * 2);
          puVar15 = (undefined2 *)((int)puVar11 + uVar19 * 2);
          puVar11 = (undefined8 *)((int)puVar11 + uVar10 * 2);
          iVar6 = iVar6 + -1;
          *puVar15 = *puVar9;
        } while (iVar6 != 0);
      }
      else {
        uVar19 = uVar3 + uVar7 * uVar10;
        uVar2 = uVar7;
        puVar11 = (undefined8 *)((int)param_3 + uVar20 * 2);
        do {
          puVar8 = (undefined8 *)((int)puVar11 + iVar16);
          uVar22 = *puVar11;
          uVar23 = puVar11[1];
          puVar11 = puVar11 + 2;
          uVar2 = uVar2 - 8;
          *puVar8 = uVar22;
          puVar8[1] = uVar23;
        } while (uVar2 != 0);
        uVar2 = uVar7;
        uVar13 = uVar7 * uVar10 + uVar20;
        if (uVar17 != uVar7) goto LAB_71a9df40;
      }
      uVar3 = uVar3 + 1;
      iVar16 = iVar16 + 2;
      uVar12 = uVar12 + 1;
    } while (uVar3 != uVar10);
  }
  return;
}


// =========================================================================
// Function: thunk_eYLYZDlDzDlKEvKfaJJHLJYfhVHyIeHJVoluukotNuPhrWBHOe
// Entry: 0x71e08840 | Size: 1 bytes
// =========================================================================

void thunk_eYLYZDlDzDlKEvKfaJJHLJYfhVHyIeHJVoluukotNuPhrWBHOe(int param_1)

{
  thunk_OygqZ_tHhOTybTgJLgMMVrHQEOELZoFcFOImsfcQXgQfauCnoYmFWXviUNOctitdl
            (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c));
  return;
}


// =========================================================================
// Function: thunk_TFFaPamVELNhDIWZXFanIrsclPHEySSOxyxEXonYNvOkKu
// Entry: 0x71e08850 | Size: 1 bytes
// =========================================================================

void thunk_TFFaPamVELNhDIWZXFanIrsclPHEySSOxyxEXonYNvOkKu(int param_1)

{
  thunk_xDqVwhoKWxIaGEjTShnOCJQFeo_gDQFcHspzQTjiHbDRaDTPCzvUYidIhSlpuMpzeT
            (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
             *(undefined4 *)(param_1 + 0x28));
  return;
}


// =========================================================================
// Function: thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR
// Entry: 0x71e08860 | Size: 1 bytes
// =========================================================================

void thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  float *pfVar5;
  int iVar6;
  int in_r12;
  int iVar7;
  float fVar8;
  undefined4 in_s5;
  undefined8 uVar9;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 != 0) {
    in_r12 = *(int *)(param_1 + 0x24);
  }
  if (iVar7 != 0 && in_r12 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
      iVar2 = 0;
      do {
        pfVar5 = *(float **)
                  (*(int *)(*(int *)(param_1 + 0x28) + 8) +
                   *(int *)(*(int *)(param_1 + 0x28) + 0x1c) * param_2 * 4 + iVar2 * 4);
        puVar4 = *(undefined2 **)(param_3 + iVar2 * 4);
        iVar1 = in_r12;
        do {
          fVar8 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          if (32767.0 < fVar8) {
            fVar8 = 32767.0;
          }
          if (fVar8 < -32768.0) {
            fVar8 = -32768.0;
          }
          iVar1 = iVar1 + -1;
          uVar9 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s5,fVar8),0x3f0000003f000000);
          *puVar4 = (short)(int)(fVar8 + (float)uVar9);
          puVar4 = puVar4 + 1;
        } while (iVar1 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar7);
    }
    else {
      iVar1 = *(int *)(iVar2 + 8);
      iVar3 = *(int *)(iVar2 + 0x1c);
      iVar2 = 0;
      do {
        pfVar5 = *(float **)(iVar1 + iVar3 * param_2 * 4 + iVar2 * 4);
        puVar4 = *(undefined2 **)(param_3 + iVar2 * 4);
        iVar6 = in_r12;
        do {
          fVar8 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          if (32767.0 < fVar8) {
            fVar8 = 32767.0;
          }
          if (fVar8 < -32768.0) {
            fVar8 = -32768.0;
          }
          iVar6 = iVar6 + -1;
          uVar9 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s5,fVar8),0x3f0000003f000000);
          *puVar4 = (short)(int)(fVar8 + (float)uVar9);
          puVar4 = puVar4 + 1;
        } while (iVar6 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar7);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_PmlyVbduvpmUfTpqilVw_HhrkmYdQKHl
// Entry: 0x71e08870 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_PmlyVbduvpmUfTpqilVw_HhrkmYdQKHl
          (undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  
  param_1[6] = 0;
  param_1[7] = param_5;
  param_1[2] = param_3;
  iVar12 = 1;
  *param_1 = &DAT_70b13250;
  iVar7 = param_4 / 100;
  if (param_4 - 48000U < 100) {
    iVar12 = 3;
  }
  if (param_4 - 32000U < 100) {
    iVar12 = 2;
  }
  iVar2 = FUN_71ba0484(iVar7,iVar12);
  iVar6 = iVar7 - iVar2 * iVar12;
  param_1[8] = iVar12;
  param_1[1] = param_2 / 100;
  param_1[3] = iVar7;
  param_1[4] = param_5;
  param_1[5] = param_6 / 100;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_70095f19
               ,iVar6,0,iVar7,s_is_not_evenly_divisible_by_7006252f,iVar12);
  }
  param_1[9] = iVar2;
  uVar3 = thunk_MwhHq(0x38);
  thunk_qzrDNsrqslsEVHdwixKrKjYtxiowMrWjKa(uVar3,iVar7,param_5,1);
  iVar7 = param_1[5];
  param_1[0x14] = 0;
  piVar8 = param_1 + 0xb;
  *piVar8 = 0;
  param_1[0xc] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0xd] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0xe] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar12 = param_1[3];
  param_1[0xf] = 0;
  param_1[0x10] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x11] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x12] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar9 = param_1[4];
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[10] = uVar3;
  if (param_1[1] != iVar12 && uVar9 != 0) {
    uVar13 = 0;
    do {
      uVar3 = thunk_MwhHq(0x20);
      thunk_taVxuZCeogvn_pjw_phkongcfQugaEZqqS(uVar3,param_1[1],param_1[3]);
      puVar10 = (undefined4 *)param_1[0xe];
      if (puVar10 < (undefined4 *)param_1[0xf]) {
        puVar11 = puVar10 + 1;
        *puVar10 = uVar3;
      }
      else {
        iVar6 = param_1[0xd];
        iVar2 = (int)puVar10 - iVar6 >> 2;
        uVar9 = iVar2 + 1;
        if (0x3fffffff < uVar9) {
          FUN_71a9f710(param_1 + 0xd);
          goto LAB_71a9d148;
        }
        uVar5 = (int)param_1[0xf] - iVar6;
        uVar1 = (int)uVar5 >> 1;
        if (uVar9 < uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffb < uVar5) {
          uVar9 = 0x3fffffff;
        }
        if (uVar9 == 0) {
          iVar4 = 0;
        }
        else {
          if (0x3fffffff < uVar9) goto LAB_71a9d150;
          iVar4 = thunk_MwhHq(uVar9 << 2);
        }
        puVar11 = (undefined4 *)(iVar4 + iVar2 * 4);
        *puVar11 = uVar3;
        imp___aeabi_memcpy4(iVar4,iVar6,(int)puVar10 - iVar6);
        puVar11 = puVar11 + 1;
        param_1[0xd] = iVar4;
        param_1[0xe] = puVar11;
        param_1[0xf] = iVar4 + uVar9 * 4;
        if (iVar6 != 0) {
          thunk_qNQrlu(iVar6);
        }
      }
      uVar9 = param_1[4];
      uVar13 = uVar13 + 1;
      param_1[0xe] = puVar11;
    } while (uVar13 < uVar9);
  }
  if (iVar7 != iVar12 && uVar9 != 0) {
    uVar13 = 0;
    do {
      uVar3 = thunk_MwhHq(0x20);
      thunk_taVxuZCeogvn_pjw_phkongcfQugaEZqqS(uVar3,param_1[3],param_1[5]);
      puVar10 = (undefined4 *)param_1[0x11];
      if (puVar10 < (undefined4 *)param_1[0x12]) {
        puVar11 = puVar10 + 1;
        *puVar10 = uVar3;
      }
      else {
        iVar12 = param_1[0x10];
        iVar7 = (int)puVar10 - iVar12 >> 2;
        uVar9 = iVar7 + 1;
        if (0x3fffffff < uVar9) {
LAB_71a9d148:
          FUN_71a9f710(param_1 + 0x10);
LAB_71a9d150:
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        uVar5 = (int)param_1[0x12] - iVar12;
        uVar1 = (int)uVar5 >> 1;
        if (uVar9 < uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffb < uVar5) {
          uVar9 = 0x3fffffff;
        }
        if (uVar9 == 0) {
          iVar2 = 0;
        }
        else {
          if (0x3fffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_719fe2ec();
          }
          iVar2 = thunk_MwhHq(uVar9 << 2);
        }
        puVar11 = (undefined4 *)(iVar2 + iVar7 * 4);
        *puVar11 = uVar3;
        imp___aeabi_memcpy4(iVar2,iVar12,(int)puVar10 - iVar12);
        puVar11 = puVar11 + 1;
        param_1[0x10] = iVar2;
        param_1[0x11] = puVar11;
        param_1[0x12] = iVar2 + uVar9 * 4;
        if (iVar12 != 0) {
          thunk_qNQrlu(iVar12);
        }
      }
      param_1[0x11] = puVar11;
      uVar13 = uVar13 + 1;
      uVar9 = param_1[4];
    } while (uVar13 < uVar9);
  }
  uVar13 = param_1[8];
  if (1 < uVar13) {
    iVar7 = thunk_MwhHq(0x38);
    thunk_qzrDNsrqslsEVHdwixKrKjYtxiowMrWjKa(iVar7,param_1[3],uVar9,uVar13);
    iVar12 = *piVar8;
    *piVar8 = iVar7;
    if (iVar12 != 0) {
      thunk_uxNIQrxHJctWnbiWQnpKjvJRVzOspbeI();
      thunk_qNQrlu();
    }
    iVar7 = thunk_MwhHq(0x1c);
    thunk_so_PEXkTIDAYbHQlMNkcBNHHpKocRyOEr(iVar7,param_1[4],param_1[8],param_1[3]);
    iVar12 = param_1[0xc];
    param_1[0xc] = iVar7;
    if (iVar12 != 0) {
      thunk_ZDcQiBQbrKVrUyYWFaJjAWtOMyGTztH();
      thunk_qNQrlu();
    }
  }
  return param_1;
}


// =========================================================================
// Function: thunk_aJQIYbiOJTqzxEnhCgBqBHqYTNPLtYWZaPphZLOmbiAGOmiFNLkgYubUVUvQKqbOWJwRPWxJVmRpZIVvQVMyBkRRBecbupwwe_WUefupOfEzaimJRDoRMDdEmvIctCJysnxhZEvqQoEjjRDHZuX_TauXvKLGScZlHRGKCQgMxeQAivAkvZTB_XOklrxpPviWtnkEsnONJoRCWXMZIYHtoyZtWEGYyNvMZgTNaagLcGZQFRVbbIpCwzqtzRDPJVioHgYqnUjDrxKGXMXZolAds_yxzgzZttIhdnMUsvezMCaSkw
// Entry: 0x71e08880 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_aJQIYbiOJTqzxEnhCgBqBHqYTNPLtYWZaPphZLOmbiAGOmiFNLkgYubUVUvQKqbOWJwRPWxJVmRpZIVvQVMyBkRRBecbupwwe_WUefupOfEzaimJRDoRMDdEmvIctCJysnxhZEvqQoEjjRDHZuX_TauXvKLGScZlHRGKCQgMxeQAivAkvZTB_XOklrxpPviWtnkEsnONJoRCWXMZIYHtoyZtWEGYyNvMZgTNaagLcGZQFRVbbIpCwzqtzRDPJVioHgYqnUjDrxKGXMXZolAds_yxzgzZttIhdnMUsvezMCaSkw
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int *piVar1;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  piStack_24 = (int *)*param_3;
  *param_3 = 0;
  piStack_28 = (int *)*param_4;
  *param_4 = 0;
  piStack_2c = (int *)*param_5;
  *param_5 = 0;
  piStack_30 = (int *)*param_6;
  *param_6 = 0;
  piStack_34 = (int *)*param_7;
  *param_7 = 0;
  thunk_ROzDOhvfjKSbpukJdDzfsDlCQTXjFbdWuaUKphYSTsRYmgMadP_WwQyJTsgjvWzwQMKH_kvmjVtIEllYqdEfyeuCgUX_nwscmOZoofKLUstXpHjDlFsAIsjOdsAgDxKkIyWgUzfupAwgzbIcnCugloQRSiqCOROpEwVwImioYMrAjhlsKUvECKKLyLzWfYEyCDbikvrQbNtwCz_dDzDdDKBRUNYptILPDtOSsFoNcWDrmxIymxjEyLaREfEPAuTeICBBPY
            (param_1,param_2,&piStack_24,&piStack_28,&piStack_2c,&piStack_30,&piStack_34);
  piVar1 = piStack_34;
  piStack_34 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  if (piStack_30 != (int *)0x0) {
    (**(code **)(*piStack_30 + 4))();
  }
  piVar1 = piStack_2c;
  piStack_2c = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = piStack_28;
  piStack_28 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  piVar1 = piStack_24;
  piStack_24 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  param_1[0x10c] = 0;
  *param_1 = &DAT_70b13014;
  return param_1;
}


// =========================================================================
// Function: thunk_ROzDOhvfjKSbpukJdDzfsDlCQTXjFbdWuaUKphYSTsRYmgMadP_WwQyJTsgjvWzwQMKH_kvmjVtIEllYqdEfyeuCgUX_nwscmOZoofKLUstXpHjDlFsAIsjOdsAgDxKkIyWgUzfupAwgzbIcnCugloQRSiqCOROpEwVwImioYMrAjhlsKUvECKKLyLzWfYEyCDbikvrQbNtwCz_dDzDdDKBRUNYptILPDtOSsFoNcWDrmxIymxjEyLaREfEPAuTeICBBPY
// Entry: 0x71e08890 | Size: 1 bytes
// =========================================================================

int * thunk_ROzDOhvfjKSbpukJdDzfsDlCQTXjFbdWuaUKphYSTsRYmgMadP_WwQyJTsgjvWzwQMKH_kvmjVtIEllYqdEfyeuCgUX_nwscmOZoofKLUstXpHjDlFsAIsjOdsAgDxKkIyWgUzfupAwgzbIcnCugloQRSiqCOROpEwVwImioYMrAjhlsKUvECKKLyLzWfYEyCDbikvrQbNtwCz_dDzDdDKBRUNYptILPDtOSsFoNcWDrmxIymxjEyLaREfEPAuTeICBBPY
                (int *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,int *param_6
                ,int *param_7)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  *param_1 = (int)&DAT_70b130b8;
  iVar4 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_712047e8);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_712047e8 = DAT_712047e8 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(iVar4);
  param_1[1] = iVar4;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_Aec3SetupSpecificDefaultC_7006bb46,0x37);
  uVar14 = uStack_28;
  bVar3 = abStack_30[0];
  uVar8 = uStack_2c;
  uVar11 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar11 = (uint)abStack_30 | 1;
    uVar8 = (uint)(abStack_30[0] >> 1);
  }
  uVar19 = uVar11 + uVar8;
  uVar5 = uVar11;
  while (((uVar12 = uVar19, 6 < (int)uVar8 && (uVar5 = imp_memchr(uVar5,0x45,uVar8 - 6), uVar5 != 0)
          ) && (iVar4 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar12 = uVar5, iVar4 != 0))) {
    uVar5 = uVar5 + 1;
    uVar8 = uVar19 - uVar5;
  }
  if ((bVar3 & 1) != 0) {
    thunk_qNQrlu(uVar14);
  }
  *(bool *)(param_1 + 2) = uVar12 == uVar19 || uVar12 != uVar11;
  param_1[4] = 0;
  param_1[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[9] = 0;
  param_1[8] = 0;
  iVar4 = thunk_MwhHq(0x4b0);
  iVar9 = 0;
  param_1[7] = iVar4;
  param_1[8] = iVar4;
  param_1[9] = iVar4 + 0x4b0;
  do {
    puVar10 = (undefined4 *)(iVar4 + iVar9);
    *puVar10 = 0;
    iVar9 = iVar9 + 0xc;
    puVar10[1] = 0;
  } while (iVar9 != 0x4b0);
  param_1[8] = iVar4 + 0x4b0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0xd] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0xe] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0xf] = 0;
  iVar4 = thunk_MwhHq(0x4b0);
  iVar9 = 0;
  param_1[0xe] = iVar4;
  param_1[0xf] = iVar4;
  param_1[0x10] = iVar4 + 0x4b0;
  do {
    puVar10 = (undefined4 *)(iVar4 + iVar9);
    *puVar10 = 0;
    iVar9 = iVar9 + 0xc;
    puVar10[1] = 0;
  } while (iVar9 != 0x4b0);
  param_1[0xf] = iVar4 + 0x4b0;
  thunk_Ks_fcsJHkEbRJtRwIbCQUjPmeNFeIsuyZNlWJTcsukcWhDJvKyVIGKIwSNYxXFkUNnCGiWpAhrtbuFuKFburSGdQWCbdVQUSvLqZBgFRzXcRvkuMwUrmrrGVxxZqVvbHAcevkiUkRgEqfMxODkirMxqEMBAJnGlcOWdBxlYNzywuWcgdvCgFhgnYkGKyHSTSCQAWLSNRs_RLIzrrMx
            (param_1 + 0x11,param_1 + 3);
  thunk_Ks_fcsJHkEbRJtRwIbCQUjPmeNFeIsuyZNlWJTcsukcWhDJvKyVIGKIwSNYxXFkUNnCGiWpAhrtbuFuKFburSGdQWCbdVQUSvLqZBgFRzXcRvkuMwUrmrrGVxxZqVvbHAcevkiUkRgEqfMxODkirMxqEMBAJnGlcOWdBxlYNzywuWcgdvCgFhgnYkGKyHSTSCQAWLSNRs_RLIzrrMx
            (param_1 + 0x12,param_1 + 10);
  iVar4 = *param_5;
  *param_5 = 0;
  param_1[0x13] = iVar4;
  param_1[0x14] = 0;
  thunk_uNyeJTWoEfWxVakUobYwjgqbKiHVPnwgy(param_1 + 0x15);
  imp_pthread_mutexattr_init(abStack_30);
  imp_pthread_mutex_init(param_1 + 0x22,abStack_30);
  imp_pthread_mutexattr_destroy(abStack_30);
  imp_pthread_mutexattr_init(abStack_30);
  imp_pthread_mutex_init(param_1 + 0x23,abStack_30);
  imp_pthread_mutexattr_destroy(abStack_30);
  imp___aeabi_memcpy4(param_1 + 0x24,param_2,0xb0);
  thunk_bARpACMlVFMKQDxPWbxttPsFHhXShMOkgGatfvNeMusTSW_bZKpLds
            (param_1 + 0x50,*param_3 != 0,*param_4 != 0,*param_7 != 0);
  iVar4 = *param_3;
  *param_3 = 0;
  iVar9 = *param_4;
  *param_4 = 0;
  iVar16 = *param_6;
  *param_6 = 0;
  param_1[0x5f] = 16000;
  param_1[0x60] = 1;
  param_1[0x61] = 0xa0;
  param_1[0x62] = 16000;
  param_1[99] = 1;
  param_1[100] = 0xa0;
  param_1[0x65] = 16000;
  param_1[0x66] = 1;
  iVar13 = *param_7;
  param_1[0x67] = 0xa0;
  param_1[0x68] = 16000;
  param_1[0x69] = 1;
  param_1[0x6a] = 0xa0;
  *param_7 = 0;
  param_1[0x53] = iVar16;
  param_1[0x54] = iVar4;
  param_1[0x55] = iVar9;
  param_1[0x56] = iVar13;
  param_1[0x6c] = 1;
  param_1[0x6d] = 0xa0;
  param_1[0x57] = 0;
  param_1[0x58] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x59] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x5a] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0x5b] = 0;
  param_1[0x5c] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x5d] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x5e] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0x6b] = 16000;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_ApmExperimentalMultiChann_70065610,0x32);
  uVar14 = uStack_28;
  bVar3 = abStack_30[0];
  uVar8 = uStack_2c;
  uVar11 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar11 = (uint)abStack_30 | 1;
    uVar8 = (uint)(abStack_30[0] >> 1);
  }
  uVar19 = uVar11 + uVar8;
  uVar5 = uVar11;
  while (((uVar12 = uVar19, 6 < (int)uVar8 && (uVar5 = imp_memchr(uVar5,0x45,uVar8 - 6), uVar5 != 0)
          ) && (iVar4 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar12 = uVar5, iVar4 != 0))) {
    uVar5 = uVar5 + 1;
    uVar8 = uVar19 - uVar5;
  }
  if ((bVar3 & 1) != 0) {
    thunk_qNQrlu(uVar14);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_ApmExperimentalMultiChann_7006baec,0x33);
  uVar5 = uStack_28;
  bVar3 = abStack_30[0];
  uVar8 = uStack_2c;
  uVar14 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar14 = (uint)abStack_30 | 1;
    uVar8 = (uint)(abStack_30[0] >> 1);
  }
  uVar17 = uVar14 + uVar8;
  uVar6 = uVar14;
  while (((uVar18 = uVar17, 6 < (int)uVar8 && (uVar6 = imp_memchr(uVar6,0x45,uVar8 - 6), uVar6 != 0)
          ) && (iVar4 = imp_memcmp(uVar6,s_Enabled_7006820b,7), uVar18 = uVar6, iVar4 != 0))) {
    uVar6 = uVar6 + 1;
    uVar8 = uVar17 - uVar6;
  }
  if ((bVar3 & 1) != 0) {
    thunk_qNQrlu(uVar5);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_FullBandHpfKillSwitch_70070414,0x1c);
  uVar6 = uStack_28;
  bVar3 = abStack_30[0];
  uVar8 = uStack_2c;
  uVar5 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar5 = (uint)abStack_30 | 1;
    uVar8 = (uint)(abStack_30[0] >> 1);
  }
  uVar20 = uVar5 + uVar8;
  uVar7 = uVar5;
  while (((uVar2 = uVar20, 6 < (int)uVar8 && (uVar7 = imp_memchr(uVar7,0x45,uVar8 - 6), uVar7 != 0))
         && (iVar4 = imp_memcmp(uVar7,s_Enabled_7006820b,7), uVar2 = uVar7, iVar4 != 0))) {
    uVar7 = uVar7 + 1;
    uVar8 = uVar20 - uVar7;
  }
  if ((bVar3 & 1) != 0) {
    thunk_qNQrlu(uVar6);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_MutedStateKillSwitch_700724fc,0x1b);
  uVar6 = uStack_28;
  bVar3 = abStack_30[0];
  uVar8 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar8 = (uint)abStack_30 | 1;
    uStack_2c = (uint)(abStack_30[0] >> 1);
  }
  uVar21 = uVar8 + uStack_2c;
  uVar7 = uVar8;
  while (((uVar15 = uVar21, 6 < (int)uStack_2c &&
          (uVar7 = imp_memchr(uVar7,0x45,uStack_2c - 6), uVar7 != 0)) &&
         (iVar4 = imp_memcmp(uVar7,s_Enabled_7006820b,7), uVar15 = uVar7, iVar4 != 0))) {
    uVar7 = uVar7 + 1;
    uStack_2c = uVar21 - uVar7;
  }
  if ((bVar3 & 1) != 0) {
    thunk_qNQrlu(uVar6);
  }
  *(bool *)(param_1 + 0x6e) = uVar12 == uVar19 || uVar12 != uVar11;
  *(bool *)((int)param_1 + 0x1ba) = uVar2 != uVar20 && uVar2 == uVar5;
  *(bool *)((int)param_1 + 0x1b9) = uVar18 == uVar17 || uVar18 != uVar14;
  *(bool *)((int)param_1 + 0x1bb) = uVar15 == uVar21 || uVar15 != uVar8;
  thunk_gYmxXaDSrtIEDHNXUaXZI_YwkjStHcYutESos_JjxJGXqsBcmJjB(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa2] = 0;
  param_1[0x9e] = 16000;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0xa0;
  param_1[0xa1] = 16000;
  thunk_NR_GfEnnKlNGUZAlLDLB_KPBCJzBmM_CagHLEzriinZYQM_fTkf(param_1 + 0xa4);
  thunk_AdHcupeEPLWgs_hIXsdhElpBUnmiWBU_sSszJyTwFkCkgUdQMTdGp(param_1 + 0xa6);
  iVar4 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar9 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar13 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0xcc] = 0;
  param_1[0xcd] = iVar4;
  param_1[0xce] = iVar9;
  param_1[0xcf] = iVar13;
  param_1[0xd0] = 0;
  param_1[0xd1] = iVar4;
  param_1[0xd2] = iVar9;
  param_1[0xd3] = iVar13;
  param_1[0xd4] = 0;
  param_1[0xd5] = iVar4;
  param_1[0xd6] = iVar9;
  param_1[0xd7] = iVar13;
  param_1[0xd8] = 0;
  param_1[0xd9] = iVar4;
  param_1[0xda] = iVar9;
  param_1[0xdb] = iVar13;
  param_1[0xdc] = 0;
  param_1[0xdd] = iVar4;
  param_1[0xde] = iVar9;
  param_1[0xdf] = iVar13;
  thunk_ZLJEmOHCbBpQaNrLtDrCIcJ(param_1 + 0xe0);
  thunk_ZLJEmOHCbBpQaNrLtDrCIcJ(param_1 + 0xe5);
  param_1[0xea] = 0;
  thunk_hfXeRIcZlTcpPxeBtFYPyYVHg_wdHScSRTIbMMisTMcpdjYALNrUkSshlnJow(param_1 + 0xeb,0);
  thunk_hfXeRIcZlTcpPxeBtFYPyYVHg_wdHScSRTIbMMisTMcpdjYALNrUkSshlnJow(param_1 + 0xfa,1);
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar4 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_7009102d,s_____webrtc_apm_src_webrtc_module_70067025,0xe71,
               s_Injected_APM_submodules__Echo_co_7006a5a7,param_1[0x13] != 0,
               s_Echo_detector__7006ca2b,param_1[0x53] != 0,s_Capture_analyzer__7006a5d7,
               param_1[0x56] != 0,s_Capture_post_processor__700640f9,param_1[0x54] != 0,
               s_Render_pre_processor__700681d4,param_1[0x55] != 0);
  }
  iVar4 = thunk_eZPl_KCpCFLvGxTwlIF_qyfuUYxgldRryPtDZzQEcRU();
  if ((iVar4 == 0) &&
     (iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD(), iVar4 == 0)) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70067025,0xec1,
               s_Denormal_disabler_unsupported_700667da);
  }
  iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar4 == 0) {
    thunk_TvdgrcLmvVFIqGUtr_dtGKcpGswciZLMGZFrlpQTHYuLPR(abStack_30,param_1 + 0x24);
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_7009103c,s_____webrtc_apm_src_webrtc_module_70067025,0xed9,
               s_AudioProcessing__70071315,abStack_30);
    if ((abStack_30[0] & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
  }
  *(bool *)(param_1 + 0xa3) = param_1[0x13] != 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  return param_1;
}


// =========================================================================
// Function: thunk_zdqNmTfRghbRptbHZDZwFHQsyvAUIVeDtvG
// Entry: 0x71e088a0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_zdqNmTfRghbRptbHZDZwFHQsyvAUIVeDtvG(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[0x10b];
  *param_1 = &DAT_70b130b8;
  param_1[0x10b] = 0;
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 0x10);
    if (piVar4 != (int *)0x0) {
      piVar2 = *(int **)(iVar3 + 0x14);
      piVar1 = piVar4;
      if (piVar2 != piVar4) {
        do {
          piVar1 = piVar2 + -3;
          if (*piVar1 != 0) {
            piVar2[-2] = *piVar1;
            thunk_qNQrlu();
          }
          piVar2 = piVar1;
        } while (piVar1 != piVar4);
        piVar1 = *(int **)(iVar3 + 0x10);
      }
      *(int **)(iVar3 + 0x14) = piVar4;
      thunk_qNQrlu(piVar1);
    }
    thunk_qNQrlu(iVar3);
  }
  iVar3 = param_1[0x10a];
  param_1[0x10a] = 0;
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 0x10);
    if (piVar4 != (int *)0x0) {
      piVar2 = *(int **)(iVar3 + 0x14);
      piVar1 = piVar4;
      if (piVar2 != piVar4) {
        do {
          piVar1 = piVar2 + -3;
          if (*piVar1 != 0) {
            piVar2[-2] = *piVar1;
            thunk_qNQrlu();
          }
          piVar2 = piVar1;
        } while (piVar1 != piVar4);
        piVar1 = *(int **)(iVar3 + 0x10);
      }
      *(int **)(iVar3 + 0x14) = piVar4;
      thunk_qNQrlu(piVar1);
    }
    thunk_qNQrlu(iVar3);
  }
  iVar3 = param_1[0x109];
  param_1[0x109] = 0;
  if (iVar3 != 0) {
    piVar4 = *(int **)(iVar3 + 0x10);
    if (piVar4 != (int *)0x0) {
      piVar2 = *(int **)(iVar3 + 0x14);
      piVar1 = piVar4;
      if (piVar2 != piVar4) {
        do {
          piVar1 = piVar2 + -3;
          if (*piVar1 != 0) {
            piVar2[-2] = *piVar1;
            thunk_qNQrlu();
          }
          piVar2 = piVar1;
        } while (piVar1 != piVar4);
        piVar1 = *(int **)(iVar3 + 0x10);
      }
      *(int **)(iVar3 + 0x14) = piVar4;
      thunk_qNQrlu(piVar1);
    }
    thunk_qNQrlu(iVar3);
  }
  thunk_RBEmiQLSlaFHoTAbAZaDKpEXmqMhyczkNqdHYOqN(param_1 + 0xfa);
  thunk_RBEmiQLSlaFHoTAbAZaDKpEXmqMhyczkNqdHYOqN(param_1 + 0xeb);
  thunk_jxSpON_bAuTQBgkwrPcTZBS(param_1 + 0xe5);
  thunk_jxSpON_bAuTQBgkwrPcTZBS(param_1 + 0xe0);
  if (param_1[0xdd] != 0) {
    param_1[0xde] = param_1[0xdd];
    thunk_qNQrlu();
  }
  if (param_1[0xda] != 0) {
    param_1[0xdb] = param_1[0xda];
    thunk_qNQrlu();
  }
  if (param_1[0xd6] != 0) {
    param_1[0xd7] = param_1[0xd6];
    thunk_qNQrlu();
  }
  if (param_1[0xd3] != 0) {
    param_1[0xd4] = param_1[0xd3];
    thunk_qNQrlu();
  }
  if (param_1[0xcf] != 0) {
    param_1[0xd0] = param_1[0xcf];
    thunk_qNQrlu();
  }
  if (param_1[0xcc] != 0) {
    param_1[0xcd] = param_1[0xcc];
    thunk_qNQrlu();
  }
  thunk_hEDzzHllCaqbFczqTPgMHkUSPCyPhvwPKMnkBkfPgMJlZVnIiZRxu(param_1 + 0xa6);
  thunk_GPzXWunqyIbDxIFRjilLenBqrHWMBtrUQUqDpNrnJcoXj_qIdTN(param_1 + 0xa4);
  thunk_DhQ_T_CEnPfpMgwPwJGUvpruNwqyBgcqyhFIASNoxzdMmTSFQSfE(param_1 + 0x70);
  thunk_kENfZWNvVZbaeRiKndmjHHUMQRgyoLhLOrdOfqFqlbdDCXi(param_1 + 0x53);
  imp_pthread_mutex_destroy(param_1 + 0x23);
  imp_pthread_mutex_destroy(param_1 + 0x22);
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    thunk_qNQrlu(param_1[0x21]);
  }
  piVar4 = (int *)param_1[0x14];
  param_1[0x14] = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  piVar4 = (int *)param_1[0x13];
  param_1[0x13] = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  thunk_JTfYXZOWaTJjtJlrmLexyExADICLUOJKIZVTWBralwqNhkmsTbfRyVvhbHn(param_1 + 0x12);
  thunk_JTfYXZOWaTJjtJlrmLexyExADICLUOJKIZVTWBralwqNhkmsTbfRyVvhbHn(param_1 + 0x11);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    thunk_qNQrlu();
  }
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    thunk_qNQrlu();
  }
  iVar3 = param_1[1];
  param_1[1] = 0;
  if (iVar3 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_tQneWSxwhApJbFRcOM_bBphRKZpIXDLBzdPOj_SdcubbcwdQPsoByJjHXevrzVbnnk
// Entry: 0x71e088b0 | Size: 1 bytes
// =========================================================================

void thunk_tQneWSxwhApJbFRcOM_bBphRKZpIXDLBzdPOj_SdcubbcwdQPsoByJjHXevrzVbnnk
               (undefined4 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_90 [112];
  
  imp_pthread_mutex_lock(param_2);
  iVar3 = param_2 + 8;
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 0x84) != 0) {
    iVar4 = *(int *)(param_2 + 0x80);
    iVar5 = *(int *)(param_2 + 0x88);
    thunk_pInbzRrGSGTHihgfDyxVOztRLpEODPiPEqSZRcgw(auStack_90,iVar3);
    piVar2 = (int *)(param_2 + 0x84);
    iVar5 = iVar5 + iVar4 * 0x70;
    imp___aeabi_memcpy8(iVar3,iVar5,0x70);
    imp___aeabi_memcpy8(iVar5,auStack_90,0x70);
    thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(auStack_90);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
    iVar4 = *(int *)(param_2 + 0x80) + 1;
    *(int *)(param_2 + 0x80) = iVar4;
    if (iVar4 == (*(int *)(param_2 + 0x8c) - *(int *)(param_2 + 0x88) >> 4) * -0x49249249) {
      *(undefined4 *)(param_2 + 0x80) = 0;
    }
  }
  thunk_pInbzRrGSGTHihgfDyxVOztRLpEODPiPEqSZRcgw(param_1,iVar3);
  imp_pthread_mutex_unlock(param_2);
  return;
}


// =========================================================================
// Function: thunk_dweKWzJgHffIolIwVpNgT_OQMpPie
// Entry: 0x71e088c0 | Size: 1 bytes
// =========================================================================

void thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(void)

{
  return;
}


// =========================================================================
// Function: thunk_Ks_fcsJHkEbRJtRwIbCQUjPmeNFeIsuyZNlWJTcsukcWhDJvKyVIGKIwSNYxXFkUNnCGiWpAhrtbuFuKFburSGdQWCbdVQUSvLqZBgFRzXcRvkuMwUrmrrGVxxZqVvbHAcevkiUkRgEqfMxODkirMxqEMBAJnGlcOWdBxlYNzywuWcgdvCgFhgnYkGKyHSTSCQAWLSNRs_RLIzrrMx
// Entry: 0x71e088d0 | Size: 1 bytes
// =========================================================================

void thunk_Ks_fcsJHkEbRJtRwIbCQUjPmeNFeIsuyZNlWJTcsukcWhDJvKyVIGKIwSNYxXFkUNnCGiWpAhrtbuFuKFburSGdQWCbdVQUSvLqZBgFRzXcRvkuMwUrmrrGVxxZqVvbHAcevkiUkRgEqfMxODkirMxqEMBAJnGlcOWdBxlYNzywuWcgdvCgFhgnYkGKyHSTSCQAWLSNRs_RLIzrrMx
               (undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: thunk_uNyeJTWoEfWxVakUobYwjgqbKiHVPnwgy
// Entry: 0x71e088e0 | Size: 1 bytes
// =========================================================================

void thunk_uNyeJTWoEfWxVakUobYwjgqbKiHVPnwgy(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x17) = 0;
  *(undefined4 *)((int)param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[9] = 0x3f800000;
  return;
}


// =========================================================================
// Function: thunk_bARpACMlVFMKQDxPWbxttPsFHhXShMOkgGatfvNeMusTSW_bZKpLds
// Entry: 0x71e088f0 | Size: 1 bytes
// =========================================================================

void thunk_bARpACMlVFMKQDxPWbxttPsFHhXShMOkgGatfvNeMusTSW_bZKpLds
               (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 1;
  return;
}


// =========================================================================
// Function: thunk_gYmxXaDSrtIEDHNXUaXZI_YwkjStHcYutESos_JjxJGXqsBcmJjB
// Entry: 0x71e08900 | Size: 1 bytes
// =========================================================================

undefined2 * thunk_gYmxXaDSrtIEDHNXUaXZI_YwkjStHcYutESos_JjxJGXqsBcmJjB(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0x100;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 16000;
  *(undefined8 *)(param_1 + 0xc) = 0x3e80000000a0;
  *(undefined4 *)((int)param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  thunk_vdFTRO_jrXkskxwxDbslmzyuWrNrMGPwSBve(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  return param_1;
}


// =========================================================================
// Function: thunk_NR_GfEnnKlNGUZAlLDLB_KPBCJzBmM_CagHLEzriinZYQM_fTkf
// Entry: 0x71e08910 | Size: 1 bytes
// =========================================================================

void thunk_NR_GfEnnKlNGUZAlLDLB_KPBCJzBmM_CagHLEzriinZYQM_fTkf(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// =========================================================================
// Function: thunk_AdHcupeEPLWgs_hIXsdhElpBUnmiWBU_sSszJyTwFkCkgUdQMTdGp
// Entry: 0x71e08920 | Size: 1 bytes
// =========================================================================

int thunk_AdHcupeEPLWgs_hIXsdhElpBUnmiWBU_sSszJyTwFkCkgUdQMTdGp(int param_1)

{
  int iVar1;
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined1 uStack_1c;
  
  imp_pthread_mutexattr_init(auStack_24);
  imp_pthread_mutex_init(param_1,auStack_24);
  imp_pthread_mutexattr_destroy(auStack_24);
  thunk_vdFTRO_jrXkskxwxDbslmzyuWrNrMGPwSBve(param_1 + 8);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  uStack_1c = 0;
  iStack_20 = param_1 + 0x88;
  iVar1 = thunk_MwhHq(0x70);
  *(int *)(param_1 + 0x88) = iVar1;
  *(int *)(param_1 + 0x8c) = iVar1;
  *(int *)(param_1 + 0x90) = iVar1 + 0x70;
  thunk_vdFTRO_jrXkskxwxDbslmzyuWrNrMGPwSBve();
  *(int *)(param_1 + 0x8c) = iVar1 + 0x70;
  return param_1;
}


// =========================================================================
// Function: thunk_ZLJEmOHCbBpQaNrLtDrCIcJ
// Entry: 0x71e08930 | Size: 1 bytes
// =========================================================================

void thunk_ZLJEmOHCbBpQaNrLtDrCIcJ(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  return;
}


// =========================================================================
// Function: thunk_jxSpON_bAuTQBgkwrPcTZBS
// Entry: 0x71e08940 | Size: 1 bytes
// =========================================================================

void thunk_jxSpON_bAuTQBgkwrPcTZBS(void)

{
  return;
}


// =========================================================================
// Function: thunk_hEDzzHllCaqbFczqTPgMHkUSPCyPhvwPKMnkBkfPgMJlZVnIiZRxu
// Entry: 0x71e08950 | Size: 1 bytes
// =========================================================================

int thunk_hEDzzHllCaqbFczqTPgMHkUSPCyPhvwPKMnkBkfPgMJlZVnIiZRxu(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(iVar1 + -0x70);
      } while (iVar1 != iVar3);
      iVar2 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x8c) = iVar3;
    thunk_qNQrlu(iVar2);
  }
  thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(param_1 + 8);
  imp_pthread_mutex_destroy(param_1);
  return param_1;
}


// =========================================================================
// Function: thunk_GPzXWunqyIbDxIFRjilLenBqrHWMBtrUQUqDpNrnJcoXj_qIdTN
// Entry: 0x71e08960 | Size: 1 bytes
// =========================================================================

int * thunk_GPzXWunqyIbDxIFRjilLenBqrHWMBtrUQUqDpNrnJcoXj_qIdTN(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_DhQ_T_CEnPfpMgwPwJGUvpruNwqyBgcqyhFIASNoxzdMmTSFQSfE
// Entry: 0x71e08970 | Size: 1 bytes
// =========================================================================

int thunk_DhQ_T_CEnPfpMgwPwJGUvpruNwqyBgcqyhFIASNoxzdMmTSFQSfE(int param_1)

{
  int *piVar1;
  
  thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(param_1 + 0x30);
  piVar1 = *(int **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_kENfZWNvVZbaeRiKndmjHHUMQRgyoLhLOrdOfqFqlbdDCXi
// Entry: 0x71e08980 | Size: 1 bytes
// =========================================================================

int * thunk_kENfZWNvVZbaeRiKndmjHHUMQRgyoLhLOrdOfqFqlbdDCXi(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = param_1[10];
  param_1[10] = 0;
  if (iVar1 != 0) {
    thunk_HNJZxHbiUVbOOOIlHgzmHFvwkUBAsJk();
    thunk_qNQrlu();
  }
  iVar1 = param_1[9];
  param_1[9] = 0;
  if (iVar1 != 0) {
    thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx();
    thunk_qNQrlu();
  }
  piVar2 = (int *)param_1[8];
  param_1[8] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x24))();
  }
  iVar1 = param_1[7];
  param_1[7] = 0;
  if (iVar1 != 0) {
    thunk_jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW();
    thunk_qNQrlu();
  }
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    thunk_oTwKqdirFBVQKvzxBgAaDbykuyetpdt();
    thunk_qNQrlu();
  }
  piVar2 = (int *)param_1[5];
  param_1[5] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x3c))();
  }
  iVar1 = param_1[4];
  param_1[4] = 0;
  if (iVar1 != 0) {
    thunk__bXCCgOskaGhruNxJEhKsLJuQjJOzVlE();
    thunk_qNQrlu();
  }
  piVar2 = (int *)param_1[3];
  param_1[3] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  piVar2 = (int *)param_1[2];
  param_1[2] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  piVar2 = (int *)param_1[1];
  param_1[1] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_JTfYXZOWaTJjtJlrmLexyExADICLUOJKIZVTWBralwqNhkmsTbfRyVvhbHn
// Entry: 0x71e08990 | Size: 1 bytes
// =========================================================================

void thunk_JTfYXZOWaTJjtJlrmLexyExADICLUOJKIZVTWBralwqNhkmsTbfRyVvhbHn(void)

{
  return;
}


// =========================================================================
// Function: thunk_HNJZxHbiUVbOOOIlHgzmHFvwkUBAsJk
// Entry: 0x71e089a0 | Size: 1 bytes
// =========================================================================

int thunk_HNJZxHbiUVbOOOIlHgzmHFvwkUBAsJk(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 100);
  if (piVar3 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x68);
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar2 = *piVar4;
        *piVar4 = 0;
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x55fc) != 0) {
            *(int *)(iVar2 + 0x5600) = *(int *)(iVar2 + 0x55fc);
            thunk_qNQrlu();
          }
          thunk_qNQrlu(iVar2);
        }
      } while (piVar4 != piVar3);
      piVar1 = *(int **)(param_1 + 100);
    }
    *(int **)(param_1 + 0x68) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x4c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx
// Entry: 0x71e089b0 | Size: 1 bytes
// =========================================================================

int thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_1 + 0xc);
    puVar2 = puVar3;
    if (puVar4 != puVar3) {
      do {
        puVar4 = puVar4 + -1;
        puVar2 = (undefined4 *)*puVar4;
        *puVar4 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          thunk_yKVbdqLLmvptx_U(*puVar2);
          thunk_qNQrlu(puVar2);
        }
      } while (puVar4 != puVar3);
      puVar2 = *(undefined4 **)(param_1 + 8);
    }
    *(undefined4 **)(param_1 + 0xc) = puVar3;
    thunk_qNQrlu(puVar2);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW
// Entry: 0x71e089c0 | Size: 1 bytes
// =========================================================================

int thunk_jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 8);
    piVar2 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar1 = *piVar4;
        *piVar4 = 0;
        if (iVar1 != 0) {
          thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs();
          thunk_qNQrlu();
        }
      } while (piVar4 != piVar3);
      piVar2 = *(int **)(param_1 + 4);
    }
    *(int **)(param_1 + 8) = piVar3;
    thunk_qNQrlu(piVar2);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_oTwKqdirFBVQKvzxBgAaDbykuyetpdt
// Entry: 0x71e089d0 | Size: 1 bytes
// =========================================================================

int thunk_oTwKqdirFBVQKvzxBgAaDbykuyetpdt(int param_1)

{
  int iVar1;
  int *piVar2;
  
  thunk_UqLAomKxS_yDNrnnkveYjN(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  piVar2 = *(int **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (iVar1 != 0) {
    thunk_ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (iVar1 != 0) {
    thunk_rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh();
    thunk_qNQrlu();
  }
  piVar2 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX(param_1 + 3);
  return param_1;
}


// =========================================================================
// Function: thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX
// Entry: 0x71e089e0 | Size: 1 bytes
// =========================================================================

void thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX(void)

{
  return;
}


// =========================================================================
// Function: thunk_ODtsURDHjEkQOJbRINMYyhzRqh__A_TXnnPZg_pouUanDjLTyWByjlMRuZBojZWVaumrQVctCa
// Entry: 0x71e089f0 | Size: 1 bytes
// =========================================================================

void thunk_ODtsURDHjEkQOJbRINMYyhzRqh__A_TXnnPZg_pouUanDjLTyWByjlMRuZBojZWVaumrQVctCa
               (int *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  bVar11 = param_1[0x58] != 0;
  bVar12 = param_1[0x5d] != 0;
  cVar5 = (char)param_1[0x29];
  bVar13 = param_1[0x5c] != 0;
  cVar1 = (char)param_1[0xa3];
  cVar2 = (char)param_1[0x2e];
  cVar3 = *(char *)((int)param_1 + 0x143);
  bVar14 = (char)param_1[0x27] != '\0' || cVar5 != '\0';
  if (cVar3 == cVar2) {
    cVar9 = (char)param_1[0x51];
    if ((bool)cVar9 == bVar13) {
      cVar5 = *(char *)((int)param_1 + 0x145);
    }
    if ((bool)cVar9 != bVar13 || (bool)cVar5 != bVar12) goto LAB_71a6a4f4;
    cVar10 = *(char *)((int)param_1 + 0x146);
    if ((bool)cVar10 == bVar11) {
      cVar3 = *(char *)((int)param_1 + 0x147);
    }
    if ((bool)cVar10 != bVar11 || (bool)cVar3 != (param_1[0x59] != 0)) goto LAB_71a6a4f4;
    cVar3 = (char)param_1[0x52];
    bVar15 = (bool)cVar3 == bVar14;
    if (bVar15) {
      cVar3 = *(char *)((int)param_1 + 0x149);
    }
    if (!bVar15 || cVar3 != cVar1) goto LAB_71a6a4f4;
  }
  else {
LAB_71a6a4f4:
    *(char *)((int)param_1 + 0x149) = cVar1;
    *(bool *)(param_1 + 0x52) = bVar14;
    *(bool *)((int)param_1 + 0x147) = param_1[0x59] != 0;
    *(bool *)((int)param_1 + 0x146) = bVar11;
    *(bool *)((int)param_1 + 0x145) = bVar12;
    *(bool *)(param_1 + 0x51) = bVar13;
    *(char *)((int)param_1 + 0x143) = cVar2;
    cVar10 = bVar11;
    cVar5 = bVar12;
    cVar9 = bVar13;
  }
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  uVar16 = param_2[1];
  uVar17 = param_2[2];
  uVar18 = param_2[3];
  uVar19 = param_2[4];
  uVar20 = param_2[5];
  *(undefined8 *)(param_1 + 0x5f) = *param_2;
  *(undefined8 *)(param_1 + 0x61) = uVar16;
  *(undefined8 *)(param_1 + 99) = uVar17;
  *(undefined8 *)(param_1 + 0x65) = uVar18;
  *(undefined8 *)(param_1 + 0x67) = uVar19;
  *(undefined8 *)(param_1 + 0x69) = uVar20;
  uVar4 = 16000;
  uVar6 = param_1[0x5f];
  if (param_1[0x62] < param_1[0x5f]) {
    uVar6 = param_1[0x62];
  }
  if ((((cVar9 == '\0' && cVar5 == '\0') && cVar2 == '\0') && cVar10 == '\0') && cVar1 == '\0') {
    if (16000 < (int)uVar6) goto LAB_71a6a588;
  }
  else if ((16000 < (int)uVar6) && (uVar4 = 32000, param_1[0x24] != 32000)) {
LAB_71a6a588:
    uVar4 = 32000;
    if (32000 < uVar6) {
      uVar4 = 48000;
    }
  }
  param_1[0x9e] = uVar4;
  param_1[0x9f] = 0;
  param_1[0xa0] = (uint)((short)(uVar4 >> 2) * 0x147b) >> 0x11;
  uVar6 = uVar4;
  if (cVar1 == '\0') {
    uVar8 = param_1[0x65];
    if (param_1[0x68] < param_1[0x65]) {
      uVar8 = param_1[0x68];
    }
    uVar6 = 16000;
    if (((cVar9 == '\0' && cVar5 == '\0') && cVar2 == '\0') && cVar10 == '\0') {
      if ((int)uVar8 < 0x3e81) goto LAB_71a6a604;
    }
    else if (((int)uVar8 < 0x3e81) || (uVar6 = 32000, param_1[0x24] == 32000)) goto LAB_71a6a604;
    uVar6 = 32000;
    if (32000 < uVar8) {
      uVar6 = 48000;
    }
  }
LAB_71a6a604:
  if ((cVar9 == '\0' && cVar10 == '\0') && cVar1 == '\0') {
    uVar6 = param_1[0x65];
    uVar7 = param_1[0x66];
    uVar8 = (int)uVar6 / 100;
  }
  else {
    uVar7 = param_1[0x66];
    if ((char)param_1[0x6e] == '\0') {
      uVar7 = 1;
    }
    if ((char)param_1[0x25] == '\0') {
      uVar7 = 1;
    }
    uVar8 = (uint)((short)(uVar6 >> 2) * 0x147b) >> 0x11;
  }
  param_1[0x6b] = uVar6;
  param_1[0x6c] = uVar7;
  param_1[0x6d] = uVar8;
  if (uVar4 != 32000) {
    uVar7 = 48000;
  }
  uVar6 = 16000;
  if (uVar4 != 32000 && uVar4 != uVar7) {
    uVar6 = uVar4;
  }
  param_1[0xa1] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x71a6a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}


// =========================================================================
// Function: thunk_InvdWRnUzAkTSctn_ezBgtvkZaDuTfJvPyfajkhMYwixIElgAolYwzEvodPwXCpkqmQCdIW_HpQhJu
// Entry: 0x71e08a00 | Size: 1 bytes
// =========================================================================

void thunk_InvdWRnUzAkTSctn_ezBgtvkZaDuTfJvPyfajkhMYwixIElgAolYwzEvodPwXCpkqmQCdIW_HpQhJu
               (int param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_3 + 1);
  uVar5 = *param_3;
  uVar3 = *(undefined8 *)(param_1 + 0x17c);
  uStack_40._0_4_ = (int)uVar3;
  uStack_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *param_2;
  iStack_20 = *(int *)(param_2 + 1);
  if ((int)uStack_40 == *(int *)(param_1 + 0x17c)) {
    bVar2 = uStack_40._4_4_ == *(int *)(param_1 + 0x180);
    uStack_38._4_4_ = iStack_20;
    if (bVar2) {
      uStack_38._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x184) >> 0x20);
      uStack_40._4_4_ = *(int *)(param_1 + 0x188);
    }
    if (bVar2 && uStack_38._4_4_ == uStack_40._4_4_) {
      uStack_30._0_4_ = (int)*(undefined8 *)(param_1 + 0x18c);
      iVar1 = *(int *)(param_1 + 0x18c);
      bVar2 = (int)uStack_30 == iVar1;
      if (bVar2) {
        uStack_28._0_4_ = (int)uVar4;
        iVar1 = *(int *)(param_1 + 0x194);
        uStack_30._0_4_ = (int)uStack_28;
      }
      if (bVar2 && (int)uStack_30 == iVar1) {
        uStack_28._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
        iVar1 = *(int *)(param_1 + 0x198);
        bVar2 = uStack_28._4_4_ == iVar1;
        if (bVar2) {
          uStack_1c._0_4_ = (int)uVar5;
          iVar1 = *(int *)(param_1 + 0x1a0);
          uStack_28._4_4_ = (int)uStack_1c;
        }
        if ((bVar2 && uStack_28._4_4_ == iVar1) &&
           (uStack_1c._4_4_ = (int)((ulonglong)uVar5 >> 0x20),
           uStack_1c._4_4_ == *(int *)(param_1 + 0x1a4))) {
          return;
        }
      }
    }
  }
  uStack_40 = uVar3;
  uStack_38 = *(undefined8 *)(param_1 + 0x184);
  uStack_30 = *(undefined8 *)(param_1 + 0x18c);
  uStack_28 = uVar4;
  uStack_1c = uVar5;
  imp_pthread_mutex_lock(param_1 + 0x8c);
  thunk_ODtsURDHjEkQOJbRINMYyhzRqh__A_TXnnPZg_pouUanDjLTyWByjlMRuZBojZWVaumrQVctCa
            (param_1,&uStack_40);
  imp_pthread_mutex_unlock(param_1 + 0x8c);
  return;
}


// =========================================================================
// Function: thunk_NjmmZEncYCdCdODTqnNWLnUnJOWhfYkZJGfdXiHwBq_rDgJDfynLjW
// Entry: 0x71e08a10 | Size: 1 bytes
// =========================================================================

void thunk_NjmmZEncYCdCdODTqnNWLnUnJOWhfYkZJGfdXiHwBq_rDgJDfynLjW(int param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (*(uint *)(param_1 + 0x348) < 0xa0) {
    *(undefined4 *)(param_1 + 0x348) = 0xa0;
    iStack_24 = thunk_MwhHq(0x140);
    iVar8 = iStack_24 + 0x140;
    iStack_1c = iVar8;
    imp___aeabi_memclr(iStack_24,0x140);
    iStack_20 = iVar8;
    puVar2 = (undefined8 *)thunk_MwhHq(0x1c);
    *puVar2 = 0xa0;
    puVar2[1] = 0;
    FUN_71a76a74(puVar2 + 2,100,&iStack_24);
    iVar8 = *(int *)(param_1 + 0x428);
    *(undefined8 **)(param_1 + 0x428) = puVar2;
    if (iVar8 != 0) {
      piVar9 = *(int **)(iVar8 + 0x10);
      if (piVar9 != (int *)0x0) {
        piVar4 = *(int **)(iVar8 + 0x14);
        piVar3 = piVar9;
        if (piVar4 != piVar9) {
          do {
            piVar3 = piVar4 + -3;
            if (*piVar3 != 0) {
              piVar4[-2] = *piVar3;
              thunk_qNQrlu();
            }
            piVar4 = piVar3;
          } while (piVar3 != piVar9);
          piVar3 = *(int **)(iVar8 + 0x10);
        }
        *(int **)(iVar8 + 0x14) = piVar9;
        thunk_qNQrlu(piVar3);
      }
      thunk_qNQrlu(iVar8);
    }
    iVar8 = *(int *)(param_1 + 0x34c);
    uVar5 = *(uint *)(param_1 + 0x348);
    uVar7 = *(int *)(param_1 + 0x350) - iVar8 >> 1;
    if (uVar7 < uVar5) {
      FUN_71a76e98((int *)(param_1 + 0x34c),uVar5 - uVar7);
      uVar5 = *(uint *)(param_1 + 0x348);
    }
    else if (uVar5 < uVar7) {
      *(uint *)(param_1 + 0x350) = iVar8 + uVar5 * 2;
    }
    iVar8 = *(int *)(param_1 + 0x358);
    uVar7 = *(int *)(param_1 + 0x35c) - iVar8 >> 1;
    if (uVar7 < uVar5) {
      FUN_71a76e98((int *)(param_1 + 0x358),uVar5 - uVar7);
    }
    else if (uVar5 < uVar7) {
      *(uint *)(param_1 + 0x35c) = iVar8 + uVar5 * 2;
    }
    if (iStack_24 != 0) {
      iStack_20 = iStack_24;
      thunk_qNQrlu();
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x428);
    piVar9 = (int *)(iVar8 + 0xc);
    do {
      iVar6 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = 0;
    uVar7 = *(int *)(iVar8 + 8) + iVar6;
    *(uint *)(iVar8 + 8) = uVar7;
    iVar6 = *(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) >> 2;
    if ((uint)(iVar6 * -0x55555555) <= uVar7) {
      *(uint *)(iVar8 + 8) = uVar7 + iVar6 * 0x55555555;
    }
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    if (0xe < *(uint *)(param_1 + 0x364) >> 5) {
      iVar8 = *(int *)(param_1 + 0x42c);
      piVar9 = (int *)(iVar8 + 0xc);
      do {
        iVar6 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = 0;
      uVar7 = *(int *)(iVar8 + 8) + iVar6;
      *(uint *)(iVar8 + 8) = uVar7;
      iVar6 = *(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) >> 2;
      if ((uint)(iVar6 * -0x55555555) <= uVar7) {
        *(uint *)(iVar8 + 8) = uVar7 + iVar6 * 0x55555555;
      }
      return;
    }
    *(undefined4 *)(param_1 + 0x364) = 0x1e0;
    iStack_24 = thunk_MwhHq(0x780);
    iVar8 = iStack_24 + 0x780;
    iStack_1c = iVar8;
    imp___aeabi_memclr4(iStack_24,0x780);
    iStack_20 = iVar8;
    puVar2 = (undefined8 *)thunk_MwhHq(0x1c);
    *puVar2 = 0x1e0;
    puVar2[1] = 0;
    FUN_71a7706c(puVar2 + 2,100,&iStack_24);
    iVar8 = *(int *)(param_1 + 0x42c);
    *(undefined8 **)(param_1 + 0x42c) = puVar2;
    if (iVar8 != 0) {
      piVar9 = *(int **)(iVar8 + 0x10);
      if (piVar9 != (int *)0x0) {
        piVar4 = *(int **)(iVar8 + 0x14);
        piVar3 = piVar9;
        if (piVar4 != piVar9) {
          do {
            piVar3 = piVar4 + -3;
            if (*piVar3 != 0) {
              piVar4[-2] = *piVar3;
              thunk_qNQrlu();
            }
            piVar4 = piVar3;
          } while (piVar3 != piVar9);
          piVar3 = *(int **)(iVar8 + 0x10);
        }
        *(int **)(iVar8 + 0x14) = piVar9;
        thunk_qNQrlu(piVar3);
      }
      thunk_qNQrlu(iVar8);
    }
    iVar8 = *(int *)(param_1 + 0x368);
    uVar5 = *(uint *)(param_1 + 0x364);
    uVar7 = *(int *)(param_1 + 0x36c) - iVar8 >> 2;
    if (uVar7 < uVar5) {
      FUN_71a66dde((int *)(param_1 + 0x368),uVar5 - uVar7);
      uVar5 = *(uint *)(param_1 + 0x364);
    }
    else if (uVar5 < uVar7) {
      *(uint *)(param_1 + 0x36c) = iVar8 + uVar5 * 4;
    }
    iVar8 = *(int *)(param_1 + 0x374);
    uVar7 = *(int *)(param_1 + 0x378) - iVar8 >> 2;
    if (uVar7 < uVar5) {
      FUN_71a66dde((int *)(param_1 + 0x374),uVar5 - uVar7);
    }
    else if (uVar5 < uVar7) {
      *(uint *)(param_1 + 0x378) = iVar8 + uVar5 * 4;
    }
    if (iStack_24 != 0) {
      iStack_20 = iStack_24;
      thunk_qNQrlu();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_TMJqWBF_zhFEjvkwUeAWjUmvRIqPTWAcRwFLodpUDdsOhYI_JxGzrYrygMyh
// Entry: 0x71e08a20 | Size: 1 bytes
// =========================================================================

void thunk_TMJqWBF_zhFEjvkwUeAWjUmvRIqPTWAcRwFLodpUDdsOhYI_JxGzrYrygMyh(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  cVar1 = (char)param_1[0x34];
  if (((char)param_1[0x48] != '\0') && (*(char *)((int)param_1 + 0x121) != '\0' && cVar1 != '\0')) {
    if (((param_1[0x35] == 0) || ((char)param_1[0x39] != '\0')) &&
       (iVar3 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail(), iVar3 == 0)) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70091040,s_____webrtc_apm_src_webrtc_module_70067025,0x3dbb,
                 s_APM_configuration_not_valid__7006ca3c,s_Multiple_input_volume_controller_70064170
                );
    }
    cVar1 = (char)param_1[0x34];
  }
  if (cVar1 == '\0') {
    iVar3 = param_1[0x57];
    param_1[0x57] = 0;
    if (iVar3 != 0) {
      thunk__bXCCgOskaGhruNxJEhKsLJuQjJOzVlE();
      thunk_qNQrlu();
    }
    piVar4 = (int *)param_1[0x58];
    param_1[0x58] = 0;
    if (piVar4 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x71a6b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 0x3c))();
    return;
  }
  iVar3 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                    (s_WebRTC_Audio_GainController_Anal_700615d1,0x2a,2);
  if (iVar3 != 0) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(char)param_1[0x39]);
  }
  iVar3 = param_1[0x58];
  if (iVar3 == 0) {
    iVar3 = thunk_MwhHq(0x50);
    thunk_tIVXjuHkZlxBWDV_csnqsROpiAEuJpF();
    piVar4 = (int *)param_1[0x58];
    param_1[0x58] = iVar3;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x3c))();
      iVar3 = param_1[0x58];
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar6 = (**(code **)(*param_1 + 0x1c))(param_1);
  thunk_KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa(iVar3,uVar5,uVar6);
  if ((char)param_1[0x39] == '\0') {
    if (2 < (uint)param_1[0x35]) {
      thunk_KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj();
      thunk_qNQrlu(iVar3);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    (**(code **)(*(int *)param_1[0x58] + 8))();
    (**(code **)(*(int *)param_1[0x58] + 0x10))((int *)param_1[0x58],param_1[0x36]);
    (**(code **)(*(int *)param_1[0x58] + 0x18))((int *)param_1[0x58],param_1[0x37]);
    (**(code **)(*(int *)param_1[0x58] + 0x20))((int *)param_1[0x58],(char)param_1[0x38]);
    (**(code **)(*(int *)param_1[0x58] + 0x28))((int *)param_1[0x58],0,0xff);
    iVar3 = param_1[0x57];
    param_1[0x57] = 0;
    if (iVar3 == 0) {
      return;
    }
    thunk__bXCCgOskaGhruNxJEhKsLJuQjJOzVlE();
    thunk_qNQrlu();
    return;
  }
  uVar5 = 0xffffffff;
  bVar2 = false;
  if (param_1[0x57] != 0) {
    iVar8 = *(int *)(param_1[0x57] + 0x10);
    iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar7 = param_1[0x57];
    if (iVar8 == iVar3) goto LAB_71a6b2ac;
    if (iVar7 != 0) {
      uVar5 = *(undefined4 *)(iVar7 + 0x1c);
      bVar2 = true;
    }
  }
  iVar7 = thunk_MwhHq(0x5c);
  uVar6 = (**(code **)(*param_1 + 0x28))(param_1);
  thunk_OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
            (iVar7,uVar6,param_1 + 0x39);
  iVar3 = param_1[0x57];
  param_1[0x57] = iVar7;
  if (iVar3 != 0) {
    thunk__bXCCgOskaGhruNxJEhKsLJuQjJOzVlE();
    thunk_qNQrlu();
    iVar7 = param_1[0x57];
  }
  if (bVar2) {
    thunk_BTVheCKpcjkXJRjkjiQMgdnbRuTwknZzGhmniYwCKsAT_cOZCjLHXDN(iVar7,uVar5);
    iVar7 = param_1[0x57];
  }
LAB_71a6b2ac:
  thunk_ygQPLkDIQfoNYulaxVYohUbywiPybBPRmLnASW_aff(iVar7);
  thunk_EcvdTTVMkWxqvsrDrNzJnianzufJQHDSMrPuQdDlGKMXeeHVMUEIiCPjUVUcrZyUHTRFjVyFE
            (param_1[0x57],param_1[0x58]);
  thunk_FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW
            (param_1[0x57],*(undefined1 *)((int)param_1 + 0x1c1));
  return;
}


// =========================================================================
// Function: thunk_isEPCsCSFfEzzJAsKnqyYvQVGVBCUxftziohtYmWyTywwXCAnJBzRgWkd_Z
// Entry: 0x71e08a30 | Size: 1 bytes
// =========================================================================

void thunk_isEPCsCSFfEzzJAsKnqyYvQVGVBCUxftziohtYmWyTywwXCAnJBzRgWkd_Z(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar2 = 0;
  bVar7 = *(char *)((int)param_1 + 0xba) != '\0';
  cVar1 = '\0';
  if (bVar7) {
    cVar1 = *(char *)((int)param_1 + 0xbd);
  }
  if (bVar7 && cVar1 != '\0') {
    bVar2 = *(byte *)((int)param_1 + 0xbb) ^ 1;
  }
  if ((*(char *)((int)param_1 + 0x143) == '\0' && (char)param_1[0x51] == '\0') &&
     ((byte)(~bVar2 & (*(byte *)((int)param_1 + 0x145) ^ 1)) != 0)) {
    iVar6 = param_1[0x5a];
    param_1[0x5a] = 0;
  }
  else {
    if ((*(char *)((int)param_1 + 0xb9) == '\0') || (*(char *)((int)param_1 + 0x1ba) != '\0')) {
      iVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      iVar3 = 0x28;
    }
    else {
      if (param_1[0x72] == 0) {
        iVar6 = param_1[0x9e];
      }
      else {
        iVar6 = *(int *)(param_1[0x72] + 0xc) * 100;
      }
      iVar3 = 0x2c;
    }
    iVar3 = (**(code **)(*param_1 + iVar3))(param_1);
    piVar4 = (int *)param_1[0x5a];
    if (((piVar4 != (int *)0x0) && (iVar6 == *piVar4 && param_2 == 0)) &&
       (iVar3 == piVar4[2] - piVar4[1] >> 2)) {
      return;
    }
    iVar5 = thunk_MwhHq(0x10);
    thunk_pVcOMyRTcNgIUiYTKNy_MEsagFJjWds(iVar5,iVar6,iVar3);
    iVar6 = param_1[0x5a];
    param_1[0x5a] = iVar5;
  }
  if (iVar6 == 0) {
    return;
  }
  thunk_jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW();
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_kyKZhrvTVJ_IxUAAXxiRlNfSUbvKYrHetbpGfljCqJkIjwwCkgSUUTduXfl
// Entry: 0x71e08a40 | Size: 1 bytes
// =========================================================================

void thunk_kyKZhrvTVJ_IxUAAXxiRlNfSUbvKYrHetbpGfljCqJkIjwwCkgSUUTduXfl(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined1 auStack_5d4 [484];
  int *piStack_3f0;
  int *piStack_3ec;
  int iStack_3e8;
  char cStack_20c;
  undefined1 auStack_208 [488];
  
  puVar12 = (undefined4 *)param_1[0x13];
  if (puVar12 == (undefined4 *)0x0) {
    if ((*(char *)((int)param_1 + 0xba) == '\0') || (*(char *)((int)param_1 + 0xbb) != '\0')) {
      piVar5 = (int *)param_1[0x5b];
      param_1[0x5b] = 0;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x24))();
      }
      piVar5 = (int *)param_1[0x73];
      *(undefined1 *)(param_1 + 0xa3) = 0;
      param_1[0x73] = 0;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))();
      }
      if (*(char *)((int)param_1 + 0xba) == '\0') {
        iVar6 = param_1[0x5c];
        param_1[0x5c] = 0;
        if (iVar6 != 0) {
          thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx();
          thunk_qNQrlu();
        }
        iVar6 = param_1[0x109];
        param_1[0x109] = 0;
        if (iVar6 == 0) {
          return;
        }
        piVar5 = *(int **)(iVar6 + 0x10);
        if (piVar5 == (int *)0x0) goto LAB_71a6bb14;
        piVar7 = *(int **)(iVar6 + 0x14);
        piVar11 = piVar5;
        if (piVar7 != piVar5) {
          do {
            piVar10 = piVar7 + -3;
            if (*piVar10 != 0) {
              piVar7[-2] = *piVar10;
              thunk_qNQrlu();
            }
            piVar7 = piVar10;
          } while (piVar10 != piVar5);
LAB_71a6bb08:
          piVar5 = *(int **)(iVar6 + 0x10);
        }
      }
      else {
        if (*(char *)((int)param_1 + 0xbb) != '\0') {
          uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
          uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
          iVar6 = thunk_PXhgnbB_XsEgAtPgpTOJmLpuSwLxhBgnmPperHxCqzguguXEHmCOBbTHpPD(uVar2,uVar3);
          iStack_3e8 = 0;
          uVar13 = 1;
          piStack_3ec = (int *)0x0;
          piStack_3f0 = (int *)0x0;
          if (1 < (uint)(iVar6 * 0xa0)) {
            uVar13 = iVar6 * 0xa0;
          }
          if ((int)uVar13 < 0) {
            FUN_719fe110(&piStack_3f0);
            thunk_qNQrlu(uVar2);
            if (piStack_3f0 != (int *)0x0) {
              piStack_3ec = piStack_3f0;
              thunk_qNQrlu();
            }
                    /* WARNING: Subroutine does not return */
            thunk_NAUpeWJSovvMoxKm_();
          }
          iVar6 = uVar13 * 2;
          piVar5 = (int *)thunk_MwhHq(iVar6);
          iStack_3e8 = (int)piVar5 + uVar13 * 2;
          piStack_3f0 = piVar5;
          imp___aeabi_memclr(piVar5,iVar6);
          piStack_3ec = (int *)((int)piVar5 + iVar6);
          puVar8 = (uint *)thunk_MwhHq(0x1c);
          *puVar8 = uVar13;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          FUN_71a76a74(puVar8 + 4,100,&piStack_3f0);
          iVar6 = param_1[0x109];
          param_1[0x109] = (int)puVar8;
          if (iVar6 != 0) {
            piVar5 = *(int **)(iVar6 + 0x10);
            if (piVar5 != (int *)0x0) {
              piVar7 = *(int **)(iVar6 + 0x14);
              piVar11 = piVar5;
              if (piVar7 != piVar5) {
                do {
                  piVar11 = piVar7 + -3;
                  if (*piVar11 != 0) {
                    piVar7[-2] = *piVar11;
                    thunk_qNQrlu();
                  }
                  piVar7 = piVar11;
                } while (piVar11 != piVar5);
                piVar11 = *(int **)(iVar6 + 0x10);
              }
              *(int **)(iVar6 + 0x14) = piVar5;
              thunk_qNQrlu(piVar11);
            }
            thunk_qNQrlu(iVar6);
          }
          iVar6 = param_1[0xcc];
          uVar1 = param_1[0xcd] - iVar6 >> 1;
          if (uVar1 < uVar13) {
            FUN_71a76e98(param_1 + 0xcc,uVar13 - uVar1);
          }
          else if (uVar13 < uVar1) {
            param_1[0xcd] = iVar6 + uVar13 * 2;
          }
          iVar6 = param_1[0xcf];
          uVar1 = param_1[0xd0] - iVar6 >> 1;
          if (uVar1 < uVar13) {
            FUN_71a76e98(param_1 + 0xcf,uVar13 - uVar1);
          }
          else if (uVar13 < uVar1) {
            param_1[0xd0] = iVar6 + uVar13 * 2;
          }
          iVar6 = thunk_MwhHq(0x28);
          thunk_OBHnC_IspeRJMJhhD_hERj_euKYnudCuAfcfa();
          iVar9 = param_1[0x5c];
          param_1[0x5c] = iVar6;
          if (iVar9 != 0) {
            thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx();
            thunk_qNQrlu();
            iVar6 = param_1[0x5c];
          }
          uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
          uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
          uVar4 = (**(code **)(*param_1 + 0x2c))(param_1);
          thunk_jhSMgCojZhEcw_tOosMrcqBiyzZZmFEPNdcMmMHxzcEPmxvqe(iVar6,uVar2,uVar3,uVar4);
          piStack_3ec = piStack_3f0;
          piVar5 = piStack_3f0;
          if (piStack_3f0 == (int *)0x0) {
            return;
          }
          goto LAB_71a6b824;
        }
        iVar6 = param_1[0x5c];
        param_1[0x5c] = 0;
        if (iVar6 != 0) {
          thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx();
          thunk_qNQrlu();
        }
        iVar6 = param_1[0x109];
        param_1[0x109] = 0;
        if (iVar6 == 0) {
          return;
        }
        piVar5 = *(int **)(iVar6 + 0x10);
        if (piVar5 == (int *)0x0) goto LAB_71a6bb14;
        piVar7 = *(int **)(iVar6 + 0x14);
        piVar11 = piVar5;
        if (piVar7 != piVar5) {
          do {
            piVar10 = piVar7 + -3;
            if (*piVar10 != 0) {
              piVar7[-2] = *piVar10;
              thunk_qNQrlu();
            }
            piVar7 = piVar10;
          } while (piVar10 != piVar5);
          goto LAB_71a6bb08;
        }
      }
      *(int **)(iVar6 + 0x14) = piVar11;
      thunk_qNQrlu(piVar5);
LAB_71a6bb14:
      thunk_qNQrlu(iVar6);
      return;
    }
    thunk_oAgDAWoadRIMsEjYkUgbbGsVohHNiPUzyDCc(auStack_208);
    cStack_20c = '\0';
    piStack_3f0 = (int *)((uint)piStack_3f0 & 0xffffff00);
    if ((char)param_1[2] != '\0') {
      thunk_GXjAtSCeHcFOfpgFujSmeCDVlxyIYvKc_eLJcj_WyGygzXtFJEMBQYMfjSmTf(auStack_5d4);
      if (cStack_20c == '\0') {
        thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(&piStack_3f0,auStack_5d4);
        cStack_20c = '\x01';
      }
      else {
        thunk_ZXDoDoCzws_ZFpgJamPhgMZGre_BNbAnYsviCbfV(&piStack_3f0,auStack_5d4);
      }
    }
    uVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar6 = thunk_MwhHq(0x6f0);
    thunk__vvagmSgzWHPioCXTxjUUyDgg_LCYCoraZx_mycqltwHKAUNVmyXEFAlqDMfCqtXyQMkrrP_PZgdomtgWZEBevW
              (iVar6,auStack_208,&piStack_3f0,uVar2,uVar3,uVar4);
    piVar5 = (int *)param_1[0x5b];
    param_1[0x5b] = iVar6;
joined_r0x71a6bb00:
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x24))();
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)*puVar12)(&piStack_3f0,puVar12,uVar2,uVar3,uVar4);
    piVar5 = (int *)param_1[0x5b];
    param_1[0x5b] = (int)piStack_3f0;
    piStack_3f0 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x24))();
      piVar5 = piStack_3f0;
      piStack_3f0 = (int *)0x0;
      goto joined_r0x71a6bb00;
    }
  }
  if ((char)param_1[0x2f] == '\0') {
    piVar5 = (int *)param_1[0x73];
    param_1[0x73] = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar6 = thunk_MwhHq(0x54);
    thunk_PmlyVbduvpmUfTpqilVw_HhrkmYdQKHl(iVar6,16000,uVar2,16000,uVar3,16000,uVar4);
    piVar5 = (int *)param_1[0x73];
    param_1[0x73] = iVar6;
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  *(undefined1 *)(param_1 + 0xa3) = 1;
  iVar6 = param_1[0x5c];
  param_1[0x5c] = 0;
  if (iVar6 != 0) {
    thunk_fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx();
    thunk_qNQrlu();
  }
  piVar5 = (int *)param_1[0x109];
  param_1[0x109] = 0;
  if (piVar5 == (int *)0x0) {
    return;
  }
  piVar11 = (int *)piVar5[4];
  if (piVar11 != (int *)0x0) {
    piVar10 = (int *)piVar5[5];
    piVar7 = piVar11;
    if (piVar10 != piVar11) {
      do {
        piVar7 = piVar10 + -3;
        if (*piVar7 != 0) {
          piVar10[-2] = *piVar7;
          thunk_qNQrlu();
        }
        piVar10 = piVar7;
      } while (piVar7 != piVar11);
      piVar7 = (int *)piVar5[4];
    }
    piVar5[5] = (int)piVar11;
    thunk_qNQrlu(piVar7);
  }
LAB_71a6b824:
  thunk_qNQrlu(piVar5);
  return;
}


// =========================================================================
// Function: thunk_pvNSJbjKJnkdaPXlxlGKVxfwIDFjfRCUVnPO_bofmnANQHLbvFHHRWyRfmyg
// Entry: 0x71e08a50 | Size: 1 bytes
// =========================================================================

void thunk_pvNSJbjKJnkdaPXlxlGKVxfwIDFjfRCUVnPO_bofmnANQHLbvFHHRWyRfmyg(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r7;
  bool bVar4;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((char)param_1[0x48] == '\0') {
    iVar3 = param_1[0x59];
    param_1[0x59] = 0;
    if (iVar3 != 0) {
      thunk_oTwKqdirFBVQKvzxBgAaDbykuyetpdt();
      thunk_qNQrlu();
      return;
    }
  }
  else {
    uStack_30 = 0xffffffce;
    uStack_34 = 0xffffffe2;
    uStack_38 = 1;
    uStack_3c = 300;
    uStack_40 = 0x3dcccccd;
    uStack_44 = 0xf;
    uStack_48 = 0x46;
    uStack_24 = 0x3f19999a;
    bVar4 = param_1[0x72] == 0;
    iVar3 = 0;
    if (!bVar4) {
      iVar3 = *(int *)(param_1[0x72] + 0xc);
    }
    uStack_28 = 0x3f333333;
    if (bVar4) {
      unaff_r7 = param_1[0x9e];
    }
    uStack_2c = 100;
    if (!bVar4) {
      unaff_r7 = iVar3 * 100;
    }
    uStack_4c = 0x14;
    uVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
    iVar3 = thunk_MwhHq(0x868);
    thunk_laqXnoujKvCZbjDFev_mJWPLqWrgso_HQbJjvACihgMuyzBmBleNBdDZnEhoDnklhWXPdDiWlchuewEEVsTehWRfIxrXNRxJyTvnBdMaoUvgEiEdjHZz
              (iVar3,param_1 + 0x48,&uStack_4c,unaff_r7,uVar1,1);
    iVar2 = param_1[0x59];
    param_1[0x59] = iVar3;
    if (iVar2 != 0) {
      thunk_oTwKqdirFBVQKvzxBgAaDbykuyetpdt();
      thunk_qNQrlu();
      iVar3 = param_1[0x59];
    }
    thunk_qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo
              (iVar3,*(undefined1 *)((int)param_1 + 0x1c1));
  }
  return;
}


// =========================================================================
// Function: thunk_YoRnTOXvqzZoBpUumTmhmPMV_OkzbuDmZdaxQFGwAuCqwgtJVzchopuCwTHa
// Entry: 0x71e08a60 | Size: 1 bytes
// =========================================================================

void thunk_YoRnTOXvqzZoBpUumTmhmPMV_OkzbuDmZdaxQFGwAuCqwgtJVzchopuCwTHa(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_1c;
  
  iVar1 = param_1[0x5d];
  param_1[0x5d] = 0;
  if (iVar1 != 0) {
    thunk_HNJZxHbiUVbOOOIlHgzmHFvwkUBAsJk();
    thunk_qNQrlu();
  }
  if ((char)param_1[0x30] != '\0') {
    uStack_1c = param_1[0x31];
    if (3 < uStack_1c) {
      thunk_KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj();
      thunk_qNQrlu();
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    uVar2 = (**(code **)(*param_1 + 0x1c))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar1 = thunk_MwhHq(0x70);
    thunk_AyUpfSosCGkzwdwRoBQkysLTIzY_MXHCtJEdJvHyhxoFQrn(iVar1,&uStack_1c,uVar2,uVar3);
    iVar4 = param_1[0x5d];
    param_1[0x5d] = iVar1;
    if (iVar4 != 0) {
      thunk_HNJZxHbiUVbOOOIlHgzmHFvwkUBAsJk();
      thunk_qNQrlu();
    }
  }
  return;
}


// =========================================================================
// Function: thunk_vPIjKaTTFkGuVaogeqEWWrPzpO_pIz_rJWHXfXsPoalHYcarHcDJVHWYheOIAsTv_L
// Entry: 0x71e08a70 | Size: 1 bytes
// =========================================================================

void thunk_vPIjKaTTFkGuVaogeqEWWrPzpO_pIz_rJWHXfXsPoalHYcarHcDJVHWYheOIAsTv_L(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x9c) == '\0' && *(char *)(param_1 + 0xa4) == '\0') {
    iVar1 = *(int *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0xa8);
    fVar3 = *(float *)(param_1 + 0xa0);
    if (*(char *)(param_1 + 0xa4) == '\0') {
      fVar4 = 1.0;
    }
    if (*(char *)(param_1 + 0x9c) == '\0') {
      fVar3 = 1.0;
    }
    uVar2 = thunk_MwhHq(0x30);
    thunk_pAVebNlFSMSbixCUJGyCLgmILYIWNeAqkWMoWdWt
              (uVar2,*(undefined1 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),fVar3 * fVar4,
               *(undefined4 *)(param_1 + 0xac));
    iVar1 = *(int *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x178) = uVar2;
  }
  if (iVar1 != 0) {
    thunk_qNQrlu();
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_tIVXjuHkZlxBWDV_csnqsROpiAEuJpF
// Entry: 0x71e08a80 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_tIVXjuHkZlxBWDV_csnqsROpiAEuJpF(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_70b13840;
  uVar1 = thunk_MwhHq(1);
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar1,DAT_712048f4);
  param_1[6] = 3;
  param_1[4] = 0xff;
  param_1[7] = 9;
  param_1[10] = 0;
  param_1[0xb] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0xc] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0xd] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0x35) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)param_1 + 0x39) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)param_1 + 0x3d) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[1] = uVar1;
  return param_1;
}


// =========================================================================
// Function: thunk_KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa
// Entry: 0x71e08a90 | Size: 1 bytes
// =========================================================================

void thunk_KlXHqdldWMPYmknLmJhvP_CbBjxJXVOlUNjigsajAa(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  iVar6 = *(int *)(param_1 + 0x28);
  piVar7 = *(int **)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  uVar9 = (int)piVar7 - iVar6 >> 2;
  *(uint *)(param_1 + 0x40) = param_2;
  if (uVar9 < param_2) {
    FUN_71af61cc((int *)(param_1 + 0x28),param_2 - uVar9);
  }
  else if (param_2 < uVar9) {
    piVar8 = (int *)(iVar6 + param_2 * 4);
    while (piVar7 != piVar8) {
      piVar7 = piVar7 + -1;
      iVar6 = *piVar7;
      *piVar7 = 0;
      if (iVar6 != 0) {
        thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(*(undefined4 *)(iVar6 + 0x2c));
        thunk_qNQrlu(iVar6);
      }
    }
    *(int **)(param_1 + 0x2c) = piVar8;
  }
  iVar6 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x40);
  uVar9 = *(int *)(param_1 + 0x38) - iVar6 >> 2;
  if (uVar9 < uVar5) {
    FUN_71af6408((int *)(param_1 + 0x34),uVar5 - uVar9);
    iVar6 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) == iVar6) {
      return;
    }
  }
  else {
    if (uVar5 < uVar9) {
      *(uint *)(param_1 + 0x38) = iVar6 + uVar5 * 4;
    }
    iVar6 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) == iVar6) {
      return;
    }
  }
  uVar9 = 0;
  do {
    if (*(int *)(iVar6 + uVar9 * 4) == 0) {
      iVar3 = thunk_MwhHq(0x30);
      iVar4 = thunk_rSORcIvqrTcGgSKdWubshNQztkTsuH();
      *(int *)(iVar3 + 0x2c) = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_module_70067c09,0x4e,s_state_7006587f,&DAT_7009602d);
      }
      iVar4 = *(int *)(iVar6 + uVar9 * 4);
      *(int *)(iVar6 + uVar9 * 4) = iVar3;
      if (iVar4 != 0) {
        thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(*(undefined4 *)(iVar4 + 0x2c));
        thunk_qNQrlu(iVar4);
      }
    }
    uVar5 = 0xffffffff;
    if (*(uint *)(param_1 + 8) < 3) {
      uVar5 = *(uint *)(param_1 + 8) + 1;
    }
    thunk_gGMWhBzPQwqZHtAboZSSYkhOhldYhaGD_
              (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar9 * 4) + 0x2c),
               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),(int)(short)uVar5,
               *(undefined4 *)(param_1 + 0x48));
    iVar6 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar9 * 4) = *(undefined4 *)(param_1 + 0x20);
    uVar9 = uVar9 + 1;
  } while (uVar9 < (uint)(iVar3 - iVar6 >> 2));
  if (iVar3 != iVar6) {
    iVar3 = *(int *)(param_1 + 0x1c);
    uVar9 = 0;
    uVar2 = *(ushort *)(param_1 + 0x18);
    bVar1 = *(byte *)(param_1 + 0x14);
    do {
      uVar5 = uVar5 & 0xffff0000 | (uint)bVar1;
      thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                (*(undefined4 *)(*(int *)(iVar6 + uVar9 * 4) + 0x2c),(uint)uVar2 | iVar3 << 0x10,
                 uVar5);
      iVar6 = *(int *)(param_1 + 0x28);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(param_1 + 0x2c) - iVar6 >> 2));
  }
  return;
}


// =========================================================================
// Function: thunk_pVcOMyRTcNgIUiYTKNy_MEsagFJjWds
// Entry: 0x71e08aa0 | Size: 1 bytes
// =========================================================================

int * thunk_pVcOMyRTcNgIUiYTKNy_MEsagFJjWds(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  if (param_3 != 0) {
    FUN_71b09b5c(param_1 + 1,param_3);
    iVar5 = param_1[1];
    puVar4 = (undefined *)0x7009a388;
    if (*param_1 != 32000) {
      puVar4 = (undefined *)0x7009a374;
    }
    if (*param_1 == 48000) {
      puVar4 = &DAT_7009a39c;
    }
    if (param_1[2] != iVar5) {
      uVar3 = 0;
      do {
        uVar1 = thunk_MwhHq(0xc);
        thunk_YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD(uVar1,puVar4,1);
        iVar2 = *(int *)(iVar5 + uVar3 * 4);
        *(undefined4 *)(iVar5 + uVar3 * 4) = uVar1;
        if (iVar2 != 0) {
          thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs();
          thunk_qNQrlu();
        }
        iVar5 = param_1[1];
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)(param_1[2] - iVar5 >> 2));
    }
  }
  return param_1;
}


// =========================================================================
// Function: thunk_PXhgnbB_XsEgAtPgpTOJmLpuSwLxhBgnmPperHxCqzguguXEHmCOBbTHpPD
// Entry: 0x71e08ab0 | Size: 1 bytes
// =========================================================================

int thunk_PXhgnbB_XsEgAtPgpTOJmLpuSwLxhBgnmPperHxCqzguguXEHmCOBbTHpPD(int param_1,int param_2)

{
  return param_2 * param_1;
}


// =========================================================================
// Function: thunk_OBHnC_IspeRJMJhhD_hERj_euKYnudCuAfcfa
// Entry: 0x71e08ac0 | Size: 1 bytes
// =========================================================================

void thunk_OBHnC_IspeRJMJhhD_hERj_euKYnudCuAfcfa(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 3;
  param_1[2] = 0;
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)param_1 + 0x1d) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)param_1 + 0x21) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: thunk_jhSMgCojZhEcw_tOosMrcqBiyzZZmFEPNdcMmMHxzcEPmxvqe
// Entry: 0x71e08ad0 | Size: 1 bytes
// =========================================================================

void thunk_jhSMgCojZhEcw_tOosMrcqBiyzZZmFEPNdcMmMHxzcEPmxvqe
               (uint *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  iVar2 = (int)(uVar5 - uVar4) >> 6;
  uVar3 = iVar2 * -0x33333333;
  if (uVar3 < param_4) {
    FUN_71aeee2c(param_1 + 6,param_4 + iVar2 * 0x33333333);
    uVar4 = param_1[6];
    uVar5 = param_1[7];
    if (uVar4 == uVar5) goto LAB_71aee710;
  }
  else {
    if (param_4 < uVar3) {
      uVar5 = uVar4 + param_4 * 0x140;
      param_1[7] = uVar5;
    }
    if (uVar4 == uVar5) goto LAB_71aee710;
  }
  imp___aeabi_memclr(uVar4,(((uVar5 - uVar4) - 0x140) / 0x140) * 0x140 + 0x140);
LAB_71aee710:
  puVar1 = (undefined4 *)thunk_MwhHq(0xc);
  uVar5 = param_1[5];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  param_1[5] = (uint)puVar1;
  if (uVar5 != 0) {
    thunk_qNQrlu();
    param_3 = *(int *)(param_1[5] + 4);
    param_4 = *(uint *)(param_1[5] + 8);
  }
  param_4 = param_3 * param_4;
  puVar7 = param_1 + 2;
  puVar1 = (undefined4 *)param_1[3];
  uVar5 = (int)((int)puVar1 - *puVar7) >> 2;
  if (param_4 < uVar5 || param_4 - uVar5 == 0) {
    if (param_4 < uVar5) {
      puVar6 = (undefined4 *)(*puVar7 + param_4 * 4);
      while (puVar1 != puVar6) {
        puVar1 = puVar1 + -1;
        puVar9 = (undefined4 *)*puVar1;
        *puVar1 = 0;
        if (puVar9 != (undefined4 *)0x0) {
          thunk_yKVbdqLLmvptx_U(*puVar9);
          thunk_qNQrlu(puVar9);
        }
      }
      param_1[3] = (uint)puVar6;
      puVar1 = puVar6;
    }
  }
  else {
    FUN_71aef0f4(puVar7,param_4 - uVar5);
    puVar1 = (undefined4 *)param_1[3];
  }
  puVar6 = (undefined4 *)*puVar7;
  do {
    if (puVar6 == puVar1) {
      puVar1 = (undefined4 *)param_1[3];
      if ((undefined4 *)param_1[2] != puVar1) {
        uVar3 = param_1[1];
        uVar5 = 0xffff0000;
        if (*param_1 < 5) {
          uVar5 = *param_1 << 0x10;
        }
        puVar6 = (undefined4 *)param_1[2];
        do {
          puVar9 = puVar6 + 1;
          thunk_TjVJLy_tJR_YwGg_tZcwj(*(undefined4 *)*puVar6,uVar5 | (byte)uVar3);
          puVar6 = puVar9;
        } while (puVar9 != puVar1);
      }
      return;
    }
    piVar8 = (int *)*puVar6;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)thunk_MwhHq(4);
      iVar2 = thunk_LxXxGwNkYBemMQuIS();
      *piVar8 = iVar2;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_module_7006e2f1,0x4f,s_state__70061f51,&DAT_7009602d)
        ;
      }
      puVar9 = (undefined4 *)*puVar6;
      *puVar6 = piVar8;
      if (puVar9 != (undefined4 *)0x0) {
        thunk_yKVbdqLLmvptx_U(*puVar9);
        thunk_qNQrlu(puVar9);
        piVar8 = (int *)*puVar6;
      }
    }
    thunk_MrEwqHNKuEUnQKU(*piVar8,param_2);
    puVar6 = puVar6 + 1;
  } while( true );
}


// =========================================================================
// Function: thunk_laqXnoujKvCZbjDFev_mJWPLqWrgso_HQbJjvACihgMuyzBmBleNBdDZnEhoDnklhWXPdDiWlchuewEEVsTehWRfIxrXNRxJyTvnBdMaoUvgEiEdjHZz
// Entry: 0x71e08ae0 | Size: 1 bytes
// =========================================================================

undefined2 *
thunk_laqXnoujKvCZbjDFev_mJWPLqWrgso_HQbJjvACihgMuyzBmBleNBdDZnEhoDnklhWXPdDiWlchuewEEVsTehWRfIxrXNRxJyTvnBdMaoUvgEiEdjHZz
          (undefined2 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
          int param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  int *piStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar4 = thunk_yEbYffsicFFJvpgOICjJDgavrzzbSwlOTwSYO();
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Agc2SimdSse2KillSwitch_7006d400,0x1d);
  uVar7 = uStack_28;
  piVar12 = piStack_30;
  uVar14 = (uint)&piStack_30 | 1;
  uVar8 = uStack_28;
  uVar13 = uStack_2c;
  if (((uint)piStack_30 & 1) == 0) {
    uVar13 = (uint)piStack_30 >> 1 & 0x7f;
    uVar8 = uVar14;
  }
  uVar17 = uVar8 + uVar13;
  uVar5 = uVar8;
  while (((uVar2 = uVar17, 6 < (int)uVar13 &&
          (uVar5 = imp_memchr(uVar5,0x45,uVar13 - 6), uVar5 != 0)) &&
         (iVar15 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar2 = uVar5, iVar15 != 0))) {
    uVar5 = uVar5 + 1;
    uVar13 = uVar17 - uVar5;
  }
  if (((uint)piVar12 & 1) != 0) {
    thunk_qNQrlu(uVar7);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Agc2SimdAvx2KillSwitch_7007267d,0x1d);
  uVar7 = uStack_28;
  piVar12 = piStack_30;
  uVar5 = uStack_28;
  uVar13 = uStack_2c;
  if (((uint)piStack_30 & 1) == 0) {
    uVar13 = (uint)piStack_30 >> 1 & 0x7f;
    uVar5 = uVar14;
  }
  uVar19 = uVar5 + uVar13;
  uVar6 = uVar5;
  while (((uVar3 = uVar19, 6 < (int)uVar13 &&
          (uVar6 = imp_memchr(uVar6,0x45,uVar13 - 6), uVar6 != 0)) &&
         (iVar15 = imp_memcmp(uVar6,s_Enabled_7006820b,7), uVar3 = uVar6, iVar15 != 0))) {
    uVar6 = uVar6 + 1;
    uVar13 = uVar19 - uVar6;
  }
  if (((uint)piVar12 & 1) != 0) {
    thunk_qNQrlu(uVar7);
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Agc2SimdNeonKillSwitch_70066989,0x1d);
  piVar12 = piStack_30;
  uVar13 = uStack_28;
  if (((uint)piStack_30 & 1) == 0) {
    uStack_2c = (uint)piStack_30 >> 1 & 0x7f;
    uVar13 = uVar14;
  }
  uVar14 = uVar13 + uStack_2c;
  uVar7 = uVar13;
  while (((uVar6 = uVar14, 6 < (int)uStack_2c &&
          (uVar7 = imp_memchr(uVar7,0x45,uStack_2c - 6), uVar7 != 0)) &&
         (iVar15 = imp_memcmp(uVar7,s_Enabled_7006820b,7), uVar6 = uVar7, iVar15 != 0))) {
    uVar7 = uVar7 + 1;
    uStack_2c = uVar14 - uVar7;
  }
  if (((uint)piVar12 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  uVar7 = 0;
  if (uVar2 != uVar8) {
    uVar7 = uVar4 & 0xff;
  }
  if (uVar2 == uVar17) {
    uVar7 = uVar4 & 0xff;
  }
  uVar8 = uVar7 | uVar4 & 0xff00;
  if (uVar3 != uVar5) {
    uVar7 = uVar8;
  }
  if (uVar3 == uVar19) {
    uVar7 = uVar8;
  }
  uVar8 = uVar7 | uVar4 & 0xff0000;
  if (uVar6 != uVar13) {
    uVar7 = uVar8;
  }
  if (uVar6 == uVar14) {
    uVar7 = uVar8;
  }
  iVar15 = (int)param_1 + 3;
  *param_1 = (short)uVar7;
  *(char *)(param_1 + 1) = (char)(uVar7 >> 0x10);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_712048f8);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_712048f8 = DAT_712048f8 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(iVar15);
  uVar9 = imp_powf(0x41200000,*(float *)(param_2 + 0x1c) / 20.0);
  thunk_ZzeqwcSjtMEA_rBw_MyTzMFIvaJa(param_1 + 2,0,uVar9);
  puVar18 = (uint *)(param_1 + 0xc);
  piVar12 = (int *)(param_1 + 0x12);
  *puVar18 = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  thunk_NppcinjAmVaZldHjimpXyBOSlXljfPHeMvydQhghKRLrwPgWNQYdNgfhmeRMAApHUlGRSfQxYrWMIlyPhSFcXGTdoNLOaxFc
            (param_1 + 0x18,iVar15,param_4 / 100,&DAT_7006c38a,4);
  *(undefined1 *)(param_1 + 0x42e) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  pcVar16 = (char *)(param_2 + 4);
  if (*(char *)(param_2 + 1) != '\0' || *pcVar16 != '\0') {
    uVar9 = thunk_MwhHq(0x30);
    thunk_cGVcNoThBxSFtzltgAmvvfrLrXJajGQkGeOCexlNvaGtyKTYClcVpsXkzgOpXzacWvpWbuJkaziDLGQEPhNXquAVIOSAsiapIjYtRgXCMMjKKutztwgiAqXW
              (uVar9,iVar15,pcVar16,0xc);
    iVar10 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    if (iVar10 != 0) {
      thunk_qNQrlu();
    }
    if (param_6 != 0) {
      iVar10 = thunk_MwhHq(0x50);
      thunk_atUCMjyLrlfcx_EGOIbolybEEeOQSKOmOSOfCTVAxacVpSYhZErTxWEufhYaerVeaIl_ZgoKA
                (iVar10,0x5dc,param_1,param_4);
      iVar11 = *(int *)(param_1 + 0xe);
      *(int *)(param_1 + 0xe) = iVar10;
      if (iVar11 != 0) {
        thunk_rkwmwsyvDYbmxIPVqNfHLCjfAyBsQwDtcMKwJTDWBxIh();
        thunk_qNQrlu();
      }
    }
  }
  if (*(char *)(param_2 + 1) != '\0') {
    iVar10 = thunk_MwhHq(0x50);
    thunk_cdTmHOBwNumyaafcOcSQNLmdMWoqz_gAvUK_sPF_kadPhJJNbvP(iVar10,param_5,param_3);
    iVar11 = *piVar12;
    *piVar12 = iVar10;
    if (iVar11 != 0) {
      thunk_ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ();
      thunk_qNQrlu();
      iVar10 = *piVar12;
    }
    thunk_eV_K_el__CLuRcnKpKPUiecNiwhwpEuEBZcYJefrvAjiria(iVar10);
  }
  if (*pcVar16 != '\0') {
    thunk_oCvNXutoGNJyyKJHFDpFGbaKvuWYyWSAHQlBRsWmrgzzbIsJ_qkLLstegK(&piStack_30,iVar15);
    piVar12 = (int *)*puVar18;
    *puVar18 = (uint)piStack_30;
    piStack_30 = (int *)0x0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))();
      piVar12 = piStack_30;
      piStack_30 = (int *)0x0;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 4))();
      }
    }
    thunk_ICUerHsoVUvxbUCMgwuWaoXtiPmxgxGqVtJaf_xpNeJhQ_QNqGBytlQfPyUS
              (&piStack_30,0x41a00000,0xc,iVar15);
    piVar12 = *(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = piStack_30;
    piStack_30 = (int *)0x0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))();
      piVar12 = piStack_30;
      piStack_30 = (int *)0x0;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 4))();
      }
    }
    uVar9 = thunk_MwhHq(0x44);
    thunk_YAtEide_qbobJEresjHymaJJwdYGUiU_wSQERdCvBTaVuQlycVUj_igcYbvGVZBcxRurvxfMsiIEIWoLmdrzmDdwobJA_LHZEJJvPEIztvohtrnPVFQSZLsLRpUpENuls
              (uVar9,iVar15,pcVar16,0xc);
    iVar15 = *(int *)(param_1 + 0x16);
    *(undefined4 *)(param_1 + 0x16) = uVar9;
    if (iVar15 != 0) {
      thunk_qNQrlu();
    }
  }
  return param_1;
}


// =========================================================================
// Function: thunk_qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo
// Entry: 0x71e08af0 | Size: 1 bytes
// =========================================================================

void thunk_qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  thunk_lVKjJkWIezUotYnM_XQBIHEPsESKIKfOqLMxRAUybtHNTxgnLBfhjXNyGVsDHHJYtk();
  return;
}


// =========================================================================
// Function: thunk_AyUpfSosCGkzwdwRoBQkysLTIzY_MXHCtJEdJvHyhxoFQrn
// Entry: 0x71e08b00 | Size: 1 bytes
// =========================================================================

uint * thunk_AyUpfSosCGkzwdwRoBQkysLTIzY_MXHCtJEdJvHyhxoFQrn
                 (uint *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_44;
  int *piStack_40;
  uint *puStack_3c;
  uint *puStack_34;
  
  uVar4 = *param_2;
  param_1[1] = param_4;
  *param_1 = param_3 / 16000;
  thunk_ztwrHYYRBhSsYQxcAOFtZKdgD_CTMithEqHrAtBXAerWSzVzsIoNRPIDPSsWYad(param_1 + 2,uVar4);
  param_1[5] = 0xffffffff;
  thunk_EP__iWgUhgMc_jexZuhX(param_1 + 6);
  uVar6 = param_1[1];
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (uVar6 < 3) {
    uVar1 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar2 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 4;
    param_1[0x10] = 0;
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = 0;
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar3;
    param_1[0x18] = 0;
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
    if (uVar6 == 0) {
      return param_1;
    }
  }
  else {
    if (0x155555 < uVar6) {
      FUN_71b0d18c(param_1 + 0xd);
      if (*piStack_44 == 0) {
        iVar7 = *piStack_40;
      }
      else {
        *piStack_50 = *piStack_44;
        thunk_qNQrlu();
        iVar7 = *piStack_40;
      }
      if (iVar7 != 0) {
        *piStack_4c = iVar7;
        thunk_qNQrlu();
      }
      if (*puStack_3c != 0) {
        param_1[0xe] = *puStack_3c;
        thunk_qNQrlu();
      }
      thunk_XWrDNbPYDETOSCCGKLX_(param_1 + 6);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    uVar5 = thunk_MwhHq(uVar6 * 0xc00);
    param_1[0xd] = uVar5;
    param_1[0xf] = uVar5 + uVar6 * 0xc00;
    iVar7 = ((uVar6 * 0xc00 - 0xc00) / 0xc00) * 0xc00 + 0xc00;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x10] = 0;
    param_1[0xe] = uVar5 + iVar7;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    iVar7 = uVar6 * 4;
    uVar5 = thunk_MwhHq(iVar7);
    param_1[0x10] = uVar5;
    param_1[0x12] = uVar5 + uVar6 * 4;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x13] = 0;
    param_1[0x11] = uVar5 + iVar7;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    uVar5 = thunk_MwhHq(iVar7);
    param_1[0x13] = uVar5;
    param_1[0x15] = uVar5 + uVar6 * 4;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x16] = 0;
    param_1[0x14] = uVar5 + iVar7;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    uVar5 = thunk_MwhHq(iVar7);
    param_1[0x18] = uVar5 + uVar6 * 4;
    param_1[0x16] = uVar5;
    imp___aeabi_memclr4(uVar5,iVar7);
    param_1[0x19] = 0;
    param_1[0x17] = uVar5 + iVar7;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    uVar5 = uVar6;
  }
  puStack_34 = param_1 + 0x1a;
  iVar7 = uVar6 * 4;
  uVar5 = thunk_MwhHq(iVar7,uVar5);
  param_1[0x1b] = uVar5 + uVar6 * 4;
  param_1[0x19] = uVar5;
  imp___aeabi_memclr4(uVar5,iVar7);
  uVar6 = 0;
  *puStack_34 = uVar5 + iVar7;
  do {
    uVar4 = thunk_MwhHq(0x5608);
    thunk_eMNuufHlDahNVgrWhaNdmMRGLYSOlvLZHl_IPCdcaGwCtpFrOYzORpiDtPHVxZ_jjrtGbB
              (uVar4,param_1 + 2,*param_1);
    uVar5 = param_1[0x19];
    iVar7 = *(int *)(uVar5 + uVar6 * 4);
    *(undefined4 *)(uVar5 + uVar6 * 4) = uVar4;
    if (iVar7 != 0) {
      if (*(int *)(iVar7 + 0x55fc) != 0) {
        *(int *)(iVar7 + 0x5600) = *(int *)(iVar7 + 0x55fc);
        thunk_qNQrlu();
      }
      thunk_qNQrlu(iVar7);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < param_1[1]);
  return param_1;
}


// =========================================================================
// Function: thunk_pAVebNlFSMSbixCUJGyCLgmILYIWNeAqkWMoWdWt
// Entry: 0x71e08b10 | Size: 1 bytes
// =========================================================================

undefined1 *
thunk_pAVebNlFSMSbixCUJGyCLgmILYIWNeAqkWMoWdWt
          (undefined1 *param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  *param_1 = (char)param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(float *)(param_1 + 8) = param_4;
  fVar2 = 1.0;
  if (param_2 != 0) {
    fVar2 = fVar1 * 0.003921569;
  }
  *(float *)(param_1 + 0xc) = fVar2 * param_4;
  thunk_mxGPgENVfKVFsCZweAkUrNliPlYKKOKgBy(param_1 + 0x10,fVar2 * param_4);
  thunk_mxGPgENVfKVFsCZweAkUrNliPlYKKOKgBy(param_1 + 0x20,param_5);
  return param_1;
}


// =========================================================================
// Function: thunk_cXkhuDdunAmNRjOieLCaqWS_koRsmAPfNNxRGvHnCTixSucdzlWC_p_SApimbYmGw_BsGixJfyhYXhplkvBT
// Entry: 0x71e08b20 | Size: 1 bytes
// =========================================================================

bool thunk_cXkhuDdunAmNRjOieLCaqWS_koRsmAPfNNxRGvHnCTixSucdzlWC_p_SApimbYmGw_BsGixJfyhYXhplkvBT
               (int param_1)

{
  bool bVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x1c) < 0.0) {
    return false;
  }
  if (*(float *)(param_1 + 0x1c) < 50.0) {
    fVar2 = *(float *)(param_1 + 8);
    bVar1 = fVar2 < 0.0;
    if (!bVar1) {
      fVar2 = *(float *)(param_1 + 0xc);
      bVar1 = fVar2 < 0.0;
    }
    if (fVar2 != 0.0 && bVar1 == NAN(fVar2)) {
      fVar2 = *(float *)(param_1 + 0x10);
      bVar1 = fVar2 < 0.0;
      if (!bVar1) {
        fVar2 = *(float *)(param_1 + 0x14);
        bVar1 = fVar2 < 0.0;
      }
      if (fVar2 != 0.0 && bVar1 == NAN(fVar2)) {
        return *(float *)(param_1 + 0x18) <= 0.0;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: thunk_AMfMYTIBNMenJrhvufeLST_CSTWRblufVogBgxPOtmlHXuEirjsrJwgQyunGwvwRZybOkFrxejzgDGI
// Entry: 0x71e08b30 | Size: 1 bytes
// =========================================================================

void thunk_AMfMYTIBNMenJrhvufeLST_CSTWRblufVogBgxPOtmlHXuEirjsrJwgQyunGwvwRZybOkFrxejzgDGI
               (int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uStack_58;
  uint uStack_54;
  uint uStack_4c;
  uint uStack_48;
  
  iVar2 = param_1 + 0x8c;
  imp_pthread_mutex_lock();
  bVar4 = *(int *)(param_1 + 0x174) != 0;
  uVar10 = *(undefined8 *)(param_1 + 0x17c);
  bVar5 = *(int *)(param_1 + 0x170) != 0;
  uStack_4c = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x184) >> 0x20);
  uStack_48 = (uint)*(undefined8 *)(param_1 + 0x18c);
  bVar6 = *(int *)(param_1 + 0x160) != 0;
  bVar7 = *(int *)(param_1 + 0x164) != 0;
  bVar8 = *(char *)(param_1 + 0x9c) != '\0' || *(char *)(param_1 + 0xa4) != '\0';
  bVar9 = (((((*(char *)(param_1 + 0x143) != *(char *)(param_1 + 0xb8) ||
              (bool)*(char *)(param_1 + 0x144) != bVar5) ||
             (bool)*(char *)(param_1 + 0x145) != bVar4) || (bool)*(char *)(param_1 + 0x146) != bVar6
            ) || (bool)*(char *)(param_1 + 0x147) != bVar7) ||
          (bool)*(char *)(param_1 + 0x148) != bVar8) ||
          *(char *)(param_1 + 0x149) != *(char *)(param_1 + 0x28c);
  if (bVar9) {
    *(char *)(param_1 + 0x149) = *(char *)(param_1 + 0x28c);
    *(bool *)(param_1 + 0x148) = bVar8;
    *(bool *)(param_1 + 0x147) = bVar7;
    *(bool *)(param_1 + 0x146) = bVar6;
    *(bool *)(param_1 + 0x145) = bVar4;
    *(bool *)(param_1 + 0x144) = bVar5;
    *(char *)(param_1 + 0x143) = *(char *)(param_1 + 0xb8);
  }
  bVar1 = *(byte *)(param_1 + 0x14a);
  *(undefined1 *)(param_1 + 0x14a) = 0;
  imp_pthread_mutex_unlock(iVar2);
  uVar3 = (uint)(bVar1 | bVar9);
  bVar4 = uVar3 == 0;
  uStack_58 = extraout_r1;
  if (bVar4) {
    uStack_58 = (uint)uVar10;
    uVar3 = *param_2;
  }
  if (bVar4 && uStack_58 == uVar3) {
    uVar3 = param_2[1];
    uStack_54 = (uint)((ulonglong)uVar10 >> 0x20);
    bVar4 = uStack_54 == uVar3;
    if (bVar4) {
      uVar3 = *param_3;
      uStack_54 = uStack_4c;
    }
    if ((bVar4 && uStack_54 == uVar3) && (uStack_48 == param_3[1])) {
      return;
    }
  }
  imp_pthread_mutex_lock(param_1 + 0x88);
  imp_pthread_mutex_lock(iVar2);
  thunk_ODtsURDHjEkQOJbRINMYyhzRqh__A_TXnnPZg_pouUanDjLTyWByjlMRuZBojZWVaumrQVctCa(param_1);
  imp_pthread_mutex_unlock(iVar2);
  imp_pthread_mutex_unlock(param_1 + 0x88);
  return;
}


// =========================================================================
// Function: thunk_UJArwPXrdx_kZUXfMAIvMif_ymxAOAqoDZGRNjNFoWxRsVJEFsLltFeDdKEg
// Entry: 0x71e08b40 | Size: 1 bytes
// =========================================================================

void thunk_UJArwPXrdx_kZUXfMAIvMif_ymxAOAqoDZGRNjNFoWxRsVJEFsLltFeDdKEg(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined4 uStack_34;
  byte abStack_30 [8];
  undefined4 uStack_28;
  ushort auStack_24 [4];
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    auStack_24[0] = 0;
    if (*(int *)(param_1 + 0x150) != 0) {
      thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                (auStack_24,s_CapturePostProcessor__70067071);
    }
    if (*(int *)(param_1 + 0x154) != 0) {
      thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                (auStack_24,s_RenderPreProcessor__70068a53);
    }
    if (*(char *)(param_1 + 0x28c) != '\0') {
      thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                (auStack_24,s_EchoController__7006b262);
    }
    if (*(char *)(param_1 + 0x120) != '\0') {
      thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                (auStack_24,s_GainController2__700724eb);
    }
    thunk_uNyeJTWoEfWxVakUobYwjgqbKiHVPnwgy(&uStack_58);
    uStack_4c = 0;
    uStack_58 = *(undefined1 *)(param_1 + 0xba);
    bVar2 = *(int *)(param_1 + 0x170) == 0;
    uStack_54 = 0;
    uStack_50 = !bVar2;
    uStack_55 = 0;
    uStack_57 = 0;
    if (bVar2) {
      uStack_4f = 0;
    }
    else {
      uStack_4f = thunk_RkvZNNDOhctPvZKuMBXLWSyBuHCJXkSjBwMNMCgAQlGZGfNPoHJflZvaVyfvsl();
      if (*(int *)(param_1 + 0x170) != 0) {
        uStack_4c = thunk_BUMG_qzmRyJdaamnNJlnSGUrSktniUycMuckemcgKirQFVzLvK();
      }
    }
    if (*(int **)(param_1 + 0x160) == (int *)0x0) {
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
    }
    else {
      uStack_48 = 1;
      uStack_44 = (**(code **)(**(int **)(param_1 + 0x160) + 0xc))();
      if (*(int **)(param_1 + 0x160) == (int *)0x0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = (**(code **)(**(int **)(param_1 + 0x160) + 0x24))();
      }
    }
    uStack_3f = *(undefined1 *)(param_1 + 0xb8);
    uStack_37 = *(int *)(param_1 + 0x15c) != 0;
    uStack_3e = *(undefined1 *)(param_1 + 0xc0);
    uStack_3c = *(undefined4 *)(param_1 + 0xc4);
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (abStack_30,auStack_24);
    uStack_36 = *(undefined1 *)(param_1 + 0x9c);
    uStack_34 = *(undefined4 *)(param_1 + 0xa0);
    if ((param_2 != 0) ||
       (iVar1 = thunk_XWtaT_zMfqxOjyJeCZAUXOpvqadRqAKbGBxafh(&uStack_58,param_1 + 0x54), iVar1 == 0)
       ) {
      (**(code **)(**(int **)(param_1 + 0x50) + 0x30))(*(int **)(param_1 + 0x50),&uStack_58);
      thunk_dBeGQJsRUqTBzKJQpAOIkuDPZArNk_kqJsWGR(param_1 + 0x54,&uStack_58);
    }
    if ((abStack_30[0] & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if ((auStack_24[0] & 1) != 0) {
      thunk_qNQrlu(uStack_1c);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_xV_IPBhNIfuzjbwoDJBOAZeoMpZZRtQHbvgaRlZCNhWjHyviVOcEftXaEcomU
// Entry: 0x71e08b50 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int thunk_xV_IPBhNIfuzjbwoDJBOAZeoMpZZRtQHbvgaRlZCNhWjHyviVOcEftXaEcomU(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint extraout_r1;
  uint uVar6;
  undefined4 uVar7;
  uint extraout_r1_00;
  int iVar8;
  int iVar9;
  code *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 in_q8 [16];
  undefined8 in_d18;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined1 auStack_2c [8];
  
  thunk_fsKRHOnd_ikmdD_DoBIQYiSYdgyITfTGTOszgxiXrPmPyYstERvxphaLcvzKEDE();
  thunk_BrmZT_yDrSwxuIbixEPVcroZTAtDYBBqIoMaZhcoppod_vnTQeTUTyzmuPy_IZV(param_1);
  thunk_FIDaUYlysGumEBFAbFgBVrIMDkFjNNdy(auStack_2c);
  iVar3 = param_1[0x5a];
  iVar9 = param_1[0x73];
  iVar8 = param_1[0x71];
  uVar6 = extraout_r1;
  if (iVar3 != 0) {
    uVar6 = (uint)*(byte *)((int)param_1 + 0xb9);
  }
  if ((iVar3 != 0 && uVar6 != 0) && (*(char *)((int)param_1 + 0x1ba) == '\0')) {
    thunk_KbraJSPT_BgITeiJISysPfxoLyCbQ_ozfLCExUaBOSjdTxTenChGAn(iVar3,iVar8,0);
  }
  if (param_1[0x5e] != 0) {
    if ((char)param_1[0x2c] != '\0') {
      iVar3 = *(int *)(param_1[0x5e] + 4);
      bVar1 = *(byte *)(param_1 + 0x99);
      *(undefined1 *)(param_1 + 0x99) = 1;
      *(byte *)(param_1 + 0x9a) = bVar1 & param_1[0x98] != iVar3;
      if ((char)param_1[0x9c] != '\0') {
        *(undefined1 *)(param_1 + 0x9c) = 0;
      }
      param_1[0x98] = iVar3;
      if (param_1[0x57] == 0) {
        if ((undefined4 *)param_1[0x58] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)param_1[0x58])();
        }
      }
      else {
        thunk_BTVheCKpcjkXJRjkjiQMgdnbRuTwknZzGhmniYwCKsAT_cOZCjLHXDN();
      }
    }
    thunk_BSLxGkPwsvDJ_lCtPdCkBVUBzmAuAYgDs_RaOVASZVjLqepsJkUwCgMVUqDGjKIZGWYCjPRJlkAEI
              (param_1[0x5e],iVar8);
  }
  uVar7 = **(undefined4 **)(*(int *)(iVar8 + 0x28) + 4);
  if (param_1[0xa0] == 0) {
    uVar7 = 0;
  }
  thunk_VOQNCItlBsWaoKigCEilzgyXEoqnOTevJiXFgxtTJfCPegiClruJfeBU(param_1 + 0xe0,uVar7);
  iVar3 = param_1[0xea];
  param_1[0xea] = iVar3 + 1;
  if (0x3e6 < iVar3) {
    param_1[0xea] = 0;
    thunk_frpoTspqIewoBf_of_TEKCIurqjucgRptiFnF(&iStack_50,param_1 + 0xe0);
    DataMemoryBarrier(0xb);
    iVar4 = DAT_712047fc;
    if (DAT_712047fc == 0) {
      iVar4 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                        (s_WebRTC_Audio_ApmCaptureInputLeve_70064113,0x2b,1,0x7f);
      if (DAT_712047fc == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar12 = (bool)hasExclusiveAccess(0x712047fc);
          DAT_712047fc = iVar4;
        } while (!bVar12);
      }
      else {
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) goto LAB_71a6d214;
    }
    else {
LAB_71a6d214:
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar4,iStack_50);
    }
    DataMemoryBarrier(0xb);
    iVar4 = DAT_71204800;
    if (DAT_71204800 == 0) {
      iVar4 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                        (s_WebRTC_Audio_ApmCaptureInputLeve_70062d35,0x28,1,0x7f);
      if (DAT_71204800 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar12 = (bool)hasExclusiveAccess(0x71204800);
          DAT_71204800 = iVar4;
        } while (!bVar12);
      }
      else {
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      if (iVar4 == 0) goto LAB_71a6d290;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar4,uStack_4c);
  }
LAB_71a6d290:
  if ((char)param_1[0x99] != '\0') {
    thunk_CpeNzledvzesgieYPf_nuxQMQpmrDLrIY_TwIJSQYGKE_bOzoUtRsVmH(param_1 + 0xeb,param_1[0x98]);
  }
  piVar5 = (int *)param_1[0x5b];
  if (piVar5 != (int *)0x0) {
    cVar2 = (char)param_1[0x9a];
    *(char *)(param_1 + 0x78) = cVar2;
    if (param_1[0x5e] == 0) {
      if (cVar2 == '\0') goto LAB_71a6d320;
LAB_71a6d308:
      uVar6 = param_1[0x7a];
      bVar12 = true;
    }
    else {
      fVar13 = *(float *)(param_1[0x5e] + 0xc);
      bVar12 = true;
      if (cVar2 == '\0') {
        bVar12 = false;
        if (((float)param_1[0x79] != fVar13) && (0.0 <= (float)param_1[0x79])) {
          bVar12 = true;
        }
      }
      param_1[0x79] = (int)fVar13;
      *(bool *)(param_1 + 0x78) = bVar12;
      if (bVar12) goto LAB_71a6d308;
LAB_71a6d320:
      uVar6 = param_1[0x7a];
      bVar12 = (uint)param_1[0x7b] < 0x80000000 && param_1[0x7b] != uVar6;
    }
    iVar4 = *piVar5;
    param_1[0x7b] = uVar6;
    *(bool *)(param_1 + 0x78) = bVar12;
    (**(code **)(iVar4 + 4))(piVar5,iVar8);
  }
  if (param_1[0x57] != 0) {
    thunk_rGsmdSusvLW_Y_WZDebCCuXRdhtEspBljrtjVqiAkrsGVBAGb_zVBrZitESUhrcL_BH(param_1[0x57],iVar8);
  }
  if (param_1[0x59] != 0) {
    bVar12 = *(char *)((int)param_1 + 0x121) != '\0';
    cVar2 = '\0';
    if (bVar12) {
      cVar2 = (char)param_1[0x99];
    }
    if (bVar12 && cVar2 != '\0') {
      thunk_cbujWXAyOPlsmmcXpcHZaORUJZknIMFlYMvcpLRCYUJsukbqmSsiUTeH
                (param_1[0x59],param_1[0x98],iVar8);
    }
  }
  puVar11 = (undefined4 *)((int)param_1 + 0x143);
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar7 = *puVar11;
  auVar15 = VectorCopyLong(in_q8._0_8_,1,1);
  auVar15._0_8_ = VectorUnzip(in_d18,1);
  uVar6 = (uint)auVar15._0_8_;
  bVar12 = uVar6 == 0;
  if (bVar12) {
    uVar6 = (uint)*(byte *)((int)param_1 + 0x149);
  }
  if ((!bVar12 || uVar6 != 0) && (param_1[0x9e] == 48000 || param_1[0x9e] == 32000)) {
    thunk_eYLYZDlDzDlKEvKfaJJHLJYfhVHyIeHJVoluukotNuPhrWBHOe(iVar8);
  }
  if ((param_1[0x5b] != 0) &&
     ((*(byte *)((int)param_1 + 0x95) & *(char *)((int)param_1 + 0x1b9) != '\0') == 0)) {
    thunk_AtXEwoMjtrXPcKfVvTjITMTZLF_neGIBLRUeVChKIr_(iVar8,1);
  }
  if ((param_1[0x5a] != 0) &&
     ((*(char *)((int)param_1 + 0xb9) == '\0' || (*(char *)((int)param_1 + 0x1ba) != '\0')))) {
    thunk_KbraJSPT_BgITeiJISysPfxoLyCbQ_ozfLCExUaBOSjdTxTenChGAn(param_1[0x5a],iVar8,1);
  }
  if ((param_1[0x58] != 0) &&
     (iVar4 = thunk_lAqDjEvwkJnGhkjt__AtDwehYRuoJUKxvfiSPbfSQrhTAojXOfktGHHWqjAhtlhDnADu
                        (param_1[0x58],iVar8), iVar4 != 0)) goto LAB_71a6d9d4;
  cVar2 = '\0';
  iVar4 = param_1[0x5c];
  if (iVar9 != 0) {
    cVar2 = (char)param_1[0x32];
  }
  if ((iVar9 != 0 && cVar2 != '\0') && (iVar4 == 0)) {
LAB_71a6d4fc:
    pcVar10 = (code *)0x0;
    if (param_1[0x5b] != 0) {
      (**(code **)(*param_1 + 100))(param_1);
      if ((char)param_1[0x70] != '\0') {
        piVar5 = (int *)param_1[0x5b];
        uVar7 = (**(code **)(*param_1 + 100))(param_1);
        (**(code **)(*piVar5 + 0x14))(piVar5,uVar7);
      }
      pcVar10 = *(code **)(*(int *)param_1[0x5b] + 0xc);
      (*pcVar10)((int *)param_1[0x5b],iVar8,iVar9,(char)param_1[0x78]);
    }
    if (iVar9 != 0) {
      bVar12 = (char)param_1[0x32] != '\0';
      iVar4 = 0;
      if (bVar12) {
        iVar4 = param_1[0x5d];
      }
      if (bVar12 && iVar4 != 0) {
        thunk_hWiBsfQtrMPakukwkSWrImcAYEcTrTugSTNPq__z_oDakIDAUyMjiAE(iVar4,iVar9);
      }
    }
    if (param_1[0x5d] != 0) {
      thunk_CjOeUBVxGvxTwqiPbplgpFjGsEMkGmUPoxaSidGcrVFddIInvZqjVG(param_1[0x5d],iVar8);
    }
  }
  else {
    if (param_1[0x5d] != 0) {
      thunk_hWiBsfQtrMPakukwkSWrImcAYEcTrTugSTNPq__z_oDakIDAUyMjiAE(param_1[0x5d],iVar8);
      iVar4 = param_1[0x5c];
    }
    if (iVar4 == 0) goto LAB_71a6d4fc;
    if ((char)param_1[0x70] == '\0') {
      iVar4 = -0xb;
      goto LAB_71a6d9d4;
    }
    if (param_1[0x5d] != 0) {
      thunk_CjOeUBVxGvxTwqiPbplgpFjGsEMkGmUPoxaSidGcrVFddIInvZqjVG(param_1[0x5d],iVar8);
      iVar4 = param_1[0x5c];
    }
    uVar7 = (**(code **)(*param_1 + 100))(param_1);
    iVar4 = thunk_gwD_uZxjeCUhjGRXExegzDkHptTXmvbfSmlVDstGjdHyxfhPQPSHEuycXcrCMOYRbMOEZccRAi
                      (iVar4,iVar8,uVar7);
    if (iVar4 != 0) goto LAB_71a6d9d4;
    pcVar10 = (code *)0x0;
  }
  if (param_1[0x57] != 0) {
    thunk_fIiTsBF_sHvTgCWdWiqLjqmEyjqIthuhwqTbisZFbwxNcfvznveixosJ(param_1[0x57],iVar8);
    thunk_lLWkVLtZeXtTApHKSuEHgdBJIojouzfIDwHLlIKS_jqM_AuTACefEGzT(&iStack_50,param_1[0x57]);
    bVar12 = (uStack_4c & 0xff) != 0;
    piVar5 = (int *)0x0;
    if (bVar12) {
      piVar5 = (int *)param_1[0x58];
    }
    if (bVar12 && piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x18))(piVar5,iStack_50);
    }
  }
  if (param_1[0x58] != 0) {
    iVar4 = thunk_HrpSS_fCRSwSMHPycZzrnIJDoVFPfPdqpNdaGrGnxnIudxeAqRePKwHCwfrPIOmLMdnr
                      (param_1[0x58],iVar8,0);
    pcVar10 = (code *)0x0;
    if (iVar4 != 0) goto LAB_71a6d9d4;
  }
                    /* WARNING: Ignoring partial resolution of indirect */
  uVar7 = *puVar11;
  VectorCopyLong(auVar15._0_8_,1,1);
  uVar14 = VectorUnzip(in_d18,1);
  uVar6 = (uint)uVar14;
  bVar12 = uVar6 == 0;
  if (bVar12) {
    uVar6 = (uint)*(byte *)((int)param_1 + 0x149);
  }
  if ((!bVar12 || uVar6 != 0) && (param_1[0x9e] == 48000 || param_1[0x9e] == 32000)) {
    thunk_TFFaPamVELNhDIWZXFanIrsclPHEySSOxyxEXonYNvOkKu(iVar8);
  }
  if (*(char *)((int)param_1 + 0x1c1) != '\0') {
    if (param_1[0x72] != 0) {
      if ((int *)param_1[0x5b] == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (**(code **)(*(int *)param_1[0x5b] + 0x1c))();
      }
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar7 = *puVar11;
      VectorCopyLong(uVar14,1,1);
      uVar14 = VectorUnzip(in_d18,1);
      if (((int)uVar14 != 0) || (iVar9 == 1 && *(char *)((int)param_1 + 0x149) == '\x01')) {
        thunk_AGEpjwDGwOrzYhLMwhYLHycRlFOV_kjOpzPd(iVar8,param_1[0x72]);
      }
      iVar8 = param_1[0x72];
    }
    piVar5 = (int *)param_1[0x53];
    if (piVar5 != (int *)0x0) {
      uVar7 = **(undefined4 **)(*(int *)(iVar8 + 0x28) + 4);
      if (*(int *)(iVar8 + 0xc) == 0) {
        uVar7 = 0;
      }
      (**(code **)(*piVar5 + 0x18))(piVar5,uVar7);
    }
    piVar5 = (int *)param_1[0x56];
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5,iVar8);
    }
    if (param_1[0x59] != 0) {
      thunk_WkhzleogkOiTZfvuSCkPsZDjPAwvheXmrn_bQSYQLGSwyLWhjGF_smQMMqyjTtdqAsEslFeQoefVNS
                (param_1[0x59],0,0,(char)param_1[0x9a]);
    }
    piVar5 = (int *)param_1[0x54];
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5,iVar8);
    }
    uVar7 = **(undefined4 **)(*(int *)(iVar8 + 0x28) + 4);
    if (param_1[0xa0] == 0) {
      uVar7 = 0;
    }
    thunk_VOQNCItlBsWaoKigCEilzgyXEoqnOTevJiXFgxtTJfCPegiClruJfeBU(param_1 + 0xe5,uVar7);
    if (0x3e6 < iVar3) {
      thunk_frpoTspqIewoBf_of_TEKCIurqjucgRptiFnF(&iStack_50,param_1 + 0xe5);
      DataMemoryBarrier(0xb);
      iVar3 = DAT_71204804;
      if (DAT_71204804 == 0) {
        iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                          (s_WebRTC_Audio_ApmCaptureOutputLev_700636d6,0x2c,1,0x7f);
        if (DAT_71204804 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar12 = (bool)hasExclusiveAccess(0x71204804);
            DAT_71204804 = iVar3;
          } while (!bVar12);
        }
        else {
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if (iVar3 != 0) goto LAB_71a6d810;
      }
      else {
LAB_71a6d810:
        thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,iStack_50);
      }
      DataMemoryBarrier(0xb);
      iVar3 = DAT_71204808;
      if (DAT_71204808 == 0) {
        iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                          (s_WebRTC_Audio_ApmCaptureOutputLev_7006b238,0x29,1,0x7f);
        if (DAT_71204808 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar12 = (bool)hasExclusiveAccess(0x71204808);
            DAT_71204808 = iVar3;
          } while (!bVar12);
        }
        else {
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if (iVar3 == 0) goto LAB_71a6d88c;
      }
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,uStack_4c);
    }
LAB_71a6d88c:
    if ((int *)param_1[0x53] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x53] + 0x1c))(&iStack_50);
      *(undefined1 *)(param_1 + 0x90) = (undefined1)iStack_48;
      *(undefined1 *)(param_1 + 0x94) = uStack_38;
      *(ulonglong *)(param_1 + 0x8e) = CONCAT44(uStack_4c,iStack_50);
      *(ulonglong *)(param_1 + 0x92) = CONCAT44(uStack_3c,iStack_40);
    }
  }
  if ((int *)param_1[0x5b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5b] + 0x10))(&iStack_50);
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined1 *)(param_1 + 0x84) = 1;
    *(undefined1 *)(param_1 + 0x97) = 1;
    param_1[0x96] = iStack_40;
    param_1[0x7e] = iStack_50;
    param_1[0x7f] = uStack_4c;
    param_1[0x82] = iStack_48;
    param_1[0x83] = iStack_44;
  }
  thunk_MEvCkrpdNnVrRmlnjapMyDHoaybdxRfDVUgxYihobfeQJwMKiPlHvqTJcXdbfACaFPNHzUhyXWnWUQ_qrymubZMIgt_jvnfD
            (param_1 + 0xa6,param_1 + 0x7c);
  if ((char)param_1[0x99] == '\0') {
    if ((char)param_1[0x9c] != '\0') {
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
  }
  else {
    if (param_1[0x57] == 0) {
      if ((int *)param_1[0x58] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)param_1[0x58] + 4))();
        goto LAB_71a6d964;
      }
      iVar3 = param_1[0x59];
      uVar6 = extraout_r1_00;
      if (iVar3 != 0) {
        uVar6 = (uint)*(byte *)((int)param_1 + 0x121);
      }
      if (iVar3 != 0 && uVar6 != 0) {
        iVar9 = *(int *)(iVar3 + 0x85c);
        uVar6 = *(uint *)(iVar3 + 0x860);
        *(char *)(param_1 + 0x9c) = (char)uVar6;
        param_1[0x9b] = iVar9;
        uVar6 = uVar6 & 0xff;
      }
      else {
        uVar6 = (uint)*(byte *)(param_1 + 0x99);
        *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x99);
        param_1[0x9b] = param_1[0x98];
      }
      if (uVar6 == 0) goto LAB_71a6d97c;
    }
    else {
      iVar3 = *(int *)(param_1[0x57] + 0x1c);
LAB_71a6d964:
      param_1[0x9b] = iVar3;
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    thunk_CpeNzledvzesgieYPf_nuxQMQpmrDLrIY_TwIJSQYGKE_bOzoUtRsVmH(param_1 + 0xfa,param_1[0x9b]);
  }
LAB_71a6d97c:
  if ((param_1[0x5e] != 0) &&
     (thunk_DNKCnLPyMZqRfQkXZgeoETFSYFzCEgKGFuiEcLEmddvfbRkEZaDcZOcPjreMiFslLTpEyYWxieKVwX
                (param_1[0x5e],iVar8), (char)param_1[0x2c] != '\0')) {
    thunk_BKtRCsUyOnnlxxTGnIuRzWgwaUaaFlIyiDTbeYCTTwFrwVPAEFMNEhBPsy(param_1[0x5e],param_1[0x9b]);
  }
  cVar2 = *(char *)((int)param_1 + 0x1c1);
  if (*(char *)((int)param_1 + 0x1c2) == '\0') {
    if (cVar2 != '\0') {
      pcVar10 = *(code **)(iVar8 + 0x1c);
    }
    if ((cVar2 != '\0' && pcVar10 != (code *)0x0) && (iVar3 = *(int *)(iVar8 + 0xc), 0 < iVar3)) {
      puVar11 = *(undefined4 **)(*(int *)(iVar8 + 0x28) + 4);
      do {
        imp___aeabi_memclr4(*puVar11,iVar3 << 2);
        pcVar10 = pcVar10 + -1;
        puVar11 = puVar11 + 1;
      } while (pcVar10 != (code *)0x0);
    }
  }
  iVar4 = 0;
  *(char *)((int)param_1 + 0x1c2) = cVar2;
  *(undefined1 *)(param_1 + 0x70) = 0;
LAB_71a6d9d4:
  thunk_GsbngCFLkhJoshHLyGuEfGhhdXqurqEc(auStack_2c);
  return iVar4;
}


// =========================================================================
// Function: thunk_IOzAjXlPvLCjOdeLGkaHDHpLoPlPBTGOUTULGEwz_OOrvpgGQSkZZDFRbk
// Entry: 0x71e08b60 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_IOzAjXlPvLCjOdeLGkaHDHpLoPlPBTGOUTULGEwz_OOrvpgGQSkZZDFRbk
          (undefined4 *param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    param_2 = (byte *)*puVar1;
    param_4 = (uint)*param_2;
  }
  if (puVar1 != (undefined4 *)0x0 && param_4 != 0) {
    thunk_R_cNneSURXdsvoNnIJXxlMjMNltbxDTIzVTKbDxUKYpfCOQZFIhbxsWLybX
              (0x45,param_2,puVar1[1],0,0,0,0,0,0,0,0);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_fsKRHOnd_ikmdD_DoBIQYiSYdgyITfTGTOszgxiXrPmPyYstERvxphaLcvzKEDE
// Entry: 0x71e08b70 | Size: 1 bytes
// =========================================================================

void thunk_fsKRHOnd_ikmdD_DoBIQYiSYdgyITfTGTOszgxiXrPmPyYstERvxphaLcvzKEDE(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 0x170) != 0) {
    iVar2 = *(int *)(param_1 + 0x424);
    iVar3 = *(int *)(iVar2 + 0xc);
    DataMemoryBarrier(0xb);
    while (iVar3 != 0) {
      piVar4 = (int *)(iVar2 + 0xc);
      uVar8 = *(undefined4 *)(param_1 + 0x33c);
      puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 8) * 0xc);
      *(undefined4 *)(param_1 + 0x33c) = *puVar6;
      *puVar6 = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x340);
      *(undefined4 *)(param_1 + 0x340) = puVar6[1];
      puVar6[1] = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x344);
      *(undefined4 *)(param_1 + 0x344) = puVar6[2];
      puVar6[2] = uVar8;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + -1;
      iVar7 = *(int *)(param_1 + 0x340);
      iVar3 = *(int *)(iVar2 + 8) + 1;
      *(int *)(iVar2 + 8) = iVar3;
      iVar5 = *(int *)(param_1 + 0x33c);
      if (iVar3 == (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2) * -0x55555555) {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      iVar2 = 0;
      if (iVar7 != iVar5) {
        iVar2 = iVar5;
      }
      thunk_yypWBGIeFzyYTVuXJVwpTlybrHWJfQTaAWSVEnrnKUeIuTvzhTXOeoGcDViNDvVcGPWyIy_goidWAWQKnO
                (*(undefined4 *)(param_1 + 0x170),iVar2,iVar7 - iVar5 >> 1);
      iVar2 = *(int *)(param_1 + 0x424);
      iVar3 = *(int *)(iVar2 + 0xc);
      DataMemoryBarrier(0xb);
    }
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    iVar2 = *(int *)(param_1 + 0x428);
    iVar3 = *(int *)(iVar2 + 0xc);
    DataMemoryBarrier(0xb);
    while (iVar3 != 0) {
      piVar4 = (int *)(iVar2 + 0xc);
      uVar8 = *(undefined4 *)(param_1 + 0x358);
      puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 8) * 0xc);
      *(undefined4 *)(param_1 + 0x358) = *puVar6;
      *puVar6 = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x35c);
      *(undefined4 *)(param_1 + 0x35c) = puVar6[1];
      puVar6[1] = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x360);
      *(undefined4 *)(param_1 + 0x360) = puVar6[2];
      puVar6[2] = uVar8;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + -1;
      iVar7 = *(int *)(param_1 + 0x35c);
      iVar3 = *(int *)(iVar2 + 8) + 1;
      *(int *)(iVar2 + 8) = iVar3;
      iVar5 = *(int *)(param_1 + 0x358);
      if (iVar3 == (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2) * -0x55555555) {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      iVar2 = 0;
      if (iVar7 != iVar5) {
        iVar2 = iVar5;
      }
      thunk_foSgJzvSXtcDcdxygKakuxhZazcwsxJIEVtwWdixPQyzesrtejzKm_dOxcxbWfCzLsXEKPcqRynp
                (*(undefined4 *)(param_1 + 0x160),iVar2,iVar7 - iVar5 >> 1);
      iVar2 = *(int *)(param_1 + 0x428);
      iVar3 = *(int *)(iVar2 + 0xc);
      DataMemoryBarrier(0xb);
    }
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    iVar2 = *(int *)(param_1 + 0x42c);
    iVar3 = *(int *)(iVar2 + 0xc);
    DataMemoryBarrier(0xb);
    while (iVar3 != 0) {
      piVar4 = (int *)(iVar2 + 0xc);
      uVar8 = *(undefined4 *)(param_1 + 0x374);
      puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 8) * 0xc);
      *(undefined4 *)(param_1 + 0x374) = *puVar6;
      *puVar6 = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x378);
      *(undefined4 *)(param_1 + 0x378) = puVar6[1];
      puVar6[1] = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x37c);
      *(undefined4 *)(param_1 + 0x37c) = puVar6[2];
      puVar6[2] = uVar8;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + -1;
      iVar7 = *(int *)(param_1 + 0x378);
      iVar3 = *(int *)(iVar2 + 8) + 1;
      *(int *)(iVar2 + 8) = iVar3;
      iVar5 = *(int *)(param_1 + 0x374);
      if (iVar3 == (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x10) >> 2) * -0x55555555) {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      iVar2 = 0;
      if (iVar7 != iVar5) {
        iVar2 = iVar5;
      }
      (**(code **)(**(int **)(param_1 + 0x14c) + 0x14))
                (*(int **)(param_1 + 0x14c),iVar2,iVar7 - iVar5 >> 2);
      iVar2 = *(int *)(param_1 + 0x42c);
      iVar3 = *(int *)(iVar2 + 0xc);
      DataMemoryBarrier(0xb);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_BrmZT_yDrSwxuIbixEPVcroZTAtDYBBqIoMaZhcoppod_vnTQeTUTyzmuPy_IZV
// Entry: 0x71e08b80 | Size: 1 bytes
// =========================================================================

void thunk_BrmZT_yDrSwxuIbixEPVcroZTAtDYBBqIoMaZhcoppod_vnTQeTUTyzmuPy_IZV(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_50 = 0;
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar9 = (int *)(param_1 + 0x18);
    uVar2 = 0;
    do {
      uVar3 = uVar2;
      puVar4 = (undefined8 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) * 0xc);
      uVar13 = *puVar4;
      uVar6 = *(undefined4 *)(puVar4 + 1);
      *puVar4 = uStack_50;
      *(undefined4 *)(puVar4 + 1) = uStack_48;
      DataMemoryBarrier(0xb);
      do {
        bVar10 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar10);
      *piVar9 = *piVar9 + -1;
      piVar5 = *(int **)(param_1 + 0x50);
      iVar7 = *(int *)(param_1 + 0x14) + 1;
      iVar8 = 0;
      if (iVar7 + (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2) * 0x55555555 != 0) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 0x14) = iVar8;
      uStack_50 = uVar13;
      uStack_48 = uVar6;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x2c))(piVar5,&uStack_50);
      }
      switch((undefined4)uStack_50) {
      case 1:
        if (*(char *)(param_1 + 0x9c) != '\0' || *(char *)(param_1 + 0xa4) != '\0') {
          if (*(char *)(param_1 + 0x9c) == '\0') {
            *(float *)(param_1 + 0xa8) = uStack_50._4_4_;
            fVar11 = uStack_50._4_4_;
            fVar12 = 1.0;
          }
          else {
            *(float *)(param_1 + 0xa0) = uStack_50._4_4_;
            fVar11 = *(float *)(param_1 + 0xa8);
            fVar12 = uStack_50._4_4_;
          }
          if (*(char *)(param_1 + 0xa4) == '\0') {
            fVar11 = 1.0;
          }
          thunk_JBLbHIAjiKVQeYWbIosAQiXStaLSoZEbBZvXPVUfeeMbfau
                    (*(undefined4 *)(param_1 + 0x178),fVar12 * fVar11);
        }
        break;
      case 2:
        if (*(int *)(param_1 + 0x15c) == 0) {
          bVar10 = *(int *)(param_1 + 0x164) != 0;
          cVar1 = '\0';
          if (bVar10) {
            cVar1 = *(char *)(param_1 + 0x121);
          }
          if (!bVar10 || cVar1 == '\0') {
            piVar5 = *(int **)(param_1 + 0x160);
            *(int *)(param_1 + 0xdc) = (int)(uStack_50._4_4_ + 0.5);
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 0x18))(piVar5,(int)(uStack_50._4_4_ + 0.5));
            }
          }
        }
        break;
      case 3:
        if (*(int *)(param_1 + 0x164) != 0) {
          *(float *)(param_1 + 0x13c) = uStack_50._4_4_;
          thunk_yfRyVGLLEN_ycyOambAfUGNHzMEwAgywrmCELlxbodAwx
                    (*(int *)(param_1 + 0x164),uStack_50._4_4_);
        }
        break;
      case 4:
        *(float *)(param_1 + 0x1e8) = uStack_50._4_4_;
        break;
      case 7:
        if (*(char *)(param_1 + 0xa4) != '\0') {
          *(float *)(param_1 + 0xac) = uStack_50._4_4_;
          thunk_XASZYjOyUETkALzndeqQYucfzkmAgqzStemgvVqntVyLpljq
                    (*(undefined4 *)(param_1 + 0x178),uStack_50._4_4_);
        }
        break;
      case 8:
        *(byte *)(param_1 + 0x1c1) = uStack_50._4_1_ | *(char *)(param_1 + 0x1bb) == '\0';
        if (*(int *)(param_1 + 0x15c) != 0) {
          thunk_FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW();
        }
        piVar5 = *(int **)(param_1 + 0x16c);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x18))(piVar5,*(undefined1 *)(param_1 + 0x1c1));
        }
        if (*(int *)(param_1 + 0x174) != 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x174) + 0x30) = *(undefined1 *)(param_1 + 0x1c1);
        }
        if (*(int *)(param_1 + 0x164) != 0) {
          thunk_qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo
                    (*(int *)(param_1 + 0x164),*(undefined1 *)(param_1 + 0x1c1));
        }
      }
      DataMemoryBarrier(0xb);
      uVar2 = uVar3 + 1;
    } while (*piVar9 != 0);
    if (0x62 < uVar3) {
      *(undefined1 *)(param_1 + 0x1c1) = 1;
      if (*(int *)(param_1 + 0x15c) != 0) {
        thunk_FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW();
      }
      piVar9 = *(int **)(param_1 + 0x16c);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x18))(piVar9,*(undefined1 *)(param_1 + 0x1c1));
      }
      if (*(int *)(param_1 + 0x174) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x174) + 0x30) = *(undefined1 *)(param_1 + 0x1c1);
      }
      if (*(int *)(param_1 + 0x164) != 0) {
        thunk_qUyPCCDXDZHipteyrMartRrKvoC_WFg_HfACyoD_hlJKIhafJmo
                  (*(int *)(param_1 + 0x164),*(undefined1 *)(param_1 + 0x1c1));
      }
    }
  }
  return;
}


// =========================================================================
// Function: thunk_KbraJSPT_BgITeiJISysPfxoLyCbQ_ozfLCExUaBOSjdTxTenChGAn
// Entry: 0x71e08b90 | Size: 1 bytes
// =========================================================================

void thunk_KbraJSPT_BgITeiJISysPfxoLyCbQ_ozfLCExUaBOSjdTxTenChGAn
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      uVar3 = 0;
      do {
        uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x28) + 4) + uVar3 * 4);
        if (*(int *)(param_2 + 0xc) == 0) {
          uVar2 = 0;
        }
        thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
                  (*(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4),uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0x1c));
    }
  }
  else if (*(int *)(param_2 + 0x1c) != 0) {
    uVar3 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar1 = *(int *)(param_2 + 0x2c);
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c) * uVar3 * 4);
      if (*(int *)(param_2 + 0x24) == 0) {
        uVar2 = 0;
      }
      thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
                (*(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4),uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x1c));
  }
  return;
}


// =========================================================================
// Function: thunk_BSLxGkPwsvDJ_lCtPdCkBVUBzmAuAYgDs_RaOVASZVjLqepsJkUwCgMVUqDGjKIZGWYCjPRJlkAEI
// Entry: 0x71e08ba0 | Size: 1 bytes
// =========================================================================

void thunk_BSLxGkPwsvDJ_lCtPdCkBVUBzmAuAYgDs_RaOVASZVjLqepsJkUwCgMVUqDGjKIZGWYCjPRJlkAEI
               (int param_1)

{
  thunk_bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH(param_1 + 0x10);
  return;
}


// =========================================================================
// Function: thunk_VOQNCItlBsWaoKigCEilzgyXEoqnOTevJiXFgxtTJfCPegiClruJfeBU
// Entry: 0x71e08bb0 | Size: 1 bytes
// =========================================================================

void thunk_VOQNCItlBsWaoKigCEilzgyXEoqnOTevJiXFgxtTJfCPegiClruJfeBU
               (float *param_1,float *param_2,float param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  if (param_3 == 0.0) {
    return;
  }
  if ((*(char *)(param_1 + 4) == '\0') || (param_1[3] != param_3)) {
    param_1[3] = param_3;
    *(undefined1 *)(param_1 + 4) = 1;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  fVar4 = 0.0;
  iVar3 = (int)param_3 << 2;
  do {
    fVar5 = *param_2;
    param_2 = param_2 + 1;
    if (fVar5 < -32768.0) {
      fVar5 = -32768.0;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < 32767.0) << 0x1f |
            (uint)(fVar5 == 32767.0) << 0x1e;
    in_fpscr = uVar1 | (uint)NAN(fVar5) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar5 = 32767.0;
    }
    iVar3 = iVar3 + -4;
    fVar5 = (float)VectorSignedToFloat((int)(short)(int)fVar5 * (int)(short)(int)fVar5,
                                       (byte)(in_fpscr >> 0x16) & 3);
    fVar4 = fVar4 + fVar5;
  } while (iVar3 != 0);
  param_1[1] = (float)((int)param_1[1] + (int)param_3);
  *param_1 = fVar4 + *param_1;
  fVar5 = param_1[2];
  if (param_1[2] < fVar4) {
    fVar5 = fVar4;
  }
  param_1[2] = fVar5;
  return;
}


// =========================================================================
// Function: thunk_frpoTspqIewoBf_of_TEKCIurqjucgRptiFnF
// Entry: 0x71e08bc0 | Size: 1 bytes
// =========================================================================

void thunk_frpoTspqIewoBf_of_TEKCIurqjucgRptiFnF(int *param_1,float *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  if (param_2[1] == 0.0) {
    *param_1 = 0x7f;
    param_1[1] = 0x7f;
  }
  else {
    iVar3 = 0x7f;
    fVar5 = (float)VectorUnsignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = 0x7f;
    fVar5 = *param_2 / fVar5;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == 0.00021423966) << 0x1e |
            (uint)(0.00021423966 <= fVar5) << 0x1d;
    bVar1 = (byte)(uVar4 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
      fVar5 = (float)imp_log10f(fVar5 * 9.313226e-10);
      iVar2 = (int)(fVar5 * -10.0 + 0.5);
    }
    fVar5 = param_2[2];
    fVar6 = (float)VectorUnsignedToFloat(param_2[3],(byte)(uVar4 >> 0x16) & 3);
    *param_1 = iVar2;
    if (0.00021423966 < fVar5 / fVar6) {
      fVar5 = (float)imp_log10f((fVar5 / fVar6) * 9.313226e-10);
      iVar3 = (int)(fVar5 * -10.0 + 0.5);
    }
    param_1[1] = iVar3;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (*(char *)(param_2 + 4) != '\0') {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}


// =========================================================================
// Function: thunk_cbujWXAyOPlsmmcXpcHZaORUJZknIMFlYMvcpLRCYUJsukbqmSsiUTeH
// Entry: 0x71e08bd0 | Size: 1 bytes
// =========================================================================

void thunk_cbujWXAyOPlsmmcXpcHZaORUJZknIMFlYMvcpLRCYUJsukbqmSsiUTeH(int param_1)

{
  if (*(char *)(param_1 + 0x860) != '\0') {
    *(undefined1 *)(param_1 + 0x860) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    thunk_WbgoAazCxpwQQPGgiXafmTEzZghxVEzXeLvyjHFqKuPNV_dZQoQzaiXLRMDC_RJgYjFhEzReD();
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_lAqDjEvwkJnGhkjt__AtDwehYRuoJUKxvfiSPbfSQrhTAojXOfktGHHWqjAhtlhDnADu
// Entry: 0x71e08be0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_lAqDjEvwkJnGhkjt__AtDwehYRuoJUKxvfiSPbfSQrhTAojXOfktGHHWqjAhtlhDnADu(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_3f8;
  undefined1 *puStack_3f4;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3ec;
  undefined1 auStack_3e8 [320];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  puStack_3f4 = auStack_3e8;
  puStack_3ec = auStack_168;
  puStack_3f0 = auStack_2a8;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
      uVar2 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar2 * 4) = *(undefined4 *)(param_1 + 0x20);
        thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(param_2,uVar2,&puStack_3f4);
        iVar1 = thunk_fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz
                          (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar2 * 4) + 0x2c),
                           &puStack_3f4,*(undefined4 *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24));
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
    }
  }
  else if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28))) {
    uVar2 = 0;
    do {
      uStack_3f8 = 0;
      thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(param_2,uVar2,&puStack_3f4);
      iVar1 = thunk_ARGrIETXWgtn_gQyszvSqlUEQkQrnUvjQtzjraQNTjva
                        (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar2 * 4) + 0x2c),
                         &puStack_3f4,*(undefined4 *)(param_2 + 0x20),
                         *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_1 + 0x20),&uStack_3f8
                        );
      *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar2 * 4) = uStack_3f8;
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
  }
  return 0;
}


// =========================================================================
// Function: thunk_hWiBsfQtrMPakukwkSWrImcAYEcTrTugSTNPq__z_oDakIDAUyMjiAE
// Entry: 0x71e08bf0 | Size: 1 bytes
// =========================================================================

void thunk_hWiBsfQtrMPakukwkSWrImcAYEcTrTugSTNPq__z_oDakIDAUyMjiAE(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float afStack_1280 [129];
  float afStack_107c [129];
  float afStack_e78 [130];
  float afStack_c70 [256];
  float afStack_870 [256];
  float afStack_470 [96];
  undefined1 auStack_2f0 [256];
  undefined1 auStack_1f0 [4];
  float afStack_1ec [97];
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar7 = 0;
    do {
      thunk_AReXourBM_XYVgzqubGFourXCuJ_yczZZwrEDGrdQjICg
                (*(int *)(*(int *)(param_1 + 100) + uVar7 * 4) + 0x392c);
      uVar1 = *(uint *)(param_1 + 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
    if (uVar1 != 0) {
      uVar7 = 0;
      iVar3 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar3 = *(int *)(param_2 + 0x2c);
      }
      do {
        iVar4 = 0;
        fVar10 = 0.0;
        do {
          pfVar6 = (float *)(*(int *)(*(int *)(param_1 + 100) + uVar7 * 4) + 0x517c + iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = *pfVar6;
          fVar10 = fVar10 + fVar14 * fVar14;
        } while (iVar4 != 0x180);
        iVar4 = 0;
        do {
          pfVar6 = (float *)(*(int *)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c) * uVar7 * 4) +
                            iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = *pfVar6;
          fVar10 = fVar10 + fVar14 * fVar14;
        } while (iVar4 != 0x280);
        if (0.0 < fVar10) {
          uVar7 = 0;
          fVar10 = 0.0;
          iVar3 = *(int *)(param_1 + 0x14) + 1;
          if (*(int *)(param_1 + 0x14) < -1) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x14) = iVar3;
          do {
            iVar3 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) != 0) {
              iVar3 = *(int *)(param_2 + 0x2c);
            }
            iVar4 = *(int *)(param_1 + 100);
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c) * uVar7 * 4);
            iVar3 = *(int *)(iVar4 + uVar7 * 4) + 0x517c;
            imp___aeabi_memcpy4(afStack_470,iVar3,0x180);
            imp___aeabi_memmove4(auStack_2f0,uVar2,0x280);
            imp___aeabi_memcpy4(iVar3,auStack_1f0,0x180);
            iVar3 = 0;
            do {
              pfVar6 = (float *)((int)afStack_470 + iVar3);
              pfVar5 = (float *)((int)&DAT_7009a3b0 + iVar3);
              iVar3 = iVar3 + 4;
              *pfVar6 = *pfVar5 * *pfVar6;
            } while (iVar3 != 0x180);
            pfVar6 = (float *)&DAT_7009a52c;
            iVar3 = 0x284;
            do {
              pfVar5 = (float *)((int)afStack_470 + iVar3);
              fVar14 = *pfVar6;
              iVar3 = iVar3 + 4;
              pfVar6 = pfVar6 + -1;
              *pfVar5 = fVar14 * *pfVar5;
            } while (iVar3 != 0x400);
            thunk_joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
                      (param_1 + 0x18,afStack_470,afStack_870,afStack_c70);
            iVar3 = 4;
            afStack_e78[0] = ABS(afStack_870[0]) + 1.0;
            afStack_e78[0x80] = ABS(afStack_870[0x80]) + 1.0;
            do {
              fVar14 = *(float *)((int)afStack_c70 + iVar3);
              fVar11 = *(float *)((int)afStack_870 + iVar3);
              fVar14 = (float)thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic
                                        (fVar14 * fVar14 + fVar11 * fVar11);
              pfVar6 = (float *)((int)afStack_e78 + iVar3);
              iVar3 = iVar3 + 4;
              *pfVar6 = fVar14 + 1.0;
            } while (iVar3 != 0x200);
            iVar3 = 0;
            fVar14 = fVar10;
            do {
              fVar11 = *(float *)((int)afStack_c70 + iVar3);
              pfVar6 = (float *)((int)afStack_870 + iVar3);
              iVar3 = iVar3 + 4;
              fVar12 = *pfVar6;
              fVar14 = fVar14 + fVar11 * fVar11 + fVar12 * fVar12;
            } while (iVar3 != 0x204);
            iVar3 = 0;
            fVar11 = fVar10;
            do {
              pfVar6 = (float *)((int)afStack_e78 + iVar3);
              iVar3 = iVar3 + 4;
              fVar11 = fVar11 + *pfVar6;
            } while (iVar3 != 0x204);
            thunk_CIlEldrzVFzjGB_S_TNXSBzaGhLdITwZnflZbQYJTtnNJTbQtlbpPoydtenwNrExr
                      (*(int *)(iVar4 + uVar7 * 4) + 0x392c,*(undefined4 *)(param_1 + 0x14),
                       afStack_e78,fVar11);
            iVar3 = *(int *)(iVar4 + uVar7 * 4);
            iVar8 = 0;
            do {
              pfVar6 = (float *)(iVar3 + 0x3728 + iVar8);
              fVar9 = *pfVar6;
              fVar13 = pfVar6[0x85];
              fVar15 = *(float *)(iVar3 + 0x4f78 + iVar8);
              fVar16 = *(float *)(iVar3 + 0x3f48 + iVar8);
              fVar17 = *(float *)((int)afStack_e78 + iVar8);
              fVar12 = fVar10;
              if (fVar16 < fVar17) {
                fVar12 = fVar17 / (fVar16 + 0.0001) + -1.0;
              }
              *(float *)((int)afStack_107c + iVar8) = fVar12;
              pfVar6 = (float *)((int)afStack_1280 + iVar8);
              iVar8 = iVar8 + 4;
              *pfVar6 = fVar12 * 0.01999998 + fVar9 * (fVar15 / (fVar13 + 0.0001)) * 0.98;
            } while (iVar8 != 0x204);
            iVar3 = *(int *)(iVar4 + uVar7 * 4);
            thunk_kvXmTOCTNcSgsLBouwBjjAOMjOjaiwDpcnfCpOWKrZLriRnlESzomieskilsXn_iDtFnrbbbcgEYxYqfvEsM
                      (iVar3,*(undefined4 *)(param_1 + 0x14),afStack_1280,afStack_107c,
                       iVar3 + 0x3b40,afStack_e78,fVar11,fVar14 / 129.0);
            iVar3 = *(int *)(iVar4 + uVar7 * 4);
            thunk_gYItlcIKHqxeoASFRqYguSAHVVaneXvWTSeRBlVrDkOjNatyqImjESUBAaHFiutlfTmBmyBVuWvHiToXSWg
                      (iVar3 + 0x392c,iVar3 + 0x3118,0x81,afStack_e78);
            imp___aeabi_memcpy4(*(int *)(iVar4 + uVar7 * 4) + 0x4f78,afStack_e78,0x204);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(param_1 + 4));
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_CjOeUBVxGvxTwqiPbplgpFjGsEMkGmUPoxaSidGcrVFddIInvZqjVG
// Entry: 0x71e08c00 | Size: 1 bytes
// =========================================================================

void thunk_CjOeUBVxGvxTwqiPbplgpFjGsEMkGmUPoxaSidGcrVFddIInvZqjVG(uint *param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  float *pfVar22;
  undefined4 *puVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  uint uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  float *pfVar35;
  undefined4 *puVar36;
  uint uVar37;
  undefined1 *puVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 extraout_var [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 extraout_var_01 [12];
  undefined1 auVar125 [16];
  undefined1 auVar129 [12];
  undefined1 auVar126 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar135;
  undefined1 extraout_var_03 [12];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 in_q4 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 in_q5 [16];
  undefined1 auVar149 [16];
  undefined1 in_q6 [16];
  float fVar151;
  undefined1 auVar150 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  float *pfStack_1f34;
  float *pfStack_1f30;
  undefined4 uStack_1e60;
  undefined4 uStack_1e5c;
  undefined4 uStack_1e58;
  undefined4 uStack_1e54;
  undefined4 uStack_1e50;
  undefined4 uStack_1e4c;
  undefined4 uStack_1e48;
  undefined4 uStack_1e44;
  undefined4 uStack_1e40;
  undefined4 uStack_1e3c;
  undefined4 uStack_1e38;
  undefined4 uStack_1e34;
  undefined4 uStack_1e30;
  undefined4 uStack_1e2c;
  undefined4 uStack_1e28;
  undefined4 uStack_1e24;
  undefined4 uStack_1e20;
  undefined4 uStack_1e1c;
  undefined4 uStack_1e18;
  undefined4 uStack_1e14;
  undefined4 uStack_1e10;
  undefined4 uStack_1e0c;
  undefined4 uStack_1e08;
  undefined4 uStack_1e04;
  undefined4 uStack_1e00;
  undefined4 uStack_1dfc;
  undefined4 uStack_1df8;
  undefined4 uStack_1df4;
  undefined4 uStack_1df0;
  undefined4 uStack_1dec;
  undefined4 uStack_1de8;
  undefined4 uStack_1de4;
  undefined4 uStack_1de0;
  undefined4 uStack_1ddc;
  undefined4 uStack_1dd8;
  undefined4 uStack_1dd4;
  undefined4 uStack_1dd0;
  undefined4 uStack_1dcc;
  undefined4 uStack_1dc8;
  undefined4 uStack_1dc4;
  undefined4 uStack_1dc0;
  undefined4 uStack_1dbc;
  undefined4 uStack_1db8;
  undefined4 uStack_1db4;
  undefined4 uStack_1db0;
  undefined4 uStack_1dac;
  undefined4 uStack_1da8;
  undefined4 uStack_1da4;
  undefined4 uStack_1da0;
  undefined4 uStack_1d9c;
  undefined4 uStack_1d98;
  undefined4 uStack_1d94;
  undefined4 uStack_1d90;
  undefined4 uStack_1d8c;
  undefined4 uStack_1d88;
  undefined4 uStack_1d84;
  undefined4 uStack_1d80;
  undefined4 uStack_1d7c;
  undefined4 uStack_1d78;
  undefined4 uStack_1d74;
  undefined4 uStack_1d70;
  undefined4 uStack_1d6c;
  undefined4 uStack_1d68;
  undefined4 uStack_1d64;
  undefined4 uStack_1d60;
  undefined4 uStack_1d5c;
  undefined4 uStack_1d58;
  undefined4 uStack_1d54;
  undefined1 *puStack_1d44;
  undefined4 uStack_1d40;
  undefined4 uStack_1d3c;
  undefined4 uStack_1d38;
  undefined4 uStack_1d34;
  float *pfStack_1d30;
  undefined4 uStack_1d2c;
  undefined4 uStack_1d28;
  undefined4 uStack_1d24;
  undefined4 uStack_1d20;
  undefined4 uStack_1d1c;
  undefined4 uStack_1d18;
  undefined4 uStack_1d14;
  float afStack_1d08 [96];
  undefined1 auStack_1b88 [128];
  float afStack_1b08 [32];
  undefined4 uStack_1a88;
  undefined4 uStack_1a84;
  undefined4 uStack_1a80;
  undefined4 uStack_1a7c;
  undefined4 uStack_1a78;
  undefined4 uStack_1a74;
  undefined4 uStack_1a70;
  undefined4 uStack_1a6c;
  undefined4 uStack_1a68;
  undefined4 uStack_1a64;
  undefined4 uStack_1a60;
  undefined4 uStack_1a5c;
  undefined4 uStack_1a58;
  undefined4 uStack_1a54;
  undefined4 uStack_1a50;
  undefined4 uStack_1a4c;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined4 uStack_1a28;
  undefined4 uStack_1a24;
  undefined4 uStack_1a20;
  undefined4 uStack_1a1c;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined8 uStack_19b0;
  undefined4 uStack_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  undefined4 uStack_199c;
  undefined4 uStack_1998;
  undefined4 uStack_1994;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined4 uStack_1968;
  undefined4 uStack_1964;
  undefined4 uStack_1960;
  undefined4 uStack_195c;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined4 uStack_1948;
  undefined4 uStack_1944;
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  undefined4 uStack_1938;
  undefined4 uStack_1934;
  undefined4 uStack_1930;
  undefined4 uStack_192c;
  undefined4 uStack_1928;
  undefined4 uStack_1924;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  undefined4 uStack_1918;
  undefined4 uStack_1914;
  undefined4 uStack_1910;
  undefined4 uStack_190c;
  undefined4 uStack_1908;
  undefined4 uStack_1904;
  undefined4 uStack_1900;
  undefined4 uStack_18fc;
  undefined4 uStack_18f8;
  undefined4 uStack_18f4;
  undefined4 uStack_18f0;
  undefined4 uStack_18ec;
  undefined4 uStack_18e8;
  undefined4 uStack_18e4;
  undefined4 uStack_18e0;
  undefined4 uStack_18dc;
  undefined4 uStack_18d8;
  undefined4 uStack_18d4;
  undefined4 uStack_18d0;
  undefined4 uStack_18cc;
  undefined4 uStack_18c8;
  undefined4 uStack_18c4;
  undefined4 uStack_18c0;
  undefined4 uStack_18bc;
  undefined4 uStack_18b8;
  undefined4 uStack_18b4;
  undefined4 uStack_18b0;
  undefined4 uStack_18ac;
  undefined4 uStack_18a8;
  undefined4 uStack_18a4;
  undefined4 uStack_18a0;
  undefined4 uStack_189c;
  undefined4 uStack_1898;
  undefined4 uStack_1894;
  undefined4 uStack_1890;
  undefined4 uStack_188c;
  float fStack_1888;
  float afStack_1880 [2];
  undefined1 auStack_1878 [8];
  float afStack_1870 [2];
  undefined1 auStack_1868 [6144];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  auVar155._0_8_ = in_q4._0_8_;
  uStack_60 = in_q4._8_8_;
  uStack_58 = in_q5._0_8_;
  uStack_50 = in_q5._8_8_;
  uStack_48 = in_q6._0_8_;
  uStack_40 = in_q6._8_8_;
  uStack_68 = auVar155._0_8_;
  if (param_1[1] < 3) {
    if (param_1[1] != 0) {
      pfStack_1f34 = afStack_1880;
      puStack_1d44 = auStack_1878;
      puVar32 = auStack_1868;
      pfStack_1f30 = afStack_1870;
      goto LAB_71b0b084;
    }
    if ((char)param_1[0xc] == '\0') {
      return;
    }
    imp___aeabi_memcpy4(&uStack_1a88,*(int *)param_1[0x19] + 0x3728,0x204);
    pfStack_1f30 = (float *)0x0;
LAB_71b0c1fc:
    uVar25 = 0;
    uVar34 = *param_1;
  }
  else {
    pfStack_1f30 = (float *)param_1[0x10];
    puStack_1d44 = (undefined1 *)param_1[0x13];
    pfStack_1f34 = (float *)param_1[0x16];
    puVar32 = (undefined1 *)param_1[0xd];
LAB_71b0b084:
    auVar155._12_4_ = in_q4._12_4_;
    auVar155._8_4_ = 0x3f800000;
    puVar38 = puVar32 + 0x800;
    pfStack_1d30 = (float *)(puVar32 + 0xa84);
    uVar34 = 0;
    auVar133._12_4_ = 0;
    auVar133._0_12_ = auVar155._4_12_;
    auVar145 = auVar133 << 0x20;
    puVar33 = puVar32;
    do {
      iVar21 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar21 = *(int *)(param_2 + 0x2c);
      }
      iVar26 = *(int *)(param_1[0x19] + uVar34 * 4) + 0x52fc;
      uVar29 = *(undefined4 *)(*(int *)(iVar21 + 8) + *(int *)(iVar21 + 0x1c) * uVar34 * 4);
      pfVar35 = (float *)(puVar32 + uVar34 * 0xc00);
      imp___aeabi_memmove4(pfVar35 + 0x200,iVar26,0x180);
      imp___aeabi_memmove4(pfVar35 + 0x260,uVar29,0x280);
      imp___aeabi_memmove4(iVar26,pfVar35 + 0x2a0,0x180);
      iVar21 = 0;
      do {
        pfVar22 = (float *)(puVar38 + iVar21);
        pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
        iVar21 = iVar21 + 4;
        *pfVar22 = *pfVar24 * *pfVar22;
      } while (iVar21 != 0x180);
      iVar21 = 0x17c;
      pfVar22 = pfStack_1d30;
      do {
        pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
        iVar21 = iVar21 + -4;
        *pfVar22 = *pfVar24 * *pfVar22;
        pfVar22 = pfVar22 + 1;
      } while (iVar21 != 0);
      iVar21 = 0;
      fVar40 = 0.0;
      do {
        pfVar22 = (float *)(puVar38 + iVar21);
        iVar21 = iVar21 + 4;
        fVar40 = fVar40 + *pfVar22 * *pfVar22;
      } while (iVar21 != 0x400);
      *(float *)(puStack_1d44 + uVar34 * 4) = fVar40;
      thunk_joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
                (param_1 + 6,pfVar35 + 0x200,pfVar35,pfVar35 + 0x100);
      afStack_1d08[0] = ABS(*pfVar35) + auVar145._8_4_;
      afStack_1b08[0] = ABS(pfVar35[0x80]) + auVar145._8_4_;
      iVar21 = -0x1fc;
      do {
        fVar40 = (float)thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic
                                  (*(float *)(puVar33 + iVar21 + 0x600) *
                                   *(float *)(puVar33 + iVar21 + 0x600) +
                                   *(float *)(puVar33 + iVar21 + 0x200) *
                                   *(float *)(puVar33 + iVar21 + 0x200));
        iVar26 = iVar21 + 4;
        *(float *)((int)afStack_1b08 + iVar21) = fVar40 + auVar145._8_4_;
        iVar21 = iVar26;
      } while (iVar26 != 0);
      iVar21 = *(int *)(param_1[0x19] + uVar34 * 4);
      thunk_rnoOryioIowYBvrIgEQJNhFWuMBjsvsVnsgoAWZbikwDbtCaRAMM_dPVuyCqvugfxQcF
                (iVar21 + 0x331c,param_1[5],iVar21 + 0x3f48,iVar21 + 0x393c,iVar21 + 0x3d44,
                 afStack_1d08);
      if (1 < *param_1) {
        fVar141 = 0.0;
        iVar21 = *(int *)(param_1[0x19] + uVar34 * 4);
        auVar144._8_8_ = auVar145._8_8_;
        auVar144._0_4_ = auVar145._0_4_;
        auVar144._4_4_ = *(undefined4 *)(iVar21 + 0x38b0);
        fVar40 = *(float *)(iVar21 + 0x3924);
        auVar129._4_8_ = extraout_var_03._4_8_;
        auVar129._0_4_ = *(undefined4 *)(iVar21 + 0x32e0);
        auVar130._0_12_ = auVar129 << 0x20;
        fVar41 = *(float *)(iVar21 + 0x3920);
        auVar130._12_4_ = *(undefined4 *)(iVar21 + 0x32e4);
        fVar42 = *(float *)(iVar21 + 0x391c);
        fVar43 = *(float *)(iVar21 + 0x3918);
        fVar44 = *(float *)(iVar21 + 0x3914);
        fVar45 = *(float *)(iVar21 + 0x3910);
        fVar46 = *(float *)(iVar21 + 0x390c);
        auVar147._12_4_ = *(float *)(iVar21 + 0x32b8);
        fVar47 = *(float *)(iVar21 + 0x3908);
        fVar48 = *(float *)(iVar21 + 0x3904);
        fVar49 = *(float *)(iVar21 + 0x3900);
        fVar50 = *(float *)(iVar21 + 0x38fc);
        auVar64._0_4_ = *(float *)(iVar21 + 0x38f8);
        auVar64._4_12_ = extraout_var;
        auVar65._12_4_ = extraout_var._8_4_;
        auVar65._0_8_ = auVar64._0_8_;
        auVar65._8_4_ = *(undefined4 *)(iVar21 + 0x32d0);
        auVar153._4_12_ = auVar65._4_12_;
        fVar51 = *(float *)(iVar21 + 0x38f4);
        auVar131._4_12_ = auVar130._4_12_;
        auVar131._0_4_ = *(undefined4 *)(iVar21 + 0x32d4);
        fVar52 = *(float *)(iVar21 + 0x38f0);
        fVar53 = *(float *)(iVar21 + 0x38ec);
        fVar54 = *(float *)(iVar21 + 0x38e8);
        fVar55 = *(float *)(iVar21 + 0x38e4);
        fVar56 = *(float *)(iVar21 + 0x38e0);
        fVar57 = *(float *)(iVar21 + 0x38dc);
        fVar58 = *(float *)(iVar21 + 0x38d8);
        auVar147._0_4_ = *(float *)(iVar21 + 0x32ac);
        fVar59 = *(float *)(iVar21 + 0x38d4);
        fVar60 = *(float *)(iVar21 + 0x38d0);
        auVar147._4_4_ = *(undefined4 *)(iVar21 + 0x38a8);
        auVar62._0_4_ = (float)param_1[3];
        auVar132._0_8_ = auVar131._0_8_;
        fVar135 = *(float *)(iVar21 + 0x38cc);
        fVar136 = *(float *)(iVar21 + 0x38c8);
        fVar137 = *(float *)(iVar21 + 0x38c4);
        fVar138 = *(float *)(iVar21 + 0x38c0);
        fVar139 = *(float *)(iVar21 + 0x38bc);
        fVar140 = *(float *)(iVar21 + 0x38b8);
        auVar132._8_4_ = 0.0;
        auVar132._12_4_ = (float)auVar130._12_4_;
        fVar151 = *(float *)(iVar21 + 0x38b4);
        auVar145._0_12_ = auVar144._0_12_;
        auVar145._12_4_ = *(undefined4 *)(iVar21 + 0x38ac);
        iVar26 = 0;
        auVar153._0_4_ = *(undefined4 *)(iVar21 + 0x32cc);
        do {
          auVar133 = auVar132;
          auVar155 = auVar153;
          auVar66._8_8_ = auVar155._8_8_;
          auVar66._0_4_ = auVar155._0_4_;
          auVar66._4_4_ = *(float *)((int)afStack_1d08 + iVar26);
          pfVar35 = (float *)(iVar21 + 0x4f78 + iVar26);
          iVar26 = iVar26 + 4;
          auVar153._0_12_ = auVar66._0_12_;
          auVar153._12_4_ = *pfVar35;
          auVar132._12_4_ = auVar133._12_4_;
          auVar132._0_8_ = auVar133._0_8_;
          auVar132._8_4_ = auVar133._8_4_ + auVar66._4_4_;
          fVar141 = fVar141 + auVar153._12_4_;
        } while (iVar26 != 0x204);
        auVar147._8_4_ = 0x3d000000;
        auVar148._4_12_ = auVar147._4_12_;
        auVar148._0_4_ =
             (*(float *)(iVar21 + 0x3298) + auVar144._0_4_ + *(float *)(iVar21 + 0x329c) +
              *(float *)(iVar21 + 0x32a0) + *(float *)(iVar21 + 0x32a4) +
              *(float *)(iVar21 + 0x32a8) + auVar147._0_4_ + *(float *)(iVar21 + 0x32b0) +
              *(float *)(iVar21 + 0x32b4) + auVar147._12_4_ + *(float *)(iVar21 + 0x32bc) +
              *(float *)(iVar21 + 0x32c0) + *(float *)(iVar21 + 0x32c4) + *(float *)(iVar21 + 13000)
              + auVar66._0_4_ + auVar155._8_4_ + auVar133._0_4_ + *(float *)(iVar21 + 0x32d8) +
              *(float *)(iVar21 + 0x32dc) + auVar133._4_4_ + auVar132._12_4_ +
              *(float *)(iVar21 + 0x32e8) + *(float *)(iVar21 + 0x32ec) +
              *(float *)(iVar21 + 0x32f0) + *(float *)(iVar21 + 0x32f4) +
              *(float *)(iVar21 + 0x32f8) + *(float *)(iVar21 + 0x32fc) +
              *(float *)(iVar21 + 0x3300) + *(float *)(iVar21 + 0x3304) +
              *(float *)(iVar21 + 0x3308) + *(float *)(iVar21 + 0x330c) +
              *(float *)(iVar21 + 0x3310) + *(float *)(iVar21 + 0x3314)) * 0.03125 *
             (auVar132._8_4_ / fVar141);
        fVar141 = (float)imp_tanhf(auVar148._0_4_ + auVar148._0_4_ + -1.0);
        auVar67._0_4_ = auVar148._4_4_ + auVar145._0_4_;
        auVar67._4_12_ = extraout_var_00;
        auVar63._12_4_ = extraout_var_00._8_4_;
        auVar68._0_8_ = auVar67._0_8_;
        auVar68._8_4_ = fVar140;
        auVar68._12_4_ = auVar63._12_4_;
        auVar69._4_12_ = auVar68._4_12_;
        auVar69._0_4_ = auVar67._0_4_ + auVar145._12_4_ + auVar145._4_4_ + fVar151 + fVar140;
        auVar70._0_8_ = auVar69._0_8_;
        auVar70._8_4_ = fVar139;
        auVar70._12_4_ = auVar63._12_4_;
        auVar71._4_12_ = auVar70._4_12_;
        auVar71._0_4_ = auVar69._0_4_ + fVar139;
        auVar72._0_8_ = auVar71._0_8_;
        auVar72._8_4_ = fVar138;
        auVar72._12_4_ = auVar63._12_4_;
        auVar73._4_12_ = auVar72._4_12_;
        auVar73._0_4_ = auVar71._0_4_ + fVar138;
        auVar74._0_8_ = auVar73._0_8_;
        auVar74._8_4_ = fVar137;
        auVar74._12_4_ = auVar63._12_4_;
        auVar75._4_12_ = auVar74._4_12_;
        auVar75._0_4_ = auVar73._0_4_ + fVar137;
        auVar76._0_8_ = auVar75._0_8_;
        auVar76._8_4_ = fVar136;
        auVar76._12_4_ = auVar63._12_4_;
        auVar77._4_12_ = auVar76._4_12_;
        auVar77._0_4_ = auVar75._0_4_ + fVar136;
        auVar78._0_8_ = auVar77._0_8_;
        auVar78._8_4_ = fVar135;
        auVar78._12_4_ = auVar63._12_4_;
        auVar79._4_12_ = auVar78._4_12_;
        auVar79._0_4_ = auVar77._0_4_ + fVar135;
        auVar80._0_8_ = auVar79._0_8_;
        auVar80._8_4_ = fVar60;
        auVar80._12_4_ = auVar63._12_4_;
        auVar81._4_12_ = auVar80._4_12_;
        auVar81._0_4_ = auVar79._0_4_ + fVar60;
        auVar82._0_8_ = auVar81._0_8_;
        auVar82._8_4_ = fVar59;
        auVar82._12_4_ = auVar63._12_4_;
        auVar83._4_12_ = auVar82._4_12_;
        auVar83._0_4_ = auVar81._0_4_ + fVar59;
        auVar84._0_8_ = auVar83._0_8_;
        auVar84._8_4_ = fVar58;
        auVar84._12_4_ = auVar63._12_4_;
        auVar85._4_12_ = auVar84._4_12_;
        auVar85._0_4_ = auVar83._0_4_ + fVar58;
        auVar86._0_8_ = auVar85._0_8_;
        auVar86._8_4_ = fVar57;
        auVar86._12_4_ = auVar63._12_4_;
        auVar87._4_12_ = auVar86._4_12_;
        auVar87._0_4_ = auVar85._0_4_ + fVar57;
        auVar88._0_8_ = auVar87._0_8_;
        auVar88._8_4_ = fVar56;
        auVar88._12_4_ = auVar63._12_4_;
        auVar89._4_12_ = auVar88._4_12_;
        auVar89._0_4_ = auVar87._0_4_ + fVar56;
        auVar90._0_8_ = auVar89._0_8_;
        auVar90._8_4_ = fVar55;
        auVar90._12_4_ = auVar63._12_4_;
        auVar91._4_12_ = auVar90._4_12_;
        auVar91._0_4_ = auVar89._0_4_ + fVar55;
        auVar92._0_8_ = auVar91._0_8_;
        auVar92._8_4_ = fVar54;
        auVar92._12_4_ = auVar63._12_4_;
        auVar93._4_12_ = auVar92._4_12_;
        auVar93._0_4_ = auVar91._0_4_ + fVar54;
        auVar94._0_8_ = auVar93._0_8_;
        auVar94._8_4_ = fVar53;
        auVar94._12_4_ = auVar63._12_4_;
        auVar95._4_12_ = auVar94._4_12_;
        auVar95._0_4_ = auVar93._0_4_ + fVar53;
        auVar96._0_8_ = auVar95._0_8_;
        auVar96._8_4_ = fVar52;
        auVar96._12_4_ = auVar63._12_4_;
        auVar97._4_12_ = auVar96._4_12_;
        auVar97._0_4_ = auVar95._0_4_ + fVar52;
        auVar98._0_8_ = auVar97._0_8_;
        auVar98._8_4_ = fVar51;
        auVar98._12_4_ = auVar63._12_4_;
        auVar99._4_12_ = auVar98._4_12_;
        auVar99._0_4_ = auVar97._0_4_ + fVar51;
        auVar100._0_8_ = auVar99._0_8_;
        auVar100._8_4_ = auVar64._0_4_;
        auVar100._12_4_ = auVar63._12_4_;
        auVar101._4_12_ = auVar100._4_12_;
        auVar101._0_4_ = auVar99._0_4_ + auVar64._0_4_;
        auVar102._0_8_ = auVar101._0_8_;
        auVar102._8_4_ = fVar50;
        auVar102._12_4_ = auVar63._12_4_;
        auVar103._4_12_ = auVar102._4_12_;
        auVar103._0_4_ = auVar101._0_4_ + fVar50;
        auVar104._0_8_ = auVar103._0_8_;
        auVar104._8_4_ = fVar49;
        auVar104._12_4_ = auVar63._12_4_;
        auVar105._4_12_ = auVar104._4_12_;
        auVar105._0_4_ = auVar103._0_4_ + fVar49;
        auVar106._0_8_ = auVar105._0_8_;
        auVar106._8_4_ = fVar48;
        auVar106._12_4_ = auVar63._12_4_;
        auVar107._4_12_ = auVar106._4_12_;
        auVar107._0_4_ = auVar105._0_4_ + fVar48;
        auVar108._0_8_ = auVar107._0_8_;
        auVar108._8_4_ = fVar47;
        auVar108._12_4_ = auVar63._12_4_;
        auVar109._4_12_ = auVar108._4_12_;
        auVar109._0_4_ = auVar107._0_4_ + fVar47;
        auVar110._0_8_ = auVar109._0_8_;
        auVar110._8_4_ = fVar46;
        auVar110._12_4_ = auVar63._12_4_;
        auVar111._4_12_ = auVar110._4_12_;
        auVar111._0_4_ = auVar109._0_4_ + fVar46;
        auVar112._0_8_ = auVar111._0_8_;
        auVar112._8_4_ = fVar45;
        auVar112._12_4_ = auVar63._12_4_;
        auVar113._4_12_ = auVar112._4_12_;
        auVar113._0_4_ = auVar111._0_4_ + fVar45;
        auVar114._0_8_ = auVar113._0_8_;
        auVar114._8_4_ = fVar44;
        auVar114._12_4_ = auVar63._12_4_;
        auVar115._4_12_ = auVar114._4_12_;
        auVar115._0_4_ = auVar113._0_4_ + fVar44;
        auVar116._0_8_ = auVar115._0_8_;
        auVar116._8_4_ = fVar43;
        auVar116._12_4_ = auVar63._12_4_;
        auVar117._4_12_ = auVar116._4_12_;
        auVar117._0_4_ = auVar115._0_4_ + fVar43;
        auVar118._0_8_ = auVar117._0_8_;
        auVar118._8_4_ = fVar42;
        auVar118._12_4_ = auVar63._12_4_;
        auVar119._4_12_ = auVar118._4_12_;
        auVar119._0_4_ = auVar117._0_4_ + fVar42;
        auVar120._0_8_ = auVar119._0_8_;
        auVar120._8_4_ = fVar41;
        auVar120._12_4_ = auVar63._12_4_;
        auVar121._4_12_ = auVar120._4_12_;
        auVar121._0_4_ = auVar119._0_4_ + fVar41;
        auVar122._0_8_ = auVar121._0_8_;
        fVar42 = auVar145._8_4_;
        auVar122._8_4_ = fVar141 + fVar42;
        auVar122._12_4_ = auVar63._12_4_;
        auVar123._4_12_ = auVar122._4_12_;
        fVar41 = 0.5;
        auVar123._0_4_ = (auVar121._0_4_ + fVar40) * auVar148._8_4_;
        auVar124._0_8_ = auVar123._0_8_;
        auVar124._8_4_ = auVar122._8_4_ * 0.5;
        auVar124._12_4_ = auVar63._12_4_;
        fVar40 = 0.5;
        auVar61._4_12_ = auVar124._4_12_;
        if (0.5 <= auVar148._0_4_) {
          fVar40 = 0.75;
          fVar41 = 0.25;
        }
        auVar61._0_4_ = auVar123._0_4_ * fVar40 + auVar124._8_4_ * fVar41;
        auVar63._0_8_ = auVar61._0_8_;
        auVar63._8_4_ = auVar62._0_4_;
        if (auVar61._0_4_ < auVar62._0_4_) {
          auVar62._4_12_ = auVar63._4_12_;
          auVar63 = auVar62;
        }
        if (fVar42 < auVar63._0_4_) {
          auVar63._0_4_ = fVar42;
        }
        pfStack_1f30[uVar34] = auVar63._0_4_;
      }
      uVar25 = param_1[1];
      uVar34 = uVar34 + 1;
      puVar33 = puVar33 + 0xc00;
      puVar38 = puVar38 + 0xc00;
      pfStack_1d30 = pfStack_1d30 + 0x300;
    } while (uVar34 < uVar25);
    if ((char)param_1[0xc] == '\0') {
      return;
    }
    piVar30 = (int *)param_1[0x19];
    puVar23 = (undefined4 *)(*piVar30 + 0x3728);
    if (uVar25 == 1) {
      uVar25 = 1;
      puVar36 = puVar23;
LAB_71b0bed4:
      uVar34 = 0;
      puVar33 = puVar32;
      do {
        iVar21 = 0;
        do {
          pfVar35 = (float *)(puVar33 + iVar21);
          pfVar22 = (float *)((int)puVar36 + iVar21);
          iVar21 = iVar21 + 4;
          *pfVar35 = *pfVar22 * *pfVar35;
          pfVar35[0x100] = *pfVar22 * pfVar35[0x100];
        } while (iVar21 != 0x204);
        uVar34 = uVar34 + 1;
        puVar33 = puVar33 + 0xc00;
      } while (uVar34 != uVar25);
      uVar34 = 0;
      puVar33 = puVar32;
      do {
        thunk_sXGpypvxixdQqZGLFHnhSs_guvnyvjlAHqBYLktUjxQ_eyHNQGJIoUvwiwAZhsWONNFsK
                  (param_1 + 6,puVar33,0x100,puVar33 + 0x400,0x100,puVar33 + 0x800,0x100);
        uVar34 = uVar34 + 1;
        puVar33 = puVar33 + 0xc00;
      } while (uVar34 < param_1[1]);
      if (param_1[1] != 0) {
        pfVar35 = (float *)(puVar32 + 0xa84);
        puVar33 = puVar32 + 0x800;
        auVar146._12_4_ = 0;
        auVar146._0_12_ = auVar145._4_12_;
        auVar146 = auVar146 << 0x20;
        uVar34 = 0;
        auVar129 = extraout_var_01;
        do {
          auVar125._4_12_ = auVar129;
          auVar125._0_4_ = (float)auVar146._0_4_;
          iVar21 = 0;
          do {
            pfVar22 = (float *)(puVar33 + iVar21);
            iVar21 = iVar21 + 4;
            auVar126._12_4_ = auVar125._12_4_;
            auVar126._0_8_ = auVar125._0_8_;
            auVar126._8_4_ = *pfVar22;
            fVar40 = auVar125._0_4_;
            auVar125._4_12_ = auVar126._4_12_;
            auVar125._0_4_ = fVar40 + auVar126._8_4_ * auVar126._8_4_;
          } while (iVar21 != 0x400);
          iVar21 = 0;
          do {
            pfVar22 = (float *)(puVar33 + iVar21);
            pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
            iVar21 = iVar21 + 4;
            auVar125._8_4_ = *pfVar24 * *pfVar22;
            *pfVar22 = auVar125._8_4_;
          } while (iVar21 != 0x180);
          iVar21 = 0x17c;
          pfVar22 = pfVar35;
          do {
            auVar155 = auVar125;
            pfVar24 = (float *)((int)&DAT_7009a3b0 + iVar21);
            auVar125._12_4_ = auVar155._12_4_;
            auVar125._0_8_ = auVar155._0_8_;
            iVar21 = iVar21 + -4;
            auVar125._8_4_ = *pfVar24 * *pfVar22;
            *pfVar22 = auVar125._8_4_;
            pfVar22 = pfVar22 + 1;
          } while (iVar21 != 0);
          iVar21 = *(int *)(param_1[0x19] + uVar34 * 4);
          fVar40 = (float)thunk_ulihJQtFaRuCYSYjALwwFUgIKGYQqcUmOMjzIfbFWLuVVGBRa_CsNlAZpdg
                                    (iVar21 + 0x331c,param_1[5],*(undefined4 *)(iVar21 + 0x3114),
                                     *(undefined4 *)(puStack_1d44 + uVar34 * 4),auVar155._0_4_);
          pfVar35 = pfVar35 + 0x300;
          puVar33 = puVar33 + 0xc00;
          pfStack_1f34[uVar34] = fVar40;
          uVar34 = uVar34 + 1;
          uVar25 = param_1[1];
          auVar129 = extraout_var_02;
        } while (uVar34 < uVar25);
        auVar127._0_4_ = *pfStack_1f34;
        auVar127._4_12_ = extraout_var_02;
        if (uVar25 < 2) {
          bVar39 = uVar25 == 0;
          uVar25 = 1;
          if (bVar39) goto LAB_71b0c1fc;
        }
        else {
          iVar21 = uVar25 - 1;
          do {
            pfStack_1f34 = pfStack_1f34 + 1;
            auVar128._12_4_ = auVar127._12_4_;
            auVar128._0_8_ = auVar127._0_8_;
            auVar128._8_4_ = *pfStack_1f34;
            fVar40 = auVar127._0_4_;
            auVar127 = auVar128;
            if (auVar128._8_4_ < fVar40) {
              auVar127._4_12_ = auVar128._4_12_;
              auVar127._0_4_ = auVar128._8_4_;
            }
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        uVar34 = 0;
        puVar33 = puVar32 + 0x800;
        do {
          iVar21 = 0;
          do {
            pfVar35 = (float *)(puVar33 + iVar21);
            iVar21 = iVar21 + 4;
            auVar127._8_4_ = auVar127._0_4_ * *pfVar35;
            *pfVar35 = auVar127._8_4_;
          } while (iVar21 != 0x400);
          uVar34 = uVar34 + 1;
          puVar33 = puVar33 + 0xc00;
        } while (uVar34 != uVar25);
        uVar34 = 0;
        puVar33 = puVar32 + 0x800;
        do {
          iVar21 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar21 = *(int *)(param_2 + 0x2c);
          }
          iVar27 = *(int *)(param_1[0x19] + uVar34 * 4) + 0x547c;
          iVar21 = *(int *)(*(int *)(iVar21 + 8) + *(int *)(iVar21 + 0x1c) * uVar34 * 4);
          iVar26 = 0;
          do {
            pfVar35 = (float *)(puVar33 + iVar26);
            pfVar22 = (float *)(iVar27 + iVar26);
            pfVar24 = (float *)(iVar21 + iVar26);
            iVar26 = iVar26 + 4;
            *pfVar24 = *pfVar22 + *pfVar35;
          } while (iVar26 != 0x180);
          imp___aeabi_memmove4(iVar21 + 0x180,puVar32 + uVar34 * 0xc00 + 0x980,0x100);
          imp___aeabi_memmove4(iVar27,puVar32 + uVar34 * 0xc00 + 0xa80,0x180);
          puVar33 = puVar33 + 0xc00;
          uVar34 = uVar34 + 1;
          uVar25 = param_1[1];
        } while (uVar34 < uVar25);
        uVar34 = *param_1;
        goto joined_r0x71b0c0a4;
      }
    }
    else {
      puVar36 = &uStack_1a88;
      imp___aeabi_memcpy4(puVar36,puVar23,0x204);
      if (uVar25 != 0) {
        uStack_1d20 = uStack_1a78;
        uStack_1d1c = uStack_1a74;
        uStack_1d18 = uStack_1a70;
        uStack_1d14 = uStack_1a6c;
        uStack_1d70 = uStack_1a68;
        uStack_1d6c = uStack_1a64;
        uStack_1d68 = uStack_1a60;
        uStack_1d64 = uStack_1a5c;
        uStack_1d80 = uStack_1a58;
        uStack_1d7c = uStack_1a54;
        uStack_1d78 = uStack_1a50;
        uStack_1d74 = uStack_1a4c;
        auVar154._8_8_ = uStack_1a40;
        auVar154._0_8_ = uStack_1a48;
        auVar142._8_8_ = uStack_1a30;
        auVar142._0_8_ = uStack_1a38;
        uStack_1d40 = uStack_1a88;
        uStack_1d3c = uStack_1a84;
        uStack_1d38 = uStack_1a80;
        uStack_1d34 = uStack_1a7c;
        uStack_1da0 = uStack_1a28;
        uStack_1d9c = uStack_1a24;
        uStack_1d98 = uStack_1a20;
        uStack_1d94 = uStack_1a1c;
        auVar157._8_8_ = uStack_1a10;
        auVar157._0_8_ = uStack_1a18;
        auVar156._8_8_ = uStack_1a00;
        auVar156._0_8_ = uStack_1a08;
        auVar158._8_8_ = uStack_19f0;
        auVar158._0_8_ = uStack_19f8;
        auVar149._8_8_ = uStack_19e0;
        auVar149._0_8_ = uStack_19e8;
        auVar159._8_8_ = uStack_19d0;
        auVar159._0_8_ = uStack_19d8;
        uVar34 = 1;
        auVar152._8_8_ = uStack_19c0;
        auVar152._0_8_ = uStack_19c8;
        auVar150._8_8_ = uStack_19b0;
        auVar150._0_8_ = uStack_19b8;
        pfStack_1d30 = (float *)uStack_19a8;
        uStack_1d2c = uStack_19a4;
        uStack_1d28 = uStack_19a0;
        uStack_1d24 = uStack_199c;
        uStack_1d60 = uStack_1998;
        uStack_1d5c = uStack_1994;
        uStack_1d58 = uStack_1990;
        uStack_1d54 = uStack_198c;
        auVar143._8_8_ = uStack_1980;
        auVar143._0_8_ = uStack_1988;
        auVar145._8_8_ = uStack_1970;
        auVar145._0_8_ = uStack_1978;
        uStack_1dc0 = uStack_1968;
        uStack_1dbc = uStack_1964;
        uStack_1db8 = uStack_1960;
        uStack_1db4 = uStack_195c;
        auVar134._8_8_ = uStack_1950;
        auVar134._0_8_ = uStack_1958;
        uStack_1db0 = uStack_1948;
        uStack_1dac = uStack_1944;
        uStack_1da8 = uStack_1940;
        uStack_1da4 = uStack_193c;
        uStack_1d90 = uStack_1938;
        uStack_1d8c = uStack_1934;
        uStack_1d88 = uStack_1930;
        uStack_1d84 = uStack_192c;
        uStack_1dd0 = uStack_1928;
        uStack_1dcc = uStack_1924;
        uStack_1dc8 = uStack_1920;
        uStack_1dc4 = uStack_191c;
        uStack_1de0 = uStack_1918;
        uStack_1ddc = uStack_1914;
        uStack_1dd8 = uStack_1910;
        uStack_1dd4 = uStack_190c;
        uStack_1df0 = uStack_1908;
        uStack_1dec = uStack_1904;
        uStack_1de8 = uStack_1900;
        uStack_1de4 = uStack_18fc;
        uStack_1e00 = uStack_18f8;
        uStack_1dfc = uStack_18f4;
        uStack_1df8 = uStack_18f0;
        uStack_1df4 = uStack_18ec;
        uStack_1e10 = uStack_18e8;
        uStack_1e0c = uStack_18e4;
        uStack_1e08 = uStack_18e0;
        uStack_1e04 = uStack_18dc;
        uStack_1e20 = uStack_18d8;
        uStack_1e1c = uStack_18d4;
        uStack_1e18 = uStack_18d0;
        uStack_1e14 = uStack_18cc;
        uStack_1e30 = uStack_18c8;
        uStack_1e2c = uStack_18c4;
        uStack_1e28 = uStack_18c0;
        uStack_1e24 = uStack_18bc;
        uStack_1e40 = uStack_18b8;
        uStack_1e3c = uStack_18b4;
        uStack_1e38 = uStack_18b0;
        uStack_1e34 = uStack_18ac;
        uStack_1e60 = uStack_18a8;
        uStack_1e5c = uStack_18a4;
        uStack_1e58 = uStack_18a0;
        uStack_1e54 = uStack_189c;
        uStack_1e50 = uStack_1898;
        uStack_1e4c = uStack_1894;
        uStack_1e48 = uStack_1890;
        uStack_1e44 = uStack_188c;
        do {
          iVar21 = piVar30[uVar34];
          uVar34 = uVar34 + 1;
          auVar18._4_4_ = uStack_1d3c;
          auVar18._0_4_ = uStack_1d40;
          auVar18._8_4_ = uStack_1d38;
          auVar18._12_4_ = uStack_1d34;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar18,*(undefined1 (*) [16])(iVar21 + 0x3728),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar18,*(undefined1 (*) [16])(iVar21 + 0x3728),auVar155);
          uStack_1d40 = auVar155._0_4_;
          uStack_1d3c = auVar155._4_4_;
          uStack_1d38 = auVar155._8_4_;
          uStack_1d34 = auVar155._12_4_;
          auVar13._4_4_ = uStack_1d9c;
          auVar13._0_4_ = uStack_1da0;
          auVar13._8_4_ = uStack_1d98;
          auVar13._12_4_ = uStack_1d94;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar13,*(undefined1 (*) [16])(iVar21 + 0x3788),2);
          auVar20._4_4_ = uStack_1d1c;
          auVar20._0_4_ = uStack_1d20;
          auVar20._8_4_ = uStack_1d18;
          auVar20._12_4_ = uStack_1d14;
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar20,*(undefined1 (*) [16])(iVar21 + 0x3738),2);
          auVar133 = VectorBitwiseInsertIfTrue
                               (auVar20,*(undefined1 (*) [16])(iVar21 + 0x3738),auVar133);
          uStack_1d20 = auVar133._0_4_;
          uStack_1d1c = auVar133._4_4_;
          uStack_1d18 = auVar133._8_4_;
          uStack_1d14 = auVar133._12_4_;
          auVar15._4_4_ = uStack_1d7c;
          auVar15._0_4_ = uStack_1d80;
          auVar15._8_4_ = uStack_1d78;
          auVar15._12_4_ = uStack_1d74;
          auVar16._4_4_ = uStack_1d6c;
          auVar16._0_4_ = uStack_1d70;
          auVar16._8_4_ = uStack_1d68;
          auVar16._12_4_ = uStack_1d64;
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar16,*(undefined1 (*) [16])(iVar21 + 0x3748),2);
          auVar133 = VectorBitwiseInsertIfTrue
                               (auVar16,*(undefined1 (*) [16])(iVar21 + 0x3748),auVar133);
          auVar153 = FloatVectorCompareGreaterThan
                               (auVar15,*(undefined1 (*) [16])(iVar21 + 0x3758),2);
          uStack_1d70 = auVar133._0_4_;
          uStack_1d6c = auVar133._4_4_;
          uStack_1d68 = auVar133._8_4_;
          uStack_1d64 = auVar133._12_4_;
          auVar133 = VectorBitwiseInsertIfTrue
                               (auVar15,*(undefined1 (*) [16])(iVar21 + 0x3758),auVar153);
          uStack_1d80 = auVar133._0_4_;
          uStack_1d7c = auVar133._4_4_;
          uStack_1d78 = auVar133._8_4_;
          uStack_1d74 = auVar133._12_4_;
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar154,*(undefined1 (*) [16])(iVar21 + 0x3768),2);
          auVar154 = VectorBitwiseInsertIfTrue
                               (auVar154,*(undefined1 (*) [16])(iVar21 + 0x3768),auVar133);
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar142,*(undefined1 (*) [16])(iVar21 + 0x3778),2);
          auVar142 = VectorBitwiseInsertIfTrue
                               (auVar142,*(undefined1 (*) [16])(iVar21 + 0x3778),auVar133);
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar157,*(undefined1 (*) [16])(iVar21 + 0x3798),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar13,*(undefined1 (*) [16])(iVar21 + 0x3788),auVar155);
          uStack_1da0 = auVar155._0_4_;
          uStack_1d9c = auVar155._4_4_;
          uStack_1d98 = auVar155._8_4_;
          uStack_1d94 = auVar155._12_4_;
          auVar157 = VectorBitwiseInsertIfTrue
                               (auVar157,*(undefined1 (*) [16])(iVar21 + 0x3798),auVar133);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar156,*(undefined1 (*) [16])(iVar21 + 0x37a8),2);
          auVar156 = VectorBitwiseInsertIfTrue
                               (auVar156,*(undefined1 (*) [16])(iVar21 + 0x37a8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar158,*(undefined1 (*) [16])(iVar21 + 0x37b8),2);
          auVar158 = VectorBitwiseInsertIfTrue
                               (auVar158,*(undefined1 (*) [16])(iVar21 + 0x37b8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar149,*(undefined1 (*) [16])(iVar21 + 0x37c8),2);
          auVar149 = VectorBitwiseInsertIfTrue
                               (auVar149,*(undefined1 (*) [16])(iVar21 + 0x37c8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar159,*(undefined1 (*) [16])(iVar21 + 0x37d8),2);
          auVar159 = VectorBitwiseInsertIfTrue
                               (auVar159,*(undefined1 (*) [16])(iVar21 + 0x37d8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar152,*(undefined1 (*) [16])(iVar21 + 0x37e8),2);
          auVar152 = VectorBitwiseInsertIfTrue
                               (auVar152,*(undefined1 (*) [16])(iVar21 + 0x37e8),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar150,*(undefined1 (*) [16])(iVar21 + 0x37f8),2);
          auVar150 = VectorBitwiseInsertIfTrue
                               (auVar150,*(undefined1 (*) [16])(iVar21 + 0x37f8),auVar155);
          auVar19._4_4_ = uStack_1d2c;
          auVar19._0_4_ = pfStack_1d30;
          auVar19._8_4_ = uStack_1d28;
          auVar19._12_4_ = uStack_1d24;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar19,*(undefined1 (*) [16])(iVar21 + 0x3808),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar19,*(undefined1 (*) [16])(iVar21 + 0x3808),auVar155);
          pfStack_1d30 = auVar155._0_4_;
          uStack_1d2c = auVar155._4_4_;
          uStack_1d28 = auVar155._8_4_;
          uStack_1d24 = auVar155._12_4_;
          auVar17._4_4_ = uStack_1d5c;
          auVar17._0_4_ = uStack_1d60;
          auVar17._8_4_ = uStack_1d58;
          auVar17._12_4_ = uStack_1d54;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar17,*(undefined1 (*) [16])(iVar21 + 0x3818),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar17,*(undefined1 (*) [16])(iVar21 + 0x3818),auVar155);
          uStack_1d60 = auVar155._0_4_;
          uStack_1d5c = auVar155._4_4_;
          uStack_1d58 = auVar155._8_4_;
          uStack_1d54 = auVar155._12_4_;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar143,*(undefined1 (*) [16])(iVar21 + 0x3828),2);
          auVar143 = VectorBitwiseInsertIfTrue
                               (auVar143,*(undefined1 (*) [16])(iVar21 + 0x3828),auVar155);
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar145,*(undefined1 (*) [16])(iVar21 + 0x3838),2);
          auVar145 = VectorBitwiseInsertIfTrue
                               (auVar145,*(undefined1 (*) [16])(iVar21 + 0x3838),auVar155);
          auVar11._4_4_ = uStack_1dbc;
          auVar11._0_4_ = uStack_1dc0;
          auVar11._8_4_ = uStack_1db8;
          auVar11._12_4_ = uStack_1db4;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar11,*(undefined1 (*) [16])(iVar21 + 0x3848),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar11,*(undefined1 (*) [16])(iVar21 + 0x3848),auVar155);
          auVar133 = FloatVectorCompareGreaterThan
                               (auVar134,*(undefined1 (*) [16])(iVar21 + 0x3858),2);
          uStack_1dc0 = auVar155._0_4_;
          uStack_1dbc = auVar155._4_4_;
          uStack_1db8 = auVar155._8_4_;
          uStack_1db4 = auVar155._12_4_;
          auVar134 = VectorBitwiseInsertIfTrue
                               (auVar134,*(undefined1 (*) [16])(iVar21 + 0x3858),auVar133);
          auVar12._4_4_ = uStack_1dac;
          auVar12._0_4_ = uStack_1db0;
          auVar12._8_4_ = uStack_1da8;
          auVar12._12_4_ = uStack_1da4;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar12,*(undefined1 (*) [16])(iVar21 + 0x3868),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar12,*(undefined1 (*) [16])(iVar21 + 0x3868),auVar155);
          uStack_1db0 = auVar155._0_4_;
          uStack_1dac = auVar155._4_4_;
          uStack_1da8 = auVar155._8_4_;
          uStack_1da4 = auVar155._12_4_;
          auVar14._4_4_ = uStack_1d8c;
          auVar14._0_4_ = uStack_1d90;
          auVar14._8_4_ = uStack_1d88;
          auVar14._12_4_ = uStack_1d84;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar14,*(undefined1 (*) [16])(iVar21 + 0x3878),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar14,*(undefined1 (*) [16])(iVar21 + 0x3878),auVar155);
          uStack_1d90 = auVar155._0_4_;
          uStack_1d8c = auVar155._4_4_;
          uStack_1d88 = auVar155._8_4_;
          uStack_1d84 = auVar155._12_4_;
          auVar10._4_4_ = uStack_1dcc;
          auVar10._0_4_ = uStack_1dd0;
          auVar10._8_4_ = uStack_1dc8;
          auVar10._12_4_ = uStack_1dc4;
          auVar155 = FloatVectorCompareGreaterThan
                               (auVar10,*(undefined1 (*) [16])(iVar21 + 0x3888),2);
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar10,*(undefined1 (*) [16])(iVar21 + 0x3888),auVar155);
          uStack_1dd0 = auVar155._0_4_;
          uStack_1dcc = auVar155._4_4_;
          uStack_1dc8 = auVar155._8_4_;
          uStack_1dc4 = auVar155._12_4_;
          auVar9._4_4_ = uStack_1ddc;
          auVar9._0_4_ = uStack_1de0;
          auVar9._8_4_ = uStack_1dd8;
          auVar9._12_4_ = uStack_1dd4;
          auVar155 = FloatVectorCompareGreaterThan(auVar9,*(undefined1 (*) [16])(iVar21 + 0x3898),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar9,*(undefined1 (*) [16])(iVar21 + 0x3898),auVar155);
          uStack_1de0 = auVar155._0_4_;
          uStack_1ddc = auVar155._4_4_;
          uStack_1dd8 = auVar155._8_4_;
          uStack_1dd4 = auVar155._12_4_;
          auVar8._4_4_ = uStack_1dec;
          auVar8._0_4_ = uStack_1df0;
          auVar8._8_4_ = uStack_1de8;
          auVar8._12_4_ = uStack_1de4;
          auVar155 = FloatVectorCompareGreaterThan(auVar8,*(undefined1 (*) [16])(iVar21 + 0x38a8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar8,*(undefined1 (*) [16])(iVar21 + 0x38a8),auVar155);
          uStack_1df0 = auVar155._0_4_;
          uStack_1dec = auVar155._4_4_;
          uStack_1de8 = auVar155._8_4_;
          uStack_1de4 = auVar155._12_4_;
          auVar7._4_4_ = uStack_1dfc;
          auVar7._0_4_ = uStack_1e00;
          auVar7._8_4_ = uStack_1df8;
          auVar7._12_4_ = uStack_1df4;
          auVar155 = FloatVectorCompareGreaterThan(auVar7,*(undefined1 (*) [16])(iVar21 + 0x38b8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar7,*(undefined1 (*) [16])(iVar21 + 0x38b8),auVar155);
          uStack_1e00 = auVar155._0_4_;
          uStack_1dfc = auVar155._4_4_;
          uStack_1df8 = auVar155._8_4_;
          uStack_1df4 = auVar155._12_4_;
          auVar6._4_4_ = uStack_1e0c;
          auVar6._0_4_ = uStack_1e10;
          auVar6._8_4_ = uStack_1e08;
          auVar6._12_4_ = uStack_1e04;
          auVar155 = FloatVectorCompareGreaterThan(auVar6,*(undefined1 (*) [16])(iVar21 + 0x38c8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar6,*(undefined1 (*) [16])(iVar21 + 0x38c8),auVar155);
          uStack_1e10 = auVar155._0_4_;
          uStack_1e0c = auVar155._4_4_;
          uStack_1e08 = auVar155._8_4_;
          uStack_1e04 = auVar155._12_4_;
          auVar5._4_4_ = uStack_1e1c;
          auVar5._0_4_ = uStack_1e20;
          auVar5._8_4_ = uStack_1e18;
          auVar5._12_4_ = uStack_1e14;
          auVar155 = FloatVectorCompareGreaterThan(auVar5,*(undefined1 (*) [16])(iVar21 + 0x38d8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar5,*(undefined1 (*) [16])(iVar21 + 0x38d8),auVar155);
          uStack_1e20 = auVar155._0_4_;
          uStack_1e1c = auVar155._4_4_;
          uStack_1e18 = auVar155._8_4_;
          uStack_1e14 = auVar155._12_4_;
          auVar4._4_4_ = uStack_1e2c;
          auVar4._0_4_ = uStack_1e30;
          auVar4._8_4_ = uStack_1e28;
          auVar4._12_4_ = uStack_1e24;
          auVar155 = FloatVectorCompareGreaterThan(auVar4,*(undefined1 (*) [16])(iVar21 + 0x38e8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar4,*(undefined1 (*) [16])(iVar21 + 0x38e8),auVar155);
          uStack_1e30 = auVar155._0_4_;
          uStack_1e2c = auVar155._4_4_;
          uStack_1e28 = auVar155._8_4_;
          uStack_1e24 = auVar155._12_4_;
          auVar3._4_4_ = uStack_1e3c;
          auVar3._0_4_ = uStack_1e40;
          auVar3._8_4_ = uStack_1e38;
          auVar3._12_4_ = uStack_1e34;
          auVar155 = FloatVectorCompareGreaterThan(auVar3,*(undefined1 (*) [16])(iVar21 + 0x38f8),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar3,*(undefined1 (*) [16])(iVar21 + 0x38f8),auVar155);
          uStack_1e40 = auVar155._0_4_;
          uStack_1e3c = auVar155._4_4_;
          uStack_1e38 = auVar155._8_4_;
          uStack_1e34 = auVar155._12_4_;
          auVar1._4_4_ = uStack_1e5c;
          auVar1._0_4_ = uStack_1e60;
          auVar1._8_4_ = uStack_1e58;
          auVar1._12_4_ = uStack_1e54;
          auVar155 = FloatVectorCompareGreaterThan(auVar1,*(undefined1 (*) [16])(iVar21 + 0x3908),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar1,*(undefined1 (*) [16])(iVar21 + 0x3908),auVar155);
          uStack_1e60 = auVar155._0_4_;
          uStack_1e5c = auVar155._4_4_;
          uStack_1e58 = auVar155._8_4_;
          uStack_1e54 = auVar155._12_4_;
          auVar2._4_4_ = uStack_1e4c;
          auVar2._0_4_ = uStack_1e50;
          auVar2._8_4_ = uStack_1e48;
          auVar2._12_4_ = uStack_1e44;
          auVar155 = FloatVectorCompareGreaterThan(auVar2,*(undefined1 (*) [16])(iVar21 + 0x3918),2)
          ;
          auVar155 = VectorBitwiseInsertIfTrue
                               (auVar2,*(undefined1 (*) [16])(iVar21 + 0x3918),auVar155);
          uStack_1e50 = auVar155._0_4_;
          uStack_1e4c = auVar155._4_4_;
          uStack_1e48 = auVar155._8_4_;
          uStack_1e44 = auVar155._12_4_;
          if (*(float *)(iVar21 + 0x3928) < fStack_1888) {
            fStack_1888 = *(float *)(iVar21 + 0x3928);
          }
        } while (uVar25 != uVar34);
        uStack_1a78 = uStack_1d20;
        uStack_1a74 = uStack_1d1c;
        uStack_1a70 = uStack_1d18;
        uStack_1a6c = uStack_1d14;
        uStack_1a68 = uStack_1d70;
        uStack_1a64 = uStack_1d6c;
        uStack_1a60 = uStack_1d68;
        uStack_1a5c = uStack_1d64;
        uStack_1a58 = uStack_1d80;
        uStack_1a54 = uStack_1d7c;
        uStack_1a50 = uStack_1d78;
        uStack_1a4c = uStack_1d74;
        uStack_1a48 = auVar154._0_8_;
        uStack_1a40 = auVar154._8_8_;
        uStack_1a38 = auVar142._0_8_;
        uStack_1a30 = auVar142._8_8_;
        uStack_1a28 = uStack_1da0;
        uStack_1a24 = uStack_1d9c;
        uStack_1a20 = uStack_1d98;
        uStack_1a1c = uStack_1d94;
        uStack_1a18 = auVar157._0_8_;
        uStack_1a10 = auVar157._8_8_;
        uStack_1a08 = auVar156._0_8_;
        uStack_1a00 = auVar156._8_8_;
        uStack_19f8 = auVar158._0_8_;
        uStack_19f0 = auVar158._8_8_;
        uStack_19e8 = auVar149._0_8_;
        uStack_19e0 = auVar149._8_8_;
        uStack_19d8 = auVar159._0_8_;
        uStack_19d0 = auVar159._8_8_;
        uStack_19c8 = auVar152._0_8_;
        uStack_19c0 = auVar152._8_8_;
        uStack_19b8 = auVar150._0_8_;
        uStack_19b0 = auVar150._8_8_;
        uStack_19a8 = pfStack_1d30;
        uStack_19a4 = uStack_1d2c;
        uStack_19a0 = uStack_1d28;
        uStack_199c = uStack_1d24;
        uStack_1998 = uStack_1d60;
        uStack_1994 = uStack_1d5c;
        uStack_1990 = uStack_1d58;
        uStack_198c = uStack_1d54;
        uStack_1988 = auVar143._0_8_;
        uStack_1980 = auVar143._8_8_;
        uStack_1978 = auVar145._0_8_;
        uStack_1970 = auVar145._8_8_;
        uStack_1968 = uStack_1dc0;
        uStack_1964 = uStack_1dbc;
        uStack_1960 = uStack_1db8;
        uStack_195c = uStack_1db4;
        uStack_1a88 = uStack_1d40;
        uStack_1a84 = uStack_1d3c;
        uStack_1a80 = uStack_1d38;
        uStack_1a7c = uStack_1d34;
        uStack_1948 = uStack_1db0;
        uStack_1944 = uStack_1dac;
        uStack_1940 = uStack_1da8;
        uStack_193c = uStack_1da4;
        uStack_1958 = auVar134._0_8_;
        uStack_1950 = auVar134._8_8_;
        uStack_1938 = uStack_1d90;
        uStack_1934 = uStack_1d8c;
        uStack_1930 = uStack_1d88;
        uStack_192c = uStack_1d84;
        uStack_1928 = uStack_1dd0;
        uStack_1924 = uStack_1dcc;
        uStack_1920 = uStack_1dc8;
        uStack_191c = uStack_1dc4;
        uStack_1918 = uStack_1de0;
        uStack_1914 = uStack_1ddc;
        uStack_1910 = uStack_1dd8;
        uStack_190c = uStack_1dd4;
        uStack_1908 = uStack_1df0;
        uStack_1904 = uStack_1dec;
        uStack_1900 = uStack_1de8;
        uStack_18fc = uStack_1de4;
        uStack_18f8 = uStack_1e00;
        uStack_18f4 = uStack_1dfc;
        uStack_18f0 = uStack_1df8;
        uStack_18ec = uStack_1df4;
        uStack_18e8 = uStack_1e10;
        uStack_18e4 = uStack_1e0c;
        uStack_18e0 = uStack_1e08;
        uStack_18dc = uStack_1e04;
        uStack_18d8 = uStack_1e20;
        uStack_18d4 = uStack_1e1c;
        uStack_18d0 = uStack_1e18;
        uStack_18cc = uStack_1e14;
        uStack_18c8 = uStack_1e30;
        uStack_18c4 = uStack_1e2c;
        uStack_18c0 = uStack_1e28;
        uStack_18bc = uStack_1e24;
        uStack_18b8 = uStack_1e40;
        uStack_18b4 = uStack_1e3c;
        uStack_18b0 = uStack_1e38;
        uStack_18ac = uStack_1e34;
        uStack_18a8 = uStack_1e60;
        uStack_18a4 = uStack_1e5c;
        uStack_18a0 = uStack_1e58;
        uStack_189c = uStack_1e54;
        uStack_1898 = uStack_1e50;
        uStack_1894 = uStack_1e4c;
        uStack_1890 = uStack_1e48;
        uStack_188c = uStack_1e44;
        goto LAB_71b0bed4;
      }
    }
    uVar25 = 0;
    uVar34 = *param_1;
  }
joined_r0x71b0c0a4:
  if (1 < uVar34) {
    fVar40 = *pfStack_1f30;
    if (uVar25 < 2) {
      if (uVar25 == 0) {
        return;
      }
    }
    else {
      iVar21 = uVar25 - 1;
      do {
        pfStack_1f30 = pfStack_1f30 + 1;
        if (*pfStack_1f30 < fVar40) {
          fVar40 = *pfStack_1f30;
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    uVar37 = 0;
    do {
      if (1 < uVar34) {
        uVar25 = 1;
        do {
          iVar21 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar21 = *(int *)(param_2 + 0x2c);
          }
          iVar26 = *(int *)(*(int *)(iVar21 + 8) + *(int *)(iVar21 + 0x1c) * uVar37 * 4 + uVar25 * 4
                           );
          iVar21 = *(int *)(*(int *)(param_1[0x19] + uVar37 * 4) + 0x55fc) + uVar25 * 0x180 + -0x180
          ;
          imp___aeabi_memcpy4(afStack_1d08,iVar21,0x180);
          imp___aeabi_memcpy4(auStack_1b88,iVar26,0x100);
          imp___aeabi_memmove4(iVar21,iVar26 + 0x100,0x180);
          iVar21 = 0;
          do {
            pfVar35 = (float *)((int)afStack_1d08 + iVar21);
            pfVar22 = (float *)(iVar26 + iVar21);
            iVar21 = iVar21 + 4;
            *pfVar22 = fVar40 * *pfVar35;
          } while (iVar21 != 0x280);
          uVar25 = uVar25 + 1;
          uVar34 = *param_1;
        } while (uVar25 < uVar34);
        uVar25 = param_1[1];
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 < uVar25);
  }
  if (uVar25 != 0 && uVar34 != 0) {
    iVar21 = *(int *)(param_2 + 0x2c);
    if (iVar21 == 0) {
      uVar37 = 0;
      do {
        uVar31 = 0;
        do {
          iVar21 = 0;
          iVar26 = *(int *)(*(int *)(*(int *)(param_2 + 0x28) + 8) +
                            *(int *)(*(int *)(param_2 + 0x28) + 0x1c) * uVar37 * 4 + uVar31 * 4);
          do {
            pfVar35 = (float *)(iVar26 + iVar21);
            iVar21 = iVar21 + 4;
            fVar40 = *pfVar35;
            if (fVar40 < -32768.0) {
              fVar40 = -32768.0;
            }
            if (32767.0 < fVar40) {
              fVar40 = 32767.0;
            }
            *pfVar35 = fVar40;
          } while (iVar21 != 0x280);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar34);
        uVar37 = uVar37 + 1;
      } while (uVar37 != uVar25);
    }
    else {
      iVar26 = *(int *)(iVar21 + 8);
      uVar37 = 0;
      iVar21 = *(int *)(iVar21 + 0x1c);
      do {
        uVar31 = 0;
        do {
          iVar28 = *(int *)(iVar26 + iVar21 * uVar37 * 4 + uVar31 * 4);
          iVar27 = 0;
          do {
            pfVar35 = (float *)(iVar28 + iVar27);
            iVar27 = iVar27 + 4;
            fVar40 = *pfVar35;
            if (fVar40 < -32768.0) {
              fVar40 = -32768.0;
            }
            if (32767.0 < fVar40) {
              fVar40 = 32767.0;
            }
            *pfVar35 = fVar40;
          } while (iVar27 != 0x280);
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar34);
        uVar37 = uVar37 + 1;
      } while (uVar37 != uVar25);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_gwD_uZxjeCUhjGRXExegzDkHptTXmvbfSmlVDstGjdHyxfhPQPSHEuycXcrCMOYRbMOEZccRAi
// Entry: 0x71e08c10 | Size: 1 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

undefined4
thunk_gwD_uZxjeCUhjGRXExegzDkHptTXmvbfSmlVDstGjdHyxfhPQPSHEuycXcrCMOYRbMOEZccRAi
          (int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iStack_178;
  undefined1 auStack_168 [324];
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar6 = 0;
    uVar3 = 0;
    iStack_178 = 0;
    do {
      iVar1 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar1 = *(int *)(param_2 + 0x2c);
      }
      puVar4 = (undefined1 *)0x0;
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c) * uVar3 * 4);
      puVar8 = (undefined1 *)0x0;
      if (*(char *)(param_1 + 0x24) != '\0') {
        puVar8 = (undefined1 *)(*(int *)(param_1 + 0x18) + uVar3 * 0x140);
      }
      if (iVar1 != 0) {
        puVar4 = auStack_168;
        thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql(iVar1,*(undefined4 *)(param_2 + 0x24),puVar4);
      }
      puVar5 = puVar4;
      if (puVar8 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
        puVar8 = puVar4;
      }
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 0) {
LAB_71aee3a4:
        uVar7 = *(uint *)(param_2 + 0x20);
      }
      else {
        if (puVar4 != (undefined1 *)0x0) {
          uVar7 = 0;
          do {
            iVar2 = thunk_UjAzLbHpKTVDVkWeME
                              (**(undefined4 **)(*(int *)(param_1 + 8) + iStack_178 * 4 + uVar7 * 4)
                               ,puVar8,puVar5,puVar4,*(undefined4 *)(param_2 + 0x24),(int)param_3);
            iVar1 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) != 0) {
              iVar1 = *(int *)(param_2 + 0x2c);
            }
            thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                      (puVar4,*(undefined4 *)(param_2 + 0x24),
                       *(undefined4 *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c) * uVar3 * 4));
            if (iVar2 != 0) {
              if (0x2ee3 < iVar2) {
                if (iVar2 == 0x2ee4) {
                  return 0xfffffffa;
                }
                goto joined_r0x71aee4f8;
              }
              if (iVar2 == 0x2ee1) {
                return 0xfffffffc;
              }
              goto joined_r0x71aee4ac;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(*(int *)(param_1 + 0x14) + 4));
          iStack_178 = iStack_178 + uVar7;
          goto LAB_71aee3a4;
        }
        uVar7 = 0;
        do {
          iVar2 = thunk_UjAzLbHpKTVDVkWeME
                            (**(undefined4 **)(*(int *)(param_1 + 8) + iStack_178 * 4 + uVar7 * 4),
                             puVar8,puVar5,0,*(undefined4 *)(param_2 + 0x24),(int)param_3);
          if (iVar2 != 0) {
            if (iVar2 < 0x2ee4) {
              if (iVar2 == 0x2ee1) {
                return 0xfffffffc;
              }
joined_r0x71aee4ac:
              if (iVar2 == 0x2ee3) {
                return 0xfffffffb;
              }
            }
            else {
              if (iVar2 == 0x2ee4) {
                return 0xfffffffa;
              }
joined_r0x71aee4f8:
              if (iVar2 == 0x2f44) {
                return 0xfffffff3;
              }
            }
            return 0xffffffff;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(*(int *)(param_1 + 0x14) + 4));
        iStack_178 = iStack_178 + uVar7;
        uVar7 = *(uint *)(param_2 + 0x20);
      }
      if (1 < uVar7) {
        uVar7 = 1;
        do {
          iVar1 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar1 = *(int *)(param_2 + 0x2c);
          }
          imp___aeabi_memclr4(*(undefined4 *)
                               (iVar6 * *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 8) + uVar7 * 4),
                              *(int *)(param_2 + 0x24) << 2);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_2 + 0x20));
      }
      iVar6 = iVar6 + 4;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x1c));
  }
  return 0;
}


// =========================================================================
// Function: thunk_HrpSS_fCRSwSMHPycZzrnIJDoVFPfPdqpNdaGrGnxnIudxeAqRePKwHCwfrPIOmLMdnr
// Entry: 0x71e08c20 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

int thunk_HrpSS_fCRSwSMHPycZzrnIJDoVFPfPdqpNdaGrGnxnIudxeAqRePKwHCwfrPIOmLMdnr
              (int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 *puStack_418;
  undefined1 *puStack_414;
  undefined1 *puStack_410;
  undefined8 uStack_40c;
  undefined8 uStack_404;
  undefined8 uStack_3fc;
  undefined8 uStack_3f4;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  undefined1 auStack_2cc [320];
  undefined1 auStack_18c [324];
  
  iVar3 = *(int *)(param_1 + 8);
  bVar21 = iVar3 == 0;
  if (bVar21) {
    param_4 = (uint)*(byte *)(param_1 + 0x24);
    iVar3 = -0xb;
  }
  if (bVar21 && param_4 == 0) {
    return iVar3;
  }
  bVar21 = false;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (iVar3 == *(int *)(param_1 + 0x28)) {
    uVar10 = 0;
    bVar21 = false;
LAB_71af4fc4:
    uVar9 = 0;
    if (uVar10 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_1 + 0x34);
      }
      goto LAB_71af54e8;
    }
  }
  else {
    uVar9 = 0;
    do {
      puStack_418 = &uStack_40c;
      puStack_414 = auStack_2cc;
      puStack_410 = auStack_18c;
      thunk_ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(param_2,uVar9,&puStack_418);
      iVar3 = thunk_inMgZnfBNOSSOpDtueBvETeEtOBwuixuHGVFhUhTMooCyqmP
                        (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar9 * 4) + 0x2c),
                         &puStack_418,*(undefined4 *)(param_2 + 0x20),
                         *(undefined4 *)(param_2 + 0x24));
      bVar21 = (bool)(bVar21 | iVar3 != 0);
      uVar2 = *(undefined1 *)(param_1 + 0x25);
      *(undefined4 *)(*(int *)(param_1 + 0x34) + uVar9 * 4) = 0;
      iVar3 = *(int *)(param_1 + 0x28);
      uVar9 = uVar9 + 1;
      *(undefined1 *)(param_1 + 0x25) = uVar2;
      uVar10 = *(int *)(param_1 + 0x2c) - iVar3 >> 2;
    } while (uVar9 < uVar10);
    if (uVar10 < 2) goto LAB_71af4fc4;
    uVar9 = 0;
    uVar4 = 1;
    do {
      if (*(int *)(*(int *)(iVar3 + uVar9 * 4) + 0x28) <
          *(int *)(*(int *)(iVar3 + uVar4 * 4) + 0x28)) {
        uVar9 = uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar10 != uVar4);
  }
  iVar6 = *(int *)(param_2 + 0x2c);
  iVar15 = *(int *)(param_2 + 0x20);
  auVar1._8_8_ = 0x3780000037800000;
  auVar1._0_8_ = 0x3780000037800000;
  fVar24 = -32768.0;
  fVar26 = 32767.0;
  uVar4 = 0;
  do {
    pauVar13 = *(undefined1 (**) [16])(iVar3 + uVar9 * 4);
    fVar28 = (float)VectorSignedToFloat(*(undefined4 *)(pauVar13[2] + 4),
                                        (byte)(in_fpscr >> 0x16) & 3);
    iVar11 = *(int *)(param_2 + 0x28);
    if (iVar6 != 0) {
      iVar11 = iVar6;
    }
    auVar37 = FixedToFP(*pauVar13,0,0,0,0x20);
    auVar38 = FixedToFP(pauVar13[1],0,0,0,0x20);
    fVar30 = (float)VectorSignedToFloat(*(undefined4 *)(pauVar13[2] + 8),
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar33 = (float)VectorSignedToFloat(*(undefined4 *)pauVar13[2],(byte)(in_fpscr >> 0x16) & 3);
    iVar7 = *(int *)(iVar11 + 8);
    iVar11 = *(int *)(iVar11 + 0x1c);
    auVar38 = FloatVectorMult(auVar38,auVar1,2,0x20);
    auVar37 = FloatVectorMult(auVar37,auVar1,2,0x20);
    uStack_3fc = auVar38._0_8_;
    uStack_3f4 = auVar38._8_8_;
    uStack_40c = auVar37._0_8_;
    uStack_404 = auVar37._8_8_;
    fStack_3e8 = fVar28 * 1.5258789e-05;
    fStack_3e4 = fVar30 * 1.5258789e-05;
    fStack_3ec = fVar33 * 1.5258789e-05;
    if (iVar15 != 0) {
      iVar18 = 0;
      do {
        iVar19 = *(int *)(iVar7 + iVar11 * uVar4 * 4 + iVar18 * 4);
        iVar17 = 0;
        pfVar8 = (float *)((int)&uStack_40c + 4);
        do {
          pfVar12 = (float *)(iVar19 + iVar17);
          fVar31 = pfVar8[-1];
          fVar28 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          iVar17 = iVar17 + 0x40;
          fVar33 = (fVar28 - fVar31) * 0.0625;
          fVar35 = fVar33 + fVar31 + fVar33;
          fVar34 = (fVar31 + fVar33) * pfVar12[1];
          fVar30 = fVar33 + fVar35;
          fVar28 = fVar24;
          if (-32768.0 < fVar31 * *pfVar12) {
            fVar28 = fVar31 * *pfVar12;
          }
          fVar35 = fVar35 * pfVar12[2];
          fVar23 = fVar33 + fVar30;
          fVar30 = fVar30 * pfVar12[3];
          fVar25 = fVar33 + fVar23;
          fVar23 = fVar23 * pfVar12[4];
          fVar27 = fVar33 + fVar25;
          fVar31 = fVar24;
          if (-32768.0 < fVar34) {
            fVar31 = fVar34;
          }
          fVar25 = fVar25 * pfVar12[5];
          fVar32 = fVar33 + fVar27;
          fVar27 = fVar27 * pfVar12[6];
          fVar29 = fVar32 * pfVar12[7];
          fVar32 = fVar33 + fVar32;
          fVar34 = fVar24;
          if (-32768.0 < fVar35) {
            fVar34 = fVar35;
          }
          fVar35 = fVar24;
          if (-32768.0 < fVar30) {
            fVar35 = fVar30;
          }
          fVar30 = fVar24;
          if (-32768.0 < fVar23) {
            fVar30 = fVar23;
          }
          fVar23 = fVar24;
          if (-32768.0 < fVar25) {
            fVar23 = fVar25;
          }
          fVar25 = fVar24;
          if (-32768.0 < fVar27) {
            fVar25 = fVar27;
          }
          fVar27 = fVar26;
          if (fVar28 < 32767.0) {
            fVar27 = fVar28;
          }
          *pfVar12 = fVar27;
          fVar28 = fVar24;
          if (-32768.0 < fVar29) {
            fVar28 = fVar29;
          }
          fVar27 = fVar26;
          if (fVar31 < 32767.0) {
            fVar27 = fVar31;
          }
          pfVar12[1] = fVar27;
          fVar31 = fVar26;
          if (fVar34 < 32767.0) {
            fVar31 = fVar34;
          }
          pfVar12[2] = fVar31;
          fVar31 = fVar26;
          if (fVar35 < 32767.0) {
            fVar31 = fVar35;
          }
          pfVar12[3] = fVar31;
          fVar34 = fVar32 * pfVar12[8];
          fVar32 = fVar33 + fVar32;
          fVar31 = fVar26;
          if (fVar30 < 32767.0) {
            fVar31 = fVar30;
          }
          pfVar12[4] = fVar31;
          fVar30 = fVar26;
          if (fVar23 < 32767.0) {
            fVar30 = fVar23;
          }
          pfVar12[5] = fVar30;
          fVar30 = fVar26;
          if (fVar25 < 32767.0) {
            fVar30 = fVar25;
          }
          pfVar12[6] = fVar30;
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[7] = fVar30;
          fVar28 = fVar24;
          if (-32768.0 < fVar34) {
            fVar28 = fVar34;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[8] = fVar30;
          fVar30 = fVar32 * pfVar12[9];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[9] = fVar30;
          fVar30 = fVar32 * pfVar12[10];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[10] = fVar30;
          fVar30 = fVar32 * pfVar12[0xb];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[0xb] = fVar30;
          fVar30 = fVar32 * pfVar12[0xc];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[0xc] = fVar30;
          fVar30 = fVar32 * pfVar12[0xd];
          fVar32 = fVar33 + fVar32;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          fVar30 = fVar26;
          if (fVar28 < 32767.0) {
            fVar30 = fVar28;
          }
          pfVar12[0xd] = fVar30;
          fVar31 = fVar32 * pfVar12[0xe];
          fVar30 = (fVar33 + fVar32) * pfVar12[0xf];
          fVar28 = fVar24;
          if (-32768.0 < fVar31) {
            fVar28 = fVar31;
          }
          fVar33 = fVar26;
          if (fVar28 < 32767.0) {
            fVar33 = fVar28;
          }
          pfVar12[0xe] = fVar33;
          fVar28 = fVar24;
          if (-32768.0 < fVar30) {
            fVar28 = fVar30;
          }
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar28 < 32767.0) << 0x1f;
          fVar30 = fVar26;
          if (SUB41(in_fpscr >> 0x1f,0)) {
            fVar30 = fVar28;
          }
          pfVar12[0xf] = fVar30;
        } while (iVar17 != 0x280);
        iVar18 = iVar18 + 1;
      } while (iVar18 != iVar15);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != uVar10);
  if (*(int *)(param_1 + 8) == 0) {
    piVar5 = *(int **)(param_1 + 0x34);
    iVar3 = *piVar5;
    pauVar13 = (undefined1 (*) [16])(param_1 + 0x20);
    *(int *)*pauVar13 = iVar3;
    if (1 < uVar10) {
      uVar9 = 1;
      if (8 < uVar10) {
        pauVar14 = (undefined1 (*) [16])(piVar5 + uVar10);
        pauVar16 = (undefined1 (*) [16])(piVar5 + 1);
        bVar22 = pauVar13 < pauVar14;
        if (bVar22) {
          pauVar14 = (undefined1 (*) [16])(param_1 + 0x24);
        }
        if (!bVar22 || pauVar14 <= pauVar16) {
          uVar20 = uVar10 - 1 & 0xfffffffc;
          auVar37._8_8_ = CONCAT44(iVar3,iVar3);
          auVar37._0_8_ = CONCAT44(iVar3,iVar3);
          uVar9 = uVar20 | 1;
          uVar4 = uVar20;
          do {
            auVar1 = *pauVar16;
            pauVar16 = pauVar16 + 1;
            uVar4 = uVar4 - 4;
            auVar37 = VectorMin(auVar1,auVar37,4,0);
          } while (uVar4 != 0);
          uVar36 = VectorPairwiseMin(auVar37._0_8_,auVar37._8_8_,4,0);
          uVar36 = VectorPairwiseMin(uVar36,uVar36,4,0);
          iVar3 = (int)uVar36;
          *(int *)*pauVar13 = iVar3;
          if (uVar10 - 1 == uVar20) goto LAB_71af54e8;
        }
      }
      iVar6 = uVar10 - uVar9;
      piVar5 = piVar5 + uVar9;
      do {
        if (*piVar5 < iVar3) {
          iVar3 = *piVar5;
        }
        iVar6 = iVar6 + -1;
        *(int *)*pauVar13 = iVar3;
        piVar5 = piVar5 + 1;
      } while (iVar6 != 0);
    }
  }
LAB_71af54e8:
  iVar3 = -1;
  if (!bVar21) {
    iVar3 = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return iVar3;
}


// =========================================================================
// Function: thunk_WkhzleogkOiTZfvuSCkPsZDjPAwvheXmrn_bQSYQLGSwyLWhjGF_smQMMqyjTtdqAsEslFeQoefVNS
// Entry: 0x71e08c30 | Size: 1 bytes
// =========================================================================

void thunk_WkhzleogkOiTZfvuSCkPsZDjPAwvheXmrn_bQSYQLGSwyLWhjGF_smQMMqyjTtdqAsEslFeQoefVNS
               (int param_1,undefined4 param_2,char param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    *(undefined1 *)(param_1 + 0x860) = 0;
  }
  iVar4 = 0;
  if (param_4 != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      thunk_sQJqqgUupXEgZHgwodUnFcPFapJigeDbRoXYBNlm();
    }
    iVar4 = 0;
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    }
  }
  iVar13 = *(int *)(param_5 + 0x1c);
  pfVar11 = (float *)0x0;
  iVar9 = *(int *)(param_5 + 0xc);
  if (iVar13 != 0 && iVar9 != 0) {
    iVar4 = *(int *)(param_5 + 0x28);
  }
  iVar14 = iVar9 * iVar13;
  if (iVar13 != 0 && iVar9 != 0) {
    pfVar11 = (float *)**(int **)(iVar4 + 4);
  }
  pfVar10 = (float *)0x0;
  if (iVar14 != 0) {
    pfVar10 = pfVar11;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    bVar2 = param_3 == '\0';
  }
  else {
    pfVar8 = (float *)0x0;
    if (iVar14 != 0) {
      pfVar8 = pfVar11;
    }
    param_2 = thunk_pnCqRfrRoOXlKgD_ewUZVBItdmx_ZxaCOTIVaOdRTyAKaiAcFhftwcIGnizIvMIRdR_DMwEdotts
                        (*(int *)(param_1 + 0x1c),iVar13,iVar9,pfVar8,iVar14);
    bVar2 = false;
  }
  fVar19 = -90.309;
  fVar16 = 0.0;
  pfVar8 = pfVar10;
  fVar17 = fVar16;
  fVar18 = fVar19;
  if (iVar9 != 0) {
    do {
      fVar15 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar17 = fVar17 + fVar15 * fVar15;
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(ABS(fVar15) < fVar16) << 0x1f;
      fVar15 = ABS(fVar15);
      if (SUB41(in_fpscr >> 0x1f,0)) {
        fVar15 = fVar16;
      }
      fVar16 = fVar15;
    } while (pfVar8 != pfVar10 + iVar9);
    in_fpscr = uVar1 | (uint)(fVar15 == 1.0) << 0x1e | (uint)(1.0 <= fVar15) << 0x1d;
    bVar3 = (byte)(in_fpscr >> 0x18);
    fVar16 = fVar17;
    if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
      fVar17 = (float)imp_log10f(fVar15);
      fVar18 = fVar17 * 20.0 + -90.309;
    }
  }
  fVar17 = (float)VectorUnsignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
  if (1.0 < SQRT(fVar16 / fVar17)) {
    fVar16 = (float)imp_log10f(SQRT(fVar16 / fVar17));
    fVar19 = fVar16 * 20.0 + -90.309;
  }
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    if (iVar14 == 0) {
      pfVar11 = (float *)0x0;
    }
    uVar6 = (**(code **)(*piVar5 + 8))(piVar5,iVar13,iVar9,pfVar11,iVar14);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  if (iVar4 == 0) {
    cVar12 = '\0';
  }
  else {
    thunk_wWZmaEuOpQILDMjyRmKkaO_dLzhYiIL__VreQgVHSRf(iVar4,fVar19,fVar18,param_2);
    cVar12 = *(char *)(*(int *)(param_1 + 0x20) + 0x28);
    fVar19 = *(float *)(*(int *)(param_1 + 0x20) + 0x24);
  }
  if (!bVar2 && *(int *)(param_1 + 0x24) != 0) {
    fVar16 = 0.0;
    if (cVar12 != '\0') {
      fVar16 = fVar19;
    }
    thunk_dVKNPVeRliuBWlskeoTLxwummMUgBBAfdtmSXclUbfNKDLeGkJEVEtWoNLygbUhqdNePOCKzzBFJDdyx
              (&uStack_70,*(int *)(param_1 + 0x24),param_2,fVar16,cVar12);
    *(undefined1 *)(param_1 + 0x860) = fStack_6c._0_1_;
    *(undefined4 *)(param_1 + 0x85c) = uStack_70;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),param_2,fVar18,fVar19)
    ;
    uVar7 = (**(code **)(**(int **)(param_1 + 0x28) + 8))();
    fVar16 = (float)thunk_ijlPHZmeHie_aPMwolfzPUevGadLquBglskZw(param_1 + 0x30);
    if (fVar16 <= 1.0) {
      fStack_5c = -90.309;
    }
    else {
      fVar16 = (float)imp_log10f();
      fStack_5c = fVar16 * 20.0 + -90.309;
    }
    uStack_68 = CONCAT31(uStack_68._1_3_,cVar12);
    uStack_70 = param_2;
    fStack_6c = fVar19;
    uStack_64 = uVar6;
    uStack_60 = uVar7;
    thunk_Lz_BEIsgUDSYRUxNlchVJreNIUNajq_mjjcmWQqMkhjyFHkMkFFryHEeMCvSJPJSexS_ZuenmrgXxmTlcYNWSlewTkyQk
              (*(undefined4 *)(param_1 + 0x2c),&uStack_70,iVar13,iVar9,pfVar10,iVar14);
  }
  thunk_YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
            (param_1 + 4,iVar13,iVar9,pfVar10,iVar14);
  thunk__MUGkurXWuqdkvGLiKzOikNSKYitpKMvJohhTqdTQmkBCXIWMawEp
            (param_1 + 0x30,iVar13,iVar9,pfVar10,iVar14);
  iVar4 = *(int *)(param_1 + 0x858) + 1;
  *(int *)(param_1 + 0x858) = iVar4;
  if (iVar4 == 3000) {
    *(undefined4 *)(param_1 + 0x858) = 0;
    thunk_jkmZnIn_isZ_CcnGyZ_zRVY_FRFMUvPXgbxdTsXF(&uStack_70,param_1 + 0x30);
    iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar4 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70098344,s_____webrtc_apm_src_webrtc_module_7006eb07,0x859,
                 s__AGC2__limiter_stats_7006512f,s___identity__700706e7,uStack_70,s___knee__70070ee5
                 ,fStack_6c,s___limiter__70068ccf,uStack_68,s___saturation__70067c51,uStack_64);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_MEvCkrpdNnVrRmlnjapMyDHoaybdxRfDVUgxYihobfeQJwMKiPlHvqTJcXdbfACaFPNHzUhyXWnWUQ_qrymubZMIgt_jvnfD
// Entry: 0x71e08c40 | Size: 1 bytes
// =========================================================================

void thunk_MEvCkrpdNnVrRmlnjapMyDHoaybdxRfDVUgxYihobfeQJwMKiPlHvqTJcXdbfACaFPNHzUhyXWnWUQ_qrymubZMIgt_jvnfD
               (int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_100 [112];
  undefined1 auStack_90 [112];
  
  thunk_pInbzRrGSGTHihgfDyxVOztRLpEODPiPEqSZRcgw(auStack_100);
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x84) != (*(int *)(param_1 + 0x8c) - iVar3 >> 4) * -0x49249249) {
    iVar2 = *(int *)(param_1 + 0x7c);
    thunk_pInbzRrGSGTHihgfDyxVOztRLpEODPiPEqSZRcgw(auStack_90,auStack_100);
    piVar4 = (int *)(param_1 + 0x84);
    iVar3 = iVar3 + iVar2 * 0x70;
    imp___aeabi_memcpy8(auStack_100,iVar3,0x70);
    imp___aeabi_memcpy8(iVar3,auStack_90,0x70);
    thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(auStack_90);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
    iVar2 = *(int *)(param_1 + 0x7c) + 1;
    iVar3 = 0;
    if (iVar2 + (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 4) * 0x49249249 != 0) {
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x7c) = iVar3;
  }
  thunk__IS_JLOreDevNGOCuyINiYpgOYZqExS_coUs(auStack_100);
  return;
}


// =========================================================================
// Function: thunk_DNKCnLPyMZqRfQkXZgeoETFSYFzCEgKGFuiEcLEmddvfbRkEZaDcZOcPjreMiFslLTpEyYWxieKVwX
// Entry: 0x71e08c50 | Size: 1 bytes
// =========================================================================

void thunk_DNKCnLPyMZqRfQkXZgeoETFSYFzCEgKGFuiEcLEmddvfbRkEZaDcZOcPjreMiFslLTpEyYWxieKVwX
               (int param_1)

{
  thunk_bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH(param_1 + 0x20);
  return;
}


// =========================================================================
// Function: thunk_BKtRCsUyOnnlxxTGnIuRzWgwaUaaFlIyiDTbeYCTTwFrwVPAEFMNEhBPsy
// Entry: 0x71e08c60 | Size: 1 bytes
// =========================================================================

void thunk_BKtRCsUyOnnlxxTGnIuRzWgwaUaaFlIyiDTbeYCTTwFrwVPAEFMNEhBPsy(char *param_1,uint param_2)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  
  uVar1 = param_2;
  if (0xfe < param_2) {
    uVar1 = 0xff;
  }
  if ((int)param_2 < 1) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 4) = uVar1;
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = fVar2 * 0.003921569;
  if (*param_1 == '\0') {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 8) * fVar2;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) * fVar2;
  return;
}


// =========================================================================
// Function: thunk_yfRyVGLLEN_ycyOambAfUGNHzMEwAgywrmCELlxbodAwx
// Entry: 0x71e08c70 | Size: 1 bytes
// =========================================================================

void thunk_yfRyVGLLEN_ycyOambAfUGNHzMEwAgywrmCELlxbodAwx(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)imp_powf(0x41200000,param_2 / 20.0);
  if (*(float *)(param_1 + 0xc) != fVar1) {
    thunk_xvujOqVqotyLaHpaIuWpSLQsXM(param_1 + 0x30);
  }
  thunk_HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm(param_1 + 4,fVar1);
  return;
}


// =========================================================================
// Function: thunk_XASZYjOyUETkALzndeqQYucfzkmAgqzStemgvVqntVyLpljq
// Entry: 0x71e08c80 | Size: 1 bytes
// =========================================================================

void thunk_XASZYjOyUETkALzndeqQYucfzkmAgqzStemgvVqntVyLpljq(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// =========================================================================
// Function: thunk_JBLbHIAjiKVQeYWbIosAQiXStaLSoZEbBZvXPVUfeeMbfau
// Entry: 0x71e08c90 | Size: 1 bytes
// =========================================================================

void thunk_JBLbHIAjiKVQeYWbIosAQiXStaLSoZEbBZvXPVUfeeMbfau(char *param_1,float param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 8) = param_2;
  fVar1 = fVar1 * 0.003921569;
  if (*param_1 == '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x14) = fVar1 * param_2;
  *(float *)(param_1 + 0xc) = fVar1 * param_2;
  return;
}


// =========================================================================
// Function: thunk_WAwpRvFQsikYrpZHThCIF_WhbhekIZoDtNETibxxionDqONmwxTSXwLNnkjBBFoWuPKSKbsugi
// Entry: 0x71e08ca0 | Size: 1 bytes
// =========================================================================

void thunk_WAwpRvFQsikYrpZHThCIF_WhbhekIZoDtNETibxxionDqONmwxTSXwLNnkjBBFoWuPKSKbsugi
               (int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1[0x5c] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    thunk_DDOFVVCxoUfKMvNNGrhsCwwkwYcwpZqYqPMgUjeZfNWweCqUtpAYkZvweLmWERsRYEwCGoyQgsipTyBcWCkgTiCIRFRIf_faoaRrJLnTJtrpZWjbESusMy
              (param_2,uVar2,uVar3,param_1 + 0xcc);
    iVar4 = param_1[0x109];
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(iVar4 + 0x10);
    iVar7 = *piVar5;
    piVar6 = (int *)(iVar4 + 0x14);
    if (*(int *)(iVar4 + 0xc) == (*piVar6 - iVar7 >> 2) * -0x55555555) {
      imp_pthread_mutex_lock(param_1 + 0x23);
      thunk_fsKRHOnd_ikmdD_DoBIQYiSYdgyITfTGTOszgxiXrPmPyYstERvxphaLcvzKEDE(param_1);
      imp_pthread_mutex_unlock(param_1 + 0x23);
      iVar4 = param_1[0x109];
      DataMemoryBarrier(0xb);
      piVar5 = (int *)(iVar4 + 0x10);
      iVar7 = *piVar5;
      piVar6 = (int *)(iVar4 + 0x14);
      if (*(int *)(iVar4 + 0xc) == (*piVar6 - iVar7 >> 2) * -0x55555555) goto LAB_71a6e168;
    }
    piVar10 = (int *)(iVar4 + 0xc);
    iVar9 = param_1[0xcc];
    piVar8 = (int *)(iVar7 + *(int *)(iVar4 + 4) * 0xc);
    param_1[0xcc] = *piVar8;
    *piVar8 = iVar9;
    iVar7 = param_1[0xcd];
    param_1[0xcd] = piVar8[1];
    piVar8[1] = iVar7;
    iVar7 = param_1[0xce];
    param_1[0xce] = piVar8[2];
    piVar8[2] = iVar7;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = *piVar10 + 1;
    iVar9 = *(int *)(iVar4 + 4) + 1;
    iVar7 = 0;
    if (iVar9 + (*piVar6 - *piVar5 >> 2) * 0x55555555 != 0) {
      iVar7 = iVar9;
    }
    *(int *)(iVar4 + 4) = iVar7;
  }
LAB_71a6e168:
  if ((param_1[0x57] == 0) && (param_1[0x58] != 0)) {
    thunk_MOIfiakmvAxaZQsCGj_kXXDizJvSEYZpaMAOwyzKtfwcfxT_OgOYWolVfCuhXUHXpaRDdyojvyXHjuLYngkSWPXKFGMhxbtYsxdbLlJTpYSdUP
              (param_2,param_1 + 0xd3);
    iVar4 = param_1[0x10a];
    DataMemoryBarrier(0xb);
    piVar5 = (int *)(iVar4 + 0x10);
    iVar7 = *piVar5;
    piVar6 = (int *)(iVar4 + 0x14);
    if (*(int *)(iVar4 + 0xc) == (*piVar6 - iVar7 >> 2) * -0x55555555) {
      imp_pthread_mutex_lock(param_1 + 0x23);
      thunk_fsKRHOnd_ikmdD_DoBIQYiSYdgyITfTGTOszgxiXrPmPyYstERvxphaLcvzKEDE(param_1);
      imp_pthread_mutex_unlock(param_1 + 0x23);
      iVar4 = param_1[0x10a];
      DataMemoryBarrier(0xb);
      piVar5 = (int *)(iVar4 + 0x10);
      iVar7 = *piVar5;
      piVar6 = (int *)(iVar4 + 0x14);
      if (*(int *)(iVar4 + 0xc) == (*piVar6 - iVar7 >> 2) * -0x55555555) {
        return;
      }
    }
    piVar10 = (int *)(iVar4 + 0xc);
    iVar9 = param_1[0xd3];
    piVar8 = (int *)(iVar7 + *(int *)(iVar4 + 4) * 0xc);
    param_1[0xd3] = *piVar8;
    *piVar8 = iVar9;
    iVar7 = param_1[0xd4];
    param_1[0xd4] = piVar8[1];
    piVar8[1] = iVar7;
    iVar7 = param_1[0xd5];
    param_1[0xd5] = piVar8[2];
    piVar8[2] = iVar7;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = *piVar10 + 1;
    iVar9 = *(int *)(iVar4 + 4) + 1;
    iVar7 = 0;
    if (iVar9 + (*piVar6 - *piVar5 >> 2) * 0x55555555 != 0) {
      iVar7 = iVar9;
    }
    *(int *)(iVar4 + 4) = iVar7;
  }
  return;
}


// =========================================================================
// Function: thunk_DDOFVVCxoUfKMvNNGrhsCwwkwYcwpZqYqPMgUjeZfNWweCqUtpAYkZvweLmWERsRYEwCGoyQgsipTyBcWCkgTiCIRFRIf_faoaRrJLnTJtrpZWjbESusMy
// Entry: 0x71e08cb0 | Size: 1 bytes
// =========================================================================

void thunk_DDOFVVCxoUfKMvNNGrhsCwwkwYcwpZqYqPMgUjeZfNWweCqUtpAYkZvweLmWERsRYEwCGoyQgsipTyBcWCkgTiCIRFRIf_faoaRrJLnTJtrpZWjbESusMy
               (int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_168 [324];
  
  iVar1 = *param_4;
  param_4[1] = iVar1;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (param_2 != 0 && iVar1 != 0) {
    iVar1 = 0;
    uVar7 = 1;
    iVar5 = 0;
    do {
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar10 = 0;
        do {
          iVar8 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) != 0) {
            iVar8 = *(int *)(param_1 + 0x2c);
          }
          thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                    (*(undefined4 *)(*(int *)(iVar8 + 8) + *(int *)(iVar8 + 0x1c) * iVar1 * 4),
                     *(undefined4 *)(param_1 + 0x24),auStack_168);
          iVar8 = *(int *)(param_1 + 0x24);
          if (0 < iVar8) {
            iVar9 = param_4[1];
            if (param_4[2] - iVar9 >> 1 < iVar8) {
              iVar6 = *param_4;
              iVar4 = iVar9 - iVar6 >> 1;
              uVar7 = iVar8 + iVar4;
              if ((int)uVar7 < 0) {
                FUN_719fe110(param_4);
LAB_71aee244:
                    /* WARNING: Subroutine does not return */
                FUN_719fe2ec();
              }
              uVar2 = param_4[2] - iVar6;
              if (uVar7 < uVar2) {
                uVar7 = uVar2;
              }
              if (0x7ffffffd < uVar2) {
                uVar7 = 0x7fffffff;
              }
              if (uVar7 == 0) {
                iVar3 = 0;
              }
              else {
                if ((int)uVar7 < 0) goto LAB_71aee244;
                iVar3 = thunk_MwhHq(uVar7 << 1);
              }
              iVar4 = iVar3 + iVar4 * 2;
              imp___aeabi_memcpy(iVar4,auStack_168,iVar8 * 2);
              param_4[1] = iVar9;
              imp___aeabi_memcpy(iVar3,iVar6,iVar9 - iVar6);
              *param_4 = iVar3;
              param_4[1] = iVar4 + iVar8 * 2;
              param_4[2] = iVar3 + uVar7 * 2;
              if (iVar6 != 0) {
                thunk_qNQrlu(iVar6);
              }
            }
            else {
              imp___aeabi_memmove(iVar9,auStack_168);
              param_4[1] = iVar9 + iVar8 * 2;
            }
          }
          uVar7 = *(uint *)(param_1 + 0x1c);
          FUN_71ba33fc(iVar1 + 1,uVar7);
          uVar10 = uVar10 + 1;
          iVar1 = extraout_r1;
        } while (uVar10 < uVar7);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_2);
  }
  return;
}


// =========================================================================
// Function: thunk_MOIfiakmvAxaZQsCGj_kXXDizJvSEYZpaMAOwyzKtfwcfxT_OgOYWolVfCuhXUHXpaRDdyojvyXHjuLYngkSWPXKFGMhxbtYsxdbLlJTpYSdUP
// Entry: 0x71e08cc0 | Size: 1 bytes
// =========================================================================

void thunk_MOIfiakmvAxaZQsCGj_kXXDizJvSEYZpaMAOwyzKtfwcfxT_OgOYWolVfCuhXUHXpaRDdyojvyXHjuLYngkSWPXKFGMhxbtYsxdbLlJTpYSdUP
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 extraout_s1;
  undefined8 uVar12;
  undefined2 auStack_188 [164];
  
  iVar9 = *(int *)(param_3 + 0x1c);
  iVar8 = *(int *)(param_3 + 0x24);
  if (iVar9 == 1) {
    iVar9 = *(int *)(param_3 + 0x28);
    if (*(int *)(param_3 + 0x2c) != 0) {
      iVar9 = *(int *)(param_3 + 0x2c);
    }
    thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql(**(undefined4 **)(iVar9 + 8),iVar8,auStack_188);
    iVar4 = *(int *)(param_3 + 0x24);
  }
  else if (iVar8 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar8;
    if (iVar9 < 1) {
      imp___aeabi_memclr8(auStack_188,iVar8 << 1);
    }
    else {
      iVar7 = *(int *)(param_3 + 0x28);
      if (*(int *)(param_3 + 0x2c) != 0) {
        iVar7 = *(int *)(param_3 + 0x2c);
      }
      iVar10 = *(int *)(iVar7 + 4);
      iVar7 = 0;
      do {
        iVar5 = 0;
        iVar3 = 0;
        do {
          iVar1 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          fVar11 = *(float *)(*(int *)(iVar10 + iVar1) + iVar7 * 4);
          if (32767.0 < fVar11) {
            fVar11 = 32767.0;
          }
          if (fVar11 < -32768.0) {
            fVar11 = -32768.0;
          }
          uVar12 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(param_2,fVar11),
                                       0x3f0000003f000000);
          iVar3 = iVar3 + (int)(fVar11 + (float)uVar12);
        } while (iVar9 != iVar5);
        uVar2 = FUN_71ba0440(iVar3,iVar9);
        puVar6 = auStack_188 + iVar7;
        iVar7 = iVar7 + 1;
        *puVar6 = uVar2;
        param_2 = extraout_s1;
      } while (iVar7 != iVar8);
    }
  }
  puVar6 = auStack_188;
  param_4[1] = *param_4;
  if (iVar8 == 0) {
    puVar6 = (undefined2 *)0x0;
  }
  thunk_VzLCktuHVYUkPhKjvUpVwqUUDEEItmLrrxiLpIlPHdfTFHKWVgDWUDpllCqajhm_apawOkFboMQCzajYFgysjnTILmhppIDPGtcYSJbFJrxMDDhJTvT
            (param_4,*param_4,puVar6,puVar6 + iVar4,iVar4);
  return;
}


// =========================================================================
// Function: thunk_JrCRiOUsJfzgOeJpLufXjcerSRXzzrgrzfdcXHoHGYnEJqacUhFXxAxmZVzLpdoymxFOYJGCSdeWz
// Entry: 0x71e08cd0 | Size: 1 bytes
// =========================================================================

void thunk_JrCRiOUsJfzgOeJpLufXjcerSRXzzrgrzfdcXHoHGYnEJqacUhFXxAxmZVzLpdoymxFOYJGCSdeWz
               (int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x14c) != 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x36c) = uVar8;
    iVar3 = **(int **)(*(int *)(param_2 + 0x28) + 4);
    thunk_czMUcXevXmmJLQDloNi_BWyGOtaSsjqzyYXJrfZXmSnUnI_RRWKJRP_frGemKeGCCAwPhOzehzrVLIlVEvsSoOMuzFtXALwNndUJujCdrxbYpIlDddN
              ((undefined4 *)(param_1 + 0x368),uVar8,iVar3,iVar3 + *(int *)(param_2 + 0xc) * 4,
               *(int *)(param_2 + 0xc));
    iVar3 = *(int *)(param_1 + 0x42c);
    DataMemoryBarrier(0xb);
    piVar2 = (int *)(iVar3 + 0x10);
    iVar6 = *piVar2;
    piVar4 = (int *)(iVar3 + 0x14);
    if (*(int *)(iVar3 + 0xc) == (*piVar4 - iVar6 >> 2) * -0x55555555) {
      imp_pthread_mutex_lock(param_1 + 0x8c);
      thunk_fsKRHOnd_ikmdD_DoBIQYiSYdgyITfTGTOszgxiXrPmPyYstERvxphaLcvzKEDE(param_1);
      imp_pthread_mutex_unlock(param_1 + 0x8c);
      iVar3 = *(int *)(param_1 + 0x42c);
      DataMemoryBarrier(0xb);
      piVar2 = (int *)(iVar3 + 0x10);
      iVar6 = *piVar2;
      piVar4 = (int *)(iVar3 + 0x14);
      if (*(int *)(iVar3 + 0xc) == (*piVar4 - iVar6 >> 2) * -0x55555555) {
        return;
      }
    }
    piVar9 = (int *)(iVar3 + 0xc);
    uVar8 = *(undefined4 *)(param_1 + 0x368);
    puVar7 = (undefined4 *)(iVar6 + *(int *)(iVar3 + 4) * 0xc);
    *(undefined4 *)(param_1 + 0x368) = *puVar7;
    *puVar7 = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x36c) = puVar7[1];
    puVar7[1] = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(param_1 + 0x370) = puVar7[2];
    puVar7[2] = uVar8;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = *piVar9 + 1;
    iVar5 = *(int *)(iVar3 + 4) + 1;
    iVar6 = 0;
    if (iVar5 + (*piVar4 - *piVar2 >> 2) * 0x55555555 != 0) {
      iVar6 = iVar5;
    }
    *(int *)(iVar3 + 4) = iVar6;
  }
  return;
}


// =========================================================================
// Function: thunk_czMUcXevXmmJLQDloNi_BWyGOtaSsjqzyYXJrfZXmSnUnI_RRWKJRP_frGemKeGCCAwPhOzehzrVLIlVEvsSoOMuzFtXALwNndUJujCdrxbYpIlDddN
// Entry: 0x71e08ce0 | Size: 1 bytes
// =========================================================================

int thunk_czMUcXevXmmJLQDloNi_BWyGOtaSsjqzyYXJrfZXmSnUnI_RRWKJRP_frGemKeGCCAwPhOzehzrVLIlVEvsSoOMuzFtXALwNndUJujCdrxbYpIlDddN
              (int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_5 < 1) {
    return param_2;
  }
  puVar7 = (undefined8 *)param_1[1];
  if (param_1[2] - (int)puVar7 >> 2 < param_5) {
    iVar9 = *param_1;
    uVar10 = param_5 + ((int)puVar7 - iVar9 >> 2);
    if (uVar10 < 0x40000000) {
      uVar1 = param_1[2] - iVar9;
      uVar14 = (int)uVar1 >> 1;
      if (uVar10 < uVar14) {
        uVar10 = uVar14;
      }
      if (0x7ffffffb < uVar1) {
        uVar10 = 0x3fffffff;
      }
      if (uVar10 == 0) {
        iVar2 = 0;
      }
      else {
        if (0x3fffffff < uVar10) goto LAB_71a76940;
        iVar2 = thunk_MwhHq(uVar10 << 2);
      }
      iVar12 = iVar2 + (param_2 - iVar9 >> 2) * 4;
      imp___aeabi_memcpy4(iVar12,param_3,param_5 << 2);
      iVar13 = iVar12 + param_5 * 4;
      imp___aeabi_memcpy4(iVar13,param_2,(int)puVar7 - param_2);
      param_1[1] = param_2;
      imp___aeabi_memcpy4(iVar2,iVar9,param_2 - iVar9);
      *param_1 = iVar2;
      param_1[1] = iVar13 + ((int)puVar7 - param_2);
      param_1[2] = iVar2 + uVar10 * 4;
      if (iVar9 != 0) {
        thunk_qNQrlu(iVar9);
      }
      return iVar12;
    }
    FUN_71a0103c(param_1);
LAB_71a76940:
                    /* WARNING: Subroutine does not return */
    FUN_719fe2ec();
  }
  iVar9 = (int)puVar7 - param_2 >> 2;
  if (iVar9 < param_5) {
    iVar2 = param_3 + ((int)puVar7 - param_2);
    param_4 = param_4 - iVar2;
    if (param_4 != 0) {
      imp___aeabi_memmove4(puVar7,iVar2,param_4);
    }
    puVar3 = (undefined8 *)((int)puVar7 + param_4);
    param_1[1] = (int)puVar3;
    if (iVar9 < 1) {
      return param_2;
    }
  }
  else {
    iVar2 = param_3 + param_5 * 4;
    puVar3 = puVar7;
  }
  puVar8 = (undefined8 *)((int)puVar3 + param_5 * -4);
  puVar11 = (undefined8 *)(param_2 + param_5 * 4);
  puVar4 = puVar3;
  if (puVar8 < puVar7) {
    puVar4 = (undefined8 *)((int)puVar3 + param_5 * -4 + 4);
    if (puVar4 < puVar7) {
      puVar4 = puVar7;
    }
    uVar10 = (int)puVar4 + ~(uint)puVar3 + param_5 * 4;
    puVar5 = puVar3;
    if ((0x1b < uVar10) && (0xf < (uint)(param_5 * 4))) {
      uVar14 = (uVar10 >> 2) + 1;
      uVar1 = uVar14 & 0xfffffffc;
      puVar4 = (undefined8 *)((int)puVar3 + uVar1 * 4);
      puVar6 = (undefined8 *)((int)puVar8 + uVar1 * 4);
      uVar10 = uVar1;
      do {
        uVar15 = *puVar8;
        uVar16 = puVar8[1];
        puVar8 = puVar8 + 2;
        uVar10 = uVar10 - 4;
        *puVar5 = uVar15;
        puVar5[1] = uVar16;
        puVar5 = puVar5 + 2;
      } while (uVar10 != 0);
      puVar5 = puVar4;
      puVar8 = puVar6;
      if (uVar14 == uVar1) goto LAB_71a767f8;
    }
    do {
      puVar6 = (undefined8 *)((int)puVar8 + 4);
      puVar4 = (undefined8 *)((int)puVar5 + 4);
      *(undefined4 *)puVar5 = *(undefined4 *)puVar8;
      puVar5 = puVar4;
      puVar8 = puVar6;
    } while (puVar6 < puVar7);
  }
LAB_71a767f8:
  param_1[1] = (int)puVar4;
  if (puVar3 != puVar11) {
    imp___aeabi_memmove4(puVar11,param_2);
  }
  if (iVar2 != param_3) {
    imp___aeabi_memmove4(param_2,param_3,iVar2 - param_3);
  }
  return param_2;
}


// =========================================================================
// Function: thunk_yypWBGIeFzyYTVuXJVwpTlybrHWJfQTaAWSVEnrnKUeIuTvzhTXOeoGcDViNDvVcGPWyIy_goidWAWQKnO
// Entry: 0x71e08cf0 | Size: 1 bytes
// =========================================================================

void thunk_yypWBGIeFzyYTVuXJVwpTlybrHWJfQTaAWSVEnrnKUeIuTvzhTXOeoGcDViNDvVcGPWyIy_goidWAWQKnO
               (int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar5 = *(undefined4 **)(param_1 + 0xc);
  iVar1 = FUN_71ba0484(param_3,*(int *)(*(int *)(param_1 + 0x14) + 4) *
                               *(int *)(*(int *)(param_1 + 0x14) + 8));
  if (puVar3 != puVar5) {
    iVar2 = 0;
    do {
      puVar4 = puVar3 + 1;
      thunk_snDZXMFMONwftjnqjVvlqJW(*(undefined4 *)*puVar3,param_2 + iVar2 * 2,iVar1);
      iVar2 = iVar2 + iVar1;
      puVar3 = puVar4;
    } while (puVar4 != puVar5);
  }
  return;
}


// =========================================================================
// Function: thunk_foSgJzvSXtcDcdxygKakuxhZazcwsxJIEVtwWdixPQyzesrtejzKm_dOxcxbWfCzLsXEKPcqRynp
// Entry: 0x71e08d00 | Size: 1 bytes
// =========================================================================

void thunk_foSgJzvSXtcDcdxygKakuxhZazcwsxJIEVtwWdixPQyzesrtejzKm_dOxcxbWfCzLsXEKPcqRynp
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) != iVar1) {
    uVar2 = 0;
    do {
      thunk_QRzkEEOnPEfZkDZXuhWZbfOOcGODEZYPPguFzk
                (*(undefined4 *)(*(int *)(iVar1 + uVar2 * 4) + 0x2c),param_2,param_3);
      iVar1 = *(int *)(param_1 + 0x28);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x2c) - iVar1 >> 2));
  }
  return;
}


// =========================================================================
// Function: thunk_kQjPPMnmJZTMipOAdGqraBWcfhMbWaNdLEWfsmUHUUPYunpEAttmSKElpAMH
// Entry: 0x71e08d10 | Size: 1 bytes
// =========================================================================

undefined4 thunk_kQjPPMnmJZTMipOAdGqraBWcfhMbWaNdLEWfsmUHUUPYunpEAttmSKElpAMH(int param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar10 = *(undefined4 *)(param_1 + 0x294);
  uStack_40 = 0;
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x34) != 0) {
    piVar9 = (int *)(param_1 + 0x34);
    do {
      puVar2 = (undefined8 *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30) * 0xc);
      uVar11 = *puVar2;
      uVar5 = *(undefined4 *)(puVar2 + 1);
      *puVar2 = uStack_40;
      *(undefined4 *)(puVar2 + 1) = uStack_38;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = *piVar9 + -1;
      piVar3 = *(int **)(param_1 + 0x50);
      iVar6 = *(int *)(param_1 + 0x30) + 1;
      iVar8 = 0;
      if (iVar6 + (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) * 0x55555555 != 0) {
        iVar8 = iVar6;
      }
      *(int *)(param_1 + 0x30) = iVar8;
      uStack_40 = uVar11;
      uStack_38 = uVar5;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x2c))(piVar3,&uStack_40);
      }
      if (((int)uStack_40 - 4U < 3) && (piVar3 = *(int **)(param_1 + 0x154), piVar3 != (int *)0x0))
      {
        (**(code **)(*piVar3 + 0xc))(piVar3,(int)uStack_40,uStack_40._4_4_,uStack_38);
      }
      DataMemoryBarrier(0xb);
    } while (*piVar9 != 0);
  }
  thunk_FIDaUYlysGumEBFAbFgBVrIMDkFjNNdy(&uStack_40);
  piVar9 = *(int **)(param_1 + 0x154);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 4))(piVar9,uVar10);
  }
  thunk_JrCRiOUsJfzgOeJpLufXjcerSRXzzrgrzfdcXHoHGYnEJqacUhFXxAxmZVzLpdoymxFOYJGCSdeWz
            (param_1,uVar10);
  if ((*(char *)(param_1 + 0x144) == '\0' && *(char *)(param_1 + 0x146) == '\0') &&
     (cVar7 = '\0', *(char *)(param_1 + 0x149) == '\0')) {
LAB_71a6f678:
    if (cVar7 == '\0') goto LAB_71a6f680;
  }
  else if (*(int *)(param_1 + 0x1ac) == 48000 || *(int *)(param_1 + 0x1ac) == 32000) {
    thunk_eYLYZDlDzDlKEvKfaJJHLJYfhVHyIeHJVoluukotNuPhrWBHOe(uVar10);
    cVar7 = *(char *)(param_1 + 0x149);
    if (*(char *)(param_1 + 0x144) == '\0' && *(char *)(param_1 + 0x146) == '\0') goto LAB_71a6f678;
  }
  else {
    cVar7 = *(char *)(param_1 + 0x149);
    if (*(char *)(param_1 + 0x144) == '\0' && *(char *)(param_1 + 0x146) == '\0') goto LAB_71a6f678;
  }
  thunk_WAwpRvFQsikYrpZHThCIF_WhbhekIZoDtNETibxxionDqONmwxTSXwLNnkjBBFoWuPKSKbsugi(param_1,uVar10);
LAB_71a6f680:
  puVar4 = *(undefined4 **)(param_1 + 0x16c);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4,uVar10);
  }
  thunk_GsbngCFLkhJoshHLyGuEfGhhdXqurqEc(&uStack_40);
  return 0;
}


// =========================================================================
// Function: thunk_RkvZNNDOhctPvZKuMBXLWSyBuHCJXkSjBwMNMCgAQlGZGfNPoHJflZvaVyfvsl
// Entry: 0x71e08d20 | Size: 1 bytes
// =========================================================================

undefined1 thunk_RkvZNNDOhctPvZKuMBXLWSyBuHCJXkSjBwMNMCgAQlGZGfNPoHJflZvaVyfvsl(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// =========================================================================
// Function: thunk_BUMG_qzmRyJdaamnNJlnSGUrSktniUycMuckemcgKirQFVzLvK
// Entry: 0x71e08d30 | Size: 1 bytes
// =========================================================================

undefined4 thunk_BUMG_qzmRyJdaamnNJlnSGUrSktniUycMuckemcgKirQFVzLvK(undefined4 *param_1)

{
  return *param_1;
}


// =========================================================================
// Function: thunk_XWtaT_zMfqxOjyJeCZAUXOpvqadRqAKbGBxafh
// Entry: 0x71e08d40 | Size: 1 bytes
// =========================================================================

bool thunk_XWtaT_zMfqxOjyJeCZAUXOpvqadRqAKbGBxafh(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
        ((param_1[3] != param_2[3] || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))))) ||
       ((param_1[8] != param_2[8] ||
        ((param_1[9] != param_2[9] || (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))))))) ||
      (param_1[0x10] != param_2[0x10])) ||
     (((((*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14) || (param_1[0x18] != param_2[0x18]))
        || (param_1[0x19] != param_2[0x19])) ||
       (((param_1[0x1a] != param_2[0x1a] || (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)))
        || ((param_1[0x20] != param_2[0x20] ||
            ((param_1[0x21] != param_2[0x21] || (param_1[0x22] != param_2[0x22])))))))) ||
      (*(float *)(param_1 + 0x24) != *(float *)(param_2 + 0x24))))) {
    return false;
  }
  bVar1 = param_2[0x28];
  bVar8 = false;
  uVar6 = *(uint *)(param_1 + 0x2c);
  bVar2 = param_1[0x28];
  uVar7 = *(uint *)(param_2 + 0x2c);
  if ((bVar1 & 1) == 0) {
    uVar7 = (uint)(bVar1 >> 1);
  }
  if ((bVar2 & 1) == 0) {
    uVar6 = (uint)(bVar2 >> 1);
  }
  if (uVar6 == uVar7) {
    pcVar5 = *(char **)(param_2 + 0x30);
    if ((bVar1 & 1) == 0) {
      pcVar5 = param_2 + 0x29;
    }
    if ((bVar2 & 1) != 0) {
      iVar4 = imp_memcmp(*(undefined4 *)(param_1 + 0x30));
      return iVar4 == 0;
    }
    bVar8 = true;
    if (1 < bVar2) {
      uVar7 = (uint)(bVar2 >> 1);
      pcVar3 = param_1 + 0x29;
      do {
        uVar7 = uVar7 - 1;
        bVar8 = *pcVar3 == *pcVar5;
        if (*pcVar3 != *pcVar5) {
          return bVar8;
        }
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (uVar7 != 0);
    }
  }
  return bVar8;
}


// =========================================================================
// Function: thunk_dBeGQJsRUqTBzKJQpAOIkuDPZArNk_kqJsWGR
// Entry: 0x71e08d50 | Size: 1 bytes
// =========================================================================

undefined8 * thunk_dBeGQJsRUqTBzKJQpAOIkuDPZArNk_kqJsWGR(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 5,param_2 + 5);
  return param_1;
}


// =========================================================================
// Function: thunk_VTwMhyKnxmKwZxTKJSLbwazzowkrhxJYcEbwqctiTKXBPvpVtnksGYRNEZyTzoOOpxvpgfMROyymMfvezwm
// Entry: 0x71e08d60 | Size: 1 bytes
// =========================================================================

void thunk_VTwMhyKnxmKwZxTKJSLbwazzowkrhxJYcEbwqctiTKXBPvpVtnksGYRNEZyTzoOOpxvpgfMROyymMfvezwm(void)

{
  VTwMhyKnxmKwZxTKJSLbwazzowkrhxJYcEbwqctiTKXBPvpVtnksGYRNEZyTzoOOpxvpgfMROyymMfvezwm();
  return;
}


// =========================================================================
// Function: thunk_jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx
// Entry: 0x71e08d70 | Size: 1 bytes
// =========================================================================

void thunk_jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx(void)

{
  jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx();
  return;
}


// =========================================================================
// Function: thunk_IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ
// Entry: 0x71e08d80 | Size: 1 bytes
// =========================================================================

void thunk_IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ(void)

{
  IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ();
  return;
}


// =========================================================================
// Function: thunk_UiH_ITDZjgyBMrUUrevnlNOrmminPC
// Entry: 0x71e08d90 | Size: 1 bytes
// =========================================================================

void thunk_UiH_ITDZjgyBMrUUrevnlNOrmminPC(void)

{
  UiH_ITDZjgyBMrUUrevnlNOrmminPC();
  return;
}


// =========================================================================
// Function: thunk_PYFhyg_fCqC_XScXITLStrxcKmRbqdfldT_Vj
// Entry: 0x71e08da0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_PYFhyg_fCqC_XScXITLStrxcKmRbqdfldT_Vj(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  thunk_wWcJgRjNAscLK_lsKhPAcMcV(param_1 + 7);
  thunk_lZ_cSUTFlxtubkhk_ITRiKQyRvDW(param_1 + 0x16);
  uVar1 = thunk_RtjMTcOPHBLBcDCGvxvrncGtxBxpigwAkp();
  param_1[0x450] = uVar1;
  thunk_BTRvTsjrWtDHhgbTYCGLxPqGpijBu(param_1 + 0x452);
  return param_1;
}


// =========================================================================
// Function: thunk__ei_oGNwPnwrFfpf_tpglHFvLBcYFStXxBeKx
// Entry: 0x71e08db0 | Size: 1 bytes
// =========================================================================

int * thunk__ei_oGNwPnwrFfpf_tpglHFvLBcYFStXxBeKx(int *param_1)

{
  int iVar1;
  
  thunk_IKCwteGMGjVcQRcwyAEmB_FFd_Bml(param_1 + 0x452);
  iVar1 = param_1[0x450];
  param_1[0x450] = 0;
  if (iVar1 != 0) {
    thunk_fzGHvZuqXPFbyeVyLPwnEEZHgDgpk();
    thunk_qNQrlu();
  }
  thunk_pONOVmkUOdNWfVaMYDHEyFhffjsr(param_1 + 0x16);
  thunk_YDGrLkQxfwBAvhRAZxfXBzxB(param_1 + 7);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    thunk_qNQrlu();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi
// Entry: 0x71e08dc0 | Size: 1 bytes
// =========================================================================

void thunk_s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi
               (int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  if (param_4 != 16000) {
    piVar6 = param_1 + 7;
    iVar2 = thunk_RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(piVar6,param_4,16000,1);
    if (iVar2 != 0) {
      uVar4 = thunk_RVAuHnEAYoTAssxkuGmZqe_TCWqRWPMaiilryNy(piVar6,param_4,16000,1);
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_module_7006eb86,0x2f,
                 s_resampler__ResetIfNeeded_sample__70063a71,&DAT_70095ef5,uVar4,0);
    }
    thunk_KJpivuy_EdbXuTWrMGsedSRfYULmerpYemN
              (piVar6,param_2,param_3,param_1 + 0x460,0xa0,&uStack_24);
    param_2 = param_1 + 0x460;
  }
  piVar6 = param_1 + 0x450;
  iVar2 = thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(*piVar6,param_2,uStack_24);
  if (iVar2 != 0) {
    uVar4 = thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(*piVar6,param_2,uStack_24);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x38,
               s_standalone_vad__>AddAudio_resamp_7006d475,&DAT_70095ef5,uVar4,0);
  }
  piVar12 = param_1 + 0x4b0;
  thunk_Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
            (param_1 + 0x16,param_2,uStack_24,piVar12);
  uVar5 = param_1[0x4d0];
  uVar1 = param_1[1] - *param_1 >> 3;
  if (uVar1 < uVar5) {
    FUN_71b19c58(param_1,uVar5 - uVar1);
    uVar5 = param_1[0x4d0];
  }
  else if (uVar5 < uVar1) {
    param_1[1] = *param_1 + uVar5 * 8;
  }
  iVar8 = param_1[3];
  iVar2 = param_1[4];
  uVar1 = iVar2 - iVar8 >> 3;
  if (uVar1 < uVar5) {
    FUN_71b19c58(param_1 + 3,uVar5 - uVar1);
    iVar8 = param_1[3];
    iVar2 = param_1[4];
    if (iVar2 != iVar8) {
LAB_71b193dc:
      imp___aeabi_memmove8(iVar8,param_1 + 0x4c8,iVar2 - iVar8);
    }
  }
  else {
    if (uVar5 < uVar1) {
      iVar2 = iVar8 + uVar5 * 8;
      param_1[4] = iVar2;
    }
    if (iVar2 != iVar8) goto LAB_71b193dc;
  }
  if (param_1[0x4d0] == 0) {
    return;
  }
  puVar11 = (undefined8 *)*param_1;
  iVar8 = param_1[1];
  iVar2 = iVar8 - (int)puVar11;
  uVar1 = iVar2 >> 3;
  if ((char)param_1[0x4d1] != '\0') {
    if (0 < (int)uVar1) {
      if (iVar2 == 8) {
        uVar5 = 1;
        puVar3 = puVar11;
      }
      else {
        uVar7 = uVar1 & 0x7ffffffe;
        uVar5 = uVar1 & 1;
        puVar3 = puVar11 + uVar7;
        uVar10 = uVar7;
        do {
          uVar10 = uVar10 - 2;
          *puVar11 = 0x3f847ae147ae147b;
          puVar11[1] = 0x3f847ae147ae147b;
          puVar11 = puVar11 + 2;
        } while (uVar10 != 0);
        if (uVar1 == uVar7) goto LAB_71b19528;
      }
      uVar5 = uVar5 + 1;
      do {
        *(undefined4 *)puVar3 = 0x47ae147b;
        uVar5 = uVar5 - 1;
        *(undefined4 *)((int)puVar3 + 4) = 0x3f847ae1;
        puVar3 = puVar3 + 1;
      } while (1 < uVar5);
    }
    goto LAB_71b19528;
  }
  if (0 < (int)uVar1) {
    puVar3 = puVar11;
    uVar5 = uVar1;
    if (iVar2 != 8) {
      uVar7 = uVar1 & 0x7ffffffe;
      uVar5 = uVar1 & 1;
      puVar3 = puVar11 + uVar7;
      uVar10 = uVar7;
      puVar9 = puVar11;
      do {
        uVar10 = uVar10 - 2;
        *puVar9 = 0x3fe0000000000000;
        puVar9[1] = 0x3fe0000000000000;
        puVar9 = puVar9 + 2;
      } while (uVar10 != 0);
      if (uVar1 == uVar7) goto LAB_71b19494;
    }
    uVar5 = uVar5 + 1;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0x3fe0000000000000;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
LAB_71b19494:
  iVar2 = thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy(*piVar6,puVar11);
  if (iVar2 < 0) {
    uVar4 = thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy
                      (*piVar6,*param_1,param_1[1] - *param_1 >> 3);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x4c,
               s_standalone_vad__>GetActivity__ch_70071e64,&DAT_70095ef5,uVar4,0);
  }
  iVar2 = thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
                    (param_1 + 0x452,piVar12);
  if (iVar2 < 0) {
    uVar4 = thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
                      (param_1 + 0x452,piVar12,*param_1);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_7006eb86,0x4f,
               s_pitch_based_vad__VoicingProbabil_7006a7a4,&DAT_70095ef5,uVar4,0);
  }
  iVar8 = param_1[1];
LAB_71b19528:
  param_1[6] = (int)(float)*(double *)(iVar8 + -8);
  return;
}


// =========================================================================
// Function: thunk_so_PEXkTIDAYbHQlMNkcBNHHpKocRyOEr
// Entry: 0x71e08dd0 | Size: 1 bytes
// =========================================================================

uint * thunk_so_PEXkTIDAYbHQlMNkcBNHHpKocRyOEr(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_r6;
  uint uVar3;
  int iVar4;
  uint *puStack_2c;
  undefined1 uStack_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_3;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  if ((param_2 != 0) && (param_3 == 2)) {
    if (0x2aaaaaa < param_2) {
      FUN_71b11a48(puVar1);
      goto LAB_71b11044;
    }
    uVar2 = thunk_MwhHq(param_2 * 0x60);
    param_1[1] = uVar2;
    param_1[3] = uVar2 + param_2 * 0x60;
    iVar4 = ((param_2 * 0x60 - 0x60) / 0x60) * 0x60 + 0x60;
    imp___aeabi_memclr4(uVar2,iVar4);
    param_1[2] = uVar2 + iVar4;
  }
  unaff_r6 = param_1 + 4;
  *unaff_r6 = 0;
  uStack_28 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puStack_2c = unaff_r6;
  if ((param_2 != 0) && (param_3 == 3)) {
    if (0x369d03 < param_2) {
LAB_71b11044:
      FUN_71b11b68(unaff_r6);
      FUN_71b11ab0(&puStack_2c);
      if (*puVar1 != 0) {
        param_1[2] = *puVar1;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar4 = param_2 * 0x4b0;
    uVar2 = thunk_MwhHq(iVar4);
    uVar3 = param_2 * 0x4b0 + uVar2;
    param_1[4] = uVar2;
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    do {
      thunk_gecnDSZTzrsiFfWZpXkUpshTWpJrEoKqDMT(uVar2);
      iVar4 = iVar4 + -0x4b0;
      uVar2 = uVar2 + 0x4b0;
    } while (iVar4 != 0);
    param_3 = *param_1;
    param_1[5] = uVar3;
  }
  if ((param_3 & 0xfffffffe) != 2) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_70062fdb,0x22,
               s_num_bands_____2____num_bands_____70066222,&DAT_7009602d);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_ZDcQiBQbrKVrUyYWFaJjAWtOMyGTztH
// Entry: 0x71e08de0 | Size: 1 bytes
// =========================================================================

int thunk_ZDcQiBQbrKVrUyYWFaJjAWtOMyGTztH(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk_NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN(iVar1 + -0x4b0);
      } while (iVar1 != iVar3);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x14) = iVar3;
    thunk_qNQrlu(iVar2);
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_OygqZ_tHhOTybTgJLgMMVrHQEOELZoFcFOImsfcQXgQfauCnoYmFWXviUNOctitdl
// Entry: 0x71e08df0 | Size: 1 bytes
// =========================================================================

void thunk_OygqZ_tHhOTybTgJLgMMVrHQEOELZoFcFOImsfcQXgQfauCnoYmFWXviUNOctitdl
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (*(int *)(param_3 + 0x1c) == 3) {
    iVar6 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) != iVar6) {
      iVar9 = 0;
      iVar7 = 0;
      uVar8 = 0;
      do {
        piVar2 = (int *)(*(int *)(param_3 + 0x20) + iVar7);
        iVar5 = *piVar2;
        iVar1 = **(int **)(param_2 + 0x2c);
        puVar3 = (undefined4 *)(iVar1 + uVar8 * 8);
        iVar4 = 0;
        if (piVar2[1] != iVar5) {
          iVar4 = iVar5;
        }
        if ((*(int **)(param_2 + 0x2c))[1] == iVar1) {
          puVar3 = (undefined4 *)(uVar8 << 3);
        }
        thunk_kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
                  (iVar6 + iVar9,*puVar3,iVar4);
        iVar6 = *(int *)(param_1 + 0x10);
        iVar9 = iVar9 + 0x4b0;
        iVar7 = iVar7 + 0xc;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)((*(int *)(param_1 + 0x14) - iVar6 >> 4) * -0x69d0369d));
    }
  }
  else if (*(int *)(param_3 + 0x1c) == 2) {
    thunk_CXmWkiPkSgVWTKkyUyIqgNxPPhZRSZfHLCFCkJyZYArR_AsIWEmjvRLXxak_bdtmwKdiPxOhQz
              (param_1,param_2,param_3);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_xDqVwhoKWxIaGEjTShnOCJQFeo_gDQFcHspzQTjiHbDRaDTPCzvUYidIhSlpuMpzeT
// Entry: 0x71e08e00 | Size: 1 bytes
// =========================================================================

void thunk_xDqVwhoKWxIaGEjTShnOCJQFeo_gDQFcHspzQTjiHbDRaDTPCzvUYidIhSlpuMpzeT
               (int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_528 [640];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  if (*(int *)(param_2 + 0x1c) == 3) {
    if (*(int *)(param_3 + 0x18) != 0) {
      iVar7 = 0;
      iVar3 = 0;
      uVar6 = 0;
      do {
        piVar1 = (int *)(*(int *)(param_2 + 0x20) + iVar3);
        iVar5 = *piVar1;
        iVar8 = **(int **)(param_3 + 0x2c);
        puVar2 = (undefined4 *)(iVar8 + uVar6 * 8);
        iVar4 = 0;
        if (piVar1[1] != iVar5) {
          iVar4 = iVar5;
        }
        if ((*(int **)(param_3 + 0x2c))[1] == iVar8) {
          puVar2 = (undefined4 *)(uVar6 << 3);
        }
        thunk_WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
                  (*(int *)(param_1 + 0x10) + iVar7,iVar4,*puVar2);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x4b0;
        iVar3 = iVar3 + 0xc;
      } while (uVar6 < *(uint *)(param_3 + 0x18));
    }
  }
  else if ((*(int *)(param_2 + 0x1c) == 2) && (*(int *)(param_3 + 0x18) != 0)) {
    uVar6 = 0;
    iVar7 = 0x48;
    do {
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + uVar6 * 4),0xa0,auStack_2a8);
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0x14) * 4 + uVar6 * 4),
                 0xa0,auStack_168);
      iVar3 = *(int *)(param_1 + 4) + iVar7;
      thunk_OasPHJlOUimXFVIcZSmgq_
                (auStack_2a8,auStack_168,*(undefined4 *)(param_2 + 0x10),auStack_528,iVar3 + -0x18,
                 iVar3);
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_528,0x140,*(undefined4 *)(*(int *)(param_3 + 4) + uVar6 * 4));
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0x60;
    } while (uVar6 < *(uint *)(param_3 + 0x18));
  }
  return;
}


// =========================================================================
// Function: thunk_uewvoGyn_IfaxrFyiIrGMVKUqyKpHUAbKYbuDbORuxqCehwIjfSdwe_WdplBwZfkMCGvJ_LNslzlkJooLXNhLmzLXCSu
// Entry: 0x71e08e10 | Size: 1 bytes
// =========================================================================

void thunk_uewvoGyn_IfaxrFyiIrGMVKUqyKpHUAbKYbuDbORuxqCehwIjfSdwe_WdplBwZfkMCGvJ_LNslzlkJooLXNhLmzLXCSu
               (int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *param_2;
  if (param_2[1] != iVar1) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      iVar2 = *(int *)(iVar1 + iVar4);
      iVar3 = ((int *)(iVar1 + iVar4))[1];
      iVar1 = 0;
      if (iVar3 != iVar2) {
        iVar1 = iVar2;
      }
      thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
                (*(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4),iVar1,iVar3 - iVar2 >> 2);
      iVar1 = *param_2;
      iVar4 = iVar4 + 0xc;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((param_2[1] - iVar1 >> 2) * -0x55555555));
  }
  return;
}


// =========================================================================
// Function: thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs
// Entry: 0x71e08e20 | Size: 1 bytes
// =========================================================================

int * thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return param_1;
  }
  param_1[1] = iVar1;
  thunk_qNQrlu(iVar1);
  return param_1;
}


// =========================================================================
// Function: thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
// Entry: 0x71e08e30 | Size: 1 bytes
// =========================================================================

void thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  *(undefined1 *)(param_1 + 5) = param_7;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}


// =========================================================================
// Function: thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy
// Entry: 0x71e08e40 | Size: 1 bytes
// =========================================================================

void thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)((int)param_2 + 0xd);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)((int)param_1 + 0xd) = uVar2;
  return;
}


// =========================================================================
// Function: thunk_hTUpKKTeeApBXorpGUwgEQrsPrqpDgePJlgVQNXWVvFJMDUvXIOlz_HuazIHblkQNsTQgjArRcHNykRZZywknVmgwnWfZfN
// Entry: 0x71e08e50 | Size: 1 bytes
// =========================================================================

int * thunk_hTUpKKTeeApBXorpGUwgEQrsPrqpDgePJlgVQNXWVvFJMDUvXIOlz_HuazIHblkQNsTQgjArRcHNykRZZywknVmgwnWfZfN
                (int *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  iVar8 = *param_2;
  iVar3 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (iVar8 == iVar3) {
      return param_1;
    }
    while( true ) {
      thunk_FdbKrCBZEyPQlOGVKaA_XFmXzySIASSdDmjDDVmTCcUvGZTpTPxqBVMMCernBT(&uStack_48,iVar8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) break;
      iVar5 = *param_1;
      iVar4 = (int)puVar1 - iVar5 >> 2;
      uVar6 = iVar4 * 0x38e38e39 + 1;
      if (0x71c71c7 < uVar6) {
        FUN_71b13604(param_1);
LAB_71b1313c:
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
      iVar2 = param_1[2] - iVar5 >> 2;
      if (uVar6 < (uint)(iVar2 * 0x71c71c72)) {
        uVar6 = iVar2 * 0x71c71c72;
      }
      if (0x38e38e2 < (uint)(iVar2 * 0x38e38e39)) {
        uVar6 = 0x71c71c7;
      }
      if (uVar6 == 0) {
        iVar2 = 0;
      }
      else {
        if (0x71c71c7 < uVar6) goto LAB_71b1313c;
        iVar2 = thunk_MwhHq(uVar6 * 0x24);
      }
      puVar7 = (undefined8 *)(iVar2 + iVar4 * 4);
      *puVar7 = uStack_48;
      puVar7[1] = uStack_40;
      iVar4 = (int)puVar7 - ((int)puVar1 - iVar5);
      puVar7[2] = uStack_38;
      puVar7[3] = uStack_30;
      *(undefined4 *)(puVar7 + 4) = uStack_28;
      imp___aeabi_memcpy4(iVar4,iVar5);
      *param_1 = iVar4;
      param_1[1] = (int)puVar7 + 0x24;
      param_1[2] = iVar2 + uVar6 * 0x24;
      if (iVar5 != 0) {
        thunk_qNQrlu(iVar5);
      }
      iVar8 = iVar8 + 0x18;
      param_1[1] = (int)puVar7 + 0x24;
      if (iVar8 == iVar3) {
        return param_1;
      }
    }
    *puVar1 = uStack_48;
    puVar1[1] = uStack_40;
    puVar1[2] = uStack_38;
    puVar1[3] = uStack_30;
    *(undefined4 *)(puVar1 + 4) = uStack_28;
    iVar8 = iVar8 + 0x18;
    param_1[1] = (int)puVar1 + 0x24;
  } while( true );
}


// =========================================================================
// Function: thunk_wjLAiDdR_OspYyncnZTNMSCFrYotxHqMLehKrdVGNHFtFPZtTINdmSNFbIuMpIKGQrEyJuaLMDToEVVxMFCVw
// Entry: 0x71e08e60 | Size: 1 bytes
// =========================================================================

void thunk_wjLAiDdR_OspYyncnZTNMSCFrYotxHqMLehKrdVGNHFtFPZtTINdmSNFbIuMpIKGQrEyJuaLMDToEVVxMFCVw
               (int *param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar1 = (float *)*param_1;
  if (param_1[1] - (int)pfVar1 == 0) {
    if (param_3 != 0) {
      imp___aeabi_memmove4(param_4,param_2,param_3 << 2);
      return;
    }
  }
  else {
    uVar6 = (param_1[1] - (int)pfVar1 >> 2) * 0x38e38e39;
    fVar10 = pfVar1[5];
    if (param_5 == 0) {
      param_4 = (float *)0x0;
    }
    fVar15 = pfVar1[6];
    if (param_3 == 0) {
      param_2 = (float *)0x0;
    }
    fVar7 = pfVar1[7];
    fVar12 = pfVar1[8];
    if (param_3 != 0) {
      fVar9 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar16 = pfVar1[2];
      pfVar4 = param_4;
      fVar8 = fVar12;
      fVar11 = fVar15;
      do {
        fVar15 = fVar10;
        fVar12 = fVar7;
        param_3 = param_3 + -1;
        fVar10 = *param_2;
        param_2 = param_2 + 1;
        fVar7 = fVar14 * fVar15 + fVar13 * fVar10 + fVar16 * fVar11 + -fVar9 * fVar12 +
                -fVar17 * fVar8;
        *pfVar4 = fVar7;
        pfVar4 = pfVar4 + 1;
        fVar8 = fVar12;
        fVar11 = fVar15;
      } while (param_3 != 0);
    }
    pfVar1[5] = fVar10;
    pfVar1[6] = fVar15;
    pfVar1[7] = fVar7;
    pfVar1[8] = fVar12;
    if ((1 < uVar6) && (param_5 != 0)) {
      uVar2 = 1;
      do {
        pfVar3 = pfVar1 + uVar2 * 9;
        fVar14 = pfVar3[3];
        fVar13 = pfVar3[4];
        fVar8 = *pfVar3;
        fVar11 = pfVar3[1];
        fVar9 = pfVar3[2];
        pfVar4 = param_4;
        iVar5 = param_5;
        fVar10 = pfVar3[8];
        fVar15 = pfVar3[6];
        fVar7 = pfVar3[7];
        fVar12 = pfVar3[5];
        do {
          fVar17 = fVar12;
          fVar16 = fVar7;
          iVar5 = iVar5 + -1;
          fVar12 = *pfVar4;
          fVar7 = fVar11 * fVar17 + fVar8 * fVar12 + fVar9 * fVar15 + -fVar14 * fVar16 +
                  -fVar13 * fVar10;
          *pfVar4 = fVar7;
          pfVar4 = pfVar4 + 1;
          fVar10 = fVar16;
          fVar15 = fVar17;
        } while (iVar5 != 0);
        uVar2 = uVar2 + 1;
        pfVar3[5] = fVar12;
        pfVar3[6] = fVar17;
        pfVar3[7] = fVar7;
        pfVar3[8] = fVar16;
      } while (uVar2 != uVar6);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
// Entry: 0x71e08e70 | Size: 1 bytes
// =========================================================================

void thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
               (int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)*param_1;
  pfVar4 = (float *)param_1[1];
  if ((pfVar1 != pfVar4) && (param_3 != 0)) {
    do {
      fVar15 = pfVar1[3];
      fVar12 = pfVar1[4];
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar8 = pfVar1[2];
      pfVar2 = param_2;
      iVar3 = param_3;
      fVar7 = pfVar1[8];
      fVar9 = pfVar1[6];
      fVar11 = pfVar1[7];
      fVar14 = pfVar1[5];
      do {
        fVar13 = fVar14;
        fVar10 = fVar11;
        iVar3 = iVar3 + -1;
        fVar14 = *pfVar2;
        fVar11 = fVar6 * fVar13 + fVar5 * fVar14 + fVar8 * fVar9 + -fVar15 * fVar10 +
                 -fVar12 * fVar7;
        *pfVar2 = fVar11;
        pfVar2 = pfVar2 + 1;
        fVar7 = fVar10;
        fVar9 = fVar13;
      } while (iVar3 != 0);
      pfVar1[5] = fVar14;
      pfVar1[6] = fVar13;
      pfVar1[7] = fVar11;
      pfVar1[8] = fVar10;
      pfVar1 = pfVar1 + 9;
    } while (pfVar1 != pfVar4);
  }
  return;
}


// =========================================================================
// Function: thunk_bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH
// Entry: 0x71e08e80 | Size: 1 bytes
// =========================================================================

void thunk_bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_2 + 0xc);
  if (fVar1 != param_1[2]) {
    param_1[2] = fVar1;
    fVar8 = (float)VectorSignedToFloat(fVar1,(byte)(in_fpscr >> 0x16) & 3);
    param_1[3] = 1.0 / fVar8;
  }
  fVar9 = param_1[1];
  fVar8 = *param_1;
  if (fVar9 == 1.0 && fVar8 == fVar9) {
    return;
  }
  if (fVar8 == fVar9) {
    iVar7 = *(int *)(param_2 + 0x1c);
    if (iVar7 == 0) goto LAB_71aedf28;
    if (fVar1 != 0.0) {
      iVar2 = 0;
      iVar6 = *(int *)(*(int *)(param_2 + 0x28) + 4);
      do {
        pfVar5 = *(float **)(iVar6 + iVar2 * 4);
        iVar3 = (int)fVar1 << 2;
        do {
          iVar3 = iVar3 + -4;
          *pfVar5 = fVar8 * *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (iVar3 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar7);
    }
  }
  else {
    iVar7 = *(int *)(param_2 + 0x1c);
    fVar8 = (fVar9 - fVar8) * param_1[3];
    if (fVar8 <= 0.0) {
      if (iVar7 == 0) goto LAB_71aedf28;
      if (fVar1 != 0.0) {
        iVar2 = 0;
        iVar6 = *(int *)(*(int *)(param_2 + 0x28) + 4);
        do {
          pfVar5 = *(float **)(iVar6 + iVar2 * 4);
          fVar9 = *param_1;
          iVar3 = (int)fVar1 << 2;
          do {
            fVar9 = fVar8 + fVar9;
            if (fVar9 < param_1[1]) {
              fVar9 = param_1[1];
            }
            iVar3 = iVar3 + -4;
            *pfVar5 = *pfVar5 * fVar9;
            pfVar5 = pfVar5 + 1;
          } while (iVar3 != 0);
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar7);
      }
    }
    else {
      if (iVar7 == 0) {
LAB_71aedf28:
        *param_1 = param_1[1];
        return;
      }
      iVar6 = *(int *)(*(int *)(param_2 + 0x28) + 4);
      iVar2 = 0;
      do {
        pfVar5 = *(float **)(iVar6 + iVar2 * 4);
        pfVar4 = pfVar5 + (int)fVar1;
        if (fVar1 != 0.0) {
          fVar9 = *param_1;
          do {
            fVar9 = fVar8 + fVar9;
            if (param_1[1] < fVar9) {
              fVar9 = param_1[1];
            }
            *pfVar5 = *pfVar5 * fVar9;
            pfVar5 = pfVar5 + 1;
          } while (pfVar5 != pfVar4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar7);
    }
  }
  iVar2 = *(int *)(param_2 + 0x28);
  *param_1 = param_1[1];
  iVar2 = *(int *)(iVar2 + 4);
  iVar6 = 0;
  do {
    pfVar5 = *(float **)(iVar2 + iVar6 * 4);
    pfVar4 = pfVar5 + (int)fVar1;
    if (fVar1 != 0.0) {
      do {
        fVar9 = *pfVar5;
        fVar8 = fVar9;
        if (32767.0 <= fVar9) {
          fVar8 = 32767.0;
        }
        if (fVar9 <= -32768.0) {
          fVar8 = -32768.0;
        }
        *pfVar5 = fVar8;
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != pfVar4);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != iVar7);
  return;
}


// =========================================================================
// Function: thunk_mxGPgENVfKVFsCZweAkUrNliPlYKKOKgBy
// Entry: 0x71e08e90 | Size: 1 bytes
// =========================================================================

void thunk_mxGPgENVfKVFsCZweAkUrNliPlYKKOKgBy(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xbf800000;
  return;
}


// =========================================================================
// Function: thunk_ztlWDMEGVYPtbOJEMwEZkBZgKGXoNTLtf_lJjTRDETGkLrCG
// Entry: 0x71e08ea0 | Size: 1 bytes
// =========================================================================

int * thunk_ztlWDMEGVYPtbOJEMwEZkBZgKGXoNTLtf_lJjTRDETGkLrCG(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((0x2a < param_1) && (piVar1 = (int *)imp_malloc(0x10), piVar1 != (int *)0x0)) {
    iVar2 = thunk_GaCTofezVmeFIRq_ynQXTfgvzZoFZnSJUoxeAkSqVZErAyQGnFYTN(param_2);
    piVar1[3] = iVar2;
    iVar3 = imp_malloc(param_1 << 2);
    piVar1[2] = param_1;
    *piVar1 = iVar3;
    if (iVar2 != 0 && iVar3 != 0) {
      return piVar1;
    }
    imp_free();
    thunk_jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG(iVar2)
    ;
    imp_free(piVar1);
  }
  return (int *)0x0;
}


// =========================================================================
// Function: thunk_PDBDIIoGdcOaSbaqFmZ_bSPFPofLxHmUQdzwaKlHnvP
// Entry: 0x71e08eb0 | Size: 1 bytes
// =========================================================================

int * thunk_PDBDIIoGdcOaSbaqFmZ_bSPFPofLxHmUQdzwaKlHnvP(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (piVar1 = (int *)imp_malloc(0x10), piVar1 != (int *)0x0)) {
    iVar2 = thunk_QynhbPl_l_TlfTKfCDCLJHrfKDCtRCwntcKfHYokkdQurqwSTASbUDHDgsIGaFWGpDBMaKpKyBaKinME
                      (*(undefined4 *)(param_1 + 0xc),param_2);
    iVar4 = *(int *)(param_1 + 8);
    piVar1[3] = iVar2;
    iVar3 = imp_malloc(iVar4 << 2);
    piVar1[2] = iVar4;
    *piVar1 = iVar3;
    if (iVar2 != 0 && iVar3 != 0) {
      return piVar1;
    }
    imp_free();
    thunk_ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC(iVar2);
    imp_free(piVar1);
  }
  return (int *)0x0;
}


// =========================================================================
// Function: thunk_JVerMguVVJHwZJWAOirqHOrKjUHralOtYKREIpSerUHcPvY
// Entry: 0x71e08ec0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_JVerMguVVJHwZJWAOirqHOrKjUHralOtYKREIpSerUHcPvY(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (param_2 < 2) {
      *(uint *)(*(int *)(param_1 + 0xc) + 0x20) = param_2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_UJpsLHdjkNzrlqbmCAeIyha_reSfThPxydRNYakA
// Entry: 0x71e08ed0 | Size: 1 bytes
// =========================================================================

void thunk_UJpsLHdjkNzrlqbmCAeIyha_reSfThPxydRNYakA(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(*param_1);
  *param_1 = 0;
  thunk_ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC(param_1[3]);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: thunk_Ae_VYRWOSIlAksVivkkfqtfOSIsuNVlKXZibszYBmLNmlO
// Entry: 0x71e08ee0 | Size: 1 bytes
// =========================================================================

void thunk_Ae_VYRWOSIlAksVivkkfqtfOSIsuNVlKXZibszYBmLNmlO(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(*param_1);
  *param_1 = 0;
  thunk_jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG
            (param_1[3]);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: thunk_n_TzVWntZXBBkJDjXAf_bM_veQpyCEcyGiPe_FuyZbqtbI
// Entry: 0x71e08ef0 | Size: 1 bytes
// =========================================================================

void thunk_n_TzVWntZXBBkJDjXAf_bM_veQpyCEcyGiPe_FuyZbqtbI(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    thunk_ECIxSZbnuEqKOOsexMjTQWcWOrp_gjnKKMhRkDMVMKyLxEomOFyWyyGwZKbcGcZPWevidgxRoHJf_vgiNkS
              (param_1[3]);
    imp___aeabi_memclr4(*param_1,param_1[2] << 2);
    param_1[1] = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_gqBtNGsIvgqbkMPvuNvAYs_crBkvdBfcZrcwmLk_
// Entry: 0x71e08f00 | Size: 1 bytes
// =========================================================================

void thunk_gqBtNGsIvgqbkMPvuNvAYs_crBkvdBfcZrcwmLk_(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    thunk_XCDDRAiEazwMgEnlYsesfzELBmbYFrDkmMcjlSdKSBHkEtCrJDTxhzuVdDKaxxDivKeqhFh(param_1[3]);
    imp___aeabi_memclr4(*param_1,param_1[2] << 2);
    param_1[1] = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_vcW_FxvvqQjFWNVGeshypOggJHHFXTRgTrwyQgyqANNPSqaEQ_mcLZkNDKQio
// Entry: 0x71e08f10 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
thunk_vcW_FxvvqQjFWNVGeshypOggJHHFXTRgTrwyQgyqANNPSqaEQ_mcLZkNDKQio
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 *puVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  ushort *puVar18;
  short *psVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined2 *puVar24;
  short *psVar25;
  ushort uVar26;
  undefined1 (*pauVar27) [16];
  short *psVar28;
  short sVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  short sVar32;
  short *psVar33;
  undefined4 uVar34;
  int iVar35;
  short *psVar36;
  int iVar37;
  short sVar38;
  bool bVar39;
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_q9 [16];
  undefined1 auVar47 [16];
  undefined8 uVar49;
  undefined1 auVar48 [16];
  ulonglong uVar50;
  undefined1 in_q10 [16];
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 *puStack_bd8;
  undefined4 uStack_bd4;
  undefined8 uStack_bce;
  short sStack_bc6;
  short sStack_bc4;
  short sStack_bc2;
  short sStack_bc0;
  short sStack_bbe;
  short sStack_bbc;
  short sStack_bba;
  short sStack_bb8;
  short sStack_bb6;
  short sStack_bb4;
  short sStack_bb2;
  short sStack_bb0;
  short sStack_bae;
  short sStack_bac;
  short sStack_baa;
  short sStack_ba8;
  short sStack_ba6;
  short sStack_ba4;
  short sStack_ba2;
  short sStack_ba0;
  undefined8 uStack_b9e;
  undefined8 uStack_b96;
  undefined8 uStack_b8e;
  undefined8 uStack_b86;
  undefined8 uStack_b7e;
  undefined8 uStack_b76;
  undefined8 uStack_b6e;
  undefined8 uStack_b66;
  undefined8 uStack_b5e;
  undefined8 uStack_b56;
  short sStack_b4e;
  short asStack_b40 [128];
  short asStack_a40 [144];
  short asStack_920 [272];
  int aiStack_700 [72];
  short asStack_5e0 [2];
  short asStack_5dc [126];
  short asStack_4e0 [143];
  undefined1 auStack_3c2 [130];
  undefined1 auStack_340 [130];
  undefined1 auStack_2be [130];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  short asStack_22e [65];
  short asStack_1ac [196];
  
  psVar33 = (short *)(param_1 + 0x3694);
  if ((short)*(ushort *)(param_1 + 0x4332) < 2) {
    uVar26 = (ushort)(*(uint *)(param_1 + 0x3698) >> 10 != 0);
    if (*(uint *)(param_1 + 0x3698) >> 9 != 0) {
      uVar26 = uVar26 + 1;
    }
    *(ushort *)(param_1 + 0x4332) = uVar26;
  }
  imp___aeabi_memcpy(*(int *)(param_1 + 0x3e6c) + 0x80,param_2,0x80);
  imp___aeabi_memcpy(*(int *)(param_1 + 0x3e74) + 0x80,param_3,0x80);
  if (param_4 != 0) {
    imp___aeabi_memcpy(*(int *)(param_1 + 0x3e70) + 0x80,param_4,0x80);
  }
  uStack_bd4 = FUN_71b25e70(param_1,*(undefined4 *)(param_1 + 0x3e6c),asStack_920,auStack_2be);
  puStack_bd8 = auStack_340;
  uVar11 = FUN_71b25e70(param_1,*(undefined4 *)(param_1 + 0x3e74),asStack_920,puStack_bd8);
  uVar4 = *(undefined2 *)(param_1 + 0x36a0);
  *(short *)(param_1 + 0x36a0) = (short)uVar11;
  *(undefined2 *)(param_1 + 0x36a2) = uVar4;
  if (param_4 == 0) {
    *(short *)(param_1 + 0x369c) = (short)uVar11;
    *(undefined2 *)(param_1 + 0x369e) = uVar4;
    uStack_23c = uStack_238;
  }
  else {
    puStack_bd8 = auStack_3c2;
    uVar10 = FUN_71b25e70(param_1,*(undefined4 *)(param_1 + 0x3e70),asStack_920);
    uVar4 = *(undefined2 *)(param_1 + 0x369c);
    *(undefined2 *)(param_1 + 0x369c) = uVar10;
    *(undefined2 *)(param_1 + 0x369e) = uVar4;
  }
  thunk_NtkpbPFKOKocUbUiLPpBgLxexLeZwlhfppGETLKwwcbisLiTljXoGrvIU(param_1,auStack_2be,uStack_bd4);
  iVar12 = thunk_cpspIwmh_XYHex_ITBXnMczbugsFxhIidjGzIXoVmuLi
                     (*(undefined4 *)(param_1 + 0x22c),auStack_2be,0x41,uStack_bd4);
  uVar34 = 0xffffffff;
  if ((iVar12 != -1) &&
     (iVar12 = thunk_NkTcRfTHrtwaKMzDFicAfthkdgTUNciiztNBjlzOgfRRprHiWeO
                         (*(undefined4 *)(param_1 + 0x230),auStack_340,0x41,uVar11), iVar12 != -1))
  {
    iVar37 = 0;
    if (iVar12 != -2) {
      iVar37 = iVar12;
    }
    if (-1 < *(short *)(param_1 + 0x3696)) {
      iVar37 = (int)*(short *)(param_1 + 0x3696);
    }
    iVar12 = thunk_KoTxjDGupbJmpnlSzNwosxNtqvNwdrCDvZNlhJSmbbsSDKpsyCbWlz
                       (param_1,&uStack_bd4,iVar37);
    if (iVar12 != 0) {
      psVar28 = asStack_b40;
      psVar19 = asStack_5e0;
      sVar5 = (short)uStack_bd4;
      thunk_AhJ_TeMMvhwbXjUNIqCgFPWJsPnjSyCigMDEHOaBQQbmqsGCQcHqDNZdI
                (param_1,iVar12,(int)sVar5,uStack_238);
      thunk_TmZHOPIjupcXgPXmBAlMtTYtENeymQLiWvjldieADGXVOTupVJ(param_1);
      *(int *)(param_1 + 0x3698) = *(int *)(param_1 + 0x3698) + 1;
      thunk_kuXYTPXwSvBLqzVbzrQzWfUsUEmv_Ofqk_uScAtCRasbsIwnfoahWeFZ_Ekjw
                (param_1,iVar12,(int)sVar5,auStack_340);
      uVar13 = thunk_ZT_kCQrnJlODLRTASNSabIupMRgbeZQeFLXLPjbkfcoHwzKAbbMtAdsss(param_1);
      iVar12 = param_1 + 0x3f80;
      iVar37 = 0;
      sVar29 = 0;
      do {
        iVar15 = iVar12 + iVar37 * 2;
        lVar40 = (longlong)(*(int *)((int)aiStack_700 + iVar37 * 2) - *(int *)(iVar15 + -0x104)) *
                 0x32;
        uVar17 = *(int *)(iVar15 + -0x104) +
                 ((uint)lVar40 >> 8 | (int)((ulonglong)lVar40 >> 0x20) << 0x18);
        *(uint *)(iVar15 + -0x104) = uVar17;
        if (uVar17 == 0) {
          sVar32 = 1;
          sVar20 = 1;
          if (uVar13 != 0) goto LAB_71b25408;
LAB_71b25428:
          sVar32 = sVar20;
          sVar20 = 0;
        }
        else {
          sVar32 = (short)LZCOUNT(uVar17 ^ (int)uVar17 >> 0x1f);
          sVar20 = sVar32;
          if (uVar13 == 0) goto LAB_71b25428;
LAB_71b25408:
          sVar20 = (short)LZCOUNT(uVar13 ^ (int)uVar13 >> 0xf) + -0x11;
        }
        if ((int)(short)(sVar20 + 1) + (int)sVar32 < 0x11) {
          sVar6 = sVar20 + 1 + sVar32;
          sVar20 = *(short *)(param_1 + 0x369c);
          iVar15 = *(int *)(iVar15 + -0x104);
          sVar38 = (sVar20 - (sVar6 + sVar5)) + 0xb;
          uVar17 = (uint)(short)(0x11 - sVar6);
          if ((int)uVar17 < (int)sVar32) {
            uVar17 = (int)uVar13 >> (uVar17 & 0xff) & 0xffff;
          }
          else {
            iVar15 = iVar15 >> (uVar17 & 0xff);
            uVar17 = uVar13;
          }
          iVar15 = iVar15 * uVar17;
          uVar26 = *(ushort *)(iVar12 + iVar37);
          if (uVar26 != 0) goto LAB_71b2546c;
LAB_71b254e4:
          uVar17 = 0;
        }
        else {
          sVar20 = *(short *)(param_1 + 0x369c);
          iVar15 = *(int *)(iVar15 + -0x104) * (uVar13 & 0xffff);
          sVar38 = (sVar20 - sVar5) + -6;
          uVar26 = *(ushort *)(iVar12 + iVar37);
          if (uVar26 == 0) goto LAB_71b254e4;
LAB_71b2546c:
          sVar20 = *(short *)(param_1 + 0x369c);
          uVar17 = LZCOUNT((int)(short)(uVar26 ^ (ushort)((uint)(int)(short)uVar26 >> 0xf))) - 0x11;
        }
        puVar18 = (ushort *)(iVar12 + iVar37);
        sVar20 = sVar20 - *(short *)(param_1 + 0x369e);
        uVar21 = (uint)sVar20;
        if (((int)(short)uVar17 < (int)uVar21) && (*puVar18 != 0)) {
          sVar20 = (short)uVar17 - sVar20;
          iVar35 = (uint)*puVar18 << (uVar17 & 0xff);
          uVar26 = *(ushort *)(puStack_bd8 + iVar37) >> (-(int)sVar20 & 0xffU);
        }
        else {
          uVar26 = *(ushort *)(puStack_bd8 + iVar37);
          iVar35 = (int)(short)*puVar18 << (uVar21 & 0xff);
          if ((int)uVar21 < 0) {
            iVar35 = (int)(short)*puVar18 >> (-uVar21 & 0xff);
          }
          sVar20 = 0;
        }
        uVar17 = iVar35 + ((int)(short)uVar26 - (int)(short)iVar35 >> 4);
        uVar26 = (ushort)uVar17;
        if ((uVar17 & 0xffff) == 0) {
          sVar32 = 0;
        }
        else {
          sVar32 = (short)LZCOUNT((int)(short)(uVar26 ^ (ushort)((uint)(int)(short)uVar26 >> 0xf)))
                   + -0x11;
        }
        uVar22 = (uint)sVar20;
        uVar21 = (int)(short)uVar26 >> (uVar22 & 0xff);
        if ((int)uVar22 < 0) {
          uVar21 = uVar17 << (-uVar22 & 0xff);
        }
        iVar35 = 0x4000;
        uVar23 = uVar21;
        if ((int)sVar32 < (int)-uVar22) {
          uVar23 = 0x7fff;
        }
        if ((uVar17 & 1) == 0) {
          uVar23 = uVar21;
        }
        *puVar18 = (ushort)uVar23;
        if ((iVar15 != 0) && (iVar35 = 0, (uVar23 & 0xffff) != 0)) {
          uVar21 = thunk_HcvPIMd_epoKtXVyJrp
                             (iVar15 + ((int)(short)(ushort)uVar23 >> 1),uVar23 & 0xffff);
          uVar22 = (uint)sVar38;
          uVar17 = uVar21 << (uVar22 & 0xff);
          if ((int)uVar22 < 0) {
            uVar17 = uVar21 >> (-uVar22 & 0xff);
          }
          if (((int)uVar17 < 0x4001) && (iVar35 = 0x4000, -1 < (int)uVar17)) {
            iVar35 = 0x4000 - (uVar17 & 0xffff);
          }
        }
        if (iVar35 != 0) {
          sVar29 = sVar29 + 1;
        }
        puVar14 = (undefined2 *)((int)&uStack_bce + iVar37);
        iVar37 = iVar37 + 2;
        *puVar14 = (short)iVar35;
      } while (iVar37 != 0x82);
      if (*(short *)(param_1 + 0x224) == 2) {
        auVar46._8_2_ = sStack_bc6;
        auVar46._0_8_ = uStack_bce;
        auVar46._10_2_ = sStack_bc4;
        auVar46._12_2_ = sStack_bc2;
        auVar46._14_2_ = sStack_bc0;
        auVar47 = VectorMultiply(auVar46._8_8_,auVar46._8_8_,2,0);
        auVar44 = VectorMultiply(uStack_bce,uStack_bce,2,0);
        uVar49 = CONCAT26(sStack_bb8,CONCAT24(sStack_bba,CONCAT22(sStack_bbc,sStack_bbe)));
        auVar51._8_2_ = sStack_bb6;
        auVar51._0_8_ = uVar49;
        auVar51._10_2_ = sStack_bb4;
        auVar51._12_2_ = sStack_bb2;
        auVar51._14_2_ = sStack_bb0;
        auVar51 = VectorMultiply(auVar51._8_8_,auVar51._8_8_,2,0);
        auVar46 = VectorMultiply(uVar49,uVar49,2,0);
        uVar49 = VectorShiftNarrowRight(auVar47,0xe);
        uStack_bce = VectorShiftNarrowRight(auVar44,0xe);
        VectorShiftNarrowRight(auVar51,0xe);
        sStack_bc6 = (short)uVar49;
        sStack_bc4 = (short)((ulonglong)uVar49 >> 0x10);
        sStack_bc2 = (short)((ulonglong)uVar49 >> 0x20);
        sStack_bc0 = (short)((ulonglong)uVar49 >> 0x30);
        VectorShiftNarrowRight(auVar46,0xe);
        uVar49 = CONCAT26(sStack_ba8,CONCAT24(sStack_baa,CONCAT22(sStack_bac,sStack_bae)));
        auVar47._8_2_ = sStack_ba6;
        auVar47._0_8_ = uVar49;
        auVar47._10_2_ = sStack_ba4;
        auVar47._12_2_ = sStack_ba2;
        auVar47._14_2_ = sStack_ba0;
        auVar46 = VectorMultiply(auVar47._8_8_,auVar47._8_8_,2,0);
        auVar44 = VectorMultiply(uVar49,uVar49,2,0);
        VectorShiftNarrowRight(auVar46,0xe);
        VectorShiftNarrowRight(auVar44,0xe);
        auVar44 = VectorMultiply(uStack_b96,uStack_b96,2,0);
        auVar46 = VectorMultiply(uStack_b9e,uStack_b9e,2,0);
        auVar45._8_8_ = VectorShiftNarrowRight(auVar44,0xe);
        auVar45._0_8_ = VectorShiftNarrowRight(auVar46,0xe);
        auVar46 = VectorUnsignedFixedToFloat(auVar46,0xe);
        auVar44 = VectorUnsignedFixedToFloat(auVar44,0xe);
        auVar46 = VectorShiftLeft(auVar46,0x10,0x20,0);
        auVar55 = VectorMultiply(uStack_b86,uStack_b86,2,0);
        auVar47 = VectorMultiply(uStack_b8e,uStack_b8e,2,0);
        auVar51 = VectorSignedFixedToFloat(auVar46,0x10);
        auVar44 = VectorShiftLeft(auVar44,0x10,0x20,0);
        uVar56 = VectorShiftNarrowRight(auVar55,0xe);
        uVar52 = VectorShiftNarrowRight(auVar47,0xe);
        auVar46 = VectorSignedFixedToFloat(auVar44,0x10);
        auVar47 = VectorMultiply(uStack_b76,uStack_b76,2,0);
        auVar44 = VectorMultiply(uStack_b7e,uStack_b7e,2,0);
        uVar57 = VectorShiftNarrowRight(auVar47,0xe);
        uVar53 = VectorShiftNarrowRight(auVar44,0xe);
        auVar47 = VectorMultiply(uStack_b66,uStack_b66,2,0);
        auVar44 = VectorMultiply(uStack_b6e,uStack_b6e,2,0);
        uVar58 = VectorShiftNarrowRight(auVar47,0xe);
        uVar54 = VectorShiftNarrowRight(auVar44,0xe);
        iVar12 = ((int)sStack_bc6 + (int)sStack_bc4 + (int)sStack_bc2 + (int)sStack_bc0 +
                  (int)sStack_bbe + (int)sStack_bbc + (int)sStack_bba + (int)sStack_bb8 +
                  (int)sStack_bb6 + (int)sStack_bb4 + (int)sStack_bb2 + (int)sStack_bb0 +
                  (int)sStack_bae + (int)sStack_bac + (int)sStack_baa + (int)sStack_ba8 +
                  (int)sStack_ba6 + (int)sStack_ba4 + (int)sStack_ba2 + (int)sStack_ba0 +
                 auVar51._0_4_) / 0x15;
        auVar44 = VectorMultiply(uStack_b56,uStack_b56,2,0);
        auVar47 = VectorMultiply(uStack_b5e,uStack_b5e,2,0);
        uVar59 = VectorShiftNarrowRight(auVar44,0xe);
        auVar44._8_8_ = CONCAT44(iVar12,iVar12);
        auVar44._0_8_ = CONCAT44(iVar12,iVar12);
        uVar49 = VectorShiftNarrowRight(auVar47,0xe);
        auVar51 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar46 = VectorCompareGreaterThan(auVar46,auVar44,4);
        auVar9._8_8_ = uVar59;
        auVar9._0_8_ = uVar49;
        auVar55 = VectorCopyLong(uVar59,2,0);
        auVar8._8_8_ = uVar58;
        auVar8._0_8_ = uVar54;
        auVar47 = VectorCopyLong(uVar49,2,0);
        auVar41._8_8_ = VectorCopyNarrow(auVar46,4);
        auVar7._8_8_ = uVar57;
        auVar7._0_8_ = uVar53;
        auVar55 = VectorCompareGreaterThan(auVar55,auVar44,4);
        auVar46 = VectorCompareGreaterThan(auVar47,auVar44,4);
        auVar41._0_8_ = VectorCopyNarrow(auVar51,4);
        uVar11 = CONCAT22((short)iVar12,(short)iVar12);
        uVar49 = CONCAT44(uVar11,uVar11);
        in_q10._8_8_ = uVar49;
        in_q10._0_8_ = uVar49;
        auVar47 = VectorBitwiseInsertIfTrue(auVar45,in_q10,auVar41);
        auVar61._8_8_ = VectorCopyNarrow(auVar55,4);
        auVar61._0_8_ = VectorCopyNarrow(auVar46,4);
        auVar55 = VectorCopyLong(uVar57,2,0);
        auVar51 = VectorCopyLong(uVar53,2,0);
        auVar46 = VectorCopyLong(uVar54,2,0);
        auVar55 = VectorCompareGreaterThan(auVar55,auVar44,4);
        auVar51 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar46 = VectorCompareGreaterThan(auVar46,auVar44,4);
        auVar60._8_8_ = VectorCopyNarrow(auVar55,4);
        auVar60._0_8_ = VectorCopyNarrow(auVar51,4);
        auVar51 = VectorCopyLong(uVar58,2,0);
        auVar51 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar42._8_8_ = VectorCopyNarrow(auVar51,4);
        auVar42._0_8_ = VectorCopyNarrow(auVar46,4);
        auVar55._8_8_ = uVar56;
        auVar55._0_8_ = uVar52;
        auVar46 = VectorCopyLong(uVar56,2,0);
        auVar51 = VectorCopyLong(uVar52,2,0);
        auVar46 = VectorCompareGreaterThan(auVar46,auVar44,4);
        auVar44 = VectorCompareGreaterThan(auVar51,auVar44,4);
        auVar43._8_8_ = VectorCopyNarrow(auVar46,4);
        auVar43._0_8_ = VectorCopyNarrow(auVar44,4);
        auVar51 = VectorBitwiseSelect(auVar43,in_q10,auVar55);
        uStack_b9e = auVar47._0_8_;
        uStack_b96 = auVar47._8_8_;
        auVar44 = VectorBitwiseSelect(auVar61,in_q10,auVar9);
        iVar37 = (int)(short)((uint)((int)sStack_b4e * (int)sStack_b4e) >> 0xe);
        auVar46 = VectorBitwiseSelect(auVar60,in_q10,auVar7);
        if (iVar12 < iVar37) {
          iVar37 = iVar12;
        }
        in_q9 = VectorBitwiseInsertIfTrue(auVar8,in_q10,auVar42);
        uStack_b8e = auVar51._0_8_;
        uStack_b86 = auVar51._8_8_;
        uStack_b7e = auVar46._0_8_;
        uStack_b76 = auVar46._8_8_;
        uStack_b6e = in_q9._0_8_;
        uStack_b66 = in_q9._8_8_;
        uStack_b5e = auVar44._0_8_;
        uStack_b56 = auVar44._8_8_;
        sStack_b4e = (short)iVar37;
      }
      psVar36 = asStack_b40 + 1;
      if (*psVar33 == 0) {
        iVar12 = 0;
        psVar25 = (short *)&uStack_bce;
        do {
          sVar5 = *psVar25;
          iVar37 = iVar12 + 4;
          sVar29 = *(short *)((int)asStack_920 + iVar12 + 2);
          *(short *)((int)asStack_b40 + iVar12) =
               (short)((int)*(short *)((int)asStack_920 + iVar12) * (int)sVar5 + 0x2000U >> 0xe);
          *(short *)((int)asStack_b40 + iVar12 + 2) =
               (short)((int)sVar29 * (int)sVar5 + 0x2000U >> 0xe);
          iVar12 = iVar37;
          psVar25 = psVar25 + 1;
        } while (iVar37 != 0x104);
      }
      else {
        iVar12 = 0;
        puVar18 = (ushort *)&uStack_bce;
        do {
          uVar26 = *puVar18;
          uVar13 = (uint)uVar26;
          if ((short)uVar26 < 0xccd) {
            uVar13 = 0;
          }
          if (0x4000 < (short)uVar26) {
            uVar13 = 0x4000;
          }
          uVar17 = (uint)(2 < sVar29) * 0x4000 * uVar13;
          if (uVar13 != 0x4000) {
            uVar13 = uVar17 >> 0xe;
          }
          uVar26 = (ushort)uVar13;
          if (sVar29 < 3) {
            uVar26 = (ushort)(uVar17 >> 0xe);
          }
          *puVar18 = uVar26;
          iVar37 = iVar12 + 4;
          sVar5 = *(short *)((int)asStack_920 + iVar12 + 2);
          *(short *)((int)asStack_b40 + iVar12) =
               (short)((int)*(short *)((int)asStack_920 + iVar12) * (int)(short)uVar26 + 0x2000U >>
                      0xe);
          *(short *)((int)psVar36 + iVar12) =
               (short)((int)sVar5 * (int)(short)uVar26 + 0x2000U >> 0xe);
          iVar12 = iVar37;
          puVar18 = puVar18 + 1;
        } while (iVar37 != 0x104);
      }
      if (*(short *)(param_1 + 0x4312) == 1) {
        sVar5 = *(short *)(param_1 + 0x4310);
        iVar12 = 9;
        if (sVar5 < 100) {
          *(short *)(param_1 + 0x4310) = sVar5 + 1;
          iVar12 = 6;
        }
        uVar13 = 0xf - *(ushort *)(param_1 + 0x369c);
        pauVar27 = (undefined1 (*) [16])(param_1 + 0x4004);
        iVar37 = 0;
        pauVar16 = pauVar27;
        do {
          uVar26 = *(ushort *)(puStack_bd8 + iVar37);
          uVar17 = *(uint *)*pauVar16;
          if ((int)((uint)uVar26 << (uVar13 & 0xff)) < (int)uVar17) {
            *(undefined4 *)(pauVar16[0x10] + 4) = 0;
            if (1 << iVar12 <= (int)uVar17) {
              uVar17 = uVar17 - ((int)(uVar17 - ((uint)uVar26 << (uVar13 & 0xff))) >> iVar12);
              goto LAB_71b25a30;
            }
            iVar15 = *(int *)(pauVar16[0x20] + 8);
            *(int *)(pauVar16[0x20] + 8) = iVar15 + 1;
            if (3 < iVar15) {
              *(undefined4 *)(pauVar16[0x20] + 8) = 0;
              uVar17 = uVar17 - 1;
              goto LAB_71b25a30;
            }
          }
          else {
            *(undefined4 *)(pauVar16[0x20] + 8) = 0;
            if ((int)uVar17 < 0x80000) {
              if ((int)uVar17 < 0x800) {
                iVar15 = *(int *)(pauVar16[0x10] + 4);
                *(int *)(pauVar16[0x10] + 4) = iVar15 + 1;
                if (iVar15 < 4) goto LAB_71b25a34;
                *(undefined4 *)(pauVar16[0x10] + 4) = 0;
                uVar17 = uVar17 + ((int)uVar17 >> 9) + 1;
              }
              else {
                uVar17 = uVar17 * 0x801 >> 0xb;
              }
            }
            else {
              uVar17 = (uVar17 >> 0xb) * 0x801;
            }
LAB_71b25a30:
            *(uint *)*pauVar16 = uVar17;
          }
LAB_71b25a34:
          iVar37 = iVar37 + 2;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 4);
        } while (iVar37 != 0x82);
        uVar13 = (uint)(short)uVar13;
        auVar2._8_8_ = CONCAT44(uVar13,uVar13);
        auVar2._0_8_ = CONCAT44(uVar13,uVar13);
        auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar1._0_8_ = 0x7fff00007fff;
        in_q9 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
        auVar48._8_8_ = in_q10._8_8_;
        auVar48._0_8_ = 0x4000400040004000;
        auVar44 = FloatVectorNeg(auVar2,1,4);
        iVar12 = 0x7fff << (uVar13 & 0xff);
        iVar37 = 0;
        do {
          auVar46 = VectorShiftLeft(*pauVar27,auVar44,4,0);
          auVar51 = VectorCompareGreaterThan(auVar46,in_q9,4);
          auVar46 = VectorMin(auVar46,in_q9,4,0);
          uVar50 = VectorCopyNarrow(auVar51,4);
          auVar46 = VectorShiftLeft(auVar46,0x10,0x20,0);
          auVar46 = VectorSignedFixedToFloat(auVar46,0x10);
          if ((uVar50 & 1) != 0) {
            *(int *)*pauVar27 = iVar12;
          }
          if ((uVar50 & 0x10000) != 0) {
            *(int *)(*pauVar27 + 4) = iVar12;
          }
          if ((uVar50 >> 0x20 & 1) != 0) {
            *(int *)(*pauVar27 + 8) = iVar12;
          }
          puVar30 = (undefined8 *)((int)&uStack_bce + iVar37);
          if ((uVar50 & 0x1000000000000) != 0) {
            *(int *)(*pauVar27 + 0xc) = iVar12;
          }
          pauVar27 = pauVar27 + 1;
          puVar31 = (undefined8 *)((int)asStack_22e + iVar37);
          iVar37 = iVar37 + 8;
          uVar49 = VectorSub(auVar48._0_8_,*puVar30,2);
          auVar51 = VectorCopyLong(uVar49,2,0);
          auVar46 = VectorMultiply(auVar46,auVar51,4);
          auVar48._8_8_ = VectorShiftNarrowRight(auVar46,0xe);
          *puVar31 = auVar48._8_8_;
        } while (iVar37 != 0x80);
        iVar37 = *(int *)(param_1 + 0x4104) >> (uVar13 & 0xff);
        if (0x7fff < iVar37) {
          *(int *)(param_1 + 0x4104) = iVar12;
          iVar37 = 0x7fff;
        }
        asStack_22e[0x40] =
             (short)((uint)((int)(short)iVar37 * (int)(short)(0x4000 - sStack_b4e)) >> 0xe);
        thunk_VzzAJmrFSAbHPFwWQutB(asStack_1ac + 0x82,0x40,param_1 + 0x228);
        asStack_1ac[0x41] = 0;
        iVar12 = 2;
        asStack_1ac[0] = 0;
        do {
          sVar5 = *(short *)((int)asStack_22e + iVar12);
          iVar37 = *(short *)((int)asStack_1ac + iVar12 + 0x102) * 0x167 >> 0xf;
          sVar29 = *(short *)(&DAT_70097138 + iVar37 * 2);
          *(short *)((int)asStack_1ac + iVar12 + 0x82) =
               (short)((uint)((int)*(short *)(&DAT_70096e68 + iVar37 * 2) * (int)sVar5) >> 0xd);
          puVar14 = (undefined2 *)((int)asStack_1ac + iVar12);
          iVar12 = iVar12 + 2;
          *puVar14 = (short)((uint)-((int)sVar5 * (int)sVar29) >> 0xd);
        } while (iVar12 != 0x82);
        iVar12 = 0;
        asStack_1ac[0x40] = 0;
        do {
          sVar29 = SignedSaturate(psVar36[-1] + *(short *)((int)asStack_1ac + iVar12 + 0x82),0x10);
          SignedSaturate(0,0x10);
          psVar25 = (short *)((int)asStack_1ac + iVar12);
          iVar12 = iVar12 + 2;
          sVar5 = *psVar25;
          psVar36[-1] = sVar29;
          sVar5 = SignedSaturate(*psVar36 + sVar5,0x10);
          SignedSaturate(0,0x10);
          *psVar36 = sVar5;
          psVar36 = psVar36 + 2;
        } while (iVar12 != 0x82);
      }
      psVar25 = asStack_a40;
      psVar36 = asStack_5dc;
      bVar39 = psVar36 < psVar25;
      if (bVar39) {
        psVar25 = asStack_4e0;
        psVar36 = asStack_b40 + 2;
      }
      if (bVar39 && psVar36 < psVar25) {
        iVar37 = 2;
        iVar12 = 1;
      }
      else {
        iVar12 = 4;
        do {
          puVar24 = (undefined2 *)((int)psVar28 + iVar12);
          puVar14 = (undefined2 *)0x380;
          puVar3 = (undefined2 *)0x390;
          lVar40 = 4;
          while( true ) {
            *puVar14 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar3 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar14 = (undefined2 *)0x388;
          puVar3 = (undefined2 *)0x398;
          lVar40 = 4;
          while( true ) {
            *puVar14 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar3 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar24 = (undefined2 *)((int)psVar19 + iVar12);
          iVar12 = iVar12 + 0x20;
          in_q9 = FloatVectorNeg(in_q9,1,2);
          puVar14 = (undefined2 *)0x380;
          puVar3 = (undefined2 *)0x390;
          lVar40 = 4;
          while( true ) {
            *puVar24 = *puVar14;
            puVar24[1] = *puVar3;
            puVar24 = puVar24 + 2;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar14 = (undefined2 *)0x388;
          puVar3 = (undefined2 *)0x398;
          lVar40 = 4;
          while( true ) {
            *puVar24 = *puVar14;
            puVar24[1] = *puVar3;
            puVar24 = puVar24 + 2;
            lVar40 = lVar40 + -1;
            if (lVar40 == 0) break;
            puVar14 = puVar14 + 1;
            puVar3 = puVar3 + 1;
          }
        } while (iVar12 != 0xe4);
        iVar37 = 0x72;
        iVar12 = 0x39;
      }
      iVar12 = iVar12 << 2;
      psVar36 = psVar19 + iVar37 + 1;
      do {
        psVar25 = (short *)((int)psVar28 + iVar12);
        iVar12 = iVar12 + 4;
        psVar36[-1] = *psVar25;
        *psVar36 = -psVar25[1];
        psVar36 = psVar36 + 2;
      } while (iVar12 != 0x100);
      *psVar19 = *psVar28;
      psVar19[1] = -psVar28[1];
      psVar19[0x80] = psVar28[0x80];
      uVar11 = *(undefined4 *)(psVar33 + 0x658);
      psVar19[0x81] = -psVar28[0x81];
      iVar12 = thunk_gpyojGvvUyFeScvvTvvGtXOV(uVar11,psVar19,psVar28);
      iVar37 = 0;
      do {
        psVar36 = (short *)((int)psVar28 + iVar37 + 0x80);
        uVar13 = (int)psVar36[-0x40] * (int)*(short *)((int)&DAT_7009bb20 + iVar37) + 0x2000;
        psVar36[-0x40] = (short)(uVar13 >> 0xe);
        sVar5 = *(short *)((int)&DAT_7009bba0 - iVar37);
        iVar35 = (int)(uVar13 * 4) >> 0x10;
        uVar13 = iVar12 - psVar33[4];
        iVar15 = iVar35 << (uVar13 & 0xff);
        psVar19 = (short *)(*(int *)(psVar33 + 0x3f2) + iVar37);
        if ((int)uVar13 < 0) {
          iVar15 = iVar35 >> (-uVar13 & 0xff);
        }
        iVar15 = iVar15 + *psVar19;
        puVar14 = (undefined2 *)(param_5 + iVar37);
        uVar11 = SignedSaturate(iVar15,0x10);
        SignedDoesSaturate(iVar15,0x10);
        iVar37 = iVar37 + 2;
        *puVar14 = (short)uVar11;
        uVar13 = iVar12 - psVar33[4];
        iVar15 = (int)sVar5 * (int)*psVar36 >> 0xe;
        iVar35 = iVar15 << (uVar13 & 0xff);
        if ((int)uVar13 < 0) {
          iVar35 = iVar15 >> (-uVar13 & 0xff);
        }
        uVar11 = SignedSaturate(iVar35,0x10);
        SignedDoesSaturate(iVar35,0x10);
        *psVar19 = (short)uVar11;
      } while (iVar37 != 0x80);
      imp___aeabi_memcpy(*(int *)(psVar33 + 0x3ec),*(int *)(psVar33 + 0x3ec) + 0x80,0x80);
      imp___aeabi_memcpy(*(int *)(psVar33 + 0x3f0),*(int *)(psVar33 + 0x3f0) + 0x80,0x80);
      uVar34 = 0;
      if (param_4 != 0) {
        imp___aeabi_memcpy(*(int *)(psVar33 + 0x3ee),*(int *)(psVar33 + 0x3ee) + 0x80,0x80);
      }
    }
  }
  return uVar34;
}


// =========================================================================
// Function: thunk_IleWJYODCfsxtPHrhjJVSUuGuzWKvkf
// Entry: 0x71e08f20 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_IleWJYODCfsxtPHrhjJVSUuGuzWKvkf(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &DAT_70b13840;
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    thunk_qNQrlu();
  }
  piVar3 = (int *)param_1[10];
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[0xb];
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar2 = *piVar4;
        *piVar4 = 0;
        if (iVar2 != 0) {
          thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(*(undefined4 *)(iVar2 + 0x2c));
          thunk_qNQrlu(iVar2);
        }
      } while (piVar4 != piVar3);
      piVar1 = (int *)param_1[10];
    }
    param_1[0xb] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  iVar2 = param_1[1];
  param_1[1] = 0;
  if (iVar2 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol
// Entry: 0x71e08f30 | Size: 1 bytes
// =========================================================================

int * thunk_fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = thunk_RwHYDtDaQMfqxLi(param_2,param_3 != 0);
  param_1[2] = iVar1;
  iVar1 = thunk_nxphuypHnvtjluWYlftD((*param_1 << (param_1[1] != 0)) << 2);
  param_1[3] = iVar1;
  return param_1;
}


// =========================================================================
// Function: thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ
// Entry: 0x71e08f40 | Size: 1 bytes
// =========================================================================

void thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = thunk_MwhHq(8);
  thunk_HNNstObcHxMO_McVgWQCvsnPjROKxsGMwKTQISNwcMgVkh(uVar1,*param_2,param_2[1]);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: thunk_vCBnCSmxQftcHuTI_iwg
// Entry: 0x71e08f50 | Size: 1 bytes
// =========================================================================

int thunk_vCBnCSmxQftcHuTI_iwg(int param_1)

{
  thunk_zifwUOgVXcSpuVPKRzB(*(undefined4 *)(param_1 + 8));
  thunk_oNNDtZVtPOMuxXdbYs(*(undefined4 *)(param_1 + 0xc));
  return param_1;
}


// =========================================================================
// Function: thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR
// Entry: 0x71e08f60 | Size: 1 bytes
// =========================================================================

int thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR(int param_1)

{
  thunk_oNNDtZVtPOMuxXdbYs(*(undefined4 *)(param_1 + 4));
  return param_1;
}


// =========================================================================
// Function: thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG
// Entry: 0x71e08f70 | Size: 1 bytes
// =========================================================================

void thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}


// =========================================================================
// Function: thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
// Entry: 0x71e08f80 | Size: 1 bytes
// =========================================================================

void thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
               (int param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 0) {
    thunk_xvDtmfMfgCHvpgwIzavVsBV
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_1 + 0xc),0);
    return;
  }
  thunk_BGNCk_MRcNNOSJm
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
             *(undefined4 *)(param_1 + 0xc),0);
  return;
}


// =========================================================================
// Function: thunk_eynZWwVDoWDXWrqliyyfAnRoLa_NviwHwKmnIYtsOSmKsKVEZfVMzGtYbPbBiugXivdXtq
// Entry: 0x71e08f90 | Size: 1 bytes
// =========================================================================

void thunk_eynZWwVDoWDXWrqliyyfAnRoLa_NviwHwKmnIYtsOSmKsKVEZfVMzGtYbPbBiugXivdXtq
               (int param_1,int param_2,int param_3,int param_4)

{
  thunk_utN_uPAPkJQUV_VcLkBuLmSiEg
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
             *(undefined4 *)(param_4 + 4));
  return;
}


// =========================================================================
// Function: thunk_IAYmOnea_hKUjmPCSXJmhVRAgSLlpekeLjFrCBaN_kwqXmwgpivOYEngXnUKI
// Entry: 0x71e08fa0 | Size: 1 bytes
// =========================================================================

void thunk_IAYmOnea_hKUjmPCSXJmhVRAgSLlpekeLjFrCBaN_kwqXmwgpivOYEngXnUKI
               (int param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 0) {
    thunk_xvDtmfMfgCHvpgwIzavVsBV
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_1 + 0xc),1);
    return;
  }
  thunk_BGNCk_MRcNNOSJm
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),
             *(undefined4 *)(param_1 + 0xc),1);
  return;
}


// =========================================================================
// Function: thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv
// Entry: 0x71e08fb0 | Size: 1 bytes
// =========================================================================

void thunk_nElObgiZKoHdtlYaZsglUEDn_BfBPDYeQSzFrsBiSToXcv(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}


// =========================================================================
// Function: thunk_YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD
// Entry: 0x71e08fc0 | Size: 1 bytes
// =========================================================================

int * thunk_YwSIimNXVVuzKBdYyZXNWenLVbMMAhKrmltSziUpY_pQLrBAdpwRgLfzxyvzAYD
                (int *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar6 = *(uint *)(param_2 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x71c71c7 < param_3) {
      FUN_71b13604(param_1);
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar7 = param_3 * 0x24;
    puVar4 = (undefined4 *)thunk_MwhHq(iVar7);
    *param_1 = (int)puVar4;
    param_1[1] = (int)puVar4;
    param_1[2] = (int)(puVar4 + param_3 * 9);
    puVar5 = puVar4;
    do {
      uStack_40 = (undefined4)uVar8;
      uStack_3c = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_38 = (undefined4)uVar9;
      uStack_34 = (undefined4)((ulonglong)uVar9 >> 0x20);
      iVar7 = iVar7 + -0x24;
      *puVar5 = uStack_40;
      puVar5[1] = uStack_3c;
      puVar5[2] = uStack_38;
      puVar5[3] = uStack_34;
      *(ulonglong *)(puVar5 + 4) = (ulonglong)uVar6;
      *(ulonglong *)(puVar5 + 6) = CONCAT44(uVar2,uVar1);
      puVar5[8] = uVar3;
      puVar5 = puVar5 + 9;
    } while (iVar7 != 0);
    param_1[1] = (int)(puVar4 + param_3 * 9);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK
// Entry: 0x71e08fd0 | Size: 1 bytes
// =========================================================================

void thunk_mIVdKNwIcFoPyZmxiCbLgggNjDDHrlNTwaxrHNDK(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 == iVar2) {
    return;
  }
  do {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar1 = iVar1 + 0x24;
  } while (iVar1 != iVar2);
  return;
}


// =========================================================================
// Function: thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic
// Entry: 0x71e08fe0 | Size: 1 bytes
// =========================================================================

float thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic(float param_1)

{
  return SQRT(param_1);
}


// =========================================================================
// Function: thunk_YyTLZETBqTcBrVtqfcdpisSxttdkkSg
// Entry: 0x71e08ff0 | Size: 1 bytes
// =========================================================================

void thunk_YyTLZETBqTcBrVtqfcdpisSxttdkkSg(undefined4 param_1,float param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  imp_exp2f((fVar1 * 1.1920929e-07 + -126.942696) * param_2);
  return;
}


// =========================================================================
// Function: thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY
// Entry: 0x71e09000 | Size: 1 bytes
// =========================================================================

float thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return (fVar1 * 1.1920929e-07 + -126.942696) * 0.6931472;
}


// =========================================================================
// Function: thunk_h_mkVooMCQaXlfNoTcKEBiKvyolfCvXsOfzGsqFNWglyzzpsrscQebyBlyqLNnyFnyjKipHMe
// Entry: 0x71e09010 | Size: 1 bytes
// =========================================================================

void thunk_h_mkVooMCQaXlfNoTcKEBiKvyolfCvXsOfzGsqFNWglyzzpsrscQebyBlyqLNnyFnyjKipHMe
               (undefined4 *param_1,int param_2,float *param_3)

{
  uint in_fpscr;
  float fVar1;
  
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      fVar1 = (float)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
      *param_3 = (fVar1 * 1.1920929e-07 + -126.942696) * 0.6931472;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM
// Entry: 0x71e09020 | Size: 1 bytes
// =========================================================================

void thunk_cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM(float param_1)

{
  imp_exp2f(param_1 * 0.4342945 * 3.3073044);
  return;
}


// =========================================================================
// Function: thunk_BCQSXTSwxIgFnoXKTrXKoCBGbZJPybDM_qhtPiLdbpkOdBRXhyBZHlHRJmDhXyYXxEnZBmdLD
// Entry: 0x71e09030 | Size: 1 bytes
// =========================================================================

void thunk_BCQSXTSwxIgFnoXKTrXKoCBGbZJPybDM_qhtPiLdbpkOdBRXhyBZHlHRJmDhXyYXxEnZBmdLD
               (float *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 != 0) {
    do {
      fVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = imp_exp2f(fVar2 * 0.4342945 * 3.3073044);
      *param_3 = uVar1;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_wiDFrGiVFLhNJ_RYdPBsuRxvkHrembILLfvnWdfltbBwwhDcReGzqnsChIAoaZUPwWmXsgrQUVsLfAktx
// Entry: 0x71e09040 | Size: 1 bytes
// =========================================================================

void thunk_wiDFrGiVFLhNJ_RYdPBsuRxvkHrembILLfvnWdfltbBwwhDcReGzqnsChIAoaZUPwWmXsgrQUVsLfAktx
               (float *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_2 != 0) {
    do {
      fVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = imp_exp2f(fVar2 * -0.4342945 * 3.3073044);
      *param_3 = uVar1;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_XJQXXeGD_rAyCaYevXNuuTOxGDOGfb
// Entry: 0x71e09050 | Size: 1 bytes
// =========================================================================

void thunk_XJQXXeGD_rAyCaYevXNuuTOxGDOGfb(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,12000);
  return;
}


// =========================================================================
// Function: thunk_OyzYrmriocmcwJwVtwTgPywRkBbyOvQSoFCtUrOcRdaYFZImh
// Entry: 0x71e09060 | Size: 1 bytes
// =========================================================================

void thunk_OyzYrmriocmcwJwVtwTgPywRkBbyOvQSoFCtUrOcRdaYFZImh(int param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = *param_2;
  if ((fVar2 < 100.0) && (0.0 <= fVar2)) {
    iVar3 = (uint)(0.0 < fVar2 * 10.0) * (int)(fVar2 * 10.0);
    *(int *)(param_1 + iVar3 * 4) = *(int *)(param_1 + iVar3 * 4) + 1;
  }
  fVar2 = param_2[2];
  if ((fVar2 < 50.0) && (0.0 <= fVar2)) {
    iVar3 = param_1 + (uint)(0.0 < fVar2 * 20.0) * (int)(fVar2 * 20.0) * 4;
    *(int *)(iVar3 + 4000) = *(int *)(iVar3 + 4000) + 1;
  }
  fVar2 = param_2[1];
  if (fVar2 < 100.0) {
    if (fVar2 < 0.0) {
      return;
    }
    piVar1 = (int *)(param_1 + (uint)(0.0 < fVar2 * 10.0) * (int)(fVar2 * 10.0) * 4 + 8000);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


// =========================================================================
// Function: thunk_YIFnbIonzxrlPCYvggkTTbXoGh
// Entry: 0x71e09070 | Size: 1 bytes
// =========================================================================

undefined4 thunk_YIFnbIonzxrlPCYvggkTTbXoGh(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,12000);
  return param_1;
}


// =========================================================================
// Function: thunk_AReXourBM_XYVgzqubGFourXCuJ_yczZZwrEDGrdQjICg
// Entry: 0x71e09080 | Size: 1 bytes
// =========================================================================

void thunk_AReXourBM_XYVgzqubGFourXCuJ_yczZZwrEDGrdQjICg(int param_1)

{
  imp___aeabi_memcpy4(param_1 + 0x10,param_1 + 0x61c,0x204);
  return;
}


// =========================================================================
// Function: thunk_CIlEldrzVFzjGB_S_TNXSBzaGhLdITwZnflZbQYJTtnNJTbQtlbpPoydtenwNrExr
// Entry: 0x71e09090 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_CIlEldrzVFzjGB_S_TNXSBzaGhLdITwZnflZbQYJTtnNJTbQtlbpPoydtenwNrExr
               (undefined4 *param_1,int param_2,int param_3,float param_4)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar5 = (float *)(param_1 + 0x187);
  thunk_ShyEhURBNnBRBwcqvSjaTmzXGvQoEfFaeJZrRdCKnpoCwCtVJRpuzgTZaLLxXzhuKSNLNJYMxvD_uUwoMlvn
            (param_1 + 0x208,param_3,pfVar5);
  if (param_2 < 0x32) {
    fVar14 = 0.0;
    pfVar6 = (float *)(param_1 + 0x106);
    fVar17 = 0.0;
    iVar3 = 0;
    fVar15 = fVar14;
    fVar16 = fVar14;
    do {
      fVar2 = (float)thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(*(undefined4 *)(param_3 + 0x14 + iVar3));
      iVar7 = iVar3 + 4;
      fVar11 = *(float *)((int)&DAT_7009a544 + iVar3);
      fVar14 = fVar14 + fVar2;
      fVar15 = fVar15 + fVar11 * fVar2;
      fVar17 = fVar17 + fVar11 * fVar11;
      fVar16 = fVar16 + fVar11;
      iVar3 = iVar7;
    } while (iVar7 != 0x1f0);
    fVar12 = (float)param_1[2];
    fVar2 = fVar17 * 124.0 - fVar16 * fVar16;
    fVar13 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (fVar15 * -124.0 + fVar16 * fVar14) / fVar2;
    fVar2 = (fVar17 * fVar14 - fVar15 * fVar16) / fVar2;
    fVar15 = 0.0;
    fVar16 = 1.0 / (fVar13 + 1.0);
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    param_1[1] = (float)param_1[1] + param_4 * 0.007751938 * *(float *)*param_1;
    if (fVar2 < 0.0) {
      fVar2 = fVar15;
    }
    param_1[2] = fVar2 + fVar12;
    if (fVar11 < 0.0) {
      fVar11 = fVar15;
    }
    fVar11 = fVar11 + (float)param_1[3];
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar11 < 0.0) << 0x1f | (uint)(fVar11 == 0.0) << 0x1e;
    uVar8 = uVar9 | (uint)NAN(fVar11) << 0x1c;
    param_1[3] = fVar11;
    bVar1 = (byte)(uVar9 >> 0x18);
    fVar14 = fVar15;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
      fVar14 = (float)thunk_cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM(fVar16 * (fVar2 + fVar12));
      fVar11 = (float)param_1[3];
      fVar15 = fVar16 * fVar11;
      fVar14 = (fVar13 + 1.0) * fVar14;
    }
    uVar9 = uVar8 & 0xfffffff | (uint)(fVar11 == 0.0) << 0x1e;
    if (SUB41(uVar9 >> 0x1e,0)) {
      fVar15 = (float)param_1[1];
      *pfVar6 = fVar15;
      param_1[0x107] = fVar15;
      param_1[0x108] = fVar15;
      param_1[0x109] = fVar15;
      param_1[0x10a] = fVar15;
      param_1[0x10b] = fVar15;
      param_1[0x10c] = fVar15;
      param_1[0x10d] = fVar15;
      param_1[0x10e] = fVar15;
      param_1[0x10f] = fVar15;
      param_1[0x110] = fVar15;
      param_1[0x111] = fVar15;
      param_1[0x112] = fVar15;
      param_1[0x113] = fVar15;
      param_1[0x114] = fVar15;
      param_1[0x115] = fVar15;
      param_1[0x116] = fVar15;
      param_1[0x117] = fVar15;
      param_1[0x118] = fVar15;
      param_1[0x119] = fVar15;
      param_1[0x11a] = fVar15;
      param_1[0x11b] = fVar15;
      param_1[0x11c] = fVar15;
      param_1[0x11d] = fVar15;
      param_1[0x11e] = fVar15;
      param_1[0x11f] = fVar15;
      param_1[0x120] = fVar15;
      param_1[0x121] = fVar15;
      param_1[0x122] = fVar15;
      param_1[0x123] = fVar15;
      param_1[0x124] = fVar15;
      param_1[0x125] = fVar15;
      param_1[0x126] = fVar15;
      param_1[0x127] = fVar15;
      param_1[0x128] = fVar15;
      param_1[0x129] = fVar15;
      param_1[0x12a] = fVar15;
      param_1[299] = fVar15;
      param_1[300] = fVar15;
      param_1[0x12d] = fVar15;
      param_1[0x12e] = fVar15;
      param_1[0x12f] = fVar15;
      param_1[0x130] = fVar15;
      param_1[0x131] = fVar15;
      param_1[0x132] = fVar15;
      param_1[0x133] = fVar15;
      param_1[0x134] = fVar15;
      param_1[0x135] = fVar15;
      param_1[0x136] = fVar15;
      param_1[0x137] = fVar15;
      param_1[0x138] = fVar15;
      param_1[0x139] = fVar15;
      param_1[0x13a] = fVar15;
      param_1[0x13b] = fVar15;
      param_1[0x13c] = fVar15;
      param_1[0x13d] = fVar15;
      param_1[0x13e] = fVar15;
      param_1[0x13f] = fVar15;
      param_1[0x140] = fVar15;
      param_1[0x141] = fVar15;
      param_1[0x142] = fVar15;
      param_1[0x143] = fVar15;
      param_1[0x144] = fVar15;
      param_1[0x145] = fVar15;
      param_1[0x146] = fVar15;
      param_1[0x147] = fVar15;
      param_1[0x148] = fVar15;
      param_1[0x149] = fVar15;
      param_1[0x14a] = fVar15;
      param_1[0x14b] = fVar15;
      param_1[0x14c] = fVar15;
      param_1[0x14d] = fVar15;
      param_1[0x14e] = fVar15;
      param_1[0x14f] = fVar15;
      param_1[0x150] = fVar15;
      param_1[0x151] = fVar15;
      param_1[0x152] = fVar15;
      param_1[0x153] = fVar15;
      param_1[0x154] = fVar15;
      param_1[0x155] = fVar15;
      param_1[0x156] = fVar15;
      param_1[0x157] = fVar15;
      param_1[0x158] = fVar15;
      param_1[0x159] = fVar15;
      param_1[0x15a] = fVar15;
      param_1[0x15b] = fVar15;
      param_1[0x15c] = fVar15;
      param_1[0x15d] = fVar15;
      param_1[0x15e] = fVar15;
      param_1[0x15f] = fVar15;
      param_1[0x160] = fVar15;
      param_1[0x161] = fVar15;
      param_1[0x162] = fVar15;
      param_1[0x163] = fVar15;
      param_1[0x164] = fVar15;
      param_1[0x165] = fVar15;
      param_1[0x166] = fVar15;
      param_1[0x167] = fVar15;
      param_1[0x168] = fVar15;
      param_1[0x169] = fVar15;
      param_1[0x16a] = fVar15;
      param_1[0x16b] = fVar15;
      param_1[0x16c] = fVar15;
      param_1[0x16d] = fVar15;
      param_1[0x16e] = fVar15;
      param_1[0x16f] = fVar15;
      param_1[0x170] = fVar15;
      param_1[0x171] = fVar15;
      param_1[0x172] = fVar15;
      param_1[0x173] = fVar15;
      param_1[0x174] = fVar15;
      param_1[0x175] = fVar15;
      param_1[0x176] = fVar15;
      param_1[0x177] = fVar15;
      param_1[0x178] = fVar15;
      param_1[0x179] = fVar15;
      param_1[0x17a] = fVar15;
      param_1[0x17b] = fVar15;
      param_1[0x17c] = fVar15;
      param_1[0x17d] = fVar15;
      param_1[0x17e] = fVar15;
      param_1[0x17f] = fVar15;
      param_1[0x180] = fVar15;
      param_1[0x181] = fVar15;
      param_1[0x182] = fVar15;
      param_1[0x183] = fVar15;
      param_1[0x184] = fVar15;
      param_1[0x185] = fVar15;
      param_1[0x186] = fVar15;
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar9 & 0xfffffff | (uint)((float)param_1[3] == 0.0) << 0x1e;
        if (SUB41(uVar9 >> 0x1e,0)) {
          fVar17 = (float)param_1[1];
        }
        else {
          uVar4 = uVar8;
          if (uVar8 < 6) {
            uVar4 = 5;
          }
          uVar10 = VectorUnsignedToFloat(uVar4,(byte)(uVar9 >> 0x16) & 3);
          fVar17 = (float)thunk_YyTLZETBqTcBrVtqfcdpisSxttdkkSg(uVar10,fVar15);
          fVar17 = fVar14 / fVar17;
        }
        uVar8 = uVar8 + 1;
        *pfVar6 = fVar17;
        pfVar6 = pfVar6 + 1;
      } while (uVar8 != 0x81);
    }
    iVar3 = 0x81;
    fVar15 = (float)VectorSignedToFloat(0x32 - param_2,(byte)(uVar9 >> 0x16) & 3);
    do {
      iVar3 = iVar3 + -1;
      *pfVar5 = (*pfVar5 * fVar13 + pfVar5[-0x81] * fVar15 * fVar16) * 0.02;
      pfVar5 = pfVar5 + 1;
    } while (iVar3 != 0);
  }
  return;
}


// =========================================================================
// Function: thunk_gYItlcIKHqxeoASFRqYguSAHVVaneXvWTSeRBlVrDkOjNatyqImjESUBAaHFiutlfTmBmyBVuWvHiToXSWg
// Entry: 0x71e090a0 | Size: 1 bytes
// =========================================================================

void thunk_gYItlcIKHqxeoASFRqYguSAHVVaneXvWTSeRBlVrDkOjNatyqImjESUBAaHFiutlfTmBmyBVuWvHiToXSWg
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = -0x204;
  fVar4 = 0.9;
  do {
    while( true ) {
      iVar3 = param_1 + iVar1;
      fVar6 = *(float *)(param_2 + iVar1 + 0x204);
      fVar5 = *(float *)(param_4 + iVar1 + 0x204);
      pfVar2 = (float *)&UNK_71b0d740;
      if (fVar6 != 0.2 && fVar6 >= 0.2) {
        pfVar2 = (float *)&DAT_71b0d744;
      }
      if (fVar6 < 0.2) {
        fVar7 = *(float *)(iVar3 + 0x418);
        *(float *)(iVar3 + 0x418) = fVar7 + (fVar5 - fVar7) * 0.05;
      }
      fVar8 = *(float *)(iVar3 + 0x214);
      fVar7 = *pfVar2;
      fVar5 = (1.0 - fVar4) * (fVar6 * fVar8 + (1.0 - fVar6) * fVar5) + fVar4 * fVar8;
      if (fVar7 != fVar4) break;
      *(float *)(iVar3 + 0x820) = fVar5;
      iVar1 = iVar1 + 4;
      fVar4 = fVar7;
      if (iVar1 == 0) {
        return;
      }
    }
    fVar4 = (1.0 - fVar7) * (fVar6 * fVar8 + (1.0 - fVar6) * *(float *)(param_4 + iVar1 + 0x204)) +
            fVar7 * fVar8;
    if (fVar5 < fVar4) {
      fVar4 = fVar5;
    }
    *(float *)(iVar3 + 0x820) = fVar4;
    iVar1 = iVar1 + 4;
    fVar4 = fVar7;
  } while (iVar1 != 0);
  return;
}


// =========================================================================
// Function: thunk_jlkivfbHsPXtesiTctaiuhasjBpQTPtVczvtiGuftcIaaUVhxMzhzD
// Entry: 0x71e090b0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_jlkivfbHsPXtesiTctaiuhasjBpQTPtVczvtiGuftcIaaUVhxMzhzD(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  thunk_orknKiVXzulpXWvTMiYOHoIQRQpCxqvkojqbLQ(param_1 + 0x208);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x187,&uStack_14);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 4,&uStack_14);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x85,&uStack_14);
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x106,&uStack_14);
  return param_1;
}


// =========================================================================
// Function: thunk_eMNuufHlDahNVgrWhaNdmMRGLYSOlvLZHl_IPCdcaGwCtpFrOYzORpiDtPHVxZ_jjrtGbB
// Entry: 0x71e090c0 | Size: 1 bytes
// =========================================================================

int thunk_eMNuufHlDahNVgrWhaNdmMRGLYSOlvLZHl_IPCdcaGwCtpFrOYzORpiDtPHVxZ_jjrtGbB
              (int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_24;
  
  thunk_wfcNOcgrNgIGqewCuAZnFb_RquURVsFC_NmTWHAzGp();
  thunk_LnOB_mJlQBOTUGvPuUaYTlZSuk_KtqeAmeAKnyHbhyRTYdMeiduM(param_1 + 0x331c,param_2);
  thunk_jlkivfbHsPXtesiTctaiuhasjBpQTPtVczvtiGuftcIaaUVhxMzhzD(param_1 + 0x392c,param_2);
  piVar4 = (int *)(param_1 + 0x55fc);
  *piVar4 = 0;
  uVar1 = param_3 - 1;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x5600) = 0;
  *(undefined4 *)(param_1 + 0x5604) = 0;
  if (1 < param_3) {
    if (0xaaaaaa < uVar1) {
      FUN_71b0d124(piVar4);
      if (*piVar4 != 0) {
        *(int *)(param_1 + 0x5600) = *piVar4;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar2 = thunk_MwhHq(uVar1 * 0x180);
    *piVar4 = iVar2;
    *(uint *)(param_1 + 0x5604) = iVar2 + uVar1 * 0x180;
    iVar3 = ((uVar1 * 0x180 - 0x180) / 0x180) * 0x180 + 0x180;
    imp___aeabi_memclr4(iVar2,iVar3);
    *(int *)(param_1 + 0x5600) = iVar2 + iVar3;
  }
  uStack_24 = 0;
  FUN_71b0cbe4(param_1 + 0x517c,&uStack_24);
  uStack_24 = 0x3f800000;
  FUN_71b0cd84(param_1 + 0x4f78,&uStack_24);
  uStack_24 = 0;
  FUN_71b0cbe4(param_1 + 0x52fc,&uStack_24);
  uStack_24 = 0;
  FUN_71b0cbe4(param_1 + 0x547c,&uStack_24);
  iVar2 = *piVar4;
  iVar3 = *(int *)(param_1 + 0x5600);
  if (iVar2 != iVar3) {
    do {
      uStack_24 = 0;
      FUN_71b0cbe4(iVar2,&uStack_24);
      iVar2 = iVar2 + 0x180;
    } while (iVar2 != iVar3);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_XWrDNbPYDETOSCCGKLX_
// Entry: 0x71e090d0 | Size: 1 bytes
// =========================================================================

int * thunk_XWrDNbPYDETOSCCGKLX_(int *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    thunk_qNQrlu();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_wfcNOcgrNgIGqewCuAZnFb_RquURVsFC_NmTWHAzGp
// Entry: 0x71e090e0 | Size: 1 bytes
// =========================================================================

int thunk_wfcNOcgrNgIGqewCuAZnFb_RquURVsFC_NmTWHAzGp(int param_1)

{
  undefined4 uStack_14;
  
  thunk_ZDpfQUjMNyZVcxqlNBrEWQ_GVTJHbJwztMHL();
  *(undefined4 *)(param_1 + 0x3114) = 0x3f000000;
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0x3118,&uStack_14);
  return param_1;
}


// =========================================================================
// Function: thunk_LnOB_mJlQBOTUGvPuUaYTlZSuk_KtqeAmeAKnyHbhyRTYdMeiduM
// Entry: 0x71e090f0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_LnOB_mJlQBOTUGvPuUaYTlZSuk_KtqeAmeAKnyHbhyRTYdMeiduM(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *param_1 = param_2;
  uStack_1c = 0x3f800000;
  FUN_71b0cd84(param_1 + 0x103,&uStack_1c);
  uStack_20 = 0;
  FUN_71b0cd84(param_1 + 0x82,&uStack_20);
  uStack_24 = 0;
  FUN_71b0cd84(param_1 + 1,&uStack_24);
  return param_1;
}


// =========================================================================
// Function: thunk_ztwrHYYRBhSsYQxcAOFtZKdgD_CTMithEqHrAtBXAerWSzVzsIoNRPIDPSsWYad
// Entry: 0x71e09100 | Size: 1 bytes
// =========================================================================

void thunk_ztwrHYYRBhSsYQxcAOFtZKdgD_CTMithEqHrAtBXAerWSzVzsIoNRPIDPSsWYad
               (undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (3 < param_2) {
    return;
  }
  uVar1 = *(undefined4 *)(&DAT_70086e48 + param_2 * 4);
  uVar2 = *(undefined4 *)(&DAT_70086db8 + param_2 * 4);
  *(char *)(param_1 + 2) = (char)(0x1010100 >> ((param_2 & 0x1f) << 3));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


// =========================================================================
// Function: thunk_EP__iWgUhgMc_jexZuhX
// Entry: 0x71e09110 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_EP__iWgUhgMc_jexZuhX(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_420 [1024];
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x200);
  imp___aeabi_memclr4(puVar1,0x200);
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = puVar1;
  param_1[1] = puVar1 + 0x80;
  param_1[2] = puVar1 + 0x80;
  param_1[4] = 0;
  iVar2 = thunk_MwhHq(0x200);
  param_1[5] = iVar2 + 0x200;
  param_1[3] = iVar2;
  imp___aeabi_memclr4(iVar2,0x200);
  param_1[4] = iVar2 + 0x200;
  *puVar1 = 0;
  imp___aeabi_memclr8(auStack_420,0x400);
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x100,1,auStack_420,puVar1,iVar2);
  return param_1;
}


// =========================================================================
// Function: thunk_kvXmTOCTNcSgsLBouwBjjAOMjOjaiwDpcnfCpOWKrZLriRnlESzomieskilsXn_iDtFnrbbbcgEYxYqfvEsM
// Entry: 0x71e09120 | Size: 1 bytes
// =========================================================================

void thunk_kvXmTOCTNcSgsLBouwBjjAOMjOjaiwDpcnfCpOWKrZLriRnlESzomieskilsXn_iDtFnrbbbcgEYxYqfvEsM
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float afStack_250 [130];
  
  if (param_2 < 200) {
    thunk_uOmehHuAwUBwTLlLKVVJmCUvGGHWxMNbqhrCSQZfwmyoGwoWiEtPFarX(param_1,param_2,param_8);
  }
  thunk_qbjWSrwFAtaGmVBBOQLYTmJ_gxZAwbWSMtOMdbpOMPXQtqARSuAatckHOCTawHTgPSZqCPTcWvziO
            (param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  fVar2 = 4.0;
  fVar6 = 4.0;
  fVar1 = fVar6;
  if (*(float *)(param_1 + 0x2f04) < *(float *)(param_1 + 0x2eec)) {
    fVar1 = 8.0;
  }
  fVar1 = (float)imp_tanhf((*(float *)(param_1 + 0x2f04) - *(float *)(param_1 + 0x2eec)) * fVar1);
  if (*(float *)(param_1 + 0x2ef0) < *(float *)(param_1 + 0x2f0c)) {
    fVar6 = 8.0;
  }
  fVar6 = (float)imp_tanhf((*(float *)(param_1 + 0x2ef0) - *(float *)(param_1 + 0x2f0c)) * fVar6);
  if (*(float *)(param_1 + 0x2f08) < *(float *)(param_1 + 0x2ef4)) {
    fVar2 = 8.0;
  }
  fVar2 = (float)imp_tanhf((*(float *)(param_1 + 0x2f08) - *(float *)(param_1 + 0x2ef4)) * fVar2);
  fVar1 = *(float *)(param_1 + 0x3114) +
          (((fVar6 + 1.0) * 0.5 * *(float *)(param_1 + 0x2efc) +
            *(float *)(param_1 + 0x2ef8) * (fVar1 + 1.0) * 0.5 +
           *(float *)(param_1 + 0x2f00) * (fVar2 + 1.0) * 0.5) - *(float *)(param_1 + 0x3114)) * 0.1
  ;
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 < 0.01) {
    fVar1 = 0.01;
  }
  *(float *)(param_1 + 0x3114) = fVar1;
  thunk_wiDFrGiVFLhNJ_RYdPBsuRxvkHrembILLfvnWdfltbBwwhDcReGzqnsChIAoaZUPwWmXsgrQUVsLfAktx
            (param_1 + 0x2f10,0x81,afStack_250,0x81);
  iVar3 = 0;
  do {
    pfVar4 = (float *)((int)afStack_250 + iVar3);
    pfVar5 = (float *)(param_1 + 0x3118 + iVar3);
    iVar3 = iVar3 + 4;
    *pfVar5 = 1.0 / (((1.0 - fVar1) / (fVar1 + 0.0001)) * *pfVar4 + 1.0);
  } while (iVar3 != 0x204);
  return;
}


// =========================================================================
// Function: thunk_joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
// Entry: 0x71e09130 | Size: 1 bytes
// =========================================================================

void thunk_joFYTptSwXFIYmwIozhlyTvymbDVdbyWpebBxnDwOzfzYllNaiSv
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  
  iVar6 = 1;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x100,1,param_2,*param_1,param_1[3]);
  *param_4 = 0;
  puVar9 = param_3 + 1;
  *param_3 = *param_2;
  puVar4 = param_4 + 0x80;
  *puVar4 = 0;
  puVar7 = param_2 + 0x100;
  puVar5 = param_3 + 0x80;
  *puVar5 = param_2[1];
  puVar1 = param_2 + 2;
  if (puVar4 <= puVar9 || puVar5 <= param_4 + 1) {
    bVar8 = puVar7 <= puVar9 || puVar5 <= puVar1;
    if (puVar7 <= puVar9 || puVar5 <= puVar1) {
      bVar8 = puVar7 <= param_4 + 1 || puVar4 <= puVar1;
    }
    if (bVar8) {
      iVar6 = 4;
      do {
        puVar3 = (undefined8 *)((int)param_4 + iVar6);
        puVar4 = (undefined4 *)0x380;
        puVar5 = (undefined4 *)0x390;
        lVar10 = 2;
        puVar9 = puVar1;
        while( true ) {
          *puVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) break;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined4 *)0x388;
        puVar5 = (undefined4 *)0x398;
        lVar10 = 2;
        while( true ) {
          *puVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) break;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar1 = puVar1 + 8;
        *puVar3 = in_d18;
        puVar3[1] = in_d19;
        puVar3 = (undefined8 *)((int)param_3 + iVar6);
        iVar6 = iVar6 + 0x10;
        *puVar3 = in_d16;
        puVar3[1] = in_d17;
      } while (iVar6 != 500);
      iVar6 = 0x7d;
    }
  }
  iVar2 = iVar6 << 2;
  puVar1 = param_2 + iVar6 * 2 + 1;
  do {
    *(undefined4 *)((int)param_3 + iVar2) = puVar1[-1];
    *(undefined4 *)((int)param_4 + iVar2) = *puVar1;
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x200);
  return;
}


// =========================================================================
// Function: thunk_rnoOryioIowYBvrIgEQJNhFWuMBjsvsVnsgoAWZbikwDbtCaRAMM_dPVuyCqvugfxQcF
// Entry: 0x71e09140 | Size: 1 bytes
// =========================================================================

void thunk_rnoOryioIowYBvrIgEQJNhFWuMBjsvsVnsgoAWZbikwDbtCaRAMM_dPVuyCqvugfxQcF
               (int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = -0x204;
  pfVar2 = (float *)*param_1;
  iVar4 = iVar3;
  do {
    fVar7 = *(float *)(param_3 + iVar4 + 0x204);
    fVar5 = *(float *)(param_6 + iVar4 + 0x204);
    fVar6 = 0.0;
    if (fVar7 < fVar5) {
      fVar6 = fVar5 / (fVar7 + 0.0001) + -1.0;
    }
    pfVar1 = (float *)((int)param_1 + iVar4 + 0x610);
    fVar6 = fVar6 * 0.01999998 +
            *pfVar1 * (*(float *)((int)param_1 + iVar4 + 0x208) /
                      (*(float *)(param_4 + iVar4 + 0x204) + 0.0001)) * 0.98;
    fVar6 = fVar6 / (*pfVar2 + fVar6);
    *pfVar1 = fVar6;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < pfVar2[1]) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      fVar6 = pfVar2[1];
    }
    iVar4 = iVar4 + 4;
    *pfVar1 = fVar6;
  } while (iVar4 != 0);
  if (param_2 < 0x32) {
    fVar6 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat(0x32 - param_2,(byte)(in_fpscr >> 0x16) & 3);
    do {
      pfVar1 = (float *)((int)param_1 + iVar3 + 0x40c);
      fVar7 = *(float *)(param_6 + iVar3 + 0x204) + *pfVar1;
      *pfVar1 = fVar7;
      pfVar1 = (float *)((int)param_1 + iVar3 + 0x610);
      fVar7 = (fVar7 - *pfVar2 * *(float *)(param_5 + iVar3 + 0x204)) / (fVar7 + 0.0001);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 < pfVar2[1]) {
        fVar7 = pfVar2[1];
      }
      iVar3 = iVar3 + 4;
      *pfVar1 = (fVar7 * fVar5 + *pfVar1 * fVar6) * 0.02;
    } while (iVar3 != 0);
  }
  imp___aeabi_memmove4(param_1 + 1,param_6,0x204);
  return;
}


// =========================================================================
// Function: thunk_sXGpypvxixdQqZGLFHnhSs_guvnyvjlAHqBYLktUjxQ_eyHNQGJIoUvwiwAZhsWONNFsK
// Entry: 0x71e09150 | Size: 1 bytes
// =========================================================================

void thunk_sXGpypvxixdQqZGLFHnhSs_guvnyvjlAHqBYLktUjxQ_eyHNQGJIoUvwiwAZhsWONNFsK
               (undefined4 *param_1,float *param_2,undefined4 param_3,int param_4,undefined4 param_5
               ,float *param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  float *pfVar7;
  longlong lVar8;
  
  pfVar2 = param_6 + 0x100;
  *param_6 = *param_2;
  pfVar5 = param_2 + 0x80;
  param_6[1] = *pfVar5;
  pfVar1 = param_6 + 2;
  bVar6 = pfVar5 <= pfVar1 || pfVar2 <= param_2 + 1;
  iVar4 = 1;
  if (pfVar5 <= pfVar1 || pfVar2 <= param_2 + 1) {
    bVar6 = (float *)(param_4 + 0x200) <= pfVar1 || pfVar2 <= (float *)(param_4 + 4);
  }
  if (bVar6) {
    iVar4 = 4;
    do {
      iVar4 = iVar4 + 0x10;
      pfVar2 = (float *)0x380;
      pfVar5 = (float *)0x390;
      lVar8 = 2;
      pfVar7 = pfVar1;
      while( true ) {
        *pfVar7 = *pfVar2;
        pfVar7[1] = *pfVar5;
        pfVar7 = pfVar7 + 2;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) break;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      pfVar2 = (float *)0x388;
      pfVar5 = (float *)0x398;
      lVar8 = 2;
      while( true ) {
        *pfVar7 = *pfVar2;
        pfVar7[1] = *pfVar5;
        pfVar7 = pfVar7 + 2;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) break;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
      }
      pfVar1 = pfVar1 + 8;
    } while (iVar4 != 500);
    iVar4 = 0x7d;
  }
  iVar3 = iVar4 << 3;
  pfVar1 = param_2 + iVar4;
  pfVar2 = (float *)(param_4 + iVar4 * 4);
  do {
    pfVar5 = (float *)((int)param_6 + iVar3);
    *pfVar5 = *pfVar1;
    iVar3 = iVar3 + 8;
    pfVar5[1] = *pfVar2;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0x400);
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x100,0xffffffff,param_6,*param_1,param_1[3]);
  if (param_7 != 0) {
    param_7 = param_7 << 2;
    do {
      param_7 = param_7 + -4;
      *param_6 = *param_6 * 0.0078125;
      param_6 = param_6 + 1;
    } while (param_7 != 0);
  }
  return;
}


// =========================================================================
// Function: thunk_ulihJQtFaRuCYSYjALwwFUgIKGYQqcUmOMjzIfbFWLuVVGBRa_CsNlAZpdg
// Entry: 0x71e09160 | Size: 1 bytes
// =========================================================================

float thunk_ulihJQtFaRuCYSYjALwwFUgIKGYQqcUmOMjzIfbFWLuVVGBRa_CsNlAZpdg
                (int *param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((200 < param_2) && (*(char *)(*param_1 + 8) != '\0')) {
    fVar2 = 1.0;
    fVar1 = (float)thunk_CtFkdMPUq__nQWblLGweEClPTortNiChXic(param_5 / (param_4 + 1.0));
    if (0.5 < fVar1) {
      fVar2 = (fVar1 + -0.5) * 1.3 + 1.0;
      if (1.0 < fVar1 * fVar2) {
        fVar2 = 1.0 / fVar1;
      }
    }
    fVar3 = 1.0;
    if (fVar1 < 0.5) {
      if (fVar1 < *(float *)(*param_1 + 4)) {
        fVar1 = *(float *)(*param_1 + 4);
      }
      fVar3 = (0.5 - fVar1) * -0.3 + 1.0;
    }
    return (1.0 - param_3) * fVar3 + param_3 * fVar2;
  }
  return 1.0;
}


// =========================================================================
// Function: thunk_orknKiVXzulpXWvTMiYOHoIQRQpCxqvkojqbLQ
// Entry: 0x71e09170 | Size: 1 bytes
// =========================================================================

int thunk_orknKiVXzulpXWvTMiYOHoIQRQpCxqvkojqbLQ(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_14;
  
  *(undefined4 *)(param_1 + 0xe28) = 1;
  iVar3 = 0;
  uStack_14 = 0;
  FUN_71b0cd84(param_1 + 0xc18,&uStack_14);
  do {
    puVar2 = (undefined8 *)(param_1 + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar2 = 0x3e99999a3e99999a;
    puVar2[1] = 0x3e99999a3e99999a;
  } while (iVar3 != 0x600);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x4100000041000000;
  auVar1 = auVar1 << 0x40 | auVar1;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x600) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x604) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x608) = 0x3e99999a;
  do {
    puVar4 = (undefined4 *)(param_1 + 0x60c + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar4 = *(undefined4 *)auVar1;
    puVar4[1] = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
    puVar4[2] = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
    puVar4[3] = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  } while (iVar3 != 0x600);
  *(undefined4 *)(param_1 + 0xc0c) = 0x41000000;
  *(undefined4 *)(param_1 + 0xc10) = 0x41000000;
  *(undefined4 *)(param_1 + 0xc14) = 0x41000000;
  *(undefined4 *)(param_1 + 0xe1c) = 0x42;
  *(undefined4 *)(param_1 + 0xe20) = 0x85;
  *(undefined4 *)(param_1 + 0xe24) = 200;
  return param_1;
}


// =========================================================================
// Function: thunk_ShyEhURBNnBRBwcqvSjaTmzXGvQoEfFaeJZrRdCKnpoCwCtVJRpuzgTZaLLxXzhuKSNLNJYMxvD_uUwoMlvn
// Entry: 0x71e09180 | Size: 1 bytes
// =========================================================================

void thunk_ShyEhURBNnBRBwcqvSjaTmzXGvQoEfFaeJZrRdCKnpoCwCtVJRpuzgTZaLLxXzhuKSNLNJYMxvD_uUwoMlvn
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_228 [129];
  float fStack_24;
  
  thunk_h_mkVooMCQaXlfNoTcKEBiKvyolfCvXsOfzGsqFNWglyzzpsrscQebyBlyqLNnyFnyjKipHMe
            (param_2,0x81,afStack_228,0x81);
  iVar4 = *(int *)(param_1 + 0xe1c);
  iVar3 = -0x204;
  fVar15 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = 1.0 / (fVar15 + 1.0);
  fVar11 = 40.0;
  do {
    iVar6 = param_1 + iVar3;
    fVar10 = *(float *)(iVar6 + 0x204);
    fVar14 = *(float *)((int)&fStack_24 + iVar3);
    fVar12 = fVar11;
    if (1.0 < fVar10) {
      fVar12 = 40.0 / fVar10;
    }
    fVar12 = fVar16 * fVar12;
    fVar13 = *(float *)(iVar6 + 0x810);
    fVar1 = fVar12 * -0.75;
    if (fVar13 < fVar14) {
      fVar1 = fVar12 * 0.25;
    }
    fVar13 = fVar13 + fVar1;
    *(float *)(iVar6 + 0x810) = fVar13;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(ABS(fVar14 - fVar13) < 0.01) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      *(float *)(iVar6 + 0x204) = fVar16 * (fVar15 * fVar10 + 50.0);
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0);
  iVar3 = *(int *)(param_1 + 0xe20);
  iVar6 = 1;
  if (iVar4 < 200) {
    iVar6 = iVar4 + 1;
  }
  *(int *)(param_1 + 0xe1c) = iVar6;
  fVar15 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  iVar6 = 0;
  iVar4 = -(uint)(iVar4 < 200 || *(int *)(param_1 + 0xe28) < 200);
  fVar16 = 1.0 / (fVar15 + 1.0);
  do {
    iVar7 = param_1 + iVar6;
    pfVar2 = (float *)((int)afStack_228 + iVar6);
    fVar10 = *(float *)(iVar7 + 0x204);
    iVar6 = iVar6 + 4;
    fVar14 = *pfVar2;
    fVar12 = fVar11;
    if (1.0 < fVar10) {
      fVar12 = 40.0 / fVar10;
    }
    fVar12 = fVar16 * fVar12;
    fVar13 = *(float *)(iVar7 + 0x810);
    fVar1 = fVar12 * -0.75;
    if (fVar13 < fVar14) {
      fVar1 = fVar12 * 0.25;
    }
    fVar13 = fVar13 + fVar1;
    *(float *)(iVar7 + 0x810) = fVar13;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(ABS(fVar14 - fVar13) < 0.01) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      *(float *)(iVar7 + 0x204) = fVar16 * (fVar15 * fVar10 + 50.0);
    }
  } while (iVar6 != 0x204);
  iVar7 = *(int *)(param_1 + 0xe24);
  iVar6 = iVar3 + 1;
  if (199 < iVar3) {
    iVar6 = 1;
  }
  iVar9 = iVar4;
  if (199 < *(int *)(param_1 + 0xe28)) {
    iVar9 = 0x81;
  }
  fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar3 < 200) {
    iVar9 = iVar4;
  }
  iVar3 = 0;
  *(int *)(param_1 + 0xe20) = iVar6;
  fVar16 = 1.0 / (fVar15 + 1.0);
  do {
    pfVar2 = (float *)(param_1 + 0x408 + iVar3);
    pfVar8 = (float *)((int)afStack_228 + iVar3);
    pfVar5 = (float *)(param_1 + 0xa14 + iVar3);
    fVar10 = *pfVar2;
    iVar3 = iVar3 + 4;
    fVar14 = *pfVar8;
    fVar12 = fVar11;
    if (1.0 < fVar10) {
      fVar12 = 40.0 / fVar10;
    }
    fVar12 = fVar16 * fVar12;
    fVar13 = *pfVar5;
    fVar1 = fVar12 * -0.75;
    if (fVar13 < fVar14) {
      fVar1 = fVar12 * 0.25;
    }
    fVar13 = fVar13 + fVar1;
    *pfVar5 = fVar13;
    if (ABS(fVar14 - fVar13) < 0.01) {
      *pfVar2 = fVar16 * (fVar15 * fVar10 + 50.0);
    }
  } while (iVar3 != 0x204);
  iVar3 = iVar7 + 1;
  if (199 < iVar7) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xe24) = iVar3;
  if (*(int *)(param_1 + 0xe28) < 200) {
    *(int *)(param_1 + 0xe28) = *(int *)(param_1 + 0xe28) + 1;
    iVar9 = 0x102;
  }
  else {
    if (199 < iVar7) {
      iVar9 = 0x102;
    }
    if (iVar9 < 0) goto LAB_71b0f7d8;
  }
  thunk_BCQSXTSwxIgFnoXKTrXKoCBGbZJPybDM_qhtPiLdbpkOdBRXhyBZHlHRJmDhXyYXxEnZBmdLD
            (param_1 + 0x60c + iVar9 * 4,0x81,param_1 + 0xc18,0x81);
LAB_71b0f7d8:
  imp___aeabi_memmove4(param_3,param_1 + 0xc18,0x204);
  return;
}


// =========================================================================
// Function: thunk_MRPsOTayqvGlwkRg_djwJCNjKEULoXMl
// Entry: 0x71e09190 | Size: 1 bytes
// =========================================================================

void thunk_MRPsOTayqvGlwkRg_djwJCNjKEULoXMl(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  param_1[5] = 0;
  return;
}


// =========================================================================
// Function: thunk_bySnQ_mmiSHbGr_NkhhUkmfhQXkszdM_UdKKkiOzlQW_PXptFA_AuBxSstdktPa
// Entry: 0x71e091a0 | Size: 1 bytes
// =========================================================================

void thunk_bySnQ_mmiSHbGr_NkhhUkmfhQXkszdM_UdKKkiOzlQW_PXptFA_AuBxSstdktPa
               (float *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar19 = 0.0;
  fVar20 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)VectorSignedToFloat(param_2[2],(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(param_2[3],(byte)(in_fpscr >> 0x16) & 3);
  iVar2 = param_2[1] + *param_2 + param_2[2] + param_2[3] + param_2[4] + param_2[5] + param_2[6] +
          param_2[7] + param_2[8] + param_2[9];
  fVar16 = (float)VectorSignedToFloat(param_2[4],(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = (float)VectorSignedToFloat(param_2[7],(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)VectorSignedToFloat(param_2[5],(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = (float)VectorSignedToFloat(param_2[6],(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(param_2[8],(byte)(in_fpscr >> 0x16) & 3);
  fVar18 = (float)VectorSignedToFloat(param_2[9],(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = fVar20 * 0.05 + 0.0 + fVar15 * 0.15 + fVar13 * 0.25 + fVar11 * 0.35 + fVar16 * 0.45000002
           + fVar14 * 0.55 + fVar17 * 0.65000004 + fVar21 * 0.75 + fVar12 * 0.85 + fVar18 * 0.95;
  if (0 < iVar2) {
    fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = fVar11 / fVar12;
  }
  iVar2 = 0;
  fVar12 = fVar19;
  do {
    iVar3 = iVar2 + 1;
    fVar14 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(param_2[iVar2],(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (fVar14 + 0.5) * 0.1;
    fVar13 = fVar14 * fVar13;
    fVar12 = fVar12 + fVar13 * fVar14;
    fVar19 = fVar13 + fVar19;
    iVar2 = iVar3;
  } while (iVar3 != 1000);
  fVar12 = fVar12 * 0.002 - fVar11 * fVar19 * 0.002;
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 < 0.05) << 0x1f;
  if (SUB41(uVar10 >> 0x1f,0)) {
    fVar11 = 1.0;
  }
  else {
    fVar13 = 0.2;
    if (0.2 < fVar11 * 1.2) {
      fVar13 = fVar11 * 1.2;
    }
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar13 < 1.0) << 0x1f;
    fVar11 = 1.0;
    if (SUB41(uVar10 >> 0x1f,0)) {
      fVar11 = fVar13;
    }
  }
  fVar13 = 0.0;
  *param_1 = fVar11;
  iVar6 = 0;
  iVar3 = 0;
  iVar2 = 0;
  iVar9 = 0;
  iVar8 = 0;
  fVar11 = fVar13;
  fVar14 = fVar13;
  do {
    while( true ) {
      iVar7 = iVar3;
      iVar3 = param_2[iVar6 + 1000];
      fVar15 = (float)VectorSignedToFloat(iVar6,(byte)(uVar10 >> 0x16) & 3);
      fVar15 = (fVar15 + 0.5) * 0.05;
      if (iVar3 <= iVar7) break;
      iVar6 = iVar6 + 1;
      iVar2 = iVar7;
      iVar9 = iVar3;
      iVar8 = iVar7;
      fVar13 = fVar15;
      fVar11 = fVar14;
      fVar14 = fVar15;
      if (iVar6 == 1000) goto LAB_71b1035c;
    }
    if (iVar2 < iVar3) {
      iVar8 = iVar3;
      iVar2 = iVar3;
      fVar11 = fVar15;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar7;
  } while (iVar6 != 1000);
LAB_71b1035c:
  uVar1 = uVar10 & 0xfffffff | (uint)(ABS(fVar11 - fVar14) < 0.1) << 0x1f;
  if (SUB41(uVar1 >> 0x1f,0)) {
    fVar15 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x16) & 3);
    fVar16 = (float)VectorSignedToFloat(iVar8,(byte)(uVar1 >> 0x16) & 3);
    uVar1 = uVar10 & 0xfffffff | (uint)(fVar15 * 0.5 < fVar16) << 0x1f;
    if (SUB41(uVar1 >> 0x1f,0)) {
      iVar9 = iVar3 + iVar8;
      fVar13 = (fVar14 + fVar11) * 0.5;
    }
  }
  fVar14 = 0.0;
  iVar7 = 0;
  iVar3 = 0;
  iVar8 = 0;
  iVar2 = 0;
  iVar6 = 0;
  fVar15 = fVar14;
  fVar11 = fVar14;
  do {
    while( true ) {
      fVar16 = fVar14;
      iVar5 = iVar8;
      iVar8 = param_2[iVar7 + 2000];
      fVar14 = (float)VectorSignedToFloat(iVar7,(byte)(uVar1 >> 0x16) & 3);
      fVar14 = (fVar14 + 0.5) * 0.1;
      if (iVar8 <= iVar5) break;
      iVar7 = iVar7 + 1;
      iVar3 = iVar5;
      iVar2 = iVar5;
      iVar6 = iVar8;
      fVar15 = fVar14;
      fVar11 = fVar16;
      if (iVar7 == 1000) goto LAB_71b1042c;
    }
    if (iVar2 < iVar8) {
      iVar3 = iVar8;
      iVar2 = iVar8;
      fVar11 = fVar14;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar5;
    fVar14 = fVar16;
  } while (iVar7 != 1000);
LAB_71b1042c:
  uVar10 = uVar1 & 0xfffffff | (uint)(ABS(fVar11 - fVar14) < 0.2) << 0x1f;
  if (SUB41(uVar10 >> 0x1f,0)) {
    fVar16 = (float)VectorSignedToFloat(iVar8,(byte)(uVar10 >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(iVar3,(byte)(uVar10 >> 0x16) & 3);
    uVar10 = uVar1 & 0xfffffff | (uint)(fVar16 * 0.5 < fVar17) << 0x1f;
    if (SUB41(uVar10 >> 0x1f,0)) {
      iVar6 = iVar8 + iVar3;
      fVar15 = (fVar14 + fVar11) * 0.5;
    }
  }
  uVar10 = uVar10 & 0xfffffff | (uint)(fVar12 < 0.05) << 0x1f;
  uVar4 = (uint)(0x95 < iVar9 && 0.6 <= fVar13);
  fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x16) & 3);
  uVar1 = (uint)(!SUB41(uVar10 >> 0x1f,0) && 0x95 < iVar6);
  fVar11 = (float)VectorUnsignedToFloat(uVar1,(byte)(uVar10 >> 0x16) & 3);
  fVar12 = 1.0 / (fVar12 + 1.0 + fVar11);
  param_1[3] = fVar12;
  fVar11 = 0.16;
  if (0.16 < fVar15 * 1.2) {
    fVar11 = fVar15 * 1.2;
  }
  fVar14 = 1.0;
  if (fVar11 < 1.0) {
    fVar14 = fVar11;
  }
  param_1[2] = fVar14;
  fVar11 = 0.0;
  if (uVar4 == 1) {
    fVar11 = 0.1;
    if (0.1 < fVar13 * 0.9) {
      fVar11 = fVar13 * 0.9;
    }
    fVar13 = 0.95;
    if (fVar11 < 0.95) {
      fVar13 = fVar11;
    }
    param_1[1] = fVar13;
    fVar11 = fVar12;
  }
  param_1[4] = fVar11;
  fVar11 = 0.0;
  if (uVar1 != 0) {
    fVar11 = fVar12;
  }
  param_1[5] = fVar11;
  return;
}


// =========================================================================
// Function: thunk_DncGDORhSRyIHLSOJHzgXlrNyHmqEIdWENDyBj_IA
// Entry: 0x71e091b0 | Size: 1 bytes
// =========================================================================

void thunk_DncGDORhSRyIHLSOJHzgXlrNyHmqEIdWENDyBj_IA(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0x3f0000003f000000;
  *(undefined8 *)(param_1 + 3) = 0x3f800000;
  param_1[5] = 0;
  return;
}


// =========================================================================
// Function: thunk_DgqpxlhWvgjKaxeGuAkbmUapzSR
// Entry: 0x71e091c0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_DgqpxlhWvgjKaxeGuAkbmUapzSR(undefined4 *param_1)

{
  *param_1 = 0x3f000000;
  param_1[1] = 0x3f000000;
  param_1[2] = 0x3f000000;
  FUN_71b0cd84(param_1 + 3,&DAT_7009a734);
  return param_1;
}


// =========================================================================
// Function: thunk_uOmehHuAwUBwTLlLKVVJmCUvGGHWxMNbqhrCSQZfwmyoGwoWiEtPFarX
// Entry: 0x71e091d0 | Size: 1 bytes
// =========================================================================

void thunk_uOmehHuAwUBwTLlLKVVJmCUvGGHWxMNbqhrCSQZfwmyoGwoWiEtPFarX
               (float *param_1,int param_2,float param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
  *param_1 = (param_3 + *param_1 * fVar1) / fVar2;
  return;
}


// =========================================================================
// Function: thunk_qbjWSrwFAtaGmVBBOQLYTmJ_gxZAwbWSMtOMdbpOMPXQtqARSuAatckHOCTawHTgPSZqCPTcWvziO
// Entry: 0x71e091e0 | Size: 1 bytes
// =========================================================================

void thunk_qbjWSrwFAtaGmVBBOQLYTmJ_gxZAwbWSMtOMdbpOMPXQtqARSuAatckHOCTawHTgPSZqCPTcWvziO
               (float *param_1,int param_2,int param_3,int param_4,float *param_5,float param_6,
               float param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar4 = param_1 + 0xbba;
  iVar2 = 4;
  do {
    if (*(float *)((int)param_5 + iVar2) == 0.0) {
      fVar11 = param_1[0xbc3] + param_1[0xbc3] * -0.3;
      goto LAB_71b0fcec;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x204);
  fVar11 = 0.0;
  iVar2 = 4;
  do {
    fVar3 = (float)thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(*(undefined4 *)((int)param_5 + iVar2));
    iVar2 = iVar2 + 4;
    fVar11 = fVar11 + fVar3;
  } while (iVar2 != 0x204);
  fVar3 = *param_5;
  fVar11 = (float)thunk_cLSkMcQdXEODSRBTKo_I_RSpCQ_FcM(fVar11 * 0.007751938);
  fVar11 = param_1[0xbc3] + (fVar11 / ((param_6 - fVar3) * 0.007751938) - param_1[0xbc3]) * 0.3;
LAB_71b0fcec:
  param_1[0xbc3] = fVar11;
  iVar2 = 0;
  fVar11 = 0.0;
  do {
    pfVar5 = (float *)(param_4 + iVar2);
    iVar2 = iVar2 + 4;
    fVar11 = fVar11 + *pfVar5;
  } while (iVar2 != 0x204);
  iVar2 = 0;
  fVar7 = 0.0;
  fVar3 = fVar7;
  fVar8 = fVar7;
  do {
    pfVar5 = (float *)(param_4 + iVar2);
    pfVar6 = (float *)((int)param_5 + iVar2);
    iVar2 = iVar2 + 4;
    fVar9 = *pfVar5 - fVar11 * 0.007751938;
    fVar10 = *pfVar6 - param_6 * 0.007751938;
    fVar8 = fVar8 + fVar9 * fVar9;
    fVar3 = fVar3 + fVar10 * fVar9;
    fVar7 = fVar7 + fVar10 * fVar10;
  } while (iVar2 != 0x204);
  fVar11 = *pfVar4;
  *pfVar4 = (float)((int)fVar11 + -1);
  param_1[1] = param_1[1] + param_7;
  param_1[0xbc2] =
       param_1[0xbc2] +
       ((fVar7 * 0.007751938 -
        (fVar3 * 0.007751938 * fVar3 * 0.007751938) / (fVar8 * 0.007751938 + 0.0001)) /
        (*param_1 + 0.0001) - param_1[0xbc2]) * 0.3;
  if ((int)fVar11 < 2) {
    thunk_bySnQ_mmiSHbGr_NkhhUkmfhQXkszdM_UdKKkiOzlQW_PXptFA_AuBxSstdktPa
              (param_1 + 0xbbb,param_1 + 2);
    thunk_XJQXXeGD_rAyCaYevXNuuTOxGDOGfb(param_1 + 2);
    fVar11 = param_1[1];
    *pfVar4 = 7.00649e-43;
    param_1[1] = 0.0;
    *param_1 = (fVar11 / 500.0 + *param_1) * 0.5;
  }
  else {
    thunk_OyzYrmriocmcwJwVtwTgPywRkBbyOvQSoFCtUrOcRdaYFZImh(param_1 + 2,param_1 + 0xbc1);
  }
  iVar2 = 0;
  do {
    fVar3 = *(float *)(param_2 + iVar2) + *(float *)(param_2 + iVar2);
    fVar7 = fVar3 + 1.0;
    fVar8 = *(float *)(param_3 + iVar2);
    fVar11 = (float)thunk_DmaMTqA_tGBQkErjEQPZTvKXAKENTY(fVar7);
    pfVar4 = (float *)((int)param_1 + iVar2 + 0x2f10);
    iVar2 = iVar2 + 4;
    fVar9 = *pfVar4;
    *pfVar4 = fVar9 + (((fVar8 + 1.0) * (fVar3 / (fVar7 + 0.0001)) - fVar11) - fVar9) * 0.5;
  } while (iVar2 != 0x204);
  fVar11 = 0.0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0x2f10;
    iVar2 = iVar2 + 4;
    fVar11 = fVar11 + *(float *)((int)param_1 + iVar1);
  } while (iVar2 != 0x204);
  param_1[0xbc1] = fVar11 * 0.007751938;
  return;
}


// =========================================================================
// Function: thunk_ZDpfQUjMNyZVcxqlNBrEWQ_GVTJHbJwztMHL
// Entry: 0x71e091f0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_ZDpfQUjMNyZVcxqlNBrEWQ_GVTJHbJwztMHL(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  thunk_YIFnbIonzxrlPCYvggkTTbXoGh(param_1 + 2);
  param_1[0xbba] = 500;
  thunk_DncGDORhSRyIHLSOJHzgXlrNyHmqEIdWENDyBj_IA(param_1 + 0xbbb,0x3f000000);
  thunk_DgqpxlhWvgjKaxeGuAkbmUapzSR(param_1 + 0xbc1);
  return param_1;
}


// =========================================================================
// Function: thunk_gecnDSZTzrsiFfWZpXkUpshTWpJrEoKqDMT
// Entry: 0x71e09200 | Size: 1 bytes
// =========================================================================

undefined4 thunk_gecnDSZTzrsiFfWZpXkUpshTWpJrEoKqDMT(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x4b0);
  return param_1;
}


// =========================================================================
// Function: thunk_NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN
// Entry: 0x71e09210 | Size: 1 bytes
// =========================================================================

void thunk_NVmbesL_aFX_tUzwJfCAGfyXBwVXKobaxpN(void)

{
  return;
}


// =========================================================================
// Function: thunk_CXmWkiPkSgVWTKkyUyIqgNxPPhZRSZfHLCFCkJyZYArR_AsIWEmjvRLXxak_bdtmwKdiPxOhQz
// Entry: 0x71e09220 | Size: 1 bytes
// =========================================================================

void thunk_CXmWkiPkSgVWTKkyUyIqgNxPPhZRSZfHLCFCkJyZYArR_AsIWEmjvRLXxak_bdtmwKdiPxOhQz
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_528 [640];
  undefined1 auStack_2a8 [320];
  undefined1 auStack_168 [324];
  
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
    uVar2 = 0;
    iVar3 = 0x18;
    do {
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(param_2 + 4) + uVar2 * 4),0x140,auStack_528);
      iVar1 = *(int *)(param_1 + 4) + iVar3;
      thunk_cFvlAGmqaIIjwLDAeAvZK
                (auStack_528,*(undefined4 *)(param_2 + 0xc),auStack_2a8,auStack_168,iVar1 + -0x18,
                 iVar1);
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_2a8,0xa0,*(undefined4 *)(*(int *)(param_3 + 4) + uVar2 * 4));
      thunk_jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
                (auStack_168,0xa0,
                 *(undefined4 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 0x14) * 4 + uVar2 * 4));
      iVar3 = iVar3 + 0x60;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5) * -0x55555555));
  }
  return;
}


// =========================================================================
// Function: thunk_kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
// Entry: 0x71e09230 | Size: 1 bytes
// =========================================================================

void thunk_kpnHfhDxlOnmfuUhpwGpBBVhOHBA_DrpnmFnPsesLvpTQIDogPrwSFjDBawiDNNJgCZwhZqKmuNymLicBXGuPk_gsthpYIo
               (int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  int *piVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  undefined4 **ppuVar27;
  int iVar28;
  uint uVar29;
  undefined1 uVar30;
  undefined4 *puVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 *apuStack_560 [2];
  undefined1 *puStack_558;
  undefined1 *puStack_554;
  int iStack_550;
  undefined1 *puStack_54c;
  undefined4 *puStack_548;
  int iStack_544;
  float afStack_528 [16];
  undefined1 auStack_4e8 [560];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [580];
  undefined1 auStack_64 [64];
  
  puVar23 = &stack0xfffffff8;
  ppuVar27 = apuStack_560;
  iStack_544 = param_1;
  if (0 < (int)param_3[1]) {
    imp___aeabi_memclr4(*param_3,param_3[1] << 2);
  }
  if (0 < (int)param_3[3]) {
    imp___aeabi_memclr4(param_3[2],param_3[3] << 2);
  }
  if (0 < (int)param_3[5]) {
    imp___aeabi_memclr4(param_3[4],param_3[5] << 2);
  }
  puVar13 = auStack_2a8;
  pfVar15 = afStack_528;
  iVar24 = 0;
  iStack_550 = iStack_544 + 0x1c;
  puStack_554 = auStack_2b8;
  puStack_558 = auStack_64;
  puVar5 = (undefined4 *)(param_2 + 8);
  apuStack_560[0] = puVar5;
  puStack_548 = param_3;
  puStack_54c = auStack_4e8;
  do {
    iVar6 = 0;
    *(undefined4 **)((int)ppuVar27 + 4) = puVar5;
    do {
      puVar2 = (undefined4 *)0x370;
      puVar3 = (undefined4 *)0x380;
      puVar4 = (undefined4 *)0x390;
      lVar32 = 2;
      puVar31 = puVar5;
      while( true ) {
        *puVar2 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar3 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar4 = *puVar31;
        puVar31 = puVar31 + 1;
        lVar32 = lVar32 + -1;
        if (lVar32 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 6;
      puVar9 = (undefined8 *)(puVar13 + iVar6);
      iVar6 = iVar6 + 0x10;
      uVar30 = iVar6 == 0x270;
      puVar2 = (undefined4 *)0x378;
      puVar3 = (undefined4 *)0x388;
      puVar4 = (undefined4 *)0x398;
      lVar32 = 2;
      puVar31 = puVar5;
      while( true ) {
        *puVar2 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar3 = *puVar31;
        puVar31 = puVar31 + 1;
        *puVar4 = *puVar31;
        puVar31 = puVar31 + 1;
        lVar32 = lVar32 + -1;
        if (lVar32 == 0) break;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 6;
      *puVar9 = in_d16;
      puVar9[1] = in_d17;
    } while (!(bool)uVar30);
    iVar6 = (int)*ppuVar27;
    iVar22 = 0;
    uVar12 = *(undefined4 *)(iVar6 + (0x1dd - iVar24) * 4);
    uVar7 = *(undefined4 *)(iVar6 + (0x1da - iVar24) * 4);
    uVar10 = *(undefined4 *)(iVar6 + (0x1d4 - iVar24) * 4);
    *(undefined4 *)(puVar23 + -0x2c) = *(undefined4 *)(iVar6 + (0x1d7 - iVar24) * 4);
    *(undefined4 *)(puVar23 + -0x24) = uVar12;
    iVar14 = 0;
    *(undefined4 *)(puVar23 + -0x30) = uVar10;
    *(undefined4 *)(puVar23 + -0x28) = uVar7;
    ppuVar27[8] = (undefined4 *)iVar24;
    iVar6 = iVar24;
    do {
      uVar16 = iVar14 * 3 + iVar6;
      if (uVar16 != 3 && uVar16 != 9) {
        ppuVar27[0xd] = (undefined4 *)iVar24;
        ppuVar27[9] = (undefined4 *)puVar13;
        imp___aeabi_memclr8(pfVar15,0x280);
        iVar24 = -2;
        if (uVar16 < 9) {
          iVar24 = -1;
        }
        if (uVar16 < 3) {
          iVar24 = 0;
        }
        iVar11 = iVar24 + uVar16;
        pfVar8 = (float *)(&DAT_7009a744 + iVar11 * 4);
        ppuVar27[0xc] = (undefined4 *)((int)ppuVar27[7] + iVar11 * 0x3c);
        if (iVar14 != 0) {
          iVar6 = (int)ppuVar27[0xc];
          fVar36 = *pfVar8;
          iVar25 = iVar6 + 0x3c;
          iVar28 = iVar6 + 0x2c;
          fVar35 = (float)(&DAT_7009a748)[iVar11 * 4];
          iVar19 = iVar6 + 0x1c;
          fVar34 = (float)(&DAT_7009a74c)[iVar11 * 4];
          iVar6 = iVar6 + 0xc;
          fVar33 = (float)(&DAT_7009a750)[iVar11 * 4];
          ppuVar27[0xe] =
               (undefined4 *)
               ((float)ppuVar27[0xe] + *(float *)(iVar25 + iVar14 * -4) * fVar36 +
                *(float *)(iVar28 + iVar14 * -4) * fVar35 +
                *(float *)(iVar19 + iVar14 * -4) * fVar34 + *(float *)(iVar6 + iVar14 * -4) * fVar33
               );
          if (iVar14 != 1) {
            iVar17 = 1 - iVar14;
            ppuVar27[0xf] =
                 (undefined4 *)
                 ((float)ppuVar27[0xf] + *(float *)(iVar25 + iVar17 * 4) * fVar36 +
                  *(float *)(iVar28 + iVar17 * 4) * fVar35 +
                  *(float *)(iVar19 + iVar17 * 4) * fVar34 + *(float *)(iVar6 + iVar17 * 4) * fVar33
                 );
            if (iVar14 != 2) {
              iVar17 = 2 - iVar14;
              ppuVar27[0x10] =
                   (undefined4 *)
                   ((float)ppuVar27[0x10] + *(float *)(iVar25 + iVar17 * 4) * fVar36 +
                    *(float *)(iVar28 + iVar17 * 4) * fVar35 +
                    *(float *)(iVar19 + iVar17 * 4) * fVar34 +
                   *(float *)(iVar6 + iVar17 * 4) * fVar33);
            }
          }
        }
        ppuVar27[10] = (undefined4 *)iVar14;
        pfVar20 = (float *)ppuVar27[3];
        fVar33 = *pfVar8;
        ppuVar27[0xb] = (undefined4 *)iVar22;
        iVar24 = (int)ppuVar27[4] + (iVar24 + (int)ppuVar27[0xd]) * 0x3c;
        uVar16 = 0;
        do {
          pfVar26 = (float *)((int)pfVar15 + iVar22);
          uVar1 = uVar16 >> 2;
          uVar29 = 3;
          fVar34 = *pfVar26 + pfVar20[4] * fVar33;
          if (uVar1 < 3) {
            uVar29 = uVar16 >> 2;
          }
          if ((uVar1 != 0) &&
             (fVar34 = fVar34 + *pfVar20 * (float)(&DAT_7009a748)[iVar11 * 4], uVar1 != 1)) {
            fVar34 = fVar34 + pfVar20[-4] * (float)(&DAT_7009a74c)[iVar11 * 4];
            if (uVar1 != 2) {
              fVar34 = fVar34 + pfVar20[-8] * (float)(&DAT_7009a750)[iVar11 * 4];
            }
          }
          *pfVar26 = fVar34;
          if (uVar16 < 0xc) {
            pfVar18 = (float *)(iVar24 + uVar1 * -0x10);
            fVar34 = fVar34 + pfVar18[4] * (float)(&DAT_7009a748)[iVar11 * 4 + uVar29];
            if (uVar16 < 8) {
              fVar34 = fVar34 + *pfVar18 * pfVar8[uVar29 + 2];
              if (uVar16 < 4) {
                fVar34 = fVar34 + pfVar18[-4] * (float)(&DAT_7009a750)[iVar11 * 4];
              }
            }
            *pfVar26 = fVar34;
          }
          iVar22 = iVar22 + 4;
          pfVar20 = pfVar20 + 1;
          iVar24 = iVar24 + 4;
          uVar16 = uVar16 + 1;
        } while (iVar22 != 0x40);
        iVar6 = (int)ppuVar27[5];
        iVar24 = 0;
        puVar13 = (undefined1 *)ppuVar27[9];
        fVar33 = *pfVar8;
        fVar34 = (float)(&DAT_7009a748)[iVar11 * 4];
        fVar35 = (float)(&DAT_7009a74c)[iVar11 * 4];
        fVar36 = (float)(&DAT_7009a750)[iVar11 * 4];
        do {
          iVar14 = iVar24 + 0x10;
          iVar22 = iVar24 + 0x20;
          iVar19 = iVar24 + 0x30;
          iVar25 = iVar24 + 0x40;
          pfVar8 = (float *)(iVar6 + iVar24);
          iVar24 = iVar24 + 4;
          *pfVar8 = *pfVar8 + *(float *)(puVar13 + iVar25) * fVar33 +
                    *(float *)(puVar13 + iVar19) * fVar34 + *(float *)(puVar13 + iVar22) * fVar35 +
                    *(float *)(puVar13 + iVar14) * fVar36;
        } while (iVar24 != 0x240);
        puVar9 = (undefined8 *)ppuVar27[2];
        piVar21 = ppuVar27[6];
        in_d16 = *puVar9;
        in_d17 = puVar9[1];
        uVar37 = puVar9[2];
        uVar38 = puVar9[3];
        uVar39 = puVar9[4];
        uVar40 = puVar9[5];
        uVar41 = *(undefined8 *)((int)puVar9 + 0x2c);
        uVar42 = *(undefined8 *)((int)puVar9 + 0x34);
        puVar9 = (undefined8 *)ppuVar27[0xc];
        fVar33 = (float)(&DAT_7009a7e4)[iVar11 * 3];
        *puVar9 = in_d16;
        puVar9[1] = in_d17;
        puVar9[2] = uVar37;
        puVar9[3] = uVar38;
        puVar9[4] = uVar39;
        puVar9[5] = uVar40;
        iVar19 = 0;
        *(undefined8 *)((int)puVar9 + 0x2c) = uVar41;
        *(undefined8 *)((int)puVar9 + 0x34) = uVar42;
        iVar24 = *piVar21;
        iVar6 = (int)ppuVar27[8];
        iVar22 = (int)ppuVar27[0xb];
        iVar14 = (int)ppuVar27[10];
        do {
          pfVar8 = (float *)((int)pfVar15 + iVar19);
          pfVar20 = (float *)(iVar24 + iVar19);
          iVar19 = iVar19 + 4;
          *pfVar20 = *pfVar20 + fVar33 * *pfVar8;
        } while (iVar19 != 0x280);
        iVar24 = piVar21[2];
        iVar19 = 0;
        fVar33 = (float)(&DAT_7009a7e8)[iVar11 * 3];
        do {
          pfVar8 = (float *)((int)pfVar15 + iVar19);
          pfVar20 = (float *)(iVar24 + iVar19);
          iVar19 = iVar19 + 4;
          *pfVar20 = *pfVar20 + fVar33 * *pfVar8;
        } while (iVar19 != 0x280);
        iVar24 = piVar21[4];
        iVar19 = 0;
        fVar33 = (float)(&DAT_7009a7ec)[iVar11 * 3];
        do {
          pfVar8 = (float *)((int)pfVar15 + iVar19);
          pfVar20 = (float *)(iVar24 + iVar19);
          iVar19 = iVar19 + 4;
          *pfVar20 = *pfVar20 + fVar33 * *pfVar8;
        } while (iVar19 != 0x280);
        iVar24 = (int)ppuVar27[0xd];
      }
      iVar14 = iVar14 + 1;
      puVar13 = puVar13 + -4;
      iVar24 = iVar24 + 3;
      iVar22 = iVar22 + 4;
    } while (iVar14 != 4);
    iVar24 = iVar6 + 1;
    puVar13 = puVar23 + -0x2a0;
    puVar5 = (undefined4 *)((int)ppuVar27[1] + -4);
  } while (iVar24 != 3);
  return;
}


// =========================================================================
// Function: thunk_WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
// Entry: 0x71e09240 | Size: 1 bytes
// =========================================================================

void thunk_WjDBUsMGukdFGTzaXVeqvoaUpNTiohjFataOYxnrOtzmIRGrkthXeAknEvfXavaavxPcIsuLX_xbFWHJmwJDkNIoqRhBozu
               (int param_1,int *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iStack_53c;
  float afStack_538 [160];
  float afStack_2b8 [145];
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  imp___aeabi_memclr4(param_3,0x780);
  iVar4 = 0;
  do {
    iVar14 = 0;
    iStack_53c = 0;
    iVar7 = iVar4;
    pfVar15 = afStack_2b8;
    do {
      uVar12 = iVar14 * 3 + iVar4;
      if (uVar12 != 3 && uVar12 != 9) {
        imp___aeabi_memclr8(afStack_2b8,0x280);
        iVar3 = -2;
        if (uVar12 < 9) {
          iVar3 = -1;
        }
        if (uVar12 < 3) {
          iVar3 = 0;
        }
        iVar13 = iVar3 + uVar12;
        iVar5 = *param_2;
        pfVar6 = (float *)(&DAT_7009a744 + iVar13 * 4);
        iVar8 = 0;
        fVar17 = (float)(&DAT_7009a7e4)[iVar13 * 3];
        do {
          pfVar10 = (float *)(iVar5 + iVar8);
          pfVar11 = (float *)((int)afStack_2b8 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar11 = *pfVar11 + fVar17 * *pfVar10;
        } while (iVar8 != 0x280);
        iVar5 = param_2[2];
        iVar8 = 0;
        fVar17 = (float)(&DAT_7009a7e8)[iVar13 * 3];
        do {
          pfVar10 = (float *)(iVar5 + iVar8);
          pfVar11 = (float *)((int)afStack_2b8 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar11 = *pfVar11 + fVar17 * *pfVar10;
        } while (iVar8 != 0x280);
        fVar17 = (float)(&DAT_7009a7ec)[iVar13 * 3];
        iVar8 = 0;
        iVar5 = param_2[4];
        do {
          pfVar10 = (float *)(iVar5 + iVar8);
          pfVar11 = (float *)((int)afStack_2b8 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar11 = *pfVar11 + fVar17 * *pfVar10;
        } while (iVar8 != 0x280);
        imp___aeabi_memclr8(afStack_538,0x280);
        puVar16 = (undefined8 *)(param_1 + 600 + iVar13 * 0x3c);
        if (iVar14 != 0) {
          fVar20 = *pfVar6;
          fVar19 = (float)(&DAT_7009a748)[iVar13 * 4];
          fVar18 = (float)(&DAT_7009a74c)[iVar13 * 4];
          fVar17 = (float)(&DAT_7009a750)[iVar13 * 4];
          afStack_538[0] =
               afStack_538[0] + *(float *)((int)puVar16 + iVar14 * -4 + 0x3c) * fVar20 +
               *(float *)((int)puVar16 + iVar14 * -4 + 0x2c) * fVar19 +
               *(float *)((int)puVar16 + iVar14 * -4 + 0x1c) * fVar18 +
               *(float *)((int)puVar16 + iVar14 * -4 + 0xc) * fVar17;
          if (iVar14 != 1) {
            iVar5 = 1 - iVar14;
            afStack_538[1] =
                 afStack_538[1] + *(float *)((int)puVar16 + iVar5 * 4 + 0x3c) * fVar20 +
                 *(float *)((int)puVar16 + iVar5 * 4 + 0x2c) * fVar19 +
                 *(float *)((int)puVar16 + iVar5 * 4 + 0x1c) * fVar18 +
                 *(float *)((int)puVar16 + iVar5 * 4 + 0xc) * fVar17;
            if (iVar14 != 2) {
              iVar5 = 2 - iVar14;
              afStack_538[2] =
                   afStack_538[2] + *(float *)((int)puVar16 + iVar5 * 4 + 0x3c) * fVar20 +
                   *(float *)((int)puVar16 + iVar5 * 4 + 0x2c) * fVar19 +
                   *(float *)((int)puVar16 + iVar5 * 4 + 0x1c) * fVar18 +
                   *(float *)((int)puVar16 + iVar5 * 4 + 0xc) * fVar17;
            }
          }
        }
        uVar12 = 0;
        fVar17 = *pfVar6;
        iVar5 = 0;
        do {
          pfVar10 = (float *)((int)afStack_538 + iVar5 + iStack_53c);
          uVar1 = uVar12 >> 2;
          uVar9 = 3;
          if (uVar1 < 3) {
            uVar9 = uVar12 >> 2;
          }
          fVar18 = *pfVar10 + *(float *)((int)afStack_2b8 + iVar5) * fVar17;
          if ((uVar1 != 0) &&
             (fVar18 = fVar18 + *(float *)((int)afStack_538 + iVar5 + 0x270) *
                                (float)(&DAT_7009a748)[iVar13 * 4], uVar1 != 1)) {
            fVar19 = (float)(&DAT_7009a74c)[iVar13 * 4];
            fVar18 = fVar18 + *(float *)((int)afStack_538 + iVar5 + 0x260) * fVar19;
            if (uVar1 != 2) {
              fVar19 = (float)(&DAT_7009a750)[iVar13 * 4];
            }
            if (uVar1 != 2) {
              fVar18 = fVar18 + *(float *)((int)afStack_538 + iVar5 + 0x250) * fVar19;
            }
          }
          *pfVar10 = fVar18;
          if (uVar12 < 0xc) {
            pfVar11 = (float *)(param_1 + 0x284 + (iVar3 + iVar7) * 0x3c + uVar1 * -0x10 + iVar5);
            fVar18 = fVar18 + *pfVar11 * (float)(&DAT_7009a748)[iVar13 * 4 + uVar9];
            if (uVar12 < 8) {
              fVar18 = fVar18 + pfVar11[-4] * pfVar6[uVar9 + 2];
              if (uVar12 < 4) {
                fVar18 = fVar18 + pfVar11[-8] * (float)(&DAT_7009a750)[iVar13 * 4];
              }
            }
            *pfVar10 = fVar18;
          }
          iVar5 = iVar5 + 4;
          uVar12 = uVar12 + 1;
        } while (iStack_53c + iVar5 != 0x40);
        fVar17 = *pfVar6;
        iVar3 = 0;
        fVar18 = (float)(&DAT_7009a748)[iVar13 * 4];
        fVar19 = (float)(&DAT_7009a74c)[iVar13 * 4];
        fVar20 = (float)(&DAT_7009a750)[iVar13 * 4];
        do {
          iVar5 = iVar3 + 0x10;
          iVar8 = iVar3 + 0x20;
          iVar13 = iVar3 + 0x30;
          iVar2 = iVar3 + 0x40;
          pfVar6 = (float *)((int)afStack_538 + iVar3 + 0x40);
          iVar3 = iVar3 + 4;
          *pfVar6 = *pfVar6 + *(float *)((int)pfVar15 + iVar2) * fVar17 +
                    *(float *)((int)pfVar15 + iVar13) * fVar18 +
                    *(float *)((int)pfVar15 + iVar8) * fVar19 +
                    *(float *)((int)pfVar15 + iVar5) * fVar20;
        } while (iVar3 != 0x240);
        *puVar16 = uStack_74;
        puVar16[1] = uStack_6c;
        puVar16[2] = uStack_64;
        puVar16[3] = uStack_5c;
        puVar16[4] = uStack_54;
        puVar16[5] = CONCAT44(uStack_48,uStack_4c);
        *(ulonglong *)((int)puVar16 + 0x2c) = CONCAT44(uStack_44,uStack_48);
        *(undefined8 *)((int)puVar16 + 0x34) = uStack_40;
        iVar3 = 0;
        pfVar6 = param_3;
        do {
          pfVar10 = (float *)((int)afStack_538 + iVar3);
          iVar3 = iVar3 + 4;
          *pfVar6 = *pfVar6 + *pfVar10 * 3.0;
          pfVar6 = pfVar6 + 3;
        } while (iVar3 != 0x280);
      }
      iVar14 = iVar14 + 1;
      pfVar15 = pfVar15 + -1;
      iVar7 = iVar7 + 3;
      iStack_53c = iStack_53c + 4;
    } while (iVar14 != 4);
    iVar4 = iVar4 + 1;
    param_3 = param_3 + 1;
  } while (iVar4 != 3);
  return;
}


// =========================================================================
// Function: thunk_FdbKrCBZEyPQlOGVKaA_XFmXzySIASSdDmjDDVmTCcUvGZTpTPxqBVMMCernBT
// Entry: 0x71e09250 | Size: 1 bytes
// =========================================================================

void thunk_FdbKrCBZEyPQlOGVKaA_XFmXzySIASSdDmjDDVmTCcUvGZTpTPxqBVMMCernBT
               (float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_1[5] = 0.0;
  param_1[6] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fVar4 = *param_2;
  fVar1 = param_2[2];
  fVar3 = param_2[3];
  fVar2 = param_2[4];
  if (*(char *)(param_2 + 5) == '\0') {
    fVar5 = param_2[1] * param_2[1] + fVar4 * fVar4;
    fVar4 = fVar4 * fVar2 * -2.0;
  }
  else {
    fVar5 = -(fVar4 * fVar4);
    fVar4 = 0.0;
  }
  *param_1 = fVar2;
  param_1[1] = fVar4;
  param_1[2] = fVar5 * fVar2;
  param_1[4] = fVar3 * fVar3 + fVar1 * fVar1;
  param_1[3] = fVar1 * -2.0;
  return;
}


// =========================================================================
// Function: thunk_jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG
// Entry: 0x71e09260 | Size: 1 bytes
// =========================================================================

void thunk_jV_ENFlvndGQhMTnMqoOgd_qEqTLVqtUqRmAXmKbi_LBiCSaGvlBTwJkZrObEsXBCzSwKRHwEHDompAxjWG
               (undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(param_1[1]);
  param_1[1] = 0;
  imp_free(*param_1);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: thunk_GaCTofezVmeFIRq_ynQXTfgvzZoFZnSJUoxeAkSqVZErAyQGnFYTN
// Entry: 0x71e09270 | Size: 1 bytes
// =========================================================================

int * thunk_GaCTofezVmeFIRq_ynQXTfgvzZoFZnSJUoxeAkSqVZErAyQGnFYTN(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((1 < param_1) && (piVar2 = (int *)imp_malloc(0xc), piVar2 != (int *)0x0)) {
    iVar1 = param_1 << 2;
    iVar3 = imp_malloc(iVar1);
    piVar2[1] = iVar3;
    iVar4 = imp_malloc(iVar1);
    *piVar2 = iVar4;
    if (iVar3 != 0 && iVar4 != 0) {
      imp___aeabi_memclr4(iVar3,iVar1);
      imp___aeabi_memclr4(iVar4,iVar1);
      piVar2[2] = param_1;
      return piVar2;
    }
    imp_free(iVar3);
    imp_free(iVar4);
    imp_free(piVar2);
  }
  return (int *)0x0;
}


// =========================================================================
// Function: thunk_ECIxSZbnuEqKOOsexMjTQWcWOrp_gjnKKMhRkDMVMKyLxEomOFyWyyGwZKbcGcZPWevidgxRoHJf_vgiNkS
// Entry: 0x71e09280 | Size: 1 bytes
// =========================================================================

void thunk_ECIxSZbnuEqKOOsexMjTQWcWOrp_gjnKKMhRkDMVMKyLxEomOFyWyyGwZKbcGcZPWevidgxRoHJf_vgiNkS
               (undefined4 *param_1)

{
  imp___aeabi_memclr4(param_1[1],param_1[2] << 2);
  imp___aeabi_memclr4(*param_1,param_1[2] << 2);
  return;
}


// =========================================================================
// Function: thunk_FJLjCxbgFGGJyiVTaBgaHrJQQTvMWQ_dKunGjWqYRvIEsTszyAQWjQDbTX_ZjIyiHaYKKjtayPQKovZnkJiuakCIP
// Entry: 0x71e09290 | Size: 1 bytes
// =========================================================================

void thunk_FJLjCxbgFGGJyiVTaBgaHrJQQTvMWQ_dKunGjWqYRvIEsTszyAQWjQDbTX_ZjIyiHaYKKjtayPQKovZnkJiuakCIP
               (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar4 = param_2;
    if (param_2 < 0) {
      iVar4 = -param_2;
    }
    iVar5 = param_1[2] - iVar4;
    if (param_2 < 1) {
      iVar3 = iVar4;
      iVar2 = 0;
    }
    else {
      iVar3 = 0;
      iVar2 = iVar4;
    }
    iVar1 = iVar5 * 4;
    imp___aeabi_memmove4(param_1[1] + iVar2 * 4,param_1[1] + iVar3 * 4,iVar1);
    if (0 < param_2) {
      iVar5 = 0;
    }
    imp___aeabi_memclr4(param_1[1] + iVar5 * 4,iVar4 << 2);
    imp___aeabi_memmove4(*param_1 + iVar2 * 4,*param_1 + iVar3 * 4,iVar1);
    imp___aeabi_memclr4(*param_1 + iVar5 * 4,iVar4 << 2);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
// Entry: 0x71e092a0 | Size: 1 bytes
// =========================================================================

void thunk_cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
               (int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  imp___aeabi_memmove4(param_1[1] + 4,param_1[1],param_1[2] * 4 + -4);
  iVar2 = *param_1;
  *(uint *)param_1[1] = param_2;
  imp___aeabi_memmove4(iVar2 + 4,iVar2,param_1[2] * 4 + -4);
  param_2 = param_2 - ((param_2 >> 1 & 0x5b6db6db) + (param_2 >> 2 & 0x9249249));
  uVar1 = param_2 + (param_2 >> 3) & 0xc71c71c7;
  uVar1 = uVar1 + (uVar1 >> 6);
  *(uint *)*param_1 = uVar1 + (uVar1 >> 0xc) + (uVar1 >> 0x18) & 0x3f;
  return;
}


// =========================================================================
// Function: thunk_ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC
// Entry: 0x71e092b0 | Size: 1 bytes
// =========================================================================

void thunk_ayzBMNLlpYtaKJwAdhqhdXyNIURHdpexbOtST_yp_OTkIlBVezlawDAvtAFbRjvc_YGPTZC
               (undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  imp_free(*param_1);
  *param_1 = 0;
  imp_free(param_1[1]);
  param_1[1] = 0;
  imp_free(param_1[2]);
  param_1[2] = 0;
  imp_free(param_1[0xd]);
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: thunk_QynhbPl_l_TlfTKfCDCLJHrfKDCtRCwntcKfHYokkdQurqwSTASbUDHDgsIGaFWGpDBMaKpKyBaKinME
// Entry: 0x71e092c0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_QynhbPl_l_TlfTKfCDCLJHrfKDCtRCwntcKfHYokkdQurqwSTASbUDHDgsIGaFWGpDBMaKpKyBaKinME
          (int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((param_1 != 0) && (-1 < param_2)) &&
     (puVar1 = (undefined4 *)imp_malloc(0x44), puVar1 != (undefined4 *)0x0)) {
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xd] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0xf] = param_2;
    puVar1[3] = param_2 + 1;
    puVar1[4] = 0;
    puVar1[0x10] = param_1;
    iVar2 = imp_malloc((param_2 + 1) * 4);
    puVar1[2] = iVar2;
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = thunk_UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
                        (puVar1,*(undefined4 *)(param_1 + 8));
      if (iVar2 != 0) {
        return puVar1;
      }
      uVar4 = puVar1[2];
      uVar6 = puVar1[0xd];
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
    }
    imp_free(uVar3);
    imp_free(uVar5);
    imp_free(uVar4);
    imp_free(uVar6);
    imp_free(puVar1);
  }
  return (undefined4 *)0x0;
}


// =========================================================================
// Function: thunk_UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
// Entry: 0x71e092d0 | Size: 1 bytes
// =========================================================================

int thunk_UsOzJoURKlk_zNWBDQBSHLzXrngfYPpqaaCkw_LXfgMpKtOIJgvEOtKmvDGDNAwPdhjVCmwwoSD
              (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[0x10];
  if (piVar3[2] != param_2) {
    iVar1 = imp_realloc(piVar3[1],param_2 << 2);
    piVar3[1] = iVar1;
    iVar1 = imp_realloc(*piVar3,param_2 << 2);
    iVar2 = piVar3[2];
    *piVar3 = iVar1;
    if (piVar3[1] == 0) {
      param_2 = 0;
    }
    if (iVar1 == 0) {
      param_2 = 0;
    }
    if (iVar2 < param_2) {
      iVar1 = (param_2 - iVar2) * 4;
      imp___aeabi_memclr4(piVar3[1] + iVar2 * 4,iVar1);
      imp___aeabi_memclr4(*piVar3 + piVar3[2] * 4,iVar1);
    }
    piVar3[2] = param_2;
  }
  iVar2 = param_2 * 4 + 4;
  iVar1 = imp_realloc(*param_1,iVar2);
  *param_1 = iVar1;
  iVar1 = imp_realloc(param_1[1],param_2 << 2);
  param_1[1] = iVar1;
  iVar1 = imp_realloc(param_1[0xd],iVar2);
  param_1[0xd] = iVar1;
  if (*param_1 == 0 || iVar1 == 0) {
    param_2 = 0;
    iVar1 = param_1[4];
    if (-1 < iVar1) goto LAB_71b145d0;
  }
  else {
    if (param_1[1] == 0) {
      param_2 = 0;
    }
    iVar1 = param_1[4];
    if (param_2 <= iVar1) goto LAB_71b145d0;
  }
  iVar2 = (param_2 - iVar1) * 4;
  imp___aeabi_memclr4(*param_1 + iVar1 * 4,iVar2);
  imp___aeabi_memclr4(param_1[1] + param_1[4] * 4,iVar2);
  imp___aeabi_memclr4(param_1[0xd] + param_1[4] * 4,iVar2);
LAB_71b145d0:
  param_1[4] = param_2;
  return param_2;
}


// =========================================================================
// Function: thunk_XCDDRAiEazwMgEnlYsesfzELBmbYFrDkmMcjlSdKSBHkEtCrJDTxhzuVdDKaxxDivKeqhFh
// Entry: 0x71e092e0 | Size: 1 bytes
// =========================================================================

void thunk_XCDDRAiEazwMgEnlYsesfzELBmbYFrDkmMcjlSdKSBHkEtCrJDTxhzuVdDKaxxDivKeqhFh(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  imp___aeabi_memclr4(param_1[1],param_1[4] << 2);
  imp___aeabi_memclr4(param_1[2],param_1[3] << 2);
  iVar4 = param_1[4];
  if (-1 < iVar4) {
    iVar2 = *param_1;
    puVar3 = (undefined4 *)param_1[0xd];
    iVar5 = 0;
    do {
      *(undefined4 *)(iVar2 + iVar5 * 4) = 0x2800;
      iVar4 = param_1[4];
      *puVar3 = 0;
      bVar1 = iVar5 < iVar4;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[10] = -2;
  param_1[0xb] = iVar4;
  param_1[5] = 0x4000;
  param_1[6] = 0x4000;
  param_1[7] = -2;
  return;
}


// =========================================================================
// Function: thunk_PshNtHYektR_FnHdVQTKtOwHK_PmdrjxOTSrWjEMnzTaFcPSjOUHrEhhWsSKnrJkeucYnEtbq_HCz
// Entry: 0x71e092f0 | Size: 1 bytes
// =========================================================================

int thunk_PshNtHYektR_FnHdVQTKtOwHK_PmdrjxOTSrWjEMnzTaFcPSjOUHrEhhWsSKnrJkeucYnEtbq_HCz
              (int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar1 = iVar2 - param_2;
  uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (*(int *)(param_1 + 0xc) <= (int)uVar1) {
    uVar1 = *(int *)(param_1 + 0xc) - 1;
    *(uint *)(param_1 + 0x3c) = uVar1;
  }
  return iVar2 - uVar1;
}


// =========================================================================
// Function: thunk_zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
// Entry: 0x71e09300 | Size: 1 bytes
// =========================================================================

uint thunk_zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
               (uint *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *extraout_r2;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  uint unaff_r4;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [16];
  uint *puVar22;
  undefined8 *puVar23;
  float *pfVar24;
  int *piVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined1 (*pauVar28) [16];
  bool bVar29;
  bool bVar30;
  uint in_fpscr;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  piVar25 = (int *)param_1[0x10];
  uVar14 = piVar25[2];
  if (uVar14 != param_1[4]) {
    return 0xffffffff;
  }
  if (1 < (int)param_1[3]) {
    imp___aeabi_memmove4(param_1[2] + 4,param_1[2],param_1[3] * 4 + -4);
    puVar9 = (uint *)param_1[2];
    piVar25 = (int *)param_1[0x10];
    *puVar9 = param_2;
    uVar14 = param_1[4];
    param_2 = puVar9[param_1[0xf]];
    param_3 = extraout_r2;
  }
  uVar10 = 0xffffffff;
  puVar9 = (uint *)0x4000;
  if ((int)uVar14 < 1) {
    bVar1 = false;
    puVar22 = (uint *)0x0;
  }
  else {
    pauVar28 = (undefined1 (*) [16])piVar25[1];
    puVar27 = (undefined8 *)param_1[1];
    uVar11 = 0;
    if (3 < uVar14) {
      unaff_r4 = (int)puVar27 - (int)pauVar28;
    }
    if (3 < uVar14 && 0xf < unaff_r4) {
      uVar11 = uVar14 & 0x7ffffffc;
      auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar2._0_8_ = 0x3f0000003f;
      auVar3._8_8_ = CONCAT44(param_2,param_2);
      auVar3._0_8_ = CONCAT44(param_2,param_2);
      uVar16 = uVar11;
      pauVar21 = pauVar28;
      puVar23 = puVar27;
      do {
        auVar35 = *pauVar21;
        pauVar21 = pauVar21 + 1;
        auVar35 = auVar35 ^ auVar3;
        uVar16 = uVar16 - 4;
        auVar36._8_8_ = 0x5b6db6db5b6db6db;
        auVar36._0_8_ = 0x5b6db6db5b6db6db;
        auVar38 = VectorUnsignedFixedToFloat(auVar35,1);
        auVar39 = VectorUnsignedFixedToFloat(auVar35,2);
        auVar37._8_8_ = 0x924924909249249;
        auVar37._0_8_ = 0x924924909249249;
        auVar37 = VectorAdd(auVar39 & auVar37,auVar38 & auVar36,4);
        auVar37 = VectorSub(auVar35,auVar37,4);
        auVar35._8_8_ = 0xc71c71c7c71c71c7;
        auVar35._0_8_ = 0xc71c71c7c71c71c7;
        auVar37 = VectorShiftRightAccumulate(auVar37,auVar37,3);
        auVar37 = VectorShiftRightAccumulate(auVar37 & auVar35,auVar37 & auVar35,6);
        auVar35 = VectorShiftRightAccumulate(auVar37,auVar37,0xc);
        auVar37 = VectorShiftRightAccumulate(auVar35,auVar37,0x18);
        auVar37 = auVar37 & *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
        *puVar23 = auVar37._0_8_;
        puVar23[1] = auVar37._8_8_;
        puVar23 = puVar23 + 2;
      } while (uVar16 != 0);
      if (uVar14 != uVar11) goto LAB_71b14750;
    }
    else {
LAB_71b14750:
      iVar15 = uVar14 - uVar11;
      puVar22 = (uint *)((int)puVar27 + uVar11 * 4);
      puVar19 = (uint *)(*pauVar28 + uVar11 * 4);
      do {
        iVar15 = iVar15 + -1;
        uVar14 = *puVar19 ^ param_2;
        uVar14 = uVar14 - ((uVar14 >> 2 & 0x9249249) + (uVar14 >> 1 & 0x5b6db6db));
        uVar14 = uVar14 + (uVar14 >> 3) & 0xc71c71c7;
        uVar14 = uVar14 + (uVar14 >> 6);
        param_3 = (uint *)(uVar14 + (uVar14 >> 0xc) + (uVar14 >> 0x18) & 0x3f);
        *puVar22 = (uint)param_3;
        puVar22 = puVar22 + 1;
        puVar19 = puVar19 + 1;
      } while (iVar15 != 0);
    }
    uVar14 = param_1[4];
    if (0 < (int)uVar14) {
      iVar15 = 0;
      iVar26 = *piVar25;
      do {
        iVar12 = *(int *)(iVar26 + iVar15 * 4);
        if (0 < iVar12) {
          param_3 = (uint *)*param_1;
          uVar11 = 0xd - ((uint)(iVar12 * 3) >> 4);
          uVar16 = *(int *)((int)puVar27 + iVar15 * 4) * 0x200 - param_3[iVar15];
          uVar14 = uVar16 >> (uVar11 & 0xff);
          if ((int)uVar16 < 0) {
            uVar14 = -(-uVar16 >> (uVar11 & 0xff));
          }
          param_3[iVar15] = uVar14 + param_3[iVar15];
          uVar14 = param_1[4];
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uVar14);
      bVar1 = 0 < (int)uVar14;
      if (0 < (int)uVar14) {
        puVar9 = (uint *)0x4000;
        uVar11 = 0;
        puVar22 = (uint *)0x0;
        uVar10 = 0xffffffff;
        do {
          param_3 = *(uint **)(*param_1 + uVar11 * 4);
          if ((int)param_3 < (int)puVar9) {
            uVar10 = uVar11;
          }
          if ((int)puVar22 < (int)param_3) {
            puVar22 = param_3;
          }
          uVar11 = uVar11 + 1;
          if ((int)param_3 < (int)puVar9) {
            puVar9 = param_3;
          }
        } while (uVar14 != uVar11);
        goto LAB_71b148b0;
      }
    }
    bVar1 = false;
    puVar22 = (uint *)0x0;
  }
LAB_71b148b0:
  iVar15 = (int)puVar22 - (int)puVar9;
  puVar19 = (uint *)param_1[5];
  bVar30 = SBORROW4((int)puVar19,0x2200);
  puVar22 = puVar19 + -0x880;
  bVar29 = puVar19 == (uint *)0x2200;
  if (0x2200 < (int)puVar19) {
    bVar30 = SBORROW4(iVar15,0xb00);
    puVar22 = (uint *)(iVar15 + -0xb00);
    bVar29 = iVar15 == 0xb00;
  }
  if (bVar29 || (int)puVar22 < 0 != bVar30) {
    bVar5 = 0;
    uVar11 = param_1[6];
    uVar16 = uVar11 + 1;
    param_1[6] = uVar16;
    if (iVar15 < 0x401) goto LAB_71b148fc;
  }
  else {
    puVar22 = puVar9;
    if ((int)puVar9 < 0x1e01) {
      puVar22 = (uint *)0x1e00;
    }
    puVar22 = puVar22 + 0x100;
    puVar20 = puVar19;
    if (puVar22 < puVar19) {
      puVar20 = puVar22;
      param_3 = param_1;
    }
    uVar11 = param_1[6];
    uVar16 = uVar11 + 1;
    if (puVar22 < puVar19) {
      param_3[5] = (uint)puVar22;
    }
    param_1[6] = uVar16;
    puVar19 = puVar20;
  }
  bVar5 = 1;
  if (((int)puVar19 <= (int)puVar9) && (bVar5 = 0, (int)puVar9 <= (int)uVar11)) {
    bVar5 = 1;
  }
LAB_71b148fc:
  bVar4 = 0;
  if (uVar14 == 0) {
LAB_71b14b50:
    uVar14 = param_1[8];
  }
  else {
    piVar25 = (int *)*piVar25;
    iVar26 = uVar14 << 2;
    do {
      if (0 < *piVar25) {
        iVar26 = 1000;
        fVar31 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x16) & 3);
        uVar11 = param_1[7];
        if ((int)uVar10 < (int)uVar11) {
          iVar26 = 10;
        }
        fVar31 = fVar31 * 6.1035156e-05;
        if (param_1[10] == uVar10) {
          uVar18 = param_1[0xc] + 1;
        }
        else {
          uVar18 = 1;
          param_1[10] = uVar10;
        }
        pfVar17 = (float *)param_1[0xd];
        param_1[0xc] = uVar18;
        fVar33 = fVar31 + pfVar17[uVar10];
        uVar13 = in_fpscr & 0xfffffff | (uint)(fVar33 < 3000.0) << 0x1f |
                 (uint)(fVar33 == 3000.0) << 0x1e;
        in_fpscr = uVar13 | (uint)NAN(fVar33) << 0x1c;
        bVar4 = (byte)(uVar13 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar33 = 3000.0;
        }
        pfVar17[uVar10] = fVar33;
        fVar33 = fVar31;
        if ((int)uVar18 < iVar26) {
          fVar33 = (float)VectorSignedToFloat(*(int *)(*param_1 + param_1[0xb] * 4) - (int)puVar9,
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar33 = fVar33 * 6.1035156e-05;
        }
        bVar4 = 1;
        if (bVar1) {
          uVar18 = 0;
          do {
            bVar29 = (int)(uVar10 + 1) < (int)uVar18;
            bVar1 = (int)uVar18 < (int)(uVar10 - 2);
            uVar13 = (uint)(uVar10 != uVar18 &&
                           ((int)(uVar11 - 2) <= (int)uVar18 && (int)uVar18 <= (int)(uVar11 + 1)));
            uVar18 = uVar18 + 1;
            fVar34 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
            fVar32 = (float)VectorUnsignedToFloat
                                      ((uint)(bVar1 || bVar29) & ~uVar13,
                                       (byte)(in_fpscr >> 0x16) & 3);
            fVar32 = *pfVar17 - (fVar31 * fVar32 + fVar33 * fVar34);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar32 < 0.0) << 0x1f;
            if (SUB41(in_fpscr >> 0x1f,0)) {
              fVar32 = 0.0;
            }
            *pfVar17 = fVar32;
            pfVar17 = pfVar17 + 1;
          } while (uVar14 != uVar18);
          bVar4 = 1;
          goto LAB_71b14b50;
        }
        break;
      }
      iVar26 = iVar26 + -4;
      piVar25 = piVar25 + 1;
    } while (iVar26 != 0);
    uVar14 = param_1[8];
  }
  if (uVar14 != 0) {
    iVar15 = uVar10 - param_1[7];
    if ((int)param_1[9] < iVar15) {
      fVar31 = (float)VectorSignedToFloat(iVar15 - param_1[9],(byte)(in_fpscr >> 0x16) & 3);
      fVar33 = fVar31 * -0.05 + 1.0;
      fVar31 = 0.5;
      if (0.5 < fVar33) {
        fVar31 = fVar33;
      }
    }
    else if (iVar15 < 0) {
      fVar31 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x16) & 3);
      fVar31 = fVar31 * -0.05 + 0.25;
      if (1.0 < fVar31) {
        fVar31 = 1.0;
      }
    }
    else {
      fVar31 = 1.0;
    }
    fVar31 = *(float *)(param_1[0xd] + param_1[0xb] * 4) * fVar31;
    bVar7 = 0;
    bVar6 = 0;
    bVar8 = 0;
    fVar33 = 1.5;
    if (1.5 < fVar31) {
      fVar33 = fVar31;
    }
    fVar31 = *(float *)(param_1[0xd] + uVar10 * 4);
    if ((fVar33 <= fVar31) && (10 < (int)param_1[0xc])) {
      bVar7 = 1;
      bVar6 = 1;
      if ((float)param_1[0xe] < fVar31) {
        bVar8 = 1;
      }
    }
    bVar5 = bVar8 | bVar5 & bVar7 | (int)param_1[7] < 0 & (bVar6 | bVar5);
  }
  if ((bool)(bVar4 & bVar5)) {
    if (uVar10 != param_1[7]) {
      pfVar24 = (float *)(param_1[0xd] + uVar10 * 4);
      fVar31 = *pfVar24;
      pfVar17 = (float *)(param_1[0xd] + param_1[0xb] * 4);
      if (250.0 < fVar31) {
        fVar31 = 250.0;
      }
      param_1[0xe] = (uint)fVar31;
      fVar31 = *pfVar24;
      if (fVar31 < *pfVar17) {
        *pfVar17 = fVar31;
      }
    }
    if ((int)puVar9 < (int)uVar16) {
      param_1[6] = (uint)puVar9;
    }
    param_1[7] = uVar10;
    param_1[0xb] = uVar10;
    return uVar10;
  }
  return param_1[7];
}


// =========================================================================
// Function: thunk_MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC
// Entry: 0x71e09310 | Size: 1 bytes
// =========================================================================

void thunk_MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - *param_3;
  uVar2 = uVar1 >> (param_2 & 0xff);
  if ((int)uVar1 < 0) {
    uVar2 = -(-uVar1 >> (param_2 & 0xff));
  }
  *param_3 = uVar2 + *param_3;
  return;
}


// =========================================================================
// Function: thunk_axdIlHsciJWWEWAPMdkJBIzcRORWKsjXfZ_YwYuHy_awajMDdHCWnEEKBQwmZYYX
// Entry: 0x71e09320 | Size: 1 bytes
// =========================================================================

undefined4 thunk_axdIlHsciJWWEWAPMdkJBIzcRORWKsjXfZ_YwYuHy_awajMDdHCWnEEKBQwmZYYX(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


// =========================================================================
// Function: thunk_YXuh_BfEnuQOZYKlToGLuSmalfdMtNMZpZBANqcdiQalgGvhvELIfbZfNxAicTFegREOdtBX
// Entry: 0x71e09330 | Size: 1 bytes
// =========================================================================

float thunk_YXuh_BfEnuQOZYKlToGLuSmalfdMtNMZpZBANqcdiQalgGvhvELIfbZfNxAicTFegREOdtBX(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return *(float *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c) * 4) / 3000.0;
  }
  fVar1 = (float)VectorSignedToFloat(0x4000 - *(int *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3)
  ;
  fVar1 = fVar1 * 6.1035156e-05;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}


// =========================================================================
// Function: thunk_cpspIwmh_XYHex_ITBXnMczbugsFxhIidjGzIXoVmuLi
// Entry: 0x71e09340 | Size: 1 bytes
// =========================================================================

undefined4
thunk_cpspIwmh_XYHex_ITBXnMczbugsFxhIidjGzIXoVmuLi(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (((param_1 != (int *)0x0 && param_2 != 0) && (param_4 < 0x10)) && (param_1[2] == param_3)) {
    uVar7 = 0xf - param_4;
    iVar2 = *param_1;
    if (param_1[1] == 0) {
      iVar5 = 0;
      do {
        uVar3 = (uint)*(ushort *)(param_2 + 0x18 + iVar5);
        if (uVar3 != 0) {
          *(int *)(iVar2 + 0x30 + iVar5 * 2) = (int)(uVar3 << (uVar7 & 0xff)) >> 1;
          param_1[1] = 1;
        }
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0x40);
    }
    uVar3 = 0;
    iVar5 = -0x20;
    piVar4 = (int *)(iVar2 + 0x30);
    puVar6 = (ushort *)(param_2 + 0x18);
    do {
      uVar1 = *puVar6;
      thunk_MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC((uint)uVar1 << (uVar7 & 0xff),6,piVar4);
      if (*piVar4 < (int)((uint)uVar1 << (uVar7 & 0xff))) {
        uVar3 = uVar3 | 1 << (iVar5 + 0x20U & 0xff);
      }
      bVar8 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (bVar8);
    thunk_cELufrKtrvMVHrExpksmILINQsSsf_VweLFvSRpFIydZSMXfpQQODVVfHHLtQDMbzsrsxwJmez
              (param_1[3],uVar3);
    return 0;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_NkTcRfTHrtwaKMzDFicAfthkdgTUNciiztNBjlzOgfRRprHiWeO
// Entry: 0x71e09350 | Size: 1 bytes
// =========================================================================

undefined4
thunk_NkTcRfTHrtwaKMzDFicAfthkdgTUNciiztNBjlzOgfRRprHiWeO
          (int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  bool bVar9;
  
  if (((param_1 != (int *)0x0 && param_2 != 0) && (param_4 < 0x10)) && (param_1[2] == param_3)) {
    uVar8 = 0xf - param_4;
    iVar3 = *param_1;
    if (param_1[1] == 0) {
      iVar6 = 0;
      do {
        uVar4 = (uint)*(ushort *)(param_2 + 0x18 + iVar6);
        if (uVar4 != 0) {
          *(int *)(iVar3 + 0x30 + iVar6 * 2) = (int)(uVar4 << (uVar8 & 0xff)) >> 1;
          param_1[1] = 1;
        }
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0x40);
    }
    uVar4 = 0;
    iVar6 = -0x20;
    piVar5 = (int *)(iVar3 + 0x30);
    puVar7 = (ushort *)(param_2 + 0x18);
    do {
      uVar1 = *puVar7;
      thunk_MPdfqAPxmrcCvtUeQBBBgtguwUNuBohdUuiffXjC((uint)uVar1 << (uVar8 & 0xff),6,piVar5);
      if (*piVar5 < (int)((uint)uVar1 << (uVar8 & 0xff))) {
        uVar4 = uVar4 | 1 << (iVar6 + 0x20U & 0xff);
      }
      bVar9 = iVar6 != -1;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (bVar9);
    uVar2 = thunk_zkRdKrS_zCenTaFlBXxlMihmsMmYWYpJqiydCOQihiynaXcrXDNzBxGpJvVlcRBiScLll
                      (param_1[3],uVar4);
    return uVar2;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_HNNstObcHxMO_McVgWQCvsnPjROKxsGMwKTQISNwcMgVkh
// Entry: 0x71e09360 | Size: 1 bytes
// =========================================================================

int * thunk_HNNstObcHxMO_McVgWQCvsnPjROKxsGMwKTQISNwcMgVkh(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_2 << (param_3 != 0);
  *param_1 = param_2;
  iVar1 = thunk_nxphuypHnvtjluWYlftD(param_2 << 2);
  param_1[1] = iVar1;
  return param_1;
}


// =========================================================================
// Function: thunk_AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR
// Entry: 0x71e09370 | Size: 1 bytes
// =========================================================================

double thunk_AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double adStack_88 [10];
  
  iVar11 = param_2[3];
  if (iVar11 < 0xb) {
    iVar10 = param_2[4];
    if (iVar10 < 1) {
      dVar14 = 0.0;
    }
    else {
      puVar13 = (undefined8 *)*param_2;
      if (iVar11 < 1) {
        dVar14 = 0.0;
        do {
          dVar15 = (double)imp_exp((int)*puVar13,(int)((ulonglong)*puVar13 >> 0x20));
          puVar13 = puVar13 + 1;
          iVar10 = iVar10 + -1;
          dVar14 = dVar14 + dVar15;
        } while (iVar10 != 0);
      }
      else {
        iVar9 = param_2[1];
        iVar7 = param_2[2];
        iVar12 = 0;
        dVar14 = 0.0;
        do {
          iVar1 = 0;
          iVar2 = iVar11;
          do {
            pdVar3 = (double *)(iVar9 + iVar1);
            iVar2 = iVar2 + -1;
            pdVar4 = (double *)(param_1 + iVar1);
            pdVar5 = (double *)((int)adStack_88 + iVar1);
            iVar1 = iVar1 + 8;
            *pdVar5 = *pdVar4 - *pdVar3;
          } while (iVar2 != 0);
          dVar15 = 0.0;
          iVar1 = 0;
          iVar2 = iVar7;
          do {
            dVar16 = 0.0;
            iVar6 = 0;
            iVar8 = iVar11;
            do {
              pdVar3 = (double *)((int)adStack_88 + iVar6);
              iVar8 = iVar8 + -1;
              pdVar4 = (double *)(iVar2 + iVar6);
              iVar6 = iVar6 + 8;
              dVar16 = dVar16 + *pdVar4 * *pdVar3;
            } while (iVar8 != 0);
            pdVar3 = adStack_88 + iVar1;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + iVar11 * 8;
            dVar15 = dVar15 + dVar16 * *pdVar3;
          } while (iVar1 != iVar11);
          dVar15 = (double)puVar13[iVar12] + dVar15 * -0.5;
          dVar15 = (double)imp_exp(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
          dVar14 = dVar14 + dVar15;
          iVar12 = iVar12 + 1;
          iVar9 = iVar9 + iVar11 * 8;
          iVar7 = iVar7 + iVar11 * iVar11 * 8;
        } while (iVar12 != iVar10);
      }
    }
  }
  else {
    dVar14 = -1.0;
  }
  return dVar14;
}


// =========================================================================
// Function: thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
// Entry: 0x71e09380 | Size: 1 bytes
// =========================================================================

int thunk_IKSUJOPFVXrbWxLe_GVANujLjfLWLmIgvPOSuTdFuvploYHXMlgQlkcZEFAGJnmJb
              (int param_1,int param_2,double *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  
  if (*(int *)(param_2 + 0x80) == 0) {
    return 0;
  }
  pdVar5 = (double *)(param_2 + 0x40);
  uVar4 = 0;
  do {
    dStack_78 = *pdVar5;
    dStack_70 = pdVar5[-4];
    dStack_80 = pdVar5[-8];
    dVar6 = (double)thunk_AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR
                              (&dStack_80,param_1 + 0x14);
    dVar7 = (double)thunk_AQnkxbhURgwGpOGTTCrRQcwwNxeShJhZzjbtpCfiWJbEvPCR(&dStack_80,param_1);
    uVar1 = (ulonglong)dVar7 >> 0x20;
    if (((*pdVar5 < 200.0) || (2000.0 < *pdVar5)) || (pdVar5[-8] < -2.0)) {
      dVar6 = dVar7 * 1e-12;
    }
    else if (-0.9 < pdVar5[-8]) {
      dVar7 = dVar6 * 1e-12;
    }
    dVar6 = dVar6 * *(double *)(param_1 + 0x28);
    dVar6 = dVar6 / (dVar6 + dVar7 * (1.0 - *(double *)(param_1 + 0x28)));
    dVar7 = 0.99;
    if ((dVar6 <= 0.99) && (dVar7 = dVar6, dVar6 < 0.01)) {
      dVar7 = 0.01;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    dVar6 = dVar7 * *param_3;
    dVar6 = dVar6 / (dVar6 + (1.0 - dVar7) * (1.0 - *param_3));
    *param_3 = dVar6;
    thunk_tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ
              (uVar2,(int)uVar1,SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    iVar3 = thunk_vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
                      (*(undefined4 *)(param_1 + 0x30),7,0x9999999a,0x3fc99999);
    if (iVar3 < 0) break;
    dVar6 = (double)thunk_iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk(*(undefined4 *)(param_1 + 0x30));
    dVar7 = 0.99;
    if ((dVar6 <= 0.99) && (dVar7 = dVar6, dVar6 < 0.01)) {
      dVar7 = 0.01;
    }
    pdVar5 = pdVar5 + 1;
    param_3 = param_3 + 1;
    uVar4 = uVar4 + 1;
    *(double *)(param_1 + 0x28) = dVar7;
  } while (uVar4 < *(uint *)(param_2 + 0x80));
  return iVar3 >> 0x1f;
}


// =========================================================================
// Function: thunk_BTRvTsjrWtDHhgbTYCGLxPqGpijBu
// Entry: 0x71e09390 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_BTRvTsjrWtDHhgbTYCGLxPqGpijBu(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[10] = 0x33333333;
  param_1[0xb] = 0x3fd33333;
  uVar1 = thunk_PofpGRXoctrEUTfkISDDvXPY_UqjPrMZrCyExO(500);
  param_1[0xc] = uVar1;
  param_1[2] = &DAT_7009b2e0;
  param_1[3] = 3;
  param_1[4] = 0xc;
  param_1[8] = 3;
  param_1[9] = 0xc;
  *param_1 = &DAT_7009b160;
  param_1[1] = &DAT_7009b1c0;
  param_1[5] = &DAT_7009b640;
  param_1[6] = &DAT_7009b6a0;
  param_1[7] = &DAT_7009b7c0;
  return param_1;
}


// =========================================================================
// Function: thunk_IKCwteGMGjVcQRcwyAEmB_FFd_Bml
// Entry: 0x71e093a0 | Size: 1 bytes
// =========================================================================

int thunk_IKCwteGMGjVcQRcwyAEmB_FFd_Bml(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (iVar1 != 0) {
    thunk_U_EBNTtrgIlFWGtTbOgIYhzcVdXianunB();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
// Entry: 0x71e093b0 | Size: 1 bytes
// =========================================================================

void thunk_VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
               (undefined4 param_1,double *param_2,double *param_3,int param_4,int param_5,
               double *param_6,double *param_7,double *param_8,double *param_9)

{
  double *pdVar1;
  int iVar2;
  uint in_fpscr;
  double dVar3;
  
  pdVar1 = param_2;
  iVar2 = param_4;
  if (0 < param_4) {
    do {
      dVar3 = (double)imp_log(SUB84(*pdVar1 + 1e-12,0),(int)((ulonglong)(*pdVar1 + 1e-12) >> 0x20));
      *pdVar1 = dVar3;
      iVar2 = iVar2 + -1;
      pdVar1 = pdVar1 + 1;
    } while (iVar2 != 0);
  }
  *param_8 = *param_2 * 0.8333333333333334 + *param_6 * 0.16666666666666666;
  param_8[1] = param_2[2] * 0.16666666666666666 + param_2[1] * 0.8333333333333334;
  param_8[2] = param_2[3] * 0.5 + param_2[2] * 0.5;
  *param_6 = param_2[param_4 + -1];
  *param_9 = *param_3 * 0.8333333333333334 + *param_7 * 0.16666666666666666;
  param_9[1] = param_3[2] * 0.16666666666666666 + param_3[1] * 0.8333333333333334;
  param_9[2] = param_3[3] * 0.5 + param_3[2] * 0.5;
  *param_7 = param_3[param_4 + -1];
  if (0 < param_5) {
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    do {
      param_5 = param_5 + -1;
      *param_9 = dVar3 / *param_9;
      param_9 = param_9 + 1;
    } while (param_5 != 0);
  }
  return;
}


// =========================================================================
// Function: thunk_AAdEpWLrVuRzeKH_aypOaweeoqhfVwu_pPmWcvnFTh
// Entry: 0x71e093c0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_AAdEpWLrVuRzeKH_aypOaweeoqhfVwu_pPmWcvnFTh
          (int param_1,uint param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar1 = param_2;
  if (param_2 < 0x19) {
    uVar1 = param_4;
  }
  if (uVar1 < 0x19) {
    bVar3 = param_1 == 0;
    if (!bVar3) {
      bVar3 = *param_3 == 0.0;
    }
    if (!bVar3) {
      uVar2 = thunk_MwhHq(500);
      thunk_zFoRTGHaJBhPAZPGAOPqaauJNvieEEMeydCMJ(uVar2,param_1,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}


// =========================================================================
// Function: thunk_zFoRTGHaJBhPAZPGAOPqaauJNvieEEMeydCMJ
// Entry: 0x71e093d0 | Size: 1 bytes
// =========================================================================

int thunk_zFoRTGHaJBhPAZPGAOPqaauJNvieEEMeydCMJ
              (int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  
  imp___aeabi_memclr4(param_1,0x1e8);
  pfVar3 = (float *)(param_1 + 0x120);
  uVar1 = param_3;
  if (param_3 < param_5) {
    uVar1 = param_5;
  }
  *(uint *)(param_1 + 0x1ec) = param_5;
  *(uint *)(param_1 + 0x1f0) = uVar1;
  *(uint *)(param_1 + 0x1e8) = param_3;
  imp___aeabi_memcpy4(pfVar3,param_2,param_3 * 4 + 4);
  pfVar2 = (float *)(param_1 + 0x184);
  imp___aeabi_memcpy4(pfVar2,param_4,*(int *)(param_1 + 0x1ec) * 4 + 4);
  if (*(float *)(param_1 + 0x184) != 1.0) {
    uVar1 = *(int *)(param_1 + 0x1e8) + 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      uVar1 = uVar1 - 1;
      *pfVar3 = *pfVar3 / *pfVar2;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
    uVar1 = *(int *)(param_1 + 0x1ec) + 1;
    pfVar3 = pfVar2;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      uVar1 = uVar1 - 1;
      *pfVar3 = *pfVar3 / *pfVar2;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_NlnyAQeXdcZcWkGHPXtnKeWjCkZrXkLUfiFThxPA
// Entry: 0x71e093e0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_NlnyAQeXdcZcWkGHPXtnKeWjCkZrXkLUfiFThxPA
          (short *param_1,short *param_2,uint param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  pfVar16 = (float *)0x0;
  if (param_2 != (short *)0x0) {
    pfVar16 = param_4;
  }
  if (param_2 == (short *)0x0 || pfVar16 == (float *)0x0) {
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0xf8);
  uVar12 = param_3;
  if (uVar3 < param_3) {
    uVar12 = uVar3;
  }
  if (uVar12 != 0) {
    iVar5 = *(int *)(param_1 + 0xf6);
    iVar13 = *(int *)(param_1 + 0xf4);
    pfVar16 = (float *)(param_1 + 0x30);
    uVar19 = iVar5 + 1;
    if (uVar19 < 3) {
      uVar19 = 2;
    }
    uVar15 = 2;
    if (2 < iVar13 + 1U) {
      uVar15 = iVar13 + 1U;
    }
    if (iVar13 == 0) {
      psVar9 = param_2;
      pfVar11 = param_4;
      psVar8 = param_1;
      uVar15 = uVar12;
      if (iVar5 == 0) {
        do {
          sVar1 = *psVar9;
          fVar20 = *(float *)(param_1 + 0x90);
          uVar15 = uVar15 - 1;
          *psVar8 = sVar1;
          fVar22 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = fVar20 * fVar22 + 0.0;
          *pfVar11 = fVar22;
          *pfVar16 = fVar22;
          pfVar16 = pfVar16 + 1;
          psVar9 = psVar9 + 1;
          pfVar11 = pfVar11 + 1;
          psVar8 = psVar8 + 1;
        } while (uVar15 != 0);
      }
      else {
        pfVar11 = (float *)(param_1 + iVar5 * 2 + 0x2e);
        uVar15 = 0;
        do {
          sVar1 = param_2[uVar15];
          pfVar6 = param_4 + uVar15;
          fVar22 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
          fVar20 = *(float *)(param_1 + 0x90) * fVar22 + 0.0;
          *pfVar6 = fVar20;
          pfVar4 = (float *)(param_1 + 0xc4);
          pfVar7 = pfVar11;
          iVar13 = uVar19 - 1;
          fVar22 = 0.0;
          do {
            fVar23 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            iVar13 = iVar13 + -1;
            fVar21 = *pfVar7;
            pfVar7 = pfVar7 + -1;
            fVar22 = fVar22 + fVar23 * fVar21;
          } while (iVar13 != 0);
          fVar20 = fVar20 - fVar22;
          pfVar11 = pfVar11 + 1;
          param_1[uVar15] = sVar1;
          iVar13 = iVar5 + uVar15;
          uVar15 = uVar15 + 1;
          *pfVar6 = fVar20;
          pfVar16[iVar13] = fVar20;
        } while (uVar15 != uVar12);
      }
    }
    else if (iVar5 == 0) {
      uVar19 = 0;
      psVar9 = param_1 + iVar13 + -1;
      do {
        fVar21 = *(float *)(param_1 + 0x90);
        sVar1 = param_2[uVar19];
        pfVar4 = param_4 + uVar19;
        fVar20 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
        *pfVar4 = fVar21 * fVar20;
        psVar8 = psVar9;
        pfVar11 = (float *)(param_1 + 0x92);
        iVar5 = uVar15 - 1;
        fVar22 = 0.0;
        do {
          iVar5 = iVar5 + -1;
          fVar24 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          fVar23 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = fVar22 + fVar24 * fVar23;
          psVar8 = psVar8 + -1;
        } while (iVar5 != 0);
        fVar22 = fVar21 * fVar20 + fVar22;
        psVar9 = psVar9 + 1;
        param_1[iVar13 + uVar19] = sVar1;
        pfVar11 = pfVar16 + uVar19;
        uVar19 = uVar19 + 1;
        *pfVar4 = fVar22;
        *pfVar11 = fVar22;
      } while (uVar19 != uVar12);
    }
    else {
      pfVar11 = (float *)(param_1 + iVar5 * 2 + 0x2e);
      uVar17 = 0;
      psVar9 = param_1 + iVar13 + -1;
      do {
        fVar21 = *(float *)(param_1 + 0x90);
        sVar1 = param_2[uVar17];
        pfVar7 = param_4 + uVar17;
        fVar20 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
        *pfVar7 = fVar21 * fVar20;
        iVar14 = uVar15 - 1;
        psVar8 = psVar9;
        pfVar4 = (float *)(param_1 + 0x92);
        fVar22 = 0.0;
        do {
          iVar14 = iVar14 + -1;
          fVar24 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          fVar23 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x16) & 3);
          fVar22 = fVar22 + fVar24 * fVar23;
          psVar8 = psVar8 + -1;
        } while (iVar14 != 0);
        fVar22 = fVar21 * fVar20 + fVar22;
        *pfVar7 = fVar22;
        pfVar4 = (float *)(param_1 + 0xc4);
        pfVar6 = pfVar11;
        iVar14 = uVar19 - 1;
        fVar20 = 0.0;
        do {
          fVar23 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar14 = iVar14 + -1;
          fVar21 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          fVar20 = fVar20 + fVar23 * fVar21;
        } while (iVar14 != 0);
        fVar22 = fVar22 - fVar20;
        pfVar11 = pfVar11 + 1;
        psVar9 = psVar9 + 1;
        param_1[iVar13 + uVar17] = sVar1;
        *pfVar7 = fVar22;
        iVar14 = iVar5 + uVar17;
        uVar17 = uVar17 + 1;
        pfVar16[iVar14] = fVar22;
      } while (uVar17 != uVar12);
    }
  }
  iVar5 = *(int *)(param_1 + 0xf4);
  if (param_3 <= uVar3) {
    imp___aeabi_memmove(param_1,param_1 + param_3,iVar5 << 1);
    imp___aeabi_memmove4(param_1 + 0x30,param_1 + 0x30 + param_3 * 2,*(int *)(param_1 + 0xf6) << 2);
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0xf6);
  iVar13 = param_3 - uVar12;
  psVar9 = param_2 + iVar5 + -1;
  uVar3 = iVar5 + 1;
  if (uVar3 < 3) {
    uVar3 = 2;
  }
  pfVar16 = param_4 + iVar14 + -1;
  uVar19 = 2;
  if (2 < iVar14 + 1U) {
    uVar19 = iVar14 + 1U;
  }
  iVar10 = 0;
  do {
    fVar21 = *(float *)(param_1 + 0x90);
    fVar20 = (float)VectorSignedToFloat((int)param_2[uVar12],(byte)(in_fpscr >> 0x16) & 3);
    pfVar4 = param_4 + uVar12;
    *pfVar4 = fVar21 * fVar20;
    fVar22 = 0.0;
    iVar18 = uVar3 - 1;
    pfVar11 = (float *)(param_1 + 0x92);
    psVar8 = psVar9;
    iVar2 = iVar5;
    while (iVar2 != 0) {
      iVar18 = iVar18 + -1;
      fVar24 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar23 = (float)VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x16) & 3);
      fVar22 = fVar22 + fVar24 * fVar23;
      psVar8 = psVar8 + -1;
      iVar2 = iVar18;
    }
    fVar22 = fVar21 * fVar20 + fVar22;
    *pfVar4 = fVar22;
    fVar20 = 0.0;
    iVar18 = uVar19 - 1;
    pfVar11 = (float *)(param_1 + 0xc4);
    pfVar7 = pfVar16;
    iVar2 = iVar14;
    while (iVar2 != 0) {
      fVar23 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar21 = *pfVar7;
      pfVar7 = pfVar7 + -1;
      fVar20 = fVar20 + fVar23 * fVar21;
      iVar18 = iVar18 + -1;
      iVar2 = iVar18;
    }
    iVar10 = iVar10 + 1;
    pfVar16 = pfVar16 + 1;
    psVar9 = psVar9 + 1;
    uVar12 = uVar12 + 1;
    *pfVar4 = fVar22 - fVar20;
  } while (iVar10 != iVar13);
  imp___aeabi_memcpy(param_1,param_2 + (param_3 - iVar5),iVar5 << 1);
  imp___aeabi_memcpy4(param_1 + 0x30,param_4 + (param_3 - *(int *)(param_1 + 0xf6)),
                      *(int *)(param_1 + 0xf6) << 2);
  return 0;
}


// =========================================================================
// Function: thunk_RtjMTcOPHBLBcDCGvxvrncGtxBxpigwAkp
// Entry: 0x71e093f0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_RtjMTcOPHBLBcDCGvxvrncGtxBxpigwAkp(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = thunk_FDgeEJpXxzQwQFyc();
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = thunk_MzYnzAjChAfiFk();
    iVar3 = thunk_RsDuEpSyJFUcDyOEiI(iVar1,3);
    if (iVar3 != 0 || iVar2 != 0) {
      thunk_XiVSYXKylWWafQ(iVar1);
      return 0;
    }
    uVar4 = thunk_MwhHq(0x3cc);
    thunk_yJiXrHOpYkXRsCxzmDfUuAhfwzxussAtmVSnEZWrIDQl(uVar4,iVar1);
  }
  return uVar4;
}


// =========================================================================
// Function: thunk_yJiXrHOpYkXRsCxzmDfUuAhfwzxussAtmVSnEZWrIDQl
// Entry: 0x71e09400 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_yJiXrHOpYkXRsCxzmDfUuAhfwzxussAtmVSnEZWrIDQl(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  imp___aeabi_memclr4(param_1 + 1,0x3c4);
  param_1[0xf2] = 3;
  return param_1;
}


// =========================================================================
// Function: thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy
// Entry: 0x71e09410 | Size: 1 bytes
// =========================================================================

undefined4 thunk_YTGkYGnIsjHfXqnTJhxKVDXpQFwpeZZzXUbVeVy(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_3 == 0xa0) {
    iVar1 = *(int *)(param_1 + 0x3c4);
    if (iVar1 - 0x141U < 0xfffffe1f) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x3c4) = 0;
    }
    imp___aeabi_memcpy(param_1 + iVar1 * 2 + 4,param_2,0x140);
    uVar2 = 0;
    *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x3c4) + 0xa0;
  }
  return uVar2;
}


// =========================================================================
// Function: thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy
// Entry: 0x71e09420 | Size: 1 bytes
// =========================================================================

int thunk_TccfyTtrffvazwVwGtqEayN_woXkw_TXgJpev_NyTy
              (undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  uVar4 = param_1[0xf1];
  if (uVar4 == 0) {
    return -1;
  }
  if (param_3 < uVar4 / 0xa0) {
    return -1;
  }
  iVar1 = thunk_ANlpEzfHGkqLkGREF(*param_1,16000,param_1 + 1,uVar4);
  if (iVar1 < 0) {
    return -1;
  }
  uVar8 = 0x3fe0000000000000;
  if (iVar1 == 0) {
    uVar8 = 0x3f847ae147ae147b;
  }
  *param_2 = uVar8;
  if (0x13f < uVar4) {
    uVar6 = uVar4 / 0xa0 - 1;
    uVar5 = 1;
    if (1 < uVar6) {
      puVar7 = param_2 + 1;
      uVar5 = uVar6 | 1;
      uVar3 = uVar6 & 0xfffffffe;
      do {
        *puVar7 = uVar8;
        puVar7[1] = uVar8;
        puVar7 = puVar7 + 2;
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
      if (uVar6 == (uVar6 & 0xfffffffe)) goto LAB_71b21a68;
    }
    param_2 = param_2 + uVar5;
    iVar2 = uVar4 / 0xa0 - uVar5;
    do {
      *param_2 = uVar8;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_71b21a68:
  param_1[0xf1] = 0;
  return iVar1;
}


// =========================================================================
// Function: thunk_fzGHvZuqXPFbyeVyLPwnEEZHgDgpk
// Entry: 0x71e09430 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_fzGHvZuqXPFbyeVyLPwnEEZHgDgpk(undefined4 *param_1)

{
  thunk_XiVSYXKylWWafQ(*param_1);
  return param_1;
}


// =========================================================================
// Function: thunk_Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
// Entry: 0x71e09440 | Size: 1 bytes
// =========================================================================

undefined4
thunk_Jsfi_tFCLaVUpGedxGXnHBIQQ_mFjFpbQipvdfCWyuoUgGiBcylvWklFbpEIsY
          (int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1f28 [2112];
  undefined1 auStack_16e8 [1920];
  undefined1 auStack_f68 [1920];
  undefined1 auStack_7e8 [960];
  undefined1 auStack_428 [960];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [36];
  
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_4 + 0x80) = 0;
  if (param_3 == 0xa0) {
    puVar5 = (uint *)(param_1 + 0x10c0);
    iVar1 = thunk_NlnyAQeXdcZcWkGHPXtnKeWjCkZrXkLUfiFThxPA
                      (*(undefined4 *)(param_1 + 0x10e0),param_2,0xa0,param_1 + 0x800 + *puVar5 * 4)
    ;
    if (iVar1 == 0) {
      uVar2 = *puVar5;
      uVar4 = 0;
      *puVar5 = uVar2 + 0xa0;
      if (0x22f < uVar2 + 0xa0) {
        dVar6 = 0.0;
        *(undefined1 *)(param_4 + 0x84) = 0;
        *(undefined4 *)(param_4 + 0x80) = 3;
        iVar1 = 0x940;
        do {
          pfVar3 = (float *)(param_1 + iVar1);
          iVar1 = iVar1 + 4;
          dVar6 = dVar6 + (double)(*pfVar3 * *pfVar3);
        } while (iVar1 != 0xbc0);
        dVar7 = 0.0;
        iVar1 = 0xbc0;
        *(double *)(param_4 + 0x60) = SQRT(dVar6 / 160.0);
        do {
          pfVar3 = (float *)(param_1 + iVar1);
          iVar1 = iVar1 + 4;
          dVar7 = dVar7 + (double)(*pfVar3 * *pfVar3);
        } while (iVar1 != 0xe40);
        iVar1 = 0xe40;
        dVar8 = 0.0;
        *(double *)(param_4 + 0x68) = SQRT(dVar7 / 160.0);
        do {
          pfVar3 = (float *)(param_1 + iVar1);
          iVar1 = iVar1 + 4;
          dVar8 = dVar8 + (double)(*pfVar3 * *pfVar3);
        } while (iVar1 != 0x10c0);
        *(double *)(param_4 + 0x70) = SQRT(dVar8 / 160.0);
        if ((SQRT(dVar6 / 160.0) < 5.0) || (SQRT(dVar7 / 160.0) < 5.0 || SQRT(dVar8 / 160.0) < 5.0))
        {
          *(undefined1 *)(param_4 + 0x84) = 1;
        }
        else {
          thunk_ymSTHACZvuXvGpXOUfAKSDxiTayrYK
                    (param_1 + 0x940,auStack_428,auStack_7e8,auStack_f68,auStack_16e8,
                     *(undefined4 *)(param_1 + 0x10dc));
          thunk_nCLXwfkCwgKOmXUvu_aXrKeB
                    (auStack_f68,auStack_1f28,*(undefined4 *)(param_1 + 0x10d8),auStack_68,
                     auStack_48);
          thunk_VnCRIxhqvSZFGdJEjzHbGoayMrpGVrgLLZMtrDUVrXLLbuedQODnkNRwEpxv
                    (8000,auStack_48,auStack_68,4,3,param_1 + 0x10c8,param_1 + 0x10d0,param_4,
                     param_4 + 0x20);
          thunk_dIIwFeSrFgUIpCxpS_sRiWpZcilfYYPHDQhzMJIRJqWeUguvtEFV(param_1,param_4 + 0x40);
        }
        imp___aeabi_memcpy8(param_1 + 0x800,param_1 + 0xf80,0x140);
        *puVar5 = 0x50;
        return 0;
      }
    }
  }
  return uVar4;
}


// =========================================================================
// Function: thunk_dIIwFeSrFgUIpCxpS_sRiWpZcilfYYPHDQhzMJIRJqWeUguvtEFV
// Entry: 0x71e09450 | Size: 1 bytes
// =========================================================================

void thunk_dIIwFeSrFgUIpCxpS_sRiWpZcilfYYPHDQhzMJIRJqWeUguvtEFV(int param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_9d8;
  float fStack_9d4;
  float fStack_9d0;
  float fStack_9cc;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  float fStack_998;
  undefined1 auStack_994 [1980];
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  thunk_dDmPyxrsyMQtykVHFFsGVsUoAVtepoDeNJIIOXjDRdiKeYB(param_1,&dStack_1d8);
  imp___aeabi_memclr4(auStack_994,0x7bc);
  iVar4 = 1;
  fStack_9d4 = (float)dStack_1d0;
  fStack_9d8 = (float)dStack_1d8;
  fStack_9cc = (float)dStack_1c0;
  fStack_9d0 = (float)dStack_1c8;
  uStack_9b8 = CONCAT44((float)dStack_190,(float)dStack_198);
  iVar2 = param_1 + 0x400;
  fStack_998 = (float)dStack_158;
  pfVar3 = (float *)&uStack_9c8;
  uStack_9c8 = CONCAT44((float)dStack_1b0,(float)dStack_1b8);
  uStack_9c0 = CONCAT44((float)dStack_1a0,(float)dStack_1a8);
  uStack_9b0 = CONCAT44((float)dStack_180,(float)dStack_188);
  uStack_9a8 = CONCAT44((float)dStack_170,(float)dStack_178);
  uStack_9a0 = CONCAT44((float)dStack_160,(float)dStack_168);
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,&fStack_9d8,param_1,iVar2);
  fVar6 = fStack_9cc * fStack_9cc + fStack_9d0 * fStack_9d0;
  fVar8 = fStack_9d8 * fStack_9d8;
  do {
    fVar7 = fVar6;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar7 < fVar8) << 0x1f;
    fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
    bVar5 = false;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      in_fpscr = uVar1 | (uint)(fVar7 < fVar6) << 0x1f;
      bVar5 = SUB41(in_fpscr >> 0x1f,0);
    }
    if (bVar5) {
      fVar8 = ((1.0 / fVar6 - 1.0 / fVar8) * -0.5) /
              ((1.0 / fVar8 + 1.0 / fVar6) - (1.0 / fVar7 + 1.0 / fVar7));
      goto LAB_71b20254;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 2;
    fVar8 = fVar7;
  } while (iVar4 != 0xff);
  iVar4 = 0;
  fVar8 = 0.0;
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
  if (SUB41(in_fpscr >> 0x1f,0)) {
    iVar4 = (uint)(fVar6 < fStack_9d4 * fStack_9d4) << 8;
  }
LAB_71b20254:
  fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  *param_2 = (double)((fVar8 + fVar6) * 31.25);
  imp___aeabi_memclr4(auStack_994,0x7bc);
  iVar4 = 1;
  fStack_998 = (float)dStack_d0;
  fStack_9d4 = (float)dStack_148;
  fStack_9d8 = (float)dStack_150;
  fStack_9cc = (float)dStack_138;
  fStack_9d0 = (float)dStack_140;
  uStack_9b8 = CONCAT44((float)dStack_108,(float)dStack_110);
  uStack_9b0 = CONCAT44((float)dStack_f8,(float)dStack_100);
  uStack_9c8 = CONCAT44((float)dStack_128,(float)dStack_130);
  uStack_9c0 = CONCAT44((float)dStack_118,(float)dStack_120);
  uStack_9a8 = CONCAT44((float)dStack_e8,(float)dStack_f0);
  uStack_9a0 = CONCAT44((float)dStack_d8,(float)dStack_e0);
  pfVar3 = (float *)&uStack_9c8;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,&fStack_9d8,param_1,iVar2);
  fVar6 = fStack_9cc * fStack_9cc + fStack_9d0 * fStack_9d0;
  fVar8 = fStack_9d8 * fStack_9d8;
  do {
    fVar7 = fVar6;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar7 < fVar8) << 0x1f;
    fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
    bVar5 = false;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      in_fpscr = uVar1 | (uint)(fVar7 < fVar6) << 0x1f;
      bVar5 = SUB41(in_fpscr >> 0x1f,0);
    }
    if (bVar5) {
      fVar8 = ((1.0 / fVar6 - 1.0 / fVar8) * -0.5) /
              ((1.0 / fVar8 + 1.0 / fVar6) - (1.0 / fVar7 + 1.0 / fVar7));
      goto LAB_71b203dc;
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 2;
    fVar8 = fVar7;
  } while (iVar4 != 0xff);
  iVar4 = 0;
  fVar8 = 0.0;
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
  if (SUB41(in_fpscr >> 0x1f,0)) {
    iVar4 = (uint)(fVar6 < fStack_9d4 * fStack_9d4) << 8;
  }
LAB_71b203dc:
  fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  param_2[1] = (double)((fVar8 + fVar6) * 31.25);
  imp___aeabi_memclr4(auStack_994,0x7bc);
  iVar4 = 1;
  fStack_998 = (float)dStack_48;
  fStack_9d4 = (float)dStack_c0;
  fStack_9d8 = (float)dStack_c8;
  fStack_9cc = (float)dStack_b0;
  fStack_9d0 = (float)dStack_b8;
  uStack_9b8 = CONCAT44((float)dStack_80,(float)dStack_88);
  uStack_9b0 = CONCAT44((float)dStack_70,(float)dStack_78);
  uStack_9c8 = CONCAT44((float)dStack_a0,(float)dStack_a8);
  uStack_9c0 = CONCAT44((float)dStack_90,(float)dStack_98);
  uStack_9a8 = CONCAT44((float)dStack_60,(float)dStack_68);
  uStack_9a0 = CONCAT44((float)dStack_50,(float)dStack_58);
  pfVar3 = (float *)&uStack_9c8;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,&fStack_9d8,param_1,iVar2);
  fVar6 = fStack_9cc * fStack_9cc + fStack_9d0 * fStack_9d0;
  fVar8 = fStack_9d8 * fStack_9d8;
  while( true ) {
    fVar7 = fVar6;
    uVar1 = in_fpscr & 0xfffffff;
    in_fpscr = uVar1 | (uint)(fVar7 < fVar8) << 0x1f;
    fVar6 = pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3;
    bVar5 = false;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      in_fpscr = uVar1 | (uint)(fVar7 < fVar6) << 0x1f;
      bVar5 = SUB41(in_fpscr >> 0x1f,0);
    }
    if (bVar5) break;
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 2;
    fVar8 = fVar7;
    if (iVar4 == 0xff) {
      iVar4 = 0;
      fVar8 = 0.0;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar7) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        iVar4 = (uint)(fVar6 < fStack_9d4 * fStack_9d4) << 8;
      }
LAB_71b20558:
      fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      param_2[2] = (double)((fVar8 + fVar6) * 31.25);
      return;
    }
  }
  fVar8 = ((1.0 / fVar6 - 1.0 / fVar8) * -0.5) /
          ((1.0 / fVar8 + 1.0 / fVar6) - (1.0 / fVar7 + 1.0 / fVar7));
  goto LAB_71b20558;
}


// =========================================================================
// Function: thunk_dDmPyxrsyMQtykVHFFsGVsUoAVtepoDeNJIIOXjDRdiKeYB
// Entry: 0x71e09460 | Size: 1 bytes
// =========================================================================

void thunk_dDmPyxrsyMQtykVHFFsGVsUoAVtepoDeNJIIOXjDRdiKeYB(int param_1,int param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_8e8 [128];
  double dStack_868;
  double dStack_860;
  double dStack_858;
  double dStack_850;
  double dStack_848;
  double dStack_840;
  double dStack_838;
  double dStack_830;
  double dStack_828;
  double dStack_820;
  double dStack_818;
  double dStack_810;
  double dStack_808;
  double dStack_800;
  double dStack_7f8;
  double dStack_7f0;
  double dStack_7e8;
  double adStack_7e0 [240];
  
  pfVar4 = (float *)(param_1 + 0x800);
  iVar1 = 0;
  do {
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pdVar2 = (double *)((int)&DAT_7009a8d8 + iVar1);
    pdVar3 = (double *)((int)adStack_7e0 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * (double)fVar5;
  } while (iVar1 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(&dStack_868,adStack_7e0,0xf0,0x10);
  dStack_868 = dStack_868 * 1.0001;
  dStack_860 = dStack_860 * 0.985;
  dStack_858 = dStack_858 * 0.970225;
  dStack_850 = dStack_850 * 0.955672;
  dStack_848 = dStack_848 * 0.941337;
  dStack_840 = dStack_840 * 0.927217;
  dStack_838 = dStack_838 * 0.913308;
  dStack_830 = dStack_830 * 0.899609;
  dStack_828 = dStack_828 * 0.886115;
  dStack_820 = dStack_820 * 0.872823;
  dStack_818 = dStack_818 * 0.85973;
  dStack_810 = dStack_810 * 0.846834;
  dStack_808 = dStack_808 * 0.834132;
  dStack_800 = dStack_800 * 0.82162;
  dStack_7f8 = dStack_7f8 * 0.809296;
  dStack_7f0 = dStack_7f0 * 0.797156;
  dStack_7e8 = dStack_7e8 * 0.785199;
  thunk_TUVjgQucjMseBddqfN(param_2,auStack_8e8,&dStack_868,0x10);
  pfVar4 = (float *)(param_1 + 0xa80);
  iVar1 = 0;
  do {
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pdVar2 = (double *)((int)&DAT_7009a8d8 + iVar1);
    pdVar3 = (double *)((int)adStack_7e0 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * (double)fVar5;
  } while (iVar1 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(&dStack_868,adStack_7e0,0xf0,0x10);
  dStack_868 = dStack_868 * 1.0001;
  dStack_860 = dStack_860 * 0.985;
  dStack_858 = dStack_858 * 0.970225;
  dStack_850 = dStack_850 * 0.955672;
  dStack_848 = dStack_848 * 0.941337;
  dStack_840 = dStack_840 * 0.927217;
  dStack_838 = dStack_838 * 0.913308;
  dStack_830 = dStack_830 * 0.899609;
  dStack_828 = dStack_828 * 0.886115;
  dStack_820 = dStack_820 * 0.872823;
  dStack_818 = dStack_818 * 0.85973;
  dStack_810 = dStack_810 * 0.846834;
  dStack_808 = dStack_808 * 0.834132;
  dStack_800 = dStack_800 * 0.82162;
  dStack_7f8 = dStack_7f8 * 0.809296;
  dStack_7f0 = dStack_7f0 * 0.797156;
  dStack_7e8 = dStack_7e8 * 0.785199;
  thunk_TUVjgQucjMseBddqfN(param_2 + 0x88,auStack_8e8,&dStack_868,0x10);
  pfVar4 = (float *)(param_1 + 0xd00);
  iVar1 = 0;
  do {
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pdVar2 = (double *)((int)&DAT_7009a8d8 + iVar1);
    pdVar3 = (double *)((int)adStack_7e0 + iVar1);
    iVar1 = iVar1 + 8;
    *pdVar3 = *pdVar2 * (double)fVar5;
  } while (iVar1 != 0x780);
  thunk_ZBJDfkhbPfYMWdHknpw(&dStack_868,adStack_7e0,0xf0,0x10);
  dStack_868 = dStack_868 * 1.0001;
  dStack_860 = dStack_860 * 0.985;
  dStack_858 = dStack_858 * 0.970225;
  dStack_850 = dStack_850 * 0.955672;
  dStack_848 = dStack_848 * 0.941337;
  dStack_840 = dStack_840 * 0.927217;
  dStack_838 = dStack_838 * 0.913308;
  dStack_830 = dStack_830 * 0.899609;
  dStack_828 = dStack_828 * 0.886115;
  dStack_820 = dStack_820 * 0.872823;
  dStack_818 = dStack_818 * 0.85973;
  dStack_810 = dStack_810 * 0.846834;
  dStack_808 = dStack_808 * 0.834132;
  dStack_800 = dStack_800 * 0.82162;
  dStack_7f8 = dStack_7f8 * 0.809296;
  dStack_7f0 = dStack_7f0 * 0.797156;
  dStack_7e8 = dStack_7e8 * 0.785199;
  thunk_TUVjgQucjMseBddqfN(param_2 + 0x110,auStack_8e8,&dStack_868,0x10);
  return;
}


// =========================================================================
// Function: thunk_lZ_cSUTFlxtubkhk_ITRiKQyRvDW
// Entry: 0x71e09470 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_lZ_cSUTFlxtubkhk_ITRiKQyRvDW(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_820 [2048];
  
  imp___aeabi_memclr8(param_1 + 0x200,0x8c0);
  param_1[0x430] = 0x50;
  *(undefined8 *)(param_1 + 0x432) = 0xc000000000000000;
  param_1[0x434] = 0;
  param_1[0x435] = 0x40490000;
  uVar1 = thunk_MwhHq(0x1fd8);
  param_1[0x436] = uVar1;
  uVar1 = thunk_MwhHq(0x318);
  param_1[0x437] = uVar1;
  uVar1 = thunk_AAdEpWLrVuRzeKH_aypOaweeoqhfVwu_pPmWcvnFTh(&DAT_7009a8c0,2,&DAT_7009a8cc,2);
  param_1[0x438] = uVar1;
  *param_1 = 0;
  thunk_bEmuaqCJZZkepWiPVTHzKngWmkMIMJSFA(0x200,1,auStack_820,param_1,param_1 + 0x100);
  thunk_UQxLZqjxb_itqZvnxbspQFpzddAd(param_1[0x437]);
  thunk_iCvAqFcXYqqmhAphwFzC_NVLToDT(param_1[0x436]);
  return param_1;
}


// =========================================================================
// Function: thunk_pONOVmkUOdNWfVaMYDHEyFhffjsr
// Entry: 0x71e09480 | Size: 1 bytes
// =========================================================================

int thunk_pONOVmkUOdNWfVaMYDHEyFhffjsr(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10e0);
  *(undefined4 *)(param_1 + 0x10e0) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x10dc);
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x10d8);
  *(int *)(param_1 + 0x10d8) = 0;
  if (iVar1 != 0) {
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_PofpGRXoctrEUTfkISDDvXPY_UqjPrMZrCyExO
// Entry: 0x71e09490 | Size: 1 bytes
// =========================================================================

undefined4 thunk_PofpGRXoctrEUTfkISDDvXPY_UqjPrMZrCyExO(int param_1)

{
  undefined4 uVar1;
  
  if (0 < param_1) {
    uVar1 = thunk_MwhHq(0x18);
    thunk_MKpBiemEYiZqhmpLNLfCalZzJCNyZfrMX(uVar1,param_1);
    return uVar1;
  }
  return 0;
}


// =========================================================================
// Function: thunk_MKpBiemEYiZqhmpLNLfCalZzJCNyZfrMX
// Entry: 0x71e094a0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_MKpBiemEYiZqhmpLNLfCalZzJCNyZfrMX(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 << 3;
  if (0x1fffffff < param_2) {
    iVar1 = -1;
  }
  uVar2 = thunk__IBDl(iVar1);
  *param_1 = uVar2;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


// =========================================================================
// Function: thunk_iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk
// Entry: 0x71e094b0 | Size: 1 bytes
// =========================================================================

double thunk_iBoJXJQZqNK_eZJSqFSamrXsyZTGqXMRZYVk(int param_1)

{
  uint in_fpscr;
  int iVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < 1) {
      return 0.0;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  dVar2 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  return *(double *)(param_1 + 0x10) / dVar2;
}


// =========================================================================
// Function: thunk_tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ
// Entry: 0x71e094c0 | Size: 1 bytes
// =========================================================================

void thunk_tubpmzqlxzPCVPEMUUJUhFZmKwULIb_WtUerAZ
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((char)param_1[1] == '\0') {
    iVar2 = *param_1;
    iVar1 = param_1[2];
    dVar3 = *(double *)(param_1 + 4);
  }
  else {
    iVar1 = param_1[2];
    iVar2 = *param_1;
    dVar3 = *(double *)(param_1 + 4) - *(double *)(iVar2 + iVar1 * 8);
  }
  param_1[2] = iVar1 + 1;
  if (param_1[3] <= iVar1 + 1) {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *(double *)(param_1 + 4) = dVar3 + (double)CONCAT44(param_4,param_3);
  *(ulonglong *)(iVar2 + iVar1 * 8) = CONCAT44(param_4,param_3);
  return;
}


// =========================================================================
// Function: thunk_vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
// Entry: 0x71e094d0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_vrA_MdQVjZomFBNItoElqxeOolHVbODauMvEAaLkwtAEwzexb
          (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  
  cVar2 = (char)param_1[1];
  if ((cVar2 != '\0') || (param_2 + 2 <= param_1[2])) {
    uVar12 = param_1[3];
    if (((int)uVar12 < 1) || ((cVar2 == '\0' && (param_1[2] < 1)))) {
      return 0xffffffff;
    }
    dVar13 = (double)CONCAT44(param_4,param_3);
    iVar8 = param_1[2] + -1;
    pdVar4 = (double *)(*param_1 + iVar8 * 8 + (uVar12 & iVar8 >> 0x1f) * 8);
    if (*pdVar4 < dVar13) {
      *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar4;
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
      *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + 0.0;
      if (-1 < param_2) {
        uVar5 = param_2 + 1;
        iVar8 = param_1[2];
        uVar9 = uVar5;
        if (0 < (int)uVar5) {
          uVar9 = 1;
        }
        iVar10 = (iVar8 - param_2) + -2;
        if (cVar2 == '\0') {
          iVar3 = iVar8 * 8 + param_2 * -8 + *param_1 + -0x10;
          uVar6 = uVar5;
          do {
            if (uVar12 <= uVar6) {
              return 0xffffffff;
            }
            if (iVar8 <= (int)uVar5) {
              return 0xffffffff;
            }
            uVar7 = uVar6;
            if (*(double *)(iVar3 + (uVar12 & iVar10 >> 0x1f) * 8) < dVar13) break;
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + 8;
            uVar11 = uVar6 - 1;
            bVar1 = 0 < (int)uVar6;
            uVar6 = uVar11;
            uVar7 = uVar9 - 1;
          } while (uVar11 != 0 && bVar1);
        }
        else {
          iVar8 = iVar8 * 8 + param_2 * -8 + *param_1 + -0x10;
          do {
            if (uVar12 <= uVar5) {
              return 0xffffffff;
            }
            uVar7 = uVar5;
            if (*(double *)(iVar8 + (uVar12 & iVar10 >> 0x1f) * 8) < dVar13) break;
            iVar10 = iVar10 + 1;
            iVar8 = iVar8 + 8;
            uVar6 = uVar5 - 1;
            bVar1 = 0 < (int)uVar5;
            uVar5 = uVar6;
            uVar7 = uVar9 - 1;
          } while (uVar6 != 0 && bVar1);
        }
        if (0 < (int)uVar7) {
          iVar8 = *param_1;
          uVar5 = ~uVar7;
          if (cVar2 == '\0') {
            do {
              if (uVar12 <= uVar7) {
                return 0xffffffff;
              }
              if (param_1[2] <= (int)uVar7) {
                return 0xffffffff;
              }
              iVar10 = uVar5 + param_1[2];
              uVar5 = uVar5 + 1;
              uVar9 = uVar7 - 1;
              uVar6 = uVar12 & iVar10 >> 0x1f;
              iVar10 = iVar8 + iVar10 * 8;
              pdVar4 = (double *)(iVar10 + uVar6 * 8);
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar4;
              *(undefined4 *)(iVar10 + uVar6 * 8) = 0;
              *(undefined4 *)((int)pdVar4 + 4) = 0;
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + 0.0;
              bVar1 = 0 < (int)uVar7;
              uVar7 = uVar9;
            } while (uVar9 != 0 && bVar1);
          }
          else {
            do {
              if (uVar12 <= uVar7) {
                return 0xffffffff;
              }
              uVar9 = uVar7 - 1;
              iVar10 = uVar5 + param_1[2];
              uVar5 = uVar5 + 1;
              uVar6 = uVar12 & iVar10 >> 0x1f;
              iVar10 = iVar8 + iVar10 * 8;
              pdVar4 = (double *)(iVar10 + uVar6 * 8);
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) - *pdVar4;
              *(undefined4 *)(iVar10 + uVar6 * 8) = 0;
              *(undefined4 *)((int)pdVar4 + 4) = 0;
              *(double *)(param_1 + 4) = *(double *)(param_1 + 4) + 0.0;
              bVar1 = 0 < (int)uVar7;
              uVar7 = uVar9;
            } while (uVar9 != 0 && bVar1);
          }
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: thunk_U_EBNTtrgIlFWGtTbOgIYhzcVdXianunB
// Entry: 0x71e094e0 | Size: 1 bytes
// =========================================================================

int * thunk_U_EBNTtrgIlFWGtTbOgIYhzcVdXianunB(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 == 0) {
    return param_1;
  }
  thunk_dGrRHE(iVar1);
  return param_1;
}


// =========================================================================
// Function: thunk_UQxLZqjxb_itqZvnxbspQFpzddAd
// Entry: 0x71e094f0 | Size: 1 bytes
// =========================================================================

void thunk_UQxLZqjxb_itqZvnxbspQFpzddAd(undefined4 param_1)

{
  imp___aeabi_memclr8(param_1,0x318);
  return;
}


// =========================================================================
// Function: thunk_iCvAqFcXYqqmhAphwFzC_NVLToDT
// Entry: 0x71e09500 | Size: 1 bytes
// =========================================================================

void thunk_iCvAqFcXYqqmhAphwFzC_NVLToDT(int param_1)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  imp___aeabi_memclr8(param_1,0xa10);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  *(undefined4 *)(param_1 + 0xa14) = 0x40490000;
  imp___aeabi_memclr8(param_1 + 0xa18,0x620);
  *(undefined4 *)(param_1 + 0x1038) = 0;
  *(undefined4 *)(param_1 + 0x103c) = 0x40490000;
  imp___aeabi_memclr8(param_1 + 0x1040,0x818);
  dVar3 = 0.5;
  do {
    dVar4 = (dVar3 * dVar3 * 0.7 * 1.736111111111111e-05 + dVar3 * 0.3 * 0.004166666666666667) *
            3.14159265;
    dVar4 = (double)imp_sin(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20));
    pdVar1 = (double *)(param_1 + 0x1858 + iVar2);
    dVar3 = dVar3 + 1.0;
    iVar2 = iVar2 + 8;
    *pdVar1 = dVar4 * dVar4;
  } while (iVar2 != 0x780);
  return;
}


// =========================================================================
// Function: thunk_ymSTHACZvuXvGpXOUfAKSDxiTayrYK
// Entry: 0x71e09510 | Size: 1 bytes
// =========================================================================

void thunk_ymSTHACZvuXvGpXOUfAKSDxiTayrYK
               (int param_1,int param_2,int param_3,double *param_4,double *param_5,int param_6)

{
  undefined1 auVar1 [32];
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 in_d18;
  undefined8 in_d19;
  float fStack_1f2c;
  float fStack_1f28;
  float fStack_1f24;
  float fStack_1f20;
  float fStack_1f1c;
  float fStack_1f18;
  float fStack_1f14;
  float fStack_1f10;
  float afStack_1f0c [480];
  undefined8 auStack_178c [2];
  float fStack_177c;
  float fStack_1778;
  float fStack_1774;
  float fStack_1770;
  float fStack_176c;
  float fStack_1768;
  float fStack_1764;
  float fStack_1760;
  float fStack_175c;
  float fStack_1758;
  float fStack_1754;
  float fStack_1750;
  float fStack_174c;
  float fStack_1748;
  float fStack_1744;
  float fStack_1740;
  float fStack_173c;
  float fStack_1738;
  undefined4 uStack_1734;
  undefined4 uStack_1730;
  undefined8 auStack_fdc [2];
  float fStack_fcc;
  float fStack_fc8;
  float fStack_fc4;
  float fStack_fc0;
  float fStack_fbc;
  float fStack_fb8;
  float fStack_fb4;
  float fStack_fb0;
  float fStack_fac;
  float fStack_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float fStack_f98;
  float fStack_f94;
  float fStack_f90;
  float fStack_f8c;
  float fStack_f88;
  undefined4 uStack_f84;
  undefined4 uStack_f80;
  float afStack_82c [492];
  float afStack_7c [5];
  
  pfVar6 = afStack_1f0c;
  iVar3 = 0;
  fVar14 = *(float *)(param_6 + 0x310);
  fVar18 = *(float *)(param_6 + 0x314);
  do {
    fVar22 = fVar14;
    fVar13 = *(float *)(param_1 + iVar3);
    pfVar7 = (float *)((int)pfVar6 + iVar3);
    iVar3 = iVar3 + 4;
    *(float *)(param_6 + 0x314) = fVar22;
    fVar14 = fVar13 + fVar22 * 1.9489596 + fVar18 * -0.94984514;
    *(float *)(param_6 + 0x310) = fVar14;
    *pfVar7 = fVar13 + fVar22 * -0.05101826 + fVar18 * 0.05015484;
    fVar18 = fVar22;
  } while (iVar3 != 0x780);
  iVar3 = 0x77c;
  pfVar7 = afStack_82c;
  do {
    pfVar8 = (float *)((int)pfVar6 + iVar3);
    iVar3 = iVar3 + -8;
    *pfVar7 = *pfVar8;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 != -4);
  fVar14 = 0.0;
  pauVar9 = (undefined1 (*) [16])afStack_82c;
  iVar3 = 0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar7;
    fVar14 = fVar14 + fVar18 * 0.0347;
    *pfVar7 = fVar14;
    fVar14 = fVar18 + fVar14 * -0.0347;
  } while (iVar3 != 0x3c0);
  fVar18 = 0.0;
  iVar3 = 0;
  afStack_7c[0] = fVar14;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar22 = *pfVar7;
    fVar18 = fVar18 + fVar22 * 0.1544;
    *pfVar7 = fVar18;
    fVar18 = fVar22 + fVar18 * -0.1544;
  } while (iVar3 != 0x3c0);
  fVar22 = 0.0;
  iVar3 = 0;
  afStack_7c[1] = fVar18;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar13 = *pfVar7;
    fVar22 = fVar22 + fVar13 * 0.3826;
    *pfVar7 = fVar22;
    fVar22 = fVar13 + fVar22 * -0.3826;
  } while (iVar3 != 0x3c0);
  fVar13 = 0.0;
  iVar3 = 0;
  afStack_7c[2] = fVar22;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar24 = *pfVar7;
    fVar13 = fVar13 + fVar24 * 0.744;
    *pfVar7 = fVar13;
    fVar13 = fVar24 + fVar13 * -0.744;
  } while (iVar3 != 0x3c0);
  puVar2 = auStack_fdc;
  afStack_7c[3] = fVar13;
  iVar3 = 0x410;
  do {
    auVar42 = *pauVar9;
    pauVar9 = pauVar9 + 1;
    iVar4 = iVar3 + -0x10;
    auVar42 = vrev(auVar42,4);
    *(longlong *)((int)puVar2 + iVar3) = auVar42._8_8_;
    *(longlong *)((int)auStack_fdc + iVar3 + 8) = auVar42._0_8_;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  iVar3 = 0;
  fVar24 = *(float *)(param_6 + 0x260);
  fVar19 = *(float *)(param_6 + 0x274);
  fVar15 = *(float *)(param_6 + 0x240);
  fVar17 = *(float *)(param_6 + 0x26c);
  fVar21 = *(float *)(param_6 + 0x264);
  fVar26 = *(float *)(param_6 + 0x270);
  fVar16 = *(float *)(param_6 + 0x27c);
  fVar20 = *(float *)(param_6 + 0x244);
  fVar23 = *(float *)(param_6 + 0x278);
  fVar25 = *(float *)(param_6 + 0x268);
  fVar40 = *(float *)(param_6 + 0x254);
  fVar34 = *(float *)(param_6 + 0x24c);
  fVar37 = *(float *)(param_6 + 0x25c);
  fVar29 = *(float *)(param_6 + 600);
  fStack_1f2c = *(float *)(param_6 + 0x29c);
  fStack_1f28 = *(float *)(param_6 + 0x280);
  fStack_1f24 = *(float *)(param_6 + 0x284);
  fStack_1f20 = *(float *)(param_6 + 0x288);
  fStack_1f1c = *(float *)(param_6 + 0x28c);
  fStack_1f18 = *(float *)(param_6 + 0x290);
  fStack_1f14 = *(float *)(param_6 + 0x294);
  fStack_1f10 = *(float *)(param_6 + 0x298);
  fVar32 = *(float *)(param_6 + 0x248);
  fVar39 = *(float *)(param_6 + 0x250);
  do {
    pfVar7 = (float *)((int)&DAT_70086dc8 + iVar3);
    pfVar8 = (float *)((int)afStack_7c + iVar3);
    iVar3 = iVar3 + 4;
    fVar41 = *pfVar7;
    fVar31 = *pfVar8 + fVar41 * fVar15;
    fVar35 = (fVar15 - fVar41 * fVar31) + fVar41 * fVar20;
    fStack_f88 = (fVar20 - fVar41 * fVar35) + fVar41 * fVar32;
    fStack_f8c = (fVar32 - fVar41 * fStack_f88) + fVar41 * fVar34;
    fStack_f90 = (fVar34 - fVar41 * fStack_f8c) + fVar41 * fVar39;
    fStack_f94 = (fVar39 - fVar41 * fStack_f90) + fVar41 * fVar40;
    fStack_f98 = (fVar40 - fVar41 * fStack_f94) + fVar41 * fVar29;
    fStack_f9c = (fVar29 - fVar41 * fStack_f98) + fVar41 * fVar37;
    fStack_fa0 = (fVar37 - fVar41 * fStack_f9c) + fVar41 * fVar24;
    fStack_fa4 = (fVar24 - fVar41 * fStack_fa0) + fVar41 * fVar21;
    fStack_fa8 = (fVar21 - fVar41 * fStack_fa4) + fVar41 * fVar25;
    fStack_fac = (fVar25 - fVar41 * fStack_fa8) + fVar41 * fVar17;
    fStack_fb0 = (fVar17 - fVar41 * fStack_fac) + fVar41 * fVar26;
    fStack_fb4 = (fVar26 - fVar41 * fStack_fb0) + fVar41 * fVar19;
    fStack_fb8 = (fVar19 - fVar41 * fStack_fb4) + fVar41 * fVar23;
    fStack_fbc = (fVar23 - fVar41 * fStack_fb8) + fVar41 * fVar16;
    fStack_fc0 = (fVar16 - fVar41 * fStack_fbc) + fVar41 * fStack_1f28;
    fStack_fc4 = (fStack_1f28 - fVar41 * fStack_fc0) + fVar41 * fStack_1f24;
    fStack_fc8 = (fStack_1f24 - fVar41 * fStack_fc4) + fVar41 * fStack_1f20;
    fStack_fcc = (fStack_1f20 - fVar41 * fStack_fc8) + fVar41 * fStack_1f1c;
    fVar27 = (fStack_1f1c - fVar41 * fStack_fcc) + fVar41 * fStack_1f18;
    fVar38 = (fStack_1f18 - fVar41 * fVar27) + fVar41 * fStack_1f14;
    fVar30 = (fStack_1f14 - fVar41 * fVar38) + fVar41 * fStack_1f10;
    fVar33 = (fStack_1f10 - fVar41 * fVar30) + fVar41 * fStack_1f2c;
    *pfVar8 = fStack_1f2c - fVar41 * fVar33;
    fVar24 = fStack_fa0;
    fVar19 = fStack_fb4;
    fVar15 = fVar31;
    fVar17 = fStack_fac;
    fVar21 = fStack_fa4;
    fVar26 = fStack_fb0;
    fVar16 = fStack_fbc;
    fVar20 = fVar35;
    fVar23 = fStack_fb8;
    fVar25 = fStack_fa8;
    fVar40 = fStack_f94;
    fVar34 = fStack_f8c;
    fVar37 = fStack_f9c;
    fVar29 = fStack_f98;
    fStack_1f2c = fVar33;
    fStack_1f28 = fStack_fc0;
    fStack_1f24 = fStack_fc4;
    fStack_1f20 = fStack_fc8;
    fStack_1f1c = fStack_fcc;
    fStack_1f18 = fVar27;
    fStack_1f14 = fVar38;
    fStack_1f10 = fVar30;
    fVar32 = fStack_f88;
    fVar39 = fStack_f90;
  } while (iVar3 != 0x10);
  *(float *)(param_6 + 0x270) = fStack_fb0;
  *(float *)(param_6 + 0x240) = fVar31;
  *(float *)(param_6 + 0x244) = fVar35;
  uStack_f80 = *(undefined4 *)(param_6 + 0x240);
  *(float *)(param_6 + 0x240) = afStack_1f0c[0x1df];
  uStack_f84 = *(undefined4 *)(param_6 + 0x244);
  *(float *)(param_6 + 0x244) = afStack_1f0c[0x1dd];
  *(float *)(param_6 + 0x248) = fStack_f88;
  *(float *)(param_6 + 0x24c) = fStack_f8c;
  *(float *)(param_6 + 0x250) = fStack_f90;
  *(float *)(param_6 + 0x248) = afStack_1f0c[0x1db];
  *(float *)(param_6 + 0x24c) = afStack_1f0c[0x1d9];
  *(float *)(param_6 + 0x250) = afStack_1f0c[0x1d7];
  *(float *)(param_6 + 0x254) = fStack_f94;
  *(float *)(param_6 + 0x254) = afStack_1f0c[0x1d5];
  *(float *)(param_6 + 600) = fStack_f98;
  *(float *)(param_6 + 600) = afStack_1f0c[0x1d3];
  *(float *)(param_6 + 0x25c) = fStack_f9c;
  *(float *)(param_6 + 0x25c) = afStack_1f0c[0x1d1];
  *(float *)(param_6 + 0x260) = fStack_fa0;
  *(float *)(param_6 + 0x260) = afStack_1f0c[0x1cf];
  *(float *)(param_6 + 0x264) = fStack_fa4;
  *(float *)(param_6 + 0x264) = afStack_1f0c[0x1cd];
  *(float *)(param_6 + 0x268) = fStack_fa8;
  *(float *)(param_6 + 0x268) = afStack_1f0c[0x1cb];
  *(float *)(param_6 + 0x280) = afStack_1f0c[0x1bf];
  *(float *)(param_6 + 0x284) = afStack_1f0c[0x1bd];
  *(float *)(param_6 + 0x288) = afStack_1f0c[0x1bb];
  *(float *)(param_6 + 0x28c) = fStack_fcc;
  *(float *)(param_6 + 0x28c) = afStack_1f0c[0x1b9];
  *(float *)(param_6 + 0x290) = fVar27;
  *(float *)(param_6 + 0x294) = fVar38;
  *(float *)(param_6 + 0x298) = fVar30;
  *(float *)(param_6 + 0x29c) = fVar33;
  auVar42 = vrev(*(undefined1 (*) [16])(param_6 + 0x290),4);
  *(float *)(param_6 + 0x278) = afStack_1f0c[0x1c3];
  *(float *)(param_6 + 0x27c) = afStack_1f0c[0x1c1];
  *(float *)(param_6 + 0x298) = afStack_1f0c[0x1b3];
  *(float *)(param_6 + 0x26c) = fStack_fac;
  *(float *)(param_6 + 0x26c) = afStack_1f0c[0x1c9];
  *(float *)(param_6 + 0x290) = afStack_1f0c[0x1b7];
  iVar3 = 0x778;
  *(float *)(param_6 + 0x270) = afStack_1f0c[0x1c7];
  *(float *)(param_6 + 0x274) = afStack_1f0c[0x1c5];
  *(float *)(param_6 + 0x294) = afStack_1f0c[0x1b5];
  auStack_fdc[0] = auVar42._8_8_;
  auStack_fdc[1] = auVar42._0_8_;
  *(float *)(param_6 + 0x29c) = afStack_1f0c[0x1b1];
  pfVar7 = afStack_82c;
  do {
    pfVar8 = (float *)((int)pfVar6 + iVar3);
    iVar3 = iVar3 + -8;
    *pfVar7 = *pfVar8;
    pfVar7 = pfVar7 + 1;
  } while (iVar3 != -8);
  afStack_7c[0] = 0.0;
  pauVar9 = (undefined1 (*) [16])afStack_82c;
  iVar3 = 0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar24 = *pfVar7;
    afStack_7c[0] = afStack_7c[0] + fVar24 * 0.0347;
    *pfVar7 = afStack_7c[0];
    afStack_7c[0] = fVar24 + afStack_7c[0] * -0.0347;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  fVar24 = 0.0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar19 = *pfVar7;
    fVar24 = fVar24 + fVar19 * 0.1544;
    *pfVar7 = fVar24;
    fVar24 = fVar19 + fVar24 * -0.1544;
  } while (iVar3 != 0x3c0);
  afStack_7c[2] = 0.0;
  iVar3 = 0;
  afStack_7c[1] = fVar24;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar19 = *pfVar7;
    afStack_7c[2] = afStack_7c[2] + fVar19 * 0.3826;
    *pfVar7 = afStack_7c[2];
    afStack_7c[2] = fVar19 + afStack_7c[2] * -0.3826;
  } while (iVar3 != 0x3c0);
  fVar19 = 0.0;
  iVar3 = 0;
  do {
    pfVar7 = (float *)(*pauVar9 + iVar3);
    iVar3 = iVar3 + 4;
    fVar15 = *pfVar7;
    fVar19 = fVar19 + fVar15 * 0.744;
    *pfVar7 = fVar19;
    fVar19 = fVar15 + fVar19 * -0.744;
  } while (iVar3 != 0x3c0);
  puVar10 = auStack_178c;
  afStack_7c[3] = fVar19;
  iVar3 = 0x410;
  do {
    auVar42 = *pauVar9;
    pauVar9 = pauVar9 + 1;
    iVar4 = iVar3 + -0x10;
    auVar42 = vrev(auVar42,4);
    *(longlong *)((int)puVar10 + iVar3) = auVar42._8_8_;
    *(longlong *)((int)auStack_178c + iVar3 + 8) = auVar42._0_8_;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  iVar3 = 0;
  fVar15 = *(float *)(param_6 + 0x2d8);
  fVar17 = *(float *)(param_6 + 0x2c8);
  fVar21 = *(float *)(param_6 + 0x2c0);
  fVar26 = *(float *)(param_6 + 0x2dc);
  fVar16 = *(float *)(param_6 + 0x2a0);
  fVar20 = *(float *)(param_6 + 0x2cc);
  fVar23 = *(float *)(param_6 + 0x2c4);
  fVar25 = *(float *)(param_6 + 0x2a4);
  fVar40 = *(float *)(param_6 + 0x2ac);
  fVar34 = *(float *)(param_6 + 0x2d4);
  fVar37 = *(float *)(param_6 + 0x2a8);
  fVar29 = *(float *)(param_6 + 0x2b0);
  fVar32 = *(float *)(param_6 + 0x2b4);
  fVar39 = *(float *)(param_6 + 0x2b8);
  fVar27 = *(float *)(param_6 + 700);
  fVar30 = *(float *)(param_6 + 0x2d0);
  fStack_1f2c = *(float *)(param_6 + 0x2fc);
  fStack_1f28 = *(float *)(param_6 + 0x2e0);
  fStack_1f24 = *(float *)(param_6 + 0x2e4);
  fStack_1f20 = *(float *)(param_6 + 0x2e8);
  fStack_1f1c = *(float *)(param_6 + 0x2ec);
  fStack_1f18 = *(float *)(param_6 + 0x2f0);
  fStack_1f14 = *(float *)(param_6 + 0x2f4);
  fStack_1f10 = *(float *)(param_6 + 0x2f8);
  do {
    pfVar7 = (float *)((int)&DAT_70086dc8 + iVar3);
    pfVar8 = (float *)((int)afStack_7c + iVar3);
    iVar3 = iVar3 + 4;
    fVar41 = *pfVar7;
    fVar38 = *pfVar8 + fVar41 * fVar16;
    fVar31 = (fVar16 - fVar41 * fVar38) + fVar41 * fVar25;
    fStack_1738 = (fVar25 - fVar41 * fVar31) + fVar41 * fVar37;
    fStack_173c = (fVar37 - fVar41 * fStack_1738) + fVar41 * fVar40;
    fStack_1740 = (fVar40 - fVar41 * fStack_173c) + fVar41 * fVar29;
    fStack_1744 = (fVar29 - fVar41 * fStack_1740) + fVar41 * fVar32;
    fStack_1748 = (fVar32 - fVar41 * fStack_1744) + fVar41 * fVar39;
    fStack_174c = (fVar39 - fVar41 * fStack_1748) + fVar41 * fVar27;
    fStack_1750 = (fVar27 - fVar41 * fStack_174c) + fVar41 * fVar21;
    fStack_1754 = (fVar21 - fVar41 * fStack_1750) + fVar41 * fVar23;
    fStack_1758 = (fVar23 - fVar41 * fStack_1754) + fVar41 * fVar17;
    fStack_175c = (fVar17 - fVar41 * fStack_1758) + fVar41 * fVar20;
    fStack_1760 = (fVar20 - fVar41 * fStack_175c) + fVar41 * fVar30;
    fStack_1764 = (fVar30 - fVar41 * fStack_1760) + fVar41 * fVar34;
    fStack_1768 = (fVar34 - fVar41 * fStack_1764) + fVar41 * fVar15;
    fStack_176c = (fVar15 - fVar41 * fStack_1768) + fVar41 * fVar26;
    fStack_1770 = (fVar26 - fVar41 * fStack_176c) + fVar41 * fStack_1f28;
    fStack_1774 = (fStack_1f28 - fVar41 * fStack_1770) + fVar41 * fStack_1f24;
    fStack_1778 = (fStack_1f24 - fVar41 * fStack_1774) + fVar41 * fStack_1f20;
    fStack_177c = (fStack_1f20 - fVar41 * fStack_1778) + fVar41 * fStack_1f1c;
    fVar36 = (fStack_1f1c - fVar41 * fStack_177c) + fVar41 * fStack_1f18;
    fVar33 = (fStack_1f18 - fVar41 * fVar36) + fVar41 * fStack_1f14;
    fVar35 = (fStack_1f14 - fVar41 * fVar33) + fVar41 * fStack_1f10;
    fVar28 = (fStack_1f10 - fVar41 * fVar35) + fVar41 * fStack_1f2c;
    *pfVar8 = fStack_1f2c - fVar41 * fVar28;
    fVar15 = fStack_1768;
    fVar17 = fStack_1758;
    fVar21 = fStack_1750;
    fVar26 = fStack_176c;
    fVar16 = fVar38;
    fVar20 = fStack_175c;
    fVar23 = fStack_1754;
    fVar25 = fVar31;
    fVar40 = fStack_173c;
    fVar34 = fStack_1764;
    fVar37 = fStack_1738;
    fVar29 = fStack_1740;
    fVar32 = fStack_1744;
    fVar39 = fStack_1748;
    fVar27 = fStack_174c;
    fVar30 = fStack_1760;
    fStack_1f2c = fVar28;
    fStack_1f28 = fStack_1770;
    fStack_1f24 = fStack_1774;
    fStack_1f20 = fStack_1778;
    fStack_1f1c = fStack_177c;
    fStack_1f18 = fVar36;
    fStack_1f14 = fVar33;
    fStack_1f10 = fVar35;
  } while (iVar3 != 0x10);
  *(float *)(param_6 + 0x2d0) = fStack_1760;
  *(float *)(param_6 + 0x2a0) = fVar38;
  *(float *)(param_6 + 0x2a4) = fVar31;
  uStack_1730 = *(undefined4 *)(param_6 + 0x2a0);
  *(float *)(param_6 + 0x2a0) = afStack_1f0c[0x1de];
  uStack_1734 = *(undefined4 *)(param_6 + 0x2a4);
  *(float *)(param_6 + 0x2a4) = afStack_1f0c[0x1dc];
  *(float *)(param_6 + 0x2a8) = fStack_1738;
  *(float *)(param_6 + 0x2ac) = fStack_173c;
  *(float *)(param_6 + 0x2b0) = fStack_1740;
  *(float *)(param_6 + 0x2a8) = afStack_1f0c[0x1da];
  *(float *)(param_6 + 0x2ac) = afStack_1f0c[0x1d8];
  *(float *)(param_6 + 0x2b0) = afStack_1f0c[0x1d6];
  *(float *)(param_6 + 700) = fStack_174c;
  *(float *)(param_6 + 0x2b4) = fStack_1744;
  *(float *)(param_6 + 0x2b4) = afStack_1f0c[0x1d4];
  *(float *)(param_6 + 0x2b8) = fStack_1748;
  *(float *)(param_6 + 0x2b8) = afStack_1f0c[0x1d2];
  *(float *)(param_6 + 700) = afStack_1f0c[0x1d0];
  *(float *)(param_6 + 0x2f4) = fVar33;
  *(float *)(param_6 + 0x2c0) = fStack_1750;
  *(float *)(param_6 + 0x2c0) = afStack_1f0c[0x1ce];
  *(float *)(param_6 + 0x2c4) = fStack_1754;
  *(float *)(param_6 + 0x2c4) = afStack_1f0c[0x1cc];
  *(float *)(param_6 + 0x2c8) = fStack_1758;
  *(float *)(param_6 + 0x2c8) = afStack_1f0c[0x1ca];
  *(float *)(param_6 + 0x2cc) = fStack_175c;
  *(float *)(param_6 + 0x2cc) = afStack_1f0c[0x1c8];
  *(float *)(param_6 + 0x2d0) = afStack_1f0c[0x1c6];
  *(float *)(param_6 + 0x2d4) = afStack_1f0c[0x1c4];
  *(float *)(param_6 + 0x2d8) = afStack_1f0c[0x1c2];
  *(float *)(param_6 + 0x2dc) = afStack_1f0c[0x1c0];
  *(float *)(param_6 + 0x2e0) = afStack_1f0c[0x1be];
  *(float *)(param_6 + 0x2e4) = afStack_1f0c[0x1bc];
  *(float *)(param_6 + 0x2e8) = afStack_1f0c[0x1ba];
  *(float *)(param_6 + 0x2ec) = fStack_177c;
  *(float *)(param_6 + 0x2ec) = afStack_1f0c[0x1b8];
  *(float *)(param_6 + 0x2f0) = fVar36;
  fVar15 = *(float *)(param_6 + 0x210) + afStack_7c[0] * -0.0017068604 + fVar24 * 0.0013678011 +
           afStack_7c[2] * -0.0011273653 + fVar19 * 0.00091257057;
  fVar24 = *(float *)(param_6 + 0x214) + afStack_7c[0] * -0.0011273653 + fVar24 * 0.00091257057 +
           afStack_7c[2] * 0.0010309428 + fVar19 * -0.00082615076;
  *(float *)(param_6 + 0x2f8) = fVar35;
  fVar19 = *(float *)(param_6 + 0x200) + fVar14 * -0.0015867851 + fVar18 * 0.0012715781 +
           fVar22 * -0.0010480568 + fVar13 * 0.00084837247;
  *(float *)(param_6 + 0x2fc) = fVar28;
  fVar14 = *(float *)(param_6 + 0x204) + fVar14 * -0.0010480568 + fVar18 * 0.00084837247 +
           fVar22 * 0.0013446799 + fVar13 * -0.0010775655;
  auVar43 = vrev(*(undefined1 (*) [16])(param_6 + 0x2f0),4);
  fVar18 = 0.0347;
  auVar1._16_16_ = auVar43;
  auVar1._0_16_ = auVar43;
  auVar42 = auVar1._8_16_;
  *(float *)(param_6 + 0x2f8) = afStack_1f0c[0x1b2];
  fVar22 = -0.0347;
  *(float *)(param_6 + 0x2f4) = afStack_1f0c[0x1b4];
  iVar3 = 0;
  *(float *)(param_6 + 0x2f0) = afStack_1f0c[0x1b6];
  auStack_178c[0] = auVar43._8_8_;
  auStack_178c[1] = auVar43._0_8_;
  *(float *)(param_6 + 0x2fc) = afStack_1f0c[0x1b0];
  do {
    pfVar7 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar13 = *pfVar7;
    fVar19 = fVar19 + fVar13 * 0.0347;
    *pfVar7 = fVar19;
    fVar19 = fVar13 + fVar19 * -0.0347;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  fVar26 = 0.744;
  fVar13 = -0.744;
  fVar17 = 0.3826;
  fVar21 = -0.3826;
  *(float *)(param_6 + 0x200) = fVar19;
  do {
    pfVar7 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar19 = *pfVar7;
    fVar14 = fVar14 + fVar19 * 0.3826;
    *pfVar7 = fVar14;
    fVar14 = fVar19 + fVar14 * -0.3826;
  } while (iVar3 != 0x3c0);
  *(float *)(param_6 + 0x204) = fVar14;
  iVar3 = 0;
  fVar14 = 0.1544;
  fVar19 = -0.1544;
  do {
    pfVar7 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar16 = *pfVar7;
    fVar15 = fVar15 + fVar16 * 0.1544;
    *pfVar7 = fVar15;
    fVar15 = fVar16 + fVar15 * -0.1544;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  *(float *)(param_6 + 0x210) = fVar15;
  do {
    pfVar7 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar15 = *pfVar7;
    fVar24 = fVar24 + fVar15 * 0.744;
    *pfVar7 = fVar24;
    fVar24 = fVar15 + fVar24 * -0.744;
  } while (iVar3 != 0x3c0);
  fVar15 = 0.5;
  iVar3 = 0;
  *(float *)(param_6 + 0x214) = fVar24;
  do {
    fVar24 = *(float *)((int)puVar10 + iVar3);
    fVar16 = *(float *)((int)puVar2 + iVar3);
    *(float *)(param_2 + iVar3) = (fVar16 + fVar24) * 0.5;
    pfVar7 = (float *)(param_3 + iVar3);
    iVar3 = iVar3 + 4;
    *pfVar7 = (fVar16 - fVar24) * 0.5;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  do {
    pfVar7 = (float *)0x380;
    pfVar8 = (float *)0x390;
    lVar12 = 2;
    pfVar11 = pfVar6;
    while( true ) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar8 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) break;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar7 = (float *)0x388;
    pfVar8 = (float *)0x398;
    lVar12 = 2;
    while( true ) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      *pfVar8 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) break;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar6 = pfVar6 + 8;
    *(undefined8 *)((int)puVar10 + iVar3) = auVar42._0_8_;
    ((undefined8 *)((int)puVar10 + iVar3))[1] = auVar42._8_8_;
    puVar5 = (undefined8 *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 0x10;
    *puVar5 = in_d18;
    puVar5[1] = in_d19;
  } while (iVar3 != 0x3c0);
  fVar24 = *(float *)(param_6 + 0x220);
  iVar3 = 0;
  do {
    pfVar6 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar16 = *pfVar6;
    fVar24 = fVar24 + fVar16 * fVar18;
    *pfVar6 = fVar24;
    fVar24 = fVar16 + fVar24 * fVar22;
  } while (iVar3 != 0x3c0);
  fVar18 = *(float *)(param_6 + 0x224);
  iVar3 = 0;
  *(float *)(param_6 + 0x220) = fVar24;
  do {
    pfVar6 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar22 = *pfVar6;
    fVar18 = fVar18 + fVar22 * fVar17;
    *pfVar6 = fVar18;
    fVar18 = fVar22 + fVar18 * fVar21;
  } while (iVar3 != 0x3c0);
  fVar22 = *(float *)(param_6 + 0x230);
  iVar3 = 0;
  *(float *)(param_6 + 0x224) = fVar18;
  do {
    pfVar6 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar6;
    fVar22 = fVar22 + fVar18 * fVar14;
    *pfVar6 = fVar22;
    fVar22 = fVar18 + fVar22 * fVar19;
  } while (iVar3 != 0x3c0);
  fVar14 = *(float *)(param_6 + 0x234);
  iVar3 = 0;
  *(float *)(param_6 + 0x230) = fVar22;
  do {
    pfVar6 = (float *)((int)puVar10 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar6;
    fVar14 = fVar14 + fVar18 * fVar26;
    *pfVar6 = fVar14;
    fVar14 = fVar18 + fVar14 * fVar13;
  } while (iVar3 != 0x3c0);
  iVar3 = 0;
  *(float *)(param_6 + 0x234) = fVar14;
  do {
    fVar14 = *(float *)((int)puVar10 + iVar3);
    pfVar6 = (float *)((int)puVar2 + iVar3);
    iVar3 = iVar3 + 4;
    fVar18 = *pfVar6;
    *param_4 = (double)((fVar18 + fVar14) * fVar15);
    param_4 = param_4 + 1;
    *param_5 = (double)((fVar18 - fVar14) * fVar15);
    param_5 = param_5 + 1;
  } while (iVar3 != 0x3c0);
  return;
}


// =========================================================================
// Function: thunk_nCLXwfkCwgKOmXUvu_aXrKeB
// Entry: 0x71e09520 | Size: 1 bytes
// =========================================================================

void thunk_nCLXwfkCwgKOmXUvu_aXrKeB
               (int param_1,undefined4 param_2,int param_3,double *param_4,double *param_5)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  double *pdVar18;
  double *pdVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint in_fpscr;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined8 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined8 uStack_63b0;
  double adStack_63a8 [2];
  undefined1 auStack_6398 [456];
  double adStack_61d0 [205];
  double adStack_5b68 [24];
  undefined1 auStack_5aa8 [1728];
  undefined1 auStack_53e8 [192];
  double adStack_5328 [24];
  undefined1 auStack_5268 [1728];
  undefined1 auStack_4ba8 [192];
  undefined1 auStack_4ae8 [1912];
  undefined8 uStack_4370;
  double adStack_4368 [240];
  double adStack_3be8 [10];
  double adStack_3b98 [10];
  int aiStack_3b44 [10];
  double *apdStack_3b1c [12];
  double *apdStack_3aec [10];
  undefined1 *puStack_3ac4;
  undefined1 *puStack_3ac0;
  undefined1 *puStack_3abc;
  double adStack_3ab8 [217];
  undefined1 auStack_33f0 [376];
  double adStack_3278 [22];
  undefined1 auStack_31c8 [552];
  undefined1 auStack_2fa0 [552];
  undefined1 auStack_2d78 [552];
  undefined1 auStack_2b50 [280];
  double adStack_2a38 [34];
  undefined1 auStack_2928 [552];
  undefined1 auStack_2700 [552];
  undefined1 auStack_24d8 [552];
  undefined1 auStack_22b0 [16];
  double adStack_22a0 [21];
  double adStack_21f8 [46];
  undefined1 auStack_2088 [552];
  undefined1 auStack_1e60 [552];
  undefined1 auStack_1c38 [552];
  undefined1 auStack_1a10 [88];
  double adStack_19b8 [58];
  undefined1 auStack_17e8 [552];
  undefined1 auStack_15c0 [552];
  undefined1 auStack_1398 [552];
  undefined1 auStack_1170 [552];
  undefined1 auStack_f48 [552];
  undefined1 auStack_d20 [96];
  double adStack_cc0 [57];
  undefined1 auStack_af8 [104];
  double adStack_a90 [56];
  undefined1 auStack_8d0 [552];
  undefined1 auStack_6a8 [552];
  double adStack_480 [9];
  undefined1 auStack_438 [8];
  double adStack_430 [64];
  undefined1 auStack_230 [8];
  double adStack_228 [56];
  
  dVar46 = *(double *)(param_3 + 0x268);
  dVar47 = *(double *)(param_3 + 0x270);
  iVar16 = 0;
  do {
    pdVar11 = (double *)(param_1 + iVar16);
    dVar52 = *pdVar11;
    dVar53 = dVar47 + dVar52;
    dVar47 = dVar46 + dVar52 * -1.9952459171827 + dVar53 * 1.86864659625574;
    *(double *)(param_3 + 0x270) = dVar47;
    pdVar18 = (double *)((int)adStack_4368 + iVar16);
    iVar16 = iVar16 + 8;
    dVar46 = dVar53 * -0.8836 + *pdVar11 * 0.996004;
    *pdVar18 = dVar53;
    *(double *)(param_3 + 0x268) = dVar46;
  } while (iVar16 != 0x780);
  imp___aeabi_memcpy8(adStack_5328,param_3 + 0x278,0xc0);
  thunk_qxHBnCSmZGiIrYgSwaqfGJtkUk(adStack_4368,auStack_4ae8,auStack_5268,param_3 + 0x1048);
  imp___aeabi_memcpy8(param_3 + 0x278,auStack_4ba8,0xc0);
  puStack_3abc = auStack_6a8;
  puStack_3ac0 = auStack_8d0;
  apdStack_3aec[4] = (double *)auStack_17e8;
  dVar46 = *(double *)(param_3 + 0xa10);
  apdStack_3aec[5] = (double *)auStack_15c0;
  dVar47 = *(double *)(param_3 + 0xa18);
  apdStack_3aec[7] = (double *)auStack_1170;
  apdStack_3aec[6] = (double *)auStack_1398;
  apdStack_3aec[3] = (double *)auStack_1a10;
  apdStack_3b1c[8] = (double *)auStack_2928;
  apdStack_3aec[9] = (double *)auStack_d20;
  apdStack_3b1c[9] = (double *)auStack_2700;
  apdStack_3aec[8] = (double *)auStack_f48;
  apdStack_3b1c[0xb] = (double *)auStack_22b0;
  apdStack_3b1c[10] = (double *)auStack_24d8;
  puStack_3ac4 = auStack_af8;
  apdStack_3aec[1] = (double *)auStack_1e60;
  apdStack_3b1c[7] = (double *)auStack_2b50;
  apdStack_3b1c[1] = adStack_3ab8 + 0x4f;
  apdStack_3aec[0] = (double *)auStack_2088;
  apdStack_3aec[2] = (double *)auStack_1c38;
  apdStack_3b1c[3] = (double *)auStack_33f0;
  apdStack_3b1c[2] = adStack_3ab8 + 0x94;
  apdStack_3b1c[5] = (double *)auStack_2fa0;
  apdStack_3b1c[6] = (double *)auStack_2d78;
  apdStack_3b1c[4] = (double *)auStack_31c8;
  apdStack_3b1c[0] = adStack_3ab8 + 10;
  imp___aeabi_memclr8(adStack_3ab8,0x3638);
  pdVar18 = adStack_63a8;
  imp___aeabi_memcpy8(pdVar18,param_3,0x240);
  pdVar19 = adStack_5b68;
  pdVar12 = adStack_5b68 + 1;
  imp___aeabi_memcpy8(pdVar12,auStack_4ae8,0x778);
  dVar52 = *(double *)(param_3 + 0x240);
  uVar7 = 0xfffffffe;
  adStack_5b68[0] = *(double *)(param_3 + 0x260);
  *(undefined8 *)(param_3 + 0x260) = uStack_4370;
  pdVar11 = pdVar12;
  do {
    dVar53 = *pdVar11;
    uVar7 = uVar7 + 2;
    dVar52 = dVar52 + dVar53 * 0.0347;
    *pdVar11 = dVar52;
    pdVar11 = pdVar11 + 2;
    dVar52 = dVar53 + dVar52 * -0.0347;
  } while (uVar7 < 0xee);
  dVar53 = *(double *)(param_3 + 0x248);
  uVar7 = 0xfffffffe;
  *(double *)(param_3 + 0x240) = dVar52;
  do {
    dVar52 = *pdVar12;
    uVar7 = uVar7 + 2;
    dVar53 = dVar53 + dVar52 * 0.3826;
    *pdVar12 = dVar53;
    pdVar12 = pdVar12 + 2;
    dVar53 = dVar52 + dVar53 * -0.3826;
  } while (uVar7 < 0xee);
  dVar52 = *(double *)(param_3 + 0x250);
  uVar7 = 0xfffffffe;
  *(double *)(param_3 + 0x248) = dVar53;
  do {
    dVar53 = *pdVar19;
    uVar7 = uVar7 + 2;
    dVar52 = dVar52 + dVar53 * 0.1544;
    *pdVar19 = dVar52;
    pdVar19 = pdVar19 + 2;
    dVar52 = dVar53 + dVar52 * -0.1544;
  } while (uVar7 < 0xee);
  dVar53 = *(double *)(param_3 + 600);
  pdVar11 = adStack_5b68;
  uVar7 = 0xfffffffe;
  *(double *)(param_3 + 0x250) = dVar52;
  do {
    dVar52 = *pdVar11;
    uVar7 = uVar7 + 2;
    dVar53 = dVar53 + dVar52 * 0.744;
    *pdVar11 = dVar53;
    pdVar11 = pdVar11 + 2;
    dVar53 = dVar52 + dVar53 * -0.744;
  } while (uVar7 < 0xee);
  iVar16 = 0x240;
  *(double *)(param_3 + 600) = dVar53;
  pdVar11 = adStack_5b68 + 1;
  do {
    pdVar19 = pdVar11 + -1;
    pdVar12 = (double *)((int)pdVar18 + iVar16);
    dVar52 = *pdVar11;
    iVar16 = iVar16 + 8;
    pdVar11 = pdVar11 + 2;
    *pdVar12 = *pdVar19 + dVar52;
  } while (iVar16 != 0x600);
  iVar16 = 0;
  do {
    iVar8 = iVar16 + 8;
    adStack_61d0[0xc] =
         *(double *)((int)adStack_61d0 + iVar16 + 0x68) +
         *(double *)((int)adStack_61d0 + iVar16 + 0x58) * -0.25 + adStack_61d0[0xc] * 0.75;
    *(double *)((int)adStack_61d0 + iVar16 + 0x68) = adStack_61d0[0xc];
    iVar16 = iVar8;
  } while (iVar8 != 0x3c0);
  imp___aeabi_memcpy8(param_3,adStack_61d0 + 0x3d,0x240);
  dVar53 = 0.0;
  dVar52 = 1e-13;
  iVar16 = 0;
  do {
    iVar8 = iVar16 + 8;
    dVar48 = *(double *)((int)pdVar18 + iVar16);
    dVar52 = dVar52 + dVar48 * dVar48;
    dVar53 = dVar53 + *(double *)((int)adStack_61d0 + iVar16 + 0x68) * dVar48;
    iVar16 = iVar8;
  } while (iVar8 != 0x1e0);
  pdVar19 = adStack_430 + 0x37;
  puVar9 = auStack_6398;
  pdVar11 = adStack_228 + 0x36;
  iVar16 = 1;
  adStack_228[0x36] = dVar53 / SQRT(dVar52);
  do {
    pdVar12 = (double *)(&uStack_63b0 + iVar16);
    dVar48 = adStack_61d0[0xd] * pdVar18[iVar16];
    dVar53 = 0.0;
    pdVar3 = adStack_61d0 + iVar16;
    iVar8 = 0;
    do {
      dVar53 = dVar53 + dVar48;
      iVar17 = iVar8 + 8;
      dVar48 = *(double *)((int)adStack_61d0 + iVar8 + 0x70) * *(double *)(puVar9 + iVar8);
      iVar8 = iVar17;
    } while (iVar17 != 0x1d8);
    iVar16 = iVar16 + 1;
    puVar9 = puVar9 + 8;
    dVar52 = (dVar52 - *pdVar12 * *pdVar12) + *pdVar3 * *pdVar3;
    pdVar11[-1] = (dVar53 + dVar48) / SQRT(dVar52);
    pdVar11 = pdVar11 + -1;
  } while (iVar16 != 0x41);
  dVar53 = 0.0;
  dVar52 = 1e-13;
  iVar16 = 0;
  do {
    iVar8 = iVar16 + 8;
    dVar48 = *(double *)((int)adStack_61d0 + iVar16 + 8);
    dVar52 = dVar52 + dVar48 * dVar48;
    dVar53 = dVar53 + *(double *)((int)adStack_61d0 + iVar16 + 0x248) * dVar48;
    iVar16 = iVar8;
  } while (iVar8 != 0x1e0);
  iVar16 = 1;
  pdVar11 = adStack_430 + 0x36;
  adStack_430[0x36] = dVar53 / SQRT(dVar52);
  do {
    pdVar12 = adStack_61d0 + iVar16;
    dVar48 = adStack_61d0[0x49] * adStack_61d0[iVar16 + 1];
    dVar53 = 0.0;
    iVar8 = iVar16 + 0x3c;
    iVar17 = 0x1f0;
    do {
      dVar53 = dVar53 + dVar48;
      iVar21 = iVar17 + 8;
      dVar48 = *(double *)((int)adStack_61d0 + iVar17 + 0x60) * *(double *)((int)pdVar18 + iVar17);
      iVar17 = iVar21;
    } while (iVar21 != 0x3c8);
    iVar16 = iVar16 + 1;
    pdVar18 = pdVar18 + 1;
    dVar52 = (dVar52 - *pdVar12 * *pdVar12) + adStack_61d0[iVar8] * adStack_61d0[iVar8];
    pdVar11[-1] = (dVar53 + dVar48) / SQRT(dVar52);
    pdVar11 = pdVar11 + -1;
  } while (iVar16 != 0x41);
  dVar46 = dVar46 * 0.5;
  dVar52 = (double)imp_log(SUB84(dVar46,0),(int)((ulonglong)dVar46 >> 0x20));
  iVar16 = 8;
  dVar46 = dVar47 * dVar47 * 4.0;
  uVar15 = in_fpscr & 0xfffffff | (uint)(dVar46 < 0.8) << 0x1f | (uint)(dVar46 == 0.8) << 0x1e;
  uVar7 = uVar15 | (uint)NAN(dVar46) << 0x1c;
  bVar4 = (byte)(uVar15 >> 0x18);
  if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
    dVar46 = 0.8;
  }
  do {
    uVar45 = VectorSignedToFloat(iVar16,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (double)imp_log((int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
    dVar53 = (dVar53 - dVar52) * (dVar53 - dVar52) * -5.0;
    dVar53 = (double)imp_exp(SUB84(dVar53,0),(int)((ulonglong)dVar53 >> 0x20));
    iVar16 = iVar16 + 1;
    *pdVar19 = *pdVar19 * (dVar46 * dVar53 + 1.0);
    pdVar19 = pdVar19 + 1;
  } while (iVar16 != 0x49);
  iVar8 = 0x1818;
  iVar17 = 0;
  iVar16 = 0;
  adStack_430[0x37] = adStack_430[0x37] * 0.2;
  adStack_228[0x34] = adStack_228[0x34] * 0.98;
  adStack_430[0x38] = adStack_430[0x38] * 0.5;
  adStack_430[0x39] = adStack_430[0x39] * 0.98;
  dVar46 = 0.0;
  adStack_228[0x36] = adStack_228[0x36] * 0.2;
  adStack_430[0x36] = adStack_430[0x36] * 0.2;
  adStack_228[0x35] = adStack_228[0x35] * 0.5;
  adStack_430[0x35] = adStack_430[0x35] * 0.5;
  adStack_480[0] = adStack_480[0] * 0.2;
  adStack_480[1] = adStack_480[1] * 0.5;
  adStack_480[2] = adStack_480[2] * 0.98;
  adStack_430[0x34] = adStack_430[0x34] * 0.98;
  do {
    pdVar11 = (double *)((int)adStack_480 + iVar17);
    iVar21 = iVar17 + 0x1b8;
    iVar17 = iVar17 + 8;
    dVar52 = *(double *)((int)adStack_430 + iVar21) + *pdVar11;
    uVar15 = uVar7 & 0xfffffff | (uint)(dVar52 < dVar46) << 0x1f | (uint)(dVar52 == dVar46) << 0x1e;
    uVar7 = uVar15 | (uint)(NAN(dVar52) || NAN(dVar46)) << 0x1c;
    *(double *)((int)adStack_3ab8 + iVar8) = dVar52;
    iVar21 = iVar8 + -0x50;
    iVar8 = iVar8 + 8;
    if (dVar46 < dVar52) {
      dVar46 = dVar52;
    }
    bVar4 = (byte)(uVar15 >> 0x18);
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      iVar16 = iVar21 >> 3;
    }
  } while (iVar17 != 0x208);
  iVar17 = 0;
  iVar8 = 0x17;
  do {
    dVar52 = (double)VectorSignedToFloat(iVar8,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (double)VectorSignedToFloat(iVar8 + -0xb,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (dVar53 / dVar52) * 0.2 * (2.0 - dVar53 / dVar52);
    dVar48 = (*(double *)((int)adStack_430 + iVar17 + 0x1b8) +
             *(double *)((int)adStack_430 + iVar17 + 8)) * dVar53;
    dVar53 = dVar53 * (*(double *)((int)adStack_228 + iVar17 + 8) +
                      *(double *)((int)adStack_480 + iVar17));
    dVar52 = dVar46;
    if (dVar46 < dVar48) {
      dVar52 = dVar48;
    }
    *(double *)((int)adStack_3ab8 + iVar17 + 0x60) = dVar48;
    uVar15 = uVar7 & 0xfffffff | (uint)(dVar53 < dVar52) << 0x1f | (uint)(dVar53 == dVar52) << 0x1e;
    uVar7 = uVar15 | (uint)(NAN(dVar53) || NAN(dVar52)) << 0x1c;
    *(double *)((int)adStack_a90 + iVar17) = dVar53;
    if (dVar46 < dVar48) {
      iVar16 = iVar17 + 0x10 >> 3;
    }
    bVar4 = (byte)(uVar15 >> 0x18);
    iVar21 = iVar17 + 0x2fd8;
    iVar17 = iVar17 + 8;
    dVar46 = dVar52;
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      iVar16 = iVar21 >> 3;
      dVar46 = dVar53;
    }
    iVar8 = iVar8 + 1;
  } while (iVar17 != 0x1b0);
  iVar17 = 0;
  iVar8 = 0x16;
  do {
    dVar52 = (double)VectorSignedToFloat(iVar8,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (double)VectorSignedToFloat(iVar8 + -10,(byte)(uVar7 >> 0x16) & 3);
    dVar53 = (dVar53 / dVar52) * 0.9 * (2.0 - dVar53 / dVar52);
    dVar48 = (*(double *)((int)adStack_430 + iVar17 + 0x1b8) +
             *(double *)((int)adStack_430 + iVar17)) * dVar53;
    dVar53 = dVar53 * (*(double *)((int)adStack_228 + iVar17) +
                      *(double *)((int)adStack_480 + iVar17));
    dVar52 = dVar46;
    if (dVar46 < dVar48) {
      dVar52 = dVar48;
    }
    *(double *)((int)adStack_3ab8 + iVar17 + 0x288) = dVar48;
    uVar15 = uVar7 & 0xfffffff | (uint)(dVar53 < dVar52) << 0x1f | (uint)(dVar53 == dVar52) << 0x1e;
    uVar7 = uVar15 | (uint)(NAN(dVar53) || NAN(dVar52)) << 0x1c;
    *(double *)((int)adStack_cc0 + iVar17) = dVar53;
    if (dVar46 < dVar48) {
      iVar16 = iVar17 + 0x238 >> 3;
    }
    bVar4 = (byte)(uVar15 >> 0x18);
    iVar21 = iVar17 + 0x2da8;
    iVar17 = iVar17 + 8;
    dVar46 = dVar52;
    if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
      iVar16 = iVar21 >> 3;
      dVar46 = dVar53;
    }
    iVar8 = iVar8 + 1;
  } while (iVar17 != 0x1b8);
  iVar23 = 8 - (int)adStack_3ab8;
  puVar20 = auStack_438;
  puVar9 = auStack_230;
  iVar17 = 2;
  iVar8 = 0x38;
  iVar21 = 0;
  iVar22 = 0x58;
  iVar25 = 0x1c0;
  do {
    pdVar11 = apdStack_3b1c[iVar17];
    pdVar18 = apdStack_3b1c[0x16 - iVar17];
    iVar24 = 0x15;
    iVar10 = 0;
    do {
      iVar13 = iVar21 + iVar24;
      iVar14 = iVar24 + -9;
      iVar24 = iVar24 + 1;
      dVar52 = (double)VectorSignedToFloat(iVar13,(byte)(uVar7 >> 0x16) & 3);
      dVar53 = (double)VectorSignedToFloat(iVar14,(byte)(uVar7 >> 0x16) & 3);
      dVar53 = (dVar53 / dVar52) * (2.0 - dVar53 / dVar52);
      dVar48 = (*(double *)((int)adStack_430 + iVar10 + 0x1b8) + *(double *)(puVar20 + iVar10)) *
               dVar53;
      dVar53 = dVar53 * (*(double *)(puVar9 + iVar10) + *(double *)((int)adStack_480 + iVar10));
      dVar52 = dVar46;
      if (dVar46 < dVar48) {
        dVar52 = dVar48;
      }
      *(double *)((int)pdVar11 + iVar10 + 0x10) = dVar48;
      uVar15 = uVar7 & 0xfffffff | (uint)(dVar53 < dVar52) << 0x1f |
               (uint)(dVar53 == dVar52) << 0x1e;
      uVar7 = uVar15 | (uint)(NAN(dVar53) || NAN(dVar52)) << 0x1c;
      *(double *)((int)pdVar18 + iVar10 + iVar22) = dVar53;
      if (dVar46 < dVar48) {
        iVar16 = (int)pdVar11 + iVar10 + (-0x40 - (int)adStack_3ab8) >> 3;
      }
      bVar4 = (byte)(uVar15 >> 0x18);
      iVar13 = iVar10 + iVar23;
      iVar10 = iVar10 + 8;
      dVar46 = dVar52;
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        iVar16 = (int)pdVar18 + iVar13 >> 3;
        dVar46 = dVar53;
      }
    } while (iVar25 != iVar10);
    iVar25 = iVar25 + 8;
    iVar22 = iVar22 + -8;
    iVar23 = iVar23 + -8;
    iVar8 = iVar8 + 1;
    iVar21 = iVar21 + -1;
    puVar20 = puVar20 + -8;
    puVar9 = puVar9 + -8;
    iVar17 = iVar17 + 1;
  } while (iVar8 != 0x41);
  dVar46 = dVar46 * 0.6;
  uStack_63b0._4_4_ = param_3 + 0x3f8;
  uVar15 = 1;
  iVar17 = 0;
  iVar8 = 0x33;
  do {
    iVar22 = (-0x30 - (int)adStack_3ab8) + (int)apdStack_3b1c[uVar15];
    pdVar11 = apdStack_3b1c[uVar15] + 4;
    iVar21 = iVar8;
    do {
      dVar52 = *pdVar11;
      uVar1 = uVar7 & 0xfffffff;
      uVar2 = uVar1 | (uint)(dVar52 < dVar46) << 0x1f | (uint)(dVar52 == dVar46) << 0x1e;
      uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar46)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
        dVar53 = pdVar11[-0x46];
        uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
        uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
          dVar53 = pdVar11[-0x45];
          uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
          uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
            dVar53 = pdVar11[0x45];
            uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
            uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
            bVar4 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
              dVar53 = pdVar11[0x46];
              uVar1 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
              uVar7 = uVar1 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
              bVar4 = (byte)(uVar1 >> 0x18);
              if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
                aiStack_3b44[iVar17] = iVar22 >> 3;
                iVar17 = iVar17 + 1;
                if (iVar17 == 10) goto LAB_71b2924c;
              }
            }
          }
        }
      }
      pdVar11 = pdVar11 + 1;
      iVar22 = iVar22 + 8;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    if (10 < uVar15) break;
    iVar8 = iVar8 + 1;
    uVar15 = uVar15 + 1;
  } while (iVar17 != 10);
  if (iVar17 == 10) {
LAB_71b2924c:
    iVar17 = 10;
  }
  else {
    uVar15 = 0xc;
    iVar8 = 0;
    do {
      pdVar11 = apdStack_3b1c[uVar15];
      iVar21 = iVar8;
      do {
        dVar52 = *(double *)((int)pdVar11 + iVar21 + 0x28);
        uVar1 = uVar7 & 0xfffffff;
        uVar2 = uVar1 | (uint)(dVar52 < dVar46) << 0x1f | (uint)(dVar52 == dVar46) << 0x1e;
        uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar46)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
          dVar53 = *(double *)((int)pdVar11 + iVar21 + -0x208);
          uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
          uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
            dVar53 = *(double *)((int)pdVar11 + iVar21 + -0x200);
            uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
            uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
            bVar4 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
              dVar53 = *(double *)((int)pdVar11 + iVar21 + 0x250);
              uVar2 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
              uVar7 = uVar2 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
              bVar4 = (byte)(uVar2 >> 0x18);
              if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
                dVar53 = *(double *)((int)pdVar11 + iVar21 + 600);
                uVar1 = uVar1 | (uint)(dVar52 < dVar53) << 0x1f | (uint)(dVar52 == dVar53) << 0x1e;
                uVar7 = uVar1 | (uint)(NAN(dVar52) || NAN(dVar53)) << 0x1c;
                bVar4 = (byte)(uVar1 >> 0x18);
                if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
                  aiStack_3b44[iVar17] = (int)pdVar11 + iVar21 + (-0x28 - (int)adStack_3ab8) >> 3;
                  iVar17 = iVar17 + 1;
                  if (iVar17 == 10) goto LAB_71b2924c;
                }
              }
            }
          }
        }
        iVar21 = iVar21 + 8;
      } while (iVar21 != 0x1e0);
      if (0x14 < uVar15) break;
      iVar8 = iVar8 + 8;
      uVar15 = uVar15 + 1;
    } while (iVar17 != 10);
    if (iVar17 < 1) {
      dVar46 = (double)VectorSignedToFloat(iVar16 % 0x45 + 6,(byte)(uVar7 >> 0x16) & 3);
      dVar52 = (double)VectorSignedToFloat(iVar16 / 0x45,(byte)(uVar7 >> 0x16) & 3);
      dVar52 = (dVar46 + 11.0) - dVar52;
      if (iVar16 % 0x45 < 0xe) {
        dVar46 = 20.0;
      }
      goto LAB_71b29900;
    }
  }
  pdVar11 = adStack_3be8;
  pdVar18 = adStack_3b98;
  pdVar19 = adStack_5b68;
  iVar16 = 0;
  do {
    iVar8 = aiStack_3b44[iVar16];
    dVar37 = adStack_4368[iVar8 + 0xd7];
    dVar48 = adStack_3ab8[iVar8 + 9];
    dVar34 = adStack_4368[iVar8 + 0xd8];
    dVar57 = (adStack_3ab8 + 10)[iVar8];
    dVar32 = adStack_4368[iVar8 + 0xd9];
    dVar60 = adStack_3ab8[iVar8 + 0xb];
    dVar53 = adStack_4368[iVar8 + 0xda];
    dVar36 = adStack_3ab8[iVar8 + 0x4c];
    dVar27 = adStack_4368[iVar8 + 0xdb];
    dVar51 = adStack_3ab8[iVar8 + 0x4d];
    dVar31 = adStack_4368[iVar8 + 0xdc];
    dVar52 = dVar57 * 0.6008648410116 +
             adStack_3ab8[iVar8 + 7] * -0.0006755602864 + adStack_3ab8[iVar8 + 8] * 0.02184247643159
             + dVar48 * -0.12203175715679 + dVar60 * 0.6008648410116 +
             adStack_3ab8[iVar8 + 0xc] * -0.12203175715679 +
             adStack_3ab8[iVar8 + 0xd] * 0.02184247643159 +
             adStack_3ab8[iVar8 + 0xe] * -0.0006755602864;
    dVar49 = adStack_3ab8[iVar8 + 0x4e];
    dVar54 = adStack_4368[iVar8 + 0xdd];
    dVar29 = adStack_3ab8[iVar8 + 0x4f];
    dVar39 = adStack_4368[iVar8 + 0xde];
    dVar30 = dVar37 * -0.0006755602864 + dVar34 * 0.02184247643159 + dVar32 * -0.12203175715679 +
             dVar53 * 0.6008648410116 + dVar27 * 0.6008648410116 + dVar31 * -0.12203175715679 +
             dVar54 * 0.02184247643159 + dVar39 * -0.0006755602864;
    dVar58 = dVar57 * 0.6008648410116 +
             adStack_3ab8[iVar8 + 6] * -0.0006755602864 + adStack_3ab8[iVar8 + 7] * 0.02184247643159
             + adStack_3ab8[iVar8 + 8] * -0.12203175715679 + dVar48 * 0.6008648410116 +
             dVar60 * -0.12203175715679 + adStack_3ab8[iVar8 + 0xc] * 0.02184247643159 +
             adStack_3ab8[iVar8 + 0xd] * -0.0006755602864;
    dVar59 = adStack_3ab8[iVar8 + 0x50];
    uVar7 = uVar7 & 0xfffffff;
    dVar42 = adStack_3ab8[iVar8 + 0x51];
    dVar41 = adStack_3ab8[iVar8 + 0x52];
    dVar46 = dVar30;
    if (dVar30 < dVar58) {
      dVar46 = dVar58;
    }
    uVar15 = uVar7 | (uint)(dVar52 < dVar46) << 0x1f;
    dVar43 = adStack_3ab8[iVar8 + 0x53];
    dVar56 = (double)VectorSignedToFloat(iVar8 % 0x45 + 6,(byte)(uVar15 >> 0x16) & 3);
    dVar28 = dVar36 * -0.0006755602864 + dVar51 * 0.02184247643159 + dVar49 * -0.12203175715679 +
             dVar29 * 0.6008648410116 + dVar59 * 0.6008648410116 + dVar42 * -0.12203175715679 +
             dVar41 * 0.02184247643159 + dVar43 * -0.0006755602864;
    if (dVar52 != dVar46 && SUB41(uVar15 >> 0x1f,0) == (NAN(dVar52) || NAN(dVar46))) {
      dVar46 = dVar52;
    }
    uVar15 = uVar7 | (uint)(dVar28 < dVar46) << 0x1f;
    dVar33 = (double)VectorSignedToFloat(iVar8 / 0x45,(byte)(uVar15 >> 0x16) & 3);
    if (dVar28 != dVar46 && SUB41(uVar15 >> 0x1f,0) == (NAN(dVar28) || NAN(dVar46))) {
      dVar46 = dVar28;
    }
    dVar33 = (dVar56 + 11.0) - dVar33;
    uVar15 = uVar7 | (uint)(dVar57 < dVar46) << 0x1f;
    *pdVar18 = dVar56;
    *pdVar11 = dVar33;
    dVar26 = dVar58;
    dVar35 = dVar27;
    dVar38 = dVar59;
    dVar40 = dVar29;
    dVar44 = dVar53;
    dVar50 = dVar30;
    dVar55 = dVar57;
    if (dVar57 == dVar46 || SUB41(uVar15 >> 0x1f,0) != (NAN(dVar57) || NAN(dVar46))) {
      uVar15 = uVar7;
      if (dVar30 == dVar46) {
        dVar46 = adStack_4368[iVar8 + 0x92];
        dVar33 = dVar33 + 0.5;
        dVar31 = adStack_4368[iVar8 + 0x91];
        dVar34 = adStack_4368[iVar8 + 0x93];
        dVar37 = adStack_4368[iVar8 + 0x94];
        dVar50 = adStack_4368[iVar8 + 0x95];
        dVar39 = dVar50 * 0.6008648410116;
        dVar48 = adStack_4368[iVar8 + 0x96];
        dVar36 = adStack_4368[iVar8 + 0x97];
        dVar32 = adStack_4368[iVar8 + 0x98];
        dVar56 = dVar56 + -0.5;
        dVar29 = adStack_4368[iVar8 + 0x99];
        *pdVar11 = dVar33;
        *pdVar18 = dVar56;
        dVar26 = dVar53;
        dVar35 = dVar39 + dVar46 * -0.0006755602864 + dVar34 * 0.02184247643159 +
                          dVar37 * -0.12203175715679 + dVar48 * 0.6008648410116 +
                 dVar36 * -0.12203175715679 + dVar32 * 0.02184247643159 + dVar29 * -0.0006755602864;
        dVar38 = dVar52;
        dVar40 = dVar58;
        dVar44 = dVar39 + dVar31 * -0.0006755602864 + dVar46 * 0.02184247643159 +
                          dVar34 * -0.12203175715679 + dVar37 * 0.6008648410116 +
                 dVar48 * -0.12203175715679 + dVar36 * 0.02184247643159 + dVar32 * -0.0006755602864;
        dVar55 = dVar30;
        dVar28 = dVar57;
        dVar52 = dVar27;
      }
      else if (dVar58 == dVar46) {
        dVar46 = adStack_3ab8[iVar8 + 0x4b];
        dVar52 = adStack_4368[iVar8 + 0xd6];
        dVar33 = dVar33 + -0.5;
        dVar56 = dVar56 + -0.5;
        *pdVar11 = dVar33;
        *pdVar18 = dVar56;
        dVar26 = dVar48;
        dVar35 = dVar30;
        dVar38 = dVar28;
        dVar40 = dVar46 * -0.0006755602864 + dVar36 * 0.02184247643159 + dVar51 * -0.12203175715679
                 + dVar49 * 0.6008648410116 + dVar29 * 0.6008648410116 + dVar59 * -0.12203175715679
                 + dVar42 * 0.02184247643159 + dVar41 * -0.0006755602864;
        dVar44 = dVar52 * -0.0006755602864 + dVar37 * 0.02184247643159 + dVar34 * -0.12203175715679
                 + dVar32 * 0.6008648410116 + dVar53 * 0.6008648410116 + dVar27 * -0.12203175715679
                 + dVar31 * 0.02184247643159 + dVar54 * -0.0006755602864;
        dVar50 = dVar53;
        dVar55 = dVar58;
        dVar28 = dVar29;
        dVar52 = dVar57;
      }
      else {
        dVar56 = dVar56 + 0.5;
        *pdVar18 = dVar56;
        if (dVar52 == dVar46) {
          dVar33 = dVar33 + 0.5;
          dVar46 = adStack_3ab8[iVar8 + 0x54];
          dVar48 = adStack_4368[iVar8 + 0xdf];
          *pdVar11 = dVar33;
          dVar26 = dVar57;
          dVar35 = dVar34 * -0.0006755602864 + dVar32 * 0.02184247643159 +
                   dVar53 * -0.12203175715679 + dVar27 * 0.6008648410116 + dVar31 * 0.6008648410116
                   + dVar54 * -0.12203175715679 + dVar39 * 0.02184247643159 +
                   dVar48 * -0.0006755602864;
          dVar38 = dVar51 * -0.0006755602864 + dVar49 * 0.02184247643159 +
                   dVar29 * -0.12203175715679 + dVar59 * 0.6008648410116 + dVar42 * 0.6008648410116
                   + dVar41 * -0.12203175715679 + dVar43 * 0.02184247643159 +
                   dVar46 * -0.0006755602864;
          dVar40 = dVar28;
          dVar44 = dVar30;
          dVar50 = dVar27;
          dVar55 = dVar52;
          dVar28 = dVar59;
          dVar52 = dVar60;
        }
        else {
          dVar33 = dVar33 + -0.5;
          dVar53 = adStack_3ab8[iVar8 + 0x92];
          dVar32 = adStack_3ab8[iVar8 + 0x91];
          dVar36 = adStack_3ab8[iVar8 + 0x93];
          dVar48 = adStack_3ab8[iVar8 + 0x94];
          dVar46 = adStack_3ab8[iVar8 + 0x95];
          dVar37 = dVar46 * 0.6008648410116;
          dVar30 = adStack_3ab8[iVar8 + 0x96];
          dVar27 = adStack_3ab8[iVar8 + 0x97];
          dVar34 = adStack_3ab8[iVar8 + 0x98];
          dVar31 = adStack_3ab8[iVar8 + 0x99];
          *pdVar11 = dVar33;
          dVar26 = dVar29;
          dVar35 = dVar52;
          dVar38 = dVar37 + dVar53 * -0.0006755602864 + dVar36 * 0.02184247643159 +
                            dVar48 * -0.12203175715679 + dVar30 * 0.6008648410116 +
                   dVar27 * -0.12203175715679 + dVar34 * 0.02184247643159 +
                   dVar31 * -0.0006755602864;
          dVar40 = dVar37 + dVar32 * -0.0006755602864 + dVar53 * 0.02184247643159 +
                            dVar36 * -0.12203175715679 + dVar48 * 0.6008648410116 +
                   dVar30 * -0.12203175715679 + dVar27 * 0.02184247643159 +
                   dVar34 * -0.0006755602864;
          dVar44 = dVar58;
          dVar50 = dVar57;
          dVar55 = dVar28;
          dVar28 = dVar46;
          dVar52 = dVar59;
        }
      }
    }
    dVar53 = (dVar38 + dVar44) * 0.5 - dVar55;
    dVar46 = (dVar35 + dVar40) * 0.5 - dVar55;
    dVar48 = (((dVar52 + dVar50 + dVar28 + dVar26 + dVar55 * -4.0) - dVar53) - dVar46) * -0.5;
    dVar53 = dVar48 - dVar53;
    uVar15 = uVar15 & 0xfffffff;
    uVar7 = uVar15 | (uint)(dVar53 < 1e-07) << 0x1f;
    if (!SUB41(uVar7 >> 0x1f,0)) {
      dVar48 = dVar48 - dVar46;
      dVar46 = (((dVar52 + dVar26) - dVar50) - dVar28) * -0.5;
      uVar7 = uVar15 | (uint)(dVar53 * dVar48 - dVar46 * dVar46 < 1e-07) << 0x1f;
      if (!SUB41(uVar7 >> 0x1f,0)) {
        dVar53 = SQRT(dVar53);
        dVar46 = dVar46 / dVar53;
        dVar27 = (((dVar52 + dVar28) - dVar26) - dVar50) * 0.5;
        dVar29 = dVar27 / dVar53;
        dVar52 = (((dVar52 + dVar50) - dVar26) - dVar28) * 0.5;
        dVar48 = SQRT(dVar48 - dVar46 * dVar46);
        dVar48 = ((dVar52 - dVar29 * dVar46) / dVar48) / dVar48;
        dVar53 = ((dVar29 - dVar48 * dVar46) * 0.5) / dVar53;
        dVar48 = dVar48 * 0.5;
        dVar46 = dVar48 * dVar48 + dVar53 * dVar53;
        uVar15 = uVar15 | (uint)(dVar46 < 1.0) << 0x1f | (uint)(dVar46 == 1.0) << 0x1e;
        uVar7 = uVar15 | (uint)NAN(dVar46) << 0x1c;
        bVar4 = (byte)(uVar15 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
          dVar48 = dVar48 / dVar46;
          dVar53 = dVar53 / dVar46;
        }
        dVar55 = dVar55 + (dVar52 * dVar48 + dVar27 * dVar53) * 0.5;
        *pdVar18 = dVar56 + dVar53;
        *pdVar11 = dVar33 + dVar48;
      }
    }
    iVar16 = iVar16 + 1;
    *pdVar19 = dVar55;
    pdVar19 = pdVar19 + 1;
    pdVar18 = pdVar18 + 1;
    pdVar11 = pdVar11 + 1;
  } while (iVar17 != iVar16);
  pdVar11 = adStack_3be8;
  pdVar19 = adStack_3b98;
  pdVar18 = adStack_5b68;
  dVar46 = 0.0;
  iVar16 = 0;
  do {
    dVar52 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    dVar53 = *pdVar19;
    pdVar19 = pdVar19 + 1;
    uVar45 = imp_log(SUB84(dVar53 + dVar52,0),(int)((ulonglong)(dVar53 + dVar52) >> 0x20));
    dVar53 = (double)imp_pow(0x33333333,0x3feb3333,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
    dVar52 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    if (dVar46 < dVar52 * dVar53) {
      dVar46 = dVar52 * dVar53;
      iVar8 = iVar16;
    }
    iVar16 = iVar16 + 1;
  } while (iVar17 != iVar16);
  dVar46 = adStack_3b98[iVar8] + adStack_3b98[iVar8];
  dVar52 = adStack_3be8[iVar8] + adStack_3be8[iVar8];
  if (dVar46 < 20.0) {
    dVar46 = 20.0;
  }
LAB_71b29900:
  iVar16 = 0;
  if (dVar52 < 20.0) {
    dVar52 = 20.0;
  }
  dVar53 = 0.0;
  if (140.0 < dVar46) {
    dVar46 = 140.0;
  }
  *param_4 = dVar46;
  param_4[1] = dVar46;
  if (140.0 < dVar52) {
    dVar52 = 140.0;
  }
  param_4[2] = dVar52;
  param_4[3] = dVar52;
  do {
    pdVar11 = (double *)((int)adStack_5328 + iVar16);
    iVar16 = iVar16 + 8;
    dVar53 = dVar53 + *pdVar11 * *pdVar11;
  } while (iVar16 != 0x840);
  *(undefined4 *)((int)param_5 + 4) = 0x3fd147ae;
  *(undefined4 *)(param_5 + 1) = 0x147ae148;
  *(undefined4 *)((int)param_5 + 0xc) = 0x3fd147ae;
  *(undefined4 *)((int)param_5 + 0x14) = 0x3fd147ae;
  *(undefined4 *)((int)param_5 + 0x1c) = 0x3fd147ae;
  *(undefined4 *)param_5 = 0x147ae148;
  *(undefined4 *)(param_5 + 2) = 0x147ae148;
  *(undefined4 *)(param_5 + 3) = 0x147ae148;
  dVar53 = 1.0 / dVar53;
  bVar6 = true;
  do {
    while( true ) {
      bVar5 = bVar6;
      thunk_MnR_waKhRqwoXyEKjxQALdOTK_MCQPF
                (adStack_5328,adStack_63a8,adStack_3ab8,uStack_63b0._4_4_,param_4,param_5);
      dVar46 = 0.0;
      iVar16 = 0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        pdVar18 = (double *)((int)adStack_63a8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar46 = dVar46 + *pdVar18 * *pdVar11;
      } while (iVar16 != 0x840);
      dVar52 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar52 = dVar52 + *(double *)((int)adStack_63a8 + iVar16) *
                          *(double *)((int)adStack_3278 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar48 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar48 = dVar48 + *(double *)((int)adStack_63a8 + iVar16) *
                          *(double *)((int)adStack_2a38 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar27 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar27 = dVar27 + *(double *)((int)adStack_63a8 + iVar16) *
                          *(double *)((int)adStack_21f8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      iVar16 = 0;
      dVar29 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar29 = dVar29 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x840);
      dVar30 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar30 = dVar30 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_3278 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      iVar16 = 0x840;
      dVar31 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar31 = dVar31 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x1080);
      dVar32 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar32 = dVar32 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_2a38 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar34 = 0.0;
      iVar16 = -0x840;
      do {
        iVar8 = iVar16 + 8;
        dVar34 = dVar34 + *(double *)((int)adStack_2a38 + iVar16) *
                          *(double *)((int)adStack_21f8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0);
      iVar16 = 0x1080;
      dVar36 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar36 = dVar36 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x18c0);
      dVar37 = 0.0;
      iVar16 = 0;
      do {
        iVar8 = iVar16 + 8;
        dVar37 = dVar37 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_21f8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x840);
      dVar39 = 0.0;
      iVar16 = 0x840;
      do {
        iVar8 = iVar16 + 8;
        dVar39 = dVar39 + *(double *)((int)adStack_3ab8 + iVar16) *
                          *(double *)((int)adStack_2a38 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0x1080);
      dVar41 = 0.0;
      iVar16 = -0x840;
      do {
        iVar8 = iVar16 + 8;
        dVar41 = dVar41 + *(double *)((int)adStack_21f8 + iVar16) *
                          *(double *)((int)adStack_19b8 + iVar16);
        iVar16 = iVar8;
      } while (iVar8 != 0);
      iVar16 = 0x18c0;
      dVar42 = 0.0;
      do {
        pdVar11 = (double *)((int)adStack_3ab8 + iVar16);
        iVar16 = iVar16 + 8;
        dVar42 = dVar42 + *pdVar11 * *pdVar11;
      } while (iVar16 != 0x2100);
      dVar58 = *param_5;
      dVar49 = param_5[1];
      dVar51 = 1.0 / (1.0 - dVar58);
      dVar57 = dVar51 * dVar51 * 0.005;
      dVar54 = 1.0 / (1.0 - dVar49);
      dVar51 = dVar53 * dVar29 + 2.0228571428571303 + (dVar51 + dVar51) * dVar57;
      dVar59 = (dVar53 * dVar30 + -0.8142857142857101) / dVar51;
      dVar30 = dVar54 * dVar54 * 0.005;
      dVar28 = param_5[2];
      dVar32 = dVar53 * dVar32 + -0.43714285714286993;
      dVar54 = (dVar53 * dVar31 + 1.97142857142858 + (dVar54 + dVar54) * dVar30) -
               dVar59 * dVar51 * dVar59;
      dVar29 = 1.0 / (1.0 - dVar28);
      dVar34 = ((dVar53 * dVar34 + -0.8142857142857101) - dVar59 * dVar32) / dVar54;
      dVar60 = dVar53 * dVar37 + 0.15428571428571;
      dVar31 = dVar29 * dVar29 * 0.005;
      dVar32 = dVar32 / dVar51;
      dVar37 = ((dVar53 * dVar39 + -0.17142857142858) - dVar59 * dVar60) / dVar54;
      dVar39 = param_5[3];
      dVar29 = (dVar53 * dVar36 + 2.0228571428571303 + (dVar29 + dVar29) * dVar31) -
               (dVar34 * dVar54 * dVar34 + dVar51 * dVar32 * dVar32);
      dVar57 = dVar57 + dVar53 * dVar46 +
                        (dVar49 * -0.27142857142857 +
                         dVar47 * -0.30857142857143 + dVar58 * 0.67428571428571 +
                         dVar28 * -0.14571428571429 + dVar39 * 0.05142857142857) * 3.0;
      dVar30 = dVar57 * dVar59 -
               (dVar30 + dVar53 * dVar52 +
                         (dVar47 * -0.05714285714286 + dVar58 * -0.27142857142857 +
                          dVar49 * 0.65714285714286 + dVar28 * -0.27142857142857 +
                         dVar39 * -0.05714285714286) * 3.0);
      dVar36 = dVar60 / dVar51;
      dVar43 = 1.0 / (1.0 - dVar39);
      dVar41 = (((dVar53 * dVar41 + -0.9257142857142899) - dVar32 * dVar60) -
               dVar54 * dVar34 * dVar37) / dVar29;
      dVar52 = -(dVar31 + dVar53 * dVar48 +
                          (dVar49 * -0.27142857142857 +
                           dVar47 * 0.05142857142857 + dVar58 * -0.14571428571429 +
                           dVar28 * 0.67428571428571 + dVar39 * -0.30857142857143) * 3.0) -
               (dVar34 * dVar30 - dVar57 * dVar32);
      dVar46 = dVar43 * dVar43 * 0.005;
      dVar46 = (-(dVar53 * dVar27 +
                  (dVar47 * 0.01714285714286 + dVar58 * 0.05142857142857 +
                   dVar49 * -0.05714285714286 + dVar28 * -0.30857142857143 +
                  dVar39 * 0.29714285714286) * 3.0 + dVar46 * 1.33) -
               ((dVar37 * dVar30 - dVar57 * dVar36) + dVar52 * dVar41)) /
               ((dVar53 * dVar42 + 0.8914285714285799 + dVar43 * 2.66 * dVar46) -
               (dVar37 * dVar54 * dVar37 + dVar51 * dVar36 * dVar36 + dVar29 * dVar41 * dVar41));
      dVar48 = dVar52 / dVar29 - dVar46 * dVar41;
      dVar52 = dVar30 / dVar54 - (dVar34 * dVar48 + dVar46 * dVar37);
      dVar58 = (-dVar57 / dVar51 - (dVar32 * dVar48 + dVar46 * dVar36 + dVar52 * dVar59)) + dVar58;
      *param_5 = dVar58;
      if (dVar58 <= 0.45) {
        if (dVar58 < 0.0) {
          *param_5 = 0.0;
        }
      }
      else {
        *param_5 = 0.45;
      }
      dVar52 = dVar52 + param_5[1];
      param_5[1] = dVar52;
      if (dVar52 <= 0.45) {
        if (dVar52 < 0.0) {
          param_5[1] = 0.0;
        }
      }
      else {
        param_5[1] = 0.45;
      }
      dVar48 = dVar48 + param_5[2];
      param_5[2] = dVar48;
      if (dVar48 <= 0.45) {
        if (dVar48 < 0.0) {
          param_5[2] = 0.0;
        }
      }
      else {
        param_5[2] = 0.45;
      }
      dVar46 = dVar46 + param_5[3];
      param_5[3] = dVar46;
      if (0.45 < dVar46) break;
      if (dVar46 < 0.0) {
        param_5[3] = 0.0;
      }
      bVar6 = false;
      if (!bVar5) goto LAB_71b29fc0;
    }
    param_5[3] = 0.45;
    bVar6 = false;
  } while (bVar5);
LAB_71b29fc0:
  thunk_PvEQpQDYDerMILfDiwDeUbRnq(adStack_5328,param_2,uStack_63b0._4_4_,param_4,param_5);
  imp___aeabi_memcpy8(adStack_5b68,param_3 + 0x338,0xc0);
  imp___aeabi_memcpy8(auStack_5aa8,param_1,0x780);
  thunk_AB_rfXjuATmnsolOTipdHupBtgSY(adStack_5b68,param_2,param_3 + 0xa20,param_4,param_5);
  imp___aeabi_memcpy8(param_3 + 0x338,auStack_53e8,0xc0);
  return;
}


// =========================================================================
// Function: thunk_ZBJDfkhbPfYMWdHknpw
// Entry: 0x71e09530 | Size: 1 bytes
// =========================================================================

void thunk_ZBJDfkhbPfYMWdHknpw(int param_1,double *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  uVar6 = param_4 + 1;
  iVar1 = 0;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar5 = 0;
  iVar2 = param_3;
  do {
    dVar8 = *param_2 * param_2[uVar5];
    dVar7 = 0.0;
    if (1 < param_3 - uVar5) {
      iVar3 = 1;
      pdVar4 = param_2;
      do {
        pdVar4 = pdVar4 + 1;
        dVar7 = dVar7 + dVar8;
        iVar3 = iVar3 + 1;
        dVar8 = *pdVar4 * *(double *)((int)pdVar4 + iVar1);
      } while (iVar2 != iVar3);
    }
    iVar3 = uVar5 * 8;
    uVar5 = uVar5 + 1;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + -1;
    *(double *)(param_1 + iVar3) = dVar7 + dVar8;
  } while (uVar5 != uVar6);
  return;
}


// =========================================================================
// Function: thunk_TUVjgQucjMseBddqfN
// Entry: 0x71e09540 | Size: 1 bytes
// =========================================================================

double thunk_TUVjgQucjMseBddqfN(undefined8 *param_1,double *param_2,double *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  *param_1 = 0x3ff0000000000000;
  if (1e-10 <= *param_3) {
    dVar14 = -param_3[1] / *param_3;
    *param_2 = dVar14;
    param_1[1] = dVar14;
    dVar14 = *param_3 + param_3[1] * *param_2;
    if (1 < param_4) {
      pdVar12 = (double *)(param_1 + 1);
      iVar1 = 1;
      uVar2 = 2;
      pdVar11 = pdVar12;
      pdVar5 = param_3;
      do {
        pdVar5 = pdVar5 + 1;
        iVar10 = iVar1 + 1;
        dVar15 = param_3[iVar10];
        uVar9 = uVar2 >> 1;
        iVar3 = iVar1;
        pdVar4 = pdVar12;
        pdVar6 = pdVar5;
        do {
          dVar17 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          iVar3 = iVar3 + -1;
          dVar16 = *pdVar6;
          pdVar6 = pdVar6 + -1;
          dVar15 = dVar15 + dVar17 * dVar16;
        } while (iVar3 != 0);
        pdVar8 = param_2 + iVar1;
        dVar16 = -dVar15 / dVar14;
        dVar14 = dVar14 + dVar16 * dVar15;
        *pdVar8 = dVar16;
        pdVar4 = pdVar11;
        pdVar6 = pdVar12;
        do {
          dVar17 = *pdVar4;
          uVar9 = uVar9 - 1;
          dVar15 = *pdVar6;
          dVar16 = *pdVar8;
          *pdVar4 = dVar17 + dVar16 * dVar15;
          pdVar4 = pdVar4 + -1;
          *pdVar6 = dVar15 + dVar16 * dVar17;
          pdVar6 = pdVar6 + 1;
        } while (uVar9 != 0);
        pdVar11 = pdVar11 + 1;
        param_1[iVar10] = *pdVar8;
        bVar13 = uVar2 != param_4;
        iVar1 = iVar10;
        uVar2 = uVar2 + 1;
      } while (bVar13);
    }
  }
  else {
    dVar14 = 0.0;
    if (param_4 != 0) {
      uVar2 = 0;
      if ((5 < param_4) && (0xf < (uint)((int)param_1 + (8 - (int)param_2)))) {
        uVar2 = param_4 & 0xfffffffe;
        puVar7 = param_1 + 1;
        pdVar5 = param_2;
        uVar9 = uVar2;
        do {
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *(undefined4 *)(pdVar5 + 1) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          *(undefined4 *)((int)pdVar5 + 0xc) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          pdVar5 = pdVar5 + 2;
          uVar9 = uVar9 - 2;
          *(undefined4 *)puVar7 = 0;
          *(undefined4 *)((int)puVar7 + 4) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *(undefined4 *)(puVar7 + 1) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          *(undefined4 *)((int)puVar7 + 0xc) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          puVar7 = puVar7 + 2;
        } while (uVar9 != 0);
        if (uVar2 == param_4) {
          return 0.0;
        }
      }
      param_2 = param_2 + uVar2;
      iVar1 = param_4 - uVar2;
      puVar7 = param_1 + uVar2;
      do {
        *(undefined4 *)param_2 = 0;
        iVar1 = iVar1 + -1;
        *(undefined4 *)((int)param_2 + 4) = 0;
        param_2 = param_2 + 1;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)((int)puVar7 + 0xc) = 0;
        puVar7 = puVar7 + 1;
      } while (iVar1 != 0);
    }
  }
  return dVar14;
}


