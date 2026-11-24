// =========================================================================
// Function: kopWZjp_OtOMmCjiLYBJIsCSoCGvntpNhaFCyEyxDeUsPrLHmrFcjEHKfOndT_dsBRFnTGnyzkXUhNINTbYBXqjsJNENBUBgDLTkoce
// Entry: 0x71a880b8 | Size: 644 bytes
// =========================================================================

void kopWZjp_OtOMmCjiLYBJIsCSoCGvntpNhaFCyEyxDeUsPrLHmrFcjEHKfOndT_dsBRFnTGnyzkXUhNINTbYBXqjsJNENBUBgDLTkoce
               (int *param_1,byte *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char cStack_31;
  int iStack_30;
  int iStack_2c;
  
  *param_1 = 0;
  param_1[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  param_1[5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[6] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_2 == param_3) {
    return;
  }
  iVar1 = FUN_71a87620(param_2,param_3,param_1);
  if (iVar1 != 0) {
    return;
  }
  pbVar4 = param_2;
  pbVar6 = param_2;
  if (param_2 < param_3) {
    do {
      pbVar4 = pbVar6;
      if (*pbVar6 != 0x30) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = param_3;
    } while (pbVar6 != param_3);
  }
  iStack_2c = 0;
  iStack_30 = 0;
  cStack_31 = '\0';
  iVar1 = FUN_71a87828(pbVar4,param_3,0x13,&iStack_30,&cStack_31);
  if (49999999 < iVar1) {
    return;
  }
  iVar7 = 0x13 - iVar1;
  pbVar4 = pbVar4 + iVar1;
  iVar8 = 0;
  if (iVar1 + -0x13 != 0 && 0x12 < iVar1) {
    iVar7 = 0;
    iVar8 = iVar1 + -0x13;
  }
  if ((pbVar4 < param_3) && (*pbVar4 == 0x2e)) {
    pbVar4 = pbVar4 + 1;
    pbVar6 = pbVar4;
    pbVar5 = pbVar4;
    if (iStack_30 == 0 && iStack_2c == 0) {
      for (; (pbVar6 < param_3 && (pbVar5 = pbVar6, *pbVar6 == 0x30)); pbVar6 = pbVar6 + 1) {
        pbVar5 = param_3;
      }
      if (49999999 < (int)pbVar5 - (int)pbVar4) {
        return;
      }
      iVar8 = iVar8 - ((int)pbVar5 - (int)pbVar4);
      pbVar4 = pbVar5;
    }
    iVar1 = FUN_71a87828(pbVar4,param_3,iVar7,&iStack_30,&cStack_31);
    if (iVar1 < iVar7) {
      iVar7 = iVar1;
    }
    if (49999999 < iVar1) {
      return;
    }
    pbVar4 = pbVar4 + iVar1;
    iVar8 = iVar8 - iVar7;
  }
  if (pbVar4 == param_2) {
    return;
  }
  uVar2 = (int)pbVar4 - (int)param_2;
  bVar9 = uVar2 == 1;
  if (bVar9) {
    uVar2 = (uint)*param_2;
  }
  if (bVar9 && uVar2 == 0x2e) {
    return;
  }
  if (cStack_31 != '\0') {
    param_1[5] = (int)param_2;
  }
  *param_1 = iStack_30;
  param_1[1] = iStack_2c;
  piVar3 = param_1 + 3;
  *piVar3 = 0;
  if (cStack_31 != '\0') {
    param_1[6] = (int)pbVar4;
  }
  if ((((param_4 & 3) != 2) && (pbVar4 < param_3)) && ((*pbVar4 & 0xdf) == 0x45)) {
    pbVar6 = pbVar4 + 1;
    if (pbVar6 < param_3) {
      if (*pbVar6 == 0x2d) {
        iVar1 = FUN_71a879e4(pbVar4 + 2,param_3);
        if (iVar1 != 0) {
          pbVar4 = pbVar4 + 2 + iVar1;
          *piVar3 = -*piVar3;
          goto LAB_71a88314;
        }
        goto LAB_71a8830c;
      }
      if (*pbVar6 == 0x2b) {
        pbVar6 = pbVar4 + 2;
      }
    }
    iVar1 = FUN_71a879e4(pbVar6,param_3);
    if (iVar1 != 0) {
      pbVar4 = pbVar6 + iVar1;
      goto LAB_71a88314;
    }
  }
LAB_71a8830c:
  if ((param_4 & 3) == 1) {
    return;
  }
LAB_71a88314:
  param_1[4] = 0;
  iVar1 = 0;
  if (*param_1 != 0 || param_1[1] != 0) {
    iVar1 = param_1[3] + iVar8;
  }
  param_1[7] = (int)pbVar4;
  param_1[2] = iVar1;
  return;
}


// =========================================================================
// Function: gTcNnZDYJxXKsNtsFhIiU_UkqHczxpvfXClbkoeoBBjnJmQrdcTHMqzyDbfqfnoPxFQSzjPUfGSbuR_KAjXcNdOmBcIFvrQHKeAwdRj
// Entry: 0x71a883e0 | Size: 648 bytes
// =========================================================================

void gTcNnZDYJxXKsNtsFhIiU_UkqHczxpvfXClbkoeoBBjnJmQrdcTHMqzyDbfqfnoPxFQSzjPUfGSbuR_KAjXcNdOmBcIFvrQHKeAwdRj
               (uint *param_1,byte *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  char cStack_31;
  uint uStack_30;
  uint uStack_2c;
  
  *param_1 = 0;
  param_1[1] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  param_1[5] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[6] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[7] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_2 == param_3) {
    return;
  }
  iVar1 = FUN_71a87620(param_2,param_3,param_1);
  if (iVar1 != 0) {
    return;
  }
  pbVar4 = param_2;
  pbVar6 = param_2;
  if (param_2 < param_3) {
    do {
      pbVar4 = pbVar6;
      if (*pbVar6 != 0x30) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = param_3;
    } while (pbVar6 != param_3);
  }
  uStack_2c = 0;
  uStack_30 = 0;
  cStack_31 = '\0';
  iVar1 = FUN_71a87ae4(pbVar4,param_3,0xf,&uStack_30,&cStack_31);
  if (12499999 < iVar1) {
    return;
  }
  iVar8 = 0xf - iVar1;
  pbVar4 = pbVar4 + iVar1;
  iVar7 = 0;
  if (iVar1 + -0xf != 0 && 0xe < iVar1) {
    iVar8 = 0;
    iVar7 = iVar1 + -0xf;
  }
  if ((pbVar4 < param_3) && (*pbVar4 == 0x2e)) {
    pbVar4 = pbVar4 + 1;
    pbVar6 = pbVar4;
    pbVar5 = pbVar4;
    if (uStack_30 == 0 && uStack_2c == 0) {
      for (; (pbVar6 < param_3 && (pbVar5 = pbVar6, *pbVar6 == 0x30)); pbVar6 = pbVar6 + 1) {
        pbVar5 = param_3;
      }
      if (12499999 < (int)pbVar5 - (int)pbVar4) {
        return;
      }
      iVar7 = iVar7 - ((int)pbVar5 - (int)pbVar4);
      pbVar4 = pbVar5;
    }
    iVar1 = FUN_71a87ae4(pbVar4,param_3,iVar8,&uStack_30,&cStack_31);
    if (iVar1 < iVar8) {
      iVar8 = iVar1;
    }
    if (12499999 < iVar1) {
      return;
    }
    pbVar4 = pbVar4 + iVar1;
    iVar7 = iVar7 - iVar8;
  }
  if (pbVar4 == param_2) {
    return;
  }
  uVar2 = (int)pbVar4 - (int)param_2;
  bVar9 = uVar2 == 1;
  if (bVar9) {
    uVar2 = (uint)*param_2;
  }
  if (bVar9 && uVar2 == 0x2e) {
    return;
  }
  if (cStack_31 != '\0') {
    uStack_30 = uStack_30 | 1;
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  puVar3 = param_1 + 3;
  *puVar3 = 0;
  if ((((param_4 & 3) != 2) && (pbVar4 < param_3)) && ((*pbVar4 & 0xdf) == 0x50)) {
    pbVar6 = pbVar4 + 1;
    if (pbVar6 < param_3) {
      if (*pbVar6 == 0x2d) {
        iVar1 = FUN_71a879e4(pbVar4 + 2,param_3);
        if (iVar1 != 0) {
          pbVar4 = pbVar4 + 2 + iVar1;
          *puVar3 = -*puVar3;
          goto LAB_71a88640;
        }
        goto LAB_71a88638;
      }
      if (*pbVar6 == 0x2b) {
        pbVar6 = pbVar4 + 2;
      }
    }
    iVar1 = FUN_71a879e4(pbVar6,param_3);
    if (iVar1 != 0) {
      pbVar4 = pbVar6 + iVar1;
      goto LAB_71a88640;
    }
  }
LAB_71a88638:
  if ((param_4 & 3) == 1) {
    return;
  }
LAB_71a88640:
  param_1[4] = 0;
  uVar2 = 0;
  if (*param_1 != 0 || param_1[1] != 0) {
    uVar2 = param_1[3] + iVar7 * 4;
  }
  param_1[7] = (uint)pbVar4;
  param_1[2] = uVar2;
  return;
}


// =========================================================================
// Function: FlAasK_HImhSxitKfnHnsaiQraHRFHkyLHFsIleIvoLZyxogjfyqEZaEHkgK
// Entry: 0x71a8870c | Size: 124 bytes
// =========================================================================

int FlAasK_HImhSxitKfnHnsaiQraHRFHkyLHFsIleIvoLZyxogjfyqEZaEHkgK
              (byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    bVar1 = *param_1;
    bVar2 = *param_2;
    if (bVar1 != bVar2) {
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 + 0x20;
      }
      if ((byte)(bVar2 + 0xbf) < 0x1a) {
        bVar2 = bVar2 + 0x20;
      }
      if ((uint)bVar1 - (uint)bVar2 != 0) {
        return (uint)bVar1 - (uint)bVar2;
      }
    }
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}


// =========================================================================
// Function: liDRFssSwRZuDqxFw__CMHEcyEgEwBjjKrKqTXjqiWxD_eAyYyHMKOrlsOQrwUt
// Entry: 0x71a887a0 | Size: 24 bytes
// =========================================================================

void liDRFssSwRZuDqxFw__CMHEcyEgEwBjjKrKqTXjqiWxD_eAyYyHMKOrlsOQrwUt(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  return;
}


// =========================================================================
// Function: TxtmTXnFPKPKi_vwVjEJrjKSgGVvvjzoTxtRc_xFRSeUUPHZEPjMbYjAPXSXnzJ
// Entry: 0x71a887d0 | Size: 32 bytes
// =========================================================================

void TxtmTXnFPKPKi_vwVjEJrjKSgGVvvjzoTxtRc_xFRSeUUPHZEPjMbYjAPXSXnzJ
               (uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 != 0 || param_4 != 0);
  if (param_4 != 0) {
    uVar1 = 2;
  }
  param_1[4] = 0;
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: jtPUQZmHA_EKvLnas_gXefbxRhfvHmlYopBTsiATFAZFrYZSAvIWAYySQpbCusGPGqSb_Jlh_ifSRoFL_IWaDMUqaxwMkvQLsFKg_JGEgEmcJLfxNNqv
// Entry: 0x71a88808 | Size: 136 bytes
// =========================================================================

undefined4 *
jtPUQZmHA_EKvLnas_gXefbxRhfvHmlYopBTsiATFAZFrYZSAvIWAYySQpbCusGPGqSb_Jlh_ifSRoFL_IWaDMUqaxwMkvQLsFKg_JGEgEmcJLfxNNqv
          (undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[4] = 0;
  if (param_3 != 0) {
    do {
      if (9 < *(byte *)(param_2 + iVar1) - 0x30) {
        if (param_3 == 0) {
          return param_1;
        }
        if (param_3 != iVar1) {
          return param_1;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
    iVar1 = thunk_ujkIGNWwlNPCJbEvPyhTRtEljpOmhmkVuAkRmDtMcbBJjJZnBCPxmhGPbWoniOQmhvtdQImhvtbSpAK
                      (param_1,param_2,param_2 + param_3,0x27);
    if (0 < iVar1) {
      thunk_pxxlcohMxiecFfRazQNaEuzMjbXoUXWPpBLBOaGLgEWiKxoBMY_OfoiS_znLqnrKACmOGenIWssrBiWIycUN
                (param_1,iVar1);
    }
  }
  return param_1;
}


// =========================================================================
// Function: ujkIGNWwlNPCJbEvPyhTRtEljpOmhmkVuAkRmDtMcbBJjJZnBCPxmhGPbWoniOQmhvtdQImhvtbSpAK
// Entry: 0x71a888e0 | Size: 1056 bytes
// =========================================================================

char * ujkIGNWwlNPCJbEvPyhTRtEljpOmhmkVuAkRmDtMcbBJjJZnBCPxmhGPbWoniOQmhvtdQImhvtbSpAK
                 (uint *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iStack_28;
  
  if (0x27 < param_4) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006d93f,0xc3,
                  s_int_absl__strings_internal__BigU_7006bb85,
                  s_significant_digits_<__Digits10()_70064fa0);
  }
  puVar13 = param_1 + 1;
  if (0 < (int)*param_1) {
    imp___aeabi_memclr4(puVar13,*param_1 << 2);
  }
  pcVar12 = (char *)0x0;
  *param_1 = 0;
  pcVar9 = param_2;
  if (param_2 < param_3) {
    do {
      pcVar9 = param_2;
      if (*param_2 != '0') break;
      param_2 = param_2 + 1;
      pcVar9 = param_3;
    } while (param_2 != param_3);
  }
  pcVar11 = param_3;
  if (pcVar9 < param_3) {
    pcVar12 = param_3 + -(int)pcVar9;
    iVar3 = 0;
    pcVar10 = param_3;
LAB_71a88970:
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + -1;
    if (*pcVar10 == '0') goto code_r0x71a8897c;
    if (*pcVar10 == '.') {
      pcVar12 = (char *)0x0;
      pcVar11 = pcVar10;
      for (; (pcVar9 < pcVar10 && (pcVar11 = pcVar10, pcVar10[-1] == '0')); pcVar10 = pcVar10 + -1)
      {
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar9;
      }
      goto LAB_71a88a0c;
    }
    if (iVar3 == 0) {
      pcVar12 = (char *)0x0;
      goto LAB_71a88a0c;
    }
    pcVar12 = (char *)-iVar3;
    goto LAB_71a889e0;
  }
LAB_71a88a0c:
  iStack_28 = 0;
  if ((pcVar9 != pcVar11) && (0 < param_4)) {
    uVar14 = 0;
    iVar3 = 0;
    uVar4 = 0;
    iStack_28 = 0;
    do {
      pcVar10 = pcVar9;
      cVar1 = *pcVar10;
      if (cVar1 == '.') {
        iStack_28 = 1;
      }
      else {
        param_4 = param_4 + -1;
        bVar5 = cVar1 - 0x30;
        if (((param_4 == 0) && (pcVar10 + 1 != pcVar11)) && (cVar1 == '5' || cVar1 == '0')) {
          bVar5 = cVar1 - 0x2f;
        }
        iVar3 = iVar3 + 1;
        pcVar12 = pcVar12 + -iStack_28;
        uVar4 = uVar4 * 10 + (uint)bVar5;
        if (iVar3 == 9) {
          if (0 < (int)uVar14) {
            uVar6 = 0;
            uVar7 = 0;
            do {
              uVar15 = uVar7 + 1;
              lVar2 = (ulonglong)param_1[uVar7 + 1] * 1000000000 + (ulonglong)uVar6;
              uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
              param_1[uVar7 + 1] = (uint)lVar2;
              uVar7 = uVar15;
            } while (uVar14 != uVar15);
            if (((int)uVar14 < 4) && (uVar6 != 0)) {
              puVar13[uVar14] = uVar6;
              uVar14 = *param_1 + 1;
              *param_1 = uVar14;
            }
          }
          if (uVar4 == 0) {
            iVar3 = 0;
            uVar4 = 0;
          }
          else {
            uVar7 = 0;
            do {
              uVar6 = puVar13[uVar7];
              uVar15 = uVar6 + uVar4;
              puVar13[uVar7] = uVar15;
              uVar7 = uVar7 + CARRY4(uVar6,uVar4);
              uVar4 = (uint)CARRY4(uVar6,uVar4);
              if (uVar6 <= uVar15) break;
            } while (uVar7 < 4);
            uVar4 = 0;
            if ((int)uVar14 < (int)(uVar7 + 1)) {
              uVar14 = uVar7 + 1;
            }
            if (3 < uVar14) {
              uVar14 = 4;
            }
            iVar3 = 0;
            *param_1 = uVar14;
          }
        }
      }
    } while ((pcVar10 + 1 != pcVar11) && (pcVar9 = pcVar10 + 1, 0 < param_4));
    pcVar9 = pcVar10 + 1;
    if (iVar3 != 0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (0 < (int)uVar14) {
        uVar6 = 0;
        uVar15 = (&DAT_700949e0)[iVar3];
        uVar7 = 0;
        do {
          uVar8 = uVar7 + 1;
          lVar2 = (ulonglong)uVar15 * (ulonglong)param_1[uVar7 + 1] + (ulonglong)uVar6;
          uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
          param_1[uVar7 + 1] = (uint)lVar2;
          uVar7 = uVar8;
        } while (uVar14 != uVar8);
        if (((int)uVar14 < 4) && (uVar6 != 0)) {
          puVar13[uVar14] = uVar6;
          uVar14 = *param_1 + 1;
          *param_1 = uVar14;
        }
      }
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          uVar6 = puVar13[uVar7];
          uVar15 = uVar6 + uVar4;
          puVar13[uVar7] = uVar15;
          uVar7 = uVar7 + CARRY4(uVar6,uVar4);
          uVar4 = (uint)CARRY4(uVar6,uVar4);
          if (uVar6 <= uVar15) break;
        } while (uVar7 < 4);
        if ((int)uVar14 < (int)(uVar7 + 1)) {
          uVar14 = uVar7 + 1;
        }
        if (3 < uVar14) {
          uVar14 = 4;
        }
        *param_1 = uVar14;
      }
    }
  }
  if ((pcVar9 < pcVar11) && (iStack_28 == 0)) {
    pcVar10 = (char *)imp_memchr(pcVar9,0x2e,(int)pcVar11 - (int)pcVar9);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = pcVar11;
    }
    pcVar12 = pcVar10 + ((int)pcVar12 - (int)pcVar9);
  }
  return pcVar12;
code_r0x71a8897c:
  iVar3 = iVar3 + -1;
  pcVar11 = pcVar9;
  if ((int)pcVar9 - (int)param_3 == iVar3) goto LAB_71a889e0;
  goto LAB_71a88970;
LAB_71a889e0:
  pcVar10 = (char *)imp_memchr(pcVar9,0x2e,(int)pcVar11 - (int)pcVar9);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = pcVar11;
  }
  if (pcVar10 != pcVar11) {
    pcVar12 = (char *)0x0;
  }
  goto LAB_71a88a0c;
}


// =========================================================================
// Function: epeqheifjKIDOSrJBJcbALMYRIwjusweoKWliHZeUyGxTwCdCFwbjkSJhOnuHdfL_IVbiA
// Entry: 0x71a88e08 | Size: 8 bytes
// =========================================================================

undefined4 epeqheifjKIDOSrJBJcbALMYRIwjusweoKWliHZeUyGxTwCdCFwbjkSJhOnuHdfL_IVbiA(void)

{
  return 0x26;
}


// =========================================================================
// Function: pxxlcohMxiecFfRazQNaEuzMjbXoUXWPpBLBOaGLgEWiKxoBMY_OfoiS_znLqnrKACmOGenIWssrBiWIycUN
// Entry: 0x71a88e28 | Size: 440 bytes
// =========================================================================

void pxxlcohMxiecFfRazQNaEuzMjbXoUXWPpBLBOaGLgEWiKxoBMY_OfoiS_znLqnrKACmOGenIWssrBiWIycUN
               (int *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((int)param_2 < 10) {
    if (((0 < (int)param_2) && (iVar3 = *param_1, iVar3 != 0)) && (0 < iVar3)) {
      uVar2 = 0;
      uVar4 = (&DAT_700949e0)[param_2];
      iVar5 = 0;
      do {
        iVar7 = iVar5 + 1;
        lVar1 = (ulonglong)uVar4 * (ulonglong)(uint)param_1[iVar5 + 1] + (ulonglong)uVar2;
        uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
        param_1[iVar5 + 1] = (int)lVar1;
        iVar5 = iVar7;
      } while (iVar3 != iVar7);
      if ((iVar3 < 4) && (uVar2 != 0)) {
        param_1[iVar3 + 1] = uVar2;
        iVar3 = *param_1 + 1;
        goto LAB_71a88e74;
      }
    }
  }
  else {
    thunk__GFOSzVrHFfuBXlfcCywjodayfpJsLrxhMytazLtUvVkNGNIOwVxXvbHvRYrPNhCdrBBIMCogUIpWRhXpHymh
              (param_1,param_2);
    iVar3 = *param_1;
    if (0x7f < param_2) {
      if (0 < iVar3) {
        imp___aeabi_memclr4(param_1 + 1,iVar3 << 2);
      }
      iVar3 = 0;
LAB_71a88e74:
      *param_1 = iVar3;
      return;
    }
    uVar4 = param_2 >> 5;
    iVar3 = iVar3 + uVar4;
    iVar5 = 4;
    if (iVar3 < 4) {
      iVar5 = iVar3;
    }
    uVar2 = param_2 & 0x1f;
    *param_1 = iVar5;
    if (uVar2 == 0) {
      iVar3 = iVar5 * 4 + 4;
      iVar5 = iVar3 + uVar4 * -4 + -4;
      if (iVar5 != 0) {
        imp___aeabi_memmove4((int)param_1 + (iVar3 - iVar5),param_1 + 1);
      }
    }
    else {
      if (2 < iVar3) {
        iVar3 = 3;
      }
      if ((int)uVar4 < iVar3) {
        iVar5 = iVar3 * 4 + uVar4 * -4;
        do {
          piVar6 = (int *)((int)param_1 + iVar5 + 4);
          iVar5 = iVar5 + -4;
          param_1[iVar3 + 1] = *piVar6 << uVar2 | ((uint)piVar6[-1] >> 1) >> (uVar2 ^ 0x1f);
          iVar3 = iVar3 + -1;
        } while ((int)uVar4 < iVar3);
        iVar5 = *param_1;
      }
      piVar6 = param_1 + 1;
      piVar6[uVar4] = *piVar6 << uVar2;
      if ((iVar5 < 4) && (piVar6[iVar5] != 0)) {
        *param_1 = iVar5 + 1;
      }
    }
    if (0x1f < param_2) {
      imp___aeabi_memclr4(param_1 + 1,uVar4 << 2);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: YayxEoirMSXcSTzedjCZNhCkvexWlgLeTehjMYinylxGWPHXVgVjJ_bbaPwxXGokNRNcoxowqQofavrCdFgRZB_CJdHbooAhDSQo
// Entry: 0x71a89088 | Size: 172 bytes
// =========================================================================

int YayxEoirMSXcSTzedjCZNhCkvexWlgLeTehjMYinylxGWPHXVgVjJ_bbaPwxXGokNRNcoxowqQofavrCdFgRZB_CJdHbooAhDSQo
              (int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *param_1) {
    imp___aeabi_memclr4(param_1 + 1,*param_1 << 2);
  }
  iVar1 = param_2[4];
  *param_1 = 0;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006d93f,0xae,
                  s_int_absl__strings_internal__BigU_70069f27,
                  s_fp_type____FloatType__kNumber_700725b1);
  }
  if (param_2[5] == 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar1 = 2;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      iVar1 = 1;
    }
    if (iVar3 != 0 || iVar2 != 0) {
      *param_1 = iVar1;
    }
    return param_2[2];
  }
  iVar1 = thunk_ujkIGNWwlNPCJbEvPyhTRtEljpOmhmkVuAkRmDtMcbBJjJZnBCPxmhGPbWoniOQmhvtdQImhvtbSpAK
                    (param_1,param_2[5],param_2[6],param_3);
  return param_2[3] + iVar1;
}


// =========================================================================
// Function: cCXrDGjuhvEIvtGWrGhMuSjsehiTJBSkNQCYqTDYhNlb_HZecuQgUtdKGORUMHrhnABWRej
// Entry: 0x71a89200 | Size: 48 bytes
// =========================================================================

void cCXrDGjuhvEIvtGWrGhMuSjsehiTJBSkNQCYqTDYhNlb_HZecuQgUtdKGORUMHrhnABWRej(int *param_1)

{
  if (0 < *param_1) {
    imp___aeabi_memclr4(param_1 + 1,*param_1 << 2);
  }
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: NduXbGitfBMhRo_GUnKkuCNckBE_WhpwMOzLFepIXWqhbrompeLQcVcrZWQZpRcGLWJYxpD
// Entry: 0x71a89264 | Size: 312 bytes
// =========================================================================

void NduXbGitfBMhRo_GUnKkuCNckBE_WhpwMOzLFepIXWqhbrompeLQcVcrZWQZpRcGLWJYxpD
               (int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (0 < (int)param_2) {
    iVar2 = *param_1;
    if (0x7f < param_2) {
      if (0 < iVar2) {
        imp___aeabi_memclr4(param_1 + 1,iVar2 << 2);
      }
      *param_1 = 0;
      return;
    }
    uVar1 = param_2 >> 5;
    iVar2 = iVar2 + uVar1;
    iVar3 = 4;
    if (iVar2 < 4) {
      iVar3 = iVar2;
    }
    uVar5 = param_2 & 0x1f;
    *param_1 = iVar3;
    if (uVar5 == 0) {
      iVar3 = iVar3 * 4 + 4;
      iVar2 = iVar3 + uVar1 * -4 + -4;
      if (iVar2 != 0) {
        imp___aeabi_memmove4((int)param_1 + (iVar3 - iVar2),param_1 + 1);
      }
    }
    else {
      if (2 < iVar2) {
        iVar2 = 3;
      }
      if ((int)uVar1 < iVar2) {
        iVar3 = iVar2 * 4 + uVar1 * -4;
        do {
          piVar4 = (int *)((int)param_1 + iVar3 + 4);
          iVar3 = iVar3 + -4;
          param_1[iVar2 + 1] = *piVar4 << uVar5 | ((uint)piVar4[-1] >> 1) >> (uVar5 ^ 0x1f);
          iVar2 = iVar2 + -1;
        } while ((int)uVar1 < iVar2);
        iVar3 = *param_1;
      }
      piVar4 = param_1 + 1;
      piVar4[uVar1] = *piVar4 << uVar5;
      if ((iVar3 < 4) && (piVar4[iVar3] != 0)) {
        *param_1 = iVar3 + 1;
      }
    }
    if (0x1f < param_2) {
      imp___aeabi_memclr4(param_1 + 1,uVar1 << 2);
    }
  }
  return;
}


// =========================================================================
// Function: uqAXyAqXyyLEhTXNkAWPig_uAptOEXDOXOuxBrTRYVMCNcRbSJGvTnlboPhjDG_oaiaNznKgA
// Entry: 0x71a89408 | Size: 176 bytes
// =========================================================================

void uqAXyAqXyyLEhTXNkAWPig_uAptOEXDOXOuxBrTRYVMCNcRbSJGvTnlboPhjDG_oaiaNznKgA
               (int *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_r12;
  
  if (param_2 != 1) {
    in_r12 = *param_1;
  }
  if (param_2 != 1 && in_r12 != 0) {
    if (param_2 == 0) {
      iVar4 = 0;
      if (0 < in_r12) {
        imp___aeabi_memclr4(param_1 + 1,in_r12 << 2);
        *param_1 = 0;
        return;
      }
LAB_71a89484:
      *param_1 = iVar4;
      return;
    }
    if (0 < in_r12) {
      uVar3 = 0;
      iVar4 = 0;
      do {
        iVar2 = iVar4 + 1;
        lVar1 = (ulonglong)param_2 * (ulonglong)(uint)param_1[iVar4 + 1] + (ulonglong)uVar3;
        uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
        param_1[iVar4 + 1] = (int)lVar1;
        iVar4 = iVar2;
      } while (in_r12 != iVar2);
      if ((in_r12 < 4) && (uVar3 != 0)) {
        param_1[in_r12 + 1] = uVar3;
        iVar4 = *param_1 + 1;
        goto LAB_71a89484;
      }
    }
  }
  return;
}


// =========================================================================
// Function: UbedXKwRrJbuk_RXDobQfimcvIrtCdsHzorlYNnsozSXpnvh_qTkVLVUMDkRARicxyzUTFyWV
// Entry: 0x71a894ec | Size: 360 bytes
// =========================================================================

void UbedXKwRrJbuk_RXDobQfimcvIrtCdsHzorlYNnsozSXpnvh_qTkVLVUMDkRARicxyzUTFyWV
               (uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  uStack_28 = param_3;
  iStack_24 = param_4;
  if (param_4 == 0) {
    if (param_3 != 1 && uVar4 != 0) {
      if (param_3 == 0) {
        uVar5 = 0;
        if (0 < (int)uVar4) {
          imp___aeabi_memclr4(param_1 + 1,uVar4 << 2);
          *param_1 = 0;
          return;
        }
LAB_71a89624:
        *param_1 = uVar5;
        return;
      }
      if (0 < (int)uVar4) {
        uVar2 = 0;
        uVar5 = 0;
        do {
          uVar3 = uVar5 + 1;
          lVar1 = (ulonglong)param_1[uVar5 + 1] * (ulonglong)param_3 + (ulonglong)uVar2;
          uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
          param_1[uVar5 + 1] = (uint)lVar1;
          uVar5 = uVar3;
        } while (uVar4 != uVar3);
        if (((int)uVar4 < 4) && (uVar2 != 0)) {
          param_1[uVar4 + 1] = uVar2;
          uVar5 = *param_1 + 1;
          goto LAB_71a89624;
        }
      }
    }
  }
  else if (-1 < (int)uVar4) {
    uVar5 = uVar4;
    if (2 < uVar4) {
      uVar5 = 3;
    }
    thunk_XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
              (param_1,uVar4,&uStack_28,2,uVar5);
    if (((uVar4 != 0) &&
        (thunk_XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
                   (param_1,uVar4,&uStack_28,2,uVar5 - 1), uVar5 - 1 != 0)) &&
       (thunk_XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
                  (param_1,uVar4,&uStack_28,2,uVar5 - 2), uVar5 - 2 != 0)) {
      thunk_XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
                (param_1,uVar4,&uStack_28,2,uVar5 - 3);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: aJLyRTKtYOPFYfaVwwrgemGoSjNFfmPgaytwIfbLmD_zQYmijlwEcTbwBUxrhwkEsUUbqLljnBFX
// Entry: 0x71a896f8 | Size: 96 bytes
// =========================================================================

void aJLyRTKtYOPFYfaVwwrgemGoSjNFfmPgaytwIfbLmD_zQYmijlwEcTbwBUxrhwkEsUUbqLljnBFX
               (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = iVar3 + param_2;
  if (1 < (int)uVar1) {
    if (4 < uVar1) {
      uVar1 = 5;
    }
    iVar2 = uVar1 - 2;
    do {
      thunk_XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
                (param_1,iVar3,param_3,param_2,iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


// =========================================================================
// Function: _GFOSzVrHFfuBXlfcCywjodayfpJsLrxhMytazLtUvVkNGNIOwVxXvbHvRYrPNhCdrBBIMCogUIpWRhXpHymh
// Entry: 0x71a8978c | Size: 320 bytes
// =========================================================================

void _GFOSzVrHFfuBXlfcCywjodayfpJsLrxhMytazLtUvVkNGNIOwVxXvbHvRYrPNhCdrBBIMCogUIpWRhXpHymh
               (int *param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (0xc < (int)param_2) {
    iVar3 = *param_1;
    uVar6 = param_2;
    if (iVar3 < 1) {
      iVar3 = param_2 - 0x19;
      if (param_2 < 0x19) {
        iVar3 = 0;
      }
      param_2 = (param_2 + ((iVar3 + 0xcU) / 0xd) * -0xd) - 0xd;
    }
    else {
      do {
        if (0 < iVar3) {
          uVar7 = 0;
          iVar5 = 0;
          do {
            iVar4 = iVar5 + 1;
            lVar2 = (ulonglong)(uint)param_1[iVar5 + 1] * 0x48c27395 + (ulonglong)uVar7;
            uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
            param_1[iVar5 + 1] = (int)lVar2;
            iVar5 = iVar4;
          } while (iVar3 != iVar4);
          if ((iVar3 < 4) && (uVar7 != 0)) {
            param_1[iVar3 + 1] = uVar7;
            iVar3 = *param_1 + 1;
            *param_1 = iVar3;
          }
        }
        param_2 = uVar6 - 0xd;
        bVar1 = 0x19 < (int)uVar6;
        uVar6 = param_2;
      } while (bVar1);
    }
  }
  if (((0 < (int)param_2) && (iVar3 = *param_1, iVar3 != 0)) && (0 < iVar3)) {
    uVar6 = 0;
    uVar7 = *(uint *)(&DAT_700949a8 + param_2 * 4);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 1;
      lVar2 = (ulonglong)uVar7 * (ulonglong)(uint)param_1[iVar5 + 1] + (ulonglong)uVar6;
      uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
      param_1[iVar5 + 1] = (int)lVar2;
      iVar5 = iVar4;
    } while (iVar3 != iVar4);
    if ((iVar3 < 4) && (uVar6 != 0)) {
      param_1[iVar3 + 1] = uVar6;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}


// =========================================================================
// Function: hWUjpTKYdPqbyTDtsXUhwQXQZHSZgpSlSkCmctDOZYNrNnVgIeaVeRCCaolPQUrQenYIUkhAlyB
// Entry: 0x71a89904 | Size: 912 bytes
// =========================================================================

void hWUjpTKYdPqbyTDtsXUhwQXQZHSZgpSlSkCmctDOZYNrNnVgIeaVeRCCaolPQUrQenYIUkhAlyB
               (int *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  bVar18 = true;
  thunk_TxtmTXnFPKPKi_vwVjEJrjKSgGVvvjzoTxtRc_xFRSeUUPHZEPjMbYjAPXSXnzJ(param_1,param_2,1,0);
  if (0x1a < (int)param_2) {
    piVar12 = param_1 + 1;
    do {
      uVar5 = 0x14;
      if (param_2 / 0x1b < 0x14) {
        uVar5 = param_2 / 0x1b;
      }
      if (bVar18) {
        imp___aeabi_memcpy4(piVar12,&DAT_70094a08 + (uVar5 - 1) * uVar5 * 4,uVar5 << 3);
        *param_1 = uVar5 << 1;
      }
      else {
        uVar6 = *param_1 + uVar5 * 2;
        if (1 < (int)uVar6) {
          if (4 < uVar6) {
            uVar6 = 5;
          }
          iVar1 = uVar5 << 1;
          iVar9 = (uVar5 - 1) * uVar5;
          iVar10 = *param_1 + -1;
          iVar7 = uVar6 - 2;
          do {
            iVar8 = iVar7;
            if (iVar10 < iVar7) {
              iVar8 = iVar10;
            }
            if ((iVar8 < 0) || (iVar13 = iVar7 - iVar8, iVar1 <= iVar13)) {
              piVar12[iVar7] = 0;
            }
            else {
              uVar6 = 0;
              uVar2 = (ulonglong)(uint)piVar12[iVar8] *
                      (ulonglong)*(uint *)(&DAT_70094a08 + iVar13 * 4 + iVar9 * 4);
              uVar15 = (uint)uVar2;
              uVar16 = (uint)(uVar2 >> 0x20);
              if ((iVar8 == 0) || (iVar1 <= iVar13 + 1)) {
LAB_71a89b58:
                iVar8 = (int)uVar2;
              }
              else {
                uVar6 = *(uint *)(&DAT_70094a08 + (iVar13 + 1) * 4 + iVar9 * 4);
                lVar3 = (ulonglong)(uint)piVar12[iVar8 + -1] * (ulonglong)uVar6;
                uVar17 = (uint)((ulonglong)lVar3 >> 0x20);
                uVar2 = (ulonglong)(uint)piVar12[iVar8 + -1] * (ulonglong)uVar6 +
                        ((ulonglong)uVar16 << 0x20 | uVar2 & 0xffffffff);
                uVar4 = (uint)uVar2;
                uVar14 = (uint)(uVar2 >> 0x20);
                uVar6 = (uint)(CARRY4(uVar16,uVar17) ||
                              CARRY4(uVar16 + uVar17,(uint)CARRY4((uint)lVar3,uVar15)));
                if (iVar8 + -1 != 0) {
                  if (iVar13 + 2 < iVar1) {
                    uVar16 = *(uint *)(&DAT_70094a08 + (iVar13 + 2) * 4 + iVar9 * 4);
                    lVar3 = (ulonglong)(uint)piVar12[iVar8 + -2] * (ulonglong)uVar16;
                    uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
                    uVar2 = (ulonglong)(uint)piVar12[iVar8 + -2] * (ulonglong)uVar16 +
                            ((ulonglong)uVar14 << 0x20 | uVar2 & 0xffffffff);
                    uVar17 = (uint)uVar2;
                    uVar16 = (uint)(uVar2 >> 0x20);
                    uVar6 = uVar6 + (CARRY4(uVar14,uVar15) ||
                                    CARRY4(uVar14 + uVar15,(uint)CARRY4((uint)lVar3,uVar4)));
                    if (iVar8 + -2 == 0) goto LAB_71a89bf4;
                    if (iVar13 + 3 < iVar1) {
                      uVar15 = *(uint *)(&DAT_70094a08 + (iVar13 + 3) * 4 + iVar9 * 4);
                      lVar3 = (ulonglong)(uint)piVar12[iVar8 + -3] * (ulonglong)uVar15;
                      uVar4 = (uint)((ulonglong)lVar3 >> 0x20);
                      uVar2 = (ulonglong)(uint)piVar12[iVar8 + -3] * (ulonglong)uVar15 +
                              ((ulonglong)uVar16 << 0x20 | uVar2 & 0xffffffff);
                      uVar6 = uVar6 + (CARRY4(uVar16,uVar4) ||
                                      CARRY4(uVar16 + uVar4,(uint)CARRY4((uint)lVar3,uVar17)));
                    }
                  }
                  goto LAB_71a89b58;
                }
LAB_71a89bf4:
                iVar8 = (int)uVar2;
              }
              if (iVar7 < 3) {
                uVar15 = (uint)(uVar2 >> 0x20);
                iVar8 = (int)uVar2;
                if (uVar15 != 0 || uVar6 != 0) {
                  uVar16 = piVar12[iVar7 + 1];
                  piVar12[iVar7 + 1] = uVar16 + uVar15;
                  if (CARRY4(uVar16,uVar15)) {
                    bVar18 = uVar6 == 0xffffffff;
                    uVar6 = uVar6 + 1;
                    if (bVar18) {
                      iVar13 = iVar7 + 3;
                      if (iVar7 < 1) {
                        uVar6 = 1;
                        do {
                          uVar15 = piVar12[iVar13];
                          uVar16 = uVar15 + uVar6;
                          piVar12[iVar13] = uVar16;
                          iVar13 = iVar13 + (uint)CARRY4(uVar15,uVar6);
                          uVar6 = (uint)CARRY4(uVar15,uVar6);
                          if (uVar15 <= uVar16) break;
                        } while (iVar13 < 4);
                      }
                    }
                    else {
LAB_71a89ba4:
                      iVar13 = 5;
                      if (1 < iVar7) goto LAB_71a89c48;
                      iVar13 = iVar7 + 2;
                      do {
                        uVar15 = piVar12[iVar13];
                        uVar16 = uVar15 + uVar6;
                        piVar12[iVar13] = uVar16;
                        iVar13 = iVar13 + (uint)CARRY4(uVar15,uVar6);
                        uVar6 = (uint)CARRY4(uVar15,uVar6);
                        if (uVar15 <= uVar16) break;
                      } while (iVar13 < 4);
                    }
                    iVar13 = iVar13 + 1;
                  }
                  else {
                    if (uVar6 != 0) goto LAB_71a89ba4;
                    iVar13 = iVar7 + 2;
                  }
LAB_71a89c48:
                  iVar11 = *param_1;
                  if (*param_1 < iVar13) {
                    iVar11 = iVar13;
                  }
                  if (3 < iVar11) {
                    iVar11 = 4;
                  }
                  *param_1 = iVar11;
                }
              }
              piVar12[iVar7] = iVar8;
              if ((iVar8 != 0) && (*param_1 <= iVar7)) {
                *param_1 = iVar7 + 1;
              }
            }
            bVar18 = iVar7 != 0;
            iVar7 = iVar7 + -1;
          } while (bVar18);
        }
      }
      bVar18 = false;
      param_2 = uVar5 * -0x1b + param_2;
    } while (0x1a < (int)param_2);
  }
  thunk__GFOSzVrHFfuBXlfcCywjodayfpJsLrxhMytazLtUvVkNGNIOwVxXvbHvRYrPNhCdrBBIMCogUIpWRhXpHymh
            (param_1,param_2);
  return;
}


// =========================================================================
// Function: ysJIGmXkkpYqcdWeJlGshOxvfPzKtaaUGUDWZnpTrQBeZapDEDYnxetZZwEiQKOULrCuIP
// Entry: 0x71a89d40 | Size: 36 bytes
// =========================================================================

int ysJIGmXkkpYqcdWeJlGshOxvfPzKtaaUGUDWZnpTrQBeZapDEDYnxetZZwEiQKOULrCuIP(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2) {
    if (param_2 < *param_1) {
      iVar1 = param_1[param_2 + 1];
    }
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: tSeVnTUKfFpjYposfpPWxubItQybVic_FVxgTZz_zcLNTgvJoOvZITyfpgxNOHnuNotVcu_
// Entry: 0x71a89d7c | Size: 356 bytes
// =========================================================================

void tSeVnTUKfFpjYposfpPWxubItQybVic_FVxgTZz_zcLNTgvJoOvZITyfpgxNOHnuNotVcu_
               (byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = *param_2;
  uVar3 = uStack_38;
  uStack_30 = param_2[1];
  uStack_38._0_4_ = (uint)*param_2;
  uStack_28 = *(undefined4 *)(param_2 + 2);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar12 = (uint)uStack_38;
  uStack_38 = uVar3;
  do {
    if ((int)uVar12 < 1) {
      pbVar5 = *(byte **)(param_1 + 4);
      bVar1 = *param_1;
      pbVar11 = pbVar5;
      if ((bVar1 & 1) == 0) {
        pbVar11 = (byte *)(uint)(bVar1 >> 1);
      }
      if (pbVar11 == (byte *)0x0) {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (param_1,0x30);
        bVar1 = *param_1;
        pbVar5 = *(byte **)(param_1 + 4);
      }
      pbVar11 = *(byte **)(param_1 + 8);
      pbVar6 = pbVar5;
      if ((bVar1 & 1) == 0) {
        pbVar11 = param_1 + 1;
        pbVar6 = (byte *)(uint)(bVar1 >> 1);
      }
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = pbVar11 + (int)pbVar6 + -1;
      }
      if (pbVar6 != (byte *)0x0 && pbVar11 < pbVar5) {
        do {
          pbVar8 = pbVar11 + 1;
          bVar1 = *pbVar11;
          *pbVar11 = *pbVar5;
          pbVar6 = pbVar5 + -1;
          *pbVar5 = bVar1;
          pbVar5 = pbVar6;
          pbVar11 = pbVar8;
        } while (pbVar8 < pbVar6);
      }
      return;
    }
    uVar4 = 0;
    do {
      uVar7 = *(uint *)((int)&uStack_38 + uVar12 * 4);
      uVar9 = uVar7 >> 1 | uVar4 << 0x1f;
      uVar4 = uVar9 + (uVar4 >> 1) + (uint)CARRY4(uVar9,uVar4 >> 1);
      uVar4 = (uVar9 - (uVar4 - (((uint)((ulonglong)uVar4 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                                uVar4 / 5))) * -0x33333333;
      *(uint *)((int)&uStack_38 + uVar12 * 4) = uVar4;
      lVar2 = (ulonglong)uVar4 * 10;
      iVar10 = (int)lVar2;
      uVar4 = uVar7 - iVar10;
      bVar13 = uVar12 != 0;
      uVar12 = uVar12 - 1;
    } while (bVar13 && uVar12 != 0);
    uVar12 = (uint)uStack_38;
    if (0 < (int)(uint)uStack_38) {
      do {
        if (*(int *)((int)&uStack_38 + uVar12 * 4) != 0) goto LAB_71a89dcc;
        uStack_38 = CONCAT44(uStack_38._4_4_,uVar12 - 1);
        bVar13 = 1 < uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar13);
      uVar12 = 0;
    }
LAB_71a89dcc:
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (param_1,uVar4 & 0xff | 0x30,iVar10,(int)((ulonglong)lVar2 >> 0x20));
  } while( true );
}


// =========================================================================
// Function: VndndIzDkIbILXynEOvbusOenEqnpwgYqOTGGImBmfmMyKihdDqWnOlkdYWUSCdYpSa
// Entry: 0x71a89f84 | Size: 8 bytes
// =========================================================================

undefined4 VndndIzDkIbILXynEOvbusOenEqnpwgYqOTGGImBmfmMyKihdDqWnOlkdYWUSCdYpSa(undefined4 *param_1)

{
  return *param_1;
}


// =========================================================================
// Function: wCbhnABAkDPIYqxoNflwrMRXXIcJxCoGOgbpBqlYDqjBtZFTusOYhqtNulirRCLOGLTH
// Entry: 0x71a89fa4 | Size: 8 bytes
// =========================================================================

int wCbhnABAkDPIYqxoNflwrMRXXIcJxCoGOgbpBqlYDqjBtZFTusOYhqtNulirRCLOGLTH(int param_1)

{
  return param_1 + 4;
}


// =========================================================================
// Function: HaAzgLsXzAfRiDtegvyBVK_VjGPZsMBQAjArDxuydZvzELepEqWHZnx_AJeacUMxhcLylrrTgqFR
// Entry: 0x71a89fc4 | Size: 104 bytes
// =========================================================================

void HaAzgLsXzAfRiDtegvyBVK_VjGPZsMBQAjArDxuydZvzELepEqWHZnx_AJeacUMxhcLylrrTgqFR
               (int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 < 4) {
    do {
      uVar2 = param_1[param_2 + 1];
      bVar3 = CARRY4(uVar2,param_3);
      param_1[param_2 + 1] = uVar2 + param_3;
      param_3 = (uint)bVar3;
      param_2 = param_2 + (uint)bVar3;
      if (3 < param_2) break;
    } while (param_3 != 0);
  }
  iVar1 = *param_1;
  if (*param_1 < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  if (3 < iVar1) {
    iVar1 = 4;
  }
  *param_1 = iVar1;
  return;
}


// =========================================================================
// Function: XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
// Entry: 0x71a8a044 | Size: 392 bytes
// =========================================================================

void XwooNqUOkvFzSJHEDTFTkEaIxloeyyDzLXvHTP_wFdklZzgsaoipfSYrCprmbzXRdjnMGsaEHNwUflmD
               (int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = param_2 + -1;
  if (param_5 <= param_2 + -1) {
    iVar6 = param_5;
  }
  if ((iVar6 < 0) || (param_4 <= param_5 - iVar6)) {
    param_1[param_5 + 1] = 0;
    return;
  }
  iVar6 = -iVar6;
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0;
  do {
    lVar1 = (ulonglong)(uint)param_1[1 - iVar6] *
            (ulonglong)*(uint *)(param_3 + param_5 * 4 + iVar6 * 4) + (ulonglong)uVar7;
    uVar7 = (uint)lVar1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar8 = CARRY4(uVar2,uVar5);
    uVar5 = uVar2 + uVar5;
    uVar4 = uVar4 + bVar8;
    if (iVar6 == 0) break;
    iVar3 = param_5 + 1 + iVar6;
    iVar6 = iVar6 + 1;
  } while (iVar3 < param_4);
  if ((2 < param_5) || (uVar5 == 0 && uVar4 == 0)) goto LAB_71a8a1ac;
  uVar2 = param_1[param_5 + 2];
  param_1[param_5 + 2] = uVar2 + uVar5;
  if (CARRY4(uVar2,uVar5)) {
    bVar8 = uVar4 == 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar8) {
      iVar6 = param_5 + 3;
      if (param_5 < 1) {
        uVar4 = 1;
        do {
          uVar5 = param_1[iVar6 + 1];
          uVar2 = uVar5 + uVar4;
          param_1[iVar6 + 1] = uVar2;
          iVar6 = iVar6 + (uint)CARRY4(uVar5,uVar4);
          uVar4 = (uint)CARRY4(uVar5,uVar4);
          if (uVar5 <= uVar2) break;
        } while (iVar6 < 4);
        iVar6 = iVar6 + 1;
      }
      else {
        iVar6 = param_5 + 4;
      }
    }
    else {
LAB_71a8a114:
      iVar6 = 5;
      if (param_5 < 2) {
        iVar6 = param_5 + 2;
        do {
          uVar5 = param_1[iVar6 + 1];
          uVar2 = uVar5 + uVar4;
          param_1[iVar6 + 1] = uVar2;
          iVar6 = iVar6 + (uint)CARRY4(uVar5,uVar4);
          uVar4 = (uint)CARRY4(uVar5,uVar4);
          if (uVar5 <= uVar2) break;
        } while (iVar6 < 4);
        iVar6 = iVar6 + 1;
      }
    }
  }
  else {
    if (uVar4 != 0) goto LAB_71a8a114;
    iVar6 = param_5 + 2;
  }
  iVar3 = *param_1;
  if (*param_1 < iVar6) {
    iVar3 = iVar6;
  }
  if (3 < iVar3) {
    iVar3 = 4;
  }
  *param_1 = iVar3;
LAB_71a8a1ac:
  param_1[param_5 + 1] = uVar7;
  if ((uVar7 != 0) && (*param_1 <= param_5)) {
    *param_1 = param_5 + 1;
  }
  return;
}


// =========================================================================
// Function: bHawNEEAKViWBsOviTtBXMsdiFKJ_dWeDu_PkKSUOwrWwUzvJoOyKPw_XHtETSojgUNOGePBUqgP
// Entry: 0x71a8a1e4 | Size: 236 bytes
// =========================================================================

void bHawNEEAKViWBsOviTtBXMsdiFKJ_dWeDu_PkKSUOwrWwUzvJoOyKPw_XHtETSojgUNOGePBUqgP
               (int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (3 < param_2) {
    return;
  }
  if (param_3 == 0 && param_4 == 0) {
    return;
  }
  uVar5 = param_1[param_2 + 1];
  param_1[param_2 + 1] = uVar5 + param_3;
  if (CARRY4(uVar5,param_3)) {
    bVar6 = param_4 == 0xffffffff;
    param_4 = param_4 + 1;
    if (bVar6) {
      iVar2 = param_2 + 2;
      if (param_2 < 2) {
        uVar5 = 1;
        do {
          uVar3 = param_1[iVar2 + 1];
          uVar4 = uVar3 + uVar5;
          param_1[iVar2 + 1] = uVar4;
          iVar2 = iVar2 + (uint)CARRY4(uVar3,uVar5);
          uVar5 = (uint)CARRY4(uVar3,uVar5);
          if (uVar3 <= uVar4) break;
        } while (iVar2 < 4);
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = param_2 + 3;
      }
      goto LAB_71a8a2b0;
    }
LAB_71a8a264:
    iVar2 = 5;
    if (2 < param_2) goto LAB_71a8a2b0;
    param_2 = param_2 + 1;
    do {
      uVar5 = param_1[param_2 + 1];
      uVar3 = uVar5 + param_4;
      param_1[param_2 + 1] = uVar3;
      param_2 = param_2 + (uint)CARRY4(uVar5,param_4);
      param_4 = (uint)CARRY4(uVar5,param_4);
      if (uVar5 <= uVar3) break;
    } while (param_2 < 4);
  }
  else if (param_4 != 0) goto LAB_71a8a264;
  iVar2 = param_2 + 1;
LAB_71a8a2b0:
  iVar1 = *param_1;
  if (*param_1 < iVar2) {
    iVar1 = iVar2;
  }
  if (3 < iVar1) {
    iVar1 = 4;
  }
  *param_1 = iVar1;
  return;
}


// =========================================================================
// Function: xobIIYrmejNBKb_tHjaPPeXhFFNMZawSmBiLQFgWUELjvzNVkYLUswFftWRrYIgw
// Entry: 0x71a8a2e8 | Size: 28 bytes
// =========================================================================

undefined4 xobIIYrmejNBKb_tHjaPPeXhFFNMZawSmBiLQFgWUELjvzNVkYLUswFftWRrYIgw(undefined4 param_1)

{
  imp___aeabi_memclr4(param_1,0x154);
  return param_1;
}


// =========================================================================
// Function: EkqWQEhlmGmfFWpgDAcnNBDhXONgVczIvinKCNm_cpzuh_nSIwYIQbKhxPwcJHMu
// Entry: 0x71a8a338 | Size: 68 bytes
// =========================================================================

uint * EkqWQEhlmGmfFWpgDAcnNBDhXONgVczIvinKCNm_cpzuh_nSIwYIQbKhxPwcJHMu
                 (uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 != 0 || param_4 != 0);
  if (param_4 != 0) {
    uVar1 = 2;
  }
  *param_1 = uVar1;
  imp___aeabi_memclr4(param_1 + 3,0x148);
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}


// =========================================================================
// Function: YEwlCspgsKRpvNUKIvPzwuQRYXouJIvGxGSYhZQISUSG_EKcbfWZGsmfjoaeMZEobhBWHfeYggVObAg_MFRNqYONhWIMtXgJsDQngpiEHtHzQGxBURxid
// Entry: 0x71a8a3b0 | Size: 136 bytes
// =========================================================================

undefined4
YEwlCspgsKRpvNUKIvPzwuQRYXouJIvGxGSYhZQISUSG_EKcbfWZGsmfjoaeMZEobhBWHfeYggVObAg_MFRNqYONhWIMtXgJsDQngpiEHtHzQGxBURxid
          (undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  imp___aeabi_memclr4(param_1,0x154);
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      if (9 < *(byte *)(param_2 + iVar1) - 0x30) {
        if (param_3 == 0) {
          return param_1;
        }
        if (param_3 != iVar1) {
          return param_1;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (param_3 != iVar1);
    iVar1 = thunk_piXT_jpmlmNKSFYvHFXRKIEx_IwYDbqKmqwDQmtXsnZLHmhzQbiPlsvcpOoPlhOeTyVR_QjhOoPymJ_V
                      (param_1,param_2,param_2 + param_3,0x32a);
    if (0 < iVar1) {
      thunk_XaeeVehpFiaUwkhoSXeHcRQqKrpjjeHdBmXIpLkBPYxXvaQQTRfmaiVEJrTztBMFzDAiNNgTraadPhBmqFzwt
                (param_1,iVar1);
    }
  }
  return param_1;
}


// =========================================================================
// Function: piXT_jpmlmNKSFYvHFXRKIEx_IwYDbqKmqwDQmtXsnZLHmhzQbiPlsvcpOoPlhOeTyVR_QjhOoPymJ_V
// Entry: 0x71a8a4a4 | Size: 1060 bytes
// =========================================================================

char * piXT_jpmlmNKSFYvHFXRKIEx_IwYDbqKmqwDQmtXsnZLHmhzQbiPlsvcpOoPlhOeTyVR_QjhOoPymJ_V
                 (uint *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iStack_28;
  
  if (0x32a < param_4) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006d93f,0xc3,
                  s_int_absl__strings_internal__BigU_7006fa22,
                  s_significant_digits_<__Digits10()_70064fa0);
  }
  puVar13 = param_1 + 1;
  if (0 < (int)*param_1) {
    imp___aeabi_memclr4(puVar13,*param_1 << 2);
  }
  pcVar12 = (char *)0x0;
  *param_1 = 0;
  pcVar9 = param_2;
  if (param_2 < param_3) {
    do {
      pcVar9 = param_2;
      if (*param_2 != '0') break;
      param_2 = param_2 + 1;
      pcVar9 = param_3;
    } while (param_2 != param_3);
  }
  pcVar11 = param_3;
  if (pcVar9 < param_3) {
    pcVar12 = param_3 + -(int)pcVar9;
    iVar3 = 0;
    pcVar10 = param_3;
LAB_71a8a538:
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + -1;
    if (*pcVar10 == '0') goto code_r0x71a8a544;
    if (*pcVar10 == '.') {
      pcVar12 = (char *)0x0;
      pcVar11 = pcVar10;
      for (; (pcVar9 < pcVar10 && (pcVar11 = pcVar10, pcVar10[-1] == '0')); pcVar10 = pcVar10 + -1)
      {
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar9;
      }
      goto LAB_71a8a5d4;
    }
    if (iVar3 == 0) {
      pcVar12 = (char *)0x0;
      goto LAB_71a8a5d4;
    }
    pcVar12 = (char *)-iVar3;
    goto LAB_71a8a5a8;
  }
LAB_71a8a5d4:
  iStack_28 = 0;
  if ((pcVar9 != pcVar11) && (0 < param_4)) {
    uVar14 = 0;
    iVar3 = 0;
    uVar4 = 0;
    iStack_28 = 0;
    do {
      pcVar10 = pcVar9;
      cVar1 = *pcVar10;
      if (cVar1 == '.') {
        iStack_28 = 1;
      }
      else {
        param_4 = param_4 + -1;
        bVar5 = cVar1 - 0x30;
        if (((param_4 == 0) && (pcVar10 + 1 != pcVar11)) && (cVar1 == '5' || cVar1 == '0')) {
          bVar5 = cVar1 - 0x2f;
        }
        iVar3 = iVar3 + 1;
        pcVar12 = pcVar12 + -iStack_28;
        uVar4 = uVar4 * 10 + (uint)bVar5;
        if (iVar3 == 9) {
          if (0 < (int)uVar14) {
            uVar6 = 0;
            uVar7 = 0;
            do {
              uVar15 = uVar7 + 1;
              lVar2 = (ulonglong)param_1[uVar7 + 1] * 1000000000 + (ulonglong)uVar6;
              uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
              param_1[uVar7 + 1] = (uint)lVar2;
              uVar7 = uVar15;
            } while (uVar14 != uVar15);
            if (((int)uVar14 < 0x54) && (uVar6 != 0)) {
              puVar13[uVar14] = uVar6;
              uVar14 = *param_1 + 1;
              *param_1 = uVar14;
            }
          }
          if (uVar4 == 0) {
            iVar3 = 0;
            uVar4 = 0;
          }
          else {
            uVar7 = 0;
            do {
              uVar6 = puVar13[uVar7];
              uVar15 = uVar6 + uVar4;
              puVar13[uVar7] = uVar15;
              uVar7 = uVar7 + CARRY4(uVar6,uVar4);
              uVar4 = (uint)CARRY4(uVar6,uVar4);
              if (uVar6 <= uVar15) break;
            } while (uVar7 < 0x54);
            uVar4 = 0;
            if ((int)uVar14 < (int)(uVar7 + 1)) {
              uVar14 = uVar7 + 1;
            }
            if (0x53 < uVar14) {
              uVar14 = 0x54;
            }
            iVar3 = 0;
            *param_1 = uVar14;
          }
        }
      }
    } while ((pcVar10 + 1 != pcVar11) && (pcVar9 = pcVar10 + 1, 0 < param_4));
    pcVar9 = pcVar10 + 1;
    if (iVar3 != 0) {
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (0 < (int)uVar14) {
        uVar6 = 0;
        uVar15 = (&DAT_700949e0)[iVar3];
        uVar7 = 0;
        do {
          uVar8 = uVar7 + 1;
          lVar2 = (ulonglong)uVar15 * (ulonglong)param_1[uVar7 + 1] + (ulonglong)uVar6;
          uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
          param_1[uVar7 + 1] = (uint)lVar2;
          uVar7 = uVar8;
        } while (uVar14 != uVar8);
        if (((int)uVar14 < 0x54) && (uVar6 != 0)) {
          puVar13[uVar14] = uVar6;
          uVar14 = *param_1 + 1;
          *param_1 = uVar14;
        }
      }
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          uVar6 = puVar13[uVar7];
          uVar15 = uVar6 + uVar4;
          puVar13[uVar7] = uVar15;
          uVar7 = uVar7 + CARRY4(uVar6,uVar4);
          uVar4 = (uint)CARRY4(uVar6,uVar4);
          if (uVar6 <= uVar15) break;
        } while (uVar7 < 0x54);
        if ((int)uVar14 < (int)(uVar7 + 1)) {
          uVar14 = uVar7 + 1;
        }
        if (0x53 < uVar14) {
          uVar14 = 0x54;
        }
        *param_1 = uVar14;
      }
    }
  }
  if ((pcVar9 < pcVar11) && (iStack_28 == 0)) {
    pcVar10 = (char *)imp_memchr(pcVar9,0x2e,(int)pcVar11 - (int)pcVar9);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = pcVar11;
    }
    pcVar12 = pcVar10 + ((int)pcVar12 - (int)pcVar9);
  }
  return pcVar12;
code_r0x71a8a544:
  iVar3 = iVar3 + -1;
  pcVar11 = pcVar9;
  if ((int)pcVar9 - (int)param_3 == iVar3) goto LAB_71a8a5a8;
  goto LAB_71a8a538;
LAB_71a8a5a8:
  pcVar10 = (char *)imp_memchr(pcVar9,0x2e,(int)pcVar11 - (int)pcVar9);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = pcVar11;
  }
  if (pcVar10 != pcVar11) {
    pcVar12 = (char *)0x0;
  }
  goto LAB_71a8a5d4;
}


// =========================================================================
// Function: ySsRTNrfjKrWgFPIyciJBtSnk__qgiMqNpODnCbUjRcJotIyHGFTYGpmWhMGbXrniPlNNMm
// Entry: 0x71a8a9d0 | Size: 8 bytes
// =========================================================================

undefined4 ySsRTNrfjKrWgFPIyciJBtSnk__qgiMqNpODnCbUjRcJotIyHGFTYGpmWhMGbXrniPlNNMm(void)

{
  return 0x329;
}


// =========================================================================
// Function: XaeeVehpFiaUwkhoSXeHcRQqKrpjjeHdBmXIpLkBPYxXvaQQTRfmaiVEJrTztBMFzDAiNNgTraadPhBmqFzwt
// Entry: 0x71a8a9f0 | Size: 440 bytes
// =========================================================================

void XaeeVehpFiaUwkhoSXeHcRQqKrpjjeHdBmXIpLkBPYxXvaQQTRfmaiVEJrTztBMFzDAiNNgTraadPhBmqFzwt
               (int *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((int)param_2 < 10) {
    if (((0 < (int)param_2) && (iVar3 = *param_1, iVar3 != 0)) && (0 < iVar3)) {
      uVar2 = 0;
      uVar4 = (&DAT_700949e0)[param_2];
      iVar5 = 0;
      do {
        iVar7 = iVar5 + 1;
        lVar1 = (ulonglong)uVar4 * (ulonglong)(uint)param_1[iVar5 + 1] + (ulonglong)uVar2;
        uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
        param_1[iVar5 + 1] = (int)lVar1;
        iVar5 = iVar7;
      } while (iVar3 != iVar7);
      if ((iVar3 < 0x54) && (uVar2 != 0)) {
        param_1[iVar3 + 1] = uVar2;
        iVar3 = *param_1 + 1;
        goto LAB_71a8aa3c;
      }
    }
  }
  else {
    thunk_wlLKpsaqAeTpBnhFPxtRJYjUhZCUFuxLZWfilTiZjiwpF_OZxnhydxlsGgw_WhkomlBLeANOlLhnOFZJvf_NTl
              (param_1,param_2);
    iVar3 = *param_1;
    if (0xa7f < param_2) {
      if (0 < iVar3) {
        imp___aeabi_memclr4(param_1 + 1,iVar3 << 2);
      }
      iVar3 = 0;
LAB_71a8aa3c:
      *param_1 = iVar3;
      return;
    }
    uVar4 = param_2 >> 5;
    iVar3 = iVar3 + uVar4;
    iVar5 = iVar3;
    if (0x53 < iVar3) {
      iVar5 = 0x54;
    }
    uVar2 = param_2 & 0x1f;
    *param_1 = iVar5;
    if (uVar2 == 0) {
      iVar3 = iVar5 * 4 + 4;
      iVar5 = iVar3 + uVar4 * -4 + -4;
      if (iVar5 != 0) {
        imp___aeabi_memmove4((int)param_1 + (iVar3 - iVar5),param_1 + 1);
      }
    }
    else {
      if (0x52 < iVar3) {
        iVar3 = 0x53;
      }
      if ((int)uVar4 < iVar3) {
        iVar5 = iVar3 * 4 + uVar4 * -4;
        do {
          piVar6 = (int *)((int)param_1 + iVar5 + 4);
          iVar5 = iVar5 + -4;
          param_1[iVar3 + 1] = *piVar6 << uVar2 | ((uint)piVar6[-1] >> 1) >> (uVar2 ^ 0x1f);
          iVar3 = iVar3 + -1;
        } while ((int)uVar4 < iVar3);
        iVar5 = *param_1;
      }
      piVar6 = param_1 + 1;
      piVar6[uVar4] = *piVar6 << uVar2;
      if ((iVar5 < 0x54) && (piVar6[iVar5] != 0)) {
        *param_1 = iVar5 + 1;
      }
    }
    if (0x1f < param_2) {
      imp___aeabi_memclr4(param_1 + 1,uVar4 << 2);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: WkrxEayWEsRekVCDMyqudwjkZhtQBClJkmahnqlzyzUWmSocPctRqMgLEBkqBrtJrpbrgKdxfLQtLJnOhztDJDqme_xBUSDrxJGEs
// Entry: 0x71a8ac50 | Size: 172 bytes
// =========================================================================

int WkrxEayWEsRekVCDMyqudwjkZhtQBClJkmahnqlzyzUWmSocPctRqMgLEBkqBrtJrpbrgKdxfLQtLJnOhztDJDqme_xBUSDrxJGEs
              (int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *param_1) {
    imp___aeabi_memclr4(param_1 + 1,*param_1 << 2);
  }
  iVar1 = param_2[4];
  *param_1 = 0;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006d93f,0xae,
                  s_int_absl__strings_internal__BigU_7006b282,
                  s_fp_type____FloatType__kNumber_700725b1);
  }
  if (param_2[5] == 0) {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar1 = 2;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    if (iVar3 == 0) {
      iVar1 = 1;
    }
    if (iVar3 != 0 || iVar2 != 0) {
      *param_1 = iVar1;
    }
    return param_2[2];
  }
  iVar1 = thunk_piXT_jpmlmNKSFYvHFXRKIEx_IwYDbqKmqwDQmtXsnZLHmhzQbiPlsvcpOoPlhOeTyVR_QjhOoPymJ_V
                    (param_1,param_2[5],param_2[6],param_3);
  return param_2[3] + iVar1;
}


// =========================================================================
// Function: EMxtNyLVTXNzpFwoyDhzEDjvZEPXKtLJAYVnUb_tONFDjrtncDl_CKW_GRYIFubWqkTerJQK
// Entry: 0x71a8adc8 | Size: 48 bytes
// =========================================================================

void EMxtNyLVTXNzpFwoyDhzEDjvZEPXKtLJAYVnUb_tONFDjrtncDl_CKW_GRYIFubWqkTerJQK(int *param_1)

{
  if (0 < *param_1) {
    imp___aeabi_memclr4(param_1 + 1,*param_1 << 2);
  }
  *param_1 = 0;
  return;
}


// =========================================================================
// Function: fsaZoQg_hyvbRZaWyZGyVyPuKwdsWnXZnVNVIVGCoqbzWpKbPkeUBxlIWmFaUoDFLxtBKeDu
// Entry: 0x71a8ae2c | Size: 312 bytes
// =========================================================================

void fsaZoQg_hyvbRZaWyZGyVyPuKwdsWnXZnVNVIVGCoqbzWpKbPkeUBxlIWmFaUoDFLxtBKeDu
               (int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (0 < (int)param_2) {
    iVar2 = *param_1;
    if (0xa7f < param_2) {
      if (0 < iVar2) {
        imp___aeabi_memclr4(param_1 + 1,iVar2 << 2);
      }
      *param_1 = 0;
      return;
    }
    uVar1 = param_2 >> 5;
    iVar2 = iVar2 + uVar1;
    iVar4 = iVar2;
    if (0x53 < iVar2) {
      iVar4 = 0x54;
    }
    uVar5 = param_2 & 0x1f;
    *param_1 = iVar4;
    if (uVar5 == 0) {
      iVar4 = iVar4 * 4 + 4;
      iVar2 = iVar4 + uVar1 * -4 + -4;
      if (iVar2 != 0) {
        imp___aeabi_memmove4((int)param_1 + (iVar4 - iVar2),param_1 + 1);
      }
    }
    else {
      if (0x52 < iVar2) {
        iVar2 = 0x53;
      }
      if ((int)uVar1 < iVar2) {
        iVar4 = iVar2 * 4 + uVar1 * -4;
        do {
          piVar3 = (int *)((int)param_1 + iVar4 + 4);
          iVar4 = iVar4 + -4;
          param_1[iVar2 + 1] = *piVar3 << uVar5 | ((uint)piVar3[-1] >> 1) >> (uVar5 ^ 0x1f);
          iVar2 = iVar2 + -1;
        } while ((int)uVar1 < iVar2);
        iVar4 = *param_1;
      }
      piVar3 = param_1 + 1;
      piVar3[uVar1] = *piVar3 << uVar5;
      if ((iVar4 < 0x54) && (piVar3[iVar4] != 0)) {
        *param_1 = iVar4 + 1;
      }
    }
    if (0x1f < param_2) {
      imp___aeabi_memclr4(param_1 + 1,uVar1 << 2);
    }
  }
  return;
}


// =========================================================================
// Function: vzRoFSZhbzuJdOyDKMknKcKLWzIxgIuTjeQojkZGkbzfHhDyMlUnjmDkEEAHYswPBNVGAfcZyu
// Entry: 0x71a8afd0 | Size: 176 bytes
// =========================================================================

void vzRoFSZhbzuJdOyDKMknKcKLWzIxgIuTjeQojkZGkbzfHhDyMlUnjmDkEEAHYswPBNVGAfcZyu
               (int *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_r12;
  
  if (param_2 != 1) {
    in_r12 = *param_1;
  }
  if (param_2 != 1 && in_r12 != 0) {
    if (param_2 == 0) {
      iVar4 = 0;
      if (0 < in_r12) {
        imp___aeabi_memclr4(param_1 + 1,in_r12 << 2);
        *param_1 = 0;
        return;
      }
LAB_71a8b04c:
      *param_1 = iVar4;
      return;
    }
    if (0 < in_r12) {
      uVar3 = 0;
      iVar4 = 0;
      do {
        iVar2 = iVar4 + 1;
        lVar1 = (ulonglong)param_2 * (ulonglong)(uint)param_1[iVar4 + 1] + (ulonglong)uVar3;
        uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
        param_1[iVar4 + 1] = (int)lVar1;
        iVar4 = iVar2;
      } while (in_r12 != iVar2);
      if ((in_r12 < 0x54) && (uVar3 != 0)) {
        param_1[in_r12 + 1] = uVar3;
        iVar4 = *param_1 + 1;
        goto LAB_71a8b04c;
      }
    }
  }
  return;
}


// =========================================================================
// Function: eCwRpWZTHijkSBdDmuWPimDxkIgJBQtFHcilFpjWRdwreCnpYtGqbxlciopHzOugruIwemkbtr
// Entry: 0x71a8b0b4 | Size: 264 bytes
// =========================================================================

void eCwRpWZTHijkSBdDmuWPimDxkIgJBQtFHcilFpjWRdwreCnpYtGqbxlciopHzOugruIwemkbtr
               (uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_20;
  int iStack_1c;
  
  uVar4 = *param_1;
  uStack_20 = param_3;
  iStack_1c = param_4;
  if (param_4 == 0) {
    if (param_3 != 1 && uVar4 != 0) {
      if (param_3 == 0) {
        uVar5 = 0;
        if (0 < (int)uVar4) {
          imp___aeabi_memclr4(param_1 + 1,uVar4 << 2);
          *param_1 = 0;
          return;
        }
LAB_71a8b18c:
        *param_1 = uVar5;
        return;
      }
      if (0 < (int)uVar4) {
        uVar2 = 0;
        uVar5 = 0;
        do {
          uVar3 = uVar5 + 1;
          lVar1 = (ulonglong)param_1[uVar5 + 1] * (ulonglong)param_3 + (ulonglong)uVar2;
          uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
          param_1[uVar5 + 1] = (uint)lVar1;
          uVar5 = uVar3;
        } while (uVar4 != uVar3);
        if (((int)uVar4 < 0x54) && (uVar2 != 0)) {
          param_1[uVar4 + 1] = uVar2;
          uVar5 = *param_1 + 1;
          goto LAB_71a8b18c;
        }
      }
    }
  }
  else if (-1 < (int)uVar4) {
    uVar5 = uVar4;
    if (0x52 < uVar4) {
      uVar5 = 0x53;
    }
    do {
      thunk_iQPcgEfYHkZQqAOcEbIEgKAxuQBhHbWZyvNERphzsEoaYPGSTJUdZJgXZAtyrvuktDVBmmw_SaTiksAFY
                (param_1,uVar4,&uStack_20,2,uVar5);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0xffffffff);
  }
  return;
}


// =========================================================================
// Function: xwADsPLTngCKOdidIPR_uqrSDqVhoQUsWbomphzaCdgR_kWOnIMhUwLQmupdNPYlMcskWd_HEyLkp
// Entry: 0x71a8b20c | Size: 96 bytes
// =========================================================================

void xwADsPLTngCKOdidIPR_uqrSDqVhoQUsWbomphzaCdgR_kWOnIMhUwLQmupdNPYlMcskWd_HEyLkp
               (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = iVar3 + param_2;
  if (1 < (int)uVar1) {
    if (0x54 < uVar1) {
      uVar1 = 0x55;
    }
    iVar2 = uVar1 - 2;
    do {
      thunk_iQPcgEfYHkZQqAOcEbIEgKAxuQBhHbWZyvNERphzsEoaYPGSTJUdZJgXZAtyrvuktDVBmmw_SaTiksAFY
                (param_1,iVar3,param_3,param_2,iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


// =========================================================================
// Function: wlLKpsaqAeTpBnhFPxtRJYjUhZCUFuxLZWfilTiZjiwpF_OZxnhydxlsGgw_WhkomlBLeANOlLhnOFZJvf_NTl
// Entry: 0x71a8b2a0 | Size: 320 bytes
// =========================================================================

void wlLKpsaqAeTpBnhFPxtRJYjUhZCUFuxLZWfilTiZjiwpF_OZxnhydxlsGgw_WhkomlBLeANOlLhnOFZJvf_NTl
               (int *param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (0xc < (int)param_2) {
    iVar3 = *param_1;
    uVar6 = param_2;
    if (iVar3 < 1) {
      iVar3 = param_2 - 0x19;
      if (param_2 < 0x19) {
        iVar3 = 0;
      }
      param_2 = (param_2 + ((iVar3 + 0xcU) / 0xd) * -0xd) - 0xd;
    }
    else {
      do {
        if (0 < iVar3) {
          uVar7 = 0;
          iVar5 = 0;
          do {
            iVar4 = iVar5 + 1;
            lVar2 = (ulonglong)(uint)param_1[iVar5 + 1] * 0x48c27395 + (ulonglong)uVar7;
            uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
            param_1[iVar5 + 1] = (int)lVar2;
            iVar5 = iVar4;
          } while (iVar3 != iVar4);
          if ((iVar3 < 0x54) && (uVar7 != 0)) {
            param_1[iVar3 + 1] = uVar7;
            iVar3 = *param_1 + 1;
            *param_1 = iVar3;
          }
        }
        param_2 = uVar6 - 0xd;
        bVar1 = 0x19 < (int)uVar6;
        uVar6 = param_2;
      } while (bVar1);
    }
  }
  if (((0 < (int)param_2) && (iVar3 = *param_1, iVar3 != 0)) && (0 < iVar3)) {
    uVar6 = 0;
    uVar7 = *(uint *)(&DAT_700949a8 + param_2 * 4);
    iVar5 = 0;
    do {
      iVar4 = iVar5 + 1;
      lVar2 = (ulonglong)uVar7 * (ulonglong)(uint)param_1[iVar5 + 1] + (ulonglong)uVar6;
      uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
      param_1[iVar5 + 1] = (int)lVar2;
      iVar5 = iVar4;
    } while (iVar3 != iVar4);
    if ((iVar3 < 0x54) && (uVar6 != 0)) {
      param_1[iVar3 + 1] = uVar6;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}


// =========================================================================
// Function: _XYYMaCOKhQwJcrOmRcGvNLOiJbgiAXpxymr_EXlEtwjnZUCgDwMSiqZy_elLkcmDYQtSLmeJFpn
// Entry: 0x71a8b418 | Size: 664 bytes
// =========================================================================

void _XYYMaCOKhQwJcrOmRcGvNLOiJbgiAXpxymr_EXlEtwjnZUCgDwMSiqZy_elLkcmDYQtSLmeJFpn
               (int *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  
  bVar15 = true;
  thunk_EkqWQEhlmGmfFWpgDAcnNBDhXONgVczIvinKCNm_cpzuh_nSIwYIQbKhxPwcJHMu(param_1,param_2,1,0);
  if (0x1a < (int)param_2) {
    piVar13 = param_1 + 1;
    do {
      uVar10 = 0x14;
      if (param_2 / 0x1b < 0x14) {
        uVar10 = param_2 / 0x1b;
      }
      if (bVar15) {
        imp___aeabi_memcpy4(piVar13,&DAT_70094a08 + (uVar10 - 1) * uVar10 * 4,uVar10 << 3);
        *param_1 = uVar10 << 1;
      }
      else {
        uVar2 = *param_1 + uVar10 * 2;
        if (1 < (int)uVar2) {
          if (0x54 < uVar2) {
            uVar2 = 0x55;
          }
          iVar14 = *param_1 + -1;
          iVar7 = uVar10 * (uVar10 - 1) * 4 + uVar2 * 4 + 0x70094a00;
          iVar3 = uVar2 - 2;
          do {
            uVar2 = uVar2 - 1;
            iVar9 = iVar14;
            if (iVar3 < iVar14) {
              iVar9 = iVar3;
            }
            if ((iVar9 < 0) || ((int)(uVar10 * 2) <= iVar3 - iVar9)) {
              piVar13[iVar3] = 0;
            }
            else {
              iVar9 = -iVar9;
              uVar8 = 0;
              uVar12 = 0;
              uVar11 = 0;
              do {
                lVar1 = (ulonglong)(uint)piVar13[-iVar9] * (ulonglong)*(uint *)(iVar7 + iVar9 * 4) +
                        (ulonglong)uVar11;
                uVar11 = (uint)lVar1;
                uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
                bVar15 = CARRY4(uVar4,uVar8);
                uVar8 = uVar4 + uVar8;
                uVar12 = uVar12 + bVar15;
                if (iVar9 == 0) break;
                iVar5 = uVar2 + iVar9;
                iVar9 = iVar9 + 1;
              } while (iVar5 < (int)(uVar10 * 2));
              iVar9 = iVar3 + 1;
              if ((iVar3 < 0x53) && (uVar8 != 0 || uVar12 != 0)) {
                uVar4 = piVar13[iVar9];
                piVar13[iVar9] = uVar4 + uVar8;
                if (CARRY4(uVar4,uVar8)) {
                  bVar15 = uVar12 == 0xffffffff;
                  uVar12 = uVar12 + 1;
                  if (bVar15) {
                    iVar5 = iVar3 + 3;
                    if (iVar3 < 0x51) {
                      uVar12 = 1;
                      do {
                        uVar8 = piVar13[iVar5];
                        uVar4 = uVar8 + uVar12;
                        piVar13[iVar5] = uVar4;
                        iVar5 = iVar5 + (uint)CARRY4(uVar8,uVar12);
                        uVar12 = (uint)CARRY4(uVar8,uVar12);
                        if (uVar8 <= uVar4) break;
                      } while (iVar5 < 0x54);
                    }
                  }
                  else {
LAB_71a8b610:
                    iVar5 = 0x55;
                    if (0x51 < iVar3) goto LAB_71a8b668;
                    iVar5 = iVar3 + 2;
                    do {
                      uVar8 = piVar13[iVar5];
                      uVar4 = uVar8 + uVar12;
                      piVar13[iVar5] = uVar4;
                      iVar5 = iVar5 + (uint)CARRY4(uVar8,uVar12);
                      uVar12 = (uint)CARRY4(uVar8,uVar12);
                      if (uVar8 <= uVar4) break;
                    } while (iVar5 < 0x54);
                  }
                  iVar5 = iVar5 + 1;
                }
                else {
                  if (uVar12 != 0) goto LAB_71a8b610;
                  iVar5 = iVar3 + 2;
                }
LAB_71a8b668:
                iVar6 = *param_1;
                if (*param_1 < iVar5) {
                  iVar6 = iVar5;
                }
                if (0x53 < iVar6) {
                  iVar6 = 0x54;
                }
                *param_1 = iVar6;
              }
              piVar13[iVar3] = uVar11;
              if ((uVar11 != 0) && (*param_1 <= iVar3)) {
                *param_1 = iVar9;
              }
            }
            iVar7 = iVar7 + -4;
            bVar15 = iVar3 != 0;
            iVar3 = iVar3 + -1;
          } while (bVar15);
        }
      }
      bVar15 = false;
      param_2 = uVar10 * -0x1b + param_2;
    } while (0x1a < (int)param_2);
  }
  thunk_wlLKpsaqAeTpBnhFPxtRJYjUhZCUFuxLZWfilTiZjiwpF_OZxnhydxlsGgw_WhkomlBLeANOlLhnOFZJvf_NTl
            (param_1,param_2);
  return;
}


// =========================================================================
// Function: ReMfblRLsjiRNgxAGaisCpSKODyfWuNSmoLgCkDXFXNaqfodqNVzCxYiTjfUSqcqmEjNFor
// Entry: 0x71a8b75c | Size: 36 bytes
// =========================================================================

int ReMfblRLsjiRNgxAGaisCpSKODyfWuNSmoLgCkDXFXNaqfodqNVzCxYiTjfUSqcqmEjNFor
              (int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2) {
    if (param_2 < *param_1) {
      iVar1 = param_1[param_2 + 1];
    }
    return iVar1;
  }
  return 0;
}


// =========================================================================
// Function: YtAfBXvvYnDStQGf_WLBanqxtorV_yxMhJakkIQUYmlpxeTlQP_amdFAVDUrEelvLNFcTVms
// Entry: 0x71a8b798 | Size: 348 bytes
// =========================================================================

void YtAfBXvvYnDStQGf_WLBanqxtorV_yxMhJakkIQUYmlpxeTlQP_amdFAVDUrEelvLNFcTVms
               (byte *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  uint auStack_178 [86];
  
  imp___aeabi_memcpy4(auStack_178,param_2,0x154);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar11 = auStack_178[0];
  do {
    if ((int)uVar11 < 1) {
      pbVar4 = *(byte **)(param_1 + 4);
      bVar1 = *param_1;
      pbVar10 = pbVar4;
      if ((bVar1 & 1) == 0) {
        pbVar10 = (byte *)(uint)(bVar1 >> 1);
      }
      if (pbVar10 == (byte *)0x0) {
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
                  (param_1,0x30);
        bVar1 = *param_1;
        pbVar4 = *(byte **)(param_1 + 4);
      }
      pbVar10 = *(byte **)(param_1 + 8);
      pbVar5 = pbVar4;
      if ((bVar1 & 1) == 0) {
        pbVar10 = param_1 + 1;
        pbVar5 = (byte *)(uint)(bVar1 >> 1);
      }
      if (pbVar5 != (byte *)0x0) {
        pbVar4 = pbVar10 + (int)pbVar5 + -1;
      }
      if (pbVar5 != (byte *)0x0 && pbVar10 < pbVar4) {
        do {
          pbVar7 = pbVar10 + 1;
          bVar1 = *pbVar10;
          *pbVar10 = *pbVar4;
          pbVar5 = pbVar4 + -1;
          *pbVar4 = bVar1;
          pbVar4 = pbVar5;
          pbVar10 = pbVar7;
        } while (pbVar7 < pbVar5);
      }
      return;
    }
    uVar3 = 0;
    do {
      uVar6 = auStack_178[uVar11];
      uVar8 = uVar6 >> 1 | uVar3 << 0x1f;
      uVar3 = uVar8 + (uVar3 >> 1) + (uint)CARRY4(uVar8,uVar3 >> 1);
      uVar3 = (uVar8 - (uVar3 - (((uint)((ulonglong)uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                                uVar3 / 5))) * -0x33333333;
      auStack_178[uVar11] = uVar3;
      lVar2 = (ulonglong)uVar3 * 10;
      iVar9 = (int)lVar2;
      uVar3 = uVar6 - iVar9;
      bVar12 = uVar11 != 0;
      uVar11 = uVar11 - 1;
    } while (bVar12 && uVar11 != 0);
    uVar11 = auStack_178[0];
    if (0 < (int)auStack_178[0]) {
      do {
        uVar11 = auStack_178[0];
        if (auStack_178[auStack_178[0]] != 0) goto LAB_71a8b7e0;
        auStack_178[0] = auStack_178[0] - 1;
      } while (1 < uVar11);
      uVar11 = 0;
    }
LAB_71a8b7e0:
    thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU
              (param_1,uVar3 & 0xff | 0x30,iVar9,(int)((ulonglong)lVar2 >> 0x20));
  } while( true );
}


// =========================================================================
// Function: LQrCgNfDiCTFuLQQXNuhUXIzkNBstFrkbdZxFOnLIgjZDJvhYwXswGXmJQKVuMWkFjXf
// Entry: 0x71a8b9b4 | Size: 8 bytes
// =========================================================================

undefined4 LQrCgNfDiCTFuLQQXNuhUXIzkNBstFrkbdZxFOnLIgjZDJvhYwXswGXmJQKVuMWkFjXf(undefined4 *param_1)

{
  return *param_1;
}


// =========================================================================
// Function: ZprdnsvYhfZCFtGiQkpdsbsFsIZqwXhBDbJZzEL_zAqFat_jkosOrhTQqiXesHkQsmKPN
// Entry: 0x71a8b9d4 | Size: 8 bytes
// =========================================================================

int ZprdnsvYhfZCFtGiQkpdsbsFsIZqwXhBDbJZzEL_zAqFat_jkosOrhTQqiXesHkQsmKPN(int param_1)

{
  return param_1 + 4;
}


// =========================================================================
// Function: zvNmNWEzCmJN_lssreyqYnyKrLRIbhcLyWKCgEUTKHAiFXzKZB_kMjbnojHakJwjoRbQHaRvi_UbH
// Entry: 0x71a8b9f4 | Size: 104 bytes
// =========================================================================

void zvNmNWEzCmJN_lssreyqYnyKrLRIbhcLyWKCgEUTKHAiFXzKZB_kMjbnojHakJwjoRbQHaRvi_UbH
               (int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 < 0x54) {
    do {
      uVar2 = param_1[param_2 + 1];
      bVar3 = CARRY4(uVar2,param_3);
      param_1[param_2 + 1] = uVar2 + param_3;
      param_3 = (uint)bVar3;
      param_2 = param_2 + (uint)bVar3;
      if (0x53 < param_2) break;
    } while (param_3 != 0);
  }
  iVar1 = *param_1;
  if (*param_1 < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  if (0x53 < iVar1) {
    iVar1 = 0x54;
  }
  *param_1 = iVar1;
  return;
}


// =========================================================================
// Function: iQPcgEfYHkZQqAOcEbIEgKAxuQBhHbWZyvNERphzsEoaYPGSTJUdZJgXZAtyrvuktDVBmmw_SaTiksAFY
// Entry: 0x71a8ba74 | Size: 392 bytes
// =========================================================================

void iQPcgEfYHkZQqAOcEbIEgKAxuQBhHbWZyvNERphzsEoaYPGSTJUdZJgXZAtyrvuktDVBmmw_SaTiksAFY
               (int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = param_2 + -1;
  if (param_5 <= param_2 + -1) {
    iVar6 = param_5;
  }
  if ((iVar6 < 0) || (param_4 <= param_5 - iVar6)) {
    param_1[param_5 + 1] = 0;
    return;
  }
  iVar6 = -iVar6;
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0;
  do {
    lVar1 = (ulonglong)(uint)param_1[1 - iVar6] *
            (ulonglong)*(uint *)(param_3 + param_5 * 4 + iVar6 * 4) + (ulonglong)uVar7;
    uVar7 = (uint)lVar1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar8 = CARRY4(uVar2,uVar5);
    uVar5 = uVar2 + uVar5;
    uVar4 = uVar4 + bVar8;
    if (iVar6 == 0) break;
    iVar3 = param_5 + 1 + iVar6;
    iVar6 = iVar6 + 1;
  } while (iVar3 < param_4);
  if ((0x52 < param_5) || (uVar5 == 0 && uVar4 == 0)) goto LAB_71a8bbdc;
  uVar2 = param_1[param_5 + 2];
  param_1[param_5 + 2] = uVar2 + uVar5;
  if (CARRY4(uVar2,uVar5)) {
    bVar8 = uVar4 == 0xffffffff;
    uVar4 = uVar4 + 1;
    if (bVar8) {
      iVar6 = param_5 + 3;
      if (param_5 < 0x51) {
        uVar4 = 1;
        do {
          uVar5 = param_1[iVar6 + 1];
          uVar2 = uVar5 + uVar4;
          param_1[iVar6 + 1] = uVar2;
          iVar6 = iVar6 + (uint)CARRY4(uVar5,uVar4);
          uVar4 = (uint)CARRY4(uVar5,uVar4);
          if (uVar5 <= uVar2) break;
        } while (iVar6 < 0x54);
        iVar6 = iVar6 + 1;
      }
      else {
        iVar6 = param_5 + 4;
      }
    }
    else {
LAB_71a8bb70:
      iVar6 = 0x55;
      if (param_5 < 0x52) {
        iVar6 = param_5 + 2;
        do {
          uVar5 = param_1[iVar6 + 1];
          uVar2 = uVar5 + uVar4;
          param_1[iVar6 + 1] = uVar2;
          iVar6 = iVar6 + (uint)CARRY4(uVar5,uVar4);
          uVar4 = (uint)CARRY4(uVar5,uVar4);
          if (uVar5 <= uVar2) break;
        } while (iVar6 < 0x54);
        iVar6 = iVar6 + 1;
      }
    }
  }
  else {
    if (uVar4 != 0) goto LAB_71a8bb70;
    iVar6 = param_5 + 2;
  }
  iVar3 = *param_1;
  if (*param_1 < iVar6) {
    iVar3 = iVar6;
  }
  if (0x53 < iVar3) {
    iVar3 = 0x54;
  }
  *param_1 = iVar3;
LAB_71a8bbdc:
  param_1[param_5 + 1] = uVar7;
  if ((uVar7 != 0) && (*param_1 <= param_5)) {
    *param_1 = param_5 + 1;
  }
  return;
}


// =========================================================================
// Function: aIdVDKTIgfNpogIXmekQflZdWwszJsuIcedqmADVlDFrUbIqZHcJuQJQiDMOUpBbsEgdEnYjgBGkQ
// Entry: 0x71a8bc14 | Size: 236 bytes
// =========================================================================

void aIdVDKTIgfNpogIXmekQflZdWwszJsuIcedqmADVlDFrUbIqZHcJuQJQiDMOUpBbsEgdEnYjgBGkQ
               (int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (0x53 < param_2) {
    return;
  }
  if (param_3 == 0 && param_4 == 0) {
    return;
  }
  uVar5 = param_1[param_2 + 1];
  param_1[param_2 + 1] = uVar5 + param_3;
  if (CARRY4(uVar5,param_3)) {
    bVar6 = param_4 == 0xffffffff;
    param_4 = param_4 + 1;
    if (bVar6) {
      iVar2 = param_2 + 2;
      if (param_2 < 0x52) {
        uVar5 = 1;
        do {
          uVar3 = param_1[iVar2 + 1];
          uVar4 = uVar3 + uVar5;
          param_1[iVar2 + 1] = uVar4;
          iVar2 = iVar2 + (uint)CARRY4(uVar3,uVar5);
          uVar5 = (uint)CARRY4(uVar3,uVar5);
          if (uVar3 <= uVar4) break;
        } while (iVar2 < 0x54);
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = param_2 + 3;
      }
      goto LAB_71a8bce0;
    }
LAB_71a8bc94:
    iVar2 = 0x55;
    if (0x52 < param_2) goto LAB_71a8bce0;
    param_2 = param_2 + 1;
    do {
      uVar5 = param_1[param_2 + 1];
      uVar3 = uVar5 + param_4;
      param_1[param_2 + 1] = uVar3;
      param_2 = param_2 + (uint)CARRY4(uVar5,param_4);
      param_4 = (uint)CARRY4(uVar5,param_4);
      if (uVar5 <= uVar3) break;
    } while (param_2 < 0x54);
  }
  else if (param_4 != 0) goto LAB_71a8bc94;
  iVar2 = param_2 + 1;
LAB_71a8bce0:
  iVar1 = *param_1;
  if (*param_1 < iVar2) {
    iVar1 = iVar2;
  }
  if (0x53 < iVar1) {
    iVar1 = 0x54;
  }
  *param_1 = iVar1;
  return;
}


// =========================================================================
// Function: HtacCmFjaKbpHMICIRESlRAZIfDqzFKtaCnXOKyxmsgpFvZ_XLRJ_zEJ_GupCtZVhhXLLOPjDksNzUGzOVGGpXFlTXrAYEuiNCaIKiANwlmc
// Entry: 0x71a8bd18 | Size: 92 bytes
// =========================================================================

void HtacCmFjaKbpHMICIRESlRAZIfDqzFKtaCnXOKyxmsgpFvZ_XLRJ_zEJ_GupCtZVhhXLLOPjDksNzUGzOVGGpXFlTXrAYEuiNCaIKiANwlmc
               (byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  pbVar2 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (0xf < uVar1) {
    thunk_iLHKHoxYn_yWcHPWGjurrcSkDllLvrJwtrIiyiHanqMs_QVpWShUFzenblKbwQoUXEnhEGs(pbVar2,uVar1);
    return;
  }
  if (uVar1 != 0) {
    do {
      uVar1 = uVar1 - 1;
      *pbVar2 = *pbVar2 ^ ((char)(*pbVar2 + 0x3f) < -0x66) << 5;
      pbVar2 = pbVar2 + 1;
    } while (uVar1 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: HJYIwioZzQnHnGrxaDGTbPvuLTUIyvvrEOBrWkgBxCLkXRkZElJEYKDLtJ_vwmWKvMbBDoxRVROaqOJOxHaxsnncPxNmWDhdpx_FiIRBEJgb
// Entry: 0x71a8bd74 | Size: 92 bytes
// =========================================================================

void HJYIwioZzQnHnGrxaDGTbPvuLTUIyvvrEOBrWkgBxCLkXRkZElJEYKDLtJ_vwmWKvMbBDoxRVROaqOJOxHaxsnncPxNmWDhdpx_FiIRBEJgb
               (byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  pbVar2 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (uint)(*param_1 >> 1);
  }
  if (0xf < uVar1) {
    thunk_lW_vycnglftWA_NQYYEzFLURPhhVtQwNUYCxWoMZDgIGVqMHvhtztuwrTeNhJSxFwQohQma(pbVar2,uVar1);
    return;
  }
  if (uVar1 != 0) {
    do {
      uVar1 = uVar1 - 1;
      *pbVar2 = *pbVar2 ^ ((char)(*pbVar2 + 0x1f) < -0x66) << 5;
      pbVar2 = pbVar2 + 1;
    } while (uVar1 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: YwAjoHgUzHFCrVImgCORNQRLpmJaF_lerLOGRLlXdYKzipfh_VyKBUaRozPFqOPpLDdbKMunNnLzDpfBgBIHvWydUhZnKBkLRxDlxNVkhyUpDSqkVfBlBDZ
// Entry: 0x71a8bdd0 | Size: 332 bytes
// =========================================================================

void YwAjoHgUzHFCrVImgCORNQRLpmJaF_lerLOGRLlXdYKzipfh_VyKBUaRozPFqOPpLDdbKMunNnLzDpfBgBIHvWydUhZnKBkLRxDlxNVkhyUpDSqkVfBlBDZ
               (byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_1 + 8);
  bVar1 = *param_1;
  uVar5 = *(uint *)(param_1 + 4);
  pbVar4 = pbVar9;
  if ((bVar1 & 1) == 0) {
    uVar5 = (uint)(bVar1 >> 1);
    pbVar4 = param_1 + 1;
  }
  pbVar3 = pbVar4;
  if (uVar5 != 0) {
    pbVar2 = pbVar4;
    uVar6 = uVar5;
    do {
      pbVar3 = pbVar2;
      if (((&DAT_70095098)[*pbVar2] & 8) == 0) break;
      uVar6 = uVar6 - 1;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar4 + uVar5;
    } while (uVar6 != 0);
  }
  uVar6 = (int)pbVar3 - (int)pbVar4;
  if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_71a66fdc(s_string_view__substr_70068a67);
  }
  pbVar3 = pbVar4 + uVar6;
  uVar8 = uVar5;
  do {
    uVar7 = uVar8;
    pbVar2 = pbVar3;
    if (uVar6 == uVar7) goto LAB_71a8be84;
    uVar8 = uVar7 - 1;
  } while (((&DAT_70095098)[pbVar4[uVar7 - 1]] & 8) != 0);
  pbVar2 = pbVar4 + uVar7;
LAB_71a8be84:
  uVar8 = (int)pbVar2 - (int)pbVar3;
  if (uVar5 - uVar6 < (uint)((int)pbVar2 - (int)pbVar3)) {
    uVar8 = uVar5 - uVar6;
  }
  if (uVar8 != 0) {
    if (0 < (int)uVar8) {
      pbVar9 = pbVar3;
      uVar5 = 0;
      do {
        pbVar2 = pbVar9 + 1;
        bVar1 = (&DAT_70095098)[*pbVar9];
        pbVar4[-(uVar5 & (bVar1 & 8) >> 3)] = *pbVar9;
        pbVar4 = pbVar4 + -(uVar5 & (bVar1 & 8) >> 3) + 1;
        pbVar9 = pbVar2;
        uVar5 = (bVar1 & 0xf) >> 3;
      } while (pbVar2 < pbVar3 + uVar8);
      bVar1 = *param_1;
      pbVar9 = *(byte **)(param_1 + 8);
    }
    if ((bVar1 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    thunk_YNczSMHgYOdkxFzjwgKTXIYRUUpvMkDDRVSlSNiMseRMlCGBQDpczigERmNVdkeFrwxqEEKdkkc
              (param_1,(int)pbVar4 - (int)pbVar9,0xffffffff);
    return;
  }
  if ((bVar1 & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    *pbVar9 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}


// =========================================================================
// Function: iLHKHoxYn_yWcHPWGjurrcSkDllLvrJwtrIiyiHanqMs_QVpWShUFzenblKbwQoUXEnhEGs
// Entry: 0x71a8c004 | Size: 164 bytes
// =========================================================================

void iLHKHoxYn_yWcHPWGjurrcSkDllLvrJwtrIiyiHanqMs_QVpWShUFzenblKbwQoUXEnhEGs
               (undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte *pbVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 < 0x10) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_70063793,0xcd,
                  s_void_absl__ascii_internal__Ascii_700713f0,s_size_>__kCaseFoldThreshold_7006dfd6)
    ;
  }
  uVar8 = param_2 & 0xfffffff0;
  auVar1._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar1._0_8_ = 0x3f3f3f3f3f3f3f3f;
  auVar2._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar2._0_8_ = 0x9a9a9a9a9a9a9a9a;
  auVar3._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar3._0_8_ = 0x2020202020202020;
  pauVar6 = param_1;
  uVar7 = uVar8;
  do {
    uVar7 = uVar7 - 0x10;
    auVar9 = VectorAdd(*pauVar6,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),1);
    auVar9 = VectorCompareGreaterThan(*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),auVar9,1);
    auVar9 = auVar9 & *(undefined1 (*) [16])(auVar3 << 0x40 | auVar3) ^ *pauVar6;
    *(longlong *)*pauVar6 = auVar9._0_8_;
    *(longlong *)(*pauVar6 + 8) = auVar9._8_8_;
    pauVar6 = pauVar6 + 1;
  } while (uVar7 != 0);
  if (param_2 == uVar8) {
    return;
  }
  iVar5 = param_2 - uVar8;
  pbVar4 = *param_1 + uVar8;
  do {
    iVar5 = iVar5 + -1;
    *pbVar4 = *pbVar4 ^ ((char)(*pbVar4 + 0x3f) < -0x66) << 5;
    pbVar4 = pbVar4 + 1;
  } while (iVar5 != 0);
  return;
}


// =========================================================================
// Function: lW_vycnglftWA_NQYYEzFLURPhhVtQwNUYCxWoMZDgIGVqMHvhtztuwrTeNhJSxFwQohQma
// Entry: 0x71a8c13c | Size: 164 bytes
// =========================================================================

void lW_vycnglftWA_NQYYEzFLURPhhVtQwNUYCxWoMZDgIGVqMHvhtztuwrTeNhJSxFwQohQma
               (undefined1 (*param_1) [16],uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte *pbVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  if (param_2 < 0x10) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_70063793,0xcd,
                  s_void_absl__ascii_internal__Ascii_7006dff1,s_size_>__kCaseFoldThreshold_7006dfd6)
    ;
  }
  uVar8 = param_2 & 0xfffffff0;
  auVar1._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar1._0_8_ = 0x1f1f1f1f1f1f1f1f;
  auVar2._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar2._0_8_ = 0x9a9a9a9a9a9a9a9a;
  auVar3._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar3._0_8_ = 0x2020202020202020;
  pauVar6 = param_1;
  uVar7 = uVar8;
  do {
    uVar7 = uVar7 - 0x10;
    auVar9 = VectorAdd(*pauVar6,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),1);
    auVar9 = VectorCompareGreaterThan(*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),auVar9,1);
    auVar9 = auVar9 & *(undefined1 (*) [16])(auVar3 << 0x40 | auVar3) ^ *pauVar6;
    *(longlong *)*pauVar6 = auVar9._0_8_;
    *(longlong *)(*pauVar6 + 8) = auVar9._8_8_;
    pauVar6 = pauVar6 + 1;
  } while (uVar7 != 0);
  if (param_2 == uVar8) {
    return;
  }
  iVar5 = param_2 - uVar8;
  pbVar4 = *param_1 + uVar8;
  do {
    iVar5 = iVar5 + -1;
    *pbVar4 = *pbVar4 ^ ((char)(*pbVar4 + 0x1f) < -0x66) << 5;
    pbVar4 = pbVar4 + 1;
  } while (iVar5 != 0);
  return;
}


// =========================================================================
// Function: WNRxuN_tMim_iLsIafpcqlOhFxxePkoooDgbIJkjZxofBJwAeLaRgTtEJFYVpHYiJQBbNKaD_NtKpxcYmdQxkivOgEZMkkgXoO
// Entry: 0x71a8c274 | Size: 52 bytes
// =========================================================================

bool WNRxuN_tMim_iLsIafpcqlOhFxxePkoooDgbIJkjZxofBJwAeLaRgTtEJFYVpHYiJQBbNKaD_NtKpxcYmdQxkivOgEZMkkgXoO
               (undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_2 == param_4) {
    iVar1 = thunk_FlAasK_HImhSxitKfnHnsaiQraHRFHkyLHFsIleIvoLZyxogjfyqEZaEHkgK
                      (param_1,param_3,param_2);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


// =========================================================================
// Function: peOzkialapqniEkeiLsAXWMTLkQAXSAYxHiXbnHgEyfoMQyIlKiUaWVcfzMaTIDeegrZGCrtAcodLbNXTFcKJJevMxjtUjRJeGPEPSr
// Entry: 0x71a8c2ac | Size: 96 bytes
// =========================================================================

bool peOzkialapqniEkeiLsAXWMTLkQAXSAYxHiXbnHgEyfoMQyIlKiUaWVcfzMaTIDeegrZGCrtAcodLbNXTFcKJJevMxjtUjRJeGPEPSr
               (int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while( true ) {
    if (param_2 < param_4) {
      return bVar1;
    }
    param_2 = param_2 - 1;
    iVar2 = thunk_FlAasK_HImhSxitKfnHnsaiQraHRFHkyLHFsIleIvoLZyxogjfyqEZaEHkgK
                      (param_1,param_3,param_4);
    bVar1 = iVar2 == 0;
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  return true;
}


// =========================================================================
// Function: AdZQqhmjKWZDjstjGFxgefmPjPGCx_pAmiFjSTGGFcMtjiaiauzSqoAFwwszXlOBfkdSCCcLFoMFEqaetCYsbdWkEDqAwQuWJUGFDn
// Entry: 0x71a8c310 | Size: 48 bytes
// =========================================================================

bool AdZQqhmjKWZDjstjGFxgefmPjPGCx_pAmiFjSTGGFcMtjiaiauzSqoAFwwszXlOBfkdSCCcLFoMFEqaetCYsbdWkEDqAwQuWJUGFDn
               (undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_4 <= param_2) {
    iVar1 = thunk_FlAasK_HImhSxitKfnHnsaiQraHRFHkyLHFsIleIvoLZyxogjfyqEZaEHkgK
                      (param_1,param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


// =========================================================================
// Function: WjMxowYNuNfLCVazoALISWAVtnRpWXceGZkNjiCxuXeaHegpaxAmegeioXQiXafhSKQQHmkQWyi_PipYuiCiNaZt_nsUEtaDGlkpP
// Entry: 0x71a8c344 | Size: 284 bytes
// =========================================================================

bool WjMxowYNuNfLCVazoALISWAVtnRpWXceGZkNjiCxuXeaHegpaxAmegeioXQiXafhSKQQHmkQWyi_PipYuiCiNaZt_nsUEtaDGlkpP
               (char *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char acStack_23 [3];
  
  acStack_23[0] = (&DAT_70095198)[param_3];
  acStack_23[1] = (&DAT_70095298)[param_3];
  if (acStack_23[1] == acStack_23[0]) {
    if (param_2 != 0) {
      iVar1 = imp_memchr(param_1,param_3,param_2);
      return iVar1 != 0 && iVar1 - (int)param_1 != -1;
    }
    return false;
  }
  acStack_23[2] = 0;
  iVar1 = imp_strlen(acStack_23);
  if (param_2 == 0 || iVar1 == 0) {
    return false;
  }
  pcVar2 = param_1 + param_2;
  pcVar3 = param_1;
  do {
    pcVar5 = acStack_23;
    iVar6 = iVar1;
    do {
      pcVar4 = pcVar3;
      if (*pcVar3 == *pcVar5) goto LAB_71a8c438;
      iVar6 = iVar6 + -1;
      pcVar5 = pcVar5 + 1;
    } while (iVar6 != 0);
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar2;
  } while (pcVar3 != pcVar2);
LAB_71a8c438:
  return pcVar4 != pcVar2 && (int)pcVar4 - (int)param_1 != -1;
}


// =========================================================================
// Function: xmjUCePXBlNZSAGRLfrhixfqnBaGpBpDygzIJnLOLSYJprFKCnXorzUp_ZHDeSRkGYHtiCcwyXMbQOiEIXoHddGGzWzHLjeeAyS_
// Entry: 0x71a8c468 | Size: 56 bytes
// =========================================================================

bool xmjUCePXBlNZSAGRLfrhixfqnBaGpBpDygzIJnLOLSYJprFKCnXorzUp_ZHDeSRkGYHtiCcwyXMbQOiEIXoHddGGzWzHLjeeAyS_
               (int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_4 <= param_2) {
    iVar1 = thunk_FlAasK_HImhSxitKfnHnsaiQraHRFHkyLHFsIleIvoLZyxogjfyqEZaEHkgK
                      (param_1 + (param_2 - param_4),param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


// =========================================================================
// Function: QcrHLgjpTupWoCdVINsTkqbPWlDNyrFEbHBEcIpsUSybIENGPOFwExqHnknIHcOMZlUUdQwcoaJsdrMWvDPIQxyBkzrbbovbNaIjvBVOh
// Entry: 0x71a8c4a4 | Size: 308 bytes
// =========================================================================

void QcrHLgjpTupWoCdVINsTkqbPWlDNyrFEbHBEcIpsUSybIENGPOFwExqHnknIHcOMZlUUdQwcoaJsdrMWvDPIQxyBkzrbbovbNaIjvBVOh
               (int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_5 < param_3) {
    param_3 = param_5;
  }
  uVar12 = 0;
  if (param_3 < 8) {
    while (uVar11 = uVar12, uVar12 = uVar11 + 2, uVar12 <= param_3) {
      uVar9 = *(ushort *)(param_4 + uVar11) ^ *(ushort *)(param_2 + uVar11);
      if (uVar9 != 0) {
        if ((uVar9 & 0xff) == 0) {
          uVar12 = uVar11 + 3;
        }
        *param_1 = param_2;
        param_1[1] = uVar12 - 2;
        return;
      }
    }
    if (param_3 != uVar11) {
      if (*(char *)(param_2 + uVar11) == *(char *)(param_4 + uVar11)) {
        uVar11 = uVar11 + 1;
      }
      *param_1 = param_2;
      param_1[1] = uVar11;
      return;
    }
  }
  else {
    do {
      uVar11 = *(uint *)(param_4 + uVar12) ^ *(uint *)(param_2 + uVar12);
      uVar13 = ((uint *)(param_4 + uVar12))[1] ^ ((uint *)(param_2 + uVar12))[1];
      if (uVar11 != 0 || uVar13 != 0) {
        bVar3 = (byte)uVar13;
        bVar4 = (byte)(uVar13 >> 8);
        bVar5 = (byte)(uVar13 >> 0x10);
        bVar1 = (byte)(uVar13 >> 0x18);
        bVar6 = (byte)uVar11;
        bVar7 = (byte)(uVar11 >> 8);
        bVar8 = (byte)(uVar11 >> 0x10);
        bVar2 = (byte)(uVar11 >> 0x18);
        uVar13 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20;
        if (uVar11 != 0) {
          uVar13 = LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                            bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                          bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                        bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                            bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                          bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                        bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 |
                                            bVar8 >> 2 & 1) << 1 | bVar8 >> 3 & 1) << 1 |
                                          bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                                        bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                            bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                          bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                        bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
        }
        *param_1 = param_2;
        param_1[1] = uVar12 + (uVar13 >> 3);
        return;
      }
      uVar11 = uVar12 + 0x10;
      uVar12 = uVar12 + 8;
    } while (uVar11 < param_3);
    iVar10 = param_3 - 8;
    uVar11 = *(uint *)(param_4 + iVar10) ^ *(uint *)(param_2 + iVar10);
    uVar12 = ((uint *)(param_4 + iVar10))[1] ^ ((uint *)(param_2 + iVar10))[1];
    if (uVar11 != 0 || uVar12 != 0) {
      bVar3 = (byte)uVar12;
      bVar4 = (byte)(uVar12 >> 8);
      bVar5 = (byte)(uVar12 >> 0x10);
      bVar1 = (byte)(uVar12 >> 0x18);
      bVar6 = (byte)uVar11;
      bVar7 = (byte)(uVar11 >> 8);
      bVar8 = (byte)(uVar11 >> 0x10);
      bVar2 = (byte)(uVar11 >> 0x18);
      uVar12 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                        << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                     bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) +
               0x20;
      if (uVar11 != 0) {
        uVar12 = LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                 bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                             bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1
                                          ) << 1 | bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 |
                                       bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      param_3 = iVar10 + (uVar12 >> 3);
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// =========================================================================
// Function: fWJFVGJGzCWRDwGpSHeJgvKuAqyYQjWviFuTEHfBUWvdTKlehbXOYSUsMvCkbLswhntwdzRFMPeoOpYDWocwRambCfzp_rXyxsDyFVRiX
// Entry: 0x71a8c5d8 | Size: 144 bytes
// =========================================================================

void fWJFVGJGzCWRDwGpSHeJgvKuAqyYQjWviFuTEHfBUWvdTKlehbXOYSUsMvCkbLswhntwdzRFMPeoOpYDWocwRambCfzp_rXyxsDyFVRiX
               (int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if (param_5 < param_3) {
    uVar3 = param_5;
  }
  if (uVar3 != 0) {
    uVar1 = 0;
    pcVar2 = (char *)(param_2 + param_3);
    do {
      if (pcVar2[-1] != *(char *)((param_5 + param_4 + -1) - uVar1)) {
        *param_1 = (int)pcVar2;
        param_1[1] = uVar1;
        return;
      }
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + -1;
    } while (uVar3 != uVar1);
    *param_1 = param_2 + (param_3 - uVar3);
    param_1[1] = uVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// =========================================================================
// Function: mWfVKnQoyBAhGbUZLamMRMclLmdVmyuhPPbqSUfVIxcZOymctxFNaAdFvrmAbkXBwINcGYoL
// Entry: 0x71a8c7d0 | Size: 60 bytes
// =========================================================================

void mWfVKnQoyBAhGbUZLamMRMclLmdVmyuhPPbqSUfVIxcZOymctxFNaAdFvrmAbkXBwINcGYoL
               (undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)imp___errno();
    uVar2 = *puVar1;
    imp_write(2,param_1,param_2);
    *puVar1 = uVar2;
  }
  return;
}


// =========================================================================
// Function: FT_pAnNhhQaUlZWz_EBBgDYyHTHmxBbjSgsNuJcikhEeSbCPylctWpwZjathlMDjiDpjqsr_Ms
// Entry: 0x71a8c814 | Size: 404 bytes
// =========================================================================

void FT_pAnNhhQaUlZWz_EBBgDYyHTHmxBbjSgsNuJcikhEeSbCPylctWpwZjathlMDjiDpjqsr_Ms
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uStack_be8;
  undefined1 *puStack_be4;
  undefined1 auStack_be0 [3004];
  
  puStack_be4 = auStack_be0;
  uStack_be8 = 3000;
  DataMemoryBarrier(0xb);
  iVar3 = (*DAT_70136590)(param_1,param_2,param_3,&puStack_be4);
  puVar2 = puStack_be4;
  if (iVar3 == 0) goto LAB_71a8c968;
  if ((int)uStack_be8 < 0) {
LAB_71a8c914:
    FUN_71a8cc74(&puStack_be4,&uStack_be8,&DAT_70068014,s______message_truncated__70095398);
    iVar3 = imp_strlen(auStack_be0);
  }
  else {
    uVar4 = imp_vsnprintf(puStack_be4,uStack_be8,param_4,&stack0x00000000);
    bVar1 = (int)uVar4 <= (int)uStack_be8;
    uVar6 = uStack_be8 - 0x1a;
    if (uStack_be8 < 0x1a) {
      uVar6 = 0;
    }
    if (uVar4 < 0x80000000 && bVar1) {
      uVar6 = uVar4;
    }
    uStack_be8 = uStack_be8 - uVar6;
    puStack_be4 = puStack_be4 + uVar6;
    if (uVar4 >= 0x80000000 || !bVar1) goto LAB_71a8c914;
    FUN_71a8cc74(&puStack_be4,&uStack_be8,&DAT_7006c898);
    iVar3 = imp_strlen(auStack_be0);
  }
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)imp___errno();
    uVar7 = *puVar5;
    imp_write(2,auStack_be0,iVar3);
    *puVar5 = uVar7;
  }
LAB_71a8c968:
  if (param_1 == 3) {
    DataMemoryBarrier(0xb);
    (*DAT_70136598)(param_2,param_3,auStack_be0,puVar2);
                    /* WARNING: Subroutine does not return */
    imp_abort();
  }
  return;
}


// =========================================================================
// Function: AinYECLIPJkrJSpUKyJdTPdfhVZxcJddGDcmYDVmIvfzdBLnPryrsnRFwzEPIiHnQCcL
// Entry: 0x71a8c9c4 | Size: 8 bytes
// =========================================================================

undefined4 AinYECLIPJkrJSpUKyJdTPdfhVZxcJddGDcmYDVmIvfzdBLnPryrsnRFwzEPIiHnQCcL(void)

{
  return 1;
}


// =========================================================================
// Function: FUN_71a8c9cc
// Entry: 0x71a8c9cc | Size: 60 bytes
// =========================================================================

void FUN_71a8c9cc(void)

{
  thunk_FT_pAnNhhQaUlZWz_EBBgDYyHTHmxBbjSgsNuJcikhEeSbCPylctWpwZjathlMDjiDpjqsr_Ms();
  return;
}


// =========================================================================
// Function: gmazRpgkEpvRrOTuyqUVvTXqIghoAyAJgjiVf_OtyuqoYxoFyKXz_lxbn_yEF_GhpSGZecvVkdvsMFwCSTRIGaazWoIoyLkwpniKtkdN
// Entry: 0x71a8ca0c | Size: 176 bytes
// =========================================================================

void gmazRpgkEpvRrOTuyqUVvTXqIghoAyAJgjiVf_OtyuqoYxoFyKXz_lxbn_yEF_GhpSGZecvVkdvsMFwCSTRIGaazWoIoyLkwpniKtkdN
               (int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_70136590;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006fa8c,0x99,
                  s_bool_absl__base_internal__Atomic_700679e6,&DAT_70070de7);
  }
  if (DAT_70136590 == DAT_70136594) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x70136590);
      if (bVar1) {
        bVar1 = true;
        DAT_70136590 = param_1;
        goto LAB_71a8ca60;
      }
    } while (DAT_70136590 == DAT_70136594);
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_71a8ca60:
  DataMemoryBarrier(0xb);
  if (bVar1) {
    return;
  }
  if (iVar2 != param_1) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006fa8c,0x6e,
                  s_void_absl__base_internal__Atomic_7006b2ec,s_success_70068213);
  }
  return;
}


// =========================================================================
// Function: DKjPZJRMKmJas_MKltKFjhWxfEnoYcyHMk_ALLUSmEAB_qQiyAqqwwXHLyuSqPttZdnHdCEwKKyxH
// Entry: 0x71a8cad8 | Size: 180 bytes
// =========================================================================

void DKjPZJRMKmJas_MKltKFjhWxfEnoYcyHMk_ALLUSmEAB_qQiyAqqwwXHLyuSqPttZdnHdCEwKKyxH(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_70136598;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006fa8c,0x99,
                  s_bool_absl__base_internal__Atomic_70069f8f,&DAT_70070de7);
  }
  if (DAT_70136598 == DAT_7013659c) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x70136598);
      if (bVar1) {
        bVar1 = true;
        DAT_70136598 = param_1;
        goto LAB_71a8cb30;
      }
    } while (DAT_70136598 == DAT_7013659c);
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_71a8cb30:
  DataMemoryBarrier(0xb);
  if (bVar1) {
    return;
  }
  if (iVar2 != param_1) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006fa8c,0x6e,
                  s_void_absl__base_internal__Atomic_7006ca5d,s_success_70068213);
  }
  return;
}


// =========================================================================
// Function: vUVBetYBXGXIkuLUvUyjZEGEsbsAPYXBWvtUGEREkD_jyMXmlHY_TBGMdLpNkzDwFfguSfpvpwcvneLj_FIWxSTOYIXoYSuTmCyZasRNGEolSEsirkGaZxPRixWxRtMqQCZtxSBuwSOgsatATDeCkcRBNncYTUnUMrLnn
// Entry: 0x71a8cba8 | Size: 176 bytes
// =========================================================================

void vUVBetYBXGXIkuLUvUyjZEGEsbsAPYXBWvtUGEREkD_jyMXmlHY_TBGMdLpNkzDwFfguSfpvpwcvneLj_FIWxSTOYIXoYSuTmCyZasRNGEolSEsirkGaZxPRixWxRtMqQCZtxSBuwSOgsatATDeCkcRBNncYTUnUMrLnn
               (int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_70136588;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006fa8c,0x99,
                  s_bool_absl__base_internal__Atomic_700704e1,&DAT_70070de7);
  }
  if (DAT_70136588 == DAT_7013658c) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_70136588);
      if (bVar1) {
        bVar1 = true;
        DAT_70136588 = param_1;
        goto LAB_71a8cbfc;
      }
    } while (DAT_70136588 == DAT_7013658c);
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_71a8cbfc:
  DataMemoryBarrier(0xb);
  if (bVar1) {
    return;
  }
  if (iVar2 != param_1) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006fa8c,0x6e,
                  s_void_absl__base_internal__Atomic_70061cf6,s_success_70068213);
  }
  return;
}


// =========================================================================
// Function: FUN_71a8cc74
// Entry: 0x71a8cc74 | Size: 116 bytes
// =========================================================================

void FUN_71a8cc74(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  if (-1 < *param_2) {
    uStack_4 = param_4;
    iVar1 = imp_vsnprintf(*param_1,*param_2,param_3,&uStack_4,&uStack_4);
    if ((-1 < iVar1) && (iVar1 <= *param_2)) {
      iVar2 = *param_1;
      *param_2 = *param_2 - iVar1;
      *param_1 = iVar2 + iVar1;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71a8cce8
// Entry: 0x71a8cce8 | Size: 56 bytes
// =========================================================================

undefined4
FUN_71a8cce8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_71a8cc74(param_4,param_5,s___s____d__RAW__700704d1,param_2,param_3);
  return 1;
}


// =========================================================================
// Function: NjlYgWowCEhtQshFsvOhduHtaFfzIQPrRnWxPdejfUhtdNuGyewJIbNhYmgIoIlymdUUXhpPXErzKcpJtcZSHFCQMVdvpuPuM
// Entry: 0x71a8d298 | Size: 4 bytes
// =========================================================================

void NjlYgWowCEhtQshFsvOhduHtaFfzIQPrRnWxPdejfUhtdNuGyewJIbNhYmgIoIlymdUUXhpPXErzKcpJtcZSHFCQMVdvpuPuM
               (void)

{
  return;
}


// =========================================================================
// Function: RPwvIUn_nyrltQVVsDsKiKJWIaklvXVCXX
// Entry: 0x71a8d2c0 | Size: 196 bytes
// =========================================================================

undefined8 * RPwvIUn_nyrltQVVsDsKiKJWIaklvXVCXX(undefined8 *param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  
  if ((-1.0 < param_2) && ((ABS(param_2) < INFINITY || (ABS(param_2) != INFINITY)))) {
    if (1.8446744e+19 <= param_2) {
      imp_ldexpf(param_2,0xffffffc0);
      uVar3 = FUN_71ba18a0();
      uVar1 = FUN_71ba1c88();
      fVar2 = (float)imp_ldexpf(uVar1,0x40);
      param_2 = param_2 - fVar2;
    }
    else {
      uVar3 = 0;
    }
    param_1[1] = uVar3;
    uVar3 = FUN_71ba18a0(param_2);
    *param_1 = uVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,100,
                s_uint128_absl__lts_20240722___ano_7006b3a4,
                s_std__isfinite_v_____v_>__1_____s_70068bb5);
}


// =========================================================================
// Function: brxrOFsFedlicpzTiWnTWgzqt_SrEMPZxz
// Entry: 0x71a8d398 | Size: 52 bytes
// =========================================================================

undefined8 *
brxrOFsFedlicpzTiWnTWgzqt_SrEMPZxz(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_71a8d3d0(param_3,&uStack_20);
  *param_1 = uStack_20;
  param_1[1] = uStack_18;
  return param_1;
}


// =========================================================================
// Function: FUN_71a8d3d0
// Entry: 0x71a8d3d0 | Size: 248 bytes
// =========================================================================

void FUN_71a8d3d0(undefined8 *param_1)

{
  double in_d0;
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((-1.0 < in_d0) && (ABS(in_d0) != INFINITY)) && (!NAN(ABS(in_d0)))) {
    dVar1 = (double)imp_ldexp(0,0x3ff00000,0x80);
    if (in_d0 < dVar1) {
      dVar1 = (double)imp_ldexp(0,0x3ff00000,0x40);
      if (dVar1 <= in_d0) {
        imp_ldexp();
        uVar3 = FUN_71ba1838();
        uVar2 = FUN_71ba1c38();
        dVar1 = (double)imp_ldexp((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x40);
        in_d0 = in_d0 - dVar1;
      }
      else {
        uVar3 = 0;
      }
      param_1[1] = uVar3;
      uVar3 = FUN_71ba1838(SUB84(in_d0,0),(int)((ulonglong)in_d0 >> 0x20));
      *param_1 = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,100,
                s_uint128_absl__lts_20240722___ano_7006e051,
                s_std__isfinite_v_____v_>__1_____s_70068bb5);
}


// =========================================================================
// Function: jsErymK_OmBuDcZfhywL_ReUMxNjWBfLeh
// Entry: 0x71a8d4e0 | Size: 224 bytes
// =========================================================================

undefined8 *
jsErymK_OmBuDcZfhywL_ReUMxNjWBfLeh
          (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  dVar1 = (double)CONCAT44(param_4,param_3);
  if (((dVar1 < 3.402823669209385e+38) && (-1.0 < dVar1)) &&
     ((ABS((double)CONCAT44(param_4,param_3)) < INFINITY ||
      (ABS((double)CONCAT44(param_4,param_3)) != INFINITY)))) {
    if (1.8446744073709552e+19 <= dVar1) {
      imp_ldexp(param_3,param_4,0xffffffc0);
      uVar4 = FUN_71ba1838();
      uVar3 = FUN_71ba1c38();
      dVar2 = (double)imp_ldexp((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x40);
      dVar1 = dVar1 - dVar2;
    }
    else {
      uVar4 = 0;
    }
    param_1[1] = uVar4;
    uVar4 = FUN_71ba1838(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    *param_1 = uVar4;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,100,
                s_uint128_absl__lts_20240722___ano_70067164,
                s_std__isfinite_v_____v_>__1_____s_70068bb5);
}


// =========================================================================
// Function: ugDu_AjnjpVvAeiDMHQUhDhzsHFEIBeJYRbDEEwuu
// Entry: 0x71a8d5e4 | Size: 92 bytes
// =========================================================================

void ugDu_AjnjpVvAeiDMHQUhDhzsHFEIBeJYRbDEEwuu
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  undefined1 auStack_28 [16];
  
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  FUN_71a8d640(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_1,auStack_28);
  return;
}


// =========================================================================
// Function: FUN_71a8d640
// Entry: 0x71a8d640 | Size: 1024 bytes
// =========================================================================

void FUN_71a8d640(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint *param_9,uint *param_10)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  
  if ((param_5 == 0 && param_7 == 0) && (param_6 == 0 && param_8 == 0)) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0x37,
                  s_void_absl__lts_20240722___anonym_70064890,s_divisor____0_7006e8c0);
  }
  bVar12 = param_4 <= param_8 && (uint)(param_7 <= param_3) <= param_4 - param_8;
  if ((param_3 ^ param_7) == 0 && (param_4 ^ param_8) == 0) {
    bVar12 = param_2 <= param_6 && (uint)(param_5 <= param_1) <= param_2 - param_6;
  }
  if (bVar12) {
    *param_9 = 0;
    param_9[1] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_9[2] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_9[3] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *param_10 = param_1;
    param_10[1] = param_2;
    param_10[2] = param_3;
    param_10[3] = param_4;
    return;
  }
  bVar12 = param_5 == param_1 && param_6 == param_2;
  if (param_5 == param_1 && param_6 == param_2) {
    bVar12 = (param_3 ^ param_7) == 0 && (param_4 ^ param_8) == 0;
  }
  if (bVar12) {
    param_9[0] = 1;
    param_9[1] = 0;
    param_9[2] = 0;
    param_9[3] = 0;
    *param_10 = 0;
    param_10[1] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_10[2] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_10[3] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    return;
  }
  uVar9 = 0x7f;
  uVar10 = 0x7f;
  uVar7 = param_4;
  uVar4 = param_3;
  if ((param_3 == 0 && param_4 == 0) &&
     (uVar10 = 0x3f, uVar7 = param_2, uVar4 = param_1, param_1 == 0 && param_2 == 0)) {
LAB_71a8da20:
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0x2e,
                  s_int_absl__lts_20240722___anonymo_700648f3,s_low____0_70070dea);
  }
  uVar4 = LZCOUNT(uVar4) + 0x20;
  if (uVar7 != 0) {
    uVar4 = LZCOUNT(uVar7);
  }
  uVar7 = param_8;
  uVar6 = param_7;
  if ((param_7 == 0 && param_8 == 0) &&
     (uVar9 = 0x3f, uVar7 = param_6, uVar6 = param_5, param_5 == 0 && param_6 == 0))
  goto LAB_71a8da20;
  uVar6 = LZCOUNT(uVar6) + 0x20;
  if (uVar7 != 0) {
    uVar6 = LZCOUNT(uVar7);
  }
  uVar7 = (uVar10 ^ uVar4) - (uVar9 ^ uVar6);
  uStack_34 = param_4;
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  if ((int)uVar7 < 0x40) {
    uStack_28 = param_7;
    uVar5 = param_6;
    if ((uVar10 ^ uVar4) != (uVar9 ^ uVar6)) {
      uVar9 = 0x20 - uVar7;
      uVar6 = uVar7 - 0x20;
      uVar4 = param_7 >> (uVar9 & 0xff) | param_8 << (uVar7 & 0xff);
      uVar10 = 0x40 - uVar7;
      if (-1 < (int)uVar6) {
        uVar4 = param_7 << (uVar6 & 0xff);
      }
      param_7 = param_7 << (uVar7 & 0xff);
      param_8 = param_6 >> (uVar10 & 0xff);
      if (-1 < (int)uVar9) {
        param_8 = 0;
      }
      param_8 = param_8 | uVar4;
      uStack_28 = param_5 >> (uVar10 & 0xff) | param_6 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar9) {
        uStack_28 = param_6 >> (uVar9 & 0xff);
      }
      if (-1 < (int)uVar6) {
        param_7 = 0;
      }
      uStack_28 = uStack_28 | param_7;
      uVar5 = param_5 >> (uVar9 & 0xff) | param_6 << (uVar7 & 0xff);
      if (-1 < (int)uVar6) {
        uVar5 = param_5 << (uVar6 & 0xff);
      }
      param_5 = param_5 << (uVar7 & 0xff);
      if (-1 < (int)uVar6) {
        param_5 = 0;
      }
    }
    if ((int)uVar7 < 0) {
      uVar7 = 0;
      uVar10 = 0;
      uVar4 = 0;
      uVar9 = 0;
      goto LAB_71a8d9c4;
    }
  }
  else {
    uVar4 = uVar7 - 0x60;
    uVar5 = 0;
    param_8 = param_5 >> (0x60 - uVar7 & 0xff) | param_6 << (uVar7 - 0x40 & 0xff);
    if (-1 < (int)uVar4) {
      param_8 = param_5 << (uVar4 & 0xff);
    }
    uStack_28 = param_5 << (uVar7 - 0x40 & 0xff);
    if (-1 < (int)uVar4) {
      uStack_28 = 0;
    }
    param_5 = 0;
  }
  iVar8 = uVar7 + 1;
  uVar4 = 0;
  uVar9 = 0;
  uVar6 = 0;
  uVar11 = 0;
  do {
    bVar12 = param_8 < uStack_34 || uStack_34 - param_8 < (uint)(uStack_28 <= uStack_38);
    if (uStack_38 == uStack_28 && uStack_34 == param_8) {
      bVar12 = uVar5 < uStack_3c || uStack_3c - uVar5 < (uint)(param_5 <= uStack_40);
    }
    uVar7 = uVar11 << 1;
    if (bVar12) {
      uVar10 = uStack_38 - uStack_28;
      uVar3 = uStack_34 - (param_8 + (uStack_38 < uStack_28));
      uStack_34 = uVar3 - (uVar10 == 0);
      bVar13 = param_5 <= uStack_40;
      uStack_40 = uStack_40 - param_5;
      bVar12 = uVar5 < uStack_3c;
      bVar1 = uStack_3c - uVar5 < (uint)bVar13;
      uStack_3c = uStack_3c - (uVar5 + !bVar13);
      if (bVar12 || bVar1) {
        uStack_34 = uVar3;
      }
      uVar7 = uVar7 | 1;
      uStack_38 = uVar10 - 1;
      if (bVar12 || bVar1) {
        uStack_38 = uVar10;
      }
    }
    bVar2 = (byte)param_8;
    param_8 = param_8 >> 1;
    uVar10 = uVar6 << 1 | uVar11 >> 0x1f;
    uVar9 = uVar9 << 1 | uVar4 >> 0x1f;
    uVar4 = uVar4 << 1 | uVar6 >> 0x1f;
    uVar11 = uStack_28 << 0x1f;
    uStack_28 = (uint)(bVar2 & 1) << 0x1f | uStack_28 >> 1;
    param_5 = uVar5 << 0x1f | param_5 >> 1;
    iVar8 = iVar8 + -1;
    uVar6 = uVar10;
    uVar5 = uVar11 | uVar5 >> 1;
    uVar11 = uVar7;
  } while (iVar8 != 0);
LAB_71a8d9c4:
  *param_9 = uVar7;
  param_9[1] = uVar10;
  param_9[2] = uVar4;
  param_9[3] = uVar9;
  *param_10 = uStack_40;
  param_10[1] = uStack_3c;
  param_10[2] = uStack_38;
  param_10[3] = uStack_34;
  return;
}


// =========================================================================
// Function: wMllXacslLhcIzefWgPIGpgSWbqFmOgIHbQR_QELe
// Entry: 0x71a8da68 | Size: 88 bytes
// =========================================================================

void wMllXacslLhcIzefWgPIGpgSWbqFmOgIHbQR_QELe
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  undefined1 auStack_28 [16];
  
  *param_1 = 0;
  param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  FUN_71a8d640(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,auStack_28,param_1);
  return;
}


// =========================================================================
// Function: guAAHbqaOaAUkBosnUJUpgNfKvIkbLe_xEwdxdHCdw
// Entry: 0x71a8dac0 | Size: 44 bytes
// =========================================================================

void guAAHbqaOaAUkBosnUJUpgNfKvIkbLe_xEwdxdHCdw(undefined4 param_1,undefined4 *param_2)

{
  FUN_71a8daec(param_1,param_2[3],*param_2,param_2[1],param_2[2],param_2[3],2);
  return;
}


// =========================================================================
// Function: FUN_71a8daec
// Entry: 0x71a8daec | Size: 916 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_71a8daec(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7)

{
  int *piVar1;
  undefined **extraout_r1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_f4;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *puStack_b4;
  undefined *apuStack_b0 [8];
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined *apuStack_7c [5];
  int aiStack_68 [13];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [8];
  
  if ((param_7 & 0x4a) == 8) {
    uVar4 = 0x10000000;
    uStack_f4 = 0xf;
LAB_71a8db34:
    uVar5 = 0;
  }
  else {
    if ((param_7 & 0x4a) == 0x40) {
      uVar4 = 0x80000000;
      uStack_f4 = 0x15;
      goto LAB_71a8db34;
    }
    uVar4 = 0x8ac72304;
    uVar5 = 0x89e80000;
    uStack_f4 = 0x13;
  }
  puStack_b4 = &DAT_70b14018;
  aiStack_68[2] = 0;
  apuStack_7c[0] = &DAT_70b1402c;
  thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_7c,apuStack_b0);
  puStack_b4 = &DAT_70b13fe0;
  uStack_34 = 0;
  uStack_30 = 0xffffffff;
  apuStack_7c[0] = &DAT_70b13ff4;
  thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(apuStack_b0);
  uStack_90 = 0;
  uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_88 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_80 = 0x10;
  apuStack_b0[0] = &DAT_70b13d18;
  uStack_bc = param_6;
  uStack_c0 = param_5;
  *(uint *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc)) =
       *(uint *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc)) & 0xffffbdb5 | param_7 & 0x424a;
  iStack_c8 = param_3;
  iStack_c4 = param_4;
  FUN_71a8d640(param_3,param_4,param_5,param_6,uVar5,uVar4,0,0,&iStack_c8,&uStack_d8);
  FUN_71a8d640(iStack_c8,iStack_c4,uStack_c0,uStack_bc,uVar5,uVar4,0,0,&iStack_c8,&iStack_e8);
  if (iStack_c8 == 0 && iStack_c4 == 0) {
    ppuVar3 = extraout_r1;
    if (iStack_e8 == 0 && iStack_e4 == 0) goto LAB_71a8de0c;
    thunk_JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK(&puStack_b4);
    *(uint *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc)) =
         *(uint *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc)) & 0xfffffdff;
    iVar2 = *(int *)(puStack_b4 + -0xc);
    if (*(int *)((int)aiStack_68 + iVar2) == -1) {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(auStack_2c,(int)&puStack_b4 + iVar2);
      piVar1 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(auStack_2c,&DAT_71204b20);
      (**(code **)(*piVar1 + 0x1c))(piVar1,0x20);
      thunk_foeUZaYNSPyOrNM_GcbNrfl(auStack_2c);
    }
    *(undefined4 *)((int)aiStack_68 + iVar2) = 0x30;
  }
  else {
    thunk_JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK(&puStack_b4);
    *(uint *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc)) =
         *(uint *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc)) & 0xfffffdff;
    iVar2 = *(int *)(puStack_b4 + -0xc);
    if (*(int *)((int)aiStack_68 + iVar2) == -1) {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(auStack_2c,(int)&puStack_b4 + iVar2);
      piVar1 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(auStack_2c,&DAT_71204b20);
      (**(code **)(*piVar1 + 0x1c))(piVar1,0x20);
      thunk_foeUZaYNSPyOrNM_GcbNrfl(auStack_2c);
    }
    *(undefined4 *)((int)aiStack_68 + iVar2) = 0x30;
    *(undefined4 *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc) + 8U) = uStack_f4;
    thunk_JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK
              (&puStack_b4,0x30,iStack_e8,iStack_e4);
  }
  ppuVar3 = &puStack_b4;
  *(undefined4 *)((int)apuStack_b0 + *(int *)(puStack_b4 + -0xc) + 8U) = uStack_f4;
LAB_71a8de0c:
  thunk_JDA_q_kxIVFAPbJRwhXxzyrzgAbxmkfLYbaWoCEnQDfPuKCVDAPozK
            (&puStack_b4,ppuVar3,uStack_d8,uStack_d4);
  thunk_kQYqFxAwolEAJmJHuBnNLeFGVBJlINyxDZLgdjRUzMEZAzoSTEgsEiEDNcqptjEx_kzJstpEIQEl
            (param_1,apuStack_b0);
  puStack_b4 = &DAT_70b13fe0;
  apuStack_7c[0] = &DAT_70b13ff4;
  apuStack_b0[0] = &DAT_70b13d18;
  if ((uStack_90 & 1) != 0) {
    thunk_qNQrlu(uStack_88);
  }
  thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(apuStack_b0);
  thunk_JJRaJAVqXjXXFJCnfaqgOAFBIBNGhsrbVgKGcfdLdtYkUBLEodGbFu(&puStack_b4,&DAT_70b14000);
  thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_7c);
  return;
}


// =========================================================================
// Function: sZIuGtH_LBHl_CTapEOKpZlzwSCkZHGEXiXBpevbERtRPTJpZf_tyGcqMiLPLSOcUoDfiqKDZvdDZWWxRLeKLqfnX
// Entry: 0x71a8df10 | Size: 540 bytes
// =========================================================================

undefined4
sZIuGtH_LBHl_CTapEOKpZlzwSCkZHGEXiXBpevbERtRPTJpZf_tyGcqMiLPLSOcUoDfiqKDZvdDZWWxRLeKLqfnX
          (int *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte abStack_34 [4];
  uint uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [4];
  
  uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4);
  iVar8 = param_5;
  uVar9 = param_6;
  uVar10 = uVar7;
  FUN_71a8daec(abStack_34);
  iVar1 = *param_1;
  uVar4 = *(uint *)((int)param_1 + *(int *)(iVar1 + -0xc) + 0xc);
  *(undefined4 *)((int)param_1 + *(int *)(iVar1 + -0xc) + 0xc) = 0;
  uVar6 = uStack_30;
  if ((abStack_34[0] & 1) == 0) {
    uVar6 = (uint)(abStack_34[0] >> 1);
  }
  if (uVar4 <= uVar6) goto LAB_71a8e0e4;
  iVar5 = uVar4 - uVar6;
  if ((uVar7 & 0xb0) == 0x10) {
    if (((uVar7 & 0x24a) != 0x208) ||
       (uVar6 = param_4 | param_6, (param_3 == 0 && param_5 == 0) && uVar6 == 0)) goto LAB_71a8e07c;
    uVar3 = 2;
    iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
    uVar4 = *(uint *)(iVar1 + 0x4c);
    if (uVar4 == 0xffffffff) {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(auStack_28,iVar1,uVar6,abStack_34[0],iVar8,uVar9,uVar10)
      ;
      piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(auStack_28,&DAT_71204b20);
      uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
      thunk_foeUZaYNSPyOrNM_GcbNrfl(auStack_28);
      *(uint *)(iVar1 + 0x4c) = uVar4;
    }
  }
  else {
    if ((uVar7 & 0xb0) == 0x20) {
      iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
      uVar4 = *(uint *)(iVar1 + 0x4c);
      if (uVar4 == 0xffffffff) {
        thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ
                  (auStack_28,iVar1,uVar6,abStack_34[0],iVar8,uVar9,uVar10);
        piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(auStack_28,&DAT_71204b20);
        uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
        thunk_foeUZaYNSPyOrNM_GcbNrfl(auStack_28);
        *(uint *)(iVar1 + 0x4c) = uVar4;
      }
      thunk_jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx
                (abStack_34,iVar5,uVar4 & 0xff);
      goto LAB_71a8e0e4;
    }
LAB_71a8e07c:
    uVar3 = 0;
    iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
    uVar4 = *(uint *)(iVar1 + 0x4c);
    if (uVar4 == 0xffffffff) {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(auStack_28,iVar1,uVar6,abStack_34[0],iVar8,uVar9,uVar10)
      ;
      piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(auStack_28,&DAT_71204b20);
      uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
      thunk_foeUZaYNSPyOrNM_GcbNrfl(auStack_28);
      *(uint *)(iVar1 + 0x4c) = uVar4;
    }
  }
  thunk_IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ
            (abStack_34,uVar3,iVar5,uVar4 & 0xff);
LAB_71a8e0e4:
  uVar6 = uStack_2c;
  if ((abStack_34[0] & 1) == 0) {
    uVar6 = (uint)abStack_34 | 1;
    uStack_30 = (uint)(abStack_34[0] >> 1);
  }
  uVar3 = FUN_71a53350(param_1,uVar6,uStack_30);
  if ((abStack_34[0] & 1) != 0) {
    thunk_qNQrlu(uStack_2c);
  }
  return uVar3;
}


// =========================================================================
// Function: wkXIzATTaLJudTONKWPclBoZvYIhHzKoK
// Entry: 0x71a8e168 | Size: 444 bytes
// =========================================================================

int * wkXIzATTaLJudTONKWPclBoZvYIhHzKoK(int *param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  if (((param_2 < 1.7014118e+38) && (-1.7014118e+38 <= param_2)) &&
     ((ABS(param_2) < INFINITY || (ABS(param_2) != INFINITY)))) {
    if (0.0 <= param_2) {
      if (-1.0 < param_2) {
        if (1.8446744e+19 <= param_2) {
          imp_ldexpf(param_2,0xffffffc0);
          uVar8 = FUN_71ba18a0();
          uVar2 = FUN_71ba1c88();
          fVar7 = (float)imp_ldexpf(uVar2,0x40);
          param_2 = param_2 - fVar7;
        }
        else {
          uVar8 = 0;
        }
        uVar10 = FUN_71ba18a0(param_2);
        *(undefined8 *)param_1 = uVar10;
        *(undefined8 *)(param_1 + 2) = uVar8;
        return param_1;
      }
    }
    else if ((param_2 < 1.0) && ((param_2 < -INFINITY || (param_2 != -INFINITY)))) {
      fVar7 = -param_2;
      uVar6 = 0xffffffff;
      if (param_2 <= -1.8446744e+19) {
        imp_ldexpf(fVar7,0xffffffc0);
        uVar8 = FUN_71ba18a0();
        uVar2 = FUN_71ba1c88();
        fVar3 = (float)imp_ldexpf(uVar2,0x40);
        uVar4 = ~(uint)((ulonglong)uVar8 >> 0x20);
        uVar6 = ~(uint)uVar8;
        fVar7 = fVar7 - fVar3;
      }
      else {
        uVar4 = 0xffffffff;
      }
      lVar9 = FUN_71ba18a0(fVar7);
      uVar5 = uVar4 + (0xfffffffe < uVar6);
      uVar1 = uVar6 + 1;
      if (lVar9 != 0) {
        uVar5 = uVar4;
        uVar1 = uVar6;
      }
      *param_1 = -(int)lVar9;
      param_1[1] = -((int)((ulonglong)lVar9 >> 0x20) + (uint)((int)lVar9 != 0));
      param_1[2] = uVar1;
      param_1[3] = uVar5;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,100,
                  s_uint128_absl__lts_20240722___ano_7006b3a4,
                  s_std__isfinite_v_____v_>__1_____s_70068bb5);
  }
                    /* WARNING: Subroutine does not return */
  imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0xf7,
                s_int128_absl__lts_20240722___anon_7006fae2,
                s_std__isfinite_v______std__numeri_70071451);
}


// =========================================================================
// Function: ifXegeWxqcXLRuzDHl_guGzAOtYMyygCh
// Entry: 0x71a8e358 | Size: 264 bytes
// =========================================================================

int * ifXegeWxqcXLRuzDHl_guGzAOtYMyygCh
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if ((ABS((double)CONCAT44(param_4,param_3)) != INFINITY) &&
     (!NAN(ABS((double)CONCAT44(param_4,param_3))))) {
    dVar4 = (double)CONCAT44(param_4,param_3);
    dVar5 = (double)imp_ldexp(0,0x3ff00000,0x7f);
    if ((-dVar5 <= dVar4) && (dVar4 < dVar5)) {
      if (0.0 <= dVar4) {
        FUN_71a8d3d0(param_3,&iStack_28);
      }
      else {
        FUN_71a8d3d0(SUB84(-dVar4,0),&iStack_28);
        uVar2 = -(uStack_1c + (uStack_20 != 0));
        uVar1 = -uStack_20;
        if (iStack_28 != 0 || iStack_24 != 0) {
          uVar2 = ~uStack_1c;
          uVar1 = ~uStack_20;
        }
        uStack_20 = uVar1;
        bVar3 = iStack_28 != 0;
        iStack_28 = -iStack_28;
        iStack_24 = -(iStack_24 + (uint)bVar3);
        uStack_1c = uVar2;
      }
      param_1[2] = uStack_20;
      *param_1 = iStack_28;
      param_1[1] = iStack_24;
      param_1[3] = uStack_1c;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0xf7,
                s_int128_absl__lts_20240722___anon_70071d63,
                s_std__isfinite_v______std__numeri_70071451);
}


// =========================================================================
// Function: oyVpkrlrJDJmpDitHYMMrerVWgHnbEEwx
// Entry: 0x71a8e478 | Size: 488 bytes
// =========================================================================

int * oyVpkrlrJDJmpDitHYMMrerVWgHnbEEwx
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  dVar5 = (double)CONCAT44(param_4,param_3);
  if (((1.7014118346046923e+38 <= dVar5) || (dVar5 < -1.7014118346046923e+38)) ||
     ((INFINITY <= ABS((double)CONCAT44(param_4,param_3)) &&
      (ABS((double)CONCAT44(param_4,param_3)) == INFINITY)))) {
                    /* WARNING: Subroutine does not return */
    imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0xf7,
                  s_int128_absl__lts_20240722___anon_7006a63a,
                  s_std__isfinite_v______std__numeri_70071451);
  }
  if (0.0 <= dVar5) {
    if ((dVar5 < 3.402823669209385e+38) && (-1.0 < dVar5)) {
      if (1.8446744073709552e+19 <= dVar5) {
        imp_ldexp(param_3,param_4,0xffffffc0);
        uVar7 = FUN_71ba1838();
        uVar8 = FUN_71ba1c38();
        dVar6 = (double)imp_ldexp((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x40);
        dVar5 = dVar5 - dVar6;
      }
      else {
        uVar7 = 0;
      }
      uVar8 = FUN_71ba1838(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
      *(undefined8 *)param_1 = uVar8;
      *(undefined8 *)(param_1 + 2) = uVar7;
      return param_1;
    }
  }
  else if (((-3.402823669209385e+38 < dVar5) && (dVar5 < 1.0)) &&
          ((dVar5 < -INFINITY || (dVar5 != -INFINITY)))) {
    uVar4 = 0xffffffff;
    dVar6 = -dVar5;
    if (dVar5 <= -1.8446744073709552e+19) {
      imp_ldexp(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),0xffffffc0);
      uVar7 = FUN_71ba1838();
      uVar8 = FUN_71ba1c38();
      dVar5 = (double)imp_ldexp((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0x40);
      uVar2 = ~(uint)((ulonglong)uVar7 >> 0x20);
      uVar4 = ~(uint)uVar7;
      dVar6 = dVar6 - dVar5;
    }
    else {
      uVar2 = 0xffffffff;
    }
    lVar9 = FUN_71ba1838(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    uVar3 = uVar2 + (0xfffffffe < uVar4);
    uVar1 = uVar4 + 1;
    if (lVar9 != 0) {
      uVar3 = uVar2;
      uVar1 = uVar4;
    }
    *param_1 = -(int)lVar9;
    param_1[1] = -((int)((ulonglong)lVar9 >> 0x20) + (uint)((int)lVar9 != 0));
    param_1[2] = uVar1;
    param_1[3] = uVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,100,
                s_uint128_absl__lts_20240722___ano_70067164,
                s_std__isfinite_v_____v_>__1_____s_70068bb5);
}


// =========================================================================
// Function: pyhLTyMFNrCEqgAcqUMgbMpKr_cWpCyHuurbtwlV
// Entry: 0x71a8e6b8 | Size: 376 bytes
// =========================================================================

void pyhLTyMFNrCEqgAcqUMgbMpKr_cWpCyHuurbtwlV
               (int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_48 [16];
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_3 == 0 && param_4 == 0) {
    unaff_r4 = param_6 ^ 0x80000000;
  }
  uVar4 = param_10;
  if ((param_3 == 0 && param_4 == 0) && (param_5 == 0 && unaff_r4 == 0)) {
    uVar3 = param_7 & param_8;
    bVar5 = uVar3 == 0xffffffff;
    if (bVar5) {
      unaff_r5 = param_9 ^ 0xffffffff;
      uVar3 = param_10 ^ 0xffffffff;
    }
    if (bVar5 && (unaff_r5 == 0 && uVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0x109,
                    s_int128_absl__operator__int128__i_70062504,
                    s_lhs____Int128Min______rhs_____1_70068b95);
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_71a8e75c:
    uVar3 = -param_5;
    uVar2 = -(param_6 + (param_5 != 0));
    if (param_3 != 0 || param_4 != 0) {
      uVar2 = ~param_6;
      uVar3 = ~param_5;
    }
    bVar5 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + (uint)bVar5);
    if (-1 < (int)param_10) goto LAB_71a8e784;
  }
  else {
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    if ((int)param_6 < 0) goto LAB_71a8e75c;
    uVar3 = param_5;
    uVar2 = param_6;
    if (param_10 < 0x80000000) goto LAB_71a8e784;
  }
  uVar4 = -(param_10 + (param_9 != 0));
  uVar1 = -param_9;
  if (param_7 != 0 || param_8 != 0) {
    uVar4 = ~param_10;
    uVar1 = ~param_9;
  }
  param_9 = uVar1;
  bVar5 = param_7 != 0;
  param_7 = -param_7;
  param_8 = -(param_8 + bVar5);
LAB_71a8e784:
  iStack_38 = 0;
  FUN_71a8d640(param_3,param_4,uVar3,uVar2,param_7,param_8,param_9,uVar4,&iStack_38,auStack_48);
  if (-((int)param_6 >> 0x1f) == -((int)param_10 >> 0x1f)) {
    *param_1 = iStack_38;
    param_1[1] = iStack_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    return;
  }
  uVar4 = -uStack_30;
  uVar3 = -(uStack_2c + (uStack_30 != 0));
  if (iStack_38 != 0 || iStack_34 != 0) {
    uVar3 = ~uStack_2c;
    uVar4 = ~uStack_30;
  }
  *param_1 = -iStack_38;
  param_1[1] = -(iStack_34 + (uint)(iStack_38 != 0));
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  return;
}


// =========================================================================
// Function: bJebgfgjLkDCVInkeFaCCHxMN_mWnuXXhSO_WDWx
// Entry: 0x71a8e83c | Size: 388 bytes
// =========================================================================

void bJebgfgjLkDCVInkeFaCCHxMN_mWnuXXhSO_WDWx
               (int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,uint param_6,
               uint param_7,uint param_8,uint param_9,uint param_10)

{
  uint unaff_r4;
  uint unaff_r5;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 auStack_38 [20];
  
  if (param_3 == 0 && param_4 == 0) {
    unaff_r4 = param_6 ^ 0x80000000;
  }
  if ((param_3 == 0 && param_4 == 0) && (param_5 == 0 && unaff_r4 == 0)) {
    uVar2 = param_7 & param_8;
    bVar3 = uVar2 == 0xffffffff;
    if (bVar3) {
      unaff_r5 = param_9 ^ 0xffffffff;
      uVar2 = param_10 ^ 0xffffffff;
    }
    if (bVar3 && (unaff_r5 == 0 && uVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      imp___assert2(s_____webrtc_apm_src_subprojects_a_7006a5ee,0x115,
                    s_int128_absl__operator__int128__i_700616fc,
                    s_lhs____Int128Min______rhs_____1_70068b95);
    }
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  else {
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    if (-1 < (int)param_6) {
      bVar3 = false;
      goto joined_r0x71a8e8ec;
    }
  }
  uVar2 = -param_5;
  uVar1 = -(param_6 + (param_5 != 0));
  if (param_3 != 0 || param_4 != 0) {
    uVar1 = ~param_6;
    uVar2 = ~param_5;
  }
  bVar4 = param_3 != 0;
  param_3 = -param_3;
  bVar3 = true;
  param_4 = -(param_4 + (uint)bVar4);
  param_5 = uVar2;
  param_6 = uVar1;
joined_r0x71a8e8ec:
  uVar2 = param_9;
  if (0x7fffffff < param_10) {
    uVar2 = -param_9;
    uVar1 = -(param_10 + (param_9 != 0));
    if (param_7 != 0 || param_8 != 0) {
      uVar2 = ~param_9;
      uVar1 = ~param_10;
    }
    param_10 = uVar1;
    bVar4 = param_7 != 0;
    param_7 = -param_7;
    param_8 = -(param_8 + bVar4);
  }
  iStack_48 = 0;
  FUN_71a8d640(param_3,param_4,param_5,param_6,param_7,param_8,uVar2,param_10,auStack_38,&iStack_48)
  ;
  if (bVar3) {
    uVar2 = -uStack_40;
    uVar1 = -(uStack_3c + (uStack_40 != 0));
    if (iStack_48 != 0 || iStack_44 != 0) {
      uVar1 = ~uStack_3c;
      uVar2 = ~uStack_40;
    }
    *param_1 = -iStack_48;
    param_1[1] = -(iStack_44 + (uint)(iStack_48 != 0));
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    return;
  }
  *param_1 = iStack_48;
  param_1[1] = iStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  return;
}


// =========================================================================
// Function: ZPHrTJJXDtAXBoezi_qovdVRejdoArcgXdGglfuvK
// Entry: 0x71a8e9cc | Size: 232 bytes
// =========================================================================

void ZPHrTJJXDtAXBoezi_qovdVRejdoArcgXdGglfuvK(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  byte abStack_2c [4];
  uint uStack_28;
  uint uStack_24;
  
  uVar2 = param_2[2];
  *param_1 = 0;
  uVar6 = param_2[3];
  param_1[1] = 0;
  param_1[2] = 0;
  if ((int)uVar6 < 0) {
    thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
              (param_1,&DAT_7006e8be);
    uVar2 = param_2[2];
    uVar6 = param_2[3];
    iVar5 = *param_2;
    iVar4 = param_2[1];
    if ((int)uVar6 < 0) {
      uVar3 = -uVar2;
      uVar1 = -(uVar6 + (uVar2 != 0));
      if (iVar5 != 0 || iVar4 != 0) {
        uVar3 = ~uVar2;
        uVar1 = ~uVar6;
      }
      uVar6 = uVar1;
      bVar7 = iVar5 != 0;
      iVar5 = -iVar5;
      iVar4 = -(iVar4 + (uint)bVar7);
      uVar2 = uVar3;
    }
  }
  else {
    iVar5 = *param_2;
    iVar4 = param_2[1];
  }
  FUN_71a8daec(abStack_2c,iVar4,iVar5,iVar4,uVar2,uVar6,2);
  uVar6 = uStack_24;
  if ((abStack_2c[0] & 1) == 0) {
    uVar6 = (uint)abStack_2c | 1;
    uStack_28 = (uint)(abStack_2c[0] >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (param_1,uVar6,uStack_28);
  if ((abStack_2c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_24);
  }
  return;
}


// =========================================================================
// Function: hrwBpSlifqUbxYxUwvVgIYEhYGkkIWDb_vARAspYiINhozPEWVtGMZBvmnRtMoxZCIiRqaEarTmyFYcjdBLGGHON
// Entry: 0x71a8eb14 | Size: 936 bytes
// =========================================================================

undefined4
hrwBpSlifqUbxYxUwvVgIYEhYGkkIWDb_vARAspYiINhozPEWVtGMZBvmnRtMoxZCIiRqaEarTmyFYcjdBLGGHON
          (int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte abStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  char *pcStack_28;
  
  uVar8 = *(uint *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4);
  uStack_2c = 0;
  uStack_30 = 0;
  pcStack_28 = (char *)0x0;
  uVar4 = param_5;
  uVar7 = param_6;
  iVar1 = param_3;
  iVar6 = param_4;
  if ((uVar8 & 0x48) == 0) {
    if ((int)param_6 < 0) {
      thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
                (&uStack_30,&DAT_7006e8be);
      uVar4 = -param_5;
      uVar7 = -(param_6 + (param_5 != 0));
      if (param_3 != 0 || param_4 != 0) {
        uVar7 = ~param_6;
        uVar4 = ~param_5;
      }
      iVar1 = -param_3;
      iVar6 = -(param_4 + (uint)(param_3 != 0));
    }
    else if ((uVar8 & 0x800) != 0) {
      thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
                (&uStack_30,&DAT_70062dc2);
    }
  }
  FUN_71a8daec(abStack_3c,uVar7,iVar1,iVar6,uVar4,uVar7,
               *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 4));
  uVar4 = uStack_34;
  if ((abStack_3c[0] & 1) == 0) {
    uVar4 = (uint)abStack_3c | 1;
    uStack_38 = (uint)(abStack_3c[0] >> 1);
  }
  thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
            (&uStack_30,uVar4,uStack_38);
  if ((abStack_3c[0] & 1) != 0) {
    thunk_qNQrlu(uStack_34);
  }
  iVar1 = *param_1;
  uVar4 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    uVar4 = uStack_30 >> 1 & 0x7f;
  }
  uVar7 = *(uint *)((int)param_1 + *(int *)(iVar1 + -0xc) + 0xc);
  *(undefined4 *)((int)param_1 + *(int *)(iVar1 + -0xc) + 0xc) = 0;
  if (uVar7 <= uVar4) goto LAB_71a8ee70;
  iVar6 = uVar7 - uVar4;
  if ((uVar8 & 0xb0) == 0x10) {
    if ((uVar8 & 0x48) == 0) {
      pcVar5 = pcStack_28;
      if ((uStack_30 & 1) == 0) {
        pcVar5 = (char *)((uint)&uStack_30 | 1);
      }
      if (*pcVar5 != '-' && *pcVar5 != '+') goto LAB_71a8eca8;
      uVar3 = 1;
      iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
      uVar4 = *(uint *)(iVar1 + 0x4c);
      if (uVar4 != 0xffffffff) goto LAB_71a8ee5c;
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(abStack_3c,iVar1);
      piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(abStack_3c,&DAT_71204b20);
      uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
LAB_71a8ee4c:
      thunk_foeUZaYNSPyOrNM_GcbNrfl(abStack_3c);
      *(uint *)(iVar1 + 0x4c) = uVar4;
    }
    else {
LAB_71a8eca8:
      if (((uVar8 & 0x24a) == 0x208) &&
         ((param_3 != 0 || param_5 != 0) || (param_4 != 0 || param_6 != 0))) {
        uVar3 = 2;
        iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
        uVar4 = *(uint *)(iVar1 + 0x4c);
        if (uVar4 == 0xffffffff) {
          thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(abStack_3c,iVar1);
          piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(abStack_3c,&DAT_71204b20);
          uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
          goto LAB_71a8ee4c;
        }
      }
      else {
        uVar3 = 0;
        iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
        uVar4 = *(uint *)(iVar1 + 0x4c);
        if (uVar4 == 0xffffffff) {
          thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(abStack_3c,iVar1);
          piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(abStack_3c,&DAT_71204b20);
          uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
          goto LAB_71a8edd4;
        }
      }
    }
  }
  else {
    if ((uVar8 & 0xb0) == 0x20) {
      iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
      uVar4 = *(uint *)(iVar1 + 0x4c);
      if (uVar4 == 0xffffffff) {
        thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(abStack_3c,iVar1);
        piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(abStack_3c,&DAT_71204b20);
        uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
        thunk_foeUZaYNSPyOrNM_GcbNrfl(abStack_3c);
        *(uint *)(iVar1 + 0x4c) = uVar4;
      }
      thunk_jcuNLRRlCfuPrzIPOHumoSSGKRcRmDlL_tvDiEoZOwzUcWsVYCrRxnUeXVrTNLRofvyWjcgnFTtx
                (&uStack_30,iVar6,uVar4 & 0xff);
      goto LAB_71a8ee70;
    }
    uVar3 = 0;
    iVar1 = (int)param_1 + *(int *)(iVar1 + -0xc);
    uVar4 = *(uint *)(iVar1 + 0x4c);
    if (uVar4 == 0xffffffff) {
      thunk_CpuXvBQGamAvMZNVRbziGWJdpmJQpfQ(abStack_3c,iVar1);
      piVar2 = (int *)thunk_AEALpBotnRElQydgnMVuXqQwTsVGCAtOUgURQjlw(abStack_3c,&DAT_71204b20);
      uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
LAB_71a8edd4:
      uVar3 = 0;
      thunk_foeUZaYNSPyOrNM_GcbNrfl(abStack_3c);
      *(uint *)(iVar1 + 0x4c) = uVar4;
    }
  }
LAB_71a8ee5c:
  thunk_IaVwlrqshyhaNkiHBdQdtNsKLAsmzrcWNcGqnnFAwBWsOAbTjecyioTmDECtwzhFrfnZWvHOQtyKJ
            (&uStack_30,uVar3,iVar6,uVar4 & 0xff);
LAB_71a8ee70:
  pcVar5 = pcStack_28;
  uVar4 = uStack_2c;
  if ((uStack_30 & 1) == 0) {
    uVar4 = uStack_30 >> 1 & 0x7f;
    pcVar5 = (char *)((uint)&uStack_30 | 1);
  }
  uVar3 = FUN_71a53350(param_1,pcVar5,uVar4);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(pcStack_28);
  }
  return uVar3;
}


// =========================================================================
// Function: hfXeRIcZlTcpPxeBtFYPyYVHg_wdHScSRTIbMMisTMcpdjYALNrUkSshlnJow
// Entry: 0x71a90694 | Size: 924 bytes
// =========================================================================

undefined4 *
hfXeRIcZlTcpPxeBtFYPyYVHg_wdHScSRTIbMMisTMcpdjYALNrUkSshlnJow(undefined4 *param_1,int param_2)

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
// Function: RBEmiQLSlaFHoTAbAZaDKpEXmqMhyczkNqdHYOqN
// Entry: 0x71a90a6c | Size: 4 bytes
// =========================================================================

void RBEmiQLSlaFHoTAbAZaDKpEXmqMhyczkNqdHYOqN(void)

{
  return;
}


// =========================================================================
// Function: CpeNzledvzesgieYPf_nuxQMQpmrDLrIY_TwIJSQYGKE_bOzoUtRsVmH
// Entry: 0x71a90a70 | Size: 240 bytes
// =========================================================================

void CpeNzledvzesgieYPf_nuxQMQpmrDLrIY_TwIJSQYGKE_bOzoUtRsVmH(int *param_1,int param_2)

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
// Function: FEobUAPBhp_MqGpXpmygfXJnhpiqNRrRfQSjipdEvHbDVczhxCwthQGitqmaa
// Entry: 0x71a90b60 | Size: 256 bytes
// =========================================================================

void FEobUAPBhp_MqGpXpmygfXJnhpiqNRrRfQSjipdEvHbDVczhxCwthQGitqmaa(int *param_1)

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
// Function: svdUsETwTZtZLIBpPayFsmIRPBZysSOmxtOkfzn_Wbw_OBlpnudBmNC_tyceLsRJjXDLeOqx
// Entry: 0x71a90c60 | Size: 152 bytes
// =========================================================================

void svdUsETwTZtZLIBpPayFsmIRPBZysSOmxtOkfzn_Wbw_OBlpnudBmNC_tyceLsRJjXDLeOqx(undefined4 param_1)

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
// Function: SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ
// Entry: 0x71a91488 | Size: 8 bytes
// =========================================================================

void SJCbFLPwsPOxVEwphuNvyMuRSRkYnVHVavoQuLDHUWgATwcdhchtudQ(void)

{
  thunk_apkdSINaaLOvFXFsIWNUbEzmieskxGGIbRXhLEURnBN_GMZW(2);
  return;
}


// =========================================================================
// Function: FUN_71a914c4
// Entry: 0x71a914c4 | Size: 104 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */

void FUN_71a914c4(void)

{
  undefined4 *puVar1;
  undefined1 in_ZR;
  undefined1 in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  puVar1 = (undefined4 *)thunk_M_yTNhCqFFbumYLFAiCnREzq(4);
  *puVar1 = &DAT_70b13994;
  thunk_eLYPBHXbPSP(puVar1,&DAT_70b139a0,0x71b37ed5);
  if ((bool)in_ZR) {
    coprocessor_movefromRt(0xe,2,5,in_cr6,in_cr8);
    coprocessor_function(0xe,5,5,in_cr15,in_cr6,in_cr12);
    coprocessor_function(0xe,5,5,in_cr15,in_cr6,in_cr8);
  }
  coprocessor_store(0xf,in_cr5,0x71a913ec);
  if ((bool)in_OV) {
    FUN_70fff220();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// =========================================================================
// Function: oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
// Entry: 0x71a915a8 | Size: 12 bytes
// =========================================================================

void oOtKRkPuaTm_RfIBjRkXhukmdut_MthTDBJMVsRjoCgvEWPLcdU_BCogbjPTbvDRZkFnGhyvDKNtiQAfEUitieIqwpeqAIFjLLNXHCx
               (void)

{
  thunk_qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
            ();
  return;
}


// =========================================================================
// Function: qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
// Entry: 0x71a915b4 | Size: 248 bytes
// =========================================================================

int qhyJHfkAWtcPqTDBve_JgJXYPcnWuPsXBXadzeJrkwatscHBYdmoqaNTAEIqKQkNRsYuOItmWB_hixbLaSIEGsqHEhosWHCSLvAqrkykMNLLT
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  int iStack_28;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    iVar2 = FUN_71a921fc(iVar1 + 4,param_1,param_2);
    if (iVar1 + 8 == iVar2) {
      iVar2 = thunk_MwhHq(0x30);
      imp_pthread_mutexattr_init(auStack_30);
      imp_pthread_mutex_init(iVar2,auStack_30);
      imp_pthread_mutexattr_destroy(auStack_30);
      *(undefined4 *)(iVar2 + 4) = param_3;
      *(undefined4 *)(iVar2 + 8) = param_4;
      thunk_uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
                (iVar2 + 0xc,param_1,param_2,param_3,param_4,param_5);
      iStack_28 = iVar2;
      FUN_71a922f8(auStack_30,iVar1 + 4,param_1,param_2,&iStack_28);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    imp_pthread_mutex_unlock(iVar1);
    return iVar2;
  }
  return 0;
}


// =========================================================================
// Function: tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
// Entry: 0x71a916e4 | Size: 248 bytes
// =========================================================================

int tOdMOakzFCkDzvAlGmXyEZwQjEjnBNofJARUhSkXwVIyhKh_sDsxzIVynDVWHDPMZCdafXjRInffgTQhxaBAuoZWjIX_lHQsaRWyzwEMLE
              (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [8];
  int iStack_24;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    iVar2 = FUN_71a921fc(iVar1 + 4,param_1,param_2);
    if (iVar1 + 8 == iVar2) {
      iVar2 = thunk_MwhHq(0x30);
      imp_pthread_mutexattr_init(auStack_2c);
      imp_pthread_mutex_init(iVar2,auStack_2c);
      imp_pthread_mutexattr_destroy(auStack_2c);
      *(undefined4 *)(iVar2 + 4) = 1;
      *(int *)(iVar2 + 8) = param_3;
      thunk_uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
                (iVar2 + 0xc,param_1,param_2,1,param_3,param_3 + 1);
      iStack_24 = iVar2;
      FUN_71a922f8(auStack_2c,iVar1 + 4,param_1,param_2,&iStack_24);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    imp_pthread_mutex_unlock(iVar1);
    return iVar2;
  }
  return 0;
}


// =========================================================================
// Function: JHVwSatpZJKKOqlWbbrsYEBPobtcYuaAsUKnLBBDoXKPoiFrqmPObKGlawoeUFH_SbHbuCBjIlJWogfJQlzNGoMCORWxbFTpbJQIbFFLbrDPmXqp
// Entry: 0x71a91814 | Size: 4 bytes
// =========================================================================

int JHVwSatpZJKKOqlWbbrsYEBPobtcYuaAsUKnLBBDoXKPoiFrqmPObKGlawoeUFH_SbHbuCBjIlJWogfJQlzNGoMCORWxbFTpbJQIbFFLbrDPmXqp
              (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2c [8];
  int iStack_24;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    iVar2 = FUN_71a921fc(iVar1 + 4,param_1,param_2);
    if (iVar1 + 8 == iVar2) {
      iVar2 = thunk_MwhHq(0x30);
      imp_pthread_mutexattr_init(auStack_2c);
      imp_pthread_mutex_init(iVar2,auStack_2c);
      imp_pthread_mutexattr_destroy(auStack_2c);
      *(undefined4 *)(iVar2 + 4) = 1;
      *(int *)(iVar2 + 8) = param_3;
      thunk_uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
                (iVar2 + 0xc,param_1,param_2,1,param_3,param_3 + 1);
      iStack_24 = iVar2;
      FUN_71a922f8(auStack_2c,iVar1 + 4,param_1,param_2,&iStack_24);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    imp_pthread_mutex_unlock(iVar1);
    return iVar2;
  }
  return 0;
}


// =========================================================================
// Function: vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj
// Entry: 0x71a91818 | Size: 320 bytes
// =========================================================================

void vsvXXDTqCgigxJSTnQh_UuMzwdKDOtsuj_lQISlxCfabNzQdRj(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 8);
  imp_pthread_mutex_lock();
  puVar7 = (undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined4 *)*puVar7;
  iVar8 = iVar8 + -1;
  if (iVar9 < param_2) {
    param_2 = iVar9;
  }
  if (param_2 <= iVar8) {
    param_2 = iVar8;
  }
  if (*(int *)(param_1 + 0x2c) == 300) {
    puVar3 = puVar7;
    puVar2 = puVar1;
    if (puVar1 == (undefined4 *)0x0) goto LAB_71a9194c;
    do {
      puVar4 = puVar2;
      puVar6 = puVar4;
      if ((int)puVar4[4] < param_2) {
        puVar6 = puVar4 + 1;
        puVar4 = puVar3;
      }
      puVar3 = puVar4;
      puVar2 = (undefined4 *)*puVar6;
    } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
    if ((puVar4 == puVar7) || (param_2 < (int)puVar4[4])) goto LAB_71a9194c;
  }
  while (puVar3 = puVar7, puVar1 != (undefined4 *)0x0) {
    while (puVar2 = puVar1, (int)puVar2[4] <= param_2) {
      if (param_2 <= (int)puVar2[4]) goto LAB_71a91940;
      puVar1 = (undefined4 *)puVar2[1];
      if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
        puVar7 = puVar2 + 1;
        puVar3 = puVar2;
        goto LAB_71a918e8;
      }
    }
    puVar7 = puVar2;
    puVar1 = (undefined4 *)*puVar2;
  }
LAB_71a918e8:
  puVar2 = (undefined4 *)thunk_MwhHq(0x18);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar3;
  *puVar7 = puVar2;
  piVar5 = *(int **)(param_1 + 0x24);
  puVar2[5] = 0;
  puVar2[4] = param_2;
  puVar1 = puVar2;
  if (*piVar5 != 0) {
    *(int *)(param_1 + 0x24) = *piVar5;
    puVar1 = (undefined4 *)*puVar7;
  }
  FUN_71a4128a(*(undefined4 *)(param_1 + 0x28),puVar1);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
LAB_71a91940:
  puVar2[5] = puVar2[5] + 1;
LAB_71a9194c:
  imp_pthread_mutex_unlock(param_1);
  return;
}


// =========================================================================
// Function: uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
// Entry: 0x71a9196c | Size: 172 bytes
// =========================================================================

int * uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
                (int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  
  if (0xfffffff7 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(param_1);
  }
  if (param_3 < 0xb) {
    puVar1 = (undefined1 *)((int)param_1 + 1);
    *(char *)param_1 = (char)(param_3 << 1);
    if (param_3 == 0) goto LAB_71a919e0;
  }
  else {
    puVar1 = (undefined1 *)thunk_MwhHq((param_3 | 7) + 1);
    *param_1 = (param_3 | 7) + 2;
    param_1[1] = param_3;
    param_1[2] = (int)puVar1;
  }
  imp___aeabi_memmove(puVar1,param_2,param_3);
LAB_71a919e0:
  puVar1[param_3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = (int)(param_1 + 7);
  return param_1;
}


// =========================================================================
// Function: AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE
// Entry: 0x71a91a18 | Size: 52 bytes
// =========================================================================

byte * AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(byte *param_1)

{
  FUN_71a93d4c(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  if ((*param_1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}


// =========================================================================
// Function: LhEhATBBfqc_kEtonYQKkxAJkQu
// Entry: 0x71a91a4c | Size: 196 bytes
// =========================================================================

void LhEhATBBfqc_kEtonYQKkxAJkQu(void)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    return;
  }
  iVar2 = thunk_MwhHq(0x10);
  imp_pthread_mutexattr_init(auStack_14);
  imp_pthread_mutex_init(iVar2,auStack_14);
  imp_pthread_mutexattr_destroy(auStack_14);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 **)(iVar2 + 4) = (undefined4 *)(iVar2 + 8);
  if (DAT_71204860 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x71204860);
    } while (!bVar1);
    DAT_71204860 = iVar2;
    DataMemoryBarrier(0xb);
    return;
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  FUN_71a925cc(*(undefined4 *)(iVar2 + 8));
  imp_pthread_mutex_destroy(iVar2);
  thunk_qNQrlu(iVar2);
  return;
}


// =========================================================================
// Function: bzjztDgzcWBLXRuVtoZzkiOgdidmdpdBvkvaNrt_mbLBOTVYaFTOcRvvTzngcqaEhovuaciRCTSkCoGreOnlZ_FAawAbeZOVjHPcnXacHTgVEy_MqQXNSNayd_Ps_QXWMlvuKNJxijytTjzzEcGlLaSgmRPWrPsTMcIxkKgchCZZpoEAgqBIIbZOEvJenKm_oxlBVallgAZLFcmPHZpXLvzgwuFmXpyk
// Entry: 0x71a91b24 | Size: 524 bytes
// =========================================================================

void bzjztDgzcWBLXRuVtoZzkiOgdidmdpdBvkvaNrt_mbLBOTVYaFTOcRvvTzngcqaEhovuaciRCTSkCoGreOnlZ_FAawAbeZOVjHPcnXacHTgVEy_MqQXNSNayd_Ps_QXWMlvuKNJxijytTjzzEcGlLaSgmRPWrPsTMcIxkKgchCZZpoEAgqBIIbZOEvJenKm_oxlBVallgAZLFcmPHZpXLvzgwuFmXpyk
               (undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  ulonglong uStack_40;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_2c [8];
  
  puVar6 = param_1 + 1;
  FUN_71a9415c(param_1,*puVar6);
  *puVar6 = 0;
  *param_1 = puVar6;
  param_1[2] = 0;
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    piVar12 = *(int **)(iVar1 + 4);
    if (piVar12 != (int *)(iVar1 + 8)) {
      do {
        iVar11 = piVar12[7];
        imp_pthread_mutex_lock(iVar11);
        if (*(int *)(iVar11 + 0x2c) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = thunk_MwhHq(0x24);
          iVar5 = *(int *)(iVar11 + 0x14);
          uVar7 = *(uint *)(iVar11 + 0x10);
          if ((*(byte *)(iVar11 + 0xc) & 1) == 0) {
            iVar5 = iVar11 + 0xd;
            uVar7 = (uint)(*(byte *)(iVar11 + 0xc) >> 1);
          }
          thunk_uXDnqJECxCoMBJ_RycOVUdDqmiIzH_BqIguZZJjVNdSZluspZUHcVSXXVRwafJkDcrderbSWEKqfauXYgaApuuShLH
                    (iVar2,iVar5,uVar7,*(undefined4 *)(iVar11 + 0x18),*(undefined4 *)(iVar11 + 0x1c)
                     ,*(undefined4 *)(iVar11 + 0x20));
          uVar3 = *(undefined4 *)(iVar11 + 0x24);
          puVar6 = (undefined4 *)(iVar2 + 0x18);
          *(undefined4 *)(iVar11 + 0x24) = *puVar6;
          piVar8 = (int *)(iVar2 + 0x1c);
          iVar5 = *piVar8;
          *puVar6 = uVar3;
          piVar4 = (int *)(iVar11 + 0x28);
          iVar13 = *piVar4;
          iVar10 = *(int *)(iVar2 + 0x20);
          *piVar4 = iVar5;
          piVar9 = (int *)(iVar5 + 8);
          iVar5 = *(int *)(iVar11 + 0x2c);
          if (iVar10 == 0) {
            piVar9 = (int *)(iVar11 + 0x24);
          }
          *piVar8 = iVar13;
          *(int *)(iVar11 + 0x2c) = iVar10;
          *piVar9 = (int)piVar4;
          *(int *)(iVar2 + 0x20) = iVar5;
          if (iVar5 != 0) {
            puVar6 = (undefined4 *)(*piVar8 + 8);
          }
          *puVar6 = piVar8;
        }
        imp_pthread_mutex_unlock(iVar11);
        if (iVar2 != 0) {
          if ((*(ulonglong *)(piVar12 + 4) & 1) == 0) {
            uStack_40 = *(ulonglong *)(piVar12 + 4);
            iStack_38 = piVar12[6];
          }
          else {
            FUN_712f6d58(&uStack_40,piVar12[6],piVar12[5]);
          }
          iStack_34 = iVar2;
          thunk_uEluOtATSLBrxrLLJAkMtjFkBaaFydmwhHiSwiABrhYLyflcftzHpGYAdmQgxZYZXcqQOJYWZqpDMSyhUwMtlbgotkNhKmLhOMaZUZSjHqvqqEnZpNSQDaFrndNBAABsuVUwMYAlkAWmWfOFqBdHemXIFkpRPdLiaOCAZ_kMiOnqXyRoIpZfUfkaWOyOWngbLaGKGnawgcwGoNujEymnOHSVEdadFDzTzXuwGJEBRdtNWnTHBFUEgheGgnIsXNpxRONmWCNAWpbOUMDQTbSHTgsdTrMgv_KNQsNRGuwwgIrwylKLjTDGQyZmYqFIIYIVydTuAUkfxunCXOVtucVtbMsgcqfqsRBtztcDRtwkoejyl
                    (auStack_2c,param_1,&uStack_40,&uStack_40);
          iVar11 = iStack_34;
          iStack_34 = 0;
          if (iVar11 != 0) {
            thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(iVar11);
            thunk_qNQrlu(iVar11);
          }
          if ((uStack_40 & 1) != 0) {
            thunk_qNQrlu(iStack_38);
          }
        }
        piVar4 = (int *)piVar12[1];
        piVar8 = piVar12;
        if ((int *)piVar12[1] == (int *)0x0) {
          do {
            piVar12 = (int *)piVar8[2];
            bVar14 = (int *)*piVar12 != piVar8;
            piVar8 = piVar12;
          } while (bVar14);
        }
        else {
          do {
            piVar12 = piVar4;
            piVar4 = (int *)*piVar12;
          } while ((int *)*piVar12 != (int *)0x0);
        }
      } while (piVar12 != (int *)(iVar1 + 8));
    }
    imp_pthread_mutex_unlock(iVar1);
  }
  return;
}


// =========================================================================
// Function: cpgZfWGiHZYfWhQEAhmIwHwTnD
// Entry: 0x71a91d88 | Size: 192 bytes
// =========================================================================

void cpgZfWGiHZYfWhQEAhmIwHwTnD(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    piVar4 = *(int **)(iVar1 + 4);
    while (piVar4 != (int *)(iVar1 + 8)) {
      iVar5 = piVar4[7];
      imp_pthread_mutex_lock(iVar5);
      puVar6 = (undefined4 *)(iVar5 + 0x28);
      FUN_71a93d4c(iVar5 + 0x24,*puVar6);
      *puVar6 = 0;
      *(undefined4 **)(iVar5 + 0x24) = puVar6;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      imp_pthread_mutex_unlock(iVar5);
      piVar2 = (int *)piVar4[1];
      piVar3 = piVar4;
      if ((int *)piVar4[1] == (int *)0x0) {
        do {
          piVar4 = (int *)piVar3[2];
          bVar7 = (int *)*piVar4 != piVar3;
          piVar3 = piVar4;
        } while (bVar7);
      }
      else {
        do {
          piVar4 = piVar2;
          piVar2 = (int *)*piVar4;
        } while ((int *)*piVar4 != (int *)0x0);
      }
    }
    imp_pthread_mutex_unlock(iVar1);
  }
  return;
}


// =========================================================================
// Function: AXlxyqvDXymMUkbNhyzvuQTm_RpFoDQcTRoxKTOfQWNajmUw_cGJJZSHXKZKNelwHYULumFMfzMRrsEHBnXS
// Entry: 0x71a91e64 | Size: 212 bytes
// =========================================================================

int AXlxyqvDXymMUkbNhyzvuQTm_RpFoDQcTRoxKTOfQWNajmUw_cGJJZSHXKZKNelwHYULumFMfzMRrsEHBnXS
              (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    iVar3 = FUN_71a92644(iVar1 + 4,param_1,param_2);
    if (iVar1 + 8 == iVar3) {
      iVar3 = 0;
    }
    else {
      iVar8 = *(int *)(iVar3 + 0x1c);
      imp_pthread_mutex_lock(iVar8);
      iVar3 = 0;
      piVar6 = (int *)(iVar8 + 0x28);
      piVar4 = piVar6;
      piVar2 = (int *)*piVar6;
      if ((int *)*piVar6 != (int *)0x0) {
        do {
          piVar5 = piVar2;
          piVar7 = piVar5;
          if (piVar5[4] < param_3) {
            piVar7 = piVar5 + 1;
            piVar5 = piVar4;
          }
          piVar4 = piVar5;
          piVar2 = (int *)*piVar7;
        } while ((int *)*piVar7 != (int *)0x0);
        if ((piVar5 != piVar6) && (piVar5[4] <= param_3)) {
          iVar3 = piVar5[5];
        }
      }
      imp_pthread_mutex_unlock(iVar8);
    }
    imp_pthread_mutex_unlock(iVar1);
    return iVar3;
  }
  return 0;
}


// =========================================================================
// Function: nDZReCPJzhiSYYaksMxnHOAICjSaNCRkXFHTpCKQLcZ_OiLTmmRhCDIQkGSuPQmehCvYBfMwZtQWMQSLxyzRO
// Entry: 0x71a91f54 | Size: 224 bytes
// =========================================================================

int nDZReCPJzhiSYYaksMxnHOAICjSaNCRkXFHTpCKQLcZ_OiLTmmRhCDIQkGSuPQmehCvYBfMwZtQWMQSLxyzRO
              (undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    iVar4 = FUN_71a92644(iVar2 + 4,param_1,param_2);
    if (iVar2 + 8 == iVar4) {
      iVar4 = 0;
    }
    else {
      iVar7 = *(int *)(iVar4 + 0x1c);
      imp_pthread_mutex_lock(iVar7);
      piVar5 = *(int **)(iVar7 + 0x24);
      iVar4 = 0;
      while (piVar5 != (int *)(iVar7 + 0x28)) {
        piVar1 = piVar5 + 5;
        piVar6 = piVar5;
        piVar3 = (int *)piVar5[1];
        if ((int *)piVar5[1] == (int *)0x0) {
          do {
            piVar5 = (int *)piVar6[2];
            bVar8 = (int *)*piVar5 != piVar6;
            piVar6 = piVar5;
          } while (bVar8);
        }
        else {
          do {
            piVar5 = piVar3;
            piVar3 = (int *)*piVar5;
          } while ((int *)*piVar5 != (int *)0x0);
        }
        iVar4 = *piVar1 + iVar4;
      }
      imp_pthread_mutex_unlock(iVar7);
    }
    imp_pthread_mutex_unlock(iVar2);
    return iVar4;
  }
  return 0;
}


// =========================================================================
// Function: SANMUCMLPzjooeUwVTDJAyqRvQIsuYohV_ongqOTyqqHSzKsIhZ_vbkWGZDBokXahgAyMyLwB_DYCQdLvMN
// Entry: 0x71a92050 | Size: 148 bytes
// =========================================================================

undefined4
SANMUCMLPzjooeUwVTDJAyqRvQIsuYohV_ongqOTyqqHSzKsIhZ_vbkWGZDBokXahgAyMyLwB_DYCQdLvMN
          (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 == 0) {
    return 0xffffffff;
  }
  imp_pthread_mutex_lock(DAT_71204860);
  iVar2 = FUN_71a92644(iVar1 + 4,param_1,param_2);
  if (iVar1 + 8 == iVar2) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x1c);
    imp_pthread_mutex_lock(iVar2);
    if (*(int *)(iVar2 + 0x2c) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x10);
    }
    imp_pthread_mutex_unlock(iVar2);
  }
  imp_pthread_mutex_unlock(iVar1);
  return uVar3;
}


// =========================================================================
// Function: fGSKVxaEqeSZqdmtBuhMWHfreNYJlR_AQRLqLciarKVGHFs_VqJznWFAJCdXvKMsNHcnjSzBZXPNVVami
// Entry: 0x71a92100 | Size: 196 bytes
// =========================================================================

void fGSKVxaEqeSZqdmtBuhMWHfreNYJlR_AQRLqLciarKVGHFs_VqJznWFAJCdXvKMsNHcnjSzBZXPNVVami
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_71204860;
  DataMemoryBarrier(0xb);
  if (DAT_71204860 != 0) {
    imp_pthread_mutex_lock(DAT_71204860);
    iVar2 = FUN_71a92644(iVar1 + 4,param_2,param_3);
    if (iVar1 + 8 == iVar2) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = param_1 + 1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x1c);
      imp_pthread_mutex_lock(iVar2);
      uVar3 = *(undefined4 *)(iVar2 + 0x24);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = param_1 + 1;
      thunk_lOCcuBNUcTMrPwAfduqNxSBJlYcvwuwXTziQRxi_PnpqzJGPxNzfGabVsYmTuH_SMT_fHjjDJXhXOTjhheUJRvNNeBuklkVtAcbSJEyxCtJQlXpPnZDGzEeKcRvHe_vSIPNsTHUmddOknoYYpuqkbXMoCgUQcHSXJxIDYrqsPGUziEHTqH_uPNyyHEoRGyExq
                (param_1,uVar3,iVar2 + 0x28);
      imp_pthread_mutex_unlock(iVar2);
    }
    imp_pthread_mutex_unlock(iVar1);
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  return;
}


// =========================================================================
// Function: FUN_71a921fc
// Entry: 0x71a921fc | Size: 252 bytes
// =========================================================================

int * FUN_71a921fc(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 4);
  piVar5 = (int *)*piVar7;
  piVar6 = piVar7;
  if (piVar5 != (int *)0x0) {
    do {
      uVar4 = piVar5[5];
      iVar3 = piVar5[6];
      if ((*(byte *)(piVar5 + 4) & 1) == 0) {
        uVar4 = (uint)(*(byte *)(piVar5 + 4) >> 1);
        iVar3 = (int)piVar5 + 0x11;
      }
      uVar2 = uVar4;
      if (param_3 < uVar4) {
        uVar2 = param_3;
      }
      uVar2 = imp_memcmp(iVar3,param_2,uVar2);
      if (uVar2 == 0) {
        uVar2 = (uint)(uVar4 < param_3);
        uVar4 = uVar2 << 2;
      }
      else {
        uVar4 = uVar2 >> 0x1d & 4;
        uVar2 = uVar2 >> 0x1f;
      }
      piVar1 = (int *)((int)piVar5 + uVar4);
      if (uVar2 == 0) {
        piVar6 = piVar5;
      }
      piVar5 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (piVar6 != piVar7) {
      uVar4 = piVar6[5];
      iVar3 = piVar6[6];
      if ((*(byte *)(piVar6 + 4) & 1) == 0) {
        uVar4 = (uint)(*(byte *)(piVar6 + 4) >> 1);
        iVar3 = (int)piVar6 + 0x11;
      }
      uVar2 = param_3;
      if (uVar4 < param_3) {
        uVar2 = uVar4;
      }
      iVar3 = imp_memcmp(param_2,iVar3,uVar2);
      if (iVar3 == 0) {
        if (uVar4 <= param_3) {
          piVar7 = piVar6;
        }
        return piVar7;
      }
      if (-1 < iVar3) {
        piVar7 = piVar6;
      }
    }
  }
  return piVar7;
}


// =========================================================================
// Function: FUN_71a922f8
// Entry: 0x71a922f8 | Size: 580 bytes
// =========================================================================

void FUN_71a922f8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  piVar3 = (int *)thunk_MwhHq(0x20);
  piVar12 = param_2 + 1;
  if (0xfffffff7 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(piVar3 + 4);
  }
  if (param_4 < 0xb) {
    iVar6 = (int)piVar3 + 0x11;
    *(char *)(piVar3 + 4) = (char)(param_4 << 1);
    if (param_4 == 0) goto LAB_71a92398;
  }
  else {
    uVar8 = (param_4 | 7) + 1;
    iVar6 = thunk_MwhHq(uVar8);
    piVar3[4] = uVar8 | 1;
    piVar3[5] = param_4;
    piVar3[6] = iVar6;
  }
  imp___aeabi_memmove(iVar6,param_3,param_4);
LAB_71a92398:
  *(undefined1 *)(iVar6 + param_4) = 0;
  piVar4 = (int *)*piVar12;
  piVar3[7] = *param_5;
  piVar10 = piVar12;
  if (piVar4 != (int *)0x0) {
    bVar1 = *(byte *)(piVar3 + 4);
    uVar8 = piVar3[5];
    iVar6 = piVar3[6];
    if ((bVar1 & 1) == 0) {
      iVar6 = (int)piVar3 + 0x11;
      uVar8 = (uint)(bVar1 >> 1);
    }
    do {
      while( true ) {
        piVar12 = piVar4;
        uVar9 = piVar12[5];
        iVar11 = piVar12[6];
        if ((*(byte *)(piVar12 + 4) & 1) == 0) {
          iVar11 = (int)piVar12 + 0x11;
          uVar9 = (uint)(*(byte *)(piVar12 + 4) >> 1);
        }
        uVar7 = uVar8;
        if (uVar9 < uVar8) {
          uVar7 = uVar9;
        }
        iVar5 = imp_memcmp(iVar6,iVar11,uVar7);
        if (iVar5 == 0) break;
        if (-1 < iVar5) goto LAB_71a9243c;
LAB_71a923dc:
        piVar4 = (int *)*piVar12;
        piVar10 = piVar12;
        if ((int *)*piVar12 == (int *)0x0) goto LAB_71a92478;
      }
      if (uVar8 < uVar9) goto LAB_71a923dc;
LAB_71a9243c:
      iVar11 = imp_memcmp(iVar11,iVar6,uVar7);
      if (iVar11 == 0) {
        if (uVar8 <= uVar9) goto LAB_71a924c4;
      }
      else if (-1 < iVar11) {
LAB_71a924c4:
        if (piVar3 != (int *)0x0) {
          iVar6 = piVar3[7];
          piVar3[7] = 0;
          if (iVar6 != 0) {
            thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(iVar6 + 0xc);
            imp_pthread_mutex_destroy(iVar6);
            thunk_qNQrlu(iVar6);
            bVar1 = *(byte *)(piVar3 + 4);
          }
          if ((bVar1 & 1) != 0) {
            thunk_qNQrlu(piVar3[6]);
          }
          thunk_qNQrlu(piVar3);
        }
        uVar2 = 0;
        piVar3 = piVar12;
        goto LAB_71a92520;
      }
      piVar4 = (int *)piVar12[1];
    } while ((int *)piVar12[1] != (int *)0x0);
    piVar10 = piVar12 + 1;
  }
LAB_71a92478:
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = (int)piVar12;
  *piVar10 = (int)piVar3;
  piVar12 = piVar3;
  if (*(int *)*param_2 != 0) {
    *param_2 = *(int *)*param_2;
    piVar12 = (int *)*piVar10;
  }
  FUN_71a4128a(param_2[1],piVar12);
  param_2[2] = param_2[2] + 1;
  uVar2 = 1;
LAB_71a92520:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar3;
  return;
}


// =========================================================================
// Function: FUN_71a925cc
// Entry: 0x71a925cc | Size: 116 bytes
// =========================================================================

void FUN_71a925cc(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_71a925cc(*param_1);
    FUN_71a925cc(param_1[1]);
    iVar1 = param_1[7];
    param_1[7] = 0;
    if (iVar1 != 0) {
      thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(iVar1 + 0xc);
      imp_pthread_mutex_destroy(iVar1);
      thunk_qNQrlu(iVar1);
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      thunk_qNQrlu(param_1[6]);
    }
    thunk_qNQrlu(param_1);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71a92644
// Entry: 0x71a92644 | Size: 252 bytes
// =========================================================================

int * FUN_71a92644(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 4);
  piVar5 = (int *)*piVar7;
  piVar6 = piVar7;
  if (piVar5 != (int *)0x0) {
    do {
      uVar4 = piVar5[5];
      iVar3 = piVar5[6];
      if ((*(byte *)(piVar5 + 4) & 1) == 0) {
        uVar4 = (uint)(*(byte *)(piVar5 + 4) >> 1);
        iVar3 = (int)piVar5 + 0x11;
      }
      uVar2 = uVar4;
      if (param_3 < uVar4) {
        uVar2 = param_3;
      }
      uVar2 = imp_memcmp(iVar3,param_2,uVar2);
      if (uVar2 == 0) {
        uVar2 = (uint)(uVar4 < param_3);
        uVar4 = uVar2 << 2;
      }
      else {
        uVar4 = uVar2 >> 0x1d & 4;
        uVar2 = uVar2 >> 0x1f;
      }
      piVar1 = (int *)((int)piVar5 + uVar4);
      if (uVar2 == 0) {
        piVar6 = piVar5;
      }
      piVar5 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (piVar6 != piVar7) {
      uVar4 = piVar6[5];
      iVar3 = piVar6[6];
      if ((*(byte *)(piVar6 + 4) & 1) == 0) {
        uVar4 = (uint)(*(byte *)(piVar6 + 4) >> 1);
        iVar3 = (int)piVar6 + 0x11;
      }
      uVar2 = param_3;
      if (uVar4 < param_3) {
        uVar2 = uVar4;
      }
      iVar3 = imp_memcmp(param_2,iVar3,uVar2);
      if (iVar3 == 0) {
        if (uVar4 <= param_3) {
          piVar7 = piVar6;
        }
        return piVar7;
      }
      if (-1 < iVar3) {
        piVar7 = piVar6;
      }
    }
  }
  return piVar7;
}


// =========================================================================
// Function: vpBUqbqnYuHEYH_lvNmYYzZJvdtwGxgBvjJBFjIrCnnylMc_BtjdQcJLKmKVWPVfURuibiWUaVYhimrhVFPvaBR_ROeraGrbKLITtFGuIVFbhysAVfrkkzeyPyEdtSTGvbicnAQXUVAogZcCnrGZjUvnr
// Entry: 0x71a93a98 | Size: 76 bytes
// =========================================================================

byte * vpBUqbqnYuHEYH_lvNmYYzZJvdtwGxgBvjJBFjIrCnnylMc_BtjdQcJLKmKVWPVfURuibiWUaVYhimrhVFPvaBR_ROeraGrbKLITtFGuIVFbhysAVfrkkzeyPyEdtSTGvbicnAQXUVAogZcCnrGZjUvnr
                 (byte *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (iVar1 != 0) {
    thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(iVar1);
    thunk_qNQrlu(iVar1);
  }
  if ((*param_1 & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 8));
  }
  return param_1;
}


// =========================================================================
// Function: uEluOtATSLBrxrLLJAkMtjFkBaaFydmwhHiSwiABrhYLyflcftzHpGYAdmQgxZYZXcqQOJYWZqpDMSyhUwMtlbgotkNhKmLhOMaZUZSjHqvqqEnZpNSQDaFrndNBAABsuVUwMYAlkAWmWfOFqBdHemXIFkpRPdLiaOCAZ_kMiOnqXyRoIpZfUfkaWOyOWngbLaGKGnawgcwGoNujEymnOHSVEdadFDzTzXuwGJEBRdtNWnTHBFUEgheGgnIsXNpxRONmWCNAWpbOUMDQTbSHTgsdTrMgv_KNQsNRGuwwgIrwylKLjTDGQyZmYqFIIYIVydTuAUkfxunCXOVtucVtbMsgcqfqsRBtztcDRtwkoejyl
// Entry: 0x71a93b50 | Size: 372 bytes
// =========================================================================

void uEluOtATSLBrxrLLJAkMtjFkBaaFydmwhHiSwiABrhYLyflcftzHpGYAdmQgxZYZXcqQOJYWZqpDMSyhUwMtlbgotkNhKmLhOMaZUZSjHqvqqEnZpNSQDaFrndNBAABsuVUwMYAlkAWmWfOFqBdHemXIFkpRPdLiaOCAZ_kMiOnqXyRoIpZfUfkaWOyOWngbLaGKGnawgcwGoNujEymnOHSVEdadFDzTzXuwGJEBRdtNWnTHBFUEgheGgnIsXNpxRONmWCNAWpbOUMDQTbSHTgsdTrMgv_KNQsNRGuwwgIrwylKLjTDGQyZmYqFIIYIVydTuAUkfxunCXOVtucVtbMsgcqfqsRBtztcDRtwkoejyl
               (undefined4 *param_1,int *param_2,byte *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  undefined8 uVar12;
  
  piVar6 = param_2 + 1;
  piVar2 = (int *)*piVar6;
  piVar11 = piVar6;
  if (piVar2 != (int *)0x0) {
    pbVar10 = *(byte **)(param_3 + 8);
    uVar8 = *(uint *)(param_3 + 4);
    if ((*param_3 & 1) == 0) {
      pbVar10 = param_3 + 1;
      uVar8 = (uint)(*param_3 >> 1);
    }
    do {
      while( true ) {
        piVar4 = piVar2;
        uVar5 = piVar4[5];
        iVar7 = piVar4[6];
        if ((*(byte *)(piVar4 + 4) & 1) == 0) {
          iVar7 = (int)piVar4 + 0x11;
          uVar5 = (uint)(*(byte *)(piVar4 + 4) >> 1);
        }
        uVar9 = uVar8;
        if (uVar5 < uVar8) {
          uVar9 = uVar5;
        }
        iVar3 = imp_memcmp(pbVar10,iVar7,uVar9);
        piVar11 = piVar4;
        if (iVar3 == 0) break;
        if (-1 < iVar3) goto LAB_71a93bf8;
LAB_71a93b98:
        piVar2 = (int *)*piVar4;
        piVar6 = piVar4;
        if ((int *)*piVar4 == (int *)0x0) goto LAB_71a93c34;
      }
      if (uVar8 < uVar5) goto LAB_71a93b98;
LAB_71a93bf8:
      iVar7 = imp_memcmp(iVar7,pbVar10,uVar9);
      if (iVar7 == 0) {
        if (uVar8 <= uVar5) goto LAB_71a93ca8;
      }
      else if (-1 < iVar7) {
LAB_71a93ca8:
        uVar1 = 0;
        goto LAB_71a93cb0;
      }
      piVar2 = (int *)piVar4[1];
    } while ((int *)piVar4[1] != (int *)0x0);
    piVar6 = piVar4 + 1;
  }
LAB_71a93c34:
  piVar4 = (int *)thunk_MwhHq(0x20);
  uVar12 = *param_4;
  iVar7 = *(int *)((int)param_4 + 0xc);
  piVar4[6] = *(int *)(param_4 + 1);
  piVar4[7] = iVar7;
  *piVar4 = 0;
  piVar4[1] = 0;
  piVar4[2] = (int)piVar11;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  *(undefined4 *)((int)param_4 + 0xc) = 0;
  *(undefined8 *)(piVar4 + 4) = uVar12;
  *piVar6 = (int)piVar4;
  piVar2 = piVar4;
  if (*(int *)*param_2 != 0) {
    *param_2 = *(int *)*param_2;
    piVar2 = (int *)*piVar6;
  }
  FUN_71a4128a(param_2[1],piVar2);
  param_2[2] = param_2[2] + 1;
  uVar1 = 1;
LAB_71a93cb0:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = piVar4;
  return;
}


// =========================================================================
// Function: FUN_71a93d4c
// Entry: 0x71a93d4c | Size: 60 bytes
// =========================================================================

void FUN_71a93d4c(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71a93d4c(param_1,*param_2);
  FUN_71a93d4c(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: lOCcuBNUcTMrPwAfduqNxSBJlYcvwuwXTziQRxi_PnpqzJGPxNzfGabVsYmTuH_SMT_fHjjDJXhXOTjhheUJRvNNeBuklkVtAcbSJEyxCtJQlXpPnZDGzEeKcRvHe_vSIPNsTHUmddOknoYYpuqkbXMoCgUQcHSXJxIDYrqsPGUziEHTqH_uPNyyHEoRGyExq
// Entry: 0x71a93df4 | Size: 268 bytes
// =========================================================================

void lOCcuBNUcTMrPwAfduqNxSBJlYcvwuwXTziQRxi_PnpqzJGPxNzfGabVsYmTuH_SMT_fHjjDJXhXOTjhheUJRvNNeBuklkVtAcbSJEyxCtJQlXpPnZDGzEeKcRvHe_vSIPNsTHUmddOknoYYpuqkbXMoCgUQcHSXJxIDYrqsPGUziEHTqH_uPNyyHEoRGyExq
               (int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  
  if (param_2 == param_3) {
    return;
  }
  do {
    piVar1 = (int *)thunk_CwopoJXLvpxEuFTnOvZUOLUYWXdhqqifuafwcnjVGABbDaQW_ABWwLxwYAQVvhjQ_cshWTLYoTDKCAogJuCCuWzXaKoRtzttIDGbFbytBMmWEWoSWzeFICOMBUtDBHxxVIPGju_VTHpTyAxoaMSSMmGydHskeArPdHsRiijIQIlIGaBdYRIRbkJGBTaKlncKUitgzSJwSKuuQEOsjfRHnJNgJcOStWuGhGWLDmQFtzKfYcByrMwTWWwpw
                              (param_1,param_1 + 1,&uStack_28,auStack_2c,param_2 + 4);
    if (*piVar1 == 0) {
      puVar2 = (undefined4 *)thunk_MwhHq(0x18);
      iVar4 = param_2[5];
      puVar2[4] = param_2[4];
      puVar2[5] = iVar4;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = uStack_28;
      *piVar1 = (int)puVar2;
      if (*(int *)*param_1 != 0) {
        *param_1 = *(int *)*param_1;
        puVar2 = (undefined4 *)*piVar1;
      }
      FUN_71a4128a(param_1[1],puVar2);
      param_1[2] = param_1[2] + 1;
      piVar1 = (int *)param_2[1];
      if ((int *)param_2[1] != (int *)0x0) goto LAB_71a93ec8;
LAB_71a93edc:
      do {
        piVar3 = (int *)param_2[2];
        bVar5 = (int *)*piVar3 != param_2;
        param_2 = piVar3;
      } while (bVar5);
    }
    else {
      piVar1 = (int *)param_2[1];
      if ((int *)param_2[1] == (int *)0x0) goto LAB_71a93edc;
LAB_71a93ec8:
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
// Function: CwopoJXLvpxEuFTnOvZUOLUYWXdhqqifuafwcnjVGABbDaQW_ABWwLxwYAQVvhjQ_cshWTLYoTDKCAogJuCCuWzXaKoRtzttIDGbFbytBMmWEWoSWzeFICOMBUtDBHxxVIPGju_VTHpTyAxoaMSSMmGydHskeArPdHsRiijIQIlIGaBdYRIRbkJGBTaKlncKUitgzSJwSKuuQEOsjfRHnJNgJcOStWuGhGWLDmQFtzKfYcByrMwTWWwpw
// Entry: 0x71a93f6c | Size: 472 bytes
// =========================================================================

int * CwopoJXLvpxEuFTnOvZUOLUYWXdhqqifuafwcnjVGABbDaQW_ABWwLxwYAQVvhjQ_cshWTLYoTDKCAogJuCCuWzXaKoRtzttIDGbFbytBMmWEWoSWzeFICOMBUtDBHxxVIPGju_VTHpTyAxoaMSSMmGydHskeArPdHsRiijIQIlIGaBdYRIRbkJGBTaKlncKUitgzSJwSKuuQEOsjfRHnJNgJcOStWuGhGWLDmQFtzKfYcByrMwTWWwpw
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
      if ((int *)*piVar5 == (int *)0x0) goto LAB_71a94138;
      do {
        while (piVar3 = piVar1, piVar3[4] <= iVar6) {
          if (iVar6 <= piVar3[4]) goto LAB_71a9408c;
          piVar5 = piVar3 + 1;
          piVar1 = (int *)*piVar5;
          if ((int *)*piVar5 == (int *)0x0) goto LAB_71a9408c;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
      goto LAB_71a9408c;
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
LAB_71a94138:
        *param_3 = piVar5;
        return piVar5;
      }
      do {
        while (piVar3 = piVar1, piVar3[4] <= iVar6) {
          if (iVar6 <= piVar3[4]) goto LAB_71a9408c;
          piVar5 = piVar3 + 1;
          piVar1 = (int *)*piVar5;
          if ((int *)*piVar5 == (int *)0x0) goto LAB_71a9408c;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      } while ((int *)*piVar3 != (int *)0x0);
LAB_71a9408c:
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
// Function: FUN_71a9415c
// Entry: 0x71a9415c | Size: 112 bytes
// =========================================================================

void FUN_71a9415c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_71a9415c(param_1,*param_2);
  FUN_71a9415c(param_1,param_2[1]);
  iVar1 = param_2[7];
  param_2[7] = 0;
  if (iVar1 != 0) {
    thunk_AdgOT_XFcyUbNLKoAQbYidygMKHBfZZWxE(iVar1);
    thunk_qNQrlu(iVar1);
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    thunk_qNQrlu(param_2[6]);
  }
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FIDaUYlysGumEBFAbFgBVrIMDkFjNNdy
// Entry: 0x71a9428c | Size: 40 bytes
// =========================================================================

void FIDaUYlysGumEBFAbFgBVrIMDkFjNNdy(uint *param_1)

{
  uint in_fpscr;
  
  *param_1 = in_fpscr;
  *(byte *)(param_1 + 1) = (byte)((in_fpscr & 0x1000000) >> 0x18) ^ 1;
  if ((in_fpscr & 0x1000000) != 0) {
    return;
  }
  return;
}


// =========================================================================
// Function: CQxqzRQLNRfbsJfJBWvjkfDVgpdhHOvN
// Entry: 0x71a942b4 | Size: 68 bytes
// =========================================================================

void CQxqzRQLNRfbsJfJBWvjkfDVgpdhHOvN(uint *param_1,int param_2)

{
  uint in_fpscr;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0xffffffff;
    return;
  }
  *param_1 = in_fpscr;
  *(byte *)(param_1 + 1) = (byte)((in_fpscr & 0x1000000) >> 0x18) ^ 1;
  if ((in_fpscr & 0x1000000) != 0) {
    return;
  }
  return;
}


// =========================================================================
// Function: eZPl_KCpCFLvGxTwlIF_qyfuUYxgldRryPtDZzQEcRU
// Entry: 0x71a942f8 | Size: 8 bytes
// =========================================================================

undefined4 eZPl_KCpCFLvGxTwlIF_qyfuUYxgldRryPtDZzQEcRU(void)

{
  return 1;
}


// =========================================================================
// Function: GsbngCFLkhJoshHLyGuEfGhhdXqurqEc
// Entry: 0x71a94300 | Size: 24 bytes
// =========================================================================

void GsbngCFLkhJoshHLyGuEfGhhdXqurqEc(int param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  return;
}


// =========================================================================
// Function: yWrZpzAcPzPnPquNhMmoGHpLDDGUeRcSYtRGUocROrEuhfWYENdbOPTodZWQEyBEeFzypZGpVztwDYeenMAzk
// Entry: 0x71a94330 | Size: 4 bytes
// =========================================================================

void yWrZpzAcPzPnPquNhMmoGHpLDDGUeRcSYtRGUocROrEuhfWYENdbOPTodZWQEyBEeFzypZGpVztwDYeenMAzk(void)

{
  return;
}


// =========================================================================
// Function: iDmLqCERleAevsfkQbUZDyvqxxTwdwAcRZNUUlHDBgkXZgsmgkEMvrGYicSD
// Entry: 0x71a94334 | Size: 328 bytes
// =========================================================================

bool iDmLqCERleAevsfkQbUZDyvqxxTwdwAcRZNUUlHDBgkXZgsmgkEMvrGYicSD(char *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
      (((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) && (param_1[0x10] == param_2[0x10])) &&
       ((param_1[0x14] == param_2[0x14] &&
        ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18) &&
         (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))))))) &&
     ((param_1[0x20] == param_2[0x20] && (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))))) {
    bVar2 = false;
    if (*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28)) {
      bVar2 = *(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c);
    }
    if ((((bVar2) && (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) &&
        (*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38))) &&
       (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c))) {
      if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
        return false;
      }
      if (*(float *)(param_1 + 0x44) == *(float *)(param_2 + 0x44)) {
        if (*(float *)(param_1 + 0x48) == *(float *)(param_2 + 0x48)) {
          bVar1 = param_1[0x4c] == param_2[0x4c];
        }
        return bVar1;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: vXwoylEqMSmqezjlPmeZrvpqbcUXyBFqysBqYEfNyUiMFTPwH_oRLLJeNbURIvpPQyVoJaUIzPzYn
// Entry: 0x71a9447c | Size: 128 bytes
// =========================================================================

undefined4
vXwoylEqMSmqezjlPmeZrvpqbcUXyBFqysBqYEfNyUiMFTPwH_oRLLJeNbURIvpPQyVoJaUIzPzYn
          (char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_1 == *param_2) && (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) &&
      (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
     (*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc))) {
    if (*(float *)(param_1 + 0x10) != *(float *)(param_2 + 0x10)) {
      return 0;
    }
    if (*(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: IGzcDSumSmjOpmSwtXtweIpEZXzIDsFctWpanwMSgFWRoWlmAdgNjcOzynAZYEliUbGXUfXwDSBqdgyHUiz
// Entry: 0x71a944fc | Size: 24 bytes
// =========================================================================

bool IGzcDSumSmjOpmSwtXtweIpEZXzIDsFctWpanwMSgFWRoWlmAdgNjcOzynAZYEliUbGXUfXwDSBqdgyHUiz
               (char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}


// =========================================================================
// Function: BYfTZMraMxYbQXAyMzFCOh_ovZAFxlshrxKTwIKcqYxwMEqhUedmGZIM_Von
// Entry: 0x71a94514 | Size: 180 bytes
// =========================================================================

bool BYfTZMraMxYbQXAyMzFCOh_ovZAFxlshrxKTwIKcqYxwMEqhUedmGZIM_Von(char *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (*param_1 == *param_2) {
    bVar2 = false;
    if (*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c)) {
      bVar2 = param_1[4] == param_2[4];
    }
    if (((bVar2) && (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
       (*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc))) {
      if (*(float *)(param_1 + 0x10) != *(float *)(param_2 + 0x10)) {
        return false;
      }
      if (*(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14)) {
        if (*(float *)(param_1 + 0x18) == *(float *)(param_2 + 0x18)) {
          bVar1 = param_1[1] == param_2[1];
        }
        return bVar1;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: jUoe_Zm_axzQZnuATnjIVkVyqya_eXyvzkuGFBsUyGnRnuFVd_ZTsaEoLsRcfJGZEGW
// Entry: 0x71a945c8 | Size: 104 bytes
// =========================================================================

bool jUoe_Zm_axzQZnuATnjIVkVyqya_eXyvzkuGFBsUyGnRnuFVd_ZTsaEoLsRcfJGZEGW
               (char *param_1,char *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) {
    if (*(float *)(param_1 + 8) != *(float *)(param_2 + 8)) {
      return false;
    }
    bVar1 = param_1[0xc] == param_2[0xc] && *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
  }
  return bVar1;
}


// =========================================================================
// Function: HMjOhHSjanqviVGPQUeYSUgmDeiDLSEVdmVuaQJlRryEivzLHKicqCsodwHeunJfhRZNrxzSFpPz_WIQfaMeeQrEFxA
// Entry: 0x71a94630 | Size: 40 bytes
// =========================================================================

bool HMjOhHSjanqviVGPQUeYSUgmDeiDLSEVdmVuaQJlRryEivzLHKicqCsodwHeunJfhRZNrxzSFpPz_WIQfaMeeQrEFxA
               (char *param_1,char *param_2)

{
  return *param_1 == *param_2 && *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}


// =========================================================================
// Function: TvdgrcLmvVFIqGUtr_dtGKcpGswciZLMGZFrlpQTHYuLPR
// Entry: 0x71a94658 | Size: 1728 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TvdgrcLmvVFIqGUtr_dtGKcpGswciZLMGZFrlpQTHYuLPR(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte bStack_838;
  undefined1 auStack_837 [4];
  undefined4 uStack_833;
  undefined1 auStack_82f [3];
  undefined4 auStack_82c [3];
  undefined1 auStack_820 [2048];
  
  uVar2 = thunk_rPiMkrHHLavtVMGAqTzYYaquUYbIyIuWuWPBQnxNZcwGWgtrWAatzODg
                    (auStack_82c,auStack_820,0x800);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s_AudioProcessing__Config__pipelin_7006a064,0x47);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*param_2);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___multi_channel_render__70064fc5,0x18);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 1));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___multi_channel_capture__7006821b,0x19);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)((int)param_2 + 5));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____pre_amplifier____enabled__7006f180,0x1e);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 3));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___fixed_gain_factor__7006bbed,0x15);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[4]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___capture_level_adjustment____en_70064fde,0x28);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 5));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___pre_gain_factor__700705a5,0x13);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[6]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___post_gain_factor__70061dc5,0x14);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[7]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___analog_mic_gain_emulation____e_7006a695,0x28);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 8));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___initial_level__7006e8e1,0x11);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[9]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s_____high_pass_filter____enabled__700637ee,0x22);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 10));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____echo_canceller____enabled__7006d344,0x1f);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)((int)param_2 + 0x2a));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___mobile_mode__7006c2bc,0xf);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)((int)param_2 + 0x2b));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___enforce_high_pass_filtering__7006e0a9,0x1f);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)((int)param_2 + 0x2d));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____noise_suppression____enabled__7006d99d,0x22);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0xc));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___level__70063811,9);
  if (3 < (uint)param_2[0xd]) goto LAB_71a94d08;
  puVar8 = (undefined4 *)auStack_82f;
  switch(param_2[0xd]) {
  case 0:
    puVar8 = (undefined4 *)(auStack_837 + 3);
    bStack_838 = 6;
    auStack_837._0_3_ = 0x776f4c;
    uVar7 = 3;
    break;
  case 1:
    uStack_833 = 0x65746172;
    auStack_837 = (undefined1  [4])0x65646f4d;
    goto LAB_71a94898;
  case 2:
    puVar8 = &uStack_833;
    auStack_837 = (undefined1  [4])0x68676948;
    bStack_838 = 8;
    uVar7 = 4;
    break;
  case 3:
    uStack_833 = 0x68676948;
    auStack_837 = (undefined1  [4])0x79726556;
LAB_71a94898:
    bStack_838 = 0x10;
    uVar7 = 8;
  }
  *(undefined1 *)puVar8 = 0;
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,(uint)&bStack_838 | 1,uVar7);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____transient_suppression____enab_70067ab9,0x26);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0xf));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____gain_controller1____enabled__7006381b,0x21);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x10));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___mode__7006cb23,8);
  iVar3 = param_2[0x11];
  if (iVar3 == 2) {
    pcVar4 = (char *)thunk_MwhHq(0x10);
    uVar1 = s_FixedDigital_70075ab8._0_8_;
    uVar7 = 0xc;
    pcVar4[8] = 'i';
    pcVar4[9] = 't';
    pcVar4[10] = 'a';
    pcVar4[0xb] = 'l';
    pcVar5 = pcVar4 + 0xc;
    *(undefined8 *)pcVar4 = uVar1;
  }
  else if (iVar3 == 1) {
    pcVar4 = (char *)thunk_MwhHq(0x10);
    uVar7 = 0xf;
    uVar1 = CONCAT71(s_eDigital_70075847._1_7_,s_eDigital_70075847[0]);
    *(ulonglong *)pcVar4 = CONCAT17(s_eDigital_70075847[0],_DAT_70075840);
    *(undefined8 *)(pcVar4 + 7) = uVar1;
    pcVar5 = pcVar4 + 0xf;
  }
  else {
    if (iVar3 != 0) {
      thunk_KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj();
LAB_71a94d08:
      thunk_KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj();
      if ((bStack_838 & 1) != 0) {
        thunk_qNQrlu(CONCAT31(auStack_82f,uStack_833._3_1_));
      }
                    /* WARNING: Subroutine does not return */
      thunk_NAUpeWJSovvMoxKm_();
    }
    pcVar4 = (char *)thunk_MwhHq(0x10);
    uVar7 = 0xe;
    uVar1 = CONCAT62(s_veAnalog_70075b0e._2_6_,s_veAnalog_70075b0e._0_2_);
    *(ulonglong *)pcVar4 = CONCAT26(s_veAnalog_70075b0e._0_2_,_DAT_70075b08);
    *(undefined8 *)(pcVar4 + 6) = uVar1;
    pcVar5 = pcVar4 + 0xe;
  }
  *pcVar5 = '\0';
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,pcVar4,uVar7);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___target_level_dbfs__7006a6be,0x15);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x12]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___compression_gain_db__7006cb2c,0x17);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x13]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___enable_limiter__70067ae0,0x12);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x14));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___analog_gain_controller___enabl_700725cf,0x24);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x15));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___startup_min_volume__7006c2cc,0x16);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x16]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___clipped_level_min__700660d6,0x15);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x17]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___enable_digital_adaptive__70062dc4,0x1b);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x18));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___clipped_level_step__70066802,0x16);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x19]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___clipped_ratio_threshold__7006e8f3,0x1b);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x1a]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___clipped_wait_frames__7006420b,0x17);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x1b]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___clipping_predictor____enabled__700714eb,0x22);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x1c));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___mode__7006cb23,8);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x1d]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___window_length__7006a0ac,0x11);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x1e]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___reference_window_length__70065007,0x1b);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x1f]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___reference_window_delay__70066819,0x1a);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,param_2[0x20]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___clipping_threshold__7006fb37,0x16);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x21]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___crest_factor_margin__70064932,0x17);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x22]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___use_predicted_step__70068235,0x16);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x23));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s______gain_controller2____enabled_7006b3fb,0x23);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x24));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___fixed_digital____gain_db__7006383d,0x1c);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x2b]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____adaptive_digital____enabled__7006385a,0x21);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)(param_2 + 0x25));
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___headroom_db__70061dda,0xf);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x26]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___max_gain_db__7006f19f,0xf);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x27]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___initial_gain_db__7006b41f,0x13);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x28]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___max_gain_change_db_per_second__7006b433,0x21);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x29]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s___max_output_noise_level_dbfs__7006e90f,0x1f);
  uVar2 = thunk_KCJtiserJRXZQFprkvnKYYULbWdnDAbw(uVar2,param_2[0x2a]);
  uVar2 = thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
                    (uVar2,s____input_volume_control_____enab_70064223,0x25);
  uVar2 = thunk_wgRbowfmTEGpJMkRqorLkdDhJHbvUAhH(uVar2,*(undefined1 *)((int)param_2 + 0x91));
  thunk_xrtftzUSzvHMUqnaVNqCzNVYHmt_VyeYdjIGGibuatibAHEabnYFuSnZfjqcVBeinVkfhxrLDiHBbGPXMVpsQ
            (uVar2,&DAT_70067af3,2);
  thunk_qNQrlu(pcVar4);
  if ((bStack_838 & 1) != 0) {
    thunk_qNQrlu(CONCAT31(auStack_82f,uStack_833._3_1_));
  }
  uVar6 = imp_strlen(auStack_82c[0]);
  if (uVar6 < 0xfffffff8) {
    if (uVar6 < 0xb) {
      puVar9 = (undefined1 *)((int)param_1 + 1);
      *(char *)param_1 = (char)(uVar6 << 1);
      if (uVar6 == 0) {
        *puVar9 = 0;
        return;
      }
    }
    else {
      puVar9 = (undefined1 *)thunk_MwhHq((uVar6 | 7) + 1);
      param_1[2] = (int)puVar9;
      *param_1 = (uVar6 | 7) + 2;
      param_1[1] = uVar6;
    }
    imp___aeabi_memmove(puVar9,auStack_82c[0],uVar6);
    puVar9[uVar6] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71a11918(param_1);
}


// =========================================================================
// Function: Y_YsgkmhBXWMXGHGpPgVgScQWrFyYrxn
// Entry: 0x71a95f5c | Size: 4 bytes
// =========================================================================

void Y_YsgkmhBXWMXGHGpPgVgScQWrFyYrxn(void)

{
  return;
}


// =========================================================================
// Function: RLnqNOpBeDuazfgiFmgCRYkNwbaFDdqj
// Entry: 0x71a95f78 | Size: 4 bytes
// =========================================================================

void RLnqNOpBeDuazfgiFmgCRYkNwbaFDdqj(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x71a95f78);
  (*pcVar1)();
}


// =========================================================================
// Function: dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
// Entry: 0x71a95f94 | Size: 224 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
               (undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  if (0xfffffff7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_71a11918(&uStack_2c);
  }
  if (param_2 < 0xb) {
    uVar1 = (uint)&uStack_2c | 1;
    uStack_2c = CONCAT31(uStack_2c._1_3_,(char)(param_2 << 1));
    if (param_2 == 0) goto LAB_71a9600c;
  }
  else {
    uVar1 = thunk_MwhHq((param_2 | 7) + 1);
    uStack_2c = (param_2 | 7) + 2;
    uStack_28 = param_2;
    uStack_24 = uVar1;
  }
  imp___aeabi_memmove(uVar1,param_1,param_2);
LAB_71a9600c:
  *(undefined1 *)(uVar1 + param_2) = 0;
  uVar1 = uStack_24;
  if ((uStack_2c & 1) == 0) {
    uVar1 = (uint)&uStack_2c | 1;
  }
  imp___android_log_print(6,&DAT_70070df3,&DAT_70064249,uVar1);
  imp_fflush(_ext_stdout);
  imp_fwrite(param_1,param_2,1,_ext_stderr);
  imp_fflush(_ext_stderr);
                    /* WARNING: Subroutine does not return */
  imp_abort();
}


// =========================================================================
// Function: ckBWVvL_xAzYGqpJVxYRNCgJTFpDHGehukEozRNdgxcQMbUlKojZoAerOyKgFkR_XTsSOuLfcTUFsaSfDhQJlwjrpSLTAVbbOIKeA
// Entry: 0x71a9609c | Size: 20 bytes
// =========================================================================

undefined4
ckBWVvL_xAzYGqpJVxYRNCgJTFpDHGehukEozRNdgxcQMbUlKojZoAerOyKgFkR_XTsSOuLfcTUFsaSfDhQJlwjrpSLTAVbbOIKeA
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined4 extraout_r2;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  uVar12 = thunk_dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
                     (param_3,param_4);
  piVar3 = (int *)((ulonglong)uVar12 >> 0x20);
  piVar1 = (int *)uVar12;
  uVar10 = 0;
  switch(*(undefined1 *)*piVar3) {
  case 0:
    goto switchD_71a960d8_caseD_0;
  case 1:
    puVar8 = (undefined4 *)*piVar1;
    puVar5 = &DAT_7006cd62;
    goto LAB_71a96190;
  case 2:
    puVar8 = (undefined4 *)*piVar1;
    puVar5 = &DAT_7006f96a;
LAB_71a96190:
    *piVar1 = (int)(puVar8 + 1);
    goto LAB_71a961f8;
  case 3:
    puVar8 = (undefined4 *)(*piVar1 + 7U & 0xfffffff8);
    puVar5 = &DAT_70062dbd;
    *piVar1 = (int)(puVar8 + 2);
    goto LAB_71a96240;
  case 4:
    puVar8 = (undefined4 *)*piVar1;
    puVar5 = &DAT_7006df63;
    goto LAB_71a961f0;
  case 5:
    puVar8 = (undefined4 *)*piVar1;
    puVar5 = &DAT_70063703;
    goto LAB_71a961f0;
  case 6:
    puVar8 = (undefined4 *)(*piVar1 + 7U & 0xfffffff8);
    puVar5 = &DAT_7006b27b;
    *piVar1 = (int)(puVar8 + 2);
LAB_71a96240:
    uVar10 = *puVar8;
    uVar9 = puVar8[1];
    goto LAB_71a962b8;
  case 7:
    puVar7 = (undefined8 *)(*piVar1 + 7U & 0xfffffff8);
    *piVar1 = (int)(puVar7 + 1);
    uVar12 = *puVar7;
    uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar10 = (undefined4)uVar12;
    puVar5 = &DAT_7006a5eb;
    goto LAB_71a962b8;
  case 8:
    puVar7 = (undefined8 *)(*piVar1 + 7U & 0xfffffff8);
    *piVar1 = (int)(puVar7 + 1);
    uVar12 = *puVar7;
    uVar9 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar10 = (undefined4)uVar12;
    puVar5 = &DAT_7006df5f;
LAB_71a962b8:
    FUN_71a962fc(extraout_r2,puVar5,uVar10,uVar9);
    break;
  case 9:
    puVar8 = (undefined4 *)*piVar1;
    *piVar1 = (int)(puVar8 + 1);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (extraout_r2,*puVar8);
    break;
  case 10:
    puVar8 = (undefined4 *)*piVar1;
    *piVar1 = (int)(puVar8 + 1);
    pbVar2 = (byte *)*puVar8;
    uVar11 = *(uint *)(pbVar2 + 4);
    pbVar6 = *(byte **)(pbVar2 + 8);
    if ((*pbVar2 & 1) == 0) {
      pbVar6 = pbVar2 + 1;
      uVar11 = (uint)(*pbVar2 >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (extraout_r2,pbVar6,uVar11);
    break;
  case 0xb:
    piVar4 = (int *)*piVar1;
    *piVar1 = (int)(piVar4 + 1);
    puVar8 = (undefined4 *)*piVar4;
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (extraout_r2,*puVar8,puVar8[1]);
    break;
  case 0xc:
    puVar8 = (undefined4 *)*piVar1;
    puVar5 = &DAT_7006494a;
LAB_71a961f0:
    *piVar1 = (int)(puVar8 + 1);
LAB_71a961f8:
    FUN_71a962fc(extraout_r2,puVar5,*puVar8);
    break;
  default:
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (extraout_r2,s__Invalid_CheckArgType__7006824c);
    return 0;
  }
  uVar10 = 1;
  *piVar3 = *piVar3 + 1;
switchD_71a960d8_caseD_0:
  return uVar10;
}


// =========================================================================
// Function: JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
// Entry: 0x71a960b0 | Size: 496 bytes
// =========================================================================

undefined4
JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
          (int *param_1,int *param_2,undefined4 param_3)

{
  byte *pbVar1;
  int *piVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar8 = 0;
  switch(*(undefined1 *)*param_2) {
  case 0:
    goto switchD_71a960d8_caseD_0;
  case 1:
    puVar6 = (undefined4 *)*param_1;
    puVar3 = &DAT_7006cd62;
    goto LAB_71a96190;
  case 2:
    puVar6 = (undefined4 *)*param_1;
    puVar3 = &DAT_7006f96a;
LAB_71a96190:
    *param_1 = (int)(puVar6 + 1);
    goto LAB_71a961f8;
  case 3:
    puVar6 = (undefined4 *)(*param_1 + 7U & 0xfffffff8);
    puVar3 = &DAT_70062dbd;
    *param_1 = (int)(puVar6 + 2);
    goto LAB_71a96240;
  case 4:
    puVar6 = (undefined4 *)*param_1;
    puVar3 = &DAT_7006df63;
    goto LAB_71a961f0;
  case 5:
    puVar6 = (undefined4 *)*param_1;
    puVar3 = &DAT_70063703;
    goto LAB_71a961f0;
  case 6:
    puVar6 = (undefined4 *)(*param_1 + 7U & 0xfffffff8);
    puVar3 = &DAT_7006b27b;
    *param_1 = (int)(puVar6 + 2);
LAB_71a96240:
    uVar8 = *puVar6;
    uVar7 = puVar6[1];
    goto LAB_71a962b8;
  case 7:
    puVar5 = (undefined8 *)(*param_1 + 7U & 0xfffffff8);
    *param_1 = (int)(puVar5 + 1);
    uVar10 = *puVar5;
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar8 = (undefined4)uVar10;
    puVar3 = &DAT_7006a5eb;
    goto LAB_71a962b8;
  case 8:
    puVar5 = (undefined8 *)(*param_1 + 7U & 0xfffffff8);
    *param_1 = (int)(puVar5 + 1);
    uVar10 = *puVar5;
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar8 = (undefined4)uVar10;
    puVar3 = &DAT_7006df5f;
LAB_71a962b8:
    FUN_71a962fc(param_3,puVar3,uVar8,uVar7);
    break;
  case 9:
    puVar6 = (undefined4 *)*param_1;
    *param_1 = (int)(puVar6 + 1);
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (param_3,*puVar6);
    break;
  case 10:
    puVar6 = (undefined4 *)*param_1;
    *param_1 = (int)(puVar6 + 1);
    pbVar1 = (byte *)*puVar6;
    uVar9 = *(uint *)(pbVar1 + 4);
    pbVar4 = *(byte **)(pbVar1 + 8);
    if ((*pbVar1 & 1) == 0) {
      pbVar4 = pbVar1 + 1;
      uVar9 = (uint)(*pbVar1 >> 1);
    }
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_3,pbVar4,uVar9);
    break;
  case 0xb:
    piVar2 = (int *)*param_1;
    *param_1 = (int)(piVar2 + 1);
    puVar6 = (undefined4 *)*piVar2;
    thunk_fhlKQVWCkXjQqdZwkJIRjwWJrcFxtnfgrsAsdbEtVBxoaByIXZIYAMuTfembqomsLbaiKNlffzPXM_
              (param_3,*puVar6,puVar6[1]);
    break;
  case 0xc:
    puVar6 = (undefined4 *)*param_1;
    puVar3 = &DAT_7006494a;
LAB_71a961f0:
    *param_1 = (int)(puVar6 + 1);
LAB_71a961f8:
    FUN_71a962fc(param_3,puVar3,*puVar6);
    break;
  default:
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (param_3,s__Invalid_CheckArgType__7006824c);
    return 0;
  }
  uVar8 = 1;
  *param_2 = *param_2 + 1;
switchD_71a960d8_caseD_0:
  return uVar8;
}


// =========================================================================
// Function: FUN_71a962fc
// Entry: 0x71a962fc | Size: 156 bytes
// =========================================================================

void FUN_71a962fc(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar4 = &uStack_8;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = imp_vsnprintf(0,0,param_2,&uStack_8,&uStack_8);
  if (0 < iVar1) {
    uVar3 = *(uint *)(param_1 + 4);
    if ((*param_1 & 1) == 0) {
      uVar3 = (uint)(*param_1 >> 1);
    }
    thunk_wLbjLaQkcEfeJRuCRxg_oDQcVLMtFLsEzzpxnohPiQoEZoiZepfgwvWqHNdtGu_imMLxObZzXQrY
              (param_1,uVar3 + iVar1,0);
    pbVar2 = *(byte **)(param_1 + 8);
    if ((*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
    }
    imp_vsnprintf(pbVar2 + uVar3,iVar1 + 1,param_2,&uStack_8,puVar4);
  }
  return;
}


// =========================================================================
// Function: UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
// Entry: 0x71a96398 | Size: 400 bytes
// =========================================================================

void UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint auStack_50 [4];
  uint auStack_40 [4];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  char *pcStack_1c;
  
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_1c = param_4;
  puVar1 = (undefined4 *)imp___errno();
  uVar2 = *puVar1;
  FUN_71a962fc(&uStack_30,s_____Fatal_error_in___s__line__d___7006e92f,param_1,param_2,uVar2,param_3
              );
  if (*param_4 == '\r') {
    pcStack_1c = param_4 + 1;
    auStack_40[1] = 0;
    auStack_40[0] = 0;
    auStack_40[2] = 0;
    auStack_50[1] = 0;
    auStack_50[0] = 0;
    auStack_50[2] = 0;
    iVar3 = thunk_JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
                      (&stack0xffffffe0,&pcStack_1c,auStack_40);
    if (iVar3 != 0) {
      iVar3 = thunk_JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
                        (&stack0xffffffe0,&pcStack_1c,auStack_50);
      if (iVar3 != 0) {
        uVar4 = auStack_40[2];
        if ((auStack_40[0] & 1) == 0) {
          uVar4 = (uint)auStack_40 | 1;
        }
        uVar5 = auStack_50[2];
        if ((auStack_50[0] & 1) == 0) {
          uVar5 = (uint)auStack_50 | 1;
        }
        FUN_71a962fc(&uStack_30,s___s_vs___s____7006bc03,uVar4,uVar5,uVar2,param_3);
      }
      if (((byte)auStack_50[0] & 1) != 0) {
        thunk_qNQrlu(auStack_50[2]);
      }
    }
    if ((auStack_40[0] & 1) != 0) {
      thunk_qNQrlu(auStack_40[2]);
    }
  }
  else {
    thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
              (&uStack_30,&DAT_7006252b);
  }
  do {
    iVar3 = thunk_JbHVjycxZyFMmniiOcG_cVOy_eQOgIIzKONRTwIcDfEgtyaRpSXyOWwXQvFwRcKcUSpYutLqmTMrQtwIdCrPVoqWYn_MWwzHNclWrhtDXtsHSNjVwYTwUYUSDLtOEtYQvVrVKMJIxI_l
                      (&stack0xffffffe0,&pcStack_1c,&uStack_30);
  } while (iVar3 != 0);
  uVar4 = uStack_2c;
  uVar5 = uStack_28;
  if ((uStack_30 & 1) == 0) {
    uVar5 = (uint)&uStack_30 | 1;
    uVar4 = uStack_30 >> 1 & 0x7f;
  }
  thunk_dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
            (uVar5,uVar4);
  if ((uStack_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_NAUpeWJSovvMoxKm_();
  }
  thunk_qNQrlu(uStack_28);
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj
// Entry: 0x71a96590 | Size: 108 bytes
// =========================================================================

void KmmiBtSNJ_tzyAkXCrpxKnJfebFWxwwKWqjRalZDwaVBRXWUrLkjj(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  puVar1 = (undefined4 *)imp___errno();
  FUN_71a962fc(&uStack_20,s_____Unreachable_code_reached__fi_7006c2e3,*puVar1);
  uVar3 = uStack_1c;
  uVar2 = uStack_18;
  if ((uStack_20 & 1) == 0) {
    uVar2 = (uint)&uStack_20 | 1;
    uVar3 = uStack_20 >> 1 & 0x7f;
  }
  thunk_dckOITuTpwCXkyNgjT_kGAXZtgDCsANIUCCuu_BlgFfLwvziCxZRTHAEVcKYXREsXTPKqOOtLQevGUWsyRCPcehoBgFJDDcCa
            (uVar2,uVar3);
  if ((uStack_20 & 1) != 0) {
    thunk_qNQrlu(uStack_18);
  }
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: XLakqtDZGaqXqcPw
// Entry: 0x71a96600 | Size: 20 bytes
// =========================================================================

void XLakqtDZGaqXqcPw(void)

{
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB();
}


// =========================================================================
// Function: LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
// Entry: 0x71a96cc0 | Size: 136 bytes
// =========================================================================

undefined4 *
LfrdYcqlPUba_MvLj_JWsefhJZNhkCsEkXklEoWl_fLk
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
// Function: UZbtMVsiPPdyFkAYoytpcX
// Entry: 0x71a96d70 | Size: 60 bytes
// =========================================================================

int UZbtMVsiPPdyFkAYoytpcX(int param_1)

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
// Function: RnJkDhMjYjJoQZWOQkdWUnDl__GMbsjW
// Entry: 0x71a96dac | Size: 88 bytes
// =========================================================================

void RnJkDhMjYjJoQZWOQkdWUnDl__GMbsjW(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = 7;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar2 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined2 *)(param_1 + 0x24) = 0x101;
  *(undefined4 *)(param_1 + 0x10) = 0xff;
  *(undefined4 *)(param_1 + 0x14) = 0xc;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}


// =========================================================================
// Function: atXrDdkiBQkYk_WWzrJTaRxulpnABSeDaDIwwjBGVzZjDofxwjPhIDpjKkSIxjLvhVLGslSzhTYkLu
// Entry: 0x71a96e04 | Size: 540 bytes
// =========================================================================

void atXrDdkiBQkYk_WWzrJTaRxulpnABSeDaDIwwjBGVzZjDofxwjPhIDpjKkSIxjLvhVLGslSzhTYkLu
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
// Function: ryvhCYZHeNnHXRqiyAdBVRDLoOIfYJwewazGALbYE
// Entry: 0x71a97038 | Size: 200 bytes
// =========================================================================

undefined4 ryvhCYZHeNnHXRqiyAdBVRDLoOIfYJwewazGALbYE(uint *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[10];
  if (uVar3 == 0) {
    param_3 = (uint)*(byte *)((int)param_1 + 0x26);
    param_2 = 0;
  }
  if (uVar3 != 0 || param_3 != 0) {
    if (uVar3 < 0x100) {
      uVar2 = *param_1;
      if ((int)uVar3 < (int)uVar2) {
        param_1[10] = uVar2;
        uVar3 = uVar2;
      }
      (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2]);
      *(undefined1 *)(param_1 + 0x10) = 1;
      param_1[0xf] = 0;
      *(undefined1 *)((int)param_1 + 0x26) = 0;
      param_1[3] = uVar3;
      return 0;
    }
    iVar1 = thunk_lilHXuZEhneNWPvoAPfLvmvCz_RFvgfbGZxzMxlM_ANPGdDNhYcwail();
    if (iVar1 == 0) {
      thunk_XXYww_LYJfprwRAykVsBeEPobXnAJFukidCzPmQtyfk_KMPz_UVOG
                (&DAT_700957f2,s_____webrtc_apm_src_webrtc_module_70067af6,0xa9b,
                 s__agc__VolumeCallbacks_returned_a_7006b455,uVar3);
      return 0xffffffff;
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}


// =========================================================================
// Function: jAFuBLBaRXUqCCtrJtKWInerYgvdcbva
// Entry: 0x71a9710c | Size: 292 bytes
// =========================================================================

void jAFuBLBaRXUqCCtrJtKWInerYgvdcbva(int *param_1,int param_2)

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
// Function: RpnYhAjjGiVlOxfgSQgRpEvafZfZvKfpeP_Kpy
// Entry: 0x71a97234 | Size: 152 bytes
// =========================================================================

void RpnYhAjjGiVlOxfgSQgRpEvafZfZvKfpeP_Kpy(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  double dVar6;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != *(int *)(param_1 + 0x18)) {
    pfVar2 = (float *)&DAT_71a972cc;
    if (iVar3 < *(int *)(param_1 + 0x18)) {
      pfVar2 = (float *)&DAT_71a972d0;
    }
    fVar5 = *(float *)(param_1 + 0x20) + *pfVar2;
    dVar6 = (double)imp_floor(SUB84((double)fVar5 + 0.5,0),
                              (int)((ulonglong)((double)fVar5 + 0.5) >> 0x20));
    *(float *)(param_1 + 0x20) = fVar5;
    iVar1 = (int)(longlong)dVar6;
    fVar4 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    if ((ABS(fVar5 - fVar4) < 0.025) && (iVar3 != iVar1)) {
      *(int *)(param_1 + 0x2c) = iVar1;
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(float *)(param_1 + 0x20) = fVar4;
      *(int *)(param_1 + 0x1c) = iVar1;
    }
  }
  return;
}


// =========================================================================
// Function: kYClKWvSiiSrstxdXyzlxODsqAfvHJUUyhbk
// Entry: 0x71a972d8 | Size: 248 bytes
// =========================================================================

void kYClKWvSiiSrstxdXyzlxODsqAfvHJUUyhbk(int param_1,int param_2)

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
// Function: jcQxMhiNjBIZGKucUyLGBPMQEKRNYDdAy
// Entry: 0x71a973d8 | Size: 100 bytes
// =========================================================================

void jcQxMhiNjBIZGKucUyLGBPMQEKRNYDdAy(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)VectorSignedToFloat(0xff - *(int *)(param_1 + 0x38),(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (float)imp_floorf(((255.0 - fVar1) / fVar2) * 6.0 + 0.5);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x14) = (int)(fVar1 + 12.0);
  return;
}


// =========================================================================
// Function: bkVEtPhgFrywaDJeLUIzLXcPiWxQs
// Entry: 0x71a97440 | Size: 304 bytes
// =========================================================================

void bkVEtPhgFrywaDJeLUIzLXcPiWxQs(int param_1,int param_2)

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
// Function: QoXksRIsHTAKCdnVzjHyqLvirrmkgPSjylb_OBoMQfiFhWSveGJ
// Entry: 0x71a97580 | Size: 28 bytes
// =========================================================================

void QoXksRIsHTAKCdnVzjHyqLvirrmkgPSjylb_OBoMQfiFhWSveGJ(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x24) != param_2;
  if (bVar1) {
    *(char *)(param_1 + 0x24) = (char)param_2;
  }
  if (bVar1 && param_2 != 0) {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}


// =========================================================================
// Function: ZVpnmxNEsLBXizigMdpzPDourxIzSssuBOrljKgqgvJjsCatSAkeaEojaHLqiCCPsvLlpKRgzBPJlAwAJOzPOJulPXpIsXAMJvKkR_cAmONft
// Entry: 0x71a9759c | Size: 72 bytes
// =========================================================================

undefined4
ZVpnmxNEsLBXizigMdpzPDourxIzSssuBOrljKgqgvJjsCatSAkeaEojaHLqiCCPsvLlpKRgzBPJlAwAJOzPOJulPXpIsXAMJvKkR_cAmONft
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = thunk_OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
                    (param_1,1,param_2);
  piVar2 = *(int **)(**(int **)(iVar1 + 0x34) + 8);
  *(undefined4 *)(**(int **)(iVar1 + 0x34) + 8) = param_3;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
// Entry: 0x71a975e4 | Size: 1384 bytes
// =========================================================================

char * OPY_EnoLaelnyjXpa_owAfJvCLo_VYNTzfRhSGKxItwGHSVSDTANhglfkroRBnkWViCbWDTDDYIvMvypOzpqPSXfhcV_oaxxpSMDU
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
// Function: QjtNXmvwEfZkyXyxkOVbLUaPGNNTPfSt
// Entry: 0x71a97c48 | Size: 192 bytes
// =========================================================================

int QjtNXmvwEfZkyXyxkOVbLUaPGNNTPfSt(int param_1)

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
// Function: ygQPLkDIQfoNYulaxVYohUbywiPybBPRmLnASW_aff
// Entry: 0x71a97d08 | Size: 256 bytes
// =========================================================================

void ygQPLkDIQfoNYulaxVYohUbywiPybBPRmLnASW_aff(char *param_1)

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
// Function: HwnkBwAeHLYhsRCsHFcnxwBinHmRvjwYCALWPMkwbEYjRvguqSWjro
// Entry: 0x71a97e08 | Size: 132 bytes
// =========================================================================

void HwnkBwAeHLYhsRCsHFcnxwBinHmRvjwYCALWPMkwbEYjRvguqSWjro(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x34);
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  uVar1 = *(int *)(param_1 + 0x38) - (int)piVar5 >> 2;
  iVar4 = *(int *)(*piVar5 + 0x28);
  if (1 < uVar1) {
    uVar3 = 1;
    do {
      iVar2 = *(int *)(piVar5[uVar3] + 0x28);
      if (iVar2 < iVar4) {
        *(uint *)(param_1 + 0x24) = uVar3;
        iVar4 = iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  if (*param_1 != '\0') {
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
  }
  return;
}


// =========================================================================
// Function: EcvdTTVMkWxqvsrDrNzJnianzufJQHDSMrPuQdDlGKMXeeHVMUEIiCPjUVUcrZyUHTRFjVyFE
// Entry: 0x71a97e8c | Size: 336 bytes
// =========================================================================

void EcvdTTVMkWxqvsrDrNzJnianzufJQHDSMrPuQdDlGKMXeeHVMUEIiCPjUVUcrZyUHTRFjVyFE
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
// Function: rGsmdSusvLW_Y_WZDebCCuXRdhtEspBljrtjVqiAkrsGVBAGb_zVBrZitESUhrcL_BH
// Entry: 0x71a98010 | Size: 1252 bytes
// =========================================================================

void rGsmdSusvLW_Y_WZDebCCuXRdhtEspBljrtjVqiAkrsGVBAGb_zVBrZitESUhrcL_BH(char *param_1,int param_2)

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
  int in_r12;
  int extraout_r12;
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
// Function: fIiTsBF_sHvTgCWdWiqLjqmEyjqIthuhwqTbisZFbwxNcfvznveixosJ
// Entry: 0x71a98534 | Size: 40 bytes
// =========================================================================

void fIiTsBF_sHvTgCWdWiqLjqmEyjqIthuhwqTbisZFbwxNcfvznveixosJ(void)

{
  thunk_owgXutAgTxTQPmSNQvxeboGDlYXMPjxCoFV_iFaMFZNpPfUbGkgHbtQzzYgHFIqPuHjYylSKxNbgijaFGr();
  return;
}


// =========================================================================
// Function: owgXutAgTxTQPmSNQvxeboGDlYXMPjxCoFV_iFaMFZNpPfUbGkgHbtQzzYgHFIqPuHjYylSKxNbgijaFGr
// Entry: 0x71a9855c | Size: 696 bytes
// =========================================================================

void owgXutAgTxTQPmSNQvxeboGDlYXMPjxCoFV_iFaMFZNpPfUbGkgHbtQzzYgHFIqPuHjYylSKxNbgijaFGr
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
// Function: lLWkVLtZeXtTApHKSuEHgdBJIojouzfIDwHLlIKS_jqM_AuTACefEGzT
// Entry: 0x71a9881c | Size: 24 bytes
// =========================================================================

void lLWkVLtZeXtTApHKSuEHgdBJIojouzfIDwHLlIKS_jqM_AuTACefEGzT(undefined4 *param_1,int param_2)

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
// Function: FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW
// Entry: 0x71a98834 | Size: 128 bytes
// =========================================================================

void FeuUQEWDZNebisT_DWC_tmYKGuZxRAPtnSNizegKSRMkgBCXiTuhbQsQuwHRW(int param_1,uint param_2)

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
// Function: OMLyAUroPrNDbKNXLqAQPxgDUEpCHezz_ZJKZRuLOFnCZUyIEj
// Entry: 0x71a988b4 | Size: 84 bytes
// =========================================================================

float OMLyAUroPrNDbKNXLqAQPxgDUEpCHezz_ZJKZRuLOFnCZUyIEj(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x38);
  piVar1 = *(int **)(param_1 + 0x34);
  fVar2 = 0.0;
  while (piVar1 != piVar5) {
    piVar4 = piVar1 + 1;
    fVar3 = (float)(**(code **)(**(int **)(*piVar1 + 8) + 0x1c))();
    piVar1 = piVar4;
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}


// =========================================================================
// Function: BTVheCKpcjkXJRjkjiQMgdnbRuTwknZzGhmniYwCKsAT_cOZCjLHXDN
// Entry: 0x71a9890c | Size: 176 bytes
// =========================================================================

void BTVheCKpcjkXJRjkjiQMgdnbRuTwknZzGhmniYwCKsAT_cOZCjLHXDN(char *param_1,undefined4 param_2)

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
// Function: FUN_71a99a88
// Entry: 0x71a99a88 | Size: 20 bytes
// =========================================================================

void FUN_71a99a88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71a99af0
// Entry: 0x71a99af0 | Size: 20 bytes
// =========================================================================

void FUN_71a99af0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: VpbjVnTGIRBrjNvYPQ
// Entry: 0x71a99b58 | Size: 96 bytes
// =========================================================================

undefined4 * VpbjVnTGIRBrjNvYPQ(undefined4 *param_1)

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
// Function: gPAGShamUqSgxBOreO
// Entry: 0x71a99bdc | Size: 96 bytes
// =========================================================================

undefined4 * gPAGShamUqSgxBOreO(undefined4 *param_1)

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
// Function: qTvxKakvcslsCxHPbw
// Entry: 0x71a99c40 | Size: 28 bytes
// =========================================================================

void qTvxKakvcslsCxHPbw(undefined4 param_1)

{
  thunk_gPAGShamUqSgxBOreO();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: qaIRESVdXhMRluHvrsBFRcXqSjjQbfvwyEExD_LpwHbYMfuRhwr
// Entry: 0x71a99c5c | Size: 120 bytes
// =========================================================================

void qaIRESVdXhMRluHvrsBFRcXqSjjQbfvwyEExD_LpwHbYMfuRhwr(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  
  thunk_s_fzsUWJPuaXczdBUWBhObasxJRBdRxVKeUmXQBDtjcwiVBGsr_pi
            (param_1 + 0x20,param_2,param_3,param_3 * 100);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x30) != iVar1) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      puVar2 = (undefined8 *)(*(int *)(param_1 + 0x20) + iVar3);
      thunk_EmKEwmqKrgPklnpXPBmQYkGwmaYZmjFeEkjXwiY
                (*(undefined4 *)(param_1 + 0x14),puVar2,(int)*(undefined8 *)(iVar1 + iVar3),
                 (int)((ulonglong)*(undefined8 *)(iVar1 + iVar3) >> 0x20),*puVar2);
      iVar1 = *(int *)(param_1 + 0x2c);
      iVar3 = iVar3 + 8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x30) - iVar1 >> 3));
  }
  return;
}


// =========================================================================
// Function: gRgyojxiAkjFVxhrqOuZyLprEtVccDhz
// Entry: 0x71a99cd4 | Size: 168 bytes
// =========================================================================

undefined4 gRgyojxiAkjFVxhrqOuZyLprEtVccDhz(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  double dVar2;
  
  uVar1 = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (99 < **(int **)(param_1 + 0x14)) {
    dVar2 = (double)thunk_VpBqURepcoFFtHABcmzgULPyXXwqy_xNiVuQOasVfKxVwR(*(int **)(param_1 + 0x14));
    uVar1 = 0;
    if (30.0 <= dVar2) {
      thunk_MOAaukpeOIZgFbAfzPXFzXnQZiELzFIqrvQRPkpxiCcG(*(undefined4 *)(param_1 + 0x14));
      dVar2 = (double)thunk_ndzEUwqhAhYAMnRjKEoRfzkUfhruD();
      dVar2 = *(double *)(param_1 + 8) - dVar2;
      dVar2 = (double)thunk_gXDEmQIiMDKTgXOqJyCSpLHqu
                                (SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
      dVar2 = (double)imp_floor(SUB84(dVar2 + 0.5,0),(int)((ulonglong)(dVar2 + 0.5) >> 0x20));
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *param_2 = (int)(longlong)dVar2;
      thunk_mtdKhYFI_vhpibyWVtOBUHwNOcs_LLYvvGkRq(uVar1);
      uVar1 = 1;
    }
  }
  return uVar1;
}


// =========================================================================
// Function: seuQbHDNeisciyVEAUM_Og
// Entry: 0x71a99d7c | Size: 8 bytes
// =========================================================================

void seuQbHDNeisciyVEAUM_Og(int param_1)

{
  thunk_mtdKhYFI_vhpibyWVtOBUHwNOcs_LLYvvGkRq(*(undefined4 *)(param_1 + 0x14));
  return;
}


// =========================================================================
// Function: TrODlJJMHMkWmJemVNvLbQXjXzcrViBisJTSCia
// Entry: 0x71a99d84 | Size: 72 bytes
// =========================================================================

undefined4 TrODlJJMHMkWmJemVNvLbQXjXzcrViBisJTSCia(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined8 uVar2;
  
  uVar1 = 0xffffffff;
  if (0xffffff9c < param_2) {
    *(uint *)(param_1 + 0x10) = param_2;
    uVar2 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = thunk_TSkDdXZgQldUgStEWziqRixTYmV((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    uVar1 = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  return uVar1;
}


// =========================================================================
// Function: NdzvesqzYaOwvntzCNHQuVggpHQsUQYsNIek
// Entry: 0x71a99dcc | Size: 8 bytes
// =========================================================================

undefined4 NdzvesqzYaOwvntzCNHQuVggpHQsUQYsNIek(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// =========================================================================
// Function: FHNayHlQBTYivYCNzRfLUSvQogkBuFLfblQE
// Entry: 0x71a99dd4 | Size: 8 bytes
// =========================================================================

undefined4 FHNayHlQBTYivYCNzRfLUSvQogkBuFLfblQE(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// =========================================================================
// Function: gXDEmQIiMDKTgXOqJyCSpLHqu
// Entry: 0x71a9a190 | Size: 28 bytes
// =========================================================================

double gXDEmQIiMDKTgXOqJyCSpLHqu(undefined4 param_1,undefined4 param_2)

{
  return ((double)CONCAT44(param_2,param_1) * 8.6858896380803) / 5.8195460575138;
}


// =========================================================================
// Function: ndzEUwqhAhYAMnRjKEoRfzkUfhruD
// Entry: 0x71a9a1c0 | Size: 60 bytes
// =========================================================================

double ndzEUwqhAhYAMnRjKEoRfzkUfhruD(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  
  if ((double)CONCAT44(param_2,param_1) != 0.0) {
    dVar1 = (double)imp_log(param_1,param_2);
    return dVar1 * 5.8195460575138;
  }
  return -15.0;
}


// =========================================================================
// Function: fbkfzufeklcuABmCSIKKuLCjA
// Entry: 0x71a9a208 | Size: 28 bytes
// =========================================================================

double fbkfzufeklcuABmCSIKKuLCjA(undefined4 param_1,undefined4 param_2)

{
  return ((double)CONCAT44(param_2,param_1) * 5.8195460575138) / 8.6858896380803;
}


// =========================================================================
// Function: TSkDdXZgQldUgStEWziqRixTYmV
// Entry: 0x71a9a238 | Size: 36 bytes
// =========================================================================

double TSkDdXZgQldUgStEWziqRixTYmV(undefined4 param_1,undefined4 param_2)

{
  return (((double)CONCAT44(param_2,param_1) + 90.0) * 5.8195460575138) / 8.6858896380803;
}


// =========================================================================
// Function: XqGRNqPFApvSQGRruhXWk_FyqzoqWjPEw
// Entry: 0x71a9a2b0 | Size: 36 bytes
// =========================================================================

undefined4 * XqGRNqPFApvSQGRruhXWk_FyqzoqWjPEw(undefined4 *param_1)

{
  *param_1 = 0;
  imp___aeabi_memclr8(param_1 + 2,0x288);
  return param_1;
}


// =========================================================================
// Function: YLqcifXKZGMwoIrIUHHcFbxEhlAJcnsfW
// Entry: 0x71a9a2d4 | Size: 96 bytes
// =========================================================================

undefined4 * YLqcifXKZGMwoIrIUHHcFbxEhlAJcnsfW(undefined4 *param_1,uint param_2)

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
// Function: MZrzQnjjCNkPKaXZEPDPvFIVyzevFMeDF
// Entry: 0x71a9a344 | Size: 64 bytes
// =========================================================================

int MZrzQnjjCNkPKaXZEPDPvFIVyzevFMeDF(int param_1)

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
// Function: EmKEwmqKrgPklnpXPBmQYkGwmaYZmjFeEkjXwiY
// Entry: 0x71a9a388 | Size: 304 bytes
// =========================================================================

void EmKEwmqKrgPklnpXPBmQYkGwmaYZmjFeEkjXwiY
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
// Function: uteJuDZZMBDCYjlEBAYoWzhBxZyIZVsDHnWvUAILkWNJXFozhzEDDYKtQRn
// Entry: 0x71a9a4e4 | Size: 92 bytes
// =========================================================================

void uteJuDZZMBDCYjlEBAYoWzhBxZyIZVsDHnWvUAILkWNJXFozhzEDDYKtQRn(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x284) == 0) {
    return;
  }
  iVar2 = param_1 + *(int *)(*(int *)(param_1 + 0x27c) + *(int *)(param_1 + 0x280) * 4) * 8;
  uVar1 = -*(int *)(*(int *)(param_1 + 0x278) + *(int *)(param_1 + 0x280) * 4);
  uVar4 = *(uint *)(iVar2 + 0x10);
  *(uint *)(iVar2 + 0x10) = uVar4 + uVar1;
  uVar3 = *(uint *)(param_1 + 8);
  *(uint *)(iVar2 + 0x14) =
       *(int *)(iVar2 + 0x14) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar4,uVar1);
  *(uint *)(param_1 + 8) = uVar3 + uVar1;
  *(uint *)(param_1 + 0xc) =
       *(int *)(param_1 + 0xc) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
  return;
}


// =========================================================================
// Function: KJngrdEWEhtajUYJUtiONLPILmuelYisQQiJEXQIbjvY
// Entry: 0x71a9a540 | Size: 168 bytes
// =========================================================================

int KJngrdEWEhtajUYJUtiONLPILmuelYisQQiJEXQIbjvY
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)CONCAT44(param_4,param_3);
  iVar1 = 0;
  if ((0.0759621091765857 < dVar2) && (iVar1 = 0x4c, dVar2 < 35664.7189489147)) {
    dVar3 = (double)imp_log(param_3,param_4);
    dVar3 = (dVar3 + 2.57752062648587) * 5.81954605750359;
    dVar3 = (double)imp_floor(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
    iVar1 = (int)(longlong)dVar3;
    if (((double)(&DAT_70095810)[iVar1] + (double)(&DAT_70095810)[iVar1 + 1]) * 0.5 < dVar2) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


// =========================================================================
// Function: qAvegSplzNLgWwWHWHXPggDgtqWzEkwVGMAnfSRWECXmAMnOjYHVjesxZxJ_
// Entry: 0x71a9a60c | Size: 352 bytes
// =========================================================================

void qAvegSplzNLgWwWHWHXPggDgtqWzEkwVGMAnfSRWECXmAMnOjYHVjesxZxJ_
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
// Function: XDhVIOgYvazaVRZLbwEiVftfwfAArykASTiYhwiKlyHW
// Entry: 0x71a9a76c | Size: 56 bytes
// =========================================================================

void XDhVIOgYvazaVRZLbwEiVftfwfAArykASTiYhwiKlyHW(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + param_3 * 8;
  uVar3 = *(uint *)(iVar1 + 0x10);
  *(uint *)(iVar1 + 0x10) = uVar3 + param_2;
  uVar2 = *(uint *)(param_1 + 8);
  *(uint *)(iVar1 + 0x14) =
       *(int *)(iVar1 + 0x14) + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar3,param_2);
  *(uint *)(param_1 + 8) = uVar2 + param_2;
  *(uint *)(param_1 + 0xc) =
       *(int *)(param_1 + 0xc) + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar2,param_2);
  return;
}


// =========================================================================
// Function: jHZcGkMsZznBDmkJmvOLOtaDtFZaaZVYg_SNUqMRrPNtgJmr
// Entry: 0x71a9a7a4 | Size: 172 bytes
// =========================================================================

void jHZcGkMsZznBDmkJmvOLOtaDtFZaaZVYg_SNUqMRrPNtgJmr(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (*(int *)(param_1 + 0x28c) < 1) {
    return;
  }
  iVar11 = *(int *)(param_1 + 0x278);
  iVar12 = *(int *)(param_1 + 0x27c);
  iVar4 = *(int *)(param_1 + 0x288);
  if (0 < *(int *)(param_1 + 0x280)) {
    iVar4 = *(int *)(param_1 + 0x280);
  }
  do {
    iVar6 = iVar4 + -1;
    iVar8 = *(int *)(iVar12 + iVar6 * 4);
    iVar7 = *(int *)(iVar11 + iVar6 * 4);
    *(undefined4 *)(iVar11 + iVar6 * 4) = 0;
    iVar5 = *(int *)(param_1 + 0x28c);
    puVar3 = (uint *)(param_1 + 0x10 + iVar8 * 8);
    uVar9 = *puVar3;
    *(int *)(param_1 + 0x28c) = iVar5 + -1;
    uVar2 = -iVar7;
    *puVar3 = uVar9 + uVar2;
    iVar7 = *(int *)(param_1 + 0x288);
    uVar10 = *(uint *)(param_1 + 8);
    puVar3[1] = puVar3[1] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar9,uVar2);
    *(uint *)(param_1 + 8) = uVar10 + uVar2;
    bVar1 = 1 < iVar4;
    iVar4 = iVar7;
    if (bVar1) {
      iVar4 = iVar6;
    }
    *(uint *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar10,uVar2);
  } while (1 < iVar5);
  return;
}


// =========================================================================
// Function: VpBqURepcoFFtHABcmzgULPyXXwqy_xNiVuQOasVfKxVwR
// Entry: 0x71a9a850 | Size: 36 bytes
// =========================================================================

double VpBqURepcoFFtHABcmzgULPyXXwqy_xNiVuQOasVfKxVwR(int param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_71ba1980(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return dVar1 * 0.0009765625;
}


// =========================================================================
// Function: nEDAmlzXJkeLWtj_mwYjTINzwJsOKbUKkpGVsj
// Entry: 0x71a9a880 | Size: 32 bytes
// =========================================================================

undefined4 nEDAmlzXJkeLWtj_mwYjTINzwJsOKbUKkpGVsj(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_MwhHq(0x290);
  thunk_XqGRNqPFApvSQGRruhXWk_FyqzoqWjPEw();
  return uVar1;
}


// =========================================================================
// Function: qHqYRlOlyOiAbvHtJzZxzIWXMunrhGiFhbZiox
// Entry: 0x71a9a8ac | Size: 56 bytes
// =========================================================================

undefined4 qHqYRlOlyOiAbvHtJzZxzIWXMunrhGiFhbZiox(int param_1)

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
// Function: mtdKhYFI_vhpibyWVtOBUHwNOcs_LLYvvGkRq
// Entry: 0x71a9a8f0 | Size: 40 bytes
// =========================================================================

void mtdKhYFI_vhpibyWVtOBUHwNOcs_LLYvvGkRq(undefined4 *param_1)

{
  param_1[0xa3] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *param_1 = 0;
  imp___aeabi_memclr8(param_1 + 2,0x270);
  return;
}


// =========================================================================
// Function: MOAaukpeOIZgFbAfzPXFzXnQZiELzFIqrvQRPkpxiCcG
// Entry: 0x71a9a918 | Size: 144 bytes
// =========================================================================

double MOAaukpeOIZgFbAfzPXFzXnQZiELzFIqrvQRPkpxiCcG(int param_1)

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
// Function: duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
// Entry: 0x71a9acf8 | Size: 628 bytes
// =========================================================================

void duVepgzouDFArhheirONBcaB_vJNf_SezgE_JExjccNEU_oOfaGOJGydGklbegebkVEkRVgAxBuCZjaXoCouaOwIRr_cGJmNsYPGbBrzpXysavrDOyIuNQqZGxiye
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
// Function: FUN_71a9afb8
// Entry: 0x71a9afb8 | Size: 412 bytes
// =========================================================================

void FUN_71a9afb8(float param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,char param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  puVar3 = (undefined4 *)thunk_MwhHq(0x24);
  *puVar3 = &DAT_70b13220;
  piVar7 = puVar3 + 1;
  *piVar7 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = param_4;
  puVar3[5] = param_5;
  puVar3[6] = param_6;
  *(bool *)(puVar3 + 8) = param_7 != '\0';
  puVar3[7] = (int)param_1;
  if (0 < param_3) {
    do {
      while( true ) {
        uVar4 = thunk_MwhHq(0x14);
        thunk_uieYDQXyaeuvhJrnXvEnepNSYAZSDlDQDwzetjcrLFQe(uVar4,param_6 + param_5);
        puVar10 = (undefined4 *)puVar3[2];
        if (puVar10 < (undefined4 *)puVar3[3]) break;
        iVar9 = *piVar7;
        iVar1 = (int)puVar10 - iVar9 >> 2;
        uVar11 = iVar1 + 1;
        if (0x3fffffff < uVar11) {
          FUN_71a9c590(piVar7);
LAB_71a9b150:
                    /* WARNING: Subroutine does not return */
          FUN_719fe2ec();
        }
        uVar5 = (int)puVar3[3] - iVar9;
        uVar2 = (int)uVar5 >> 1;
        if (uVar11 < uVar2) {
          uVar11 = uVar2;
        }
        if (0x7ffffffb < uVar5) {
          uVar11 = 0x3fffffff;
        }
        if (uVar11 == 0) {
          iVar6 = 0;
        }
        else {
          if (0x3fffffff < uVar11) goto LAB_71a9b150;
          iVar6 = thunk_MwhHq(uVar11 << 2);
        }
        puVar8 = (undefined4 *)(iVar6 + iVar1 * 4);
        *puVar8 = uVar4;
        imp___aeabi_memcpy4(iVar6,iVar9,(int)puVar10 - iVar9);
        puVar8 = puVar8 + 1;
        puVar3[1] = iVar6;
        puVar3[2] = puVar8;
        puVar3[3] = iVar6 + uVar11 * 4;
        if (iVar9 != 0) {
          thunk_qNQrlu(iVar9);
        }
        param_3 = param_3 + -1;
        puVar3[2] = puVar8;
        if (param_3 == 0) goto LAB_71a9b130;
      }
      *puVar10 = uVar4;
      param_3 = param_3 + -1;
      puVar3[2] = puVar10 + 1;
    } while (param_3 != 0);
  }
LAB_71a9b130:
  *param_2 = puVar3;
  return;
}


// =========================================================================
// Function: FUN_71a9b188
// Entry: 0x71a9b188 | Size: 140 bytes
// =========================================================================

undefined4 * FUN_71a9b188(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1[1];
  *param_1 = &DAT_70b131f8;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[2];
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar2 = *piVar4;
        *piVar4 = 0;
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 8) != 0) {
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 8);
            thunk_qNQrlu();
          }
          thunk_qNQrlu(iVar2);
        }
      } while (piVar4 != piVar3);
      piVar1 = (int *)param_1[1];
    }
    param_1[2] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71a9b2ec
// Entry: 0x71a9b2ec | Size: 184 bytes
// =========================================================================

void FUN_71a9b2ec(int param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = *param_2;
  if (0 < iVar4) {
    iVar3 = param_2[1];
    iVar5 = 0;
    fVar11 = 0.0;
    fVar10 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    while( true ) {
      pfVar1 = (float *)(param_2[2] + iVar3 * iVar5 * 4);
      pfVar2 = pfVar1 + iVar3;
      fVar6 = fVar11;
      fVar7 = fVar11;
      fVar8 = fVar11;
      if (iVar3 != 0) {
        do {
          fVar9 = *pfVar1;
          pfVar1 = pfVar1 + 1;
          fVar6 = fVar6 + fVar9 * fVar9;
          fVar7 = ABS(fVar9);
          if (ABS(fVar9) < fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = fVar7;
        } while (pfVar1 != pfVar2);
      }
      thunk_WQupJtOwhaLSwbLvCYHvRruPRgXWGlbRasyWWCCPyQMxZaymrvGTSzpJy
                (*(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4),fVar6 / fVar10,fVar7);
      iVar5 = iVar5 + 1;
      if (iVar5 == iVar4) break;
      iVar3 = param_2[1];
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71a9b3a8
// Entry: 0x71a9b3a8 | Size: 616 bytes
// =========================================================================

void FUN_71a9b3a8(int *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_68;
  float fStack_64;
  char cStack_60;
  float fStack_5c;
  float fStack_58;
  char cStack_54;
  
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_70061dea,0x8b,s_channel_>__0_70066834,
               &DAT_70095ef5,param_3,0);
  }
  uVar1 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
  if (uVar1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_module_70061dea,0x8c,
               s_channel_<_ch_buffers__size()_70071db9,&DAT_70095ef9,param_3,uVar1);
  }
  if ((param_6 < param_4) &&
     (thunk_onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
                (&fStack_5c,*(undefined4 *)(*(int *)(param_2 + 4) + param_3 * 4),0,
                 *(undefined4 *)(param_2 + 0x10)), cStack_54 != '\0')) {
    if (fStack_58 <= 1.0) {
      if (-90.309 <= *(float *)(param_2 + 0x1c)) goto LAB_71a9b5a4;
    }
    else {
      fVar2 = (float)imp_log10f(fStack_58);
      if (fVar2 * 20.0 + -90.309 <= *(float *)(param_2 + 0x1c)) goto LAB_71a9b5a4;
    }
    thunk_onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
              (&fStack_68,*(undefined4 *)(*(int *)(param_2 + 4) + param_3 * 4),
               *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14));
    if (cStack_60 != '\0') {
      if (cStack_54 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_71a914c4();
      }
      fVar5 = -90.309;
      fVar2 = fVar5;
      if (1.0 < fStack_58) {
        fVar2 = (float)imp_log10f(fStack_58);
        fVar2 = fVar2 * 20.0 + -90.309;
      }
      fVar3 = fVar5;
      if (1.0 < SQRT(fStack_5c)) {
        fVar3 = (float)imp_log10f(SQRT(fStack_5c));
        fVar3 = fVar3 * 20.0 + -90.309;
      }
      fVar4 = fVar5;
      if (1.0 < fStack_64) {
        fVar4 = (float)imp_log10f(fStack_64);
        fVar4 = fVar4 * 20.0 + -90.309;
      }
      if (1.0 < SQRT(fStack_68)) {
        fVar5 = (float)imp_log10f(SQRT(fStack_68));
        fVar5 = fVar5 * 20.0 + -90.309;
      }
      if (fVar2 - fVar3 < (fVar4 - fVar5) - *(float *)(param_2 + 0x20)) {
        param_5 = param_4 - param_5;
        if (param_5 < param_7) {
          param_7 = param_5;
        }
        if (param_5 <= param_6) {
          param_7 = param_6;
        }
        if (0 < param_4 - param_7) {
          *param_1 = param_4 - param_7;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
      }
    }
  }
LAB_71a9b5a4:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: FUN_71a9b62c
// Entry: 0x71a9b62c | Size: 140 bytes
// =========================================================================

undefined4 * FUN_71a9b62c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)param_1[1];
  *param_1 = &DAT_70b13220;
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)param_1[2];
    piVar1 = piVar3;
    if (piVar4 != piVar3) {
      do {
        piVar4 = piVar4 + -1;
        iVar2 = *piVar4;
        *piVar4 = 0;
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 8) != 0) {
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 8);
            thunk_qNQrlu();
          }
          thunk_qNQrlu(iVar2);
        }
      } while (piVar4 != piVar3);
      piVar1 = (int *)param_1[1];
    }
    param_1[2] = piVar3;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71a9b790
// Entry: 0x71a9b790 | Size: 184 bytes
// =========================================================================

void FUN_71a9b790(int param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = *param_2;
  if (0 < iVar4) {
    iVar3 = param_2[1];
    iVar5 = 0;
    fVar11 = 0.0;
    fVar10 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    while( true ) {
      pfVar1 = (float *)(param_2[2] + iVar3 * iVar5 * 4);
      pfVar2 = pfVar1 + iVar3;
      fVar6 = fVar11;
      fVar7 = fVar11;
      fVar8 = fVar11;
      if (iVar3 != 0) {
        do {
          fVar9 = *pfVar1;
          pfVar1 = pfVar1 + 1;
          fVar6 = fVar6 + fVar9 * fVar9;
          fVar7 = ABS(fVar9);
          if (ABS(fVar9) < fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = fVar7;
        } while (pfVar1 != pfVar2);
      }
      thunk_WQupJtOwhaLSwbLvCYHvRruPRgXWGlbRasyWWCCPyQMxZaymrvGTSzpJy
                (*(undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 4),fVar6 / fVar10,fVar7);
      iVar5 = iVar5 + 1;
      if (iVar5 == iVar4) break;
      iVar3 = param_2[1];
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71a9b84c
// Entry: 0x71a9b84c | Size: 576 bytes
// =========================================================================

void FUN_71a9b84c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fStack_60;
  float fStack_5c;
  char cStack_58;
  float fStack_54;
  float fStack_50;
  char cStack_4c;
  
  if (((param_6 < param_4) &&
      (thunk_onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
                 (&fStack_54,*(undefined4 *)(*(int *)(param_2 + 4) + param_3 * 4),
                  *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14)),
      cStack_4c != '\0')) &&
     (thunk_onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
                (&fStack_60,*(undefined4 *)(*(int *)(param_2 + 4) + param_3 * 4),0,
                 *(undefined4 *)(param_2 + 0x10)), cStack_58 != '\0')) {
    uVar7 = in_fpscr & 0xfffffff | (uint)(fStack_5c == 1.0) << 0x1e |
            (uint)(1.0 <= fStack_5c) << 0x1d;
    bVar1 = (byte)(uVar7 >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      fVar3 = -90.309;
    }
    else {
      fVar3 = (float)imp_log10f(fStack_5c);
      fVar3 = fVar3 * 20.0 + -90.309;
    }
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 0x1c),(byte)(uVar7 >> 0x16) & 3);
    if (fVar8 < fVar3) {
      if (cStack_4c == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_71a914c4();
      }
      fVar9 = -90.309;
      fVar3 = fVar9;
      if (1.0 < fStack_50) {
        fVar3 = (float)imp_log10f(fStack_50);
        fVar3 = fVar3 * 20.0 + -90.309;
      }
      fVar4 = fVar9;
      if (1.0 < SQRT(fStack_54)) {
        fVar4 = (float)imp_log10f(SQRT(fStack_54));
        fVar4 = fVar4 * 20.0 + -90.309;
      }
      if (1.0 < SQRT(fStack_60)) {
        fVar9 = (float)imp_log10f(SQRT(fStack_60));
        fVar9 = fVar9 * 20.0 + -90.309;
      }
      fVar9 = (fVar3 - fVar4) + fVar9;
      if (fVar8 < fVar9) {
        if (*(char *)(param_2 + 0x20) != '\0') {
          fVar3 = (float)imp_ceilf(fVar9);
          iVar5 = -(int)fVar3;
          if (-1 < iVar5) {
            iVar5 = 0;
          }
          if (iVar5 < -0xe) {
            iVar5 = -0xf;
          }
          iVar6 = param_4;
          if (0 < (int)fVar3) {
            iVar2 = param_4;
            do {
              iVar6 = iVar2;
              if (iVar6 <= param_6) break;
              iVar2 = iVar6 + -1;
            } while (iVar5 < *(int *)(&DAT_70095ad8 + iVar6 * 4) -
                             *(int *)(&DAT_70095ad8 + param_4 * 4));
          }
          if (param_5 < param_4 - iVar6) {
            param_5 = param_4 - iVar6;
          }
        }
        param_5 = param_4 - param_5;
        if (param_5 < param_7) {
          param_7 = param_5;
        }
        if (param_5 <= param_6) {
          param_7 = param_6;
        }
        if (param_7 < param_4) {
          *param_1 = param_4 - param_7;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// =========================================================================
// Function: FUN_71a9c590
// Entry: 0x71a9c590 | Size: 20 bytes
// =========================================================================

void FUN_71a9c590(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: QDXFZzXyosKiMeSAB_BzGzQQsmPYzfXNVyMdbTOBuZRxOQcXGxbtdl_
// Entry: 0x71a9c5f8 | Size: 72 bytes
// =========================================================================

undefined4 QDXFZzXyosKiMeSAB_BzGzQQsmPYzfXNVyMdbTOBuZRxOQcXGxbtdl_(float *param_1,float *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((ABS(*param_1 - *param_2) < 1e-06) && (ABS(param_1[1] - param_2[1]) < 1e-06)) {
    uVar1 = 1;
  }
  return uVar1;
}


// =========================================================================
// Function: uieYDQXyaeuvhJrnXvEnepNSYAZSDlDQDwzetjcrLFQe
// Entry: 0x71a9c644 | Size: 224 bytes
// =========================================================================

undefined4 * uieYDQXyaeuvhJrnXvEnepNSYAZSDlDQDwzetjcrLFQe(undefined4 *param_1,int param_2)

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
// Function: CPaclFkFTjdeVzlmFtZPzHQHugFwhtnotMJVBjgdIwKxfkYQ
// Entry: 0x71a9c738 | Size: 20 bytes
// =========================================================================

void CPaclFkFTjdeVzlmFtZPzHQHugFwhtnotMJVBjgdIwKxfkYQ(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}


// =========================================================================
// Function: WQupJtOwhaLSwbLvCYHvRruPRgXWGlbRasyWWCCPyQMxZaymrvGTSzpJy
// Entry: 0x71a9c74c | Size: 72 bytes
// =========================================================================

void WQupJtOwhaLSwbLvCYHvRruPRgXWGlbRasyWWCCPyQMxZaymrvGTSzpJy
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
// Function: onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
// Entry: 0x71a9c794 | Size: 212 bytes
// =========================================================================

void onifKCXEsNdbiDsupKHLsHnxcsbfBW_minCBgVJTWVVNcQhZVpiGAtwGaSlLyKMkNbD
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
// Function: FUN_71a9c9d4
// Entry: 0x71a9c9d4 | Size: 20 bytes
// =========================================================================

void FUN_71a9c9d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: gcnYGUZw_pCsNwMOhwfrbEkeRLaEQ
// Entry: 0x71a9ca3c | Size: 96 bytes
// =========================================================================

void gcnYGUZw_pCsNwMOhwfrbEkeRLaEQ(float *param_1,int param_2,undefined2 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 in_s7;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    fVar2 = fVar1 * 32768.0;
    if (32767.0 < fVar1 * 32768.0) {
      fVar2 = 32767.0;
    }
    if (fVar2 < -32768.0) {
      fVar2 = -32768.0;
    }
    param_2 = param_2 + -1;
    uVar3 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s7,fVar2),0x3f0000003f000000);
    *param_3 = (short)(int)(fVar2 + (float)uVar3);
    param_3 = param_3 + 1;
  } while (param_2 != 0);
  return;
}


// =========================================================================
// Function: vWnBOtFWEDATJshGLkTfRdfwZTsIN
// Entry: 0x71a9caa8 | Size: 44 bytes
// =========================================================================

void vWnBOtFWEDATJshGLkTfRdfwZTsIN(short *param_1,int param_2,float *param_3)

{
  uint in_fpscr;
  float fVar1;
  
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      fVar1 = (float)VectorSignedToFloat((int)*param_1,(byte)(in_fpscr >> 0x16) & 3);
      *param_3 = fVar1 * 3.0517578e-05;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV
// Entry: 0x71a9cad8 | Size: 120 bytes
// =========================================================================

void jqxtVTPNUCWAhprdtEIiiVhGZuL_tbMV(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (param_2 == 0) {
    return;
  }
  uVar6 = 0;
  if (3 < param_2) {
    uVar6 = param_2 & 0xfffffffc;
    puVar4 = param_3;
    puVar5 = param_1;
    uVar7 = uVar6;
    do {
      uVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 4;
      auVar10 = VectorCopyLong(uVar9,2,0);
      auVar10 = FixedToFP(auVar10,0,0,0,0x20);
      *puVar4 = auVar10._0_8_;
      puVar4[1] = auVar10._8_8_;
      puVar4 = puVar4 + 2;
    } while (uVar7 != 0);
    if (uVar6 == param_2) {
      return;
    }
  }
  puVar3 = (undefined4 *)((int)param_3 + uVar6 * 4);
  iVar2 = param_2 - uVar6;
  psVar1 = (short *)((int)param_1 + uVar6 * 2);
  do {
    iVar2 = iVar2 + -1;
    uVar8 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x16) & 3);
    *puVar3 = uVar8;
    puVar3 = puVar3 + 1;
    psVar1 = psVar1 + 1;
  } while (iVar2 != 0);
  return;
}


// =========================================================================
// Function: IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
// Entry: 0x71a9cb50 | Size: 88 bytes
// =========================================================================

void IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql(float *param_1,int param_2,undefined2 *param_3)

{
  float fVar1;
  undefined4 in_s5;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    if (32767.0 < fVar1) {
      fVar1 = 32767.0;
    }
    if (fVar1 < -32768.0) {
      fVar1 = -32768.0;
    }
    param_2 = param_2 + -1;
    uVar2 = VectorBitwiseSelect(0x8000000080000000,CONCAT44(in_s5,fVar1),0x3f0000003f000000);
    *param_3 = (short)(int)(fVar1 + (float)uVar2);
    param_3 = param_3 + 1;
  } while (param_2 != 0);
  return;
}


// =========================================================================
// Function: VXJnZdMGDcASooGSKgpqoygTkMUpzxkFQU
// Entry: 0x71a9cbb0 | Size: 68 bytes
// =========================================================================

void VXJnZdMGDcASooGSKgpqoygTkMUpzxkFQU(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 != 0) {
    do {
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      if (fVar1 < -1.0) {
        fVar1 = -1.0;
      }
      param_2 = param_2 + -1;
      *param_3 = fVar1 * 32768.0;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: UKp_LlpsmTpJx_DTueGqdCsctLEhthUfwn
// Entry: 0x71a9cbf8 | Size: 68 bytes
// =========================================================================

void UKp_LlpsmTpJx_DTueGqdCsctLEhthUfwn(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    if (32768.0 < fVar1) {
      fVar1 = 32768.0;
    }
    if (fVar1 < -32768.0) {
      fVar1 = -32768.0;
    }
    param_2 = param_2 + -1;
    *param_3 = fVar1 * 3.0517578e-05;
    param_3 = param_3 + 1;
  } while (param_2 != 0);
  return;
}


// =========================================================================
// Function: oCOFiCabdYObzPCIiPjvXbvTBtvrIcodpkjwiAjvQCvmIRAqMSb
// Entry: 0x71a9cc48 | Size: 268 bytes
// =========================================================================

void oCOFiCabdYObzPCIiPjvXbvTBtvrIcodpkjwiAjvQCvmIRAqMSb
               (short *param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  
  if (0 < param_3 * param_2) {
    psVar8 = param_1 + param_3 * param_2;
    if (param_3 < 2) {
      do {
        psVar4 = param_1 + 1;
        uVar1 = FUN_71ba0440((int)*param_1,param_3);
        *param_4 = uVar1;
        param_4 = param_4 + 1;
        param_1 = psVar4;
      } while (psVar4 < psVar8);
    }
    else {
      uVar9 = 0;
      uVar10 = uVar9;
      do {
        psVar3 = param_1 + param_3;
        uVar2 = (uint)*param_1;
        psVar7 = param_1 + 1;
        psVar4 = param_1 + 2;
        if (param_1 + 2 < psVar3) {
          psVar4 = psVar3;
        }
        uVar5 = (int)psVar4 + (-3 - (int)param_1);
        if (uVar5 < 6) {
LAB_71a9cd40:
          do {
            param_1 = psVar7 + 1;
            uVar2 = uVar2 + (int)*psVar7;
            psVar7 = param_1;
          } while (param_1 < psVar3);
        }
        else {
          uVar5 = (uVar5 >> 1) + 1;
          uVar6 = uVar5 & 0xfffffffc;
          param_1 = psVar7 + uVar6;
          auVar11._8_8_ = uVar10;
          auVar11._0_8_ = uVar9 & 0xffffffffffff0000 | (ulonglong)uVar2 & 0xffff;
          uVar2 = uVar6;
          do {
            uVar12 = *(undefined8 *)psVar7;
            psVar7 = psVar7 + 4;
            uVar2 = uVar2 - 4;
            auVar11 = VectorAdd(auVar11,uVar12,2,0);
          } while (uVar2 != 0);
          uVar12 = VectorAdd(auVar11._0_8_,auVar11._8_8_,4);
          uVar2 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
          psVar7 = param_1;
          if (uVar5 != uVar6) goto LAB_71a9cd40;
        }
        uVar1 = FUN_71ba0440(uVar2,param_3);
        *param_4 = uVar1;
        param_4 = param_4 + 1;
      } while (param_1 < psVar8);
    }
  }
  return;
}


// =========================================================================
// Function: PmlyVbduvpmUfTpqilVw_HhrkmYdQKHl
// Entry: 0x71a9cda4 | Size: 1004 bytes
// =========================================================================

undefined4 *
PmlyVbduvpmUfTpqilVw_HhrkmYdQKHl
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
// Function: shtxPYEHLAr_vHvbHDJpEehubQY
// Entry: 0x71a9d238 | Size: 292 bytes
// =========================================================================

undefined4 * shtxPYEHLAr_vHvbHDJpEehubQY(undefined4 *param_1)

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
// Function: NErAJtFtIqBZMNDBjWkXXreREYp
// Entry: 0x71a9d360 | Size: 28 bytes
// =========================================================================

void NErAJtFtIqBZMNDBjWkXXreREYp(undefined4 param_1)

{
  thunk_shtxPYEHLAr_vHvbHDJpEehubQY();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: KFLgNNuBtswdyuFYOFRqjrnDDwVLmMLHDVTUaCEGESCIUPBaByNwerbTmPtsh
// Entry: 0x71a9d37c | Size: 32 bytes
// =========================================================================

void KFLgNNuBtswdyuFYOFRqjrnDDwVLmMLHDVTUaCEGESCIUPBaByNwerbTmPtsh(int param_1,uint param_2)

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
// Function: HFRCtZbufGFOAkzCGANuRutaUFymPmQuScJeGmZYAcyTRBkmEDajSI
// Entry: 0x71a9d39c | Size: 12 bytes
// =========================================================================

void HFRCtZbufGFOAkzCGANuRutaUFymPmQuScJeGmZYAcyTRBkmEDajSI(int param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


// =========================================================================
// Function: BJcxXJCgqSkCVHZjFlDFGx_GdNNiAGButjZVxrohKBjbjQzawdLTtFffKF
// Entry: 0x71a9d3a8 | Size: 476 bytes
// =========================================================================

void BJcxXJCgqSkCVHZjFlDFGx_GdNNiAGButjZVxrohKBjbjQzawdLTtFffKF(int param_1,int *param_2)

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
// Function: HsULzZhzIPxquwjOyEl_XearsdClaBgmz_PskaodVLzEZ
// Entry: 0x71a9d584 | Size: 28 bytes
// =========================================================================

void HsULzZhzIPxquwjOyEl_XearsdClaBgmz_PskaodVLzEZ(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18) = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x18) = uVar1;
  }
  return;
}


// =========================================================================
// Function: _oPvzRjlHIMwv_yPJAfZjqsbVr_pJuqrNaijdnSSvSznBnzXCVwyQxT
// Entry: 0x71a9d5a0 | Size: 256 bytes
// =========================================================================

void _oPvzRjlHIMwv_yPJAfZjqsbVr_pJuqrNaijdnSSvSznBnzXCVwyQxT
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
// Function: AGEpjwDGwOrzYhLMwhYLHycRlFOV_kjOpzPd
// Entry: 0x71a9d6a0 | Size: 256 bytes
// =========================================================================

void AGEpjwDGwOrzYhLMwhYLHycRlFOV_kjOpzPd(int param_1,int param_2)

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
// Function: AtXEwoMjtrXPcKfVvTjITMTZLF_neGIBLRUeVChKIr_
// Entry: 0x71a9d7a0 | Size: 24 bytes
// =========================================================================

void AtXEwoMjtrXPcKfVvTjITMTZLF_neGIBLRUeVChKIr_(int param_1,undefined4 param_2)

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
// Function: lZrSONcTrOzBzjCRrIafxn_ExiSZqYxTRoujllxSyxSCsvB_jMFjsWXi
// Entry: 0x71a9d7b8 | Size: 904 bytes
// =========================================================================

void lZrSONcTrOzBzjCRrIafxn_ExiSZqYxTRoujllxSyxSCsvB_jMFjsWXi(int param_1,short *param_2)

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
// Function: QbwhOFAwp_EPKCTXYoDquExcnNDNavot_VjAfgunkKUpcJCHUkwIE
// Entry: 0x71a9db40 | Size: 1104 bytes
// =========================================================================

void QbwhOFAwp_EPKCTXYoDquExcnNDNavot_VjAfgunkKUpcJCHUkwIE
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
  undefined4 in_s5;
  undefined4 extraout_s5;
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
// Function: eYLYZDlDzDlKEvKfaJJHLJYfhVHyIeHJVoluukotNuPhrWBHOe
// Entry: 0x71a9df98 | Size: 16 bytes
// =========================================================================

void eYLYZDlDzDlKEvKfaJJHLJYfhVHyIeHJVoluukotNuPhrWBHOe(int param_1)

{
  thunk_OygqZ_tHhOTybTgJLgMMVrHQEOELZoFcFOImsfcQXgQfauCnoYmFWXviUNOctitdl
            (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x2c));
  return;
}


// =========================================================================
// Function: TFFaPamVELNhDIWZXFanIrsclPHEySSOxyxEXonYNvOkKu
// Entry: 0x71a9dfa8 | Size: 16 bytes
// =========================================================================

void TFFaPamVELNhDIWZXFanIrsclPHEySSOxyxEXonYNvOkKu(int param_1)

{
  thunk_xDqVwhoKWxIaGEjTShnOCJQFeo_gDQFcHspzQTjiHbDRaDTPCzvUYidIhSlpuMpzeT
            (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
             *(undefined4 *)(param_1 + 0x28));
  return;
}


// =========================================================================
// Function: ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR
// Entry: 0x71a9dfb8 | Size: 296 bytes
// =========================================================================

void ihKXvYCwQRrZKHLtNWJWPqzkPDBvVgvCDNKlYRBRetIVnIgCDdRfyR(int param_1,int param_2,int param_3)

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
// Function: BYEhaGZIovP_ImeEdwgxFlokkyirhVfjUzmysuEyIPoOuvjHDirLZZ
// Entry: 0x71a9e0e8 | Size: 352 bytes
// =========================================================================

void BYEhaGZIovP_ImeEdwgxFlokkyirhVfjUzmysuEyIPoOuvjHDirLZZ(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint in_fpscr;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  
  iVar15 = *(int *)(param_1 + 0x20);
  if (iVar15 == 0) {
    return;
  }
  uVar14 = *(uint *)(param_1 + 0x24);
  if (uVar14 != 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 == 0) {
      uVar2 = uVar14 & 0xfffffffc;
      iVar5 = 0;
      do {
        puVar10 = *(undefined8 **)(param_3 + iVar5 * 4);
        puVar8 = *(undefined8 **)
                  (*(int *)(*(int *)(param_1 + 0x28) + 8) +
                   *(int *)(*(int *)(param_1 + 0x28) + 0x1c) * param_2 * 4 + iVar5 * 4);
        puVar6 = puVar10;
        puVar12 = puVar8;
        uVar4 = 0;
        uVar3 = uVar2;
        if (uVar14 < 4) {
LAB_71a9e218:
          puVar11 = (undefined4 *)((int)puVar8 + uVar4 * 4);
          iVar1 = uVar14 - uVar4;
          psVar9 = (short *)((int)puVar10 + uVar4 * 2);
          do {
            iVar1 = iVar1 + -1;
            uVar16 = VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x16) & 3);
            *puVar11 = uVar16;
            puVar11 = puVar11 + 1;
            psVar9 = psVar9 + 1;
          } while (iVar1 != 0);
        }
        else {
          do {
            uVar3 = uVar3 - 4;
            auVar17 = VectorCopyLong(*puVar6,2,0);
            auVar17 = FixedToFP(auVar17,0,0,0,0x20);
            *puVar12 = auVar17._0_8_;
            puVar12[1] = auVar17._8_8_;
            puVar6 = puVar6 + 1;
            puVar12 = puVar12 + 2;
          } while (uVar3 != 0);
          uVar4 = uVar2;
          if (uVar14 != uVar2) goto LAB_71a9e218;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar15);
    }
    else {
      iVar1 = *(int *)(iVar5 + 8);
      iVar7 = 0;
      iVar5 = *(int *)(iVar5 + 0x1c);
      uVar2 = uVar14 & 0xfffffffc;
      do {
        puVar8 = *(undefined8 **)(param_3 + iVar7 * 4);
        puVar10 = *(undefined8 **)(iVar1 + iVar5 * param_2 * 4 + iVar7 * 4);
        uVar4 = 0;
        uVar3 = uVar2;
        puVar6 = puVar10;
        puVar12 = puVar8;
        if (uVar14 < 4) {
LAB_71a9e180:
          puVar11 = (undefined4 *)((int)puVar10 + uVar4 * 4);
          iVar13 = uVar14 - uVar4;
          psVar9 = (short *)((int)puVar8 + uVar4 * 2);
          do {
            iVar13 = iVar13 + -1;
            uVar16 = VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x16) & 3);
            *puVar11 = uVar16;
            puVar11 = puVar11 + 1;
            psVar9 = psVar9 + 1;
          } while (iVar13 != 0);
        }
        else {
          do {
            uVar3 = uVar3 - 4;
            auVar17 = VectorCopyLong(*puVar12,2,0);
            auVar17 = FixedToFP(auVar17,0,0,0,0x20);
            *puVar6 = auVar17._0_8_;
            puVar6[1] = auVar17._8_8_;
            puVar6 = puVar6 + 2;
            puVar12 = puVar12 + 1;
          } while (uVar3 != 0);
          uVar4 = uVar2;
          if (uVar14 != uVar2) goto LAB_71a9e180;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar15);
    }
  }
  return;
}


// =========================================================================
// Function: qzrDNsrqslsEVHdwixKrKjYtxiowMrWjKa
// Entry: 0x71a9ea78 | Size: 756 bytes
// =========================================================================

int * qzrDNsrqslsEVHdwixKrKjYtxiowMrWjKa(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar9 = param_3 * param_2 * 4;
  if (0x3fffffff < (uint)(param_3 * param_2)) {
    iVar9 = -1;
  }
  iVar1 = thunk__IBDl(iVar9);
  imp___aeabi_memclr4(iVar1,iVar9);
  *param_1 = iVar1;
  iVar9 = param_4 * param_3 * 4;
  if (0x3fffffff < param_4 * param_3) {
    iVar9 = -1;
  }
  piVar2 = (int *)thunk__IBDl(iVar9);
  param_1[1] = (int)piVar2;
  iVar9 = thunk__IBDl(iVar9);
  param_1[2] = iVar9;
  param_1[5] = param_3;
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[3] = param_2;
  iVar9 = FUN_71ba0484(param_2,param_4);
  param_1[4] = iVar9;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  if (param_4 < 0x20000000) {
    iVar9 = param_4 * 8;
    iVar1 = thunk_MwhHq(iVar9);
    iStack_28 = iVar1 + param_4 * 8;
    piVar2 = param_1 + 8;
    iStack_30 = iVar1;
    imp___aeabi_memclr4(iVar1,iVar9);
    iStack_2c = iVar1 + iVar9;
    FUN_71a9f1cc(piVar2,param_3,&iStack_30);
    if (iStack_30 != 0) {
      iStack_2c = iStack_30;
      thunk_qNQrlu();
    }
    uVar11 = param_1[5];
    iVar9 = param_1[7];
    iStack_28 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    if (uVar11 != 0) {
      if (0x1fffffff < uVar11) goto LAB_71a9ecf4;
      iVar1 = uVar11 * 8;
      iVar3 = thunk_MwhHq(iVar1);
      iStack_28 = iVar3 + uVar11 * 8;
      iStack_30 = iVar3;
      imp___aeabi_memclr4(iVar3,iVar1);
      iStack_2c = iVar3 + iVar1;
    }
    FUN_71a9f1cc(param_1 + 0xb,iVar9,&iStack_30);
    iVar9 = 0;
    if (iStack_30 != 0) {
      iStack_2c = iStack_30;
      iVar9 = thunk_qNQrlu();
    }
    uVar11 = param_1[5];
    if (uVar11 != 0) {
      iVar9 = param_1[7];
    }
    if (uVar11 != 0 && iVar9 != 0) {
      uVar10 = 1;
      iVar9 = 0;
      uVar5 = 0;
      do {
        bVar14 = uVar10 != 0;
        uVar10 = 0;
        if (bVar14) {
          iVar1 = 0;
          iVar3 = 0;
          uVar12 = 0;
          do {
            iVar13 = param_1[4];
            iVar8 = 0;
            if (iVar13 != 0) {
              iVar8 = *param_1 + param_1[3] * uVar5 * 4 + iVar13 * uVar12 * 4;
            }
            piVar2 = (int *)(*(int *)(param_1[0xb] + iVar3) + uVar5 * 8);
            *piVar2 = iVar8;
            piVar2[1] = iVar13;
            puVar6 = (undefined4 *)(*(int *)(param_1[0xb] + iVar3) + uVar5 * 8);
            uVar7 = puVar6[1];
            puVar4 = (undefined4 *)(*(int *)(param_1[8] + uVar5 * 0xc) + iVar1);
            *puVar4 = *puVar6;
            iVar1 = iVar1 + 8;
            puVar4[1] = uVar7;
            uVar11 = param_1[5];
            piVar2 = (int *)(param_1[0xb] + iVar3);
            iVar3 = iVar3 + 0xc;
            iVar8 = uVar11 * uVar12 + uVar5;
            uVar10 = param_1[7];
            *(undefined4 *)(param_1[1] + iVar8 * 4) = *(undefined4 *)(*piVar2 + uVar5 * 8);
            *(undefined4 *)(iVar9 * uVar10 + param_1[2] + uVar12 * 4) =
                 *(undefined4 *)(param_1[1] + iVar8 * 4);
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar10);
        }
        uVar5 = uVar5 + 1;
        iVar9 = iVar9 + 4;
      } while (uVar5 < uVar11);
    }
    return param_1;
  }
  FUN_71a9f56c(&iStack_30);
LAB_71a9ecf4:
  FUN_71a9f56c(&iStack_30);
  if (iStack_30 != 0) {
    iStack_2c = iStack_30;
    thunk_qNQrlu();
  }
  FUN_71a9f4b4(piVar2);
  iVar9 = param_1[2];
  param_1[2] = 0;
  if (iVar9 != 0) {
    thunk_dGrRHE();
  }
  iVar9 = param_1[1];
  param_1[1] = 0;
  if (iVar9 != 0) {
    thunk_dGrRHE(iVar9);
  }
  iVar9 = *param_1;
  *param_1 = 0;
  if (iVar9 != 0) {
    thunk_dGrRHE();
  }
                    /* WARNING: Subroutine does not return */
  thunk_NAUpeWJSovvMoxKm_();
}


// =========================================================================
// Function: FUN_71a9f014
// Entry: 0x71a9f014 | Size: 108 bytes
// =========================================================================

undefined4 * FUN_71a9f014(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)param_1[1];
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
      piVar1 = (int *)*param_1;
    }
    param_1[1] = piVar2;
    thunk_qNQrlu(piVar1);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71a9f1cc
// Entry: 0x71a9f1cc | Size: 328 bytes
// =========================================================================

undefined4 * FUN_71a9f1cc(undefined4 *param_1,uint param_2,int *param_3)

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
      FUN_71a9f6a8(param_1);
LAB_71a9f2d8:
      *unaff_r5 = 0;
      unaff_r5[1] = 0;
      unaff_r5[2] = 0;
      FUN_71a9f56c(unaff_r5);
      if (*unaff_r5 != 0) {
        unaff_r5[1] = *unaff_r5;
        thunk_qNQrlu();
      }
      param_1[1] = unaff_r5;
      FUN_71a9f5d4(&puStack_2c);
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
      if (iVar4 < 0) goto LAB_71a9f2d8;
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
// Function: FUN_71a9f4b4
// Entry: 0x71a9f4b4 | Size: 104 bytes
// =========================================================================

undefined4 * FUN_71a9f4b4(undefined4 *param_1)

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
// Function: FUN_71a9f56c
// Entry: 0x71a9f56c | Size: 20 bytes
// =========================================================================

void FUN_71a9f56c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71a9f5d4
// Entry: 0x71a9f5d4 | Size: 132 bytes
// =========================================================================

undefined4 * FUN_71a9f5d4(undefined4 *param_1)

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
// Function: FUN_71a9f6a8
// Entry: 0x71a9f6a8 | Size: 20 bytes
// =========================================================================

void FUN_71a9f6a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71a9f710
// Entry: 0x71a9f710 | Size: 20 bytes
// =========================================================================

void FUN_71a9f710(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_719fe170(s_vector_7006dad5);
}


// =========================================================================
// Function: uxNIQrxHJctWnbiWQnpKjvJRVzOspbeI
// Entry: 0x71a9f778 | Size: 256 bytes
// =========================================================================

int * uxNIQrxHJctWnbiWQnpKjvJRVzOspbeI(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[0xb];
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)param_1[0xc];
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
      piVar1 = (int *)param_1[0xb];
    }
    param_1[0xc] = (int)piVar4;
    thunk_qNQrlu(piVar1);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)param_1[9];
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
      piVar1 = (int *)param_1[8];
    }
    param_1[9] = (int)piVar4;
    thunk_qNQrlu(piVar1);
  }
  iVar2 = param_1[2];
  param_1[2] = 0;
  if (iVar2 != 0) {
    thunk_dGrRHE();
  }
  iVar2 = param_1[1];
  param_1[1] = 0;
  if (iVar2 != 0) {
    thunk_dGrRHE();
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 != 0) {
    thunk_dGrRHE();
  }
  return param_1;
}


// =========================================================================
// Function: taVxuZCeogvn_pjw_phkongcfQugaEZqqS
// Entry: 0x71a9f954 | Size: 140 bytes
// =========================================================================

undefined4 *
taVxuZCeogvn_pjw_phkongcfQugaEZqqS(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_fpscr;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar1 = (double)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  *param_1 = &DAT_70b13268;
  dVar2 = (double)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = thunk_MwhHq(0x58);
  thunk_BbENYmdF_CGiZkM_yNVCPIZGsqqfnnPTKhwskbpBY_YPwNFjhiLFcYQVRm
            ((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),SUB84(dVar2 / dVar1,0),
             (int)((ulonglong)(dVar2 / dVar1) >> 0x20),param_2,param_1);
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[1] = (int)uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_3;
  return param_1;
}


// =========================================================================
// Function: JdUMaPMUiAYQASFKjMlkQEeuizSSKeznA
// Entry: 0x71a9f9f0 | Size: 88 bytes
// =========================================================================

undefined4 * JdUMaPMUiAYQASFKjMlkQEeuizSSKeznA(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &DAT_70b13268;
  iVar1 = param_1[2];
  param_1[2] = 0;
  if (iVar1 != 0) {
    thunk_dGrRHE();
  }
  piVar2 = (int *)param_1[1];
  param_1[1] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  return param_1;
}


// =========================================================================
// Function: wZuQGZbFJFnbuUVsSRrnCsHtwdxkpEbBq
// Entry: 0x71a9fa4c | Size: 28 bytes
// =========================================================================

void wZuQGZbFJFnbuUVsSRrnCsHtwdxkpEbBq(undefined4 param_1)

{
  thunk_JdUMaPMUiAYQASFKjMlkQEeuizSSKeznA();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: zEPBeQzfowLpqZdSDCgSiA_dVuD_nRbSNtPHSDfVidzTHj
// Entry: 0x71a9fa68 | Size: 128 bytes
// =========================================================================

undefined4
zEPBeQzfowLpqZdSDCgSiA_dVuD_nRbSNtPHSDfVidzTHj
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = uVar2 << 2;
    if (0x3fffffff < uVar2) {
      iVar1 = -1;
    }
    iVar1 = thunk__IBDl(iVar1);
    *(int *)(param_1 + 8) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  thunk_gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf(param_1,0,param_3,iVar1,uVar2);
  thunk_IhMVvNZFeMzYlwyJKCbIwyfwHELV_iql
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return *(undefined4 *)(param_1 + 0x14);
}


// =========================================================================
// Function: gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
// Entry: 0x71a9fae8 | Size: 216 bytes
// =========================================================================

undefined4
gJliSjNJCqyoHVbopwNuQyswewfUrHpmfzFnDTmsCBjuHf
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x20) != param_3) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70070614,0x34,
               s_source_length____resampler__>req_70067b43,&DAT_70095f5e,param_3,
               *(int *)(iVar1 + 0x20));
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 <= param_5) {
    *(int *)(param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 0xc) = param_2;
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar2 = thunk_HTFydJHjHyDvHycBJlOoyuMHFr_OIAyGEK_lch();
      thunk_bczJTiwxYyWBoMBboyhCyiitmSvPJqWEHfKkGx(iVar1,uVar2,param_4);
      iVar1 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x14);
    }
    thunk_bczJTiwxYyWBoMBboyhCyiitmSvPJqWEHfKkGx(iVar1,uVar3,param_4);
    *(undefined4 *)(param_1 + 0xc) = 0;
    return *(undefined4 *)(param_1 + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
            (s_____webrtc_apm_src_webrtc_common_70070614,0x35,
             s_destination_capacity_>__destinat_7006387c,&DAT_70095f5e,param_5,uVar3);
}


// =========================================================================
// Function: ZjTmaqTgCbFVkevrpvHRqVYpuUGplBXnaJvCp
// Entry: 0x71a9fbd8 | Size: 308 bytes
// =========================================================================

void ZjTmaqTgCbFVkevrpvHRqVYpuUGplBXnaJvCp(int param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  short *psVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if (*(uint *)(param_1 + 0x1c) != param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_UPwKFZoteciiDBRLbcphSnrTRZXBzSHohTOzIxy_dUIMnJrMgKjBQ_tevrVEYXLHCB
              (s_____webrtc_apm_src_webrtc_common_70070614,0x53,
               s_source_available_____frames_70066841,&DAT_70095f5e,*(uint *)(param_1 + 0x1c),
               param_2);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    imp___aeabi_memclr4(param_3,param_2 << 2);
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    imp___aeabi_memcpy4(param_3,*(int *)(param_1 + 0xc),param_2 << 2);
    uVar5 = *(uint *)(param_1 + 0x1c);
LAB_71a9fc40:
    *(uint *)(param_1 + 0x1c) = uVar5 - param_2;
    return;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = 0;
  if (3 < param_2) {
    uVar1 = param_2 & 0xfffffffc;
    puVar2 = param_3;
    uVar5 = uVar1;
    puVar6 = puVar7;
    do {
      uVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 4;
      auVar10 = VectorCopyLong(uVar9,2,0);
      auVar10 = FixedToFP(auVar10,0,0,0,0x20);
      *puVar2 = auVar10._0_8_;
      puVar2[1] = auVar10._8_8_;
      puVar2 = puVar2 + 2;
    } while (uVar5 != 0);
    uVar5 = param_2;
    if (uVar1 == param_2) goto LAB_71a9fc40;
  }
  puVar4 = (undefined4 *)((int)param_3 + uVar1 * 4);
  psVar3 = (short *)((int)puVar7 + uVar1 * 2);
  do {
    uVar1 = uVar1 + 1;
    uVar8 = VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x16) & 3);
    *puVar4 = uVar8;
    puVar4 = puVar4 + 1;
    psVar3 = psVar3 + 1;
  } while (param_2 != uVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


// =========================================================================
// Function: cLaQSYDNeBNCDsvss_CHRMZJTrGvFIbnBpcdWQqMTKOkQcnvJQKqYvIKSv
// Entry: 0x71aa0060 | Size: 16 bytes
// =========================================================================

void cLaQSYDNeBNCDsvss_CHRMZJTrGvFIbnBpcdWQqMTKOkQcnvJQKqYvIKSv(int param_1)

{
  *(code **)(param_1 + 0x3c) = pvRhogLsLJZQjjkiZxavfsoDyDPmKVzOEhEJRHwEjKzozWut;
  return;
}


// =========================================================================
// Function: pvRhogLsLJZQjjkiZxavfsoDyDPmKVzOEhEJRHwEjKzozWut
// Entry: 0x71aa0074 | Size: 688 bytes
// =========================================================================

float pvRhogLsLJZQjjkiZxavfsoDyDPmKVzOEhEJRHwEjKzozWut
                (float *param_1,float *param_2,float *param_3,undefined4 param_4,double param_5)

{
  return (float)((double)(*param_1 * *param_3 + 0.0 + param_1[1] * param_3[1] +
                          param_1[2] * param_3[2] + param_1[3] * param_3[3] +
                          param_1[4] * param_3[4] + param_1[5] * param_3[5] +
                          param_1[6] * param_3[6] + param_1[7] * param_3[7] +
                          param_1[8] * param_3[8] + param_1[9] * param_3[9] +
                          param_1[10] * param_3[10] + param_1[0xb] * param_3[0xb] +
                          param_1[0xc] * param_3[0xc] + param_1[0xd] * param_3[0xd] +
                          param_1[0xe] * param_3[0xe] + param_1[0xf] * param_3[0xf] +
                          param_1[0x10] * param_3[0x10] + param_1[0x11] * param_3[0x11] +
                          param_1[0x12] * param_3[0x12] + param_1[0x13] * param_3[0x13] +
                          param_1[0x14] * param_3[0x14] + param_1[0x15] * param_3[0x15] +
                          param_1[0x16] * param_3[0x16] + param_1[0x17] * param_3[0x17] +
                          param_1[0x18] * param_3[0x18] + param_1[0x19] * param_3[0x19] +
                          param_1[0x1a] * param_3[0x1a] + param_1[0x1b] * param_3[0x1b] +
                          param_1[0x1c] * param_3[0x1c] + param_1[0x1d] * param_3[0x1d] +
                          param_1[0x1e] * param_3[0x1e] + param_1[0x1f] * param_3[0x1f]) * param_5 +
                (1.0 - param_5) *
                (double)(*param_1 * *param_2 + 0.0 + param_1[1] * param_2[1] +
                         param_1[2] * param_2[2] + param_1[3] * param_2[3] + param_1[4] * param_2[4]
                         + param_1[5] * param_2[5] + param_1[6] * param_2[6] +
                         param_1[7] * param_2[7] + param_1[8] * param_2[8] + param_1[9] * param_2[9]
                         + param_1[10] * param_2[10] + param_1[0xb] * param_2[0xb] +
                         param_1[0xc] * param_2[0xc] + param_1[0xd] * param_2[0xd] +
                         param_1[0xe] * param_2[0xe] + param_1[0xf] * param_2[0xf] +
                         param_1[0x10] * param_2[0x10] + param_1[0x11] * param_2[0x11] +
                         param_1[0x12] * param_2[0x12] + param_1[0x13] * param_2[0x13] +
                         param_1[0x14] * param_2[0x14] + param_1[0x15] * param_2[0x15] +
                         param_1[0x16] * param_2[0x16] + param_1[0x17] * param_2[0x17] +
                         param_1[0x18] * param_2[0x18] + param_1[0x19] * param_2[0x19] +
                         param_1[0x1a] * param_2[0x1a] + param_1[0x1b] * param_2[0x1b] +
                         param_1[0x1c] * param_2[0x1c] + param_1[0x1d] * param_2[0x1d] +
                         param_1[0x1e] * param_2[0x1e] + param_1[0x1f] * param_2[0x1f]));
}


// =========================================================================
// Function: BbENYmdF_CGiZkM_yNVCPIZGsqqfnnPTKhwskbpBY_YPwNFjhiLFcYQVRm
// Entry: 0x71aa0328 | Size: 700 bytes
// =========================================================================

undefined4 *
BbENYmdF_CGiZkM_yNVCPIZGsqqfnnPTKhwskbpBY_YPwNFjhiLFcYQVRm
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[7] = param_6;
  param_1[8] = param_5;
  *param_1 = &DAT_70b13290;
  param_1[10] = param_5 + 0x20;
  iVar3 = thunk_vrmXWwjvsGtAMlZLrGlA_jdSXiHJ(0x1080,0x20);
  param_1[0xb] = iVar3;
  uVar4 = thunk_vrmXWwjvsGtAMlZLrGlA_jdSXiHJ(0x1080,0x20);
  param_1[0xc] = uVar4;
  uVar4 = thunk_vrmXWwjvsGtAMlZLrGlA_jdSXiHJ(0x1080,0x20);
  param_1[0xd] = uVar4;
  iVar3 = thunk_vrmXWwjvsGtAMlZLrGlA_jdSXiHJ(param_1[10] << 2,0x20);
  param_1[0x11] = iVar3;
  param_1[0x12] = iVar3 + 0x40;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = iVar3;
  param_1[0xf] = pvRhogLsLJZQjjkiZxavfsoDyDPmKVzOEhEJRHwEjKzozWut;
  *(undefined1 *)(param_1 + 6) = 0;
  imp___aeabi_memclr4(iVar3,param_1[10] << 2);
  iVar3 = param_1[0xe] + 0x40 + param_1[8] * 4;
  param_1[0x10] = param_1[0xe] + 0x40;
  iVar9 = iVar3 + -0x40;
  param_1[0x13] = iVar3 + -0x80;
  param_1[0x14] = iVar9;
  param_1[9] = iVar9 - param_1[0x12] >> 2;
  imp___aeabi_memclr4(param_1[0xb],0x1080);
  imp___aeabi_memclr4(param_1[0xc],0x1080);
  imp___aeabi_memclr4(param_1[0xd],0x1080);
  dVar18 = *(double *)(param_1 + 2);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar18 < 1.0) << 0x1f | (uint)(dVar18 == 1.0) << 0x1e;
  uVar12 = uVar1 | (uint)NAN(dVar18) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar12 >> 0x1c) & 1)) {
    dVar18 = 0.9;
  }
  else {
    dVar18 = (1.0 / dVar18) * 0.9;
  }
  pfVar11 = (float *)param_1[0xb];
  pfVar10 = (float *)param_1[0xd];
  iVar3 = 0;
  pfVar6 = (float *)param_1[0xc];
  do {
    iVar9 = -0x10;
    fVar13 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar12 >> 0x16) & 3);
    pfVar5 = pfVar6;
    pfVar7 = pfVar10;
    pfVar8 = pfVar11;
    do {
      fVar14 = (float)VectorUnsignedToFloat(iVar9 + 0x10,(byte)(uVar12 >> 0x16) & 3);
      dVar16 = (double)((fVar14 - fVar13 * 0.03125) * 0.03125);
      dVar17 = dVar16 * 6.283185307179586;
      dVar17 = (double)imp_cos(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20));
      dVar16 = dVar16 * 12.566370614359172;
      dVar16 = (double)imp_cos(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20));
      fVar14 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x16) & 3);
      fVar15 = (float)(dVar17 * -0.5 + 0.42 + dVar16 * 0.08);
      fVar14 = (fVar14 - fVar13 * 0.03125) * 3.1415927;
      uVar12 = uVar12 & 0xfffffff | (uint)(fVar14 == 0.0) << 0x1e;
      *pfVar5 = fVar14;
      *pfVar7 = fVar15;
      dVar16 = dVar18;
      if (!SUB41(uVar12 >> 0x1e,0)) {
        dVar16 = dVar18 * (double)fVar14;
        dVar16 = (double)imp_sin(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20));
        dVar16 = dVar16 / (double)fVar14;
      }
      iVar9 = iVar9 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar8 = (float)(dVar16 * (double)fVar15);
      pfVar8 = pfVar8 + 1;
    } while (iVar9 != 0x10);
    pfVar6 = pfVar6 + 0x20;
    pfVar10 = pfVar10 + 0x20;
    pfVar11 = pfVar11 + 0x20;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x21);
  return param_1;
}


// =========================================================================
// Function: FiGZGiiviHyXOKjkTEOWAJmaMzdJDFCk_
// Entry: 0x71aa064c | Size: 96 bytes
// =========================================================================

void FiGZGiiviHyXOKjkTEOWAJmaMzdJDFCk_(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  imp___aeabi_memclr4(*(undefined4 *)(param_1 + 0x38),*(int *)(param_1 + 0x28) << 2);
  iVar1 = *(int *)(param_1 + 0x38) + 0x40;
  *(int *)(param_1 + 0x40) = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x20) * 4;
  iVar2 = iVar1 + -0x40;
  *(int *)(param_1 + 0x4c) = iVar1 + -0x80;
  *(int *)(param_1 + 0x50) = iVar2;
  *(int *)(param_1 + 0x24) = iVar2 - *(int *)(param_1 + 0x48) >> 2;
  return;
}


// =========================================================================
// Function: kYoKsYIAw_arwclRXJRozITIesTmtBwtqXBoZwkfSUEtq
// Entry: 0x71aa06b0 | Size: 420 bytes
// =========================================================================

void kYoKsYIAw_arwclRXJRozITIesTmtBwtqXBoZwkfSUEtq(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar17 = *(double *)(param_1 + 8);
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar17 < 1.0) << 0x1f | (uint)(dVar17 == 1.0) << 0x1e;
  uVar11 = uVar1 | (uint)NAN(dVar17) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) {
    dVar17 = 0.9;
  }
  else {
    dVar17 = (1.0 / dVar17) * 0.9;
  }
  iVar7 = 0;
  pfVar4 = *(float **)(param_1 + 0x2c);
  pfVar8 = *(float **)(param_1 + 0x30);
  pfVar10 = *(float **)(param_1 + 0x34);
  do {
    iVar3 = -0x10;
    fVar12 = (float)VectorUnsignedToFloat(iVar7,(byte)(uVar11 >> 0x16) & 3);
    pfVar5 = pfVar4;
    pfVar6 = pfVar10;
    pfVar9 = pfVar8;
    do {
      fVar13 = (float)VectorUnsignedToFloat(iVar3 + 0x10,(byte)(uVar11 >> 0x16) & 3);
      dVar15 = (double)((fVar13 - fVar12 * 0.03125) * 0.03125);
      dVar16 = dVar15 * 6.283185307179586;
      dVar16 = (double)imp_cos(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20));
      dVar15 = dVar15 * 12.566370614359172;
      dVar15 = (double)imp_cos(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
      fVar13 = (float)VectorSignedToFloat(iVar3,(byte)(uVar11 >> 0x16) & 3);
      fVar14 = (float)(dVar16 * -0.5 + 0.42 + dVar15 * 0.08);
      fVar13 = (fVar13 - fVar12 * 0.03125) * 3.1415927;
      uVar11 = uVar11 & 0xfffffff | (uint)(fVar13 == 0.0) << 0x1e;
      *pfVar9 = fVar13;
      *pfVar6 = fVar14;
      dVar15 = dVar17;
      if (!SUB41(uVar11 >> 0x1e,0)) {
        dVar15 = dVar17 * (double)fVar13;
        dVar15 = (double)imp_sin(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
        dVar15 = dVar15 / (double)fVar13;
      }
      iVar3 = iVar3 + 1;
      pfVar6 = pfVar6 + 1;
      pfVar9 = pfVar9 + 1;
      *pfVar5 = (float)(dVar15 * (double)fVar14);
      pfVar5 = pfVar5 + 1;
    } while (iVar3 != 0x10);
    iVar7 = iVar7 + 1;
    pfVar10 = pfVar10 + 0x20;
    pfVar8 = pfVar8 + 0x20;
    pfVar4 = pfVar4 + 0x20;
  } while (iVar7 != 0x21);
  return;
}


// =========================================================================
// Function: RALvWbGqrkcMvzbNQiXLvcaIqnYoZ
// Entry: 0x71aa088c | Size: 120 bytes
// =========================================================================

undefined4 * RALvWbGqrkcMvzbNQiXLvcaIqnYoZ(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_70b13290;
  iVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (iVar1 != 0) {
    thunk_vtXePMhDKcPibetdCiSSToSDnY();
  }
  iVar1 = param_1[0xd];
  param_1[0xd] = 0;
  if (iVar1 != 0) {
    thunk_vtXePMhDKcPibetdCiSSToSDnY();
  }
  iVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (iVar1 != 0) {
    thunk_vtXePMhDKcPibetdCiSSToSDnY();
  }
  iVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (iVar1 != 0) {
    thunk_vtXePMhDKcPibetdCiSSToSDnY();
  }
  return param_1;
}


// =========================================================================
// Function: xEBo_dQ_DWZOHyFn_s_dsHLHYuzVW
// Entry: 0x71aa0918 | Size: 28 bytes
// =========================================================================

void xEBo_dQ_DWZOHyFn_s_dsHLHYuzVW(undefined4 param_1)

{
  thunk_RALvWbGqrkcMvzbNQiXLvcaIqnYoZ();
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: YKihoaDBphOrJhNKzcGESJSllChDDKbOQKAXvvfsOX
// Entry: 0x71aa0934 | Size: 72 bytes
// =========================================================================

void YKihoaDBphOrJhNKzcGESJSllChDDKbOQKAXvvfsOX(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x40;
  if (param_2 != 0) {
    iVar1 = 0x80;
  }
  iVar1 = *(int *)(param_1 + 0x38) + iVar1;
  *(int *)(param_1 + 0x40) = iVar1;
  iVar1 = iVar1 + *(int *)(param_1 + 0x20) * 4;
  iVar2 = iVar1 + -0x40;
  *(int *)(param_1 + 0x4c) = iVar1 + -0x80;
  *(int *)(param_1 + 0x50) = iVar2;
  *(int *)(param_1 + 0x24) = iVar2 - *(int *)(param_1 + 0x48) >> 2;
  return;
}


