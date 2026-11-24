// =========================================================================
// Function: thunk_uXCbstDKZcSacXPeUiwFZonOvEcWNPmMDuEGKLJtmHIEooxPcbAXgkaHBxRLZJDRXPUBVFTiiZGrpHDDgzWaeITzPWbIK
// Entry: 0x71e07610 | Size: 1 bytes
// =========================================================================

void thunk_uXCbstDKZcSacXPeUiwFZonOvEcWNPmMDuEGKLJtmHIEooxPcbAXgkaHBxRLZJDRXPUBVFTiiZGrpHDDgzWaeITzPWbIK
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
// Function: thunk_bjAuGMYPoe_Sx_ZcsebP_almGViTkLjfbdZNwvoTrlaXeNijrpr
// Entry: 0x71e07620 | Size: 1 bytes
// =========================================================================

void thunk_bjAuGMYPoe_Sx_ZcsebP_almGViTkLjfbdZNwvoTrlaXeNijrpr
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
// Function: thunk_MOkzAMFtkodcaEpqsRdrYmbSpqrIhHtcSESiSlTcLnLuYdZcGUekAKt
// Entry: 0x71e07630 | Size: 1 bytes
// =========================================================================

void thunk_MOkzAMFtkodcaEpqsRdrYmbSpqrIhHtcSESiSlTcLnLuYdZcGUekAKt(void)

{
  thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(0);
  return;
}


// =========================================================================
// Function: thunk_DYjdWOsLNkQD_OnuFFHfVxmMfQVXMDCLLlXstkovZtmKlGOKIwDGTQXbyGZtptZaVwgQgyYloOTTTUc
// Entry: 0x71e07640 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_DYjdWOsLNkQD_OnuFFHfVxmMfQVXMDCLLlXstkovZtmKlGOKIwDGTQXbyGZtptZaVwgQgyYloOTTTUc
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
// Function: thunk_zlWBfdztXYCtkjNrUHiapTpmqaxwn
// Entry: 0x71e07650 | Size: 1 bytes
// =========================================================================

int thunk_zlWBfdztXYCtkjNrUHiapTpmqaxwn(int param_1)

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
// Function: thunk_FrSqLhzFEW_UKVpugxipefDWlFZpcAAMMtJqOTiIXxDNIfHFmGtPltxlVNtRLSmiS
// Entry: 0x71e07660 | Size: 1 bytes
// =========================================================================

int * thunk_FrSqLhzFEW_UKVpugxipefDWlFZpcAAMMtJqOTiIXxDNIfHFmGtPltxlVNtRLSmiS
                (int *param_1,int param_2)

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
// Function: thunk_FQPgOGQMA_hybOMnoxOMssOzhoIqSWRazTDGKGEzFnkgMkOKReuLRGkQmSORvWLrD
// Entry: 0x71e07670 | Size: 1 bytes
// =========================================================================

int * thunk_FQPgOGQMA_hybOMnoxOMssOzhoIqSWRazTDGKGEzFnkgMkOKReuLRGkQmSORvWLrD
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
// Function: thunk_xBmHYzuhErnbKBxffrkF_YIvz_slRjoLSPUKKAALSTlkrN
// Entry: 0x71e07680 | Size: 1 bytes
// =========================================================================

void thunk_xBmHYzuhErnbKBxffrkF_YIvz_slRjoLSPUKKAALSTlkrN(int param_1,int param_2)

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
// Function: thunk_ocSiFfZiwpDydkgqmjjDIcefRdRFHDjzUthsXycTMRTxcVJUugCQqhdPuiBIxplVvdBOoQicVIJAGCkzehHqQhfKHTQBtNwRlYTCfNTkZx
// Entry: 0x71e07690 | Size: 1 bytes
// =========================================================================

void thunk_ocSiFfZiwpDydkgqmjjDIcefRdRFHDjzUthsXycTMRTxcVJUugCQqhdPuiBIxplVvdBOoQicVIJAGCkzehHqQhfKHTQBtNwRlYTCfNTkZx
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
// Function: thunk_zbgFnUCZUaHpoD_mmKeHdlFJADyNvLCzejQWExTrOchgVvIuECaXJFWIvGrszNDGezdMPSWN
// Entry: 0x71e076a0 | Size: 1 bytes
// =========================================================================

void thunk_zbgFnUCZUaHpoD_mmKeHdlFJADyNvLCzejQWExTrOchgVvIuECaXJFWIvGrszNDGezdMPSWN
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
// Function: thunk_FRQkeDBdzzDDpgcCCnuPbAhrTCxFVhiqibaXnfcdTOeJImcnVsmNZqdgUZhxARvpcAsJYDlYcKGpltBMsJmYVRjzicqJGPKV
// Entry: 0x71e076b0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_FRQkeDBdzzDDpgcCCnuPbAhrTCxFVhiqibaXnfcdTOeJImcnVsmNZqdgUZhxARvpcAsJYDlYcKGpltBMsJmYVRjzicqJGPKV
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
// Function: thunk_prqCeFJdLSQGMvtRZPrgfMjYbsMcFWkIgzjYTsYxXR
// Entry: 0x71e076c0 | Size: 1 bytes
// =========================================================================

int thunk_prqCeFJdLSQGMvtRZPrgfMjYbsMcFWkIgzjYTsYxXR(int param_1)

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
// Function: thunk_kohdXltvbY_VxaQGDzNppSjMKMXvWdAofwrLjrjSIUHt_xICsjSigJQAyLBcNKoNIbINgnawsBCGkaghyAt
// Entry: 0x71e076d0 | Size: 1 bytes
// =========================================================================

void thunk_kohdXltvbY_VxaQGDzNppSjMKMXvWdAofwrLjrjSIUHt_xICsjSigJQAyLBcNKoNIbINgnawsBCGkaghyAt
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
// Function: thunk_jgJbDO_ijLJTaUKcoD_whTqKFPgikTBeIxb
// Entry: 0x71e076e0 | Size: 1 bytes
// =========================================================================

int * thunk_jgJbDO_ijLJTaUKcoD_whTqKFPgikTBeIxb(int *param_1,int param_2,int param_3)

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
// Function: thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ
// Entry: 0x71e076f0 | Size: 1 bytes
// =========================================================================

int thunk_qydPZckAZqkXjlAvcfKLGkrzRQrTfHvpyZ(int param_1)

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
// Function: thunk__JEw_wgRObhcolESu_YjCjBcUtMsqLIOfQWdnzhzaNipShcGuDTtNwRNpF
// Entry: 0x71e07700 | Size: 1 bytes
// =========================================================================

void thunk__JEw_wgRObhcolESu_YjCjBcUtMsqLIOfQWdnzhzaNipShcGuDTtNwRNpF(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// =========================================================================
// Function: thunk_myLDmUWtsZjKyVRTYoXhi_YWZcVmlqmIaWSUTCvYSlBPsbBCHtYmYiXSikKTtOJhaFXbUmQDkNsZPvqrezGvHhWyceumTxuMtkWfinEiEItTLzMxdAJyopXlnJHdcjbcIEPD
// Entry: 0x71e07710 | Size: 1 bytes
// =========================================================================

bool thunk_myLDmUWtsZjKyVRTYoXhi_YWZcVmlqmIaWSUTCvYSlBPsbBCHtYmYiXSikKTtOJhaFXbUmQDkNsZPvqrezGvHhWyceumTxuMtkWfinEiEItTLzMxdAJyopXlnJHdcjbcIEPD
               (char *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  int *piVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  
  if (*param_1 == '\0') {
    return false;
  }
  piVar6 = (int *)*param_2;
  bVar2 = param_1[0x18];
  if ((1 < (uint)((piVar6[1] - *piVar6 >> 2) * -0x55555555)) && ((int *)param_2[1] != piVar6)) {
    uVar10 = 0;
    uVar4 = (param_2[1] - (int)piVar6 >> 2) * -0x55555555;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    do {
      piVar12 = (int *)piVar6[uVar10 * 3];
      pfVar15 = (float *)*piVar12;
      if ((float *)piVar12[1] != pfVar15) {
        pfVar13 = (float *)piVar12[3];
        uVar7 = piVar12[1] - (int)pfVar15 >> 2;
        uVar8 = 1;
        if (1 < uVar7) {
          uVar8 = uVar7;
        }
        do {
          if (*(float *)(param_1 + 4) < ABS(*pfVar15 - *pfVar13)) {
            uVar4 = 0;
            bVar5 = 1;
            iVar14 = 0;
            uVar10 = *(uint *)(param_1 + 0x28) + 1;
            iVar16 = *(int *)(param_1 + 0x2c) + (uint)(0xfffffffe < *(uint *)(param_1 + 0x28));
            *(uint *)(param_1 + 0x28) = uVar10;
            *(int *)(param_1 + 0x2c) = iVar16;
            goto LAB_71ab91b0;
          }
          pfVar15 = pfVar15 + 1;
          pfVar13 = pfVar13 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4);
  }
  uVar7 = *(uint *)(param_1 + 0x20);
  uVar10 = 0;
  iVar16 = 0;
  bVar5 = 0;
  uVar4 = uVar7 + 1;
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  iVar14 = *(int *)(param_1 + 0x24) + (uint)(0xfffffffe < uVar7);
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
LAB_71ab91b0:
  uVar7 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x20) = uVar4;
  *(int *)(param_1 + 0x24) = iVar14;
  iVar1 = (int)uVar7 >> 0x1f;
  bVar3 = bVar2;
  if ((int)(iVar1 - (iVar16 + (uint)(uVar7 < uVar10))) < 0 !=
      (SBORROW4(iVar1,iVar16) != SBORROW4(iVar1 - iVar16,(uint)(uVar7 < uVar10)))) {
    bVar3 = 1;
    param_1[0x18] = '\x01';
  }
  if ((param_1[0xc] == '\0') ||
     (uVar10 = *(uint *)(param_1 + 8), iVar16 = (int)uVar10 >> 0x1f,
     (int)(iVar14 - (iVar16 + (uint)(uVar4 < uVar10))) < 0 !=
     (SBORROW4(iVar14,iVar16) != SBORROW4(iVar14 - iVar16,(uint)(uVar4 < uVar10))))) {
    bVar11 = bVar3 ^ 1;
  }
  else {
    bVar3 = 0;
    bVar11 = 1;
    param_1[0x18] = '\0';
  }
  puVar9 = *(uint **)(param_1 + 0x14);
  param_1[0x19] = bVar5 & bVar11;
  if (puVar9 != (uint *)0x0) {
    uVar10 = *puVar9;
    uVar4 = uVar10 + 1;
    *puVar9 = uVar4;
    if (bVar11 == 0) {
      *(undefined1 *)(puVar9 + 2) = 1;
      puVar9[1] = puVar9[1] + 1;
    }
    if ((0x1f2 < (int)uVar10) && (uVar4 % 1000 == 0)) {
      uVar4 = puVar9[1];
      iVar14 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                         (s_WebRTC_Audio_EchoCanceller_Proce_700668ae,0x42,2);
      if (iVar14 != 0) {
        thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar14,499 < (int)uVar4);
      }
      bVar3 = param_1[0x18];
      puVar9[1] = 0;
    }
  }
  return bVar2 != bVar3;
}


// =========================================================================
// Function: thunk_HDnzFbsJfuZg__SewAdAZbMeUqKGKfRy_RsMdtZpJKyOBiWKoPJoopgXeQ
// Entry: 0x71e07720 | Size: 1 bytes
// =========================================================================

int * thunk_HDnzFbsJfuZg__SewAdAZbMeUqKGKfRy_RsMdtZpJKyOBiWKoPJoopgXeQ(int *param_1)

{
  int iVar1;
  
  if ((499 < *param_1) &&
     (iVar1 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                        (s_WebRTC_Audio_EchoCanceller_Persi_70061ec7,0x44,2), iVar1 != 0)) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar1,(char)param_1[2]);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_MKXVTPIjygcugHbgsBvpcjsEYzZuFITtiKkBeOqEwjWydfU
// Entry: 0x71e07730 | Size: 1 bytes
// =========================================================================

void thunk_MKXVTPIjygcugHbgsBvpcjsEYzZuFITtiKkBeOqEwjWydfU
               (byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5,float param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_4;
  *param_1 = (byte)param_2;
  if (param_5 < 1) {
    param_1[8] = 0;
  }
  else {
    *(int *)(param_1 + 8) = param_5 * 100;
  }
  uVar1 = 0;
  param_1[0xc] = param_5 >= 1;
  *(int *)(param_1 + 0x10) = (int)(param_6 * 100.0);
  if ((1 < param_3) && (param_2 != 0)) {
    uVar1 = thunk_MwhHq(0xc);
    thunk__JEw_wgRObhcolESu_YjCjBcUtMsqLIOfQWdnzhzaNipShcGuDTtNwRNpF();
  }
  param_1[0x19] = 0;
  param_1[0x18] = 1 < param_3 & ((byte)param_2 ^ 1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: thunk_SXsPkZFPnqQKIKbSLOeXkyYZRPZmzSTiJIclVPwFirsKiZK_eGinXZtqOzLgVpAyAZHab_bNdvhHCFZAMEGbm
// Entry: 0x71e07740 | Size: 1 bytes
// =========================================================================

void thunk_SXsPkZFPnqQKIKbSLOeXkyYZRPZmzSTiJIclVPwFirsKiZK_eGinXZtqOzLgVpAyAZHab_bNdvhHCFZAMEGbm
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
// Function: thunk_ZDVIceFAmDegycxfAzxqymEudEtwBAZGiUhrxulEhnxIIN__mBVUAohjzQpQBXtmZASPCMmjyKJgqoNjQvgQPYZOxCJBsg_FEJSykUOWV_IEZsPHqJBJAX_mUnZGSOOctSxZ_kxcBHffjgvqviGVhksIyshQpZEDgxPpNdy
// Entry: 0x71e07750 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_ZDVIceFAmDegycxfAzxqymEudEtwBAZGiUhrxulEhnxIIN__mBVUAohjzQpQBXtmZASPCMmjyKJgqoNjQvgQPYZOxCJBsg_FEJSykUOWV_IEZsPHqJBJAX_mUnZGSOOctSxZ_kxcBHffjgvqviGVhksIyshQpZEDgxPpNdy
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
// Function: thunk_Lyy_BwyTBJxJLWpRikiKnUkA_GgTXpUSSjrQAAvMnxWPZQnVOQyD_KZzFHy_MEQqyZOVJZJHEnovizzBPwfXfexViVRvSsAo
// Entry: 0x71e07760 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_Lyy_BwyTBJxJLWpRikiKnUkA_GgTXpUSSjrQAAvMnxWPZQnVOQyD_KZzFHy_MEQqyZOVJZJHEnovizzBPwfXfexViVRvSsAo
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
// Function: thunk_nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw
// Entry: 0x71e07770 | Size: 1 bytes
// =========================================================================

int * thunk_nNKgEaqmfUUeFDWDhbzbRKuxoIxbGrCzGBtjLtw(int *param_1)

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
// Function: thunk_KPTeFpXzTEBlZDvmtiZOdhCWfQvMvLJqTbTsalyyxHJqlXEBqV_IIMFxviotGceJim
// Entry: 0x71e07780 | Size: 1 bytes
// =========================================================================

void thunk_KPTeFpXzTEBlZDvmtiZOdhCWfQvMvLJqTbTsalyyxHJqlXEBqV_IIMFxviotGceJim
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
// Function: thunk_PuKPdWqkkGQC_ShNJSneXkuMeZnMwphdxtvFosppPDsLdZkkzEcLNhbHOzSsHYZfkFvBnFk
// Entry: 0x71e07790 | Size: 1 bytes
// =========================================================================

void thunk_PuKPdWqkkGQC_ShNJSneXkuMeZnMwphdxtvFosppPDsLdZkkzEcLNhbHOzSsHYZfkFvBnFk
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
// Function: thunk_gtHBzTIpOHpXC_dpUUIKpgNgwIiDyGZAkJpooGkXKMgTrPqnLTFiRZgFtH_IOcolmYSjQNcfImBAzrCjS
// Entry: 0x71e077a0 | Size: 1 bytes
// =========================================================================

void thunk_gtHBzTIpOHpXC_dpUUIKpgNgwIiDyGZAkJpooGkXKMgTrPqnLTFiRZgFtH_IOcolmYSjQNcfImBAzrCjS
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


// =========================================================================
// Function: thunk_UNWEsKyMSjcdKAz_lJTFjtctZdFy
// Entry: 0x71e077b0 | Size: 1 bytes
// =========================================================================

void thunk_UNWEsKyMSjcdKAz_lJTFjtctZdFy(void)

{
  return;
}


// =========================================================================
// Function: thunk_AflZVVREJqLpCfKEurMokXqleULsmOZkpQYBhtytxZaZdHTWzmBmrSAmNnMLjaHbYOn
// Entry: 0x71e077c0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_AflZVVREJqLpCfKEurMokXqleULsmOZkpQYBhtytxZaZdHTWzmBmrSAmNnMLjaHbYOn
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
// Function: thunk_D_KWRtYnPhUnVGuoTmDgYfGQJYtSweXBaDDMjIcTopRrVuqctEIFxo_NVzqxC_dncSOgAyz
// Entry: 0x71e077d0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_D_KWRtYnPhUnVGuoTmDgYfGQJYtSweXBaDDMjIcTopRrVuqctEIFxo_NVzqxC_dncSOgAyz
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
// Function: thunk_tfsohpdgPEonQNMGGbDAVXMyDrFIXZsuwiXXfVxWvFZwiCVjtAFTNyWmaCikorZSgc_vFJuLgnB_zeFvniDurPHTyPysLHzyZrVFPNjL
// Entry: 0x71e077e0 | Size: 1 bytes
// =========================================================================

void thunk_tfsohpdgPEonQNMGGbDAVXMyDrFIXZsuwiXXfVxWvFZwiCVjtAFTNyWmaCikorZSgc_vFJuLgnB_zeFvniDurPHTyPysLHzyZrVFPNjL
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
// Function: thunk_xrBxGjWjvDGzfdgEsEIsSfUmkyHhjhKvDHIQqZotWGLG
// Entry: 0x71e077f0 | Size: 1 bytes
// =========================================================================

void thunk_xrBxGjWjvDGzfdgEsEIsSfUmkyHhjhKvDHIQqZotWGLG(undefined4 *param_1)

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
// Function: thunk_LfvVuxsosDxKjitHFLDCo_SWTicrIKazjeHWGxrpYc_xHTpvGRuLIm_xxMUzBczhwIRvHYmFZtIkgnhWjXtPN
// Entry: 0x71e07800 | Size: 1 bytes
// =========================================================================

void thunk_LfvVuxsosDxKjitHFLDCo_SWTicrIKazjeHWGxrpYc_xHTpvGRuLIm_xxMUzBczhwIRvHYmFZtIkgnhWjXtPN
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
// Function: thunk_loPDGD_pTwYSaiIbtDEINMSsNDaupSxJvfFWonVE_iZbtIqHxeKInivNbnxKVkKKSDlhIZXgZrpTgtdKXijDoEEclF
// Entry: 0x71e07810 | Size: 1 bytes
// =========================================================================

void thunk_loPDGD_pTwYSaiIbtDEINMSsNDaupSxJvfFWonVE_iZbtIqHxeKInivNbnxKVkKKSDlhIZXgZrpTgtdKXijDoEEclF
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
// Function: thunk_oVjIZfW_TimdNILANMwIOoSiePQUoGUlOMhu_vGLlNSOfHQVHIfcxYXmg_lVlIt
// Entry: 0x71e07820 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_oVjIZfW_TimdNILANMwIOoSiePQUoGUlOMhu_vGLlNSOfHQVHIfcxYXmg_lVlIt
          (undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x41) = 0;
  *param_1 = uVar1;
  imp___aeabi_memclr4(param_1 + 1,0xfd);
  return param_1;
}


// =========================================================================
// Function: thunk_RyTOGLVyGwdoPVoX_pfjMNygevyHBPFGeQAK
// Entry: 0x71e07830 | Size: 1 bytes
// =========================================================================

void thunk_RyTOGLVyGwdoPVoX_pfjMNygevyHBPFGeQAK(void)

{
  return;
}


// =========================================================================
// Function: thunk_KhWECBd_ivBYrZ_ojdajfMyRWuhSwFGFDipmjAzCj
// Entry: 0x71e07840 | Size: 1 bytes
// =========================================================================

void thunk_KhWECBd_ivBYrZ_ojdajfMyRWuhSwFGFDipmjAzCj(int param_1)

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
// Function: thunk_fDjvcuDHaMRRG_iRiGXjRUNIiwESMRvByCFUFlHKlVbVGdmoctCkUjetvvEfdrEIBWKlUCbCfsDDLZjTndhWaJNiyCUOejOeya_wbZAZijxtfTPitSkZLHEGyLCLETcCUSPAZWCtndEgRHAJTTpOhzMFOTv
// Entry: 0x71e07850 | Size: 1 bytes
// =========================================================================

void thunk_fDjvcuDHaMRRG_iRiGXjRUNIiwESMRvByCFUFlHKlVbVGdmoctCkUjetvvEfdrEIBWKlUCbCfsDDLZjTndhWaJNiyCUOejOeya_wbZAZijxtfTPitSkZLHEGyLCLETcCUSPAZWCtndEgRHAJTTpOhzMFOTv
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
// Function: thunk_OYpQsYEketTyAJYnVgWYSTzGBiuuCga_NtQYcTrTeaEUXvuyrMFKrpGnzFHmzhnlDPoLaVyaeCEjwGZTsusGEPo_zQClODbMcJhUv
// Entry: 0x71e07860 | Size: 1 bytes
// =========================================================================

void thunk_OYpQsYEketTyAJYnVgWYSTzGBiuuCga_NtQYcTrTeaEUXvuyrMFKrpGnzFHmzhnlDPoLaVyaeCEjwGZTsusGEPo_zQClODbMcJhUv
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
// Function: thunk_xzopVLqdOJyLnOsEoaKsPERNdoShYQPF_GpYvl_qz_qDvekvayNunGB_iznIgSsAA
// Entry: 0x71e07870 | Size: 1 bytes
// =========================================================================

int thunk_xzopVLqdOJyLnOsEoaKsPERNdoShYQPF_GpYvl_qz_qDvekvayNunGB_iznIgSsAA
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
// Function: thunk_RjNVPxRlWUWARDPucTXBEbrBUeOfn_TnKlOzn
// Entry: 0x71e07880 | Size: 1 bytes
// =========================================================================

int thunk_RjNVPxRlWUWARDPucTXBEbrBUeOfn_TnKlOzn(int param_1)

{
  thunk_HzTCbQ_MlTYbf_sKaSYhtxHzrpp(param_1 + 0x404);
  return param_1;
}


// =========================================================================
// Function: thunk_naPpacaNQfngKHRiEsFjHwrEnfBkNDtIRx_rXFpNnmHOSsgCMGjKrTwmktjpjCuZ
// Entry: 0x71e07890 | Size: 1 bytes
// =========================================================================

int * thunk_naPpacaNQfngKHRiEsFjHwrEnfBkNDtIRx_rXFpNnmHOSsgCMGjKrTwmktjpjCuZ
                (int *param_1,int param_2)

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
// Function: thunk_SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW
// Entry: 0x71e078a0 | Size: 1 bytes
// =========================================================================

int * thunk_SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW(int *param_1)

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
// Function: thunk_sluaNwWXVwOKnSANccQoMKVZ_vdWMLEEcB_FTNAZXYDuBhlNMutmPJMDUmMEYZcxpXtqOaKAXJhJnoa_EsHmuCpHGXDlflZI
// Entry: 0x71e078b0 | Size: 1 bytes
// =========================================================================

void thunk_sluaNwWXVwOKnSANccQoMKVZ_vdWMLEEcB_FTNAZXYDuBhlNMutmPJMDUmMEYZcxpXtqOaKAXJhJnoa_EsHmuCpHGXDlflZI
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
// Function: thunk_iGzFhOkdncpBDw_AiKMwZJXTBXHBjw_oxSvUzVsXCJpkgyhzABZuxBFHVkehFGdm_QeTY_wmYRWB
// Entry: 0x71e078c0 | Size: 1 bytes
// =========================================================================

void thunk_iGzFhOkdncpBDw_AiKMwZJXTBXHBjw_oxSvUzVsXCJpkgyhzABZuxBFHVkehFGdm_QeTY_wmYRWB
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
  uint uVar14;
  uint in_fpscr;
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
// Function: thunk_bPbkb_hbBgWClNGNKWfQhKeTuJzyRKyfGtKCpgmYqdjqofMKoBUpqFpvXUjhYwXhyQPXLsThZpGPF
// Entry: 0x71e078d0 | Size: 1 bytes
// =========================================================================

void thunk_bPbkb_hbBgWClNGNKWfQhKeTuJzyRKyfGtKCpgmYqdjqofMKoBUpqFpvXUjhYwXhyQPXLsThZpGPF
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
  uint uVar15;
  uint in_fpscr;
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
// Function: thunk_lRWkcdNIvAQaKotyGqdFEVgOsGXRLjdDFSdSaBWZrGMXpfkerHnLysfdRE_xISQIgGBXTQm
// Entry: 0x71e078e0 | Size: 1 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

int thunk_lRWkcdNIvAQaKotyGqdFEVgOsGXRLjdDFSdSaBWZrGMXpfkerHnLysfdRE_xISQIgGBXTQm(int *param_1)

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
// Function: thunk_MErBEtbJNrqyguzWgJutnXZnCDjazIhNTMqQykQXdPataXkQxliezYOEoFo
// Entry: 0x71e078f0 | Size: 1 bytes
// =========================================================================

void thunk_MErBEtbJNrqyguzWgJutnXZnCDjazIhNTMqQykQXdPataXkQxliezYOEoFo(void)

{
  return;
}


// =========================================================================
// Function: thunk_gzQXc_SROWZQnILOrRhduYawhLhryPskpOWOOsZYhXmsgLDVaiBCZjZFJyiBQcg
// Entry: 0x71e07900 | Size: 1 bytes
// =========================================================================

int * thunk_gzQXc_SROWZQnILOrRhduYawhLhryPskpOWOOsZYhXmsgLDVaiBCZjZFJyiBQcg
                (int *param_1,int param_2)

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
// Function: thunk_czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL
// Entry: 0x71e07910 | Size: 1 bytes
// =========================================================================

int thunk_czvtucQHRxRQrJEFEFFJNofstXzBvnbQXDeL(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58);
    thunk_qNQrlu();
  }
  thunk_SvJMkQSapuVtntt_yyZIbeOatS_JiKYiv_TaoKKPknqILCJadDXsGImWpafjkvyW(param_1 + 0x20);
  return param_1;
}


// =========================================================================
// Function: thunk_UtozAWKZSlVMdgCWzJYsPWOQkQocCWCgkPQyBGUpBYOXNpXaKMpZpjxOzsBUwQPCNxIFpYSPEMY_qOwdQNFZ_GRlpnsOYyxtlqWzknunjFrQelbYEKvz_dQcq_Gsw
// Entry: 0x71e07920 | Size: 1 bytes
// =========================================================================

void thunk_UtozAWKZSlVMdgCWzJYsPWOQkQocCWCgkPQyBGUpBYOXNpXaKMpZpjxOzsBUwQPCNxIFpYSPEMY_qOwdQNFZ_GRlpnsOYyxtlqWzknunjFrQelbYEKvz_dQcq_Gsw
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
// Function: thunk_TQVjCvuA_VgmDcklQogRlTZtcstxBHfNXaNPCCyhZxOkBF_TadbyIVAiUQKedNWf_NZzoIcIwqox_lDjEUyGMhaEdQPZZDfsJoMETyEUrR
// Entry: 0x71e07930 | Size: 1 bytes
// =========================================================================

void thunk_TQVjCvuA_VgmDcklQogRlTZtcstxBHfNXaNPCCyhZxOkBF_TadbyIVAiUQKedNWf_NZzoIcIwqox_lDjEUyGMhaEdQPZZDfsJoMETyEUrR
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
// Function: thunk_XVtKkOuvyItSHQjSlFTRdSQbdwJcUdoAuulVKVI
// Entry: 0x71e07940 | Size: 1 bytes
// =========================================================================

undefined1 * thunk_XVtKkOuvyItSHQjSlFTRdSQbdwJcUdoAuulVKVI(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  imp___aeabi_memclr4(param_1 + 4,0x108);
  return param_1;
}


// =========================================================================
// Function: thunk_BVPegXGQIImKqmKuYgLqcaUQ_lXTlLdYBMjCprM
// Entry: 0x71e07950 | Size: 1 bytes
// =========================================================================

void thunk_BVPegXGQIImKqmKuYgLqcaUQ_lXTlLdYBMjCprM(void)

{
  return;
}


// =========================================================================
// Function: thunk_hTHfSsOUvobvPQbFCCRbLUOIvJggpbY
// Entry: 0x71e07960 | Size: 1 bytes
// =========================================================================

void thunk_hTHfSsOUvobvPQbFCCRbLUOIvJggpbY(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x104);
  return;
}


// =========================================================================
// Function: thunk_uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
// Entry: 0x71e07970 | Size: 1 bytes
// =========================================================================

void thunk_uMUmuyndPsjxXcBjoHdVQlpGRCnGqVIFkTqXfdEQHiQhRgPmIsNiSljNMWDQhQRWLhemqrJJuvFetUEdo
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
// Function: thunk_FxNfTSfjdXhOvh_MVCwRwyKfMsUsXuodkoooTTturkQsZTXUMRzKfgBi_NKOqjSAcNCYOg
// Entry: 0x71e07980 | Size: 1 bytes
// =========================================================================

void thunk_FxNfTSfjdXhOvh_MVCwRwyKfMsUsXuodkoooTTturkQsZTXUMRzKfgBi_NKOqjSAcNCYOg
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
// Function: thunk_JRICtcsojNxxBUfeyMHGIjMRFSz
// Entry: 0x71e07990 | Size: 1 bytes
// =========================================================================

undefined4 thunk_JRICtcsojNxxBUfeyMHGIjMRFSz(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x104);
  return param_1;
}


// =========================================================================
// Function: thunk_HzTCbQ_MlTYbf_sKaSYhtxHzrpp
// Entry: 0x71e079a0 | Size: 1 bytes
// =========================================================================

void thunk_HzTCbQ_MlTYbf_sKaSYhtxHzrpp(void)

{
  return;
}


// =========================================================================
// Function: thunk_VoeHudRPmGpQAdyifJgQqlFlvDZMCmFkb_PExTuFJtQDGmikpEjVVmoynhIBkzJPMBEUQxcEdcNlTfgRIcqSrzEYVxmM_nsjSRZtExHUFsJmnuVTurkHz_slQwhBSWoLwli_FWXjNQqZhsuFktKdozdMyXAUXUoLaBFJoPUGuKKCUAzKPzLzcftxblf_ClVGqzzJqVXJyDYSPGQhjlTwDrYrWTUxSdCUxpf
// Entry: 0x71e079b0 | Size: 1 bytes
// =========================================================================

void thunk_VoeHudRPmGpQAdyifJgQqlFlvDZMCmFkb_PExTuFJtQDGmikpEjVVmoynhIBkzJPMBEUQxcEdcNlTfgRIcqSrzEYVxmM_nsjSRZtExHUFsJmnuVTurkHz_slQwhBSWoLwli_FWXjNQqZhsuFktKdozdMyXAUXUoLaBFJoPUGuKKCUAzKPzLzcftxblf_ClVGqzzJqVXJyDYSPGQhjlTwDrYrWTUxSdCUxpf
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
// Function: thunk_tassuqYVoIYaiOVrkCKhoZyyLMwTVDFkyGYMmvrZvKUSMjffEmTyvnQeDbNJzItv
// Entry: 0x71e079c0 | Size: 1 bytes
// =========================================================================

int * thunk_tassuqYVoIYaiOVrkCKhoZyyLMwTVDFkyGYMmvrZvKUSMjffEmTyvnQeDbNJzItv
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
// Function: thunk_OXcrwpxiEuirDGazUCDGjicBiKQRzoT_pWlD
// Entry: 0x71e079d0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_OXcrwpxiEuirDGazUCDGjicBiKQRzoT_pWlD(undefined4 *param_1)

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
// Function: thunk_WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia
// Entry: 0x71e079e0 | Size: 1 bytes
// =========================================================================

void thunk_WeCQPVWDCinXxMptBxEdKRYeGpWVvCHlSlMApMpSBpamSyia(undefined4 *param_1)

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
// Function: thunk_TqNXHYrF_vMIrYHwkanazXguSfDpqZfRzZaSqHpJOEFkSzwNrVbqTrqHFzwEGnxXQSyaCTUUuFLmquGlVZ_cwBVeUFqXwIevIQTgvzjxynImFXX_DFYieqTGjCeKiISIsQGKxggEWcvlPqqobcdcZkaGLZttKZPWmZdpxLAptrFaREJldlZXELLQpFllAypcjcoUhFEQWLPxSrZsLQYzkE
// Entry: 0x71e079f0 | Size: 1 bytes
// =========================================================================

void thunk_TqNXHYrF_vMIrYHwkanazXguSfDpqZfRzZaSqHpJOEFkSzwNrVbqTrqHFzwEGnxXQSyaCTUUuFLmquGlVZ_cwBVeUFqXwIevIQTgvzjxynImFXX_DFYieqTGjCeKiISIsQGKxggEWcvlPqqobcdcZkaGLZttKZPWmZdpxLAptrFaREJldlZXELLQpFllAypcjcoUhFEQWLPxSrZsLQYzkE
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
// Function: thunk_zzbXSDChGDqdLodnWyfsLmmvtmypxkXLsPKfFXhDqGZbIrcXuwOqYcwALufvPnKnzvJEMzftSNIhNkpPjN_EDqooGdsFzXHkcOu_PkRoIwwezlsnAUIqHsZBANnuzEJeBc_KFRuycSgrBnhPiaXKQPlzZ_sjhxJdLGeWyJEEqNkhfiaSEIOtxAkW
// Entry: 0x71e07a00 | Size: 1 bytes
// =========================================================================

void thunk_zzbXSDChGDqdLodnWyfsLmmvtmypxkXLsPKfFXhDqGZbIrcXuwOqYcwALufvPnKnzvJEMzftSNIhNkpPjN_EDqooGdsFzXHkcOu_PkRoIwwezlsnAUIqHsZBANnuzEJeBc_KFRuycSgrBnhPiaXKQPlzZ_sjhxJdLGeWyJEEqNkhfiaSEIOtxAkW
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
// Function: thunk_nGEXxhSwgJqhcuVmvELbuNEcoWmecbayuqjwWaATLeDKURkfmPQXPxuOh_mJxIOowbVOTUrgA_HvKKEZ_hAkHwBKXrrDjiHxqLDnD_KgwqXjHupcrfFaGxpTnvVY_QCHMriUvwLJxaqydWNHXQsAaSBkGvUajBjOUGCViadAVR
// Entry: 0x71e07a10 | Size: 1 bytes
// =========================================================================

void thunk_nGEXxhSwgJqhcuVmvELbuNEcoWmecbayuqjwWaATLeDKURkfmPQXPxuOh_mJxIOowbVOTUrgA_HvKKEZ_hAkHwBKXrrDjiHxqLDnD_KgwqXjHupcrfFaGxpTnvVY_QCHMriUvwLJxaqydWNHXQsAaSBkGvUajBjOUGCViadAVR
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
// Function: thunk_PLHwMbWvWiDzFHKKwgflkGjXUPmrpNmrWozWUdJBQCcbJkVuKQIhjDK_ZqfzwBLBTbWYWYtKmYDWvKTMNjvzlkcascELtnlmIZvtJEXnQQfVWFiDEPyEHXY
// Entry: 0x71e07a20 | Size: 1 bytes
// =========================================================================

void thunk_PLHwMbWvWiDzFHKKwgflkGjXUPmrpNmrWozWUdJBQCcbJkVuKQIhjDK_ZqfzwBLBTbWYWYtKmYDWvKTMNjvzlkcascELtnlmIZvtJEXnQQfVWFiDEPyEHXY
               (void)

{
  return;
}


// =========================================================================
// Function: thunk_gq__MYXoHKmFtQZVnfLNdnSSCtYjNHMm_EaoQryhZDfYQvSAYobBjfGlcRkIoWMjrXPzKzc_
// Entry: 0x71e07a30 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 *
thunk_gq__MYXoHKmFtQZVnfLNdnSSCtYjNHMm_EaoQryhZDfYQvSAYobBjfGlcRkIoWMjrXPzKzc_
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
// Function: thunk_AcNvTgbY_jAvWZjKmVXYTpRALvrXIeDMqWDtyZYmsjjl
// Entry: 0x71e07a40 | Size: 1 bytes
// =========================================================================

int thunk_AcNvTgbY_jAvWZjKmVXYTpRALvrXIeDMqWDtyZYmsjjl(int param_1)

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
// Function: thunk_jKXildpFEQbiOaiYZFUjIVbrreqBhhi
// Entry: 0x71e07a50 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_jKXildpFEQbiOaiYZFUjIVbrreqBhhi(undefined4 *param_1,undefined4 param_2,uint param_3)

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
// Function: thunk_XSlNUnzykXrsPmHUxMIgfRVYuHZRQu
// Entry: 0x71e07a60 | Size: 1 bytes
// =========================================================================

int thunk_XSlNUnzykXrsPmHUxMIgfRVYuHZRQu(int param_1)

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
// Function: thunk_NbqxlDiwJLcJtemYKcrYTlZdAbkyNdVKvCty_RrpRdBUxlSRirvX
// Entry: 0x71e07a70 | Size: 1 bytes
// =========================================================================

void thunk_NbqxlDiwJLcJtemYKcrYTlZdAbkyNdVKvCty_RrpRdBUxlSRirvX(undefined4 *param_1)

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
// Function: thunk_TSCjKufaVHXXrUlDZzMrJYVrZcsJrWyYghHOdkjgE
// Entry: 0x71e07a80 | Size: 1 bytes
// =========================================================================

void thunk_TSCjKufaVHXXrUlDZzMrJYVrZcsJrWyYghHOdkjgE(int param_1)

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
// Function: thunk_GfbvSfhSXbLsgdIFkffBbVWCBbNbroUPsmWEMsNZYYauNreugXPs
// Entry: 0x71e07a90 | Size: 1 bytes
// =========================================================================

void thunk_GfbvSfhSXbLsgdIFkffBbVWCBbNbroUPsmWEMsNZYYauNreugXPs(void)

{
  return;
}


// =========================================================================
// Function: thunk_zikUmutOtsGsvsHmvBZEkFmrNyFgVwGSDi_tVyvHRzSalrscHUVjufkvQCAUfrpmUMWFYvRaVDxEaSiulICLGXLJVYzzOvzsCNOoGmYbmEHy
// Entry: 0x71e07aa0 | Size: 1 bytes
// =========================================================================

void thunk_zikUmutOtsGsvsHmvBZEkFmrNyFgVwGSDi_tVyvHRzSalrscHUVjufkvQCAUfrpmUMWFYvRaVDxEaSiulICLGXLJVYzzOvzsCNOoGmYbmEHy
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
// Function: thunk_TPfMZnmEVbLMpPERujyEnitFOpULrcjGdlFOCYqhgSaHRL_psKdAfTuFdNtO_XMSNvJBSuqyguoiqv_KAcKyayoLqyyNECzOgZzSJbzTqKic
// Entry: 0x71e07ab0 | Size: 1 bytes
// =========================================================================

void thunk_TPfMZnmEVbLMpPERujyEnitFOpULrcjGdlFOCYqhgSaHRL_psKdAfTuFdNtO_XMSNvJBSuqyguoiqv_KAcKyayoLqyyNECzOgZzSJbzTqKic
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
// Function: thunk__YDsBktcqIzqUMwESXAfVLyOEHcLRoqmlxfFZqhQ_iNfCDrENSfIiQV
// Entry: 0x71e07ac0 | Size: 1 bytes
// =========================================================================

bool thunk__YDsBktcqIzqUMwESXAfVLyOEHcLRoqmlxfFZqhQ_iNfCDrENSfIiQV(int param_1)

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
// Function: thunk_TkJEgLJIu_HzfYvmPN_sPwBeWbFKGdtiUanPYDPKDHqLXnijbuidPPAQwuuXlWNFoygbipdafOrNyzaxOPyJYYUhQBzZoJybkwuoscewCbdjbZv
// Entry: 0x71e07ad0 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void thunk_TkJEgLJIu_HzfYvmPN_sPwBeWbFKGdtiUanPYDPKDHqLXnijbuidPPAQwuuXlWNFoygbipdafOrNyzaxOPyJYYUhQBzZoJybkwuoscewCbdjbZv
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
  ulonglong uVar17;
  undefined1 in_q8 [16];
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
  undefined1 auVar36 [16];
  ulonglong uVar37;
  undefined1 in_q15 [16];
  
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
// Function: thunk_HfsqoTYLTFgBnzFkHprDtHFJ_CyGlZmyqoXKuJoQBLpuFfiAmDNjZOzuZTxuZXjjjxVSCIdbmGpEakEpnHpEkxexsMpLM_HlQaBAQJuySmTjXDbXJQukInhqdttNtKaEIWWVfvViQhy
// Entry: 0x71e07ae0 | Size: 1 bytes
// =========================================================================

bool thunk_HfsqoTYLTFgBnzFkHprDtHFJ_CyGlZmyqoXKuJoQBLpuFfiAmDNjZOzuZTxuZXjjjxVSCIdbmGpEakEpnHpEkxexsMpLM_HlQaBAQJuySmTjXDbXJQukInhqdttNtKaEIWWVfvViQhy
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
// Function: thunk_kJyghBFNhpVZUAfvmSSbxIqfPRHQzOIHbEMsANbYYrmihhUSpCQfaOIOVr
// Entry: 0x71e07af0 | Size: 1 bytes
// =========================================================================

bool thunk_kJyghBFNhpVZUAfvmSSbxIqfPRHQzOIHbEMsANbYYrmihhUSpCQfaOIOVr(int param_1)

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
// Function: thunk_pdwvKbZeNAzVLNUaxjFDiozNthykHfDBouJaS
// Entry: 0x71e07b00 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_pdwvKbZeNAzVLNUaxjFDiozNthykHfDBouJaS(undefined4 *param_1)

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
// Function: thunk_QrkklSxNXDxRIpUuiCELNGbXrpiIMKWRbMwkz
// Entry: 0x71e07b10 | Size: 1 bytes
// =========================================================================

int * thunk_QrkklSxNXDxRIpUuiCELNGbXrpiIMKWRbMwkz(int *param_1)

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
// Function: thunk_DpMdufpxjftxnEqPMC_iMqMII_BtefAwakjWbSBYFxIwtQLucpwnEKTB
// Entry: 0x71e07b20 | Size: 1 bytes
// =========================================================================

int * thunk_DpMdufpxjftxnEqPMC_iMqMII_BtefAwakjWbSBYFxIwtQLucpwnEKTB(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
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
// Function: thunk_CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS
// Entry: 0x71e07b30 | Size: 1 bytes
// =========================================================================

void thunk_CBZnSxVyuYWNFXzvHRMngAHbnJaPH_IsybOMALRS(int param_1)

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
// Function: thunk_jjYqyvPKjieAkJxAwjWEmUfVHJIDvSuchXpukAELejRBvqywvfFWykJH
// Entry: 0x71e07b40 | Size: 1 bytes
// =========================================================================

int * thunk_jjYqyvPKjieAkJxAwjWEmUfVHJIDvSuchXpukAELejRBvqywvfFWykJH(int *param_1)

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
// Function: thunk_OUDabdpoM_jZABGzYXYBAMeIrCneLIFzBbVSOTdjtlmEKZXZkGQSVzYubuZrWcKJIBuOQgOonjEkwbXncuqqSbVAyXAZwSHFHmKarEgkXJuoOjceyniIuHAKAUqKBLH_AzeWKbtDqbLIdwXF
// Entry: 0x71e07b50 | Size: 1 bytes
// =========================================================================

void thunk_OUDabdpoM_jZABGzYXYBAMeIrCneLIFzBbVSOTdjtlmEKZXZkGQSVzYubuZrWcKJIBuOQgOonjEkwbXncuqqSbVAyXAZwSHFHmKarEgkXJuoOjceyniIuHAKAUqKBLH_AzeWKbtDqbLIdwXF
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
// Function: thunk_lsxIDR_qoofjFGBdmCUvDDicNYWMklfodPvMVYdDGGAfIvogGPMXcoCUUSCgUShxAKcP_rxd_tG_OwC_DBzWEmdihHAQtqSoUlVveKwFzxGMILPkxCFINkdpWqKHaU_gMmwiKRCXbUGscaxKRIjJyvyeZaaPnzlOrVT
// Entry: 0x71e07b60 | Size: 1 bytes
// =========================================================================

void thunk_lsxIDR_qoofjFGBdmCUvDDicNYWMklfodPvMVYdDGGAfIvogGPMXcoCUUSCgUShxAKcP_rxd_tG_OwC_DBzWEmdihHAQtqSoUlVveKwFzxGMILPkxCFINkdpWqKHaU_gMmwiKRCXbUGscaxKRIjJyvyeZaaPnzlOrVT
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
// Function: thunk_GJsbBhZjazcvuHnULchxAUfIPOUcOXRyZJj_pZhiNJEZukMIkAfVxdrBzUNrARMSWtqFrXdKXoxWWTPNNniPtDh
// Entry: 0x71e07b70 | Size: 1 bytes
// =========================================================================

void thunk_GJsbBhZjazcvuHnULchxAUfIPOUcOXRyZJj_pZhiNJEZukMIkAfVxdrBzUNrARMSWtqFrXdKXoxWWTPNNniPtDh
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
// Function: thunk_rmNoIuHyNvQhGxtEjAZy_KYojUfijNrlNqOVFXSMiTQGjFcxchIQf_LilMPPEoMgCdbxebsq_hywmdbIYOpoDkKJzXoLNDgiHvpBMODvrQtuhgf
// Entry: 0x71e07b80 | Size: 1 bytes
// =========================================================================

void thunk_rmNoIuHyNvQhGxtEjAZy_KYojUfijNrlNqOVFXSMiTQGjFcxchIQf_LilMPPEoMgCdbxebsq_hywmdbIYOpoDkKJzXoLNDgiHvpBMODvrQtuhgf
               (void)

{
  return;
}


// =========================================================================
// Function: thunk_aUGi_eHRMeigxvIwwTIvqlwtDbsLfmhRsCMcyKPoGIbGiBMRCyIfgljPTOBvaK_F
// Entry: 0x71e07b90 | Size: 1 bytes
// =========================================================================

undefined1 *
thunk_aUGi_eHRMeigxvIwwTIvqlwtDbsLfmhRsCMcyKPoGIbGiBMRCyIfgljPTOBvaK_F
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
// Function: thunk_irWpZQQGQerBaYWsLXsrxAFOj_ZBviKGBljg
// Entry: 0x71e07ba0 | Size: 1 bytes
// =========================================================================

int thunk_irWpZQQGQerBaYWsLXsrxAFOj_ZBviKGBljg(int param_1)

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
// Function: thunk_Hyhxp_QHoCptryIqmiIclLCdKFwNNjuCfQqxXmCyKmiLjGTwlsICAXsYhYKGdnJQCLBrazfQmloDd_sQAZoiXttyEAAufgsYvgvThBx
// Entry: 0x71e07bb0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_Hyhxp_QHoCptryIqmiIclLCdKFwNNjuCfQqxXmCyKmiLjGTwlsICAXsYhYKGdnJQCLBrazfQmloDd_sQAZoiXttyEAAufgsYvgvThBx
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
// Function: thunk_MmSDXHiqGLyFpfP_pxTfQf_NCZTXvI_ikZTWWc_agnDlrDObsAgDvHjjRwKuiSeITwbliVKx
// Entry: 0x71e07bc0 | Size: 1 bytes
// =========================================================================

void thunk_MmSDXHiqGLyFpfP_pxTfQf_NCZTXvI_ikZTWWc_agnDlrDObsAgDvHjjRwKuiSeITwbliVKx
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
// Function: thunk_lboVYBSNrlEaXBkdeOoCLeaLjpCYvIADcyEofMWgyl
// Entry: 0x71e07bd0 | Size: 1 bytes
// =========================================================================

void thunk_lboVYBSNrlEaXBkdeOoCLeaLjpCYvIADcyEofMWgyl(int param_1)

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
// Function: thunk__enrS_wyQqKjYqcYFoFNBriLUmsNZhFWYAcBHdkAweXmgqhmOCQaOYetZa_YEfIprieCjCjxZMygqKjUeCOwnADPMBszVhRYbWyVxrvmIRIYzvqvv_oCKejQMON_IYzePSKVsThVhZFtY_TzztmcfgiKgH
// Entry: 0x71e07be0 | Size: 1 bytes
// =========================================================================

void thunk__enrS_wyQqKjYqcYFoFNBriLUmsNZhFWYAcBHdkAweXmgqhmOCQaOYetZa_YEfIprieCjCjxZMygqKjUeCOwnADPMBszVhRYbWyVxrvmIRIYzvqvv_oCKejQMON_IYzePSKVsThVhZFtY_TzztmcfgiKgH
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
  uint uVar22;
  uint in_fpscr;
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
// Function: thunk_xeBuUDWdYwXelGSZwefvuPDACVEnXAiNFOvHrlXKwbIVw_VGRZsWylSzWnyHzYiXzlFaZRBVcsvtbxLWgeYyShNgsdxmYDZtj
// Entry: 0x71e07bf0 | Size: 1 bytes
// =========================================================================

int thunk_xeBuUDWdYwXelGSZwefvuPDACVEnXAiNFOvHrlXKwbIVw_VGRZsWylSzWnyHzYiXzlFaZRBVcsvtbxLWgeYyShNgsdxmYDZtj
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
// Function: thunk_HyYtdMRVlYNYAbgxxATFUszfCB
// Entry: 0x71e07c00 | Size: 1 bytes
// =========================================================================

void thunk_HyYtdMRVlYNYAbgxxATFUszfCB(int param_1)

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
// Function: thunk_T_ByWfdVGQiECDPyoypYTLPIhBgFBwGJEXBelCQ_CPCtOUrELXIzCWVZCqESMrTkATbDZUbEYiuCUrldpGkftNpl_mUUwlLWSSnoz
// Entry: 0x71e07c10 | Size: 1 bytes
// =========================================================================

void thunk_T_ByWfdVGQiECDPyoypYTLPIhBgFBwGJEXBelCQ_CPCtOUrELXIzCWVZCqESMrTkATbDZUbEYiuCUrldpGkftNpl_mUUwlLWSSnoz
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
// Function: thunk_SQDjCSD_ygPuqVWZLrrFCVlaEuCsihFMCKuQOosYGgYYyjQelDcG_MDzoPwE
// Entry: 0x71e07c20 | Size: 1 bytes
// =========================================================================

void thunk_SQDjCSD_ygPuqVWZLrrFCVlaEuCsihFMCKuQOosYGgYYyjQelDcG_MDzoPwE(int *param_1)

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
// Function: thunk_cStjwuWLUjjLxPekJgIFByPbjuFIDSxEmSKBxmDV
// Entry: 0x71e07c30 | Size: 1 bytes
// =========================================================================

int * thunk_cStjwuWLUjjLxPekJgIFByPbjuFIDSxEmSKBxmDV(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *extraout_r2;
  char *extraout_r3;
  int *piVar6;
  byte *unaff_r4;
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
// Function: thunk_ZnlRfgxGcKTQRttmDX_kCmjzPnabWxptlkz_SSytWdPpIBuLgAnYpzkdPYBRvKlFWFZEQioIS
// Entry: 0x71e07c40 | Size: 1 bytes
// =========================================================================

void thunk_ZnlRfgxGcKTQRttmDX_kCmjzPnabWxptlkz_SSytWdPpIBuLgAnYpzkdPYBRvKlFWFZEQioIS
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
// Function: thunk_RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk
// Entry: 0x71e07c50 | Size: 1 bytes
// =========================================================================

void thunk_RNgPeLHCibTkuCTDSRsVuKvnWbkFEbgk(int param_1)

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
// Function: thunk_bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP
// Entry: 0x71e07c60 | Size: 1 bytes
// =========================================================================

void thunk_bQEJVKWhBxC_eKeGreHvVMKH_iHogdKP(void)

{
  return;
}


// =========================================================================
// Function: thunk_NDtqlpEjvdJFwFRYFrjBfWuVRsBafUEnqxPaRrajsRRboLlxFutdGCSpuskkVsejdxsiaEsHcWEQMjtKfbkfLwwIDYBeYbFMCmcJumbOGVaPxKBmecCxEKFESNTu
// Entry: 0x71e07c70 | Size: 1 bytes
// =========================================================================

void thunk_NDtqlpEjvdJFwFRYFrjBfWuVRsBafUEnqxPaRrajsRRboLlxFutdGCSpuskkVsejdxsiaEsHcWEQMjtKfbkfLwwIDYBeYbFMCmcJumbOGVaPxKBmecCxEKFESNTu
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
// Function: thunk_oKtdSRrvSbyEjyQVAzXJQTDNnkkgrCeWEMgRsSA_IafXCedXpllvFacV
// Entry: 0x71e07c80 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_oKtdSRrvSbyEjyQVAzXJQTDNnkkgrCeWEMgRsSA_IafXCedXpllvFacV
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
// Function: thunk_AnPJOzIjJkfSlCMMNoWFqKAYSWghBZlmq
// Entry: 0x71e07c90 | Size: 1 bytes
// =========================================================================

int thunk_AnPJOzIjJkfSlCMMNoWFqKAYSWghBZlmq(int param_1)

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
// Function: thunk_vxTdEU_dI_HhWUjo_AoyemBBsqsk_TsHWp_JphlLeKxntLRnBijTDRlJdvoeyoHALhOGAxbIOltDbfoVEJeShIEcKMnfSzgXysGvWniPYMpfybvnrYstoZRbAUgPqhVamgRVSiny
// Entry: 0x71e07ca0 | Size: 1 bytes
// =========================================================================

float thunk_vxTdEU_dI_HhWUjo_AoyemBBsqsk_TsHWp_JphlLeKxntLRnBijTDRlJdvoeyoHALhOGAxbIOltDbfoVEJeShIEcKMnfSzgXysGvWniPYMpfybvnrYstoZRbAUgPqhVamgRVSiny
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
// Function: thunk_yB_fRJUoszIzbVihrUMjGdcacQadytJKblkOJzXsuvZwCsYGPVwyBFAucGRzLaKCIfyPpZCxieBQbPGpdwIJUTgChHzIxkUQiJCudlPjipnHvXiKxsYoPgKZuw
// Entry: 0x71e07cb0 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_yB_fRJUoszIzbVihrUMjGdcacQadytJKblkOJzXsuvZwCsYGPVwyBFAucGRzLaKCIfyPpZCxieBQbPGpdwIJUTgChHzIxkUQiJCudlPjipnHvXiKxsYoPgKZuw
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
  undefined4 in_s7;
  float fVar286;
  float fVar287;
  float fVar302;
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
  undefined1 in_q2 [16];
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
// Function: thunk_OjCKGdzihOkKfFpsesRpOZjCQl_YRWgyRmIkcZPEPseSznUksCTqBvWwiexl_zImccBF_PHmJMYEEGsSHuvjEulfVHOELLE
// Entry: 0x71e07cc0 | Size: 1 bytes
// =========================================================================

void thunk_OjCKGdzihOkKfFpsesRpOZjCQl_YRWgyRmIkcZPEPseSznUksCTqBvWwiexl_zImccBF_PHmJMYEEGsSHuvjEulfVHOELLE
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
// Function: thunk_kmpumvQJxPyPetfKESfWctkZqCVPiZCpqNSRcVlytIB_LNWoFCFmQPkxCucBXcZlrb_pGjQAeOzlMBNpGulOGRQPWnMRGnRrwfcqQOwuujMeFneTpqyNIIzmvqhmrvCqzwnuoLbWzASapshzsdLOQftvmBobIaZNoe
// Entry: 0x71e07cd0 | Size: 1 bytes
// =========================================================================

void thunk_kmpumvQJxPyPetfKESfWctkZqCVPiZCpqNSRcVlytIB_LNWoFCFmQPkxCucBXcZlrb_pGjQAeOzlMBNpGulOGRQPWnMRGnRrwfcqQOwuujMeFneTpqyNIIzmvqhmrvCqzwnuoLbWzASapshzsdLOQftvmBobIaZNoe
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
// Function: thunk_sTvsKmzcifKgyMLpvppycYJSkAqSaDvmGjXsAhSCPoNmoX
// Entry: 0x71e07ce0 | Size: 1 bytes
// =========================================================================

void thunk_sTvsKmzcifKgyMLpvppycYJSkAqSaDvmGjXsAhSCPoNmoX(int param_1,int param_2)

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
// Function: thunk__ZwqPiYOoVwYczwvpNWCW_KSVeaEUEhmEXp_QGIeOkoGkDkHMstIQNFtQuDNWFueKSeKSqUFSshaCzzHnq
// Entry: 0x71e07cf0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk__ZwqPiYOoVwYczwvpNWCW_KSVeaEUEhmEXp_QGIeOkoGkDkHMstIQNFtQuDNWFueKSeKSqUFSshaCzzHnq
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
// Function: thunk_NokPzhIn_GpCKHdObBTkYoDweJRDabe
// Entry: 0x71e07d00 | Size: 1 bytes
// =========================================================================

int * thunk_NokPzhIn_GpCKHdObBTkYoDweJRDabe(int *param_1)

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
// Function: thunk_ImeRIIBNnIddoQvxbwiJAXtwLCKhiQJRHIvhYjydwpSnnKSVTMnkSMkUKszFasf
// Entry: 0x71e07d10 | Size: 1 bytes
// =========================================================================

void thunk_ImeRIIBNnIddoQvxbwiJAXtwLCKhiQJRHIvhYjydwpSnnKSVTMnkSMkUKszFasf
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
// Function: thunk_NtkpbPFKOKocUbUiLPpBgLxexLeZwlhfppGETLKwwcbisLiTljXoGrvIU
// Entry: 0x71e07d20 | Size: 1 bytes
// =========================================================================

void thunk_NtkpbPFKOKocUbUiLPpBgLxexLeZwlhfppGETLKwwcbisLiTljXoGrvIU
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
// Function: thunk_KoTxjDGupbJmpnlSzNwosxNtqvNwdrCDvZNlhJSmbbsSDKpsyCbWlz
// Entry: 0x71e07d30 | Size: 1 bytes
// =========================================================================

int thunk_KoTxjDGupbJmpnlSzNwosxNtqvNwdrCDvZNlhJSmbbsSDKpsyCbWlz
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
// Function: thunk_uoqaJYIPVTRtdHavCWJkxsejOFmQngZRWZs
// Entry: 0x71e07d40 | Size: 1 bytes
// =========================================================================

int thunk_uoqaJYIPVTRtdHavCWJkxsejOFmQngZRWZs(void)

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
// Function: thunk_peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu
// Entry: 0x71e07d50 | Size: 1 bytes
// =========================================================================

void thunk_peHCauouEzXilWZuNYRIkGsGKgb_bveTKdwQkJEujJRNqu(int param_1)

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
// Function: thunk_nysihijKGeRfckzmOVCDSXsQyHEqlpDrTIypKouoILOSiEzwzIG_AKhQF
// Entry: 0x71e07d60 | Size: 1 bytes
// =========================================================================

void thunk_nysihijKGeRfckzmOVCDSXsQyHEqlpDrTIypKouoILOSiEzwzIG_AKhQF(int param_1,undefined4 param_2)

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
// Function: thunk_yVVFkMGmwhPBuiceYGoAFZNJMGJXaiDsItOWjOmaWTeNLih
// Entry: 0x71e07d70 | Size: 1 bytes
// =========================================================================

undefined4 thunk_yVVFkMGmwhPBuiceYGoAFZNJMGJXaiDsItOWjOmaWTeNLih(undefined4 *param_1,uint param_2)

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
// Function: thunk_SckceUsJuCQIZBAqLOPJJoIQGPNuuCiquG_OZKZaArJAlUCyOUfhGbfhglSYj
// Entry: 0x71e07d80 | Size: 1 bytes
// =========================================================================

undefined4
thunk_SckceUsJuCQIZBAqLOPJJoIQGPNuuCiquG_OZKZaArJAlUCyOUfhGbfhglSYj
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
// Function: thunk_AhJ_TeMMvhwbXjUNIqCgFPWJsPnjSyCigMDEHOaBQQbmqsGCQcHqDNZdI
// Entry: 0x71e07d90 | Size: 1 bytes
// =========================================================================

void thunk_AhJ_TeMMvhwbXjUNIqCgFPWJsPnjSyCigMDEHOaBQQbmqsGCQcHqDNZdI
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
// Function: thunk_TmZHOPIjupcXgPXmBAlMtTYtENeymQLiWvjldieADGXVOTupVJ
// Entry: 0x71e07da0 | Size: 1 bytes
// =========================================================================

int thunk_TmZHOPIjupcXgPXmBAlMtTYtENeymQLiWvjldieADGXVOTupVJ(int param_1)

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
// Function: thunk_kuXYTPXwSvBLqzVbzrQzWfUsUEmv_Ofqk_uScAtCRasbsIwnfoahWeFZ_Ekjw
// Entry: 0x71e07db0 | Size: 1 bytes
// =========================================================================

void thunk_kuXYTPXwSvBLqzVbzrQzWfUsUEmv_Ofqk_uScAtCRasbsIwnfoahWeFZ_Ekjw
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
// Function: thunk_ZT_kCQrnJlODLRTASNSabIupMRgbeZQeFLXLPjbkfcoHwzKAbbMtAdsss
// Entry: 0x71e07dc0 | Size: 1 bytes
// =========================================================================

int thunk_ZT_kCQrnJlODLRTASNSabIupMRgbeZQeFLXLPjbkfcoHwzKAbbMtAdsss(int param_1)

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
// Function: thunk_LxXxGwNkYBemMQuIS
// Entry: 0x71e07dd0 | Size: 1 bytes
// =========================================================================

int thunk_LxXxGwNkYBemMQuIS(void)

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
// Function: thunk_yKVbdqLLmvptx_U
// Entry: 0x71e07de0 | Size: 1 bytes
// =========================================================================

void thunk_yKVbdqLLmvptx_U(int param_1)

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
// Function: thunk_MrEwqHNKuEUnQKU
// Entry: 0x71e07df0 | Size: 1 bytes
// =========================================================================

int * thunk_MrEwqHNKuEUnQKU(int *param_1,int param_2)

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
// Function: thunk_TjVJLy_tJR_YwGg_tZcwj
// Entry: 0x71e07e00 | Size: 1 bytes
// =========================================================================

undefined4 thunk_TjVJLy_tJR_YwGg_tZcwj(int param_1,uint param_2)

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
// Function: thunk_snDZXMFMONwftjnqjVvlqJW
// Entry: 0x71e07e10 | Size: 1 bytes
// =========================================================================

undefined4 thunk_snDZXMFMONwftjnqjVvlqJW(int param_1,int param_2,int param_3)

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
// Function: thunk_UjAzLbHpKTVDVkWeME
// Entry: 0x71e07e20 | Size: 1 bytes
// =========================================================================

undefined4
thunk_UjAzLbHpKTVDVkWeME(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

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
// Function: thunk_gPAGShamUqSgxBOreO
// Entry: 0x71e07e30 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_gPAGShamUqSgxBOreO(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_70b131c8;
  thunk__ei_oGNwPnwrFfpf_tpglHFvLBcYFStXxBeKx(param_1 + 8);
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    thunk_MZrzQnjjCNkPKaXZEPDPvFIVyzevFMeDF();
    thunk_qNQrlu();
  }
  iVar1 = param_1[5];
  param_1[5] = 0;
  if (iVar1 != 0) {
    thunk_MZrzQnjjCNkPKaXZEPDPvFIVyzevFMeDF();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_VpbjVnTGIRBrjNvYPQ
// Entry: 0x71e07e40 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_VpbjVnTGIRBrjNvYPQ(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &DAT_70b131c8;
  uVar2 = thunk_TSkDdXZgQldUgStEWziqRixTYmV(0,0xc0320000);
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[4] = 0xffffffee;
  uVar1 = thunk_qHqYRlOlyOiAbvHtJzZxzIWXMunrhGiFhbZiox(100);
  param_1[5] = uVar1;
  uVar1 = thunk_nEDAmlzXJkeLWtj_mwYjTINzwJsOKbUKkpGVsj();
  param_1[6] = uVar1;
  thunk_PYFhyg_fCqC_XScXITLStrxcKmRbqdfldT_Vj(param_1 + 8);
  return param_1;
}


// =========================================================================
// Function: thunk_atXrDdkiBQkYk_WWzrJTaRxulpnABSeDaDIwwjBGVzZjDofxwjPhIDpjKkSIxjLvhVLGslSzhTYkLu
// Entry: 0x71e07e50 | Size: 1 bytes
// =========================================================================

void thunk_atXrDdkiBQkYk_WWzrJTaRxulpnABSeDaDIwwjBGVzZjDofxwjPhIDpjKkSIxjLvhVLGslSzhTYkLu
               (uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uStack_34;
  
  if ((char)param_1[0xc] != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)((int)param_1 + 0x25) != '\0') {
    uVar5 = param_1[10];
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    if (uVar5 != 0 || *(char *)((int)param_1 + 0x26) != '\0') {
      if (uVar5 < 0x100) {
        uVar3 = *param_1;
        if ((int)uVar5 < (int)uVar3) {
          param_1[10] = uVar3;
          uVar5 = uVar3;
        }
        (**(code **)(*(int *)param_1[2] + 0x10))();
        *(undefined1 *)(param_1 + 0x10) = 1;
        param_1[0xf] = 0;
        *(undefined1 *)((int)param_1 + 0x26) = 0;
        param_1[3] = uVar5;
      }
      else {
        iVar2 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
        if (iVar2 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_70067af6,0xa9b,
                     s__agc__VolumeCallbacks_returned_a_7006b455,uVar5);
        }
      }
    }
  }
  if (param_3 == 0) {
    param_2 = 0;
  }
  (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2],param_2);
  uStack_34 = 0;
  iVar2 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],&uStack_34);
  if (param_5 == '\0') {
    uVar1 = uStack_34;
    if (iVar2 == 0) goto LAB_71a96f6c;
  }
  else if (((char)param_1[0x10] != '\0') || (uVar1 = param_4, (int)param_1[0xf] < 0))
  goto LAB_71a96f6c;
  uStack_34 = uVar1;
  thunk_jAFuBLBaRXUqCCtrJtKWInerYgvdcbva(param_1,uStack_34);
LAB_71a96f6c:
  if ((char)param_1[1] == '\0') {
    uVar5 = param_1[7];
    if (uVar5 != param_1[6]) {
      pfVar4 = (float *)&DAT_71a97020;
      if ((int)uVar5 < (int)param_1[6]) {
        pfVar4 = (float *)&DAT_71a97024;
      }
      fVar7 = *pfVar4 + (float)param_1[8];
      dVar8 = (double)imp_floor(SUB84((double)fVar7 + 0.5,0),
                                (int)((ulonglong)((double)fVar7 + 0.5) >> 0x20));
      param_1[8] = (uint)fVar7;
      uVar3 = (uint)(longlong)dVar8;
      fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      if ((ABS(fVar7 - fVar6) < 0.025) && (uVar5 != uVar3)) {
        param_1[0xb] = uVar3;
        *(undefined1 *)(param_1 + 0xc) = 1;
        param_1[8] = (uint)fVar6;
        param_1[7] = uVar3;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < param_1[0xf]) {
    param_1[0xf] = param_1[0xf] + 1;
  }
  return;
}


// =========================================================================
// Function: thunk_jAFuBLBaRXUqCCtrJtKWInerYgvdcbva
// Entry: 0x71e07e60 | Size: 1 bytes
// =========================================================================

void thunk_jAFuBLBaRXUqCCtrJtKWInerYgvdcbva(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_1[6];
  iVar1 = param_1[5];
  param_1[0xf] = 0;
  iVar2 = param_2 + 2;
  iVar3 = iVar1;
  if (iVar2 < iVar1) {
    iVar3 = iVar2;
  }
  if (param_2 < 1) {
    iVar3 = 2;
  }
  bVar5 = iVar3 == iVar1;
  if (bVar5) {
    iVar1 = iVar1 + -1;
  }
  if ((bVar5 && iVar4 == iVar1) || (iVar3 == 2 && iVar4 == 3)) {
    param_1[6] = iVar3;
  }
  else {
    param_1[6] = iVar4 + (iVar3 - iVar4) / 2;
  }
  iVar4 = iVar2 - iVar3;
  iVar1 = iVar4;
  if (0xe < iVar4) {
    iVar1 = 0xf;
  }
  if (iVar1 < -0xe) {
    iVar1 = -0xf;
  }
  if (iVar2 != iVar3) {
    iVar2 = param_1[3];
    iVar3 = iVar2;
    if (iVar4 < 1) {
      do {
        iVar4 = iVar3;
        if (iVar4 <= *param_1) break;
        iVar3 = iVar4 + -1;
      } while (iVar1 < *(int *)(&DAT_700953e8 + iVar4 * 4) - *(int *)(&DAT_700953e8 + iVar2 * 4));
    }
    else {
      do {
        iVar4 = iVar3;
        if (0xfe < iVar4) break;
        iVar3 = iVar4 + 1;
      } while (*(int *)(&DAT_700953e8 + iVar4 * 4) - *(int *)(&DAT_700953e8 + iVar2 * 4) < iVar1);
    }
    thunk_bkVEtPhgFrywaDJeLUIzLXcPiWxQs(param_1,iVar4);
    if (iVar2 != param_1[3]) {
                    /* WARNING: Could not recover jumptable at 0x71a9722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)param_1[2] + 0x10))();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_bkVEtPhgFrywaDJeLUIzLXcPiWxQs
// Entry: 0x71e07e70 | Size: 1 bytes
// =========================================================================

void thunk_bkVEtPhgFrywaDJeLUIzLXcPiWxQs(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 != 0) {
    if (uVar2 < 0x100) {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((iVar1 + 0x19 < (int)uVar2) || ((int)uVar2 < iVar1 + -0x19)) {
        *(uint *)(param_1 + 0xc) = uVar2;
        if (*(int *)(param_1 + 0x10) < (int)uVar2) {
          fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
          fVar4 = (float)VectorSignedToFloat(0xff - *(int *)(param_1 + 0x38),
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar3 = (float)imp_floorf(((255.0 - fVar3) / fVar4) * 6.0 + 0.5);
          *(uint *)(param_1 + 0x10) = uVar2;
          *(int *)(param_1 + 0x14) = (int)(fVar3 + 12.0);
        }
        (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8));
        *(undefined1 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x10) < param_2) {
        param_2 = *(int *)(param_1 + 0x10);
      }
      if (param_2 != iVar1) {
        *(int *)(param_1 + 0xc) = param_2;
        *(int *)(param_1 + 0x28) = param_2;
      }
    }
    else {
      iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
      if (iVar1 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_70067af6,0x833,
                   s_VolumeCallbacks_returned_an_inva_70062de0,uVar2);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: thunk_kYClKWvSiiSrstxdXyzlxODsqAfvHJUUyhbk
// Entry: 0x71e07e80 | Size: 1 bytes
// =========================================================================

void thunk_kYClKWvSiiSrstxdXyzlxODsqAfvHJUUyhbk(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x10) - param_2;
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(0xff - iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)imp_floorf(((255.0 - fVar3) / fVar4) * 6.0 + 0.5);
  *(int *)(param_1 + 0x10) = iVar2;
  *(int *)(param_1 + 0x14) = (int)(fVar3 + 12.0);
  if (*(char *)(param_1 + 0x34) != '\0') {
    iVar2 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                      (s_WebRTC_Audio_AgcClippingAdjustme_700671e6,0x29,2);
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar2 != 0) {
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj
                (iVar2,iVar1 <= *(int *)(param_1 + 0xc) - param_2);
      iVar1 = *(int *)(param_1 + 0x38);
    }
  }
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    param_2 = *(int *)(param_1 + 0xc) - param_2;
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
    thunk_bkVEtPhgFrywaDJeLUIzLXcPiWxQs(param_1,param_2);
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


// =========================================================================
// Function: thunk_OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
// Entry: 0x71e07e90 | Size: 1 bytes
// =========================================================================

char * thunk_OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
                 (char *param_1,uint param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  char *pcVar20;
  uint uStack_64;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  char acStack_3f [8];
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  uStack_40 = uRam70075bb0;
  uStack_47 = DAT_70075ba8._1_7_;
  uStack_48 = (undefined1)DAT_70075ba8;
  uStack_60 = DAT_70075b90;
  uStack_58 = DAT_70075b98;
  uStack_50 = DAT_70075ba0;
  acStack_3f = s_eriment_70075bb1;
  *param_1 = *param_3;
  uVar5 = imp_strlen(&uStack_60);
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,&uStack_60,uVar5);
  uVar16 = uStack_28;
  bVar1 = abStack_30[0];
  uVar12 = (uint)abStack_30 | 1;
  uVar19 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uStack_2c = (uint)(abStack_30[0] >> 1);
    uVar19 = uVar12;
  }
  uVar17 = uVar19 + uStack_2c;
  uVar6 = uVar19;
  while (((uVar4 = uVar17, 6 < (int)uStack_2c &&
          (uVar6 = imp_memchr(uVar6,0x45,uStack_2c - 6), uVar6 != 0)) &&
         (iVar10 = imp_memcmp(uVar6,s_Enabled_7006820b,7), uVar4 = uVar6, iVar10 != 0))) {
    uVar6 = uVar6 + 1;
    uStack_2c = uVar17 - uVar6;
  }
  if ((bVar1 & 1) != 0) {
    thunk_qNQrlu(uVar16);
  }
  if ((uVar4 == uVar17) || (uVar4 != uVar19)) {
    param_1[8] = '\0';
    param_1[4] = '\0';
  }
  else {
    uVar5 = imp_strlen(&uStack_60);
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (abStack_30,&uStack_60,uVar5);
    uStack_64 = 0xffffffff;
    uVar16 = uStack_28;
    if ((abStack_30[0] & 1) == 0) {
      uVar16 = uVar12;
    }
    imp_sscanf(uVar16,s_Enabled__d_7006fb7d,&uStack_64);
    if (uStack_64 < 0x100) {
      *(uint *)(param_1 + 4) = uStack_64;
      param_1[8] = '\x01';
    }
    else {
      iVar10 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
      if (iVar10 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_700957e8,s_____webrtc_apm_src_webrtc_module_70067af6,0x2aa,
                   s__agc__Invalid_parameter_for_7006c335,&uStack_60,s___ignored__7006e0c9);
      }
      param_1[4] = '\0';
      param_1[8] = '\0';
    }
    if ((abStack_30[0] & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
  }
  pcVar7 = (char *)thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(&DAT_71204864);
  } while (!bVar3);
  DataMemoryBarrier(0xb);
  DAT_71204864 = DAT_71204864 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(pcVar7);
  uVar5 = *(undefined4 *)(param_3 + 0x10);
  uVar13 = *(undefined4 *)(param_3 + 0x18);
  piVar18 = (int *)(param_1 + 0x34);
  *piVar18 = 0;
  bVar1 = param_3[0xc];
  *(undefined4 *)(param_1 + 0x18) = uVar13;
  param_1[0x14] = bVar1 ^ 1;
  *(char **)(param_1 + 0xc) = pcVar7;
  *(uint *)(param_1 + 0x10) = param_2;
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x20] = '\x01';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  uVar5 = *(undefined4 *)(param_3 + 0x14);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  *(undefined4 *)(param_1 + 0x30) = uVar13;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uStack_60 = CONCAT44((int)(uStack_60 >> 0x20),piVar18) & 0xffffff00ffffffff;
  if (param_2 == 0) {
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
LAB_71a9792c:
    thunk_duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
              (param_1 + 0x4c,param_2,param_3 + 0x1c);
    cVar2 = param_3[0x38];
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x50] = *(int *)(param_1 + 0x4c) != 0 && cVar2 != '\0';
    iVar10 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar10 == 0) {
      puVar14 = &DAT_70067087;
      if (*param_1 == '\0') {
        puVar14 = &DAT_7006d90b;
      }
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70091040,s_____webrtc_apm_src_webrtc_module_70067af6,0xf09,
                 s__agc__analog_controller_enabled__7006bc13,puVar14);
    }
    uVar5 = *(undefined4 *)(param_1 + 4);
    if (param_1[8] == '\0') {
      uVar5 = 0xc;
    }
    iVar10 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar10 == 0) {
      puVar14 = &DAT_7006d90b;
      if (param_1[8] != '\0') {
        puVar14 = &DAT_70067087;
      }
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957f6,s_____webrtc_apm_src_webrtc_module_70067af6,0xf21,
                 s__agc__Min_mic_level__7006fb4e,uVar5,s__overridden__7006bc35,puVar14,&DAT_70067210
                );
    }
    piVar11 = *(int **)(param_1 + 0x38);
    if (piVar11 != *(int **)(param_1 + 0x34)) {
      uVar13 = *(undefined4 *)(param_1 + 0xc);
      iVar10 = thunk_MwhHq(0x44);
      thunk_LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
                (iVar10,uVar13,*(undefined4 *)(param_3 + 8),param_1[0x14],uVar5);
      iVar8 = *(int *)*piVar18;
      *(int *)*piVar18 = iVar10;
      if (iVar8 != 0) {
        thunk_UZbtMVsiPPdyFkAYoytpcX(iVar8);
        thunk_qNQrlu(iVar8);
      }
      piVar11 = *(int **)(param_1 + 0x34);
      if (4 < (uint)(*(int *)(param_1 + 0x38) - (int)piVar11)) {
        uVar16 = 1;
        do {
          uVar13 = thunk_MwhHq(0x44);
          thunk_LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
                    (uVar13,0,*(undefined4 *)(param_3 + 8),param_1[0x14],uVar5);
          iVar10 = *(int *)(*piVar18 + uVar16 * 4);
          *(undefined4 *)(*piVar18 + uVar16 * 4) = uVar13;
          if (iVar10 != 0) {
            thunk_UZbtMVsiPPdyFkAYoytpcX(iVar10);
            thunk_qNQrlu(iVar10);
          }
          piVar11 = *(int **)(param_1 + 0x34);
          uVar16 = uVar16 + 1;
        } while (uVar16 < (uint)(*(int *)(param_1 + 0x38) - (int)piVar11 >> 2));
      }
    }
    *(undefined1 *)(*piVar11 + 0x34) = 1;
    return param_1;
  }
  if (param_2 < 0x40000000) {
    iVar10 = param_2 * 4;
    iVar8 = thunk_MwhHq(iVar10);
    *(uint *)(param_1 + 0x3c) = iVar8 + param_2 * 4;
    *(int *)(param_1 + 0x34) = iVar8;
    imp___aeabi_memclr4(iVar8,iVar10);
    *(int *)(param_1 + 0x38) = iVar8 + iVar10;
    pcVar7 = param_1 + 0x40;
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    pcVar20 = param_1 + 0x44;
    pcVar20[0] = '\0';
    pcVar20[1] = '\0';
    pcVar20[2] = '\0';
    pcVar20[3] = '\0';
    if (param_2 < 0x20000000) {
      puVar9 = (undefined1 *)thunk_MwhHq(param_2 << 3);
      puVar15 = puVar9 + param_2 * 8;
      *(undefined1 **)(param_1 + 0x40) = puVar9;
      *(undefined1 **)(param_1 + 0x44) = puVar9;
      *(undefined1 **)(param_1 + 0x48) = puVar15;
      do {
        puVar9[4] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 8;
      } while (puVar9 != puVar15);
      *(undefined1 **)pcVar20 = puVar15;
      goto LAB_71a9792c;
    }
  }
  else {
    FUN_71a99a88(piVar18);
  }
  FUN_71a99af0(pcVar7);
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: thunk_LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
// Entry: 0x71e07ea0 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  
  *param_1 = param_5;
  *(undefined1 *)(param_1 + 1) = param_4;
  uVar1 = thunk_MwhHq(0x1368);
  thunk_VpbjVnTGIRBrjNvYPQ();
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  *(undefined2 *)(param_1 + 9) = 0x101;
  param_1[0xe] = param_3;
  param_1[0xf] = 0;
  param_1[8] = 0x40e00000;
  *(undefined8 *)(param_1 + 3) = 0xff00000000;
  *(undefined8 *)(param_1 + 5) = 0x70000000c;
  param_1[7] = 7;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[2] = uVar1;
  return param_1;
}


// =========================================================================
// Function: thunk_UZbtMVsiPPdyFkAYoytpcX
// Entry: 0x71e07eb0 | Size: 1 bytes
// =========================================================================

int thunk_UZbtMVsiPPdyFkAYoytpcX(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar1 == (int *)0x0) {
    return param_1;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return param_1;
}


// =========================================================================
// Function: thunk_ygQPLkDIQfoNYulaxVYohUbywiPybBPRmLnASW_aff
// Entry: 0x71e07ec0 | Size: 1 bytes
// =========================================================================

void thunk_ygQPLkDIQfoNYulaxVYohUbywiPybBPRmLnASW_aff(char *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint in_fpscr;
  undefined4 uVar8;
  
  piVar3 = *(int **)(param_1 + 0x34);
  uVar1 = *(int *)(param_1 + 0x38) - (int)piVar3 >> 2;
  if (*(int *)(param_1 + 0x38) - (int)piVar3 != 0) {
    uVar4 = 1;
    piVar7 = piVar3;
    if (1 < uVar1) {
      uVar4 = uVar1;
    }
    do {
      iVar2 = *piVar7;
      *(undefined1 *)(iVar2 + 0x40) = 1;
      uVar6 = 0;
      if (*(char *)(iVar2 + 4) == '\0') {
        uVar6 = 7;
      }
      uVar4 = uVar4 - 1;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      *(undefined2 *)(iVar2 + 0x24) = 0x101;
      uVar8 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(iVar2 + 0x10) = 0xff;
      *(undefined4 *)(iVar2 + 0x14) = 0xc;
      *(undefined4 *)(iVar2 + 0x18) = uVar6;
      *(undefined4 *)(iVar2 + 0x1c) = uVar6;
      *(undefined4 *)(iVar2 + 0x20) = uVar8;
      piVar7 = piVar7 + 1;
    } while (uVar4 != 0);
  }
  iVar2 = *piVar3;
  uVar4 = 1;
  param_1[0x20] = '\x01';
  iVar2 = *(int *)(iVar2 + 0x28);
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  if (1 < uVar1) {
    do {
      iVar5 = *(int *)(piVar3[uVar4] + 0x28);
      if (iVar5 < iVar2) {
        *(uint *)(param_1 + 0x24) = uVar4;
        iVar2 = iVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  if (*param_1 != '\0') {
    iVar5 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < iVar2) {
      iVar5 = iVar2;
    }
    if (iVar2 < 1) {
      iVar5 = iVar2;
    }
    if (param_1[8] == '\0') {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0x1c) = iVar5;
  }
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  return;
}


// =========================================================================
// Function: thunk_EcvdTTVMkWxqvsrDrNzJnianzufJQHDSMrPuQdDlGKMXeeHVMUEIiCPjUVUcrZyUHTRFjVyFE
// Entry: 0x71e07ed0 | Size: 1 bytes
// =========================================================================

void thunk_EcvdTTVMkWxqvsrDrNzJnianzufJQHDSMrPuQdDlGKMXeeHVMUEIiCPjUVUcrZyUHTRFjVyFE
               (int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2,2);
  if ((iVar1 != 0) &&
     (iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail(), iVar1 == 0)) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70067af6,0x1053,
               s_set_mode_GainControl__kFixedDigi_7006e97c);
  }
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,(*(byte *)(param_1 + 0x14) ^ 1) << 1);
  if ((iVar1 != 0) &&
     (iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail(), iVar1 == 0)) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70067af6,0x1073,
               s_set_target_level_dbfs___failed__70068263);
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar2 = 7;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,uVar2);
  if ((iVar1 != 0) &&
     (iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail(), iVar1 == 0)) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70067af6,0x109b,
               s_set_compression_gain_db___failed_700660ec);
  }
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2,*(byte *)(param_1 + 0x14) ^ 1);
  if (iVar1 != 0) {
    iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
    if (iVar1 != 0) {
      return;
    }
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70067af6,0x10bb,
               s_enable_limiter___failed__7006fb64);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_rGsmdSusvLW_Y_WZDebCCuXRdhtEspBljrtjVqiAkrsGVBAGb_zVBrZitESUhrcL_BH
// Entry: 0x71e07ee0 | Size: 1 bytes
// =========================================================================

void thunk_rGsmdSusvLW_Y_WZDebCCuXRdhtEspBljrtjVqiAkrsGVBAGb_zVBrZitESUhrcL_BH
               (char *param_1,int param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  int extraout_r12;
  int in_r12;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  piVar6 = *(int **)(param_1 + 0x34);
  iVar4 = *(int *)(param_2 + 0x28);
  uVar16 = *(uint *)(param_2 + 0xc);
  iVar11 = *piVar6;
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  puVar15 = *(undefined4 **)(iVar4 + 4);
  iVar4 = *(int *)(iVar11 + 0x28);
  uVar5 = *(int *)(param_1 + 0x38) - (int)piVar6 >> 2;
  if (1 < uVar5) {
    uVar7 = 1;
    do {
      iVar11 = *(int *)(piVar6[uVar7] + 0x28);
      if (iVar11 < iVar4) {
        *(uint *)(param_1 + 0x24) = uVar7;
        iVar4 = iVar11;
      }
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  if (*param_1 != '\0') {
    iVar11 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < iVar4) {
      iVar11 = iVar4;
    }
    if (iVar4 < 1) {
      iVar11 = iVar4;
    }
    if (param_1[8] == '\0') {
      iVar11 = iVar4;
    }
    *(int *)(param_1 + 0x1c) = iVar11;
  }
  if (param_1[0x20] == '\0') {
    return;
  }
  piVar6 = *(int **)(param_1 + 0x4c);
  if (piVar6 != (int *)0x0) {
    iStack_48 = *(int *)(param_1 + 0x10);
    uStack_40 = 0;
    iStack_3c = iStack_48 * uVar16;
    if (uVar16 != 0 && iStack_48 != 0) {
      uStack_40 = *puVar15;
    }
    if (iStack_3c == 0) {
      uStack_40 = 0;
    }
    uStack_44 = uVar16;
    (**(code **)(*piVar6 + 0xc))(piVar6,&iStack_48);
    in_r12 = extraout_r12;
  }
  fVar17 = 0.0;
  if (uVar16 != 0) {
    in_r12 = *(int *)(param_1 + 0x10);
  }
  if (uVar16 != 0 && in_r12 != 0) {
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0xc7000000c7000000;
    uVar5 = uVar16 & 0xfffffffc;
    iVar11 = 0;
    iVar4 = 0;
    do {
      pauVar8 = (undefined1 (*) [16])puVar15[iVar11];
      iVar10 = 0;
      uVar7 = 0;
      if (uVar16 < 4) {
LAB_71a981a8:
        pfVar13 = (float *)(*pauVar8 + uVar7 * 4);
        iVar9 = uVar16 - uVar7;
        do {
          fVar17 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          uVar7 = in_fpscr & 0xfffffff | (uint)(fVar17 < 32767.0) << 0x1f;
          in_fpscr = uVar7 | (uint)NAN(fVar17) << 0x1c;
          iVar10 = iVar10 + (uint)((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1) ||
                                  fVar17 <= -32768.0);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      else {
        auVar20 = (undefined1  [16])0x0;
        uVar7 = uVar5;
        pauVar12 = pauVar8;
        do {
          auVar3 = *pauVar12;
          pauVar12 = pauVar12 + 1;
          auVar22 = FloatVectorCompareGreaterThanOrEqual
                              (*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),auVar3,2,0x20);
          uVar7 = uVar7 - 4;
          auVar21._8_8_ = 0x46fffe0046fffe00;
          auVar21._0_8_ = 0x46fffe0046fffe00;
          auVar21 = FloatVectorCompareGreaterThanOrEqual(auVar3,auVar21,2,0x20);
          auVar20 = VectorSub(auVar20,auVar21 | auVar22,4);
        } while (uVar7 != 0);
        uVar19 = VectorAdd(auVar20._0_8_,auVar20._8_8_,4);
        iVar10 = (int)uVar19 + (int)((ulonglong)uVar19 >> 0x20);
        uVar7 = uVar5;
        if (uVar16 != uVar5) goto LAB_71a981a8;
      }
      iVar11 = iVar11 + 1;
      if (iVar4 <= iVar10) {
        iVar4 = iVar10;
      }
    } while (iVar11 != in_r12);
    fVar17 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  }
  iVar4 = *(int *)(param_1 + 0x58);
  fVar18 = (float)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
  *(int *)(param_1 + 0x58) = iVar4 + 1;
  fVar17 = fVar17 / fVar18;
  fVar18 = fVar17;
  if (fVar17 < *(float *)(param_1 + 0x54)) {
    fVar18 = *(float *)(param_1 + 0x54);
  }
  *(float *)(param_1 + 0x54) = fVar18;
  if (iVar4 + 1 == 3000) {
    fVar18 = (float)imp_roundf(fVar18 * 100.0);
    iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar4 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_70067af6,0x431,
                 s_Input_clipping_rate__7006f1af,(int)fVar18,&DAT_70062e0b);
    }
    DataMemoryBarrier(0xb);
    iVar4 = DAT_71204868;
    if (DAT_71204868 == 0) {
      iVar4 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                        (s_WebRTC_Audio_Agc_InputClippingRa_70068c2b,0x22,0,100,0x32);
      if (DAT_71204868 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(0x71204868);
          DAT_71204868 = iVar4;
        } while (!bVar2);
      }
      else {
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) goto LAB_71a982f0;
    }
    else {
LAB_71a982f0:
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar4,(int)fVar18);
    }
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
  }
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  }
  fVar18 = *(float *)(param_1 + 0x2c);
  if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x10) < 1)) {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    uVar5 = 0;
    iVar4 = 0;
    iVar11 = 0;
    do {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))
                (&iStack_48,*(int **)(param_1 + 0x4c),iVar4,*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x28),
                 **(undefined4 **)(*(int *)(param_1 + 0x34) + iVar4 * 4),0xff);
      iVar4 = iVar4 + 1;
      iVar10 = iStack_48;
      if (iStack_48 < iVar11) {
        iVar10 = iVar11;
      }
      uVar5 = uStack_44 & 0xff | uVar5;
      if ((uStack_44 & 0xff) != 0) {
        iVar11 = iVar10;
      }
    } while (iVar4 < *(int *)(param_1 + 0x10));
    iVar4 = *(int *)(param_1 + 0x28);
    if ((uVar5 & 1) != 0) {
      if (iVar11 <= iVar4) {
        iVar11 = iVar4;
      }
      bVar2 = false;
      if (param_1[0x50] == '\0') {
        iVar11 = iVar4;
      }
      goto joined_r0x71a98400;
    }
  }
  bVar2 = true;
  iVar11 = iVar4;
joined_r0x71a98400:
  if ((fVar18 < fVar17) || (!bVar2 && param_1[0x50] != '\0')) {
    puVar14 = *(undefined4 **)(param_1 + 0x38);
    for (puVar15 = *(undefined4 **)(param_1 + 0x34); puVar15 != puVar14; puVar15 = puVar15 + 1) {
      thunk_kYClKWvSiiSrstxdXyzlxODsqAfvHJUUyhbk(*puVar15,iVar11);
    }
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
    }
  }
  piVar6 = *(int **)(param_1 + 0x34);
  iVar4 = *piVar6;
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  iVar4 = *(int *)(iVar4 + 0x28);
  uVar5 = *(int *)(param_1 + 0x38) - (int)piVar6 >> 2;
  if (1 < uVar5) {
    uVar16 = 1;
    do {
      iVar11 = *(int *)(piVar6[uVar16] + 0x28);
      if (iVar11 < iVar4) {
        *(uint *)(param_1 + 0x24) = uVar16;
        iVar4 = iVar11;
      }
      uVar16 = uVar16 + 1;
    } while (uVar5 != uVar16);
  }
  if (*param_1 == '\0') {
    return;
  }
  iVar11 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < iVar4) {
    iVar11 = iVar4;
  }
  if (iVar4 < 1) {
    iVar11 = iVar4;
  }
  if (param_1[8] == '\0') {
    iVar11 = iVar4;
  }
  *(int *)(param_1 + 0x1c) = iVar11;
  return;
}


// =========================================================================
// Function: thunk_fIiTsBF_sHvTgCWdWiqLjqmEyjqIthuhwqTbisZFbwxNcfvznveixosJ
// Entry: 0x71e07ef0 | Size: 1 bytes
// =========================================================================

void thunk_fIiTsBF_sHvTgCWdWiqLjqmEyjqIthuhwqTbisZFbwxNcfvznveixosJ(void)

{
  thunk_owgXutAgTxTQPmSNQvxeboGDlYXMPjxCoFV_iFaMFZNpPfUbGkgHbtQzzYgHFIqPuHjYylSKxNbgijaFGr();
  return;
}


// =========================================================================
// Function: thunk_owgXutAgTxTQPmSNQvxeboGDlYXMPjxCoFV_iFaMFZNpPfUbGkgHbtQzzYgHFIqPuHjYylSKxNbgijaFGr
// Entry: 0x71e07f00 | Size: 1 bytes
// =========================================================================

void thunk_owgXutAgTxTQPmSNQvxeboGDlYXMPjxCoFV_iFaMFZNpPfUbGkgHbtQzzYgHFIqPuHjYylSKxNbgijaFGr
               (char *param_1,int param_2,float param_3,char param_4,float param_5,char param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  undefined1 auStack_1e28 [7684];
  
  piVar13 = *(int **)(param_1 + 0x34);
  piVar14 = *(int **)(param_1 + 0x38);
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  uVar12 = (int)piVar14 - (int)piVar13 >> 2;
  iVar11 = *(int *)(*piVar13 + 0x28);
  iVar4 = iVar11;
  if (1 < uVar12) {
    uVar9 = 1;
    do {
      iVar2 = *(int *)(piVar13[uVar9] + 0x28);
      if (iVar2 < iVar4) {
        *(uint *)(param_1 + 0x24) = uVar9;
        iVar4 = iVar2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar12 != uVar9);
  }
  if (*param_1 == '\0') {
    iVar2 = *(int *)(param_1 + 0x1c);
    cVar1 = param_1[0x20];
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < iVar4) {
      iVar2 = iVar4;
    }
    if (iVar4 < 1) {
      iVar2 = iVar4;
    }
    if (param_1[8] == '\0') {
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x1c) = iVar2;
    cVar1 = param_1[0x20];
  }
  if (cVar1 == '\0') {
    return;
  }
  iVar8 = *(int *)(param_2 + 0x24);
  iVar4 = 0;
  if (param_4 == '\0') {
    uVar10 = 0;
  }
  else if (param_6 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (0.5 <= param_3) {
      fVar15 = param_5;
      if (30.0 <= param_5) {
        fVar15 = 30.0;
      }
      fVar15 = -18.0 - fVar15;
      if (param_5 <= -90.0) {
        fVar15 = 72.0;
      }
      fVar15 = (float)imp_roundf(fVar15);
      uVar10 = 1;
      iVar4 = (int)fVar15;
    }
  }
  if (piVar14 == piVar13) {
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    cVar1 = *param_1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if (iVar8 != 0) {
      puVar6 = auStack_1e28;
    }
    iVar11 = 0;
    uVar12 = 0;
    do {
      iVar3 = *(int *)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x2c) != 0) {
        iVar3 = *(int *)(param_2 + 0x2c);
      }
      thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
                (*(undefined4 *)(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x1c) * uVar12 * 4),iVar8,
                 auStack_1e28);
      thunk_atXrDdkiBQkYk_WWzrJTaRxulpnABSeDaDIwwjBGVzZjDofxwjPhIDpjKkSIxjLvhVLGslSzhTYkLu
                (*(undefined4 *)(*(int *)(param_1 + 0x34) + uVar12 * 4),puVar6,iVar8,iVar4,uVar10);
      iVar3 = *(int *)(*(int *)(param_1 + 0x34) + uVar12 * 4);
      uVar12 = uVar12 + 1;
      uVar7 = *(undefined4 *)(iVar3 + 0x30);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x40) + iVar11);
      *puVar5 = *(undefined4 *)(iVar3 + 0x2c);
      iVar11 = iVar11 + 8;
      *(char *)(puVar5 + 1) = (char)uVar7;
      piVar13 = *(int **)(param_1 + 0x34);
      uVar9 = *(int *)(param_1 + 0x38) - (int)piVar13 >> 2;
    } while (uVar12 < uVar9);
    iVar11 = *piVar13;
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    iVar11 = *(int *)(iVar11 + 0x28);
    if (1 < uVar9) {
      uVar12 = 1;
      do {
        iVar4 = *(int *)(piVar13[uVar12] + 0x28);
        if (iVar4 < iVar11) {
          *(uint *)(param_1 + 0x24) = uVar12;
          iVar11 = iVar4;
        }
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
    }
    cVar1 = *param_1;
  }
  if (cVar1 == '\0') {
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < iVar11) {
      iVar4 = iVar11;
    }
    if (iVar11 < 1) {
      iVar4 = iVar11;
    }
    if (param_1[8] == '\0') {
      iVar4 = iVar11;
    }
    *(int *)(param_1 + 0x1c) = iVar4;
  }
  if (iVar2 == iVar4) {
    return;
  }
  thunk_svdUsETwTZtZLIBpPayFsmIRPBZysSOmxtOkfzn_Wbw_OBlpnudBmNC_tyceLsRJjXDLeOqx();
  return;
}


// =========================================================================
// Function: thunk_lLWkVLtZeXtTApHKSuEHgdBJIojouzfIDwHLlIKS_jqM_AuTACefEGzT
// Entry: 0x71e07f10 | Size: 1 bytes
// =========================================================================

void thunk_lLWkVLtZeXtTApHKSuEHgdBJIojouzfIDwHLlIKS_jqM_AuTACefEGzT(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(int *)(param_2 + 0x40) + *(int *)(param_2 + 0x24) * 8);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}


// =========================================================================
// Function: thunk_FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW
// Entry: 0x71e07f20 | Size: 1 bytes
// =========================================================================

void thunk_FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x34);
  if (*(int **)(param_1 + 0x38) != piVar2) {
    uVar1 = (int)*(int **)(param_1 + 0x38) - (int)piVar2 >> 2;
    uVar3 = 1;
    if (1 < uVar1) {
      uVar3 = uVar1;
    }
    if (param_2 == 0) {
      do {
        iVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        if (*(char *)(iVar4 + 0x24) != '\0') {
          *(undefined1 *)(iVar4 + 0x24) = 0;
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    else {
      do {
        iVar4 = *piVar2;
        piVar2 = piVar2 + 1;
        if (*(byte *)(iVar4 + 0x24) != param_2) {
          *(undefined1 *)(iVar4 + 0x25) = 1;
          *(char *)(iVar4 + 0x24) = (char)param_2;
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(char *)(param_1 + 0x20) = (char)param_2;
  return;
}


// =========================================================================
// Function: thunk_BTVheCKpcjkXJRjkjiQMgdnbRuTwknZzGhmniYwCKsAT_cOZCjLHXDN
// Entry: 0x71e07f30 | Size: 1 bytes
// =========================================================================

void thunk_BTVheCKpcjkXJRjkjiQMgdnbRuTwknZzGhmniYwCKsAT_cOZCjLHXDN(char *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
  }
  piVar7 = *(int **)(param_1 + 0x34);
  uVar1 = *(int *)(param_1 + 0x38) - (int)piVar7 >> 2;
  if (*(int *)(param_1 + 0x38) - (int)piVar7 != 0) {
    uVar5 = uVar1;
    piVar6 = piVar7;
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    do {
      uVar5 = uVar5 - 1;
      *(undefined4 *)(*piVar6 + 0x28) = param_2;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  iVar3 = *piVar7;
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  iVar3 = *(int *)(iVar3 + 0x28);
  if (1 < uVar1) {
    uVar5 = 1;
    do {
      iVar4 = *(int *)(piVar7[uVar5] + 0x28);
      if (iVar4 < iVar3) {
        *(uint *)(param_1 + 0x24) = uVar5;
        iVar3 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  if (cVar2 != '\0') {
    iVar4 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    if (param_1[8] == '\0') {
      iVar4 = iVar3;
    }
    *(int *)(param_1 + 0x1c) = iVar4;
  }
  return;
}


// =========================================================================
// Function: thunk_OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
// Entry: 0x71e07f40 | Size: 1 bytes
// =========================================================================

char * thunk_OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
                 (char *param_1,uint param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  char *pcVar20;
  uint uStack_64;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  char acStack_3f [8];
  byte abStack_30 [4];
  uint uStack_2c;
  uint uStack_28;
  
  uStack_40 = uRam70075bb0;
  uStack_47 = DAT_70075ba8._1_7_;
  uStack_48 = (undefined1)DAT_70075ba8;
  uStack_60 = DAT_70075b90;
  uStack_58 = DAT_70075b98;
  uStack_50 = DAT_70075ba0;
  acStack_3f = s_eriment_70075bb1;
  *param_1 = *param_3;
  uVar5 = imp_strlen(&uStack_60);
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_30,&uStack_60,uVar5);
  uVar16 = uStack_28;
  bVar1 = abStack_30[0];
  uVar12 = (uint)abStack_30 | 1;
  uVar19 = uStack_28;
  if ((abStack_30[0] & 1) == 0) {
    uStack_2c = (uint)(abStack_30[0] >> 1);
    uVar19 = uVar12;
  }
  uVar17 = uVar19 + uStack_2c;
  uVar6 = uVar19;
  while (((uVar4 = uVar17, 6 < (int)uStack_2c &&
          (uVar6 = imp_memchr(uVar6,0x45,uStack_2c - 6), uVar6 != 0)) &&
         (iVar10 = imp_memcmp(uVar6,s_Enabled_7006820b,7), uVar4 = uVar6, iVar10 != 0))) {
    uVar6 = uVar6 + 1;
    uStack_2c = uVar17 - uVar6;
  }
  if ((bVar1 & 1) != 0) {
    thunk_qNQrlu(uVar16);
  }
  if ((uVar4 == uVar17) || (uVar4 != uVar19)) {
    param_1[8] = '\0';
    param_1[4] = '\0';
  }
  else {
    uVar5 = imp_strlen(&uStack_60);
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (abStack_30,&uStack_60,uVar5);
    uStack_64 = 0xffffffff;
    uVar16 = uStack_28;
    if ((abStack_30[0] & 1) == 0) {
      uVar16 = uVar12;
    }
    imp_sscanf(uVar16,s_Enabled__d_7006fb7d,&uStack_64);
    if (uStack_64 < 0x100) {
      *(uint *)(param_1 + 4) = uStack_64;
      param_1[8] = '\x01';
    }
    else {
      iVar10 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
      if (iVar10 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_700957e8,s_____webrtc_apm_src_webrtc_module_70067af6,0x2aa,
                   s__agc__Invalid_parameter_for_7006c335,&uStack_60,s___ignored__7006e0c9);
      }
      param_1[4] = '\0';
      param_1[8] = '\0';
    }
    if ((abStack_30[0] & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
  }
  pcVar7 = (char *)thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar3 = (bool)hasExclusiveAccess(&DAT_71204864);
  } while (!bVar3);
  DataMemoryBarrier(0xb);
  DAT_71204864 = DAT_71204864 + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(pcVar7);
  uVar5 = *(undefined4 *)(param_3 + 0x10);
  uVar13 = *(undefined4 *)(param_3 + 0x18);
  piVar18 = (int *)(param_1 + 0x34);
  *piVar18 = 0;
  bVar1 = param_3[0xc];
  *(undefined4 *)(param_1 + 0x18) = uVar13;
  param_1[0x14] = bVar1 ^ 1;
  *(char **)(param_1 + 0xc) = pcVar7;
  *(uint *)(param_1 + 0x10) = param_2;
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x20] = '\x01';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  uVar5 = *(undefined4 *)(param_3 + 0x14);
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  *(undefined4 *)(param_1 + 0x30) = uVar13;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uStack_60 = CONCAT44((int)(uStack_60 >> 0x20),piVar18) & 0xffffff00ffffffff;
  if (param_2 == 0) {
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
LAB_71a9792c:
    thunk_duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
              (param_1 + 0x4c,param_2,param_3 + 0x1c);
    cVar2 = param_3[0x38];
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x50] = *(int *)(param_1 + 0x4c) != 0 && cVar2 != '\0';
    iVar10 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar10 == 0) {
      puVar14 = &DAT_70067087;
      if (*param_1 == '\0') {
        puVar14 = &DAT_7006d90b;
      }
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70091040,s_____webrtc_apm_src_webrtc_module_70067af6,0xf09,
                 s__agc__analog_controller_enabled__7006bc13,puVar14);
    }
    uVar5 = *(undefined4 *)(param_1 + 4);
    if (param_1[8] == '\0') {
      uVar5 = 0xc;
    }
    iVar10 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar10 == 0) {
      puVar14 = &DAT_7006d90b;
      if (param_1[8] != '\0') {
        puVar14 = &DAT_70067087;
      }
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957f6,s_____webrtc_apm_src_webrtc_module_70067af6,0xf21,
                 s__agc__Min_mic_level__7006fb4e,uVar5,s__overridden__7006bc35,puVar14,&DAT_70067210
                );
    }
    piVar11 = *(int **)(param_1 + 0x38);
    if (piVar11 != *(int **)(param_1 + 0x34)) {
      uVar13 = *(undefined4 *)(param_1 + 0xc);
      iVar10 = thunk_MwhHq(0x44);
      thunk_LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
                (iVar10,uVar13,*(undefined4 *)(param_3 + 8),param_1[0x14],uVar5);
      iVar8 = *(int *)*piVar18;
      *(int *)*piVar18 = iVar10;
      if (iVar8 != 0) {
        thunk_UZbtMVsiPPdyFkAYoytpcX(iVar8);
        thunk_qNQrlu(iVar8);
      }
      piVar11 = *(int **)(param_1 + 0x34);
      if (4 < (uint)(*(int *)(param_1 + 0x38) - (int)piVar11)) {
        uVar16 = 1;
        do {
          uVar13 = thunk_MwhHq(0x44);
          thunk_LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
                    (uVar13,0,*(undefined4 *)(param_3 + 8),param_1[0x14],uVar5);
          iVar10 = *(int *)(*piVar18 + uVar16 * 4);
          *(undefined4 *)(*piVar18 + uVar16 * 4) = uVar13;
          if (iVar10 != 0) {
            thunk_UZbtMVsiPPdyFkAYoytpcX(iVar10);
            thunk_qNQrlu(iVar10);
          }
          piVar11 = *(int **)(param_1 + 0x34);
          uVar16 = uVar16 + 1;
        } while (uVar16 < (uint)(*(int *)(param_1 + 0x38) - (int)piVar11 >> 2));
      }
    }
    *(undefined1 *)(*piVar11 + 0x34) = 1;
    return param_1;
  }
  if (param_2 < 0x40000000) {
    iVar10 = param_2 * 4;
    iVar8 = thunk_MwhHq(iVar10);
    *(uint *)(param_1 + 0x3c) = iVar8 + param_2 * 4;
    *(int *)(param_1 + 0x34) = iVar8;
    imp___aeabi_memclr4(iVar8,iVar10);
    *(int *)(param_1 + 0x38) = iVar8 + iVar10;
    pcVar7 = param_1 + 0x40;
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    pcVar20 = param_1 + 0x44;
    pcVar20[0] = '\0';
    pcVar20[1] = '\0';
    pcVar20[2] = '\0';
    pcVar20[3] = '\0';
    if (param_2 < 0x20000000) {
      puVar9 = (undefined1 *)thunk_MwhHq(param_2 << 3);
      puVar15 = puVar9 + param_2 * 8;
      *(undefined1 **)(param_1 + 0x40) = puVar9;
      *(undefined1 **)(param_1 + 0x44) = puVar9;
      *(undefined1 **)(param_1 + 0x48) = puVar15;
      do {
        puVar9[4] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 8;
      } while (puVar9 != puVar15);
      *(undefined1 **)pcVar20 = puVar15;
      goto LAB_71a9792c;
    }
  }
  else {
    FUN_71a99a88(piVar18);
  }
  FUN_71a99af0(pcVar7);
  if ((abStack_30[0] & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: thunk__bXCCgOskaGhruNxJEhKsLJuQjJOzVlE
// Entry: 0x71e07f50 | Size: 1 bytes
// =========================================================================

int thunk__bXCCgOskaGhruNxJEhKsLJuQjJOzVlE(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40);
    thunk_qNQrlu();
  }
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x38);
    piVar2 = piVar1;
    if (piVar4 != piVar1) {
      do {
        piVar4 = piVar4 + -1;
        iVar3 = *piVar4;
        *piVar4 = 0;
        if (iVar3 != 0) {
          thunk_UZbtMVsiPPdyFkAYoytpcX(iVar3);
          thunk_qNQrlu(iVar3);
        }
      } while (piVar4 != piVar1);
      piVar2 = *(int **)(param_1 + 0x34);
    }
    *(int **)(param_1 + 0x38) = piVar1;
    thunk_qNQrlu(piVar2);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz
// Entry: 0x71e07f60 | Size: 1 bytes
// =========================================================================

undefined4
thunk_fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz(int *param_1,int *param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  short *psVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  psVar17 = (short *)((int)param_1 + 0x12e);
  iVar15 = *param_1;
  if (iVar15 == 8000) {
    iVar14 = 8;
    if (param_4 != 0x50) {
      return 0xffffffff;
    }
  }
  else {
    iVar14 = 0x10;
    if (param_4 != 0xa0) {
      return 0xffffffff;
    }
  }
  if (param_1[0x51] < param_1[0x4f]) {
    sVar4 = (short)param_1[0x51];
    uVar3 = FUN_71ba0440((short)((short)param_1[0x4f] - sVar4) * 0x1f,
                         (int)(short)((short)param_1[0x50] - sVar4));
    uVar7 = *(ushort *)(param_1 + 0x4d);
    sVar4 = 1;
    if ((uVar7 < uVar3) || (sVar4 = -1, uVar3 < uVar7)) {
      uVar7 = uVar7 + sVar4;
      *(ushort *)(param_1 + 0x4d) = uVar7;
    }
    if (param_3 != 0) {
      iVar11 = 0;
      uVar7 = *(ushort *)(&DAT_70098004 + (uint)uVar7 * 2);
      piVar16 = param_2;
      iVar9 = param_3;
      do {
        do {
          iVar9 = iVar9 + -1;
          psVar13 = (short *)(*piVar16 + iVar11 * 2);
          iVar2 = (int)((int)*psVar13 * (uint)uVar7) >> 0xc;
          uVar6 = SignedSaturate(iVar2,0x10);
          SignedDoesSaturate(iVar2,0x10);
          *psVar13 = (short)uVar6;
          piVar16 = piVar16 + 1;
        } while (iVar9 != 0);
        iVar11 = iVar11 + 1;
        piVar16 = param_2;
        iVar9 = param_3;
      } while (iVar11 != param_4);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x4d) = 0;
  }
  sVar4 = *psVar17;
  iVar9 = 0xc4;
  puVar5 = (undefined8 *)*param_2;
  if (0 < sVar4) {
    iVar9 = 0xec;
  }
  piVar16 = (int *)((int)param_1 + iVar9);
  if (iVar15 == 8000) {
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar5 + iVar11 * 2);
      iVar11 = (int)sVar8;
      iVar2 = (int)sVar1 * (int)sVar1;
      if (iVar2 - iVar9 != 0 && iVar9 <= iVar2) {
        iVar9 = iVar2;
      }
    } while (iVar11 < iVar14);
    *piVar16 = iVar9;
    puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 2);
LAB_71af676c:
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
  }
  else {
    auVar20 = VectorMultiply(*puVar5,*puVar5,2,0);
    auVar19 = VectorMultiply(puVar5[1],puVar5[1],2,0);
    auVar21 = VectorMultiply(puVar5[2],puVar5[2],2,0);
    auVar19 = VectorMax(auVar19,auVar20,4,0);
    auVar20 = VectorMultiply(puVar5[3],puVar5[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    *piVar16 = (int)uVar18;
    puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 2);
    if (iVar15 == 8000) goto LAB_71af676c;
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    iVar9 = (int)uVar18;
  }
  puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 4);
  piVar16[1] = iVar9;
  if (iVar15 == 8000) {
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
  }
  else {
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    iVar9 = (int)uVar18;
  }
  piVar16[2] = iVar9;
  puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 6);
  if (iVar15 == 8000) {
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
    piVar16[3] = iVar9;
LAB_71af6900:
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)(puVar5 + iVar14) + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
  }
  else {
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    puVar10 = puVar5 + iVar14;
    piVar16[3] = (int)uVar18;
    if (iVar15 == 8000) goto LAB_71af6900;
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    iVar9 = (int)uVar18;
  }
  piVar16[4] = iVar9;
  puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 10);
  if (iVar15 == 8000) {
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
    puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 0xc);
    piVar16[5] = iVar9;
LAB_71af6a10:
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
  }
  else {
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 0xc);
    piVar16[5] = (int)uVar18;
    if (iVar15 == 8000) goto LAB_71af6a10;
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    iVar9 = (int)uVar18;
  }
  piVar16[6] = iVar9;
  puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 0xe);
  if (iVar15 == 8000) {
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
    puVar10 = puVar5 + iVar14 * 2;
    piVar16[7] = iVar9;
  }
  else {
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    puVar10 = puVar5 + iVar14 * 2;
    piVar16[7] = (int)uVar18;
    if (iVar15 != 8000) {
      auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
      auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
      auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
      auVar19 = VectorMax(auVar20,auVar19,4,0);
      auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
      auVar19 = VectorMax(auVar21,auVar19,4,0);
      auVar19 = VectorMax(auVar20,auVar19,4,0);
      uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
      uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
      iVar9 = (int)uVar18;
      goto LAB_71af6bdc;
    }
  }
  iVar11 = 0;
  iVar9 = 0;
  sVar8 = 0;
  do {
    sVar8 = sVar8 + 1;
    sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
    iVar11 = (int)sVar1 * (int)sVar1;
    if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
      iVar9 = iVar11;
    }
    iVar11 = (int)sVar8;
  } while (iVar11 < iVar14);
LAB_71af6bdc:
  piVar16[8] = iVar9;
  puVar10 = (undefined8 *)((int)puVar5 + iVar14 * 0x12);
  if (iVar15 == 8000) {
    iVar11 = 0;
    iVar9 = 0;
    sVar8 = 0;
    do {
      sVar8 = sVar8 + 1;
      sVar1 = *(short *)((int)puVar10 + iVar11 * 2);
      iVar11 = (int)sVar1 * (int)sVar1;
      if (iVar11 - iVar9 != 0 && iVar9 <= iVar11) {
        iVar9 = iVar11;
      }
      iVar11 = (int)sVar8;
    } while (iVar11 < iVar14);
  }
  else {
    auVar19 = VectorMultiply(*puVar10,*puVar10,2,0);
    auVar20 = VectorMultiply(puVar10[1],puVar10[1],2,0);
    auVar21 = VectorMultiply(puVar10[2],puVar10[2],2,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    auVar20 = VectorMultiply(puVar10[3],puVar10[3],2,0);
    auVar19 = VectorMax(auVar21,auVar19,4,0);
    auVar19 = VectorMax(auVar20,auVar19,4,0);
    uVar18 = VectorPairwiseMax(auVar19._0_8_,auVar19._8_8_,4,0);
    uVar18 = VectorPairwiseMax(uVar18,uVar18,4,0);
    iVar9 = (int)uVar18;
  }
  piVar16[9] = iVar9;
  iVar14 = 0x9c;
  piVar16 = param_1 + 0xf;
  if (0 < sVar4) {
    iVar14 = 0xb0;
  }
  puVar12 = (undefined4 *)((int)param_1 + iVar14);
  if (iVar15 == 16000) {
    thunk_yyxIsXIaqMoPzRDYYMMdOKS(puVar5,0x20,&uStack_48,piVar16);
  }
  else {
    uStack_48 = *(undefined4 *)puVar5;
    uStack_44 = *(undefined4 *)((int)puVar5 + 4);
    uStack_40 = *(undefined4 *)(puVar5 + 1);
    uStack_3c = *(undefined4 *)((int)puVar5 + 0xc);
    uStack_38 = *(undefined4 *)(puVar5 + 2);
    uStack_34 = *(undefined4 *)((int)puVar5 + 0x14);
    uStack_30 = *(undefined4 *)(puVar5 + 3);
    uStack_2c = *(undefined4 *)((int)puVar5 + 0x1c);
  }
  uVar6 = thunk_gXLfkuviTDKqcecMCYbWiLP_EYASy(&uStack_48,&uStack_48,0x10,4);
  iVar14 = *param_1;
  iVar15 = *param_2;
  *puVar12 = uVar6;
  if (iVar14 == 16000) {
    thunk_yyxIsXIaqMoPzRDYYMMdOKS(iVar15 + 0x40,0x20,&uStack_48,piVar16);
  }
  else {
    uStack_48 = *(undefined4 *)(iVar15 + 0x20);
    uStack_44 = *(undefined4 *)(iVar15 + 0x24);
    uStack_40 = *(undefined4 *)(iVar15 + 0x28);
    uStack_3c = *(undefined4 *)(iVar15 + 0x2c);
    uStack_38 = *(undefined4 *)(iVar15 + 0x30);
    uStack_34 = *(undefined4 *)(iVar15 + 0x34);
    uStack_30 = *(undefined4 *)(iVar15 + 0x38);
    uStack_2c = *(undefined4 *)(iVar15 + 0x3c);
  }
  uVar6 = thunk_gXLfkuviTDKqcecMCYbWiLP_EYASy(&uStack_48,&uStack_48,0x10,4);
  iVar14 = *param_1;
  iVar15 = *param_2;
  puVar12[1] = uVar6;
  if (iVar14 == 16000) {
    thunk_yyxIsXIaqMoPzRDYYMMdOKS(iVar15 + 0x80,0x20,&uStack_48,piVar16);
  }
  else {
    uStack_48 = *(undefined4 *)(iVar15 + 0x40);
    uStack_44 = *(undefined4 *)(iVar15 + 0x44);
    uStack_40 = *(undefined4 *)(iVar15 + 0x48);
    uStack_3c = *(undefined4 *)(iVar15 + 0x4c);
    uStack_38 = *(undefined4 *)(iVar15 + 0x50);
    uStack_34 = *(undefined4 *)(iVar15 + 0x54);
    uStack_30 = *(undefined4 *)(iVar15 + 0x58);
    uStack_2c = *(undefined4 *)(iVar15 + 0x5c);
  }
  uVar6 = thunk_gXLfkuviTDKqcecMCYbWiLP_EYASy(&uStack_48,&uStack_48,0x10,4);
  iVar14 = *param_1;
  iVar15 = *param_2;
  puVar12[2] = uVar6;
  if (iVar14 == 16000) {
    thunk_yyxIsXIaqMoPzRDYYMMdOKS(iVar15 + 0xc0,0x20,&uStack_48,piVar16);
  }
  else {
    uStack_48 = *(undefined4 *)(iVar15 + 0x60);
    uStack_44 = *(undefined4 *)(iVar15 + 100);
    uStack_40 = *(undefined4 *)(iVar15 + 0x68);
    uStack_3c = *(undefined4 *)(iVar15 + 0x6c);
    uStack_38 = *(undefined4 *)(iVar15 + 0x70);
    uStack_34 = *(undefined4 *)(iVar15 + 0x74);
    uStack_30 = *(undefined4 *)(iVar15 + 0x78);
    uStack_2c = *(undefined4 *)(iVar15 + 0x7c);
  }
  uVar6 = thunk_gXLfkuviTDKqcecMCYbWiLP_EYASy(&uStack_48,&uStack_48,0x10,4);
  iVar14 = *param_1;
  iVar15 = *param_2;
  puVar12[3] = uVar6;
  if (iVar14 == 16000) {
    thunk_yyxIsXIaqMoPzRDYYMMdOKS(iVar15 + 0x100,0x20,&uStack_48,piVar16);
  }
  else {
    uStack_48 = *(undefined4 *)(iVar15 + 0x80);
    uStack_44 = *(undefined4 *)(iVar15 + 0x84);
    uStack_40 = *(undefined4 *)(iVar15 + 0x88);
    uStack_3c = *(undefined4 *)(iVar15 + 0x8c);
    uStack_38 = *(undefined4 *)(iVar15 + 0x90);
    uStack_34 = *(undefined4 *)(iVar15 + 0x94);
    uStack_30 = *(undefined4 *)(iVar15 + 0x98);
    uStack_2c = *(undefined4 *)(iVar15 + 0x9c);
  }
  uVar6 = thunk_gXLfkuviTDKqcecMCYbWiLP_EYASy(&uStack_48,&uStack_48,0x10,4);
  puVar12[4] = uVar6;
  sVar4 = 2;
  iVar15 = *param_2;
  if (*psVar17 == 0) {
    sVar4 = 1;
  }
  *psVar17 = sVar4;
  thunk_bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq(param_1 + 0x58,iVar15,param_4);
  return 0;
}


// =========================================================================
// Function: thunk_QRzkEEOnPEfZkDZXuhWZbfOOcGODEZYPPguFzk
// Entry: 0x71e07f70 | Size: 1 bytes
// =========================================================================

undefined4
thunk_QRzkEEOnPEfZkDZXuhWZbfOOcGODEZYPPguFzk
          (int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (iVar2 < 32000) {
      if (iVar2 == 8000) {
        if (param_3 != 0x50) {
          return 0xffffffff;
        }
        goto LAB_71af6e94;
      }
      if (iVar2 != 16000) {
        return 0xffffffff;
      }
    }
    else {
      if (iVar2 != 32000) {
        param_4 = 48000;
      }
      if (iVar2 != 32000 && iVar2 != param_4) {
        return 0xffffffff;
      }
    }
    if (param_3 == 0xa0) {
LAB_71af6e94:
      uVar1 = thunk_exgqoWZmPxiReftggjgZnvdMvlzcgSCZBaFgTLZqIwbvamFOPaXZJuZhqlhXoj(param_1 + 0x66);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_ARGrIETXWgtn_gQyszvSqlUEQkQrnUvjQtzjraQNTjva
// Entry: 0x71e07f80 | Size: 1 bytes
// =========================================================================

undefined4
thunk_ARGrIETXWgtn_gQyszvSqlUEQkQrnUvjQtzjraQNTjva
          (int *param_1,int *param_2,uint param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int *piVar5;
  undefined2 uVar6;
  short *psVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  
  uVar13 = 11000;
  puVar11 = (ushort *)*param_2;
  if (*param_1 == 8000) {
    uVar13 = 0x157c;
  }
  if (param_4 < 2) {
LAB_71af6fc8:
    uVar6 = 1;
  }
  else {
    iVar8 = param_4 - 1;
    uVar9 = 0;
    uVar10 = (int)(short)*puVar11 * (int)(short)*puVar11;
    puVar4 = puVar11;
    do {
      uVar2 = puVar4[1];
      if (uVar10 < uVar13) {
        uVar10 = (int)(short)uVar2 * (int)(short)uVar2 + uVar10;
      }
      iVar8 = iVar8 + -1;
      uVar9 = uVar9 - ((short)(*puVar4 ^ uVar2) >> 0xf);
      puVar4 = puVar4 + 1;
    } while (iVar8 != 0);
    if ((uVar10 < 500) || ((short)uVar9 < 6)) goto LAB_71af6fc8;
    if (0xf < uVar9) {
      if (uVar13 < uVar10) {
        *(ushort *)(param_1 + 0xa6) = (ushort)(0x13 < uVar9);
        goto LAB_71af6fd4;
      }
      goto LAB_71af6fc8;
    }
    uVar6 = 0;
  }
  *(undefined2 *)(param_1 + 0xa6) = uVar6;
LAB_71af6fd4:
  uVar13 = (uint)*(ushort *)(param_1 + 0x57);
  if (param_1[0x4c] == param_5 << (uVar13 & 0xff)) {
    iVar8 = param_1[0x51];
    if (param_1[0x4f] < param_1[0x51]) {
      iVar8 = param_1[0x4f];
    }
    puVar4 = &DAT_70098144 + (0x7f - iVar8);
    if (0x7f < iVar8) {
      puVar4 = (ushort *)(&DAT_70097f44 + iVar8 * 2);
    }
  }
  else {
    iVar8 = 0x7f;
    param_1[0x4c] = param_5 << (uVar13 & 0xff);
    puVar4 = &DAT_70098144;
    param_1[0x4f] = 0x7f;
  }
  if (param_4 != 0) {
    uVar13 = (uint)*puVar4;
    if (param_3 < 2) {
      do {
        iVar12 = (int)((int)(short)*puVar11 * uVar13) >> 10;
        if (iVar12 < 0x8000) {
          if (iVar12 < -0x8000) {
            if (iVar8 < 0x80) {
              puVar4 = &DAT_70098144 + (0x80 - iVar8);
            }
            else {
              puVar4 = (ushort *)(&DAT_70097f44 + iVar8 * 2);
            }
            iVar12 = 0x8000;
            goto LAB_71af7194;
          }
        }
        else {
          if (iVar8 < 0x80) {
            iVar12 = 0x7fff;
            puVar4 = &DAT_70098144 + (0x80 - iVar8);
          }
          else {
            iVar12 = 0x7fff;
            puVar4 = (ushort *)(&DAT_70097f44 + iVar8 * 2);
          }
LAB_71af7194:
          uVar13 = (uint)*puVar4;
          iVar8 = iVar8 + -1;
        }
        *puVar11 = (ushort)iVar12;
        param_4 = param_4 - 1;
        puVar11 = puVar11 + 1;
      } while (param_4 != 0);
    }
    else {
      uVar10 = 0;
      do {
        iVar12 = (int)((int)(short)puVar11[uVar10] * uVar13) >> 10;
        if (iVar12 < 0x8000) {
          if (iVar12 < -0x8000) {
            if (iVar8 < 0x80) {
              puVar4 = &DAT_70098144 + (0x80 - iVar8);
            }
            else {
              puVar4 = (ushort *)(&DAT_70097f44 + iVar8 * 2);
            }
            iVar12 = 0x8000;
            goto LAB_71af70f8;
          }
        }
        else {
          if (iVar8 < 0x80) {
            puVar4 = &DAT_70098144 + (0x80 - iVar8);
          }
          else {
            puVar4 = (ushort *)(&DAT_70097f44 + iVar8 * 2);
          }
          iVar12 = 0x7fff;
LAB_71af70f8:
          uVar13 = (uint)*puVar4;
          iVar8 = iVar8 + -1;
        }
        puVar11[uVar10] = (ushort)iVar12;
        iVar12 = param_3 - 1;
        piVar5 = param_2;
        do {
          piVar5 = piVar5 + 1;
          iVar12 = iVar12 + -1;
          psVar7 = (short *)(*piVar5 + uVar10 * 2);
          iVar1 = (int)((int)*psVar7 * uVar13) >> 10;
          uVar3 = SignedSaturate(iVar1,0x10);
          SignedDoesSaturate(iVar1,0x10);
          *psVar7 = (short)uVar3;
        } while (iVar12 != 0);
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_4);
    }
  }
  param_1[0x4e] = iVar8;
  *param_6 = iVar8 >> (*(ushort *)(param_1 + 0x57) & 0xff);
  iVar8 = thunk_fJmMQjrijw_xDXyPHFXEUzfEPyYDMPVFLIiBz(param_1,param_2,param_3);
  uVar3 = 0;
  if (iVar8 != 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// =========================================================================
// Function: thunk_frrptaYHrVkLjTWpOpnjFWyEDQbkJlkGsWgtcsCzSpTAn
// Entry: 0x71e07f90 | Size: 1 bytes
// =========================================================================

undefined4
thunk_frrptaYHrVkLjTWpOpnjFWyEDQbkJlkGsWgtcsCzSpTAn
          (int param_1,int param_2,int *param_3,int param_4,int param_5,undefined1 *param_6)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  short sVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  short sVar29;
  bool bVar30;
  uint uStack_50;
  uint uStack_2c;
  uint uStack_28;
  
  psVar12 = (short *)(param_1 + 0x114);
  iVar13 = *(int *)(param_1 + 0x144);
  if (iVar13 < param_2 << (*(ushort *)(param_1 + 0x15c) & 0xff)) {
    return 0xffffffff;
  }
  iVar25 = *(int *)(param_1 + 0x14c);
  iVar6 = param_2 << (*(ushort *)(param_1 + 0x15c) & 0xff);
  if (iVar6 < iVar25) {
    return 0xffffffff;
  }
  if (*(short *)(param_1 + 0x122) == 0) {
    *(undefined2 *)(param_1 + 0x122) = 1;
    iVar21 = iVar25 + ((*(int *)(param_1 + 0x140) - iVar25) * 0x33 >> 9);
    if ((iVar6 < iVar21) && (*(short *)(param_1 + 8) == 1)) {
      iVar6 = iVar21;
    }
    *(int *)(param_1 + 0x13c) = iVar6;
  }
  iVar10 = *(int *)(param_1 + 0x13c);
  iVar21 = iVar13;
  if (iVar13 < iVar10) {
    iVar21 = iVar10;
  }
  if (iVar6 != iVar13) {
    iVar21 = iVar6;
  }
  if (iVar21 != iVar10) {
    iVar13 = *(int *)(param_1 + 0x150);
    if (iVar21 < iVar13) {
      iVar21 = iVar25 + ((*(int *)(param_1 + 0x140) - iVar25) * 0x33 >> 9);
    }
    else {
      if (iVar21 != iVar10) {
        iVar13 = *(int *)(param_1 + 0x158);
      }
      if (iVar21 == iVar10 || iVar13 == param_2) goto LAB_71af7680;
    }
    iVar10 = iVar21;
    *(int *)(param_1 + 0x13c) = iVar10;
  }
LAB_71af7680:
  sVar29 = *(short *)(param_1 + 0x116);
  uVar5 = *(uint *)(param_1 + 0xc4);
  uStack_50 = *(uint *)(param_1 + 200);
  uVar22 = *(uint *)(param_1 + 0xcc);
  uVar9 = *(uint *)(param_1 + 0xd0);
  *(int *)(param_1 + 0x158) = param_2;
  if (*(int *)(param_1 + 0x140) < iVar10) {
    *(int *)(param_1 + 0x140) = iVar10;
  }
  if (0x36b < (int)uVar5 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar5 >> 0x14);
  }
  uVar11 = *(uint *)(param_1 + 0xd4);
  uStack_28 = *(uint *)(param_1 + 0xd8);
  if (0x36b < (int)uStack_50 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uStack_50 >> 0x14);
  }
  if (0x36b < (int)uVar22 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar22 >> 0x14);
  }
  if (0x36b < (int)uVar9 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar9 >> 0x14);
  }
  if (0x36b < (int)uVar11 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar11 >> 0x14);
  }
  if (0x36b < (int)uStack_28 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uStack_28 >> 0x14);
  }
  uStack_2c = *(uint *)(param_1 + 0xdc);
  uVar28 = *(uint *)(param_1 + 0xe0);
  uVar23 = *(uint *)(param_1 + 0xe4);
  uVar26 = *(uint *)(param_1 + 0xe8);
  if (0x36b < (int)uStack_2c >> 0x14) {
    sVar29 = sVar29 + (short)((int)uStack_2c >> 0x14);
  }
  if (0x36b < (int)uVar28 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar28 >> 0x14);
  }
  if (0x36b < (int)uVar23 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar23 >> 0x14);
  }
  if (0x36b < (int)uVar26 >> 0x14) {
    sVar29 = sVar29 + (short)((int)uVar26 >> 0x14);
  }
  if (sVar29 < 0x61a9) {
    *(short *)(param_1 + 0x116) = (short)((uint)(sVar29 * 0x7eb8) >> 0xf);
    iVar13 = iVar10;
  }
  else {
    iVar13 = *(int *)(param_1 + 0x6c);
    *(undefined2 *)(param_1 + 0x116) = 0;
    *(int *)(param_1 + 0x154) = iVar10;
    *(int *)(param_1 + 0x6c) =
         (iVar13 / 8) * 8 - ((int)(iVar13 + ((uint)(iVar13 >> 0x1f) >> 0x1d)) >> 3);
    iVar25 = iVar25 + ((uint)((iVar10 - iVar25) * 0x7397) >> 0xf);
    iVar13 = iVar10 + -2;
    if (iVar25 < iVar10 + -2) {
      iVar13 = iVar25;
    }
    *(int *)(param_1 + 0x13c) = iVar13;
    if (iVar13 < *(int *)(param_1 + 0x150)) {
      *param_6 = 1;
      uStack_50 = *(uint *)(param_1 + 200);
      uVar5 = *(uint *)(param_1 + 0xc4);
      uVar22 = *(uint *)(param_1 + 0xcc);
      uVar9 = *(uint *)(param_1 + 0xd0);
      uVar11 = *(uint *)(param_1 + 0xd4);
      uVar28 = *(uint *)(param_1 + 0xe0);
      uVar23 = *(uint *)(param_1 + 0xe4);
      uVar26 = *(uint *)(param_1 + 0xe8);
      uStack_28 = *(uint *)(param_1 + 0xd8);
      uStack_2c = *(uint *)(param_1 + 0xdc);
    }
    *(undefined4 *)(param_1 + 0x11e) = 0xff9c;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x126) = 0x2080154;
    *(undefined4 *)(param_1 + 0x12a) = 0;
  }
  uVar14 = uStack_50 + uVar5 + uVar22;
  uVar15 = uVar14 + uVar9;
  uVar16 = uVar15 + uVar11;
  uVar17 = uVar16 + uStack_28;
  sVar29 = 0;
  uVar18 = uVar17 + uStack_2c;
  uVar19 = uVar18 + uVar28;
  uVar20 = uVar19 + uVar23;
  iVar6 = ((int)uStack_50 >> 0x1f) + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uStack_50,uVar5) +
          ((int)uVar22 >> 0x1f) + (uint)CARRY4(uStack_50 + uVar5,uVar22) + ((int)uVar9 >> 0x1f) +
          (uint)CARRY4(uVar14,uVar9) + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar15,uVar11) +
          ((int)uStack_28 >> 0x1f) + (uint)CARRY4(uVar16,uStack_28) + ((int)uStack_2c >> 0x1f) +
          (uint)CARRY4(uVar17,uStack_2c) + ((int)uVar28 >> 0x1f) + (uint)CARRY4(uVar18,uVar28) +
          ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar19,uVar23) + ((int)uVar26 >> 0x1f) +
          (uint)CARRY4(uVar20,uVar26);
  bVar30 = 499 < uVar20 + uVar26;
  bVar1 = false;
  if ((int)-(iVar6 + (uint)bVar30) < 0 == (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)bVar30))) {
    sVar29 = *(short *)(param_1 + 0x124) + 10;
    bVar1 = false;
    if (500 < sVar29) {
      bVar1 = true;
    }
  }
  iVar6 = (int)*(short *)(param_1 + 300);
  *(short *)(param_1 + 0x124) = sVar29;
  if (0 < iVar6) {
    iVar6 = iVar6 + -10;
    *(short *)(param_1 + 300) = (short)iVar6;
  }
  if (bVar1) {
    *(undefined2 *)(param_1 + 0x124) = 0;
    if (iVar13 < (*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x14c) + 1) / 2) {
      iVar6 = iVar13 * 0x466 >> 10;
      iVar13 = *(int *)(param_1 + 0x154);
      if (iVar6 < *(int *)(param_1 + 0x154)) {
        iVar13 = iVar6;
      }
      *(int *)(param_1 + 0x13c) = iVar13;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    iVar6 = 8000;
    *(undefined4 *)(param_1 + 0x12a) = 0x1f400000;
  }
  uVar2 = *(ushort *)(param_1 + 0x18c);
  if ((short)uVar2 < 0x9c4) {
    sVar29 = 0x5dc;
  }
  else {
    iVar25 = 0x1194 - (uint)uVar2;
    uVar5 = 400;
    if (uVar2 < 0x1195 && iVar25 != 0) {
      uVar5 = ((uint)(int)(short)iVar25 >> 1) + 400;
    }
    sVar29 = (short)(*(short *)(param_1 + 0x118) * 0x1f + (uVar5 & 0xffff) >> 5);
  }
  sVar24 = *psVar12;
  iVar25 = param_1 + 0x74;
  *(short *)(param_1 + 0x118) = sVar29;
  if (sVar29 < param_4) {
    iVar21 = *(int *)(param_1 + 100);
    sVar29 = *(short *)(param_1 + 0x12a);
    iVar27 = 0;
    do {
      while( true ) {
        iVar7 = *(int *)(param_1 + 0x9c + iVar27 * 4);
        *(int *)(param_1 + 100) = iVar21 + (iVar7 - *(int *)(iVar25 + sVar24 * 4) >> 3);
        *(int *)(iVar25 + sVar24 * 4) = iVar7;
        iVar21 = *(int *)(param_1 + 0x68) + (iVar7 - *(int *)(param_1 + 0x68) >> 6);
        sVar3 = sVar24 + 1;
        *(int *)(param_1 + 0x68) = iVar21;
        sVar24 = 0;
        if (sVar3 != 10) {
          sVar24 = sVar3;
        }
        if (sVar29 < 0xfa) {
          sVar29 = sVar29 + 2;
          *(short *)(param_1 + 0x12a) = sVar29;
          if (*(int *)(param_1 + 0x70) < iVar21) {
            *(int *)(param_1 + 0x70) = iVar21;
          }
        }
        else if (sVar29 == 0xfa) {
          sVar29 = 0xfc;
          *(undefined2 *)(param_1 + 0x12a) = 0xfc;
          *(int *)(param_1 + 0x6c) = (*(int *)(param_1 + 0x70) >> 3) * 10;
        }
        iVar21 = *(int *)(param_1 + 100);
        iVar7 = *(int *)(param_1 + 0x6c) + (iVar21 - *(int *)(param_1 + 0x6c) >> 10);
        *(int *)(param_1 + 0x6c) = iVar7;
        if (iVar7 <= *(int *)(param_1 + 0x30)) break;
        *(undefined2 *)(param_1 + 0x120) = 0;
        *(undefined2 *)(param_1 + 0x11c) = 0;
        sVar3 = *(short *)(param_1 + 0x11e) + 2;
        *(short *)(param_1 + 0x11e) = sVar3;
        if (*(short *)(param_1 + 0x126) < sVar3) {
          *(undefined2 *)(param_1 + 0x11e) = 0;
          *(undefined2 *)(param_1 + 0x12a) = 0;
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x13c);
          iVar4 = *(int *)(param_1 + 0x140) * 0xf + *(int *)(param_1 + 0x13c);
          sVar29 = 0;
          *(int *)(param_1 + 0x6c) = (iVar7 >> 6) * 0x35;
          *(undefined4 *)(param_1 + 0x70) = 0;
          iVar7 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1c)) >> 4;
          iVar4 = *(int *)(param_1 + 0x144);
          if (*(int *)(param_1 + 0x144) < iVar7) {
            iVar4 = iVar7;
          }
          iVar13 = *(int *)(param_1 + 0x14c) +
                   ((uint)((iVar13 - *(int *)(param_1 + 0x14c)) * 0x799a) >> 0xf);
          *(int *)(param_1 + 0x140) = iVar4;
          if (iVar10 <= iVar13) {
            iVar13 = iVar10 + -1;
          }
LAB_71af7bcc:
          *(int *)(param_1 + 0x13c) = iVar13;
        }
LAB_71af7bd0:
        iVar27 = iVar27 + 1;
        if (iVar27 == 5) goto LAB_71af8038;
      }
      uVar5 = iVar7 >> 0x1f;
      if (*(int *)(param_1 + 0x5c) < iVar7) {
        sVar3 = *(short *)(param_1 + 0x11e) + 2;
        *(short *)(param_1 + 0x11e) = sVar3;
        *(undefined2 *)(param_1 + 0x120) = 0;
        *(undefined2 *)(param_1 + 0x11c) = 0;
        if (*(short *)(param_1 + 0x128) < sVar3) {
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x13c);
          iVar4 = *(int *)(param_1 + 0x140) * 0xf + *(int *)(param_1 + 0x13c);
          *(undefined2 *)(param_1 + 0x11e) = 0;
          *(int *)(param_1 + 0x6c) = ((int)(iVar7 + (uVar5 >> 0x1a)) >> 6) * 0x35;
          iVar13 = *(int *)(param_1 + 0x14c) +
                   ((uint)((iVar13 - *(int *)(param_1 + 0x14c)) * 0x7b85) >> 0xf);
          iVar7 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1c)) >> 4;
          iVar4 = *(int *)(param_1 + 0x144);
          if (*(int *)(param_1 + 0x144) < iVar7) {
            iVar4 = iVar7;
          }
          if (iVar10 <= iVar13) {
            iVar13 = iVar10 + -1;
          }
          *(int *)(param_1 + 0x140) = iVar4;
          goto LAB_71af7bcc;
        }
        goto LAB_71af7bd0;
      }
      if (iVar7 < *(int *)(param_1 + 0x34)) {
        sVar3 = *(short *)(param_1 + 0x11c) + 2;
        *(short *)(param_1 + 0x11c) = sVar3;
        *(undefined4 *)(param_1 + 0x11e) = 0;
        if (*(short *)(param_1 + 0x126) < sVar3) {
          iVar4 = *(int *)(param_1 + 0x14c);
          *(undefined2 *)(param_1 + 0x11c) = 0;
          if (*(int *)(param_1 + 0x148) == iVar4) {
            iVar8 = 7;
            uVar2 = 0x4000;
          }
          else {
            uVar2 = FUN_71ba0440((iVar13 - iVar4) * 0x4000,*(int *)(param_1 + 0x148) - iVar4);
            if ((short)uVar2 < 0x147c) {
              if ((short)uVar2 < 0xa3e) {
                iVar8 = 0;
                if (0x51f < (short)uVar2) {
                  iVar8 = 1;
                }
              }
              else {
                iVar8 = 2;
                if (0xf5c < uVar2) {
                  iVar8 = 3;
                }
              }
            }
            else if (uVar2 < 0x1eb9) {
              iVar8 = 4;
              if (0x199a < uVar2) {
                iVar8 = 5;
              }
            }
            else {
              iVar8 = 6;
              if (0x2f5c < uVar2) {
                iVar8 = 7;
              }
            }
          }
          iVar13 = iVar4 + ((uint)((iVar13 - iVar4) *
                                  (int)(short)(*(short *)(iVar8 * 2 + 0x70086e18) -
                                              (short)((uint)((int)*(short *)(iVar8 * 2 + 0x70086e58)
                                                            * (int)(short)uVar2) >> 0xd))) >> 0xe);
          *(int *)(param_1 + 0x6c) = ((int)(iVar7 + (uVar5 >> 0x1a)) >> 6) * 0x43;
          if (iVar13 <= iVar10 + 2) {
            iVar13 = iVar10 + 2;
          }
          goto LAB_71af7bcc;
        }
        goto LAB_71af7bd0;
      }
      if (iVar7 < *(int *)(param_1 + 0x60)) {
        sVar3 = *(short *)(param_1 + 0x11c) + 2;
        *(short *)(param_1 + 0x11c) = sVar3;
        *(undefined4 *)(param_1 + 0x11e) = 0;
        if (*(short *)(param_1 + 0x128) < sVar3) {
          iVar4 = *(int *)(param_1 + 0x14c);
          *(undefined2 *)(param_1 + 0x11c) = 0;
          if (*(int *)(param_1 + 0x148) == iVar4) {
            iVar8 = 7;
            uVar2 = 0x4000;
          }
          else {
            uVar2 = FUN_71ba0440((iVar13 - iVar4) * 0x4000,*(int *)(param_1 + 0x148) - iVar4);
            if ((short)uVar2 < 0x147c) {
              if ((short)uVar2 < 0xa3e) {
                iVar8 = 0;
                if (0x51f < (short)uVar2) {
                  iVar8 = 1;
                }
              }
              else {
                iVar8 = 2;
                if (0xf5c < uVar2) {
                  iVar8 = 3;
                }
              }
            }
            else if (uVar2 < 0x1eb9) {
              iVar8 = 4;
              if (0x199a < uVar2) {
                iVar8 = 5;
              }
            }
            else {
              iVar8 = 6;
              if (0x2f5c < uVar2) {
                iVar8 = 7;
              }
            }
          }
          iVar13 = iVar4 + ((uint)((iVar13 - iVar4) *
                                  (int)(short)((&DAT_70086e68)[iVar8] -
                                              (short)((uint)((int)(short)(&DAT_70086de8)[iVar8] *
                                                            (int)(short)uVar2) >> 0xd))) >> 0xe);
          *(int *)(param_1 + 0x6c) = ((int)(iVar7 + (uVar5 >> 0x1a)) >> 6) * 0x43;
          if (iVar13 <= iVar10) {
            iVar13 = iVar10 + 1;
          }
          goto LAB_71af7bcc;
        }
        goto LAB_71af7bd0;
      }
      if (*(short *)(param_1 + 0x120) < 0xfa1) {
        *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x126) = 0x3e801f4;
      }
      *(int *)(param_1 + 0x13c) = iVar13;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      iVar27 = iVar27 + 1;
    } while (iVar27 != 5);
LAB_71af8038:
    *psVar12 = sVar24;
    if (param_5 != 1) goto LAB_71af7b3c;
LAB_71af8048:
    iVar13 = *(int *)(param_1 + 0x13c);
LAB_71af8050:
    if (iVar10 < iVar13) {
      *(int *)(param_1 + 0x13c) = iVar10;
      iVar13 = iVar10;
    }
    iVar6 = *(int *)(param_1 + 0x140);
    if (iVar13 <= *(int *)(param_1 + 0x140)) {
LAB_71af8068:
      iVar6 = *(int *)(param_1 + 0x150);
      if (*(int *)(param_1 + 0x150) <= iVar13) goto LAB_71af807c;
    }
  }
  else {
    iVar21 = *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) + (iVar21 - *(int *)(iVar25 + sVar24 * 4) >> 3);
    *(int *)(iVar25 + sVar24 * 4) = iVar21;
    iVar13 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar21 - *(int *)(param_1 + 0x68) >> 6);
    sVar29 = 0;
    if ((short)(sVar24 + 1) != 10) {
      sVar29 = sVar24 + 1;
    }
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) + (iVar13 - *(int *)(iVar25 + sVar29 * 4) >> 3);
    *(int *)(iVar25 + sVar29 * 4) = iVar13;
    iVar21 = *(int *)(param_1 + 0xa4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar13 - *(int *)(param_1 + 0x68) >> 6);
    sVar24 = 0;
    if ((short)(sVar29 + 1) != 10) {
      sVar24 = sVar29 + 1;
    }
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) + (iVar21 - *(int *)(iVar25 + sVar24 * 4) >> 3);
    *(int *)(iVar25 + sVar24 * 4) = iVar21;
    iVar13 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar21 - *(int *)(param_1 + 0x68) >> 6);
    sVar29 = 0;
    if ((short)(sVar24 + 1) != 10) {
      sVar29 = sVar24 + 1;
    }
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) + (iVar13 - *(int *)(iVar25 + sVar29 * 4) >> 3);
    *(int *)(iVar25 + sVar29 * 4) = iVar13;
    iVar21 = *(int *)(param_1 + 0xac);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar13 - *(int *)(param_1 + 0x68) >> 6);
    sVar24 = 0;
    if ((short)(sVar29 + 1) != 10) {
      sVar24 = sVar29 + 1;
    }
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) + (iVar21 - *(int *)(iVar25 + sVar24 * 4) >> 3);
    *(int *)(iVar25 + sVar24 * 4) = iVar21;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (iVar21 - *(int *)(param_1 + 0x68) >> 6);
    sVar29 = 0;
    if ((short)(sVar24 + 1) != 10) {
      sVar29 = sVar24 + 1;
    }
    *psVar12 = sVar29;
    if (param_5 == 1) goto LAB_71af8048;
LAB_71af7b3c:
    iVar13 = *(int *)(param_1 + 0x13c);
    if ((iVar6 - 1U & 0xffff) < 7999) goto LAB_71af8050;
    iVar6 = *(int *)(param_1 + 0x140);
    if (iVar13 <= *(int *)(param_1 + 0x140)) goto LAB_71af8068;
  }
  iVar13 = iVar6;
  *(int *)(param_1 + 0x13c) = iVar13;
LAB_71af807c:
  iVar6 = *(int *)(param_1 + 0x144);
  if (iVar13 < *(int *)(param_1 + 0x144)) {
    iVar6 = iVar13;
  }
  *param_3 = iVar6 >> (*(ushort *)(param_1 + 0x15c) & 0xff);
  return 0;
}


// =========================================================================
// Function: thunk_inMgZnfBNOSSOpDtueBvETeEtOBwuixuHGVFhUhTMooCyqmP
// Entry: 0x71e07fa0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_inMgZnfBNOSSOpDtueBvETeEtOBwuixuHGVFhUhTMooCyqmP
          (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 *param_6,undefined4 param_7,undefined1 *param_8,undefined4 param_9)

{
  short sVar1;
  int unaff_r5;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  if (iVar2 < 32000) {
    if (iVar2 == 8000) {
      if (param_4 != 0x50) {
        return 0xffffffff;
      }
      goto LAB_71af8114;
    }
    if (iVar2 != 16000) {
      return 0xffffffff;
    }
  }
  else {
    if (iVar2 != 32000) {
      unaff_r5 = 48000;
    }
    if (iVar2 != 32000 && iVar2 != unaff_r5) {
      return 0xffffffff;
    }
  }
  if (param_4 != 0xa0) {
    return 0xffffffff;
  }
LAB_71af8114:
  *param_8 = 0;
  *param_6 = param_5;
  iVar2 = thunk_zvqm_riAZvvlMvUDDvAVpUwEemGgwnFcAGNxGDwsQcNtinhYazzpWoZNRYMkpLZCxVFsH
                    (param_1 + 0x66,param_2,param_3,*param_1,(int)(short)param_1[0xa6],param_9);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  if (((short)param_1[2] < 3) &&
     ((((short)param_1[2] != 2 || ((short)param_1[0xa6] == 0)) &&
      (iVar2 = thunk_frrptaYHrVkLjTWpOpnjFWyEDQbkJlkGsWgtcsCzSpTAn
                         (param_1,param_5,param_6,(int)(short)param_1[0x61],param_7,param_8),
      iVar2 == -1)))) {
    return 0xffffffff;
  }
  sVar1 = *(short *)((int)param_1 + 0x12e);
  if (sVar1 < 2) {
    if (sVar1 != 1) {
      return 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x27) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x29) = *(undefined8 *)(param_1 + 0x2e);
    *(undefined8 *)(param_1 + 0x31) = *(undefined8 *)(param_1 + 0x3b);
    *(undefined8 *)(param_1 + 0x33) = *(undefined8 *)(param_1 + 0x3d);
    *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_1 + 0x3f);
    *(undefined8 *)(param_1 + 0x37) = *(undefined8 *)(param_1 + 0x41);
    param_1[0x2b] = param_1[0x30];
    *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_1 + 0x43);
  }
  *(short *)((int)param_1 + 0x12e) = sVar1 + -1;
  return 0;
}


// =========================================================================
// Function: thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
// Entry: 0x71e07fb0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH(int param_1,int param_2,byte param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  short sVar6;
  
  if (param_1 != 0) {
    if (*(short *)(param_1 + 0x18) == 0x2a) {
      if ((param_3 & 0xfe) == 0) {
        sVar1 = (short)((uint)param_2 >> 0x10);
        *(short *)(param_1 + 4) = sVar1;
        *(byte *)(param_1 + 10) = param_3;
        if ((uint)(param_2 * 0x10000) < 0x1f0001) {
          sVar2 = (short)param_2;
          *(short *)(param_1 + 6) = sVar2;
          sVar6 = sVar1;
          if (*(short *)(param_1 + 8) == 3) {
            sVar6 = sVar1 + sVar2;
            *(short *)(param_1 + 4) = sVar6;
          }
          uVar3 = thunk_pkssPMrNPDLQFdaDueUBWnjkb((int)(short)(sVar6 * 5 + 5),0xb);
          *(undefined2 *)(param_1 + 0x38) = 0x14;
          *(undefined4 *)(param_1 + 0x5c) = 0x101cfec;
          *(undefined4 *)(param_1 + 0x60) = 0xa2ab20;
          *(undefined4 *)(param_1 + 0x30) = 0x287984c;
          *(undefined4 *)(param_1 + 0x34) = 0x40c270;
          sVar6 = (short)uVar3 + 4;
          if (0x7ffb < uVar3) {
            sVar6 = 4;
          }
          *(undefined8 *)(param_1 + 0x1c) = 0x101cfec00ccc996;
          *(undefined8 *)(param_1 + 0x24) = 0x14490fc00a2ab20;
          if (*(short *)(param_1 + 8) == 3) {
            sVar6 = *(short *)(param_1 + 4);
          }
          *(undefined4 *)(param_1 + 0x2c) = 0x813652;
          *(short *)(param_1 + 0x3a) = sVar6;
          iVar4 = thunk_fubhOGLgfnxOrCIqQ_IzLaARVDLTdsAIrbCpovjaXawTCrW
                            (param_1 + 0x1a4,(int)*(short *)(param_1 + 4),
                             (int)*(short *)(param_1 + 6),*(undefined1 *)(param_1 + 10),(int)sVar6);
          if (iVar4 == -1) {
            return 0xffffffff;
          }
          *(byte *)(param_1 + 0x16) = param_3;
          *(short *)(param_1 + 0x14) = sVar1;
          *(short *)(param_1 + 0x12) = sVar2;
          return 0;
        }
      }
      uVar5 = 0x4654;
    }
    else {
      uVar5 = 0x4652;
    }
    *(undefined2 *)(param_1 + 0x1a) = uVar5;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_rSORcIvqrTcGgSKdWubshNQztkTsuH
// Entry: 0x71e07fc0 | Size: 1 bytes
// =========================================================================

void thunk_rSORcIvqrTcGgSKdWubshNQztkTsuH(void)

{
  int iVar1;
  
  iVar1 = imp_malloc(0x29c);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}


// =========================================================================
// Function: thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF
// Entry: 0x71e07fd0 | Size: 1 bytes
// =========================================================================

void thunk_SIHmzOHkGhPQFMvyfGPIUA_ZWfiuF(void)

{
  return;
}


// =========================================================================
// Function: thunk_gGMWhBzPQwqZHtAboZSSYkhOhldYhaGD_
// Entry: 0x71e07fe0 | Size: 1 bytes
// =========================================================================

int thunk_gGMWhBzPQwqZHtAboZSSYkhOhldYhaGD_
              (undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = thunk_rHxRDxNgJRPDYdgzUmpPHkmZEshLutEDuZzSOFQJSyBbqaFpFAGC(param_1 + 0x66,param_4);
  if (iVar4 != 0) {
    *(undefined2 *)((int)param_1 + 0x1a) = 0x4652;
    return -1;
  }
  *(undefined2 *)((int)param_1 + 0x116) = 0;
  iVar4 = -1;
  if (param_4 < 4) {
    *param_1 = param_5;
    *(short *)(param_1 + 2) = (short)param_4;
    thunk_sxrVWeVFeBcAFBxbcIuynZFQXRprWSmkCjydnXDJXm(param_1 + 0x58);
    *(undefined4 *)((int)param_1 + 0x126) = 0x2080154;
    param_1[0x4e] = 0x7f;
    param_1[0x47] = 0;
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[0x25] = 1000;
    *(undefined2 *)(param_1 + 0x49) = 0;
    uVar5 = param_3;
    if (*(short *)(param_1 + 2) == 2) {
      uVar5 = 0x7f;
    }
    if (*(short *)(param_1 + 2) == 2) {
      param_3 = 0xff;
      param_2 = 0;
    }
    param_1[0x4f] = uVar5;
    param_1[0x4c] = uVar5;
    param_1[0x46] = 400;
    iVar4 = param_3 + ((int)((param_3 - param_2) +
                            ((uint)((int)(param_3 - param_2) >> 0x1f) >> 0x1e)) >> 2);
    param_1[0x52] = iVar4;
    param_1[0x50] = iVar4;
    param_1[0x26] = 1000;
    param_1[0x19] = 0x4e2;
    param_1[0x1a] = 0x3f9c;
    *(undefined2 *)(param_1 + 0x57) = 0;
    param_1[0x56] = 0;
    param_1[0x54] = param_2 + ((iVar4 - param_2) * 10 >> 8);
    *(undefined2 *)(param_1 + 0x4d) = 0;
    *(undefined8 *)(param_1 + 0x1d) = 0x3e8000003e8;
    *(undefined8 *)(param_1 + 0x1f) = 0x3e8000003e8;
    *(undefined8 *)(param_1 + 0x21) = 0x3e8000003e8;
    *(undefined8 *)(param_1 + 0x23) = 0x3e8000003e8;
    *(undefined2 *)(param_1 + 0x45) = 0;
    param_1[0x27] = 0;
    param_1[0x28] = uVar1;
    param_1[0x29] = uVar2;
    param_1[0x2a] = uVar3;
    param_1[0x2b] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = uVar1;
    param_1[0x33] = uVar2;
    param_1[0x34] = uVar3;
    param_1[0x35] = 0;
    param_1[0x36] = uVar1;
    param_1[0x37] = uVar2;
    param_1[0x38] = uVar3;
    param_1[0x39] = 0;
    param_1[0x3a] = uVar1;
    param_1[0x3b] = uVar2;
    param_1[0x3c] = uVar3;
    param_1[0x3d] = 0;
    param_1[0x3e] = uVar1;
    param_1[0x3f] = uVar2;
    param_1[0x40] = uVar3;
    param_1[0x41] = 0;
    param_1[0x42] = uVar1;
    param_1[0x43] = uVar2;
    param_1[0x44] = uVar3;
    param_1[0x48] = 0;
    *(undefined4 *)((int)param_1 + 0x12a) = 0;
    param_1[0x53] = param_2;
    param_1[0x51] = param_3;
    param_1[0x55] = param_3;
    param_1[0x1c] = 0;
    *(undefined2 *)((int)param_1 + 0x12e) = 0;
    thunk_wFVZkpFMYOMdbcdwbWM(param_1 + 0xf,0,8);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 6) = 0x2a;
    param_1[3] = 0x90003;
    iVar4 = thunk_fUmBUDwwcvgcmwGWuOVjLILLOMZzjMILcWZQHpJpCYHkygqRigaSG_CH
                      (param_1,0x90003,*(undefined2 *)(param_1 + 4));
    if (iVar4 == -1) {
      *(undefined2 *)((int)param_1 + 0x1a) = 18000;
      return -1;
    }
    *(undefined2 *)(param_1 + 0xa6) = 0;
    iVar4 = -(uint)((int)param_3 <= param_2 || 0x3ffffff < param_3);
    param_1[0x1b] = param_1[7];
  }
  return iVar4;
}


// =========================================================================
// Function: thunk_fubhOGLgfnxOrCIqQ_IzLaARVDLTdsAIrbCpovjaXawTCrW
// Entry: 0x71e07ff0 | Size: 1 bytes
// =========================================================================

undefined4
thunk_fubhOGLgfnxOrCIqQ_IzLaARVDLTdsAIrbCpovjaXawTCrW
          (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  sVar1 = thunk_pkssPMrNPDLQFdaDueUBWnjkb((param_2 - param_5) * 2 | 1,3);
  uVar2 = thunk_pkssPMrNPDLQFdaDueUBWnjkb(param_2 << 1 | 1,3);
  uVar3 = 0xffffffff;
  if (uVar2 < 0x80) {
    iVar8 = param_5 - param_3;
    iVar10 = (int)(short)(sVar1 + (short)iVar8);
    uVar12 = (uint)*(ushort *)(&DAT_70098244 + uVar2 * 2);
    if (iVar10 < iVar8) {
      iVar10 = iVar8;
    }
    iVar10 = (int)(short)iVar10 * uVar12 * 0x40;
    sVar1 = thunk_pkssPMrNPDLQFdaDueUBWnjkb(param_5 << 0xd,0x6054);
    iVar8 = thunk_pkssPMrNPDLQFdaDueUBWnjkb(1,3);
    iVar14 = 0;
    iVar8 = (iVar8 + param_3) * -0x4000 + -0xc09f;
    uVar9 = uVar12 * 5 >> 6;
    uVar12 = uVar12 * 0x14;
    do {
      iVar4 = thunk_gbixOGWOrZftdbaKPhf((short)((short)iVar14 * 2 + -2) * 0xc0a9 | 1,3);
      uVar13 = uVar2 * 0x4000 - iVar4;
      uVar6 = uVar13;
      if ((int)uVar13 < 0) {
        uVar6 = -uVar13;
      }
      uVar5 = uVar6 >> 0xd & 0x1fffe;
      uVar5 = (uVar6 & 0x3fff) *
              ((uint)*(ushort *)(&DAT_70098246 + uVar5) - (uint)*(ushort *)(&DAT_70098244 + uVar5) &
              0xffff) + (uint)*(ushort *)(&DAT_70098244 + uVar5) * 0x4000;
      if ((int)uVar13 < 0) {
        uVar13 = (uint)(short)LZCOUNT(uVar6);
        if (uVar13 < 0xf) {
          uVar6 = (uVar6 >> (0xf - uVar13 & 0xff)) * 0x5c55;
          if (8 < uVar13) {
            uVar6 = uVar6 >> (uVar13 - 9 & 0xff);
            goto LAB_71af91cc;
          }
          uVar13 = 9 - uVar13;
          uVar5 = uVar5 >> (uVar13 & 0xff);
        }
        else {
          uVar6 = uVar6 * 0x5c55 >> 6;
LAB_71af91cc:
          uVar13 = 0;
        }
        uVar11 = 0;
        if (uVar6 < uVar5) {
          uVar11 = uVar5 - uVar6 >> (8 - uVar13 & 0xff);
        }
        uVar6 = iVar10 - uVar11 * uVar2;
        if ((int)uVar6 <= (int)uVar9) goto LAB_71af91f4;
LAB_71af921c:
        sVar7 = 0;
        if (iVar10 - uVar11 * uVar2 != 0) {
          sVar7 = (short)LZCOUNT(uVar6 ^ (int)uVar6 >> 0x1f) + -1;
        }
        uVar13 = (uint)sVar7;
      }
      else {
        uVar11 = uVar5 >> 8;
        uVar6 = iVar10 - uVar11 * uVar2;
        if ((int)uVar9 < (int)uVar6) goto LAB_71af921c;
LAB_71af91f4:
        if ((int)uVar6 < (int)-(uVar12 >> 8)) goto LAB_71af921c;
        uVar13 = (LZCOUNT(uVar12) * 0x10000 + -0x10000 >> 0x10) + 8;
      }
      uVar5 = uVar12 >> (9 - uVar13 & 0xff);
      if (8 < (int)uVar13) {
        uVar5 = uVar12 << (uVar13 - 9 & 0xff);
      }
      iVar4 = FUN_71ba0440(uVar6 << (uVar13 & 0xff),uVar5);
      if (iVar4 < 0) {
        uVar6 = -(1 - iVar4 >> 1);
      }
      else {
        uVar6 = iVar4 + 1U >> 1;
      }
      if ((param_4 != 0) && (iVar14 < (short)(sVar1 + 2))) {
        uVar6 = thunk_gbixOGWOrZftdbaKPhf(iVar8,0x14);
      }
      if ((int)uVar6 < 0x9859) {
        uVar6 = (int)(uVar6 * 0xd49a + 0x2000) >> 0xe;
        uVar13 = uVar6 & 0x3fff;
        if (0x1fff < uVar13) goto LAB_71af92fc;
LAB_71af90b4:
        uVar13 = (uint)((short)uVar13 * 0x1921) >> 0xd;
      }
      else {
        uVar6 = (uVar6 >> 1) * 0xd49a + 0x1000 >> 0xd;
        uVar13 = uVar6 & 0x3fff;
        if (uVar13 < 0x2000) goto LAB_71af90b4;
LAB_71af92fc:
        uVar13 = 0x4000 - ((0x4000 - uVar13) * 0x26df >> 0xd);
      }
      uVar5 = uVar6 + 0x40000 >> 0xe;
      uVar11 = uVar13 >> (0xe - uVar5 & 0xff);
      if (6 < uVar6 + 0x40000 >> 0xf) {
        uVar11 = uVar13 << (uVar5 - 0xe & 0xff);
      }
      *(uint *)(param_1 + iVar14 * 4) = uVar11 + (1 << (uVar5 & 0xff));
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 0xc0a9;
    } while (iVar14 != 0x20);
    uVar3 = 0;
  }
  return uVar3;
}


// =========================================================================
// Function: thunk_rHxRDxNgJRPDYdgzUmpPHkmZEshLutEDuZzSOFQJSyBbqaFpFAGC
// Entry: 0x71e08000 | Size: 1 bytes
// =========================================================================

undefined4 thunk_rHxRDxNgJRPDYdgzUmpPHkmZEshLutEDuZzSOFQJSyBbqaFpFAGC(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(short *)((int)param_1 + 0x8e) = (short)param_2;
  iVar1 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar2 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[2] = 0x10000;
  *(undefined2 *)((int)param_1 + 0xb6) = 0x3c00;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *param_1 = (uint)(param_2 != 3) << 0x1b;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  param_1[0x2e] = 0x1f400;
  param_1[0x2f] = 0x3c000000;
  param_1[0x30] = 0x1f400;
  *(undefined4 *)((int)param_1 + 0xb2) = 3;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x3b] = 0x3c000000;
  param_1[0x3c] = 0x1f400;
  param_1[0x3d] = 0x3c000000;
  param_1[0x3e] = 0x1f400;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xea) = 3;
  param_1[0x24] = 0;
  param_1[0x25] = iVar1;
  param_1[0x26] = iVar2;
  param_1[0x27] = iVar3;
  param_1[0x32] = 0;
  param_1[0x33] = iVar1;
  param_1[0x34] = iVar2;
  param_1[0x35] = iVar3;
  param_1[0x28] = 0;
  param_1[0x29] = iVar1;
  param_1[0x2a] = iVar2;
  param_1[0x2b] = iVar3;
  param_1[0x36] = 0;
  param_1[0x37] = iVar1;
  param_1[0x38] = iVar2;
  param_1[0x39] = iVar3;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return 0;
}


// =========================================================================
// Function: thunk_sxrVWeVFeBcAFBxbcIuynZFQXRprWSmkCjydnXDJXm
// Entry: 0x71e08010 | Size: 1 bytes
// =========================================================================

void thunk_sxrVWeVFeBcAFBxbcIuynZFQXRprWSmkCjydnXDJXm(undefined4 *param_1)

{
  param_1[10] = 0x1f400;
  param_1[0xc] = 0x1f400;
  *(undefined2 *)((int)param_1 + 0x26) = 0x3c00;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0x3c000000;
  *(undefined4 *)((int)param_1 + 0x22) = 3;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  param_1[5] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


// =========================================================================
// Function: thunk_exgqoWZmPxiReftggjgZnvdMvlzcgSCZBaFgTLZqIwbvamFOPaXZJuZhqlhXoj
// Entry: 0x71e08020 | Size: 1 bytes
// =========================================================================

undefined4 thunk_exgqoWZmPxiReftggjgZnvdMvlzcgSCZBaFgTLZqIwbvamFOPaXZJuZhqlhXoj(int param_1)

{
  thunk_bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq(param_1 + 200);
  return 0;
}


// =========================================================================
// Function: thunk_bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq
// Entry: 0x71e08030 | Size: 1 bytes
// =========================================================================

void thunk_bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq(int param_1,short *param_2,int param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  short sStack_3c;
  short sStack_3a;
  short sStack_38;
  short sStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x20);
  uVar14 = 0;
  uVar13 = 0;
  if (param_3 == 0xa0) {
    do {
      uStack_34 = (undefined2)((uint)((int)param_2[1] + (int)*param_2) >> 1);
      uStack_32 = (undefined2)((uint)((int)param_2[3] + (int)param_2[2]) >> 1);
      uStack_30 = (undefined2)((uint)((int)param_2[5] + (int)param_2[4]) >> 1);
      uStack_2e = (undefined2)((uint)((int)param_2[7] + (int)param_2[6]) >> 1);
      uStack_2c = (undefined2)((uint)((int)param_2[9] + (int)param_2[8]) >> 1);
      uStack_2a = (undefined2)((uint)((int)param_2[0xb] + (int)param_2[10]) >> 1);
      uStack_28 = (undefined2)((uint)((int)param_2[0xd] + (int)param_2[0xc]) >> 1);
      uStack_26 = (undefined2)((uint)((int)param_2[0xf] + (int)param_2[0xe]) >> 1);
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(&uStack_34,8,&sStack_3c,param_1);
      param_2 = param_2 + 0x10;
      bVar15 = uVar13 < 9;
      iVar4 = (int)sStack_3c + (int)(short)uVar9;
      iVar6 = (iVar4 % 0x40) * iVar4;
      iVar3 = (int)sStack_3a + (int)(short)((short)((uint)(iVar4 * 600) >> 10) - sStack_3c);
      iVar10 = (iVar3 % 0x40) * iVar3;
      iVar7 = (int)sStack_38 + (int)(short)((short)((uint)(iVar3 * 600) >> 10) - sStack_3a);
      iVar11 = (iVar7 % 0x40) * iVar7;
      iVar5 = (int)sStack_36 + (int)(short)((short)((uint)(iVar7 * 600) >> 10) - sStack_38);
      iVar12 = (iVar5 % 0x40) * iVar5;
      uVar9 = ((uint)(iVar5 * 600) >> 10) - (int)sStack_36;
      uVar1 = (undefined2)uVar9;
      uVar14 = ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1a)) >> 6) * iVar5 +
               ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1a)) >> 6) * iVar7 +
               ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1a)) >> 6) * iVar3 +
               ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1a)) >> 6) * iVar4 + uVar14 +
               ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1a)) >> 6) +
               ((int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1a)) >> 6) +
               ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1a)) >> 6) +
               ((int)(iVar12 + ((uint)(iVar12 >> 0x1f) >> 0x1a)) >> 6);
      uVar13 = uVar13 + 1;
    } while (bVar15);
  }
  else {
    do {
      thunk_yyxIsXIaqMoPzRDYYMMdOKS(param_2,8,&sStack_3c,param_1);
      param_2 = param_2 + 8;
      bVar15 = uVar13 < 9;
      iVar4 = (int)sStack_3c + (int)(short)uVar9;
      iVar6 = (iVar4 % 0x40) * iVar4;
      iVar3 = (int)sStack_3a + (int)(short)((short)((uint)(iVar4 * 600) >> 10) - sStack_3c);
      iVar10 = (iVar3 % 0x40) * iVar3;
      iVar7 = (int)sStack_38 + (int)(short)((short)((uint)(iVar3 * 600) >> 10) - sStack_3a);
      iVar11 = (iVar7 % 0x40) * iVar7;
      iVar5 = (int)sStack_36 + (int)(short)((short)((uint)(iVar7 * 600) >> 10) - sStack_38);
      iVar12 = (iVar5 % 0x40) * iVar5;
      uVar9 = ((uint)(iVar5 * 600) >> 10) - (int)sStack_36;
      uVar1 = (undefined2)uVar9;
      uVar14 = ((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1a)) >> 6) * iVar5 +
               ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1a)) >> 6) * iVar7 +
               ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1a)) >> 6) * iVar3 +
               ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1a)) >> 6) * iVar4 + uVar14 +
               ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1a)) >> 6) +
               ((int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1a)) >> 6) +
               ((int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1a)) >> 6) +
               ((int)(iVar12 + ((uint)(iVar12 >> 0x1f) >> 0x1a)) >> 6);
      uVar13 = uVar13 + 1;
    } while (bVar15);
  }
  *(undefined2 *)(param_1 + 0x20) = uVar1;
  if (*(short *)(param_1 + 0x22) < 0xfa) {
    *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
  }
  uVar8 = (ushort)(uVar14 < 0x10000) << 4;
  if (uVar14 << uVar8 < 0x1000000) {
    uVar8 = (ushort)(uVar14 < 0x10000) << 4 | 8;
  }
  if (uVar14 << uVar8 < 0x10000000) {
    uVar8 = uVar8 | 4;
  }
  if (uVar14 << uVar8 < 0x40000000) {
    uVar8 = uVar8 | 2;
  }
  if (uVar14 << uVar8 < 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 << 0xb ^ 0x7800;
  sVar2 = (short)((uint)(*(short *)(param_1 + 0x2e) * 0xf + (int)(short)uVar8) >> 4);
  *(short *)(param_1 + 0x2e) = sVar2;
  iVar3 = *(int *)(param_1 + 0x30) * 0xf + ((uint)((int)(short)uVar8 * (int)(short)uVar8) >> 0xc);
  iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1c)) >> 4;
  *(int *)(param_1 + 0x30) = iVar3;
  uVar1 = thunk_MHqCVHMN_fuWAI(iVar3 * 0x1000 - (int)sVar2 * (int)sVar2);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  sVar2 = SignedSaturate(*(short *)(param_1 + 0x22) + 1,0x10);
  SignedSaturate(0,0x10);
  uVar1 = thunk_pkssPMrNPDLQFdaDueUBWnjkb
                    ((int)*(short *)(param_1 + 0x22) * (int)*(short *)(param_1 + 0x26) +
                     (int)(short)uVar8,(int)sVar2);
  *(undefined2 *)(param_1 + 0x26) = uVar1;
  sVar2 = SignedSaturate(*(short *)(param_1 + 0x22) + 1,0x10);
  SignedSaturate(0,0x10);
  iVar3 = thunk_gbixOGWOrZftdbaKPhf
                    (*(int *)(param_1 + 0x28) * (int)*(short *)(param_1 + 0x22) +
                     ((uint)((int)(short)uVar8 * (int)(short)uVar8) >> 0xc),(int)sVar2);
  *(int *)(param_1 + 0x28) = iVar3;
  sVar2 = thunk_MHqCVHMN_fuWAI
                    (iVar3 * 0x1000 -
                     (int)*(short *)(param_1 + 0x26) * (int)*(short *)(param_1 + 0x26));
  *(short *)(param_1 + 0x2c) = sVar2;
  uVar9 = thunk_gbixOGWOrZftdbaKPhf((short)(uVar8 - *(short *)(param_1 + 0x26)) * 0x3000,(int)sVar2)
  ;
  iVar3 = (int)*(short *)(param_1 + 0x24);
  uVar13 = iVar3 * 0xd000 >> 10;
  uVar9 = uVar9 + uVar13 >> 6 |
          (iVar3 / 0x9d8a + (iVar3 >> 0x1f) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar9,uVar13)) *
          0x4000000;
  uVar13 = 0xfffff800;
  if (-0x800 < (int)uVar9) {
    uVar13 = uVar9;
  }
  if (0x7ff < (int)uVar13) {
    uVar13 = 0x800;
  }
  *(short *)(param_1 + 0x24) = (short)uVar13;
  return;
}


// =========================================================================
// Function: thunk_zvqm_riAZvvlMvUDDvAVpUwEemGgwnFcAGNxGDwsQcNtinhYazzpWoZNRYMkpLZCxVFsH
// Entry: 0x71e08040 | Size: 1 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4
thunk_zvqm_riAZvvlMvUDDvAVpUwEemGgwnFcAGNxGDwsQcNtinhYazzpWoZNRYMkpLZCxVFsH
          (uint *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  undefined8 *puVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint auStack_4c [10];
  
  if (param_4 < 32000) {
    if (param_4 != 8000) {
      if (param_4 != 16000) {
        return 0xffffffff;
      }
      goto LAB_71af98c0;
    }
    iVar12 = 8;
    bVar10 = true;
  }
  else {
    if (param_4 != 48000 && param_4 != 32000) {
      return 0xffffffff;
    }
LAB_71af98c0:
    iVar12 = 0x10;
    bVar10 = false;
  }
  uVar2 = thunk_bNWlaxubhpeluUleridBXMkymdNKSwbXQBwpDaqanOxsTOoEq
                    (param_1 + 0x24,*param_2,iVar12 * 10);
  if (10 < *(short *)((int)param_1 + 0xea)) {
    uVar2 = uVar2 * 3 - (int)(short)param_1[0x3b];
  }
  sVar7 = -0x41;
  if (10 < *(short *)((int)param_1 + 0xea)) {
    uVar2 = uVar2 >> 2;
  }
  sVar5 = (short)uVar2;
  if (sVar5 < 0x401) {
    if (sVar5 < 0) {
      sVar7 = 0;
      sVar5 = *(short *)((int)param_1 + 0x8e);
      goto joined_r0x71af9930;
    }
    sVar7 = (short)(-sVar5 * 0x41 >> 10);
  }
  sVar5 = *(short *)((int)param_1 + 0x8e);
joined_r0x71af9930:
  if (sVar5 != 3) {
    uVar1 = (ushort)param_1[0x2f];
    sVar5 = 0;
    if ((3999 < (short)uVar1) && (sVar5 = sVar7, uVar1 >> 5 < 0xfd)) {
      sVar5 = (short)((uVar1 - 4000 & 0xffff) * (int)sVar7 >> 0xc);
    }
    sVar7 = 0;
    if (param_5 == 0) {
      sVar7 = sVar5;
    }
  }
  puVar6 = (undefined8 *)*param_2;
  auVar17 = VectorMultiply(*puVar6,*puVar6,2,0);
  auVar18 = VectorMultiply(puVar6[1],puVar6[1],2,0);
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar6[2],puVar6[2],2,0);
    auVar19 = VectorMultiply(puVar6[3],puVar6[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  puVar3 = (undefined8 *)((int)puVar6 + iVar12 * 2);
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[0] = (uint)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  puVar3 = (undefined8 *)((int)puVar6 + iVar12 * 4);
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[1] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  puVar3 = (undefined8 *)((int)puVar6 + iVar12 * 6);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[2] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  puVar3 = puVar6 + iVar12;
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[3] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  puVar3 = (undefined8 *)((int)puVar6 + iVar12 * 10);
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[4] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  puVar3 = (undefined8 *)((int)puVar6 + iVar12 * 0xc);
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[5] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  puVar3 = (undefined8 *)((int)puVar6 + iVar12 * 0xe);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[6] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  puVar3 = puVar6 + iVar12 * 2;
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  auVar17 = VectorMultiply(*puVar3,*puVar3,2,0);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar18 = VectorMultiply(puVar3[1],puVar3[1],2,0);
  auStack_4c[7] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar3[2],puVar3[2],2,0);
    auVar19 = VectorMultiply(puVar3[3],puVar3[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  puVar6 = (undefined8 *)((int)puVar6 + iVar12 * 0x12);
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auVar17 = VectorMultiply(*puVar6,*puVar6,2,0);
  auVar18 = VectorMultiply(puVar6[1],puVar6[1],2,0);
  auStack_4c[8] = (int)uVar16;
  auVar17 = VectorMax(auVar18,auVar17,4,0);
  if (!bVar10) {
    auVar18 = VectorMultiply(puVar6[2],puVar6[2],2,0);
    auVar19 = VectorMultiply(puVar6[3],puVar6[3],2,0);
    auVar17 = VectorMax(auVar18,auVar17,4,0);
    auVar17 = VectorMax(auVar19,auVar17,4,0);
  }
  uVar16 = VectorPairwiseMax(auVar17._0_8_,auVar17._8_8_,4,0);
  puVar15 = param_1 + 3;
  iVar12 = 0;
  uVar16 = VectorPairwiseMax(uVar16,uVar16,4,0);
  auStack_4c[9] = (int)uVar16;
  puVar14 = param_6 + 1;
  *param_6 = param_1[2];
  do {
    uVar11 = *param_1;
    uVar2 = param_1[1];
    uVar13 = auStack_4c[iVar12];
    uVar2 = (short)(uVar2 >> 0x10) * -1000 + uVar2 + ((int)((uVar2 & 0xffff) * -1000) >> 0x10);
    if ((int)uVar2 < (int)uVar13) {
      uVar2 = uVar13;
    }
    param_1[1] = uVar2;
    if ((int)uVar11 < (int)uVar13) {
      uVar11 = (short)(uVar13 - uVar11 >> 0x10) * 500 + uVar11 +
               ((uVar13 - uVar11 & 0xffff) * 500 >> 0x10);
    }
    else {
      uVar11 = (int)sVar7 * (int)(short)(uVar11 >> 0x10) + uVar11 +
               ((int)((uVar11 & 0xffff) * (int)sVar7) >> 0x10);
    }
    *param_1 = uVar11;
    if ((int)uVar11 < (int)uVar2) {
      uVar11 = uVar2;
    }
    if (uVar11 == 0) {
      iVar8 = 0x1f;
    }
    else {
      iVar8 = LZCOUNT(uVar11);
    }
    uVar2 = puVar15[(short)iVar8];
    uVar11 = uVar11 << (int)(short)iVar8;
    puVar14[iVar12] =
         uVar2 + (int)((ulonglong)
                       ((longlong)(int)((uVar11 & 0x7fffffff) >> 0x13) *
                       (longlong)(int)((puVar15 + (short)iVar8)[-1] - uVar2)) >> 0xc);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 10);
  if (param_1[1] == 0) {
    iVar12 = 0x1f;
    uVar2 = 0;
  }
  else {
    uVar2 = param_1[1];
    iVar12 = (int)(short)LZCOUNT(param_1[1]);
    if (uVar2 == 0) {
      iVar12 = 0x1f;
    }
  }
  iVar12 = (int)((iVar12 * 0x2000000 -
                 (((uVar2 << iVar12) >> 6 & 0x1ff0000) +
                 iVar8 * 0x2000000 + (uVar11 >> 0x13 & 0xff8) * -0x2000 +
                 (uint)(ushort)param_1[0x31] * 0x10000)) + 0x3e80000) >> 0x10;
  if (iVar12 < 0) {
    *(undefined2 *)(param_1 + 0x23) = 0;
  }
  else {
    uVar2 = (short)param_1[0x23] * 7 + iVar12;
    *(short *)(param_1 + 0x23) = (short)(uVar2 >> 3);
    uVar2 = (int)(uVar2 * 0x2000) >> 0x10;
    if (0 < (int)uVar2) {
      iVar12 = 0xb2;
      if (uVar2 < 0x9c5 && 0x9c4 - uVar2 != 0) {
        iVar12 = (0x9c4 - uVar2 >> 5) + 0xb2;
      }
      uVar2 = param_6[1] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[1] = iVar8 + *puVar15;
      uVar2 = param_6[2] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[2] = iVar8 + *puVar15;
      uVar2 = param_6[3] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[3] = iVar8 + *puVar15;
      uVar2 = param_6[4] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[4] = iVar8 + *puVar15;
      uVar2 = param_6[5] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[5] = iVar8 + *puVar15;
      uVar2 = param_6[6] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[6] = iVar8 + *puVar15;
      uVar2 = param_6[7] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[7] = iVar8 + *puVar15;
      uVar2 = param_6[8] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[8] = iVar8 + *puVar15;
      uVar2 = param_6[9] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[9] = iVar8 + *puVar15;
      uVar2 = param_6[10] - *puVar15;
      iVar8 = (int)(uVar2 * iVar12) >> 8;
      if (0x800000 < (int)uVar2) {
        iVar8 = (uVar2 >> 8) * iVar12;
      }
      param_6[10] = iVar8 + *puVar15;
    }
  }
  iVar12 = 0;
  do {
    uVar2 = puVar14[iVar12];
    sVar7 = 10;
    if (0x2d40fff < (int)uVar2) {
      iVar8 = LZCOUNT(uVar2);
      uVar2 = puVar14[iVar12];
      sVar7 = 0x11 - (short)iVar8;
    }
    uVar9 = (uint)sVar7;
    iVar8 = ((int)uVar2 >> (uVar9 & 0xff)) + 1;
    uVar13 = iVar8 * iVar8;
    iVar8 = ((int)auStack_4c[iVar12] >> 0xc) + 1;
    uVar11 = 0x7fff >> (uVar9 * 2 - 0x16 & 0xff);
    if ((int)uVar9 < 0xc) {
      uVar11 = 0x7fff << (uVar9 * -2 + 0x16 & 0xff);
    }
    if ((int)uVar11 < (int)(iVar8 * (uVar13 >> 0xd) + ((int)(iVar8 * (uVar13 & 0x1fff)) >> 0xd))) {
      do {
        if ((int)uVar2 < 0x800000) {
          uVar2 = (int)(uVar2 * 0xfd + ((uint)((int)(uVar2 * 0xfd) >> 0x1f) >> 0x18)) >> 8;
        }
        else {
          uVar2 = (uVar2 >> 8) * 0xfd;
        }
        iVar4 = ((int)uVar2 >> (uVar9 & 0xff)) + 1;
        uVar13 = iVar4 * iVar4;
      } while ((int)uVar11 <
               (int)(iVar8 * (uVar13 >> 0xd) + ((int)(iVar8 * (uVar13 & 0x1fff)) >> 0xd)));
      puVar14[iVar12] = uVar2;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 10);
  uVar11 = param_6[2];
  uVar2 = param_6[3];
  if ((int)uVar11 < (int)param_6[1]) {
    *puVar14 = uVar11;
  }
  uVar13 = param_6[4];
  if ((int)uVar2 < (int)uVar11) {
    param_6[2] = uVar2;
  }
  uVar11 = param_6[5];
  if ((int)uVar13 < (int)uVar2) {
    param_6[3] = uVar13;
  }
  uVar2 = param_6[6];
  if ((int)uVar11 < (int)uVar13) {
    param_6[4] = uVar11;
  }
  uVar13 = param_6[7];
  if ((int)uVar2 < (int)uVar11) {
    param_6[5] = uVar2;
  }
  uVar11 = param_6[8];
  if ((int)uVar13 < (int)uVar2) {
    param_6[6] = uVar13;
  }
  uVar2 = param_6[9];
  if ((int)uVar11 < (int)uVar13) {
    param_6[7] = uVar11;
  }
  uVar13 = param_6[10];
  if ((int)uVar2 < (int)uVar11) {
    param_6[8] = uVar2;
  }
  if ((int)uVar13 < (int)uVar2) {
    param_6[9] = uVar13;
  }
  param_1[2] = uVar13;
  return 0;
}


// =========================================================================
// Function: thunk_zCPtFdBCzqBvDfcR_hdGqH_zlOhpziyujichpIETGRfTCbtzBputjc
// Entry: 0x71e08050 | Size: 1 bytes
// =========================================================================

undefined4
thunk_zCPtFdBCzqBvDfcR_hdGqH_zlOhpziyujichpIETGRfTCbtzBputjc
          (int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int *piVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_34;
  
  if (param_3 < 32000) {
    if (param_3 == 8000) {
      iVar12 = 8;
      iStack_34 = 1;
      goto joined_r0x71afa1ac;
    }
    if (param_3 != 16000) {
      return 0xffffffff;
    }
  }
  else if (param_3 != 48000 && param_3 != 32000) {
    return 0xffffffff;
  }
  iVar12 = 0x10;
  iStack_34 = 0;
joined_r0x71afa1ac:
  if (param_2 != 0) {
    piVar8 = param_5;
    iVar13 = param_2;
    do {
      if (*param_4 != *piVar8) {
        imp___aeabi_memcpy(*piVar8,*param_4,iVar12 * 0x14);
      }
      param_4 = param_4 + 1;
      piVar8 = piVar8 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    iVar10 = 0;
    iVar5 = *param_1;
    iVar7 = param_1[1];
    iVar13 = iVar5 << 4;
    do {
      piVar8 = param_5;
      iVar11 = param_2;
      do {
        psVar6 = (short *)(*piVar8 + iVar10 * 2);
        sVar1 = *psVar6;
        sVar9 = 0x7fff;
        iVar2 = (int)((uint6)((int6)(iVar13 + 0x7f >> 7) * (int6)sVar1) >> 0x10);
        if ((iVar2 < 0x1000) && (sVar9 = -0x8000, -0x1001 < iVar2)) {
          sVar9 = (short)((uint)((iVar13 >> 4) * (int)sVar1) >> 0x10);
        }
        piVar8 = piVar8 + 1;
        iVar11 = iVar11 + -1;
        *psVar6 = sVar9;
      } while (iVar11 != 0);
      iVar10 = iVar10 + 1;
      iVar13 = iVar13 + (iVar7 - iVar5 << iStack_34);
    } while (iVar10 != iVar12);
    iVar5 = 0;
    iVar10 = param_1[2];
    iVar13 = iVar7 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 2 + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar10 - iVar7 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar7 = param_1[3];
    iVar13 = iVar10 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 4 + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar7 - iVar10 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar10 = param_1[4];
    iVar13 = iVar7 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 6 + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar10 - iVar7 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar7 = param_1[5];
    iVar13 = iVar10 << 4;
    do {
      piVar8 = param_5;
      iVar11 = param_2;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 8 + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar7 - iVar10 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar10 = param_1[6];
    iVar13 = iVar7 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 10 + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar10 - iVar7 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar7 = param_1[7];
    iVar13 = iVar10 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 0xc + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar7 - iVar10 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar10 = param_1[8];
    iVar13 = iVar7 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 0xe + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar10 - iVar7 << iStack_34);
    } while (iVar5 != iVar12);
    iVar5 = 0;
    iVar7 = param_1[9];
    iVar13 = iVar10 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 0x10 + iVar5 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (iVar7 - iVar10 << iStack_34);
    } while (iVar5 != iVar12);
    iVar10 = 0;
    iVar5 = param_1[10];
    iVar13 = iVar7 << 4;
    do {
      iVar11 = param_2;
      piVar8 = param_5;
      do {
        iVar11 = iVar11 + -1;
        psVar6 = (short *)(*piVar8 + iVar12 * 0x12 + iVar10 * 2);
        uVar3 = (undefined4)((uint6)((int6)(iVar13 >> 4) * (int6)*psVar6) >> 0x10);
        uVar4 = SignedSaturate(uVar3,0x10);
        SignedDoesSaturate(uVar3,0x10);
        *psVar6 = (short)uVar4;
        piVar8 = piVar8 + 1;
      } while (iVar11 != 0);
      iVar10 = iVar10 + 1;
      iVar13 = iVar13 + (iVar5 - iVar7 << iStack_34);
    } while (iVar10 != iVar12);
  }
  return 0;
}


// =========================================================================
// Function: thunk_EmKEwmqKrgPklnpXPBmQYkGwmaYZmjFeEkjXwiY
// Entry: 0x71e08060 | Size: 1 bytes
// =========================================================================

void thunk_EmKEwmqKrgPklnpXPBmQYkGwmaYZmjFeEkjXwiY
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,double param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)CONCAT44(param_4,param_3);
  if ((0 < *(int *)(param_1 + 0x288)) && (*(int *)(param_1 + 0x284) != 0)) {
    iVar2 = param_1 + *(int *)(*(int *)(param_1 + 0x27c) + *(int *)(param_1 + 0x280) * 4) * 8;
    uVar1 = -*(int *)(*(int *)(param_1 + 0x278) + *(int *)(param_1 + 0x280) * 4);
    uVar3 = *(uint *)(iVar2 + 0x10);
    *(uint *)(iVar2 + 0x10) = uVar3 + uVar1;
    uVar4 = *(uint *)(param_1 + 8);
    *(uint *)(iVar2 + 0x14) =
         *(int *)(iVar2 + 0x14) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
    *(uint *)(param_1 + 8) = uVar4 + uVar1;
    *(uint *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar4,uVar1);
  }
  iVar2 = 0;
  if ((0.0759621091765857 < dVar5) && (iVar2 = 0x4c, dVar5 < 35664.7189489147)) {
    dVar6 = (double)imp_log(param_3,param_4);
    dVar6 = (dVar6 + 2.57752062648587) * 5.81954605750359;
    dVar6 = (double)imp_floor(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    iVar2 = (int)(longlong)dVar6;
    if (((double)(&DAT_70095810)[iVar2] + (double)(&DAT_70095810)[iVar2 + 1]) * 0.5 < dVar5) {
      iVar2 = iVar2 + 1;
    }
  }
  dVar5 = (double)imp_floor(SUB84(param_5 * 1024.0,0),(int)((ulonglong)(param_5 * 1024.0) >> 0x20));
  thunk_qAvegSplzNLgWwWHWHXPggDgtqWzEkwVGMAnfSRWECXmAMnOjYHVjesxZxJ_
            (param_1,(int)(longlong)dVar5,iVar2);
  return;
}


// =========================================================================
// Function: thunk_qAvegSplzNLgWwWHWHXPggDgtqWzEkwVGMAnfSRWECXmAMnOjYHVjesxZxJ_
// Entry: 0x71e08070 | Size: 1 bytes
// =========================================================================

void thunk_qAvegSplzNLgWwWHWHXPggDgtqWzEkwVGMAnfSRWECXmAMnOjYHVjesxZxJ_
               (int *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_1[0xa2] < 1) goto LAB_71a9a72c;
  iVar5 = param_1[0xa3];
  if ((int)param_2 < 0xcd) {
    iVar11 = 0;
    param_2 = 0;
    if (iVar5 - 1U < 7) {
      iVar2 = param_1[0x9f];
      iVar10 = param_1[0x9e];
      iVar5 = param_1[0xa2];
      if (0 < param_1[0xa0]) {
        iVar5 = param_1[0xa0];
      }
      do {
        iVar3 = iVar5 + -1;
        iVar9 = *(int *)(iVar10 + iVar3 * 4);
        iVar6 = *(int *)(iVar2 + iVar3 * 4);
        *(undefined4 *)(iVar10 + iVar3 * 4) = 0;
        uVar4 = -iVar9;
        iVar9 = param_1[0xa3];
        param_1[0xa3] = iVar9 + -1;
        puVar8 = (uint *)(param_1 + iVar6 * 2 + 4);
        uVar7 = *puVar8;
        *puVar8 = uVar7 + uVar4;
        iVar6 = param_1[0xa2];
        puVar8[1] = puVar8[1] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar7,uVar4);
        uVar7 = param_1[2];
        bVar1 = 1 < iVar5;
        iVar5 = iVar6;
        if (bVar1) {
          iVar5 = iVar3;
        }
        param_2 = 0;
        param_1[2] = uVar7 + uVar4;
        param_1[3] = param_1[3] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar7,uVar4);
      } while (1 < iVar9);
    }
LAB_71a9a6e8:
    param_1[0xa3] = iVar11;
  }
  else if (iVar5 < 8) {
    iVar11 = iVar5 + 1;
    goto LAB_71a9a6e8;
  }
  iVar5 = param_1[0x9f];
  *(uint *)(param_1[0x9e] + param_1[0xa0] * 4) = param_2;
  *(int *)(iVar5 + param_1[0xa0] * 4) = param_3;
  iVar5 = param_1[0xa0];
  param_1[0xa0] = iVar5 + 1;
  if (param_1[0xa2] <= iVar5 + 1) {
    param_1[0xa0] = 0;
    param_1[0xa1] = 1;
  }
LAB_71a9a72c:
  iVar5 = *param_1;
  uVar4 = param_1[param_3 * 2 + 4];
  iVar11 = param_1[param_3 * 2 + 5];
  if (-2 < iVar5) {
    iVar5 = iVar5 + 1;
  }
  *param_1 = iVar5;
  param_1[param_3 * 2 + 4] = uVar4 + param_2;
  param_1[param_3 * 2 + 5] = iVar11 + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar4,param_2);
  uVar4 = param_1[2];
  param_1[2] = uVar4 + param_2;
  param_1[3] = param_1[3] + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar4,param_2);
  return;
}


// =========================================================================
// Function: thunk_VpBqURepcoFFtHABcmzgULPyXXwqy_xNiVuQOasVfKxVwR
// Entry: 0x71e08080 | Size: 1 bytes
// =========================================================================

double thunk_VpBqURepcoFFtHABcmzgULPyXXwqy_xNiVuQOasVfKxVwR(int param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_71ba1980(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return dVar1 * 0.0009765625;
}


// =========================================================================
// Function: thunk_nEDAmlzXJkeLWtj_mwYjTINzwJsOKbUKkpGVsj
// Entry: 0x71e08090 | Size: 1 bytes
// =========================================================================

undefined4 thunk_nEDAmlzXJkeLWtj_mwYjTINzwJsOKbUKkpGVsj(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_MwhHq(0x290);
  thunk_XqGRNqPFApvSQGRruhXWk_FyqzoqWjPEw();
  return uVar1;
}


// =========================================================================
// Function: thunk_XqGRNqPFApvSQGRruhXWk_FyqzoqWjPEw
// Entry: 0x71e080a0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_XqGRNqPFApvSQGRruhXWk_FyqzoqWjPEw(undefined4 *param_1)

{
  *param_1 = 0;
  imp___aeabi_memclr8(param_1 + 2,0x288);
  return param_1;
}


// =========================================================================
// Function: thunk_qHqYRlOlyOiAbvHtJzZxzIWXMunrhGiFhbZiox
// Entry: 0x71e080b0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_qHqYRlOlyOiAbvHtJzZxzIWXMunrhGiFhbZiox(int param_1)

{
  undefined4 uVar1;
  
  if (-1 < param_1) {
    uVar1 = thunk_MwhHq(0x290);
    thunk_YLqcifXKZGMwoIrIUHHcFbxEhlAJcnsfW(uVar1,param_1);
    return uVar1;
  }
  return 0;
}


// =========================================================================
// Function: thunk_YLqcifXKZGMwoIrIUHHcFbxEhlAJcnsfW
// Entry: 0x71e080c0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_YLqcifXKZGMwoIrIUHHcFbxEhlAJcnsfW(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = 0;
  imp___aeabi_memclr8(param_1 + 2,0x270);
  iVar2 = param_2 << 2;
  if (0x3fffffff < param_2) {
    iVar2 = -1;
  }
  uVar1 = thunk__IBDl(iVar2);
  param_1[0x9e] = uVar1;
  uVar1 = thunk__IBDl(iVar2);
  param_1[0x9f] = uVar1;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = param_2;
  param_1[0xa3] = 0;
  return param_1;
}


// =========================================================================
// Function: thunk_mtdKhYFI_vhpibyWVtOBUHwNOcs_LLYvvGkRq
// Entry: 0x71e080d0 | Size: 1 bytes
// =========================================================================

void thunk_mtdKhYFI_vhpibyWVtOBUHwNOcs_LLYvvGkRq(undefined4 *param_1)

{
  param_1[0xa3] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *param_1 = 0;
  imp___aeabi_memclr8(param_1 + 2,0x270);
  return;
}


// =========================================================================
// Function: thunk_MOAaukpeOIZgFbAfzPXFzXnQZiELzFIqrvQRPkpxiCcG
// Entry: 0x71e080e0 | Size: 1 bytes
// =========================================================================

double thunk_MOAaukpeOIZgFbAfzPXFzXnQZiELzFIqrvQRPkpxiCcG(int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((int)(uint)(*(int *)(param_1 + 8) == 0) <= *(int *)(param_1 + 0xc)) {
    dVar6 = (double)FUN_71ba1980();
    iVar3 = 0;
    dVar4 = 0.0;
    do {
      puVar2 = (undefined4 *)(param_1 + 0x10 + iVar3);
      dVar5 = (double)FUN_71ba1980(*puVar2,puVar2[1]);
      pdVar1 = (double *)((int)&DAT_70095810 + iVar3);
      iVar3 = iVar3 + 8;
      dVar4 = dVar4 + (1.0 / dVar6) * dVar5 * *pdVar1;
    } while (iVar3 != 0x268);
    return dVar4;
  }
  return 0.0759621091765857;
}


// =========================================================================
// Function: thunk_MZrzQnjjCNkPKaXZEPDPvFIVyzevFMeDF
// Entry: 0x71e080f0 | Size: 1 bytes
// =========================================================================

int thunk_MZrzQnjjCNkPKaXZEPDPvFIVyzevFMeDF(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x27c);
  *(undefined4 *)(param_1 + 0x27c) = 0;
  if (iVar1 != 0) {
    thunk_dGrRHE();
  }
  iVar1 = *(int *)(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (iVar1 != 0) {
    thunk_dGrRHE();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_gXDEmQIiMDKTgXOqJyCSpLHqu
// Entry: 0x71e08100 | Size: 1 bytes
// =========================================================================

double thunk_gXDEmQIiMDKTgXOqJyCSpLHqu(undefined4 param_1,undefined4 param_2)

{
  return ((double)CONCAT44(param_2,param_1) * 8.6858896380803) / 5.8195460575138;
}


// =========================================================================
// Function: thunk_ndzEUwqhAhYAMnRjKEoRfzkUfhruD
// Entry: 0x71e08110 | Size: 1 bytes
// =========================================================================

double thunk_ndzEUwqhAhYAMnRjKEoRfzkUfhruD(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  
  if ((double)CONCAT44(param_2,param_1) != 0.0) {
    dVar1 = (double)imp_log(param_1,param_2);
    return dVar1 * 5.8195460575138;
  }
  return -15.0;
}


// =========================================================================
// Function: thunk_TSkDdXZgQldUgStEWziqRixTYmV
// Entry: 0x71e08120 | Size: 1 bytes
// =========================================================================

double thunk_TSkDdXZgQldUgStEWziqRixTYmV(undefined4 param_1,undefined4 param_2)

{
  return (((double)CONCAT44(param_2,param_1) + 90.0) * 5.8195460575138) / 8.6858896380803;
}


// =========================================================================
// Function: thunk_Lz_BEIsgUDSYRUxNlchVJreNIUNajq_mjjcmWQqMkhjyFHkMkFFryHEeMCvSJPJSexS_ZuenmrgXxmTlcYNWSlewTkyQk
// Entry: 0x71e08130 | Size: 1 bytes
// =========================================================================

void thunk_Lz_BEIsgUDSYRUxNlchVJreNIUNajq_mjjcmWQqMkhjyFHkMkFFryHEeMCvSJPJSexS_ZuenmrgXxmTlcYNWSlewTkyQk
               (int param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *(float *)(param_1 + 0x20);
  fVar5 = param_2[1] + param_2[4];
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 < -(*(float *)(param_1 + 0x1c) + fVar8)) << 0x1f;
  if (!SUB41(uVar4 >> 0x1f,0)) {
    fVar8 = -*(float *)(param_1 + 0x1c);
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 < fVar8) << 0x1f;
    if (SUB41(uVar4 >> 0x1f,0)) {
      fVar8 = fVar8 - fVar5;
    }
    else {
      fVar8 = 0.0;
    }
  }
  fVar5 = *(float *)(param_1 + 0x2c) - param_2[3];
  fVar7 = 0.0;
  fVar6 = *(float *)(param_1 + 0x40);
  uVar4 = uVar4 & 0xfffffff;
  if (fVar5 < 0.0) {
    fVar5 = fVar7;
  }
  if (fVar5 < fVar8) {
    fVar8 = fVar5;
  }
  fVar5 = fVar8;
  if ((-1.0 < param_2[5]) && (*(char *)(param_2 + 2) == '\0')) {
    fVar5 = (fVar6 - param_2[5]) + -1.0;
    if (fVar5 < 0.0) {
      fVar5 = fVar7;
    }
    uVar4 = uVar4 | (uint)(fVar5 < fVar8) << 0x1f;
    if (fVar5 != fVar8 && SUB41(uVar4 >> 0x1f,0) == (NAN(fVar5) || NAN(fVar8))) {
      fVar5 = fVar8;
    }
  }
  uVar4 = uVar4 & 0xfffffff | (uint)(*param_2 < 0.95) << 0x1f;
  fVar8 = 1.0;
  if (SUB41(uVar4 >> 0x1f,0)) {
    iVar2 = *(int *)(param_1 + 0x30);
LAB_71b08b58:
    *(int *)(param_1 + 0x3c) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(uVar4 >> 0x16) & 3);
      if (iVar2 == 0) {
        fVar8 = fVar9;
      }
      goto LAB_71b08b58;
    }
  }
  fVar5 = fVar5 - fVar6;
  fVar9 = fVar5;
  if (0.0 < fVar5) {
    fVar9 = fVar7;
  }
  fVar8 = *(float *)(param_1 + 0x34) * fVar8;
  if (iVar2 == 0) {
    fVar9 = fVar5;
  }
  fVar7 = -*(float *)(param_1 + 0x34);
  fVar5 = fVar9;
  if (fVar8 <= fVar9) {
    fVar5 = fVar8;
  }
  if (fVar9 <= fVar7) {
    fVar5 = fVar7;
  }
  if (fVar5 != 0.0) {
    uVar3 = imp_powf(0x41200000,(fVar6 + fVar5) / 20.0);
    thunk_HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm(param_1 + 4,uVar3);
  }
  thunk_YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
            (param_1 + 4,param_3,param_4,param_5,param_6);
  iVar2 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar2;
  *(float *)(param_1 + 0x40) = fVar5 + *(float *)(param_1 + 0x40);
  if (iVar2 != 1000) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  DataMemoryBarrier(0xb);
  iVar2 = DAT_71204900;
  if (DAT_71204900 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_Agc2_EstimatedSpeec_7006eb4e,0x26,0,100,0x65);
    if (DAT_71204900 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x71204900);
        DAT_71204900 = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) goto LAB_71b08c88;
  }
  else {
LAB_71b08c88:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,(int)-param_2[1]);
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_71204904;
  if (DAT_71204904 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_Agc2_EstimatedNoise_700669cc,0x25,0,100,0x65);
    if (DAT_71204904 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x71204904);
        DAT_71204904 = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) goto LAB_71b08d08;
  }
  else {
LAB_71b08d08:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,(int)-param_2[3]);
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_71204908;
  if (DAT_71204908 == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_Agc2_Headroom_70064379,0x1a,0,0x32,0x33);
    if (DAT_71204908 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x71204908);
        DAT_71204908 = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) goto LAB_71b08d88;
  }
  else {
LAB_71b08d88:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,(int)param_2[4]);
  }
  DataMemoryBarrier(0xb);
  iVar2 = DAT_7120490c;
  if (DAT_7120490c == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_Agc2_DigitalGainApp_700617d6,0x24,0,0x1e,0x1f);
    if (DAT_7120490c == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x7120490c);
        DAT_7120490c = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) goto LAB_71b08e14;
  }
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,(int)*(float *)(param_1 + 0x40));
LAB_71b08e14:
  iVar2 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar2 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_7009a368,s_____webrtc_apm_src_webrtc_module_700669f2,0x681,
               s_AGC2_adaptive_digital_70063a5b,s___speech_dbfs__7006eb75);
  }
  return;
}


// =========================================================================
// Function: thunk_YAtEide_qbobJEresjHymaJJwdYGUiU_wSQERdCvBTaVuQlycVUj_igcYbvGVZBcxRurvxfMsiIEIWoLmdrzmDdwobJA_LHZEJJvPEIztvohtrnPVFQSZLsLRpUpENuls
// Entry: 0x71e08140 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_YAtEide_qbobJEresjHymaJJwdYGUiU_wSQERdCvBTaVuQlycVUj_igcYbvGVZBcxRurvxfMsiIEIWoLmdrzmDdwobJA_LHZEJJvPEIztvohtrnPVFQSZLsLRpUpENuls
          (undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  fVar2 = *(float *)((int)param_3 + 0xc);
  *param_1 = param_2;
  uVar1 = imp_powf(0x41200000,fVar2 / 20.0);
  thunk_ZzeqwcSjtMEA_rBw_MyTzMFIvaJa(param_1 + 1,0,uVar1);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  *(undefined8 *)(param_1 + 6) = *param_3;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar4;
  param_1[0x10] = param_1[9];
  param_1[0xc] = param_4;
  param_1[0xe] = 0;
  param_1[0xf] = param_4;
  param_1[0xd] = ((float)param_1[10] * 10.0) / 1000.0;
  return param_1;
}


// =========================================================================
// Function: thunk_pkTw_YJoxqtEvhsASuWGNzyiiSmpemDj
// Entry: 0x71e08150 | Size: 1 bytes
// =========================================================================

void thunk_pkTw_YJoxqtEvhsASuWGNzyiiSmpemDj(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: thunk_ehVOBipNoUVIEbuYcOOitsxRdddNDsxAlPZzAiVdDEZcHtpoUVWrrXAZgGCcIjDbgxVHpxigKgwzW
// Entry: 0x71e08160 | Size: 1 bytes
// =========================================================================

void thunk_ehVOBipNoUVIEbuYcOOitsxRdddNDsxAlPZzAiVdDEZcHtpoUVWrrXAZgGCcIjDbgxVHpxigKgwzW
               (float *param_1,float *param_2,int param_3,float *param_4)

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
  
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar1 = param_1[7];
  fVar8 = param_1[8];
  if (param_3 != 0) {
    fVar11 = param_1[3];
    fVar10 = param_1[4];
    fVar5 = *param_1;
    fVar6 = param_1[1];
    fVar7 = param_1[2];
    fVar4 = fVar3;
    fVar9 = fVar8;
    do {
      fVar3 = fVar2;
      fVar8 = fVar1;
      param_3 = param_3 + -1;
      fVar2 = *param_2;
      param_2 = param_2 + 1;
      fVar1 = fVar6 * fVar3 + fVar5 * fVar2 + fVar7 * fVar4 + -fVar11 * fVar8 + -fVar10 * fVar9;
      *param_4 = fVar1;
      param_4 = param_4 + 1;
      fVar4 = fVar3;
      fVar9 = fVar8;
    } while (param_3 != 0);
  }
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  param_1[7] = fVar1;
  param_1[8] = fVar8;
  return;
}


// =========================================================================
// Function: thunk_CuMjfweCqEfLNMapwHArMcjtLZIxCvq_XGzsLgpHq
// Entry: 0x71e08170 | Size: 1 bytes
// =========================================================================

void thunk_CuMjfweCqEfLNMapwHArMcjtLZIxCvq_XGzsLgpHq(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)param_1 + 0x1c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}


// =========================================================================
// Function: thunk_yLNXSumhunHh_KEgGbRWYBBvzCQT
// Entry: 0x71e08180 | Size: 1 bytes
// =========================================================================

void thunk_yLNXSumhunHh_KEgGbRWYBBvzCQT(void)

{
  return;
}


// =========================================================================
// Function: thunk_duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
// Entry: 0x71e08190 | Size: 1 bytes
// =========================================================================

void thunk_duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
               (undefined4 *param_1,int param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = *param_3;
  iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (cVar3 == '\0') {
    if (iVar4 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70061dea,0xb31,
                 s__AGC2__Clipping_prediction_disab_7006fb88);
    }
    *param_1 = 0;
    return;
  }
  if (iVar4 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70061dea,0xb49,
               s__AGC2__Clipping_prediction_enabl_7006b486);
  }
  if (*(int *)(param_3 + 4) == 2) {
    FUN_71a9afb8(*(undefined4 *)(param_3 + 0x14),&uStack_30,param_2,*(undefined4 *)(param_3 + 8),
                 *(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),0);
    *param_1 = uStack_30;
    return;
  }
  if (*(int *)(param_3 + 4) == 1) {
    FUN_71a9afb8(*(undefined4 *)(param_3 + 0x14),&uStack_2c,param_2,*(undefined4 *)(param_3 + 8),
                 *(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),1);
    *param_1 = uStack_2c;
    return;
  }
  uVar14 = *(undefined4 *)(param_3 + 8);
  iVar12 = *(int *)(param_3 + 0xc);
  iVar4 = *(int *)(param_3 + 0x10);
  uVar15 = *(undefined4 *)(param_3 + 0x14);
  uVar9 = *(undefined4 *)(param_3 + 0x18);
  puVar5 = (undefined4 *)thunk_MwhHq(0x24);
  puVar5[2] = 0;
  *puVar5 = &DAT_70b131f8;
  puVar5[3] = 0;
  piVar6 = puVar5 + 1;
  *piVar6 = 0;
  puVar5[4] = uVar14;
  puVar5[5] = iVar12;
  puVar5[6] = iVar4;
  puVar5[7] = uVar15;
  puVar5[8] = uVar9;
  if (0 < param_2) {
    do {
      while( true ) {
        uVar9 = thunk_MwhHq(0x14);
        thunk_uieYDQXyaeuvhJrnXvEnepNSYAZSDlDQDwzetjcrLFQe(uVar9,iVar4 + iVar12);
        puVar13 = (undefined4 *)puVar5[2];
        uStack_28 = uVar9;
        if (puVar13 < (undefined4 *)puVar5[3]) break;
        iVar10 = *piVar6;
        iVar1 = (int)puVar13 - iVar10 >> 2;
        uVar16 = iVar1 + 1;
        if (0x3fffffff < uVar16) {
          FUN_71a9c590(piVar6);
LAB_71a9af68:
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        uVar7 = (int)puVar5[3] - iVar10;
        uVar2 = (int)uVar7 >> 1;
        if (uVar16 < uVar2) {
          uVar16 = uVar2;
        }
        if (0x7ffffffb < uVar7) {
          uVar16 = 0x3fffffff;
        }
        if (uVar16 == 0) {
          iVar8 = 0;
        }
        else {
          if (0x3fffffff < uVar16) goto LAB_71a9af68;
          iVar8 = thunk_MwhHq(uVar16 << 2);
        }
        puVar11 = (undefined4 *)(iVar8 + iVar1 * 4);
        *puVar11 = uVar9;
        imp___aeabi_memcpy4(iVar8,iVar10,(int)puVar13 - iVar10);
        puVar11 = puVar11 + 1;
        puVar5[1] = iVar8;
        puVar5[2] = puVar11;
        puVar5[3] = iVar8 + uVar16 * 4;
        if (iVar10 != 0) {
          thunk_qNQrlu(iVar10);
        }
        param_2 = param_2 + -1;
        puVar5[2] = puVar11;
        if (param_2 == 0) goto LAB_71a9af50;
      }
      *puVar13 = uVar9;
      param_2 = param_2 + -1;
      puVar5[2] = puVar13 + 1;
    } while (param_2 != 0);
  }
LAB_71a9af50:
  *param_1 = puVar5;
  return;
}


// =========================================================================
// Function: thunk_CPaclFkFTjdeVzlmFtZPzHQHugFwhtnotMJVBjgdIwKxfkYQ
// Entry: 0x71e081a0 | Size: 1 bytes
// =========================================================================

void thunk_CPaclFkFTjdeVzlmFtZPzHQHugFwhtnotMJVBjgdIwKxfkYQ(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}


// =========================================================================
// Function: thunk_WQupJtOwhaLSwbLvCYHvRruPRgXWGlbRasyWWCCPyQMxZaymrvGTSzpJy
// Entry: 0x71e081b0 | Size: 1 bytes
// =========================================================================

void thunk_WQupJtOwhaLSwbLvCYHvRruPRgXWGlbRasyWWCCPyQMxZaymrvGTSzpJy
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1 + 1;
  *param_1 = iVar2;
  iVar1 = param_1[3] - param_1[2] >> 3;
  if (iVar2 == iVar1) {
    iVar2 = 0;
    *param_1 = 0;
  }
  if (param_1[1] < iVar1) {
    param_1[1] = param_1[1] + 1;
  }
  puVar3 = (undefined4 *)(param_1[2] + iVar2 * 8);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  return;
}


// =========================================================================
// Function: thunk_onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
// Entry: 0x71e081c0 | Size: 1 bytes
// =========================================================================

void thunk_onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
               (float *param_1,int *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  iVar5 = param_2[1];
  if (param_4 + param_3 <= iVar5) {
    if (param_4 < iVar5) {
      iVar5 = param_4;
    }
    if (iVar5 < 1) {
      fVar7 = 0.0;
      fVar8 = fVar7;
    }
    else {
      fVar7 = 0.0;
      iVar3 = param_2[3];
      iVar6 = *param_2 - param_3;
      iVar2 = param_2[2];
      iVar4 = iVar2 + *param_2 * 8 + param_3 * -8;
      fVar8 = fVar7;
      do {
        pfVar1 = (float *)(iVar4 + (iVar3 - iVar2 >> 3 & iVar6 >> 0x1f) * 8);
        fVar8 = fVar8 + *pfVar1;
        fVar7 = (float)imp_fmaxf(pfVar1[1],fVar7);
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + -1;
        iVar4 = iVar4 + -8;
      } while (iVar5 != 0);
    }
    param_1[1] = fVar7;
    fVar7 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    *param_1 = fVar8 / fVar7;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: thunk_uieYDQXyaeuvhJrnXvEnepNSYAZSDlDQDwzetjcrLFQe
// Entry: 0x71e081d0 | Size: 1 bytes
// =========================================================================

undefined4 * thunk_uieYDQXyaeuvhJrnXvEnepNSYAZSDlDQDwzetjcrLFQe(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar3 = param_2;
  if (param_2 < 2) {
    iVar3 = 1;
  }
  if (param_2 < 0x20000000) {
    iVar1 = iVar3 * 8;
    iVar2 = thunk_MwhHq(iVar1);
    param_1[4] = iVar2 + iVar3 * 8;
    param_1[2] = iVar2;
    imp___aeabi_memclr4(iVar2,iVar1);
    param_1[3] = iVar2 + iVar1;
    if ((100 < param_2) &&
       (iVar3 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ(), iVar3 == 0)) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70095efd,s_____webrtc_apm_src_webrtc_module_700705b9,0xf2,
                 s__agc___ClippingPredictorLevelBuf_7007150e,
                 s_maximum_allowed_capacity__Capaci_7006e0d4,param_2);
    }
    return param_1;
  }
  FUN_71a9c9d4(param_1 + 2);
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    param_1[3] = iVar3;
    thunk_qNQrlu();
  }
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: thunk_yEbYffsicFFJvpgOICjJDgavrzzbSwlOTwSYO
// Entry: 0x71e081e0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_yEbYffsicFFJvpgOICjJDgavrzzbSwlOTwSYO(void)

{
  return 0;
}


// =========================================================================
// Function: thunk_xrBzPWrsXEPkdmALmxzzpHqJrlIUUIZaeBSD
// Entry: 0x71e081f0 | Size: 1 bytes
// =========================================================================

undefined4 thunk_xrBzPWrsXEPkdmALmxzzpHqJrlIUUIZaeBSD(void)

{
  return 0;
}


// =========================================================================
// Function: thunk_ZDSAGPVedqdUzrvzzACdBQZLFnEAU_oYghTwJhlaRnbLWrfgzfrJSryJroTSnz
// Entry: 0x71e08200 | Size: 1 bytes
// =========================================================================

void thunk_ZDSAGPVedqdUzrvzzACdBQZLFnEAU_oYghTwJhlaRnbLWrfgzfrJSryJroTSnz(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = param_2;
  if (param_2 % 0x14 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_700984d0
               ,param_2 % 0x14,0,param_2,s_is_not_evenly_divisible_by_7006252f,0x14);
  }
  *(int *)(param_1 + 0xc) = param_2 / 0x14;
  return;
}


// =========================================================================
// Function: thunk_cUGXZFjnwnCRLcCInbDkytPrSvqortrehqirwytLHGk_kLVbPyNfOJcimBF_rcSpAXJOhaeWjOqnZc_k
// Entry: 0x71e08210 | Size: 1 bytes
// =========================================================================

void thunk_cUGXZFjnwnCRLcCInbDkytPrSvqortrehqirwytLHGk_kLVbPyNfOJcimBF_rcSpAXJOhaeWjOqnZc_k
               (float *param_1,int param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  
  fVar8 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fVar11 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  fVar14 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *param_1 = 0.0;
  param_1[1] = fVar8;
  param_1[2] = fVar11;
  param_1[3] = fVar14;
  param_1[4] = 0.0;
  param_1[5] = fVar8;
  param_1[6] = fVar11;
  param_1[7] = fVar14;
  param_1[8] = 0.0;
  param_1[9] = fVar8;
  param_1[10] = fVar11;
  param_1[0xb] = fVar14;
  param_1[0xc] = 0.0;
  param_1[0xd] = fVar8;
  param_1[0xe] = fVar11;
  param_1[0xf] = fVar14;
  param_1[0x10] = 0.0;
  param_1[0x11] = fVar8;
  param_1[0x12] = fVar11;
  param_1[0x13] = fVar14;
  if ((param_3 != 0) && (iVar7 = *(int *)(param_2 + 0xc), 0 < iVar7)) {
    if (param_4 == 0) {
      iVar6 = 0;
      do {
        pfVar2 = (float *)0x0;
        iVar5 = 0;
        do {
          pfVar1 = param_1 + iVar5;
          fVar8 = *pfVar1;
          iVar3 = iVar7;
          pfVar4 = pfVar2;
          do {
            fVar11 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            if (fVar8 < ABS(fVar11)) {
              fVar8 = ABS(fVar11);
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          iVar5 = iVar5 + 1;
          pfVar2 = pfVar2 + iVar7;
          *pfVar1 = fVar8;
        } while (iVar5 != 0x14);
        iVar6 = iVar6 + 1;
      } while (iVar6 != param_3);
    }
    else {
      iVar6 = 0;
      do {
        iVar5 = 0;
        pfVar2 = param_5;
        do {
          pfVar1 = param_1 + iVar5;
          fVar8 = *pfVar1;
          iVar3 = iVar7;
          pfVar4 = pfVar2;
          do {
            fVar11 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            if (fVar8 < ABS(fVar11)) {
              fVar8 = ABS(fVar11);
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          iVar5 = iVar5 + 1;
          pfVar2 = pfVar2 + iVar7;
          *pfVar1 = fVar8;
        } while (iVar5 != 0x14);
        iVar6 = iVar6 + 1;
        param_5 = param_5 + param_4;
      } while (iVar6 != param_3);
    }
  }
  fVar26 = param_1[1];
  fVar25 = param_1[2];
  fVar24 = param_1[3];
  fVar23 = param_1[4];
  fVar21 = param_1[5];
  fVar19 = param_1[6];
  fVar17 = param_1[7];
  fVar15 = param_1[8];
  fVar13 = param_1[9];
  fVar12 = param_1[10];
  fVar10 = param_1[0xb];
  fVar22 = param_1[0xc];
  fVar20 = param_1[0xd];
  fVar18 = param_1[0xe];
  fVar16 = param_1[0xf];
  fVar14 = param_1[0x10];
  fVar11 = param_1[0x11];
  fVar8 = param_1[0x12];
  fVar9 = param_1[0x13];
  fVar28 = *(float *)(param_2 + 4);
  fVar27 = *param_1;
  if (*param_1 < fVar26) {
    *param_1 = fVar26;
    fVar27 = fVar26;
  }
  if (fVar26 < fVar25) {
    param_1[1] = fVar25;
    fVar26 = fVar25;
  }
  if (fVar25 < fVar24) {
    param_1[2] = fVar24;
    fVar25 = fVar24;
  }
  if (fVar24 < fVar23) {
    param_1[3] = fVar23;
    fVar24 = fVar23;
  }
  if (fVar23 < fVar21) {
    param_1[4] = fVar21;
    fVar23 = fVar21;
  }
  if (fVar21 < fVar19) {
    param_1[5] = fVar19;
    fVar21 = fVar19;
  }
  if (fVar19 < fVar17) {
    param_1[6] = fVar17;
    fVar19 = fVar17;
  }
  if (fVar17 < fVar15) {
    param_1[7] = fVar15;
    fVar17 = fVar15;
  }
  if (fVar15 < fVar13) {
    param_1[8] = fVar13;
    fVar15 = fVar13;
  }
  if (fVar13 < fVar12) {
    param_1[9] = fVar12;
    fVar13 = fVar12;
  }
  if (fVar12 < fVar10) {
    param_1[10] = fVar10;
    fVar12 = fVar10;
  }
  if (fVar10 < fVar22) {
    param_1[0xb] = fVar22;
    fVar10 = fVar22;
  }
  if (fVar22 < fVar20) {
    param_1[0xc] = fVar20;
    fVar22 = fVar20;
  }
  if (fVar20 < fVar18) {
    param_1[0xd] = fVar18;
    fVar20 = fVar18;
  }
  if (fVar18 < fVar16) {
    param_1[0xe] = fVar16;
    fVar18 = fVar16;
  }
  if (fVar16 < fVar14) {
    param_1[0xf] = fVar14;
    fVar16 = fVar14;
  }
  if (fVar14 < fVar11) {
    param_1[0x10] = fVar11;
    fVar14 = fVar11;
  }
  if (fVar11 < fVar8) {
    param_1[0x11] = fVar8;
    fVar11 = fVar8;
  }
  if (fVar8 < fVar9) {
    param_1[0x12] = fVar9;
    fVar8 = fVar9;
  }
  if (fVar27 <= fVar28) {
    fVar27 = fVar28 * 0.9971259 + fVar27 * 0.0028740764;
    *param_1 = fVar27;
  }
  else {
    fVar27 = fVar27 + fVar28 * 0.0;
    *param_1 = fVar27;
  }
  if (fVar26 <= fVar27) {
    fVar26 = fVar27 * 0.9971259 + fVar26 * 0.0028740764;
    param_1[1] = fVar26;
  }
  else {
    fVar26 = fVar26 + fVar27 * 0.0;
    param_1[1] = fVar26;
  }
  if (fVar26 < fVar25) {
    fVar25 = fVar25 + fVar26 * 0.0;
    param_1[2] = fVar25;
  }
  else {
    fVar25 = fVar26 * 0.9971259 + fVar25 * 0.0028740764;
    param_1[2] = fVar25;
  }
  if (fVar24 <= fVar25) {
    fVar24 = fVar25 * 0.9971259 + fVar24 * 0.0028740764;
    param_1[3] = fVar24;
  }
  else {
    fVar24 = fVar24 + fVar25 * 0.0;
    param_1[3] = fVar24;
  }
  if (fVar24 < fVar23) {
    fVar23 = fVar23 + fVar24 * 0.0;
    param_1[4] = fVar23;
  }
  else {
    fVar23 = fVar24 * 0.9971259 + fVar23 * 0.0028740764;
    param_1[4] = fVar23;
  }
  if (fVar21 <= fVar23) {
    fVar21 = fVar23 * 0.9971259 + fVar21 * 0.0028740764;
    param_1[5] = fVar21;
  }
  else {
    fVar21 = fVar21 + fVar23 * 0.0;
    param_1[5] = fVar21;
  }
  if (fVar21 < fVar19) {
    fVar19 = fVar19 + fVar21 * 0.0;
    param_1[6] = fVar19;
  }
  else {
    fVar19 = fVar21 * 0.9971259 + fVar19 * 0.0028740764;
    param_1[6] = fVar19;
  }
  if (fVar17 <= fVar19) {
    fVar17 = fVar19 * 0.9971259 + fVar17 * 0.0028740764;
    param_1[7] = fVar17;
  }
  else {
    fVar17 = fVar17 + fVar19 * 0.0;
    param_1[7] = fVar17;
  }
  if (fVar17 < fVar15) {
    fVar15 = fVar15 + fVar17 * 0.0;
    param_1[8] = fVar15;
  }
  else {
    fVar15 = fVar17 * 0.9971259 + fVar15 * 0.0028740764;
    param_1[8] = fVar15;
  }
  if (fVar13 <= fVar15) {
    fVar13 = fVar15 * 0.9971259 + fVar13 * 0.0028740764;
    param_1[9] = fVar13;
  }
  else {
    fVar13 = fVar13 + fVar15 * 0.0;
    param_1[9] = fVar13;
  }
  if (fVar13 < fVar12) {
    fVar12 = fVar12 + fVar13 * 0.0;
    param_1[10] = fVar12;
  }
  else {
    fVar12 = fVar13 * 0.9971259 + fVar12 * 0.0028740764;
    param_1[10] = fVar12;
  }
  if (fVar10 <= fVar12) {
    fVar10 = fVar12 * 0.9971259 + fVar10 * 0.0028740764;
    param_1[0xb] = fVar10;
  }
  else {
    fVar10 = fVar10 + fVar12 * 0.0;
    param_1[0xb] = fVar10;
  }
  if (fVar10 < fVar22) {
    fVar22 = fVar22 + fVar10 * 0.0;
    param_1[0xc] = fVar22;
  }
  else {
    fVar22 = fVar10 * 0.9971259 + fVar22 * 0.0028740764;
    param_1[0xc] = fVar22;
  }
  if (fVar20 <= fVar22) {
    fVar20 = fVar22 * 0.9971259 + fVar20 * 0.0028740764;
    param_1[0xd] = fVar20;
  }
  else {
    fVar20 = fVar20 + fVar22 * 0.0;
    param_1[0xd] = fVar20;
  }
  if (fVar20 < fVar18) {
    fVar18 = fVar18 + fVar20 * 0.0;
    param_1[0xe] = fVar18;
  }
  else {
    fVar18 = fVar20 * 0.9971259 + fVar18 * 0.0028740764;
    param_1[0xe] = fVar18;
  }
  if (fVar16 <= fVar18) {
    fVar16 = fVar18 * 0.9971259 + fVar16 * 0.0028740764;
    param_1[0xf] = fVar16;
  }
  else {
    fVar16 = fVar16 + fVar18 * 0.0;
    param_1[0xf] = fVar16;
  }
  if (fVar16 < fVar14) {
    fVar14 = fVar14 + fVar16 * 0.0;
    param_1[0x10] = fVar14;
  }
  else {
    fVar14 = fVar16 * 0.9971259 + fVar14 * 0.0028740764;
    param_1[0x10] = fVar14;
  }
  if (fVar11 <= fVar14) {
    fVar11 = fVar14 * 0.9971259 + fVar11 * 0.0028740764;
    param_1[0x11] = fVar11;
  }
  else {
    fVar11 = fVar11 + fVar14 * 0.0;
    param_1[0x11] = fVar11;
  }
  if (fVar11 < fVar8) {
    fVar8 = fVar8 + fVar11 * 0.0;
    param_1[0x12] = fVar8;
  }
  else {
    fVar8 = fVar11 * 0.9971259 + fVar8 * 0.0028740764;
    param_1[0x12] = fVar8;
  }
  if (fVar8 < fVar9) {
    fVar9 = fVar9 + fVar8 * 0.0;
  }
  else {
    fVar9 = fVar8 * 0.9971259 + fVar9 * 0.0028740764;
  }
  *(float *)(param_2 + 4) = fVar9;
  param_1[0x13] = fVar9;
  return;
}


// =========================================================================
// Function: thunk_ScxNepyyTeaIhkmtbFcsTxOmmpmRSDhHGXpruyroymyBLx
// Entry: 0x71e08220 | Size: 1 bytes
// =========================================================================

void thunk_ScxNepyyTeaIhkmtbFcsTxOmmpmRSDhHGXpruyroymyBLx(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// =========================================================================
// Function: thunk_ZtCBcoAbzYJZOevkolmWSQyAFNbqbmgaPhWaLVlFPEeZMXSJmJScthHHAU_Sqt
// Entry: 0x71e08230 | Size: 1 bytes
// =========================================================================

void thunk_ZtCBcoAbzYJZOevkolmWSQyAFNbqbmgaPhWaLVlFPEeZMXSJmJScthHHAU_Sqt
               (undefined4 *param_1,int param_2,undefined4 param_3)

{
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = param_2;
  if (param_2 % 0x14 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_700984d0
               ,param_2 % 0x14,0,param_2,s_is_not_evenly_divisible_by_7006252f,0x14);
  }
  param_1[3] = param_2 / 0x14;
  return;
}


// =========================================================================
// Function: thunk_YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
// Entry: 0x71e08240 | Size: 1 bytes
// =========================================================================

void thunk_YisW_gZ_fbub_phLmEuWHEkcjawMHBDphwpmgVhQcMyY_IChVU_qCalToFNm
               (char *param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_3;
    fVar4 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x10) = 1.0 / fVar4;
  }
  fVar5 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  if (fVar5 == fVar4) {
    if ((param_3 != 0) && (param_2 != 0 && (fVar4 < 0.9999695 || 1.0000305 < fVar4))) {
      iVar3 = 0;
      do {
        pfVar1 = (float *)(param_4 + iVar3 * param_3 * 4);
        iVar2 = param_3 << 2;
        do {
          iVar2 = iVar2 + -4;
          *pfVar1 = fVar4 * *pfVar1;
          pfVar1 = pfVar1 + 1;
        } while (iVar2 != 0);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_2);
    }
  }
  else if (param_2 != 0 && param_3 != 0) {
    fVar6 = *(float *)(param_1 + 0x10);
    iVar3 = 0;
    do {
      pfVar1 = (float *)(param_4 + iVar3 * param_3 * 4);
      iVar2 = param_3 << 2;
      fVar7 = fVar5;
      do {
        iVar2 = iVar2 + -4;
        fVar8 = fVar7 * *pfVar1;
        fVar7 = (fVar4 - fVar5) * fVar6 + fVar7;
        *pfVar1 = fVar8;
        pfVar1 = pfVar1 + 1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  if ((*param_1 != '\0') && (param_2 != 0 && param_3 != 0)) {
    iVar3 = 0;
    do {
      pfVar1 = (float *)(param_4 + iVar3 * param_3 * 4);
      iVar2 = param_3 << 2;
      do {
        fVar5 = *pfVar1;
        fVar4 = fVar5;
        if (32767.0 <= fVar5) {
          fVar4 = 32767.0;
        }
        if (fVar5 <= -32768.0) {
          fVar4 = -32768.0;
        }
        iVar2 = iVar2 + -4;
        *pfVar1 = fVar4;
        pfVar1 = pfVar1 + 1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_2);
  }
  return;
}


// =========================================================================
// Function: thunk_HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm
// Entry: 0x71e08250 | Size: 1 bytes
// =========================================================================

void thunk_HeDauPCPyPhYwHooglLDxlxrk_dAbNGqYupOvBjm(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


// =========================================================================
// Function: thunk_ZzeqwcSjtMEA_rBw_MyTzMFIvaJa
// Entry: 0x71e08260 | Size: 1 bytes
// =========================================================================

void thunk_ZzeqwcSjtMEA_rBw_MyTzMFIvaJa(undefined1 *param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *param_1 = param_2;
  return;
}


// =========================================================================
// Function: thunk_ViCueajOONcYpfRKvWpFMKHfBRkucYLUJNNzhqMbpIXkgLGzrJkKtOgSreMXhmORZcpmNz
// Entry: 0x71e08270 | Size: 1 bytes
// =========================================================================

void thunk_ViCueajOONcYpfRKvWpFMKHfBRkucYLUJNNzhqMbpIXkgLGzrJkKtOgSreMXhmORZcpmNz
               (uint *param_1,undefined4 param_2,char param_3,float param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    uVar3 = param_1[5];
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    if (uVar3 != 0 || *(char *)((int)param_1 + 0x12) != '\0') {
      if (uVar3 < 0x100) {
        uVar4 = *param_1;
        if ((int)uVar3 < (int)uVar4) {
          param_1[5] = uVar4;
          uVar3 = uVar4;
        }
        param_1[3] = uVar3;
        *(undefined1 *)(param_1 + 10) = 1;
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined1 *)((int)param_1 + 0x12) = 0;
      }
      else {
        iVar2 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
        if (iVar2 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_7006d422,0x9f3,
                     s__AGC2__Invalid_value_for_the_app_7006fc68,uVar3);
        }
      }
    }
  }
  uVar4 = param_1[8];
  uVar3 = in_fpscr & 0xfffffff | (uint)((float)param_1[0xb] == param_4) << 0x1e |
          (uint)(param_4 <= (float)param_1[0xb]) << 0x1d;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    param_1[9] = param_1[9] + 1;
  }
  param_1[8] = uVar4 + 1;
  if ((int)param_1[7] <= (int)(uVar4 + 1)) {
    uVar4 = param_1[9];
    param_1[8] = 0;
    param_1[9] = 0;
    if ((char)param_1[10] == '\0') {
      fVar5 = (float)VectorSignedToFloat(param_1[7],(byte)(uVar3 >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(uVar3 >> 0x16) & 3);
      if (((float)param_1[0xc] <= fVar6 / fVar5) && (param_3 != '\0')) {
        thunk_IEwWhxpeyOzLRaaJIrvEUVXQoFQmRUlZECUefWxquIHHmF_ZGLdHuEzZqa(param_1,param_2);
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


// =========================================================================
// Function: thunk_IEwWhxpeyOzLRaaJIrvEUVXQoFQmRUlZECUefWxquIHHmF_ZGLdHuEzZqa
// Entry: 0x71e08280 | Size: 1 bytes
// =========================================================================

void thunk_IEwWhxpeyOzLRaaJIrvEUVXQoFQmRUlZECUefWxquIHHmF_ZGLdHuEzZqa(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  if (0xe < param_2) {
    iVar3 = 0xf;
  }
  if (iVar3 < -0xe) {
    iVar3 = -0xf;
  }
  if (param_2 != 0) {
    iVar5 = param_1[3];
    iVar1 = iVar5;
    if (param_2 < 1) {
      do {
        iVar2 = iVar1;
        if (iVar2 <= *param_1) break;
        iVar1 = iVar2 + -1;
      } while (iVar3 < *(int *)(&DAT_70099ecc + iVar2 * 4) - *(int *)(&DAT_70099ecc + iVar5 * 4));
      uVar4 = param_1[5];
    }
    else {
      do {
        iVar2 = iVar1;
        if (0xfe < iVar2) break;
        iVar1 = iVar2 + 1;
      } while (*(int *)(&DAT_70099ecc + iVar2 * 4) - *(int *)(&DAT_70099ecc + iVar5 * 4) < iVar3);
      uVar4 = param_1[5];
    }
    if (uVar4 != 0) {
      if (uVar4 < 0x100) {
        if (((int)uVar4 <= iVar5 + 0x19) && (iVar5 + -0x19 <= (int)uVar4)) {
          if (param_1[2] < iVar2) {
            iVar2 = param_1[2];
          }
          if (iVar2 != iVar5) {
            param_1[3] = iVar2;
            param_1[5] = iVar2;
          }
          return;
        }
        param_1[3] = uVar4;
        if (param_1[2] < (int)uVar4) {
          param_1[2] = uVar4;
        }
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        return;
      }
      iVar3 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
      if (iVar3 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_7006d422,0x79b,
                   s__AGC2__Invalid_value_for_the_app_7006fc68,uVar4);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: thunk_QzmkpOPnOVGEaFyTBOsYbzAkQibVXmtzJKlApPsYT_IyJiEBggwOoWh
// Entry: 0x71e08290 | Size: 1 bytes
// =========================================================================

void thunk_QzmkpOPnOVGEaFyTBOsYbzAkQibVXmtzJKlApPsYT_IyJiEBggwOoWh(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8) - param_2;
  if (iVar1 < iVar3) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 8) = iVar1;
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar1 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                      (s_WebRTC_Audio_AgcClippingAdjustme_700671e6,0x29,2);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj
                (iVar1,iVar3 <= *(int *)(param_1 + 0xc) - param_2);
      iVar3 = *(int *)(param_1 + 4);
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar3 < iVar1) {
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar2 = iVar1 - param_2;
    if (iVar1 - param_2 < iVar3) {
      iVar2 = iVar3;
    }
    if (uVar4 != 0) {
      if (uVar4 < 0x100) {
        if ((iVar1 + 0x19 < (int)uVar4) || ((int)uVar4 < iVar1 + -0x19)) {
          *(uint *)(param_1 + 0xc) = uVar4;
          if (*(int *)(param_1 + 8) < (int)uVar4) {
            *(uint *)(param_1 + 8) = uVar4;
          }
        }
        else {
          if (*(int *)(param_1 + 8) < iVar2) {
            iVar2 = *(int *)(param_1 + 8);
          }
          if (iVar2 != iVar1) {
            *(int *)(param_1 + 0xc) = iVar2;
            *(int *)(param_1 + 0x14) = iVar2;
          }
        }
      }
      else {
        iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
        if (iVar1 == 0) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_7006d422,0x79b,
                     s__AGC2__Invalid_value_for_the_app_7006fc68,uVar4);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


// =========================================================================
// Function: thunk_voSiDvwQDRejjrRonOMmSKVQlTtZYxnlQdQDICIIZRaya
// Entry: 0x71e082a0 | Size: 1 bytes
// =========================================================================

void thunk_voSiDvwQDRejjrRonOMmSKVQlTtZYxnlQdQDICIIZRaya
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_3;
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  if (param_4 < 2) {
    param_4 = 1;
  }
  param_1[7] = param_4;
  *(undefined2 *)(param_1 + 4) = 0x101;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  param_1[1] = param_2;
  param_1[2] = 0xff;
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: thunk_cKYPlafpdW_YljsyErqpjerDlGnCdFsVCDKWuOtye
// Entry: 0x71e082b0 | Size: 1 bytes
// =========================================================================

void thunk_cKYPlafpdW_YljsyErqpjerDlGnCdFsVCDKWuOtye(void)

{
  return;
}


// =========================================================================
// Function: thunk_eV_K_el__CLuRcnKpKPUiecNiwhwpEuEBZcYJefrvAjiria
// Entry: 0x71e082c0 | Size: 1 bytes
// =========================================================================

void thunk_eV_K_el__CLuRcnKpKPUiecNiwhwpEuEBZcYJefrvAjiria(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  piVar2 = *(int **)(param_1 + 0x44);
  piVar5 = *(int **)(param_1 + 0x40);
  for (piVar6 = piVar5; piVar6 != piVar2; piVar6 = piVar6 + 1) {
    iVar7 = *piVar6;
    *(undefined1 *)(iVar7 + 0x28) = 1;
    *(undefined4 *)(iVar7 + 0x20) = 0;
    *(undefined4 *)(iVar7 + 0x24) = 0;
    *(undefined2 *)(iVar7 + 0x10) = 0x101;
    *(undefined4 *)(iVar7 + 8) = 0xff;
  }
  iVar7 = *piVar5;
  uVar4 = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  iVar7 = *(int *)(iVar7 + 0x14);
  uVar1 = (int)piVar2 - (int)piVar5 >> 2;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (1 < uVar1) {
    do {
      iVar3 = *(int *)(piVar5[uVar4] + 0x14);
      if (iVar3 < iVar7) {
        *(uint *)(param_1 + 0x4c) = uVar4;
        iVar7 = iVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < iVar7) {
    iVar3 = iVar7;
  }
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar3 = iVar7;
  }
  bVar8 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar8) {
    iVar3 = iVar7;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(int *)(param_1 + 8) = iVar3;
  if (!bVar8) {
    iVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (!bVar8) {
    *(char *)(param_1 + 0x10) = (char)iVar3;
  }
  return;
}


// =========================================================================
// Function: thunk_WbgoAazCxpwQQPGgiXafmTEzZghxVEzXeLvyjHFqKuPNV_dZQoQzaiXLRMDC_RJgYjFhEzReD
// Entry: 0x71e082d0 | Size: 1 bytes
// =========================================================================

void thunk_WbgoAazCxpwQQPGgiXafmTEzZghxVEzXeLvyjHFqKuPNV_dZQoQzaiXLRMDC_RJgYjFhEzReD
               (int *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  int extraout_r12;
  int in_r12;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  piVar13 = (int *)param_1[0x11];
  piVar4 = (int *)param_1[0x10];
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = param_2;
  for (piVar5 = piVar4; piVar5 != piVar13; piVar5 = piVar5 + 1) {
    *(int *)(*piVar5 + 0x14) = param_2;
  }
  uVar18 = *(uint *)(param_3 + 0xc);
  iVar8 = *(int *)(param_3 + 0x28);
  param_1[0x13] = 0;
  uVar7 = (int)piVar13 - (int)piVar4 >> 2;
  puVar17 = *(undefined4 **)(iVar8 + 4);
  iVar8 = *(int *)(*piVar4 + 0x14);
  if (1 < uVar7) {
    uVar11 = 1;
    do {
      iVar9 = *(int *)(piVar4[uVar11] + 0x14);
      if (iVar9 < iVar8) {
        param_1[0x13] = uVar11;
        iVar8 = iVar9;
      }
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  iVar9 = param_1[1];
  if (param_1[1] < iVar8) {
    iVar9 = iVar8;
  }
  if (param_1[3] < 1) {
    iVar9 = iVar8;
  }
  param_1[2] = iVar9;
  if ((char)param_1[5] == '\0') {
    return;
  }
  piVar5 = (int *)param_1[9];
  if (piVar5 != (int *)0x0) {
    iStack_48 = *param_1;
    uStack_40 = 0;
    iStack_3c = iStack_48 * uVar18;
    if (uVar18 != 0 && iStack_48 != 0) {
      uStack_40 = *puVar17;
    }
    if (iStack_3c == 0) {
      uStack_40 = 0;
    }
    uStack_44 = uVar18;
    (**(code **)(*piVar5 + 0xc))(piVar5,&iStack_48);
    in_r12 = extraout_r12;
  }
  fVar19 = 0.0;
  if (uVar18 != 0) {
    in_r12 = *param_1;
  }
  if (uVar18 != 0 && in_r12 != 0) {
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0xc7000000c7000000;
    uVar7 = uVar18 & 0xfffffffc;
    iVar9 = 0;
    iVar8 = 0;
    do {
      pauVar10 = (undefined1 (*) [16])puVar17[iVar9];
      iVar12 = 0;
      uVar11 = 0;
      if (uVar18 < 4) {
LAB_71b06ee0:
        pfVar15 = (float *)(*pauVar10 + uVar11 * 4);
        iVar6 = uVar18 - uVar11;
        do {
          fVar19 = *pfVar15;
          pfVar15 = pfVar15 + 1;
          uVar11 = in_fpscr & 0xfffffff | (uint)(fVar19 < 32767.0) << 0x1f;
          in_fpscr = uVar11 | (uint)NAN(fVar19) << 0x1c;
          iVar6 = iVar6 + -1;
          iVar12 = iVar12 + (uint)((byte)(uVar11 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1) ||
                                  fVar19 <= -32768.0);
        } while (iVar6 != 0);
      }
      else {
        auVar22 = (undefined1  [16])0x0;
        uVar11 = uVar7;
        pauVar14 = pauVar10;
        do {
          auVar3 = *pauVar14;
          pauVar14 = pauVar14 + 1;
          auVar24 = FloatVectorCompareGreaterThanOrEqual
                              (*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),auVar3,2,0x20);
          uVar11 = uVar11 - 4;
          auVar23._8_8_ = 0x46fffe0046fffe00;
          auVar23._0_8_ = 0x46fffe0046fffe00;
          auVar23 = FloatVectorCompareGreaterThanOrEqual(auVar3,auVar23,2,0x20);
          auVar22 = VectorSub(auVar22,auVar23 | auVar24,4);
        } while (uVar11 != 0);
        uVar21 = VectorAdd(auVar22._0_8_,auVar22._8_8_,4);
        iVar12 = (int)uVar21 + (int)((ulonglong)uVar21 >> 0x20);
        uVar11 = uVar7;
        if (uVar18 != uVar7) goto LAB_71b06ee0;
      }
      iVar9 = iVar9 + 1;
      if (iVar8 <= iVar12) {
        iVar8 = iVar12;
      }
    } while (iVar9 != in_r12);
    fVar19 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  }
  iVar8 = param_1[0xc];
  fVar20 = (float)VectorUnsignedToFloat(uVar18,(byte)(in_fpscr >> 0x16) & 3);
  param_1[0xc] = iVar8 + 1;
  fVar19 = fVar19 / fVar20;
  fVar20 = fVar19;
  if (fVar19 < (float)param_1[0xd]) {
    fVar20 = (float)param_1[0xd];
  }
  param_1[0xd] = (int)fVar20;
  if (iVar8 + 1 != 3000) goto LAB_71b0703c;
  fVar20 = (float)imp_roundf(fVar20 * 100.0);
  iVar8 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar8 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_700957ed,s_____webrtc_apm_src_webrtc_module_7006d422,0x329,
               s__AGC2__Input_clipping_rate__7006435c,(int)fVar20,&DAT_70062e0b);
  }
  DataMemoryBarrier(0xb);
  iVar8 = DAT_712048fc;
  if (DAT_712048fc == 0) {
    iVar8 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_Agc_InputClippingRa_70068c2b,0x22,0,100,0x32);
    if (DAT_712048fc == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x712048fc);
        DAT_712048fc = iVar8;
      } while (!bVar2);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar8 != 0) goto LAB_71b07028;
  }
  else {
LAB_71b07028:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar8,(int)fVar20);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
LAB_71b0703c:
  if (param_1[0xb] < param_1[8]) {
    param_1[0xb] = param_1[0xb] + 1;
    return;
  }
  fVar20 = (float)param_1[7];
  if ((param_1[9] == 0) || (*param_1 < 1)) {
    bVar2 = true;
    iVar8 = param_1[6];
  }
  else {
    uVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
      (**(code **)(*(int *)param_1[9] + 0x10))
                (&iStack_48,(int *)param_1[9],iVar8,param_1[2],param_1[6],
                 *(undefined4 *)(*(int *)(param_1[0x10] + iVar8 * 4) + 4),0xff);
      iVar8 = iVar8 + 1;
      iVar12 = iStack_48;
      if (iStack_48 < iVar9) {
        iVar12 = iVar9;
      }
      uVar7 = uStack_44 & 0xff | uVar7;
      if ((uStack_44 & 0xff) != 0) {
        iVar9 = iVar12;
      }
    } while (iVar8 < *param_1);
    iVar12 = param_1[6];
    bVar2 = true;
    iVar8 = iVar12;
    if ((uVar7 & 1) != 0) {
      if (iVar9 <= iVar12) {
        iVar9 = iVar12;
      }
      bVar2 = false;
      iVar8 = iVar9;
      if ((char)param_1[10] == '\0') {
        iVar8 = iVar12;
      }
    }
  }
  if ((fVar20 < fVar19) || (!bVar2 && (char)param_1[10] != '\0')) {
    puVar16 = (undefined4 *)param_1[0x11];
    for (puVar17 = (undefined4 *)param_1[0x10]; puVar17 != puVar16; puVar17 = puVar17 + 1) {
      thunk_QzmkpOPnOVGEaFyTBOsYbzAkQibVXmtzJKlApPsYT_IyJiEBggwOoWh(*puVar17,iVar8);
    }
    param_1[0xb] = 0;
    if ((int *)param_1[9] != (int *)0x0) {
      (**(code **)(*(int *)param_1[9] + 8))();
    }
  }
  piVar5 = (int *)param_1[0x10];
  iVar8 = *piVar5;
  param_1[0x13] = 0;
  iVar8 = *(int *)(iVar8 + 0x14);
  uVar7 = param_1[0x11] - (int)piVar5 >> 2;
  if (1 < uVar7) {
    uVar18 = 1;
    do {
      iVar9 = *(int *)(piVar5[uVar18] + 0x14);
      if (iVar9 < iVar8) {
        param_1[0x13] = uVar18;
        iVar8 = iVar9;
      }
      uVar18 = uVar18 + 1;
    } while (uVar7 != uVar18);
  }
  iVar9 = param_1[1];
  if (param_1[1] < iVar8) {
    iVar9 = iVar8;
  }
  if (param_1[3] < 1) {
    iVar9 = iVar8;
  }
  if ((char)param_1[4] == '\0') {
    iVar9 = iVar8;
  }
  param_1[2] = iVar9;
  return;
}


// =========================================================================
// Function: thunk_dVKNPVeRliuBWlskeoTLxwummMUgBBAfdtmSXclUbfNKDLeGkJEVEtWoNLygbUhqdNePOCKzzBFJDdyx
// Entry: 0x71e082e0 | Size: 1 bytes
// =========================================================================

void thunk_dVKNPVeRliuBWlskeoTLxwummMUgBBAfdtmSXclUbfNKDLeGkJEVEtWoNLygbUhqdNePOCKzzBFJDdyx
               (undefined4 *param_1,int param_2,undefined4 param_3,float param_4,char param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    iVar10 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
    if (iVar10 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_7006d422,0xfd3,
                 s__AGC2__Applied_input_volume_not_s_700669a7);
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)param_1 = 0;
    return;
  }
  piVar7 = *(int **)(param_2 + 0x40);
  piVar11 = *(int **)(param_2 + 0x44);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  iVar12 = *(int *)(*piVar7 + 0x14);
  uVar1 = (int)piVar11 - (int)piVar7 >> 2;
  iVar10 = iVar12;
  if (1 < uVar1) {
    uVar6 = 1;
    do {
      iVar4 = *(int *)(piVar7[uVar6] + 0x14);
      if (iVar4 < iVar10) {
        *(uint *)(param_2 + 0x4c) = uVar6;
        iVar10 = iVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  iVar4 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) < iVar10) {
    iVar4 = iVar10;
  }
  if (*(int *)(param_2 + 0xc) < 1) {
    iVar4 = iVar10;
  }
  *(int *)(param_2 + 8) = iVar4;
  if (*(char *)(param_2 + 0x14) == '\0') {
    uVar9 = *(undefined4 *)(param_2 + 0x10);
    *param_1 = *(undefined4 *)(param_2 + 0xc);
    param_1[1] = uVar9;
    return;
  }
  iVar10 = 0;
  if (param_5 == '\0') {
    uVar9 = 0;
  }
  else {
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0x38),(byte)(in_fpscr >> 0x16) & 3
                                       );
    fVar13 = param_4;
    if (!NAN(param_4)) {
      fVar13 = 30.0;
    }
    if (param_4 <= -90.0) {
      fVar13 = -90.0;
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar14) << 0x1f |
            (uint)(fVar13 == fVar14) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar13) || NAN(fVar14))) {
      uVar9 = 1;
      fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0x3c),(byte)(uVar1 >> 0x16) & 3)
      ;
      if (fVar14 <= fVar13) goto LAB_71b074a0;
      fVar13 = (float)imp_roundf(fVar14 - fVar13);
    }
    else {
      fVar13 = (float)imp_roundf(fVar14 - fVar13);
    }
    uVar9 = 1;
    iVar10 = (int)fVar13;
  }
LAB_71b074a0:
  piVar8 = piVar7;
  if (piVar7 != piVar11) {
    do {
      piVar8 = piVar7 + 1;
      thunk_ViCueajOONcYpfRKvWpFMKHfBRkucYLUJNNzhqMbpIXkgLGzrJkKtOgSreMXhmORZcpmNz
                (*piVar7,iVar10,uVar9,param_3);
      piVar7 = piVar8;
    } while (piVar8 != piVar11);
    piVar7 = *(int **)(param_2 + 0x44);
    iVar12 = *(int *)(**(int **)(param_2 + 0x40) + 0x14);
    piVar8 = *(int **)(param_2 + 0x40);
  }
  *(undefined4 *)(param_2 + 0x4c) = 0;
  uVar1 = (int)piVar7 - (int)piVar8 >> 2;
  if (1 < uVar1) {
    uVar6 = 1;
    do {
      iVar10 = *(int *)(piVar8[uVar6] + 0x14);
      if (iVar10 < iVar12) {
        *(uint *)(param_2 + 0x4c) = uVar6;
        iVar12 = iVar10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  cVar5 = *(char *)(param_2 + 0x10);
  iVar10 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) < iVar12) {
    iVar10 = iVar12;
  }
  if (*(int *)(param_2 + 0xc) < 1) {
    iVar10 = iVar12;
  }
  if (cVar5 == '\0') {
    iVar10 = iVar12;
  }
  *(int *)(param_2 + 8) = iVar10;
  if (iVar4 != iVar10) {
    iVar10 = thunk_svdUsETwTZtZLIBpPayFsmIRPBZysSOmxtOkfzn_Wbw_OBlpnudBmNC_tyceLsRJjXDLeOqx();
    cVar5 = *(char *)(param_2 + 0x10);
  }
  uVar3 = (undefined1)iVar10;
  if (cVar5 != '\0') {
    uVar3 = 0;
  }
  *param_1 = *(undefined4 *)(param_2 + 8);
  if (cVar5 != '\0') {
    *(undefined1 *)(param_2 + 0x10) = uVar3;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// =========================================================================
// Function: thunk_lVKjJkWIezUotYnM_XQBIHEPsESKIKfOqLMxRAUybtHNTxgnLBfhjXNyGVsDHHJYtk
// Entry: 0x71e082f0 | Size: 1 bytes
// =========================================================================

void thunk_lVKjJkWIezUotYnM_XQBIHEPsESKIKfOqLMxRAUybtHNTxgnLBfhjXNyGVsDHHJYtk
               (int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x40);
  piVar3 = *(int **)(param_1 + 0x44);
  if (piVar1 != piVar3) {
    if (param_2 == 0) {
      do {
        iVar2 = *piVar1;
        piVar1 = piVar1 + 1;
        if (*(char *)(iVar2 + 0x10) != '\0') {
          *(undefined1 *)(iVar2 + 0x10) = 0;
        }
      } while (piVar1 != piVar3);
    }
    else {
      do {
        iVar2 = *piVar1;
        piVar1 = piVar1 + 1;
        if (*(byte *)(iVar2 + 0x10) != param_2) {
          *(undefined1 *)(iVar2 + 0x11) = 1;
          *(char *)(iVar2 + 0x10) = (char)param_2;
        }
      } while (piVar1 != piVar3);
    }
  }
  *(char *)(param_1 + 0x14) = (char)param_2;
  return;
}


// =========================================================================
// Function: thunk_cdTmHOBwNumyaafcOcSQNLmdMWoqz_gAvUK_sPF_kadPhJJNbvP
// Entry: 0x71e08300 | Size: 1 bytes
// =========================================================================

uint * thunk_cdTmHOBwNumyaafcOcSQNLmdMWoqz_gAvUK_sPF_kadPhJJNbvP
                 (uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  
  uVar1 = *param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar4 = param_3[2];
  uVar5 = param_3[4];
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[6] = uVar4;
  param_1[7] = param_3[3];
  param_1[8] = uVar5;
  puVar2 = param_1 + 9;
  thunk_duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
            (puVar2,param_2);
  puVar8 = param_1 + 0x10;
  *puVar8 = 0;
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  uVar1 = param_3[4];
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xb] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  *(bool *)(param_1 + 10) = param_1[9] != 0;
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
      FUN_71b07fac(puVar8);
      FUN_71b07dd8(puVar8);
      piVar6 = (int *)*puVar2;
      *puVar2 = 0;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar3 = param_2 * 4;
    uVar1 = thunk_MwhHq(iVar3);
    param_1[0x12] = uVar1 + param_2 * 4;
    param_1[0x10] = uVar1;
    imp___aeabi_memclr4(uVar1,iVar3);
    param_1[0x11] = uVar1 + iVar3;
  }
  param_1[0x13] = 0;
  iVar3 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar3 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_7006d422,0xbb9,
               s__AGC2__Input_volume_controller_e_7006431d,param_1[1]);
  }
  piVar6 = (int *)param_1[0x10];
  piVar9 = (int *)param_1[0x11];
  if (piVar6 != piVar9) {
    do {
      iVar3 = thunk_MwhHq(0x34);
      thunk_voSiDvwQDRejjrRonOMmSKVQlTtZYxnlQdQDICIIZRaya
                (iVar3,param_3[1],param_1[1],param_3[8],param_3[9],param_3[10]);
      iVar7 = *piVar6;
      *piVar6 = iVar3;
      if (iVar7 != 0) {
        thunk_cKYPlafpdW_YljsyErqpjerDlGnCdFsVCDKWuOtye(iVar7);
        thunk_qNQrlu(iVar7);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar9);
    piVar6 = (int *)*puVar8;
  }
  *(undefined1 *)(*piVar6 + 0x18) = 1;
  return param_1;
}


// =========================================================================
// Function: thunk_ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ
// Entry: 0x71e08310 | Size: 1 bytes
// =========================================================================

int thunk_ePg_MmKdPjoqlBhvcSzqzzCoUZKICEYKXWEsQ(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x40);
  if (piVar3 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x44);
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar2 = *piVar4;
        *piVar4 = 0;
        if (iVar2 != 0) {
          thunk_cKYPlafpdW_YljsyErqpjerDlGnCdFsVCDKWuOtye(iVar2);
          thunk_qNQrlu(iVar2);
        }
      } while (piVar4 != piVar3);
      piVar1 = *(int **)(param_1 + 0x40);
    }
    *(int **)(param_1 + 0x44) = piVar3;
    thunk_qNQrlu(piVar1);
  }
  piVar3 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: thunk_CpeNzledvzesgieYPf_nuxQMQpmrDLrIY_TwIJSQYGKE_bOzoUtRsVmH
// Entry: 0x71e08320 | Size: 1 bytes
// =========================================================================

void thunk_CpeNzledvzesgieYPf_nuxQMQpmrDLrIY_TwIJSQYGKE_bOzoUtRsVmH(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((char)param_1[0xb] != '\0') {
    return;
  }
  bVar2 = (char)param_1[0xe] != '\0';
  iVar1 = 0;
  if (bVar2) {
    iVar1 = param_1[0xd];
  }
  if (bVar2 && iVar1 != param_2) {
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(param_1[4]);
    if ((char)param_1[0xe] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_71a914c4();
    }
    iVar1 = param_2 - param_1[0xd];
    if (iVar1 < 0) {
      *param_1 = *param_1 + 1;
      param_1[2] = param_1[2] - iVar1;
    }
    else {
      param_1[1] = param_1[1] + 1;
      param_1[3] = param_1[3] + iVar1;
    }
  }
  iVar1 = param_1[0xc];
  param_1[0xc] = iVar1 + 1;
  if (0x176e < iVar1) {
    thunk_FEobUAPBhp_MqGpXpmygfXJnhpiqNRrRfQSjipdEvHbDVczhxCwthQGitqmaa();
    *param_1 = 0;
    param_1[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[0xc] = 0;
  }
  param_1[0xd] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}


// =========================================================================
// Function: thunk_FEobUAPBhp_MqGpXpmygfXJnhpiqNRrRfQSjipdEvHbDVczhxCwthQGitqmaa
// Entry: 0x71e08330 | Size: 1 bytes
// =========================================================================

void thunk_FEobUAPBhp_MqGpXpmygfXJnhpiqNRrRfQSjipdEvHbDVczhxCwthQGitqmaa(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(param_1[5],*param_1);
  if (0 < *param_1) {
    fVar4 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)imp_roundf(fVar3 / fVar4);
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(param_1[6],(int)fVar3);
  }
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(param_1[7],param_1[1]);
  iVar1 = param_1[1];
  if (0 < iVar1) {
    fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)imp_roundf(fVar3 / fVar4);
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(param_1[8],(int)fVar3);
    iVar1 = param_1[1];
  }
  iVar1 = iVar1 + *param_1;
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(param_1[9],iVar1);
  if (0 < iVar1) {
    iVar2 = param_1[10];
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = (float)VectorSignedToFloat(param_1[3] + param_1[2],(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)imp_roundf(fVar4 / fVar3);
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,(int)fVar3);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_svdUsETwTZtZLIBpPayFsmIRPBZysSOmxtOkfzn_Wbw_OBlpnudBmNC_tyceLsRJjXDLeOqx
// Entry: 0x71e08340 | Size: 1 bytes
// =========================================================================

void thunk_svdUsETwTZtZLIBpPayFsmIRPBZysSOmxtOkfzn_Wbw_OBlpnudBmNC_tyceLsRJjXDLeOqx
               (undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  iVar2 = DAT_7120485c;
  if (DAT_7120485c == 0) {
    iVar2 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                      (s_WebRTC_Audio_Apm_RecommendedInpu_7006c27e,0x3d,1,0xff,0x32);
    if (DAT_7120485c == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x7120485c);
        DAT_7120485c = iVar2;
      } while (!bVar1);
    }
    else {
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    if (iVar2 == 0) {
      return;
    }
  }
  thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,param_1);
  return;
}


// =========================================================================
// Function: thunk_hfXeRIcZlTcpPxeBtFYPyYVHg_wdHScSRTIbMMisTMcpdjYALNrUkSshlnJow
// Entry: 0x71e08350 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_hfXeRIcZlTcpPxeBtFYPyYVHg_wdHScSRTIbMMisTMcpdjYALNrUkSshlnJow(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined4 auStack_70 [3];
  char *pcStack_64;
  undefined4 uStack_60;
  
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar5 = 0x28;
  if (param_2 == 0) {
    uVar5 = 0x24;
  }
  pcVar4 = s_WebRTC_Audio_Apm_RecommendedInpu_700656db;
  if (param_2 == 0) {
    pcVar4 = s_WebRTC_Audio_Apm_AppliedInputVol_700671c1;
  }
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_OnChange_700660cd,8);
  uVar1 = auStack_70[0];
  uVar2 = imp_strlen(auStack_70[0]);
  uVar1 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (uVar1,uVar2,1,0xff,0x32);
  *(undefined4 *)*(undefined1 (*) [16])(param_1 + 4) = uVar1;
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_DecreaseRate_7006a057,0xc);
  uVar1 = auStack_70[0];
  uVar2 = imp_strlen(auStack_70[0]);
  uVar1 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (uVar1,uVar2,1,6000,0x32);
  param_1[5] = uVar1;
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_DecreaseAverage_70061723,0xf);
  uVar1 = auStack_70[0];
  uVar2 = imp_strlen(auStack_70[0]);
  uVar1 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (uVar1,uVar2,1,0xff,0x32);
  param_1[6] = uVar1;
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_IncreaseRate_70061db8,0xc);
  uVar1 = auStack_70[0];
  uVar2 = imp_strlen(auStack_70[0]);
  uVar1 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (uVar1,uVar2,1,6000,0x32);
  param_1[7] = uVar1;
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_IncreaseAverage_700637de,0xf);
  uVar1 = auStack_70[0];
  uVar2 = imp_strlen(auStack_70[0]);
  uVar1 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (uVar1,uVar2,1,0xff,0x32);
  param_1[8] = uVar1;
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_UpdateRate_70067aa0,10);
  uVar1 = auStack_70[0];
  uVar2 = imp_strlen(auStack_70[0]);
  uVar1 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (uVar1,uVar2,1,6000,0x32);
  param_1[9] = uVar1;
  uVar1 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_70,&pcStack_64,0x40);
  uVar1 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar1,pcVar4,uVar5);
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar1,s_UpdateAverage_70067aab,0xd);
  uVar1 = imp_strlen(auStack_70[0]);
  iVar3 = thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
                    (auStack_70[0],uVar1,1,0xff,0x32);
  auVar7 = VectorCompareEqual(*(undefined1 (*) [16])(param_1 + 4),0,4);
  uVar6 = VectorCopyNarrow(auVar7,4);
  param_1[10] = iVar3;
  if (((((uVar6 & 1) == 0 && (uVar6 & 0x10000) == 0) && (uVar6 & 0x100000000) == 0) &&
       (uVar6 & 0x1000000000000) == 0) && (param_1[8] != 0 && param_1[9] != 0)) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
    *(bool *)(param_1 + 0xb) = iVar3 == 0;
    if (iVar3 != 0) {
      return param_1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  iVar3 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ();
  if (iVar3 != 0) {
    return param_1;
  }
  pcStack_64 = s_WebRTC_Audio_Apm_RecommendedInpu_700656db;
  if (param_2 == 0) {
    pcStack_64 = s_WebRTC_Audio_Apm_AppliedInputVol_700671c1;
  }
  uStack_60 = uVar5;
  thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
            (&DAT_700953b2,s_____webrtc_apm_src_webrtc_module_70066076,0x312,
             s_Will_not_log_any___7006f16d,&pcStack_64,s____histogram_stats__7006e8cd);
  return param_1;
}


// =========================================================================
// Function: thunk_RBEmiQLSlaFHoTAbAZaDKpEXmqMhyczkNqdHYOqN
// Entry: 0x71e08360 | Size: 1 bytes
// =========================================================================

void thunk_RBEmiQLSlaFHoTAbAZaDKpEXmqMhyczkNqdHYOqN(void)

{
  return;
}


// =========================================================================
// Function: thunk_n_JaPqkHQfvRleJqIZZyQPsNVwHXSOjYdERYbRXNsLSEmamZZumElDwBaiPFyXxfEazgOloiIqVfUPvIdtpJWpjsqzQexkPVtYGnsLwvNqlqGPyHp
// Entry: 0x71e08370 | Size: 1 bytes
// =========================================================================

undefined4 *
thunk_n_JaPqkHQfvRleJqIZZyQPsNVwHXSOjYdERYbRXNsLSEmamZZumElDwBaiPFyXxfEazgOloiIqVfUPvIdtpJWpjsqzQexkPVtYGnsLwvNqlqGPyHp
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  undefined4 uVar1;
  
  uVar1 = thunk_oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
                    (param_2,param_3,1,10000,0x32);
  *param_1 = uVar1;
  uVar1 = thunk_oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
                    (param_4,param_5,1,10000,0x32);
  param_1[1] = uVar1;
  uVar1 = thunk_oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
                    (param_6,param_7,1,10000,0x32);
  param_1[2] = uVar1;
  uVar1 = thunk_oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
                    (param_8,param_9,1,10000,0x32);
  param_1[3] = uVar1;
  return param_1;
}


// =========================================================================
// Function: thunk_XGUvNeTEOAaIlNkHnNMSfEopcqwsvWEVqAVwoGKghLMxZBHZfqY
// Entry: 0x71e08380 | Size: 1 bytes
// =========================================================================

void thunk_XGUvNeTEOAaIlNkHnNMSfEopcqwsvWEVqAVwoGKghLMxZBHZfqY(void)

{
  return;
}


// =========================================================================
// Function: thunk_b_zDGUbzDhFbTsYDFvujiBynGjoPETkYTDKwpMJEZfjJUwHkH
// Entry: 0x71e08390 | Size: 1 bytes
// =========================================================================

void thunk_b_zDGUbzDhFbTsYDFvujiBynGjoPETkYTDKwpMJEZfjJUwHkH(int *param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 10) = 1;
  if (30057.297 <= param_2) {
    if (33724.844 <= param_2) {
      if (36766.3 <= param_2) {
        iVar3 = 3;
        param_1[9] = param_1[9] + 1;
      }
      else {
        iVar3 = 2;
        param_1[8] = param_1[8] + 1;
      }
    }
    else {
      iVar3 = 1;
      param_1[7] = param_1[7] + 1;
    }
  }
  else {
    iVar3 = 0;
    param_1[6] = param_1[6] + 1;
  }
  puVar4 = (uint *)(param_1 + 0xc);
  uVar1 = *puVar4;
  iVar5 = param_1[0xb];
  if (iVar3 == iVar5) {
    *puVar4 = uVar1 + 1;
    param_1[0xd] = param_1[0xd] + (uint)(0xfffffffe < uVar1);
    return;
  }
  uVar2 = FUN_71ba3034(uVar1,param_1[0xd],100,0);
  switch(iVar5) {
  case 0:
    iVar5 = *param_1;
    break;
  case 1:
    iVar5 = param_1[1];
    break;
  case 2:
    iVar5 = param_1[2];
    goto joined_r0x71afd714;
  case 3:
    iVar5 = param_1[3];
joined_r0x71afd714:
    if (iVar5 == 0) goto switchD_71afd6d8_default;
    goto LAB_71afd718;
  default:
    goto switchD_71afd6d8_default;
  }
  if (iVar5 != 0) {
LAB_71afd718:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar5,uVar2);
  }
switchD_71afd6d8_default:
  *puVar4 = 0;
  param_1[0xd] = 0;
  param_1[0xb] = iVar3;
  return;
}


// =========================================================================
// Function: thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt
// Entry: 0x71e083a0 | Size: 1 bytes
// =========================================================================

float thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt
                (undefined4 param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  
  thunk_b_zDGUbzDhFbTsYDFvujiBynGjoPETkYTDKwpMJEZfjJUwHkH();
  if (param_2 <= 30057.297) {
    return 1.0;
  }
  if (param_2 < 36766.3) {
    uVar4 = 0x20;
    pfVar3 = (float *)&DAT_70098350;
    do {
      bVar1 = pfVar3[uVar4 >> 1] < param_2;
      if (bVar1) {
        pfVar3 = pfVar3 + (uVar4 >> 1) + 1;
      }
      uVar2 = uVar4 >> 1;
      if (bVar1) {
        uVar2 = uVar4 + ~(uVar4 >> 1);
      }
      uVar4 = uVar2;
    } while (uVar4 != 0);
    return pfVar3[0x3f] + pfVar3[0x1f] * param_2;
  }
  return 32768.0 / param_2;
}


// =========================================================================
// Function: thunk_EEppFaqqNLLKNRgVmkaMFWqOvlIUPaFwZvMOlJUmHLF_mefArsdzMHssekAofjK_GPptAvrnseosFreZXeX_jqeQyXVmpGfZTTivGYSZWIrzbE
// Entry: 0x71e083b0 | Size: 1 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_EEppFaqqNLLKNRgVmkaMFWqOvlIUPaFwZvMOlJUmHLF_mefArsdzMHssekAofjK_GPptAvrnseosFreZXeX_jqeQyXVmpGfZTTivGYSZWIrzbE
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_68;
  uint uStack_64;
  undefined8 *puStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined8 *puStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 *puStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined8 *puStack_3c;
  
  puStack_3c = (undefined8 *)thunk_MwhHq(0x10);
  uVar1 = CONCAT35(s_C_Audio__7007588d._0_3_,_DAT_70075888);
  uVar2 = CONCAT53(s_C_Audio__7007588d._3_5_,s_C_Audio__7007588d._0_3_);
  *puStack_3c = uVar1;
  *(undefined8 *)((int)puStack_3c + 5) = uVar2;
  *(undefined1 *)((int)puStack_3c + 0xd) = 0;
  uStack_40 = 0xd;
  uStack_44 = 0x11;
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_44,param_3,param_4);
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_44,s__FixedDigitalGainCurveRegion_Ide_7006bd38,0x25);
  uVar5 = uStack_40;
  puVar8 = puStack_3c;
  if ((uStack_44 & 1) == 0) {
    puVar8 = (undefined8 *)((uint)&uStack_44 | 1);
    uVar5 = uStack_44 >> 1 & 0x7f;
  }
  puStack_48 = (undefined8 *)thunk_MwhHq(0x10);
  *puStack_48 = uVar1;
  *(undefined8 *)((int)puStack_48 + 5) = uVar2;
  *(undefined1 *)((int)puStack_48 + 0xd) = 0;
  uStack_4c = 0xd;
  uStack_50 = 0x11;
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_50,param_3,param_4);
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_50,s__FixedDigitalGainCurveRegion_Kne_7006da88,0x21);
  uVar10 = uStack_4c;
  puVar6 = puStack_48;
  if ((uStack_50 & 1) == 0) {
    puVar6 = (undefined8 *)((uint)&uStack_50 | 1);
    uVar10 = uStack_50 >> 1 & 0x7f;
  }
  puStack_54 = (undefined8 *)thunk_MwhHq(0x10);
  *puStack_54 = uVar1;
  *(undefined8 *)((int)puStack_54 + 5) = uVar2;
  *(undefined1 *)((int)puStack_54 + 0xd) = 0;
  uStack_58 = 0xd;
  uStack_5c = 0x11;
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_5c,param_3,param_4);
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_5c,s__FixedDigitalGainCurveRegion_Lim_700642f8,0x24);
  uVar9 = uStack_58;
  puVar7 = puStack_54;
  if ((uStack_5c & 1) == 0) {
    puVar7 = (undefined8 *)((uint)&uStack_5c | 1);
    uVar9 = uStack_5c >> 1 & 0x7f;
  }
  puStack_60 = (undefined8 *)thunk_MwhHq(0x10);
  *puStack_60 = uVar1;
  *(undefined8 *)((int)puStack_60 + 5) = uVar2;
  *(undefined1 *)((int)puStack_60 + 0xd) = 0;
  uStack_64 = 0xd;
  uStack_68 = 0x11;
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_68,param_3,param_4);
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_68,s__FixedDigitalGainCurveRegion_Sat_7007269b,0x27);
  uVar3 = uStack_64;
  if ((uStack_68 & 1) == 0) {
    uVar3 = uStack_68 >> 1 & 0x7f;
  }
  puVar4 = puStack_60;
  if ((uStack_68 & 1) == 0) {
    puVar4 = (undefined8 *)((uint)&uStack_68 | 1);
  }
  thunk_n_JaPqkHQfvRleJqIZZyQPsNVwHXSOjYdERYbRXNsLSEmamZZumElDwBaiPFyXxfEazgOloiIqVfUPvIdtpJWpjsqzQexkPVtYGnsLwvNqlqGPyHp
            (param_1,puVar8,uVar5,puVar6,uVar10,puVar7,uVar9,puVar4,uVar3);
  if ((uStack_68 & 1) != 0) {
    thunk_qNQrlu(puStack_60);
  }
  if ((uStack_5c & 1) != 0) {
    thunk_qNQrlu(puStack_54);
  }
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(puStack_48);
  }
  if ((uStack_44 & 1) != 0) {
    thunk_qNQrlu(puStack_3c);
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}


// =========================================================================
// Function: thunk_jqoSIRvhMiVPgDTfSwYGHYEpHByGDINqMXrUx
// Entry: 0x71e083c0 | Size: 1 bytes
// =========================================================================

int * thunk_jqoSIRvhMiVPgDTfSwYGHYEpHByGDINqMXrUx(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((char)param_1[10] == '\0') goto switchD_71afd460_default;
  iVar2 = param_1[0xb];
  uVar1 = FUN_71ba3034(param_1[0xc],param_1[0xd],100,0);
  switch(iVar2) {
  case 0:
    iVar2 = *param_1;
    break;
  case 1:
    iVar2 = param_1[1];
    break;
  case 2:
    iVar2 = param_1[2];
    goto joined_r0x71afd49c;
  case 3:
    iVar2 = param_1[3];
joined_r0x71afd49c:
    if (iVar2 == 0) goto switchD_71afd460_default;
    goto LAB_71afd4b0;
  default:
    goto switchD_71afd460_default;
  }
  if (iVar2 != 0) {
LAB_71afd4b0:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,uVar1);
  }
switchD_71afd460_default:
  thunk_XGUvNeTEOAaIlNkHnNMSfEopcqwsvWEVqAVwoGKghLMxZBHZfqY(param_1);
  return param_1;
}


// =========================================================================
// Function: thunk__MUGkurXWuqdkvGLiKzOikNSKYitpKMvJohhTqdTQmkBCXIWMawEp
// Entry: 0x71e083d0 | Size: 1 bytes
// =========================================================================

void thunk__MUGkurXWuqdkvGLiKzOikNSKYitpKMvJohhTqdTQmkBCXIWMawEp
               (int param_1,int param_2,uint param_3,float *param_4,int param_5)

{
  byte bVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  
  pfVar2 = (float *)0x0;
  if (param_5 != 0) {
    pfVar2 = param_4;
  }
  thunk_cUGXZFjnwnCRLcCInbDkytPrSvqortrehqirwytLHGk_kLVbPyNfOJcimBF_rcSpAXJOhaeWjOqnZc_k
            (&uStack_98,param_1 + 0x38,param_2,param_3,pfVar2,param_5);
  puVar6 = (undefined4 *)(param_1 + 0x4c);
  *puVar6 = *(undefined4 *)(param_1 + 0x820);
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_98);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_94);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_90);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_8c);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_88);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_84);
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_80);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_7c);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_78);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_74);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_70);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_6c);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_68);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_64);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_60);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_5c);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_58);
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_54);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_50);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  uVar3 = thunk__tWweJGffQ_XLEQuOsvorzWChnYsajgLTUzbeTWCCfaUlRnJRYkDkEt(param_1,uStack_4c);
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  pfVar12 = (float *)(param_1 + 0xa0);
  pfVar2 = (float *)0x0;
  if (param_3 != 0) {
    pfVar2 = pfVar12;
  }
  uVar11 = param_3 / 0x14;
  if (param_3 % 0x14 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,&DAT_70095f19
               ,param_3 % 0x14,0,param_3,s_is_not_evenly_divisible_by_7006252f,0x14);
  }
  fVar15 = *(float *)(param_1 + 0x4c);
  fVar16 = *(float *)(param_1 + 0x50);
  if ((param_3 != 0) &&
     (uVar8 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar16) << 0x1f |
              (uint)(fVar15 == fVar16) << 0x1e,
     in_fpscr = uVar8 | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c, bVar1 = (byte)(uVar8 >> 0x18),
     !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
    if (param_3 < 0x14) goto LAB_71afcb18;
    uVar8 = 0;
    do {
      uVar3 = FUN_71ba0484(uVar8,uVar11);
      fVar13 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = (float)imp_powf(1.0 - fVar13,0x41000000);
      uVar8 = uVar8 + 1;
      *pfVar12 = fVar16 + fVar13 * (fVar15 - fVar16);
      pfVar12 = pfVar12 + 1;
    } while (uVar11 != uVar8);
  }
  if (0x13 < param_3) {
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar16) << 0x1f |
            (uint)(fVar15 == fVar16) << 0x1e;
    bVar1 = (byte)(uVar8 >> 0x18);
    fVar13 = (float)VectorSignedToFloat(uVar11,(byte)(uVar8 >> 0x16) & 3);
    uVar4 = (uint)(!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar15) || NAN(fVar16)));
    pfVar12 = pfVar2 + uVar11 * uVar4;
    do {
      pfVar7 = (float *)(puVar6 + uVar4);
      uVar4 = uVar4 + 1;
      fVar15 = *pfVar7;
      fVar16 = (float)puVar6[uVar4];
      pfVar7 = pfVar12;
      uVar9 = 0;
      do {
        uVar10 = uVar9 + 1;
        fVar14 = (float)VectorSignedToFloat(uVar9,(byte)(uVar8 >> 0x16) & 3);
        *pfVar7 = fVar15 + ((fVar16 - fVar15) / fVar13) * fVar14;
        pfVar7 = pfVar7 + 1;
        uVar9 = uVar10;
      } while (uVar11 != uVar10);
      pfVar12 = pfVar12 + uVar11;
    } while (uVar4 != 0x14);
  }
LAB_71afcb18:
  if ((param_2 != 0) && (0 < (int)param_3)) {
    iVar5 = 0;
    pfVar12 = pfVar2;
    uVar11 = param_3;
    pfVar7 = param_4;
    do {
      do {
        fVar16 = *param_4 * *pfVar12;
        fVar15 = fVar16;
        if (32767.0 <= fVar16) {
          fVar15 = 32767.0;
        }
        if (fVar16 <= -32768.0) {
          fVar15 = -32768.0;
        }
        uVar11 = uVar11 - 1;
        *param_4 = fVar15;
        param_4 = param_4 + 1;
        pfVar12 = pfVar12 + 1;
      } while (uVar11 != 0);
      iVar5 = iVar5 + 1;
      param_4 = pfVar7 + param_3;
      pfVar12 = pfVar2;
      uVar11 = param_3;
      pfVar7 = param_4;
    } while (iVar5 != param_2);
  }
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x9c);
  return;
}


// =========================================================================
// Function: thunk_jkmZnIn_isZ_CcnGyZ_zRVY_FRFMUvPXgbxdTsXF
// Entry: 0x71e083e0 | Size: 1 bytes
// =========================================================================

void thunk_jkmZnIn_isZ_CcnGyZ_zRVY_FRFMUvPXgbxdTsXF(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}


// =========================================================================
// Function: thunk_xvujOqVqotyLaHpaIuWpSLQsXM
// Entry: 0x71e083f0 | Size: 1 bytes
// =========================================================================

void thunk_xvujOqVqotyLaHpaIuWpSLQsXM(int param_1)

{
  thunk_ScxNepyyTeaIhkmtbFcsTxOmmpmRSDhHGXpruyroymyBLx(param_1 + 0x38);
  return;
}


// =========================================================================
// Function: thunk_ijlPHZmeHie_aPMwolfzPUevGadLquBglskZw
// Entry: 0x71e08400 | Size: 1 bytes
// =========================================================================

undefined4 thunk_ijlPHZmeHie_aPMwolfzPUevGadLquBglskZw(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}


// =========================================================================
// Function: thunk_NppcinjAmVaZldHjimpXyBOSlXljfPHeMvydQhghKRLrwPgWNQYdNgfhmeRMAApHUlGRSfQxYrWMIlyPhSFcXGTdoNLOaxFc
// Entry: 0x71e08410 | Size: 1 bytes
// =========================================================================

int thunk_NppcinjAmVaZldHjimpXyBOSlXljfPHeMvydQhghKRLrwPgWNQYdNgfhmeRMAApHUlGRSfQxYrWMIlyPhSFcXGTdoNLOaxFc
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  
  iVar1 = thunk_EEppFaqqNLLKNRgVmkaMFWqOvlIUPaFwZvMOlJUmHLF_mefArsdzMHssekAofjK_GPptAvrnseosFreZXeX_jqeQyXVmpGfZTTivGYSZWIrzbE
                    (param_1,param_2,param_4,param_5);
  thunk_ZtCBcoAbzYJZOevkolmWSQyAFNbqbmgaPhWaLVlFPEeZMXSJmJScthHHAU_Sqt(iVar1 + 0x38,param_3,param_2)
  ;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  imp___aeabi_memclr4(param_1 + 0x4c,0x7d4);
  *(undefined4 *)(param_1 + 0x820) = 0x3f800000;
  return param_1;
}


// =========================================================================
// Function: thunk_UqLAomKxS_yDNrnnkveYjN
// Entry: 0x71e08420 | Size: 1 bytes
// =========================================================================

int * thunk_UqLAomKxS_yDNrnnkveYjN(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((char)param_1[10] == '\0') goto switchD_71afd460_default;
  iVar2 = param_1[0xb];
  uVar1 = FUN_71ba3034(param_1[0xc],param_1[0xd],100,0);
  switch(iVar2) {
  case 0:
    iVar2 = *param_1;
    break;
  case 1:
    iVar2 = param_1[1];
    break;
  case 2:
    iVar2 = param_1[2];
    goto joined_r0x71afd49c;
  case 3:
    iVar2 = param_1[3];
joined_r0x71afd49c:
    if (iVar2 == 0) goto switchD_71afd460_default;
    goto LAB_71afd4b0;
  default:
    goto switchD_71afd460_default;
  }
  if (iVar2 != 0) {
LAB_71afd4b0:
    thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,uVar1);
  }
switchD_71afd460_default:
  thunk_XGUvNeTEOAaIlNkHnNMSfEopcqwsvWEVqAVwoGKghLMxZBHZfqY(param_1);
  return param_1;
}


// =========================================================================
// Function: thunk_oCvNXutoGNJyyKJHFDpFGbaKvuWYyWSAHQlBRsWmrgzzbIsJ_qkLLstegK
// Entry: 0x71e08430 | Size: 1 bytes
// =========================================================================

void thunk_oCvNXutoGNJyyKJHFDpFGbaKvuWYyWSAHQlBRsWmrgzzbIsJ_qkLLstegK
               (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_MwhHq(0x20);
  *(undefined2 *)(puVar1 + 4) = 1;
  puVar1[7] = 500;
  puVar1[5] = 0x44f00000;
  puVar1[6] = 0x44f00000;
  *param_1 = puVar1;
  *puVar1 = &DAT_70b138cc;
  puVar1[1] = param_2;
  puVar1[2] = 48000;
  puVar1[3] = 0x44f00000;
  return;
}


// =========================================================================
// Function: thunk_sCi_oRaeY_EHohURkmOwCEseEkXFvmF_YsuYsIYyc_tIzghCLThPuGkZdiTjabfvtO_AEDpXCUrFNWLsDDyuejbOjRh_LsmplGHDQmwKlejn
// Entry: 0x71e08440 | Size: 1 bytes
// =========================================================================

void thunk_sCi_oRaeY_EHohURkmOwCEseEkXFvmF_YsuYsIYyc_tIzghCLThPuGkZdiTjabfvtO_AEDpXCUrFNWLsDDyuejbOjRh_LsmplGHDQmwKlejn
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 *puStack_20;
  int iStack_1c;
  
  thunk_mguoHeaWBItStnWikIAmIltiHKBygXqMVIjBNnG(&puStack_20,*(undefined4 *)(param_1 + 0x10));
  puVar2 = (undefined8 *)(param_2 + 0x6c0);
  bVar5 = puStack_20 < puVar2;
  if (bVar5) {
    puVar2 = (undefined8 *)(param_2 + 0x300);
  }
  if (bVar5 && puVar2 < puStack_20 + 0x78) {
    iVar3 = 0x6bc;
    puVar2 = puStack_20;
    do {
      puVar1 = (undefined4 *)(param_2 + iVar3);
      iVar3 = iVar3 + -4;
      *(undefined4 *)puVar2 = *puVar1;
      puVar2 = (undefined8 *)((int)puVar2 + 4);
    } while (iVar3 != 0x2fc);
  }
  else {
    iVar3 = 0x6b0;
    puVar2 = puStack_20;
    do {
      pauVar4 = (undefined1 (*) [16])(param_2 + iVar3);
      iVar3 = iVar3 + -0x10;
      auVar6 = vrev(*pauVar4,4);
      *puVar2 = auVar6._8_8_;
      puVar2[1] = auVar6._0_8_;
      puVar2 = puVar2 + 2;
    } while (iVar3 != 0x2f0);
  }
  if (0xf0 < iStack_1c) {
    imp___aeabi_memclr4(puStack_20 + 0x78,iStack_1c * 4 + -0x3c0);
  }
  thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
            (param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0);
  imp___aeabi_memmove4(puStack_20,param_2,0x60c);
  if (0x183 < iStack_1c) {
    imp___aeabi_memclr4((undefined4 *)((int)puStack_20 + 0x60c),iStack_1c * 4 + -0x60c);
  }
  thunk_CwfQNpPlBfFTuLSDAPZsaYoDHvFWLBMxGYxVkbdHaJexENdFBwwneQgtgOFO
            (param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  if (0 < iStack_1c) {
    imp___aeabi_memclr4(puStack_20,iStack_1c << 2);
  }
  thunk_eynZWwVDoWDXWrqliyyfAnRoLa_NviwHwKmnIYtsOSmKsKVEZfVMzGtYbPbBiugXivdXtq
            (param_1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x10),0x3b000000);
  thunk_IAYmOnea_hKUjmPCSXJmhVRAgSLlpekeLjFrCBaN_kwqXmwgpivOYEngXnUKI
            (param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x10),0);
  imp___aeabi_memmove4(param_3,(undefined4 *)((int)puStack_20 + 0x3bc),0x24c);
  return;
}


// =========================================================================
// Function: thunk_VEmacybea_ztQhFRvEincYffdeecdeGRdiccKASpbymWOAdAt
// Entry: 0x71e08450 | Size: 1 bytes
// =========================================================================

int thunk_VEmacybea_ztQhFRvEincYffdeecdeGRdiccKASpbymWOAdAt(int param_1)

{
  int iVar1;
  
  iVar1 = thunk_fyyMVOygMhMevIkrkTTUtzbPTMHqUsLol(param_1,0x200,0);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(iVar1 + 0x10,param_1);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x14,param_1);
  thunk_fTPUMqEBRBLiG_BFUgrKcLOVDOfAQdsGZ(param_1 + 0x18,param_1);
  return param_1;
}


// =========================================================================
// Function: thunk_VVkauTHYjCrpyFijxxbuITqGsKpLuHhWfTkrNrZhVbBEwrowT
// Entry: 0x71e08460 | Size: 1 bytes
// =========================================================================

void thunk_VVkauTHYjCrpyFijxxbuITqGsKpLuHhWfTkrNrZhVbBEwrowT(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 != 0) {
    thunk_MoWCgOEvNFnIfeJwQZehZmjCXReekaAPR();
    thunk_qNQrlu();
  }
  thunk_vCBnCSmxQftcHuTI_iwg(param_1);
  return;
}


// =========================================================================
// Function: thunk_WVmiALmpJBDDkRLIFqxkTxOevJOFNWCiIQAtqwNcYzjadCSHTsZyUGHme_shojHZojydYbpFxjSVRRHHkosciobwCECTgadMIFmOSRBpMB
// Entry: 0x71e08470 | Size: 1 bytes
// =========================================================================

void thunk_WVmiALmpJBDDkRLIFqxkTxOevJOFNWCiIQAtqwNcYzjadCSHTsZyUGHme_shojHZojydYbpFxjSVRRHHkosciobwCECTgadMIFmOSRBpMB
               (char *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  undefined1 auStack_3e0 [960];
  
  if (*param_1 == '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    thunk_ehVOBipNoUVIEbuYcOOitsxRdddNDsxAlPZzAiVdDEZcHtpoUVWrrXAZgGCcIjDbgxVHpxigKgwzW
              (param_1 + 4,param_2,0xf0,auStack_3e0,0xf0);
    iVar1 = *(int *)(param_1 + 0x28);
    param_2 = auStack_3e0;
  }
  imp___aeabi_memmove4(iVar1,iVar1 + 0x3c0,0x9c0);
  imp___aeabi_memcpy4(*(int *)(param_1 + 0x28) + 0x9c0,param_2,0x3c0);
  thunk_jiomycNgQryNFDelGUeuijskSxYzjRxrJR_jdLBDWrAKNMEfnaxZuBOiADwZoTvOJjPJmXvUksYMHcLpsRTYhhu_hzXAfuWPs
            (*(undefined4 *)(param_1 + 0x34),0x360,auStack_3e0);
  thunk_IohaqdaJkTYApXRwSkaeZUnuSwthJsuwqtsmCXqqvcSkzFtKAgHTh_LIZfyvZbMbKktUuEpF_tKhHjInVgSHFBrTCxjanpxO
            (auStack_3e0,*(undefined4 *)(param_1 + 0x34),0x360,*(undefined4 *)(param_1 + 0x44),0x360
            );
  iVar1 = thunk_WdioBfjiwGCpKICSbifqaqGAdonLCeqofXixJoDcXbFyiGjcMBoJyAJSikGnOPhaiBAMXk
                    (param_1 + 0x48,*(undefined4 *)(param_1 + 0x44));
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  fVar4 = (float)VectorSignedToFloat(iVar1 + -300,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_3 + 0xa0) = fVar4 * 0.01;
  *(int *)(param_1 + 0x1088) = iVar1;
  uVar2 = 0x180 - iVar1 / 2;
  iVar1 = 0;
  if (uVar2 < 0x360) {
    iVar1 = *(int *)(param_1 + 0x34) + uVar2 * 4;
  }
  thunk_whZOywNEBoKqTqyCVwFrVnvYSiLQZekKn_mkVkovVFXYXSRgNYDiWdgjhoCRUrVyjrmU_dAfKkOxINVMbWRojQgYORAR_fPSmrpVKTeWxGCEncntmdkv_kFAvOlEcdRatEKMlAuREmGM
            (param_1 + 0x98,uVar3,iVar1,param_3 + 0x18,param_3,param_3 + 0x58,param_3 + 0x70,
             param_3 + 0x88,param_3 + 0xa4);
  return;
}


// =========================================================================
// Function: thunk_nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf
// Entry: 0x71e08480 | Size: 1 bytes
// =========================================================================

char * thunk_nZnKNwDqrvRDuyfBNSEJExUOWdzNtBvCzYBXPJiwMmXaHfJrimhhqAxdnHgaCLPcGclf
                 (char *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = '\0';
  thunk_CuMjfweCqEfLNMapwHArMcjtLZIxCvq_XGzsLgpHq(param_1 + 4,&DAT_7009852c);
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  iVar1 = thunk_MwhHq(0xd80);
  *(int *)(param_1 + 0x2c) = iVar1 + 0xd80;
  *(int *)(param_1 + 0x30) = iVar1 + 0xd80;
  *(int *)(param_1 + 0x28) = iVar1;
  imp___aeabi_memclr4(iVar1,0xd80);
  *(int *)(param_1 + 0x34) = iVar1;
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  iVar1 = thunk_MwhHq(0xd80);
  *(int *)(param_1 + 0x40) = iVar1 + 0xd80;
  *(int *)(param_1 + 0x38) = iVar1;
  imp___aeabi_memclr4(iVar1,0xd80);
  *(int *)(param_1 + 0x44) = iVar1;
  *(int *)(param_1 + 0x3c) = iVar1 + 0xd80;
  thunk_NxjCrNENClXUwiDaXilxzGNloUhtnjcSKSlHCITkhFdHFfnQFZstKRTxVfezfoGeu(param_1 + 0x48,param_2);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x28) + 0x600;
  thunk_JGnWLtHNBLpBfuQcLgBncnENCRQiYTWsMXbjcnavwcxjuu_le(param_1 + 0x98);
  if (0 < *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) {
    imp___aeabi_memclr4();
  }
  thunk_oKCIaDWsZIoSaaNcHBgIeLZUckaFoeuOum_NTUHXCdfnZaiZHfNcY(param_1 + 0x98);
  if (*param_1 != '\0') {
    thunk_pkTw_YJoxqtEvhsASuWGNzyiiSmpemDj(param_1 + 4);
  }
  return param_1;
}


// =========================================================================
// Function: thunk_AYCBmHkNqaFTiJMhiPDkLbbUPYgzjDZxxxWvsKQNQ
// Entry: 0x71e08490 | Size: 1 bytes
// =========================================================================

int thunk_AYCBmHkNqaFTiJMhiPDkLbbUPYgzjDZxxxWvsKQNQ(int param_1)

{
  thunk_GdKToftlFouRSZEDUOMXwtgbgQNtjewLtwpzjRURVAnpierwe(param_1 + 0x98);
  thunk_nAEXYGiAjImbejVgVlFICfeTOoYMNNhRgeWuih(param_1 + 0x48);
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
    thunk_qNQrlu();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    thunk_qNQrlu();
  }
  thunk_yLNXSumhunHh_KEgGbRWYBBvzCQT(param_1 + 4);
  return param_1;
}


// =========================================================================
// Function: thunk_jiomycNgQryNFDelGUeuijskSxYzjRxrJR_jdLBDWrAKNMEfnaxZuBOiADwZoTvOJjPJmXvUksYMHcLpsRTYhhu_hzXAfuWPs
// Entry: 0x71e084a0 | Size: 1 bytes
// =========================================================================

void thunk_jiomycNgQryNFDelGUeuijskSxYzjRxrJR_jdLBDWrAKNMEfnaxZuBOiADwZoTvOJjPJmXvUksYMHcLpsRTYhhu_hzXAfuWPs
               (float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 in_s11;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar19;
  ulonglong uVar18;
  float fVar20;
  undefined8 uVar21;
  undefined8 unaff_d8;
  
  fVar6 = 0.0;
  pfVar3 = (float *)0x0;
  if (param_2 != 0) {
    pfVar3 = param_1;
  }
  pfVar5 = pfVar3 + param_2;
  fVar12 = fVar6;
  if (param_2 != 0) {
    fVar12 = 0.0;
    pfVar4 = param_1;
    do {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      fVar12 = fVar12 + fVar7 * fVar7;
    } while (pfVar4 != pfVar5);
  }
  fVar7 = fVar6;
  if (pfVar5 + -1 != pfVar3) {
    fVar7 = 0.0;
    fVar8 = *pfVar3;
    do {
      pfVar4 = param_1 + 1;
      param_1 = param_1 + 1;
      fVar7 = fVar7 + fVar8 * *pfVar4;
      fVar8 = *pfVar4;
    } while (param_1 != pfVar5 + -1);
  }
  fVar8 = fVar6;
  if (pfVar5 + -2 != pfVar3) {
    fVar8 = 0.0;
    iVar2 = param_2 * 4 + -8;
    pfVar4 = pfVar3 + 2;
    do {
      fVar10 = *pfVar4;
      iVar2 = iVar2 + -4;
      pfVar1 = pfVar4 + -2;
      pfVar4 = pfVar4 + 1;
      fVar8 = fVar8 + *pfVar1 * fVar10;
    } while (iVar2 != 0);
  }
  fVar10 = fVar6;
  if (pfVar5 + -3 != pfVar3) {
    fVar10 = 0.0;
    iVar2 = param_2 * 4 + -0xc;
    pfVar4 = pfVar3 + 3;
    do {
      fVar14 = *pfVar4;
      iVar2 = iVar2 + -4;
      pfVar1 = pfVar4 + -3;
      pfVar4 = pfVar4 + 1;
      fVar10 = fVar10 + *pfVar1 * fVar14;
    } while (iVar2 != 0);
  }
  if (pfVar5 + -4 != pfVar3) {
    fVar6 = 0.0;
    iVar2 = param_2 * 4 + -0x10;
    pfVar3 = pfVar3 + 4;
    do {
      fVar14 = *pfVar3;
      iVar2 = iVar2 + -4;
      pfVar5 = pfVar3 + -4;
      pfVar3 = pfVar3 + 1;
      fVar6 = fVar6 + *pfVar5 * fVar14;
    } while (iVar2 != 0);
  }
  if (fVar12 != 0.0) {
    uVar19 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
    fVar12 = fVar12 * 1.0001;
    uVar17 = CONCAT44(uVar19,fVar12);
    fVar7 = fVar7 + fVar7 * -6.4e-05;
    uVar21 = VectorBitwiseSelect(0x8000000080000000,uVar17,CONCAT44(in_s11,0x358637bd));
    fVar14 = fVar12 * 0.001;
    if (ABS(fVar12) < 1e-06) {
      uVar17 = CONCAT44(uVar19,(int)uVar21);
    }
    fVar20 = 0.0;
    fVar15 = (float)uVar17;
    fVar13 = (fVar7 + 0.0) / -fVar15;
    uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
    fVar15 = fVar15 - fVar13 * fVar13 * fVar15;
    uVar17 = CONCAT44(uVar19,fVar15);
    fVar12 = fVar20;
    fVar11 = fVar20;
    if (fVar14 <= fVar15) {
      fVar20 = 0.0;
      fVar8 = fVar8 + fVar8 * -0.000256;
      uVar21 = VectorBitwiseSelect(0x8000000080000000,uVar17,CONCAT44(in_s11,0x358637bd));
      if (ABS(fVar15) < 1e-06) {
        uVar17 = CONCAT44(uVar19,(int)uVar21);
      }
      fVar16 = (float)uVar17;
      fVar15 = (fVar13 * fVar7 + 0.0 + fVar8) / -fVar16;
      fVar13 = fVar13 + fVar15 * fVar13;
      uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
      fVar16 = fVar16 - fVar15 * fVar15 * fVar16;
      uVar17 = CONCAT44(uVar19,fVar16);
      fVar12 = fVar15;
      fVar11 = fVar20;
      if (fVar14 <= fVar16) {
        fVar20 = 0.0;
        fVar10 = fVar10 + fVar10 * -0.000576;
        uVar21 = VectorBitwiseSelect(0x8000000080000000,uVar17,CONCAT44(in_s11,0x358637bd));
        if (ABS(fVar16) < 1e-06) {
          uVar17 = CONCAT44(uVar19,(int)uVar21);
        }
        fVar16 = (float)uVar17;
        fVar11 = (fVar13 * fVar8 + 0.0 + fVar15 * fVar7 + fVar10) / -fVar16;
        fVar16 = fVar16 - fVar11 * fVar11 * fVar16;
        uVar18 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),fVar16);
        fVar12 = fVar15 + fVar11 * fVar13;
        fVar13 = fVar13 + fVar11 * fVar15;
        if (fVar14 <= fVar16) {
          uVar9 = VectorBitwiseSelect(0x8000000080000000,uVar18,CONCAT44(in_s11,0x358637bd));
          if (ABS(fVar16) < 1e-06) {
            uVar18 = uVar9 & 0xffffffff;
          }
          fVar7 = (fVar13 * fVar10 + 0.0 + fVar12 * fVar8 + fVar11 * fVar7 +
                  fVar6 + fVar6 * -0.001024) / -(float)uVar18;
          fVar6 = fVar7 * fVar13;
          fVar13 = fVar13 + fVar7 * fVar11;
          fVar20 = fVar7 * 0.6560999;
          fVar12 = fVar12 + fVar7 * fVar12;
          fVar11 = fVar11 + fVar6;
        }
      }
    }
    param_3[4] = fVar20 * 0.8;
    param_3[3] = fVar20 + fVar11 * 0.7289999 * 0.8;
    param_3[2] = fVar11 * 0.7289999 + fVar12 * 0.80999994 * 0.8;
    param_3[1] = fVar12 * 0.80999994 + fVar13 * 0.9 * 0.8;
    *param_3 = fVar13 * 0.9 + 0.8;
    return;
  }
  imp___aeabi_memclr4(param_3,0x14);
  return;
}


// =========================================================================
// Function: thunk_IohaqdaJkTYApXRwSkaeZUnuSwthJsuwqtsmCXqqvcSkzFtKAgHTh_LIZfyvZbMbKktUuEpF_tKhHjInVgSHFBrTCxjanpxO
// Entry: 0x71e084b0 | Size: 1 bytes
// =========================================================================

void thunk_IohaqdaJkTYApXRwSkaeZUnuSwthJsuwqtsmCXqqvcSkzFtKAgHTh_LIZfyvZbMbKktUuEpF_tKhHjInVgSHFBrTCxjanpxO
               (float *param_1,float *param_2,undefined4 param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  
  fVar7 = *param_2;
  *param_4 = fVar7;
  param_4[1] = param_2[1] + fVar7 * *param_1;
  param_4[2] = param_2[2] + param_2[1] * *param_1 + *param_2 * param_1[1];
  param_4[3] = param_2[3] + param_2[2] * *param_1 + param_2[1] * param_1[1] + *param_2 * param_1[2];
  param_4[4] = param_2[4] + param_2[3] * *param_1 + param_2[2] * param_1[1] +
               param_2[1] * param_1[2] + *param_2 * param_1[3];
  if (param_5 < 6) {
    return;
  }
  param_4 = param_4 + 5;
  param_2 = param_2 + 3;
  iVar6 = param_5 - 5;
  do {
    iVar6 = iVar6 + -1;
    pfVar4 = param_2 + 1;
    pfVar5 = param_2 + 2;
    fVar7 = *param_2;
    pfVar1 = param_2 + -1;
    pfVar2 = param_2 + -2;
    pfVar3 = param_2 + -3;
    param_2 = param_2 + 1;
    *param_4 = *pfVar5 + *pfVar4 * *param_1 + fVar7 * param_1[1] + *pfVar1 * param_1[2] +
               *pfVar2 * param_1[3] + *pfVar3 * param_1[4];
    param_4 = param_4 + 1;
  } while (iVar6 != 0);
  return;
}


// =========================================================================
// Function: thunk_WdioBfjiwGCpKICSbifqaqGAdonLCeqofXixJoDcXbFyiGjcMBoJyAJSikGnOPhaiBAMXk
// Entry: 0x71e084c0 | Size: 1 bytes
// =========================================================================

void thunk_WdioBfjiwGCpKICSbifqaqGAdonLCeqofXixJoDcXbFyiGjcMBoJyAJSikGnOPhaiBAMXk
               (uint3 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = *(undefined4 *)(param_1 + 0xd);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  thunk_IRCXkiItUzsTmtfmybENXNFMwzxYflqXPCKdsGUOXMKmjzBWaFuYGRShwau_ho_zlXziBw_(param_2,uVar2);
  thunk_sCi_oRaeY_EHohURkmOwCEseEkXFvmF_YsuYsIYyc_tIzghCLThPuGkZdiTjabfvtO_AEDpXCUrFNWLsDDyuejbOjRh_LsmplGHDQmwKlejn
            (param_1 + 3,uVar2,uVar3);
  thunk_oHExgsGtDOcJWLaFYtFEAkeQTmhKuBVcfRytRsvTRGmlFMzCYARSiiQJPlKVQyLsewPeESPJ_ywQHzCOACdCFudKyDSIAmHCMJQIHMPJfQNzRXlE
            (&iStack_28,uVar2,uVar3,(uint)*param_1);
  iStack_28 = iStack_28 << 1;
  uVar2 = *(undefined4 *)(param_1 + 10);
  iStack_24 = iStack_24 << 1;
  thunk_YNdwMjlTAwNsMgfvTDEdcRgCHyYzXJeulsHBaUdCMLtE__KEYqgWWRouewqUebHkJseNBQmFVqkmUIFaFKTqFHkQugOSmUnOGlpmZyOu_oUamwuUXlZRmwKoQtGZQ
            (param_2,uVar2,(uint)*param_1);
  iVar1 = thunk_RDeKBXYTRHPwNtMfqHrzuNStrAETKuKMoIe_EkeOjnsXURRXwkuZfuzsDEtgtidKIsVnDmiUJeSyZAZchLp_nqDYt_bwHlwvqwsskAKMtlqbBzGFhacyZXjakNuWJjrmScgjmQPnQuqG
                    (param_2,uVar2,iStack_28,iStack_24,(uint)*param_1);
  thunk_vnNgzwdNnJROOgYoqykdnfQzWboBWbqsNaJzLSYpKBzjfxENtmng_wdxMspELIcCxN_cQtiIRMDnYPmgsmKXSFkcmACUqpUIWLNPti_yzqTAPhibDsRywfNHchYNI_iNTF_lxzeX
            (&uStack_30,param_2,uVar2,0x300 - iVar1,*(undefined4 *)(param_1 + 1),
             *(undefined4 *)(param_1 + 2),(uint)*param_1);
  *(undefined4 *)(param_1 + 1) = uStack_30;
  *(undefined4 *)(param_1 + 2) = uStack_2c;
  return;
}


// =========================================================================
// Function: thunk_NxjCrNENClXUwiDaXilxzGNloUhtnjcSKSlHCITkhFdHFfnQFZstKRTxVfezfoGeu
// Entry: 0x71e084d0 | Size: 1 bytes
// =========================================================================

undefined2 *
thunk_NxjCrNENClXUwiDaXilxzGNloUhtnjcSKSlHCITkhFdHFfnQFZstKRTxVfezfoGeu
          (undefined2 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  thunk_VEmacybea_ztQhFRvEincYffdeecdeGRdiccKASpbymWOAdAt(param_1 + 6);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = thunk_MwhHq(0x604);
  *(int *)(param_1 + 0x18) = iVar2 + 0x604;
  *(int *)(param_1 + 0x14) = iVar2;
  imp___aeabi_memclr4(iVar2,0x604);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(int *)(param_1 + 0x16) = iVar2 + 0x604;
  iVar2 = thunk_MwhHq(0x6c0);
  *(int *)(param_1 + 0x1e) = iVar2 + 0x6c0;
  *(int *)(param_1 + 0x1a) = iVar2;
  imp___aeabi_memclr4(iVar2,0x6c0);
  *(int *)(param_1 + 0x1c) = iVar2 + 0x6c0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar2 = thunk_MwhHq(0x24c);
  *(int *)(param_1 + 0x24) = iVar2 + 0x24c;
  *(int *)(param_1 + 0x20) = iVar2;
  imp___aeabi_memclr4(iVar2,0x24c);
  *(int *)(param_1 + 0x22) = iVar2 + 0x24c;
  return param_1;
}


// =========================================================================
// Function: thunk_nAEXYGiAjImbejVgVlFICfeTOoYMNNhRgeWuih
// Entry: 0x71e084e0 | Size: 1 bytes
// =========================================================================

int thunk_nAEXYGiAjImbejVgVlFICfeTOoYMNNhRgeWuih(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x40);
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
  thunk_VVkauTHYjCrpyFijxxbuITqGsKpLuHhWfTkrNrZhVbBEwrowT(param_1 + 0xc);
  return param_1;
}


// =========================================================================
// Function: thunk_IRCXkiItUzsTmtfmybENXNFMwzxYflqXPCKdsGUOXMKmjzBWaFuYGRShwau_ho_zlXziBw_
// Entry: 0x71e084f0 | Size: 1 bytes
// =========================================================================

void thunk_IRCXkiItUzsTmtfmybENXNFMwzxYflqXPCKdsGUOXMKmjzBWaFuYGRShwau_ho_zlXziBw_
               (undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 in_d16;
  undefined8 in_d17;
  
  puVar3 = param_1 + 0x35f;
  bVar7 = param_2 <= puVar3;
  bVar6 = puVar3 == param_2;
  if (bVar7 && !bVar6) {
    puVar3 = (undefined4 *)0x0;
    bVar7 = param_1 <= param_2 + 0x1b0;
    bVar6 = param_2 + 0x1b0 == param_1;
  }
  if (!bVar7 || bVar6) {
    iVar4 = 0;
    puVar3 = param_1;
    do {
      puVar5 = (undefined8 *)((int)param_2 + iVar4);
      puVar1 = (undefined4 *)0x380;
      puVar2 = (undefined4 *)0x390;
      lVar9 = 2;
      puVar8 = puVar3;
      while( true ) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar1 = (undefined4 *)0x388;
      puVar2 = (undefined4 *)0x398;
      lVar9 = 2;
      while( true ) {
        *puVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar3 = puVar3 + 8;
      iVar4 = iVar4 + 0x10;
      *puVar5 = in_d16;
      puVar5[1] = in_d17;
    } while (iVar4 != 0x6b0);
    puVar3 = (undefined4 *)0x1ac;
  }
  iVar4 = (int)puVar3 << 2;
  puVar3 = param_1 + (int)puVar3 * 2;
  do {
    *(undefined4 *)((int)param_2 + iVar4) = *puVar3;
    iVar4 = iVar4 + 4;
    puVar3 = puVar3 + 2;
  } while (iVar4 != 0x6c0);
  return;
}


// =========================================================================
// Function: thunk_YNdwMjlTAwNsMgfvTDEdcRgCHyYzXJeulsHBaUdCMLtE__KEYqgWWRouewqUebHkJseNBQmFVqkmUIFaFKTqFHkQugOSmUnOGlpmZyOu_oUamwuUXlZRmwKoQtGZQ
// Entry: 0x71e08500 | Size: 1 bytes
// =========================================================================

void thunk_YNdwMjlTAwNsMgfvTDEdcRgCHyYzXJeulsHBaUdCMLtE__KEYqgWWRouewqUebHkJseNBQmFVqkmUIFaFKTqFHkQugOSmUnOGlpmZyOu_oUamwuUXlZRmwKoQtGZQ
               (int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = 0.0;
  iVar2 = 0;
  do {
    pfVar3 = (float *)(param_1 + iVar2);
    iVar2 = iVar2 + 4;
    fVar4 = fVar4 + *pfVar3 * *pfVar3;
  } while (iVar2 != 0x780);
  *param_2 = fVar4;
  iVar2 = 0;
  do {
    fVar5 = *(float *)(param_1 + iVar2);
    fVar6 = ((float *)(param_1 + iVar2))[0x1e0];
    iVar1 = iVar2 + 4;
    iVar2 = iVar2 + 4;
    fVar5 = (fVar4 - fVar5 * fVar5) + fVar6 * fVar6;
    fVar4 = 1.0;
    if (1.0 < fVar5) {
      fVar4 = fVar5;
    }
    *(float *)((int)param_2 + iVar1) = fVar4;
  } while (iVar2 != 0x600);
  return;
}


// =========================================================================
// Function: thunk_oHExgsGtDOcJWLaFYtFEAkeQTmhKuBVcfRytRsvTRGmlFMzCYARSiiQJPlKVQyLsewPeESPJ_ywQHzCOACdCFudKyDSIAmHCMJQIHMPJfQNzRXlE
// Entry: 0x71e08510 | Size: 1 bytes
// =========================================================================

void thunk_oHExgsGtDOcJWLaFYtFEAkeQTmhKuBVcfRytRsvTRGmlFMzCYARSiiQJPlKVQyLsewPeESPJ_ywQHzCOACdCFudKyDSIAmHCMJQIHMPJfQNzRXlE
               (int *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar9 = 0.0;
  iVar2 = 0;
  do {
    pfVar5 = (float *)(param_2 + iVar2);
    iVar2 = iVar2 + 4;
    fVar9 = fVar9 + *pfVar5 * *pfVar5;
  } while (iVar2 != 0x3c4);
  fVar7 = 0.0;
  pfVar5 = (float *)(param_2 + 0x3c0);
  iVar6 = 1;
  iVar3 = 0;
  fVar9 = fVar9 + 1.0;
  fVar13 = -1.0;
  iVar2 = 0;
  fVar14 = -1.0;
  fVar11 = fVar7;
  fVar12 = fVar7;
  do {
    fVar15 = *param_3;
    iVar4 = iVar2;
    fVar8 = fVar14;
    fVar10 = fVar11;
    if (((0.0 < fVar15) && (fVar15 = fVar15 * fVar15, fVar13 * fVar9 < fVar12 * fVar15)) &&
       (iVar6 = iVar3, fVar12 = fVar9, fVar13 = fVar15, fVar14 * fVar9 < fVar11 * fVar15)) {
      iVar4 = iVar3;
      iVar6 = iVar2;
      fVar8 = fVar15;
      fVar10 = fVar9;
      fVar12 = fVar11;
      fVar13 = fVar14;
    }
    pfVar1 = pfVar5 + -0xf0;
    param_3 = param_3 + 1;
    fVar14 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar3 = iVar3 + 1;
    fVar14 = (fVar9 - *pfVar1 * *pfVar1) + fVar14 * fVar14;
    fVar9 = fVar7;
    if (0.0 < fVar14) {
      fVar9 = fVar14;
    }
    iVar2 = iVar4;
    fVar14 = fVar8;
    fVar11 = fVar10;
  } while (iVar3 != 0x93);
  *param_1 = iVar4;
  param_1[1] = iVar6;
  return;
}


// =========================================================================
// Function: thunk_RDeKBXYTRHPwNtMfqHrzuNStrAETKuKMoIe_EkeOjnsXURRXwkuZfuzsDEtgtidKIsVnDmiUJeSyZAZchLp_nqDYt_bwHlwvqwsskAKMtlqbBzGFhacyZXjakNuWJjrmScgjmQPnQuqG
// Entry: 0x71e08520 | Size: 1 bytes
// =========================================================================

int thunk_RDeKBXYTRHPwNtMfqHrzuNStrAETKuKMoIe_EkeOjnsXURRXwkuZfuzsDEtgtidKIsVnDmiUJeSyZAZchLp_nqDYt_bwHlwvqwsskAKMtlqbBzGFhacyZXjakNuWJjrmScgjmQPnQuqG
              (int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint auStack_4ec [10];
  float afStack_4c4 [296];
  
  puVar3 = auStack_4ec;
  afStack_4c4[0] = 0.0;
  uVar1 = param_4;
  if ((int)param_4 < (int)param_3) {
    uVar1 = param_3;
  }
  uVar9 = 0x123;
  if ((int)uVar1 < 0x123) {
    uVar9 = uVar1;
  }
  uVar10 = uVar9 + 2;
  uVar11 = 2;
  if (2 < (int)uVar1) {
    uVar11 = uVar1;
  }
  if ((int)param_3 < (int)param_4) {
    param_4 = param_3;
  }
  uVar5 = 0x123;
  if ((int)param_4 < 0x123) {
    uVar5 = param_4;
  }
  uVar11 = uVar11 - 2;
  uVar2 = 2;
  if (2 < (int)param_4) {
    uVar2 = param_4;
  }
  uVar2 = uVar2 - 2;
  if ((int)(uVar5 + 3) < (int)uVar11) {
    if (uVar2 != 0) {
      afStack_4c4[uVar2] = 0.0;
    }
    if ((int)param_4 < 0x123) {
      afStack_4c4[uVar5 + 4] = 0.0;
    }
    if ((int)uVar2 <= (int)(uVar5 + 2)) {
      do {
        fVar13 = afStack_4c4[0];
        iVar6 = 0;
        iVar4 = 0;
        fVar14 = 0.0;
        if (uVar2 < 0x360) {
          iVar6 = param_1 + uVar2 * 4;
        }
        do {
          pfVar7 = (float *)(iVar6 + iVar4);
          pfVar8 = (float *)(param_1 + 0x600 + iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = fVar14 + *pfVar8 * *pfVar7;
        } while (iVar4 != 0x780);
        bVar12 = uVar2 != uVar5 + 2;
        afStack_4c4[0] = (float)((int)afStack_4c4[0] + 1);
        auStack_4ec[(int)fVar13] = uVar2;
        afStack_4c4[uVar2 + 1] = fVar14;
        uVar2 = uVar2 + 1;
      } while (bVar12);
    }
    if (((int)uVar1 < 3) || (afStack_4c4[uVar11] = 0.0, uVar1 < 0x123)) {
      afStack_4c4[uVar9 + 4] = 0.0;
    }
    if ((int)uVar11 <= (int)uVar10) {
      do {
        fVar13 = afStack_4c4[0];
        iVar6 = 0;
        iVar4 = 0;
        fVar14 = 0.0;
        if (uVar11 < 0x360) {
          iVar6 = param_1 + uVar11 * 4;
        }
        do {
          pfVar7 = (float *)(iVar6 + iVar4);
          pfVar8 = (float *)(param_1 + 0x600 + iVar4);
          iVar4 = iVar4 + 4;
          fVar14 = fVar14 + *pfVar8 * *pfVar7;
        } while (iVar4 != 0x780);
        bVar12 = uVar11 != uVar10;
        afStack_4c4[0] = (float)((int)afStack_4c4[0] + 1);
        auStack_4ec[(int)fVar13] = uVar11;
        afStack_4c4[uVar11 + 1] = fVar14;
        uVar11 = uVar11 + 1;
      } while (bVar12);
    }
  }
  else {
    if (uVar2 != 0) {
      afStack_4c4[uVar2] = 0.0;
    }
    if ((int)uVar1 < 0x123) {
      afStack_4c4[uVar9 + 4] = 0.0;
    }
    if ((int)uVar2 <= (int)uVar10) {
      do {
        fVar13 = afStack_4c4[0];
        iVar4 = 0;
        iVar6 = 0;
        fVar14 = 0.0;
        if (uVar2 < 0x360) {
          iVar4 = param_1 + uVar2 * 4;
        }
        do {
          pfVar7 = (float *)(iVar4 + iVar6);
          pfVar8 = (float *)(param_1 + 0x600 + iVar6);
          iVar6 = iVar6 + 4;
          fVar14 = fVar14 + *pfVar8 * *pfVar7;
        } while (iVar6 != 0x780);
        bVar12 = uVar2 != uVar10;
        afStack_4c4[0] = (float)((int)afStack_4c4[0] + 1);
        auStack_4ec[(int)fVar13] = uVar2;
        afStack_4c4[uVar2 + 1] = fVar14;
        uVar2 = uVar2 + 1;
      } while (bVar12);
    }
  }
  if (afStack_4c4[0] == 0.0) {
    uVar1 = 0;
  }
  else {
    fVar13 = -1.0;
    fVar14 = 0.0;
    uVar1 = 0;
    do {
      uVar9 = *puVar3;
      fVar15 = afStack_4c4[uVar9 + 1];
      if (0.0 < fVar15) {
        fVar16 = *(float *)(param_2 + uVar9 * 4);
        if (fVar13 * fVar16 < fVar14 * fVar15 * fVar15) {
          uVar1 = uVar9;
          fVar13 = fVar15 * fVar15;
          fVar14 = fVar16;
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != auStack_4ec + (int)afStack_4c4[0]);
    if ((uVar1 != 0) && ((int)uVar1 < 0x125)) {
      fVar14 = afStack_4c4[uVar1 + 2];
      fVar13 = afStack_4c4[uVar1];
      iVar4 = 1;
      if ((fVar13 - fVar14 <= (afStack_4c4[uVar1 + 1] - fVar14) * 0.7) &&
         (iVar4 = 0, (afStack_4c4[uVar1 + 1] - fVar13) * 0.7 < fVar14 - fVar13)) {
        iVar4 = -1;
      }
      return iVar4 + uVar1 * 2;
    }
  }
  return uVar1 << 1;
}


// =========================================================================
// Function: thunk_vnNgzwdNnJROOgYoqykdnfQzWboBWbqsNaJzLSYpKBzjfxENtmng_wdxMspELIcCxN_cQtiIRMDnYPmgsmKXSFkcmACUqpUIWLNPti_yzqTAPhibDsRywfNHchYNI_iNTF_lxzeX
// Entry: 0x71e08530 | Size: 1 bytes
// =========================================================================

void thunk_vnNgzwdNnJROOgYoqykdnfQzWboBWbqsNaJzLSYpKBzjfxENtmng_wdxMspELIcCxN_cQtiIRMDnYPmgsmKXSFkcmACUqpUIWLNPti_yzqTAPhibDsRywfNHchYNI_iNTF_lxzeX
               (int *param_1,int param_2,int param_3,int param_4,int param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
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
  int iStack_88;
  
  iVar2 = 0x17f;
  if (param_4 / 2 < 0x17f) {
    iVar2 = param_4 / 2;
  }
  uVar1 = 0x180 - iVar2;
  iVar11 = 0;
  fVar26 = *(float *)(param_3 + 0x600);
  if (uVar1 < 0x360) {
    iVar11 = param_2 + uVar1 * 4;
  }
  fVar25 = 0.0;
  iVar10 = param_2 + 0x600;
  iVar13 = 0;
  do {
    pfVar8 = (float *)(iVar11 + iVar13);
    pfVar9 = (float *)(iVar10 + iVar13);
    iVar13 = iVar13 + 4;
    fVar25 = fVar25 + *pfVar9 * *pfVar8;
  } while (iVar13 != 0x780);
  fVar27 = *(float *)(param_3 + uVar1 * 4);
  fVar28 = fVar25 / SQRT(fVar26 * fVar27 + 1.0);
  fVar24 = fVar28;
  iStack_88 = iVar2;
  if (0x75 < param_4) {
    fVar23 = 0.0;
    uVar1 = iVar2 * 2;
    uVar3 = 2;
    uVar7 = 2;
    if (2 < uVar1 / 0x3b) {
      uVar7 = uVar1 / 0x3b;
    }
    do {
      iVar11 = FUN_71ba0484(uVar3 + uVar1,uVar3 << 1);
      iVar13 = uVar3 - 2;
      iVar15 = 0;
      iVar14 = 0;
      uVar12 = 0x180 - iVar11;
      if (uVar12 < 0x360) {
        iVar15 = param_2 + uVar12 * 4;
      }
      iVar4 = FUN_71ba0440((&DAT_70098540)[iVar13] * uVar1 + uVar3,uVar3 << 1);
      fVar17 = fVar23;
      do {
        pfVar8 = (float *)(iVar15 + iVar14);
        pfVar9 = (float *)(iVar10 + iVar14);
        iVar14 = iVar14 + 4;
        fVar17 = fVar17 + *pfVar9 * *pfVar8;
      } while (iVar14 != 0x780);
      iVar14 = 0;
      if (iVar13 == 0 && 0x180 < iVar4) {
        iVar4 = iVar2;
      }
      iVar15 = 0;
      uVar5 = 0x180 - iVar4;
      fVar19 = fVar23;
      if (uVar5 < 0x360) {
        iVar14 = param_2 + uVar5 * 4;
      }
      do {
        pfVar8 = (float *)(iVar14 + iVar15);
        pfVar9 = (float *)(iVar10 + iVar15);
        iVar15 = iVar15 + 4;
        fVar19 = fVar19 + *pfVar9 * *pfVar8;
      } while (iVar15 != 0x780);
      uVar6 = iVar11 - param_5 / 2;
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
      }
      fVar22 = param_6;
      if (((1 < uVar6) && (fVar22 = fVar23, uVar6 == 2)) && ((int)(&DAT_70098578)[iVar13] < iVar2))
      {
        fVar22 = param_6 * 0.5;
      }
      fVar20 = (*(float *)(param_3 + uVar12 * 4) + *(float *)(param_3 + uVar5 * 4)) * 0.5;
      fVar19 = (fVar17 + fVar19) * 0.5;
      fVar18 = fVar19 / SQRT(fVar26 * fVar20 + 1.0);
      fVar21 = fVar28 * 0.85 - fVar22;
      fVar22 = fVar28 * 0.7 - fVar22;
      fVar17 = 0.3;
      if (0.3 < fVar22) {
        fVar17 = fVar22;
      }
      fVar22 = 0.4;
      if (0.4 < fVar21) {
        fVar22 = fVar21;
      }
      if (iVar11 < 0x5a) {
        fVar17 = fVar22;
      }
      if (fVar17 < fVar18) {
        fVar27 = fVar20;
        fVar25 = fVar19;
        fVar24 = fVar18;
        iStack_88 = iVar11;
      }
      bVar16 = uVar3 != uVar7;
      uVar3 = uVar3 + 1;
    } while (bVar16);
  }
  fVar23 = 1.0;
  fVar28 = 0.0;
  fVar26 = fVar28;
  if (0.0 < fVar25) {
    fVar26 = fVar25;
  }
  if (fVar26 < fVar27) {
    fVar23 = fVar26 / (fVar27 + 1.0);
  }
  iVar2 = 0;
  if (iStack_88 - 1U < 0x17f) {
    iVar2 = 0;
    do {
      pfVar8 = (float *)(param_2 + (0x181 - iStack_88) * 4 + iVar2);
      pfVar9 = (float *)(iVar10 + iVar2);
      iVar2 = iVar2 + 4;
      fVar28 = fVar28 + *pfVar9 * *pfVar8;
    } while (iVar2 != 0x780);
    fVar26 = 0.0;
    iVar2 = 0;
    do {
      pfVar8 = (float *)(param_2 + (0x180 - iStack_88) * 4 + iVar2);
      pfVar9 = (float *)(iVar10 + iVar2);
      iVar2 = iVar2 + 4;
      fVar26 = fVar26 + *pfVar9 * *pfVar8;
    } while (iVar2 != 0x780);
    iVar2 = 0;
    fVar25 = 0.0;
    if (0x17fU - iStack_88 < 0x360) {
      iVar2 = param_2 + (0x17fU - iStack_88) * 4;
    }
    iVar11 = 0;
    do {
      pfVar8 = (float *)(iVar2 + iVar11);
      pfVar9 = (float *)(iVar10 + iVar11);
      iVar11 = iVar11 + 4;
      fVar25 = fVar25 + *pfVar9 * *pfVar8;
    } while (iVar11 != 0x780);
    iVar2 = 1;
    if ((fVar25 - fVar28 <= (fVar26 - fVar28) * 0.7) &&
       (iVar2 = 0, (fVar26 - fVar25) * 0.7 < fVar28 - fVar25)) {
      iVar2 = -1;
    }
  }
  iVar2 = iVar2 + iStack_88 * 2;
  if (fVar23 < fVar24) {
    fVar24 = fVar23;
  }
  if (iVar2 < 0x3d) {
    iVar2 = 0x3c;
  }
  *param_1 = iVar2;
  param_1[1] = (int)fVar24;
  return;
}


// =========================================================================
// Function: thunk_vbfLMjAvORfuHoZMTRFkBYRtnTclkmksD
// Entry: 0x71e08540 | Size: 1 bytes
// =========================================================================

void thunk_vbfLMjAvORfuHoZMTRFkBYRtnTclkmksD(int param_1)

{
  thunk_VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF(param_1 + 0x8c);
  return;
}


// =========================================================================
// Function: thunk_kUtjzMaCJHLcHgHvkQuWC_kpSfROzZLRBBTdAgYZfIqvDHw_ySfTYNuGTugobLUBLJewmuNNHUt
// Entry: 0x71e08550 | Size: 1 bytes
// =========================================================================

undefined4
thunk_kUtjzMaCJHLcHgHvkQuWC_kpSfROzZLRBBTdAgYZfIqvDHw_ySfTYNuGTugobLUBLJewmuNNHUt
          (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    thunk_VPhdBLqiZukfrHURWaDmQGimnDfWBesdwhRGwAlQCQoZGfF(param_1 + 0x8c);
    return 0;
  }
  thunk_IeUPdUWpGgjoOuRFbXZPtnDcrUvRMMmZAkXOCxwQIVGCrLFUmUoaeEnswZIGxcLRvGFRtbwMeGAMbWlXYlB
            (param_1,param_2,0x2a);
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = param_1 + 0x2c;
  }
  thunk_svKOqEAWvFPyfvqm_iVgpeYCocczhrwNMWYPoAxoJHXQlq_XbpubAUJCAaSVwFdoXkcqODfPAoQzqgdZBVH
            (param_1 + 0x8c,iVar1);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar1 = param_1 + 0xbc;
  }
  thunk_IeUPdUWpGgjoOuRFbXZPtnDcrUvRMMmZAkXOCxwQIVGCrLFUmUoaeEnswZIGxcLRvGFRtbwMeGAMbWlXYlB
            (param_1 + 0x11c,iVar1);
  return *(undefined4 *)(param_1 + 0x148);
}


// =========================================================================
// Function: thunk_oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU
// Entry: 0x71e08560 | Size: 1 bytes
// =========================================================================

int thunk_oNurGSIVHe_HX_EIiNvMenwGd_IvLDRcyTmWnaUssIdJFXEPStecldXU(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  
  thunk_SMErqdM_FPvyZcrvjwpTfX_BnYdFKVNvnCWGOLTnCrEUn_MdNbXRcyzMLJLokxfLAMmJXsKyPrtXXzoiVjhxMOZpiqRLkoApPHYGCKPpVfALwLLa_UgWd_cXSpbahfzwVHahhYeNIEsfMdqPXPIkuJXg_JNNbldrzSBpsXBUxCLmiKVJchAowe
            (param_1,0x2a,0x18,&DAT_700990d0,0x18,&DAT_70098ce0,0x3f0,0,param_2,&DAT_7006621e,3);
  thunk_RkXUiEJSWWtfuxfotgSuWbaVVTrDouFtaqGveKznFSwtFCDBvRjyNjwVEWhRPGQUdKeUbvWQDU_qjFRxzkCxmwAIBzJjUTxwdJDFeUvqmeYsUyFlPQlVZbXPrGvqSzelndNh_zAfUPDJuexXIHmBETVunZHnzGUZ
            (param_1 + 0x8c,0x18,0x18,&DAT_70099e68,0x48,&DAT_700990e8,0x6c0,&DAT_700997a8,0x6c0,
             param_2,&DAT_70067c61,4);
  uVar1 = thunk_xrBzPWrsXEPkdmALmxzzpHqJrlIUUIZaeBSD();
  uStack_1c = (undefined2)uVar1;
  uStack_1a = (undefined1)((uint)uVar1 >> 0x10);
  thunk_SMErqdM_FPvyZcrvjwpTfX_BnYdFKVNvnCWGOLTnCrEUn_MdNbXRcyzMLJLokxfLAMmJXsKyPrtXXzoiVjhxMOZpiqRLkoApPHYGCKPpVfALwLLa_UgWd_cXSpbahfzwVHahhYeNIEsfMdqPXPIkuJXg_JNNbldrzSBpsXBUxCLmiKVJchAowe
            (param_1 + 0x11c,0x18,1,&DAT_70099ec8,1,&DAT_70099eb0,0x18,1,&uStack_1c,&DAT_7006d41e,3)
  ;
  return param_1;
}


// =========================================================================
// Function: thunk_lvefKwWnYDOnnozzScaitZzjRLyAY
// Entry: 0x71e08570 | Size: 1 bytes
// =========================================================================

void thunk_lvefKwWnYDOnnozzScaitZzjRLyAY(int param_1)

{
  thunk_MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg(param_1 + 0x11c);
  thunk_woeuiNivzmwPovMBoYYNOjQySvgOwKOAScxDpkgwrol(param_1 + 0x8c);
  thunk_MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg(param_1);
  return;
}


// =========================================================================
// Function: thunk_IeUPdUWpGgjoOuRFbXZPtnDcrUvRMMmZAkXOCxwQIVGCrLFUmUoaeEnswZIGxcLRvGFRtbwMeGAMbWlXYlB
// Entry: 0x71e08580 | Size: 1 bytes
// =========================================================================

void thunk_IeUPdUWpGgjoOuRFbXZPtnDcrUvRMMmZAkXOCxwQIVGCrLFUmUoaeEnswZIGxcLRvGFRtbwMeGAMbWlXYlB
               (uint *param_1,float *param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = param_1[5];
  uVar10 = 0;
  if (param_1[6] != uVar1) {
    uVar10 = uVar1;
  }
  if (0 < (int)param_1[1]) {
    if (param_3 == 0) {
      iVar8 = 0;
      iVar9 = 0;
      do {
        uVar4 = (*(code *)param_1[10])(param_1[9],*(float *)(param_1[2] + iVar8) + 0.0);
        *(undefined4 *)((int)param_1 + iVar8 + 0x2c) = uVar4;
        iVar8 = iVar8 + 4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_1[1]);
    }
    else {
      iVar8 = 0;
      uVar1 = (int)(param_1[6] - uVar1) >> 2;
      do {
        uVar5 = *param_1;
        pfVar2 = (float *)0x0;
        uVar7 = uVar5 * iVar8;
        if (uVar7 < uVar1) {
          uVar3 = uVar1 - uVar7;
          if (uVar3 < uVar5) {
            uVar5 = uVar3;
          }
          pfVar2 = (float *)0x0;
          if (uVar5 != 0) {
            pfVar2 = (float *)(uVar10 + uVar7 * 4);
          }
        }
        pfVar6 = param_2;
        fVar11 = 0.0;
        do {
          fVar13 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          fVar12 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          fVar11 = fVar11 + fVar13 * fVar12;
        } while (pfVar6 != param_2 + param_3);
        uVar5 = (*(code *)param_1[10])(param_1[9],*(float *)(param_1[2] + iVar8 * 4) + fVar11);
        param_1[iVar8 + 0xb] = uVar5;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_1[1]);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_SMErqdM_FPvyZcrvjwpTfX_BnYdFKVNvnCWGOLTnCrEUn_MdNbXRcyzMLJLokxfLAMmJXsKyPrtXXzoiVjhxMOZpiqRLkoApPHYGCKPpVfALwLLa_UgWd_cXSpbahfzwVHahhYeNIEsfMdqPXPIkuJXg_JNNbldrzSBpsXBUxCLmiKVJchAowe
// Entry: 0x71e08590 | Size: 1 bytes
// =========================================================================

uint * thunk_SMErqdM_FPvyZcrvjwpTfX_BnYdFKVNvnCWGOLTnCrEUn_MdNbXRcyzMLJLokxfLAMmJXsKyPrtXXzoiVjhxMOZpiqRLkoApPHYGCKPpVfALwLLa_UgWd_cXSpbahfzwVHahhYeNIEsfMdqPXPIkuJXg_JNNbldrzSBpsXBUxCLmiKVJchAowe
                 (uint *param_1,uint param_2,uint param_3,char *param_4,uint param_5,char *param_6,
                 uint param_7,int param_8,undefined2 *param_9)

{
  undefined2 uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int extraout_r1;
  code *pcVar6;
  char *pcVar7;
  float *pfVar8;
  uint uVar9;
  uint *puVar10;
  uint in_fpscr;
  float fVar11;
  uint *puStack_2c;
  uint *puStack_28;
  
  puVar10 = param_1 + 2;
  *puVar10 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_5 != 0) {
    if (0x3fffffff < param_5) {
      FUN_71a0103c(puVar10);
      iVar4 = extraout_r1;
      param_7 = param_2;
      goto LAB_71b03a20;
    }
    pfVar2 = (float *)thunk_MwhHq(param_5 * 4);
    param_1[4] = (uint)(pfVar2 + param_5);
    param_1[2] = (uint)pfVar2;
    imp___aeabi_memclr4(pfVar2,param_5 * 4);
    param_1[3] = (uint)(pfVar2 + param_5);
    do {
      param_5 = param_5 - 1;
      fVar11 = (float)VectorSignedToFloat((int)*param_4,(byte)(in_fpscr >> 0x16) & 3);
      *pfVar2 = fVar11 * 0.00390625;
      pfVar2 = pfVar2 + 1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  if (param_3 == 1) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (param_7 != 0) {
      if (0x3fffffff < param_7) {
        FUN_71a0103c(param_1 + 5);
LAB_71b03a64:
        FUN_71a0103c(puStack_2c);
        if (*puStack_28 != 0) {
          param_1[3] = *puStack_28;
          thunk_qNQrlu();
        }
                    /* WARNING: Subroutine does not return */
        thunk_NAUpeWJSovvMoxKm_();
      }
      pfVar2 = (float *)thunk_MwhHq(param_7 * 4);
      param_1[7] = (uint)(pfVar2 + param_7);
      param_1[5] = (uint)pfVar2;
      imp___aeabi_memclr4(pfVar2,param_7 * 4);
      param_1[6] = (uint)(pfVar2 + param_7);
      do {
        param_7 = param_7 - 1;
        fVar11 = (float)VectorSignedToFloat((int)*param_6,(byte)(in_fpscr >> 0x16) & 3);
        *pfVar2 = fVar11 * 0.00390625;
        pfVar2 = pfVar2 + 1;
        param_6 = param_6 + 1;
      } while (param_7 != 0);
    }
  }
  else {
    uVar3 = FUN_71ba0440(param_7,param_3);
    iVar4 = param_7 - uVar3 * param_3;
    if (iVar4 != 0) {
LAB_71b03a20:
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_rtc_ba_7006a6d4,0x1e2,s_a___b____0_70065704,
                 &DAT_700984d0,iVar4,0,param_7,s_is_not_evenly_divisible_by_7006252f,param_3);
    }
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (param_7 != 0) {
      puStack_2c = param_1 + 5;
      puStack_28 = puVar10;
      if (0x3fffffff < param_7) goto LAB_71b03a64;
      pfVar2 = (float *)thunk_MwhHq(param_7 * 4);
      param_1[7] = (uint)(pfVar2 + param_7);
      param_1[5] = (uint)pfVar2;
      imp___aeabi_memclr4(pfVar2,param_7 * 4);
      uVar9 = param_3;
      if (0 < (int)param_3) {
        uVar9 = uVar3;
      }
      param_1[6] = (uint)(pfVar2 + param_7);
      if (0 < (int)uVar9) {
        uVar5 = 0;
        uVar9 = uVar3;
        pfVar8 = pfVar2;
        pcVar7 = param_6;
        do {
          do {
            uVar9 = uVar9 - 1;
            fVar11 = (float)VectorSignedToFloat((int)*param_6,(byte)(in_fpscr >> 0x16) & 3);
            *pfVar2 = fVar11 * 0.00390625;
            pfVar2 = pfVar2 + 1;
            param_6 = param_6 + param_3;
          } while (uVar9 != 0);
          uVar5 = uVar5 + 1;
          pfVar2 = pfVar8 + uVar3;
          param_6 = pcVar7 + 1;
          uVar9 = uVar3;
          pfVar8 = pfVar2;
          pcVar7 = param_6;
        } while (uVar5 != param_3);
      }
    }
  }
  uVar1 = *param_9;
  *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)(param_9 + 1);
  *(undefined2 *)(param_1 + 8) = uVar1;
  pcVar6 = VNUOZOwTlcVeuIVmkdptbnGdmPHrEAUAdx;
  if (param_8 == 0) {
    pcVar6 = JSRYycTYpgndMLSHXAmxDUfKpsqQWVLLr;
  }
  param_1[9] = (uint)pcVar6;
  param_1[10] = (uint)riVxXbGWTOaAjiBVsmUwubUpdvLFrcsBlEfRCQzMPAfSDrsmdZWWXXtDACdGEaK;
  return param_1;
}


// =========================================================================
// Function: thunk_MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg
// Entry: 0x71e085a0 | Size: 1 bytes
// =========================================================================

int thunk_MeebRuzBZbTjx_CMquZNNfNjKpOGybQfUjhwpUaY_Kg(int param_1)

{
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


