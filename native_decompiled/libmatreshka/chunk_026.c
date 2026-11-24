// =========================================================================
// Function: FUN_71adaee8
// Entry: 0x71adaee8 | Size: 444 bytes
// =========================================================================

void FUN_71adaee8(int *param_1,uint *param_2,uint param_3,int param_4,int param_5,char *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (param_5 - param_3) + (param_4 - (int)param_2) * 8;
  if (*param_6 == '\0') {
    if (param_3 != 0) {
      uVar7 = 0x20 - param_3;
      uVar5 = uVar8;
      if (uVar7 < uVar8) {
        uVar5 = uVar7;
      }
      uVar6 = 0xffffffffU >> (uVar7 - uVar5 & 0xff) & -1 << (param_3 & 0xff) & ~*param_2;
      if (uVar6 != 0) {
        bVar2 = (byte)uVar6;
        bVar3 = (byte)(uVar6 >> 8);
        bVar4 = (byte)(uVar6 >> 0x10);
        bVar1 = (byte)(uVar6 >> 0x18);
        *param_1 = (int)param_2;
        param_1[1] = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
        return;
      }
      if (uVar8 <= uVar7) goto LAB_71adb054;
      uVar8 = uVar8 - uVar5;
      param_2 = param_2 + 1;
    }
    for (; 0x1f < uVar8; uVar8 = uVar8 - 0x20) {
      if (*param_2 != 0xffffffff) {
        uVar5 = ~*param_2;
        goto LAB_71adb06c;
      }
      param_2 = param_2 + 1;
    }
    if (uVar8 == 0) goto LAB_71adb04c;
    uVar5 = ~*param_2 & 0xffffffffU >> (0x20 - uVar8 & 0xff);
  }
  else {
    if (param_3 != 0) {
      uVar7 = 0x20 - param_3;
      uVar5 = uVar8;
      if (uVar7 < uVar8) {
        uVar5 = uVar7;
      }
      uVar6 = 0xffffffffU >> (uVar7 - uVar5 & 0xff) & -1 << (param_3 & 0xff) & *param_2;
      if (uVar6 != 0) {
        bVar2 = (byte)uVar6;
        bVar3 = (byte)(uVar6 >> 8);
        bVar4 = (byte)(uVar6 >> 0x10);
        bVar1 = (byte)(uVar6 >> 0x18);
        *param_1 = (int)param_2;
        param_1[1] = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
        return;
      }
      if (uVar8 <= uVar7) {
LAB_71adb054:
        uVar5 = (param_4 - (int)param_2) * 8 + param_5;
        if ((int)uVar8 < 0) {
          uVar8 = (int)((uVar5 - 0x1f) + ((uint)((int)(uVar5 - 0x1f) >> 0x1f) >> 0x1b)) >> 5;
        }
        else {
          uVar8 = uVar5 >> 5;
        }
        *param_1 = (int)(param_2 + uVar8);
        param_1[1] = uVar5 & 0x1f;
        return;
      }
      uVar8 = uVar8 - uVar5;
      param_2 = param_2 + 1;
    }
    for (; 0x1f < uVar8; uVar8 = uVar8 - 0x20) {
      uVar5 = *param_2;
      if (uVar5 != 0) goto LAB_71adb06c;
      param_2 = param_2 + 1;
    }
    if (uVar8 == 0) goto LAB_71adb04c;
    uVar5 = *param_2 & 0xffffffffU >> (0x20 - uVar8 & 0xff);
  }
  if (uVar5 != 0) {
LAB_71adb06c:
    bVar2 = (byte)uVar5;
    bVar3 = (byte)(uVar5 >> 8);
    bVar4 = (byte)(uVar5 >> 0x10);
    bVar1 = (byte)(uVar5 >> 0x18);
    *param_1 = (int)param_2;
    param_1[1] = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1
                                          ) << 1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                 bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                             bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    return;
  }
LAB_71adb04c:
  *param_1 = (int)param_2;
  param_1[1] = uVar8;
  return;
}


// =========================================================================
// Function: bvwhjAfldhWetLksMlBJBacHIGkDLQEMuytxvDareJMybYdIMcWtjlYCXf
// Entry: 0x71adb0bc | Size: 196 bytes
// =========================================================================

undefined4 *
bvwhjAfldhWetLksMlBJBacHIGkDLQEMuytxvDareJMybYdIMcWtjlYCXf
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  *param_1 = param_2;
  thunk_ftqRNSDhkwBoMzKTuomTjyHCdlzfhJE_nSUSXkqIIxpttAVchQFzuoDNwLoMHvGhdnlasV
            (param_1 + 1,param_3 + 0xb0,param_4);
  thunk_aUGi_eHRMeigxvIwwTIvqlwtDbsLfmhRsCMcyKPoGIbGiBMRCyIfgljPTOBvaK_F
            (param_1 + 0xf,param_3,param_4);
  uVar3 = *(uint *)(param_3 + 0xc0);
  piVar4 = param_1 + 0x71;
  *piVar4 = 0;
  param_1[0x72] = 0;
  if (1 < uVar3) {
    iVar1 = thunk_MwhHq(0x19c);
    thunk_gq__MYXoHKmFtQZVnfLNdnSSCtYjNHMm_EaoQryhZDfYQvSAYobBjfGlcRkIoWMjrXPzKzc_
              (iVar1,param_3,param_4);
    iVar2 = *piVar4;
    *piVar4 = iVar1;
    if (iVar2 != 0) {
      thunk_AcNvTgbY_jAvWZjKmVXYTpRALvrXIeDMqWDtyZYmsjjl();
      thunk_qNQrlu();
    }
  }
  thunk_YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP(param_1 + 1);
  thunk_CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS(param_1 + 0xf);
  if (*piVar4 != 0) {
    thunk_WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia();
  }
  param_1[0x72] = 0;
  return param_1;
}


// =========================================================================
// Function: lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH
// Entry: 0x71adb1b8 | Size: 64 bytes
// =========================================================================

void lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH(int param_1,int param_2)

{
  thunk_YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP(param_1 + 4);
  thunk_CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    thunk_WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia();
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}


// =========================================================================
// Function: FVrnuECqHZfPSPTVdyTtSyNDiiFAU
// Entry: 0x71adb1f8 | Size: 64 bytes
// =========================================================================

int FVrnuECqHZfPSPTVdyTtSyNDiiFAU(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  if (iVar1 != 0) {
    thunk_AcNvTgbY_jAvWZjKmVXYTpRALvrXIeDMqWDtyZYmsjjl();
    thunk_qNQrlu();
  }
  thunk_irWpZQQGQerBaYWsLXsrxAFOj_ZBviKGBljg(param_1 + 0x3c);
  thunk_eFRo_tbtwxSfFIlMja_UKSGyANOwDUSmZIBDo(param_1 + 4);
  return param_1;
}


// =========================================================================
// Function: uTqbB_xGfxQpLeSLjgLLtvJPAxYAjyBxzcOogSCSUqYselHblzKvogqOUDieATgIpYVcOWJRhR_zcqcoytjs_BppYilGxEgHCWiQseBsgZfesNJScxNmZanDVBjgfwtMqLZdEFoMHVvKNvMuINaheoiexrNWbfqwMWmaFn_yvPSJASZtJZusmxLgvNfogayYe
// Entry: 0x71adb238 | Size: 336 bytes
// =========================================================================

void uTqbB_xGfxQpLeSLjgLLtvJPAxYAjyBxzcOogSCSUqYselHblzKvogqOUDieATgIpYVcOWJRhR_zcqcoytjs_BppYilGxEgHCWiQseBsgZfesNJScxNmZanDVBjgfwtMqLZdEFoMHVvKNvMuINaheoiexrNWbfqwMWmaFn_yvPSJASZtJZusmxLgvNfogayYe
               (uint *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[0x72];
  param_1[0x72] = uVar6 + 1;
  if (*param_1 <= uVar6 + 1) {
    thunk_OUDabdpoM_jZABGzYXYBAMeIrCneLIFzBbVSOTdjtlmEKZXZkGQSVzYubuZrWcKJIBuOQgOonjEkwbXncuqqSbVAyXAZwSHFHmKarEgkXJuoOjceyniIuHAKAUqKBLH_AzeWKbtDqbLIdwXF
              (param_1 + 0xf,param_5,param_6,param_7,param_8,param_9,param_10);
    if (param_1[0x71] != 0) {
      iVar1 = 0x14c;
      if ((char)param_1[0xf] == '\0') {
        iVar1 = 0x140;
      }
      piVar3 = (int *)((int)(param_1 + 0xf) + iVar1);
      iVar1 = *piVar3;
      uVar2 = param_1[0x5f];
      iVar4 = piVar3[1];
      uVar6 = 0;
      if (param_1[0x60] != uVar2) {
        uVar6 = uVar2;
      }
      iVar5 = 0;
      if (iVar4 != iVar1) {
        iVar5 = iVar1;
      }
      if (param_4 == 0) {
        param_3 = 0;
      }
      thunk_TqNXHYrF_vMIrYHwkanazXguSfDpqZfRzZaSqHpJOEFkSzwNrVbqTrqHFzwEGnxXQSyaCTUUuFLmquGlVZ_cwBVeUFqXwIevIQTgvzjxynImFXX_DFYieqTGjCeKiISIsQGKxggEWcvlPqqobcdcZkaGLZttKZPWmZdpxLAptrFaREJldlZXELLQpFllAypcjcoUhFEQWLPxSrZsLQYzkE
                (param_1[0x71],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar6
                 ,((int)(param_1[0x60] - uVar2) >> 2) * -0x3f03f03f,iVar5,
                 (iVar4 - iVar1 >> 2) * -0x3f03f03f,param_10);
    }
    thunk_aINgb_GVSYJDtEkOZPVtgrnIjEkFJtyucyfYfoJmJkzbwRJNaQbAtfXRkUmeBCrUPsSvlFdJjbXmkyMKdcwiBlAZWtTopegMmQTdtDXWyEJDjlxSzQhiBxocgwHctFMFmMmWHpBAjc_UU_zPChfG
              (param_1 + 1,param_5,0x41,param_6,param_7,param_8,param_9,param_10);
  }
  return;
}


// =========================================================================
// Function: OXkVpCMscgCHWjLLquekHdKZiyEVOuhEmZ_HzpoWkEwluxRxUPWmggPWpptIpHOHuNuVqPoxFzmmGWBANaTAMGPhMdFlFARinsoJSxHd
// Entry: 0x71adb388 | Size: 64 bytes
// =========================================================================

void OXkVpCMscgCHWjLLquekHdKZiyEVOuhEmZ_HzpoWkEwluxRxUPWmggPWpptIpHOHuNuVqPoxFzmmGWBANaTAMGPhMdFlFARinsoJSxHd
               (int param_1,undefined4 param_2)

{
  thunk_upxb_uAypxlpfKZluSdqBVWMYOwjFSIMBAcKDBohhfSMBgWPwhznNiSrYPpZIaBOeaSGHzOnlIKEbz_fgNYhDqbyiYWasqRxBResbUTiInbhzpCy
            (param_1 + 4);
  thunk_rmNoIuHyNvQhGxtEjAZy_KYojUfijNrlNqOVFXSMiTQGjFcxchIQf_LilMPPEoMgCdbxebsq_hywmdbIYOpoDkKJzXoLNDgiHvpBMODvrQtuhgf
            (param_1 + 0x3c,param_2);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    thunk_PLHwMbWvWiDzFHKKwgflkGjXUPmrpNmrWozWUdJBQCcbJkVuKQIhjDK_ZqfzwBLBTbWYWYtKmYDWvKTMNjvzlkcascELtnlmIZvtJEXnQQfVWFiDEPyEHXY
              (*(int *)(param_1 + 0x1c4),param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: ftqRNSDhkwBoMzKTuomTjyHCdlzfhJE_nSUSXkqIIxpttAVchQFzuoDNwLoMHvGhdnlasV
// Entry: 0x71adb7a0 | Size: 668 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 *
ftqRNSDhkwBoMzKTuomTjyHCdlzfhJE_nSUSXkqIIxpttAVchQFzuoDNwLoMHvGhdnlasV
          (undefined4 *param_1,float *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 *puStack_38;
  undefined1 uStack_34;
  
  uVar1 = thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY(*param_2 + 0.001);
  fVar14 = param_2[1];
  *param_1 = uVar1;
  uVar1 = thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY(fVar14 + 0.001);
  piVar12 = param_1 + 2;
  *piVar12 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  if (param_3 == 0) {
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
  }
  else {
    if (0x3fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_71a0f1b4(piVar12);
    }
    iVar13 = param_3 << 2;
    iVar2 = thunk_MwhHq(iVar13);
    iVar10 = iVar2 + param_3 * 4;
    param_1[4] = iVar10;
    param_1[2] = iVar2;
    imp___aeabi_memclr4(iVar2,iVar13);
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = iVar10;
    puVar3 = (undefined4 *)thunk_MwhHq(iVar13);
    puVar4 = puVar3 + param_3;
    uVar7 = param_3 - 1 & 0x3fffffff;
    uVar1 = *param_1;
    param_1[5] = puVar3;
    param_1[6] = puVar3;
    param_1[7] = puVar4;
    if (uVar7 < 3) {
LAB_71adb8d0:
      do {
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar4);
    }
    else {
      uVar7 = uVar7 + 1;
      uVar9 = uVar7 & 0xfffffffc;
      puVar8 = puVar3 + uVar9;
      uVar11 = uVar9;
      do {
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
        puVar3[2] = uVar1;
        puVar3[3] = uVar1;
        puVar3 = puVar3 + 4;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
      puVar3 = puVar8;
      if (uVar7 != uVar9) goto LAB_71adb8d0;
    }
    param_1[6] = puVar4;
  }
  puVar3 = &uStack_60;
  thunk_heYZnpOEMAPNdwIczGZUvZzrl_DyJpzIxxSjpJrDtZ_FLMmxYrmJeyqQSaXUmTwCFwxWWtg_fFkEfZeUUFrdVoTC
            (puVar3,param_2);
  puStack_38 = param_1 + 8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uStack_34 = 0;
  if (param_3 != 0) {
    if (0x71c71c7 < param_3) {
      FUN_71adcccc(puStack_38);
      goto LAB_71adba10;
    }
    iVar13 = param_3 * 0x24;
    puVar4 = (undefined4 *)thunk_MwhHq(iVar13);
    param_1[8] = puVar4;
    param_1[9] = puVar4;
    param_1[10] = puVar4 + param_3 * 9;
    puVar3 = puVar4;
    do {
      iVar13 = iVar13 + -0x24;
      *puVar3 = uStack_60;
      puVar3[1] = uStack_5c;
      puVar3[2] = uStack_58;
      puVar3[3] = uStack_54;
      *(undefined8 *)(puVar3 + 4) = uStack_50;
      *(undefined8 *)(puVar3 + 6) = uStack_48;
      puVar3[8] = uStack_40;
      puVar3 = puVar3 + 9;
    } while (iVar13 != 0);
    param_1[9] = puVar4 + param_3 * 9;
  }
  thunk_CSSWAsLANZJGgptLYAcNNxwezoIPBbkDieqC_IkrwKxu_DFafnAvFJEo(&uStack_60);
  puVar3 = param_1 + 0xb;
  *puVar3 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_3 != 0) {
    if (0x1fffffff < param_3) {
LAB_71adba10:
      FUN_71adcd34(puVar3);
      if (*piVar12 != 0) {
        param_1[3] = *piVar12;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    puVar5 = (undefined1 *)thunk_MwhHq(param_3 << 3);
    puVar6 = puVar5 + param_3 * 8;
    param_1[0xb] = puVar5;
    param_1[0xc] = puVar5;
    param_1[0xd] = puVar6;
    do {
      puVar5[4] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar6);
    param_1[0xc] = puVar6;
  }
  thunk_YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP(param_1);
  return param_1;
}


// =========================================================================
// Function: YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP
// Entry: 0x71adbaa0 | Size: 408 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void YLRPkDlYAVqAaeBXTpEpEAdefPyTjJtOEzIpePICP(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined4 uVar14;
  float in_s4;
  float fVar15;
  float fVar16;
  
  iVar6 = param_1[8];
  iVar9 = param_1[9];
  iVar1 = iVar6;
  if (iVar6 != iVar9) {
    do {
      if (*(char *)(iVar1 + 8) != '\0') {
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
      iVar3 = iVar1 + 0x24;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0xc1200000;
      *(undefined4 *)(iVar1 + 0x14) = 0x42040000;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      iVar1 = iVar3;
    } while (iVar3 != iVar9);
    if (iVar6 != iVar9) {
      iVar1 = 0;
      iVar9 = 0;
      uVar4 = 0;
      do {
        if (*(char *)(iVar6 + iVar1 + 8) == '\0') {
          uVar12 = 0;
          in_s4 = (float)((uint)in_s4 & 0xffffff00);
        }
        else {
          pcVar7 = (char *)(iVar6 + iVar1);
          uVar12 = 1;
          fVar15 = *(float *)(pcVar7 + 0xc);
          fVar16 = 0.0;
          if (0.0 < fVar15) {
            fVar16 = fVar15;
          }
          if (*pcVar7 == '\0') {
            fVar16 = fVar15;
          }
          in_s4 = 1.0;
          if (fVar16 < 1.0) {
            in_s4 = fVar16;
          }
          if (pcVar7[1] == '\0') {
            in_s4 = fVar16;
          }
        }
        iVar3 = param_1[0xb];
        iVar1 = iVar1 + 0x24;
        pfVar10 = (float *)(iVar3 + iVar9);
        iVar6 = uVar4 * 8;
        iVar9 = iVar9 + 8;
        uVar4 = uVar4 + 1;
        *pfVar10 = in_s4;
        *(undefined1 *)(iVar3 + iVar6 + 4) = uVar12;
        iVar6 = param_1[8];
      } while (uVar4 < (uint)((param_1[9] - iVar6 >> 2) * 0x38e38e39));
    }
  }
  puVar8 = (undefined4 *)param_1[5];
  uVar4 = param_1[6] - (int)puVar8 >> 2;
  if (0 < (int)uVar4) {
    uVar14 = *param_1;
    if (3 < uVar4) {
      uVar5 = uVar4 & 0x7ffffffc;
      puVar2 = puVar8 + uVar5;
      uVar11 = uVar5;
      do {
        *puVar8 = uVar14;
        puVar8[1] = uVar14;
        puVar8[2] = uVar14;
        puVar8[3] = uVar14;
        puVar8 = puVar8 + 4;
        uVar11 = uVar11 - 4;
      } while (uVar11 != 0);
      bVar13 = uVar4 == uVar5;
      puVar8 = puVar2;
      uVar4 = uVar4 & 3;
      if (bVar13) goto LAB_71adbc20;
    }
    *puVar8 = uVar14;
    if (1 < uVar4) {
      puVar8[1] = uVar14;
      if (uVar4 - 3 < 0xfffffffe) {
        puVar8[2] = uVar14;
      }
    }
  }
LAB_71adbc20:
  if (0 < (int)(param_1[3] - param_1[2])) {
    imp___aeabi_memclr4();
  }
  return;
}


// =========================================================================
// Function: eFRo_tbtwxSfFIlMja_UKSGyANOwDUSmZIBDo
// Entry: 0x71adbc54 | Size: 140 bytes
// =========================================================================

int eFRo_tbtwxSfFIlMja_UKSGyANOwDUSmZIBDo(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x2c);
    thunk_qNQrlu();
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar1 = iVar3;
    if (iVar2 != iVar3) {
      do {
        iVar2 = iVar2 + -0x24;
        thunk_CSSWAsLANZJGgptLYAcNNxwezoIPBbkDieqC_IkrwKxu_DFafnAvFJEo(iVar2);
      } while (iVar2 != iVar3);
      iVar1 = *(int *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x24) = iVar3;
    thunk_qNQrlu(iVar1);
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
// Function: QIhHcIdZp_PpMe_ZyVYkp_RnEImGwTJQbMMFhaYtzrPfG_jXpLSccXALOXzm
// Entry: 0x71adbce0 | Size: 48 bytes
// =========================================================================

void QIhHcIdZp_PpMe_ZyVYkp_RnEImGwTJQbMMFhaYtzrPfG_jXpLSccXALOXzm(int param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xc120000000000000;
  *(undefined8 *)(param_1 + 0x14) = 0x42040000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// =========================================================================
// Function: RwkiUpsgMizARYiSujGHtWQfTksawSnAzDOUVnPfXTIeUxwmGVNvZlKiJZQ
// Entry: 0x71adbd20 | Size: 212 bytes
// =========================================================================

void RwkiUpsgMizARYiSujGHtWQfTksawSnAzDOUVnPfXTIeUxwmGVNvZlKiJZQ(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  int iVar7;
  undefined1 uVar8;
  float in_s4;
  float fVar9;
  float fVar10;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x24) != iVar4) {
    iVar1 = 0;
    iVar3 = 0;
    uVar2 = 0;
    do {
      if (*(char *)(iVar4 + iVar3 + 8) == '\0') {
        uVar8 = 0;
        in_s4 = (float)((uint)in_s4 & 0xffffff00);
      }
      else {
        pcVar6 = (char *)(iVar4 + iVar3);
        uVar8 = 1;
        fVar9 = *(float *)(pcVar6 + 0xc);
        fVar10 = 0.0;
        if (0.0 < fVar9) {
          fVar10 = fVar9;
        }
        if (*pcVar6 == '\0') {
          fVar10 = fVar9;
        }
        in_s4 = 1.0;
        if (fVar10 < 1.0) {
          in_s4 = fVar10;
        }
        if (pcVar6[1] == '\0') {
          in_s4 = fVar10;
        }
      }
      iVar7 = *(int *)(param_1 + 0x2c);
      iVar3 = iVar3 + 0x24;
      pfVar5 = (float *)(iVar7 + iVar1);
      iVar1 = iVar1 + 8;
      *pfVar5 = in_s4;
      iVar4 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(iVar7 + iVar4 + 4) = uVar8;
      iVar4 = *(int *)(param_1 + 0x20);
    } while (uVar2 < (uint)((*(int *)(param_1 + 0x24) - iVar4 >> 2) * 0x38e38e39));
  }
  return;
}


// =========================================================================
// Function: aINgb_GVSYJDtEkOZPVtgrnIjEkFJtyucyfYfoJmJkzbwRJNaQbAtfXRkUmeBCrUPsSvlFdJjbXmkyMKdcwiBlAZWtTopegMmQTdtDXWyEJDjlxSzQhiBxocgwHctFMFmMmWHpBAjc_UU_zPChfG
// Entry: 0x71adbdf8 | Size: 1896 bytes
// =========================================================================

void aINgb_GVSYJDtEkOZPVtgrnIjEkFJtyucyfYfoJmJkzbwRJNaQbAtfXRkUmeBCrUPsSvlFdJjbXmkyMKdcwiBlAZWtTopegMmQTdtDXWyEJDjlxSzQhiBxocgwHctFMFmMmWHpBAjc_UU_zPChfG
               (float *param_1,float *param_2,int param_3,int param_4,uint param_5,int param_6,
               undefined4 param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  undefined1 uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s4;
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
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  
  if (param_5 != 0) {
    fVar9 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar8 = 0;
    do {
      while( true ) {
        iVar2 = param_3 << 2;
        fVar10 = 0.0;
        pfVar3 = param_2;
        iVar7 = param_3;
        if ((*(uint *)(*param_8 + (uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
          while (iVar7 != 0) {
            iVar2 = iVar2 + -4;
            fVar10 = fVar10 + *pfVar3;
            pfVar3 = pfVar3 + 1;
            iVar7 = iVar2;
          }
          if (fVar9 * 44015068.0 < fVar10) {
            pfVar3 = (float *)(param_6 + uVar8 * 0x104);
            pfVar6 = (float *)(param_4 + uVar8 * 0x104);
            fVar10 = *pfVar3;
            fVar136 = *pfVar6;
            fVar11 = pfVar3[1];
            fVar137 = pfVar6[1];
            fVar12 = pfVar3[2];
            fVar138 = pfVar6[2];
            fVar74 = pfVar3[3];
            fVar139 = pfVar6[3];
            fVar13 = pfVar3[4];
            fVar75 = pfVar6[4];
            fVar14 = pfVar3[5];
            fVar76 = pfVar6[5];
            fVar15 = pfVar3[6];
            fVar77 = pfVar6[6];
            fVar16 = pfVar3[7];
            fVar78 = pfVar6[7];
            fVar17 = pfVar3[8];
            fVar79 = pfVar6[8];
            fVar18 = pfVar3[9];
            fVar80 = pfVar6[9];
            fVar19 = pfVar3[10];
            fVar81 = pfVar6[10];
            fVar20 = pfVar3[0xb];
            fVar82 = pfVar6[0xb];
            fVar21 = pfVar3[0xc];
            fVar83 = pfVar6[0xc];
            fVar22 = pfVar3[0xd];
            fVar84 = pfVar6[0xd];
            fVar23 = pfVar3[0xe];
            fVar85 = pfVar6[0xe];
            fVar24 = pfVar3[0xf];
            fVar86 = pfVar6[0xf];
            fVar25 = pfVar3[0x10];
            fVar87 = pfVar6[0x10];
            fVar26 = pfVar3[0x11];
            fVar88 = pfVar6[0x11];
            fVar27 = pfVar3[0x12];
            fVar89 = pfVar6[0x12];
            fVar28 = pfVar3[0x13];
            fVar90 = pfVar6[0x13];
            fVar29 = pfVar3[0x14];
            fVar91 = pfVar6[0x14];
            fVar30 = pfVar3[0x15];
            fVar92 = pfVar6[0x15];
            fVar31 = pfVar3[0x16];
            fVar93 = pfVar6[0x16];
            fVar32 = pfVar3[0x17];
            fVar94 = pfVar6[0x17];
            fVar33 = pfVar3[0x18];
            fVar95 = pfVar6[0x18];
            fVar34 = pfVar3[0x19];
            fVar96 = pfVar6[0x19];
            fVar35 = pfVar3[0x1a];
            fVar97 = pfVar6[0x1a];
            fVar36 = pfVar3[0x1b];
            fVar98 = pfVar6[0x1b];
            fVar37 = pfVar3[0x1c];
            fVar99 = pfVar6[0x1c];
            fVar38 = pfVar3[0x1d];
            fVar100 = pfVar6[0x1d];
            fVar39 = pfVar3[0x1e];
            fVar101 = pfVar6[0x1e];
            fVar40 = pfVar3[0x1f];
            fVar102 = pfVar6[0x1f];
            fVar41 = pfVar3[0x20];
            fVar103 = pfVar6[0x20];
            fVar42 = pfVar3[0x21];
            fVar104 = pfVar6[0x21];
            fVar43 = pfVar3[0x22];
            fVar105 = pfVar6[0x22];
            fVar44 = pfVar3[0x23];
            fVar106 = pfVar6[0x23];
            fVar45 = pfVar3[0x24];
            fVar107 = pfVar6[0x24];
            fVar46 = pfVar3[0x25];
            fVar108 = pfVar6[0x25];
            fVar47 = pfVar3[0x26];
            fVar109 = pfVar6[0x26];
            fVar48 = pfVar3[0x27];
            fVar110 = pfVar6[0x27];
            fVar49 = pfVar3[0x28];
            fVar111 = pfVar6[0x28];
            fVar50 = pfVar3[0x29];
            fVar112 = pfVar6[0x29];
            fVar51 = pfVar3[0x2a];
            fVar113 = pfVar6[0x2a];
            fVar52 = pfVar3[0x2b];
            fVar114 = pfVar6[0x2b];
            fVar53 = pfVar3[0x2c];
            fVar115 = pfVar6[0x2c];
            fVar54 = pfVar3[0x2d];
            fVar116 = pfVar6[0x2d];
            fVar55 = pfVar3[0x2e];
            fVar117 = pfVar6[0x2e];
            fVar56 = pfVar3[0x2f];
            fVar118 = pfVar6[0x2f];
            fVar57 = pfVar3[0x30];
            fVar119 = pfVar6[0x30];
            fVar58 = pfVar3[0x31];
            fVar120 = pfVar6[0x31];
            fVar59 = pfVar3[0x32];
            fVar121 = pfVar6[0x32];
            fVar60 = pfVar3[0x33];
            fVar122 = pfVar6[0x33];
            fVar61 = pfVar3[0x34];
            fVar123 = pfVar6[0x34];
            fVar62 = pfVar3[0x35];
            fVar124 = pfVar6[0x35];
            fVar63 = pfVar3[0x36];
            fVar125 = pfVar6[0x36];
            fVar64 = pfVar3[0x37];
            fVar126 = pfVar6[0x37];
            fVar65 = pfVar3[0x38];
            fVar127 = pfVar6[0x38];
            fVar66 = pfVar3[0x39];
            fVar128 = pfVar6[0x39];
            fVar67 = pfVar3[0x3a];
            fVar129 = pfVar6[0x3a];
            fVar68 = pfVar3[0x3b];
            fVar130 = pfVar6[0x3b];
            fVar69 = pfVar3[0x3c];
            fVar131 = pfVar6[0x3c];
            fVar70 = pfVar3[0x3d];
            fVar132 = pfVar6[0x3d];
            fVar71 = pfVar3[0x3e];
            fVar133 = pfVar6[0x3e];
            fVar72 = pfVar3[0x3f];
            fVar134 = pfVar6[0x3f];
            fVar73 = pfVar3[0x40];
            fVar135 = pfVar6[0x40];
            iVar7 = (int)param_1[8] + uVar8 * 0x24;
            in_s4 = *(float *)(iVar7 + 0x18);
            iVar2 = *(int *)(iVar7 + 0x20) + 1;
            *(int *)(iVar7 + 0x20) = iVar2;
            fVar10 = fVar10 + 0.0 + fVar11 + fVar12 + fVar74 + fVar13 + fVar14 + fVar15 + fVar16 +
                     fVar17 + fVar18 + fVar19 + fVar20 + fVar21 + fVar22 + fVar23 + fVar24 + fVar25
                     + fVar26 + fVar27 + fVar28 + fVar29 + fVar30 + fVar31 + fVar32 + fVar33 +
                     fVar34 + fVar35 + fVar36 + fVar37 + fVar38 + fVar39 + fVar40 + fVar41 + fVar42
                     + fVar43 + fVar44 + fVar45 + fVar46 + fVar47 + fVar48 + fVar49 + fVar50 +
                     fVar51 + fVar52 + fVar53 + fVar54 + fVar55 + fVar56 + fVar57 + fVar58 + fVar59
                     + fVar60 + fVar61 + fVar62 + fVar63 + fVar64 + fVar65 + fVar66 + fVar67 +
                     fVar68 + fVar69 + fVar70 + fVar71 + fVar72 + fVar73 + *(float *)(iVar7 + 0x1c);
            fVar11 = fVar136 + 0.0 + fVar137 + fVar138 + fVar139 + fVar75 + fVar76 + fVar77 + fVar78
                     + fVar79 + fVar80 + fVar81 + fVar82 + fVar83 + fVar84 + fVar85 + fVar86 +
                     fVar87 + fVar88 + fVar89 + fVar90 + fVar91 + fVar92 + fVar93 + fVar94 + fVar95
                     + fVar96 + fVar97 + fVar98 + fVar99 + fVar100 + fVar101 + fVar102 + fVar103 +
                     fVar104 + fVar105 + fVar106 + fVar107 + fVar108 + fVar109 + fVar110 + fVar111 +
                     fVar112 + fVar113 + fVar114 + fVar115 + fVar116 + fVar117 + fVar118 + fVar119 +
                     fVar120 + fVar121 + fVar122 + fVar123 + fVar124 + fVar125 + fVar126 + fVar127 +
                     fVar128 + fVar129 + fVar130 + fVar131 + fVar132 + fVar133 + fVar134 + fVar135 +
                     in_s4;
            *(float *)(iVar7 + 0x1c) = fVar10;
            *(float *)(iVar7 + 0x18) = fVar11;
            if (iVar2 == 6) {
              if (fVar10 <= 0.0) {
                *(undefined4 *)(iVar7 + 0x18) = 0;
                *(undefined4 *)(iVar7 + 0x1c) = 0;
                *(undefined4 *)(iVar7 + 0x20) = 0;
              }
              else {
                in_s4 = (float)thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY(fVar11 / fVar10 + 0.001);
                fVar10 = *(float *)(iVar7 + 0x10) + -0.0004;
                fVar11 = *(float *)(iVar7 + 0x14) + 0.0004;
                *(undefined1 *)(iVar7 + 8) = 1;
                *(float *)(iVar7 + 4) = in_s4;
                *(undefined4 *)(iVar7 + 0x18) = 0;
                *(undefined4 *)(iVar7 + 0x1c) = 0;
                *(undefined4 *)(iVar7 + 0x20) = 0;
                if (fVar10 < in_s4) {
                  fVar10 = in_s4;
                }
                *(float *)(iVar7 + 0x10) = fVar10;
                if (in_s4 < fVar11) {
                  fVar11 = in_s4;
                }
                *(float *)(iVar7 + 0x14) = fVar11;
                fVar12 = 0.0;
                if (fVar11 < fVar10) {
                  fVar12 = (in_s4 - fVar11) / (fVar10 - fVar11);
                }
                fVar11 = *(float *)(iVar7 + 0xc);
                fVar10 = param_1[8];
                *(undefined4 *)((int)param_1[2] + uVar8 * 4) = 100;
                iVar2 = (int)fVar10 + uVar8 * 0x24;
                fVar10 = fVar11 + (fVar12 - fVar11) * 0.07;
                if (fVar11 < fVar12) {
                  fVar10 = fVar12;
                }
                *(float *)(iVar7 + 0xc) = fVar10;
                if (*(char *)(iVar2 + 8) == '\0') {
                    /* WARNING: Subroutine does not return */
                  FUN_71a914c4();
                }
                pfVar3 = (float *)((int)param_1[5] + uVar8 * 4);
                fVar10 = *pfVar3 + (*(float *)(iVar2 + 4) - *pfVar3) * 0.05;
                *pfVar3 = fVar10;
                if (fVar10 < *param_1) {
                  fVar10 = *param_1;
                }
                *pfVar3 = fVar10;
              }
            }
          }
        }
        iVar2 = *(int *)((int)param_1[2] + uVar8 * 4) + -1;
        *(int *)((int)param_1[2] + uVar8 * 4) = iVar2;
        if (iVar2 == 0) break;
        uVar8 = uVar8 + 1;
        if (uVar8 == param_5) goto LAB_71adc4a0;
      }
      iVar2 = (int)param_1[8] + uVar8 * 0x24;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      if (*(char *)(iVar2 + 8) != '\0') {
        *(undefined1 *)(iVar2 + 8) = 0;
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_5);
  }
LAB_71adc4a0:
  fVar9 = param_1[8];
  if (param_1[9] != fVar9) {
    iVar2 = 0;
    iVar7 = 0;
    uVar8 = 0;
    do {
      if (*(char *)((int)fVar9 + iVar2 + 8) == '\0') {
        in_s4 = (float)((uint)in_s4 & 0xffffff00);
        uVar5 = 0;
      }
      else {
        pcVar4 = (char *)((int)fVar9 + iVar2);
        fVar10 = *(float *)(pcVar4 + 0xc);
        fVar9 = 0.0;
        if (0.0 < fVar10) {
          fVar9 = fVar10;
        }
        if (*pcVar4 == '\0') {
          fVar9 = fVar10;
        }
        in_s4 = 1.0;
        if (fVar9 < 1.0) {
          in_s4 = fVar9;
        }
        if (pcVar4[1] == '\0') {
          in_s4 = fVar9;
        }
        uVar5 = 1;
      }
      fVar9 = param_1[0xb];
      iVar2 = iVar2 + 0x24;
      pfVar3 = (float *)((int)fVar9 + iVar7);
      iVar1 = uVar8 * 8;
      iVar7 = iVar7 + 8;
      uVar8 = uVar8 + 1;
      *pfVar3 = in_s4;
      *(undefined1 *)((int)fVar9 + iVar1 + 4) = uVar5;
      fVar9 = param_1[8];
    } while (uVar8 < (uint)(((int)param_1[9] - (int)fVar9 >> 2) * 0x38e38e39));
  }
  return;
}


// =========================================================================
// Function: xrUHQvPbEuwszZiFaCIPjKVApcYLtaZlWfjNF_FdMYnbiwPw_qlkIIFKFoXnkU
// Entry: 0x71adc580 | Size: 284 bytes
// =========================================================================

void xrUHQvPbEuwszZiFaCIPjKVApcYLtaZlWfjNF_FdMYnbiwPw_qlkIIFKFoXnkU
               (int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  param_2 = *(float *)(param_1 + 0x18) + param_2;
  param_3 = *(float *)(param_1 + 0x1c) + param_3;
  iVar2 = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x20) = iVar2;
  *(float *)(param_1 + 0x18) = param_2;
  *(float *)(param_1 + 0x1c) = param_3;
  if (iVar2 != 6) {
    return;
  }
  if (0.0 < param_3) {
    fVar1 = (float)thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY(param_2 / param_3 + 0.001);
    fVar3 = *(float *)(param_1 + 0x10) + -0.0004;
    *(float *)(param_1 + 4) = fVar1;
    fVar4 = *(float *)(param_1 + 0x14) + 0.0004;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (fVar3 < fVar1) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x10) = fVar3;
    if (fVar1 < fVar4) {
      fVar4 = fVar1;
    }
    *(float *)(param_1 + 0x14) = fVar4;
    if (fVar3 <= fVar4) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar1 - fVar4) / (fVar3 - fVar4);
    }
    fVar1 = *(float *)(param_1 + 0xc);
    fVar4 = fVar1 + (fVar3 - fVar1) * 0.07;
    if (fVar1 < fVar3) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + 0xc) = fVar4;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// =========================================================================
// Function: MdOhUzLVLHrjRhzufIwhtBuZQxUQoVnQJo_mGFQNOmduuTuXzjYJmZCnSUIZBNLEOrLpLtogQ
// Entry: 0x71adc6b0 | Size: 40 bytes
// =========================================================================

void MdOhUzLVLHrjRhzufIwhtBuZQxUQoVnQJo_mGFQNOmduuTuXzjYJmZCnSUIZBNLEOrLpLtogQ(int param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// =========================================================================
// Function: upxb_uAypxlpfKZluSdqBVWMYOwjFSIMBAcKDBohhfSMBgWPwhznNiSrYPpZIaBOeaSGHzOnlIKEbz_fgNYhDqbyiYWasqRxBResbUTiInbhzpCy
// Entry: 0x71adc6d8 | Size: 4 bytes
// =========================================================================

void upxb_uAypxlpfKZluSdqBVWMYOwjFSIMBAcKDBohhfSMBgWPwhznNiSrYPpZIaBOeaSGHzOnlIKEbz_fgNYhDqbyiYWasqRxBResbUTiInbhzpCy
               (void)

{
  return;
}


// =========================================================================
// Function: gTpeRCKDAfiUHAEWWsEhrbjSINMRCgGfLswPRsSvUgSyXZnddmETYXycvMwityBdRgAbQDOHiiyTECFDTNxFJVrmjOEwpnIMsHlZHbkCUKxcPwCzUmpVgnEOEofGHlsdGJT
// Entry: 0x71adc6dc | Size: 4 bytes
// =========================================================================

void gTpeRCKDAfiUHAEWWsEhrbjSINMRCgGfLswPRsSvUgSyXZnddmETYXycvMwityBdRgAbQDOHiiyTECFDTNxFJVrmjOEwpnIMsHlZHbkCUKxcPwCzUmpVgnEOEofGHlsdGJT
               (void)

{
  return;
}


// =========================================================================
// Function: heYZnpOEMAPNdwIczGZUvZzrl_DyJpzIxxSjpJrDtZ_FLMmxYrmJeyqQSaXUmTwCFwxWWtg_fFkEfZeUUFrdVoTC
// Entry: 0x71adc6e0 | Size: 48 bytes
// =========================================================================

void heYZnpOEMAPNdwIczGZUvZzrl_DyJpzIxxSjpJrDtZ_FLMmxYrmJeyqQSaXUmTwCFwxWWtg_fFkEfZeUUFrdVoTC
               (undefined2 *param_1,int param_2)

{
  *param_1 = *(undefined2 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 6) = 0xc120000000000000;
  *(undefined8 *)(param_1 + 10) = 0x42040000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}


// =========================================================================
// Function: CSSWAsLANZJGgptLYAcNNxwezoIPBbkDieqC_IkrwKxu_DFafnAvFJEo
// Entry: 0x71adc720 | Size: 4 bytes
// =========================================================================

void CSSWAsLANZJGgptLYAcNNxwezoIPBbkDieqC_IkrwKxu_DFafnAvFJEo(void)

{
  return;
}


// =========================================================================
// Function: wosLkCFOPlQlOszFjgFcTxgqorRtoFPKapkJNTGkNuJR_tMiquiITwwmMKknEVrFTXUL
// Entry: 0x71adc724 | Size: 92 bytes
// =========================================================================

void wosLkCFOPlQlOszFjgFcTxgqorRtoFPKapkJNTGkNuJR_tMiquiITwwmMKknEVrFTXUL(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x10) + -0.0004;
  *(float *)(param_1 + 0x10) = fVar1;
  if (*(char *)(param_1 + 8) != '\0') {
    fVar3 = *(float *)(param_1 + 4);
    fVar2 = *(float *)(param_1 + 0x14) + 0.0004;
    if (fVar1 < fVar3) {
      fVar1 = fVar3;
    }
    *(float *)(param_1 + 0x10) = fVar1;
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    *(float *)(param_1 + 0x14) = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a914c4();
}


// =========================================================================
// Function: pqyUIrSgBFsXDpCSgKoWzXaTWYkzQbGbQHesVeSnOQBgEcGlkQETsHMPViLQvvKiOA_JbYdnotDQY
// Entry: 0x71adc788 | Size: 104 bytes
// =========================================================================

void pqyUIrSgBFsXDpCSgKoWzXaTWYkzQbGbQHesVeSnOQBgEcGlkQETsHMPViLQvvKiOA_JbYdnotDQY(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x14);
  if (*(float *)(param_1 + 0x10) <= fVar1) {
    fVar1 = 0.0;
  }
  else {
    if (*(char *)(param_1 + 8) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_71a914c4();
    }
    fVar1 = (*(float *)(param_1 + 4) - fVar1) / (*(float *)(param_1 + 0x10) - fVar1);
  }
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = fVar2 + (fVar1 - fVar2) * 0.07;
  if (fVar2 < fVar1) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0xc) = fVar3;
  return;
}


// =========================================================================
// Function: FUN_71adcccc
// Entry: 0x71adcccc | Size: 20 bytes
// =========================================================================

void FUN_71adcccc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71adcd34
// Entry: 0x71adcd34 | Size: 20 bytes
// =========================================================================

void FUN_71adcd34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: aUGi_eHRMeigxvIwwTIvqlwtDbsLfmhRsCMcyKPoGIbGiBMRCyIfgljPTOBvaK_F
// Entry: 0x71adcd9c | Size: 1208 bytes
// =========================================================================

undefined1 *
aUGi_eHRMeigxvIwwTIvqlwtDbsLfmhRsCMcyKPoGIbGiBMRCyIfgljPTOBvaK_F
          (undefined1 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  *param_1 = *(undefined1 *)(param_2 + 0xbc);
  uVar12 = *(undefined4 *)(param_2 + 0xb4);
  uVar13 = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x88) = uVar13;
  *(undefined4 *)(param_1 + 0x8c) = uVar13;
  *(undefined4 *)(param_1 + 0x90) = uVar13;
  *(undefined4 *)(param_1 + 0x94) = uVar13;
  *(undefined4 *)(param_1 + 0x98) = uVar13;
  *(undefined4 *)(param_1 + 0x9c) = uVar13;
  *(undefined4 *)(param_1 + 0xa0) = uVar13;
  *(undefined4 *)(param_1 + 0xa4) = uVar13;
  *(undefined4 *)(param_1 + 0xa8) = uVar13;
  *(undefined4 *)(param_1 + 0xac) = uVar13;
  *(undefined4 *)(param_1 + 0xb0) = uVar13;
  *(undefined4 *)(param_1 + 0xb4) = uVar13;
  *(undefined4 *)(param_1 + 0xb8) = uVar13;
  *(undefined4 *)(param_1 + 0xbc) = uVar13;
  *(undefined4 *)(param_1 + 0xc0) = uVar13;
  *(undefined4 *)(param_1 + 0xc4) = uVar13;
  *(undefined4 *)(param_1 + 200) = uVar13;
  *(undefined4 *)(param_1 + 0xcc) = uVar13;
  *(undefined4 *)(param_1 + 0xd0) = uVar13;
  *(undefined4 *)(param_1 + 0xd4) = uVar13;
  *(undefined4 *)(param_1 + 0xd8) = uVar13;
  *(undefined4 *)(param_1 + 0xdc) = uVar13;
  *(undefined4 *)(param_1 + 0xe0) = uVar13;
  *(undefined4 *)(param_1 + 0xe4) = uVar13;
  *(undefined4 *)(param_1 + 0xe8) = uVar13;
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  *(undefined4 *)(param_1 + 0xf0) = uVar13;
  *(undefined4 *)(param_1 + 0xf4) = uVar13;
  *(undefined4 *)(param_1 + 0xf8) = uVar13;
  *(undefined4 *)(param_1 + 0xfc) = uVar13;
  *(undefined4 *)(param_1 + 0x100) = uVar13;
  *(undefined4 *)(param_1 + 0x104) = uVar13;
  *(undefined4 *)(param_1 + 0x108) = uVar13;
  *(undefined4 *)(param_1 + 0x68) = uVar12;
  *(undefined4 *)(param_1 + 0x6c) = uVar12;
  *(undefined4 *)(param_1 + 0x70) = uVar12;
  *(undefined4 *)(param_1 + 0x74) = uVar12;
  *(undefined4 *)(param_1 + 0x78) = uVar12;
  *(undefined4 *)(param_1 + 0x7c) = uVar12;
  *(undefined4 *)(param_1 + 0x80) = uVar12;
  *(undefined4 *)(param_1 + 0x84) = uVar12;
  *(undefined4 *)(param_1 + 0x48) = uVar12;
  *(undefined4 *)(param_1 + 0x4c) = uVar12;
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  *(undefined4 *)(param_1 + 0x54) = uVar12;
  *(undefined4 *)(param_1 + 0x58) = uVar12;
  *(undefined4 *)(param_1 + 0x5c) = uVar12;
  *(undefined4 *)(param_1 + 0x60) = uVar12;
  *(undefined4 *)(param_1 + 100) = uVar12;
  *(undefined4 *)(param_1 + 0x28) = uVar12;
  *(undefined4 *)(param_1 + 0x2c) = uVar12;
  *(undefined4 *)(param_1 + 0x30) = uVar12;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined4 *)(param_1 + 0x38) = uVar12;
  *(undefined4 *)(param_1 + 0x3c) = uVar12;
  *(undefined4 *)(param_1 + 0x40) = uVar12;
  *(undefined4 *)(param_1 + 0x44) = uVar12;
  *(undefined4 *)(param_1 + 8) = uVar12;
  *(undefined4 *)(param_1 + 0xc) = uVar12;
  *(undefined4 *)(param_1 + 0x10) = uVar12;
  *(undefined4 *)(param_1 + 0x14) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar12;
  *(undefined4 *)(param_1 + 0x1c) = uVar12;
  *(undefined4 *)(param_1 + 0x20) = uVar12;
  *(undefined4 *)(param_1 + 0x24) = uVar12;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_Aec3MinErleDuringOnsetsKi_700617a3,0x28);
  uVar10 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar10 = (uint)abStack_30 | 1;
    uStack_2c = (uint)(abStack_30[0] >> 1);
  }
  uVar7 = uVar10 + uStack_2c;
  uVar3 = uVar10;
  while (((uVar2 = uVar7, 6 < (int)uStack_2c &&
          (uVar3 = imp_memchr(uVar3,0x45,uStack_2c - 6), uVar3 != 0)) &&
         (iVar6 = imp_memcmp(uVar3,s_Enabled_7006820b,7), uVar2 = uVar3, iVar6 != 0))) {
    uVar3 = uVar3 + 1;
    uStack_2c = uVar7 - uVar3;
  }
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  puVar11 = param_1 + 0x110;
  param_1[0x10c] = uVar2 == uVar7 || uVar2 != uVar10;
  thunk_DpMdufpxjftxnEqPMC_iMqMII_BtefAwakjWbSBYFxIwtQLucpwnEKTB(puVar11,param_3);
  piVar4 = (int *)(param_1 + 0x140);
  *piVar4 = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (param_3 == 0) {
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x150) = uVar12;
    *(undefined4 *)(param_1 + 0x154) = uVar13;
    *(undefined4 *)(param_1 + 0x158) = uVar1;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x160) = uVar12;
    *(undefined4 *)(param_1 + 0x164) = uVar13;
    *(undefined4 *)(param_1 + 0x168) = uVar1;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x170) = uVar12;
    *(undefined4 *)(param_1 + 0x174) = uVar13;
    *(undefined4 *)(param_1 + 0x178) = uVar1;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = uVar12;
    *(undefined4 *)(param_1 + 0x180) = uVar13;
    *(undefined4 *)(param_1 + 0x184) = uVar1;
  }
  else {
    if (0xfc0fc0 < param_3) {
      FUN_71abf220();
      *(undefined1 **)(param_1 + 0x174) = puVar11;
      thunk_qNQrlu(puVar11);
      iVar6 = *(int *)(param_1 + 0x164);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x158);
      }
      else {
        *(int *)(param_1 + 0x168) = iVar6;
        thunk_qNQrlu(iVar6);
        iVar6 = *(int *)(param_1 + 0x158);
      }
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x14c);
      }
      else {
        *(int *)(param_1 + 0x15c) = iVar6;
        thunk_qNQrlu();
        iVar6 = *(int *)(param_1 + 0x14c);
      }
      if (iVar6 == 0) {
        iVar6 = *piVar4;
      }
      else {
        *(int *)(param_1 + 0x150) = iVar6;
        thunk_qNQrlu();
        iVar6 = *piVar4;
      }
      if (iVar6 != 0) {
        *(int *)(param_1 + 0x144) = iVar6;
        thunk_qNQrlu();
        thunk_jjYqyvPKjieAkJxAwjWEmUfVHJIDvSuchXpukAELejRBvqywvfFWykJH(puVar11);
                    /* WARNING: Subroutine does not return */
        thunk_NAUpeWJSovvMoxKm_();
      }
      thunk_jjYqyvPKjieAkJxAwjWEmUfVHJIDvSuchXpukAELejRBvqywvfFWykJH(puVar11);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar8 = param_3 * 0x41;
    iVar6 = param_3 * 0x104;
    iVar5 = thunk_MwhHq(iVar6);
    *(int *)(param_1 + 0x140) = iVar5;
    *(uint *)(param_1 + 0x148) = iVar5 + param_3 * 0x104;
    iVar9 = ((iVar6 - 0x104U) / 0x104) * 0x104 + 0x104;
    imp___aeabi_memclr4(iVar5,iVar9);
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(int *)(param_1 + 0x144) = iVar5 + iVar9;
    iVar5 = thunk_MwhHq(iVar6);
    *(int *)(param_1 + 0x14c) = iVar5;
    *(uint *)(param_1 + 0x154) = iVar5 + param_3 * 0x104;
    imp___aeabi_memclr4(iVar5,iVar9);
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(int *)(param_1 + 0x150) = iVar5 + iVar9;
    iVar5 = thunk_MwhHq(iVar6);
    *(int *)(param_1 + 0x158) = iVar5;
    *(uint *)(param_1 + 0x160) = iVar5 + param_3 * 0x104;
    imp___aeabi_memclr4(iVar5,iVar9);
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(int *)(param_1 + 0x15c) = iVar5 + iVar9;
    iVar5 = thunk_MwhHq(iVar6);
    *(int *)(param_1 + 0x164) = iVar5;
    *(uint *)(param_1 + 0x16c) = iVar5 + param_3 * 0x104;
    imp___aeabi_memclr4(iVar5,iVar9);
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(int *)(param_1 + 0x168) = iVar5 + iVar9;
    iVar5 = thunk_MwhHq(iVar8);
    *(int *)(param_1 + 0x170) = iVar5;
    *(int *)(param_1 + 0x178) = iVar5 + iVar8;
    iVar8 = ((iVar8 - 0x41U) / 0x41) * 0x41 + 0x41;
    imp___aeabi_memclr(iVar5,iVar8);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(int *)(param_1 + 0x174) = iVar5 + iVar8;
    iVar6 = thunk_MwhHq(iVar6);
    *(int *)(param_1 + 0x17c) = iVar6;
    *(uint *)(param_1 + 0x184) = iVar6 + param_3 * 0x104;
    imp___aeabi_memclr4(iVar6,iVar9);
    *(int *)(param_1 + 0x180) = iVar6 + iVar9;
  }
  thunk_CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS(param_1);
  return param_1;
}


// =========================================================================
// Function: CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS
// Entry: 0x71add298 | Size: 1356 bytes
// =========================================================================

void CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_1 + 0x144) != *(int *)(param_1 + 0x140)) {
    uVar5 = 0;
    uVar3 = (*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140) >> 2) * -0x3f03f03f;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      uVar6 = *(undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x140) + uVar5 * 0x104);
      puVar1[0x40] = uVar6;
      puVar1[0x38] = uVar6;
      puVar1[0x39] = uVar6;
      puVar1[0x3a] = uVar6;
      puVar1[0x3b] = uVar6;
      puVar1[0x3c] = uVar6;
      puVar1[0x3d] = uVar6;
      puVar1[0x3e] = uVar6;
      puVar1[0x3f] = uVar6;
      puVar1[0x30] = uVar6;
      puVar1[0x31] = uVar6;
      puVar1[0x32] = uVar6;
      puVar1[0x33] = uVar6;
      puVar1[0x34] = uVar6;
      puVar1[0x35] = uVar6;
      puVar1[0x36] = uVar6;
      puVar1[0x37] = uVar6;
      puVar1[0x28] = uVar6;
      puVar1[0x29] = uVar6;
      puVar1[0x2a] = uVar6;
      puVar1[0x2b] = uVar6;
      puVar1[0x2c] = uVar6;
      puVar1[0x2d] = uVar6;
      puVar1[0x2e] = uVar6;
      puVar1[0x2f] = uVar6;
      puVar1[0x20] = uVar6;
      puVar1[0x21] = uVar6;
      puVar1[0x22] = uVar6;
      puVar1[0x23] = uVar6;
      puVar1[0x24] = uVar6;
      puVar1[0x25] = uVar6;
      puVar1[0x26] = uVar6;
      puVar1[0x27] = uVar6;
      puVar1[0x18] = uVar6;
      puVar1[0x19] = uVar6;
      puVar1[0x1a] = uVar6;
      puVar1[0x1b] = uVar6;
      puVar1[0x1c] = uVar6;
      puVar1[0x1d] = uVar6;
      puVar1[0x1e] = uVar6;
      puVar1[0x1f] = uVar6;
      puVar1[0x10] = uVar6;
      puVar1[0x11] = uVar6;
      puVar1[0x12] = uVar6;
      puVar1[0x13] = uVar6;
      puVar1[0x14] = uVar6;
      puVar1[0x15] = uVar6;
      puVar1[0x16] = uVar6;
      puVar1[0x17] = uVar6;
      puVar1[8] = uVar6;
      puVar1[9] = uVar6;
      puVar1[10] = uVar6;
      puVar1[0xb] = uVar6;
      puVar1[0xc] = uVar6;
      puVar1[0xd] = uVar6;
      puVar1[0xe] = uVar6;
      puVar1[0xf] = uVar6;
      *puVar1 = uVar6;
      puVar1[1] = uVar6;
      puVar1[2] = uVar6;
      puVar1[3] = uVar6;
      puVar1[4] = uVar6;
      puVar1[5] = uVar6;
      puVar1[6] = uVar6;
      puVar1[7] = uVar6;
      uVar6 = *(undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14c) + uVar5 * 0x104);
      puVar1[0x40] = uVar6;
      puVar1[0x38] = uVar6;
      puVar1[0x39] = uVar6;
      puVar1[0x3a] = uVar6;
      puVar1[0x3b] = uVar6;
      puVar1[0x3c] = uVar6;
      puVar1[0x3d] = uVar6;
      puVar1[0x3e] = uVar6;
      puVar1[0x3f] = uVar6;
      puVar1[0x30] = uVar6;
      puVar1[0x31] = uVar6;
      puVar1[0x32] = uVar6;
      puVar1[0x33] = uVar6;
      puVar1[0x34] = uVar6;
      puVar1[0x35] = uVar6;
      puVar1[0x36] = uVar6;
      puVar1[0x37] = uVar6;
      puVar1[0x28] = uVar6;
      puVar1[0x29] = uVar6;
      puVar1[0x2a] = uVar6;
      puVar1[0x2b] = uVar6;
      puVar1[0x2c] = uVar6;
      puVar1[0x2d] = uVar6;
      puVar1[0x2e] = uVar6;
      puVar1[0x2f] = uVar6;
      puVar1[0x20] = uVar6;
      puVar1[0x21] = uVar6;
      puVar1[0x22] = uVar6;
      puVar1[0x23] = uVar6;
      puVar1[0x24] = uVar6;
      puVar1[0x25] = uVar6;
      puVar1[0x26] = uVar6;
      puVar1[0x27] = uVar6;
      puVar1[0x18] = uVar6;
      puVar1[0x19] = uVar6;
      puVar1[0x1a] = uVar6;
      puVar1[0x1b] = uVar6;
      puVar1[0x1c] = uVar6;
      puVar1[0x1d] = uVar6;
      puVar1[0x1e] = uVar6;
      puVar1[0x1f] = uVar6;
      puVar1[0x10] = uVar6;
      puVar1[0x11] = uVar6;
      puVar1[0x12] = uVar6;
      puVar1[0x13] = uVar6;
      puVar1[0x14] = uVar6;
      puVar1[0x15] = uVar6;
      puVar1[0x16] = uVar6;
      puVar1[0x17] = uVar6;
      puVar1[8] = uVar6;
      puVar1[9] = uVar6;
      puVar1[10] = uVar6;
      puVar1[0xb] = uVar6;
      puVar1[0xc] = uVar6;
      puVar1[0xd] = uVar6;
      puVar1[0xe] = uVar6;
      puVar1[0xf] = uVar6;
      *puVar1 = uVar6;
      puVar1[1] = uVar6;
      puVar1[2] = uVar6;
      puVar1[3] = uVar6;
      puVar1[4] = uVar6;
      puVar1[5] = uVar6;
      puVar1[6] = uVar6;
      puVar1[7] = uVar6;
      uVar6 = *(undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x158) + uVar5 * 0x104);
      puVar1[0x40] = uVar6;
      puVar1[0x38] = uVar6;
      puVar1[0x39] = uVar6;
      puVar1[0x3a] = uVar6;
      puVar1[0x3b] = uVar6;
      puVar1[0x3c] = uVar6;
      puVar1[0x3d] = uVar6;
      puVar1[0x3e] = uVar6;
      puVar1[0x3f] = uVar6;
      puVar1[0x30] = uVar6;
      puVar1[0x31] = uVar6;
      puVar1[0x32] = uVar6;
      puVar1[0x33] = uVar6;
      puVar1[0x34] = uVar6;
      puVar1[0x35] = uVar6;
      puVar1[0x36] = uVar6;
      puVar1[0x37] = uVar6;
      puVar1[0x28] = uVar6;
      puVar1[0x29] = uVar6;
      puVar1[0x2a] = uVar6;
      puVar1[0x2b] = uVar6;
      puVar1[0x2c] = uVar6;
      puVar1[0x2d] = uVar6;
      puVar1[0x2e] = uVar6;
      puVar1[0x2f] = uVar6;
      puVar1[0x20] = uVar6;
      puVar1[0x21] = uVar6;
      puVar1[0x22] = uVar6;
      puVar1[0x23] = uVar6;
      puVar1[0x24] = uVar6;
      puVar1[0x25] = uVar6;
      puVar1[0x26] = uVar6;
      puVar1[0x27] = uVar6;
      puVar1[0x18] = uVar6;
      puVar1[0x19] = uVar6;
      puVar1[0x1a] = uVar6;
      puVar1[0x1b] = uVar6;
      puVar1[0x1c] = uVar6;
      puVar1[0x1d] = uVar6;
      puVar1[0x1e] = uVar6;
      puVar1[0x1f] = uVar6;
      puVar1[0x10] = uVar6;
      puVar1[0x11] = uVar6;
      puVar1[0x12] = uVar6;
      puVar1[0x13] = uVar6;
      puVar1[0x14] = uVar6;
      puVar1[0x15] = uVar6;
      puVar1[0x16] = uVar6;
      puVar1[0x17] = uVar6;
      puVar1[8] = uVar6;
      puVar1[9] = uVar6;
      puVar1[10] = uVar6;
      puVar1[0xb] = uVar6;
      puVar1[0xc] = uVar6;
      puVar1[0xd] = uVar6;
      puVar1[0xe] = uVar6;
      puVar1[0xf] = uVar6;
      *puVar1 = uVar6;
      puVar1[1] = uVar6;
      puVar1[2] = uVar6;
      puVar1[3] = uVar6;
      puVar1[4] = uVar6;
      puVar1[5] = uVar6;
      puVar1[6] = uVar6;
      puVar1[7] = uVar6;
      uVar6 = *(undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x164) + uVar5 * 0x104);
      puVar1[0x40] = uVar6;
      puVar1[0x38] = uVar6;
      puVar1[0x39] = uVar6;
      puVar1[0x3a] = uVar6;
      puVar1[0x3b] = uVar6;
      puVar1[0x3c] = uVar6;
      puVar1[0x3d] = uVar6;
      puVar1[0x3e] = uVar6;
      puVar1[0x3f] = uVar6;
      puVar1[0x30] = uVar6;
      puVar1[0x31] = uVar6;
      puVar1[0x32] = uVar6;
      puVar1[0x33] = uVar6;
      puVar1[0x34] = uVar6;
      puVar1[0x35] = uVar6;
      puVar1[0x36] = uVar6;
      puVar1[0x37] = uVar6;
      puVar1[0x28] = uVar6;
      puVar1[0x29] = uVar6;
      puVar1[0x2a] = uVar6;
      puVar1[0x2b] = uVar6;
      puVar1[0x2c] = uVar6;
      puVar1[0x2d] = uVar6;
      puVar1[0x2e] = uVar6;
      puVar1[0x2f] = uVar6;
      puVar1[0x20] = uVar6;
      puVar1[0x21] = uVar6;
      puVar1[0x22] = uVar6;
      puVar1[0x23] = uVar6;
      puVar1[0x24] = uVar6;
      puVar1[0x25] = uVar6;
      puVar1[0x26] = uVar6;
      puVar1[0x27] = uVar6;
      puVar1[0x18] = uVar6;
      puVar1[0x19] = uVar6;
      puVar1[0x1a] = uVar6;
      puVar1[0x1b] = uVar6;
      puVar1[0x1c] = uVar6;
      puVar1[0x1d] = uVar6;
      puVar1[0x1e] = uVar6;
      puVar1[0x1f] = uVar6;
      puVar1[0x10] = uVar6;
      puVar1[0x11] = uVar6;
      puVar1[0x12] = uVar6;
      puVar1[0x13] = uVar6;
      puVar1[0x14] = uVar6;
      puVar1[0x15] = uVar6;
      puVar1[0x16] = uVar6;
      puVar1[0x17] = uVar6;
      puVar1[8] = uVar6;
      puVar1[9] = uVar6;
      puVar1[10] = uVar6;
      puVar1[0xb] = uVar6;
      puVar1[0xc] = uVar6;
      puVar1[0xd] = uVar6;
      puVar1[0xe] = uVar6;
      puVar1[0xf] = uVar6;
      *puVar1 = uVar6;
      puVar1[1] = uVar6;
      puVar1[2] = uVar6;
      puVar1[3] = uVar6;
      puVar1[4] = uVar6;
      puVar1[5] = uVar6;
      puVar1[6] = uVar6;
      puVar1[7] = uVar6;
      imp___aeabi_memset(*(int *)(param_1 + 0x170) + uVar5 * 0x41,0x41,1);
      imp___aeabi_memclr4(*(int *)(param_1 + 0x17c) + uVar5 * 0x104,0x104);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x164)) {
    uVar6 = 0;
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar4 = 0;
    uVar3 = 0;
    do {
      imp___aeabi_memclr4(*(int *)(param_1 + 0x110) + iVar4,0x104);
      imp___aeabi_memclr4(*(int *)(param_1 + 0x11c) + iVar4,0x104);
      iVar4 = iVar4 + 0x104;
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined4 *)(*(int *)(param_1 + 0x134) + uVar3 * 4) = 0;
      puVar1 = (undefined4 *)(iVar2 + uVar3 * 0x41);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      uVar3 = uVar3 + 1;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      puVar1[8] = uVar6;
      puVar1[9] = uVar7;
      puVar1[10] = uVar8;
      puVar1[0xb] = uVar9;
      puVar1[0xc] = uVar6;
      puVar1[0xd] = uVar7;
      puVar1[0xe] = uVar8;
      puVar1[0xf] = uVar9;
      *(undefined1 *)(puVar1 + 0x10) = 0;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x164) >> 2) *
                           -0x3f03f03f));
  }
  return;
}


// =========================================================================
// Function: irWpZQQGQerBaYWsLXsrxAFOj_ZBviKGBljg
// Entry: 0x71add7e4 | Size: 220 bytes
// =========================================================================

int irWpZQQGQerBaYWsLXsrxAFOj_ZBviKGBljg(int param_1)

{
  if (*(int *)(param_1 + 0x17c) != 0) {
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x17c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x164) != 0) {
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x164);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x158);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x14c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x140);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x134);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    *(int *)(param_1 + 300) = *(int *)(param_1 + 0x128);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x11c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x110);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: GZX_dMgWLRtawQfbzjlCFxdLHAwAMMXidNkcFuHnedWlYyQDsexXgDWjKgF
// Entry: 0x71add8c0 | Size: 172 bytes
// =========================================================================

void GZX_dMgWLRtawQfbzjlCFxdLHAwAMMXidNkcFuHnedWlYyQDsexXgDWjKgF(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x164)) {
    uVar5 = 0;
    uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar4 = 0;
    uVar3 = 0;
    do {
      imp___aeabi_memclr4(*(int *)(param_1 + 0x110) + iVar4,0x104);
      imp___aeabi_memclr4(*(int *)(param_1 + 0x11c) + iVar4,0x104);
      iVar4 = iVar4 + 0x104;
      iVar1 = *(int *)(param_1 + 0x128);
      *(undefined4 *)(*(int *)(param_1 + 0x134) + uVar3 * 4) = 0;
      puVar2 = (undefined4 *)(iVar1 + uVar3 * 0x41);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar3 = uVar3 + 1;
      puVar2[4] = uVar5;
      puVar2[5] = uVar6;
      puVar2[6] = uVar7;
      puVar2[7] = uVar8;
      puVar2[8] = uVar5;
      puVar2[9] = uVar6;
      puVar2[10] = uVar7;
      puVar2[0xb] = uVar8;
      puVar2[0xc] = uVar5;
      puVar2[0xd] = uVar6;
      puVar2[0xe] = uVar7;
      puVar2[0xf] = uVar8;
      *(undefined1 *)(puVar2 + 0x10) = 0;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x164) >> 2) *
                           -0x3f03f03f));
  }
  return;
}


// =========================================================================
// Function: OUDabdpoM_jZABGzYXYBAMeIrCneLIFzBbVSOTdjtlmEKZXZkGQSVzYubuZrWcKJIBuOQgOonjEkwbXncuqqSbVAyXAZwSHFHmKarEgkXJuoOjceyniIuHAKAUqKBLH_AzeWKbtDqbLIdwXF
// Entry: 0x71add96c | Size: 476 bytes
// =========================================================================

void OUDabdpoM_jZABGzYXYBAMeIrCneLIFzBbVSOTdjtlmEKZXZkGQSVzYubuZrWcKJIBuOQgOonjEkwbXncuqqSbVAyXAZwSHFHmKarEgkXJuoOjceyniIuHAKAUqKBLH_AzeWKbtDqbLIdwXF
               (char *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  
  if (param_6 == 0) {
    param_5 = 0;
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  thunk_lsxIDR_qoofjFGBdmCUvDDicNYWMklfodPvMVYdDGGAfIvogGPMXcoCUUSCgUShxAKcP_rxd_tG_OwC_DBzWEmdihHAQtqSoUlVveKwFzxGMILPkxCFINkdpWqKHaU_gMmwiKRCXbUGscaxKRIjJyvyeZaaPnzlOrVT
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  thunk_GJsbBhZjazcvuHnULchxAUfIPOUcOXRyZJj_pZhiNJEZukMIkAfVxdrBzUNrARMSWtqFrXdKXoxWWTPNNniPtDh
            (param_1,param_7);
  if ((*param_1 != '\0') &&
     (uVar1 = *(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110), 0 < (int)uVar1)) {
    iVar9 = 4;
    iVar11 = 1;
    uVar10 = 0;
    uVar6 = 1;
    if (1 < uVar1 / 0x104) {
      uVar6 = uVar1 / 0x104;
    }
    iVar7 = *(int *)(param_1 + 0x17c) + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x14c);
      iVar4 = *(int *)(param_1 + 0x164);
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0x170) + iVar11);
      iVar8 = 0;
      do {
        iVar5 = *(int *)(iVar7 + iVar8);
        *(int *)(iVar7 + iVar8) = iVar5 + -1;
        if (iVar5 < 0x98) {
          pfVar12 = (float *)(iVar2 + iVar9 + iVar8);
          fVar13 = *(float *)(iVar4 + iVar9 + iVar8);
          fVar14 = *pfVar12;
          if (fVar13 < fVar14) {
            fVar14 = fVar14 * 0.97;
            if (fVar13 < fVar14) {
              fVar13 = fVar14;
            }
            *pfVar12 = fVar13;
          }
          if (iVar5 < 2) {
            *(undefined4 *)(iVar7 + iVar8) = 0;
            *puVar3 = 1;
          }
        }
        iVar8 = iVar8 + 4;
        puVar3 = puVar3 + 1;
      } while (iVar8 != 0xfc);
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 0x104;
      iVar9 = iVar9 + 0x104;
      iVar11 = iVar11 + 0x41;
    } while (uVar10 != uVar6);
  }
  iVar9 = *(int *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x144) != iVar9) {
    iVar7 = *(int *)(param_1 + 0x158);
    iVar2 = 0;
    uVar1 = (*(int *)(param_1 + 0x144) - iVar9 >> 2) * -0x3f03f03f;
    iVar11 = *(int *)(param_1 + 0x14c);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    do {
      iVar4 = iVar9 + iVar2;
      uVar1 = uVar1 - 1;
      *(undefined4 *)(iVar4 + 0x100) = *(undefined4 *)(iVar4 + 0xfc);
      iVar8 = iVar11 + iVar2;
      *(undefined4 *)(iVar9 + iVar2) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar8 + 0x100) = *(undefined4 *)(iVar8 + 0xfc);
      iVar4 = iVar7 + iVar2;
      *(undefined4 *)(iVar11 + iVar2) = *(undefined4 *)(iVar8 + 4);
      *(undefined4 *)(iVar7 + iVar2) = *(undefined4 *)(iVar4 + 4);
      iVar2 = iVar2 + 0x104;
      *(undefined4 *)(iVar4 + 0x100) = *(undefined4 *)(iVar4 + 0xfc);
    } while (uVar1 != 0);
  }
  return;
}


// =========================================================================
// Function: lsxIDR_qoofjFGBdmCUvDDicNYWMklfodPvMVYdDGGAfIvogGPMXcoCUUSCgUShxAKcP_rxd_tG_OwC_DBzWEmdihHAQtqSoUlVveKwFzxGMILPkxCFINkdpWqKHaU_gMmwiKRCXbUGscaxKRIjJyvyeZaaPnzlOrVT
// Entry: 0x71addb4c | Size: 452 bytes
// =========================================================================

void lsxIDR_qoofjFGBdmCUvDDicNYWMklfodPvMVYdDGGAfIvogGPMXcoCUUSCgUShxAKcP_rxd_tG_OwC_DBzWEmdihHAQtqSoUlVveKwFzxGMILPkxCFINkdpWqKHaU_gMmwiKRCXbUGscaxKRIjJyvyeZaaPnzlOrVT
               (int param_1,float *param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
               int *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  bool bVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (0 < (int)param_4) {
    uVar10 = 0;
    uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar8 = 0;
    iVar9 = 0;
    uVar7 = 0;
    do {
      if ((*(uint *)(*param_7 + (uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x110);
        if (*(int *)(*(int *)(param_1 + 0x134) + uVar7 * 4) == 6) {
          *(undefined4 *)(*(int *)(param_1 + 0x134) + uVar7 * 4) = 0;
          imp___aeabi_memclr4(iVar1 + uVar7 * 0x104,0x104);
          imp___aeabi_memclr4(*(int *)(param_1 + 0x11c) + uVar7 * 0x104,0x104);
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0x128) + uVar7 * 0x41);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          puVar2[4] = uVar10;
          puVar2[5] = uVar11;
          puVar2[6] = uVar12;
          puVar2[7] = uVar13;
          puVar2[8] = uVar10;
          puVar2[9] = uVar11;
          puVar2[10] = uVar12;
          puVar2[0xb] = uVar13;
          puVar2[0xc] = uVar10;
          puVar2[0xd] = uVar11;
          puVar2[0xe] = uVar12;
          puVar2[0xf] = uVar13;
          *(undefined1 *)(puVar2 + 0x10) = 0;
          iVar1 = *(int *)(param_1 + 0x110);
        }
        iVar3 = 0;
        do {
          pfVar4 = (float *)(iVar1 + iVar9 + iVar3);
          pfVar6 = (float *)(param_3 + iVar3);
          iVar3 = iVar3 + 4;
          *pfVar4 = *pfVar6 + *pfVar4;
        } while (iVar3 != 0x104);
        iVar1 = *(int *)(param_1 + 0x11c);
        iVar3 = 0;
        do {
          pfVar4 = (float *)(iVar1 + iVar9 + iVar3);
          pfVar6 = (float *)(param_5 + iVar3);
          iVar3 = iVar3 + 4;
          *pfVar4 = *pfVar6 + *pfVar4;
        } while (iVar3 != 0x104);
        iVar3 = 0;
        iVar1 = *(int *)(param_1 + 0x128) + iVar8;
        pfVar4 = param_2;
        do {
          bVar5 = true;
          if (*(char *)(iVar1 - iVar3) == '\0') {
            bVar5 = *pfVar4 < 44015068.0;
          }
          *(bool *)(iVar1 - iVar3) = bVar5;
          iVar3 = iVar3 + -1;
          pfVar4 = pfVar4 + 1;
        } while (iVar3 != -0x41);
        *(int *)(*(int *)(param_1 + 0x134) + uVar7 * 4) =
             *(int *)(*(int *)(param_1 + 0x134) + uVar7 * 4) + 1;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x41;
      param_5 = param_5 + 0x104;
      param_3 = param_3 + 0x104;
      iVar9 = iVar9 + 0x104;
    } while (uVar7 != param_4);
    return;
  }
  return;
}


// =========================================================================
// Function: GJsbBhZjazcvuHnULchxAUfIPOUcOXRyZJj_pZhiNJEZukMIkAfVxdrBzUNrARMSWtqFrXdKXoxWWTPNNniPtDh
// Entry: 0x71addd14 | Size: 992 bytes
// =========================================================================

void GJsbBhZjazcvuHnULchxAUfIPOUcOXRyZJj_pZhiNJEZukMIkAfVxdrBzUNrARMSWtqFrXdKXoxWWTPNNniPtDh
               (char *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int iStack_17c;
  char acStack_168 [4];
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
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
  undefined4 uStack_12c;
  float afStack_128 [65];
  
  iVar6 = *(int *)(param_1 + 0x110);
  uVar7 = *(int *)(param_1 + 0x114) - iVar6;
  if (0 < (int)uVar7) {
    iVar16 = *(int *)(param_1 + 0x134);
    iVar20 = *(int *)(param_1 + 0x11c);
    uVar21 = 1;
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    fVar22 = 0.05;
    iVar8 = 4;
    iVar17 = 0;
    iVar12 = *param_2;
    if (1 < uVar7 / 0x104) {
      uVar21 = uVar7 / 0x104;
    }
    uVar7 = 0;
    iStack_17c = 1;
    do {
      if (((*(uint *)(iVar12 + (uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) &&
         (*(int *)(iVar16 + uVar7 * 4) == 6)) {
        iVar15 = 4;
        uStack_164 = uVar1;
        uStack_160 = uVar2;
        uStack_15c = uVar3;
        uStack_158 = 0;
        uStack_154 = uVar1;
        uStack_150 = uVar2;
        uStack_14c = uVar3;
        uStack_148 = 0;
        uStack_144 = uVar1;
        uStack_140 = uVar2;
        uStack_13c = uVar3;
        uStack_138 = 0;
        uStack_134 = uVar1;
        uStack_130 = uVar2;
        uStack_12c = uVar3;
        iVar4 = 1;
        do {
          fVar23 = *(float *)(iVar20 + iVar15);
          if (0.0 < fVar23) {
            acStack_168[iVar4] = '\x01';
            *(float *)((int)afStack_128 + iVar15) = *(float *)(iVar6 + iVar15) / fVar23;
          }
          iVar4 = iVar4 + 1;
          iVar15 = iVar15 + 4;
        } while (iVar4 != 0x40);
        iVar15 = 0;
        iVar4 = *(int *)(param_1 + 0x128);
        if (*param_1 == '\0') {
          cVar10 = '\0';
        }
        else {
          iVar11 = *(int *)(param_1 + 0x17c);
          iVar18 = *(int *)(param_1 + 0x170);
          iVar13 = *(int *)(param_1 + 0x164);
          iVar14 = 0;
          iVar5 = 0;
          do {
            if ((*(char *)(((uint)acStack_168 | 1) + iVar5) != '\0') &&
               (*(char *)(iVar4 + iStack_17c + iVar5) == '\0')) {
              if ((*(char *)(iVar18 + iStack_17c + iVar5) != '\0') &&
                 (*(undefined1 *)(iVar18 + iStack_17c + iVar5) = 0, param_1[0x10c] == '\0')) {
                pfVar19 = (float *)(iVar13 + iVar8 + iVar14);
                fVar23 = *pfVar19;
                fVar24 = *(float *)((int)afStack_128 + iVar14 + 4);
                pfVar9 = (float *)&DAT_71ade0f4;
                if (fVar24 < fVar23) {
                  pfVar9 = (float *)&DAT_71ade0f8;
                }
                fVar23 = fVar23 + *pfVar9 * (fVar24 - fVar23);
                fVar24 = fVar23;
                if (*(float *)(param_1 + iVar14 + 0xc) <= fVar23) {
                  fVar24 = *(float *)(param_1 + iVar14 + 0xc);
                }
                if (fVar23 <= *(float *)(param_1 + 4)) {
                  fVar24 = *(float *)(param_1 + 4);
                }
                *pfVar19 = fVar24;
              }
              *(undefined4 *)(iVar11 + iVar8 + iVar5 * 4) = 0xfa;
            }
            iVar5 = iVar5 + 1;
            iVar14 = iVar14 + 4;
          } while (iVar5 != 0x3f);
          cVar10 = *param_1;
          iVar4 = *(int *)(param_1 + 0x128);
        }
        iVar11 = *(int *)(param_1 + 0x158);
        iVar13 = *(int *)(param_1 + 0x140);
        iVar14 = 1;
        iVar5 = *(int *)(param_1 + 0x14c);
        do {
          if (acStack_168[iVar14] != '\0') {
            pfVar19 = (float *)(iVar13 + iVar8 + iVar15);
            pfVar9 = (float *)&DAT_71ade100;
            fVar24 = *pfVar19;
            fVar23 = *(float *)((int)afStack_128 + iVar15 + 4);
            if (*(char *)(iVar4 + iVar17 + iVar14) == '\0') {
              pfVar9 = (float *)&DAT_71ade104;
            }
            fVar25 = *pfVar9;
            fVar26 = fVar22;
            if (fVar23 < fVar24) {
              fVar26 = fVar25;
            }
            fVar24 = fVar24 + fVar26 * (fVar23 - fVar24);
            fVar27 = *(float *)(param_1 + iVar15 + 0xc);
            fVar26 = fVar24;
            if (fVar27 <= fVar24) {
              fVar26 = fVar27;
            }
            if (fVar24 <= *(float *)(param_1 + 4)) {
              fVar26 = *(float *)(param_1 + 4);
            }
            *pfVar19 = fVar26;
            if (cVar10 != '\0') {
              pfVar9 = (float *)(iVar5 + iVar8 + iVar15);
              fVar26 = *pfVar9;
              fVar24 = fVar22;
              if (fVar23 < fVar26) {
                fVar24 = fVar25;
              }
              fVar26 = fVar26 + fVar24 * (fVar23 - fVar26);
              fVar27 = *(float *)(param_1 + iVar15 + 0xc);
              fVar24 = fVar26;
              if (fVar27 <= fVar26) {
                fVar24 = fVar27;
              }
              if (fVar26 <= *(float *)(param_1 + 4)) {
                fVar24 = *(float *)(param_1 + 4);
              }
              *pfVar9 = fVar24;
            }
            pfVar9 = (float *)(iVar11 + iVar8 + iVar15);
            fVar26 = *pfVar9;
            fVar24 = fVar22;
            if (fVar23 < fVar26) {
              fVar24 = fVar25;
            }
            fVar26 = fVar26 + fVar24 * (fVar23 - fVar26);
            fVar23 = fVar26;
            if (100000.0 <= fVar26) {
              fVar23 = 100000.0;
            }
            if (fVar26 <= *(float *)(param_1 + 4)) {
              fVar23 = *(float *)(param_1 + 4);
            }
            *pfVar9 = fVar23;
          }
          iVar15 = iVar15 + 4;
          iVar14 = iVar14 + 1;
        } while (iVar15 != 0xfc);
      }
      uVar7 = uVar7 + 1;
      iVar17 = iVar17 + 0x41;
      iVar8 = iVar8 + 0x104;
      iVar6 = iVar6 + 0x104;
      iVar20 = iVar20 + 0x104;
      iStack_17c = iStack_17c + 0x41;
    } while (uVar7 != uVar21);
    return;
  }
  return;
}


// =========================================================================
// Function: rebFlCxeVNYOVKzYxqbnwQgcVXxmWbmsv_wFdR_xeV_cpEYCCKmyBoSDuGBkVYlCHnAzieniMH
// Entry: 0x71ade10c | Size: 280 bytes
// =========================================================================

void rebFlCxeVNYOVKzYxqbnwQgcVXxmWbmsv_wFdR_xeV_cpEYCCKmyBoSDuGBkVYlCHnAzieniMH(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110);
  if (0 < (int)uVar1) {
    iVar12 = 4;
    iVar9 = 1;
    uVar10 = 0;
    uVar3 = 1;
    if (1 < uVar1 / 0x104) {
      uVar3 = uVar1 / 0x104;
    }
    iVar4 = *(int *)(param_1 + 0x17c) + 4;
    do {
      iVar5 = 0;
      iVar2 = *(int *)(param_1 + 0x14c);
      iVar8 = *(int *)(param_1 + 0x164);
      puVar7 = (undefined1 *)(*(int *)(param_1 + 0x170) + iVar9);
      do {
        iVar6 = *(int *)(iVar4 + iVar5);
        *(int *)(iVar4 + iVar5) = iVar6 + -1;
        if (iVar6 < 0x98) {
          pfVar11 = (float *)(iVar2 + iVar12 + iVar5);
          fVar13 = *(float *)(iVar8 + iVar12 + iVar5);
          fVar14 = *pfVar11;
          if (fVar13 < fVar14) {
            fVar14 = fVar14 * 0.97;
            if (fVar13 < fVar14) {
              fVar13 = fVar14;
            }
            *pfVar11 = fVar13;
          }
          if (iVar6 < 2) {
            *(undefined4 *)(iVar4 + iVar5) = 0;
            *puVar7 = 1;
          }
        }
        iVar5 = iVar5 + 4;
        puVar7 = puVar7 + 1;
      } while (iVar5 != 0xfc);
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 0x41;
      iVar12 = iVar12 + 0x104;
      iVar4 = iVar4 + 0x104;
    } while (uVar10 != uVar3);
  }
  return;
}


// =========================================================================
// Function: rmNoIuHyNvQhGxtEjAZy_KYojUfijNrlNqOVFXSMiTQGjFcxchIQf_LilMPPEoMgCdbxebsq_hywmdbIYOpoDkKJzXoLNDgiHvpBMODvrQtuhgf
// Entry: 0x71ade228 | Size: 4 bytes
// =========================================================================

void rmNoIuHyNvQhGxtEjAZy_KYojUfijNrlNqOVFXSMiTQGjFcxchIQf_LilMPPEoMgCdbxebsq_hywmdbIYOpoDkKJzXoLNDgiHvpBMODvrQtuhgf
               (void)

{
  return;
}


// =========================================================================
// Function: DpMdufpxjftxnEqPMC_iMqMII_BtefAwakjWbSBYFxIwtQLucpwnEKTB
// Entry: 0x71ade7bc | Size: 472 bytes
// =========================================================================

int * DpMdufpxjftxnEqPMC_iMqMII_BtefAwakjWbSBYFxIwtQLucpwnEKTB(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    param_1[3] = 0;
    param_1[4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[7] = 0;
    param_1[8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[9] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[0xb] = 0;
    return param_1;
  }
  if (0xfc0fc0 < param_2) {
    FUN_71abf220(param_1);
    param_1[7] = unaff_r5;
    thunk_qNQrlu();
    iVar2 = param_1[3];
    if (iVar2 != 0) {
      param_1[4] = iVar2;
      thunk_qNQrlu(iVar2);
    }
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      thunk_qNQrlu();
    }
                    /* WARNING: Subroutine does not return */
    thunk_NAUpeWJSovvMoxKm_();
  }
  iVar4 = param_2 * 0x41;
  iVar2 = param_2 * 0x104;
  iVar1 = thunk_MwhHq(iVar2);
  *param_1 = iVar1;
  param_1[2] = iVar1 + param_2 * 0x104;
  iVar3 = ((iVar2 - 0x104U) / 0x104) * 0x104 + 0x104;
  imp___aeabi_memclr4(iVar1,iVar3);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = iVar1 + iVar3;
  iVar2 = thunk_MwhHq(iVar2);
  param_1[3] = iVar2;
  param_1[5] = iVar2 + param_2 * 0x104;
  imp___aeabi_memclr4(iVar2,iVar3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = iVar2 + iVar3;
  iVar1 = thunk_MwhHq(iVar4);
  param_1[6] = iVar1;
  param_1[8] = iVar1 + iVar4;
  iVar4 = ((iVar4 - 0x41U) / 0x41) * 0x41 + 0x41;
  imp___aeabi_memclr(iVar1,iVar4);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar2 = param_2 * 4;
  param_1[7] = iVar1 + iVar4;
  iVar4 = thunk_MwhHq(iVar2);
  param_1[0xb] = iVar4 + param_2 * 4;
  param_1[9] = iVar4;
  imp___aeabi_memclr4(iVar4,iVar2);
  param_1[10] = iVar4 + iVar2;
  return param_1;
}


// =========================================================================
// Function: jjYqyvPKjieAkJxAwjWEmUfVHJIDvSuchXpukAELejRBvqywvfFWykJH
// Entry: 0x71adeb1c | Size: 100 bytes
// =========================================================================

int * jjYqyvPKjieAkJxAwjWEmUfVHJIDvSuchXpukAELejRBvqywvfFWykJH(int *param_1)

{
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    thunk_qNQrlu();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    thunk_qNQrlu();
  }
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
// Function: gq__MYXoHKmFtQZVnfLNdnSSCtYjNHMm_EaoQryhZDfYQvSAYobBjfGlcRkIoWMjrXPzKzc_
// Entry: 0x71adec08 | Size: 2236 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 *
gq__MYXoHKmFtQZVnfLNdnSSCtYjNHMm_EaoQryhZDfYQvSAYobBjfGlcRkIoWMjrXPzKzc_
          (undefined4 *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iStack_4c;
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  piVar11 = *(int **)(param_2 + 0x54);
  piVar5 = (int *)(*(uint *)(param_2 + 0x14) >> 6);
  uVar18 = *(uint *)(param_2 + 0xc0);
  *param_1 = *(undefined4 *)(param_2 + 0xb0);
  param_1[1] = uVar18;
  iVar6 = 1;
  param_1[2] = piVar11;
  param_1[3] = piVar5;
  uVar7 = 0;
  do {
    uVar13 = uVar7 + 1;
    if (*(uint *)(iVar6 * 4 + 0x70096c2c) <= uVar7) {
      iVar6 = iVar6 + 1;
    }
    param_1[uVar7 + 4] = iVar6 + -1;
    uVar7 = uVar13;
  } while (uVar13 != 0x41);
  uVar7 = param_1[0x24];
  puVar17 = param_1 + 0x45;
  uVar21 = *(undefined4 *)(param_2 + 0xb8);
  if (0 < (int)uVar7) {
    uVar22 = *(undefined4 *)(param_2 + 0xb4);
    uVar13 = uVar7;
    puVar3 = puVar17;
    if (3 < uVar7) {
      uVar12 = uVar7 & 0x7ffffffc;
      uVar13 = uVar7 & 3;
      puVar3 = puVar17 + uVar12;
      puVar2 = puVar17;
      uVar14 = uVar12;
      do {
        *puVar2 = uVar22;
        puVar2[1] = uVar22;
        puVar2[2] = uVar22;
        puVar2[3] = uVar22;
        puVar2 = puVar2 + 4;
        uVar14 = uVar14 - 4;
      } while (uVar14 != 0);
      if (uVar7 == uVar12) goto LAB_71adece4;
    }
    *puVar3 = uVar22;
    if (1 < uVar13) {
      puVar3[1] = uVar22;
      if (uVar13 - 3 < 0xfffffffe) {
        puVar3[2] = uVar22;
      }
    }
  }
LAB_71adece4:
  uVar13 = (int)(uVar7 * -4 + 0x18) >> 2;
  if (0 < (int)uVar13) {
    puVar17 = puVar17 + uVar7;
    if (3 < uVar13) {
      uVar14 = uVar13 & 0x7ffffffc;
      puVar3 = puVar17 + uVar14;
      uVar7 = uVar14;
      do {
        *puVar17 = uVar21;
        puVar17[1] = uVar21;
        puVar17[2] = uVar21;
        puVar17[3] = uVar21;
        puVar17 = puVar17 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar19 = uVar13 == uVar14;
      uVar13 = uVar13 & 3;
      puVar17 = puVar3;
      if (bVar19) goto LAB_71aded54;
    }
    *puVar17 = uVar21;
    if (1 < uVar13) {
      puVar17[1] = uVar21;
      if (uVar13 - 3 < 0xfffffffe) {
        puVar17[2] = uVar21;
      }
    }
  }
LAB_71aded54:
  puVar17 = (undefined4 *)0x0;
  piVar8 = param_1 + 0x4b;
  *piVar8 = 0;
  uVar7 = uVar18 + 1;
  puVar3 = (undefined4 *)0x0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  piStack_38 = piVar11;
  if (uVar18 < 0xffffffff) {
    if (uVar7 < 0x40000000) {
      puVar17 = (undefined4 *)thunk_MwhHq(uVar7 * 4);
      param_1[0x4d] = puVar17 + uVar7;
      param_1[0x4b] = puVar17;
      imp___aeabi_memclr4(puVar17,uVar7 * 4);
      puVar3 = puVar17 + uVar7;
      param_1[0x4c] = puVar3;
      goto LAB_71adedb0;
    }
  }
  else {
LAB_71adedb0:
    piStack_44 = piVar8;
    if ((int)puVar3 - (int)puVar17 == 8) {
      *puVar17 = 0;
      puVar17[1] = piVar11;
      piVar11 = piVar8;
    }
    else {
      uVar7 = (int)piVar11 - (int)piVar5;
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      piStack_30 = (int *)0x0;
      iStack_40 = (int)puVar3 - (int)puVar17 >> 2;
      piVar9 = (int *)(iStack_40 + -1);
      iStack_48 = param_2;
      if (piVar9 == (int *)0x0) {
        piStack_3c = (int *)0x0;
        iVar6 = 0;
        iStack_4c = 0;
        piVar8 = (int *)0x0;
      }
      else {
        piStack_3c = (int *)0x0;
        if ((int *)0x3fffffff < piVar9) goto LAB_71adf418;
        iStack_4c = (int)piVar9 * 4;
        iVar6 = thunk_MwhHq(iStack_4c);
        imp___aeabi_memclr4(iVar6,iStack_4c);
        iStack_4c = iVar6 + iStack_4c;
        piVar8 = piVar9;
        if ((piVar9 != (int *)0x1) && ((uint)((int)piVar9 * 2) < uVar7)) {
          iVar4 = 2;
          iVar15 = 0;
          do {
            uVar18 = iStack_40 + -2 + iVar15;
            *(int *)(iVar6 + iVar15 * -4) = iVar4;
            bVar20 = 1 < uVar18;
            bVar19 = uVar18 == 2;
            uVar7 = uVar7 - iVar4;
            if (bVar20) {
              iVar4 = iVar4 * 2;
              uVar18 = uVar18 * iVar4;
              bVar19 = uVar7 == uVar18;
            }
            iVar15 = iVar15 + -1;
          } while ((bVar20 && uVar18 <= uVar7) && !bVar19);
          piStack_3c = (int *)-iVar15;
          piVar8 = (int *)((int)piVar9 + iVar15);
        }
      }
      iVar4 = FUN_71ba0484(uVar7);
      if (piStack_3c < piVar9) {
        uVar18 = iStack_40 + ~(uint)piStack_3c;
        piVar16 = piStack_3c;
        if (3 < uVar18) {
          uVar14 = uVar18 & 0xfffffffc;
          piVar10 = (int *)(iVar6 + (int)piStack_3c * 4);
          piVar16 = (int *)((int)piStack_3c + uVar14);
          uVar13 = uVar14;
          do {
            *piVar10 = iVar4;
            piVar10[1] = iVar4;
            piVar10[2] = iVar4;
            piVar10[3] = iVar4;
            piVar10 = piVar10 + 4;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
          if (uVar18 == uVar14) goto LAB_71adef2c;
        }
        iVar15 = ~(uint)piVar16 + iStack_40;
        piVar16 = (int *)(iVar6 + (int)piVar16 * 4);
        do {
          *piVar16 = iVar4;
          iVar15 = iVar15 + -1;
          piVar16 = piVar16 + 1;
        } while (iVar15 != 0);
      }
LAB_71adef2c:
      *puVar17 = piVar5;
      iVar15 = iVar6 + (int)piVar9 * 4;
      *(uint *)(iVar15 + -4) = (uVar7 - iVar4 * (int)piVar8) + *(int *)(iVar15 + -4);
      if (piVar5 < piVar11) {
        uVar7 = 0;
        iVar4 = 0;
        do {
          while (uVar7 = uVar7 + 1, uVar7 < *(uint *)(iVar6 + iVar4 * 4)) {
            piVar5 = (int *)((int)piVar5 + 1);
            if (piVar5 == piVar11) goto LAB_71adefa8;
          }
          iVar4 = iVar4 + 1;
          if (iVar4 == iStack_4c - iVar6 >> 2) break;
          piVar5 = (int *)((int)piVar5 + 1);
          uVar7 = 0;
          puVar17[iVar4] = piVar5;
        } while (piVar5 != piVar11);
      }
LAB_71adefa8:
      *(int **)((int)puVar17 + (iStack_4c - iVar6)) = piVar11;
      thunk_qNQrlu(iVar6);
    }
    uVar1 = *(undefined1 *)(param_2 + 0xbc);
    piStack_38 = param_1 + 0x4f;
    *piStack_38 = 0;
    param_2 = 0xfc0fc0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    *(undefined1 *)(param_1 + 0x4e) = uVar1;
    if (param_3 == 0) {
      param_1[0x52] = 0;
      param_1[0x54] = 0;
      param_1[0x53] = 0;
LAB_71adf0ac:
      piStack_3c = param_1 + 0x53;
      piVar5 = param_1 + 0x52;
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      piStack_30 = (int *)0x0;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        if (0xfc0fc0 < uVar7) goto LAB_71adf3f8;
        piVar11 = (int *)thunk_MwhHq(uVar7 * 0x104);
        piStack_28 = piVar11 + uVar7 * 0x41;
        uVar7 = (uVar7 * 0x104 - 0x104) / 0x104;
        piStack_30 = piVar11;
        imp___aeabi_memclr4(piVar11,uVar7 * 0x104 + 0x104);
        piStack_2c = piVar11 + uVar7 * 0x41 + 0x41;
      }
      iStack_40 = FUN_71abef20(param_1 + 0x55,param_3,&piStack_30);
      if (piStack_30 != (int *)0x0) {
        piStack_2c = piStack_30;
        thunk_qNQrlu();
      }
      piStack_28 = (int *)0x0;
      param_2 = 0xaaaaaaa;
      piStack_2c = (int *)0x0;
      piStack_30 = (int *)0x0;
      uVar7 = param_1[1];
      if (uVar7 != 0) {
        if (0xaaaaaaa < uVar7) goto LAB_71adf400;
        piVar11 = (int *)thunk_MwhHq(uVar7 * 0x18);
        piStack_28 = piVar11 + uVar7 * 6;
        uVar7 = (uVar7 * 0x18 - 0x18) / 0x18;
        piStack_30 = piVar11;
        imp___aeabi_memclr4(piVar11,uVar7 * 0x18 + 0x18);
        piStack_2c = piVar11 + uVar7 * 6 + 6;
      }
      iStack_48 = FUN_71ae1da4(param_1 + 0x58,param_3,&piStack_30);
      if (piStack_30 != (int *)0x0) {
        piStack_2c = piStack_30;
        thunk_qNQrlu();
      }
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
      param_1[0x5d] = 0;
      if (param_3 != 0) {
        piVar11 = (int *)thunk_MwhHq(param_3 * 0x18);
        param_1[0x5b] = piVar11;
        param_1[0x5d] = piVar11 + param_3 * 6;
        uVar7 = (param_3 * 0x18 - 0x18) / 0x18;
        imp___aeabi_memclr4(piVar11,uVar7 * 0x18 + 0x18);
        param_1[0x5c] = piVar11 + uVar7 * 6 + 6;
      }
      uVar7 = param_1[1];
      piStack_28 = (int *)0x0;
      piStack_2c = (int *)0x0;
      piStack_30 = (int *)0x0;
      if (uVar7 == 0) {
LAB_71adf2d8:
        FUN_71ae1da4(param_1 + 0x5e,param_3,&piStack_30);
        if (piStack_30 != (int *)0x0) {
          piStack_2c = piStack_30;
          thunk_qNQrlu();
        }
        param_1[0x61] = 0;
        param_1[0x62] = 0;
        param_1[99] = 0;
        if (param_3 == 0) {
          param_1[100] = 0;
          param_1[0x65] = 0;
          param_1[0x66] = 0;
        }
        else {
          iVar6 = thunk_MwhHq(param_3 * 0x18);
          param_1[0x61] = iVar6;
          param_1[99] = iVar6 + param_3 * 0x18;
          iVar4 = ((param_3 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
          imp___aeabi_memclr4(iVar6,iVar4);
          param_1[100] = 0;
          param_1[0x65] = 0;
          param_1[0x66] = 0;
          param_1[0x62] = iVar6 + iVar4;
          iVar6 = thunk_MwhHq(param_3 * 0x104);
          param_1[100] = iVar6;
          param_1[0x66] = iVar6 + param_3 * 0x104;
          iVar4 = ((param_3 * 0x104 - 0x104) / 0x104) * 0x104 + 0x104;
          imp___aeabi_memclr4(iVar6,iVar4);
          param_1[0x65] = iVar6 + iVar4;
        }
        thunk_WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia(param_1);
        return param_1;
      }
      if (uVar7 < 0xaaaaaab) {
        piVar5 = (int *)thunk_MwhHq(uVar7 * 0x18);
        piStack_28 = piVar5 + uVar7 * 6;
        uVar7 = (uVar7 * 0x18 - 0x18) / 0x18;
        piStack_30 = piVar5;
        imp___aeabi_memclr4(piVar5,uVar7 * 0x18 + 0x18);
        piStack_2c = piVar5 + uVar7 * 6 + 6;
        goto LAB_71adf2d8;
      }
    }
    else {
      if (param_3 < 0xfc0fc1) {
        iVar6 = param_3 * 0x104;
        iVar4 = thunk_MwhHq(iVar6);
        param_1[0x4f] = iVar4;
        param_1[0x51] = iVar4 + param_3 * 0x104;
        uVar7 = (iVar6 - 0x104U) / 0x104;
        iVar15 = uVar7 * 0x104 + 0x104;
        imp___aeabi_memclr4(iVar4,iVar15);
        param_1[0x52] = 0;
        param_1[0x50] = iVar4 + iVar15;
        param_1[0x53] = 0;
        param_1[0x54] = 0;
        piVar11 = (int *)thunk_MwhHq(iVar6);
        param_1[0x52] = piVar11;
        param_1[0x54] = piVar11 + param_3 * 0x41;
        imp___aeabi_memclr4(piVar11,iVar15);
        param_1[0x53] = piVar11 + uVar7 * 0x41 + 0x41;
        goto LAB_71adf0ac;
      }
      FUN_71abf220();
LAB_71adf3f8:
      FUN_71abf220(&piStack_30);
LAB_71adf400:
      FUN_71ae215c(&piStack_30);
    }
    FUN_71ae215c(&piStack_30);
    piVar8 = piVar11;
  }
  FUN_71ac56b0(piVar8);
LAB_71adf418:
  FUN_71ac56b0(&piStack_30);
  param_1[0x62] = piVar8;
  thunk_qNQrlu(piVar8);
  FUN_71ae20a4(param_2);
  if (param_1[0x5b] != 0) {
    param_1[0x5c] = param_1[0x5b];
    thunk_qNQrlu();
  }
  FUN_71ae20a4(iStack_48);
  FUN_71acb754(iStack_40);
  if (*piVar5 == 0) {
    iVar6 = *piStack_38;
  }
  else {
    *piStack_3c = *piVar5;
    thunk_qNQrlu();
    iVar6 = *piStack_38;
  }
  if (iVar6 != 0) {
    param_1[0x50] = iVar6;
    thunk_qNQrlu();
  }
  if (*piStack_44 != 0) {
    param_1[0x4c] = *piStack_44;
    thunk_qNQrlu();
  }
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia
// Entry: 0x71adf570 | Size: 836 bytes
// =========================================================================

void WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar2 = param_1[0x4f];
  if (param_1[0x50] != iVar2) {
    uVar10 = 0;
    uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x3f8000003f800000;
    auVar1 = auVar1 << 0x40 | auVar1;
    uVar14 = *(undefined4 *)auVar1;
    uVar15 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
    uVar16 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
    uVar17 = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
    uVar8 = 0;
    do {
      uVar9 = *param_1;
      iVar4 = param_1[0x58];
      puVar3 = (undefined4 *)(iVar2 + uVar8 * 0x104);
      puVar3[0x40] = uVar9;
      puVar3[0x38] = uVar9;
      puVar3[0x39] = uVar9;
      puVar3[0x3a] = uVar9;
      puVar3[0x3b] = uVar9;
      puVar3[0x3c] = uVar9;
      puVar3[0x3d] = uVar9;
      puVar3[0x3e] = uVar9;
      puVar3[0x3f] = uVar9;
      puVar3[0x30] = uVar9;
      puVar3[0x31] = uVar9;
      puVar3[0x32] = uVar9;
      puVar3[0x33] = uVar9;
      puVar3[0x34] = uVar9;
      puVar3[0x35] = uVar9;
      puVar3[0x36] = uVar9;
      puVar3[0x37] = uVar9;
      puVar3[0x28] = uVar9;
      puVar3[0x29] = uVar9;
      puVar3[0x2a] = uVar9;
      puVar3[0x2b] = uVar9;
      puVar3[0x2c] = uVar9;
      puVar3[0x2d] = uVar9;
      puVar3[0x2e] = uVar9;
      puVar3[0x2f] = uVar9;
      puVar3[0x20] = uVar9;
      puVar3[0x21] = uVar9;
      puVar3[0x22] = uVar9;
      puVar3[0x23] = uVar9;
      puVar3[0x24] = uVar9;
      puVar3[0x25] = uVar9;
      puVar3[0x26] = uVar9;
      puVar3[0x27] = uVar9;
      puVar3[0x18] = uVar9;
      puVar3[0x19] = uVar9;
      puVar3[0x1a] = uVar9;
      puVar3[0x1b] = uVar9;
      puVar3[0x1c] = uVar9;
      puVar3[0x1d] = uVar9;
      puVar3[0x1e] = uVar9;
      puVar3[0x1f] = uVar9;
      puVar3[0x10] = uVar9;
      puVar3[0x11] = uVar9;
      puVar3[0x12] = uVar9;
      puVar3[0x13] = uVar9;
      puVar3[0x14] = uVar9;
      puVar3[0x15] = uVar9;
      puVar3[0x16] = uVar9;
      puVar3[0x17] = uVar9;
      puVar3[8] = uVar9;
      puVar3[9] = uVar9;
      puVar3[10] = uVar9;
      puVar3[0xb] = uVar9;
      puVar3[0xc] = uVar9;
      puVar3[0xd] = uVar9;
      puVar3[0xe] = uVar9;
      puVar3[0xf] = uVar9;
      *puVar3 = uVar9;
      puVar3[1] = uVar9;
      puVar3[2] = uVar9;
      puVar3[3] = uVar9;
      puVar3[4] = uVar9;
      puVar3[5] = uVar9;
      puVar3[6] = uVar9;
      puVar3[7] = uVar9;
      uVar9 = *param_1;
      puVar3 = (undefined4 *)(param_1[0x52] + uVar8 * 0x104);
      puVar3[0x40] = uVar9;
      puVar3[0x38] = uVar9;
      puVar3[0x39] = uVar9;
      puVar3[0x3a] = uVar9;
      puVar3[0x3b] = uVar9;
      puVar3[0x3c] = uVar9;
      puVar3[0x3d] = uVar9;
      puVar3[0x3e] = uVar9;
      puVar3[0x3f] = uVar9;
      puVar3[0x30] = uVar9;
      puVar3[0x31] = uVar9;
      puVar3[0x32] = uVar9;
      puVar3[0x33] = uVar9;
      puVar3[0x34] = uVar9;
      puVar3[0x35] = uVar9;
      puVar3[0x36] = uVar9;
      puVar3[0x37] = uVar9;
      puVar3[0x28] = uVar9;
      puVar3[0x29] = uVar9;
      puVar3[0x2a] = uVar9;
      puVar3[0x2b] = uVar9;
      puVar3[0x2c] = uVar9;
      puVar3[0x2d] = uVar9;
      puVar3[0x2e] = uVar9;
      puVar3[0x2f] = uVar9;
      puVar3[0x20] = uVar9;
      puVar3[0x21] = uVar9;
      puVar3[0x22] = uVar9;
      puVar3[0x23] = uVar9;
      puVar3[0x24] = uVar9;
      puVar3[0x25] = uVar9;
      puVar3[0x26] = uVar9;
      puVar3[0x27] = uVar9;
      puVar3[0x18] = uVar9;
      puVar3[0x19] = uVar9;
      puVar3[0x1a] = uVar9;
      puVar3[0x1b] = uVar9;
      puVar3[0x1c] = uVar9;
      puVar3[0x1d] = uVar9;
      puVar3[0x1e] = uVar9;
      puVar3[0x1f] = uVar9;
      puVar3[0x10] = uVar9;
      puVar3[0x11] = uVar9;
      puVar3[0x12] = uVar9;
      puVar3[0x13] = uVar9;
      puVar3[0x14] = uVar9;
      puVar3[0x15] = uVar9;
      puVar3[0x16] = uVar9;
      puVar3[0x17] = uVar9;
      puVar3[8] = uVar9;
      puVar3[9] = uVar9;
      puVar3[10] = uVar9;
      puVar3[0xb] = uVar9;
      puVar3[0xc] = uVar9;
      puVar3[0xd] = uVar9;
      puVar3[0xe] = uVar9;
      puVar3[0xf] = uVar9;
      *puVar3 = uVar9;
      puVar3[1] = uVar9;
      puVar3[2] = uVar9;
      puVar3[3] = uVar9;
      puVar3[4] = uVar9;
      puVar3[5] = uVar9;
      puVar3[6] = uVar9;
      puVar3[7] = uVar9;
      piVar5 = (int *)(iVar4 + uVar8 * 0xc);
      puVar6 = (undefined4 *)piVar5[1];
      for (puVar3 = (undefined4 *)*piVar5; puVar3 != puVar6; puVar3 = puVar3 + 6) {
        uVar9 = *param_1;
        *puVar3 = uVar9;
        puVar3[1] = uVar9;
        puVar3[2] = uVar9;
        puVar3[3] = uVar9;
        puVar3[4] = uVar9;
        puVar3[5] = uVar9;
      }
      uVar9 = *param_1;
      piVar5 = (int *)(param_1[0x5e] + uVar8 * 0xc);
      puVar3 = (undefined4 *)*piVar5;
      puVar7 = (undefined4 *)(param_1[0x5b] + uVar8 * 0x18);
      puVar6 = (undefined4 *)piVar5[1];
      *puVar7 = uVar9;
      puVar7[1] = uVar9;
      puVar7[2] = uVar9;
      puVar7[3] = uVar9;
      puVar7[4] = uVar9;
      puVar7[5] = uVar9;
      for (; puVar3 != puVar6; puVar3 = puVar3 + 6) {
        puVar3[5] = 0x3f800000;
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3[2] = uVar16;
        puVar3[3] = uVar17;
        puVar3[4] = 0x3f800000;
      }
      puVar3 = (undefined4 *)(param_1[0x61] + uVar8 * 0x18);
      puVar3[5] = 0;
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3[4] = 0;
      imp___aeabi_memclr4(param_1[100] + uVar8 * 0x104,0x104);
      iVar2 = param_1[0x4f];
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)((param_1[0x50] - iVar2 >> 2) * -0x3f03f03f));
  }
  return;
}


// =========================================================================
// Function: AcNvTgbY_jAvWZjKmVXYTpRALvrXIeDMqWDtyZYmsjjl
// Entry: 0x71adf8b4 | Size: 392 bytes
// =========================================================================

int AcNvTgbY_jAvWZjKmVXYTpRALvrXIeDMqWDtyZYmsjjl(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 400) != 0) {
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 400);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x184);
    thunk_qNQrlu();
  }
  piVar3 = *(int **)(param_1 + 0x178);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x17c);
    piVar1 = piVar3;
    if (piVar2 != piVar3) {
      do {
        piVar1 = piVar2 + -3;
        if (*piVar1 != 0) {
          piVar2[-2] = *piVar1;
          thunk_qNQrlu();
        }
        piVar2 = piVar1;
      } while (piVar1 != piVar3);
      piVar1 = *(int **)(param_1 + 0x178);
    }
    *(int **)(param_1 + 0x17c) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x16c);
    thunk_qNQrlu();
  }
  piVar3 = *(int **)(param_1 + 0x160);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x164);
    piVar1 = piVar3;
    if (piVar2 != piVar3) {
      do {
        piVar1 = piVar2 + -3;
        if (*piVar1 != 0) {
          piVar2[-2] = *piVar1;
          thunk_qNQrlu();
        }
        piVar2 = piVar1;
      } while (piVar1 != piVar3);
      piVar1 = *(int **)(param_1 + 0x160);
    }
    *(int **)(param_1 + 0x164) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  piVar3 = *(int **)(param_1 + 0x154);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x158);
    piVar1 = piVar3;
    if (piVar2 != piVar3) {
      do {
        piVar1 = piVar2 + -3;
        if (*piVar1 != 0) {
          piVar2[-2] = *piVar1;
          thunk_qNQrlu();
        }
        piVar2 = piVar1;
      } while (piVar1 != piVar3);
      piVar1 = *(int **)(param_1 + 0x154);
    }
    *(int **)(param_1 + 0x158) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x148);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x13c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 300) != 0) {
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 300);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: TqNXHYrF_vMIrYHwkanazXguSfDpqZfRzZaSqHpJOEFkSzwNrVbqTrqHFzwEGnxXQSyaCTUUuFLmquGlVZ_cwBVeUFqXwIevIQTgvzjxynImFXX_DFYieqTGjCeKiISIsQGKxggEWcvlPqqobcdcZkaGLZttKZPWmZdpxLAptrFaREJldlZXELLQpFllAypcjcoUhFEQWLPxSrZsLQYzkE
// Entry: 0x71adfa3c | Size: 808 bytes
// =========================================================================

void TqNXHYrF_vMIrYHwkanazXguSfDpqZfRzZaSqHpJOEFkSzwNrVbqTrqHFzwEGnxXQSyaCTUUuFLmquGlVZ_cwBVeUFqXwIevIQTgvzjxynImFXX_DFYieqTGjCeKiISIsQGKxggEWcvlPqqobcdcZkaGLZttKZPWmZdpxLAptrFaREJldlZXELLQpFllAypcjcoUhFEQWLPxSrZsLQYzkE
               (float *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
               undefined4 param_6,int param_7,undefined4 param_8,int param_9,int param_10,
               undefined4 param_11,int param_12,undefined4 param_13,undefined4 param_14)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_4 == 0) {
    param_3 = 0;
  }
  thunk_zzbXSDChGDqdLodnWyfsLmmvtmypxkXLsPKfFXhDqGZbIrcXuwOqYcwALufvPnKnzvJEMzftSNIhNkpPjN_EDqooGdsFzXHkcOu_PkRoIwwezlsnAUIqHsZBANnuzEJeBc_KFRuycSgrBnhPiaXKQPlzZ_sjhxJdLGeWyJEEqNkhfiaSEIOtxAkW
            (param_1,param_2,param_3);
  fVar11 = param_1[100];
  if (param_1[0x65] != fVar11) {
    uVar10 = 0;
    uVar12 = ((int)param_1[0x65] - (int)fVar11 >> 2) * -0x3f03f03f;
    fVar1 = param_1[0x55];
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    do {
      iVar9 = (int)fVar11 + uVar10 * 0x104;
      imp___aeabi_memclr4(iVar9,0x104);
      fVar5 = param_1[1];
      if (fVar5 != 0.0) {
        iVar3 = 0;
        iVar2 = *(int *)((int)fVar1 + uVar10 * 0xc) + -0x104;
        iVar4 = iVar2;
        do {
          if (fVar5 != 0.0) {
            iVar6 = (int)fVar5 + -1;
            pfVar7 = (float *)(iVar4 + (int)fVar5 * 0x104);
            fVar5 = *(float *)(iVar2 + (int)fVar5 * 0x104 + iVar3 * 4);
            do {
              if (*pfVar7 < fVar5 * 0.9) break;
              *(int *)(iVar9 + iVar3 * 4) = iVar6;
              iVar6 = iVar6 + -1;
              pfVar7 = pfVar7 + -0x41;
            } while (iVar6 != -1);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 0x41) break;
          fVar5 = param_1[1];
          iVar4 = iVar4 + 4;
        } while( true );
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar12);
  }
  if (param_9 == 0) {
    param_8 = 0;
  }
  if (param_7 == 0) {
    param_6 = 0;
  }
  thunk_nGEXxhSwgJqhcuVmvELbuNEcoWmecbayuqjwWaATLeDKURkfmPQXPxuOh_mJxIOowbVOTUrgA_HvKKEZ_hAkHwBKXrrDjiHxqLDnD_KgwqXjHupcrfFaGxpTnvVY_QCHMriUvwLJxaqydWNHXQsAaSBkGvUajBjOUGCViadAVR
            (param_1,param_5,param_6,param_7,param_8,param_9,param_14);
  fVar11 = param_1[0x4f];
  if (param_1[0x50] != fVar11) {
    fVar5 = param_1[100];
    uVar10 = ((int)param_1[0x50] - (int)fVar11 >> 2) * -0x3f03f03f;
    fVar1 = param_1[0x5e];
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    if (*(char *)(param_1 + 0x4e) == '\0') {
      uVar12 = 0;
      do {
        iVar9 = 0;
        iVar3 = *(int *)((int)fVar1 + uVar12 * 0xc);
        do {
          iVar4 = *(int *)((int)param_1 + iVar9 + 0x10);
          fVar14 = *(float *)(iVar3 + *(int *)((int)fVar5 + iVar9) * 0x18 + iVar4 * 4) *
                   *(float *)(param_10 + iVar9);
          pfVar7 = (float *)((int)fVar11 + iVar9);
          iVar9 = iVar9 + 4;
          fVar8 = fVar14;
          if (param_1[iVar4 + 0x45] <= fVar14) {
            fVar8 = param_1[iVar4 + 0x45];
          }
          if (fVar14 <= *param_1) {
            fVar8 = *param_1;
          }
          *pfVar7 = fVar8;
        } while (iVar9 != 0x100);
        uVar12 = uVar12 + 1;
        fVar5 = (float)((int)fVar5 + 0x104);
        param_10 = param_10 + 0x104;
        fVar11 = (float)((int)fVar11 + 0x104);
      } while (uVar12 != uVar10);
    }
    else {
      iVar9 = 0;
      uVar12 = 0;
      do {
        iVar4 = 0;
        fVar8 = param_1[0x52];
        iVar3 = *(int *)((int)fVar1 + uVar12 * 0xc);
        do {
          iVar2 = *(int *)((int)param_1 + iVar4 + 0x10);
          fVar15 = *(float *)(iVar3 + *(int *)((int)fVar5 + iVar4) * 0x18 + iVar2 * 4);
          fVar16 = param_1[iVar2 + 0x45];
          fVar13 = fVar15 * *(float *)(param_10 + iVar4);
          fVar14 = fVar13;
          if (fVar16 <= fVar13) {
            fVar14 = fVar16;
          }
          if (fVar13 <= *param_1) {
            fVar14 = *param_1;
          }
          *(float *)((int)fVar11 + iVar4) = fVar14;
          fVar15 = fVar15 * *(float *)(param_12 + iVar4);
          fVar13 = param_1[iVar2 + 0x45];
          pfVar7 = (float *)((int)fVar8 + iVar9 + iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = fVar15;
          if (fVar13 <= fVar15) {
            fVar14 = fVar13;
          }
          if (fVar15 <= *param_1) {
            fVar14 = *param_1;
          }
          *pfVar7 = fVar14;
        } while (iVar4 != 0x100);
        param_12 = param_12 + 0x104;
        fVar11 = (float)((int)fVar11 + 0x104);
        iVar9 = iVar9 + 0x104;
        uVar12 = uVar12 + 1;
        param_10 = param_10 + 0x104;
        fVar5 = (float)((int)fVar5 + 0x104);
      } while (uVar12 != uVar10);
    }
  }
  return;
}


// =========================================================================
// Function: DmUbWsGJAFsAUMjatVzBa_xxUMASoYzkngspZshmLOscabJAmjsEcqXIZKgJtCHBeKJNobuIAHlhwKzdDsaJWOvKIMytdpyMLiOiHhYqTIvBQtHTycPsVFu_uKusmSXSFdwYRlIxKkQJqnhwTaZlqiuALKIRBctHpnYLITCDishvSVQxukZiQuUK
// Entry: 0x71adfd68 | Size: 288 bytes
// =========================================================================

void DmUbWsGJAFsAUMjatVzBa_xxUMASoYzkngspZshmLOscabJAmjsEcqXIZKgJtCHBeKJNobuIAHlhwKzdDsaJWOvKIMytdpyMLiOiHhYqTIvBQtHTycPsVFu_uKusmSXSFdwYRlIxKkQJqnhwTaZlqiuALKIRBctHpnYLITCDishvSVQxukZiQuUK
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  if (param_4 == 0) {
    param_3 = 0;
  }
  thunk_zzbXSDChGDqdLodnWyfsLmmvtmypxkXLsPKfFXhDqGZbIrcXuwOqYcwALufvPnKnzvJEMzftSNIhNkpPjN_EDqooGdsFzXHkcOu_PkRoIwwezlsnAUIqHsZBANnuzEJeBc_KFRuycSgrBnhPiaXKQPlzZ_sjhxJdLGeWyJEEqNkhfiaSEIOtxAkW
            (param_1,param_2,param_3);
  iVar10 = *(int *)(param_1 + 400);
  if (*(int *)(param_1 + 0x194) != iVar10) {
    uVar9 = 0;
    uVar11 = (*(int *)(param_1 + 0x194) - iVar10 >> 2) * -0x3f03f03f;
    iVar1 = *(int *)(param_1 + 0x154);
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    do {
      iVar7 = iVar10 + uVar9 * 0x104;
      imp___aeabi_memclr4(iVar7,0x104);
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 != 0) {
        iVar3 = 0;
        iVar2 = *(int *)(iVar1 + uVar9 * 0xc) + -0x104;
        iVar4 = iVar2;
        do {
          if (iVar5 != 0) {
            iVar6 = iVar5 + -1;
            pfVar8 = (float *)(iVar4 + iVar5 * 0x104);
            fVar12 = *(float *)(iVar2 + iVar5 * 0x104 + iVar3 * 4);
            do {
              if (*pfVar8 < fVar12 * 0.9) break;
              *(int *)(iVar7 + iVar3 * 4) = iVar6;
              iVar6 = iVar6 + -1;
              pfVar8 = pfVar8 + -0x41;
            } while (iVar6 != -1);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 0x41) break;
          iVar5 = *(int *)(param_1 + 4);
          iVar4 = iVar4 + 4;
        } while( true );
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}


// =========================================================================
// Function: nGEXxhSwgJqhcuVmvELbuNEcoWmecbayuqjwWaATLeDKURkfmPQXPxuOh_mJxIOowbVOTUrgA_HvKKEZ_hAkHwBKXrrDjiHxqLDnD_KgwqXjHupcrfFaGxpTnvVY_QCHMriUvwLJxaqydWNHXQsAaSBkGvUajBjOUGCViadAVR
// Entry: 0x71adfe8c | Size: 3908 bytes
// =========================================================================

void nGEXxhSwgJqhcuVmvELbuNEcoWmecbayuqjwWaATLeDKURkfmPQXPxuOh_mJxIOowbVOTUrgA_HvKKEZ_hAkHwBKXrrDjiHxqLDnD_KgwqXjHupcrfFaGxpTnvVY_QCHMriUvwLJxaqydWNHXQsAaSBkGvUajBjOUGCViadAVR
               (float *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  uint *puVar13;
  bool bVar14;
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
  uint *puVar37;
  int iVar38;
  float *pfVar39;
  float *pfVar40;
  int iVar41;
  bool bVar42;
  int iVar43;
  int iVar44;
  bool bVar45;
  uint uVar46;
  uint uVar47;
  bool bVar48;
  uint uVar49;
  bool bVar50;
  uint *puVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  uVar1 = param_7[1];
  if (uVar1 != 0) {
    fVar71 = 0.0;
    iVar43 = 0x100;
    fVar72 = 0.1;
    iVar53 = 0x14;
    fVar73 = 0.05;
    iVar52 = 0;
    uVar46 = 0;
    do {
      if ((*(uint *)(*param_7 + (uVar46 >> 5) * 4) >> (uVar46 & 0x1f) & 1) != 0) {
        FUN_71ae1350(param_2,0x41,&fStack_7c,6);
        FUN_71ae1350(param_5 + iVar43 + -0x100,0x41,&fStack_94,6);
        FUN_71ae1350(param_3 + iVar43 + -0x100,0x41,&fStack_ac,6);
        fVar12 = param_1[0x61];
        puVar13 = (uint *)((int)param_1[100] + iVar43);
        uVar2 = puVar13[-0x37];
        uVar3 = puVar13[-0x33];
        uVar4 = puVar13[-0x2f];
        uVar15 = puVar13[-0x2d];
        uVar16 = puVar13[-0x2c];
        uVar5 = puVar13[-0x2a];
        uVar17 = puVar13[-0xf];
        uVar18 = puVar13[-0xd];
        uVar19 = puVar13[-0xc];
        uVar20 = puVar13[-10];
        uVar6 = puVar13[-9];
        uVar21 = puVar13[-0x3e];
        uVar22 = puVar13[-0x3d];
        uVar23 = puVar13[-0x3c];
        uVar24 = puVar13[-0x3a];
        uVar7 = puVar13[-8];
        uVar25 = puVar13[-0x27];
        uVar26 = puVar13[-0x25];
        uVar27 = puVar13[-0x24];
        uVar28 = puVar13[-0x22];
        uVar29 = puVar13[-5];
        uVar30 = puVar13[-0x1f];
        uVar31 = puVar13[-0x1e];
        uVar32 = puVar13[-0x1d];
        uVar33 = puVar13[-0x1b];
        uVar34 = puVar13[-0x19];
        uVar35 = puVar13[-0x17];
        uVar36 = puVar13[-0x15];
        uVar1 = puVar13[-0x38];
        uVar54 = puVar13[-0x36];
        uVar49 = puVar13[-0x35];
        puVar51 = puVar13 + -0x38;
        if (uVar2 < uVar1) {
          uVar1 = uVar2;
          puVar51 = puVar13 + -0x37;
        }
        uVar2 = puVar13[-0x10];
        if (uVar54 < uVar1) {
          puVar51 = puVar13 + -0x36;
        }
        uVar47 = puVar13[-0x34];
        if (uVar54 < uVar1) {
          uVar1 = uVar54;
        }
        if (uVar49 < uVar1) {
          uVar1 = uVar49;
          puVar51 = puVar13 + -0x35;
        }
        if (uVar47 < uVar1) {
          uVar1 = uVar47;
          puVar51 = puVar13 + -0x34;
        }
        uVar54 = puVar13[-0x32];
        uVar49 = puVar13[-0x30];
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
          puVar51 = puVar13 + -0x33;
        }
        if (uVar54 < uVar1) {
          uVar1 = uVar54;
          puVar51 = puVar13 + -0x32;
        }
        uVar3 = puVar13[-0x2e];
        if (puVar13[-0x31] < uVar1) {
          puVar51 = puVar13 + -0x31;
        }
        uVar1 = *puVar51;
        puVar51 = puVar13 + -0x30;
        if (uVar4 < uVar49) {
          puVar51 = puVar13 + -0x2f;
          uVar49 = uVar4;
        }
        if (uVar3 < uVar49) {
          uVar49 = uVar3;
          puVar51 = puVar13 + -0x2e;
        }
        if (uVar15 < uVar49) {
          puVar51 = puVar13 + -0x2d;
          uVar49 = uVar15;
        }
        uVar3 = puVar13[-0x2b];
        if (uVar16 < uVar49) {
          puVar51 = puVar13 + -0x2c;
          uVar49 = uVar16;
        }
        if (uVar3 < uVar49) {
          uVar49 = uVar3;
          puVar51 = puVar13 + -0x2b;
        }
        uVar3 = puVar13[-0xe];
        if (uVar5 < uVar49) {
          puVar51 = puVar13 + -0x2a;
        }
        puVar9 = puVar13 + -0x10;
        if (uVar17 < uVar2) {
          puVar9 = puVar13 + -0xf;
          uVar2 = uVar17;
        }
        if (uVar3 < uVar2) {
          uVar2 = uVar3;
          puVar9 = puVar13 + -0xe;
        }
        if (uVar18 < uVar2) {
          puVar9 = puVar13 + -0xd;
          uVar2 = uVar18;
        }
        uVar3 = puVar13[-0xb];
        if (uVar19 < uVar2) {
          puVar9 = puVar13 + -0xc;
          uVar2 = uVar19;
        }
        if (uVar3 < uVar2) {
          uVar2 = uVar3;
          puVar9 = puVar13 + -0xb;
        }
        if (uVar20 < uVar2) {
          puVar9 = puVar13 + -10;
          uVar2 = uVar20;
        }
        uVar3 = puVar13[-0x3f];
        if (uVar6 < uVar2) {
          puVar9 = puVar13 + -9;
        }
        puVar37 = puVar13 + -0x3f;
        if (uVar21 < uVar3) {
          uVar3 = uVar21;
          puVar37 = puVar13 + -0x3e;
        }
        if (uVar22 < uVar3) {
          puVar37 = puVar13 + -0x3d;
          uVar3 = uVar22;
        }
        uVar4 = puVar13[-0x3b];
        if (uVar23 < uVar3) {
          uVar3 = uVar23;
          puVar37 = puVar13 + -0x3c;
        }
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
          puVar37 = puVar13 + -0x3b;
        }
        if (uVar24 < uVar3) {
          puVar37 = puVar13 + -0x3a;
          uVar3 = uVar24;
        }
        if (puVar13[-0x39] < uVar3) {
          puVar37 = puVar13 + -0x39;
        }
        uVar3 = *puVar37;
        if (uVar6 < uVar2) {
          uVar2 = uVar6;
        }
        uVar4 = puVar13[-0x28];
        uVar6 = puVar13[-0x26];
        if (uVar7 < uVar2) {
          puVar9 = puVar13 + -8;
        }
        puVar37 = puVar13 + -0x28;
        if (uVar25 < uVar4) {
          uVar4 = uVar25;
          puVar37 = puVar13 + -0x27;
        }
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
          puVar37 = puVar13 + -0x26;
        }
        if (uVar26 < uVar4) {
          puVar37 = puVar13 + -0x25;
          uVar4 = uVar26;
        }
        uVar6 = puVar13[-0x23];
        if (uVar27 < uVar4) {
          puVar37 = puVar13 + -0x24;
          uVar4 = uVar27;
        }
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
          puVar37 = puVar13 + -0x23;
        }
        if (uVar28 < uVar4) {
          puVar37 = puVar13 + -0x22;
          uVar4 = uVar28;
        }
        if (puVar13[-0x21] < uVar4) {
          puVar37 = puVar13 + -0x21;
        }
        uVar4 = puVar13[-6];
        if (uVar5 < uVar49) {
          uVar49 = uVar5;
        }
        puVar8 = puVar13 + -0x29;
        if (uVar49 <= puVar13[-0x29]) {
          puVar8 = puVar51;
        }
        puVar51 = puVar13 + -7;
        uVar5 = *puVar51;
        uVar6 = *puVar8;
        uVar15 = *puVar37;
        if (uVar7 < uVar2) {
          uVar2 = uVar7;
        }
        if (uVar2 <= uVar5) {
          puVar51 = puVar9;
          uVar5 = uVar2;
        }
        if (uVar4 < uVar5) {
          puVar51 = puVar13 + -6;
          uVar5 = uVar4;
        }
        uVar2 = puVar13[-0x20];
        if (uVar29 < uVar5) {
          puVar51 = puVar13 + -5;
        }
        uVar4 = puVar13[-0x1c];
        puVar9 = puVar13 + -0x20;
        if (uVar30 < uVar2) {
          uVar2 = uVar30;
          puVar9 = puVar13 + -0x1f;
        }
        if (uVar31 < uVar2) {
          puVar9 = puVar13 + -0x1e;
          uVar2 = uVar31;
        }
        if (uVar32 < uVar2) {
          puVar9 = puVar13 + -0x1d;
          uVar2 = uVar32;
        }
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          puVar9 = puVar13 + -0x1c;
        }
        uVar4 = puVar13[-0x1a];
        if (uVar33 < uVar2) {
          puVar9 = puVar13 + -0x1b;
          uVar2 = uVar33;
        }
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          puVar9 = puVar13 + -0x1a;
        }
        uVar4 = puVar13[-0x18];
        if (uVar34 < uVar2) {
          puVar9 = puVar13 + -0x19;
          uVar2 = uVar34;
        }
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          puVar9 = puVar13 + -0x18;
        }
        uVar4 = puVar13[-0x16];
        if (uVar35 < uVar2) {
          puVar9 = puVar13 + -0x17;
          uVar2 = uVar35;
        }
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          puVar9 = puVar13 + -0x16;
        }
        uVar4 = puVar13[-0x14];
        if (uVar36 < uVar2) {
          uVar2 = uVar36;
          puVar9 = puVar13 + -0x15;
        }
        if (uVar4 < uVar2) {
          puVar9 = puVar13 + -0x14;
        }
        uVar7 = puVar13[-0x13];
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        puVar37 = puVar13 + -0x13;
        if (uVar2 <= uVar7) {
          puVar37 = puVar9;
        }
        uVar4 = puVar13[-0x12];
        if (uVar2 > uVar7) {
          uVar2 = uVar7;
        }
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          puVar37 = puVar13 + -0x12;
        }
        puVar9 = puVar13 + -0x11;
        if (uVar2 <= puVar13[-0x11]) {
          puVar9 = puVar37;
        }
        uVar2 = puVar13[-4];
        if (uVar29 < uVar5) {
          uVar5 = uVar29;
        }
        uVar7 = *puVar9;
        bVar45 = true;
        uVar4 = uVar5;
        if (uVar2 < uVar5) {
          uVar4 = uVar2;
        }
        uVar16 = puVar13[-3];
        puVar9 = puVar13 + -4;
        if (uVar2 >= uVar5) {
          puVar9 = puVar51;
        }
        if (uVar16 < uVar4) {
          uVar4 = uVar16;
          puVar9 = puVar13 + -3;
        }
        uVar2 = puVar13[-2];
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
          puVar9 = puVar13 + -2;
        }
        uVar2 = puVar13[-1];
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
          puVar9 = puVar13 + -1;
        }
        bVar50 = true;
        if (*puVar13 < uVar4) {
          puVar9 = puVar13;
        }
        uVar2 = *puVar9;
        iVar10 = (int)fVar12 + iVar53;
        fVar55 = fVar71;
        fVar57 = fVar71;
        if ((44015068.0 < fStack_7c) && (0.0 < fStack_94)) {
          fVar57 = 1.0;
          bVar45 = false;
          fVar55 = fStack_ac / fStack_94;
          *(int *)(iVar10 + -0x14) = *(int *)(iVar10 + -0x14) + 1;
        }
        fVar58 = fVar71;
        fVar61 = fVar71;
        if ((44015068.0 < fStack_78) && (0.0 < fStack_90)) {
          bVar50 = false;
          *(int *)(iVar10 + -0x10) = *(int *)(iVar10 + -0x10) + 1;
          fVar58 = fStack_a8 / fStack_90;
          fVar61 = 1.0;
        }
        bVar48 = true;
        bVar11 = true;
        fVar63 = fVar71;
        fVar67 = fVar71;
        if ((44015068.0 < fStack_74) && (0.0 < fStack_8c)) {
          fVar67 = 1.0;
          bVar11 = false;
          fVar63 = fStack_a4 / fStack_8c;
          *(int *)(iVar10 + -0xc) = *(int *)(iVar10 + -0xc) + 1;
        }
        fVar65 = fVar71;
        fVar69 = fVar71;
        if ((44015068.0 < fStack_70) && (0.0 < fStack_88)) {
          bVar48 = false;
          *(int *)(iVar10 + -8) = *(int *)(iVar10 + -8) + 1;
          fVar65 = fStack_a0 / fStack_88;
          fVar69 = 1.0;
        }
        bVar42 = true;
        bVar14 = true;
        fVar56 = fVar71;
        fVar59 = fVar71;
        if ((44015068.0 < fStack_6c) && (0.0 < fStack_84)) {
          fVar59 = 1.0;
          fVar56 = fStack_9c / fStack_84;
          *(int *)(iVar10 + -4) = *(int *)(iVar10 + -4) + 1;
          bVar14 = false;
        }
        fVar60 = fVar71;
        fVar62 = fVar71;
        if ((44015068.0 < fStack_68) && (0.0 < fStack_80)) {
          bVar42 = false;
          *(int *)((int)fVar12 + iVar53) = *(int *)((int)fVar12 + iVar53) + 1;
          fVar60 = fStack_98 / fStack_80;
          fVar62 = 1.0;
        }
        iVar10 = *(int *)((int)param_1[0x58] + iVar52);
        pfVar40 = (float *)(iVar10 + uVar3 * 0x18);
        fVar64 = *pfVar40;
        iVar38 = iVar10 + uVar1 * 0x18;
        fVar70 = *(float *)(iVar38 + 4);
        iVar44 = iVar10 + uVar6 * 0x18;
        fVar12 = fVar72;
        if (fVar64 < fVar55) {
          fVar12 = fVar73;
        }
        fVar64 = fVar64 + fVar12 * fVar57 * (fVar55 - fVar64);
        fVar12 = fVar72;
        if (fVar70 < fVar58) {
          fVar12 = fVar73;
        }
        *pfVar40 = fVar64;
        fVar74 = param_1[0x45];
        fVar68 = *param_1;
        fVar70 = fVar70 + fVar12 * fVar61 * (fVar58 - fVar70);
        fVar66 = *(float *)(iVar44 + 8);
        *(float *)(iVar38 + 4) = fVar70;
        fVar12 = fVar64;
        if (fVar74 <= fVar64) {
          fVar12 = fVar74;
        }
        if (fVar64 <= fVar68) {
          fVar12 = fVar68;
        }
        *pfVar40 = fVar12;
        iVar41 = iVar10 + uVar15 * 0x18;
        fVar64 = *param_1;
        fVar12 = fVar72;
        if (fVar66 < fVar63) {
          fVar12 = fVar73;
        }
        fVar66 = fVar66 + fVar12 * fVar67 * (fVar63 - fVar66);
        fVar12 = fVar70;
        if (param_1[0x46] <= fVar70) {
          fVar12 = param_1[0x46];
        }
        *(float *)(iVar44 + 8) = fVar66;
        if (fVar70 <= fVar64) {
          fVar12 = fVar64;
        }
        *(float *)(iVar38 + 4) = fVar12;
        fVar12 = fVar66;
        if (param_1[0x47] <= fVar66) {
          fVar12 = param_1[0x47];
        }
        if (fVar66 <= *param_1) {
          fVar12 = *param_1;
        }
        fVar64 = *(float *)(iVar41 + 0xc);
        *(float *)(iVar44 + 8) = fVar12;
        fVar12 = fVar72;
        if (fVar64 < fVar65) {
          fVar12 = fVar73;
        }
        fVar64 = fVar64 + fVar12 * fVar69 * (fVar65 - fVar64);
        *(float *)(iVar41 + 0xc) = fVar64;
        fVar12 = fVar64;
        if (param_1[0x48] <= fVar64) {
          fVar12 = param_1[0x48];
        }
        if (fVar64 <= *param_1) {
          fVar12 = *param_1;
        }
        *(float *)(iVar41 + 0xc) = fVar12;
        iVar38 = iVar10 + uVar7 * 0x18;
        iVar10 = iVar10 + uVar2 * 0x18;
        fVar64 = *(float *)(iVar38 + 0x10);
        fVar12 = fVar72;
        if (fVar64 < fVar56) {
          fVar12 = fVar73;
        }
        fVar64 = fVar64 + fVar12 * fVar59 * (fVar56 - fVar64);
        *(float *)(iVar38 + 0x10) = fVar64;
        fVar12 = fVar64;
        if (param_1[0x49] <= fVar64) {
          fVar12 = param_1[0x49];
        }
        if (fVar64 <= *param_1) {
          fVar12 = *param_1;
        }
        *(float *)(iVar38 + 0x10) = fVar12;
        fVar64 = *(float *)(iVar10 + 0x14);
        fVar12 = fVar72;
        if (fVar64 < fVar60) {
          fVar12 = fVar73;
        }
        fVar64 = fVar64 + fVar12 * fVar62 * (fVar60 - fVar64);
        *(float *)(iVar10 + 0x14) = fVar64;
        fVar12 = fVar64;
        if (param_1[0x4a] <= fVar64) {
          fVar12 = param_1[0x4a];
        }
        if (fVar64 <= *param_1) {
          fVar12 = *param_1;
        }
        *(float *)(iVar10 + 0x14) = fVar12;
        pfVar40 = (float *)((int)param_1[0x5b] + iVar53);
        fVar64 = pfVar40[-5];
        fVar70 = pfVar40[-4];
        fVar66 = pfVar40[-3];
        fVar12 = fVar72;
        if (fVar64 < fVar55) {
          fVar12 = fVar73;
        }
        fVar64 = fVar64 + fVar12 * fVar57 * (fVar55 - fVar64);
        fVar12 = fVar72;
        if (fVar70 < fVar58) {
          fVar12 = fVar73;
        }
        pfVar40[-5] = fVar64;
        fVar57 = param_1[0x45];
        fVar55 = *param_1;
        fVar70 = fVar70 + fVar12 * fVar61 * (fVar58 - fVar70);
        pfVar40[-4] = fVar70;
        fVar12 = fVar64;
        if (fVar57 <= fVar64) {
          fVar12 = fVar57;
        }
        if (fVar64 <= fVar55) {
          fVar12 = fVar55;
        }
        pfVar40[-5] = fVar12;
        fVar55 = *param_1;
        fVar12 = fVar72;
        if (fVar66 < fVar63) {
          fVar12 = fVar73;
        }
        fVar66 = fVar66 + fVar12 * fVar67 * (fVar63 - fVar66);
        fVar12 = fVar70;
        if (param_1[0x46] <= fVar70) {
          fVar12 = param_1[0x46];
        }
        pfVar40[-3] = fVar66;
        if (fVar70 <= fVar55) {
          fVar12 = fVar55;
        }
        pfVar40[-4] = fVar12;
        fVar12 = fVar66;
        if (param_1[0x47] <= fVar66) {
          fVar12 = param_1[0x47];
        }
        if (fVar66 <= *param_1) {
          fVar12 = *param_1;
        }
        fVar55 = pfVar40[-2];
        pfVar40[-3] = fVar12;
        fVar12 = fVar72;
        if (fVar55 < fVar65) {
          fVar12 = fVar73;
        }
        fVar55 = fVar55 + fVar12 * fVar69 * (fVar65 - fVar55);
        pfVar40[-2] = fVar55;
        fVar12 = fVar55;
        if (param_1[0x48] <= fVar55) {
          fVar12 = param_1[0x48];
        }
        if (fVar55 <= *param_1) {
          fVar12 = *param_1;
        }
        pfVar40[-2] = fVar12;
        fVar55 = pfVar40[-1];
        fVar12 = fVar72;
        if (fVar55 < fVar56) {
          fVar12 = fVar73;
        }
        fVar55 = fVar55 + fVar12 * fVar59 * (fVar56 - fVar55);
        pfVar40[-1] = fVar55;
        fVar12 = fVar55;
        if (param_1[0x49] <= fVar55) {
          fVar12 = param_1[0x49];
        }
        if (fVar55 <= *param_1) {
          fVar12 = *param_1;
        }
        pfVar40[-1] = fVar12;
        fVar55 = *pfVar40;
        fVar12 = fVar72;
        if (fVar55 < fVar60) {
          fVar12 = fVar73;
        }
        fVar55 = fVar55 + fVar12 * fVar62 * (fVar60 - fVar55);
        *pfVar40 = fVar55;
        fVar12 = fVar55;
        if (param_1[0x4a] <= fVar55) {
          fVar12 = param_1[0x4a];
        }
        if (fVar55 <= *param_1) {
          fVar12 = *param_1;
        }
        *pfVar40 = fVar12;
        fVar12 = param_1[0x61];
        fVar55 = param_1[0x58];
        pfVar40 = (float *)((int)param_1[0x5b] + iVar53);
        fVar57 = param_1[0x5e];
        iVar10 = (int)fVar12 + iVar53;
        if ((!bVar45) && (0x32 < *(int *)(iVar10 + -0x14))) {
          pfVar39 = (float *)(*(int *)((int)fVar57 + iVar52) + uVar3 * 0x18);
          fVar58 = *pfVar39;
          *pfVar39 = fVar58 + (*(float *)(*(int *)((int)fVar55 + iVar52) + uVar3 * 0x18) /
                               pfVar40[-5] - fVar58) * 0.1;
        }
        if ((!bVar50) && (0x32 < *(int *)(iVar10 + -0x10))) {
          iVar38 = *(int *)((int)fVar57 + iVar52) + uVar1 * 0x18;
          fVar58 = *(float *)(iVar38 + 4);
          *(float *)(iVar38 + 4) =
               fVar58 + (*(float *)(*(int *)((int)fVar55 + iVar52) + uVar1 * 0x18 + 4) / pfVar40[-4]
                        - fVar58) * 0.1;
        }
        if ((!bVar11) && (0x32 < *(int *)(iVar10 + -0xc))) {
          iVar38 = *(int *)((int)fVar57 + iVar52) + uVar6 * 0x18;
          fVar58 = *(float *)(iVar38 + 8);
          *(float *)(iVar38 + 8) =
               fVar58 + (*(float *)(*(int *)((int)fVar55 + iVar52) + uVar6 * 0x18 + 8) / pfVar40[-3]
                        - fVar58) * 0.1;
        }
        if ((!bVar48) && (0x32 < *(int *)(iVar10 + -8))) {
          iVar38 = *(int *)((int)fVar57 + iVar52) + uVar15 * 0x18;
          fVar58 = *(float *)(iVar38 + 0xc);
          *(float *)(iVar38 + 0xc) =
               fVar58 + (*(float *)(*(int *)((int)fVar55 + iVar52) + uVar15 * 0x18 + 0xc) /
                         pfVar40[-2] - fVar58) * 0.1;
        }
        if ((!bVar14) && (0x32 < *(int *)(iVar10 + -4))) {
          iVar10 = *(int *)((int)fVar57 + iVar52) + uVar7 * 0x18;
          fVar58 = *(float *)(iVar10 + 0x10);
          *(float *)(iVar10 + 0x10) =
               fVar58 + (*(float *)(*(int *)((int)fVar55 + iVar52) + uVar7 * 0x18 + 0x10) /
                         pfVar40[-1] - fVar58) * 0.1;
        }
        if ((!bVar42) && (0x32 < *(int *)((int)fVar12 + iVar53))) {
          iVar10 = *(int *)((int)fVar57 + iVar52) + uVar2 * 0x18;
          fVar12 = *(float *)(iVar10 + 0x14);
          *(float *)(iVar10 + 0x14) =
               fVar12 + (*(float *)(*(int *)((int)fVar55 + iVar52) + uVar2 * 0x18 + 0x14) / *pfVar40
                        - fVar12) * 0.1;
        }
        uVar1 = param_7[1];
      }
      uVar46 = uVar46 + 1;
      iVar52 = iVar52 + 0xc;
      iVar53 = iVar53 + 0x18;
      iVar43 = iVar43 + 0x104;
    } while (uVar46 < uVar1);
  }
  return;
}


// =========================================================================
// Function: PLHwMbWvWiDzFHKKwgflkGjXUPmrpNmrWozWUdJBQCcbJkVuKQIhjDK_ZqfzwBLBTbWYWYtKmYDWvKTMNjvzlkcascELtnlmIZvtJEXnQQfVWFiDEPyEHXY
// Entry: 0x71ae0de0 | Size: 4 bytes
// =========================================================================

void PLHwMbWvWiDzFHKKwgflkGjXUPmrpNmrWozWUdJBQCcbJkVuKQIhjDK_ZqfzwBLBTbWYWYtKmYDWvKTMNjvzlkcascELtnlmIZvtJEXnQQfVWFiDEPyEHXY
               (void)

{
  return;
}


// =========================================================================
// Function: zzbXSDChGDqdLodnWyfsLmmvtmypxkXLsPKfFXhDqGZbIrcXuwOqYcwALufvPnKnzvJEMzftSNIhNkpPjN_EDqooGdsFzXHkcOu_PkRoIwwezlsnAUIqHsZBANnuzEJeBc_KFRuycSgrBnhPiaXKQPlzZ_sjhxJdLGeWyJEEqNkhfiaSEIOtxAkW
// Entry: 0x71ae0de4 | Size: 1108 bytes
// =========================================================================

void zzbXSDChGDqdLodnWyfsLmmvtmypxkXLsPKfFXhDqGZbIrcXuwOqYcwALufvPnKnzvJEMzftSNIhNkpPjN_EDqooGdsFzXHkcOu_PkRoIwwezlsnAUIqHsZBANnuzEJeBc_KFRuycSgrBnhPiaXKQPlzZ_sjhxJdLGeWyJEEqNkhfiaSEIOtxAkW
               (int param_1,int param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int extraout_r1;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float afStack_240 [66];
  float afStack_138 [66];
  
  iVar17 = *(int *)(param_1 + 0x158);
  iVar12 = iVar17 - *(int *)(param_1 + 0x154);
  if (iVar12 != 0) {
    iVar17 = *(int *)(param_1 + 4);
  }
  if (iVar12 != 0 && iVar17 != 0) {
    piVar18 = *(int **)(param_2 + 4);
    uVar27 = 0;
    piVar20 = *(int **)(param_1 + 300);
    uVar21 = *(uint *)(param_1 + 4);
    iVar17 = *(int *)(param_1 + 0x154);
    iVar2 = *(int *)(param_2 + 8);
    fVar29 = (float)VectorUnsignedToFloat
                              ((((int *)piVar18[1])[1] - *(int *)piVar18[1] >> 2) * -0x3f03f03f,
                               (byte)(in_fpscr >> 0x16) & 3);
    uVar13 = (iVar12 >> 2) * -0x55555555;
    if (uVar13 < 2) {
      uVar13 = 1;
    }
    uVar3 = 1;
    do {
      if (uVar3 != 0) {
        piVar4 = (int *)(param_3 + uVar27 * 0xc);
        iVar22 = *piVar4;
        uVar14 = (piVar4[1] - iVar22 >> 2) * -0x3f03f03f;
        FUN_71ba2da8(*piVar20 + *(int *)(iVar2 + 0x14) + *piVar18);
        iVar26 = *(int *)(iVar17 + uVar27 * 0xc);
        uVar3 = 0;
        iVar12 = extraout_r1;
        do {
          imp___aeabi_memclr8(afStack_138,0x104);
          imp___aeabi_memclr8(afStack_240,0x104);
          uVar9 = uVar3 + 1;
          uVar15 = piVar20[uVar3];
          uVar3 = piVar20[uVar9];
          if (uVar14 < (uint)piVar20[uVar9]) {
            uVar3 = uVar14;
          }
          if (uVar15 < uVar3) {
            iVar5 = *piVar18;
            iVar10 = piVar18[1];
            iVar19 = iVar22 + uVar15 * 0x104;
            do {
              piVar4 = (int *)(iVar10 + iVar12 * 0xc);
              iVar23 = *piVar4;
              iVar6 = piVar4[1];
              if (iVar6 != iVar23) {
                uVar24 = 0;
                uVar25 = (iVar6 - iVar23 >> 2) * -0x3f03f03f;
                if (uVar25 < 2) {
                  uVar25 = 1;
                }
                do {
                  iVar6 = 0;
                  do {
                    pfVar7 = (float *)(iVar23 + iVar6);
                    pfVar8 = (float *)((int)afStack_138 + iVar6);
                    iVar6 = iVar6 + 4;
                    *pfVar8 = *pfVar8 + *pfVar7 * (1.0 / fVar29);
                  } while (iVar6 != 0x104);
                  uVar24 = uVar24 + 1;
                  iVar23 = iVar23 + 0x104;
                } while (uVar24 != uVar25);
              }
              iVar6 = 0;
              do {
                pfVar7 = (float *)(iVar19 + iVar6);
                pfVar8 = (float *)((int)afStack_240 + iVar6);
                iVar6 = iVar6 + 4;
                *pfVar8 = *pfVar8 + *pfVar7;
              } while (iVar6 != 0x104);
              iVar19 = iVar19 + 0x104;
              uVar15 = uVar15 + 1;
              iVar6 = 0;
              if (iVar12 < iVar5 + -1) {
                iVar6 = iVar12 + 1;
              }
              iVar12 = iVar6;
            } while (uVar15 != uVar3);
          }
          iVar5 = 0;
          do {
            pfVar7 = (float *)((int)afStack_240 + iVar5);
            pfVar8 = (float *)((int)afStack_138 + iVar5);
            pfVar11 = (float *)(iVar26 + iVar5);
            iVar5 = iVar5 + 4;
            *pfVar11 = *pfVar8 * *pfVar7;
          } while (iVar5 != 0x104);
          iVar26 = iVar26 + 0x104;
          uVar3 = uVar9;
        } while (uVar9 < uVar21);
        if (1 < uVar21) {
          iVar12 = uVar21 - 1;
          pauVar1 = *(undefined1 (**) [16])(iVar17 + uVar27 * 0xc);
          do {
            pauVar16 = (undefined1 (*) [16])(pauVar1[0x10] + 4);
            iVar12 = iVar12 + -1;
            auVar30 = *pauVar16;
            auVar31 = *(undefined1 (*) [16])(pauVar1[0x11] + 4);
            auVar32 = FloatVectorAdd(pauVar1[2],*(undefined1 (*) [16])(pauVar1[0x12] + 4),2);
            auVar33 = pauVar1[3];
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x12] + 4) = auVar32._0_8_;
            *(longlong *)(pauVar1[0x12] + 0xc) = auVar32._8_8_;
            auVar33 = FloatVectorAdd(auVar33,*(undefined1 (*) [16])(pauVar1[0x13] + 4),2);
            auVar31 = FloatVectorAdd(pauVar1[1],auVar31,2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x13] + 4) = auVar33._0_8_;
            *(longlong *)(pauVar1[0x13] + 0xc) = auVar33._8_8_;
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x11] + 4) = auVar31._0_8_;
            *(longlong *)(pauVar1[0x11] + 0xc) = auVar31._8_8_;
            auVar30 = FloatVectorAdd(*pauVar1,auVar30,2);
            auVar31 = FloatVectorAdd(pauVar1[4],*(undefined1 (*) [16])(pauVar1[0x14] + 4),2);
            *(longlong *)*pauVar16 = auVar30._0_8_;
            *(longlong *)(pauVar1[0x10] + 0xc) = auVar30._8_8_;
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x14] + 4) = auVar31._0_8_;
            *(longlong *)(pauVar1[0x14] + 0xc) = auVar31._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[5],*(undefined1 (*) [16])(pauVar1[0x15] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x15] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x15] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[6],*(undefined1 (*) [16])(pauVar1[0x16] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x16] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x16] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[7],*(undefined1 (*) [16])(pauVar1[0x17] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x17] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x17] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[8],*(undefined1 (*) [16])(pauVar1[0x18] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x18] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x18] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[9],*(undefined1 (*) [16])(pauVar1[0x19] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x19] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x19] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[10],*(undefined1 (*) [16])(pauVar1[0x1a] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x1a] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x1a] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[0xb],*(undefined1 (*) [16])(pauVar1[0x1b] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x1b] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x1b] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[0xc],*(undefined1 (*) [16])(pauVar1[0x1c] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x1c] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x1c] + 0xc) = auVar30._8_8_;
            auVar30 = FloatVectorAdd(pauVar1[0xd],*(undefined1 (*) [16])(pauVar1[0x1d] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x1d] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x1d] + 0xc) = auVar30._8_8_;
            auVar31 = FloatVectorAdd(pauVar1[0xe],*(undefined1 (*) [16])(pauVar1[0x1e] + 4),2);
            auVar30 = pauVar1[0xf];
            fVar28 = *(float *)pauVar1[0x10];
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x1e] + 4) = auVar31._0_8_;
            *(longlong *)(pauVar1[0x1e] + 0xc) = auVar31._8_8_;
            auVar30 = FloatVectorAdd(auVar30,*(undefined1 (*) [16])(pauVar1[0x1f] + 4),2);
            *(longlong *)*(undefined1 (*) [16])(pauVar1[0x1f] + 4) = auVar30._0_8_;
            *(longlong *)(pauVar1[0x1f] + 0xc) = auVar30._8_8_;
            *(float *)(pauVar1[0x20] + 4) = fVar28 + *(float *)(pauVar1[0x20] + 4);
            pauVar1 = pauVar16;
          } while (iVar12 != 0);
        }
      }
      uVar27 = uVar27 + 1;
      uVar3 = uVar21;
    } while (uVar27 != uVar13);
  }
  return;
}


// =========================================================================
// Function: qXFVOnsNnNzyihnCpmBu_YRVkphimeBiuoPgXmDBVFSlUpXhSTaRueqaPhF_NVaXYcEIPtT
// Entry: 0x71ae1238 | Size: 276 bytes
// =========================================================================

void qXFVOnsNnNzyihnCpmBu_YRVkphimeBiuoPgXmDBVFSlUpXhSTaRueqaPhF_NVaXYcEIPtT(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  iVar10 = *(int *)(param_1 + 400);
  if (*(int *)(param_1 + 0x194) != iVar10) {
    uVar9 = 0;
    uVar11 = (*(int *)(param_1 + 0x194) - iVar10 >> 2) * -0x3f03f03f;
    iVar1 = *(int *)(param_1 + 0x154);
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    do {
      iVar7 = iVar10 + uVar9 * 0x104;
      imp___aeabi_memclr4(iVar7,0x104);
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 != 0) {
        iVar3 = 0;
        iVar2 = *(int *)(iVar1 + uVar9 * 0xc) + -0x104;
        iVar4 = iVar2;
        do {
          if (iVar5 != 0) {
            iVar6 = iVar5 + -1;
            pfVar8 = (float *)(iVar4 + iVar5 * 0x104);
            fVar12 = *(float *)(iVar2 + iVar5 * 0x104 + iVar3 * 4);
            do {
              if (*pfVar8 < fVar12 * 0.9) break;
              *(int *)(iVar7 + iVar3 * 4) = iVar6;
              iVar6 = iVar6 + -1;
              pfVar8 = pfVar8 + -0x41;
            } while (iVar6 != -1);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 0x41) break;
          iVar5 = *(int *)(param_1 + 4);
          iVar4 = iVar4 + 4;
        } while( true );
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}


// =========================================================================
// Function: FUN_71ae1350
// Entry: 0x71ae1350 | Size: 544 bytes
// =========================================================================

void FUN_71ae1350(int param_1,undefined4 param_2,float *param_3)

{
  *param_3 = *(float *)(param_1 + 4) + 0.0 + *(float *)(param_1 + 8) + *(float *)(param_1 + 0xc) +
             *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18) +
             *(float *)(param_1 + 0x1c);
  param_3[1] = *(float *)(param_1 + 0x20) + 0.0 + *(float *)(param_1 + 0x24) +
               *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x30)
               + *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38) +
               *(float *)(param_1 + 0x3c);
  param_3[2] = *(float *)(param_1 + 0x40) + 0.0 + *(float *)(param_1 + 0x44) +
               *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x50)
               + *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x58) +
               *(float *)(param_1 + 0x5c);
  param_3[3] = *(float *)(param_1 + 0x60) + 0.0 + *(float *)(param_1 + 100) +
               *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x70)
               + *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x78) +
               *(float *)(param_1 + 0x7c);
  param_3[4] = *(float *)(param_1 + 0x80) + 0.0 + *(float *)(param_1 + 0x84) +
               *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x90)
               + *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x98) +
               *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa4)
               + *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xac) +
               *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb8)
               + *(float *)(param_1 + 0xbc);
  param_3[5] = *(float *)(param_1 + 0xc0) + 0.0 + *(float *)(param_1 + 0xc4) +
               *(float *)(param_1 + 200) + *(float *)(param_1 + 0xcc) + *(float *)(param_1 + 0xd0) +
               *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xdc)
               + *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xe4) +
               *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xf0)
               + *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xf8) +
               *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x100);
  return;
}


// =========================================================================
// Function: FUN_71ae1da4
// Entry: 0x71ae1da4 | Size: 352 bytes
// =========================================================================

undefined4 * FUN_71ae1da4(undefined4 *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *unaff_r5;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puStack_2c;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  if (param_2 != 0) {
    puStack_2c = param_1;
    if (0x15555555 < param_2) {
      FUN_71ae2298(param_1);
LAB_71ae1ec8:
      *unaff_r5 = 0;
      unaff_r5[1] = 0;
      unaff_r5[2] = 0;
      FUN_71ae215c(unaff_r5);
      if (*unaff_r5 != 0) {
        unaff_r5[1] = *unaff_r5;
        thunk_qNQrlu();
      }
      param_1[1] = unaff_r5;
      FUN_71ae21c4(&puStack_2c);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar3 = param_2 * 0xc;
    unaff_r5 = (int *)thunk_MwhHq(iVar3);
    piVar1 = unaff_r5 + param_2 * 3;
    param_1[2] = piVar1;
    iVar5 = *param_3;
    iVar4 = param_3[1] - iVar5;
    param_1[1] = unaff_r5;
    *param_1 = unaff_r5;
    if (iVar4 == 0) {
      imp___aeabi_memclr4(unaff_r5,((iVar3 - 0xcU) / 0xc) * 0xc + 0xc);
    }
    else {
      if (0xaaaaaaa < (uint)((iVar4 >> 3) * -0x55555555)) goto LAB_71ae1ec8;
      do {
        *unaff_r5 = 0;
        unaff_r5[1] = 0;
        unaff_r5[2] = 0;
        iVar2 = thunk_MwhHq(iVar4);
        *unaff_r5 = iVar2;
        unaff_r5[1] = iVar2;
        unaff_r5[2] = iVar2 + iVar4;
        imp___aeabi_memcpy4(iVar2,iVar5,iVar4);
        unaff_r5[1] = iVar2 + iVar4;
        iVar3 = iVar3 + -0xc;
        unaff_r5 = unaff_r5 + 3;
      } while (iVar3 != 0);
    }
    param_1[1] = piVar1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ae20a4
// Entry: 0x71ae20a4 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71ae20a4(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    piVar2 = (int *)param_1[1];
    piVar1 = piVar3;
    if (piVar2 != piVar3) {
      do {
        piVar1 = piVar2 + -3;
        if (*piVar1 != 0) {
          piVar2[-2] = *piVar1;
          thunk_qNQrlu();
        }
        piVar2 = piVar1;
      } while (piVar1 != piVar3);
      piVar1 = (int *)*param_1;
    }
    param_1[1] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ae215c
// Entry: 0x71ae215c | Size: 20 bytes
// =========================================================================

void FUN_71ae215c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ae21c4
// Entry: 0x71ae21c4 | Size: 132 bytes
// =========================================================================

undefined4 * FUN_71ae21c4(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar3 = (undefined4 *)*param_1;
    piVar4 = (int *)*puVar3;
    if (piVar4 != (int *)0x0) {
      piVar2 = (int *)puVar3[1];
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
        piVar1 = *(int **)*param_1;
      }
      puVar3[1] = piVar4;
      thunk_qNQrlu(piVar1);
      return param_1;
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ae2298
// Entry: 0x71ae2298 | Size: 20 bytes
// =========================================================================

void FUN_71ae2298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: DEncUWwUvZjPg_UYrnhwuSIhebzTYUMUGKvjtAkjRWkLIPHLCwIBeKjxbL
// Entry: 0x71ae2300 | Size: 696 bytes
// =========================================================================

undefined4 *
DEncUWwUvZjPg_UYrnhwuSIhebzTYUMUGKvjtAkjRWkLIPHLCwIBeKjxbL
          (undefined4 *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *unaff_r10;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(&DAT_712048a4);
  } while (!bVar2);
  DataMemoryBarrier(0xb);
  DAT_712048a4 = DAT_712048a4 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 0xd5);
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = *(undefined4 *)(param_2 + 200);
  iVar4 = *(int *)(param_2 + 0x54);
  iStack_50 = 0;
  iStack_54 = 0;
  iStack_58 = 0;
  if (iVar4 * 0x40 != 0) {
    if (0x3fffffff < (uint)(iVar4 * 0x40)) {
      FUN_71a0103c(&iStack_58);
      goto LAB_71ae258c;
    }
    iStack_58 = thunk_MwhHq(iVar4 << 8);
    iVar8 = iStack_58 + iVar4 * 0x100;
    iStack_50 = iVar8;
    imp___aeabi_memclr4(iStack_58,iVar4 << 8);
    iStack_54 = iVar8;
  }
  puStack_5c = param_1 + 3;
  FUN_71a7706c(puStack_5c,param_3,&iStack_58);
  if (iStack_58 != 0) {
    iStack_54 = iStack_58;
    thunk_qNQrlu();
  }
  param_1[6] = 0;
  iStack_50 = *(int *)(param_2 + 0x78);
  uStack_4c = uStack_4c & 0xffffff00;
  thunk_qchnQtEzFelnFdFppwXATpqzXwrEiosDUdZkSBR_WCcPVxjvbhXcuuJ_rZleSETmaioxGxliBSJeoalgGLf
            (&uStack_48,param_2);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[9] = 0;
  uStack_44 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iStack_58 = *(int *)(param_2 + 200);
  uStack_30 = 0;
  iStack_54 = 0;
  uStack_48 = uStack_48 & 0xffffff00;
  uStack_2c = 0xfffffff6;
  if (param_3 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = uStack_40;
    param_1[0xe] = uStack_3c;
    param_1[0xf] = uStack_38;
  }
  else {
    unaff_r10 = param_1 + 9;
    if (0x5555555 < param_3) {
LAB_71ae258c:
      FUN_71ae32a8(unaff_r10);
      param_1[10] = param_2;
      thunk_qNQrlu(param_2);
      FUN_71aaf264(puStack_5c);
      FUN_71a76530(param_1);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar4 = thunk_MwhHq(param_3 * 0x30);
    iVar8 = iVar4 + param_3 * 0x30;
    iVar5 = 0;
    param_1[9] = iVar4;
    param_1[10] = iVar4;
    param_1[0xb] = iVar8;
    do {
      piVar6 = (int *)(iVar4 - iVar5);
      iVar5 = iVar5 + -0x30;
      *piVar6 = iStack_58;
      piVar6[1] = iStack_54;
      piVar6[2] = iStack_50;
      piVar6[3] = uStack_4c;
      *(ulonglong *)(piVar6 + 4) = CONCAT44(uStack_44,uStack_48);
      *(ulonglong *)(piVar6 + 6) = CONCAT44(uStack_3c,uStack_40);
      *(ulonglong *)(piVar6 + 8) = CONCAT44(uStack_34,uStack_38);
      *(ulonglong *)(piVar6 + 10) = CONCAT44(uStack_2c,uStack_30);
    } while (param_3 * -0x30 - iVar5 != 0);
    param_1[10] = iVar8;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    iVar8 = thunk_MwhHq(param_3 << 2);
    iVar9 = iVar8 + param_3 * 4;
    param_1[0xe] = iVar9;
    param_1[0xc] = iVar8;
    imp___aeabi_memclr4(iVar8,param_3 << 2);
    uVar3 = param_1[2];
    iVar5 = 0;
    param_1[0xf] = 0;
    param_1[0xd] = iVar9;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    do {
      puVar7 = (undefined4 *)(iVar4 + iVar5);
      iVar5 = iVar5 + 0x30;
      *(undefined1 *)(puVar7 + 4) = 0;
      *puVar7 = uVar3;
      puVar7[1] = 0;
      puVar7[0xb] = 0xfffffff6;
      puVar7[5] = 0;
      puVar7[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar7[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar7[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar7[10] = 0;
    } while (param_3 * 0x30 - iVar5 != 0);
    if (0 < iVar9 - iVar8) {
      imp___aeabi_memclr4(iVar8);
    }
  }
  return param_1;
}


// =========================================================================
// Function: NLYlivvyYybSaTxR_HHcPFpCHIqiewIByd
// Entry: 0x71ae2604 | Size: 120 bytes
// =========================================================================

void NLYlivvyYybSaTxR_HHcPFpCHIqiewIByd(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x24);
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (puVar2 != puVar1) {
    do {
      *(undefined1 *)(puVar2 + 4) = 0;
      *puVar2 = *(undefined4 *)(param_1 + 8);
      puVar2[5] = 0;
      puVar2[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar2[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar2[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar3 = puVar2 + 10;
      puVar2[0xb] = 0xfffffff6;
      puVar2[1] = 0;
      puVar2 = puVar2 + 0xc;
      *puVar3 = 0;
    } while (puVar2 != puVar1);
  }
  if (0 < *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) {
    imp___aeabi_memclr4();
  }
  return;
}


// =========================================================================
// Function: JrLkJVBRJeoVXnubdeRpAzbkKFAJQB
// Entry: 0x71ae267c | Size: 172 bytes
// =========================================================================

int * JrLkJVBRJeoVXnubdeRpAzbkKFAJQB(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    thunk_qNQrlu();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    thunk_qNQrlu();
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)param_1[4];
    piVar1 = piVar4;
    if (piVar3 != piVar4) {
      do {
        piVar1 = piVar3 + -3;
        if (*piVar1 != 0) {
          piVar3[-2] = *piVar1;
          thunk_qNQrlu();
        }
        piVar3 = piVar1;
      } while (piVar1 != piVar4);
      piVar1 = (int *)param_1[3];
    }
    param_1[4] = (int)piVar4;
    thunk_qNQrlu(piVar1);
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: Mp_fxJiHsmXFELIkBqJURjgfJcuNE_VRrxMIZpaNy
// Entry: 0x71ae2728 | Size: 16 bytes
// =========================================================================

void Mp_fxJiHsmXFELIkBqJURjgfJcuNE_VRrxMIZpaNy(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


// =========================================================================
// Function: dOGAOLNEiOOtASOOatZzZKgiarYSwDbTZUFsIlPZgcNGoOquNCsinhD_GpSythhvShcoglbfpkvbWgXKBYQpUUKlioaaAqSkAHB_rdqVjzFwnf_VnHPhlFIZomjw
// Entry: 0x71ae2738 | Size: 244 bytes
// =========================================================================

void dOGAOLNEiOOtASOOatZzZKgiarYSwDbTZUFsIlPZgcNGoOquNCsinhD_GpSythhvShcoglbfpkvbWgXKBYQpUUKlioaaAqSkAHB_rdqVjzFwnf_VnHPhlFIZomjw
               (int param_1,int *param_2,uint param_3,undefined4 param_4,byte *param_5,
               float *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  
  uVar2 = (param_2[1] - *param_2 >> 2) - 1;
  iVar7 = 0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(uint *)(param_1 + 0x20) < uVar2) {
    iVar7 = *(uint *)(param_1 + 0x20) + 1;
  }
  *(int *)(param_1 + 0x1c) = iVar7;
  uVar5 = iVar7 + 0x3fU;
  if (uVar2 < iVar7 + 0x3fU) {
    uVar5 = uVar2;
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  if (param_3 == 0) {
    param_2 = (int *)0x0;
  }
  thunk_aFwUTTLcmCVxnUqnvBqjFcYShZkCNrDZjDHYnVxknxeDdwlbhyzHscsEc_ZqUkzgMtfsQpHGLVHDSJEaZpYEckjMDaqTmrGLWpHZazzdQpTKgJjijvOTOejec_tMpuOa
            (param_1,param_2,param_3);
  pfVar8 = *(float **)(param_1 + 0x24);
  piVar9 = *(int **)(param_1 + 0x30);
  bVar4 = *(byte *)(pfVar8 + 3);
  *param_5 = bVar4;
  fVar6 = *pfVar8;
  *(int *)(param_1 + 0x3c) = *piVar9;
  *param_6 = fVar6;
  if (1 < param_3) {
    iVar7 = param_3 - 1;
    do {
      piVar9 = piVar9 + 1;
      cVar1 = *(char *)(pfVar8 + 0xf);
      *param_5 = bVar4 & 1 | cVar1 != '\0';
      fVar10 = pfVar8[0xc];
      fVar6 = *param_6;
      if (*param_6 < fVar10) {
        fVar6 = fVar10;
      }
      *param_6 = fVar6;
      iVar3 = *(int *)(param_1 + 0x3c);
      if (*piVar9 < *(int *)(param_1 + 0x3c)) {
        iVar3 = *piVar9;
      }
      iVar7 = iVar7 + -1;
      *(int *)(param_1 + 0x3c) = iVar3;
      pfVar8 = pfVar8 + 0xc;
      bVar4 = bVar4 | cVar1 != '\0';
    } while (iVar7 != 0);
  }
  return;
}


// =========================================================================
// Function: RGuGkvBOsndQfozQdmPPpZmBmQQROLiuQBsNzjktFBSdOnnY
// Entry: 0x71ae282c | Size: 48 bytes
// =========================================================================

void RGuGkvBOsndQfozQdmPPpZmBmQQROLiuQBsNzjktFBSdOnnY(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2 - 1;
  iVar2 = 0;
  if (*(uint *)(param_1 + 0x20) < uVar1) {
    iVar2 = *(uint *)(param_1 + 0x20) + 1;
  }
  uVar3 = iVar2 + 0x3fU;
  if (uVar1 < iVar2 + 0x3fU) {
    uVar3 = uVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  *(uint *)(param_1 + 0x20) = uVar3;
  return;
}


// =========================================================================
// Function: aFwUTTLcmCVxnUqnvBqjFcYShZkCNrDZjDHYnVxknxeDdwlbhyzHscsEc_ZqUkzgMtfsQpHGLVHDSJEaZpYEckjMDaqTmrGLWpHZazzdQpTKgJjijvOTOejec_tMpuOa
// Entry: 0x71ae285c | Size: 524 bytes
// =========================================================================

void aFwUTTLcmCVxnUqnvBqjFcYShZkCNrDZjDHYnVxknxeDdwlbhyzHscsEc_ZqUkzgMtfsQpHGLVHDSJEaZpYEckjMDaqTmrGLWpHZazzdQpTKgJjijvOTOejec_tMpuOa
               (int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int extraout_r1;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  
  iVar12 = 0;
  if (param_3 != 0) {
    iVar12 = param_2;
  }
  thunk_ambRSIyZujmqV_bziGsUxQieehUaeetKwtQSLMPXQZZIwwUzFOlXsgAQDyIJhMBLmrykyAkAfXpMQFCOHFaCpFPAUzjBSPBYMYlnaFgzfUsmdFrx
            (param_1,iVar12,param_3);
  if (param_3 != 0) {
    iVar12 = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1 + 0xc) + iVar12 * 0xc);
      iVar8 = *piVar4;
      fVar7 = *(float *)(param_1 + 0x1c);
      pfVar13 = (float *)(*(int *)(param_1 + 0x24) + iVar12 * 0x30);
      iVar5 = piVar4[1];
      iVar10 = 0;
      if (iVar5 != iVar8) {
        iVar10 = iVar8;
      }
      iVar5 = iVar5 - iVar8 >> 2;
      fVar6 = (float)(iVar5 - 1);
      fVar16 = pfVar13[1];
      if ((uint)fVar6 < (uint)pfVar13[1]) {
        fVar16 = fVar6;
      }
      if ((uint)fVar7 <= (uint)*(float *)(param_1 + 0x20)) {
        pfVar9 = (float *)(iVar10 + (int)fVar7 * 4);
        fVar6 = *(float *)(iVar10 + (int)fVar16 * 4);
        fVar6 = fVar6 * fVar6;
        do {
          fVar15 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar15 = fVar15 * fVar15;
          uVar1 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar6) << 0x1f |
                  (uint)(fVar15 == fVar6) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar15) || NAN(fVar6)) << 0x1c;
          bVar2 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar16 = fVar7;
            fVar6 = fVar15;
          }
          fVar7 = (float)((int)fVar7 + 1);
        } while ((uint)fVar7 <= (uint)*(float *)(param_1 + 0x20));
      }
      iVar8 = *(int *)(param_1 + 0x30);
      pfVar13[1] = fVar16;
      *(uint *)(iVar8 + iVar12 * 4) = (uint)fVar16 >> 6;
      if ((*(uint *)(param_1 + 0x18) < 0x4e3) || (*(char *)(pfVar13 + 3) == '\0')) {
        fVar7 = *pfVar13;
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(fVar7 == 0.0) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar16 = ABS(*(float *)(iVar10 + (int)pfVar13[1] * 4));
          in_fpscr = uVar1 | (uint)(fVar7 < fVar16) << 0x1f;
          if (SUB41(in_fpscr >> 0x1f,0)) {
            fVar7 = fVar16;
          }
          goto LAB_71ae2a2c;
        }
      }
      else {
        fVar7 = ABS(*(float *)(iVar10 + (int)pfVar13[1] * 4));
LAB_71ae2a2c:
        *pfVar13 = fVar7;
      }
      bVar14 = *(char *)(param_1 + 4) == '\0';
      if (!bVar14) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 == 0.0) << 0x1e;
        bVar14 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (!bVar14) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 < 0.01) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          fVar7 = 0.01;
        }
        *pfVar13 = fVar7;
      }
      piVar4 = (int *)(param_2 + iVar12 * 0xc);
      fVar7 = (float)VectorUnsignedToFloat(piVar4[1] - *piVar4 >> 2,(byte)(in_fpscr >> 0x16) & 3);
      piVar4 = (int *)*param_4;
      pfVar13[2] = (float)(int)(fVar7 * 0.015625);
      iVar8 = *(int *)(iVar8 + iVar12 * 4);
      iVar11 = piVar4[1];
      FUN_71ba2da8((piVar4[5] - iVar8) + *piVar4,*piVar4);
      uVar3 = thunk_mKcMcUAoMXMxrrjcxakCpLNaqs_IJIuSYAKgfbAbSqzIyTSuhiGjkicSz_CtuTkOUWcPRXQzlUCEzVbHyeSdiCGSygrB_GVgKZLtbBSsfkLVGwqdlmWFnBSSctT
                        (pfVar13 + 4,iVar10,iVar5,param_1 + 0x1c,iVar11 + extraout_r1 * 0x14,
                         pfVar13[1],iVar8);
      *(undefined1 *)(pfVar13 + 3) = uVar3;
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_3);
  }
  return;
}


// =========================================================================
// Function: ambRSIyZujmqV_bziGsUxQieehUaeetKwtQSLMPXQZZIwwUzFOlXsgAQDyIJhMBLmrykyAkAfXpMQFCOHFaCpFPAUzjBSPBYMYlnaFgzfUsmdFrx
// Entry: 0x71ae2a70 | Size: 280 bytes
// =========================================================================

void ambRSIyZujmqV_bziGsUxQieehUaeetKwtQSLMPXQZZIwwUzFOlXsgAQDyIJhMBLmrykyAkAfXpMQFCOHFaCpFPAUzjBSPBYMYlnaFgzfUsmdFrx
               (int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  
  if (param_3 != 0) {
    iVar10 = *(int *)(param_1 + 0xc);
    iVar9 = 0;
    do {
      piVar3 = (int *)(iVar10 + iVar9 * 0xc);
      iVar8 = *piVar3;
      piVar11 = (int *)(param_2 + iVar9 * 0xc);
      uVar6 = piVar3[1] - iVar8 >> 2;
      uVar7 = piVar11[1] - *piVar11 >> 2;
      if (uVar6 < uVar7) {
        FUN_71a66dde(piVar3,uVar7 - uVar6);
        iVar10 = *(int *)(param_1 + 0xc);
        iVar8 = *(int *)(iVar10 + iVar9 * 0xc);
      }
      else if (uVar7 < uVar6) {
        piVar3[1] = iVar8 + (piVar11[1] - *piVar11);
      }
      uVar6 = *(uint *)(param_1 + 0x1c);
      uVar7 = *(uint *)(param_1 + 0x20);
      if (0 < (int)(uVar7 * 4 + uVar6 * -4 + 4)) {
        imp___aeabi_memclr4();
      }
      if (uVar6 < 3) {
        uVar6 = 2;
      }
      if (uVar6 <= uVar7) {
        pfVar4 = (float *)(iVar8 + uVar6 * 4);
        pfVar5 = (float *)(*piVar11 + uVar6 * 4);
        do {
          pfVar1 = pfVar5 + -2;
          uVar6 = uVar6 + 1;
          pfVar2 = pfVar5 + -1;
          fVar12 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = *pfVar4 + fVar12 * 0.7929742 + *pfVar2 * -0.3607213 + *pfVar1 * -0.47047767;
          pfVar4 = pfVar4 + 1;
        } while (uVar6 <= uVar7);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_3);
  }
  return;
}


// =========================================================================
// Function: ZEqFaaqJFpJsePcwxFwuwOMyRlCSwEgbydJNySvTqChoqxertlEeTBHgaMmJhzbjYjkfzpQnALTSNjqChHZCx_zSxpujnbMOXIyu
// Entry: 0x71ae2b94 | Size: 144 bytes
// =========================================================================

void ZEqFaaqJFpJsePcwxFwuwOMyRlCSwEgbydJNySvTqChoqxertlEeTBHgaMmJhzbjYjkfzpQnALTSNjqChHZCx_zSxpujnbMOXIyu
               (int param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  if ((*(uint *)(param_1 + 0x18) < 0x4e3) || (*(char *)(param_4 + 3) == '\0')) {
    fVar1 = *param_4;
    if (fVar1 == 0.0) goto LAB_71ae2bf4;
    fVar2 = ABS(*(float *)(param_2 + (int)param_4[1] * 4));
    if (fVar1 < fVar2) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = ABS(*(float *)(param_2 + (int)param_4[1] * 4));
  }
  *param_4 = fVar1;
LAB_71ae2bf4:
  if (*(char *)(param_1 + 4) != '\0' && fVar1 != 0.0) {
    if (fVar1 < 0.01) {
      fVar1 = 0.01;
    }
    *param_4 = fVar1;
    return;
  }
  return;
}


// =========================================================================
// Function: mKcMcUAoMXMxrrjcxakCpLNaqs_IJIuSYAKgfbAbSqzIyTSuhiGjkicSz_CtuTkOUWcPRXQzlUCEzVbHyeSdiCGSygrB_GVgKZLtbBSsfkLVGwqdlmWFnBSSctT
// Entry: 0x71ae2c28 | Size: 532 bytes
// =========================================================================

bool mKcMcUAoMXMxrrjcxakCpLNaqs_IJIuSYAKgfbAbSqzIyTSuhiGjkicSz_CtuTkOUWcPRXQzlUCEzVbHyeSdiCGSygrB_GVgKZLtbBSsfkLVGwqdlmWFnBSSctT
               (char *param_1,int param_2,int param_3,uint *param_4,int param_5,uint param_6,
               int param_7)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = *param_4;
  if (uVar6 == 0) {
    fVar11 = 0.0;
    uVar10 = param_6 - 0x40;
    if (param_6 < 0x40) {
      uVar10 = 0;
    }
    iVar7 = param_6 + 0x80;
    if (param_3 - 0x81U < param_6) {
      iVar7 = 0;
    }
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    *(uint *)(param_1 + 0xc) = uVar10;
    *(int *)(param_1 + 0x10) = iVar7;
    fVar12 = fVar11;
  }
  else {
    fVar11 = *(float *)(param_1 + 8);
    uVar10 = *(uint *)(param_1 + 0xc);
    fVar12 = *(float *)(param_1 + 4);
  }
  uVar4 = param_4[1];
  uVar3 = uVar4 + 1;
  if (uVar10 < uVar4 + 1) {
    uVar3 = uVar10;
  }
  if (uVar6 < uVar3) {
    pfVar8 = (float *)(param_2 + uVar6 * 4);
    iVar7 = uVar3 - uVar6;
    do {
      fVar13 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar13 = ABS(fVar13);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f;
      fVar12 = fVar12 + fVar13;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        fVar11 = fVar13;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar6 = *param_4;
  if (*param_4 < uVar3) {
    uVar6 = uVar3;
  }
  if (uVar6 <= uVar4) {
    pfVar8 = (float *)(param_2 + uVar6 * 4);
    do {
      fVar13 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      uVar6 = uVar6 + 1;
      fVar13 = ABS(fVar13);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f;
      fVar12 = fVar12 + fVar13;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        fVar11 = fVar13;
      }
    } while (uVar6 <= uVar4);
  }
  *(float *)(param_1 + 4) = fVar12;
  *(float *)(param_1 + 8) = fVar11;
  if (uVar4 == param_3 - 1U) {
    fVar14 = ABS(*(float *)(param_2 + param_6 * 4));
    fVar13 = (float)VectorUnsignedToFloat((uVar10 + param_3) - uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (fVar12 / fVar13) * 10.0;
    *param_1 = fVar12 < fVar14 && fVar11 + fVar11 < fVar14;
    if (fVar14 <= fVar12 || fVar14 <= fVar11 + fVar11) goto LAB_71ae2e24;
  }
  else if (*param_1 == '\0') goto LAB_71ae2e24;
  iVar7 = *(int *)(param_5 + 4);
  if (iVar7 < 1) {
    if (*(int *)(param_1 + 0x1c) == param_7) goto LAB_71ae2e24;
  }
  else {
    iVar5 = 0;
    iVar1 = *(int *)(param_5 + 8);
    bVar2 = true;
    do {
      iVar9 = 0;
      fVar11 = 0.0;
      do {
        pfVar8 = (float *)(iVar1 + iVar9);
        iVar9 = iVar9 + 4;
        fVar11 = fVar11 + *pfVar8 * *pfVar8;
      } while (iVar9 != 0x100);
      if (*(float *)(param_1 + 0x14) < fVar11) break;
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0x100;
      bVar2 = iVar5 < iVar7;
    } while (iVar5 != iVar7);
    if (*(int *)(param_1 + 0x1c) == param_7) {
      if (bVar2) {
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      goto LAB_71ae2e24;
    }
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  *(int *)(param_1 + 0x1c) = param_7;
LAB_71ae2e24:
  return 0x2e < *(uint *)(param_1 + 0x18) >> 3;
}


// =========================================================================
// Function: qchnQtEzFelnFdFppwXATpqzXwrEiosDUdZkSBR_WCcPVxjvbhXcuuJ_rZleSETmaioxGxliBSJeoalgGLf
// Entry: 0x71ae2e40 | Size: 52 bytes
// =========================================================================

void qchnQtEzFelnFdFppwXATpqzXwrEiosDUdZkSBR_WCcPVxjvbhXcuuJ_rZleSETmaioxGxliBSJeoalgGLf
               (undefined1 *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xfffffff6;
  *(float *)(param_1 + 0x14) = fVar1 * fVar1 * 64.0;
  return;
}


// =========================================================================
// Function: lHMhRlhggwbYgQpVTjrZRFDQcontmencfKzKnjlgtAZjkYeyzICEKFIK_NbZ
// Entry: 0x71ae2e78 | Size: 40 bytes
// =========================================================================

void lHMhRlhggwbYgQpVTjrZRFDQcontmencfKzKnjlgtAZjkYeyzICEKFIK_NbZ(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xfffffff6;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


// =========================================================================
// Function: FUN_71ae32a8
// Entry: 0x71ae32a8 | Size: 20 bytes
// =========================================================================

void FUN_71ae32a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: gRwZRnKZxLskZykjl_TlnLRByrYoZV
// Entry: 0x71ae3310 | Size: 72 bytes
// =========================================================================

undefined1 * gRwZRnKZxLskZykjl_TlnLRByrYoZV(undefined1 *param_1,undefined1 param_2)

{
  param_1[0xd] = param_2;
  param_1[4] = 0;
  *param_1 = 0;
  thunk_pdwvKbZeNAzVLNUaxjFDiozNthykHfDBouJaS(param_1 + 0x10);
  thunk_TSCjKufaVHXXrUlDZzMrJYVrZcsJrWyYghHOdkjgE();
  param_1[0xc] = 0;
  if (param_1[4] != '\0') {
    param_1[4] = 0;
  }
  return param_1;
}


// =========================================================================
// Function: qrDrfjpSqSDHKMXxHzpOBCmMGZ_WeIZjms
// Entry: 0x71ae3364 | Size: 44 bytes
// =========================================================================

void qrDrfjpSqSDHKMXxHzpOBCmMGZ_WeIZjms(int param_1)

{
  thunk_TSCjKufaVHXXrUlDZzMrJYVrZcsJrWyYghHOdkjgE(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// =========================================================================
// Function: rkehvQvmzdQMygyCnSmrgMoqTaJxUr
// Entry: 0x71ae3390 | Size: 28 bytes
// =========================================================================

int rkehvQvmzdQMygyCnSmrgMoqTaJxUr(int param_1)

{
  thunk_QrkklSxNXDxRIpUuiCELNGbXrpiIMKWRbMwkz(param_1 + 0x10);
  return param_1;
}


// =========================================================================
// Function: gSKYbTMCgxfkBXBnnw_TVwrfJUZMPonwyWiOoEGmNUiwKLqEuSSPbtVzdpbBRkfNuEXDblNVGSiCkoYOU_PM
// Entry: 0x71ae33ac | Size: 184 bytes
// =========================================================================

void gSKYbTMCgxfkBXBnnw_TVwrfJUZMPonwyWiOoEGmNUiwKLqEuSSPbtVzdpbBRkfNuEXDblNVGSiCkoYOU_PM
               (int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5,
               int param_6)

{
  uint uVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = thunk_tXQjrxEyDtpJimvQjTYmRjDHtDWKAwOAxV_rjEgrmhPGMoUpZNjawHJCJvHKGNxHXvxiSSAWnyXQIGOmHFRaMyuDygwaLWrRx
                    (param_1,param_2[1],*param_2,param_6);
  if (param_6 == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0xd);
  }
  if (param_6 != 0 || uVar1 != 0) {
    piVar4 = (int *)param_2[1];
    piVar5 = (int *)param_2[2];
    iVar2 = piVar5[4];
    iVar3 = piVar5[5];
    if (iVar2 < iVar3) {
      iVar3 = iVar3 - iVar2;
    }
    else {
      iVar3 = (iVar3 - iVar2) + *piVar5;
    }
    FUN_71ba2da8(piVar4[5] + param_5 + *piVar4);
    if (param_4 == 0) {
      param_3 = 0;
    }
    thunk_TkJEgLJIu_HzfYvmPN_sPwBeWbFKGdtiUanPYDPKDHqLXnijbuidPPAQwuuXlWNFoygbipdafOrNyzaxOPyJYYUhQBzZoJybkwuoscewCbdjbZv
              (param_1 + 0x10,piVar4,param_3,param_4,extraout_r1,
               (iVar3 - param_5 | iVar3 - param_5 >> 0x1f) + 1);
  }
  return;
}


// =========================================================================
// Function: tXQjrxEyDtpJimvQjTYmRjDHtDWKAwOAxV_rjEgrmhPGMoUpZNjawHJCJvHKGNxHXvxiSSAWnyXQIGOmHFRaMyuDygwaLWrRx
// Entry: 0x71ae3464 | Size: 616 bytes
// =========================================================================

void tXQjrxEyDtpJimvQjTYmRjDHtDWKAwOAxV_rjEgrmhPGMoUpZNjawHJCJvHKGNxHXvxiSSAWnyXQIGOmHFRaMyuDygwaLWrRx
               (int *param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *unaff_r4;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pfVar10 = (float *)param_2[4];
  if ((char)param_1[1] == '\0') {
    *param_1 = (int)pfVar10;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = param_3[4];
    return;
  }
  cVar1 = (char)param_1[3];
  if (cVar1 == '\0' && param_4 == 0) {
    iVar5 = param_3[4];
    bVar2 = false;
    iVar6 = param_1[2];
    if (iVar5 != iVar6) {
      iVar9 = *(int *)(param_3[1] + 4);
      if (0 < iVar9) {
        do {
          iVar8 = *(int *)(param_3[1] + iVar6 * 0x14 + 8);
          iVar3 = 0;
          iVar7 = iVar8;
          fVar16 = 0.0;
          do {
            pfVar11 = (float *)(iVar8 + iVar3 * 0x100);
            iVar15 = 8;
            iVar12 = 0;
            unaff_r4 = pfVar11;
            pfVar13 = pfVar11 + 1;
            fVar17 = *pfVar11;
            if (pfVar11[1] < *pfVar11) {
              unaff_r4 = pfVar11 + 1;
              pfVar13 = pfVar11;
              fVar17 = pfVar11[1];
            }
            do {
              while( true ) {
                iVar14 = iVar7 + iVar12;
                fVar18 = *(float *)(iVar14 + 8);
                fVar19 = *(float *)(iVar14 + 0xc);
                if (fVar19 < fVar18) break;
                if (fVar18 < fVar17) {
                  unaff_r4 = (float *)(iVar14 + 8);
                  fVar17 = fVar18;
                }
                if (*pfVar13 <= fVar19) {
                  pfVar13 = (float *)(iVar14 + 0xc);
                }
                iVar12 = iVar12 + 8;
                iVar15 = iVar15 + 8;
                if (iVar12 == 0xf8) goto LAB_71ae3530;
              }
              if (fVar19 < fVar17) {
                unaff_r4 = (float *)(iVar14 + 0xc);
                fVar17 = fVar19;
              }
              if (*pfVar13 <= fVar18) {
                pfVar13 = (float *)((int)pfVar11 + iVar15);
              }
              iVar12 = iVar12 + 8;
              iVar15 = iVar15 + 8;
            } while (iVar12 != 0xf8);
LAB_71ae3530:
            iVar7 = iVar7 + 0x100;
            iVar3 = iVar3 + 1;
            fVar17 = ABS(*unaff_r4);
            if (ABS(*unaff_r4) < ABS(*pfVar13)) {
              fVar17 = ABS(*pfVar13);
            }
            if (fVar16 < fVar17) {
              fVar16 = fVar17;
            }
          } while (iVar3 != iVar9);
          bVar2 = fVar16 >= 10.0;
          if (fVar16 < 10.0) break;
          iVar7 = 0;
          if (iVar6 < *param_3 + -1) {
            iVar7 = iVar6 + 1;
          }
          iVar6 = iVar7;
        } while (iVar6 != iVar5);
      }
    }
    param_1[2] = iVar5;
    *(bool *)(param_1 + 3) = bVar2;
    if (bVar2) {
      unaff_r4 = (float *)*param_1;
    }
    if (!bVar2 || unaff_r4 == pfVar10) goto LAB_71ae36b8;
  }
  else {
    if (cVar1 != '\0') {
      unaff_r4 = (float *)*param_1;
    }
    if (cVar1 == '\0' || unaff_r4 == pfVar10) goto LAB_71ae36b8;
  }
  do {
    piVar4 = (int *)(param_2[1] + (int)unaff_r4 * 0xc);
    iVar9 = *piVar4;
    iVar5 = piVar4[1];
    iVar6 = 0;
    if (iVar5 != iVar9) {
      iVar6 = iVar9;
    }
    thunk_zikUmutOtsGsvsHmvBZEkFmrNyFgVwGSDi_tVyvHRzSalrscHUVjufkvQCAUfrpmUMWFYvRaVDxEaSiulICLGXLJVYzzOvzsCNOoGmYbmEHy
              (param_1 + 4,iVar6,(iVar5 - iVar9 >> 2) * -0x3f03f03f);
    pfVar13 = (float *)*param_2;
    if (0 < (int)unaff_r4) {
      pfVar13 = unaff_r4;
    }
    unaff_r4 = (float *)((int)pfVar13 + -1);
  } while (unaff_r4 != pfVar10);
LAB_71ae36b8:
  *param_1 = (int)pfVar10;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// =========================================================================
// Function: AcBKgT_DVdegHpSkwOtryqWThqkQaMoZblNLKBRNbRBdYagiPmAWsydThLhZkZ_uANtlKh_KHApOOFil_ARLjQCScPeBEItQSPFyXsLmYFH
// Entry: 0x71ae36d0 | Size: 144 bytes
// =========================================================================

void AcBKgT_DVdegHpSkwOtryqWThqkQaMoZblNLKBRNbRBdYagiPmAWsydThLhZkZ_uANtlKh_KHApOOFil_ARLjQCScPeBEItQSPFyXsLmYFH
               (int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 extraout_r1;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 4);
  piVar3 = *(int **)(param_2 + 8);
  iVar1 = piVar3[4];
  iVar2 = piVar3[5];
  if (iVar1 < iVar2) {
    iVar2 = iVar2 - iVar1;
  }
  else {
    iVar2 = (iVar2 - iVar1) + *piVar3;
  }
  FUN_71ba2da8(piVar4[5] + param_5 + *piVar4);
  if (param_4 == 0) {
    param_3 = 0;
  }
  thunk_TkJEgLJIu_HzfYvmPN_sPwBeWbFKGdtiUanPYDPKDHqLXnijbuidPPAQwuuXlWNFoygbipdafOrNyzaxOPyJYYUhQBzZoJybkwuoscewCbdjbZv
            (param_1 + 0x10,piVar4,param_3,param_4,extraout_r1,
             (iVar2 - param_5 | iVar2 - param_5 >> 0x1f) + 1);
  return;
}


// =========================================================================
// Function: zmdnwvKQoRmIjQPiXdMkjjckKtzNNRUiaewKfPIWDQjwOpXxXZGYEBZbZNPdSH
// Entry: 0x71ae3760 | Size: 392 bytes
// =========================================================================

bool zmdnwvKQoRmIjQPiXdMkjjckKtzNNRUiaewKfPIWDQjwOpXxXZGYEBZbZNPdSH(int param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar12 = param_2[4];
  bVar3 = true;
  if (iVar12 != *(int *)(param_1 + 8)) {
    iVar11 = *(int *)(param_2[1] + 4);
    if (0 < iVar11) {
      iVar10 = *(int *)(param_1 + 8);
      do {
        iVar7 = 0;
        iVar4 = *(int *)(param_2[1] + iVar10 * 0x14 + 8);
        iVar6 = iVar4;
        fVar13 = 0.0;
        do {
          pfVar1 = (float *)(iVar4 + iVar7 * 0x100);
          iVar5 = 0;
          pfVar8 = pfVar1;
          pfVar9 = pfVar1 + 1;
          fVar14 = *pfVar1;
          if (pfVar1[1] < *pfVar1) {
            pfVar8 = pfVar1 + 1;
            pfVar9 = pfVar1;
            fVar14 = pfVar1[1];
          }
          do {
            while( true ) {
              iVar2 = iVar6 + iVar5;
              fVar15 = *(float *)(iVar2 + 8);
              fVar16 = *(float *)(iVar2 + 0xc);
              if (fVar16 < fVar15) break;
              if (fVar15 < fVar14) {
                pfVar8 = (float *)(iVar2 + 8);
                fVar14 = fVar15;
              }
              if (*pfVar9 <= fVar16) {
                pfVar9 = (float *)((int)pfVar1 + iVar5 + 0xc);
              }
              iVar5 = iVar5 + 8;
              if (iVar5 == 0xf8) goto LAB_71ae37c4;
            }
            if (fVar16 < fVar14) {
              pfVar8 = (float *)(iVar2 + 0xc);
              fVar14 = fVar16;
            }
            if (*pfVar9 <= fVar15) {
              pfVar9 = (float *)(iVar2 + 8);
            }
            iVar5 = iVar5 + 8;
          } while (iVar5 != 0xf8);
LAB_71ae37c4:
          iVar6 = iVar6 + 0x100;
          iVar7 = iVar7 + 1;
          fVar14 = ABS(*pfVar8);
          if (ABS(*pfVar8) < ABS(*pfVar9)) {
            fVar14 = ABS(*pfVar9);
          }
          if (fVar13 < fVar14) {
            fVar13 = fVar14;
          }
        } while (iVar7 != iVar11);
        bVar3 = fVar13 < 10.0;
        if (bVar3) break;
        iVar6 = 0;
        if (iVar10 < *param_2 + -1) {
          iVar6 = iVar10 + 1;
        }
        iVar10 = iVar6;
      } while (iVar6 != iVar12);
    }
  }
  *(int *)(param_1 + 8) = iVar12;
  return bVar3;
}


// =========================================================================
// Function: pdwvKbZeNAzVLNUaxjFDiozNthykHfDBouJaS
// Entry: 0x71ae3a54 | Size: 192 bytes
// =========================================================================

undefined4 * pdwvKbZeNAzVLNUaxjFDiozNthykHfDBouJaS(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(&DAT_712048a8);
  } while (!bVar2);
  DataMemoryBarrier(0xb);
  DAT_712048a8 = DAT_712048a8 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar6);
  *param_1 = uVar6;
  thunk_NbqxlDiwJLcJtemYKcrYTlZdAbkyNdVKvCty_RrpRdBUxlSRirvX(param_1 + 1);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x4120000041200000;
  auVar1 = auVar1 << 0x40 | auVar1;
  uVar6 = *(undefined4 *)auVar1;
  uVar3 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  param_1[0x42] = 0;
  param_1[1] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar5;
  param_1[0x15] = uVar6;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar4;
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar4;
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar6;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar4;
  param_1[0x20] = uVar5;
  param_1[0x21] = uVar6;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar4;
  param_1[0x24] = uVar5;
  param_1[0x25] = uVar6;
  param_1[0x26] = uVar3;
  param_1[0x27] = uVar4;
  param_1[0x28] = uVar5;
  param_1[0x29] = uVar6;
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar4;
  param_1[0x2c] = uVar5;
  param_1[0x2d] = uVar6;
  param_1[0x2e] = uVar3;
  param_1[0x2f] = uVar4;
  param_1[0x30] = uVar5;
  param_1[0x31] = uVar6;
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar4;
  param_1[0x34] = uVar5;
  param_1[0x35] = uVar6;
  param_1[0x36] = uVar3;
  param_1[0x37] = uVar4;
  param_1[0x38] = uVar5;
  param_1[0x39] = uVar6;
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar4;
  param_1[0x3c] = uVar5;
  param_1[0x41] = 0x41200000;
  param_1[0x3d] = uVar6;
  param_1[0x3e] = uVar3;
  param_1[0x3f] = uVar4;
  param_1[0x40] = uVar5;
  imp___aeabi_memclr4(param_1 + 0x43,0x145);
  return param_1;
}


// =========================================================================
// Function: TSCjKufaVHXXrUlDZzMrJYVrZcsJrWyYghHOdkjgE
// Entry: 0x71ae3b30 | Size: 116 bytes
// =========================================================================

void TSCjKufaVHXXrUlDZzMrJYVrZcsJrWyYghHOdkjgE(int param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x4120000041200000;
  auVar1 = auVar1 << 0x40 | auVar1;
  uVar2 = *(undefined4 *)auVar1;
  uVar3 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 200) = uVar3;
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  *(undefined4 *)(param_1 + 0xfc) = uVar4;
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  *(undefined4 *)(param_1 + 0x104) = 0x41200000;
  imp___aeabi_memclr4(param_1 + 0x10c,0x145);
  return;
}


// =========================================================================
// Function: QrkklSxNXDxRIpUuiCELNGbXrpiIMKWRbMwkz
// Entry: 0x71ae3ba4 | Size: 56 bytes
// =========================================================================

int * QrkklSxNXDxRIpUuiCELNGbXrpiIMKWRbMwkz(int *param_1)

{
  int iVar1;
  
  thunk_GfbvSfhSXbLsgdIFkffBbVWCBbNbroUPsmWEMsNZYYauNreugXPs(param_1 + 1);
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: rbaCZmcTvZEQOhXjMoRzziUwXQvPTDiIiemIRvcqgnBSDxOdmHPbooYS
// Entry: 0x71ae3bdc | Size: 92 bytes
// =========================================================================

void rbaCZmcTvZEQOhXjMoRzziUwXQvPTDiIiemIRvcqgnBSDxOdmHPbooYS(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x4120000041200000;
  auVar1 = auVar1 << 0x40 | auVar1;
  uVar2 = *(undefined4 *)auVar1;
  uVar3 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  param_1[0x41] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar4;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = uVar3;
  param_1[0x1e] = uVar4;
  param_1[0x1f] = uVar5;
  param_1[0x20] = uVar2;
  param_1[0x21] = uVar3;
  param_1[0x22] = uVar4;
  param_1[0x23] = uVar5;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar5;
  param_1[0x28] = uVar2;
  param_1[0x29] = uVar3;
  param_1[0x2a] = uVar4;
  param_1[0x2b] = uVar5;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar4;
  param_1[0x2f] = uVar5;
  param_1[0x30] = uVar2;
  param_1[0x31] = uVar3;
  param_1[0x32] = uVar4;
  param_1[0x33] = uVar5;
  param_1[0x34] = uVar2;
  param_1[0x35] = uVar3;
  param_1[0x36] = uVar4;
  param_1[0x37] = uVar5;
  param_1[0x38] = uVar2;
  param_1[0x39] = uVar3;
  param_1[0x3a] = uVar4;
  param_1[0x3b] = uVar5;
  param_1[0x3c] = uVar2;
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar4;
  param_1[0x3f] = uVar5;
  param_1[0x40] = 0x41200000;
  return;
}


// =========================================================================
// Function: zikUmutOtsGsvsHmvBZEkFmrNyFgVwGSDi_tVyvHRzSalrscHUVjufkvQCAUfrpmUMWFYvRaVDxEaSiulICLGXLJVYzzOvzsCNOoGmYbmEHy
// Entry: 0x71ae3c38 | Size: 16 bytes
// =========================================================================

void zikUmutOtsGsvsHmvBZEkFmrNyFgVwGSDi_tVyvHRzSalrscHUVjufkvQCAUfrpmUMWFYvRaVDxEaSiulICLGXLJVYzzOvzsCNOoGmYbmEHy
               (int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  thunk_TPfMZnmEVbLMpPERujyEnitFOpULrcjGdlFOCYqhgSaHRL_psKdAfTuFdNtO_XMSNvJBSuqyguoiqv_KAcKyayoLqyyNECzOgZzSJbzTqKic
            (param_1 + 4,param_2);
  return;
}


// =========================================================================
// Function: TPfMZnmEVbLMpPERujyEnitFOpULrcjGdlFOCYqhgSaHRL_psKdAfTuFdNtO_XMSNvJBSuqyguoiqv_KAcKyayoLqyyNECzOgZzSJbzTqKic
// Entry: 0x71ae3c48 | Size: 424 bytes
// =========================================================================

void TPfMZnmEVbLMpPERujyEnitFOpULrcjGdlFOCYqhgSaHRL_psKdAfTuFdNtO_XMSNvJBSuqyguoiqv_KAcKyayoLqyyNECzOgZzSJbzTqKic
               (int param_1,float *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_128 [66];
  
  if (param_3 != 1) {
    imp___aeabi_memcpy4(afStack_128,param_2,0x104);
    if (1 < param_3) {
      puVar2 = (undefined1 *)((int)param_2 + 0x108);
      iVar3 = 1;
      do {
        iVar4 = 0;
        do {
          pfVar5 = (float *)(((uint)afStack_128 | 4) + iVar4);
          pfVar6 = (float *)(puVar2 + iVar4);
          iVar4 = iVar4 + 4;
          *pfVar5 = *pfVar6 + *pfVar5;
        } while (iVar4 != 0x100);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 0x104;
      } while (iVar3 != param_3);
    }
    iVar3 = 4;
    fVar7 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    do {
      pfVar5 = (float *)((int)afStack_128 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar5 = (1.0 / fVar7) * *pfVar5;
      param_2 = afStack_128;
    } while (iVar3 != 0x104);
  }
  iVar3 = *(int *)(param_1 + 0x104);
  uVar1 = iVar3 + 1;
  *(uint *)(param_1 + 0x104) = uVar1;
  fVar7 = (float)VectorUnsignedToFloat(iVar3 + -0x13,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar7 * -7.1999995e-05 + 0.04;
  if (0x208 < uVar1) {
    fVar7 = 0.004;
  }
  if (uVar1 < 0x15) {
    iVar3 = 0;
    do {
      pfVar5 = (float *)((int)param_2 + iVar3);
      pfVar6 = (float *)(param_1 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar6 = *pfVar6 + *pfVar5 * 0.05;
    } while (iVar3 != 0x104);
  }
  else {
    iVar3 = 0;
    do {
      pfVar5 = (float *)(param_1 + iVar3);
      fVar8 = *pfVar5;
      fVar9 = *(float *)((int)param_2 + iVar3);
      if (fVar9 <= fVar8) {
        fVar8 = fVar8 + fVar7 * (fVar9 - fVar8);
        if (fVar8 < 10.0) {
          fVar8 = 10.0;
        }
      }
      else {
        fVar10 = fVar7 * (fVar8 / fVar9);
        fVar11 = fVar10;
        if (fVar8 * 10.0 < fVar9) {
          fVar11 = fVar10 * 0.1;
        }
        if (500 < uVar1) {
          fVar10 = fVar11;
        }
        fVar8 = fVar8 + fVar10 * (fVar9 - fVar8);
      }
      iVar3 = iVar3 + 4;
      *pfVar5 = fVar8;
    } while (iVar3 != 0x104);
  }
  return;
}


// =========================================================================
// Function: _YDsBktcqIzqUMwESXAfVLyOEHcLRoqmlxfFZqhQ_iNfCDrENSfIiQV
// Entry: 0x71ae3e04 | Size: 96 bytes
// =========================================================================

bool _YDsBktcqIzqUMwESXAfVLyOEHcLRoqmlxfFZqhQ_iNfCDrENSfIiQV(int param_1)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  iVar1 = 0;
  do {
    uVar2 = 0;
    if (*(char *)((param_1 + 0x210) - iVar1) != '\0') {
      uVar2 = (uint)(*(int *)(param_1 + 0x210 + iVar1 * -4 + -0x104) == 0);
    }
    iVar1 = iVar1 + -1;
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = fVar3 + fVar4;
  } while (iVar1 != -0x41);
  return 0.75 < fVar3 * 0.015384615;
}


// =========================================================================
// Function: TkJEgLJIu_HzfYvmPN_sPwBeWbFKGdtiUanPYDPKDHqLXnijbuidPPAQwuuXlWNFoygbipdafOrNyzaxOPyJYYUhQBzZoJybkwuoscewCbdjbZv
// Entry: 0x71ae3e6c | Size: 1752 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void TkJEgLJIu_HzfYvmPN_sPwBeWbFKGdtiUanPYDPKDHqLXnijbuidPPAQwuuXlWNFoygbipdafOrNyzaxOPyJYYUhQBzZoJybkwuoscewCbdjbZv
               (int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 in_q8 [16];
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  ulonglong uVar25;
  undefined1 auVar26 [16];
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 in_q15 [16];
  undefined1 auVar36 [16];
  ulonglong uVar37;
  
  if (param_6 < 0xc) {
    FUN_71ba2da8((param_5 - param_6) + *param_2 + 0xc,*param_2);
  }
  iVar8 = 0;
  if (param_4 == 0) {
    param_3 = 0;
  }
  do {
    uVar2 = thunk_HfsqoTYLTFgBnzFkHprDtHFJ_CyGlZmyqoXKuJoQBLpuFfiAmDNjZOzuZTxuZXjjjxVSCIdbmGpEakEpnHpEkxexsMpLM_HlQaBAQJuySmTjXDbXJQukInhqdttNtKaEIWWVfvViQhy
                      (param_1,param_2,param_3,param_4);
    iVar4 = param_1 + iVar8;
    iVar8 = iVar8 + 1;
    *(undefined1 *)(iVar4 + 0x210) = uVar2;
  } while (iVar8 != 0x41);
  iVar8 = thunk_kJyghBFNhpVZUAfvmSSbxIqfPRHQzOIHbEMsANbYYrmihhUSpCQfaOIOVr(param_1);
  if (iVar8 == 0) {
    iVar8 = 0;
    do {
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar14 = *(undefined4 *)(param_1 + iVar8 + 0x210);
      auVar20 = VectorCopyLong(in_q8._0_8_,1,1);
      in_q8._8_8_ = auVar20._8_8_;
      in_q8._0_8_ = VectorCompareEqual(auVar20._0_8_,0,2);
      iVar4 = param_1 + iVar8 * 4;
      iVar8 = iVar8 + 4;
      if ((in_q8._0_8_ & 1) != 0) {
        *(undefined4 *)(iVar4 + 0x10c) = 0xc;
      }
      if ((in_q8._0_8_ & 0x10000) != 0) {
        *(undefined4 *)(iVar4 + 0x110) = 0xc;
      }
      if ((in_q8._0_8_ >> 0x20 & 1) != 0) {
        *(undefined4 *)(iVar4 + 0x114) = 0xc;
      }
      if ((in_q8._0_8_ & 0x1000000000000) != 0) {
        *(undefined4 *)(iVar4 + 0x118) = 0xc;
      }
    } while (iVar8 != 0x40);
    if (*(char *)(param_1 + 0x250) == '\0') {
      *(undefined4 *)(param_1 + 0x20c) = 0xc;
    }
  }
  else {
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x210);
    auVar20._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar20._0_8_ = 0x100000001;
    auVar20 = *(undefined1 (*) [16])(auVar20 << 0x40 | auVar20);
    auVar29 = VectorCopyLong(in_q8._0_8_,1,1);
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0xc0000000c;
    auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x10c),auVar20,4,0);
    auVar24._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
    auVar24._0_8_ = 0xffffffffffffffff;
    auVar24 = *(undefined1 (*) [16])(auVar24 << 0x40 | auVar24);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x10c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x114) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x11c),auVar20,4,0);
    auVar30 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorMax(*(undefined1 (*) [16])(param_1 + 300),auVar20,4,0);
    auVar26 = *(undefined1 (*) [16])(param_1 + 0x13c);
    auVar31 = VectorAdd(auVar29,auVar24,4);
    auVar29 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x14c),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x214);
    auVar29 = VectorAdd(auVar29,auVar24,4);
    auVar36 = VectorCopyLong(in_q15._0_8_,1,1);
    auVar36 = VectorCopyLong(auVar36._0_8_,2,1);
    auVar36 = VectorCompareEqual(auVar36,0,4);
    auVar30 = VectorBitwiseInsertIfTrue(auVar30,auVar1,auVar36);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x11c) = auVar30._0_8_;
    *(longlong *)(param_1 + 0x124) = auVar30._8_8_;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x218);
    auVar30 = VectorCopyLong(auVar30._0_8_,1,1);
    auVar30 = VectorCopyLong(auVar30._0_8_,2,1);
    auVar30 = VectorCompareEqual(auVar30,0,4);
    auVar30 = VectorBitwiseSelect(auVar30,auVar1,auVar31);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 300) = auVar30._0_8_;
    *(longlong *)(param_1 + 0x134) = auVar30._8_8_;
    auVar26 = VectorMax(auVar26,auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x21c);
    auVar31 = VectorAdd(auVar26,auVar24,4);
    auVar26 = VectorCopyLong(auVar30._0_8_,1,1);
    auVar26 = VectorCopyLong(auVar26._0_8_,2,1);
    auVar26 = VectorCompareEqual(auVar26,0,4);
    auVar26 = VectorBitwiseSelect(auVar26,auVar1,auVar31);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x13c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x144) = auVar26._8_8_;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x220);
    auVar26 = VectorCopyLong(auVar26._0_8_,1,1);
    auVar26 = VectorCopyLong(auVar26._0_8_,2,1);
    auVar30 = VectorCompareEqual(auVar26,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar29,auVar1,auVar30);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x14c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x154) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x15c),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x224);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar30._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x15c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x164) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x16c),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x228);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x16c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x174) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x17c),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x22c);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x17c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x184) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x18c),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x230);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x18c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x194) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x19c),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x234);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x19c) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x1a4) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1ac),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x238);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1ac) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x1b4) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1bc),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x23c);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1bc) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x1c4) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1cc),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x240);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1cc) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x1d4) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1dc),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x244);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1dc) = auVar26._0_8_;
    *(longlong *)(param_1 + 0x1e4) = auVar26._8_8_;
    auVar26 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1ec),auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x248);
    auVar26 = VectorAdd(auVar26,auVar24,4);
    auVar29 = VectorCopyLong(auVar29._0_8_,1,1);
    auVar29 = VectorCopyLong(auVar29._0_8_,2,1);
    auVar29 = VectorCompareEqual(auVar29,0,4);
    auVar26 = VectorBitwiseInsertIfTrue(auVar26,auVar1,auVar29);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1ec) = auVar26._0_8_;
    *(longlong *)(param_1 + 500) = auVar26._8_8_;
    auVar26 = *(undefined1 (*) [16])(param_1 + 0x1fc);
    auVar20 = VectorMax(auVar26,auVar20,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar14 = *(undefined4 *)(param_1 + 0x24c);
    iVar8 = *(int *)(param_1 + 0x20c);
    auVar20 = VectorAdd(auVar20,auVar24,4);
    auVar24 = VectorCopyLong(auVar26._0_8_,1,1);
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    iVar8 = iVar8 + -1;
    auVar24 = VectorCopyLong(auVar24._0_8_,2,1);
    if (*(char *)(param_1 + 0x250) == '\0') {
      iVar8 = 0xc;
    }
    auVar24 = VectorCompareEqual(auVar24,0,4);
    auVar20 = VectorBitwiseInsertIfFalse(auVar1,auVar20,auVar24);
    *(int *)(param_1 + 0x20c) = iVar8;
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1fc) = auVar20._0_8_;
    *(longlong *)(param_1 + 0x204) = auVar20._8_8_;
  }
  uVar3 = 0;
  uVar2 = 0;
  if ((*(char *)(param_1 + 0x248) != '\0') && (uVar2 = 0, *(char *)(param_1 + 0x249) != '\0')) {
    uVar2 = *(undefined1 *)(param_1 + 0x24a);
  }
  bVar11 = *(char *)(param_1 + 0x249) != '\0';
  cVar7 = '\0';
  if (bVar11) {
    cVar7 = *(char *)(param_1 + 0x24a);
  }
  uVar5 = 0;
  if (bVar11 && cVar7 != '\0') {
    uVar3 = *(undefined1 *)(param_1 + 0x24b);
  }
  uVar6 = 0;
  if ((*(char *)(param_1 + 0x24a) != '\0') && (uVar6 = 0, *(char *)(param_1 + 0x24b) != '\0')) {
    uVar6 = *(undefined1 *)(param_1 + 0x24c);
  }
  bVar11 = *(char *)(param_1 + 0x24b) != '\0';
  cVar7 = '\0';
  if (bVar11) {
    cVar7 = *(char *)(param_1 + 0x24c);
  }
  uVar10 = 0;
  if (bVar11 && cVar7 != '\0') {
    uVar5 = *(undefined1 *)(param_1 + 0x24d);
  }
  uVar9 = 0;
  if ((*(char *)(param_1 + 0x24c) != '\0') && (uVar9 = 0, *(char *)(param_1 + 0x24d) != '\0')) {
    uVar9 = *(undefined1 *)(param_1 + 0x24e);
  }
  uVar13 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x210),0,1);
  uVar25 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x211),0,1);
  uVar15 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x212),0,1);
  uVar33 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x218),0,1);
  uVar35 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x220),0,1);
  uVar37 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x228),0,1);
  uVar18 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x219),0,1);
  uVar16 = ~uVar13 & ~uVar25 & ~uVar15 & 0x101010101010101;
  uVar13 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x230),0,1);
  uVar22 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x221),0,1);
  *(undefined1 *)(param_1 + 0x24a) = uVar3;
  uVar15 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x238),0,1);
  uVar25 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x240),0,1);
  uVar28 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x229),0,1);
  uVar17 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x21a),0,1);
  bVar11 = *(char *)(param_1 + 0x24d) != '\0';
  uVar19 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x222),0,1);
  uVar32 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x231),0,1);
  *(char *)(param_1 + 0x210) = (char)uVar16;
  uVar34 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x239),0,1);
  uVar21 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x22a),0,1);
  cVar7 = '\0';
  if (bVar11) {
    cVar7 = *(char *)(param_1 + 0x24e);
  }
  uVar12 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x241),0,1);
  uVar23 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x232),0,1);
  *(ulonglong *)(param_1 + 0x211) = uVar16;
  uVar16 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x23a),0,1);
  uVar27 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x242),0,1);
  *(ulonglong *)(param_1 + 0x219) = ~uVar33 & ~uVar18 & ~uVar17 & 0x101010101010101;
  uVar3 = 0;
  if (bVar11 && cVar7 != '\0') {
    uVar10 = *(undefined1 *)(param_1 + 0x24f);
  }
  bVar11 = *(char *)(param_1 + 0x24e) != '\0';
  *(ulonglong *)(param_1 + 0x221) = ~uVar35 & ~uVar22 & ~uVar19 & 0x101010101010101;
  cVar7 = '\0';
  if (bVar11) {
    cVar7 = *(char *)(param_1 + 0x24f);
  }
  *(ulonglong *)(param_1 + 0x229) = ~uVar37 & ~uVar28 & ~uVar21 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x231) = ~uVar13 & ~uVar32 & ~uVar23 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x239) = ~uVar15 & ~uVar34 & ~uVar16 & 0x101010101010101;
  if (bVar11 && cVar7 != '\0') {
    uVar3 = *(undefined1 *)(param_1 + 0x250);
  }
  *(undefined1 *)(param_1 + 0x250) = uVar3;
  *(undefined1 *)(param_1 + 0x24f) = uVar3;
  *(undefined1 *)(param_1 + 0x24e) = uVar10;
  *(undefined1 *)(param_1 + 0x24d) = uVar9;
  *(undefined1 *)(param_1 + 0x24c) = uVar5;
  *(undefined1 *)(param_1 + 0x24b) = uVar6;
  *(undefined1 *)(param_1 + 0x249) = uVar2;
  *(ulonglong *)(param_1 + 0x241) = ~uVar25 & ~uVar12 & ~uVar27 & 0x101010101010101;
  return;
}


// =========================================================================
// Function: HfsqoTYLTFgBnzFkHprDtHFJ_CyGlZmyqoXKuJoQBLpuFfiAmDNjZOzuZTxuZXjjjxVSCIdbmGpEakEpnHpEkxexsMpLM_HlQaBAQJuySmTjXDbXJQukInhqdttNtKaEIWWVfvViQhy
// Entry: 0x71ae4544 | Size: 732 bytes
// =========================================================================

bool HfsqoTYLTFgBnzFkHprDtHFJ_CyGlZmyqoXKuJoQBLpuFfiAmDNjZOzuZTxuZXjjjxVSCIdbmGpEakEpnHpEkxexsMpLM_HlQaBAQJuySmTjXDbXJQukInhqdttNtKaEIWWVfvViQhy
               (int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar1 = *(int **)(param_2 + 4);
  if (piVar1[1] - *piVar1 < 1) {
    fVar5 = 0.0;
  }
  else {
    iVar2 = (piVar1[1] - *piVar1 >> 2) * -0x3f03f03f;
    iVar3 = iVar2;
    if (iVar2 < 2) {
      iVar3 = 1;
    }
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    pfVar4 = (float *)(piVar1[*param_5 * 3] + param_6 * 4);
    fVar6 = 1.0 / fVar6;
    fVar5 = 0.0;
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[1] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[2] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[3] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[4] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[5] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[6] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[7] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[8] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[9] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[10] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[0xb] * 3] + param_6 * 4);
    iVar2 = iVar3;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar2 != 0);
    pfVar4 = (float *)(piVar1[param_5[0xc] * 3] + param_6 * 4);
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 0x41;
      iVar3 = iVar3 + -1;
      fVar5 = fVar5 + fVar7 * fVar6;
    } while (iVar3 != 0);
  }
  fVar6 = *(float *)(param_1 + param_6 * 4 + 4) * 13.0;
  if (0.0 < fVar6) {
    return fVar5 + *(float *)(param_3 + param_6 * 4) < fVar6 * 10.0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_module_7006a139,0x72,s_0_f_<_noise_700649bf,&DAT_70096c48,0
             ,0,(double)fVar6);
}


// =========================================================================
// Function: nvGQQzLeRnvtHHQPpyHJmicQwdKpaUKXoxXcfHmGVFzWRigYjyF
// Entry: 0x71ae4830 | Size: 888 bytes
// =========================================================================

void nvGQQzLeRnvtHHQPpyHJmicQwdKpaUKXoxXcfHmGVFzWRigYjyF(int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 in_q8 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_q15 [16];
  undefined1 auVar11 [16];
  
  iVar2 = thunk_kJyghBFNhpVZUAfvmSSbxIqfPRHQzOIHbEMsANbYYrmihhUSpCQfaOIOVr();
  if (iVar2 != 0) {
    auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar5._0_8_ = 0x100000001;
    auVar5 = *(undefined1 (*) [16])(auVar5 << 0x40 | auVar5);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x210);
    auVar8 = VectorCopyLong(in_q8._0_8_,1,1);
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0xc0000000c;
    auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x10c),auVar5,4,0);
    auVar6._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
    auVar6._0_8_ = 0xffffffffffffffff;
    auVar6 = *(undefined1 (*) [16])(auVar6 << 0x40 | auVar6);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x10c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x114) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x11c),auVar5,4,0);
    auVar9 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorMax(*(undefined1 (*) [16])(param_1 + 300),auVar5,4,0);
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x13c);
    auVar10 = VectorAdd(auVar8,auVar6,4);
    auVar8 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x14c),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x214);
    auVar8 = VectorAdd(auVar8,auVar6,4);
    auVar11 = VectorCopyLong(in_q15._0_8_,1,1);
    auVar11 = VectorCopyLong(auVar11._0_8_,2,1);
    auVar11 = VectorCompareEqual(auVar11,0,4);
    auVar9 = VectorBitwiseInsertIfTrue(auVar9,auVar1,auVar11);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x11c) = auVar9._0_8_;
    *(longlong *)(param_1 + 0x124) = auVar9._8_8_;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x218);
    auVar9 = VectorCopyLong(auVar9._0_8_,1,1);
    auVar9 = VectorCopyLong(auVar9._0_8_,2,1);
    auVar9 = VectorCompareEqual(auVar9,0,4);
    auVar9 = VectorBitwiseSelect(auVar9,auVar1,auVar10);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 300) = auVar9._0_8_;
    *(longlong *)(param_1 + 0x134) = auVar9._8_8_;
    auVar7 = VectorMax(auVar7,auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x21c);
    auVar10 = VectorAdd(auVar7,auVar6,4);
    auVar7 = VectorCopyLong(auVar9._0_8_,1,1);
    auVar7 = VectorCopyLong(auVar7._0_8_,2,1);
    auVar7 = VectorCompareEqual(auVar7,0,4);
    auVar7 = VectorBitwiseSelect(auVar7,auVar1,auVar10);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x13c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x144) = auVar7._8_8_;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x220);
    auVar7 = VectorCopyLong(auVar7._0_8_,1,1);
    auVar7 = VectorCopyLong(auVar7._0_8_,2,1);
    auVar9 = VectorCompareEqual(auVar7,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar8,auVar1,auVar9);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x14c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x154) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x15c),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x224);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar9._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x15c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x164) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x16c),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x228);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x16c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x174) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x17c),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x22c);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x17c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x184) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x18c),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x230);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x18c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x194) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x19c),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x234);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x19c) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x1a4) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1ac),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x238);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1ac) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x1b4) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1bc),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x23c);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1bc) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x1c4) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1cc),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x240);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1cc) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x1d4) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1dc),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x244);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1dc) = auVar7._0_8_;
    *(longlong *)(param_1 + 0x1e4) = auVar7._8_8_;
    auVar7 = VectorMax(*(undefined1 (*) [16])(param_1 + 0x1ec),auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x248);
    auVar7 = VectorAdd(auVar7,auVar6,4);
    auVar8 = VectorCopyLong(auVar8._0_8_,1,1);
    auVar8 = VectorCopyLong(auVar8._0_8_,2,1);
    auVar8 = VectorCompareEqual(auVar8,0,4);
    auVar7 = VectorBitwiseInsertIfTrue(auVar7,auVar1,auVar8);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1ec) = auVar7._0_8_;
    *(longlong *)(param_1 + 500) = auVar7._8_8_;
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x1fc);
    auVar5 = VectorMax(auVar7,auVar5,4,0);
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + 0x24c);
    iVar2 = *(int *)(param_1 + 0x20c);
    auVar5 = VectorAdd(auVar5,auVar6,4);
    auVar6 = VectorCopyLong(auVar7._0_8_,1,1);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    iVar2 = iVar2 + -1;
    auVar6 = VectorCopyLong(auVar6._0_8_,2,1);
    if (*(char *)(param_1 + 0x250) == '\0') {
      iVar2 = 0xc;
    }
    auVar6 = VectorCompareEqual(auVar6,0,4);
    auVar5 = VectorBitwiseInsertIfFalse(auVar1,auVar5,auVar6);
    *(int *)(param_1 + 0x20c) = iVar2;
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1fc) = auVar5._0_8_;
    *(longlong *)(param_1 + 0x204) = auVar5._8_8_;
    return;
  }
  iVar2 = 0;
  do {
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar4 = *(undefined4 *)(param_1 + iVar2 + 0x210);
    auVar5 = VectorCopyLong(in_q8._0_8_,1,1);
    in_q8._8_8_ = auVar5._8_8_;
    in_q8._0_8_ = VectorCompareEqual(auVar5._0_8_,0,2);
    iVar3 = param_1 + iVar2 * 4;
    iVar2 = iVar2 + 4;
    if ((in_q8._0_8_ & 1) != 0) {
      *(undefined4 *)(iVar3 + 0x10c) = 0xc;
    }
    if ((in_q8._0_8_ & 0x10000) != 0) {
      *(undefined4 *)(iVar3 + 0x110) = 0xc;
    }
    if ((in_q8._0_8_ >> 0x20 & 1) != 0) {
      *(undefined4 *)(iVar3 + 0x114) = 0xc;
    }
    if ((in_q8._0_8_ & 0x1000000000000) != 0) {
      *(undefined4 *)(iVar3 + 0x118) = 0xc;
    }
  } while (iVar2 != 0x40);
  if (*(char *)(param_1 + 0x250) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x20c) = 0xc;
  return;
}


// =========================================================================
// Function: nBjAGgxVOJaqrfKqXDHxVIWRBdipwAWXSRKvWfmNwBokigLnKbBKtGxMqpFU
// Entry: 0x71ae4ba8 | Size: 556 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void nBjAGgxVOJaqrfKqXDHxVIWRBdipwAWXSRKvWfmNwBokigLnKbBKtGxMqpFU(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  
  uVar8 = 0;
  uVar7 = 0;
  uVar4 = 0;
  uVar10 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x210),0,1);
  uVar6 = 0;
  uVar23 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x219),0,1);
  uVar13 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x212),0,1);
  uVar20 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x21a),0,1);
  uVar19 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x218),0,1);
  uVar24 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x220),0,1);
  uVar11 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x228),0,1);
  uVar16 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x221),0,1);
  uVar12 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x230),0,1);
  uVar17 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x229),0,1);
  uVar21 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x222),0,1);
  uVar14 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x22a),0,1);
  uVar15 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x232),0,1);
  uVar18 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x23a),0,1);
  uVar3 = 0;
  uVar26 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x238),0,1);
  uVar5 = 0;
  uVar22 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x242),0,1);
  uVar27 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x240),0,1);
  bVar9 = *(char *)(param_1 + 0x248) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x249);
  }
  uVar2 = 0;
  uVar25 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x241),0,1);
  if (bVar9 && cVar1 != '\0') {
    uVar8 = *(undefined1 *)(param_1 + 0x24a);
  }
  bVar9 = *(char *)(param_1 + 0x249) != '\0';
  uVar28 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x211),0,1);
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x24a);
  }
  uVar29 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x239),0,1);
  *(undefined1 *)(param_1 + 0x249) = uVar8;
  if (bVar9 && cVar1 != '\0') {
    uVar7 = *(undefined1 *)(param_1 + 0x24b);
  }
  bVar9 = *(char *)(param_1 + 0x24a) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x24b);
  }
  uVar30 = VectorCompareEqual(*(undefined8 *)(param_1 + 0x231),0,1);
  *(undefined1 *)(param_1 + 0x24a) = uVar7;
  if (bVar9 && cVar1 != '\0') {
    uVar2 = *(undefined1 *)(param_1 + 0x24c);
  }
  uVar10 = ~uVar10 & ~uVar28 & ~uVar13 & 0x101010101010101;
  bVar9 = *(char *)(param_1 + 0x24b) != '\0';
  *(undefined1 *)(param_1 + 0x24b) = uVar2;
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x24c);
  }
  *(char *)(param_1 + 0x210) = (char)uVar10;
  if (bVar9 && cVar1 != '\0') {
    uVar3 = *(undefined1 *)(param_1 + 0x24d);
  }
  bVar9 = *(char *)(param_1 + 0x24c) != '\0';
  *(undefined1 *)(param_1 + 0x24c) = uVar3;
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x24d);
  }
  if (bVar9 && cVar1 != '\0') {
    uVar5 = *(undefined1 *)(param_1 + 0x24e);
  }
  bVar9 = *(char *)(param_1 + 0x24d) != '\0';
  *(undefined1 *)(param_1 + 0x24d) = uVar5;
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x24e);
  }
  if (bVar9 && cVar1 != '\0') {
    uVar4 = *(undefined1 *)(param_1 + 0x24f);
  }
  bVar9 = *(char *)(param_1 + 0x24e) != '\0';
  *(undefined1 *)(param_1 + 0x24e) = uVar4;
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x24f);
  }
  if (bVar9 && cVar1 != '\0') {
    uVar6 = *(undefined1 *)(param_1 + 0x250);
  }
  *(undefined1 *)(param_1 + 0x250) = uVar6;
  *(undefined1 *)(param_1 + 0x24f) = uVar6;
  *(ulonglong *)(param_1 + 0x211) = uVar10;
  *(ulonglong *)(param_1 + 0x219) = ~uVar19 & ~uVar23 & ~uVar20 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x221) = ~uVar24 & ~uVar16 & ~uVar21 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x229) = ~uVar11 & ~uVar17 & ~uVar14 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x231) = ~uVar12 & ~uVar30 & ~uVar15 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x239) = ~uVar26 & ~uVar29 & ~uVar18 & 0x101010101010101;
  *(ulonglong *)(param_1 + 0x241) = ~uVar27 & ~uVar25 & ~uVar22 & 0x101010101010101;
  return;
}


// =========================================================================
// Function: kJyghBFNhpVZUAfvmSSbxIqfPRHQzOIHbEMsANbYYrmihhUSpCQfaOIOVr
// Entry: 0x71ae4dd4 | Size: 280 bytes
// =========================================================================

bool kJyghBFNhpVZUAfvmSSbxIqfPRHQzOIHbEMsANbYYrmihhUSpCQfaOIOVr(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = VectorCompareEqual(*(undefined1 (*) [16])(param_1 + 0x210),0,1);
  auVar2 = VectorCompareEqual(*(undefined1 (*) [16])(param_1 + 0x220),0,1);
  auVar4 = VectorCompareEqual(*(undefined1 (*) [16])(param_1 + 0x230),0,1);
  auVar3 = VectorCompareEqual(*(undefined1 (*) [16])(param_1 + 0x240),0,1);
  auVar3 = auVar1 | auVar2 | auVar4 | auVar3;
  return ((((((((((((((((auVar3[0] & 1) == 0 && (auVar3[1] & 1) == 0) && (auVar3[2] & 1) == 0) &&
                     (auVar3[3] & 1) == 0) && (auVar3[4] & 1) == 0) && (auVar3[5] & 1) == 0) &&
                  (auVar3[6] & 1) == 0) && (auVar3[7] & 1) == 0) && (auVar3[8] & 1) == 0) &&
               (auVar3[9] & 1) == 0) && (auVar3[10] & 1) == 0) && (auVar3[0xb] & 1) == 0) &&
            (auVar3[0xc] & 1) == 0) && (auVar3[0xd] & 1) == 0) && (auVar3[0xe] & 1) == 0) &&
         (auVar3[0xf] & 1) == 0) && *(char *)(param_1 + 0x250) != '\0';
}


// =========================================================================
// Function: NbqxlDiwJLcJtemYKcrYTlZdAbkyNdVKvCty_RrpRdBUxlSRirvX
// Entry: 0x71ae4eec | Size: 96 bytes
// =========================================================================

void NbqxlDiwJLcJtemYKcrYTlZdAbkyNdVKvCty_RrpRdBUxlSRirvX(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x4120000041200000;
  auVar1 = auVar1 << 0x40 | auVar1;
  uVar2 = *(undefined4 *)auVar1;
  uVar3 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  uVar4 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  uVar5 = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  param_1[0x41] = 0;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar3;
  param_1[0x1a] = uVar4;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = uVar3;
  param_1[0x1e] = uVar4;
  param_1[0x1f] = uVar5;
  param_1[0x20] = uVar2;
  param_1[0x21] = uVar3;
  param_1[0x22] = uVar4;
  param_1[0x23] = uVar5;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar5;
  param_1[0x28] = uVar2;
  param_1[0x29] = uVar3;
  param_1[0x2a] = uVar4;
  param_1[0x2b] = uVar5;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar4;
  param_1[0x2f] = uVar5;
  param_1[0x30] = uVar2;
  param_1[0x31] = uVar3;
  param_1[0x32] = uVar4;
  param_1[0x33] = uVar5;
  param_1[0x34] = uVar2;
  param_1[0x35] = uVar3;
  param_1[0x36] = uVar4;
  param_1[0x37] = uVar5;
  param_1[0x38] = uVar2;
  param_1[0x39] = uVar3;
  param_1[0x3a] = uVar4;
  param_1[0x3b] = uVar5;
  param_1[0x3c] = uVar2;
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar4;
  param_1[0x3f] = uVar5;
  param_1[0x40] = 0x41200000;
  return;
}


// =========================================================================
// Function: GfbvSfhSXbLsgdIFkffBbVWCBbNbroUPsmWEMsNZYYauNreugXPs
// Entry: 0x71ae4f4c | Size: 4 bytes
// =========================================================================

void GfbvSfhSXbLsgdIFkffBbVWCBbNbroUPsmWEMsNZYYauNreugXPs(void)

{
  return;
}


// =========================================================================
// Function: RvrDtFshLAzdvNKBApdLjtGrdZMugwACnZEoCAswnwhwIQxCPesksBiBEdNS
// Entry: 0x71ae4f50 | Size: 48 bytes
// =========================================================================

float RvrDtFshLAzdvNKBApdLjtGrdZMugwACnZEoCAswnwhwIQxCPesksBiBEdNS(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x104) - 0x14,(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = fVar1 * -7.1999995e-05 + 0.04;
  if (0x208 < *(uint *)(param_1 + 0x104)) {
    fVar1 = 0.004;
  }
  return fVar1;
}


// =========================================================================
// Function: sCkqjijjOIlwTCuBghHOxCDxGicbTQDdRzaYoPgLMKecGfekkZHtroLWLydidoBnKVcTV_pyARFI
// Entry: 0x71ae4f8c | Size: 124 bytes
// =========================================================================

float sCkqjijjOIlwTCuBghHOxCDxGicbTQDdRzaYoPgLMKecGfekkZHtroLWLydidoBnKVcTV_pyARFI
                (int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (param_3 < param_2) {
    param_4 = (param_3 / param_2) * param_4;
    fVar1 = param_4;
    if (500 < *(uint *)(param_1 + 0x104)) {
      fVar1 = param_4 * 0.1;
    }
    if (param_3 * 10.0 < param_2) {
      param_4 = fVar1;
    }
    return param_3 + param_4 * (param_2 - param_3);
  }
  param_3 = param_3 + param_4 * (param_2 - param_3);
  if (param_3 < 10.0) {
    param_3 = 10.0;
  }
  return param_3;
}


// =========================================================================
// Function: tassuqYVoIYaiOVrkCKhoZyyLMwTVDFkyGYMmvrZvKUSMjffEmTyvnQeDbNJzItv
// Entry: 0x71ae52a8 | Size: 388 bytes
// =========================================================================

int * tassuqYVoIYaiOVrkCKhoZyyLMwTVDFkyGYMmvrZvKUSMjffEmTyvnQeDbNJzItv
                (int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_r8;
  int iVar5;
  int *piStack_140;
  undefined1 uStack_13c;
  int *piStack_30;
  undefined1 uStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_13c = 0;
  piStack_140 = param_1;
  if (param_3 != 0) {
    if (0x3fffffff < param_3) {
      FUN_71ae5bf0(param_1);
      goto LAB_71ae5418;
    }
    iVar2 = param_3 * 4;
    iVar1 = thunk_MwhHq(iVar2);
    param_1[2] = iVar1 + param_3 * 4;
    *param_1 = iVar1;
    imp___aeabi_memclr4(iVar1,iVar2);
    param_1[1] = iVar1 + iVar2;
  }
  thunk_XVtKkOuvyItSHQjSlFTRdSQbdwJcUdoAuulVKVI(&piStack_140,*(undefined1 *)(param_2 + 0xd7));
  unaff_r8 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_2c = 0;
  piStack_30 = unaff_r8;
  if (param_3 != 0) {
    if (0xf4898d < param_3) {
LAB_71ae5418:
      FUN_71ae5d10(unaff_r8);
      FUN_71ae5a2c(param_1);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = param_3 * 0x10c;
    iVar2 = thunk_MwhHq(iVar1);
    iVar5 = param_3 * 0x10c + iVar2;
    param_1[3] = iVar2;
    param_1[4] = iVar2;
    param_1[5] = iVar5;
    do {
      imp___aeabi_memcpy4(iVar2,&piStack_140,0x10c);
      iVar1 = iVar1 + -0x10c;
      iVar2 = iVar2 + 0x10c;
    } while (iVar1 != 0);
    param_1[4] = iVar5;
  }
  thunk_BVPegXGQIImKqmKuYgLqcaUQ_lXTlLdYBMjCprM(&piStack_140);
  if (param_1[1] != *param_1) {
    uVar4 = 0;
    do {
      uVar3 = thunk_MwhHq(0x74);
      thunk_gzQXc_SROWZQnILOrRhduYawhLhryPskpOWOOsZYhXmsgLDVaiBCZjZFJyiBQcg(uVar3,param_2);
      iVar2 = *(int *)(*param_1 + uVar4 * 4);
      *(undefined4 *)(*param_1 + uVar4 * 4) = uVar3;
      if (iVar2 != 0) {
        thunk_czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL();
        thunk_qNQrlu();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[1] - *param_1 >> 2));
  }
  return param_1;
}


// =========================================================================
// Function: OXcrwpxiEuirDGazUCDGjicBiKQRzoT_pWlD
// Entry: 0x71ae5474 | Size: 164 bytes
// =========================================================================

undefined4 * OXcrwpxiEuirDGazUCDGjicBiKQRzoT_pWlD(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    iVar1 = param_1[4];
    iVar3 = iVar4;
    if (iVar1 != iVar4) {
      do {
        iVar1 = thunk_BVPegXGQIImKqmKuYgLqcaUQ_lXTlLdYBMjCprM(iVar1 + -0x10c);
      } while (iVar1 != iVar4);
      iVar3 = param_1[3];
    }
    param_1[4] = iVar4;
    thunk_qNQrlu(iVar3);
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != (int *)0x0) {
    piVar6 = (int *)param_1[1];
    piVar2 = piVar5;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar6 + -1;
        iVar4 = *piVar6;
        *piVar6 = 0;
        if (iVar4 != 0) {
          thunk_czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL();
          thunk_qNQrlu();
        }
      } while (piVar6 != piVar5);
      piVar2 = (int *)*param_1;
    }
    param_1[1] = piVar5;
    thunk_qNQrlu(piVar2);
  }
  return param_1;
}


// =========================================================================
// Function: VoeHudRPmGpQAdyifJgQqlFlvDZMCmFkb_PExTuFJtQDGmikpEjVVmoynhIBkzJPMBEUQxcEdcNlTfgRIcqSrzEYVxmM_nsjSRZtExHUFsJmnuVTurkHz_slQwhBSWoLwli_FWXjNQqZhsuFktKdozdMyXAUXUoLaBFJoPUGuKKCUAzKPzLzcftxblf_ClVGqzzJqVXJyDYSPGQhjlTwDrYrWTUxSdCUxpf
// Entry: 0x71ae5518 | Size: 248 bytes
// =========================================================================

void VoeHudRPmGpQAdyifJgQqlFlvDZMCmFkb_PExTuFJtQDGmikpEjVVmoynhIBkzJPMBEUQxcEdcNlTfgRIcqSrzEYVxmM_nsjSRZtExHUFsJmnuVTurkHz_slQwhBSWoLwli_FWXjNQqZhsuFktKdozdMyXAUXUoLaBFJoPUGuKKCUAzKPzLzcftxblf_ClVGqzzJqVXJyDYSPGQhjlTwDrYrWTUxSdCUxpf
               (int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7,int param_8,undefined4 param_9,int *param_10,
               undefined4 param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] != *param_1) {
    piVar6 = (int *)(param_2 + 4);
    uVar4 = param_1[1] - *param_1 >> 2;
    iVar5 = 0;
    uVar2 = 1;
    if (1 < uVar4) {
      uVar2 = uVar4;
    }
    uVar4 = 0;
    do {
      thunk_UtozAWKZSlVMdgCWzJYsPWOQkQocCWCgkPQyBGUpBYOXNpXaKMpZpjxOzsBUwQPCNxIFpYSPEMY_qOwdQNFZ_GRlpnsOYyxtlqWzknunjFrQelbYEKvz_dQcq_Gsw
                (param_1[3] + iVar5,param_4,*(undefined4 *)(param_8 + uVar4 * 4),param_6,param_11);
      iVar3 = piVar6[-1];
      iVar1 = 0;
      if (*piVar6 != iVar3) {
        iVar1 = iVar3;
      }
      thunk_sluaNwWXVwOKnSANccQoMKVZ_vdWMLEEcB_FTNAZXYDuBhlNMutmPJMDUmMEYZcxpXtqOaKAXJhJnoa_EsHmuCpHGXDlflZI
                (*(undefined4 *)(*param_1 + uVar4 * 4),iVar1,*piVar6 - iVar3 >> 2,param_6,
                 *(undefined4 *)(param_8 + uVar4 * 4),
                 *(uint *)(*param_10 + (uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1,param_11);
      piVar6 = piVar6 + 3;
      uVar4 = uVar4 + 1;
      param_6 = param_6 + 8;
      param_4 = param_4 + 0xc;
      iVar5 = iVar5 + 0x10c;
    } while (uVar2 != uVar4);
  }
  return;
}


// =========================================================================
// Function: FUN_71ae5a2c
// Entry: 0x71ae5a2c | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71ae5a2c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[1];
    piVar2 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar1 = *piVar4;
        *piVar4 = 0;
        if (iVar1 != 0) {
          thunk_czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL();
          thunk_qNQrlu();
        }
      } while (piVar4 != piVar3);
      piVar2 = (int *)*param_1;
    }
    param_1[1] = piVar3;
    thunk_qNQrlu(piVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ae5bf0
// Entry: 0x71ae5bf0 | Size: 20 bytes
// =========================================================================

void FUN_71ae5bf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ae5d10
// Entry: 0x71ae5d10 | Size: 20 bytes
// =========================================================================

void FUN_71ae5d10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: XVtKkOuvyItSHQjSlFTRdSQbdwJcUdoAuulVKVI
// Entry: 0x71ae5d78 | Size: 32 bytes
// =========================================================================

undefined1 * XVtKkOuvyItSHQjSlFTRdSQbdwJcUdoAuulVKVI(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  imp___aeabi_memclr4(param_1 + 4,0x108);
  return param_1;
}


// =========================================================================
// Function: BVPegXGQIImKqmKuYgLqcaUQ_lXTlLdYBMjCprM
// Entry: 0x71ae5d98 | Size: 4 bytes
// =========================================================================

void BVPegXGQIImKqmKuYgLqcaUQ_lXTlLdYBMjCprM(void)

{
  return;
}


// =========================================================================
// Function: UtozAWKZSlVMdgCWzJYsPWOQkQocCWCgkPQyBGUpBYOXNpXaKMpZpjxOzsBUwQPCNxIFpYSPEMY_qOwdQNFZ_GRlpnsOYyxtlqWzknunjFrQelbYEKvz_dQcq_Gsw
// Entry: 0x71ae5d9c | Size: 36 bytes
// =========================================================================

void UtozAWKZSlVMdgCWzJYsPWOQkQocCWCgkPQyBGUpBYOXNpXaKMpZpjxOzsBUwQPCNxIFpYSPEMY_qOwdQNFZ_GRlpnsOYyxtlqWzknunjFrQelbYEKvz_dQcq_Gsw
               (void)

{
  int in_r3;
  int in_stack_00000000;
  
  if (in_stack_00000000 != 0) {
    return;
  }
  if (*(char *)(in_r3 + 4) != '\0') {
    thunk_TQVjCvuA_VgmDcklQogRlTZtcstxBHfNXaNPCCyhZxOkBF_TadbyIVAiUQKedNWf_NZzoIcIwqox_lDjEUyGMhaEdQPZZDfsJoMETyEUrR
              ();
    return;
  }
  return;
}


// =========================================================================
// Function: TQVjCvuA_VgmDcklQogRlTZtcstxBHfNXaNPCCyhZxOkBF_TadbyIVAiUQKedNWf_NZzoIcIwqox_lDjEUyGMhaEdQPZZDfsJoMETyEUrR
// Entry: 0x71ae5dc0 | Size: 1624 bytes
// =========================================================================

void TQVjCvuA_VgmDcklQogRlTZtcstxBHfNXaNPCCyhZxOkBF_TadbyIVAiUQKedNWf_NZzoIcIwqox_lDjEUyGMhaEdQPZZDfsJoMETyEUrR
               (byte *param_1,int *param_2,int param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pauVar8 = (undefined1 (*) [16])param_2[1];
  fVar9 = 0.0;
  iVar3 = *param_2 + param_3 * 0x104;
  fVar10 = *(float *)(iVar3 + 4) + 0.0 + *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) +
           *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x18) +
           *(float *)(iVar3 + 0x1c) + *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x24) +
           *(float *)(iVar3 + 0x28) + *(float *)(iVar3 + 0x2c) + *(float *)(iVar3 + 0x30) +
           *(float *)(iVar3 + 0x34) + *(float *)(iVar3 + 0x38) + *(float *)(iVar3 + 0x3c) +
           *(float *)(iVar3 + 0x40) + *(float *)(iVar3 + 0x44) + *(float *)(iVar3 + 0x48) +
           *(float *)(iVar3 + 0x4c) + *(float *)(iVar3 + 0x50) + *(float *)(iVar3 + 0x54) +
           *(float *)(iVar3 + 0x58) + *(float *)(iVar3 + 0x5c) + *(float *)(iVar3 + 0x60) +
           *(float *)(iVar3 + 100) + *(float *)(iVar3 + 0x68) + *(float *)(iVar3 + 0x6c) +
           *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x74) + *(float *)(iVar3 + 0x78) +
           *(float *)(iVar3 + 0x7c) + *(float *)(iVar3 + 0x80) + *(float *)(iVar3 + 0x84) +
           *(float *)(iVar3 + 0x88) + *(float *)(iVar3 + 0x8c) + *(float *)(iVar3 + 0x90) +
           *(float *)(iVar3 + 0x94) + *(float *)(iVar3 + 0x98) + *(float *)(iVar3 + 0x9c) +
           *(float *)(iVar3 + 0xa0) + *(float *)(iVar3 + 0xa4) + *(float *)(iVar3 + 0xa8) +
           *(float *)(iVar3 + 0xac) + *(float *)(iVar3 + 0xb0) + *(float *)(iVar3 + 0xb4) +
           *(float *)(iVar3 + 0xb8) + *(float *)(iVar3 + 0xbc) + *(float *)(iVar3 + 0xc0) +
           *(float *)(iVar3 + 0xc4) + *(float *)(iVar3 + 200) + *(float *)(iVar3 + 0xcc) +
           *(float *)(iVar3 + 0xd0) + *(float *)(iVar3 + 0xd4) + *(float *)(iVar3 + 0xd8) +
           *(float *)(iVar3 + 0xdc) + *(float *)(iVar3 + 0xe0) + *(float *)(iVar3 + 0xe4) +
           *(float *)(iVar3 + 0xe8) + *(float *)(iVar3 + 0xec) + *(float *)(iVar3 + 0xf0) +
           *(float *)(iVar3 + 0xf4) + *(float *)(iVar3 + 0xf8) + *(float *)(iVar3 + 0xfc) +
           *(float *)(iVar3 + 0x100);
  if (fVar10 != 0.0) {
    fVar9 = (*(float *)pauVar8[-0x10] + 0.0 + *(float *)(pauVar8[-0x10] + 4) +
             *(float *)(pauVar8[-0x10] + 8) + *(float *)(pauVar8[-0x10] + 0xc) +
             *(float *)pauVar8[-0xf] + *(float *)(pauVar8[-0xf] + 4) + *(float *)(pauVar8[-0xf] + 8)
             + *(float *)(pauVar8[-0xf] + 0xc) + *(float *)pauVar8[-0xe] +
             *(float *)(pauVar8[-0xe] + 4) + *(float *)(pauVar8[-0xe] + 8) +
             *(float *)(pauVar8[-0xe] + 0xc) + *(float *)pauVar8[-0xd] +
             *(float *)(pauVar8[-0xd] + 4) + *(float *)(pauVar8[-0xd] + 8) +
             *(float *)(pauVar8[-0xd] + 0xc) + *(float *)pauVar8[-0xc] +
             *(float *)(pauVar8[-0xc] + 4) + *(float *)(pauVar8[-0xc] + 8) +
             *(float *)(pauVar8[-0xc] + 0xc) + *(float *)pauVar8[-0xb] +
             *(float *)(pauVar8[-0xb] + 4) + *(float *)(pauVar8[-0xb] + 8) +
             *(float *)(pauVar8[-0xb] + 0xc) + *(float *)pauVar8[-10] + *(float *)(pauVar8[-10] + 4)
             + *(float *)(pauVar8[-10] + 8) + *(float *)(pauVar8[-10] + 0xc) + *(float *)pauVar8[-9]
             + *(float *)(pauVar8[-9] + 4) + *(float *)(pauVar8[-9] + 8) +
             *(float *)(pauVar8[-9] + 0xc) + *(float *)pauVar8[-8] + *(float *)(pauVar8[-8] + 4) +
             *(float *)(pauVar8[-8] + 8) + *(float *)(pauVar8[-8] + 0xc) + *(float *)pauVar8[-7] +
             *(float *)(pauVar8[-7] + 4) + *(float *)(pauVar8[-7] + 8) +
             *(float *)(pauVar8[-7] + 0xc) + *(float *)pauVar8[-6] + *(float *)(pauVar8[-6] + 4) +
             *(float *)(pauVar8[-6] + 8) + *(float *)(pauVar8[-6] + 0xc) + *(float *)pauVar8[-5] +
             *(float *)(pauVar8[-5] + 4) + *(float *)(pauVar8[-5] + 8) +
             *(float *)(pauVar8[-5] + 0xc) + *(float *)pauVar8[-4] + *(float *)(pauVar8[-4] + 4) +
             *(float *)(pauVar8[-4] + 8) + *(float *)(pauVar8[-4] + 0xc) + *(float *)pauVar8[-3] +
             *(float *)(pauVar8[-3] + 4) + *(float *)(pauVar8[-3] + 8) +
             *(float *)(pauVar8[-3] + 0xc) + *(float *)pauVar8[-2] + *(float *)(pauVar8[-2] + 4) +
             *(float *)(pauVar8[-2] + 8) + *(float *)(pauVar8[-2] + 0xc) + *(float *)pauVar8[-1] +
             *(float *)(pauVar8[-1] + 4) + *(float *)(pauVar8[-1] + 8) +
            *(float *)(pauVar8[-1] + 0xc)) / fVar10;
  }
  pauVar2 = (undefined1 (*) [16])(param_1 + 8);
  fVar9 = *(float *)(param_1 + 4) + param_4 * 0.2 * (fVar9 - *(float *)(param_1 + 4));
  *(float *)(param_1 + 4) = fVar9;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 4;
    *(float *)(param_1 + iVar5 + 8) = fVar9 * *(float *)(iVar3 + iVar5);
    iVar5 = iVar6;
  } while (iVar6 != 0x104);
  uVar4 = (uint)*param_1;
  if (uVar4 != 0) {
    pauVar7 = (undefined1 (*) [16])0x104;
    if (pauVar2 < pauVar8) {
      pauVar7 = (undefined1 (*) [16])(param_1 + 0x10c);
      uVar4 = 0;
    }
    if (pauVar2 >= pauVar8 || pauVar7 <= (undefined1 (*) [16])(pauVar8[-0x11] + 0xc)) {
      auVar12 = *(undefined1 (*) [16])(pauVar8[-0x11] + 0xc);
      auVar13 = FloatVectorCompareGreaterThan(*pauVar2,auVar12,2);
      auVar12 = VectorBitwiseInsertIfTrue(auVar12,*pauVar2,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-0x10] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-0x10] + 0xc);
      *(longlong *)*pauVar2 = auVar12._0_8_;
      *(longlong *)(param_1 + 0x10) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x18);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-0xf] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-0xf] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x18) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x20) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x28);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-0xe] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-0xe] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x28) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x30) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x38);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-0xd] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-0xd] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x38) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x40) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x48);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-0xc] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-0xc] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x48) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x50) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x58);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-0xb] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-0xb] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x58) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x60) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x68);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-10] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-10] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x68) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x70) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x78);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-9] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-9] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x78) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x80) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x88);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-8] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-8] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x88) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x90) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0x98);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-7] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-7] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0x98) = auVar12._0_8_;
      *(longlong *)(param_1 + 0xa0) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0xa8);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-6] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-6] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0xa8) = auVar12._0_8_;
      *(longlong *)(param_1 + 0xb0) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0xb8);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-5] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-5] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0xb8) = auVar12._0_8_;
      *(longlong *)(param_1 + 0xc0) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 200);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-4] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-4] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 200) = auVar12._0_8_;
      *(longlong *)(param_1 + 0xd0) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0xd8);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-3] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-3] + 0xc);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0xd8) = auVar12._0_8_;
      *(longlong *)(param_1 + 0xe0) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0xe8);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      auVar1 = *(undefined1 (*) [16])(pauVar8[-2] + 0xc);
      auVar13 = *(undefined1 (*) [16])(pauVar8[-2] + 0xc);
      uVar4 = 0x40;
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0xe8) = auVar12._0_8_;
      *(longlong *)(param_1 + 0xf0) = auVar12._8_8_;
      auVar12 = *(undefined1 (*) [16])(param_1 + 0xf8);
      auVar13 = FloatVectorCompareGreaterThan(auVar12,auVar13,2);
      auVar12 = VectorBitwiseInsertIfFalse(auVar12,auVar1,auVar13);
      *(longlong *)*(undefined1 (*) [16])(param_1 + 0xf8) = auVar12._0_8_;
      *(longlong *)(param_1 + 0x100) = auVar12._8_8_;
    }
    iVar3 = uVar4 << 2;
    do {
      iVar5 = iVar3 + 4;
      fVar10 = *(float *)(*pauVar2 + iVar3);
      fVar9 = *(float *)(pauVar8[-0x11] + iVar3 + 0xc);
      if (*(float *)(pauVar8[-0x11] + iVar3 + 0xc) < fVar10) {
        fVar9 = fVar10;
      }
      *(float *)(*pauVar2 + iVar3) = fVar9;
      iVar3 = iVar5;
    } while (iVar5 != 0x104);
  }
  fVar9 = *(float *)(param_1 + 8);
  iVar3 = 0;
  fVar10 = *(float *)(param_1 + 0xc);
  do {
    iVar6 = iVar3 + 4;
    iVar5 = iVar3 + 0x10;
    fVar11 = (fVar9 + *(float *)(param_1 + iVar5)) * 0.5;
    fVar9 = fVar10;
    if (fVar10 < fVar11) {
      fVar9 = fVar11;
    }
    *(float *)(param_1 + iVar3 + 0xc) = fVar9;
    iVar3 = iVar6;
    fVar10 = *(float *)(param_1 + iVar5);
  } while (iVar6 != 0xfc);
  return;
}


// =========================================================================
// Function: gzQXc_SROWZQnILOrRhduYawhLhryPskpOWOOsZYhXmsgLDVaiBCZjZFJyiBQcg
// Entry: 0x71ae6470 | Size: 272 bytes
// =========================================================================

int * gzQXc_SROWZQnILOrRhduYawhLhryPskpOWOOsZYhXmsgLDVaiBCZjZFJyiBQcg(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_2 + 0xcc);
  iVar1 = *(int *)(param_2 + 0x54);
  *param_1 = iVar1;
  param_1[1] = iVar1 << 6;
  param_1[3] = 0;
  param_1[4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x54);
  *(bool *)(param_1 + 2) = fVar5 < 0.0;
  thunk_naPpacaNQfngKHRiEsFjHwrEnfBkNDtIRx_rXFpNnmHOSsgCMGjKrTwmktjpjCuZ(param_1 + 8,iVar1 + -3);
  piVar4 = param_1 + 0x16;
  *piVar4 = 0;
  param_1[0x11] = 3;
  param_1[0x12] = 3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar2 = *(uint *)(param_2 + 0x54);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if (uVar2 != 0) {
    if (0x3fffffff < uVar2) {
      FUN_71a0103c(piVar4);
      if (*piVar4 != 0) {
        param_1[0x17] = *piVar4;
        thunk_qNQrlu();
      }
      thunk_SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW(param_1 + 8);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = thunk_MwhHq(uVar2 << 2);
    iVar3 = iVar1 + uVar2 * 4;
    param_1[0x18] = iVar3;
    param_1[0x16] = iVar1;
    imp___aeabi_memclr4(iVar1,uVar2 << 2);
    param_1[0x17] = iVar3;
  }
  fVar5 = *(float *)(param_2 + 0xcc);
  fVar6 = *(float *)(param_2 + 0xd0);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = (int)ABS(fVar5);
  param_1[0x1a] = (int)ABS(fVar6);
  return param_1;
}


// =========================================================================
// Function: czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL
// Entry: 0x71ae6590 | Size: 48 bytes
// =========================================================================

int czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58);
    thunk_qNQrlu();
  }
  thunk_SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW(param_1 + 0x20);
  return param_1;
}


// =========================================================================
// Function: sluaNwWXVwOKnSANccQoMKVZ_vdWMLEEcB_FTNAZXYDuBhlNMutmPJMDUmMEYZcxpXtqOaKAXJhJnoa_EsHmuCpHGXDlflZI
// Entry: 0x71ae65c0 | Size: 292 bytes
// =========================================================================

void sluaNwWXVwOKnSANccQoMKVZ_vdWMLEEcB_FTNAZXYDuBhlNMutmPJMDUmMEYZcxpXtqOaKAXJhJnoa_EsHmuCpHGXDlflZI
               (int *param_1,undefined4 param_2,int param_3,float *param_4,int param_5,int param_6,
               int param_7)

{
  int iVar1;
  int unaff_r4;
  bool bVar2;
  float fVar3;
  
  if (param_7 == 0) {
    bVar2 = SBORROW4(param_5,1);
    iVar1 = param_5 + -1;
    if (0 < param_5) {
      unaff_r4 = *param_1;
      bVar2 = SBORROW4(unaff_r4 + -4,param_5);
      iVar1 = (unaff_r4 + -4) - param_5;
    }
    if (((iVar1 < 0 != bVar2) || (param_3 != param_1[1])) || (param_6 == 0)) {
      param_1[0xe] = 0;
      if (0 < param_1[0xc] - param_1[0xb]) {
        imp___aeabi_memclr4(param_1[0xb]);
      }
      param_1[0x1c] = 0;
      param_1[3] = 0;
      param_1[4] = -0x80000000;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0xf] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      param_1[0x13] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      param_1[0x14] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined1 *)(param_1 + 0x15) = 0;
      return;
    }
    if ((char)param_1[2] != '\0') {
      fVar3 = *param_4 * 0.2;
      if (*(char *)(param_4 + 1) == '\0') {
        fVar3 = 0.0;
      }
      if (fVar3 < (float)param_1[0x1c]) {
        fVar3 = (float)param_1[0x1c];
      }
      param_1[0x1c] = (int)fVar3;
      if (fVar3 == 0.0) {
        return;
      }
      if (param_3 == 0) {
        param_2 = 0;
      }
      if (unaff_r4 <= param_1[0x13]) {
        thunk_bPbkb_hbBgWClNGNKWfQhKeTuJzyRKyfGtKCpgmYqdjqofMKoBUpqFpvXUjhYwXhyQPXLsThZpGPF
                  (param_1,param_2);
        return;
      }
      thunk_iGzFhOkdncpBDw_AiKMwZJXTBXHBjw_oxSvUzVsXCJpkgyhzABZuxBFHVkehFGdm_QeTY_wmYRWB();
      param_1[0x13] = param_1[0x13] + 1;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FcRsotPRJDlZXvCFAyDQHixhB_qBEXBSkgWlagfxlcjSdrgLGlb_kJTS
// Entry: 0x71ae66ec | Size: 92 bytes
// =========================================================================

void FcRsotPRJDlZXvCFAyDQHixhB_qBEXBSkgWlagfxlcjSdrgLGlb_kJTS(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) {
    imp___aeabi_memclr4();
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return;
}


// =========================================================================
// Function: iGzFhOkdncpBDw_AiKMwZJXTBXHBjw_oxSvUzVsXCJpkgyhzABZuxBFHVkehFGdm_QeTY_wmYRWB
// Entry: 0x71ae6748 | Size: 1372 bytes
// =========================================================================

void iGzFhOkdncpBDw_AiKMwZJXTBXHBjw_oxSvUzVsXCJpkgyhzABZuxBFHVkehFGdm_QeTY_wmYRWB
               (int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  bool bVar12;
  byte bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float afStack_14c [65];
  
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar5 = 0;
  do {
    fVar15 = *(float *)(param_2 + iVar2 * 0x100 + iVar5);
    pfVar3 = (float *)((int)afStack_14c + iVar5);
    iVar5 = iVar5 + 4;
    *pfVar3 = fVar15 * fVar15;
  } while (iVar5 != 0x100);
  cVar1 = *(char *)(param_1 + 0x54);
  pfVar3 = (float *)(*(int *)(param_1 + 0x58) + iVar2 * 4);
  fVar17 = *pfVar3;
  fVar15 = (afStack_14c[0] + 0.0 + afStack_14c[1] + afStack_14c[2] + afStack_14c[3] + afStack_14c[4]
            + afStack_14c[5] + afStack_14c[6] + afStack_14c[7] + afStack_14c[8] + afStack_14c[9] +
            afStack_14c[10] + afStack_14c[0xb] + afStack_14c[0xc] + afStack_14c[0xd] +
            afStack_14c[0xe] + afStack_14c[0xf] + afStack_14c[0x10] + afStack_14c[0x11] +
            afStack_14c[0x12] + afStack_14c[0x13] + afStack_14c[0x14] + afStack_14c[0x15] +
            afStack_14c[0x16] + afStack_14c[0x17] + afStack_14c[0x18] + afStack_14c[0x19] +
            afStack_14c[0x1a] + afStack_14c[0x1b] + afStack_14c[0x1c] + afStack_14c[0x1d] +
            afStack_14c[0x1e] + afStack_14c[0x1f] + afStack_14c[0x20] + afStack_14c[0x21] +
            afStack_14c[0x22] + afStack_14c[0x23] + afStack_14c[0x24] + afStack_14c[0x25] +
            afStack_14c[0x26] + afStack_14c[0x27] + afStack_14c[0x28] + afStack_14c[0x29] +
            afStack_14c[0x2a] + afStack_14c[0x2b] + afStack_14c[0x2c] + afStack_14c[0x2d] +
            afStack_14c[0x2e] + afStack_14c[0x2f] + afStack_14c[0x30] + afStack_14c[0x31] +
            afStack_14c[0x32] + afStack_14c[0x33] + afStack_14c[0x34] + afStack_14c[0x35] +
            afStack_14c[0x36] + afStack_14c[0x37] + afStack_14c[0x38] + afStack_14c[0x39] +
            afStack_14c[0x3a] + afStack_14c[0x3b] + afStack_14c[0x3c] + afStack_14c[0x3d] +
            afStack_14c[0x3e] + afStack_14c[0x3f]) * 0.015625;
  uVar8 = in_fpscr & 0xfffffff;
  uVar14 = uVar8 | (uint)(fVar15 < 1e-32) << 0x1f;
  if (SUB41(uVar14 >> 0x1f,0)) {
    fVar15 = 1e-32;
  }
  fVar16 = *(float *)(param_1 + 0x6c);
  *pfVar3 = fVar15;
  if (cVar1 == '\0') {
    fVar18 = fVar15 * 1.1;
    uVar10 = uVar8 | (uint)(fVar17 < fVar18) << 0x1f | (uint)(fVar17 == fVar18) << 0x1e;
    uVar14 = uVar10 | (uint)(NAN(fVar17) || NAN(fVar18)) << 0x1c;
    bVar13 = (byte)(uVar10 >> 0x18);
    if (((bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(uVar14 >> 0x1c) & 1)) &&
       (uVar14 = uVar8 | (uint)(fVar17 < fVar15 * 0.9) << 0x1f, !SUB41(uVar14 >> 0x1f,0))) {
      uVar8 = uVar8 | (uint)(fVar15 < fVar16) << 0x1f | (uint)(fVar15 == fVar16) << 0x1e;
      uVar14 = uVar8 | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c;
      bVar13 = (byte)(uVar8 >> 0x18);
      bVar11 = bVar13 >> 7;
      bVar12 = (bool)(bVar13 >> 6 & 1);
      bVar13 = (byte)(uVar14 >> 0x1c) & 1;
      *(bool *)(param_1 + 0x54) = bVar12 || bVar11 != bVar13;
      if (!bVar12 && bVar11 == bVar13) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar5 = *(int *)(param_1 + 0x48);
      goto joined_r0x71ae6a34;
    }
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  iVar5 = *(int *)(param_1 + 0x48);
joined_r0x71ae6a34:
  if (iVar2 <= iVar5) {
    if (iVar2 < *(int *)(param_1 + 0x44)) {
      iVar2 = 0;
      do {
        fVar15 = (float)thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY
                                  (*(float *)((int)afStack_14c + iVar2) + 1e-10);
        iVar9 = *(int *)(param_1 + 0x2c);
        iVar4 = *(int *)(param_1 + 0x3c);
        iVar6 = *(int *)(param_1 + 0x38);
        uVar10 = iVar4 - 5;
        fVar17 = *(float *)(param_1 + 0x70);
        iVar5 = (*(int *)(param_1 + 0x30) - iVar9 >> 2) + -1;
        uVar8 = uVar10 & ~((int)uVar10 >> 0x1f);
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
        if ((int)uVar8 <= iVar5) {
          pfVar3 = (float *)(iVar9 + iVar5 * 4);
          iVar7 = iVar5 + 1;
          fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(uVar14 >> 0x16) & 3);
          fVar18 = (float)VectorSignedToFloat(iVar4 - iVar5,(byte)(uVar14 >> 0x16) & 3);
          fVar16 = fVar15 * 64.0 * fVar18 + (fVar16 + -191.5) * fVar15;
          do {
            iVar7 = iVar7 + -1;
            fVar18 = fVar16 + *pfVar3;
            fVar16 = fVar15 * 64.0 + fVar16;
            *pfVar3 = fVar18;
            pfVar3 = pfVar3 + -1;
          } while ((int)uVar8 < iVar7);
        }
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 0x38) = iVar6;
        if (iVar6 == 0x40) {
          if (4 < iVar4) {
            pfVar3 = (float *)(*(int *)(param_1 + 0x20) + uVar10 * 4);
            fVar15 = *(float *)(iVar9 + uVar10 * 4);
            *(int *)(param_1 + 0x40) = iVar4 + -4;
            fVar16 = *pfVar3;
            *pfVar3 = fVar16 + fVar17 * (fVar15 - fVar16);
          }
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(int *)(param_1 + 0x3c) = iVar4 + 1;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0x100);
    }
    else {
      iVar2 = 0;
      do {
        fVar15 = (float)thunk_gNLIrfKvdfPG_ohpeALeMZcQlpSjY
                                  (*(float *)((int)afStack_14c + iVar2) + 1e-10);
        fVar16 = *(float *)(param_1 + 0x14);
        iVar9 = *(int *)(param_1 + 0x2c);
        iVar4 = *(int *)(param_1 + 0x3c);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        uVar8 = iVar4 - 5;
        iVar6 = *(int *)(param_1 + 0x38);
        iVar5 = (*(int *)(param_1 + 0x30) - iVar9 >> 2) + -1;
        fVar17 = *(float *)(param_1 + 0x70);
        uVar10 = uVar8 & ~((int)uVar8 >> 0x1f);
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
        *(float *)(param_1 + 0x14) = fVar16 + 1.0;
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + fVar16 * fVar15;
        if ((int)uVar10 <= iVar5) {
          pfVar3 = (float *)(iVar9 + iVar5 * 4);
          iVar7 = iVar5 + 1;
          fVar16 = (float)VectorSignedToFloat(iVar6,(byte)(uVar14 >> 0x16) & 3);
          fVar18 = (float)VectorSignedToFloat(iVar4 - iVar5,(byte)(uVar14 >> 0x16) & 3);
          fVar16 = fVar15 * 64.0 * fVar18 + (fVar16 + -191.5) * fVar15;
          do {
            iVar7 = iVar7 + -1;
            fVar18 = fVar16 + *pfVar3;
            fVar16 = fVar15 * 64.0 + fVar16;
            *pfVar3 = fVar18;
            pfVar3 = pfVar3 + -1;
          } while ((int)uVar10 < iVar7);
        }
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 0x38) = iVar6;
        if (iVar6 == 0x40) {
          if (4 < iVar4) {
            pfVar3 = (float *)(*(int *)(param_1 + 0x20) + uVar8 * 4);
            fVar15 = *(float *)(iVar9 + uVar8 * 4);
            *(int *)(param_1 + 0x40) = iVar4 + -4;
            fVar16 = *pfVar3;
            *pfVar3 = fVar16 + fVar17 * (fVar15 - fVar16);
          }
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(int *)(param_1 + 0x3c) = iVar4 + 1;
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0x100);
    }
  }
  return;
}


// =========================================================================
// Function: bPbkb_hbBgWClNGNKWfQhKeTuJzyRKyfGtKCpgmYqdjqofMKoBUpqFpvXUjhYwXhyQPXLsThZpGPF
// Entry: 0x71ae6cc8 | Size: 648 bytes
// =========================================================================

void bPbkb_hbBgWClNGNKWfQhKeTuJzyRKyfGtKCpgmYqdjqofMKoBUpqFpvXUjhYwXhyQPXLsThZpGPF
               (int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar13 = param_4 + 3;
  iVar12 = *param_1;
  if (iVar13 <= *param_1) {
    iVar12 = iVar13;
  }
  if (param_3 == 0) {
    param_2 = 0;
  }
  param_1[0x13] = iVar12;
  fVar16 = (float)FUN_71ae7008(param_2,param_3,iVar12);
  fVar17 = (float)FUN_71ae7008(param_2,param_3,(param_3 >> 6) - 1);
  pfVar4 = (float *)(param_2 + param_4 * 0x100);
  param_1[0x1b] = (int)fVar17;
  iVar5 = 4;
  fVar18 = *pfVar4;
  pfVar7 = pfVar4;
  do {
    pfVar9 = (float *)((int)pfVar4 + iVar5);
    iVar5 = iVar5 + 4;
    fVar19 = *pfVar9;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar18 * fVar18 < fVar19 * fVar19) << 0x1f;
    if (SUB41(in_fpscr >> 0x1f,0)) {
      pfVar7 = pfVar9;
      fVar18 = fVar19;
    }
  } while (iVar5 != 0x100);
  fVar18 = *pfVar7;
  fVar19 = fVar17 + fVar17;
  iVar5 = thunk_lRWkcdNIvAQaKotyGqdFEVgOsGXRLjdDFSdSaBWZrGMXpfkerHnLysfdRE_xISQIgGBXTQm(param_1 + 8)
  ;
  uVar15 = in_fpscr & 0xfffffff | (uint)(fVar18 * fVar18 < 100.0) << 0x1f;
  iVar10 = param_1[0x14];
  iVar6 = 0;
  bVar2 = !SUB41(uVar15 >> 0x1f,0);
  uVar8 = iVar10 - iVar5;
  if ((int)uVar8 < 5) {
    param_1[0x11] = 0;
    param_1[3] = 0;
    param_1[4] = -0x80000000;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    bVar3 = !bVar2;
    bVar14 = fVar19 < fVar16 && bVar3;
    uVar11 = uVar8 & ~((int)uVar8 >> 0x1f);
    if (fVar19 < fVar16 && bVar3) {
      uVar8 = param_1[6];
      bVar14 = param_1[7] == uVar8;
    }
    if ((bVar14) && (uVar8 != 0)) {
      uVar15 = in_fpscr & 0xfffffff | (uint)((float)param_1[4] == 0.0) << 0x1e;
      if (SUB41(uVar15 >> 0x1e,0)) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = ((float)param_1[3] / (float)param_1[4]) * 64.0;
      }
      fVar21 = (float)param_1[0x19];
      fVar22 = (float)param_1[0x1c];
      fVar20 = (float)imp_exp2f(fVar18);
      fVar18 = fVar21 * 0.97;
      if (fVar21 * 0.97 < fVar20) {
        fVar18 = fVar20;
      }
      if (0.95 < fVar18) {
        fVar18 = 0.95;
      }
      uVar15 = uVar15 & 0xfffffff | (uint)(fVar18 < 0.02) << 0x1f;
      if (SUB41(uVar15 >> 0x1f,0)) {
        fVar18 = 0.02;
      }
      param_1[0x19] = (int)(fVar21 + fVar22 * (fVar18 - fVar21));
    }
    iVar1 = uVar11 * 0x40;
    fVar21 = (float)VectorSignedToFloat(iVar1,(byte)(uVar15 >> 0x16) & 3);
    param_1[0x11] = iVar5 + iVar13;
    param_1[3] = 0;
    param_1[6] = iVar1;
    param_1[7] = 0;
    fVar20 = (float)VectorSignedToFloat(iVar1 * iVar1,(byte)(uVar15 >> 0x16) & 3);
    iVar6 = iVar12 + iVar10 + -1;
    fVar22 = (float)VectorSignedToFloat(uVar11 * -0x40,(byte)(uVar15 >> 0x16) & 3);
    fVar18 = 0.0;
    if (0 < iVar1) {
      fVar18 = fVar22 * 0.5 + 0.5;
    }
    param_1[5] = (int)fVar18;
    param_1[4] = (int)((fVar20 + -1.0) * fVar21 * 0.083333336);
  }
  param_1[0x12] = iVar6;
  param_1[0x1c] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = 0;
  *(bool *)(param_1 + 0x15) = fVar16 <= fVar17 * 4.0 || (fVar16 <= fVar19 || bVar2);
  if (0 < param_1[0xc] - param_1[0xb]) {
    imp___aeabi_memclr4();
  }
  param_1[0xf] = 0;
  return;
}


// =========================================================================
// Function: hvDxJXQvfwttnNEVfuZQYFqbeiaOwfatPFUKPknmegXTBODwZxOHLcY_tjhksQLjNJPn
// Entry: 0x71ae6f6c | Size: 48 bytes
// =========================================================================

void hvDxJXQvfwttnNEVfuZQYFqbeiaOwfatPFUKPknmegXTBODwZxOHLcY_tjhksQLjNJPn(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) {
    imp___aeabi_memclr4();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// =========================================================================
// Function: bSCFYHIFnIzXqpCmNWBryYTK_EHaBTmXDOgPcHJynVIECadcQbdGpiOVHOYTJDRbiET
// Entry: 0x71ae6f9c | Size: 100 bytes
// =========================================================================

void bSCFYHIFnIzXqpCmNWBryYTK_EHaBTmXDOgPcHJynVIECadcQbdGpiOVHOYTJDRbiET
               (undefined4 *param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = 0;
  fVar1 = (float)VectorSignedToFloat(param_2 * param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(-param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 0.0;
  if (0 < param_2) {
    fVar3 = fVar4 * 0.5 + 0.5;
  }
  param_1[2] = fVar3;
  param_1[1] = (fVar1 + -1.0) * fVar2 * 0.083333336;
  return;
}


// =========================================================================
// Function: FUN_71ae7008
// Entry: 0x71ae7008 | Size: 532 bytes
// =========================================================================

float FUN_71ae7008(int param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_1 + param_3 * 0x100);
  return (*pfVar1 * *pfVar1 + 0.0 + pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2] +
          pfVar1[3] * pfVar1[3] + pfVar1[4] * pfVar1[4] + pfVar1[5] * pfVar1[5] +
          pfVar1[6] * pfVar1[6] + pfVar1[7] * pfVar1[7] + pfVar1[8] * pfVar1[8] +
          pfVar1[9] * pfVar1[9] + pfVar1[10] * pfVar1[10] + pfVar1[0xb] * pfVar1[0xb] +
          pfVar1[0xc] * pfVar1[0xc] + pfVar1[0xd] * pfVar1[0xd] + pfVar1[0xe] * pfVar1[0xe] +
          pfVar1[0xf] * pfVar1[0xf] + pfVar1[0x10] * pfVar1[0x10] + pfVar1[0x11] * pfVar1[0x11] +
          pfVar1[0x12] * pfVar1[0x12] + pfVar1[0x13] * pfVar1[0x13] + pfVar1[0x14] * pfVar1[0x14] +
          pfVar1[0x15] * pfVar1[0x15] + pfVar1[0x16] * pfVar1[0x16] + pfVar1[0x17] * pfVar1[0x17] +
          pfVar1[0x18] * pfVar1[0x18] + pfVar1[0x19] * pfVar1[0x19] + pfVar1[0x1a] * pfVar1[0x1a] +
          pfVar1[0x1b] * pfVar1[0x1b] + pfVar1[0x1c] * pfVar1[0x1c] + pfVar1[0x1d] * pfVar1[0x1d] +
          pfVar1[0x1e] * pfVar1[0x1e] + pfVar1[0x1f] * pfVar1[0x1f] + pfVar1[0x20] * pfVar1[0x20] +
          pfVar1[0x21] * pfVar1[0x21] + pfVar1[0x22] * pfVar1[0x22] + pfVar1[0x23] * pfVar1[0x23] +
          pfVar1[0x24] * pfVar1[0x24] + pfVar1[0x25] * pfVar1[0x25] + pfVar1[0x26] * pfVar1[0x26] +
          pfVar1[0x27] * pfVar1[0x27] + pfVar1[0x28] * pfVar1[0x28] + pfVar1[0x29] * pfVar1[0x29] +
          pfVar1[0x2a] * pfVar1[0x2a] + pfVar1[0x2b] * pfVar1[0x2b] + pfVar1[0x2c] * pfVar1[0x2c] +
          pfVar1[0x2d] * pfVar1[0x2d] + pfVar1[0x2e] * pfVar1[0x2e] + pfVar1[0x2f] * pfVar1[0x2f] +
          pfVar1[0x30] * pfVar1[0x30] + pfVar1[0x31] * pfVar1[0x31] + pfVar1[0x32] * pfVar1[0x32] +
          pfVar1[0x33] * pfVar1[0x33] + pfVar1[0x34] * pfVar1[0x34] + pfVar1[0x35] * pfVar1[0x35] +
          pfVar1[0x36] * pfVar1[0x36] + pfVar1[0x37] * pfVar1[0x37] + pfVar1[0x38] * pfVar1[0x38] +
          pfVar1[0x39] * pfVar1[0x39] + pfVar1[0x3a] * pfVar1[0x3a] + pfVar1[0x3b] * pfVar1[0x3b] +
          pfVar1[0x3c] * pfVar1[0x3c] + pfVar1[0x3d] * pfVar1[0x3d] + pfVar1[0x3e] * pfVar1[0x3e] +
         pfVar1[0x3f] * pfVar1[0x3f]) * 0.015625;
}


// =========================================================================
// Function: lRWkcdNIvAQaKotyGqdFEVgOsGXRLjdDFSdSaBWZrGMXpfkerHnLysfdRE_xISQIgGBXTQm
// Entry: 0x71ae7224 | Size: 596 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

int lRWkcdNIvAQaKotyGqdFEVgOsGXRLjdDFSdSaBWZrGMXpfkerHnLysfdRE_xISQIgGBXTQm(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = param_1[8];
  if (8 < iVar3) {
    iVar1 = *param_1;
    pfVar2 = (float *)(iVar1 + 0x24);
    if (1 < iVar3 - 9U) {
      fVar5 = *(float *)(iVar1 + 0x24);
      iVar3 = iVar3 * 4 + -0x28;
      pfVar4 = (float *)(iVar1 + 0x28);
      do {
        if (*pfVar4 < fVar5) {
          pfVar2 = pfVar4;
          fVar5 = *pfVar4;
        }
        iVar3 = iVar3 + -4;
        pfVar4 = pfVar4 + 1;
      } while (iVar3 != 0);
    }
    fVar6 = *(float *)(iVar1 + 4);
    fVar5 = *pfVar2 * 0.9;
    if ((10137.791 < fVar6) || (iVar3 = 0, fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 1;
      fVar6 = *(float *)(iVar1 + 8);
    }
    else {
      fVar6 = *(float *)(iVar1 + 8);
    }
    if ((10137.791 < fVar6) || (fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 2;
      fVar6 = *(float *)(iVar1 + 0xc);
    }
    else {
      fVar6 = *(float *)(iVar1 + 0xc);
    }
    if ((10137.791 < fVar6) || (fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 3;
      fVar6 = *(float *)(iVar1 + 0x10);
    }
    else {
      fVar6 = *(float *)(iVar1 + 0x10);
    }
    if ((10137.791 < fVar6) || (fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 4;
      fVar6 = *(float *)(iVar1 + 0x14);
    }
    else {
      fVar6 = *(float *)(iVar1 + 0x14);
    }
    if ((10137.791 < fVar6) || (fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 5;
      fVar6 = *(float *)(iVar1 + 0x18);
    }
    else {
      fVar6 = *(float *)(iVar1 + 0x18);
    }
    if ((10137.791 < fVar6) || (fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 6;
      fVar6 = *(float *)(iVar1 + 0x1c);
    }
    else {
      fVar6 = *(float *)(iVar1 + 0x1c);
    }
    if ((10137.791 < fVar6) || (fVar6 < -23734.953 && fVar6 < fVar5)) {
      iVar3 = 7;
    }
    fVar6 = *(float *)(iVar1 + 0x20);
    iVar1 = 9;
    if (((fVar6 <= 10137.791) && (-23734.953 <= fVar6 || fVar5 <= fVar6)) &&
       (iVar1 = iVar3, iVar3 != 0)) {
      iVar1 = iVar3 + 1;
    }
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: bvNsuwwojLfGmirJEtRyMhMaVAavupBZOWBjiqyyoDoegtfEOonQHgdoYzgWjulewRMfJm
// Entry: 0x71ae7484 | Size: 40 bytes
// =========================================================================

float bvNsuwwojLfGmirJEtRyMhMaVAavupBZOWBjiqyyoDoegtfEOonQHgdoYzgWjulewRMfJm(float *param_1)

{
  if (param_1[1] != 0.0) {
    return *param_1 / param_1[1];
  }
  return 0.0;
}


// =========================================================================
// Function: ipkCTozFlOBUmcqpVcgpnykcjAwnUwiBEYurrxaaTrvUBxoJDGauVJVafiHbloykJlZAjJfJW
// Entry: 0x71ae74b0 | Size: 48 bytes
// =========================================================================

void ipkCTozFlOBUmcqpVcgpnykcjAwnUwiBEYurrxaaTrvUBxoJDGauVJVafiHbloykJlZAjJfJW
               (float *param_1,float param_2)

{
  param_1[4] = (float)((int)param_1[4] + 1);
  *param_1 = *param_1 + param_1[2] * param_2;
  param_1[2] = param_1[2] + 1.0;
  return;
}


// =========================================================================
// Function: irxJXjrXEMPCwBywuJLkIWeYzbwDLCNDYlTHQJEGZzgUVdjFerBIKrXeadkUJVloSD_HAGOnIvq
// Entry: 0x71ae74e0 | Size: 228 bytes
// =========================================================================

void irxJXjrXEMPCwBywuJLkIWeYzbwDLCNDYlTHQJEGZzgUVdjFerBIKrXeadkUJVloSD_HAGOnIvq
               (int *param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  iVar5 = param_1[3];
  iVar2 = param_1[7];
  iVar7 = param_1[6];
  uVar6 = iVar2 - 5;
  iVar4 = (param_1[4] - iVar5 >> 2) + -1;
  uVar3 = uVar6 & ~((int)uVar6 >> 0x1f);
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  if ((int)uVar3 <= iVar4) {
    fVar8 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
    pfVar1 = (float *)(iVar5 + iVar4 * 4);
    fVar9 = (float)VectorSignedToFloat(iVar2 - iVar4,(byte)(in_fpscr >> 0x16) & 3);
    iVar4 = iVar4 + 1;
    fVar8 = param_2 * 64.0 * fVar9 + (fVar8 + -191.5) * param_2;
    do {
      iVar4 = iVar4 + -1;
      fVar9 = fVar8 + *pfVar1;
      fVar8 = param_2 * 64.0 + fVar8;
      *pfVar1 = fVar9;
      pfVar1 = pfVar1 + -1;
    } while ((int)uVar3 < iVar4);
  }
  iVar7 = iVar7 + 1;
  param_1[6] = iVar7;
  if (iVar7 == 0x40) {
    if (4 < iVar2) {
      pfVar1 = (float *)(*param_1 + uVar6 * 4);
      fVar8 = *(float *)(iVar5 + uVar6 * 4);
      fVar9 = *pfVar1;
      param_1[8] = iVar2 + -4;
      *pfVar1 = fVar9 + param_3 * (fVar8 - fVar9);
    }
    param_1[6] = 0;
    param_1[7] = iVar2 + 1;
  }
  return;
}


// =========================================================================
// Function: MErBEtbJNrqyguzWgJutnXZnCDjazIhNTMqQykQXdPataXkQxliezYOEoFo
// Entry: 0x71ae75cc | Size: 4 bytes
// =========================================================================

void MErBEtbJNrqyguzWgJutnXZnCDjazIhNTMqQykQXdPataXkQxliezYOEoFo(void)

{
  return;
}


// =========================================================================
// Function: zmKAbDflmPtzulsrHF_RYXctaCyxelLlhigbmVPmQCTLFOgNyhLZGIIETaFzlpkRXmZBgRKFeBaZpblGwPJwPLy
// Entry: 0x71ae75d0 | Size: 4 bytes
// =========================================================================

void zmKAbDflmPtzulsrHF_RYXctaCyxelLlhigbmVPmQCTLFOgNyhLZGIIETaFzlpkRXmZBgRKFeBaZpblGwPJwPLy(void)

{
  return;
}


// =========================================================================
// Function: naPpacaNQfngKHRiEsFjHwrEnfBkNDtIRx_rXFpNnmHOSsgCMGjKrTwmktjpjCuZ
// Entry: 0x71ae75d4 | Size: 252 bytes
// =========================================================================

int * naPpacaNQfngKHRiEsFjHwrEnfBkNDtIRx_rXFpNnmHOSsgCMGjKrTwmktjpjCuZ(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 - 6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar4 == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    if (0x3fffffff < uVar4) {
      FUN_71a0103c(param_1);
      if (param_1[3] != 0) {
        param_1[4] = param_1[3];
        thunk_qNQrlu();
      }
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = uVar4 * 4;
    iVar2 = thunk_MwhHq(iVar1);
    iVar5 = iVar2 + uVar4 * 4;
    *param_1 = iVar2;
    param_1[2] = iVar5;
    imp___aeabi_memclr4(iVar2,param_2 * 4 + -0x18);
    param_1[1] = iVar5;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    iVar3 = thunk_MwhHq(iVar1);
    param_1[5] = iVar3 + iVar1;
    param_1[3] = iVar3;
    imp___aeabi_memclr4(iVar3,((iVar5 - iVar2) - 4U & 0xfffffffc) + 4);
    param_1[4] = iVar3 + iVar1;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}


// =========================================================================
// Function: SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW
// Entry: 0x71ae76d0 | Size: 60 bytes
// =========================================================================

int * SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW(int *param_1)

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
// Function: cStjwuWLUjjLxPekJgIFByPbjuFIDSxEmSKBxmDV
// Entry: 0x71ae7a88 | Size: 164 bytes
// =========================================================================

int * cStjwuWLUjjLxPekJgIFByPbjuFIDSxEmSKBxmDV(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *extraout_r2;
  char *extraout_r3;
  byte *unaff_r4;
  int *piVar6;
  byte *unaff_r5;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      uVar13 = FUN_71ad95f4(param_1);
      piVar4 = (int *)uVar13;
      piVar6 = (int *)0x0;
      *extraout_r3 = '\0';
      *unaff_r4 = 0;
      *unaff_r5 = 1;
      if (extraout_r2 != (int *)0x0) {
        iVar2 = *piVar4;
        pfVar5 = (float *)((int)((ulonglong)uVar13 >> 0x20) + 0x820);
        do {
          fVar12 = pfVar5[-2];
          fVar9 = pfVar5[-1];
          fVar10 = *pfVar5;
          uVar1 = 1 << ((uint)piVar6 & 0x1f);
          uVar3 = (uint)piVar6 >> 5;
          fVar11 = fVar12;
          if (fVar9 < fVar12) {
            fVar11 = fVar9;
          }
          if ((fVar10 <= 160000.0) || (fVar10 * 0.5 <= fVar12 && fVar10 * 0.05 <= fVar9)) {
            uVar7 = *(uint *)(iVar2 + uVar3 * 4) & ~uVar1;
          }
          else {
            uVar7 = *(uint *)(iVar2 + uVar3 * 4) | uVar1;
          }
          piVar6 = (int *)((int)piVar6 + 1);
          *(uint *)(iVar2 + uVar3 * 4) = uVar7;
          *extraout_r3 = *extraout_r3 != '\0' || (uVar7 & uVar1) != 0;
          *unaff_r4 = *unaff_r4 | (25600.0 < fVar10 && fVar9 < fVar10 * 0.3);
          *unaff_r5 = *unaff_r5 & (57600.0 < fVar10 && fVar10 * 1.5 < fVar11);
          pfVar5 = pfVar5 + 0x20b;
          piVar4 = extraout_r2;
        } while (extraout_r2 != piVar6);
      }
      return piVar4;
    }
    iVar8 = (param_2 - 1 >> 5) + 1;
    iVar2 = thunk_MwhHq(iVar8 * 4);
    uVar3 = param_2 - 1 >> 5;
    if (param_2 < 0x21) {
      uVar3 = 0;
    }
    uVar1 = param_2 >> 5;
    *(undefined4 *)(iVar2 + uVar3 * 4) = 0;
    *param_1 = iVar2;
    param_1[1] = param_2;
    param_1[2] = iVar8;
    if (uVar1 != 0) {
      imp___aeabi_memclr4(iVar2,uVar1 << 2);
    }
    if ((param_2 & 0x1f) != 0) {
      *(uint *)(iVar2 + uVar1 * 4) =
           *(uint *)(iVar2 + uVar1 * 4) & ~(0xffffffffU >> (0x20 - (param_2 & 0x1f) & 0xff));
    }
  }
  return param_1;
}


// =========================================================================
// Function: T_ByWfdVGQiECDPyoypYTLPIhBgFBwGJEXBelCQ_CPCtOUrELXIzCWVZCqESMrTkATbDZUbEYiuCUrldpGkftNpl_mUUwlLWSSnoz
// Entry: 0x71ae7b2c | Size: 404 bytes
// =========================================================================

void T_ByWfdVGQiECDPyoypYTLPIhBgFBwGJEXBelCQ_CPCtOUrELXIzCWVZCqESMrTkATbDZUbEYiuCUrldpGkftNpl_mUUwlLWSSnoz
               (int *param_1,int param_2,uint param_3,char *param_4,byte *param_5,byte *param_6)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = 0;
  *param_4 = '\0';
  *param_5 = 0;
  *param_6 = 1;
  if (param_3 != 0) {
    iVar6 = *param_1;
    pfVar3 = (float *)(param_2 + 0x820);
    do {
      fVar10 = pfVar3[-2];
      fVar7 = pfVar3[-1];
      fVar8 = *pfVar3;
      uVar2 = 1 << (uVar4 & 0x1f);
      uVar1 = uVar4 >> 5;
      fVar9 = fVar10;
      if (fVar7 < fVar10) {
        fVar9 = fVar7;
      }
      if ((fVar8 <= 160000.0) || (fVar8 * 0.5 <= fVar10 && fVar8 * 0.05 <= fVar7)) {
        uVar5 = *(uint *)(iVar6 + uVar1 * 4) & ~uVar2;
      }
      else {
        uVar5 = *(uint *)(iVar6 + uVar1 * 4) | uVar2;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(iVar6 + uVar1 * 4) = uVar5;
      *param_4 = *param_4 != '\0' || (uVar5 & uVar2) != 0;
      *param_5 = *param_5 | (25600.0 < fVar8 && fVar7 < fVar8 * 0.3);
      *param_6 = *param_6 & (57600.0 < fVar8 && fVar8 * 1.5 < fVar9);
      pfVar3 = pfVar3 + 0x20b;
    } while (param_3 != uVar4);
  }
  return;
}


// =========================================================================
// Function: SQDjCSD_ygPuqVWZLrrFCVlaEuCsihFMCKuQOosYGgYYyjQelDcG_MDzoPwE
// Entry: 0x71ae7cd4 | Size: 76 bytes
// =========================================================================

void SQDjCSD_ygPuqVWZLrrFCVlaEuCsihFMCKuQOosYGgYYyjQelDcG_MDzoPwE(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    iVar2 = *param_1;
    uVar1 = uVar3 >> 5;
    if (uVar1 != 0) {
      imp___aeabi_memclr4(iVar2,uVar1 << 2);
    }
    if ((uVar3 & 0x1f) != 0) {
      *(uint *)(iVar2 + uVar1 * 4) =
           *(uint *)(iVar2 + uVar1 * 4) & ~(0xffffffffU >> (0x20 - (uVar3 & 0x1f) & 0xff));
    }
  }
  return;
}


// =========================================================================
// Function: UmZzS_cbjoLnmUermiSHDYQumaTywaAPz_FsluCiWPC
// Entry: 0x71ae7da8 | Size: 20 bytes
// =========================================================================

void UmZzS_cbjoLnmUermiSHDYQumaTywaAPz_FsluCiWPC(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// =========================================================================
// Function: XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH
// Entry: 0x71ae7dbc | Size: 8 bytes
// =========================================================================

void XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}


// =========================================================================
// Function: czzQYSkZIUOirCVBTOdqOrkZxGmanqiXPjAkLGEHK_XWGQWL
// Entry: 0x71ae7dc4 | Size: 60 bytes
// =========================================================================

void czzQYSkZIUOirCVBTOdqOrkZxGmanqiXPjAkLGEHK_XWGQWL(float *param_1,float param_2)

{
  float fVar1;
  
  *param_1 = *param_1 + param_2;
  fVar1 = param_1[1];
  if (param_2 < param_1[1]) {
    fVar1 = param_2;
  }
  param_1[1] = fVar1;
  fVar1 = param_1[2];
  if (param_1[2] < param_2) {
    fVar1 = param_2;
  }
  param_1[2] = fVar1;
  return;
}


// =========================================================================
// Function: rWdteCLipmeQd_IfDMjZwJ_uTVSzoq_rGJknLTnSDZMRJXRHZ_cbwkDX
// Entry: 0x71ae7e00 | Size: 52 bytes
// =========================================================================

void rWdteCLipmeQd_IfDMjZwJ_uTVSzoq_rGJknLTnSDZMRJXRHZ_cbwkDX(float *param_1,float param_2)

{
  float fVar1;
  
  *param_1 = param_2;
  fVar1 = param_1[1];
  if (param_2 < param_1[1]) {
    fVar1 = param_2;
  }
  param_1[1] = fVar1;
  fVar1 = param_1[2];
  if (param_1[2] < param_2) {
    fVar1 = param_2;
  }
  param_1[2] = fVar1;
  return;
}


// =========================================================================
// Function: tfIOLOenmdZMmILmF_pGzqaiqSNuNRpEnr
// Entry: 0x71ae7e34 | Size: 136 bytes
// =========================================================================

undefined4 * tfIOLOenmdZMmILmF_pGzqaiqSNuNRpEnr(undefined4 *param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  *param_1 = 0;
  thunk_UmZzS_cbjoLnmUermiSHDYQumaTywaAPz_FsluCiWPC(param_1 + 1);
  thunk_UmZzS_cbjoLnmUermiSHDYQumaTywaAPz_FsluCiWPC(param_1 + 4);
  *(undefined2 *)(param_1 + 7) = 0;
  thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH(&uStack_20,0,0x461c4000,0);
  param_1[3] = uStack_18;
  *(undefined8 *)(param_1 + 1) = uStack_20;
  thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH(&uStack_20,0,0,0x447a0000);
  param_1[6] = uStack_18;
  *(undefined8 *)(param_1 + 4) = uStack_20;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}


// =========================================================================
// Function: WNqMksBTicXMIQdSOaeaylXavyWV_yfCqxYYtILjcyrmvC
// Entry: 0x71ae7ebc | Size: 112 bytes
// =========================================================================

void WNqMksBTicXMIQdSOaeaylXavyWV_yfCqxYYtILjcyrmvC(int param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH(&uStack_20,0,0x461c4000,0);
  *(undefined4 *)(param_1 + 0xc) = uStack_18;
  *(undefined8 *)(param_1 + 4) = uStack_20;
  thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH(&uStack_20,0,0,0x447a0000);
  *(undefined4 *)(param_1 + 0x18) = uStack_18;
  *(undefined8 *)(param_1 + 0x10) = uStack_20;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}


// =========================================================================
// Function: OdzsOWLKzUisdGvBqRcWHYTHZDZKuzJvjQJuvBOkFhbvQRUpRhicWIxJuTVUSI_thDXprNPNFXdZa_uNLvE
// Entry: 0x71ae7f2c | Size: 1828 bytes
// =========================================================================

void OdzsOWLKzUisdGvBqRcWHYTHZDZKuzJvjQJuvBOkFhbvQRUpRhicWIxJuTVUSI_thDXprNPNFXdZa_uNLvE
               (int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_28;
  int iStack_20;
  
  iVar3 = *param_1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *param_1 = iVar3 + 1;
  if (iVar3 < 0x9c1) {
    iVar3 = *(int *)(param_2 + 0x47c);
    fVar6 = *(float *)(param_2 + 0x454);
    pfVar4 = *(float **)(param_2 + 0x478);
    param_1[1] = (int)fVar6;
    uVar1 = iVar3 - (int)pfVar4 >> 2;
    fVar5 = (float)param_1[2];
    if (fVar6 < (float)param_1[2]) {
      fVar5 = fVar6;
    }
    param_1[2] = (int)fVar5;
    fVar5 = (float)param_1[3];
    if ((float)param_1[3] < fVar6) {
      fVar5 = fVar6;
    }
    param_1[3] = (int)fVar5;
    fVar5 = *pfVar4;
    if (1 < uVar1) {
      iVar3 = uVar1 - 1;
      do {
        pfVar4 = pfVar4 + 1;
        if (*pfVar4 < fVar5) {
          fVar5 = *pfVar4;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[4] = (int)fVar5;
    fVar6 = (float)param_1[5];
    if (fVar5 < (float)param_1[5]) {
      fVar6 = fVar5;
    }
    param_1[5] = (int)fVar6;
    fVar6 = (float)param_1[6];
    if ((float)param_1[6] < fVar5) {
      fVar6 = fVar5;
    }
    param_1[6] = (int)fVar6;
    *(bool *)(param_1 + 7) = (char)param_1[7] != '\0' || *(char *)(param_2 + 0x634) != '\0';
    return;
  }
  if (iVar3 != 0x9c3) {
    if (iVar3 != 0x9c2) {
      if (iVar3 != 0x9c1) {
        return;
      }
      iVar3 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                        (s_WebRTC_Audio_EchoCanceller_Usabl_7006e271,0x2f,2);
      if (iVar3 != 0) {
        thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj
                  (iVar3,*(byte *)(param_2 + 0x231) & *(char *)(param_2 + 0xae) != '\0');
      }
      DataMemoryBarrier(0xb);
      iVar3 = DAT_712048ac;
      if (DAT_712048ac == 0) {
        iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                          (s_WebRTC_Audio_EchoCanceller_Filte_70066960,0x26,0,0x1e,0x1f);
        if (DAT_712048ac == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(0x712048ac);
            DAT_712048ac = iVar3;
          } while (!bVar2);
        }
        else {
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        if (iVar3 == 0) goto LAB_71ae80f0;
      }
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj
                (iVar3,*(undefined4 *)(param_2 + 0x214));
LAB_71ae80f0:
      iVar3 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                        (s_WebRTC_Audio_EchoCanceller_Captu_7006fbf4,0x2c,2);
      if (iVar3 == 0) {
        return;
      }
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(char)param_1[7]);
      return;
    }
    DataMemoryBarrier(0xb);
    iVar3 = DAT_712048b0;
    if (DAT_712048b0 == 0) {
      iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                        (s_WebRTC_Audio_EchoCanceller_Erl_V_700649cb,0x24,0,0x3b,0x1e);
      if (DAT_712048b0 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(0x712048b0);
          DAT_712048b0 = iVar3;
        } while (!bVar2);
      }
      else {
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) goto LAB_71ae8194;
    }
    else {
LAB_71ae8194:
      fVar5 = (float)imp_log10f((float)param_1[1] + 1e-10);
      fVar6 = fVar5 * 10.0 + 30.0;
      fVar5 = -fVar6;
      if (fVar6 <= -59.0) {
        fVar5 = 59.0;
      }
      if (0.0 <= fVar6) {
        fVar5 = 0.0;
      }
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(int)fVar5);
    }
    DataMemoryBarrier(0xb);
    iVar3 = DAT_712048b4;
    if (DAT_712048b4 == 0) {
      iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                        (s_WebRTC_Audio_EchoCanceller_Erl_M_7006732a,0x22,0,0x3b,0x1e);
      if (DAT_712048b4 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(0x712048b4);
          DAT_712048b4 = iVar3;
        } while (!bVar2);
      }
      else {
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      if (iVar3 == 0) goto LAB_71ae82bc;
    }
    fVar5 = (float)imp_log10f((float)param_1[3] + 1e-10);
    fVar6 = fVar5 * 10.0 + 30.0;
    fVar5 = -fVar6;
    if (fVar6 <= -59.0) {
      fVar5 = 59.0;
    }
    if (0.0 <= fVar6) {
      fVar5 = 0.0;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(int)fVar5);
LAB_71ae82bc:
    DataMemoryBarrier(0xb);
    iVar3 = DAT_712048b8;
    if (DAT_712048b8 == 0) {
      iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                        (s_WebRTC_Audio_EchoCanceller_Erl_M_7006a755,0x22,0,0x3b,0x1e);
      if (DAT_712048b8 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(0x712048b8);
          DAT_712048b8 = iVar3;
        } while (!bVar2);
      }
      else {
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      if (iVar3 == 0) {
        return;
      }
    }
    fVar5 = (float)imp_log10f((float)param_1[2] + 1e-10);
    fVar6 = fVar5 * 10.0 + 30.0;
    fVar5 = -fVar6;
    if (fVar6 <= -59.0) {
      fVar5 = 59.0;
    }
    if (0.0 <= fVar6) {
      fVar5 = 0.0;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(int)fVar5);
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = DAT_712048bc;
  if (DAT_712048bc == 0) {
    iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_Erle__7006eae1,0x25,0,0x13,0x14);
    if (DAT_712048bc == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x712048bc);
        DAT_712048bc = iVar3;
      } while (!bVar2);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) goto LAB_71ae8418;
  }
  else {
LAB_71ae8418:
    fVar5 = (float)imp_log10f((float)param_1[4] + 1e-10);
    fVar6 = fVar5 * 10.0 + 0.0;
    fVar5 = fVar6;
    if (19.0 <= fVar6) {
      fVar5 = 19.0;
    }
    if (fVar6 <= 0.0) {
      fVar5 = 0.0;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(int)fVar5);
  }
  DataMemoryBarrier(0xb);
  iVar3 = DAT_712048c0;
  if (DAT_712048c0 == 0) {
    iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_Erle__70071ded,0x23,0,0x13,0x14);
    if (DAT_712048c0 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x712048c0);
        DAT_712048c0 = iVar3;
      } while (!bVar2);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) goto LAB_71ae84dc;
  }
  else {
LAB_71ae84dc:
    fVar5 = (float)imp_log10f((float)param_1[6] + 1e-10);
    fVar6 = fVar5 * 10.0 + 0.0;
    fVar5 = fVar6;
    if (19.0 <= fVar6) {
      fVar5 = 19.0;
    }
    if (fVar6 <= 0.0) {
      fVar5 = 0.0;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(int)fVar5);
  }
  DataMemoryBarrier(0xb);
  iVar3 = DAT_712048c4;
  if (DAT_712048c4 == 0) {
    iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_Erle__70068369,0x23,0,0x13,0x14);
    if (DAT_712048c4 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x712048c4);
        DAT_712048c4 = iVar3;
      } while (!bVar2);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar3 == 0) goto LAB_71ae85f4;
  }
  fVar5 = (float)imp_log10f((float)param_1[5] + 1e-10);
  fVar6 = fVar5 * 10.0 + 0.0;
  fVar5 = fVar6;
  if (19.0 <= fVar6) {
    fVar5 = 19.0;
  }
  if (fVar6 <= 0.0) {
    fVar5 = 0.0;
  }
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,(int)fVar5);
LAB_71ae85f4:
  *(undefined1 *)((int)param_1 + 0x1d) = 1;
  *param_1 = 0;
  thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH(&uStack_28,0,0x461c4000,0);
  param_1[3] = iStack_20;
  *(undefined8 *)(param_1 + 1) = uStack_28;
  thunk_XXKwckpYJNcXhPZqeFyEiSiWwQcnlrZyQpdzaXJHLNjVH(&uStack_28,0,0,0x447a0000);
  param_1[6] = iStack_20;
  *(undefined8 *)(param_1 + 4) = uStack_28;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}


// =========================================================================
// Function: hDNV_NaPhLymwsuZsGrCSgnJrPblIzseCcYkfxUIOSCSMRyKSvhMX
// Entry: 0x71ae86a0 | Size: 120 bytes
// =========================================================================

int hDNV_NaPhLymwsuZsGrCSgnJrPblIzseCcYkfxUIOSCSMRyKSvhMX
              (int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  
  fVar1 = (float)imp_log10f(param_6 * param_5 + 1e-10);
  param_4 = param_4 + fVar1 * 10.0;
  if (param_1 != 0) {
    param_4 = -param_4;
  }
  fVar1 = param_4;
  if (param_3 <= param_4) {
    fVar1 = param_3;
  }
  if (param_4 <= param_2) {
    fVar1 = param_2;
  }
  return (int)fVar1;
}


// =========================================================================
// Function: ZBlFZBDUvSqRyRiXpiwBOuQpvINRSCpZaVYTiqKQzD_ZLHnpsnHOSpJYuIcFQzcOsTRyxnCeUpmBUHVlSmTNquYNfkHhY_onTDwGfbpb
// Entry: 0x71ae871c | Size: 636 bytes
// =========================================================================

void ZBlFZBDUvSqRyRiXpiwBOuQpvINRSCpZaVYTiqKQzD_ZLHnpsnHOSpJYuIcFQzcOsTRyxnCeUpmBUHVlSmTNquYNfkHhY_onTDwGfbpb
               (float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (*param_1 + 0.0 + param_1[1] + param_1[2] + param_1[3] + param_1[4] + param_1[5] +
           param_1[6] + param_1[7] + param_1[8] + param_1[9] + param_1[10] + param_1[0xb] +
           param_1[0xc] + param_1[0xd] + param_1[0xe] + param_1[0xf] + param_1[0x10] + param_1[0x11]
           + param_1[0x12] + param_1[0x13] + param_1[0x14] + param_1[0x15] + param_1[0x16] +
           param_1[0x17] + param_1[0x18] + param_1[0x19] + param_1[0x1a] + param_1[0x1b] +
           param_1[0x1c] + param_1[0x1d] + param_1[0x1e] + param_1[0x1f]) * 0.03125;
  *param_2 = fVar2 + *param_2;
  fVar1 = param_2[1];
  if (fVar2 < param_2[1]) {
    fVar1 = fVar2;
  }
  param_2[1] = fVar1;
  fVar1 = param_2[2];
  if (param_2[2] < fVar2) {
    fVar1 = fVar2;
  }
  param_2[2] = fVar1;
  fVar2 = (param_1[0x20] + 0.0 + param_1[0x21] + param_1[0x22] + param_1[0x23] + param_1[0x24] +
           param_1[0x25] + param_1[0x26] + param_1[0x27] + param_1[0x28] + param_1[0x29] +
           param_1[0x2a] + param_1[0x2b] + param_1[0x2c] + param_1[0x2d] + param_1[0x2e] +
           param_1[0x2f] + param_1[0x30] + param_1[0x31] + param_1[0x32] + param_1[0x33] +
           param_1[0x34] + param_1[0x35] + param_1[0x36] + param_1[0x37] + param_1[0x38] +
           param_1[0x39] + param_1[0x3a] + param_1[0x3b] + param_1[0x3c] + param_1[0x3d] +
           param_1[0x3e] + param_1[0x3f]) * 0.03125;
  param_2[3] = fVar2 + param_2[3];
  fVar1 = param_2[4];
  if (fVar2 < param_2[4]) {
    fVar1 = fVar2;
  }
  param_2[4] = fVar1;
  fVar1 = param_2[5];
  if (param_2[5] < fVar2) {
    fVar1 = fVar2;
  }
  param_2[5] = fVar1;
  return;
}


// =========================================================================
// Function: KBgMzGtnUlKQQnGttdHLgonjPDuhrjssZLsrIkUhmLLskDiuvKTvkPKlps
// Entry: 0x71ae8ea4 | Size: 16 bytes
// =========================================================================

void KBgMzGtnUlKQQnGttdHLgonjPDuhrjssZLsrIkUhmLLskDiuvKTvkPKlps
               (undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: khtniTLLpCBdThwNHSlgDgWaRBagFMuUEorAnyIwuIOgXMOUmU
// Entry: 0x71ae8ecc | Size: 280 bytes
// =========================================================================

void khtniTLLpCBdThwNHSlgDgWaRBagFMuUEorAnyIwuIOgXMOUmU(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = *param_1;
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = param_1[2];
  }
  *param_1 = iVar2 + 1;
  if (param_2 != 0) {
    param_1[2] = iVar3 + 1;
  }
  if (iVar2 + 1 == 0x9c4) {
    *(undefined1 *)(param_1 + 1) = 1;
    iVar3 = param_1[2];
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      bVar6 = SBORROW4(iVar3,0x4e2);
      iVar2 = iVar3 + -0x4e2;
      bVar5 = iVar3 == 0x4e2;
      if (iVar3 < 0x4e3) {
        uVar4 = 3;
        bVar6 = SBORROW4(iVar3,100);
        iVar2 = iVar3 + -100;
        bVar5 = iVar3 == 100;
      }
      if ((bVar5 || iVar2 < 0 != bVar6) && (uVar4 = 1, 10 < iVar3)) {
        uVar4 = 2;
      }
    }
    iVar3 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                      (s_WebRTC_Audio_EchoCanceller_Rende_7006c35f,0x2a,5);
    if (iVar3 != 0) {
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,uVar4);
    }
    iVar3 = param_1[3];
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      iVar2 = param_1[4] >> 1;
      bVar6 = SBORROW4(iVar3,iVar2);
      iVar1 = iVar3 - iVar2;
      bVar5 = iVar3 == iVar2;
      if (iVar3 <= iVar2) {
        uVar4 = 3;
        bVar6 = SBORROW4(iVar3,100);
        iVar1 = iVar3 + -100;
        bVar5 = iVar3 == 100;
      }
      if ((bVar5 || iVar1 < 0 != bVar6) && (uVar4 = 1, 10 < iVar3)) {
        uVar4 = 2;
      }
    }
    iVar3 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                      (s_WebRTC_Audio_EchoCanceller_Rende_700661f4,0x29,5);
    if (iVar3 != 0) {
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,uVar4);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: fPHfeAKTvZTKKCloHupkUbxnNuFsecCJJJRByitLujpnPECJQ
// Entry: 0x71ae8fec | Size: 20 bytes
// =========================================================================

void fPHfeAKTvZTKKCloHupkUbxnNuFsecCJJJRByitLujpnPECJQ(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


// =========================================================================
// Function: EtUybhxFhLSEtkJJKuXzCsbmqLXxxyNHQZnIeQxpWugRLOVgI
// Entry: 0x71ae9000 | Size: 32 bytes
// =========================================================================

void EtUybhxFhLSEtkJJKuXzCsbmqLXxxyNHQZnIeQxpWugRLOVgI(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (param_2 != 0) {
    *(int *)(param_1 + 0xc) = iVar1 + 1;
  }
  return;
}


// =========================================================================
// Function: sjQgdErxWqgUPiVCChHtskuRgfzEWMOuQKiuVZPluxBOTZRsFstxqUisovkrqg
// Entry: 0x71ae90e0 | Size: 16 bytes
// =========================================================================

void sjQgdErxWqgUPiVCChHtskuRgfzEWMOuQKiuVZPluxBOTZRsFstxqUisovkrqg
               (undefined4 param_1,undefined4 param_2)

{
  DAT_712048c8 = param_1;
  DAT_712048cc = param_2;
  return;
}


// =========================================================================
// Function: JBtPDuF_ixLfWCtFNlpftHYauRkybbZVmVsdsYNICfOYiQT
// Entry: 0x71ae90f4 | Size: 28 bytes
// =========================================================================

void JBtPDuF_ixLfWCtFNlpftHYauRkybbZVmVsdsYNICfOYiQT(undefined4 param_1)

{
  if (DAT_712048c8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x71ae910c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_712048c8)(param_1);
    return;
  }
  return;
}


// =========================================================================
// Function: R_cNneSURXdsvoNnIJXxlMjMNltbxDTIzVTKbDxUKYpfCOQZFIhbxsWLybX
// Entry: 0x71ae9118 | Size: 100 bytes
// =========================================================================

void R_cNneSURXdsvoNnIJXxlMjMNltbxDTIzVTKbDxUKYpfCOQZFIhbxsWLybX(void)

{
  if (DAT_712048cc == (code *)0x0) {
    return;
  }
  (*DAT_712048cc)();
  return;
}


// =========================================================================
// Function: ryGFlIrxhZiyXzXLvgYFaWsQekBDrJNozWBHul
// Entry: 0x71ae9180 | Size: 296 bytes
// =========================================================================

void ryGFlIrxhZiyXzXLvgYFaWsQekBDrJNozWBHul(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_24 [4];
  
  puVar5 = (undefined4 *)thunk_MwhHq(0x38);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar5[0xd] = 0;
  *puVar5 = 0;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[4] = 0;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  puVar5[8] = 0;
  puVar5[9] = uVar2;
  puVar5[10] = uVar3;
  puVar5[0xb] = uVar4;
  puVar5[0xc] = 0;
  imp_pthread_mutexattr_init(auStack_24);
  imp_pthread_mutex_init(puVar5,auStack_24);
  imp_pthread_mutexattr_destroy(auStack_24);
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined1 *)(puVar5 + 6) = 0;
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = &DAT_70b137c4;
  thunk_HJEdOkbUSv_ZKGrew(puVar5 + 8);
  *(undefined1 *)(puVar5 + 0xd) = 0;
  puVar5[0xc] = 0;
  if (DAT_712048d0 == (undefined4 *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x712048d0);
    } while (!bVar1);
    DAT_712048d0 = puVar5;
    DataMemoryBarrier(0xb);
    DAT_712048c8 = &DAT_71ae92f4;
    if (param_1 == 0) {
      DAT_712048c8 = &LAB_71ae92f8;
    }
    DAT_712048cc = FUN_71ae9348;
    return;
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_rtc_ba_7006da50,0x192,
             s_g_event_logger_compare_exchange__7006fc21,&DAT_7009602d);
}


// =========================================================================
// Function: FUN_71ae9348
// Entry: 0x71ae9348 | Size: 956 bytes
// =========================================================================

void FUN_71ae9348(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  
  iVar3 = DAT_712048d0;
  DataMemoryBarrier(0xb);
  if (DAT_712048d4 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  uVar20 = thunk_MrsmVgAfEa_RpNL_CXlGk();
  uVar4 = thunk_UiBcmaphRwDwSfgygpcSbkYIG_();
  if (in_stack_00000008 == 0) {
    iVar6 = 0;
    iVar5 = 0;
LAB_71ae9478:
    imp_pthread_mutex_lock(iVar3);
    if (iVar6 == iVar5) {
      iVar6 = 0;
      iVar7 = 0;
      puVar15 = *(undefined8 **)(iVar3 + 8);
      puVar9 = *(undefined8 **)(iVar3 + 0xc);
      if (puVar9 <= puVar15) {
LAB_71ae9524:
        puVar14 = *(undefined8 **)(iVar3 + 4);
        iVar1 = (int)puVar15 - (int)puVar14 >> 3;
        uVar18 = iVar1 * -0x33333333 + 1;
        if (uVar18 < 0x6666667) {
          iVar8 = (int)puVar9 - (int)puVar14 >> 3;
          if (uVar18 < (uint)(iVar8 * -0x66666666)) {
            uVar18 = iVar8 * -0x66666666;
          }
          if (0x3333332 < (uint)(iVar8 * -0x33333333)) {
            uVar18 = 0x6666666;
          }
          if (uVar18 == 0) {
            iVar8 = 0;
          }
          else {
            if (0x6666666 < uVar18) goto LAB_71ae9700;
            iVar8 = thunk_MwhHq(uVar18 * 0x28);
          }
          puVar16 = (undefined4 *)(iVar8 + iVar1 * 8);
          *puVar16 = param_3;
          puVar19 = (undefined8 *)(puVar16 + 10);
          puVar16[8] = 1;
          puVar16[9] = uVar4;
          *(undefined1 *)(puVar16 + 2) = param_1;
          puVar16[1] = param_2;
          puVar16[3] = iVar7;
          puVar17 = (undefined8 *)((int)puVar16 - ((int)puVar15 - (int)puVar14));
          puVar16[4] = iVar6;
          puVar16[5] = iVar6;
          iVar8 = iVar8 + uVar18 * 0x28;
          *(undefined8 *)(puVar16 + 6) = uVar20;
          puVar9 = puVar17;
          puVar10 = puVar14;
          if (puVar14 == puVar15) {
            *(undefined8 **)(iVar3 + 4) = puVar17;
            *(undefined8 **)(iVar3 + 8) = puVar19;
            *(int *)(iVar3 + 0xc) = iVar8;
          }
          else {
            do {
              uVar20 = *puVar10;
              *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar10 + 1);
              *puVar9 = uVar20;
              uVar4 = *(undefined4 *)(puVar10 + 2);
              *(undefined4 *)((int)puVar9 + 0xc) = *(undefined4 *)((int)puVar10 + 0xc);
              *(undefined4 *)(puVar9 + 2) = uVar4;
              *(undefined4 *)((int)puVar9 + 0x14) = 0;
              *(undefined4 *)((int)puVar9 + 0x14) = *(undefined4 *)((int)puVar10 + 0x14);
              uVar20 = puVar10[4];
              puVar12 = puVar10 + 5;
              *(undefined4 *)((int)puVar10 + 0xc) = 0;
              *(undefined4 *)(puVar10 + 2) = 0;
              *(undefined4 *)((int)puVar10 + 0x14) = 0;
              puVar9[3] = puVar10[3];
              puVar9[4] = uVar20;
              puVar9 = puVar9 + 5;
              puVar10 = puVar12;
            } while (puVar12 != puVar15);
            do {
              if (*(int *)((int)puVar14 + 0xc) != 0) {
                *(int *)(puVar14 + 2) = *(int *)((int)puVar14 + 0xc);
                thunk_qNQrlu();
              }
              puVar14 = puVar14 + 5;
            } while (puVar14 != puVar15);
            puVar15 = *(undefined8 **)(iVar3 + 4);
            *(undefined8 **)(iVar3 + 4) = puVar17;
            *(undefined8 **)(iVar3 + 8) = puVar19;
            *(int *)(iVar3 + 0xc) = iVar8;
          }
          if (puVar15 != (undefined8 *)0x0) {
            thunk_qNQrlu(puVar15);
          }
          goto LAB_71ae96ac;
        }
        goto LAB_71ae96fc;
      }
    }
    else {
      iVar6 = iVar6 - iVar5;
      if (iVar6 < 0) goto LAB_71ae96f8;
      iVar7 = thunk_MwhHq(iVar6);
      imp___aeabi_memcpy8(iVar7,iVar5,iVar6);
      iVar6 = iVar7 + iVar6;
      puVar15 = *(undefined8 **)(iVar3 + 8);
      puVar9 = *(undefined8 **)(iVar3 + 0xc);
      if (puVar9 <= puVar15) goto LAB_71ae9524;
    }
    *(undefined1 *)(puVar15 + 1) = param_1;
    puVar19 = puVar15 + 5;
    *(undefined4 *)puVar15 = param_3;
    *(undefined4 *)((int)puVar15 + 4) = param_2;
    *(int *)(puVar15 + 3) = (int)uVar20;
    *(undefined4 *)(puVar15 + 4) = 1;
    *(int *)((int)puVar15 + 0xc) = iVar7;
    *(int *)(puVar15 + 2) = iVar6;
    *(int *)((int)puVar15 + 0x14) = iVar6;
    *(int *)((int)puVar15 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
    *(undefined4 *)((int)puVar15 + 0x24) = uVar4;
LAB_71ae96ac:
    *(undefined8 **)(iVar3 + 8) = puVar19;
    imp_pthread_mutex_unlock(iVar3);
    if (iVar5 == 0) {
      return;
    }
    thunk_qNQrlu(iVar5);
    return;
  }
  if (in_stack_00000008 < 0x10000000) {
    iVar5 = thunk_MwhHq(in_stack_00000008 << 4);
    imp___aeabi_memclr8(iVar5,in_stack_00000008 << 4);
    uVar18 = 0;
    iVar6 = iVar5 + in_stack_00000008 * 0x10;
    do {
      uVar13 = *in_stack_00000014;
      cVar2 = *(char *)(in_stack_00000010 + uVar18);
      uVar11 = in_stack_00000014[1];
      puVar16 = (undefined4 *)(iVar5 + uVar18 * 0x10);
      *puVar16 = *(undefined4 *)(in_stack_0000000c + uVar18 * 4);
      puVar16[3] = uVar11;
      *(char *)(puVar16 + 1) = cVar2;
      puVar16[2] = uVar13;
      if (cVar2 == '\a') {
        iVar7 = imp_strlen(uVar13);
        uVar11 = thunk__IBDl(iVar7 + 1);
        imp___aeabi_memcpy(uVar11,uVar13,iVar7 + 1);
        puVar16[2] = uVar11;
      }
      uVar18 = uVar18 + 1;
      in_stack_00000014 = in_stack_00000014 + 2;
    } while (in_stack_00000008 != uVar18);
    goto LAB_71ae9478;
  }
  FUN_71ae9e28();
LAB_71ae96f8:
  FUN_71ae9e28();
LAB_71ae96fc:
  FUN_71ae9e40();
LAB_71ae9700:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: VdBCkCdisgMNuLVzkZJVaGgDaFIhQo_vINsEXZfByBkDlYicUDbTj
// Entry: 0x71ae9754 | Size: 36 bytes
// =========================================================================

void VdBCkCdisgMNuLVzkZJVaGgDaFIhQo_vINsEXZfByBkDlYicUDbTj(undefined4 param_1)

{
  DataMemoryBarrier(0xb);
  if (DAT_712048d0 == 0) {
    return;
  }
  FUN_71ae977c(DAT_712048d0,param_1,0);
  return;
}


// =========================================================================
// Function: FUN_71ae977c
// Entry: 0x71ae977c | Size: 496 bytes
// =========================================================================

void FUN_71ae977c(int param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  code *extraout_r3;
  code *extraout_r3_00;
  code *pcVar3;
  code *extraout_r3_01;
  code *extraout_r3_02;
  int iVar4;
  int iVar5;
  undefined *puStack_40;
  int iStack_3c;
  undefined **ppuStack_30;
  undefined1 auStack_28 [16];
  
  *(undefined1 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  imp_pthread_mutex_lock();
  iVar4 = *(int *)(param_1 + 4);
  for (iVar5 = *(int *)(param_1 + 8); iVar5 != iVar4; iVar5 = iVar5 + -0x28) {
    if (*(int *)(iVar5 + -0x1c) != 0) {
      *(int *)(iVar5 + -0x18) = *(int *)(iVar5 + -0x1c);
      thunk_qNQrlu();
    }
  }
  *(int *)(param_1 + 8) = iVar4;
  imp_pthread_mutex_unlock(param_1);
  if (DAT_712048d4 != 0) {
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006da50,0xed,
               s_g_event_logging_active_compare_e_70065817,&DAT_7009602d);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x712048d4);
  } while (!bVar1);
  DAT_712048d4 = 1;
  ppuStack_30 = &puStack_40;
  DataMemoryBarrier(0xb);
  puStack_40 = &DAT_70b13784;
  iStack_3c = param_1;
  thunk_bQzgqvVfigxqlibmfuVVztizgYmonPnPqrjgJITlFTSp_neBnBpitkZUcpTqweadoiskilTeWsXdivxPWqr_QOBrKNTBqnUogQMSZefnJeAFeyhiyvoYUpDfXhStmzizjDVIFvx
            (auStack_28,ppuStack_30,s_EventTracingThread_700642e2,0x12,2);
  thunk_sCOIScqcmIIBNpkOKswPHAEomOdaGJ(param_1 + 0x10,auStack_28);
  thunk_axQhMArYGadKcxdFXfBdPVUMDFL(auStack_28);
  ppuVar2 = &puStack_40;
  if (ppuStack_30 == ppuVar2) {
    iVar4 = 0x10;
  }
  else {
    iVar4 = 0x14;
    ppuVar2 = ppuStack_30;
    pcVar3 = extraout_r3;
    if (ppuStack_30 == (undefined **)0x0) goto LAB_71ae98b8;
  }
  (**(code **)(*ppuVar2 + iVar4))();
  pcVar3 = extraout_r3_00;
LAB_71ae98b8:
  DataMemoryBarrier(0xb);
  if (((DAT_712048dc & 1) == 0) &&
     (iVar4 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_712048dc), pcVar3 = extraout_r3_01, iVar4 != 0)) {
    if (DAT_712048c8 == (code *)0x0) {
      DAT_712048d8 = &DAT_70096c4c;
    }
    else {
      DAT_712048d8 = (char *)(*DAT_712048c8)(s_webrtc_70069ee8);
    }
    thunk_SixizuLbAnqfgRApsCY(&DAT_712048dc);
    pcVar3 = extraout_r3_02;
  }
  if (*DAT_712048d8 != '\0') {
    pcVar3 = DAT_712048cc;
  }
  if (*DAT_712048d8 != '\0' && pcVar3 != (code *)0x0) {
    (*pcVar3)(0x49,DAT_712048d8,s_EventLogger__Start_70063a2f,pcVar3,0,0,0,0,0,0,0);
    return;
  }
  return;
}


// =========================================================================
// Function: IeqIdrWTdVpsfSMfbucHuXLa_JyseELHRCWcMtzhvIokuqxkYK_SbgzqGvLYdftMBt_aDUvScakQQkmdKerfqmMxrEtO
// Entry: 0x71ae99e8 | Size: 344 bytes
// =========================================================================

undefined4
IeqIdrWTdVpsfSMfbucHuXLa_JyseELHRCWcMtzhvIokuqxkYK_SbgzqGvLYdftMBt_aDUvScakQQkmdKerfqmMxrEtO
          (undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  iVar4 = DAT_712048d0;
  DataMemoryBarrier(0xb);
  if (DAT_712048d0 == 0) {
    return 0;
  }
  uStack_28 = param_1;
  uStack_24 = param_2;
  if (0xfffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_34);
  }
  if (param_2 < 0xb) {
    uVar5 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(param_2 << 1));
    if (param_2 == 0) goto LAB_71ae9a88;
  }
  else {
    uVar5 = thunk_MwhHq((param_2 | 7) + 1);
    uStack_34 = (param_2 | 7) + 2;
    uStack_30 = param_2;
    uStack_2c = uVar5;
  }
  imp___aeabi_memmove(uVar5,param_1,param_2);
LAB_71ae9a88:
  uVar1 = uStack_2c;
  *(undefined1 *)(uVar5 + param_2) = 0;
  uVar5 = uStack_34 & 1;
  uVar2 = uStack_2c;
  if ((uStack_34 & 1) == 0) {
    uVar2 = (uint)&uStack_34 | 1;
  }
  iVar3 = imp_fopen(uVar2,&DAT_700706e5);
  if (uVar5 != 0) {
    thunk_qNQrlu(uVar1);
  }
  if (iVar3 == 0) {
    iVar4 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
    if (iVar4 != 0) {
      return 0;
    }
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_700953b2,s_____webrtc_apm_src_webrtc_rtc_ba_7006da50,0xd33,
               s_Failed_to_open_trace_file___7006a18b,&uStack_28,s___for_writing__7006bce8);
    return 0;
  }
  FUN_71ae977c(iVar4,iVar3,1);
  return 1;
}


// =========================================================================
// Function: wJUAiYQijbNWaxyxSgcHIgyymQiKxDcjYoXNJa
// Entry: 0x71ae9b58 | Size: 312 bytes
// =========================================================================

void wJUAiYQijbNWaxyxSgcHIgyymQiKxDcjYoXNJa(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *in_r3;
  code *extraout_r3;
  code *extraout_r3_00;
  
  iVar2 = DAT_712048d0;
  DataMemoryBarrier(0xb);
  if (DAT_712048d0 != 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_712048e4 & 1) == 0) &&
       (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_712048e4), in_r3 = extraout_r3, iVar3 != 0)) {
      if (DAT_712048c8 == (code *)0x0) {
        DAT_712048e0 = &DAT_70096c4c;
      }
      else {
        DAT_712048e0 = (char *)(*DAT_712048c8)(s_webrtc_70069ee8);
      }
      thunk_SixizuLbAnqfgRApsCY(&DAT_712048e4);
      in_r3 = extraout_r3_00;
    }
    if (*DAT_712048e0 != '\0') {
      in_r3 = DAT_712048cc;
    }
    if (*DAT_712048e0 != '\0' && in_r3 != (code *)0x0) {
      (*in_r3)(0x49,DAT_712048e0,s_EventLogger__Stop_700649f0,in_r3,0,0,0,0,0,0,0);
    }
    if (DAT_712048d4 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      thunk_rIGBxdWQUcCSpi_PqpT(iVar2 + 0x20);
      thunk_yGtStKkKuEhIKOSDIrLmbrFLUBmuGRSUAR(iVar2 + 0x10);
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x712048d4);
    } while (!bVar1);
    DAT_712048d4 = 0;
    DataMemoryBarrier(0xb);
  }
  return;
}


// =========================================================================
// Function: fwLYhRnIwnHApyUzUnCpEwdK_oEyfQsL_qYE_WSQE
// Entry: 0x71ae9cb0 | Size: 256 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71ae9cfc) */

void fwLYhRnIwnHApyUzUnCpEwdK_oEyfQsL_qYE_WSQE(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  thunk_wJUAiYQijbNWaxyxSgcHIgyymQiKxDcjYoXNJa();
  iVar2 = DAT_712048d0;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x712048d0);
  } while (!bVar1);
  DAT_712048d0 = 0;
  DataMemoryBarrier(0xb);
  if (iVar2 != 0) {
    thunk_xyJ_toQYkFGGrRYsd(iVar2 + 0x20);
    thunk_axQhMArYGadKcxdFXfBdPVUMDFL(iVar2 + 0x10);
    iVar4 = *(int *)(iVar2 + 4);
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar2 + 8);
      iVar3 = iVar4;
      if (iVar5 != iVar4) {
        do {
          if (*(int *)(iVar5 + -0x1c) != 0) {
            *(int *)(iVar5 + -0x18) = *(int *)(iVar5 + -0x1c);
            thunk_qNQrlu();
          }
          iVar5 = iVar5 + -0x28;
        } while (iVar5 != iVar4);
        iVar3 = *(int *)(iVar2 + 4);
      }
      *(int *)(iVar2 + 8) = iVar4;
      thunk_qNQrlu(iVar3);
    }
    imp_pthread_mutex_destroy(iVar2);
    thunk_qNQrlu(iVar2);
  }
  DAT_712048c8 = 0;
  DAT_712048cc = 0;
  return;
}


// =========================================================================
// Function: FUN_71ae9dc4
// Entry: 0x71ae9dc4 | Size: 100 bytes
// =========================================================================

int * FUN_71ae9dc4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar3 = param_1[1];
    iVar1 = iVar2;
    if (iVar3 != iVar2) {
      do {
        if (*(int *)(iVar3 + -0x1c) != 0) {
          *(int *)(iVar3 + -0x18) = *(int *)(iVar3 + -0x1c);
          thunk_qNQrlu();
        }
        iVar3 = iVar3 + -0x28;
      } while (iVar3 != iVar2);
      iVar1 = *param_1;
    }
    param_1[1] = iVar2;
    thunk_qNQrlu(iVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ae9e28
// Entry: 0x71ae9e28 | Size: 20 bytes
// =========================================================================

void FUN_71ae9e28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ae9e40
// Entry: 0x71ae9e40 | Size: 20 bytes
// =========================================================================

void FUN_71ae9e40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ae9ea8
// Entry: 0x71ae9ea8 | Size: 4 bytes
// =========================================================================

void FUN_71ae9ea8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71ae9eac | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71ae9eb0
// Entry: 0x71ae9eb0 | Size: 1288 bytes
// =========================================================================

void FUN_71ae9eb0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  uint uStack_40;
  uint uStack_3c;
  undefined4 *puStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  
  iVar11 = *(int *)(param_1 + 4);
  imp_fwrite(s____traceEvents_____70062f96,0x13,1,*(undefined4 *)(iVar11 + 0x30));
  puVar3 = (undefined4 *)((uint)&uStack_40 | 1);
  bVar1 = false;
  do {
    iVar4 = thunk_CtbKKQeLrFfcVxztWHOwDExGVAZuOSBdFVKuLjgSy
                      (iVar11 + 0x20,100000,0,0xffffffff,0x7fffffff);
    imp_pthread_mutex_lock(iVar11);
    puVar16 = *(undefined4 **)(iVar11 + 4);
    puVar13 = *(undefined4 **)(iVar11 + 8);
    *(undefined4 *)(iVar11 + 4) = 0;
    *(undefined4 *)(iVar11 + 8) = 0;
    *(undefined4 *)(iVar11 + 0xc) = 0;
    imp_pthread_mutex_unlock(iVar11);
    uStack_2c = 0;
    uStack_30 = 0;
    puStack_28 = (undefined1 *)0x0;
    thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
              (&uStack_30,0x100);
    for (puVar14 = puVar16; puVar14 != puVar13; puVar14 = puVar14 + 10) {
      if ((uStack_30 & 1) == 0) {
        uStack_30 = uStack_30 & 0xffff0000;
        if (puVar14[3] != puVar14[4]) {
LAB_71aea0b8:
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_30,s____args_____7006734d);
          puVar5 = (undefined4 *)puVar14[4];
          puVar15 = (undefined4 *)puVar14[3];
          if (puVar15 != puVar5) {
            bVar18 = true;
            do {
              if (!bVar18) {
                thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                          (&uStack_30,&DAT_70066987);
              }
              thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                        (&uStack_30,&DAT_700642f5);
              thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                        (&uStack_30,*puVar15);
              thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                        (&uStack_30,&DAT_70072679);
              piVar6 = puVar15 + 2;
              uVar17 = puVar15[1];
              pcVar12 = (char *)*piVar6;
              puStack_38 = (undefined4 *)0x0;
              uStack_40 = 0;
              uStack_3c = 0;
              if ((uVar17 & 0xfe) == 6) {
                iVar7 = imp_strlen(pcVar12);
                thunk_unFyfir_BvUlKYauBEfhRelEEXsiapQSHvJAFghrgjyVAHOaZYfJlFFjqW_KkmNFIzQVgBGcyowb
                          (&uStack_40,iVar7 * 2 + 2);
                thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_40,0x22);
                cVar2 = *pcVar12;
                do {
                  if (cVar2 == '\\' || cVar2 == '\"') {
                    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                              (&uStack_40,0x5c);
                    cVar2 = *pcVar12;
                  }
                  thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                            (&uStack_40,cVar2);
                  cVar2 = pcVar12[1];
                  pcVar12 = pcVar12 + 1;
                } while (cVar2 != '\0');
                thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                          (&uStack_40,0x22);
                goto LAB_71aea310;
              }
              thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
                        (&uStack_40,0x20,0);
              switch(uVar17 & 0xff) {
              case 1:
                puVar8 = puStack_38;
                if ((uStack_40 & 1) == 0) {
                  puVar8 = puVar3;
                }
                if (((uint)pcVar12 & 1) == 0) {
                  *(undefined2 *)(puVar8 + 1) = 0x65;
                  *puVar8 = 0x736c6166;
                  uVar17 = 5;
                }
                else {
                  *(undefined1 *)(puVar8 + 1) = 0;
                  *puVar8 = 0x65757274;
                  uVar17 = 4;
                }
                break;
              case 2:
                bVar18 = (uStack_40 & 1) == 0;
                puVar10 = &DAT_7006b27b;
                goto LAB_71aea2e8;
              case 3:
                bVar18 = (uStack_40 & 1) == 0;
                puVar10 = &DAT_70062dbd;
                goto LAB_71aea2e8;
              case 4:
                bVar18 = (uStack_40 & 1) == 0;
                puVar10 = &DAT_70061f27;
LAB_71aea2e8:
                puVar8 = puStack_38;
                if (bVar18) {
                  puVar8 = puVar3;
                }
                uVar17 = imp_snprintf(puVar8,0x20,puVar10);
                break;
              case 5:
                puVar8 = puStack_38;
                if ((uStack_40 & 1) == 0) {
                  puVar8 = puVar3;
                }
                uVar17 = imp_snprintf(puVar8,0x20,&DAT_7006512a,pcVar12);
                break;
              default:
                uVar17 = 0;
              }
              if (0x1e < uVar17) {
                uVar17 = 0x1f;
              }
              thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
                        (&uStack_40,uVar17,0);
LAB_71aea310:
              puVar8 = puStack_38;
              uVar17 = uStack_3c;
              if ((uStack_40 & 1) == 0) {
                uVar17 = uStack_40 >> 1 & 0x7f;
                puVar8 = puVar3;
              }
              thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                        (&uStack_30,puVar8,uVar17);
              if ((uStack_40 & 1) != 0) {
                thunk_qNQrlu(puStack_38);
              }
              if (*(char *)(puVar15 + 1) == '\a') {
                if (*piVar6 != 0) {
                  thunk_dGrRHE();
                }
                *piVar6 = 0;
              }
              puVar15 = puVar15 + 4;
              bVar18 = false;
            } while (puVar15 != puVar5);
          }
          thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                    (&uStack_30,&DAT_7007167c);
        }
      }
      else {
        *puStack_28 = 0;
        uStack_2c = 0;
        if (puVar14[3] != puVar14[4]) goto LAB_71aea0b8;
      }
      puVar9 = puStack_28;
      if ((uStack_30 & 1) == 0) {
        puVar9 = (undefined1 *)((uint)&uStack_30 | 1);
      }
      puVar10 = &DAT_7006223e;
      if (bVar1) {
        puVar10 = &DAT_70066987;
      }
      imp_fprintf(*(undefined4 *)(iVar11 + 0x30),s__s___name_____s____cat_____s_____7006e2a1,puVar10
                  ,*puVar14,puVar14[1],*(undefined1 *)(puVar14 + 2),puVar14[6],puVar14[7],puVar14[8]
                  ,puVar14[9],puVar9);
      bVar1 = true;
    }
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(puStack_28);
    }
    if (puVar16 != (undefined4 *)0x0) {
      for (; puVar16 != puVar13; puVar13 = puVar13 + -10) {
        if (puVar13[-7] != 0) {
          puVar13[-6] = puVar13[-7];
          thunk_qNQrlu();
        }
      }
      thunk_qNQrlu(puVar16);
    }
    if (iVar4 != 0) {
      imp_fwrite(&DAT_7006f2ec,3,1,*(undefined4 *)(iVar11 + 0x30));
      if (*(char *)(iVar11 + 0x34) != '\0') {
        imp_fclose(*(undefined4 *)(iVar11 + 0x30));
      }
      *(undefined4 *)(iVar11 + 0x30) = 0;
      return;
    }
  } while( true );
}


// =========================================================================
// Function: HJEdOkbUSv_ZKGrew
// Entry: 0x71aeb87c | Size: 12 bytes
// =========================================================================

void HJEdOkbUSv_ZKGrew(undefined4 param_1)

{
  thunk_lTl_jWEPLnitluaDOS(param_1,0,0);
  return;
}


// =========================================================================
// Function: lTl_jWEPLnitluaDOS
// Entry: 0x71aeb888 | Size: 244 bytes
// =========================================================================

int lTl_jWEPLnitluaDOS(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_14 [4];
  
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  iVar1 = imp_pthread_mutex_init(param_1,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a778,0x58,
               s_pthread_mutex_init__event_mutex__7006584f,&DAT_7009602d);
  }
  iVar1 = imp_pthread_condattr_init(auStack_14);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a778,0x5a,
               s_pthread_condattr_init__cond_attr_70061f2a,&DAT_7009602d);
  }
  iVar1 = imp_pthread_condattr_setclock(auStack_14,1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a778,0x5c,
               s_pthread_condattr_setclock__cond__7006bcf7,&DAT_7009602d);
  }
  iVar1 = imp_pthread_cond_init(param_1 + 4,auStack_14);
  if (iVar1 == 0) {
    imp_pthread_condattr_destroy(auStack_14);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_rtc_ba_7006a778,0x5e,
             s_pthread_cond_init__event_cond_____70062faa,&DAT_7009602d);
}


// =========================================================================
// Function: xyJ_toQYkFGGrRYsd
// Entry: 0x71aeb9ac | Size: 32 bytes
// =========================================================================

int xyJ_toQYkFGGrRYsd(int param_1)

{
  imp_pthread_mutex_destroy();
  imp_pthread_cond_destroy(param_1 + 4);
  return param_1;
}


// =========================================================================
// Function: rIGBxdWQUcCSpi_PqpT
// Entry: 0x71aeb9d0 | Size: 44 bytes
// =========================================================================

void rIGBxdWQUcCSpi_PqpT(int param_1)

{
  imp_pthread_mutex_lock();
  *(undefined1 *)(param_1 + 9) = 1;
  imp_pthread_cond_broadcast(param_1 + 4);
  imp_pthread_mutex_unlock(param_1);
  return;
}


// =========================================================================
// Function: IknWoqvEUzJrMUjVkrMIu
// Entry: 0x71aeb9fc | Size: 36 bytes
// =========================================================================

void IknWoqvEUzJrMUjVkrMIu(int param_1)

{
  imp_pthread_mutex_lock();
  *(undefined1 *)(param_1 + 9) = 0;
  imp_pthread_mutex_unlock(param_1);
  return;
}


// =========================================================================
// Function: CtbKKQeLrFfcVxztWHOwDExGVAZuOSBdFVKuLjgSy
// Entry: 0x71aeba20 | Size: 804 bytes
// =========================================================================

bool CtbKKQeLrFfcVxztWHOwDExGVAZuOSBdFVKuLjgSy
               (int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = 0;
  uVar2 = 0;
  iVar5 = 0;
  uVar6 = 0;
  iVar3 = param_3;
  uVar4 = param_4;
  uVar7 = uStack_30;
  if ((int)(param_5 - (param_3 + (uint)(param_4 < param_2))) < 0 !=
      (SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2)))) {
    uVar6 = 1;
    imp_clock_gettime(1,&uStack_30);
    iVar3 = FUN_71ba3034(param_4,param_5,1000000,0);
    uVar2 = uStack_30 + iVar3;
    iVar5 = (param_4 + iVar3 * -1000000) * 1000 + iStack_2c;
    iVar3 = 999999999;
    uVar4 = uStack_30;
    uVar7 = uVar2;
    iStack_2c = iVar5;
    if (999999999 < iVar5) {
      uVar2 = uVar2 + 1;
      iVar3 = -1000000000;
      iVar5 = iVar5 + -1000000000;
      uVar7 = uVar2;
      iStack_2c = iVar5;
    }
  }
  uStack_30 = uVar7;
  uVar7 = 0;
  iVar8 = 0;
  if (param_2 != 0xffffffff || param_3 != 0x7fffffff) {
    uStack_34 = 1;
    imp_clock_gettime(1,&uStack_30,iVar3,uVar4,iVar5,uVar2);
    iVar3 = FUN_71ba3034(param_2,param_3,1000000,0);
    uVar7 = uStack_30 + iVar3;
    iVar8 = (param_2 + iVar3 * -1000000) * 1000 + iStack_2c;
    uStack_30 = uVar7;
    iStack_2c = iVar8;
    if (999999999 < iVar8) {
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + -1000000000;
      uStack_30 = uVar7;
      iStack_2c = iVar8;
    }
  }
  thunk_iXPNSBmLMOIxcUfJaRkyBuBKHRkHHrrONocKTqQvufBR();
  imp_pthread_mutex_lock(param_1);
  uStack_30 = uVar7;
  iStack_2c = iVar8;
  if ((int)(param_5 - (param_3 + (uint)(param_4 < param_2))) < 0 ==
      (SBORROW4(param_5,param_3) != SBORROW4(param_5 - param_3,(uint)(param_4 < param_2)))) {
    uStack_28 = uStack_34;
    uVar4 = 0;
    if (*(char *)(param_1 + 9) == '\0') {
      do {
        if ((char)uStack_28 == '\0') {
          uVar4 = imp_pthread_cond_wait(param_1 + 4,param_1);
          cVar1 = *(char *)(param_1 + 9);
        }
        else {
          uVar4 = imp_pthread_cond_timedwait(param_1 + 4,param_1,&uStack_30);
          cVar1 = *(char *)(param_1 + 9);
        }
      } while ((cVar1 == '\0') && (uVar4 == 0));
    }
  }
  else {
    uStack_30 = uVar2;
    iStack_2c = iVar5;
    uStack_28 = uVar6;
    if (*(char *)(param_1 + 9) == '\0') {
      iVar3 = param_1 + 4;
      do {
        while ((char)uStack_28 != '\0') {
          uVar4 = imp_pthread_cond_timedwait(iVar3,param_1,&uStack_30);
          if (*(char *)(param_1 + 9) != '\0' || uVar4 != 0) goto LAB_71aebc94;
        }
        uVar4 = imp_pthread_cond_wait(iVar3,param_1);
      } while (*(char *)(param_1 + 9) == '\0' && uVar4 == 0);
LAB_71aebc94:
      if (uVar4 == 0x6e) {
        thunk_zBXXunvleYhUXTEMCFtzpssWQTux_LWJiQWymwPWBCbqAOnSSJydPlQXOW();
        uStack_28 = uStack_34;
        uVar4 = 0;
        uStack_30 = uVar7;
        iStack_2c = iVar8;
        if (*(char *)(param_1 + 9) == '\0') {
          do {
            while ((char)uStack_28 != '\0') {
              uVar4 = imp_pthread_cond_timedwait(iVar3,param_1,&uStack_30);
              if (*(char *)(param_1 + 9) != '\0' || uVar4 != 0) goto LAB_71aebcc0;
            }
            uVar4 = imp_pthread_cond_wait(iVar3,param_1);
          } while (*(char *)(param_1 + 9) == '\0' && uVar4 == 0);
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
LAB_71aebcc0:
  uVar7 = uVar4;
  if (uVar4 == 0) {
    uVar7 = (uint)*(byte *)(param_1 + 8);
  }
  if (uVar4 == 0 && uVar7 == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  imp_pthread_mutex_unlock(param_1);
  return uVar4 == 0;
}


// =========================================================================
// Function: QQLkFJcETC_jzTJWGLCZjpYWBALacrJWqtmzcylpcqdyAHeMFZ
// Entry: 0x71aec22c | Size: 48 bytes
// =========================================================================

undefined4 *
QQLkFJcETC_jzTJWGLCZjpYWBALacrJWqtmzcylpcqdyAHeMFZ(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_701365a0);
  *param_1 = *puVar1;
  *puVar1 = param_2;
  return param_1;
}


// =========================================================================
// Function: DfvUHNTpOEVIBcR_Xvq_gZDHPxgBbE
// Entry: 0x71aec260 | Size: 40 bytes
// =========================================================================

undefined4 * DfvUHNTpOEVIBcR_Xvq_gZDHPxgBbE(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  puVar1 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_701365a0);
  *puVar1 = uVar2;
  return param_1;
}


// =========================================================================
// Function: iXPNSBmLMOIxcUfJaRkyBuBKHRkHHrrONocKTqQvufBR
// Entry: 0x71aec28c | Size: 48 bytes
// =========================================================================

void iXPNSBmLMOIxcUfJaRkyBuBKHRkHHrrONocKTqQvufBR(void)

{
  int *piVar1;
  
  piVar1 = (int *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_701365a0);
  if ((int *)*piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x71aec2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*piVar1 + 8))();
  return;
}


// =========================================================================
// Function: zBXXunvleYhUXTEMCFtzpssWQTux_LWJiQWymwPWBCbqAOnSSJydPlQXOW
// Entry: 0x71aec380 | Size: 56 bytes
// =========================================================================

void zBXXunvleYhUXTEMCFtzpssWQTux_LWJiQWymwPWBCbqAOnSSJydPlQXOW(void)

{
  int iVar1;
  
  iVar1 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
  if (iVar1 != 0) {
    return;
  }
  thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
            (&DAT_70091039,s_____webrtc_apm_src_webrtc_rtc_ba_7006f2f0,0xb2,
             s_Probable_deadlock__70070ed2);
  return;
}


// =========================================================================
// Function: sOIzUUpyFZJgOHUZprQmBnKgaMai
// Entry: 0x71aec468 | Size: 36 bytes
// =========================================================================

void sOIzUUpyFZJgOHUZprQmBnKgaMai(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = &DAT_70b137c4;
  param_1[1] = param_2;
  return;
}


// =========================================================================
// Function: REpPnXzlHXvqgwjIJNztRRsUsWRBeV
// Entry: 0x71aec490 | Size: 52 bytes
// =========================================================================

void REpPnXzlHXvqgwjIJNztRRsUsWRBeV(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_70b137c4;
  uVar2 = *(undefined4 *)(param_2 + 8);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = uVar2;
  cVar1 = *(char *)(param_2 + 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}


// =========================================================================
// Function: sCOIScqcmIIBNpkOKswPHAEomOdaGJ
// Entry: 0x71aec4c8 | Size: 196 bytes
// =========================================================================

void sCOIScqcmIIBNpkOKswPHAEomOdaGJ(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar2 = imp_pthread_join(*puVar4,0);
      if (iVar2 != 0) {
        uVar3 = imp_pthread_join(*puVar4,0);
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_rtc_ba_7007167f,0xa8,
                   s_0____pthread_join__handle___null_7006cd03,&DAT_70095ef5,0,uVar3);
      }
      if (*(char *)(param_1 + 8) == '\0') goto LAB_71aec528;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
LAB_71aec528:
  uVar3 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *puVar4 = uVar3;
  cVar1 = *(char *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}


// =========================================================================
// Function: yGtStKkKuEhIKOSDIrLmbrFLUBmuGRSUAR
// Entry: 0x71aec598 | Size: 144 bytes
// =========================================================================

void yGtStKkKuEhIKOSDIrLmbrFLUBmuGRSUAR(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar1 = imp_pthread_join(*(undefined4 *)(param_1 + 4),0);
      if (iVar1 != 0) {
        uVar2 = imp_pthread_join(*(undefined4 *)(param_1 + 4),0);
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_rtc_ba_7007167f,0xa8,
                   s_0____pthread_join__handle___null_7006cd03,&DAT_70095ef5,0,uVar2);
      }
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}


// =========================================================================
// Function: axQhMArYGadKcxdFXfBdPVUMDFL
// Entry: 0x71aec634 | Size: 148 bytes
// =========================================================================

void axQhMArYGadKcxdFXfBdPVUMDFL(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar1 = imp_pthread_join(*(undefined4 *)(param_1 + 4),0);
      if (iVar1 != 0) {
        uVar2 = imp_pthread_join(*(undefined4 *)(param_1 + 4),0);
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_rtc_ba_7007167f,0xa8,
                   s_0____pthread_join__handle___null_7006cd03,&DAT_70095ef5,0,uVar2);
      }
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}


// =========================================================================
// Function: SpMjGqDOsCuOUqQRBUYBaQyXAGf
// Entry: 0x71aec6d8 | Size: 28 bytes
// =========================================================================

void SpMjGqDOsCuOUqQRBUYBaQyXAGf(undefined4 param_1)

{
  thunk_axQhMArYGadKcxdFXfBdPVUMDFL();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: bQzgqvVfigxqlibmfuVVztizgYmonPnPqrjgJITlFTSp_neBnBpitkZUcpTqweadoiskilTeWsXdivxPWqr_QOBrKNTBqnUogQMSZefnJeAFeyhiyvoYUpDfXhStmzizjDVIFvx
// Entry: 0x71aec6f4 | Size: 204 bytes
// =========================================================================

void bQzgqvVfigxqlibmfuVVztizgYmonPnPqrjgJITlFTSp_neBnBpitkZUcpTqweadoiskilTeWsXdivxPWqr_QOBrKNTBqnUogQMSZefnJeAFeyhiyvoYUpDfXhStmzizjDVIFvx
               (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int aiStack_30 [4];
  int *apiStack_20 [2];
  
  ppiVar2 = (int **)(param_2 + 4);
  piVar3 = *ppiVar2;
  if (piVar3 == (int *)0x0) {
    ppiVar2 = apiStack_20;
  }
  else {
    apiStack_20[0] = piVar3;
    if (piVar3 == param_2) {
      apiStack_20[0] = aiStack_30;
      (**(code **)(*param_2 + 0xc))(param_2,apiStack_20[0]);
      goto LAB_71aec768;
    }
  }
  *ppiVar2 = (int *)0x0;
LAB_71aec768:
  thunk_KFjyVnTAHi_TZ_lrRWLxyJOfzQYpetmoNSTFBhJqIgwoZfQGwBJysWErSzJyqTJJFZJCglZfCuCGcLEpIIJcuQLvgeJnzycTPzcYskmBjbdClDyJqLpGnBUarSHjlRArLuQFwX
            (param_1,aiStack_30,param_3,param_4,param_5,1);
  piVar3 = aiStack_30;
  if (apiStack_20[0] == piVar3) {
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0x14;
    piVar3 = apiStack_20[0];
    if (apiStack_20[0] == (int *)0x0) {
      return;
    }
  }
  (**(code **)(*piVar3 + iVar1))();
  return;
}


// =========================================================================
// Function: KFjyVnTAHi_TZ_lrRWLxyJOfzQYpetmoNSTFBhJqIgwoZfQGwBJysWErSzJyqTJJFZJCglZfCuCGcLEpIIJcuQLvgeJnzycTPzcYskmBjbdClDyJqLpGnBUarSHjlRArLuQFwX
// Entry: 0x71aec7f8 | Size: 632 bytes
// =========================================================================

void KFjyVnTAHi_TZ_lrRWLxyJOfzQYpetmoNSTFBhJqIgwoZfQGwBJysWErSzJyqTJJFZJCglZfCuCGcLEpIIJcuQLvgeJnzycTPzcYskmBjbdClDyJqLpGnBUarSHjlRArLuQFwX
               (undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
               uint param_6)

{
  undefined8 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uStack_6c;
  undefined1 auStack_68 [24];
  int aiStack_50 [4];
  int *apiStack_40 [2];
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar2 = thunk_MwhHq(0x18);
  ppiVar3 = (int **)(param_2 + 4);
  piVar7 = *ppiVar3;
  if (piVar7 == (int *)0x0) {
    ppiVar3 = apiStack_40;
LAB_71aec848:
    *ppiVar3 = (int *)0x0;
  }
  else {
    apiStack_40[0] = piVar7;
    if (piVar7 != param_2) goto LAB_71aec848;
    apiStack_40[0] = aiStack_50;
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  piVar7 = aiStack_50;
  if (0xfffffff7 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_38);
  }
  if (param_4 < 0xb) {
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(param_4 << 1));
    iVar5 = (int)&uStack_38 + 1;
    if (param_4 != 0) goto LAB_71aec8c8;
  }
  else {
    uVar8 = (param_4 | 7) + 1;
    iVar5 = thunk_MwhHq(uVar8);
    uStack_38 = uVar8 | 1;
    uStack_34 = param_4;
    iStack_30 = iVar5;
LAB_71aec8c8:
    imp___aeabi_memmove(iVar5,param_3,param_4);
  }
  *(undefined1 *)(iVar5 + param_4) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  uStack_2c = param_5;
  puVar4 = (undefined4 *)thunk_MwhHq(0x30);
  *puVar4 = &DAT_70b137dc;
  if (apiStack_40[0] == (int *)0x0) {
    ppiVar3 = (int **)(puVar4 + 6);
LAB_71aec92c:
    *ppiVar3 = (int *)0x0;
  }
  else {
    if (apiStack_40[0] != piVar7) {
      ppiVar3 = apiStack_40;
      puVar4[6] = apiStack_40[0];
      goto LAB_71aec92c;
    }
    puVar4[6] = puVar4 + 2;
    (**(code **)(aiStack_50[0] + 0xc))(aiStack_50);
    param_5 = uStack_2c;
  }
  uVar1 = CONCAT44(uStack_34,uStack_38);
  *(undefined4 **)(iVar2 + 0x10) = puVar4;
  puVar4[10] = iStack_30;
  puVar4[0xb] = param_5;
  uStack_38 = 0;
  uStack_34 = 0;
  iStack_30 = 0;
  *(undefined8 *)(puVar4 + 8) = uVar1;
  if (apiStack_40[0] == piVar7) {
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0x14;
    piVar7 = apiStack_40[0];
    if (apiStack_40[0] == (int *)0x0) goto LAB_71aec9bc;
  }
  (**(code **)(*piVar7 + iVar5))(piVar7);
LAB_71aec9bc:
  imp_pthread_attr_init(auStack_68);
  imp_pthread_attr_setstacksize(auStack_68,0x100000);
  imp_pthread_attr_setdetachstate(auStack_68,param_6 ^ 1);
  iVar5 = imp_pthread_create(&uStack_6c,auStack_68,FUN_71aecc4c,iVar2);
  if (iVar5 != 0) {
    uVar6 = imp_pthread_create(&uStack_6c,auStack_68,FUN_71aecc4c,iVar2);
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7007167f,0xcf,
               s_0____pthread_create__handle___at_70071e11,&DAT_70095ef5,0,uVar6);
  }
  imp_pthread_attr_destroy(auStack_68);
  thunk_sOIzUUpyFZJgOHUZprQmBnKgaMai(param_1,uStack_6c,param_6);
  return;
}


// =========================================================================
// Function: GU_kHNMEOtFrNqbMIhjTkrzmgQuachYAkhWIynIesBRrHSUpuCTeouPAJGMofdkOCSeuPYxSEeZabRPuVXbcnjamuTwDaruCWQvvTQoUXyzCyGtQHvtvRgSsITyOdaeBypMnaFH
// Entry: 0x71aecae0 | Size: 204 bytes
// =========================================================================

void GU_kHNMEOtFrNqbMIhjTkrzmgQuachYAkhWIynIesBRrHSUpuCTeouPAJGMofdkOCSeuPYxSEeZabRPuVXbcnjamuTwDaruCWQvvTQoUXyzCyGtQHvtvRgSsITyOdaeBypMnaFH
               (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int aiStack_30 [4];
  int *apiStack_20 [2];
  
  ppiVar2 = (int **)(param_2 + 4);
  piVar3 = *ppiVar2;
  if (piVar3 == (int *)0x0) {
    ppiVar2 = apiStack_20;
  }
  else {
    apiStack_20[0] = piVar3;
    if (piVar3 == param_2) {
      apiStack_20[0] = aiStack_30;
      (**(code **)(*param_2 + 0xc))(param_2,apiStack_20[0]);
      goto LAB_71aecb54;
    }
  }
  *ppiVar2 = (int *)0x0;
LAB_71aecb54:
  thunk_KFjyVnTAHi_TZ_lrRWLxyJOfzQYpetmoNSTFBhJqIgwoZfQGwBJysWErSzJyqTJJFZJCglZfCuCGcLEpIIJcuQLvgeJnzycTPzcYskmBjbdClDyJqLpGnBUarSHjlRArLuQFwX
            (param_1,aiStack_30,param_3,param_4,param_5,0);
  piVar3 = aiStack_30;
  if (apiStack_20[0] == piVar3) {
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0x14;
    piVar3 = apiStack_20[0];
    if (apiStack_20[0] == (int *)0x0) {
      return;
    }
  }
  (**(code **)(*piVar3 + iVar1))();
  return;
}


// =========================================================================
// Function: mhWWzrxrBDBALitRTebLtuoOGdfq_SQzAvvf
// Entry: 0x71aecbe4 | Size: 12 bytes
// =========================================================================

void mhWWzrxrBDBALitRTebLtuoOGdfq_SQzAvvf(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71aecbf0
// Entry: 0x71aecbf0 | Size: 92 bytes
// =========================================================================

int * FUN_71aecbf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    thunk_qNQrlu(param_1[8]);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 == param_1) {
    iVar2 = 0x10;
    piVar1 = param_1;
  }
  else {
    iVar2 = 0x14;
    if (piVar1 == (int *)0x0) {
      return param_1;
    }
  }
  (**(code **)(*piVar1 + iVar2))();
  return param_1;
}


// =========================================================================
// Function: FUN_71aecc4c
// Entry: 0x71aecc4c | Size: 228 bytes
// =========================================================================

undefined4 FUN_71aecc4c(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((int *)param_1[4] == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_71a0f5b4();
    piVar1 = puVar2 + 2;
    *puVar2 = &DAT_70b137dc;
    if ((*(byte *)(puVar2 + 8) & 1) != 0) {
      thunk_qNQrlu(puVar2[10]);
    }
    piVar3 = (int *)puVar2[6];
    if (piVar3 == piVar1) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0x14;
      piVar1 = piVar3;
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x71aecd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)0x71aeccc0)(puVar2);
        return uVar4;
      }
    }
    (**(code **)(*piVar1 + iVar5))();
                    /* WARNING: Could not recover jumptable at 0x71aecd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)0x71aeccc0)(puVar2);
    return uVar4;
  }
  (**(code **)(*(int *)param_1[4] + 0x18))();
  piVar1 = (int *)param_1[4];
  if (piVar1 == param_1) {
    iVar5 = 0x10;
    piVar1 = param_1;
  }
  else {
    iVar5 = 0x14;
    if (piVar1 == (int *)0x0) {
      thunk_qNQrlu(param_1);
      return 0;
    }
  }
  (**(code **)(*piVar1 + iVar5))();
  thunk_qNQrlu(param_1);
  return 0;
}


// =========================================================================
// Function: FUN_71aecd34
// Entry: 0x71aecd34 | Size: 120 bytes
// =========================================================================

void FUN_71aecd34(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 2;
  *param_1 = &DAT_70b137dc;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(param_1[10]);
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 == piVar2) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piVar1;
    if (piVar1 == (int *)0x0) {
      thunk_qNQrlu(param_1);
      return;
    }
  }
  (**(code **)(*piVar2 + iVar3))();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71aed018
// Entry: 0x71aed018 | Size: 104 bytes
// =========================================================================

void FUN_71aed018(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x28));
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == piVar3) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    piVar3 = piVar1;
    if (piVar1 == (int *)0x0) {
      thunk_qNQrlu(param_1);
      return;
    }
  }
  (**(code **)(*piVar3 + iVar2))();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71aed080
// Entry: 0x71aed080 | Size: 252 bytes
// =========================================================================

int FUN_71aed080(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iStack_1c;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    iVar1 = param_1 + 0x21;
  }
  thunk_TLRarQmgDHQYpIPvpcSiWWrRTwbjDESGl(iVar1);
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar1 = imp_sched_get_priority_min(1);
  iVar2 = imp_sched_get_priority_max(1);
  if ((iVar1 != -1 && iVar2 != -1) && (2 < iVar2 - iVar1)) {
    if (iVar4 - 1U < 4) {
      iStack_1c = iVar1 + 1;
      switch(iVar4) {
      case 1:
        break;
      case 2:
        iStack_1c = (iVar2 + iVar1 + -1) / 2;
        break;
      case 3:
        if (iStack_1c < iVar2 + -3) {
          iStack_1c = iVar2 + -3;
        }
        break;
      case 4:
        iStack_1c = iVar2 + -1;
      }
    }
    uVar3 = imp_pthread_self();
    imp_pthread_setschedparam(uVar3,1,&iStack_1c);
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
    return iVar1;
  }
  uVar5 = FUN_71a0f5b4();
  iVar1 = 0;
  if (*(int *)((int)((ulonglong)uVar5 >> 0x20) + 4) == 0x70096ddc) {
    iVar1 = (int)uVar5 + 8;
  }
  return iVar1;
}


// =========================================================================
// Function: LTHLIHk_hZFpHqUtNohzHHEkpSpIrzgbeqR_EJXWuyfkxASRRbXFAU_gCfAguDQykAKbSqff
// Entry: 0x71aedb04 | Size: 12 bytes
// =========================================================================

void LTHLIHk_hZFpHqUtNohzHHEkpSpIrzgbeqR_EJXWuyfkxASRRbXFAU_gCfAguDQykAKbSqff(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: GnNamFewVEyFgXwKbRkfVTuWoWZBGAAtGGXLicJduQJCgRwAU_fAYGwOHSt_vLkiURXEcKWraCmxWCuDmYtSKVOZzttsfISYIzXf_wfeMKsAZ
// Entry: 0x71aedb10 | Size: 12 bytes
// =========================================================================

void GnNamFewVEyFgXwKbRkfVTuWoWZBGAAtGGXLicJduQJCgRwAU_fAYGwOHSt_vLkiURXEcKWraCmxWCuDmYtSKVOZzttsfISYIzXf_wfeMKsAZ
               (undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: aBoxrXMHagIKx_TTBtUoBzsVDlmosMagaPdZPrzjLCFjUCyspTAjGsrGFNtMBUEl
// Entry: 0x71aedb1c | Size: 12 bytes
// =========================================================================

void aBoxrXMHagIKx_TTBtUoBzsVDlmosMagaPdZPrzjLCFjUCyspTAjGsrGFNtMBUEl(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: pAVebNlFSMSbixCUJGyCLgmILYIWNeAqkWMoWdWt
// Entry: 0x71aedb40 | Size: 104 bytes
// =========================================================================

undefined1 *
pAVebNlFSMSbixCUJGyCLgmILYIWNeAqkWMoWdWt
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
// Function: BSLxGkPwsvDJ_lCtPdCkBVUBzmAuAYgDs_RaOVASZVjLqepsJkUwCgMVUqDGjKIZGWYCjPRJlkAEI
// Entry: 0x71aedbac | Size: 8 bytes
// =========================================================================

void BSLxGkPwsvDJ_lCtPdCkBVUBzmAuAYgDs_RaOVASZVjLqepsJkUwCgMVUqDGjKIZGWYCjPRJlkAEI(int param_1)

{
  thunk_bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH(param_1 + 0x10);
  return;
}


// =========================================================================
// Function: DNKCnLPyMZqRfQkXZgeoETFSYFzCEgKGFuiEcLEmddvfbRkEZaDcZOcPjreMiFslLTpEyYWxieKVwX
// Entry: 0x71aedbb4 | Size: 8 bytes
// =========================================================================

void DNKCnLPyMZqRfQkXZgeoETFSYFzCEgKGFuiEcLEmddvfbRkEZaDcZOcPjreMiFslLTpEyYWxieKVwX(int param_1)

{
  thunk_bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH(param_1 + 0x20);
  return;
}


// =========================================================================
// Function: JBLbHIAjiKVQeYWbIosAQiXStaLSoZEbBZvXPVUfeeMbfau
// Entry: 0x71aedbbc | Size: 56 bytes
// =========================================================================

void JBLbHIAjiKVQeYWbIosAQiXStaLSoZEbBZvXPVUfeeMbfau(char *param_1,float param_2)

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
// Function: bznqWboTYOckocIXDffiJtNhzZtqWTDSULeLTqFwVTkqcLhFWuId_lDXhwiH
// Entry: 0x71aedbf8 | Size: 52 bytes
// =========================================================================

void bznqWboTYOckocIXDffiJtNhzZtqWTDSULeLTqFwVTkqcLhFWuId_lDXhwiH(char *param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = fVar1 * 0.003921569;
  if (*param_1 == '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 8) * fVar1;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) * fVar1;
  return;
}


// =========================================================================
// Function: XASZYjOyUETkALzndeqQYucfzkmAgqzStemgvVqntVyLpljq
// Entry: 0x71aedc30 | Size: 8 bytes
// =========================================================================

void XASZYjOyUETkALzndeqQYucfzkmAgqzStemgvVqntVyLpljq(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// =========================================================================
// Function: BKtRCsUyOnnlxxTGnIuRzWgwaUaaFlIyiDTbeYCTTwFrwVPAEFMNEhBPsy
// Entry: 0x71aedc38 | Size: 76 bytes
// =========================================================================

void BKtRCsUyOnnlxxTGnIuRzWgwaUaaFlIyiDTbeYCTTwFrwVPAEFMNEhBPsy(char *param_1,uint param_2)

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
// Function: mxGPgENVfKVFsCZweAkUrNliPlYKKOKgBy
// Entry: 0x71aedd10 | Size: 28 bytes
// =========================================================================

void mxGPgENVfKVFsCZweAkUrNliPlYKKOKgBy(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xbf800000;
  return;
}


// =========================================================================
// Function: bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH
// Entry: 0x71aedd2c | Size: 524 bytes
// =========================================================================

void bxNBlgl_EgkNtxlgRXuyVDWdadtdkMFAM_VbXzlechltdLMKQ_qXKKDcH(float *param_1,int param_2)

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
// Function: OBHnC_IspeRJMJhhD_hERj_euKYnudCuAfcfa
// Entry: 0x71aedf58 | Size: 40 bytes
// =========================================================================

void OBHnC_IspeRJMJhhD_hERj_euKYnudCuAfcfa(undefined4 *param_1)

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
// Function: fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx
// Entry: 0x71aedf80 | Size: 156 bytes
// =========================================================================

int fYaXeHLXBjZnRZwHAQEYdoOCJaigzTbvGqwRx(int param_1)

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
// Function: yypWBGIeFzyYTVuXJVwpTlybrHWJfQTaAWSVEnrnKUeIuTvzhTXOeoGcDViNDvVcGPWyIy_goidWAWQKnO
// Entry: 0x71aee020 | Size: 88 bytes
// =========================================================================

void yypWBGIeFzyYTVuXJVwpTlybrHWJfQTaAWSVEnrnKUeIuTvzhTXOeoGcDViNDvVcGPWyIy_goidWAWQKnO
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
// Function: DDOFVVCxoUfKMvNNGrhsCwwkwYcwpZqYqPMgUjeZfNWweCqUtpAYkZvweLmWERsRYEwCGoyQgsipTyBcWCkgTiCIRFRIf_faoaRrJLnTJtrpZWjbESusMy
// Entry: 0x71aee078 | Size: 464 bytes
// =========================================================================

void DDOFVVCxoUfKMvNNGrhsCwwkwYcwpZqYqPMgUjeZfNWweCqUtpAYkZvweLmWERsRYEwCGoyQgsipTyBcWCkgTiCIRFRIf_faoaRrJLnTJtrpZWjbESusMy
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
// Function: PXhgnbB_XsEgAtPgpTOJmLpuSwLxhBgnmPperHxCqzguguXEHmCOBbTHpPD
// Entry: 0x71aee248 | Size: 8 bytes
// =========================================================================

int PXhgnbB_XsEgAtPgpTOJmLpuSwLxhBgnmPperHxCqzguguXEHmCOBbTHpPD(int param_1,int param_2)

{
  return param_2 * param_1;
}


// =========================================================================
// Function: gwD_uZxjeCUhjGRXExegzDkHptTXmvbfSmlVDstGjdHyxfhPQPSHEuycXcrCMOYRbMOEZccRAi
// Entry: 0x71aee250 | Size: 756 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

undefined4
gwD_uZxjeCUhjGRXExegzDkHptTXmvbfSmlVDstGjdHyxfhPQPSHEuycXcrCMOYRbMOEZccRAi
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
// Function: XOxxDjluPOdANMASaGDANQLDAVuOKdXDLlRAag_gUOwEFNapjZvSyoUpIkQwIIqqcmcRxp
// Entry: 0x71aee544 | Size: 96 bytes
// =========================================================================

int XOxxDjluPOdANMASaGDANQLDAVuOKdXDLlRAag_gUOwEFNapjZvSyoUpIkQwIIqqcmcRxp
              (uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  undefined4 *puVar5;
  
  iVar3 = -6;
  if (param_2 < 5) {
    puVar6 = (undefined4 *)param_1[3];
    *param_1 = param_2;
    if ((undefined4 *)param_1[2] == puVar6) {
      return 0;
    }
    uVar1 = param_1[1];
    iVar3 = 0;
    puVar4 = (undefined4 *)param_1[2];
    do {
      puVar5 = puVar4 + 1;
      iVar2 = thunk_TjVJLy_tJR_YwGg_tZcwj
                        (*(undefined4 *)*puVar4,(uint)(byte)uVar1 | param_2 << 0x10);
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      puVar4 = puVar5;
    } while (puVar5 != puVar6);
  }
  return iVar3;
}


// =========================================================================
// Function: EOOpZEztYmvluLSHYmFfd_veoKBh_dADbXyTCciRZfDbV
// Entry: 0x71aee5a4 | Size: 104 bytes
// =========================================================================

int EOOpZEztYmvluLSHYmFfd_veoKBh_dADbXyTCciRZfDbV(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  undefined4 *puVar6;
  
  puVar7 = (undefined4 *)param_1[3];
  if ((undefined4 *)param_1[2] != puVar7) {
    uVar1 = param_1[1];
    uVar3 = 0xffff0000;
    iVar4 = 0;
    if (*param_1 < 5) {
      uVar3 = *param_1 << 0x10;
    }
    puVar5 = (undefined4 *)param_1[2];
    do {
      puVar6 = puVar5 + 1;
      iVar2 = thunk_TjVJLy_tJR_YwGg_tZcwj(*(undefined4 *)*puVar5,uVar3 | (byte)uVar1);
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      puVar5 = puVar6;
    } while (puVar6 != puVar7);
    return iVar4;
  }
  return 0;
}


// =========================================================================
// Function: BUMG_qzmRyJdaamnNJlnSGUrSktniUycMuckemcgKirQFVzLvK
// Entry: 0x71aee60c | Size: 8 bytes
// =========================================================================

undefined4 BUMG_qzmRyJdaamnNJlnSGUrSktniUycMuckemcgKirQFVzLvK(undefined4 *param_1)

{
  return *param_1;
}


// =========================================================================
// Function: Ksw_QqXdZwiSHxTIdfgZreRdPdkxMVexWqENMYDcxzdIzwvQCQnzkEDZM
// Entry: 0x71aee614 | Size: 100 bytes
// =========================================================================

int Ksw_QqXdZwiSHxTIdfgZreRdPdkxMVexWqENMYDcxzdIzwvQCQnzkEDZM(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  undefined4 *puVar5;
  
  puVar6 = (undefined4 *)param_1[3];
  *(char *)(param_1 + 1) = (char)param_2;
  if ((undefined4 *)param_1[2] != puVar6) {
    uVar2 = 0xffff0000;
    iVar3 = 0;
    if (*param_1 < 5) {
      uVar2 = *param_1 << 0x10;
    }
    puVar4 = (undefined4 *)param_1[2];
    do {
      puVar5 = puVar4 + 1;
      iVar1 = thunk_TjVJLy_tJR_YwGg_tZcwj(*(undefined4 *)*puVar4,uVar2 | param_2);
      if (iVar1 != 0) {
        iVar3 = iVar1;
      }
      puVar4 = puVar5;
    } while (puVar5 != puVar6);
    return iVar3;
  }
  return 0;
}


// =========================================================================
// Function: RkvZNNDOhctPvZKuMBXLWSyBuHCJXkSjBwMNMCgAQlGZGfNPoHJflZvaVyfvsl
// Entry: 0x71aee678 | Size: 8 bytes
// =========================================================================

undefined1 RkvZNNDOhctPvZKuMBXLWSyBuHCJXkSjBwMNMCgAQlGZGfNPoHJflZvaVyfvsl(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// =========================================================================
// Function: jhSMgCojZhEcw_tOosMrcqBiyzZZmFEPNdcMmMHxzcEPmxvqe
// Entry: 0x71aee680 | Size: 552 bytes
// =========================================================================

void jhSMgCojZhEcw_tOosMrcqBiyzZZmFEPNdcMmMHxzcEPmxvqe
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
// Function: FUN_71aeee2c
// Entry: 0x71aeee2c | Size: 388 bytes
// =========================================================================

void FUN_71aeee2c(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  if (param_2 <= (uint)((param_1[2] - iVar2 >> 6) * -0x33333333)) {
    if (param_2 != 0) {
      iVar3 = ((param_2 * 0x140 - 0x140) / 0x140) * 0x140 + 0x140;
      imp___aeabi_memclr(iVar2,iVar3);
      iVar2 = iVar2 + iVar3;
    }
    param_1[1] = iVar2;
    return;
  }
  iVar6 = *param_1;
  iVar3 = iVar2 - iVar6 >> 6;
  uVar5 = iVar3 * -0x33333333 + param_2;
  if (uVar5 < 0xcccccd) {
    iVar1 = param_1[2] - iVar6 >> 6;
    if (uVar5 < (uint)(iVar1 * -0x66666666)) {
      uVar5 = iVar1 * -0x66666666;
    }
    if (0x666665 < (uint)(iVar1 * -0x33333333)) {
      uVar5 = 0xcccccc;
    }
    if (uVar5 == 0) {
      iVar1 = 0;
    }
    else {
      if (0xcccccc < uVar5) goto LAB_71aeefac;
      iVar1 = thunk_MwhHq(uVar5 * 0x140);
    }
    iVar3 = iVar1 + iVar3 * 0x40;
    iVar4 = ((param_2 * 0x140 - 0x140) / 0x140) * 0x140 + 0x140;
    imp___aeabi_memclr(iVar3,iVar4);
    iVar2 = iVar3 - (iVar2 - iVar6);
    imp___aeabi_memcpy(iVar2,iVar6);
    *param_1 = iVar2;
    param_1[1] = iVar3 + iVar4;
    param_1[2] = iVar1 + uVar5 * 0x140;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
      return;
    }
    return;
  }
  FUN_71aef08c(param_1);
LAB_71aeefac:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_71aef08c
// Entry: 0x71aef08c | Size: 20 bytes
// =========================================================================

void FUN_71aef08c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71aef0f4
// Entry: 0x71aef0f4 | Size: 248 bytes
// =========================================================================

void FUN_71aef0f4(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1[1];
  if (param_2 <= (uint)(param_1[2] - iVar4 >> 2)) {
    if (param_2 != 0) {
      imp___aeabi_memclr4(iVar4,param_2 << 2);
      iVar4 = iVar4 + param_2 * 4;
    }
    param_1[1] = iVar4;
    return;
  }
  iVar6 = *param_1;
  iVar7 = iVar4 - iVar6 >> 2;
  uVar5 = param_2 + iVar7;
  if (uVar5 < 0x40000000) {
    uVar2 = param_1[2] - iVar6;
    uVar1 = (int)uVar2 >> 1;
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffb < uVar2) {
      uVar5 = 0x3fffffff;
    }
    if (uVar5 == 0) {
      iVar3 = 0;
    }
    else {
      if (0x3fffffff < uVar5) goto LAB_71aef1e8;
      iVar3 = thunk_MwhHq(uVar5 << 2);
    }
    iVar7 = iVar3 + iVar7 * 4;
    imp___aeabi_memclr4(iVar7,param_2 << 2);
    imp___aeabi_memcpy4(iVar3,iVar6,iVar4 - iVar6);
    *param_1 = iVar3;
    param_1[1] = iVar7 + param_2 * 4;
    param_1[2] = iVar3 + uVar5 * 4;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
      return;
    }
    return;
  }
  FUN_71aef2c8(param_1);
LAB_71aef1e8:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: FUN_71aef2c8
// Entry: 0x71aef2c8 | Size: 20 bytes
// =========================================================================

void FUN_71aef2c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: LxXxGwNkYBemMQuIS
// Entry: 0x71aef330 | Size: 116 bytes
// =========================================================================

int LxXxGwNkYBemMQuIS(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = imp_calloc(1,0x17c);
  iVar2 = thunk_uoqaJYIPVTRtdHavCWJkxsejOFmQngZRWZs();
  *(int *)(iVar1 + 0x178) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = thunk_R_fwzVgmQnnmLcwbqfb(4000,2);
    *(int *)(iVar1 + 0x174) = iVar3;
    if (iVar3 != 0) {
      return iVar1;
    }
  }
  thunk_peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu(iVar2);
  thunk_GWhrVLGdiDaubFvRP(0);
  imp_free(iVar1);
  return 0;
}


// =========================================================================
// Function: yKVbdqLLmvptx_U
// Entry: 0x71aef3a4 | Size: 52 bytes
// =========================================================================

void yKVbdqLLmvptx_U(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  thunk_peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu(*(undefined4 *)(param_1 + 0x178));
  thunk_GWhrVLGdiDaubFvRP(*(undefined4 *)(param_1 + 0x174));
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: MrEwqHNKuEUnQKU
// Entry: 0x71aef3d8 | Size: 208 bytes
// =========================================================================

int * MrEwqHNKuEUnQKU(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return (int *)0xffffffff;
  }
  piVar1 = param_1;
  if (param_2 != 16000) {
    piVar1 = (int *)0x2ee4;
  }
  if (param_2 == 16000 || param_2 == 8000) {
    *param_1 = param_2;
    iVar2 = thunk_yVVFkMGmwhPBuiceYGoAFZNJMGJXaiDsItOWjOmaWTeNLih(param_1[0x5e]);
    if (iVar2 == -1) {
      return (int *)0x2ee0;
    }
    thunk_OHQmpl_xNKaRTEScf(param_1[0x5d]);
    param_1[0x54] = 0x2a;
    *(undefined2 *)(param_1 + 0x55) = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined2 *)(param_1 + 0x57) = 0;
    *(undefined4 *)((int)param_1 + 0x156) = 0;
    param_1[0x58] = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    param_1[0x59] = 1;
    param_1[0x5a] = 1;
    param_1[0x5b] = 1;
    imp___aeabi_memclr4(param_1 + 3,0x144);
    iVar2 = param_1[0x5e];
    *(undefined2 *)((int)param_1 + 0x172) = 3;
    piVar1 = (int *)0x0;
    *(undefined2 *)(iVar2 + 0x4312) = 1;
    *(undefined4 *)(iVar2 + 0x433e) = 0x5000600;
    *(undefined4 *)(iVar2 + 0x433a) = 0x1000c00;
    *(undefined4 *)(iVar2 + 0x4336) = 0x1000100;
  }
  return piVar1;
}


// =========================================================================
// Function: TjVJLy_tJR_YwGg_tZcwj
// Entry: 0x71aef4a8 | Size: 340 bytes
// =========================================================================

undefined4 TjVJLy_tJR_YwGg_tZcwj(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar2 = 0x2ee2;
  if ((*(short *)(param_1 + 0x150) != 0x2a) || (uVar2 = 0x2ee4, (param_2 & 0xfffe) != 0)) {
    return uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x178);
  *(short *)(iVar3 + 0x4312) = (short)param_2;
  uVar1 = (int)param_2 >> 0x10;
  if (4 < uVar1) {
    return 0x2ee4;
  }
  *(short *)(param_1 + 0x172) = (short)(param_2 >> 0x10);
  if (param_2 >> 0x10 == 0) {
    *(undefined4 *)(iVar3 + 0x433e) = 0xa000c0;
    *(undefined4 *)(iVar3 + 0x433a) = 0x200180;
    *(undefined4 *)(iVar3 + 0x4336) = 0x200020;
    return 0;
  }
  if (uVar1 == 3) {
    *(undefined4 *)(iVar3 + 0x433e) = 0x5000600;
    *(undefined4 *)(iVar3 + 0x433a) = 0x1000c00;
    *(undefined4 *)(iVar3 + 0x4336) = 0x1000100;
    return 0;
  }
  if (uVar1 != 2) {
    if (uVar1 == 1) {
      *(undefined4 *)(iVar3 + 0x433e) = 0x1400180;
      *(undefined4 *)(iVar3 + 0x433a) = 0x400300;
      *(undefined4 *)(iVar3 + 0x4336) = 0x400040;
      return 0;
    }
    *(undefined4 *)(iVar3 + 0x433e) = 0xa000c00;
    *(undefined4 *)(iVar3 + 0x433a) = 0x2001800;
    *(undefined4 *)(iVar3 + 0x4336) = 0x2000200;
    return 0;
  }
  *(undefined4 *)(iVar3 + 0x433e) = 0x2800300;
  *(undefined4 *)(iVar3 + 0x433a) = 0x800600;
  *(undefined4 *)(iVar3 + 0x4336) = 0x800080;
  return 0;
}


// =========================================================================
// Function: GNLvEfAriHLkdPeEL_ECBXFzxaKIXLs
// Entry: 0x71aef5fc | Size: 64 bytes
// =========================================================================

undefined4 GNLvEfAriHLkdPeEL_ECBXFzxaKIXLs(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    if (*(short *)(param_1 + 0x150) == 0x2a) {
      uVar2 = 0;
      if (param_3 != 0x50) {
        uVar2 = 0x2ee4;
      }
      uVar1 = 0;
      if (param_3 != 0xa0) {
        uVar1 = uVar2;
      }
      return uVar1;
    }
    return 0x2ee2;
  }
  return 0x2ee3;
}


// =========================================================================
// Function: snDZXMFMONwftjnqjVvlqJW
// Entry: 0x71aef63c | Size: 248 bytes
// =========================================================================

undefined4 snDZXMFMONwftjnqjVvlqJW(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    uVar5 = 0x2ee2;
    if (*(short *)(param_1 + 0x150) == 0x2a) {
      if (param_3 != 0xa0) {
        uVar5 = 0x2ee4;
      }
      if (param_3 == 0xa0 || param_3 == 0x50) {
        if (*(int *)(param_1 + 0x164) == 0) {
          iVar3 = thunk_jIF_rFsxRUcXAJZMimpWx(*(undefined4 *)(param_1 + 0x174));
          sVar1 = *(short *)(*(int *)(param_1 + 0x178) + 0x224);
          iVar2 = (int)*(short *)(param_1 + 0x15a) * (int)sVar1;
          if (sVar1 * -0x50 + 0x100 < iVar2 * 8 - iVar3) {
            uVar4 = (iVar2 * 8 >> 1) - iVar3;
            if ((int)uVar4 < 0x51) {
              uVar4 = 0x50;
            }
            if (799 < uVar4) {
              uVar4 = 800;
            }
            thunk_oIIGnLHwfeNjDQNt_n(*(undefined4 *)(param_1 + 0x174),-uVar4,param_3);
            *(undefined4 *)(param_1 + 0x16c) = 1;
          }
        }
        thunk_KgAagMwhAiXMQh_cSx(*(undefined4 *)(param_1 + 0x174),param_2,param_3);
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return 0x2ee3;
}


// =========================================================================
// Function: UjAzLbHpKTVDVkWeME
// Entry: 0x71aef738 | Size: 1252 bytes
// =========================================================================

undefined4
UjAzLbHpKTVDVkWeME(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  short sVar2;
  longlong lVar3;
  byte bVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 *puStack_cc;
  undefined1 auStack_c8 [164];
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == 0 || param_4 == 0) {
    return 0x2ee3;
  }
  uVar6 = 0x2ee2;
  if ((short)param_1[0x54] != 0x2a) {
    return 0x2ee2;
  }
  if (param_5 != 0xa0) {
    uVar6 = 0x2ee4;
  }
  if (param_5 != 0xa0 && param_5 != 0x50) {
    return uVar6;
  }
  uVar7 = param_6;
  if (499 < (int)param_6) {
    uVar7 = 500;
  }
  iVar12 = param_1[0x59];
  *(ushort *)((int)param_1 + 0x15a) = ((ushort)uVar7 & ~(ushort)((int)uVar7 >> 0x1f)) + 10;
  uVar7 = (uint)((short)((ushort)param_5 & 0xff) * 0xcd) >> 0xe;
  iVar8 = FUN_71ba0484(uVar7,(int)*(short *)(param_1[0x5e] + 0x224));
  uVar6 = 0;
  if (500 < param_6) {
    uVar6 = 0x2f44;
  }
  if (iVar12 == 0) {
    uVar13 = 0;
    iVar8 = 0;
    do {
      puStack_cc = (undefined1 *)0x0;
      iVar12 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[0x5d]);
      if (iVar12 * 0x10000 < 0x4f0001) {
        imp___aeabi_memcpy4(auStack_c8,(int)param_1 + iVar8 + 0x10,0xa0);
        puStack_cc = auStack_c8;
        if (uVar13 != 1) goto LAB_71aef8cc;
LAB_71aef908:
        if (*param_1 == 16000) {
LAB_71aef914:
          sVar11 = *(short *)((int)param_1 + 0x15a);
          sVar5 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[0x5d]);
          sVar5 = sVar11 * *(short *)(param_1[0x5e] + 0x224) * 8 - sVar5;
          if (sVar5 < 0x50) {
            thunk_oIIGnLHwfeNjDQNt_n(param_1[0x5d],0x50);
            sVar5 = sVar5 + 0x50;
          }
          iVar12 = (short)param_1[0x57] * 8 + sVar5 * 2;
          sVar5 = (short)(iVar12 / 10);
          if (iVar12 < -9) {
            sVar5 = 0;
          }
          sVar11 = sVar5 - (short)param_1[3];
          *(short *)(param_1 + 0x57) = sVar5;
          iVar12 = (int)sVar11;
          if (iVar12 < 0xe1) {
            if (0 < param_1[3]) {
              bVar14 = SBORROW4(iVar12,0x5f);
              iVar1 = iVar12 + -0x5f;
              if (iVar12 < 0x60) {
                bVar14 = SBORROW4((int)(short)param_1[0x5c],0xe1);
                iVar1 = (short)param_1[0x5c] + -0xe1;
              }
              if (iVar1 < 0 != bVar14) goto LAB_71aef9e4;
            }
          }
          else if (0x5f < (short)param_1[0x5c]) {
LAB_71aef9e4:
            iVar12 = param_1[0x58];
            *(short *)(param_1 + 0x5c) = sVar11;
            param_1[0x58] = iVar12 + 1;
            if (0x18 < iVar12) {
              iVar12 = sVar5 + -0xa0;
              if (iVar12 == 0 || sVar5 < 0xa0) {
                iVar12 = 0;
              }
              param_1[3] = iVar12;
            }
            goto LAB_71aefa14;
          }
          *(short *)(param_1 + 0x5c) = sVar11;
          param_1[0x58] = 0;
        }
      }
      else {
        thunk_KsWjkINgBphTWXrQT(param_1[0x5d],&puStack_cc,auStack_c8,0x50);
        imp___aeabi_memcpy((int)param_1 + iVar8 + 0x10,puStack_cc,0xa0);
        if (uVar13 == 1) goto LAB_71aef908;
LAB_71aef8cc:
        if ((uVar13 == 0) && (*param_1 == 8000)) goto LAB_71aef914;
      }
LAB_71aefa14:
      iVar12 = param_3;
      if (param_3 != 0) {
        iVar12 = param_3 + iVar8;
      }
      iVar12 = thunk_SckceUsJuCQIZBAqLOPJJoIQGPNuuCiquG_OZKZaArJAlUCyOUfhGbfhglSYj
                         (param_1[0x5e],puStack_cc,param_2 + iVar8,iVar12,param_4 + iVar8);
      if (iVar12 == -1) {
        return 0xffffffff;
      }
      uVar13 = uVar13 + 1;
      iVar8 = iVar8 + 0xa0;
      if (uVar7 == uVar13) {
        return uVar6;
      }
    } while( true );
  }
  if (param_3 != 0) {
    param_2 = param_3;
  }
  if (param_4 != param_2) {
    imp___aeabi_memcpy(param_4,param_2,param_5 << 1);
  }
  sVar5 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[0x5d]);
  if (param_1[0x5a] != 0) {
    sVar11 = (short)param_1[0x56] + 1;
    *(short *)(param_1 + 0x56) = sVar11;
    if (*(short *)((int)param_1 + 0x152) == 0) {
      sVar9 = *(short *)((int)param_1 + 0x15a);
      *(undefined2 *)(param_1 + 0x55) = 0;
      *(short *)((int)param_1 + 0x156) = sVar9;
      sVar10 = sVar9;
    }
    else {
      sVar9 = *(short *)((int)param_1 + 0x15a);
      sVar10 = *(short *)((int)param_1 + 0x156);
    }
    iVar12 = (int)sVar10 - (int)sVar9;
    sVar10 = 0;
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    dVar15 = (double)VectorSignedToFloat((int)sVar9,(byte)(in_fpscr >> 0x16) & 3);
    dVar15 = dVar15 * 0.2;
    uVar7 = in_fpscr & 0xfffffff | (uint)(dVar15 < 8.0) << 0x1f | (uint)(dVar15 == 8.0) << 0x1e;
    bVar4 = (byte)(uVar7 >> 0x18);
    dVar16 = (double)VectorSignedToFloat(iVar12,(byte)(uVar7 >> 0x16) & 3);
    dVar17 = 8.0;
    if (!(bool)(bVar4 >> 6 & 1) && (bool)(bVar4 >> 7) == NAN(dVar15)) {
      dVar17 = dVar15;
    }
    if (dVar16 < dVar17) {
      *(short *)(param_1 + 0x55) = (short)param_1[0x55] + sVar9;
      sVar10 = *(short *)((int)param_1 + 0x152) + 1;
    }
    *(short *)((int)param_1 + 0x152) = sVar10;
    if ((uint)(iVar8 * sVar10) < 6) {
      if ((uint)(iVar8 * sVar11) < 0x33) {
        return uVar6;
      }
    }
    else {
      sVar2 = *(short *)(param_1[0x5e] + 0x224);
      param_1[0x5a] = 0;
      iVar12 = FUN_71ba0440((int)(short)param_1[0x55] * (int)sVar2 * 3,sVar10 * 0x28);
      if (0x31 < iVar12) {
        iVar12 = 0x32;
      }
      *(short *)(param_1 + 2) = (short)iVar12;
      if ((uint)(iVar8 * sVar11) < 0x33) goto LAB_71aefbb4;
    }
    sVar11 = 0x32;
    param_1[0x5a] = 0;
    iVar8 = (int)sVar9 * (int)*(short *)(param_1[0x5e] + 0x224) * 3;
    lVar3 = (longlong)iVar8 * 0x66666667;
    if (iVar8 < 2000) {
      sVar11 = (short)(uint)((ulonglong)lVar3 >> 0x24) - (short)(lVar3 >> 0x3f);
    }
    *(short *)(param_1 + 2) = sVar11;
  }
LAB_71aefbb4:
  if (((int)sVar5 / 0x50 & 0xffffU) != (uint)*(ushort *)(param_1 + 2)) {
    if ((int)sVar5 / 0x50 <= (int)(short)*(ushort *)(param_1 + 2)) {
      return uVar6;
    }
    iVar12 = param_1[0x5d];
    iVar8 = thunk_jIF_rFsxRUcXAJZMimpWx(iVar12);
    thunk_oIIGnLHwfeNjDQNt_n(iVar12,iVar8 + (short)param_1[2] * -0x50);
  }
  param_1[0x59] = 0;
  return uVar6;
}


// =========================================================================
// Function: XiiNazzx_OWGAGgSbrfmuaC
// Entry: 0x71aefc28 | Size: 88 bytes
// =========================================================================

undefined4 XiiNazzx_OWGAGgSbrfmuaC(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    uVar1 = 0x2ee4;
    if ((param_3 == 0x82) && (uVar1 = 0x2ee2, *(short *)(param_1 + 0x150) == 0x2a)) {
      thunk_nysihijKGeRfckzmOVCDSXsQyHEqlpDrTIypKouoILOSiEzwzIG_AKhQF
                (*(undefined4 *)(param_1 + 0x178));
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x2ee3;
}


// =========================================================================
// Function: lFssRWjscSFiABNrJgCvNjmMYphCzmM
// Entry: 0x71aefc80 | Size: 8 bytes
// =========================================================================

undefined4 lFssRWjscSFiABNrJgCvNjmMYphCzmM(void)

{
  return 0x82;
}


// =========================================================================
// Function: KuaStnWKykyKHqkCfeRquQ
// Entry: 0x71aefc88 | Size: 108 bytes
// =========================================================================

undefined4 KuaStnWKykyKHqkCfeRquQ(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    uVar1 = 0x2ee4;
    if ((param_3 == 0x82) && (uVar1 = 0x2ee2, *(short *)(param_1 + 0x150) == 0x2a)) {
      imp___aeabi_memcpy(param_2,*(undefined4 *)(*(int *)(param_1 + 0x178) + 0x3e60),0x82);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x2ee3;
}


// =========================================================================
// Function: NtkpbPFKOKocUbUiLPpBgLxexLeZwlhfppGETLKwwcbisLiTljXoGrvIU
// Entry: 0x71af0060 | Size: 80 bytes
// =========================================================================

void NtkpbPFKOKocUbUiLPpBgLxexLeZwlhfppGETLKwwcbisLiTljXoGrvIU
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3500);
  iVar1 = *piVar2 + 1;
  if (0x62 < *piVar2) {
    iVar1 = 0;
  }
  *piVar2 = iVar1;
  *(undefined4 *)(param_1 + iVar1 * 4 + 0x3504) = param_3;
  imp___aeabi_memcpy(param_1 + *piVar2 * 0x82 + 0x236,param_2,0x82);
  return;
}


// =========================================================================
// Function: KoTxjDGupbJmpnlSzNwosxNtqvNwdrCDvZNlhJSmbbsSDKpsyCbWlz
// Entry: 0x71af00b0 | Size: 52 bytes
// =========================================================================

int KoTxjDGupbJmpnlSzNwosxNtqvNwdrCDvZNlhJSmbbsSDKpsyCbWlz
              (int param_1,undefined4 *param_2,int param_3)

{
  param_3 = *(int *)(param_1 + 0x3500) - param_3;
  if (param_3 < 0) {
    param_3 = param_3 + 100;
  }
  *param_2 = *(undefined4 *)(param_1 + param_3 * 4 + 0x3504);
  return param_1 + param_3 * 0x82 + 0x236;
}


// =========================================================================
// Function: uoqaJYIPVTRtdHavCWJkxsejOFmQngZRWZs
// Entry: 0x71af00f0 | Size: 300 bytes
// =========================================================================

int uoqaJYIPVTRtdHavCWJkxsejOFmQngZRWZs(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar2 = imp_calloc(1,0x4348);
  iVar3 = thunk_R_fwzVgmQnnmLcwbqfb(0x90,2);
  *(int *)(iVar2 + 0x14) = iVar3;
  if (iVar3 != 0) {
    iVar3 = thunk_R_fwzVgmQnnmLcwbqfb(0x90,2);
    *(int *)(iVar2 + 0x18) = iVar3;
    if (iVar3 != 0) {
      iVar3 = thunk_R_fwzVgmQnnmLcwbqfb(0x90,2);
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 != 0) {
        iVar3 = thunk_R_fwzVgmQnnmLcwbqfb(0x90,2);
        *(int *)(iVar2 + 0x20) = iVar3;
        if (iVar3 != 0) {
          iVar3 = thunk_ztlWDMEGVYPtbOJEMwEZkBZgKGXoNTLtf_lJjTRDETGkLrCG(0x41,100);
          *(int *)(iVar2 + 0x22c) = iVar3;
          if (iVar3 != 0) {
            iVar3 = thunk_PDBDIIoGdcOaSbaqFmZ_bSPFPofLxHmUQdzwaKlHnvP(iVar3,0);
            *(int *)(iVar2 + 0x230) = iVar3;
            if (iVar3 != 0) {
              thunk_JVerMguVVJHwZJWAOirqHOrKjUHralOtYKREIpSerUHcPvY(iVar3,0);
              iVar3 = thunk_xbpflVuhEXMvEFXrDMC_ejW(7);
              *(int *)(iVar2 + 0x4344) = iVar3;
              if (iVar3 != 0) {
                auVar5._8_8_ = CONCAT44(iVar2,iVar2);
                auVar5._0_8_ = CONCAT44(iVar2,iVar2);
                auVar4._8_8_ = 0x3a8f0000396b;
                auVar4._0_8_ = 0x38c700003835;
                auVar5 = VectorAdd(auVar5,auVar4,4);
                auVar1._8_8_ = 0xffffffe0ffffffe0;
                auVar1._0_8_ = 0xfffffff0fffffff0;
                *(uint *)(iVar2 + 0x3e74) = iVar2 + 0x3ccfU & 0xffffffe0;
                *(uint *)(iVar2 + 0x3e78) = iVar2 + 0x3ddfU & 0xfffffff0;
                *(longlong *)(iVar2 + 0x3e60) = SUB168(auVar5 & auVar1,0);
                *(longlong *)(iVar2 + 0x3e68) = SUB168(auVar5 & auVar1,8);
                *(uint *)(iVar2 + 0x3e70) = iVar2 + 0x3bafU & 0xffffffe0;
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
  thunk_peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu(iVar2);
  return 0;
}


// =========================================================================
// Function: peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu
// Entry: 0x71af0240 | Size: 96 bytes
// =========================================================================

void peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  thunk_GWhrVLGdiDaubFvRP(*(undefined4 *)(param_1 + 0x14));
  thunk_GWhrVLGdiDaubFvRP(*(undefined4 *)(param_1 + 0x18));
  thunk_GWhrVLGdiDaubFvRP(*(undefined4 *)(param_1 + 0x1c));
  thunk_GWhrVLGdiDaubFvRP(*(undefined4 *)(param_1 + 0x20));
  thunk_UJpsLHdjkNzrlqbmCAeIyha_reSfThPxydRNYakA(*(undefined4 *)(param_1 + 0x230));
  thunk_Ae_VYRWOSIlAksVivkkfqtfOSIsuNVlKXZibszYBmLNmlO(*(undefined4 *)(param_1 + 0x22c));
  thunk_zVojLnoXltOPucjLs_Pug(*(undefined4 *)(param_1 + 0x4344));
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: nysihijKGeRfckzmOVCDSXsQyHEqlpDrTIypKouoILOSiEzwzIG_AKhQF
// Entry: 0x71af02a0 | Size: 292 bytes
// =========================================================================

void nysihijKGeRfckzmOVCDSXsQyHEqlpDrTIypKouoILOSiEzwzIG_AKhQF(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  imp___aeabi_memcpy(*(undefined4 *)(param_1 + 0x3e60),param_2,0x82);
  imp___aeabi_memcpy(*(undefined4 *)(param_1 + 0x3e64),param_2,0x82);
  pauVar2 = *(undefined1 (**) [16])(param_1 + 0x3e64);
  puVar3 = *(undefined8 **)(param_1 + 0x3e68);
  auVar7 = VectorShiftLongLeft(SUB168(*pauVar2,0),2);
  auVar8 = VectorShiftLongLeft(SUB168(*pauVar2,8),2);
  auVar9 = VectorShiftLongLeft(*(undefined8 *)pauVar2[1],2);
  uVar6 = *(undefined8 *)pauVar2[2];
  auVar5 = VectorShiftLongLeft(*(undefined8 *)(pauVar2[1] + 8),2);
  uVar4 = *(undefined8 *)(pauVar2[2] + 8);
  *puVar3 = auVar7._0_8_;
  puVar3[1] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(uVar4,2);
  puVar3[2] = auVar8._0_8_;
  puVar3[3] = auVar8._8_8_;
  auVar8 = VectorShiftLongLeft(uVar6,2);
  uVar4 = *(undefined8 *)pauVar2[3];
  puVar3[4] = auVar9._0_8_;
  puVar3[5] = auVar9._8_8_;
  puVar3[6] = auVar5._0_8_;
  puVar3[7] = auVar5._8_8_;
  auVar5 = VectorShiftLongLeft(uVar4,2);
  uVar4 = *(undefined8 *)(pauVar2[3] + 8);
  puVar3[8] = auVar8._0_8_;
  puVar3[9] = auVar8._8_8_;
  auVar8 = VectorShiftLongLeft(uVar4,2);
  puVar3[10] = auVar7._0_8_;
  puVar3[0xb] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)pauVar2[4],2);
  puVar3[0xc] = auVar5._0_8_;
  puVar3[0xd] = auVar5._8_8_;
  puVar3[0xe] = auVar8._0_8_;
  puVar3[0xf] = auVar8._8_8_;
  puVar3[0x10] = auVar7._0_8_;
  puVar3[0x11] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)(pauVar2[4] + 8),2);
  puVar3[0x12] = auVar7._0_8_;
  puVar3[0x13] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)pauVar2[5],2);
  puVar3[0x14] = auVar7._0_8_;
  puVar3[0x15] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)(pauVar2[5] + 8),2);
  puVar3[0x16] = auVar7._0_8_;
  puVar3[0x17] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)pauVar2[6],2);
  puVar3[0x18] = auVar7._0_8_;
  puVar3[0x19] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)(pauVar2[6] + 8),2);
  puVar3[0x1a] = auVar7._0_8_;
  puVar3[0x1b] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)pauVar2[7],2);
  puVar3[0x1c] = auVar7._0_8_;
  puVar3[0x1d] = auVar7._8_8_;
  auVar7 = VectorShiftLongLeft(*(undefined8 *)(pauVar2[7] + 8),2);
  uVar1 = *(ushort *)pauVar2[8];
  *(undefined2 *)(param_1 + 0x4334) = 0;
  puVar3[0x1e] = auVar7._0_8_;
  puVar3[0x1f] = auVar7._8_8_;
  *(uint *)(puVar3 + 0x20) = (uint)uVar1 << 0x10;
  *(undefined4 *)(param_1 + 0x4314) = 1000;
  *(undefined4 *)(param_1 + 0x4318) = 1000;
  *(undefined4 *)(param_1 + 0x431c) = 0x7fffffff;
  return;
}


// =========================================================================
// Function: yVVFkMGmwhPBuiceYGoAFZNJMGJXaiDsItOWjOmaWTeNLih
// Entry: 0x71af03d0 | Size: 924 bytes
// =========================================================================

undefined4 yVVFkMGmwhPBuiceYGoAFZNJMGJXaiDsItOWjOmaWTeNLih(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 == 16000 || param_2 == 8000) {
    *param_1 = 0;
    param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(ushort *)(param_1 + 0x89) = (ushort)((uint)((short)((param_2 & 0xffff) >> 6) * 0x419) >> 0x11)
    ;
    thunk_OHQmpl_xNKaRTEScf(param_1[5]);
    thunk_OHQmpl_xNKaRTEScf(param_1[6]);
    thunk_OHQmpl_xNKaRTEScf(param_1[7]);
    thunk_OHQmpl_xNKaRTEScf(param_1[8]);
    imp___aeabi_memclr4(param_1 + 0xe9c,0x3f0);
    param_1[0xda6] = 0;
    param_1[0x8a] = 0x29a;
    iVar2 = thunk_n_TzVWntZXBBkJDjXAf_bM_veQpyCEcyGiPe_FuyZbqtbI(param_1[0x8b]);
    if ((iVar2 == 0) &&
       (iVar2 = thunk_gqBtNGsIvgqbkMPvuNvAYs_crBkvdBfcZrcwmLk_(param_1[0x8c]), iVar2 == 0)) {
      imp___aeabi_memclr((int)param_1 + 0x236,13000);
      imp___aeabi_memclr4(param_1 + 0xd41,400);
      param_1[0xda5] = 0xffff0001;
      param_1[0xd40] = 100;
      imp___aeabi_memclr4(param_1 + 0xda7,0x18a);
      if (param_2 == 8000) {
        puVar5 = &DAT_70097408;
      }
      else {
        puVar5 = &DAT_70097490;
      }
      imp___aeabi_memcpy(param_1[0xf98],puVar5,0x82);
      imp___aeabi_memcpy(param_1[0xf99],puVar5,0x82);
      pauVar4 = (undefined1 (*) [16])param_1[0xf99];
      puVar3 = (undefined8 *)param_1[0xf9a];
      auVar9 = VectorShiftLongLeft(SUB168(*pauVar4,0),2);
      auVar10 = VectorShiftLongLeft(SUB168(*pauVar4,8),2);
      auVar11 = VectorShiftLongLeft(*(undefined8 *)pauVar4[1],2);
      uVar8 = *(undefined8 *)pauVar4[2];
      auVar7 = VectorShiftLongLeft(*(undefined8 *)(pauVar4[1] + 8),2);
      uVar6 = *(undefined8 *)(pauVar4[2] + 8);
      *puVar3 = auVar9._0_8_;
      puVar3[1] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(uVar6,2);
      puVar3[2] = auVar10._0_8_;
      puVar3[3] = auVar10._8_8_;
      auVar10 = VectorShiftLongLeft(uVar8,2);
      uVar6 = *(undefined8 *)pauVar4[3];
      puVar3[4] = auVar11._0_8_;
      puVar3[5] = auVar11._8_8_;
      puVar3[6] = auVar7._0_8_;
      puVar3[7] = auVar7._8_8_;
      auVar7 = VectorShiftLongLeft(uVar6,2);
      uVar6 = *(undefined8 *)(pauVar4[3] + 8);
      puVar3[8] = auVar10._0_8_;
      puVar3[9] = auVar10._8_8_;
      auVar10 = VectorShiftLongLeft(uVar6,2);
      puVar3[10] = auVar9._0_8_;
      puVar3[0xb] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)pauVar4[4],2);
      puVar3[0xc] = auVar7._0_8_;
      puVar3[0xd] = auVar7._8_8_;
      puVar3[0xe] = auVar10._0_8_;
      puVar3[0xf] = auVar10._8_8_;
      puVar3[0x10] = auVar9._0_8_;
      puVar3[0x11] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)(pauVar4[4] + 8),2);
      puVar3[0x12] = auVar9._0_8_;
      puVar3[0x13] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)pauVar4[5],2);
      puVar3[0x14] = auVar9._0_8_;
      puVar3[0x15] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)(pauVar4[5] + 8),2);
      puVar3[0x16] = auVar9._0_8_;
      puVar3[0x17] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)pauVar4[6],2);
      puVar3[0x18] = auVar9._0_8_;
      puVar3[0x19] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)(pauVar4[6] + 8),2);
      puVar3[0x1a] = auVar9._0_8_;
      puVar3[0x1b] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)pauVar4[7],2);
      puVar3[0x1c] = auVar9._0_8_;
      puVar3[0x1d] = auVar9._8_8_;
      auVar9 = VectorShiftLongLeft(*(undefined8 *)(pauVar4[7] + 8),2);
      uVar1 = *(ushort *)pauVar4[8];
      *(undefined2 *)(param_1 + 0x10cd) = 0;
      *(undefined2 *)(param_1 + 0x10c4) = 0;
      puVar3[0x1e] = auVar9._0_8_;
      puVar3[0x1f] = auVar9._8_8_;
      *(uint *)(puVar3 + 0x20) = (uint)uVar1 << 0x10;
      param_1[0x10c5] = 1000;
      param_1[0x10c6] = 1000;
      param_1[0x10c7] = 0x7fffffff;
      imp___aeabi_memclr4(param_1 + 3999,0x186);
      *(undefined2 *)((int)param_1 + 0x4312) = 1;
      imp___aeabi_memclr4(param_1 + 0x1042,0x208);
      *(undefined2 *)(param_1 + 0x10cc) = 0;
      *(undefined2 *)(param_1 + 0x10ca) = 0;
      param_1[0x10c9] = 0x4010000;
      param_1[0x10c8] = 0x80007fff;
      *(undefined8 *)(param_1 + 0x1001) = 0x10000000108100;
      *(undefined8 *)(param_1 + 0x1003) = 0xf0400000f8100;
      *(undefined8 *)(param_1 + 0x1005) = 0xe1000000e8900;
      *(undefined8 *)(param_1 + 0x1007) = 0xd2400000d9900;
      *(undefined8 *)(param_1 + 0x1009) = 0xc4000000cb100;
      *(undefined8 *)(param_1 + 0x100b) = 0xb6400000bd100;
      *(undefined8 *)(param_1 + 0x100d) = 0xa9000000af900;
      *(undefined8 *)(param_1 + 0x100f) = 0x9c400000a2900;
      *(undefined8 *)(param_1 + 0x1011) = 0x9000000096100;
      *(undefined8 *)(param_1 + 0x1013) = 0x844000008a100;
      *(undefined8 *)(param_1 + 0x1015) = 0x790000007e900;
      *(undefined8 *)(param_1 + 0x1017) = 0x6e40000073900;
      *(undefined8 *)(param_1 + 0x1019) = 0x6400000069100;
      *(undefined8 *)(param_1 + 0x101b) = 0x5a4000005f100;
      *(undefined8 *)(param_1 + 0x101d) = 0x5100000055900;
      *(undefined8 *)(param_1 + 0x101f) = 0x484000004c900;
      *(undefined8 *)(param_1 + 0x1021) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1023) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1025) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1027) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1029) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x102b) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x102d) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x102f) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1031) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1033) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1035) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1037) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x1039) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x103b) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x103d) = 0x4840000048400;
      *(undefined8 *)(param_1 + 0x103f) = 0x4840000048400;
      param_1[0x1041] = 0x48400;
      *(undefined2 *)((int)param_1 + 0x4332) = 0;
      param_1[0x10cb] = 0;
      *(undefined4 *)((int)param_1 + 0x4336) = 0x1000100;
      param_1[4] = 1;
      *(undefined4 *)((int)param_1 + 0x433a) = 0x1000c00;
      *(undefined4 *)((int)param_1 + 0x433e) = 0x5000600;
      DAT_712048e8 = FUN_71af0820;
      DAT_712048ec = FUN_71af0898;
      DAT_712048f0 = FUN_71af0934;
      return 0;
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: FUN_71af0820
// Entry: 0x71af0820 | Size: 120 bytes
// =========================================================================

void FUN_71af0820(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x3e60);
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x3e64);
  do {
    uVar5 = (uint)*(ushort *)(param_2 + iVar4);
    sVar2 = *(short *)(iVar3 + iVar4);
    *(uint *)(param_3 + iVar4 * 2) = uVar5 * (int)*(short *)(iVar6 + iVar4);
    *param_4 = *param_4 + uVar5;
    *param_5 = (int)sVar2 * uVar5 + *param_5;
    iVar1 = iVar4 * 2;
    iVar4 = iVar4 + 2;
    *param_6 = *param_6 + *(int *)(param_3 + iVar1);
  } while (iVar4 != 0x82);
  return;
}


// =========================================================================
// Function: FUN_71af0898
// Entry: 0x71af0898 | Size: 156 bytes
// =========================================================================

void FUN_71af0898(int param_1,int param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 in_q10 [16];
  undefined1 in_q11 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  imp___aeabi_memcpy(*(int *)(param_1 + 0x3e60),*(undefined4 *)(param_1 + 0x3e64),0x82);
  iVar9 = *(int *)(param_1 + 0x3e60);
  iVar10 = 0;
  puVar12 = param_3;
  do {
    puVar11 = (undefined2 *)(iVar9 + iVar10);
    puVar1 = (undefined2 *)0x378;
    puVar2 = (undefined2 *)0x380;
    puVar3 = (undefined2 *)0x388;
    puVar4 = (undefined2 *)0x390;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar3 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar4 = *puVar11;
      puVar11 = puVar11 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar11 = (undefined2 *)(param_2 + iVar10);
    iVar10 = iVar10 + 0x20;
    uVar13 = iVar10 == 0x80;
    auVar16 = VectorCopyLong(in_q8._8_8_,2,0);
    puVar1 = (undefined2 *)0x398;
    puVar2 = (undefined2 *)0x3a0;
    puVar3 = (undefined2 *)0x3a8;
    puVar4 = (undefined2 *)0x3b0;
    lVar15 = 4;
    while( true ) {
      *puVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar3 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar4 = *puVar11;
      puVar11 = puVar11 + 1;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    auVar18 = VectorCopyLong(in_q9._8_8_,2,0);
    auVar20 = VectorCopyLong(in_q9._0_8_,2,0);
    in_q8 = VectorCopyLong(in_q8._0_8_,2,0);
    auVar17 = VectorCopyLong(in_q10._8_8_,2,1);
    auVar19 = VectorCopyLong(in_q11._8_8_,2,1);
    auVar21 = VectorCopyLong(in_q11._0_8_,2,1);
    in_q9 = VectorCopyLong(in_q10._0_8_,2,1);
    VectorMultiply(auVar19,auVar18,4);
    VectorMultiply(auVar21,auVar20,4);
    in_q11 = VectorMultiply(auVar17,auVar16,4);
    in_q10 = VectorMultiply(in_q9,in_q8,4);
    puVar5 = (undefined4 *)0x390;
    puVar6 = (undefined4 *)0x3a0;
    puVar7 = (undefined4 *)0x3b0;
    puVar8 = (undefined4 *)0x3c0;
    lVar15 = 2;
    puVar14 = param_3;
    while( true ) {
      *puVar14 = *puVar5;
      puVar14[1] = *puVar6;
      puVar14[2] = *puVar7;
      puVar14[3] = *puVar8;
      puVar14 = puVar14 + 4;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar14 = param_3 + 8;
    puVar5 = (undefined4 *)0x398;
    puVar6 = (undefined4 *)0x3a8;
    puVar7 = (undefined4 *)0x3b8;
    puVar8 = (undefined4 *)0x3c8;
    lVar15 = 2;
    while( true ) {
      *puVar14 = *puVar5;
      puVar14[1] = *puVar6;
      puVar14[2] = *puVar7;
      puVar14[3] = *puVar8;
      puVar14 = puVar14 + 4;
      lVar15 = lVar15 + -1;
      if (lVar15 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    param_3 = param_3 + 0x10;
  } while (!(bool)uVar13);
  puVar12[0x40] = (uint)*(ushort *)(param_2 + 0x80) * (int)*(short *)(iVar9 + 0x80);
  return;
}


// =========================================================================
// Function: FUN_71af0934
// Entry: 0x71af0934 | Size: 108 bytes
// =========================================================================

void FUN_71af0934(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  
  imp___aeabi_memcpy(*(undefined4 *)(param_1 + 0x3e64),*(int *)(param_1 + 0x3e60),0x82);
  puVar9 = *(undefined4 **)(param_1 + 0x3e68);
  iVar11 = 0;
  iVar10 = *(int *)(param_1 + 0x3e60);
  puVar12 = puVar9;
  do {
    puVar13 = (undefined2 *)(iVar10 + iVar11);
    iVar11 = iVar11 + 0x20;
    uVar14 = iVar11 == 0x80;
    puVar1 = (undefined2 *)0x378;
    puVar2 = (undefined2 *)0x380;
    puVar3 = (undefined2 *)0x388;
    puVar4 = (undefined2 *)0x390;
    lVar16 = 4;
    while( true ) {
      *puVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar2 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar3 = *puVar13;
      puVar13 = puVar13 + 1;
      *puVar4 = *puVar13;
      puVar13 = puVar13 + 1;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    VectorShiftLongLeft(in_d19,2);
    VectorShiftLongLeft(in_d18,2);
    VectorShiftLongLeft(in_d17,2);
    VectorShiftLongLeft(in_d16,2);
    puVar5 = (undefined4 *)0x390;
    puVar6 = (undefined4 *)0x3a0;
    puVar7 = (undefined4 *)0x3b0;
    puVar8 = (undefined4 *)0x3c0;
    lVar16 = 2;
    puVar15 = puVar12;
    while( true ) {
      *puVar15 = *puVar5;
      puVar15[1] = *puVar6;
      puVar15[2] = *puVar7;
      puVar15[3] = *puVar8;
      puVar15 = puVar15 + 4;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar15 = puVar12 + 8;
    puVar5 = (undefined4 *)0x398;
    puVar6 = (undefined4 *)0x3a8;
    puVar7 = (undefined4 *)0x3b8;
    puVar8 = (undefined4 *)0x3c8;
    lVar16 = 2;
    while( true ) {
      *puVar15 = *puVar5;
      puVar15[1] = *puVar6;
      puVar15[2] = *puVar7;
      puVar15[3] = *puVar8;
      puVar15 = puVar15 + 4;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar12 = puVar12 + 0x10;
  } while (!(bool)uVar14);
  puVar9[0x40] = (uint)*(ushort *)(iVar10 + 0x80) << 0x10;
  return;
}


// =========================================================================
// Function: OWosloOq_XJAshHtoaVIceCwjMsWRxhllxyEDtUFaNKsdtR
// Entry: 0x71af09a0 | Size: 20 bytes
// =========================================================================

undefined4
OWosloOq_XJAshHtoaVIceCwjMsWRxhllxyEDtUFaNKsdtR(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x3694) = param_3;
  *(undefined2 *)(param_1 + 0x3696) = param_2;
  return 0;
}


// =========================================================================
// Function: SckceUsJuCQIZBAqLOPJJoIQGPNuuCiquG_OZKZaArJAlUCyOUfhGbfhglSYj
// Entry: 0x71af09b4 | Size: 884 bytes
// =========================================================================

undefined4
SckceUsJuCQIZBAqLOPJJoIQGPNuuCiquG_OZKZaArJAlUCyOUfhGbfhglSYj
          (int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uStack_2e8;
  undefined1 auStack_2e4 [128];
  undefined4 uStack_264;
  undefined1 auStack_260 [128];
  undefined4 uStack_1e0;
  undefined1 auStack_1dc [128];
  int iStack_15c;
  undefined1 auStack_158 [168];
  undefined1 auStack_b0 [140];
  
  iVar1 = *param_1;
  piVar5 = param_1 + 9;
  iVar3 = 0;
  uVar4 = 0x50;
  iStack_15c = 0;
  if (0xb0 < iVar1) {
    iVar3 = 0x100 - iVar1;
    imp___aeabi_memcpy((int)piVar5 + iVar1 * 2,param_2,iVar3 * 2);
    uVar4 = iVar1 - 0xb0;
    iVar1 = 0;
    *param_1 = 0;
    if (0x100 < uVar4) {
      imp___aeabi_memcpy(piVar5,param_2 + iVar3 * 2,0x200);
      iVar3 = 0x100;
      uVar4 = 0xffffff50;
    }
  }
  imp___aeabi_memcpy((int)piVar5 + iVar1 * 2,param_2 + iVar3 * 2,uVar4 << 1);
  iVar1 = param_1[2];
  *param_1 = *param_1 + uVar4;
  iVar3 = param_1[1] + param_1[3];
  uVar4 = (param_1[3] - iVar1) + param_1[1];
  iVar3 = ((iVar1 - iVar3) + (uVar4 & ~((int)uVar4 >> 0x1f)) + 0xff & 0xffffff00) + iVar3;
  uVar4 = iVar3 - iVar1;
  if (0xff < (int)uVar4) {
    uVar2 = 0x1ff;
    if (uVar4 < 0x1ff) {
      uVar2 = uVar4;
    }
    uVar4 = (iVar3 - (iVar1 + ((iVar3 - (iVar1 + uVar2)) + 0xff & 0xffffff00))) - 0x100;
  }
  param_1[3] = iVar1;
  param_1[1] = uVar4;
  if ((int)uVar4 < 0xb1) {
    uVar2 = 0x50;
    iVar1 = 0;
  }
  else {
    iVar1 = 0x100 - uVar4;
    imp___aeabi_memcpy(auStack_158,(int)piVar5 + uVar4 * 2,iVar1 * 2);
    uVar2 = uVar4 - 0xb0;
    param_1[1] = 0;
    if (0x100 < uVar2) {
      imp___aeabi_memcpy(auStack_158 + iVar1 * 2,piVar5,0x200);
      uVar2 = 0xffffff50;
      iVar1 = 0x100;
    }
    uVar4 = 0;
  }
  imp___aeabi_memcpy(auStack_158 + iVar1 * 2,(int)piVar5 + uVar4 * 2,uVar2 << 1);
  param_1[1] = uVar4 + uVar2;
  thunk_KgAagMwhAiXMQh_cSx(param_1[5],auStack_158,0x50);
  thunk_KgAagMwhAiXMQh_cSx(param_1[6],param_3,0x50);
  if (param_4 == 0) {
    uVar4 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[5]);
    if (0x3f < uVar4) {
      do {
        uStack_1e0 = 0;
        uStack_264 = 0;
        thunk_KsWjkINgBphTWXrQT(param_1[5],&uStack_1e0,auStack_1dc,0x40);
        thunk_KsWjkINgBphTWXrQT(param_1[6],&uStack_264,auStack_260,0x40);
        iVar1 = thunk_vcW_FxvvqQjFWNVGeshypOggJHHFXTRgTrwyQgyqANNPSqaEQ_mcLZkNDKQio
                          (param_1,uStack_1e0,uStack_264,0,auStack_b0);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        thunk_KgAagMwhAiXMQh_cSx(param_1[8],auStack_b0,0x40);
        uVar4 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[5]);
      } while (0x3f < uVar4);
    }
  }
  else {
    thunk_KgAagMwhAiXMQh_cSx(param_1[7],param_4,0x50);
    uVar4 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[5]);
    if (0x3f < uVar4) {
      do {
        uStack_1e0 = 0;
        uStack_264 = 0;
        thunk_KsWjkINgBphTWXrQT(param_1[5],&uStack_1e0,auStack_1dc,0x40);
        thunk_KsWjkINgBphTWXrQT(param_1[6],&uStack_264,auStack_260,0x40);
        uStack_2e8 = 0;
        thunk_KsWjkINgBphTWXrQT(param_1[7],&uStack_2e8,auStack_2e4,0x40);
        iVar1 = thunk_vcW_FxvvqQjFWNVGeshypOggJHHFXTRgTrwyQgyqANNPSqaEQ_mcLZkNDKQio
                          (param_1,uStack_1e0,uStack_264,uStack_2e8,auStack_b0);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        thunk_KgAagMwhAiXMQh_cSx(param_1[8],auStack_b0,0x40);
        uVar4 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[5]);
      } while (0x3f < uVar4);
    }
  }
  iVar1 = thunk_jIF_rFsxRUcXAJZMimpWx(param_1[8]);
  if (iVar1 < 0x50) {
    thunk_oIIGnLHwfeNjDQNt_n(param_1[8],iVar1 + -0x50);
  }
  thunk_KsWjkINgBphTWXrQT(param_1[8],&iStack_15c,param_5,0x50);
  if (iStack_15c != param_5) {
    imp___aeabi_memcpy(param_5,iStack_15c,0xa0);
  }
  return 0;
}


// =========================================================================
// Function: NIOyBaQrmabrmRMgpTXhKQPVjSgvEbmNuhV_GpkrsrsyV_IcdnPRlzpH
// Entry: 0x71af0d28 | Size: 188 bytes
// =========================================================================

void NIOyBaQrmabrmRMgpTXhKQPVjSgvEbmNuhV_GpkrsrsyV_IcdnPRlzpH(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *param_1;
  iVar2 = 0;
  iVar1 = param_3;
  if (0x100 < iVar3 + param_3) {
    piVar4 = param_1 + 9;
    iVar2 = 0x100 - iVar3;
    imp___aeabi_memcpy((int)piVar4 + iVar3 * 2,param_2,iVar2 * 2);
    iVar1 = param_3 - iVar2;
    iVar3 = 0;
    *param_1 = 0;
    if (0x100 < iVar1) {
      imp___aeabi_memcpy(piVar4,param_2 + iVar2 * 2,0x200);
      if (0x200 < param_3) {
        do {
          imp___aeabi_memcpy(piVar4,param_2 + 0x200,0x200);
          *param_1 = 0;
        } while( true );
      }
      iVar1 = param_3 + -0x100;
      iVar2 = 0x100;
    }
  }
  imp___aeabi_memcpy((int)param_1 + iVar3 * 2 + 0x24,param_2 + iVar2 * 2,iVar1 << 1);
  *param_1 = *param_1 + iVar1;
  return;
}


// =========================================================================
// Function: dzCLX_ZwxQfikQ_eIalFbnhWGyPrxiYXYEoGueGiShyYTEllNAWDIEg
// Entry: 0x71af0de4 | Size: 300 bytes
// =========================================================================

void dzCLX_ZwxQfikQ_eIalFbnhWGyPrxiYXYEoGueGiShyYTEllNAWDIEg
               (int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (*(int *)(param_1 + 0xc) - param_4) + *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
  iVar1 = iVar1 + ((((uVar3 & ~((int)uVar3 >> 0x1f)) + param_4) - iVar1) + 0xff & 0xffffff00);
  uVar3 = iVar1 - param_4;
  if (0xff < (int)uVar3) {
    uVar2 = 0x1ff;
    if (uVar3 < 0x1ff) {
      uVar2 = uVar3;
    }
    uVar3 = (iVar1 - (((iVar1 - (uVar2 + param_4)) + 0xff & 0xffffff00) + param_4)) - 0x100;
  }
  iVar4 = 0;
  *(int *)(param_1 + 0xc) = param_4;
  *(uint *)(param_1 + 4) = uVar3;
  iVar1 = param_3;
  if (0x100 < (int)(uVar3 + param_3)) {
    iVar5 = param_1 + 0x24;
    iVar4 = 0x100 - uVar3;
    imp___aeabi_memcpy(param_2,iVar5 + uVar3 * 2,iVar4 * 2);
    uVar3 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = param_3 - iVar4;
    if (0x100 < param_3 - iVar4) {
      imp___aeabi_memcpy(param_2 + iVar4 * 2,iVar5,0x200);
      uVar3 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      if (0x200 < param_3) {
        do {
          imp___aeabi_memcpy(param_2 + 0x200,iVar5,0x200);
          *(undefined4 *)(param_1 + 4) = 0;
        } while( true );
      }
      iVar4 = 0x100;
      iVar1 = param_3 + -0x100;
    }
  }
  imp___aeabi_memcpy(param_2 + iVar4 * 2,param_1 + uVar3 * 2 + 0x24,iVar1 << 1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  return;
}


// =========================================================================
// Function: zrbOjBybLBRzkPzYwc_rJLiPYi_PpyApunwE
// Entry: 0x71af0f10 | Size: 56 bytes
// =========================================================================

int zrbOjBybLBRzkPzYwc_rJLiPYi_PpyApunwE(int param_1,int param_2,uint param_3,uint param_4)

{
  if (1 < (param_1 - 0x7fffU & 0xffff)) {
    if (param_2 < param_1) {
      return (int)(short)((short)param_1 - (short)(param_1 - param_2 >> (param_4 & 0xff)));
    }
    param_2 = param_1 + (param_2 - param_1 >> (param_3 & 0xff));
  }
  return (int)(short)param_2;
}


// =========================================================================
// Function: AhJ_TeMMvhwbXjUNIqCgFPWJsPnjSyCigMDEHOaBQQbmqsGCQcHqDNZdI
// Entry: 0x71af0f48 | Size: 1040 bytes
// =========================================================================

void AhJ_TeMMvhwbXjUNIqCgFPWJsPnjSyCigMDEHOaBQQbmqsGCQcHqDNZdI
               (int param_1,undefined4 param_2,short param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  undefined1 auVar13 [16];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  imp___aeabi_memmove(param_1 + 0x36a6,(short *)(param_1 + 0x36a4),0x7e);
  sVar11 = 0x380;
  sVar1 = 0x380;
  if (param_4 != 0) {
    sVar1 = ((ushort)((uint)(param_4 << (int)(short)LZCOUNT(param_4)) >> 0x17) | 0x1f00) +
            (*(short *)(param_1 + 0x36a0) + (short)LZCOUNT(param_4)) * -0x100 + 0x380;
  }
  *(short *)(param_1 + 0x36a4) = sVar1;
  (*DAT_712048e8)(param_1,param_2,param_5,&iStack_30,&iStack_28,&iStack_2c);
  psVar9 = (short *)(param_1 + 0x3726);
  imp___aeabi_memmove(param_1 + 0x3728,psVar9,0x7e);
  imp___aeabi_memmove(param_1 + 0x37a8,(short *)(param_1 + 0x37a6),0x7e);
  if (iStack_30 != 0) {
    sVar11 = ((ushort)((uint)(iStack_30 << (int)(short)LZCOUNT(iStack_30)) >> 0x17) | 0x1f00) +
             ((short)LZCOUNT(iStack_30) + param_3) * -0x100 + 0x380;
  }
  sVar1 = 0x380;
  sVar5 = 0x380;
  *(short *)(param_1 + 0x3724) = sVar11;
  if (iStack_28 != 0) {
    sVar5 = ((ushort)((uint)(iStack_28 << (int)(short)LZCOUNT(iStack_28)) >> 0x17) | 0x1f00) +
            ((short)LZCOUNT(iStack_28) + param_3 + 0xc) * -0x100 + 0x380;
  }
  *psVar9 = sVar5;
  if (iStack_2c != 0) {
    sVar1 = ((ushort)((uint)(iStack_2c << (int)(short)LZCOUNT(iStack_2c)) >> 0x17) | 0x1f00) +
            ((short)LZCOUNT(iStack_2c) + param_3 + 0xc) * -0x100 + 0x380;
  }
  sVar11 = *(short *)(param_1 + 0x3724);
  iVar2 = (int)sVar11;
  *(short *)(param_1 + 0x37a6) = sVar1;
  if (iVar2 < 0x402) {
    sVar1 = *(short *)(param_1 + 0x4326);
  }
  else {
    iVar8 = (int)*(short *)(param_1 + 0x4320);
    iVar10 = 3;
    iVar4 = 0xb;
    iVar12 = 4;
    if (*(short *)(param_1 + 0x4332) == 0) {
      iVar10 = 2;
      iVar4 = 8;
      iVar12 = 2;
    }
    iVar6 = iVar2;
    if (1 < (iVar8 - 0x7fffU & 0xffff)) {
      if (iVar2 < iVar8) {
        iVar6 = iVar8 - (iVar8 - iVar2 >> iVar10);
      }
      else {
        iVar6 = iVar8 + (iVar2 - iVar8 >> iVar4);
      }
    }
    sVar5 = *(short *)(param_1 + 0x4322);
    iVar4 = (int)sVar5;
    sVar1 = (short)iVar6;
    *(short *)(param_1 + 0x4320) = sVar1;
    if (1 < (iVar4 - 0x7fffU & 0xffff)) {
      if (iVar2 < iVar4) {
        sVar11 = sVar5 - (short)((uint)(iVar4 - iVar2) >> 0xb);
      }
      else {
        sVar11 = sVar5 + (short)(iVar2 - iVar4 >> iVar12);
      }
    }
    iVar4 = 0xe6;
    psVar7 = (short *)(param_1 + 0x4330);
    *(short *)(param_1 + 0x4322) = sVar11;
    *(short *)(param_1 + 0x4324) = sVar11 - sVar1;
    if (0 < (short)(0xa00U - iVar6)) {
      iVar4 = ((0xa00U - iVar6 & 0xffff) * 0xe6 >> 9) + 0xe6;
    }
    if ((*(short *)(param_1 + 0x4332) == 0) || (0x400 < *psVar7)) {
      sVar1 = sVar1 + (short)iVar4;
      *(short *)(param_1 + 0x4326) = sVar1;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x4326);
      if (iVar2 < sVar1) {
        *psVar7 = 0;
        sVar1 = sVar1 + (short)((uint)((iVar4 + iVar2) - (int)sVar1) >> 6);
        *(short *)(param_1 + 0x4326) = sVar1;
      }
      else {
        *psVar7 = *psVar7 + 1;
      }
    }
    *(short *)(param_1 + 0x4328) = sVar1 + 0x100;
  }
  if (iVar2 <= sVar1) {
    *(undefined4 *)(param_1 + 0x432c) = 0;
    return;
  }
  if ((*(short *)(param_1 + 0x4332) == 0) || (0x3a1 < *(short *)(param_1 + 0x4324))) {
    *(undefined4 *)(param_1 + 0x432c) = 1;
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    if (*(int *)(param_1 + 0x432c) == 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if ((iVar2 != 0) && (*(undefined4 *)(param_1 + 0x10) = 0, *(short *)(param_1 + 0x36a4) < *psVar9))
  {
    pauVar3 = *(undefined1 (**) [16])(param_1 + 0x3e64);
    auVar13 = VectorShiftRight(*pauVar3,3);
    *(longlong *)*pauVar3 = auVar13._0_8_;
    *(longlong *)(*pauVar3 + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[1],3);
    *(longlong *)pauVar3[1] = auVar13._0_8_;
    *(longlong *)(pauVar3[1] + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[2],3);
    *(longlong *)pauVar3[2] = auVar13._0_8_;
    *(longlong *)(pauVar3[2] + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[3],3);
    *(longlong *)pauVar3[3] = auVar13._0_8_;
    *(longlong *)(pauVar3[3] + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[4],3);
    *(longlong *)pauVar3[4] = auVar13._0_8_;
    *(longlong *)(pauVar3[4] + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[5],3);
    *(longlong *)pauVar3[5] = auVar13._0_8_;
    *(longlong *)(pauVar3[5] + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[6],3);
    *(longlong *)pauVar3[6] = auVar13._0_8_;
    *(longlong *)(pauVar3[6] + 8) = auVar13._8_8_;
    auVar13 = VectorShiftRight(pauVar3[7],3);
    *(longlong *)pauVar3[7] = auVar13._0_8_;
    *(longlong *)(pauVar3[7] + 8) = auVar13._8_8_;
    *(short *)pauVar3[8] = (short)((uint)(int)*(short *)pauVar3[8] >> 3);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(short *)(param_1 + 0x3726) = *(short *)(param_1 + 0x3726) + -0x300;
    return;
  }
  return;
}


// =========================================================================
// Function: TmZHOPIjupcXgPXmBAlMtTYtENeymQLiWvjldieADGXVOTupVJ
// Entry: 0x71af135c | Size: 144 bytes
// =========================================================================

int TmZHOPIjupcXgPXmBAlMtTYtENeymQLiWvjldieADGXVOTupVJ(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x432c) == 0) {
    return 0;
  }
  if (0 < *(short *)(param_1 + 0x4332)) {
    sVar1 = 10;
    if (*(short *)(param_1 + 0x4320) < *(short *)(param_1 + 0x4322)) {
      sVar1 = thunk_gbixOGWOrZftdbaKPhf
                        ((short)(*(short *)(param_1 + 0x3724) - *(short *)(param_1 + 0x4320)) * 9,
                         (int)*(short *)(param_1 + 0x4324));
      sVar1 = 9 - sVar1;
    }
    if (sVar1 < 2) {
      sVar1 = 1;
    }
    return (int)sVar1;
  }
  return 1;
}


// =========================================================================
// Function: kuXYTPXwSvBLqzVbzrQzWfUsUEmv_Ofqk_uScAtCRasbsIwnfoahWeFZ_Ekjw
// Entry: 0x71af13ec | Size: 1424 bytes
// =========================================================================

void kuXYTPXwSvBLqzVbzrQzWfUsUEmv_Ofqk_uScAtCRasbsIwnfoahWeFZ_Ekjw
               (int param_1,int param_2,uint param_3,int param_4,int param_5,undefined4 param_6)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short *psVar14;
  int iVar15;
  ushort *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  if (param_5 != 0) {
    iVar15 = 0;
    sVar13 = 0;
    do {
      sVar8 = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x3e68) + iVar15 * 2);
      if (iVar3 != 0) {
        sVar8 = (short)LZCOUNT(iVar3);
      }
      puVar16 = (ushort *)(param_2 + iVar15);
      if (*puVar16 == 0) {
        sVar2 = 0;
      }
      else {
        sVar2 = (short)LZCOUNT((uint)*puVar16);
      }
      if ((uint)((int)sVar2 + (int)sVar8) < 0x20) {
        sVar8 = 0x20 - (sVar8 + sVar2);
        iVar3 = 0;
        if (sVar8 < 0x20) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x3e68) + iVar15 * 2) >> ((int)sVar8 & 0xffU);
        }
      }
      else {
        sVar8 = 0;
        iVar3 = *(int *)(*(int *)(param_1 + 0x3e68) + iVar15 * 2);
      }
      uVar9 = iVar3 * (uint)*puVar16;
      if (uVar9 == 0) {
        sVar11 = 0;
      }
      else {
        sVar11 = (short)LZCOUNT(uVar9);
      }
      uVar6 = (uint)*(ushort *)(param_4 + iVar15);
      if (uVar6 == 0) {
        sVar5 = 0x20;
      }
      else {
        sVar5 = (short)LZCOUNT(uVar6);
      }
      sVar5 = sVar5 + -2;
      sVar12 = (sVar8 - (short)param_3) + *(short *)(param_1 + 0x36a0) + sVar5 + -0x1c;
      uVar6 = (uint)sVar12;
      if ((int)sVar11 <= (int)(uVar6 + 1)) {
        sVar12 = sVar11 + -2;
        uVar6 = (uint)sVar12;
        sVar5 = ((short)param_3 + 0x1c + sVar12) - (sVar8 + *(short *)(param_1 + 0x36a0));
      }
      uVar1 = *(ushort *)(param_4 + iVar15);
      uVar7 = (uint)sVar5;
      uVar10 = (uint)uVar1 << (uVar7 & 0xff);
      if ((int)uVar7 < 0) {
        uVar10 = (uint)(uVar1 >> (-uVar7 & 0xff));
      }
      uVar7 = uVar9 << (uVar6 & 0xff);
      if (sVar12 < 0) {
        uVar7 = uVar9 >> (-uVar6 & 0xff);
      }
      uVar10 = uVar10 - uVar7;
      if (uVar10 != 0) {
        uVar9 = (uint)*puVar16;
        if (0x10 << (param_3 & 0xff) < (int)uVar9) {
          iVar3 = (int)sVar2 + (LZCOUNT(uVar10 ^ (int)uVar10 >> 0x1f) * 0x10000 + -0x10000 >> 0x10);
          if (iVar3 < 0x20) {
            uVar6 = 0x20 - iVar3;
            sVar11 = (short)uVar6;
            if ((int)uVar10 < 1) {
              iVar3 = -((-uVar10 >> (uVar6 & 0xff)) * uVar9);
            }
            else {
              iVar3 = (uVar10 >> (uVar6 & 0xff)) * uVar9;
            }
          }
          else {
            iVar3 = uVar10 * uVar9;
            sVar11 = 0;
          }
          uVar9 = thunk_gbixOGWOrZftdbaKPhf(iVar3,(int)(short)(sVar13 + 1));
          if (uVar9 == 0) {
            sVar5 = 0;
          }
          else {
            sVar5 = (short)LZCOUNT(uVar9 ^ (int)uVar9 >> 0x1f) + -1;
          }
          iVar3 = 0x7fffffff;
          uVar6 = (uint)(short)((((sVar2 * 2 - (short)param_5) + sVar8) - sVar12) + sVar11 + -0x3c);
          if ((int)uVar6 <= (int)sVar5) {
            iVar3 = uVar9 << (uVar6 & 0xff);
            if ((int)uVar6 < 0) {
              iVar3 = (int)uVar9 >> (-uVar6 & 0xff);
            }
          }
          uVar9 = SignedSaturate(*(int *)(*(int *)(param_1 + 0x3e68) + iVar15 * 2) + iVar3,0x20);
          SignedDoesSaturate(uVar9,0x20);
          uVar9 = uVar9 & ~((int)uVar9 >> 0x1f);
          *(uint *)(*(int *)(param_1 + 0x3e68) + iVar15 * 2) = uVar9;
          *(short *)(*(int *)(param_1 + 0x3e64) + iVar15) = (short)(uVar9 >> 0x10);
        }
      }
      iVar15 = iVar15 + 2;
      sVar13 = sVar13 + 1;
    } while (iVar15 != 0x82);
  }
  if ((*(short *)(param_1 + 0x4332) == 0) && ((*(uint *)(param_1 + 0x432c) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x71af16e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_712048ec)(param_1,param_2,param_6);
    return;
  }
  psVar14 = (short *)(param_1 + 0x4334);
  if (*(short *)(param_1 + 0x3724) < *(short *)(param_1 + 0x4328)) {
    *psVar14 = 0;
    return;
  }
  sVar13 = *psVar14;
  *psVar14 = sVar13 + 1;
  if (0x1d < (short)(sVar13 + 1)) {
    auVar22 = VectorCopyLong(*(undefined8 *)(param_1 + 0x3726),2,0);
    auVar21 = VectorCopyLong(*(undefined8 *)(param_1 + 0x36ac),2,0);
    auVar18 = VectorCopyLong(*(undefined8 *)(param_1 + 0x36a4),2,0);
    auVar26 = VectorCopyLong(*(undefined8 *)(param_1 + 0x372e),2,0);
    auVar19 = VectorCopyLong(*(undefined8 *)(param_1 + 0x36bc),2,0);
    auVar24 = VectorCopyLong(*(undefined8 *)(param_1 + 0x3736),2,0);
    auVar22 = VectorSub(auVar22,auVar18,4);
    auVar27 = VectorSub(auVar26,auVar21,4);
    auVar26 = VectorCopyLong(*(undefined8 *)(param_1 + 0x36b4),2,0);
    auVar23 = VectorAbsolute(auVar22,4);
    auVar28 = VectorAbsolute(auVar27,4);
    auVar22 = VectorCopyLong(*(undefined8 *)(param_1 + 0x37ae),2,0);
    auVar27 = VectorSub(auVar24,auVar26,4);
    auVar24 = VectorCopyLong(*(undefined8 *)(param_1 + 0x373e),2,0);
    auVar28 = VectorAdd(auVar28,auVar23,4);
    auVar25 = VectorAbsolute(auVar27,4);
    auVar27 = VectorSub(auVar22,auVar21,4);
    auVar21 = VectorCopyLong(CONCAT44(*(undefined4 *)(param_1 + 0x36c8),
                                      *(undefined4 *)(param_1 + 0x36c4)),2,0);
    auVar22 = VectorCopyLong(*(undefined8 *)(param_1 + 0x3746),2,0);
    auVar23 = VectorSub(auVar24,auVar19,4);
    auVar28 = VectorAdd(auVar25,auVar28,4);
    auVar24 = VectorCopyLong(*(undefined8 *)(param_1 + 0x37b6),2,0);
    auVar25 = VectorCopyLong(*(undefined8 *)(param_1 + 0x37a6),2,0);
    auVar23 = VectorAbsolute(auVar23,4);
    auVar22 = VectorSub(auVar22,auVar21,4);
    auVar18 = VectorSub(auVar25,auVar18,4);
    auVar25 = VectorCopyLong(*(undefined8 *)(param_1 + 0x37be),2,0);
    auVar26 = VectorSub(auVar24,auVar26,4);
    auVar27 = VectorAbsolute(auVar27,4);
    auVar24 = VectorAbsolute(auVar18,4);
    auVar23 = VectorAdd(auVar23,auVar28,4);
    auVar22 = VectorAbsolute(auVar22,4);
    auVar28 = VectorCopyLong(*(undefined8 *)(param_1 + 0x37c6),2,0);
    auVar18 = VectorSub(auVar25,auVar19,4);
    auVar19 = VectorAbsolute(auVar26,4);
    auVar24 = VectorAdd(auVar27,auVar24,4);
    auVar26 = VectorAdd(auVar22,auVar23,4);
    auVar18 = VectorAbsolute(auVar18,4);
    auVar21 = VectorSub(auVar28,auVar21,4);
    auVar22 = VectorAdd(auVar19,auVar24,4);
    uVar20 = VectorAdd(auVar26._0_8_,auVar26._8_8_,4);
    auVar24 = VectorAbsolute(auVar21,4);
    auVar22 = VectorAdd(auVar18,auVar22,4);
    auVar22 = VectorAdd(auVar24,auVar22,4);
    uVar17 = VectorAdd(auVar22._0_8_,auVar22._8_8_,4);
    iVar15 = (int)uVar20 + (int)((ulonglong)uVar20 >> 0x20);
    iVar3 = (int)uVar17 + (int)((ulonglong)uVar17 >> 0x20);
    if ((iVar15 * 0x1d + iVar3 * -0x20 == 0 || iVar15 * 0x1d < iVar3 * 0x20) ||
       (*(int *)(param_1 + 0x4314) * 0x1d <= *(int *)(param_1 + 0x4318) * 0x20)) {
      if ((*(int *)(param_1 + 0x4314) < *(int *)(param_1 + 0x431c)) &&
         ((iVar3 * 0x1d + iVar15 * -0x20 != 0 && iVar15 * 0x20 <= iVar3 * 0x1d &&
          (iVar15 < *(int *)(param_1 + 0x431c))))) {
        (*DAT_712048ec)(param_1,param_2,param_6);
        iVar4 = *(int *)(param_1 + 0x431c);
        if (iVar4 == 0x7fffffff) {
          iVar4 = *(int *)(param_1 + 0x4314) + iVar15;
        }
        else {
          iVar4 = iVar4 + ((iVar15 - ((int)(iVar4 * 5 + ((uint)(iVar4 * 5 >> 0x1f) >> 0x1d)) >> 3))
                           * 0xcd >> 8);
        }
        *(int *)(param_1 + 0x431c) = iVar4;
      }
    }
    else {
      (*DAT_712048f0)(param_1);
    }
    *(int *)(param_1 + 0x4314) = iVar15;
    *psVar14 = 0;
    *(int *)(param_1 + 0x4318) = iVar3;
  }
  return;
}


// =========================================================================
// Function: ZT_kCQrnJlODLRTASNSabIupMRgbeZQeFLXLPjbkfcoHwzKAbbMtAdsss
// Entry: 0x71af1988 | Size: 228 bytes
// =========================================================================

int ZT_kCQrnJlODLRTASNSabIupMRgbeZQeFLXLPjbkfcoHwzKAbbMtAdsss(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x432c) == 0) {
    sVar3 = 0;
  }
  else {
    uVar2 = *(short *)(param_1 + 0x36a4) - *(short *)(param_1 + 0x37a6);
    uVar1 = (short)uVar2 >> 0xf;
    sVar3 = (uVar2 ^ uVar1) - uVar1;
    iVar4 = (int)sVar3;
    if (iVar4 < 400) {
      if (iVar4 < 200) {
        sVar3 = thunk_gbixOGWOrZftdbaKPhf((int)*(short *)(param_1 + 0x433e) * (int)sVar3 + 100,200);
        sVar3 = *(short *)(param_1 + 0x433a) - sVar3;
      }
      else {
        sVar3 = thunk_gbixOGWOrZftdbaKPhf
                          ((400 - iVar4) * (int)*(short *)(param_1 + 0x4340) + 100,200);
        sVar3 = *(short *)(param_1 + 0x433c) + sVar3;
      }
    }
    else {
      sVar3 = *(short *)(param_1 + 0x433c);
    }
  }
  iVar4 = (int)*(short *)(param_1 + 0x4338);
  *(short *)(param_1 + 0x4338) = sVar3;
  if (iVar4 < sVar3) {
    iVar4 = (int)sVar3;
  }
  sVar3 = *(short *)(param_1 + 0x4336) + (short)((uint)(iVar4 - *(short *)(param_1 + 0x4336)) >> 4);
  *(short *)(param_1 + 0x4336) = sVar3;
  return (int)sVar3;
}


// =========================================================================
// Function: R_fwzVgmQnnmLcwbqfb
// Entry: 0x71af2408 | Size: 132 bytes
// =========================================================================

undefined4 * R_fwzVgmQnnmLcwbqfb(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_r5;
  
  if (param_1 != 0) {
    unaff_r5 = param_2;
  }
  if ((param_1 != 0 && param_2 != 0) &&
     (puVar1 = (undefined4 *)imp_malloc(0x18), puVar1 != (undefined4 *)0x0)) {
    iVar2 = imp_calloc(1,unaff_r5 * param_1);
    puVar1[5] = iVar2;
    if (iVar2 == 0) {
      imp_free(puVar1);
      return (undefined4 *)0x0;
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = param_1;
    puVar1[3] = unaff_r5;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


// =========================================================================
// Function: OHQmpl_xNKaRTEScf
// Entry: 0x71af248c | Size: 48 bytes
// =========================================================================

void OHQmpl_xNKaRTEScf(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  imp___aeabi_memclr(param_1[5],param_1[3] * param_1[2]);
  return;
}


// =========================================================================
// Function: GWhrVLGdiDaubFvRP
// Entry: 0x71af24bc | Size: 44 bytes
// =========================================================================

void GWhrVLGdiDaubFvRP(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_free(*(undefined4 *)(param_1 + 0x14));
  imp_free(param_1);
  return;
}


// =========================================================================
// Function: KsWjkINgBphTWXrQT
// Entry: 0x71af24e8 | Size: 376 bytes
// =========================================================================

uint KsWjkINgBphTWXrQT(uint *param_1,int *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == (uint *)0x0 || param_3 == 0) {
    return 0;
  }
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar7 = param_1[5];
  uVar2 = param_1[2] - uVar4;
  iVar8 = uVar6 * uVar4 + uVar7;
  uVar1 = uVar2;
  if (param_1[4] == 0) {
    uVar1 = -uVar4;
  }
  if (uVar1 + param_1[1] < param_4) {
    param_4 = uVar1 + param_1[1];
  }
  if (uVar2 < param_4) {
    iVar3 = uVar6 * uVar2;
    iVar5 = uVar6 * (param_4 - uVar2);
    if (iVar5 == 0) goto LAB_71af25ac;
    imp___aeabi_memcpy(param_3,iVar8,iVar3);
    imp___aeabi_memcpy(param_3 + iVar3,uVar7,iVar5);
    iVar8 = param_3;
    if (param_2 == (int *)0x0) goto LAB_71af25e4;
  }
  else {
    iVar3 = uVar6 * param_4;
LAB_71af25ac:
    if (param_2 == (int *)0x0) {
      imp___aeabi_memcpy(param_3,iVar8,iVar3);
      goto LAB_71af25e4;
    }
  }
  if (param_4 == 0) {
    iVar8 = 0;
  }
  *param_2 = iVar8;
LAB_71af25e4:
  uVar4 = *param_1;
  uVar6 = param_1[2];
  uVar2 = uVar4;
  uVar1 = uVar6;
  if (param_1[4] == 0) {
    uVar2 = uVar4 + uVar6;
    uVar1 = 0;
  }
  uVar2 = param_1[1] - uVar2;
  uVar1 = param_1[1] + (uVar1 - uVar4);
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  if ((int)uVar1 <= (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar1 = uVar1 + uVar4;
  uVar2 = uVar1 - uVar6;
  if (uVar1 - uVar6 == 0 || (int)uVar1 < (int)uVar6) {
    uVar2 = uVar1;
  }
  uVar4 = uVar2;
  if ((int)uVar2 < 0) {
    uVar4 = uVar2 + uVar6;
  }
  if (((int)uVar6 < (int)uVar1) || (0x7fffffff < uVar2)) {
    param_1[4] = uVar2 >> 0x1f;
  }
  *param_1 = uVar4;
  return param_4;
}


// =========================================================================
// Function: oIIGnLHwfeNjDQNt_n
// Entry: 0x71af2660 | Size: 176 bytes
// =========================================================================

int oIIGnLHwfeNjDQNt_n(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *param_1;
  uVar1 = param_1[2];
  if (param_1[4] == 0) {
    uVar3 = uVar5 + uVar1;
    iVar2 = -uVar5;
  }
  else {
    iVar2 = uVar1 - uVar5;
    uVar3 = uVar5;
  }
  iVar6 = param_1[1] - uVar3;
  iVar2 = iVar2 + param_1[1];
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (param_2 <= iVar6) {
    param_2 = iVar6;
  }
  uVar5 = param_2 + uVar5;
  uVar3 = uVar5 - uVar1;
  if (uVar5 - uVar1 == 0 || (int)uVar5 < (int)uVar1) {
    uVar3 = uVar5;
  }
  uVar4 = uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = uVar3 + uVar1;
  }
  if (((int)uVar5 <= (int)uVar1) && (-1 < (int)uVar3)) {
    *param_1 = uVar4;
    return param_2;
  }
  param_1[4] = uVar3 >> 0x1f;
  *param_1 = uVar4;
  return param_2;
}


// =========================================================================
// Function: KgAagMwhAiXMQh_cSx
// Entry: 0x71af2710 | Size: 196 bytes
// =========================================================================

uint KgAagMwhAiXMQh_cSx(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != (int *)0x0 && param_2 != 0) {
    iVar3 = *param_1;
    iVar2 = param_1[2];
    iVar1 = param_1[1];
    if (param_1[4] != 0) {
      iVar3 = (iVar2 - iVar3) + iVar1;
    }
    uVar5 = iVar2 - iVar1;
    if (param_1[4] == 0) {
      iVar3 = iVar1 - iVar3;
    }
    if ((uint)(iVar2 - iVar3) < param_3) {
      param_3 = iVar2 - iVar3;
    }
    uVar4 = param_3;
    if (uVar5 < param_3) {
      imp___aeabi_memcpy(param_1[3] * iVar1 + param_1[5],param_2,param_1[3] * uVar5);
      param_1[4] = 1;
      iVar1 = 0;
      param_1[1] = 0;
      uVar4 = param_3 - uVar5;
    }
    iVar2 = param_1[3];
    imp___aeabi_memcpy(iVar2 * iVar1 + param_1[5],iVar2 * (param_3 - uVar4) + param_2,iVar2 * uVar4)
    ;
    param_1[1] = param_1[1] + uVar4;
    return param_3;
  }
  return 0;
}


// =========================================================================
// Function: i_keNbnuptEEzFRRzHqTmG
// Entry: 0x71af27d4 | Size: 52 bytes
// =========================================================================

int i_keNbnuptEEzFRRzHqTmG(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[4] == 0) {
      iVar1 = -*param_1;
    }
    else {
      iVar1 = param_1[2] - *param_1;
    }
    return param_1[2] - (param_1[1] + iVar1);
  }
  return 0;
}


// =========================================================================
// Function: jIF_rFsxRUcXAJZMimpWx
// Entry: 0x71af2808 | Size: 56 bytes
// =========================================================================

int jIF_rFsxRUcXAJZMimpWx(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[4] != 0) {
    return (param_1[2] - *param_1) + param_1[1];
  }
  return param_1[1] - *param_1;
}


// =========================================================================
// Function: xbpflVuhEXMvEFXrDMC_ejW
// Entry: 0x71af298c | Size: 52 bytes
// =========================================================================

uint * xbpflVuhEXMvEFXrDMC_ejW(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  if ((param_1 < 0xb) && (puVar1 = (uint *)imp_malloc(4), puVar1 != (uint *)0x0)) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  return puVar2;
}


// =========================================================================
// Function: zVojLnoXltOPucjLs_Pug
// Entry: 0x71af29c0 | Size: 12 bytes
// =========================================================================

void zVojLnoXltOPucjLs_Pug(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_free();
  return;
}


// =========================================================================
// Function: HiSxiuPfbHbqQePacWghiUYY
// Entry: 0x71af29cc | Size: 224 bytes
// =========================================================================

undefined4 HiSxiuPfbHbqQePacWghiUYY(uint *param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 uStack_1020;
  undefined2 auStack_101e [2047];
  
  puVar5 = &uStack_1020;
  uVar9 = *param_1;
  if (uVar9 != 0x1f) {
    uVar6 = 1 << (uVar9 & 0xff);
    iVar10 = 0;
    if (2 < uVar9) {
      uVar8 = uVar6 & 0x7ffffff8;
      iVar10 = uVar8 << 1;
      uVar7 = uVar8;
      do {
        uVar7 = uVar7 - 8;
        puVar1 = (undefined2 *)0x380;
        puVar2 = (undefined2 *)0x390;
        lVar12 = 4;
        puVar11 = puVar5;
        while( true ) {
          *puVar11 = *puVar1;
          puVar11[1] = *puVar2;
          puVar11 = puVar11 + 2;
          lVar12 = lVar12 + -1;
          if (lVar12 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined2 *)0x388;
        puVar2 = (undefined2 *)0x398;
        lVar12 = 4;
        while( true ) {
          *puVar11 = *puVar1;
          puVar11[1] = *puVar2;
          puVar11 = puVar11 + 2;
          lVar12 = lVar12 + -1;
          if (lVar12 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar5 = puVar5 + 0x10;
      } while (uVar7 != 0);
      if (uVar8 != 0) goto LAB_71af2a64;
    }
    puVar5 = auStack_101e + iVar10;
    do {
      uVar3 = *param_2;
      uVar6 = uVar6 - 1;
      *puVar5 = 0;
      puVar5[-1] = uVar3;
      puVar5 = puVar5 + 2;
      param_2 = param_2 + 1;
    } while (uVar6 != 0);
  }
LAB_71af2a64:
  thunk_PbVflVcWdUhEnIbQlFcuQmRJZFe(&uStack_1020,uVar9);
  uVar4 = thunk_pxmUBiuLrwMclTNshWag(&uStack_1020,*param_1,1);
  imp___aeabi_memcpy(param_3,&uStack_1020,(2 << (uVar9 & 0xff)) + 4);
  return uVar4;
}


// =========================================================================
// Function: gpyojGvvUyFeScvvTvvGtXOV
// Entry: 0x71af2aac | Size: 476 bytes
// =========================================================================

void gpyojGvvUyFeScvvTvvGtXOV(uint *param_1,int param_2,undefined4 param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  longlong lVar22;
  undefined1 in_q8 [16];
  undefined1 in_q9 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1030 [4];
  undefined4 uStack_102c;
  undefined1 auStack_1028 [4];
  undefined2 auStack_1024 [2048];
  
  puVar18 = auStack_1030;
  uVar14 = *param_1;
  iVar12 = (1 << (uVar14 & 0xff)) + 2;
  uStack_102c = param_3;
  imp___aeabi_memcpy(auStack_1028,param_2,iVar12 * 2);
  uVar7 = 1 << (uVar14 & 0xff);
  if (iVar12 < 2 << (uVar14 & 0xff)) {
    iVar8 = uVar7 + 4;
    iVar6 = 2 << (uVar14 & 0xff);
    iVar10 = iVar8;
    if (iVar8 < iVar6) {
      iVar10 = iVar6;
    }
    uVar4 = (iVar10 - uVar7) - 3;
    puVar18 = auStack_1030;
    if (0x1d < uVar4) {
      if (iVar8 < iVar6) {
        iVar8 = iVar6;
      }
      iVar10 = (iVar8 - uVar7) + -3;
      puVar18 = auStack_1030;
      if ((!CARRY4((int)auStack_1024 + (2 << (uVar14 & 0xff)),iVar10 * 2 & 0xfffffffd)) &&
         (puVar18 = auStack_1030, -1 < iVar10)) {
        uVar17 = (uVar4 >> 1) + 1;
        uVar19 = uVar17 & 0xfffffff8;
        puVar11 = auStack_1024 + uVar7;
        iVar12 = iVar12 + uVar19 * 2;
        iVar10 = -0x20;
        puVar13 = (undefined2 *)(iVar6 * 2 + uVar7 * -2 + param_2 + -0x20);
        puVar18 = auStack_1030;
        uVar4 = uVar19;
        do {
          puVar2 = (undefined2 *)0x380;
          puVar20 = (undefined2 *)0x390;
          lVar22 = 4;
          puVar21 = puVar13;
          while( true ) {
            *puVar2 = *puVar21;
            puVar21 = puVar21 + 1;
            *puVar20 = *puVar21;
            puVar21 = puVar21 + 1;
            lVar22 = lVar22 + -1;
            if (lVar22 == 0) break;
            puVar2 = puVar2 + 1;
            puVar20 = puVar20 + 1;
          }
          puVar2 = (undefined2 *)0x388;
          puVar20 = (undefined2 *)0x398;
          lVar22 = 4;
          while( true ) {
            *puVar2 = *puVar21;
            puVar21 = puVar21 + 1;
            *puVar20 = *puVar21;
            puVar21 = puVar21 + 1;
            lVar22 = lVar22 + -1;
            if (lVar22 == 0) break;
            puVar2 = puVar2 + 1;
            puVar20 = puVar20 + 1;
          }
          puVar13 = (undefined2 *)((int)puVar13 + iVar10);
          auVar23 = FloatVectorNeg(in_q9,1,2);
          uVar19 = uVar19 - 8;
          in_q8 = vrev(in_q8,2);
          in_q9 = vrev(auVar23,2);
          puVar2 = (undefined2 *)0x3a0;
          puVar20 = (undefined2 *)0x3b0;
          lVar22 = 4;
          puVar21 = puVar11;
          while( true ) {
            *puVar21 = *puVar2;
            puVar21[1] = *puVar20;
            puVar21 = puVar21 + 2;
            lVar22 = lVar22 + -1;
            if (lVar22 == 0) break;
            puVar2 = puVar2 + 1;
            puVar20 = puVar20 + 1;
          }
          puVar2 = (undefined2 *)0x3a8;
          puVar20 = (undefined2 *)0x3b8;
          lVar22 = 4;
          while( true ) {
            *puVar21 = *puVar2;
            puVar21[1] = *puVar20;
            puVar21 = puVar21 + 2;
            lVar22 = lVar22 + -1;
            if (lVar22 == 0) break;
            puVar2 = puVar2 + 1;
            puVar20 = puVar20 + 1;
          }
          puVar11 = puVar11 + 0x10;
        } while (uVar19 != 0);
        if (uVar17 == uVar4) goto LAB_71af2b58;
      }
    }
    psVar5 = (short *)(puVar18 + iVar12 * 2 + 10);
    psVar9 = (short *)(iVar6 * 2 + iVar12 * -2 + param_2 + 2);
    do {
      sVar3 = *psVar9;
      iVar12 = iVar12 + 2;
      psVar1 = psVar9 + -1;
      psVar9 = psVar9 + -2;
      psVar5[-1] = *psVar1;
      *psVar5 = -sVar3;
      psVar5 = psVar5 + 2;
    } while (iVar12 < iVar6);
  }
LAB_71af2b58:
  puVar13 = (undefined2 *)(puVar18 + 8);
  thunk_PbVflVcWdUhEnIbQlFcuQmRJZFe(puVar13,uVar14);
  thunk_xvwjdgKMfGMhceKzOXdxI(puVar13,*param_1,1);
  if (uVar14 != 0x1f) {
    puVar15 = *(undefined8 **)(puVar18 + 4);
    uVar14 = 1;
    if (1 < (int)uVar7) {
      uVar14 = uVar7;
    }
    iVar6 = 0;
    iVar12 = 0;
    if (8 < (int)uVar7) {
      uVar7 = uVar14 & 7;
      if (uVar7 == 0) {
        uVar7 = 8;
      }
      iVar6 = uVar14 - uVar7;
      iVar12 = iVar6 * 2;
      iVar10 = iVar6;
      puVar16 = puVar15;
      do {
        puVar11 = (undefined2 *)0x380;
        puVar2 = (undefined2 *)0x390;
        lVar22 = 4;
        puVar20 = puVar13;
        while( true ) {
          *puVar11 = *puVar20;
          puVar20 = puVar20 + 1;
          *puVar2 = *puVar20;
          puVar20 = puVar20 + 1;
          lVar22 = lVar22 + -1;
          if (lVar22 == 0) break;
          puVar11 = puVar11 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar11 = (undefined2 *)0x388;
        puVar2 = (undefined2 *)0x398;
        lVar22 = 4;
        while( true ) {
          *puVar11 = *puVar20;
          puVar20 = puVar20 + 1;
          *puVar2 = *puVar20;
          puVar20 = puVar20 + 1;
          lVar22 = lVar22 + -1;
          if (lVar22 == 0) break;
          puVar11 = puVar11 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar13 = puVar13 + 0x10;
        iVar10 = iVar10 + -8;
        *puVar16 = in_q8._0_8_;
        puVar16[1] = in_q8._8_8_;
        puVar16 = puVar16 + 2;
      } while (iVar10 != 0);
    }
    iVar10 = uVar14 - iVar6;
    puVar13 = (undefined2 *)(puVar18 + iVar12 * 2 + 8);
    puVar11 = (undefined2 *)((int)puVar15 + iVar6 * 2);
    do {
      iVar10 = iVar10 + -1;
      *puVar11 = *puVar13;
      puVar13 = puVar13 + 2;
      puVar11 = puVar11 + 1;
    } while (iVar10 != 0);
  }
  return;
}


// =========================================================================
// Function: PbVflVcWdUhEnIbQlFcuQmRJZFe
// Entry: 0x71af2d80 | Size: 208 bytes
// =========================================================================

void PbVflVcWdUhEnIbQlFcuQmRJZFe(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  short *psVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 - 7 < 2) {
    uVar10 = 0x70;
    puVar6 = &DAT_70097512;
    if (param_2 == 8) {
      uVar10 = 0xf0;
      puVar6 = &DAT_700975f2;
    }
    psVar5 = puVar6 + 1;
    uVar7 = 0;
    do {
      sVar4 = *psVar5;
      uVar7 = uVar7 + 2;
      psVar3 = psVar5 + -1;
      psVar5 = psVar5 + 2;
      uVar9 = *(undefined4 *)(param_1 + *psVar3 * 4);
      *(undefined4 *)(param_1 + *psVar3 * 4) = *(undefined4 *)(param_1 + sVar4 * 4);
      *(undefined4 *)(param_1 + sVar4 * 4) = uVar9;
    } while (uVar7 < uVar10);
  }
  else {
    uVar7 = 1;
    uVar10 = 1 << (param_2 & 0xff);
    if ((int)uVar10 < 2) {
      return;
    }
    uVar11 = 0;
    do {
      uVar8 = uVar10;
      do {
        uVar1 = uVar8 >> 1;
        uVar2 = uVar8 >> 1;
        uVar8 = uVar1;
      } while ((int)(uVar10 + ~uVar11) < (int)uVar2);
      uVar11 = (uVar1 - 1 & uVar11) + uVar1;
      if ((int)uVar7 < (int)uVar11) {
        uVar9 = *(undefined4 *)(param_1 + uVar7 * 4);
        *(undefined4 *)(param_1 + uVar7 * 4) = *(undefined4 *)(param_1 + uVar11 * 4);
        *(undefined4 *)(param_1 + uVar11 * 4) = uVar9;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
  }
  return;
}


// =========================================================================
// Function: pxmUBiuLrwMclTNshWag
// Entry: 0x71af2ea8 | Size: 720 bytes
// =========================================================================

undefined4 pxmUBiuLrwMclTNshWag(short *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  int iVar18;
  uint uStack_44;
  short *psStack_38;
  uint uStack_34;
  short *psStack_2c;
  
  iVar3 = 1 << (param_2 & 0xff);
  uVar10 = 0xffffffff;
  if (iVar3 < 0x401) {
    if (param_3 == 0) {
      if (iVar3 < 2) {
        return 0;
      }
      uStack_44 = 9;
      iVar11 = 1;
      do {
        iVar1 = iVar11 * 2;
        if (0 < iVar11) {
          iVar15 = 0;
          psStack_38 = param_1;
          do {
            if (iVar15 < iVar3) {
              iVar14 = iVar15 << (uStack_44 & 0xff);
              sVar4 = (&DAT_700977d2)[iVar14];
              sVar5 = (&DAT_700979d2)[iVar14];
              psVar13 = psStack_38;
              iVar14 = iVar15;
              do {
                psVar16 = psVar13 + iVar11 * 2;
                sVar6 = *psVar16;
                iVar14 = iVar14 + iVar1;
                sVar7 = psVar16[1];
                sVar8 = *psVar13;
                sVar9 = psVar13[1];
                iVar18 = (int)sVar6 * (int)sVar5 - (int)sVar7 * (int)-sVar4 >> 0xf;
                *psVar16 = (short)((uint)(sVar8 - iVar18) >> 1);
                *psVar13 = (short)((uint)(sVar8 + iVar18) >> 1);
                iVar18 = (int)sVar6 * (int)-sVar4 + (int)sVar7 * (int)sVar5 >> 0xf;
                psVar16[1] = (short)((uint)(sVar9 - iVar18) >> 1);
                psVar13[1] = (short)((uint)(sVar9 + iVar18) >> 1);
                psVar13 = psVar13 + iVar11 * 4;
              } while (iVar14 < iVar3);
            }
            psStack_38 = psStack_38 + 2;
            iVar15 = iVar15 + 1;
          } while (iVar15 != iVar11);
        }
        uStack_44 = uStack_44 - 1;
        iVar11 = iVar1;
      } while (iVar1 < iVar3);
    }
    else {
      if (iVar3 < 2) {
        return 0;
      }
      uStack_34 = 9;
      iVar11 = 1;
      do {
        iVar1 = iVar11 * 2;
        if (0 < iVar11) {
          iVar15 = 0;
          psStack_2c = param_1;
          do {
            iVar14 = iVar15 << (uStack_34 & 0xff);
            iVar18 = (uint)(ushort)(&DAT_700979d2)[iVar14] +
                     (short)-(&DAT_700977d2)[iVar14] * 0x10000;
            psVar13 = psStack_2c;
            for (iVar14 = iVar15; iVar14 < iVar3; iVar14 = iVar14 + iVar1) {
              puVar12 = (ushort *)(psVar13 + iVar11 * 2);
              iVar17 = (uint)*puVar12 + (short)puVar12[1] * 0x10000;
              sVar6 = (short)iVar18;
              sVar7 = (short)iVar17;
              sVar8 = (short)((uint)iVar18 >> 0x10);
              sVar9 = (short)((uint)iVar17 >> 0x10);
              sVar4 = *psVar13;
              sVar5 = psVar13[1];
              iVar17 = ((int)sVar6 * (int)sVar7 - (int)sVar8 * (int)sVar9) + 1 >> 1;
              *puVar12 = (ushort)((sVar4 * 0x4000 - iVar17) + 0x4000U >> 0xf);
              iVar2 = (int)sVar6 * (int)sVar9 + (int)sVar8 * (int)sVar7 + 1 >> 1;
              puVar12[1] = (ushort)((sVar5 * 0x4000 - iVar2) + 0x4000U >> 0xf);
              psVar13[1] = (short)(iVar2 + sVar5 * 0x4000 + 0x4000U >> 0xf);
              *psVar13 = (short)(iVar17 + sVar4 * 0x4000 + 0x4000U >> 0xf);
              psVar13 = psVar13 + iVar11 * 4;
            }
            psStack_2c = psStack_2c + 2;
            iVar15 = iVar15 + 1;
          } while (iVar15 != iVar11);
        }
        uStack_34 = uStack_34 - 1;
        iVar11 = iVar1;
      } while (iVar1 < iVar3);
    }
    uVar10 = 0;
  }
  return uVar10;
}


// =========================================================================
// Function: xvwjdgKMfGMhceKzOXdxI
// Entry: 0x71af3180 | Size: 940 bytes
// =========================================================================

int xvwjdgKMfGMhceKzOXdxI(short *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  short *psVar18;
  ushort *puVar19;
  short *psVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uStack_40;
  uint uStack_3c;
  short *psStack_34;
  
  iVar11 = -1;
  if (param_2 < 0xb) {
    if (param_2 == 0) {
      return 0;
    }
    uVar3 = 1 << (param_2 & 0xff);
    iVar4 = 2 << (param_2 & 0xff);
    if (param_3 == 0) {
      uStack_40 = 9;
      iVar11 = 0;
      uVar17 = 1;
      do {
        iVar14 = SINmIZbRimekUUmaLUp_X_PRs(param_1,iVar4);
        uVar15 = (uint)(0x3505 < iVar14);
        if (0x6a0a < iVar14) {
          uVar15 = 2;
        }
        uVar23 = 1;
        if (1 < uVar17) {
          uVar23 = uVar17;
        }
        uVar1 = uVar17 * 2;
        uVar24 = 0;
        psStack_34 = param_1;
        do {
          if (uVar24 < uVar3) {
            iVar12 = uVar24 << (uStack_40 & 0xff);
            sVar5 = (&DAT_700977d2)[iVar12];
            sVar6 = (&DAT_700979d2)[iVar12];
            psVar20 = psStack_34;
            uVar22 = uVar24;
            do {
              psVar18 = psVar20 + uVar17 * 2;
              sVar7 = *psVar18;
              uVar22 = uVar22 + uVar1;
              sVar8 = psVar18[1];
              sVar9 = *psVar20;
              sVar10 = psVar20[1];
              iVar12 = (int)sVar7 * (int)sVar6 - (int)sVar8 * (int)sVar5 >> 0xf;
              *psVar18 = (short)(sVar9 - iVar12 >> uVar15);
              *psVar20 = (short)(sVar9 + iVar12 >> uVar15);
              iVar12 = (int)sVar7 * (int)sVar5 + (int)sVar8 * (int)sVar6 >> 0xf;
              psVar18[1] = (short)(sVar10 - iVar12 >> uVar15);
              psVar20[1] = (short)(sVar10 + iVar12 >> uVar15);
              psVar20 = psVar20 + uVar17 * 4;
            } while (uVar22 < uVar3);
          }
          psStack_34 = psStack_34 + 2;
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar23);
        iVar11 = iVar11 + (uint)(0x3505 < iVar14) + (uint)(0x6a0a < iVar14);
        uStack_40 = uStack_40 - 1;
        uVar17 = uVar1;
      } while (uVar1 < uVar3);
    }
    else {
      uStack_3c = 9;
      iVar11 = 0;
      uVar17 = 1;
      do {
        iVar12 = SINmIZbRimekUUmaLUp_X_PRs(param_1,iVar4);
        iVar14 = 0xe;
        if (0x3505 < iVar12) {
          iVar14 = 0xf;
        }
        if (0x6a0a < iVar12) {
          iVar14 = 0x10;
        }
        iVar13 = 0x2000;
        if (0x3505 < iVar12) {
          iVar13 = 0x4000;
        }
        iVar13 = iVar13 << (uint)(0x6a0a < iVar12);
        uVar23 = 0;
        uVar15 = 1;
        if (1 < uVar17) {
          uVar15 = uVar17;
        }
        uVar1 = uVar17 * 2;
        psStack_34 = param_1;
        do {
          iVar16 = uVar23 << (uStack_3c & 0xff);
          iVar16 = (uint)(ushort)(&DAT_700979d2)[iVar16] + (short)(&DAT_700977d2)[iVar16] * 0x10000;
          psVar20 = psStack_34;
          for (uVar24 = uVar23; uVar24 < uVar3; uVar24 = uVar24 + uVar1) {
            puVar19 = (ushort *)(psVar20 + uVar17 * 2);
            iVar21 = (uint)*puVar19 + (short)puVar19[1] * 0x10000;
            sVar7 = (short)iVar16;
            sVar8 = (short)iVar21;
            sVar9 = (short)((uint)iVar16 >> 0x10);
            sVar10 = (short)((uint)iVar21 >> 0x10);
            sVar5 = *psVar20;
            iVar21 = ((int)sVar7 * (int)sVar8 - (int)sVar9 * (int)sVar10) + 1 >> 1;
            sVar6 = psVar20[1];
            *puVar19 = (ushort)((iVar13 - iVar21) + sVar5 * 0x4000 >> iVar14);
            iVar2 = (int)sVar7 * (int)sVar10 + (int)sVar9 * (int)sVar8 + 1 >> 1;
            puVar19[1] = (ushort)((iVar13 - iVar2) + sVar6 * 0x4000 >> iVar14);
            *psVar20 = (short)(iVar13 + iVar21 + sVar5 * 0x4000 >> iVar14);
            psVar20[1] = (short)(iVar13 + iVar2 + sVar6 * 0x4000 >> iVar14);
            psVar20 = psVar20 + uVar17 * 4;
          }
          psStack_34 = psStack_34 + 2;
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar15);
        iVar11 = iVar11 + (uint)(0x3505 < iVar12) + (uint)(0x6a0a < iVar12);
        uStack_3c = uStack_3c - 1;
        uVar17 = uVar1;
      } while (uVar1 < uVar3);
    }
  }
  return iVar11;
}


// =========================================================================
// Function: SINmIZbRimekUUmaLUp_X_PRs
// Entry: 0x71af35dc | Size: 136 bytes
// =========================================================================

uint SINmIZbRimekUUmaLUp_X_PRs(undefined8 *param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar5 = 0;
    if (3 < param_2) {
      uVar5 = param_2 & 0xfffffffc;
      auVar6 = (undefined1  [16])0x0;
      uVar3 = uVar5;
      puVar4 = param_1;
      do {
        uVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 - 4;
        uVar7 = VectorAbsolute(uVar7,2);
        auVar8 = VectorCopyLong(uVar7,2,1);
        auVar6 = VectorMax(auVar6,auVar8,4,0);
      } while (uVar3 != 0);
      uVar7 = VectorPairwiseMax(auVar6._0_8_,auVar6._8_8_,4,0);
      uVar7 = VectorPairwiseMax(uVar7,uVar7,4,0);
      uVar3 = (uint)uVar7;
      if (uVar5 == param_2) goto LAB_71af3654;
    }
    iVar2 = param_2 - uVar5;
    psVar1 = (short *)((int)param_1 + uVar5 * 2);
    do {
      uVar5 = (uint)*psVar1;
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      if ((int)uVar3 <= (int)uVar5) {
        uVar3 = uVar5;
      }
      iVar2 = iVar2 + -1;
      psVar1 = psVar1 + 1;
    } while (iVar2 != 0);
  }
LAB_71af3654:
  uVar5 = 0x7fff;
  if (uVar3 < 0x7fff) {
    uVar5 = uVar3;
  }
  return uVar5;
}


// =========================================================================
// Function: jKOlZkmpSrsaXesKrGyzofZUl
// Entry: 0x71af3664 | Size: 172 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x71af3708) */

uint jKOlZkmpSrsaXesKrGyzofZUl(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar6 = 0;
  uVar2 = 0;
  if (3 < param_2) {
    uVar6 = param_2 & 0xfffffffc;
    auVar9 = (undefined1  [16])0x0;
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x8000000080000000;
    auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    uVar2 = uVar6;
    pauVar4 = param_1;
    do {
      auVar10 = *pauVar4;
      pauVar4 = pauVar4 + 1;
      uVar2 = uVar2 - 4;
      auVar11 = VectorCompareEqual(auVar10,auVar1,4);
      auVar10 = VectorAbsolute(auVar10,4);
      auVar10 = VectorBitwiseInsertIfTrue(auVar10,auVar1,auVar11);
      auVar9 = VectorMax(auVar10,auVar9,4,1);
    } while (uVar2 != 0);
    uVar8 = VectorPairwiseMax(auVar9._0_8_,auVar9._8_8_,4,1);
    uVar8 = VectorPairwiseMax(uVar8,uVar8,4,1);
    uVar2 = (uint)uVar8;
    if (uVar6 == param_2) goto LAB_71af36f4;
  }
  iVar3 = param_2 - uVar6;
  puVar7 = (uint *)(*param_1 + uVar6 * 4);
  do {
    uVar5 = *puVar7;
    uVar6 = uVar5;
    if ((int)uVar5 < 0) {
      uVar6 = -uVar5;
    }
    if (uVar5 == 0x80000000) {
      uVar6 = uVar5;
    }
    if (uVar2 < uVar6) {
      uVar2 = uVar6;
    }
    iVar3 = iVar3 + -1;
    puVar7 = puVar7 + 1;
  } while (iVar3 != 0);
LAB_71af36f4:
  if (0x7ffffffe < uVar2) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}


// =========================================================================
// Function: izxJZsODWrNVPDNDxTnCgt
// Entry: 0x71af3710 | Size: 136 bytes
// =========================================================================

int izxJZsODWrNVPDNDxTnCgt(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (param_2 == 0) {
    return -0x8000;
  }
  if (param_2 < 8) {
    iVar5 = 0x8000;
    uVar8 = 0;
  }
  else {
    uVar8 = param_2 & 0xfffffff8;
    auVar10._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
    auVar10._0_8_ = 0x8000800080008000;
    auVar10 = *(undefined1 (*) [16])(auVar10 << 0x40 | auVar10);
    uVar6 = uVar8;
    pauVar7 = param_1;
    do {
      auVar1 = *pauVar7;
      pauVar7 = pauVar7 + 1;
      uVar6 = uVar6 - 8;
      auVar10 = VectorMax(auVar1,auVar10,2,0);
    } while (uVar6 != 0);
    uVar9 = VectorPairwiseMax(auVar10._0_8_,auVar10._8_8_,2,0);
    uVar9 = VectorPairwiseMax(uVar9,uVar9,2,0);
    uVar9 = VectorPairwiseMax(uVar9,uVar9,2,0);
    sVar4 = (short)uVar9;
    iVar5 = (int)sVar4;
    if (uVar8 == param_2) goto LAB_71af3790;
  }
  iVar3 = param_2 - uVar8;
  psVar2 = (short *)(*param_1 + uVar8 * 2);
  do {
    sVar4 = (short)iVar5;
    iVar5 = (int)sVar4;
    if ((int)sVar4 < (int)*psVar2) {
      iVar5 = (int)*psVar2;
    }
    sVar4 = (short)iVar5;
    iVar3 = iVar3 + -1;
    psVar2 = psVar2 + 1;
  } while (iVar3 != 0);
LAB_71af3790:
  return (int)sVar4;
}


// =========================================================================
// Function: OOknGMlVNEntJLnpJqQuyQ
// Entry: 0x71af3798 | Size: 128 bytes
// =========================================================================

int OOknGMlVNEntJLnpJqQuyQ(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 == 0) {
    return -0x80000000;
  }
  if (param_2 < 4) {
    iVar4 = -0x80000000;
    uVar7 = 0;
  }
  else {
    uVar7 = param_2 & 0xfffffffc;
    auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar9._0_8_ = 0x8000000080000000;
    auVar9 = *(undefined1 (*) [16])(auVar9 << 0x40 | auVar9);
    uVar5 = uVar7;
    pauVar6 = param_1;
    do {
      auVar1 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      uVar5 = uVar5 - 4;
      auVar9 = VectorMax(auVar1,auVar9,4,0);
    } while (uVar5 != 0);
    uVar8 = VectorPairwiseMax(auVar9._0_8_,auVar9._8_8_,4,0);
    uVar8 = VectorPairwiseMax(uVar8,uVar8,4,0);
    iVar4 = (int)uVar8;
    if (uVar7 == param_2) {
      return iVar4;
    }
  }
  iVar3 = param_2 - uVar7;
  piVar2 = (int *)(*param_1 + uVar7 * 4);
  do {
    if (iVar4 < *piVar2) {
      iVar4 = *piVar2;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 0);
  return iVar4;
}


// =========================================================================
// Function: nWaUvvkehHnwGVibOdjHoZ
// Entry: 0x71af3818 | Size: 136 bytes
// =========================================================================

int nWaUvvkehHnwGVibOdjHoZ(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  short *psVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 == 0) {
    return 0x7fff;
  }
  if (param_2 < 8) {
    sVar4 = 0x7fff;
    uVar7 = 0;
  }
  else {
    uVar7 = param_2 & 0xfffffff8;
    auVar9._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
    auVar9._0_8_ = 0x8000800080008000;
    auVar9 = ~*(undefined1 (*) [16])(auVar9 << 0x40 | auVar9);
    uVar5 = uVar7;
    pauVar6 = param_1;
    do {
      auVar1 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      uVar5 = uVar5 - 8;
      auVar9 = VectorMin(auVar1,auVar9,2,0);
    } while (uVar5 != 0);
    uVar8 = VectorPairwiseMin(auVar9._0_8_,auVar9._8_8_,2,0);
    uVar8 = VectorPairwiseMin(uVar8,uVar8,2,0);
    uVar8 = VectorPairwiseMin(uVar8,uVar8,2,0);
    sVar4 = (short)uVar8;
    if (uVar7 == param_2) goto LAB_71af3898;
  }
  iVar3 = param_2 - uVar7;
  psVar2 = (short *)(*param_1 + uVar7 * 2);
  do {
    if (*psVar2 < sVar4) {
      sVar4 = *psVar2;
    }
    iVar3 = iVar3 + -1;
    psVar2 = psVar2 + 1;
  } while (iVar3 != 0);
LAB_71af3898:
  return (int)sVar4;
}


// =========================================================================
// Function: TKgzJy_vsPWzKSXGqEqrZN
// Entry: 0x71af38a0 | Size: 128 bytes
// =========================================================================

int TKgzJy_vsPWzKSXGqEqrZN(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 == 0) {
    return 0x7fffffff;
  }
  if (param_2 < 4) {
    iVar4 = 0x7fffffff;
    uVar7 = 0;
  }
  else {
    uVar7 = param_2 & 0xfffffffc;
    auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar9._0_8_ = 0x8000000080000000;
    auVar9 = ~*(undefined1 (*) [16])(auVar9 << 0x40 | auVar9);
    uVar5 = uVar7;
    pauVar6 = param_1;
    do {
      auVar1 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      uVar5 = uVar5 - 4;
      auVar9 = VectorMin(auVar1,auVar9,4,0);
    } while (uVar5 != 0);
    uVar8 = VectorPairwiseMin(auVar9._0_8_,auVar9._8_8_,4,0);
    uVar8 = VectorPairwiseMin(uVar8,uVar8,4,0);
    iVar4 = (int)uVar8;
    if (uVar7 == param_2) {
      return iVar4;
    }
  }
  iVar3 = param_2 - uVar7;
  piVar2 = (int *)(*param_1 + uVar7 * 4);
  do {
    if (*piVar2 < iVar4) {
      iVar4 = *piVar2;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 0);
  return iVar4;
}


// =========================================================================
// Function: TUIAoARjWJmuekavSLrGKYVL
// Entry: 0x71af3920 | Size: 80 bytes
// =========================================================================

int TUIAoARjWJmuekavSLrGKYVL(short *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar4 = 0;
    iVar3 = 0;
    iVar1 = 0;
    do {
      uVar2 = (uint)*param_1;
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
      }
      if (uVar4 < uVar2) {
        iVar3 = iVar1;
      }
      iVar1 = iVar1 + 1;
      if ((int)uVar4 <= (int)uVar2) {
        uVar4 = uVar2;
      }
      param_1 = param_1 + 1;
    } while (param_2 != iVar1);
    return iVar3;
  }
  return 0;
}


// =========================================================================
// Function: mfsMpKQdZNfLOBFSBcaTtMmzkY
// Entry: 0x71af3970 | Size: 224 bytes
// =========================================================================

int mfsMpKQdZNfLOBFSBcaTtMmzkY(undefined1 (*param_1) [16],uint param_2)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  short *psVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  if (param_2 == 0) {
    uVar7 = 0x8000;
    uVar5 = 0x7fff;
  }
  else {
    if (param_2 < 8) {
      uVar5 = 0x7fff;
      uVar7 = 0x8000;
      uVar9 = 0;
    }
    else {
      uVar9 = param_2 & 0xfffffff8;
      auVar12._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar12._0_8_ = 0x8000800080008000;
      auVar14 = ~*(undefined1 (*) [16])(auVar12 << 0x40 | auVar12);
      auVar2._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
      auVar2._0_8_ = 0x8000800080008000;
      auVar12 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
      uVar5 = uVar9;
      pauVar8 = param_1;
      do {
        auVar3 = *pauVar8;
        auVar2 = *pauVar8;
        pauVar8 = pauVar8 + 1;
        uVar5 = uVar5 - 8;
        auVar12 = VectorMax(auVar2,auVar12,2,0);
        auVar14 = VectorMin(auVar3,auVar14,2,0);
      } while (uVar5 != 0);
      uVar11 = VectorPairwiseMax(auVar12._0_8_,auVar12._8_8_,2,0);
      uVar13 = VectorPairwiseMin(auVar14._0_8_,auVar14._8_8_,2,0);
      uVar11 = VectorPairwiseMax(uVar11,uVar11,2,0);
      uVar13 = VectorPairwiseMin(uVar13,uVar13,2,0);
      uVar11 = VectorPairwiseMax(uVar11,uVar11,2,0);
      uVar13 = VectorPairwiseMin(uVar13,uVar13,2,0);
      uVar7 = (uint)(short)uVar11;
      uVar5 = (uint)(short)uVar13;
      if (uVar9 == param_2) goto LAB_71af3a24;
    }
    iVar4 = param_2 - uVar9;
    psVar10 = (short *)(*param_1 + uVar9 * 2);
    do {
      uVar9 = (uint)*psVar10;
      sVar1 = (short)uVar7;
      sVar6 = (short)uVar5;
      uVar7 = (int)sVar1;
      if ((int)sVar1 < (int)uVar9) {
        uVar7 = uVar9;
      }
      uVar5 = (int)sVar6;
      if ((int)uVar9 < (int)sVar6) {
        uVar5 = uVar9;
      }
      iVar4 = iVar4 + -1;
      psVar10 = psVar10 + 1;
    } while (iVar4 != 0);
  }
LAB_71af3a24:
  sVar1 = (short)uVar5;
  sVar6 = (short)uVar7;
  if ((int)sVar1 < -(int)(short)uVar7) {
    sVar6 = sVar1;
  }
  if ((uVar5 & 0xffff) == (uVar7 & 0xffff)) {
    sVar6 = sVar1;
  }
  return (int)sVar6;
}


// =========================================================================
// Function: XQQBdFGpCVxPuyUxqxS
// Entry: 0x71af3a50 | Size: 196 bytes
// =========================================================================

void XQQBdFGpCVxPuyUxqxS(undefined1 (*param_1) [16],uint param_2,short *param_3,short *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  if (param_2 == 0) {
    *param_3 = 0x7fff;
    *param_4 = -0x8000;
    return;
  }
  if (param_2 < 8) {
    iVar10 = 0x7fff;
    iVar12 = 0x8000;
    uVar8 = 0;
  }
  else {
    uVar8 = param_2 & 0xfffffff8;
    auVar14._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
    auVar14._0_8_ = 0x8000800080008000;
    auVar16 = ~*(undefined1 (*) [16])(auVar14 << 0x40 | auVar14);
    auVar1._8_8_ = SUB148(SUB1614((undefined1  [16])0x0,2),6);
    auVar1._0_8_ = 0x8000800080008000;
    auVar14 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    uVar5 = uVar8;
    pauVar7 = param_1;
    do {
      auVar2 = *pauVar7;
      auVar1 = *pauVar7;
      pauVar7 = pauVar7 + 1;
      uVar5 = uVar5 - 8;
      auVar14 = VectorMax(auVar1,auVar14,2,0);
      auVar16 = VectorMin(auVar2,auVar16,2,0);
    } while (uVar5 != 0);
    uVar13 = VectorPairwiseMax(auVar14._0_8_,auVar14._8_8_,2,0);
    uVar15 = VectorPairwiseMin(auVar16._0_8_,auVar16._8_8_,2,0);
    uVar13 = VectorPairwiseMax(uVar13,uVar13,2,0);
    uVar15 = VectorPairwiseMin(uVar15,uVar15,2,0);
    uVar13 = VectorPairwiseMax(uVar13,uVar13,2,0);
    uVar15 = VectorPairwiseMin(uVar15,uVar15,2,0);
    sVar11 = (short)uVar13;
    iVar12 = (int)sVar11;
    sVar9 = (short)uVar15;
    iVar10 = (int)sVar9;
    if (uVar8 == param_2) goto LAB_71af3b08;
  }
  iVar4 = param_2 - uVar8;
  psVar3 = (short *)(*param_1 + uVar8 * 2);
  do {
    iVar6 = (int)*psVar3;
    sVar11 = (short)iVar12;
    sVar9 = (short)iVar10;
    iVar12 = (int)sVar11;
    if (sVar11 < iVar6) {
      iVar12 = iVar6;
    }
    sVar11 = (short)iVar12;
    iVar10 = (int)sVar9;
    if (iVar6 < sVar9) {
      iVar10 = iVar6;
    }
    sVar9 = (short)iVar10;
    iVar4 = iVar4 + -1;
    psVar3 = psVar3 + 1;
  } while (iVar4 != 0);
LAB_71af3b08:
  *param_3 = sVar9;
  *param_4 = sVar11;
  return;
}


// =========================================================================
// Function: FRtUfUIP_qTJLvTwXT_yM
// Entry: 0x71af3b14 | Size: 72 bytes
// =========================================================================

int FRtUfUIP_qTJLvTwXT_yM(short *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar2 = 0;
    iVar4 = 0x8000;
    iVar3 = 0;
    do {
      sVar1 = (short)iVar4;
      iVar4 = (int)sVar1;
      if ((int)sVar1 < (int)*param_1) {
        iVar4 = (int)*param_1;
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != iVar3);
    return iVar2;
  }
  return 0;
}


// =========================================================================
// Function: CNyRwXCZZVpAwahcCDlXh
// Entry: 0x71af3b5c | Size: 68 bytes
// =========================================================================

int CNyRwXCZZVpAwahcCDlXh(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar1 = 0;
    iVar3 = -0x80000000;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(param_1 + iVar2 * 4);
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
    return iVar1;
  }
  return 0;
}


