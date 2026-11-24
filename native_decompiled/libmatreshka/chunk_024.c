// =========================================================================
// Function: lotlzHpbCoGdTbYXHkWu_yRnjxBAIHMWgPoW
// Entry: 0x71aa0980 | Size: 232 bytes
// =========================================================================

void lotlzHpbCoGdTbYXHkWu_yRnjxBAIHMWgPoW
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = (double)CONCAT44(param_4,param_3);
  if (2.220446049250313e-16 <= ABS(*(double *)(param_1 + 8) - dVar9)) {
    *(double *)(param_1 + 8) = dVar9;
    if (dVar9 <= 1.0) {
      dVar9 = 0.9;
    }
    else {
      dVar9 = (1.0 / dVar9) * 0.9;
    }
    iVar6 = 0;
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x34);
    do {
      iVar5 = 0;
      do {
        fVar7 = *(float *)(iVar4 + iVar5);
        dVar10 = dVar9;
        if (*(float *)(iVar3 + iVar5) != 0.0) {
          dVar8 = (double)*(float *)(iVar3 + iVar5);
          dVar10 = dVar9 * dVar8;
          dVar10 = (double)imp_sin(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20));
          dVar10 = dVar10 / dVar8;
        }
        pfVar1 = (float *)(iVar2 + iVar5);
        iVar5 = iVar5 + 4;
        *pfVar1 = (float)(dVar10 * (double)fVar7);
      } while (iVar5 != 0x80);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x80;
      iVar3 = iVar3 + 0x80;
      iVar4 = iVar4 + 0x80;
    } while (iVar6 != 0x21);
  }
  return;
}


// =========================================================================
// Function: bczJTiwxYyWBoMBboyhCyiitmSvPJqWEHfKkGx
// Entry: 0x71aa0a78 | Size: 392 bytes
// =========================================================================

void bczJTiwxYyWBoMBboyhCyiitmSvPJqWEHfKkGx(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if ((param_2 == 0) || (*(char *)(param_1 + 0x18) != '\0')) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))
              (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  iVar6 = *(int *)(param_1 + 0x2c);
  dVar7 = *(double *)(param_1 + 8);
  do {
    dVar8 = *(double *)(param_1 + 0x10);
    dVar9 = (double)VectorUnsignedToFloat
                              (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (dVar9 - dVar8) / dVar7;
    dVar10 = (double)imp_ceil(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20));
    if (0 < (int)(longlong)dVar10) {
      iVar4 = (int)(longlong)dVar10 + 1;
      do {
        dVar9 = (double)VectorSignedToFloat((int)(longlong)dVar8,(byte)(in_fpscr >> 0x16) & 3);
        dVar9 = (dVar8 - dVar9) * 32.0;
        iVar2 = (int)(longlong)dVar9;
        dVar10 = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
        iVar2 = iVar6 + iVar2 * 0x80;
        uVar1 = (**(code **)(param_1 + 0x3c))
                          (*(int *)(param_1 + 0x44) + (int)(longlong)dVar8 * 4,iVar2,iVar2 + 0x80,
                           *(code **)(param_1 + 0x3c),dVar9 - dVar10);
        dVar8 = *(double *)(param_1 + 0x10);
        param_2 = param_2 + -1;
        *param_3 = uVar1;
        dVar8 = dVar7 + dVar8;
        *(double *)(param_1 + 0x10) = dVar8;
        if (param_2 == 0) {
          return;
        }
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 1;
      } while (1 < iVar4);
      dVar9 = (double)VectorUnsignedToFloat
                                (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
    }
    *(double *)(param_1 + 0x10) = dVar8 - dVar9;
    imp___aeabi_memcpy4(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c),0x80);
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == *(int *)(param_1 + 0x48)) {
      iVar2 = *(int *)(param_1 + 0x38) + 0x80;
      *(int *)(param_1 + 0x40) = iVar2;
      iVar3 = iVar2 + *(int *)(param_1 + 0x20) * 4;
      iVar5 = iVar3 + -0x40;
      *(int *)(param_1 + 0x4c) = iVar3 + -0x80;
      *(int *)(param_1 + 0x50) = iVar5;
      *(int *)(param_1 + 0x24) = iVar5 - iVar4 >> 2;
      iVar4 = iVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))
              (*(int **)(param_1 + 0x1c),*(int *)(param_1 + 0x20),iVar4);
  } while( true );
}


// =========================================================================
// Function: HTFydJHjHyDvHycBJlOoyuMHFr_OIAyGEK_lch
// Entry: 0x71aa0c08 | Size: 28 bytes
// =========================================================================

int HTFydJHjHyDvHycBJlOoyuMHFr_OIAyGEK_lch(int param_1)

{
  uint in_fpscr;
  double dVar1;
  
  dVar1 = (double)VectorUnsignedToFloat
                            (*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
  dVar1 = dVar1 / *(double *)(param_1 + 8);
  return (uint)(0.0 < dVar1) * (int)(longlong)dVar1;
}


// =========================================================================
// Function: ovkdGMiOpkhTOp_ttgxcNBezbMXF
// Entry: 0x71aa10e4 | Size: 20 bytes
// =========================================================================

uint ovkdGMiOpkhTOp_ttgxcNBezbMXF(int param_1,int param_2)

{
  return (param_1 + param_2) - 1U & -param_2;
}


// =========================================================================
// Function: aULaPgSQSFiTxYUQEmDCHgETLXaB
// Entry: 0x71aa10f8 | Size: 28 bytes
// =========================================================================

bool aULaPgSQSFiTxYUQEmDCHgETLXaB(uint param_1)

{
  return param_1 != 0 && (param_1 & param_1 - 1) == 0;
}


// =========================================================================
// Function: WLjCWRQtCHcxn_iN_wRFXExIKGDEnw
// Entry: 0x71aa1114 | Size: 52 bytes
// =========================================================================

uint WLjCWRQtCHcxn_iN_wRFXExIKGDEnw(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_2 & param_2 - 1) == 0) {
    uVar2 = (param_2 - 1) + param_1 & -param_2;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


// =========================================================================
// Function: vrmXWwjvsGtAMlZLrGlA_jdSXiHJ
// Entry: 0x71aa1148 | Size: 216 bytes
// =========================================================================

uint vrmXWwjvsGtAMlZLrGlA_jdSXiHJ(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != 0 && param_2 != 0) &&
     (uVar2 = param_2 - (param_2 >> 1 & 0x55555555),
     uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333),
     (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)) {
    iVar1 = imp_malloc(param_1 + param_2 + 3);
    if (iVar1 != 0) {
      uVar2 = param_2 + iVar1 + 3 & -param_2;
      *(int *)(uVar2 - 4) = iVar1;
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_rtc_ba_7006e9a9,0x42,s_memory_pointer_7006424d,
               &DAT_70095f81,s_Couldn_t_allocate_memory_in_Alig_70067212);
  }
  return 0;
}


// =========================================================================
// Function: vtXePMhDKcPibetdCiSSToSDnY
// Entry: 0x71aa1230 | Size: 16 bytes
// =========================================================================

void vtXePMhDKcPibetdCiSSToSDnY(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  imp_free(*(undefined4 *)(param_1 + -4));
  return;
}


// =========================================================================
// Function: iCPwMWrrrkzbjiQgSsmcHefwEFOSxaSrwwzfqc
// Entry: 0x71aa131c | Size: 1740 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void iCPwMWrrrkzbjiQgSsmcHefwEFOSxaSrwwzfqc
               (undefined4 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  *param_1 = 0;
  if (param_4 < param_2) {
    if (param_3 == param_5) {
      puVar2 = (undefined4 *)thunk_MwhHq(0x14);
      puVar2[3] = param_4;
      puVar2[4] = param_3;
      *puVar2 = &DAT_70b132a8;
      puVar2[1] = param_2;
      puVar2[2] = param_3;
      if (param_2 != 1 && param_4 != 1) {
                    /* WARNING: Subroutine does not return */
        thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                  (s_____webrtc_apm_src_webrtc_common_70068283,0xd3,
                   s_dst_channels____src_channels____d_7006b4aa,&DAT_7009602d);
      }
      *param_1 = puVar2;
      *puVar2 = &DAT_70b132c4;
      return;
    }
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    puVar2 = (undefined4 *)thunk_MwhHq(0x14);
    puVar2[3] = param_4;
    puVar2[4] = param_3;
    *puVar2 = &DAT_70b132a8;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
    if (param_2 != 1 && param_4 != 1) {
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_common_70068283,0xd3,
                 s_dst_channels____src_channels____d_7006b4aa,&DAT_7009602d);
    }
    *puVar2 = &DAT_70b132c4;
    piStack_30 = (int *)thunk_MwhHq(4);
    piStack_2c = piStack_30 + 1;
    *piStack_30 = (int)puVar2;
    piStack_28 = piStack_2c;
    iVar3 = thunk_MwhHq(0x20);
    thunk_tDqKUiNSXKwcKIVhYFaIngJzNltkJd_GCTqU(iVar3,param_4,param_3,param_4,param_5);
    piVar7 = piStack_30;
    if (piStack_2c < piStack_28) {
      piVar6 = piStack_2c + 1;
      *piStack_2c = iVar3;
    }
    else {
      iVar9 = (int)piStack_2c - (int)piStack_30;
      iVar10 = iVar9 >> 2;
      uVar8 = iVar10 + 1;
      if (0x3fffffff < uVar8) {
        FUN_71aa3da8(&piStack_30);
LAB_71aa19cc:
                    /* WARNING: Subroutine does not return */
        FUN_719fe2ec();
      }
      uVar1 = (int)piStack_28 - (int)piStack_30 >> 1;
      if (uVar8 < uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffb < (uint)((int)piStack_28 - (int)piStack_30)) {
        uVar8 = 0x3fffffff;
      }
      if (uVar8 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        if (0x3fffffff < uVar8) goto LAB_71aa19cc;
        piVar4 = (int *)thunk_MwhHq(uVar8 << 2);
      }
      piVar4[iVar10] = iVar3;
      imp___aeabi_memcpy4(piVar4,piVar7,iVar9);
      piStack_28 = piVar4 + uVar8;
      piVar6 = piVar4 + iVar10 + 1;
      piStack_30 = piVar4;
      if (piVar7 != (int *)0x0) {
        thunk_qNQrlu(piVar7);
      }
    }
    piStack_2c = piVar6;
    uVar5 = thunk_MwhHq(0x2c);
    piStack_34 = piStack_28;
    piStack_3c = piStack_30;
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    piStack_38 = piVar6;
    thunk_yEDfcCkyPiUfiujcJttQkeN_NRaGEkMSQaFIMvEnWelCblqOPDglSpZvsWVIhIQFDpbFQTebVAtcbvGQJME_KOxTavjaSLFMrGoGPjlonWiXddOtibWPDQfdzLzvaVgvVNFuRQnHHmDf
              (uVar5,&piStack_3c);
    piVar4 = piStack_3c;
    *param_1 = uVar5;
    piVar7 = piStack_38;
    if (piStack_3c != (int *)0x0) {
      while (piVar7 != piVar4) {
        piVar7 = piVar7 + -1;
        piVar6 = (int *)*piVar7;
        *piVar7 = 0;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
      }
      piStack_38 = piVar4;
      thunk_qNQrlu(piStack_3c);
    }
    piVar4 = piStack_30;
    piVar7 = piStack_2c;
    if (piStack_30 == (int *)0x0) {
      return;
    }
    while (piVar7 != piVar4) {
      piVar7 = piVar7 + -1;
      piVar6 = (int *)*piVar7;
      *piVar7 = 0;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
    }
    goto LAB_71aa1920;
  }
  if (param_4 <= param_2) {
    if (param_3 == param_5) {
      puVar2 = (undefined4 *)thunk_MwhHq(0x14);
      puVar2[3] = param_4;
      puVar2[4] = param_3;
      *puVar2 = &DAT_70b13344;
      puVar2[1] = param_2;
      puVar2[2] = param_3;
      *param_1 = puVar2;
      return;
    }
    uVar5 = thunk_MwhHq(0x20);
    thunk_tDqKUiNSXKwcKIVhYFaIngJzNltkJd_GCTqU(uVar5,param_2,param_3,param_4,param_5);
    *param_1 = uVar5;
    return;
  }
  if (param_3 == param_5) {
    puVar2 = (undefined4 *)thunk_MwhHq(0x14);
    puVar2[3] = param_4;
    puVar2[4] = param_3;
    *puVar2 = &DAT_70b132a8;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
    if (param_2 != 1 && param_4 != 1) {
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_common_70068283,0xd3,
                 s_dst_channels____src_channels____d_7006b4aa,&DAT_7009602d);
    }
    *param_1 = puVar2;
    *puVar2 = &DAT_70b13324;
    return;
  }
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  iVar3 = thunk_MwhHq(0x20);
  thunk_tDqKUiNSXKwcKIVhYFaIngJzNltkJd_GCTqU(iVar3,param_2,param_3,param_2,param_5);
  piVar7 = piStack_30;
  if (piStack_2c < piStack_28) {
    *piStack_2c = iVar3;
    piVar6 = piStack_2c;
LAB_71aa1748:
    piVar4 = piVar6 + 1;
    piStack_2c = piVar4;
    puVar2 = (undefined4 *)thunk_MwhHq(0x14);
    piVar7 = piStack_30;
    puVar2[3] = param_4;
    puVar2[4] = param_5;
    *puVar2 = &DAT_70b132a8;
    puVar2[1] = param_2;
    puVar2[2] = param_5;
    if (param_2 != 1 && param_4 != 1) {
                    /* WARNING: Subroutine does not return */
      thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
                (s_____webrtc_apm_src_webrtc_common_70068283,0xd3,
                 s_dst_channels____src_channels____d_7006b4aa,&DAT_7009602d);
    }
    *puVar2 = &DAT_70b13324;
    if (piVar4 < piStack_28) {
      piVar6 = piVar6 + 2;
      *piVar4 = (int)puVar2;
    }
    else {
      iVar10 = (int)piVar4 - (int)piStack_30;
      iVar3 = iVar10 >> 2;
      uVar8 = iVar3 + 1;
      if (0x3fffffff < uVar8) goto LAB_71aa19d8;
      uVar1 = (int)piStack_28 - (int)piStack_30 >> 1;
      if (uVar8 < uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffb < (uint)((int)piStack_28 - (int)piStack_30)) {
        uVar8 = 0x3fffffff;
      }
      if (uVar8 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        if (0x3fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        piVar4 = (int *)thunk_MwhHq(uVar8 << 2);
      }
      piVar4[iVar3] = (int)puVar2;
      imp___aeabi_memcpy4(piVar4,piVar7,iVar10);
      piStack_28 = piVar4 + uVar8;
      piVar6 = piVar4 + iVar3 + 1;
      piStack_30 = piVar4;
      if (piVar7 != (int *)0x0) {
        thunk_qNQrlu(piVar7);
      }
    }
    piStack_2c = piVar6;
    uVar5 = thunk_MwhHq(0x2c);
    piStack_40 = piStack_28;
    piStack_48 = piStack_30;
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    piStack_44 = piVar6;
    thunk_yEDfcCkyPiUfiujcJttQkeN_NRaGEkMSQaFIMvEnWelCblqOPDglSpZvsWVIhIQFDpbFQTebVAtcbvGQJME_KOxTavjaSLFMrGoGPjlonWiXddOtibWPDQfdzLzvaVgvVNFuRQnHHmDf
              (uVar5,&piStack_48);
    piVar4 = piStack_48;
    *param_1 = uVar5;
    piVar7 = piStack_44;
    if (piStack_48 != (int *)0x0) {
      while (piVar7 != piVar4) {
        piVar7 = piVar7 + -1;
        piVar6 = (int *)*piVar7;
        *piVar7 = 0;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))();
        }
      }
      piStack_44 = piVar4;
      thunk_qNQrlu(piStack_48);
    }
    piVar4 = piStack_30;
    piVar7 = piStack_2c;
    if (piStack_30 == (int *)0x0) {
      return;
    }
    while (piVar7 != piVar4) {
      piVar7 = piVar7 + -1;
      piVar6 = (int *)*piVar7;
      *piVar7 = 0;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
    }
LAB_71aa1920:
    piStack_2c = piVar4;
    thunk_qNQrlu(piStack_30);
    return;
  }
  iVar9 = (int)piStack_2c - (int)piStack_30;
  iVar10 = iVar9 >> 2;
  uVar8 = iVar10 + 1;
  if (uVar8 < 0x40000000) {
    uVar1 = (int)piStack_28 - (int)piStack_30 >> 1;
    if (uVar8 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffb < (uint)((int)piStack_28 - (int)piStack_30)) {
      uVar8 = 0x3fffffff;
    }
    if (uVar8 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      if (0x3fffffff < uVar8) goto LAB_71aa19e0;
      piVar4 = (int *)thunk_MwhHq(uVar8 << 2);
    }
    piVar6 = piVar4 + iVar10;
    *piVar6 = iVar3;
    imp___aeabi_memcpy4(piVar4,piVar7,iVar9);
    piStack_28 = piVar4 + uVar8;
    piStack_30 = piVar4;
    if (piVar7 != (int *)0x0) {
      thunk_qNQrlu(piVar7);
    }
    goto LAB_71aa1748;
  }
  FUN_71aa3da8(&piStack_30);
LAB_71aa19d8:
  FUN_71aa3da8(&piStack_30);
LAB_71aa19e0:
                    /* WARNING: Subroutine does not return */
  FUN_719fe2ec();
}


// =========================================================================
// Function: nIQauHqvgDqeDEOcVDIqJPavYuXaaQ
// Entry: 0x71aa1b38 | Size: 32 bytes
// =========================================================================

void nIQauHqvgDqeDEOcVDIqJPavYuXaaQ(undefined4 *param_1)

{
  *param_1 = &DAT_70b132a8;
  param_1[1] = 0;
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}


// =========================================================================
// Function: SCExxOWgw__YGTUpJWKHmXzJVZKnoiZVh
// Entry: 0x71aa1b5c | Size: 88 bytes
// =========================================================================

void SCExxOWgw__YGTUpJWKHmXzJVZKnoiZVh
               (undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *param_1 = &DAT_70b132a8;
  if (param_2 == 1 || param_4 == param_2) {
    return;
  }
  if (param_4 == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70068283,0xd3,
             s_dst_channels____src_channels____d_7006b4aa,&DAT_7009602d);
}


// =========================================================================
// Function: rfNfezVLZfzYcFcYHDcdtrJtQUKMqQSIuFfvPEKQJd
// Entry: 0x71aa1bc4 | Size: 128 bytes
// =========================================================================

void rfNfezVLZfzYcFcYHDcdtrJtQUKMqQSIuFfvPEKQJd(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) * *(int *)(param_1 + 4) - param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd7,
               s_src_size____src_channels_____src_7006425c,&DAT_70095f5e);
  }
  uVar1 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc);
  if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd8,
               s_dst_capacity_>__dst_channels_____7006d364,&DAT_70095f5e);
  }
  return;
}


// =========================================================================
// Function: tDqKUiNSXKwcKIVhYFaIngJzNltkJd_GCTqU
// Entry: 0x71aa2550 | Size: 452 bytes
// =========================================================================

undefined4 *
tDqKUiNSXKwcKIVhYFaIngJzNltkJd_GCTqU
          (undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  *param_1 = &DAT_70b132a8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  if ((param_2 != 1 && param_4 != param_2) && (param_4 != 1)) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd3,
               s_dst_channels____src_channels____d_7006b4aa,&DAT_7009602d);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &DAT_70b132e4;
  piVar6 = param_1 + 5;
  *piVar6 = 0;
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
      FUN_71a9f710(piVar6);
      FUN_71a9f014(piVar6);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar2 = thunk_MwhHq(param_2 << 2);
    param_1[5] = iVar2;
    param_1[6] = iVar2;
    param_1[7] = iVar2 + param_2 * 4;
    do {
      while( true ) {
        uVar3 = thunk_MwhHq(0x20);
        thunk_taVxuZCeogvn_pjw_phkongcfQugaEZqqS(uVar3,param_3,param_5);
        puVar9 = (undefined4 *)param_1[6];
        if (puVar9 < (undefined4 *)param_1[7]) break;
        iVar7 = *piVar6;
        iVar2 = (int)puVar9 - iVar7 >> 2;
        uVar10 = iVar2 + 1;
        if (0x3fffffff < uVar10) {
          FUN_71a9f710(piVar6);
LAB_71aa26fc:
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        uVar4 = (int)param_1[7] - iVar7;
        uVar1 = (int)uVar4 >> 1;
        if (uVar10 < uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffb < uVar4) {
          uVar10 = 0x3fffffff;
        }
        if (uVar10 == 0) {
          iVar5 = 0;
        }
        else {
          if (0x3fffffff < uVar10) goto LAB_71aa26fc;
          iVar5 = thunk_MwhHq(uVar10 << 2);
        }
        puVar8 = (undefined4 *)(iVar5 + iVar2 * 4);
        *puVar8 = uVar3;
        imp___aeabi_memcpy4(iVar5,iVar7,(int)puVar9 - iVar7);
        puVar8 = puVar8 + 1;
        param_1[5] = iVar5;
        param_1[6] = puVar8;
        param_1[7] = iVar5 + uVar10 * 4;
        if (iVar7 != 0) {
          thunk_qNQrlu(iVar7);
        }
        param_2 = param_2 - 1;
        param_1[6] = puVar8;
        if (param_2 == 0) {
          return param_1;
        }
      }
      *puVar9 = uVar3;
      param_2 = param_2 - 1;
      param_1[6] = puVar9 + 1;
    } while (param_2 != 0);
  }
  return param_1;
}


// =========================================================================
// Function: yEDfcCkyPiUfiujcJttQkeN_NRaGEkMSQaFIMvEnWelCblqOPDglSpZvsWVIhIQFDpbFQTebVAtcbvGQJME_KOxTavjaSLFMrGoGPjlonWiXddOtibWPDQfdzLzvaVgvVNFuRQnHHmDf
// Entry: 0x71aa2a20 | Size: 468 bytes
// =========================================================================

undefined4 *
yEDfcCkyPiUfiujcJttQkeN_NRaGEkMSQaFIMvEnWelCblqOPDglSpZvsWVIhIQFDpbFQTebVAtcbvGQJME_KOxTavjaSLFMrGoGPjlonWiXddOtibWPDQfdzLzvaVgvVNFuRQnHHmDf
          (undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar9 = param_1 + 5;
  *puVar9 = 0;
  uVar3 = param_2[1];
  uVar7 = *param_2;
  param_1[7] = 0;
  param_1[6] = uVar3;
  *puVar9 = uVar7;
  param_1[7] = param_2[2];
  *param_2 = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  piVar10 = (int *)*puVar9;
  *param_1 = &DAT_70b13304;
  param_1[9] = 0;
  piVar6 = param_1 + 8;
  *piVar6 = 0;
  param_1[10] = 0;
  uVar11 = param_1[6] - (int)piVar10 >> 2;
  if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0x7e,s_converters__size___>__2_70061e38,
               &DAT_70095ff6,uVar11,2);
  }
  if (piVar10 != (int *)(param_1[6] + -4)) {
    do {
      uVar3 = thunk_MwhHq(0x38);
      thunk_qzrDNsrqslsEVHdwixKrKjYtxiowMrWjKa
                (uVar3,*(undefined4 *)(*piVar10 + 0x10),*(undefined4 *)(*piVar10 + 0xc),1);
      puVar9 = (undefined4 *)param_1[9];
      if (puVar9 < (undefined4 *)param_1[10]) {
        puVar12 = puVar9 + 1;
        *puVar9 = uVar3;
      }
      else {
        iVar8 = *piVar6;
        iVar1 = (int)puVar9 - iVar8 >> 2;
        uVar11 = iVar1 + 1;
        if (0x3fffffff < uVar11) {
          FUN_71aa3900(piVar6);
LAB_71aa2bc8:
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        uVar4 = (int)param_1[10] - iVar8;
        uVar2 = (int)uVar4 >> 1;
        if (uVar11 < uVar2) {
          uVar11 = uVar2;
        }
        if (0x7ffffffb < uVar4) {
          uVar11 = 0x3fffffff;
        }
        if (uVar11 == 0) {
          iVar5 = 0;
        }
        else {
          if (0x3fffffff < uVar11) goto LAB_71aa2bc8;
          iVar5 = thunk_MwhHq(uVar11 << 2);
        }
        puVar12 = (undefined4 *)(iVar5 + iVar1 * 4);
        *puVar12 = uVar3;
        imp___aeabi_memcpy4(iVar5,iVar8,(int)puVar9 - iVar8);
        puVar12 = puVar12 + 1;
        param_1[8] = iVar5;
        param_1[9] = puVar12;
        param_1[10] = iVar5 + uVar11 * 4;
        if (iVar8 != 0) {
          thunk_qNQrlu(iVar8);
        }
      }
      piVar10 = piVar10 + 1;
      param_1[9] = puVar12;
    } while (piVar10 != (int *)(param_1[6] + -4));
  }
  return param_1;
}


// =========================================================================
// Function: KifXA_dKcMnXFhNandlUgdAUPeHWSK
// Entry: 0x71aa2ecc | Size: 4 bytes
// =========================================================================

void KifXA_dKcMnXFhNandlUgdAUPeHWSK(void)

{
  return;
}


// =========================================================================
// Function: HrsclfpOaPSxgiWQlWdIOCtGSPBt_m
// Entry: 0x71aa2ee8 | Size: 4 bytes
// =========================================================================

void HrsclfpOaPSxgiWQlWdIOCtGSPBt_m(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x71aa2ee8);
  (*pcVar1)();
}


// =========================================================================
// Function: jpFZBEdenrqrReBPyAlryyLYeFeOnYCP
// Entry: 0x71aa2f04 | Size: 4 bytes
// =========================================================================

void jpFZBEdenrqrReBPyAlryyLYeFeOnYCP(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: BfxvNgsGEGgtRv_JDrdbrBkAFphBLhAiATvUSZyUqZgShxhR
// Entry: 0x71aa2f3c | Size: 316 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

void BfxvNgsGEGgtRv_JDrdbrBkAFphBLhAiATvUSZyUqZgShxhR
               (int param_1,int *param_2,int param_3,int *param_4,uint param_5)

{
  float *pfVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  
  iVar7 = *(int *)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 * iVar7 - param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd7,
               s_src_size____src_channels_____src_7006425c,&DAT_70095f5e);
  }
  uVar8 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc);
  if (uVar8 < param_5 || uVar8 - param_5 == 0) {
    if (uVar6 != 0) {
      pfVar1 = (float *)*param_4;
      fVar9 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
      if (iVar7 == 0) {
        uVar8 = 0;
        fVar9 = 0.0 / fVar9;
        if (3 < uVar6) {
          uVar8 = uVar6 & 0xfffffffc;
          uVar2 = uVar8;
          pfVar4 = pfVar1;
          do {
            *pfVar4 = fVar9;
            pfVar4[1] = fVar9;
            pfVar4[2] = fVar9;
            pfVar4[3] = fVar9;
            pfVar4 = pfVar4 + 4;
            uVar2 = uVar2 - 4;
          } while (uVar2 != 0);
          if (uVar6 == uVar8) {
            return;
          }
        }
        pfVar1 = pfVar1 + uVar8;
        iVar7 = uVar6 - uVar8;
        do {
          *pfVar1 = fVar9;
          pfVar1 = pfVar1 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      else {
        uVar8 = 0;
        piVar3 = param_2;
        iVar5 = iVar7;
        fVar10 = 0.0;
        do {
          do {
            iVar5 = iVar5 + -1;
            fVar10 = fVar10 + *(float *)(*piVar3 + uVar8 * 4);
            piVar3 = piVar3 + 1;
          } while (iVar5 != 0);
          pfVar4 = pfVar1 + uVar8;
          uVar8 = uVar8 + 1;
          *pfVar4 = fVar10 / fVar9;
          piVar3 = param_2;
          iVar5 = iVar7;
          fVar10 = 0.0;
        } while (uVar8 != uVar6);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70068283,0xd8,
             s_dst_capacity_>__dst_channels_____7006d364,&DAT_70095f5e);
}


// =========================================================================
// Function: oZtImmfexMUADS_PybFvdcLMMolJZ_Tgh
// Entry: 0x71aa318c | Size: 124 bytes
// =========================================================================

undefined4 * oZtImmfexMUADS_PybFvdcLMMolJZ_Tgh(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[5];
  *param_1 = &DAT_70b132e4;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)param_1[6];
    piVar1 = piVar2;
    if (piVar3 != piVar2) {
      do {
        piVar3 = piVar3 + -1;
        piVar1 = (int *)*piVar3;
        *piVar3 = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      } while (piVar3 != piVar2);
      piVar1 = (int *)param_1[5];
    }
    param_1[6] = piVar2;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: nfZejvcsEVmNAvIMCJZf_BnNMqFNxhhsr
// Entry: 0x71aa325c | Size: 128 bytes
// =========================================================================

void nfZejvcsEVmNAvIMCJZf_BnNMqFNxhhsr(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[5];
  *param_1 = &DAT_70b132e4;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)param_1[6];
    piVar1 = piVar2;
    if (piVar3 != piVar2) {
      do {
        piVar3 = piVar3 + -1;
        piVar1 = (int *)*piVar3;
        *piVar3 = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
      } while (piVar3 != piVar2);
      piVar1 = (int *)param_1[5];
    }
    param_1[6] = piVar2;
    thunk_qNQrlu(piVar1);
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: LWOEyWKVtxPjakxBINfkHJimNnVlFUklOb_xateIOXXfvsd_i
// Entry: 0x71aa334c | Size: 208 bytes
// =========================================================================

void LWOEyWKVtxPjakxBINfkHJimNnVlFUklOb_xateIOXXfvsd_i
               (int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  if (iVar1 - param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd7,
               s_src_size____src_channels_____src_7006425c,&DAT_70095f5e,param_3,iVar1);
  }
  uVar2 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc);
  if (uVar2 < param_5 || uVar2 - param_5 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x18) != iVar1) {
      uVar2 = 0;
      do {
        thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
                  (*(undefined4 *)(iVar1 + uVar2 * 4),*(undefined4 *)(param_2 + uVar2 * 4),
                   *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_4 + uVar2 * 4),
                   *(undefined4 *)(param_1 + 0x10));
        iVar1 = *(int *)(param_1 + 0x14);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(param_1 + 0x18) - iVar1 >> 2));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70068283,0xd8,
             s_dst_capacity_>__dst_channels_____7006d364,&DAT_70095f5e,param_5,uVar2);
}


// =========================================================================
// Function: QpHyMnFbAaAMuwVCBMadUtPoBbRkWaKPe_ee
// Entry: 0x71aa361c | Size: 208 bytes
// =========================================================================

undefined4 * QpHyMnFbAaAMuwVCBMadUtPoBbRkWaKPe_ee(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1[8];
  *param_1 = &DAT_70b13304;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[9];
    piVar2 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar1 = *piVar4;
        *piVar4 = 0;
        if (iVar1 != 0) {
          thunk_uxNIQrxHJctWnbiWQnpKjvJRVzOspbeI();
          thunk_qNQrlu();
        }
      } while (piVar4 != piVar3);
      piVar2 = (int *)param_1[8];
    }
    param_1[9] = piVar3;
    thunk_qNQrlu(piVar2);
  }
  piVar3 = (int *)param_1[5];
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[6];
    piVar2 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        piVar2 = (int *)*piVar4;
        *piVar4 = 0;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))();
        }
      } while (piVar4 != piVar3);
      piVar2 = (int *)param_1[5];
    }
    param_1[6] = piVar3;
    thunk_qNQrlu(piVar2);
  }
  return param_1;
}


// =========================================================================
// Function: ybPwCFCoQr_QuIHYyCtlPbivqDLqYxuBSXiE
// Entry: 0x71aa3794 | Size: 20 bytes
// =========================================================================

void ybPwCFCoQr_QuIHYyCtlPbivqDLqYxuBSXiE(void)

{
  thunk_QpHyMnFbAaAMuwVCBMadUtPoBbRkWaKPe_ee();
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: pX_OTnkiPCByTwxrVVVnLcQNiOEkNwUpZG_SHGnxLtZSrXeuVxEK
// Entry: 0x71aa37f8 | Size: 240 bytes
// =========================================================================

void pX_OTnkiPCByTwxrVVVnLcQNiOEkNwUpZG_SHGnxLtZSrXeuVxEK
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x14) + 8))();
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  if (8 < (uint)(iVar3 - iVar1)) {
    iVar6 = 0;
    do {
      piVar2 = *(int **)(iVar1 + iVar6 * 4 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 0x20) + iVar6 * 4);
      iVar3 = *piVar4;
      iVar1 = piVar4[1];
      (**(code **)(*piVar2 + 8))
                (piVar2,*(undefined4 *)(iVar3 + 4),*(int *)(iVar3 + 0x14) * *(int *)(iVar3 + 0xc),
                 *(undefined4 *)(iVar1 + 4),*(int *)(iVar1 + 0x14) * *(int *)(iVar1 + 0xc));
      iVar1 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(param_1 + 0x18);
      uVar5 = iVar6 + 3;
      iVar6 = iVar6 + 1;
    } while (uVar5 < (uint)(iVar3 - iVar1 >> 2));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + -4);
                    /* WARNING: Could not recover jumptable at 0x71aa38e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar3 + -4) + 8))
            (*(int **)(iVar3 + -4),*(undefined4 *)(iVar1 + 4),
             *(int *)(iVar1 + 0x14) * *(int *)(iVar1 + 0xc),param_4);
  return;
}


// =========================================================================
// Function: FUN_71aa3900
// Entry: 0x71aa3900 | Size: 20 bytes
// =========================================================================

void FUN_71aa3900(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: aretMawgGuGtCQFFIHeBRkVsrDCqk_
// Entry: 0x71aa3968 | Size: 4 bytes
// =========================================================================

void aretMawgGuGtCQFFIHeBRkVsrDCqk_(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: ZfvmPbjqUSpSzjOtYionAqeXWwVWxJHavFKtBIgrOpTGDi
// Entry: 0x71aa39a0 | Size: 208 bytes
// =========================================================================

void ZfvmPbjqUSpSzjOtYionAqeXWwVWxJHavFKtBIgrOpTGDi
               (int param_1,int *param_2,int param_3,int *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar5 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  if (iVar5 - param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd7,
               s_src_size____src_channels_____src_7006425c,&DAT_70095f5e,param_3,iVar5);
  }
  iVar6 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 0x10);
  uVar7 = iVar5 * iVar6;
  if (uVar7 < param_5 || uVar7 - param_5 == 0) {
    if (iVar5 != 0 && iVar6 != 0) {
      iVar2 = *param_2;
      iVar3 = 0;
      do {
        uVar8 = *(undefined4 *)(iVar2 + iVar3 * 4);
        iVar1 = iVar6;
        piVar4 = param_4;
        do {
          iVar1 = iVar1 + -1;
          *(undefined4 *)(*piVar4 + iVar3 * 4) = uVar8;
          piVar4 = piVar4 + 1;
        } while (iVar1 != 0);
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70068283,0xd8,
             s_dst_capacity_>__dst_channels_____7006d364,&DAT_70095f5e,param_5,uVar7);
}


// =========================================================================
// Function: ScbHOVMhUWmLiiOoxYtaTqOGKwgyM
// Entry: 0x71aa3b80 | Size: 4 bytes
// =========================================================================

void ScbHOVMhUWmLiiOoxYtaTqOGKwgyM(void)

{
  qNQrlu();
  return;
}


// =========================================================================
// Function: IjCSRhrpEIpfefmDWuqfCzkCgTgZGPZCCkYGfqsWUnyAd
// Entry: 0x71aa3bb8 | Size: 196 bytes
// =========================================================================

void IjCSRhrpEIpfefmDWuqfCzkCgTgZGPZCCkYGfqsWUnyAd
               (int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  if (iVar1 - param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70068283,0xd7,
               s_src_size____src_channels_____src_7006425c,&DAT_70095f5e,param_3,iVar1);
  }
  uVar2 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc);
  if (uVar2 < param_5 || uVar2 - param_5 == 0) {
    if (param_2 != param_4 && *(int *)(param_1 + 4) != 0) {
      uVar2 = 0;
      do {
        imp___aeabi_memcpy4(*(undefined4 *)(param_4 + uVar2 * 4),
                            *(undefined4 *)(param_2 + uVar2 * 4),*(int *)(param_1 + 0x10) << 2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70068283,0xd8,
             s_dst_capacity_>__dst_channels_____7006d364,&DAT_70095f5e,param_5,uVar2);
}


// =========================================================================
// Function: FUN_71aa3da8
// Entry: 0x71aa3da8 | Size: 20 bytes
// =========================================================================

void FUN_71aa3da8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: oAgDAWoadRIMsEjYkUgbbGsVohHNiPUzyDCc
// Entry: 0x71aa3e10 | Size: 372 bytes
// =========================================================================

undefined4 * oAgDAWoadRIMsEjYkUgbbGsVohHNiPUzyDCc(undefined4 *param_1)

{
  *param_1 = 0xfa;
  param_1[1] = 8;
  thunk_xNdgDcnunVudRmTHShITUFBfhBpxkgrapBDtGANfGm(param_1 + 2);
  param_1[0x35] = 0x1000001;
  *(undefined2 *)(param_1 + 0x31) = 0x101;
  param_1[0x28] = 0x40200000;
  param_1[0x32] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2e] = 0x3fc00000;
  param_1[0x29] = 0x19;
  param_1[0x1c] = 0x3f333333;
  param_1[0x1d] = 0x4b9929a8;
  param_1[0x1e] = 0xc;
  *(undefined8 *)(param_1 + 0x3d) = 0x4316000042c80000;
  *(undefined8 *)(param_1 + 0x3f) = 0x41a00000;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0x4280000043800000;
  *(undefined8 *)(param_1 + 0x38) = 0x4120000043000000;
  param_1[0x3a] = 0x41200000;
  *(undefined8 *)(param_1 + 0x1f) = 0x3f0000003ba3d70a;
  *(undefined8 *)(param_1 + 0x21) = 0x400000003a83126f;
  param_1[0x23] = 0x4b9929a8;
  param_1[0x33] = 0x3f547ae1;
  param_1[0x34] = 0x3f547ae1;
  *(undefined8 *)(param_1 + 0x16) = 0x3d4ccccd3851b717;
  *(undefined8 *)(param_1 + 0x18) = 0x400000003a83126f;
  param_1[0x2d] = 0x40800000;
  param_1[0x1a] = 0x4b9929a8;
  param_1[0x2a] = 0x10100;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3b] = 0x41200000;
  param_1[0x30] = 1;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x24] = 0xc;
  param_1[0x25] = 0x3f666666;
  param_1[0x26] = 0x4b9929a8;
  param_1[0x27] = 0xfa;
  param_1[0x1b] = 0xd;
  param_1[0x15] = 0xd;
  thunk_WEkkIwcMOCrMPtqgzqOtfjhCUqEBDIL_tMPNfPb_jbzkQc(param_1 + 0x42);
  param_1[0x4a] = 0xc2c01170;
  thunk_ZvLapYRDss_XoXNbQrq_VEmLuLgf_vyXlpy_fC_sINMmtkmb(param_1 + 0x4b);
  param_1[0x78] = 0x40000000;
  param_1[0x76] = 0;
  param_1[0x77] = 300;
  *(undefined1 *)(param_1 + 0x75) = 1;
  return param_1;
}


// =========================================================================
// Function: crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj
// Entry: 0x71aa3fd0 | Size: 108 bytes
// =========================================================================

undefined4 * crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  thunk_RaeAUCRxgENbtCEtRtx_EOxOtCTBDoqBteFOtPWAkrBPcP(param_1 + 2,param_2 + 2);
  imp___aeabi_memcpy4(param_1 + 0x15,param_2 + 0x15,0xb2);
  thunk_QnmalEOdmapypu_NgQiPQmABQVyVcsQivIMAYFQWZpeCWisxPG(param_1 + 0x42,param_2 + 0x42);
  param_1[0x4a] = param_2[0x4a];
  thunk_HEDtwwqinnOXUYOAKThUKKeVyjkHqLGpMafyDQOsrRPA_mnYDpgY(param_1 + 0x4b,param_2 + 0x4b);
  uVar2 = *(undefined8 *)(param_2 + 0x77);
  *(undefined8 *)(param_1 + 0x75) = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x77) = uVar2;
  return param_1;
}


// =========================================================================
// Function: ZXDoDoCzws_ZFpgJamPhgMZGre_BNbAnYsviCbfV
// Entry: 0x71aa403c | Size: 240 bytes
// =========================================================================

undefined4 * ZXDoDoCzws_ZFpgJamPhgMZGre_BNbAnYsviCbfV(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  imp___aeabi_memcpy4(param_1 + 2,param_2 + 2,0x49);
  imp___aeabi_memcpy4(param_1 + 0x15,param_2 + 0x15,0xb2);
  uVar2 = *(undefined8 *)(param_2 + 0x44);
  uVar3 = *(undefined8 *)((int)param_2 + 0x115);
  uVar4 = *(undefined8 *)((int)param_2 + 0x11d);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  *(undefined8 *)((int)param_1 + 0x115) = uVar3;
  *(undefined8 *)((int)param_1 + 0x11d) = uVar4;
  uVar1 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x4c);
  param_1[0x4e] = param_2[0x4e];
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x4f);
  param_1[0x51] = param_2[0x51];
  *(undefined8 *)(param_1 + 0x4f) = uVar2;
  uVar1 = param_2[0x53];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x54);
  param_1[0x56] = param_2[0x56];
  *(undefined8 *)(param_1 + 0x54) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x57);
  param_1[0x59] = param_2[0x59];
  *(undefined8 *)(param_1 + 0x57) = uVar2;
  uVar1 = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5a] = uVar1;
  imp___aeabi_memcpy4(param_1 + 0x5c,param_2 + 0x5c,0x61);
  uVar2 = *(undefined8 *)(param_2 + 0x77);
  *(undefined8 *)(param_1 + 0x75) = *(undefined8 *)(param_2 + 0x75);
  *(undefined8 *)(param_1 + 0x77) = uVar2;
  return param_1;
}


// =========================================================================
// Function: MxYnJxQHgAclvolgukUlOVCmujgcsXeedAsmRmdDFnTaWh
// Entry: 0x71aa412c | Size: 28 bytes
// =========================================================================

undefined4 MxYnJxQHgAclvolgukUlOVCmujgcsXeedAsmRmdDFnTaWh(undefined4 param_1,undefined4 param_2)

{
  imp___aeabi_memcpy4(param_1,param_2,0x49);
  return param_1;
}


// =========================================================================
// Function: ITMexBsAatwCRZVWSLpKFIPVDLxBGvMKYbvAJVGcsfTFjVpPOF
// Entry: 0x71aa4148 | Size: 28 bytes
// =========================================================================

void ITMexBsAatwCRZVWSLpKFIPVDLxBGvMKYbvAJVGcsfTFjVpPOF(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)((int)param_2 + 0xd);
  uVar3 = *(undefined8 *)((int)param_2 + 0x15);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)((int)param_1 + 0xd) = uVar2;
  *(undefined8 *)((int)param_1 + 0x15) = uVar3;
  return;
}


// =========================================================================
// Function: jYkNniEjVFpgMrLueCxxpyZZwnZzLjkbVdyUbIAiOzYfOHvjKebm
// Entry: 0x71aa4164 | Size: 140 bytes
// =========================================================================

undefined4 *
jYkNniEjVFpgMrLueCxxpyZZwnZzLjkbVdyUbIAiOzYfOHvjKebm(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 1) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 4) = uVar2;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 9);
  param_1[0xb] = param_2[0xb];
  *(undefined8 *)(param_1 + 9) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar1;
  imp___aeabi_memcpy4(param_1 + 0x11,param_2 + 0x11,0x61);
  return param_1;
}


// =========================================================================
// Function: xNdgDcnunVudRmTHShITUFBfhBpxkgrapBDtGANfGm
// Entry: 0x71aa41f0 | Size: 128 bytes
// =========================================================================

void xNdgDcnunVudRmTHShITUFBfhBpxkgrapBDtGANfGm(undefined8 *param_1)

{
  *(undefined2 *)((int)param_1 + 0x3c) = 0x100;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined1 *)((int)param_1 + 0x44) = 0;
  *(undefined2 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x34) = 0x461c4000;
  *(undefined4 *)(param_1 + 4) = 0x3e4ccccd;
  *(undefined4 *)((int)param_1 + 0x24) = 5;
  *(undefined4 *)(param_1 + 5) = 0x14;
  *param_1 = 0x400000005;
  param_1[1] = 0x2000000005;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 3) = 0x3f333333;
  *(undefined4 *)((int)param_1 + 0x1c) = 0x3f333333;
  *(undefined4 *)(param_1 + 2) = 1;
  return;
}


// =========================================================================
// Function: RaeAUCRxgENbtCEtRtx_EOxOtCTBDoqBteFOtPWAkrBPcP
// Entry: 0x71aa4280 | Size: 28 bytes
// =========================================================================

undefined4 RaeAUCRxgENbtCEtRtx_EOxOtCTBDoqBteFOtPWAkrBPcP(undefined4 param_1,undefined4 param_2)

{
  imp___aeabi_memcpy4(param_1,param_2,0x49);
  return param_1;
}


// =========================================================================
// Function: WEkkIwcMOCrMPtqgzqOtfjhCUqEBDIL_tMPNfPb_jbzkQc
// Entry: 0x71aa42a0 | Size: 44 bytes
// =========================================================================

void WEkkIwcMOCrMPtqgzqOtfjhCUqEBDIL_tMPNfPb_jbzkQc(undefined4 *param_1)

{
  *param_1 = 0x32;
  *(undefined8 *)(param_1 + 1) = 0x4120000049c80000;
  *(undefined8 *)(param_1 + 3) = 0x3e99999a46d6ead7;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[6] = 1;
  param_1[5] = 1;
  return;
}


// =========================================================================
// Function: QnmalEOdmapypu_NgQiPQmABQVyVcsQivIMAYFQWZpeCWisxPG
// Entry: 0x71aa42e0 | Size: 28 bytes
// =========================================================================

void QnmalEOdmapypu_NgQiPQmABQVyVcsQivIMAYFQWZpeCWisxPG(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)((int)param_2 + 0xd);
  uVar3 = *(undefined8 *)((int)param_2 + 0x15);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)((int)param_1 + 0xd) = uVar2;
  *(undefined8 *)((int)param_1 + 0x15) = uVar3;
  return;
}


// =========================================================================
// Function: ZvLapYRDss_XoXNbQrq_VEmLuLgf_vyXlpy_fC_sINMmtkmb
// Entry: 0x71aa4300 | Size: 360 bytes
// =========================================================================

undefined4 * ZvLapYRDss_XoXNbQrq_VEmLuLgf_vyXlpy_fC_sINMmtkmb(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  
  *param_1 = 4;
  thunk_ISkIJMqpLnArZbJRoCnVdkBXPdouFJoLmjIMxxYVCBMqhaTikfxHQvAcdbWCXjZrSAnAv
            (auStack_2c,0x3e99999a,0x3ecccccd,0x3e99999a);
  thunk_ISkIJMqpLnArZbJRoCnVdkBXPdouFJoLmjIMxxYVCBMqhaTikfxHQvAcdbWCXjZrSAnAv
            (auStack_38,0x3d8f5c29,0x3dcccccd,0x3e99999a);
  thunk_zrqWgYSyxHDdJrnzrqGlhgMiNLqpnFyPIwnEUCwARlCGthqURFDxwqldCkdyWFLKmekVNTSCcwhKCkJJwib
            (param_1 + 1,auStack_2c,auStack_38,0x40000000,0x3e800000);
  thunk_ISkIJMqpLnArZbJRoCnVdkBXPdouFJoLmjIMxxYVCBMqhaTikfxHQvAcdbWCXjZrSAnAv
            (auStack_44,0x3f8b851f,0x3f8ccccd,0x3e99999a);
  thunk_ISkIJMqpLnArZbJRoCnVdkBXPdouFJoLmjIMxxYVCBMqhaTikfxHQvAcdbWCXjZrSAnAv
            (auStack_50,0x3dcccccd,0x3e99999a,0x3e99999a);
  thunk_zrqWgYSyxHDdJrnzrqGlhgMiNLqpnFyPIwnEUCwARlCGthqURFDxwqldCkdyWFLKmekVNTSCcwhKCkJJwib
            (param_1 + 9,auStack_44,auStack_50,0x40000000,0x3e800000);
  auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
  auVar1._0_8_ = 0x100000001;
  auVar1 = auVar1 << 0x40 | auVar1;
  param_1[0x19] = 0x32;
  param_1[0x18] = 0x41f00000;
  *(undefined8 *)(param_1 + 0x24) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x26) = 0x3f80000043c80000;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0x3727c5ac;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  param_1[0x1c] = *(undefined4 *)auVar1;
  param_1[0x1d] = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  param_1[0x1e] = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  param_1[0x1f] = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  param_1[0x1a] = 0xc;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x20] = 1;
  *(undefined8 *)(param_1 + 0x12) = 0x500000000;
  *(undefined8 *)(param_1 + 0x14) = 0x800000005;
  param_1[0x16] = 0x3e800000;
  param_1[0x17] = 0x41200000;
  return param_1;
}


// =========================================================================
// Function: HEDtwwqinnOXUYOAKThUKKeVyjkHqLGpMafyDQOsrRPA_mnYDpgY
// Entry: 0x71aa4490 | Size: 80 bytes
// =========================================================================

undefined4 *
HEDtwwqinnOXUYOAKThUKKeVyjkHqLGpMafyDQOsrRPA_mnYDpgY(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  thunk_mbzMbpmZkfTcwjkZnQmEAdrlqWUYWBOCEOnwpgITjntFgAjwEWRIojLwvqW(param_1 + 1,param_2 + 1);
  thunk_mbzMbpmZkfTcwjkZnQmEAdrlqWUYWBOCEOnwpgITjntFgAjwEWRIojLwvqW(param_1 + 9,param_2 + 9);
  imp___aeabi_memcpy4(param_1 + 0x11,param_2 + 0x11,0x61);
  return param_1;
}


// =========================================================================
// Function: pLiP_mlhbdtEmSyXliGJeNdqNmEEVRCASzsuhfMDMqpqF_LQpZENGutRbIU
// Entry: 0x71aa44e0 | Size: 52 bytes
// =========================================================================

void pLiP_mlhbdtEmSyXliGJeNdqNmEEVRCASzsuhfMDMqpqF_LQpZENGutRbIU
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  uVar2 = *(undefined8 *)((int)param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_2 + 0x14);
  *(undefined8 *)((int)param_1 + 0xc) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar1;
  return;
}


// =========================================================================
// Function: ISkIJMqpLnArZbJRoCnVdkBXPdouFJoLmjIMxxYVCBMqhaTikfxHQvAcdbWCXjZrSAnAv
// Entry: 0x71aa4514 | Size: 8 bytes
// =========================================================================

void ISkIJMqpLnArZbJRoCnVdkBXPdouFJoLmjIMxxYVCBMqhaTikfxHQvAcdbWCXjZrSAnAv
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}


// =========================================================================
// Function: lSsBxekDxWSHKElTbzuhFwBkCvHBdGlgNnTkidYBsGjBtfCKeBrywiDJkgvoqMW_VafaKgR
// Entry: 0x71aa451c | Size: 20 bytes
// =========================================================================

void lSsBxekDxWSHKElTbzuhFwBkCvHBdGlgNnTkidYBsGjBtfCKeBrywiDJkgvoqMW_VafaKgR
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: JOhfHPZRRKCtNgIncIUVcsOQLzNQXbkoecWoyeDgGdggvnzcrwBJyDKPOPueTiWHftqgRzw
// Entry: 0x71aa4530 | Size: 20 bytes
// =========================================================================

void JOhfHPZRRKCtNgIncIUVcsOQLzNQXbkoecWoyeDgGdggvnzcrwBJyDKPOPueTiWHftqgRzw
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}


// =========================================================================
// Function: zrqWgYSyxHDdJrnzrqGlhgMiNLqpnFyPIwnEUCwARlCGthqURFDxwqldCkdyWFLKmekVNTSCcwhKCkJJwib
// Entry: 0x71aa4544 | Size: 52 bytes
// =========================================================================

int zrqWgYSyxHDdJrnzrqGlhgMiNLqpnFyPIwnEUCwARlCGthqURFDxwqldCkdyWFLKmekVNTSCcwhKCkJJwib
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  thunk_lSsBxekDxWSHKElTbzuhFwBkCvHBdGlgNnTkidYBsGjBtfCKeBrywiDJkgvoqMW_VafaKgR();
  thunk_lSsBxekDxWSHKElTbzuhFwBkCvHBdGlgNnTkidYBsGjBtfCKeBrywiDJkgvoqMW_VafaKgR
            (param_1 + 0xc,param_3);
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  return param_1;
}


// =========================================================================
// Function: mbzMbpmZkfTcwjkZnQmEAdrlqWUYWBOCEOnwpgITjntFgAjwEWRIojLwvqW
// Entry: 0x71aa4578 | Size: 48 bytes
// =========================================================================

int mbzMbpmZkfTcwjkZnQmEAdrlqWUYWBOCEOnwpgITjntFgAjwEWRIojLwvqW(int param_1,int param_2)

{
  undefined4 uVar1;
  
  thunk_lSsBxekDxWSHKElTbzuhFwBkCvHBdGlgNnTkidYBsGjBtfCKeBrywiDJkgvoqMW_VafaKgR();
  thunk_lSsBxekDxWSHKElTbzuhFwBkCvHBdGlgNnTkidYBsGjBtfCKeBrywiDJkgvoqMW_VafaKgR
            (param_1 + 0xc,param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return param_1;
}


// =========================================================================
// Function: ocLoxUTomXkAUrohNxkEkxAfYnrxOYnYedHzDYyIIpyytS
// Entry: 0x71aa45b0 | Size: 6308 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: register */

byte ocLoxUTomXkAUrohNxkEkxAfYnrxOYnYedHzDYyIIpyytS(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  bool bVar34;
  bool bVar35;
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
  undefined4 uVar66;
  float fVar67;
  undefined4 uVar68;
  float fVar69;
  undefined4 uVar70;
  float fVar71;
  undefined4 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  float fVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  undefined4 uVar84;
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
  ulonglong uVar99;
  ulonglong uVar100;
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
  
  iVar8 = *(int *)(param_1 + 0xc);
  bVar34 = iVar8 == 4;
  bVar35 = iVar8 == 8;
  if (!bVar34 && !bVar35) {
    iVar8 = 4;
  }
  if (!bVar34 && !bVar35) {
    *(int *)(param_1 + 0xc) = iVar8;
  }
  uVar27 = *(uint *)(param_1 + 8);
  uVar26 = *(uint *)(param_1 + 0x10);
  uVar23 = *(uint *)(param_1 + 0x14);
  uVar31 = 5000;
  if (uVar27 < 5000) {
    uVar31 = uVar27;
  }
  uVar30 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 8) = uVar31;
  uVar31 = 5000;
  if (uVar26 < 5000) {
    uVar31 = uVar26;
  }
  uVar29 = *(uint *)(param_1 + 0x1c);
  uVar9 = 5000;
  if (uVar23 < 5000) {
    uVar9 = uVar23;
  }
  iVar8 = *(int *)(param_1 + 0x30);
  iVar20 = *(int *)(param_1 + 0x2c);
  uVar19 = 5000;
  if (uVar30 < 5000) {
    uVar19 = uVar30;
  }
  uVar21 = 5000;
  if (uVar29 < 5000) {
    uVar21 = uVar29;
  }
  *(uint *)(param_1 + 0x14) = uVar9;
  iVar18 = 0xfa;
  if (iVar8 < 0xfa) {
    iVar18 = iVar8;
  }
  fVar69 = *(float *)(param_1 + 0x20);
  if (iVar18 < 2) {
    iVar18 = 1;
  }
  *(uint *)(param_1 + 0x18) = uVar19;
  iVar14 = 0xfa;
  if (iVar20 < 0xfa) {
    iVar14 = iVar20;
  }
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  fVar55 = *(float *)(param_1 + 0x28);
  fVar36 = 0.0;
  uVar9 = *(uint *)(param_1 + 0x54);
  fVar85 = 1000.0;
  *(int *)(param_1 + 0x2c) = iVar14;
  fVar67 = *(float *)(param_1 + 0x60);
  fVar74 = *(float *)(param_1 + 100);
  *(uint *)(param_1 + 0x1c) = uVar21;
  uVar19 = *(uint *)(param_1 + 0x78);
  *(int *)(param_1 + 0x30) = iVar18;
  *(uint *)(param_1 + 0x10) = uVar31;
  fVar46 = fVar69;
  if (!NAN(fVar69)) {
    fVar46 = 1.0;
  }
  fVar77 = fVar55;
  if (!NAN(fVar55)) {
    fVar77 = 1.0;
  }
  if (fVar69 <= 0.0) {
    fVar46 = fVar36;
  }
  if (fVar55 <= 0.0) {
    fVar77 = fVar36;
  }
  fVar38 = fVar36;
  if (ABS(fVar46) < INFINITY) {
    fVar38 = fVar46;
  }
  fVar75 = fVar36;
  if (ABS(fVar77) < INFINITY) {
    fVar75 = fVar77;
  }
  fVar37 = *(float *)(param_1 + 0x5c);
  if (INFINITY < ABS(fVar46)) {
    fVar38 = fVar46;
  }
  *(float *)(param_1 + 0x20) = fVar38;
  if (INFINITY < ABS(fVar77)) {
    fVar75 = fVar77;
  }
  fVar46 = *(float *)(param_1 + 0x58);
  uVar31 = 1;
  if (1 < uVar9) {
    uVar31 = uVar9;
  }
  *(uint *)(param_1 + 0x54) = uVar31;
  *(float *)(param_1 + 0x28) = fVar75;
  fVar77 = fVar46;
  if (!NAN(fVar46)) {
    fVar77 = fVar85;
  }
  if (fVar46 <= 0.0) {
    fVar77 = fVar36;
  }
  fVar80 = ABS(fVar77);
  fVar90 = fVar36;
  if (fVar80 < INFINITY) {
    fVar90 = fVar77;
  }
  if (fVar80 != INFINITY && fVar80 >= INFINITY) {
    fVar90 = fVar77;
  }
  *(float *)(param_1 + 0x58) = fVar90;
  fVar77 = fVar37;
  if (!NAN(fVar37)) {
    fVar77 = fVar85;
  }
  if (fVar37 <= 0.0) {
    fVar77 = fVar36;
  }
  fVar51 = ABS(fVar77);
  fVar80 = fVar36;
  if (fVar51 < INFINITY) {
    fVar80 = fVar77;
  }
  if (fVar51 != INFINITY && fVar51 >= INFINITY) {
    fVar80 = fVar77;
  }
  *(float *)(param_1 + 0x5c) = fVar80;
  fVar77 = fVar67;
  if (!NAN(fVar67)) {
    fVar77 = fVar85;
  }
  if (fVar67 <= 0.0) {
    fVar77 = fVar36;
  }
  fVar71 = ABS(fVar77);
  fVar51 = fVar36;
  if (fVar71 < INFINITY) {
    fVar51 = fVar77;
  }
  if (fVar71 != INFINITY && fVar71 >= INFINITY) {
    fVar51 = fVar77;
  }
  fVar71 = 1e+08;
  *(float *)(param_1 + 0x60) = fVar51;
  fVar77 = fVar74;
  if (!NAN(fVar74)) {
    fVar77 = fVar71;
  }
  if (fVar74 <= 0.0) {
    fVar77 = fVar36;
  }
  fVar76 = ABS(fVar77);
  fVar39 = fVar36;
  if (fVar76 < INFINITY) {
    fVar39 = fVar77;
  }
  if (fVar76 != INFINITY && fVar76 >= INFINITY) {
    fVar39 = fVar77;
  }
  fVar76 = *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 100) = fVar39;
  fVar77 = fVar76;
  if (!NAN(fVar76)) {
    fVar77 = fVar71;
  }
  if (fVar76 <= 0.0) {
    fVar77 = fVar36;
  }
  fVar83 = ABS(fVar77);
  fVar73 = fVar36;
  if (fVar83 < INFINITY) {
    fVar73 = fVar77;
  }
  if (fVar83 != INFINITY && fVar83 >= INFINITY) {
    fVar73 = fVar77;
  }
  fVar77 = *(float *)(param_1 + 0x7c);
  uVar21 = 1;
  if (1 < uVar19) {
    uVar21 = uVar19;
  }
  *(uint *)(param_1 + 0x78) = uVar21;
  *(float *)(param_1 + 0x68) = fVar73;
  fVar83 = fVar77;
  if (!NAN(fVar77)) {
    fVar83 = fVar85;
  }
  if (fVar77 <= 0.0) {
    fVar83 = fVar36;
  }
  fVar88 = ABS(fVar83);
  fVar47 = fVar36;
  if (fVar88 < INFINITY) {
    fVar47 = fVar83;
  }
  if (fVar88 != INFINITY && fVar88 >= INFINITY) {
    fVar47 = fVar83;
  }
  fVar88 = *(float *)(param_1 + 0x80);
  *(float *)(param_1 + 0x7c) = fVar47;
  fVar83 = fVar88;
  if (!NAN(fVar88)) {
    fVar83 = fVar85;
  }
  if (fVar88 <= 0.0) {
    fVar83 = fVar36;
  }
  fVar91 = ABS(fVar83);
  fVar56 = fVar36;
  if (fVar91 < INFINITY) {
    fVar56 = fVar83;
  }
  if (fVar91 != INFINITY && fVar91 >= INFINITY) {
    fVar56 = fVar83;
  }
  fVar91 = *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x80) = fVar56;
  fVar83 = fVar91;
  if (!NAN(fVar91)) {
    fVar83 = fVar85;
  }
  if (fVar91 <= 0.0) {
    fVar83 = fVar36;
  }
  fVar86 = ABS(fVar83);
  fVar85 = fVar36;
  if (fVar86 < INFINITY) {
    fVar85 = fVar83;
  }
  if (fVar86 != INFINITY && fVar86 >= INFINITY) {
    fVar85 = fVar83;
  }
  fVar86 = *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x84) = fVar85;
  fVar83 = fVar86;
  if (!NAN(fVar86)) {
    fVar83 = fVar71;
  }
  if (fVar86 <= 0.0) {
    fVar83 = fVar36;
  }
  fVar97 = ABS(fVar83);
  fVar81 = fVar36;
  if (fVar97 < INFINITY) {
    fVar81 = fVar83;
  }
  if (fVar97 != INFINITY && fVar97 >= INFINITY) {
    fVar81 = fVar83;
  }
  fVar97 = *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x88) = fVar81;
  fVar83 = fVar97;
  if (!NAN(fVar97)) {
    fVar83 = fVar71;
  }
  if (fVar97 <= 0.0) {
    fVar83 = fVar36;
  }
  fVar87 = ABS(fVar83);
  fVar57 = fVar36;
  if (fVar87 < INFINITY) {
    fVar57 = fVar83;
  }
  if (fVar87 != INFINITY && fVar87 >= INFINITY) {
    fVar57 = fVar83;
  }
  *(float *)(param_1 + 0x8c) = fVar57;
  if (uVar31 < uVar19) {
    bVar34 = false;
    *(uint *)(param_1 + 0x78) = uVar31;
  }
  else {
    bVar34 = (((((uVar19 != 0 &&
                 ((((((uVar9 != 0 &&
                      (iVar8 == iVar18 &&
                      (iVar20 == iVar14 &&
                      ((((((((bVar34 || bVar35) && uVar27 < 0x1389) && uVar26 < 0x1389) &&
                          uVar23 < 0x1389) && uVar30 < 0x1389) && uVar29 < 0x1389) &&
                       fVar69 == fVar38) && fVar55 == fVar75)))) && fVar46 == fVar90) &&
                    fVar37 == fVar80) && fVar67 == fVar51) && fVar74 == fVar39) && fVar76 == fVar73)
                 ) && fVar77 == fVar47) && fVar88 == fVar56) && fVar91 == fVar85) &&
             fVar86 == fVar81) && fVar97 == fVar57;
  }
  fVar74 = *(float *)(param_1 + 0x74);
  fVar46 = *(float *)(param_1 + 0x98);
  fVar67 = *(float *)(param_1 + 0x70);
  fVar55 = *(float *)(param_1 + 0x94);
  uVar23 = *(uint *)(param_1 + 0x6c);
  uVar26 = *(uint *)(param_1 + 0x90);
  fVar69 = fVar74;
  if (!NAN(fVar74)) {
    fVar69 = fVar71;
  }
  fVar85 = fVar46;
  if (!NAN(fVar46)) {
    fVar85 = fVar71;
  }
  fVar77 = fVar67;
  if (!NAN(fVar67)) {
    fVar77 = 1.0;
  }
  fVar38 = fVar55;
  if (!NAN(fVar55)) {
    fVar38 = 1.0;
  }
  if (fVar74 <= 0.0) {
    fVar69 = fVar36;
  }
  if (fVar46 <= 0.0) {
    fVar85 = fVar36;
  }
  if (fVar67 <= 0.0) {
    fVar77 = fVar36;
  }
  if (fVar55 <= 0.0) {
    fVar38 = fVar36;
  }
  fVar75 = fVar36;
  if (ABS(fVar69) < INFINITY) {
    fVar75 = fVar69;
  }
  fVar37 = fVar36;
  if (ABS(fVar85) < INFINITY) {
    fVar37 = fVar85;
  }
  fVar90 = fVar36;
  if (ABS(fVar77) < INFINITY) {
    fVar90 = fVar77;
  }
  fVar80 = fVar36;
  if (ABS(fVar38) < INFINITY) {
    fVar80 = fVar38;
  }
  if (INFINITY < ABS(fVar69)) {
    fVar75 = fVar69;
  }
  *(float *)(param_1 + 0x74) = fVar75;
  if (INFINITY < ABS(fVar85)) {
    fVar37 = fVar85;
  }
  *(float *)(param_1 + 0x98) = fVar37;
  if (INFINITY < ABS(fVar77)) {
    fVar90 = fVar77;
  }
  *(float *)(param_1 + 0x70) = fVar90;
  if (INFINITY < ABS(fVar38)) {
    fVar80 = fVar38;
  }
  uVar27 = 1;
  if (1 < uVar23) {
    uVar27 = uVar23;
  }
  uVar30 = 1;
  if (1 < uVar26) {
    uVar30 = uVar26;
  }
  *(uint *)(param_1 + 0x90) = uVar30;
  *(uint *)(param_1 + 0x6c) = uVar27;
  *(float *)(param_1 + 0x94) = fVar80;
  if (uVar27 < uVar26) {
    bVar28 = 0;
    *(uint *)(param_1 + 0x90) = uVar27;
  }
  else {
    bVar28 = uVar26 != 0 & bVar34 & uVar23 != 0 & fVar67 == fVar90 & fVar74 == fVar75 &
             fVar55 == fVar80 & fVar46 == fVar37;
  }
  fVar46 = *(float *)(param_1 + 0xb8);
  fVar85 = 100000.0;
  fVar74 = *(float *)(param_1 + 0xa0);
  fVar67 = *(float *)(param_1 + 0xb0);
  fVar55 = *(float *)(param_1 + 0xb4);
  uVar26 = *(uint *)(param_1 + 0x9c);
  uVar23 = *(uint *)(param_1 + 0xa4);
  fVar69 = fVar46;
  if (!NAN(fVar46)) {
    fVar69 = fVar85;
  }
  fVar77 = fVar74;
  if (!NAN(fVar74)) {
    fVar77 = 100.0;
  }
  fVar38 = fVar67;
  if (!NAN(fVar67)) {
    fVar38 = fVar85;
  }
  fVar75 = fVar55;
  if (!NAN(fVar55)) {
    fVar75 = fVar85;
  }
  if (fVar46 <= 1.0) {
    fVar69 = 1.0;
  }
  if (fVar74 <= 0.0) {
    fVar77 = fVar36;
  }
  if (fVar67 <= 1.0) {
    fVar38 = 1.0;
  }
  if (fVar55 <= 1.0) {
    fVar75 = 1.0;
  }
  fVar85 = 1.0;
  if (ABS(fVar69) < INFINITY) {
    fVar85 = fVar69;
  }
  fVar37 = fVar36;
  if (ABS(fVar77) < INFINITY) {
    fVar37 = fVar77;
  }
  fVar90 = 1.0;
  if (ABS(fVar38) < INFINITY) {
    fVar90 = fVar38;
  }
  fVar80 = 1.0;
  if (ABS(fVar75) < INFINITY) {
    fVar80 = fVar75;
  }
  if (INFINITY < ABS(fVar69)) {
    fVar85 = fVar69;
  }
  uVar27 = 100000;
  if (uVar26 < 100000) {
    uVar27 = uVar26;
  }
  *(uint *)(param_1 + 0x9c) = uVar27;
  *(float *)(param_1 + 0xb8) = fVar85;
  if (INFINITY < ABS(fVar77)) {
    fVar37 = fVar77;
  }
  *(float *)(param_1 + 0xa0) = fVar37;
  if (INFINITY < ABS(fVar38)) {
    fVar90 = fVar38;
  }
  *(float *)(param_1 + 0xb0) = fVar90;
  if (INFINITY < ABS(fVar75)) {
    fVar80 = fVar75;
  }
  uVar27 = 250000;
  if ((int)uVar23 < 250000) {
    uVar27 = uVar23;
  }
  uVar27 = uVar27 & ~((int)uVar27 >> 0x1f);
  *(uint *)(param_1 + 0xa4) = uVar27;
  *(float *)(param_1 + 0xb4) = fVar80;
  if (fVar90 <= fVar80) {
    if (fVar90 <= fVar85) {
      bVar28 = uVar23 == uVar27 & bVar28 & uVar26 < 0x186a1 & fVar74 == fVar37 & fVar67 == fVar90 &
               fVar55 == fVar80 & fVar46 == fVar85;
      goto LAB_71aa4f84;
    }
  }
  iVar8 = 0xb4;
  if (fVar85 < fVar80) {
    iVar8 = 0xb8;
  }
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + iVar8);
  bVar28 = 0;
LAB_71aa4f84:
  fVar85 = *(float *)(param_1 + 200);
  fVar80 = 1e+06;
  fVar37 = *(float *)(param_1 + 0xe4);
  fVar90 = 1.0737418e+09;
  fVar38 = *(float *)(param_1 + 0xe0);
  fVar77 = *(float *)(param_1 + 0xd8);
  fVar46 = *(float *)(param_1 + 0xe8);
  fVar67 = *(float *)(param_1 + 0xec);
  fVar55 = *(float *)(param_1 + 0xdc);
  fVar75 = *(float *)(param_1 + 0xd0);
  fVar74 = *(float *)(param_1 + 0xcc);
  uVar23 = *(uint *)(param_1 + 0xc0);
  fVar69 = fVar85;
  if (!NAN(fVar85)) {
    fVar69 = fVar80;
  }
  uVar26 = *(uint *)(param_1 + 0x11c);
  fVar51 = fVar37;
  if (!NAN(fVar37)) {
    fVar51 = fVar90;
  }
  fVar71 = fVar38;
  if (!NAN(fVar38)) {
    fVar71 = fVar90;
  }
  fVar39 = fVar77;
  if (!NAN(fVar77)) {
    fVar39 = fVar90;
  }
  if (fVar85 <= 0.0) {
    fVar69 = fVar36;
  }
  fVar76 = fVar46;
  if (!NAN(fVar46)) {
    fVar76 = fVar90;
  }
  fVar73 = fVar67;
  if (!NAN(fVar67)) {
    fVar73 = fVar90;
  }
  fVar83 = fVar55;
  if (!NAN(fVar55)) {
    fVar83 = fVar90;
  }
  fVar88 = ABS(fVar69);
  fVar47 = fVar75;
  if (!NAN(fVar75)) {
    fVar47 = 1.0;
  }
  fVar56 = fVar74;
  if (!NAN(fVar74)) {
    fVar56 = 1.0;
  }
  if (fVar77 <= 0.0) {
    fVar39 = fVar36;
  }
  if (fVar38 <= 0.0) {
    fVar71 = fVar36;
  }
  if (fVar37 <= 0.0) {
    fVar51 = fVar36;
  }
  if (fVar46 <= 0.0) {
    fVar76 = fVar36;
  }
  if (fVar67 <= 0.0) {
    fVar73 = fVar36;
  }
  if (fVar55 <= 0.0) {
    fVar83 = fVar36;
  }
  if (fVar75 <= -1.0) {
    fVar47 = -1.0;
  }
  fVar91 = ABS(fVar39);
  if (fVar74 <= -1.0) {
    fVar56 = -1.0;
  }
  fVar86 = fVar36;
  if (fVar88 < INFINITY) {
    fVar86 = fVar69;
  }
  if (fVar88 != INFINITY && fVar88 >= INFINITY) {
    fVar86 = fVar69;
  }
  fVar88 = ABS(fVar83);
  *(float *)(param_1 + 200) = fVar86;
  fVar81 = ABS(fVar71);
  fVar69 = fVar36;
  if (fVar91 < INFINITY) {
    fVar69 = fVar39;
  }
  if (fVar91 != INFINITY && fVar91 >= INFINITY) {
    fVar69 = fVar39;
  }
  fVar91 = ABS(fVar51);
  *(float *)(param_1 + 0xd8) = fVar69;
  fVar39 = fVar36;
  if (fVar88 < INFINITY) {
    fVar39 = fVar83;
  }
  if (fVar88 != INFINITY && fVar88 >= INFINITY) {
    fVar39 = fVar83;
  }
  *(float *)(param_1 + 0xdc) = fVar39;
  fVar83 = fVar36;
  if (fVar81 < INFINITY) {
    fVar83 = fVar71;
  }
  if (fVar81 != INFINITY && fVar81 >= INFINITY) {
    fVar83 = fVar71;
  }
  fVar88 = ABS(fVar76);
  *(float *)(param_1 + 0xe0) = fVar83;
  fVar71 = fVar36;
  if (fVar91 < INFINITY) {
    fVar71 = fVar51;
  }
  if (fVar91 != INFINITY && fVar91 >= INFINITY) {
    fVar71 = fVar51;
  }
  fVar91 = ABS(fVar73);
  *(float *)(param_1 + 0xe4) = fVar71;
  fVar51 = fVar36;
  if (fVar88 < INFINITY) {
    fVar51 = fVar76;
  }
  if (fVar88 != INFINITY && fVar88 >= INFINITY) {
    fVar51 = fVar76;
  }
  *(float *)(param_1 + 0xe8) = fVar51;
  uVar78 = *(undefined4 *)(param_1 + 0x128);
  fVar76 = fVar36;
  if (fVar91 < INFINITY) {
    fVar76 = fVar73;
  }
  if (fVar91 != INFINITY && fVar91 >= INFINITY) {
    fVar76 = fVar73;
  }
  *(float *)(param_1 + 0xec) = fVar76;
  fVar73 = -1.0;
  if (ABS(fVar47) < INFINITY) {
    fVar73 = fVar47;
  }
  fVar88 = -1.0;
  if (ABS(fVar56) < INFINITY) {
    fVar88 = fVar56;
  }
  if (uVar23 < uVar31) {
    uVar31 = uVar23;
  }
  if (uVar23 < 2) {
    uVar31 = 1;
  }
  uVar27 = *(uint *)(param_1 + 0x108);
  fVar91 = *(float *)(param_1 + 0x10c);
  *(uint *)(param_1 + 0xc0) = uVar31;
  if (INFINITY < ABS(fVar56)) {
    fVar88 = fVar56;
  }
  fVar56 = *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0xcc) = fVar88;
  if (INFINITY < ABS(fVar47)) {
    fVar73 = fVar47;
  }
  *(float *)(param_1 + 0xd0) = fVar73;
  fVar47 = fVar56;
  if (!NAN(fVar56)) {
    fVar47 = fVar90;
  }
  if (fVar56 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar97 = ABS(fVar47);
  fVar81 = fVar36;
  if (fVar97 < INFINITY) {
    fVar81 = fVar47;
  }
  if (fVar97 != INFINITY && fVar97 >= INFINITY) {
    fVar81 = fVar47;
  }
  *(float *)(param_1 + 0xf4) = fVar81;
  fVar97 = *(float *)(param_1 + 0xf8);
  fVar47 = fVar97;
  if (!NAN(fVar97)) {
    fVar47 = fVar90;
  }
  if (fVar97 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar87 = ABS(fVar47);
  fVar57 = fVar36;
  if (fVar87 < INFINITY) {
    fVar57 = fVar47;
  }
  if (fVar87 != INFINITY && fVar87 >= INFINITY) {
    fVar57 = fVar47;
  }
  *(float *)(param_1 + 0xf8) = fVar57;
  fVar87 = *(float *)(param_1 + 0xfc);
  fVar47 = fVar87;
  if (!NAN(fVar87)) {
    fVar47 = fVar90;
  }
  if (fVar87 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar58 = ABS(fVar47);
  fVar59 = fVar36;
  if (fVar58 < INFINITY) {
    fVar59 = fVar47;
  }
  if (fVar58 != INFINITY && fVar58 >= INFINITY) {
    fVar59 = fVar47;
  }
  uVar30 = uVar27;
  if (999 < uVar27) {
    uVar30 = 1000;
  }
  *(uint *)(param_1 + 0x108) = uVar30;
  *(float *)(param_1 + 0xfc) = fVar59;
  fVar47 = fVar91;
  if (!NAN(fVar91)) {
    fVar47 = 2e+06;
  }
  if (fVar91 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar48 = ABS(fVar47);
  fVar58 = fVar36;
  if (fVar48 < INFINITY) {
    fVar58 = fVar47;
  }
  if (fVar48 != INFINITY && fVar48 >= INFINITY) {
    fVar58 = fVar47;
  }
  fVar48 = *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0x10c) = fVar58;
  fVar47 = fVar48;
  if (!NAN(fVar48)) {
    fVar47 = fVar80;
  }
  if (fVar48 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar60 = ABS(fVar47);
  fVar61 = fVar36;
  if (fVar60 < INFINITY) {
    fVar61 = fVar47;
  }
  if (fVar60 != INFINITY && fVar60 >= INFINITY) {
    fVar61 = fVar47;
  }
  *(float *)(param_1 + 0x110) = fVar61;
  fVar60 = *(float *)(param_1 + 0x114);
  fVar47 = fVar60;
  if (!NAN(fVar60)) {
    fVar47 = fVar80;
  }
  if (fVar60 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar62 = ABS(fVar47);
  fVar63 = fVar36;
  if (fVar62 < INFINITY) {
    fVar63 = fVar47;
  }
  if (fVar62 != INFINITY && fVar62 >= INFINITY) {
    fVar63 = fVar47;
  }
  *(float *)(param_1 + 0x114) = fVar63;
  fVar62 = *(float *)(param_1 + 0x118);
  fVar47 = fVar62;
  if (!NAN(fVar62)) {
    fVar47 = fVar80;
  }
  if (fVar62 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar64 = ABS(fVar47);
  fVar65 = fVar36;
  if (fVar64 < INFINITY) {
    fVar65 = fVar47;
  }
  if (fVar64 != INFINITY && fVar64 >= INFINITY) {
    fVar65 = fVar47;
  }
  uVar30 = 100;
  if (uVar26 < 100) {
    uVar30 = uVar26;
  }
  *(uint *)(param_1 + 0x11c) = uVar30;
  uVar9 = *(uint *)(param_1 + 0x120);
  uVar30 = 100;
  if (uVar9 < 100) {
    uVar30 = uVar9;
  }
  *(uint *)(param_1 + 0x120) = uVar30;
  uVar29 = *(uint *)(param_1 + 300);
  uVar30 = 5000;
  if (uVar29 < 5000) {
    uVar30 = uVar29;
  }
  if (uVar30 < 2) {
    uVar30 = 1;
  }
  *(float *)(param_1 + 0x118) = fVar65;
  *(uint *)(param_1 + 300) = uVar30;
  uVar79 = *(undefined4 *)(param_1 + 0x130);
  uVar82 = *(undefined4 *)(param_1 + 0x134);
  uVar84 = *(undefined4 *)(param_1 + 0x138);
  uVar66 = *(undefined4 *)(param_1 + 0x13c);
  auVar115._8_8_ = 0x42c8000042c80000;
  auVar115._0_8_ = 0x42c8000000000000;
  auVar111._4_4_ = uVar79;
  auVar111._0_4_ = uVar78;
  auVar111._8_4_ = uVar82;
  auVar111._12_4_ = uVar84;
  auVar104 = FloatVectorCompareGreaterThanOrEqual(auVar111,auVar115,2,0x20);
  auVar2._4_4_ = uVar79;
  auVar2._0_4_ = uVar78;
  auVar2._8_4_ = uVar82;
  auVar2._12_4_ = uVar84;
  auVar104 = VectorBitwiseInsertIfFalse(auVar115,auVar2,auVar104);
  auVar105 = ZEXT816(0xc3480000);
  auVar113._4_4_ = uVar79;
  auVar113._0_4_ = uVar78;
  auVar113._8_4_ = uVar82;
  auVar113._12_4_ = uVar84;
  auVar107 = FloatVectorCompareGreaterThanOrEqual(auVar105,auVar113,2,0x20);
  auVar104 = VectorBitwiseInsertIfTrue(auVar104,auVar105,auVar107);
  auVar108._8_8_ = 0x7f8000007f800000;
  auVar108._0_8_ = 0x7f8000007f800000;
  auVar107 = FloatVectorAbsolute(auVar104,4);
  auVar111 = FloatVectorCompareGreaterThan(auVar107,auVar108,2);
  auVar107 = FloatVectorCompareGreaterThan(auVar108,auVar107,2);
  auVar104 = VectorBitwiseInsertIfFalse(auVar104,auVar105,auVar107 | auVar111);
  uVar68 = *(undefined4 *)(param_1 + 0x140);
  uVar70 = *(undefined4 *)(param_1 + 0x144);
  uVar72 = *(undefined4 *)(param_1 + 0x148);
  pauVar3 = (undefined1 (*) [16])(param_1 + 0x14c);
  auVar2 = *pauVar3;
  pauVar4 = (undefined1 (*) [16])(param_1 + 0x15c);
  auVar111 = *pauVar4;
  *(int *)(param_1 + 0x138) = auVar104._12_4_;
  auVar107 = FloatVectorCompareGreaterThanOrEqual(0,*pauVar4,2);
  *(int *)(param_1 + 0x134) = auVar104._8_4_;
  *(int *)(param_1 + 0x130) = auVar104._4_4_;
  *(int *)(param_1 + 0x128) = auVar104._0_4_;
  auVar114._4_4_ = uVar79;
  auVar114._0_4_ = uVar78;
  auVar114._8_4_ = uVar82;
  auVar114._12_4_ = uVar84;
  auVar104 = FloatVectorCompareEqual(auVar114,auVar104,2);
  auVar112._8_8_ = 0x42c8000042c80000;
  auVar112._0_8_ = 0x42c8000042c80000;
  auVar105 = FloatVectorCompareGreaterThanOrEqual(*pauVar4,auVar112,2,0x20);
  auVar101._8_8_ = ~auVar104._8_8_;
  auVar101._0_8_ = ~auVar104._0_8_;
  auVar104 = VectorBitwiseSelect(auVar105,auVar112,*pauVar4);
  auVar105 = FloatVectorAbsolute(auVar104 & ~auVar107,4);
  auVar113 = FloatVectorCompareGreaterThan(auVar105,auVar108,2);
  auVar105 = FloatVectorCompareGreaterThan(auVar108,auVar105,2);
  auVar114 = FloatVectorCompareGreaterThanOrEqual(0,*pauVar3,2);
  auVar113 = auVar104 & ~auVar107 & (auVar105 | auVar113);
  auVar104 = FloatVectorCompareGreaterThanOrEqual(*pauVar3,auVar112,2,0x20);
  *(int *)(param_1 + 0x168) = auVar113._12_4_;
  *(int *)(param_1 + 0x164) = auVar113._8_4_;
  *(int *)(param_1 + 0x160) = auVar113._4_4_;
  *(int *)(param_1 + 0x15c) = auVar113._0_4_;
  auVar104 = VectorBitwiseSelect(auVar104,auVar112,*pauVar3);
  auVar105 = FloatVectorAbsolute(auVar104 & ~auVar114,4);
  auVar107 = FloatVectorCompareGreaterThan(auVar105,auVar108,2);
  auVar105 = FloatVectorCompareGreaterThan(auVar108,auVar105,2);
  auVar114 = auVar104 & ~auVar114 & (auVar105 | auVar107);
  auVar104._4_4_ = uVar68;
  auVar104._0_4_ = uVar66;
  auVar104._8_4_ = uVar70;
  auVar104._12_4_ = uVar72;
  auVar104 = FloatVectorCompareGreaterThanOrEqual(auVar104,auVar112,2,0x20);
  *(int *)(param_1 + 0x158) = auVar114._12_4_;
  *(int *)(param_1 + 0x154) = auVar114._8_4_;
  *(int *)(param_1 + 0x150) = auVar114._4_4_;
  *(int *)(param_1 + 0x14c) = auVar114._0_4_;
  auVar105._4_4_ = uVar68;
  auVar105._0_4_ = uVar66;
  auVar105._8_4_ = uVar70;
  auVar105._12_4_ = uVar72;
  auVar105 = VectorBitwiseInsertIfFalse(auVar112,auVar105,auVar104);
  auVar107._4_4_ = uVar68;
  auVar107._0_4_ = uVar66;
  auVar107._8_4_ = uVar70;
  auVar107._12_4_ = uVar72;
  auVar107 = FloatVectorCompareGreaterThanOrEqual(0,auVar107,2);
  fVar64 = *(float *)(param_1 + 0x16c);
  auVar104 = FloatVectorAbsolute(auVar105 & ~auVar107,4);
  uVar19 = *(uint *)(param_1 + 0x174);
  uVar21 = *(uint *)(param_1 + 400);
  auVar115 = FloatVectorCompareGreaterThan(auVar104,auVar108,2);
  uVar32 = *(uint *)(param_1 + 0x19c);
  uVar24 = *(uint *)(param_1 + 0x1a0);
  auVar104 = FloatVectorCompareGreaterThan(auVar108,auVar104,2);
  fVar89 = *(float *)(param_1 + 0x1b4);
  fVar95 = *(float *)(param_1 + 0x1c0);
  auVar104 = auVar105 & ~auVar107 & (auVar104 | auVar115);
  *(int *)(param_1 + 0x148) = auVar104._12_4_;
  *(int *)(param_1 + 0x144) = auVar104._8_4_;
  *(int *)(param_1 + 0x140) = auVar104._4_4_;
  fVar47 = fVar64;
  if (!NAN(fVar64)) {
    fVar47 = 100.0;
  }
  *(int *)(param_1 + 0x13c) = auVar104._0_4_;
  auVar1._4_4_ = uVar68;
  auVar1._0_4_ = uVar66;
  auVar1._8_4_ = uVar70;
  auVar1._12_4_ = uVar72;
  auVar104 = FloatVectorCompareEqual(auVar1,auVar104,2);
  fVar92 = *(float *)(param_1 + 0x1c4);
  auVar109._8_8_ = ~auVar104._8_8_;
  auVar109._0_8_ = ~auVar104._0_8_;
  auVar110._8_8_ = VectorCopyNarrow(auVar109,4);
  auVar110._0_8_ = VectorCopyNarrow(auVar101,4);
  uVar99 = VectorCopyNarrow(auVar110,2);
  if (fVar64 <= 0.0) {
    fVar47 = fVar36;
  }
  fVar40 = ABS(fVar47);
  fVar41 = fVar36;
  if (fVar40 < INFINITY) {
    fVar41 = fVar47;
  }
  if (fVar40 != INFINITY && fVar40 >= INFINITY) {
    fVar41 = fVar47;
  }
  uVar5 = 0x40;
  if ((int)uVar19 < 0x40) {
    uVar5 = uVar19;
  }
  uVar10 = *(uint *)(param_1 + 0x178);
  uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x174) = uVar5;
  uVar6 = 0x40;
  if ((int)uVar10 < 0x40) {
    uVar6 = uVar10;
  }
  iVar18 = *(int *)(param_1 + 0x180);
  uVar6 = uVar6 & ~((int)uVar6 >> 0x1f);
  *(uint *)(param_1 + 0x178) = uVar6;
  iVar20 = *(int *)(param_1 + 0x17c);
  iVar8 = 0x40;
  if (iVar18 < 0x40) {
    iVar8 = iVar18;
  }
  iVar14 = UnsignedSaturate(iVar20,6);
  UnsignedDoesSaturate(iVar20,6);
  *(float *)(param_1 + 0x16c) = fVar41;
  fVar47 = *(float *)(param_1 + 0x184);
  *(int *)(param_1 + 0x17c) = iVar14;
  if (iVar18 <= iVar14 + 1) {
    iVar8 = iVar14 + 1;
  }
  *(int *)(param_1 + 0x180) = iVar8;
  fVar40 = fVar47;
  if (!NAN(fVar47)) {
    fVar40 = fVar80;
  }
  if (fVar47 <= 0.0) {
    fVar40 = fVar36;
  }
  fVar42 = ABS(fVar40);
  fVar43 = *(float *)(param_1 + 0x18c);
  fVar93 = fVar36;
  if (fVar42 < INFINITY) {
    fVar93 = fVar40;
  }
  if (fVar42 != INFINITY && fVar42 >= INFINITY) {
    fVar93 = fVar40;
  }
  *(float *)(param_1 + 0x184) = fVar93;
  fVar40 = fVar43;
  if (!NAN(fVar43)) {
    fVar40 = fVar80;
  }
  if (fVar43 <= 0.0) {
    fVar40 = fVar36;
  }
  fVar44 = ABS(fVar40);
  fVar42 = fVar36;
  if (fVar44 < INFINITY) {
    fVar42 = fVar40;
  }
  if (fVar44 != INFINITY && fVar44 >= INFINITY) {
    fVar42 = fVar40;
  }
  uVar11 = 10000;
  if ((int)uVar21 < 10000) {
    uVar11 = uVar21;
  }
  uVar22 = *(uint *)(param_1 + 0x1ac);
  uVar11 = uVar11 & ~((int)uVar11 >> 0x1f);
  *(uint *)(param_1 + 400) = uVar11;
  uVar12 = *(uint *)(param_1 + 0x194);
  fVar40 = *(float *)(param_1 + 0x1b0);
  uVar7 = 10000;
  if ((int)uVar12 < 10000) {
    uVar7 = uVar12;
  }
  uVar33 = uVar32;
  if (0x3ff < uVar32) {
    uVar33 = 0x400;
  }
  if (uVar33 < 2) {
    uVar33 = 1;
  }
  uVar15 = *(uint *)(param_1 + 0x1a4);
  uVar13 = 0x41;
  if (uVar24 < 0x41) {
    uVar13 = uVar24;
  }
  uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
  uVar25 = uVar24;
  if (uVar13 < uVar15) {
    uVar25 = uVar15;
  }
  uVar16 = *(uint *)(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x194) = uVar7;
  if (0x40 < uVar25) {
    uVar25 = 0x41;
  }
  *(uint *)(param_1 + 0x1a0) = uVar13;
  uVar13 = 0x41;
  if (uVar16 < 0x41) {
    uVar13 = uVar16;
  }
  uVar17 = uVar16;
  if (uVar13 < uVar22) {
    uVar17 = uVar22;
  }
  if (0x40 < uVar17) {
    uVar17 = 0x41;
  }
  *(uint *)(param_1 + 0x1a8) = uVar13;
  *(float *)(param_1 + 0x18c) = fVar42;
  *(uint *)(param_1 + 0x19c) = uVar33;
  *(uint *)(param_1 + 0x1a4) = uVar25;
  *(uint *)(param_1 + 0x1ac) = uVar17;
  fVar44 = fVar40;
  if (!NAN(fVar40)) {
    fVar44 = 1e+24;
  }
  if (fVar40 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar49 = ABS(fVar44);
  fVar50 = fVar36;
  if (fVar49 < INFINITY) {
    fVar50 = fVar44;
  }
  if (fVar49 != INFINITY && fVar49 >= INFINITY) {
    fVar50 = fVar44;
  }
  fVar49 = *(float *)(param_1 + 0x1c8);
  *(float *)(param_1 + 0x1b0) = fVar50;
  fVar44 = fVar89;
  if (!NAN(fVar89)) {
    fVar44 = 1e+24;
  }
  if (fVar89 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar45 = ABS(fVar44);
  fVar96 = fVar36;
  if (fVar45 < INFINITY) {
    fVar96 = fVar44;
  }
  if (fVar45 != INFINITY && fVar45 >= INFINITY) {
    fVar96 = fVar44;
  }
  fVar45 = *(float *)(param_1 + 0x1bc);
  *(float *)(param_1 + 0x1b4) = fVar96;
  fVar44 = fVar45;
  if (!NAN(fVar45)) {
    fVar44 = fVar80;
  }
  if (fVar45 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar52 = ABS(fVar44);
  fVar98 = fVar36;
  if (fVar52 < INFINITY) {
    fVar98 = fVar44;
  }
  if (fVar52 != INFINITY && fVar52 >= INFINITY) {
    fVar98 = fVar44;
  }
  *(float *)(param_1 + 0x1bc) = fVar98;
  fVar44 = fVar95;
  if (!NAN(fVar95)) {
    fVar44 = 1.0;
  }
  if (fVar95 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar53 = ABS(fVar44);
  fVar52 = fVar36;
  if (fVar53 < INFINITY) {
    fVar52 = fVar44;
  }
  if (fVar53 != INFINITY && fVar53 >= INFINITY) {
    fVar52 = fVar44;
  }
  *(float *)(param_1 + 0x1c0) = fVar52;
  fVar44 = fVar92;
  if (!NAN(fVar92)) {
    fVar44 = fVar90;
  }
  if (fVar92 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar53 = ABS(fVar44);
  fVar54 = *(float *)(param_1 + 0x1cc);
  fVar90 = fVar36;
  if (fVar53 < INFINITY) {
    fVar90 = fVar44;
  }
  if (fVar53 != INFINITY && fVar53 >= INFINITY) {
    fVar90 = fVar44;
  }
  *(float *)(param_1 + 0x1c4) = fVar90;
  fVar44 = fVar49;
  if (!NAN(fVar49)) {
    fVar44 = 1.0;
  }
  if (fVar49 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar94 = ABS(fVar44);
  fVar53 = fVar36;
  if (fVar94 < INFINITY) {
    fVar53 = fVar44;
  }
  if (fVar94 != INFINITY && fVar94 >= INFINITY) {
    fVar53 = fVar44;
  }
  *(float *)(param_1 + 0x1c8) = fVar53;
  fVar44 = fVar54;
  if (!NAN(fVar54)) {
    fVar44 = fVar80;
  }
  if (fVar54 <= 0.0) {
    fVar44 = fVar36;
  }
  fVar80 = ABS(fVar44);
  if (fVar80 < INFINITY) {
    fVar36 = fVar44;
  }
  if (fVar80 != INFINITY && fVar80 >= INFINITY) {
    fVar36 = fVar44;
  }
  *(float *)(param_1 + 0x1cc) = fVar36;
  auVar104 = FloatVectorCompareEqual(auVar111,auVar113,2);
  auVar105 = FloatVectorCompareEqual(auVar2,auVar114,2);
  auVar102._8_8_ = ~auVar104._8_8_;
  auVar102._0_8_ = ~auVar104._0_8_;
  auVar106._8_8_ = ~auVar105._8_8_;
  auVar106._0_8_ = ~auVar105._0_8_;
  auVar103._8_8_ = VectorCopyNarrow(auVar102,4);
  auVar103._0_8_ = VectorCopyNarrow(auVar106,4);
  uVar100 = VectorCopyNarrow(auVar103,2);
  return (((((((((((((((((((((uVar99 & 1) == 0 && (uVar99 & 0x100) == 0) && (uVar99 & 0x10000) == 0)
                          && (uVar99 & 0x1000000) == 0) && (uVar99 & 0x100000000) == 0) &&
                        (uVar99 & 0x10000000000) == 0) && (uVar99 & 0x1000000000000) == 0) &&
                      (uVar99 & 0x100000000000000) == 0) && (uVar100 & 1) == 0) &&
                    (uVar100 & 0x100) == 0) && (uVar100 & 0x10000) == 0) &&
                  (uVar100 & 0x1000000) == 0) && (uVar100 & 0x100000000) == 0) &&
                (uVar100 & 0x10000000000) == 0) && (uVar100 & 0x1000000000000) == 0) &&
              (uVar100 & 0x100000000000000) == 0) && fVar85 == fVar86) &&
            (fVar74 == fVar88 && fVar75 == fVar73)) &&
           ((fVar77 == fVar69 && fVar55 == fVar39) && (fVar38 == fVar83 && fVar37 == fVar71))) &&
          (((fVar46 == fVar51 && fVar67 == fVar76) && (fVar56 == fVar81 && fVar97 == fVar57)) &&
          ((fVar87 == fVar59 && fVar91 == fVar58) && (fVar48 == fVar61 && fVar60 == fVar63)))) &&
         ((((fVar62 == fVar65 && fVar64 == fVar41) && (fVar47 == fVar93 && fVar43 == fVar42)) &&
          ((fVar40 == fVar50 && fVar89 == fVar96) && (fVar45 == fVar98 && fVar95 == fVar52))) &&
         (((fVar92 == fVar90 && fVar49 == fVar53) && (fVar54 == fVar36 && uVar23 == uVar31)) &&
         ((uVar29 == uVar30 && uVar19 == uVar5) && (uVar10 == uVar6 && iVar20 == iVar14))))) &
         (((iVar18 == iVar8 && uVar21 == uVar11) && (uVar12 == uVar7 && uVar32 == uVar33)) &&
         ((uVar15 == uVar25 && uVar22 == uVar17) && (uVar27 < 0x3e9 && uVar26 < 0x65))) &
         (uVar9 < 0x65 && uVar24 < 0x42) & uVar16 < 0x42 & bVar28;
}


// =========================================================================
// Function: TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE
// Entry: 0x71aa61c0 | Size: 9360 bytes
// =========================================================================

void TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined **ppuStack_384;
  undefined **ppuStack_380;
  undefined **ppuStack_37c;
  undefined **ppuStack_378;
  undefined **ppuStack_374;
  undefined **ppuStack_370;
  undefined **ppuStack_36c;
  undefined **ppuStack_368;
  undefined **ppuStack_364;
  undefined **ppuStack_360;
  undefined **ppuStack_35c;
  undefined **ppuStack_358;
  undefined **ppuStack_354;
  undefined **ppuStack_350;
  undefined **ppuStack_34c;
  undefined **ppuStack_348;
  undefined4 uStack_344;
  undefined *apuStack_340 [8];
  undefined4 uStack_320;
  undefined *apuStack_31c [8];
  undefined4 uStack_2fc;
  undefined *apuStack_2f8 [8];
  double dStack_2d8;
  undefined *apuStack_2d0 [8];
  double dStack_2b0;
  undefined *apuStack_2a8 [8];
  double dStack_288;
  undefined *apuStack_280 [8];
  double dStack_260;
  undefined *apuStack_258 [8];
  double dStack_238;
  undefined *apuStack_230 [8];
  double dStack_210;
  undefined *apuStack_208 [8];
  double dStack_1e8;
  undefined *apuStack_1e0 [8];
  double dStack_1c0;
  undefined *apuStack_1b8 [8];
  double dStack_198;
  undefined *apuStack_190 [8];
  double dStack_170;
  undefined *apuStack_168 [8];
  double dStack_148;
  undefined *apuStack_140 [8];
  double dStack_120;
  undefined *apuStack_118 [8];
  double dStack_f8;
  undefined *apuStack_f0 [8];
  double dStack_d0;
  undefined *apuStack_c8 [8];
  double dStack_a8;
  byte abStack_9c [4];
  uint uStack_98;
  uint uStack_94;
  undefined *apuStack_90 [8];
  double dStack_70;
  undefined *apuStack_68 [8];
  double dStack_48;
  byte abStack_40 [4];
  uint uStack_3c;
  uint uStack_38;
  
  thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj();
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3StereoContentDetectio_70065023,0x2b);
  ppuVar1 = ppuStack_37c;
  ppuVar11 = ppuStack_384;
  uVar12 = (uint)&ppuStack_384 | 1;
  ppuVar5 = ppuStack_37c;
  ppuVar4 = ppuStack_380;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    ppuVar5 = (undefined **)uVar12;
  }
  uVar6 = (int)ppuVar5 + (int)ppuVar4;
  uVar10 = (uint)ppuVar5;
  while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
          (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
         (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
    uVar10 = uVar10 + 1;
    ppuVar4 = (undefined **)(uVar6 - uVar10);
  }
  if (((uint)ppuVar11 & 1) != 0) {
    thunk_qNQrlu(ppuVar1);
  }
  if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
    *(undefined1 *)(param_1 + 0x1d4) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3AntiHowlingMinimizati_7007153f,0x2c);
  ppuVar1 = ppuStack_37c;
  ppuVar11 = ppuStack_384;
  ppuVar5 = ppuStack_37c;
  ppuVar4 = ppuStack_380;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    ppuVar5 = (undefined **)uVar12;
  }
  uVar6 = (int)ppuVar5 + (int)ppuVar4;
  uVar10 = (uint)ppuVar5;
  while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
          (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
         (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
    uVar10 = uVar10 + 1;
    ppuVar4 = (undefined **)(uVar6 - uVar10);
  }
  if (((uint)ppuVar11 & 1) != 0) {
    thunk_qNQrlu(ppuVar1);
  }
  if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
    *(undefined4 *)(param_1 + 0x1c4) = 0x41c80000;
    *(undefined4 *)(param_1 + 0x1c8) = 0x3c23d70a;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3UseShortConfigChangeD_70062e0d,0x27);
  ppuVar1 = ppuStack_37c;
  ppuVar11 = ppuStack_384;
  ppuVar5 = ppuStack_37c;
  ppuVar4 = ppuStack_380;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    ppuVar5 = (undefined **)uVar12;
  }
  uVar6 = (int)ppuVar5 + (int)ppuVar4;
  uVar10 = (uint)ppuVar5;
  while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
          (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
         (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
    uVar10 = uVar10 + 1;
    ppuVar4 = (undefined **)(uVar6 - uVar10);
  }
  if (((uint)ppuVar11 & 1) != 0) {
    thunk_qNQrlu(ppuVar1);
  }
  if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
    *(undefined4 *)(param_1 + 0x9c) = 10;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3UseZeroInitialStateDu_700638a8,0x26);
  ppuVar1 = ppuStack_37c;
  ppuVar11 = ppuStack_384;
  ppuVar5 = ppuStack_37c;
  ppuVar4 = ppuStack_380;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    ppuVar5 = (undefined **)uVar12;
  }
  uVar6 = (int)ppuVar5 + (int)ppuVar4;
  uVar10 = (uint)ppuVar5;
  while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
          (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
         (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
    uVar10 = uVar10 + 1;
    ppuVar4 = (undefined **)(uVar6 - uVar10);
  }
  if (((uint)ppuVar11 & 1) != 0) {
    thunk_qNQrlu(ppuVar1);
  }
  if ((uVar8 == uVar6) || ((undefined **)uVar8 != ppuVar5)) {
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3UseDot1SecondsInitial_7006610e,0x2d);
    ppuVar1 = ppuStack_37c;
    ppuVar11 = ppuStack_384;
    ppuVar5 = ppuStack_37c;
    ppuVar4 = ppuStack_380;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
      ppuVar5 = (undefined **)uVar12;
    }
    uVar6 = (int)ppuVar5 + (int)ppuVar4;
    uVar10 = (uint)ppuVar5;
    while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
            (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
           (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
      uVar10 = uVar10 + 1;
      ppuVar4 = (undefined **)(uVar6 - uVar10);
    }
    if (((uint)ppuVar11 & 1) != 0) {
      thunk_qNQrlu(ppuVar1);
    }
    if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
      uVar13 = 0x3dcccccd;
      goto LAB_71aa692c;
    }
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3UseDot2SecondsInitial_7006b4f1,0x2d);
    ppuVar1 = ppuStack_37c;
    ppuVar11 = ppuStack_384;
    ppuVar5 = ppuStack_37c;
    ppuVar4 = ppuStack_380;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
      ppuVar5 = (undefined **)uVar12;
    }
    uVar6 = (int)ppuVar5 + (int)ppuVar4;
    uVar10 = (uint)ppuVar5;
    while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
            (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
           (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
      uVar10 = uVar10 + 1;
      ppuVar4 = (undefined **)(uVar6 - uVar10);
    }
    if (((uint)ppuVar11 & 1) != 0) {
      thunk_qNQrlu(ppuVar1);
    }
    if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
      uVar13 = 0x3e4ccccd;
      goto LAB_71aa692c;
    }
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3UseDot3SecondsInitial_70061733,0x2d);
    ppuVar1 = ppuStack_37c;
    ppuVar11 = ppuStack_384;
    ppuVar5 = ppuStack_37c;
    ppuVar4 = ppuStack_380;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
      ppuVar5 = (undefined **)uVar12;
    }
    uVar6 = (int)ppuVar5 + (int)ppuVar4;
    uVar10 = (uint)ppuVar5;
    while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
            (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
           (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
      uVar10 = uVar10 + 1;
      ppuVar4 = (undefined **)(uVar6 - uVar10);
    }
    if (((uint)ppuVar11 & 1) != 0) {
      thunk_qNQrlu(ppuVar1);
    }
    if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
      uVar13 = 0x3e99999a;
      goto LAB_71aa692c;
    }
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3UseDot6SecondsInitial_7006e9e5,0x2d);
    ppuVar1 = ppuStack_37c;
    ppuVar11 = ppuStack_384;
    ppuVar5 = ppuStack_37c;
    ppuVar4 = ppuStack_380;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
      ppuVar5 = (undefined **)uVar12;
    }
    uVar6 = (int)ppuVar5 + (int)ppuVar4;
    uVar10 = (uint)ppuVar5;
    while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
            (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
           (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
      uVar10 = uVar10 + 1;
      ppuVar4 = (undefined **)(uVar6 - uVar10);
    }
    if (((uint)ppuVar11 & 1) != 0) {
      thunk_qNQrlu(ppuVar1);
    }
    if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
      uVar13 = 0x3f19999a;
      goto LAB_71aa692c;
    }
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3UseDot9SecondsInitial_7006504f,0x2d);
    ppuVar1 = ppuStack_37c;
    ppuVar11 = ppuStack_384;
    ppuVar5 = ppuStack_37c;
    ppuVar4 = ppuStack_380;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
      ppuVar5 = (undefined **)uVar12;
    }
    uVar6 = (int)ppuVar5 + (int)ppuVar4;
    uVar10 = (uint)ppuVar5;
    while (((uVar8 = uVar6, 6 < (int)ppuVar4 &&
            (uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6), uVar10 != 0)) &&
           (iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7), uVar8 = uVar10, iVar2 != 0))) {
      uVar10 = uVar10 + 1;
      ppuVar4 = (undefined **)(uVar6 - uVar10);
    }
    if (((uint)ppuVar11 & 1) != 0) {
      thunk_qNQrlu(ppuVar1);
    }
    if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
      uVar13 = 0x3f666666;
      goto LAB_71aa692c;
    }
    iVar2 = thunk_ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
                      (s_WebRTC_Aec3Use1Dot2SecondsInitia_70067b71,0x2e);
    if (iVar2 != 0) {
      uVar13 = 0x3f99999a;
      goto LAB_71aa692c;
    }
    iVar2 = thunk_ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
                      (s_WebRTC_Aec3Use1Dot6SecondsInitia_70062e35,0x2e);
    if (iVar2 != 0) {
      uVar13 = 0x3fcccccd;
      goto LAB_71aa692c;
    }
    iVar2 = thunk_ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
                      (s_WebRTC_Aec3Use2Dot0SecondsInitia_7006a700,0x2e);
    if (iVar2 != 0) {
      uVar13 = 0x40000000;
      goto LAB_71aa692c;
    }
  }
  else {
    uVar13 = 0;
LAB_71aa692c:
    *(undefined4 *)(param_1 + 0xa0) = uVar13;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3HighPassFilterEchoRef_70062e64,0x26);
  ppuVar1 = ppuStack_37c;
  ppuVar11 = ppuStack_384;
  ppuVar5 = ppuStack_37c;
  ppuVar4 = ppuStack_380;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    ppuVar5 = (undefined **)uVar12;
  }
  uVar6 = (int)ppuVar5 + (int)ppuVar4;
  uVar10 = (uint)ppuVar5;
  while (uVar8 = uVar6, 6 < (int)ppuVar4) {
    uVar10 = imp_memchr(uVar10,0x45,(int)ppuVar4 - 6);
    if (uVar10 == 0) break;
    iVar2 = imp_memcmp(uVar10,s_Enabled_7006820b,7);
    uVar8 = uVar10;
    if (iVar2 == 0) break;
    uVar10 = uVar10 + 1;
    ppuVar4 = (undefined **)(uVar6 - uVar10);
  }
  if (((uint)ppuVar11 & 1) != 0) {
    thunk_qNQrlu(ppuVar1);
  }
  if ((uVar8 != uVar6) && ((undefined **)uVar8 == ppuVar5)) {
    *(undefined1 *)(param_1 + 0xab) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EchoSaturationDetecti_700682bd,0x2c);
  ppuVar4 = ppuStack_37c;
  ppuVar11 = ppuStack_37c;
  if (((byte)ppuStack_384 & 1) == 0) {
    ppuStack_380 = (undefined **)(uint)((byte)ppuStack_384 >> 1);
    ppuVar11 = (undefined **)uVar12;
  }
  uVar10 = (int)ppuVar11 + (int)ppuStack_380;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuStack_380 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuStack_380 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuStack_380 = (undefined **)(uVar10 - uVar12);
  }
  if (((byte)ppuStack_384 & 1) != 0) {
    thunk_qNQrlu(ppuVar4);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xd4) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_40,s_WebRTC_Aec3UseNearendReverbLen_70070df7,0x1e);
  fVar14 = *(float *)(param_1 + 0xcc);
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_68,s_default_len_70068c4e,0xb);
  dStack_48 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0xd0);
  apuStack_68[0] = &DAT_70b133c0;
  ppuStack_380 = (undefined **)
                 thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
                           (apuStack_90,s_nearend_len_7006bc44,0xb);
  dStack_70 = (double)fVar14;
  uVar12 = uStack_38;
  if ((abStack_40[0] & 1) == 0) {
    uVar12 = (uint)abStack_40 | 1;
    uStack_3c = (uint)(abStack_40[0] >> 1);
  }
  ppuStack_384 = apuStack_68;
  apuStack_90[0] = &DAT_70b133c0;
  thunk_AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
            (&ppuStack_384,2,uVar12,uStack_3c);
  fVar14 = (float)dStack_70;
  if ((fVar14 < 1.0) && (ABS((float)dStack_48) < 1.0)) {
    if (-1.0 < fVar14) {
      *(float *)(param_1 + 0xcc) = (float)dStack_48;
      *(float *)(param_1 + 0xd0) = fVar14;
    }
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3ConservativeTailFreqR_7006723c,0x27);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xd7) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3ConservativeTailFreqR_7006723c,0x27);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 7 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x44,(int)ppuVar4 - 7), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Disabled_70067bd3,8), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xd7) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3ShortHeadroomKillSwit_70064286,0x22);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x14) = 0x80;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3ClampInstQualityToZer_70061e50,0x2b);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3ClampInstQualityToOne_7006494d,0x2a);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3OnsetDetectionKillSwi_7006ea13,0x23);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceRenderDelayEst_7006254c,0x31);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined2 *)(param_1 + 0x38) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceCaptureDelayEs_70067ba0,0x32);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined2 *)(param_1 + 0x44) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceCaptureDelayEs_700638cf,0x3f);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3RenderDelayEstimation_7006a0be,0x41);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3SensitiveDominantNear_7006f1c5,0x2d);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 == uVar10) || ((undefined **)uVar6 != ppuVar11)) {
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3VerySensitiveDominant_70062e8b,0x31);
    ppuVar5 = ppuStack_37c;
    ppuVar1 = ppuStack_384;
    ppuVar4 = ppuStack_380;
    ppuVar11 = ppuStack_37c;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    }
    uVar10 = (int)ppuVar11 + (int)ppuVar4;
    uVar12 = (uint)ppuVar11;
    while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
            (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
           (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
      uVar12 = uVar12 + 1;
      ppuVar4 = (undefined **)(uVar10 - uVar12);
    }
    if (((uint)ppuVar1 & 1) != 0) {
      thunk_qNQrlu(ppuVar5);
    }
    if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
      uVar13 = 0x3f400000;
      goto LAB_71aa74ac;
    }
  }
  else {
    uVar13 = 0x3f000000;
LAB_71aa74ac:
    *(undefined4 *)(param_1 + 0x184) = uVar13;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3TransparentAntiHowlin_7006bc50,0x25);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceMoreTransparen_70062ebd,0x37);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x130) = 0x3ecccccd;
    *(undefined4 *)(param_1 + 0x134) = 0x3f000000;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceMoreTransparen_7006f1f3,0x38);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x150) = 0x3fa51eb8;
    *(undefined4 *)(param_1 + 0x154) = 0x3fa66666;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceMoreTransparen_70061e7c,0x39);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x13c) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x140) = 0x3ecccccd;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceMoreTransparen_7007065c,0x3a);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x15c) = 0x3f8b851f;
    *(undefined4 *)(param_1 + 0x160) = 0x3f8ccccd;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceRapidlyAdjusti_7006570f,0x39);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x148) = 0x40200000;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceRapidlyAdjusti_70062ef5,0x3a);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x168) = 0x40200000;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceSlowlyAdjustin_7006613c,0x38);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x14c) = 0x3e4ccccd;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceSlowlyAdjustin_70065749,0x39);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined4 *)(param_1 + 0x16c) = 0x3e4ccccd;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceConservativeHf_7006390f,0x2b);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceStationarityPr_7006bc76,0x28);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceStationarityPr_7006a100,0x2e);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3EnforceLowActiveRende_70070697,0x26);
  ppuVar5 = ppuStack_37c;
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuVar5);
  }
  if ((uVar6 == uVar10) || ((undefined **)uVar6 != ppuVar11)) {
    thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
              (&ppuStack_384,s_WebRTC_Aec3EnforceVeryLowActiveR_70065783,0x2a);
    ppuVar5 = ppuStack_37c;
    ppuVar1 = ppuStack_384;
    ppuVar4 = ppuStack_380;
    ppuVar11 = ppuStack_37c;
    if (((uint)ppuStack_384 & 1) == 0) {
      ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
      ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
    }
    uVar10 = (int)ppuVar11 + (int)ppuVar4;
    uVar12 = (uint)ppuVar11;
    while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
            (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
           (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
      uVar12 = uVar12 + 1;
      ppuVar4 = (undefined **)(uVar10 - uVar12);
    }
    if (((uint)ppuVar1 & 1) != 0) {
      thunk_qNQrlu(ppuVar5);
    }
    if ((uVar6 == uVar10) || ((undefined **)uVar6 != ppuVar11)) goto LAB_71aa7f4c;
    uVar13 = 0x41f00000;
  }
  else {
    uVar13 = 0x42480000;
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar13;
LAB_71aa7f4c:
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (&ppuStack_384,s_WebRTC_Aec3NonlinearModeReverbKi_70070e16,0x28);
  ppuVar1 = ppuStack_384;
  ppuVar4 = ppuStack_380;
  ppuVar11 = ppuStack_37c;
  if (((uint)ppuStack_384 & 1) == 0) {
    ppuVar11 = (undefined **)((uint)&ppuStack_384 | 1);
    ppuVar4 = (undefined **)((uint)ppuStack_384 >> 1 & 0x7f);
  }
  uVar10 = (int)ppuVar11 + (int)ppuVar4;
  uVar12 = (uint)ppuVar11;
  while (((uVar6 = uVar10, 6 < (int)ppuVar4 &&
          (uVar12 = imp_memchr(uVar12,0x45,(int)ppuVar4 - 6), uVar12 != 0)) &&
         (iVar2 = imp_memcmp(uVar12,s_Enabled_7006820b,7), uVar6 = uVar12, iVar2 != 0))) {
    uVar12 = uVar12 + 1;
    ppuVar4 = (undefined **)(uVar10 - uVar12);
  }
  if (((uint)ppuVar1 & 1) != 0) {
    thunk_qNQrlu(ppuStack_37c);
  }
  if ((uVar6 != uVar10) && ((undefined **)uVar6 == ppuVar11)) {
    *(undefined1 *)(param_1 + 0x124) = 0;
  }
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_9c,s_WebRTC_Aec3SuppressorTuningOverr_7006fbad,0x23);
  fVar14 = *(float *)(param_1 + 0x150);
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_c8,s_nearend_tuning_mask_lf_enr_trans_70070e3f,0x26);
  dStack_a8 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x154);
  apuStack_c8[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_f0,s_nearend_tuning_mask_lf_enr_suppr_70064978,0x23);
  dStack_d0 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x15c);
  apuStack_f0[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_118,s_nearend_tuning_mask_hf_enr_trans_7006d9c0,0x26);
  dStack_f8 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x160);
  apuStack_118[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_140,s_nearend_tuning_mask_hf_enr_suppr_7006cb44,0x23);
  dStack_120 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x168);
  apuStack_140[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_168,s_nearend_tuning_max_inc_factor_7006bc9f,0x1d);
  dStack_148 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x16c);
  apuStack_168[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_190,s_nearend_tuning_max_dec_factor_lf_7006d392,0x20);
  dStack_170 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x130);
  apuStack_190[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_1b8,s_normal_tuning_mask_lf_enr_transp_7006507d,0x25);
  dStack_198 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x134);
  apuStack_1b8[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_1e0,s_normal_tuning_mask_lf_enr_suppre_7006fbd1,0x22);
  dStack_1c0 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x13c);
  apuStack_1e0[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_208,s_normal_tuning_mask_hf_enr_transp_7006a72f,0x25);
  dStack_1e8 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x140);
  apuStack_208[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_230,s_normal_tuning_mask_hf_enr_suppre_7006499c,0x22);
  dStack_210 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x148);
  apuStack_230[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_258,s_normal_tuning_max_inc_factor_70067264,0x1c);
  dStack_238 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x14c);
  apuStack_258[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_280,s_normal_tuning_max_dec_factor_lf_7006cb68,0x1f);
  dStack_260 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x184);
  apuStack_280[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_2a8,s_dominant_nearend_detection_enr_t_70067281,0x28);
  dStack_288 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x188);
  apuStack_2a8[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_2d0,s_dominant_nearend_detection_enr_e_7007156c,0x2d);
  dStack_2b0 = (double)fVar14;
  fVar14 = *(float *)(param_1 + 0x18c);
  apuStack_2d0[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_2f8,s_dominant_nearend_detection_snr_t_700682ea,0x28);
  dStack_2d8 = (double)fVar14;
  puVar3 = (undefined4 *)(param_1 + 400);
  uVar13 = *puVar3;
  apuStack_2f8[0] = &DAT_70b133c0;
  thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
            (apuStack_31c,s_dominant_nearend_detection_hold__70061761,0x28);
  puVar9 = (undefined4 *)(param_1 + 0x194);
  uVar7 = *puVar9;
  apuStack_31c[0] = &DAT_70b133d8;
  uStack_2fc = uVar13;
  uStack_344 = thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
                         (apuStack_340,s_dominant_nearend_detection_trigg_7006257e,0x2c);
  ppuStack_358 = apuStack_280;
  ppuStack_35c = apuStack_258;
  ppuStack_360 = apuStack_230;
  ppuStack_364 = apuStack_208;
  ppuStack_368 = apuStack_1e0;
  ppuStack_36c = apuStack_1b8;
  ppuStack_370 = apuStack_190;
  ppuStack_374 = apuStack_168;
  ppuStack_378 = apuStack_140;
  ppuStack_37c = apuStack_118;
  ppuStack_380 = apuStack_f0;
  ppuStack_384 = apuStack_c8;
  uVar12 = uStack_94;
  if ((abStack_9c[0] & 1) == 0) {
    uVar12 = (uint)abStack_9c | 1;
    uStack_98 = (uint)(abStack_9c[0] >> 1);
  }
  ppuStack_354 = apuStack_2a8;
  ppuStack_350 = apuStack_2d0;
  ppuStack_34c = apuStack_2f8;
  ppuStack_348 = apuStack_31c;
  apuStack_340[0] = &DAT_70b133d8;
  uStack_320 = uVar7;
  thunk_AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
            (&ppuStack_384,0x11,uVar12,uStack_98);
  *(float *)(param_1 + 0x150) = (float)dStack_a8;
  *(float *)(param_1 + 0x154) = (float)dStack_d0;
  *(float *)(param_1 + 0x15c) = (float)dStack_f8;
  *(float *)(param_1 + 0x160) = (float)dStack_120;
  *(float *)(param_1 + 0x168) = (float)dStack_148;
  *(float *)(param_1 + 0x16c) = (float)dStack_170;
  *(float *)(param_1 + 0x130) = (float)dStack_198;
  *(float *)(param_1 + 0x134) = (float)dStack_1c0;
  *(float *)(param_1 + 0x13c) = (float)dStack_1e8;
  *puVar3 = uStack_2fc;
  *puVar9 = uStack_320;
  *(float *)(param_1 + 0x148) = (float)dStack_238;
  *(float *)(param_1 + 0x140) = (float)dStack_210;
  *(float *)(param_1 + 0x184) = (float)dStack_288;
  *(float *)(param_1 + 0x14c) = (float)dStack_260;
  *(float *)(param_1 + 0x188) = (float)dStack_2b0;
  *(float *)(param_1 + 0x18c) = (float)dStack_2d8;
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNearendLfMa_70068313,0x35,
               (float *)(param_1 + 0x150));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNearendLfMa_7006f22c,0x32,
               (float *)(param_1 + 0x154));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNearendHfMa_700642a9,0x35,
               (float *)(param_1 + 0x15c));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNearendHfMa_7006393b,0x32,
               (float *)(param_1 + 0x160));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNearendMaxI_7006f25f,0x30,
               (float *)(param_1 + 0x168));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNearendMaxD_7006e0f9,0x32,
               (float *)(param_1 + 0x16c));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNormalLfMas_70062f30,0x34,
               (float *)(param_1 + 0x130));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNormalLfMas_700672aa,0x31,
               (float *)(param_1 + 0x134));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNormalHfMas_7007159a,0x34,
               (float *)(param_1 + 0x13c));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNormalHfMas_7006f290,0x31,
               (float *)(param_1 + 0x140));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNormalMaxIn_7006b51f,0x2f,
               (float *)(param_1 + 0x148));
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorNormalMaxDe_7006e12c,0x31,
               (float *)(param_1 + 0x14c));
  FUN_71aa8988(0x42c80000,s_WebRTC_Aec3SuppressorDominantNea_70068c5a,0x38,
               (float *)(param_1 + 0x184));
  FUN_71aa8988(0x42c80000,s_WebRTC_Aec3SuppressorDominantNea_7006cb88,0x3c,
               (float *)(param_1 + 0x188));
  FUN_71aa8988(0x42c80000,s_WebRTC_Aec3SuppressorDominantNea_7006d3b3,0x38,
               (float *)(param_1 + 0x18c));
  FUN_71aa8b14(s_WebRTC_Aec3SuppressorDominantNea_700725f4,0x38,1000,puVar3);
  FUN_71aa8b14(s_WebRTC_Aec3SuppressorDominantNea_7006b54f,0x3c,1000,puVar9);
  FUN_71aa8988(0x41200000,s_WebRTC_Aec3SuppressorAntiHowling_70066175,0x2c,param_1 + 0x1c8);
  FUN_71aa8988(0x3f800000,s_WebRTC_Aec3DelayEstimateSmoothin_7006e15e,0x29,param_1 + 0x20);
  FUN_71aa8988(0x3f800000,s_WebRTC_Aec3DelayEstimateSmoothin_7006396e,0x33,param_1 + 0x24);
  ppuStack_384 = *(undefined ***)(param_1 + 4);
  FUN_71aa8b14(s_WebRTC_Aec3BufferingMaxAllowedEx_7006cbc5,0x38,0x14,&ppuStack_384);
  *(undefined ***)(param_1 + 4) = ppuStack_384;
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_340);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_31c);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_2f8);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_2d0);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_2a8);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_280);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_258);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_230);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_208);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_1e0);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_1b8);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_190);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_168);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_140);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_118);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_f0);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_c8);
  if ((abStack_9c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_94);
  }
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_90);
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_68);
  if ((abStack_40[0] & 1) != 0) {
    thunk_qNQrlu(uStack_38);
  }
  return;
}


// =========================================================================
// Function: FUN_71aa8988
// Entry: 0x71aa8988 | Size: 324 bytes
// =========================================================================

void FUN_71aa8988(float param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 uStack_6c;
  undefined *apuStack_68 [8];
  double dStack_48;
  byte abStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = param_2;
  uStack_2c = param_3;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_3c,param_2);
  fVar3 = *param_4;
  uStack_6c = thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
                        (apuStack_68,&DAT_70064a63,0);
  dStack_48 = (double)fVar3;
  apuStack_68[0] = &DAT_70b133c0;
  uVar2 = uStack_34;
  if ((abStack_3c[0] & 1) == 0) {
    uVar2 = (uint)abStack_3c | 1;
    uStack_38 = (uint)(abStack_3c[0] >> 1);
  }
  thunk_AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
            (&uStack_6c,1,uVar2,uStack_38);
  fVar3 = (float)dStack_48;
  if (((0.0 <= fVar3) && (fVar3 <= param_1)) && (*param_4 != fVar3)) {
    iVar1 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
    if (iVar1 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_7009605f,s_____webrtc_apm_src_webrtc_module_70070e66,0x1b1,&DAT_7006a12f,
                 &uStack_30,s_changing_AEC3_parameter_value_fr_70066878,(double)*param_4,
                 &DAT_7006c352);
    }
    *param_4 = fVar3;
  }
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_68);
  if ((abStack_3c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  return;
}


// =========================================================================
// Function: FUN_71aa8b14
// Entry: 0x71aa8b14 | Size: 328 bytes
// =========================================================================

void FUN_71aa8b14(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 uStack_5c;
  undefined *apuStack_58 [8];
  int iStack_38;
  byte abStack_34 [4];
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_1;
  uStack_24 = param_2;
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_34,param_1);
  iVar3 = *param_4;
  uStack_5c = thunk_MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
                        (apuStack_58,&DAT_70064a63,0);
  apuStack_58[0] = &DAT_70b133d8;
  uVar2 = uStack_2c;
  if ((abStack_34[0] & 1) == 0) {
    uVar2 = (uint)abStack_34 | 1;
    uStack_30 = (uint)(abStack_34[0] >> 1);
  }
  iStack_38 = iVar3;
  thunk_AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
            (&uStack_5c,1,uVar2,uStack_30);
  if (-1 < iStack_38) {
    fVar4 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorSignedToFloat(iStack_38,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar4) << 0x1e | (uint)(fVar4 <= fVar5) << 0x1d;
    bVar1 = (byte)(uVar2 >> 0x18);
    if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) &&
       (fVar4 = (float)VectorSignedToFloat(*param_4,(byte)(uVar2 >> 0x16) & 3), fVar5 != fVar4)) {
      iVar3 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
      if (iVar3 == 0) {
        thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                  (&DAT_70096067,s_____webrtc_apm_src_webrtc_module_70070e66,0x251,&DAT_7006a12f,
                   &uStack_28,s_changing_AEC3_parameter_value_fr_70066878,*param_4,&DAT_7006c352,
                   (double)fVar5);
      }
      *param_4 = (int)fVar5;
    }
  }
  thunk_iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(apuStack_58);
  if ((abStack_34[0] & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  return;
}


// =========================================================================
// Function: IaZMqHf_gaItQunDKEesEVddVwwtCFcRRdEpgvRxwYcnxPiknLvAWibKnpFmXYnOWJqEcngnKFfLwaAERNZbINIYwuMmVapSjCiCpHGyazMAehcTloUnW_huNmgzqKJNnFJbPiikVuUCvxSuynyARJexHUhJuWvo_sGlKQoeuqqWsYMeukKfqehTagoa_pbSWsQqWHIPnlVGfPZGGeO_UeOv
// Entry: 0x71aa8ca4 | Size: 324 bytes
// =========================================================================

undefined4 *
IaZMqHf_gaItQunDKEesEVddVwwtCFcRRdEpgvRxwYcnxPiknLvAWibKnpFmXYnOWJqEcngnKFfLwaAERNZbINIYwuMmVapSjCiCpHGyazMAehcTloUnW_huNmgzqKJNnFJbPiikVuUCvxSuynyARJexHUhJuWvo_sGlKQoeuqqWsYMeukKfqehTagoa_pbSWsQqWHIPnlVGfPZGGeO_UeOv
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  
  *param_1 = param_2;
  param_1[1] = param_5;
  param_1[2] = param_6;
  piVar6 = param_1 + 3;
  *piVar6 = 0;
  iStack_3c = thunk_MwhHq(0x280);
  iVar5 = iStack_3c + 0x280;
  iStack_34 = iVar5;
  imp___aeabi_memclr4(iStack_3c,0x280);
  iStack_38 = iVar5;
  FUN_71a7706c(&piStack_30,param_6,&iStack_3c);
  FUN_71aaef7c(param_1 + 4,param_5,&piStack_30);
  piVar3 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    while (piVar2 = piStack_2c, piVar2 != piVar3) {
      piStack_2c = piVar2 + -3;
      if (*piStack_2c != 0) {
        piVar2[-2] = *piStack_2c;
        thunk_qNQrlu();
      }
    }
    piStack_2c = piVar3;
    thunk_qNQrlu(piStack_30);
  }
  if (iStack_3c != 0) {
    iStack_38 = iStack_3c;
    thunk_qNQrlu();
  }
  cVar1 = *(char *)(param_3 + 0xab);
  param_1[7] = param_4;
  if (cVar1 != '\0') {
    iVar5 = thunk_MwhHq(0x10);
    thunk_pVcOMyRTcNgIUiYTKNy_MEsagFJjWds(iVar5,16000,param_6);
    iVar4 = *piVar6;
    *piVar6 = iVar5;
    if (iVar4 != 0) {
      thunk_jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW();
      thunk_qNQrlu();
    }
  }
  return param_1;
}


// =========================================================================
// Function: QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW
// Entry: 0x71aa8e40 | Size: 192 bytes
// =========================================================================

int QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  if (puVar7 != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_1 + 0x14);
    puVar2 = puVar7;
    if (puVar6 != puVar7) {
      do {
        puVar2 = puVar6 + -3;
        piVar5 = (int *)*puVar2;
        if (piVar5 != (int *)0x0) {
          piVar4 = (int *)puVar6[-2];
          piVar1 = piVar5;
          if (piVar4 != piVar5) {
            do {
              piVar1 = piVar4 + -3;
              if (*piVar1 != 0) {
                piVar4[-2] = *piVar1;
                thunk_qNQrlu();
              }
              piVar4 = piVar1;
            } while (piVar1 != piVar5);
            piVar1 = (int *)*puVar2;
          }
          puVar6[-2] = piVar5;
          thunk_qNQrlu(piVar1);
        }
        puVar6 = puVar2;
      } while (puVar2 != puVar7);
      puVar2 = *(undefined4 **)(param_1 + 0x10);
    }
    *(undefined4 **)(param_1 + 0x14) = puVar7;
    thunk_qNQrlu(puVar2);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 != 0) {
    thunk_jEsvQuV_ByPW_OpVN_EkuIPeAfvHVW();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: hewZPWZEZafdpEJClKdCQVlIaOleRfxCiAyLCEupnMIGjFtaZsKaRCdKZUQf_pabSSh
// Entry: 0x71aa8f00 | Size: 344 bytes
// =========================================================================

void hewZPWZEZafdpEJClKdCQVlIaOleRfxCiAyLCEupnMIGjFtaZsKaRCdKZUQf_pabSSh(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_r7;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 4);
  if (iVar9 == *(int *)(param_2 + 0x20)) {
    if (iVar9 != 0) {
      unaff_r7 = *(int *)(param_1 + 8);
    }
    if (iVar9 != 0 && unaff_r7 != 0) {
      iVar7 = 0;
      do {
        iVar5 = 0;
        iVar6 = 0;
        do {
          iVar2 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar2 = *(int *)(param_2 + 0x2c);
          }
          imp___aeabi_memmove4
                    (*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + iVar7 * 0xc) + iVar5),
                     *(undefined4 *)
                      (*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0x1c) * iVar6 * 4 + iVar7 * 4),0x280);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0xc;
        } while (unaff_r7 != iVar6);
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar9);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      thunk_uewvoGyn_IfaxrFyiIrGMVKUqyKpHUAbKYbuDbORuxqCehwIjfSdwe_WdplBwZfkMCGvJ_LNslzlkJooLXNhLmzLXCSu
                (*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
    iVar9 = *(int *)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar9 + 0x14) !=
        (*(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2) * -0x55555555) {
      piVar4 = (int *)(iVar9 + 0x14);
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      puVar3 = (undefined4 *)(*(int *)(iVar9 + 0x18) + *(int *)(iVar9 + 0xc) * 0xc);
      *(undefined4 *)(param_1 + 0x10) = *puVar3;
      *puVar3 = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = puVar3[1];
      puVar3[1] = uVar8;
      uVar8 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = puVar3[2];
      puVar3[2] = uVar8;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = *piVar4 + 1;
      iVar5 = *(int *)(iVar9 + 0xc) + 1;
      iVar7 = 0;
      if (iVar5 + (*(int *)(iVar9 + 0x1c) - *(int *)(iVar9 + 0x18) >> 2) * 0x55555555 != 0) {
        iVar7 = iVar5;
      }
      *(int *)(iVar9 + 0xc) = iVar7;
    }
  }
  return;
}


// =========================================================================
// Function: GuPmsdxezbEkgrrQMfkBYdGXlVYXuBm_ITpnEuGlbQBIxZQhzaRchtjwRqxUsROoJUWpNue_TsHdxsgTlRaQDaJ
// Entry: 0x71aa9060 | Size: 2356 bytes
// =========================================================================

undefined4 *
GuPmsdxezbEkgrrQMfkBYdGXlVYXuBm_ITpnEuGlbQBIxZQhzaRchtjwRqxUsROoJUWpNue_TsHdxsgTlRaQDaJ
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined4 uStack_260;
  undefined4 *puStack_25c;
  int *piStack_258;
  int *piStack_234;
  undefined4 *puStack_22c;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int *piStack_218;
  int *piStack_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  int *piStack_204;
  
  *param_1 = &DAT_70b13364;
  thunk_HzYtWQbJePtdpWJoIHHpOUf_(param_1 + 1);
  thunk_HzYtWQbJePtdpWJoIHHpOUf_(param_1 + 3);
  param_1[5] = 0;
  uVar2 = thunk_MwhHq(1);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(&DAT_7120486c);
  } while (!bVar1);
  DataMemoryBarrier(0xb);
  DAT_7120486c = DAT_7120486c + 1;
  thunk_dweKWzJgHffIolIwVpNgT_OQMpPie(uVar2);
  param_1[6] = uVar2;
  thunk_TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE(param_1 + 7,param_2);
  param_1[0x84] = param_6;
  param_1[0x80] = param_4;
  param_1[0x82] = param_5;
  param_1[0x81] = param_4 / 16000;
  thunk_TXWDPeGRgRHQNAwpnMKehohlaD_CnrYaoplqIuZWZIXZpflnPathE(&piStack_20c,param_2);
  thunk_NhMImtdmoAvkhOhqUKLqRUPqTBryoGKzBaKmUthrGKTzIUoxWUpEpNRwQfYmpfgewpXONIRLxObVxAJcAVGvW
            (param_1 + 0x85,&piStack_20c,param_3,param_1[0x82]);
  iVar3 = param_1[0x178];
  thunk_MKXVTPIjygcugHbgsBvpcjsEYzZuFITtiKkBeOqEwjWydfU
            (param_1 + 0x17a,*(undefined1 *)(iVar3 + 0x1d4),param_1[0x82],
             *(undefined4 *)(iVar3 + 0x1d8),*(undefined4 *)(iVar3 + 0x1dc),
             *(undefined4 *)(iVar3 + 0x1e0));
  piVar7 = param_1 + 0x186;
  *piVar7 = 0;
  thunk_lGluONEecqgKhtEOWAxbXbQQXMSl(param_1 + 0x187,param_1[0x81],param_1[0x84]);
  thunk_FAiqRpguD_WjGYHrbVnYvSyydwowk(param_1 + 0x18c,param_1[0x81],param_1[0x84]);
  param_1[0x191] = 0;
  uVar13 = param_1[0x81];
  uVar2 = param_1[0x82];
  iStack_224 = thunk_MwhHq(0x280);
  iVar3 = iStack_224 + 0x280;
  iStack_21c = iVar3;
  imp___aeabi_memclr4(iStack_224,0x280);
  iStack_220 = iVar3;
  FUN_71a7706c(&piStack_218,uVar2,&iStack_224);
  FUN_71aaef7c(&piStack_20c,uVar13,&piStack_218);
  param_1[0x192] = param_1[0x81];
  *(undefined8 *)(param_1 + 0x194) = 0xa0;
  *(undefined8 *)(param_1 + 0x196) = 0;
  param_1[0x193] = param_1[0x82];
  FUN_71aafe18(param_1 + 0x198,100,&piStack_20c);
  piVar12 = piStack_20c;
  if (piStack_20c != (int *)0x0) {
    while (piVar9 = piStack_208, piVar9 != piVar12) {
      piVar14 = piVar9 + -3;
      piVar10 = (int *)*piVar14;
      piStack_208 = piVar14;
      if (piVar10 != (int *)0x0) {
        piVar8 = (int *)piVar9[-2];
        piVar4 = piVar10;
        if (piVar8 != piVar10) {
          do {
            piVar4 = piVar8 + -3;
            if (*piVar4 != 0) {
              piVar8[-2] = *piVar4;
              thunk_qNQrlu();
            }
            piVar8 = piVar4;
          } while (piVar4 != piVar10);
          piVar4 = (int *)*piVar14;
        }
        piVar9[-2] = (int)piVar10;
        thunk_qNQrlu(piVar4);
      }
    }
    piStack_208 = piVar12;
    thunk_qNQrlu(piStack_20c);
  }
  piVar12 = piStack_218;
  if (piStack_218 != (int *)0x0) {
    while (piVar9 = piStack_214, piVar9 != piVar12) {
      piStack_214 = piVar9 + -3;
      if (*piStack_214 != 0) {
        piVar9[-2] = *piStack_214;
        thunk_qNQrlu();
      }
    }
    piStack_214 = piVar12;
    thunk_qNQrlu(piStack_218);
  }
  if (iStack_224 != 0) {
    iStack_220 = iStack_224;
    thunk_qNQrlu();
  }
  uVar2 = param_1[0x81];
  piVar12 = (int *)param_1[0x82];
  param_1[0x19b] = 0;
  piStack_218 = (int *)thunk_MwhHq(0x280);
  piVar9 = piStack_218 + 0xa0;
  piStack_210 = piVar9;
  imp___aeabi_memclr4(piStack_218,0x280);
  piStack_214 = piVar9;
  FUN_71a7706c(&piStack_20c,piVar12,&piStack_218);
  FUN_71aaef7c(param_1 + 0x19c,uVar2,&piStack_20c);
  piVar9 = piStack_20c;
  piVar10 = piStack_208;
  if (piStack_20c != (int *)0x0) {
    while (piVar14 = piVar10, piVar14 != piVar9) {
      piVar12 = piVar14 + -3;
      piVar10 = piVar12;
      if (*piVar12 != 0) {
        piVar14[-2] = *piVar12;
        thunk_qNQrlu();
      }
    }
    piStack_208 = piVar9;
    thunk_qNQrlu(piStack_20c);
  }
  if (piStack_218 != (int *)0x0) {
    piStack_214 = piStack_218;
    thunk_qNQrlu();
  }
  piVar9 = param_1 + 0x1a2;
  *piVar9 = 0;
  iVar15 = param_1[0x81];
  *(undefined1 *)(param_1 + 0x19f) = 0;
  param_1[0x1a3] = 0;
  iVar3 = param_1[0x82] * iVar15;
  param_1[0x1a4] = 0;
  param_1[0x1a0] = iVar15;
  param_1[0x1a1] = param_1[0x82];
  uVar11 = iVar3 * 0x40;
  if (uVar11 != 0) {
    if (uVar11 < 0x40000000) {
      piVar12 = (int *)(iVar3 * 0x100);
      iVar5 = thunk_MwhHq(piVar12);
      iVar3 = iVar5 + iVar3 * 0x100;
      param_1[0x1a4] = iVar3;
      param_1[0x1a2] = iVar5;
      imp___aeabi_memclr4(iVar5,piVar12);
      param_1[0x1a3] = iVar3;
      goto LAB_71aa9464;
    }
    FUN_71a0103c(piVar9);
LAB_71aa989c:
    FUN_71a0103c(piStack_258);
LAB_71aa98a4:
    FUN_71a9f56c(&piStack_20c);
LAB_71aa98ac:
    FUN_71a0103c(piVar12);
LAB_71aa98b4:
    FUN_71a9f56c(&piStack_218);
    FUN_71aaf54c(uVar11);
    FUN_71a9f4b4(uStack_260);
    FUN_71a9f4b4(puStack_22c);
    FUN_71a9f4b4(puStack_25c);
    if (*piStack_258 != 0) {
      param_1[0x1a9] = *piStack_258;
      thunk_qNQrlu();
    }
    FUN_71aaf4b8(piStack_234);
    if (*piVar9 != 0) {
      param_1[0x1a3] = *piVar9;
      thunk_qNQrlu();
    }
    FUN_71aaf3a8(param_1 + 0x19c);
    piVar12 = (int *)param_1[0x19b];
    param_1[0x19b] = 0;
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))();
    }
    piStack_20c = param_1 + 0x198;
    FUN_71aaf874(&piStack_20c);
    FUN_71aaf5d8(param_1 + 0x191);
    thunk_BqRzmalcICGrikdbwOgPVRKmkouJ(param_1 + 0x18c);
    thunk_pIfiSaBV_mNZoZDNOdRGRymboDI(param_1 + 0x187);
    FUN_71aaf664(piVar7);
    thunk_PaZuWhVugKbNGmPVRoCB_YLgydZarEqyfELcXgTJqrv(param_1 + 0x17a);
    FUN_71a76530(param_1 + 6);
    iVar3 = param_1[5];
    param_1[5] = 0;
    if (iVar3 != 0) {
      thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(iVar3);
      thunk_qNQrlu(iVar3);
    }
                    /* WARNING: Subroutine does not return */
    thunk_NAUpeWJSovvMoxKm_();
  }
LAB_71aa9464:
  piStack_234 = param_1 + 0x1a5;
  *piStack_234 = 0;
  uVar16 = param_1[0x84];
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  iVar3 = uVar16 * iVar15;
  param_1[0x1a6] = iVar15;
  param_1[0x1a7] = uVar16;
  piStack_258 = param_1 + 0x1a8;
  *piStack_258 = 0;
  uVar11 = iVar3 * 0x40;
  if (uVar11 != 0) {
    if (0x3fffffff < uVar11) goto LAB_71aa989c;
    piVar12 = (int *)(iVar3 * 0x100);
    iVar5 = thunk_MwhHq(piVar12);
    uVar11 = iVar5 + iVar3 * 0x100;
    param_1[0x1aa] = uVar11;
    param_1[0x1a8] = iVar5;
    imp___aeabi_memclr4(iVar5,piVar12);
    param_1[0x1a9] = uVar11;
  }
  puStack_25c = param_1 + 0x1ab;
  *puStack_25c = 0;
  param_1[0x1ac] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[0x1ad] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[0x1ae] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[0x1b0] = 0;
  param_1[0x1af] = 0;
  piStack_204 = (int *)0x0;
  piStack_208 = (int *)0x0;
  piStack_20c = (int *)0x0;
  puStack_22c = param_1 + 0x1ae;
  if (uVar16 != 0) {
    if (0x1fffffff < uVar16) goto LAB_71aa98a4;
    piVar12 = (int *)thunk_MwhHq(uVar16 * 8);
    piStack_204 = piVar12 + uVar16 * 2;
    piStack_20c = piVar12;
    imp___aeabi_memclr4(piVar12,uVar16 * 8);
    piStack_208 = piVar12 + uVar16 * 2;
  }
  uStack_260 = FUN_71a9f1cc(param_1 + 0x1b1,iVar15,&piStack_20c);
  if (piStack_20c != (int *)0x0) {
    piStack_208 = piStack_20c;
    thunk_qNQrlu();
  }
  piVar12 = param_1 + 0x1b4;
  *piVar12 = 0;
  thunk_VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW(param_1 + 0x1b5);
  thunk_VUmjwrPsUILWbdSLiVFUMCaCxfidTGBfZpgWaTQZrZW(param_1 + 0x1b7);
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  *(undefined2 *)(param_1 + 0x1bb) = 0;
  thunk_KRMIYixtikqFOG_PaiqhBvhaWSUiTCGVEjbyHucr(param_1 + 0x1b5);
  if (*(int *)(param_1[0x178] + 0x1c) != 0) {
    iVar3 = thunk_MwhHq(0x18);
    thunk_OiEPXjYdhoZEYR_HkOfDQmmpBoYWAVxihRt(iVar3,param_1[0x84],param_1[0x81],0xa0,param_1[0xe]);
    iVar15 = *piVar12;
    *piVar12 = iVar3;
    if (iVar15 != 0) {
      thunk_dexshRSROpBPVAL_JkdEFYpKHeaTfWqG();
      thunk_qNQrlu();
    }
  }
  uVar2 = thunk_MwhHq(0x20);
  thunk_IaZMqHf_gaItQunDKEesEVddVwwtCFcRRdEpgvRxwYcnxPiknLvAWibKnpFmXYnOWJqEcngnKFfLwaAERNZbINIYwuMmVapSjCiCpHGyazMAehcTloUnW_huNmgzqKJNnFJbPiikVuUCvxSuynyARJexHUhJuWvo_sGlKQoeuqqWsYMeukKfqehTagoa_pbSWsQqWHIPnlVGfPZGGeO_UeOv
            (uVar2,param_1[6],param_1[0x178],param_1 + 0x192,param_1[0x81],param_1[0x82]);
  iVar3 = param_1[5];
  param_1[5] = uVar2;
  if (iVar3 != 0) {
    thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(iVar3);
    thunk_qNQrlu(iVar3);
  }
  if (*(char *)(param_1[0x178] + 0xac) == '\0') goto LAB_71aa982c;
  iVar3 = thunk_MwhHq(0x14);
  thunk_lGluONEecqgKhtEOWAxbXbQQXMSl(iVar3,1,param_1[0x84]);
  iVar15 = *piVar7;
  *piVar7 = iVar3;
  if (iVar15 != 0) {
    thunk_pIfiSaBV_mNZoZDNOdRGRymboDI();
    thunk_qNQrlu();
  }
  puVar6 = (undefined4 *)thunk_MwhHq(0x14);
  uVar16 = param_1[0x84];
  uVar11 = 0;
  piVar12 = puVar6 + 2;
  *piVar12 = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *puVar6 = 1;
  puVar6[1] = uVar16;
  if (uVar16 * 0x40 != 0) {
    if (0x3fffffff < uVar16 * 0x40) goto LAB_71aa98ac;
    iVar3 = thunk_MwhHq(uVar16 << 8);
    iVar15 = iVar3 + uVar16 * 0x100;
    puVar6[4] = iVar15;
    puVar6[2] = iVar3;
    imp___aeabi_memclr4(iVar3,uVar16 << 8);
    puVar6[3] = iVar15;
  }
  iStack_224 = 0;
  iVar3 = *piStack_234;
  *piStack_234 = (int)puVar6;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) != 0) {
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 8);
      thunk_qNQrlu();
    }
    thunk_qNQrlu(iVar3);
    uVar16 = param_1[0x84];
  }
  piStack_210 = (int *)0x0;
  piStack_214 = (int *)0x0;
  piStack_218 = (int *)0x0;
  if (uVar16 != 0) {
    if (0x1fffffff < uVar16) goto LAB_71aa98b4;
    piVar12 = (int *)thunk_MwhHq(uVar16 * 8);
    piStack_210 = piVar12 + uVar16 * 2;
    piStack_218 = piVar12;
    imp___aeabi_memclr4(piVar12,uVar16 * 8);
    piStack_214 = piVar12 + uVar16 * 2;
  }
  FUN_71a9f1cc(&piStack_20c,1,&piStack_218);
  piVar12 = (int *)*puStack_22c;
  if (piVar12 != (int *)0x0) {
    piVar9 = (int *)param_1[0x1af];
    piVar7 = piVar12;
    if (piVar9 != piVar12) {
      do {
        piVar7 = piVar9 + -3;
        if (*piVar7 != 0) {
          piVar9[-2] = *piVar7;
          thunk_qNQrlu();
        }
        piVar9 = piVar7;
      } while (piVar7 != piVar12);
      piVar7 = (int *)*puStack_22c;
    }
    param_1[0x1af] = piVar12;
    thunk_qNQrlu(piVar7);
    param_1[0x1ae] = 0;
    param_1[0x1af] = 0;
    param_1[0x1b0] = 0;
  }
  param_1[0x1ae] = piStack_20c;
  param_1[0x1af] = piStack_208;
  param_1[0x1b0] = piStack_204;
  piStack_208 = (int *)0x0;
  piStack_204 = (int *)0x0;
  piStack_20c = (int *)0x0;
  if (piStack_218 != (int *)0x0) {
    piStack_214 = piStack_218;
    thunk_qNQrlu();
  }
LAB_71aa982c:
  thunk_mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI(param_1);
  iVar3 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
  if (iVar3 == 0) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_7009606f,s_____webrtc_apm_src_webrtc_module_70070e66,0x18c1,
               s_AEC3_created_with_sample_rate__700672dc,param_1[0x80],
               s_Hz__num_render_channels__7006685d,param_1[0x82],s___num_capture_channels__70070eb1,
               param_1[0x84]);
  }
  return param_1;
}


// =========================================================================
// Function: mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI
// Entry: 0x71aa9acc | Size: 560 bytes
// =========================================================================

void mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = *(undefined4 *)(param_1 + 0x208);
  if (*(char *)(param_1 + 0x600) == '\0') {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x20c) = uVar2;
  thunk_eXBMJrFIJxumaqqHsweDKAHwolzOBUX_PUP(param_1 + 0x214);
  iVar3 = *(int *)(param_1 + 0x688);
  iVar6 = *(int *)(param_1 + 0x68c);
  *(int *)(param_1 + 0x684) = *(int *)(param_1 + 0x20c);
  iVar9 = *(int *)(param_1 + 0x20c) * *(int *)(param_1 + 0x680);
  uVar1 = iVar6 - iVar3 >> 2;
  uVar8 = iVar9 * 0x40;
  if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
    if (uVar8 < uVar1) {
      iVar6 = iVar3 + iVar9 * 0x100;
      *(int *)(param_1 + 0x68c) = iVar6;
    }
    iVar6 = iVar6 - iVar3;
  }
  else {
    FUN_71a66dde((int *)(param_1 + 0x688),uVar8 - uVar1);
    iVar6 = *(int *)(param_1 + 0x68c) - *(int *)(param_1 + 0x688);
  }
  if (0 < iVar6) {
    imp___aeabi_memclr4();
  }
  uVar2 = thunk_MwhHq(0x14);
  thunk_FAiqRpguD_WjGYHrbVnYvSyydwowk
            (uVar2,*(undefined4 *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x20c));
  iVar6 = *(int *)(param_1 + 0x644);
  *(undefined4 *)(param_1 + 0x644) = uVar2;
  if (iVar6 != 0) {
    thunk_BqRzmalcICGrikdbwOgPVRKmkouJ();
    thunk_qNQrlu();
  }
  uVar2 = thunk_b_RvHDoSQUXTgLheNALosRwKIUkPhquFOVYRRvPrUnnFFloeoLShNgXxvdKxYOCsH
                    (*(undefined4 *)(param_1 + 0x5e0),*(undefined4 *)(param_1 + 0x200),
                     *(undefined4 *)(param_1 + 0x20c),*(undefined4 *)(param_1 + 0x210));
  piVar4 = *(int **)(param_1 + 0x66c);
  *(undefined4 *)(param_1 + 0x66c) = uVar2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))();
  }
  uVar8 = *(uint *)(param_1 + 0x20c);
  uVar2 = *(undefined4 *)(param_1 + 0x204);
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  if (uVar8 != 0) {
    if (0x1fffffff < uVar8) {
      FUN_71a9f56c(&iStack_38);
      if (iStack_38 != 0) {
        iStack_34 = iStack_38;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar6 = uVar8 * 8;
    iVar3 = thunk_MwhHq(iVar6);
    iStack_30 = iVar3 + uVar8 * 8;
    iStack_38 = iVar3;
    imp___aeabi_memclr4(iVar3,iVar6);
    iStack_34 = iVar3 + iVar6;
  }
  FUN_71a9f1cc(&uStack_2c,uVar2,&iStack_38);
  piVar4 = *(int **)(param_1 + 0x6ac);
  if (piVar4 != (int *)0x0) {
    piVar7 = *(int **)(param_1 + 0x6b0);
    piVar5 = piVar4;
    if (piVar7 != piVar4) {
      do {
        piVar5 = piVar7 + -3;
        if (*piVar5 != 0) {
          piVar7[-2] = *piVar5;
          thunk_qNQrlu();
        }
        piVar7 = piVar5;
      } while (piVar5 != piVar4);
      piVar5 = *(int **)(param_1 + 0x6ac);
    }
    *(int **)(param_1 + 0x6b0) = piVar4;
    thunk_qNQrlu(piVar5);
    *(undefined4 *)(param_1 + 0x6ac) = 0;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    *(undefined4 *)(param_1 + 0x6b4) = 0;
  }
  *(undefined4 *)(param_1 + 0x6ac) = uStack_2c;
  *(undefined4 *)(param_1 + 0x6b0) = uStack_28;
  *(undefined4 *)(param_1 + 0x6b4) = uStack_24;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  if (iStack_38 != 0) {
    iStack_34 = iStack_38;
    thunk_qNQrlu();
  }
  return;
}


// =========================================================================
// Function: mLVoQBKxtuYgyyfEotdHdAiWVZlska
// Entry: 0x71aa9d04 | Size: 752 bytes
// =========================================================================

undefined4 * mLVoQBKxtuYgyyfEotdHdAiWVZlska(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_24;
  
  *param_1 = &DAT_70b13364;
  iVar1 = param_1[0x1b4];
  param_1[0x1b4] = 0;
  if (iVar1 != 0) {
    thunk_dexshRSROpBPVAL_JkdEFYpKHeaTfWqG();
    thunk_qNQrlu();
  }
  piVar5 = (int *)param_1[0x1b1];
  if (piVar5 != (int *)0x0) {
    piVar4 = (int *)param_1[0x1b2];
    piVar2 = piVar5;
    if (piVar4 != piVar5) {
      do {
        piVar2 = piVar4 + -3;
        if (*piVar2 != 0) {
          piVar4[-2] = *piVar2;
          thunk_qNQrlu();
        }
        piVar4 = piVar2;
      } while (piVar2 != piVar5);
      piVar2 = (int *)param_1[0x1b1];
    }
    param_1[0x1b2] = piVar5;
    thunk_qNQrlu(piVar2);
  }
  piVar5 = (int *)param_1[0x1ae];
  if (piVar5 != (int *)0x0) {
    piVar4 = (int *)param_1[0x1af];
    piVar2 = piVar5;
    if (piVar4 != piVar5) {
      do {
        piVar2 = piVar4 + -3;
        if (*piVar2 != 0) {
          piVar4[-2] = *piVar2;
          thunk_qNQrlu();
        }
        piVar4 = piVar2;
      } while (piVar2 != piVar5);
      piVar2 = (int *)param_1[0x1ae];
    }
    param_1[0x1af] = piVar5;
    thunk_qNQrlu(piVar2);
  }
  piVar5 = (int *)param_1[0x1ab];
  if (piVar5 != (int *)0x0) {
    piVar4 = (int *)param_1[0x1ac];
    piVar2 = piVar5;
    if (piVar4 != piVar5) {
      do {
        piVar2 = piVar4 + -3;
        if (*piVar2 != 0) {
          piVar4[-2] = *piVar2;
          thunk_qNQrlu();
        }
        piVar4 = piVar2;
      } while (piVar2 != piVar5);
      piVar2 = (int *)param_1[0x1ab];
    }
    param_1[0x1ac] = piVar5;
    thunk_qNQrlu(piVar2);
  }
  if (param_1[0x1a8] != 0) {
    param_1[0x1a9] = param_1[0x1a8];
    thunk_qNQrlu();
  }
  iVar1 = param_1[0x1a5];
  param_1[0x1a5] = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 8);
      thunk_qNQrlu();
    }
    thunk_qNQrlu(iVar1);
  }
  if (param_1[0x1a2] != 0) {
    param_1[0x1a3] = param_1[0x1a2];
    thunk_qNQrlu();
  }
  puVar7 = (undefined4 *)param_1[0x19c];
  if (puVar7 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)param_1[0x19d];
    puVar3 = puVar7;
    if (puVar6 != puVar7) {
      do {
        puVar3 = puVar6 + -3;
        piVar5 = (int *)*puVar3;
        if (piVar5 != (int *)0x0) {
          piVar4 = (int *)puVar6[-2];
          piVar2 = piVar5;
          if (piVar4 != piVar5) {
            do {
              piVar2 = piVar4 + -3;
              if (*piVar2 != 0) {
                piVar4[-2] = *piVar2;
                thunk_qNQrlu();
              }
              piVar4 = piVar2;
            } while (piVar2 != piVar5);
            piVar2 = (int *)*puVar3;
          }
          puVar6[-2] = piVar5;
          thunk_qNQrlu(piVar2);
        }
        puVar6 = puVar3;
      } while (puVar3 != puVar7);
      puVar3 = (undefined4 *)param_1[0x19c];
    }
    param_1[0x19d] = puVar7;
    thunk_qNQrlu(puVar3);
  }
  piVar5 = (int *)param_1[0x19b];
  param_1[0x19b] = 0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
  }
  puStack_24 = param_1 + 0x198;
  FUN_71aaf874(&puStack_24);
  iVar1 = param_1[0x191];
  param_1[0x191] = 0;
  if (iVar1 != 0) {
    thunk_BqRzmalcICGrikdbwOgPVRKmkouJ();
    thunk_qNQrlu();
  }
  thunk_BqRzmalcICGrikdbwOgPVRKmkouJ(param_1 + 0x18c);
  thunk_pIfiSaBV_mNZoZDNOdRGRymboDI(param_1 + 0x187);
  iVar1 = param_1[0x186];
  param_1[0x186] = 0;
  if (iVar1 != 0) {
    thunk_pIfiSaBV_mNZoZDNOdRGRymboDI();
    thunk_qNQrlu();
  }
  iVar1 = param_1[0x17f];
  param_1[0x17f] = 0;
  if (iVar1 != 0) {
    thunk_HDnzFbsJfuZg__SewAdAZbMeUqKGKfRy_RsMdtZpJKyOBiWKoPJoopgXeQ();
    thunk_qNQrlu();
  }
  iVar1 = param_1[6];
  param_1[6] = 0;
  if (iVar1 != 0) {
    thunk_tS_umzWWCiWQRX_wvQPQGsKtMvWrX();
    thunk_qNQrlu();
  }
  iVar1 = param_1[5];
  param_1[5] = 0;
  if (iVar1 != 0) {
    thunk_QIWkYKuVQSW_mofJjEZPNNlieopawfStNFvrHiLWcoGW(iVar1);
    thunk_qNQrlu(iVar1);
  }
  return param_1;
}


// =========================================================================
// Function: JCvCRvsoiIIhSQikFxxPHhZQSAiWwg
// Entry: 0x71aa9ff8 | Size: 28 bytes
// =========================================================================

void JCvCRvsoiIIhSQikFxxPHhZQSAiWwg(undefined4 param_1)

{
  thunk_mLVoQBKxtuYgyyfEotdHdAiWVZlska();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: hTBbuxCTGhOjmMqrVmhtbXlmstVHcvbSDSOZANaqJGqtwbrX_mhmU_odOuBJR
// Entry: 0x71aaa014 | Size: 8 bytes
// =========================================================================

void hTBbuxCTGhOjmMqrVmhtbXlmstVHcvbSDSOZANaqJGqtwbrX_mhmU_odOuBJR(int param_1)

{
  thunk_hewZPWZEZafdpEJClKdCQVlIaOleRfxCiAyLCEupnMIGjFtaZsKaRCdKZUQf_pabSSh
            (*(undefined4 *)(param_1 + 0x14));
  return;
}


// =========================================================================
// Function: jrigGFhEdomHaPJCnQYAGeOFKYBUWueawKAJotUmqeSdqdRxNUvZdREzAFblGy
// Entry: 0x71aaa01c | Size: 156 bytes
// =========================================================================

void jrigGFhEdomHaPJCnQYAGeOFKYBUWueawKAJotUmqeSdqdRxNUvZdREzAFblGy(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar4 = 0;
  iVar2 = *(int *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x67c) = 0;
  if (iVar6 != 0) {
    param_2 = *(uint *)(param_2 + 0xc);
  }
  if (iVar6 != 0 && param_2 != 0) {
    do {
      pfVar3 = *(float **)(*(int *)(iVar2 + 4) + iVar4 * 4);
      if (32700.0 <= ABS(*pfVar3)) {
LAB_71aaa0ac:
        *(undefined1 *)(param_1 + 0x67c) = 1;
        return;
      }
      uVar1 = 1;
      do {
        uVar5 = uVar1;
        pfVar3 = pfVar3 + 1;
        if (param_2 == uVar5) break;
        uVar1 = uVar5 + 1;
      } while (ABS(*pfVar3) < 32700.0);
      if (uVar5 < param_2) goto LAB_71aaa0ac;
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar6);
  }
  return;
}


// =========================================================================
// Function: RhYkjHXWUCWTZeMdOUyCKWvmXOGnpRXocQuNXfkcgaKJvvd_yMlCfOqVcIEwci
// Entry: 0x71aaa0bc | Size: 20 bytes
// =========================================================================

void RhYkjHXWUCWTZeMdOUyCKWvmXOGnpRXocQuNXfkcgaKJvvd_yMlCfOqVcIEwci
               (int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x71aaa0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0,param_3);
  return;
}


// =========================================================================
// Function: C_xPLOeBex_TZXAIpVKQPtbKEKrkIYaJFtMugPhkQGFgTyNHJTYyHmoyvwLFsRHRx
// Entry: 0x71aaa0d0 | Size: 496 bytes
// =========================================================================

void C_xPLOeBex_TZXAIpVKQPtbKEKrkIYaJFtMugPhkQGFgTyNHJTYyHmoyvwLFsRHRx
               (int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (((param_3 != 0) && (*(int *)(param_1 + 0x618) == 0)) &&
     (iVar3 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail(), iVar3 == 0)) {
    thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
              (&DAT_70091039,s_____webrtc_apm_src_webrtc_module_70070e66,0x1b0b,
               s_Trying_to_retrieve_the_linear_AE_700639a2);
  }
  thunk_mrfazkv_lNWwNbbQ_YRUJFvPfcRxQKEhUOyUPEmZE_uUdnZLkGlRR(param_1 + 0x6d4);
  if (*(int *)(*(int *)(param_1 + 0x5e0) + 0x1c) != 0) {
    thunk_XEJujjfjRvljdhPkflmLTPbiepDJNbyejbwrocDPNFADtmbKkBRwfRqVvvAs
              (*(undefined4 *)(param_1 + 0x6d0),param_2);
  }
  thunk_yQcZDmMfugOGhLdWsDTCApLduTzsjN_ZoNFrDpeiUlerCi(param_1);
  iVar7 = param_1 + 0x61c;
  iVar5 = param_1 + 0x698;
  iVar9 = param_1 + 0x630;
  FUN_71aaa4d4(param_3,param_2,param_4,*(undefined1 *)(param_1 + 0x601),
               *(undefined1 *)(param_1 + 0x67c),0,iVar9,*(undefined4 *)(param_1 + 0x618),iVar7,
               *(undefined4 *)(param_1 + 0x66c),*(undefined4 *)(param_1 + 0x694),param_1 + 0x6b8,
               iVar5,param_1 + 0x6c4);
  FUN_71aaa4d4(param_3,param_2,param_4,*(undefined1 *)(param_1 + 0x601),
               *(undefined1 *)(param_1 + 0x67c),1,iVar9,*(undefined4 *)(param_1 + 0x618),iVar7,
               *(undefined4 *)(param_1 + 0x66c),*(undefined4 *)(param_1 + 0x694),param_1 + 0x6b8,
               iVar5,param_1 + 0x6c4);
  uVar4 = *(undefined4 *)(param_1 + 0x694);
  piVar6 = *(int **)(param_1 + 0x66c);
  iVar8 = *(int *)(param_1 + 0x618);
  uVar1 = *(undefined1 *)(param_1 + 0x67c);
  bVar2 = *(byte *)(param_1 + 0x601);
  iVar3 = thunk_RyGcADkMvql_NCceoKyYdyAEEzGdCPVJhaLovESDQ_rQf(iVar9);
  if (iVar3 != 0) {
    thunk_nFnYlBcfkbmaAggDzQrQAneYfYUCyIsEyVLdVIPDxAOdKuuaUV(iVar9,iVar5);
    (**(code **)(*piVar6 + 0x10))(piVar6,bVar2 | param_4,uVar1,uVar4,iVar5);
    thunk_OhEKCjAeVnlHfuAUZJcZnHHDRLG_GidGZRvfWysdHcsQ_nHCT(iVar7,iVar5);
    if (iVar8 != 0) {
      thunk_OhEKCjAeVnlHfuAUZJcZnHHDRLG_GidGZRvfWysdHcsQ_nHCT(iVar8,uVar4);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: yQcZDmMfugOGhLdWsDTCApLduTzsjN_ZoNFrDpeiUlerCi
// Entry: 0x71aaa2cc | Size: 520 bytes
// =========================================================================

void yQcZDmMfugOGhLdWsDTCApLduTzsjN_ZoNFrDpeiUlerCi(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x65c) != 0) {
    piVar8 = (int *)(param_1 + 0x65c);
    iVar9 = param_1 + 0x670;
    uVar5 = *(undefined4 *)(param_1 + 0x670);
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x660) + *(int *)(param_1 + 0x658) * 0xc);
    *(undefined4 *)(param_1 + 0x670) = *puVar4;
    *puVar4 = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x674);
    *(undefined4 *)(param_1 + 0x674) = puVar4[1];
    puVar4[1] = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x678);
    *(undefined4 *)(param_1 + 0x678) = puVar4[2];
    puVar4[2] = uVar5;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = *piVar8 + -1;
    iVar6 = param_1 + 0x680;
    iVar2 = *(int *)(param_1 + 0x658) + 1;
    *(int *)(param_1 + 0x658) = iVar2;
    if (iVar2 == (*(int *)(param_1 + 0x664) - *(int *)(param_1 + 0x660) >> 2) * -0x55555555) {
      *(undefined4 *)(param_1 + 0x658) = 0;
    }
    while( true ) {
      thunk_FYJuOgpVamiMNyJq_vOSQWMqasArkDtkZYVOVZTjmRNJOoDRYibf(param_1 + 0x6d4);
      iVar2 = thunk_myLDmUWtsZjKyVRTYoXhi_YWZcVmlqmIaWSUTCvYSlBPsbBCHtYmYiXSikKTtOJhaFXbUmQDkNsZPvqrezGvHhWyceumTxuMtkWfinEiEItTLzMxdAJyopXlnJHdcjbcIEPD
                        (param_1 + 0x5e8,iVar9);
      if (iVar2 != 0) {
        thunk_mWpzsketRyytqCnUgulPomJccjVtHuiIkxmhWnQI(param_1);
      }
      FUN_71aaa818(*(undefined1 *)(param_1 + 0x601),iVar9,0,*(undefined4 *)(param_1 + 0x644),
                   *(undefined4 *)(param_1 + 0x66c),iVar6,param_1 + 0x6ac);
      FUN_71aaa818(*(undefined1 *)(param_1 + 0x601),iVar9,1,*(undefined4 *)(param_1 + 0x644),
                   *(undefined4 *)(param_1 + 0x66c),iVar6,param_1 + 0x6ac);
      uVar5 = *(undefined4 *)(param_1 + 0x644);
      piVar7 = *(int **)(param_1 + 0x66c);
      iVar2 = thunk_RyGcADkMvql_NCceoKyYdyAEEzGdCPVJhaLovESDQ_rQf(uVar5);
      if (iVar2 != 0) {
        thunk_nFnYlBcfkbmaAggDzQrQAneYfYUCyIsEyVLdVIPDxAOdKuuaUV(uVar5,iVar6);
        (**(code **)(*piVar7 + 0x14))(piVar7,iVar6);
      }
      DataMemoryBarrier(0xb);
      if (*piVar8 == 0) break;
      uVar5 = *(undefined4 *)(param_1 + 0x670);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x660) + *(int *)(param_1 + 0x658) * 0xc);
      *(undefined4 *)(param_1 + 0x670) = *puVar4;
      *puVar4 = uVar5;
      uVar5 = *(undefined4 *)(param_1 + 0x674);
      *(undefined4 *)(param_1 + 0x674) = puVar4[1];
      puVar4[1] = uVar5;
      uVar5 = *(undefined4 *)(param_1 + 0x678);
      *(undefined4 *)(param_1 + 0x678) = puVar4[2];
      puVar4[2] = uVar5;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = *piVar8 + -1;
      iVar3 = *(int *)(param_1 + 0x658) + 1;
      iVar2 = 0;
      if (iVar3 + (*(int *)(param_1 + 0x664) - *(int *)(param_1 + 0x660) >> 2) * 0x55555555 != 0) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 0x658) = iVar2;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71aaa4d4
// Entry: 0x71aaa4d4 | Size: 660 bytes
// =========================================================================

void FUN_71aaa4d4(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,int *param_10,
                 undefined4 param_11,undefined4 *param_12,undefined4 param_13,undefined4 *param_14)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_14;
  piVar5 = (int *)param_14[1];
  if (piVar5 != piVar2) {
    iVar1 = *piVar2;
    uVar4 = 0;
    do {
      if (piVar2[1] != iVar1) {
        uVar3 = 0;
        do {
          iVar1 = *(int *)(param_2 + 0x28);
          if (*(int *)(param_2 + 0x2c) != 0) {
            iVar1 = *(int *)(param_2 + 0x2c);
          }
          piVar2 = (int *)(piVar2[uVar4 * 3] + uVar3 * 8);
          *piVar2 = *(int *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c) * uVar3 * 4 + uVar4 * 4) +
                    param_6 * 0x140;
          uVar3 = uVar3 + 1;
          piVar2[1] = 0x50;
          piVar2 = (int *)*param_14;
          iVar1 = *piVar2;
        } while (uVar3 < (uint)(piVar2[1] - iVar1 >> 3));
        piVar5 = (int *)param_14[1];
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(((int)piVar5 - (int)piVar2 >> 2) * -0x55555555));
  }
  if (param_1 != 0) {
    piVar2 = (int *)*param_12;
    piVar5 = (int *)param_12[1];
    if (piVar5 != piVar2) {
      uVar4 = 0;
      iVar1 = *piVar2;
      do {
        if (piVar2[1] != iVar1) {
          uVar3 = 0;
          do {
            iVar1 = *(int *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x2c) != 0) {
              iVar1 = *(int *)(param_1 + 0x2c);
            }
            piVar2 = (int *)(piVar2[uVar4 * 3] + uVar3 * 8);
            *piVar2 = *(int *)(*(int *)(iVar1 + 8) + *(int *)(iVar1 + 0x1c) * uVar3 * 4 + uVar4 * 4)
                      + param_6 * 0x140;
            uVar3 = uVar3 + 1;
            piVar2[1] = 0x50;
            piVar2 = (int *)*param_12;
            iVar1 = *piVar2;
          } while (uVar3 < (uint)(piVar2[1] - iVar1 >> 3));
          piVar5 = (int *)param_12[1];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(((int)piVar5 - (int)piVar2 >> 2) * -0x55555555));
    }
    thunk_wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
              (param_7,param_14,param_13);
    (**(code **)(*param_10 + 0x10))(param_10,param_3 | param_4,param_5,param_11,param_13);
    thunk_hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
              (param_9,param_13,param_14);
    thunk_hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
              (param_8,param_11,param_12);
    return;
  }
  thunk_wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
            (param_7,param_14,param_13);
  (**(code **)(*param_10 + 0x10))(param_10,param_3 | param_4,param_5,param_11,param_13);
  thunk_hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
            (param_9,param_13,param_14);
  return;
}


// =========================================================================
// Function: XOYlWmNbKideFSuZqrJPCRAhUEaSLaXqHxlKPUKpM
// Entry: 0x71aaa768 | Size: 36 bytes
// =========================================================================

void XOYlWmNbKideFSuZqrJPCRAhUEaSLaXqHxlKPUKpM(undefined4 param_1,int param_2)

{
  (**(code **)(**(int **)(param_2 + 0x66c) + 8))(*(int **)(param_2 + 0x66c),param_1);
  return;
}


// =========================================================================
// Function: FUbsfhSmRo_uqZfzbmOse_xtqUIAagYejDJVPQHyDKndcaSLb
// Entry: 0x71aaa78c | Size: 16 bytes
// =========================================================================

void FUbsfhSmRo_uqZfzbmOse_xtqUIAagYejDJVPQHyDKndcaSLb(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x71aaa798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x66c) + 0xc))();
  return;
}


// =========================================================================
// Function: aUwWzzsyXnuUfqVsIOnuNBTkmkeazAIaIcmzNHYvrzOKCCplLTJ
// Entry: 0x71aaa79c | Size: 16 bytes
// =========================================================================

void aUwWzzsyXnuUfqVsIOnuNBTkmkeazAIaIcmzNHYvrzOKCCplLTJ(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x71aaa7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x66c) + 0x1c))();
  return;
}


// =========================================================================
// Function: OlDBaMimJJzqNpwYWHirzgORgkYxISaArIFfkvz_imChjiT
// Entry: 0x71aaa7ac | Size: 8 bytes
// =========================================================================

undefined4 OlDBaMimJJzqNpwYWHirzgORgkYxISaArIFfkvz_imChjiT(void)

{
  return 1;
}


// =========================================================================
// Function: GXjAtSCeHcFOfpgFujSmeCDVlxyIYvKc_eLJcj_WyGygzXtFJEMBQYMfjSmTf
// Entry: 0x71aaa7b4 | Size: 56 bytes
// =========================================================================

void GXjAtSCeHcFOfpgFujSmeCDVlxyIYvKc_eLJcj_WyGygzXtFJEMBQYMfjSmTf(void)

{
  int iVar1;
  
  iVar1 = thunk_oAgDAWoadRIMsEjYkUgbbGsVohHNiPUzyDCc();
  *(undefined4 *)(iVar1 + 0x90) = 0xb;
  *(undefined4 *)(iVar1 + 0x94) = 0x3f733333;
  *(undefined4 *)(iVar1 + 0x6c) = 0xb;
  *(undefined4 *)(iVar1 + 0x70) = 0x3f733333;
  *(undefined4 *)(iVar1 + 0x148) = 0x3fc00000;
  *(undefined4 *)(iVar1 + 0x14c) = 0x3eb33333;
  return;
}


// =========================================================================
// Function: ZwFdNTMuSQbEtHgTFzHKIgpBktFwMwcnDTrRFnHcKxEkWZxZxNoLcpMlKNuBpDKvxMXotRiyDfDbgSyXswNPjBresnJAFmGzHpBqmin_UqSnKifcFBBTkeRUwkMjXLG
// Entry: 0x71aaa7ec | Size: 44 bytes
// =========================================================================

void ZwFdNTMuSQbEtHgTFzHKIgpBktFwMwcnDTrRFnHcKxEkWZxZxNoLcpMlKNuBpDKvxMXotRiyDfDbgSyXswNPjBresnJAFmGzHpBqmin_UqSnKifcFBBTkeRUwkMjXLG
               (int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x66c);
  *(undefined4 *)(param_1 + 0x66c) = uVar2;
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x71aaa814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))();
  return;
}


// =========================================================================
// Function: FUN_71aaa818
// Entry: 0x71aaa818 | Size: 724 bytes
// =========================================================================

void FUN_71aaa818(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,int *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint in_fpscr;
  float fVar14;
  
  piVar12 = (int *)*param_2;
  piVar8 = (int *)param_2[1];
  uVar11 = (piVar12[1] - *piVar12 >> 2) * -0x55555555;
  uVar9 = ((int *)*param_7)[1] - *(int *)*param_7 >> 3;
  if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
    if (piVar8 != piVar12) {
      uVar9 = 0;
      do {
        iVar3 = piVar12[uVar9 * 3];
        if ((piVar12 + uVar9 * 3)[1] != iVar3) {
          iVar4 = 0;
          uVar11 = 0;
          do {
            piVar8 = (int *)(iVar3 + iVar4);
            iVar4 = iVar4 + 0xc;
            piVar12 = (int *)(*(int *)(*param_7 + uVar9 * 0xc) + uVar11 * 8);
            *piVar12 = *piVar8 + param_3 * 0x140;
            uVar11 = uVar11 + 1;
            piVar12[1] = 0x50;
            piVar12 = (int *)*param_2;
            iVar3 = piVar12[uVar9 * 3];
          } while (uVar11 < (uint)(((piVar12 + uVar9 * 3)[1] - iVar3 >> 2) * -0x55555555));
          piVar8 = (int *)param_2[1];
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(((int)piVar8 - (int)piVar12 >> 2) * -0x55555555));
    }
  }
  else {
    if (param_1 != 0) {
      if (piVar8 == piVar12) goto LAB_71aaaabc;
      fVar14 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      uVar9 = ((int)piVar8 - (int)piVar12 >> 2) * -0x55555555;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      if (uVar11 < 2) {
        uVar11 = 0;
        do {
          iVar4 = 0;
          iVar3 = *(int *)piVar12[uVar11 * 3];
          do {
            pfVar6 = (float *)(iVar3 + param_3 * 0x140 + iVar4);
            iVar4 = iVar4 + 4;
            *pfVar6 = (1.0 / fVar14) * *pfVar6;
          } while (iVar4 != 0x140);
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar9);
      }
      else {
        uVar2 = 0;
        do {
          uVar7 = 1;
          piVar13 = (int *)piVar12[uVar2 * 3];
          iVar3 = *piVar13;
          do {
            iVar4 = piVar13[uVar7 * 3];
            iVar5 = 0;
            do {
              pfVar6 = (float *)(iVar3 + param_3 * 0x140 + iVar5);
              pfVar10 = (float *)(iVar4 + param_3 * 0x140 + iVar5);
              iVar5 = iVar5 + 4;
              *pfVar6 = *pfVar10 + *pfVar6;
            } while (iVar5 != 0x140);
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar11);
          iVar4 = 0;
          do {
            pfVar6 = (float *)(iVar3 + param_3 * 0x140 + iVar4);
            iVar4 = iVar4 + 4;
            *pfVar6 = (1.0 / fVar14) * *pfVar6;
          } while (iVar4 != 0x140);
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar9);
      }
    }
    if (piVar8 != piVar12) {
      iVar3 = 0;
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
        puVar1 = (undefined4 *)((int)piVar12 + iVar3);
        piVar8 = *(int **)(*param_7 + iVar3);
        iVar3 = iVar3 + 0xc;
        *piVar8 = *(int *)*puVar1 + param_3 * 0x140;
        piVar8[1] = 0x50;
        piVar12 = (int *)*param_2;
      } while (uVar9 < (uint)((param_2[1] - (int)piVar12 >> 2) * -0x55555555));
    }
  }
LAB_71aaaabc:
  thunk_wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
            (param_4,param_7,param_6);
                    /* WARNING: Could not recover jumptable at 0x71aaaae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x14))(param_5,param_6);
  return;
}


// =========================================================================
// Function: ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
// Entry: 0x71aaee10 | Size: 196 bytes
// =========================================================================

bool ZaWy_gTvQjUTGrEfHDAjDDMaVufvjFgvqEawzxGncTjVAhk_OsKFOpKEgUqlasGxD_jFCPJj_dsBfLNXpaNVVKQh
               (undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_2c [4];
  uint uStack_28;
  uint uStack_24;
  
  thunk_FPYtJWJyDoSOhWSTYluAPOUPdqgSqJuN_MWLDOMyWVpGznKqZmWSQUOsKUkrdJdiPVskzABoGWWbKWdnEImkjrtKbDqe
            (abStack_2c,param_1,param_2);
  uVar5 = uStack_24;
  if ((abStack_2c[0] & 1) == 0) {
    uVar5 = (uint)abStack_2c | 1;
    uStack_28 = (uint)(abStack_2c[0] >> 1);
  }
  uVar3 = uVar5 + uStack_28;
  uVar1 = uVar5;
  while (((uVar4 = uVar3, 6 < (int)uStack_28 &&
          (uVar1 = imp_memchr(uVar1,0x45,uStack_28 - 6), uVar1 != 0)) &&
         (iVar2 = imp_memcmp(uVar1,s_Enabled_7006820b,7), uVar4 = uVar1, iVar2 != 0))) {
    uVar1 = uVar1 + 1;
    uStack_28 = uVar3 - uVar1;
  }
  if ((abStack_2c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return uVar4 != uVar3 && uVar4 == uVar5;
}


// =========================================================================
// Function: FUN_71aaef7c
// Entry: 0x71aaef7c | Size: 368 bytes
// =========================================================================

int * FUN_71aaef7c(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piStack_34;
  undefined1 uStack_30;
  int iStack_2c;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_30 = 0;
  if (param_2 != 0) {
    piVar4 = param_1;
    piStack_34 = param_1;
    if (0x15555555 < param_2) {
LAB_71aaf0d8:
      FUN_71aafb40(piVar4);
      FUN_71aafa08(&piStack_34);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar8 = param_2 * 0xc;
    iVar1 = thunk_MwhHq(iVar8);
    iVar2 = iVar1 + param_2 * 0xc;
    param_1[2] = iVar2;
    param_1[1] = iVar1;
    iVar3 = *param_3;
    iVar5 = param_3[1];
    *param_1 = iVar1;
    if (iVar5 == iVar3) {
      imp___aeabi_memclr4(iVar1,((iVar8 - 0xcU) / 0xc) * 0xc + 0xc);
    }
    else {
      piVar6 = (int *)(iVar1 + 8);
      do {
        iVar5 = *param_3;
        iVar7 = param_3[1];
        piVar6[-2] = 0;
        iVar3 = iVar7 - iVar5;
        piVar6[-1] = 0;
        *piVar6 = 0;
        uStack_28 = 0;
        if (iVar3 != 0) {
          iStack_2c = iVar1;
          if (0x15555555 < (uint)((iVar3 >> 2) * -0x55555555)) {
            FUN_71a77428(piVar6 + -2);
            goto LAB_71aaf0d8;
          }
          piVar4 = (int *)thunk_MwhHq(iVar3);
          piVar6[-2] = (int)piVar4;
          piVar6[-1] = (int)piVar4;
          *piVar6 = (int)piVar4 + iVar3;
          iVar3 = FUN_71aafba8(piVar6,iVar5,iVar7,piVar4);
          piVar6[-1] = iVar3;
        }
        iVar1 = iVar1 + 0xc;
        iVar8 = iVar8 + -0xc;
        piVar6 = piVar6 + 3;
      } while (iVar8 != 0);
    }
    param_1[1] = iVar2;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aaf264
// Entry: 0x71aaf264 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71aaf264(undefined4 *param_1)

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
// Function: FUN_71aaf3a8
// Entry: 0x71aaf3a8 | Size: 164 bytes
// =========================================================================

undefined4 * FUN_71aaf3a8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)*param_1;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)param_1[1];
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
      puVar2 = (undefined4 *)*param_1;
    }
    param_1[1] = puVar6;
    thunk_qNQrlu(puVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aaf4b8
// Entry: 0x71aaf4b8 | Size: 68 bytes
// =========================================================================

int * FUN_71aaf4b8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 8);
      thunk_qNQrlu();
    }
    thunk_qNQrlu(iVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aaf54c
// Entry: 0x71aaf54c | Size: 60 bytes
// =========================================================================

int * FUN_71aaf54c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    thunk_dexshRSROpBPVAL_JkdEFYpKHeaTfWqG();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aaf5d8
// Entry: 0x71aaf5d8 | Size: 60 bytes
// =========================================================================

int * FUN_71aaf5d8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    thunk_BqRzmalcICGrikdbwOgPVRKmkouJ();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aaf664
// Entry: 0x71aaf664 | Size: 60 bytes
// =========================================================================

int * FUN_71aaf664(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 != 0) {
    thunk_pIfiSaBV_mNZoZDNOdRGRymboDI();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: PaZuWhVugKbNGmPVRoCB_YLgydZarEqyfELcXgTJqrv
// Entry: 0x71aaf6f0 | Size: 60 bytes
// =========================================================================

int PaZuWhVugKbNGmPVRoCB_YLgydZarEqyfELcXgTJqrv(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (iVar1 != 0) {
    thunk_HDnzFbsJfuZg__SewAdAZbMeUqKGKfRy_RsMdtZpJKyOBiWKoPJoopgXeQ();
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: PP_aDfKoRfZEJkPuIFcXghfriEpIERbOPDdPVxkinRzgATcYAnVBdASpT_Te
// Entry: 0x71aaf77c | Size: 8 bytes
// =========================================================================

void PP_aDfKoRfZEJkPuIFcXghfriEpIERbOPDdPVxkinRzgATcYAnVBdASpT_Te(int param_1)

{
  thunk_hewZPWZEZafdpEJClKdCQVlIaOleRfxCiAyLCEupnMIGjFtaZsKaRCdKZUQf_pabSSh
            (*(undefined4 *)(param_1 + 0x14));
  return;
}


// =========================================================================
// Function: NwZDGSeukmcQdx_l_ffuVSpVDwJLQBoqTrDSwXvUBqLoySbZPMvSuENKZGoBe
// Entry: 0x71aaf7b8 | Size: 160 bytes
// =========================================================================

void NwZDGSeukmcQdx_l_ffuVSpVDwJLQBoqTrDSwXvUBqLoySbZPMvSuENKZGoBe(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint in_r12;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar2 = *(int *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x67c) = 0;
  if (iVar1 != 0) {
    in_r12 = *(uint *)(param_2 + 0xc);
  }
  if (iVar1 != 0 && in_r12 != 0) {
    iVar3 = 0;
    do {
      pfVar4 = *(float **)(*(int *)(iVar2 + 4) + iVar3 * 4);
      if (32700.0 <= ABS(*pfVar4)) {
LAB_71aaf84c:
        *(undefined1 *)(param_1 + 0x67c) = 1;
        return;
      }
      uVar5 = 0;
      do {
        pfVar4 = pfVar4 + 1;
        if (in_r12 - 1 == uVar5) goto LAB_71aaf7f8;
        uVar5 = uVar5 + 1;
      } while (ABS(*pfVar4) < 32700.0);
      if (uVar5 < in_r12) goto LAB_71aaf84c;
LAB_71aaf7f8:
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  return;
}


// =========================================================================
// Function: FUN_71aaf874
// Entry: 0x71aaf874 | Size: 268 bytes
// =========================================================================

void FUN_71aaf874(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  puVar3 = (undefined4 *)*param_1;
  puVar7 = (undefined4 *)*puVar3;
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  puVar5 = (undefined4 *)puVar3[1];
  puVar6 = puVar7;
  if (puVar5 != puVar7) {
    do {
      puVar8 = puVar5 + -3;
      puVar6 = (undefined4 *)*puVar8;
      if (puVar6 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)puVar5[-2];
        puVar1 = puVar6;
        if (puVar9 != puVar6) {
          do {
            puVar1 = puVar9 + -3;
            piVar10 = (int *)*puVar1;
            if (piVar10 != (int *)0x0) {
              piVar4 = (int *)puVar9[-2];
              piVar2 = piVar10;
              if (piVar4 != piVar10) {
                do {
                  piVar2 = piVar4 + -3;
                  if (*piVar2 != 0) {
                    piVar4[-2] = *piVar2;
                    thunk_qNQrlu();
                  }
                  piVar4 = piVar2;
                } while (piVar2 != piVar10);
                piVar2 = (int *)*puVar1;
              }
              puVar9[-2] = piVar10;
              thunk_qNQrlu(piVar2);
            }
            puVar9 = puVar1;
          } while (puVar1 != puVar6);
          puVar1 = (undefined4 *)*puVar8;
        }
        puVar5[-2] = puVar6;
        thunk_qNQrlu(puVar1);
      }
      puVar5 = puVar8;
    } while (puVar8 != puVar7);
    puVar6 = *(undefined4 **)*param_1;
  }
  puVar3[1] = puVar7;
  thunk_qNQrlu(puVar6);
  return;
}


// =========================================================================
// Function: FUN_71aafa08
// Entry: 0x71aafa08 | Size: 204 bytes
// =========================================================================

undefined4 * FUN_71aafa08(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar6 = (undefined4 *)*param_1;
    puVar7 = (undefined4 *)*puVar6;
    if (puVar7 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)puVar6[1];
      puVar2 = puVar7;
      if (puVar5 != puVar7) {
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
        } while (puVar2 != puVar7);
        puVar2 = *(undefined4 **)*param_1;
      }
      puVar6[1] = puVar7;
      thunk_qNQrlu(puVar2);
      return param_1;
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aafb40
// Entry: 0x71aafb40 | Size: 20 bytes
// =========================================================================

void FUN_71aafb40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71aafba8
// Entry: 0x71aafba8 | Size: 196 bytes
// =========================================================================

int * FUN_71aafba8(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_3c;
  int **ppiStack_38;
  int **ppiStack_34;
  undefined1 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  ppiStack_34 = &piStack_28;
  ppiStack_38 = &piStack_2c;
  uStack_30 = 0;
  piStack_2c = param_4;
  uStack_3c = param_1;
  do {
    if (param_2 == param_3) {
      return param_4;
    }
    *param_4 = 0;
    param_4[1] = 0;
    iVar3 = *param_2;
    iVar1 = param_2[1];
    param_4[2] = 0;
    iVar1 = iVar1 - iVar3;
    if (iVar1 != 0) {
      piStack_28 = param_4;
      if (iVar1 < 0) {
        FUN_71a0103c(param_4);
        FUN_71aafd84(&uStack_3c);
                    /* WARNING: Subroutine does not return */
        thunk_NAUpeWJSovvMoxKm_();
      }
      iVar2 = thunk_MwhHq(iVar1);
      *param_4 = iVar2;
      param_4[1] = iVar2;
      param_4[2] = iVar2 + iVar1;
      imp___aeabi_memcpy4(iVar2,iVar3,iVar1);
      param_4[1] = iVar2 + iVar1;
    }
    param_4 = param_4 + 3;
    param_2 = param_2 + 3;
  } while( true );
}


// =========================================================================
// Function: FUN_71aafd84
// Entry: 0x71aafd84 | Size: 96 bytes
// =========================================================================

int FUN_71aafd84(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar2 = (int *)**(undefined4 **)(param_1 + 4);
    piVar3 = (int *)**(int **)(param_1 + 8);
    while (piVar1 = piVar3, piVar1 != piVar2) {
      piVar3 = piVar1 + -3;
      if (*piVar3 != 0) {
        piVar1[-2] = *piVar3;
        thunk_qNQrlu();
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71aafe18
// Entry: 0x71aafe18 | Size: 372 bytes
// =========================================================================

int * FUN_71aafe18(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piStack_34;
  undefined1 uStack_30;
  int iStack_2c;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_30 = 0;
  if (param_2 != 0) {
    piVar4 = param_1;
    piStack_34 = param_1;
    if (0x15555555 < param_2) {
LAB_71aaff74:
      FUN_71ab00cc(piVar4);
      FUN_71aaf874(&piStack_34);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar8 = param_2 * 0xc;
    iVar1 = thunk_MwhHq(iVar8);
    iVar2 = iVar1 + param_2 * 0xc;
    param_1[2] = iVar2;
    param_1[1] = iVar1;
    iVar3 = *param_3;
    iVar5 = param_3[1];
    *param_1 = iVar1;
    if (iVar5 == iVar3) {
      imp___aeabi_memclr4(iVar1,((iVar8 - 0xcU) / 0xc) * 0xc + 0xc);
    }
    else {
      piVar6 = (int *)(iVar1 + 8);
      do {
        iVar5 = *param_3;
        iVar7 = param_3[1];
        piVar6[-2] = 0;
        iVar3 = iVar7 - iVar5;
        piVar6[-1] = 0;
        *piVar6 = 0;
        uStack_28 = 0;
        if (iVar3 != 0) {
          iStack_2c = iVar1;
          if (0x15555555 < (uint)((iVar3 >> 2) * -0x55555555)) {
            FUN_71aafb40(piVar6 + -2);
            goto LAB_71aaff74;
          }
          piVar4 = (int *)thunk_MwhHq(iVar3);
          piVar6[-2] = (int)piVar4;
          piVar6[-1] = (int)piVar4;
          *piVar6 = (int)piVar4 + iVar3;
          iVar3 = FUN_71ab0134(piVar6,iVar5,iVar7,piVar4);
          piVar6[-1] = iVar3;
        }
        iVar1 = iVar1 + 0xc;
        iVar8 = iVar8 + -0xc;
        piVar6 = piVar6 + 3;
      } while (iVar8 != 0);
    }
    param_1[1] = iVar2;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71ab00cc
// Entry: 0x71ab00cc | Size: 20 bytes
// =========================================================================

void FUN_71ab00cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ab0134
// Entry: 0x71ab0134 | Size: 272 bytes
// =========================================================================

int * FUN_71ab0134(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_44;
  int **ppiStack_40;
  int **ppiStack_3c;
  undefined1 uStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  ppiStack_3c = &piStack_30;
  ppiStack_40 = &piStack_34;
  piStack_34 = param_4;
  uStack_44 = param_1;
  do {
    if (param_2 == param_3) {
      return param_4;
    }
    param_4[1] = 0;
    *param_4 = 0;
    iVar3 = param_2[1];
    iVar4 = *param_2;
    param_4[2] = 0;
    iVar2 = iVar3 - iVar4;
    uStack_28 = 0;
    if (iVar2 != 0) {
      piStack_30 = param_4;
      piStack_2c = param_4;
      if (0x15555555 < (uint)((iVar2 >> 2) * -0x55555555)) {
        FUN_71a77428(param_4);
        FUN_71a77354(&piStack_2c);
        FUN_71ab030c(&uStack_44);
                    /* WARNING: Subroutine does not return */
        thunk_NAUpeWJSovvMoxKm_();
      }
      iVar1 = thunk_MwhHq(iVar2);
      *param_4 = iVar1;
      param_4[1] = iVar1;
      param_4[2] = iVar1 + iVar2;
      iVar2 = FUN_71aafba8(param_4 + 2,iVar4,iVar3,iVar1);
      param_4[1] = iVar2;
      param_4 = piStack_30;
    }
    param_4 = param_4 + 3;
    param_2 = param_2 + 3;
  } while( true );
}


// =========================================================================
// Function: FUN_71ab030c
// Entry: 0x71ab030c | Size: 156 bytes
// =========================================================================

int FUN_71ab030c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    puVar6 = (undefined4 *)**(undefined4 **)(param_1 + 4);
    puVar5 = (undefined4 *)**(int **)(param_1 + 8);
    while (puVar1 = puVar5, puVar1 != puVar6) {
      puVar5 = puVar1 + -3;
      piVar4 = (int *)*puVar5;
      if (piVar4 != (int *)0x0) {
        piVar3 = (int *)puVar1[-2];
        piVar2 = piVar4;
        if (piVar3 != piVar4) {
          do {
            piVar2 = piVar3 + -3;
            if (*piVar2 != 0) {
              piVar3[-2] = *piVar2;
              thunk_qNQrlu();
            }
            piVar3 = piVar2;
          } while (piVar2 != piVar4);
          piVar2 = (int *)*puVar5;
        }
        puVar1[-2] = piVar4;
        thunk_qNQrlu(piVar2);
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
// Entry: 0x71ab03f8 | Size: 168 bytes
// =========================================================================

undefined4 *
MuEzqOtJahSucLwYzRJrwCQuxHeipkrxHNEgGsNEGyRbEKYbjciSLqVhhQYbYYzBYhnZIZSpxmxRLj_JBQzbeipIXmHR_eCXm
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab0484;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab0484:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}


// =========================================================================
// Function: amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
// Entry: 0x71ab04bc | Size: 204 bytes
// =========================================================================

undefined4
amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
          (int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = imp_memcmp(param_1,&DAT_7006b280,1);
    if (iVar1 == 0) {
      return 0x101;
    }
    iVar1 = imp_memcmp(param_1,&DAT_7006df66,1);
  }
  else {
    if (param_2 != 5) {
      if (param_2 != 4) {
        return 0;
      }
      if (*param_1 != 0x65757274) {
        return 0;
      }
      return 0x101;
    }
    iVar1 = imp_memcmp(param_1,s_false_7006143a,5);
  }
  if (iVar1 != 0) {
    return 0;
  }
  return 0x100;
}


// =========================================================================
// Function: xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
// Entry: 0x71ab0598 | Size: 272 bytes
// =========================================================================

void xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
               (double *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined2 uStack_2a;
  double dStack_28;
  
  uStack_2a = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_38);
  }
  if (param_3 < 0xb) {
    uVar4 = (uint)&uStack_38 | 1;
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(param_3 << 1));
    if (param_3 == 0) goto LAB_71ab0614;
  }
  else {
    uVar4 = thunk_MwhHq((param_3 | 7) + 1);
    uStack_38 = (param_3 | 7) + 2;
    uStack_34 = param_3;
    uStack_30 = uVar4;
  }
  imp___aeabi_memmove(uVar4,param_2,param_3);
LAB_71ab0614:
  uVar1 = uStack_30;
  *(undefined1 *)(uVar4 + param_3) = 0;
  uVar4 = uStack_38 & 1;
  uVar2 = uStack_30;
  if ((uStack_38 & 1) == 0) {
    uVar2 = (uint)&uStack_38 | 1;
  }
  iVar3 = imp_sscanf(uVar2,s__lf_1s_70065810,&dStack_28,&uStack_2a);
  if (uVar4 != 0) {
    thunk_qNQrlu(uVar1);
  }
  if (iVar3 < 1) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if ((char)uStack_2a == '%') {
    dStack_28 = dStack_28 / 100.0;
  }
  *param_1 = dStack_28;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// =========================================================================
// Function: TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
// Entry: 0x71ab06b4 | Size: 288 bytes
// =========================================================================

void TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
               (uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_34);
  }
  if (param_3 < 0xb) {
    uVar5 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(param_3 << 1));
    if (param_3 == 0) goto LAB_71ab0728;
  }
  else {
    uVar5 = thunk_MwhHq((param_3 | 7) + 1);
    uStack_34 = (param_3 | 7) + 2;
    uStack_30 = param_3;
    uStack_2c = uVar5;
  }
  imp___aeabi_memmove(uVar5,param_2,param_3);
LAB_71ab0728:
  uVar1 = uStack_2c;
  *(undefined1 *)(uVar5 + param_3) = 0;
  uVar5 = uStack_34 & 1;
  uVar2 = uStack_2c;
  if ((uStack_34 & 1) == 0) {
    uVar2 = (uint)&uStack_34 | 1;
  }
  iVar3 = imp_sscanf(uVar2,&DAT_70062dbd,&uStack_28);
  if (uVar5 != 0) {
    thunk_qNQrlu(uVar1);
  }
  if (iVar3 == 1) {
    bVar4 = (int)(iStack_24 - ((uStack_28 < 0x80000000) - 1)) < 0 !=
            (SBORROW4(iStack_24,-1) != SBORROW4(iStack_24 + 1,(uint)(uStack_28 < 0x80000000)));
    if ((int)-(iStack_24 + (uint)(0x7fffffff < uStack_28)) < 0 !=
        (SBORROW4(0,iStack_24) != SBORROW4(-iStack_24,(uint)(0x7fffffff < uStack_28)))) {
      bVar4 = bVar4 | 2;
    }
    if (bVar4 == 0) {
      *param_1 = uStack_28;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
// Entry: 0x71ab07d8 | Size: 268 bytes
// =========================================================================

void bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
               (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_34);
  }
  if (param_3 < 0xb) {
    uVar4 = (uint)&uStack_34 | 1;
    uStack_34 = CONCAT31(uStack_34._1_3_,(char)(param_3 << 1));
    if (param_3 == 0) goto LAB_71ab084c;
  }
  else {
    uVar4 = thunk_MwhHq((param_3 | 7) + 1);
    uStack_34 = (param_3 | 7) + 2;
    uStack_30 = param_3;
    uStack_2c = uVar4;
  }
  imp___aeabi_memmove(uVar4,param_2,param_3);
LAB_71ab084c:
  uVar1 = uStack_2c;
  *(undefined1 *)(uVar4 + param_3) = 0;
  uVar4 = uStack_34 & 1;
  uVar2 = uStack_2c;
  if ((uStack_34 & 1) == 0) {
    uVar2 = (uint)&uStack_34 | 1;
  }
  iVar3 = imp_sscanf(uVar2,&DAT_70062dbd,&uStack_28);
  if (uVar4 != 0) {
    thunk_qNQrlu(uVar1);
  }
  if (iVar3 == 1) {
    uVar4 = uStack_24 >> 0x1f;
    if (0 < (int)uStack_24) {
      uVar4 = uStack_24 >> 0x1f | 2;
    }
    if (uVar4 == 0) {
      *param_1 = uStack_28;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: NynwacZrNYrvtdASaStzzKBTynvBUdVFZSglrQqFSaaUUrHNxnetOGpSIshVnNpFOBANdzfWsNFUGybmlNFcyNHXaggbWpMZFaQCBCkkZIVltqZWgxsnukRoOKygsFbgKB_yqjk_ucWoMLDewFmxu
// Entry: 0x71ab08e8 | Size: 164 bytes
// =========================================================================

void NynwacZrNYrvtdASaStzzKBTynvBUdVFZSglrQqFSaaUUrHNxnetOGpSIshVnNpFOBANdzfWsNFUGybmlNFcyNHXaggbWpMZFaQCBCkkZIVltqZWgxsnukRoOKygsFbgKB_yqjk_ucWoMLDewFmxu
               (undefined8 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&iStack_28);
  }
  if (param_3 < 0xb) {
    iStack_28 = CONCAT31(iStack_28._1_3_,(char)(param_3 << 1));
    uVar1 = (uint)&iStack_28 | 1;
    if (param_3 == 0) goto LAB_71ab095c;
  }
  else {
    uVar1 = thunk_MwhHq((param_3 | 7) + 1);
    iStack_28 = (param_3 | 7) + 2;
    uStack_24 = param_3;
    uStack_20 = uVar1;
  }
  imp___aeabi_memmove(uVar1,param_2,param_3);
LAB_71ab095c:
  *(undefined1 *)(uVar1 + param_3) = 0;
  *(undefined1 *)((int)param_1 + 0xc) = 1;
  *(uint *)(param_1 + 1) = uStack_20;
  *param_1 = CONCAT44(uStack_24,iStack_28);
  return;
}


// =========================================================================
// Function: eqUBScuSUULNepqIGbLjrnpp_VMDvzeG_yRaMZFeITRj
// Entry: 0x71ab098c | Size: 4 bytes
// =========================================================================

void eqUBScuSUULNepqIGbLjrnpp_VMDvzeG_yRaMZFeITRj(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x71ab098c);
  (*pcVar1)();
}


// =========================================================================
// Function: AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
// Entry: 0x71ab0990 | Size: 2904 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void AWAxjVdIJpmHOqJnDgnWCEHFbwyiVfiHHyHmvgiFHMHFHPsHD_LkytPXuAHygBbglDFAgPkovkmnZyYYuovKTidrtznNevwnvVYTJYRfLLhVlnkkGGWBwmRRCkQMuVpZCEYMDVpmeWM
               (undefined4 *param_1,int param_2,uint *param_3,int ******param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *******pppppppiVar5;
  uint uVar6;
  int *piVar7;
  int *******pppppppiVar8;
  bool bVar9;
  int *******pppppppiVar10;
  int ******ppppppiVar11;
  int *piVar12;
  int ******ppppppiVar13;
  int *******pppppppiVar14;
  undefined4 *puVar15;
  int ******ppppppiVar16;
  uint *puVar17;
  uint uVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  uint uVar21;
  int ******ppppppiVar22;
  uint uVar23;
  int ******ppppppiVar24;
  char *pcVar25;
  int ******ppppppiVar26;
  int *piVar27;
  uint uVar28;
  bool bVar29;
  int *piStack_9c;
  uint *puStack_90;
  uint uStack_88;
  int ******ppppppiStack_84;
  uint uStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  char cStack_6c;
  ulonglong uStack_68;
  uint uStack_60;
  char cStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  char cStack_4c;
  uint *puStack_44;
  int ******ppppppiStack_40;
  int *******pppppppiStack_3c;
  int *******pppppppiStack_38;
  int iStack_34;
  uint *puStack_30;
  int ******ppppppiStack_2c;
  undefined1 uStack_25;
  
  iStack_34 = 0;
  pppppppiStack_38 = (int *******)0x0;
  pppppppiStack_3c = (int *******)&pppppppiStack_38;
  puStack_30 = param_3;
  if (param_2 == 0) {
    piStack_9c = (int *)0x0;
  }
  else {
    piStack_9c = (int *)0x0;
    puVar15 = param_1;
    ppppppiStack_2c = param_4;
    do {
      piVar12 = (int *)*puVar15;
      piVar7 = (int *)piVar12[2];
      piVar27 = (int *)piVar12[1];
      *(undefined1 *)(piVar12 + 7) = 1;
      if (piVar27 != piVar7) {
        puStack_90 = (uint *)iStack_34;
        do {
          ppppppiVar11 = (int ******)*piVar27;
          *(undefined1 *)(ppppppiVar11 + 7) = 1;
          ppppppiVar24 = (int ******)ppppppiVar11[5];
          ppppppiVar26 = (int ******)ppppppiVar11[6];
          pppppppiVar14 = pppppppiStack_38;
          pppppppiVar10 = (int *******)&pppppppiStack_38;
          if ((*(byte *)(ppppppiVar11 + 4) & 1) == 0) {
            ppppppiVar26 = (int ******)((int)ppppppiVar11 + 0x11);
            ppppppiVar24 = (int ******)(uint)(*(byte *)(ppppppiVar11 + 4) >> 1);
          }
LAB_71ab0b08:
          pppppppiVar8 = pppppppiVar10;
          if (pppppppiVar14 != (int *******)0x0) {
            do {
              pppppppiVar5 = pppppppiVar14;
              ppppppiVar13 = pppppppiVar5[4];
              ppppppiVar16 = pppppppiVar5[5];
              ppppppiVar22 = ppppppiVar24;
              if (ppppppiVar16 < ppppppiVar24) {
                ppppppiVar22 = ppppppiVar16;
              }
              iVar4 = imp_memcmp(ppppppiVar26,ppppppiVar13,ppppppiVar22);
              if (iVar4 == 0) {
                if (ppppppiVar24 < ppppppiVar16) goto LAB_71ab0b00;
              }
              else if (iVar4 < 0) goto LAB_71ab0b00;
              iVar4 = imp_memcmp(ppppppiVar13,ppppppiVar26,ppppppiVar22);
              if (iVar4 == 0) {
                if (ppppppiVar24 <= ppppppiVar16) goto LAB_71ab0ab8;
              }
              else if (-1 < iVar4) goto LAB_71ab0ab8;
              pppppppiVar14 = (int *******)pppppppiVar5[1];
              if ((int *******)pppppppiVar5[1] == (int *******)0x0) {
                pppppppiVar10 = pppppppiVar5 + 1;
                pppppppiVar8 = pppppppiVar5;
                break;
              }
            } while( true );
          }
          pppppppiVar5 = (int *******)thunk_MwhHq(0x1c);
          pppppppiVar5[4] = ppppppiVar26;
          pppppppiVar5[6] = (int ******)0x0;
          *pppppppiVar5 = (int ******)0x0;
          pppppppiVar5[1] = (int ******)0x0;
          pppppppiVar5[2] = (int ******)pppppppiVar8;
          *pppppppiVar10 = (int ******)pppppppiVar5;
          pppppppiVar8 = (int *******)*pppppppiStack_3c;
          pppppppiVar5[5] = ppppppiVar24;
          pppppppiVar14 = pppppppiVar5;
          if (pppppppiVar8 != (int *******)0x0) {
            pppppppiVar14 = (int *******)*pppppppiVar10;
            pppppppiStack_3c = pppppppiVar8;
          }
          *(bool *)(pppppppiVar14 + 3) = pppppppiVar14 == pppppppiStack_38;
          if (pppppppiVar14 == pppppppiStack_38) goto LAB_71ab0aa8;
          do {
            pppppppiVar10 = (int *******)pppppppiVar14[2];
            if (*(char *)(pppppppiVar10 + 3) != '\0') break;
            pppppppiVar8 = (int *******)pppppppiVar10[2];
            pppppppiVar20 = (int *******)*pppppppiVar8;
            if (pppppppiVar20 != pppppppiVar10) {
              if ((pppppppiVar20 != (int *******)0x0) &&
                 (pppppppiVar20 = pppppppiVar20 + 3, *(char *)pppppppiVar20 == '\0'))
              goto LAB_71ab0bf0;
              if ((int *******)*pppppppiVar10 == pppppppiVar14) {
                ppppppiVar24 = pppppppiVar14[1];
                *pppppppiVar10 = ppppppiVar24;
                if (ppppppiVar24 != (int ******)0x0) {
                  ppppppiVar24[2] = (int *****)pppppppiVar10;
                  pppppppiVar8 = (int *******)pppppppiVar10[2];
                }
                pppppppiVar19 = (int *******)*pppppppiVar8;
                pppppppiVar14[2] = (int ******)pppppppiVar8;
                pppppppiVar20 = pppppppiVar8 + 1;
                if (pppppppiVar19 == pppppppiVar10) {
                  pppppppiVar20 = pppppppiVar8;
                }
                *pppppppiVar20 = (int ******)pppppppiVar14;
                pppppppiVar10[2] = (int ******)pppppppiVar14;
                pppppppiVar8 = (int *******)pppppppiVar14[2];
                pppppppiVar14[1] = (int ******)pppppppiVar10;
                pppppppiVar10 = pppppppiVar14;
              }
              ppppppiVar24 = pppppppiVar8[1];
              *(undefined1 *)(pppppppiVar10 + 3) = 1;
              ppppppiVar26 = (int ******)*ppppppiVar24;
              *(undefined1 *)(pppppppiVar8 + 3) = 0;
              pppppppiVar8[1] = ppppppiVar26;
              if (ppppppiVar26 != (int ******)0x0) {
                ppppppiVar26[2] = (int *****)pppppppiVar8;
              }
              ppppppiVar22 = pppppppiVar8[2];
              pppppppiVar14 = (int *******)*ppppppiVar22;
              ppppppiVar24[2] = (int *****)ppppppiVar22;
              ppppppiVar26 = ppppppiVar22 + 1;
              if (pppppppiVar14 == pppppppiVar8) {
                ppppppiVar26 = ppppppiVar22;
              }
              *ppppppiVar26 = (int *****)ppppppiVar24;
              pppppppiVar8[2] = ppppppiVar24;
              *ppppppiVar24 = (int *****)pppppppiVar8;
              break;
            }
            if ((pppppppiVar8[1] == (int ******)0x0) ||
               (pppppppiVar20 = (int *******)(pppppppiVar8[1] + 3), *(char *)pppppppiVar20 != '\0'))
            {
              pppppppiVar20 = pppppppiVar10;
              if ((int *******)*pppppppiVar10 != pppppppiVar14) {
                pppppppiVar20 = (int *******)pppppppiVar10[1];
                ppppppiVar24 = *pppppppiVar20;
                pppppppiVar10[1] = ppppppiVar24;
                pppppppiVar14 = pppppppiVar10;
                if (ppppppiVar24 != (int ******)0x0) {
                  ppppppiVar24[2] = (int *****)pppppppiVar10;
                  pppppppiVar8 = (int *******)pppppppiVar10[2];
                  pppppppiVar14 = (int *******)*pppppppiVar8;
                }
                pppppppiVar20[2] = (int ******)pppppppiVar8;
                if (pppppppiVar14 != pppppppiVar10) {
                  pppppppiVar8 = pppppppiVar8 + 1;
                }
                *pppppppiVar8 = (int ******)pppppppiVar20;
                pppppppiVar10[2] = (int ******)pppppppiVar20;
                pppppppiVar8 = (int *******)pppppppiVar20[2];
                *pppppppiVar20 = (int ******)pppppppiVar10;
                pppppppiVar10 = (int *******)*pppppppiVar8;
              }
              *(undefined1 *)(pppppppiVar20 + 3) = 1;
              ppppppiVar24 = pppppppiVar10[1];
              *(undefined1 *)(pppppppiVar8 + 3) = 0;
              *pppppppiVar8 = ppppppiVar24;
              if (ppppppiVar24 != (int ******)0x0) {
                ppppppiVar24[2] = (int *****)pppppppiVar8;
              }
              ppppppiVar26 = pppppppiVar8[2];
              pppppppiVar14 = (int *******)*ppppppiVar26;
              pppppppiVar10[2] = ppppppiVar26;
              ppppppiVar24 = ppppppiVar26 + 1;
              if (pppppppiVar14 == pppppppiVar8) {
                ppppppiVar24 = ppppppiVar26;
              }
              *ppppppiVar24 = (int *****)pppppppiVar10;
              pppppppiVar8[2] = (int ******)pppppppiVar10;
              pppppppiVar10[1] = (int ******)pppppppiVar8;
              break;
            }
LAB_71ab0bf0:
            *(undefined1 *)(pppppppiVar10 + 3) = 1;
            *(bool *)(pppppppiVar8 + 3) = pppppppiVar8 == pppppppiStack_38;
            *(char *)pppppppiVar20 = '\x01';
            pppppppiVar14 = pppppppiVar8;
          } while (pppppppiVar8 != pppppppiStack_38);
LAB_71ab0aa8:
          puStack_90 = (uint *)((int)puStack_90 + 1);
          iStack_34 = (int)puStack_90;
LAB_71ab0ab8:
          pppppppiVar5[6] = ppppppiVar11;
          piVar27 = piVar27 + 1;
          piVar12 = piStack_9c;
          if (piVar27 == piVar7) goto LAB_71ab09f0;
        } while( true );
      }
      bVar1 = *(byte *)(piVar12 + 4);
      ppppppiVar24 = (int ******)piVar12[5];
      if ((bVar1 & 1) == 0) {
        ppppppiVar24 = (int ******)(uint)(bVar1 >> 1);
      }
      if (ppppppiVar24 != (int ******)0x0) {
        uStack_88 = piVar12[6];
        if ((bVar1 & 1) == 0) {
          uStack_88 = (int)piVar12 + 0x11;
        }
        puStack_44 = &uStack_88;
        ppppppiStack_84 = ppppppiVar24;
        thunk_eCExDIjaebmXEpltMaknSsaIhrBsMgbaCyOFgvyvhQiGRaiOKaaXVNCrqaTtkEuCWGTLeErPvnwQ_TfhCgcqAgmWPeXiAzXEEynjUfYcYBYcip__IFLcNkHBCuGNogBuSysVxGekhcmHQobmKYTORDHrrbnFAGuvbcIFxtHX_nJMvAemfUAMamqmFhTdGXPcTgZenqipVUmrDTREWUOUEOgyABzfWfWCdgOsjPthBVqGTaKOrXlnNkuHYJLEessjOeTCcHpauSwxSdGNzCFlcmicsXDZyZIZIwzpuVjKDGakKtYWMvxAkGciIipqUroiVPeOFXYmE_TQgLPdkroBNErcwoQgsRJmJyLyqtFD_L
                  (&uStack_58,&pppppppiStack_3c,puStack_44,&DAT_7008e8a7,&puStack_44,&uStack_25);
        *(int **)(uStack_58 + 0x18) = piVar12;
        piVar12 = piStack_9c;
      }
LAB_71ab09f0:
      piStack_9c = piVar12;
      puVar15 = puVar15 + 1;
      param_4 = ppppppiStack_2c;
    } while (puVar15 != param_1 + param_2);
  }
  ppppppiStack_2c = param_4;
  if (param_4 != (int ******)0x0) {
    bVar29 = false;
    puVar17 = puStack_30;
LAB_71ab0df0:
    do {
      ppppppiVar24 = (int ******)0x0;
      do {
        if (*(char *)((int)puVar17 + (int)ppppppiVar24) == ',' ||
            *(char *)((int)puVar17 + (int)ppppppiVar24) == ':') {
          if (param_4 == ppppppiVar24) {
            ppppppiVar24 = (int ******)0xffffffff;
          }
          goto LAB_71ab0e24;
        }
        ppppppiVar24 = (int ******)((int)ppppppiVar24 + 1);
      } while (param_4 != ppppppiVar24);
      ppppppiVar24 = (int ******)0xffffffff;
LAB_71ab0e24:
      ppppppiStack_40 = ppppppiVar24;
      if (param_4 < ppppppiVar24) {
        ppppppiStack_40 = param_4;
      }
      bVar2 = false;
      bVar9 = true;
      cStack_4c = '\0';
      uStack_58 = uStack_58 & 0xffffff00;
      pppppppiVar14 = (int *******)&pppppppiStack_38;
      puStack_44 = puVar17;
      bVar3 = bVar29;
      if (ppppppiVar24 == (int ******)0xffffffff) {
        param_4 = (int ******)0x0;
        puStack_90 = (uint *)&DAT_70064a63;
        pppppppiVar10 = pppppppiStack_38;
        ppppppiVar24 = ppppppiStack_40;
        if (pppppppiStack_38 != (int *******)0x0) goto LAB_71ab0f1c;
LAB_71ab0fd4:
        ppppppiVar24 = ppppppiStack_40;
        puVar17 = puStack_44;
        if (bVar2 || piStack_9c == (int *)0x0) {
          if (ppppppiStack_40 == (int ******)0x0) {
LAB_71ab11e0:
            bVar3 = true;
            if (bVar29) goto LAB_71ab0dd4;
          }
          else if ((char)*puStack_44 == '_' || bVar29) goto LAB_71ab0dd4;
          iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
          if (iVar4 == 0) {
            thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                      (&DAT_7009631a,s_____webrtc_apm_src_webrtc_rtc_ba_7006cbfe,0x301,
                       s_No_field_with_key____7006b58c,&puStack_44,s____found_in_trial____700657fb,
                       &puStack_30,&DAT_70061ec4);
          }
          ppppppiStack_84 = (int ******)0x0;
          uStack_88 = 0;
          uStack_80 = 0;
          pppppppiVar14 = pppppppiStack_3c;
          while ((int ********)pppppppiVar14 != &pppppppiStack_38) {
            thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
                      (&uStack_88,pppppppiVar14[4],pppppppiVar14[5]);
            thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                      (&uStack_88,&DAT_700642df);
            pppppppiVar10 = (int *******)pppppppiVar14[1];
            pppppppiVar8 = pppppppiVar14;
            if ((int *******)pppppppiVar14[1] == (int *******)0x0) {
              do {
                pppppppiVar14 = (int *******)pppppppiVar8[2];
                bVar29 = (int *******)*pppppppiVar14 != pppppppiVar8;
                pppppppiVar8 = pppppppiVar14;
              } while (bVar29);
            }
            else {
              do {
                pppppppiVar14 = pppppppiVar10;
                pppppppiVar10 = (int *******)*pppppppiVar14;
              } while ((int *******)*pppppppiVar14 != (int *******)0x0);
            }
          }
          iVar4 = thunk_GlaqsotmQIxdnufiJlivXIB_zbaynnonqiWUtNDfNyHbTlqdYqiedKD();
          if (iVar4 == 0) {
            thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                      (&DAT_7009103c,s_____webrtc_apm_src_webrtc_rtc_ba_7006cbfe,0x339,
                       s_Valid_keys_are__7006689d,&uStack_88);
          }
          if ((uStack_88 & 1) != 0) {
            thunk_qNQrlu(uStack_80);
          }
          bVar3 = true;
        }
        else {
          if (ppppppiStack_40 == (int ******)0x0) goto LAB_71ab11e0;
          if ((int ******)0xfffffff7 < ppppppiStack_40) {
                    /* WARNING: Subroutine does not return */
            FUN_71a11918(&uStack_88);
          }
          if (ppppppiStack_40 < (int ******)0xb) {
            uStack_88 = CONCAT31(uStack_88._1_3_,(char)((int)ppppppiStack_40 << 1));
            uVar21 = (uint)&uStack_88 | 1;
          }
          else {
            uVar28 = ((uint)ppppppiStack_40 | 7) + 1;
            uVar21 = thunk_MwhHq(uVar28);
            uStack_88 = uVar28 | 1;
            ppppppiStack_84 = ppppppiVar24;
            uStack_80 = uVar21;
          }
          imp___aeabi_memmove(uVar21,puVar17,ppppppiVar24);
          *(undefined1 *)(uVar21 + (int)ppppppiVar24) = 0;
          uStack_78 = CONCAT44(ppppppiStack_84,uStack_88);
          uStack_70 = uStack_80;
          ppppppiStack_84 = (int ******)0x0;
          uStack_88 = 0;
          uStack_80 = 0;
          cStack_6c = '\x01';
          iVar4 = (**(code **)(*piStack_9c + 8))(piStack_9c,&uStack_78);
          bVar1 = 0;
          if (cStack_6c != '\0') {
            bVar1 = (byte)uStack_78;
          }
          if (cStack_6c != '\0' && (bVar1 & 1) != 0) {
            thunk_qNQrlu(uStack_70);
          }
          if ((uStack_88 & 1) != 0) {
            thunk_qNQrlu(uStack_80);
          }
          if ((iVar4 == 0) &&
             (iVar4 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ(), iVar4 == 0))
          {
            thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                      (&DAT_7009631a,s_____webrtc_apm_src_webrtc_rtc_ba_7006cbfe,0x2c2,
                       s_Failed_to_read_empty_key_field_w_700657cf,&puStack_44,
                       s___in_trial____70061eb6,&puStack_30,&DAT_7006d3ec);
          }
        }
      }
      else {
        if (*(char *)((int)puVar17 + (int)ppppppiVar24) == ':') {
          if (param_4 <= ppppppiVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_71a66fdc(s_string_view__substr_70068a67);
          }
          uVar21 = 0xffffffff;
          uVar28 = (int)param_4 - ((int)ppppppiVar24 + 1U);
          pcVar25 = (char *)((int)puVar17 + (int)ppppppiVar24 + 1U);
          if (uVar28 != 0) {
            iVar4 = imp_memchr(pcVar25,0x2c,uVar28);
            uVar21 = iVar4 - (int)pcVar25;
            if (iVar4 == 0) {
              uVar21 = 0xffffffff;
            }
          }
          uVar23 = uVar21;
          if (uVar28 < uVar21) {
            uVar23 = uVar28;
          }
          if (0xfffffff7 < uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_71a11918(&uStack_58);
          }
          if (uVar23 < 0xb) {
            uStack_58 = CONCAT31(uStack_58._1_3_,(char)(uVar23 << 1));
            uVar6 = (uint)&uStack_58 | 1;
            if (uVar23 != 0) goto LAB_71ab108c;
          }
          else {
            uVar18 = (uVar23 | 7) + 1;
            uVar6 = thunk_MwhHq(uVar18);
            uStack_58 = uVar18 | 1;
            uStack_54 = uVar23;
            uStack_50 = uVar6;
LAB_71ab108c:
            imp___aeabi_memmove(uVar6,pcVar25,uVar23);
          }
          bVar9 = false;
          *(undefined1 *)(uVar6 + uVar23) = 0;
          bVar2 = true;
          cStack_4c = '\x01';
          puVar17 = puStack_44;
          if (uVar21 == 0xffffffff) {
            param_4 = (int ******)0x0;
            puStack_90 = (uint *)&DAT_70064a63;
          }
          else {
            if (uVar28 <= uVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_71a66fdc(s_string_view__substr_70068a67);
            }
            param_4 = (int ******)(uVar28 - (uVar21 + 1));
            puStack_90 = (uint *)(pcVar25 + uVar21 + 1);
          }
        }
        else {
          if (param_4 <= ppppppiVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_71a66fdc(s_string_view__substr_70068a67);
          }
          param_4 = (int ******)((int)param_4 - ((int)ppppppiVar24 + 1U));
          puStack_90 = (uint *)((int)puVar17 + (int)ppppppiVar24 + 1U);
        }
        pppppppiVar10 = pppppppiStack_38;
        puStack_44 = puVar17;
        ppppppiVar24 = ppppppiStack_40;
        if (pppppppiStack_38 == (int *******)0x0) goto LAB_71ab0fd4;
LAB_71ab0f1c:
        do {
          pppppppiVar5 = pppppppiVar14;
          pppppppiVar8 = pppppppiVar10;
          ppppppiVar11 = pppppppiVar8[5];
          ppppppiVar26 = ppppppiVar11;
          if (ppppppiVar24 < ppppppiVar11) {
            ppppppiVar26 = ppppppiVar24;
          }
          uVar21 = imp_memcmp(pppppppiVar8[4],puVar17,ppppppiVar26);
          if (uVar21 == 0) {
            uVar21 = (uint)(ppppppiVar11 < ppppppiVar24);
            uVar28 = uVar21 << 2;
          }
          else {
            uVar28 = uVar21 >> 0x1d & 4;
            uVar21 = uVar21 >> 0x1f;
          }
          pppppppiVar14 = pppppppiVar8;
          if (uVar21 != 0) {
            pppppppiVar14 = pppppppiVar5;
          }
          pppppppiVar10 = *(int ********)((int)pppppppiVar8 + uVar28);
        } while (*(int ********)((int)pppppppiVar8 + uVar28) != (int *******)0x0);
        pppppppiVar10 = (int *******)&pppppppiStack_38;
        if ((int ********)pppppppiVar14 != &pppppppiStack_38) {
          if (uVar21 != 0) {
            pppppppiVar8 = pppppppiVar5;
          }
          ppppppiVar11 = pppppppiVar8[5];
          ppppppiVar26 = ppppppiVar24;
          if (ppppppiVar11 < ppppppiVar24) {
            ppppppiVar26 = ppppppiVar11;
          }
          iVar4 = imp_memcmp(puVar17,pppppppiVar8[4],ppppppiVar26);
          pppppppiVar10 = pppppppiVar14;
          if (iVar4 == 0) {
            if (ppppppiVar24 < ppppppiVar11) {
              pppppppiVar10 = (int *******)&pppppppiStack_38;
            }
          }
          else if (iVar4 < 0) {
            pppppppiVar10 = (int *******)&pppppppiStack_38;
          }
        }
        if (&pppppppiStack_38 == (int ********)pppppppiVar10) goto LAB_71ab0fd4;
        cStack_5c = !bVar9;
        uStack_68 = uStack_68 & 0xffffffffffffff00;
        if ((bool)cStack_5c) {
          uStack_68 = CONCAT44(uStack_54,uStack_58);
          uStack_60 = uStack_50;
          uStack_54 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
        }
        iVar4 = (*(code *)(*pppppppiVar10[6])[2])(pppppppiVar10[6],&uStack_68);
        bVar1 = 0;
        if (cStack_5c != '\0') {
          bVar1 = (byte)uStack_68;
        }
        if (cStack_5c != '\0' && (bVar1 & 1) != 0) {
          thunk_qNQrlu(uStack_60);
        }
        if ((iVar4 == 0) &&
           (iVar4 = thunk_SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ(), iVar4 == 0)) {
          thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                    (&DAT_7009631a,s_____webrtc_apm_src_webrtc_rtc_ba_7006cbfe,0x29a,
                     s_Failed_to_read_field_with_key____700657ae,&puStack_44,
                     s___in_trial____70061eb6,&puStack_30,&DAT_7006d3ec);
        }
      }
LAB_71ab0dd4:
      bVar29 = bVar3;
      uVar21 = 0;
      if (cStack_4c != '\0') {
        uVar21 = uStack_58 & 0xff;
      }
      puVar17 = puStack_90;
      if (cStack_4c == '\0' || (uVar21 & 1) == 0) {
        if (param_4 == (int ******)0x0) break;
        goto LAB_71ab0df0;
      }
      thunk_qNQrlu(uStack_50);
    } while (param_4 != (int ******)0x0);
  }
  if (param_2 != 0) {
    param_2 = param_2 << 2;
    do {
      (**(code **)(*(int *)*param_1 + 0xc))();
      param_2 = param_2 + -4;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  FUN_71ab7bc4(&pppppppiStack_3c,pppppppiStack_38);
  return;
LAB_71ab0b00:
  pppppppiVar14 = (int *******)*pppppppiVar5;
  pppppppiVar10 = pppppppiVar5;
  goto LAB_71ab0b08;
}


// =========================================================================
// Function: qhDvRIZjURCyJGKOeiGZyjgntdqyoAwuIzuTwsqyGeAJJeGcVdrlWfsDgjZmfbFKTdfsHXjUaJHuOo_vjcpfQ_mmIQthUgiQXqBQXBVegCTsIBMhGa
// Entry: 0x71ab1638 | Size: 92 bytes
// =========================================================================

uint qhDvRIZjURCyJGKOeiGZyjgntdqyoAwuIzuTwsqyGeAJJeGcVdrlWfsDgjZmfbFKTdfsHXjUaJHuOo_vjcpfQ_mmIQthUgiQXqBQXBVegCTsIBMhGa
               (undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0x10000;
  }
  uVar1 = thunk_amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
                    ();
  uVar3 = 0;
  uVar2 = 0;
  uVar4 = 0;
  if (0xff < (uVar1 & 0xffff)) {
    uVar4 = uVar1 & 0xff00;
    uVar2 = uVar1 & 0xff;
    uVar3 = 0x10000;
  }
  return uVar2 | uVar3 | uVar4;
}


// =========================================================================
// Function: FGSJjuCwYvayebdinjtXXgFnmzsnkyZoFwaPQuOUgCEgRzqogUKZrFYCwZcICDbdGQoiwdQdsAmscetNqRlgoGSANIlmGVpZzcoEMySxPBsBPccAaV
// Entry: 0x71ab1694 | Size: 116 bytes
// =========================================================================

void FGSJjuCwYvayebdinjtXXgFnmzsnkyZoFwaPQuOUgCEgRzqogUKZrFYCwZcICDbdGQoiwdQdsAmscetNqRlgoGSANIlmGVpZzcoEMySxPBsBPccAaV
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
            (&uStack_18);
  if ((char)uStack_14 != '\0') {
    *param_1 = uStack_18;
    param_1[1] = uStack_14;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: IWueLmHy_WXdyNGKFaCxSCwuinhweGTIKwjCxmlDfcYuUMeaBtLZ_ASlNkONfKVETWqBvdqfmUxxEDRNWnsXlTdFNIUJOuhMkZLQVUjqPDdDSgQhsK
// Entry: 0x71ab1708 | Size: 116 bytes
// =========================================================================

void IWueLmHy_WXdyNGKFaCxSCwuinhweGTIKwjCxmlDfcYuUMeaBtLZ_ASlNkONfKVETWqBvdqfmUxxEDRNWnsXlTdFNIUJOuhMkZLQVUjqPDdDSgQhsK
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  thunk_bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
            (&uStack_18);
  if ((char)uStack_14 != '\0') {
    *param_1 = uStack_18;
    param_1[1] = uStack_14;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: RJyCQEeHegWnaYEYhxzwPJyjJSyellAAhIgTtlLDUmL_zT_AtluVkcDTUfVIDSRKJRfMMxyLShXlmXdsU_pTTUDrCUktNcbGdMrjvgSlVfLtxjIvWb
// Entry: 0x71ab177c | Size: 120 bytes
// =========================================================================

void RJyCQEeHegWnaYEYhxzwPJyjJSyellAAhIgTtlLDUmL_zT_AtluVkcDTUfVIDSRKJRfMMxyLShXlmXdsU_pTTUDrCUktNcbGdMrjvgSlVfLtxjIvWb
               (undefined8 *param_1,undefined4 param_2,int param_3)

{
  undefined8 uStack_20;
  char cStack_18;
  undefined7 uStack_17;
  
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)param_1 = 0;
    return;
  }
  thunk_xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
            (&uStack_20);
  if (cStack_18 != '\0') {
    *param_1 = uStack_20;
    param_1[1] = CONCAT71(uStack_17,cStack_18);
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


// =========================================================================
// Function: lkyNnYNEmLlrFLZQdPkcjGhMGicaGkmzgtYgvjsezeizaJtuWfqoi_vpoNEienAQSUqqRAQoSvcpkFYmkEY
// Entry: 0x71ab17f4 | Size: 184 bytes
// =========================================================================

undefined4 *
lkyNnYNEmLlrFLZQdPkcjGhMGicaGkmzgtYgvjsezeizaJtuWfqoi_vpoNEienAQSUqqRAQoSvcpkFYmkEY
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab1880;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab1880:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b134f8;
  return param_1;
}


// =========================================================================
// Function: nFOVaNUxHnxjrLlUFxgOOZbmrwwubAMrEyOxZPVyQCYEAmCVpMPiNZEH_TUJagJttFVrAexnkLYbyOjOkzHk
// Entry: 0x71ab18cc | Size: 192 bytes
// =========================================================================

undefined4 *
nFOVaNUxHnxjrLlUFxgOOZbmrwwubAMrEyOxZPVyQCYEAmCVpMPiNZEH_TUJagJttFVrAexnkLYbyOjOkzHk
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab195c;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab195c:
  *(undefined1 *)(iVar2 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b134f8;
  *(undefined1 *)((int)param_1 + 0x1d) = param_4;
  return param_1;
}


// =========================================================================
// Function: XhyOXyexfDAinNTHcZuCReWmGdwdgrjVw
// Entry: 0x71ab19ac | Size: 8 bytes
// =========================================================================

undefined1 XhyOXyexfDAinNTHcZuCReWmGdwdgrjVw(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}


// =========================================================================
// Function: BWBNUCClcBfcriHSOTfFeJRqoTqnRvWb
// Entry: 0x71ab19b4 | Size: 8 bytes
// =========================================================================

undefined1 BWBNUCClcBfcriHSOTfFeJRqoTqnRvWb(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}


// =========================================================================
// Function: LGXnoyYkgFiCCWtmCdhjIAgOpumjhjZScILJmBYFwpQn_HAqjAuYGDYkNCCUkeaFjzMCBlcCrNIexvgolfYSPyxrwZufAZNcVcL_hlxIckWbgBt_ytts
// Entry: 0x71ab19bc | Size: 92 bytes
// =========================================================================

undefined4
LGXnoyYkgFiCCWtmCdhjIAgOpumjhjZScILJmBYFwpQn_HAqjAuYGDYkNCCUkeaFjzMCBlcCrNIexvgolfYSPyxrwZufAZNcVcL_hlxIckWbgBt_ytts
          (int param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar1 = 1;
  if (param_2[0xc] != 0) {
    uVar2 = *(uint *)(param_2 + 4);
    pbVar3 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (uint)(*param_2 >> 1);
    }
    uVar1 = thunk_amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
                      (pbVar3,uVar2);
    if (uVar1 < 0x100) {
      return 0;
    }
  }
  *(char *)(param_1 + 0x1d) = (char)uVar1;
  return 1;
}


// =========================================================================
// Function: IYZnXYPoPrR_PQRwhRxoRwV_TDZobdfaDSvWpzoBBfFVhjRxkUfRrLcwQeRymdOUSqlABqePeVVvEcTjxV_VwFp_LHZjxWzUvXUVnlQCVKOCBSxhoOmvKjSclpXP_ZXcjLztPAGiJlRMDkKePtvezAqwwZiOxrmqkvJFHjqvqfRndprOhABzSJTwjG
// Entry: 0x71ab1a18 | Size: 640 bytes
// =========================================================================

undefined4 *
IYZnXYPoPrR_PQRwhRxoRwV_TDZobdfaDSvWpzoBBfFVhjRxkUfRrLcwQeRymdOUSqlABqePeVVvEcTjxV_VwFp_LHZjxWzUvXUVnlQCVKOCBSxhoOmvKjSclpXP_ZXcjLztPAGiJlRMDkKePtvezAqwwZiOxrmqkvJFHjqvqfRndprOhABzSJTwjG
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
          undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_2c [8];
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar7 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab1ab0;
  }
  else {
    uVar4 = (param_3 | 7) + 1;
    iVar7 = thunk_MwhHq(uVar4);
    param_1[4] = uVar4 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar7;
  }
  imp___aeabi_memmove(iVar7,param_2,param_3);
LAB_71ab1ab0:
  *(undefined1 *)(iVar7 + param_3) = 0;
  puVar8 = param_1 + 10;
  *puVar8 = 0;
  param_1[9] = puVar8;
  piVar6 = (int *)*param_5;
  *param_1 = &DAT_70b13510;
  param_1[0xb] = 0;
  param_1[8] = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  if (piVar6 == param_5 + 1) {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = param_1 + 0xd;
    return param_1;
  }
  do {
    thunk_BPrEEYOUDiadCpWPUFNhtbRCDQhdEQtPBnaRfeoAvGQDynMSmKCMduGBgrYBfbS_KnJNUW_SwDiNlOGrssoaiFzENXJhbXgcmkjnvpUYFWPueQJHqvgYQNXKTDjJdBEAsusejjbwRefjEQuFveTRROitMfiqfvJzyWPiyfaMKMlRwPfZqYYnpIfkKeZXatvclOfIzgEFIrglVicKjcQSRXdExVplvZQFUYiaVphYNRojmIBwZMtRLcorBJNZYjTMOUuvNAvEQGJxICyXoOkkmAyYvcIHhxXgLqNxAsRTAXJOepsaUWgfAqIJxegGWPPPRsREq
              (auStack_2c,param_1 + 9,puVar8,piVar6 + 4,piVar6 + 4);
    piVar2 = (int *)piVar6[1];
    piVar3 = piVar6;
    if ((int *)piVar6[1] == (int *)0x0) {
      do {
        piVar6 = (int *)piVar3[2];
        bVar12 = (int *)*piVar6 != piVar3;
        piVar3 = piVar6;
      } while (bVar12);
    }
    else {
      do {
        piVar6 = piVar2;
        piVar2 = (int *)*piVar6;
      } while ((int *)*piVar6 != (int *)0x0);
    }
  } while (piVar6 != param_5 + 1);
  puVar11 = param_1 + 0xd;
  *puVar11 = 0;
  piVar6 = param_1 + 0xc;
  *piVar6 = (int)puVar11;
  puVar10 = (undefined4 *)param_1[9];
  param_1[0xe] = 0;
  do {
    if (puVar10 == puVar8) {
      return param_1;
    }
    iVar7 = puVar10[7];
    puVar1 = (undefined4 *)*puVar11;
    puVar5 = puVar11;
    puVar9 = puVar11;
    if ((undefined4 *)*puVar11 != (undefined4 *)0x0) {
      do {
        while (puVar5 = puVar1, iVar7 < (int)puVar5[4]) {
          puVar1 = (undefined4 *)*puVar5;
          puVar9 = puVar5;
          if ((undefined4 *)*puVar5 == (undefined4 *)0x0) goto LAB_71ab1bf0;
        }
        if (iVar7 <= (int)puVar5[4]) goto LAB_71ab1c40;
        puVar1 = (undefined4 *)puVar5[1];
      } while ((undefined4 *)puVar5[1] != (undefined4 *)0x0);
      puVar9 = puVar5 + 1;
    }
LAB_71ab1bf0:
    puVar1 = (undefined4 *)thunk_MwhHq(0x14);
    puVar1[1] = 0;
    puVar1[2] = puVar5;
    *puVar1 = 0;
    *puVar9 = puVar1;
    piVar2 = (int *)*piVar6;
    puVar1[4] = iVar7;
    if (*piVar2 != 0) {
      *piVar6 = *piVar2;
      puVar1 = (undefined4 *)*puVar9;
    }
    FUN_71a4128a(param_1[0xd],puVar1);
    param_1[0xe] = param_1[0xe] + 1;
LAB_71ab1c40:
    puVar1 = (undefined4 *)puVar10[1];
    puVar5 = puVar10;
    if ((undefined4 *)puVar10[1] == (undefined4 *)0x0) {
      do {
        puVar10 = (undefined4 *)puVar5[2];
        bVar12 = (undefined4 *)*puVar10 != puVar5;
        puVar5 = puVar10;
      } while (bVar12);
    }
    else {
      do {
        puVar10 = puVar1;
        puVar1 = (undefined4 *)*puVar10;
      } while ((undefined4 *)*puVar10 != (undefined4 *)0x0);
    }
  } while( true );
}


// =========================================================================
// Function: IHhsdkMUXhsEezzkBFqpFOuUbjvfIPcqMdwjdrxGfI
// Entry: 0x71ab1ce8 | Size: 240 bytes
// =========================================================================

undefined4 * IHhsdkMUXhsEezzkBFqpFOuUbjvfIPcqMdwjdrxGfI(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_2c [8];
  
  thunk_jvwfOQOZGWusFwsuEdpjIMQErpLnpgAc_jOXSLq_djygAtmF();
  puVar4 = param_1 + 10;
  *puVar4 = 0;
  param_1[9] = puVar4;
  piVar5 = *(int **)(param_2 + 0x24);
  *param_1 = &DAT_70b13510;
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  param_1[0xb] = 0;
  param_1[8] = uVar2;
  if (piVar5 != (int *)(param_2 + 0x28)) {
    do {
      thunk_BPrEEYOUDiadCpWPUFNhtbRCDQhdEQtPBnaRfeoAvGQDynMSmKCMduGBgrYBfbS_KnJNUW_SwDiNlOGrssoaiFzENXJhbXgcmkjnvpUYFWPueQJHqvgYQNXKTDjJdBEAsusejjbwRefjEQuFveTRROitMfiqfvJzyWPiyfaMKMlRwPfZqYYnpIfkKeZXatvclOfIzgEFIrglVicKjcQSRXdExVplvZQFUYiaVphYNRojmIBwZMtRLcorBJNZYjTMOUuvNAvEQGJxICyXoOkkmAyYvcIHhxXgLqNxAsRTAXJOepsaUWgfAqIJxegGWPPPRsREq
                (auStack_2c,param_1 + 9,puVar4,piVar5 + 4,piVar5 + 4);
      piVar1 = (int *)piVar5[1];
      piVar3 = piVar5;
      if ((int *)piVar5[1] == (int *)0x0) {
        do {
          piVar5 = (int *)piVar3[2];
          bVar6 = (int *)*piVar5 != piVar3;
          piVar3 = piVar5;
        } while (bVar6);
      }
      else {
        do {
          piVar5 = piVar1;
          piVar1 = (int *)*piVar5;
        } while ((int *)*piVar5 != (int *)0x0);
      }
    } while (piVar5 != (int *)(param_2 + 0x28));
  }
  param_1[0xd] = 0;
  param_1[0xc] = param_1 + 0xd;
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  param_1[0xe] = 0;
  thunk_xlINZwSGpUflINNPPKBdawMqcYdCcZBIxVcSCKwIRWUeWSDzRoGGkypHLgXxuZTYBmihvQaAdQrrltlfqonJDHnBpaRzECPriyajGyoMVNdAEiJxhJlduPNvIfmsfMhk
            (param_1 + 0xc,uVar2,param_2 + 0x34);
  return param_1;
}


// =========================================================================
// Function: D_gcvirfIdTFiRJtDvVKuoNofYYwnvMCkkdQgt
// Entry: 0x71ab1e04 | Size: 116 bytes
// =========================================================================

undefined4 * D_gcvirfIdTFiRJtDvVKuoNofYYwnvMCkkdQgt(undefined4 *param_1)

{
  *param_1 = &DAT_70b13510;
  FUN_71ab871c(param_1 + 0xc,param_1[0xd]);
  FUN_71ab8648(param_1 + 9,param_1[10]);
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: vCsBjMIVMQMhrpGN_cLQmnkIKykqnZHdLeKPHN
// Entry: 0x71ab1e80 | Size: 28 bytes
// =========================================================================

void vCsBjMIVMQMhrpGN_cLQmnkIKykqnZHdLeKPHN(undefined4 param_1)

{
  thunk_D_gcvirfIdTFiRJtDvVKuoNofYYwnvMCkkdQgt();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: DlcVxzBsnNuhjcMutRsmIUJsdEqiNXLuOj_duCsLuqNBCifxBljiTkiSGhKUavtdjDZQdXBehWyNyKEDboZgovJNuOIHJR_oDUZdrktbvTrzdAzNEOsbAngEQjhe
// Entry: 0x71ab1e9c | Size: 220 bytes
// =========================================================================

undefined4
DlcVxzBsnNuhjcMutRsmIUJsdEqiNXLuOj_duCsLuqNBCifxBljiTkiSGhKUavtdjDZQdXBehWyNyKEDboZgovJNuOIHJR_oDUZdrktbvTrzdAzNEOsbAngEQjhe
          (int param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *extraout_r12;
  int *piVar7;
  int iStack_20;
  char cStack_1c;
  
  if (param_2[0xc] != 0) {
    iVar1 = thunk_AxqNXlTACmYuCXlzmszNHtbqidQTNzOuSujLjyDFHmDRn_znODhsTYTFkWKoIbsLnhKzuJVuYHiuDQlGJDskqupEaHFpAgjfvUoKsOrvepPkuLSaQgcFUYYTf_ASKSuLOCYME_iSBIrAwEvQfYOzxTAINgcTgRzvUiZfyaQOTlghpPvNLiIRvCobSTbRSVFJDMSkutdHVpKChFgSBvefJyzVJQtrfOeRvlHd
                      (param_1 + 0x24);
    if (param_1 + 0x28 != iVar1) {
      iStack_20 = *(int *)(iVar1 + 0x1c);
LAB_71ab1ed8:
      *(int *)(param_1 + 0x20) = iStack_20;
      return 1;
    }
    pbVar3 = *(byte **)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 4);
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar4 = (uint)(*param_2 >> 1);
    }
    thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
              (&iStack_20,pbVar3,uVar4);
    piVar2 = (int *)0x0;
    piVar7 = extraout_r12;
    if (cStack_1c != '\0') {
      piVar7 = (int *)(param_1 + 0x34);
      piVar2 = (int *)*piVar7;
    }
    piVar5 = piVar7;
    if (cStack_1c != '\0' && piVar2 != (int *)0x0) {
      do {
        piVar6 = piVar2;
        if (piVar2[4] < iStack_20) {
          piVar2 = piVar2 + 1;
          piVar6 = piVar5;
        }
        piVar2 = (int *)*piVar2;
        piVar5 = piVar6;
      } while (piVar2 != (int *)0x0);
      if ((piVar6 != piVar7) && (piVar6[4] <= iStack_20)) goto LAB_71ab1ed8;
    }
  }
  return 0;
}


// =========================================================================
// Function: iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI
// Entry: 0x71ab1f78 | Size: 76 bytes
// =========================================================================

undefined4 * iGDRqCUVhdnUhWDMVvOFxHjePxHBoOlndFNwRwENvlbI(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: twGmEjzrOdOuYpLPjXCpawhsVKacESQzJvbsKjYYPjArExswdOrQHxWThEDAUKXJCLCCtWKlKieqpBjwGMZsjHgswGJt
// Entry: 0x71ab3128 | Size: 192 bytes
// =========================================================================

undefined4 *
twGmEjzrOdOuYpLPjXCpawhsVKacESQzJvbsKjYYPjArExswdOrQHxWThEDAUKXJCLCCtWKlKieqpBjwGMZsjHgswGJt
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab31b8;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab31b8:
  *(undefined1 *)(iVar2 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b133a8;
  *(undefined1 *)((int)param_1 + 0x1d) = param_4;
  return param_1;
}


// =========================================================================
// Function: JZyHtslGswRczOSoyJdyObIjWiEjYpydZUaodQGVI
// Entry: 0x71ab32e4 | Size: 8 bytes
// =========================================================================

undefined1 JZyHtslGswRczOSoyJdyObIjWiEjYpydZUaodQGVI(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}


// =========================================================================
// Function: qRKEzSeHrgzCpQxrTutGxseYNAcVJOMKnMOrUfAC
// Entry: 0x71ab3304 | Size: 8 bytes
// =========================================================================

undefined1 qRKEzSeHrgzCpQxrTutGxseYNAcVJOMKnMOrUfAC(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}


// =========================================================================
// Function: KEABYJbLAvqGoKGiEaOdgrLlDVfebTasDHcufNS
// Entry: 0x71ab3324 | Size: 8 bytes
// =========================================================================

int KEABYJbLAvqGoKGiEaOdgrLlDVfebTasDHcufNS(int param_1)

{
  return param_1 + 0x1d;
}


// =========================================================================
// Function: EYQdaXoJjzY_ePvjlfYjjPqntJeecgyFsuiNUbwGwfITEGRe
// Entry: 0x71ab3344 | Size: 8 bytes
// =========================================================================

void EYQdaXoJjzY_ePvjlfYjjPqntJeecgyFsuiNUbwGwfITEGRe(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1d) = param_2;
  return;
}


// =========================================================================
// Function: xjOEhRhYyuclMQpjnnzfLqsFjUUSGwTLXgNRGCt_mofGyTBtkDeeanqmKucWpjpDHASydtKWvKdjSDERndMvxAi_tlnyyKFc_pXxdArejzQaPrtTirxDOAAdjdQr
// Entry: 0x71ab3364 | Size: 84 bytes
// =========================================================================

bool xjOEhRhYyuclMQpjnnzfLqsFjUUSGwTLXgNRGCt_mofGyTBtkDeeanqmKucWpjpDHASydtKWvKdjSDERndMvxAi_tlnyyKFc_pXxdArejzQaPrtTirxDOAAdjdQr
               (int param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_2[0xc] != 0) {
    uVar2 = *(uint *)(param_2 + 4);
    pbVar3 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (uint)(*param_2 >> 1);
    }
    uVar1 = thunk_amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
                      (pbVar3,uVar2);
    bVar4 = 0xff < uVar1;
    if (bVar4) {
      *(char *)(param_1 + 0x1d) = (char)uVar1;
    }
  }
  return bVar4;
}


// =========================================================================
// Function: Sy_GIyqZYAZXGtvtJGuPnGcEqMuAhnpEnFETdlDLExkBYoerQAfMNVrHwBNlQfIqYsUTxmCWgTyaWJItGaYp_TdpCNcf
// Entry: 0x71ab33ec | Size: 192 bytes
// =========================================================================

undefined4 *
Sy_GIyqZYAZXGtvtJGuPnGcEqMuAhnpEnFETdlDLExkBYoerQAfMNVrHwBNlQfIqYsUTxmCWgTyaWJItGaYp_TdpCNcf
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined8 param_5
          )

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab3478;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab3478:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b133c0;
  *(undefined8 *)(param_1 + 8) = param_5;
  return param_1;
}


// =========================================================================
// Function: YajJAiXNcPsSPDufKWsOnBIsfHWNYUnPCAzZYqyhx
// Entry: 0x71ab35a8 | Size: 12 bytes
// =========================================================================

undefined8 YajJAiXNcPsSPDufKWsOnBIsfHWNYUnPCAzZYqyhx(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// =========================================================================
// Function: PzxZaOjcIoGvhrkMTkYpEzIv_HswhrpNmSvGhfqe
// Entry: 0x71ab35cc | Size: 12 bytes
// =========================================================================

undefined8 PzxZaOjcIoGvhrkMTkYpEzIv_HswhrpNmSvGhfqe(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// =========================================================================
// Function: GwbljfkNdFjmfQDWjv_prAGpNxhSkQA_brrqHca
// Entry: 0x71ab35f0 | Size: 8 bytes
// =========================================================================

int GwbljfkNdFjmfQDWjv_prAGpNxhSkQA_brrqHca(int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: urujPMIIkEHJqROhyGdOFfOBdiCxIqBPTIoYbCKgqXhWCTYp
// Entry: 0x71ab3610 | Size: 16 bytes
// =========================================================================

void urujPMIIkEHJqROhyGdOFfOBdiCxIqBPTIoYbCKgqXhWCTYp
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  return;
}


// =========================================================================
// Function: nSUQkmJtpontnwOvRobTfV_lbjGAWTEZsYooPimKOovTjXHlWaaviuhZUwqfnWzrDUnMWsAZbgOlzRIcDYdtVg_CWYCGwtDbNZuqGGMsWWGdZLnWYzxtgWrXsIGo
// Entry: 0x71ab3638 | Size: 96 bytes
// =========================================================================

bool nSUQkmJtpontnwOvRobTfV_lbjGAWTEZsYooPimKOovTjXHlWaaviuhZUwqfnWzrDUnMWsAZbgOlzRIcDYdtVg_CWYCGwtDbNZuqGGMsWWGdZLnWYzxtgWrXsIGo
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  undefined8 uStack_28;
  char cStack_20;
  
  bVar3 = false;
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
              (&uStack_28,pbVar2,uVar1);
    bVar3 = cStack_20 != '\0';
    if (bVar3) {
      *(undefined8 *)(param_1 + 0x20) = uStack_28;
    }
  }
  return bVar3;
}


// =========================================================================
// Function: EWKvcMjwIKjDTPoLrmKAxYeBIZLWJgGDReotUeAUIAXrHiwAAhpzXORvkWW_dDjfYHqJLyLuxqZEaRujhAAtoXGLsQEO
// Entry: 0x71ab36cc | Size: 192 bytes
// =========================================================================

undefined4 *
EWKvcMjwIKjDTPoLrmKAxYeBIZLWJgGDReotUeAUIAXrHiwAAhpzXORvkWW_dDjfYHqJLyLuxqZEaRujhAAtoXGLsQEO
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab375c;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab375c:
  *(undefined1 *)(iVar2 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b133d8;
  param_1[8] = param_4;
  return param_1;
}


// =========================================================================
// Function: WTVeDcduoSpEDRtLGLMmsSYNRofMVrtsjVkASljSv
// Entry: 0x71ab3888 | Size: 8 bytes
// =========================================================================

undefined4 WTVeDcduoSpEDRtLGLMmsSYNRofMVrtsjVkASljSv(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: nbDtIbnKY_ngsNHFlxxazZFMOcEgFdPEYcLEkhcf
// Entry: 0x71ab38a8 | Size: 8 bytes
// =========================================================================

undefined4 nbDtIbnKY_ngsNHFlxxazZFMOcEgFdPEYcLEkhcf(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: HQMorlTDVweGDialRZmkpReIBuLOAbuaERLeWLm
// Entry: 0x71ab38c8 | Size: 8 bytes
// =========================================================================

int HQMorlTDVweGDialRZmkpReIBuLOAbuaERLeWLm(int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: aBghQdGiGSnLXWqmPtHGBjQLyVbsEadwsdtjmTfIBbADrcRk
// Entry: 0x71ab38e8 | Size: 8 bytes
// =========================================================================

void aBghQdGiGSnLXWqmPtHGBjQLyVbsEadwsdtjmTfIBbADrcRk(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


// =========================================================================
// Function: WnuPAuUaePek_iDAxcykbdcHpQDRtCIEZG_XPddmyXlmdUoqNNuC_srChpVphHTwHialVFexU_KpnBIewRGspcILnXQOUFBkRCWcaZqqqDkYaFaCLeSUFou_tcKX
// Entry: 0x71ab3908 | Size: 96 bytes
// =========================================================================

bool WnuPAuUaePek_iDAxcykbdcHpQDRtCIEZG_XPddmyXlmdUoqNNuC_srChpVphHTwHialVFexU_KpnBIewRGspcILnXQOUFBkRCWcaZqqqDkYaFaCLeSUFou_tcKX
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uStack_20;
  char cStack_1c;
  
  bVar3 = false;
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
              (&uStack_20,pbVar2,uVar1);
    bVar3 = cStack_1c != '\0';
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x20) = uStack_20;
    }
  }
  return bVar3;
}


// =========================================================================
// Function: CtpaHtDmMllwisVOyNhSZqpQALYmWULHccoDfOoxPavBixgVoNgbGVhUYYJWxCGbLJnMXHTzbArATZtNFQbEcHDMJujv
// Entry: 0x71ab399c | Size: 192 bytes
// =========================================================================

undefined4 *
CtpaHtDmMllwisVOyNhSZqpQALYmWULHccoDfOoxPavBixgVoNgbGVhUYYJWxCGbLJnMXHTzbArATZtNFQbEcHDMJujv
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab3a2c;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab3a2c:
  *(undefined1 *)(iVar2 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b133f0;
  param_1[8] = param_4;
  return param_1;
}


// =========================================================================
// Function: mldZsCQWS_tdqcWBmYJSSgQYYYDkSSnVXBgQLLbKN
// Entry: 0x71ab3b58 | Size: 8 bytes
// =========================================================================

undefined4 mldZsCQWS_tdqcWBmYJSSgQYYYDkSSnVXBgQLLbKN(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: ChPSIKpOywtdrYFgzKHagpFCFmGjivJscesuivM_
// Entry: 0x71ab3b78 | Size: 8 bytes
// =========================================================================

undefined4 ChPSIKpOywtdrYFgzKHagpFCFmGjivJscesuivM_(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: IYbNeyMQwKXZPJOcqRql_GVZZQ_dfenxNuATSNJ
// Entry: 0x71ab3b98 | Size: 8 bytes
// =========================================================================

int IYbNeyMQwKXZPJOcqRql_GVZZQ_dfenxNuATSNJ(int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: F_FPZvgTmWINYefdRtihexQizAkkUBSuSyLhdmYOohZqhlQH
// Entry: 0x71ab3bb8 | Size: 8 bytes
// =========================================================================

void F_FPZvgTmWINYefdRtihexQizAkkUBSuSyLhdmYOohZqhlQH(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


// =========================================================================
// Function: JElnvHXJFJdJMxvZlOWVOAPgdLEgYdoEfqLGPsRhwhJKkhZUrvhVndOu_uUfrFLzxOEdlmlXDJYfLRwflvFDddzqfnXmVQTxPuJGPGTwlplMZWnOCVNOPMrjyGkA
// Entry: 0x71ab3bd8 | Size: 96 bytes
// =========================================================================

bool JElnvHXJFJdJMxvZlOWVOAPgdLEgYdoEfqLGPsRhwhJKkhZUrvhVndOu_uUfrFLzxOEdlmlXDJYfLRwflvFDddzqfnXmVQTxPuJGPGTwlplMZWnOCVNOPMrjyGkA
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uStack_20;
  char cStack_1c;
  
  bVar3 = false;
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
              (&uStack_20,pbVar2,uVar1);
    bVar3 = cStack_1c != '\0';
    if (bVar3) {
      *(undefined4 *)(param_1 + 0x20) = uStack_20;
    }
  }
  return bVar3;
}


// =========================================================================
// Function: W_DtzoBQGhPmVJPszahGdYVpTOPaeNkhrkjTGQXbhyFczHkMIVhPlNprBEarxcfTTpHzo_mdVgyTDl_oIXsBqRethWRjYYXdFNkioNhT_DHTRwnFBadWcpDTTReDBYgNFOVUGFSm
// Entry: 0x71ab3c6c | Size: 240 bytes
// =========================================================================

undefined4 *
W_DtzoBQGhPmVJPszahGdYVpTOPaeNkhrkjTGQXbhyFczHkMIVhPlNprBEarxcfTTpHzo_mdVgyTDl_oIXsBqRethWRjYYXdFNkioNhT_DHTRwnFBadWcpDTTReDBYgNFOVUGFSm
          (undefined4 *param_1,undefined4 param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab3cfc;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab3cfc:
  *(undefined1 *)(iVar2 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b13408;
  if ((*param_4 & 1) != 0) {
    FUN_712f6d58(param_1 + 8,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 4));
    return param_1;
  }
  uVar3 = *(undefined8 *)param_4;
  param_1[10] = *(undefined4 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  return param_1;
}


// =========================================================================
// Function: rwJoYzUsResyoXCACKFWyuNhCrOTBmoSfgeVxzlxWAqcUCGqpQFpWAtgMviLfceUhcGiHGbtdxoVJfEdiEDqMMqNzQODDm_vAcgXWYKTpqY
// Entry: 0x71ab3eb8 | Size: 60 bytes
// =========================================================================

void rwJoYzUsResyoXCACKFWyuNhCrOTBmoSfgeVxzlxWAqcUCGqpQFpWAtgMviLfceUhcGiHGbtdxoVJfEdiEDqMMqNzQODDm_vAcgXWYKTpqY
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x28);
    *param_1 = uVar1;
    return;
  }
  FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x24));
  return;
}


// =========================================================================
// Function: SFuRrqseSBlOcXa_KklNLXEl_nXYhQxoGImEHXUSmWYyMXwPPDdfmvGuweJUJBXYpAQjKbTULmZHGF__XAfYUaRHMtneZmyBYBJFgGBhRzGb
// Entry: 0x71ab3f28 | Size: 60 bytes
// =========================================================================

void SFuRrqseSBlOcXa_KklNLXEl_nXYhQxoGImEHXUSmWYyMXwPPDdfmvGuweJUJBXYpAQjKbTULmZHGF__XAfYUaRHMtneZmyBYBJFgGBhRzGb
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x28);
    *param_1 = uVar1;
    return;
  }
  FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x24));
  return;
}


// =========================================================================
// Function: sajpDZzbYsBpPNQPKbbGhkVGYEcuXikxaHAGuvmGF_LjAorQdvdePfUVRukPBHChxdPrraLwodn_ZBLLhFZBBxHTOzcaPdInEQUlOaQsp
// Entry: 0x71ab3f98 | Size: 8 bytes
// =========================================================================

int sajpDZzbYsBpPNQPKbbGhkVGYEcuXikxaHAGuvmGF_LjAorQdvdePfUVRukPBHChxdPrraLwodn_ZBLLhFZBBxHTOzcaPdInEQUlOaQsp
              (int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: TTKiAZUJyiSZnGHMkTrHwlehdeItVOLwRu_fkuWWqEtpAavsTCAxAsCBYwHEhAFUmS_WVQgpBjfWbHZUZertTLVslpYxwaqWWXNWAeGenXaDfTsWystl
// Entry: 0x71ab3fb8 | Size: 8 bytes
// =========================================================================

void TTKiAZUJyiSZnGHMkTrHwlehdeItVOLwRu_fkuWWqEtpAavsTCAxAsCBYwHEhAFUmS_WVQgpBjfWbHZUZertTLVslpYxwaqWWXNWAeGenXaDfTsWystl
               (int param_1)

{
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi(param_1 + 0x20);
  return;
}


// =========================================================================
// Function: VGMQalYdgWqVLInfJFzIZLQuSOJrCrgcnldHIFsxYXbWWIWn_qsQowKrheMEnPKEDjBdnghSGeyhCKXnmIxwJOhXSKDJCwVbuekemlHmfOGHWCVGJrQaMuQkwhnDJJ
// Entry: 0x71ab3ff4 | Size: 244 bytes
// =========================================================================

byte VGMQalYdgWqVLInfJFzIZLQuSOJrCrgcnldHIFsxYXbWWIWn_qsQowKrheMEnPKEDjBdnghSGeyhCKXnmIxwJOhXSKDJCwVbuekemlHmfOGHWCVGJrQaMuQkwhnDJJ
               (int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uStack_40;
  uint uStack_38;
  char cStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  bVar1 = param_2[0xc];
  if (bVar1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_2 + 4);
  pbVar5 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar4 = (uint)(*param_2 >> 1);
  }
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&iStack_30);
  }
  if (uVar4 < 0xb) {
    iStack_30 = CONCAT31(iStack_30._1_3_,(char)(uVar4 << 1));
    uVar3 = (uint)&iStack_30 | 1;
    if (uVar4 == 0) goto LAB_71ab4080;
  }
  else {
    uVar3 = thunk_MwhHq((uVar4 | 7) + 1);
    iStack_30 = (uVar4 | 7) + 2;
    uStack_2c = uVar4;
    uStack_28 = uVar3;
  }
  imp___aeabi_memmove(uVar3,pbVar5,uVar4);
LAB_71ab4080:
  *(undefined1 *)(uVar3 + uVar4) = 0;
  uStack_40 = CONCAT44(uStack_2c,iStack_30);
  cStack_34 = '\x01';
  uStack_38 = uStack_28;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (param_1 + 0x20,&uStack_40);
  bVar2 = 0;
  if (cStack_34 != '\0') {
    bVar2 = (byte)uStack_40;
  }
  if (cStack_34 == '\0' || (bVar2 & 1) == 0) {
    return bVar1;
  }
  thunk_qNQrlu(uStack_38);
  return bVar1;
}


// =========================================================================
// Function: cMWulunoUvGyvVtZaDWrMsJyfYWVMPYKmZikbEklbtMVLCxZnyiUQYVjORFXTIoipZJcDTodEcnOEZGsRqpPTayqedsoOhJYhCjNAkDBWpOxOZmxNJ
// Entry: 0x71ab4204 | Size: 248 bytes
// =========================================================================

undefined4 *
cMWulunoUvGyvVtZaDWrMsJyfYWVMPYKmZikbEklbtMVLCxZnyiUQYVjORFXTIoipZJcDTodEcnOEZGsRqpPTayqedsoOhJYhCjNAkDBWpOxOZmxNJ
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined8 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab4290;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab4290:
  *(undefined1 *)(iVar1 + param_3) = 0;
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  param_1[0xd] = param_9;
  param_1[0xe] = param_10;
  *param_1 = &DAT_70b13420;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[10] = param_6;
  param_1[0xf] = param_11;
  param_1[0x10] = param_12;
  param_1[0x11] = param_13;
  return param_1;
}


// =========================================================================
// Function: glXmBaEhMeorCPJQGUGzAOgwWYLgasoPXiPBrXthr_R
// Entry: 0x71ab43f8 | Size: 12 bytes
// =========================================================================

undefined8 glXmBaEhMeorCPJQGUGzAOgwWYLgasoPXiPBrXthr_R(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// =========================================================================
// Function: zZeDhCqSQFvsiOgjheEselkStWifirMFkBSjbJbVmS
// Entry: 0x71ab441c | Size: 12 bytes
// =========================================================================

undefined8 zZeDhCqSQFvsiOgjheEselkStWifirMFkBSjbJbVmS(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// =========================================================================
// Function: akX_QLzdGSILmjzMNwcsDoLbdEMUdxqTHTthMSzSD
// Entry: 0x71ab4440 | Size: 8 bytes
// =========================================================================

int akX_QLzdGSILmjzMNwcsDoLbdEMUdxqTHTthMSzSD(int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: eGDmcJXwwvddCPNYH_WOEDHGkAUXJpSyPVLfIIrhRGRixs_qIWBZMQEznVZteJTpsCCMpIADR_mJKbnRqrcnDndffhKmWCRywDjBvdbXDZlNJ_wTvNBUXrfbxHmgJc
// Entry: 0x71ab4460 | Size: 168 bytes
// =========================================================================

undefined4
eGDmcJXwwvddCPNYH_WOEDHGkAUXJpSyPVLfIIrhRGRixs_qIWBZMQEznVZteJTpsCCMpIADR_mJKbnRqrcnDndffhKmWCRywDjBvdbXDZlNJ_wTvNBUXrfbxHmgJc
          (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  double dStack_28;
  char cStack_20;
  
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
              (&dStack_28,pbVar2,uVar1);
    if (((cStack_20 != '\0') &&
        ((*(char *)(param_1 + 0x30) == '\0' || (*(double *)(param_1 + 0x28) <= dStack_28)))) &&
       ((*(char *)(param_1 + 0x40) == '\0' || (dStack_28 <= *(double *)(param_1 + 0x38))))) {
      *(double *)(param_1 + 0x20) = dStack_28;
      return 1;
    }
  }
  return 0;
}


// =========================================================================
// Function: lROqkfl_oKkBqyUbSuJuibGQkfFJpcYpJTDyfgImtdhTaCyFGIQa_xpEEgHBkgduGmrGxXAboGLTMtYglQnxxgNBwnmvgjntJScwaclMaUOxIPHeoB
// Entry: 0x71ab453c | Size: 224 bytes
// =========================================================================

undefined4 *
lROqkfl_oKkBqyUbSuJuibGQkfFJpcYpJTDyfgImtdhTaCyFGIQa_xpEEgHBkgduGmrGxXAboGLTMtYglQnxxgNBwnmvgjntJScwaclMaUOxIPHeoB
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab45cc;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab45cc:
  *(undefined1 *)(iVar2 + param_3) = 0;
  param_1[0xc] = param_8;
  *param_1 = &DAT_70b13438;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}


// =========================================================================
// Function: esBoWxnWRt_cKdHCNJiILGcJYssGBbowfSlnRlXpUiQ
// Entry: 0x71ab4718 | Size: 8 bytes
// =========================================================================

undefined4 esBoWxnWRt_cKdHCNJiILGcJYssGBbowfSlnRlXpUiQ(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: _fHlcswmwmqRutiKQYnrRUlRXZjhxZRmSNbWHjee_p
// Entry: 0x71ab4738 | Size: 8 bytes
// =========================================================================

undefined4 _fHlcswmwmqRutiKQYnrRUlRXZjhxZRmSNbWHjee_p(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: DYiYNRtbxFHUYApnHHkJkbQWwJyPPZNTYwhCMUQeh
// Entry: 0x71ab4758 | Size: 8 bytes
// =========================================================================

int DYiYNRtbxFHUYApnHHkJkbQWwJyPPZNTYwhCMUQeh(int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: qCxmIpMCQDyjJDNRhgEEAgdrvAKBnyJHIyHmOCekCxXLykuqGgLlmVcrcmHeszokIhreEfZutadansmhkRPAmYZwRLDgaxXSkRopRKMPGqGdqRUEpPhSIpaFyeISsH
// Entry: 0x71ab4778 | Size: 160 bytes
// =========================================================================

undefined4
qCxmIpMCQDyjJDNRhgEEAgdrvAKBnyJHIyHmOCekCxXLykuqGgLlmVcrcmHeszokIhreEfZutadansmhkRPAmYZwRLDgaxXSkRopRKMPGqGdqRUEpPhSIpaFyeISsH
          (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iStack_20;
  char cStack_1c;
  
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
              (&iStack_20,pbVar2,uVar1);
    if (((cStack_1c != '\0') &&
        ((*(char *)(param_1 + 0x28) == '\0' || (*(int *)(param_1 + 0x24) <= iStack_20)))) &&
       ((*(char *)(param_1 + 0x30) == '\0' || (iStack_20 <= *(int *)(param_1 + 0x2c))))) {
      *(int *)(param_1 + 0x20) = iStack_20;
      return 1;
    }
  }
  return 0;
}


// =========================================================================
// Function: ocDDRJsHCThCbGfcKkmgTJETYJnGQHgYhfnjRGsHhLRfpXV_unRwTvnuUoidJfywjbhTpEVSh_qMzVSUiH_nozBEpEqvVqExJSxdbe_aLcyraOuIrW
// Entry: 0x71ab484c | Size: 224 bytes
// =========================================================================

undefined4 *
ocDDRJsHCThCbGfcKkmgTJETYJnGQHgYhfnjRGsHhLRfpXV_unRwTvnuUoidJfywjbhTpEVSh_qMzVSUiH_nozBEpEqvVqExJSxdbe_aLcyraOuIrW
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab48dc;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab48dc:
  *(undefined1 *)(iVar2 + param_3) = 0;
  param_1[0xc] = param_8;
  *param_1 = &DAT_70b13450;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}


// =========================================================================
// Function: UOSPRtlXqcBA_SUMYggeIGQUKAxuiFzX_WLxdsGg_cP
// Entry: 0x71ab4a28 | Size: 8 bytes
// =========================================================================

undefined4 UOSPRtlXqcBA_SUMYggeIGQUKAxuiFzX_WLxdsGg_cP(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: ijcTuqDCxdqwyNPRVhjdQNCLyzjsedCwBNd_RZheWC
// Entry: 0x71ab4a48 | Size: 8 bytes
// =========================================================================

undefined4 ijcTuqDCxdqwyNPRVhjdQNCLyzjsedCwBNd_RZheWC(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// =========================================================================
// Function: PqCjesbMKTebOEFtoGhhXBzAxsrCPKDAEYqjsoXJW
// Entry: 0x71ab4a68 | Size: 8 bytes
// =========================================================================

int PqCjesbMKTebOEFtoGhhXBzAxsrCPKDAEYqjsoXJW(int param_1)

{
  return param_1 + 0x20;
}


// =========================================================================
// Function: MQxwYWGJEIMtcFHrWhgfSbVlqXtJxtyCX_yxTCijAIeG_iIe_cULAejiyNKcnocHw_FjVVnYoTqCyPatniERcToUTUAwstcfXhmHkIhBCeyQHaWtaKpuIBq_TidDzt
// Entry: 0x71ab4a88 | Size: 152 bytes
// =========================================================================

bool MQxwYWGJEIMtcFHrWhgfSbVlqXtJxtyCX_yxTCijAIeG_iIe_cULAejiyNKcnocHw_FjVVnYoTqCyPatniERcToUTUAwstcfXhmHkIhBCeyQHaWtaKpuIBq_TidDzt
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  uint uStack_20;
  char cStack_1c;
  
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
              (&uStack_20,pbVar2,uVar1);
    if ((cStack_1c != '\0') &&
       ((*(char *)(param_1 + 0x28) == '\0' || (*(uint *)(param_1 + 0x24) <= uStack_20)))) {
      bVar3 = *(char *)(param_1 + 0x30) == '\0';
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = *(uint *)(param_1 + 0x2c);
      }
      if (bVar3 || uStack_20 <= uVar1) {
        *(uint *)(param_1 + 0x20) = uStack_20;
      }
      return bVar3 || uStack_20 <= uVar1;
    }
  }
  return false;
}


// =========================================================================
// Function: GJJsbZEYuTJjWEFdDqTryBSKZxLDEThQuiiKRymIyBrHVHTCGLtysfDpTUYMTewSHHcBlnZjpaXuhmZQuyxGVklKOX
// Entry: 0x71ab4b54 | Size: 192 bytes
// =========================================================================

undefined4 *
GJJsbZEYuTJjWEFdDqTryBSKZxLDEThQuiiKRymIyBrHVHTCGLtysfDpTUYMTewSHHcBlnZjpaXuhmZQuyxGVklKOX
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab4be0;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab4be0:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b13468;
  return param_1;
}


// =========================================================================
// Function: HVgZzFXSOuZnBzyxMuwE_kUMBbPqxHJDOtgrnPHVTEIUcQuMxfRdPKpq_msdLEpbWVeKwAGFKYxdMSYyZxPBGWqweCPgjZTsOMnGugaXTVL
// Entry: 0x71ab4d10 | Size: 216 bytes
// =========================================================================

undefined4 *
HVgZzFXSOuZnBzyxMuwE_kUMBbPqxHJDOtgrnPHVTEIUcQuMxfRdPKpq_msdLEpbWVeKwAGFKYxdMSYyZxPBGWqweCPgjZTsOMnGugaXTVL
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab4da0;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab4da0:
  *(undefined1 *)(iVar2 + param_3) = 0;
  param_1[0xb] = param_7;
  *param_1 = &DAT_70b13468;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  return param_1;
}


// =========================================================================
// Function: yIqbsfFWDBAaMKwuHqjTmkFKDIbbtmcYRYWYeaWAvdioCeWyz
// Entry: 0x71ab4ee4 | Size: 16 bytes
// =========================================================================

void yIqbsfFWDBAaMKwuHqjTmkFKDIbbtmcYRYWYeaWAvdioCeWyz(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: KgNqunHEezhSWJqmDMQZP_KlxwTuuxhDvpEOjPPqNN
// Entry: 0x71ab4f0c | Size: 28 bytes
// =========================================================================

void KgNqunHEezhSWJqmDMQZP_KlxwTuuxhDvpEOjPPqNN(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: YSGLbjjYnkBrbeiJElAHJEkQgSZrkFICVsvBwn
// Entry: 0x71ab4f5c | Size: 28 bytes
// =========================================================================

void YSGLbjjYnkBrbeiJElAHJEkQgSZrkFICVsvBwn(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: evFwVUkCcHDacfGilqu_VssGiyxLLqGS_blNkC
// Entry: 0x71ab4fac | Size: 28 bytes
// =========================================================================

void evFwVUkCcHDacfGilqu_VssGiyxLLqGS_blNkC(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: NXsBivPLAKtyejAcM_xCcZUfUOkKHlezCZCOpWZ
// Entry: 0x71ab4ffc | Size: 8 bytes
// =========================================================================

undefined1 NXsBivPLAKtyejAcM_xCcZUfUOkKHlezCZCOpWZ(int param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}


// =========================================================================
// Function: yxFwGiPSmqHbnImsJRgclWOnjAuYFNFXbFiCZDuRAcFxXggeAAleeL_HJMw_UlnuJYWZiXjgmiYSHcpZsKizyUZPjcOcLeRZeLMpUvTiRQQgUCViymXvoGwUqlu
// Entry: 0x71ab501c | Size: 124 bytes
// =========================================================================

bool yxFwGiPSmqHbnImsJRgclWOnjAuYFNFXbFiCZDuRAcFxXggeAAleeL_HJMw_UlnuJYWZiXjgmiYSHcpZsKizyUZPjcOcLeRZeLMpUvTiRQQgUCViymXvoGwUqlu
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uStack_20;
  char cStack_18;
  
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_xWnwlpzVbJXRjDaqcgwLtYTtYBvTZzWoYUCPEMXjUTXIgzsqwBwWgizoKiXLFC_WFFeGaqlYTgUlsCPrkFWsPqwWrOMsLoNLFciGIiADght
              (&uStack_20,pbVar2,uVar1);
    if (cStack_18 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined8 *)(param_1 + 0x20) = uStack_20;
    }
    return cStack_18 != '\0';
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return true;
}


// =========================================================================
// Function: ZnbYgMecyJdueIfOPFSjIQhBOwtqzDYZQNQIadprhFsbzoSxmYqhwHFOfQxNpAjPgbWobsoIXzLPtRI_GJHnHlFrnY
// Entry: 0x71ab50cc | Size: 192 bytes
// =========================================================================

undefined4 *
ZnbYgMecyJdueIfOPFSjIQhBOwtqzDYZQNQIadprhFsbzoSxmYqhwHFOfQxNpAjPgbWobsoIXzLPtRI_GJHnHlFrnY
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab5158;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab5158:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b13480;
  return param_1;
}


// =========================================================================
// Function: WaWFXUKRzkGCnodghrWdxIwMqQPKrYgEOgJDxdeoodvdQKtuPLXOwPdIkQJHnPjl_KVDQRZpDBjKQNVQCepeT_NLuxUZNuanLgSZTkZFSAz
// Entry: 0x71ab5288 | Size: 196 bytes
// =========================================================================

undefined4 *
WaWFXUKRzkGCnodghrWdxIwMqQPKrYgEOgJDxdeoodvdQKtuPLXOwPdIkQJHnPjl_KVDQRZpDBjKQNVQCepeT_NLuxUZNuanLgSZTkZFSAz
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
          )

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab5318;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab5318:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b13480;
  param_1[8] = param_4;
  param_1[9] = param_5;
  return param_1;
}


// =========================================================================
// Function: rnhouKvarxxSgFNCKoLBRbYMZKTIUHrAJpWiRLlvfQBSNWOoG
// Entry: 0x71ab5448 | Size: 12 bytes
// =========================================================================

void rnhouKvarxxSgFNCKoLBRbYMZKTIUHrAJpWiRLlvfQBSNWOoG(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: _DUVTWVVBeDgENRaTeBLhIJUwRDQnjlOVRYFpclxIj
// Entry: 0x71ab546c | Size: 28 bytes
// =========================================================================

void _DUVTWVVBeDgENRaTeBLhIJUwRDQnjlOVRYFpclxIj(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: AWhv_wHQBtTrxyvRIwKKgruRkygDDiNmqaypef
// Entry: 0x71ab54bc | Size: 28 bytes
// =========================================================================

void AWhv_wHQBtTrxyvRIwKKgruRkygDDiNmqaypef(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: yANYULJGsylXyeVbDJLGdgMZyaJdQSqKZTXcgs
// Entry: 0x71ab550c | Size: 28 bytes
// =========================================================================

void yANYULJGsylXyeVbDJLGdgMZyaJdQSqKZTXcgs(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: gMnQToiLpLDxkKCbzJVsSlyrxxfXjhoYFYBc_QG
// Entry: 0x71ab555c | Size: 8 bytes
// =========================================================================

undefined1 gMnQToiLpLDxkKCbzJVsSlyrxxfXjhoYFYBc_QG(int param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}


// =========================================================================
// Function: SrXEKPVRAjsuYHwLhmfiiEJuwYMDZFLNdbPPPJUrUasexvWIgkqYqvbsojDqEbcgoebBxx_vboVGsWiQGZDCqeGRerbTuwNLZpBgXJCigHvBcZbQEorZWftfntw
// Entry: 0x71ab557c | Size: 124 bytes
// =========================================================================

bool SrXEKPVRAjsuYHwLhmfiiEJuwYMDZFLNdbPPPJUrUasexvWIgkqYqvbsojDqEbcgoebBxx_vboVGsWiQGZDCqeGRerbTuwNLZpBgXJCigHvBcZbQEorZWftfntw
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uStack_18;
  char cStack_14;
  
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_TUIUUKKClSrsPzngWLhnOiPMnxBTquFwqDAHjmWGCi_YddZPfbmBJGpTJOUDVhgxwiohrZpjreBetQMugCzkSAaNARigCABZXUBJylbfJUa
              (&uStack_18,pbVar2,uVar1);
    if (cStack_14 != '\0') {
      *(undefined4 *)(param_1 + 0x20) = uStack_18;
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
    return cStack_14 != '\0';
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return true;
}


// =========================================================================
// Function: fdUfccDSWSS_hdzlOMJQMhSVZoGplLPTUnikPlEgifqennkgTJyDXLJSvraajICXitWztYRjTYvFPSvxgjIhzvecbp
// Entry: 0x71ab562c | Size: 192 bytes
// =========================================================================

undefined4 *
fdUfccDSWSS_hdzlOMJQMhSVZoGplLPTUnikPlEgifqennkgTJyDXLJSvraajICXitWztYRjTYvFPSvxgjIhzvecbp
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab56b8;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab56b8:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b13498;
  return param_1;
}


// =========================================================================
// Function: ltnOfhZnvefunEdBqxsFWXZbMgVIJJGUPbaHK_toftNSJBcpSOYPOmeIifUnzBFQJXkJuJBcmcCyTHum_jyezmVyrEuglgAZVvQJEpXqeRn
// Entry: 0x71ab57e8 | Size: 196 bytes
// =========================================================================

undefined4 *
ltnOfhZnvefunEdBqxsFWXZbMgVIJJGUPbaHK_toftNSJBcpSOYPOmeIifUnzBFQJXkJuJBcmcCyTHum_jyezmVyrEuglgAZVvQJEpXqeRn
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5
          )

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab5878;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab5878:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b13498;
  param_1[8] = param_4;
  param_1[9] = param_5;
  return param_1;
}


// =========================================================================
// Function: YIWCRregxUwUfcKOqQNTWPPWdtNjwKOTbmrjgDpjsPAqy_Za_
// Entry: 0x71ab59a8 | Size: 12 bytes
// =========================================================================

void YIWCRregxUwUfcKOqQNTWPPWdtNjwKOTbmrjgDpjsPAqy_Za_(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  return;
}


// =========================================================================
// Function: rCVNBHuXjPqvjGfKRNmsUEsvXyrzRfo_UhtLz_AvPQ
// Entry: 0x71ab59cc | Size: 28 bytes
// =========================================================================

void rCVNBHuXjPqvjGfKRNmsUEsvXyrzRfo_UhtLz_AvPQ(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: uPDTzOVzqZAWRiYUzdsDvcSelgAs_IshIqzQbM
// Entry: 0x71ab5a1c | Size: 28 bytes
// =========================================================================

void uPDTzOVzqZAWRiYUzdsDvcSelgAs_IshIqzQbM(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: xNwoEvkvFxfxhPtpFMiEoCOKMIPiicLstuRL_A
// Entry: 0x71ab5a6c | Size: 28 bytes
// =========================================================================

void xNwoEvkvFxfxhPtpFMiEoCOKMIPiicLstuRL_A(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: h_JjEpcEKLgutkYHeJNFgWsPzePtMfTRHjTjdAe
// Entry: 0x71ab5abc | Size: 8 bytes
// =========================================================================

undefined1 h_JjEpcEKLgutkYHeJNFgWsPzePtMfTRHjTjdAe(int param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}


// =========================================================================
// Function: GXTdEAKSSoBjGRPjbDTiSuxKNIvlWsxfNccXcJFsVXzLRhmmfNcgdAUzwGURjqSpwNAGyYKRqasEitxdaYBZCmGLIaOSynMbxJKCBKjpZANDCUwrfCQVjLjCNYj
// Entry: 0x71ab5adc | Size: 124 bytes
// =========================================================================

bool GXTdEAKSSoBjGRPjbDTiSuxKNIvlWsxfNccXcJFsVXzLRhmmfNcgdAUzwGURjqSpwNAGyYKRqasEitxdaYBZCmGLIaOSynMbxJKCBKjpZANDCUwrfCQVjLjCNYj
               (int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uStack_18;
  char cStack_14;
  
  if (param_2[0xc] != 0) {
    uVar1 = *(uint *)(param_2 + 4);
    pbVar2 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (uint)(*param_2 >> 1);
    }
    thunk_bWzArQFUVzhscKuTWGWSQskLH_FFfyMOvakmAkSPqVsQBBtJgmeQUbqNmnEvISIZngDvtACJ_uGkAqUNMDFlvQKTN_oXEYeyywJubdEXXtP
              (&uStack_18,pbVar2,uVar1);
    if (cStack_14 != '\0') {
      *(undefined4 *)(param_1 + 0x20) = uStack_18;
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
    return cStack_14 != '\0';
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return true;
}


// =========================================================================
// Function: sAvEUNcqxlohcilPWOnqzQa_TmtMXSyIhXeMuDqPlarKCI_aXjEloejBXnyFM_tSZQfgoWIAFtJACLdBllONXCFIac
// Entry: 0x71ab5b8c | Size: 188 bytes
// =========================================================================

undefined4 *
sAvEUNcqxlohcilPWOnqzQa_TmtMXSyIhXeMuDqPlarKCI_aXjEloejBXnyFM_tSZQfgoWIAFtJACLdBllONXCFIac
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab5c18;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab5c18:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b134b0;
  return param_1;
}


// =========================================================================
// Function: Vjtq_jAUBiyBKRtLVeIqVnyvrncHPHEssWUZZqywVGzYvPiTBeF_LhHNwrDjcsDEitcbAcSBTVvHBbktFrGuledtdaklIchqAGTkMkCMQss
// Entry: 0x71ab5d44 | Size: 192 bytes
// =========================================================================

undefined4 *
Vjtq_jAUBiyBKRtLVeIqVnyvrncHPHEssWUZZqywVGzYvPiTBeF_LhHNwrDjcsDEitcbAcSBTVvHBbktFrGuledtdaklIchqAGTkMkCMQss
          (undefined4 *param_1,undefined4 param_2,uint param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar2 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab5dd4;
  }
  else {
    uVar1 = (param_3 | 7) + 1;
    iVar2 = thunk_MwhHq(uVar1);
    param_1[4] = uVar1 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar2;
  }
  imp___aeabi_memmove(iVar2,param_2,param_3);
LAB_71ab5dd4:
  *(undefined1 *)(iVar2 + param_3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b134b0;
  *(undefined2 *)((int)param_1 + 0x1d) = param_4;
  return param_1;
}


// =========================================================================
// Function: FOeXWypsLcnigJnuEmAHnsYknsmoWlJKkmMWYqSKUfDYYuWdb
// Entry: 0x71ab5f00 | Size: 8 bytes
// =========================================================================

undefined2 FOeXWypsLcnigJnuEmAHnsYknsmoWlJKkmMWYqSKUfDYYuWdb(int param_1)

{
  return *(undefined2 *)(param_1 + 0x1d);
}


// =========================================================================
// Function: kLnGqwIYiblsBrjzAfkHcLYZyQGSVW_kcednSvbriI
// Entry: 0x71ab5f20 | Size: 28 bytes
// =========================================================================

void kLnGqwIYiblsBrjzAfkHcLYZyQGSVW_kcednSvbriI(int param_1)

{
  if (*(char *)(param_1 + 0x1e) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: VJelhYlCkfdlssJIGKRTTAsU_HowSyDeGHCmAG
// Entry: 0x71ab5f70 | Size: 28 bytes
// =========================================================================

void VJelhYlCkfdlssJIGKRTTAsU_HowSyDeGHCmAG(int param_1)

{
  if (*(char *)(param_1 + 0x1e) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: fVllDHdPCOVabkxoWhbYolcIzAEtVaRorqPvqa
// Entry: 0x71ab5fc0 | Size: 28 bytes
// =========================================================================

void fVllDHdPCOVabkxoWhbYolcIzAEtVaRorqPvqa(int param_1)

{
  if (*(char *)(param_1 + 0x1e) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: icQaWGosfAeHqiMWbZTtLUZCgxbkDFSBjDuQhfg
// Entry: 0x71ab6010 | Size: 8 bytes
// =========================================================================

undefined1 icQaWGosfAeHqiMWbZTtLUZCgxbkDFSBjDuQhfg(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}


// =========================================================================
// Function: SkJGzyrPqhpBWpiTpGHyJYbbzRoZtezKygGPUXumJuWEmGxwBdylZAmdhuiBDJkBygbzNYIoGBiBkgwwbiFPngoBEJvQVftxZR_lmmGTqKxssJnIaAedIHIViFw
// Entry: 0x71ab6030 | Size: 116 bytes
// =========================================================================

undefined4
SkJGzyrPqhpBWpiTpGHyJYbbzRoZtezKygGPUXumJuWEmGxwBdylZAmdhuiBDJkBygbzNYIoGBiBkgwwbiFPngoBEJvQVftxZR_lmmGTqKxssJnIaAedIHIViFw
          (int param_1,byte *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2[0xc] == 0) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x1e) != '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 0;
    }
  }
  else {
    uVar3 = *(uint *)(param_2 + 4);
    pbVar4 = *(byte **)(param_2 + 8);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
      uVar3 = (uint)(*param_2 >> 1);
    }
    uVar1 = thunk_amFzDZmBYCYmyCqJGnsvTjeCiJmyWsawbE_czCzKWKDMCocpuxxcKIvRPJlNgZfJjoGqCeARkBHfTHHuILUZaPsgCzuCxbYTbuWHxxAKrgu
                      (pbVar4,uVar3);
    uVar2 = 0;
    if (0xff < uVar1) {
      *(ushort *)(param_1 + 0x1d) = uVar1 & 0xff | 0x100;
      return 1;
    }
  }
  return uVar2;
}


// =========================================================================
// Function: nIsPpugcikHDZtdSXxuhCJQFO_LXzMrMaNYOGkhvXCRjIExZrJzrKytmmLXzlTjIRLLdqHuBCbQOnGmAfmKmdaHsHrVyFUfGxeOndkpsFHZZfWvgXKGVEboqKTyWKCYXENOV
// Entry: 0x71ab60d8 | Size: 192 bytes
// =========================================================================

undefined4 *
nIsPpugcikHDZtdSXxuhCJQFO_LXzMrMaNYOGkhvXCRjIExZrJzrKytmmLXzlTjIRLLdqHuBCbQOnGmAfmKmdaHsHrVyFUfGxeOndkpsFHZZfWvgXKGVEboqKTyWKCYXENOV
          (undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar1 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab6164;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar1 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar1;
  }
  imp___aeabi_memmove(iVar1,param_2,param_3);
LAB_71ab6164:
  *(undefined1 *)(iVar1 + param_3) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &DAT_70b134c8;
  return param_1;
}


// =========================================================================
// Function: KttmJeosNcaboyGViXErLiHSHHMLhlELmD_wKLkXWAcnDCovmCvpwRXomI_dmPqozRIIuftySVTlWqQrAYIEpVvjSIoyyjopPL_VWvykCAaBfRKnhpfFRxIkiRGiWSuqOmrtbEZJgvPtZJAfUoM_GPN
// Entry: 0x71ab6294 | Size: 280 bytes
// =========================================================================

undefined4 *
KttmJeosNcaboyGViXErLiHSHHMLhlELmD_wKLkXWAcnDCovmCvpwRXomI_dmPqozRIIuftySVTlWqQrAYIEpVvjSIoyyjopPL_VWvykCAaBfRKnhpfFRxIkiRGiWSuqOmrtbEZJgvPtZJAfUoM_GPN
          (undefined4 *param_1,undefined4 param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *param_1 = &DAT_70b134e0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1 + 4);
  }
  if (param_3 < 0xb) {
    iVar4 = (int)param_1 + 0x11;
    *(char *)(param_1 + 4) = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71ab6324;
  }
  else {
    uVar2 = (param_3 | 7) + 1;
    iVar4 = thunk_MwhHq(uVar2);
    param_1[4] = uVar2 | 1;
    param_1[5] = param_3;
    param_1[6] = iVar4;
  }
  imp___aeabi_memmove(iVar4,param_2,param_3);
LAB_71ab6324:
  *(undefined1 *)(iVar4 + param_3) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  puVar3 = (undefined8 *)(param_1 + 8);
  *(undefined1 *)puVar3 = 0;
  bVar1 = param_4[0xc];
  *param_1 = &DAT_70b134c8;
  *(undefined1 *)(param_1 + 7) = 0;
  if (bVar1 != 0) {
    if ((*param_4 & 1) != 0) {
      FUN_712f6d58(puVar3,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 4));
      *(undefined1 *)(param_1 + 0xb) = 1;
      return param_1;
    }
    uVar5 = *(undefined8 *)param_4;
    param_1[10] = *(undefined4 *)(param_4 + 8);
    *puVar3 = uVar5;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return param_1;
}


// =========================================================================
// Function: lrISKSrFjXSKRzmxsaQToGZSPtrngyKbOYgdxNQuvvJNrMFwbvNIHiWIEfKmsBpcLAQDQkuYjtGplxHrjFermnDMWWvLtkzDgYJZujdjxetaVupY_zH
// Entry: 0x71ab6584 | Size: 100 bytes
// =========================================================================

void lrISKSrFjXSKRzmxsaQToGZSPtrngyKbOYgdxNQuvvJNrMFwbvNIHiWIEfKmsBpcLAQDQkuYjtGplxHrjFermnDMWWvLtkzDgYJZujdjxetaVupY_zH
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)((int)param_1 + 0xc) = 0;
  *(undefined1 *)param_1 = 0;
  if (*(char *)(param_2 + 0x2c) != '\0') {
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x28);
      *param_1 = uVar1;
    }
    else {
      FUN_712f6d58(param_1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x24));
    }
    *(undefined1 *)((int)param_1 + 0xc) = 1;
  }
  return;
}


// =========================================================================
// Function: BKEB_nUKPUHvowQbTGQiVvBAVEPHPFsOHkIanBmiHeeOFBOaDlfpnMxEtsfrKr_EJfnLYOKDQOXXvrnwLxVjqzIZmhARAshJrNJkOgpHSfqH
// Entry: 0x71ab6694 | Size: 28 bytes
// =========================================================================

void BKEB_nUKPUHvowQbTGQiVvBAVEPHPFsOHkIanBmiHeeOFBOaDlfpnMxEtsfrKr_EJfnLYOKDQOXXvrnwLxVjqzIZmhARAshJrNJkOgpHSfqH
               (int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: _ipdlqvqAlSflkfPWKySlfDCVuzLstNPzPdIBVhezFqWPGCsBgFFjhPBAsnhBNNsBNCbAiycwiRuAdsUaFYAdGqNQOaUeRXhImLxRqrS
// Entry: 0x71ab66e4 | Size: 28 bytes
// =========================================================================

void _ipdlqvqAlSflkfPWKySlfDCVuzLstNPzPdIBVhezFqWPGCsBgFFjhPBAsnhBNNsBNCbAiycwiRuAdsUaFYAdGqNQOaUeRXhImLxRqrS
               (int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: tXNzeQszxzHbyUKxLMwMnsGrvHAFQMcRgDvcnl_UfLmDTRcPfFgAnOetryUDbeTuPNBNW_ltgzPHQZY_JPciRnQoiHvGzNfknWwZRcgg
// Entry: 0x71ab6734 | Size: 28 bytes
// =========================================================================

void tXNzeQszxzHbyUKxLMwMnsGrvHAFQMcRgDvcnl_UfLmDTRcPfFgAnOetryUDbeTuPNBNW_ltgzPHQZY_JPciRnQoiHvGzNfknWwZRcgg
               (int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71a914c4(param_1);
  }
  return;
}


// =========================================================================
// Function: qJPgMXLHCscJiYSqNZEbDFTjSWsHQCXcRFGTmVvLzABKMnDwNXNFZbniVzbIcOyFOOIkYxScytOIXWWbTEMIgIQsLWujEDxzVbKjXSPvU
// Entry: 0x71ab6784 | Size: 8 bytes
// =========================================================================

undefined1
qJPgMXLHCscJiYSqNZEbDFTjSWsHQCXcRFGTmVvLzABKMnDwNXNFZbniVzbIcOyFOOIkYxScytOIXWWbTEMIgIQsLWujEDxzVbKjXSPvU
          (int param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}


// =========================================================================
// Function: DZoIqTGHfVLEfaGpAQVlgtVDomJEOJELFgIgyLycNNiUFZHLFBGstwPJOIwdPZaZFICSSoPNZDHUYQfWzwwiWfUAkjSsxYmEHZMxDcPnZRsTTVqymyMLlstjJxIdF
// Entry: 0x71ab67a4 | Size: 368 bytes
// =========================================================================

undefined4
DZoIqTGHfVLEfaGpAQVlgtVDomJEOJELFgIgyLycNNiUFZHLFBGstwPJOIwdPZaZFICSSoPNZDHUYQfWzwwiWfUAkjSsxYmEHZMxDcPnZRsTTVqymyMLlstjJxIdF
          (int param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uStack_40;
  uint uStack_38;
  char cStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_2[0xc] == 0) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      return 1;
    }
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      thunk_qNQrlu(*(undefined4 *)(param_1 + 0x28));
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    return 1;
  }
  uVar3 = *(uint *)(param_2 + 4);
  pbVar4 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    uVar3 = (uint)(*param_2 >> 1);
  }
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_30);
  }
  if (uVar3 < 0xb) {
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar3 << 1));
    uVar2 = (uint)&uStack_30 | 1;
    if (uVar3 == 0) goto LAB_71ab6864;
  }
  else {
    uVar2 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_30 = (uVar3 | 7) + 2;
    uStack_2c = uVar3;
    uStack_28 = uVar2;
  }
  imp___aeabi_memmove(uVar2,pbVar4,uVar3);
LAB_71ab6864:
  *(undefined1 *)(uVar2 + uVar3) = 0;
  cStack_34 = '\x01';
  uStack_40 = CONCAT44(uStack_2c,uStack_30);
  uStack_38 = uStack_28;
  puVar1 = (ulonglong *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if ((uStack_30 & 1) == 0) {
      *(uint *)(param_1 + 0x28) = uStack_28;
      *puVar1 = uStack_40;
    }
    else {
      FUN_712f6d58(puVar1,uStack_28,uStack_2c);
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  else {
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (puVar1,&uStack_40);
    if (cStack_34 == '\0') {
      return 1;
    }
  }
  if ((uStack_40 & 1) == 0) {
    return 1;
  }
  thunk_qNQrlu(uStack_38);
  return 1;
}


// =========================================================================
// Function: jvwfOQOZGWusFwsuEdpjIMQErpLnpgAc_jOXSLq_djygAtmF
// Entry: 0x71ab6a68 | Size: 224 bytes
// =========================================================================

undefined4 * jvwfOQOZGWusFwsuEdpjIMQErpLnpgAc_jOXSLq_djygAtmF(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  param_1[2] = 0;
  piVar4 = param_1 + 1;
  *piVar4 = 0;
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8) - iVar3;
  param_1[3] = 0;
  *param_1 = &DAT_70b134e0;
  if (iVar2 != 0) {
    if (iVar2 < 0) {
      FUN_71ab7b5c(piVar4);
      if (*piVar4 != 0) {
        param_1[2] = *piVar4;
        thunk_qNQrlu();
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    iVar1 = thunk_MwhHq(iVar2);
    param_1[1] = iVar1;
    param_1[2] = iVar1;
    param_1[3] = iVar1 + iVar2;
    imp___aeabi_memcpy4(iVar1,iVar3,iVar2);
    param_1[2] = iVar1 + iVar2;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 4) = uVar5;
  }
  else {
    FUN_712f6d58(param_1 + 4,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x1c);
  return param_1;
}


// =========================================================================
// Function: pYWPhZXlbBlLmg_HajWguDSFKkZkGPlGunmPVRHpMwNsWacQpcHm
// Entry: 0x71ab6c28 | Size: 4 bytes
// =========================================================================

void pYWPhZXlbBlLmg_HajWguDSFKkZkGPlGunmPVRHpMwNsWacQpcHm(void)

{
  return;
}


// =========================================================================
// Function: lxLwuEMjVaBgbgzSrskAetgJXQkArj
// Entry: 0x71ab6c44 | Size: 80 bytes
// =========================================================================

void lxLwuEMjVaBgbgzSrskAetgJXQkArj(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: chqfRNnquCtHqWPgchKEChWshfHWjlUjQhOeDW
// Entry: 0x71ab6d20 | Size: 80 bytes
// =========================================================================

void chqfRNnquCtHqWPgchKEChWshfHWjlUjQhOeDW(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: hFRoPlgeUqfrbnFAcHFCAdjfFIlrSgToSiyyxm
// Entry: 0x71ab6dfc | Size: 80 bytes
// =========================================================================

void hFRoPlgeUqfrbnFAcHFCAdjfFIlrSgToSiyyxm(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: suxovMJinQQSZYvapTEAUoNMJlUDOCeJjIPFbc
// Entry: 0x71ab6ed8 | Size: 80 bytes
// =========================================================================

void suxovMJinQQSZYvapTEAUoNMJlUDOCeJjIPFbc(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: mNBIqNi_KsnlIEbdiykoeVEaODCQduSDMgddns
// Entry: 0x71ab6fb4 | Size: 80 bytes
// =========================================================================

void mNBIqNi_KsnlIEbdiykoeVEaODCQduSDMgddns(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: dPTfbYpcRRgJ_rsDZGyvgxXZRgMtvEQmeuSziwrTVAmOAuVxSCtIoG_xvpAJJmBxekbupkzmGy_gLtKRoqPwouCXUSgDY_TicEphHWMv
// Entry: 0x71ab7090 | Size: 112 bytes
// =========================================================================

undefined4 *
dPTfbYpcRRgJ_rsDZGyvgxXZRgMtvEQmeuSziwrTVAmOAuVxSCtIoG_xvpAJJmBxekbupkzmGy_gLtKRoqPwouCXUSgDY_TicEphHWMv
          (undefined4 *param_1)

{
  *param_1 = &DAT_70b13408;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(param_1[10]);
  }
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: rqdlwJavayNBjaNWjySDsvIFotGsxgvqwifEVFteftvfrkNoFt_ynRFFaxZkPAmQfcKIdzEZhvWDrOOMosdjW_Sehe_ZZWzdByYiNpyV
// Entry: 0x71ab71ac | Size: 116 bytes
// =========================================================================

void rqdlwJavayNBjaNWjySDsvIFotGsxgvqwifEVFteftvfrkNoFt_ynRFFaxZkPAmQfcKIdzEZhvWDrOOMosdjW_Sehe_ZZWzdByYiNpyV
               (undefined4 *param_1)

{
  *param_1 = &DAT_70b13408;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(param_1[10]);
  }
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: gHxjCyVqHRVBUeNlIa_YarNhtSTdFRBmucHGFVem
// Entry: 0x71ab72e8 | Size: 80 bytes
// =========================================================================

void gHxjCyVqHRVBUeNlIa_YarNhtSTdFRBmucHGFVem(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: fxSnmvywhISUo_ZZkJLfsTXUGkxH_poTfhDAArVt
// Entry: 0x71ab73c4 | Size: 80 bytes
// =========================================================================

void fxSnmvywhISUo_ZZkJLfsTXUGkxH_poTfhDAArVt(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: _LcEcygvgRHUobcsXCvwhnhTwkMKGlmSs_ynPQaN
// Entry: 0x71ab74a0 | Size: 80 bytes
// =========================================================================

void _LcEcygvgRHUobcsXCvwhnhTwkMKGlmSs_ynPQaN(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: MrWzUugbnzoMuswddEooJCrVyvbxsXUhijeUe
// Entry: 0x71ab757c | Size: 80 bytes
// =========================================================================

void MrWzUugbnzoMuswddEooJCrVyvbxsXUhijeUe(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: TVJoOnKbJXBzgfU_pPFnxrrhaSNjmNhQuUzCU
// Entry: 0x71ab7658 | Size: 80 bytes
// =========================================================================

void TVJoOnKbJXBzgfU_pPFnxrrhaSNjmNhQuUzCU(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: RjUzDgEnuOFRmoqDvkImmZmBzqhYWUoaplQoJ
// Entry: 0x71ab7734 | Size: 80 bytes
// =========================================================================

void RjUzDgEnuOFRmoqDvkImmZmBzqhYWUoaplQoJ(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: vdRqSSgvKTsOwQhlZjTggJdoSRfPreNnbbCPG
// Entry: 0x71ab7810 | Size: 80 bytes
// =========================================================================

void vdRqSSgvKTsOwQhlZjTggJdoSRfPreNnbbCPG(undefined4 *param_1)

{
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: VbuRWwCdAGlyZsqnVsXySlIoChDldeXzbXdUJlNyxgjgDzTEauLZBOmmw_HZTXNrqAjUZmnlIawIltNFZRSdciLcvUEPnIiKutMFkPt
// Entry: 0x71ab78ec | Size: 124 bytes
// =========================================================================

undefined4 *
VbuRWwCdAGlyZsqnVsXySlIoChDldeXzbXdUJlNyxgjgDzTEauLZBOmmw_HZTXNrqAjUZmnlIawIltNFZRSdciLcvUEPnIiKutMFkPt
          (undefined4 *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  *param_1 = &DAT_70b134c8;
  if (*(char *)(param_1 + 0xb) != '\0') {
    bVar1 = *(byte *)(param_1 + 8);
  }
  if (*(char *)(param_1 + 0xb) != '\0' && (bVar1 & 1) != 0) {
    thunk_qNQrlu(param_1[10]);
  }
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: XnmV_MFvlUOLfstFwvIPcWKpNRPcSBhHBuvIPyWf_HJpePllWFCewhfjIEKlsXvavMNHLRzfYMkibIUcGxfoCdmAlmTUQZHwspuaCCP
// Entry: 0x71ab7a14 | Size: 128 bytes
// =========================================================================

void XnmV_MFvlUOLfstFwvIPcWKpNRPcSBhHBuvIPyWf_HJpePllWFCewhfjIEKlsXvavMNHLRzfYMkibIUcGxfoCdmAlmTUQZHwspuaCCP
               (undefined4 *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  *param_1 = &DAT_70b134c8;
  if (*(char *)(param_1 + 0xb) != '\0') {
    bVar1 = *(byte *)(param_1 + 8);
  }
  if (*(char *)(param_1 + 0xb) != '\0' && (bVar1 & 1) != 0) {
    thunk_qNQrlu(param_1[10]);
  }
  *param_1 = &DAT_70b134e0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(param_1[6]);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    thunk_qNQrlu();
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71ab7b5c
// Entry: 0x71ab7b5c | Size: 20 bytes
// =========================================================================

void FUN_71ab7b5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71ab7bc4
// Entry: 0x71ab7bc4 | Size: 60 bytes
// =========================================================================

void FUN_71ab7bc4(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71ab7bc4(param_1,*param_2);
  FUN_71ab7bc4(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: eCExDIjaebmXEpltMaknSsaIhrBsMgbaCyOFgvyvhQiGRaiOKaaXVNCrqaTtkEuCWGTLeErPvnwQ_TfhCgcqAgmWPeXiAzXEEynjUfYcYBYcip__IFLcNkHBCuGNogBuSysVxGekhcmHQobmKYTORDHrrbnFAGuvbcIFxtHX_nJMvAemfUAMamqmFhTdGXPcTgZenqipVUmrDTREWUOUEOgyABzfWfWCdgOsjPthBVqGTaKOrXlnNkuHYJLEessjOeTCcHpauSwxSdGNzCFlcmicsXDZyZIZIwzpuVjKDGakKtYWMvxAkGciIipqUroiVPeOFXYmE_TQgLPdkroBNErcwoQgsRJmJyLyqtFD_L
// Entry: 0x71ab7c6c | Size: 316 bytes
// =========================================================================

void eCExDIjaebmXEpltMaknSsaIhrBsMgbaCyOFgvyvhQiGRaiOKaaXVNCrqaTtkEuCWGTLeErPvnwQ_TfhCgcqAgmWPeXiAzXEEynjUfYcYBYcip__IFLcNkHBCuGNogBuSysVxGekhcmHQobmKYTORDHrrbnFAGuvbcIFxtHX_nJMvAemfUAMamqmFhTdGXPcTgZenqipVUmrDTREWUOUEOgyABzfWfWCdgOsjPthBVqGTaKOrXlnNkuHYJLEessjOeTCcHpauSwxSdGNzCFlcmicsXDZyZIZIwzpuVjKDGakKtYWMvxAkGciIipqUroiVPeOFXYmE_TQgLPdkroBNErcwoQgsRJmJyLyqtFD_L
               (undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int *param_5
               )

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  piVar8 = param_2 + 1;
  piVar5 = piVar8;
  if ((int *)*piVar8 != (int *)0x0) {
    uVar10 = *param_3;
    uVar11 = param_3[1];
    piVar1 = (int *)*piVar8;
    do {
      while( true ) {
        piVar4 = piVar1;
        iVar6 = piVar4[4];
        uVar7 = piVar4[5];
        uVar9 = uVar11;
        if (uVar7 < uVar11) {
          uVar9 = uVar7;
        }
        iVar3 = imp_memcmp(uVar10,iVar6,uVar9);
        piVar5 = piVar4;
        if (iVar3 == 0) break;
        if (-1 < iVar3) goto LAB_71ab7cec;
LAB_71ab7c9c:
        piVar1 = (int *)*piVar4;
        piVar8 = piVar4;
        if ((int *)*piVar4 == (int *)0x0) goto LAB_71ab7d28;
      }
      if (uVar11 < uVar7) goto LAB_71ab7c9c;
LAB_71ab7cec:
      iVar6 = imp_memcmp(iVar6,uVar10,uVar9);
      if (iVar6 == 0) {
        if (uVar11 <= uVar7) goto LAB_71ab7d8c;
      }
      else if (-1 < iVar6) {
LAB_71ab7d8c:
        uVar2 = 0;
        goto LAB_71ab7d94;
      }
      piVar1 = (int *)piVar4[1];
    } while ((int *)piVar4[1] != (int *)0x0);
    piVar8 = piVar4 + 1;
  }
LAB_71ab7d28:
  piVar4 = (int *)thunk_MwhHq(0x1c);
  iVar6 = *(int *)*param_5;
  iVar3 = ((int *)*param_5)[1];
  *piVar4 = 0;
  piVar4[4] = iVar6;
  piVar4[5] = iVar3;
  piVar4[6] = 0;
  piVar4[1] = 0;
  piVar4[2] = (int)piVar5;
  *piVar8 = (int)piVar4;
  piVar5 = piVar4;
  if (*(int *)*param_2 != 0) {
    *param_2 = *(int *)*param_2;
    piVar5 = (int *)*piVar8;
  }
  FUN_71a4128a(param_2[1],piVar5);
  param_2[2] = param_2[2] + 1;
  uVar2 = 1;
LAB_71ab7d94:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar4;
  return;
}


// =========================================================================
// Function: BPrEEYOUDiadCpWPUFNhtbRCDQhdEQtPBnaRfeoAvGQDynMSmKCMduGBgrYBfbS_KnJNUW_SwDiNlOGrssoaiFzENXJhbXgcmkjnvpUYFWPueQJHqvgYQNXKTDjJdBEAsusejjbwRefjEQuFveTRROitMfiqfvJzyWPiyfaMKMlRwPfZqYYnpIfkKeZXatvclOfIzgEFIrglVicKjcQSRXdExVplvZQFUYiaVphYNRojmIBwZMtRLcorBJNZYjTMOUuvNAvEQGJxICyXoOkkmAyYvcIHhxXgLqNxAsRTAXJOepsaUWgfAqIJxegGWPPPRsREq
// Entry: 0x71ab7e30 | Size: 264 bytes
// =========================================================================

void BPrEEYOUDiadCpWPUFNhtbRCDQhdEQtPBnaRfeoAvGQDynMSmKCMduGBgrYBfbS_KnJNUW_SwDiNlOGrssoaiFzENXJhbXgcmkjnvpUYFWPueQJHqvgYQNXKTDjJdBEAsusejjbwRefjEQuFveTRROitMfiqfvJzyWPiyfaMKMlRwPfZqYYnpIfkKeZXatvclOfIzgEFIrglVicKjcQSRXdExVplvZQFUYiaVphYNRojmIBwZMtRLcorBJNZYjTMOUuvNAvEQGJxICyXoOkkmAyYvcIHhxXgLqNxAsRTAXJOepsaUWgfAqIJxegGWPPPRsREq
               (int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,byte *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  piVar1 = (int *)thunk_hSeQANIAhietIjlqPKRiAaqUrKUUwnqoogAqTiksNSjraWgMwgnQGFCSmDOMDVZXkZPLdwgerblTZkYCeaKsMoMIfwARktNnkMWqCXlLyZEDYnHsBGZJMBISquOEhzgKbjCGFmvldEBALwcjIyOqbgXnfRTkOEYpdJLKusoSDtSMNjLCzIkaQFNiusXvvXdWw_jDQsuJKPdrsChpoxTeSkAHkxbmXosQqhivXXNukXwCfDYw_gslqpQwkAFpfczsTJJbatiSAVNCifpWOtEopdEpAMHDmTZMFDpQDiHIfzvPygz
                            (param_2,param_3,&uStack_24,auStack_28,param_4);
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    puVar2 = (undefined4 *)thunk_MwhHq(0x20);
    if ((*param_5 & 1) == 0) {
      uVar6 = *(undefined8 *)param_5;
      puVar2[6] = *(undefined4 *)(param_5 + 8);
      *(undefined8 *)(puVar2 + 4) = uVar6;
    }
    else {
      FUN_712f6d58(puVar2 + 4,*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 4),
                   *(undefined4 *)(param_5 + 8),param_4,puVar2,param_2 + 1,0);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = uStack_24;
    *piVar1 = (int)puVar2;
    piVar3 = (int *)*param_2;
    puVar2[7] = *(undefined4 *)(param_5 + 0xc);
    puVar4 = puVar2;
    if (*piVar3 != 0) {
      *param_2 = *piVar3;
      puVar4 = (undefined4 *)*piVar1;
    }
    FUN_71a4128a(param_2[1],puVar4);
    param_2[2] = param_2[2] + 1;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = (int)puVar2;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = iVar5;
  return;
}


// =========================================================================
// Function: hSeQANIAhietIjlqPKRiAaqUrKUUwnqoogAqTiksNSjraWgMwgnQGFCSmDOMDVZXkZPLdwgerblTZkYCeaKsMoMIfwARktNnkMWqCXlLyZEDYnHsBGZJMBISquOEhzgKbjCGFmvldEBALwcjIyOqbgXnfRTkOEYpdJLKusoSDtSMNjLCzIkaQFNiusXvvXdWw_jDQsuJKPdrsChpoxTeSkAHkxbmXosQqhivXXNukXwCfDYw_gslqpQwkAFpfczsTJJbatiSAVNCifpWOtEopdEpAMHDmTZMFDpQDiHIfzvPygz
// Entry: 0x71ab8004 | Size: 1176 bytes
// =========================================================================

int * hSeQANIAhietIjlqPKRiAaqUrKUUwnqoogAqTiksNSjraWgMwgnQGFCSmDOMDVZXkZPLdwgerblTZkYCeaKsMoMIfwARktNnkMWqCXlLyZEDYnHsBGZJMBISquOEhzgKbjCGFmvldEBALwcjIyOqbgXnfRTkOEYpdJLKusoSDtSMNjLCzIkaQFNiusXvvXdWw_jDQsuJKPdrsChpoxTeSkAHkxbmXosQqhivXXNukXwCfDYw_gslqpQwkAFpfczsTJJbatiSAVNCifpWOtEopdEpAMHDmTZMFDpQDiHIfzvPygz
                (undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  int *piVar13;
  bool bVar14;
  
  piVar13 = param_1 + 1;
  if (piVar13 != param_2) {
    bVar1 = *(byte *)(param_2 + 4);
    bVar2 = *param_5;
    uVar9 = param_2[5];
    if ((bVar1 & 1) == 0) {
      uVar9 = (uint)(bVar1 >> 1);
    }
    uVar10 = *(uint *)(param_5 + 4);
    pbVar12 = *(byte **)(param_5 + 8);
    if ((bVar2 & 1) == 0) {
      uVar10 = (uint)(bVar2 >> 1);
    }
    iVar7 = param_2[6];
    uVar6 = uVar10;
    if (uVar9 < uVar10) {
      uVar6 = uVar9;
    }
    if ((bVar2 & 1) == 0) {
      pbVar12 = param_5 + 1;
    }
    if ((bVar1 & 1) == 0) {
      iVar7 = (int)param_2 + 0x11;
    }
    iVar3 = imp_memcmp(pbVar12,iVar7,uVar6);
    bVar14 = -1 < iVar3;
    if (iVar3 == 0) {
      bVar14 = uVar9 <= uVar10;
    }
    if (bVar14) {
      iVar7 = imp_memcmp(iVar7,pbVar12,uVar6);
      bVar14 = -1 < iVar7;
      if (iVar7 == 0) {
        bVar14 = uVar10 <= uVar9;
      }
      if (bVar14) {
        *param_3 = param_2;
        *param_4 = (int)param_2;
        return param_4;
      }
      piVar8 = (int *)param_2[1];
      piVar4 = param_2;
      piVar5 = piVar8;
      if (piVar8 == (int *)0x0) {
        do {
          piVar11 = (int *)piVar4[2];
          bVar14 = (int *)*piVar11 != piVar4;
          piVar4 = piVar11;
        } while (bVar14);
      }
      else {
        do {
          piVar11 = piVar5;
          piVar5 = (int *)*piVar11;
        } while ((int *)*piVar11 != (int *)0x0);
      }
      if (piVar11 == piVar13) {
LAB_71ab837c:
        if (piVar8 != (int *)0x0) {
          *param_3 = piVar11;
          return piVar11;
        }
        *param_3 = param_2;
        return param_2 + 1;
      }
      uVar9 = piVar11[5];
      iVar7 = piVar11[6];
      if ((*(byte *)(piVar11 + 4) & 1) == 0) {
        uVar9 = (uint)(*(byte *)(piVar11 + 4) >> 1);
        iVar7 = (int)piVar11 + 0x11;
      }
      uVar6 = uVar10;
      if (uVar9 < uVar10) {
        uVar6 = uVar9;
      }
      iVar7 = imp_memcmp(pbVar12,iVar7,uVar6);
      bVar14 = uVar9 <= uVar10;
      if (iVar7 != 0) {
        bVar14 = -1 < iVar7;
      }
      if (!bVar14) goto LAB_71ab837c;
      piVar4 = (int *)*piVar13;
      while (piVar5 = piVar13, piVar4 != (int *)0x0) {
        while( true ) {
          piVar5 = piVar4;
          uVar9 = piVar5[5];
          iVar7 = piVar5[6];
          if ((*(byte *)(piVar5 + 4) & 1) == 0) {
            iVar7 = (int)piVar5 + 0x11;
            uVar9 = (uint)(*(byte *)(piVar5 + 4) >> 1);
          }
          uVar6 = uVar10;
          if (uVar9 < uVar10) {
            uVar6 = uVar9;
          }
          iVar3 = imp_memcmp(pbVar12,iVar7,uVar6);
          bVar14 = uVar9 <= uVar10;
          if (iVar3 != 0) {
            bVar14 = -1 < iVar3;
          }
          if (!bVar14) break;
          iVar7 = imp_memcmp(iVar7,pbVar12,uVar6);
          bVar14 = -1 < iVar7;
          if (iVar7 == 0) {
            bVar14 = uVar10 <= uVar9;
          }
          if (bVar14) goto LAB_71ab8470;
          piVar13 = piVar5 + 1;
          piVar4 = (int *)*piVar13;
          if ((int *)*piVar13 == (int *)0x0) goto LAB_71ab8470;
        }
        piVar13 = piVar5;
        piVar4 = (int *)*piVar5;
      }
      goto LAB_71ab8470;
    }
  }
  piVar5 = (int *)*param_2;
  piVar4 = param_2;
  if ((int *)*param_1 != param_2) {
    piVar8 = param_2;
    piVar11 = piVar5;
    if (piVar5 == (int *)0x0) {
      do {
        piVar4 = (int *)piVar8[2];
        bVar14 = (int *)*piVar4 == piVar8;
        piVar8 = piVar4;
      } while (bVar14);
    }
    else {
      do {
        piVar4 = piVar11;
        piVar11 = (int *)piVar4[1];
      } while ((int *)piVar4[1] != (int *)0x0);
    }
    bVar1 = *param_5;
    bVar2 = *(byte *)(piVar4 + 4);
    uVar9 = *(uint *)(param_5 + 4);
    if ((bVar1 & 1) == 0) {
      uVar9 = (uint)(bVar1 >> 1);
    }
    uVar10 = piVar4[5];
    iVar7 = piVar4[6];
    if ((bVar2 & 1) == 0) {
      uVar10 = (uint)(bVar2 >> 1);
    }
    pbVar12 = *(byte **)(param_5 + 8);
    uVar6 = uVar10;
    if (uVar9 < uVar10) {
      uVar6 = uVar9;
    }
    if ((bVar2 & 1) == 0) {
      iVar7 = (int)piVar4 + 0x11;
    }
    if ((bVar1 & 1) == 0) {
      pbVar12 = param_5 + 1;
    }
    iVar7 = imp_memcmp(iVar7,pbVar12,uVar6);
    bVar14 = -1 < iVar7;
    if (iVar7 == 0) {
      bVar14 = uVar9 <= uVar10;
    }
    if (bVar14) {
      piVar4 = (int *)*piVar13;
      while (piVar5 = piVar13, piVar4 != (int *)0x0) {
        while( true ) {
          piVar5 = piVar4;
          uVar10 = piVar5[5];
          iVar7 = piVar5[6];
          if ((*(byte *)(piVar5 + 4) & 1) == 0) {
            iVar7 = (int)piVar5 + 0x11;
            uVar10 = (uint)(*(byte *)(piVar5 + 4) >> 1);
          }
          uVar6 = uVar9;
          if (uVar10 < uVar9) {
            uVar6 = uVar10;
          }
          iVar3 = imp_memcmp(pbVar12,iVar7,uVar6);
          bVar14 = uVar10 <= uVar9;
          if (iVar3 != 0) {
            bVar14 = -1 < iVar3;
          }
          if (!bVar14) break;
          iVar7 = imp_memcmp(iVar7,pbVar12,uVar6);
          bVar14 = -1 < iVar7;
          if (iVar7 == 0) {
            bVar14 = uVar9 <= uVar10;
          }
          if (bVar14) goto LAB_71ab8470;
          piVar13 = piVar5 + 1;
          piVar4 = (int *)*piVar13;
          if ((int *)*piVar13 == (int *)0x0) goto LAB_71ab8470;
        }
        piVar13 = piVar5;
        piVar4 = (int *)*piVar5;
      }
LAB_71ab8470:
      *param_3 = piVar5;
      return piVar13;
    }
  }
  if (piVar5 != (int *)0x0) {
    *param_3 = piVar4;
    return piVar4 + 1;
  }
  *param_3 = param_2;
  return param_2;
}


// =========================================================================
// Function: FUN_71ab8648
// Entry: 0x71ab8648 | Size: 76 bytes
// =========================================================================

void FUN_71ab8648(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71ab8648(param_1,*param_2);
  FUN_71ab8648(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    thunk_qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_71ab871c
// Entry: 0x71ab871c | Size: 60 bytes
// =========================================================================

void FUN_71ab871c(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71ab871c(param_1,*param_2);
  FUN_71ab871c(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: xlINZwSGpUflINNPPKBdawMqcYdCcZBIxVcSCKwIRWUeWSDzRoGGkypHLgXxuZTYBmihvQaAdQrrltlfqonJDHnBpaRzECPriyajGyoMVNdAEiJxhJlduPNvIfmsfMhk
// Entry: 0x71ab87c4 | Size: 268 bytes
// =========================================================================

void xlINZwSGpUflINNPPKBdawMqcYdCcZBIxVcSCKwIRWUeWSDzRoGGkypHLgXxuZTYBmihvQaAdQrrltlfqonJDHnBpaRzECPriyajGyoMVNdAEiJxhJlduPNvIfmsfMhk
               (int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  
  if (param_2 == param_3) {
    return;
  }
  do {
    piVar1 = (int *)thunk_tHGOcWcxDSfXWCmPitGqZsIexLFUQkrtVQanMnipDnwXJxGcgttgyQZtFfxpEsFbYtvznAqdaHygTZpoxUtSfOBRnZjHbCLqBY_mLCSYhauvLGjiVJoa_Ub_cZZkpnQZFzPctuPuDDPIszEaOByytuISwEeRrlwdjwPqXascnrQKyfXiaXmLV_rLcIn
                              (param_1,param_1 + 1,&uStack_28,auStack_2c,param_2 + 4);
    if (*piVar1 == 0) {
      puVar2 = (undefined4 *)thunk_MwhHq(0x14);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = uStack_28;
      *piVar1 = (int)puVar2;
      piVar3 = (int *)*param_1;
      puVar2[4] = param_2[4];
      if (*piVar3 != 0) {
        *param_1 = *piVar3;
        puVar2 = (undefined4 *)*piVar1;
      }
      FUN_71a4128a(param_1[1],puVar2);
      param_1[2] = param_1[2] + 1;
      piVar1 = (int *)param_2[1];
      if ((int *)param_2[1] != (int *)0x0) goto LAB_71ab8898;
LAB_71ab88ac:
      do {
        piVar3 = (int *)param_2[2];
        bVar4 = (int *)*piVar3 != param_2;
        param_2 = piVar3;
      } while (bVar4);
    }
    else {
      piVar1 = (int *)param_2[1];
      if ((int *)param_2[1] == (int *)0x0) goto LAB_71ab88ac;
LAB_71ab8898:
      do {
        piVar3 = piVar1;
        piVar1 = (int *)*piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
    }
    param_2 = piVar3;
    if (piVar3 == param_3) {
      return;
    }
  } while( true );
}


// =========================================================================
// Function: tHGOcWcxDSfXWCmPitGqZsIexLFUQkrtVQanMnipDnwXJxGcgttgyQZtFfxpEsFbYtvznAqdaHygTZpoxUtSfOBRnZjHbCLqBY_mLCSYhauvLGjiVJoa_Ub_cZZkpnQZFzPctuPuDDPIszEaOByytuISwEeRrlwdjwPqXascnrQKyfXiaXmLV_rLcIn
// Entry: 0x71ab893c | Size: 472 bytes
// =========================================================================

int * tHGOcWcxDSfXWCmPitGqZsIexLFUQkrtVQanMnipDnwXJxGcgttgyQZtFfxpEsFbYtvznAqdaHygTZpoxUtSfOBRnZjHbCLqBY_mLCSYhauvLGjiVJoa_Ub_cZZkpnQZFzPctuPuDDPIszEaOByytuISwEeRrlwdjwPqXascnrQKyfXiaXmLV_rLcIn
                (int *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  piVar5 = param_1 + 1;
  if (piVar5 != param_2) {
    iVar6 = *param_5;
    if (param_2[4] <= iVar6) {
      if (iVar6 <= param_2[4]) {
        *param_3 = param_2;
        *param_4 = (int)param_2;
        return param_4;
      }
      piVar4 = (int *)param_2[1];
      piVar1 = param_2;
      piVar3 = piVar4;
      if (piVar4 == (int *)0x0) {
        do {
          piVar2 = (int *)piVar1[2];
          bVar7 = (int *)*piVar2 != piVar1;
          piVar1 = piVar2;
        } while (bVar7);
      }
      else {
        do {
          piVar2 = piVar3;
          piVar3 = (int *)*piVar2;
        } while ((int *)*piVar2 != (int *)0x0);
      }
      if ((piVar2 == piVar5) || (iVar6 < piVar2[4])) {
        if (piVar4 == (int *)0x0) {
          *param_3 = param_2;
          piVar2 = param_2 + 1;
        }
        else {
          *param_3 = piVar2;
        }
        return piVar2;
      }
      piVar1 = (int *)*piVar5;
      if ((int *)*piVar5 == (int *)0x0) goto LAB_71ab8b08;
      do {
        while (piVar3 = piVar1, piVar3[4] <= iVar6) {
          if (iVar6 <= piVar3[4]) goto LAB_71ab8a5c;
          piVar5 = piVar3 + 1;
          piVar1 = (int *)*piVar5;
          if ((int *)*piVar5 == (int *)0x0) goto LAB_71ab8a5c;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
      goto LAB_71ab8a5c;
    }
  }
  piVar3 = (int *)*param_2;
  piVar1 = param_2;
  if ((int *)*param_1 != param_2) {
    piVar4 = param_2;
    piVar2 = piVar3;
    if (piVar3 == (int *)0x0) {
      do {
        piVar1 = (int *)piVar4[2];
        bVar7 = (int *)*piVar1 == piVar4;
        piVar4 = piVar1;
      } while (bVar7);
    }
    else {
      do {
        piVar1 = piVar2;
        piVar2 = (int *)piVar1[1];
      } while ((int *)piVar1[1] != (int *)0x0);
    }
    iVar6 = *param_5;
    if (iVar6 <= piVar1[4]) {
      piVar1 = (int *)*piVar5;
      if ((int *)*piVar5 == (int *)0x0) {
LAB_71ab8b08:
        *param_3 = piVar5;
        return piVar5;
      }
      do {
        while (piVar3 = piVar1, piVar3[4] <= iVar6) {
          if (iVar6 <= piVar3[4]) goto LAB_71ab8a5c;
          piVar5 = piVar3 + 1;
          piVar1 = (int *)*piVar5;
          if ((int *)*piVar5 == (int *)0x0) goto LAB_71ab8a5c;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
LAB_71ab8a5c:
      *param_3 = piVar3;
      return piVar5;
    }
  }
  if (piVar3 == (int *)0x0) {
    *param_3 = param_2;
  }
  else {
    param_2 = piVar1 + 1;
    *param_3 = piVar1;
  }
  return param_2;
}


// =========================================================================
// Function: AxqNXlTACmYuCXlzmszNHtbqidQTNzOuSujLjyDFHmDRn_znODhsTYTFkWKoIbsLnhKzuJVuYHiuDQlGJDskqupEaHFpAgjfvUoKsOrvepPkuLSaQgcFUYYTf_ASKSuLOCYME_iSBIrAwEvQfYOzxTAINgcTgRzvUiZfyaQOTlghpPvNLiIRvCobSTbRSVFJDMSkutdHVpKChFgSBvefJyzVJQtrfOeRvlHd
// Entry: 0x71ab8b2c | Size: 264 bytes
// =========================================================================

int * AxqNXlTACmYuCXlzmszNHtbqidQTNzOuSujLjyDFHmDRn_znODhsTYTFkWKoIbsLnhKzuJVuYHiuDQlGJDskqupEaHFpAgjfvUoKsOrvepPkuLSaQgcFUYYTf_ASKSuLOCYME_iSBIrAwEvQfYOzxTAINgcTgRzvUiZfyaQOTlghpPvNLiIRvCobSTbRSVFJDMSkutdHVpKChFgSBvefJyzVJQtrfOeRvlHd
                (int param_1,byte *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  
  piVar9 = (int *)(param_1 + 4);
  piVar8 = (int *)*piVar9;
  if (piVar8 != (int *)0x0) {
    pbVar10 = *(byte **)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 4);
    piVar6 = piVar9;
    if ((*param_2 & 1) == 0) {
      pbVar10 = param_2 + 1;
      uVar7 = (uint)(*param_2 >> 1);
    }
    do {
      uVar5 = piVar8[5];
      iVar3 = piVar8[6];
      if ((*(byte *)(piVar8 + 4) & 1) == 0) {
        uVar5 = (uint)(*(byte *)(piVar8 + 4) >> 1);
        iVar3 = (int)piVar8 + 0x11;
      }
      uVar4 = uVar5;
      if (uVar7 < uVar5) {
        uVar4 = uVar7;
      }
      iVar3 = imp_memcmp(iVar3,pbVar10,uVar4);
      bVar1 = uVar7 <= uVar5;
      if (iVar3 != 0) {
        bVar1 = -1 < iVar3;
      }
      piVar2 = piVar8;
      if (!bVar1) {
        piVar8 = piVar8 + 1;
        piVar2 = piVar6;
      }
      piVar6 = piVar2;
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
    if (piVar6 != piVar9) {
      uVar5 = piVar6[5];
      iVar3 = piVar6[6];
      if ((*(byte *)(piVar6 + 4) & 1) == 0) {
        uVar5 = (uint)(*(byte *)(piVar6 + 4) >> 1);
        iVar3 = (int)piVar6 + 0x11;
      }
      uVar4 = uVar7;
      if (uVar5 < uVar7) {
        uVar4 = uVar5;
      }
      iVar3 = imp_memcmp(pbVar10,iVar3,uVar4);
      bVar1 = uVar5 <= uVar7;
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
// Function: HzYtWQbJePtdpWJoIHHpOUf_
// Entry: 0x71ab8c84 | Size: 12 bytes
// =========================================================================

void HzYtWQbJePtdpWJoIHHpOUf_(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: GCzRSRFsbOhyVJvYmrLHbKfeHtrATBQ
// Entry: 0x71ab8c90 | Size: 76 bytes
// =========================================================================

void GCzRSRFsbOhyVJvYmrLHbKfeHtrATBQ(int *param_1)

{
  int iVar1;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = thunk_ZuhgYrrQFJvWcqx_csiWxyWSzoh();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  if (iVar1 == 0) {
    param_1[1] = iStack_14;
  }
  iStack_18 = param_1[1];
  thunk_PRiplXyADFuqzTUVLFyTf_xlewtcLxrb(&iStack_18,&iStack_14);
  return;
}


// =========================================================================
// Function: NMvtXFG_ZkJpFStjszEWXjXXXPsLwqb
// Entry: 0x71ab8cdc | Size: 16 bytes
// =========================================================================

void NMvtXFG_ZkJpFStjszEWXjXXXPsLwqb(int *param_1)

{
  *param_1 = *param_1 + -1;
  return;
}


// =========================================================================
// Function: mXEgvQwyxcMqyCMpnwhIFmRVoGwkZDKMZRNqfDOPxjoByeBRIAWunRKd
// Entry: 0x71ab8cec | Size: 92 bytes
// =========================================================================

int * mXEgvQwyxcMqyCMpnwhIFmRVoGwkZDKMZRNqfDOPxjoByeBRIAWunRKd(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  
  *param_1 = (int)param_2;
  iStack_14 = thunk_ZuhgYrrQFJvWcqx_csiWxyWSzoh();
  iVar2 = *param_2;
  *param_2 = *param_2 + 1;
  if (iVar2 == 0) {
    param_2[1] = iStack_14;
  }
  iStack_18 = param_2[1];
  uVar1 = thunk_PRiplXyADFuqzTUVLFyTf_xlewtcLxrb(&iStack_18,&iStack_14);
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}


// =========================================================================
// Function: KzZNLYYUNMFBwjNRAIiOIXDgqCRJHUWOdLEIWrFhTVKoROOE_yd
// Entry: 0x71ab8d48 | Size: 12 bytes
// =========================================================================

byte KzZNLYYUNMFBwjNRAIiOIXDgqCRJHUWOdLEIWrFhTVKoROOE_yd(int param_1)

{
  return *(byte *)(param_1 + 4) ^ 1;
}


// =========================================================================
// Function: rhHTakBtjuGjznDUpownXAZCDWn_WlrqYPkCre
// Entry: 0x71ab8d54 | Size: 20 bytes
// =========================================================================

void rhHTakBtjuGjznDUpownXAZCDWn_WlrqYPkCre(undefined4 *param_1)

{
  *(int *)*param_1 = *(int *)*param_1 + -1;
  return;
}


// =========================================================================
// Function: NhMImtdmoAvkhOhqUKLqRUPqTBryoGKzBaKmUthrGKTzIUoxWUpEpNRwQfYmpfgewpXONIRLxObVxAJcAVGvW
// Entry: 0x71ab8df0 | Size: 108 bytes
// =========================================================================

int NhMImtdmoAvkhOhqUKLqRUPqTBryoGKzBaKmUthrGKTzIUoxWUpEpNRwQfYmpfgewpXONIRLxObVxAJcAVGvW
              (int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj();
  *(undefined1 *)(iVar2 + 0x1e4) = 0;
  *(undefined1 *)(iVar2 + 0x3c8) = 0;
  cVar1 = *(char *)(param_3 + 0x1e4);
  if (cVar1 != '\0') {
    thunk_crzSmWreBkiHDMTMdDlfklPcLkyZzDzYaGYDHrPj((undefined1 *)(iVar2 + 0x1e4),param_3);
    *(undefined1 *)(param_1 + 0x3c8) = 1;
  }
  iVar2 = param_1;
  if (cVar1 != '\0') {
    iVar2 = param_1 + 0x1e4;
  }
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    iVar2 = param_1;
  }
  if (param_4 < 2) {
    iVar2 = param_1;
  }
  *(int *)(param_1 + 0x3cc) = iVar2;
  return param_1;
}


// =========================================================================
// Function: eXBMJrFIJxumaqqHsweDKAHwolzOBUX_PUP
// Entry: 0x71ab8e5c | Size: 32 bytes
// =========================================================================

void eXBMJrFIJxumaqqHsweDKAHwolzOBUX_PUP(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    iVar1 = param_1 + 0x1e4;
  }
  if (param_2 == 0) {
    iVar1 = param_1;
  }
  *(int *)(param_1 + 0x3cc) = iVar1;
  return;
}


// =========================================================================
// Function: YXZjKcJaEfLfwtWubBRTNUCMRZrdZlVnjIVMRyBkcImgW_EMBGQObDUmoD
// Entry: 0x71ab8ecc | Size: 20 bytes
// =========================================================================

void YXZjKcJaEfLfwtWubBRTNUCMRZrdZlVnjIVMRyBkcImgW_EMBGQObDUmoD(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// =========================================================================
// Function: HDnzFbsJfuZg__SewAdAZbMeUqKGKfRy_RsMdtZpJKyOBiWKoPJoopgXeQ
// Entry: 0x71ab8ee0 | Size: 68 bytes
// =========================================================================

int * HDnzFbsJfuZg__SewAdAZbMeUqKGKfRy_RsMdtZpJKyOBiWKoPJoopgXeQ(int *param_1)

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
// Function: fWUvtfaBDyQEvdFvfJZgmKz_YoDTmASOjxuqmyPQXm_TFIfREAojzMHKCzcuNRy
// Entry: 0x71ab8f2c | Size: 156 bytes
// =========================================================================

void fWUvtfaBDyQEvdFvfJZgmKz_YoDTmASOjxuqmyPQXm_TFIfREAojzMHKCzcuNRy(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar1 = uVar3 + 1;
  *param_1 = uVar1;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = param_1[1] + 1;
  }
  if ((0x1f2 < (int)uVar3) && (uVar1 % 1000 == 0)) {
    uVar1 = param_1[1];
    iVar2 = thunk_tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
                      (s_WebRTC_Audio_EchoCanceller_Proce_700668ae,0x42,2);
    if (iVar2 != 0) {
      thunk_vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(iVar2,499 < (int)uVar1);
    }
    param_1[1] = 0;
  }
  return;
}


// =========================================================================
// Function: MKXVTPIjygcugHbgsBvpcjsEYzZuFITtiKkBeOqEwjWydfU
// Entry: 0x71ab8fcc | Size: 180 bytes
// =========================================================================

void MKXVTPIjygcugHbgsBvpcjsEYzZuFITtiKkBeOqEwjWydfU
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
// Function: myLDmUWtsZjKyVRTYoXhi_YWZcVmlqmIaWSUTCvYSlBPsbBCHtYmYiXSikKTtOJhaFXbUmQDkNsZPvqrezGvHhWyceumTxuMtkWfinEiEItTLzMxdAJyopXlnJHdcjbcIEPD
// Entry: 0x71ab9090 | Size: 548 bytes
// =========================================================================

bool myLDmUWtsZjKyVRTYoXhi_YWZcVmlqmIaWSUTCvYSlBPsbBCHtYmYiXSikKTtOJhaFXbUmQDkNsZPvqrezGvHhWyceumTxuMtkWfinEiEItTLzMxdAJyopXlnJHdcjbcIEPD
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
// Function: lGluONEecqgKhtEOWAxbXbQQXMSl
// Entry: 0x71ab9458 | Size: 208 bytes
// =========================================================================

undefined4 * lGluONEecqgKhtEOWAxbXbQQXMSl(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iStack_30 = thunk_MwhHq(0x100);
  iVar3 = iStack_30 + 0x100;
  iStack_28 = iVar3;
  imp___aeabi_memclr4(iStack_30,0x100);
  iStack_2c = iVar3;
  FUN_71a7706c(&piStack_24,param_3,&iStack_30);
  FUN_71aaef7c(param_1 + 2,param_2,&piStack_24);
  piVar2 = piStack_24;
  if (piStack_24 != (int *)0x0) {
    while (piVar1 = piStack_20, piVar1 != piVar2) {
      piStack_20 = piVar1 + -3;
      if (*piStack_20 != 0) {
        piVar1[-2] = *piStack_20;
        thunk_qNQrlu();
      }
    }
    piStack_20 = piVar2;
    thunk_qNQrlu(piStack_24);
  }
  if (iStack_30 != 0) {
    iStack_2c = iStack_30;
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: pIfiSaBV_mNZoZDNOdRGRymboDI
// Entry: 0x71ab954c | Size: 164 bytes
// =========================================================================

int pIfiSaBV_mNZoZDNOdRGRymboDI(int param_1)

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
// Function: OhEKCjAeVnlHfuAUZJcZnHHDRLG_GidGZRvfWysdHcsQ_nHCT
// Entry: 0x71ab95f0 | Size: 1132 bytes
// =========================================================================

void OhEKCjAeVnlHfuAUZJcZnHHDRLG_GidGZRvfWysdHcsQ_nHCT(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uStack_2c;
  undefined8 *puVar9;
  
  uVar1 = *param_1;
  uVar6 = param_2;
  if (uVar1 != 0) {
    uVar6 = param_1[1];
  }
  if (uVar1 != 0 && uVar6 != 0) {
    uStack_2c = 0;
    uVar6 = 1;
    do {
      bVar16 = uVar6 != 0;
      uVar6 = 0;
      if (bVar16) {
        uVar1 = 0;
        do {
          piVar10 = (int *)(*(int *)(param_1[2] + uStack_2c * 0xc) + uVar1 * 0xc);
          iVar11 = *piVar10;
          puVar13 = (undefined8 *)piVar10[1];
          puVar12 = (undefined4 *)
                    (*(int *)(param_2 + 8) + (*(int *)(param_2 + 4) * uStack_2c + uVar1) * 0x100);
          if (piVar10[2] - (int)puVar13 < 0x100) {
            iVar14 = (int)puVar13 - iVar11;
            uVar6 = (iVar14 >> 2) + 0x40;
            if (0x3fffffff < uVar6) {
              FUN_71a0103c(piVar10);
LAB_71ab9a58:
                    /* WARNING: Subroutine does not return */
              FUN_719fe2ec();
            }
            uVar2 = piVar10[2] - iVar11;
            uVar4 = (int)uVar2 >> 1;
            if (uVar6 < uVar4) {
              uVar6 = uVar4;
            }
            if (0x7ffffffb < uVar2) {
              uVar6 = 0x3fffffff;
            }
            if (0x3fffffff < uVar6) goto LAB_71ab9a58;
            puVar3 = (undefined4 *)thunk_MwhHq(uVar6 << 2);
            *puVar3 = *puVar12;
            puVar3[1] = puVar12[1];
            puVar3[2] = puVar12[2];
            puVar3[3] = puVar12[3];
            puVar3[4] = puVar12[4];
            puVar3[5] = puVar12[5];
            puVar3[6] = puVar12[6];
            puVar3[7] = puVar12[7];
            puVar3[8] = puVar12[8];
            puVar3[9] = puVar12[9];
            puVar3[10] = puVar12[10];
            puVar3[0xb] = puVar12[0xb];
            puVar3[0xc] = puVar12[0xc];
            puVar3[0xd] = puVar12[0xd];
            puVar3[0xe] = puVar12[0xe];
            puVar3[0xf] = puVar12[0xf];
            puVar3[0x10] = puVar12[0x10];
            puVar3[0x11] = puVar12[0x11];
            puVar3[0x12] = puVar12[0x12];
            puVar3[0x13] = puVar12[0x13];
            puVar3[0x14] = puVar12[0x14];
            puVar3[0x15] = puVar12[0x15];
            puVar3[0x16] = puVar12[0x16];
            puVar3[0x17] = puVar12[0x17];
            puVar3[0x18] = puVar12[0x18];
            puVar3[0x19] = puVar12[0x19];
            puVar3[0x1a] = puVar12[0x1a];
            puVar3[0x1b] = puVar12[0x1b];
            puVar3[0x1c] = puVar12[0x1c];
            puVar3[0x1d] = puVar12[0x1d];
            puVar3[0x1e] = puVar12[0x1e];
            puVar3[0x1f] = puVar12[0x1f];
            puVar3[0x20] = puVar12[0x20];
            puVar3[0x21] = puVar12[0x21];
            puVar3[0x22] = puVar12[0x22];
            puVar3[0x23] = puVar12[0x23];
            puVar3[0x24] = puVar12[0x24];
            puVar3[0x25] = puVar12[0x25];
            puVar3[0x26] = puVar12[0x26];
            puVar3[0x27] = puVar12[0x27];
            puVar3[0x28] = puVar12[0x28];
            puVar3[0x29] = puVar12[0x29];
            puVar3[0x2a] = puVar12[0x2a];
            puVar3[0x2b] = puVar12[0x2b];
            puVar3[0x2c] = puVar12[0x2c];
            puVar3[0x2d] = puVar12[0x2d];
            puVar3[0x2e] = puVar12[0x2e];
            puVar3[0x2f] = puVar12[0x2f];
            puVar3[0x30] = puVar12[0x30];
            puVar3[0x31] = puVar12[0x31];
            puVar3[0x32] = puVar12[0x32];
            puVar3[0x33] = puVar12[0x33];
            puVar3[0x34] = puVar12[0x34];
            puVar3[0x35] = puVar12[0x35];
            puVar3[0x36] = puVar12[0x36];
            puVar3[0x37] = puVar12[0x37];
            puVar3[0x38] = puVar12[0x38];
            puVar3[0x39] = puVar12[0x39];
            puVar3[0x3a] = puVar12[0x3a];
            puVar3[0x3b] = puVar12[0x3b];
            puVar3[0x3c] = puVar12[0x3c];
            puVar3[0x3d] = puVar12[0x3d];
            puVar3[0x3e] = puVar12[0x3e];
            puVar3[0x3f] = puVar12[0x3f];
            imp___aeabi_memcpy4(puVar3 + 0x40,iVar11,iVar14);
            *piVar10 = (int)puVar3;
            piVar10[1] = (int)(puVar3 + 0x40) + iVar14;
            piVar10[2] = (int)(puVar3 + uVar6);
            if (iVar11 != 0) {
              thunk_qNQrlu(iVar11);
            }
          }
          else {
            iVar14 = (int)puVar13 - iVar11;
            if (iVar14 >> 2 < 0x40) {
              puVar3 = (undefined4 *)((int)puVar12 + iVar14);
              imp___aeabi_memmove4(puVar13,puVar3,0x100 - iVar14);
              puVar15 = (undefined8 *)((int)puVar13 + (0x100 - iVar14));
              piVar10[1] = (int)puVar15;
              if (iVar14 >> 2 < 1) goto LAB_71ab9660;
            }
            else {
              puVar3 = puVar12 + 0x40;
              puVar15 = puVar13;
            }
            puVar9 = puVar15 + -0x20;
            puVar7 = puVar15;
            if (puVar9 < puVar13) {
              puVar7 = (undefined8 *)((int)puVar15 - 0xfcU);
              if ((undefined8 *)((int)puVar15 - 0xfcU) < puVar13) {
                puVar7 = puVar13;
              }
              uVar6 = (int)puVar7 + (0xff - (int)puVar15);
              puVar5 = puVar15;
              if (0xb < uVar6) {
                uVar4 = (uVar6 >> 2) + 1;
                uVar2 = uVar4 & 0xfffffffc;
                puVar7 = (undefined8 *)((int)puVar15 + uVar2 * 4);
                puVar8 = (undefined8 *)((int)puVar9 + uVar2 * 4);
                uVar6 = uVar2;
                do {
                  uVar17 = *puVar9;
                  uVar18 = puVar9[1];
                  puVar9 = puVar9 + 2;
                  uVar6 = uVar6 - 4;
                  *puVar5 = uVar17;
                  puVar5[1] = uVar18;
                  puVar5 = puVar5 + 2;
                } while (uVar6 != 0);
                puVar5 = puVar7;
                puVar9 = puVar8;
                if (uVar4 == uVar2) goto LAB_71ab99d0;
              }
              do {
                puVar8 = (undefined8 *)((int)puVar9 + 4);
                puVar7 = (undefined8 *)((int)puVar5 + 4);
                *(undefined4 *)puVar5 = *(undefined4 *)puVar9;
                puVar5 = puVar7;
                puVar9 = puVar8;
              } while (puVar8 < puVar13);
            }
LAB_71ab99d0:
            piVar10[1] = (int)puVar7;
            if (puVar15 != (undefined8 *)(iVar11 + 0x100)) {
              imp___aeabi_memmove4((undefined8 *)(iVar11 + 0x100),iVar11);
            }
            if (puVar3 != puVar12) {
              imp___aeabi_memmove4(iVar11,puVar12,(int)puVar3 - (int)puVar12);
            }
          }
LAB_71ab9660:
          uVar6 = param_1[1];
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar6);
        uVar1 = *param_1;
      }
      uStack_2c = uStack_2c + 1;
    } while (uStack_2c < uVar1);
  }
  return;
}


// =========================================================================
// Function: hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
// Entry: 0x71ab9a5c | Size: 636 bytes
// =========================================================================

void hwBGvibUzGFaTLaRRfwmGuceaTWLjMcXpOXgbgCzSivFDjAtKHSiMFDTPNZaRoS_LKuEQbZosjmERLpiJBJqFVQRJelZiLcMxINFjIBjpmdDwFmhejaupdHYGnqgzBYkHytHlxHkDgZaZQJgpp_jKAWD
               (uint *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint unaff_r10;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uStack_28;
  
  uVar1 = *param_1;
  uVar4 = param_2;
  if (uVar1 != 0) {
    uVar4 = param_1[1];
    unaff_r10 = param_2;
  }
  if (uVar1 != 0 && uVar4 != 0) {
    uStack_28 = 0;
    uVar4 = 1;
    do {
      bVar18 = uVar4 != 0;
      uVar4 = 0;
      if (bVar18) {
        uVar1 = 0;
        do {
          uVar4 = param_1[2];
          piVar7 = (int *)(*(int *)(uVar4 + uStack_28 * 0xc) + uVar1 * 0xc);
          iVar5 = *piVar7;
          iVar13 = piVar7[1] - iVar5;
          if (iVar13 != 0) {
            imp___aeabi_memmove4
                      (*(undefined4 *)(*(int *)(*param_3 + uStack_28 * 0xc) + uVar1 * 8),iVar5,
                       iVar13);
            uVar4 = param_1[2];
          }
          iVar5 = *(int *)(unaff_r10 + 4);
          iVar12 = 0;
          iVar16 = *(int *)(unaff_r10 + 8);
          if (iVar13 != 0x140) {
            piVar7 = (int *)(*(int *)(uVar4 + uStack_28 * 0xc) + uVar1 * 0xc);
            iVar12 = 0x140 - iVar13;
            imp___aeabi_memmove4
                      (*(int *)(*(int *)(*param_3 + uStack_28 * 0xc) + uVar1 * 8) +
                       (piVar7[1] - *piVar7),iVar16 + (iVar5 * uStack_28 + uVar1) * 0x100,iVar12);
            iVar5 = *(int *)(unaff_r10 + 4);
            iVar16 = *(int *)(unaff_r10 + 8);
            uVar4 = param_1[2];
          }
          piVar7 = (int *)(*(int *)(uVar4 + uStack_28 * 0xc) + uVar1 * 0xc);
          iVar11 = *piVar7;
          iVar14 = 0x100 - iVar12;
          uVar4 = iVar14 >> 2;
          piVar7[1] = iVar11;
          if (0 < (int)uVar4) {
            iVar6 = iVar5 * uStack_28 + uVar1;
            puVar10 = (undefined4 *)(iVar16 + iVar6 * 0x100 + iVar12);
            uVar2 = piVar7[2] - iVar11;
            if ((int)uVar2 < iVar14) {
              if (uVar4 < (uint)((int)uVar2 >> 1)) {
                uVar4 = (int)uVar2 >> 1;
              }
              if (0x7ffffffb < uVar2) {
                uVar4 = 0x3fffffff;
              }
              if (0x3fffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_719fe2ec();
              }
              puVar3 = (undefined8 *)thunk_MwhHq(uVar4 << 2);
              puVar8 = puVar3;
              if ((0xfcU - iVar12 < 0xc) ||
                 ((uint)((int)puVar3 - (iVar12 + iVar16 + iVar6 * 0x100)) < 0x10)) {
LAB_71ab9ca8:
                do {
                  puVar9 = (undefined8 *)((int)puVar8 + 4);
                  *(undefined4 *)puVar8 = *puVar10;
                  puVar8 = puVar9;
                  puVar10 = puVar10 + 1;
                } while (puVar9 != (undefined8 *)((int)puVar3 + iVar14));
              }
              else {
                uVar15 = (0xfcU - iVar12 >> 2) + 1;
                puVar9 = (undefined8 *)(iVar16 + iVar12 + (uStack_28 * iVar5 + uVar1) * 0x100);
                uVar17 = uVar15 & 0xfffffffc;
                puVar10 = puVar10 + uVar17;
                uVar2 = uVar17;
                do {
                  uVar19 = *puVar9;
                  uVar20 = puVar9[1];
                  puVar9 = puVar9 + 2;
                  uVar2 = uVar2 - 4;
                  *puVar8 = uVar19;
                  puVar8[1] = uVar20;
                  puVar8 = puVar8 + 2;
                } while (uVar2 != 0);
                puVar8 = (undefined8 *)((int)puVar3 + uVar17 * 4);
                if (uVar15 != uVar17) goto LAB_71ab9ca8;
              }
              *piVar7 = (int)puVar3;
              piVar7[1] = (int)puVar3 + iVar14;
              piVar7[2] = (int)((int)puVar3 + uVar4 * 4);
              if (iVar11 != 0) {
                thunk_qNQrlu();
              }
            }
            else {
              if (iVar13 != 0x40) {
                imp___aeabi_memmove4(iVar11,puVar10,iVar14);
              }
              piVar7[1] = iVar11 + iVar14;
            }
          }
          uVar1 = uVar1 + 1;
          uVar4 = param_1[1];
        } while (uVar1 < uVar4);
        uVar1 = *param_1;
      }
      uStack_28 = uStack_28 + 1;
    } while (uStack_28 < uVar1);
  }
  return;
}


// =========================================================================
// Function: FAiqRpguD_WjGYHrbVnYvSyydwowk
// Entry: 0x71ab9fe4 | Size: 440 bytes
// =========================================================================

undefined4 * FAiqRpguD_WjGYHrbVnYvSyydwowk(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int **ppiStack_2c;
  undefined1 uStack_28;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  piStack_30 = (int *)0x0;
  piStack_34 = (int *)0x0;
  piStack_38 = (int *)0x0;
  uStack_28 = 0;
  ppiStack_2c = &piStack_38;
  if (param_3 != 0) {
    if (0x15555555 < param_3) {
      FUN_71a77428(&piStack_38);
      FUN_71aaf264(&piStack_38);
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    piVar3 = (int *)thunk_MwhHq(param_3 * 0xc);
    piStack_30 = piVar3 + param_3 * 3;
    uVar1 = (param_3 * 0xc - 0xc) / 0xc;
    piStack_38 = piVar3;
    imp___aeabi_memclr4(piVar3,uVar1 * 0xc + 0xc);
    piStack_34 = piVar3 + uVar1 * 3 + 3;
  }
  puVar10 = param_1 + 2;
  FUN_71aaef7c(puVar10,param_2,&piStack_38);
  piVar3 = piStack_38;
  piVar8 = piStack_34;
  if (piStack_38 != (int *)0x0) {
    while (piVar2 = piVar8, piVar2 != piVar3) {
      piVar8 = piVar2 + -3;
      if (*piVar8 != 0) {
        piVar2[-2] = *piVar8;
        thunk_qNQrlu();
      }
    }
    piStack_34 = piVar3;
    thunk_qNQrlu(piStack_38);
  }
  puVar9 = (undefined4 *)param_1[3];
  for (puVar5 = (undefined4 *)param_1[2]; puVar5 != puVar9; puVar5 = puVar5 + 3) {
    piVar8 = (int *)puVar5[1];
    for (piVar3 = (int *)*puVar5; piVar3 != piVar8; piVar3 = piVar3 + 3) {
      iVar7 = *piVar3;
      if ((uint)(piVar3[2] - iVar7) < 0x100) {
        iVar6 = piVar3[1];
        iVar4 = thunk_MwhHq(0x100);
        imp___aeabi_memcpy4(iVar4,iVar7,iVar6 - iVar7,extraout_r3,puVar10);
        *piVar3 = iVar4;
        piVar3[1] = iVar4 + (iVar6 - iVar7);
        piVar3[2] = iVar4 + 0x100;
        if (iVar7 != 0) {
          thunk_qNQrlu(iVar7);
        }
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: BqRzmalcICGrikdbwOgPVRKmkouJ
// Entry: 0x71aba1b4 | Size: 164 bytes
// =========================================================================

int BqRzmalcICGrikdbwOgPVRKmkouJ(int param_1)

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
// Function: wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
// Entry: 0x71aba258 | Size: 484 bytes
// =========================================================================

void wlFGkdEhZrqTqcBcBvDeNdqtLUPGVgbCbVXNfnOpgCoHnzngBXHayRTSokBlpOEyBhXCVHkCXiCXrndpmioYDEuxJQsHOFjCULbNzfqMHzvCsYgAFnyhCNhTxGwinQSWpzKJiNvIvcInKNMDEGxSFWRQz
               (uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *unaff_r10;
  int iVar12;
  bool bVar13;
  
  uVar1 = *param_1;
  piVar2 = param_2;
  if (uVar1 != 0) {
    piVar2 = (int *)param_1[1];
    unaff_r10 = param_2;
  }
  if (uVar1 != 0 && piVar2 != (int *)0x0) {
    uVar9 = 0;
    uVar3 = 1;
    do {
      bVar13 = uVar3 != 0;
      uVar3 = 0;
      if (bVar13) {
        iVar11 = 0;
        uVar1 = 0;
        do {
          piVar2 = (int *)(*(int *)(param_1[2] + uVar9 * 0xc) + iVar11);
          iVar4 = *piVar2;
          iVar7 = piVar2[1] - iVar4;
          if (iVar7 != 0) {
            imp___aeabi_memmove4
                      (*(int *)(param_3 + 8) + (uVar9 * *(int *)(param_3 + 4) + uVar1) * 0x100,iVar4
                       ,iVar7);
          }
          iVar12 = 0x40 - (iVar7 >> 2);
          iVar4 = *unaff_r10;
          if (iVar7 != 0x100) {
            imp___aeabi_memmove4
                      (*(int *)(param_3 + 8) + (uVar9 * *(int *)(param_3 + 4) + uVar1) * 0x100 +
                       iVar7,*(undefined4 *)(*(int *)(iVar4 + uVar9 * 0xc) + uVar1 * 8),iVar12 * 4);
            iVar4 = *unaff_r10;
          }
          piVar2 = (int *)(*(int *)(iVar4 + uVar9 * 0xc) + uVar1 * 8);
          iVar5 = *piVar2;
          iVar8 = *(int *)(param_1[2] + uVar9 * 0xc);
          iVar4 = piVar2[1];
          iVar7 = iVar5 + iVar12 * 4;
          piVar2 = (int *)(iVar8 + iVar11);
          iVar10 = *piVar2;
          iVar5 = (iVar5 + iVar4 * 4) - iVar7;
          uVar3 = iVar5 >> 2;
          piVar2[1] = iVar10;
          if (0 < (int)uVar3) {
            iVar8 = iVar8 + iVar11;
            uVar6 = *(int *)(iVar8 + 8) - iVar10;
            if ((int)uVar6 < iVar5) {
              if (uVar3 < (uint)((int)uVar6 >> 1)) {
                uVar3 = (int)uVar6 >> 1;
              }
              if (0x7ffffffb < uVar6) {
                uVar3 = 0x3fffffff;
              }
              if (0x3fffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_719fe2ec();
              }
              iVar4 = thunk_MwhHq(uVar3 << 2);
              imp___aeabi_memcpy4(iVar4,iVar7,iVar5);
              *piVar2 = iVar4;
              piVar2[1] = iVar4 + iVar5;
              *(uint *)(iVar8 + 8) = iVar4 + uVar3 * 4;
              if (iVar10 != 0) {
                thunk_qNQrlu(iVar10);
              }
            }
            else {
              if (iVar12 != iVar4) {
                imp___aeabi_memmove4(iVar10,iVar7,iVar5);
              }
              piVar2[1] = iVar10 + iVar5;
            }
          }
          iVar11 = iVar11 + 0xc;
          uVar1 = uVar1 + 1;
          uVar3 = param_1[1];
        } while (uVar1 < uVar3);
        uVar1 = *param_1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  return;
}


// =========================================================================
// Function: RyGcADkMvql_NCceoKyYdyAEEzGdCPVJhaLovESDQ_rQf
// Entry: 0x71aba43c | Size: 32 bytes
// =========================================================================

bool RyGcADkMvql_NCceoKyYdyAEEzGdCPVJhaLovESDQ_rQf(int param_1)

{
  return ((int *)**(int **)(param_1 + 8))[1] - *(int *)**(int **)(param_1 + 8) == 0x100;
}


// =========================================================================
// Function: nFnYlBcfkbmaAggDzQrQAneYfYUCyIsEyVLdVIPDxAOdKuuaUV
// Entry: 0x71aba45c | Size: 208 bytes
// =========================================================================

void nFnYlBcfkbmaAggDzQrQAneYfYUCyIsEyVLdVIPDxAOdKuuaUV(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *unaff_r9;
  
  uVar2 = *param_1;
  puVar1 = param_1;
  if (uVar2 != 0) {
    puVar1 = (uint *)param_1[1];
    unaff_r9 = param_1;
  }
  if (uVar2 != 0 && puVar1 != (uint *)0x0) {
    uVar8 = 0;
    puVar7 = (uint *)0x1;
    do {
      while (puVar7 != (uint *)0x0) {
        iVar6 = 0;
        puVar7 = (uint *)0x0;
        iVar4 = *(int *)(unaff_r9[2] + uVar8 * 0xc);
        do {
          iVar3 = *(int *)(iVar4 + iVar6);
          iVar5 = ((int *)(iVar4 + iVar6))[1];
          if (iVar5 != iVar3) {
            imp___aeabi_memmove4
                      (*(int *)(param_2 + 8) +
                       (int)(uVar8 * *(int *)(param_2 + 4) + (int)puVar7) * 0x100,iVar3,
                       iVar5 - iVar3);
            puVar1 = (uint *)unaff_r9[1];
            iVar4 = *(int *)(unaff_r9[2] + uVar8 * 0xc);
            iVar3 = *(int *)(iVar4 + iVar6);
          }
          iVar5 = iVar4 + iVar6;
          puVar7 = (uint *)((int)puVar7 + 1);
          iVar6 = iVar6 + 0xc;
          *(int *)(iVar5 + 4) = iVar3;
        } while (puVar7 < puVar1);
        uVar2 = *unaff_r9;
        uVar8 = uVar8 + 1;
        puVar7 = puVar1;
        if (uVar2 <= uVar8) {
          return;
        }
      }
      puVar7 = (uint *)0x0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return;
}


