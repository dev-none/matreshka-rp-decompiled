// =========================================================================
// Function: VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW
// Entry: 0x71aba820 | Size: 20 bytes
// =========================================================================

void VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x7fffffff;
  return;
}


// =========================================================================
// Function: tBuMKLuUOdWUORPUQwmGXcwEVDzwFMltlXVdIXWsHcVWhbfw
// Entry: 0x71aba834 | Size: 40 bytes
// =========================================================================

void tBuMKLuUOdWUORPUQwmGXcwEVDzwFMltlXVdIXWsHcVWhbfw(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (param_2 <= param_1[1]) {
    iVar1 = param_2;
  }
  if (param_2 < *param_1) {
    param_2 = *param_1;
  }
  *param_1 = param_2;
  param_1[1] = iVar1;
  return;
}


// =========================================================================
// Function: KOlfLFKyZodUfRhhOlO_mWFTwtRVNkNhUHcFRivVTNSAFba
// Entry: 0x71aba85c | Size: 16 bytes
// =========================================================================

void KOlfLFKyZodUfRhhOlO_mWFTwtRVNkNhUHcFRivVTNSAFba(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x7fffffff;
  return;
}


// =========================================================================
// Function: KRMIYixtikqFOG_PaiqhBvhaWSUiTCGVEjbyHucr
// Entry: 0x71aba870 | Size: 32 bytes
// =========================================================================

void KRMIYixtikqFOG_PaiqhBvhaWSUiTCGVEjbyHucr(undefined8 *param_1)

{
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = 0x7fffffff00000000;
  param_1[1] = 0x7fffffff00000000;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: FYJuOgpVamiMNyJq_vOSQWMqasArkDtkZYVOVZTjmRNJOoDRYibf
// Entry: 0x71aba8a0 | Size: 112 bytes
// =========================================================================

void FYJuOgpVamiMNyJq_vOSQWMqasArkDtkZYVOVZTjmRNJOoDRYibf(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar1 = 1;
    if (*(char *)(param_1 + 0x19) != '\0') {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar2 <= *(int *)(param_1 + 0xc)) {
        iVar1 = iVar2;
      }
      if (iVar2 < *(int *)(param_1 + 8)) {
        iVar2 = *(int *)(param_1 + 8);
      }
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(param_1 + 0xc) = iVar1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) + 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


// =========================================================================
// Function: mrfazkv_lNWwNbbQ_YRUJFvPfcRxQKEhUOyUPEmZE_uUdnZLkGlRR
// Entry: 0x71aba910 | Size: 680 bytes
// =========================================================================

void mrfazkv_lNWwNbbQ_YRUJFvPfcRxQKEhUOyUPEmZE_uUdnZLkGlRR(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_1[6] == '\0') {
    param_1[4] = param_1[4] + 1;
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      return;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x19) != '\0') {
      iVar3 = param_1[4];
      iVar2 = param_1[1];
      if (iVar3 <= param_1[1]) {
        iVar2 = iVar3;
      }
      if (iVar3 < *param_1) {
        iVar3 = *param_1;
      }
      *param_1 = iVar3;
      param_1[1] = iVar2;
    }
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 6) = 0x100;
  }
  iVar2 = param_1[5];
  param_1[5] = iVar2 + 1;
  if (iVar2 + 1 != 1000) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_71204870;
  if (DAT_71204870 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_MaxRe_700715cf,0x2a,1,0x32,0x32);
    if (DAT_71204870 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x71204870);
        DAT_71204870 = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) goto LAB_71abaa10;
  }
  else {
LAB_71abaa10:
    iVar3 = *param_1;
    if (0x31 < iVar3) {
      iVar3 = 0x32;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,iVar3);
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_71204874;
  if (DAT_71204874 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_MinRe_7006bcbd,0x2a,1,0x32,0x32);
    if (DAT_71204874 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x71204874);
        DAT_71204874 = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) goto LAB_71abaa8c;
  }
  else {
LAB_71abaa8c:
    iVar3 = param_1[1];
    if (0x31 < iVar3) {
      iVar3 = 0x32;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,iVar3);
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_71204878;
  if (DAT_71204878 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_MaxCa_7006d9e7,0x2b,1,0x32,0x32);
    if (DAT_71204878 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x71204878);
        DAT_71204878 = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) goto LAB_71abab08;
  }
  else {
LAB_71abab08:
    iVar3 = param_1[2];
    if (0x31 < iVar3) {
      iVar3 = 0x32;
    }
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,iVar3);
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_7120487c;
  if (DAT_7120487c == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_MinCa_700650a3,0x2b,1,0x32,0x32);
    if (DAT_7120487c == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x7120487c);
        DAT_7120487c = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_71abab94;
  }
  iVar3 = param_1[3];
  if (0x31 < iVar3) {
    iVar3 = 0x32;
  }
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,iVar3);
LAB_71abab94:
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0] = 0;
  param_1[1] = 0x7fffffff;
  param_1[2] = 0;
  param_1[3] = 0x7fffffff;
  return;
}


// =========================================================================
// Function: yRuMvWfH_vpDvSqZdlzOrHMIDScpOoXynceYoZDKrGgGQbyEXnHVlGRpufYcowWVWkT
// Entry: 0x71ababe4 | Size: 24 bytes
// =========================================================================

bool yRuMvWfH_vpDvSqZdlzOrHMIDScpOoXynceYoZDKrGgGQbyEXnHVlGRpufYcowWVWkT(int param_1)

{
  return *(int *)(param_1 + 0x14) == 999;
}


// =========================================================================
// Function: OiEPXjYdhoZEYR_HkOfDQmmpBoYWAVxihRt
// Entry: 0x71abad80 | Size: 304 bytes
// =========================================================================

undefined4 *
OiEPXjYdhoZEYR_HkOfDQmmpBoYWAVxihRt
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
          )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  
  *param_1 = param_4;
  param_1[1] = param_5;
  iStack_34 = 0;
  iStack_38 = 0;
  iStack_3c = 0;
  if (param_5 != 0) {
    if (0x3fffffff < param_5) {
      FUN_71a0103c(&iStack_3c);
      FUN_71aaf264(&piStack_30);
      if (iStack_3c != 0) {
        iStack_38 = iStack_3c;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iStack_3c = thunk_MwhHq(param_5 << 2);
    iVar3 = iStack_3c + param_5 * 4;
    iStack_34 = iVar3;
    imp___aeabi_memclr4(iStack_3c,param_5 << 2);
    iStack_38 = iVar3;
  }
  FUN_71a7706c(&piStack_30,param_3,&iStack_3c);
  FUN_71aaef7c(param_1 + 2,param_2,&piStack_30);
  piVar2 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    while (piVar1 = piStack_2c, piVar1 != piVar2) {
      piStack_2c = piVar1 + -3;
      if (*piStack_2c != 0) {
        piVar1[-2] = *piStack_2c;
        thunk_qNQrlu();
      }
    }
    piStack_2c = piVar2;
    thunk_qNQrlu(piStack_30);
  }
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    thunk_qNQrlu();
  }
  param_1[5] = 0;
  return param_1;
}


// =========================================================================
// Function: dexshRSROpBPVAL_JkdEFYpKHeaTfWqG
// Entry: 0x71abaeb4 | Size: 164 bytes
// =========================================================================

int dexshRSROpBPVAL_JkdEFYpKHeaTfWqG(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    puVar2 = puVar6;
    if (puVar5 != puVar6) {
      do {
        puVar2 = puVar5 + -3;
        piVar4 = (int *)*puVar2;
        if (piVar4 != (int *)0x0) {
          piVar3 = (int *)puVar5[-2];
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
            piVar1 = (int *)*puVar2;
          }
          puVar5[-2] = piVar4;
          thunk_qNQrlu(piVar1);
        }
        puVar5 = puVar2;
      } while (puVar2 != puVar6);
      puVar2 = *(undefined4 **)(param_1 + 8);
    }
    *(undefined4 **)(param_1 + 0xc) = puVar6;
    thunk_qNQrlu(puVar2);
  }
  return param_1;
}


// =========================================================================
// Function: XEJujjfjRvljdhPkflmLTPbiepDJNbyejbwrocDPNFADtmbKkBRwfRqVvvAs
// Entry: 0x71abaf58 | Size: 504 bytes
// =========================================================================

void XEJujjfjRvljdhPkflmLTPbiepDJNbyejbwrocDPNFADtmbKkBRwfRqVvvAs(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  
  if (param_1[1] != 0) {
    piVar12 = (int *)param_1[2];
    bVar19 = (int *)param_1[3] == piVar12;
    piVar1 = param_1;
    if (!bVar19) {
      piVar1 = (int *)(piVar12[1] - *piVar12);
      bVar19 = piVar1 == (int *)0x0;
    }
    uVar2 = 0;
    if (!bVar19) {
      iVar15 = *param_1;
      uVar17 = param_1[5];
      uVar2 = uVar17;
      if (iVar15 != 0) {
        uVar10 = param_1[1] - 1;
        uVar8 = (param_1[3] - (int)piVar12 >> 2) * -0x55555555;
        uVar2 = ((int)piVar1 >> 2) * -0x55555555;
        iVar6 = *(int *)(param_2 + 0x2c);
        if (iVar6 == 0) {
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          uVar5 = 0;
          uVar18 = 1;
          if (1 < uVar2) {
            uVar18 = uVar2;
          }
          do {
            iVar11 = piVar12[uVar5 * 3];
            uVar13 = 0;
            iVar3 = *(int *)(*(int *)(param_2 + 0x28) + 8);
            iVar6 = *(int *)(*(int *)(param_2 + 0x28) + 0x1c);
            do {
              iVar7 = *(int *)(iVar11 + uVar13 * 0xc);
              puVar4 = *(undefined4 **)(iVar3 + iVar6 * uVar5 * 4 + uVar13 * 4);
              uVar9 = uVar17;
              iVar14 = iVar15;
              do {
                uVar16 = *(undefined4 *)(iVar7 + uVar9 * 4);
                uVar2 = 0;
                if (uVar9 < uVar10) {
                  uVar2 = uVar9 + 1;
                }
                *(undefined4 *)(iVar7 + uVar9 * 4) = *puVar4;
                iVar14 = iVar14 + -1;
                *puVar4 = uVar16;
                puVar4 = puVar4 + 1;
                uVar9 = uVar2;
              } while (iVar14 != 0);
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar18);
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar8);
        }
        else {
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          uVar18 = 1;
          if (1 < uVar2) {
            uVar18 = uVar2;
          }
          iVar3 = *(int *)(iVar6 + 8);
          uVar5 = 0;
          iVar6 = *(int *)(iVar6 + 0x1c);
          do {
            iVar11 = piVar12[uVar5 * 3];
            uVar13 = 0;
            do {
              iVar7 = *(int *)(iVar11 + uVar13 * 0xc);
              puVar4 = *(undefined4 **)(iVar3 + iVar6 * uVar5 * 4 + uVar13 * 4);
              uVar9 = uVar17;
              iVar14 = iVar15;
              do {
                uVar16 = *(undefined4 *)(iVar7 + uVar9 * 4);
                uVar2 = 0;
                if (uVar9 < uVar10) {
                  uVar2 = uVar9 + 1;
                }
                *(undefined4 *)(iVar7 + uVar9 * 4) = *puVar4;
                iVar14 = iVar14 + -1;
                *puVar4 = uVar16;
                puVar4 = puVar4 + 1;
                uVar9 = uVar2;
              } while (iVar14 != 0);
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar18);
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar8);
        }
      }
    }
    param_1[5] = uVar2;
  }
  return;
}


// =========================================================================
// Function: b_RvHDoSQUXTgLheNALosRwKIUkPhquFOVYRRvPrUnnFFloeoLShNgXxvdKxYOCsH
// Entry: 0x71abb2f0 | Size: 224 bytes
// =========================================================================

undefined4
b_RvHDoSQUXTgLheNALosRwKIUkPhquFOVYRRvPrUnnFFloeoLShNgXxvdKxYOCsH
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar1 = (int *)thunk_AflZVVREJqLpCfKEurMokXqleULsmOZkpQYBhtytxZaZdHTWzmBmrSAmNnMLjaHbYOn();
  piVar4 = (int *)0x0;
  if (*(char *)(param_1 + 0x34) == '\0') {
    piVar4 = (int *)thunk_D_KWRtYnPhUnVGuoTmDgYfGQJYtSweXBaDDMjIcTopRrVuqctEIFxo_NVzqxC_dncSOgAyz
                              (param_1,param_2,param_4);
  }
  piVar2 = (int *)thunk_nfrswZIrzhtwfdzBbsEzwckLRRidKawaepUwMpCPAYBtIkvlyhNevvX_GezBJQ
                            (param_1,param_2,param_3,param_4);
  uVar3 = thunk_HTKPtVOvHoKtIIYEpeTAqWArvDTMihLL_zStGzIbPZsTFbDFlCQNIRKVBhEqFAvwbHRyU_abZbLIS_CWOhwtGvfweHyc_e_EmzzD_DJxDocThfxUMeOHSNOtuilIGKsIbLqplMzziDyTjNuzcaAkZzvHKkMyS_mIZWKrduNYgynFIkDdudLjVFKvaHuGSanLZoFZfBCEYOPrMMJsdNTUcEBsW
                    (param_1,param_2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return uVar3;
}


// =========================================================================
// Function: HTKPtVOvHoKtIIYEpeTAqWArvDTMihLL_zStGzIbPZsTFbDFlCQNIRKVBhEqFAvwbHRyU_abZbLIS_CWOhwtGvfweHyc_e_EmzzD_DJxDocThfxUMeOHSNOtuilIGKsIbLqplMzziDyTjNuzcaAkZzvHKkMyS_mIZWKrduNYgynFIkDdudLjVFKvaHuGSanLZoFZfBCEYOPrMMJsdNTUcEBsW
// Entry: 0x71abb45c | Size: 244 bytes
// =========================================================================

undefined4 *
HTKPtVOvHoKtIIYEpeTAqWArvDTMihLL_zStGzIbPZsTFbDFlCQNIRKVBhEqFAvwbHRyU_abZbLIS_CWOhwtGvfweHyc_e_EmzzD_DJxDocThfxUMeOHSNOtuilIGKsIbLqplMzziDyTjNuzcaAkZzvHKkMyS_mIZWKrduNYgynFIkDdudLjVFKvaHuGSanLZoFZfBCEYOPrMMJsdNTUcEBsW
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined4 *)thunk_MwhHq(0x230);
  uVar4 = *param_5;
  *param_5 = 0;
  uVar5 = *param_6;
  *param_6 = 0;
  uVar6 = *param_7;
  *puVar2 = &DAT_70b135e4;
  *param_7 = 0;
  uVar3 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x71204880);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_71204880 = DAT_71204880 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar3);
  puVar2[1] = uVar3;
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(puVar2 + 2,param_1);
  *(undefined2 *)(puVar2 + 0x7b) = 0;
  *(undefined1 *)(puVar2 + 0x8b) = 0;
  puVar2[0x7d] = uVar4;
  puVar2[0x7e] = uVar5;
  puVar2[0x7f] = uVar6;
  puVar2[0x82] = 0;
  puVar2[0x83] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar2[0x84] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar2[0x85] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)puVar2 + 0x215) = 0;
  *(undefined1 *)(puVar2 + 0x81) = 0;
  puVar2[0x7c] = param_2;
  puVar2[0x80] = 0;
  *(undefined4 *)((int)puVar2 + 0x219) = 0;
  return puVar2;
}


// =========================================================================
// Function: zANtquyicsAuBcMgQLwuPulakLbCVbxncfGElPtKaCHpMMXFAKrdQbKTSIcvrxhEVJWJhcImhJITdWYiOfyxzeGsuQZfpXLwkDNhpiDtlcqwVTvk_SpqxlQeBUqvmujTnpJ_sEWEqAh
// Entry: 0x71abb5e8 | Size: 236 bytes
// =========================================================================

undefined4
zANtquyicsAuBcMgQLwuPulakLbCVbxncfGElPtKaCHpMMXFAKrdQbKTSIcvrxhEVJWJhcImhJITdWYiOfyxzeGsuQZfpXLwkDNhpiDtlcqwVTvk_SpqxlQeBUqvmujTnpJ_sEWEqAh
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_20 = (int *)0x0;
  if (*(char *)(param_1 + 0x34) == '\0') {
    piStack_20 = (int *)thunk_D_KWRtYnPhUnVGuoTmDgYfGQJYtSweXBaDDMjIcTopRrVuqctEIFxo_NVzqxC_dncSOgAyz
                                  (param_1,param_2,param_4);
  }
  piStack_24 = (int *)thunk_nfrswZIrzhtwfdzBbsEzwckLRRidKawaepUwMpCPAYBtIkvlyhNevvX_GezBJQ
                                (param_1,param_2,param_3,param_4);
  piStack_1c = (int *)*param_5;
  *param_5 = 0;
  uVar1 = thunk_HTKPtVOvHoKtIIYEpeTAqWArvDTMihLL_zStGzIbPZsTFbDFlCQNIRKVBhEqFAvwbHRyU_abZbLIS_CWOhwtGvfweHyc_e_EmzzD_DJxDocThfxUMeOHSNOtuilIGKsIbLqplMzziDyTjNuzcaAkZzvHKkMyS_mIZWKrduNYgynFIkDdudLjVFKvaHuGSanLZoFZfBCEYOPrMMJsdNTUcEBsW
                    (param_1,param_2,&piStack_1c,0,&piStack_1c,&piStack_20,&piStack_24);
  if (piStack_24 != (int *)0x0) {
    (**(code **)(*piStack_24 + 4))();
  }
  if (piStack_20 != (int *)0x0) {
    (**(code **)(*piStack_20 + 4))();
  }
  if (piStack_1c != (int *)0x0) {
    (**(code **)(*piStack_1c + 4))();
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_71abb7ac
// Entry: 0x71abb7ac | Size: 136 bytes
// =========================================================================

void FUN_71abb7ac(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  piVar1 = *(int **)(param_1 + 500);
  *(undefined4 *)(param_1 + 500) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar2 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71abb834
// Entry: 0x71abb834 | Size: 64 bytes
// =========================================================================

void FUN_71abb834(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x1fc) + 8))(*(int **)(param_1 + 0x1fc),param_2);
  iVar1 = (**(code **)(**(int **)(param_1 + 500) + 0x20))();
  *(int *)(param_2 + 0x10) = iVar1 << 2;
  return;
}


// =========================================================================
// Function: FUN_71abb884
// Entry: 0x71abb884 | Size: 764 bytes
// =========================================================================

void FUN_71abb884(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  if (*(char *)(param_1 + 0x1ed) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x71abba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 500) + 0x14))();
    return;
  }
  if (*(char *)(param_1 + 0x1ec) == '\0') {
    *(undefined1 *)(param_1 + 0x1ec) = 1;
    (**(code **)(**(int **)(param_1 + 500) + 8))();
    piVar2 = *(int **)(param_1 + 0x1f8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2,1);
    }
  }
  thunk_KBgMzGtnUlKQQnGttdHLgonjPDuhrjssZLsrIkUhmLLskDiuvKTvkPKlps(&uStack_30,param_2,0,0);
  if ((*(int *)(param_1 + 0x214) == 2) && (*(char *)(param_1 + 0x1ed) != '\0')) {
    piVar2 = *(int **)(param_1 + 0x1f8);
    uStack_2c = 1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2,1);
    }
    iVar3 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
    if (iVar3 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70096367,s_____webrtc_apm_src_webrtc_module_7006e188,0x472,
                 s_Reset_due_to_render_buffer_overr_7006cc43,*(undefined4 *)(param_1 + 0x218));
    }
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 500) + 0x10))();
  if ((iVar3 == 1) && (piVar2 = *(int **)(param_1 + 0x1f8), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 8))(piVar2,0);
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x1f8);
    uVar4 = (**(code **)(**(int **)(param_1 + 500) + 0x2c))();
    uVar5 = (**(code **)(**(int **)(param_1 + 500) + 0x20))();
    (**(code **)(*piVar2 + 0x10))(&uStack_48,piVar2,uVar4,uVar5,param_5);
    *(undefined8 *)(param_1 + 0x21c) = uStack_48;
    *(undefined8 *)(param_1 + 0x224) = uStack_40;
    *(char *)(param_1 + 0x22c) = cStack_38;
    if ((*(char *)(param_1 + 0x22c) != '\0') &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 500) + 0x18))
                          (*(int **)(param_1 + 500),*(undefined4 *)(param_1 + 0x220)), iVar3 != 0))
    {
      uVar7 = 2;
      if (*(char *)(param_1 + 0x3d) == '\0') {
        uVar7 = 1;
      }
      iVar3 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(uVar7);
      if (iVar3 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_7009636b,s_____webrtc_apm_src_webrtc_module_7006e188,uVar7 | 0x590,
                   s_Delay_changed_to_7006d3ee,*(undefined4 *)(param_1 + 0x220),s_at_block_7006f2c2,
                   *(undefined4 *)(param_1 + 0x218));
      }
      uStack_2c = 2;
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x14))();
    uStack_28 = CONCAT31(uStack_28._1_3_,uVar1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 500) + 0x1c))();
    iVar3 = (**(code **)(**(int **)(param_1 + 500) + 0x34))();
    if (iVar3 == 0) goto LAB_71abbb6c;
  }
  uVar5 = uStack_28;
  uVar4 = uStack_2c;
  piVar2 = *(int **)(param_1 + 0x1fc);
  uVar6 = (**(code **)(**(int **)(param_1 + 500) + 0x28))();
  (**(code **)(*piVar2 + 0xc))
            (piVar2,uStack_30,uVar4,uVar5,param_3,param_1 + 0x21c,uVar6,param_4,param_5);
LAB_71abbb6c:
  thunk_khtniTLLpCBdThwNHSlgDgWaRBagFMuUEorAnyIwuIOgXMOUmU(param_1 + 0x200,0);
  return;
}


// =========================================================================
// Function: FUN_71abbb9c
// Entry: 0x71abbb9c | Size: 92 bytes
// =========================================================================

void FUN_71abbb9c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 500) + 0xc))();
  *(int *)(param_1 + 0x214) = iVar1;
  thunk_EtUybhxFhLSEtkJJKuXzCsbmqLXxxyNHQZnIeQxpWugRLOVgI(param_1 + 0x200,iVar1 != 0);
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  if (*(int **)(param_1 + 0x1f8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x71abbbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x1f8) + 0xc))();
    return;
  }
  return;
}


// =========================================================================
// Function: AflZVVREJqLpCfKEurMokXqleULsmOZkpQYBhtytxZaZdHTWzmBmrSAmNnMLjaHbYOn
// Entry: 0x71abc0ac | Size: 824 bytes
// =========================================================================

undefined4 *
AflZVVREJqLpCfKEurMokXqleULsmOZkpQYBhtytxZaZdHTWzmBmrSAmNnMLjaHbYOn
          (int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  puVar2 = (undefined4 *)thunk_MwhHq(0x318);
  *puVar2 = &DAT_70b13620;
  uVar3 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x71204884);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_71204884 = DAT_71204884 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar3);
  puVar2[1] = uVar3;
  uVar3 = thunk_YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR();
  puVar2[2] = uVar3;
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(puVar2 + 3,param_1);
  iVar6 = *(int *)(param_1 + 0xc);
  puVar2[0x7e] = iVar6;
  puVar2[0x7d] = (uint)*(byte *)((int)puVar2 + 0x41) << 1;
  uVar3 = imp_powf(0x41200000,(float)puVar2[0x43] / 20.0);
  puVar2[0x7c] = uVar3;
  if (iVar6 == 0) {
    iVar6 = 0x40;
  }
  else {
    iVar6 = FUN_71ba0484(0x40,iVar6);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x54);
  puVar2[0x7f] = iVar6;
  iVar6 = FUN_71ba0484((iVar4 * 0x18 + 0x21) * iVar6);
  puVar5 = puVar2 + 0x80;
  thunk_TZr_hsFYHyiAotTqIKhuIyvatxLAU(puVar5,iVar7 + iVar6 + 1,param_2 / 16000,param_3);
  puVar10 = puVar2 + 0x86;
  thunk_jKXildpFEQbiOaiYZFUjIVbrreqBhhi
            (puVar10,((int)(puVar2[0x82] - puVar2[0x81]) >> 2) * -0x33333333,param_3);
  puVar8 = puVar2 + 0x8c;
  thunk_YieXYjbYJNsVuFBwVBPuijekz
            (puVar8,((int)(puVar2[0x82] - puVar2[0x81]) >> 2) * -0x33333333,param_3);
  *(undefined1 *)(puVar2 + 0x93) = 1;
  puVar2[0x92] = puVar2[5];
  thunk_gtHBzTIpOHpXC_dpUUIKpgNgwIiDyGZAkJpooGkXKMgTrPqnLTFiRZgFtH_IOcolmYSjQNcfImBAzrCjS
            (puVar2 + 0x94,puVar5,puVar10,puVar8);
  iVar6 = FUN_71ba0484(0x40,puVar2[0x7e]);
  thunk_okkW_SyMKxZimqhEFbLoMmJwHHWNkWG_QKkdWeu
            (puVar2 + 0x98,(*(int *)(param_1 + 0x10) * 0x18 + 0x21) * iVar6);
  thunk_AfJnnNxayrnorjUpWhFXHNAjUxaHLlKQewSKBFekDAhJZvSiButnBKNkXZRrErPwFRsTzFPuQLURpQLrl
            (puVar2 + 0x9e,param_3,param_1 + 0x38);
  thunk_moJLdLfsjGEWNYxoFEwBWOYy(puVar2 + 0xaa,puVar2[0x7e]);
  thunk_WcWZMFyJwpTTVYYbNvFKVQ(puVar2 + 0xb1);
  piVar11 = puVar2 + 0xb2;
  *piVar11 = 0;
  uVar9 = puVar2[0x7f];
  puVar2[0xb3] = 0;
  puVar2[0xb4] = 0;
  if (uVar9 != 0) {
    if (0x3fffffff < uVar9) {
      FUN_71a0103c(piVar11);
      if (*piVar11 != 0) {
        puVar2[0xb3] = *piVar11;
        thunk_qNQrlu();
      }
      thunk_RojLCGwtwXzRzGHcMRBkeMK(puVar2 + 0xb1);
      thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(puVar2 + 0xae);
      thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(puVar2 + 0xab);
      if (puVar2[0xa5] != 0) {
        puVar2[0xa6] = puVar2[0xa5];
        thunk_qNQrlu();
      }
      thunk_izWkqxnrAjptSfTtgJZyBnJUfaDsiGyPdMkrxya(puVar2 + 0x98);
      thunk_UNWEsKyMSjcdKAz_lJTFjtctZdFy(puVar2 + 0x94);
      thunk_LYlxYtwnixwzNxyS_mbupwFE(puVar8);
      thunk_XSlNUnzykXrsPmHUxMIgfRVYuHZRQu(puVar10);
      thunk_NqxzdvAGQNPXiaqFoaVoDKuWWya(puVar5);
      FUN_71a76530(puVar2 + 1);
      thunk_qNQrlu(puVar2);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar6 = thunk_MwhHq(uVar9 << 2);
    iVar4 = iVar6 + uVar9 * 4;
    puVar2[0xb4] = iVar4;
    puVar2[0xb2] = iVar6;
    imp___aeabi_memclr4(iVar6,uVar9 << 2);
    puVar2[0xb3] = iVar4;
  }
  puVar2[0xb8] = 1;
  puVar2[0xb5] = *(undefined4 *)(param_1 + 0x54);
  puVar2[0xba] = 0;
  puVar2[0xbb] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puVar2[0xbc] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar2[0xbd] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar2[0xc3] = 0;
  puVar2[0xc4] = 0;
  *(undefined1 *)(puVar2 + 0xc2) = 0;
  *(undefined1 *)(puVar2 + 0xc1) = 0;
  *(undefined1 *)(puVar2 + 0xc0) = 0;
  puVar2[0xbf] = 0;
  puVar2[0xb7] = 0;
  *(undefined1 *)(puVar2 + 0xb6) = 0;
  *(undefined1 *)(puVar2 + 0xbe) = 0;
  FUN_71abc440(puVar2);
  return puVar2;
}


// =========================================================================
// Function: FUN_71abc440
// Entry: 0x71abc440 | Size: 568 bytes
// =========================================================================

void FUN_71abc440(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  undefined4 extraout_r1_00;
  uint uVar5;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 1;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  cVar1 = *(char *)(param_1 + 0x304);
  FUN_71ba2da8(*(int *)(param_1 + 0x1fc) + *(int *)(param_1 + 0x270) + *(int *)(param_1 + 0x260));
  *(undefined4 *)(param_1 + 0x274) = extraout_r1_00;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(*(undefined4 *)(param_1 + 500));
    if (iVar2 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_700661a2,
                 *(uint *)(param_1 + 500) | 0xb68,s_Applying_total_delay_of_7006178a,iVar3,
                 s_blocks__700672fc);
    }
    iVar2 = *(int *)(param_1 + 0x218);
    iVar7 = *(int *)(param_1 + 0x228);
    FUN_71ba2da8((*(int *)(param_1 + 0x210) - iVar3) + *(int *)(param_1 + 0x200));
    *(undefined4 *)(param_1 + 0x214) = extraout_r1_05;
    iVar6 = *(int *)(param_1 + 0x230);
    cVar1 = *(char *)(param_1 + 0x24c);
    iVar8 = *(int *)(param_1 + 0x240);
    FUN_71ba2da8(iVar7 + iVar3 + iVar2,iVar2);
    *(undefined4 *)(param_1 + 0x22c) = extraout_r1_06;
    FUN_71ba2da8(iVar8 + iVar3 + iVar6,iVar6);
    *(undefined4 *)(param_1 + 0x244) = extraout_r1_07;
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x24c) = 0;
    }
    return;
  }
  uVar5 = (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x204) >> 2) * -0x33333333 +
          ~*(uint *)(param_1 + 0x2d4);
  uVar9 = *(int *)(param_1 + 0x300) - 2;
  if (*(int *)(param_1 + 0x300) < 3) {
    uVar9 = 1;
  }
  if (uVar5 < uVar9) {
    uVar9 = uVar5;
  }
  iVar2 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(*(undefined4 *)(param_1 + 500));
  if (iVar2 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_700661a2,
               *(uint *)(param_1 + 500) | 0xb68,s_Applying_total_delay_of_7006178a,uVar9,
               s_blocks__700672fc);
  }
  uVar10 = *(undefined4 *)(param_1 + 0x1fc);
  iVar6 = *(int *)(param_1 + 0x218);
  FUN_71ba2da8((*(int *)(param_1 + 0x210) - uVar9) + *(int *)(param_1 + 0x200));
  *(undefined4 *)(param_1 + 0x214) = extraout_r1_01;
  FUN_71ba2da8(*(int *)(param_1 + 0x240) + uVar9 + *(int *)(param_1 + 0x230));
  iVar7 = *(int *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x244) = extraout_r1_02;
  FUN_71ba2da8(iVar7 + uVar9 + iVar6,iVar6);
  cVar1 = *(char *)(param_1 + 0x24c);
  *(int *)(param_1 + 0x22c) = extraout_r1_03;
  iVar2 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x264) >> 2;
  FUN_71ba33fc((*(int *)(param_1 + 0x274) - *(int *)(param_1 + 0x270)) + iVar2,iVar2);
  iVar3 = FUN_71ba0440(extraout_r1_04,uVar10);
  iVar2 = extraout_r1_03;
  if (extraout_r1_03 < iVar7) {
    iVar2 = extraout_r1_03 + iVar6;
  }
  bVar11 = cVar1 == '\0';
  uVar4 = extraout_r1;
  if (bVar11) {
    uVar4 = 1;
  }
  if (bVar11) {
    *(undefined1 *)(param_1 + 0x24c) = uVar4;
  }
  *(undefined1 *)(param_1 + 0x308) = 0;
  *(int *)(param_1 + 0x248) = iVar2 - (iVar7 + iVar3);
  return;
}


// =========================================================================
// Function: FUN_71abc698
// Entry: 0x71abc698 | Size: 152 bytes
// =========================================================================

int FUN_71abc698(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c8) != 0) {
    *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2c8);
    thunk_qNQrlu();
  }
  thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1 + 0x2c4);
  thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(param_1 + 0x2b8);
  thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(param_1 + 0x2ac);
  if (*(int *)(param_1 + 0x294) != 0) {
    *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x294);
    thunk_qNQrlu();
  }
  thunk_izWkqxnrAjptSfTtgJZyBnJUfaDsiGyPdMkrxya(param_1 + 0x260);
  thunk_UNWEsKyMSjcdKAz_lJTFjtctZdFy(param_1 + 0x250);
  thunk_LYlxYtwnixwzNxyS_mbupwFE(param_1 + 0x230);
  thunk_XSlNUnzykXrsPmHUxMIgfRVYuHZRQu(param_1 + 0x218);
  thunk_NqxzdvAGQNPXiaqFoaVoDKuWWya(param_1 + 0x200);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71abc730
// Entry: 0x71abc730 | Size: 20 bytes
// =========================================================================

void FUN_71abc730(void)

{
  FUN_71abc698();
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71abc744
// Entry: 0x71abc744 | Size: 1740 bytes
// =========================================================================

undefined4 FUN_71abc744(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined4 uVar7;
  int iVar8;
  int extraout_r1;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  uint *puVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_128 [260];
  
  puVar17 = (uint *)(param_1 + 0x2f0);
  uVar2 = *puVar17;
  *puVar17 = uVar2 + 1;
  *(uint *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + (uint)(0xfffffffe < uVar2);
  if (*(char *)(param_1 + 0x24c) != '\0') {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      *(undefined4 *)(param_1 + 0x2dc) = 1;
      *(undefined1 *)(param_1 + 0x2d8) = 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2dc);
      iVar8 = iVar3 + 1;
      *(int *)(param_1 + 0x2dc) = iVar8;
      if (*(int *)(param_1 + 0x2e0) <= iVar3) {
        *(int *)(param_1 + 0x2e0) = iVar8;
        iVar3 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW
                          (*(undefined4 *)(param_1 + 500));
        if (iVar3 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_700963bd,s_____webrtc_apm_src_webrtc_module_700661a2,
                     *(uint *)(param_1 + 500) | 0x698,s_New_max_number_api_jitter_observ_7006ea37,
                     *puVar17,*(undefined4 *)(param_1 + 0x2f4),&DAT_700639ee,
                     *(undefined4 *)(param_1 + 0x2dc),s_blocks_7006c357);
        }
      }
    }
  }
  iVar20 = 0;
  iVar8 = *(int *)(param_1 + 0x214);
  iVar3 = *(int *)(param_1 + 0x218);
  if (0 < *(int *)(param_1 + 0x228)) {
    iVar3 = *(int *)(param_1 + 0x228);
  }
  *(int *)(param_1 + 0x228) = iVar3 + -1;
  iVar3 = *(int *)(param_1 + 0x230);
  if (0 < *(int *)(param_1 + 0x240)) {
    iVar3 = *(int *)(param_1 + 0x240);
  }
  *(int *)(param_1 + 0x240) = iVar3 + -1;
  iVar3 = *(int *)(param_1 + 0x210);
  iVar19 = *(int *)(param_1 + 0x274);
  if (iVar3 < *(int *)(param_1 + 0x200) + -1) {
    iVar20 = iVar3 + 1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x2f8);
  *(int *)(param_1 + 0x210) = iVar20;
  FUN_71ba2da8((*(int *)(param_1 + 0x270) - *(int *)(param_1 + 0x1fc)) + *(int *)(param_1 + 0x260));
  *(int *)(param_1 + 0x270) = extraout_r1;
  if (uVar2 == 0) {
    pfVar10 = *(float **)(param_2 + 8);
    uVar11 = *(uint *)(param_1 + 0x2fc);
    if (*(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100) * 64.0 <
        *pfVar10 * *pfVar10 + 0.0 + pfVar10[1] * pfVar10[1] + pfVar10[2] * pfVar10[2] +
        pfVar10[3] * pfVar10[3] + pfVar10[4] * pfVar10[4] + pfVar10[5] * pfVar10[5] +
        pfVar10[6] * pfVar10[6] + pfVar10[7] * pfVar10[7] + pfVar10[8] * pfVar10[8] +
        pfVar10[9] * pfVar10[9] + pfVar10[10] * pfVar10[10] + pfVar10[0xb] * pfVar10[0xb] +
        pfVar10[0xc] * pfVar10[0xc] + pfVar10[0xd] * pfVar10[0xd] + pfVar10[0xe] * pfVar10[0xe] +
        pfVar10[0xf] * pfVar10[0xf] + pfVar10[0x10] * pfVar10[0x10] + pfVar10[0x11] * pfVar10[0x11]
        + pfVar10[0x12] * pfVar10[0x12] + pfVar10[0x13] * pfVar10[0x13] +
        pfVar10[0x14] * pfVar10[0x14] + pfVar10[0x15] * pfVar10[0x15] +
        pfVar10[0x16] * pfVar10[0x16] + pfVar10[0x17] * pfVar10[0x17] +
        pfVar10[0x18] * pfVar10[0x18] + pfVar10[0x19] * pfVar10[0x19] +
        pfVar10[0x1a] * pfVar10[0x1a] + pfVar10[0x1b] * pfVar10[0x1b] +
        pfVar10[0x1c] * pfVar10[0x1c] + pfVar10[0x1d] * pfVar10[0x1d] +
        pfVar10[0x1e] * pfVar10[0x1e] + pfVar10[0x1f] * pfVar10[0x1f] +
        pfVar10[0x20] * pfVar10[0x20] + pfVar10[0x21] * pfVar10[0x21] +
        pfVar10[0x22] * pfVar10[0x22] + pfVar10[0x23] * pfVar10[0x23] +
        pfVar10[0x24] * pfVar10[0x24] + pfVar10[0x25] * pfVar10[0x25] +
        pfVar10[0x26] * pfVar10[0x26] + pfVar10[0x27] * pfVar10[0x27] +
        pfVar10[0x28] * pfVar10[0x28] + pfVar10[0x29] * pfVar10[0x29] +
        pfVar10[0x2a] * pfVar10[0x2a] + pfVar10[0x2b] * pfVar10[0x2b] +
        pfVar10[0x2c] * pfVar10[0x2c] + pfVar10[0x2d] * pfVar10[0x2d] +
        pfVar10[0x2e] * pfVar10[0x2e] + pfVar10[0x2f] * pfVar10[0x2f] +
        pfVar10[0x30] * pfVar10[0x30] + pfVar10[0x31] * pfVar10[0x31] +
        pfVar10[0x32] * pfVar10[0x32] + pfVar10[0x33] * pfVar10[0x33] +
        pfVar10[0x34] * pfVar10[0x34] + pfVar10[0x35] * pfVar10[0x35] +
        pfVar10[0x36] * pfVar10[0x36] + pfVar10[0x37] * pfVar10[0x37] +
        pfVar10[0x38] * pfVar10[0x38] + pfVar10[0x39] * pfVar10[0x39] +
        pfVar10[0x3a] * pfVar10[0x3a] + pfVar10[0x3b] * pfVar10[0x3b] +
        pfVar10[0x3c] * pfVar10[0x3c] + pfVar10[0x3d] * pfVar10[0x3d] +
        pfVar10[0x3e] * pfVar10[0x3e] + pfVar10[0x3f] * pfVar10[0x3f]) {
      uVar11 = uVar11 + 1;
    }
    *(uint *)(param_1 + 0x2fc) = uVar11;
    *(bool *)(param_1 + 0x2f8) = 0x13 < uVar11;
  }
  iVar4 = *(int *)(param_1 + 0x204);
  piVar9 = (int *)(iVar4 + iVar20 * 0x14);
  iVar21 = *piVar9;
  if (iVar21 != 0) {
    uVar2 = piVar9[1];
  }
  if (iVar21 != 0 && uVar2 != 0) {
    iVar4 = 0;
    do {
      uVar11 = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x204) + *(int *)(param_1 + 0x210) * 0x14;
        imp___aeabi_memmove4
                  (*(int *)(iVar5 + 8) + (iVar4 * *(int *)(iVar5 + 4) + uVar11) * 0x100,
                   *(int *)(param_2 + 8) + (iVar4 * *(int *)(param_2 + 4) + uVar11) * 0x100,0x100);
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar21);
    iVar4 = *(int *)(param_1 + 0x204);
    if (*(float *)(param_1 + 0x1f0) != 1.0) {
      iVar12 = 0;
      iVar4 = iVar4 + *(int *)(param_1 + 0x210) * 0x14;
      iVar5 = *(int *)(iVar4 + 4);
      iVar4 = *(int *)(iVar4 + 8);
      do {
        uVar11 = 0;
        iVar14 = iVar4;
        do {
          iVar16 = 0;
          do {
            pfVar10 = (float *)(iVar14 + iVar16);
            iVar16 = iVar16 + 4;
            *pfVar10 = *(float *)(param_1 + 0x1f0) * *pfVar10;
          } while (iVar16 != 0x100);
          uVar11 = uVar11 + 1;
          iVar14 = iVar14 + 0x100;
        } while (uVar11 != uVar2);
        iVar12 = iVar12 + 1;
        iVar4 = iVar4 + iVar5 * 0x100;
      } while (iVar12 != iVar21);
      iVar4 = *(int *)(param_1 + 0x204);
    }
  }
  thunk_hHzBnBTywhUkouDJQNHlHyGdaesTsTQViBbgJCLvfXgIeJTDULwRapDGbbOfsGyXUzaqbPnbYumrpv
            (param_1 + 0x278,iVar4 + *(int *)(param_1 + 0x210) * 0x14,auStack_128);
  iVar21 = *(int *)(param_1 + 0x2c8);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2cc) != iVar21) {
    iVar4 = iVar21;
  }
  thunk_chvRUtuIGZPBZQaJVl_qWvznbKDfQrtcoxKVjtJyDoWgg_Sn_itrHCUhpjLkCkCAoIrzavOhMV
            (param_1 + 0x2a8,auStack_128,0x40,iVar4,*(int *)(param_1 + 0x2cc) - iVar21 >> 2);
  pauVar6 = *(undefined1 (**) [16])(param_1 + 0x2c8);
  pauVar18 = *(undefined1 (**) [16])(param_1 + 0x2cc);
  if (pauVar18 != pauVar6) {
    uVar2 = (int)pauVar18 + (-4 - (int)pauVar6);
    pauVar15 = (undefined1 (*) [16])(*(int *)(param_1 + 0x264) + *(int *)(param_1 + 0x270) * 4);
    if ((0x5b < uVar2) &&
       ((pauVar18 <= pauVar15 ||
        (*pauVar15 + (uVar2 & 0xfffffffc) + 4 <=
         (undefined1 *)((int)pauVar18 + (-4 - (uVar2 & 0xfffffffc))))))) {
      uVar11 = (uVar2 >> 2) + 1;
      uVar22 = uVar11 & 0xfffffffc;
      pauVar13 = (undefined1 (*) [16])((int)pauVar18 + uVar22 * -4);
      puVar1 = *pauVar15;
      uVar2 = uVar22;
      do {
        pauVar18 = pauVar18 + -1;
        uVar2 = uVar2 - 4;
        auVar25 = vrev(*pauVar18,4);
        *(longlong *)*pauVar15 = auVar25._8_8_;
        *(longlong *)(*pauVar15 + 8) = auVar25._0_8_;
        pauVar15 = pauVar15 + 1;
      } while (uVar2 != 0);
      pauVar15 = (undefined1 (*) [16])(puVar1 + uVar22 * 4);
      pauVar18 = pauVar13;
      if (uVar11 == uVar22) goto LAB_71abcca8;
    }
    do {
      pauVar18 = (undefined1 (*) [16])(pauVar18[-1] + 0xc);
      *(undefined4 *)*pauVar15 = *(undefined4 *)*pauVar18;
      pauVar15 = (undefined1 (*) [16])(*pauVar15 + 4);
    } while (pauVar18 != pauVar6);
  }
LAB_71abcca8:
  iVar4 = *(int *)(param_1 + 0x204);
  iVar21 = iVar4 + *(int *)(param_1 + 0x210) * 0x14;
  if (0 < *(int *)(iVar21 + 4)) {
    iVar12 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x234) + *(int *)(param_1 + 0x240) * 0xc);
    do {
      thunk_SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
                (param_1 + 0x2c4,*(int *)(iVar21 + 8) + iVar16 * 0x100,0x40,
                 *(int *)(iVar4 + iVar3 * 0x14 + 8) + iVar16 * 0x100,0x40,0,iVar5 + iVar16 * 0x208);
      iVar4 = *(int *)(*(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x228) * 0xc);
      iVar5 = *(int *)(*(int *)(param_1 + 0x234) + *(int *)(param_1 + 0x240) * 0xc);
      iVar21 = 0;
      do {
        pfVar10 = (float *)(iVar5 + iVar12 + iVar21);
        fVar24 = pfVar10[0x41];
        fVar23 = *pfVar10;
        pfVar10 = (float *)(iVar4 + iVar14 + iVar21);
        iVar21 = iVar21 + 4;
        *pfVar10 = fVar24 * fVar24 + fVar23 * fVar23;
      } while (iVar21 != 0x104);
      iVar12 = iVar12 + 0x208;
      iVar4 = *(int *)(param_1 + 0x204);
      iVar14 = iVar14 + 0x104;
      iVar16 = iVar16 + 1;
      iVar21 = iVar4 + *(int *)(param_1 + 0x210) * 0x14;
    } while (iVar16 < *(int *)(iVar21 + 4));
  }
  uVar7 = 0;
  if ((uint)(LZCOUNT(iVar19 - extraout_r1) | LZCOUNT(iVar8 - iVar20)) >> 5 != 0) {
    FUN_71abc440(param_1);
    uVar7 = 2;
  }
  return uVar7;
}


// =========================================================================
// Function: FUN_71abce2c
// Entry: 0x71abce2c | Size: 776 bytes
// =========================================================================

undefined4 FUN_71abce2c(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  
  puVar11 = (uint *)(param_1 + 0x2e8);
  uVar2 = *puVar11;
  *puVar11 = uVar2 + 1;
  *(uint *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + (uint)(0xfffffffe < uVar2);
  if (*(char *)(param_1 + 0x24c) != '\0') {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      iVar10 = *(int *)(param_1 + 0x2dc);
      iVar6 = iVar10 + 1;
      *(int *)(param_1 + 0x2dc) = iVar6;
      if (*(int *)(param_1 + 0x2e0) <= iVar10) {
        *(int *)(param_1 + 0x2e0) = iVar6;
        iVar10 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW
                           (*(undefined4 *)(param_1 + 500));
        if (iVar10 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_700963bd,s_____webrtc_apm_src_webrtc_module_700661a2,
                     *(uint *)(param_1 + 500) | 0x830,s_New_max_number_api_jitter_observ_7006ea6b,
                     *puVar11,*(undefined4 *)(param_1 + 0x2ec),&DAT_700639ee,
                     *(undefined4 *)(param_1 + 0x2dc),s_blocks_7006c357);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2dc) = 1;
      *(undefined1 *)(param_1 + 0x2d8) = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x270);
  iVar9 = *(int *)(param_1 + 0x274);
  iVar10 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x264) >> 2;
  FUN_71ba33fc((iVar9 - iVar6) + iVar10,iVar10);
  iVar10 = *(int *)(param_1 + 0x1fc);
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar3 = FUN_71ba0440(extraout_r1,iVar10);
  uVar5 = *(int *)(param_1 + 0x310) + 1;
  *(uint *)(param_1 + 0x310) = uVar5;
  uVar2 = *(uint *)(param_1 + 0x30c);
  if (uVar3 < *(uint *)(param_1 + 0x30c)) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0x30c) = uVar2;
  if (uVar7 <= uVar5) {
    *(uint *)(param_1 + 0x30c) = uVar3;
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (*(uint *)(param_1 + 0x10) < uVar2) {
      iVar10 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW
                         (*(undefined4 *)(param_1 + 500));
      if (iVar10 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_700963c4,s_____webrtc_apm_src_webrtc_module_700661a2,
                   *(uint *)(param_1 + 500) | 0x888,s_Excess_render_blocks_detected_at_700639f2,
                   *puVar11,*(undefined4 *)(param_1 + 0x2ec));
      }
      FUN_71abc440(param_1);
      uVar4 = 2;
      goto LAB_71abd114;
    }
  }
  if (iVar9 != iVar6) {
    iVar8 = *(int *)(param_1 + 0x210);
    iVar6 = *(int *)(param_1 + 0x214);
    FUN_71ba2da8((iVar9 - iVar10) + *(int *)(param_1 + 0x260));
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x274) = extraout_r1_00;
    if (iVar6 != iVar8) {
      iVar10 = 0;
      if (iVar6 < *(int *)(param_1 + 0x200) + -1) {
        iVar10 = iVar6 + 1;
      }
      iVar6 = *(int *)(param_1 + 0x230);
      if (0 < *(int *)(param_1 + 0x244)) {
        iVar6 = *(int *)(param_1 + 0x244);
      }
      iVar9 = *(int *)(param_1 + 0x218);
      if (0 < *(int *)(param_1 + 0x22c)) {
        iVar9 = *(int *)(param_1 + 0x22c);
      }
      uVar4 = 0;
      *(int *)(param_1 + 0x214) = iVar10;
      *(int *)(param_1 + 0x244) = iVar6 + -1;
      *(int *)(param_1 + 0x22c) = iVar9 + -1;
    }
    goto LAB_71abd114;
  }
  iVar10 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(*(undefined4 *)(param_1 + 500));
  if (iVar10 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_700963c4,s_____webrtc_apm_src_webrtc_module_700661a2,
               *(uint *)(param_1 + 500) | 0x8c0,s_Render_buffer_underrun_detected_a_7006e1d3,
               *puVar11,*(undefined4 *)(param_1 + 0x2ec));
    iVar10 = *(int *)(param_1 + 0x214);
    if (iVar10 == *(int *)(param_1 + 0x210)) goto LAB_71abcfe0;
LAB_71abd0a8:
    iVar6 = 0;
    if (iVar10 < *(int *)(param_1 + 0x200) + -1) {
      iVar6 = iVar10 + 1;
    }
    iVar10 = *(int *)(param_1 + 0x230);
    if (0 < *(int *)(param_1 + 0x244)) {
      iVar10 = *(int *)(param_1 + 0x244);
    }
    *(int *)(param_1 + 0x214) = iVar6;
    iVar6 = *(int *)(param_1 + 0x218);
    if (0 < *(int *)(param_1 + 0x22c)) {
      iVar6 = *(int *)(param_1 + 0x22c);
    }
    *(int *)(param_1 + 0x244) = iVar10 + -1;
    *(int *)(param_1 + 0x22c) = iVar6 + -1;
    cVar1 = *(char *)(param_1 + 0x24c);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x214);
    if (iVar10 != *(int *)(param_1 + 0x210)) goto LAB_71abd0a8;
LAB_71abcfe0:
    cVar1 = *(char *)(param_1 + 0x24c);
  }
  uVar4 = 1;
  if (cVar1 != '\0') {
    uVar4 = 1;
    if (*(int *)(param_1 + 0x248) != 0) {
      *(undefined1 *)(param_1 + 0x24c) = 1;
      *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + -1;
    }
  }
LAB_71abd114:
  *(char *)(param_1 + 0x25c) = *(char *)(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x2f8) != '\0') {
    *(undefined1 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_71abd17c
// Entry: 0x71abd17c | Size: 448 bytes
// =========================================================================

bool FUN_71abd17c(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  
  cVar2 = *(char *)(param_1 + 0x24c);
  if ((*(char *)(param_1 + 0x308) == '\0') && (*(char *)(param_1 + 0x304) != '\0' && cVar2 != '\0'))
  {
    iVar5 = *(int *)(param_1 + 0x248);
    iVar3 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(*(undefined4 *)(param_1 + 500));
    if (iVar3 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_700661a2,
                 *(uint *)(param_1 + 500) | 0x9b0,s_Mismatch_between_first_estimated_7006cc71,
                 param_2 - iVar5,s_blocks_7006c357);
    }
    cVar2 = *(char *)(param_1 + 0x24c);
    *(undefined1 *)(param_1 + 0x308) = 1;
  }
  bVar1 = cVar2 == '\0' || *(int *)(param_1 + 0x248) != param_2;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x24c) = 1;
    uVar7 = *(undefined4 *)(param_1 + 500);
    iVar3 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x264) >> 2;
    uVar9 = *(undefined4 *)(param_1 + 0x1fc);
    uVar6 = (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x204) >> 2) * -0x33333333 +
            ~*(uint *)(param_1 + 0x2d4);
    *(int *)(param_1 + 0x248) = param_2;
    FUN_71ba33fc((*(int *)(param_1 + 0x274) - *(int *)(param_1 + 0x270)) + iVar3,iVar3);
    iVar3 = FUN_71ba0440(extraout_r1,uVar9);
    uVar4 = iVar3 + param_2 & ~(iVar3 + param_2 >> 0x1f);
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    iVar3 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(uVar7);
    if (iVar3 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_700661a2,
                 *(uint *)(param_1 + 500) | 0xb68,s_Applying_total_delay_of_7006178a,uVar6,
                 s_blocks__700672fc);
    }
    iVar3 = *(int *)(param_1 + 0x218);
    iVar8 = *(int *)(param_1 + 0x228);
    FUN_71ba2da8((*(int *)(param_1 + 0x210) - uVar6) + *(int *)(param_1 + 0x200));
    *(undefined4 *)(param_1 + 0x214) = extraout_r1_00;
    iVar5 = *(int *)(param_1 + 0x230);
    iVar10 = *(int *)(param_1 + 0x240);
    FUN_71ba2da8(iVar8 + uVar6 + iVar3,iVar3);
    *(undefined4 *)(param_1 + 0x22c) = extraout_r1_01;
    FUN_71ba2da8(iVar10 + uVar6 + iVar5,iVar5);
    *(undefined4 *)(param_1 + 0x244) = extraout_r1_02;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_71abd35c
// Entry: 0x71abd35c | Size: 216 bytes
// =========================================================================

void FUN_71abd35c(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x304) != '\0') {
    iVar4 = (*(int *)(param_1 + 0x2f0) + *(int *)(param_1 + 0x300)) -
            (*(int *)(param_1 + 0x2e8) + (*(uint *)(param_1 + 0x20) >> 6));
    iVar1 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(*(undefined4 *)(param_1 + 500));
    if (iVar1 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_700661a2,
                 *(uint *)(param_1 + 500) | 0xb68,s_Applying_total_delay_of_7006178a,iVar4,
                 s_blocks__700672fc);
    }
    iVar1 = *(int *)(param_1 + 0x218);
    iVar5 = *(int *)(param_1 + 0x228);
    FUN_71ba2da8((*(int *)(param_1 + 0x210) - iVar4) + *(int *)(param_1 + 0x200));
    *(undefined4 *)(param_1 + 0x214) = extraout_r1;
    iVar2 = *(int *)(param_1 + 0x230);
    iVar3 = *(int *)(param_1 + 0x240);
    FUN_71ba2da8(iVar5 + iVar4 + iVar1,iVar1);
    *(undefined4 *)(param_1 + 0x22c) = extraout_r1_00;
    FUN_71ba2da8(iVar3 + iVar4 + iVar2,iVar2);
    *(undefined4 *)(param_1 + 0x244) = extraout_r1_01;
  }
  return;
}


// =========================================================================
// Function: FUN_71abd444
// Entry: 0x71abd444 | Size: 92 bytes
// =========================================================================

int FUN_71abd444(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x264) >> 2;
  FUN_71ba33fc((*(int *)(param_1 + 0x274) - *(int *)(param_1 + 0x270)) + iVar1,iVar1);
  iVar3 = *(int *)(param_1 + 0x218);
  iVar4 = *(int *)(param_1 + 0x228);
  iVar2 = *(int *)(param_1 + 0x22c);
  iVar1 = FUN_71ba0440(extraout_r1,*(undefined4 *)(param_1 + 0x1fc));
  iVar1 = iVar2 - (iVar1 + iVar4);
  if (iVar2 < iVar4) {
    iVar1 = iVar1 + iVar3;
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_71abd4d8
// Entry: 0x71abd4d8 | Size: 132 bytes
// =========================================================================

void FUN_71abd4d8(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x304) == '\0') &&
     (iVar1 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(*(undefined4 *)(param_1 + 500))
     , iVar1 == 0)) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_700661a2,
               *(uint *)(param_1 + 500) | 0xa68,s_Receiving_a_first_externally_rep_7006da13,param_2,
               &DAT_7006a134);
  }
  *(undefined1 *)(param_1 + 0x304) = 1;
  *(int *)(param_1 + 0x300) = (int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1e)) >> 2;
  return;
}


// =========================================================================
// Function: YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR
// Entry: 0x71abe550 | Size: 8 bytes
// =========================================================================

undefined4 YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR(void)

{
  return 0;
}


// =========================================================================
// Function: gNLIrfKvdfPG_ohpeALeMZcQlpSjY
// Entry: 0x71abe558 | Size: 28 bytes
// =========================================================================

float gNLIrfKvdfPG_ohpeALeMZcQlpSjY(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return fVar1 * 1.1920929e-07 + -126.942696;
}


// =========================================================================
// Function: EtrbFSCNhkpTZrrCWlvOG
// Entry: 0x71abe580 | Size: 28 bytes
// =========================================================================

float EtrbFSCNhkpTZrrCWlvOG(float param_1)

{
  return param_1 * 3.0103;
}


// =========================================================================
// Function: TZr_hsFYHyiAotTqIKhuIyvatxLAU
// Entry: 0x71abe5c0 | Size: 200 bytes
// =========================================================================

undefined4 *
TZr_hsFYHyiAotTqIKhuIyvatxLAU(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = param_4 * param_3;
  *param_1 = param_2;
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_34 = param_3;
  iStack_30 = param_4;
  if (iVar1 * 0x40 != 0) {
    if (0x3fffffff < (uint)(iVar1 * 0x40)) {
      FUN_71a0103c(&iStack_2c);
      if (iStack_2c != 0) {
        iStack_28 = iStack_2c;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iStack_2c = thunk_MwhHq(iVar1 * 0x100);
    iVar2 = iStack_2c + iVar1 * 0x100;
    iStack_24 = iVar2;
    imp___aeabi_memclr4(iStack_2c,iVar1 * 0x100);
    iStack_28 = iVar2;
  }
  FUN_71abe800(param_1 + 1,param_2,&iStack_34);
  if (iStack_2c != 0) {
    iStack_28 = iStack_2c;
    thunk_qNQrlu();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}


// =========================================================================
// Function: NqxzdvAGQNPXiaqFoaVoDKuWWya
// Entry: 0x71abe688 | Size: 100 bytes
// =========================================================================

int NqxzdvAGQNPXiaqFoaVoDKuWWya(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = iVar2;
    if (iVar3 != iVar2) {
      do {
        if (*(int *)(iVar3 + -0xc) != 0) {
          *(int *)(iVar3 + -8) = *(int *)(iVar3 + -0xc);
          thunk_qNQrlu();
        }
        iVar3 = iVar3 + -0x14;
      } while (iVar3 != iVar2);
      iVar1 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 8) = iVar2;
    thunk_qNQrlu(iVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71abe800
// Entry: 0x71abe800 | Size: 400 bytes
// =========================================================================

int * FUN_71abe800(int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 uVar6;
  undefined4 extraout_r3;
  undefined4 *unaff_r4;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piStack_3c;
  int *piStack_2c;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  if (param_2 != 0) {
    piStack_2c = param_1;
    if (0xccccccc < param_2) {
      FUN_71abebd0(param_1);
      uVar5 = extraout_r2;
      uVar6 = extraout_r3;
LAB_71abe940:
      unaff_r4[3] = 0;
      piVar8 = unaff_r4 + 2;
      *piVar8 = 0;
      unaff_r4[4] = 0;
      *unaff_r4 = uVar5;
      unaff_r4[1] = uVar6;
      FUN_71a0103c(piVar8);
      if (*piVar8 != 0) {
        unaff_r4[3] = *piVar8;
        thunk_qNQrlu();
      }
      piStack_3c[1] = (int)unaff_r4;
      FUN_71abead8(&piStack_2c);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    unaff_r4 = (undefined4 *)thunk_MwhHq();
    puVar1 = unaff_r4 + param_2 * 5;
    param_1[2] = (int)puVar1;
    iVar4 = param_3[2];
    iVar2 = param_3[3];
    param_1[1] = (int)unaff_r4;
    *param_1 = (int)unaff_r4;
    iVar2 = iVar2 - iVar4;
    uVar5 = *param_3;
    uVar6 = param_3[1];
    if (iVar2 == 0) {
      do {
        *unaff_r4 = uVar5;
        unaff_r4[1] = uVar6;
        unaff_r4[2] = 0;
        unaff_r4[3] = 0;
        unaff_r4[4] = 0;
        unaff_r4 = unaff_r4 + 5;
      } while (unaff_r4 != puVar1);
    }
    else {
      piStack_3c = param_1;
      if (iVar2 < 0) goto LAB_71abe940;
      iVar9 = 0;
      do {
        puVar7 = (undefined4 *)((int)unaff_r4 + iVar9);
        *puVar7 = uVar5;
        puVar7[1] = uVar6;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        iVar3 = thunk_MwhHq(iVar2);
        puVar7[2] = iVar3;
        puVar7[3] = iVar3;
        puVar7[4] = iVar3 + iVar2;
        imp___aeabi_memcpy4(iVar3,iVar4,iVar2);
        iVar9 = iVar9 + 0x14;
        puVar7[3] = iVar3 + iVar2;
      } while (param_2 * 0x14 != iVar9);
    }
    param_1[1] = (int)puVar1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71abead8
// Entry: 0x71abead8 | Size: 140 bytes
// =========================================================================

int * FUN_71abead8(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_1[1] == '\0') {
    piVar2 = (int *)*param_1;
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      iVar4 = piVar2[1];
      if (iVar4 == iVar3) {
        piVar2[1] = iVar3;
        thunk_qNQrlu(iVar3);
        return param_1;
      }
      do {
        if (*(int *)(iVar4 + -0xc) != 0) {
          *(int *)(iVar4 + -8) = *(int *)(iVar4 + -0xc);
          thunk_qNQrlu();
        }
        iVar4 = iVar4 + -0x14;
      } while (iVar4 != iVar3);
      uVar1 = *(undefined4 *)*param_1;
      piVar2[1] = iVar3;
      thunk_qNQrlu(uVar1);
      return param_1;
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71abebd0
// Entry: 0x71abebd0 | Size: 20 bytes
// =========================================================================

void FUN_71abebd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: jKXildpFEQbiOaiYZFUjIVbrreqBhhi
// Entry: 0x71abec38 | Size: 336 bytes
// =========================================================================

undefined4 * jKXildpFEQbiOaiYZFUjIVbrreqBhhi(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  *param_1 = param_2;
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  if (param_3 != 0) {
    if (0xfc0fc0 < param_3) {
      FUN_71abf220(&iStack_2c);
      if (iStack_2c != 0) {
        iStack_28 = iStack_2c;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = thunk_MwhHq(param_3 * 0x104);
    iStack_24 = iVar1 + param_3 * 0x104;
    iVar4 = ((param_3 * 0x104 - 0x104) / 0x104) * 0x104 + 0x104;
    iStack_2c = iVar1;
    imp___aeabi_memclr4(iVar1,iVar4);
    iStack_28 = iVar1 + iVar4;
  }
  FUN_71abef20(param_1 + 1,param_2,&iStack_2c);
  if (iStack_2c != 0) {
    iStack_28 = iStack_2c;
    thunk_qNQrlu();
  }
  piVar3 = (int *)param_1[1];
  piVar2 = (int *)param_1[2];
  param_1[4] = 0;
  param_1[5] = 0;
  for (; piVar3 != piVar2; piVar3 = piVar3 + 3) {
    iVar1 = *piVar3;
    if (iVar1 != piVar3[1]) {
      imp___aeabi_memclr4(iVar1,(((piVar3[1] - iVar1) - 0x104U) / 0x104) * 0x104 + 0x104);
    }
  }
  return param_1;
}


// =========================================================================
// Function: XSlNUnzykXrsPmHUxMIgfRVYuHZRQu
// Entry: 0x71abed88 | Size: 104 bytes
// =========================================================================

int XSlNUnzykXrsPmHUxMIgfRVYuHZRQu(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 8);
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
      piVar1 = *(int **)(param_1 + 4);
    }
    *(int **)(param_1 + 8) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71abef20
// Entry: 0x71abef20 | Size: 352 bytes
// =========================================================================

undefined4 * FUN_71abef20(undefined4 *param_1,uint param_2,int *param_3)

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
      FUN_71abf35c(param_1);
LAB_71abf044:
      *unaff_r5 = 0;
      unaff_r5[1] = 0;
      unaff_r5[2] = 0;
      FUN_71abf220(unaff_r5);
      if (*unaff_r5 != 0) {
        unaff_r5[1] = *unaff_r5;
        thunk_qNQrlu();
      }
      param_1[1] = unaff_r5;
      FUN_71abf288(&puStack_2c);
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
      if (0xfc0fc0 < (uint)((iVar4 >> 2) * -0x3f03f03f)) goto LAB_71abf044;
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
// Function: FUN_71abf220
// Entry: 0x71abf220 | Size: 20 bytes
// =========================================================================

void FUN_71abf220(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71abf288
// Entry: 0x71abf288 | Size: 132 bytes
// =========================================================================

undefined4 * FUN_71abf288(undefined4 *param_1)

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
// Function: FUN_71abf35c
// Entry: 0x71abf35c | Size: 20 bytes
// =========================================================================

void FUN_71abf35c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: YieXYjbYJNsVuFBwVBPuijekz
// Entry: 0x71abf3c4 | Size: 336 bytes
// =========================================================================

undefined4 * YieXYjbYJNsVuFBwVBPuijekz(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  *param_1 = param_2;
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  if (param_3 != 0) {
    if (0x7e07e0 < param_3) {
      FUN_71abf9ac(&iStack_2c);
      if (iStack_2c != 0) {
        iStack_28 = iStack_2c;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = thunk_MwhHq(param_3 * 0x208);
    iStack_24 = iVar1 + param_3 * 0x208;
    iVar4 = ((param_3 * 0x208 - 0x208) / 0x208) * 0x208 + 0x208;
    iStack_2c = iVar1;
    imp___aeabi_memclr4(iVar1,iVar4);
    iStack_28 = iVar1 + iVar4;
  }
  FUN_71abf6ac(param_1 + 1,param_2,&iStack_2c);
  if (iStack_2c != 0) {
    iStack_28 = iStack_2c;
    thunk_qNQrlu();
  }
  piVar3 = (int *)param_1[1];
  piVar2 = (int *)param_1[2];
  param_1[4] = 0;
  param_1[5] = 0;
  for (; piVar3 != piVar2; piVar3 = piVar3 + 3) {
    iVar1 = *piVar3;
    if (iVar1 != piVar3[1]) {
      imp___aeabi_memclr4(iVar1,(((piVar3[1] - iVar1) - 0x208U) / 0x208) * 0x208 + 0x208);
    }
  }
  return param_1;
}


// =========================================================================
// Function: LYlxYtwnixwzNxyS_mbupwFE
// Entry: 0x71abf514 | Size: 104 bytes
// =========================================================================

int LYlxYtwnixwzNxyS_mbupwFE(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 8);
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
      piVar1 = *(int **)(param_1 + 4);
    }
    *(int **)(param_1 + 8) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71abf6ac
// Entry: 0x71abf6ac | Size: 352 bytes
// =========================================================================

undefined4 * FUN_71abf6ac(undefined4 *param_1,uint param_2,int *param_3)

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
      FUN_71abfae8(param_1);
LAB_71abf7d0:
      *unaff_r5 = 0;
      unaff_r5[1] = 0;
      unaff_r5[2] = 0;
      FUN_71abf9ac(unaff_r5);
      if (*unaff_r5 != 0) {
        unaff_r5[1] = *unaff_r5;
        thunk_qNQrlu();
      }
      param_1[1] = unaff_r5;
      FUN_71abfa14(&puStack_2c);
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
      if (0x7e07e0 < (uint)((iVar4 >> 3) * -0x3f03f03f)) goto LAB_71abf7d0;
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
// Function: FUN_71abf9ac
// Entry: 0x71abf9ac | Size: 20 bytes
// =========================================================================

void FUN_71abf9ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71abfa14
// Entry: 0x71abfa14 | Size: 132 bytes
// =========================================================================

undefined4 * FUN_71abfa14(undefined4 *param_1)

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
// Function: FUN_71abfae8
// Entry: 0x71abfae8 | Size: 20 bytes
// =========================================================================

void FUN_71abfae8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: gtHBzTIpOHpXC_dpUUIKpgNgwIiDyGZAkJpooGkXKMgTrPqnLTFiRZgFtH_IOcolmYSjQNcfImBAzrCjS
// Entry: 0x71abfb50 | Size: 16 bytes
// =========================================================================

void gtHBzTIpOHpXC_dpUUIKpgNgwIiDyGZAkJpooGkXKMgTrPqnLTFiRZgFtH_IOcolmYSjQNcfImBAzrCjS
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


// =========================================================================
// Function: UNWEsKyMSjcdKAz_lJTFjtctZdFy
// Entry: 0x71abfb60 | Size: 4 bytes
// =========================================================================

void UNWEsKyMSjcdKAz_lJTFjtctZdFy(void)

{
  return;
}


// =========================================================================
// Function: KPTeFpXzTEBlZDvmtiZOdhCWfQvMvLJqTbTsalyyxHJqlXEBqV_IIMFxviotGceJim
// Entry: 0x71abfb64 | Size: 176 bytes
// =========================================================================

void KPTeFpXzTEBlZDvmtiZOdhCWfQvMvLJqTbTsalyyxHJqlXEBqV_IIMFxviotGceJim
               (int param_1,int param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  imp___aeabi_memclr4(param_3,0x104);
  if (param_2 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    iVar4 = *piVar1;
    iVar10 = piVar1[1];
    iVar5 = 0;
    iVar6 = piVar1[5];
    do {
      piVar1 = (int *)(iVar10 + iVar6 * 0xc);
      iVar7 = piVar1[1];
      for (iVar8 = *piVar1; iVar8 != iVar7; iVar8 = iVar8 + 0x104) {
        iVar9 = 0;
        do {
          pfVar3 = (float *)(param_3 + iVar9);
          pfVar2 = (float *)(iVar8 + iVar9);
          iVar9 = iVar9 + 4;
          *pfVar3 = *pfVar2 + *pfVar3;
        } while (iVar9 != 0x104);
      }
      iVar8 = 0;
      if (iVar6 < iVar4 + -1) {
        iVar8 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar8;
    } while (iVar5 != param_2);
  }
  return;
}


// =========================================================================
// Function: PuKPdWqkkGQC_ShNJSneXkuMeZnMwphdxtvFosppPDsLdZkkzEcLNhbHOzSsHYZfkFvBnFk
// Entry: 0x71abfc14 | Size: 352 bytes
// =========================================================================

void PuKPdWqkkGQC_ShNJSneXkuMeZnMwphdxtvFosppPDsLdZkkzEcLNhbHOzSsHYZfkFvBnFk
               (int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  
  imp___aeabi_memclr4(param_4,0x104);
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[5];
  if (param_2 != 0) {
    iVar4 = *piVar2;
    iVar10 = piVar2[1];
    uVar6 = 0;
    do {
      piVar2 = (int *)(iVar10 + iVar1 * 0xc);
      iVar3 = piVar2[1];
      for (iVar7 = *piVar2; iVar7 != iVar3; iVar7 = iVar7 + 0x104) {
        iVar5 = 0;
        do {
          pfVar8 = (float *)(param_4 + iVar5);
          pfVar9 = (float *)(iVar7 + iVar5);
          iVar5 = iVar5 + 4;
          *pfVar8 = *pfVar9 + *pfVar8;
        } while (iVar5 != 0x104);
      }
      iVar7 = 0;
      if (iVar1 < iVar4 + -1) {
        iVar7 = iVar1 + 1;
      }
      iVar1 = iVar7;
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_2);
  }
  imp___aeabi_memmove4(param_5,param_4,0x104);
  if (param_2 < param_3) {
    iVar4 = **(int **)(param_1 + 4);
    iVar10 = (*(int **)(param_1 + 4))[1];
    do {
      piVar2 = (int *)(iVar10 + iVar1 * 0xc);
      iVar3 = piVar2[1];
      for (iVar7 = *piVar2; iVar7 != iVar3; iVar7 = iVar7 + 0x104) {
        iVar5 = 0;
        do {
          pfVar9 = (float *)(param_5 + iVar5);
          pfVar8 = (float *)(iVar7 + iVar5);
          iVar5 = iVar5 + 4;
          *pfVar9 = *pfVar8 + *pfVar9;
        } while (iVar5 != 0x104);
      }
      iVar7 = 0;
      if (iVar1 < iVar4 + -1) {
        iVar7 = iVar1 + 1;
      }
      param_2 = param_2 + 1;
      iVar1 = iVar7;
    } while (param_2 != param_3);
  }
  return;
}


// =========================================================================
// Function: okkW_SyMKxZimqhEFbLoMmJwHHWNkWG_QKkdWeu
// Entry: 0x71abfde0 | Size: 176 bytes
// =========================================================================

uint * okkW_SyMKxZimqhEFbLoMmJwHHWNkWG_QKkdWeu(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1 + 1;
  *puVar2 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    if (0x3fffffff < param_2) {
      FUN_71a0103c(puVar2);
      if (*puVar2 != 0) {
        param_1[2] = *puVar2;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    uVar1 = thunk_MwhHq(param_2 << 2);
    uVar3 = uVar1 + param_2 * 4;
    param_1[3] = uVar3;
    param_1[1] = uVar1;
    imp___aeabi_memclr4(uVar1,param_2 << 2);
    param_1[2] = uVar3;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (0 < (int)(uVar3 - uVar1)) {
    imp___aeabi_memclr4(uVar1);
  }
  return param_1;
}


// =========================================================================
// Function: izWkqxnrAjptSfTtgJZyBnJUfaDsiGyPdMkrxya
// Entry: 0x71abfe90 | Size: 48 bytes
// =========================================================================

int izWkqxnrAjptSfTtgJZyBnJUfaDsiGyPdMkrxya(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return param_1;
  }
  *(int *)(param_1 + 8) = iVar1;
  thunk_qNQrlu(iVar1);
  return param_1;
}


// =========================================================================
// Function: AfJnnNxayrnorjUpWhFXHNAjUxaHLlKQewSKBFekDAhJZvSiButnBKNkXZRrErPwFRsTzFPuQLURpQLrl
// Entry: 0x71abff9c | Size: 208 bytes
// =========================================================================

int * AfJnnNxayrnorjUpWhFXHNAjUxaHLlKQewSKBFekDAhJZvSiButnBKNkXZRrErPwFRsTzFPuQLURpQLrl
                (int *param_1,int param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_3 + 4);
  fVar5 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  cVar1 = param_3[1];
  cVar2 = param_3[8];
  cVar3 = *param_3;
  param_1[7] = 0;
  param_1[8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[9] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(char *)(param_1 + 3) = cVar2;
  param_1[0xb] = 0;
  iVar4 = 1;
  *param_1 = param_2;
  if (cVar1 == '\0') {
    iVar4 = 2;
  }
  if (cVar3 != '\0') {
    iVar4 = 0;
  }
  if (param_2 == 1) {
    iVar4 = 2;
  }
  param_1[4] = iVar4;
  param_1[1] = (int)(1.0 / fVar5);
  param_1[2] = (int)(fVar6 * 64.0);
  if (iVar4 == 1) {
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_2 != 0) {
      FUN_71a66dde(param_1 + 7);
      if (0 < param_1[8] - param_1[7]) {
        imp___aeabi_memclr4(param_1[7]);
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: XsBmMCPWDTBSihUsLWRYVAASDMtjkElisU
// Entry: 0x71ac0088 | Size: 200 bytes
// =========================================================================

int * XsBmMCPWDTBSihUsLWRYVAASDMtjkElisU
                (int *param_1,int param_2,int param_3,int param_4,float param_5,undefined1 param_6)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined1 *)(param_1 + 3) = param_6;
  param_1[7] = 0;
  param_1[8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[9] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[10] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0xb] = 0;
  iVar1 = 2;
  if (param_4 != 0) {
    iVar1 = 1;
  }
  *param_1 = param_2;
  if (param_3 != 0) {
    iVar1 = 0;
  }
  if (param_2 == 1) {
    iVar1 = 2;
  }
  param_1[4] = iVar1;
  param_1[1] = (int)(1.0 / fVar2);
  param_1[2] = (int)(param_5 * 64.0);
  if (iVar1 == 1) {
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_2 != 0) {
      FUN_71a66dde(param_1 + 7);
      if (0 < param_1[8] - param_1[7]) {
        imp___aeabi_memclr4(param_1[7]);
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: hHzBnBTywhUkouDJQNHlHyGdaesTsTQViBbgJCLvfXgIeJTDULwRapDGbbOfsGyXUzaqbPnbYumrpv
// Entry: 0x71ac016c | Size: 224 bytes
// =========================================================================

void hHzBnBTywhUkouDJQNHlHyGdaesTsTQViBbgJCLvfXgIeJTDULwRapDGbbOfsGyXUzaqbPnbYumrpv
               (uint *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  
  if (param_1[4] == 2) {
    iVar2 = 0;
  }
  else {
    if (param_1[4] == 0) {
      imp___aeabi_memcpy4(param_3,*(undefined4 *)(param_2 + 8),0x100);
      uVar6 = *param_1;
      if (1 < uVar6) {
        iVar2 = *(int *)(param_2 + 8);
        uVar3 = 1;
        do {
          iVar2 = iVar2 + 0x100;
          iVar4 = 0;
          do {
            pfVar5 = (float *)(param_3 + iVar4);
            pfVar1 = (float *)(iVar2 + iVar4);
            iVar4 = iVar4 + 4;
            *pfVar5 = *pfVar1 + *pfVar5;
          } while (iVar4 != 0x100);
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar6);
      }
      iVar2 = 0;
      do {
        pfVar1 = (float *)(param_3 + iVar2);
        iVar2 = iVar2 + 4;
        *pfVar1 = (float)param_1[1] * *pfVar1;
      } while (iVar2 != 0x100);
      return;
    }
    iVar2 = thunk_VmwYTUwpqZjfWmrSJnQ__mJjhdrHXNzHmx_UYdMWBprLKpbVryPMel(param_1,param_2);
    iVar2 = iVar2 << 6;
  }
  imp___aeabi_memmove4(param_3,*(int *)(param_2 + 8) + iVar2 * 4,0x100);
  return;
}


// =========================================================================
// Function: EyZRMAOiOSHHKphxjkiQcAgaphVbolgBOKOwtILZIJttOdRMyNObEkdPVZbdQkcdvdazKvkb
// Entry: 0x71ac024c | Size: 156 bytes
// =========================================================================

void EyZRMAOiOSHHKphxjkiQcAgaphVbolgBOKOwtILZIJttOdRMyNObEkdPVZbdQkcdvdazKvkb
               (uint *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  
  imp___aeabi_memcpy4(param_3,*(undefined4 *)(param_2 + 8),0x100);
  uVar6 = *param_1;
  if (1 < uVar6) {
    iVar2 = *(int *)(param_2 + 8);
    uVar3 = 1;
    do {
      iVar2 = iVar2 + 0x100;
      iVar4 = 0;
      do {
        pfVar5 = (float *)(param_3 + iVar4);
        pfVar1 = (float *)(iVar2 + iVar4);
        iVar4 = iVar4 + 4;
        *pfVar5 = *pfVar1 + *pfVar5;
      } while (iVar4 != 0x100);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar6);
  }
  iVar2 = 0;
  do {
    pfVar1 = (float *)(param_3 + iVar2);
    iVar2 = iVar2 + 4;
    *pfVar1 = (float)param_1[1] * *pfVar1;
  } while (iVar2 != 0x100);
  return;
}


// =========================================================================
// Function: VmwYTUwpqZjfWmrSJnQ__mJjhdrHXNzHmx_UYdMWBprLKpbVryPMel
// Entry: 0x71ac02e8 | Size: 444 bytes
// =========================================================================

uint VmwYTUwpqZjfWmrSJnQ__mJjhdrHXNzHmx_UYdMWBprLKpbVryPMel(uint *param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  
  if ((char)param_1[3] == '\0') {
LAB_71ac032c:
    uVar5 = *param_1;
    bVar1 = 0;
    uVar4 = param_1[0xb] + 1;
    param_1[0xb] = uVar4;
    if (0 < (int)uVar5) goto LAB_71ac034c;
    uVar4 = 0;
    uVar5 = param_1[10];
  }
  else {
    bVar10 = 0x7c < param_1[5];
    if (param_1[5] < 0x7e) {
      bVar10 = 0x7d < param_1[6];
    }
    if (!bVar10) goto LAB_71ac032c;
    bVar1 = 1;
    uVar5 = 2;
    uVar4 = param_1[0xb] + 1;
    param_1[0xb] = uVar4;
LAB_71ac034c:
    uVar9 = param_1[7];
    iVar3 = *(int *)(param_2 + 8);
    uVar7 = 0;
    do {
      iVar8 = 0;
      fVar11 = 0.0;
      do {
        pfVar6 = (float *)(iVar3 + iVar8);
        iVar8 = iVar8 + 4;
        fVar11 = fVar11 + *pfVar6 * *pfVar6;
      } while (iVar8 != 0x100);
      if ((uVar7 < 2) && ((float)param_1[2] < fVar11)) {
        param_1[uVar7 + 5] = param_1[uVar7 + 5] + 1;
        uVar4 = param_1[0xb];
      }
      pfVar6 = (float *)(uVar9 + uVar7 * 4);
      iVar3 = iVar3 + 0x100;
      uVar7 = uVar7 + 1;
      fVar12 = *pfVar6;
      fVar2 = (fVar11 - fVar12) * 0.0004;
      if (uVar4 < 0x3a99) {
        fVar2 = fVar11;
      }
      *pfVar6 = fVar12 + fVar2;
    } while (uVar7 != uVar5);
    if (uVar4 == 15000) {
      pfVar6 = (float *)param_1[7];
      uVar4 = uVar5;
      do {
        uVar4 = uVar4 - 1;
        *pfVar6 = *pfVar6 * 6.666667e-05;
        pfVar6 = pfVar6 + 1;
      } while (uVar4 != 0);
    }
    uVar7 = 0;
    uVar4 = 0;
    pfVar6 = (float *)param_1[7];
    do {
      fVar11 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      if (((float *)param_1[7])[uVar4] < fVar11) {
        uVar4 = uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar5 = param_1[10];
    if ((bool)(bVar1 & 1 < (int)uVar5)) goto LAB_71ac0494;
  }
  fVar11 = *(float *)(param_1[7] + uVar5 * 4);
  if (*(float *)(param_1[7] + uVar4 * 4) <= fVar11 + fVar11) {
    return uVar5;
  }
LAB_71ac0494:
  param_1[10] = uVar4;
  return uVar4;
}


// =========================================================================
// Function: moJLdLfsjGEWNYxoFEwBWOYy
// Entry: 0x71ac0618 | Size: 960 bytes
// =========================================================================

int * moJLdLfsjGEWNYxoFEwBWOYy(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 auStack_9c [24];
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [24];
  
  *param_1 = param_2;
  if (param_2 == 8) {
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_9c,0x3f800000,0,0x3f429b41,0x3eedb044,0x3dd39175,1);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_84,0x3f800000,0,0x3f429b41,0x3eedb044,0x3dd39175,1);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_6c,0x3f800000,0,0x3f429b41,0x3eedb044,0x3dd39175,1);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_54,0x3f800000,0,0x3f429b41,0x3eedb044,0x3dd39175,1);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_3c,0x3f800000,0,0x3f429b41,0x3eedb044,0x3dd39175,1);
    iVar1 = thunk_MwhHq(0x78);
    iVar2 = iVar1 + 0x78;
    iStack_a8 = iVar1;
    iStack_a0 = iVar2;
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1,auStack_9c);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x18,auStack_84);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x30,auStack_6c);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x48,auStack_54);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x60,auStack_3c);
  }
  else if (param_2 == 4) {
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_9c,0xbdb5bc7d,0x3f7efd75,0x3f425875,0x3e7421ec,0x3e866750,0);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_84,0x3f1f6bc7,0x3f484d58,0x3f3fb94b,0x3f0a7ff9,0x3e866750,0);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_6c,0x3f360923,0x3f33ff4b,0x3f3fbb8a,0x3f23a5a3,0x3e866750,0);
    iVar1 = thunk_MwhHq(0x48);
    iVar2 = iVar1 + 0x48;
    iStack_a8 = iVar1;
    iStack_a0 = iVar2;
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1,auStack_9c);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x18,auStack_84);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x30,auStack_6c);
  }
  else {
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_9c,0xbf800000,0,0x3e0da6fc,0x3ed09ae5,0x3e68919d,0);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_84,0xbf800000,0,0x3e0da6fc,0x3ed09ae5,0x3e68919d,0);
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_6c,0xbf800000,0,0x3e0da6fc,0x3ed09ae5,0x3e68919d,0);
    iVar1 = thunk_MwhHq(0x48);
    iVar2 = iVar1 + 0x48;
    iStack_a8 = iVar1;
    iStack_a0 = iVar2;
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1,auStack_9c);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x18,auStack_84);
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iVar1 + 0x30,auStack_6c);
  }
  iStack_a4 = iVar2;
  thunk_hTUpKKTeeApBXorpGUwgEQrsPrqpDgePJlgVQNXWVvFJMDUvXIOlz_HuazIHblkQNsTQgjArRcHNykRZZywknVmgwnWfZfN
            (param_1 + 1,&iStack_a8);
  if (iStack_a8 != 0) {
    iStack_a4 = iStack_a8;
    thunk_qNQrlu();
  }
  if (*param_1 == 8) {
    iStack_a0 = 0;
    iStack_a4 = 0;
    iStack_a8 = 0;
  }
  else {
    thunk_FUX_GqQDagZaSEeYxzpcJsjHkotRqxsCYwSjzWibwGkPOPMPyPQXKtbUMFwnraXNKDyAEm_tsRP
              (auStack_9c,0x3f800000,0,0x3f3a24a7,0x3e5a148e,0x3f41cfc2,0);
    iStack_a8 = thunk_MwhHq(0x18);
    iVar1 = iStack_a8 + 0x18;
    iStack_a0 = iVar1;
    thunk_QQBBtWuMjQi_dULqhFHxdzaPrSsIApNoxhGCyazxdyzgssFGiCQHy(iStack_a8,auStack_9c);
    iStack_a4 = iVar1;
  }
  thunk_hTUpKKTeeApBXorpGUwgEQrsPrqpDgePJlgVQNXWVvFJMDUvXIOlz_HuazIHblkQNsTQgjArRcHNykRZZywknVmgwnWfZfN
            (param_1 + 4,&iStack_a8);
  if (iStack_a8 != 0) {
    iStack_a4 = iStack_a8;
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: chvRUtuIGZPBZQaJVl_qWvznbKDfQrtcoxKVjtJyDoWgg_Sn_itrHCUhpjLkCkCAoIrzavOhMV
// Entry: 0x71ac0a48 | Size: 212 bytes
// =========================================================================

void chvRUtuIGZPBZQaJVl_qWvznbKDfQrtcoxKVjtJyDoWgg_Sn_itrHCUhpjLkCkCAoIrzavOhMV
               (int *param_1,undefined4 param_2,int param_3,undefined8 *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_120 [32];
  
  puVar6 = auStack_120;
  if (param_3 == 0) {
    param_2 = 0;
  }
  thunk_wjLAiDdR_OspYyncnZTNMSCFrYotxHqMLehKrdVGNHFtFPZtTINdmSNFbIuMpIKGQrEyJuaLMDToEVVxMFCVw
            (param_1 + 1,param_2,param_3,puVar6,0x40);
  thunk_mhfrXSzXbuJkoUENgisVuEgvLhslpPdXhaMYPxY_atbhZsfxfLceUDgWGCvFzodARRBM
            (param_1 + 4,puVar6,0x40);
  if (param_5 != 0) {
    iVar2 = *param_1;
    uVar8 = 0;
    if (((7 < param_5) && (iVar2 == 1)) && (0xf < (uint)((int)param_4 - (int)puVar6))) {
      uVar8 = param_5 & 0xfffffffc;
      uVar4 = uVar8;
      puVar5 = param_4;
      do {
        uVar9 = *puVar6;
        uVar10 = puVar6[1];
        puVar6 = puVar6 + 2;
        uVar4 = uVar4 - 4;
        *puVar5 = uVar9;
        puVar5[1] = uVar10;
        puVar5 = puVar5 + 2;
      } while (uVar4 != 0);
      if (param_5 == uVar8) {
        return;
      }
    }
    iVar1 = param_5 - uVar8;
    puVar3 = (undefined4 *)((int)auStack_120 + uVar8 * 4);
    puVar7 = (undefined4 *)((int)param_4 + uVar8 * 4);
    do {
      iVar1 = iVar1 + -1;
      *puVar7 = *puVar3;
      puVar3 = puVar3 + iVar2;
      puVar7 = puVar7 + 1;
    } while (iVar1 != 0);
  }
  return;
}


// =========================================================================
// Function: WcWZMFyJwpTTVYYbNvFKVQ
// Entry: 0x71ac1004 | Size: 8 bytes
// =========================================================================

void WcWZMFyJwpTTVYYbNvFKVQ(undefined4 param_1)

{
  thunk_WhzKCZEiMHjbbgEoRijshYt(param_1,0);
  return;
}


// =========================================================================
// Function: lUTnRvERNwYRiVOpqDGQIMVhOSQZzA_VpqbXBJzYvgWltTAWojwcMfh_EXJahLhMgIYBDEVqqwCYTRoHHd_dGipW
// Entry: 0x71ac100c | Size: 244 bytes
// =========================================================================

void lUTnRvERNwYRiVOpqDGQIMVhOSQZzA_VpqbXBJzYvgWltTAWojwcMfh_EXJahLhMgIYBDEVqqwCYTRoHHd_dGipW
               (undefined4 param_1,float *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined4 uStack_228;
  undefined4 uStack_224;
  float afStack_128 [66];
  
  puVar15 = &uStack_228;
  puVar12 = &uStack_228;
  imp___aeabi_memclr8(&uStack_228,0x100);
  pfVar3 = afStack_128;
  if (param_4 == 1) {
    if (param_3 != 0) {
      param_3 = param_3 << 2;
      pfVar6 = (float *)&DAT_700963c8;
      do {
        fVar17 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        param_3 = param_3 + -4;
        fVar18 = *param_2;
        param_2 = param_2 + 1;
        *pfVar3 = fVar18 * fVar17;
        pfVar3 = pfVar3 + 1;
      } while (param_3 != 0);
    }
  }
  else if ((param_4 == 0) && (param_3 != 0)) {
    imp___aeabi_memmove4(pfVar3,param_2,param_3 << 2);
  }
  thunk_QNNMCprZvQGURcnSqOrbCMlbFtQ(param_1,&uStack_228);
  param_5[0x81] = 0;
  param_5[0x41] = 0;
  puVar4 = (undefined8 *)(param_5 + 0x42);
  *param_5 = uStack_228;
  iVar7 = 8;
  param_5[0x40] = uStack_224;
  do {
    puVar9 = (undefined4 *)((int)puVar12 + iVar7);
    iVar7 = iVar7 + 0x20;
    puVar1 = (undefined4 *)0x380;
    puVar2 = (undefined4 *)0x390;
    lVar16 = 2;
    puVar5 = puVar4;
    while( true ) {
      *puVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x388;
    puVar2 = (undefined4 *)0x398;
    lVar16 = 2;
    while( true ) {
      *puVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar2 = *puVar9;
      puVar9 = puVar9 + 1;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    *puVar5 = in_d18;
    puVar5[1] = in_d19;
    puVar4 = puVar5 + 2;
    *(undefined8 *)((int)puVar5 + -0x104) = in_d16;
    *(undefined8 *)((int)puVar5 + -0xfc) = in_d17;
  } while (iVar7 != 0x1e8);
  uVar8 = *(undefined4 *)((int)puVar15 + 0x1ec);
  uVar10 = *(undefined4 *)((int)puVar15 + 0x1f0);
  uVar11 = *(undefined4 *)((int)puVar15 + 500);
  uVar13 = *(undefined4 *)((int)puVar15 + 0x1f8);
  uVar14 = *(undefined4 *)((int)puVar15 + 0x1fc);
  param_5[0x3d] = *(undefined4 *)((int)puVar15 + 0x1e8);
  param_5[0x3e] = uVar10;
  param_5[0x3f] = uVar13;
  param_5[0x7e] = uVar8;
  param_5[0x7f] = uVar11;
  param_5[0x80] = uVar14;
  return;
}


// =========================================================================
// Function: SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
// Entry: 0x71ac1104 | Size: 348 bytes
// =========================================================================

void SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
               (undefined4 param_1,float *param_2,int param_3,float *param_4,int param_5,int param_6
               ,float *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  longlong lVar14;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  float afStack_220 [128];
  
  pfVar13 = afStack_220;
  pfVar3 = afStack_220;
  pfVar10 = afStack_220;
  if (param_6 == 2) {
    if (param_5 != 0) {
      iVar4 = param_5 << 2;
      pfVar9 = (float *)&DAT_700964c8;
      do {
        fVar5 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        iVar4 = iVar4 + -4;
        fVar7 = *param_4;
        param_4 = param_4 + 1;
        *pfVar3 = fVar7 * fVar5;
        pfVar3 = pfVar3 + 1;
      } while (iVar4 != 0);
    }
    if (param_3 != 0) {
      pfVar3 = afStack_220 + param_5;
      param_3 = param_3 << 2;
      pfVar9 = (float *)(&DAT_700964c8 + param_5);
      do {
        fVar5 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        param_3 = param_3 + -4;
        fVar7 = *param_2;
        param_2 = param_2 + 1;
        *pfVar3 = fVar7 * fVar5;
        pfVar3 = pfVar3 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_6 == 0) {
    if (param_5 != 0) {
      imp___aeabi_memmove4(afStack_220,param_4,param_5 << 2);
    }
    if (param_3 != 0) {
      imp___aeabi_memmove4(afStack_220 + param_5,param_2,param_3 << 2);
    }
  }
  thunk_QNNMCprZvQGURcnSqOrbCMlbFtQ(param_1,afStack_220);
  param_7[0x81] = 0.0;
  param_7[0x41] = 0.0;
  pfVar3 = param_7 + 0x42;
  *param_7 = afStack_220[0];
  iVar4 = 8;
  param_7[0x40] = afStack_220[1];
  do {
    puVar6 = (undefined4 *)((int)pfVar10 + iVar4);
    iVar4 = iVar4 + 0x20;
    puVar1 = (undefined4 *)0x380;
    puVar2 = (undefined4 *)0x390;
    lVar14 = 2;
    pfVar9 = pfVar3;
    while( true ) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar14 = lVar14 + -1;
      if (lVar14 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar1 = (undefined4 *)0x388;
    puVar2 = (undefined4 *)0x398;
    lVar14 = 2;
    while( true ) {
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      lVar14 = lVar14 + -1;
      if (lVar14 == 0) break;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 *)pfVar9 = in_d18;
    *(undefined8 *)(pfVar9 + 2) = in_d19;
    pfVar3 = pfVar9 + 4;
    *(undefined8 *)(pfVar9 + -0x41) = in_d16;
    *(undefined8 *)(pfVar9 + -0x3f) = in_d17;
  } while (iVar4 != 0x1e8);
  fVar5 = *(float *)((int)pfVar13 + 0x1ec);
  fVar7 = *(float *)((int)pfVar13 + 0x1f0);
  fVar8 = *(float *)((int)pfVar13 + 500);
  fVar11 = *(float *)((int)pfVar13 + 0x1f8);
  fVar12 = *(float *)((int)pfVar13 + 0x1fc);
  param_7[0x3d] = *(float *)((int)pfVar13 + 0x1e8);
  param_7[0x3e] = fVar7;
  param_7[0x3f] = fVar11;
  param_7[0x7e] = fVar5;
  param_7[0x7f] = fVar8;
  param_7[0x80] = fVar12;
  return;
}


// =========================================================================
// Function: WhzKCZEiMHjbbgEoRijshYt
// Entry: 0x71ac1398 | Size: 12 bytes
// =========================================================================

void WhzKCZEiMHjbbgEoRijshYt(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: AlQogzDpxIdCbORbvFRKWsG
// Entry: 0x71ac13a4 | Size: 12 bytes
// =========================================================================

void AlQogzDpxIdCbORbvFRKWsG(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: RojLCGwtwXzRzGHcMRBkeMK
// Entry: 0x71ac13b0 | Size: 4 bytes
// =========================================================================

void RojLCGwtwXzRzGHcMRBkeMK(void)

{
  return;
}


// =========================================================================
// Function: QNNMCprZvQGURcnSqOrbCMlbFtQ
// Entry: 0x71ac13b4 | Size: 208 bytes
// =========================================================================

void QNNMCprZvQGURcnSqOrbCMlbFtQ(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  thunk_xVxUneOsxcpHjJFXjDJxgQZsSkqJhwlfSpb();
  thunk_BcnFzmOBRDCkxkAAWoSgkIeUOhZMXSlNooHi(param_1,param_2);
  pfVar1 = (float *)&DAT_7009674c;
  pfVar2 = (float *)&DAT_700967c4;
  iVar3 = 0;
  iVar4 = 0;
  do {
    fVar10 = *pfVar2;
    iVar5 = iVar4 + -8;
    fVar8 = *(float *)((int)param_2 + iVar3 + 8);
    pfVar2 = pfVar2 + -1;
    fVar6 = fVar8 - *(float *)((int)param_2 + iVar4 + 0x1f8);
    fVar9 = *(float *)((int)param_2 + iVar3 + 0xc);
    fVar11 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    fVar7 = fVar9 + *(float *)((int)param_2 + iVar4 + 0x1fc);
    fVar12 = fVar11 * fVar6 + (0.5 - fVar10) * fVar7;
    fVar6 = (0.5 - fVar10) * fVar6 - fVar7 * fVar11;
    *(float *)((int)param_2 + iVar3 + 0xc) = fVar9 - fVar12;
    *(float *)((int)param_2 + iVar3 + 8) = fVar8 - fVar6;
    *(float *)((int)param_2 + iVar4 + 0x1f8) = *(float *)((int)param_2 + iVar4 + 0x1f8) + fVar6;
    *(float *)((int)param_2 + iVar4 + 0x1fc) = *(float *)((int)param_2 + iVar4 + 0x1fc) - fVar12;
    iVar3 = iVar3 + 8;
    iVar4 = iVar5;
  } while (iVar5 != -0xf8);
  fVar6 = param_2[1];
  param_2[1] = *param_2 - fVar6;
  *param_2 = *param_2 + fVar6;
  return;
}


// =========================================================================
// Function: xVxUneOsxcpHjJFXjDJxgQZsSkqJhwlfSpb
// Entry: 0x71ac1488 | Size: 908 bytes
// =========================================================================

void xVxUneOsxcpHjJFXjDJxgQZsSkqJhwlfSpb(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0x100);
  uVar1 = *(undefined4 *)(param_2 + 0x124);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_2 + 0x4c) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 0x140);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x160);
  uVar3 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x6c) = uVar3;
  *(undefined4 *)(param_2 + 0x68) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x148);
  uVar3 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_2 + 300) = uVar3;
  *(undefined4 *)(param_2 + 0x128) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x54) = uVar3;
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_2 + 0x74) = uVar3;
  *(undefined4 *)(param_2 + 0x70) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  *(undefined4 *)(param_2 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_2 + 0xac) = uVar3;
  *(undefined4 *)(param_2 + 0xa8) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_2 + 0xcc) = uVar3;
  *(undefined4 *)(param_2 + 200) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x170);
  uVar3 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_2 + 0xec) = uVar3;
  *(undefined4 *)(param_2 + 0xe8) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0xb4) = uVar3;
  *(undefined4 *)(param_2 + 0xb0) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x180);
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1a0);
  uVar3 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x5c) = uVar3;
  *(undefined4 *)(param_2 + 0x58) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c0);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1e0);
  uVar3 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_2 + 0x7c) = uVar3;
  *(undefined4 *)(param_2 + 0x78) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x188);
  uVar3 = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_2 + 0x18c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_2 + 0x11c) = uVar3;
  *(undefined4 *)(param_2 + 0x118) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_2 + 0x15c) = uVar3;
  *(undefined4 *)(param_2 + 0x158) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c8);
  uVar3 = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_2 + 0x13c) = uVar3;
  *(undefined4 *)(param_2 + 0x138) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_2 + 0x17c) = uVar3;
  *(undefined4 *)(param_2 + 0x178) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 400);
  uVar3 = *(undefined4 *)(param_2 + 0x194);
  *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_2 + 0x9c) = uVar3;
  *(undefined4 *)(param_2 + 0x98) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1b0);
  uVar3 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_2 + 0x1b4) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_2 + 0xdc) = uVar3;
  *(undefined4 *)(param_2 + 0xd8) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1d0);
  uVar3 = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_2 + 0x1d4) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xbc) = uVar3;
  *(undefined4 *)(param_2 + 0xb8) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_2 + 500) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_2 + 0xfc) = uVar3;
  *(undefined4 *)(param_2 + 0xf8) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1d8);
  uVar3 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_2 + 0x104) = uVar5;
  *(undefined4 *)(param_2 + 0x100) = uVar4;
  *(undefined4 *)(param_2 + 0x120) = uVar2;
  *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_2 + 0x1bc) = uVar3;
  *(undefined4 *)(param_2 + 0x1b8) = uVar1;
  return;
}


// =========================================================================
// Function: BcnFzmOBRDCkxkAAWoSgkIeUOhZMXSlNooHi
// Entry: 0x71ac1814 | Size: 176 bytes
// =========================================================================

void BcnFzmOBRDCkxkAAWoSgkIeUOhZMXSlNooHi(undefined4 param_1,float *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = thunk_OcinZnBvstHrgVHdmCcFUrWSpMbrwvqMBqz();
  thunk_AawrmrWWdbsBIfhgQLowXHNkEkhANTcNe_g(uVar1,param_2);
  uVar2 = 0xfffffffe;
  do {
    uVar2 = uVar2 + 2;
    fVar8 = param_2[0x40] + param_2[0x60];
    fVar3 = param_2[0x40] - param_2[0x60];
    fVar4 = param_2[0x41] + param_2[0x61];
    fVar5 = param_2[0x41] - param_2[0x61];
    fVar10 = *param_2 + param_2[0x20];
    fVar9 = *param_2 - param_2[0x20];
    fVar6 = param_2[1] + param_2[0x21];
    fVar7 = param_2[1] - param_2[0x21];
    param_2[0x40] = fVar10 - fVar8;
    *param_2 = fVar10 + fVar8;
    param_2[0x41] = fVar6 - fVar4;
    param_2[1] = fVar6 + fVar4;
    param_2[0x61] = fVar7 - fVar3;
    param_2[0x60] = fVar9 + fVar5;
    param_2[0x21] = fVar7 + fVar3;
    param_2[0x20] = fVar9 - fVar5;
    param_2 = param_2 + 2;
  } while (uVar2 < 0x1e);
  return;
}


// =========================================================================
// Function: uHOxqNmFdGiMufb_IGhjPIuoXtTZrGgIxGhX
// Entry: 0x71ac18c4 | Size: 160 bytes
// =========================================================================

void uHOxqNmFdGiMufb_IGhjPIuoXtTZrGgIxGhX(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = 0;
  pfVar5 = (float *)&DAT_7009674c;
  pfVar6 = (float *)&DAT_700967c4;
  iVar1 = 0;
  do {
    iVar2 = param_2 + iVar1;
    iVar4 = param_2 + iVar3;
    fVar9 = *pfVar6;
    iVar1 = iVar1 + -8;
    iVar3 = iVar3 + 8;
    pfVar6 = pfVar6 + -1;
    fVar7 = *(float *)(iVar4 + 8) - *(float *)(iVar2 + 0x1f8);
    fVar10 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    fVar8 = *(float *)(iVar4 + 0xc) + *(float *)(iVar2 + 0x1fc);
    fVar11 = fVar10 * fVar7 + (0.5 - fVar9) * fVar8;
    fVar7 = (0.5 - fVar9) * fVar7 - fVar8 * fVar10;
    *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0xc) - fVar11;
    *(float *)(iVar4 + 8) = *(float *)(iVar4 + 8) - fVar7;
    *(float *)(iVar2 + 0x1f8) = *(float *)(iVar2 + 0x1f8) + fVar7;
    *(float *)(iVar2 + 0x1fc) = *(float *)(iVar2 + 0x1fc) - fVar11;
  } while (iVar1 != -0xf8);
  return;
}


// =========================================================================
// Function: JnIENwrUepweORinahuaAwahiPBzQw_WDnR
// Entry: 0x71ac1968 | Size: 228 bytes
// =========================================================================

void JnIENwrUepweORinahuaAwahiPBzQw_WDnR(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = *param_2 - param_2[1];
  pfVar1 = (float *)&DAT_7009674c;
  pfVar2 = (float *)&DAT_700967c4;
  param_2[1] = -(fVar6 * 0.5);
  *param_2 = *param_2 - fVar6 * 0.5;
  iVar3 = 0;
  iVar4 = 0;
  do {
    fVar10 = *pfVar2;
    iVar5 = iVar4 + -8;
    fVar9 = *(float *)((int)param_2 + iVar3 + 0xc);
    pfVar2 = pfVar2 + -1;
    fVar7 = fVar9 + *(float *)((int)param_2 + iVar4 + 0x1fc);
    fVar8 = *(float *)((int)param_2 + iVar3 + 8);
    fVar11 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    fVar6 = fVar8 - *(float *)((int)param_2 + iVar4 + 0x1f8);
    fVar12 = fVar11 * fVar7 + (0.5 - fVar10) * fVar6;
    fVar6 = (0.5 - fVar10) * fVar7 - fVar6 * fVar11;
    *(float *)((int)param_2 + iVar3 + 8) = fVar8 - fVar12;
    *(float *)((int)param_2 + iVar3 + 0xc) = fVar6 - fVar9;
    *(float *)((int)param_2 + iVar4 + 0x1f8) = fVar12 + *(float *)((int)param_2 + iVar4 + 0x1f8);
    *(float *)((int)param_2 + iVar4 + 0x1fc) = fVar6 - *(float *)((int)param_2 + iVar4 + 0x1fc);
    iVar3 = iVar3 + 8;
    iVar4 = iVar5;
  } while (iVar5 != -0xf8);
  param_2[0x41] = -param_2[0x41];
  thunk_xVxUneOsxcpHjJFXjDJxgQZsSkqJhwlfSpb();
  thunk_xNLjbbPjttCQUqxFHPxAdYEEMgpwjOX_tDoK(param_1,param_2);
  return;
}


// =========================================================================
// Function: MCOXylHtNEBOTJLjRddakIGqwLKfKFARGuIl
// Entry: 0x71ac1a50 | Size: 184 bytes
// =========================================================================

void MCOXylHtNEBOTJLjRddakIGqwLKfKFARGuIl(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = 0;
  pfVar5 = (float *)&DAT_7009674c;
  pfVar6 = (float *)&DAT_700967c4;
  iVar1 = 0;
  *(float *)(param_2 + 4) = -*(float *)(param_2 + 4);
  do {
    iVar2 = param_2 + iVar1;
    iVar4 = param_2 + iVar3;
    fVar9 = *pfVar6;
    iVar1 = iVar1 + -8;
    iVar3 = iVar3 + 8;
    pfVar6 = pfVar6 + -1;
    fVar8 = *(float *)(iVar4 + 0xc) + *(float *)(iVar2 + 0x1fc);
    fVar10 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    fVar7 = *(float *)(iVar4 + 8) - *(float *)(iVar2 + 0x1f8);
    fVar11 = fVar10 * fVar8 + (0.5 - fVar9) * fVar7;
    fVar7 = (0.5 - fVar9) * fVar8 - fVar7 * fVar10;
    *(float *)(iVar4 + 8) = *(float *)(iVar4 + 8) - fVar11;
    *(float *)(iVar4 + 0xc) = fVar7 - *(float *)(iVar4 + 0xc);
    *(float *)(iVar2 + 0x1f8) = fVar11 + *(float *)(iVar2 + 0x1f8);
    *(float *)(iVar2 + 0x1fc) = fVar7 - *(float *)(iVar2 + 0x1fc);
  } while (iVar1 != -0xf8);
  *(float *)(param_2 + 0x104) = -*(float *)(param_2 + 0x104);
  return;
}


// =========================================================================
// Function: xNLjbbPjttCQUqxFHPxAdYEEMgpwjOX_tDoK
// Entry: 0x71ac1b0c | Size: 180 bytes
// =========================================================================

void xNLjbbPjttCQUqxFHPxAdYEEMgpwjOX_tDoK(undefined4 param_1,float *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = thunk_OcinZnBvstHrgVHdmCcFUrWSpMbrwvqMBqz();
  thunk_AawrmrWWdbsBIfhgQLowXHNkEkhANTcNe_g(uVar1,param_2);
  uVar2 = 0xfffffffe;
  do {
    uVar2 = uVar2 + 2;
    fVar10 = param_2[0x40] + param_2[0x60];
    fVar3 = param_2[0x40] - param_2[0x60];
    fVar4 = *param_2 + param_2[0x20];
    fVar6 = param_2[0x21] - param_2[1];
    fVar8 = param_2[0x41] - param_2[0x61];
    fVar7 = *param_2 - param_2[0x20];
    fVar9 = -param_2[1] - param_2[0x21];
    fVar5 = param_2[0x41] + param_2[0x61];
    param_2[0x40] = fVar4 - fVar10;
    *param_2 = fVar4 + fVar10;
    param_2[0x61] = fVar6 + fVar3;
    param_2[0x21] = fVar6 - fVar3;
    param_2[0x60] = fVar7 + fVar8;
    param_2[0x20] = fVar7 - fVar8;
    param_2[0x41] = fVar9 + fVar5;
    param_2[1] = fVar9 - fVar5;
    param_2 = param_2 + 2;
  } while (uVar2 < 0x1e);
  return;
}


// =========================================================================
// Function: OcinZnBvstHrgVHdmCcFUrWSpMbrwvqMBqz
// Entry: 0x71ac1bc0 | Size: 776 bytes
// =========================================================================

void OcinZnBvstHrgVHdmCcFUrWSpMbrwvqMBqz(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
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
  
  pfVar1 = param_2 + 0x1f;
  fVar23 = param_2[8] - param_2[10];
  fVar5 = param_2[8] + param_2[10];
  fVar16 = param_2[9] - param_2[0xb];
  fVar7 = param_2[9] + param_2[0xb];
  fVar18 = param_2[0xc] - param_2[0xe];
  fVar12 = param_2[0xc] + param_2[0xe];
  fVar20 = param_2[0xd] - param_2[0xf];
  fVar9 = param_2[0xd] + param_2[0xf];
  fVar34 = *param_2 + param_2[2];
  fVar6 = *param_2 - param_2[2];
  fVar28 = param_2[1] + param_2[3];
  fVar8 = param_2[1] - param_2[3];
  fVar11 = param_2[5] - param_2[7];
  fVar10 = fVar23 + fVar20;
  fVar13 = fVar18 - fVar16;
  fVar16 = fVar16 + fVar18;
  fVar23 = fVar23 - fVar20;
  fVar31 = param_2[4] + param_2[6];
  fVar18 = param_2[4] - param_2[6];
  fVar20 = param_2[5] + param_2[7];
  param_2[6] = fVar6 + fVar11;
  param_2[2] = fVar6 - fVar11;
  param_2[8] = fVar5 + fVar12;
  param_2[0xd] = fVar5 - fVar12;
  param_2[9] = fVar7 + fVar9;
  param_2[0xc] = fVar9 - fVar7;
  param_2[7] = fVar8 - fVar18;
  param_2[3] = fVar8 + fVar18;
  param_2[5] = fVar28 - fVar20;
  param_2[4] = fVar34 - fVar31;
  param_2[1] = fVar28 + fVar20;
  *param_2 = fVar34 + fVar31;
  param_2[0xf] = (fVar13 + fVar10) * 0.70710677;
  param_2[0xe] = (fVar13 - fVar10) * 0.70710677;
  param_2[0xb] = (fVar16 + fVar23) * 0.70710677;
  param_2[10] = (fVar23 - fVar16) * 0.70710677;
  iVar2 = 0;
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 0x10;
    fVar11 = pfVar1[-0xf] - pfVar1[-0xd];
    fVar20 = pfVar1[-0xf] + pfVar1[-0xd];
    fVar9 = pfVar1[-10] - pfVar1[-8];
    fVar8 = pfVar1[-10] + pfVar1[-8];
    fVar7 = pfVar1[-0xe] - pfVar1[-0xc];
    fVar10 = pfVar1[-0xe] + pfVar1[-0xc];
    fVar23 = *(float *)((int)&DAT_700967d0 + iVar2);
    fVar12 = pfVar1[-0xb] + pfVar1[-9];
    fVar31 = *(float *)((int)&DAT_700967d4 + iVar2);
    fVar5 = pfVar1[-0xb] - pfVar1[-9];
    fVar19 = *(float *)((int)&DAT_700966d8 + uVar3);
    fVar21 = *(float *)((int)&DAT_700966dc + uVar3);
    fVar6 = fVar11 + fVar9;
    fVar11 = fVar11 - fVar9;
    fVar14 = *(float *)((int)&DAT_700966d0 + iVar2);
    fVar13 = *(float *)((int)&DAT_700966d4 + iVar2);
    fVar15 = fVar10 - fVar8;
    fVar9 = fVar20 - fVar12;
    fVar24 = *(float *)((int)&DAT_700966e0 + uVar3);
    fVar17 = fVar7 - fVar5;
    fVar26 = *(float *)((int)&DAT_700966e4 + uVar3);
    fVar7 = fVar7 + fVar5;
    fVar32 = pfVar1[-7] - pfVar1[-5];
    fVar18 = pfVar1[-2] - *pfVar1;
    fVar22 = pfVar1[-6] - pfVar1[-4];
    fVar25 = pfVar1[-3] - pfVar1[-1];
    fVar28 = pfVar1[-7] + pfVar1[-5];
    fVar29 = fVar32 - fVar18;
    fVar5 = pfVar1[-3] + pfVar1[-1];
    fVar34 = pfVar1[-2] + *pfVar1;
    fVar32 = fVar32 + fVar18;
    fVar33 = *(float *)((int)&DAT_70096814 + iVar2);
    fVar27 = fVar22 + fVar25;
    fVar16 = fVar28 - fVar5;
    fVar18 = pfVar1[-6] + pfVar1[-4];
    fVar30 = *(float *)((int)&DAT_70096810 + iVar2);
    pfVar1[-0xf] = fVar20 + fVar12;
    fVar12 = fVar18 - fVar34;
    pfVar1[-0xe] = fVar10 + fVar8;
    pfVar1[-0xd] = fVar19 * fVar11 - fVar7 * fVar21;
    pfVar1[-0xc] = fVar21 * fVar11 + fVar19 * fVar7;
    pfVar1[-0xb] = fVar14 * fVar9 - fVar15 * fVar13;
    pfVar1[-10] = fVar13 * fVar9 + fVar14 * fVar15;
    fVar22 = fVar22 - fVar25;
    pfVar1[-9] = fVar23 * fVar6 - fVar17 * fVar31;
    pfVar1[-8] = fVar31 * fVar6 + fVar23 * fVar17;
    pfVar1[-7] = fVar28 + fVar5;
    pfVar1[-6] = fVar18 + fVar34;
    pfVar1[-5] = fVar24 * fVar29 - fVar27 * fVar26;
    pfVar1[-4] = fVar26 * fVar29 + fVar24 * fVar27;
    pfVar1[-2] = fVar14 * fVar16 - fVar13 * fVar12;
    pfVar1[-3] = -(fVar13 * fVar16) - fVar12 * fVar14;
    pfVar1[-1] = fVar30 * fVar32 - fVar22 * fVar33;
    *pfVar1 = fVar33 * fVar32 + fVar30 * fVar22;
    pfVar1 = pfVar1 + 0x10;
    iVar2 = iVar2 + 8;
    uVar3 = uVar4;
  } while (uVar4 < 0x70);
  return;
}


// =========================================================================
// Function: AawrmrWWdbsBIfhgQLowXHNkEkhANTcNe_g
// Entry: 0x71ac1ed8 | Size: 2608 bytes
// =========================================================================

void AawrmrWWdbsBIfhgQLowXHNkEkhANTcNe_g(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float fVar16;
  
  fVar4 = param_2[0x10] - param_2[0x18];
  fVar1 = param_2[0x10] + param_2[0x18];
  fVar12 = *param_2 - param_2[8];
  fVar3 = *param_2 + param_2[8];
  fVar7 = param_2[1] - param_2[9];
  fVar5 = param_2[1] + param_2[9];
  fVar10 = param_2[0x11] - param_2[0x19];
  fVar9 = param_2[0x11] + param_2[0x19];
  fVar14 = param_2[2] + param_2[10];
  fVar6 = param_2[2] - param_2[10];
  fVar16 = param_2[3] + param_2[0xb];
  fVar8 = param_2[3] - param_2[0xb];
  fVar13 = param_2[0x12] + param_2[0x1a];
  fVar11 = param_2[0x12] - param_2[0x1a];
  fVar15 = param_2[0x13] + param_2[0x1b];
  fVar2 = param_2[0x13] - param_2[0x1b];
  param_2[0x11] = fVar5 - fVar9;
  param_2[0x10] = fVar3 - fVar1;
  param_2[1] = fVar5 + fVar9;
  *param_2 = fVar3 + fVar1;
  param_2[0x19] = fVar7 - fVar4;
  param_2[0x18] = fVar12 + fVar10;
  param_2[2] = fVar14 + fVar13;
  param_2[0x13] = fVar16 - fVar15;
  param_2[0xb] = fVar8 + fVar11;
  param_2[10] = fVar6 - fVar2;
  param_2[9] = fVar7 + fVar4;
  param_2[8] = fVar12 - fVar10;
  fVar3 = param_2[0x15] + param_2[0x1d];
  fVar1 = param_2[0x15] - param_2[0x1d];
  fVar4 = param_2[5] + param_2[0xd];
  param_2[0x12] = fVar14 - fVar13;
  fVar5 = param_2[0x14] + param_2[0x1c];
  param_2[0x1b] = fVar8 - fVar11;
  fVar7 = param_2[5] - param_2[0xd];
  param_2[3] = fVar16 + fVar15;
  fVar8 = param_2[4] + param_2[0xc];
  param_2[0x1a] = fVar6 + fVar2;
  fVar2 = param_2[4] - param_2[0xc];
  fVar9 = param_2[0x14] - param_2[0x1c];
  param_2[0x15] = fVar4 - fVar3;
  param_2[5] = fVar4 + fVar3;
  param_2[0x14] = fVar8 - fVar5;
  param_2[0xd] = fVar7 + fVar9;
  param_2[0xc] = fVar2 - fVar1;
  fVar6 = param_2[6] + param_2[0xe];
  param_2[4] = fVar8 + fVar5;
  fVar5 = param_2[0x16] + param_2[0x1e];
  fVar8 = param_2[0x16] - param_2[0x1e];
  param_2[0x1d] = fVar7 - fVar9;
  fVar3 = param_2[0x17] + param_2[0x1f];
  param_2[0x1c] = fVar2 + fVar1;
  fVar4 = param_2[7] + param_2[0xf];
  fVar7 = param_2[7] - param_2[0xf];
  fVar1 = param_2[0x17] - param_2[0x1f];
  fVar2 = param_2[6] - param_2[0xe];
  param_2[0x16] = fVar6 - fVar5;
  param_2[6] = fVar6 + fVar5;
  param_2[0x17] = fVar4 - fVar3;
  param_2[7] = fVar4 + fVar3;
  param_2[0xf] = fVar7 + fVar8;
  param_2[0xe] = fVar2 - fVar1;
  fVar4 = param_2[0x21] - param_2[0x29];
  param_2[0x1f] = fVar7 - fVar8;
  fVar3 = param_2[0x31] - param_2[0x39];
  fVar7 = param_2[0x30] - param_2[0x38];
  param_2[0x1e] = fVar2 + fVar1;
  fVar1 = param_2[0x20] - param_2[0x28];
  fVar2 = param_2[0x31] + param_2[0x39];
  fVar10 = param_2[0x30] + param_2[0x38];
  fVar5 = param_2[0x20] + param_2[0x28];
  fVar8 = param_2[0x21] + param_2[0x29];
  fVar9 = fVar7 - fVar4;
  fVar6 = fVar1 + fVar3;
  fVar1 = fVar1 - fVar3;
  fVar4 = fVar4 + fVar7;
  param_2[0x31] = fVar5 - fVar10;
  param_2[0x20] = fVar5 + fVar10;
  param_2[0x30] = fVar2 - fVar8;
  param_2[0x21] = fVar8 + fVar2;
  fVar8 = param_2[0x32] - param_2[0x3a];
  fVar10 = param_2[0x32] + param_2[0x3a];
  param_2[0x39] = (fVar9 + fVar6) * 0.70710677;
  param_2[0x38] = (fVar9 - fVar6) * 0.70710677;
  fVar2 = param_2[0x33] - param_2[0x3b];
  param_2[0x29] = (fVar4 + fVar1) * 0.70710677;
  fVar3 = param_2[0x33] + param_2[0x3b];
  param_2[0x28] = (fVar1 - fVar4) * 0.70710677;
  fVar1 = param_2[0x22] - param_2[0x2a];
  fVar7 = param_2[0x22] + param_2[0x2a];
  fVar5 = param_2[0x23] - param_2[0x2b];
  fVar4 = param_2[0x23] + param_2[0x2b];
  fVar6 = fVar1 + fVar2;
  fVar1 = fVar1 - fVar2;
  fVar2 = fVar8 - fVar5;
  fVar5 = fVar5 + fVar8;
  param_2[0x33] = fVar7 - fVar10;
  fVar8 = param_2[0x34] - param_2[0x3c];
  fVar9 = param_2[0x34] + param_2[0x3c];
  param_2[0x32] = fVar3 - fVar4;
  param_2[0x23] = fVar4 + fVar3;
  param_2[0x22] = fVar7 + fVar10;
  param_2[0x3b] = (fVar2 + fVar6) * 0.70710677;
  param_2[0x3a] = (fVar2 - fVar6) * 0.70710677;
  param_2[0x2b] = (fVar5 + fVar1) * 0.70710677;
  fVar3 = param_2[0x35] - param_2[0x3d];
  param_2[0x2a] = (fVar1 - fVar5) * 0.70710677;
  fVar1 = param_2[0x35] + param_2[0x3d];
  fVar2 = param_2[0x24] - param_2[0x2c];
  fVar7 = param_2[0x24] + param_2[0x2c];
  fVar5 = param_2[0x25] - param_2[0x2d];
  fVar4 = param_2[0x25] + param_2[0x2d];
  fVar6 = fVar2 + fVar3;
  fVar2 = fVar2 - fVar3;
  fVar3 = fVar8 - fVar5;
  fVar5 = fVar5 + fVar8;
  param_2[0x35] = fVar7 - fVar9;
  fVar8 = param_2[0x36] - param_2[0x3e];
  fVar10 = param_2[0x36] + param_2[0x3e];
  param_2[0x34] = fVar1 - fVar4;
  param_2[0x25] = fVar4 + fVar1;
  param_2[0x24] = fVar7 + fVar9;
  param_2[0x3d] = (fVar3 + fVar6) * 0.70710677;
  param_2[0x3c] = (fVar3 - fVar6) * 0.70710677;
  param_2[0x2d] = (fVar5 + fVar2) * 0.70710677;
  fVar3 = param_2[0x37] - param_2[0x3f];
  param_2[0x2c] = (fVar2 - fVar5) * 0.70710677;
  fVar1 = param_2[0x37] + param_2[0x3f];
  fVar2 = param_2[0x26] - param_2[0x2e];
  fVar7 = param_2[0x26] + param_2[0x2e];
  fVar5 = param_2[0x27] - param_2[0x2f];
  fVar4 = param_2[0x27] + param_2[0x2f];
  fVar6 = fVar2 + fVar3;
  fVar2 = fVar2 - fVar3;
  fVar9 = fVar8 - fVar5;
  fVar5 = fVar5 + fVar8;
  param_2[0x37] = fVar7 - fVar10;
  param_2[0x36] = fVar1 - fVar4;
  param_2[0x27] = fVar4 + fVar1;
  param_2[0x26] = fVar7 + fVar10;
  param_2[0x3f] = (fVar9 + fVar6) * 0.70710677;
  param_2[0x2f] = (fVar5 + fVar2) * 0.70710677;
  fVar11 = param_2[0x50] + param_2[0x58];
  fVar3 = param_2[0x50] - param_2[0x58];
  param_2[0x3e] = (fVar9 - fVar6) * 0.70710677;
  fVar4 = param_2[0x40] + param_2[0x48];
  param_2[0x2e] = (fVar2 - fVar5) * 0.70710677;
  fVar7 = param_2[0x40] - param_2[0x48];
  fVar1 = param_2[0x51] - param_2[0x59];
  fVar9 = param_2[0x51] + param_2[0x59];
  fVar2 = param_2[0x41] - param_2[0x49];
  fVar8 = param_2[0x41] + param_2[0x49];
  fVar5 = fVar7 + fVar1;
  fVar7 = fVar7 - fVar1;
  fVar1 = fVar2 - fVar3;
  fVar6 = fVar8 - fVar9;
  fVar10 = (fVar4 - fVar11) * 0.70710677;
  fVar2 = fVar2 + fVar3;
  param_2[0x40] = fVar4 + fVar11;
  param_2[0x41] = fVar8 + fVar9;
  param_2[0x50] = fVar10 + fVar6 * -0.70710677;
  param_2[0x59] = fVar5 * 0.92387956 + fVar1 * 0.38268346;
  fVar8 = param_2[0x53] - param_2[0x5b];
  param_2[0x58] = fVar1 * -0.92387956 + fVar5 * 0.38268346;
  param_2[0x49] = fVar7 * 0.38268346 + fVar2 * 0.92387956;
  fVar9 = param_2[0x52] + param_2[0x5a];
  fVar11 = param_2[0x42] + param_2[0x4a];
  fVar1 = param_2[0x42] - param_2[0x4a];
  fVar5 = param_2[0x52] - param_2[0x5a];
  param_2[0x51] = fVar10 + fVar6 * 0.70710677;
  fVar6 = param_2[0x43] - param_2[0x4b];
  fVar4 = param_2[0x53] + param_2[0x5b];
  fVar3 = param_2[0x43] + param_2[0x4b];
  param_2[0x48] = fVar2 * -0.38268346 + fVar7 * 0.92387956;
  fVar7 = fVar1 + fVar8;
  fVar1 = fVar1 - fVar8;
  fVar8 = fVar6 - fVar5;
  fVar6 = fVar6 + fVar5;
  fVar10 = fVar3 - fVar4;
  fVar5 = (fVar11 - fVar9) * 0.70710677;
  param_2[0x43] = fVar3 + fVar4;
  param_2[0x42] = fVar11 + fVar9;
  param_2[0x4b] = fVar1 * 0.38268346 + fVar6 * 0.92387956;
  fVar9 = param_2[0x54] + param_2[0x5c];
  fVar4 = param_2[0x54] - param_2[0x5c];
  param_2[0x5b] = fVar7 * 0.92387956 + fVar8 * 0.38268346;
  fVar12 = param_2[0x55] - param_2[0x5d];
  param_2[0x52] = fVar5 + fVar10 * -0.70710677;
  param_2[0x4a] = fVar6 * -0.38268346 + fVar1 * 0.92387956;
  fVar11 = param_2[0x44] + param_2[0x4c];
  fVar1 = param_2[0x44] - param_2[0x4c];
  fVar2 = param_2[0x55] + param_2[0x5d];
  param_2[0x53] = fVar5 + fVar10 * 0.70710677;
  fVar6 = param_2[0x45] - param_2[0x4d];
  param_2[0x5a] = fVar8 * -0.92387956 + fVar7 * 0.38268346;
  fVar3 = param_2[0x45] + param_2[0x4d];
  fVar5 = fVar1 + fVar12;
  fVar1 = fVar1 - fVar12;
  fVar7 = fVar6 - fVar4;
  fVar6 = fVar6 + fVar4;
  fVar8 = fVar3 - fVar2;
  fVar4 = (fVar11 - fVar9) * 0.70710677;
  param_2[0x45] = fVar3 + fVar2;
  param_2[0x44] = fVar11 + fVar9;
  param_2[0x4d] = fVar1 * 0.38268346 + fVar6 * 0.92387956;
  fVar10 = param_2[0x56] + param_2[0x5e];
  fVar9 = param_2[0x56] - param_2[0x5e];
  param_2[0x54] = fVar4 + fVar8 * -0.70710677;
  param_2[0x4c] = fVar6 * -0.38268346 + fVar1 * 0.92387956;
  fVar12 = param_2[0x46] + param_2[0x4e];
  param_2[0x5d] = fVar5 * 0.92387956 + fVar7 * 0.38268346;
  fVar1 = param_2[0x46] - param_2[0x4e];
  fVar6 = param_2[0x47] - param_2[0x4f];
  param_2[0x55] = fVar4 + fVar8 * 0.70710677;
  fVar4 = param_2[0x57] - param_2[0x5f];
  param_2[0x5c] = fVar7 * -0.92387956 + fVar5 * 0.38268346;
  fVar2 = param_2[0x57] + param_2[0x5f];
  fVar3 = param_2[0x47] + param_2[0x4f];
  fVar8 = fVar6 - fVar9;
  fVar6 = fVar6 + fVar9;
  fVar5 = fVar1 + fVar4;
  fVar1 = fVar1 - fVar4;
  fVar11 = fVar3 - fVar2;
  fVar4 = (fVar12 - fVar10) * 0.70710677;
  param_2[0x46] = fVar12 + fVar10;
  param_2[0x47] = fVar3 + fVar2;
  param_2[0x56] = fVar4 + fVar11 * -0.70710677;
  fVar7 = param_2[0x71] + param_2[0x79];
  param_2[0x4e] = fVar6 * -0.38268346 + fVar1 * 0.92387956;
  fVar2 = param_2[0x71] - param_2[0x79];
  param_2[0x4f] = fVar1 * 0.38268346 + fVar6 * 0.92387956;
  fVar9 = param_2[0x61] + param_2[0x69];
  fVar3 = param_2[0x61] - param_2[0x69];
  param_2[0x5f] = fVar5 * 0.92387956 + fVar8 * 0.38268346;
  fVar6 = param_2[0x60] - param_2[0x68];
  fVar12 = param_2[0x70] - param_2[0x78];
  param_2[0x57] = fVar4 + fVar11 * 0.70710677;
  fVar4 = param_2[0x70] + param_2[0x78];
  param_2[0x5e] = fVar8 * -0.92387956 + fVar5 * 0.38268346;
  fVar1 = param_2[0x60] + param_2[0x68];
  fVar8 = fVar6 + fVar2;
  fVar6 = fVar6 - fVar2;
  fVar10 = fVar3 + fVar12;
  fVar3 = fVar3 - fVar12;
  fVar2 = fVar1 - fVar4;
  fVar5 = (fVar9 - fVar7) * -0.70710677;
  param_2[0x61] = fVar9 + fVar7;
  param_2[0x60] = fVar1 + fVar4;
  fVar7 = param_2[0x73] + param_2[0x7b];
  param_2[0x70] = fVar5 + fVar2 * -0.70710677;
  fVar9 = param_2[0x73] - param_2[0x7b];
  param_2[0x68] = fVar10 * -0.92387956 + fVar6 * 0.38268346;
  param_2[0x69] = fVar6 * 0.92387956 + fVar10 * 0.38268346;
  fVar10 = param_2[99] + param_2[0x6b];
  param_2[0x79] = fVar8 * -0.38268346 + fVar3 * -0.92387956;
  fVar6 = param_2[0x62] - param_2[0x6a];
  fVar4 = param_2[99] - param_2[0x6b];
  param_2[0x71] = fVar5 + fVar2 * 0.70710677;
  fVar5 = param_2[0x72] - param_2[0x7a];
  param_2[0x78] = fVar3 * 0.38268346 + fVar8 * -0.92387956;
  fVar2 = param_2[0x72] + param_2[0x7a];
  fVar1 = param_2[0x62] + param_2[0x6a];
  fVar8 = fVar6 + fVar9;
  fVar6 = fVar6 - fVar9;
  fVar11 = fVar4 + fVar5;
  fVar4 = fVar4 - fVar5;
  fVar3 = fVar1 - fVar2;
  fVar5 = (fVar10 - fVar7) * -0.70710677;
  param_2[0x62] = fVar1 + fVar2;
  param_2[99] = fVar10 + fVar7;
  fVar7 = param_2[0x75] + param_2[0x7d];
  param_2[0x72] = fVar5 + fVar3 * -0.70710677;
  fVar9 = param_2[0x75] - param_2[0x7d];
  param_2[0x6a] = fVar11 * -0.92387956 + fVar6 * 0.38268346;
  param_2[0x7b] = fVar8 * -0.38268346 + fVar4 * -0.92387956;
  fVar10 = param_2[100] - param_2[0x6c];
  param_2[0x6b] = fVar6 * 0.92387956 + fVar11 * 0.38268346;
  fVar6 = param_2[0x65] + param_2[0x6d];
  fVar2 = param_2[0x65] - param_2[0x6d];
  param_2[0x73] = fVar5 + fVar3 * 0.70710677;
  fVar3 = param_2[0x74] - param_2[0x7c];
  param_2[0x7a] = fVar4 * 0.38268346 + fVar8 * -0.92387956;
  fVar4 = param_2[0x74] + param_2[0x7c];
  fVar1 = param_2[100] + param_2[0x6c];
  fVar8 = fVar10 + fVar9;
  fVar10 = fVar10 - fVar9;
  fVar9 = fVar2 + fVar3;
  fVar2 = fVar2 - fVar3;
  fVar3 = fVar1 - fVar4;
  fVar5 = (fVar6 - fVar7) * -0.70710677;
  param_2[100] = fVar1 + fVar4;
  param_2[0x65] = fVar6 + fVar7;
  fVar7 = param_2[0x77] + param_2[0x7f];
  param_2[0x6c] = fVar9 * -0.92387956 + fVar10 * 0.38268346;
  fVar6 = param_2[0x77] - param_2[0x7f];
  param_2[0x6d] = fVar10 * 0.92387956 + fVar9 * 0.38268346;
  fVar10 = param_2[0x67] + param_2[0x6f];
  param_2[0x74] = fVar5 + fVar3 * -0.70710677;
  fVar4 = param_2[0x67] - param_2[0x6f];
  param_2[0x7d] = fVar8 * -0.38268346 + fVar2 * -0.92387956;
  fVar12 = param_2[0x76] - param_2[0x7e];
  fVar9 = param_2[0x66] - param_2[0x6e];
  param_2[0x75] = fVar5 + fVar3 * 0.70710677;
  fVar1 = param_2[0x66] + param_2[0x6e];
  param_2[0x7c] = fVar2 * 0.38268346 + fVar8 * -0.92387956;
  fVar5 = param_2[0x76] + param_2[0x7e];
  fVar11 = fVar4 - fVar12;
  fVar8 = fVar9 + fVar6;
  fVar9 = fVar9 - fVar6;
  fVar4 = fVar4 + fVar12;
  fVar3 = fVar1 - fVar5;
  fVar2 = (fVar10 - fVar7) * -0.70710677;
  param_2[0x67] = fVar10 + fVar7;
  param_2[0x66] = fVar1 + fVar5;
  param_2[0x76] = fVar2 + fVar3 * -0.70710677;
  param_2[0x7f] = fVar8 * -0.38268346 + fVar11 * -0.92387956;
  param_2[0x7e] = fVar11 * 0.38268346 + fVar8 * -0.92387956;
  param_2[0x6f] = fVar9 * 0.92387956 + fVar4 * 0.38268346;
  param_2[0x6e] = fVar4 * -0.92387956 + fVar9 * 0.38268346;
  param_2[0x77] = fVar2 + fVar3 * 0.70710677;
  return;
}


// =========================================================================
// Function: D_KWRtYnPhUnVGuoTmDgYfGQJYtSweXBaDDMjIcTopRrVuqctEIFxo_NVzqxC_dncSOgAyz
// Entry: 0x71ac2adc | Size: 224 bytes
// =========================================================================

undefined4 *
D_KWRtYnPhUnVGuoTmDgYfGQJYtSweXBaDDMjIcTopRrVuqctEIFxo_NVzqxC_dncSOgAyz
          (int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)thunk_MwhHq(0x56c);
  *puVar2 = &DAT_70b13674;
  uVar3 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x71204888);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_71204888 = DAT_71204888 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar3);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  thunk_JArGoHvqxafeGOUsXeXeWXEwEkmfzFOVjCgtXCzJ_wJWscDgtHGokxPdOvRJWkZMaZPzZFZqTqdnJRuQNiRgib
            (puVar2 + 8,uVar3,param_1,param_3);
  thunk_xrBxGjWjvDGzfdgEsEIsSfUmkyHhjhKvDHIQqZotWGLG(puVar2 + 0x14d);
  puVar2[0x158] = 0;
  puVar2[0x159] = 0;
  puVar2[0x15a] = 0;
  *(undefined1 *)(puVar2 + 0x157) = 0;
  *(undefined1 *)(puVar2 + 0x153) = 0;
  thunk_bjAuGMYPoe_Sx_ZcsebP_almGViTkLjfbdZNwvoTrlaXeNijrpr(puVar2 + 0x1e,param_2,0,puVar2[9]);
  return puVar2;
}


// =========================================================================
// Function: FUN_71ac2c04
// Entry: 0x71ac2c04 | Size: 56 bytes
// =========================================================================

int FUN_71ac2c04(int param_1)

{
  int iVar1;
  
  thunk_hiFLq_nwdphzXbAciRKtBoiPbEBaeHUJPPRAfb(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ac2c3c
// Entry: 0x71ac2c3c | Size: 60 bytes
// =========================================================================

void FUN_71ac2c3c(int param_1)

{
  int iVar1;
  
  thunk_hiFLq_nwdphzXbAciRKtBoiPbEBaeHUJPPRAfb(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71ac2c78
// Entry: 0x71ac2c78 | Size: 80 bytes
// =========================================================================

void FUN_71ac2c78(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x1c) != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (*(char *)(param_1 + 0x55c) != '\0') {
    *(undefined1 *)(param_1 + 0x55c) = 0;
  }
  thunk_TAMtH_nzgR_MmzVaSbDSwnzPkJBBVOKNLGKOofwGEZ(param_1 + 0x20,param_2);
  *(undefined4 *)(param_1 + 0x564) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x568) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_71ac2ccc
// Entry: 0x71ac2ccc | Size: 424 bytes
// =========================================================================

void FUN_71ac2ccc(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  char cStack_28;
  
  *(int *)(param_2 + 0x560) = *(int *)(param_2 + 0x560) + 1;
  thunk_rXasitKEhHEWU_dZkBVIWZxYhZjMW_LnJnFssfBlNZxxfYLWEEtReeVTxBHmiuhzKtquYxPsLTuZXfgiqpZebA_DSEeRo
            (&uStack_38,param_2 + 0x20,param_3,param_5);
  if (cStack_28 == '\0') {
    if (*(char *)(param_2 + 0x55c) != '\0') {
      *(int *)(param_2 + 0x554) = *(int *)(param_2 + 0x554) + 1;
      *(int *)(param_2 + 0x558) = *(int *)(param_2 + 0x558) + 1;
    }
  }
  else if (*(char *)(param_2 + 0x55c) == '\0') {
    *(ulonglong *)(param_2 + 0x54c) = CONCAT44(iStack_34,uStack_38);
    *(undefined8 *)(param_2 + 0x554) = uStack_30;
    *(undefined4 *)(param_2 + 0x564) = 0;
    *(char *)(param_2 + 0x55c) = cStack_28;
  }
  else {
    iVar5 = 0;
    bVar8 = iStack_34 != *(int *)(param_2 + 0x550);
    *(undefined4 *)(param_2 + 0x558) = 0;
    uVar4 = extraout_r2;
    if (bVar8) {
      uVar4 = 0;
    }
    *(int *)(param_2 + 0x550) = iStack_34;
    if (bVar8) {
      *(undefined4 *)(param_2 + 0x564) = uVar4;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x554) + 1;
    }
    *(undefined4 *)(param_2 + 0x54c) = uStack_38;
    *(int *)(param_2 + 0x554) = iVar5;
  }
  if (*(int *)(param_2 + 0x564) < 500) {
    *(int *)(param_2 + 0x564) = *(int *)(param_2 + 0x564) + 1;
  }
  if (*(char *)(param_2 + 0x55c) == '\0') {
    uVar6 = *(uint *)(param_2 + 0x10);
    uVar4 = 0;
    cVar2 = *(char *)(param_2 + 0x1c);
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x550);
    iVar5 = *(int *)(param_2 + 0x54c);
    uVar1 = uVar3 >> 6;
    if (*(char *)(param_2 + 0x1c) == '\0') {
      *(undefined1 *)(param_2 + 0x1c) = 1;
      uVar6 = uVar1;
    }
    else {
      uVar6 = *(uint *)(param_2 + 0x10);
      uVar7 = uVar6;
      if (*(int *)(param_2 + 0x568) == 1 && iVar5 == 1) {
        uVar7 = uVar6 + *(int *)(param_2 + 8);
      }
      if (uVar1 < uVar6) {
        uVar6 = uVar1;
      }
      if (uVar7 < uVar1) {
        uVar6 = uVar1;
      }
    }
    *(int *)(param_2 + 0x568) = iVar5;
    *(int *)(param_2 + 0xc) = iVar5;
    *(uint *)(param_2 + 0x10) = uVar6;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x554);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x558);
    cVar2 = '\x01';
    uVar4 = 1;
  }
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  thunk_tfsohpdgPEonQNMGGbDAVXMyDrFIXZsuwiXXfVxWvFZwiCVjtAFTNyWmaCikorZSgc_vFJuLgnB_zeFvniDurPHTyPysLHzyZrVFPNjL
            (param_2 + 0x534,uVar3,uVar4,uVar6,cVar2,*(undefined4 *)(param_2 + 0x52c));
  uVar9 = *(undefined8 *)(param_2 + 0x14);
  *param_1 = *(undefined8 *)(param_2 + 0xc);
  param_1[1] = uVar9;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x1c);
  return;
}


// =========================================================================
// Function: JArGoHvqxafeGOUsXeXeWXEwEkmfzFOVjCgtXCzJ_wJWscDgtHGokxPdOvRJWkZMaZPzZFZqTqdnJRuQNiRgib
// Entry: 0x71ac3190 | Size: 300 bytes
// =========================================================================

undefined4 *
JArGoHvqxafeGOUsXeXeWXEwEkmfzFOVjCgtXCzJ_wJWscDgtHGokxPdOvRJWkZMaZPzZFZqTqdnJRuQNiRgib
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_3 + 0xc);
  uVar1 = 0x40;
  *param_1 = param_2;
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    uVar1 = FUN_71ba0484();
  }
  param_1[2] = uVar1;
  thunk_AfJnnNxayrnorjUpWhFXHNAjUxaHLlKQewSKBFekDAhJZvSiButnBKNkXZRrErPwFRsTzFPuQLURpQLrl
            (param_1 + 3,param_4,param_3 + 0x44);
  thunk_moJLdLfsjGEWNYxoFEwBWOYy(param_1 + 0xf,param_1[1]);
  uVar1 = *param_1;
  uVar2 = thunk_YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR();
  iVar3 = 0xf8;
  if (*(int *)(param_3 + 0xc) == 8) {
    iVar3 = 0xfc;
  }
  thunk_DYjdWOsLNkQD_OnuFFHfVxmMfQVXMDCLLlXstkovZtmKlGOKIwDGTQXbyGZtptZaVwgQgyYloOTTTUc
            (param_1 + 0x16,uVar1,uVar2,param_1[2],0x20,*(undefined4 *)(param_3 + 0x10),0x18,
             *(undefined4 *)(param_3 + iVar3),*(undefined4 *)(param_3 + 0x20),
             *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),
             *(undefined1 *)(param_3 + 0x50));
  piVar4 = (int *)param_1[0x1a];
  thunk_FRQkeDBdzzDDpgcCCnuPbAhrTCxFVhiqibaXnfcdTOeJImcnVsmNZqdgUZhxARvpcAsJYDlYcKGpltBMsJmYVRjzicqJGPKV
            (param_1 + 0x35,*param_1,
             (param_1[0x1b] - (int)piVar4 >> 2) * param_1[0x19] * -0x55555555 +
             (piVar4[1] - *piVar4 >> 2),param_3 + 8);
  param_1[0x13f] = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  thunk_VvtEvjaTHwqgIkStrray_PUeJGaQWhgo__(param_1 + 0x140);
  return param_1;
}


// =========================================================================
// Function: hiFLq_nwdphzXbAciRKtBoiPbEBaeHUJPPRAfb
// Entry: 0x71ac3300 | Size: 80 bytes
// =========================================================================

int hiFLq_nwdphzXbAciRKtBoiPbEBaeHUJPPRAfb(int param_1)

{
  thunk_DbQfvARxvxtCexoIQKZdLZCfIH_ojsEGoU(param_1 + 0x500);
  thunk_prqCeFJdLSQGMvtRZPrgfMjYbsMcFWkIgzjYTsYxXR(param_1 + 0xd4);
  thunk_zlWBfdztXYCtkjNrUHiapTpmqaxwn(param_1 + 0x58);
  thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(param_1 + 0x4c);
  thunk_RIVierVzXcGHSqZfKJmlMXpNFiAuCbUwhkhs(param_1 + 0x40);
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: TAMtH_nzgR_MmzVaSbDSwnzPkJBBVOKNLGKOofwGEZ
// Entry: 0x71ac3350 | Size: 60 bytes
// =========================================================================

void TAMtH_nzgR_MmzVaSbDSwnzPkJBBVOKNLGKOofwGEZ(int param_1)

{
  thunk_xBmHYzuhErnbKBxffrkF_YIvz_slRjoLSPUKKAALSTlkrN(param_1 + 0xd4);
  thunk_gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB(param_1 + 0x58,1);
  if (*(char *)(param_1 + 0x4f8) != '\0') {
    *(undefined1 *)(param_1 + 0x4f8) = 0;
  }
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  return;
}


// =========================================================================
// Function: xVEUOKqHkcBFqMPYLbQSaVgOBYXzLHQPuRQWU_hqyzn
// Entry: 0x71ac338c | Size: 76 bytes
// =========================================================================

void xVEUOKqHkcBFqMPYLbQSaVgOBYXzLHQPuRQWU_hqyzn(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    thunk_xBmHYzuhErnbKBxffrkF_YIvz_slRjoLSPUKKAALSTlkrN(param_1 + 0xd4,param_3);
  }
  thunk_gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB(param_1 + 0x58,param_2);
  if (*(char *)(param_1 + 0x4f8) != '\0') {
    *(undefined1 *)(param_1 + 0x4f8) = 0;
  }
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  return;
}


// =========================================================================
// Function: rXasitKEhHEWU_dZkBVIWZxYhZjMW_LnJnFssfBlNZxxfYLWEEtReeVTxBHmiuhzKtquYxPsLTuZXfgiqpZebA_DSEeRo
// Entry: 0x71ac33d8 | Size: 372 bytes
// =========================================================================

void rXasitKEhHEWU_dZkBVIWZxYhZjMW_LnJnFssfBlNZxxfYLWEEtReeVTxBHmiuhzKtquYxPsLTuZXfgiqpZebA_DSEeRo
               (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined1 uStack_228;
  undefined1 auStack_224 [256];
  undefined1 auStack_124 [260];
  
  iVar2 = *(int *)(param_2 + 8);
  thunk_hHzBnBTywhUkouDJQNHlHyGdaesTsTQViBbgJCLvfXgIeJTDULwRapDGbbOfsGyXUzaqbPnbYumrpv
            (param_2 + 0xc,param_4,auStack_224);
  puVar3 = auStack_124;
  if (iVar2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  thunk_chvRUtuIGZPBZQaJVl_qWvznbKDfQrtcoxKVjtJyDoWgg_Sn_itrHCUhpjLkCkCAoIrzavOhMV
            (param_2 + 0x3c,auStack_224,0x40,puVar3,iVar2);
  thunk_uXCbstDKZcSacXPeUiwFZonOvEcWNPmMDuEGKLJtmHIEooxPcbAXgkaHBxRLZJDRXPUBVFTiiZGrpHDDgzWaeITzPWbIK
            (param_2 + 0x58,param_3,puVar3,iVar2,*(undefined1 *)(param_2 + 0xd8));
  uStack_230 = uStack_230 & 0xffffff00;
  uStack_228 = *(char *)(param_2 + 0xa0) != '\0';
  if ((bool)uStack_228) {
    uStack_230 = *(uint *)(param_2 + 0x98);
    uStack_22c = *(undefined4 *)(param_2 + 0x9c);
  }
  thunk_ocSiFfZiwpDydkgqmjjDIcefRdRFHDjzUthsXycTMRTxcVJUugCQqhdPuiBIxplVvdBOoQicVIJAGCkzehHqQhfKHTQBtNwRlYTCfNTkZx
            (param_1,param_2 + 0xd4,&uStack_230);
  if ((((char)param_1[4] == '\0') ||
      (((*param_1 == 1 &&
        (thunk_NyYndffoEBTZLYTouWBmRSpACTLAxLSqActNbjL
                   (param_2 + 0x500,*(undefined4 *)(param_2 + 0x4e0)), (char)param_1[4] == '\0')) ||
       (cVar1 = *(char *)(param_2 + 0x4f8), param_1[1] = param_1[1] * *(int *)(param_2 + 4),
       cVar1 == '\0')))) || (*(int *)(param_2 + 0x4ec) != param_1[1])) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x4fc) + 1;
  }
  uVar4 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 2);
  *(int *)(param_2 + 0x4fc) = iVar2;
  iVar2 = param_1[4];
  *(undefined8 *)(param_2 + 0x4e8) = uVar4;
  *(undefined8 *)(param_2 + 0x4f0) = uVar5;
  *(char *)(param_2 + 0x4f8) = (char)iVar2;
  if (0x7d < *(uint *)(param_2 + 0x4fc)) {
    thunk_gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB(param_2 + 0x58,0);
    *(undefined4 *)(param_2 + 0x4fc) = 0;
    if (*(char *)(param_2 + 0x4f8) != '\0') {
      *(undefined1 *)(param_2 + 0x4f8) = 0;
    }
  }
  return;
}


// =========================================================================
// Function: CQuuachJZoejeMocyrEilGLhtqdQUeHFYfZTurDjpIqSrMn_xRhy_TEfPHIfkdBBrRLZQwzkBmLDaNzsDMQfZlsAhvVVv
// Entry: 0x71ac3890 | Size: 844 bytes
// =========================================================================

void CQuuachJZoejeMocyrEilGLhtqdQUeHFYfZTurDjpIqSrMn_xRhy_TEfPHIfkdBBrRLZQwzkBmLDaNzsDMQfZlsAhvVVv
               (uint param_1,float param_2,float param_3,int param_4,uint param_5,float *param_6,
               int param_7,float *param_8,uint param_9,undefined1 *param_10,float *param_11,
               int param_12,int param_13,int param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_12 == 0) {
    if (param_7 == 0) {
      return;
    }
  }
  else {
    if (0 < param_14 * 4) {
      imp___aeabi_memclr4(param_13);
    }
    if (param_7 == 0) {
      return;
    }
    if (param_12 != 0) {
      fVar9 = 0.0;
      iVar8 = 0;
      do {
        fVar10 = fVar9;
        fVar11 = fVar9;
        if (param_9 != 0) {
          pfVar4 = param_8;
          uVar2 = 0;
          uVar7 = param_1;
          do {
            fVar12 = *(float *)(param_4 + uVar7 * 4);
            uVar3 = 0;
            if (uVar7 < param_5 - 1) {
              uVar3 = uVar7 + 1;
            }
            uVar6 = uVar2 + 1;
            fVar11 = fVar11 + *pfVar4 * fVar12;
            if ((uVar6 & 3) == 0) {
              pfVar5 = (float *)(param_13 + (uVar2 & 0xfffffffc));
              *pfVar5 = *pfVar5 + (param_6[iVar8] - fVar11) * (param_6[iVar8] - fVar11);
            }
            fVar10 = fVar10 + fVar12 * fVar12;
            pfVar4 = pfVar4 + 1;
            uVar2 = uVar6;
            uVar7 = uVar3;
          } while (param_9 != uVar6);
        }
        fVar12 = param_6[iVar8];
        fVar11 = fVar12 - fVar11;
        *param_11 = *param_11 + fVar11 * fVar11;
        if ((param_2 < fVar10) && (ABS(fVar12) < 32000.0)) {
          if (param_9 != 0) {
            uVar2 = param_1;
            pfVar4 = param_8;
            uVar7 = param_9;
            do {
              iVar1 = uVar2 * 4;
              uVar3 = 0;
              if (uVar2 < param_5 - 1) {
                uVar3 = uVar2 + 1;
              }
              uVar2 = uVar3;
              uVar7 = uVar7 - 1;
              *pfVar4 = *pfVar4 + ((fVar11 * param_3) / fVar10) * *(float *)(param_4 + iVar1);
              pfVar4 = pfVar4 + 1;
            } while (uVar7 != 0);
          }
          *param_10 = 1;
        }
        iVar8 = iVar8 + 1;
        if (param_1 == 0) {
          param_1 = param_5;
        }
        param_1 = param_1 - 1;
      } while (iVar8 != param_7);
      return;
    }
  }
  if (param_9 == 0) {
    fVar9 = *param_11;
    if (param_2 < 0.0) {
      do {
        fVar10 = *param_6;
        param_6 = param_6 + 1;
        fVar9 = fVar9 + fVar10 * fVar10;
        *param_11 = fVar9;
        if (ABS(fVar10) < 32000.0) {
          *param_10 = 1;
        }
        param_7 = param_7 + -1;
      } while (param_7 != 0);
    }
    else {
      do {
        fVar10 = *param_6;
        param_6 = param_6 + 1;
        param_7 = param_7 + -1;
        fVar9 = fVar9 + fVar10 * fVar10;
        *param_11 = fVar9;
      } while (param_7 != 0);
    }
  }
  else {
    fVar11 = 0.0;
    iVar8 = 0;
    pfVar4 = param_8;
    uVar7 = param_9;
    fVar9 = fVar11;
    fVar10 = fVar11;
    uVar2 = param_1;
    do {
      do {
        fVar12 = *(float *)(param_4 + param_1 * 4);
        uVar3 = 0;
        if (param_1 < param_5 - 1) {
          uVar3 = param_1 + 1;
        }
        uVar7 = uVar7 - 1;
        fVar10 = fVar10 + *pfVar4 * fVar12;
        fVar9 = fVar9 + fVar12 * fVar12;
        param_1 = uVar3;
        pfVar4 = pfVar4 + 1;
      } while (uVar7 != 0);
      fVar12 = param_6[iVar8];
      fVar10 = fVar12 - fVar10;
      *param_11 = *param_11 + fVar10 * fVar10;
      if ((param_2 < fVar9) && (ABS(fVar12) < 32000.0)) {
        uVar7 = uVar2;
        uVar3 = param_9;
        pfVar4 = param_8;
        do {
          uVar6 = 0;
          if (uVar7 < param_5 - 1) {
            uVar6 = uVar7 + 1;
          }
          uVar3 = uVar3 - 1;
          *pfVar4 = *pfVar4 + ((fVar10 * param_3) / fVar9) * *(float *)(param_4 + uVar7 * 4);
          pfVar4 = pfVar4 + 1;
          uVar7 = uVar6;
        } while (uVar3 != 0);
        *param_10 = 1;
      }
      iVar8 = iVar8 + 1;
      if (uVar2 == 0) {
        uVar2 = param_5;
      }
      param_1 = uVar2 - 1;
      pfVar4 = param_8;
      uVar7 = param_9;
      fVar9 = fVar11;
      fVar10 = fVar11;
      uVar2 = param_1;
    } while (iVar8 != param_7);
  }
  return;
}


// =========================================================================
// Function: TOLzSrIwFtZS_xixky_ghRviKbldMWAqmVEqWenXwnwQNSdSTjChWrNmCxhCsCZw
// Entry: 0x71ac3be4 | Size: 224 bytes
// =========================================================================

uint TOLzSrIwFtZS_xixky_ghRviKbldMWAqmVEqWenXwnwQNSdSTjChWrNmCxhCsCZw(float *param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 < 2) {
    return 0;
  }
  param_2 = param_2 - 1;
  fVar5 = *param_1 * *param_1;
  fVar7 = param_1[1] * param_1[1];
  if (param_2 < 3) {
    uVar4 = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    uVar4 = 0;
    uVar3 = 2;
    fVar6 = fVar5;
    fVar8 = fVar7;
    pfVar1 = param_1;
    do {
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3] * pfVar1[3];
      fVar9 = fVar9 * fVar9;
      fVar7 = fVar8;
      if (fVar8 < fVar10) {
        fVar7 = fVar10;
      }
      fVar5 = fVar6;
      if (fVar6 < fVar9) {
        fVar5 = fVar9;
      }
      if (fVar8 < fVar10) {
        uVar2 = uVar3 + 1;
      }
      if (fVar6 < fVar9) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 + 2;
      fVar6 = fVar5;
      fVar8 = fVar7;
      pfVar1 = pfVar1 + 2;
    } while (uVar3 < param_2);
  }
  if (fVar7 <= fVar5) {
    uVar2 = uVar4;
    fVar7 = fVar5;
  }
  if (fVar7 < param_1[param_2] * param_1[param_2]) {
    uVar2 = param_2;
  }
  return uVar2;
}


// =========================================================================
// Function: DYjdWOsLNkQD_OnuFFHfVxmMfQVXMDCLLlXstkovZtmKlGOKIwDGTQXbyGZtptZaVwgQgyYloOTTTUc
// Entry: 0x71ac3cc4 | Size: 1028 bytes
// =========================================================================

undefined4 *
DYjdWOsLNkQD_OnuFFHfVxmMfQVXMDCLLlXstkovZtmKlGOKIwDGTQXbyGZtptZaVwgQgyYloOTTTUc
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5
          ,uint param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11,int param_12)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *unaff_r9;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar9 = (int)param_5 * param_4;
  param_1[3] = param_7 * param_4;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  if (uVar9 != 0) {
    if (uVar9 < 0x40000000) {
      iStack_30 = thunk_MwhHq(uVar9 * 4);
      iVar10 = iStack_30 + uVar9 * 4;
      iStack_28 = iVar10;
      imp___aeabi_memclr4(iStack_30,uVar9 * 4);
      iStack_2c = iVar10;
      goto LAB_71ac3d30;
    }
    FUN_71a0103c(&iStack_30);
LAB_71ac4048:
    FUN_71ac56b0(unaff_r9);
    goto LAB_71ac4050;
  }
LAB_71ac3d30:
  FUN_71a7706c(param_1 + 4,param_6,&iStack_30);
  if (iStack_30 != 0) {
    iStack_2c = iStack_30;
    thunk_qNQrlu();
  }
  unaff_r9 = param_1 + 0x16;
  *unaff_r9 = 0;
  param_1[0x15] = 0xffffffff;
  puStack_40 = param_1 + 7;
  *puStack_40 = 0;
  param_1[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[10] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0xb] = 0;
  param_1[0xc] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0xd] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0xe] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((int)param_1 + 0x39) = 0;
  if (param_6 != 0) {
    if (0x3fffffff < param_6) goto LAB_71ac4048;
    iVar10 = thunk_MwhHq(param_6 << 2);
    iVar12 = iVar10 + param_6 * 4;
    param_1[0x18] = iVar12;
    param_1[0x16] = iVar10;
    imp___aeabi_memclr4(iVar10,param_6 << 2);
    param_1[0x17] = iVar12;
  }
  *(char *)(param_1 + 0x1e) = (char)param_12;
  param_1[0x1a] = param_8;
  param_1[0x1b] = param_9;
  param_1[0x1c] = param_10;
  param_1[0x1d] = param_11;
  param_1[0x19] = 0;
  if (param_12 == 0) {
    return param_1;
  }
  uVar9 = param_1[2] * (int)param_5;
  puStack_34 = (undefined4 *)0x0;
  puStack_38 = (undefined4 *)0x0;
  puStack_3c = (undefined4 *)0x0;
  if (uVar9 >> 2 != 0) {
    puStack_3c = (undefined4 *)thunk_MwhHq(uVar9 & 0xfffffffc);
    puStack_34 = puStack_3c + (uVar9 >> 2);
    puVar2 = puStack_3c;
    if (0xb < uVar9 - 4) {
      auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar1._0_8_ = 0x3f8000003f800000;
      auVar1 = auVar1 << 0x40 | auVar1;
      uVar6 = (uVar9 - 4 >> 2) + 1;
      uVar7 = uVar6 & 0xfffffffc;
      uVar9 = uVar7;
      do {
        *puVar2 = *(undefined4 *)auVar1;
        puVar2[1] = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
        puVar2[2] = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
        puVar2[3] = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
        puVar2 = puVar2 + 4;
        uVar9 = uVar9 - 4;
      } while (uVar9 != 0);
      puVar2 = puStack_3c + uVar7;
      if (uVar6 == uVar7) goto LAB_71ac3e98;
    }
    do {
      puVar5 = puVar2 + 1;
      *puVar2 = 0x3f800000;
      puVar2 = puVar5;
    } while (puVar5 != puStack_34);
  }
LAB_71ac3e98:
  puStack_38 = puStack_34;
  FUN_71a7706c(&iStack_30,param_6,&puStack_3c);
  piVar8 = (int *)*puStack_40;
  if (piVar8 != (int *)0x0) {
    piVar4 = (int *)param_1[8];
    piVar3 = piVar8;
    if (piVar4 != piVar8) {
      do {
        piVar3 = piVar4 + -3;
        if (*piVar3 != 0) {
          piVar4[-2] = *piVar3;
          thunk_qNQrlu();
        }
        piVar4 = piVar3;
      } while (piVar3 != piVar8);
      piVar3 = (int *)*puStack_40;
    }
    param_1[8] = piVar8;
    thunk_qNQrlu(piVar3);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  iVar10 = iStack_2c;
  iVar12 = 0;
  iStack_2c = 0;
  param_1[7] = iStack_30;
  param_1[8] = iVar10;
  param_1[9] = iStack_28;
  iStack_28 = 0;
  iStack_30 = 0;
  if (puStack_3c != (undefined4 *)0x0) {
    puStack_38 = puStack_3c;
    thunk_qNQrlu();
  }
  iVar10 = 0;
  uVar9 = param_1[2] * (int)param_5;
  if (uVar9 >> 2 != 0) {
    iVar10 = thunk_MwhHq(uVar9 & 0xfffffffc);
    imp___aeabi_memclr4(iVar10,uVar9 & 0xfffffffc);
    iVar12 = iVar10 + (uVar9 >> 2) * 4;
  }
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    thunk_qNQrlu();
    uVar9 = param_1[2] * (int)param_5;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  param_1[10] = iVar10;
  param_1[0xb] = iVar12;
  iVar10 = 0;
  param_1[0xc] = iVar12;
  iVar11 = 0;
  iVar12 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  if (uVar9 != 0) {
    param_5 = param_1 + 4;
    if (0x3fffffff < uVar9) {
LAB_71ac4050:
      FUN_71a0103c(&iStack_30);
      if (*unaff_r9 == 0) {
        iVar10 = param_1[0xd];
      }
      else {
        param_1[0x17] = *unaff_r9;
        thunk_qNQrlu();
        iVar10 = param_1[0xd];
      }
      if (iVar10 == 0) {
        iVar10 = param_1[10];
      }
      else {
        param_1[0xe] = iVar10;
        thunk_qNQrlu();
        iVar10 = param_1[10];
      }
      if (iVar10 != 0) {
        param_1[0xb] = iVar10;
        thunk_qNQrlu();
      }
      FUN_71aaf264(puStack_40);
      FUN_71aaf264(param_5);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar10 = uVar9 * 4;
    iVar12 = thunk_MwhHq(iVar10);
    imp___aeabi_memclr4(iVar12,iVar10);
    iVar10 = iVar12 + iVar10;
    iVar11 = iVar12 + uVar9 * 4;
  }
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    thunk_qNQrlu();
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[0xd] = iVar12;
  param_1[0xe] = iVar10;
  param_1[0xf] = iVar11;
  return param_1;
}


// =========================================================================
// Function: zlWBfdztXYCtkjNrUHiapTpmqaxwn
// Entry: 0x71ac4120 | Size: 248 bytes
// =========================================================================

int zlWBfdztXYCtkjNrUHiapTpmqaxwn(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    thunk_qNQrlu();
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x20);
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
      piVar1 = *(int **)(param_1 + 0x1c);
    }
    *(int **)(param_1 + 0x20) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x14);
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
      piVar1 = *(int **)(param_1 + 0x10);
    }
    *(int **)(param_1 + 0x14) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB
// Entry: 0x71ac4218 | Size: 264 bytes
// =========================================================================

void gcEScPqeHwWShxDtcfRdhBGuHkNkRimCB(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  
  piVar10 = *(int **)(param_1 + 0x14);
  for (piVar9 = *(int **)(param_1 + 0x10); piVar9 != piVar10; piVar9 = piVar9 + 3) {
    if (0 < piVar9[1] - *piVar9) {
      imp___aeabi_memclr4();
    }
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (param_2 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    if (puVar2 != puVar3) {
      auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
      auVar1._0_8_ = 0x3f8000003f800000;
      auVar1 = auVar1 << 0x40 | auVar1;
      do {
        puVar7 = (undefined4 *)*puVar2;
        uVar6 = puVar2[1] - (int)puVar7 >> 2;
        if (0 < (int)uVar6) {
          if (3 < uVar6) {
            uVar4 = uVar6 & 0x7ffffffc;
            puVar5 = puVar7 + uVar4;
            uVar8 = uVar4;
            do {
              *puVar7 = *(undefined4 *)auVar1;
              puVar7[1] = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
              puVar7[2] = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
              puVar7[3] = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
              puVar7 = puVar7 + 4;
              uVar8 = uVar8 - 4;
            } while (uVar8 != 0);
            bVar11 = uVar6 == uVar4;
            puVar7 = puVar5;
            uVar6 = uVar6 & 3;
            if (bVar11) goto LAB_71ac4298;
          }
          *puVar7 = 0x3f800000;
          if ((1 < uVar6) && (puVar7[1] = 0x3f800000, uVar6 - 3 < 0xfffffffe)) {
            puVar7[2] = 0x3f800000;
          }
        }
LAB_71ac4298:
        puVar2 = puVar2 + 3;
      } while (puVar2 != puVar3);
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


// =========================================================================
// Function: uXCbstDKZcSacXPeUiwFZonOvEcWNPmMDuEGKLJtmHIEooxPcbAXgkaHBxRLZJDRXPUBVFTiiZGrpHDDgzWaeITzPWbIK
// Entry: 0x71ac4320 | Size: 1420 bytes
// =========================================================================

void uXCbstDKZcSacXPeUiwFZonOvEcWNPmMDuEGKLJtmHIEooxPcbAXgkaHBxRLZJDRXPUBVFTiiZGrpHDDgzWaeITzPWbIK
               (int param_1,int param_2,float *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  undefined4 extraout_r1;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  uint in_fpscr;
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
  undefined4 uVar38;
  uint uStack_84;
  char cStack_4d;
  float fStack_4c;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar21 = 0x6c;
  if (param_5 != 0) {
    iVar21 = 0x70;
  }
  fVar28 = *(float *)(param_1 + 0x68);
  iVar2 = *piVar1;
  iVar6 = piVar1[1];
  uVar38 = *(undefined4 *)(param_1 + iVar21);
  fVar37 = 0.0;
  pfVar10 = param_3;
  for (iVar21 = param_4; iVar21 != 0; iVar21 = iVar21 + -1) {
    fVar31 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    fVar37 = fVar37 + fVar31 * fVar31;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  uVar22 = *(int *)(param_1 + 0x14) - (int)piVar1;
  if (0 < (int)uVar22) {
    iVar21 = 0;
    uVar26 = 0;
    uVar19 = 0;
    fVar31 = (float)VectorUnsignedToFloat(iVar6 - iVar2 >> 2,(byte)(in_fpscr >> 0x16) & 3);
    bVar27 = true;
    uVar3 = 1;
    if (1 < uVar22 / 0xc) {
      uVar3 = uVar22 / 0xc;
    }
    if (param_4 == 0) {
      param_3 = (float *)0x0;
    }
    uVar11 = 0;
    uStack_84 = 0xffffffff;
    uVar22 = 0;
    fVar34 = fVar37;
    do {
      fStack_4c = 0.0;
      iVar12 = *(int *)(param_2 + 8);
      iVar25 = *(int *)(param_2 + 4);
      uVar13 = *(uint *)(param_1 + 0x54);
      iVar2 = iVar12 - iVar25 >> 2;
      iVar16 = *(int *)(param_1 + 0x28);
      iVar17 = *(int *)(param_1 + 0x2c);
      FUN_71ba33fc(iVar21 + *(int *)(param_2 + 0x14) + *(int *)(param_1 + 8) + -1,iVar2);
      iVar7 = piVar1[uVar26 * 3];
      cStack_4d = '\0';
      iVar6 = 0;
      if (iVar17 != iVar16) {
        iVar6 = iVar16;
      }
      iVar23 = (piVar1 + uVar26 * 3)[1];
      iVar18 = 0;
      if (iVar23 != iVar7) {
        iVar18 = iVar7;
      }
      iVar14 = 0;
      if (iVar12 != iVar25) {
        iVar14 = iVar25;
      }
      thunk_CQuuachJZoejeMocyrEilGLhtqdQUeHFYfZTurDjpIqSrMn_xRhy_TEfPHIfkdBBrRLZQwzkBmLDaNzsDMQfZlsAhvVVv
                (extraout_r1,fVar28 * fVar28 * fVar31,uVar38,iVar14,iVar2,param_3,param_4,iVar18,
                 iVar23 - iVar7 >> 2,&cStack_4d,&fStack_4c,
                 *(byte *)(param_1 + 0x78) & uVar26 == uVar13,iVar6,iVar17 - iVar16 >> 2);
      piVar1 = *(int **)(param_1 + 0x10);
      pfVar8 = (float *)piVar1[uVar26 * 3];
      pfVar4 = (float *)(piVar1 + uVar26 * 3)[1];
      pfVar10 = (float *)0x0;
      if (pfVar4 != pfVar8) {
        pfVar10 = pfVar8;
      }
      uVar9 = 0;
      uVar13 = (int)pfVar4 - (int)pfVar8 >> 2;
      if (uVar13 < 2) {
LAB_71ac4438:
        uVar9 = uVar9 + iVar21;
      }
      else {
        uVar15 = uVar13 - 1;
        fVar29 = *pfVar10 * *pfVar10;
        fVar32 = pfVar10[1] * pfVar10[1];
        if (uVar15 < 3) {
          uVar20 = 0;
          uVar9 = 1;
        }
        else {
          uVar9 = 1;
          uVar20 = 0;
          uVar24 = 2;
          fVar30 = fVar29;
          fVar33 = fVar32;
          pfVar4 = pfVar10;
          do {
            fVar35 = pfVar4[2];
            fVar36 = pfVar4[3] * pfVar4[3];
            fVar35 = fVar35 * fVar35;
            fVar32 = fVar33;
            if (fVar33 < fVar36) {
              fVar32 = fVar36;
            }
            fVar29 = fVar30;
            if (fVar30 < fVar35) {
              fVar29 = fVar35;
            }
            if (fVar33 < fVar36) {
              uVar9 = uVar24 + 1;
            }
            if (fVar30 < fVar35) {
              uVar20 = uVar24;
            }
            uVar24 = uVar24 + 2;
            fVar30 = fVar29;
            fVar33 = fVar32;
            pfVar4 = pfVar4 + 2;
          } while (uVar24 < uVar15);
        }
        if (fVar32 <= fVar29) {
          uVar9 = uVar20;
          fVar32 = fVar29;
        }
        if (fVar32 < pfVar10[uVar15] * pfVar10[uVar15]) {
          uVar9 = uVar15;
        }
        if ((uVar9 < 3) || (uVar13 - 10 <= uVar9)) goto LAB_71ac4438;
        uVar9 = uVar9 + iVar21;
        if (((cStack_4d != '\0') && (fStack_4c < fVar37 * *(float *)(param_1 + 0x74))) &&
           (fStack_4c < fVar34)) {
          fVar34 = fStack_4c;
          if ((bVar27) || ((uVar19 | uVar22 & 0xff) != uVar9)) {
            *(uint *)(param_1 + 0x4c) = uVar9;
            *(undefined1 *)(param_1 + 0x50) = 1;
            uStack_84 = uVar26;
          }
          else {
            *(undefined1 *)(param_1 + 0x50) = uVar11;
            *(uint *)(param_1 + 0x4c) = uVar9;
            uStack_84 = uVar26 - 1;
          }
        }
      }
      uVar26 = uVar26 + 1;
      uVar19 = uVar9 & 0xffffff00;
      bVar27 = false;
      iVar21 = *(int *)(param_1 + 0xc) + iVar21;
      uVar11 = 1;
      uVar22 = uVar9;
    } while (uVar26 != uVar3);
    if (uStack_84 != 0xffffffff) {
      if (*(char *)(param_1 + 0x50) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_71a914c4();
      }
      cVar5 = *(char *)(param_1 + 0x48);
      iVar21 = *(int *)(param_1 + 0x4c);
      bVar27 = cVar5 == '\0';
      if (bVar27) {
        cVar5 = '\x01';
      }
      if (bVar27) {
        *(char *)(param_1 + 0x48) = cVar5;
      }
      *(int *)(param_1 + 0x40) = iVar21;
      *(int *)(param_1 + 0x44) = iVar21;
      if ((*(char *)(param_1 + 0x78) != '\0') && (*(uint *)(param_1 + 0x54) == uStack_84)) {
        if (fVar37 <= 1.0) {
          iVar2 = *(int *)(param_1 + 100);
        }
        else {
          pfVar8 = *(float **)(param_1 + 0x28);
          piVar1 = (int *)(*(int *)(param_1 + 0x1c) + uStack_84 * 0xc);
          pfVar4 = (float *)*piVar1;
          pfVar10 = (float *)0x0;
          if ((float *)piVar1[1] != pfVar4) {
            pfVar10 = pfVar4;
          }
          pfVar4 = (float *)0x0;
          if (*(float **)(param_1 + 0x2c) != pfVar8) {
            pfVar4 = pfVar8;
          }
          iVar2 = (int)*(float **)(param_1 + 0x2c) - (int)pfVar8;
          if (iVar2 != 0) {
            iVar2 = iVar2 >> 2;
            do {
              fVar31 = *pfVar4;
              pfVar4 = pfVar4 + 1;
              fVar34 = *pfVar10;
              fVar31 = (1.0 / fVar37) * fVar31;
              fVar28 = fVar34 + (fVar31 - fVar34) * 0.015;
              if (fVar31 < fVar34) {
                fVar28 = fVar31;
              }
              iVar2 = iVar2 + -1;
              *pfVar10 = fVar28;
              pfVar10 = pfVar10 + 1;
            } while (iVar2 != 0);
          }
          iVar2 = *(int *)(param_1 + 100) + 1;
          *(int *)(param_1 + 100) = iVar2;
        }
        if (0x31 < iVar2) {
          uVar19 = iVar21 - *(int *)(param_1 + 0xc) * uStack_84;
          piVar1 = (int *)(*(int *)(param_1 + 0x1c) + uStack_84 * 0xc);
          iVar2 = *piVar1;
          iVar21 = piVar1[1];
          uVar22 = iVar21 - iVar2 >> 2;
          uVar3 = uVar19 >> 2;
          if (uVar22 < uVar19 >> 2) {
            uVar3 = uVar22;
          }
          iVar6 = 0;
          if (iVar21 != iVar2) {
            iVar6 = iVar2;
          }
          if ((uVar3 != 0) && (*(float *)(iVar6 + uVar3 * 4 + -4) <= 0.5)) {
            uVar22 = uVar3 << 2 | 3;
            do {
              uVar3 = uVar3 - 1;
              if (uVar3 == 0) {
                uVar19 = 3;
                break;
              }
              uVar19 = uVar22 - 4;
              iVar21 = iVar6 + uVar22;
              uVar22 = uVar19;
            } while (*(float *)(iVar21 + -0xb) <= 0.5);
          }
          iVar21 = uVar19 + *(int *)(param_1 + 0xc) * uStack_84;
        }
        *(int *)(param_1 + 0x44) = iVar21;
      }
      *(uint *)(param_1 + 0x54) = uStack_84;
    }
  }
  return;
}


// =========================================================================
// Function: lRaowUogCPSHJFRPcOIkmzfiOpgvftfw
// Entry: 0x71ac48b4 | Size: 636 bytes
// =========================================================================

void lRaowUogCPSHJFRPcOIkmzfiOpgvftfw(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte abStack_3c [8];
  undefined4 uStack_34;
  ulonglong uStack_30;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
    uVar9 = 0;
    do {
      thunk_CzawVvgGUMDiCaJAyry_udhv(abStack_3c,uVar9);
      puVar5 = (ulonglong *)
               thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                         (abStack_3c,0,s_aec3_correlator__700715fa);
      uStack_28 = (undefined4)puVar5[1];
      uStack_30 = *puVar5;
      *(undefined4 *)puVar5 = 0;
      *(undefined4 *)((int)puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      pbVar6 = (byte *)thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                                 (&uStack_30,&DAT_700661f1);
      bVar1 = *pbVar6;
      uVar8 = *(undefined4 *)(pbVar6 + 8);
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
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      if ((abStack_3c[0] & 1) != 0) {
        thunk_qNQrlu(uStack_34);
      }
      thunk_CzawVvgGUMDiCaJAyry_udhv(&uStack_30,uVar9);
      pbVar6 = (byte *)thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                                 (&uStack_30,0,s_aec3_correlator_lag__7006eaa0);
      bVar2 = *pbVar6;
      uVar10 = *(undefined4 *)(pbVar6 + 8);
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
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      if (*(char *)(param_1 + 0x78) != '\0') {
        thunk_CzawVvgGUMDiCaJAyry_udhv(abStack_3c,uVar9);
        puVar5 = (ulonglong *)
                 thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                           (abStack_3c,0,s_aec3_correlator_error__70071dd6);
        uStack_28 = (undefined4)puVar5[1];
        uStack_30 = *puVar5;
        *(undefined4 *)puVar5 = 0;
        *(undefined4 *)((int)puVar5 + 4) = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        pbVar6 = (byte *)thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                                   (&uStack_30,&DAT_700661f1);
        bVar3 = *pbVar6;
        uVar7 = *(undefined4 *)(pbVar6 + 8);
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
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        if ((abStack_3c[0] & 1) != 0) {
          thunk_qNQrlu(uStack_34);
        }
        thunk_CzawVvgGUMDiCaJAyry_udhv(&uStack_30,uVar9);
        pbVar6 = (byte *)thunk_IqNXuzvug_UNs_nQpDWINeBvHEzWbHqywjwhxnPvUOpcsPzdSiKupWimgQsjbFdJUFjOsXnCiiLeFN
                                   (&uStack_30,0,s_aec3_correlator_pre_echo_lag__700668fc);
        bVar4 = *pbVar6;
        uVar11 = *(undefined4 *)(pbVar6 + 8);
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
        if ((uStack_30 & 1) != 0) {
          thunk_qNQrlu(uStack_28);
        }
        if ((bVar4 & 1) != 0) {
          thunk_qNQrlu(uVar11);
        }
        if ((bVar3 & 1) != 0) {
          thunk_qNQrlu(uVar7);
        }
      }
      if ((bVar2 & 1) != 0) {
        thunk_qNQrlu(uVar10);
      }
      if ((bVar1 & 1) != 0) {
        thunk_qNQrlu(uVar8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) * -0x55555555
                           ));
  }
  return;
}


// =========================================================================
// Function: bjAuGMYPoe_Sx_ZcsebP_almGViTkLjfbdZNwvoTrlaXeNijrpr
// Entry: 0x71ac4c24 | Size: 268 bytes
// =========================================================================

void bjAuGMYPoe_Sx_ZcsebP_almGViTkLjfbdZNwvoTrlaXeNijrpr
               (int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != iVar1) {
    iVar3 = 0;
    iVar5 = 0;
    uVar6 = 0;
    do {
      iVar4 = *(int *)(iVar1 + iVar3);
      iVar2 = ((int *)(iVar1 + iVar3))[1];
      iVar1 = thunk_MOkzAMFtkodcaEpqsRdrYmbSpqrIhHtcSESiSlTcLnLuYdZcGUekAKt();
      if (iVar1 == 0) {
        iVar1 = iVar5 * param_4 - param_3;
        iVar2 = (iVar5 + (iVar2 - iVar4 >> 2)) * param_4 - param_3;
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_7009689c,s_____webrtc_apm_src_webrtc_module_7006b5a1,0x18d0,
                   s_Filter_70070eca,uVar6,s___start__700625ab,
                   (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1c)) >> 4,s_ms__end__700668f1,
                   (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1c)) >> 4,&DAT_7006a134);
      }
      iVar1 = *(int *)(param_1 + 0x10);
      iVar3 = iVar3 + 0xc;
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(param_1 + 0xc) + iVar5;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x14) - iVar1 >> 2) * -0x55555555));
  }
  return;
}


// =========================================================================
// Function: MOkzAMFtkodcaEpqsRdrYmbSpqrIhHtcSESiSlTcLnLuYdZcGUekAKt
// Entry: 0x71ac5674 | Size: 8 bytes
// =========================================================================

void MOkzAMFtkodcaEpqsRdrYmbSpqrIhHtcSESiSlTcLnLuYdZcGUekAKt(void)

{
  thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(0);
  return;
}


// =========================================================================
// Function: FUN_71ac56b0
// Entry: 0x71ac56b0 | Size: 20 bytes
// =========================================================================

void FUN_71ac56b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FRQkeDBdzzDDpgcCCnuPbAhrTCxFVhiqibaXnfcdTOeJImcnVsmNZqdgUZhxARvpcAsJYDlYcKGpltBMsJmYVRjzicqJGPKV
// Entry: 0x71ac5718 | Size: 168 bytes
// =========================================================================

undefined4 *
FRQkeDBdzzDDpgcCCnuPbAhrTCxFVhiqibaXnfcdTOeJImcnVsmNZqdgUZhxARvpcAsJYDlYcKGpltBMsJmYVRjzicqJGPKV
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar3 = *(undefined4 *)(param_4 + 0x28);
  param_1[2] = *(undefined4 *)(param_4 + 0x24);
  param_1[3] = uVar3;
  uVar3 = FUN_71ba0484(*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 4));
  param_1[4] = uVar3;
  thunk_FrSqLhzFEW_UKVpugxipefDWlFZpcAAMMtJqOTiIXxDNIfHFmGtPltxlVNtRLSmiS(param_1 + 5,param_3);
  cVar1 = *(char *)(param_4 + 0x48);
  piVar4 = param_1 + 0x104;
  *piVar4 = 0;
  if (cVar1 != '\0') {
    iVar2 = thunk_MwhHq(0x404);
    thunk_FQPgOGQMA_hybOMnoxOMssOzhoIqSWRazTDGKGEzFnkgMkOKReuLRGkQmSORvWLrD
              (iVar2,param_3,*(undefined4 *)(param_4 + 4));
    iVar5 = *piVar4;
    *piVar4 = iVar2;
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x3ec) != 0) {
        *(int *)(iVar5 + 0x3f0) = *(int *)(iVar5 + 0x3ec);
        thunk_qNQrlu();
      }
      thunk_qNQrlu(iVar5);
    }
  }
  return param_1;
}


// =========================================================================
// Function: prqCeFJdLSQGMvtRZPrgfMjYbsMcFWkIgzjYTsYxXR
// Entry: 0x71ac57ec | Size: 88 bytes
// =========================================================================

int prqCeFJdLSQGMvtRZPrgfMjYbsMcFWkIgzjYTsYxXR(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x410);
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3ec) != 0) {
      *(int *)(iVar1 + 0x3f0) = *(int *)(iVar1 + 0x3ec);
      thunk_qNQrlu();
    }
    thunk_qNQrlu(iVar1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: xBmHYzuhErnbKBxffrkF_YIvz_slRjoLSPUKKAALSTlkrN
// Entry: 0x71ac5844 | Size: 128 bytes
// =========================================================================

void xBmHYzuhErnbKBxffrkF_YIvz_slRjoLSPUKKAALSTlkrN(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) {
    imp___aeabi_memclr4();
  }
  imp___aeabi_memclr4(param_1 + 0x20,0x3ec);
  iVar1 = *(int *)(param_1 + 0x410);
  if (iVar1 != 0) {
    if (0 < *(int *)(iVar1 + 0x3f0) - *(int *)(iVar1 + 0x3ec)) {
      imp___aeabi_memclr4();
    }
    imp___aeabi_memset4(iVar1 + 4,1000,0xff);
    *(undefined4 *)(iVar1 + 0x3f8) = 0;
    *(undefined4 *)(iVar1 + 0x3fc) = 0;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// =========================================================================
// Function: dqwtHeiExbvVXvZaqClJgoLWPgtndtWlBGtiFNeoJjQCVizYAcHSbucZDi_gLRjNqXVKW
// Entry: 0x71ac58c4 | Size: 48 bytes
// =========================================================================

void dqwtHeiExbvVXvZaqClJgoLWPgtndtWlBGtiFNeoJjQCVizYAcHSbucZDi_gLRjNqXVKW(int *param_1)

{
  if (0 < param_1[1] - *param_1) {
    imp___aeabi_memclr4();
  }
  imp___aeabi_memclr4(param_1 + 3,0x3ec);
  return;
}


// =========================================================================
// Function: gErzdwIIYqAqlfaJpTtG_NYBzUZfERWoVfNylVRWdxuQMdfqDVfdyjMuFEzWhPWtxDXU
// Entry: 0x71ac58f4 | Size: 68 bytes
// =========================================================================

void gErzdwIIYqAqlfaJpTtG_NYBzUZfERWoVfNylVRWdxuQMdfqDVfdyjMuFEzWhPWtxDXU(int param_1)

{
  if (0 < *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x3ec)) {
    imp___aeabi_memclr4();
  }
  imp___aeabi_memset4(param_1 + 4,1000,0xff);
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  return;
}


// =========================================================================
// Function: ocSiFfZiwpDydkgqmjjDIcefRdRFHDjzUthsXycTMRTxcVJUugCQqhdPuiBIxplVvdBOoQicVIJAGCkzehHqQhfKHTQBtNwRlYTCfNTkZx
// Entry: 0x71ac5938 | Size: 392 bytes
// =========================================================================

void ocSiFfZiwpDydkgqmjjDIcefRdRFHDjzUthsXycTMRTxcVJUugCQqhdPuiBIxplVvdBOoQicVIJAGCkzehHqQhfKHTQBtNwRlYTCfNTkZx
               (uint *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  if (((char)param_3[2] != '\0') &&
     ((*(int *)(param_2 + 0x410) == 0 ||
      (uVar3 = param_3[1] - *(int *)(param_2 + 0x10),
      thunk_zbgFnUCZUaHpoD_mmKeHdlFJADyNvLCzejQWExTrOchgVvIuECaXJFWIvGrszNDGezdMPSWN
                (*(int *)(param_2 + 0x410),uVar3 & ~((int)uVar3 >> 0x1f)), (char)param_3[2] != '\0')
      ))) {
    iVar5 = param_2 + 0x20;
    iVar9 = *(int *)(param_2 + 0x10);
    iVar11 = *param_3;
    iVar7 = *(int *)(iVar5 + *(int *)(param_2 + 0x408) * 4);
    piVar2 = *(int **)(param_2 + 0x14);
    piVar4 = *(int **)(param_2 + 0x18);
    piVar2[iVar7] = piVar2[iVar7] + -1;
    uVar3 = iVar11 - iVar9;
    *(uint *)(iVar5 + *(int *)(param_2 + 0x408) * 4) = uVar3 & ~((int)uVar3 >> 0x1f);
    iVar5 = *(int *)(iVar5 + *(int *)(param_2 + 0x408) * 4);
    piVar2[iVar5] = piVar2[iVar5] + 1;
    *(uint *)(param_2 + 0x408) = (*(int *)(param_2 + 0x408) + 1U) % 0xfa;
    piVar6 = piVar2;
    if ((piVar2 != piVar4) && (piVar2 + 1 != piVar4)) {
      iVar5 = *piVar2;
      piVar10 = piVar2 + 1;
      do {
        piVar8 = piVar10 + 1;
        iVar7 = *piVar10;
        if (iVar5 < iVar7) {
          piVar6 = piVar10;
        }
        if (iVar5 <= iVar7) {
          iVar5 = iVar7;
        }
        piVar10 = piVar8;
      } while (piVar8 != piVar4);
    }
    uVar3 = (int)piVar6 - (int)piVar2 >> 2;
    if (piVar2 == piVar4) {
      piVar6 = (int *)((int)piVar6 - (int)piVar2);
    }
    *(uint *)(param_2 + 0x40c) = uVar3;
    iVar5 = *piVar6;
    bVar1 = *(byte *)(param_2 + 4) | *(int *)(param_2 + 0xc) < iVar5;
    *(byte *)(param_2 + 4) = bVar1;
    if ((*(int *)(param_2 + 0xc) < iVar5) || (*(int *)(param_2 + 8) < iVar5 && bVar1 == 0)) {
      if (*(int *)(param_2 + 0x410) != 0) {
        uVar3 = *(uint *)(*(int *)(param_2 + 0x410) + 0x3fc);
      }
      *param_1 = (uint)bVar1;
      param_1[1] = uVar3;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// =========================================================================
// Function: TGWZpalPsCWPrJbGKwePVjTmhDOubZYnFWYhTucTgbWJTOtkRqixCJnEZaTaWYUBD_AQdTZ_TsFHHIHPpfdDkt
// Entry: 0x71ac5ac0 | Size: 4 bytes
// =========================================================================

void TGWZpalPsCWPrJbGKwePVjTmhDOubZYnFWYhTucTgbWJTOtkRqixCJnEZaTaWYUBD_AQdTZ_TsFHHIHPpfdDkt(void)

{
  return;
}


// =========================================================================
// Function: zbgFnUCZUaHpoD_mmKeHdlFJADyNvLCzejQWExTrOchgVvIuECaXJFWIvGrszNDGezdMPSWN
// Entry: 0x71ac5ac4 | Size: 1204 bytes
// =========================================================================

void zbgFnUCZUaHpoD_mmKeHdlFJADyNvLCzejQWExTrOchgVvIuECaXJFWIvGrszNDGezdMPSWN
               (uint *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  uint in_fpscr;
  float fVar30;
  float fVar31;
  float fVar32;
  
  piVar29 = (int *)param_1[0xfb];
  piVar23 = (int *)param_1[0xfc];
  uVar27 = *param_1;
  iVar24 = (int)piVar23 - (int)piVar29;
  uVar19 = param_1[0xfe];
  uVar16 = (iVar24 >> 2) - 1;
  if ((uint)(param_2 >> (uVar27 & 0xff)) < uVar16) {
    uVar16 = param_2 >> (uVar27 & 0xff);
  }
  uVar28 = param_1[uVar19 + 1];
  if (param_2 >> (uVar27 & 0xff) < 1) {
    uVar16 = 0;
  }
  if (uVar28 != 0xffffffff) {
    piVar29[uVar28] = piVar29[uVar28] + -1;
    uVar19 = param_1[0xfe];
  }
  param_1[uVar19 + 1] = uVar16;
  piVar29[param_1[param_1[0xfe] + 1]] = piVar29[param_1[param_1[0xfe] + 1]] + 1;
  param_1[0xfe] = (param_1[0xfe] + 1) % 0xfa;
  if ((int)param_1[0x100] < 500) {
    iVar20 = 0;
    param_1[0x100] = param_1[0x100] + 1;
    if (0x7c < iVar24) {
      fVar30 = -1.0;
      fVar31 = 1.0;
      piVar23 = piVar29;
      do {
        iVar25 = *piVar23;
        iVar2 = piVar23[5];
        iVar3 = piVar23[7];
        iVar4 = piVar23[9];
        iVar5 = piVar23[0xb];
        iVar6 = piVar23[0xd];
        iVar7 = piVar23[0xf];
        iVar8 = piVar23[0x11];
        iVar9 = piVar23[0x13];
        iVar10 = piVar23[0x15];
        iVar11 = piVar23[0x17];
        iVar12 = piVar23[0x19];
        iVar13 = piVar23[0x1b];
        iVar14 = piVar23[0x1e];
        iVar22 = piVar23[1];
        iVar21 = piVar23[2];
        piVar15 = piVar23 + 1;
        if (iVar22 <= iVar25) {
          piVar15 = piVar23;
        }
        if (iVar22 < iVar25) {
          iVar22 = iVar25;
        }
        if (iVar22 < iVar21) {
          piVar15 = piVar23 + 2;
        }
        iVar25 = piVar23[3];
        if (iVar22 <= iVar21) {
          iVar22 = iVar21;
        }
        iVar26 = piVar23[4];
        iVar21 = iVar22;
        if (iVar22 <= iVar25) {
          iVar21 = iVar25;
        }
        if (iVar22 < iVar25) {
          piVar15 = piVar23 + 3;
        }
        if (iVar21 < iVar26) {
          piVar15 = piVar23 + 4;
        }
        iVar22 = piVar23[6];
        if (iVar21 <= iVar26) {
          iVar21 = iVar26;
        }
        if (iVar21 < iVar2) {
          piVar15 = piVar23 + 5;
        }
        if (iVar21 <= iVar2) {
          iVar21 = iVar2;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 6;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[8];
        iVar24 = iVar24 + -0x80;
        if (iVar21 < iVar3) {
          piVar15 = piVar23 + 7;
        }
        if (iVar21 <= iVar3) {
          iVar21 = iVar3;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 8;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[10];
        if (iVar21 < iVar4) {
          piVar15 = piVar23 + 9;
        }
        if (iVar21 <= iVar4) {
          iVar21 = iVar4;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 10;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0xc];
        if (iVar21 < iVar5) {
          piVar15 = piVar23 + 0xb;
        }
        if (iVar21 <= iVar5) {
          iVar21 = iVar5;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0xc;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0xe];
        if (iVar21 < iVar6) {
          piVar15 = piVar23 + 0xd;
        }
        if (iVar21 <= iVar6) {
          iVar21 = iVar6;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0xe;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0x10];
        if (iVar21 < iVar7) {
          piVar15 = piVar23 + 0xf;
        }
        if (iVar21 <= iVar7) {
          iVar21 = iVar7;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0x10;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0x12];
        if (iVar21 < iVar8) {
          piVar15 = piVar23 + 0x11;
        }
        if (iVar21 <= iVar8) {
          iVar21 = iVar8;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0x12;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0x14];
        if (iVar21 < iVar9) {
          piVar15 = piVar23 + 0x13;
        }
        if (iVar21 <= iVar9) {
          iVar21 = iVar9;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0x14;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0x16];
        if (iVar21 < iVar10) {
          piVar15 = piVar23 + 0x15;
        }
        if (iVar21 <= iVar10) {
          iVar21 = iVar10;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0x16;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0x18];
        if (iVar21 < iVar11) {
          piVar15 = piVar23 + 0x17;
        }
        if (iVar21 <= iVar11) {
          iVar21 = iVar11;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0x18;
        }
        if (iVar21 <= iVar22) {
          iVar21 = iVar22;
        }
        iVar22 = piVar23[0x1a];
        if (iVar21 < iVar12) {
          piVar15 = piVar23 + 0x19;
        }
        if (iVar21 <= iVar12) {
          iVar21 = iVar12;
        }
        iVar2 = iVar21;
        if (iVar21 <= iVar22) {
          iVar2 = iVar22;
        }
        if (iVar21 < iVar22) {
          piVar15 = piVar23 + 0x1a;
        }
        iVar22 = iVar2;
        if (iVar2 <= iVar13) {
          iVar22 = iVar13;
        }
        if (iVar2 < iVar13) {
          piVar15 = piVar23 + 0x1b;
        }
        iVar3 = piVar23[0x1c];
        iVar4 = piVar23[0x1d];
        iVar2 = iVar22;
        if (iVar22 <= iVar3) {
          iVar2 = iVar3;
        }
        piVar17 = piVar23 + 0x1c;
        if (iVar3 <= iVar22) {
          piVar17 = piVar15;
        }
        if (iVar2 < iVar4) {
          piVar17 = piVar23 + 0x1d;
        }
        if (iVar2 <= iVar4) {
          iVar2 = iVar4;
        }
        iVar22 = iVar2;
        if (iVar2 <= iVar14) {
          iVar22 = iVar14;
        }
        if (iVar2 < iVar14) {
          piVar17 = piVar23 + 0x1e;
        }
        if (iVar22 < piVar23[0x1f]) {
          piVar17 = piVar23 + 0x1f;
        }
        fVar32 = (float)VectorSignedToFloat(*piVar17,(byte)(in_fpscr >> 0x16) & 3);
        fVar32 = fVar31 * fVar32;
        fVar31 = fVar31 * 0.7;
        uVar16 = in_fpscr & 0xfffffff | (uint)(fVar32 < fVar30) << 0x1f |
                 (uint)(fVar32 == fVar30) << 0x1e;
        in_fpscr = uVar16 | (uint)(NAN(fVar32) || NAN(fVar30)) << 0x1c;
        bVar1 = (byte)(uVar16 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          iVar20 = (int)piVar17 - (int)piVar29 >> 2;
          fVar30 = fVar32;
        }
        piVar23 = piVar23 + 0x20;
      } while (0x7c < iVar24);
    }
  }
  else {
    piVar15 = piVar29;
    if ((piVar29 != piVar23) && (piVar29 + 1 != piVar23)) {
      iVar24 = *piVar29;
      piVar17 = piVar29 + 1;
      do {
        piVar18 = piVar17 + 1;
        iVar20 = *piVar17;
        if (iVar24 < iVar20) {
          piVar15 = piVar17;
        }
        if (iVar24 <= iVar20) {
          iVar24 = iVar20;
        }
        piVar17 = piVar18;
      } while (piVar18 != piVar23);
    }
    iVar20 = (int)piVar15 - (int)piVar29 >> 2;
  }
  param_1[0xff] = iVar20 << (*param_1 & 0xff);
  return;
}


// =========================================================================
// Function: zQnugSRfEOIEbKjS_vazcpNsFrDF_qFMrKbtoKemoYodBrWaAvbyQAixkYYbVXfJlaR_GZmwg
// Entry: 0x71ac5f7c | Size: 184 bytes
// =========================================================================

void zQnugSRfEOIEbKjS_vazcpNsFrDF_qFMrKbtoKemoYodBrWaAvbyQAixkYYbVXfJlaR_GZmwg
               (undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)*param_1;
  piVar7 = (int *)param_1[1];
  piVar6[param_1[param_1[0xfd] + 3]] = piVar6[param_1[param_1[0xfd] + 3]] + -1;
  param_1[param_1[0xfd] + 3] = param_2;
  piVar6[param_1[param_1[0xfd] + 3]] = piVar6[param_1[param_1[0xfd] + 3]] + 1;
  param_1[0xfd] = (param_1[0xfd] + 1) % 0xfa;
  piVar1 = piVar6;
  if ((piVar6 != piVar7) && (piVar6 + 1 != piVar7)) {
    iVar4 = *piVar6;
    piVar5 = piVar6 + 1;
    do {
      piVar2 = piVar5 + 1;
      iVar3 = *piVar5;
      if (iVar4 < iVar3) {
        piVar1 = piVar5;
      }
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      piVar5 = piVar2;
    } while (piVar2 != piVar7);
  }
  param_1[0xfe] = (int)piVar1 - (int)piVar6 >> 2;
  return;
}


// =========================================================================
// Function: FrSqLhzFEW_UKVpugxipefDWlFZpcAAMMtJqOTiIXxDNIfHFmGtPltxlVNtRLSmiS
// Entry: 0x71ac6034 | Size: 124 bytes
// =========================================================================

int * FrSqLhzFEW_UKVpugxipefDWlFZpcAAMMtJqOTiIXxDNIfHFmGtPltxlVNtRLSmiS(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 + 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != -1) {
    if (0x3fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_71a0f1b4(param_1);
    }
    iVar1 = thunk_MwhHq(uVar2 * 4);
    iVar3 = iVar1 + uVar2 * 4;
    param_1[2] = iVar3;
    *param_1 = iVar1;
    imp___aeabi_memclr4(iVar1,param_2 * 4 + 4);
    param_1[1] = iVar3;
  }
  param_1[0xfe] = -1;
  param_1[0xfd] = 0;
  imp___aeabi_memclr4(param_1 + 3,1000);
  return param_1;
}


// =========================================================================
// Function: FQPgOGQMA_hybOMnoxOMssOzhoIqSWRazTDGKGEzFnkgMkOKReuLRGkQmSORvWLrD
// Entry: 0x71ac60c8 | Size: 200 bytes
// =========================================================================

int * FQPgOGQMA_hybOMnoxOMssOzhoIqSWRazTDGKGEzFnkgMkOKReuLRGkQmSORvWLrD
                (int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_3 >> 1;
  iVar4 = 0;
  uVar1 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar1 = uVar1 + 1;
      uVar3 = uVar3 >> 1;
    } while (uVar3 != 0);
  }
  param_1[0xfb] = 0;
  iVar2 = 6 - uVar1;
  if (6 < uVar1) {
    iVar2 = 0;
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *param_1 = iVar2;
  uVar3 = (uint)((param_2 + 1) * param_3) >> 6;
  if (uVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = thunk_MwhHq(uVar3 << 2);
    iVar4 = iVar2 + uVar3 * 4;
    param_1[0xfd] = iVar4;
    param_1[0xfb] = iVar2;
    imp___aeabi_memclr4(iVar2,uVar3 << 2);
    param_1[0xfc] = iVar4;
  }
  param_1[0x100] = 0;
  if (0 < iVar4 - iVar2) {
    imp___aeabi_memclr4(iVar2);
  }
  imp___aeabi_memset4(param_1 + 1,1000,0xff);
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  return param_1;
}


// =========================================================================
// Function: VvtEvjaTHwqgIkStrray_PUeJGaQWhgo__
// Entry: 0x71ac65bc | Size: 24 bytes
// =========================================================================

void VvtEvjaTHwqgIkStrray_PUeJGaQWhgo__(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  return;
}


// =========================================================================
// Function: DbQfvARxvxtCexoIQKZdLZCfIH_ojsEGoU
// Entry: 0x71ac65d4 | Size: 4 bytes
// =========================================================================

void DbQfvARxvxtCexoIQKZdLZCfIH_ojsEGoU(void)

{
  return;
}


// =========================================================================
// Function: NyYndffoEBTZLYTouWBmRSpACTLAxLSqActNbjL
// Entry: 0x71ac65d8 | Size: 268 bytes
// =========================================================================

void NyYndffoEBTZLYTouWBmRSpACTLAxLSqActNbjL(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = *param_1;
  if (iVar2 == param_2) {
    iVar2 = param_1[4];
    param_1[4] = iVar2 + 1U;
    if (iVar2 + 1U < 0x1d4d) {
      return;
    }
    param_1[3] = 0;
    return;
  }
  iVar6 = param_1[1];
  iVar4 = iVar2 - param_2;
  iVar8 = param_1[2] - param_2;
  uVar5 = iVar6 - param_2;
  param_1[4] = 0;
  if (iVar4 == -1 && uVar5 == 0xfffffffe) {
    uVar7 = 1;
    bVar9 = iVar8 == -3;
LAB_71ac6684:
    uVar3 = (uint)bVar9;
    bVar9 = uVar3 == 0;
    uVar1 = uVar5;
    if (bVar9) {
      uVar1 = (uint)(iVar8 == 3);
      uVar3 = (uint)(iVar4 == 2 && uVar5 == 1);
    }
    if (bVar9 && (uVar3 & uVar1) == 0) {
      if ((uVar7 | uVar3) != 1) goto LAB_71ac66b8;
      goto LAB_71ac66d0;
    }
LAB_71ac66b0:
    iVar4 = 2;
  }
  else {
    bVar9 = iVar4 == -2 && uVar5 == 0xffffffff;
    uVar7 = (uint)bVar9;
    bVar9 = bVar9 && iVar8 == -3;
    if (iVar4 != 1 || uVar5 != 2) goto LAB_71ac6684;
    if (iVar8 == 3) goto LAB_71ac66b0;
LAB_71ac66d0:
    if (param_1[3] != 0) goto LAB_71ac66b8;
    iVar4 = 1;
  }
  param_1[3] = iVar4;
LAB_71ac66b8:
  *param_1 = param_2;
  param_1[1] = iVar2;
  param_1[2] = iVar6;
  return;
}


// =========================================================================
// Function: xrBxGjWjvDGzfdgEsEIsSfUmkyHhjhKvDHIQqZotWGLG
// Entry: 0x71ac66fc | Size: 32 bytes
// =========================================================================

void xrBxGjWjvDGzfdgEsEIsSfUmkyHhjhKvDHIQqZotWGLG(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  return;
}


// =========================================================================
// Function: tfsohpdgPEonQNMGGbDAVXMyDrFIXZsuwiXXfVxWvFZwiCVjtAFTNyWmaCikorZSgc_vFJuLgnB_zeFvniDurPHTyPysLHzyZrVFPNjL
// Entry: 0x71ac671c | Size: 700 bytes
// =========================================================================

void tfsohpdgPEonQNMGGbDAVXMyDrFIXZsuwiXXfVxWvFZwiCVjtAFTNyWmaCikorZSgc_vFJuLgnB_zeFvniDurPHTyPysLHzyZrVFPNjL
               (int *param_1,uint param_2,char param_3,int param_4,char param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = param_1[3];
  param_1[3] = iVar2 + 1;
  if ((char)param_1[5] == '\0') {
    if (param_3 == '\0') {
      iVar3 = 0;
      if (*param_1 != 0) goto LAB_71ac6790;
    }
    else {
      param_1[1] = param_1[1] + 1;
      iVar3 = (param_2 >> 6) + 2;
      if (iVar3 != *param_1) {
LAB_71ac6790:
        *param_1 = iVar3;
        param_1[2] = param_1[2] + 1;
      }
    }
  }
  else {
    iVar3 = param_1[4];
    param_1[4] = iVar3 + 1;
    if (iVar3 + 1 == 0x4e2) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  if (iVar2 + 1 != 0x9c4) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = 0x7c;
  if (*param_1 >> 1 < 0x7c) {
    iVar2 = *param_1 >> 1;
  }
  iVar3 = DAT_7120488c;
  if (DAT_7120488c == 0) {
    iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_EchoP_7007160b,0x28,0,0x7c,0x7d);
    if (DAT_7120488c == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar6 = (bool)hasExclusiveAccess(0x7120488c);
        DAT_7120488c = iVar3;
      } while (!bVar6);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) goto LAB_71ac683c;
  }
  else {
LAB_71ac683c:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar3,iVar2);
  }
  uVar4 = 0x7c;
  if (param_4 + 2U < 0xf8) {
    uVar4 = param_4 + 2U >> 1;
  }
  DataMemoryBarrier(0xb);
  if (param_5 == '\0') {
    uVar4 = 0;
  }
  iVar2 = DAT_71204890;
  if (DAT_71204890 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_EchoCanceller_Buffe_700706be,0x26,0,0x7c,0x7d);
    if (DAT_71204890 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar6 = (bool)hasExclusiveAccess(0x71204890);
        DAT_71204890 = iVar2;
      } while (!bVar6);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_71ac68d4;
  }
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,uVar4);
LAB_71ac68d4:
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
    iVar3 = param_1[3] >> 1;
    bVar7 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    bVar6 = iVar2 == iVar3;
    if (iVar2 <= iVar3) {
      uVar5 = 3;
      bVar7 = SBORROW4(iVar2,100);
      iVar1 = iVar2 + -100;
      bVar6 = iVar2 == 100;
    }
    if ((bVar6 || iVar1 < 0 != bVar7) && (uVar5 = 1, 10 < iVar2)) {
      uVar5 = 2;
    }
  }
  iVar2 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                    (s_WebRTC_Audio_EchoCanceller_Relia_7006ccd1,0x31,5);
  if (iVar2 != 0) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,uVar5);
  }
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
    bVar7 = SBORROW4(iVar2,10);
    iVar3 = iVar2 + -10;
    bVar6 = iVar2 == 10;
    if (iVar2 < 0xb) {
      uVar5 = 3;
      bVar7 = SBORROW4(iVar2,5);
      iVar3 = iVar2 + -5;
      bVar6 = iVar2 == 5;
    }
    if ((bVar6 || iVar3 < 0 != bVar7) && (uVar5 = 1, 2 < iVar2)) {
      uVar5 = 2;
    }
  }
  iVar2 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                    (s_WebRTC_Audio_EchoCanceller_Delay_7006691a,0x27,5);
  if (iVar2 != 0) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,uVar5);
  }
  iVar2 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                    (s_WebRTC_Audio_EchoCanceller_Clock_700650cf,0x25,3);
  if (iVar2 != 0) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,param_6);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: xXZkvIKWxBbuBerHmaFBFdAUzvyHRZQSonJqHujetTofNCncKsypfLvu
// Entry: 0x71ac69f0 | Size: 16 bytes
// =========================================================================

void xXZkvIKWxBbuBerHmaFBFdAUzvyHRZQSonJqHujetTofNCncKsypfLvu(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


// =========================================================================
// Function: nfrswZIrzhtwfdzBbsEzwckLRRidKawaepUwMpCPAYBtIkvlyhNevvX_GezBJQ
// Entry: 0x71ac6bd8 | Size: 1984 bytes
// =========================================================================

undefined4 *
nfrswZIrzhtwfdzBbsEzwckLRRidKawaepUwMpCPAYBtIkvlyhNevvX_GezBJQ
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_5c;
  int *piStack_58;
  
  puVar4 = (undefined4 *)thunk_MwhHq(0x1efc);
  puVar10 = puVar4 + 1;
  *puVar4 = &DAT_70b136a8;
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(puVar10,param_1);
  uVar5 = thunk_WcWZMFyJwpTTVYYbNvFKVQ(puVar4 + 0x7a);
  uVar6 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(0x71204894);
  } while (!bVar2);
  DataMemoryBarrier(0xb);
  DAT_71204894 = DAT_71204894 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar6);
  puVar4[0x7b] = uVar6;
  uVar6 = thunk_YvDyDIyfbgwIdHfftxzZSBZKYiCMUnbR();
  puVar4[0x7c] = uVar6;
  puVar4[0x7d] = param_2;
  puVar4[0x7e] = param_3;
  puVar4[0x7f] = param_4;
  *(undefined1 *)(puVar4 + 0x80) = *(undefined1 *)((int)puVar4 + 0xad);
  thunk_xeBuUDWdYwXelGSZwefvuPDACVEnXAiNFOvHrlXKwbIVw_VGRZsWylSzWnyHzYiXzlFaZRBVcsvtbxLWgeYyShNgsdxmYDZtj
            (puVar4 + 0x81,param_1,param_3,param_4,puVar4[0x7b],uVar6);
  thunk__ZwqPiYOoVwYczwvpNWCW_KSVeaEUEhmEXp_QGIeOkoGkDkHMstIQNFtQuDNWFueKSeKSqUFSshaCzzHnq
            (puVar4 + 0x11d,puVar10,puVar4[0x7c],param_2,param_4);
  piVar15 = puVar4 + 0x373;
  thunk_WTBkWuBIfOBToSgXQqDecULNfNQGUylyJqsFWuAudxER_jyIlxexrlbJkzQEizjPTTEapUPiDvdpHTZGbjMjjqj
            (piVar15,puVar10,puVar4[0x7c],puVar4[0x7f]);
  piVar13 = puVar4 + 0x37f;
  thunk_oKtdSRrvSbyEjyQVAzXJQTDNnkkgrCeWEMgRsSA_IafXCedXpllvFacV
            (piVar13,puVar4[0x7c],puVar4[0x7d],puVar4[0x7f]);
  thunk_oVjIZfW_TimdNILANMwIOoSiePQUoGUlOMhu_vGLlNSOfHQVHIfcxYXmg_lVlIt(puVar4 + 0x386,puVar10);
  thunk_xzopVLqdOJyLnOsEoaKsPERNdoShYQPF_GpYvl_qz_qDvekvayNunGB_iznIgSsAA
            (puVar4 + 0x3c9,puVar10,param_3);
  *(undefined2 *)(puVar4 + 0x50b) = 0x100;
  thunk_FNhixuUwQKkgSvHGMGKEFAdcHBtAoeJtlCXkPNYcsAMeEjSqpfc(puVar4 + 0x50c,puVar10,puVar4[0x7f]);
  thunk_tfIOLOenmdZMmILmF_pGzqaiqSNuNRpEnr(puVar4 + 0x78d);
  uVar11 = puVar4[0x7f];
  piVar9 = puVar4 + 0x795;
  *piVar9 = 0;
  puVar4[0x796] = 0;
  puVar4[0x797] = 0;
  if (uVar11 == 0) {
    puVar4[0x798] = 0;
    puVar4[0x79a] = 0;
    puVar4[0x799] = 0;
LAB_71ac6e1c:
    piStack_58 = puVar4 + 0x798;
    piStack_5c = puVar4 + 0x799;
    puVar4[0x79e] = 0;
    puVar4[0x79f] = 0;
    puVar4[0x7a0] = 0;
    *(undefined1 *)(puVar4 + 0x79d) = 1;
    puVar4[0x79b] = 0;
    puVar4[0x79c] = 0;
    if (uVar11 < 3) {
      uVar5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar6 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar4[0x7b9] = 0;
      puVar4[0x7ba] = uVar5;
      puVar4[0x7bb] = uVar6;
      puVar4[0x7bc] = uVar3;
      puVar4[0x7bd] = 0;
      puVar4[0x7a1] = 0;
      puVar4[0x7a2] = uVar5;
      puVar4[0x7a3] = uVar6;
      puVar4[0x7a4] = uVar3;
      puVar4[0x7a5] = 0;
      puVar4[0x7a6] = uVar5;
      puVar4[0x7a7] = uVar6;
      puVar4[0x7a8] = uVar3;
      puVar4[0x7a9] = 0;
      puVar4[0x7aa] = uVar5;
      puVar4[0x7ab] = uVar6;
      puVar4[0x7ac] = uVar3;
      puVar4[0x7ad] = 0;
      puVar4[0x7ae] = uVar5;
      puVar4[0x7af] = uVar6;
      puVar4[0x7b0] = uVar3;
      puVar4[0x7b1] = 0;
      puVar4[0x7b2] = uVar5;
      puVar4[0x7b3] = uVar6;
      puVar4[0x7b4] = uVar3;
      puVar4[0x7b5] = 0;
      puVar4[0x7b6] = uVar5;
      puVar4[0x7b7] = uVar6;
      puVar4[0x7b8] = uVar3;
      puVar4[0x7be] = 0;
      return puVar4;
    }
    iVar8 = thunk_MwhHq(uVar11 << 8);
    puVar4[0x79e] = iVar8;
    iVar7 = iVar8 + uVar11 * 0x100;
    puVar4[0x7a0] = iVar7;
    imp___aeabi_memclr4(iVar8,uVar11 << 8);
    piVar14 = puVar4 + 0x7a1;
    *piVar14 = 0;
    puVar4[0x7a2] = 0;
    puVar4[0x7a3] = 0;
    puVar4[0x79f] = iVar7;
    piStack_68 = piVar13;
    piStack_64 = piVar15;
    if (0xfc0fc0 < uVar11) goto LAB_71ac71f0;
    iVar8 = uVar11 * 0x104;
    iVar7 = thunk_MwhHq(iVar8);
    puVar4[0x7a1] = iVar7;
    puVar4[0x7a3] = iVar7 + uVar11 * 0x104;
    uVar1 = (iVar8 - 0x104U) / 0x104;
    iVar12 = uVar1 * 0x104 + 0x104;
    imp___aeabi_memclr4(iVar7,iVar12);
    puVar4[0x7a4] = 0;
    puVar4[0x7a5] = 0;
    puVar4[0x7a6] = 0;
    puVar4[0x7a2] = iVar7 + iVar12;
    iVar7 = thunk_MwhHq(iVar8);
    puVar4[0x7a4] = iVar7;
    puVar4[0x7a6] = iVar7 + uVar11 * 0x104;
    imp___aeabi_memclr4(iVar7,iVar12);
    puVar4[0x7a7] = 0;
    puVar4[0x7a8] = 0;
    puVar4[0x7a9] = 0;
    puVar4[0x7a5] = iVar7 + iVar12;
    iVar7 = thunk_MwhHq(iVar8);
    puVar4[0x7a7] = iVar7;
    puVar4[0x7a9] = iVar7 + uVar11 * 0x104;
    imp___aeabi_memclr4(iVar7,iVar12);
    puVar4[0x7aa] = 0;
    puVar4[0x7ab] = 0;
    puVar4[0x7ac] = 0;
    puVar4[0x7a8] = iVar7 + iVar12;
    iVar7 = thunk_MwhHq(iVar8);
    puVar4[0x7aa] = iVar7;
    puVar4[0x7ac] = iVar7 + uVar11 * 0x104;
    imp___aeabi_memclr4(iVar7,iVar12);
    puVar4[0x7ad] = 0;
    puVar4[0x7ae] = 0;
    puVar4[0x7af] = 0;
    puVar4[0x7ab] = iVar7 + iVar12;
    iVar8 = thunk_MwhHq(iVar8);
    puVar4[0x7ad] = iVar8;
    puVar4[0x7af] = iVar8 + uVar11 * 0x104;
    iVar7 = uVar1 * 0x104 + 0x104;
    imp___aeabi_memclr4(iVar8,iVar7);
    piVar15 = puVar4 + 0x7b0;
    *piVar15 = 0;
    puVar4[0x7b1] = 0;
    puVar4[0x7b2] = 0;
    puVar4[0x7ae] = iVar8 + iVar7;
    piStack_6c = piVar14;
    if (uVar11 < 0x7e07e1) {
      iVar8 = uVar11 * 0x208;
      iVar7 = thunk_MwhHq(iVar8);
      puVar4[0x7b0] = iVar7;
      puVar4[0x7b2] = iVar7 + uVar11 * 0x208;
      iVar12 = ((iVar8 - 0x208U) / 0x208) * 0x208 + 0x208;
      imp___aeabi_memclr4(iVar7,iVar12);
      puVar4[0x7b3] = 0;
      puVar4[0x7b4] = 0;
      puVar4[0x7b5] = 0;
      puVar4[0x7b1] = iVar7 + iVar12;
      iVar7 = thunk_MwhHq(iVar8);
      puVar4[0x7b3] = iVar7;
      puVar4[0x7b5] = iVar7 + uVar11 * 0x208;
      imp___aeabi_memclr4(iVar7,iVar12);
      puVar4[0x7b6] = 0;
      puVar4[0x7b7] = 0;
      puVar4[0x7b8] = 0;
      puVar4[0x7b4] = iVar7 + iVar12;
      iVar7 = thunk_MwhHq(iVar8);
      puVar4[0x7b6] = iVar7;
      puVar4[0x7b8] = iVar7 + uVar11 * 0x208;
      imp___aeabi_memclr4(iVar7,iVar12);
      puVar4[0x7b9] = 0;
      puVar4[0x7ba] = 0;
      puVar4[0x7bb] = 0;
      puVar4[0x7b7] = iVar7 + iVar12;
      iVar8 = thunk_MwhHq(iVar8);
      puVar4[0x7b9] = iVar8;
      puVar4[0x7bb] = iVar8 + uVar11 * 0x208;
      imp___aeabi_memclr4(iVar8,iVar12);
      puVar4[0x7bc] = 0;
      puVar4[0x7ba] = iVar8 + iVar12;
      puVar4[0x7bd] = 0;
      puVar4[0x7be] = 0;
      if (uVar11 < 0x1f53b4) {
        iVar7 = uVar11 * 0x82c;
        iVar8 = thunk_MwhHq(iVar7);
        iVar12 = uVar11 * 0x82c + iVar8;
        puVar4[0x7bc] = iVar8;
        puVar4[0x7bd] = iVar8;
        puVar4[0x7be] = iVar12;
        do {
          thunk_RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk(iVar8);
          iVar7 = iVar7 + -0x82c;
          iVar8 = iVar8 + 0x82c;
        } while (iVar7 != 0);
        puVar4[0x7bd] = iVar12;
        return puVar4;
      }
      goto LAB_71ac7200;
    }
  }
  else {
    if (uVar11 < 0x1000000) {
      iVar8 = uVar11 << 8;
      iVar7 = thunk_MwhHq(iVar8);
      iVar12 = iVar7 + uVar11 * 0x100;
      puVar4[0x797] = iVar12;
      puVar4[0x795] = iVar7;
      imp___aeabi_memclr4(iVar7,iVar8);
      puVar4[0x798] = 0;
      puVar4[0x79a] = 0;
      puVar4[0x796] = iVar12;
      puVar4[0x799] = 0;
      iVar7 = thunk_MwhHq(iVar8);
      iVar12 = iVar7 + uVar11 * 0x100;
      puVar4[0x79a] = iVar12;
      puVar4[0x798] = iVar7;
      imp___aeabi_memclr4(iVar7,iVar8);
      puVar4[0x799] = iVar12;
      goto LAB_71ac6e1c;
    }
    FUN_71ac91ec(piVar9);
    piVar14 = piVar13;
LAB_71ac71f0:
    FUN_71abf220(piVar14);
  }
  FUN_71abf9ac(piVar15);
LAB_71ac7200:
  FUN_71ac9310();
  if (puVar4[0x7b6] == 0) {
    iVar8 = puVar4[0x7b3];
  }
  else {
    puVar4[0x7b7] = puVar4[0x7b6];
    thunk_qNQrlu();
    iVar8 = puVar4[0x7b3];
  }
  if (iVar8 != 0) {
    puVar4[0x7b4] = iVar8;
    thunk_qNQrlu();
  }
  if (*piVar15 == 0) {
    iVar8 = puVar4[0x7ad];
  }
  else {
    puVar4[0x7b1] = *piVar15;
    thunk_qNQrlu();
    iVar8 = puVar4[0x7ad];
  }
  if (iVar8 == 0) {
    iVar8 = puVar4[0x7aa];
  }
  else {
    puVar4[0x7ae] = iVar8;
    thunk_qNQrlu();
    iVar8 = puVar4[0x7aa];
  }
  if (iVar8 != 0) {
    puVar4[0x7ab] = iVar8;
    thunk_qNQrlu();
  }
  if (puVar4[0x7a7] != 0) {
    puVar4[0x7a8] = puVar4[0x7a7];
    thunk_qNQrlu();
  }
  if (puVar4[0x7a4] != 0) {
    puVar4[0x7a5] = puVar4[0x7a4];
    thunk_qNQrlu();
  }
  if (*piStack_6c != 0) {
    puVar4[0x7a2] = *piStack_6c;
    thunk_qNQrlu();
  }
  if (puVar4[0x79e] == 0) {
    iVar8 = *piStack_58;
  }
  else {
    puVar4[0x79f] = puVar4[0x79e];
    thunk_qNQrlu();
    iVar8 = *piStack_58;
  }
  if (iVar8 == 0) {
    iVar8 = *piVar9;
  }
  else {
    *piStack_5c = iVar8;
    thunk_qNQrlu();
    iVar8 = *piVar9;
  }
  if (iVar8 != 0) {
    puVar4[0x796] = iVar8;
    thunk_qNQrlu();
  }
  thunk_DMOWuzjKzHTbWw_humWINin(puVar4 + 0x50c);
  thunk_RjNVPxRlWUWARDPucTXBEbrBUeOfn_TnKlOzn(puVar4 + 0x3c9);
  thunk_RyTOGLVyGwdoPVoX_pfjMNygevyHBPFGeQAK(puVar4 + 0x386);
  thunk_AnPJOzIjJkfSlCMMNoWFqKAYSWghBZlmq(piStack_68);
  thunk_vwIiHDAjO_XvdMpmTpfgcDmAQdjFNZ_lWKAxv(piStack_64);
  thunk_NokPzhIn_GpCKHdObBTkYoDweJRDabe(puVar4 + 0x11d);
  thunk_HyYtdMRVlYNYAbgxxATFUszfCB(puVar4 + 0x81);
  FUN_71a76530(puVar4 + 0x7b);
  thunk_RojLCGwtwXzRzGHcMRBkeMK(uVar5);
  thunk_qNQrlu(puVar4);
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: FUN_71ac749c
// Entry: 0x71ac749c | Size: 448 bytes
// =========================================================================

int FUN_71ac749c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1ef0);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x1ef4);
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk_bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP(iVar1 + -0x82c);
      } while (iVar1 != iVar3);
      iVar2 = *(int *)(param_1 + 0x1ef0);
    }
    *(int *)(param_1 + 0x1ef4) = iVar3;
    thunk_qNQrlu(iVar2);
  }
  if (*(int *)(param_1 + 0x1ee4) != 0) {
    *(int *)(param_1 + 0x1ee8) = *(int *)(param_1 + 0x1ee4);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1ed8) != 0) {
    *(int *)(param_1 + 0x1edc) = *(int *)(param_1 + 0x1ed8);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1ecc) != 0) {
    *(int *)(param_1 + 0x1ed0) = *(int *)(param_1 + 0x1ecc);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1ec0) != 0) {
    *(int *)(param_1 + 0x1ec4) = *(int *)(param_1 + 0x1ec0);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1eb4) != 0) {
    *(int *)(param_1 + 0x1eb8) = *(int *)(param_1 + 0x1eb4);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1ea8) != 0) {
    *(int *)(param_1 + 0x1eac) = *(int *)(param_1 + 0x1ea8);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1e9c) != 0) {
    *(int *)(param_1 + 0x1ea0) = *(int *)(param_1 + 0x1e9c);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1e90) != 0) {
    *(int *)(param_1 + 0x1e94) = *(int *)(param_1 + 0x1e90);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1e84) != 0) {
    *(int *)(param_1 + 0x1e88) = *(int *)(param_1 + 0x1e84);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1e78) != 0) {
    *(int *)(param_1 + 0x1e7c) = *(int *)(param_1 + 0x1e78);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1e60) != 0) {
    *(int *)(param_1 + 0x1e64) = *(int *)(param_1 + 0x1e60);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x1e54) != 0) {
    *(int *)(param_1 + 0x1e58) = *(int *)(param_1 + 0x1e54);
    thunk_qNQrlu();
  }
  thunk_DMOWuzjKzHTbWw_humWINin(param_1 + 0x1430);
  thunk_RjNVPxRlWUWARDPucTXBEbrBUeOfn_TnKlOzn(param_1 + 0xf24);
  thunk_RyTOGLVyGwdoPVoX_pfjMNygevyHBPFGeQAK(param_1 + 0xe18);
  thunk_AnPJOzIjJkfSlCMMNoWFqKAYSWghBZlmq(param_1 + 0xdfc);
  thunk_vwIiHDAjO_XvdMpmTpfgcDmAQdjFNZ_lWKAxv(param_1 + 0xdcc);
  thunk_NokPzhIn_GpCKHdObBTkYoDweJRDabe(param_1 + 0x474);
  thunk_HyYtdMRVlYNYAbgxxATFUszfCB(param_1 + 0x204);
  iVar3 = *(int *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  if (iVar3 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1 + 0x1e8);
  return param_1;
}


// =========================================================================
// Function: FUN_71ac765c
// Entry: 0x71ac765c | Size: 20 bytes
// =========================================================================

void FUN_71ac765c(void)

{
  FUN_71ac749c();
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71ac7670
// Entry: 0x71ac7670 | Size: 128 bytes
// =========================================================================

void FUN_71ac7670(int param_1,double *param_2)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  
  fVar2 = (float)imp_log10f(*(undefined4 *)(param_1 + 0x1884));
  pfVar3 = *(float **)(param_1 + 0x18a8);
  uVar1 = *(int *)(param_1 + 0x18ac) - (int)pfVar3 >> 2;
  fVar5 = *pfVar3;
  *param_2 = (double)fVar2 * -10.0;
  if (1 < uVar1) {
    iVar4 = uVar1 - 1;
    do {
      pfVar3 = pfVar3 + 1;
      if (*pfVar3 < fVar5) {
        fVar5 = *pfVar3;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  fVar5 = (float)thunk_EtrbFSCNhkpTZrrCWlvOG(fVar5);
  param_2[1] = (double)fVar5;
  return;
}


// =========================================================================
// Function: FUN_71ac76f0
// Entry: 0x71ac76f0 | Size: 2928 bytes
// =========================================================================

void FUN_71ac76f0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined1 param_5,
                 undefined4 param_6,int *param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  int *piVar9;
  int extraout_r1;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 *puVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 (*pauVar25) [16];
  undefined1 *puVar26;
  int iVar27;
  undefined1 uVar28;
  int iVar29;
  undefined1 *puVar30;
  int iVar31;
  undefined1 *puVar32;
  float *pfVar33;
  undefined1 *puVar34;
  int iVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  float *pfVar39;
  uint in_fpscr;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 *puStack_2e80;
  undefined1 *puStack_2e78;
  undefined1 *puStack_2e6c;
  undefined1 *puStack_2e68;
  undefined1 *puStack_2e64;
  undefined1 *puStack_2e60;
  undefined1 *puStack_2e5c;
  float *pfStack_2e58;
  undefined4 uStack_2e2c;
  undefined4 uStack_2e28;
  undefined1 uStack_2e24;
  undefined1 auStack_2d20 [2092];
  undefined1 auStack_24f4 [2092];
  undefined1 auStack_1cc8 [1040];
  undefined1 auStack_18b8 [1040];
  undefined1 auStack_14a8 [1040];
  undefined1 auStack_1098 [1040];
  undefined1 auStack_c88 [520];
  undefined1 auStack_a80 [520];
  undefined1 auStack_878 [520];
  undefined1 auStack_670 [520];
  undefined1 auStack_468 [520];
  float afStack_260 [128];
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  
  piVar9 = (int *)*param_7;
  iVar35 = piVar9[1];
  iVar22 = piVar9[5];
  iVar29 = *piVar9;
  *(int *)(param_1 + 0x1e6c) = *(int *)(param_1 + 0x1e6c) + 1;
  uStack_60 = param_2;
  iStack_5c = param_3;
  uStack_58 = param_4;
  thunk_RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk(auStack_2d20);
  FUN_71ba2da8(iVar29 + iVar22,iVar29);
  thunk_RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk();
  puVar23 = *(undefined1 **)(param_1 + 0x1fc);
  pfStack_2e58 = afStack_260;
  puStack_2e68 = auStack_468;
  puStack_2e6c = auStack_670;
  puVar30 = auStack_a80;
  puStack_2e80 = auStack_878;
  puStack_2e78 = auStack_c88;
  puStack_2e5c = auStack_1098;
  puStack_2e60 = auStack_14a8;
  puVar15 = auStack_18b8;
  puVar36 = auStack_1cc8;
  puStack_2e64 = auStack_2d20;
  if (puVar23 == (undefined1 *)0x0) {
    pfStack_2e58 = (float *)0x0;
    puStack_2e68 = puVar23;
    puStack_2e6c = puVar23;
    puVar30 = puVar23;
    puStack_2e80 = puVar23;
    puStack_2e78 = puVar23;
    puStack_2e5c = puVar23;
    puStack_2e60 = puVar23;
    puVar15 = puVar23;
    puVar36 = puVar23;
    puStack_2e64 = puVar23;
  }
  if ((undefined1 *)0x2 < puVar23) {
    pfStack_2e58 = *(float **)(param_1 + 0x1e78);
    puStack_2e68 = *(undefined1 **)(param_1 + 0x1e84);
    puStack_2e6c = *(undefined1 **)(param_1 + 0x1e90);
    puStack_2e80 = *(undefined1 **)(param_1 + 0x1e9c);
    puStack_2e64 = *(undefined1 **)(param_1 + 0x1ef0);
    puStack_2e60 = *(undefined1 **)(param_1 + 0x1ecc);
    puVar36 = *(undefined1 **)(param_1 + 0x1ee4);
    puVar15 = *(undefined1 **)(param_1 + 0x1ed8);
    puVar30 = *(undefined1 **)(param_1 + 0x1ea8);
    puStack_2e5c = *(undefined1 **)(param_1 + 0x1ec0);
    puStack_2e78 = *(undefined1 **)(param_1 + 0x1eb4);
  }
  *(undefined1 *)(param_1 + 0x1a64) = param_5;
  iVar22 = param_1 + 0x1430;
  if ((param_2 & 0xff) != 0 || param_3 != 0) {
    if ((param_2 & 0xff) != 0) {
      if (*(int *)(param_1 + 0x1e70) == 0) {
        *(undefined4 *)(param_1 + 0x1e70) = 3;
        uVar18 = (uint)*(byte *)(param_1 + 0x39) << 1;
        iVar29 = thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(uVar18);
        if (iVar29 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_70096367,s_____webrtc_apm_src_webrtc_module_70071634,uVar18 | 0xa98,
                     s_Gain_change_detected_at_block_7006f2cd,*(undefined4 *)(param_1 + 0x1e6c));
        }
      }
      else {
        uStack_60 = uStack_60 & 0xffffff00;
      }
    }
    thunk_MmSDXHiqGLyFpfP_pxTfQf_NCZTXvI_ikZTWWc_agnDlrDObsAgDvHjjRwKuiSeITwbliVKx
              (param_1 + 0x204,&uStack_60);
    thunk_wIhreSuIvtVwSwjHuUuTxDmHFwwpPUogTX_UXLKFRzWKCdCNdcWQNIgxetEqzGojlGXvk(iVar22,&uStack_60);
    if (iStack_5c != 0) {
      thunk_sTvsKmzcifKgyMLpvppycYJSkAqSaDvmGjXsAhSCPoNmoX(param_1 + 0x474,1);
    }
  }
  uStack_2e24 = 1;
  if (0 < *(int *)(param_1 + 0x1e70)) {
    *(int *)(param_1 + 0x1e70) = *(int *)(param_1 + 0x1e70) + -1;
  }
  uStack_2e28 = *(undefined4 *)(param_1 + 0x1644);
  iVar29 = param_1 + 0xe18;
  thunk_LfvVuxsosDxKjitHFLDCo_SWTicrIKazjeHWGxrpYc_xHTpvGRuLIm_xxMUzBczhwIRvHYmFZtIkgnhWjXtPN
            (iVar29,param_7,&uStack_2e28);
  if (*(char *)(param_1 + 0x1628) != '\0') {
    thunk_lboVYBSNrlEaXBkdeOoCLeaLjpCYvIADcyEofMWgyl(param_1 + 0x204);
    thunk_sTvsKmzcifKgyMLpvppycYJSkAqSaDvmGjXsAhSCPoNmoX(param_1 + 0x474,0);
  }
  puVar20 = puVar23;
  if (puVar23 != (undefined1 *)0x0) {
    puVar20 = puStack_2e64;
  }
  thunk__enrS_wyQqKjYqcYFoFNBriLUmsNZhFWYAcBHdkAweXmgqhmOCQaOYetZa_YEfIprieCjCjxZMygqKjUeCOwnADPMBszVhRYbWyVxrvmIRIYzvqvv_oCKejQMON_IYzePSKVsThVhZFtY_TzztmcfgiKgH
            (param_1 + 0x204,param_7,param_9,iVar29,iVar22,puVar20,puVar23);
  if (*(int *)(param_1 + 0x1fc) != 0) {
    puVar24 = puStack_2e5c + 0x104;
    uVar18 = 0;
    puVar37 = puStack_2e60 + 0x104;
    pfVar33 = pfStack_2e58;
    puVar21 = puStack_2e6c;
    puVar26 = puStack_2e78;
    puVar32 = puStack_2e60;
    puVar34 = puStack_2e5c;
    puVar38 = puStack_2e68;
    do {
      if (*(char *)(param_1 + 0x200) == '\0') {
LAB_71ac7af4:
        pfVar39 = (float *)(puStack_2e64 + uVar18 * 0x82c + 0x200);
        uVar28 = 1;
        pfVar10 = pfVar39;
        if (*(char *)(param_1 + 0x1e74) == '\0') {
          pfVar10 = (float *)(puStack_2e64 + uVar18 * 0x82c + 0x300);
        }
      }
      else {
        fVar40 = *(float *)(puStack_2e64 + uVar18 * 0x82c + 0x818);
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(*(float *)(puStack_2e64 + uVar18 * 0x82c + 0x81c) < fVar40 * 0.9)
                           << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          fVar41 = *(float *)(puStack_2e64 + uVar18 * 0x82c + 0x820);
          uVar2 = uVar1 | (uint)(fVar41 < 57600.0) << 0x1f | (uint)(fVar41 == 57600.0) << 0x1e;
          in_fpscr = uVar2 | (uint)NAN(fVar41) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
          goto LAB_71ac7ab4;
          fVar41 = *(float *)(puStack_2e64 + uVar18 * 0x82c + 0x810);
          uVar2 = uVar1 | (uint)(fVar41 < 230400.0) << 0x1f | (uint)(fVar41 == 230400.0) << 0x1e;
          in_fpscr = uVar2 | (uint)NAN(fVar41) << 0x1c;
          bVar4 = (byte)(uVar2 >> 0x18);
          if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar41 = *(float *)(puStack_2e64 + uVar18 * 0x82c + 0x814);
            uVar1 = uVar1 | (uint)(fVar41 < 230400.0) << 0x1f | (uint)(fVar41 == 230400.0) << 0x1e;
            in_fpscr = uVar1 | (uint)NAN(fVar41) << 0x1c;
            bVar4 = (byte)(uVar1 >> 0x18);
            if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
            goto LAB_71ac7ab4;
          }
        }
        else {
LAB_71ac7ab4:
          uVar1 = in_fpscr & 0xfffffff;
          in_fpscr = uVar1 | (uint)(*(float *)(puStack_2e64 + uVar18 * 0x82c + 0x81c) < fVar40) <<
                             0x1f;
          if ((!SUB41(in_fpscr >> 0x1f,0)) ||
             (in_fpscr = uVar1 | (uint)(*(float *)(puStack_2e64 + uVar18 * 0x82c + 0x820) < fVar40)
                                 << 0x1f, !SUB41(in_fpscr >> 0x1f,0))) goto LAB_71ac7af4;
        }
        pfVar39 = (float *)(puStack_2e64 + uVar18 * 0x82c + 0x300);
        uVar28 = 0;
        pfVar10 = pfVar39;
        if (*(char *)(param_1 + 0x1e74) != '\0') {
          pfVar10 = (float *)(puStack_2e64 + uVar18 * 0x82c + 0x200);
        }
      }
      pfVar12 = pfStack_2e58 + uVar18 * 0x40;
      if (pfVar10 == pfVar39) {
        imp___aeabi_memmove4(pfVar12,pfVar10,0x100);
      }
      else {
        pfVar16 = pfVar33;
        pfVar19 = pfVar39;
        iVar11 = 1;
        do {
          fVar41 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          iVar31 = iVar11 + 1;
          fVar40 = (float)VectorUnsignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
          fVar42 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          *pfVar16 = fVar41 * (1.0 - fVar40 * 0.032258064) + fVar40 * 0.032258064 * fVar42;
          pfVar16 = pfVar16 + 1;
          iVar11 = iVar31;
        } while (iVar31 != 0x1f);
        imp___aeabi_memmove4(pfVar12 + 0x1e,pfVar39 + 0x1e,0x88);
      }
      *(undefined1 *)(param_1 + 0x1e74) = uVar28;
      iVar31 = *(int *)(param_1 + 0x1e60) + uVar18 * 0x100;
      iVar11 = *(int *)(param_9 + 8) + uVar18 * 0x100;
      thunk_SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
                (param_1 + 0x1e8,iVar11,0x40,iVar31,0x40,2,puStack_2e5c + uVar18 * 0x208);
      imp___aeabi_memmove4(iVar31,iVar11,0x100);
      iVar11 = *(int *)(param_1 + 0x1e54) + uVar18 * 0x100;
      thunk_SSRRcKPppUacKuKPVwFkJsYmuNaQZqetvW_xM_ggycKzBgGogFmTFyHWFirVTsYxYorEVcUnjquWpAatlHQshS
                (param_1 + 0x1e8,pfVar12,0x40,iVar11,0x40,2,puStack_2e60 + uVar18 * 0x208);
      imp___aeabi_memmove4(iVar11,pfVar12,0x100);
      iVar11 = 0;
      do {
        pfVar10 = (float *)(puVar37 + iVar11);
        pfVar39 = (float *)(puVar24 + iVar11);
        pfVar12 = (float *)(puVar26 + iVar11);
        iVar11 = iVar11 + 4;
        fVar40 = *pfVar39 - *pfVar10;
        fVar41 = pfVar39[-0x41] - pfVar10[-0x41];
        *pfVar12 = fVar40 * fVar40 + fVar41 * fVar41;
      } while (iVar11 != 0x104);
      iVar11 = 0;
      do {
        pfVar10 = (float *)(puVar24 + iVar11);
        pfVar39 = (float *)(puVar34 + iVar11);
        pfVar12 = (float *)(puVar38 + iVar11);
        iVar11 = iVar11 + 4;
        *pfVar12 = *pfVar10 * *pfVar10 + *pfVar39 * *pfVar39;
      } while (iVar11 != 0x104);
      iVar11 = 0;
      do {
        pfVar10 = (float *)(puVar37 + iVar11);
        pfVar39 = (float *)(puVar32 + iVar11);
        pfVar12 = (float *)(puVar21 + iVar11);
        iVar11 = iVar11 + 4;
        *pfVar12 = *pfVar10 * *pfVar10 + *pfVar39 * *pfVar39;
      } while (iVar11 != 0x104);
      puVar32 = puVar32 + 0x208;
      puVar21 = puVar21 + 0x104;
      puVar34 = puVar34 + 0x208;
      puVar38 = puVar38 + 0x104;
      puVar24 = puVar24 + 0x208;
      uVar18 = uVar18 + 1;
      puVar37 = puVar37 + 0x208;
      puVar26 = puVar26 + 0x104;
      pfVar33 = pfVar33 + 0x40;
    } while (uVar18 < *(uint *)(param_1 + 0x1fc));
    if (param_8 != 0 && *(uint *)(param_1 + 0x1fc) != 0) {
      uVar18 = 0;
      do {
        imp___aeabi_memmove4
                  (*(int *)(param_8 + 8) + uVar18 * 0x100,pfStack_2e58 + uVar18 * 0x40,0x100);
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_1 + 0x1fc));
    }
  }
  iVar11 = *(int *)(param_1 + 0x450);
  iVar31 = *(int *)(param_1 + 0x45c);
  puVar21 = puVar23;
  if (puVar23 != (undefined1 *)0x0) {
    puVar21 = puStack_2e68;
  }
  puVar26 = puVar23;
  if (puVar23 != (undefined1 *)0x0) {
    puVar26 = puStack_2e6c;
  }
  iVar27 = 0;
  if (*(int *)(param_1 + 0x460) != iVar31) {
    iVar27 = iVar31;
  }
  iVar17 = 0;
  if (*(int *)(param_1 + 0x454) != iVar11) {
    iVar17 = iVar11;
  }
  thunk_rkiVhZdkxnJEgXkNjHxfK_GQfKSHaSrTrvgMsbVIMrwK__sYHiqAVBqfHlfdPXfJXYYyaHnDqbaFpWfuwqOZJEbnurzREzgjaMEVFmzOhlZNlu_atgDVnIoURKtXkiNtfWaGfFn_VlebxRVlYTG_WwXneak_XFakrBSQtBOoDvXzgPAxKmzQYHLkTVyUMJFzwkQLmi_FUQhOLeepJDyJIsaqaZdMIMxlvcUcssHvba_uuEqumc_qkzKwzJhEjemVOAjzVn
            (iVar22,param_6,iVar17,(*(int *)(param_1 + 0x454) - iVar11 >> 2) * -0x55555555,iVar27,
             (*(int *)(param_1 + 0x460) - iVar31 >> 2) * -0x55555555,param_7,puVar26,puVar23,puVar21
             ,puVar23,puVar20,puVar23);
  cVar3 = *(char *)(param_1 + 0x14de);
  bVar4 = *(byte *)(param_1 + 0x1661);
  if (puVar23 == (undefined1 *)0x0) {
    puVar15 = puVar23;
    puVar36 = puVar23;
  }
  thunk_VKZtoVQwanQocjkXiAAuEberMLFShrspAAxKaneDTDMkjXVvfeUSSrcWAWVmNkoyuXizmsuJRzoQKzUpGplexlNghmvzTtwPlttcPbtHAgpHPvnuHnPZxuocNBi_j
            (param_1 + 0xdcc,*(undefined1 *)(param_1 + 0x1a64),puVar21,puVar23,puVar15,puVar23,
             puVar36,puVar23);
  if (*(char *)(param_1 + 0x142d) == '\0') {
    imp___aeabi_memclr8(&uStack_2e28,0x104);
  }
  else {
    uVar6 = (**(code **)(**(int **)(param_1 + 0xdc8) + 8))();
    puVar26 = puStack_2e78;
    puVar20 = puStack_2e80;
    if (puVar23 == (undefined1 *)0x0) {
      puVar26 = puVar23;
      puVar30 = puVar23;
      puVar20 = puVar23;
    }
    thunk_fDjvcuDHaMRRG_iRiGXjRUNIiwESMRvByCFUFlHKlVbVGdmoctCkUjetvvEfdrEIBWKlUCbCfsDDLZjTndhWaJNiyCUOejOeya_wbZAZijxtfTPitSkZLHEGyLCLETcCUSPAZWCtndEgRHAJTTpOhzMFOTv
              (param_1 + 0xf24,iVar22,param_7,puVar26,puVar23,puVar21,puVar23,uVar6,puVar20,puVar23,
               puVar30,puVar23);
    bVar8 = *(byte *)(param_1 + 0x1661);
    cVar7 = *(char *)(param_1 + 0x14de);
    if ((bVar8 != 0) && (cVar7 != '\0')) {
      iVar11 = *(int *)(param_1 + 0x1fc);
      if (iVar11 == 0) {
        cVar7 = '\x01';
      }
      else {
        iVar31 = 0;
        puVar21 = puStack_2e6c;
        do {
          pauVar13 = (undefined1 (*) [16])(puStack_2e68 + iVar31 * 0x104);
          pauVar25 = (undefined1 (*) [16])(puStack_2e6c + iVar31 * 0x104);
          if (puStack_2e6c < puStack_2e68 + iVar11 * 0x104 &&
              puStack_2e68 < puStack_2e6c + iVar11 * 0x104) {
            iVar27 = 0;
          }
          else {
            iVar27 = 0x100;
            auVar43 = FloatVectorCompareGreaterThan(*pauVar25,*pauVar13,2);
            auVar43 = VectorBitwiseInsertIfFalse(*pauVar13,*pauVar25,auVar43);
            auVar5 = pauVar13[1];
            auVar44 = pauVar13[1];
            *(longlong *)*pauVar25 = auVar43._0_8_;
            *(longlong *)(*pauVar25 + 8) = auVar43._8_8_;
            auVar43 = pauVar25[1];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,auVar44,2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,auVar5,auVar44);
            auVar5 = pauVar13[2];
            auVar44 = pauVar13[2];
            *(longlong *)pauVar25[1] = auVar43._0_8_;
            *(longlong *)(pauVar25[1] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[2];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,auVar44,2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,auVar5,auVar44);
            auVar5 = pauVar13[3];
            auVar44 = pauVar13[3];
            *(longlong *)pauVar25[2] = auVar43._0_8_;
            *(longlong *)(pauVar25[2] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[3];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,auVar44,2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,auVar5,auVar44);
            auVar5 = pauVar13[4];
            auVar44 = pauVar13[4];
            *(longlong *)pauVar25[3] = auVar43._0_8_;
            *(longlong *)(pauVar25[3] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[4];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,auVar44,2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,auVar5,auVar44);
            *(longlong *)pauVar25[4] = auVar43._0_8_;
            *(longlong *)(pauVar25[4] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[5];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[5],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[5],auVar44);
            *(longlong *)pauVar25[5] = auVar43._0_8_;
            *(longlong *)(pauVar25[5] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[6];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[6],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[6],auVar44);
            *(longlong *)pauVar25[6] = auVar43._0_8_;
            *(longlong *)(pauVar25[6] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[7];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[7],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[7],auVar44);
            *(longlong *)pauVar25[7] = auVar43._0_8_;
            *(longlong *)(pauVar25[7] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[8];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[8],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[8],auVar44);
            *(longlong *)pauVar25[8] = auVar43._0_8_;
            *(longlong *)(pauVar25[8] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[9];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[9],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[9],auVar44);
            *(longlong *)pauVar25[9] = auVar43._0_8_;
            *(longlong *)(pauVar25[9] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[10];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[10],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[10],auVar44);
            *(longlong *)pauVar25[10] = auVar43._0_8_;
            *(longlong *)(pauVar25[10] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[0xb];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[0xb],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[0xb],auVar44);
            *(longlong *)pauVar25[0xb] = auVar43._0_8_;
            *(longlong *)(pauVar25[0xb] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[0xc];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[0xc],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[0xc],auVar44);
            *(longlong *)pauVar25[0xc] = auVar43._0_8_;
            *(longlong *)(pauVar25[0xc] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[0xd];
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[0xd],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[0xd],auVar44);
            *(longlong *)pauVar25[0xd] = auVar43._0_8_;
            *(longlong *)(pauVar25[0xd] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[0xe];
            pauVar14 = pauVar13 + 0xf;
            auVar44 = FloatVectorCompareGreaterThan(auVar43,pauVar13[0xe],2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,pauVar13[0xe],auVar44);
            *(longlong *)pauVar25[0xe] = auVar43._0_8_;
            *(longlong *)(pauVar25[0xe] + 8) = auVar43._8_8_;
            auVar43 = pauVar25[0xf];
            pauVar13 = pauVar13 + 0x10;
            auVar44 = FloatVectorCompareGreaterThan(auVar43,*pauVar14,2);
            auVar43 = VectorBitwiseInsertIfTrue(auVar43,*pauVar14,auVar44);
            *(longlong *)pauVar25[0xf] = auVar43._0_8_;
            *(longlong *)(pauVar25[0xf] + 8) = auVar43._8_8_;
            pauVar25 = pauVar25 + 0x10;
          }
          do {
            pfVar33 = (float *)(puVar21 + iVar27);
            puVar26 = *pauVar13;
            pauVar13 = (undefined1 (*) [16])(*pauVar13 + 4);
            iVar27 = iVar27 + 4;
            fVar40 = *pfVar33;
            if (*(float *)puVar26 < *pfVar33) {
              fVar40 = *(float *)puVar26;
            }
            *(float *)*pauVar25 = fVar40;
            pauVar25 = (undefined1 (*) [16])(*pauVar25 + 4);
          } while (iVar27 != 0x104);
          iVar31 = iVar31 + 1;
          puVar21 = puVar21 + 0x104;
        } while (iVar31 != iVar11);
        cVar7 = *(char *)(param_1 + 0x14de);
      }
    }
    iVar31 = *(int *)(param_1 + 0xdec);
    iVar11 = 0;
    if (*(int *)(param_1 + 0xdf0) != iVar31) {
      iVar11 = iVar31;
    }
    bVar8 = bVar8 & cVar7 != '\0';
    if (bVar8 != 0) {
      puStack_2e68 = puStack_2e6c;
    }
    if (puVar23 == (undefined1 *)0x0) {
      puStack_2e68 = puVar23;
    }
    if (bVar8 != 0) {
      puStack_2e80 = puStack_2e78;
    }
    if (puVar23 == (undefined1 *)0x0) {
      puStack_2e80 = puVar23;
    }
    thunk_kmpumvQJxPyPetfKESfWctkZqCVPiZCpqNSRcVlytIB_LNWoFCFmQPkxCucBXcZlrb_pGjQAeOzlMBNpGulOGRQPWnMRGnRrwfcqQOwuujMeFneTpqyNIIzmvqhmrvCqzwnuoLbWzASapshzsdLOQftvmBobIaZNoe
              (param_1 + 0x474,puStack_2e68,puVar23,puStack_2e80,puVar23,puVar20,puVar23,puVar30,
               puVar23,iVar11,(*(int *)(param_1 + 0xdf0) - iVar31 >> 2) * -0x3f03f03f,iVar29,iVar22,
               iVar35 + extraout_r1 * 0x14,
               *(char *)(param_1 + 0x108) != '\0' || (char)uStack_58 != '\0',&uStack_2e2c,
               &uStack_2e28);
    if ((bVar4 & cVar3 != '\0') != 0) {
      puStack_2e5c = puStack_2e60;
    }
    if (puVar23 == (undefined1 *)0x0) {
      puStack_2e5c = puVar23;
    }
    thunk_NDtqlpEjvdJFwFRYFrjBfWuVRsBafUEnqxPaRrajsRRboLlxFutdGCSpuskkVsejdxsiaEsHcWEQMjtKfbkfLwwIDYBeYbFMCmcJumbOGVaPxKBmecCxEKFESNTu
              (param_1 + 0xdfc,puVar15,puVar23,puVar36,puVar23,&uStack_2e28,uStack_2e2c,puStack_2e5c
               ,puVar23,param_9);
  }
  iVar29 = 0;
  if (*(int *)(param_1 + 0xdf0) != *(int *)(param_1 + 0xdec)) {
    iVar29 = *(int *)(param_1 + 0xdec);
  }
  thunk_OdzsOWLKzUisdGvBqRcWHYTHZDZKuzJvjQJuvBOkFhbvQRUpRhicWIxJuTVUSI_thDXprNPNFXdZa_uNLvE
            (param_1 + 0x1e34,iVar22,iVar29,&uStack_2e28);
  thunk_bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP(auStack_24f4);
  thunk_bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP(auStack_2d20);
  return;
}


// =========================================================================
// Function: FUN_71ac91ec
// Entry: 0x71ac91ec | Size: 20 bytes
// =========================================================================

void FUN_71ac91ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ac9310
// Entry: 0x71ac9310 | Size: 20 bytes
// =========================================================================

void FUN_71ac9310(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: xeBuUDWdYwXelGSZwefvuPDACVEnXAiNFOvHrlXKwbIVw_VGRZsWylSzWnyHzYiXzlFaZRBVcsvtbxLWgeYyShNgsdxmYDZtj
// Entry: 0x71ac9378 | Size: 1868 bytes
// =========================================================================

int xeBuUDWdYwXelGSZwefvuPDACVEnXAiNFOvHrlXKwbIVw_VGRZsWylSzWnyHzYiXzlFaZRBVcsvtbxLWgeYyShNgsdxmYDZtj
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int *piVar17;
  uint uVar18;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  thunk_WcWZMFyJwpTTVYYbNvFKVQ();
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 8) = param_6;
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(param_1 + 0xc,param_2);
  *(undefined4 *)(param_1 + 0x1f0) = param_4;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&piStack_30,s_WebRTC_Aec3CoarseFilterResetHang_7006e1fd,0x2e);
  piVar8 = piStack_28;
  piVar11 = piStack_2c;
  piVar17 = piStack_28;
  if (((byte)piStack_30 & 1) == 0) {
    piVar17 = (int *)((uint)&piStack_30 | 1);
    piVar11 = (int *)(uint)((byte)piStack_30 >> 1);
  }
  piVar13 = (int *)((int)piVar17 + (int)piVar11);
  piVar4 = piVar17;
  while (((piVar3 = piVar13, 6 < (int)piVar11 &&
          (piVar4 = (int *)imp_memchr(piVar4,0x45,(int)piVar11 - 6), piVar4 != (int *)0x0)) &&
         (iVar12 = imp_memcmp(piVar4,s_Enabled_7006820b,7), piVar3 = piVar4, iVar12 != 0))) {
    piVar4 = (int *)((int)piVar4 + 1);
    piVar11 = (int *)((int)piVar13 - (int)piVar4);
  }
  if (((byte)piStack_30 & 1) != 0) {
    thunk_qNQrlu(piVar8);
  }
  piVar11 = (int *)(param_1 + 0x1f8);
  *piVar11 = 0;
  uVar18 = *(uint *)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(bool *)(param_1 + 500) = piVar3 == piVar13 || piVar3 != piVar17;
  piStack_2c = (int *)((uint)piStack_2c & 0xffffff00);
  if (uVar18 != 0) {
    piStack_30 = piVar11;
    if (uVar18 < 0x40000000) {
      iVar12 = uVar18 * 4;
      iVar5 = thunk_MwhHq(iVar12);
      *(uint *)(param_1 + 0x200) = iVar5 + uVar18 * 4;
      *(int *)(param_1 + 0x1f8) = iVar5;
      imp___aeabi_memclr4(iVar5,iVar12);
      *(int *)(param_1 + 0x1fc) = iVar5 + iVar12;
      piStack_40 = (int *)(param_1 + 0x204);
      *piStack_40 = 0;
      piStack_2c = (int *)((uint)piStack_2c & 0xffffff00);
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 0;
      piStack_30 = piStack_40;
      iVar5 = thunk_MwhHq(iVar12);
      *(uint *)(param_1 + 0x20c) = iVar5 + uVar18 * 4;
      *(int *)(param_1 + 0x204) = iVar5;
      imp___aeabi_memclr4(iVar5,iVar12);
      *(int *)(param_1 + 0x208) = iVar5 + iVar12;
      piStack_2c = (int *)((uint)piStack_2c & 0xffffff00);
      piStack_44 = (int *)(param_1 + 0x210);
      *piStack_44 = 0;
      *(undefined4 *)(param_1 + 0x214) = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      piStack_30 = piStack_44;
      iVar5 = thunk_MwhHq(iVar12);
      *(uint *)(param_1 + 0x218) = iVar5 + uVar18 * 4;
      *(int *)(param_1 + 0x210) = iVar5;
      imp___aeabi_memclr4(iVar5,iVar12);
      *(int *)(param_1 + 0x214) = iVar5 + iVar12;
      piStack_2c = (int *)((uint)piStack_2c & 0xffffff00);
      piStack_48 = (int *)(param_1 + 0x21c);
      *piStack_48 = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined4 *)(param_1 + 0x224) = 0;
      piStack_30 = piStack_48;
      iVar5 = thunk_MwhHq(iVar12);
      *(uint *)(param_1 + 0x224) = iVar5 + uVar18 * 4;
      *(int *)(param_1 + 0x21c) = iVar5;
      imp___aeabi_memclr4(iVar5,iVar12);
      *(int *)(param_1 + 0x220) = iVar5 + iVar12;
      piStack_50 = (int *)(param_1 + 0x228);
      *piStack_50 = 0;
      *(undefined4 *)(param_1 + 0x230) = 0;
      piStack_5c = (int *)(param_1 + 0x22c);
      *piStack_5c = 0;
      if (uVar18 < 0xaaaaaab) {
        puVar6 = (undefined4 *)thunk_MwhHq(uVar18 * 0x18);
        puVar9 = puVar6 + uVar18 * 6;
        *(undefined4 **)(param_1 + 0x228) = puVar6;
        *(undefined4 **)(param_1 + 0x22c) = puVar6;
        *(undefined4 **)(param_1 + 0x230) = puVar9;
        do {
          puVar7 = puVar6 + 6;
          *puVar6 = 4;
          puVar6[1] = 0;
          puVar6[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          puVar6[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          puVar6[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          puVar6[5] = 0;
          puVar6 = puVar7;
        } while (puVar7 != puVar9);
        *(undefined4 *)(param_1 + 0x234) = 0;
        *(undefined4 *)(param_1 + 0x23c) = 0;
        *(undefined4 **)(param_1 + 0x22c) = puVar9;
        *(undefined4 *)(param_1 + 0x238) = 0;
        iVar5 = thunk_MwhHq(iVar12);
        iVar14 = iVar5 + uVar18 * 4;
        *(int *)(param_1 + 0x23c) = iVar14;
        *(int *)(param_1 + 0x234) = iVar5;
        imp___aeabi_memclr4(iVar5,iVar12);
        *(undefined4 *)(param_1 + 0x240) = 0;
        *(undefined4 *)(param_1 + 0x248) = 0;
        *(int *)(param_1 + 0x238) = iVar14;
        *(undefined4 *)(param_1 + 0x244) = 0;
        if (uVar18 != 0) {
          iVar5 = thunk_MwhHq(iVar12);
          iVar14 = iVar5 + uVar18 * 4;
          *(int *)(param_1 + 0x248) = iVar14;
          *(int *)(param_1 + 0x240) = iVar5;
          imp___aeabi_memclr4(iVar5,iVar12);
          *(int *)(param_1 + 0x244) = iVar14;
        }
        goto LAB_71ac970c;
      }
    }
    else {
      FUN_71acbb58(piVar11);
    }
    FUN_71acbd80(piStack_50);
LAB_71ac9a0c:
    FUN_71abf220(&piStack_30);
LAB_71ac9a14:
    FUN_71a0103c(&piStack_30);
    if (*piStack_58 == 0) {
      iVar12 = *piStack_54;
    }
    else {
      *piStack_64 = *piStack_58;
      thunk_qNQrlu();
      iVar12 = *piStack_54;
    }
    if (iVar12 == 0) {
      iVar12 = *piStack_50;
    }
    else {
      *piStack_60 = iVar12;
      thunk_qNQrlu();
      iVar12 = *piStack_50;
    }
    if (iVar12 != 0) {
      *piStack_5c = iVar12;
      thunk_qNQrlu();
    }
    FUN_71acb80c(piStack_48);
    FUN_71acb8c0(piStack_44);
    FUN_71acb994(piStack_40);
    FUN_71acb994(piVar11);
    thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1);
                    /* WARNING: Subroutine does not return */
    thunk_NAUpeWJSovvMoxKm_();
  }
  uVar16 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = uVar16;
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = uVar16;
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  *(undefined4 *)(param_1 + 0x220) = uVar2;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = uVar16;
  *(undefined4 *)(param_1 + 0x230) = uVar1;
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = uVar16;
  *(undefined4 *)(param_1 + 0x240) = uVar1;
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  *(undefined4 *)(param_1 + 0x248) = 0;
LAB_71ac970c:
  piStack_40 = (int *)(param_1 + 0x204);
  piStack_44 = (int *)(param_1 + 0x210);
  piStack_48 = (int *)(param_1 + 0x21c);
  piStack_50 = (int *)(param_1 + 0x228);
  piStack_54 = (int *)(param_1 + 0x234);
  piStack_58 = (int *)(param_1 + 0x240);
  piStack_5c = (int *)(param_1 + 0x22c);
  piStack_60 = (int *)(param_1 + 0x238);
  piStack_64 = (int *)(param_1 + 0x244);
  uVar10 = *(uint *)(param_1 + 0x84);
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  uVar15 = *(uint *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 0x60) < uVar10) {
    uVar15 = uVar10;
  }
  piStack_30 = (int *)0x0;
  piVar17 = piStack_2c;
  if (uVar15 != 0) {
    if (0xfc0fc0 < uVar15) goto LAB_71ac9a0c;
    iVar12 = uVar15 * 0x104;
    piVar8 = (int *)thunk_MwhHq(iVar12);
    piVar17 = piVar8 + uVar15 * 0x41;
    piStack_30 = piVar8;
    piStack_28 = piVar17;
    do {
      imp___aeabi_memclr4(piVar8,0x104);
      iVar12 = iVar12 + -0x104;
      piVar8 = piVar8 + 0x41;
    } while (iVar12 != 0);
  }
  piStack_2c = piVar17;
  piVar17 = (int *)FUN_71abef20(param_1 + 0x24c,uVar18,&piStack_30);
  if (piStack_30 != (int *)0x0) {
    piStack_2c = piStack_30;
    thunk_qNQrlu();
  }
  uVar16 = *(undefined4 *)(param_1 + 0x1f0);
  piStack_28 = (int *)0x0;
  uVar18 = *(uint *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 0x60) < *(uint *)(param_1 + 0x84)) {
    uVar18 = *(uint *)(param_1 + 0x84);
  }
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  if (uVar18 * 0x40 != 0) {
    if (0x3fffffff < uVar18 * 0x40) goto LAB_71ac9a14;
    piStack_30 = (int *)thunk_MwhHq(uVar18 << 8);
    piVar8 = piStack_30 + uVar18 * 0x40;
    piStack_28 = piVar8;
    imp___aeabi_memclr4(piStack_30,uVar18 << 8);
    piStack_2c = piVar8;
  }
  iVar12 = param_1 + 600;
  FUN_71a7706c(iVar12,uVar16,&piStack_30);
  if (piStack_30 != (int *)0x0) {
    piStack_2c = piStack_30;
    thunk_qNQrlu();
  }
  uVar18 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x264);
  *puVar6 = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  if (*(int *)(param_1 + 0x1f0) != 0) {
    do {
      uVar16 = thunk_MwhHq(0x3c);
      thunk_XYqWzteDWM_RS_HyQs_wAVTZaAExqPmbwFSvIJiKGCPMPvazrrxO_SFWhTZlAswvQDmMjnoJhr_NCG
                (uVar16,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_2 + 0x9c),param_3,param_6,*(undefined4 *)(param_1 + 4),puVar6
                 ,iVar12);
      iVar5 = *(int *)(*piVar11 + uVar18 * 4);
      *(undefined4 *)(*piVar11 + uVar18 * 4) = uVar16;
      if (iVar5 != 0) {
        thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y();
        thunk_qNQrlu();
      }
      uVar16 = thunk_MwhHq(0x3c);
      thunk_XYqWzteDWM_RS_HyQs_wAVTZaAExqPmbwFSvIJiKGCPMPvazrrxO_SFWhTZlAswvQDmMjnoJhr_NCG
                (uVar16,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x9c),
                 *(undefined4 *)(param_2 + 0x9c),param_3,param_6,*(undefined4 *)(param_1 + 4));
      iVar5 = *(int *)(*piStack_40 + uVar18 * 4);
      *(undefined4 *)(*piStack_40 + uVar18 * 4) = uVar16;
      if (iVar5 != 0) {
        thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y();
        thunk_qNQrlu();
      }
      uVar16 = thunk_MwhHq(0x164);
      thunk_Lyy_BwyTBJxJLWpRikiKnUkA_GgTXpUSSjrQAAvMnxWPZQnVOQyD_KZzFHy_MEQqyZOVJZJHEnovizzBPwfXfexViVRvSsAo
                (uVar16,(uint *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0xa8));
      iVar5 = *(int *)(*piStack_44 + uVar18 * 4);
      *(undefined4 *)(*piStack_44 + uVar18 * 4) = uVar16;
      if (iVar5 != 0) {
        thunk_nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw();
        thunk_qNQrlu();
      }
      uVar16 = thunk_MwhHq(0x38);
      thunk_JyDUheVSBAFhb_ShShlsDKmKSGxNHjRUartnBuzekpuxPGgYdrsaJKHHOfypQe_JWMbeFFXLXnAHjjYnXkXucRHjepokYG
                (uVar16,param_1 + 0x9c,*(undefined4 *)(param_2 + 0x9c));
      iVar5 = *(int *)(*piStack_48 + uVar18 * 4);
      *(undefined4 *)(*piStack_48 + uVar18 * 4) = uVar16;
      if (iVar5 != 0) {
        thunk_qNQrlu();
      }
      uVar15 = *(uint *)(param_1 + 0x1f0);
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar15);
    if (uVar15 != 0) {
      piVar11 = (int *)(*piVar17 + 4);
      do {
        iVar12 = piVar11[-1];
        if (iVar12 != *piVar11) {
          imp___aeabi_memclr4(iVar12,(((*piVar11 - iVar12) - 0x104U) / 0x104) * 0x104 + 0x104);
        }
        piVar11 = piVar11 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  return param_1;
}


// =========================================================================
// Function: HyYtdMRVlYNYAbgxxATFUszfCB
// Entry: 0x71ac9bc8 | Size: 668 bytes
// =========================================================================

void HyYtdMRVlYNYAbgxxATFUszfCB(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x264);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x268);
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
      piVar1 = *(int **)(param_1 + 0x264);
    }
    *(int **)(param_1 + 0x268) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  piVar4 = *(int **)(param_1 + 600);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x25c);
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
      piVar1 = *(int **)(param_1 + 600);
    }
    *(int **)(param_1 + 0x25c) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  piVar4 = *(int **)(param_1 + 0x24c);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x250);
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
      piVar1 = *(int **)(param_1 + 0x24c);
    }
    *(int **)(param_1 + 0x250) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x240);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x234) != 0) {
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x234);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x228);
    thunk_qNQrlu();
  }
  piVar4 = *(int **)(param_1 + 0x21c);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x220);
    piVar1 = piVar4;
    if (piVar3 != piVar4) {
      do {
        piVar3 = piVar3 + -1;
        iVar2 = *piVar3;
        *piVar3 = 0;
        if (iVar2 != 0) {
          thunk_qNQrlu();
        }
      } while (piVar3 != piVar4);
      piVar1 = *(int **)(param_1 + 0x21c);
    }
    *(int **)(param_1 + 0x220) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  piVar4 = *(int **)(param_1 + 0x210);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x214);
    piVar1 = piVar4;
    if (piVar3 != piVar4) {
      do {
        piVar3 = piVar3 + -1;
        iVar2 = *piVar3;
        *piVar3 = 0;
        if (iVar2 != 0) {
          thunk_nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw();
          thunk_qNQrlu();
        }
      } while (piVar3 != piVar4);
      piVar1 = *(int **)(param_1 + 0x210);
    }
    *(int **)(param_1 + 0x214) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  piVar4 = *(int **)(param_1 + 0x204);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x208);
    piVar1 = piVar4;
    if (piVar3 != piVar4) {
      do {
        piVar3 = piVar3 + -1;
        iVar2 = *piVar3;
        *piVar3 = 0;
        if (iVar2 != 0) {
          thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y();
          thunk_qNQrlu();
        }
      } while (piVar3 != piVar4);
      piVar1 = *(int **)(param_1 + 0x204);
    }
    *(int **)(param_1 + 0x208) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  piVar4 = *(int **)(param_1 + 0x1f8);
  if (piVar4 != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x1fc);
    piVar1 = piVar4;
    if (piVar3 != piVar4) {
      do {
        piVar3 = piVar3 + -1;
        iVar2 = *piVar3;
        *piVar3 = 0;
        if (iVar2 != 0) {
          thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y();
          thunk_qNQrlu();
        }
      } while (piVar3 != piVar4);
      piVar1 = *(int **)(param_1 + 0x1f8);
    }
    *(int **)(param_1 + 0x1fc) = piVar4;
    thunk_qNQrlu(piVar1);
  }
  thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1);
  return;
}


// =========================================================================
// Function: MmSDXHiqGLyFpfP_pxTfQf_NCZTXvI_ikZTWWc_agnDlrDObsAgDvHjjRwKuiSeITwbliVKx
// Entry: 0x71ac9e64 | Size: 360 bytes
// =========================================================================

void MmSDXHiqGLyFpfP_pxTfQf_NCZTXvI_ikZTWWc_agnDlrDObsAgDvHjjRwKuiSeITwbliVKx
               (int param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x1f0);
  }
  if (*(int *)(param_2 + 4) != 0 && iVar1 != 0) {
    uVar4 = 0;
    do {
      thunk_UbejjReJOExICxMPgHunTxU_RisfxiNTFuooGAk_bWzaTGRvryHVf
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar4 * 4));
      thunk_UbejjReJOExICxMPgHunTxU_RisfxiNTFuooGAk_bWzaTGRvryHVf
                (*(undefined4 *)(*(int *)(param_1 + 0x204) + uVar4 * 4));
      thunk_SXsPkZFPnqQKIKbSLOeXkyYZRPZmzSTiJIclVPwFirsKiZK_eGinXZtqOzLgVpAyAZHab_bNdvhHCFZAMEGbm
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + uVar4 * 4),param_2);
      thunk_XlcgYDgnUMHWRwfn_ZagIzkRHLAZgmZzuXsQNdYkJXwPJLxKipOfsTcOUf
                (*(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar4 * 4));
      uVar5 = *(undefined8 *)(param_1 + 0x8c);
      iVar1 = *(int *)(*(int *)(param_1 + 0x210) + uVar4 * 4);
      uVar6 = *(undefined8 *)(param_1 + 0x94);
      *(undefined8 *)(iVar1 + 0x24) = *(undefined8 *)(param_1 + 0x84);
      *(undefined8 *)(iVar1 + 0x2c) = uVar5;
      *(undefined8 *)(iVar1 + 0x34) = uVar6;
      uVar5 = *(undefined8 *)(param_1 + 0x8c);
      uVar6 = *(undefined8 *)(param_1 + 0x94);
      *(undefined8 *)(iVar1 + 0xc) = *(undefined8 *)(param_1 + 0x84);
      *(undefined8 *)(iVar1 + 0x14) = uVar5;
      *(undefined8 *)(iVar1 + 0x1c) = uVar6;
      *(undefined8 *)(iVar1 + 0x3c) = *(undefined8 *)(iVar1 + 0xc);
      *(undefined8 *)(iVar1 + 0x44) = *(undefined8 *)(iVar1 + 0x14);
      *(undefined4 *)(iVar1 + 0x160) = 0;
      *(undefined8 *)(iVar1 + 0x4c) = *(undefined8 *)(iVar1 + 0x1c);
      uVar5 = *(undefined8 *)(param_1 + 0x9c);
      puVar2 = *(undefined8 **)(*(int *)(param_1 + 0x21c) + uVar4 * 4);
      *(undefined4 *)((int)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined8 *)((int)puVar2 + 0xc) = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x9c);
      uVar3 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(puVar2 + 1) = uVar3;
      *(undefined4 *)(puVar2 + 4) = uVar3;
      *(undefined4 *)((int)puVar2 + 0x34) = 0;
      puVar2[3] = uVar5;
      *puVar2 = uVar5;
      thunk_VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar4 * 4),
                 *(undefined4 *)(param_1 + 0x84),1);
      thunk_VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA
                (*(undefined4 *)(*(int *)(param_1 + 0x204) + uVar4 * 4),
                 *(undefined4 *)(param_1 + 0x9c),1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1f0));
  }
  iVar1 = 0;
  if (*param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x1f0);
  }
  if (*param_2 != '\0' && iVar1 != 0) {
    uVar4 = 0;
    do {
      thunk_SXsPkZFPnqQKIKbSLOeXkyYZRPZmzSTiJIclVPwFirsKiZK_eGinXZtqOzLgVpAyAZHab_bNdvhHCFZAMEGbm
                (*(undefined4 *)(*(int *)(param_1 + 0x210) + uVar4 * 4),param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1f0));
  }
  return;
}


// =========================================================================
// Function: lboVYBSNrlEaXBkdeOoCLeaLjpCYvIADcyEofMWgyl
// Entry: 0x71ac9fcc | Size: 208 bytes
// =========================================================================

void lboVYBSNrlEaXBkdeOoCLeaLjpCYvIADcyEofMWgyl(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x1f0) != 0) {
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x210) + uVar4 * 4);
      *(undefined8 *)(iVar1 + 0x3c) = *(undefined8 *)(iVar1 + 0xc);
      *(undefined8 *)(iVar1 + 0x44) = *(undefined8 *)(iVar1 + 0x14);
      *(undefined8 *)(iVar1 + 0x4c) = *(undefined8 *)(iVar1 + 0x1c);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(iVar1 + 4);
      *(undefined8 *)(iVar1 + 0x24) = uVar5;
      *(undefined8 *)(iVar1 + 0x2c) = uVar6;
      *(undefined8 *)(iVar1 + 0x34) = uVar7;
      puVar2 = *(undefined8 **)(*(int *)(param_1 + 0x21c) + uVar4 * 4);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + 1);
      puVar2[3] = *puVar2;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)((int)puVar2 + 0x34) = *(undefined4 *)((int)puVar2 + 0x24);
      *(undefined4 *)((int)puVar2 + 0x14) = uVar3;
      *(undefined8 *)((int)puVar2 + 0xc) = uVar5;
      thunk_VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar4 * 4),
                 *(undefined4 *)(param_1 + 0x60),0);
      thunk_VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA
                (*(undefined4 *)(*(int *)(param_1 + 0x204) + uVar4 * 4),
                 *(undefined4 *)(param_1 + 0x78),0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1f0));
  }
  return;
}


// =========================================================================
// Function: _enrS_wyQqKjYqcYFoFNBriLUmsNZhFWYAcBHdkAweXmgqhmOCQaOYetZa_YEfIprieCjCjxZMygqKjUeCOwnADPMBszVhRYbWyVxrvmIRIYzvqvv_oCKejQMON_IYzePSKVsThVhZFtY_TzztmcfgiKgH
// Entry: 0x71aca09c | Size: 2084 bytes
// =========================================================================

void _enrS_wyQqKjYqcYFoFNBriLUmsNZhFWYAcBHdkAweXmgqhmOCQaOYetZa_YEfIprieCjCjxZMygqKjUeCOwnADPMBszVhRYbWyVxrvmIRIYzvqvv_oCKejQMON_IYzePSKVsThVhZFtY_TzztmcfgiKgH
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  uint in_fpscr;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iStack_79c;
  undefined1 auStack_78c [260];
  float afStack_688 [61];
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  float afStack_47c [130];
  float afStack_274 [65];
  float afStack_170 [66];
  
  uVar17 = *(uint *)(**(int **)(param_1 + 0x204) + 0x1c);
  uVar11 = *(uint *)(**(int **)(param_1 + 0x1f8) + 0x1c);
  pfVar6 = afStack_274;
  if (uVar11 == uVar17) {
    thunk_KPTeFpXzTEBlZDvmtiZOdhCWfQvMvLJqTbTsalyyxHJqlXEBqV_IIMFxviotGceJim(param_2);
    iVar7 = *(int *)(param_1 + 0x1f0);
    pfVar6 = afStack_170;
  }
  else {
    if (uVar17 < uVar11) {
      iVar7 = -0x26c;
      uVar22 = uVar17;
      uVar17 = uVar11;
      pfVar12 = afStack_170;
    }
    else {
      iVar7 = -0x168;
      uVar22 = uVar11;
      pfVar12 = pfVar6;
    }
    thunk_PuKPdWqkkGQC_ShNJSneXkuMeZnMwphdxtvFosppPDsLdZkkzEcLNhbHOzSsHYZfkFvBnFk
              (param_2,uVar22,uVar17,&stack0xfffffff8 + iVar7,pfVar12);
    iVar7 = *(int *)(param_1 + 0x1f0);
  }
  if (iVar7 != 0) {
    uVar27 = 0;
    uVar28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar29 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar20 = param_6 + 0x200;
    uVar17 = 0;
    iStack_79c = 0;
    iVar7 = param_6;
    do {
      iVar18 = *(int *)(param_3 + 8);
      thunk_RFGpNaOVrAvYaxNvFFlrwnLFAKfDTzMsnFcfENfwVIjFERIHnxcyMDHRbIEFhKkxPGYoIOP
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar17 * 4),param_2,afStack_688);
      iVar15 = uVar17 * 0x82c + param_6;
      afStack_47c[0] = afStack_688[0];
      afStack_47c[1] = (float)uStack_588;
      iVar8 = 8;
      do {
        puVar16 = (undefined4 *)((int)afStack_47c + iVar8);
        iVar8 = iVar8 + 0x20;
        puVar1 = (undefined4 *)0x380;
        puVar2 = (undefined4 *)0x390;
        lVar21 = 2;
        while( true ) {
          *puVar16 = *puVar1;
          puVar16[1] = *puVar2;
          puVar16 = puVar16 + 2;
          lVar21 = lVar21 + -1;
          if (lVar21 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x388;
        puVar2 = (undefined4 *)0x398;
        lVar21 = 2;
        while( true ) {
          *puVar16 = *puVar1;
          puVar16[1] = *puVar2;
          puVar16 = puVar16 + 2;
          lVar21 = lVar21 + -1;
          if (lVar21 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
      } while (iVar8 != 0x1e8);
      afStack_47c[0x7f] = (float)uStack_488;
      afStack_47c[0x7a] = (float)uStack_594;
      afStack_47c[0x7c] = (float)uStack_590;
      afStack_47c[0x7b] = (float)uStack_490;
      afStack_47c[0x7d] = (float)uStack_48c;
      afStack_47c[0x7e] = (float)uStack_58c;
      thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(param_1,afStack_47c);
      iVar19 = iVar18 + iStack_79c;
      iVar8 = 0;
      do {
        iVar5 = iVar8 + 0x100;
        pfVar12 = (float *)(iVar19 + iVar8);
        pfVar13 = (float *)(iVar20 + iVar8);
        iVar8 = iVar8 + 4;
        *pfVar13 = *pfVar12 + *(float *)((int)afStack_47c + iVar5) * -0.015625;
      } while (iVar8 != 0x100);
      if (param_6 != 0) {
        iVar8 = 0;
        do {
          iVar5 = iVar8 + 0x100;
          pfVar12 = (float *)(iVar7 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar12 = *(float *)((int)afStack_47c + iVar5) * 0.015625;
        } while (iVar8 != 0x100);
      }
      thunk_RFGpNaOVrAvYaxNvFFlrwnLFAKfDTzMsnFcfENfwVIjFERIHnxcyMDHRbIEFhKkxPGYoIOP
                (*(undefined4 *)(*(int *)(param_1 + 0x204) + uVar17 * 4),param_2,afStack_688);
      afStack_47c[1] = (float)uStack_588;
      afStack_47c[0] = afStack_688[0];
      iVar8 = 8;
      do {
        puVar16 = (undefined4 *)((int)afStack_47c + iVar8);
        iVar8 = iVar8 + 0x20;
        puVar1 = (undefined4 *)0x380;
        puVar2 = (undefined4 *)0x390;
        lVar21 = 2;
        while( true ) {
          *puVar16 = *puVar1;
          puVar16[1] = *puVar2;
          puVar16 = puVar16 + 2;
          lVar21 = lVar21 + -1;
          if (lVar21 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar1 = (undefined4 *)0x388;
        puVar2 = (undefined4 *)0x398;
        lVar21 = 2;
        while( true ) {
          *puVar16 = *puVar1;
          puVar16[1] = *puVar2;
          puVar16 = puVar16 + 2;
          lVar21 = lVar21 + -1;
          if (lVar21 == 0) break;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
      } while (iVar8 != 0x1e8);
      afStack_47c[0x7d] = (float)uStack_48c;
      afStack_47c[0x7a] = (float)uStack_594;
      afStack_47c[0x7c] = (float)uStack_590;
      afStack_47c[0x7b] = (float)uStack_490;
      afStack_47c[0x7e] = (float)uStack_58c;
      afStack_47c[0x7f] = (float)uStack_488;
      thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(param_1,afStack_47c);
      iVar8 = 0;
      do {
        iVar5 = iVar8 + 0x100;
        pfVar12 = (float *)(iVar19 + iVar8);
        iVar14 = iVar7 + iVar8;
        iVar8 = iVar8 + 4;
        *(float *)(iVar14 + 0x300) = *pfVar12 + *(float *)((int)afStack_47c + iVar5) * -0.015625;
      } while (iVar8 != 0x100);
      iVar8 = 0x100;
      do {
        pfVar12 = (float *)((int)afStack_47c + iVar8);
        pfVar13 = (float *)(iVar7 + iVar8);
        iVar8 = iVar8 + 4;
        *pfVar13 = *pfVar12 * 0.015625;
      } while (iVar8 != 0x200);
      thunk_ZnlRfgxGcKTQRttmDX_kCmjzPnabWxptlkz_SSytWdPpIBuLgAnYpzkdPYBRvKlFWFZEQioIS
                (iVar15,iVar18 + uVar17 * 0x100,0x40);
      piVar9 = (int *)(*(int *)(param_1 + 0x228) + uVar17 * 0x18);
      fVar24 = *(float *)(iVar15 + 0x818) + (float)piVar9[2];
      fVar23 = *(float *)(iVar15 + 0x820) + (float)piVar9[3];
      iVar8 = piVar9[1] + 1;
      piVar9[1] = iVar8;
      piVar9[2] = (int)fVar24;
      piVar9[3] = (int)fVar23;
      if (iVar8 == *piVar9) {
        fVar25 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
        fVar26 = fVar25 * 200.0 * 200.0 * 64.0;
        uVar11 = in_fpscr & 0xfffffff;
        uVar22 = uVar11 | (uint)(fVar23 < fVar26) << 0x1f | (uint)(fVar23 == fVar26) << 0x1e;
        in_fpscr = uVar22 | (uint)(NAN(fVar23) || NAN(fVar26)) << 0x1c;
        bVar4 = (byte)(uVar22 >> 0x18);
        if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar25 = fVar25 * 7500.0 * 7500.0 * 64.0;
          uVar22 = uVar11 | (uint)(fVar24 < fVar25) << 0x1f | (uint)(fVar24 == fVar25) << 0x1e;
          in_fpscr = uVar22 | (uint)(NAN(fVar24) || NAN(fVar25)) << 0x1c;
          bVar4 = (byte)(uVar22 >> 0x18);
          if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            iVar18 = piVar9[5];
            fVar25 = (float)piVar9[4];
            in_fpscr = uVar11 | (uint)(fVar24 / fVar23 < fVar25) << 0x1f;
            iVar8 = 1;
            if (1 < iVar18) {
              iVar8 = iVar18;
            }
            piVar9[5] = iVar8 + -1;
            if ((!SUB41(in_fpscr >> 0x1f,0)) && (iVar18 < 2)) goto LAB_71aca504;
          }
          else {
            fVar25 = (float)piVar9[4];
            piVar9[5] = 4;
          }
          piVar9[4] = (int)(fVar25 + (fVar24 / fVar23 - fVar25) * 0.1);
        }
LAB_71aca504:
        piVar9[1] = 0;
        piVar9[2] = 0;
        piVar9[3] = 0;
      }
      fVar23 = (float)piVar9[4];
      uVar11 = in_fpscr & 0xfffffff | (uint)(fVar23 < 10.0) << 0x1f | (uint)(fVar23 == 10.0) << 0x1e
      ;
      uVar22 = uVar11 | (uint)NAN(fVar23) << 0x1c;
      bVar4 = (byte)(uVar11 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar22 >> 0x1c) & 1)) {
        fVar24 = 2.0 / SQRT(fVar23);
        thunk_fzjElWIrxjgIYCcQcqgTYUOCEtwCReqQoHvYLnkxvqtL
                  (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar17 * 4),fVar24);
        piVar9 = (int *)(*(int *)(param_1 + 600) + uVar17 * 0xc);
        pfVar13 = (float *)piVar9[1];
        for (pfVar12 = (float *)*piVar9; pfVar12 != pfVar13; pfVar12 = pfVar12 + 1) {
          *pfVar12 = fVar24 * *pfVar12;
        }
        iVar8 = 0;
        do {
          fVar25 = fVar24 * *(float *)(iVar7 + iVar8);
          *(float *)(iVar7 + iVar8) = fVar25;
          pfVar12 = (float *)(iVar19 + iVar8);
          pfVar13 = (float *)(iVar20 + iVar8);
          iVar8 = iVar8 + 4;
          *pfVar13 = *pfVar12 - fVar25;
        } while (iVar8 != 0x100);
        iVar8 = *(int *)(param_1 + 0x228) + uVar17 * 0x18;
        *(undefined4 *)(iVar8 + 4) = uVar27;
        *(undefined4 *)(iVar8 + 8) = uVar28;
        *(undefined4 *)(iVar8 + 0xc) = uVar29;
        *(undefined4 *)(iVar8 + 0x10) = uVar30;
        *(undefined4 *)(iVar8 + 0x14) = 0;
      }
      thunk_lUTnRvERNwYRiVOpqDGQIMVhOSQZzA_VpqbXBJzYvgWltTAWojwcMfh_EXJahLhMgIYBDEVqqwCYTRoHHd_dGipW
                (param_1,iVar15 + 0x200,0x40,1,iVar15 + 0x400);
      thunk_lUTnRvERNwYRiVOpqDGQIMVhOSQZzA_VpqbXBJzYvgWltTAWojwcMfh_EXJahLhMgIYBDEVqqwCYTRoHHd_dGipW
                (param_1,iVar15 + 0x300,0x40,1,afStack_47c);
      iVar8 = -0x104;
      do {
        pfVar12 = (float *)((int)afStack_274 + iVar8);
        fVar24 = *(float *)((int)afStack_47c + iVar8 + 0x104);
        iVar18 = iVar7 + iVar8;
        iVar8 = iVar8 + 4;
        *(float *)(iVar18 + 0x810) = *pfVar12 * *pfVar12 + fVar24 * fVar24;
      } while (iVar8 != 0);
      iVar8 = 0;
      do {
        pfVar12 = (float *)(iVar7 + 0x504 + iVar8);
        iVar18 = iVar7 + iVar8;
        iVar8 = iVar8 + 4;
        fVar24 = *pfVar12;
        fVar25 = *(float *)(iVar18 + 0x400);
        pfVar12[0x41] = fVar24 * fVar24 + fVar25 * fVar25;
      } while (iVar8 != 0x104);
      uVar11 = uVar22 & 0xfffffff | (uint)(fVar23 < 10.0) << 0x1f | (uint)(fVar23 == 10.0) << 0x1e;
      uVar22 = uVar11 | (uint)NAN(fVar23) << 0x1c;
      bVar4 = (byte)(uVar11 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar22 >> 0x1c) & 1)) {
        cVar3 = *(char *)(param_1 + 500);
        iVar8 = *(int *)(*(int *)(param_1 + 0x240) + uVar17 * 4);
        thunk_BRvvOUkpCNBwQmZmjdnxCOJxyoSSQPulfDEuJzMFcIAjBBlXCmpZ_qO__CfhiKVLvZMNhnXnBQNfFMKYftKlgAQwKtbxEGSKc_OtDVJXXnevhQiKWSBnrgfywZDPnwakMRhpvuB
                  (param_1 + 8,*(int *)(param_1 + 0x24c) + uVar17 * 0xc,auStack_78c,0x41);
        thunk_ZDVIceFAmDegycxfAzxqymEudEtwBAZGiUhrxulEhnxIIN__mBVUAohjzQpQBXtmZASPCMmjyKJgqoNjQvgQPYZOxCJBsg_FEJSykUOWV_IEZsPHqJBJAX_mUnZGSOOctSxZ_kxcBHffjgvqviGVhksIyshQpZEDgxPpNdy
                  (*(undefined4 *)(*(int *)(param_1 + 0x210) + uVar17 * 4),afStack_170,param_4,
                   iVar15,auStack_78c,0x41,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1f8) + uVar17 * 4) + 0x1c),
                   *(undefined1 *)(param_5 + 0x634),0 < iVar8 && cVar3 != '\0',afStack_688);
      }
      else {
        imp___aeabi_memclr8(afStack_688,0x208);
      }
      thunk_yyfjjkOnqeJbxTnNxxNMhWeNfMvVDtmFQaF_VQQVTYOxpVrWWCwPxkWdZfXKghXrbIICxQNVTz_kfhjkkvRejjKOxWUYIW_WTuQuuFNFycAmrC
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar17 * 4),param_2,afStack_688,
                 *(int *)(param_1 + 600) + uVar17 * 0xc);
      thunk_ZMimSsXuwEbYbnWeDjvdFoXXWAZVWtZA_eLlypwfrVrZwNCualNHfPKahGxBLbmjRhfEgqiyelyeuqddmsiWPxOVTIW_LtoLRPsMPjWfOlqFIuXvFjdYN
                (*(undefined4 *)(*(int *)(param_1 + 0x1f8) + uVar17 * 4),
                 *(int *)(param_1 + 0x24c) + uVar17 * 0xc);
      iVar8 = *(int *)(param_1 + 0x234);
      in_fpscr = uVar22 & 0xfffffff |
                 (uint)(*(float *)(iVar15 + 0x818) < *(float *)(iVar15 + 0x81c)) << 0x1f;
      if (SUB41(in_fpscr >> 0x1f,0)) {
        uVar11 = *(int *)(iVar8 + uVar17 * 4) + 1;
        *(uint *)(iVar8 + uVar17 * 4) = uVar11;
        if (uVar11 < 5) goto LAB_71aca7f0;
        iVar18 = *(int *)(*(int *)(param_1 + 0x1f8) + uVar17 * 4);
        uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x204) + uVar17 * 4);
        *(undefined4 *)(iVar8 + uVar17 * 4) = 0;
        thunk_srDjQURlrinkjiwFMoVzylAPXNyPdMhARSIebHB_BRQ_QcjZZHAVzB_L_MqVvlkruBcfiQWbgBpbrddiCskwLXKgmkXqwmmwKUMwFZtBnjtZmwHf
                  (uVar10,*(undefined4 *)(iVar18 + 0x1c),iVar18 + 0x2c);
        thunk_qRmPDgFlmhsysIByjBzdvYeBRAVMAQQXIKCdItjpfVgsnnZMOLTxWvVIAdDWVeVXRcLFzWsEHwowExBkpKuRLDzeEAugjXkNMhNkQQtRMggjTNnhJxLZBg
                  (*(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar17 * 4),pfVar6,param_4,
                   iVar15 + 0x400,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x204) + uVar17 * 4) + 0x1c),
                   *(undefined1 *)(param_5 + 0x634),afStack_688);
        *(undefined4 *)(*(int *)(param_1 + 0x240) + uVar17 * 4) = *(undefined4 *)(param_1 + 0xb0);
      }
      else {
        *(undefined4 *)(iVar8 + uVar17 * 4) = 0;
LAB_71aca7f0:
        thunk_qRmPDgFlmhsysIByjBzdvYeBRAVMAQQXIKCdItjpfVgsnnZMOLTxWvVIAdDWVeVXRcLFzWsEHwowExBkpKuRLDzeEAugjXkNMhNkQQtRMggjTNnhJxLZBg
                  (*(undefined4 *)(*(int *)(param_1 + 0x21c) + uVar17 * 4),pfVar6,param_4,
                   afStack_47c,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x204) + uVar17 * 4) + 0x1c),
                   *(undefined1 *)(param_5 + 0x634),afStack_688);
        iVar8 = *(int *)(*(int *)(param_1 + 0x240) + uVar17 * 4);
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        *(int *)(*(int *)(param_1 + 0x240) + uVar17 * 4) = iVar8 + -1;
      }
      thunk_mjAzslgLnCGDCZgdemMGxIoKDUQqxRaOkatlticWiZYqyvBjaO_eaVUwJ_FIPlRKNPewYk
                (*(undefined4 *)(*(int *)(param_1 + 0x204) + uVar17 * 4),param_2,afStack_688);
      iVar8 = 0;
      if (uVar17 == 0) {
        do {
          pfVar12 = (float *)(iVar20 + iVar8);
          iVar8 = iVar8 + 4;
          fVar23 = *pfVar12;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar23 == -32768.0) << 0x1e |
                     (uint)(-32768.0 <= fVar23) << 0x1d;
          if (!NAN(fVar23)) {
            fVar23 = 32767.0;
          }
          bVar4 = (byte)(in_fpscr >> 0x18);
          if (!(bool)(bVar4 >> 5 & 1) || (bool)(bVar4 >> 6)) {
            fVar23 = -32768.0;
          }
          *pfVar12 = fVar23;
        } while (iVar8 != 0x100);
      }
      else {
        do {
          pfVar12 = (float *)(iVar20 + iVar8);
          iVar8 = iVar8 + 4;
          fVar23 = *pfVar12;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar23 == -32768.0) << 0x1e |
                     (uint)(-32768.0 <= fVar23) << 0x1d;
          if (!NAN(fVar23)) {
            fVar23 = 32767.0;
          }
          bVar4 = (byte)(in_fpscr >> 0x18);
          if (!(bool)(bVar4 >> 5 & 1) || (bool)(bVar4 >> 6)) {
            fVar23 = -32768.0;
          }
          *pfVar12 = fVar23;
        } while (iVar8 != 0x100);
      }
      iVar7 = iVar7 + 0x82c;
      iVar20 = iVar20 + 0x82c;
      uVar17 = uVar17 + 1;
      iStack_79c = iStack_79c + 0x100;
    } while (uVar17 < *(uint *)(param_1 + 0x1f0));
  }
  return;
}


// =========================================================================
// Function: xGasSIZyjFwVUKoVZPnZgzJUJPvUeYYJeBkWJXNNKsUNwjvgsJQytzPNgObPopKNBAOvooFuhcpzjbejnUDX
// Entry: 0x71aca8e0 | Size: 244 bytes
// =========================================================================

void xGasSIZyjFwVUKoVZPnZgzJUJPvUeYYJeBkWJXNNKsUNwjvgsJQytzPNgObPopKNBAOvooFuhcpzjbejnUDX
               (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_2 + 0x818) + (float)param_1[2];
  fVar3 = *(float *)(param_2 + 0x820) + (float)param_1[3];
  iVar1 = param_1[1] + 1;
  param_1[1] = iVar1;
  param_1[2] = (int)fVar4;
  param_1[3] = (int)fVar3;
  if (iVar1 != *param_1) {
    return;
  }
  fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (fVar5 * 200.0 * 200.0 * 64.0 < fVar3) {
    if (fVar4 <= fVar5 * 7500.0 * 7500.0 * 64.0) {
      iVar2 = param_1[5];
      fVar5 = (float)param_1[4];
      iVar1 = iVar2;
      if (iVar2 < 2) {
        iVar1 = 1;
      }
      param_1[5] = iVar1 + -1;
      if ((fVar5 <= fVar4 / fVar3) && (iVar2 < 2)) goto LAB_71aca9c0;
    }
    else {
      fVar5 = (float)param_1[4];
      param_1[5] = 4;
    }
    param_1[4] = (int)(fVar5 + (fVar4 / fVar3 - fVar5) * 0.1);
  }
LAB_71aca9c0:
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: WwZkTRxaEhMPsPKMHucmxHKwmNDpKzrdDKOHkRVKaPzElVkaGEBINJqiDabk
// Entry: 0x71aca9e4 | Size: 24 bytes
// =========================================================================

void WwZkTRxaEhMPsPKMHucmxHKwmNDpKzrdDKOHkRVKaPzElVkaGEBINJqiDabk(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


// =========================================================================
// Function: QlGakKQmLGWYQseCzIXbiXnToTylDxCsaHjhdjZmcaJfaZmtFUkZSSKdpkBvMqgoRGqblqqiEgrahAw
// Entry: 0x71aca9fc | Size: 4 bytes
// =========================================================================

void QlGakKQmLGWYQseCzIXbiXnToTylDxCsaHjhdjZmcaJfaZmtFUkZSSKdpkBvMqgoRGqblqqiEgrahAw(void)

{
  return;
}


// =========================================================================
// Function: FUN_71acb754
// Entry: 0x71acb754 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71acb754(undefined4 *param_1)

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
// Function: FUN_71acb80c
// Entry: 0x71acb80c | Size: 100 bytes
// =========================================================================

undefined4 * FUN_71acb80c(undefined4 *param_1)

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
// Function: FUN_71acb8c0
// Entry: 0x71acb8c0 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71acb8c0(undefined4 *param_1)

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
          thunk_nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw();
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
// Function: FUN_71acb994
// Entry: 0x71acb994 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71acb994(undefined4 *param_1)

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
          thunk_ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y();
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
// Function: FUN_71acbb58
// Entry: 0x71acbb58 | Size: 20 bytes
// =========================================================================

void FUN_71acbb58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71acbd80
// Entry: 0x71acbd80 | Size: 20 bytes
// =========================================================================

void FUN_71acbd80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: lsEDeUfNh_yvCMNhDEhMYFRPLaLukgatGhlYMNmMtfgYUln_ejdqTjJ_WnoiIHKIsYLobNvTo_kJpLitHCwfCxDYAFxC_WqnHxnzckKCvwkdXCANCxixgPDWdcPivGHDWKVGMjPAGszscECvAVXuQyM
// Entry: 0x71acbde8 | Size: 240 bytes
// =========================================================================

void lsEDeUfNh_yvCMNhDEhMYFRPLaLukgatGhlYMNmMtfgYUln_ejdqTjJ_WnoiIHKIsYLobNvTo_kJpLitHCwfCxDYAFxC_WqnHxnzckKCvwkdXCANCxixgPDWdcPivGHDWKVGMjPAGszscECvAVXuQyM
               (int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *extraout_r2;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  piVar7 = (int *)*param_3;
  piVar2 = (int *)param_3[1];
  piVar1 = param_1;
  if (piVar7 != piVar2) {
    uVar11 = imp___aeabi_memclr4(piVar7,((uint)((int)piVar2 + (-0x104 - (int)piVar7)) / 0x104) *
                                        0x104 + 0x104);
    piVar2 = (int *)((ulonglong)uVar11 >> 0x20);
    piVar1 = (int *)uVar11;
    param_3 = extraout_r2;
  }
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)*param_2;
    param_3 = (int *)*piVar1;
    piVar2 = (int *)piVar1[1];
  }
  if (param_1 != (int *)0x0 && piVar2 != param_3) {
    uVar3 = ((int)piVar2 - (int)param_3 >> 3) * -0x3f03f03f;
    piVar2 = (int *)0x0;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      uVar6 = 0;
      iVar4 = piVar1[(int)piVar2 * 3];
      do {
        iVar5 = 0;
        do {
          fVar10 = ((float *)(iVar4 + iVar5))[0x41];
          fVar9 = *(float *)(iVar4 + iVar5);
          pfVar8 = (float *)((int)piVar7 + iVar5);
          iVar5 = iVar5 + 4;
          fVar10 = fVar10 * fVar10 + fVar9 * fVar9;
          fVar9 = *pfVar8;
          if (fVar9 < fVar10) {
            fVar9 = fVar10;
          }
          *pfVar8 = fVar9;
        } while (iVar5 != 0x104);
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 0x208;
      } while (uVar6 != uVar3);
      piVar2 = (int *)((int)piVar2 + 1);
      piVar7 = (int *)((int)piVar7 + 0x104);
    } while (piVar2 != param_1);
  }
  return;
}


// =========================================================================
// Function: RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
// Entry: 0x71acbed8 | Size: 320 bytes
// =========================================================================

void RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
               (int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  uint unaff_lr;
  bool bVar15;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(iVar1 + 4);
  iVar7 = *(int *)(iVar1 + 8);
  iVar14 = 0;
  if (iVar7 != iVar5) {
    iVar14 = iVar5;
  }
  bVar15 = param_3 == 0;
  if (!bVar15) {
    unaff_lr = *(uint *)(iVar1 + 0x14);
    piVar9 = (int *)(iVar14 + unaff_lr * 0xc);
    iVar1 = piVar9[1] - *piVar9;
    bVar15 = iVar1 == 0;
  }
  if (!bVar15) {
    uVar2 = (iVar1 >> 3) * -0x3f03f03f;
    iVar1 = *param_4;
    iVar13 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      iVar10 = *(int *)(iVar14 + unaff_lr * 0xc) + 0x104;
      uVar6 = 0;
      iVar11 = *(int *)(iVar1 + iVar13 * 0xc) + 0x104;
      do {
        iVar4 = 0;
        do {
          pfVar8 = (float *)(param_2 + 0x104 + iVar4);
          pfVar12 = (float *)(iVar10 + iVar4);
          pfVar3 = (float *)(iVar11 + iVar4);
          iVar4 = iVar4 + 4;
          pfVar3[-0x41] = pfVar3[-0x41] + *pfVar12 * *pfVar8 + pfVar12[-0x41] * pfVar8[-0x41];
          *pfVar3 = *pfVar3 + (pfVar12[-0x41] * *pfVar8 - pfVar8[-0x41] * *pfVar12);
        } while (iVar4 != 0x104);
        uVar6 = uVar6 + 1;
        iVar10 = iVar10 + 0x208;
        iVar11 = iVar11 + 0x208;
      } while (uVar6 != uVar2);
      iVar13 = iVar13 + 1;
      uVar6 = 0;
      if (unaff_lr < (iVar7 - iVar5 >> 2) * -0x55555555 - 1U) {
        uVar6 = unaff_lr + 1;
      }
      unaff_lr = uVar6;
    } while (iVar13 != param_3);
  }
  return;
}


// =========================================================================
// Function: OFnZgBzMP_RXUqZuszQdYCWFiNSoWhurrvmcwuGNEegobzXugHMflXuodqEF_jZxktaIbimscMYjwAezgZZMLHCCewCRxFhEhUXsozbXLtighncDJONEXteEYMovq
// Entry: 0x71acc018 | Size: 352 bytes
// =========================================================================

void OFnZgBzMP_RXUqZuszQdYCWFiNSoWhurrvmcwuGNEegobzXugHMflXuodqEF_jZxktaIbimscMYjwAezgZZMLHCCewCRxFhEhUXsozbXLtighncDJONEXteEYMovq
               (int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int extraout_r2;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  uint unaff_r10;
  float *pfVar14;
  bool bVar15;
  
  imp___aeabi_memclr4(param_4,0x208);
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar3 + 4);
  iVar10 = *(int *)(iVar3 + 8);
  iVar13 = 0;
  if (iVar10 != iVar1) {
    iVar13 = iVar1;
  }
  bVar15 = param_2 == 0;
  iVar5 = extraout_r2;
  if (!bVar15) {
    unaff_r10 = *(uint *)(iVar3 + 0x14);
    piVar7 = (int *)(iVar13 + unaff_r10 * 0xc);
    iVar5 = piVar7[1] - *piVar7;
    bVar15 = iVar5 == 0;
  }
  if (!bVar15) {
    uVar6 = (iVar5 >> 3) * -0x3f03f03f;
    iVar3 = *param_3;
    iVar5 = 0;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    do {
      uVar9 = 0;
      iVar11 = *(int *)(iVar13 + unaff_r10 * 0xc) + 0x104;
      iVar8 = *(int *)(iVar3 + iVar5 * 0xc) + 0x104;
      do {
        iVar2 = 0;
        do {
          pfVar4 = (float *)(iVar8 + iVar2);
          pfVar12 = (float *)(iVar11 + iVar2);
          pfVar14 = (float *)(param_4 + 0x104 + iVar2);
          iVar2 = iVar2 + 4;
          pfVar14[-0x41] = pfVar14[-0x41] + (pfVar12[-0x41] * pfVar4[-0x41] - *pfVar4 * *pfVar12);
          *pfVar14 = *pfVar14 + *pfVar12 * pfVar4[-0x41] + pfVar12[-0x41] * *pfVar4;
        } while (iVar2 != 0x104);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x208;
        iVar11 = iVar11 + 0x208;
      } while (uVar9 != uVar6);
      uVar9 = 0;
      if (unaff_r10 < (iVar10 - iVar1 >> 2) * -0x55555555 - 1U) {
        uVar9 = unaff_r10 + 1;
      }
      iVar5 = iVar5 + 1;
      unaff_r10 = uVar9;
    } while (iVar5 != param_2);
  }
  return;
}


// =========================================================================
// Function: XYqWzteDWM_RS_HyQs_wAVTZaAExqPmbwFSvIJiKGCPMPvazrrxO_SFWhTZlAswvQDmMjnoJhr_NCG
// Entry: 0x71acc178 | Size: 528 bytes
// =========================================================================

undefined4 *
XYqWzteDWM_RS_HyQs_wAVTZaAExqPmbwFSvIJiKGCPMPvazrrxO_SFWhTZlAswvQDmMjnoJhr_NCG
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
          ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  *param_1 = param_7;
  thunk_WcWZMFyJwpTTVYYbNvFKVQ(param_1 + 1);
  param_1[7] = param_3;
  param_1[8] = param_3;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[2] = param_6;
  param_1[3] = param_5;
  param_1[4] = param_2;
  param_1[5] = param_4;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  if (param_5 != 0) {
    if (0x7e07e0 < param_5) {
      FUN_71abf9ac(&iStack_30);
      if (iStack_30 != 0) {
        iStack_2c = iStack_30;
        thunk_qNQrlu();
      }
      thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1 + 1);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = thunk_MwhHq(param_5 * 0x208);
    iStack_28 = iVar1 + param_5 * 0x208;
    iVar6 = ((param_5 * 0x208 - 0x208) / 0x208) * 0x208 + 0x208;
    iStack_30 = iVar1;
    imp___aeabi_memclr4(iVar1,iVar6);
    iStack_2c = iVar1 + iVar6;
  }
  piVar8 = param_1 + 0xb;
  FUN_71abf6ac(piVar8,param_2,&iStack_30);
  if (iStack_30 != 0) {
    iStack_2c = iStack_30;
    thunk_qNQrlu();
  }
  iVar1 = param_1[4];
  fVar10 = (float)VectorSignedToFloat(param_1[5],(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = 0;
  uVar4 = 0;
  param_1[0xe] = 0;
  param_1[6] = 1.0 / fVar10;
  if (iVar1 != 0) {
    piVar3 = (int *)*piVar8;
    iVar7 = 0;
    iVar6 = *piVar3;
    do {
      if (piVar3[1] != iVar6) {
        iVar9 = 0;
        uVar2 = 0;
        do {
          imp___aeabi_memclr4(piVar3[iVar7 * 3] + iVar9,0x208);
          piVar3 = (int *)*piVar8;
          iVar9 = iVar9 + 0x208;
          uVar2 = uVar2 + 1;
          iVar6 = *piVar3;
        } while (uVar2 < (uint)((piVar3[1] - iVar6 >> 3) * -0x3f03f03f));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar1);
    uVar4 = param_1[4];
    uVar2 = param_1[0xe];
  }
  param_1[10] = 0;
  uVar5 = param_1[7];
  if (uVar4 < (uint)param_1[7]) {
    uVar5 = uVar4;
  }
  param_1[7] = uVar5;
  if (uVar5 - 1 < uVar2) {
    uVar2 = uVar5 - 1;
  }
  param_1[8] = uVar5;
  param_1[0xe] = uVar2;
  param_1[9] = uVar5;
  return param_1;
}


// =========================================================================
// Function: VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA
// Entry: 0x71acc388 | Size: 220 bytes
// =========================================================================

void VGZOGehekJuOafHaOUXlTxLmenJNkxVmaoIjhktfxWHs_RQbdRA(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 0x10) < param_2) {
    param_2 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x20) = param_2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x14);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x24) = param_2;
  *(uint *)(param_1 + 0x1c) = param_2;
  if (uVar4 < param_2) {
    piVar1 = *(int **)(param_1 + 0x2c);
    iVar2 = *piVar1;
    do {
      if (piVar1[1] != iVar2) {
        iVar3 = 0;
        uVar5 = 0;
        do {
          imp___aeabi_memclr4(piVar1[uVar4 * 3] + iVar3,0x208);
          piVar1 = *(int **)(param_1 + 0x2c);
          iVar3 = iVar3 + 0x208;
          uVar5 = uVar5 + 1;
          iVar2 = *piVar1;
        } while (uVar5 < (uint)((piVar1[1] - iVar2 >> 3) * -0x3f03f03f));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_2);
    param_2 = *(uint *)(param_1 + 0x1c);
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  if (param_2 - 1 < *(uint *)(param_1 + 0x38)) {
    uVar4 = param_2 - 1;
  }
  *(uint *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


// =========================================================================
// Function: ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y
// Entry: 0x71acc464 | Size: 112 bytes
// =========================================================================

int ZlejAdYzkeqmaLokbIQZWtHLPSSrwTY_Y(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x30);
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
      piVar1 = *(int **)(param_1 + 0x2c);
    }
    *(int **)(param_1 + 0x30) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1 + 4);
  return param_1;
}


// =========================================================================
// Function: UbejjReJOExICxMPgHunTxU_RisfxiNTFuooGAk_bWzaTGRvryHVf
// Entry: 0x71acc4d4 | Size: 144 bytes
// =========================================================================

void UbejjReJOExICxMPgHunTxU_RisfxiNTFuooGAk_bWzaTGRvryHVf(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x1c);
  if (uVar4 < uVar6) {
    piVar1 = *(int **)(param_1 + 0x2c);
    iVar2 = *piVar1;
    do {
      if (piVar1[1] != iVar2) {
        iVar3 = 0;
        uVar5 = 0;
        do {
          imp___aeabi_memclr4(piVar1[uVar4 * 3] + iVar3,0x208);
          piVar1 = *(int **)(param_1 + 0x2c);
          iVar3 = iVar3 + 0x208;
          uVar5 = uVar5 + 1;
          iVar2 = *piVar1;
        } while (uVar5 < (uint)((piVar1[1] - iVar2 >> 3) * -0x3f03f03f));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}


// =========================================================================
// Function: VzzYyPcGaEfeJuFKGeHviDOkLmIvUShxrVMNtAHuJYf
// Entry: 0x71acc564 | Size: 264 bytes
// =========================================================================

void VzzYyPcGaEfeJuFKGeHviDOkLmIvUShxrVMNtAHuJYf(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar7 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = uVar7;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) + -1;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(int *)(param_1 + 0x28) = iVar1;
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = *(float *)(param_1 + 0x18) * fVar6;
    fVar8 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (1.0 - fVar6) * fVar8 + fVar9 * fVar6;
    uVar7 = (uint)(0.0 < fVar6) * (int)fVar6;
    uVar5 = *(uint *)(param_1 + 0x38);
    if (uVar7 - 1 < *(uint *)(param_1 + 0x38)) {
      uVar5 = uVar7 - 1;
    }
    *(uint *)(param_1 + 0x38) = uVar5;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  if (uVar3 < uVar7) {
    piVar2 = *(int **)(param_1 + 0x2c);
    iVar1 = *piVar2;
    do {
      if (piVar2[1] != iVar1) {
        iVar4 = 0;
        uVar5 = 0;
        do {
          imp___aeabi_memclr4(piVar2[uVar3 * 3] + iVar4,0x208);
          piVar2 = *(int **)(param_1 + 0x2c);
          iVar4 = iVar4 + 0x208;
          uVar5 = uVar5 + 1;
          iVar1 = *piVar2;
        } while (uVar5 < (uint)((piVar2[1] - iVar1 >> 3) * -0x3f03f03f));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar7);
  }
  return;
}


// =========================================================================
// Function: RFGpNaOVrAvYaxNvFFlrwnLFAKfDTzMsnFcfENfwVIjFERIHnxcyMDHRbIEFhKkxPGYoIOP
// Entry: 0x71acc66c | Size: 28 bytes
// =========================================================================

void RFGpNaOVrAvYaxNvFFlrwnLFAKfDTzMsnFcfENfwVIjFERIHnxcyMDHRbIEFhKkxPGYoIOP
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_OFnZgBzMP_RXUqZuszQdYCWFiNSoWhurrvmcwuGNEegobzXugHMflXuodqEF_jZxktaIbimscMYjwAezgZZMLHCCewCRxFhEhUXsozbXLtighncDJONEXteEYMovq
            (param_2,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x2c,param_3);
  return;
}


// =========================================================================
// Function: mjAzslgLnCGDCZgdemMGxIoKDUQqxRaOkatlticWiZYqyvBjaO_eaVUwJ_FIPlRKNPewYk
// Entry: 0x71acc688 | Size: 332 bytes
// =========================================================================

void mjAzslgLnCGDCZgdemMGxIoKDUQqxRaOkatlticWiZYqyvBjaO_eaVUwJ_FIPlRKNPewYk
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar7 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = uVar7;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) + -1;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(int *)(param_1 + 0x28) = iVar1;
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = *(float *)(param_1 + 0x18) * fVar6;
    fVar8 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (1.0 - fVar6) * fVar8 + fVar9 * fVar6;
    uVar7 = (uint)(0.0 < fVar6) * (int)fVar6;
    uVar5 = *(uint *)(param_1 + 0x38);
    if (uVar7 - 1 < *(uint *)(param_1 + 0x38)) {
      uVar5 = uVar7 - 1;
    }
    *(uint *)(param_1 + 0x38) = uVar5;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  if (uVar3 < uVar7) {
    piVar2 = *(int **)(param_1 + 0x2c);
    iVar1 = *piVar2;
    do {
      if (piVar2[1] != iVar1) {
        iVar4 = 0;
        uVar5 = 0;
        do {
          imp___aeabi_memclr4(piVar2[uVar3 * 3] + iVar4,0x208);
          piVar2 = *(int **)(param_1 + 0x2c);
          iVar4 = iVar4 + 0x208;
          uVar5 = uVar5 + 1;
          iVar1 = *piVar2;
        } while (uVar5 < (uint)((piVar2[1] - iVar1 >> 3) * -0x3f03f03f));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar7);
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  thunk_RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
            (param_2,param_3,uVar7,param_1 + 0x2c);
  thunk_Tc_QpmbrtznweQJSLiGHiwtDIm_UxTFS_IBea_hYZ(param_1);
  return;
}


// =========================================================================
// Function: NZ_gpNpOAmhXrudgSgrWleJIwIzwMQvLxJRuhmXcXIIVyvYmFEezK_DfiXqNhOtBJDmlJNO_eXFPDTjQZjkx
// Entry: 0x71acc7d4 | Size: 324 bytes
// =========================================================================

void NZ_gpNpOAmhXrudgSgrWleJIwIzwMQvLxJRuhmXcXIIVyvYmFEezK_DfiXqNhOtBJDmlJNO_eXFPDTjQZjkx
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar7 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = uVar7;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) + -1;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(int *)(param_1 + 0x28) = iVar1;
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = *(float *)(param_1 + 0x18) * fVar6;
    fVar8 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (1.0 - fVar6) * fVar8 + fVar9 * fVar6;
    uVar7 = (uint)(0.0 < fVar6) * (int)fVar6;
    uVar5 = *(uint *)(param_1 + 0x38);
    if (uVar7 - 1 < *(uint *)(param_1 + 0x38)) {
      uVar5 = uVar7 - 1;
    }
    *(uint *)(param_1 + 0x38) = uVar5;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  if (uVar3 < uVar7) {
    piVar2 = *(int **)(param_1 + 0x2c);
    iVar1 = *piVar2;
    do {
      if (piVar2[1] != iVar1) {
        iVar4 = 0;
        uVar5 = 0;
        do {
          imp___aeabi_memclr4(piVar2[uVar3 * 3] + iVar4,0x208);
          piVar2 = *(int **)(param_1 + 0x2c);
          iVar4 = iVar4 + 0x208;
          uVar5 = uVar5 + 1;
          iVar1 = *piVar2;
        } while (uVar5 < (uint)((piVar2[1] - iVar1 >> 3) * -0x3f03f03f));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar7);
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  thunk_RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
            (param_2,param_3,uVar7,param_1 + 0x2c);
  return;
}


// =========================================================================
// Function: Tc_QpmbrtznweQJSLiGHiwtDIm_UxTFS_IBea_hYZ
// Entry: 0x71acc918 | Size: 1048 bytes
// =========================================================================

void Tc_QpmbrtznweQJSLiGHiwtDIm_UxTFS_IBea_hYZ(int param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int iVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  bool bVar23;
  undefined4 *puVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_2b0 [4];
  int iStack_2ac;
  undefined1 *puStack_2a8;
  uint uStack_2a4;
  undefined1 *puStack_2a0;
  undefined1 *puStack_29c;
  undefined1 *puStack_298;
  undefined1 *puStack_294;
  undefined1 *puStack_290;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  undefined1 *puStack_284;
  undefined1 *puStack_280;
  undefined1 *puStack_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_25c;
  int iStack_244;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [256];
  undefined1 auStack_40 [28];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar21 = auStack_2b0;
    pauVar15 = (undefined1 (*) [16])auStack_240;
    iVar20 = 0x108;
    puStack_268 = auStack_230;
    puStack_26c = auStack_150;
    puStack_270 = auStack_160;
    puStack_274 = auStack_170;
    puStack_278 = auStack_180;
    puStack_27c = auStack_190;
    puStack_280 = auStack_1a0;
    puStack_284 = auStack_1b0;
    puStack_288 = auStack_1c0;
    puStack_28c = auStack_1d0;
    puStack_290 = auStack_1e0;
    puStack_294 = auStack_1f0;
    puStack_298 = auStack_200;
    puStack_2a0 = auStack_220;
    uStack_2a4 = (uint)pauVar15 | 4;
    puStack_25c = auStack_40;
    puStack_260 = auStack_238;
    puStack_2a8 = auStack_140;
    iVar5 = param_1 + 4;
    auVar26._8_8_ = 0x3c8000003c800000;
    auVar26._0_8_ = 0x3c8000003c800000;
    iVar22 = 0x104;
    iVar17 = 0;
    uVar19 = 0;
    puStack_29c = auStack_210;
    iStack_244 = param_1;
    iStack_2ac = iVar5;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x38) * 0xc);
      puVar6 = (undefined4 *)(iVar1 + uVar19 * 0x208);
      *(undefined4 *)(puVar21 + 0x70) = *puVar6;
      puVar7 = puVar6 + 0x81;
      *(undefined4 *)(puVar21 + 0x74) = puVar6[0x40];
      uVar12 = uVar19 * 0x208 | 4;
      puVar6 = *(undefined4 **)(puVar21 + 0x50);
      *(uint *)(puVar21 + 0x58) = uVar12;
      bVar23 = puVar6 < puVar7;
      if (bVar23) {
        puVar6 = *(undefined4 **)(puVar21 + 0x54);
        puVar7 = (undefined4 *)(iVar1 + uVar12);
      }
      if (bVar23 && puVar7 < puVar6) {
        iVar10 = 1;
        iVar8 = 2;
      }
      else {
        iVar10 = 8;
        do {
          puVar24 = (undefined4 *)(*pauVar15 + iVar10);
          iVar10 = iVar10 + 0x20;
          puVar7 = (undefined4 *)0x380;
          puVar6 = (undefined4 *)0x390;
          lVar25 = 2;
          while( true ) {
            *puVar24 = *puVar7;
            puVar24[1] = *puVar6;
            puVar24 = puVar24 + 2;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = (undefined4 *)0x388;
          puVar6 = (undefined4 *)0x398;
          lVar25 = 2;
          while( true ) {
            *puVar24 = *puVar7;
            puVar24[1] = *puVar6;
            puVar24 = puVar24 + 2;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
        } while (iVar10 != 0x1e8);
        iVar10 = 0x3d;
        iVar8 = 0x7a;
      }
      *(uint *)(puVar21 + 0x4c) = uVar19 * 0x208;
      iVar8 = iVar8 * 4 + 4;
      iVar10 = iVar10 << 2;
      *(int *)(puVar21 + 100) = iVar22;
      *(int *)(puVar21 + 0x68) = iVar20;
      *(uint *)(puVar21 + 0x5c) = uVar19 * 0x41;
      *(int *)(puVar21 + 0x60) = iVar17;
      do {
        puVar7 = (undefined4 *)(iVar1 + iVar17 + iVar10);
        iVar10 = iVar10 + 4;
        *(undefined4 *)(pauVar15[-1] + iVar8 + 0xc) = *puVar7;
        *(undefined4 *)(*pauVar15 + iVar8) = puVar7[0x41];
        iVar8 = iVar8 + 8;
      } while (iVar10 != 0x100);
      thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(iVar5,pauVar15);
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x48);
      pauVar18 = *(undefined1 (**) [16])(puVar21 + 0x14);
      auVar27 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      auVar28 = *pauVar18;
      auVar31 = FloatVectorMult(*pauVar15,auVar26,2,0x20);
      pauVar11 = *(undefined1 (**) [16])(puVar21 + 0x10);
      *(longlong *)*pauVar2 = auVar27._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar27._8_8_;
      auVar28 = FloatVectorMult(auVar28,auVar26,2,0x20);
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x28);
      auVar27 = FloatVectorMult(*pauVar11,auVar26,2,0x20);
      auVar29 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar18 = auVar28._0_8_;
      *(longlong *)(*pauVar18 + 8) = auVar28._8_8_;
      pauVar18 = *(undefined1 (**) [16])(puVar21 + 0x2c);
      pauVar16 = *(undefined1 (**) [16])(puVar21 + 0x1c);
      pauVar14 = *(undefined1 (**) [16])(puVar21 + 0x18);
      *(longlong *)*pauVar2 = auVar29._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar29._8_8_;
      *(longlong *)*pauVar15 = auVar31._0_8_;
      *(longlong *)(*pauVar15 + 8) = auVar31._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x30);
      pauVar13 = *(undefined1 (**) [16])(puVar21 + 0x20);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar11 = auVar27._0_8_;
      *(longlong *)(*pauVar11 + 8) = auVar27._8_8_;
      pauVar11 = *(undefined1 (**) [16])(puVar21 + 0x24);
      auVar29 = FloatVectorMult(*pauVar18,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x34);
      auVar27 = FloatVectorMult(*pauVar16,auVar26,2,0x20);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      auVar31 = FloatVectorMult(*pauVar14,auVar26,2,0x20);
      auVar32 = FloatVectorMult(*pauVar13,auVar26,2,0x20);
      auVar30 = FloatVectorMult(*pauVar11,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x38);
      *(longlong *)*pauVar18 = auVar29._0_8_;
      *(longlong *)(*pauVar18 + 8) = auVar29._8_8_;
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar14 = auVar31._0_8_;
      *(longlong *)(*pauVar14 + 8) = auVar31._8_8_;
      *(longlong *)*pauVar16 = auVar27._0_8_;
      *(longlong *)(*pauVar16 + 8) = auVar27._8_8_;
      *(longlong *)*pauVar13 = auVar32._0_8_;
      *(longlong *)(*pauVar13 + 8) = auVar32._8_8_;
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x3c);
      *(longlong *)*pauVar11 = auVar30._0_8_;
      *(longlong *)(*pauVar11 + 8) = auVar30._8_8_;
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x40);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar21 + 0x44);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      imp___aeabi_memclr8(*(undefined4 *)(puVar21 + 8),0x100);
      iVar1 = *(int *)(*(int *)(*(int *)(puVar21 + 0x6c) + 0x2c) +
                      *(int *)(*(int *)(puVar21 + 0x6c) + 0x38) * 0xc);
      thunk_QNNMCprZvQGURcnSqOrbCMlbFtQ(iVar5,pauVar15);
      puVar7 = (undefined4 *)(iVar1 + *(int *)(puVar21 + 0x5c) * 8);
      *puVar7 = *(undefined4 *)(puVar21 + 0x70);
      puVar7[0x40] = *(undefined4 *)(*pauVar15 + 4);
      iVar17 = *(int *)(puVar21 + 0x58);
      puVar7[0x81] = 0;
      puVar7[0x41] = 0;
      uVar12 = iVar1 + iVar17;
      uVar9 = *(uint *)(puVar21 + 0x54);
      bVar23 = uVar12 < uVar9;
      if (bVar23) {
        uVar9 = *(uint *)(puVar21 + 0x50);
        uVar12 = iVar1 + *(int *)(puVar21 + 0x4c) + 0x204;
      }
      if (bVar23 && uVar9 < uVar12) {
        iVar10 = 1;
        iVar8 = 2;
        iVar20 = *(int *)(puVar21 + 0x68);
        iVar22 = *(int *)(puVar21 + 100);
      }
      else {
        iVar20 = *(int *)(puVar21 + 0x68);
        iVar17 = 8;
        iVar22 = *(int *)(puVar21 + 100);
        puVar3 = (undefined8 *)(iVar1 + iVar20);
        do {
          puVar24 = (undefined4 *)(*pauVar15 + iVar17);
          iVar17 = iVar17 + 0x20;
          puVar7 = (undefined4 *)0x380;
          puVar6 = (undefined4 *)0x390;
          lVar25 = 2;
          puVar4 = puVar3;
          while( true ) {
            *puVar7 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar6 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar7 = (undefined4 *)0x388;
          puVar6 = (undefined4 *)0x398;
          lVar25 = 2;
          while( true ) {
            *puVar7 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar6 = *puVar24;
            puVar24 = puVar24 + 1;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          *puVar4 = auVar27._0_8_;
          puVar4[1] = auVar27._8_8_;
          puVar3 = puVar4 + 2;
          *(longlong *)((int)puVar4 + -0x104) = auVar28._0_8_;
          *(longlong *)((int)puVar4 + -0xfc) = auVar28._8_8_;
        } while (iVar17 != 0x1e8);
        iVar10 = 0x3d;
        iVar8 = 0x7a;
      }
      iVar10 = iVar10 << 2;
      iVar17 = *(int *)(puVar21 + 0x60);
      puVar7 = (undefined4 *)(*(int *)(puVar21 + 0xc) + iVar8 * 4);
      do {
        *(undefined4 *)(iVar1 + iVar22 + iVar10 + -0x104) = puVar7[-1];
        *(undefined4 *)(iVar1 + iVar22 + iVar10) = *puVar7;
        iVar10 = iVar10 + 4;
        puVar7 = puVar7 + 2;
      } while (iVar10 != 0x100);
      param_1 = *(int *)(puVar21 + 0x6c);
      iVar22 = iVar22 + 0x208;
      iVar17 = iVar17 + 0x208;
      iVar20 = iVar20 + 0x208;
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0xc));
  }
  iVar5 = 0;
  if (*(uint *)(param_1 + 0x38) < *(int *)(param_1 + 0x1c) - 1U) {
    iVar5 = *(uint *)(param_1 + 0x38) + 1;
  }
  *(int *)(param_1 + 0x38) = iVar5;
  return;
}


// =========================================================================
// Function: yyfjjkOnqeJbxTnNxxNMhWeNfMvVDtmFQaF_VQQVTYOxpVrWWCwPxkWdZfXKghXrbIICxQNVTz_kfhjkkvRejjKOxWUYIW_WTuQuuFNFycAmrC
// Entry: 0x71accd30 | Size: 340 bytes
// =========================================================================

void yyfjjkOnqeJbxTnNxxNMhWeNfMvVDtmFQaF_VQQVTYOxpVrWWCwPxkWdZfXKghXrbIICxQNVTz_kfhjkkvRejjKOxWUYIW_WTuQuuFNFycAmrC
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar7 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x24) = uVar7;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) + -1;
    fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    *(int *)(param_1 + 0x28) = iVar1;
    fVar9 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = *(float *)(param_1 + 0x18) * fVar6;
    fVar8 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (1.0 - fVar6) * fVar8 + fVar9 * fVar6;
    uVar7 = (uint)(0.0 < fVar6) * (int)fVar6;
    uVar5 = *(uint *)(param_1 + 0x38);
    if (uVar7 - 1 < *(uint *)(param_1 + 0x38)) {
      uVar5 = uVar7 - 1;
    }
    *(uint *)(param_1 + 0x38) = uVar5;
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  if (uVar3 < uVar7) {
    piVar2 = *(int **)(param_1 + 0x2c);
    iVar1 = *piVar2;
    do {
      if (piVar2[1] != iVar1) {
        iVar4 = 0;
        uVar5 = 0;
        do {
          imp___aeabi_memclr4(piVar2[uVar3 * 3] + iVar4,0x208);
          piVar2 = *(int **)(param_1 + 0x2c);
          iVar4 = iVar4 + 0x208;
          uVar5 = uVar5 + 1;
          iVar1 = *piVar2;
        } while (uVar5 < (uint)((piVar2[1] - iVar1 >> 3) * -0x3f03f03f));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar7);
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  thunk_RQZDzhDqNjzHLAggbjbpHjMKDHEFldecnVnNklNOpumuIiRmZwLJgknrZAAqjfiMfpQkcfTwpoXguShqsdKWTUYUNBaVlLIvYhsbrQQezqAPe_ObMIqFQMlkOZuEABlt_
            (param_2,param_3,uVar7,param_1 + 0x2c);
  thunk_tSlKIwIxxVMWx_nGDiTmkFWbuqEWcBjHgaqrQhXZjfkUxy_kNHnfiTDcDfgwtGDGAWYXoPAFhtTZJhfTnhudBNEGNLDuBsuEvXmfatkOW
            (param_1,param_4);
  return;
}


// =========================================================================
// Function: tSlKIwIxxVMWx_nGDiTmkFWbuqEWcBjHgaqrQhXZjfkUxy_kNHnfiTDcDfgwtGDGAWYXoPAFhtTZJhfTnhudBNEGNLDuBsuEvXmfatkOW
// Entry: 0x71acce84 | Size: 1236 bytes
// =========================================================================

void tSlKIwIxxVMWx_nGDiTmkFWbuqEWcBjHgaqrQhXZjfkUxy_kNHnfiTDcDfgwtGDGAWYXoPAFhtTZJhfTnhudBNEGNLDuBsuEvXmfatkOW
               (int param_1,int *param_2)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 *puVar23;
  bool bVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_2a0 [4];
  undefined1 *puStack_29c;
  uint uStack_298;
  undefined1 *puStack_294;
  undefined1 *puStack_290;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  undefined1 *puStack_284;
  undefined1 *puStack_280;
  undefined1 *puStack_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_264;
  undefined1 *puStack_260;
  undefined1 *puStack_25c;
  int *piStack_258;
  int iStack_254;
  undefined1 *puStack_24c;
  undefined1 *puStack_248;
  int iStack_244;
  float afStack_240 [2];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [256];
  undefined1 auStack_40 [28];
  
  puVar23 = auStack_2a0;
  iVar1 = *param_2;
  iVar13 = param_2[1];
  uVar18 = *(int *)(param_1 + 0x1c) * 0x40;
  uVar10 = iVar13 - iVar1 >> 2;
  if (uVar10 < uVar18) {
    FUN_71a66dde(param_2,uVar18 - uVar10);
    iVar1 = *param_2;
    uVar18 = *(int *)(param_1 + 0x1c) * 0x40;
    uVar10 = param_2[1] - iVar1 >> 2;
    if (uVar10 < uVar18) {
LAB_71accf10:
      FUN_71a66dde(param_2,uVar18 - uVar10);
      iVar1 = *param_2;
      goto LAB_71accf20;
    }
  }
  else {
    if (uVar18 < uVar10) {
      iVar13 = iVar1 + *(int *)(param_1 + 0x1c) * 0x100;
      param_2[1] = iVar13;
    }
    uVar10 = iVar13 - iVar1 >> 2;
    if (uVar10 < uVar18) goto LAB_71accf10;
  }
  if (uVar18 < uVar10) {
    param_2[1] = iVar1 + uVar18 * 4;
  }
LAB_71accf20:
  uVar18 = *(uint *)(param_1 + 0x38);
  imp___aeabi_memclr4(iVar1 + uVar18 * 0x100,0x100);
  if (*(int *)(param_1 + 0xc) != 0) {
    piStack_258 = param_2;
    pauVar20 = (undefined1 (*) [16])afStack_240;
    puStack_25c = auStack_230;
    puStack_260 = auStack_150;
    puStack_264 = auStack_160;
    puStack_268 = auStack_170;
    puStack_26c = auStack_180;
    puStack_270 = auStack_190;
    puStack_274 = auStack_1a0;
    puStack_278 = auStack_1b0;
    puStack_27c = auStack_1c0;
    puStack_280 = auStack_1d0;
    puStack_284 = auStack_1e0;
    puStack_288 = auStack_1f0;
    puStack_28c = auStack_200;
    puStack_294 = auStack_220;
    uStack_298 = (uint)pauVar20 | 4;
    puStack_248 = auStack_40;
    puStack_24c = auStack_238;
    puStack_29c = auStack_140;
    iStack_244 = param_1 + 4;
    auVar26._8_8_ = 0x3c8000003c800000;
    auVar26._0_8_ = 0x3c8000003c800000;
    iVar13 = 0;
    uVar18 = 0;
    puStack_290 = auStack_210;
    iStack_254 = param_1;
    do {
      iVar4 = *(int *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x2c);
      *(uint *)(puVar23 + 0x50) = uVar18 * 0x41;
      iVar1 = *(int *)(iVar1 + iVar4 * 0xc);
      puVar5 = (undefined4 *)(iVar1 + uVar18 * 0x208);
      *(undefined4 *)(puVar23 + 0x60) = *puVar5;
      *(undefined4 *)(puVar23 + 100) = puVar5[0x40];
      puVar11 = puVar5 + 0x81;
      bVar24 = *(undefined4 **)(puVar23 + 0x54) < puVar11;
      if (bVar24) {
        puVar11 = *(undefined4 **)(puVar23 + 0x58);
        puVar5 = puVar5 + 1;
      }
      if (bVar24 && puVar5 < puVar11) {
        iVar4 = 1;
        iVar6 = 2;
      }
      else {
        iVar4 = 8;
        do {
          puVar3 = (undefined4 *)(*pauVar20 + iVar4);
          iVar4 = iVar4 + 0x20;
          puVar5 = (undefined4 *)0x380;
          puVar11 = (undefined4 *)0x390;
          lVar25 = 2;
          while( true ) {
            *puVar3 = *puVar5;
            puVar3[1] = *puVar11;
            puVar3 = puVar3 + 2;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar5 = (undefined4 *)0x388;
          puVar11 = (undefined4 *)0x398;
          lVar25 = 2;
          while( true ) {
            *puVar3 = *puVar5;
            puVar3[1] = *puVar11;
            puVar3 = puVar3 + 2;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          }
        } while (iVar4 != 0x1e8);
        iVar4 = 0x3d;
        iVar6 = 0x7a;
      }
      iVar6 = iVar6 * 4 + 4;
      iVar4 = iVar4 << 2;
      do {
        puVar5 = (undefined4 *)(iVar1 + iVar13 + iVar4);
        iVar4 = iVar4 + 4;
        *(undefined4 *)(pauVar20[-1] + iVar6 + 0xc) = *puVar5;
        *(undefined4 *)(*pauVar20 + iVar6) = puVar5[0x41];
        iVar6 = iVar6 + 8;
      } while (iVar4 != 0x100);
      thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(*(undefined4 *)(puVar23 + 0x5c),pauVar20);
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x44);
      auVar27 = FloatVectorMult(*pauVar20,auVar26,2,0x20);
      auVar29 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      pauVar17 = *(undefined1 (**) [16])(puVar23 + 0x14);
      pauVar12 = *(undefined1 (**) [16])(puVar23 + 0xc);
      auVar28 = *pauVar17;
      auVar31 = *pauVar12;
      *(longlong *)*pauVar2 = auVar29._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar29._8_8_;
      auVar29 = FloatVectorMult(auVar28,auVar26,2,0x20);
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x1c);
      *(longlong *)*pauVar20 = auVar27._0_8_;
      *(longlong *)(*pauVar20 + 8) = auVar27._8_8_;
      auVar28 = FloatVectorMult(auVar31,auVar26,2,0x20);
      auVar31 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      pauVar7 = *(undefined1 (**) [16])(puVar23 + 0x28);
      pauVar22 = *(undefined1 (**) [16])(puVar23 + 0x24);
      *(longlong *)*pauVar12 = auVar28._0_8_;
      *(longlong *)(*pauVar12 + 8) = auVar28._8_8_;
      pauVar19 = *(undefined1 (**) [16])(puVar23 + 0x10);
      *(longlong *)*pauVar2 = auVar31._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar31._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x2c);
      pauVar21 = *(undefined1 (**) [16])(puVar23 + 0x18);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      pauVar12 = *(undefined1 (**) [16])(puVar23 + 0x20);
      auVar32 = FloatVectorMult(*pauVar7,auVar26,2,0x20);
      auVar27 = FloatVectorMult(*pauVar22,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x30);
      auVar30 = FloatVectorMult(*pauVar19,auVar26,2,0x20);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      auVar33 = FloatVectorMult(*pauVar21,auVar26,2,0x20);
      auVar31 = FloatVectorMult(*pauVar12,auVar26,2,0x20);
      *(longlong *)*pauVar7 = auVar32._0_8_;
      *(longlong *)(*pauVar7 + 8) = auVar32._8_8_;
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x34);
      *(longlong *)*pauVar19 = auVar30._0_8_;
      *(longlong *)(*pauVar19 + 8) = auVar30._8_8_;
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar17 = auVar29._0_8_;
      *(longlong *)(*pauVar17 + 8) = auVar29._8_8_;
      *(longlong *)*pauVar21 = auVar33._0_8_;
      *(longlong *)(*pauVar21 + 8) = auVar33._8_8_;
      *(longlong *)*pauVar12 = auVar31._0_8_;
      *(longlong *)(*pauVar12 + 8) = auVar31._8_8_;
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x38);
      *(longlong *)*pauVar22 = auVar27._0_8_;
      *(longlong *)(*pauVar22 + 8) = auVar27._8_8_;
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x3c);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      pauVar2 = *(undefined1 (**) [16])(puVar23 + 0x40);
      auVar28 = FloatVectorMult(*pauVar2,auVar26,2,0x20);
      *(longlong *)*pauVar2 = auVar28._0_8_;
      *(longlong *)(*pauVar2 + 8) = auVar28._8_8_;
      imp___aeabi_memclr8(*(undefined4 *)(puVar23 + 4),0x100);
      if (uVar18 == 0) {
        param_1 = *(int *)(puVar23 + 0x4c);
        imp___aeabi_memmove4
                  (**(int **)(puVar23 + 0x48) + *(int *)(param_1 + 0x38) * 0x100,pauVar20,0x100);
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x38) * 0xc);
      }
      else {
        param_1 = *(int *)(puVar23 + 0x4c);
        iVar6 = 0;
        iVar1 = *(int *)(param_1 + 0x38);
        iVar4 = **(int **)(puVar23 + 0x48);
        do {
          pfVar14 = (float *)(*pauVar20 + iVar6);
          pfVar15 = (float *)(iVar4 + iVar1 * 0x100 + iVar6);
          iVar6 = iVar6 + 4;
          if (ABS(*pfVar15) < ABS(*pfVar14)) {
            *pfVar15 = *pfVar14;
          }
        } while (iVar6 != 0x100);
        puVar5 = (undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x2c) + iVar1 * 0xc) + *(int *)(puVar23 + 0x50) * 8);
      }
      thunk_QNNMCprZvQGURcnSqOrbCMlbFtQ(*(undefined4 *)(puVar23 + 0x5c),pauVar20);
      *puVar5 = *(undefined4 *)(puVar23 + 0x60);
      puVar5[0x40] = *(undefined4 *)(puVar23 + 100);
      puVar16 = *(undefined4 **)(puVar23 + 0x58);
      puVar5[0x81] = 0;
      puVar3 = puVar5 + 0x41;
      *puVar3 = 0;
      puVar11 = puVar5 + 1;
      bVar24 = puVar11 < puVar16;
      if (bVar24) {
        puVar11 = *(undefined4 **)(puVar23 + 0x54);
      }
      if (bVar24 && puVar11 < puVar5 + 0x81) {
        iVar1 = 1;
        iVar4 = 2;
      }
      else {
        puVar8 = (undefined8 *)(puVar5 + 0x42);
        iVar1 = 8;
        do {
          puVar16 = (undefined4 *)(*pauVar20 + iVar1);
          iVar1 = iVar1 + 0x20;
          puVar5 = (undefined4 *)0x380;
          puVar11 = (undefined4 *)0x390;
          lVar25 = 2;
          puVar9 = puVar8;
          while( true ) {
            *puVar5 = *puVar16;
            puVar16 = puVar16 + 1;
            *puVar11 = *puVar16;
            puVar16 = puVar16 + 1;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar5 = (undefined4 *)0x388;
          puVar11 = (undefined4 *)0x398;
          lVar25 = 2;
          while( true ) {
            *puVar5 = *puVar16;
            puVar16 = puVar16 + 1;
            *puVar11 = *puVar16;
            puVar16 = puVar16 + 1;
            lVar25 = lVar25 + -1;
            if (lVar25 == 0) break;
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
          }
          *puVar9 = auVar29._0_8_;
          puVar9[1] = auVar29._8_8_;
          puVar8 = puVar9 + 2;
          *(longlong *)((int)puVar9 + -0x104) = auVar28._0_8_;
          *(longlong *)((int)puVar9 + -0xfc) = auVar28._8_8_;
        } while (iVar1 != 0x1e8);
        iVar1 = 0x3d;
        iVar4 = 0x7a;
      }
      iVar1 = iVar1 << 2;
      puVar5 = (undefined4 *)(*(int *)(puVar23 + 8) + iVar4 * 4);
      do {
        *(undefined4 *)((int)puVar3 + iVar1 + -0x104) = puVar5[-1];
        *(undefined4 *)((int)puVar3 + iVar1) = *puVar5;
        iVar1 = iVar1 + 4;
        puVar5 = puVar5 + 2;
      } while (iVar1 != 0x100);
      uVar18 = uVar18 + 1;
      iVar13 = iVar13 + 0x208;
    } while (uVar18 < *(uint *)(param_1 + 0xc));
    uVar18 = *(uint *)(param_1 + 0x38);
  }
  iVar13 = 0;
  if (uVar18 < *(int *)(param_1 + 0x1c) - 1U) {
    iVar13 = uVar18 + 1;
  }
  *(int *)(param_1 + 0x38) = iVar13;
  return;
}


// =========================================================================
// Function: ZMimSsXuwEbYbnWeDjvdFoXXWAZVWtZA_eLlypwfrVrZwNCualNHfPKahGxBLbmjRhfEgqiyelyeuqddmsiWPxOVTIW_LtoLRPsMPjWfOlqFIuXvFjdYN
// Entry: 0x71acd358 | Size: 316 bytes
// =========================================================================

void ZMimSsXuwEbYbnWeDjvdFoXXWAZVWtZA_eLlypwfrVrZwNCualNHfPKahGxBLbmjRhfEgqiyelyeuqddmsiWPxOVTIW_LtoLRPsMPjWfOlqFIuXvFjdYN
               (int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *extraout_r2;
  int *extraout_r2_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  iVar8 = *param_2;
  iVar5 = param_2[1];
  piVar10 = *(int **)(param_1 + 0x1c);
  iVar6 = iVar5 - iVar8 >> 2;
  piVar1 = (int *)(iVar6 * -0x3f03f03f);
  if (piVar1 < piVar10) {
    uVar13 = FUN_71acdbf4(param_2,(int)piVar10 + iVar6 * 0x3f03f03f);
    piVar2 = (int *)((ulonglong)uVar13 >> 0x20);
    piVar1 = (int *)uVar13;
    iVar8 = *param_2;
    iVar5 = param_2[1];
    piVar10 = *(int **)(param_1 + 0x1c);
    param_3 = extraout_r2;
    if (iVar8 == iVar5) goto LAB_71acd3f8;
  }
  else {
    if (piVar10 < piVar1) {
      piVar1 = (int *)((int)piVar10 * 0x41);
      iVar5 = iVar8 + (int)piVar10 * 0x104;
      param_2[1] = iVar5;
    }
    piVar2 = param_2;
    if (iVar8 == iVar5) goto LAB_71acd3f8;
  }
  uVar13 = imp___aeabi_memclr4(iVar8,(((iVar5 - iVar8) - 0x104U) / 0x104) * 0x104 + 0x104);
  piVar1 = (int *)uVar13;
  piVar2 = (int *)((ulonglong)uVar13 >> 0x20);
  param_3 = extraout_r2_00;
LAB_71acd3f8:
  if (piVar10 != (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    param_3 = (int *)*piVar1;
    piVar2 = (int *)piVar1[1];
  }
  if (piVar10 != (int *)0x0 && piVar2 != param_3) {
    piVar4 = (int *)0x0;
    uVar3 = ((int)piVar2 - (int)param_3 >> 3) * -0x3f03f03f;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      uVar9 = 0;
      iVar6 = piVar1[(int)piVar4 * 3];
      do {
        iVar5 = 0;
        do {
          fVar12 = ((float *)(iVar6 + iVar5))[0x41];
          fVar11 = *(float *)(iVar6 + iVar5);
          pfVar7 = (float *)(iVar8 + iVar5);
          iVar5 = iVar5 + 4;
          fVar12 = fVar12 * fVar12 + fVar11 * fVar11;
          fVar11 = *pfVar7;
          if (fVar11 < fVar12) {
            fVar11 = fVar12;
          }
          *pfVar7 = fVar11;
        } while (iVar5 != 0x104);
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x208;
      } while (uVar9 != uVar3);
      piVar4 = (int *)((int)piVar4 + 1);
      iVar8 = iVar8 + 0x104;
    } while (piVar4 != piVar10);
  }
  return;
}


// =========================================================================
// Function: fzjElWIrxjgIYCcQcqgTYUOCEtwCReqQoHvYLnkxvqtL
// Entry: 0x71acd494 | Size: 512 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void fzjElWIrxjgIYCcQcqgTYUOCEtwCReqQoHvYLnkxvqtL(int param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  puVar7 = *(undefined4 **)(param_1 + 0x30);
  if (puVar3 != puVar7) {
    auVar1._8_8_ = CONCAT44(param_2,param_2);
    auVar1._0_8_ = CONCAT44(param_2,param_2);
    pauVar6 = (undefined1 (*) [16])puVar3[1];
    pauVar5 = (undefined1 (*) [16])*puVar3;
    if ((undefined1 (*) [16])*puVar3 != pauVar6) goto LAB_71acd4e0;
    while (puVar4 = puVar3 + 3, puVar4 != puVar7) {
      pauVar6 = (undefined1 (*) [16])puVar3[4];
      puVar3 = puVar4;
      pauVar5 = (undefined1 (*) [16])*puVar4;
      if ((undefined1 (*) [16])*puVar4 != pauVar6) {
LAB_71acd4e0:
        do {
          auVar9 = FloatVectorMult(*pauVar5,auVar1,2,0x20);
          *(longlong *)*pauVar5 = auVar9._0_8_;
          *(longlong *)(*pauVar5 + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[1],auVar1,2,0x20);
          *(longlong *)pauVar5[1] = auVar9._0_8_;
          *(longlong *)(pauVar5[1] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[2],auVar1,2,0x20);
          *(longlong *)pauVar5[2] = auVar9._0_8_;
          *(longlong *)(pauVar5[2] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[3],auVar1,2,0x20);
          *(longlong *)pauVar5[3] = auVar9._0_8_;
          *(longlong *)(pauVar5[3] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[4],auVar1,2,0x20);
          *(longlong *)pauVar5[4] = auVar9._0_8_;
          *(longlong *)(pauVar5[4] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[5],auVar1,2,0x20);
          *(longlong *)pauVar5[5] = auVar9._0_8_;
          *(longlong *)(pauVar5[5] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[6],auVar1,2,0x20);
          *(longlong *)pauVar5[6] = auVar9._0_8_;
          *(longlong *)(pauVar5[6] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[7],auVar1,2,0x20);
          *(longlong *)pauVar5[7] = auVar9._0_8_;
          *(longlong *)(pauVar5[7] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[8],auVar1,2,0x20);
          *(longlong *)pauVar5[8] = auVar9._0_8_;
          *(longlong *)(pauVar5[8] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[9],auVar1,2,0x20);
          auVar10 = FloatVectorMult(pauVar5[10],auVar1,2,0x20);
          *(longlong *)pauVar5[9] = auVar9._0_8_;
          *(longlong *)(pauVar5[9] + 8) = auVar9._8_8_;
          *(longlong *)pauVar5[10] = auVar10._0_8_;
          *(longlong *)(pauVar5[10] + 8) = auVar10._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0xb],auVar1,2,0x20);
          *(longlong *)pauVar5[0xb] = auVar9._0_8_;
          *(longlong *)(pauVar5[0xb] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0xc],auVar1,2,0x20);
          *(longlong *)pauVar5[0xc] = auVar9._0_8_;
          *(longlong *)(pauVar5[0xc] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0xd],auVar1,2,0x20);
          *(longlong *)pauVar5[0xd] = auVar9._0_8_;
          *(longlong *)(pauVar5[0xd] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0xe],auVar1,2,0x20);
          *(longlong *)pauVar5[0xe] = auVar9._0_8_;
          *(longlong *)(pauVar5[0xe] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0xf],auVar1,2,0x20);
          *(longlong *)pauVar5[0xf] = auVar9._0_8_;
          *(longlong *)(pauVar5[0xf] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x10],auVar1,2,0x20);
          *(longlong *)pauVar5[0x10] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x10] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x11],auVar1,2,0x20);
          *(longlong *)pauVar5[0x11] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x11] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x12],auVar1,2,0x20);
          *(longlong *)pauVar5[0x12] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x12] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x13],auVar1,2,0x20);
          *(longlong *)pauVar5[0x13] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x13] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x14],auVar1,2,0x20);
          *(longlong *)pauVar5[0x14] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x14] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x15],auVar1,2,0x20);
          *(longlong *)pauVar5[0x15] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x15] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x16],auVar1,2,0x20);
          *(longlong *)pauVar5[0x16] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x16] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x17],auVar1,2,0x20);
          *(longlong *)pauVar5[0x17] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x17] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x18],auVar1,2,0x20);
          *(longlong *)pauVar5[0x18] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x18] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x19],auVar1,2,0x20);
          *(longlong *)pauVar5[0x19] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x19] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x1a],auVar1,2,0x20);
          *(longlong *)pauVar5[0x1a] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x1a] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x1b],auVar1,2,0x20);
          *(longlong *)pauVar5[0x1b] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x1b] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x1c],auVar1,2,0x20);
          *(longlong *)pauVar5[0x1c] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x1c] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x1d],auVar1,2,0x20);
          *(longlong *)pauVar5[0x1d] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x1d] + 8) = auVar9._8_8_;
          pauVar2 = pauVar5 + 0x20;
          auVar9 = FloatVectorMult(pauVar5[0x1e],auVar1,2,0x20);
          *(longlong *)pauVar5[0x1e] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x1e] + 8) = auVar9._8_8_;
          auVar9 = FloatVectorMult(pauVar5[0x1f],auVar1,2,0x20);
          *(longlong *)pauVar5[0x1f] = auVar9._0_8_;
          *(longlong *)(pauVar5[0x1f] + 8) = auVar9._8_8_;
          fVar8 = *(float *)pauVar5[0x20];
          *(float *)(pauVar5[0x20] + 4) = *(float *)(pauVar5[0x20] + 4) * param_2;
          *(float *)pauVar5[0x20] = fVar8 * param_2;
          pauVar5 = (undefined1 (*) [16])(*pauVar2 + 8);
        } while ((undefined1 (*) [16])(*pauVar2 + 8) != pauVar6);
      }
    }
  }
  return;
}


// =========================================================================
// Function: srDjQURlrinkjiwFMoVzylAPXNyPdMhARSIebHB_BRQ_QcjZZHAVzB_L_MqVvlkruBcfiQWbgBpbrddiCskwLXKgmkXqwmmwKUMwFZtBnjtZmwHf
// Entry: 0x71acd694 | Size: 204 bytes
// =========================================================================

void srDjQURlrinkjiwFMoVzylAPXNyPdMhARSIebHB_BRQ_QcjZZHAVzB_L_MqVvlkruBcfiQWbgBpbrddiCskwLXKgmkXqwmmwKUMwFZtBnjtZmwHf
               (int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if (param_2 != 0 && uVar1 != 0) {
    uVar4 = 0;
    uVar1 = 1;
    do {
      bVar5 = uVar1 != 0;
      uVar1 = 0;
      if (bVar5) {
        iVar2 = 0;
        uVar3 = 0;
        do {
          imp___aeabi_memmove4
                    (*(int *)(*(int *)(param_1 + 0x2c) + uVar4 * 0xc) + iVar2,
                     *(int *)(*param_3 + uVar4 * 0xc) + iVar2,0x104);
          imp___aeabi_memmove4
                    (*(int *)(*(int *)(param_1 + 0x2c) + uVar4 * 0xc) + iVar2 + 0x104,
                     *(int *)(*param_3 + uVar4 * 0xc) + iVar2 + 0x104,0x104);
          uVar1 = *(uint *)(param_1 + 0xc);
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0x208;
        } while (uVar3 < uVar1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_2);
  }
  return;
}


// =========================================================================
// Function: FUN_71acdbf4
// Entry: 0x71acdbf4 | Size: 404 bytes
// =========================================================================

void FUN_71acdbf4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  if (param_2 <= (uint)((param_1[2] - iVar2 >> 2) * -0x3f03f03f)) {
    if (param_2 != 0) {
      iVar3 = ((param_2 * 0x104 - 0x104) / 0x104) * 0x104 + 0x104;
      imp___aeabi_memclr4(iVar2,iVar3);
      iVar2 = iVar2 + iVar3;
    }
    param_1[1] = iVar2;
    return;
  }
  iVar6 = *param_1;
  iVar3 = iVar2 - iVar6 >> 2;
  uVar5 = iVar3 * -0x3f03f03f + param_2;
  if (uVar5 < 0xfc0fc1) {
    iVar1 = param_1[2] - iVar6 >> 2;
    if (uVar5 < (uint)(iVar1 * -0x7e07e07e)) {
      uVar5 = iVar1 * -0x7e07e07e;
    }
    if (0x7e07df < (uint)(iVar1 * -0x3f03f03f)) {
      uVar5 = 0xfc0fc0;
    }
    if (uVar5 == 0) {
      iVar1 = 0;
    }
    else {
      if (0xfc0fc0 < uVar5) goto LAB_71acdd84;
      iVar1 = thunk_MwhHq(uVar5 * 0x104);
    }
    iVar3 = iVar1 + iVar3 * 4;
    iVar4 = ((param_2 * 0x104 - 0x104) / 0x104) * 0x104 + 0x104;
    imp___aeabi_memclr4(iVar3,iVar4);
    iVar2 = iVar3 - (iVar2 - iVar6);
    imp___aeabi_memcpy4(iVar2,iVar6);
    *param_1 = iVar2;
    param_1[1] = iVar3 + iVar4;
    param_1[2] = iVar1 + uVar5 * 0x104;
    if (iVar6 != 0) {
      thunk_qNQrlu(iVar6);
      return;
    }
    return;
  }
  FUN_71abf220(param_1);
LAB_71acdd84:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: Lyy_BwyTBJxJLWpRikiKnUkA_GgTXpUSSjrQAAvMnxWPZQnVOQyD_KZzFHy_MEQqyZOVJZJHEnovizzBPwfXfexViVRvSsAo
// Entry: 0x71acde70 | Size: 280 bytes
// =========================================================================

undefined4 *
Lyy_BwyTBJxJLWpRikiKnUkA_GgTXpUSSjrQAAvMnxWPZQnVOQyD_KZzFHy_MEQqyZOVJZJHEnovizzBPwfXfexViVRvSsAo
          (undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_71204898);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_71204898 = DAT_71204898 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar2);
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  param_1[0x56] = 1000;
  *param_1 = uVar2;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[1] = param_3;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  *(undefined8 *)(param_1 + 9) = *param_2;
  *(undefined8 *)(param_1 + 0xb) = uVar4;
  *(undefined8 *)(param_1 + 0xd) = uVar5;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0x15) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x17) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x19) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x1b) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x1d) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x1f) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x21) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x23) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x25) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x27) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x29) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x2b) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x2d) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x2f) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x31) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x33) = 0x461c4000461c4000;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x35) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x37) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 3) = uVar4;
  *(undefined8 *)(param_1 + 5) = uVar5;
  *(undefined8 *)(param_1 + 0x39) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x3b) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x3d) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x3f) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 7) = uVar6;
  *(undefined8 *)(param_1 + 0x41) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x43) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0xf) = uVar4;
  *(undefined8 *)(param_1 + 0x11) = uVar5;
  *(undefined8 *)(param_1 + 0x45) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x47) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x49) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x4b) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x13) = uVar6;
  *(undefined8 *)(param_1 + 0x4d) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x4f) = 0x461c4000461c4000;
  param_1[0x55] = 0x461c4000;
  *(undefined8 *)(param_1 + 0x51) = 0x461c4000461c4000;
  *(undefined8 *)(param_1 + 0x53) = 0x461c4000461c4000;
  param_1[2] = 1.0 / fVar3;
  return param_1;
}


// =========================================================================
// Function: nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw
// Entry: 0x71acdfb4 | Size: 60 bytes
// =========================================================================

int * nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: SXsPkZFPnqQKIKbSLOeXkyYZRPZmzSTiJIclVPwFirsKiZK_eGinXZtqOzLgVpAyAZHab_bNdvhHCFZAMEGbm
// Entry: 0x71acdff0 | Size: 132 bytes
// =========================================================================

void SXsPkZFPnqQKIKbSLOeXkyYZRPZmzSTiJIclVPwFirsKiZK_eGinXZtqOzLgVpAyAZHab_bNdvhHCFZAMEGbm
               (int param_1,char *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x54) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x5c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 100) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x6c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x74) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x7c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x84) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x8c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x94) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x9c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xa4) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xac) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xb4) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xbc) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xc4) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xcc) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xd4) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xdc) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xe4) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xec) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xf4) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0xfc) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x104) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x10c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x114) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x11c) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x124) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 300) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x134) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x13c) = 0x461c4000461c4000;
    *(undefined4 *)(param_1 + 0x154) = 0x461c4000;
    *(undefined8 *)(param_1 + 0x144) = 0x461c4000461c4000;
    *(undefined8 *)(param_1 + 0x14c) = 0x461c4000461c4000;
  }
  if (*param_2 != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x158) = 1000;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}


// =========================================================================
// Function: ZDVIceFAmDegycxfAzxqymEudEtwBAZGiUhrxulEhnxIIN__mBVUAohjzQpQBXtmZASPCMmjyKJgqoNjQvgQPYZOxCJBsg_FEJSykUOWV_IEZsPHqJBJAX_mUnZGSOOctSxZ_kxcBHffjgvqviGVhksIyshQpZEDgxPpNdy
// Entry: 0x71ace090 | Size: 692 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void ZDVIceFAmDegycxfAzxqymEudEtwBAZGiUhrxulEhnxIIN__mBVUAohjzQpQBXtmZASPCMmjyKJgqoNjQvgQPYZOxCJBsg_FEJSykUOWV_IEZsPHqJBJAX_mUnZGSOOctSxZ_kxcBHffjgvqviGVhksIyshQpZEDgxPpNdy
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
               int param_6,float *param_7,undefined4 param_8,uint param_9,int param_10,int param_11,
               int param_12)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float afStack_12c [66];
  
  uVar9 = *(int *)(param_3 + 0x15c) + 1;
  *(uint *)(param_3 + 0x15c) = uVar9;
  if (0 < *(int *)(param_3 + 0x160)) {
    iVar3 = *(int *)(param_3 + 0x160) + -1;
    *(int *)(param_3 + 0x160) = iVar3;
    if (iVar3 == 0) {
      *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_3 + 0x24);
      *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_3 + 0x4c) = *(undefined8 *)(param_3 + 0x34);
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_3 + 0x24);
      *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(param_3 + 0x34);
    }
    else {
      fVar11 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = *(float *)(param_3 + 8) * fVar11;
      uVar2 = VectorGetElement(CONCAT44(param_2,fVar11),0,4,0);
      VectorMultiply(*(undefined1 (*) [16])(param_3 + 0x40),uVar2,4);
      fVar12 = 1.0 - fVar11;
      auVar18._8_8_ = CONCAT44(fVar12,fVar12);
      auVar18._0_8_ = CONCAT44(fVar12,fVar12);
      auVar18 = FloatVectorMultiplyAccumulate(auVar18,*(undefined1 (*) [16])(param_3 + 0x28),2,0x10)
      ;
      *(longlong *)(param_3 + 0x10) = auVar18._0_8_;
      *(longlong *)(param_3 + 0x18) = auVar18._8_8_;
      *(float *)(param_3 + 0x20) =
           fVar12 * *(float *)(param_3 + 0x38) + *(float *)(param_3 + 0x50) * fVar11;
    }
  }
  pfVar8 = (float *)(param_6 + 0x608);
  iVar3 = -4;
  do {
    puVar1 = (uint *)(param_5 - iVar3);
    if (10 < *puVar1) break;
    bVar10 = iVar3 != -0xfc;
    iVar3 = iVar3 + -4;
  } while (bVar10);
  uVar4 = *(int *)(param_3 + 0x158) + 1;
  if (10 < *puVar1) {
    uVar4 = 1;
  }
  *(uint *)(param_3 + 0x158) = uVar4;
  if (((uVar4 < param_9) || (param_10 != 0)) || (uVar9 <= param_9)) {
    imp___aeabi_memclr4(param_12,0x208);
  }
  else {
    fVar11 = (float)VectorUnsignedToFloat(param_9,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = *(float *)(param_3 + 0x20);
    iVar3 = 0;
    do {
      fVar14 = 0.0;
      if (fVar12 <= *(float *)(param_4 + iVar3)) {
        fVar14 = *(float *)(param_3 + 0x54 + iVar3);
        fVar14 = fVar14 / (*(float *)((int)pfVar8 + iVar3) * fVar11 +
                          fVar14 * 0.5 * *(float *)(param_4 + iVar3));
      }
      pfVar5 = (float *)((int)afStack_12c + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar5 = fVar14;
    } while (iVar3 != 0x104);
    thunk_loPDGD_pTwYSaiIbtDEINMSsNDaupSxJvfFWonVE_iZbtIqHxeKInivNbnxKVkKKSDlhIZXgZrpTgtdKXijDoEEclF
              (param_5,afStack_12c);
    iVar3 = 0;
    do {
      pfVar5 = (float *)((int)afStack_12c + iVar3);
      pfVar6 = (float *)(param_4 + iVar3);
      pfVar7 = (float *)(param_3 + 0x54 + iVar3);
      iVar3 = iVar3 + 4;
      fVar11 = *pfVar7;
      *pfVar7 = fVar11 + *pfVar5 * -0.5 * *pfVar6 * fVar11;
    } while (iVar3 != 0x104);
    iVar3 = 0;
    do {
      pfVar5 = (float *)(param_6 + 0x400 + iVar3);
      pfVar7 = (float *)(param_6 + 0x504 + iVar3);
      fVar11 = *(float *)((int)afStack_12c + iVar3);
      pfVar6 = (float *)(param_12 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar6 = fVar11 * *pfVar5;
      pfVar6[0x41] = fVar11 * *pfVar7;
    } while (iVar3 != 0x104);
  }
  fVar11 = *(float *)(param_3 + 0x10);
  pfVar5 = (float *)(param_3 + 0x54);
  fVar12 = *(float *)(param_3 + 0x14);
  iVar3 = 0x41;
  fVar14 = *(float *)(param_3 + 0x18);
  fVar13 = *(float *)(param_3 + 0x1c);
  do {
    fVar15 = *pfVar8;
    pfVar6 = pfVar8 + 0x41;
    fVar17 = fVar12;
    if (param_11 != 0) {
      fVar17 = fVar11;
    }
    pfVar8 = pfVar8 + 1;
    fVar16 = *param_7;
    param_7 = param_7 + 1;
    if (fVar15 <= *pfVar6) {
      fVar17 = fVar11;
    }
    fVar17 = *pfVar5 + fVar17 * fVar16;
    if (fVar17 < fVar14) {
      fVar17 = fVar14;
    }
    if (fVar13 < fVar17) {
      fVar17 = fVar13;
    }
    iVar3 = iVar3 + -1;
    *pfVar5 = fVar17;
    pfVar5 = pfVar5 + 1;
  } while (iVar3 != 0);
  return;
}


// =========================================================================
// Function: BRYxqhYEfWYoPbOftLkXEMkXOjFOLFjKtwbbAoPHsTUNQnMGiPWCUOWpcd
// Entry: 0x71ace348 | Size: 148 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void BRYxqhYEfWYoPbOftLkXEMkXOjFOLFjKtwbbAoPHsTUNQnMGiPWCUOWpcd
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  if (*(int *)(param_3 + 0x160) < 1) {
    return;
  }
  iVar2 = *(int *)(param_3 + 0x160) + -1;
  *(int *)(param_3 + 0x160) = iVar2;
  if (iVar2 != 0) {
    fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = *(float *)(param_3 + 8) * fVar3;
    uVar1 = VectorGetElement(CONCAT44(param_2,fVar3),0,4,0);
    VectorMultiply(*(undefined1 (*) [16])(param_3 + 0x40),uVar1,4);
    fVar4 = 1.0 - fVar3;
    auVar5._8_8_ = CONCAT44(fVar4,fVar4);
    auVar5._0_8_ = CONCAT44(fVar4,fVar4);
    auVar5 = FloatVectorMultiplyAccumulate(auVar5,*(undefined1 (*) [16])(param_3 + 0x28),2,0x10);
    *(longlong *)(param_3 + 0x10) = auVar5._0_8_;
    *(longlong *)(param_3 + 0x18) = auVar5._8_8_;
    *(float *)(param_3 + 0x20) =
         fVar4 * *(float *)(param_3 + 0x38) + *(float *)(param_3 + 0x50) * fVar3;
    return;
  }
  *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0x2c);
  *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_3 + 0x2c);
  *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_3 + 0x38);
  return;
}


// =========================================================================
// Function: oVjIZfW_TimdNILANMwIOoSiePQUoGUlOMhu_vGLlNSOfHQVHIfcxYXmg_lVlIt
// Entry: 0x71ace4f0 | Size: 48 bytes
// =========================================================================

undefined4 *
oVjIZfW_TimdNILANMwIOoSiePQUoGUlOMhu_vGLlNSOfHQVHIfcxYXmg_lVlIt(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x41) = 0;
  *param_1 = uVar1;
  imp___aeabi_memclr4(param_1 + 1,0xfd);
  return param_1;
}


// =========================================================================
// Function: RyTOGLVyGwdoPVoX_pfjMNygevyHBPFGeQAK
// Entry: 0x71ace520 | Size: 4 bytes
// =========================================================================

void RyTOGLVyGwdoPVoX_pfjMNygevyHBPFGeQAK(void)

{
  return;
}


// =========================================================================
// Function: LfvVuxsosDxKjitHFLDCo_SWTicrIKazjeHWGxrpYc_xHTpvGRuLIm_xxMUzBczhwIRvHYmFZtIkgnhWjXtPN
// Entry: 0x71ace524 | Size: 1888 bytes
// =========================================================================

void LfvVuxsosDxKjitHFLDCo_SWTicrIKazjeHWGxrpYc_xHTpvGRuLIm_xxMUzBczhwIRvHYmFZtIkgnhWjXtPN
               (uint *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  int extraout_r1;
  uint uVar5;
  uint uVar6;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iStack_160;
  int iStack_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  
  pauVar18 = (undefined1 (*) [16])(param_1 + 1);
  if ((char)param_3[1] == '\0') {
    imp___aeabi_memclr4(pauVar18,0xfc);
    cVar1 = (char)param_1[0x41];
  }
  else {
    iVar21 = *param_3;
    piVar14 = (int *)param_2[1];
    imp___aeabi_memclr8(auStack_140,0xfc);
    iVar22 = piVar14[1];
    FUN_71ba2da8(piVar14[5] + iVar21 + *piVar14,*piVar14);
    piVar14 = (int *)(iVar22 + extraout_r1 * 0xc);
    iVar21 = *piVar14;
    iVar22 = piVar14[1];
    if (iVar22 != iVar21) {
      uVar5 = (iVar22 - iVar21 >> 2) * -0x3f03f03f;
      uVar9 = 0;
      iVar22 = iVar21;
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      do {
        iVar15 = 0;
        fVar31 = *(float *)(iVar21 + uVar9 * 0x104 + 4);
        do {
          fVar34 = *(float *)(iVar22 + iVar15);
          fVar29 = ((float *)(iVar22 + iVar15))[2];
          if (fVar34 < fVar29) {
            fVar34 = fVar29;
          }
          if (fVar34 * 3.0 < fVar31) {
            *(int *)(auStack_140 + iVar15) = *(int *)(auStack_140 + iVar15) + 1;
          }
          iVar15 = iVar15 + 4;
          fVar31 = fVar29;
        } while (iVar15 != 0xfc);
        uVar9 = uVar9 + 1;
        iVar22 = iVar22 + 0x104;
      } while (uVar9 != uVar5);
    }
    auVar37._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar37._0_8_ = 0x100000001;
    auVar37 = *(undefined1 (*) [16])(auVar37 << 0x40 | auVar37);
    auVar39 = VectorCompareEqual(auStack_140,0,4);
    auVar38 = VectorAdd(*pauVar18,auVar37,4);
    auVar40 = VectorCompareEqual(auStack_130,0,4);
    uVar9 = param_1[0x3d];
    uVar6 = param_1[0x3e];
    uVar10 = param_1[0x3f];
    *(longlong *)*pauVar18 = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 3) = SUB168(auVar38 & ~auVar39,8);
    uVar5 = 0;
    if (iStack_50 != 0) {
      uVar5 = uVar9 + 1;
    }
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 5),auVar37,4);
    auVar39 = VectorCompareEqual(auStack_120,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 5) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 7) = SUB168(auVar38 & ~auVar40,8);
    uVar9 = 0;
    if (iStack_4c != 0) {
      uVar9 = uVar6 + 1;
    }
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 9),auVar37,4);
    auVar40 = VectorCompareEqual(auStack_110,0,4);
    uVar6 = 0;
    if (iStack_48 != 0) {
      uVar6 = uVar10 + 1;
    }
    *(longlong *)*(undefined1 (*) [16])(param_1 + 9) = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 0xb) = SUB168(auVar38 & ~auVar39,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0xd),auVar37,4);
    param_1[0x3d] = uVar5;
    auVar39 = VectorCompareEqual(auStack_100,0,4);
    param_1[0x3e] = uVar9;
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0xd) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 0xf) = SUB168(auVar38 & ~auVar40,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x11),auVar37,4);
    param_1[0x3f] = uVar6;
    auVar40 = VectorCompareEqual(auStack_f0,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x11) = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 0x13) = SUB168(auVar38 & ~auVar39,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x15),auVar37,4);
    auVar39 = VectorCompareEqual(auStack_e0,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x15) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 0x17) = SUB168(auVar38 & ~auVar40,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x19),auVar37,4);
    auVar40 = VectorCompareEqual(auStack_d0,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x19) = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 0x1b) = SUB168(auVar38 & ~auVar39,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x1d),auVar37,4);
    auVar39 = VectorCompareEqual(auStack_c0,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x1d) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 0x1f) = SUB168(auVar38 & ~auVar40,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x21),auVar37,4);
    auVar40 = VectorCompareEqual(auStack_b0,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x21) = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 0x23) = SUB168(auVar38 & ~auVar39,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x25),auVar37,4);
    auVar39 = VectorCompareEqual(auStack_a0,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x25) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 0x27) = SUB168(auVar38 & ~auVar40,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x29),auVar37,4);
    auVar40 = VectorCompareEqual(auStack_90,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x29) = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 0x2b) = SUB168(auVar38 & ~auVar39,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x2d),auVar37,4);
    auVar39 = VectorCompareEqual(auStack_80,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x2d) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 0x2f) = SUB168(auVar38 & ~auVar40,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x31),auVar37,4);
    auVar40 = VectorCompareEqual(auStack_70,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x31) = SUB168(auVar38 & ~auVar39,0);
    *(longlong *)(param_1 + 0x33) = SUB168(auVar38 & ~auVar39,8);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x35),auVar37,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x35) = SUB168(auVar38 & ~auVar40,0);
    *(longlong *)(param_1 + 0x37) = SUB168(auVar38 & ~auVar40,8);
    auVar37 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x39),auVar37,4);
    auVar38 = VectorCompareEqual(auStack_60,0,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x39) = SUB168(auVar37 & ~auVar38,0);
    *(longlong *)(param_1 + 0x3b) = SUB168(auVar37 & ~auVar38,8);
    cVar1 = (char)param_1[0x41];
  }
  if ((cVar1 != '\0') && (uVar5 = param_1[0x42], param_1[0x42] = uVar5 + 1, *param_1 < uVar5 + 1)) {
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  piVar14 = (int *)*param_2;
  iVar21 = piVar14[1];
  FUN_71ba2da8(*piVar14 + piVar14[5],*piVar14);
  piVar14 = (int *)(iVar21 + extraout_r1_00 * 0x14);
  iStack_160 = piVar14[1];
  if (0 < iStack_160) {
    fVar34 = 0.0;
    iVar21 = 4;
    iVar22 = -0x38;
    iVar23 = 0x14;
    iVar15 = 0;
    iStack_144 = 0;
    fVar31 = fVar34;
    do {
      piVar2 = (int *)param_2[1];
      iVar16 = piVar2[1];
      FUN_71ba2da8(*piVar2 + piVar2[5],*piVar2);
      piVar2 = (int *)(iVar16 + extraout_r1_01 * 0xc);
      iVar7 = *piVar2;
      iVar16 = 0;
      if (piVar2[1] != iVar7) {
        iVar16 = iVar7;
      }
      pfVar17 = (float *)(iVar16 + iVar15 * 0x104);
      iVar7 = 0;
      fVar29 = *pfVar17;
      pfVar12 = pfVar17;
      do {
        pfVar20 = (float *)(iVar16 + iVar21 + iVar7);
        iVar7 = iVar7 + 4;
        fVar30 = *pfVar20;
        if (fVar29 < fVar30) {
          pfVar12 = pfVar20;
          fVar29 = fVar30;
        }
      } while (iVar7 != 0x100);
      uVar5 = (int)pfVar12 - (int)pfVar17 >> 2;
      uVar9 = 0xe;
      if (0xe < (int)uVar5) {
        uVar9 = uVar5;
      }
      fVar29 = fVar34;
      if ((int)(uVar9 - 0xe) < (int)(uVar5 - 4)) {
        pfVar20 = (float *)(iVar16 + iVar22 + uVar9 * 4);
        iVar7 = (uVar5 - uVar9) + 10;
        do {
          fVar30 = *pfVar20;
          pfVar20 = pfVar20 + 1;
          if (fVar30 < fVar29) {
            fVar30 = fVar29;
          }
          fVar29 = fVar30;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar9 = uVar5;
      if (0x31 < (int)uVar5) {
        uVar9 = 0x32;
      }
      if ((int)(uVar5 + 5) < (int)(uVar9 + 0xf)) {
        pfVar20 = (float *)(iVar16 + iVar23 + uVar5 * 4);
        iVar16 = (uVar9 - uVar5) + 10;
        fVar30 = fVar29;
        do {
          fVar29 = *pfVar20;
          pfVar20 = pfVar20 + 1;
          if (fVar29 < fVar30) {
            fVar29 = fVar30;
          }
          iVar16 = iVar16 + -1;
          fVar30 = fVar29;
        } while (iVar16 != 0);
      }
      iVar7 = 8;
      iVar25 = 0;
      iVar16 = piVar14[2];
      pfVar19 = (float *)(iVar16 + iVar15 * 0x100);
      pfVar13 = pfVar19 + 1;
      fVar30 = pfVar19[1];
      pfVar3 = pfVar13;
      pfVar24 = pfVar19;
      pfVar20 = pfVar13;
      pfVar11 = pfVar19;
      if (*pfVar19 <= fVar30) {
        pfVar3 = pfVar19;
        pfVar24 = pfVar13;
        pfVar20 = pfVar19;
        pfVar11 = pfVar13;
        fVar30 = *pfVar19;
      }
      do {
        while( true ) {
          iVar8 = iVar16 + iStack_144 + iVar25;
          pfVar13 = (float *)(iVar8 + 0xc);
          fVar35 = *(float *)(iVar8 + 8);
          fVar32 = *(float *)(iVar8 + 0xc);
          if (fVar35 <= fVar32) break;
          fVar30 = *pfVar20;
          if (fVar32 < *pfVar20) {
            pfVar3 = pfVar13;
            fVar30 = fVar32;
            pfVar20 = pfVar13;
          }
          if (*pfVar11 <= fVar35) {
            pfVar11 = (float *)((int)pfVar19 + iVar7);
            pfVar24 = pfVar11;
          }
          iVar25 = iVar25 + 8;
          iVar7 = iVar7 + 8;
          if (iVar25 == 0xf8) goto LAB_71aceab0;
        }
        fVar36 = fVar30;
        if (fVar35 < fVar30) {
          fVar36 = fVar35;
        }
        if (fVar35 < fVar30) {
          pfVar3 = (float *)(iVar8 + 8);
          pfVar20 = (float *)(iVar8 + 8);
        }
        if (*pfVar11 <= fVar32) {
          pfVar24 = (float *)(iVar8 + 0xc);
          pfVar11 = pfVar13;
        }
        iVar25 = iVar25 + 8;
        iVar7 = iVar7 + 8;
        fVar30 = fVar36;
      } while (iVar25 != 0xf8);
LAB_71aceab0:
      fVar30 = ABS(*pfVar3);
      if (ABS(*pfVar3) < ABS(*pfVar24)) {
        fVar30 = ABS(*pfVar24);
      }
      if (1 < *piVar14) {
        iVar25 = 8;
        iVar7 = 0;
        pfVar19 = (float *)(iVar16 + (iVar15 + iStack_160) * 0x100);
        pfVar13 = pfVar19 + 1;
        fVar32 = pfVar19[1];
        pfVar3 = pfVar13;
        pfVar20 = pfVar13;
        pfVar11 = pfVar19;
        pfVar24 = pfVar19;
        if (*pfVar19 <= fVar32) {
          pfVar3 = pfVar19;
          pfVar20 = pfVar19;
          pfVar11 = pfVar13;
          pfVar24 = pfVar13;
          fVar32 = *pfVar19;
        }
        do {
          while( true ) {
            pfVar13 = (float *)((int)pfVar19 + iVar7 + 0xc);
            fVar36 = *(float *)((int)pfVar19 + iVar7 + 8);
            fVar35 = *(float *)((int)pfVar19 + iVar7 + 0xc);
            if (fVar36 <= fVar35) break;
            fVar32 = *pfVar20;
            if (fVar35 < *pfVar20) {
              pfVar3 = pfVar13;
              fVar32 = fVar35;
              pfVar20 = pfVar13;
            }
            if (*pfVar11 <= fVar36) {
              pfVar11 = (float *)((int)pfVar19 + iVar25);
              pfVar24 = pfVar11;
            }
            iVar7 = iVar7 + 8;
            iVar25 = iVar25 + 8;
            if (iVar7 == 0xf8) goto LAB_71acebb8;
          }
          pfVar4 = (float *)((int)pfVar19 + iVar7 + 8);
          fVar33 = fVar32;
          if (fVar36 < fVar32) {
            fVar33 = fVar36;
          }
          if (fVar36 < fVar32) {
            pfVar3 = pfVar4;
            pfVar20 = pfVar4;
          }
          if (*pfVar11 <= fVar35) {
            pfVar24 = (float *)((int)pfVar19 + iVar7 + 0xc);
            pfVar11 = pfVar13;
          }
          iVar7 = iVar7 + 8;
          iVar25 = iVar25 + 8;
          fVar32 = fVar33;
        } while (iVar7 != 0xf8);
LAB_71acebb8:
        fVar32 = ABS(*pfVar3);
        if (ABS(*pfVar3) < ABS(*pfVar24)) {
          fVar32 = ABS(*pfVar24);
        }
        if (fVar30 < fVar32) {
          fVar30 = fVar32;
        }
      }
      bVar28 = SBORROW4(uVar5,1);
      bVar26 = (int)(uVar5 - 1) < 0;
      bVar27 = uVar5 == 1;
      if (0 < (int)uVar5) {
        bVar26 = fVar30 < 100.0;
        bVar27 = fVar30 == 100.0;
        bVar28 = NAN(fVar30);
      }
      if (!bVar27 && bVar26 == bVar28) {
        fVar29 = fVar29 * 100.0;
        fVar30 = *(float *)((int)pfVar17 + ((int)pfVar12 - (int)pfVar17));
        bVar26 = fVar30 < fVar29;
        bVar27 = fVar30 == fVar29;
        bVar28 = NAN(fVar30) || NAN(fVar29);
        if (!bVar27 && !bVar26) {
          bVar26 = fVar30 < fVar31;
          bVar27 = fVar30 == fVar31;
          bVar28 = NAN(fVar30) || NAN(fVar31);
        }
        if (!bVar27 && bVar26 == bVar28) {
          param_1[0x42] = 0;
          *(undefined1 *)(param_1 + 0x41) = 1;
          param_1[0x40] = uVar5;
          iStack_160 = piVar14[1];
          fVar31 = fVar30;
        }
      }
      iVar23 = iVar23 + 0x104;
      iVar22 = iVar22 + 0x104;
      iVar21 = iVar21 + 0x104;
      iStack_144 = iStack_144 + 0x100;
      iVar15 = iVar15 + 1;
    } while (iVar15 < iStack_160);
  }
  return;
}


// =========================================================================
// Function: loPDGD_pTwYSaiIbtDEINMSsNDaupSxJvfFWonVE_iZbtIqHxeKInivNbnxKVkKKSDlhIZXgZrpTgtdKXijDoEEclF
// Entry: 0x71acec8c | Size: 116 bytes
// =========================================================================

void loPDGD_pTwYSaiIbtDEINMSsNDaupSxJvfFWonVE_iZbtIqHxeKInivNbnxKVkKKSDlhIZXgZrpTgtdKXijDoEEclF
               (int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (5 < *(uint *)(param_1 + 4)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  iVar2 = 0;
  do {
    if (5 < *(uint *)(param_1 + 8 + iVar2)) {
      puVar1 = (undefined4 *)((int)param_2 + iVar2);
      *puVar1 = 0;
      puVar1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puVar1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      puVar1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      puVar1[4] = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0xf4);
  if (5 < *(uint *)(param_1 + 0xfc)) {
    param_2[0x3f] = 0;
    param_2[0x40] = 0;
  }
  return;
}


// =========================================================================
// Function: JyDUheVSBAFhb_ShShlsDKmKSGxNHjRUartnBuzekpuxPGgYdrsaJKHHOfypQe_JWMbeFFXLXnAHjjYnXkXucRHjepokYG
// Entry: 0x71acedc0 | Size: 88 bytes
// =========================================================================

void JyDUheVSBAFhb_ShShlsDKmKSGxNHjRUartnBuzekpuxPGgYdrsaJKHHOfypQe_JWMbeFFXLXnAHjjYnXkXucRHjepokYG
               (undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  undefined8 uVar3;
  
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = param_3;
  uVar3 = *param_2;
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((int)param_1 + 0xc) = uVar3;
  uVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *param_1 = uVar3;
  param_1[3] = uVar3;
  *(float *)(param_1 + 5) = 1.0 / fVar2;
  return;
}


// =========================================================================
// Function: XlcgYDgnUMHWRwfn_ZagIzkRHLAZgmZzuXsQNdYkJXwPJLxKipOfsTcOUf
// Entry: 0x71acee18 | Size: 16 bytes
// =========================================================================

void XlcgYDgnUMHWRwfn_ZagIzkRHLAZgmZzuXsQNdYkJXwPJLxKipOfsTcOUf(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


// =========================================================================
// Function: qRmPDgFlmhsysIByjBzdvYeBRAVMAQQXIKCdItjpfVgsnnZMOLTxWvVIAdDWVeVXRcLFzWsEHwowExBkpKuRLDzeEAugjXkNMhNkQQtRMggjTNnhJxLZBg
// Entry: 0x71acee28 | Size: 396 bytes
// =========================================================================

void qRmPDgFlmhsysIByjBzdvYeBRAVMAQQXIKCdItjpfVgsnnZMOLTxWvVIAdDWVeVXRcLFzWsEHwowExBkpKuRLDzeEAugjXkNMhNkQQtRMggjTNnhJxLZBg
               (undefined8 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
               int param_7)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_124 [65];
  
  iVar5 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar5 + 1U;
  if (0 < *(int *)((int)param_1 + 0x34)) {
    iVar6 = *(int *)((int)param_1 + 0x34) + -1;
    *(int *)((int)param_1 + 0x34) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)param_1 + 0x14);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((int)param_1 + 0x14);
      param_1[3] = *(undefined8 *)((int)param_1 + 0xc);
      *param_1 = *(undefined8 *)((int)param_1 + 0xc);
    }
    else {
      fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = *(float *)(param_1 + 5) * fVar8;
      *(float *)((int)param_1 + 4) =
           (1.0 - fVar8) * *(float *)(param_1 + 2) + *(float *)((int)param_1 + 0x1c) * fVar8;
      *(float *)(param_1 + 1) =
           (1.0 - fVar8) * *(float *)((int)param_1 + 0x14) + *(float *)(param_1 + 4) * fVar8;
    }
  }
  iVar6 = -4;
  do {
    puVar1 = (uint *)(param_3 - iVar6);
    if (10 < *puVar1) break;
    bVar7 = iVar6 != -0xfc;
    iVar6 = iVar6 + -4;
  } while (bVar7);
  uVar2 = *(int *)((int)param_1 + 0x2c) + 1;
  if (10 < *puVar1) {
    uVar2 = 1;
  }
  *(uint *)((int)param_1 + 0x2c) = uVar2;
  if (((param_5 <= uVar2) && (param_6 == 0)) && (param_5 < iVar5 + 1U)) {
    fVar8 = *(float *)((int)param_1 + 4);
    fVar9 = *(float *)(param_1 + 1);
    iVar5 = 0;
    do {
      pfVar3 = (float *)(param_2 + iVar5);
      pfVar4 = (float *)((int)afStack_124 + iVar5);
      iVar5 = iVar5 + 4;
      fVar10 = 0.0;
      if (fVar9 < *pfVar3) {
        fVar10 = fVar8 / *pfVar3;
      }
      *pfVar4 = fVar10;
    } while (iVar5 != 0x104);
    thunk_loPDGD_pTwYSaiIbtDEINMSsNDaupSxJvfFWonVE_iZbtIqHxeKInivNbnxKVkKKSDlhIZXgZrpTgtdKXijDoEEclF
              (param_3,afStack_124);
    iVar5 = 0;
    do {
      pfVar3 = (float *)(param_4 + iVar5);
      fVar8 = *(float *)((int)afStack_124 + iVar5);
      pfVar4 = (float *)(param_7 + iVar5);
      iVar5 = iVar5 + 4;
      *pfVar4 = fVar8 * *pfVar3;
      pfVar4[0x41] = fVar8 * pfVar3[0x41];
    } while (iVar5 != 0x104);
    return;
  }
  imp___aeabi_memclr4(param_7,0x208);
  return;
}


// =========================================================================
// Function: mViPhnVV_xxCg_DnGroG_sfVEnRyXebGuJSGzTMOvVcnIzzeHGkqqkWda
// Entry: 0x71acefb8 | Size: 120 bytes
// =========================================================================

void mViPhnVV_xxCg_DnGroG_sfVEnRyXebGuJSGzTMOvVcnIzzeHGkqqkWda(undefined8 *param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  if (*(int *)((int)param_1 + 0x34) < 1) {
    return;
  }
  iVar1 = *(int *)((int)param_1 + 0x34) + -1;
  *(int *)((int)param_1 + 0x34) = iVar1;
  if (iVar1 != 0) {
    fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = *(float *)(param_1 + 5) * fVar2;
    *(float *)((int)param_1 + 4) =
         (1.0 - fVar2) * *(float *)(param_1 + 2) + *(float *)((int)param_1 + 0x1c) * fVar2;
    *(float *)(param_1 + 1) =
         (1.0 - fVar2) * *(float *)((int)param_1 + 0x14) + *(float *)(param_1 + 4) * fVar2;
    return;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)param_1 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)((int)param_1 + 0x14);
  param_1[3] = *(undefined8 *)((int)param_1 + 0xc);
  *param_1 = *(undefined8 *)((int)param_1 + 0xc);
  return;
}


// =========================================================================
// Function: RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk
// Entry: 0x71acf080 | Size: 24 bytes
// =========================================================================

void RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk(int param_1)

{
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP
// Entry: 0x71acf098 | Size: 4 bytes
// =========================================================================

void bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP(void)

{
  return;
}


// =========================================================================
// Function: VQQhdEHDvMgcGvhwzVKyRncfIXLRJ_TLUcnv
// Entry: 0x71acf09c | Size: 20 bytes
// =========================================================================

void VQQhdEHDvMgcGvhwzVKyRncfIXLRJ_TLUcnv(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x824);
  return;
}


// =========================================================================
// Function: ZnlRfgxGcKTQRttmDX_kCmjzPnabWxptlkz_SSytWdPpIBuLgAnYpzkdPYBRvKlFWFZEQioIS
// Entry: 0x71acf0b0 | Size: 460 bytes
// =========================================================================

void ZnlRfgxGcKTQRttmDX_kCmjzPnabWxptlkz_SSytWdPpIBuLgAnYpzkdPYBRvKlFWFZEQioIS
               (float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = 0.0;
  fVar6 = fVar5;
  if (param_3 != 0) {
    fVar6 = 0.0;
    param_3 = param_3 << 2;
    do {
      fVar7 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
      fVar6 = fVar6 + fVar7 * fVar7;
    } while (param_3 != 0);
  }
  iVar1 = 0x200;
  param_1[0x208] = fVar6;
  do {
    pfVar3 = (float *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
    fVar5 = fVar5 + *pfVar3 * *pfVar3;
  } while (iVar1 != 0x300);
  fVar6 = 0.0;
  iVar1 = 0x300;
  param_1[0x206] = fVar5;
  do {
    pfVar3 = (float *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
    fVar6 = fVar6 + *pfVar3 * *pfVar3;
  } while (iVar1 != 0x400);
  fVar5 = 0.0;
  iVar1 = 0;
  param_1[0x207] = fVar6;
  do {
    pfVar3 = (float *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
    fVar5 = fVar5 + *pfVar3 * *pfVar3;
  } while (iVar1 != 0x100);
  fVar6 = 0.0;
  iVar1 = 0x100;
  param_1[0x204] = fVar5;
  do {
    pfVar3 = (float *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
    fVar6 = fVar6 + *pfVar3 * *pfVar3;
  } while (iVar1 != 0x200);
  fVar5 = *param_1;
  iVar1 = 4;
  param_1[0x205] = fVar6;
  pfVar3 = param_1;
  fVar6 = fVar5;
  do {
    pfVar4 = (float *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
    fVar7 = *pfVar4;
    if (fVar6 < fVar7) {
      pfVar3 = pfVar4;
      fVar6 = fVar7;
    }
  } while (iVar1 != 0x100);
  fVar6 = *pfVar3;
  iVar1 = 4;
  param_1[0x209] = fVar6;
  pfVar3 = param_1;
  do {
    pfVar4 = (float *)((int)param_1 + iVar1);
    iVar1 = iVar1 + 4;
    fVar7 = *pfVar4;
    if (fVar7 < fVar5) {
      pfVar3 = pfVar4;
      fVar5 = fVar7;
    }
  } while (iVar1 != 0x100);
  pfVar4 = param_1 + 0x40;
  iVar1 = 0;
  if (fVar6 < -*pfVar3) {
    fVar6 = -*pfVar3;
  }
  fVar5 = param_1[0x40];
  param_1[0x209] = fVar6;
  pfVar3 = pfVar4;
  fVar6 = fVar5;
  do {
    pfVar2 = (float *)((int)param_1 + iVar1 + 0x104);
    iVar1 = iVar1 + 4;
    fVar7 = *pfVar2;
    if (fVar6 < fVar7) {
      pfVar3 = pfVar2;
      fVar6 = fVar7;
    }
  } while (iVar1 != 0xfc);
  fVar6 = *pfVar3;
  iVar1 = 0;
  param_1[0x20a] = fVar6;
  do {
    pfVar3 = (float *)((int)param_1 + iVar1 + 0x104);
    iVar1 = iVar1 + 4;
    fVar7 = *pfVar3;
    if (fVar7 < fVar5) {
      pfVar4 = pfVar3;
      fVar5 = fVar7;
    }
  } while (iVar1 != 0xfc);
  if (fVar6 < -*pfVar4) {
    fVar6 = -*pfVar4;
  }
  param_1[0x20a] = fVar6;
  return;
}


// =========================================================================
// Function: eJGcFHYSIwYdoOxjRQrhwKyWiNFspBPQGGkhNqBYkFZYOcsfhAuuBapLJCkxPItCaqqffLKKLUDqZmTfEGMYOOObdYNaperPI_CnWmQdxBMKFufQCvwVN
// Entry: 0x71acf2b4 | Size: 104 bytes
// =========================================================================

void eJGcFHYSIwYdoOxjRQrhwKyWiNFspBPQGGkhNqBYkFZYOcsfhAuuBapLJCkxPItCaqqffLKKLUDqZmTfEGMYOOObdYNaperPI_CnWmQdxBMKFufQCvwVN
               (int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (0 < param_3 * 4) {
    imp___aeabi_memclr4(param_2);
  }
  iVar2 = param_1[1];
  for (iVar1 = *param_1; iVar1 != iVar2; iVar1 = iVar1 + 0x104) {
    iVar3 = 0;
    do {
      pfVar4 = (float *)(param_2 + iVar3);
      pfVar5 = (float *)(iVar1 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar4 = *pfVar5 + *pfVar4;
    } while (iVar3 != 0x104);
  }
  return;
}


// =========================================================================
// Function: BRvvOUkpCNBwQmZmjdnxCOJxyoSSQPulfDEuJzMFcIAjBBlXCmpZ_qO__CfhiKVLvZMNhnXnBQNfFMKYftKlgAQwKtbxEGSKc_OtDVJXXnevhQiKWSBnrgfywZDPnwakMRhpvuB
// Entry: 0x71acf31c | Size: 112 bytes
// =========================================================================

void BRvvOUkpCNBwQmZmjdnxCOJxyoSSQPulfDEuJzMFcIAjBBlXCmpZ_qO__CfhiKVLvZMNhnXnBQNfFMKYftKlgAQwKtbxEGSKc_OtDVJXXnevhQiKWSBnrgfywZDPnwakMRhpvuB
               (undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_4 != 0) {
    iVar6 = param_3;
  }
  if (0 < param_4) {
    imp___aeabi_memclr4(param_3,param_4 << 2);
  }
  iVar2 = param_2[1];
  for (iVar1 = *param_2; iVar1 != iVar2; iVar1 = iVar1 + 0x104) {
    iVar3 = 0;
    do {
      pfVar4 = (float *)(iVar6 + iVar3);
      pfVar5 = (float *)(iVar1 + iVar3);
      iVar3 = iVar3 + 4;
      *pfVar4 = *pfVar5 + *pfVar4;
    } while (iVar3 != 0x104);
  }
  return;
}


// =========================================================================
// Function: vxTdEU_dI_HhWUjo_AoyemBBsqsk_TsHWp_JphlLeKxntLRnBijTDRlJdvoeyoHALhOGAxbIOltDbfoVEJeShIEcKMnfSzgXysGvWniPYMpfybvnrYstoZRbAUgPqhVamgRVSiny
// Entry: 0x71acf3dc | Size: 1836 bytes
// =========================================================================

float vxTdEU_dI_HhWUjo_AoyemBBsqsk_TsHWp_JphlLeKxntLRnBijTDRlJdvoeyoHALhOGAxbIOltDbfoVEJeShIEcKMnfSzgXysGvWniPYMpfybvnrYstoZRbAUgPqhVamgRVSiny
                (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int *param_6,int param_7,int *param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
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
  
  iVar8 = *param_8;
  if (iVar8 == 1) {
    return 1.0;
  }
  iVar7 = param_8[1];
  if (((char)param_6[1] != '\0') && (0x37 < *param_6)) {
    return 0.001;
  }
  iVar5 = 0x80;
  fVar21 = *(float *)(param_9 + 0x80);
  fVar15 = *(float *)(param_9 + 0x84);
  fVar18 = *(float *)(param_9 + 0x88);
  fVar24 = *(float *)(param_9 + 0x8c);
  fVar26 = *(float *)(param_9 + 0x90);
  fVar27 = *(float *)(param_9 + 0x94);
  fVar11 = *(float *)(param_9 + 0x98);
  fVar10 = *(float *)(param_9 + 0x9c);
  fVar33 = *(float *)(param_9 + 0xa0);
  fVar35 = *(float *)(param_9 + 0xa4);
  fVar31 = *(float *)(param_9 + 0xa8);
  fVar12 = *(float *)(param_9 + 0xac);
  fVar14 = *(float *)(param_9 + 0xb0);
  fVar30 = fVar21;
  if (fVar15 < fVar21) {
    fVar30 = fVar15;
  }
  fVar28 = fVar30;
  if (fVar18 < fVar30) {
    fVar28 = fVar18;
  }
  fVar34 = fVar28;
  if (fVar24 < fVar28) {
    fVar34 = fVar24;
  }
  fVar36 = fVar34;
  if (fVar26 < fVar34) {
    fVar36 = fVar26;
  }
  fVar32 = fVar36;
  if (fVar27 < fVar36) {
    fVar32 = fVar27;
  }
  fVar13 = fVar32;
  if (fVar11 < fVar32) {
    fVar13 = fVar11;
  }
  fVar17 = fVar13;
  if (fVar10 < fVar13) {
    fVar17 = fVar10;
  }
  fVar20 = fVar17;
  if (fVar33 < fVar17) {
    fVar20 = fVar33;
  }
  fVar23 = fVar20;
  if (fVar35 < fVar20) {
    fVar23 = fVar35;
  }
  fVar25 = fVar23;
  if (fVar31 < fVar23) {
    fVar25 = fVar31;
  }
  fVar16 = *(float *)(param_9 + 0xb4);
  fVar29 = fVar25;
  if (fVar12 < fVar25) {
    fVar29 = fVar12;
  }
  fVar19 = *(float *)(param_9 + 0xb8);
  fVar22 = *(float *)(param_9 + 0xbc);
  if (fVar15 < fVar21) {
    iVar5 = 0x84;
  }
  if (fVar18 < fVar30) {
    iVar5 = 0x88;
  }
  fVar15 = *(float *)(param_9 + 0xdc);
  fVar30 = fVar29;
  if (fVar14 < fVar29) {
    fVar30 = fVar14;
  }
  if (fVar24 < fVar28) {
    iVar5 = 0x8c;
  }
  fVar18 = fVar30;
  if (fVar16 < fVar30) {
    fVar18 = fVar16;
  }
  if (fVar26 < fVar34) {
    iVar5 = 0x90;
  }
  fVar24 = *(float *)(param_9 + 0xc0);
  fVar21 = fVar18;
  if (fVar19 < fVar18) {
    fVar21 = fVar19;
  }
  if (fVar27 < fVar36) {
    iVar5 = 0x94;
  }
  fVar27 = *(float *)(param_9 + 0xc4);
  fVar26 = fVar21;
  if (fVar22 < fVar21) {
    fVar26 = fVar22;
  }
  if (fVar11 < fVar32) {
    iVar5 = 0x98;
  }
  fVar28 = *(float *)(param_9 + 200);
  fVar11 = fVar26;
  if (fVar24 < fVar26) {
    fVar11 = fVar24;
  }
  if (fVar10 < fVar13) {
    iVar5 = 0x9c;
  }
  fVar34 = *(float *)(param_9 + 0xcc);
  fVar10 = fVar11;
  if (fVar27 < fVar11) {
    fVar10 = fVar27;
  }
  if (fVar33 < fVar17) {
    iVar5 = 0xa0;
  }
  fVar36 = *(float *)(param_9 + 0xd0);
  fVar33 = fVar10;
  if (fVar28 < fVar10) {
    fVar33 = fVar28;
  }
  if (fVar35 < fVar20) {
    iVar5 = 0xa4;
  }
  fVar32 = *(float *)(param_9 + 0xd4);
  fVar35 = fVar33;
  if (fVar34 < fVar33) {
    fVar35 = fVar34;
  }
  if (fVar31 < fVar23) {
    iVar5 = 0xa8;
  }
  fVar13 = *(float *)(param_9 + 0xd8);
  fVar31 = fVar35;
  if (fVar36 < fVar35) {
    fVar31 = fVar36;
  }
  if (fVar12 < fVar25) {
    iVar5 = 0xac;
  }
  fVar12 = fVar31;
  if (fVar32 < fVar31) {
    fVar12 = fVar32;
  }
  if (fVar14 < fVar29) {
    iVar5 = 0xb0;
  }
  fVar17 = *(float *)(param_9 + 0xe0);
  fVar14 = fVar12;
  if (fVar13 < fVar12) {
    fVar14 = fVar13;
  }
  if (fVar16 < fVar30) {
    iVar5 = 0xb4;
  }
  fVar20 = *(float *)(param_9 + 0xe4);
  fVar30 = fVar14;
  if (fVar15 < fVar14) {
    fVar30 = fVar15;
  }
  if (fVar19 < fVar18) {
    iVar5 = 0xb8;
  }
  fVar23 = *(float *)(param_9 + 0xe8);
  fVar18 = fVar30;
  if (fVar17 < fVar30) {
    fVar18 = fVar17;
  }
  if (fVar22 < fVar21) {
    iVar5 = 0xbc;
  }
  fVar25 = *(float *)(param_9 + 0xec);
  fVar21 = fVar18;
  if (fVar20 < fVar18) {
    fVar21 = fVar20;
  }
  if (fVar24 < fVar26) {
    iVar5 = 0xc0;
  }
  fVar26 = *(float *)(param_9 + 0xf8);
  fVar24 = fVar21;
  if (fVar23 < fVar21) {
    fVar24 = fVar23;
  }
  if (fVar27 < fVar11) {
    iVar5 = 0xc4;
  }
  fVar29 = *(float *)(param_9 + 0xf0);
  fVar27 = *(float *)(param_9 + 0xfc);
  fVar11 = fVar24;
  if (fVar25 < fVar24) {
    fVar11 = fVar25;
  }
  fVar16 = *(float *)(param_9 + 0xf4);
  if (fVar28 < fVar10) {
    iVar5 = 200;
  }
  if (fVar34 < fVar33) {
    iVar5 = 0xcc;
  }
  if (fVar36 < fVar35) {
    iVar5 = 0xd0;
  }
  fVar10 = fVar11;
  if (fVar29 < fVar11) {
    fVar10 = fVar29;
  }
  if (fVar32 < fVar31) {
    iVar5 = 0xd4;
  }
  if (fVar13 < fVar12) {
    iVar5 = 0xd8;
  }
  fVar12 = fVar10;
  if (fVar16 < fVar10) {
    fVar12 = fVar16;
  }
  if (fVar15 < fVar14) {
    iVar5 = 0xdc;
  }
  if (fVar17 < fVar30) {
    iVar5 = 0xe0;
  }
  if (fVar20 < fVar18) {
    iVar5 = 0xe4;
  }
  fVar30 = fVar12;
  if (fVar26 < fVar12) {
    fVar30 = fVar26;
  }
  if (fVar23 < fVar21) {
    iVar5 = 0xe8;
  }
  if (fVar25 < fVar24) {
    iVar5 = 0xec;
  }
  if (fVar29 < fVar11) {
    iVar5 = 0xf0;
  }
  fVar11 = fVar30;
  if (fVar27 < fVar30) {
    fVar11 = fVar27;
  }
  if (fVar16 < fVar10) {
    iVar5 = 0xf4;
  }
  if (fVar26 < fVar12) {
    iVar5 = 0xf8;
  }
  if (fVar27 < fVar30) {
    iVar5 = 0xfc;
  }
  if (*(float *)(param_9 + 0x100) < fVar11) {
    iVar5 = 0x100;
  }
  fVar30 = *(float *)(param_9 + iVar5);
  if (param_7 != 0) {
    fVar10 = 0.001;
    if (fVar30 < 0.001) {
      fVar10 = fVar30;
    }
    return fVar10;
  }
  if (iVar7 < 1) {
    fVar10 = 0.0;
    fVar11 = fVar10;
  }
  else {
    iVar3 = 0;
    iVar5 = param_8[2];
    fVar10 = 0.0;
    do {
      iVar1 = 0;
      fVar11 = 0.0;
      do {
        pfVar6 = (float *)(iVar5 + iVar1);
        iVar1 = iVar1 + 4;
        fVar11 = fVar11 + *pfVar6 * *pfVar6;
      } while (iVar1 != 0x100);
      iVar5 = iVar5 + 0x100;
      iVar3 = iVar3 + 1;
      if (fVar10 < fVar11) {
        fVar10 = fVar11;
      }
    } while (iVar3 != iVar7);
    bVar9 = SBORROW4(iVar8,2);
    iVar5 = iVar8 + -2;
    if (1 < iVar8) {
      bVar9 = SBORROW4(iVar7,1);
      iVar5 = iVar7 + -1;
    }
    fVar11 = 0.0;
    if (iVar5 < 0 == bVar9) {
      iVar5 = 1;
      iVar3 = param_8[2] + iVar7 * 0x100;
      fVar11 = 0.0;
      do {
        iVar4 = 0;
        iVar1 = iVar3;
        do {
          iVar2 = 0;
          fVar12 = 0.0;
          do {
            pfVar6 = (float *)(iVar1 + iVar2);
            iVar2 = iVar2 + 4;
            fVar12 = fVar12 + *pfVar6 * *pfVar6;
          } while (iVar2 != 0x100);
          iVar1 = iVar1 + 0x100;
          iVar4 = iVar4 + 1;
          if (fVar11 < fVar12) {
            fVar11 = fVar12;
          }
        } while (iVar4 != iVar7);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + iVar7 * 0x100;
      } while (iVar5 != iVar8);
    }
  }
  fVar18 = 1.0;
  fVar14 = *(float *)(param_1 + 0x1cc) * 64.0;
  fVar15 = 1.0;
  fVar12 = fVar10;
  if (fVar10 < fVar14) {
    fVar12 = fVar14;
  }
  if (fVar12 <= fVar11) {
    fVar15 = SQRT(fVar10 / fVar11) * *(float *)(param_1 + 0x1d0);
  }
  iVar8 = (**(code **)(**(int **)(param_1 + 0x954) + 8))();
  if ((iVar8 == 0) && (iVar8 = *(int *)(param_1 + 0x1ec), iVar8 != 0)) {
    iVar7 = 0;
    do {
      iVar3 = param_4 + iVar7;
      iVar5 = param_2 + iVar7;
      if (*(float *)(param_1 + 0x1c4) *
          (*(float *)(iVar3 + 4) + 0.0 + *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) +
           *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x18) +
           *(float *)(iVar3 + 0x1c) + *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x24) +
           *(float *)(iVar3 + 0x28) + *(float *)(iVar3 + 0x2c) + *(float *)(iVar3 + 0x30) +
           *(float *)(iVar3 + 0x34) + *(float *)(iVar3 + 0x38) + *(float *)(iVar3 + 0x3c)) <
          *(float *)(iVar5 + 4) + 0.0 + *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0xc) +
          *(float *)(iVar5 + 0x10) + *(float *)(iVar5 + 0x14) + *(float *)(iVar5 + 0x18) +
          *(float *)(iVar5 + 0x1c) + *(float *)(iVar5 + 0x20) + *(float *)(iVar5 + 0x24) +
          *(float *)(iVar5 + 0x28) + *(float *)(iVar5 + 0x2c) + *(float *)(iVar5 + 0x30) +
          *(float *)(iVar5 + 0x34) + *(float *)(iVar5 + 0x38) + *(float *)(iVar5 + 0x3c)) {
        fVar18 = *(float *)(param_1 + 0x1c8);
        break;
      }
      iVar7 = iVar7 + 0x104;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (fVar15 < fVar30) {
    fVar30 = fVar15;
  }
  if (fVar18 < fVar30) {
    fVar30 = fVar18;
  }
  return fVar30;
}


// =========================================================================
// Function: Y_rkLfJPmVIrtNDBdAsfVvQzGScLbXBsvMvkVPGWCo_RlhmTKZPwbsrVHRSugatugxFADvUOfLjfIIzcIDIQKGp
// Entry: 0x71acfb18 | Size: 216 bytes
// =========================================================================

void Y_rkLfJPmVIrtNDBdAsfVvQzGScLbXBsvMvkVPGWCo_RlhmTKZPwbsrVHRSugatugxFADvUOfLjfIIzcIDIQKGp
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x954) + 8))();
  iVar2 = 0x63c;
  if (iVar1 != 0) {
    iVar2 = 0x328;
  }
  iVar1 = 0;
  do {
    iVar4 = param_1 + iVar2 + iVar1;
    fVar5 = *(float *)(param_3 + iVar1) / (*(float *)(param_2 + iVar1) + 1.0);
    fVar6 = 1.0;
    if (*(float *)(iVar4 + 8) < fVar5) {
      fVar7 = *(float *)(param_3 + iVar1) / (*(float *)(param_4 + iVar1) + 1.0);
      fVar6 = 1.0;
      if (*(float *)(iVar4 + 0x210) < fVar7) {
        fVar7 = *(float *)(iVar4 + 0x210) / fVar7;
        fVar6 = (*(float *)(iVar4 + 0x10c) - fVar5) /
                (*(float *)(iVar4 + 0x10c) - *(float *)(iVar4 + 8));
        if (fVar6 < fVar7) {
          fVar6 = fVar7;
        }
      }
    }
    pfVar3 = (float *)(param_5 + iVar1);
    iVar1 = iVar1 + 4;
    *pfVar3 = fVar6;
  } while (iVar1 != 0x104);
  return;
}


// =========================================================================
// Function: CesDVoQBCEvoyq_CbVCCgVWdluvSkmpzqHjKdCseSwHhjfAfMaYzbpFeUquCGNnhOsDHWXohpHTxyfULuocuvALIWUVII
// Entry: 0x71acfbf0 | Size: 364 bytes
// =========================================================================

void CesDVoQBCEvoyq_CbVCCgVWdluvSkmpzqHjKdCseSwHhjfAfMaYzbpFeUquCGNnhOsDHWXohpHTxyfULuocuvALIWUVII
               (int param_1,float *param_2,undefined4 param_3,float *param_4,undefined4 param_5,
               float *param_6,undefined4 param_7,int param_8,int param_9,float *param_10,
               int param_11)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_9 == 0) {
    iVar4 = 0xe4;
    if (param_8 != 0) {
      iVar4 = 0xe0;
    }
    if (param_11 != 0) {
      fVar5 = *(float *)(param_1 + iVar4);
      pfVar2 = param_10;
      do {
        fVar6 = *param_2;
        param_2 = param_2 + 1;
        fVar7 = 1.0;
        if (0.0 < fVar6) {
          fVar7 = fVar5 / fVar6;
        }
        if (1.0 < fVar7) {
          fVar7 = 1.0;
        }
        param_11 = param_11 + -1;
        *pfVar2 = fVar7;
        pfVar2 = pfVar2 + 1;
      } while (param_11 != 0);
    }
    if ((*(char *)(param_1 + 0x314) != '\0') && (*(char *)(param_1 + 0x178) == '\0')) {
      return;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x954) + 8))(*(int **)(param_1 + 0x954));
    iVar3 = *(int *)(param_1 + 0x180);
    iVar1 = 0x640;
    if (iVar4 != 0) {
      iVar1 = 0x32c;
    }
    if (-1 < iVar3) {
      pfVar2 = (float *)(param_1 + 500);
      iVar4 = 0;
      do {
        if ((*param_6 < *param_4) || (iVar4 <= *(int *)(param_1 + 0x17c))) {
          fVar7 = *pfVar2 * *(float *)(param_1 + iVar1);
          fVar5 = *param_10;
          if (*param_10 < fVar7) {
            fVar5 = fVar7;
          }
          if (1.0 < fVar5) {
            fVar5 = 1.0;
          }
          *param_10 = fVar5;
        }
        iVar4 = iVar4 + 1;
        pfVar2 = pfVar2 + 1;
        param_10 = param_10 + 1;
        param_6 = param_6 + 1;
        param_4 = param_4 + 1;
      } while (iVar3 + 1 != iVar4);
    }
  }
  else if (0 < param_11 * 4) {
    imp___aeabi_memclr4(param_10);
  }
  return;
}


// =========================================================================
// Function: nAOcKxDlwLhxdddlQkLvJPzGCCtcqMllRgTLEZCyxLICtRWDauXaDuGXMuenIQzWBOOq
// Entry: 0x71acfd5c | Size: 124 bytes
// =========================================================================

void nAOcKxDlwLhxdddlQkLvJPzGCCtcqMllRgTLEZCyxLICtRWDauXaDuGXMuenIQzWBOOq
               (int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x954) + 8))();
  iVar2 = 0x63c;
  if (iVar1 != 0) {
    iVar2 = 0x328;
  }
  if (param_3 != 0) {
    pfVar3 = (float *)(param_1 + 500);
    do {
      fVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      fVar4 = fVar4 * *(float *)(param_1 + iVar2);
      if (fVar4 < *(float *)(param_1 + 0x1d4)) {
        fVar4 = *(float *)(param_1 + 0x1d4);
      }
      if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
      param_3 = param_3 + -1;
      *param_2 = fVar4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// =========================================================================
// Function: yB_fRJUoszIzbVihrUMjGdcacQadytJKblkOJzXsuvZwCsYGPVwyBFAucGRzLaKCIfyPpZCxieBQbPGpdwIJUTgChHzIxkUQiJCudlPjipnHvXiKxsYoPgKZuw
// Entry: 0x71acfdd8 | Size: 4704 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void yB_fRJUoszIzbVihrUMjGdcacQadytJKblkOJzXsuvZwCsYGPVwyBFAucGRzLaKCIfyPpZCxieBQbPGpdwIJUTgChHzIxkUQiJCudlPjipnHvXiKxsYoPgKZuw
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
               undefined4 param_7,int param_8,undefined4 param_9,int param_10,
               undefined1 (*param_11) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
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
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [16];
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  undefined1 auVar68 [12];
  undefined1 auVar69 [12];
  undefined1 auVar70 [12];
  undefined1 auVar71 [12];
  undefined1 auVar72 [12];
  undefined1 auVar73 [12];
  undefined1 auVar74 [12];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar77 [12];
  undefined1 auVar78 [12];
  undefined1 auVar79 [12];
  undefined1 auVar80 [12];
  undefined1 auVar81 [12];
  undefined1 auVar82 [12];
  undefined1 auVar83 [12];
  undefined1 auVar84 [12];
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  undefined1 auVar90 [12];
  undefined1 auVar91 [12];
  undefined1 auVar92 [12];
  undefined1 auVar93 [12];
  undefined1 auVar94 [12];
  undefined1 auVar95 [12];
  undefined1 auVar96 [12];
  undefined1 auVar97 [12];
  undefined1 auVar98 [12];
  undefined1 auVar99 [12];
  undefined1 auVar100 [12];
  undefined1 auVar101 [12];
  undefined1 auVar102 [12];
  undefined1 auVar103 [12];
  undefined1 auVar104 [12];
  undefined1 auVar105 [12];
  undefined1 auVar106 [12];
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
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  undefined1 (*pauVar134) [16];
  undefined1 (*pauVar135) [16];
  undefined1 (*pauVar136) [16];
  undefined1 (*pauVar137) [16];
  undefined1 (*pauVar138) [16];
  undefined1 (*pauVar139) [16];
  undefined1 (*pauVar140) [16];
  undefined1 (*pauVar141) [16];
  int iVar142;
  undefined4 *puVar143;
  int iVar144;
  float *pfVar145;
  uint uVar146;
  float *pfVar147;
  int iVar148;
  undefined1 (*pauVar149) [16];
  float *pfVar150;
  float *pfVar151;
  float *pfVar152;
  float fVar153;
  undefined1 auVar154 [12];
  float fVar163;
  undefined1 auVar155 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar170 [12];
  float fVar166;
  undefined4 in_s5;
  undefined4 in_s6;
  undefined4 in_s7;
  undefined1 auVar285 [12];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar164;
  float fVar165;
  undefined4 extraout_s5;
  undefined1 auVar171 [16];
  undefined1 auVar173 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar181 [16];
  undefined1 auVar183 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar193 [16];
  undefined1 auVar195 [16];
  undefined1 auVar197 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar203 [16];
  undefined1 auVar205 [16];
  undefined1 auVar209 [16];
  undefined1 auVar211 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar226 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar232 [16];
  undefined1 auVar234 [16];
  undefined1 auVar236 [16];
  undefined1 auVar238 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar246 [16];
  undefined1 auVar250 [16];
  undefined1 auVar252 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar267 [16];
  undefined1 auVar269 [16];
  undefined1 auVar271 [16];
  undefined1 auVar275 [16];
  undefined1 auVar278 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  float fVar286;
  float fVar287;
  float fVar302;
  undefined1 in_q2 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  float fVar303;
  float fVar304;
  undefined1 in_q4 [16];
  undefined1 in_q5 [16];
  undefined1 in_q6 [16];
  undefined8 uVar305;
  undefined8 uVar307;
  undefined1 auVar306 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  int iStack_590;
  undefined8 auStack_588 [2];
  undefined1 auStack_578 [16];
  undefined1 auStack_568 [16];
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [16];
  undefined1 auStack_538 [16];
  undefined1 auStack_528 [16];
  undefined1 auStack_518 [16];
  undefined1 auStack_508 [16];
  undefined1 auStack_4f8 [16];
  undefined1 auStack_4e8 [16];
  undefined1 auStack_4d8 [16];
  undefined1 auStack_4c8 [16];
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [16];
  undefined1 auStack_498 [16];
  undefined4 uStack_488;
  float afStack_480 [66];
  float afStack_378 [66];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_170;
  float afStack_16c [50];
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auVar156 [16];
  undefined1 auVar279 [16];
  undefined1 auVar172 [16];
  undefined1 auVar174 [16];
  undefined1 auVar185 [16];
  undefined1 auVar180 [16];
  undefined1 auVar178 [16];
  undefined1 auVar184 [16];
  undefined1 auVar167 [12];
  undefined1 auVar194 [16];
  undefined1 auVar196 [16];
  undefined1 auVar202 [16];
  undefined1 auVar204 [16];
  undefined1 auVar213 [16];
  undefined1 auVar208 [16];
  undefined1 auVar206 [16];
  undefined1 auVar212 [16];
  undefined1 auVar225 [16];
  undefined1 auVar168 [12];
  undefined1 auVar230 [16];
  undefined1 auVar235 [16];
  undefined1 auVar237 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar255 [16];
  undefined1 auVar249 [16];
  undefined1 auVar254 [16];
  undefined1 auVar253 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar169 [12];
  undefined1 auVar268 [16];
  undefined1 auVar270 [16];
  undefined1 auVar272 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar280 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar175 [16];
  undefined1 auVar179 [16];
  undefined1 auVar182 [16];
  undefined1 auVar186 [16];
  undefined1 auVar190 [16];
  undefined1 auVar192 [16];
  undefined1 auVar189 [16];
  undefined1 auVar191 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar207 [16];
  undefined1 auVar210 [16];
  undefined1 auVar214 [16];
  undefined1 auVar217 [16];
  undefined1 auVar219 [16];
  undefined1 auVar218 [16];
  undefined1 auVar224 [16];
  undefined1 auVar223 [16];
  undefined1 auVar227 [16];
  undefined1 auVar233 [16];
  undefined1 auVar231 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar251 [16];
  undefined1 auVar256 [16];
  undefined1 auVar263 [16];
  undefined1 auVar266 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  
  auVar285._4_4_ = in_s6;
  auVar285._0_4_ = in_s5;
  auVar285._8_4_ = in_s7;
  uStack_68 = in_q4._0_8_;
  uStack_60 = in_q4._8_8_;
  uStack_58 = in_q5._0_8_;
  uStack_50 = in_q5._8_8_;
  uStack_48 = in_q6._0_8_;
  uStack_40 = in_q6._8_8_;
  auVar308._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar308._0_8_ = 0x3f8000003f800000;
  auVar308 = *(undefined1 (*) [16])(auVar308 << 0x40 | auVar308);
  uVar305 = auVar308._0_8_;
  *(undefined8 *)param_11[0xf] = uVar305;
  uVar307 = auVar308._8_8_;
  *(undefined8 *)(param_11[0xf] + 8) = uVar307;
  *(undefined4 *)param_11[0x10] = 0x3f800000;
  *(undefined8 *)param_11[0xe] = uVar305;
  *(undefined8 *)(param_11[0xe] + 8) = uVar307;
  pauVar134 = (undefined1 (*) [16])(param_11[0xe] + 4);
  *(undefined8 *)param_11[0xd] = uVar305;
  *(undefined8 *)(param_11[0xd] + 8) = uVar307;
  pauVar135 = (undefined1 (*) [16])(param_11[0xd] + 4);
  *(undefined8 *)param_11[0xc] = uVar305;
  *(undefined8 *)(param_11[0xc] + 8) = uVar307;
  pauVar136 = (undefined1 (*) [16])(param_11[0xc] + 4);
  *(undefined8 *)param_11[0xb] = uVar305;
  *(undefined8 *)(param_11[0xb] + 8) = uVar307;
  pauVar137 = (undefined1 (*) [16])(param_11[0xb] + 4);
  *(undefined8 *)param_11[10] = uVar305;
  *(undefined8 *)(param_11[10] + 8) = uVar307;
  pauVar138 = (undefined1 (*) [16])(param_11[10] + 4);
  *(undefined8 *)param_11[9] = uVar305;
  *(undefined8 *)(param_11[9] + 8) = uVar307;
  pauVar139 = (undefined1 (*) [16])(param_11[9] + 4);
  *(undefined8 *)param_11[8] = uVar305;
  *(undefined8 *)(param_11[8] + 8) = uVar307;
  pauVar140 = (undefined1 (*) [16])(param_11[8] + 4);
  *(undefined8 *)param_11[7] = uVar305;
  *(undefined8 *)(param_11[7] + 8) = uVar307;
  pauVar141 = (undefined1 (*) [16])(param_11[7] + 4);
  *(undefined8 *)param_11[6] = uVar305;
  *(undefined8 *)(param_11[6] + 8) = uVar307;
  *(undefined8 *)*param_11 = uVar305;
  *(undefined8 *)(*param_11 + 8) = uVar307;
  pauVar149 = param_11 + 1;
  *(undefined8 *)param_11[5] = uVar305;
  *(undefined8 *)(param_11[5] + 8) = uVar307;
  *(undefined8 *)*pauVar149 = uVar305;
  *(undefined8 *)(param_11[1] + 8) = uVar307;
  *(undefined8 *)param_11[2] = uVar305;
  *(undefined8 *)(param_11[2] + 8) = uVar307;
  *(undefined8 *)param_11[3] = uVar305;
  *(undefined8 *)(param_11[3] + 8) = uVar307;
  *(undefined8 *)param_11[4] = uVar305;
  *(undefined8 *)(param_11[4] + 8) = uVar307;
  cVar3 = *(char *)(param_3 + 0x24c);
  iVar130 = (**(code **)(**(int **)(param_1 + 0x954) + 8))();
  iVar142 = 0x63c;
  auVar311._4_12_ = in_q4._4_12_;
  auVar311._0_4_ = 0x3f800000;
  if (iVar130 != 0) {
    iVar142 = 0x328;
  }
  fVar153 = *(float *)(param_1 + iVar142);
  pfVar152 = (float *)(param_1 + 500);
  fVar163 = *(float *)(param_1 + 0x1d4);
  iVar130 = 0;
  do {
    pfVar150 = (float *)((int)pfVar152 + iVar130);
    pfVar145 = (float *)((int)afStack_16c + iVar130);
    iVar130 = iVar130 + 4;
    fVar165 = *pfVar150 * fVar153;
    if (fVar165 < fVar163) {
      fVar165 = fVar163;
    }
    if (1.0 < fVar165) {
      fVar165 = 1.0;
    }
    *pfVar145 = fVar165;
  } while (iVar130 != 0x104);
  if (*(int *)(param_1 + 0x1ec) != 0) {
    iVar130 = 0xe4;
    if (param_2 != 0) {
      iVar130 = 0xe0;
    }
    auVar316._12_4_ = in_q4._12_4_;
    auVar316._0_8_ = auVar311._0_8_;
    auVar316._8_4_ = uStack_6c;
    auVar158._4_4_ = afStack_16c[0x31];
    auVar158._0_4_ = afStack_16c[0x30];
    auVar315._8_8_ = uStack_94;
    auVar315._0_8_ = uStack_9c;
    auVar306._8_8_ = uStack_84;
    auVar306._0_8_ = uStack_8c;
    auVar321._8_8_ = uStack_84;
    auVar321._0_8_ = uStack_8c;
    auVar309._8_8_ = uStack_74;
    auVar309._0_8_ = uStack_7c;
    auVar312._8_8_ = auVar316._8_8_;
    auVar312._0_8_ = 0x3f800000;
    uVar146 = 0;
    iStack_590 = 0;
    iVar142 = param_6;
    do {
      thunk_kohdXltvbY_VxaQGDzNppSjMKMXvWdAofwrLjrjSIUHt_xICsjSigJQAyLBcNKoNIbINgnawsBCGkaghyAt
                (*(int *)(param_1 + 0x31c) + uVar146 * 0x1c,param_4 + uVar146 * 0x104,0x41,
                 afStack_378);
      auVar288._4_12_ = in_q2._4_12_;
      auVar310._12_4_ = auVar285._8_4_;
      auVar310._8_4_ = auVar285._4_4_;
      extraout_s5 = auVar285._0_4_;
      auVar310._0_8_ = auVar285._0_8_ << 0x20;
      auVar319._0_12_ = auVar310._4_12_ << 0x20;
      fVar153 = *(float *)(param_1 + 0xe8);
      fVar163 = fVar153 * *(float *)(param_1 + 0xec);
      pfVar150 = (float *)(param_6 + uVar146 * 0x104);
      auVar319._12_4_ = auVar310._12_4_;
      auVar18._4_8_ = auVar319._8_8_;
      auVar18._0_4_ = extraout_s5;
      auVar313._0_8_ = auVar18._0_8_ << 0x20;
      auVar313._8_4_ = *pfVar150;
      auVar313._12_4_ = auVar310._12_4_;
      auVar19._4_8_ = auVar313._8_8_;
      auVar19._0_4_ = extraout_s5;
      auVar318._0_12_ = auVar19 << 0x20;
      auVar318._12_4_ = auVar310._12_4_;
      auVar20._4_8_ = auVar318._8_8_;
      auVar20._0_4_ = extraout_s5;
      auVar317._0_8_ = auVar20._0_8_ << 0x20;
      auVar317._8_4_ = auVar313._8_4_;
      auVar317._12_4_ = auVar310._12_4_;
      auVar21._4_8_ = auVar317._8_8_;
      auVar21._0_4_ = extraout_s5;
      auVar314._0_8_ = auVar21._0_8_ << 0x20;
      auVar314._8_4_ = auVar313._8_4_;
      auVar314._12_4_ = auVar310._12_4_;
      auVar22._4_8_ = auVar314._8_8_;
      auVar22._0_4_ = extraout_s5;
      auVar320._0_8_ = auVar22._0_8_ << 0x20;
      auVar320._8_4_ = auVar313._8_4_;
      auVar320._12_4_ = auVar310._12_4_;
      auVar24._4_8_ = auVar320._8_8_;
      auVar24._0_4_ = extraout_s5;
      auVar172._0_8_ = auVar24._0_8_ << 0x20;
      auVar172._8_4_ = auVar313._8_4_;
      auVar172._12_4_ = auVar310._12_4_;
      fVar164 = auVar312._0_4_;
      fVar165 = fVar164 / (fVar163 - fVar153);
      auVar23._4_8_ = auVar172._8_8_;
      auVar23._0_4_ = extraout_s5;
      auVar171._0_8_ = auVar23._0_8_ << 0x20;
      auVar171._8_4_ = auVar313._8_4_;
      auVar171._12_4_ = auVar310._12_4_;
      auVar174._0_12_ = auVar171._4_12_ << 0x20;
      fVar166 = auVar312._4_4_;
      if (auVar313._8_4_ < fVar163) {
        auVar288._0_4_ = fVar163 - auVar313._8_4_;
        auVar289._12_4_ = in_q2._12_4_;
        auVar289._0_8_ = auVar288._0_8_;
        auVar289._8_4_ = fVar164;
        auVar290._4_12_ = auVar289._4_12_;
        auVar290._0_4_ = auVar288._0_4_ * fVar165;
        auVar291._0_8_ = auVar290._0_8_;
        auVar291._8_4_ = fVar164 - auVar290._0_4_ * auVar290._0_4_;
        auVar291._12_4_ = auVar289._12_4_;
        auVar288._4_12_ = auVar291._4_12_;
        fVar286 = fVar166;
        if (0.0 < auVar291._8_4_) {
          fVar286 = auVar291._8_4_;
        }
        auVar174._12_4_ = auVar310._12_4_;
        auVar25._4_8_ = auVar174._8_8_;
        auVar25._0_4_ = extraout_s5;
        auVar173._0_8_ = auVar25._0_8_ << 0x20;
        auVar173._8_4_ = auVar313._8_4_ * fVar286;
        auVar173._12_4_ = auVar310._12_4_;
        auVar26._4_8_ = auVar173._8_8_;
        auVar26._0_4_ = extraout_s5;
        auVar175._0_12_ = auVar26 << 0x20;
        auVar175._12_4_ = auVar310._12_4_;
        auVar27._4_8_ = auVar175._8_8_;
        auVar27._0_4_ = extraout_s5;
        auVar174._0_8_ = auVar27._0_8_ << 0x20;
        auVar174._8_4_ = auVar173._8_4_;
      }
      auVar176._12_4_ = auVar310._12_4_;
      auVar176._0_12_ = auVar174._0_12_;
      auVar28._4_8_ = auVar176._8_8_;
      auVar28._0_4_ = extraout_s5;
      auVar178._0_12_ = auVar28 << 0x20;
      auVar292._0_4_ = pfVar150[1];
      auVar292._4_12_ = auVar288._4_12_;
      afStack_480[0] = auVar174._8_4_;
      if (auVar292._0_4_ < fVar163) {
        auVar178._12_4_ = auVar310._12_4_;
        auVar29._4_8_ = auVar178._8_8_;
        auVar29._0_4_ = extraout_s5;
        auVar177._0_8_ = auVar29._0_8_ << 0x20;
        auVar177._8_4_ = fVar163 - auVar292._0_4_;
        auVar177._12_4_ = auVar310._12_4_;
        auVar30._4_8_ = auVar177._8_8_;
        auVar30._0_4_ = extraout_s5;
        auVar179._0_12_ = auVar30 << 0x20;
        auVar179._12_4_ = auVar310._12_4_;
        auVar31._4_8_ = auVar179._8_8_;
        auVar31._0_4_ = extraout_s5;
        auVar181._0_8_ = auVar31._0_8_ << 0x20;
        auVar181._8_4_ = auVar177._8_4_;
        auVar293._12_4_ = auVar288._12_4_;
        auVar293._0_8_ = auVar292._0_8_;
        auVar181._12_4_ = auVar310._12_4_;
        auVar34._4_8_ = auVar181._8_8_;
        auVar34._0_4_ = extraout_s5;
        auVar180._0_8_ = auVar34._0_8_ << 0x20;
        auVar180._8_4_ = fVar165 * auVar177._8_4_;
        auVar180._12_4_ = auVar310._12_4_;
        auVar32._4_8_ = auVar180._8_8_;
        auVar32._0_4_ = extraout_s5;
        auVar182._0_12_ = auVar32 << 0x20;
        auVar182._12_4_ = auVar310._12_4_;
        auVar33._4_8_ = auVar182._8_8_;
        auVar33._0_4_ = extraout_s5;
        auVar185._0_8_ = auVar33._0_8_ << 0x20;
        auVar185._8_4_ = auVar180._8_4_;
        auVar293._8_4_ = fVar164 - auVar180._8_4_ * auVar180._8_4_;
        auVar185._12_4_ = auVar310._12_4_;
        auVar183._4_8_ = auVar185._8_8_;
        auVar183._0_4_ = extraout_s5;
        auVar183._12_4_ = 0;
        auVar183 = auVar183 << 0x20;
        fVar286 = fVar166;
        if (0.0 < auVar293._8_4_) {
          auVar187._0_12_ = auVar183._0_12_;
          auVar187._12_4_ = auVar310._12_4_;
          auVar107._4_8_ = auVar187._8_8_;
          auVar107._0_4_ = extraout_s5;
          auVar107._12_4_ = 0;
          auVar183 = auVar107 << 0x20;
          fVar286 = auVar293._8_4_;
        }
        auVar184._12_4_ = auVar183._12_4_;
        auVar184._0_8_ = auVar183._0_8_;
        auVar184._8_4_ = fVar286;
        auVar35._4_8_ = auVar184._8_8_;
        auVar35._0_4_ = extraout_s5;
        auVar186._0_12_ = auVar35 << 0x20;
        auVar186._12_4_ = auVar310._12_4_;
        auVar36._4_8_ = auVar186._8_8_;
        auVar36._0_4_ = extraout_s5;
        auVar178._0_8_ = auVar36._0_8_ << 0x20;
        auVar178._8_4_ = fVar286;
        auVar292._4_12_ = auVar293._4_12_;
        auVar292._0_4_ = auVar292._0_4_ * fVar286;
      }
      auVar191._12_4_ = auVar310._12_4_;
      auVar191._0_12_ = auVar178._0_12_;
      auVar37._4_8_ = auVar191._8_8_;
      auVar37._0_4_ = extraout_s5;
      auVar190._0_12_ = auVar37 << 0x20;
      auVar190._12_4_ = auVar310._12_4_;
      auVar38._4_8_ = auVar190._8_8_;
      auVar38._0_4_ = extraout_s5;
      auVar188._0_8_ = auVar38._0_8_ << 0x20;
      auVar188._8_4_ = pfVar150[2];
      auVar188._12_4_ = auVar310._12_4_;
      auVar39._4_8_ = auVar188._8_8_;
      auVar39._0_4_ = extraout_s5;
      auVar192._0_12_ = auVar39 << 0x20;
      auVar192._12_4_ = auVar310._12_4_;
      auVar40._4_8_ = auVar192._8_8_;
      auVar40._0_4_ = extraout_s5;
      auVar167._0_8_ = auVar40._0_8_ << 0x20;
      auVar167._8_4_ = auVar188._8_4_;
      auVar189._12_4_ = auVar310._12_4_;
      auVar189._0_12_ = auVar167;
      afStack_480[1] = (float)auVar292._0_4_;
      if (auVar188._8_4_ < fVar163) {
        fVar165 = fVar165 * (fVar163 - auVar188._8_4_);
        auVar41._4_8_ = auVar189._8_8_;
        auVar41._0_4_ = extraout_s5;
        auVar193._0_8_ = auVar41._0_8_ << 0x20;
        auVar193._8_4_ = auVar188._8_4_;
        auVar193._12_4_ = auVar310._12_4_;
        auVar42._4_8_ = auVar193._8_8_;
        auVar42._0_4_ = extraout_s5;
        auVar194._0_8_ = auVar42._0_8_ << 0x20;
        auVar194._8_4_ = auVar188._8_4_;
        auVar194._12_4_ = auVar310._12_4_;
        auVar44._4_8_ = auVar194._8_8_;
        auVar44._0_4_ = extraout_s5;
        auVar196._0_8_ = auVar44._0_8_ << 0x20;
        auVar196._8_4_ = auVar188._8_4_;
        auVar196._12_4_ = auVar310._12_4_;
        fVar165 = fVar164 - fVar165 * fVar165;
        auVar43._4_8_ = auVar196._8_8_;
        auVar43._0_4_ = extraout_s5;
        auVar195._0_8_ = auVar43._0_8_ << 0x20;
        auVar195._8_4_ = auVar188._8_4_;
        auVar195._12_4_ = auVar310._12_4_;
        auVar198._0_12_ = auVar195._4_12_ << 0x20;
        fVar163 = fVar166;
        if (0.0 < fVar165) {
          fVar163 = fVar165;
        }
        auVar198._12_4_ = auVar310._12_4_;
        auVar45._4_8_ = auVar198._8_8_;
        auVar45._0_4_ = extraout_s5;
        auVar197._0_8_ = auVar45._0_8_ << 0x20;
        auVar197._8_4_ = auVar188._8_4_ * fVar163;
        auVar197._12_4_ = auVar310._12_4_;
        auVar46._4_8_ = auVar197._8_8_;
        auVar46._0_4_ = extraout_s5;
        auVar199._0_12_ = auVar46 << 0x20;
        auVar199._12_4_ = auVar310._12_4_;
        auVar47._4_8_ = auVar199._8_8_;
        auVar47._0_4_ = extraout_s5;
        auVar167._0_8_ = auVar47._0_8_ << 0x20;
        auVar167._8_4_ = auVar197._8_4_;
      }
      auVar201._8_4_ = auVar167._8_4_;
      auVar200._12_4_ = auVar310._12_4_;
      auVar200._0_12_ = auVar167;
      auVar294._4_12_ = auVar292._4_12_;
      auVar294._0_4_ = pfVar150[3];
      fVar163 = fVar153 * *(float *)(param_1 + 0xf0);
      afStack_480[2] = (float)auVar201._8_4_;
      auVar48._4_8_ = auVar200._8_8_;
      auVar48._0_4_ = extraout_s5;
      auVar201._0_8_ = auVar48._0_8_ << 0x20;
      auVar201._12_4_ = auVar310._12_4_;
      auVar49._4_8_ = auVar201._8_8_;
      auVar49._0_4_ = extraout_s5;
      auVar202._0_8_ = auVar49._0_8_ << 0x20;
      auVar202._8_4_ = auVar201._8_4_;
      auVar202._12_4_ = auVar310._12_4_;
      auVar51._4_8_ = auVar202._8_8_;
      auVar51._0_4_ = extraout_s5;
      auVar204._0_8_ = auVar51._0_8_ << 0x20;
      auVar204._8_4_ = auVar201._8_4_;
      auVar204._12_4_ = auVar310._12_4_;
      fVar165 = fVar164 / (fVar163 - fVar153);
      auVar50._4_8_ = auVar204._8_8_;
      auVar50._0_4_ = extraout_s5;
      auVar203._0_8_ = auVar50._0_8_ << 0x20;
      auVar203._8_4_ = auVar201._8_4_;
      auVar203._12_4_ = auVar310._12_4_;
      auVar206._0_12_ = auVar203._4_12_ << 0x20;
      if (auVar294._0_4_ < fVar163) {
        auVar206._12_4_ = auVar310._12_4_;
        auVar52._4_8_ = auVar206._8_8_;
        auVar52._0_4_ = extraout_s5;
        auVar205._0_8_ = auVar52._0_8_ << 0x20;
        auVar205._8_4_ = fVar163 - auVar294._0_4_;
        auVar205._12_4_ = auVar310._12_4_;
        auVar53._4_8_ = auVar205._8_8_;
        auVar53._0_4_ = extraout_s5;
        auVar207._0_12_ = auVar53 << 0x20;
        auVar207._12_4_ = auVar310._12_4_;
        auVar54._4_8_ = auVar207._8_8_;
        auVar54._0_4_ = extraout_s5;
        auVar209._0_8_ = auVar54._0_8_ << 0x20;
        auVar209._8_4_ = auVar205._8_4_;
        auVar295._12_4_ = auVar292._12_4_;
        auVar295._0_8_ = auVar294._0_8_;
        auVar209._12_4_ = auVar310._12_4_;
        auVar57._4_8_ = auVar209._8_8_;
        auVar57._0_4_ = extraout_s5;
        auVar208._0_8_ = auVar57._0_8_ << 0x20;
        auVar208._8_4_ = auVar205._8_4_ * fVar165;
        auVar208._12_4_ = auVar310._12_4_;
        auVar55._4_8_ = auVar208._8_8_;
        auVar55._0_4_ = extraout_s5;
        auVar210._0_12_ = auVar55 << 0x20;
        auVar210._12_4_ = auVar310._12_4_;
        auVar56._4_8_ = auVar210._8_8_;
        auVar56._0_4_ = extraout_s5;
        auVar213._0_8_ = auVar56._0_8_ << 0x20;
        auVar213._8_4_ = auVar208._8_4_;
        auVar295._8_4_ = fVar164 - auVar208._8_4_ * auVar208._8_4_;
        auVar213._12_4_ = auVar310._12_4_;
        auVar211._4_8_ = auVar213._8_8_;
        auVar211._0_4_ = extraout_s5;
        auVar211._12_4_ = 0;
        auVar211 = auVar211 << 0x20;
        fVar286 = fVar166;
        if (0.0 < auVar295._8_4_) {
          auVar215._0_12_ = auVar211._0_12_;
          auVar215._12_4_ = auVar310._12_4_;
          auVar108._4_8_ = auVar215._8_8_;
          auVar108._0_4_ = extraout_s5;
          auVar108._12_4_ = 0;
          auVar211 = auVar108 << 0x20;
          fVar286 = auVar295._8_4_;
        }
        auVar212._12_4_ = auVar211._12_4_;
        auVar212._0_8_ = auVar211._0_8_;
        auVar212._8_4_ = fVar286;
        auVar58._4_8_ = auVar212._8_8_;
        auVar58._0_4_ = extraout_s5;
        auVar214._0_12_ = auVar58 << 0x20;
        auVar214._12_4_ = auVar310._12_4_;
        auVar59._4_8_ = auVar214._8_8_;
        auVar59._0_4_ = extraout_s5;
        auVar206._0_8_ = auVar59._0_8_ << 0x20;
        auVar206._8_4_ = fVar286;
        auVar294._4_12_ = auVar295._4_12_;
        auVar294._0_4_ = auVar294._0_4_ * fVar286;
      }
      auVar218._12_4_ = auVar310._12_4_;
      auVar218._0_12_ = auVar206._0_12_;
      auVar60._4_8_ = auVar218._8_8_;
      auVar60._0_4_ = extraout_s5;
      auVar217._0_12_ = auVar60 << 0x20;
      auVar217._12_4_ = auVar310._12_4_;
      auVar220._4_8_ = auVar217._8_8_;
      auVar220._0_4_ = extraout_s5;
      afStack_480[3] = (float)auVar294._0_4_;
      auVar220._12_4_ = 0;
      auVar220 = auVar220 << 0x20;
      if (pfVar150[4] < fVar163) {
        auVar296._4_12_ = auVar294._4_12_;
        auVar296._0_4_ = fVar163 - pfVar150[4];
        auVar297._12_4_ = auVar294._12_4_;
        auVar297._0_8_ = auVar296._0_8_;
        auVar297._8_4_ = fVar164;
        auVar298._4_12_ = auVar297._4_12_;
        auVar298._0_4_ = fVar165 * auVar296._0_4_;
        auVar299._0_8_ = auVar298._0_8_;
        auVar299._8_4_ = fVar164 - auVar298._0_4_ * auVar298._0_4_;
        auVar299._12_4_ = auVar297._12_4_;
        auVar63._12_4_ = 0;
        auVar63._0_12_ = auVar299._4_12_;
        auVar294 = auVar63 << 0x20;
        auVar221._0_12_ = auVar220._0_12_;
        auVar221._12_4_ = auVar310._12_4_;
        auVar109._4_8_ = auVar221._8_8_;
        auVar109._0_4_ = extraout_s5;
        auVar109._12_4_ = 0;
        auVar220 = auVar109 << 0x20;
      }
      fVar286 = auVar220._8_4_;
      auVar300._4_12_ = auVar294._4_12_;
      auVar300._0_4_ = pfVar150[5];
      afStack_480[4] = fVar286;
      if (auVar300._0_4_ < fVar163) {
        auVar223._0_12_ = auVar220._0_12_;
        auVar223._12_4_ = auVar310._12_4_;
        auVar66._4_8_ = auVar223._8_8_;
        auVar66._0_4_ = extraout_s5;
        auVar222._0_8_ = auVar66._0_8_ << 0x20;
        auVar222._8_4_ = fVar163 - auVar300._0_4_;
        auVar222._12_4_ = auVar310._12_4_;
        auVar64._4_8_ = auVar222._8_8_;
        auVar64._0_4_ = extraout_s5;
        auVar224._0_12_ = auVar64 << 0x20;
        auVar224._12_4_ = auVar310._12_4_;
        auVar65._4_8_ = auVar224._8_8_;
        auVar65._0_4_ = extraout_s5;
        auVar226._0_8_ = auVar65._0_8_ << 0x20;
        auVar226._8_4_ = auVar222._8_4_;
        auVar301._12_4_ = auVar294._12_4_;
        auVar301._0_8_ = auVar300._0_8_;
        auVar226._12_4_ = auVar310._12_4_;
        auVar69._4_8_ = auVar226._8_8_;
        auVar69._0_4_ = extraout_s5;
        auVar225._0_8_ = auVar69._0_8_ << 0x20;
        auVar225._8_4_ = fVar165 * auVar222._8_4_;
        auVar225._12_4_ = auVar310._12_4_;
        auVar67._4_8_ = auVar225._8_8_;
        auVar67._0_4_ = extraout_s5;
        auVar227._0_12_ = auVar67 << 0x20;
        auVar227._12_4_ = auVar310._12_4_;
        auVar68._4_8_ = auVar227._8_8_;
        auVar68._0_4_ = extraout_s5;
        auVar228._0_8_ = auVar68._0_8_ << 0x20;
        auVar228._8_4_ = auVar225._8_4_;
        auVar301._8_4_ = fVar164 - auVar225._8_4_ * auVar225._8_4_;
        auVar228._12_4_ = auVar310._12_4_;
        auVar110._4_8_ = auVar228._8_8_;
        auVar110._0_4_ = extraout_s5;
        auVar110._12_4_ = 0;
        auVar220 = auVar110 << 0x20;
        fVar286 = fVar166;
        if (0.0 < auVar301._8_4_) {
          auVar229._0_12_ = auVar220._0_12_;
          auVar229._12_4_ = auVar310._12_4_;
          auVar111._4_8_ = auVar229._8_8_;
          auVar111._0_4_ = extraout_s5;
          auVar111._12_4_ = 0;
          auVar220 = auVar111 << 0x20;
          fVar286 = auVar301._8_4_;
        }
        auVar300._4_12_ = auVar301._4_12_;
        auVar300._0_4_ = auVar300._0_4_ * fVar286;
      }
      auVar216._12_4_ = auVar220._12_4_;
      auVar216._0_8_ = auVar220._0_8_;
      auVar216._8_4_ = fVar286;
      auVar61._4_8_ = auVar216._8_8_;
      auVar61._0_4_ = extraout_s5;
      auVar219._0_12_ = auVar61 << 0x20;
      auVar219._12_4_ = auVar310._12_4_;
      auVar62._4_8_ = auVar219._8_8_;
      auVar62._0_4_ = extraout_s5;
      auVar232._0_8_ = auVar62._0_8_ << 0x20;
      auVar232._8_4_ = fVar286;
      auVar232._12_4_ = auVar310._12_4_;
      auVar72._4_8_ = auVar232._8_8_;
      auVar72._0_4_ = extraout_s5;
      auVar230._0_8_ = auVar72._0_8_ << 0x20;
      auVar230._8_4_ = pfVar150[6];
      auVar230._12_4_ = auVar310._12_4_;
      auVar70._4_8_ = auVar230._8_8_;
      auVar70._0_4_ = extraout_s5;
      auVar233._0_12_ = auVar70 << 0x20;
      auVar233._12_4_ = auVar310._12_4_;
      auVar71._4_8_ = auVar233._8_8_;
      auVar71._0_4_ = extraout_s5;
      auVar168._0_8_ = auVar71._0_8_ << 0x20;
      auVar168._8_4_ = auVar230._8_4_;
      auVar231._12_4_ = auVar310._12_4_;
      auVar231._0_12_ = auVar168;
      afStack_480[5] = (float)auVar300._0_4_;
      if (auVar230._8_4_ < fVar163) {
        fVar165 = fVar165 * (fVar163 - auVar230._8_4_);
        auVar73._4_8_ = auVar231._8_8_;
        auVar73._0_4_ = extraout_s5;
        auVar234._0_8_ = auVar73._0_8_ << 0x20;
        auVar234._8_4_ = auVar230._8_4_;
        auVar234._12_4_ = auVar310._12_4_;
        auVar74._4_8_ = auVar234._8_8_;
        auVar74._0_4_ = extraout_s5;
        auVar235._0_8_ = auVar74._0_8_ << 0x20;
        auVar235._8_4_ = auVar230._8_4_;
        auVar235._12_4_ = auVar310._12_4_;
        auVar76._4_8_ = auVar235._8_8_;
        auVar76._0_4_ = extraout_s5;
        auVar237._0_8_ = auVar76._0_8_ << 0x20;
        auVar237._8_4_ = auVar230._8_4_;
        auVar237._12_4_ = auVar310._12_4_;
        fVar165 = fVar164 - fVar165 * fVar165;
        auVar75._4_8_ = auVar237._8_8_;
        auVar75._0_4_ = extraout_s5;
        auVar236._0_8_ = auVar75._0_8_ << 0x20;
        auVar236._8_4_ = auVar230._8_4_;
        auVar236._12_4_ = auVar310._12_4_;
        auVar239._0_12_ = auVar236._4_12_ << 0x20;
        fVar163 = fVar166;
        if (0.0 < fVar165) {
          fVar163 = fVar165;
        }
        auVar239._12_4_ = auVar310._12_4_;
        auVar77._4_8_ = auVar239._8_8_;
        auVar77._0_4_ = extraout_s5;
        auVar238._0_8_ = auVar77._0_8_ << 0x20;
        auVar238._8_4_ = auVar230._8_4_ * fVar163;
        auVar238._12_4_ = auVar310._12_4_;
        auVar78._4_8_ = auVar238._8_8_;
        auVar78._0_4_ = extraout_s5;
        auVar240._0_12_ = auVar78 << 0x20;
        auVar240._12_4_ = auVar310._12_4_;
        auVar79._4_8_ = auVar240._8_8_;
        auVar79._0_4_ = extraout_s5;
        auVar168._0_8_ = auVar79._0_8_ << 0x20;
        auVar168._8_4_ = auVar238._8_4_;
      }
      auVar241._12_4_ = auVar310._12_4_;
      auVar241._0_12_ = auVar168;
      auVar112._4_8_ = auVar241._8_8_;
      auVar112._0_4_ = extraout_s5;
      auVar112._12_4_ = 0;
      auVar264 = auVar112 << 0x20;
      iVar131 = 0x1c;
      afStack_480[6] = (float)auVar168._8_4_;
      fVar163 = fVar153 * *(float *)(param_1 + 0xf4);
      do {
        auVar244._8_4_ = auVar264._8_4_;
        auVar81._4_8_ = auVar264._8_8_;
        auVar81._0_4_ = extraout_s5;
        auVar244._0_8_ = auVar81._0_8_ << 0x20;
        auVar244._12_4_ = auVar310._12_4_;
        auVar243._0_4_ = *(float *)(iVar142 + iVar131);
        auVar82._4_8_ = auVar244._8_8_;
        auVar82._0_4_ = extraout_s5;
        auVar245._0_8_ = auVar82._0_8_ << 0x20;
        auVar245._8_4_ = auVar244._8_4_;
        auVar245._12_4_ = auVar310._12_4_;
        auVar243._4_12_ = auVar245._4_12_;
        auVar247._0_12_ = auVar243._0_12_;
        if (auVar243._0_4_ < fVar163) {
          auVar247._12_4_ = auVar310._12_4_;
          auVar83._4_8_ = auVar247._8_8_;
          auVar83._0_4_ = extraout_s5;
          auVar246._0_8_ = auVar83._0_8_ << 0x20;
          auVar246._8_4_ = fVar163 - auVar243._0_4_;
          auVar246._12_4_ = auVar310._12_4_;
          auVar84._4_8_ = auVar246._8_8_;
          auVar84._0_4_ = extraout_s5;
          auVar248._0_12_ = auVar84 << 0x20;
          auVar248._12_4_ = auVar310._12_4_;
          auVar85._4_8_ = auVar248._8_8_;
          auVar85._0_4_ = extraout_s5;
          auVar250._0_8_ = auVar85._0_8_ << 0x20;
          auVar250._8_4_ = auVar246._8_4_;
          auVar250._12_4_ = auVar310._12_4_;
          auVar88._4_8_ = auVar250._8_8_;
          auVar88._0_4_ = extraout_s5;
          auVar249._0_8_ = auVar88._0_8_ << 0x20;
          auVar249._8_4_ = (fVar164 / (fVar163 - fVar153)) * auVar246._8_4_;
          auVar249._12_4_ = auVar310._12_4_;
          auVar86._4_8_ = auVar249._8_8_;
          auVar86._0_4_ = extraout_s5;
          auVar251._0_12_ = auVar86 << 0x20;
          auVar251._12_4_ = auVar310._12_4_;
          auVar87._4_8_ = auVar251._8_8_;
          auVar87._0_4_ = extraout_s5;
          auVar255._0_8_ = auVar87._0_8_ << 0x20;
          auVar255._8_4_ = auVar249._8_4_;
          fVar286 = fVar164 - auVar249._8_4_ * auVar249._8_4_;
          auVar255._12_4_ = auVar310._12_4_;
          auVar252._4_8_ = auVar255._8_8_;
          auVar252._0_4_ = extraout_s5;
          auVar252._12_4_ = 0;
          auVar252 = auVar252 << 0x20;
          fVar165 = fVar166;
          if (0.0 < fVar286) {
            auVar257._0_12_ = auVar252._0_12_;
            auVar257._12_4_ = auVar310._12_4_;
            auVar114._4_8_ = auVar257._8_8_;
            auVar114._0_4_ = extraout_s5;
            auVar114._12_4_ = 0;
            auVar252 = auVar114 << 0x20;
            fVar165 = fVar286;
          }
          auVar253._12_4_ = auVar252._12_4_;
          auVar253._0_8_ = auVar252._0_8_;
          auVar253._8_4_ = fVar165;
          auVar89._4_8_ = auVar253._8_8_;
          auVar89._0_4_ = extraout_s5;
          auVar256._0_12_ = auVar89 << 0x20;
          auVar256._12_4_ = auVar310._12_4_;
          auVar90._4_8_ = auVar256._8_8_;
          auVar90._0_4_ = extraout_s5;
          auVar254._0_8_ = auVar90._0_8_ << 0x20;
          auVar254._8_4_ = fVar165;
          auVar254._12_4_ = auVar310._12_4_;
          auVar91._4_8_ = auVar254._8_8_;
          auVar91._0_4_ = extraout_s5;
          auVar259._0_8_ = auVar91._0_8_ << 0x20;
          auVar259._8_4_ = fVar165;
          auVar259._12_4_ = auVar310._12_4_;
          auVar258._0_4_ = auVar243._0_4_ * fVar165;
          auVar92._4_8_ = auVar259._8_8_;
          auVar92._0_4_ = extraout_s5;
          auVar260._0_8_ = auVar92._0_8_ << 0x20;
          auVar260._8_4_ = fVar165;
          auVar260._12_4_ = auVar310._12_4_;
          auVar258._4_12_ = auVar260._4_12_;
          auVar247._0_12_ = auVar258._0_12_;
        }
        auVar261._8_4_ = auVar247._8_4_;
        auVar242._12_4_ = auVar310._12_4_;
        auVar242._0_12_ = auVar247._0_12_;
        auVar80._4_8_ = auVar242._8_8_;
        auVar80._0_4_ = extraout_s5;
        auVar113._12_4_ = 0;
        auVar113._0_12_ = auVar80;
        auVar264 = auVar113 << 0x20;
        puVar143 = (undefined4 *)((int)afStack_480 + iVar131);
        iVar131 = iVar131 + 4;
        *puVar143 = auVar247._0_4_;
      } while (iVar131 != 0x104);
      if (cVar3 == '\0') {
        iVar148 = *(int *)(param_1 + 0x2f8);
        iVar133 = *(int *)(param_1 + 0x304);
        fVar153 = *(float *)(param_1 + iVar130);
        iVar131 = 0;
        do {
          fVar165 = *(float *)((int)afStack_480 + iVar131);
          pfVar150 = (float *)((int)auStack_588 + iVar131);
          iVar131 = iVar131 + 4;
          auVar93._4_8_ = auVar264._8_8_;
          auVar93._0_4_ = extraout_s5;
          auVar262._0_8_ = auVar93._0_8_ << 0x20;
          auVar262._8_4_ = auVar261._8_4_;
          auVar262._12_4_ = auVar310._12_4_;
          auVar94._4_8_ = auVar262._8_8_;
          auVar94._0_4_ = extraout_s5;
          auVar169._0_8_ = auVar94._0_8_ << 0x20;
          auVar169._8_4_ = auVar261._8_4_;
          auVar263._12_4_ = auVar310._12_4_;
          auVar263._0_12_ = auVar169;
          auVar285 = auVar263._4_12_;
          auVar264._12_4_ = 0;
          auVar264._0_12_ = auVar285;
          auVar264 = auVar264 << 0x20;
          fVar163 = fVar164;
          if (0.0 < fVar165) {
            fVar163 = fVar153 / fVar165;
          }
          if (fVar164 < fVar163) {
            fVar163 = fVar164;
          }
          *pfVar150 = fVar163;
        } while (iVar131 != 0x104);
        if ((*(char *)(param_1 + 0x314) == '\0') || (*(char *)(param_1 + 0x178) != '\0')) {
          iVar131 = (**(code **)(**(int **)(param_1 + 0x954) + 8))();
          auVar265._0_8_ = auVar169._4_8_ << 0x20;
          auVar265._8_4_ = auVar261._8_4_;
          auVar265._12_4_ = auVar310._12_4_;
          auVar285 = auVar265._4_12_;
          iVar132 = *(int *)(param_1 + 0x180);
          iVar144 = 0x640;
          if (iVar131 != 0) {
            iVar144 = 0x32c;
          }
          if (-1 < iVar132) {
            iVar131 = 0;
            pfVar145 = (float *)(iVar148 + iStack_590);
            iVar148 = *(int *)(param_1 + 0x17c);
            pfVar147 = (float *)(iVar133 + iStack_590);
            pfVar151 = (float *)auStack_588;
            pfVar150 = pfVar152;
            do {
              if ((*pfVar147 < *pfVar145) || (iVar131 <= iVar148)) {
                fVar163 = *pfVar150 * *(float *)(param_1 + iVar144);
                fVar153 = *pfVar151;
                if (*pfVar151 < fVar163) {
                  fVar153 = fVar163;
                }
                if (auVar312._0_4_ < fVar153) {
                  fVar153 = auVar312._0_4_;
                }
                *pfVar151 = fVar153;
              }
              iVar131 = iVar131 + 1;
              pfVar145 = pfVar145 + 1;
              pfVar147 = pfVar147 + 1;
              pfVar151 = pfVar151 + 1;
              pfVar150 = pfVar150 + 1;
            } while (iVar132 + 1 != iVar131);
          }
        }
      }
      else {
        imp___aeabi_memclr8(auStack_588,0x104);
        auVar261._0_8_ = auVar80._0_8_ << 0x20;
        auVar261._12_4_ = auVar310._12_4_;
        auVar285 = auVar261._4_12_;
      }
      iVar131 = (**(code **)(**(int **)(param_1 + 0x954) + 8))();
      auVar266._12_4_ = auVar285._8_4_;
      auVar170._4_4_ = auVar285._0_4_;
      iVar133 = 0x63c;
      if (iVar131 != 0) {
        iVar133 = 0x328;
      }
      iVar131 = 0;
      do {
        fVar153 = auVar312._0_4_;
        auVar170._8_4_ = *(float *)((int)afStack_480 + iVar131);
        auVar170._0_4_ = fVar153;
        auVar266._0_12_ = auVar170;
        iVar148 = param_1 + iVar133 + iVar131;
        auVar285 = auVar170;
        if (*(float *)(iVar148 + 8) <
            auVar170._8_4_ / (*(float *)((int)afStack_378 + iVar131) + fVar153)) {
          auVar95._4_8_ = auVar266._8_8_;
          auVar95._0_4_ = auVar170._4_4_;
          auVar267._0_8_ = auVar95._0_8_ << 0x20;
          auVar267._8_4_ = auVar170._8_4_;
          auVar267._12_4_ = auVar266._12_4_;
          auVar96._4_8_ = auVar267._8_8_;
          auVar96._0_4_ = auVar170._4_4_;
          auVar268._0_8_ = auVar96._0_8_ << 0x20;
          auVar268._8_4_ = auVar170._8_4_;
          auVar268._12_4_ = auVar266._12_4_;
          auVar98._4_8_ = auVar268._8_8_;
          auVar98._0_4_ = auVar170._4_4_;
          auVar270._0_8_ = auVar98._0_8_ << 0x20;
          auVar270._8_4_ = auVar170._8_4_;
          auVar270._12_4_ = auVar266._12_4_;
          auVar97._4_8_ = auVar270._8_8_;
          auVar97._0_4_ = auVar170._4_4_;
          auVar269._0_8_ = auVar97._0_8_ << 0x20;
          auVar269._8_4_ = auVar170._8_4_;
          auVar269._12_4_ = auVar266._12_4_;
          auVar273._0_12_ = auVar269._4_12_ << 0x20;
          auVar273._12_4_ = auVar266._12_4_;
          auVar99._4_8_ = auVar273._8_8_;
          auVar99._0_4_ = auVar170._4_4_;
          auVar271._0_8_ = auVar99._0_8_ << 0x20;
          auVar271._8_4_ = auVar170._8_4_ / (*(float *)(param_8 + iVar131) + fVar153);
          auVar271._12_4_ = auVar266._12_4_;
          auVar100._4_8_ = auVar271._8_8_;
          auVar100._0_4_ = auVar170._4_4_;
          auVar274._0_12_ = auVar100 << 0x20;
          auVar274._12_4_ = auVar266._12_4_;
          auVar101._4_8_ = auVar274._8_8_;
          auVar101._0_4_ = auVar170._4_4_;
          auVar272._0_8_ = auVar101._0_8_ << 0x20;
          auVar272._8_4_ = auVar271._8_4_;
          auVar272._12_4_ = auVar266._12_4_;
          auVar102._4_8_ = auVar272._8_8_;
          auVar102._0_4_ = auVar170._4_4_;
          auVar276._0_8_ = auVar102._0_8_ << 0x20;
          auVar276._8_4_ = auVar271._8_4_;
          auVar276._12_4_ = auVar266._12_4_;
          auVar103._4_8_ = auVar276._8_8_;
          auVar103._0_4_ = auVar170._4_4_;
          auVar277._0_8_ = auVar103._0_8_ << 0x20;
          auVar277._8_4_ = auVar271._8_4_;
          auVar277._12_4_ = auVar266._12_4_;
          auVar275._4_12_ = auVar277._4_12_;
          auVar275._0_4_ = fVar153;
          auVar285 = auVar275._0_12_;
          if (*(float *)(iVar148 + 0x210) < auVar271._8_4_) {
            auVar278._0_4_ = *(undefined4 *)(iVar148 + 0x10c);
            auVar279._8_4_ = *(float *)(iVar148 + 0x210) / auVar271._8_4_;
            auVar279._4_4_ = auVar170._4_4_;
            auVar279._0_4_ = auVar278._0_4_;
            auVar279._12_4_ = auVar266._12_4_;
            auVar104._4_8_ = auVar279._8_8_;
            auVar104._0_4_ = auVar170._4_4_;
            auVar280._0_8_ = auVar104._0_8_ << 0x20;
            auVar280._8_4_ = auVar279._8_4_;
            auVar280._12_4_ = auVar266._12_4_;
            auVar278._4_12_ = auVar280._4_12_;
            auVar285 = auVar278._0_12_;
          }
        }
        puVar143 = (undefined4 *)((int)&uStack_270 + iVar131);
        iVar131 = iVar131 + 4;
        *puVar143 = auVar285._0_4_;
      } while (iVar131 != 0x104);
      auVar17._8_8_ = uStack_268;
      auVar17._0_8_ = uStack_270;
      auVar15._4_4_ = afStack_16c[1];
      auVar15._0_4_ = afStack_16c[0];
      auVar15._8_4_ = afStack_16c[2];
      auVar15._12_4_ = afStack_16c[3];
      auVar308 = FloatVectorCompareGreaterThan(auVar17,auVar15,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar17,auVar15,auVar308);
      auVar16._8_8_ = auStack_588[1];
      auVar16._0_8_ = auStack_588[0];
      auVar311 = FloatVectorCompareGreaterThan(auVar16,auVar308,2);
      auVar12._4_4_ = afStack_16c[0xd];
      auVar12._0_4_ = afStack_16c[0xc];
      auVar12._8_4_ = afStack_16c[0xe];
      auVar12._12_4_ = afStack_16c[0xf];
      auVar14._4_4_ = afStack_16c[5];
      auVar14._0_4_ = afStack_16c[4];
      auVar14._8_4_ = afStack_16c[6];
      auVar14._12_4_ = afStack_16c[7];
      auVar117._8_8_ = uStack_238;
      auVar117._0_8_ = uStack_240;
      auVar316 = FloatVectorCompareGreaterThan(auVar117,auVar12,2);
      auVar115._8_8_ = uStack_258;
      auVar115._0_8_ = uStack_260;
      auVar319 = FloatVectorCompareGreaterThan(auVar115,auVar14,2);
      auVar116._8_8_ = uStack_248;
      auVar116._0_8_ = uStack_250;
      auVar308 = VectorBitwiseInsertIfTrue(auVar308,auVar16,auVar311);
      auVar13._4_4_ = afStack_16c[9];
      auVar13._0_4_ = afStack_16c[8];
      auVar13._8_4_ = afStack_16c[10];
      auVar13._12_4_ = afStack_16c[0xb];
      auVar311 = FloatVectorCompareGreaterThan(auVar116,auVar13,2);
      auVar310 = VectorBitwiseInsertIfTrue(auVar117,auVar12,auVar316);
      auVar317 = FloatVectorCompareGreaterThan(*param_11,auVar308,2);
      auVar316 = VectorBitwiseSelect(auVar311,auVar13,auVar116);
      auVar319 = VectorBitwiseInsertIfTrue(auVar115,auVar14,auVar319);
      auVar311 = FloatVectorCompareGreaterThan(auStack_568,auVar316,2);
      auVar317 = VectorBitwiseInsertIfTrue(*param_11,auVar308,auVar317);
      auVar318 = FloatVectorCompareGreaterThan(auStack_578,auVar319,2);
      uStack_270 = auVar308._0_8_;
      uStack_268 = auVar308._8_8_;
      *(longlong *)*param_11 = auVar317._0_8_;
      *(longlong *)(*param_11 + 8) = auVar317._8_8_;
      auVar317 = FloatVectorCompareGreaterThan(auStack_558,auVar310,2);
      auVar118._8_8_ = uStack_228;
      auVar118._0_8_ = uStack_230;
      auVar313 = VectorBitwiseInsertIfTrue(auVar319,auStack_578,auVar318);
      auVar308 = param_11[2];
      auVar319 = VectorBitwiseInsertIfTrue(auVar316,auStack_568,auVar311);
      uStack_260 = auVar313._0_8_;
      uStack_258 = auVar313._8_8_;
      auVar11._4_4_ = afStack_16c[0x11];
      auVar11._0_4_ = afStack_16c[0x10];
      auVar11._8_4_ = afStack_16c[0x12];
      auVar11._12_4_ = afStack_16c[0x13];
      auVar316 = FloatVectorCompareGreaterThan(auVar118,auVar11,2);
      auVar311 = *pauVar149;
      auVar318 = VectorBitwiseInsertIfTrue(auVar310,auStack_558,auVar317);
      auVar310 = FloatVectorCompareGreaterThan(auVar311,auVar313,2);
      uStack_250 = auVar319._0_8_;
      uStack_248 = auVar319._8_8_;
      auVar317 = VectorBitwiseInsertIfTrue(auVar118,auVar11,auVar316);
      auVar320 = FloatVectorCompareGreaterThan(auVar308,auVar319,2);
      auVar316 = param_11[3];
      auVar313 = VectorBitwiseSelect(auVar310,auVar313,auVar311);
      auVar310 = FloatVectorCompareGreaterThan(auVar316,auVar318,2);
      auVar314 = FloatVectorCompareGreaterThan(auStack_548,auVar317,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar319,auVar308,auVar320);
      uStack_240 = auVar318._0_8_;
      uStack_238 = auVar318._8_8_;
      *(longlong *)*pauVar149 = auVar313._0_8_;
      *(longlong *)(param_11[1] + 8) = auVar313._8_8_;
      auVar319 = VectorBitwiseInsertIfFalse(auVar318,auVar316,auVar310);
      auVar316 = VectorBitwiseInsertIfTrue(auVar317,auStack_548,auVar314);
      *(longlong *)param_11[2] = auVar308._0_8_;
      *(longlong *)(param_11[2] + 8) = auVar308._8_8_;
      auVar308 = param_11[4];
      *(longlong *)param_11[3] = auVar319._0_8_;
      *(longlong *)(param_11[3] + 8) = auVar319._8_8_;
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      uStack_230 = auVar316._0_8_;
      uStack_228 = auVar316._8_8_;
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar10._4_4_ = afStack_16c[0x15];
      auVar10._0_4_ = afStack_16c[0x14];
      auVar10._8_4_ = afStack_16c[0x16];
      auVar10._12_4_ = afStack_16c[0x17];
      *(longlong *)param_11[4] = auVar308._0_8_;
      *(longlong *)(param_11[4] + 8) = auVar308._8_8_;
      auVar119._8_8_ = uStack_218;
      auVar119._0_8_ = uStack_220;
      auVar308 = FloatVectorCompareGreaterThan(auVar119,auVar10,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar119,auVar10,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_538,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_538,auVar316);
      uStack_220 = auVar316._0_8_;
      uStack_218 = auVar316._8_8_;
      auVar308 = param_11[5];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar9._4_4_ = afStack_16c[0x19];
      auVar9._0_4_ = afStack_16c[0x18];
      auVar9._8_4_ = afStack_16c[0x1a];
      auVar9._12_4_ = afStack_16c[0x1b];
      *(longlong *)param_11[5] = auVar308._0_8_;
      *(longlong *)(param_11[5] + 8) = auVar308._8_8_;
      auVar120._8_8_ = uStack_208;
      auVar120._0_8_ = uStack_210;
      auVar308 = FloatVectorCompareGreaterThan(auVar120,auVar9,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar120,auVar9,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_528,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_528,auVar316);
      uStack_210 = auVar316._0_8_;
      uStack_208 = auVar316._8_8_;
      auVar308 = param_11[6];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar8._4_4_ = afStack_16c[0x1d];
      auVar8._0_4_ = afStack_16c[0x1c];
      auVar8._8_4_ = afStack_16c[0x1e];
      auVar8._12_4_ = afStack_16c[0x1f];
      *(longlong *)param_11[6] = auVar308._0_8_;
      *(longlong *)(param_11[6] + 8) = auVar308._8_8_;
      auVar121._8_8_ = uStack_1f8;
      auVar121._0_8_ = uStack_200;
      auVar308 = FloatVectorCompareGreaterThan(auVar121,auVar8,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar121,auVar8,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_518,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_518,auVar316);
      uStack_200 = auVar316._0_8_;
      uStack_1f8 = auVar316._8_8_;
      auVar308 = param_11[7];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar7._4_4_ = afStack_16c[0x21];
      auVar7._0_4_ = afStack_16c[0x20];
      auVar7._8_4_ = afStack_16c[0x22];
      auVar7._12_4_ = afStack_16c[0x23];
      *(longlong *)param_11[7] = auVar308._0_8_;
      *(longlong *)(param_11[7] + 8) = auVar308._8_8_;
      auVar122._8_8_ = uStack_1e8;
      auVar122._0_8_ = uStack_1f0;
      auVar308 = FloatVectorCompareGreaterThan(auVar122,auVar7,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar122,auVar7,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_508,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_508,auVar316);
      uStack_1f0 = auVar316._0_8_;
      uStack_1e8 = auVar316._8_8_;
      auVar308 = param_11[8];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar6._4_4_ = afStack_16c[0x25];
      auVar6._0_4_ = afStack_16c[0x24];
      auVar6._8_4_ = afStack_16c[0x26];
      auVar6._12_4_ = afStack_16c[0x27];
      *(longlong *)param_11[8] = auVar308._0_8_;
      *(longlong *)(param_11[8] + 8) = auVar308._8_8_;
      auVar123._8_8_ = uStack_1d8;
      auVar123._0_8_ = uStack_1e0;
      auVar308 = FloatVectorCompareGreaterThan(auVar123,auVar6,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar123,auVar6,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_4f8,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_4f8,auVar316);
      uStack_1e0 = auVar316._0_8_;
      uStack_1d8 = auVar316._8_8_;
      auVar308 = param_11[9];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar5._4_4_ = afStack_16c[0x29];
      auVar5._0_4_ = afStack_16c[0x28];
      auVar5._8_4_ = afStack_16c[0x2a];
      auVar5._12_4_ = afStack_16c[0x2b];
      *(longlong *)param_11[9] = auVar308._0_8_;
      *(longlong *)(param_11[9] + 8) = auVar308._8_8_;
      auVar124._8_8_ = uStack_1c8;
      auVar124._0_8_ = uStack_1d0;
      auVar308 = FloatVectorCompareGreaterThan(auVar124,auVar5,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar124,auVar5,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_4e8,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_4e8,auVar316);
      uStack_1d0 = auVar316._0_8_;
      uStack_1c8 = auVar316._8_8_;
      auVar308 = param_11[10];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar4._4_4_ = afStack_16c[0x2d];
      auVar4._0_4_ = afStack_16c[0x2c];
      auVar4._8_4_ = afStack_16c[0x2e];
      auVar4._12_4_ = afStack_16c[0x2f];
      *(longlong *)param_11[10] = auVar308._0_8_;
      *(longlong *)(param_11[10] + 8) = auVar308._8_8_;
      auVar125._8_8_ = uStack_1b8;
      auVar125._0_8_ = uStack_1c0;
      auVar308 = FloatVectorCompareGreaterThan(auVar125,auVar4,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar125,auVar4,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_4d8,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_4d8,auVar316);
      uStack_1c0 = auVar316._0_8_;
      uStack_1b8 = auVar316._8_8_;
      auVar308 = param_11[0xb];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar158._8_8_ = uStack_a4;
      *(longlong *)param_11[0xb] = auVar308._0_8_;
      *(longlong *)(param_11[0xb] + 8) = auVar308._8_8_;
      auVar126._8_8_ = uStack_1a8;
      auVar126._0_8_ = uStack_1b0;
      auVar308 = FloatVectorCompareGreaterThan(auVar126,auVar158,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar126,auVar158,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_4c8,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_4c8,auVar316);
      uStack_1b0 = auVar316._0_8_;
      uStack_1a8 = auVar316._8_8_;
      auVar308 = param_11[0xc];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      *(longlong *)param_11[0xc] = auVar308._0_8_;
      *(longlong *)(param_11[0xc] + 8) = auVar308._8_8_;
      auVar127._8_8_ = uStack_198;
      auVar127._0_8_ = uStack_1a0;
      auVar308 = FloatVectorCompareGreaterThan(auVar127,auVar315,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar127,auVar315,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_4b8,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_4b8,auVar316);
      uStack_1a0 = auVar316._0_8_;
      uStack_198 = auVar316._8_8_;
      auVar308 = param_11[0xd];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      *(longlong *)param_11[0xd] = auVar308._0_8_;
      *(longlong *)(param_11[0xd] + 8) = auVar308._8_8_;
      auVar128._8_8_ = uStack_188;
      auVar128._0_8_ = uStack_190;
      auVar308 = FloatVectorCompareGreaterThan(auVar128,auVar321,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar128,auVar306,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_4a8,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_4a8,auVar316);
      uStack_190 = auVar316._0_8_;
      uStack_188 = auVar316._8_8_;
      auVar308 = param_11[0xe];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      *(longlong *)param_11[0xe] = auVar308._0_8_;
      *(longlong *)(param_11[0xe] + 8) = auVar308._8_8_;
      auVar129._8_8_ = uStack_178;
      auVar129._0_8_ = uStack_180;
      auVar308 = FloatVectorCompareGreaterThan(auVar129,auVar309,2);
      auVar308 = VectorBitwiseInsertIfTrue(auVar129,auVar309,auVar308);
      auVar316 = FloatVectorCompareGreaterThan(auStack_498,auVar308,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar308,auStack_498,auVar316);
      uStack_180 = auVar316._0_8_;
      uStack_178 = auVar316._8_8_;
      auVar308 = param_11[0xf];
      auVar317 = FloatVectorCompareGreaterThan(auVar308,auVar316,2);
      auVar308 = VectorBitwiseInsertIfFalse(auVar316,auVar308,auVar317);
      auVar155._4_12_ = auVar311._4_12_;
      auVar155._0_4_ = fStack_170;
      auVar156._12_4_ = auVar311._12_4_;
      auVar154._0_8_ = auVar155._0_8_;
      auVar154._8_4_ = uStack_488;
      auVar156._0_12_ = auVar154;
      iVar131 = *(int *)(param_1 + 0x2f8);
      *(longlong *)param_11[0xf] = auVar308._0_8_;
      *(longlong *)(param_11[0xf] + 8) = auVar308._8_8_;
      if (auVar312._8_4_ < fStack_170) {
        auVar157._4_12_ = auVar156._4_12_;
        auVar157._0_4_ = auVar312._8_4_;
        auVar154 = auVar157._0_12_;
      }
      fStack_170 = auVar154._0_4_;
      if (auVar154._0_4_ < auVar154._8_4_) {
        fStack_170 = auVar154._8_4_;
      }
      fVar153 = *(float *)param_11[0x10];
      if (fStack_170 < fVar153) {
        fVar153 = fStack_170;
      }
      *(float *)param_11[0x10] = fVar153;
      auVar285 = auVar310._4_12_;
      fVar165 = auVar310._0_4_;
      in_q2 = auStack_548;
      imp___aeabi_memmove4(iVar131 + uVar146 * 0x104,afStack_378,0x104);
      imp___aeabi_memcpy4(*(int *)(param_1 + 0x304) + uVar146 * 0x104,afStack_480,0x104);
      iVar142 = iVar142 + 0x104;
      iStack_590 = iStack_590 + 0x104;
      uVar146 = uVar146 + 1;
    } while (uVar146 < *(uint *)(param_1 + 0x1ec));
  }
  iVar130 = **(int **)(param_1 + 0x954);
  fVar153 = *(float *)(*param_11 + 4);
  if (*(float *)(*param_11 + 8) < *(float *)(*param_11 + 4)) {
    fVar153 = *(float *)(*param_11 + 8);
  }
  *(float *)*param_11 = fVar153;
  *(float *)(*param_11 + 4) = fVar153;
  iVar130 = (**(code **)(iVar130 + 8))();
  auVar281._12_4_ = auVar285._8_4_;
  auVar281._4_4_ = auVar285._0_4_;
  cVar3 = *(char *)(param_1 + 0x1d8);
  if ((iVar130 == 0) || (param_10 != 0 || cVar3 != '\0')) {
    fVar153 = *(float *)param_11[4];
    auVar1._8_8_ = CONCAT44(fVar153,fVar153);
    auVar1._0_8_ = CONCAT44(fVar153,fVar153);
    auVar321 = FloatVectorCompareGreaterThan(*pauVar138,auVar1,2);
    auVar308 = *(undefined1 (*) [16])(param_11[4] + 4);
    auVar158 = FloatVectorCompareGreaterThan(auVar308,auVar1,2);
    auVar311 = FloatVectorCompareGreaterThan(*pauVar139,auVar1,2);
    auVar315 = FloatVectorCompareGreaterThan(*pauVar140,auVar1,2);
    auVar306 = VectorBitwiseInsertIfTrue(*pauVar139,auVar1,auVar311);
    auVar309 = VectorBitwiseInsertIfTrue(*pauVar140,auVar1,auVar315);
    auVar311 = *(undefined1 (*) [16])(param_11[5] + 4);
    auVar316 = VectorBitwiseSelect(auVar321,auVar1,*pauVar138);
    auVar315 = FloatVectorCompareGreaterThan(*pauVar137,auVar1,2);
    auVar321 = VectorBitwiseSelect(auVar158,auVar1,auVar308);
    auVar310 = FloatVectorCompareGreaterThan(auVar311,auVar1,2);
    auVar308 = *pauVar136;
    auVar158 = FloatVectorCompareGreaterThan(auVar308,auVar1,2);
    auVar312 = VectorBitwiseSelect(auVar315,auVar1,*pauVar137);
    *(longlong *)*(undefined1 (*) [16])(param_11[4] + 4) = auVar321._0_8_;
    *(longlong *)(param_11[4] + 0xc) = auVar321._8_8_;
    auVar315 = VectorBitwiseSelect(auVar310,auVar1,auVar311);
    auVar311 = *pauVar141;
    auVar310 = VectorBitwiseSelect(auVar158,auVar1,auVar308);
    auVar308 = FloatVectorCompareGreaterThan(auVar311,auVar1,2);
    *(longlong *)*(undefined1 (*) [16])(param_11[5] + 4) = auVar315._0_8_;
    *(longlong *)(param_11[5] + 0xc) = auVar315._8_8_;
    auVar317 = VectorBitwiseSelect(auVar308,auVar1,auVar311);
    auVar308 = *(undefined1 (*) [16])(param_11[6] + 4);
    auVar311 = FloatVectorCompareGreaterThan(auVar308,auVar1,2);
    auVar158 = VectorBitwiseSelect(auVar311,auVar1,auVar308);
    *(longlong *)*pauVar136 = auVar310._0_8_;
    *(longlong *)(param_11[0xc] + 0xc) = auVar310._8_8_;
    *(longlong *)*(undefined1 (*) [16])(param_11[6] + 4) = auVar158._0_8_;
    *(longlong *)(param_11[6] + 0xc) = auVar158._8_8_;
    auVar308 = *pauVar135;
    auVar311 = FloatVectorCompareGreaterThan(auVar308,auVar1,2);
    *(longlong *)*pauVar141 = auVar317._0_8_;
    *(longlong *)(param_11[7] + 0xc) = auVar317._8_8_;
    *(longlong *)*pauVar140 = auVar309._0_8_;
    *(longlong *)(param_11[8] + 0xc) = auVar309._8_8_;
    *(longlong *)*pauVar139 = auVar306._0_8_;
    *(longlong *)(param_11[9] + 0xc) = auVar306._8_8_;
    *(longlong *)*pauVar138 = auVar316._0_8_;
    *(longlong *)(param_11[10] + 0xc) = auVar316._8_8_;
    *(longlong *)*pauVar137 = auVar312._0_8_;
    *(longlong *)(param_11[0xb] + 0xc) = auVar312._8_8_;
    auVar319 = VectorBitwiseInsertIfTrue(auVar308,auVar1,auVar311);
    *(longlong *)*pauVar135 = auVar319._0_8_;
    *(longlong *)(param_11[0xd] + 0xc) = auVar319._8_8_;
    auVar308 = *pauVar134;
    auVar311 = FloatVectorCompareGreaterThan(auVar308,auVar1,2);
    auVar311 = VectorBitwiseInsertIfFalse(auVar1,auVar308,auVar311);
    auVar159._4_12_ = auVar308._4_12_;
    auVar159._0_4_ = *(float *)(param_11[0xf] + 4);
    auVar160._12_4_ = auVar308._12_4_;
    auVar160._0_8_ = auVar159._0_8_;
    auVar160._8_4_ = *(float *)(param_11[0xf] + 8);
    *(longlong *)*pauVar134 = auVar311._0_8_;
    *(longlong *)(param_11[0xe] + 0xc) = auVar311._8_8_;
    auVar161 = auVar160;
    if (fVar153 < auVar159._0_4_) {
      auVar161._4_12_ = auVar160._4_12_;
      auVar161._0_4_ = fVar153;
    }
    *(int *)(param_11[0xf] + 4) = auVar161._0_4_;
    if (fVar153 < auVar160._8_4_) {
      auVar161._8_4_ = fVar153;
    }
    *(float *)(param_11[0xf] + 8) = auVar161._8_4_;
    *(float *)param_11[0x10] = fVar165;
    *(float *)(param_11[0xf] + 0xc) = fVar165;
    if (cVar3 != '\0') {
      auVar281._8_4_ =
           (auVar321._12_4_ + 0.0 + auVar315._0_4_ + auVar315._4_4_ + auVar315._8_4_ +
            auVar315._12_4_ + auVar158._0_4_ + auVar158._4_4_ + auVar158._8_4_ + auVar158._12_4_) *
           0.11111111;
      auVar281._0_4_ = fVar165;
      uVar305 = CONCAT44(auVar281._8_4_,auVar281._8_4_);
      auVar2._8_8_ = uVar305;
      auVar2._0_8_ = uVar305;
      auVar308 = FloatVectorCompareGreaterThan(auVar316,auVar2,2);
      auVar316 = VectorBitwiseInsertIfTrue(auVar316,auVar2,auVar308);
      auVar158 = FloatVectorCompareGreaterThan(auVar312,auVar2,2);
      auVar315 = FloatVectorCompareGreaterThan(auVar310,auVar2,2);
      auVar321 = FloatVectorCompareGreaterThan(auVar317,auVar2,2);
      auVar308 = FloatVectorCompareGreaterThan(auVar319,auVar2,2);
      auVar312 = VectorBitwiseInsertIfTrue(auVar312,auVar2,auVar158);
      auVar315 = VectorBitwiseInsertIfTrue(auVar310,auVar2,auVar315);
      auVar321 = VectorBitwiseInsertIfTrue(auVar317,auVar2,auVar321);
      auVar310 = VectorBitwiseInsertIfTrue(auVar319,auVar2,auVar308);
      auVar158 = FloatVectorCompareGreaterThan(auVar311,auVar2,2);
      auVar308 = FloatVectorCompareGreaterThan(auVar309,auVar2,2);
      auVar282 = auVar281;
      if (auVar281._8_4_ < fVar165) {
        auVar105._4_8_ = auVar281._8_8_;
        auVar105._0_4_ = auVar281._4_4_;
        auVar283._0_8_ = auVar105._0_8_ << 0x20;
        auVar283._8_4_ = auVar281._8_4_;
        auVar283._12_4_ = auVar281._12_4_;
        auVar106._4_8_ = auVar283._8_8_;
        auVar106._0_4_ = auVar281._4_4_;
        auVar284._0_8_ = auVar106._0_8_ << 0x20;
        auVar284._8_4_ = auVar281._8_4_;
        auVar284._12_4_ = auVar281._12_4_;
        auVar282._4_12_ = auVar284._4_12_;
        auVar282._0_4_ = auVar281._8_4_;
      }
      auVar158 = VectorBitwiseInsertIfTrue(auVar311,auVar2,auVar158);
      auVar311 = VectorBitwiseInsertIfTrue(auVar309,auVar2,auVar308);
      auVar308 = FloatVectorCompareGreaterThan(auVar306,auVar2,2);
      fVar153 = auVar161._0_4_;
      auVar308 = VectorBitwiseInsertIfTrue(auVar306,auVar2,auVar308);
      *(longlong *)*pauVar140 = auVar311._0_8_;
      *(longlong *)(param_11[8] + 0xc) = auVar311._8_8_;
      *(longlong *)*pauVar141 = auVar321._0_8_;
      *(longlong *)(param_11[7] + 0xc) = auVar321._8_8_;
      *(longlong *)*pauVar139 = auVar308._0_8_;
      *(longlong *)(param_11[9] + 0xc) = auVar308._8_8_;
      if (auVar281._8_4_ < auVar161._8_4_) {
        auVar161._8_4_ = auVar281._8_4_;
      }
      auVar285 = auVar161._0_12_;
      *(longlong *)*pauVar138 = auVar316._0_8_;
      *(longlong *)(param_11[10] + 0xc) = auVar316._8_8_;
      *(longlong *)*pauVar137 = auVar312._0_8_;
      *(longlong *)(param_11[0xb] + 0xc) = auVar312._8_8_;
      *(longlong *)*pauVar136 = auVar315._0_8_;
      *(longlong *)(param_11[0xc] + 0xc) = auVar315._8_8_;
      *(longlong *)*pauVar135 = auVar310._0_8_;
      *(longlong *)(param_11[0xd] + 0xc) = auVar310._8_8_;
      if (auVar281._8_4_ < fVar153) {
        auVar162._4_12_ = auVar161._4_12_;
        auVar162._0_4_ = auVar281._8_4_;
        auVar285 = auVar162._0_12_;
      }
      *(longlong *)*pauVar134 = auVar158._0_8_;
      *(longlong *)(param_11[0xe] + 0xc) = auVar158._8_8_;
      *(int *)(param_11[0xf] + 4) = auVar285._0_4_;
      *(int *)(param_11[0xf] + 8) = auVar285._8_4_;
      *(int *)(param_11[0xf] + 0xc) = auVar282._0_4_;
      *(int *)param_11[0x10] = auVar282._0_4_;
    }
  }
  imp___aeabi_memmove4(pfVar152,param_11,0x104);
  fVar165 = *(float *)(*param_11 + 4);
  *(float *)*param_11 = SQRT(*(float *)*param_11);
  fVar166 = *(float *)(*param_11 + 8);
  *(float *)(param_11[2] + 8) = SQRT(*(float *)(param_11[2] + 8));
  fVar286 = *(float *)(*param_11 + 0xc);
  *(float *)(param_11[2] + 0xc) = SQRT(*(float *)(param_11[2] + 0xc));
  fVar287 = *(float *)param_11[1];
  *(float *)param_11[3] = SQRT(*(float *)param_11[3]);
  fVar302 = *(float *)(param_11[1] + 4);
  *(float *)(param_11[3] + 4) = SQRT(*(float *)(param_11[3] + 4));
  fVar303 = *(float *)(param_11[1] + 8);
  *(float *)(param_11[3] + 8) = SQRT(*(float *)(param_11[3] + 8));
  fVar304 = *(float *)(param_11[1] + 0xc);
  *(float *)(param_11[3] + 0xc) = SQRT(*(float *)(param_11[3] + 0xc));
  fVar163 = *(float *)param_11[2];
  *(float *)param_11[4] = SQRT(*(float *)param_11[4]);
  fVar164 = *(float *)(param_11[2] + 4);
  *(float *)(param_11[4] + 4) = SQRT(*(float *)(param_11[4] + 4));
  *(float *)(param_11[4] + 8) = SQRT(*(float *)(param_11[4] + 8));
  *(float *)(param_11[4] + 0xc) = SQRT(*(float *)(param_11[4] + 0xc));
  *(float *)param_11[5] = SQRT(*(float *)param_11[5]);
  *(float *)(param_11[5] + 4) = SQRT(*(float *)(param_11[5] + 4));
  *(float *)(param_11[5] + 8) = SQRT(*(float *)(param_11[5] + 8));
  *(float *)(param_11[5] + 0xc) = SQRT(*(float *)(param_11[5] + 0xc));
  *(float *)param_11[6] = SQRT(*(float *)param_11[6]);
  *(float *)(param_11[6] + 4) = SQRT(*(float *)(param_11[6] + 4));
  *(float *)(param_11[6] + 8) = SQRT(*(float *)(param_11[6] + 8));
  fVar153 = *(float *)(param_11[6] + 0xc);
  *(float *)(*param_11 + 4) = SQRT(fVar165);
  *(float *)(param_11[6] + 0xc) = SQRT(fVar153);
  fVar153 = *(float *)param_11[7];
  *(float *)(*param_11 + 8) = SQRT(fVar166);
  *(float *)param_11[7] = SQRT(fVar153);
  fVar153 = *(float *)(param_11[7] + 4);
  *(float *)(*param_11 + 0xc) = SQRT(fVar286);
  *(float *)(param_11[7] + 4) = SQRT(fVar153);
  fVar153 = *(float *)(param_11[7] + 8);
  *(float *)param_11[1] = SQRT(fVar287);
  *(float *)(param_11[7] + 8) = SQRT(fVar153);
  fVar153 = *(float *)(param_11[7] + 0xc);
  *(float *)(param_11[1] + 4) = SQRT(fVar302);
  *(float *)(param_11[7] + 0xc) = SQRT(fVar153);
  fVar153 = *(float *)param_11[8];
  *(float *)(param_11[1] + 8) = SQRT(fVar303);
  *(float *)param_11[8] = SQRT(fVar153);
  fVar153 = *(float *)(param_11[8] + 4);
  *(float *)(param_11[1] + 0xc) = SQRT(fVar304);
  *(float *)(param_11[8] + 4) = SQRT(fVar153);
  fVar153 = *(float *)(param_11[8] + 8);
  *(float *)param_11[2] = SQRT(fVar163);
  *(float *)(param_11[8] + 8) = SQRT(fVar153);
  fVar153 = *(float *)(param_11[8] + 0xc);
  *(float *)(param_11[2] + 4) = SQRT(fVar164);
  *(float *)(param_11[8] + 0xc) = SQRT(fVar153);
  *(float *)param_11[9] = SQRT(*(float *)param_11[9]);
  *(float *)(param_11[9] + 4) = SQRT(*(float *)(param_11[9] + 4));
  *(float *)(param_11[9] + 8) = SQRT(*(float *)(param_11[9] + 8));
  *(float *)(param_11[9] + 0xc) = SQRT(*(float *)(param_11[9] + 0xc));
  *(float *)param_11[10] = SQRT(*(float *)param_11[10]);
  *(float *)(param_11[10] + 4) = SQRT(*(float *)(param_11[10] + 4));
  *(float *)(param_11[10] + 8) = SQRT(*(float *)(param_11[10] + 8));
  *(float *)(param_11[10] + 0xc) = SQRT(*(float *)(param_11[10] + 0xc));
  *(float *)param_11[0xb] = SQRT(*(float *)param_11[0xb]);
  *(float *)(param_11[0xb] + 4) = SQRT(*(float *)(param_11[0xb] + 4));
  *(float *)(param_11[0xb] + 8) = SQRT(*(float *)(param_11[0xb] + 8));
  *(float *)(param_11[0xb] + 0xc) = SQRT(*(float *)(param_11[0xb] + 0xc));
  *(float *)param_11[0xc] = SQRT(*(float *)param_11[0xc]);
  *(float *)(param_11[0xc] + 4) = SQRT(*(float *)(param_11[0xc] + 4));
  *(float *)(param_11[0xc] + 8) = SQRT(*(float *)(param_11[0xc] + 8));
  *(float *)(param_11[0xc] + 0xc) = SQRT(*(float *)(param_11[0xc] + 0xc));
  *(float *)param_11[0xd] = SQRT(*(float *)param_11[0xd]);
  *(float *)(param_11[0xd] + 4) = SQRT(*(float *)(param_11[0xd] + 4));
  *(float *)(param_11[0xd] + 8) = SQRT(*(float *)(param_11[0xd] + 8));
  *(float *)(param_11[0xd] + 0xc) = SQRT(*(float *)(param_11[0xd] + 0xc));
  *(float *)param_11[0xe] = SQRT(*(float *)param_11[0xe]);
  *(float *)(param_11[0xe] + 4) = SQRT(*(float *)(param_11[0xe] + 4));
  *(float *)(param_11[0xe] + 8) = SQRT(*(float *)(param_11[0xe] + 8));
  *(float *)(param_11[0xe] + 0xc) = SQRT(*(float *)(param_11[0xe] + 0xc));
  *(float *)param_11[0xf] = SQRT(*(float *)param_11[0xf]);
  *(float *)(param_11[0xf] + 4) = SQRT(*(float *)(param_11[0xf] + 4));
  *(float *)(param_11[0xf] + 8) = SQRT(*(float *)(param_11[0xf] + 8));
  *(float *)(param_11[0xf] + 0xc) = SQRT(*(float *)(param_11[0xf] + 0xc));
  *(float *)param_11[0x10] = SQRT(*(float *)param_11[0x10]);
  return;
}


// =========================================================================
// Function: qVPXFHBOQiGqoxZxqbHlZdFxnpeuYsvGfwrqIOgEjCUVqOCZYMIujJCxyXMOaqvVZCFCF_PspsOOnhztml
// Entry: 0x71ad1044 | Size: 832 bytes
// =========================================================================

undefined4 *
qVPXFHBOQiGqoxZxqbHlZdFxnpeuYsvGfwrqIOgEjCUVqOCZYMIujJCxyXMOaqvVZCFCF_PspsOOnhztml
          (undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piStack_4c;
  undefined1 auStack_40 [28];
  
  uVar7 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(&DAT_7120489c);
  } while (!bVar3);
  DataMemoryBarrier(0xb);
  DAT_7120489c = DAT_7120489c + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar7);
  *param_1 = uVar7;
  param_1[1] = param_3;
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(param_1 + 2,param_2);
  piVar9 = param_1 + 0xbe;
  *piVar9 = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0x7b] = param_5;
  param_1[0x7c] = param_1[0x29];
  if (param_5 == 0) {
    param_1[0xc1] = 0;
    param_1[0xc3] = 0;
    param_1[0xc2] = 0;
  }
  else {
    if (0xfc0fc0 < param_5) {
      FUN_71abf220(piVar9);
      thunk_qNQrlu(uVar7);
      piVar10 = (int *)param_1[0x255];
      param_1[0x255] = 0;
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 4))();
      }
      FUN_71ad2060();
      if (*piStack_4c == 0) {
        iVar12 = *piVar9;
      }
      else {
        *param_3 = *piStack_4c;
        thunk_qNQrlu();
        iVar12 = *piVar9;
      }
      if (iVar12 == 0) {
        FUN_71a76530(param_1);
                    /* WARNING: Subroutine does not return */
        thunk_NAUpeWJSovvMoxKm_();
      }
      param_1[0xbf] = iVar12;
      thunk_qNQrlu();
      FUN_71a76530(param_1);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar12 = param_5 * 0x104;
    iVar8 = thunk_MwhHq(iVar12);
    iVar13 = iVar8 + param_5 * 0x104;
    param_1[0xbe] = iVar8;
    param_1[0xbf] = iVar8;
    param_1[0xc0] = iVar13;
    iVar11 = iVar12;
    do {
      imp___aeabi_memclr4(iVar8,0x104);
      iVar11 = iVar11 + -0x104;
      iVar8 = iVar8 + 0x104;
    } while (iVar11 != 0);
    param_1[0xc1] = 0;
    param_1[0xbf] = iVar13;
    param_1[0xc2] = 0;
    param_1[0xc3] = 0;
    iVar11 = thunk_MwhHq(iVar12);
    iVar8 = iVar11 + param_5 * 0x104;
    iVar12 = param_5 * 0x104;
    param_1[0xc1] = iVar11;
    param_1[0xc2] = iVar11;
    param_1[0xc3] = iVar8;
    do {
      imp___aeabi_memclr4(iVar11,0x104);
      iVar12 = iVar12 + -0x104;
      iVar11 = iVar11 + 0x104;
    } while (iVar12 != 0);
    param_1[0xc2] = iVar8;
  }
  uVar7 = *(undefined4 *)(param_2 + 300);
  param_1[0xc6] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 1;
  param_1[0xc4] = 0x4e800000;
  thunk_jgJbDO_ijLJTaUKcoD_whTqKFPgikTBeIxb(auStack_40,0x41,uVar7);
  FUN_71ad1d74(param_1 + 199,param_5,auStack_40);
  thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(auStack_40);
  thunk_OjCKGdzihOkKfFpsesRpOZjCQl_YRWgyRmIkcZPEPseSznUksCTqBvWwiexl_zImccBF_PHmJMYEEGsSHuvjEulfVHOELLE
            (param_1 + 0xca,param_1[0x61],param_1[0x62],param_1 + 0x56);
  thunk_OjCKGdzihOkKfFpsesRpOZjCQl_YRWgyRmIkcZPEPseSznUksCTqBvWwiexl_zImccBF_PHmJMYEEGsSHuvjEulfVHOELLE
            (param_1 + 399,param_1[0x61],param_1[0x62],param_1 + 0x4e);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x3f8000003f800000;
  auVar1 = auVar1 << 0x40 | auVar1;
  uVar7 = *(undefined4 *)auVar1;
  uVar4 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  uVar5 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  uVar6 = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  param_1[0x255] = 0;
  param_1[0x7d] = uVar7;
  param_1[0x7e] = uVar4;
  param_1[0x7f] = uVar5;
  param_1[0x80] = uVar6;
  param_1[0x81] = uVar7;
  param_1[0x82] = uVar4;
  param_1[0x83] = uVar5;
  param_1[0x84] = uVar6;
  param_1[0x85] = uVar7;
  param_1[0x86] = uVar4;
  param_1[0x87] = uVar5;
  param_1[0x88] = uVar6;
  param_1[0x89] = uVar7;
  param_1[0x8a] = uVar4;
  param_1[0x8b] = uVar5;
  param_1[0x8c] = uVar6;
  param_1[0x8d] = uVar7;
  param_1[0x8e] = uVar4;
  param_1[0x8f] = uVar5;
  param_1[0x90] = uVar6;
  param_1[0x91] = uVar7;
  param_1[0x92] = uVar4;
  param_1[0x93] = uVar5;
  param_1[0x94] = uVar6;
  param_1[0x95] = uVar7;
  param_1[0x96] = uVar4;
  param_1[0x97] = uVar5;
  param_1[0x98] = uVar6;
  param_1[0x99] = uVar7;
  param_1[0x9a] = uVar4;
  param_1[0x9b] = uVar5;
  param_1[0x9c] = uVar6;
  param_1[0x9d] = uVar7;
  param_1[0x9e] = uVar4;
  param_1[0x9f] = uVar5;
  param_1[0xa0] = uVar6;
  param_1[0xa1] = uVar7;
  param_1[0xa2] = uVar4;
  param_1[0xa3] = uVar5;
  param_1[0xa4] = uVar6;
  param_1[0xa5] = uVar7;
  param_1[0xa6] = uVar4;
  param_1[0xa7] = uVar5;
  param_1[0xa8] = uVar6;
  param_1[0xa9] = uVar7;
  param_1[0xaa] = uVar4;
  param_1[0xab] = uVar5;
  param_1[0xac] = uVar6;
  param_1[0xad] = uVar7;
  param_1[0xae] = uVar4;
  param_1[0xaf] = uVar5;
  param_1[0xb0] = uVar6;
  param_1[0xb1] = uVar7;
  param_1[0xb2] = uVar4;
  param_1[0xb3] = uVar5;
  param_1[0xb4] = uVar6;
  uVar2 = *(undefined1 *)(param_2 + 0x199);
  param_1[0xb5] = uVar7;
  param_1[0xb6] = uVar4;
  param_1[0xb7] = uVar5;
  param_1[0xb8] = uVar6;
  *(undefined1 *)(param_1 + 0x254) = uVar2;
  param_1[0xb9] = uVar7;
  param_1[0xba] = uVar4;
  param_1[0xbb] = uVar5;
  param_1[0xbc] = uVar6;
  param_1[0xbd] = 0x3f800000;
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar7 = thunk_MwhHq(0x3c);
    thunk_BTXgMDNvQKjzvAemknp_azITBVsaBEvlJOBsdTqxHoAIVxXAEekH_AmWjaxcblskjEdZsiJCAgakHdAGhrAexUYaqjVNMeDXoJvzpLDJx
              (uVar7,param_1 + 99,param_1[0x7b]);
  }
  else {
    uVar7 = thunk_MwhHq(0x3c);
    thunk_Hyhxp_QHoCptryIqmiIclLCdKFwNNjuCfQqxXmCyKmiLjGTwlsICAXsYhYKGdnJQCLBrazfQmloDd_sQAZoiXttyEAAufgsYvgvThBx
              (uVar7,param_1 + 0x69,param_1[0x7b]);
  }
  piVar9 = (int *)param_1[0x255];
  param_1[0x255] = uVar7;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: NokPzhIn_GpCKHdObBTkYoDweJRDabe
// Entry: 0x71ad13ec | Size: 180 bytes
// =========================================================================

int * NokPzhIn_GpCKHdObBTkYoDweJRDabe(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)param_1[0x255];
  param_1[0x255] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  iVar4 = param_1[199];
  if (iVar4 != 0) {
    iVar2 = param_1[200];
    iVar3 = iVar4;
    if (iVar2 != iVar4) {
      do {
        iVar2 = thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(iVar2 + -0x1c);
      } while (iVar2 != iVar4);
      iVar3 = param_1[199];
    }
    param_1[200] = iVar4;
    thunk_qNQrlu(iVar3);
  }
  if (param_1[0xc1] != 0) {
    param_1[0xc2] = param_1[0xc1];
    thunk_qNQrlu();
  }
  if (param_1[0xbe] != 0) {
    param_1[0xbf] = param_1[0xbe];
    thunk_qNQrlu();
  }
  iVar4 = *param_1;
  *param_1 = 0;
  if (iVar4 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: kmpumvQJxPyPetfKESfWctkZqCVPiZCpqNSRcVlytIB_LNWoFCFmQPkxCucBXcZlrb_pGjQAeOzlMBNpGulOGRQPWnMRGnRrwfcqQOwuujMeFneTpqyNIIzmvqhmrvCqzwnuoLbWzASapshzsdLOQftvmBobIaZNoe
// Entry: 0x71ad14a0 | Size: 532 bytes
// =========================================================================

void kmpumvQJxPyPetfKESfWctkZqCVPiZCpqNSRcVlytIB_LNWoFCFmQPkxCucBXcZlrb_pGjQAeOzlMBNpGulOGRQPWnMRGnRrwfcqQOwuujMeFneTpqyNIIzmvqhmrvCqzwnuoLbWzASapshzsdLOQftvmBobIaZNoe
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,int param_11,int param_12,int param_13,int param_14,
               undefined4 param_15,undefined4 *param_16,undefined4 param_17)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_11 == 0) {
    param_10 = 0;
  }
  if (param_3 == 0) {
    param_2 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x954) + 0xc))();
  iVar3 = *(int *)(param_14 + 4);
  if (iVar3 < 1) {
    fVar8 = 0.0;
    fVar9 = fVar8;
  }
  else {
    fVar8 = 0.0;
    iVar5 = 0;
    iVar6 = *(int *)(param_14 + 8);
    fVar9 = fVar8;
    do {
      iVar7 = 0;
      do {
        pfVar1 = (float *)(iVar6 + iVar7);
        iVar7 = iVar7 + 4;
        fVar10 = *pfVar1 * *pfVar1;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar10) << 0x1f;
        fVar9 = fVar9 + fVar10;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          fVar8 = fVar10;
        }
      } while (iVar7 != 0x100);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x100;
    } while (iVar5 != iVar3);
  }
  fVar11 = *(float *)(param_1 + 0x310);
  fVar10 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  if (param_7 == 0) {
    param_6 = 0;
  }
  *(float *)(param_1 + 0x310) = (fVar9 / fVar10) * 0.1 + fVar11 * 0.9;
  thunk_yB_fRJUoszIzbVihrUMjGdcacQadytJKblkOJzXsuvZwCsYGPVwyBFAucGRzLaKCIfyPpZCxieBQbPGpdwIJUTgChHzIxkUQiJCudlPjipnHvXiKxsYoPgKZuw
            (param_1,fVar11 < 160000.0 && fVar8 < fVar11 * 3.0,param_13,param_2,param_3,param_6,
             param_7,param_10,param_11,param_15,param_17);
  uStack_30 = *(undefined4 *)(param_12 + 0x100);
  uStack_2c = *(undefined4 *)(param_12 + 0x104);
  if (param_5 == 0) {
    param_4 = 0;
  }
  uVar2 = thunk_vxTdEU_dI_HhWUjo_AoyemBBsqsk_TsHWp_JphlLeKxntLRnBijTDRlJdvoeyoHALhOGAxbIOltDbfoVEJeShIEcKMnfSzgXysGvWniPYMpfybvnrYstoZRbAUgPqhVamgRVSiny
                    (param_1,param_4,param_5,param_10,param_11,&uStack_30,
                     *(undefined1 *)(param_13 + 0x24c),param_14,param_17);
  piVar4 = *(int **)(param_1 + 0x954);
  iVar3 = *piVar4;
  *param_16 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x71ad16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 8))(piVar4);
  return;
}


// =========================================================================
// Function: cRrOiCrIBReFHUpZhQSGVlNodSxnqcylzZtoQFx_DERaRLxwFNlsIcCSZagaPyLMMhYeGvk
// Entry: 0x71ad16c4 | Size: 196 bytes
// =========================================================================

bool cRrOiCrIBReFHUpZhQSGVlNodSxnqcylzZtoQFx_DERaRLxwFNlsIcCSZagaPyLMMhYeGvk
               (float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 < 1) {
    fVar6 = 0.0;
    fVar7 = fVar6;
  }
  else {
    fVar6 = 0.0;
    iVar5 = 0;
    iVar1 = *(int *)(param_2 + 8);
    fVar7 = fVar6;
    do {
      iVar2 = 0;
      do {
        pfVar3 = (float *)(iVar1 + iVar2);
        iVar2 = iVar2 + 4;
        fVar8 = *pfVar3 * *pfVar3;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar8) << 0x1f;
        fVar7 = fVar7 + fVar8;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          fVar6 = fVar8;
        }
      } while (iVar2 != 0x100);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 0x100;
    } while (iVar5 != iVar4);
  }
  fVar9 = *param_1;
  fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  *param_1 = (fVar7 / fVar8) * 0.1 + fVar9 * 0.9;
  return fVar9 < 160000.0 && fVar6 < fVar9 * 3.0;
}


// =========================================================================
// Function: sTvsKmzcifKgyMLpvppycYJSkAqSaDvmGjXsAhSCPoNmoX
// Entry: 0x71ad1798 | Size: 24 bytes
// =========================================================================

void sTvsKmzcifKgyMLpvppycYJSkAqSaDvmGjXsAhSCPoNmoX(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1f0);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(char *)(param_1 + 0x314) = (char)param_2;
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  return;
}


// =========================================================================
// Function: OjCKGdzihOkKfFpsesRpOZjCQl_YRWgyRmIkcZPEPseSznUksCTqBvWwiexl_zImccBF_PHmJMYEEGsSHuvjEulfVHOELLE
// Entry: 0x71ad17b0 | Size: 188 bytes
// =========================================================================

void OjCKGdzihOkKfFpsesRpOZjCQl_YRWgyRmIkcZPEPseSznUksCTqBvWwiexl_zImccBF_PHmJMYEEGsSHuvjEulfVHOELLE
               (float *param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = param_1 + 0x43;
  *param_1 = param_4[6];
  fVar3 = (float)VectorSignedToFloat(param_3 - param_2,(byte)(in_fpscr >> 0x16) & 3);
  param_1[1] = param_4[7];
  iVar1 = 0;
  do {
    fVar4 = 0.0;
    if ((param_2 < iVar1) && (fVar4 = 1.0, iVar1 < param_3)) {
      fVar4 = (float)VectorSignedToFloat(iVar1 - param_2,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = fVar4 / fVar3;
    }
    fVar5 = 1.0 - fVar4;
    iVar1 = iVar1 + 1;
    pfVar2[-0x41] = fVar4 * param_4[3] + fVar5 * *param_4;
    *pfVar2 = fVar4 * param_4[4] + fVar5 * param_4[1];
    pfVar2[0x41] = fVar4 * param_4[5] + fVar5 * param_4[2];
    pfVar2 = pfVar2 + 1;
  } while (iVar1 != 0x41);
  return;
}


// =========================================================================
// Function: FUN_71ad1d74
// Entry: 0x71ad1d74 | Size: 424 bytes
// =========================================================================

int * FUN_71ad1d74(int *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *unaff_r4;
  undefined8 *unaff_r5;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int *piStack_3c;
  int *piStack_2c;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  if (param_2 != 0) {
    piStack_2c = param_1;
    if (0x9249249 < param_2) {
      FUN_71ad21b8(param_1);
LAB_71ad1ebc:
      uVar9 = *unaff_r5;
      uVar8 = *(undefined4 *)(unaff_r5 + 1);
      *(int *)(unaff_r4 + 2) = 0;
      piVar5 = (int *)((int)unaff_r4 + 0xc);
      *piVar5 = 0;
      *(undefined4 *)((int)unaff_r4 + 0x14) = 0;
      *(undefined4 *)(unaff_r4 + 1) = uVar8;
      *unaff_r4 = uVar9;
      FUN_71a0103c(piVar5);
      if (*piVar5 != 0) {
        *(int *)(unaff_r4 + 2) = *piVar5;
        thunk_qNQrlu();
      }
      piStack_3c[1] = (int)unaff_r4;
      FUN_71ad2100(&piStack_2c);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    unaff_r4 = (undefined8 *)thunk_MwhHq();
    puVar1 = (undefined8 *)((int)unaff_r4 + param_2 * 0x1c);
    param_1[2] = (int)puVar1;
    iVar2 = *(int *)((int)param_3 + 0xc);
    iVar4 = *(int *)(param_3 + 2);
    param_1[1] = (int)unaff_r4;
    *param_1 = (int)unaff_r4;
    iVar4 = iVar4 - iVar2;
    uVar8 = *(undefined4 *)(param_3 + 3);
    if (iVar4 == 0) {
      do {
        uVar9 = *param_3;
        *(undefined4 *)(unaff_r4 + 1) = *(undefined4 *)(param_3 + 1);
        *(undefined4 *)((int)unaff_r4 + 0xc) = 0;
        *(undefined4 *)(unaff_r4 + 2) = 0;
        *(undefined4 *)((int)unaff_r4 + 0x14) = 0;
        *(undefined4 *)(unaff_r4 + 3) = uVar8;
        *unaff_r4 = uVar9;
        unaff_r4 = (undefined8 *)((int)unaff_r4 + 0x1c);
      } while (unaff_r4 != puVar1);
    }
    else {
      unaff_r5 = param_3;
      piStack_3c = param_1;
      if (iVar4 < 0) goto LAB_71ad1ebc;
      iVar7 = 0;
      do {
        puVar6 = (undefined8 *)((int)unaff_r4 + iVar7);
        uVar9 = *param_3;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
        *puVar6 = uVar9;
        *(undefined4 *)((int)puVar6 + 0xc) = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        *(undefined4 *)((int)puVar6 + 0x14) = 0;
        iVar3 = thunk_MwhHq(iVar4);
        *(int *)((int)puVar6 + 0xc) = iVar3;
        *(int *)(puVar6 + 2) = iVar3;
        *(int *)((int)puVar6 + 0x14) = iVar3 + iVar4;
        imp___aeabi_memcpy4(iVar3,iVar2,iVar4);
        iVar7 = iVar7 + 0x1c;
        *(undefined4 *)(puVar6 + 3) = uVar8;
        *(int *)(puVar6 + 2) = iVar3 + iVar4;
      } while (param_2 * 0x1c != iVar7);
    }
    param_1[1] = (int)puVar1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ad2060
// Entry: 0x71ad2060 | Size: 80 bytes
// =========================================================================

int * FUN_71ad2060(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar1 = param_1[1];
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(iVar1 + -0x1c);
      } while (iVar1 != iVar3);
      iVar2 = *param_1;
    }
    param_1[1] = iVar3;
    thunk_qNQrlu(iVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ad2100
// Entry: 0x71ad2100 | Size: 104 bytes
// =========================================================================

int * FUN_71ad2100(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((char)param_1[1] != '\0') {
    return param_1;
  }
  piVar3 = (int *)*param_1;
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    iVar1 = piVar3[1];
    iVar2 = iVar4;
    if (iVar1 != iVar4) {
      do {
        iVar1 = thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(iVar1 + -0x1c);
      } while (iVar1 != iVar4);
      iVar2 = *(int *)*param_1;
    }
    piVar3[1] = iVar4;
    thunk_qNQrlu(iVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ad21b8
// Entry: 0x71ad21b8 | Size: 20 bytes
// =========================================================================

void FUN_71ad21b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: jgJbDO_ijLJTaUKcoD_whTqKFPgikTBeIxb
// Entry: 0x71ad2220 | Size: 168 bytes
// =========================================================================

int * jgJbDO_ijLJTaUKcoD_whTqKFPgikTBeIxb(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  
  fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = (param_3 + -1) * param_2;
  piVar2 = param_1 + 3;
  *piVar2 = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[5] = 0;
  param_1[1] = param_3 + -1;
  param_1[2] = (int)(1.0 / fVar5);
  if (uVar4 != 0) {
    if (0x3fffffff < uVar4) {
      FUN_71a0103c(piVar2);
      if (*piVar2 != 0) {
        param_1[4] = *piVar2;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = thunk_MwhHq(uVar4 * 4);
    iVar3 = iVar1 + uVar4 * 4;
    param_1[5] = iVar3;
    param_1[3] = iVar1;
    imp___aeabi_memclr4(iVar1,uVar4 * 4);
    param_1[4] = iVar3;
  }
  param_1[6] = 0;
  return param_1;
}


// =========================================================================
// Function: qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ
// Entry: 0x71ad22c8 | Size: 48 bytes
// =========================================================================

int qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    return param_1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  thunk_qNQrlu(iVar1);
  return param_1;
}


// =========================================================================
// Function: kohdXltvbY_VxaQGDzNppSjMKMXvWdAofwrLjrjSIUHt_xICsjSigJQAyLBcNKoNIbINgnawsBCGkaghyAt
// Entry: 0x71ad22f8 | Size: 268 bytes
// =========================================================================

void kohdXltvbY_VxaQGDzNppSjMKMXvWdAofwrLjrjSIUHt_xICsjSigJQAyLBcNKoNIbINgnawsBCGkaghyAt
               (int *param_1,undefined4 param_2,int param_3,float *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  
  if (param_3 != 0) {
    imp___aeabi_memmove4(param_4,param_2,param_3 << 2);
  }
  uVar8 = param_1[3];
  uVar4 = param_1[4];
  if ((uVar8 < uVar4) && (*param_1 != 0)) {
    iVar3 = *param_1 * 4;
    uVar1 = uVar8;
    do {
      uVar2 = uVar1 + iVar3;
      iVar5 = 0;
      do {
        pfVar6 = (float *)((int)param_4 + iVar5);
        pfVar7 = (float *)(uVar1 + iVar5);
        iVar5 = iVar5 + 4;
        *pfVar6 = *pfVar7 + *pfVar6;
      } while (iVar3 != iVar5);
      uVar1 = uVar2;
    } while (uVar2 < uVar4);
  }
  if (param_5 != 0) {
    param_5 = param_5 << 2;
    do {
      param_5 = param_5 + -4;
      *param_4 = (float)param_1[2] * *param_4;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    if (param_3 != 0) {
      imp___aeabi_memmove4(uVar8 + *param_1 * param_1[6] * 4,param_2,param_3 << 2);
      iVar3 = param_1[1];
    }
    FUN_71ba33fc(param_1[6] + 1,iVar3);
    param_1[6] = extraout_r1;
  }
  return;
}


// =========================================================================
// Function: Hyhxp_QHoCptryIqmiIclLCdKFwNNjuCfQqxXmCyKmiLjGTwlsICAXsYhYKGdnJQCLBrazfQmloDd_sQAZoiXttyEAAufgsYvgvThBx
// Entry: 0x71ad2518 | Size: 188 bytes
// =========================================================================

undefined4 *
Hyhxp_QHoCptryIqmiIclLCdKFwNNjuCfQqxXmCyKmiLjGTwlsICAXsYhYKGdnJQCLBrazfQmloDd_sQAZoiXttyEAAufgsYvgvThBx
          (undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_34 [28];
  
  *param_1 = &DAT_70b136dc;
  uVar3 = param_2[1];
  uVar4 = *(undefined8 *)((int)param_2 + 0xc);
  uVar5 = *(undefined8 *)((int)param_2 + 0x14);
  *(undefined8 *)(param_1 + 1) = *param_2;
  *(undefined8 *)(param_1 + 3) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar5;
  param_1[8] = param_3;
  thunk_jgJbDO_ijLJTaUKcoD_whTqKFPgikTBeIxb(auStack_34,0x41,param_1[1]);
  FUN_71ad1d74(param_1 + 9,param_3,auStack_34);
  thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(auStack_34);
  fVar1 = (float)VectorUnsignedToFloat((param_1[3] - param_1[2]) + 1,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined1 *)(param_1 + 0xe) = 0;
  fVar2 = (float)VectorUnsignedToFloat((param_1[5] - param_1[4]) + 1,(byte)(in_fpscr >> 0x16) & 3);
  param_1[0xc] = 1.0 / fVar1;
  param_1[0xd] = 1.0 / fVar2;
  return param_1;
}


// =========================================================================
// Function: sYdFSTauwR_m_HIlbEmmIatEMbNPgndepxckqInusffJhYN_IkuMz_edQuJwPzlMMrvfTEWdfjGXHlCHZXlFNnXFoZCzyxywGMQPp
// Entry: 0x71ad25e4 | Size: 404 bytes
// =========================================================================

void sYdFSTauwR_m_HIlbEmmIatEMbNPgndepxckqInusffJhYN_IkuMz_edQuJwPzlMMrvfTEWdfjGXHlCHZXlFNnXFoZCzyxywGMQPp
               (int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_stack_00000004;
  float afStack_138 [66];
  
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    fVar11 = 0.0;
    do {
      thunk_kohdXltvbY_VxaQGDzNppSjMKMXvWdAofwrLjrjSIUHt_xICsjSigJQAyLBcNKoNIbINgnawsBCGkaghyAt
                (*(int *)(param_1 + 0x24) + uVar6 * 0x1c,param_2 + uVar6 * 0x104,0x41,afStack_138,
                 0x41);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(param_1 + 0xc);
      iVar5 = in_stack_00000004 + uVar6 * 0x104;
      pfVar4 = (float *)(iVar5 + iVar2 * 4);
      fVar7 = fVar11;
      if (pfVar4 != (float *)(iVar5 + iVar3 * 4 + 4)) {
        iVar5 = iVar3 * 4 + iVar2 * -4 + 4;
        do {
          fVar8 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar5 = iVar5 + -4;
          fVar7 = fVar7 + fVar8;
        } while (iVar5 != 0);
      }
      pfVar4 = afStack_138 + iVar2;
      fVar8 = fVar11;
      if (pfVar4 != afStack_138 + iVar3 + 1) {
        iVar2 = iVar3 * 4 + iVar2 * -4 + 4;
        do {
          fVar9 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar2 = iVar2 + -4;
          fVar8 = fVar8 + fVar9;
        } while (iVar2 != 0);
      }
      pfVar4 = afStack_138 + *(int *)(param_1 + 0x10);
      fVar9 = fVar11;
      if (pfVar4 != afStack_138 + *(int *)(param_1 + 0x14) + 1) {
        iVar2 = *(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10) * -4 + 4;
        do {
          fVar10 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar2 = iVar2 + -4;
          fVar9 = fVar9 + fVar10;
        } while (iVar2 != 0);
      }
      bVar1 = true;
      if (*(char *)(param_1 + 0x38) == '\0') {
        fVar8 = *(float *)(param_1 + 0x30) * fVar8;
        bVar1 = false;
        if (fVar8 < *(float *)(param_1 + 0x18) * fVar9 * *(float *)(param_1 + 0x34)) {
          bVar1 = fVar7 * *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x1c) < fVar8;
        }
      }
      *(bool *)(param_1 + 0x38) = bVar1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x20));
  }
  return;
}


// =========================================================================
// Function: XYBNvhHmMLP_WGqBFBUotDVgtxEBgQYtCQCfnK
// Entry: 0x71ad2858 | Size: 96 bytes
// =========================================================================

undefined4 * XYBNvhHmMLP_WGqBFBUotDVgtxEBgQYtCQCfnK(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[9];
  *param_1 = &DAT_70b136dc;
  if (iVar3 != 0) {
    iVar1 = param_1[10];
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(iVar1 + -0x1c);
      } while (iVar1 != iVar3);
      iVar2 = param_1[9];
    }
    param_1[10] = iVar3;
    thunk_qNQrlu(iVar2);
  }
  return param_1;
}


// =========================================================================
// Function: zxKfaqAdaeDRbjMeAxwOLuRxOg_T_ZKnTgGOIx
// Entry: 0x71ad2928 | Size: 100 bytes
// =========================================================================

void zxKfaqAdaeDRbjMeAxwOLuRxOg_T_ZKnTgGOIx(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[9];
  *param_1 = &DAT_70b136dc;
  if (iVar3 != 0) {
    iVar1 = param_1[10];
    iVar2 = iVar3;
    if (iVar1 != iVar3) {
      do {
        iVar1 = thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(iVar1 + -0x1c);
      } while (iVar1 != iVar3);
      iVar2 = param_1[9];
    }
    param_1[10] = iVar3;
    thunk_qNQrlu(iVar2);
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: dvcNwYIVfqYtrgvhNkLaUWlAdMauFCStoiiZLmxPIwoDmxmmpIvEu
// Entry: 0x71ad2a18 | Size: 8 bytes
// =========================================================================

undefined1 dvcNwYIVfqYtrgvhNkLaUWlAdMauFCStoiiZLmxPIwoDmxmmpIvEu(int param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}


// =========================================================================
// Function: BTXgMDNvQKjzvAemknp_azITBVsaBEvlJOBsdTqxHoAIVxXAEekH_AmWjaxcblskjEdZsiJCAgakHdAGhrAexUYaqjVNMeDXoJvzpLDJx
// Entry: 0x71ad2a38 | Size: 268 bytes
// =========================================================================

undefined4 *
BTXgMDNvQKjzvAemknp_azITBVsaBEvlJOBsdTqxHoAIVxXAEekH_AmWjaxcblskjEdZsiJCAgakHdAGhrAexUYaqjVNMeDXoJvzpLDJx
          (undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = param_2[3];
  *param_1 = &DAT_70b13708;
  uVar6 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 6) = uVar2;
  param_1[9] = 0;
  param_1[7] = param_3;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[3] = uVar4;
  if (param_3 == 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return param_1;
  }
  if (param_3 < 0x40000000) {
    iVar1 = param_3 * 4;
    iVar3 = thunk_MwhHq(iVar1);
    param_1[0xb] = iVar3 + param_3 * 4;
    param_1[9] = iVar3;
    imp___aeabi_memclr4(iVar3,iVar1);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[10] = iVar3 + iVar1;
    iVar3 = thunk_MwhHq(iVar1);
    param_1[0xe] = iVar3 + param_3 * 4;
    param_1[0xc] = iVar3;
    imp___aeabi_memclr4(iVar3,iVar1);
    param_1[0xd] = iVar3 + iVar1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a0f1b4(param_1 + 9);
}


// =========================================================================
// Function: OervnSohhHLNzdSsFDfleumysnAgTlTfZcoIsEeRVVaKickyKRnzeiCgQEJZgqgAyzE_Rs_lQ_taxFmYAvIVHvuIs_eqxlbRNwGtWb
// Entry: 0x71ad2b68 | Size: 648 bytes
// =========================================================================

void OervnSohhHLNzdSsFDfleumysnAgTlTfZcoIsEeRVVaKickyKRnzeiCgQEJZgqgAyzE_Rs_lQ_taxFmYAvIVHvuIs_eqxlbRNwGtWb
               (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar5 = 0;
    iVar7 = *(int *)(param_1 + 0x30);
    bVar6 = 0;
    iVar8 = *(int *)(param_1 + 0x24);
    fVar13 = *(float *)(param_1 + 4);
    uVar1 = 0;
    fVar14 = *(float *)(param_1 + 8);
    fVar15 = *(float *)(param_1 + 0xc);
    do {
      iVar2 = param_2 + iVar5;
      iVar9 = param_4 + iVar5;
      iVar3 = param_6 + iVar5;
      iVar4 = *(int *)(iVar8 + uVar1 * 4);
      fVar18 = *(float *)(iVar2 + 4) + 0.0 + *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0xc) +
               *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x18) +
               *(float *)(iVar2 + 0x1c) + *(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x24) +
               *(float *)(iVar2 + 0x28) + *(float *)(iVar2 + 0x2c) + *(float *)(iVar2 + 0x30) +
               *(float *)(iVar2 + 0x34) + *(float *)(iVar2 + 0x38) + *(float *)(iVar2 + 0x3c);
      fVar16 = *(float *)(iVar9 + 4) + 0.0 + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc) +
               *(float *)(iVar9 + 0x10) + *(float *)(iVar9 + 0x14) + *(float *)(iVar9 + 0x18) +
               *(float *)(iVar9 + 0x1c) + *(float *)(iVar9 + 0x20) + *(float *)(iVar9 + 0x24) +
               *(float *)(iVar9 + 0x28) + *(float *)(iVar9 + 0x2c) + *(float *)(iVar9 + 0x30) +
               *(float *)(iVar9 + 0x34) + *(float *)(iVar9 + 0x38) + *(float *)(iVar9 + 0x3c);
      fVar17 = (*(float *)(iVar3 + 4) + 0.0 + *(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) +
                *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x18) +
                *(float *)(iVar3 + 0x1c) + *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x24) +
                *(float *)(iVar3 + 0x28) + *(float *)(iVar3 + 0x2c) + *(float *)(iVar3 + 0x30) +
                *(float *)(iVar3 + 0x34) + *(float *)(iVar3 + 0x38) + *(float *)(iVar3 + 0x3c)) *
               fVar15;
      if ((((param_8 ^ 1 | (uint)(*(char *)(param_1 + 0x18) != '\0')) != 1) ||
          (fVar18 * fVar13 <= fVar16)) || (fVar18 <= fVar17)) {
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        iVar4 = iVar4 + -1;
LAB_71ad2bc0:
        *(int *)(iVar8 + uVar1 * 4) = iVar4;
      }
      else {
        iVar4 = iVar4 + 1;
        *(int *)(iVar8 + uVar1 * 4) = iVar4;
        if (*(int *)(param_1 + 0x14) <= iVar4) {
          *(undefined4 *)(iVar7 + uVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
          iVar4 = *(int *)(param_1 + 0x14);
          goto LAB_71ad2bc0;
        }
      }
      fVar18 = fVar18 * fVar14;
      iVar5 = iVar5 + 0x104;
      bVar12 = fVar16 < fVar18;
      bVar10 = fVar16 == fVar18;
      bVar11 = NAN(fVar16) || NAN(fVar18);
      if (!bVar10 && !bVar12) {
        bVar12 = fVar16 < fVar17;
        bVar10 = fVar16 == fVar17;
        bVar11 = NAN(fVar16) || NAN(fVar17);
        iVar4 = 0;
      }
      if (bVar10 || bVar12 != bVar11) {
        iVar4 = *(int *)(iVar7 + uVar1 * 4);
      }
      iVar2 = iVar4 + -1;
      bVar12 = iVar2 == 0;
      if (bVar12 || iVar4 < 1) {
        iVar2 = 0;
      }
      *(int *)(iVar7 + uVar1 * 4) = iVar2;
      bVar6 = bVar6 | (!bVar12 && 0 < iVar4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c));
    *(byte *)(param_1 + 0x20) = bVar6;
  }
  return;
}


// =========================================================================
// Function: sCfUUrtZ_fFrVFbEz_pUKavRHDuknTYwGGQIERc
// Entry: 0x71ad2eec | Size: 76 bytes
// =========================================================================

undefined4 * sCfUUrtZ_fFrVFbEz_pUKavRHDuknTYwGGQIERc(undefined4 *param_1)

{
  *param_1 = &DAT_70b13708;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    thunk_qNQrlu();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: IVXmcButaYDehGgLVUADjoOaLjrbuswNxnUDelk
// Entry: 0x71ad2fa8 | Size: 80 bytes
// =========================================================================

void IVXmcButaYDehGgLVUADjoOaLjrbuswNxnUDelk(undefined4 *param_1)

{
  *param_1 = &DAT_70b13708;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    thunk_qNQrlu();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: fgxvLjKuUpZnXAsdRIOgaDoIxMRkkGxoOSYlclLd_ZvqoZgtzOAaWo
// Entry: 0x71ad3084 | Size: 8 bytes
// =========================================================================

undefined1 fgxvLjKuUpZnXAsdRIOgaDoIxMRkkGxoOSYlclLd_ZvqoZgtzOAaWo(int param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}


// =========================================================================
// Function: WTBkWuBIfOBToSgXQqDecULNfNQGUylyJqsFWuAudxER_jyIlxexrlbJkzQEizjPTTEapUPiDvdpHTZGbjMjjqj
// Entry: 0x71ad30b0 | Size: 584 bytes
// =========================================================================

undefined4 *
WTBkWuBIfOBToSgXQqDecULNfNQGUylyJqsFWuAudxER_jyIlxexrlbJkzQEizjPTTEapUPiDvdpHTZGbjMjjqj
          (undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  
  fVar1 = (float)imp_powf(0x41200000,(*(float *)(param_2 + 0x128) + 90.309) * 0.1);
  *param_1 = param_3;
  param_1[1] = 0x2a;
  param_1[2] = param_4;
  param_1[3] = fVar1 * 64.0;
  piVar2 = (int *)thunk_MwhHq(0xc);
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  if (param_4 == 0) {
    param_1[5] = 0;
    param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[4] = piVar2;
    param_1[8] = 0;
    param_1[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[10] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[0xb] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    return param_1;
  }
  if (param_4 < 0xfc0fc1) {
    iVar4 = param_4 * 0x104;
    iVar3 = thunk_MwhHq(iVar4);
    *piVar2 = iVar3;
    piVar2[2] = iVar3 + param_4 * 0x104;
    iVar7 = ((iVar4 - 0x104U) / 0x104) * 0x104 + 0x104;
    imp___aeabi_memclr4(iVar3,iVar7);
    param_1[4] = piVar2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    piVar2[1] = iVar3 + iVar7;
    iVar3 = thunk_MwhHq(iVar4);
    param_1[5] = iVar3;
    param_1[7] = iVar3 + param_4 * 0x104;
    imp___aeabi_memclr4(iVar3,iVar7);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[6] = iVar3 + iVar7;
    iVar4 = thunk_MwhHq(iVar4);
    param_1[8] = iVar4;
    param_1[10] = iVar4 + param_4 * 0x104;
    imp___aeabi_memclr4(iVar4,iVar7);
    iVar3 = 0;
    uVar8 = 0;
    param_1[0xb] = 0;
    param_1[9] = iVar4 + iVar7;
    do {
      imp___aeabi_memclr4(*(int *)param_1[4] + iVar3,0x104);
      imp___aeabi_memclr4(param_1[5] + iVar3,0x104);
      uVar8 = uVar8 + 1;
      uVar5 = param_1[2];
      puVar6 = (undefined8 *)(param_1[8] + iVar3);
      iVar3 = iVar3 + 0x104;
      *puVar6 = 0x4974240049742400;
      puVar6[1] = 0x4974240049742400;
      puVar6[2] = 0x4974240049742400;
      puVar6[3] = 0x4974240049742400;
      puVar6[4] = 0x4974240049742400;
      puVar6[5] = 0x4974240049742400;
      puVar6[6] = 0x4974240049742400;
      puVar6[7] = 0x4974240049742400;
      puVar6[8] = 0x4974240049742400;
      puVar6[9] = 0x4974240049742400;
      puVar6[10] = 0x4974240049742400;
      puVar6[0xb] = 0x4974240049742400;
      puVar6[0xc] = 0x4974240049742400;
      puVar6[0xd] = 0x4974240049742400;
      puVar6[0xe] = 0x4974240049742400;
      puVar6[0xf] = 0x4974240049742400;
      puVar6[0x10] = 0x4974240049742400;
      puVar6[0x11] = 0x4974240049742400;
      puVar6[0x12] = 0x4974240049742400;
      puVar6[0x13] = 0x4974240049742400;
      puVar6[0x14] = 0x4974240049742400;
      puVar6[0x15] = 0x4974240049742400;
      puVar6[0x16] = 0x4974240049742400;
      puVar6[0x17] = 0x4974240049742400;
      puVar6[0x18] = 0x4974240049742400;
      puVar6[0x19] = 0x4974240049742400;
      puVar6[0x1a] = 0x4974240049742400;
      puVar6[0x1b] = 0x4974240049742400;
      puVar6[0x1c] = 0x4974240049742400;
      puVar6[0x1d] = 0x4974240049742400;
      puVar6[0x1e] = 0x4974240049742400;
      puVar6[0x1f] = 0x4974240049742400;
      *(undefined4 *)(puVar6 + 0x20) = 0x49742400;
    } while (uVar8 < uVar5);
    return param_1;
  }
  FUN_71abf220(piVar2);
  param_1[6] = piVar2;
  thunk_qNQrlu(piVar2);
  FUN_71ad4394(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: vwIiHDAjO_XvdMpmTpfgcDmAQdjFNZ_lWKAxv
// Entry: 0x71ad334c | Size: 108 bytes
// =========================================================================

int vwIiHDAjO_XvdMpmTpfgcDmAQdjFNZ_lWKAxv(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
    thunk_qNQrlu();
  }
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      piVar1[1] = *piVar1;
      thunk_qNQrlu();
    }
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: VKZtoVQwanQocjkXiAAuEberMLFShrspAAxKaneDTDMkjXVvfeUSSrcWAWVmNkoyuXizmsuJRzoQKzUpGplexlNghmvzTtwPlttcPbtHAgpHPvnuHnPZxuocNBi_j
// Entry: 0x71ad33b8 | Size: 3252 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void VKZtoVQwanQocjkXiAAuEberMLFShrspAAxKaneDTDMkjXVvfeUSSrcWAWVmNkoyuXizmsuJRzoQKzUpGplexlNghmvzTtwPlttcPbtHAgpHPvnuHnPZxuocNBi_j
               (int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
               undefined4 param_6,int param_7)

{
  undefined8 uVar1;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  undefined4 *puVar49;
  int iVar50;
  undefined1 (*pauVar51) [12];
  int iVar52;
  int iVar53;
  uint uVar54;
  int *piVar55;
  float *pfVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  float *pfVar59;
  int iVar60;
  int iVar61;
  uint uVar62;
  uint uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int *piStack_17c;
  int iStack_178;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
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
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
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
  
  iStack_178 = *(int *)(param_1 + 8);
  if (param_2 != 0) {
    piStack_17c = *(int **)(param_1 + 0x10);
    if (piStack_17c == (int *)0x0) {
      piStack_17c = (int *)(param_1 + 0x20);
    }
    if (iStack_178 == 0) {
      return;
    }
    goto LAB_71ad3bdc;
  }
  if (iStack_178 == 0) {
    iVar60 = *(int *)(param_1 + 0x2c);
    piVar55 = *(int **)(param_1 + 0x10);
    if (piVar55 != (int *)0x0) goto LAB_71ad34f0;
joined_r0x71ad34d4:
    if (iStack_178 == 0) {
      return;
    }
  }
  else {
    iVar60 = *(int *)(param_1 + 0x14);
    iVar61 = 0;
    do {
      iVar52 = 0;
      do {
        pfVar59 = (float *)(iVar60 + iVar52);
        pfVar56 = (float *)(param_3 + iVar52);
        iVar52 = iVar52 + 4;
        fVar64 = *pfVar59;
        *pfVar59 = fVar64 + (*pfVar56 - fVar64) * 0.1;
      } while (iVar52 != 0x104);
      iVar61 = iVar61 + 1;
      param_3 = param_3 + 0x104;
      iVar60 = iVar60 + 0x104;
    } while (iVar61 != iStack_178);
    iVar60 = *(int *)(param_1 + 0x2c);
    if (0x32 < iVar60) {
      iVar61 = *(int *)(param_1 + 0x14);
      iVar50 = 0;
      iVar52 = *(int *)(param_1 + 0x20);
      do {
        iVar53 = 0;
        do {
          pfVar59 = (float *)(iVar52 + iVar53);
          pfVar56 = (float *)(iVar61 + iVar53);
          iVar53 = iVar53 + 4;
          fVar64 = *pfVar59;
          if (*pfVar56 < fVar64) {
            fVar64 = fVar64 * 0.1 + *pfVar56 * 0.9;
          }
          *pfVar59 = fVar64 * 1.0002;
        } while (iVar53 != 0x104);
        iVar50 = iVar50 + 1;
        iVar61 = iVar61 + 0x104;
        iVar52 = iVar52 + 0x104;
      } while (iVar50 != iStack_178);
    }
    piVar55 = *(int **)(param_1 + 0x10);
    if (piVar55 == (int *)0x0) goto joined_r0x71ad34d4;
LAB_71ad34f0:
    *(int *)(param_1 + 0x2c) = iVar60 + 1;
    if (iVar60 + 1 == 1000) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*piVar55 != 0) {
        piVar55[1] = *piVar55;
        thunk_qNQrlu();
      }
      thunk_qNQrlu(piVar55);
      iStack_178 = *(int *)(param_1 + 8);
      goto joined_r0x71ad34d4;
    }
    if (iStack_178 == 0) {
      return;
    }
    iVar52 = *piVar55;
    iVar61 = 0;
    iVar60 = *(int *)(param_1 + 0x20);
    do {
      iVar50 = 0;
      do {
        pfVar59 = (float *)(iVar52 + iVar50);
        pfVar56 = (float *)(iVar60 + iVar50);
        iVar50 = iVar50 + 4;
        fVar65 = *pfVar59;
        fVar64 = *pfVar56;
        if (fVar65 < fVar64) {
          fVar64 = fVar65 + (fVar64 - fVar65) * 0.001;
        }
        *pfVar59 = fVar64;
      } while (iVar50 != 0x104);
      iVar61 = iVar61 + 1;
      iVar60 = iVar60 + 0x104;
      iVar52 = iVar52 + 0x104;
    } while (iVar61 != iStack_178);
  }
  pauVar51 = (undefined1 (*) [12])(param_1 + 0xc);
  uVar62 = *(uint *)(param_1 + 0x20);
  if (*(uint **)(param_1 + 0x10) == (uint *)0x0) {
    iVar60 = 0;
    uVar48 = uVar62;
    do {
      iVar61 = 0;
      if (param_1 + 0x10U <= uVar62 ||
          (undefined1 (*) [12])(uVar62 + iStack_178 * 0x104) <= pauVar51) {
        pauVar57 = (undefined1 (*) [16])(uVar62 + iVar60 * 0x104);
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar68._8_8_ = uVar1;
        auVar68._0_8_ = uVar1;
        auVar69 = FloatVectorCompareGreaterThan(auVar68,*pauVar57,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar68,*pauVar57,auVar69);
        *(longlong *)*pauVar57 = auVar68._0_8_;
        *(longlong *)(*pauVar57 + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 1;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar69._8_8_ = uVar1;
        auVar69._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar69,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar69,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[1] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 2;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar34._8_8_ = uVar1;
        auVar34._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar34,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar34,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[2] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 3;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar35._8_8_ = uVar1;
        auVar35._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar35,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar35,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[3] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 4;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar36._8_8_ = uVar1;
        auVar36._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar36,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar36,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[4] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 5;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar37._8_8_ = uVar1;
        auVar37._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar37,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar37,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[5] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 6;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar38._8_8_ = uVar1;
        auVar38._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar38,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar38,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[6] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 7;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar39._8_8_ = uVar1;
        auVar39._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar39,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar39,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[7] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 8;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar40._8_8_ = uVar1;
        auVar40._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar40,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar40,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[8] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 9;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar41._8_8_ = uVar1;
        auVar41._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar41,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar41,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[9] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 10;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar42._8_8_ = uVar1;
        auVar42._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar42,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar42,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[10] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xb;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar43._8_8_ = uVar1;
        auVar43._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar43,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar43,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xb] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xc;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar44._8_8_ = uVar1;
        auVar44._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar44,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar44,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xc] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xd;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar45._8_8_ = uVar1;
        auVar45._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar45,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar45,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xd] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xe;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar46._8_8_ = uVar1;
        auVar46._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar46,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar46,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xe] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xf;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar47._8_8_ = uVar1;
        auVar47._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar47,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar47,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xf] + 8) = auVar68._8_8_;
        iVar61 = 0x100;
      }
      do {
        pfVar56 = (float *)(uVar48 + iVar61);
        iVar61 = iVar61 + 4;
        fVar64 = *pfVar56;
        if (fVar64 < *(float *)*pauVar51) {
          fVar64 = *(float *)*pauVar51;
        }
        *pfVar56 = fVar64;
      } while (iVar61 != 0x104);
      iVar60 = iVar60 + 1;
      uVar48 = uVar48 + 0x104;
    } while (iVar60 != iStack_178);
  }
  else {
    uVar63 = **(uint **)(param_1 + 0x10);
    iVar60 = 0;
    uVar48 = uVar62;
    uVar54 = uVar63;
    do {
      iVar61 = 0;
      if (param_1 + 0x10U <= uVar62 ||
          (undefined1 (*) [12])(uVar62 + iStack_178 * 0x104) <= pauVar51) {
        pauVar57 = (undefined1 (*) [16])(uVar62 + iVar60 * 0x104);
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar2._8_8_ = uVar1;
        auVar2._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar2,*pauVar57,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar2,*pauVar57,auVar68);
        *(longlong *)*pauVar57 = auVar68._0_8_;
        *(longlong *)(*pauVar57 + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 1;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar3._8_8_ = uVar1;
        auVar3._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar3,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar3,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[1] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 2;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar4._8_8_ = uVar1;
        auVar4._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar4,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar4,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[2] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 3;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar5._8_8_ = uVar1;
        auVar5._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar5,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar5,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[3] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 4;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar6._8_8_ = uVar1;
        auVar6._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar6,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar6,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[4] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 5;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar7._8_8_ = uVar1;
        auVar7._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar7,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar7,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[5] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 6;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar8._8_8_ = uVar1;
        auVar8._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar8,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar8,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[6] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 7;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar9._8_8_ = uVar1;
        auVar9._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar9,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar9,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[7] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 8;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar10._8_8_ = uVar1;
        auVar10._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar10,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar10,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[8] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 9;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar11._8_8_ = uVar1;
        auVar11._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar11,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar11,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[9] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 10;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar12._8_8_ = uVar1;
        auVar12._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar12,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar12,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[10] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xb;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar13._8_8_ = uVar1;
        auVar13._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar13,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar13,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xb] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xc;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar14._8_8_ = uVar1;
        auVar14._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar14,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar14,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xc] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xd;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar15._8_8_ = uVar1;
        auVar15._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar15,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar15,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xd] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xe;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar16._8_8_ = uVar1;
        auVar16._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar16,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar16,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xe] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xf;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar17._8_8_ = uVar1;
        auVar17._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar17,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar17,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xf] + 8) = auVar68._8_8_;
        iVar61 = 0x100;
      }
      do {
        pfVar56 = (float *)(uVar48 + iVar61);
        iVar61 = iVar61 + 4;
        fVar64 = *pfVar56;
        if (fVar64 < *(float *)*pauVar51) {
          fVar64 = *(float *)*pauVar51;
        }
        *pfVar56 = fVar64;
      } while (iVar61 != 0x104);
      iVar61 = 0;
      if (param_1 + 0x10U <= uVar63 ||
          (undefined1 (*) [12])(uVar63 + iStack_178 * 0x104) <= pauVar51) {
        pauVar57 = (undefined1 (*) [16])(uVar63 + iVar60 * 0x104);
        iVar61 = 0x100;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar18._8_8_ = uVar1;
        auVar18._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar18,*pauVar57,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar18,*pauVar57,auVar68);
        *(longlong *)*pauVar57 = auVar68._0_8_;
        *(longlong *)(*pauVar57 + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 1;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar19._8_8_ = uVar1;
        auVar19._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar19,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar19,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[1] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 2;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar20._8_8_ = uVar1;
        auVar20._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar20,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar20,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[2] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 3;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar21._8_8_ = uVar1;
        auVar21._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar21,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar21,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[3] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 4;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar22._8_8_ = uVar1;
        auVar22._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar22,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar22,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[4] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 5;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar23._8_8_ = uVar1;
        auVar23._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar23,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar23,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[5] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 6;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar24._8_8_ = uVar1;
        auVar24._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar24,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar24,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[6] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 7;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar25._8_8_ = uVar1;
        auVar25._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar25,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar25,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[7] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 8;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar26._8_8_ = uVar1;
        auVar26._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar26,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar26,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[8] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 9;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar27._8_8_ = uVar1;
        auVar27._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar27,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar27,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[9] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 10;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar28._8_8_ = uVar1;
        auVar28._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar28,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar28,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[10] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xb;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar29._8_8_ = uVar1;
        auVar29._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar29,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar29,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xb] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xc;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar30._8_8_ = uVar1;
        auVar30._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar30,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar30,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xc] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xd;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar31._8_8_ = uVar1;
        auVar31._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar31,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar31,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xd] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xe;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar32._8_8_ = uVar1;
        auVar32._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar32,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar32,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xe] + 8) = auVar68._8_8_;
        pauVar58 = pauVar57 + 0xf;
        uVar1 = CONCAT44(SUB124(*pauVar51,0),SUB124(*pauVar51,0));
        auVar33._8_8_ = uVar1;
        auVar33._0_8_ = uVar1;
        auVar68 = FloatVectorCompareGreaterThan(auVar33,*pauVar58,2);
        auVar68 = VectorBitwiseInsertIfFalse(auVar33,*pauVar58,auVar68);
        *(longlong *)*pauVar58 = auVar68._0_8_;
        *(longlong *)(pauVar57[0xf] + 8) = auVar68._8_8_;
      }
      do {
        pfVar56 = (float *)(uVar54 + iVar61);
        iVar61 = iVar61 + 4;
        fVar64 = *pfVar56;
        if (fVar64 < *(float *)*pauVar51) {
          fVar64 = *(float *)*pauVar51;
        }
        *pfVar56 = fVar64;
      } while (iVar61 != 0x104);
      iVar60 = iVar60 + 1;
      uVar48 = uVar48 + 0x104;
      uVar54 = uVar54 + 0x104;
    } while (iVar60 != iStack_178);
  }
  piStack_17c = *(int **)(param_1 + 0x10);
  if (piStack_17c == (int *)0x0) {
    piStack_17c = (int *)(param_1 + 0x20);
  }
LAB_71ad3bdc:
  uVar62 = *(uint *)(param_1 + 4);
  iVar52 = 0;
  iVar60 = param_5;
  iVar61 = param_7;
  do {
    imp___aeabi_memcpy4(&fStack_168,*piStack_17c + iVar52 * 0x104,0x104);
    fStack_168 = SQRT(fStack_168);
    fStack_164 = SQRT(fStack_164);
    fStack_140 = SQRT(fStack_140);
    fStack_13c = SQRT(fStack_13c);
    fStack_160 = SQRT(fStack_160);
    fStack_138 = SQRT(fStack_138);
    fStack_134 = SQRT(fStack_134);
    fStack_15c = SQRT(fStack_15c);
    fStack_130 = SQRT(fStack_130);
    fStack_12c = SQRT(fStack_12c);
    fStack_128 = SQRT(fStack_128);
    fStack_124 = SQRT(fStack_124);
    fStack_158 = SQRT(fStack_158);
    fStack_120 = SQRT(fStack_120);
    fStack_e4 = SQRT(fStack_e4);
    fStack_11c = SQRT(fStack_11c);
    fStack_118 = SQRT(fStack_118);
    fStack_114 = SQRT(fStack_114);
    fStack_110 = SQRT(fStack_110);
    fStack_154 = SQRT(fStack_154);
    fStack_10c = SQRT(fStack_10c);
    fStack_e0 = SQRT(fStack_e0);
    fStack_108 = SQRT(fStack_108);
    fStack_104 = SQRT(fStack_104);
    fStack_100 = SQRT(fStack_100);
    fStack_fc = SQRT(fStack_fc);
    fStack_150 = SQRT(fStack_150);
    fStack_f8 = SQRT(fStack_f8);
    fStack_dc = SQRT(fStack_dc);
    fStack_f4 = SQRT(fStack_f4);
    fStack_f0 = SQRT(fStack_f0);
    fStack_ec = SQRT(fStack_ec);
    fStack_e8 = SQRT(fStack_e8);
    fStack_14c = SQRT(fStack_14c);
    fStack_d8 = SQRT(fStack_d8);
    fStack_148 = SQRT(fStack_148);
    fStack_d4 = SQRT(fStack_d4);
    fStack_144 = SQRT(fStack_144);
    fStack_d0 = SQRT(fStack_d0);
    fStack_cc = SQRT(fStack_cc);
    fStack_c8 = SQRT(fStack_c8);
    fStack_c4 = SQRT(fStack_c4);
    fStack_c0 = SQRT(fStack_c0);
    fStack_bc = SQRT(fStack_bc);
    fStack_b8 = SQRT(fStack_b8);
    fStack_b4 = SQRT(fStack_b4);
    fStack_b0 = SQRT(fStack_b0);
    fStack_ac = SQRT(fStack_ac);
    fStack_a8 = SQRT(fStack_a8);
    fStack_a4 = SQRT(fStack_a4);
    fStack_a0 = SQRT(fStack_a0);
    fStack_9c = SQRT(fStack_9c);
    fStack_98 = SQRT(fStack_98);
    fStack_94 = SQRT(fStack_94);
    fStack_90 = SQRT(fStack_90);
    fStack_8c = SQRT(fStack_8c);
    fStack_88 = SQRT(fStack_88);
    fStack_84 = SQRT(fStack_84);
    fStack_80 = SQRT(fStack_80);
    fStack_7c = SQRT(fStack_7c);
    fStack_78 = SQRT(fStack_78);
    fStack_74 = SQRT(fStack_74);
    fStack_70 = SQRT(fStack_70);
    fStack_6c = SQRT(fStack_6c);
    fStack_68 = SQRT(fStack_68);
    puVar49 = (undefined4 *)(param_7 + iVar52 * 0x208);
    *puVar49 = 0;
    fVar64 = (fStack_e8 + 0.0 + fStack_e4 + fStack_e0 + fStack_dc + fStack_d8 + fStack_d4 +
              fStack_d0 + fStack_cc + fStack_c8 + fStack_c4 + fStack_c0 + fStack_bc + fStack_b8 +
              fStack_b4 + fStack_b0 + fStack_ac + fStack_a8 + fStack_a4 + fStack_a0 + fStack_9c +
              fStack_98 + fStack_94 + fStack_90 + fStack_8c + fStack_88 + fStack_84 + fStack_80 +
              fStack_7c + fStack_78 + fStack_74 + fStack_70 + fStack_6c + fStack_68) * 0.030303031;
    puVar49[0x40] = 0;
    puVar49 = (undefined4 *)(param_5 + iVar52 * 0x208);
    *puVar49 = 0;
    puVar49[0x40] = 0;
    iVar50 = 0;
    do {
      fVar65 = *(float *)(((uint)&fStack_168 | 4) + iVar50);
      uVar62 = uVar62 * 0x10dcd + 1 & 0x7fffffff;
      fVar66 = *(float *)(&DAT_70096948 + (uVar62 >> 0x1a) * 4);
      fVar67 = *(float *)(&DAT_70096948 + ((uVar62 >> 0x1a) + 8 & 0x1f) * 4);
      *(float *)(iVar60 + iVar50 + 4) = fVar66 * fVar65;
      *(float *)(iVar60 + iVar50 + 0x108) = fVar67 * fVar65;
      iVar53 = iVar61 + iVar50;
      iVar50 = iVar50 + 4;
      *(float *)(iVar53 + 0x108) = fVar64 * fVar67;
      *(float *)(iVar53 + 4) = fVar64 * fVar66;
    } while (iVar50 != 0xfc);
    iVar60 = iVar60 + 0x208;
    iVar61 = iVar61 + 0x208;
    *(uint *)(param_1 + 4) = uVar62;
    iVar52 = iVar52 + 1;
  } while (iVar52 != iStack_178);
  return;
}


// =========================================================================
// Function: FUN_71ad4394
// Entry: 0x71ad4394 | Size: 68 bytes
// =========================================================================

undefined4 * FUN_71ad4394(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      piVar1[1] = *piVar1;
      thunk_qNQrlu();
    }
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: oKtdSRrvSbyEjyQVAzXJQTDNnkkgrCeWEMgRsSA_IafXCedXpllvFacV
// Entry: 0x71ad4428 | Size: 332 bytes
// =========================================================================

undefined4 *
oKtdSRrvSbyEjyQVAzXJQTDNnkkgrCeWEMgRsSA_IafXCedXpllvFacV
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  thunk_WcWZMFyJwpTTVYYbNvFKVQ(param_1 + 3);
  iVar6 = param_1[1];
  uVar7 = param_1[2];
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  if (uVar7 != 0) {
    if (0xffffff < uVar7) {
      FUN_71ac91ec(&iStack_2c);
      if (iStack_2c != 0) {
        iStack_28 = iStack_2c;
        thunk_qNQrlu();
      }
      thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1 + 3);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = uVar7 * 0x100;
    iVar3 = thunk_MwhHq(iVar1);
    iStack_24 = iVar3 + uVar7 * 0x100;
    iStack_2c = iVar3;
    imp___aeabi_memclr4(iVar3,iVar1);
    iStack_28 = iVar3 + iVar1;
  }
  FUN_71ad5190(param_1 + 4,iVar6 / 16000,&iStack_2c);
  if (iStack_2c != 0) {
    iStack_28 = iStack_2c;
    thunk_qNQrlu();
  }
  iVar6 = param_1[4];
  if (param_1[5] != iVar6) {
    piVar5 = (int *)(iVar6 + 4);
    uVar7 = (param_1[5] - iVar6 >> 2) * -0x55555555;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    do {
      iVar6 = piVar5[-1];
      if (*piVar5 != iVar6) {
        uVar2 = *piVar5 - iVar6 >> 8;
        uVar4 = 1;
        if (1 < uVar2) {
          uVar4 = uVar2;
        }
        imp___aeabi_memclr4(iVar6,uVar4 << 8);
      }
      piVar5 = piVar5 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return param_1;
}


// =========================================================================
// Function: AnPJOzIjJkfSlCMMNoWFqKAYSWghBZlmq
// Entry: 0x71ad4574 | Size: 112 bytes
// =========================================================================

int AnPJOzIjJkfSlCMMNoWFqKAYSWghBZlmq(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    piVar2 = *(int **)(param_1 + 0x14);
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
      piVar1 = *(int **)(param_1 + 0x10);
    }
    *(int **)(param_1 + 0x14) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  thunk_RojLCGwtwXzRzGHcMRBkeMK(param_1 + 0xc);
  return param_1;
}


// =========================================================================
// Function: NDtqlpEjvdJFwFRYFrjBfWuVRsBafUEnqxPaRrajsRRboLlxFutdGCSpuskkVsejdxsiaEsHcWEQMjtKfbkfLwwIDYBeYbFMCmcJumbOGVaPxKBmecCxEKFESNTu
// Entry: 0x71ad45e4 | Size: 2356 bytes
// =========================================================================

void NDtqlpEjvdJFwFRYFrjBfWuVRsBafUEnqxPaRrajsRRboLlxFutdGCSpuskkVsejdxsiaEsHcWEQMjtKfbkfLwwIDYBeYbFMCmcJumbOGVaPxKBmecCxEKFESNTu
               (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,float param_7,int param_8,undefined4 param_9,int *param_10)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 *puVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iStack_768;
  float afStack_760 [122];
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  float afStack_560 [64];
  undefined1 auStack_460 [232];
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  float afStack_360 [65];
  float afStack_25c [131];
  
  iVar9 = 0;
  do {
    pfVar6 = (float *)(param_6 + iVar9);
    iVar4 = iVar9 + 0x104;
    iVar9 = iVar9 + 4;
    *(float *)((int)afStack_25c + iVar4) = 1.0 - *pfVar6 * *pfVar6;
  } while (iVar9 != 0x104);
  afStack_25c[0x41] = SQRT(afStack_25c[0x41]);
  afStack_25c[0x4b] = SQRT(afStack_25c[0x4b]);
  afStack_25c[0x4c] = SQRT(afStack_25c[0x4c]);
  afStack_25c[0x4d] = SQRT(afStack_25c[0x4d]);
  afStack_25c[0x4e] = SQRT(afStack_25c[0x4e]);
  afStack_25c[0x4f] = SQRT(afStack_25c[0x4f]);
  afStack_25c[0x50] = SQRT(afStack_25c[0x50]);
  afStack_25c[0x51] = SQRT(afStack_25c[0x51]);
  afStack_25c[0x52] = SQRT(afStack_25c[0x52]);
  afStack_25c[0x42] = SQRT(afStack_25c[0x42]);
  afStack_25c[0x53] = SQRT(afStack_25c[0x53]);
  afStack_25c[0x43] = SQRT(afStack_25c[0x43]);
  afStack_25c[0x54] = SQRT(afStack_25c[0x54]);
  afStack_25c[0x44] = SQRT(afStack_25c[0x44]);
  afStack_25c[0x55] = SQRT(afStack_25c[0x55]);
  afStack_25c[0x45] = SQRT(afStack_25c[0x45]);
  afStack_25c[0x56] = SQRT(afStack_25c[0x56]);
  afStack_25c[0x46] = SQRT(afStack_25c[0x46]);
  afStack_25c[0x57] = SQRT(afStack_25c[0x57]);
  afStack_25c[0x47] = SQRT(afStack_25c[0x47]);
  afStack_25c[0x58] = SQRT(afStack_25c[0x58]);
  afStack_25c[0x48] = SQRT(afStack_25c[0x48]);
  afStack_25c[0x59] = SQRT(afStack_25c[0x59]);
  afStack_25c[0x49] = SQRT(afStack_25c[0x49]);
  afStack_25c[0x5a] = SQRT(afStack_25c[0x5a]);
  afStack_25c[0x4a] = SQRT(afStack_25c[0x4a]);
  afStack_25c[0x5b] = SQRT(afStack_25c[0x5b]);
  afStack_25c[0x5c] = SQRT(afStack_25c[0x5c]);
  afStack_25c[0x5d] = SQRT(afStack_25c[0x5d]);
  afStack_25c[0x5e] = SQRT(afStack_25c[0x5e]);
  afStack_25c[0x5f] = SQRT(afStack_25c[0x5f]);
  afStack_25c[0x60] = SQRT(afStack_25c[0x60]);
  afStack_25c[0x61] = SQRT(afStack_25c[0x61]);
  afStack_25c[0x62] = SQRT(afStack_25c[0x62]);
  afStack_25c[99] = SQRT(afStack_25c[99]);
  afStack_25c[100] = SQRT(afStack_25c[100]);
  afStack_25c[0x65] = SQRT(afStack_25c[0x65]);
  afStack_25c[0x66] = SQRT(afStack_25c[0x66]);
  afStack_25c[0x67] = SQRT(afStack_25c[0x67]);
  afStack_25c[0x68] = SQRT(afStack_25c[0x68]);
  afStack_25c[0x69] = SQRT(afStack_25c[0x69]);
  afStack_25c[0x6a] = SQRT(afStack_25c[0x6a]);
  afStack_25c[0x6b] = SQRT(afStack_25c[0x6b]);
  afStack_25c[0x6c] = SQRT(afStack_25c[0x6c]);
  afStack_25c[0x6d] = SQRT(afStack_25c[0x6d]);
  afStack_25c[0x6e] = SQRT(afStack_25c[0x6e]);
  afStack_25c[0x6f] = SQRT(afStack_25c[0x6f]);
  afStack_25c[0x70] = SQRT(afStack_25c[0x70]);
  afStack_25c[0x71] = SQRT(afStack_25c[0x71]);
  afStack_25c[0x72] = SQRT(afStack_25c[0x72]);
  afStack_25c[0x73] = SQRT(afStack_25c[0x73]);
  afStack_25c[0x74] = SQRT(afStack_25c[0x74]);
  afStack_25c[0x75] = SQRT(afStack_25c[0x75]);
  afStack_25c[0x76] = SQRT(afStack_25c[0x76]);
  afStack_25c[0x77] = SQRT(afStack_25c[0x77]);
  afStack_25c[0x78] = SQRT(afStack_25c[0x78]);
  afStack_25c[0x79] = SQRT(afStack_25c[0x79]);
  afStack_25c[0x7a] = SQRT(afStack_25c[0x7a]);
  afStack_25c[0x7b] = SQRT(afStack_25c[0x7b]);
  afStack_25c[0x7c] = SQRT(afStack_25c[0x7c]);
  afStack_25c[0x7d] = SQRT(afStack_25c[0x7d]);
  afStack_25c[0x7e] = SQRT(afStack_25c[0x7e]);
  afStack_25c[0x7f] = SQRT(afStack_25c[0x7f]);
  afStack_25c[0x80] = SQRT(afStack_25c[0x80]);
  afStack_25c[0x81] = SQRT(afStack_25c[0x81]);
  if (*(int *)(param_1 + 8) != 0) {
    param_2 = param_2 + 0x104;
    uVar19 = 0;
    iStack_768 = 0;
    do {
      iVar9 = param_8 + uVar19 * 0x208;
      imp___aeabi_memcpy4(afStack_360,iVar9,0x104);
      imp___aeabi_memcpy4(afStack_25c,iVar9 + 0x104,0x100);
      afStack_25c[0] = 0.0;
      afStack_25c[0x40] = 0.0;
      iVar9 = 0;
      do {
        pfVar6 = (float *)((int)afStack_360 + iVar9);
        fVar24 = *(float *)(param_6 + iVar9);
        fVar25 = *(float *)(param_2 + iVar9);
        iVar4 = iVar9 + 4;
        fVar26 = *(float *)((int)afStack_25c + iVar9 + 0x104);
        *pfVar6 = *pfVar6 * fVar24 + fVar26 * ((float *)(param_2 + iVar9))[-0x41];
        *(float *)((int)afStack_25c + iVar9) =
             fVar24 * *(float *)((int)afStack_25c + iVar9) + fVar26 * fVar25;
        iVar9 = iVar4;
      } while (iVar4 != 0x104);
      afStack_560[1] = afStack_360[0x40];
      afStack_560[0] = afStack_360[0];
      iVar9 = 8;
      do {
        puVar7 = (undefined4 *)((int)afStack_560 + iVar9);
        iVar9 = iVar9 + 0x20;
        puVar2 = (undefined4 *)0x380;
        puVar3 = (undefined4 *)0x390;
        lVar23 = 2;
        while( true ) {
          *puVar7 = *puVar2;
          puVar7[1] = *puVar3;
          puVar7 = puVar7 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar2 = (undefined4 *)0x388;
        puVar3 = (undefined4 *)0x398;
        lVar23 = 2;
        while( true ) {
          *puVar7 = *puVar2;
          puVar7[1] = *puVar3;
          puVar7 = puVar7 + 2;
          lVar23 = lVar23 + -1;
          if (lVar23 == 0) break;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      } while (iVar9 != 0x1e8);
      uStack_378 = afStack_360[0x3d];
      uStack_370 = afStack_360[0x3e];
      uStack_374 = afStack_25c[0x3d];
      uStack_36c = afStack_25c[0x3e];
      uStack_368 = afStack_360[0x3f];
      uStack_364 = afStack_25c[0x3f];
      thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(param_1 + 0xc,afStack_560);
      iVar4 = param_10[2];
      iVar9 = **(int **)(param_1 + 0x10);
      iVar10 = 0;
      do {
        pfVar15 = (float *)(iVar9 + iStack_768 + iVar10);
        pfVar16 = (float *)((int)&DAT_700969c8 + iVar10);
        pfVar6 = (float *)((int)&DAT_70096ac8 + iVar10);
        pfVar17 = (float *)((int)afStack_560 + iVar10);
        pfVar18 = (float *)(iVar4 + iStack_768 + iVar10);
        iVar10 = iVar10 + 4;
        *pfVar18 = (*pfVar15 * *pfVar6 + *pfVar17 * *pfVar16) * 0.015625;
      } while (iVar10 != 0x100);
      imp___aeabi_memmove4(iVar9 + uVar19 * 0x100,auStack_460,0x100);
      iVar9 = *param_10;
      if (1 < iVar9) {
        iVar10 = param_10[1];
        iVar4 = param_10[2] + iStack_768 + iVar10 * 0x100;
        iVar11 = 1;
        do {
          iVar14 = 0;
          do {
            pfVar6 = (float *)(iVar4 + iVar14);
            iVar14 = iVar14 + 4;
            *pfVar6 = *pfVar6 * param_7;
          } while (iVar14 != 0x100);
          iVar11 = iVar11 + 1;
          iVar4 = iVar4 + iVar10 * 0x100;
        } while (iVar11 != iVar9);
        if (1 < iVar9) {
          iVar9 = param_4 + uVar19 * 0x208;
          imp___aeabi_memcpy4(afStack_360,iVar9,0x104);
          imp___aeabi_memcpy4(afStack_25c,iVar9 + 0x104,0x100);
          afStack_760[1] = afStack_360[0x40];
          afStack_760[0] = afStack_360[0];
          iVar9 = 8;
          afStack_25c[0] = 0.0;
          afStack_25c[0x40] = 0.0;
          do {
            puVar7 = (undefined4 *)((int)afStack_760 + iVar9);
            iVar9 = iVar9 + 0x20;
            puVar2 = (undefined4 *)0x380;
            puVar3 = (undefined4 *)0x390;
            lVar23 = 2;
            while( true ) {
              *puVar7 = *puVar2;
              puVar7[1] = *puVar3;
              puVar7 = puVar7 + 2;
              lVar23 = lVar23 + -1;
              if (lVar23 == 0) break;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            }
            puVar2 = (undefined4 *)0x388;
            puVar3 = (undefined4 *)0x398;
            lVar23 = 2;
            while( true ) {
              *puVar7 = *puVar2;
              puVar7[1] = *puVar3;
              puVar7 = puVar7 + 2;
              lVar23 = lVar23 + -1;
              if (lVar23 == 0) break;
              puVar2 = puVar2 + 1;
              puVar3 = puVar3 + 1;
            }
          } while (iVar9 != 0x1e8);
          uStack_564 = afStack_25c[0x3f];
          uStack_578 = afStack_360[0x3d];
          uStack_570 = afStack_360[0x3e];
          uStack_574 = afStack_25c[0x3d];
          uStack_56c = afStack_25c[0x3e];
          uStack_568 = afStack_360[0x3f];
          thunk_JnIENwrUepweORinahuaAwahiPBzQw_WDnR(param_1 + 0xc,afStack_760);
          iVar9 = param_10[1];
          iVar4 = param_10[2];
          iVar10 = 0;
          do {
            pfVar6 = (float *)((int)afStack_760 + iVar10);
            pfVar15 = (float *)(iVar4 + iStack_768 + iVar9 * 0x100 + iVar10);
            iVar10 = iVar10 + 4;
            *pfVar15 = *pfVar15 + *pfVar6 * SQRT(1.0 - param_7 * param_7) * 0.4 * 0.015625;
          } while (iVar10 != 0x100);
          iVar9 = *param_10;
          if (1 < iVar9) {
            iVar11 = param_10[2];
            iVar21 = 1;
            iVar14 = param_10[1];
            uVar1 = iVar14 * 0x100;
            uVar8 = iVar11 + (iVar14 + uVar19) * 0x100;
            iVar4 = *(int *)(param_1 + 0x10);
            iVar10 = iVar11 + iStack_768 + iVar14 * 0x100;
            do {
              iVar13 = *(int *)(iVar4 + iVar21 * 0xc);
              puVar22 = (undefined8 *)(iVar13 + uVar19 * 0x100);
              if ((uVar8 < iVar13 + uVar19 * 0x100 + 0x100 &&
                   puVar22 < (undefined8 *)(uVar1 * (iVar9 + -2) + uVar8 + 0x100)) ||
                 (0x7fffffff < uVar1)) {
                iVar5 = 0;
                do {
                  uVar20 = *(undefined4 *)(iVar10 + iVar5);
                  *(undefined4 *)(iVar10 + iVar5) = *(undefined4 *)(iVar13 + iStack_768 + iVar5);
                  *(undefined4 *)(iVar13 + iStack_768 + iVar5) = uVar20;
                  iVar5 = iVar5 + 4;
                } while (iVar5 != 0x100);
              }
              else {
                uVar28 = *puVar22;
                uVar29 = puVar22[1];
                puVar12 = (undefined8 *)(iVar11 + (iVar14 * iVar21 + uVar19) * 0x100);
                uVar27 = puVar12[1];
                *puVar22 = *puVar12;
                puVar22[1] = uVar27;
                *puVar12 = uVar28;
                puVar12[1] = uVar29;
                uVar27 = puVar22[3];
                uVar28 = puVar12[2];
                uVar29 = puVar12[3];
                puVar12[2] = puVar22[2];
                puVar12[3] = uVar27;
                puVar22[2] = uVar28;
                puVar22[3] = uVar29;
                uVar27 = puVar12[5];
                uVar28 = puVar22[4];
                uVar29 = puVar22[5];
                puVar22[4] = puVar12[4];
                puVar22[5] = uVar27;
                puVar12[4] = uVar28;
                puVar12[5] = uVar29;
                uVar27 = puVar22[7];
                uVar28 = puVar12[6];
                uVar29 = puVar12[7];
                puVar12[6] = puVar22[6];
                puVar12[7] = uVar27;
                puVar22[6] = uVar28;
                puVar22[7] = uVar29;
                uVar27 = puVar22[9];
                uVar28 = puVar12[8];
                uVar29 = puVar12[9];
                puVar12[8] = puVar22[8];
                puVar12[9] = uVar27;
                puVar22[8] = uVar28;
                puVar22[9] = uVar29;
                uVar27 = puVar22[0xb];
                uVar28 = puVar12[10];
                uVar29 = puVar12[0xb];
                puVar12[10] = puVar22[10];
                puVar12[0xb] = uVar27;
                puVar22[10] = uVar28;
                puVar22[0xb] = uVar29;
                uVar27 = puVar22[0xd];
                uVar28 = puVar12[0xc];
                uVar29 = puVar12[0xd];
                puVar12[0xc] = puVar22[0xc];
                puVar12[0xd] = uVar27;
                puVar22[0xc] = uVar28;
                puVar22[0xd] = uVar29;
                uVar27 = puVar22[0xf];
                uVar28 = puVar12[0xe];
                uVar29 = puVar12[0xf];
                puVar12[0xe] = puVar22[0xe];
                puVar12[0xf] = uVar27;
                puVar22[0xe] = uVar28;
                puVar22[0xf] = uVar29;
                uVar27 = puVar22[0x11];
                uVar28 = puVar12[0x10];
                uVar29 = puVar12[0x11];
                puVar12[0x10] = puVar22[0x10];
                puVar12[0x11] = uVar27;
                puVar22[0x10] = uVar28;
                puVar22[0x11] = uVar29;
                uVar27 = puVar22[0x13];
                uVar28 = puVar12[0x12];
                uVar29 = puVar12[0x13];
                puVar12[0x12] = puVar22[0x12];
                puVar12[0x13] = uVar27;
                puVar22[0x12] = uVar28;
                puVar22[0x13] = uVar29;
                uVar27 = puVar22[0x15];
                uVar28 = puVar12[0x14];
                uVar29 = puVar12[0x15];
                puVar12[0x14] = puVar22[0x14];
                puVar12[0x15] = uVar27;
                puVar22[0x14] = uVar28;
                puVar22[0x15] = uVar29;
                uVar27 = puVar22[0x17];
                uVar28 = puVar12[0x16];
                uVar29 = puVar12[0x17];
                puVar12[0x16] = puVar22[0x16];
                puVar12[0x17] = uVar27;
                puVar22[0x16] = uVar28;
                puVar22[0x17] = uVar29;
                uVar27 = puVar22[0x19];
                uVar28 = puVar12[0x18];
                uVar29 = puVar12[0x19];
                puVar12[0x18] = puVar22[0x18];
                puVar12[0x19] = uVar27;
                puVar22[0x18] = uVar28;
                puVar22[0x19] = uVar29;
                uVar27 = puVar22[0x1b];
                uVar28 = puVar12[0x1a];
                uVar29 = puVar12[0x1b];
                puVar12[0x1a] = puVar22[0x1a];
                puVar12[0x1b] = uVar27;
                puVar22[0x1a] = uVar28;
                puVar22[0x1b] = uVar29;
                uVar27 = puVar22[0x1d];
                uVar28 = puVar12[0x1c];
                uVar29 = puVar12[0x1d];
                puVar12[0x1c] = puVar22[0x1c];
                puVar12[0x1d] = uVar27;
                puVar22[0x1c] = uVar28;
                puVar22[0x1d] = uVar29;
                uVar27 = puVar22[0x1f];
                uVar28 = puVar12[0x1e];
                uVar29 = puVar12[0x1f];
                puVar12[0x1e] = puVar22[0x1e];
                puVar12[0x1f] = uVar27;
                puVar22[0x1e] = uVar28;
                puVar22[0x1f] = uVar29;
              }
              iVar21 = iVar21 + 1;
              iVar10 = iVar10 + uVar1;
            } while (iVar21 != iVar9);
          }
        }
      }
      if (0 < iVar9) {
        iVar10 = param_10[1];
        iVar4 = param_10[2] + iStack_768;
        iVar11 = 0;
        do {
          iVar14 = 0;
          do {
            pfVar6 = (float *)(iVar4 + iVar14);
            iVar14 = iVar14 + 4;
            fVar25 = *pfVar6;
            fVar24 = fVar25;
            if (32767.0 <= fVar25) {
              fVar24 = 32767.0;
            }
            if (fVar25 <= -32768.0) {
              fVar24 = -32768.0;
            }
            *pfVar6 = fVar24;
          } while (iVar14 != 0x100);
          iVar11 = iVar11 + 1;
          iVar4 = iVar4 + iVar10 * 0x100;
        } while (iVar11 != iVar9);
      }
      param_2 = param_2 + 0x208;
      iStack_768 = iStack_768 + 0x100;
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 8));
  }
  return;
}


// =========================================================================
// Function: FUN_71ad5190
// Entry: 0x71ad5190 | Size: 328 bytes
// =========================================================================

undefined4 * FUN_71ad5190(undefined4 *param_1,uint param_2,int *param_3)

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
      FUN_71ad554c(param_1);
LAB_71ad529c:
      *unaff_r5 = 0;
      unaff_r5[1] = 0;
      unaff_r5[2] = 0;
      FUN_71ac91ec(unaff_r5);
      if (*unaff_r5 != 0) {
        unaff_r5[1] = *unaff_r5;
        thunk_qNQrlu();
      }
      param_1[1] = unaff_r5;
      FUN_71ad5478(&puStack_2c);
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
      if (iVar4 < 0) goto LAB_71ad529c;
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
// Function: FUN_71ad5478
// Entry: 0x71ad5478 | Size: 132 bytes
// =========================================================================

undefined4 * FUN_71ad5478(undefined4 *param_1)

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
// Function: FUN_71ad554c
// Entry: 0x71ad554c | Size: 20 bytes
// =========================================================================

void FUN_71ad554c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: xzopVLqdOJyLnOsEoaKsPERNdoShYQPF_GpYvl_qz_qDvekvayNunGB_iznIgSsAA
// Entry: 0x71ad55b4 | Size: 720 bytes
// =========================================================================

int xzopVLqdOJyLnOsEoaKsPERNdoShYQPF_GpYvl_qz_qDvekvayNunGB_iznIgSsAA
              (int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte abStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj();
  *(undefined4 *)(param_1 + 0x1e4) = param_3;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3c23d70a;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_3c,s_WebRTC_Aec3UseLowEarlyReflection_70067bdc,0x2c);
  uVar5 = uStack_34;
  bVar2 = abStack_3c[0];
  uVar9 = (uint)abStack_3c | 1;
  uVar8 = uStack_34;
  uVar7 = uStack_38;
  if ((abStack_3c[0] & 1) == 0) {
    uVar7 = (uint)(abStack_3c[0] >> 1);
    uVar8 = uVar9;
  }
  uVar10 = uVar8 + uVar7;
  uVar4 = uVar8;
  while (((uVar1 = uVar10, 6 < (int)uVar7 && (uVar4 = imp_memchr(uVar4,0x45,uVar7 - 6), uVar4 != 0))
         && (iVar6 = imp_memcmp(uVar4,s_Enabled_7006820b,7), uVar1 = uVar4, iVar6 != 0))) {
    uVar4 = uVar4 + 1;
    uVar7 = uVar10 - uVar4;
  }
  if ((bVar2 & 1) != 0) {
    thunk_qNQrlu(uVar5);
  }
  uVar12 = *(undefined4 *)(param_1 + 200);
  if (uVar1 == uVar8) {
    uVar12 = 0x3dcccccd;
  }
  uVar11 = *(undefined4 *)(param_1 + 200);
  if (uVar1 != uVar10) {
    uVar11 = uVar12;
  }
  *(undefined4 *)(param_1 + 0x1f0) = uVar11;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_3c,s_WebRTC_Aec3UseLowLateReflections_7006eab5,0x2b);
  uVar5 = uStack_34;
  bVar2 = abStack_3c[0];
  uVar8 = uStack_34;
  uVar7 = uStack_38;
  if ((abStack_3c[0] & 1) == 0) {
    uVar7 = (uint)(abStack_3c[0] >> 1);
    uVar8 = uVar9;
  }
  uVar10 = uVar8 + uVar7;
  uVar4 = uVar8;
  while (((uVar1 = uVar10, 6 < (int)uVar7 && (uVar4 = imp_memchr(uVar4,0x45,uVar7 - 6), uVar4 != 0))
         && (iVar6 = imp_memcmp(uVar4,s_Enabled_7006820b,7), uVar1 = uVar4, iVar6 != 0))) {
    uVar4 = uVar4 + 1;
    uVar7 = uVar10 - uVar4;
  }
  if ((bVar2 & 1) != 0) {
    thunk_qNQrlu(uVar5);
  }
  bVar3 = true;
  uVar12 = *(undefined4 *)(param_1 + 200);
  if (uVar1 == uVar8) {
    uVar12 = 0x3dcccccd;
  }
  uVar11 = *(undefined4 *)(param_1 + 200);
  if (uVar1 != uVar10) {
    uVar11 = uVar12;
  }
  *(undefined4 *)(param_1 + 500) = uVar11;
  if (*(char *)(param_1 + 0xd6) == '\0') {
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (abStack_3c,s_WebRTC_Aec3UseErleOnsetCompensat_7006b5eb,0x34);
    uVar7 = uStack_34;
    if ((abStack_3c[0] & 1) == 0) {
      uStack_38 = (uint)(abStack_3c[0] >> 1);
      uVar7 = uVar9;
    }
    uVar8 = uVar7 + uStack_38;
    uVar5 = uVar7;
    while (((uVar9 = uVar8, 6 < (int)uStack_38 &&
            (uVar5 = imp_memchr(uVar5,0x45,uStack_38 - 6), uVar5 != 0)) &&
           (iVar6 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar9 = uVar5, iVar6 != 0))) {
      uVar5 = uVar5 + 1;
      uStack_38 = uVar8 - uVar5;
    }
    if ((abStack_3c[0] & 1) != 0) {
      thunk_qNQrlu(uStack_34);
    }
    bVar3 = uVar9 != uVar8 && uVar9 == uVar7;
  }
  *(bool *)(param_1 + 0x1f8) = bVar3;
  thunk_JRICtcsojNxxBUfeyMHGIjMRFSz(param_1 + 0x404);
  thunk_KhWECBd_ivBYrZ_ojdajfMyRWuhSwFGFDipmjAzCj(param_1);
  return param_1;
}


// =========================================================================
// Function: KhWECBd_ivBYrZ_ojdajfMyRWuhSwFGFDipmjAzCj
// Entry: 0x71ad58ac | Size: 556 bytes
// =========================================================================

void KhWECBd_ivBYrZ_ojdajfMyRWuhSwFGFDipmjAzCj(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  thunk_hTHfSsOUvobvPQbFCCRbLUOIvJggpbY(param_1 + 0x404);
  uVar2 = *(undefined4 *)(param_1 + 0x10c);
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x400) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 1000) = uVar1;
  *(undefined4 *)(param_1 + 0x3ec) = uVar1;
  *(undefined4 *)(param_1 + 0x3f0) = uVar1;
  *(undefined4 *)(param_1 + 0x3f4) = uVar1;
  *(undefined4 *)(param_1 + 0x3f8) = uVar1;
  *(undefined4 *)(param_1 + 0x3fc) = uVar1;
  *(undefined4 *)(param_1 + 0x3c0) = uVar1;
  *(undefined4 *)(param_1 + 0x3c4) = uVar1;
  *(undefined4 *)(param_1 + 0x3c8) = uVar1;
  *(undefined4 *)(param_1 + 0x3cc) = uVar1;
  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  *(undefined4 *)(param_1 + 0x3d8) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3a0) = uVar1;
  *(undefined4 *)(param_1 + 0x3a4) = uVar1;
  *(undefined4 *)(param_1 + 0x3a8) = uVar1;
  *(undefined4 *)(param_1 + 0x3ac) = uVar1;
  *(undefined4 *)(param_1 + 0x3b0) = uVar1;
  *(undefined4 *)(param_1 + 0x3b4) = uVar1;
  *(undefined4 *)(param_1 + 0x3b8) = uVar1;
  *(undefined4 *)(param_1 + 0x3bc) = uVar1;
  *(undefined4 *)(param_1 + 0x380) = uVar1;
  *(undefined4 *)(param_1 + 900) = uVar1;
  *(undefined4 *)(param_1 + 0x388) = uVar1;
  *(undefined4 *)(param_1 + 0x38c) = uVar1;
  *(undefined4 *)(param_1 + 0x390) = uVar1;
  *(undefined4 *)(param_1 + 0x394) = uVar1;
  *(undefined4 *)(param_1 + 0x398) = uVar1;
  *(undefined4 *)(param_1 + 0x39c) = uVar1;
  *(undefined4 *)(param_1 + 0x360) = uVar1;
  *(undefined4 *)(param_1 + 0x364) = uVar1;
  *(undefined4 *)(param_1 + 0x368) = uVar1;
  *(undefined4 *)(param_1 + 0x36c) = uVar1;
  *(undefined4 *)(param_1 + 0x370) = uVar1;
  *(undefined4 *)(param_1 + 0x374) = uVar1;
  *(undefined4 *)(param_1 + 0x378) = uVar1;
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  *(undefined4 *)(param_1 + 0x340) = uVar1;
  *(undefined4 *)(param_1 + 0x344) = uVar1;
  *(undefined4 *)(param_1 + 0x348) = uVar1;
  *(undefined4 *)(param_1 + 0x34c) = uVar1;
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  *(undefined4 *)(param_1 + 0x354) = uVar1;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined4 *)(param_1 + 0x35c) = uVar1;
  *(undefined4 *)(param_1 + 800) = uVar1;
  *(undefined4 *)(param_1 + 0x324) = uVar1;
  *(undefined4 *)(param_1 + 0x328) = uVar1;
  *(undefined4 *)(param_1 + 0x32c) = uVar1;
  *(undefined4 *)(param_1 + 0x330) = uVar1;
  *(undefined4 *)(param_1 + 0x334) = uVar1;
  *(undefined4 *)(param_1 + 0x338) = uVar1;
  *(undefined4 *)(param_1 + 0x33c) = uVar1;
  *(undefined4 *)(param_1 + 0x300) = uVar1;
  *(undefined4 *)(param_1 + 0x304) = uVar1;
  *(undefined4 *)(param_1 + 0x308) = uVar1;
  *(undefined4 *)(param_1 + 0x30c) = uVar1;
  *(undefined4 *)(param_1 + 0x310) = uVar1;
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  *(undefined4 *)(param_1 + 0x31c) = uVar1;
  *(undefined4 *)(param_1 + 0x2fc) = uVar2;
  *(undefined4 *)(param_1 + 0x2dc) = uVar2;
  *(undefined4 *)(param_1 + 0x2e0) = uVar2;
  *(undefined4 *)(param_1 + 0x2e4) = uVar2;
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ec) = uVar2;
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  *(undefined4 *)(param_1 + 0x2f4) = uVar2;
  *(undefined4 *)(param_1 + 0x2f8) = uVar2;
  *(undefined4 *)(param_1 + 700) = uVar2;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(undefined4 *)(param_1 + 0x2c4) = uVar2;
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  *(undefined4 *)(param_1 + 0x2cc) = uVar2;
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  *(undefined4 *)(param_1 + 0x2d4) = uVar2;
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  *(undefined4 *)(param_1 + 0x29c) = uVar2;
  *(undefined4 *)(param_1 + 0x2a0) = uVar2;
  *(undefined4 *)(param_1 + 0x2a4) = uVar2;
  *(undefined4 *)(param_1 + 0x2a8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ac) = uVar2;
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  *(undefined4 *)(param_1 + 0x2b4) = uVar2;
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 0x27c) = uVar2;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  *(undefined4 *)(param_1 + 0x284) = uVar2;
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = uVar2;
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(undefined4 *)(param_1 + 0x294) = uVar2;
  *(undefined4 *)(param_1 + 0x298) = uVar2;
  *(undefined4 *)(param_1 + 0x25c) = uVar2;
  *(undefined4 *)(param_1 + 0x260) = uVar2;
  *(undefined4 *)(param_1 + 0x264) = uVar2;
  *(undefined4 *)(param_1 + 0x268) = uVar2;
  *(undefined4 *)(param_1 + 0x26c) = uVar2;
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  *(undefined4 *)(param_1 + 0x274) = uVar2;
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar2;
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  *(undefined4 *)(param_1 + 0x24c) = uVar2;
  *(undefined4 *)(param_1 + 0x250) = uVar2;
  *(undefined4 *)(param_1 + 0x254) = uVar2;
  *(undefined4 *)(param_1 + 600) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x220) = uVar2;
  *(undefined4 *)(param_1 + 0x224) = uVar2;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar2;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  *(undefined4 *)(param_1 + 0x20c) = uVar2;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  return;
}


// =========================================================================
// Function: RjNVPxRlWUWARDPucTXBEbrBUeOfn_TnKlOzn
// Entry: 0x71ad5ad8 | Size: 32 bytes
// =========================================================================

int RjNVPxRlWUWARDPucTXBEbrBUeOfn_TnKlOzn(int param_1)

{
  thunk_HzTCbQ_MlTYbf_sKaSYhtxHzrpp(param_1 + 0x404);
  return param_1;
}


// =========================================================================
// Function: fDjvcuDHaMRRG_iRiGXjRUNIiwESMRvByCFUFlHKlVbVGdmoctCkUjetvvEfdrEIBWKlUCbCfsDDLZjTndhWaJNiyCUOejOeya_wbZAZijxtfTPitSkZLHEGyLCLETcCUSPAZWCtndEgRHAJTTpOhzMFOTv
// Entry: 0x71ad5af8 | Size: 4092 bytes
// =========================================================================

void fDjvcuDHaMRRG_iRiGXjRUNIiwESMRvByCFUFlHKlVbVGdmoctCkUjetvvEfdrEIBWKlUCbCfsDDLZjTndhWaJNiyCUOejOeya_wbZAZijxtfTPitSkZLHEGyLCLETcCUSPAZWCtndEgRHAJTTpOhzMFOTv
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               undefined4 param_7,uint param_8,int param_9,int param_10,int param_11,int param_12)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int *piVar28;
  undefined1 *puVar29;
  uint uVar30;
  int iVar31;
  int extraout_r1;
  int iVar32;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  float *pfVar33;
  int iVar34;
  float *pfVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  int iVar39;
  float *pfVar40;
  undefined1 *puVar41;
  undefined1 (*pauVar42) [16];
  int iVar43;
  bool bVar44;
  float fVar45;
  undefined1 extraout_var [12];
  undefined1 auVar46 [16];
  undefined1 auVar55 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
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
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 auStack_278 [2];
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  float fStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_70;
  
  piVar28 = *(int **)(param_3 + 4);
  iVar38 = piVar28[1];
  FUN_71ba2da8(*piVar28 + piVar28[5],*piVar28);
  uStack_2a0 = *(uint *)(param_1 + 0x1e4);
  piVar28 = (int *)(iVar38 + extraout_r1 * 0xc);
  puVar29 = (undefined1 *)*piVar28;
  puVar41 = (undefined1 *)0x0;
  if ((undefined1 *)piVar28[1] != puVar29) {
    puVar41 = puVar29;
  }
  puVar29 = puVar41;
  if (1 < uStack_2a0) {
    puVar29 = auStack_170;
    imp___aeabi_memclr8(puVar29,0x104);
    uVar30 = 0;
    do {
      iVar38 = 0;
      do {
        pfVar33 = (float *)(puVar29 + iVar38);
        pfVar35 = (float *)(puVar41 + iVar38);
        iVar38 = iVar38 + 4;
        *pfVar33 = *pfVar35 + *pfVar33;
      } while (iVar38 != 0x104);
      uVar30 = uVar30 + 1;
      puVar41 = puVar41 + 0x104;
    } while (uVar30 != uStack_2a0);
  }
  iVar36 = 0;
  iVar38 = *(int *)(param_1 + 0x108);
  fVar45 = *(float *)(param_1 + 0x10c);
  do {
    iVar39 = param_1 + iVar36;
    if (*(float *)(puVar29 + iVar36) < *(float *)(iVar39 + 0x1fc)) {
      *(float *)(iVar39 + 0x1fc) = *(float *)(puVar29 + iVar36);
      *(undefined4 *)(iVar39 + 0x300) = 0;
    }
    else if (*(int *)(iVar39 + 0x300) < iVar38) {
      *(int *)(iVar39 + 0x300) = *(int *)(iVar39 + 0x300) + 1;
    }
    else {
      fVar57 = *(float *)(iVar39 + 0x1fc) * 1.1;
      if (fVar57 < fVar45) {
        fVar57 = fVar45;
      }
      *(float *)(iVar39 + 0x1fc) = fVar57;
    }
    iVar36 = iVar36 + 4;
  } while (iVar36 != 0x104);
  bVar44 = *(char *)(param_2 + 0x231) != '\0';
  cVar1 = '\0';
  if (bVar44) {
    cVar1 = *(char *)(param_2 + 0xae);
  }
  if (bVar44 && cVar1 != '\0') {
    if (*(char *)(param_2 + 0x24c) == '\0') {
      if (param_5 == 0) {
        param_4 = 0;
      }
      iVar38 = *(int *)(param_2 + 0x624);
      if (iVar38 == 0) {
        iVar36 = 0x140;
        if (*(char *)(param_2 + 0x49c) != '\0') {
          iVar36 = 0x14c;
        }
        if (*(char *)(param_1 + 0x1f8) == '\0' && (param_8 ^ 1) == 0) {
          iVar36 = 0x140;
        }
        piVar28 = (int *)((char *)(param_2 + 0x49c) + iVar36);
      }
      else {
        iVar36 = 0x13c;
        if (*(char *)(iVar38 + 0x138) != '\0') {
          iVar36 = 0x148;
        }
        if (*(char *)(param_1 + 0x1f8) == '\0' && (param_8 ^ 1) == 0) {
          iVar36 = 0x13c;
        }
        piVar28 = (int *)(iVar38 + iVar36);
      }
      iVar36 = 0;
      if (piVar28[1] != *piVar28) {
        iVar36 = *piVar28;
      }
      if (param_10 != 0) {
        iVar31 = 0;
        iVar39 = param_9;
        iVar32 = param_4;
        do {
          iVar43 = 0;
          do {
            pfVar33 = (float *)(iVar36 + iVar43);
            pfVar35 = (float *)(iVar32 + iVar43);
            pfVar40 = (float *)(iVar39 + iVar43);
            iVar43 = iVar43 + 4;
            *pfVar40 = *pfVar35 / *pfVar33;
          } while (iVar43 != 0x104);
          iVar31 = iVar31 + 1;
          iVar32 = iVar32 + 0x104;
          iVar36 = iVar36 + 0x104;
          iVar39 = iVar39 + 0x104;
        } while (iVar31 != param_10);
      }
      piVar28 = (int *)(iVar38 + 0x13c);
      piVar37 = (int *)(iVar38 + 0x140);
      if (iVar38 == 0) {
        piVar28 = (int *)(param_2 + 0x5f4);
        piVar37 = (int *)(param_2 + 0x5f8);
      }
      iVar38 = 0;
      if (*piVar37 != *piVar28) {
        iVar38 = *piVar28;
      }
      if (param_12 != 0) {
        iVar39 = 0;
        iVar36 = param_11;
        do {
          iVar32 = 0;
          do {
            pfVar33 = (float *)(iVar38 + iVar32);
            pfVar35 = (float *)(param_4 + iVar32);
            pfVar40 = (float *)(iVar36 + iVar32);
            iVar32 = iVar32 + 4;
            *pfVar40 = *pfVar35 / *pfVar33;
          } while (iVar32 != 0x104);
          iVar39 = iVar39 + 1;
          param_4 = param_4 + 0x104;
          iVar38 = iVar38 + 0x104;
          iVar36 = iVar36 + 0x104;
        } while (iVar39 != param_12);
      }
    }
    else {
      iVar38 = param_11;
      iVar36 = param_9;
      iVar39 = param_10;
      if (param_10 != 0) {
        do {
          imp___aeabi_memmove4(iVar36,param_6,0x104);
          imp___aeabi_memmove4(iVar38,param_6,0x104);
          param_6 = param_6 + 0x104;
          iVar39 = iVar39 + -1;
          iVar38 = iVar38 + 0x104;
          iVar36 = iVar36 + 0x104;
        } while (iVar39 != 0);
        uStack_2a0 = *(uint *)(param_1 + 0x1e4);
      }
    }
    piVar28 = *(int **)(param_3 + 4);
    iVar38 = piVar28[1];
    FUN_71ba2da8(*(int *)(*(int *)(param_2 + 0x65c) + 8) + piVar28[5] + *piVar28 + 1,*piVar28);
    piVar28 = (int *)(iVar38 + extraout_r1_02 * 0xc);
    puVar29 = (undefined1 *)*piVar28;
    puVar41 = (undefined1 *)0x0;
    if ((undefined1 *)piVar28[1] != puVar29) {
      puVar41 = puVar29;
    }
    puVar29 = puVar41;
    if (1 < uStack_2a0) {
      imp___aeabi_memclr8(auStack_170,0x104);
      uVar30 = 0;
      do {
        iVar38 = 0;
        do {
          pfVar33 = (float *)(auStack_170 + iVar38);
          pfVar35 = (float *)(puVar41 + iVar38);
          iVar38 = iVar38 + 4;
          *pfVar33 = *pfVar35 + *pfVar33;
        } while (iVar38 != 0x104);
        uVar30 = uVar30 + 1;
        puVar41 = puVar41 + 0x104;
        puVar29 = auStack_170;
      } while (uVar30 != uStack_2a0);
    }
    iVar38 = 100;
    if (param_8 != 0) {
      iVar38 = 0x68;
    }
    if (*(char *)(**(int **)(param_2 + 0x8dc) + 8) != '\0') {
      iVar38 = 100;
    }
    param_1 = param_1 + 0x404;
    thunk_FxNfTSfjdXhOvh_MVCwRwyKfMsUsXuodkoooTTturkQsZTXUMRzKfgBi_NKOqjSAcNCYOg
              (param_1,puVar29,0x41,*(int *)(param_2 + 0x8e8) + 8,0x41,
               *(undefined4 *)(**(int **)(param_2 + 0x8dc) + iVar38));
    if (param_10 != 0) {
      iVar36 = 0;
      iVar38 = param_9;
      do {
        iVar39 = 0;
        do {
          pfVar33 = (float *)(iVar38 + iVar39);
          pfVar35 = (float *)(param_1 + iVar39);
          iVar39 = iVar39 + 4;
          *pfVar33 = *pfVar35 + *pfVar33;
        } while (iVar39 != 0x104);
        iVar36 = iVar36 + 1;
        iVar38 = iVar38 + 0x104;
      } while (iVar36 != param_10);
    }
    if (param_12 != 0) {
      iVar36 = 0;
      iVar38 = param_11;
      do {
        iVar39 = 0;
        do {
          pfVar33 = (float *)(iVar38 + iVar39);
          pfVar35 = (float *)(param_1 + iVar39);
          iVar39 = iVar39 + 4;
          *pfVar33 = *pfVar35 + *pfVar33;
        } while (iVar39 != 0x104);
        iVar36 = iVar36 + 1;
        iVar38 = iVar38 + 0x104;
      } while (iVar36 != param_12);
    }
    goto LAB_71ad6a70;
  }
  iVar38 = param_9;
  iVar36 = param_10;
  iVar39 = param_11;
  if (*(int **)(param_2 + 0x22c) == (int *)0x0) {
    iVar32 = 0x1f0;
    if (*(char *)(param_2 + 0x24c) == '\0') goto LAB_71ad5d84;
joined_r0x71ad5cb8:
    for (; iVar36 != 0; iVar36 = iVar36 + -1) {
      imp___aeabi_memmove4(iVar38,param_6,0x104);
      imp___aeabi_memmove4(iVar39,param_6,0x104);
      param_6 = param_6 + 0x104;
      iVar38 = iVar38 + 0x104;
      iVar39 = iVar39 + 0x104;
    }
  }
  else {
    iVar31 = (**(code **)(**(int **)(param_2 + 0x22c) + 8))();
    iVar32 = 0x1f0;
    if (iVar31 != 0) {
      iVar32 = 0x1e8;
    }
    if (*(char *)(param_2 + 0x24c) != '\0') goto joined_r0x71ad5cb8;
LAB_71ad5d84:
    iVar31 = *(int *)(param_2 + 0x214);
    iVar38 = *(int *)(param_1 + 0x11c);
    auVar47._0_4_ = *(float *)(param_1 + iVar32);
    iVar36 = *(int *)(param_1 + 0x120);
    piVar28 = *(int **)(param_3 + 4);
    iVar39 = *piVar28;
    iVar43 = piVar28[5];
    iVar32 = *(int *)(param_1 + 0x1e4);
    imp___aeabi_memclr8(auStack_278,0x104);
    uVar30 = iVar31 - iVar38;
    FUN_71ba2da8(iVar39 + iVar43 + (uVar30 & ~((int)uVar30 >> 0x1f)),iVar39);
    FUN_71ba2da8(iVar31 + iVar36 + iVar39 + iVar43 + 1,iVar39);
    auVar70._12_4_ = 0;
    auVar70._0_12_ = extraout_var;
    auVar46 = auVar70 << 0x20;
    if (iVar32 == 1) {
      if (extraout_r1_00 != extraout_r1_01) {
        uStack_2a0 = uStack_268;
        uStack_29c = uStack_264;
        uStack_298 = uStack_260;
        uStack_294 = uStack_25c;
        auVar46._8_8_ = auStack_278[1];
        auVar46._0_8_ = auStack_278[0];
        auVar72._8_8_ = uStack_250;
        auVar72._0_8_ = uStack_258;
        auVar74._8_8_ = uStack_240;
        auVar74._0_8_ = uStack_248;
        uStack_2b0 = (undefined4)uStack_238;
        uStack_2ac = uStack_238._4_4_;
        uStack_2a8 = (undefined4)uStack_230;
        uStack_2a4 = uStack_230._4_4_;
        fStack_2c0 = fStack_178;
        auVar56._4_4_ = uStack_224;
        auVar56._0_4_ = uStack_228;
        auVar56._8_4_ = uStack_220;
        auVar56._12_4_ = uStack_21c;
        auVar79._4_4_ = uStack_214;
        auVar79._0_4_ = uStack_218;
        auVar79._8_4_ = uStack_210;
        auVar79._12_4_ = uStack_20c;
        auVar81._8_8_ = uStack_200;
        auVar81._0_8_ = uStack_208;
        auVar76._8_8_ = uStack_1f0;
        auVar76._0_8_ = uStack_1f8;
        auVar58._8_8_ = uStack_1e0;
        auVar58._0_8_ = uStack_1e8;
        auVar59._8_8_ = uStack_1d0;
        auVar59._0_8_ = uStack_1d8;
        auVar61._8_8_ = uStack_1c0;
        auVar61._0_8_ = uStack_1c8;
        auVar63._8_8_ = uStack_1b0;
        auVar63._0_8_ = uStack_1b8;
        auVar65._4_4_ = uStack_1a4;
        auVar65._0_4_ = uStack_1a8;
        auVar65._8_4_ = uStack_1a0;
        auVar65._12_4_ = uStack_19c;
        auVar67._4_4_ = uStack_194;
        auVar67._0_4_ = uStack_198;
        auVar67._8_4_ = uStack_190;
        auVar67._12_4_ = uStack_18c;
        auVar69._4_4_ = uStack_184;
        auVar69._0_4_ = uStack_188;
        auVar69._8_4_ = uStack_180;
        auVar69._12_4_ = uStack_17c;
        iVar38 = extraout_r1_00;
        do {
          pauVar42 = *(undefined1 (**) [16])(piVar28[1] + iVar38 * 0xc);
          auVar70 = FloatVectorCompareGreaterThan(*pauVar42,auVar46,2);
          auVar46 = VectorBitwiseInsertIfTrue(auVar46,*pauVar42,auVar70);
          auStack_278[0] = auVar46._0_8_;
          auStack_278[1] = auVar46._8_8_;
          auVar6._4_4_ = uStack_29c;
          auVar6._0_4_ = uStack_2a0;
          auVar6._8_4_ = uStack_298;
          auVar6._12_4_ = uStack_294;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[1],auVar6,2);
          auVar70 = VectorBitwiseInsertIfTrue(auVar6,pauVar42[1],auVar70);
          uStack_2a0 = auVar70._0_4_;
          uStack_29c = auVar70._4_4_;
          uStack_298 = auVar70._8_4_;
          uStack_294 = auVar70._12_4_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[2],auVar72,2);
          auVar72 = VectorBitwiseInsertIfTrue(auVar72,pauVar42[2],auVar70);
          uStack_258 = auVar72._0_8_;
          uStack_250 = auVar72._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[3],auVar74,2);
          auVar74 = VectorBitwiseSelect(auVar70,pauVar42[3],auVar74);
          auVar4._4_4_ = uStack_2ac;
          auVar4._0_4_ = uStack_2b0;
          auVar4._8_4_ = uStack_2a8;
          auVar4._12_4_ = uStack_2a4;
          uStack_248 = auVar74._0_8_;
          uStack_240 = auVar74._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[4],auVar4,2);
          auVar70 = VectorBitwiseInsertIfTrue(auVar4,pauVar42[4],auVar70);
          uStack_2b0 = auVar70._0_4_;
          uStack_2ac = auVar70._4_4_;
          uStack_2a8 = auVar70._8_4_;
          uStack_2a4 = auVar70._12_4_;
          uStack_238 = auVar70._0_8_;
          uStack_230 = auVar70._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[5],auVar56,2);
          auVar56 = VectorBitwiseInsertIfTrue(auVar56,pauVar42[5],auVar70);
          uStack_228 = auVar56._0_4_;
          uStack_224 = auVar56._4_4_;
          uStack_220 = auVar56._8_4_;
          uStack_21c = auVar56._12_4_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[6],auVar79,2);
          auVar79 = VectorBitwiseInsertIfTrue(auVar79,pauVar42[6],auVar70);
          uStack_218 = auVar79._0_4_;
          uStack_214 = auVar79._4_4_;
          uStack_210 = auVar79._8_4_;
          uStack_20c = auVar79._12_4_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[7],auVar81,2);
          auVar81 = VectorBitwiseInsertIfTrue(auVar81,pauVar42[7],auVar70);
          uStack_208 = auVar81._0_8_;
          uStack_200 = auVar81._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[8],auVar76,2);
          auVar76 = VectorBitwiseInsertIfTrue(auVar76,pauVar42[8],auVar70);
          uStack_1f8 = auVar76._0_8_;
          uStack_1f0 = auVar76._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[9],auVar58,2);
          auVar58 = VectorBitwiseInsertIfTrue(auVar58,pauVar42[9],auVar70);
          uStack_1e8 = auVar58._0_8_;
          uStack_1e0 = auVar58._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[10],auVar59,2);
          auVar59 = VectorBitwiseInsertIfTrue(auVar59,pauVar42[10],auVar70);
          uStack_1d8 = auVar59._0_8_;
          uStack_1d0 = auVar59._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[0xb],auVar61,2);
          auVar61 = VectorBitwiseInsertIfTrue(auVar61,pauVar42[0xb],auVar70);
          uStack_1c8 = auVar61._0_8_;
          uStack_1c0 = auVar61._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[0xc],auVar63,2);
          auVar63 = VectorBitwiseInsertIfTrue(auVar63,pauVar42[0xc],auVar70);
          uStack_1b8 = auVar63._0_8_;
          uStack_1b0 = auVar63._8_8_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[0xd],auVar65,2);
          auVar65 = VectorBitwiseInsertIfTrue(auVar65,pauVar42[0xd],auVar70);
          uStack_1a8 = auVar65._0_4_;
          uStack_1a4 = auVar65._4_4_;
          uStack_1a0 = auVar65._8_4_;
          uStack_19c = auVar65._12_4_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[0xe],auVar67,2);
          auVar67 = VectorBitwiseInsertIfTrue(auVar67,pauVar42[0xe],auVar70);
          uStack_198 = auVar67._0_4_;
          uStack_194 = auVar67._4_4_;
          uStack_190 = auVar67._8_4_;
          uStack_18c = auVar67._12_4_;
          auVar70 = FloatVectorCompareGreaterThan(pauVar42[0xf],auVar69,2);
          auVar69 = VectorBitwiseInsertIfTrue(auVar69,pauVar42[0xf],auVar70);
          uStack_188 = auVar69._0_4_;
          uStack_184 = auVar69._4_4_;
          uStack_180 = auVar69._8_4_;
          uStack_17c = auVar69._12_4_;
          if (fStack_2c0 < *(float *)pauVar42[0x10]) {
            fStack_2c0 = *(float *)pauVar42[0x10];
          }
          fStack_178 = fStack_2c0;
          iVar36 = 0;
          if (iVar38 < iVar39 + -1) {
            iVar36 = iVar38 + 1;
          }
          iVar38 = iVar36;
          uStack_268 = uStack_2a0;
          uStack_264 = uStack_29c;
          uStack_260 = uStack_298;
          uStack_25c = uStack_294;
        } while (iVar36 != extraout_r1_01);
      }
    }
    else if (extraout_r1_00 != extraout_r1_01) {
      auVar75._8_8_ = auStack_278[1];
      auVar75._0_8_ = auStack_278[0];
      auVar77._12_4_ = extraout_var._8_4_;
      auVar77._0_8_ = auVar46._0_8_;
      auVar77._8_4_ = fStack_178;
      auVar73._4_4_ = uStack_264;
      auVar73._0_4_ = uStack_268;
      auVar73._8_4_ = uStack_260;
      auVar73._12_4_ = uStack_25c;
      auVar78._8_8_ = uStack_250;
      auVar78._0_8_ = uStack_258;
      auVar80._8_8_ = uStack_240;
      auVar80._0_8_ = uStack_248;
      uStack_2b0 = (undefined4)uStack_238;
      uStack_2ac = uStack_238._4_4_;
      uStack_2a8 = (undefined4)uStack_230;
      uStack_2a4 = uStack_230._4_4_;
      auVar60._8_8_ = uStack_200;
      auVar60._0_8_ = uStack_208;
      auVar62._8_8_ = uStack_1f0;
      auVar62._0_8_ = uStack_1f8;
      auVar71._8_8_ = uStack_1e0;
      auVar71._0_8_ = uStack_1e8;
      auVar64._8_8_ = uStack_1d0;
      auVar64._0_8_ = uStack_1d8;
      auVar66._8_8_ = uStack_1c0;
      auVar66._0_8_ = uStack_1c8;
      auVar68._8_8_ = uStack_1b0;
      auVar68._0_8_ = uStack_1b8;
      iVar36 = piVar28[1];
      iVar38 = extraout_r1_00;
      auVar46 = auVar77;
      do {
        uVar27 = uStack_17c;
        uVar26 = uStack_180;
        uVar25 = uStack_184;
        uVar24 = uStack_188;
        uVar23 = uStack_18c;
        uVar22 = uStack_190;
        uVar21 = uStack_194;
        uVar20 = uStack_198;
        uVar19 = uStack_19c;
        uVar18 = uStack_1a0;
        uVar17 = uStack_1a4;
        uVar16 = uStack_1a8;
        uVar15 = uStack_20c;
        uVar14 = uStack_210;
        uVar13 = uStack_214;
        uVar12 = uStack_218;
        uVar11 = uStack_21c;
        uVar10 = uStack_220;
        uVar9 = uStack_224;
        uVar8 = uStack_228;
        fVar45 = auVar46._8_4_;
        imp___aeabi_memclr8(auStack_170,0x104);
        auVar82._4_4_ = uVar13;
        auVar82._0_4_ = uVar12;
        auVar82._8_4_ = uVar14;
        auVar82._12_4_ = uVar15;
        auVar83._4_4_ = uVar9;
        auVar83._0_4_ = uVar8;
        auVar83._8_4_ = uVar10;
        auVar83._12_4_ = uVar11;
        auVar5._4_4_ = uStack_2ac;
        auVar5._0_4_ = uStack_2b0;
        auVar5._8_4_ = uStack_2a8;
        auVar5._12_4_ = uStack_2a4;
        if (iVar32 != 0) {
          iVar31 = *(int *)(iVar36 + iVar38 * 0xc);
          iVar43 = 0;
          do {
            iVar34 = 0;
            do {
              pfVar33 = (float *)(auStack_170 + iVar34);
              pfVar35 = (float *)(iVar31 + iVar34);
              iVar34 = iVar34 + 4;
              *pfVar33 = *pfVar35 + *pfVar33;
            } while (iVar34 != 0x104);
            iVar43 = iVar43 + 1;
            iVar31 = iVar31 + 0x104;
          } while (iVar43 != iVar32);
        }
        auVar70 = FloatVectorCompareGreaterThan(auStack_f0,auVar62,2);
        auVar46 = FloatVectorCompareGreaterThan(auStack_100,auVar60,2);
        auVar77 = FloatVectorCompareGreaterThan(auStack_110,auVar82,2);
        auVar62 = VectorBitwiseInsertIfTrue(auVar62,auStack_f0,auVar70);
        auVar60 = VectorBitwiseInsertIfTrue(auVar60,auStack_100,auVar46);
        auVar46 = FloatVectorCompareGreaterThan(auStack_120,auVar83,2);
        auVar70 = VectorBitwiseInsertIfTrue(auVar82,auStack_110,auVar77);
        auVar77 = FloatVectorCompareGreaterThan(auStack_130,auVar5,2);
        auVar46 = VectorBitwiseInsertIfTrue(auVar83,auStack_120,auVar46);
        auVar82 = VectorBitwiseInsertIfTrue(auVar5,auStack_130,auVar77);
        auVar77 = FloatVectorCompareGreaterThan(auStack_140,auVar80,2);
        auVar80 = VectorBitwiseInsertIfTrue(auVar80,auStack_140,auVar77);
        auVar77 = FloatVectorCompareGreaterThan(auStack_170,auVar75,2);
        auVar75 = VectorBitwiseInsertIfTrue(auVar75,auStack_170,auVar77);
        auVar77 = FloatVectorCompareGreaterThan(auStack_160,auVar73,2);
        auVar73 = VectorBitwiseInsertIfTrue(auVar73,auStack_160,auVar77);
        auVar77 = FloatVectorCompareGreaterThan(auStack_150,auVar78,2);
        auVar78 = VectorBitwiseInsertIfTrue(auVar78,auStack_150,auVar77);
        uStack_2b0 = auVar82._0_4_;
        uStack_2ac = auVar82._4_4_;
        uStack_2a8 = auVar82._8_4_;
        uStack_2a4 = auVar82._12_4_;
        uStack_2d0 = auVar46._0_4_;
        uStack_2cc = auVar46._4_4_;
        uStack_2c8 = auVar46._8_4_;
        uStack_2c4 = auVar46._12_4_;
        uStack_268 = auVar73._0_4_;
        uStack_264 = auVar73._4_4_;
        uStack_260 = auVar73._8_4_;
        uStack_25c = auVar73._12_4_;
        uStack_2f0 = auVar70._0_4_;
        uStack_2ec = auVar70._4_4_;
        uStack_2e8 = auVar70._8_4_;
        uStack_2e4 = auVar70._12_4_;
        uStack_258 = auVar78._0_8_;
        uStack_250 = auVar78._8_8_;
        auVar2._4_4_ = uVar25;
        auVar2._0_4_ = uVar24;
        auVar2._8_4_ = uVar26;
        auVar2._12_4_ = uVar27;
        uStack_248 = auVar80._0_8_;
        uStack_240 = auVar80._8_8_;
        uStack_238 = auVar82._0_8_;
        uStack_230 = auVar82._8_8_;
        auVar54._4_12_ = auVar70._4_12_;
        auVar54._0_4_ = fStack_70;
        uStack_208 = auVar60._0_8_;
        uStack_200 = auVar60._8_8_;
        auVar70 = FloatVectorCompareGreaterThan(auStack_80,auVar2,2);
        uStack_1f8 = auVar62._0_8_;
        uStack_1f0 = auVar62._8_8_;
        auVar46._0_8_ = auVar54._0_8_;
        auStack_278[0] = auVar75._0_8_;
        auStack_278[1] = auVar75._8_8_;
        auVar77 = VectorBitwiseInsertIfTrue(auVar2,auStack_80,auVar70);
        auVar3._4_4_ = uVar21;
        auVar3._0_4_ = uVar20;
        auVar3._8_4_ = uVar22;
        auVar3._12_4_ = uVar23;
        auVar70 = FloatVectorCompareGreaterThan(auStack_90,auVar3,2);
        auVar70 = VectorBitwiseInsertIfTrue(auVar3,auStack_90,auVar70);
        auVar7._4_4_ = uVar17;
        auVar7._0_4_ = uVar16;
        auVar7._8_4_ = uVar18;
        auVar7._12_4_ = uVar19;
        auVar82 = FloatVectorCompareGreaterThan(auStack_a0,auVar7,2);
        auVar83 = VectorBitwiseInsertIfTrue(auVar7,auStack_a0,auVar82);
        auVar82 = FloatVectorCompareGreaterThan(auStack_b0,auVar68,2);
        auVar68 = VectorBitwiseInsertIfTrue(auVar68,auStack_b0,auVar82);
        auVar82 = FloatVectorCompareGreaterThan(auStack_c0,auVar66,2);
        auVar66 = VectorBitwiseInsertIfTrue(auVar66,auStack_c0,auVar82);
        if (fVar45 < fStack_70) {
          fVar45 = fStack_70;
        }
        auVar46._8_4_ = fVar45;
        auVar46._12_4_ = uStack_2e4;
        auVar82 = FloatVectorCompareGreaterThan(auStack_d0,auVar64,2);
        auVar64 = VectorBitwiseInsertIfTrue(auVar64,auStack_d0,auVar82);
        auVar82 = FloatVectorCompareGreaterThan(auStack_e0,auVar71,2);
        auVar71 = VectorBitwiseInsertIfTrue(auVar71,auStack_e0,auVar82);
        fStack_178 = fVar45;
        uStack_1e8 = auVar71._0_8_;
        uStack_1e0 = auVar71._8_8_;
        iVar31 = 0;
        if (iVar38 < iVar39 + -1) {
          iVar31 = iVar38 + 1;
        }
        uStack_2a0 = auVar83._0_4_;
        uStack_29c = auVar83._4_4_;
        uStack_298 = auVar83._8_4_;
        uStack_294 = auVar83._12_4_;
        uStack_1d8 = auVar64._0_8_;
        uStack_1d0 = auVar64._8_8_;
        fStack_2c0 = auVar70._0_4_;
        uStack_2bc = auVar70._4_4_;
        uStack_2b8 = auVar70._8_4_;
        uStack_2b4 = auVar70._12_4_;
        uStack_1c8 = auVar66._0_8_;
        uStack_1c0 = auVar66._8_8_;
        uStack_2e0 = auVar77._0_4_;
        uStack_2dc = auVar77._4_4_;
        uStack_2d8 = auVar77._8_4_;
        uStack_2d4 = auVar77._12_4_;
        uStack_1b8 = auVar68._0_8_;
        uStack_1b0 = auVar68._8_8_;
        iVar38 = iVar31;
        uStack_228 = uStack_2d0;
        uStack_224 = uStack_2cc;
        uStack_220 = uStack_2c8;
        uStack_21c = uStack_2c4;
        uStack_218 = uStack_2f0;
        uStack_214 = uStack_2ec;
        uStack_210 = uStack_2e8;
        uStack_20c = uStack_2e4;
        uStack_1a8 = uStack_2a0;
        uStack_1a4 = uStack_29c;
        uStack_1a0 = uStack_298;
        uStack_19c = uStack_294;
        uStack_198 = fStack_2c0;
        uStack_194 = uStack_2bc;
        uStack_190 = uStack_2b8;
        uStack_18c = uStack_2b4;
        uStack_188 = uStack_2e0;
        uStack_184 = uStack_2dc;
        uStack_180 = uStack_2d8;
        uStack_17c = uStack_2d4;
      } while (iVar31 != extraout_r1_01);
    }
    auVar55 = auVar46._4_12_;
    if (*(char *)(param_2 + 0xf4) == '\0') {
      auVar51._12_4_ = auVar46._12_4_;
      auVar51._0_8_ = auVar46._0_8_;
      auVar51._8_4_ = *(float *)(param_1 + 0x118);
      auVar52._4_12_ = auVar51._4_12_;
      auVar52._0_4_ = *(float *)(param_1 + 0x114);
      iVar38 = 0;
      auVar53._0_8_ = auVar52._0_8_;
      auVar53._8_4_ = -auVar51._8_4_;
      auVar53._12_4_ = auVar51._12_4_;
      auVar55 = auVar53._4_12_;
      do {
        pfVar33 = (float *)((int)auStack_278 + iVar38);
        fVar45 = *pfVar33;
        if (fVar45 < auVar52._0_4_) {
          fVar45 = fVar45 + auVar53._8_4_ * (auVar52._0_4_ - fVar45);
          fVar57 = 0.0;
          if (0.0 < fVar45) {
            fVar57 = fVar45;
          }
          *pfVar33 = fVar57;
        }
        iVar38 = iVar38 + 4;
      } while (iVar38 != 0x104);
    }
    auVar47._4_12_ = auVar55;
    auVar48._12_4_ = auVar55._8_4_;
    auVar48._0_8_ = auVar47._0_8_;
    auVar48._8_4_ = *(float *)(param_1 + 0x110);
    auVar49._4_12_ = auVar48._4_12_;
    auVar49._0_4_ = auVar47._0_4_ * auVar47._0_4_;
    iVar38 = 0;
    auVar50._0_8_ = auVar49._0_8_;
    auVar50._8_4_ = -auVar48._8_4_;
    auVar50._12_4_ = auVar48._12_4_;
    do {
      pfVar33 = (float *)(param_1 + 0x1fc + iVar38);
      pfVar35 = (float *)((int)auStack_278 + iVar38);
      iVar38 = iVar38 + 4;
      fVar57 = *pfVar35 + auVar50._8_4_ * *pfVar33;
      fVar45 = 0.0;
      if (0.0 < fVar57) {
        fVar45 = fVar57;
      }
      *pfVar35 = fVar45;
    } while (iVar38 != 0x104);
    if (param_10 != 0) {
      iVar36 = 0;
      iVar38 = param_9;
      do {
        iVar39 = 0;
        do {
          pfVar33 = (float *)((int)auStack_278 + iVar39);
          pfVar35 = (float *)(iVar38 + iVar39);
          iVar39 = iVar39 + 4;
          auVar50._8_4_ = auVar50._0_4_ * *pfVar33;
          *pfVar35 = auVar50._8_4_;
        } while (iVar39 != 0x104);
        iVar36 = iVar36 + 1;
        iVar38 = iVar38 + 0x104;
      } while (iVar36 != param_10);
    }
    if (param_12 != 0) {
      iVar36 = 0;
      iVar38 = param_11;
      do {
        iVar39 = 0;
        do {
          pfVar33 = (float *)((int)auStack_278 + iVar39);
          pfVar35 = (float *)(iVar38 + iVar39);
          iVar39 = iVar39 + 4;
          auVar50._8_4_ = auVar50._0_4_ * *pfVar33;
          *pfVar35 = auVar50._8_4_;
        } while (iVar39 != 0x104);
        iVar36 = iVar36 + 1;
        iVar38 = iVar38 + 0x104;
      } while (iVar36 != param_12);
    }
  }
  if ((*(char *)(param_1 + 0x124) != '\0') &&
     ((*(int **)(param_2 + 0x22c) == (int *)0x0 ||
      (iVar38 = (**(code **)(**(int **)(param_2 + 0x22c) + 8))(), iVar38 == 0)))) {
    thunk_OYpQsYEketTyAJYnVgWYSTzGBiuuCga_NtQYcTrTeaEUXvuyrMFKrpGnzFHmzhnlDPoLaVyaeCEjwGZTsusGEPo_zQClODbMcJhUv
              (param_1,1,param_2,param_3,param_8);
    if (param_10 != 0) {
      iVar36 = 0;
      iVar38 = param_9;
      do {
        iVar39 = 0;
        do {
          pfVar35 = (float *)(iVar38 + iVar39);
          pfVar33 = (float *)(param_1 + 0x404 + iVar39);
          iVar39 = iVar39 + 4;
          *pfVar35 = *pfVar33 + *pfVar35;
        } while (iVar39 != 0x104);
        iVar36 = iVar36 + 1;
        iVar38 = iVar38 + 0x104;
      } while (iVar36 != param_10);
    }
    if (param_12 != 0) {
      iVar36 = 0;
      iVar38 = param_11;
      do {
        iVar39 = 0;
        do {
          pfVar35 = (float *)(iVar38 + iVar39);
          pfVar33 = (float *)(param_1 + 0x404 + iVar39);
          iVar39 = iVar39 + 4;
          *pfVar35 = *pfVar33 + *pfVar35;
        } while (iVar39 != 0x104);
        iVar36 = iVar36 + 1;
        iVar38 = iVar38 + 0x104;
      } while (iVar36 != param_12);
    }
  }
LAB_71ad6a70:
  if (*(char *)(param_2 + 0xf4) != '\0') {
    thunk_ocXmSCCBAsdONcQeoHUndKmtIoFmmPBgWyDkhBUKEf_iegvYbBFsQPCDNfaViXYYkwekOfpR
              (param_2,auStack_170,0x41);
    if (param_10 != 0) {
      iVar38 = 0;
      do {
        iVar36 = 0;
        do {
          fVar45 = *(float *)(auStack_170 + iVar36);
          *(float *)(param_9 + iVar36) = fVar45 * *(float *)(param_9 + iVar36);
          pfVar33 = (float *)(param_11 + iVar36);
          iVar36 = iVar36 + 4;
          *pfVar33 = fVar45 * *pfVar33;
        } while (iVar36 != 0x104);
        iVar38 = iVar38 + 1;
        param_11 = param_11 + 0x104;
        param_9 = param_9 + 0x104;
      } while (iVar38 != param_10);
    }
  }
  return;
}


// =========================================================================
// Function: WZQ_abxaJaoTLKGhQpfDaytzEEAYPkoZprBNrBFFFCIMjhNWPxLtr_z_NIxPNIndiUMOzCNxg_zcgG
// Entry: 0x71ad6afc | Size: 280 bytes
// =========================================================================

void WZQ_abxaJaoTLKGhQpfDaytzEEAYPkoZprBNrBFFFCIMjhNWPxLtr_z_NIxPNIndiUMOzCNxg_zcgG
               (int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float afStack_128 [66];
  
  piVar1 = *(int **)(param_2 + 4);
  iVar7 = piVar1[1];
  FUN_71ba2da8(*piVar1 + piVar1[5],*piVar1);
  uVar10 = *(uint *)(param_1 + 0x1e4);
  piVar1 = (int *)(iVar7 + extraout_r1 * 0xc);
  puVar2 = (undefined1 *)*piVar1;
  puVar8 = (undefined1 *)0x0;
  if ((undefined1 *)piVar1[1] != puVar2) {
    puVar8 = puVar2;
  }
  pfVar9 = (float *)puVar8;
  if (1 < uVar10) {
    imp___aeabi_memclr8(afStack_128,0x104);
    uVar3 = 0;
    do {
      iVar7 = 0;
      do {
        pfVar9 = (float *)((int)afStack_128 + iVar7);
        pfVar5 = (float *)(puVar8 + iVar7);
        iVar7 = iVar7 + 4;
        *pfVar9 = *pfVar5 + *pfVar9;
      } while (iVar7 != 0x104);
      uVar3 = uVar3 + 1;
      puVar8 = puVar8 + 0x104;
      pfVar9 = afStack_128;
    } while (uVar3 != uVar10);
  }
  iVar7 = *(int *)(param_1 + 0x108);
  fVar11 = *(float *)(param_1 + 0x10c);
  iVar4 = 0;
  do {
    iVar6 = param_1 + iVar4;
    if (*(float *)((int)pfVar9 + iVar4) < *(float *)(iVar6 + 0x1fc)) {
      *(float *)(iVar6 + 0x1fc) = *(float *)((int)pfVar9 + iVar4);
      *(undefined4 *)(iVar6 + 0x300) = 0;
    }
    else if (*(int *)(iVar6 + 0x300) < iVar7) {
      *(int *)(iVar6 + 0x300) = *(int *)(iVar6 + 0x300) + 1;
    }
    else {
      fVar12 = *(float *)(iVar6 + 0x1fc) * 1.1;
      if (fVar12 < fVar11) {
        fVar12 = fVar11;
      }
      *(float *)(iVar6 + 0x1fc) = fVar12;
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x104);
  return;
}


// =========================================================================
// Function: OYpQsYEketTyAJYnVgWYSTzGBiuuCga_NtQYcTrTeaEUXvuyrMFKrpGnzFHmzhnlDPoLaVyaeCEjwGZTsusGEPo_zQClODbMcJhUv
// Entry: 0x71ad6c18 | Size: 408 bytes
// =========================================================================

void OYpQsYEketTyAJYnVgWYSTzGBiuuCga_NtQYcTrTeaEUXvuyrMFKrpGnzFHmzhnlDPoLaVyaeCEjwGZTsusGEPo_zQClODbMcJhUv
               (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int extraout_r1;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  float afStack_138 [66];
  
  piVar4 = (int *)(param_3 + 0x214);
  if (param_2 == 0) {
    piVar4 = (int *)(*(int *)(param_3 + 0x65c) + 8);
  }
  piVar5 = *(int **)(param_4 + 4);
  iVar8 = piVar5[1];
  FUN_71ba2da8(*piVar4 + piVar5[5] + *piVar5 + 1,*piVar5);
  uVar10 = *(uint *)(param_1 + 0x1e4);
  piVar4 = (int *)(iVar8 + extraout_r1 * 0xc);
  pfVar1 = (float *)*piVar4;
  pfVar9 = (float *)0x0;
  if ((float *)piVar4[1] != pfVar1) {
    pfVar9 = pfVar1;
  }
  pfVar1 = pfVar9;
  if (1 < uVar10) {
    pfVar1 = afStack_138;
    imp___aeabi_memclr8(pfVar1,0x104);
    uVar2 = 0;
    do {
      iVar8 = 0;
      do {
        pfVar6 = (float *)((int)pfVar1 + iVar8);
        pfVar7 = (float *)((int)pfVar9 + iVar8);
        iVar8 = iVar8 + 4;
        *pfVar6 = *pfVar7 + *pfVar6;
      } while (iVar8 != 0x104);
      uVar2 = uVar2 + 1;
      pfVar9 = pfVar9 + 0x41;
    } while (uVar2 != uVar10);
  }
  iVar8 = 100;
  if (param_5 != 0) {
    iVar8 = 0x68;
  }
  if (*(char *)(**(int **)(param_3 + 0x8dc) + 8) != '\0') {
    iVar8 = 100;
  }
  uVar11 = *(undefined4 *)(**(int **)(param_3 + 0x8dc) + iVar8);
  if (param_2 == 0) {
    thunk_FxNfTSfjdXhOvh_MVCwRwyKfMsUsXuodkoooTTturkQsZTXUMRzKfgBi_NKOqjSAcNCYOg
              (param_1 + 0x404,pfVar1,0x41,*(int *)(param_3 + 0x8e8) + 8,0x41,uVar11);
    return;
  }
  if (*(int **)(param_3 + 0x22c) == (int *)0x0) {
    iVar8 = 500;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_3 + 0x22c) + 8))();
    iVar8 = 500;
    if (iVar3 != 0) {
      iVar8 = 0x1ec;
    }
  }
  thunk_uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
            (param_1 + 0x404,pfVar1,0x41,*(float *)(param_1 + iVar8) * *(float *)(param_1 + iVar8),
             uVar11);
  return;
}


// =========================================================================
// Function: OUqhmXdmWCjaZWRKKIVzyFSlNMAakJQxozSuLByXhLySmXaPynnwwRCowULWmeoTvxFDXQDjZsbJoWzqBllcGYHuMfUPrRdK
// Entry: 0x71ad6db0 | Size: 92 bytes
// =========================================================================

void OUqhmXdmWCjaZWRKKIVzyFSlNMAakJQxozSuLByXhLySmXaPynnwwRCowULWmeoTvxFDXQDjZsbJoWzqBllcGYHuMfUPrRdK
               (int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar2 = 0;
    do {
      pfVar1 = (float *)(param_2 + iVar2);
      pfVar3 = (float *)(param_1 + 0x404 + iVar2);
      iVar2 = iVar2 + 4;
      *pfVar1 = *pfVar3 + *pfVar1;
    } while (iVar2 != 0x104);
    iVar4 = iVar4 + 1;
    param_2 = param_2 + 0x104;
  } while (iVar4 != param_3);
  return;
}


// =========================================================================
// Function: jUceLdANMJORAYjrUunURBBmbBceuSzapRgnmXvTDRqVEExoMegOPLDsRsKAv_ndGwmp
// Entry: 0x71ad6e0c | Size: 104 bytes
// =========================================================================

float jUceLdANMJORAYjrUunURBBmbBceuSzapRgnmXvTDRqVEExoMegOPLDsRsKAv_ndGwmp
                (int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_2 + 0x22c) == (int *)0x0) {
    iVar2 = 500;
    if (param_3 != 0) {
      iVar2 = 0x1f0;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x22c) + 8))();
    iVar3 = 0x1ec;
    iVar2 = 500;
    if (param_3 != 0) {
      iVar3 = 0x1e8;
      iVar2 = 0x1f0;
    }
    if (iVar1 != 0) {
      iVar2 = iVar3;
    }
  }
  return *(float *)(param_1 + iVar2) * *(float *)(param_1 + iVar2);
}


// =========================================================================
// Function: JRICtcsojNxxBUfeyMHGIjMRFSz
// Entry: 0x71ad7394 | Size: 28 bytes
// =========================================================================

undefined4 JRICtcsojNxxBUfeyMHGIjMRFSz(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x104);
  return param_1;
}


// =========================================================================
// Function: hTHfSsOUvobvPQbFCCRbLUOIvJggpbY
// Entry: 0x71ad73b0 | Size: 20 bytes
// =========================================================================

void hTHfSsOUvobvPQbFCCRbLUOIvJggpbY(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x104);
  return;
}


// =========================================================================
// Function: HzTCbQ_MlTYbf_sKaSYhtxHzrpp
// Entry: 0x71ad73c4 | Size: 4 bytes
// =========================================================================

void HzTCbQ_MlTYbf_sKaSYhtxHzrpp(void)

{
  return;
}


// =========================================================================
// Function: uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
// Entry: 0x71ad73c8 | Size: 60 bytes
// =========================================================================

void uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
               (float *param_1,float *param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  
  if (0.0 < param_5) {
    if (param_3 == 0) {
      return;
    }
    do {
      fVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *param_1 = (*param_1 + fVar1 * param_4) * param_5;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// =========================================================================
// Function: FxNfTSfjdXhOvh_MVCwRwyKfMsUsXuodkoooTTturkQsZTXUMRzKfgBi_NKOqjSAcNCYOg
// Entry: 0x71ad7404 | Size: 60 bytes
// =========================================================================

void FxNfTSfjdXhOvh_MVCwRwyKfMsUsXuodkoooTTturkQsZTXUMRzKfgBi_NKOqjSAcNCYOg
               (float *param_1,float *param_2,int param_3,float *param_4,undefined4 param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < param_6) {
    if (param_3 == 0) {
      return;
    }
    do {
      fVar1 = *param_4;
      param_4 = param_4 + 1;
      param_3 = param_3 + -1;
      fVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = (*param_1 + fVar2 * fVar1) * param_6;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// =========================================================================
// Function: ocXmSCCBAsdONcQeoHUndKmtIoFmmPBgWyDkhBUKEf_iegvYbBFsQPCDNfaViXYYkwekOfpR
// Entry: 0x71ad7490 | Size: 232 bytes
// =========================================================================

void ocXmSCCBAsdONcQeoHUndKmtIoFmmPBgWyDkhBUKEf_iegvYbBFsQPCDNfaViXYYkwekOfpR
               (int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    return;
  }
  iVar3 = param_1 + 0x794;
  uVar2 = 0x176;
  if (*(char *)(param_1 + 0xac) == '\0') {
    uVar2 = 199;
  }
  if (uVar2 < *(uint *)(param_1 + 0x62c)) {
    iVar1 = 0;
    do {
      while (*(char *)(iVar3 + iVar1 + 0x104) != '\0') {
        uVar4 = 0;
        if (*(int *)(iVar3 + iVar1 * 4) != 0) {
          uVar4 = 0x3f800000;
        }
        iVar1 = iVar1 + 1;
        *param_2 = uVar4;
        param_2 = param_2 + 1;
        if (param_3 == iVar1) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
      *param_2 = 0x3f800000;
      param_2 = param_2 + 1;
    } while (param_3 != iVar1);
  }
  else {
    iVar1 = 0;
    do {
      if ((*(char *)(iVar3 + iVar1 + 0x104) == '\0') || (*(int *)(iVar3 + iVar1 * 4) != 0)) {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0;
        if (*(char *)(param_1 + 0x685) == '\0') {
          uVar4 = 0x3f800000;
        }
      }
      iVar1 = iVar1 + 1;
      *param_2 = uVar4;
      param_2 = param_2 + 1;
    } while (param_3 != iVar1);
  }
  return;
}


// =========================================================================
// Function: FNhixuUwQKkgSvHGMGKEFAdcHBtAoeJtlCXkPNYcsAMeEjSqpfc
// Entry: 0x71ad757c | Size: 900 bytes
// =========================================================================

undefined4 *
FNhixuUwQKkgSvHGMGKEFAdcHBtAoeJtlCXkPNYcsAMeEjSqpfc
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  uVar3 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_712048a0);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_712048a0 = DAT_712048a0 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar3);
  puVar4 = param_1 + 1;
  *param_1 = uVar3;
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(puVar4,param_2);
  param_1[0x7a] = param_3;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_Aec3DeactivateInitialStat_70062f65,0x30);
  uVar10 = uStack_28;
  bVar2 = abStack_30[0];
  uVar7 = uStack_2c;
  uVar9 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar9 = (uint)abStack_30 | 1;
    uVar7 = (uint)(abStack_30[0] >> 1);
  }
  uVar8 = uVar9 + uVar7;
  uVar5 = uVar9;
  while (((uVar11 = uVar8, 6 < (int)uVar7 && (uVar5 = imp_memchr(uVar5,0x45,uVar7 - 6), uVar5 != 0))
         && (iVar6 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar11 = uVar5, iVar6 != 0))) {
    uVar5 = uVar5 + 1;
    uVar7 = uVar8 - uVar5;
  }
  if ((bVar2 & 1) != 0) {
    thunk_qNQrlu(uVar10);
  }
  *(bool *)(param_1 + 0x7b) = uVar11 != uVar8 && uVar11 == uVar9;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_Aec3AecStateFullResetKill_7006e22c,0x26);
  uVar10 = uStack_28;
  bVar2 = abStack_30[0];
  uVar7 = uStack_2c;
  uVar9 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar9 = (uint)abStack_30 | 1;
    uVar7 = (uint)(abStack_30[0] >> 1);
  }
  uVar8 = uVar9 + uVar7;
  uVar5 = uVar9;
  while (((uVar11 = uVar8, 6 < (int)uVar7 && (uVar5 = imp_memchr(uVar5,0x45,uVar7 - 6), uVar5 != 0))
         && (iVar6 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar11 = uVar5, iVar6 != 0))) {
    uVar5 = uVar5 + 1;
    uVar7 = uVar8 - uVar5;
  }
  if ((bVar2 & 1) != 0) {
    thunk_qNQrlu(uVar10);
  }
  *(bool *)((int)param_1 + 0x1ed) = uVar11 == uVar8 || uVar11 != uVar9;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,s_WebRTC_Aec3AecStateSubtractorAna_700650f5,0x34);
  uVar7 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uVar7 = (uint)abStack_30 | 1;
    uStack_2c = (uint)(abStack_30[0] >> 1);
  }
  uVar10 = uVar7 + uStack_2c;
  uVar9 = uVar7;
  while (((uVar5 = uVar10, 6 < (int)uStack_2c &&
          (uVar9 = imp_memchr(uVar9,0x45,uStack_2c - 6), uVar9 != 0)) &&
         (iVar6 = imp_memcmp(uVar9,s_Enabled_7006820b,7), uVar5 = uVar9, iVar6 != 0))) {
    uVar9 = uVar9 + 1;
    uStack_2c = uVar10 - uVar9;
  }
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  *(bool *)((int)param_1 + 0x1ee) = uVar5 == uVar10 || uVar5 != uVar7;
  thunk_qHXCwMtSarPYdPTUroNCurFvfMUXAZdDcbUxxImUTKNDdYzQCwbToNYyggqgYnEi(param_1 + 0x7c,puVar4);
  thunk_GpetNtZWinxVRjYEWfQTKxYBfUubWKwAiBvCpKzsmRoUtzIeFhGJmDyKALmQTcG_
            (param_1 + 0x80,puVar4,param_1[0x7a]);
  thunk_ImeRIIBNnIddoQvxbwiJAXtwLCKhiQJRHIvhYjydwpSnnKSVTMnkSMkUKszFasf(param_1 + 0x8b,puVar4);
  thunk_BWKYEdnezvgaHAYszXULDIVxxGSAgWyUQpELiCRXEhcfVeoKmNIFSkuMcHhVBAUvQJRmaaRwkLZxo
            (param_1 + 0x8c,puVar4,param_1[0x7a]);
  *(undefined1 *)(param_1 + 0x93) = 0;
  thunk_N_JpdVeoskGEXuPdXtVBijuvAAks(param_1 + 0x94,500);
  thunk_bvwhjAfldhWetLksMlBJBacHIGkDLQEMuytxvDareJMybYdIMcWtjlYCXf
            (param_1 + 0x118,500,puVar4,param_1[0x7a],param_1 + 0x94);
  *(undefined1 *)(param_1 + 0x18d) = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  thunk_DEncUWwUvZjPg_UYrnhwuSIhebzTYUMUGKvjtAkjRWkLIPHLCwIBeKjxbL
            (param_1 + 0x18e,puVar4,param_1[0x7a]);
  thunk_gRwZRnKZxLskZykjl_TlnLRByrYoZV(param_1 + 0x19e,*(undefined1 *)((int)param_1 + 0xf5));
  thunk_tassuqYVoIYaiOVrkCKhoZyyLMwTVDFkyGYMmvrZvKUSMjffEmTyvnQeDbNJzItv
            (param_1 + 0x237,puVar4,param_1[0x7a]);
  thunk_JRICtcsojNxxBUfeyMHGIjMRFSz(param_1 + 0x23d);
  thunk_cStjwuWLUjjLxPekJgIFByPbjuFIDSxEmSKBxmDV(param_1 + 0x27e,param_1[0x7a]);
  return param_1;
}


// =========================================================================
// Function: DMOWuzjKzHTbWw_humWINin
// Entry: 0x71ad7a04 | Size: 196 bytes
// =========================================================================

int * DMOWuzjKzHTbWw_humWINin(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x27e] != 0) {
    thunk_qNQrlu();
  }
  thunk_HzTCbQ_MlTYbf_sKaSYhtxHzrpp(param_1 + 0x23d);
  thunk_OXcrwpxiEuirDGazUCDGjicBiKQRzoT_pWlD(param_1 + 0x237);
  thunk_rkehvQvmzdQMygyCnSmrgMoqTaJxUr(param_1 + 0x19e);
  thunk_JrLkJVBRJeoVXnubdeRpAzbkKFAJQB(param_1 + 0x18e);
  thunk_FVrnuECqHZfPSPTVdyTtSyNDiiFAU(param_1 + 0x118);
  thunk_mMiPwzDYKrRtboTgtOZULreCb_qy(param_1 + 0x94);
  if (param_1[0x90] != 0) {
    thunk_qNQrlu();
  }
  piVar1 = (int *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  if (param_1[0x82] != 0) {
    param_1[0x83] = param_1[0x82];
    thunk_qNQrlu();
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
// Function: wIhreSuIvtVwSwjHuUuTxDmHFwwpPUogTX_UXLKFRzWKCdCNdcWQNIgxetEqzGojlGXvk
// Entry: 0x71ad7ac8 | Size: 268 bytes
// =========================================================================

void wIhreSuIvtVwSwjHuUuTxDmHFwwpPUogTX_UXLKFRzWKCdCNdcWQNIgxetEqzGojlGXvk
               (int param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = *(char *)(param_1 + 0x1ed) != '\0';
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(param_2 + 4);
  }
  if (bVar5 && iVar3 != 0) {
    thunk_NLYlivvyYybSaTxR_HHcPFpCHIqiewIByd(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(undefined1 *)(param_1 + 0x634) = 0;
    if (*(char *)(param_1 + 0x1ec) == '\0') {
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined1 *)(param_1 + 0x1f9) = 1;
    }
    if (*(int **)(param_1 + 0x22c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x22c) + 0xc))();
    }
    thunk_lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH(param_1 + 0x460,1);
    thunk_rufDSXvhplEforOuULgwVAWoHmlgUSAJ(param_1 + 0x250);
    uVar4 = *(uint *)(param_1 + 0x244);
    if (uVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x240);
      uVar1 = uVar4 >> 5;
      if (uVar1 != 0) {
        imp___aeabi_memclr4(iVar3,uVar1 << 2);
      }
      if ((uVar4 & 0x1f) != 0) {
        *(uint *)(iVar3 + uVar1 * 4) =
             *(uint *)(iVar3 + uVar1 * 4) & ~(0xffffffffU >> (0x20 - (uVar4 & 0x1f) & 0xff));
      }
    }
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined1 *)(param_1 + 0x231) = 0;
    cVar2 = *(char *)(param_1 + 0x1ee);
  }
  else {
    if (*param_2 != '\0') {
      thunk_lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH(param_1 + 0x460,0);
    }
    cVar2 = *(char *)(param_1 + 0x1ee);
  }
  if (cVar2 != '\0') {
    thunk_SQDjCSD_ygPuqVWZLrrFCVlaEuCsihFMCKuQOosYGgYYyjQelDcG_MDzoPwE(param_1 + 0x9f8);
    return;
  }
  return;
}


// =========================================================================
// Function: rkiVhZdkxnJEgXkNjHxfK_GQfKSHaSrTrvgMsbVIMrwK__sYHiqAVBqfHlfdPXfJXYYyaHnDqbaFpWfuwqOZJEbnurzREzgjaMEVFmzOhlZNlu_atgDVnIoURKtXkiNtfWaGfFn_VlebxRVlYTG_WwXneak_XFakrBSQtBOoDvXzgPAxKmzQYHLkTVyUMJFzwkQLmi_FUQhOLeepJDyJIsaqaZdMIMxlvcUcssHvba_uuEqumc_qkzKwzJhEjemVOAjzVn
// Entry: 0x71ad7bd4 | Size: 2408 bytes
// =========================================================================

void rkiVhZdkxnJEgXkNjHxfK_GQfKSHaSrTrvgMsbVIMrwK__sYHiqAVBqfHlfdPXfJXYYyaHnDqbaFpWfuwqOZJEbnurzREzgjaMEVFmzOhlZNlu_atgDVnIoURKtXkiNtfWaGfFn_VlebxRVlYTG_WwXneak_XFakrBSQtBOoDvXzgPAxKmzQYHLkTVyUMJFzwkQLmi_FUQhOLeepJDyJIsaqaZdMIMxlvcUcssHvba_uuEqumc_qkzKwzJhEjemVOAjzVn
               (undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
               undefined4 param_5,int param_6,int *param_7,undefined4 param_8,int param_9,
               undefined4 param_10,int param_11,int param_12,int param_13)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  byte bVar10;
  undefined8 *puVar11;
  int *piVar12;
  int extraout_r1;
  int iVar13;
  int extraout_r1_00;
  uint uVar14;
  float *pfVar15;
  int extraout_r1_01;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int *piVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  undefined4 *puVar26;
  float *pfVar27;
  int *unaff_r7;
  uint uVar28;
  int iVar29;
  uint uVar30;
  bool bVar31;
  uint in_fpscr;
  float fVar32;
  float fVar33;
  float afStack_24c [65];
  float fStack_148;
  undefined1 uStack_144;
  undefined1 uStack_143;
  byte bStack_142;
  byte bStack_141;
  float afStack_140 [66];
  
  pfVar27 = (float *)(param_1 + 0x27e);
  if (param_13 == 0) {
    param_12 = 0;
  }
  thunk_T_ByWfdVGQiECDPyoypYTLPIhBgFBwGJEXBelCQ_CPCtOUrELXIzCWVZCqESMrTkATbDZUbEYiuCUrldpGkftNpl_mUUwlLWSSnoz
            ();
  if (param_6 == 0) {
    param_5 = 0;
  }
  thunk_dOGAOLNEiOOtASOOatZzZKgiarYSwDbTZUFsIlPZgcNGoOquNCsinhD_GpSythhvShcoglbfpkvbWgXKBYQpUUKlioaaAqSkAHB_rdqVjzFwnf_VnHPhlFIZomjw
            (param_1 + 0x18e,param_5,param_6,param_7,&uStack_144,&fStack_148);
  if (*(char *)((int)param_1 + 0xae) == '\0') {
    iVar17 = param_1[0x85];
  }
  else {
    if ((*(char *)(param_2 + 4) != '\0') &&
       ((*(char *)(param_1 + 0x8a) == '\0' ||
        (unaff_r7 = (int *)param_1[0x87], unaff_r7 != (int *)param_2[1])))) {
      uVar7 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      bVar2 = *(byte *)(param_2 + 4);
      unaff_r7 = (int *)(uint)bVar2;
      param_1[0x86] = *param_2;
      param_1[0x87] = uVar7;
      param_1[0x88] = uVar4;
      param_1[0x89] = uVar5;
      *(undefined1 *)(param_1 + 0x81) = 1;
      *(byte *)(param_1 + 0x8a) = bVar2;
    }
    if (((uint)param_1[0x18b] >> 2 < 0x7d) && (*(char *)(param_1 + 0x8a) != '\0')) {
      puVar19 = (undefined8 *)param_1[0x82];
      piVar8 = (int *)(param_1[0x83] - (int)puVar19 >> 2);
      if (0 < (int)piVar8) {
        uVar7 = param_1[0x80];
        if ((int *)0x3 < piVar8) {
          unaff_r7 = (int *)((uint)piVar8 & 0x7ffffffc);
          puVar11 = (undefined8 *)((int)puVar19 + (int)unaff_r7 * 4);
          piVar12 = unaff_r7;
          do {
            *puVar19 = CONCAT44(uVar7,uVar7);
            puVar19[1] = CONCAT44(uVar7,uVar7);
            puVar19 = puVar19 + 2;
            piVar12 = piVar12 + -1;
          } while (piVar12 != (int *)0x0);
          bVar31 = piVar8 == unaff_r7;
          puVar19 = puVar11;
          piVar8 = (int *)((uint)piVar8 & 3);
          if (bVar31) goto LAB_71ad7d68;
        }
        *(undefined4 *)puVar19 = uVar7;
        if (((int *)0x1 < piVar8) &&
           (*(undefined4 *)((int)puVar19 + 4) = uVar7, (int)piVar8 - 3U < 0xfffffffe)) {
          *(undefined4 *)(puVar19 + 1) = uVar7;
        }
      }
    }
    else if (param_1[0x19b] != param_1[0x19a]) {
      imp___aeabi_memmove4(param_1[0x82]);
    }
LAB_71ad7d68:
    piVar8 = (int *)param_1[0x82];
    piVar12 = (int *)param_1[0x83];
    if (piVar8 != piVar12) {
      unaff_r7 = piVar8 + 1;
    }
    if (piVar8 != piVar12 && unaff_r7 != piVar12) {
      iVar17 = *piVar8;
      do {
        piVar20 = unaff_r7 + 1;
        if (*unaff_r7 < iVar17) {
          iVar17 = *unaff_r7;
          piVar8 = unaff_r7;
        }
        unaff_r7 = piVar20;
      } while (piVar20 != piVar12);
    }
    iVar17 = *piVar8;
    param_1[0x85] = iVar17;
  }
  piVar8 = (int *)*param_7;
  iVar23 = piVar8[1];
  FUN_71ba2da8((piVar8[5] - iVar17) + *piVar8,*piVar8);
  iVar29 = 0;
  uVar28 = 0;
  iVar23 = iVar23 + extraout_r1 * 0x14;
  iVar9 = *(int *)(iVar23 + 4);
  if (0 < iVar9) {
    iVar13 = 0;
    uVar28 = 1;
    iVar18 = *(int *)(iVar23 + 8);
    fVar32 = (float)param_1[0x3e] * (float)param_1[0x3e] * 64.0;
    do {
      iVar21 = 0;
      fVar33 = 0.0;
      do {
        pfVar24 = (float *)(iVar18 + iVar21);
        iVar21 = iVar21 + 4;
        fVar33 = fVar33 + *pfVar24 * *pfVar24;
      } while (iVar21 != 0x100);
      uVar30 = in_fpscr & 0xfffffff | (uint)(fVar33 < fVar32) << 0x1f |
               (uint)(fVar33 == fVar32) << 0x1e;
      in_fpscr = uVar30 | (uint)(NAN(fVar33) || NAN(fVar32)) << 0x1c;
      bVar2 = (byte)(uVar30 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) break;
      iVar13 = iVar13 + 1;
      iVar18 = iVar18 + 0x100;
      uVar28 = (uint)(iVar13 < iVar9);
    } while (iVar13 != iVar9);
  }
  iVar9 = param_1[0x18b];
  if (uVar28 != 0) {
    iVar9 = iVar9 + (*(byte *)(param_1 + 0x18d) ^ 1);
  }
  param_1[0x18b] = iVar9;
  piVar8 = (int *)param_7[1];
  param_1[0x18c] = param_1[0x18c] + uVar28;
  iVar9 = *piVar8;
  piVar12 = (int *)piVar8[1];
  FUN_71ba2da8(piVar8[5] + iVar17 + iVar9,iVar9);
  puVar26 = param_1 + 0x23d;
  uVar7 = *(undefined4 *)(*(int *)param_1[0x237] + 100);
  if (extraout_r1_00 < iVar9 + -1) {
    iVar29 = extraout_r1_00 + 1;
  }
  iVar17 = piVar12[iVar29 * 3];
  uVar30 = (piVar12[1] - *piVar12 >> 2) * -0x3f03f03f;
  if (uVar30 < 2) {
    thunk_uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
              (puVar26,iVar17,0x41,0x3f800000,uVar7);
    pfVar24 = *(float **)(piVar8[1] + extraout_r1_00 * 0xc);
  }
  else {
    pfVar24 = afStack_140;
    iVar29 = (piVar12 + iVar29 * 3)[1];
    imp___aeabi_memclr8(pfVar24,0x104);
    uVar14 = 0;
    iVar9 = 0;
    if (iVar29 != iVar17) {
      iVar9 = iVar17;
    }
    do {
      iVar17 = 0;
      do {
        pfVar22 = (float *)((int)pfVar24 + iVar17);
        pfVar25 = (float *)(iVar9 + iVar17);
        iVar17 = iVar17 + 4;
        *pfVar22 = *pfVar25 + *pfVar22;
      } while (iVar17 != 0x104);
      uVar14 = uVar14 + 1;
      iVar9 = iVar9 + 0x104;
    } while (uVar14 != uVar30);
    iVar17 = 0;
    fVar32 = (float)VectorUnsignedToFloat(uVar30,(byte)(in_fpscr >> 0x16) & 3);
    do {
      pfVar22 = (float *)((int)pfVar24 + iVar17);
      iVar17 = iVar17 + 4;
      *pfVar22 = (1.0 / fVar32) * *pfVar22;
    } while (iVar17 != 0x104);
    thunk_uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
              (puVar26,pfVar24,0x41,0x3f800000,uVar7);
    piVar8 = (int *)(piVar8[1] + extraout_r1_00 * 0xc);
    iVar9 = *piVar8;
    iVar29 = piVar8[1];
    imp___aeabi_memclr8(pfVar24,0x104);
    uVar14 = 0;
    iVar17 = 0;
    if (iVar29 != iVar9) {
      iVar17 = iVar9;
    }
    do {
      iVar9 = 0;
      do {
        pfVar22 = (float *)((int)pfVar24 + iVar9);
        pfVar25 = (float *)(iVar17 + iVar9);
        iVar9 = iVar9 + 4;
        *pfVar22 = *pfVar25 + *pfVar22;
      } while (iVar9 != 0x104);
      uVar14 = uVar14 + 1;
      iVar17 = iVar17 + 0x104;
    } while (uVar14 != uVar30);
    iVar17 = 0;
    do {
      pfVar22 = (float *)((int)pfVar24 + iVar17);
      iVar17 = iVar17 + 4;
      *pfVar22 = (1.0 / fVar32) * *pfVar22;
    } while (iVar17 != 0x104);
  }
  iVar17 = 0;
  do {
    pfVar22 = (float *)((int)puVar26 + iVar17);
    pfVar25 = (float *)((int)pfVar24 + iVar17);
    pfVar15 = (float *)((int)afStack_24c + iVar17);
    iVar17 = iVar17 + 4;
    *pfVar15 = *pfVar25 + *pfVar22;
  } while (iVar17 != 0x104);
  if (*(char *)(param_1 + 0x3d) != '\0') {
    thunk_gSKYbTMCgxfkBXBnnw_TVwrfJUZMPonwyWiOoEGmNUiwKLqEuSSPbtVzdpbBRkfNuEXDblNVGSiCkoYOU_PM
              (param_1 + 0x19e,param_7,puVar26,0x41,param_1[0x85],*(undefined1 *)(param_1 + 0x81));
  }
  if (*(char *)(param_1 + 0x7e) != '\0') {
    thunk_lAUIyclpuvIpITZbjqxfaxVyCRYXfujFH(param_1 + 0x118,0);
  }
  if (param_9 == 0) {
    param_8 = 0;
  }
  if (param_11 == 0) {
    param_10 = 0;
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  thunk_uTqbB_xGfxQpLeSLjgLLtvJPAxYAjyBxzcOogSCSUqYselHblzKvogqOUDieATgIpYVcOWJRhR_zcqcoytjs_BppYilGxEgHCWiQseBsgZfesNJScxNmZanDVBjgfwtMqLZdEFoMHVvKNvMuINaheoiexrNWbfqwMWmaFn_yvPSJASZtJZusmxLgvNfogayYe
            (param_1 + 0x118,param_7,param_3,param_4,afStack_24c,param_10,param_11,param_8,param_9,
             pfVar27);
  piVar8 = (int *)param_7[1];
  iVar17 = piVar8[1];
  FUN_71ba2da8(piVar8[5] + param_1[0x85] + *piVar8,*piVar8);
  piVar8 = (int *)(iVar17 + extraout_r1_01 * 0xc);
  iVar9 = *piVar8;
  iVar29 = piVar8[1];
  iVar17 = 0;
  if (iVar29 != iVar9) {
    iVar17 = iVar9;
  }
  thunk_FeAkriuiQLCdvevgxlIDBdHmGcruFKQyMUDeMwaiWIpxeARBoeyLnHWgboA_daPoPmXeaqccmQiksujFnrpoAJohPzIliUTiOYjafANIsqjaPXNyBHWnTXneiA
            (param_1 + 0x94,pfVar27,iVar17,(iVar29 - iVar9 >> 2) * -0x3f03f03f,param_10,param_11);
  cVar3 = *(char *)(param_1 + 0x18d);
  if (*(char *)(param_1 + 0x36) != '\0') {
    uVar30 = 0;
    *(undefined1 *)(param_1 + 0x93) = 0;
    if (cVar3 != '\0') {
      if (*(char *)((int)param_1 + 0x231) == '\0' || *(char *)((int)param_1 + 0xae) == '\0') {
        fVar32 = 0.0;
        if (0 < (int)*(uint *)(iVar23 + 4)) {
          iVar17 = *(int *)(iVar23 + 8);
          do {
            iVar9 = 0;
            do {
              pfVar27 = (float *)(iVar17 + iVar9);
              iVar9 = iVar9 + 4;
              in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar32 < ABS(*pfVar27)) << 0x1f;
              if (SUB41(in_fpscr >> 0x1f,0)) {
                fVar32 = ABS(*pfVar27);
              }
            } while (iVar9 != 0x100);
            uVar30 = uVar30 + 1;
            iVar17 = iVar17 + 0x100;
          } while (uVar30 != *(uint *)(iVar23 + 4));
        }
        uVar16 = 0;
        fVar32 = fStack_148 * fVar32 * 10.0;
        uVar30 = in_fpscr & 0xfffffff | (uint)(fVar32 < 32000.0) << 0x1f |
                 (uint)(fVar32 == 32000.0) << 0x1e;
        in_fpscr = uVar30 | (uint)NAN(fVar32) << 0x1c;
        bVar2 = (byte)(uVar30 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          uVar16 = 1;
        }
      }
      else {
        if (param_13 == 0) goto LAB_71ad8234;
        pfVar24 = (float *)(param_12 + 0x828);
        do {
          if (uVar30 == 0) {
            fVar32 = pfVar24[-1];
            uVar30 = 1;
            uVar14 = in_fpscr & 0xfffffff;
            uVar1 = uVar14 | (uint)(fVar32 < 20000.0) << 0x1f | (uint)(fVar32 == 20000.0) << 0x1e;
            in_fpscr = uVar1 | (uint)NAN(fVar32) << 0x1c;
            bVar2 = (byte)(uVar1 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar32 = *pfVar24;
              uVar30 = uVar14 | (uint)(fVar32 < 20000.0) << 0x1f | (uint)(fVar32 == 20000.0) << 0x1e
              ;
              in_fpscr = uVar30 | (uint)NAN(fVar32) << 0x1c;
              bVar2 = (byte)(uVar30 >> 0x18);
              uVar30 = (uint)(!(bool)(bVar2 >> 6 & 1) &&
                             bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1));
            }
          }
          else {
            uVar30 = 1;
          }
          uVar16 = (undefined1)uVar30;
          pfVar24 = pfVar24 + 0x20b;
          param_13 = param_13 + -1;
        } while (param_13 != 0);
      }
      *(undefined1 *)(param_1 + 0x93) = uVar16;
    }
  }
LAB_71ad8234:
  bVar2 = *(byte *)((int)param_1 + 0x1f9);
  uVar30 = param_1[0x7f] + (uVar28 & cVar3 == '\0');
  param_1[0x7f] = uVar30;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    bVar31 = false;
    fVar32 = (float)VectorUnsignedToFloat(uVar30,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar32 < (float)param_1[0x7d] * 250.0) {
      bVar31 = true;
    }
  }
  else {
    bVar31 = uVar30 < 0x4e2;
  }
  piVar8 = (int *)param_1[0x8b];
  bVar6 = 1;
  *(bool *)((int)param_1 + 0x1f9) = bVar31;
  *(byte *)(param_1 + 0x7e) = bVar2 & (bVar31 ^ 1U);
  if (piVar8 != (int *)0x0) {
    pfVar27 = (float *)(uint)bStack_142;
    (**(code **)(*piVar8 + 0x10))
              (piVar8,param_1[0x85],uStack_144,bStack_141,pfVar27,uStack_143,uVar28,cVar3 != '\0');
    if ((int *)param_1[0x8b] != (int *)0x0) {
      bVar6 = (**(code **)(*(int *)param_1[0x8b] + 8))();
      bVar6 = bVar6 ^ 1;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x8f);
  uVar28 = uVar28 & (*(byte *)(param_1 + 0x18d) ^ 1);
  *(byte *)(param_1 + 0x8f) = bVar2 | bStack_141;
  uVar30 = param_1[0x8d] + uVar28;
  uVar28 = param_1[0x8e] + uVar28;
  bVar10 = 0;
  param_1[0x8d] = uVar30;
  param_1[0x8e] = uVar28;
  if ((100 < uVar28 && 0x32 < uVar30) &&
     (bVar10 = 0, *(char *)(param_2 + 4) != '\0' || (bVar2 | bStack_141) != 0)) {
    bVar10 = 1;
  }
  *(byte *)((int)param_1 + 0x231) = bVar6 & bVar10;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    pfVar27 = (float *)param_1[0x91];
  }
  if (*(char *)(param_1 + 0x8c) != '\0' && pfVar27 != (float *)0x0) {
    iVar17 = param_1[0x90];
    uVar28 = (uint)pfVar27 >> 5;
    if ((bVar6 & bVar10) == 0) {
      if (&DAT_0000001f < pfVar27) {
        imp___aeabi_memclr4(iVar17,uVar28 << 2);
      }
      if (((uint)pfVar27 & 0x1f) == 0) goto LAB_71ad8378;
      uVar30 = *(uint *)(iVar17 + uVar28 * 4) &
               ~(0xffffffffU >> (0x20 - ((uint)pfVar27 & 0x1f) & 0xff));
    }
    else {
      if (&DAT_0000001f < pfVar27) {
        imp___aeabi_memset4(iVar17,uVar28 << 2,0xff);
      }
      if (((uint)pfVar27 & 0x1f) == 0) goto LAB_71ad8378;
      uVar30 = *(uint *)(iVar17 + uVar28 * 4) |
               0xffffffffU >> (0x20 - ((uint)pfVar27 & 0x1f) & 0xff);
    }
    *(uint *)(iVar17 + uVar28 * 4) = uVar30;
  }
LAB_71ad8378:
  if (*(char *)(param_1 + 0x3d) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk__YDsBktcqIzqUMwESXAfVLyOEHcLRoqmlxfFZqhQ_iNfCDrENSfIiQV(param_1 + 0x1a2);
  }
  iVar9 = param_1[0x82];
  iVar23 = param_1[0x191];
  iVar29 = param_1[0x124];
  iVar17 = 0;
  if (param_1[0x83] != iVar9) {
    iVar17 = iVar9;
  }
  iVar13 = 0;
  if (param_1[0x125] != iVar29) {
    iVar13 = iVar29;
  }
  iVar18 = 0;
  if (param_1[0x192] != iVar23) {
    iVar18 = iVar23;
  }
  thunk_VoeHudRPmGpQAdyifJgQqlFlvDZMCmFkb_PExTuFJtQDGmikpEjVVmoynhIBkzJPMBEUQxcEdcNlTfgRIcqSrzEYVxmM_nsjSRZtExHUFsJmnuVTurkHz_slQwhBSWoLwli_FWXjNQqZhsuFktKdozdMyXAUXUoLaBFJoPUGuKKCUAzKPzLzcftxblf_ClVGqzzJqVXJyDYSPGQhjlTwDrYrWTUxSdCUxpf
            (param_1 + 0x237,iVar18,(param_1[0x192] - iVar23 >> 2) * -0x55555555,param_3,param_4,
             iVar13,param_1[0x125] - iVar29 >> 3,iVar17,param_1[0x83] - iVar9 >> 2,param_1 + 0x90,
             uVar7);
  thunk_OXkVpCMscgCHWjLLquekHdKZiyEVOuhEmZ_HzpoWkEwluxRxUPWmggPWpptIpHOHuNuVqPoxFzmmGWBANaTAMGPhMdFlFARinsoJSxHd
            (param_1 + 0x118,param_1);
  thunk_MErBEtbJNrqyguzWgJutnXZnCDjazIhNTMqQykQXdPataXkQxliezYOEoFo
            (*(undefined4 *)param_1[0x237],*param_1);
  if ((int *)param_1[0x8b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x8b] + 8))();
  }
  return;
}


// =========================================================================
// Function: lQaBLJiagVRGIXZkgjivkpmCgMbJrYWEDtZDCpYuCKfLOXVdIVQZIHowxjCbvfmytQhhgNprpUOIwGBFJWuutsVLfGnoaZFRWglLrMswCAonCCxj
// Entry: 0x71ad8554 | Size: 324 bytes
// =========================================================================

void lQaBLJiagVRGIXZkgjivkpmCgMbJrYWEDtZDCpYuCKfLOXVdIVQZIHowxjCbvfmytQhhgNprpUOIwGBFJWuutsVLfGnoaZFRWglLrMswCAonCCxj
               (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *extraout_r3;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined8 *puVar11;
  
  if ((*(char *)(param_4 + 4) != '\0') &&
     ((*(char *)(param_1 + 10) == '\0' || (param_1[7] != param_4[1])))) {
    uVar4 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    uVar1 = *(undefined1 *)(param_4 + 4);
    param_1[6] = *param_4;
    param_1[7] = uVar4;
    param_1[8] = uVar2;
    param_1[9] = uVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)(param_1 + 10) = uVar1;
  }
  piVar7 = (int *)(param_5 >> 2);
  if ((piVar7 < (int *)0x7d) && (piVar7 = (int *)0x0, *(char *)(param_1 + 10) != '\0')) {
    puVar8 = (undefined8 *)param_1[2];
    piVar7 = (int *)(param_1[3] - (int)puVar8 >> 2);
    if (0 < (int)piVar7) {
      uVar4 = *param_1;
      piVar6 = piVar7;
      if ((int *)0x3 < piVar7) {
        piVar10 = (int *)((uint)piVar7 & 0x7ffffffc);
        puVar11 = (undefined8 *)((int)puVar8 + (int)piVar10 * 4);
        piVar6 = piVar10;
        do {
          *puVar8 = CONCAT44(uVar4,uVar4);
          puVar8[1] = CONCAT44(uVar4,uVar4);
          puVar8 = puVar8 + 2;
          piVar6 = piVar6 + -1;
        } while (piVar6 != (int *)0x0);
        piVar6 = (int *)((uint)piVar7 & 3);
        puVar8 = puVar11;
        if (piVar7 == piVar10) goto LAB_71ad8650;
      }
      *(undefined4 *)puVar8 = uVar4;
      if (((int *)0x1 < piVar6) &&
         (*(undefined4 *)((int)puVar8 + 4) = uVar4, (int)piVar6 - 3U < 0xfffffffe)) {
        *(undefined4 *)(puVar8 + 1) = uVar4;
      }
    }
  }
  else if (param_3 != 0) {
    imp___aeabi_memmove4(param_1[2],param_2,param_3 << 2);
    piVar7 = extraout_r3;
  }
LAB_71ad8650:
  piVar6 = (int *)param_1[2];
  piVar10 = (int *)param_1[3];
  if (piVar6 != piVar10) {
    piVar7 = piVar6 + 1;
  }
  if (piVar6 != piVar10 && piVar7 != piVar10) {
    iVar5 = *piVar6;
    do {
      piVar9 = piVar7 + 1;
      if (*piVar7 < iVar5) {
        iVar5 = *piVar7;
        piVar6 = piVar7;
      }
      piVar7 = piVar9;
    } while (piVar9 != piVar10);
  }
  param_1[5] = *piVar6;
  return;
}


// =========================================================================
// Function: xhTNJeqcOgaGZUCZYpxqWLehXXwkdZ_auYtlYJHioPYjfLSPzvuoCxDoZmmBkktDDhsCjTY_ZGcHzZHPxIZEhXEpMFoXnzkiMjsTOFOCaP__aJi
// Entry: 0x71ad8698 | Size: 268 bytes
// =========================================================================

void xhTNJeqcOgaGZUCZYpxqWLehXXwkdZ_auYtlYJHioPYjfLSPzvuoCxDoZmmBkktDDhsCjTY_ZGcHzZHPxIZEhXEpMFoXnzkiMjsTOFOCaP__aJi
               (undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               float param_7)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  *param_1 = 0;
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    fVar6 = 0.0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar2 = *(int *)(param_2 + 8);
      iVar5 = 0;
      do {
        iVar4 = 0;
        do {
          pfVar3 = (float *)(iVar2 + iVar4);
          iVar4 = iVar4 + 4;
          if (fVar6 < ABS(*pfVar3)) {
            fVar6 = ABS(*pfVar3);
          }
        } while (iVar4 != 0x100);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x100;
      } while (iVar5 != *(int *)(param_2 + 4));
    }
    bVar1 = false;
    if (32000.0 < fVar6 * param_7 * 10.0) {
      bVar1 = true;
    }
  }
  else {
    if (param_6 == 0) {
      return;
    }
    pfVar3 = (float *)(param_5 + 0x828);
    bVar1 = false;
    do {
      if (bVar1) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
        if (pfVar3[-1] <= 20000.0) {
          bVar1 = 20000.0 < *pfVar3;
        }
      }
      pfVar3 = pfVar3 + 0x20b;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  *param_1 = bVar1;
  return;
}


// =========================================================================
// Function: OIheOSObeHoWotakZWWFicbMOLbyNdAgaxVKAnblrBd
// Entry: 0x71ad87b0 | Size: 116 bytes
// =========================================================================

void OIheOSObeHoWotakZWWFicbMOLbyNdAgaxVKAnblrBd(char *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  
  bVar1 = param_1[9];
  uVar2 = *(int *)(param_1 + 0xc) + (param_2 & ~param_3);
  *(uint *)(param_1 + 0xc) = uVar2;
  if (*param_1 == '\0') {
    bVar3 = false;
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar4 < *(float *)(param_1 + 4) * 250.0) {
      bVar3 = true;
    }
  }
  else {
    bVar3 = uVar2 < 0x4e2;
  }
  param_1[9] = bVar3;
  param_1[8] = bVar1 & (bVar3 ^ 1U);
  return;
}


// =========================================================================
// Function: piWUnKzxNBWgdbviJHGc_rMmuIrdQCvChduVQywKACxsnmvQmTXCT_WKiHWufcMtbMKeADFrhWgMvVYjIezQMWAuZoJHMuiaeFCb
// Entry: 0x71ad8828 | Size: 228 bytes
// =========================================================================

void piWUnKzxNBWgdbviJHGc_rMmuIrdQCvChduVQywKACxsnmvQmTXCT_WKiHWufcMtbMKeADFrhWgMvVYjIezQMWAuZoJHMuiaeFCb
               (char *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = *(int *)(param_1 + 8) + (param_2 & ~param_4);
  uVar3 = *(int *)(param_1 + 4) + (param_2 & ~param_4);
  bVar6 = 100 < uVar5;
  bVar7 = 0x32 < uVar3;
  uVar2 = 0;
  if (bVar6 && bVar7) {
    uVar2 = param_5;
  }
  bVar1 = param_1[0xc];
  *(uint *)(param_1 + 4) = uVar3;
  *(uint *)(param_1 + 8) = uVar5;
  if (bVar6 && bVar7) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x10);
  }
  param_1[0xc] = (char)(bVar1 | param_6);
  if (bVar6 && bVar7) {
    uVar2 = bVar1 | param_6 | uVar2;
  }
  uVar2 = uVar2 & (param_3 ^ 1);
  param_1[1] = (char)uVar2;
  if (*param_1 != '\0') {
    param_6 = *(uint *)(param_1 + 0x14);
  }
  if (*param_1 != '\0' && param_6 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    uVar3 = param_6 >> 5;
    if (uVar2 == 0) {
      if (0x1f < param_6) {
        imp___aeabi_memclr4(iVar4,uVar3 << 2);
      }
      if ((param_6 & 0x1f) != 0) {
        *(uint *)(iVar4 + uVar3 * 4) =
             *(uint *)(iVar4 + uVar3 * 4) & ~(0xffffffffU >> (0x20 - (param_6 & 0x1f) & 0xff));
        return;
      }
    }
    else {
      if (0x1f < param_6) {
        imp___aeabi_memset4(iVar4,uVar3 << 2,0xff);
      }
      if ((param_6 & 0x1f) != 0) {
        *(uint *)(iVar4 + uVar3 * 4) =
             *(uint *)(iVar4 + uVar3 * 4) | 0xffffffffU >> (0x20 - (param_6 & 0x1f) & 0xff);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: qHXCwMtSarPYdPTUroNCurFvfMUXAZdDcbUxxImUTKNDdYzQCwbToNYyggqgYnEi
// Entry: 0x71ad890c | Size: 36 bytes
// =========================================================================

void qHXCwMtSarPYdPTUroNCurFvfMUXAZdDcbUxxImUTKNDdYzQCwbToNYyggqgYnEi
               (undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}


// =========================================================================
// Function: liKOGsWWezXlfABqyHNKQHhdXBdaBDLwtNTrCd_Ae
// Entry: 0x71ad8930 | Size: 20 bytes
// =========================================================================

void liKOGsWWezXlfABqyHNKQHhdXBdaBDLwtNTrCd_Ae(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}


// =========================================================================
// Function: GpetNtZWinxVRjYEWfQTKxYBfUubWKwAiBvCpKzsmRoUtzIeFhGJmDyKALmQTcG_
// Entry: 0x71ad8944 | Size: 200 bytes
// =========================================================================

uint * GpetNtZWinxVRjYEWfQTKxYBfUubWKwAiBvCpKzsmRoUtzIeFhGJmDyKALmQTcG_
                 (uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  param_1[2] = 0;
  uVar1 = uVar1 >> 6;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = uVar1;
  if (param_3 == 0) goto LAB_71ad89f0;
  if (0x3fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a0f1b4(param_1 + 2);
  }
  puVar2 = (uint *)thunk_MwhHq(param_3 << 2);
  puVar3 = puVar2 + param_3;
  uVar4 = param_3 - 1 & 0x3fffffff;
  param_1[2] = (uint)puVar2;
  param_1[3] = (uint)puVar2;
  param_1[4] = (uint)puVar3;
  if (uVar4 < 3) {
LAB_71ad89e0:
    do {
      puVar5 = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar5;
    } while (puVar5 != puVar3);
  }
  else {
    uVar4 = uVar4 + 1;
    uVar6 = uVar4 & 0xfffffffc;
    puVar5 = puVar2 + uVar6;
    uVar7 = uVar6;
    do {
      *(ulonglong *)puVar2 = CONCAT44(uVar1,uVar1);
      *(ulonglong *)(puVar2 + 2) = CONCAT44(uVar1,uVar1);
      puVar2 = puVar2 + 4;
      uVar7 = uVar7 - 4;
    } while (uVar7 != 0);
    puVar2 = puVar5;
    if (uVar4 != uVar6) goto LAB_71ad89e0;
  }
  param_1[3] = (uint)puVar3;
LAB_71ad89f0:
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = uVar1;
  return param_1;
}


// =========================================================================
// Function: BWKYEdnezvgaHAYszXULDIVxxGSAgWyUQpELiCRXEhcfVeoKmNIFSkuMcHhVBAUvQJRmaaRwkLZxo
// Entry: 0x71ad8a24 | Size: 192 bytes
// =========================================================================

undefined1 *
BWKYEdnezvgaHAYszXULDIVxxGSAgWyUQpELiCRXEhcfVeoKmNIFSkuMcHhVBAUvQJRmaaRwkLZxo
          (undefined1 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = *(undefined1 *)(param_2 + 0xaa);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    if ((int)param_3 < 0) {
      iVar2 = FUN_71ad95f4();
      uVar3 = *(uint *)(iVar2 + 0x14);
      if (uVar3 != 0) {
        iVar4 = *(int *)(iVar2 + 0x10);
        uVar1 = uVar3 >> 5;
        if (uVar1 != 0) {
          imp___aeabi_memclr4(iVar4,uVar1 << 2);
        }
        if ((uVar3 & 0x1f) != 0) {
          *(uint *)(iVar4 + uVar1 * 4) =
               *(uint *)(iVar4 + uVar1 * 4) & ~(0xffffffffU >> (0x20 - (uVar3 & 0x1f) & 0xff));
        }
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
      return (undefined1 *)0x0;
    }
    iVar4 = (param_3 - 1 >> 5) + 1;
    iVar2 = thunk_MwhHq(iVar4 * 4);
    uVar3 = param_3 - 1 >> 5;
    if (param_3 < 0x21) {
      uVar3 = 0;
    }
    uVar1 = param_3 >> 5;
    *(undefined4 *)(iVar2 + uVar3 * 4) = 0;
    *(int *)(param_1 + 0x10) = iVar2;
    *(uint *)(param_1 + 0x14) = param_3;
    *(int *)(param_1 + 0x18) = iVar4;
    if (uVar1 != 0) {
      imp___aeabi_memclr4(iVar2,uVar1 << 2);
    }
    if ((param_3 & 0x1f) != 0) {
      *(uint *)(iVar2 + uVar1 * 4) =
           *(uint *)(iVar2 + uVar1 * 4) & ~(0xffffffffU >> (0x20 - (param_3 & 0x1f) & 0xff));
    }
  }
  return param_1;
}


// =========================================================================
// Function: wYpUfZYyJLoyvMqyewDKcuDXNesdUeEwTehBPqqNWXyaxUBEvsDdx
// Entry: 0x71ad8ae4 | Size: 92 bytes
// =========================================================================

void wYpUfZYyJLoyvMqyewDKcuDXNesdUeEwTehBPqqNWXyaxUBEvsDdx(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar1 = uVar3 >> 5;
    if (uVar1 != 0) {
      imp___aeabi_memclr4(iVar2,uVar1 << 2);
    }
    if ((uVar3 & 0x1f) != 0) {
      *(uint *)(iVar2 + uVar1 * 4) =
           *(uint *)(iVar2 + uVar1 * 4) & ~(0xffffffffU >> (0x20 - (uVar3 & 0x1f) & 0xff));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: FUN_71ad95f4
// Entry: 0x71ad95f4 | Size: 20 bytes
// =========================================================================

void FUN_71ad95f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: ImeRIIBNnIddoQvxbwiJAXtwLCKhiQJRHIvhYjydwpSnnKSVTMnkSMkUKszFasf
// Entry: 0x71ad965c | Size: 728 bytes
// =========================================================================

void ImeRIIBNnIddoQvxbwiJAXtwLCKhiQJRHIvhYjydwpSnnKSVTMnkSMkUKszFasf
               (undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  if (*(char *)(param_2 + 0xd5) == '\0') {
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (abStack_30,s_WebRTC_Aec3TransparentModeKillSw_70067305,0x24);
    uVar7 = uStack_28;
    bVar3 = abStack_30[0];
    uVar4 = (uint)abStack_30 | 1;
    uVar10 = uStack_28;
    uVar9 = uStack_2c;
    if ((abStack_30[0] & 1) == 0) {
      uVar9 = (uint)(abStack_30[0] >> 1);
      uVar10 = uVar4;
    }
    uVar11 = uVar10 + uVar9;
    uVar5 = uVar10;
    while (((uVar2 = uVar11, 6 < (int)uVar9 &&
            (uVar5 = imp_memchr(uVar5,0x45,uVar9 - 6), uVar5 != 0)) &&
           (iVar6 = imp_memcmp(uVar5,s_Enabled_7006820b,7), uVar2 = uVar5, iVar6 != 0))) {
      uVar5 = uVar5 + 1;
      uVar9 = uVar11 - uVar5;
    }
    if ((bVar3 & 1) != 0) {
      thunk_qNQrlu(uVar7);
    }
    if ((uVar2 == uVar11) || (uVar2 != uVar10)) {
      thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
                (abStack_30,s_WebRTC_Aec3TransparentModeHmm_7006e253,0x1d);
      uVar9 = uStack_28;
      if ((abStack_30[0] & 1) == 0) {
        uStack_2c = (uint)(abStack_30[0] >> 1);
        uVar9 = uVar4;
      }
      uVar10 = uVar9 + uStack_2c;
      uVar7 = uVar9;
      while (((uVar4 = uVar10, 6 < (int)uStack_2c &&
              (uVar7 = imp_memchr(uVar7,0x45,uStack_2c - 6), uVar7 != 0)) &&
             (iVar6 = imp_memcmp(uVar7,s_Enabled_7006820b,7), uVar4 = uVar7, iVar6 != 0))) {
        uVar7 = uVar7 + 1;
        uStack_2c = uVar10 - uVar7;
      }
      if ((abStack_30[0] & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
      iVar6 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
      if ((uVar4 != uVar10) && (uVar4 == uVar9)) {
        if (iVar6 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_7007262d,0x769,
                     s_AEC3_Transparent_Mode__HMM_70061f0c);
        }
        puVar8 = (undefined4 *)thunk_MwhHq(0xc);
        puVar8[1] = 0;
        puVar8[2] = 0x3e4ccccd;
        *puVar8 = &DAT_70b1372c;
        *param_1 = puVar8;
        return;
      }
      if (iVar6 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_7007262d,0x781,
                   s_AEC3_Transparent_Mode__Legacy_70066942);
      }
      puVar8 = (undefined4 *)thunk_MwhHq(0x30);
      uVar1 = *(undefined1 *)(param_2 + 0x105);
      *puVar8 = &DAT_70b1375c;
      puVar8[4] = 10000;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      *(undefined2 *)(puVar8 + 5) = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      puVar8[2] = 0;
      puVar8[6] = 10000;
      puVar8[7] = 0;
      *(undefined4 *)((int)puVar8 + 0x25) = 0;
      *(undefined4 *)((int)puVar8 + 0x21) = 0;
      *(undefined1 *)(puVar8 + 1) = uVar1;
      *param_1 = puVar8;
      return;
    }
  }
  iVar6 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar6 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_7007262d,0x749,
               s_AEC3_Transparent_Mode__Disabled_70068349);
  }
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: AeqhiNhvjubYvvz_rYkJykGsTdJloAltEyM
// Entry: 0x71ad9cd0 | Size: 4 bytes
// =========================================================================

void AeqhiNhvjubYvvz_rYkJykGsTdJloAltEyM(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: JwlfzwyVvmLKhssfBoxYcSyuASxEjhAQpAnLOUyMm
// Entry: 0x71ad9d08 | Size: 8 bytes
// =========================================================================

undefined1 JwlfzwyVvmLKhssfBoxYcSyuASxEjhAQpAnLOUyMm(int param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// =========================================================================
// Function: VSUdTtmQRUqZeeiwZCgjbIM_ifCcZDfQmxLgZEx
// Entry: 0x71ad9d28 | Size: 24 bytes
// =========================================================================

void VSUdTtmQRUqZeeiwZCgjbIM_ifCcZDfQmxLgZEx(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// =========================================================================
// Function: DUimnHsvFpeFWiPznhLvLTJLVSeUSNyAfGQpbKjFobIzIq
// Entry: 0x71ad9d58 | Size: 140 bytes
// =========================================================================

void DUimnHsvFpeFWiPznhLvLTJLVSeUSNyAfGQpbKjFobIzIq(int param_1)

{
  float fVar1;
  float fVar2;
  int in_stack_00000000;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 8) * 0.999999 + (1.0 - *(float *)(param_1 + 8)) * 1e-06;
  fVar2 = fVar1 * *(float *)(&DAT_70086ea0 + in_stack_00000000 * 4);
  fVar2 = fVar2 / (fVar2 + *(float *)(&DAT_70086e98 + in_stack_00000000 * 4) * (1.0 - fVar1));
  *(float *)(param_1 + 8) = fVar2;
  if (0.95 < fVar2) {
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  if (fVar2 < 0.5) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// =========================================================================
// Function: AiIzFEaPAKzuRMCiTeSobblkWzYjXEd
// Entry: 0x71ad9e28 | Size: 4 bytes
// =========================================================================

void AiIzFEaPAKzuRMCiTeSobblkWzYjXEd(void)

{
  return;
}


// =========================================================================
// Function: CujkDOeDGjOBoMWGPVngPtMsiFQQ_WdjjVXewDnGw
// Entry: 0x71ad9e44 | Size: 4 bytes
// =========================================================================

void CujkDOeDGjOBoMWGPVngPtMsiFQQ_WdjjVXewDnGw(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: BevafJwCMKkCFlQrLoqPCwTbutRiODJlpTQQtTQxjbIuAHG
// Entry: 0x71ad9e7c | Size: 8 bytes
// =========================================================================

undefined1 BevafJwCMKkCFlQrLoqPCwTbutRiODJlpTQQtTQxjbIuAHG(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


// =========================================================================
// Function: uLQoTKoGmXAouiowIMBeYVEBtXPUMerOKvfKUpJiSspQf
// Entry: 0x71ad9e9c | Size: 44 bytes
// =========================================================================

void uLQoTKoGmXAouiowIMBeYVEBtXPUMerOKvfKUpJiSspQf(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 10000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}


// =========================================================================
// Function: xRVDTzgVaccIqJIzLvGCBaHo_OCTDLaqWrrssljBXgFtNnFcdEGV
// Entry: 0x71ad9ee0 | Size: 416 bytes
// =========================================================================

void xRVDTzgVaccIqJIzLvGCBaHo_OCTDLaqWrrssljBXgFtNnFcdEGV
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
               uint param_7,uint param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar3;
  uVar4 = *(int *)(param_1 + 0x2c) + (param_7 & ~param_8);
  *(uint *)(param_1 + 0x2c) = uVar4;
  if ((param_2 < 5) && (param_3 != 0)) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    if (param_7 != 0) {
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 0x10) = uVar2;
    }
  }
  bVar1 = uVar2 < 0x1d4d;
  if (*(char *)(param_1 + 0x14) == '\0') {
    bVar1 = uVar3 < 0x4e3;
  }
  if (param_4 == 0) {
    uVar3 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
    if (5000 < uVar3) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if ((param_7 != 0) &&
       (uVar3 = *(int *)(param_1 + 0x20) + 1, *(uint *)(param_1 + 0x20) = uVar3, 15000 < uVar3)) {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  if (param_6 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x1c) + 1;
    *(uint *)(param_1 + 0x1c) = uVar3;
    if (0x3b < uVar3) {
      *(undefined4 *)(param_1 + 0x18) = 10000;
    }
  }
  if (15000 < *(uint *)(param_1 + 0x20)) {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (*(uint *)(param_1 + 0x24) < 0x33) {
    if ((*(char *)(param_1 + 0x15) == '\0') && (!bVar1 || *(char *)(param_1 + 0x28) == '\0')) {
      *(bool *)(param_1 + 0xc) = 0x5dc < uVar4;
      return;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


// =========================================================================
// Function: N_JpdVeoskGEXuPdXtVBijuvAAks
// Entry: 0x71ada0a0 | Size: 140 bytes
// =========================================================================

undefined4 * N_JpdVeoskGEXuPdXtVBijuvAAks(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 1) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 3) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 5) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 7) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 9) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0xb) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0xd) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0xf) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x11) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x13) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x15) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x17) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x19) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x1b) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x1d) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x1f) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x21) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x23) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x25) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x27) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x29) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x2b) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x2d) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x2f) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x31) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x33) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x35) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x37) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x39) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x3b) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x3d) = 0x447a0000447a0000;
  *(undefined8 *)(param_1 + 0x3f) = 0x447a0000447a0000;
  param_1[0x41] = 0x447a0000;
  *param_1 = param_2;
  param_1[0x83] = 0;
  imp___aeabi_memclr4(param_1 + 0x42,0xfc);
  param_1[0x81] = 0x447a0000;
  param_1[0x82] = 0;
  return param_1;
}


// =========================================================================
// Function: mMiPwzDYKrRtboTgtOZULreCb_qy
// Entry: 0x71ada140 | Size: 4 bytes
// =========================================================================

void mMiPwzDYKrRtboTgtOZULreCb_qy(void)

{
  return;
}


// =========================================================================
// Function: rufDSXvhplEforOuULgwVAWoHmlgUSAJ
// Entry: 0x71ada144 | Size: 12 bytes
// =========================================================================

void rufDSXvhplEforOuULgwVAWoHmlgUSAJ(int param_1)

{
  *(undefined4 *)(param_1 + 0x20c) = 0;
  return;
}


// =========================================================================
// Function: FeAkriuiQLCdvevgxlIDBdHmGcruFKQyMUDeMwaiWIpxeARBoeyLnHWgboA_daPoPmXeaqccmQiksujFnrpoAJohPzIliUTiOYjafANIsqjaPXNyBHWnTXneiA
// Entry: 0x71ada150 | Size: 3288 bytes
// =========================================================================

void FeAkriuiQLCdvevgxlIDBdHmGcruFKQyMUDeMwaiWIpxeARBoeyLnHWgboA_daPoPmXeaqccmQiksujFnrpoAJohPzIliUTiOYjafANIsqjaPXNyBHWnTXneiA
               (uint *param_1,int *param_2,float *param_3,uint param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar26;
  undefined1 extraout_var [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 in_q2 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float *pfStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
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
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
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
  
  uVar17 = param_2[1];
  fStack_274 = (float)CONCAT31(fStack_274._1_3_,1);
  FUN_71adaee8(&fStack_168,*param_2,0,*param_2 + (uVar17 >> 5) * 4,uVar17 & 0x1f,&fStack_274,
               &uStack_270);
  fVar27 = fStack_164;
  fVar19 = fStack_168;
  uVar11 = param_2[1];
  iVar16 = *param_2;
  uVar9 = param_1[0x83];
  param_1[0x83] = uVar9 + 1;
  if (((float)(iVar16 + (uVar11 >> 5) * 4) != fStack_168 || fStack_164 != (float)(uVar11 & 0x1f)) &&
     (*param_1 <= uVar9 + 1)) {
    imp___aeabi_memcpy4(&fStack_168,param_5,0x104);
    auVar21._12_4_ = 0;
    auVar21._0_12_ = extraout_var;
    auVar21 = auVar21 << 0x20;
    if (1 < uVar17) {
      iVar12 = (int)fVar27 + ((int)fVar19 - iVar16) * 8;
      uVar9 = iVar12 + 1;
      pfVar10 = (float *)(param_5 + iVar12 * 0x104);
      fStack_2f0 = *pfVar10;
      fStack_2ec = pfVar10[1];
      fStack_2e8 = pfVar10[2];
      fStack_2e4 = pfVar10[3];
      auVar38 = *(undefined1 (*) [16])(pfVar10 + 4);
      fStack_2c0 = pfVar10[8];
      fStack_2bc = pfVar10[9];
      fStack_2b8 = pfVar10[10];
      fStack_2b4 = pfVar10[0xb];
      auVar32 = *(undefined1 (*) [16])(pfVar10 + 0xc);
      fStack_2b0 = pfVar10[0x10];
      fStack_2ac = pfVar10[0x11];
      fStack_2a8 = pfVar10[0x12];
      fStack_2a4 = pfVar10[0x13];
      fStack_2e0 = pfVar10[0x14];
      fStack_2dc = pfVar10[0x15];
      fStack_2d8 = pfVar10[0x16];
      fStack_2d4 = pfVar10[0x17];
      fStack_290 = pfVar10[0x18];
      fStack_28c = pfVar10[0x19];
      fStack_288 = pfVar10[0x1a];
      fStack_284 = pfVar10[0x1b];
      auVar21 = *(undefined1 (*) [16])(pfVar10 + 0x1c);
      auVar34 = *(undefined1 (*) [16])(pfVar10 + 0x20);
      auVar42 = *(undefined1 (*) [16])(pfVar10 + 0x24);
      auVar40 = *(undefined1 (*) [16])(pfVar10 + 0x28);
      auVar31 = *(undefined1 (*) [16])(pfVar10 + 0x2c);
      auVar41 = *(undefined1 (*) [16])(pfVar10 + 0x30);
      auVar37 = *(undefined1 (*) [16])(pfVar10 + 0x34);
      auVar36 = *(undefined1 (*) [16])(pfVar10 + 0x38);
      in_q2 = *(undefined1 (*) [16])(pfVar10 + 0x3c);
      fStack_68 = pfVar10[0x40];
      fStack_2d0 = auVar41._0_4_;
      fStack_2cc = auVar41._4_4_;
      uStack_2c8 = auVar41._8_8_;
      if (uVar9 < uVar17) {
        pfVar10 = (float *)((int)fVar19 * 0x820 + (int)fVar27 * 0x104 + iVar16 * -0x820 + param_5 +
                           0x204);
        do {
          if ((*(uint *)(iVar16 + (uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
            auVar41._4_4_ = fStack_2ec;
            auVar41._0_4_ = fStack_2f0;
            auVar41._8_4_ = fStack_2e8;
            auVar41._12_4_ = fStack_2e4;
            auVar33._4_4_ = fStack_2bc;
            auVar33._0_4_ = fStack_2c0;
            auVar33._8_4_ = fStack_2b8;
            auVar33._12_4_ = fStack_2b4;
            auVar18 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x40),auVar41,2);
            auVar35._4_4_ = fStack_2ac;
            auVar35._0_4_ = fStack_2b0;
            auVar35._8_4_ = fStack_2a8;
            auVar35._12_4_ = fStack_2a4;
            auVar28 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x38),auVar33,2);
            auVar20 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x30),auVar35,2);
            auVar41 = VectorBitwiseInsertIfTrue
                                (auVar41,*(undefined1 (*) [16])(pfVar10 + -0x40),auVar18);
            fStack_2f0 = auVar41._0_4_;
            fStack_2ec = auVar41._4_4_;
            fStack_2e8 = auVar41._8_4_;
            fStack_2e4 = auVar41._12_4_;
            auVar2._4_4_ = fStack_28c;
            auVar2._0_4_ = fStack_290;
            auVar2._8_4_ = fStack_288;
            auVar2._12_4_ = fStack_284;
            auVar41 = VectorBitwiseInsertIfTrue
                                (auVar33,*(undefined1 (*) [16])(pfVar10 + -0x38),auVar28);
            auVar39 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x28),auVar2,2);
            auVar33 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x20),auVar34,2);
            fStack_2c0 = auVar41._0_4_;
            fStack_2bc = auVar41._4_4_;
            fStack_2b8 = auVar41._8_4_;
            fStack_2b4 = auVar41._12_4_;
            auVar28._4_4_ = fStack_2cc;
            auVar28._0_4_ = fStack_2d0;
            auVar28._8_8_ = uStack_2c8;
            auVar41 = VectorBitwiseInsertIfTrue
                                (auVar35,*(undefined1 (*) [16])(pfVar10 + -0x30),auVar20);
            fStack_2b0 = auVar41._0_4_;
            fStack_2ac = auVar41._4_4_;
            fStack_2a8 = auVar41._8_4_;
            fStack_2a4 = auVar41._12_4_;
            auVar18._4_4_ = fStack_2dc;
            auVar18._0_4_ = fStack_2e0;
            auVar18._8_4_ = fStack_2d8;
            auVar18._12_4_ = fStack_2d4;
            auVar41 = VectorBitwiseInsertIfTrue
                                (auVar2,*(undefined1 (*) [16])(pfVar10 + -0x28),auVar39);
            auVar35 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x18),auVar40,2);
            fStack_290 = auVar41._0_4_;
            fStack_28c = auVar41._4_4_;
            fStack_288 = auVar41._8_4_;
            fStack_284 = auVar41._12_4_;
            auVar34 = VectorBitwiseSelect(auVar33,*(undefined1 (*) [16])(pfVar10 + -0x20),auVar34);
            auVar40 = VectorBitwiseSelect(auVar35,*(undefined1 (*) [16])(pfVar10 + -0x18),auVar40);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x10),auVar28,2);
            auVar41 = VectorBitwiseInsertIfTrue
                                (auVar28,*(undefined1 (*) [16])(pfVar10 + -0x10),auVar41);
            fStack_2d0 = auVar41._0_4_;
            fStack_2cc = auVar41._4_4_;
            uStack_2c8 = auVar41._8_8_;
            auVar41 = FloatVectorCompareGreaterThan(*(undefined1 (*) [16])(pfVar10 + -8),auVar36,2);
            auVar36 = VectorBitwiseInsertIfTrue
                                (auVar36,*(undefined1 (*) [16])(pfVar10 + -8),auVar41);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x3c),auVar38,2);
            auVar38 = VectorBitwiseInsertIfTrue
                                (auVar38,*(undefined1 (*) [16])(pfVar10 + -0x3c),auVar41);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x34),auVar32,2);
            auVar32 = VectorBitwiseInsertIfTrue
                                (auVar32,*(undefined1 (*) [16])(pfVar10 + -0x34),auVar41);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x2c),auVar18,2);
            auVar41 = VectorBitwiseInsertIfTrue
                                (auVar18,*(undefined1 (*) [16])(pfVar10 + -0x2c),auVar41);
            auVar18 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x24),auVar21,2);
            fStack_2e0 = auVar41._0_4_;
            fStack_2dc = auVar41._4_4_;
            fStack_2d8 = auVar41._8_4_;
            fStack_2d4 = auVar41._12_4_;
            auVar21 = VectorBitwiseInsertIfTrue
                                (auVar21,*(undefined1 (*) [16])(pfVar10 + -0x24),auVar18);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x1c),auVar42,2);
            auVar42 = VectorBitwiseInsertIfTrue
                                (auVar42,*(undefined1 (*) [16])(pfVar10 + -0x1c),auVar41);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0x14),auVar31,2);
            auVar31 = VectorBitwiseInsertIfTrue
                                (auVar31,*(undefined1 (*) [16])(pfVar10 + -0x14),auVar41);
            auVar41 = FloatVectorCompareGreaterThan
                                (*(undefined1 (*) [16])(pfVar10 + -0xc),auVar37,2);
            auVar37 = VectorBitwiseInsertIfTrue
                                (auVar37,*(undefined1 (*) [16])(pfVar10 + -0xc),auVar41);
            auVar41 = FloatVectorCompareGreaterThan(*(undefined1 (*) [16])(pfVar10 + -4),in_q2,2);
            in_q2 = VectorBitwiseInsertIfTrue(in_q2,*(undefined1 (*) [16])(pfVar10 + -4),auVar41);
            if (fStack_68 < *pfVar10) {
              fStack_68 = *pfVar10;
            }
          }
          uVar9 = uVar9 + 1;
          pfVar10 = pfVar10 + 0x41;
        } while (uVar9 < uVar17);
      }
      fStack_168 = fStack_2f0;
      fStack_164 = fStack_2ec;
      fStack_160 = fStack_2e8;
      fStack_15c = fStack_2e4;
      fStack_154 = auVar38._4_4_;
      fStack_158 = auVar38._0_4_;
      fStack_14c = auVar38._12_4_;
      fStack_150 = auVar38._8_4_;
      fStack_148 = fStack_2c0;
      fStack_144 = fStack_2bc;
      fStack_140 = fStack_2b8;
      fStack_13c = fStack_2b4;
      fStack_134 = auVar32._4_4_;
      fStack_138 = auVar32._0_4_;
      fStack_12c = auVar32._12_4_;
      fStack_130 = auVar32._8_4_;
      fStack_128 = fStack_2b0;
      fStack_124 = fStack_2ac;
      fStack_120 = fStack_2a8;
      fStack_11c = fStack_2a4;
      fStack_118 = fStack_2e0;
      fStack_114 = fStack_2dc;
      fStack_110 = fStack_2d8;
      fStack_10c = fStack_2d4;
      fStack_108 = fStack_290;
      fStack_104 = fStack_28c;
      fStack_100 = fStack_288;
      fStack_fc = fStack_284;
      fStack_f4 = auVar21._4_4_;
      fStack_f8 = auVar21._0_4_;
      fStack_ec = auVar21._12_4_;
      fStack_f0 = auVar21._8_4_;
      fStack_e4 = auVar34._4_4_;
      fStack_e8 = auVar34._0_4_;
      fStack_dc = auVar34._12_4_;
      fStack_e0 = auVar34._8_4_;
      fStack_d4 = auVar42._4_4_;
      fStack_d8 = auVar42._0_4_;
      fStack_cc = auVar42._12_4_;
      fStack_d0 = auVar42._8_4_;
      fStack_c4 = auVar40._4_4_;
      fStack_c8 = auVar40._0_4_;
      fStack_bc = auVar40._12_4_;
      fStack_c0 = auVar40._8_4_;
      fStack_b4 = auVar31._4_4_;
      fStack_b8 = auVar31._0_4_;
      fStack_ac = auVar31._12_4_;
      fStack_b0 = auVar31._8_4_;
      fStack_a4 = fStack_2cc;
      fStack_a8 = fStack_2d0;
      fStack_9c = (float)((ulonglong)uStack_2c8 >> 0x20);
      fStack_a0 = (float)uStack_2c8;
      fStack_94 = auVar37._4_4_;
      fStack_98 = auVar37._0_4_;
      fStack_8c = auVar37._12_4_;
      fStack_90 = auVar37._8_4_;
      fStack_84 = auVar36._4_4_;
      fStack_88 = auVar36._0_4_;
      fStack_7c = auVar36._12_4_;
      fStack_80 = auVar36._8_4_;
      fStack_74 = in_q2._4_4_;
      fStack_78 = in_q2._0_4_;
      fStack_6c = in_q2._12_4_;
      fStack_70 = in_q2._8_4_;
    }
    auVar25 = auVar21._4_12_;
    pfStack_294 = param_3;
    if (1 < param_4) {
      imp___aeabi_memmove4(&uStack_270,param_3,0x104);
      auVar38._12_4_ = 0;
      auVar38._0_12_ = extraout_var_00;
      auVar38 = auVar38 << 0x20;
      uVar9 = 1;
      pfVar10 = param_3;
      do {
        pfVar10 = pfVar10 + 0x41;
        iVar16 = 0;
        if (param_3 + param_4 * 0x41 <= &uStack_270 || &uStack_270 <= param_3) {
          auVar32._8_8_ = uStack_268;
          auVar32._0_8_ = uStack_270;
          pauVar13 = (undefined1 (*) [16])(param_3 + uVar9 * 0x41);
          auVar38 = FloatVectorCompareGreaterThan(*pauVar13,auVar32,2);
          in_q2._8_8_ = uStack_238;
          in_q2._0_8_ = uStack_240;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[3],in_q2,2);
          auVar34._8_8_ = uStack_258;
          auVar34._0_8_ = uStack_260;
          auVar40 = FloatVectorCompareGreaterThan(pauVar13[1],auVar34,2);
          auVar42._8_8_ = uStack_248;
          auVar42._0_8_ = uStack_250;
          auVar32 = VectorBitwiseInsertIfFalse(*pauVar13,auVar32,auVar38);
          auVar38 = FloatVectorCompareGreaterThan(pauVar13[2],auVar42,2);
          auVar34 = VectorBitwiseInsertIfFalse(pauVar13[1],auVar34,auVar40);
          auVar40._8_8_ = uStack_228;
          auVar40._0_8_ = uStack_230;
          auVar42 = VectorBitwiseInsertIfTrue(auVar42,pauVar13[2],auVar38);
          uStack_270 = auVar32._0_8_;
          uStack_268 = auVar32._8_8_;
          auVar32 = FloatVectorCompareGreaterThan(pauVar13[4],auVar40,2);
          auVar31._8_8_ = uStack_218;
          auVar31._0_8_ = uStack_220;
          auVar21 = VectorBitwiseSelect(auVar21,pauVar13[3],in_q2);
          uStack_260 = auVar34._0_8_;
          uStack_258 = auVar34._8_8_;
          auVar32 = VectorBitwiseInsertIfFalse(pauVar13[4],auVar40,auVar32);
          uStack_250 = auVar42._0_8_;
          uStack_248 = auVar42._8_8_;
          uStack_240 = auVar21._0_8_;
          uStack_238 = auVar21._8_8_;
          uStack_230 = auVar32._0_8_;
          uStack_228 = auVar32._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[5],auVar31,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[5],auVar31,auVar21);
          auVar37._8_8_ = uStack_208;
          auVar37._0_8_ = uStack_210;
          uStack_220 = auVar21._0_8_;
          uStack_218 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[6],auVar37,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[6],auVar37,auVar21);
          auVar36._8_8_ = uStack_1f8;
          auVar36._0_8_ = uStack_200;
          uStack_210 = auVar21._0_8_;
          uStack_208 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[7],auVar36,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[7],auVar36,auVar21);
          auVar20._8_8_ = uStack_1e8;
          auVar20._0_8_ = uStack_1f0;
          uStack_200 = auVar21._0_8_;
          uStack_1f8 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[8],auVar20,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[8],auVar20,auVar21);
          auVar39._8_8_ = uStack_1d8;
          auVar39._0_8_ = uStack_1e0;
          uStack_1f0 = auVar21._0_8_;
          uStack_1e8 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[9],auVar39,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[9],auVar39,auVar21);
          auVar3._8_8_ = uStack_1c8;
          auVar3._0_8_ = uStack_1d0;
          uStack_1e0 = auVar21._0_8_;
          uStack_1d8 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[10],auVar3,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[10],auVar3,auVar21);
          auVar4._8_8_ = uStack_1b8;
          auVar4._0_8_ = uStack_1c0;
          uStack_1d0 = auVar21._0_8_;
          uStack_1c8 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[0xb],auVar4,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[0xb],auVar4,auVar21);
          auVar5._8_8_ = uStack_1a8;
          auVar5._0_8_ = uStack_1b0;
          uStack_1c0 = auVar21._0_8_;
          uStack_1b8 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[0xc],auVar5,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[0xc],auVar5,auVar21);
          auVar6._8_8_ = uStack_198;
          auVar6._0_8_ = uStack_1a0;
          uStack_1b0 = auVar21._0_8_;
          uStack_1a8 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[0xd],auVar6,2);
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[0xd],auVar6,auVar21);
          auVar7._8_8_ = uStack_188;
          auVar7._0_8_ = uStack_190;
          uStack_1a0 = auVar21._0_8_;
          uStack_198 = auVar21._8_8_;
          auVar21 = FloatVectorCompareGreaterThan(pauVar13[0xe],auVar7,2);
          iVar16 = 0x40;
          auVar8._8_8_ = uStack_178;
          auVar8._0_8_ = uStack_180;
          auVar21 = VectorBitwiseInsertIfFalse(pauVar13[0xe],auVar7,auVar21);
          auVar32 = FloatVectorCompareGreaterThan(pauVar13[0xf],auVar8,2);
          auVar32 = VectorBitwiseSelect(auVar32,pauVar13[0xf],auVar8);
          uStack_190 = auVar21._0_8_;
          uStack_188 = auVar21._8_8_;
          uStack_180 = auVar32._0_8_;
          uStack_178 = auVar32._8_8_;
        }
        auVar25 = auVar38._4_12_;
        iVar16 = iVar16 << 2;
        do {
          pfVar14 = (float *)((int)pfVar10 + iVar16);
          pfVar15 = (float *)((int)&uStack_270 + iVar16);
          iVar16 = iVar16 + 4;
          fVar19 = *pfVar15;
          if (fVar19 < *pfVar14) {
            fVar19 = *pfVar14;
          }
          *pfVar15 = fVar19;
        } while (iVar16 != 0x104);
        uVar9 = uVar9 + 1;
        pfStack_294 = (float *)&uStack_270;
      } while (uVar9 != param_4);
    }
    auVar22._4_12_ = auVar25;
    auVar22._0_4_ = 0x4c27e777;
    iVar16 = 0;
    do {
      auVar23._12_4_ = auVar22._12_4_;
      auVar23._0_8_ = auVar22._0_8_;
      auVar23._8_4_ = *(float *)((int)pfStack_294 + iVar16 + 4);
      if (auVar22._0_4_ < auVar23._8_4_) {
        in_q2._0_4_ = *(float *)(((uint)&fStack_168 | 4) + iVar16) / auVar23._8_4_;
        auVar23._8_4_ = *(float *)((int)param_1 + iVar16 + 8);
        if (in_q2._0_4_ < auVar23._8_4_) {
          in_q2._0_4_ = in_q2._0_4_ - auVar23._8_4_;
          *(undefined4 *)((int)param_1 + iVar16 + 0x108) = 1000;
          fVar19 = auVar23._8_4_ + in_q2._0_4_ * 0.1;
          if (fVar19 < 0.01) {
            fVar19 = 0.01;
          }
          auVar23._8_4_ = fVar19;
          *(float *)((int)param_1 + iVar16 + 8) = fVar19;
        }
      }
      iVar16 = iVar16 + 4;
      auVar22 = auVar23;
    } while (iVar16 != 0xfc);
    auVar1._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
    auVar1._0_8_ = 0xffffffffffffffff;
    auVar21 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x42),auVar21,4);
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = 0x447a0000;
    uVar9 = param_1[0x7e];
    uVar11 = param_1[0x7f];
    uVar17 = param_1[0x80];
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x42) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x44) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x46),auVar21,4);
    param_1[0x7e] = uVar9 - 1;
    param_1[0x7f] = uVar11 - 1;
    param_1[0x80] = uVar17 - 1;
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x46) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x48) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x4a),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x4a) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x4c) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x4e),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x4e) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x50) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x52),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x52) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x54) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x56),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x56) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x58) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x5a),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x5a) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x5c) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x5e),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x5e) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x60) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x62),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x62) = auVar38._0_8_;
    *(longlong *)(param_1 + 100) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x66),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x66) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x68) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x6a),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x6a) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x6c) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x6e),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x6e) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x70) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x72),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x72) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x74) = auVar38._8_8_;
    auVar38 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x76),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x76) = auVar38._0_8_;
    *(longlong *)(param_1 + 0x78) = auVar38._8_8_;
    auVar21 = VectorAdd(*(undefined1 (*) [16])(param_1 + 0x7a),auVar21,4);
    *(longlong *)*(undefined1 (*) [16])(param_1 + 0x7a) = auVar21._0_8_;
    *(longlong *)(param_1 + 0x7c) = auVar21._8_8_;
    iVar16 = 0;
    do {
      fVar19 = auVar24._0_4_;
      auVar29._12_4_ = in_q2._12_4_;
      auVar29._0_8_ = in_q2._0_8_;
      auVar29._8_4_ = fVar19;
      iVar12 = iVar16 + 4;
      auVar24._8_4_ = *(float *)((int)param_1 + iVar16 + 8);
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = auVar24._8_4_ + auVar24._8_4_;
      in_q2 = auVar30;
      if (auVar30._0_4_ < fVar19) {
        in_q2._0_8_ = auVar30._0_8_;
        in_q2._8_4_ = auVar30._0_4_;
        in_q2._12_4_ = auVar29._12_4_;
      }
      if (0 < *(int *)((int)param_1 + iVar16 + 0x108)) {
        in_q2._8_4_ = auVar24._8_4_;
      }
      *(int *)((int)param_1 + iVar16 + 8) = in_q2._8_4_;
      iVar16 = iVar12;
    } while (iVar12 != 0xfc);
    param_1[1] = param_1[2];
    param_1[0x41] = param_1[0x40];
    fVar27 = *pfStack_294 + 0.0 + pfStack_294[1] + pfStack_294[2] + pfStack_294[3] + pfStack_294[4]
             + pfStack_294[5] + pfStack_294[6] + pfStack_294[7] + pfStack_294[8] + pfStack_294[9] +
             pfStack_294[10] + pfStack_294[0xb] + pfStack_294[0xc] + pfStack_294[0xd] +
             pfStack_294[0xe] + pfStack_294[0xf] + pfStack_294[0x10] + pfStack_294[0x11] +
             pfStack_294[0x12] + pfStack_294[0x13] + pfStack_294[0x14] + pfStack_294[0x15] +
             pfStack_294[0x16] + pfStack_294[0x17] + pfStack_294[0x18] + pfStack_294[0x19] +
             pfStack_294[0x1a] + pfStack_294[0x1b] + pfStack_294[0x1c] + pfStack_294[0x1d] +
             pfStack_294[0x1e] + pfStack_294[0x1f] + pfStack_294[0x20] + pfStack_294[0x21] +
             pfStack_294[0x22] + pfStack_294[0x23] + pfStack_294[0x24] + pfStack_294[0x25] +
             pfStack_294[0x26] + pfStack_294[0x27] + pfStack_294[0x28] + pfStack_294[0x29] +
             pfStack_294[0x2a] + pfStack_294[0x2b] + pfStack_294[0x2c] + pfStack_294[0x2d] +
             pfStack_294[0x2e] + pfStack_294[0x2f] + pfStack_294[0x30] + pfStack_294[0x31] +
             pfStack_294[0x32] + pfStack_294[0x33] + pfStack_294[0x34] + pfStack_294[0x35] +
             pfStack_294[0x36] + pfStack_294[0x37] + pfStack_294[0x38] + pfStack_294[0x39] +
             pfStack_294[0x3a] + pfStack_294[0x3b] + pfStack_294[0x3c] + pfStack_294[0x3d] +
             pfStack_294[0x3e] + pfStack_294[0x3f] + pfStack_294[0x40];
    if (2.8609795e+09 < fVar27) {
      fVar27 = (fStack_168 + 0.0 + fStack_164 + fStack_160 + fStack_15c + fStack_158 + fStack_154 +
                fStack_150 + fStack_14c + fStack_148 + fStack_144 + fStack_140 + fStack_13c +
                fStack_138 + fStack_134 + fStack_130 + fStack_12c + fStack_128 + fStack_124 +
                fStack_120 + fStack_11c + fStack_118 + fStack_114 + fStack_110 + fStack_10c +
                fStack_108 + fStack_104 + fStack_100 + fStack_fc + fStack_f8 + fStack_f4 + fStack_f0
                + fStack_ec + fStack_e8 + fStack_e4 + fStack_e0 + fStack_dc + fStack_d8 + fStack_d4
                + fStack_d0 + fStack_cc + fStack_c8 + fStack_c4 + fStack_c0 + fStack_bc + fStack_b8
                + fStack_b4 + fStack_b0 + fStack_ac + fStack_a8 + fStack_a4 + fStack_a0 + fStack_9c
                + fStack_98 + fStack_94 + fStack_90 + fStack_8c + fStack_88 + fStack_84 + fStack_80
                + fStack_7c + fStack_78 + fStack_74 + fStack_70 + fStack_6c + fStack_68) / fVar27;
      fVar26 = (float)param_1[0x81];
      if (fVar27 < fVar26) {
        param_1[0x82] = 1000;
        fVar26 = fVar26 + (fVar27 - fVar26) * 0.1;
        if (fVar26 < 0.01) {
          fVar26 = 0.01;
        }
        param_1[0x81] = (uint)fVar26;
      }
    }
    uVar9 = param_1[0x82];
    uVar11 = uVar9 - 1;
    param_1[0x82] = uVar11;
    pfVar10 = (float *)(param_1 + 0x81);
    if (uVar11 == 0 || (int)uVar9 < 1) {
      fVar27 = (float)param_1[0x81];
      fStack_274 = fVar27 + fVar27;
      pfVar10 = (float *)&DAT_70096c28;
      if (fStack_274 < fVar19) {
        pfVar10 = &fStack_274;
      }
    }
    param_1[0x81] = (uint)*pfVar10;
  }
  return;
}


