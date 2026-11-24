// =========================================================================
// Function: FUN_715ab590
// Entry: 0x715ab590 | Size: 140 bytes
// =========================================================================

void FUN_715ab590(undefined4 param_1)

{
  int iVar1;
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
  undefined1 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = FUN_715aaf4c(param_1,&uStack_28);
  if (iVar1 != 0) {
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_40 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_58 = uStack_28;
    uStack_30 = 1;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_54 = uStack_24;
    FUN_715ab278(&uStack_58);
  }
  return;
}


// =========================================================================
// Function: DVUzdlzHIfTATMIhoiECZyYIM
// Entry: 0x715ab66c | Size: 240 bytes
// =========================================================================

void DVUzdlzHIfTATMIhoiECZyYIM(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3b40);
  puVar2 = &DAT_711a3b48;
  puVar1 = DAT_711a3b48;
  do {
    puVar3 = puVar2;
    if (puVar1 == (undefined4 *)0x0) {
LAB_715ab6e4:
      puVar1 = (undefined4 *)thunk_MwhHq(0x20);
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[4] = param_1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = puVar2;
      *puVar3 = puVar1;
      puVar2 = puVar1;
      if ((int *)*DAT_711a3b44 != (int *)0x0) {
        puVar2 = (undefined4 *)*puVar3;
        DAT_711a3b44 = (int *)*DAT_711a3b44;
      }
      FUN_712f807c(DAT_711a3b48,puVar2);
      DAT_711a3b4c = DAT_711a3b4c + 1;
      puVar2 = puVar1;
LAB_715ab744:
      puVar2[6] = param_3;
      puVar2[7] = param_4;
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3b40);
      return;
    }
    while (puVar2 = puVar1, (int)puVar2[4] <= param_1) {
      if (param_1 <= (int)puVar2[4]) goto LAB_715ab744;
      puVar1 = (undefined4 *)puVar2[1];
      if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
        puVar3 = puVar2 + 1;
        goto LAB_715ab6e4;
      }
    }
    puVar1 = (undefined4 *)*puVar2;
  } while( true );
}


// =========================================================================
// Function: hoc_DPBrANuIQVvmZQTtEFfmkVc
// Entry: 0x715ab864 | Size: 196 bytes
// =========================================================================

bool hoc_DPBrANuIQVvmZQTtEFfmkVc(uint param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ae0);
  puVar3 = &DAT_711a3b6c;
  if (DAT_711a3b6c != (undefined4 *)0x0) {
    puVar2 = &DAT_711a3b6c;
    puVar3 = DAT_711a3b6c;
    do {
      iVar4 = puVar3[5];
      puVar1 = puVar3;
      if ((int)(iVar4 - (param_2 + (uint)((uint)puVar3[4] < param_1))) < 0 !=
          (SBORROW4(iVar4,param_2) != SBORROW4(iVar4 - param_2,(uint)((uint)puVar3[4] < param_1))))
      {
        puVar3 = puVar3 + 1;
        puVar1 = puVar2;
      }
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    puVar3 = &DAT_711a3b6c;
    if (((undefined4 **)puVar2 != &DAT_711a3b6c) &&
       (iVar4 = puVar2[5], puVar3 = puVar2,
       (int)(param_2 - (iVar4 + (uint)(param_1 < (uint)puVar2[4]))) < 0 !=
       (SBORROW4(param_2,iVar4) != SBORROW4(param_2 - iVar4,(uint)(param_1 < (uint)puVar2[4]))))) {
      puVar3 = &DAT_711a3b6c;
    }
  }
  if ((undefined4 **)puVar3 != &DAT_711a3b6c) {
    *param_3 = puVar3[6];
    param_3[1] = puVar3[7];
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
  return (undefined4 **)puVar3 != &DAT_711a3b6c;
}


// =========================================================================
// Function: Java_com_native_Main_livePreviewSurface
// Entry: 0x715ab9d8 | Size: 748 bytes
// =========================================================================

void Java_com_native_Main_livePreviewSurface
               (undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = imp_ANativeWindow_fromSurface();
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ae0);
  puVar7 = &DAT_711a3ae8;
  puVar5 = DAT_711a3ae8;
  do {
    puVar6 = puVar7;
    if (puVar5 == (undefined4 *)0x0) {
LAB_715aba74:
      puVar3 = (undefined4 *)thunk_MwhHq(0x20);
      puVar3[4] = param_3;
      puVar3[5] = param_4;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar6;
      *puVar7 = puVar3;
      puVar5 = puVar3;
      if ((undefined4 *)*DAT_711a3ae4 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)*puVar7;
        DAT_711a3ae4 = (undefined4 *)*DAT_711a3ae4;
      }
      FUN_712f807c(DAT_711a3ae8,puVar5);
      DAT_711a3aec = DAT_711a3aec + 1;
LAB_715abad8:
      if (puVar3[6] != 0) {
        imp_ANativeWindow_release();
      }
      DAT_711a3b78 = DAT_711a3b78 + 1;
      puVar3[6] = iVar1;
      puVar3[7] = DAT_711a3b78;
      if (iVar1 == 0) {
        if (DAT_711a3ae8 != (undefined4 *)0x0) {
          puVar7 = &DAT_711a3ae8;
          puVar5 = DAT_711a3ae8;
          do {
            iVar1 = puVar5[5];
            puVar6 = puVar5;
            if ((int)(iVar1 - (param_4 + (uint)((uint)puVar5[4] < param_3))) < 0 !=
                (SBORROW4(iVar1,param_4) !=
                SBORROW4(iVar1 - param_4,(uint)((uint)puVar5[4] < param_3)))) {
              puVar5 = puVar5 + 1;
              puVar6 = puVar7;
            }
            puVar7 = puVar6;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
          if (((undefined4 **)puVar7 != &DAT_711a3ae8) &&
             (iVar1 = puVar7[5],
             (int)(param_4 - (iVar1 + (uint)(param_3 < (uint)puVar7[4]))) < 0 ==
             (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < (uint)puVar7[4]))
             ))) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)puVar7[1];
            if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
              do {
                puVar3 = (undefined4 *)puVar5[2];
                bVar8 = (undefined4 *)*puVar3 != puVar5;
                puVar5 = puVar3;
              } while (bVar8);
            }
            else {
              do {
                puVar3 = puVar6;
                puVar6 = (undefined4 *)*puVar3;
              } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
            }
            if (DAT_711a3ae4 == puVar7) {
              DAT_711a3ae4 = puVar3;
            }
            DAT_711a3aec = DAT_711a3aec + -1;
            FUN_71368054(DAT_711a3ae8,puVar7);
            thunk_qNQrlu(puVar7);
          }
        }
        if (DAT_711a3b6c != (undefined4 *)0x0) {
          puVar7 = &DAT_711a3b6c;
          puVar5 = DAT_711a3b6c;
          do {
            iVar1 = puVar5[5];
            puVar6 = puVar5;
            if ((int)(iVar1 - (param_4 + (uint)((uint)puVar5[4] < param_3))) < 0 !=
                (SBORROW4(iVar1,param_4) !=
                SBORROW4(iVar1 - param_4,(uint)((uint)puVar5[4] < param_3)))) {
              puVar5 = puVar5 + 1;
              puVar6 = puVar7;
            }
            puVar7 = puVar6;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
          if (((undefined4 **)puVar7 != &DAT_711a3b6c) &&
             (iVar1 = puVar7[5],
             (int)(param_4 - (iVar1 + (uint)(param_3 < (uint)puVar7[4]))) < 0 ==
             (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < (uint)puVar7[4]))
             ))) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)puVar7[1];
            if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
              do {
                puVar3 = (undefined4 *)puVar5[2];
                bVar8 = (undefined4 *)*puVar3 != puVar5;
                puVar5 = puVar3;
              } while (bVar8);
            }
            else {
              do {
                puVar3 = puVar6;
                puVar6 = (undefined4 *)*puVar3;
              } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
            }
            if (DAT_711a3b68 == puVar7) {
              DAT_711a3b68 = puVar3;
            }
            DAT_711a3b70 = DAT_711a3b70 + -1;
            FUN_71368054(DAT_711a3b6c,puVar7);
            thunk_qNQrlu(puVar7);
          }
        }
      }
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
      return;
    }
    while( true ) {
      puVar3 = puVar5;
      uVar2 = puVar3[4];
      iVar4 = puVar3[5];
      if ((int)(param_4 - (iVar4 + (uint)(param_3 < uVar2))) < 0 !=
          (SBORROW4(param_4,iVar4) != SBORROW4(param_4 - iVar4,(uint)(param_3 < uVar2)))) break;
      if ((int)(iVar4 - (param_4 + (uint)(uVar2 < param_3))) < 0 ==
          (SBORROW4(iVar4,param_4) != SBORROW4(iVar4 - param_4,(uint)(uVar2 < param_3))))
      goto LAB_715abad8;
      puVar5 = (undefined4 *)puVar3[1];
      if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
        puVar7 = puVar3 + 1;
        puVar6 = puVar3;
        goto LAB_715aba74;
      }
    }
    puVar5 = (undefined4 *)*puVar3;
    puVar7 = puVar3;
  } while( true );
}


// =========================================================================
// Function: FUN_715abf14
// Entry: 0x715abf14 | Size: 20 bytes
// =========================================================================

void FUN_715abf14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715abf7c
// Entry: 0x715abf7c | Size: 3736 bytes
// =========================================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_715abf7c(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *******pppppppuVar3;
  undefined4 ******ppppppuVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *******pppppppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *******pppppppuVar16;
  undefined4 ******ppppppuVar17;
  undefined4 *******pppppppuVar18;
  uint uVar19;
  int iVar20;
  undefined4 ******extraout_r1;
  undefined4 *puVar21;
  int *piVar22;
  undefined4 ******ppppppuVar23;
  uint uVar24;
  undefined4 ******ppppppuVar25;
  undefined4 *******pppppppuVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  bool bVar30;
  bool bVar31;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int iStack_b0;
  int *piStack_94;
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
  undefined4 *******pppppppuStack_5c;
  undefined4 *******pppppppuStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_54 = 0;
  pppppppuStack_58 = (undefined4 *******)0x0;
  uStack_60 = 0xffffffff;
  uStack_64 = 0xffffffff;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0xffffffff;
  uStack_78 = 0xffffffff;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  pppppppuStack_5c = &pppppppuStack_58;
  imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
  piVar15 = (int *)0x0;
  uVar13 = 0;
  do {
    iStack_44 = CONCAT31(iStack_44._1_3_,1);
    puStack_48 = &DAT_711a3af0;
    thunk_cfqspBX_JrdDvACwYrAyrngjQ();
    piStack_94 = DAT_711a3b04;
    if (DAT_711a3b04 == DAT_711a3b08) {
      ppppppuVar23 = (undefined4 ******)0x0;
      piVar29 = DAT_711a3b04;
      if (DAT_711a3b5c == DAT_711a3b60) {
LAB_715ac2ec:
        if ((undefined4 **)DAT_711a3af8 == &DAT_711a3afc) break;
        uVar24 = 0;
        uStack_c4 = 0xffffffff;
        puVar21 = DAT_711a3af8;
        do {
          if ((puVar21[8] == 2) && ((uVar6 = puVar21[0xb], (int)uStack_c4 < 0 || (uVar6 < uVar24))))
          {
            uStack_c4 = 0;
            ppppppuVar23 = (undefined4 ******)puVar21[4];
            uVar24 = uVar6;
            if (puVar21[0xe] == 2) {
LAB_715ac374:
              uVar19 = puVar21[0x11];
              uVar24 = uVar6;
              if (uVar19 < uVar6) goto LAB_715ac380;
            }
          }
          else if (puVar21[0xe] == 2) {
            uVar6 = uVar24;
            if (uStack_c4 < 0x80000000) goto LAB_715ac374;
            uVar19 = puVar21[0x11];
LAB_715ac380:
            ppppppuVar23 = (undefined4 ******)puVar21[4];
            uStack_c4 = 1;
            uVar24 = uVar19;
          }
          if ((puVar21[0x14] == 2) && (((int)uStack_c4 < 0 || ((uint)puVar21[0x17] < uVar24)))) {
            ppppppuVar23 = (undefined4 ******)puVar21[4];
            uStack_c4 = 2;
            uVar24 = puVar21[0x17];
          }
          puVar10 = puVar21;
          puVar5 = (undefined4 *)puVar21[1];
          if ((undefined4 *)puVar21[1] == (undefined4 *)0x0) {
            do {
              puVar21 = (undefined4 *)puVar10[2];
              bVar31 = (undefined4 *)*puVar21 != puVar10;
              puVar10 = puVar21;
            } while (bVar31);
          }
          else {
            do {
              puVar21 = puVar5;
              puVar5 = (undefined4 *)*puVar21;
            } while ((undefined4 *)*puVar21 != (undefined4 *)0x0);
          }
        } while ((undefined4 **)puVar21 != &DAT_711a3afc);
        if (0x7fffffff < uStack_c4) break;
        puVar21 = &DAT_711a3afc;
        puVar10 = DAT_711a3afc;
        while (puVar5 = puVar21, puVar10 != (undefined4 *)0x0) {
          while (puVar12 = puVar10, (int)puVar12[4] <= (int)ppppppuVar23) {
            if ((int)ppppppuVar23 <= (int)puVar12[4]) goto LAB_715acdac;
            puVar10 = (undefined4 *)puVar12[1];
            if ((undefined4 *)puVar12[1] == (undefined4 *)0x0) {
              puVar21 = puVar12 + 1;
              puVar5 = puVar12;
              goto LAB_715acbd0;
            }
          }
          puVar21 = puVar12;
          puVar10 = (undefined4 *)*puVar12;
        }
LAB_715acbd0:
        puVar12 = (undefined4 *)thunk_MwhHq(0x78);
        puVar12[4] = ppppppuVar23;
        imp___aeabi_memclr8(puVar12 + 6,0x58);
        *puVar12 = 0;
        puVar12[0x1c] = 0xffffffff;
        puVar12[0x1d] = 0xffffffff;
        puVar12[1] = 0;
        puVar12[2] = puVar5;
        *puVar21 = puVar12;
        puVar10 = puVar12;
        if ((undefined4 *)*DAT_711a3af8 != (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*puVar21;
          DAT_711a3af8 = (undefined4 *)*DAT_711a3af8;
        }
        FUN_712f807c(DAT_711a3afc,puVar10);
        DAT_711a3b00 = DAT_711a3b00 + 1;
LAB_715acdac:
        puVar12[uStack_c4 * 6 + 8] = 3;
        uStack_c8 = puVar12[uStack_c4 * 6 + 6];
        iStack_b8 = puVar12[uStack_c4 * 6 + 9];
        puVar12[uStack_c4 * 6 + 9] = 0;
        uStack_bc = puVar12[0x18];
        uStack_c0 = puVar12[0x19];
        iStack_b0 = puVar12[0x1a];
        piStack_b4 = (int *)puVar12[0x1b];
        bVar31 = false;
        piStack_94 = DAT_711a3b04;
        piVar29 = DAT_711a3b08;
        goto LAB_715ac09c;
      }
    }
    else {
      ppppppuVar23 = (undefined4 ******)0x0;
      piVar29 = DAT_711a3b08;
    }
LAB_715ac078:
    uStack_c4 = 0;
    uStack_c8 = 0;
    iStack_b8 = 0;
    iStack_b0 = 0;
    piStack_b4 = (int *)0x0;
    uStack_bc = 0;
    uStack_c0 = 0;
    bVar31 = true;
LAB_715ac09c:
    uVar2 = DAT_711a3b64;
    piVar22 = DAT_711a3b60;
    piVar1 = DAT_711a3b5c;
    DAT_711a3b04 = (int *)0x0;
    DAT_711a3b08 = (int *)0x0;
    DAT_711a3b0c = 0;
    piVar28 = piStack_94;
    DAT_711a3b5c = piVar15;
    DAT_711a3b60 = piVar15;
    DAT_711a3b64 = uVar13;
    if ((char)iStack_44 != '\0') {
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(puStack_48);
    }
    for (; piVar15 = piVar1, piVar28 != piVar29; piVar28 = piVar28 + 1) {
      ppppppuVar25 = (undefined4 ******)*piVar28;
      pppppppuVar16 = pppppppuStack_58;
      pppppppuVar8 = &pppppppuStack_58;
      while (pppppppuVar26 = pppppppuVar8, pppppppuVar16 != (undefined4 *******)0x0) {
        while (pppppppuVar8 = pppppppuVar16, (int)pppppppuVar8[4] <= (int)ppppppuVar25) {
          if ((int)ppppppuVar25 <= (int)pppppppuVar8[4]) goto LAB_715ac1ec;
          pppppppuVar16 = (undefined4 *******)pppppppuVar8[1];
          if ((undefined4 *******)pppppppuVar8[1] == (undefined4 *******)0x0) {
            pppppppuVar26 = pppppppuVar8 + 1;
            goto LAB_715ac180;
          }
        }
        pppppppuVar16 = (undefined4 *******)*pppppppuVar8;
      }
LAB_715ac180:
      pppppppuVar3 = (undefined4 *******)thunk_MwhHq(0x30);
      pppppppuVar3[4] = ppppppuVar25;
      pppppppuVar3[6] = (undefined4 ******)0x0;
      pppppppuVar3[7] = (undefined4 ******)0x0;
      pppppppuVar3[8] = (undefined4 ******)0x0;
      pppppppuVar3[9] = (undefined4 ******)0x0;
      pppppppuVar3[10] = (undefined4 ******)0x0;
      pppppppuVar3[0xb] = (undefined4 ******)0x0;
      *pppppppuVar3 = (undefined4 ******)0x0;
      pppppppuVar3[1] = (undefined4 ******)0x0;
      pppppppuVar3[2] = pppppppuVar8;
      *pppppppuVar26 = pppppppuVar3;
      pppppppuVar16 = pppppppuVar3;
      if ((undefined4 *******)*pppppppuStack_5c != (undefined4 *******)0x0) {
        pppppppuVar16 = (undefined4 *******)*pppppppuVar26;
        pppppppuStack_5c = (undefined4 *******)*pppppppuStack_5c;
      }
      FUN_712f807c(pppppppuStack_58,pppppppuVar16);
      iStack_54 = iStack_54 + 1;
      pppppppuVar8 = pppppppuVar3;
LAB_715ac1ec:
      if (pppppppuVar8[6] != (undefined4 ******)0x0) {
        ppppppuVar4 = (undefined4 ******)imp_eglGetCurrentSurface(0x3059);
        ppppppuVar17 = pppppppuVar8[6];
        if (ppppppuVar4 == ppppppuVar17) {
          imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
          ppppppuVar17 = pppppppuVar8[6];
        }
        imp_eglDestroySurface(DAT_711a3b84,ppppppuVar17);
        *(undefined1 *)(pppppppuVar8 + 0xb) = 0;
        pppppppuVar8[6] = (undefined4 ******)0x0;
      }
      pppppppuVar16 = &pppppppuStack_58;
      pppppppuVar8 = pppppppuStack_58;
      if (pppppppuStack_58 != (undefined4 *******)0x0) {
        do {
          pppppppuVar3 = pppppppuVar8;
          pppppppuVar18 = pppppppuVar16;
          ppppppuVar4 = pppppppuVar3[4];
          pppppppuVar16 = pppppppuVar3;
          pppppppuVar26 = pppppppuVar3;
          if ((int)ppppppuVar4 < (int)ppppppuVar25) {
            pppppppuVar26 = pppppppuVar3 + 1;
            pppppppuVar16 = pppppppuVar18;
          }
          pppppppuVar8 = (undefined4 *******)*pppppppuVar26;
        } while ((undefined4 *******)*pppppppuVar26 != (undefined4 *******)0x0);
        if ((undefined4 ********)pppppppuVar16 != &pppppppuStack_58) {
          pppppppuVar8 = pppppppuVar3;
          if ((int)ppppppuVar4 < (int)ppppppuVar25) {
            pppppppuVar8 = pppppppuVar18;
          }
          if ((int)pppppppuVar8[4] <= (int)ppppppuVar25) {
            if ((int)ppppppuVar4 < (int)ppppppuVar25) {
              pppppppuVar3 = pppppppuVar18;
            }
            pppppppuVar8 = pppppppuVar16;
            pppppppuVar26 = (undefined4 *******)pppppppuVar3[1];
            if ((undefined4 *******)pppppppuVar3[1] == (undefined4 *******)0x0) {
              do {
                pppppppuVar3 = (undefined4 *******)pppppppuVar8[2];
                bVar30 = (undefined4 *******)*pppppppuVar3 != pppppppuVar8;
                pppppppuVar8 = pppppppuVar3;
              } while (bVar30);
            }
            else {
              do {
                pppppppuVar3 = pppppppuVar26;
                pppppppuVar26 = (undefined4 *******)*pppppppuVar3;
              } while ((undefined4 *******)*pppppppuVar3 != (undefined4 *******)0x0);
            }
            if (pppppppuStack_5c == pppppppuVar16) {
              pppppppuStack_5c = pppppppuVar3;
            }
            iStack_54 = iStack_54 + -1;
            FUN_71368054(pppppppuStack_58,pppppppuVar16);
            thunk_qNQrlu(pppppppuVar16);
          }
        }
      }
    }
    for (; piVar15 != piVar22; piVar15 = piVar15 + 0xc) {
      if ((char)piVar15[10] == '\0') {
        puStack_48 = (undefined4 *)0x0;
        uStack_34 = uStack_34 & 0xffffff00;
        uStack_38 = 0;
        iVar9 = FUN_715addc4(&puStack_48,piVar15[9],piVar15[2],piVar15[3],piVar15[8],piVar15[9]);
        puVar21 = puStack_48;
        if ((iVar9 == 0) &&
           (iVar9 = imp_eglMakeCurrent(DAT_711a3b84,puStack_48,puStack_48,DAT_711a3b7c), iVar9 != 0)
           ) {
          imp_eglSwapInterval(DAT_711a3b84,0);
          iVar9 = FUN_715a84b0(&uStack_84,s_precision_mediump_float__uniform_700628a9,0xbf800000);
          if (iVar9 != 0) {
            imp_glWaitSync(piVar15[1],0,0xffffffff,0xffffffff);
            imp_glViewport(0,0,piVar15[8],piVar15[9]);
            imp_glUseProgram(uStack_84);
            imp_glUniform2f(uStack_78,piVar15[4],piVar15[5]);
            iVar9 = piVar15[5];
            iVar27 = piVar15[7];
            uVar13 = FUN_71ba240c(piVar15[6],piVar15[4]);
            uVar14 = FUN_71ba240c(iVar27,iVar9);
            imp_glUniform2f(uStack_74,uVar13,uVar14);
            imp_glActiveTexture(0x84c0);
            imp_glBindTexture(0xde1,*piVar15);
            imp_glBindVertexArray(uStack_80);
            imp_glDrawArrays(5,0,4);
            iVar9 = imp_eglSwapBuffers(DAT_711a3b84,puVar21);
            if (iVar9 == 1) {
              thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ae0);
              uVar24 = piVar15[2];
              iVar27 = piVar15[3];
              iVar11 = piVar15[8];
              iVar9 = piVar15[9];
              puVar10 = &DAT_711a3b6c;
              puVar5 = DAT_711a3b6c;
              while (puVar12 = puVar10, puVar5 != (undefined4 *)0x0) {
                while( true ) {
                  puVar7 = puVar5;
                  uVar6 = puVar7[4];
                  iVar20 = puVar7[5];
                  puVar10 = puVar7;
                  if ((int)(iVar27 - (iVar20 + (uint)(uVar24 < uVar6))) < 0 !=
                      (SBORROW4(iVar27,iVar20) != SBORROW4(iVar27 - iVar20,(uint)(uVar24 < uVar6))))
                  break;
                  if ((int)(iVar20 - (iVar27 + (uint)(uVar6 < uVar24))) < 0 ==
                      (SBORROW4(iVar20,iVar27) != SBORROW4(iVar20 - iVar27,(uint)(uVar6 < uVar24))))
                  goto LAB_715ac778;
                  puVar5 = (undefined4 *)puVar7[1];
                  if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
                    puVar12 = puVar7 + 1;
                    goto LAB_715ac6f0;
                  }
                }
                puVar5 = (undefined4 *)*puVar7;
              }
LAB_715ac6f0:
              puVar7 = (undefined4 *)thunk_MwhHq(0x20);
              puVar7[2] = puVar10;
              puVar7[4] = uVar24;
              puVar7[5] = iVar27;
              puVar7[6] = 0;
              puVar7[7] = 0;
              *puVar7 = 0;
              puVar7[1] = 0;
              *puVar12 = puVar7;
              puVar21 = puVar7;
              if ((int *)*DAT_711a3b68 != (int *)0x0) {
                puVar21 = (undefined4 *)*puVar12;
                DAT_711a3b68 = (int *)*DAT_711a3b68;
              }
              FUN_712f807c(DAT_711a3b6c,puVar21);
              DAT_711a3b70 = DAT_711a3b70 + 1;
              puVar21 = puStack_48;
LAB_715ac778:
              puVar7[6] = iVar11;
              puVar7[7] = iVar9;
              thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
            }
          }
        }
        if (puVar21 != (undefined4 *)0x0) {
          puVar10 = (undefined4 *)imp_eglGetCurrentSurface(0x3059);
          if (puVar10 == puVar21) {
            imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
          }
          imp_eglDestroySurface(DAT_711a3b84,puVar21);
        }
      }
      if (piVar15[1] != 0) {
        imp_glDeleteSync();
      }
      if (*piVar15 != 0) {
        imp_glDeleteTextures(1,piVar15);
      }
    }
    pppppppuVar16 = &pppppppuStack_58;
    pppppppuVar8 = pppppppuStack_58;
    if (!bVar31) {
      while (pppppppuVar26 = pppppppuVar16, pppppppuVar8 != (undefined4 *******)0x0) {
        while (pppppppuVar16 = pppppppuVar8, (int)pppppppuVar16[4] <= (int)ppppppuVar23) {
          ppppppuVar25 = ppppppuVar23;
          if ((int)ppppppuVar23 <= (int)pppppppuVar16[4]) goto LAB_715ac840;
          pppppppuVar8 = (undefined4 *******)pppppppuVar16[1];
          if ((undefined4 *******)pppppppuVar16[1] == (undefined4 *******)0x0) {
            pppppppuVar26 = pppppppuVar16 + 1;
            goto LAB_715ac7d0;
          }
        }
        pppppppuVar8 = (undefined4 *******)*pppppppuVar16;
      }
LAB_715ac7d0:
      pppppppuVar8 = (undefined4 *******)thunk_MwhHq(0x30);
      pppppppuVar8[4] = ppppppuVar23;
      pppppppuVar8[6] = (undefined4 ******)0x0;
      pppppppuVar8[7] = (undefined4 ******)0x0;
      pppppppuVar8[8] = (undefined4 ******)0x0;
      pppppppuVar8[9] = (undefined4 ******)0x0;
      pppppppuVar8[10] = (undefined4 ******)0x0;
      pppppppuVar8[0xb] = (undefined4 ******)0x0;
      *pppppppuVar8 = (undefined4 ******)0x0;
      pppppppuVar8[1] = (undefined4 ******)0x0;
      pppppppuVar8[2] = pppppppuVar16;
      *pppppppuVar26 = pppppppuVar8;
      pppppppuVar16 = pppppppuVar8;
      if ((undefined4 *******)*pppppppuStack_5c != (undefined4 *******)0x0) {
        pppppppuVar16 = (undefined4 *******)*pppppppuVar26;
        pppppppuStack_5c = (undefined4 *******)*pppppppuStack_5c;
      }
      FUN_712f807c(pppppppuStack_58,pppppppuVar16);
      iStack_54 = iStack_54 + 1;
      ppppppuVar25 = extraout_r1;
      pppppppuVar16 = pppppppuVar8;
LAB_715ac840:
      pppppppuVar8 = pppppppuVar16 + 6;
      iVar9 = FUN_715addc4(pppppppuVar8,ppppppuVar25,iStack_b0,piStack_b4,uStack_bc,uStack_c0);
      if (iVar9 == 0) {
        iVar9 = imp_eglMakeCurrent(DAT_711a3b84,*pppppppuVar8,*pppppppuVar8,DAT_711a3b7c);
        if (iVar9 == 0) {
          bVar31 = true;
          if (*pppppppuVar8 == (undefined4 ******)0x0) {
            iVar27 = 0;
          }
          else {
            ppppppuVar25 = (undefined4 ******)imp_eglGetCurrentSurface(0x3059);
            ppppppuVar4 = *pppppppuVar8;
            if (ppppppuVar25 == ppppppuVar4) {
              imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
              ppppppuVar4 = *pppppppuVar8;
            }
            imp_eglDestroySurface(DAT_711a3b84,ppppppuVar4);
            iVar27 = 0;
            *(undefined1 *)(pppppppuVar16 + 0xb) = 0;
            pppppppuVar16[6] = (undefined4 ******)0x0;
          }
        }
        else {
          if (*(char *)(pppppppuVar16 + 0xb) == '\0') {
            iVar9 = imp_eglSwapInterval(DAT_711a3b84,0);
            *(bool *)(pppppppuVar16 + 0xb) = iVar9 == 1;
          }
          iVar9 = FUN_715a84b0(&uStack_70,s_precision_mediump_float__uniform_7006ee11,0x3f800000);
          bVar31 = false;
          iVar27 = 0;
          if (iVar9 != 0) {
            if (iStack_b8 != 0) {
              iVar11 = imp_glClientWaitSync(iStack_b8,1,100000000,0);
              iVar9 = 0x911d;
              if (iVar11 != 0x911d) {
                iVar9 = 0x911b;
              }
              if (iVar11 == 0x911d || iVar11 == iVar9) {
                DAT_711a3b24 = DAT_711a3b24 + 1;
                goto LAB_715ac87c;
              }
            }
            thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_48);
            imp_glViewport(0,0,uStack_bc,uStack_c0);
            imp_glUseProgram(uStack_70);
            imp_glActiveTexture(0x84c0);
            imp_glBindTexture(0xde1,uStack_c8);
            imp_glBindVertexArray(uStack_6c);
            imp_glDrawArrays(5,0,4);
            iVar27 = imp_glFenceSync(0x9117,0);
            imp_glFinish();
            iVar9 = imp_eglSwapBuffers(DAT_711a3b84,*pppppppuVar8);
            if (iVar9 == 1) {
              DAT_711a3b20 = (undefined4 *)((int)DAT_711a3b20 + 1);
            }
            else {
              DAT_711a3b28 = DAT_711a3b28 + 1;
              if (*pppppppuVar8 != (undefined4 ******)0x0) {
                ppppppuVar25 = (undefined4 ******)imp_eglGetCurrentSurface(0x3059);
                ppppppuVar4 = *pppppppuVar8;
                if (ppppppuVar25 == ppppppuVar4) {
                  imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
                  ppppppuVar4 = *pppppppuVar8;
                }
                imp_eglDestroySurface(DAT_711a3b84,ppppppuVar4);
                *(undefined1 *)(pppppppuVar16 + 0xb) = 0;
                pppppppuVar16[6] = (undefined4 ******)0x0;
              }
            }
            thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_50);
            uVar13 = FUN_71ba19d8((int)puStack_50 - (int)puStack_48,
                                  iStack_4c - (iStack_44 + (uint)(puStack_50 < puStack_48)));
            uVar14 = FUN_71ba13e0(uVar13,0x49742400);
            uVar13 = DAT_711a3b30;
            iVar9 = FUN_71ba2d10(DAT_711a3b30,uVar14);
            DAT_711a3b30 = uVar13;
            if (iVar9 != 0) {
              DAT_711a3b30 = uVar14;
            }
            bVar31 = false;
          }
        }
      }
      else {
        iVar27 = 0;
        bVar31 = iVar9 == 2;
      }
LAB_715ac87c:
      thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_48);
      if ((int)(uint)((uint)((int)puStack_48 - (int)DAT_711a3b38) < 1000000000) <=
          (int)(iStack_44 - (DAT_711a3b3c + (uint)(puStack_48 < DAT_711a3b38)))) {
        uStack_38 = 0;
        uStack_3c = 0;
        iStack_40 = 0;
        iStack_44 = 0;
        puStack_48 = (undefined4 *)0x0;
        thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&puStack_30);
        DAT_711a3b20 = puStack_48;
        DAT_711a3b24 = iStack_44;
        DAT_711a3b28 = iStack_40;
        DAT_711a3b2c = uStack_3c;
        DAT_711a3b30 = uStack_38;
        DAT_711a3b34 = uStack_34;
        DAT_711a3b38 = puStack_30;
        DAT_711a3b3c = iStack_2c;
      }
      if (iStack_b8 != 0) {
        imp_glDeleteSync();
      }
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3af0);
      if (DAT_711a3afc == (undefined4 *)0x0) {
LAB_715ac96c:
        puVar21 = &DAT_711a3afc;
      }
      else {
        puVar21 = &DAT_711a3afc;
        puVar10 = DAT_711a3afc;
        do {
          puVar5 = puVar10;
          if ((int)puVar10[4] < (int)ppppppuVar23) {
            puVar10 = puVar10 + 1;
            puVar5 = puVar21;
          }
          puVar21 = puVar5;
          puVar10 = (undefined4 *)*puVar10;
        } while (puVar10 != (undefined4 *)0x0);
        if ((undefined4 **)puVar21 == &DAT_711a3afc) goto LAB_715ac96c;
        if ((int)ppppppuVar23 < (int)puVar21[4]) {
          puVar21 = &DAT_711a3afc;
        }
      }
      piVar15 = DAT_711a3b10;
      piVar29 = (int *)0x0;
      if ((undefined4 **)puVar21 != &DAT_711a3afc) {
        piVar29 = puVar21 + 6;
      }
      while (piVar15 != DAT_711a3b14) {
        piVar22 = piVar15 + 0x1a;
        piVar28 = (int *)0x0;
        if ((undefined4 ******)*piVar15 == ppppppuVar23) {
          piVar28 = piVar15 + 2;
        }
        piVar15 = piVar22;
        if (piVar29 == (int *)0x0) {
          piVar29 = piVar28;
        }
      }
      if (piVar29 == (int *)0x0) {
        if (iVar27 != 0) {
          imp_glDeleteSync(iVar27);
        }
      }
      else {
        if (bVar31) {
          piVar15 = piStack_b4;
        }
        piVar29[uStack_c4 * 6 + 2] = 0;
        piVar29[uStack_c4 * 6 + 4] = iVar27;
        if (bVar31) {
          piVar29[0x16] = iStack_b0;
          piVar29[0x17] = (int)piVar15;
        }
      }
      thunk_KmAAJrQeDYcikipjnSTRnrUxnxfqYglsjaMkPyhpSaUedr(&DAT_711a3af4);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3af0);
    }
    piVar15 = piVar1;
    uVar13 = uVar2;
    if (piStack_94 != (int *)0x0) {
      thunk_qNQrlu();
    }
  } while( true );
  thunk_STeqdXQsnAyiTBJTFCuiFKcPKNhdgVCrrMQVYFZSLEEADdhRfhXIrTCuEWwQWomPgRHz
            (&DAT_711a3af4,&puStack_48);
  piStack_94 = DAT_711a3b04;
  piVar29 = DAT_711a3b08;
  if ((DAT_711a3b04 != DAT_711a3b08) || (piVar29 = DAT_711a3b04, DAT_711a3b5c != DAT_711a3b60))
  goto LAB_715ac078;
  goto LAB_715ac2ec;
}


// =========================================================================
// Function: FUN_715addc4
// Entry: 0x715addc4 | Size: 544 bytes
// =========================================================================

int FUN_715addc4(int *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_711a3ae0);
  if (DAT_711a3ae8 != (undefined4 *)0x0) {
    puVar7 = &DAT_711a3ae8;
    puVar4 = DAT_711a3ae8;
    do {
      iVar6 = puVar4[5];
      puVar1 = puVar4;
      if ((int)(iVar6 - (param_4 + ((uint)puVar4[4] < param_3))) < 0 !=
          (SBORROW4(iVar6,param_4) != SBORROW4(iVar6 - param_4,(uint)((uint)puVar4[4] < param_3))))
      {
        puVar4 = puVar4 + 1;
        puVar1 = puVar7;
      }
      puVar7 = puVar1;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
    if ((((undefined4 **)puVar7 != &DAT_711a3ae8) &&
        (iVar6 = puVar7[5],
        (int)(param_4 - (iVar6 + (uint)(param_3 < (uint)puVar7[4]))) < 0 ==
        (SBORROW4(param_4,iVar6) != SBORROW4(param_4 - iVar6,(uint)(param_3 < (uint)puVar7[4])))))
       && (puVar7[6] != 0)) {
      imp_ANativeWindow_acquire();
      uVar8 = puVar7[7];
      iVar6 = puVar7[6];
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
      if (iVar6 != 0) {
        if (*param_1 != 0) {
          uVar2 = param_1[2] ^ param_3 | param_1[3] ^ param_4;
          bVar9 = uVar2 == 0;
          if (bVar9) {
            uVar2 = param_1[4];
          }
          if (bVar9 && uVar2 == uVar8) {
            imp_ANativeWindow_release(iVar6);
            return 0;
          }
          iVar3 = imp_eglGetCurrentSurface(0x3059);
          iVar5 = *param_1;
          if (iVar3 == iVar5) {
            imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
            iVar5 = *param_1;
          }
          imp_eglDestroySurface(DAT_711a3b84,iVar5);
          *(undefined1 *)(param_1 + 5) = 0;
          *param_1 = 0;
        }
        imp_ANativeWindow_setBuffersGeometry(iVar6,param_5,param_6,0);
        iVar3 = imp_eglCreateWindowSurface(DAT_711a3b84,DAT_711a3b88,iVar6,0);
        *param_1 = iVar3;
        imp_ANativeWindow_release(iVar6);
        param_1[3] = param_4;
        param_1[2] = param_3;
        param_1[4] = uVar8;
        DAT_711a3b2c = DAT_711a3b2c + 1;
        return (uint)(*param_1 == 0) << 1;
      }
      goto LAB_715adf6c;
    }
  }
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_711a3ae0);
LAB_715adf6c:
  if (*param_1 != 0) {
    iVar6 = imp_eglGetCurrentSurface(0x3059);
    iVar3 = *param_1;
    if (iVar6 == iVar3) {
      imp_eglMakeCurrent(DAT_711a3b84,0,0,DAT_711a3b7c);
      iVar3 = *param_1;
    }
    imp_eglDestroySurface(DAT_711a3b84,iVar3);
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = 0;
  }
  return 1;
}


// =========================================================================
// Function: FUN_715ae324
// Entry: 0x715ae324 | Size: 20 bytes
// =========================================================================

void FUN_715ae324(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715ae6bc
// Entry: 0x715ae6bc | Size: 20 bytes
// =========================================================================

void FUN_715ae6bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715aed74
// Entry: 0x715aed74 | Size: 40 bytes
// =========================================================================

undefined4 * FUN_715aed74(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_715aedd0(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_715aedd0
// Entry: 0x715aedd0 | Size: 28 bytes
// =========================================================================

void FUN_715aedd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = FUN_7141faac();
  *param_1 = iVar2;
  uVar4 = FUN_7141d104();
  iVar3 = (int)uVar4;
  param_1[1] = iVar3;
  iVar2 = 0;
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  if (iVar3 != 0) {
    iVar2 = *param_1;
    iVar1 = iVar3;
  }
  if (iVar3 == 0 || iVar2 == 0) {
    return;
  }
  FUN_7141ea34(iVar2,iVar1);
  FUN_7141feb0(*param_1,0x43960000);
  FUN_714202f0(*param_1,0x3c23d70a);
  uStack_14 = 0x3f000000;
  uStack_18 = 0x3f000000;
  FUN_71420728(*param_1,&uStack_18);
  FUN_71420b60(*param_1,1);
  FUN_714119dc(*DAT_70ffc978,*param_1);
  return;
}


// =========================================================================
// Function: FUN_715aefa0
// Entry: 0x715aefa0 | Size: 32 bytes
// =========================================================================

int FUN_715aefa0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  iVar1 = FUN_7143b470(param_2,param_3,0x20,0x10505);
  iVar2 = FUN_7143cf50();
  if (iVar1 == 0 || iVar2 == 0) {
    return 0;
  }
  *(int *)(*param_1 + 0x60) = iVar1;
  FUN_7148e65c(*param_1);
  uStack_21 = (undefined1)((uint)param_8 >> 0x18);
  uStack_23 = (undefined1)((uint)param_8 >> 8);
  uStack_24 = (undefined1)((uint)param_8 >> 0x10);
  uStack_22 = (undefined1)param_8;
  FUN_71420f90(*param_1,&uStack_24,3);
  FUN_7141f27c(*param_1);
  FUN_71413b60(6,1);
  FUN_71413b60(8,1);
  FUN_71413b60(7,0);
  FUN_71413b60(0x1e,0);
  FUN_71413b60(0x14,0);
  FUN_71413b60(0xe,0);
  FUN_7140e03c();
  if (DAT_711e9ee4 != 0) {
    FUN_715af2b4(param_10,param_2,param_3,param_5,param_5,0,param_7,param_9,param_10);
  }
  FUN_7141f690(*param_1);
  return iVar2;
}


// =========================================================================
// Function: FUN_715af2b4
// Entry: 0x715af2b4 | Size: 3244 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715af2b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,uint param_8,undefined4 param_9)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  uint uStack_9a0;
  uint uStack_99c;
  uint uStack_998;
  undefined4 uStack_994;
  uint auStack_990 [4];
  undefined *puStack_980;
  undefined4 uStack_97c;
  undefined *puStack_978;
  undefined *apuStack_974 [8];
  uint auStack_954 [5];
  undefined *apuStack_940 [7];
  undefined4 uStack_924;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  uint uStack_8ec;
  uint uStack_8e8;
  uint uStack_8e4;
  uint auStack_8e0 [4];
  undefined *puStack_8d0;
  undefined4 uStack_8cc;
  undefined *puStack_8c8;
  undefined *apuStack_8c4 [8];
  uint auStack_8a4 [5];
  undefined *apuStack_890 [7];
  undefined4 uStack_874;
  undefined4 uStack_848;
  undefined4 uStack_844;
  uint uStack_840;
  uint uStack_83c;
  uint uStack_838;
  undefined1 auStack_830 [2052];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uVar2 = *(undefined4 *)(DAT_711e9ee4 + 0x20);
  FUN_718d0d4c();
  FUN_719194a0();
  FUN_718d2da0();
  FUN_718842a8(auStack_830,param_9,0x800);
  uVar16 = (param_7 & 0xffffff) >> 0x10;
  uVar15 = (param_7 & 0xffff) >> 8;
  if (3 < param_8) goto LAB_715af488;
  uVar13 = param_7 >> 0x18;
  param_7 = param_7 & 0xff;
  switch(param_8) {
  case 0:
    uVar14 = 0;
    break;
  case 1:
    uVar3 = imp_strlen(auStack_830);
    if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_840);
    }
    if (uVar3 < 0xb) {
      uStack_840 = CONCAT31(uStack_840._1_3_,(char)(uVar3 << 1));
      uVar17 = (uint)&uStack_840 | 1;
      if (uVar3 != 0) goto LAB_715af720;
    }
    else {
      uVar17 = thunk_MwhHq((uVar3 | 7) + 1);
      uStack_840 = (uVar3 | 7) + 2;
      uStack_83c = uVar3;
      uStack_838 = uVar17;
LAB_715af720:
      imp___aeabi_memcpy(uVar17,auStack_830,uVar3);
    }
    uVar14 = 0;
    *(undefined1 *)(uVar17 + uVar3) = 0;
    uStack_874 = 0;
    apuStack_890[0] = &DAT_70b13f98;
    uStack_8cc = 0;
    puStack_8d0 = &DAT_70b13f84;
    puStack_8c8 = &DAT_70b13ed8;
    thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_890,apuStack_8c4);
    uStack_848 = 0;
    uStack_844 = 0xffffffff;
    puStack_8d0 = &DAT_70b13ec4;
    puStack_8c8 = &DAT_70b13ed8;
    apuStack_890[0] = &DAT_70b13eec;
    thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(apuStack_8c4);
    auStack_8a4[0] = 0;
    auStack_8a4[1] = 0;
    auStack_8a4[4] = 0x18;
    auStack_8a4[2] = 0;
    auStack_8a4[3] = 0;
    apuStack_8c4[0] = &DAT_70b13d18;
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (auStack_8a4,&uStack_840);
    FUN_714d2e60(apuStack_8c4);
    auStack_8e0[2] = 0;
    auStack_8e0[1] = 0;
    auStack_8e0[0] = 0;
    piVar10 = (int *)FUN_714fe090(&puStack_8d0,auStack_8e0,10);
    if ((*(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10) & 5) == 0) {
      uVar17 = (uint)auStack_8e0 | 1;
      uVar3 = auStack_8e0[2];
      if ((auStack_8e0[0] & 1) == 0) {
        uVar3 = uVar17;
      }
      uVar4 = FUN_71ba1e0c(param_5);
      FUN_717dc878(&puStack_980,uVar3,uVar4);
      uVar14 = uStack_97c;
      piVar10 = (int *)FUN_714fe090(&puStack_8d0,auStack_8e0,10);
      bVar1 = *(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10);
      uVar5 = FUN_71ba1b94(param_3);
      uVar14 = FUN_71ba240c(uVar5,uVar14);
      uVar14 = FUN_71ba21e8(uVar14,0x3f000000);
      if ((bVar1 & 5) == 0) {
        do {
          uVar3 = auStack_8e0[2];
          if ((auStack_8e0[0] & 1) == 0) {
            uVar3 = uVar17;
          }
          FUN_717dc878(&puStack_980,uVar3,uVar4);
          uVar5 = uStack_97c;
          piVar10 = (int *)FUN_714fe090(&puStack_8d0,auStack_8e0,10);
          bVar1 = *(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10);
          uVar5 = FUN_71ba21e8(uVar5,0xbf000000);
          uVar14 = FUN_71ba0b38(uVar14,uVar5);
        } while ((bVar1 & 5) == 0);
      }
    }
    iVar12 = FUN_71ba2d10(uVar14,0);
    if (iVar12 != 0) {
      uVar14 = 0;
    }
    uVar3 = imp_strlen(auStack_830);
    if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_8ec);
    }
    if (uVar3 < 0xb) {
      uVar17 = (uint)&uStack_8ec | 1;
      uStack_8ec = CONCAT31(uStack_8ec._1_3_,(char)(uVar3 << 1));
      if (uVar3 != 0) goto LAB_715af9f8;
    }
    else {
      uVar17 = thunk_MwhHq((uVar3 | 7) + 1);
      uStack_8ec = (uVar3 | 7) + 2;
      uStack_8e8 = uVar3;
      uStack_8e4 = uVar17;
LAB_715af9f8:
      imp___aeabi_memcpy(uVar17,auStack_830,uVar3);
    }
    *(undefined1 *)(uVar17 + uVar3) = 0;
    uStack_924 = 0;
    apuStack_940[0] = &DAT_70b13f98;
    uStack_97c = 0;
    puStack_980 = &DAT_70b13f84;
    puStack_978 = &DAT_70b13ed8;
    thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_940,apuStack_974);
    uStack_8f8 = 0;
    uStack_8f4 = 0xffffffff;
    puStack_980 = &DAT_70b13ec4;
    puStack_978 = &DAT_70b13ed8;
    apuStack_940[0] = &DAT_70b13eec;
    thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(apuStack_974);
    auStack_954[4] = 0x18;
    auStack_954[0] = 0;
    auStack_954[1] = 0;
    auStack_954[2] = 0;
    auStack_954[3] = 0;
    apuStack_974[0] = &DAT_70b13d18;
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (auStack_954,&uStack_8ec);
    FUN_714d2e60(apuStack_974);
    auStack_990[2] = 0;
    auStack_990[1] = 0;
    auStack_990[0] = 0;
    piVar10 = (int *)FUN_714fe090(&puStack_980,auStack_990,10);
    if ((*(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10) & 5) == 0) {
      puVar18 = (undefined4 *)((uint)&uStack_9a0 | 4);
      uVar4 = FUN_71ba1b94(uVar13);
      uStack_9a8 = FUN_71ba21e8(uVar4,0x3b808081);
      uVar4 = FUN_71ba1b94(param_7);
      uStack_9ac = FUN_71ba21e8(uVar4,0x3b808081);
      uVar4 = FUN_71ba1b94(uVar15);
      uStack_9b0 = FUN_71ba21e8(uVar4,0x3b808081);
      uVar4 = FUN_71ba1b94(uVar16);
      uVar15 = FUN_71ba21e8(uVar4,0x3b808081);
      uVar4 = FUN_71ba1b94(param_2);
      uVar16 = (uint)auStack_990 | 1;
      uVar5 = FUN_71ba1e0c(param_5);
      do {
        uVar13 = auStack_990[2];
        if ((auStack_990[0] & 1) == 0) {
          uVar13 = uVar16;
        }
        FUN_717dc878(&uStack_9a0,uVar13,uVar5);
        uVar13 = auStack_990[2];
        if ((auStack_990[0] & 1) == 0) {
          uVar13 = uVar16;
        }
        uVar6 = FUN_71ba240c(uVar4,uStack_9a0);
        uVar6 = FUN_71ba21e8(uVar6,0x3f000000);
        FUN_717dcb70(uVar2,uVar5,0,uVar6,uVar14,uVar15,uStack_9b0,uStack_9ac,uStack_9a8,uVar13);
        uStack_994 = 0;
        uStack_998 = 0;
        uStack_99c = 0;
        uStack_9a0 = 0;
        uVar13 = auStack_990[2];
        if ((auStack_990[0] & 1) == 0) {
          uVar13 = uVar16;
        }
        iVar12 = FUN_717dc75c(uVar13,&uStack_9a0);
        uVar14 = FUN_71ba0b38(uVar14,uVar5);
        if (iVar12 != 0) {
          uStack_9a8 = puVar18[2];
          uStack_9ac = puVar18[1];
          uStack_9b0 = *puVar18;
          uVar15 = uStack_9a0;
        }
        piVar10 = (int *)FUN_714fe090(&puStack_980,auStack_990,10);
      } while ((*(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10) & 5) == 0);
    }
    if ((auStack_990[0] & 1) != 0) {
      thunk_qNQrlu(auStack_990[2]);
    }
    apuStack_940[0] = &DAT_70b13eec;
    puStack_980 = &DAT_70b13ec4;
    puStack_978 = &DAT_70b13ed8;
    apuStack_974[0] = &DAT_70b13d18;
    if ((auStack_954[0] & 1) != 0) {
      thunk_qNQrlu(auStack_954[2]);
    }
    thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(apuStack_974);
    thunk_jHGHxSriLRaJMiM_ehpsnMjEKIvyrEZrJJRvtgXpM_xvDCfdtdYPfdC(&puStack_980,&DAT_70b13ef8);
    thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_940);
    if ((uStack_8ec & 1) != 0) {
      thunk_qNQrlu(uStack_8e4);
    }
    if ((auStack_8e0[0] & 1) != 0) {
      thunk_qNQrlu(auStack_8e0[2]);
    }
    apuStack_890[0] = &DAT_70b13eec;
    puStack_8d0 = &DAT_70b13ec4;
    puStack_8c8 = &DAT_70b13ed8;
    apuStack_8c4[0] = &DAT_70b13d18;
    if ((auStack_8a4[0] & 1) != 0) {
      thunk_qNQrlu(auStack_8a4[2]);
    }
    thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(apuStack_8c4);
    thunk_jHGHxSriLRaJMiM_ehpsnMjEKIvyrEZrJJRvtgXpM_xvDCfdtdYPfdC(&puStack_8d0,&DAT_70b13ef8);
    thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_890);
    if ((uStack_840 & 1) != 0) {
      thunk_qNQrlu(uStack_838);
    }
    goto LAB_715af488;
  case 2:
    uVar3 = imp_strlen(auStack_830);
    if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_9a0);
    }
    if (uVar3 < 0xb) {
      uVar17 = (uint)&uStack_9a0 | 1;
      uStack_9a0 = CONCAT31(uStack_9a0._1_3_,(char)(uVar3 << 1));
      if (uVar3 != 0) goto LAB_715af528;
    }
    else {
      uVar17 = thunk_MwhHq((uVar3 | 7) + 1);
      uStack_9a0 = (uVar3 | 7) + 2;
      uStack_99c = uVar3;
      uStack_998 = uVar17;
LAB_715af528:
      imp___aeabi_memcpy(uVar17,auStack_830,uVar3);
    }
    *(undefined1 *)(uVar17 + uVar3) = 0;
    uStack_874 = 0;
    puStack_8d0 = &DAT_70b13f84;
    apuStack_890[0] = &DAT_70b13f98;
    uStack_8cc = 0;
    puStack_8c8 = &DAT_70b13ed8;
    thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_890,apuStack_8c4);
    uStack_848 = 0;
    uStack_844 = 0xffffffff;
    puStack_8d0 = &DAT_70b13ec4;
    puStack_8c8 = &DAT_70b13ed8;
    apuStack_890[0] = &DAT_70b13eec;
    thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(apuStack_8c4);
    auStack_8a4[0] = 0;
    auStack_8a4[1] = 0;
    auStack_8a4[4] = 0x18;
    auStack_8a4[2] = 0;
    auStack_8a4[3] = 0;
    apuStack_8c4[0] = &DAT_70b13d18;
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (auStack_8a4,&uStack_9a0);
    FUN_714d2e60(apuStack_8c4);
    uStack_838 = 0;
    uStack_83c = 0;
    uStack_840 = 0;
    piVar10 = (int *)FUN_714fe090(&puStack_8d0,&uStack_840,10);
    if ((*(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10) & 5) == 0) {
      puVar18 = (undefined4 *)((uint)&puStack_980 | 4);
      uVar14 = FUN_71ba1b94(uVar13);
      uStack_9a8 = FUN_71ba21e8(uVar14,0x3b808081);
      uVar14 = FUN_71ba1b94(param_7);
      uStack_9ac = FUN_71ba21e8(uVar14,0x3b808081);
      uVar14 = FUN_71ba1b94(uVar15);
      uVar14 = FUN_71ba21e8(uVar14,0x3b808081);
      uVar4 = FUN_71ba1b94(uVar16);
      puVar11 = (undefined *)FUN_71ba21e8(uVar4,0x3b808081);
      uVar4 = FUN_71ba1b94(param_2);
      uVar15 = (uint)&uStack_840 | 1;
      uVar5 = FUN_71ba1e0c(param_5);
      uVar6 = 0;
      do {
        uVar16 = uStack_838;
        if ((uStack_840 & 1) == 0) {
          uVar16 = uVar15;
        }
        FUN_717dc878(&puStack_980,uVar16,uVar5);
        uVar16 = uStack_838;
        if ((uStack_840 & 1) == 0) {
          uVar16 = uVar15;
        }
        uVar7 = FUN_71ba240c(uVar4,puStack_980);
        FUN_717dcb70(uVar2,uVar5,0,uVar7,uVar6,puVar11,uVar14,uStack_9ac,uStack_9a8,uVar16);
        apuStack_974[0] = (undefined *)0x0;
        puStack_978 = (undefined *)0x0;
        uStack_97c = 0;
        puStack_980 = (undefined *)0x0;
        uVar16 = uStack_838;
        if ((uStack_840 & 1) == 0) {
          uVar16 = uVar15;
        }
        iVar12 = FUN_717dc75c(uVar16,&puStack_980);
        uVar6 = FUN_71ba0b38(uVar6,uVar5);
        if (iVar12 != 0) {
          uStack_9a8 = puVar18[2];
          uStack_9ac = puVar18[1];
          uVar14 = *puVar18;
          puVar11 = puStack_980;
        }
        piVar10 = (int *)FUN_714fe090(&puStack_8d0,&uStack_840,10);
      } while ((*(byte *)((int)piVar10 + *(int *)(*piVar10 + -0xc) + 0x10) & 5) == 0);
    }
    if ((uStack_840 & 1) != 0) {
      thunk_qNQrlu(uStack_838);
    }
    puStack_8d0 = &DAT_70b13ec4;
    puStack_8c8 = &DAT_70b13ed8;
    apuStack_890[0] = &DAT_70b13eec;
    apuStack_8c4[0] = &DAT_70b13d18;
    if ((auStack_8a4[0] & 1) != 0) {
      thunk_qNQrlu(auStack_8a4[2]);
    }
    thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(apuStack_8c4);
    thunk_jHGHxSriLRaJMiM_ehpsnMjEKIvyrEZrJJRvtgXpM_xvDCfdtdYPfdC(&puStack_8d0,&DAT_70b13ef8);
    thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_890);
    if ((uStack_9a0 & 1) != 0) {
      thunk_qNQrlu(uStack_998);
    }
    goto LAB_715af488;
  case 3:
    uVar14 = 0x40400000;
  }
  uVar4 = *(undefined4 *)(DAT_711e9ee4 + 0x2c);
  uVar14 = FUN_71ba21e8(*(undefined4 *)(DAT_711e9ee4 + 0x30),uVar14);
  uVar5 = FUN_71ba1b94(uVar16);
  uVar5 = FUN_71ba21e8(uVar5,0x3b808081);
  uVar6 = FUN_71ba1b94(uVar15);
  uVar6 = FUN_71ba21e8(uVar6,0x3b808081);
  uVar7 = FUN_71ba1b94(param_7);
  uVar7 = FUN_71ba21e8(uVar7,0x3b808081);
  uVar8 = FUN_71ba1b94(uVar13);
  uVar8 = FUN_71ba21e8(uVar8,0x3b808081);
  uVar4 = FUN_71ba21e8(uVar4,0);
  uVar9 = FUN_71ba1e0c(param_5);
  FUN_717dcb70(uVar2,uVar9,0,uVar4,uVar14,uVar5,uVar6,uVar7,uVar8,auStack_830);
LAB_715af488:
  FUN_718e83bc();
  FUN_718ea258();
  FUN_718d0d94();
  FUN_71918aec();
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: EerzZEoeXwytKYdiFPPsjfZiCRPpc
// Entry: 0x715b0e38 | Size: 212 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EerzZEoeXwytKYdiFPPsjfZiCRPpc(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_24;
  
  ppuVar2 = &puStack_40;
  iStack_24 = _ext___stack_chk_guard;
  iVar3 = param_2 * param_3 * 4;
  uVar1 = thunk__IBDl(iVar3);
  imp___aeabi_memcpy(uVar1,param_1,iVar3);
  puStack_40 = &DAT_70b0eca8;
  uStack_3c = uVar1;
  iStack_38 = param_2;
  iStack_34 = param_3;
  piStack_30 = (int *)&puStack_40;
  FUN_717ccb10(DAT_712017fc,&puStack_40);
  if ((undefined **)piStack_30 == &puStack_40) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    ppuVar2 = (undefined **)piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_715b0ee8;
  }
  (**(code **)((int)*ppuVar2 + iVar3))();
LAB_715b0ee8:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: TEPZyHwRzBdVXs_KaVlMZIKXIWrhPgo
// Entry: 0x715b1014 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TEPZyHwRzBdVXs_KaVlMZIKXIWrhPgo(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0eccc;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_715b1090;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_715b1090:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: hsxeMOBNxAZAGlERrzJEKpkvacCEDcy
// Entry: 0x715b1184 | Size: 424 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hsxeMOBNxAZAGlERrzJEKpkvacCEDcy(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
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
  uVar3 = imp_strlen(param_2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar3 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_50 | 1;
    if (uVar3 != 0) goto LAB_715b1204;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_50 = (uVar3 | 7) + 2;
    uStack_4c = uVar3;
    uStack_48 = uVar6;
LAB_715b1204:
    imp___aeabi_memcpy(uVar6,param_2,uVar3);
  }
  uVar2 = uStack_50;
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar1 = DAT_712017fc;
  if ((uStack_50 & 1) == 0) {
    uStack_5c = uStack_50;
    uStack_58 = uStack_4c;
    uStack_54 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_5c,uStack_48,uStack_4c);
  }
  iVar5 = 0x14;
  piStack_30 = (int *)thunk_MwhHq(0x14);
  *piStack_30 = (int)&DAT_70b0ecf0;
  piStack_30[1] = param_1;
  piStack_30[2] = uStack_5c;
  piStack_30[3] = uStack_58;
  piStack_30[4] = uStack_54;
  piVar4 = aiStack_40;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  FUN_717ccb10(uVar1,piVar4);
  if (piStack_30 == piVar4) {
    iVar5 = 0x10;
  }
  else {
    piVar4 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_715b12dc;
  }
  (**(code **)(*piVar4 + iVar5))();
LAB_715b12dc:
  if ((uStack_5c & 1) != 0) {
    thunk_qNQrlu(uStack_54);
  }
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
// Function: YeziNdBkuXizyjCzZMQZTN
// Entry: 0x715b14dc | Size: 552 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YeziNdBkuXizyjCzZMQZTN
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8,int param_9,int param_10,int param_11,int param_12,undefined4 param_13)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iStack_28 = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_13);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar3 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_50 | 1;
    if (uVar3 != 0) goto LAB_715b1580;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_50 = (uVar3 | 7) + 2;
    uStack_4c = uVar3;
    uStack_48 = uVar6;
LAB_715b1580:
    imp___aeabi_memcpy(uVar6,param_13,uVar3);
  }
  uVar2 = uStack_50;
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar1 = DAT_712017fc;
  if ((uStack_50 & 1) == 0) {
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    uStack_58 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_60,uStack_48,uStack_4c);
  }
  piStack_30 = (int *)thunk_MwhHq(0x40);
  *piStack_30 = (int)&DAT_70b0ed14;
  piStack_30[1] = param_1;
  piStack_30[2] = param_2;
  piStack_30[3] = param_3;
  piStack_30[4] = param_4;
  piStack_30[5] = param_5;
  piStack_30[6] = param_6;
  piStack_30[7] = param_7;
  piStack_30[8] = param_8;
  piStack_30[9] = param_9;
  piStack_30[10] = param_10;
  piStack_30[0xb] = param_11;
  piStack_30[0xc] = param_12;
  piVar4 = aiStack_40;
  piStack_30[0xd] = uStack_60;
  piStack_30[0xe] = uStack_5c;
  piStack_30[0xf] = uStack_58;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  FUN_717ccb10(uVar1,piVar4);
  if (piStack_30 == piVar4) {
    iVar5 = 0x10;
  }
  else {
    iVar5 = 0x14;
    piVar4 = piStack_30;
    if (piStack_30 == (int *)0x0) goto LAB_715b16b4;
  }
  (**(code **)(*piVar4 + iVar5))();
LAB_715b16b4:
  if ((uStack_60 & 1) != 0) {
    thunk_qNQrlu(uStack_58);
  }
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
// Function: LfStokgtcvwFElopbleqyY
// Entry: 0x715b18b4 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LfStokgtcvwFElopbleqyY(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0ed54;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_715b1938;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_715b1938:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715b1a2c
// Entry: 0x715b1a2c | Size: 24 bytes
// =========================================================================

void FUN_715b1a2c(void)

{
  int iVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((DAT_711a3ba8 == '\0') && (DAT_711a3b9c = FUN_7141a314(2), DAT_711a3b9c != 0)) {
    uStack_24 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_2c = 0x3f800000;
    uStack_30 = 0x3f800000;
    FUN_7141a72c(DAT_711a3b9c,&uStack_30);
    DAT_711a3b98 = FUN_7141faac();
    DAT_711a3ba0 = FUN_7141d104();
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_38 = 0x42480000;
    FUN_7141d918(DAT_711a3ba0,&uStack_40,1);
    *(undefined4 *)((uint)&uStack_40 | 4) = 0;
    ((undefined4 *)((uint)&uStack_40 | 4))[1] = 0;
    uStack_40 = 0x3f800000;
    FUN_7141dd5c(DAT_711a3ba0,&uStack_40,0x42b40000,1);
    DAT_711a3ba4 = FUN_7143b470(0x100,0x100,0,1);
    iVar1 = DAT_711a3b98;
    *(undefined4 *)(DAT_711a3b98 + 100) = DAT_711a3ba4;
    FUN_7141ea34(iVar1,DAT_711a3ba0);
    FUN_7141feb0(DAT_711a3b98,0x43960000);
    FUN_714202f0(DAT_711a3b98,0x3e99999a);
    uStack_44 = 0x3f000000;
    uStack_48 = 0x3f000000;
    FUN_71420728(DAT_711a3b98,&uStack_48);
    FUN_71420b60(DAT_711a3b98,1);
    FUN_714119dc(*DAT_70ffc978,DAT_711a3b98);
    DAT_711a3ba8 = 1;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715b1f18
// Entry: 0x715b1f18 | Size: 544 bytes
// =========================================================================

void FUN_715b1f18(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uStack_24;
  
  puVar1 = DAT_70b46448;
  if (DAT_711a3ba8 != '\0') {
    piVar3 = *(int **)(param_1 + 4);
    iVar4 = 0;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
    }
    if (piVar3 != (int *)0x0 && iVar4 != 0) {
      iVar5 = *(int *)(param_1 + 8);
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 4);
      }
      if (iVar5 != 0 && iVar4 != 0) {
        DAT_710eaf34 = 1;
        DAT_711a3b90 = 1;
        FUN_7139a77c(*DAT_70b46448);
        FUN_715b24e8(param_1);
        iVar4 = DAT_711a3b98;
        *(undefined4 *)(DAT_711a3b98 + 0x60) = **(undefined4 **)(param_1 + 4);
        FUN_715e4058(iVar4,**(undefined4 **)(param_1 + 4));
        FUN_7148e65c(DAT_711a3b98);
        uStack_24 = 0;
        FUN_71420f90(DAT_711a3b98,&uStack_24,3);
        FUN_7141f27c(DAT_711a3b98);
        puVar2 = DAT_70ffc978;
        FUN_71411e14(*DAT_70ffc978,DAT_711a3b9c);
        FUN_7140e03c();
        FUN_71413b60(0x14,2);
        piVar3 = *(int **)(param_1 + 8);
        piVar7 = (int *)piVar3[1];
        if (piVar7 != (int *)0x0) {
          uVar8 = *(byte *)((int)piVar7 + 0x3a) & 7;
          bVar9 = uVar8 == 4;
          if (bVar9) {
            uVar8 = piVar7[6];
          }
          if (bVar9 && uVar8 == 0) {
            (**(code **)(*piVar7 + 0x20))(piVar7);
            piVar3 = *(int **)(param_1 + 8);
          }
        }
        (**(code **)(*piVar3 + 8))();
        iVar4 = *(int *)(param_1 + 8);
        if ((*(byte *)(*(int *)(iVar4 + 4) + 0x3a) & 7) == 3) {
          FUN_713bf618(*(undefined4 *)(*(int *)(iVar4 + 0x8c) + 0x440));
          iVar5 = FUN_715c71a0(*(undefined4 *)(param_1 + 8));
          iVar4 = *(int *)(param_1 + 8);
          if (iVar5 != 0) {
            uVar6 = FUN_71ba13e0(*DAT_70b42050,0x42480000);
            thunk_FUN_715c6380(iVar4,uVar6,1);
            iVar4 = *(int *)(param_1 + 8);
          }
        }
        FUN_7156080c(iVar4);
        FUN_7139a77c(*puVar1);
        FUN_7141f690(DAT_711a3b98);
        FUN_71412244(*puVar2,DAT_711a3b9c);
        (**(code **)(**(int **)(param_1 + 8) + 0xc))();
        DAT_710eaf34 = 0;
        FUN_7139a77c(*puVar1);
        DAT_711a3b90 = 0;
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715b24e8
// Entry: 0x715b24e8 | Size: 460 bytes
// =========================================================================

void FUN_715b24e8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
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
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar5 = DAT_70ffc980;
  iVar2 = FUN_713f4fdc(*DAT_70ffc980);
  if (iVar2 == 0) {
    iVar2 = FUN_713f5034(*puVar5);
    if (iVar2 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    FUN_714b5e7c(*puVar5,&uStack_28,&uStack_2c,auStack_30);
    uVar3 = FUN_71ba1b94(uStack_28);
    uVar4 = FUN_71ba1b94(uStack_2c);
    iVar2 = FUN_713f5ec0(uVar3,uVar4,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14)
                         ,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    if (iVar2 == 0) {
      return;
    }
    puVar5 = (undefined4 *)(param_1 + 0x24);
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar6 = *puVar5;
      imp___aeabi_memclr8(&uStack_70,0x40);
      thunk_FUN_715600f0(*(undefined4 *)(param_1 + 8),&uStack_70);
      uStack_78 = 0x3f800000;
      uStack_7c = 0;
      uStack_80 = 0;
      uVar6 = FUN_71ba240c(uVar3,uVar6);
      uVar6 = FUN_71ba21e8(uVar6,0x3f000000);
      FUN_7141c000(&uStack_70,&uStack_80,uVar6,1);
      FUN_71560458(*(undefined4 *)(param_1 + 8),uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,
                   uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,
                   uStack_3c,uStack_38,uStack_34);
      *puVar5 = uVar3;
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      return;
    }
    *puVar5 = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_715b283c
// Entry: 0x715b283c | Size: 392 bytes
// =========================================================================

void FUN_715b283c(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (DAT_711a3b94 == (int *)0x0) {
    return;
  }
  FUN_71413b60(0xc,0);
  FUN_71413b60(10,2);
  FUN_71413b60(0xb,1);
  FUN_71413b60(1,*DAT_711a3b94);
  uVar6 = *(undefined4 *)(DAT_70ffc974 + 8);
  uVar2 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 4));
  uVar3 = FUN_71ba1b94(uVar6);
  piVar1 = DAT_711a3b94;
  uVar7 = *(undefined4 *)(*DAT_711a3b94 + 0x10);
  uVar6 = FUN_71ba1b94(*(undefined4 *)(*DAT_711a3b94 + 0xc));
  uVar7 = FUN_71ba1b94(uVar7);
  uVar4 = FUN_71ba13e0(uVar2,uVar3);
  uVar7 = FUN_71ba13e0(uVar6,uVar7);
  iVar5 = FUN_71ba2d70(uVar7,uVar4);
  uVar6 = FUN_71ba13e0(uVar2,uVar7);
  if (iVar5 != 0) {
    uVar6 = uVar3;
  }
  uVar4 = FUN_71ba240c(uVar3,uVar6);
  uStack_28 = FUN_71ba21e8(uVar4,0x3f000000);
  uStack_30 = FUN_71ba0b38(uVar6,uStack_28);
  uVar6 = FUN_71ba21e8(uVar7,uVar3);
  if (iVar5 == 0) {
    uVar6 = uVar2;
  }
  uVar2 = FUN_71ba240c(uVar2,uVar6);
  uStack_34 = FUN_71ba21e8(uVar2,0x3f000000);
  uStack_2c = FUN_71ba0b38(uVar6,uStack_34);
  FUN_715ef240(piVar1,&uStack_34,0xffffffff,&DAT_700c3fd8);
  FUN_71413b60(1,0);
  return;
}


// =========================================================================
// Function: FUN_715b2cc8
// Entry: 0x715b2cc8 | Size: 196 bytes
// =========================================================================

void FUN_715b2cc8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_711a3ba8 != '\0') {
    bVar2 = *(int *)(param_1 + 4) != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 8);
    }
    if (bVar2 && iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_71413b60(0xc,1);
        FUN_71413b60(10,5);
        FUN_71413b60(0xb,6);
        FUN_71413b60(1,**(undefined4 **)(param_1 + 4));
        FUN_715ef240(*(undefined4 *)(param_1 + 4),param_1 + 0x10,0xffffffff,&DAT_700c3ff8);
        FUN_71413b60(1,0);
        FUN_71413b60(0xc,0);
        FUN_71413b60(10,2);
        FUN_71413b60(0xb,1);
        return;
      }
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715b2ff4
// Entry: 0x715b2ff4 | Size: 4 bytes
// =========================================================================

void FUN_715b2ff4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715b3010 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715b31f4
// Entry: 0x715b31f4 | Size: 4 bytes
// =========================================================================

void FUN_715b31f4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715b3210 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715b35fc
// Entry: 0x715b35fc | Size: 48 bytes
// =========================================================================

void FUN_715b35fc(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_715b37ac
// Entry: 0x715b37ac | Size: 3116 bytes
// =========================================================================

void FUN_715b37ac(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  int *piVar22;
  byte *pbVar23;
  bool bVar24;
  undefined8 uVar25;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  byte *pbStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  int *piStack_34;
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  
  FUN_715f1ee8(&piStack_34,param_2,0x2c);
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 4);
  }
  if (iVar4 == 0 || iVar5 == 0) goto LAB_715b37e0;
  bVar3 = *(byte *)(iVar5 + 0x3a) & 7;
  if (bVar3 == 3) {
    if (piStack_34 != aiStack_30) {
      pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4098);
      piVar11 = piStack_34;
      do {
        pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40a8);
        if ((*pbVar7 & 1) == 0) {
          puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4098);
          *puVar14 = 0x6aaa25ac;
          *(undefined2 *)(puVar14 + 1) = 0x1b9;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b5230,puVar14,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40a8);
          *puVar15 = 1;
        }
        if (pbVar6[5] != 0) {
          *pbVar6 = *pbVar6 ^ 0xcd;
          pbVar6[1] = pbVar6[1] ^ 0x4b;
          pbVar6[2] = pbVar6[2] ^ 0xc3;
          pbVar6[3] = pbVar6[3] ^ 7;
          pbVar6[5] = 0;
          pbVar6[4] = pbVar6[4] ^ 0xb9;
        }
        uVar21 = imp_strlen(pbVar6);
        bVar3 = *(byte *)(piVar11 + 4);
        uVar12 = piVar11[5];
        if ((bVar3 & 1) == 0) {
          uVar12 = (uint)(bVar3 >> 1);
        }
        if (uVar21 == uVar12) {
          if (uVar21 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(piVar11 + 4);
          }
          iVar5 = piVar11[6];
          if ((bVar3 & 1) == 0) {
            iVar5 = (int)piVar11 + 0x11;
          }
          iVar5 = imp_memcmp(iVar5,pbVar6);
          if ((iVar5 == 0) &&
             (iVar5 = *(int *)(param_1 + 8), (*(byte *)(*(int *)(iVar5 + 4) + 0x3a) & 7) == 3)) {
            pbVar23 = (byte *)piVar11[7];
            pbVar7 = *(byte **)(pbVar23 + 0x20);
            pbVar20 = *(byte **)(pbVar23 + 0x14);
            if ((pbVar23[0x18] & 1) == 0) {
              pbVar7 = pbVar23 + 0x19;
            }
            bVar3 = pbVar23[0xc];
            pbVar16 = *(byte **)(pbVar23 + 8);
            bVar1 = *pbVar23;
            uVar25 = imp_atof(pbVar7);
            pbVar7 = *(byte **)(pbVar23 + 0x2c);
            if ((pbVar23[0x24] & 1) == 0) {
              pbVar7 = pbVar23 + 0x25;
            }
            uVar17 = imp_atoi(pbVar7);
            pbVar7 = *(byte **)(pbVar23 + 0x38);
            if ((pbVar23[0x30] & 1) == 0) {
              pbVar7 = pbVar23 + 0x31;
            }
            uVar18 = imp_atoi(pbVar7);
            pbVar7 = *(byte **)(pbVar23 + 0x44);
            if ((pbVar23[0x3c] & 1) == 0) {
              pbVar7 = pbVar23 + 0x3d;
            }
            uVar13 = imp_atoi(pbVar7);
            pbVar7 = *(byte **)(pbVar23 + 0x50);
            if ((pbVar23[0x48] & 1) == 0) {
              pbVar7 = pbVar23 + 0x49;
            }
            uVar8 = imp_atoi(pbVar7);
            pbVar7 = *(byte **)(pbVar23 + 0x5c);
            if ((pbVar23[0x54] & 1) == 0) {
              pbVar7 = pbVar23 + 0x55;
            }
            uVar9 = imp_atoi(pbVar7);
            uVar10 = FUN_71ba242c((int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
            if ((bVar1 & 1) == 0) {
              pbVar16 = pbVar23 + 1;
            }
            if ((bVar3 & 1) == 0) {
              pbVar20 = pbVar23 + 0xd;
            }
            FUN_715c7638(iVar5,pbVar16,pbVar20,uVar10,uVar17,uVar18,uVar13,uVar8,uVar9);
          }
        }
        piVar2 = (int *)piVar11[1];
        piVar22 = piVar11;
        if ((int *)piVar11[1] == (int *)0x0) {
          do {
            piVar11 = (int *)piVar22[2];
            bVar24 = (int *)*piVar11 != piVar22;
            piVar22 = piVar11;
          } while (bVar24);
        }
        else {
          do {
            piVar11 = piVar2;
            piVar2 = (int *)*piVar11;
          } while ((int *)*piVar11 != (int *)0x0);
        }
      } while (piVar11 != aiStack_30);
    }
    goto LAB_715b37e0;
  }
  if (bVar3 != 2) goto LAB_715b37e0;
  pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4028);
  if ((*pbVar6 & 1) == 0) {
    puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4018);
    *puVar14 = 0x742526c0;
    *(undefined1 *)((int)puVar14 + 6) = 1;
    *(undefined2 *)(puVar14 + 1) = 0xb3dd;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b5038,puVar14,&DAT_70b0e000);
    puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4028);
    *puVar15 = 1;
  }
  pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4018);
  if (pbVar6[6] != 0) {
    pbVar6[6] = 0;
    *pbVar6 = *pbVar6 ^ 0xa3;
    pbVar6[1] = pbVar6[1] ^ 0x49;
    pbVar6[2] = pbVar6[2] ^ 0x49;
    pbVar6[3] = pbVar6[3] ^ 0x1b;
    pbVar6[4] = pbVar6[4] ^ 0xaf;
    pbVar6[5] = pbVar6[5] ^ 0xb3;
  }
  pbVar7 = (byte *)imp_strlen(pbVar6);
  if ((byte *)0xfffffff7 < pbVar7) goto LAB_715b43b4;
  if (pbVar7 < (byte *)0xb) {
    pbVar20 = (byte *)((uint)&pbStack_40 | 1);
    pbStack_40 = (byte *)CONCAT31(pbStack_40._1_3_,(char)((int)pbVar7 << 1));
    if (pbVar7 != (byte *)0x0) goto LAB_715b3b94;
  }
  else {
    pbVar20 = (byte *)thunk_MwhHq(((uint)pbVar7 | 7) + 1);
    pbStack_40 = (byte *)(((uint)pbVar7 | 7) + 2);
    pbStack_3c = pbVar7;
    pbStack_38 = pbVar20;
LAB_715b3b94:
    imp___aeabi_memmove(pbVar20,pbVar6,pbVar7);
  }
  pbVar20[(int)pbVar7] = 0;
  piVar11 = (int *)FUN_714f2384(&piStack_34,&pbStack_40);
  if (((uint)pbStack_40 & 1) != 0) {
    thunk_qNQrlu(pbStack_38);
  }
  if (aiStack_30 == piVar11) {
LAB_715b3e34:
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4068);
    if ((*pbVar6 & 1) == 0) {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4058);
      *puVar14 = 0xe2b9a99;
      *(undefined1 *)((int)puVar14 + 0xb) = 1;
      puVar14[1] = 0xb3981e90;
      *(undefined4 *)((int)puVar14 + 7) = 0x498f84b3;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b51d8,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4068);
      *puVar15 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4058);
    if (pbVar6[0xb] != 0) {
      *pbVar6 = *pbVar6 ^ 0xeb;
      pbVar6[1] = pbVar6[1] ^ 0xfd;
      pbVar6[2] = pbVar6[2] ^ 0x49;
      pbVar6[3] = pbVar6[3] ^ 0x6f;
      pbVar6[0xb] = 0;
      pbVar6[4] = pbVar6[4] ^ 0xcf;
      pbVar6[5] = pbVar6[5] ^ 0x7d;
      pbVar6[6] = pbVar6[6] ^ 0xf7;
      pbVar6[7] = pbVar6[7] ^ 0xdf;
      pbVar6[8] = pbVar6[8] ^ 0xeb;
      pbVar6[9] = pbVar6[9] ^ 0xfd;
      pbVar6[10] = pbVar6[10] ^ 0x49;
    }
    pbVar7 = (byte *)imp_strlen(pbVar6);
    if ((byte *)0xfffffff7 < pbVar7) {
LAB_715b43b4:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&pbStack_40);
    }
    if (pbVar7 < (byte *)0xb) {
      pbVar20 = (byte *)((uint)&pbStack_40 | 1);
      pbStack_40 = (byte *)CONCAT31(pbStack_40._1_3_,(char)((int)pbVar7 << 1));
      if (pbVar7 != (byte *)0x0) goto LAB_715b3f48;
    }
    else {
      pbVar20 = (byte *)thunk_MwhHq(((uint)pbVar7 | 7) + 1);
      pbStack_40 = (byte *)(((uint)pbVar7 | 7) + 2);
      pbStack_3c = pbVar7;
      pbStack_38 = pbVar20;
LAB_715b3f48:
      imp___aeabi_memmove(pbVar20,pbVar6,pbVar7);
    }
    pbVar20[(int)pbVar7] = 0;
    piVar11 = (int *)FUN_714f2384(&piStack_34,&pbStack_40);
    if (((uint)pbStack_40 & 1) != 0) {
      thunk_qNQrlu(pbStack_38);
    }
    if (aiStack_30 == piVar11) goto LAB_715b37e0;
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4088);
    if ((*pbVar6 & 1) == 0) {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4078);
      *puVar14 = 0xa4a90447;
      *(undefined1 *)((int)puVar14 + 0xb) = 1;
      puVar14[1] = 0xf9b46670;
      *(undefined4 *)((int)puVar14 + 7) = 0xcb115af9;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b5204,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4088);
      *puVar15 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4078);
    if (pbVar6[0xb] != 0) {
      *pbVar6 = *pbVar6 ^ 0x35;
      pbVar6[1] = pbVar6[1] ^ 99;
      pbVar6[2] = pbVar6[2] ^ 0xcb;
      pbVar6[3] = pbVar6[3] ^ 0xc5;
      pbVar6[0xb] = 0;
      pbVar6[4] = pbVar6[4] ^ 0x2f;
      pbVar6[5] = pbVar6[5] ^ 5;
      pbVar6[6] = pbVar6[6] ^ 0xdb;
      pbVar6[7] = pbVar6[7] ^ 0x95;
      pbVar6[8] = pbVar6[8] ^ 0x35;
      pbVar6[9] = pbVar6[9] ^ 99;
      pbVar6[10] = pbVar6[10] ^ 0xcb;
    }
    uVar12 = imp_strlen(pbVar6);
    if (0xfffffff7 < uVar12) {
LAB_715b43bc:
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_4c);
    }
    if (uVar12 < 0xb) {
      uStack_4c = CONCAT31(uStack_4c._1_3_,(char)(uVar12 << 1));
      uVar21 = (uint)&uStack_4c | 1;
      if (uVar12 != 0) goto LAB_715b40a4;
    }
    else {
      uVar21 = thunk_MwhHq((uVar12 | 7) + 1);
      uStack_4c = (uVar12 | 7) + 2;
      uStack_48 = uVar12;
      uStack_44 = uVar21;
LAB_715b40a4:
      imp___aeabi_memmove(uVar21,pbVar6,uVar12);
    }
    *(undefined1 *)(uVar21 + uVar12) = 0;
    piVar11 = (int *)FUN_715b5060(&piStack_34,auStack_28,&uStack_4c);
    iVar5 = *piVar11;
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 + 0x1c);
      pbVar6 = (byte *)0x0;
      iVar5 = *(int *)(iVar5 + 0x20);
      pbStack_38 = (byte *)0x0;
      pbStack_3c = (byte *)0x0;
      pbStack_40 = (byte *)0x0;
      if (iVar5 != iVar4) {
        iVar19 = iVar5 - iVar4;
        if (0x15555555 < (uint)((iVar19 >> 2) * -0x55555555)) goto LAB_715b43d0;
        pbVar6 = (byte *)thunk_MwhHq(iVar19);
        pbStack_38 = pbVar6 + iVar19;
        iVar19 = 0;
        pbStack_40 = pbVar6;
        do {
          pbVar7 = pbVar6 + iVar19;
          pbVar20 = (byte *)(iVar4 + iVar19);
          if ((*pbVar20 & 1) == 0) {
            uVar18 = *(undefined4 *)(pbVar20 + 4);
            uVar17 = *(undefined4 *)(pbVar20 + 8);
            *(undefined4 *)pbVar7 = *(undefined4 *)pbVar20;
            *(undefined4 *)(pbVar7 + 4) = uVar18;
            *(undefined4 *)(pbVar7 + 8) = uVar17;
          }
          else {
            FUN_712f6d58(pbVar7,*(undefined4 *)(iVar4 + iVar19 + 8),
                         *(undefined4 *)(iVar4 + iVar19 + 4));
          }
          iVar19 = iVar19 + 0xc;
        } while (iVar4 + iVar19 != iVar5);
        pbStack_3c = pbVar6 + iVar19;
      }
      pbVar7 = pbStack_3c;
      if ((uStack_4c & 1) != 0) {
        thunk_qNQrlu(uStack_44);
      }
      pbVar20 = *(byte **)(pbVar6 + 8);
      uVar17 = *(undefined4 *)(param_1 + 8);
      if ((*pbVar6 & 1) == 0) {
        pbVar20 = pbVar6 + 1;
      }
      uVar18 = imp_atoi(pbVar20);
      FUN_71358f50(&uStack_4c,uVar18);
      pbVar20 = *(byte **)(pbVar6 + 0x14);
      if ((pbVar6[0xc] & 1) == 0) {
        pbVar20 = pbVar6 + 0xd;
      }
      uVar18 = imp_atoi(pbVar20);
      FUN_71358f50(auStack_28,uVar18);
      FUN_715fafc4(uVar17,&uStack_4c,auStack_28);
      while (pbVar20 = pbVar7, pbVar20 != pbVar6) {
        pbVar7 = pbVar20 + -0xc;
        if ((*pbVar7 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar20 + -4));
        }
      }
      thunk_qNQrlu(pbVar6);
LAB_715b37e0:
      FUN_714f3204(&piStack_34,aiStack_30[0]);
      return;
    }
  }
  else {
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4048);
    if ((*pbVar6 & 1) == 0) {
      puVar14 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4038);
      *puVar14 = 0xe4f1f484;
      *(undefined1 *)((int)puVar14 + 6) = 1;
      *(undefined2 *)(puVar14 + 1) = 0x5d7d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b51b0,puVar14,&DAT_70b0e000);
      puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4048);
      *puVar15 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4038);
    if (pbVar6[6] != 0) {
      pbVar6[6] = 0;
      *pbVar6 = *pbVar6 ^ 0xe7;
      pbVar6[1] = pbVar6[1] ^ 0x9b;
      pbVar6[2] = pbVar6[2] ^ 0x9d;
      pbVar6[3] = pbVar6[3] ^ 0x8b;
      pbVar6[4] = pbVar6[4] ^ 0xf;
      pbVar6[5] = pbVar6[5] ^ 0x5d;
    }
    uVar12 = imp_strlen(pbVar6);
    if (0xfffffff7 < uVar12) goto LAB_715b43bc;
    if (uVar12 < 0xb) {
      uVar21 = (uint)&uStack_4c | 1;
      uStack_4c = CONCAT31(uStack_4c._1_3_,(char)(uVar12 << 1));
      if (uVar12 != 0) goto LAB_715b3cbc;
    }
    else {
      uVar21 = thunk_MwhHq((uVar12 | 7) + 1);
      uStack_4c = (uVar12 | 7) + 2;
      uStack_48 = uVar12;
      uStack_44 = uVar21;
LAB_715b3cbc:
      imp___aeabi_memmove(uVar21,pbVar6,uVar12);
    }
    *(undefined1 *)(uVar21 + uVar12) = 0;
    piVar11 = (int *)FUN_715b5060(&piStack_34,auStack_28,&uStack_4c);
    iVar5 = *piVar11;
    if (iVar5 != 0) {
      iVar4 = *(int *)(iVar5 + 0x1c);
      pbVar6 = (byte *)0x0;
      iVar5 = *(int *)(iVar5 + 0x20);
      pbStack_38 = (byte *)0x0;
      pbStack_3c = (byte *)0x0;
      pbStack_40 = (byte *)0x0;
      if (iVar5 != iVar4) {
        iVar19 = iVar5 - iVar4;
        if (0x15555555 < (uint)((iVar19 >> 2) * -0x55555555)) goto LAB_715b43d0;
        pbVar6 = (byte *)thunk_MwhHq(iVar19);
        pbStack_38 = pbVar6 + iVar19;
        iVar19 = 0;
        pbStack_40 = pbVar6;
        do {
          pbVar7 = pbVar6 + iVar19;
          pbVar20 = (byte *)(iVar4 + iVar19);
          if ((*pbVar20 & 1) == 0) {
            uVar18 = *(undefined4 *)(pbVar20 + 4);
            uVar17 = *(undefined4 *)(pbVar20 + 8);
            *(undefined4 *)pbVar7 = *(undefined4 *)pbVar20;
            *(undefined4 *)(pbVar7 + 4) = uVar18;
            *(undefined4 *)(pbVar7 + 8) = uVar17;
          }
          else {
            FUN_712f6d58(pbVar7,*(undefined4 *)(iVar4 + iVar19 + 8),
                         *(undefined4 *)(iVar4 + iVar19 + 4));
          }
          iVar19 = iVar19 + 0xc;
        } while (iVar4 + iVar19 != iVar5);
        pbStack_3c = pbVar6 + iVar19;
      }
      pbVar7 = pbStack_3c;
      if ((uStack_4c & 1) != 0) {
        thunk_qNQrlu(uStack_44);
      }
      pbVar20 = *(byte **)(pbVar6 + 8);
      uVar17 = *(undefined4 *)(param_1 + 8);
      if ((*pbVar6 & 1) == 0) {
        pbVar20 = pbVar6 + 1;
      }
      uVar18 = imp_atoi(pbVar20);
      pbVar20 = *(byte **)(pbVar6 + 0x14);
      if ((pbVar6[0xc] & 1) == 0) {
        pbVar20 = pbVar6 + 0xd;
      }
      uVar13 = imp_atoi(pbVar20);
      FUN_715f6508(uVar17,uVar18,uVar13);
      while (pbVar20 = pbVar7, pbVar20 != pbVar6) {
        pbVar7 = pbVar20 + -0xc;
        if ((*pbVar7 & 1) != 0) {
          thunk_qNQrlu(*(undefined4 *)(pbVar20 + -4));
        }
      }
      thunk_qNQrlu(pbVar6);
      goto LAB_715b3e34;
    }
  }
  FUN_712f6bb0(s_map__at__key_not_found_700619a7);
LAB_715b43d0:
                    /* WARNING: Subroutine does not return */
  FUN_712f6ffc(&pbStack_40);
}


// =========================================================================
// Function: FUN_715b5060
// Entry: 0x715b5060 | Size: 256 bytes
// =========================================================================

int * FUN_715b5060(int param_1,undefined4 *param_2,byte *param_3)

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
        if (bVar1) goto LAB_715b514c;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_715b514c;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_715b514c:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_715b5590
// Entry: 0x715b5590 | Size: 48 bytes
// =========================================================================

void FUN_715b5590(int param_1)

{
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x3c));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_715b5960
// Entry: 0x715b5960 | Size: 272 bytes
// =========================================================================

void FUN_715b5960(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,uint *param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar1 = *param_11;
  uVar2 = *param_7;
  uVar10 = *param_6;
  uVar11 = param_6[1];
  uVar7 = *param_5;
  uVar12 = param_5[1];
  uVar8 = param_5[2];
  uVar3 = *param_4;
  uVar4 = *param_3;
  uVar5 = FUN_71ba1b94(*param_8);
  uVar6 = FUN_71ba1b94(*param_9);
  uVar9 = *param_10;
  if ((*param_12 & 1) == 0) {
    uStack_30 = *param_12;
    uStack_2c = param_12[1];
    uStack_28 = param_12[2];
  }
  else {
    FUN_712f6d58(&uStack_30,param_12[2],param_12[1]);
  }
  FUN_715b5b14(param_2,uVar4,uVar3 & 0xffff,uVar7,uVar12,uVar8,uVar10,uVar11,uVar2,uVar5,uVar6,uVar9
               ,uVar1,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  return;
}


// =========================================================================
// Function: FUN_715b5b14
// Entry: 0x715b5b14 | Size: 1332 bytes
// =========================================================================

undefined4 *
FUN_715b5b14(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            int param_13,uint *param_14)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *param_1 = param_2;
  piVar3 = param_1 + 2;
  *piVar3 = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[4] = 0;
  if (DAT_711a3ba8 == '\0') {
    FUN_715b1a2c();
  }
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  FUN_7143b470(param_12,param_13 + -1,0x20,0x10505);
  uVar1 = FUN_7143cf50();
  param_1[1] = uVar1;
  uVar5 = param_3;
  if ((param_3 & 0xfffffffe) == 0xde0) {
    uVar5 = 0x48c7;
  }
  if (param_3 == 0xc2e) {
    uVar5 = 0x48c7;
  }
  if (param_3 == 0x55d) {
    uVar5 = 0x48c7;
  }
  iVar6 = *(int *)(DAT_70c39074 + uVar5 * 4);
  if (iVar6 == 0) {
    return param_1;
  }
  uVar1 = FUN_71ba240c(param_8,param_11);
  param_1[7] = uVar1;
  uVar1 = FUN_71ba0b38(param_7,param_10);
  param_1[6] = uVar1;
  uVar1 = FUN_71ba0b38(param_8,param_11);
  param_1[5] = uVar1;
  uVar1 = FUN_71ba240c(param_7,param_10);
  param_1[4] = uVar1;
  iVar2 = FUN_715ec200(uVar5);
  if (iVar2 == 0) {
    iVar6 = FUN_715ec150(uVar5);
    if (iVar6 != 0) {
      iVar2 = FUN_71561d40(DAT_711a3938,uVar5,0,0,0,0,0);
      if (iVar2 == 0) {
        return param_1;
      }
      param_1[3] = iVar2;
      uVar1 = FUN_71ba21e8(param_9,0xc0100000);
      uVar4 = 0x42483333;
      if (uVar5 == 0xa2) {
        uVar4 = 0x4248999a;
      }
      FUN_715601e8(iVar2,0,uVar1,uVar4);
      goto LAB_715b5dcc;
    }
    iVar2 = thunk_MwhHq(0x118);
    FUN_7136cdfc(&uStack_30);
    FUN_715b6bc4(iVar2,uVar5,0,0,0,uStack_30,uStack_2c,uStack_28,0x461c3c00);
    uVar1 = FUN_71ba21e8(param_9,0xc0100000);
    uVar4 = 0x42483333;
    if (uVar5 == 0xa2) {
      uVar4 = 0x4248999a;
    }
    FUN_715601e8(iVar2,0,uVar1,uVar4);
    iVar6 = *(int *)(iVar2 + 4);
    *piVar3 = iVar2;
    if (iVar6 != 0) {
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400;
      iVar2 = *piVar3;
      if (iVar2 == 0) goto LAB_715b5f3c;
    }
  }
  else {
    iVar2 = thunk_MwhHq(0x978);
    uVar1 = 0;
    FUN_715f2ce8(iVar2,0xffff,uVar5,0,0,0x42480000,0,0);
    iVar6 = *(int *)(iVar6 + 0x2c);
    if (iVar6 != 0) {
      uVar1 = *(undefined4 *)(iVar6 + 0x24);
    }
    FUN_71ba0b38(uVar1,uVar1);
    uVar7 = FUN_71ba1638();
    uVar7 = FUN_71ba23ec(0,0xbff00000,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar8 = FUN_71ba1638(param_9);
    iVar6 = thunk_FUN_715f4594(iVar2);
    if (iVar6 == 5) {
      uVar7 = FUN_71ba1638(uVar1);
      uVar7 = FUN_71ba1ea0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0xc0040000);
      uVar7 = FUN_71ba0670((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0xc0160000);
    }
    FUN_71ba1ea0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                 (int)((ulonglong)uVar8 >> 0x20));
    uVar1 = FUN_71ba242c();
    FUN_715601e8(iVar2,0,uVar1,0x42480000);
LAB_715b5dcc:
    *piVar3 = iVar2;
  }
  FUN_71560364(iVar2,0);
  thunk_FUN_71560790(*piVar3,0);
  thunk_FUN_715600f0(*piVar3,&uStack_70);
  iVar6 = FUN_71ba2cf0(param_4,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_70,&DAT_700c3058,param_4,1);
  }
  iVar6 = FUN_71ba2cf0(param_5,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_70,&DAT_700c3064,param_5,1);
  }
  iVar6 = FUN_71ba2cf0(param_6,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_70,&DAT_700c3070,param_6,1);
  }
  FUN_71560458(*piVar3,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,
               uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
               uStack_34);
  if ((*(byte *)(*(int *)(*piVar3 + 4) + 0x3a) & 7) == 3) {
    thunk_FUN_715c6380(*piVar3,0x42c80000,1);
  }
LAB_715b5f3c:
  if ((*param_14 & 1) == 0) {
    uStack_80 = *param_14;
    uStack_7c = param_14[1];
    uStack_78 = param_14[2];
  }
  else {
    FUN_712f6d58(&uStack_80,param_14[2],param_14[1]);
  }
  FUN_715b37ac(param_1,&uStack_80);
  if ((uStack_80 & 1) != 0) {
    thunk_qNQrlu(uStack_78);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715b684c
// Entry: 0x715b684c | Size: 4 bytes
// =========================================================================

void FUN_715b684c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715b6868 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715b6bc4
// Entry: 0x715b6bc4 | Size: 496 bytes
// =========================================================================

undefined4 *
FUN_715b6bc4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *param_1 = &DAT_70b0ed78;
  uStack_28 = param_8;
  uStack_2c = param_7;
  uStack_30 = param_6;
  FUN_7136cdfc(param_1 + 3);
  FUN_7136cdfc(param_1 + 6);
  FUN_7136cdfc();
  FUN_7136cdfc(param_1 + 0x1f);
  FUN_7136cdfc();
  DAT_700fb6f0 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_34 = 0;
  FUN_7135d734(param_2,0x14);
  uVar5 = FUN_71ba1638(param_4);
  uVar6 = FUN_71ba1638(param_5);
  uVar7 = FUN_71ba1638(param_3);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  FUN_715d33c8(&DAT_7008240c,param_2,(int)uVar7,uVar4,uVar5,uVar6,&uStack_34);
  FUN_715d33c8(&DAT_7008241e,uStack_34,(int)uVar7,uVar4,uVar5,uVar6);
  iVar3 = FUN_71350fd8(uStack_34);
  param_1[1] = iVar3;
  FUN_715631e8(DAT_711a3938,(int)*(short *)(iVar3 + 0x26));
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[2] = uStack_34;
  FUN_7136d040(param_1 + 0x1c,&uStack_30);
  FUN_7136d040(param_1 + 0x22,&uStack_30);
  param_1[9] = 0xffff;
  imp___aeabi_memclr4(param_1 + 0x25,0x81);
  uVar2 = uStack_28;
  uVar1 = uStack_2c;
  uVar4 = uStack_30;
  iVar3 = FUN_71350fd8(param_1[2]);
  if (iVar3 != 0) {
    uVar5 = FUN_71ba1638(uVar1);
    uVar6 = FUN_71ba1638(uVar2);
    uVar7 = FUN_71ba1638(uVar4);
    FUN_715d33c8(&DAT_70082478,param_1[2],(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar5,uVar6);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715b70d8
// Entry: 0x715b70d8 | Size: 132 bytes
// =========================================================================

void FUN_715b70d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_71350fd8(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_71ba1638(param_3);
    uVar3 = FUN_71ba1638(param_4);
    uVar4 = FUN_71ba1638(param_2);
    FUN_715d33c8(&DAT_70082478,*(undefined4 *)(param_1 + 8),(int)uVar4,
                 (int)((ulonglong)uVar4 >> 0x20),uVar2,uVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_715b759c
// Entry: 0x715b759c | Size: 1212 bytes
// =========================================================================

void FUN_715b759c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int unaff_r5;
  undefined4 uVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0x26) == '\x01') {
    uVar1 = (uint)*(ushort *)(param_1 + 0x24);
    if (uVar1 < 0x7d1) {
      bVar15 = *(char *)(*(int *)(DAT_711f6d58 + 4) + uVar1 + 0x3e88) != '\0';
      if (bVar15) {
        unaff_r5 = *(int *)(*(int *)(DAT_711f6d58 + 4) + uVar1 * 4);
      }
      if ((bVar15 && unaff_r5 != 0) && (iVar7 = thunk_FUN_715609f0(unaff_r5), iVar7 != 0)) {
        iVar7 = FUN_71350fd8(*(undefined4 *)(param_1 + 8));
        if ((iVar7 != 0) &&
           (iVar7 = FUN_715d33c8(&DAT_70082454,*(undefined4 *)(param_1 + 8)), iVar7 == 0)) {
          uVar3 = *(undefined4 *)(param_1 + 0x10);
          uVar4 = *(undefined4 *)(param_1 + 0x14);
          uVar5 = *(undefined4 *)(param_1 + 0x18);
          uVar16 = FUN_71ba1638(*(undefined4 *)(param_1 + 0xc));
          uStack_2c = (undefined4)((ulonglong)uVar16 >> 0x20);
          uStack_28 = (undefined4)uVar16;
          uVar16 = FUN_71ba1638(uVar3);
          uStack_34 = (undefined4)((ulonglong)uVar16 >> 0x20);
          uStack_30 = (undefined4)uVar16;
          uVar16 = FUN_71ba1638(uVar4);
          uStack_3c = (undefined4)((ulonglong)uVar16 >> 0x20);
          uStack_38 = (undefined4)uVar16;
          uVar16 = FUN_71ba1638(uVar5);
          uVar17 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x1c));
          uStack_48 = FUN_71ba1638(*(undefined4 *)(param_1 + 0x20));
          uStack_64 = uStack_34;
          uStack_60 = uStack_38;
          uStack_5c = uStack_3c;
          uStack_58 = uVar16;
          uStack_50 = uVar17;
          FUN_715d33c8(&DAT_70082466,*(undefined4 *)(param_1 + 8),*(undefined4 *)(unaff_r5 + 8),
                       *(undefined4 *)(param_1 + 8),uStack_28,uStack_2c,uStack_30);
          return;
        }
        return;
      }
    }
  }
  else if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar2 = FUN_71350fd8(*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 4) = iVar2;
    iVar7 = 0;
    if (iVar2 != 0) {
      iVar7 = *(int *)(iVar2 + 0x14);
    }
    if (iVar2 != 0 && iVar7 != 0) {
      thunk_FUN_715600f0(param_1,&uStack_64);
      uVar13 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x6c),param_2);
      uVar4 = FUN_71ba240c(uStack_34,uVar13);
      uVar4 = FUN_71ba21e8(uVar4,uVar4);
      uVar8 = *(undefined4 *)(param_1 + 0x60);
      uVar5 = FUN_71ba240c();
      uVar5 = FUN_71ba21e8(uVar5,uVar5);
      uVar9 = *(undefined4 *)(param_1 + 100);
      uVar6 = FUN_71ba240c();
      uVar6 = FUN_71ba21e8(uVar6,uVar6);
      uVar4 = FUN_71ba0b38(uVar4,uVar5);
      FUN_71ba0b38(uVar4,uVar6);
      uVar4 = imp_sqrtf();
      iVar7 = FUN_71ba2d50(uVar3,uVar4);
      puVar10 = (undefined4 *)(param_1 + 0x84);
      puVar11 = (undefined4 *)(param_1 + 0x80);
      puVar14 = (undefined4 *)(param_1 + 0x7c);
      puVar12 = (undefined4 *)(param_1 + 0x88);
      if (iVar7 == 0) {
        uVar3 = FUN_71ba13e0(uVar4,uVar3);
        uVar4 = FUN_71ba240c(uVar8,uStack_30);
        uVar4 = FUN_71ba13e0(uVar4,uVar3);
        uVar4 = FUN_71ba0b38(uStack_30,uVar4);
        uVar5 = FUN_71ba240c(uVar13,uStack_34);
        uVar5 = FUN_71ba13e0(uVar5,uVar3);
        uVar5 = FUN_71ba0b38(uStack_34,uVar5);
        uVar6 = FUN_71ba240c(uVar9,uStack_2c);
        uVar6 = FUN_71ba13e0(uVar6,uVar3);
        uVar6 = FUN_71ba0b38(uStack_2c,uVar6);
        uVar9 = *puVar12;
        uVar8 = FUN_71ba240c(*puVar14,uVar9);
        uVar8 = FUN_71ba13e0(uVar8,uVar3);
        uVar8 = FUN_71ba0b38(uVar9,uVar8);
        *puVar12 = uVar8;
        uVar9 = *(undefined4 *)(param_1 + 0x8c);
        uVar13 = *(undefined4 *)(param_1 + 0x90);
        uVar8 = FUN_71ba240c(*puVar11,uVar9);
        uVar8 = FUN_71ba13e0(uVar8,uVar3);
        uVar8 = FUN_71ba0b38(uVar9,uVar8);
        *(undefined4 *)(param_1 + 0x8c) = uVar8;
        uVar8 = FUN_71ba240c(*puVar10,uVar13);
        uVar3 = FUN_71ba13e0(uVar8,uVar3);
        uVar3 = FUN_71ba0b38(uVar13,uVar3);
        *(undefined4 *)(param_1 + 0x90) = uVar3;
        FUN_715601e8(param_1,uVar5,uVar4,uVar6);
        uVar4 = *(undefined4 *)(param_1 + 0x8c);
        uVar3 = *(undefined4 *)(param_1 + 0x90);
        uVar5 = *puVar12;
      }
      else {
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
        FUN_7136d040(puVar12,puVar14);
        FUN_715601e8(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                     *(undefined4 *)(param_1 + 100));
        uVar5 = *puVar14;
        uVar3 = *puVar10;
        uVar4 = *puVar11;
      }
      iVar7 = FUN_71350fd8(*(undefined4 *)(param_1 + 8));
      if (iVar7 != 0) {
        uVar16 = FUN_71ba1638(uVar4);
        uVar17 = FUN_71ba1638(uVar3);
        uVar18 = FUN_71ba1638(uVar5);
        FUN_715d33c8(&DAT_70082478,*(undefined4 *)(param_1 + 8),(int)uVar18,
                     (int)((ulonglong)uVar18 >> 0x20),uVar16,uVar17);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715b80ac
// Entry: 0x715b80ac | Size: 144 bytes
// =========================================================================

void FUN_715b80ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_71350fd8(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_71ba1638(param_3);
    uVar3 = FUN_71ba1638(param_4);
    uVar4 = FUN_71ba1638(param_2);
    FUN_715d33c8(&DAT_7008241e,*(undefined4 *)(param_1 + 8),(int)uVar4,
                 (int)((ulonglong)uVar4 >> 0x20),uVar2,uVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_715b8208
// Entry: 0x715b8208 | Size: 836 bytes
// =========================================================================

void FUN_715b8208(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40c8);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40b8);
    *puVar4 = 0x3de506c4;
    *(undefined1 *)(puVar4 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b9e34,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40c8);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40b8);
  if (pbVar2[4] != 0) {
    pbVar2[4] = 0;
    *pbVar2 = *pbVar2 ^ 0x97;
    pbVar2[1] = pbVar2[1] ^ 0x43;
    pbVar2[2] = pbVar2[2] ^ 0xbd;
    pbVar2[3] = pbVar2[3] ^ 0x3d;
  }
  iVar3 = imp_strcasecmp(param_3);
  if (iVar3 != 0) {
    if ((*(int *)(*(int *)(param_1 + 4) + 0x18) != 0) && (iVar3 = FUN_71308d98(), iVar3 != 0)) {
      FUN_7130897c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
    }
    iVar3 = FUN_71567160(DAT_711a3938,param_3);
    if (iVar3 == 0) {
      FUN_71568138(DAT_711a3938,param_3);
      iVar3 = FUN_71567160(DAT_711a3938,param_3);
      if (iVar3 == 0) {
        imp_usleep(1);
        iVar3 = FUN_71567160(DAT_711a3938,param_3);
        if (iVar3 == 0) {
          imp_usleep(1);
          iVar3 = FUN_71567160(DAT_711a3938,param_3);
          if (iVar3 == 0) {
            imp_usleep(1);
            iVar3 = FUN_71567160(DAT_711a3938,param_3);
            if (iVar3 == 0) {
              imp_usleep(1);
              iVar3 = FUN_71567160(DAT_711a3938,param_3);
              if (iVar3 == 0) {
                imp_usleep(1);
                iVar3 = FUN_71567160(DAT_711a3938,param_3);
                if (iVar3 == 0) {
                  imp_usleep(1);
                  iVar3 = FUN_71567160(DAT_711a3938,param_3);
                  if (iVar3 == 0) {
                    imp_usleep(1);
                    iVar3 = FUN_71567160(DAT_711a3938,param_3);
                    if (iVar3 == 0) {
                      imp_usleep(1);
                      iVar3 = FUN_71567160(DAT_711a3938,param_3);
                      if (iVar3 == 0) {
                        imp_usleep(1);
                        iVar3 = FUN_71567160(DAT_711a3938,param_3);
                        if (iVar3 == 0) {
                          imp_usleep(1);
                          iVar3 = FUN_71567160(DAT_711a3938,param_3);
                          if (iVar3 == 0) {
                            imp_usleep(1);
                            iVar3 = FUN_71567160(DAT_711a3938,param_3);
                            if (iVar3 == 0) {
                              imp_usleep(1);
                              iVar3 = FUN_71567160(DAT_711a3938,param_3);
                              if (iVar3 == 0) {
                                imp_usleep(1);
                                iVar3 = FUN_71567160(DAT_711a3938,param_3);
                                if (iVar3 == 0) {
                                  imp_usleep(1);
                                  iVar3 = FUN_71567160(DAT_711a3938,param_3);
                                  if (iVar3 == 0) {
                                    imp_usleep(1);
                                    iVar3 = FUN_71567160(DAT_711a3938,param_3);
                                    if (iVar3 == 0) {
                                      imp_usleep(1);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar6 = FUN_71ba1638(param_4);
    FUN_715d33c8(&DAT_70082442,*(undefined4 *)(param_1 + 8),param_2,param_3,uVar6,param_5,param_6);
  }
  return;
}


// =========================================================================
// Function: FUN_715b8b3c
// Entry: 0x715b8b3c | Size: 352 bytes
// =========================================================================

void FUN_715b8b3c(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  *(short *)(param_1 + 0x24) = (short)param_2;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = param_3[1];
  *(undefined4 *)(param_1 + 0x14) = param_3[2];
  *(undefined4 *)(param_1 + 0x18) = *param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_4[1];
  *(undefined4 *)(param_1 + 0x20) = param_4[2];
  if (param_2 < 0x7d1) {
    iVar8 = 0x3e88;
    bVar10 = *(char *)(*(int *)(DAT_711f6d58 + 4) + param_2 + 0x3e88) != '\0';
    if (bVar10) {
      iVar8 = *(int *)(*(int *)(DAT_711f6d58 + 4) + param_2 * 4);
    }
    if (bVar10 && iVar8 != 0) {
      piVar5 = *(int **)(iVar8 + 0x768);
      if (piVar5 < *(int **)(iVar8 + 0x76c)) {
        piVar7 = piVar5 + 1;
        *piVar5 = param_1;
      }
      else {
        iVar9 = *(int *)(iVar8 + 0x764);
        iVar1 = (int)piVar5 - iVar9 >> 2;
        uVar6 = iVar1 + 1;
        if (0x3fffffff < uVar6) {
          FUN_715b9e84((int *)(iVar8 + 0x764));
LAB_715b8ca0:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        uVar4 = (int)*(int **)(iVar8 + 0x76c) - iVar9;
        uVar2 = (int)uVar4 >> 1;
        if (uVar6 < uVar2) {
          uVar6 = uVar2;
        }
        if (0x7ffffffb < uVar4) {
          uVar6 = 0x3fffffff;
        }
        if (uVar6 == 0) {
          iVar3 = 0;
        }
        else {
          if (0x3fffffff < uVar6) goto LAB_715b8ca0;
          iVar3 = thunk_MwhHq(uVar6 << 2);
        }
        piVar7 = (int *)(iVar3 + iVar1 * 4);
        *piVar7 = param_1;
        imp___aeabi_memcpy4(iVar3,iVar9,(int)piVar5 - iVar9);
        piVar7 = piVar7 + 1;
        *(int *)(iVar8 + 0x764) = iVar3;
        *(int **)(iVar8 + 0x768) = piVar7;
        *(uint *)(iVar8 + 0x76c) = iVar3 + uVar6 * 4;
        if (iVar9 != 0) {
          thunk_qNQrlu(iVar9);
        }
      }
      *(int **)(iVar8 + 0x768) = piVar7;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715b8d8c
// Entry: 0x715b8d8c | Size: 56 bytes
// =========================================================================

void FUN_715b8d8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined4 *)(param_1 + 0x84) = param_8;
  *(undefined4 *)(param_1 + 0x80) = param_7;
  *(undefined4 *)(param_1 + 0x7c) = param_6;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 100) = param_4;
  *(undefined4 *)(param_1 + 0x6c) = param_5;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 1;
  return;
}


// =========================================================================
// Function: FUN_715b8ddc
// Entry: 0x715b8ddc | Size: 156 bytes
// =========================================================================

void FUN_715b8ddc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (0xf < param_3) {
    return;
  }
  iVar3 = param_1 + 0x94;
  if (*(int *)(iVar3 + param_3 * 4) != 0) {
    iVar1 = FUN_71610f50(&DAT_711acf38);
    if (iVar1 == 0) {
      FUN_7143d364(*(undefined4 *)(iVar3 + param_3 * 4));
    }
    else {
      FUN_71610d04(&DAT_711acf38);
    }
    *(undefined4 *)(iVar3 + param_3 * 4) = 0;
  }
  *(undefined4 *)(param_1 + param_3 * 4 + 0xd4) = param_6;
  uVar2 = FUN_715ec410(param_4,param_5,1);
  *(undefined4 *)(iVar3 + param_3 * 4) = uVar2;
  *(undefined1 *)(param_1 + 0x114) = 1;
  return;
}


// =========================================================================
// Function: FUN_715b8f40
// Entry: 0x715b8f40 | Size: 788 bytes
// =========================================================================

void FUN_715b8f40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_2 < 0x10) {
    iVar11 = param_1 + 0x94;
    if (*(int *)(iVar11 + param_2 * 4) != 0) {
      iVar2 = FUN_71610f50(&DAT_711acf38);
      if (iVar2 == 0) {
        FUN_7143d364(*(undefined4 *)(iVar11 + param_2 * 4));
      }
      else {
        FUN_71610d04(&DAT_711acf38);
      }
      *(undefined4 *)(iVar11 + param_2 * 4) = 0;
    }
    *(undefined4 *)(param_1 + param_2 * 4 + 0xd4) = 0xffffffff;
    pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40e8);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40d8);
      *puVar7 = 0x4670ec53;
      puVar7[1] = 0x549da4ff;
      *(undefined1 *)((int)puVar7 + 0xb) = 1;
      *(undefined4 *)((int)puVar7 + 7) = 0x3a64e54;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715b9e58,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40e8);
      *puVar8 = 1;
    }
    pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c40d8);
    if (pbVar4[0xb] != 0) {
      *pbVar4 = *pbVar4 ^ 0x21;
      pbVar4[1] = pbVar4[1] ^ 0x89;
      pbVar4[2] = pbVar4[2] ^ 3;
      pbVar4[3] = pbVar4[3] ^ 0x69;
      pbVar4[0xb] = 0;
      pbVar4[4] = pbVar4[4] ^ 0x89;
      pbVar4[5] = pbVar4[5] ^ 0xcd;
      pbVar4[6] = pbVar4[6] ^ 0xf9;
      pbVar4[7] = pbVar4[7] ^ 0x31;
      pbVar4[8] = pbVar4[8] ^ 0x21;
      pbVar4[9] = pbVar4[9] ^ 0x89;
      pbVar4[10] = pbVar4[10] ^ 3;
    }
    bVar1 = (byte)DAT_711f6bd0;
    uVar10 = DAT_711f6bd4;
    if (((byte)DAT_711f6bd0 & 1) == 0) {
      uVar10 = (uint)((byte)DAT_711f6bd0 >> 1);
    }
    iVar2 = imp_strlen(pbVar4);
    uVar12 = uVar10 + iVar2;
    if (0xfffffff7 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_40);
    }
    if (uVar12 < 0xb) {
      uStack_40 = (uint)(byte)((char)uVar12 * '\x02');
      uStack_38 = 0;
      uVar5 = 0;
      uStack_3c = 0;
    }
    else {
      uStack_38 = thunk_MwhHq((uVar12 | 7) + 1);
      uStack_40 = (uVar12 | 7) + 2;
      uVar5 = uStack_40 & 0xff;
      uStack_3c = uVar12;
    }
    uVar12 = uStack_38;
    if ((uVar5 & 1) == 0) {
      uVar12 = (uint)&uStack_40 | 1;
    }
    if (uVar10 != 0) {
      uVar9 = DAT_711f6bd8;
      if ((bVar1 & 1) == 0) {
        uVar9 = 0x711f6bd1;
      }
      imp___aeabi_memmove(uVar12,uVar9,uVar10);
    }
    if (iVar2 != 0) {
      imp___aeabi_memmove(uVar12 + uVar10,pbVar4,iVar2);
    }
    *(undefined1 *)(uVar12 + uVar10 + iVar2) = 0;
    puVar6 = (uint *)thunk_PrgvFRZDWPDtSJsjEDObVDPUFyLQfDXrruULHeEmzAQblKvanHvvJwoyNntqexFQUMUTiIOfayHGb
                               (&uStack_40,param_3);
    uStack_30 = *puVar6;
    uStack_2c = puVar6[1];
    uStack_28 = puVar6[2];
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    uVar10 = uStack_28;
    if ((uStack_30 & 1) == 0) {
      uVar10 = (uint)&uStack_30 | 1;
    }
    uVar9 = FUN_71610acc(&DAT_711acf38,uVar10,param_4);
    *(undefined4 *)(iVar11 + param_2 * 4) = uVar9;
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
    if ((uStack_40 & 1) != 0) {
      thunk_qNQrlu(uStack_38);
    }
    *(undefined1 *)(param_1 + 0x114) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_715b9774
// Entry: 0x715b9774 | Size: 256 bytes
// =========================================================================

undefined4 FUN_715b9774(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = 0;
  if (0xf < param_2) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + param_2 * 4 + 0x94);
  if (uVar6 != 0) {
    iVar2 = FUN_71610f50(&DAT_711acf38,uVar6);
    uVar1 = 0;
    if (iVar2 != 0) {
      puVar5 = &DAT_711acf3c;
      puVar4 = DAT_711acf3c;
      while (puVar7 = puVar5, puVar4 != (undefined4 *)0x0) {
        while (puVar3 = puVar4, (uint)puVar3[4] <= uVar6) {
          if (uVar6 <= (uint)puVar3[4]) goto LAB_715b9868;
          puVar4 = (undefined4 *)puVar3[1];
          if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
            puVar5 = puVar3 + 1;
            puVar7 = puVar3;
            goto LAB_715b9810;
          }
        }
        puVar5 = puVar3;
        puVar4 = (undefined4 *)*puVar3;
      }
LAB_715b9810:
      puVar3 = (undefined4 *)thunk_MwhHq(0x18);
      puVar3[4] = uVar6;
      puVar3[5] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar7;
      *puVar5 = puVar3;
      puVar4 = puVar3;
      if ((int *)*DAT_711acf38 != (int *)0x0) {
        puVar4 = (undefined4 *)*puVar5;
        DAT_711acf38 = (int *)*DAT_711acf38;
      }
      FUN_712f807c(DAT_711acf3c,puVar4);
      DAT_711acf40 = DAT_711acf40 + 1;
LAB_715b9868:
      uVar1 = puVar3[5];
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715b9900
// Entry: 0x715b9900 | Size: 300 bytes
// =========================================================================

void FUN_715b9900(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9,int param_10)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (0xf < param_2) {
    return;
  }
  if ((param_10 != 0) && (iVar1 = imp_strlen(param_10), iVar1 != 0)) {
    iVar1 = param_1 + 0x94;
    if (*(int *)(iVar1 + param_2 * 4) != 0) {
      FUN_7143d364();
      *(undefined4 *)(iVar1 + param_2 * 4) = 0;
    }
    iVar3 = 0;
    if (9 < param_3) {
      if (0x8b < param_3) {
        param_3 = 0x8c;
      }
      iVar3 = ((uint)((short)param_3 * 0xcd) >> 0xb) - 1;
    }
    uVar4 = FUN_71ba1da0(param_5);
    FUN_71ba1ea0((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0xcccccccd,0x3feccccc);
    uVar2 = FUN_71ba173c();
    if (2 < param_9) {
      param_9 = 1;
    }
    uVar2 = FUN_715aefa0(DAT_711a3b8c,*(undefined2 *)(iVar3 * 4 + 0x7008248a),
                         *(undefined2 *)(iVar3 * 4 + 0x7008248c),param_4,uVar2,param_6,param_7,
                         param_8,param_9,param_10);
    *(undefined4 *)(iVar1 + param_2 * 4) = uVar2;
    *(undefined4 *)(param_1 + param_2 * 4 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0x114) = 1;
  }
  return;
}


// =========================================================================
// Function: FUN_715b9b2c
// Entry: 0x715b9b2c | Size: 292 bytes
// =========================================================================

char * FUN_715b9b2c(char *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  if ((param_2 != 0) && (*param_1 == '\x01')) {
    iVar8 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(iVar8 + 0x24);
    if (0 < (int)uVar2) {
      DAT_711a3cf8 = *(undefined4 *)(iVar8 + 8);
      iVar3 = *(int *)(iVar8 + 0x20);
      if (0xf < uVar2) {
        uVar2 = 0x10;
      }
      iVar4 = 0;
      do {
        if (*(undefined4 **)(iVar3 + iVar4) != (undefined4 *)0x0) {
          iVar7 = iVar4 * 3;
          *(undefined4 *)((int)&DAT_711a3bb8 + iVar4) = **(undefined4 **)(iVar3 + iVar4);
          iVar5 = *(int *)(iVar3 + iVar4);
          uVar1 = *(undefined4 *)(iVar5 + 0x10);
          uVar6 = *(undefined4 *)(iVar5 + 0x14);
          *(undefined4 *)((int)&DAT_711a3bf8 + iVar7) = *(undefined4 *)(iVar5 + 0xc);
          *(undefined4 *)((int)&DAT_711a3bfc + iVar7) = uVar1;
          *(undefined4 *)((int)&DAT_711a3c00 + iVar7) = uVar6;
          iVar7 = param_2 + iVar4;
          *(undefined4 *)((int)&DAT_711a3cb8 + iVar4) = *(undefined4 *)(*(int *)(iVar3 + iVar4) + 4)
          ;
          if (*(int *)(iVar7 + 0x94) != 0) {
            **(int **)(iVar3 + iVar4) = *(int *)(iVar7 + 0x94);
          }
          if (*(int *)(iVar7 + 0xd4) != 0) {
            *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) & 0xfffffff7 | 0x40;
            *(undefined4 *)(*(int *)(iVar3 + iVar4) + 0xc) = 0x3f800000;
            *(undefined4 *)(*(int *)(iVar3 + iVar4) + 0x10) = 0;
            *(undefined4 *)(*(int *)(iVar3 + iVar4) + 0x14) = 0x3f800000;
            *(undefined4 *)(*(int *)(iVar3 + iVar4) + 4) = *(undefined4 *)(iVar7 + 0xd4);
          }
        }
        iVar4 = iVar4 + 4;
      } while (uVar2 * 4 != iVar4);
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715b9e84
// Entry: 0x715b9e84 | Size: 20 bytes
// =========================================================================

void FUN_715b9e84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715b9eec
// Entry: 0x715b9eec | Size: 712 bytes
// =========================================================================

int FUN_715b9eec(int param_1,int *param_2)

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
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (DAT_711a3938 == 0)) {
    return 0;
  }
  piVar13 = (int *)(DAT_711a3938 + 0x1389c);
  iVar17 = *piVar13;
  if (iVar17 == 0) {
    iVar17 = FUN_713c301c(0);
    if (iVar17 == 0) {
      iVar17 = *piVar13;
      if (iVar17 == 0) {
        return 0;
      }
    }
    else {
      iVar17 = thunk_MwhHq(0x3a0);
      iVar8 = FUN_715ba834();
      *piVar13 = iVar8;
    }
  }
  if (*(int *)(iVar17 + 0x8c) != param_1) {
    return 0;
  }
  if ((5 < *param_2 - 0x16U) && (*param_2 != 0x21)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x485) & 1) != 0) {
    return 0;
  }
  pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4488);
  if (*pcVar9 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4478);
    *(undefined1 *)((int)puVar11 + 0x13) = 1;
    uVar5 = DAT_70082824;
    uVar4 = DAT_70082820;
    uVar3 = DAT_7008281c;
    *puVar11 = DAT_70082818;
    puVar11[1] = uVar3;
    puVar11[2] = uVar4;
    puVar11[3] = uVar5;
    uVar6 = DAT_7008282a;
    *(undefined2 *)(puVar11 + 4) = DAT_70082828;
    *(undefined1 *)((int)puVar11 + 0x12) = uVar6;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d12bc,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4488);
    *puVar12 = 1;
  }
  iVar8 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4478);
  if (*(char *)(iVar8 + 0x13) != '\0') {
    uVar10 = 0;
    uVar16 = 0;
    do {
      iVar14 = (uVar10 & 7) * 8;
      uVar15 = iVar14 - 0x20;
      bVar7 = (byte)(0xcf83bfcb >> iVar14) | (byte)(0x779d037f << ((uVar10 & 7) * -8 + 0x20 & 0xff))
      ;
      if (-1 < (int)uVar15) {
        bVar7 = (byte)(0x779d037f >> (uVar15 & 0xff));
      }
      *(byte *)(iVar8 + uVar10) = *(byte *)(iVar8 + uVar10) ^ bVar7;
      bVar18 = 0xfffffffe < uVar10;
      bVar1 = uVar16 == 0;
      bVar2 = (0x11 < uVar10) <= uVar16;
      uVar10 = uVar10 + 1;
      uVar16 = uVar16 + bVar18;
    } while (bVar1 && bVar2);
    *(undefined1 *)(iVar8 + 0x13) = 0;
  }
  uVar10 = imp_strlen(iVar8);
  if (0xfffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar10 < 0xb) {
    uVar16 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar10 << 1));
    if (uVar10 == 0) goto LAB_715ba0d0;
  }
  else {
    uVar16 = thunk_MwhHq((uVar10 | 7) + 1);
    uStack_30 = (uVar10 | 7) + 2;
    uStack_2c = uVar10;
    uStack_28 = uVar16;
  }
  imp___aeabi_memmove(uVar16,iVar8,uVar10);
LAB_715ba0d0:
  *(undefined1 *)(uVar16 + uVar10) = 0;
  iVar8 = FUN_717c5e7c(&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if (iVar8 == 0) {
    uVar10 = (int)param_2 + (-0x5a4 - param_1);
    if (uVar10 < 0x16c) {
      uVar10 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x4925) >> 0x11;
    }
    else {
      uVar10 = (uint)*(char *)(param_1 + 0x71c);
    }
    return iVar17 + uVar10 * 0x28 + 400;
  }
  return 0;
}


// =========================================================================
// Function: FUN_715ba454
// Entry: 0x715ba454 | Size: 204 bytes
// =========================================================================

bool FUN_715ba454(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  
  if (DAT_711a3938 != 0) {
    piVar4 = (int *)(DAT_711a3938 + 0x1389c);
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      iVar1 = FUN_713c301c(0);
      if (iVar1 == 0) {
        iVar1 = *piVar4;
        if (iVar1 == 0) {
          return false;
        }
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
      }
    }
    iVar1 = *(int *)(iVar1 + 0x8c);
    if ((iVar1 != 0) && (-1 < *(char *)(iVar1 + 0x71c))) {
      puVar2 = (undefined4 *)FUN_715b9eec(iVar1,iVar1 + *(char *)(iVar1 + 0x71c) * 0x1c + 0x5a4);
      bVar3 = false;
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = FUN_71ba2c5c(*puVar2,puVar2[1],DAT_70b42058,DAT_70b4205c);
        bVar3 = iVar1 == 0;
      }
      return bVar3;
    }
  }
  return false;
}


// =========================================================================
// Function: BwVwFpCCj_pdnFFHXZSGVo_
// Entry: 0x715ba604 | Size: 324 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BwVwFpCCj_pdnFFHXZSGVo_
               (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
               int param_13,int param_14,int param_15,int param_16,int param_17,int param_18,
               int param_19,int param_20)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  uVar1 = DAT_712017fc;
  piVar2 = aiStack_38;
  iStack_1c = _ext___stack_chk_guard;
  piStack_28 = (int *)thunk_MwhHq(0x58);
  piStack_28[0x15] = param_20;
  piStack_28[0x14] = param_19;
  piStack_28[0x13] = param_18;
  piStack_28[0x12] = param_17;
  piStack_28[0x11] = param_16;
  piStack_28[0x10] = param_15;
  piStack_28[0xf] = param_14;
  piStack_28[0xe] = param_13;
  piStack_28[0xd] = param_12;
  piStack_28[0xc] = param_11;
  piStack_28[0xb] = param_10;
  piStack_28[10] = param_9;
  piStack_28[9] = param_8;
  piStack_28[8] = param_7;
  piStack_28[7] = param_6;
  piStack_28[2] = param_1;
  piStack_28[6] = param_5;
  piStack_28[5] = param_4;
  piStack_28[4] = param_3;
  *piStack_28 = (int)&DAT_70b0eda8;
  FUN_717ccb10(uVar1,aiStack_38);
  if (piStack_28 == aiStack_38) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = 0x14;
    piVar2 = piStack_28;
    if (piStack_28 == (int *)0x0) goto LAB_715ba724;
  }
  (**(code **)(*piVar2 + iVar3))();
LAB_715ba724:
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715ba834
// Entry: 0x715ba834 | Size: 120 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x715bb244) */
/* WARNING: Removing unreachable block (ram,0x715bba60) */

undefined4 * FUN_715ba834(undefined4 *param_1)

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
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *extraout_r1;
  byte *pbVar21;
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
  undefined4 *puVar34;
  int *piVar35;
  int *piVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  uint *puVar52;
  uint *puVar53;
  uint uVar54;
  undefined1 *puVar55;
  bool bVar56;
  uint uStack_78;
  uint *apuStack_74 [2];
  uint auStack_6c [2];
  uint *apuStack_64 [3];
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  uint *puStack_2c;
  int *piStack_28;
  
  puVar52 = &uStack_78;
  puVar53 = &uStack_78;
  puVar37 = &uStack_78;
  param_1[0x27] = 0;
  *(undefined1 *)((int)param_1 + 0x91) = 0xff;
  *param_1 = &DAT_70b0ed90;
  param_1[0x26] = 0;
  param_1[0x25] = param_1 + 0x26;
  FUN_7136cdfc(param_1 + 0x2a);
  FUN_7136cdfc(param_1 + 0x2d);
  FUN_7136cdfc(param_1 + 0x30);
  puStack_34 = param_1 + 0x5f;
  while( true ) {
    uVar17 = puVar52[1] ^ 0x679b29b;
    uVar11 = *puVar52 ^ 0x6a4dab1f | uVar17;
    bVar56 = uVar11 == 0;
    if (bVar56) {
      uVar17 = puVar52[3] ^ 0xfcc126c8;
      uVar11 = puVar52[2] ^ 0x6efdd0cf;
    }
    if ((bVar56 && (uVar11 == 0 && uVar17 == 0)) &&
       (puVar52[4] == 0xbefc55d6 && puVar52[5] == 0x370f3a77)) break;
    puVar52 = puVar52 + 1;
  }
  piStack_28 = (int *)puVar52[0xc017];
  if (piStack_28 == (int *)0x0) {
    piStack_28 = (int *)thunk_MwhHq(0xc);
    piStack_28[1] = 0;
    piStack_28[2] = 0;
    *piStack_28 = (int)(piStack_28 + 1);
    puVar52[0xc017] = (uint)piStack_28;
  }
  puVar49 = param_1 + 0x39;
  apuStack_64[0] = param_1;
  uVar17 = 0x56d677da;
  uVar11 = 0x27d4eb7f;
  uVar54 = 0;
  uVar18 = 4;
  auStack_6c[1] = 0x56d677d6;
  auStack_6c[0] = 0x27d4eb7f;
  puStack_2c = puVar49;
  puVar52 = puVar49;
  do {
    if (uVar54 == 0 && (7 < uVar18) <= uVar54) {
      if (uVar54 == 0 && (3 < uVar18) <= uVar54) {
        if (uVar18 == 0 && uVar54 == 0) break;
        lVar3 = (ulonglong)(uint)(byte)*puVar52 * 0x165667c5;
        iVar41 = 1;
        uVar26 = (uint)lVar3 ^ uVar17;
        uVar11 = (uint)(byte)*puVar52 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar11;
        uVar46 = uVar26 << 0xb | uVar11 >> 0x15;
        lVar3 = (ulonglong)uVar46 * 0x85ebca87;
        uVar17 = (uint)lVar3;
        uVar11 = (uVar11 << 0xb | uVar26 >> 0x15) * -0x7a143579 +
                 uVar46 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
        uVar51 = 0xffffffff;
      }
      else {
        lVar3 = (ulonglong)*puVar52 * 0x85ebca87;
        uVar26 = (uint)lVar3 ^ uVar17;
        uVar11 = *puVar52 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar11;
        uVar51 = uVar26 << 0x17 | uVar11 >> 9;
        lVar3 = (ulonglong)uVar51 * 0x27d4eb4f;
        uVar46 = (uint)lVar3;
        iVar41 = 4;
        uVar17 = uVar46 + 0x9e3779f9;
        uVar11 = (uVar11 << 0x17 | uVar26 >> 9) * 0x27d4eb4f +
                 uVar51 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar46);
        uVar51 = 0xfffffffc;
      }
    }
    else {
      uVar50 = *puVar52;
      uVar26 = (uint)((ulonglong)uVar50 * 0x80000000) |
               puVar52[1] * 0x27d4eb4f +
               uVar50 * -0x3d4d51c3 + (int)((ulonglong)uVar50 * 0x27d4eb4f >> 0x20) >> 1;
      lVar3 = (ulonglong)uVar26 * 0x85ebca87;
      uVar46 = (uint)lVar3 ^ uVar17;
      uVar51 = 0xfffffff8;
      uVar11 = (puVar52[1] * -0x80000000 +
               uVar50 * -0x6c158a59 + (int)((ulonglong)uVar50 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar26 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar11;
      uVar50 = uVar46 << 0x1b | uVar11 >> 5;
      lVar3 = (ulonglong)uVar50 * 0x85ebca87;
      uVar26 = (uint)lVar3;
      iVar41 = 8;
      uVar17 = uVar26 + 0xc2b2ae63;
      uVar11 = (uVar11 << 0x1b | uVar46 >> 5) * -0x7a143579 +
               uVar50 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar26);
    }
    bVar56 = CARRY4(uVar51,uVar18);
    uVar18 = uVar51 + uVar18;
    puVar52 = (uint *)((int)puVar52 + iVar41);
    uVar54 = (uVar54 - 1) + (uint)bVar56;
  } while( true );
  uVar17 = uVar17 ^ uVar11 >> 1;
  lVar3 = (ulonglong)uVar17 * 0x27d4eb4f;
  uVar18 = (uint)lVar3;
  uVar11 = uVar11 * 0x27d4eb4f + uVar17 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
  uVar18 = (uVar18 >> 0x1d | uVar11 * 8) ^ uVar18;
  lVar3 = (ulonglong)uVar18 * 0x9e3779f9;
  piVar35 = (int *)((uVar11 ^ uVar11 >> 0x1d) * -0x61c88607 +
                   uVar18 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20));
  uVar11 = (uint)piVar35 ^ (uint)lVar3;
  piVar12 = (int *)piStack_28[1];
  piVar19 = piStack_28 + 1;
  while (piVar36 = piVar19, piVar12 != (int *)0x0) {
    while (piVar13 = piVar12, piVar19 = piVar13, (uint *)piVar13[4] <= puVar49) {
      if (puVar49 <= (uint *)piVar13[4]) goto LAB_715bac64;
      piVar12 = (int *)piVar13[1];
      if ((int *)piVar13[1] == (int *)0x0) {
        piVar36 = piVar13 + 1;
        goto LAB_715babf8;
      }
    }
    piVar12 = (int *)*piVar13;
  }
LAB_715babf8:
  uStack_38 = uVar11;
  piStack_30 = piVar35;
  piVar13 = (int *)thunk_MwhHq(0x24);
  piVar12 = piStack_28;
  piVar13[4] = (int)puVar49;
  *piVar13 = 0;
  piVar13[1] = 0;
  piVar13[2] = (int)piVar19;
  *piVar36 = (int)piVar13;
  piVar19 = piVar13;
  if (*(int *)*piStack_28 != 0) {
    *piStack_28 = *(int *)*piStack_28;
    piVar19 = (int *)*piVar36;
  }
  FUN_712f807c(piStack_28[1],piVar19);
  piVar12[2] = piVar12[2] + 1;
  uVar11 = uStack_38;
  piVar35 = piStack_30;
LAB_715bac64:
  puVar52 = apuStack_64[0];
  piVar13[7] = uVar11;
  piVar13[8] = (int)piVar35;
  piVar13[6] = 4;
  piVar13[5] = (int)puStack_2c;
  while( true ) {
    uVar17 = puVar53[1] ^ 0x679b29b;
    uVar11 = *puVar53 ^ 0x6a4dab1f | uVar17;
    bVar56 = uVar11 == 0;
    if (bVar56) {
      uVar17 = puVar53[3] ^ 0xfcc126c8;
      uVar11 = puVar53[2] ^ 0x6efdd0cf;
    }
    if ((bVar56 && (uVar11 == 0 && uVar17 == 0)) &&
       (puVar53[4] == 0xbefc55d6 && puVar53[5] == 0x370f3a77)) break;
    puVar53 = puVar53 + 1;
  }
  piVar19 = (int *)puVar53[0xc017];
  if (piVar19 == (int *)0x0) {
    piVar19 = (int *)thunk_MwhHq(0xc);
    piVar19[1] = 0;
    piVar19[2] = 0;
    *piVar19 = (int)(piVar19 + 1);
    puVar53[0xc017] = (uint)piVar19;
  }
  puVar52 = puVar52 + 0x3a;
  uVar11 = 0x56d677da;
  uVar17 = 0;
  piVar12 = (int *)&LAB_00000004;
  uVar18 = 0x27d4eb7f;
  puVar53 = puVar52;
  do {
    if (uVar17 == 0 && (&DAT_00000007 < piVar12) <= uVar17) {
      if (uVar17 == 0 && ((int *)0x3 < piVar12) <= uVar17) {
        if (piVar12 == (int *)0x0 && uVar17 == 0) break;
        lVar3 = (ulonglong)(uint)(byte)*puVar53 * 0x165667c5;
        iVar41 = 1;
        uVar54 = (uint)lVar3 ^ uVar11;
        uVar18 = (uint)(byte)*puVar53 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar18;
        uVar26 = uVar54 << 0xb | uVar18 >> 0x15;
        lVar3 = (ulonglong)uVar26 * 0x85ebca87;
        uVar11 = (uint)lVar3;
        uVar18 = (uVar18 << 0xb | uVar54 >> 0x15) * -0x7a143579 +
                 uVar26 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
        uVar46 = 0xffffffff;
      }
      else {
        lVar3 = (ulonglong)*puVar53 * 0x85ebca87;
        uVar54 = (uint)lVar3 ^ uVar11;
        uVar18 = *puVar53 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar18;
        uVar46 = uVar54 << 0x17 | uVar18 >> 9;
        lVar3 = (ulonglong)uVar46 * 0x27d4eb4f;
        uVar26 = (uint)lVar3;
        uVar11 = uVar26 + 0x9e3779f9;
        iVar41 = 4;
        uVar18 = (uVar18 << 0x17 | uVar54 >> 9) * 0x27d4eb4f +
                 uVar46 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar26);
        uVar46 = 0xfffffffc;
      }
    }
    else {
      uVar51 = *puVar53;
      uVar54 = (uint)((ulonglong)uVar51 * 0x80000000) |
               puVar53[1] * 0x27d4eb4f +
               uVar51 * -0x3d4d51c3 + (int)((ulonglong)uVar51 * 0x27d4eb4f >> 0x20) >> 1;
      lVar3 = (ulonglong)uVar54 * 0x85ebca87;
      uVar26 = (uint)lVar3 ^ uVar11;
      uVar46 = 0xfffffff8;
      uVar18 = (puVar53[1] * -0x80000000 +
               uVar51 * -0x6c158a59 + (int)((ulonglong)uVar51 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar54 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar18;
      uVar51 = uVar26 << 0x1b | uVar18 >> 5;
      lVar3 = (ulonglong)uVar51 * 0x85ebca87;
      uVar54 = (uint)lVar3;
      iVar41 = 8;
      uVar11 = uVar54 + 0xc2b2ae63;
      uVar18 = (uVar18 << 0x1b | uVar26 >> 5) * -0x7a143579 +
               uVar51 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar54);
      piStack_28 = piVar12;
    }
    bVar56 = CARRY4(uVar46,(uint)piVar12);
    piVar12 = (int *)(uVar46 + (int)piVar12);
    puVar53 = (uint *)((int)puVar53 + iVar41);
    uVar17 = (uVar17 - 1) + (uint)bVar56;
  } while( true );
  uVar11 = uVar11 ^ uVar18 >> 1;
  lVar3 = (ulonglong)uVar11 * 0x27d4eb4f;
  uVar17 = (uint)lVar3;
  uVar11 = uVar18 * 0x27d4eb4f + uVar11 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
  uVar17 = (uVar17 >> 0x1d | uVar11 * 8) ^ uVar17;
  lVar3 = (ulonglong)uVar17 * 0x9e3779f9;
  piVar36 = (int *)((uVar11 ^ uVar11 >> 0x1d) * -0x61c88607 +
                   uVar17 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20));
  piVar12 = piVar19 + 1;
  uVar11 = (uint)piVar36 ^ (uint)lVar3;
  piVar35 = (int *)*piVar12;
  while (piVar13 = piVar12, apuStack_64[1] = puVar52, piStack_30 = piVar19, piVar35 != (int *)0x0) {
    while (piVar12 = piVar35, (uint *)piVar12[4] <= puVar52) {
      if (puVar52 <= (uint *)piVar12[4]) goto LAB_715bb048;
      piVar35 = (int *)piVar12[1];
      if ((int *)piVar12[1] == (int *)0x0) {
        piVar13 = piVar12 + 1;
        goto LAB_715bafd4;
      }
    }
    piVar35 = (int *)*piVar12;
  }
LAB_715bafd4:
  uStack_38 = uVar11;
  piStack_28 = piVar36;
  piVar35 = (int *)thunk_MwhHq(0x24);
  piVar19 = piStack_30;
  piVar35[4] = (int)puVar52;
  *piVar35 = 0;
  piVar35[1] = 0;
  piVar35[2] = (int)piVar12;
  *piVar13 = (int)piVar35;
  piVar12 = piVar35;
  if (*(int *)*piStack_30 != 0) {
    *piStack_30 = *(int *)*piStack_30;
    piVar12 = (int *)*piVar13;
  }
  FUN_712f807c(piStack_30[1],piVar12);
  piVar19[2] = piVar19[2] + 1;
  uVar11 = uStack_38;
  piVar36 = piStack_28;
  piVar12 = piVar35;
LAB_715bb048:
  puVar52 = apuStack_64[0];
  piVar12[6] = 4;
  piVar12[7] = uVar11;
  piVar12[5] = (int)apuStack_64[1];
  piVar12[8] = (int)piVar36;
  FUN_7136cdfc(apuStack_64[0] + 0x44);
  FUN_7136cdfc(puVar52 + 0x47);
  FUN_7133f834(puVar52 + 0x4a);
  *puStack_34 = 0x3f800000;
  puStack_34[1] = 0x42c80000;
  *(undefined1 *)(puVar52 + 0x61) = 1;
  imp___aeabi_memclr8(puVar52 + 0x62,0x218);
  puVar52[2] = 1;
  uVar14 = FUN_713c301c(0);
  puVar52[0x23] = uVar14;
  puVar52[1] = uVar14;
  *(undefined1 *)((int)puVar52 + 0x52) = 0;
  thunk_FUN_715ec34c(0,uVar14);
  FUN_715d33c8(&DAT_700824c2,puVar52[2],1);
  FUN_715d33c8(&DAT_700824d4,puVar52[2],0);
  puVar52[0x1f] = 0;
  FUN_715631e8(DAT_711a3938,(int)*(short *)(puVar52[0x23] + 0x26));
  puVar52[0x5c] = 0;
  puVar52[0x5d] = 0;
  puVar52[0x34] = 0;
  puVar52[0x35] = 0;
  puVar52[0x36] = 0;
  puVar52[0x37] = 0;
  puVar52[0x38] = 0;
  puVar52[0x3b] = 0;
  puVar52[0x3c] = 0;
  puVar52[0x3d] = 0;
  puVar52[0x3e] = 0;
  puVar52[0x3f] = 0;
  puVar52[0x40] = 0;
  while( true ) {
    uVar11 = *puVar37 ^ 0x6a4dab1f;
    uVar17 = uVar11 | puVar37[1] ^ 0x679b29b;
    bVar56 = uVar17 == 0;
    if (bVar56) {
      uVar17 = puVar37[3] ^ 0xfcc126c8;
      uVar11 = puVar37[2] ^ 0x6efdd0cf;
    }
    if ((bVar56 && (uVar11 == 0 && uVar17 == 0)) &&
       (puVar37[4] == 0xbefc55d6 && puVar37[5] == 0x370f3a77)) break;
    puVar37 = puVar37 + 1;
  }
  uVar11 = puVar37[0xc017];
  puVar53 = &uStack_78;
  if (uVar11 == 0) goto LAB_715bb990;
  piVar12 = (int *)(uVar11 + 4);
  piVar35 = (int *)*piVar12;
  piVar19 = piVar12;
  if (piVar35 != (int *)0x0) {
    piStack_28 = piVar12;
    piVar36 = piVar12;
    do {
      piVar13 = piVar35;
      if ((uint *)piVar35[4] < puStack_2c) {
        piVar35 = piVar35 + 1;
        piVar13 = piVar36;
      }
      piVar36 = piVar13;
      piVar35 = (int *)*piVar35;
    } while (piVar35 != (int *)0x0);
    if ((piVar36 != piVar12) && (piVar19 = piVar36, puStack_2c < (uint *)piVar36[4])) {
      piVar19 = piVar12;
    }
  }
  if (piVar12 == piVar19) goto LAB_715bb990;
  *puStack_2c = 0x3f800000;
  for (puVar20 = *(undefined4 **)(puVar37[0xc017] + 4); puVar20 != (undefined4 *)0x0;
      puVar20 = (undefined4 *)puVar20[1]) {
    while (puStack_2c < (uint *)puVar20[4]) {
      puVar20 = (undefined4 *)*puVar20;
      if (puVar20 == (undefined4 *)0x0) goto LAB_715bb284;
    }
    if (puStack_2c <= (uint *)puVar20[4]) goto LAB_715bb290;
  }
LAB_715bb284:
  FUN_712f6bb0(s_map__at__key_not_found_700619a7);
  puVar20 = extraout_r1;
LAB_715bb290:
  uVar17 = puVar20[6];
  puVar37 = (uint *)puVar20[5];
  uVar11 = 0x56d677d6;
  apuStack_74[1] = puVar20;
  iVar41 = 0x27d4eb7f;
  if (0x1f < uVar17) {
    puStack_34 = (undefined4 *)0x50;
    piStack_30 = (int *)0x40801011;
    uStack_38 = 0xee40c5e7;
    uVar18 = 0x60ea283e;
    puStack_2c = (uint *)0x61c8869e;
    iVar41 = 0;
    piStack_28 = (int *)0xba94458a;
    uStack_40 = 0xc2b2ae8d;
    uStack_3c = 0x6854fb60;
    uStack_78 = uVar17;
    apuStack_74[0] = puVar37;
    puVar52 = puVar37;
    uVar11 = uVar17;
    do {
      uStack_44 = uVar18;
      lVar3 = (ulonglong)puVar52[6] * 0x27d4eb4f;
      uVar54 = (uint)lVar3;
      uVar26 = uVar54 + (int)piStack_28;
      pbVar21 = (byte *)((int)puStack_2c +
                        (uint)CARRY4(uVar54,(uint)piStack_28) +
                        puVar52[7] * 0x27d4eb4f +
                        puVar52[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20));
      uVar54 = (uint)pbVar21 >> 1;
      uStack_48 = uVar26 * -0x80000000 | uVar54;
      piStack_28 = (int *)((ulonglong)uStack_48 * 0x85ebca87);
      uVar26 = uVar26 >> 1;
      uStack_4c = (int)pbVar21 * -0x80000000 | uVar26;
      puStack_2c = (uint *)(uStack_4c * -0x7a143579 +
                           uStack_48 * -0x61c8864f +
                           (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20));
      lVar3 = (ulonglong)puVar52[4] * 0x27d4eb4f;
      uVar46 = (uint)lVar3;
      puVar53 = puVar52 + 1;
      uVar51 = uVar46 + (int)piStack_30;
      uVar50 = (int)puStack_34 +
               (uint)CARRY4(uVar46,(uint)piStack_30) +
               puVar52[5] * 0x27d4eb4f + puVar52[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
      uVar46 = uVar50 >> 1;
      uStack_50 = uVar51 * -0x80000000 | uVar46;
      piStack_30 = (int *)((ulonglong)uStack_50 * 0x85ebca87);
      uVar51 = uVar51 >> 1;
      uStack_54 = uVar50 * -0x80000000 | uVar51;
      puVar49 = puVar52 + 2;
      puStack_34 = (undefined4 *)
                   (uStack_54 * -0x7a143579 +
                   uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20));
      puVar1 = puVar52 + 3;
      uVar27 = *puVar52;
      puVar52 = puVar52 + 8;
      lVar3 = (ulonglong)*puVar49 * 0x27d4eb4f;
      uVar50 = (uint)lVar3;
      uVar15 = uVar50 + uStack_3c;
      uVar22 = *puVar1 * 0x27d4eb4f + *puVar49 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
               uStack_40 + (uint)CARRY4(uVar50,uStack_3c);
      uVar50 = uVar22 >> 1;
      uStack_58 = uVar15 * -0x80000000 | uVar50;
      uVar15 = uVar15 >> 1;
      apuStack_64[2] = (uint *)(uVar22 * -0x80000000 | uVar15);
      uStack_3c = (uint)((ulonglong)uStack_58 * 0x85ebca87);
      uStack_40 = (int)apuStack_64[2] * -0x7a143579 +
                  uStack_58 * -0x61c8864f + (int)((ulonglong)uStack_58 * 0x85ebca87 >> 0x20);
      lVar3 = (ulonglong)uVar27 * 0x27d4eb4f;
      uVar22 = (uint)lVar3;
      uVar16 = uVar22 + uStack_38;
      uVar18 = *puVar53 * 0x27d4eb4f + uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
               uVar18 + (uint)CARRY4(uVar22,uStack_38);
      bVar56 = uVar11 < 0x20;
      uVar11 = uVar11 - 0x20;
      uVar22 = uVar18 >> 1;
      uVar27 = uVar16 * -0x80000000 | uVar22;
      iVar41 = iVar41 - (uint)bVar56;
      uStack_38 = (uint)((ulonglong)uVar27 * 0x85ebca87);
      uVar16 = uVar16 >> 1;
      uVar40 = uVar18 * -0x80000000 | uVar16;
      uVar18 = uVar40 * -0x7a143579 +
               uVar27 * -0x61c8864f + (int)((ulonglong)uVar27 * 0x85ebca87 >> 0x20);
    } while ((uint)(uVar11 < 0x20) <= (uint)-iVar41);
    uVar38 = uStack_38 << 1 | uVar18 >> 0x1f;
    uVar42 = uStack_3c << 7 | uStack_40 >> 0x19;
    uVar39 = uVar42 + uVar38;
    uVar43 = (int)piStack_30 << 0xc | (uint)puStack_34 >> 0x14;
    uVar44 = uVar39 + uVar43;
    uVar47 = (int)piStack_28 << 0x12 | (uint)puStack_2c >> 0xe;
    uVar40 = (uint)((ulonglong)uVar27 * 0x80000000) |
             uVar40 * 0xf796ca9 +
             uVar27 * -0x210ca4ff + (int)((ulonglong)uVar27 * 0xf796ca9 >> 0x20) >> 1;
    lVar3 = (ulonglong)uVar40 * 0x85ebca87;
    uVar45 = uVar44 + uVar47 ^ (uint)lVar3;
    lVar4 = (ulonglong)uVar45 * 0x85ebca87;
    uVar48 = (uint)lVar4;
    uVar28 = (uint)((ulonglong)uStack_58 * 0x80000000) |
             (int)apuStack_64[2] * 0xf796ca9 +
             uStack_58 * -0x210ca4ff + (int)((ulonglong)uStack_58 * 0xf796ca9 >> 0x20) >> 1;
    lVar5 = (ulonglong)uVar28 * 0x85ebca87;
    uVar23 = uVar48 + 0xc2b2ae63 ^ (uint)lVar5;
    lVar6 = (ulonglong)uVar23 * 0x85ebca87;
    uVar29 = (uint)lVar6;
    uVar30 = (uint)((ulonglong)uStack_50 * 0x80000000) |
             uStack_54 * 0xf796ca9 +
             uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
    lVar7 = (ulonglong)uVar30 * 0x85ebca87;
    uVar24 = uVar29 + 0xc2b2ae63 ^ (uint)lVar7;
    lVar8 = (ulonglong)uVar24 * 0x85ebca87;
    uVar31 = (uint)lVar8;
    uVar32 = (uint)((ulonglong)uStack_48 * 0x80000000) |
             uStack_4c * 0xf796ca9 +
             uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
    lVar9 = (ulonglong)uVar32 * 0x85ebca87;
    uVar25 = uVar31 + 0xc2b2ae63 ^ (uint)lVar9;
    lVar10 = (ulonglong)uVar25 * 0x85ebca87;
    uVar33 = (uint)lVar10;
    uVar11 = uVar33 + 0xc2b2ae63;
    iVar41 = (((((uStack_40 * 0x80 | uStack_3c >> 0x19) + (uVar18 * 2 | uStack_38 >> 0x1f) +
                 (uint)CARRY4(uVar42,uVar38) + ((int)puStack_34 * 0x1000 | (uint)piStack_30 >> 0x14)
                 + (uint)CARRY4(uVar39,uVar43) +
                 ((int)puStack_2c * 0x40000 | (uint)piStack_28 >> 0xe) + (uint)CARRY4(uVar44,uVar47)
                ^ (uVar16 * -0x80000000 +
                  uVar22 * -0x784349ac + (int)((ulonglong)uVar27 * 0x80000000 >> 0x20)) *
                  -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                (uint)(0x3d4d519c < uVar48) ^
               (uVar15 * -0x80000000 +
               uVar50 * -0x784349ac + (int)((ulonglong)uStack_58 * 0x80000000 >> 0x20)) *
               -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
               uVar23 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar29) ^
              (uVar51 * -0x80000000 +
              uVar46 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) * -0x7a143579
              + uVar30 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
              uVar24 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
              (uint)(0x3d4d519c < uVar31) ^
             (uVar26 * -0x80000000 +
             uVar54 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) * -0x7a143579
             + uVar32 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) * -0x7a143579 +
             uVar25 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) + -0x7a143589 +
             (uint)(0x3d4d519c < uVar33);
  }
  piStack_28 = (int *)(uVar11 + uVar17);
  puVar37 = (uint *)((int)puVar37 + (uVar17 & 0xffffffe0));
  uVar11 = iVar41 + (uint)CARRY4(uVar11,uVar17);
  puVar52 = (uint *)(uVar17 & 0x1f);
  uVar17 = 0;
  do {
    if (uVar17 == 0 && (&DAT_00000007 < puVar52) <= uVar17) {
      if (uVar17 == 0 && ((uint *)0x3 < puVar52) <= uVar17) {
        if (puVar52 == (uint *)0x0 && uVar17 == 0) break;
        lVar3 = (ulonglong)(uint)(byte)*puVar37 * 0x165667c5;
        uVar18 = (uint)lVar3 ^ (uint)piStack_28;
        uVar11 = (uint)(byte)*puVar37 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar11;
        uVar54 = uVar18 << 0xb | uVar11 >> 0x15;
        lVar3 = (ulonglong)uVar54 * 0x85ebca87;
        piStack_28 = (int *)lVar3;
        uVar11 = (uVar11 << 0xb | uVar18 >> 0x15) * -0x7a143579 +
                 uVar54 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
        uVar46 = 0xffffffff;
        iVar41 = 1;
      }
      else {
        lVar3 = (ulonglong)*puVar37 * 0x85ebca87;
        uVar18 = (uint)lVar3 ^ (uint)piStack_28;
        uVar11 = *puVar37 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar11;
        uVar26 = uVar18 << 0x17 | uVar11 >> 9;
        lVar3 = (ulonglong)uVar26 * 0x27d4eb4f;
        uVar54 = (uint)lVar3;
        iVar41 = 4;
        piStack_28 = (int *)(uVar54 + 0x9e3779f9);
        uVar11 = (uVar11 << 0x17 | uVar18 >> 9) * 0x27d4eb4f +
                 uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar54);
        uVar46 = 0xfffffffc;
      }
    }
    else {
      uVar18 = *puVar37;
      puStack_2c = puVar52;
      uVar26 = (uint)((ulonglong)uVar18 * 0x80000000) |
               puVar37[1] * 0x27d4eb4f +
               uVar18 * -0x3d4d51c3 + (int)((ulonglong)uVar18 * 0x27d4eb4f >> 0x20) >> 1;
      lVar3 = (ulonglong)uVar26 * 0x85ebca87;
      uVar54 = (uint)lVar3 ^ (uint)piStack_28;
      iVar41 = 8;
      uVar11 = (puVar37[1] * -0x80000000 +
               uVar18 * -0x6c158a59 + (int)((ulonglong)uVar18 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar26 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar11;
      uVar26 = uVar54 << 0x1b | uVar11 >> 5;
      lVar3 = (ulonglong)uVar26 * 0x85ebca87;
      uVar18 = (uint)lVar3;
      piStack_28 = (int *)(uVar18 + 0xc2b2ae63);
      uVar46 = 0xfffffff8;
      uVar11 = (uVar11 << 0x1b | uVar54 >> 5) * -0x7a143579 +
               uVar26 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar18);
    }
    bVar56 = CARRY4(uVar46,(uint)puVar52);
    puVar52 = (uint *)(uVar46 + (int)puVar52);
    puVar37 = (uint *)((int)puVar37 + iVar41);
    uVar17 = (uVar17 - 1) + (uint)bVar56;
  } while( true );
  uVar17 = (uint)piStack_28 ^ uVar11 >> 1;
  lVar3 = (ulonglong)uVar17 * 0x27d4eb4f;
  uVar18 = (uint)lVar3;
  uVar11 = uVar11 * 0x27d4eb4f + uVar17 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
  uVar18 = (uVar18 >> 0x1d | uVar11 * 8) ^ uVar18;
  lVar3 = (ulonglong)uVar18 * 0x9e3779f9;
  uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x61c88607 +
           uVar18 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20);
  puVar20[8] = uVar11;
  puVar20[7] = uVar11 ^ (uint)lVar3;
  puVar53 = &uStack_78;
  puVar52 = apuStack_64[0];
LAB_715bb990:
  while( true ) {
    uVar11 = *puVar53 ^ 0x6a4dab1f;
    uVar17 = uVar11 | puVar53[1] ^ 0x679b29b;
    bVar56 = uVar17 == 0;
    if (bVar56) {
      uVar17 = puVar53[3] ^ 0xfcc126c8;
      uVar11 = puVar53[2] ^ 0x6efdd0cf;
    }
    if ((bVar56 && (uVar11 == 0 && uVar17 == 0)) &&
       (piVar19 = (int *)puVar53[5], puVar53[4] == 0xbefc55d6 && piVar19 == (int *)0x370f3a77))
    break;
    puVar53 = puVar53 + 1;
  }
  piVar12 = (int *)puVar53[0xc017];
  bVar56 = piVar12 != (int *)0x0;
  if (bVar56) {
    piVar12 = piVar12 + 1;
    piVar19 = (int *)*piVar12;
  }
  piVar35 = piVar12;
  if (!bVar56 || piVar19 == (int *)0x0) {
LAB_715bb9e8:
    *(undefined1 *)(puVar52 + 0x20) = 1;
    *(undefined1 *)(puVar52 + 0x24) = 0;
    *(undefined1 *)(puVar52 + 0x5e) = 0;
    thunk_MwhHq(0x178);
    uVar14 = FUN_71519cc0();
    puVar52[0x41] = uVar14;
    *(undefined1 *)((int)puVar52 + 0x179) = 0;
    puVar52[0x42] = 0;
    return puVar52;
  }
  do {
    piVar36 = piVar19;
    if ((uint *)piVar19[4] < apuStack_64[1]) {
      piVar19 = piVar19 + 1;
      piVar36 = piVar35;
    }
    piVar19 = (int *)*piVar19;
    piVar35 = piVar36;
  } while (piVar19 != (int *)0x0);
  if ((piVar36 == piVar12) || (apuStack_64[1] < (uint *)piVar36[4])) goto LAB_715bb9e8;
  *apuStack_64[1] = 0x3f800000;
  for (puVar37 = *(uint **)(puVar53[0xc017] + 4); puVar37 != (uint *)0x0;
      puVar37 = (uint *)puVar37[1]) {
    while (apuStack_64[1] < (uint *)puVar37[4]) {
      puVar37 = (uint *)*puVar37;
      if (puVar37 == (uint *)0x0) goto LAB_715bb284;
    }
    if (apuStack_64[1] <= (uint *)puVar37[4]) {
      puVar52 = (uint *)puVar37[5];
      puVar20 = (undefined4 *)puVar37[6];
      if (&DAT_0000001f < puVar20) {
        puStack_34 = (undefined4 *)0x50;
        piStack_30 = (int *)0x40801011;
        puStack_2c = (uint *)0x61c8869e;
        piStack_28 = (int *)0xba94458a;
        uStack_3c = 0xc2b2ae8d;
        uVar17 = 0xee40c5e7;
        iVar41 = 0;
        uStack_38 = 0x6854fb60;
        puVar34 = puVar20;
        uVar11 = 0x60ea283e;
        puVar53 = puVar52;
        do {
          uStack_44 = uVar11;
          lVar3 = (ulonglong)puVar53[6] * 0x27d4eb4f;
          uVar11 = (uint)lVar3;
          uVar54 = uVar11 + (int)piStack_28;
          pbVar21 = (byte *)((int)puStack_2c +
                            (uint)CARRY4(uVar11,(uint)piStack_28) +
                            puVar53[7] * 0x27d4eb4f +
                            puVar53[6] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20));
          uVar18 = (uint)pbVar21 >> 1;
          uStack_48 = uVar54 * -0x80000000 | uVar18;
          piStack_28 = (int *)((ulonglong)uStack_48 * 0x85ebca87);
          uVar54 = uVar54 >> 1;
          uStack_4c = (int)pbVar21 * -0x80000000 | uVar54;
          puStack_2c = (uint *)(uStack_4c * -0x7a143579 +
                               uStack_48 * -0x61c8864f +
                               (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20));
          lVar3 = (ulonglong)puVar53[4] * 0x27d4eb4f;
          uVar11 = (uint)lVar3;
          puVar49 = puVar53 + 1;
          uVar46 = uVar11 + (int)piStack_30;
          uVar11 = puVar53[5] * 0x27d4eb4f +
                   puVar53[4] * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + (int)puStack_34 +
                   (uint)CARRY4(uVar11,(uint)piStack_30);
          uVar26 = uVar11 >> 1;
          uStack_50 = uVar46 * -0x80000000 | uVar26;
          piStack_30 = (int *)((ulonglong)uStack_50 * 0x85ebca87);
          uVar46 = uVar46 >> 1;
          uStack_54 = uVar11 * -0x80000000 | uVar46;
          puVar1 = puVar53 + 2;
          puStack_34 = (undefined4 *)
                       (uStack_54 * -0x7a143579 +
                       uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20));
          puVar2 = puVar53 + 3;
          lVar3 = (ulonglong)*puVar1 * 0x27d4eb4f;
          uVar51 = (uint)lVar3;
          uVar11 = *puVar53;
          puVar53 = puVar53 + 8;
          uVar50 = uVar51 + uStack_38;
          uVar15 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
                   uStack_3c + (uint)CARRY4(uVar51,uStack_38);
          uVar51 = uVar15 >> 1;
          uStack_58 = uVar50 * -0x80000000 | uVar51;
          uStack_38 = (uint)((ulonglong)uStack_58 * 0x85ebca87);
          uVar50 = uVar50 >> 1;
          uStack_40 = uVar15 * -0x80000000 | uVar50;
          uStack_3c = uStack_40 * -0x7a143579 +
                      uStack_58 * -0x61c8864f + (int)((ulonglong)uStack_58 * 0x85ebca87 >> 0x20);
          lVar3 = (ulonglong)uVar11 * 0x27d4eb4f;
          uVar15 = (uint)lVar3;
          uVar22 = uVar15 + uVar17;
          uVar11 = *puVar49 * 0x27d4eb4f + uVar11 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) +
                   uStack_44 + (uint)CARRY4(uVar15,uVar17);
          bVar56 = puVar34 < (undefined4 *)0x20;
          puVar34 = puVar34 + -8;
          uVar15 = uVar11 >> 1;
          uVar16 = uVar22 * -0x80000000 | uVar15;
          uVar22 = uVar22 >> 1;
          uVar27 = uVar11 * -0x80000000 | uVar22;
          iVar41 = iVar41 - (uint)bVar56;
          uVar17 = (uint)((ulonglong)uVar16 * 0x85ebca87);
          uVar11 = uVar27 * -0x7a143579 +
                   uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
        } while ((uint)(puVar34 < (undefined4 *)0x20) <= (uint)-iVar41);
        uVar25 = uVar17 << 1 | uVar11 >> 0x1f;
        uVar43 = uStack_38 << 7 | uStack_3c >> 0x19;
        uVar28 = uVar43 + uVar25;
        uVar40 = (int)puStack_34 * 0x1000;
        uVar23 = (uint)piStack_30 >> 0x14;
        uVar44 = (int)piStack_30 << 0xc | (uint)puStack_34 >> 0x14;
        puStack_34 = (undefined4 *)(uVar28 + uVar44);
        piStack_30 = (int *)((ulonglong)uVar16 * 0x80000000 >> 0x20);
        uVar45 = (uint)((ulonglong)uVar16 * 0x80000000) |
                 uVar27 * 0xf796ca9 +
                 uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
        lVar3 = (ulonglong)uVar45 * 0x85ebca87;
        uVar29 = (int)piStack_28 << 0x12 | (uint)puStack_2c >> 0xe;
        uVar30 = (int)puStack_34 + uVar29 ^ (uint)lVar3;
        lVar4 = (ulonglong)uVar30 * 0x85ebca87;
        uVar47 = (uint)lVar4;
        uVar31 = (uint)((ulonglong)uStack_58 * 0x80000000) |
                 uStack_40 * 0xf796ca9 +
                 uStack_58 * -0x210ca4ff + (int)((ulonglong)uStack_58 * 0xf796ca9 >> 0x20) >> 1;
        lVar5 = (ulonglong)uVar31 * 0x85ebca87;
        uVar16 = uVar47 + 0xc2b2ae63 ^ (uint)lVar5;
        lVar6 = (ulonglong)uVar16 * 0x85ebca87;
        uVar32 = (uint)lVar6;
        uVar33 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                 uStack_54 * 0xf796ca9 +
                 uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
        lVar7 = (ulonglong)uVar33 * 0x85ebca87;
        uVar27 = uVar32 + 0xc2b2ae63 ^ (uint)lVar7;
        lVar8 = (ulonglong)uVar27 * 0x85ebca87;
        uVar38 = (uint)lVar8;
        uVar39 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                 uStack_4c * 0xf796ca9 +
                 uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
        lVar9 = (ulonglong)uVar39 * 0x85ebca87;
        uVar24 = uVar38 + 0xc2b2ae63 ^ (uint)lVar9;
        lVar10 = (ulonglong)uVar24 * 0x85ebca87;
        uVar42 = (uint)lVar10;
        auStack_6c[1] = uVar42 + 0xc2b2ae63;
        auStack_6c[0] =
             (((((uStack_3c * 0x80 | uStack_38 >> 0x19) + (uVar11 * 2 | uVar17 >> 0x1f) +
                 (uint)CARRY4(uVar43,uVar25) + (uVar40 | uVar23) + (uint)CARRY4(uVar28,uVar44) +
                 ((int)puStack_2c * 0x40000 | (uint)piStack_28 >> 0xe) +
                 (uint)CARRY4((uint)puStack_34,uVar29) ^
                (int)(piStack_30 + uVar15 * -0x1e10d26b + uVar22 * -0x20000000) * -0x7a143579 +
                uVar45 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) * -0x7a143579 +
                uVar30 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                (uint)(0x3d4d519c < uVar47) ^
               (uVar50 * -0x80000000 +
               uVar51 * -0x784349ac + (int)((ulonglong)uStack_58 * 0x80000000 >> 0x20)) *
               -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
               uVar16 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar32) ^
              (uVar46 * -0x80000000 +
              uVar26 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) * -0x7a143579
              + uVar33 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) * -0x7a143579 +
              uVar27 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
              (uint)(0x3d4d519c < uVar38) ^
             (uVar54 * -0x80000000 +
             uVar18 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) * -0x7a143579
             + uVar39 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) * -0x7a143579 +
             uVar24 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) + -0x7a143589 +
             (uint)(0x3d4d519c < uVar42);
        apuStack_74[1] = puVar20;
        apuStack_64[1] = puVar52;
      }
      uVar11 = (uint)puVar20 & 0x1f;
      piVar19 = (int *)0x0;
      puVar55 = (undefined1 *)(auStack_6c[1] + (int)puVar20);
      puVar52 = (uint *)((int)puVar52 + ((uint)puVar20 & 0xffffffe0));
      puVar53 = (uint *)(auStack_6c[0] + CARRY4(auStack_6c[1],(uint)puVar20));
      do {
        if (piVar19 == (int *)0x0 && (int *)(uint)(7 < uVar11) <= piVar19) {
          if (piVar19 == (int *)0x0 && (int *)(uint)(3 < uVar11) <= piVar19) {
            if (uVar11 == 0 && piVar19 == (int *)0x0) {
              uVar11 = (uint)puVar55 ^ (uint)puVar53 >> 1;
              lVar3 = (ulonglong)uVar11 * 0x27d4eb4f;
              uVar17 = (uint)lVar3;
              uVar11 = (int)puVar53 * 0x27d4eb4f +
                       uVar11 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20);
              uVar17 = (uVar17 >> 0x1d | uVar11 * 8) ^ uVar17;
              lVar3 = (ulonglong)uVar17 * 0x9e3779f9;
              uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x61c88607 +
                       uVar17 * 0x165667b1 + (int)((ulonglong)lVar3 >> 0x20);
              puVar37[8] = uVar11;
              puVar37[7] = uVar11 ^ (uint)lVar3;
              puVar52 = apuStack_64[0];
              apuStack_64[2] = puVar37;
              goto LAB_715bb9e8;
            }
            lVar3 = (ulonglong)(uint)(byte)*puVar52 * 0x165667c5;
            uVar18 = (uint)lVar3 ^ (uint)puVar55;
            uVar17 = (uint)(byte)*puVar52 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^
                     (uint)puVar53;
            uVar54 = uVar18 << 0xb | uVar17 >> 0x15;
            lVar3 = (ulonglong)uVar54 * 0x85ebca87;
            puVar55 = (undefined1 *)lVar3;
            puVar49 = (uint *)((uVar17 << 0xb | uVar18 >> 0x15) * -0x7a143579 +
                              uVar54 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20));
            uVar54 = 0xffffffff;
            iVar41 = 1;
          }
          else {
            lVar3 = (ulonglong)*puVar52 * 0x85ebca87;
            uVar18 = (uint)lVar3 ^ (uint)puVar55;
            uVar17 = *puVar52 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ (uint)puVar53;
            uVar26 = uVar18 << 0x17 | uVar17 >> 9;
            lVar3 = (ulonglong)uVar26 * 0x27d4eb4f;
            uVar54 = (uint)lVar3;
            iVar41 = 4;
            puVar55 = (undefined1 *)(uVar54 + 0x9e3779f9);
            puVar49 = (uint *)((uVar17 << 0x17 | uVar18 >> 9) * 0x27d4eb4f +
                               uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                              (uint)(0x61c88606 < uVar54));
            uVar54 = 0xfffffffc;
          }
        }
        else {
          uVar17 = *puVar52;
          uVar18 = (uint)((ulonglong)uVar17 * 0x80000000) |
                   puVar52[1] * 0x27d4eb4f +
                   uVar17 * -0x3d4d51c3 + (int)((ulonglong)uVar17 * 0x27d4eb4f >> 0x20) >> 1;
          lVar3 = (ulonglong)uVar18 * 0x85ebca87;
          uVar54 = 0xfffffff8;
          uVar17 = (puVar52[1] * -0x80000000 +
                   uVar17 * -0x6c158a59 + (int)((ulonglong)uVar17 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^
                   (uint)puVar53;
          uVar18 = (uint)lVar3 ^ (uint)puVar55;
          uVar46 = uVar18 << 0x1b | uVar17 >> 5;
          lVar3 = (ulonglong)uVar46 * 0x85ebca87;
          uVar26 = (uint)lVar3;
          iVar41 = 8;
          puVar55 = (undefined1 *)(uVar26 + 0xc2b2ae63);
          puVar49 = (uint *)((uVar17 << 0x1b | uVar18 >> 5) * -0x7a143579 +
                             uVar46 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                            (uint)(0x3d4d519c < uVar26));
          puStack_2c = puVar53;
          piStack_28 = piVar19;
        }
        bVar56 = CARRY4(uVar54,uVar11);
        uVar11 = uVar54 + uVar11;
        puVar52 = (uint *)((int)puVar52 + iVar41);
        piVar19 = (int *)((int)piVar19 + (bVar56 - 1));
        puVar53 = puVar49;
      } while( true );
    }
  }
  goto LAB_715bb284;
}


// =========================================================================
// Function: FUN_715bc440
// Entry: 0x715bc440 | Size: 72 bytes
// =========================================================================

undefined1 FUN_715bc440(void)

{
  undefined1 uVar1;
  
  uVar1 = (char)DAT_711f518c != '\0';
  if ((bool)uVar1) {
    DAT_711f518c._0_1_ = '\0';
  }
  if (DAT_711f518c._1_1_ != '\0') {
    DAT_711f518c._1_1_ = '\0';
    uVar1 = 2;
  }
  if (DAT_711f518c._2_1_ != '\0') {
    DAT_711f518c._2_1_ = '\0';
    uVar1 = 3;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715bc4c0
// Entry: 0x715bc4c0 | Size: 108 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x715bd138) */
/* WARNING: Removing unreachable block (ram,0x715bd9c8) */

undefined4 *
FUN_715bc4c0(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5,
            undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  byte *pbVar31;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  uint uVar44;
  uint uVar45;
  undefined4 *puVar46;
  uint uVar47;
  bool bVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  uint auStack_f8 [2];
  undefined8 uStack_f0;
  undefined4 *puStack_e8;
  uint auStack_e4 [4];
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint *puStack_c0;
  int *piStack_bc;
  int iStack_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 *puStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint *puStack_88;
  int *piStack_84;
  undefined4 *puStack_80;
  uint uStack_7c;
  uint *puStack_78;
  int iStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint auStack_44 [3];
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [2];
  
  puVar30 = auStack_f8;
  puVar33 = auStack_f8;
  puVar43 = auStack_f8;
  puVar18 = auStack_f8;
  param_1[0x27] = 0;
  *(undefined1 *)((int)param_1 + 0x91) = 0xff;
  *param_1 = &DAT_70b0ed90;
  param_1[0x26] = 0;
  param_1[0x25] = param_1 + 0x26;
  uStack_8c = param_2;
  uStack_7c = param_4;
  auStack_2c[0] = param_3;
  FUN_7136cdfc(param_1 + 0x2a);
  FUN_7136cdfc(param_1 + 0x2d);
  FUN_7136cdfc(param_1 + 0x30);
  puStack_88 = auStack_44;
  puStack_80 = param_1 + 0x3f;
  while( true ) {
    uVar19 = puVar30[1] ^ 0x679b29b;
    uVar10 = *puVar30 ^ 0x6a4dab1f | uVar19;
    bVar48 = uVar10 == 0;
    if (bVar48) {
      uVar19 = puVar30[3] ^ 0xfcc126c8;
      uVar10 = puVar30[2] ^ 0x6efdd0cf;
    }
    if ((bVar48 && (uVar10 == 0 && uVar19 == 0)) &&
       (puVar30[4] == 0xbefc55d6 && puVar30[5] == 0x370f3a77)) break;
    puVar30 = puVar30 + 1;
  }
  puStack_ac = param_1;
  piStack_84 = (int *)puVar30[0xc017];
  if (piStack_84 == (int *)0x0) {
    piStack_84 = (int *)thunk_MwhHq(0xc);
    piStack_84[1] = 0;
    piStack_84[2] = 0;
    *piStack_84 = (int)(piStack_84 + 1);
    puVar30[0xc017] = (uint)piStack_84;
  }
  uVar10 = 0x27d4eb7f;
  uVar42 = 0;
  puVar29 = puStack_ac + 0x39;
  uVar19 = 0x56d677da;
  uVar45 = 4;
  uStack_b4 = 0x56d677d6;
  iStack_b8 = 0x27d4eb7f;
  puStack_78 = puVar29;
  puVar30 = puVar29;
  do {
    if (uVar42 == 0 && (7 < uVar45) <= uVar42) {
      if (uVar42 == 0 && (3 < uVar45) <= uVar42) {
        if (uVar45 == 0 && uVar42 == 0) break;
        lVar2 = (ulonglong)(uint)(byte)*puVar30 * 0x165667c5;
        uVar24 = (uint)lVar2 ^ uVar19;
        uVar10 = (uint)(byte)*puVar30 * 0x27d4eb2f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
        uVar36 = uVar24 << 0xb | uVar10 >> 0x15;
        lVar2 = (ulonglong)uVar36 * 0x85ebca87;
        uVar19 = (uint)lVar2;
        iVar37 = 1;
        uVar10 = (uVar10 << 0xb | uVar24 >> 0x15) * -0x7a143579 +
                 uVar36 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20);
        uVar24 = 0xffffffff;
      }
      else {
        lVar2 = (ulonglong)*puVar30 * 0x85ebca87;
        uVar24 = (uint)lVar2 ^ uVar19;
        uVar10 = *puVar30 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
        uVar40 = uVar24 << 0x17 | uVar10 >> 9;
        lVar2 = (ulonglong)uVar40 * 0x27d4eb4f;
        uVar36 = (uint)lVar2;
        uVar19 = uVar36 + 0x9e3779f9;
        iVar37 = 4;
        uVar10 = (uVar10 << 0x17 | uVar24 >> 9) * 0x27d4eb4f +
                 uVar40 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar36);
        uVar24 = 0xfffffffc;
      }
    }
    else {
      uVar40 = *puVar30;
      uVar24 = (uint)((ulonglong)uVar40 * 0x80000000) |
               puVar30[1] * 0x27d4eb4f +
               uVar40 * -0x3d4d51c3 + (int)((ulonglong)uVar40 * 0x27d4eb4f >> 0x20) >> 1;
      lVar2 = (ulonglong)uVar24 * 0x85ebca87;
      uVar36 = (uint)lVar2 ^ uVar19;
      uVar10 = (puVar30[1] * -0x80000000 +
               uVar40 * -0x6c158a59 + (int)((ulonglong)uVar40 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar24 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
      uVar39 = uVar36 << 0x1b | uVar10 >> 5;
      lVar2 = (ulonglong)uVar39 * 0x85ebca87;
      uVar40 = (uint)lVar2;
      uVar24 = 0xfffffff8;
      uVar19 = uVar40 + 0xc2b2ae63;
      iVar37 = 8;
      uVar10 = (uVar10 << 0x1b | uVar36 >> 5) * -0x7a143579 +
               uVar39 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar40);
    }
    bVar48 = CARRY4(uVar24,uVar45);
    uVar45 = uVar24 + uVar45;
    puVar30 = (uint *)((int)puVar30 + iVar37);
    uVar42 = (uVar42 - 1) + (uint)bVar48;
  } while( true );
  uVar19 = uVar19 ^ uVar10 >> 1;
  lVar2 = (ulonglong)uVar19 * 0x27d4eb4f;
  uVar42 = (uint)lVar2;
  uVar10 = uVar10 * 0x27d4eb4f + uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20);
  uVar42 = (uVar42 >> 0x1d | uVar10 * 8) ^ uVar42;
  lVar2 = (ulonglong)uVar42 * 0x9e3779f9;
  uVar10 = (uVar10 ^ uVar10 >> 0x1d) * -0x61c88607 +
           uVar42 * 0x165667b1 + (int)((ulonglong)lVar2 >> 0x20);
  piVar11 = (int *)piStack_84[1];
  piVar13 = piStack_84 + 1;
  while (piVar20 = piVar13, piVar11 != (int *)0x0) {
    while (piVar12 = piVar11, (uint *)piVar12[4] <= puVar29) {
      if (puVar29 <= (uint *)piVar12[4]) goto LAB_715bc900;
      piVar11 = (int *)piVar12[1];
      if ((int *)piVar12[1] == (int *)0x0) {
        piVar13 = piVar12 + 1;
        piVar20 = piVar12;
        goto LAB_715bc8a4;
      }
    }
    piVar13 = piVar12;
    piVar11 = (int *)*piVar12;
  }
LAB_715bc8a4:
  piVar12 = (int *)thunk_MwhHq(0x24);
  piVar11 = piStack_84;
  piVar12[4] = (int)puVar29;
  *piVar12 = 0;
  piVar12[1] = 0;
  piVar12[2] = (int)piVar20;
  *piVar13 = (int)piVar12;
  piVar20 = piVar12;
  if (*(int *)*piStack_84 != 0) {
    *piStack_84 = *(int *)*piStack_84;
    piVar20 = (int *)*piVar13;
  }
  FUN_712f807c(piStack_84[1],piVar20);
  piVar11[2] = piVar11[2] + 1;
LAB_715bc900:
  puVar46 = puStack_ac;
  piVar12[7] = uVar10 ^ (uint)lVar2;
  piVar12[6] = 4;
  piVar12[5] = (int)puStack_78;
  piVar12[8] = uVar10;
  while( true ) {
    uVar19 = puVar33[1] ^ 0x679b29b;
    uVar10 = *puVar33 ^ 0x6a4dab1f | uVar19;
    bVar48 = uVar10 == 0;
    if (bVar48) {
      uVar19 = puVar33[3] ^ 0xfcc126c8;
      uVar10 = puVar33[2] ^ 0x6efdd0cf;
    }
    if ((bVar48 && (uVar10 == 0 && uVar19 == 0)) &&
       (puVar33[4] == 0xbefc55d6 && puVar33[5] == 0x370f3a77)) break;
    puVar33 = puVar33 + 1;
  }
  piVar13 = (int *)puVar33[0xc017];
  if (piVar13 == (int *)0x0) {
    piVar13 = (int *)thunk_MwhHq(0xc);
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = (int)(piVar13 + 1);
    puVar33[0xc017] = (uint)piVar13;
  }
  puVar33 = puVar46 + 0x3a;
  uVar10 = 0x56d677da;
  uVar19 = 0;
  uVar45 = 4;
  uVar42 = 0x27d4eb7f;
  puVar30 = puVar33;
  do {
    if (uVar19 == 0 && (7 < uVar45) <= uVar19) {
      if (uVar19 == 0 && (3 < uVar45) <= uVar19) {
        if (uVar45 == 0 && uVar19 == 0) goto LAB_715bcbd8;
        lVar2 = (ulonglong)(uint)(byte)*puVar30 * 0x165667c5;
        uVar24 = (uint)lVar2 ^ uVar10;
        uVar42 = (uint)(byte)*puVar30 * 0x27d4eb2f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar42;
        uVar36 = uVar24 << 0xb | uVar42 >> 0x15;
        lVar2 = (ulonglong)uVar36 * 0x85ebca87;
        uVar10 = (uint)lVar2;
        iVar37 = 1;
        uVar42 = (uVar42 << 0xb | uVar24 >> 0x15) * -0x7a143579 +
                 uVar36 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20);
        uVar24 = 0xffffffff;
      }
      else {
        lVar2 = (ulonglong)*puVar30 * 0x85ebca87;
        uVar24 = (uint)lVar2 ^ uVar10;
        uVar42 = *puVar30 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar42;
        uVar40 = uVar24 << 0x17 | uVar42 >> 9;
        lVar2 = (ulonglong)uVar40 * 0x27d4eb4f;
        uVar36 = (uint)lVar2;
        uVar10 = uVar36 + 0x9e3779f9;
        iVar37 = 4;
        uVar42 = (uVar42 << 0x17 | uVar24 >> 9) * 0x27d4eb4f +
                 uVar40 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + 0x165667b1 +
                 (uint)(0x61c88606 < uVar36);
        uVar24 = 0xfffffffc;
      }
    }
    else {
      uVar40 = *puVar30;
      uVar24 = (uint)((ulonglong)uVar40 * 0x80000000) |
               puVar30[1] * 0x27d4eb4f +
               uVar40 * -0x3d4d51c3 + (int)((ulonglong)uVar40 * 0x27d4eb4f >> 0x20) >> 1;
      lVar2 = (ulonglong)uVar24 * 0x85ebca87;
      uVar36 = (uint)lVar2 ^ uVar10;
      uVar42 = (puVar30[1] * -0x80000000 +
               uVar40 * -0x6c158a59 + (int)((ulonglong)uVar40 * 0x80000000 >> 0x20)) * -0x7a143579 +
               uVar24 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar42;
      uVar39 = uVar36 << 0x1b | uVar42 >> 5;
      lVar2 = (ulonglong)uVar39 * 0x85ebca87;
      uVar40 = (uint)lVar2;
      uVar24 = 0xfffffff8;
      uVar10 = uVar40 + 0xc2b2ae63;
      iVar37 = 8;
      uVar42 = (uVar42 << 0x1b | uVar36 >> 5) * -0x7a143579 +
               uVar39 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
               (uint)(0x3d4d519c < uVar40);
    }
    bVar48 = CARRY4(uVar24,uVar45);
    uVar45 = uVar24 + uVar45;
    puVar30 = (uint *)((int)puVar30 + iVar37);
    uVar19 = (uVar19 - 1) + (uint)bVar48;
  } while( true );
code_r0x715bd170:
  piVar13 = (int *)piVar13[1];
  goto joined_r0x715bd148;
LAB_715bcbd8:
  uVar10 = uVar10 ^ uVar42 >> 1;
  lVar2 = (ulonglong)uVar10 * 0x27d4eb4f;
  uVar19 = (uint)lVar2;
  uVar10 = uVar42 * 0x27d4eb4f + uVar10 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20);
  uVar19 = (uVar19 >> 0x1d | uVar10 * 8) ^ uVar19;
  lVar2 = (ulonglong)uVar19 * 0x9e3779f9;
  uVar10 = (uVar10 ^ uVar10 >> 0x1d) * -0x61c88607 +
           uVar19 * 0x165667b1 + (int)((ulonglong)lVar2 >> 0x20);
  piVar20 = (int *)piVar13[1];
  piVar11 = piVar13 + 1;
  while (piVar12 = piVar11, puStack_b0 = puVar33, piStack_84 = piVar13, piVar20 != (int *)0x0) {
    while (piVar14 = piVar20, (uint *)piVar14[4] <= puVar33) {
      if (puVar33 <= (uint *)piVar14[4]) goto LAB_715bccd8;
      piVar20 = (int *)piVar14[1];
      if ((int *)piVar14[1] == (int *)0x0) {
        piVar11 = piVar14 + 1;
        piVar12 = piVar14;
        goto LAB_715bcc78;
      }
    }
    piVar11 = piVar14;
    piVar20 = (int *)*piVar14;
  }
LAB_715bcc78:
  piVar14 = (int *)thunk_MwhHq(0x24);
  piVar13 = piStack_84;
  piVar14[4] = (int)puVar33;
  *piVar14 = 0;
  piVar14[1] = 0;
  piVar14[2] = (int)piVar12;
  *piVar11 = (int)piVar14;
  piVar20 = piVar14;
  if (*(int *)*piStack_84 != 0) {
    *piStack_84 = *(int *)*piStack_84;
    piVar20 = (int *)*piVar11;
  }
  FUN_712f807c(piStack_84[1],piVar20);
  piVar13[2] = piVar13[2] + 1;
LAB_715bccd8:
  puVar46 = puStack_ac;
  piVar14[6] = 4;
  piVar14[7] = uVar10 ^ (uint)lVar2;
  piVar14[5] = (int)puStack_b0;
  piVar14[8] = uVar10;
  FUN_7136cdfc(puStack_ac + 0x44);
  FUN_7136cdfc(puVar46 + 0x47);
  FUN_7133f834(puVar46 + 0x4a);
  puStack_80[0x20] = 0x3f800000;
  puStack_80[0x21] = 0x42c80000;
  *(undefined1 *)(puVar46 + 0x61) = 1;
  imp___aeabi_memclr8(puVar46 + 0x62,0x218);
  uVar10 = uStack_8c;
  uStack_30 = 0;
  puVar46[0x23] = 0;
  puVar46[0x1f] = 0;
  puVar46[1] = 0;
  puVar46[2] = 0;
  uStack_34 = uStack_8c;
  uVar49 = FUN_71ba1638(param_5);
  uStack_90 = (uint)((ulonglong)uVar49 >> 0x20);
  piStack_84 = (int *)uVar49;
  uVar49 = FUN_71ba1638(param_6);
  uVar50 = FUN_71ba1638(uStack_7c);
  auStack_f8[0] = (uint)piStack_84;
  auStack_f8[1] = uStack_90;
  puStack_e8 = &uStack_30;
  uStack_f0 = uVar49;
  FUN_715d33c8(&DAT_700824e6,&uStack_34,(int)uVar50,(int)((ulonglong)uVar50 >> 0x20));
  FUN_715d33c8(&DAT_700824f8,&uStack_34,&uStack_30);
  puVar46[2] = uStack_30;
  uVar15 = FUN_71351810();
  puVar46[0x23] = uVar15;
  puVar46[1] = uVar15;
  *(char *)((int)puVar46 + 0x52) = (char)uVar10;
  thunk_FUN_715ec34c(uVar10,uVar15);
  FUN_715d33c8(&DAT_700824c2,puVar46[2],1);
  auStack_f8[0] = 1;
  auStack_f8[1] = 0;
  uStack_f0._0_4_ = 0;
  FUN_715d33c8(&DAT_7008250a,puVar46[2],0,0);
  FUN_715d33c8(&DAT_700824d4,puVar46[2],0);
  FUN_715d33c8(&DAT_7008251c,puVar46[2],1);
  if (DAT_711f6d58 != 0) {
    uVar15 = *(undefined4 *)(DAT_711f6d58 + 0x404);
    FUN_715d33c8(&DAT_7008262a,puVar46[2],0);
    FUN_715d33c8(&DAT_7008262a,puVar46[2],uVar15);
  }
  FUN_7156952c(DAT_711a3938,auStack_2c);
  FUN_715be6fc(puVar46,auStack_2c[0],1);
  if ((puVar46[0x23] != 0) && (iVar37 = FUN_71351810(puVar46[2]), iVar37 != 0)) {
    uVar15 = FUN_715ec544(param_7);
    *(undefined4 *)(puVar46[0x23] + 0x55c) = uVar15;
    uVar15 = FUN_715ec544(param_7);
    *(undefined4 *)(puVar46[0x23] + 0x560) = uVar15;
    uVar49 = FUN_71ba1638(param_7);
    FUN_715d33c8(&DAT_70082618,puVar46[2],(int)uVar49,(int)((ulonglong)uVar49 >> 0x20));
  }
  thunk_FUN_715600f0(puVar46,&iStack_74);
  uStack_cc = FUN_71ba0b38(param_6,0x3e19999a);
  puVar30 = puStack_88;
  puVar46 = puStack_ac;
  puStack_88[1] = param_5;
  puStack_88[2] = uStack_cc;
  piStack_84 = (int *)iStack_74;
  puStack_88 = (uint *)uStack_70;
  auStack_e4[3] = uStack_48;
  *puVar30 = uStack_7c;
  uStack_d4 = uStack_7c;
  auStack_f8[1] = uStack_64;
  uStack_f0._0_4_ = uStack_60;
  uStack_d0 = param_5;
  uStack_c8 = uStack_38;
  uStack_f0._4_4_ = uStack_5c;
  puStack_e8 = (undefined4 *)uStack_58;
  auStack_e4[0] = uStack_54;
  auStack_f8[0] = uStack_68;
  auStack_e4[1] = uStack_50;
  auStack_e4[2] = uStack_4c;
  FUN_7156063c(puStack_ac,iStack_74,uStack_70,uStack_6c);
  FUN_715631e8(DAT_711a3938,(int)*(short *)(puVar46[0x23] + 0x26));
  puVar46[0x3b] = 0;
  puVar46[0x3c] = 0;
  *puStack_80 = 0;
  puStack_80[1] = 0;
  puVar46[0x3d] = 0;
  puVar46[0x34] = 0;
  puVar46[0x35] = 0;
  puVar46[0x36] = 0;
  puVar46[0x37] = 0;
  puVar46[0x38] = 0;
  while( true ) {
    uVar10 = *puVar43 ^ 0x6a4dab1f;
    uVar19 = uVar10 | puVar43[1] ^ 0x679b29b;
    bVar48 = uVar19 == 0;
    if (bVar48) {
      uVar19 = puVar43[3] ^ 0xfcc126c8;
      uVar10 = puVar43[2] ^ 0x6efdd0cf;
    }
    if ((bVar48 && (uVar10 == 0 && uVar19 == 0)) &&
       (puVar43[4] == 0xbefc55d6 && puVar43[5] == 0x370f3a77)) break;
    puVar43 = puVar43 + 1;
  }
  uVar10 = puVar43[0xc017];
  if (uVar10 != 0) {
    piVar20 = (int *)(uVar10 + 4);
    piVar12 = (int *)*piVar20;
    piVar13 = piVar20;
    piVar11 = piVar20;
    if (piVar12 != (int *)0x0) {
      do {
        piVar14 = piVar12;
        if ((uint *)piVar12[4] < puStack_78) {
          piVar12 = piVar12 + 1;
          piVar14 = piVar13;
        }
        piVar12 = (int *)*piVar12;
        piVar13 = piVar14;
      } while (piVar12 != (int *)0x0);
      if ((piVar14 != piVar20) && (piVar11 = piVar14, puStack_78 < (uint *)piVar14[4])) {
        piVar11 = piVar20;
      }
    }
    if (piVar20 != piVar11) {
      *puStack_78 = 0x3f800000;
      piVar13 = *(int **)(puVar43[0xc017] + 4);
joined_r0x715bd148:
      if (piVar13 != (int *)0x0) {
        while (puStack_78 < (uint *)piVar13[4]) {
          piVar13 = (int *)*piVar13;
          if (piVar13 == (int *)0x0) goto LAB_715bd17c;
        }
        if ((uint *)piVar13[4] < puStack_78) goto code_r0x715bd170;
        uVar19 = piVar13[6];
        puVar43 = (uint *)piVar13[5];
        uVar10 = 0x56d677d6;
        piStack_bc = piVar13;
        iVar37 = 0x27d4eb7f;
        if (0x1f < uVar19) {
          piStack_84 = (int *)0x50;
          puStack_80 = (undefined4 *)0x40801011;
          puStack_88 = (uint *)0xee40c5e7;
          uVar42 = 0x60ea283e;
          uStack_7c = 0x61c8869e;
          iVar37 = 0;
          puStack_78 = (uint *)0xba94458a;
          uStack_90 = 0xc2b2ae8d;
          uStack_8c = 0x6854fb60;
          uStack_c4 = uVar19;
          puStack_c0 = puVar43;
          puVar30 = puVar43;
          uVar10 = uVar19;
          do {
            iStack_94 = iVar37;
            uStack_98 = uVar42;
            lVar2 = (ulonglong)puVar30[6] * 0x27d4eb4f;
            uVar45 = (uint)lVar2;
            pbVar31 = (byte *)(uVar45 + (int)puStack_78);
            uVar36 = puVar30[7] * 0x27d4eb4f +
                     puVar30[6] * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + uStack_7c +
                     (uint)CARRY4(uVar45,(uint)puStack_78);
            uVar45 = uVar36 >> 1;
            uStack_9c = (int)pbVar31 * -0x80000000 | uVar45;
            uVar24 = (uint)pbVar31 >> 1;
            uStack_a0 = uVar36 * -0x80000000 | uVar24;
            puStack_78 = (uint *)((ulonglong)uStack_9c * 0x85ebca87);
            uStack_7c = uStack_a0 * -0x7a143579 +
                        uStack_9c * -0x61c8864f + (int)((ulonglong)uStack_9c * 0x85ebca87 >> 0x20);
            lVar2 = (ulonglong)puVar30[4] * 0x27d4eb4f;
            uVar36 = (uint)lVar2;
            uVar40 = uVar36 + (int)puStack_80;
            uVar39 = puVar30[5] * 0x27d4eb4f +
                     puVar30[4] * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + (int)piStack_84 +
                     (uint)CARRY4(uVar36,(uint)puStack_80);
            uVar36 = uVar39 >> 1;
            uStack_a4 = uVar40 * -0x80000000 | uVar36;
            uVar40 = uVar40 >> 1;
            uStack_a8 = uVar39 * -0x80000000 | uVar40;
            puStack_80 = (undefined4 *)((ulonglong)uStack_a4 * 0x85ebca87);
            puVar33 = puVar30 + 3;
            puVar29 = puVar30 + 1;
            piStack_84 = (int *)(uStack_a8 * -0x7a143579 +
                                uStack_a4 * -0x61c8864f +
                                (int)((ulonglong)uStack_a4 * 0x85ebca87 >> 0x20));
            uVar34 = *puVar30;
            puVar1 = puVar30 + 2;
            puVar30 = puVar30 + 8;
            lVar2 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar39 = (uint)lVar2;
            uVar21 = uVar39 + uStack_8c;
            uVar16 = *puVar33 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20)
                     + uStack_90 + (uint)CARRY4(uVar39,uStack_8c);
            uVar39 = uVar16 >> 1;
            uVar32 = uVar21 * -0x80000000 | uVar39;
            uVar21 = uVar21 >> 1;
            uVar17 = uVar16 * -0x80000000 | uVar21;
            uStack_8c = (uint)((ulonglong)uVar32 * 0x85ebca87);
            uStack_90 = uVar17 * -0x7a143579 +
                        uVar32 * -0x61c8864f + (int)((ulonglong)uVar32 * 0x85ebca87 >> 0x20);
            lVar2 = (ulonglong)uVar34 * 0x27d4eb4f;
            uVar16 = (uint)lVar2;
            uVar22 = uVar16 + (int)puStack_88;
            uVar42 = *puVar29 * 0x27d4eb4f + uVar34 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20)
                     + uVar42 + (uint)CARRY4(uVar16,(uint)puStack_88);
            bVar48 = uVar10 < 0x20;
            uVar10 = uVar10 - 0x20;
            iVar37 = iVar37 - (uint)bVar48;
            uVar16 = uVar42 >> 1;
            uVar38 = uVar22 * -0x80000000 | uVar16;
            uVar22 = uVar22 >> 1;
            uVar34 = uVar42 * -0x80000000 | uVar22;
            puStack_88 = (uint *)((ulonglong)uVar38 * 0x85ebca87);
            uVar42 = uVar34 * -0x7a143579 +
                     uVar38 * -0x61c8864f + (int)((ulonglong)uVar38 * 0x85ebca87 >> 0x20);
          } while ((uint)(uVar10 < 0x20) <= (uint)-iVar37);
          uVar10 = (int)puStack_88 << 1 | uVar42 >> 0x1f;
          uVar25 = uStack_8c << 7 | uStack_90 >> 0x19;
          uVar44 = uVar25 + uVar10;
          uVar23 = (int)puStack_80 << 0xc | (uint)piStack_84 >> 0x14;
          uVar35 = uVar44 + uVar23;
          puStack_80 = (undefined4 *)
                       ((uStack_90 * 0x80 | uStack_8c >> 0x19) +
                        (uVar42 * 2 | (uint)puStack_88 >> 0x1f) + (uint)CARRY4(uVar25,uVar10) +
                        ((int)piStack_84 * 0x1000 | (uint)puStack_80 >> 0x14) +
                       (uint)CARRY4(uVar44,uVar23));
          piStack_84 = (int *)((ulonglong)uVar38 * 0x80000000 >> 0x20);
          uVar47 = (uint)((ulonglong)uVar38 * 0x80000000) |
                   uVar34 * 0xf796ca9 +
                   uVar38 * -0x210ca4ff + (int)((ulonglong)uVar38 * 0xf796ca9 >> 0x20) >> 1;
          lVar2 = (ulonglong)uVar47 * 0x85ebca87;
          uStack_8c = (uint)((ulonglong)lVar2 >> 0x20);
          uVar42 = (int)puStack_78 << 0x12 | uStack_7c >> 0xe;
          uVar34 = uVar35 + uVar42 ^ (uint)lVar2;
          lVar2 = (ulonglong)uVar34 * 0x85ebca87;
          puStack_88 = (uint *)lVar2;
          uVar41 = (uint)((ulonglong)uVar32 * 0x80000000) |
                   uVar17 * 0xf796ca9 +
                   uVar32 * -0x210ca4ff + (int)((ulonglong)uVar32 * 0xf796ca9 >> 0x20) >> 1;
          lVar3 = (ulonglong)uVar41 * 0x85ebca87;
          uVar17 = (int)puStack_88 + 0xc2b2ae63U ^ (uint)lVar3;
          lVar4 = (ulonglong)uVar17 * 0x85ebca87;
          uVar25 = (uint)lVar4;
          uVar44 = (uint)((ulonglong)uStack_a4 * 0x80000000) |
                   uStack_a8 * 0xf796ca9 +
                   uStack_a4 * -0x210ca4ff + (int)((ulonglong)uStack_a4 * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar44 * 0x85ebca87;
          uVar38 = uVar25 + 0xc2b2ae63 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar38 * 0x85ebca87;
          uVar26 = (uint)lVar6;
          uVar27 = (uint)((ulonglong)uStack_9c * 0x80000000) |
                   uStack_a0 * 0xf796ca9 +
                   uStack_9c * -0x210ca4ff + (int)((ulonglong)uStack_9c * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar27 * 0x85ebca87;
          uVar23 = uVar26 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar23 * 0x85ebca87;
          uVar28 = (uint)lVar8;
          uVar10 = uVar28 + 0xc2b2ae63;
          iVar37 = (((((int)puStack_80 +
                       (uint)CARRY4(uVar35,uVar42) + (uStack_7c * 0x40000 | (uint)puStack_78 >> 0xe)
                      ^ (uVar22 * -0x80000000 + uVar16 * -0x784349ac + (int)piStack_84) *
                        -0x7a143579 + uVar47 * -0x61c8864f + uStack_8c) * -0x7a143579 +
                      uVar34 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < puStack_88) ^
                     (uVar21 * -0x80000000 +
                     uVar39 * -0x784349ac + (int)((ulonglong)uVar32 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20)) *
                     -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar25) ^
                    (uVar40 * -0x80000000 +
                    uVar36 * -0x784349ac + (int)((ulonglong)uStack_a4 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar44 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                    -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar26) ^
                   (uVar24 * -0x80000000 +
                   uVar45 * -0x784349ac + (int)((ulonglong)uStack_9c * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar27 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                   -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar28);
        }
        uVar42 = uVar10 + uVar19;
        puVar43 = (uint *)((int)puVar43 + (uVar19 & 0xffffffe0));
        uVar10 = iVar37 + (uint)CARRY4(uVar10,uVar19);
        puVar30 = (uint *)(uVar19 & 0x1f);
        for (uVar19 = 0; uVar19 != 0 || uVar19 < (&DAT_00000007 < puVar30);
            uVar19 = (uVar19 - 1) + (uint)bVar48) {
          uVar45 = *puVar43;
          puStack_78 = puVar30;
          uVar36 = (uint)((ulonglong)uVar45 * 0x80000000) |
                   puVar43[1] * 0x27d4eb4f +
                   uVar45 * -0x3d4d51c3 + (int)((ulonglong)uVar45 * 0x27d4eb4f >> 0x20) >> 1;
          lVar2 = (ulonglong)uVar36 * 0x85ebca87;
          uVar24 = (uint)lVar2 ^ uVar42;
          uVar10 = (puVar43[1] * -0x80000000 +
                   uVar45 * -0x6c158a59 + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
          uVar36 = uVar24 << 0x1b | uVar10 >> 5;
          lVar2 = (ulonglong)uVar36 * 0x85ebca87;
          uVar45 = (uint)lVar2;
          uVar42 = uVar45 + 0xc2b2ae63;
          iVar37 = 8;
          uVar40 = 0xfffffff8;
          uVar10 = (uVar10 << 0x1b | uVar24 >> 5) * -0x7a143579 +
                   uVar36 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
                   (uint)(0x3d4d519c < uVar45);
LAB_715bd710:
          bVar48 = CARRY4(uVar40,(uint)puVar30);
          puVar30 = (uint *)(uVar40 + (int)puVar30);
          puVar43 = (uint *)((int)puVar43 + iVar37);
        }
        if (uVar19 != 0 || uVar19 < ((uint *)0x3 < puVar30)) {
          lVar2 = (ulonglong)*puVar43 * 0x85ebca87;
          uVar45 = (uint)lVar2 ^ uVar42;
          uVar10 = *puVar43 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
          uVar36 = uVar45 << 0x17 | uVar10 >> 9;
          lVar2 = (ulonglong)uVar36 * 0x27d4eb4f;
          uVar24 = (uint)lVar2;
          uVar42 = uVar24 + 0x9e3779f9;
          iVar37 = 4;
          uVar10 = (uVar10 << 0x17 | uVar45 >> 9) * 0x27d4eb4f +
                   uVar36 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + 0x165667b1 +
                   (uint)(0x61c88606 < uVar24);
          uVar40 = 0xfffffffc;
          goto LAB_715bd710;
        }
        if (puVar30 != (uint *)0x0 || uVar19 != 0) {
          lVar2 = (ulonglong)(uint)(byte)*puVar43 * 0x165667c5;
          uVar45 = (uint)lVar2 ^ uVar42;
          uVar10 = (uint)(byte)*puVar43 * 0x27d4eb2f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
          uVar24 = uVar45 << 0xb | uVar10 >> 0x15;
          lVar2 = (ulonglong)uVar24 * 0x85ebca87;
          uVar42 = (uint)lVar2;
          iVar37 = 1;
          uVar10 = (uVar10 << 0xb | uVar45 >> 0x15) * -0x7a143579 +
                   uVar24 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20);
          uVar40 = 0xffffffff;
          goto LAB_715bd710;
        }
        uVar42 = uVar42 ^ uVar10 >> 1;
        lVar2 = (ulonglong)uVar42 * 0x27d4eb4f;
        uVar19 = (uint)lVar2;
        uVar10 = uVar10 * 0x27d4eb4f + uVar42 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20);
        uVar19 = (uVar19 >> 0x1d | uVar10 * 8) ^ uVar19;
        lVar2 = (ulonglong)uVar19 * 0x9e3779f9;
        uVar10 = (uVar10 ^ uVar10 >> 0x1d) * -0x61c88607 +
                 uVar19 * 0x165667b1 + (int)((ulonglong)lVar2 >> 0x20);
        piVar13[8] = uVar10;
        piVar13[7] = uVar10 ^ (uint)lVar2;
        puVar46 = puStack_ac;
        goto LAB_715bd8a4;
      }
      goto LAB_715bd17c;
    }
  }
LAB_715bd8a4:
  while( true ) {
    uVar10 = *puVar18 ^ 0x6a4dab1f;
    uVar19 = uVar10 | puVar18[1] ^ 0x679b29b;
    bVar48 = uVar19 == 0;
    if (bVar48) {
      uVar19 = puVar18[3] ^ 0xfcc126c8;
      uVar10 = puVar18[2] ^ 0x6efdd0cf;
    }
    if ((bVar48 && (uVar10 == 0 && uVar19 == 0)) &&
       (piVar13 = (int *)0xbefc55d6, puVar18[4] == 0xbefc55d6 && puVar18[5] == 0x370f3a77)) break;
    puVar18 = puVar18 + 1;
  }
  piVar11 = (int *)puVar18[0xc017];
  bVar48 = piVar11 != (int *)0x0;
  if (bVar48) {
    piVar11 = piVar11 + 1;
    piVar13 = (int *)*piVar11;
  }
  piVar20 = piVar11;
  if (bVar48 && piVar13 != (int *)0x0) {
    do {
      piVar12 = piVar13;
      if ((uint *)piVar13[4] < puStack_b0) {
        piVar13 = piVar13 + 1;
        piVar12 = piVar20;
      }
      piVar13 = (int *)*piVar13;
      piVar20 = piVar12;
    } while (piVar13 != (int *)0x0);
    if ((piVar12 != piVar11) && ((uint *)piVar12[4] <= puStack_b0)) {
      *puStack_b0 = 0x3f800000;
      for (piVar13 = *(int **)(puVar18[0xc017] + 4); piVar13 != (int *)0x0;
          piVar13 = (int *)*piVar13) {
        while ((uint *)piVar13[4] <= puStack_b0) {
          if (puStack_b0 <= (uint *)piVar13[4]) {
            uVar10 = piVar13[6];
            puVar43 = (uint *)piVar13[5];
            if (0x1f < uVar10) {
              piStack_84 = (int *)0x50;
              puStack_80 = (undefined4 *)0x40801011;
              puStack_88 = (uint *)0xee40c5e7;
              uStack_7c = 0x61c8869e;
              puStack_78 = (uint *)0xba94458a;
              uStack_90 = 0xc2b2ae8d;
              uStack_8c = 0x6854fb60;
              iVar37 = 0;
              puVar18 = puVar43;
              uVar19 = 0x60ea283e;
              uVar42 = uVar10;
              do {
                uStack_98 = uVar19;
                iStack_94 = iVar37;
                lVar2 = (ulonglong)puVar18[6] * 0x27d4eb4f;
                uVar19 = (uint)lVar2;
                uVar24 = uVar19 + (int)puStack_78;
                uVar19 = puVar18[7] * 0x27d4eb4f +
                         puVar18[6] * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + uStack_7c +
                         (uint)CARRY4(uVar19,(uint)puStack_78);
                uVar45 = uVar19 >> 1;
                uStack_9c = uVar24 * -0x80000000 | uVar45;
                puStack_78 = (uint *)((ulonglong)uStack_9c * 0x85ebca87);
                uVar24 = uVar24 >> 1;
                uStack_a0 = uVar19 * -0x80000000 | uVar24;
                uStack_7c = uStack_a0 * -0x7a143579 +
                            uStack_9c * -0x61c8864f +
                            (int)((ulonglong)uStack_9c * 0x85ebca87 >> 0x20);
                lVar2 = (ulonglong)puVar18[4] * 0x27d4eb4f;
                uVar19 = (uint)lVar2;
                uVar40 = uVar19 + (int)puStack_80;
                uVar19 = puVar18[5] * 0x27d4eb4f +
                         puVar18[4] * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) +
                         (int)piStack_84 + (uint)CARRY4(uVar19,(uint)puStack_80);
                uVar36 = uVar19 >> 1;
                uStack_a4 = uVar40 * -0x80000000 | uVar36;
                puStack_80 = (undefined4 *)((ulonglong)uStack_a4 * 0x85ebca87);
                uVar40 = uVar40 >> 1;
                uStack_a8 = uVar19 * -0x80000000 | uVar40;
                puVar30 = puVar18 + 2;
                piStack_84 = (int *)(uStack_a8 * -0x7a143579 +
                                    uStack_a4 * -0x61c8864f +
                                    (int)((ulonglong)uStack_a4 * 0x85ebca87 >> 0x20));
                uVar16 = *puVar18;
                lVar2 = (ulonglong)*puVar30 * 0x27d4eb4f;
                uVar19 = (uint)lVar2;
                puVar33 = puVar18 + 1;
                puVar29 = puVar18 + 3;
                puVar18 = puVar18 + 8;
                uVar21 = uVar19 + uStack_8c;
                uVar19 = *puVar29 * 0x27d4eb4f +
                         *puVar30 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + uStack_90 +
                         (uint)CARRY4(uVar19,uStack_8c);
                uVar39 = uVar19 >> 1;
                puStack_b0 = (uint *)(uVar21 * -0x80000000 | uVar39);
                uStack_8c = (uint)(ZEXT48(puStack_b0) * 0x85ebca87);
                uVar21 = uVar21 >> 1;
                uVar34 = uVar19 * -0x80000000 | uVar21;
                uStack_90 = uVar34 * -0x7a143579 +
                            (int)puStack_b0 * -0x61c8864f +
                            (int)(ZEXT48(puStack_b0) * 0x85ebca87 >> 0x20);
                lVar2 = (ulonglong)uVar16 * 0x27d4eb4f;
                uVar19 = (uint)lVar2;
                uVar22 = uVar19 + (int)puStack_88;
                uVar19 = *puVar33 * 0x27d4eb4f +
                         uVar16 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + uStack_98 +
                         (uint)CARRY4(uVar19,(uint)puStack_88);
                bVar48 = uVar42 < 0x20;
                uVar42 = uVar42 - 0x20;
                uVar16 = uVar19 >> 1;
                uVar17 = uVar22 * -0x80000000 | uVar16;
                puStack_88 = (uint *)((ulonglong)uVar17 * 0x85ebca87);
                uVar22 = uVar22 >> 1;
                uVar32 = uVar19 * -0x80000000 | uVar22;
                uVar19 = uVar32 * -0x7a143579 +
                         uVar17 * -0x61c8864f + (int)((ulonglong)uVar17 * 0x85ebca87 >> 0x20);
                iVar37 = iStack_94 - (uint)bVar48;
              } while ((uint)(uVar42 < 0x20) <= (uint)-iVar37);
              uVar42 = (int)puStack_88 << 1 | uVar19 >> 0x1f;
              uVar23 = uStack_8c << 7 | uStack_90 >> 0x19;
              uVar38 = uVar23 + uVar42;
              uVar25 = (int)puStack_80 << 0xc | (uint)piStack_84 >> 0x14;
              uVar35 = uVar38 + uVar25;
              puStack_80 = (undefined4 *)
                           ((uStack_90 * 0x80 | uStack_8c >> 0x19) +
                            (uVar19 * 2 | (uint)puStack_88 >> 0x1f) + (uint)CARRY4(uVar23,uVar42) +
                            ((int)piStack_84 * 0x1000 | (uint)puStack_80 >> 0x14) +
                           (uint)CARRY4(uVar38,uVar25));
              piStack_84 = (int *)((ulonglong)uVar17 * 0x80000000 >> 0x20);
              uVar19 = (int)puStack_78 << 0x12 | uStack_7c >> 0xe;
              uVar28 = (uint)((ulonglong)uVar17 * 0x80000000) |
                       uVar32 * 0xf796ca9 +
                       uVar17 * -0x210ca4ff + (int)((ulonglong)uVar17 * 0xf796ca9 >> 0x20) >> 1;
              lVar2 = (ulonglong)uVar28 * 0x85ebca87;
              uVar42 = uVar35 + uVar19 ^ (uint)lVar2;
              lVar3 = (ulonglong)uVar42 * 0x85ebca87;
              uVar41 = (uint)lVar3;
              uVar38 = (uint)(ZEXT48(puStack_b0) * 0x80000000) |
                       uVar34 * 0xf796ca9 +
                       (int)puStack_b0 * -0x210ca4ff + (int)(ZEXT48(puStack_b0) * 0xf796ca9 >> 0x20)
                       >> 1;
              lVar4 = (ulonglong)uVar38 * 0x85ebca87;
              uVar17 = uVar41 + 0xc2b2ae63 ^ (uint)lVar4;
              lVar5 = (ulonglong)uVar17 * 0x85ebca87;
              uVar23 = (uint)lVar5;
              uVar25 = (uint)((ulonglong)uStack_a4 * 0x80000000) |
                       uStack_a8 * 0xf796ca9 +
                       uStack_a4 * -0x210ca4ff + (int)((ulonglong)uStack_a4 * 0xf796ca9 >> 0x20) >>
                       1;
              lVar6 = (ulonglong)uVar25 * 0x85ebca87;
              uVar32 = uVar23 + 0xc2b2ae63 ^ (uint)lVar6;
              lVar7 = (ulonglong)uVar32 * 0x85ebca87;
              uVar44 = (uint)lVar7;
              uVar26 = (uint)((ulonglong)uStack_9c * 0x80000000) |
                       uStack_a0 * 0xf796ca9 +
                       uStack_9c * -0x210ca4ff + (int)((ulonglong)uStack_9c * 0xf796ca9 >> 0x20) >>
                       1;
              lVar8 = (ulonglong)uVar26 * 0x85ebca87;
              uVar34 = uVar44 + 0xc2b2ae63 ^ (uint)lVar8;
              lVar9 = (ulonglong)uVar34 * 0x85ebca87;
              uVar27 = (uint)lVar9;
              uStack_b4 = uVar27 + 0xc2b2ae63;
              iStack_b8 = (((((int)puStack_80 +
                              (uint)CARRY4(uVar35,uVar19) +
                              (uStack_7c * 0x40000 | (uint)puStack_78 >> 0xe) ^
                             (uVar22 * -0x80000000 + uVar16 * -0x784349ac + (int)piStack_84) *
                             -0x7a143579 + uVar28 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20)) *
                             -0x7a143579 + uVar42 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) +
                             -0x7a143589 + (uint)(0x3d4d519c < uVar41) ^
                            (uVar21 * -0x80000000 +
                            uVar39 * -0x784349ac + (int)(ZEXT48(puStack_b0) * 0x80000000 >> 0x20)) *
                            -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar4 >> 0x20)) *
                            -0x7a143579 + uVar17 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) +
                            -0x7a143589 + (uint)(0x3d4d519c < uVar23) ^
                           (uVar40 * -0x80000000 +
                           uVar36 * -0x784349ac + (int)((ulonglong)uStack_a4 * 0x80000000 >> 0x20))
                           * -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20)) *
                           -0x7a143579 + uVar32 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) +
                           -0x7a143589 + (uint)(0x3d4d519c < uVar44) ^
                          (uVar24 * -0x80000000 +
                          uVar45 * -0x784349ac + (int)((ulonglong)uStack_9c * 0x80000000 >> 0x20)) *
                          -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20)) *
                          -0x7a143579 + uVar34 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20) +
                          -0x7a143589 + (uint)(0x3d4d519c < uVar27);
              uStack_c4 = uVar10;
              puStack_c0 = puVar43;
            }
            uVar42 = uVar10 & 0x1f;
            puStack_78 = (uint *)(uStack_b4 + uVar10);
            uVar19 = 0;
            puVar43 = (uint *)((int)puVar43 + (uVar10 & 0xffffffe0));
            uVar10 = iStack_b8 + (uint)CARRY4(uStack_b4,uVar10);
            do {
              if (uVar19 == 0 && (7 < uVar42) <= uVar19) {
                if (uVar19 == 0 && (3 < uVar42) <= uVar19) {
                  if (uVar42 == 0 && uVar19 == 0) {
                    uVar19 = (uint)puStack_78 ^ uVar10 >> 1;
                    lVar2 = (ulonglong)uVar19 * 0x27d4eb4f;
                    uVar42 = (uint)lVar2;
                    uVar10 = uVar10 * 0x27d4eb4f +
                             uVar19 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20);
                    uVar42 = (uVar42 >> 0x1d | uVar10 * 8) ^ uVar42;
                    lVar2 = (ulonglong)uVar42 * 0x9e3779f9;
                    uVar10 = (uVar10 ^ uVar10 >> 0x1d) * -0x61c88607 +
                             uVar42 * 0x165667b1 + (int)((ulonglong)lVar2 >> 0x20);
                    piVar13[8] = uVar10;
                    piVar13[7] = uVar10 ^ (uint)lVar2;
                    puVar46 = puStack_ac;
                    piStack_bc = piVar13;
                    goto LAB_715bd908;
                  }
                  lVar2 = (ulonglong)(uint)(byte)*puVar43 * 0x165667c5;
                  uVar45 = (uint)lVar2 ^ (uint)puStack_78;
                  uVar10 = (uint)(byte)*puVar43 * 0x27d4eb2f + (int)((ulonglong)lVar2 >> 0x20) ^
                           uVar10;
                  uVar24 = uVar45 << 0xb | uVar10 >> 0x15;
                  lVar2 = (ulonglong)uVar24 * 0x85ebca87;
                  puStack_78 = (uint *)lVar2;
                  iVar37 = 1;
                  uVar45 = (uVar10 << 0xb | uVar45 >> 0x15) * -0x7a143579 +
                           uVar24 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20);
                  uVar36 = 0xffffffff;
                }
                else {
                  lVar2 = (ulonglong)*puVar43 * 0x85ebca87;
                  uVar45 = (uint)lVar2 ^ (uint)puStack_78;
                  uVar10 = *puVar43 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^ uVar10;
                  uVar36 = uVar45 << 0x17 | uVar10 >> 9;
                  lVar2 = (ulonglong)uVar36 * 0x27d4eb4f;
                  uVar24 = (uint)lVar2;
                  puStack_78 = (uint *)(uVar24 + 0x9e3779f9);
                  iVar37 = 4;
                  uVar45 = (uVar10 << 0x17 | uVar45 >> 9) * 0x27d4eb4f +
                           uVar36 * -0x3d4d51c3 + (int)((ulonglong)lVar2 >> 0x20) + 0x165667b1 +
                           (uint)(0x61c88606 < uVar24);
                  uVar36 = 0xfffffffc;
                }
              }
              else {
                uVar45 = *puVar43;
                uVar24 = (uint)((ulonglong)uVar45 * 0x80000000) |
                         puVar43[1] * 0x27d4eb4f +
                         uVar45 * -0x3d4d51c3 + (int)((ulonglong)uVar45 * 0x27d4eb4f >> 0x20) >> 1;
                lVar2 = (ulonglong)uVar24 * 0x85ebca87;
                uVar36 = 0xfffffff8;
                uVar45 = (puVar43[1] * -0x80000000 +
                         uVar45 * -0x6c158a59 + (int)((ulonglong)uVar45 * 0x80000000 >> 0x20)) *
                         -0x7a143579 + uVar24 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) ^
                         uVar10;
                uVar24 = (uint)lVar2 ^ (uint)puStack_78;
                uVar39 = uVar24 << 0x1b | uVar45 >> 5;
                lVar2 = (ulonglong)uVar39 * 0x85ebca87;
                uVar40 = (uint)lVar2;
                puStack_78 = (uint *)(uVar40 + 0xc2b2ae63);
                iVar37 = 8;
                uVar45 = (uVar45 << 0x1b | uVar24 >> 5) * -0x7a143579 +
                         uVar39 * -0x61c8864f + (int)((ulonglong)lVar2 >> 0x20) + -0x7a143589 +
                         (uint)(0x3d4d519c < uVar40);
                uStack_7c = uVar10;
              }
              bVar48 = CARRY4(uVar36,uVar42);
              uVar42 = uVar36 + uVar42;
              puVar43 = (uint *)((int)puVar43 + iVar37);
              uVar19 = (uVar19 - 1) + (uint)bVar48;
              uVar10 = uVar45;
            } while( true );
          }
          piVar13 = (int *)piVar13[1];
          if (piVar13 == (int *)0x0) goto LAB_715bd17c;
        }
      }
LAB_715bd17c:
      FUN_712f6bb0(s_map__at__key_not_found_700619a7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
LAB_715bd908:
  *(undefined1 *)(puVar46 + 0x20) = 1;
  *(undefined1 *)(puVar46 + 0x5e) = 0;
  puVar46[0x5c] = 0;
  puVar46[0x5d] = 0;
  *(undefined1 *)(puVar46 + 0x24) = 0;
  thunk_MwhHq(0x178);
  uVar15 = FUN_71519cc0();
  puVar46[0x41] = uVar15;
  *(undefined1 *)((int)puVar46 + 0x179) = 0;
  puVar46[0x42] = 0;
  iVar37 = (short)(ushort)*(byte *)((int)puVar46 + 0x52) * 0x1d;
  *(undefined4 *)(&DAT_711f5195 + iVar37) = 0;
  (&DAT_711f51b1)[iVar37] = 0;
  *(undefined4 *)(&DAT_711f51ad + iVar37) = 0;
  *(undefined4 *)(&DAT_711f51a9 + iVar37) = 0;
  *(undefined4 *)(&DAT_711f51a5 + iVar37) = 0;
  *(undefined4 *)(&DAT_711f51a1 + iVar37) = 0;
  *(undefined4 *)(&DAT_711f519d + iVar37) = 0;
  *(undefined4 *)(&DAT_711f5199 + iVar37) = 0;
  return puVar46;
}


// =========================================================================
// Function: FUN_715be6fc
// Entry: 0x715be6fc | Size: 28 bytes
// =========================================================================

void FUN_715be6fc(int param_1,int param_2,undefined4 param_3)

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
  byte bVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_64 [48];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar16 = param_2;
  if (param_2 == 0x4a) {
    iVar16 = 1;
  }
  if (param_2 == 0) {
    iVar16 = 1;
  }
  iVar6 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar6 != 0) {
    iVar6 = FUN_715ec150(iVar16);
    if (iVar6 == 0) {
      pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44c8);
      if (*pcVar7 == '\0') {
        puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44b8);
        *(undefined1 *)((int)puVar8 + 0x1e) = 1;
        uVar4 = DAT_70082890;
        uVar3 = DAT_7008288c;
        *puVar8 = DAT_70082888;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        uVar5 = DAT_700828a0;
        uVar4 = DAT_7008289c;
        uVar3 = DAT_70082898;
        puVar8[3] = DAT_70082894;
        puVar8[4] = uVar3;
        puVar8[5] = uVar4;
        puVar8[6] = uVar5;
        *(undefined2 *)(puVar8 + 7) = DAT_700828a4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1328,puVar8,&DAT_70b0e000);
        puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44c8);
        *puVar9 = 1;
      }
      iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44b8);
      if (*(char *)(iVar6 + 0x1e) != '\0') {
        uVar11 = 0;
        uVar15 = 0;
        do {
          iVar12 = (uVar11 & 7) * 8;
          bVar10 = (byte)(0x7b1ebd5 >> iVar12) |
                   (byte)(-0x66de5429 << ((uVar11 & 7) * -8 + 0x20 & 0xff));
          uVar14 = iVar12 - 0x20;
          if (-1 < (int)uVar14) {
            bVar10 = (byte)(0x9921abd7 >> (uVar14 & 0xff));
          }
          *(byte *)(iVar6 + uVar11) = *(byte *)(iVar6 + uVar11) ^ bVar10;
          bVar17 = 0xfffffffe < uVar11;
          bVar1 = uVar15 == 0;
          bVar2 = (0x1c < uVar11) <= uVar15;
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + bVar17;
        } while (bVar1 && bVar2);
        *(undefined1 *)(iVar6 + 0x1e) = 0;
      }
      FUN_716486e8(iVar6,iVar16);
      iVar16 = 7;
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      return;
    }
    thunk_FUN_715600f0(param_1,auStack_64);
    FUN_715601e8(param_1,uStack_34,uStack_30,uStack_2c);
    FUN_71560a24(param_1,iVar16,param_3);
    FUN_7131b36c(*(int *)(param_1 + 0x8c) + 0x298);
    if (DAT_711a3938 == 0) {
      return;
    }
    piVar13 = (int *)(DAT_711a3938 + 0x1389c);
    iVar16 = *piVar13;
    if (iVar16 == 0) {
      iVar16 = FUN_713c301c(0);
      if (iVar16 == 0) {
        if (*piVar13 != param_1) {
          return;
        }
        goto LAB_715be8a4;
      }
      thunk_MwhHq(0x3a0);
      iVar16 = FUN_715ba834();
      *piVar13 = iVar16;
    }
    if (iVar16 == param_1) {
LAB_715be8a4:
      FUN_714ebe70();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715bebf0
// Entry: 0x715bebf0 | Size: 24 bytes
// =========================================================================

void FUN_715bebf0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = FUN_715ec544(param_2);
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x55c) = uVar2;
    uVar2 = FUN_715ec544(param_2);
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x560) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = FUN_71ba1638(param_2);
    FUN_715d33c8(&DAT_70082618,uVar2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715bf128
// Entry: 0x715bf128 | Size: 32 bytes
// =========================================================================

void FUN_715bf128(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  FUN_71557078();
  while (*(int *)(param_1 + 0x9c) != 0) {
    FUN_715c5e54(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x10));
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    FUN_7144d7ac(DAT_70ffd280);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  iVar2 = (short)(ushort)*(byte *)(param_1 + 0x52) * 0x1d;
  *(undefined4 *)(&DAT_711f5195 + iVar2) = 0;
  (&DAT_711f51b1)[iVar2] = 0;
  *(undefined4 *)(&DAT_711f51ad + iVar2) = 0;
  *(undefined4 *)(&DAT_711f51a9 + iVar2) = 0;
  *(undefined4 *)(&DAT_711f51a5 + iVar2) = 0;
  *(undefined4 *)(&DAT_711f51a1 + iVar2) = 0;
  *(undefined4 *)(&DAT_711f519d + iVar2) = 0;
  *(undefined4 *)(&DAT_711f5199 + iVar2) = 0;
  thunk_FUN_715ec34c(*(undefined1 *)(param_1 + 0x52),0);
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar2 != 0)) {
    iVar3 = *(int *)(param_1 + 0x8c);
    iVar2 = 0;
    if ((iVar3 != 0) && (iVar2 = iVar3, (*(byte *)(iVar3 + 0x485) & 1) != 0)) {
      iVar3 = FUN_71351810(*(undefined4 *)(param_1 + 8));
      iVar2 = *(int *)(param_1 + 0x8c);
      if (iVar3 != 0 && *(int *)(param_1 + 0x8c) != 0) {
        iVar3 = *(int *)(param_1 + 0x8c);
        iVar2 = 0;
        if ((iVar3 != 0) && (iVar2 = iVar3, (*(byte *)(iVar3 + 0x485) & 1) != 0)) {
          FUN_715d33c8(&DAT_70082540,*(undefined4 *)(param_1 + 8),0,0x40590000,0,0x40590000,0,
                       0x40240000);
          iVar2 = *(int *)(param_1 + 0x8c);
        }
      }
    }
    sVar1 = *(short *)(iVar2 + 0x26);
    FUN_71497640();
    FUN_71563244(DAT_711a3938,(int)sVar1);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      FUN_71519e58();
      thunk_qNQrlu();
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}


// =========================================================================
// Function: FUN_715bf554
// Entry: 0x715bf554 | Size: 24 bytes
// =========================================================================

void FUN_715bf554(int param_1)

{
  while (*(int *)(param_1 + 0x9c) != 0) {
    FUN_715c5e54(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + 0x10));
  }
  return;
}


// =========================================================================
// Function: FUN_715bf5cc
// Entry: 0x715bf5cc | Size: 56 bytes
// =========================================================================

void FUN_715bf5cc(int param_1)

{
  if (*(int *)(param_1 + 0x108) == 0) {
    return;
  }
  FUN_7144d7ac(DAT_70ffd280);
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}


// =========================================================================
// Function: thunk_FUN_715bf66c
// Entry: 0x715bf658 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715bf66c(void)

{
  FUN_715bf66c();
  return;
}


// =========================================================================
// Function: FUN_715bf66c
// Entry: 0x715bf66c | Size: 24 bytes
// =========================================================================

byte FUN_715bf66c(int param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x8c) + 0x485) & 1;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_715bf69c
// Entry: 0x715bf69c | Size: 28 bytes
// =========================================================================

void FUN_715bf69c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  if (iVar2 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
    bVar1 = 0;
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar3 + 0x485);
    }
    if (iVar3 != 0 && (bVar1 & 1) != 0) {
      uVar4 = FUN_71ba1638(param_3);
      uVar5 = FUN_71ba1638(param_4);
      uVar6 = FUN_71ba1638(param_2);
      FUN_715d33c8(&DAT_70082540,*(undefined4 *)(param_1 + 8),(int)uVar6,
                   (int)((ulonglong)uVar6 >> 0x20),uVar4,uVar5);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_7151dc0c
// Entry: 0x715bf830 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151dc0c(void)

{
  thunk_FUN_7151dc0c();
  return;
}


// =========================================================================
// Function: thunk_FUN_7151dc0c
// Entry: 0x715bf844 | Size: 4 bytes
// =========================================================================

void thunk_FUN_7151dc0c(void)

{
  FUN_7151dc0c();
  return;
}


// =========================================================================
// Function: thunk_FUN_715bf890
// Entry: 0x715bf87c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715bf890(void)

{
  FUN_715bf890();
  return;
}


// =========================================================================
// Function: FUN_715bf890
// Entry: 0x715bf890 | Size: 44 bytes
// =========================================================================

void FUN_715bf890(int param_1,undefined4 param_2)

{
  imp___aeabi_memcpy(&DAT_71174fd8 + (uint)*(byte *)(param_1 + 0x52) * 0x30,param_2,0x30);
  return;
}


// =========================================================================
// Function: thunk_FUN_7151dfd0
// Entry: 0x715bf8cc | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151dfd0(void)

{
  thunk_FUN_7151dfd0();
  return;
}


// =========================================================================
// Function: thunk_FUN_7151dfd0
// Entry: 0x715bf8e0 | Size: 4 bytes
// =========================================================================

void thunk_FUN_7151dfd0(void)

{
  thunk_FUN_7151dfd0();
  return;
}


// =========================================================================
// Function: FUN_715bf918
// Entry: 0x715bf918 | Size: 16 bytes
// =========================================================================

void FUN_715bf918(int param_1,undefined2 param_2)

{
  *(undefined2 *)(&DAT_71182b90 + (uint)*(byte *)(param_1 + 0x52) * 2) = param_2;
  return;
}


// =========================================================================
// Function: thunk_FUN_7151dd90
// Entry: 0x715bf970 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151dd90(void)

{
  thunk_FUN_7151dd90();
  return;
}


// =========================================================================
// Function: thunk_FUN_7151dd90
// Entry: 0x715bf984 | Size: 4 bytes
// =========================================================================

void thunk_FUN_7151dd90(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba0b38(*DAT_71180c24,0xc20c0000);
  FUN_71ba13e0(uVar1,0x420c0000);
  return;
}


// =========================================================================
// Function: FUN_715bf9bc
// Entry: 0x715bf9bc | Size: 1308 bytes
// =========================================================================

undefined4 FUN_715bf9bc(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 uVar19;
  ushort unaff_r8;
  undefined1 *puVar20;
  bool bVar21;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0;
  }
  iVar9 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar9 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x52) != '\0') {
    unaff_r8 = (ushort)(byte)*DAT_71180c18;
    uVar8 = FUN_7151df5c();
    *DAT_71180c18 = uVar8;
    FUN_7151dc64();
    FUN_7151de30(*(undefined1 *)(param_1 + 0x52));
    thunk_FUN_7151e3a8();
    FUN_7151e55c(*(undefined1 *)(param_1 + 0x52));
    thunk_FUN_7151e868();
    FUN_7151e770(*(undefined1 *)(param_1 + 0x52));
  }
  uVar17 = 0;
  DAT_711a3d00 = 0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    DAT_711a3d00 = param_1 + 0xa4;
  }
  iVar9 = *(int *)(param_1 + 0x8c);
  if (iVar9 == 0) goto LAB_715bfc30;
  iVar18 = iVar9 + *(char *)(iVar9 + 0x71c) * 0x1c + 0x5a4;
  DAT_711a3cfc = param_1;
  iVar9 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if ((iVar9 != 0) &&
     (*(int *)(*(int *)(param_1 + 0x8c) + *(char *)(*(int *)(param_1 + 0x8c) + 0x71c) * 0x1c + 0x5a4
              ) == 0x22)) {
    uVar17 = (*DAT_700f9e38)(iVar18);
    goto LAB_715bfc30;
  }
  FUN_7136cdfc(&uStack_30);
  FUN_7136cdfc(auStack_3c);
  FUN_715c05ac(param_1,0,&uStack_30,auStack_3c);
  puVar20 = auStack_48;
  FUN_7136cdfc(puVar20);
  iVar9 = FUN_713aeb00();
  bVar3 = true;
  if ((*(char *)(param_1 + 0x52) == '\0') &&
     (uVar10 = *(ushort *)(iVar9 + 0xe) - 0x31, uVar12 = (uVar10 & 0xffff) >> 1,
     iVar9 = FUN_716ac9ac(),
     ((uint)((uVar10 * 0x8000 & 0xffff | uVar12) < 9) & 0x10dU >> (uVar12 & 0xff)) == 0 &&
     iVar9 == 0)) {
    pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44a8);
    if (*pcVar11 == '\0') {
      puVar13 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4498);
      *(undefined1 *)((int)puVar13 + 0x16) = 1;
      uVar6 = DAT_70082840;
      uVar5 = DAT_7008283c;
      uVar4 = DAT_70082838;
      uVar17 = DAT_70082834;
      *puVar13 = DAT_70082830;
      puVar13[1] = uVar17;
      puVar13[2] = uVar4;
      puVar13[3] = uVar5;
      puVar13[4] = uVar6;
      *(undefined2 *)(puVar13 + 5) = DAT_70082844;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d12f0,puVar13,&DAT_70b0e000);
      puVar14 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44a8);
      *puVar14 = 1;
    }
    iVar9 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4498);
    if (*(char *)(iVar9 + 0x16) != '\0') {
      uVar12 = 0;
      uVar10 = 0;
      do {
        iVar15 = (uVar12 & 7) * 8;
        bVar7 = (byte)(0xf353d1c7 >> iVar15) |
                (byte)(0x9cfcb1b << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        uVar16 = iVar15 - 0x20;
        if (-1 < (int)uVar16) {
          bVar7 = (byte)(0x9cfcb1b >> (uVar16 & 0xff));
        }
        *(byte *)(iVar9 + uVar12) = *(byte *)(iVar9 + uVar12) ^ bVar7;
        bVar21 = 0xfffffffe < uVar12;
        bVar1 = uVar10 == 0;
        bVar2 = (0x14 < uVar12) <= uVar10;
        uVar12 = uVar12 + 1;
        uVar10 = uVar10 + bVar21;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar9 + 0x16) = 0;
    }
    uVar12 = imp_strlen(iVar9);
    if (0xfffffff7 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6c1c(&uStack_54);
    }
    if (uVar12 < 0xb) {
      uVar10 = (uint)&uStack_54 | 1;
      uStack_54 = CONCAT31(uStack_54._1_3_,(char)(uVar12 << 1));
      if (uVar12 != 0) goto LAB_715bfd60;
    }
    else {
      uVar10 = thunk_MwhHq((uVar12 | 7) + 1);
      uStack_54 = (uVar12 | 7) + 2;
      uStack_50 = uVar12;
      uStack_4c = uVar10;
LAB_715bfd60:
      imp___aeabi_memmove(uVar10,iVar9,uVar12);
    }
    uVar19 = 0;
    *(undefined1 *)(uVar10 + uVar12) = 0;
    iVar9 = FUN_717c5e7c(&uStack_54);
    if ((uStack_54 & 1) != 0) {
      thunk_qNQrlu(uStack_4c);
    }
    if (iVar9 != 1) goto LAB_715bfb94;
    FUN_7136cdfc(&uStack_54);
    iVar9 = FUN_713dacc4(iVar18,*(undefined4 *)(param_1 + 0x8c));
    uVar17 = FUN_71ba21e8(*(undefined4 *)(iVar9 + 8),0x40400000);
    FUN_713b14bc(DAT_70b46c18,uVar17,uStack_30,uStack_2c,uStack_28,&uStack_54,puVar20);
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0x440) == 0) {
      uVar17 = (*DAT_700f9e34)(iVar18,*(int *)(param_1 + 0x8c),&uStack_30,auStack_3c,0,auStack_48,0,
                               1,1);
      goto LAB_715bfc30;
    }
    iVar9 = FUN_713c067c();
    if (iVar9 == 0) {
      uVar17 = 1;
      iVar9 = 0;
      bVar3 = true;
    }
    else {
      uVar19 = *(undefined1 *)(iVar9 + 0xe);
      bVar3 = false;
      uVar17 = 1;
      *(undefined1 *)(iVar9 + 0xe) = 0;
    }
  }
  else {
LAB_715bfb94:
    uVar19 = 0;
    uVar17 = 0;
    puVar20 = (undefined1 *)0x0;
    iVar9 = 0;
  }
  iVar15 = *(int *)(param_1 + 0x8c);
  if (iVar15 == 0) {
    iVar15 = 0;
    iVar18 = 0;
    puVar20 = (undefined1 *)0x0;
    uVar17 = 0;
  }
  uVar17 = (*DAT_700f9e34)(iVar18,iVar15,&uStack_30,auStack_3c,0,puVar20,0,uVar17,1);
  if (!bVar3) {
    *(undefined1 *)(iVar9 + 0xe) = uVar19;
  }
LAB_715bfc30:
  DAT_711a3d00 = 0;
  DAT_711a3cfc = 0;
  if (*(char *)(param_1 + 0x52) != '\0') {
    *DAT_71180c18 = unaff_r8 & 0xff;
    FUN_7151dcd8();
    thunk_FUN_7151e450();
    thunk_FUN_7151e684();
  }
  return uVar17;
}


// =========================================================================
// Function: thunk_FUN_715c04ec
// Entry: 0x715c04d8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c04ec(void)

{
  FUN_715c04ec();
  return;
}


// =========================================================================
// Function: FUN_715c04ec
// Entry: 0x715c04ec | Size: 44 bytes
// =========================================================================

int FUN_715c04ec(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 != 0) {
    return iVar1 + *(char *)(iVar1 + 0x71c) * 0x1c + 0x5a4;
  }
  return 0;
}


// =========================================================================
// Function: FUN_715c0530
// Entry: 0x715c0530 | Size: 72 bytes
// =========================================================================

undefined4 FUN_715c0530(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = *(undefined4 *)
             (*(int *)(param_1 + 0x8c) + *(char *)(*(int *)(param_1 + 0x8c) + 0x71c) * 0x1c + 0x5a4)
    ;
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715c05ac
// Entry: 0x715c05ac | Size: 24 bytes
// =========================================================================

void FUN_715c05ac(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar5 = *(int *)(param_1 + 0x8c) != 0;
  iVar2 = 0;
  if (bVar5) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((bVar5 && iVar2 != 0) && (iVar2 = FUN_71351810(), iVar2 != 0)) {
    bVar5 = *(int *)(param_1 + 0x8c) != 0;
    iVar2 = 0;
    if (bVar5) {
      iVar2 = *(int *)(param_1 + 8);
    }
    if (((bVar5 && iVar2 != 0) && (iVar2 = FUN_71351810(), iVar2 != 0)) &&
       (iVar2 = *(int *)(param_1 + 0x8c), iVar2 != 0)) {
      uVar4 = *(undefined4 *)(iVar2 + *(char *)(iVar2 + 0x71c) * 0x1c + 0x5a4);
      cVar1 = FUN_715c07f8(param_1,uVar4);
      iVar2 = FUN_713db648(uVar4,(int)cVar1);
      if (param_3 != 0 && param_4 != (undefined4 *)0x0) {
        uVar4 = 0x22;
        if (param_2 == 0) {
          uVar4 = 0x18;
        }
        *param_4 = *(undefined4 *)(iVar2 + 0x24);
        param_4[1] = *(undefined4 *)(iVar2 + 0x28);
        param_4[2] = *(undefined4 *)(iVar2 + 0x2c);
        FUN_713be0a8(*(undefined4 *)(param_1 + 0x8c),param_3,uVar4,0);
        uVar3 = FUN_71ba0b38(*(undefined4 *)(iVar2 + 0x2c),0x3e19999a);
        uVar3 = FUN_71ba0b38(*(undefined4 *)(param_3 + 8),uVar3);
        *(undefined4 *)(param_3 + 8) = uVar3;
        FUN_713be4f8(*(undefined4 *)(param_1 + 0x8c),param_4,uVar4,0);
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c07f8
// Entry: 0x715c07f8 | Size: 24 bytes
// =========================================================================

bool FUN_715c07f8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_713db6d0(param_2);
  iVar1 = iVar1 + -0x45;
  if (*(char *)(param_1 + 0x52) == '\0') {
    uVar2 = thunk_FUN_7151eb8c(iVar1);
    iVar3 = FUN_713db648(param_2,2);
    uVar4 = FUN_71ba1b94(*(undefined4 *)(iVar3 + 0x34));
    iVar3 = FUN_71ba2d10(uVar2,uVar4);
    if (iVar3 == 0) {
      return (bool)2;
    }
    uVar2 = thunk_FUN_7151eb8c(iVar1);
  }
  else {
    uVar2 = thunk_FUN_7151ebf4(*(char *)(param_1 + 0x52),iVar1);
    iVar3 = FUN_713db648(param_2,2);
    uVar4 = FUN_71ba1b94(*(undefined4 *)(iVar3 + 0x34));
    iVar3 = FUN_71ba2d10(uVar2,uVar4);
    if (iVar3 == 0) {
      return (bool)2;
    }
    uVar2 = thunk_FUN_7151ebf4(*(undefined1 *)(param_1 + 0x52),iVar1);
  }
  iVar1 = FUN_713db648(param_2,2);
  uVar4 = FUN_71ba1b94(*(undefined4 *)(iVar1 + 0x34));
  iVar1 = FUN_71ba2d50(uVar2,uVar4);
  return iVar1 != 0;
}


// =========================================================================
// Function: FUN_715c0b2c
// Entry: 0x715c0b2c | Size: 1268 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_715c0b2c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  undefined1 uStack_17c;
  undefined2 uStack_178;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_15a;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined2 uStack_143;
  undefined4 uStack_141;
  undefined4 uStack_13d;
  undefined4 uStack_139;
  undefined4 uStack_135;
  undefined4 uStack_131;
  undefined4 uStack_12d;
  undefined4 uStack_129;
  undefined4 uStack_125;
  undefined4 uStack_121;
  undefined1 uStack_11d;
  undefined4 uStack_43;
  char cStack_3f;
  int iStack_33;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  bVar20 = *(int *)(param_1 + 0x8c) != 0;
  iVar3 = 0;
  if (bVar20) {
    iVar3 = *(int *)(param_1 + 8);
  }
  if ((bVar20 && iVar3 != 0) && (iVar3 = FUN_71351810(), iVar3 != 0)) {
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      imp___aeabi_memclr4(param_1 + 0xa4,0x2c);
      if (_ext___stack_chk_guard == iStack_2c) {
        return;
      }
      goto LAB_715c0d30;
    }
    *(undefined1 *)(param_1 + 0xa0) = 1;
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x18);
    puVar12 = (undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0xc0) = *puVar12;
    puVar15 = (undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0xc4) = *puVar15;
    puVar16 = (undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 200) = *puVar16;
    if (*(char *)(param_1 + 0x52) == '\0') {
      if (DAT_711f6d58 != (undefined4 *)0x0) {
        param_1 = DAT_711f6d58[0x2b];
      }
      if ((DAT_711f6d58 != (undefined4 *)0x0 && param_1 != 0) &&
         (iVar3 = *(int *)(*(int *)(param_1 + 0x1f6c) + 0x130), iVar3 != 0)) {
        uStack_178 = 0xffff;
        uVar2 = uStack_178;
        uStack_178 = 0xffff;
        uVar1 = uStack_178;
        uStack_178 = 0xffff;
        if ((*(int *)(iVar3 + 0x8c) == 0) ||
           ((iVar4 = FUN_71351810(*(undefined4 *)(iVar3 + 8)), iVar4 == 0 ||
            (*(int *)(*(int *)(iVar3 + 0x8c) + *(char *)(*(int *)(iVar3 + 0x8c) + 0x71c) * 0x1c +
                     0x5a4) != 0x22)))) {
          if (*(int *)(param_2 + 0x28) != 0) goto LAB_715c0d44;
          uStack_17c = 0;
        }
        else {
          if (*(int *)(param_2 + 0x28) == 0) goto LAB_715c0b78;
LAB_715c0d44:
          uStack_17c = 0;
          iVar4 = DAT_711f6d58[1];
          if (iVar4 != 0) {
            iVar13 = DAT_711f6d58[2];
            puVar5 = DAT_711f6d58;
            if (iVar13 != 0) {
              puVar5 = (undefined4 *)DAT_711f6d58[8];
            }
            uStack_178 = uVar1;
            uStack_17c = 0;
            if (iVar13 != 0 && puVar5 != (undefined4 *)0x0) {
              iVar6 = FUN_71796d54(param_1);
              if (iVar6 == 0xffff) {
                iVar6 = FUN_717b92b8(iVar4,*(undefined4 *)(param_2 + 0x28));
                if (iVar6 == 0xffff) {
                  iVar6 = thunk_FUN_71793f90(iVar13,*(undefined4 *)(param_2 + 0x28));
                  if (iVar6 == 0xffff) {
                    iVar6 = FUN_7173c750(puVar5,*(undefined4 *)(param_2 + 0x28));
                    if (iVar6 == 0xffff) {
                      FUN_7136cdfc(&uStack_16c);
                      iVar4 = *(int *)(param_2 + 0x28);
                      uStack_168 = 0;
                      uStack_164 = 0;
                      uStack_16c = 0;
                      if (*(int *)(iVar4 + 0x14) == 0) {
                        uVar7 = FUN_71ba0b38(_DAT_00000030,*puVar12);
                        *puVar12 = uVar7;
                        uVar7 = FUN_71ba0b38(*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x34),*puVar15
                                            );
                        *puVar15 = uVar7;
                        uVar7 = FUN_71ba0b38(*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x38),*puVar16
                                            );
                      }
                      else {
                        FUN_715eea98(&uStack_16c,*(int *)(iVar4 + 0x14),puVar12);
                        *puVar12 = uStack_16c;
                        *puVar15 = uStack_168;
                        uVar7 = uStack_164;
                      }
                      *puVar16 = uVar7;
                      uStack_17c = 0;
                      uStack_178 = uVar2;
                      goto LAB_715c0e40;
                    }
                    uStack_17c = 5;
                  }
                  else {
                    uStack_17c = 3;
                  }
                }
                else {
                  uStack_17c = 2;
                }
              }
              else {
                uStack_17c = 1;
              }
              uStack_178 = (short)iVar6;
            }
          }
        }
LAB_715c0e40:
        uVar10 = *(undefined4 *)(param_2 + 0x14);
        uVar7 = *puVar16;
        uVar8 = *puVar15;
        uVar9 = *puVar12;
        uVar18 = *(undefined4 *)(param_2 + 0x18);
        uVar19 = *(undefined4 *)(param_2 + 0x10);
        uVar11 = *(undefined4 *)(param_2 + 0xc);
        uVar17 = *(undefined4 *)(param_2 + 8);
        uStack_11d = 0;
        uVar14 = *(undefined4 *)(param_2 + 4);
        if (*(int *)(iVar3 + 0x8c) != 0) {
          iVar4 = FUN_71351810(*(undefined4 *)(iVar3 + 8));
          uStack_11d = 0;
          if (iVar4 != 0) {
            uStack_11d = (undefined1)
                         *(undefined4 *)
                          (*(int *)(iVar3 + 0x8c) + *(char *)(*(int *)(iVar3 + 0x8c) + 0x71c) * 0x1c
                          + 0x5a4);
          }
        }
        iStack_33 = 0x800;
        cStack_3f = '\x01';
        uStack_143 = uStack_178;
        uStack_144 = uStack_17c;
        uStack_145 = 0xce;
        uStack_15a = 0x148;
        uStack_43 = 0;
        uStack_16c._3_1_ = SUB41(&uStack_145,0);
        uStack_168._0_3_ = (undefined3)((uint)&uStack_145 >> 8);
        uStack_141 = uVar14;
        uStack_13d = uVar17;
        uStack_139 = uVar11;
        uStack_135 = uVar19;
        uStack_131 = uVar10;
        uStack_12d = uVar18;
        uStack_129 = uVar9;
        uStack_125 = uVar8;
        uStack_121 = uVar7;
        (**(code **)(*(int *)*DAT_711f6d58 + 0x3c))((int *)*DAT_711f6d58,&uStack_16c,1,7);
        if ((cStack_3f != '\0') && (0x800 < iStack_33)) {
          imp_free(CONCAT31((undefined3)uStack_168,uStack_16c._3_1_));
        }
      }
    }
  }
LAB_715c0b78:
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
LAB_715c0d30:
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715c12a4
// Entry: 0x715c12a4 | Size: 24 bytes
// =========================================================================

void FUN_715c12a4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  bVar16 = *(int *)(param_1 + 0x8c) != 0;
  iVar10 = 0;
  if (bVar16) {
    iVar10 = *(int *)(param_1 + 8);
  }
  if ((bVar16 && iVar10 != 0) && (iVar10 = FUN_71351810(), iVar10 != 0)) {
    iVar10 = *(int *)(param_1 + 0x8c);
    bVar6 = 0;
    if (iVar10 != 0) {
      bVar6 = *(byte *)(iVar10 + 0x485);
    }
    if (iVar10 == 0 || (bVar6 & 1) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        iVar10 = *(int *)(param_1 + 0x8c);
      }
      else {
        iVar11 = FUN_71351810();
        iVar10 = *(int *)(param_1 + 0x8c);
        bVar6 = 0;
        if (iVar11 != 0) {
          bVar6 = *(byte *)(iVar10 + 0x487);
        }
        if (iVar11 != 0 && (bVar6 & 4) != 0) {
          return;
        }
      }
      uVar12 = *(undefined4 *)(iVar10 + 0x440);
      DataMemoryBarrier(0xb);
      if (((DAT_70b46dc0 & 1) == 0) &&
         (iVar10 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70b46dc0), iVar10 != 0)) {
        pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc790,0);
        if (*pcVar7 == '\0') {
          puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc780);
          *(undefined1 *)((int)puVar8 + 0x39) = 1;
          uVar4 = DAT_70076c7c;
          uVar3 = DAT_70076c78;
          uVar2 = DAT_70076c74;
          *puVar8 = DAT_70076c70;
          puVar8[1] = uVar2;
          puVar8[2] = uVar3;
          puVar8[3] = uVar4;
          uVar5 = DAT_70076c90;
          uVar4 = DAT_70076c8c;
          uVar3 = DAT_70076c88;
          uVar2 = DAT_70076c84;
          puVar8[4] = DAT_70076c80;
          puVar8[5] = uVar2;
          puVar8[6] = uVar3;
          puVar8[7] = uVar4;
          puVar8[8] = uVar5;
          uVar5 = DAT_70076ca4;
          uVar4 = DAT_70076ca0;
          uVar3 = DAT_70076c9c;
          uVar2 = DAT_70076c98;
          puVar8[9] = DAT_70076c94;
          puVar8[10] = uVar2;
          puVar8[0xb] = uVar3;
          puVar8[0xc] = uVar4;
          puVar8[0xd] = uVar5;
          *(undefined1 *)(puVar8 + 0xe) = DAT_70076ca8;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_713c1908,puVar8,&DAT_70b0e000);
          puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc790);
          *puVar9 = 1;
        }
        iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bc780);
        if (*(char *)(iVar10 + 0x39) != '\0') {
          uVar13 = 0;
          uVar14 = 0;
          do {
            iVar11 = (uVar13 & 7) * 8;
            uVar15 = iVar11 - 0x20;
            bVar6 = (byte)(0xd7fe737 >> iVar11) |
                    (byte)(-0x68e6be27 << ((uVar13 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar15) {
              bVar6 = (byte)(0x971941d9 >> (uVar15 & 0xff));
            }
            *(byte *)(iVar10 + uVar13) = *(byte *)(iVar10 + uVar13) ^ bVar6;
            bVar17 = 0xfffffffe < uVar13;
            bVar16 = uVar14 == 0;
            bVar1 = (0x37 < uVar13) <= uVar14;
            uVar13 = uVar13 + 1;
            uVar14 = uVar14 + bVar17;
          } while (bVar16 && bVar1);
          *(undefined1 *)(iVar10 + 0x39) = 0;
        }
        DAT_70b46dbc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar10,1);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70b46dc0);
      }
                    /* WARNING: Could not recover jumptable at 0x713c1324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_70b46dbc)(uVar12,0);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c13cc
// Entry: 0x715c13cc | Size: 20 bytes
// =========================================================================

uint FUN_715c13cc(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  bVar3 = *(int *)(param_1 + 0x8c) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (!bVar3 || iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_71351810(iVar1);
  if (iVar1 != 0) {
    uVar2 = (*(byte *)(*(int *)(param_1 + 0x8c) + 0x487) & 7) >> 2;
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715c1460
// Entry: 0x715c1460 | Size: 24 bytes
// =========================================================================

void FUN_715c1460(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x8c) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (!bVar2 || iVar1 == 0) {
    return;
  }
  iVar1 = FUN_71351810();
  if (iVar1 != 0) {
    *(uint *)(*(int *)(param_1 + 0x8c) + 0x484) =
         *(uint *)(*(int *)(param_1 + 0x8c) + 0x484) & 0xfbffffff;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c14fc
// Entry: 0x715c14e8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c14fc(void)

{
  FUN_715c14fc();
  return;
}


// =========================================================================
// Function: FUN_715c14fc
// Entry: 0x715c14fc | Size: 24 bytes
// =========================================================================

void FUN_715c14fc(int param_1,undefined4 param_2)

{
  (&DAT_71180c28)[*(byte *)(param_1 + 0x52)] = param_2;
  return;
}


// =========================================================================
// Function: FUN_715c1538
// Entry: 0x715c1538 | Size: 164 bytes
// =========================================================================

void FUN_715c1538(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  bVar2 = *(int *)(param_1 + 8) != 0;
  if (bVar2) {
    param_2 = *(int *)(param_1 + 0x8c);
  }
  if ((bVar2 && param_2 != 0) && (iVar1 = FUN_71351810(), iVar1 != 0)) {
    thunk_FUN_715600f0(param_1,auStack_58);
    FUN_715601e8(param_1,uStack_28,uStack_24,uStack_20);
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544) = 0;
    *DAT_7118e024 = *(undefined1 *)(param_1 + 0x52);
    FUN_715d33c8(&DAT_7008252e,*(undefined4 *)(param_1 + 8));
    *DAT_7118e024 = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c16ac
// Entry: 0x715c16ac | Size: 28 bytes
// =========================================================================

void FUN_715c16ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [48];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_7136cdfc(auStack_ac);
  thunk_FUN_715600f0(param_1,auStack_a0);
  thunk_FUN_715600f0(param_2,auStack_60);
  uVar1 = FUN_71ba240c(uStack_70,uStack_30);
  uVar2 = FUN_71ba240c(uStack_6c,uStack_2c);
  uVar3 = FUN_71ba240c(uStack_68,uStack_28);
  uVar2 = FUN_71ba21e8(uVar2,uVar2);
  uVar1 = FUN_71ba21e8(uVar1,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = FUN_71ba21e8(uVar3,uVar3);
  FUN_71ba0b38(uVar2,uVar1);
  imp_sqrtf();
  return;
}


// =========================================================================
// Function: thunk_FUN_715c18f0
// Entry: 0x715c18dc | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c18f0(void)

{
  FUN_715c18f0();
  return;
}


// =========================================================================
// Function: FUN_715c18f0
// Entry: 0x715c18f0 | Size: 28 bytes
// =========================================================================

undefined4 FUN_715c18f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 + 2U < 0x31) {
    uVar1 = *(undefined4 *)(&DAT_700828cc + (param_1 + 2U) * 4);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715c1944
// Entry: 0x715c1944 | Size: 7424 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715c1944(int param_1,undefined4 param_2,undefined4 param_3)

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
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 extraout_r2;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 *puVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  bool bVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr11;
  undefined4 in_cr15;
  uint uStack_90;
  uint *puStack_8c;
  uint uStack_88;
  uint *puStack_84;
  uint auStack_80 [2];
  uint *puStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  int *piStack_64;
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
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  puVar41 = &uStack_90;
  bVar48 = *(int *)(param_1 + 0x8c) != 0;
  iVar15 = 0;
  if (bVar48) {
    iVar15 = *(int *)(param_1 + 8);
  }
  if (((!bVar48 || iVar15 == 0) ||
      (auStack_80[0] = param_1, uStack_70 = param_2, iVar15 = FUN_71351810(), iVar15 == 0)) ||
     (iStack_28 = thunk_FUN_715c18f0(uStack_70), iStack_28 == -1)) {
    return;
  }
  uStack_88 = param_3;
  FUN_71569dc4(DAT_711a3938,&iStack_28);
  while( true ) {
    uVar27 = *puVar41 ^ 0x6a4dab1f;
    uVar34 = uVar27 | puVar41[1] ^ 0x679b29b;
    bVar48 = uVar34 == 0;
    if (bVar48) {
      uVar34 = puVar41[3] ^ 0xfcc126c8;
      uVar27 = puVar41[2] ^ 0x6efdd0cf;
    }
    if ((bVar48 && (uVar27 == 0 && uVar34 == 0)) &&
       (puVar41[4] == 0xbefc55d6 && puVar41[5] == 0x370f3a77)) break;
    puVar41 = puVar41 + 1;
  }
  bVar48 = (char)puVar41[0x4006] != '\0';
  cVar4 = '\0';
  if (bVar48) {
    cVar4 = *(char *)((int)puVar41 + 0x10019);
  }
  if (bVar48 && cVar4 != '\0') goto LAB_715c1b04;
  do {
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b0003a;
    _LAB_00000004 = 0xe3b01000;
    puVar41 = (uint *)0xf0002;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_715c1b04:
  } while (*(char *)((int)puVar41 + 0x1001a) == '\0');
  if (puVar41[0xc01e] == puVar41[0xc01c]) {
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b00006;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_715c3298:
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
    do {
      *pbVar38 = *pbVar38 ^ 0x50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != (byte *)0x3c);
    uRam00000000 = 0xe3b00008;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_715c3338:
    pbVar38 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
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
    uVar27 = puVar41[0xc01c];
    if ((uVar27 < 0x715c1b40) && (0x715c1b40 < puVar41[0xc01d] + uVar27)) goto LAB_715c3298;
    uVar27 = puVar41[0xc01e];
    if ((0x715c1b40 < uVar27) || (puVar41[0xc01f] + uVar27 < 0x715c1b40)) goto LAB_715c3338;
    puStack_84 = puVar41;
    iVar15 = FUN_717d2588();
    if (iVar15 == 0xa1b) {
      puStack_8c = puStack_84 + 0xc01b;
      uVar27 = *puStack_8c;
      if (uVar27 == 0x1e) {
        *puStack_8c = 0;
        uVar27 = *puStack_8c;
      }
      if (((uVar27 & 3) == 0) && (puStack_84[0xc017] != 0)) {
        puVar32 = (undefined4 *)puStack_84[0xc017];
        piVar33 = puVar32 + 1;
        piVar17 = (int *)*puVar32;
        if (piVar17 != piVar33) {
LAB_715c2140:
          piStack_64 = piVar17;
          puStack_68 = (uint *)piStack_64[7];
          uVar34 = piStack_64[6];
          iVar15 = 0x27d4eb7f;
          uStack_6c = piStack_64[8];
          puVar41 = (uint *)piStack_64[5];
          uVar27 = 0x56d677d6;
          if (0x1f < uVar34) {
            uStack_2c = 0x61c8869e;
            uStack_30 = 0x40801011;
            uStack_34 = 0x50;
            uStack_38 = 0x6854fb60;
            uStack_4c = 0xba94458a;
            uStack_3c = 0xc2b2ae8d;
            uVar27 = 0;
            uVar35 = 0x60ea283e;
            uVar39 = 0xee40c5e7;
            uVar26 = uVar34;
            puVar28 = puVar41;
            do {
              uStack_48 = uVar39;
              uStack_44 = uVar35;
              uStack_40 = uVar27;
              lVar5 = (ulonglong)puVar28[6] * 0x27d4eb4f;
              uVar27 = (uint)lVar5;
              uVar45 = uVar27 + uStack_4c;
              uVar27 = puVar28[7] * 0x27d4eb4f +
                       puVar28[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_2c +
                       (uint)CARRY4(uVar27,uStack_4c);
              uVar18 = uVar27 >> 1;
              uStack_50 = uVar45 * -0x80000000 | uVar18;
              uStack_4c = (uint)((ulonglong)uStack_50 * 0x85ebca87);
              uVar45 = uVar45 >> 1;
              uStack_54 = uVar27 * -0x80000000 | uVar45;
              uStack_2c = uStack_54 * -0x7a143579 +
                          uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20)
              ;
              lVar5 = (ulonglong)puVar28[4] * 0x27d4eb4f;
              uVar27 = (uint)lVar5;
              uVar44 = uVar27 + uStack_30;
              uVar27 = puVar28[5] * 0x27d4eb4f +
                       puVar28[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_34 +
                       (uint)CARRY4(uVar27,uStack_30);
              uVar19 = uVar27 >> 1;
              uStack_58 = uVar44 * -0x80000000 | uVar19;
              uVar44 = uVar44 >> 1;
              uStack_5c = uVar27 * -0x80000000 | uVar44;
              uStack_30 = (uint)((ulonglong)uStack_58 * 0x85ebca87);
              puVar1 = puVar28 + 1;
              puVar2 = puVar28 + 3;
              uStack_34 = uStack_5c * -0x7a143579 +
                          uStack_58 * -0x61c8864f + (int)((ulonglong)uStack_58 * 0x85ebca87 >> 0x20)
              ;
              puVar3 = puVar28 + 2;
              lVar5 = (ulonglong)*puVar3 * 0x27d4eb4f;
              uVar35 = (uint)lVar5;
              uVar27 = *puVar28;
              puVar28 = puVar28 + 8;
              uVar25 = uVar35 + uStack_38;
              uVar35 = *puVar2 * 0x27d4eb4f +
                       *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_3c +
                       (uint)CARRY4(uVar35,uStack_38);
              uVar22 = uVar35 >> 1;
              uStack_60 = uVar25 * -0x80000000 | uVar22;
              uVar25 = uVar25 >> 1;
              uVar20 = uVar35 * -0x80000000 | uVar25;
              uStack_38 = (uint)((ulonglong)uStack_60 * 0x85ebca87);
              uStack_3c = uVar20 * -0x7a143579 +
                          uStack_60 * -0x61c8864f + (int)((ulonglong)uStack_60 * 0x85ebca87 >> 0x20)
              ;
              lVar5 = (ulonglong)uVar27 * 0x27d4eb4f;
              uVar35 = (uint)lVar5;
              uVar16 = uVar35 + uStack_48;
              uVar27 = *puVar1 * 0x27d4eb4f + uVar27 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                       + uStack_44 + (uint)CARRY4(uVar35,uStack_48);
              bVar48 = uVar26 < 0x20;
              uVar26 = uVar26 - 0x20;
              uVar23 = uVar27 >> 1;
              uVar46 = uVar16 * -0x80000000 | uVar23;
              uVar16 = uVar16 >> 1;
              uVar40 = uVar27 * -0x80000000 | uVar16;
              uVar39 = (uint)((ulonglong)uVar46 * 0x85ebca87);
              uVar27 = uStack_40 - bVar48;
              uVar35 = uVar40 * -0x7a143579 +
                       uVar46 * -0x61c8864f + (int)((ulonglong)uVar46 * 0x85ebca87 >> 0x20);
            } while ((uint)(uVar26 < 0x20) <= -uVar27);
            uVar27 = uVar39 << 1 | uVar35 >> 0x1f;
            uVar29 = uStack_38 << 7 | uStack_3c >> 0x19;
            uVar26 = uVar29 + uVar27;
            uVar36 = uStack_30 << 0xc | uStack_34 >> 0x14;
            uVar30 = uVar26 + uVar36;
            uStack_30 = (uStack_3c * 0x80 | uStack_38 >> 0x19) + (uVar35 * 2 | uVar39 >> 0x1f) +
                        (uint)CARRY4(uVar29,uVar27) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                        (uint)CARRY4(uVar26,uVar36);
            uVar47 = uStack_4c << 0x12 | uStack_2c >> 0xe;
            uVar40 = (uint)((ulonglong)uVar46 * 0x80000000) |
                     uVar40 * 0xf796ca9 +
                     uVar46 * -0x210ca4ff + (int)((ulonglong)uVar46 * 0xf796ca9 >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar40 * 0x85ebca87;
            uVar31 = uVar30 + uVar47 ^ (uint)lVar5;
            lVar6 = (ulonglong)uVar31 * 0x85ebca87;
            uVar43 = (uint)lVar6;
            uVar42 = (uint)((ulonglong)uStack_60 * 0x80000000) |
                     uVar20 * 0xf796ca9 +
                     uStack_60 * -0x210ca4ff + (int)((ulonglong)uStack_60 * 0xf796ca9 >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar42 * 0x85ebca87;
            uVar35 = uVar43 + 0xc2b2ae63 ^ (uint)lVar7;
            lVar8 = (ulonglong)uVar35 * 0x85ebca87;
            uVar20 = (uint)lVar8;
            uVar29 = (uint)((ulonglong)uStack_58 * 0x80000000) |
                     uStack_5c * 0xf796ca9 +
                     uStack_58 * -0x210ca4ff + (int)((ulonglong)uStack_58 * 0xf796ca9 >> 0x20) >> 1;
            lVar9 = (ulonglong)uVar29 * 0x85ebca87;
            uVar39 = uVar20 + 0xc2b2ae63 ^ (uint)lVar9;
            lVar10 = (ulonglong)uVar39 * 0x85ebca87;
            uVar36 = (uint)lVar10;
            uVar37 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                     uStack_54 * 0xf796ca9 +
                     uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
            lVar11 = (ulonglong)uVar37 * 0x85ebca87;
            uVar26 = uVar36 + 0xc2b2ae63 ^ (uint)lVar11;
            lVar12 = (ulonglong)uVar26 * 0x85ebca87;
            uVar24 = (uint)lVar12;
            uVar27 = uVar24 + 0xc2b2ae63;
            iVar15 = ((((uStack_30 + (uStack_2c * 0x40000 | uStack_4c >> 0xe) +
                         (uint)CARRY4(uVar30,uVar47) ^
                        (uVar16 * -0x80000000 +
                        uVar23 * -0x784349ac + (int)((ulonglong)uVar46 * 0x80000000 >> 0x20)) *
                        -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) *
                        -0x7a143579 + uVar31 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) +
                        -0x7a143589 + (uint)(0x3d4d519c < uVar43) ^
                       (uVar25 * -0x80000000 +
                       uVar22 * -0x784349ac + (int)((ulonglong)uStack_60 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar42 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                       -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                       -0x7a143589 + (uint)(0x3d4d519c < uVar20) ^
                      (uVar44 * -0x80000000 +
                      uVar19 * -0x784349ac + (int)((ulonglong)uStack_58 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                      -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                     (uVar45 * -0x80000000 +
                     uVar18 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                     -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar24);
            auStack_80[1] = uVar34;
            puStack_78 = puVar41;
          }
          puVar41 = (uint *)((int)puVar41 + (uVar34 & 0xffffffe0));
          uVar39 = uVar34 & 0x1f;
          uVar26 = 0;
          uVar35 = uVar27 + uVar34;
          uVar27 = iVar15 + (uint)CARRY4(uVar27,uVar34);
          do {
            if (uVar26 == 0 && (7 < uVar39) <= uVar26) {
              if (uVar26 == 0 && (3 < uVar39) <= uVar26) {
                if (uVar39 == 0 && uVar26 == 0) goto LAB_715c2740;
                lVar5 = (ulonglong)(uint)(byte)*puVar41 * 0x165667c5;
                uVar35 = (uint)lVar5 ^ uVar35;
                uVar27 = (uint)(byte)*puVar41 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^
                         uVar27;
                uVar34 = uVar35 << 0xb | uVar27 >> 0x15;
                lVar5 = (ulonglong)uVar34 * 0x85ebca87;
                uVar44 = (uint)lVar5;
                uVar34 = (uVar27 << 0xb | uVar35 >> 0x15) * -0x7a143579 +
                         uVar34 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
                uVar19 = 0xffffffff;
                iVar15 = 1;
              }
              else {
                lVar5 = (ulonglong)*puVar41 * 0x85ebca87;
                uVar35 = (uint)lVar5 ^ uVar35;
                uVar27 = *puVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar27;
                uVar34 = uVar35 << 0x17 | uVar27 >> 9;
                lVar5 = (ulonglong)uVar34 * 0x27d4eb4f;
                uVar18 = (uint)lVar5;
                uVar44 = uVar18 + 0x9e3779f9;
                iVar15 = 4;
                uVar34 = (uVar27 << 0x17 | uVar35 >> 9) * 0x27d4eb4f +
                         uVar34 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                         (uint)(0x61c88606 < uVar18);
                uVar19 = 0xfffffffc;
              }
            }
            else {
              uVar34 = *puVar41;
              uVar18 = (uint)((ulonglong)uVar34 * 0x80000000) |
                       puVar41[1] * 0x27d4eb4f +
                       uVar34 * -0x3d4d51c3 + (int)((ulonglong)uVar34 * 0x27d4eb4f >> 0x20) >> 1;
              lVar5 = (ulonglong)uVar18 * 0x85ebca87;
              uVar19 = 0xfffffff8;
              uVar34 = (puVar41[1] * -0x80000000 +
                       uVar34 * -0x6c158a59 + (int)((ulonglong)uVar34 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar27
              ;
              uVar18 = (uint)lVar5 ^ uVar35;
              uVar45 = uVar18 << 0x1b | uVar34 >> 5;
              lVar5 = (ulonglong)uVar45 * 0x85ebca87;
              uVar22 = (uint)lVar5;
              uVar44 = uVar22 + 0xc2b2ae63;
              iVar15 = 8;
              uVar34 = (uVar34 << 0x1b | uVar18 >> 5) * -0x7a143579 +
                       uVar45 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                       (uint)(0x3d4d519c < uVar22);
              uStack_30 = uVar35;
              uStack_2c = uVar27;
            }
            bVar48 = CARRY4(uVar19,uVar39);
            uVar39 = uVar19 + uVar39;
            puVar41 = (uint *)((int)puVar41 + iVar15);
            uVar26 = (uVar26 - 1) + (uint)bVar48;
            uVar35 = uVar44;
            uVar27 = uVar34;
          } while( true );
        }
      }
LAB_715c1bf0:
      uVar27 = *puStack_8c;
      *puStack_8c = uVar27 + 1;
      if (uVar27 == 6) {
        uStack_60 = puStack_84[0xc011];
        uVar27 = puStack_84[0xc010];
        puVar41 = (uint *)puStack_84[0xc00f];
        piStack_64 = (int *)puStack_84[0xc012];
        if (uVar27 < 0x20) {
          iVar15 = 0x27d4eb7f;
          uVar34 = 0x56d677d6;
        }
        else {
          uStack_34 = 0x50;
          uStack_3c = 0x40801011;
          uStack_30 = 0x61c8869e;
          uStack_2c = 0xba94458a;
          uStack_40 = 0xc2b2ae8d;
          iVar15 = 0;
          uStack_38 = 0x6854fb60;
          uVar34 = 0xee40c5e7;
          uVar35 = 0x60ea283e;
          puVar28 = puVar41;
          uVar39 = uVar27;
          do {
            uStack_48 = uVar35;
            uStack_44 = uVar34;
            lVar5 = (ulonglong)puVar28[6] * 0x27d4eb4f;
            uVar34 = (uint)lVar5;
            uVar18 = uVar34 + uStack_2c;
            uVar34 = puVar28[7] * 0x27d4eb4f +
                     puVar28[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar34,uStack_2c);
            uVar26 = uVar34 >> 1;
            uStack_4c = uVar18 * -0x80000000 | uVar26;
            uVar18 = uVar18 >> 1;
            uStack_50 = uVar34 * -0x80000000 | uVar18;
            uStack_2c = (uint)((ulonglong)uStack_4c * 0x85ebca87);
            uStack_30 = uStack_50 * -0x7a143579 +
                        uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)puVar28[4] * 0x27d4eb4f;
            uVar34 = (uint)lVar5;
            uVar19 = uVar34 + uStack_3c;
            uVar34 = puVar28[5] * 0x27d4eb4f +
                     puVar28[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_34 +
                     (uint)CARRY4(uVar34,uStack_3c);
            uVar45 = uVar34 >> 1;
            uStack_54 = uVar19 * -0x80000000 | uVar45;
            uVar19 = uVar19 >> 1;
            uStack_58 = uVar34 * -0x80000000 | uVar19;
            uStack_3c = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            puVar1 = puVar28 + 1;
            puVar2 = puVar28 + 3;
            uStack_34 = uStack_58 * -0x7a143579 +
                        uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
            puVar3 = puVar28 + 2;
            lVar5 = (ulonglong)*puVar3 * 0x27d4eb4f;
            uVar35 = (uint)lVar5;
            uVar34 = *puVar28;
            puVar28 = puVar28 + 8;
            uVar22 = uVar35 + uStack_38;
            uVar35 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_40 + (uint)CARRY4(uVar35,uStack_38);
            uVar44 = uVar35 >> 1;
            uVar40 = uVar22 * -0x80000000 | uVar44;
            uVar22 = uVar22 >> 1;
            uStack_5c = uVar35 * -0x80000000 | uVar22;
            uStack_38 = (uint)((ulonglong)uVar40 * 0x85ebca87);
            uStack_40 = uStack_5c * -0x7a143579 +
                        uVar40 * -0x61c8864f + (int)((ulonglong)uVar40 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)uVar34 * 0x27d4eb4f;
            uVar35 = (uint)lVar5;
            uVar23 = uVar35 + uStack_44;
            uVar34 = *puVar1 * 0x27d4eb4f + uVar34 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                     uStack_48 + (uint)CARRY4(uVar35,uStack_44);
            bVar48 = uVar39 < 0x20;
            uVar39 = uVar39 - 0x20;
            uVar25 = uVar34 >> 1;
            uVar16 = uVar23 * -0x80000000 | uVar25;
            uVar23 = uVar23 >> 1;
            uVar20 = uVar34 * -0x80000000 | uVar23;
            iVar15 = iVar15 - (uint)bVar48;
            uVar34 = (uint)((ulonglong)uVar16 * 0x85ebca87);
            uVar35 = uVar20 * -0x7a143579 +
                     uVar16 * -0x61c8864f + (int)((ulonglong)uVar16 * 0x85ebca87 >> 0x20);
          } while ((uint)(uVar39 < 0x20) <= (uint)-iVar15);
          uVar29 = uVar34 << 1 | uVar35 >> 0x1f;
          uVar39 = uStack_38 << 7 | uStack_40 >> 0x19;
          uVar36 = uVar39 + uVar29;
          uVar46 = uStack_3c << 0xc | uStack_34 >> 0x14;
          uVar43 = uVar36 + uVar46;
          uStack_34 = (uStack_40 * 0x80 | uStack_38 >> 0x19) + (uVar35 * 2 | uVar34 >> 0x1f) +
                      (uint)CARRY4(uVar39,uVar29) + (uStack_34 * 0x1000 | uStack_3c >> 0x14) +
                      (uint)CARRY4(uVar36,uVar46);
          uStack_38 = (uint)((ulonglong)uVar16 * 0x80000000 >> 0x20);
          uVar46 = uStack_2c << 0x12 | uStack_30 >> 0xe;
          uVar42 = (uint)((ulonglong)uVar16 * 0x80000000) |
                   uVar20 * 0xf796ca9 +
                   uVar16 * -0x210ca4ff + (int)((ulonglong)uVar16 * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar42 * 0x85ebca87;
          uVar20 = uVar43 + uVar46 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar20 * 0x85ebca87;
          uVar47 = (uint)lVar6;
          uVar29 = (uint)((ulonglong)uVar40 * 0x80000000) |
                   uStack_5c * 0xf796ca9 +
                   uVar40 * -0x210ca4ff + (int)((ulonglong)uVar40 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar29 * 0x85ebca87;
          uVar35 = uVar47 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar35 * 0x85ebca87;
          uVar36 = (uint)lVar8;
          uVar37 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar37 * 0x85ebca87;
          uVar39 = uVar36 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar39 * 0x85ebca87;
          uVar24 = (uint)lVar10;
          uVar30 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                   uStack_50 * 0xf796ca9 +
                   uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar30 * 0x85ebca87;
          uVar16 = uVar24 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar16 * 0x85ebca87;
          uVar31 = (uint)lVar12;
          uVar34 = uVar31 + 0xc2b2ae63;
          iVar15 = ((((uStack_34 + (uStack_30 * 0x40000 | uStack_2c >> 0xe) +
                       (uint)CARRY4(uVar43,uVar46) ^
                      (uVar23 * -0x80000000 + uVar25 * -0x784349ac + uStack_38) * -0x7a143579 +
                      uVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                      uVar20 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar47) ^
                     (uVar22 * -0x80000000 +
                     uVar44 * -0x784349ac + (int)((ulonglong)uVar40 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                     -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                    (uVar19 * -0x80000000 +
                    uVar45 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                    -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar24) ^
                   (uVar18 * -0x80000000 +
                   uVar26 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar30 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                   -0x7a143579 + uVar16 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar31);
          uStack_6c = uVar27;
          puStack_68 = puVar41;
        }
        uVar35 = uVar34 + uVar27;
        uVar39 = uVar27 & 0x1f;
        uVar34 = iVar15 + (uint)CARRY4(uVar34,uVar27);
        puVar41 = (uint *)((int)puVar41 + (uVar27 & 0xffffffe0));
        uVar27 = 0;
        do {
          if (uVar27 == 0 && (7 < uVar39) <= uVar27) {
            if (uVar27 == 0 && (3 < uVar39) <= uVar27) {
              if (uVar39 == 0 && uVar27 == 0) goto LAB_715c30d4;
              lVar5 = (ulonglong)(uint)(byte)*puVar41 * 0x165667c5;
              uVar26 = (uint)lVar5 ^ uVar35;
              uVar34 = (uint)(byte)*puVar41 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar34;
              uVar18 = uVar26 << 0xb | uVar34 >> 0x15;
              lVar5 = (ulonglong)uVar18 * 0x85ebca87;
              uVar35 = (uint)lVar5;
              iVar15 = 1;
              uVar34 = (uVar34 << 0xb | uVar26 >> 0x15) * -0x7a143579 +
                       uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
              uVar26 = 0xffffffff;
            }
            else {
              lVar5 = (ulonglong)*puVar41 * 0x85ebca87;
              uVar26 = (uint)lVar5 ^ uVar35;
              uVar34 = *puVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar34;
              uVar45 = uVar26 << 0x17 | uVar34 >> 9;
              lVar5 = (ulonglong)uVar45 * 0x27d4eb4f;
              uVar18 = (uint)lVar5;
              uVar35 = uVar18 + 0x9e3779f9;
              iVar15 = 4;
              uVar34 = (uVar34 << 0x17 | uVar26 >> 9) * 0x27d4eb4f +
                       uVar45 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar18);
              uVar26 = 0xfffffffc;
            }
          }
          else {
            uVar26 = *puVar41;
            uVar18 = (uint)((ulonglong)uVar26 * 0x80000000) |
                     puVar41[1] * 0x27d4eb4f +
                     uVar26 * -0x3d4d51c3 + (int)((ulonglong)uVar26 * 0x27d4eb4f >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar18 * 0x85ebca87;
            uVar45 = (uint)lVar5 ^ uVar35;
            uVar34 = (puVar41[1] * -0x80000000 +
                     uVar26 * -0x6c158a59 + (int)((ulonglong)uVar26 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar34;
            uVar18 = uVar45 << 0x1b | uVar34 >> 5;
            lVar5 = (ulonglong)uVar18 * 0x85ebca87;
            uVar26 = (uint)lVar5;
            uVar35 = uVar26 + 0xc2b2ae63;
            iVar15 = 8;
            uVar34 = (uVar34 << 0x1b | uVar45 >> 5) * -0x7a143579 +
                     uVar18 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar26);
            uVar26 = 0xfffffff8;
          }
          bVar48 = CARRY4(uVar26,uVar39);
          uVar39 = uVar26 + uVar39;
          puVar41 = (uint *)((int)puVar41 + iVar15);
          uVar27 = (uVar27 - 1) + (uint)bVar48;
        } while( true );
      }
      if (uVar27 == 2) {
        uStack_60 = puStack_84[0x4009];
        uVar27 = puStack_84[0x4008];
        puVar41 = (uint *)puStack_84[0x4007];
        piStack_64 = (int *)puStack_84[0x400a];
        if (uVar27 < 0x20) {
          iVar15 = 0x27d4eb7f;
          uVar34 = 0x56d677d6;
        }
        else {
          uStack_34 = 0x50;
          uStack_30 = 0x40801011;
          uStack_2c = 0x61c8869e;
          uStack_3c = 0xc2b2ae8d;
          uStack_44 = 0xba94458a;
          iVar15 = 0;
          uStack_38 = 0x6854fb60;
          uVar34 = 0xee40c5e7;
          puVar28 = puVar41;
          uVar35 = uVar27;
          uVar39 = 0x60ea283e;
          do {
            uStack_40 = uVar39;
            uStack_48 = uVar34;
            lVar5 = (ulonglong)puVar28[6] * 0x27d4eb4f;
            uVar34 = (uint)lVar5;
            puVar1 = puVar28 + 1;
            uVar18 = uVar34 + uStack_44;
            uVar34 = puVar28[7] * 0x27d4eb4f +
                     puVar28[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_2c +
                     (uint)CARRY4(uVar34,uStack_44);
            uVar26 = uVar34 >> 1;
            uStack_4c = uVar18 * -0x80000000 | uVar26;
            uVar18 = uVar18 >> 1;
            uStack_50 = uVar34 * -0x80000000 | uVar18;
            uStack_44 = (uint)((ulonglong)uStack_4c * 0x85ebca87);
            uStack_2c = uStack_50 * -0x7a143579 +
                        uStack_4c * -0x61c8864f + (int)((ulonglong)uStack_4c * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)puVar28[4] * 0x27d4eb4f;
            uVar34 = (uint)lVar5;
            uVar19 = uVar34 + uStack_30;
            uVar34 = puVar28[5] * 0x27d4eb4f +
                     puVar28[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_34 +
                     (uint)CARRY4(uVar34,uStack_30);
            uVar45 = uVar34 >> 1;
            uStack_54 = uVar19 * -0x80000000 | uVar45;
            uVar19 = uVar19 >> 1;
            uStack_58 = uVar34 * -0x80000000 | uVar19;
            uStack_30 = (uint)((ulonglong)uStack_54 * 0x85ebca87);
            puVar2 = puVar28 + 3;
            uStack_34 = uStack_58 * -0x7a143579 +
                        uStack_54 * -0x61c8864f + (int)((ulonglong)uStack_54 * 0x85ebca87 >> 0x20);
            uVar39 = *puVar28;
            puVar3 = puVar28 + 2;
            puVar28 = puVar28 + 8;
            lVar5 = (ulonglong)*puVar3 * 0x27d4eb4f;
            uVar34 = (uint)lVar5;
            uVar22 = uVar34 + uStack_38;
            uVar34 = *puVar2 * 0x27d4eb4f + *puVar3 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar34,uStack_38);
            uVar44 = uVar34 >> 1;
            uVar20 = uVar22 * -0x80000000 | uVar44;
            uVar22 = uVar22 >> 1;
            uVar16 = uVar34 * -0x80000000 | uVar22;
            uStack_38 = (uint)((ulonglong)uVar20 * 0x85ebca87);
            uStack_3c = uVar16 * -0x7a143579 +
                        uVar20 * -0x61c8864f + (int)((ulonglong)uVar20 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)uVar39 * 0x27d4eb4f;
            uVar34 = (uint)lVar5;
            uVar23 = uVar34 + uStack_48;
            uVar34 = *puVar1 * 0x27d4eb4f + uVar39 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) +
                     uStack_40 + (uint)CARRY4(uVar34,uStack_48);
            bVar48 = uVar35 < 0x20;
            uVar35 = uVar35 - 0x20;
            uVar25 = uVar34 >> 1;
            uVar40 = uVar23 * -0x80000000 | uVar25;
            uVar23 = uVar23 >> 1;
            uVar46 = uVar34 * -0x80000000 | uVar23;
            iVar15 = iVar15 - (uint)bVar48;
            uVar34 = (uint)((ulonglong)uVar40 * 0x85ebca87);
            uVar39 = uVar46 * -0x7a143579 +
                     uVar40 * -0x61c8864f + (int)((ulonglong)uVar40 * 0x85ebca87 >> 0x20);
          } while ((uint)(uVar35 < 0x20) <= (uint)-iVar15);
          uVar35 = uVar34 << 1 | uVar39 >> 0x1f;
          uVar36 = uStack_38 << 7 | uStack_3c >> 0x19;
          uVar29 = uVar36 + uVar35;
          uVar37 = uStack_30 << 0xc | uStack_34 >> 0x14;
          uVar30 = uVar29 + uVar37;
          uStack_30 = (uStack_3c * 0x80 | uStack_38 >> 0x19) + (uVar39 * 2 | uVar34 >> 0x1f) +
                      (uint)CARRY4(uVar36,uVar35) + (uStack_34 * 0x1000 | uStack_30 >> 0x14) +
                      (uint)CARRY4(uVar29,uVar37);
          uStack_34 = (uint)((ulonglong)uVar40 * 0x80000000 >> 0x20);
          uVar35 = (uint)((ulonglong)uVar40 * 0x80000000) |
                   uVar46 * 0xf796ca9 +
                   uVar40 * -0x210ca4ff + (int)((ulonglong)uVar40 * 0xf796ca9 >> 0x20) >> 1;
          uVar42 = uStack_44 << 0x12 | uStack_2c >> 0xe;
          lVar5 = (ulonglong)uVar35 * 0x85ebca87;
          uVar31 = uVar30 + uVar42 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar31 * 0x85ebca87;
          uStack_38 = (uint)lVar6;
          uVar43 = (uint)((ulonglong)uVar20 * 0x80000000) |
                   uVar16 * 0xf796ca9 +
                   uVar20 * -0x210ca4ff + (int)((ulonglong)uVar20 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar43 * 0x85ebca87;
          uVar39 = uStack_38 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar39 * 0x85ebca87;
          uVar46 = (uint)lVar8;
          uVar29 = (uint)((ulonglong)uStack_54 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uStack_54 * -0x210ca4ff + (int)((ulonglong)uStack_54 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar29 * 0x85ebca87;
          uVar16 = uVar46 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar16 * 0x85ebca87;
          uVar36 = (uint)lVar10;
          uVar37 = (uint)((ulonglong)uStack_4c * 0x80000000) |
                   uStack_50 * 0xf796ca9 +
                   uStack_4c * -0x210ca4ff + (int)((ulonglong)uStack_4c * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar37 * 0x85ebca87;
          uVar40 = uVar36 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar40 * 0x85ebca87;
          uVar24 = (uint)lVar12;
          uVar34 = uVar24 + 0xc2b2ae63;
          iVar15 = ((((uStack_30 + (uStack_2c * 0x40000 | uStack_44 >> 0xe) +
                       (uint)CARRY4(uVar30,uVar42) ^
                      (uVar23 * -0x80000000 + uVar25 * -0x784349ac + uStack_34) * -0x7a143579 +
                      uVar35 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                      uVar31 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uStack_38) ^
                     (uVar22 * -0x80000000 +
                     uVar44 * -0x784349ac + (int)((ulonglong)uVar20 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar43 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                     -0x7a143579 + uVar39 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar46) ^
                    (uVar19 * -0x80000000 +
                    uVar45 * -0x784349ac + (int)((ulonglong)uStack_54 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar29 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                    -0x7a143579 + uVar16 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                   (uVar18 * -0x80000000 +
                   uVar26 * -0x784349ac + (int)((ulonglong)uStack_4c * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                   -0x7a143579 + uVar40 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar24);
          uStack_6c = uVar27;
          puStack_68 = puVar41;
        }
        uVar35 = uVar34 + uVar27;
        uVar39 = uVar27 & 0x1f;
        uStack_2c = iVar15 + (uint)CARRY4(uVar34,uVar27);
        uVar34 = 0;
        puVar41 = (uint *)((int)puVar41 + (uVar27 & 0xffffffe0));
        do {
          if (uVar34 == 0 && (7 < uVar39) <= uVar34) {
            if (uVar34 == 0 && (3 < uVar39) <= uVar34) {
              if (uVar39 == 0 && uVar34 == 0) goto LAB_715c29e8;
              iVar15 = 1;
              lVar5 = (ulonglong)(uint)(byte)*puVar41 * 0x165667c5;
              uVar27 = (uint)lVar5 ^ uVar35;
              uStack_2c = (uint)(byte)*puVar41 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^
                          uStack_2c;
              uVar26 = uVar27 << 0xb | uStack_2c >> 0x15;
              lVar5 = (ulonglong)uVar26 * 0x85ebca87;
              uVar35 = (uint)lVar5;
              uStack_2c = (uStack_2c << 0xb | uVar27 >> 0x15) * -0x7a143579 +
                          uVar26 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
              uVar27 = 0xffffffff;
            }
            else {
              lVar5 = (ulonglong)*puVar41 * 0x85ebca87;
              uVar27 = (uint)lVar5 ^ uVar35;
              uStack_2c = *puVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uStack_2c;
              uVar26 = uVar27 << 0x17 | uStack_2c >> 9;
              lVar5 = (ulonglong)uVar26 * 0x27d4eb4f;
              uVar18 = (uint)lVar5;
              iVar15 = 4;
              uVar35 = uVar18 + 0x9e3779f9;
              uStack_2c = (uStack_2c << 0x17 | uVar27 >> 9) * 0x27d4eb4f +
                          uVar26 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                          (uint)(0x61c88606 < uVar18);
              uVar27 = 0xfffffffc;
            }
          }
          else {
            uVar27 = *puVar41;
            uVar26 = (uint)((ulonglong)uVar27 * 0x80000000) |
                     puVar41[1] * 0x27d4eb4f +
                     uVar27 * -0x3d4d51c3 + (int)((ulonglong)uVar27 * 0x27d4eb4f >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar26 * 0x85ebca87;
            uStack_2c = (puVar41[1] * -0x80000000 +
                        uVar27 * -0x6c158a59 + (int)((ulonglong)uVar27 * 0x80000000 >> 0x20)) *
                        -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^
                        uStack_2c;
            uVar27 = (uint)lVar5 ^ uVar35;
            iVar15 = 8;
            uVar26 = uVar27 << 0x1b | uStack_2c >> 5;
            lVar5 = (ulonglong)uVar26 * 0x85ebca87;
            uVar18 = (uint)lVar5;
            uVar35 = uVar18 + 0xc2b2ae63;
            uStack_2c = (uStack_2c << 0x1b | uVar27 >> 5) * -0x7a143579 +
                        uVar26 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar18);
            uVar27 = 0xfffffff8;
            uStack_30 = uVar34;
          }
          bVar48 = CARRY4(uVar27,uVar39);
          uVar39 = uVar27 + uVar39;
          puVar41 = (uint *)((int)puVar41 + iVar15);
          uVar34 = (uVar34 - 1) + (uint)bVar48;
        } while( true );
      }
      goto LAB_715c3134;
    }
  }
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b00036;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_715c3478:
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000c;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_715c3518:
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
  } while (pbVar38 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000e;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_715c35b8:
  pbVar38 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70082848,0x3c,0x22);
  do {
    *pbVar38 = *pbVar38 ^ 0x50;
    pbVar38 = pbVar38 + 1;
    uVar50 = (byte *)0x3b < pbVar38;
    uVar49 = pbVar38 == (byte *)0x3c;
  } while (!(bool)uVar49);
  uRam00000000 = 0xe3b00010;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
  coprocessor_function2(6,10,0,in_cr15,in_cr11,in_cr0);
  coprocessor_function2(5,10,3,in_cr15,in_cr11,in_cr4);
  coprocessor_function2(4,10,6,in_cr15,in_cr11,in_cr4);
  coprocessor_function2(4,10,1,in_cr15,in_cr11,in_cr4);
  coprocessor_function2(3,10,4,in_cr15,in_cr11,in_cr4);
  coprocessor_function2(2,10,7,in_cr15,in_cr11,in_cr4);
  coprocessor_function2(2,10,2,in_cr15,in_cr11,in_cr4);
  if (!(bool)uVar50 || (bool)uVar49) {
    coprocessor_storelong(0xd,in_cr8,extraout_r2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_715c2740:
  uVar35 = uVar35 ^ uVar27 >> 1;
  lVar5 = (ulonglong)uVar35 * 0x27d4eb4f;
  uVar34 = (uint)lVar5;
  uVar27 = uVar27 * 0x27d4eb4f + uVar35 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar34 = (uVar34 >> 0x1d | uVar27 * 8) ^ uVar34;
  lVar5 = (ulonglong)uVar34 * 0x9e3779f9;
  uVar27 = (uVar27 ^ uVar27 >> 0x1d) * -0x61c88607 +
           uVar34 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  piStack_74 = piVar33;
  if (puStack_68 != (uint *)(uVar27 ^ (uint)lVar5) || uStack_6c != uVar27) goto LAB_715c3478;
  piVar14 = (int *)piStack_64[1];
  piVar21 = piStack_64;
  if ((int *)piStack_64[1] == (int *)0x0) {
    do {
      piVar17 = (int *)piVar21[2];
      bVar48 = (int *)*piVar17 != piVar21;
      piVar21 = piVar17;
    } while (bVar48);
  }
  else {
    do {
      piVar17 = piVar14;
      piVar14 = (int *)*piVar17;
    } while ((int *)*piVar17 != (int *)0x0);
  }
  if (piVar17 == piVar33) goto LAB_715c1bf0;
  goto LAB_715c2140;
LAB_715c30d4:
  uVar35 = uVar35 ^ uVar34 >> 1;
  lVar5 = (ulonglong)uVar35 * 0x27d4eb4f;
  uVar39 = (uint)lVar5;
  uVar27 = uVar34 * 0x27d4eb4f + uVar35 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar39 = (uVar39 >> 0x1d | uVar27 * 8) ^ uVar39;
  lVar5 = (ulonglong)uVar39 * 0x9e3779f9;
  piVar17 = (int *)((uVar27 ^ uVar27 >> 0x1d) * -0x61c88607 +
                   uVar39 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20));
  if (uStack_60 == ((uint)piVar17 ^ (uint)lVar5) && piStack_64 == piVar17) goto LAB_715c3134;
  goto LAB_715c35b8;
LAB_715c29e8:
  uVar35 = uVar35 ^ uStack_2c >> 1;
  lVar5 = (ulonglong)uVar35 * 0x27d4eb4f;
  uVar34 = (uint)lVar5;
  uVar27 = uStack_2c * 0x27d4eb4f + uVar35 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar34 = (uVar34 >> 0x1d | uVar27 * 8) ^ uVar34;
  lVar5 = (ulonglong)uVar34 * 0x9e3779f9;
  piVar17 = (int *)((uVar27 ^ uVar27 >> 0x1d) * -0x61c88607 +
                   uVar34 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20));
  uStack_5c = 3;
  if (uStack_60 == ((uint)piVar17 ^ (uint)lVar5) && piStack_64 == piVar17) {
    uStack_5c = 3;
LAB_715c3134:
    bVar48 = *(int *)(auStack_80[0] + 0x8c) != 0;
    iVar15 = 0;
    if (bVar48) {
      iVar15 = *(int *)(auStack_80[0] + 8);
    }
    if ((bVar48 && iVar15 != 0) && (iVar15 = FUN_71351810(), iVar15 != 0)) {
      cVar4 = *(char *)(auStack_80[0] + 0x52);
      *DAT_7118e024 = cVar4;
      FUN_713c1958(*(undefined4 *)(auStack_80[0] + 0x8c),cVar4 == '\0');
      iVar15 = *(int *)(*(int *)(auStack_80[0] + 0x8c) + 0x444);
      *(ushort *)(iVar15 + 0x34) = *(ushort *)(iVar15 + 0x34) & 0xfff7;
      *DAT_7118e024 = '\0';
    }
    uVar13 = uStack_70;
    uVar27 = auStack_80[0];
    FUN_713bbf6c(*(undefined4 *)(auStack_80[0] + 0x8c),uStack_70,uStack_88,0);
    FUN_713bc3bc(*(undefined4 *)(uVar27 + 0x8c),uVar13);
    return;
  }
  goto LAB_715c3518;
}


// =========================================================================
// Function: FUN_715c3a48
// Entry: 0x715c3a48 | Size: 24 bytes
// =========================================================================

void FUN_715c3a48(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x8c) != 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((bVar3 && iVar2 != 0) && (iVar2 = FUN_71351810(), iVar2 != 0)) {
    cVar1 = *(char *)(param_1 + 0x52);
    *DAT_7118e024 = cVar1;
    FUN_713c1958(*(undefined4 *)(param_1 + 0x8c),cVar1 == '\0');
    iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0x444);
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfff7;
    *DAT_7118e024 = '\0';
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c3b44
// Entry: 0x715c3b44 | Size: 72 bytes
// =========================================================================

void FUN_715c3b44(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (0x2e < param_2) {
    param_2 = 0;
  }
  bVar3 = *(int *)(param_1 + 0x8c) != 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((bVar3 && iVar2 != 0) && (iVar2 = FUN_71351810(), iVar2 != 0)) {
    bVar3 = *(int *)(param_1 + 0x8c) != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 8);
    }
    if ((bVar3 && iVar2 != 0) && (iVar2 = FUN_71351810(), iVar2 != 0)) {
      cVar1 = *(char *)(param_1 + 0x52);
      *DAT_7118e024 = cVar1;
      FUN_713c1958(*(undefined4 *)(param_1 + 0x8c),cVar1 == '\0');
      iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0x444);
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfff7;
      *DAT_7118e024 = '\0';
    }
    FUN_713bc3bc(*(undefined4 *)(param_1 + 0x8c),param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c3d90
// Entry: 0x715c3d90 | Size: 24 bytes
// =========================================================================

void FUN_715c3d90(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x8c) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if ((bVar2 && iVar1 != 0) && (iVar1 = FUN_71351810(), iVar1 != 0)) {
    *DAT_7118e024 = *(undefined1 *)(param_1 + 0x52);
    FUN_713c1958(*(undefined4 *)(param_1 + 0x8c),0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0x444);
    *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) | 8;
    *DAT_7118e024 = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c3e88
// Entry: 0x715c3e88 | Size: 16 bytes
// =========================================================================

void FUN_715c3e88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_713d324c(DAT_70b88990,param_2,*(int *)(param_1 + 0x8c),param_3,param_4,param_5,param_6,
                 param_7,param_8,param_9,param_10,param_11);
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c3f6c
// Entry: 0x715c3f58 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c3f6c(void)

{
  FUN_715c3f6c();
  return;
}


// =========================================================================
// Function: FUN_715c3f6c
// Entry: 0x715c3f6c | Size: 100 bytes
// =========================================================================

bool FUN_715c3f6c(uint param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0x590) != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 != 0) {
      param_1 = (uint)*(byte *)(iVar1 + 0x485);
    }
    if (iVar1 != 0 && (param_1 & 1) != 0) {
      if (*(int *)(*(int *)(iVar1 + 0x590) + 0x464) == iVar1) {
        return 0xfffffffd < *(ushort *)(*(int *)(iVar1 + 0x590) + 0x26) - 0x23b;
      }
      return true;
    }
  }
  return false;
}


// =========================================================================
// Function: thunk_FUN_715c4004
// Entry: 0x715c3ff0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4004(void)

{
  FUN_715c4004();
  return;
}


// =========================================================================
// Function: FUN_715c4004
// Entry: 0x715c4004 | Size: 12 bytes
// =========================================================================

undefined4 FUN_715c4004(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x590);
}


// =========================================================================
// Function: FUN_715c4028
// Entry: 0x715c4028 | Size: 24 bytes
// =========================================================================

void FUN_715c4028(int param_1)

{
  FUN_713c1f88(*(undefined4 *)(param_1 + 0x8c),0);
  FUN_713c0eac(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x440),0,1);
  imp___aeabi_memclr8(param_1 + 400,0x208);
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  return;
}


// =========================================================================
// Function: thunk_FUN_715c4104
// Entry: 0x715c40f0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4104(void)

{
  FUN_715c4104();
  return;
}


// =========================================================================
// Function: FUN_715c4104
// Entry: 0x715c4104 | Size: 16 bytes
// =========================================================================

void FUN_715c4104(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544) = param_2;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c4140
// Entry: 0x715c412c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4140(void)

{
  FUN_715c4140();
  return;
}


// =========================================================================
// Function: FUN_715c4140
// Entry: 0x715c4140 | Size: 20 bytes
// =========================================================================

undefined4 FUN_715c4140(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544);
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_715c4180
// Entry: 0x715c416c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4180(void)

{
  FUN_715c4180();
  return;
}


// =========================================================================
// Function: FUN_715c4180
// Entry: 0x715c4180 | Size: 16 bytes
// =========================================================================

void FUN_715c4180(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x54c) = param_2;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c41bc
// Entry: 0x715c41a8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c41bc(void)

{
  FUN_715c41bc();
  return;
}


// =========================================================================
// Function: FUN_715c41bc
// Entry: 0x715c41bc | Size: 20 bytes
// =========================================================================

undefined4 FUN_715c41bc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x54c);
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_715c41fc
// Entry: 0x715c41e8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c41fc(void)

{
  FUN_715c41fc();
  return;
}


// =========================================================================
// Function: FUN_715c41fc
// Entry: 0x715c41fc | Size: 24 bytes
// =========================================================================

undefined4 FUN_715c41fc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x444) + 0x44);
  }
  return uVar1;
}


// =========================================================================
// Function: thunk_FUN_715c4240
// Entry: 0x715c422c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4240(void)

{
  FUN_715c4240();
  return;
}


// =========================================================================
// Function: FUN_715c4240
// Entry: 0x715c4240 | Size: 20 bytes
// =========================================================================

void FUN_715c4240(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x444) + 0x18) = param_2;
  }
  return;
}


// =========================================================================
// Function: FUN_715c426c
// Entry: 0x715c426c | Size: 28 bytes
// =========================================================================

void FUN_715c426c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    FUN_715d33c8(&DAT_70082552,param_2);
    FUN_715d33c8(&DAT_70082564,*(undefined4 *)(param_1 + 8),param_2);
    thunk_FUN_715600f0(param_1,auStack_58);
    uVar3 = FUN_71ba1638(uStack_24);
    uVar4 = FUN_71ba1638(uStack_28);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_715d33c8(&DAT_70082576,uVar2,(int)uVar4,uVar2,uVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_715c4810
// Entry: 0x715c4810 | Size: 344 bytes
// =========================================================================

void FUN_715c4810(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(int *)(param_1 + 0x8c) != 0) && (iVar1 = FUN_713513f4(param_2), iVar1 != 0)) &&
     (iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar2 != 0)) {
    if (((*(int *)(param_1 + 0x8c) != 0) &&
        (iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar2 != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x8c) + *(char *)(*(int *)(param_1 + 0x8c) + 0x71c) * 0x1c +
                0x5a4) == 0x2e)) {
      *DAT_7118e024 = *(undefined1 *)(param_1 + 0x52);
      thunk_FUN_7151e868();
      FUN_7151e770(*(undefined1 *)(param_1 + 0x52));
      FUN_715c3b44(param_1,0);
      thunk_FUN_7151e684();
      *DAT_7118e024 = 0;
    }
    if (param_3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar5 = 3000;
      puVar3 = &DAT_700825be;
    }
    else {
      if ((*(short *)(iVar1 + 0x26) != 0x23a) ||
         (iVar2 = *(int *)(param_1 + 0x8c), iVar1 = FUN_713c301c(0), iVar2 != iVar1)) {
        FUN_715d33c8(&DAT_700825ac,*(undefined4 *)(param_1 + 8),param_2,3000,0xffffffff);
        return;
      }
      uVar4 = *(undefined4 *)(param_1 + 8);
      uVar5 = 0xffffffff;
      puVar3 = &DAT_7008259a;
    }
    FUN_715d33c8(puVar3,uVar4,param_2,uVar5);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c4cdc
// Entry: 0x715c4cdc | Size: 24 bytes
// =========================================================================

void FUN_715c4cdc(int param_1)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_7135203c(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x590));
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c4d3c
// Entry: 0x715c4d28 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4d3c(void)

{
  FUN_715c4d3c();
  return;
}


// =========================================================================
// Function: FUN_715c4d3c
// Entry: 0x715c4d3c | Size: 164 bytes
// =========================================================================

undefined4 FUN_715c4d3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if ((*(char *)(iVar1 + 0x44c) == '2') && (iVar2 = *(int *)(iVar1 + 0x590), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x464) == iVar1) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x468) == iVar1) {
      return 1;
    }
    if (*(int *)(iVar2 + 0x46c) == iVar1) {
      return 2;
    }
    if (*(int *)(iVar2 + 0x470) == iVar1) {
      return 3;
    }
    if (*(int *)(iVar2 + 0x474) == iVar1) {
      return 4;
    }
    if (*(int *)(iVar2 + 0x478) == iVar1) {
      return 5;
    }
    if (*(int *)(iVar2 + 0x47c) == iVar1) {
      return 6;
    }
    if (*(int *)(iVar2 + 0x480) == iVar1) {
      return 7;
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: thunk_FUN_715c4e0c
// Entry: 0x715c4df8 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c4e0c(void)

{
  FUN_715c4e0c();
  return;
}


// =========================================================================
// Function: FUN_715c4e0c
// Entry: 0x715c4e0c | Size: 12 bytes
// =========================================================================

undefined1 FUN_715c4e0c(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x44c);
}


// =========================================================================
// Function: FUN_715c4e30
// Entry: 0x715c4e30 | Size: 300 bytes
// =========================================================================

void FUN_715c4e30(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    *(char *)(param_1 + 0x80) = (char)param_2;
    thunk_FUN_7156a9f4(param_2,3);
    thunk_FUN_7156ad48(param_2,3);
    thunk_FUN_7156ab84(param_2,3);
    FUN_715d33c8(&DAT_700825e2,*(undefined1 *)(param_1 + 0x52),param_2);
    FUN_715d33c8(&DAT_700825f4,*(undefined4 *)(param_1 + 8),param_2 ^ 1);
    if ((param_2 ^ 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x8c);
      bVar1 = 0;
      if (iVar2 != 0) {
        bVar1 = *(byte *)(iVar2 + 0x485);
      }
      if ((iVar2 == 0 || (bVar1 & 1) == 0) &&
         ((((iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c)), iVar2 == 0 ||
            (iVar2 = thunk_FUN_715609f0(param_1), iVar2 == 0)) ||
           (piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x10),
           piVar3 == (int *)0x0)) || (iVar2 = (**(code **)(*piVar3 + 0x14))(), iVar2 != 0x517)))) {
        thunk_FUN_715600f0(param_1,auStack_50);
        FUN_715601e8(param_1,uStack_20,uStack_1c,uStack_18);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c50e4
// Entry: 0x715c50e4 | Size: 24 bytes
// =========================================================================

bool FUN_715c50e4(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  bVar3 = false;
  if (((iVar1 != 0) && (iVar1 = thunk_FUN_715609f0(param_1), iVar1 != 0)) &&
     (piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x10), piVar2 != (int *)0x0))
  {
    iVar1 = (**(code **)(*piVar2 + 0x14))();
    bVar3 = iVar1 == 0x517;
  }
  return bVar3;
}


// =========================================================================
// Function: thunk_FUN_715c51c4
// Entry: 0x715c51b0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c51c4(void)

{
  FUN_715c51c4();
  return;
}


// =========================================================================
// Function: FUN_715c51c4
// Entry: 0x715c51c4 | Size: 8 bytes
// =========================================================================

undefined1 FUN_715c51c4(int param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}


// =========================================================================
// Function: thunk_FUN_715c522c
// Entry: 0x715c5218 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c522c(void)

{
  FUN_715c522c();
  return;
}


// =========================================================================
// Function: FUN_715c522c
// Entry: 0x715c522c | Size: 8 bytes
// =========================================================================

undefined1 FUN_715c522c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}


// =========================================================================
// Function: FUN_715c524c
// Entry: 0x715c524c | Size: 24 bytes
// =========================================================================

void FUN_715c524c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x8c) != 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 8);
  }
  if ((bVar3 && iVar2 != 0) && (iVar2 = FUN_71351810(), iVar2 != 0)) {
    cVar1 = *(char *)(param_1 + 0x52);
    *DAT_7118e024 = cVar1;
    FUN_713c1958(*(undefined4 *)(param_1 + 0x8c),cVar1 == '\0');
    iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0x444);
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfff7;
    *DAT_7118e024 = '\0';
  }
  *DAT_7118e024 = *(char *)(param_1 + 0x52);
  FUN_713bdc8c(*(undefined4 *)(param_1 + 0x8c));
  *DAT_7118e024 = '\0';
  return;
}


// =========================================================================
// Function: FUN_715c53c0
// Entry: 0x715c53c0 | Size: 24 bytes
// =========================================================================

void FUN_715c53c0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x768) = 0x34;
  }
  return;
}


// =========================================================================
// Function: FUN_715c543c
// Entry: 0x715c543c | Size: 148 bytes
// =========================================================================

void FUN_715c543c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  uVar2 = FUN_71ba1638(param_3);
  uVar3 = FUN_71ba1638(param_4);
  uVar4 = FUN_71ba1638(param_5);
  uVar5 = FUN_71ba1638(param_2);
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
  FUN_715d33c8(&DAT_70082606,uVar1,(int)uVar5,uVar1,uVar2,uVar3,uVar4,0);
  return;
}


// =========================================================================
// Function: FUN_715c559c
// Entry: 0x715c559c | Size: 24 bytes
// =========================================================================

void FUN_715c559c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = FUN_715ec544(param_2);
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x55c) = uVar2;
    uVar2 = FUN_715ec544(param_2);
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x560) = uVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_715c566c
// Entry: 0x715c566c | Size: 40 bytes
// =========================================================================

void FUN_715c566c(int param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int aiStack_78 [12];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  undefined1 uStack_31;
  int *piStack_30;
  int aiStack_2c [2];
  
  piVar14 = (int *)(param_1 + 0x98);
  piVar12 = (int *)*piVar14;
  piVar15 = piVar14;
  iStack_38 = param_3;
  if (piVar12 != (int *)0x0) {
    do {
      piVar3 = piVar12;
      if (piVar12[4] < param_3) {
        piVar12 = piVar12 + 1;
        piVar3 = piVar15;
      }
      piVar12 = (int *)*piVar12;
      piVar15 = piVar3;
    } while (piVar12 != (int *)0x0);
    if ((piVar3 != piVar14) && (piVar3[4] <= param_3)) {
      FUN_715c5e54(param_1,param_3);
    }
  }
  iVar6 = FUN_715ec2b0(*param_2);
  if (iVar6 == 0) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44e8);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44d8);
      *(undefined1 *)((int)puVar9 + 0x21) = 1;
      uVar5 = DAT_700828b4;
      uVar4 = DAT_700828b0;
      uVar7 = DAT_700828ac;
      *puVar9 = DAT_700828a8;
      puVar9[1] = uVar7;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      uVar5 = DAT_700828c4;
      uVar4 = DAT_700828c0;
      uVar7 = DAT_700828bc;
      puVar9[4] = DAT_700828b8;
      puVar9[5] = uVar7;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      *(undefined1 *)(puVar9 + 8) = DAT_700828c8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1368,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44e8);
      *puVar10 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44d8);
    if (*(char *)(iVar6 + 0x21) != '\0') {
      uVar13 = 0;
      uVar18 = 0;
      do {
        iVar16 = (uVar13 & 7) * 8;
        uVar17 = iVar16 - 0x20;
        bVar11 = (byte)(0xba933f1 >> iVar16) |
                 (byte)(0x6b8d156f << ((uVar13 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar17) {
          bVar11 = (byte)(0x6b8d156f >> (uVar17 & 0xff));
        }
        *(byte *)(iVar6 + uVar13) = *(byte *)(iVar6 + uVar13) ^ bVar11;
        bVar19 = 0xfffffffe < uVar13;
        bVar1 = uVar18 == 0;
        bVar2 = (0x1f < uVar13) <= uVar18;
        uVar13 = uVar13 + 1;
        uVar18 = uVar18 + bVar19;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x21) = 0;
    }
    FUN_716486e8(iVar6,*param_2);
    return;
  }
  iVar6 = param_1 + 0x94;
  piStack_84 = &iStack_38;
  FUN_715d1684(aiStack_78,iVar6,&iStack_38,&DAT_700828c9,&piStack_84,aiStack_2c);
  imp___aeabi_memcpy(aiStack_78[0] + 0x14,param_2,0x34);
  thunk_FUN_715600f0(param_1,aiStack_78);
  FUN_7136cdfc(&piStack_84);
  uVar7 = thunk_MwhHq(0x118);
  FUN_715b6bc4(uVar7,*param_2,uStack_48,uStack_44,uStack_40,piStack_84,uStack_80,uStack_7c,
               0x43480000);
  piStack_30 = &iStack_38;
  FUN_715d1684(aiStack_2c,iVar6,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
  *(undefined4 *)(aiStack_2c[0] + 0x48) = uVar7;
  piStack_30 = &iStack_38;
  FUN_715d1684(aiStack_2c,iVar6,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
  thunk_FUN_715607d8(*(undefined4 *)(aiStack_2c[0] + 0x48),0);
  piStack_30 = &iStack_38;
  FUN_715d1684(aiStack_2c,iVar6,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
  thunk_FUN_71560790(*(undefined4 *)(aiStack_2c[0] + 0x48),0);
  piStack_30 = &iStack_38;
  FUN_715d1684(aiStack_2c,iVar6,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
  if (*(int *)(*(int *)(aiStack_2c[0] + 0x48) + 4) != 0) {
    piStack_30 = &iStack_38;
    FUN_715d1684(aiStack_2c,iVar6,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
    FUN_714e8828(*(undefined4 *)(*(int *)(aiStack_2c[0] + 0x48) + 4));
  }
  if (DAT_711a3938 != 0) {
    piVar15 = (int *)(DAT_711a3938 + 0x1389c);
    iVar6 = *piVar15;
    if (iVar6 == 0) {
      iVar6 = FUN_713c301c(0);
      if (iVar6 == 0) {
        if (*piVar15 != param_1) {
          return;
        }
        goto LAB_715c5994;
      }
      thunk_MwhHq(0x3a0);
      iVar6 = FUN_715ba834();
      *piVar15 = iVar6;
    }
    if (iVar6 == param_1) {
LAB_715c5994:
      FUN_714ebe70();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c5e54
// Entry: 0x715c5e54 | Size: 32 bytes
// =========================================================================

void FUN_715c5e54(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  int iStack_38;
  undefined1 uStack_31;
  int *piStack_30;
  int aiStack_2c [2];
  
  piVar8 = (int *)(param_1 + 0x98);
  piVar2 = (int *)*piVar8;
  if (piVar2 != (int *)0x0) {
    puVar9 = (undefined4 *)(param_1 + 0x94);
    piVar6 = piVar8;
    piVar5 = piVar2;
    do {
      piVar7 = piVar5;
      if (piVar5[4] < param_2) {
        piVar5 = piVar5 + 1;
        piVar7 = piVar6;
      }
      piVar6 = piVar7;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    piVar5 = piVar8;
    piVar7 = piVar8;
    if ((piVar6 != piVar8) && (piVar7 = piVar6, param_2 < piVar6[4])) {
      piVar7 = piVar8;
    }
    do {
      piVar6 = piVar2;
      if (piVar2[4] < param_2) {
        piVar2 = piVar2 + 1;
        piVar6 = piVar5;
      }
      piVar2 = (int *)*piVar2;
      piVar5 = piVar6;
    } while (piVar2 != (int *)0x0);
    iStack_38 = param_2;
    if ((piVar6 != piVar8) && (piVar6[4] <= param_2)) {
      piStack_30 = &iStack_38;
      FUN_715d1684(aiStack_2c,puVar9,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
      if (*(int *)(aiStack_2c[0] + 0x48) != 0) {
        piStack_30 = &iStack_38;
        FUN_715d1684(aiStack_2c,puVar9,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
        if (*(int *)(*(int *)(aiStack_2c[0] + 0x48) + 4) != 0) {
          piStack_30 = &iStack_38;
          FUN_715d1684(aiStack_2c,puVar9,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
          FUN_714e88ac(*(undefined4 *)(*(int *)(aiStack_2c[0] + 0x48) + 4));
        }
        piStack_30 = &iStack_38;
        FUN_715d1684(aiStack_2c,puVar9,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
        if (*(int **)(aiStack_2c[0] + 0x48) != (int *)0x0) {
          (**(code **)(**(int **)(aiStack_2c[0] + 0x48) + 4))();
        }
        piStack_30 = &iStack_38;
        FUN_715d1684(aiStack_2c,puVar9,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
        *(undefined4 *)(aiStack_2c[0] + 0x48) = 0;
      }
    }
    piVar5 = (int *)*piVar8;
    piVar2 = piVar8;
    piVar6 = piVar5;
    if (piVar5 != (int *)0x0) {
      do {
        piVar1 = piVar6;
        if (piVar6[4] < iStack_38) {
          piVar6 = piVar6 + 1;
          piVar1 = piVar2;
        }
        piVar6 = (int *)*piVar6;
        piVar2 = piVar1;
      } while (piVar6 != (int *)0x0);
      if ((piVar1 != piVar8) && (piVar1[4] <= iStack_38)) {
        piVar6 = (int *)piVar1[1];
        if ((int *)piVar1[1] == (int *)0x0) {
          do {
            piVar4 = (int *)piVar2[2];
            bVar10 = (int *)*piVar4 != piVar2;
            piVar2 = piVar4;
          } while (bVar10);
        }
        else {
          do {
            piVar4 = piVar6;
            piVar6 = (int *)*piVar4;
          } while ((int *)*piVar4 != (int *)0x0);
        }
        if ((int *)*puVar9 == piVar1) {
          *puVar9 = piVar4;
        }
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
        FUN_71368054(piVar5,piVar1);
        thunk_qNQrlu(piVar1);
      }
    }
    piVar2 = piVar7;
    if (piVar7 != piVar8) {
      piVar2 = DAT_711a3938;
    }
    if (piVar7 == piVar8 || piVar2 == (int *)0x0) {
      return;
    }
    piVar2 = piVar2 + 0x4e27;
    iVar3 = *piVar2;
    if (iVar3 == 0) {
      iVar3 = FUN_713c301c(0);
      if (iVar3 == 0) {
        if (*piVar2 != param_1) {
          return;
        }
        goto LAB_715c6128;
      }
      thunk_MwhHq(0x3a0);
      iVar3 = FUN_715ba834();
      *piVar2 = iVar3;
    }
    if (iVar3 == param_1) {
LAB_715c6128:
      FUN_714ebe70();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c6380
// Entry: 0x715c636c | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c6380(void)

{
  FUN_715c6380();
  return;
}


// =========================================================================
// Function: FUN_715c6380
// Entry: 0x715c6380 | Size: 436 bytes
// =========================================================================

void FUN_715c6380(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  bVar10 = *(int *)(param_1 + 0x8c) != 0;
  if (bVar10) {
    param_1 = *(int *)(*(int *)(param_1 + 4) + 0x18);
  }
  if (bVar10 && param_1 != 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_70ffcaec & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffcaec), iVar3 != 0))
    {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea94,param_2,param_3 != 0);
      if (*pcVar4 == '\0') {
        iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea84);
        *(undefined1 *)(iVar3 + 0x54) = 1;
        imp___aeabi_memcpy8(iVar3,&DAT_7007d1c0,0x54);
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71432764,iVar3,&DAT_70b0e000);
        puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea94);
        *puVar5 = 1;
      }
      iVar3 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bea84);
      if (*(char *)(iVar3 + 0x54) != '\0') {
        uVar6 = 0;
        uVar7 = 0;
        do {
          iVar8 = (uVar6 & 7) * 8;
          bVar2 = (byte)(0x533949bf >> iVar8) |
                  (byte)(0x11c707c3 << ((uVar6 & 7) * -8 + 0x20 & 0xff));
          uVar9 = iVar8 - 0x20;
          if (-1 < (int)uVar9) {
            bVar2 = (byte)(0x11c707c3 >> (uVar9 & 0xff));
          }
          *(byte *)(iVar3 + uVar6) = *(byte *)(iVar3 + uVar6) ^ bVar2;
          bVar11 = 0xfffffffe < uVar6;
          bVar10 = uVar7 == 0;
          bVar1 = (0x52 < uVar6) <= uVar7;
          uVar6 = uVar6 + 1;
          uVar7 = uVar7 + bVar11;
        } while (bVar10 && bVar1);
        *(undefined1 *)(iVar3 + 0x54) = 0;
      }
      DAT_70ffcae8 = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar3,1);
      thunk_SixizuLbAnqfgRApsCY(&DAT_70ffcaec);
    }
                    /* WARNING: Could not recover jumptable at 0x71416ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_70ffcae8)(param_1,param_2,param_3 != 0);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c63d8
// Entry: 0x715c63d8 | Size: 248 bytes
// =========================================================================

void FUN_715c63d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iStack_38;
  undefined1 uStack_31;
  int *piStack_30;
  int aiStack_2c [2];
  
  piVar2 = (int *)(param_1 + 0x98);
  piVar3 = (int *)*piVar2;
  if (piVar3 != (int *)0x0) {
    piVar4 = piVar2;
    do {
      piVar1 = piVar3;
      if (piVar3[4] < param_2) {
        piVar3 = piVar3 + 1;
        piVar1 = piVar4;
      }
      piVar4 = piVar1;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
    if ((piVar4 != piVar2) && (piVar4[4] <= param_2)) {
      iStack_38 = param_2;
      piStack_30 = &iStack_38;
      FUN_715d1684(aiStack_2c,param_1 + 0x94,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
      if (*(int *)(aiStack_2c[0] + 0x48) != 0) {
        piStack_30 = &iStack_38;
        FUN_715d1684(aiStack_2c,param_1 + 0x94,&iStack_38,&DAT_700828c9,&piStack_30,&uStack_31);
        FUN_715b8208(*(undefined4 *)(aiStack_2c[0] + 0x48),param_3,param_4,0,param_5,param_5);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c6584
// Entry: 0x715c6584 | Size: 32 bytes
// =========================================================================

void FUN_715c6584(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
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
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_713b45b4();
    piVar8 = *(int **)(param_1 + 0x94);
    while (piVar8 != (int *)(param_1 + 0x98)) {
      iVar10 = piVar8[0x12];
      iVar4 = thunk_FUN_715609f0(param_1);
      if (iVar4 == 0) {
LAB_715c6868:
        FUN_715601e8(iVar10,0,0,0);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x8c);
        if ((*(byte *)(iVar4 + 0x485) & 1) != 0) {
          thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
          thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
          if (DAT_712016e0 == 0) goto LAB_715c6868;
          iVar4 = *(int *)(param_1 + 0x8c);
        }
        iVar4 = FUN_714172f4(*(undefined4 *)(iVar4 + 0x18));
        if ((iVar4 != 0) && (iVar5 = FUN_71416a78(iVar4,piVar8[6]), iVar5 != -1)) {
          (**(code **)(**(int **)(iVar10 + 4) + 0x10))();
          imp___aeabi_memcpy(&uStack_68,*(int *)(iVar4 + 8) + iVar5 * 0x40,0x40);
          uVar6 = FUN_7155c620(param_1);
          uStack_30 = FUN_71ba0b38(uVar6,uStack_30);
          uVar6 = FUN_7136cdfc(&uStack_74);
          FUN_715eea98(uVar6,&uStack_68,piVar8 + 7);
          uStack_38 = uStack_74;
          uStack_34 = uStack_70;
          uStack_30 = uStack_6c;
          iVar5 = piVar8[10];
          iVar4 = FUN_71ba2cf0(iVar5,0);
          if (iVar4 == 0) {
            FUN_7141c000(&uStack_68,&DAT_700c3058,iVar5,1);
          }
          iVar5 = piVar8[0xb];
          iVar4 = FUN_71ba2cf0(iVar5,0);
          if (iVar4 == 0) {
            FUN_7141c000(&uStack_68,&DAT_700c3064,iVar5,1);
          }
          iVar5 = piVar8[0xc];
          iVar4 = FUN_71ba2cf0(iVar5,0);
          if (iVar4 == 0) {
            FUN_7141c000(&uStack_68,&DAT_700c3070,iVar5,1);
          }
          piVar7 = (int *)(DAT_711a3938 + 0x1389c);
          if ((*piVar7 == 0) && (iVar4 = FUN_713c301c(0), iVar4 != 0)) {
            thunk_MwhHq(0x3a0);
            iVar4 = FUN_715ba834();
            *piVar7 = iVar4;
          }
          iVar4 = thunk_FUN_7151dfd0();
          piVar7 = (int *)(DAT_711a3938 + 0x1389c);
          iVar5 = *piVar7;
          if (iVar5 == 0) {
            iVar5 = FUN_713c301c(0);
            if (iVar5 == 0) {
              iVar5 = *piVar7;
            }
            else {
              thunk_MwhHq(0x3a0);
              iVar5 = FUN_715ba834();
              *piVar7 = iVar5;
            }
          }
          if (*(int *)(iVar5 + 0x8c) == *(int *)(param_1 + 0x8c)) {
            if ((8 < (uint)piVar8[6]) || ((1 << (piVar8[6] & 0xffU) & 0x130U) == 0)) {
              if (iVar4 == 0x2e) goto LAB_715c68ec;
              goto LAB_715c6894;
            }
            iVar5 = FUN_716ac9ac();
            if (((iVar5 == 0) && (1 < iVar4 - 7U)) && (iVar4 != 0x2e && iVar4 != 0x33))
            goto LAB_715c6894;
LAB_715c68ec:
            iStack_80 = 0;
            uStack_7c = 0;
            uStack_78 = 0;
            piVar7 = &iStack_80;
          }
          else {
LAB_715c6894:
            piVar7 = piVar8 + 0xd;
          }
          FUN_715ef454(&uStack_68,piVar7);
          uVar1 = uStack_38;
          iVar4 = FUN_71ba2d50(uStack_38 & 0x7fffffff,0x461c4000);
          uVar2 = uStack_34;
          if (((iVar4 == 0) &&
              (iVar4 = FUN_71ba2d50(uStack_34 & 0x7fffffff,0x461c4000), uVar3 = uStack_30,
              iVar4 == 0)) && (iVar4 = FUN_71ba2d50(uStack_30 & 0x7fffffff,0x461c4000), iVar4 == 0))
          {
            FUN_7156063c(iVar10,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,
                         uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uVar1,uVar2,
                         uVar3,uStack_2c);
            iVar4 = *(int *)(iVar10 + 4);
            if ((*(int *)(iVar4 + 0x18) != 0) && (*(int *)(iVar4 + 0x14) != 0)) {
              iVar5 = FUN_713b3a08();
              iVar4 = *(int *)(iVar10 + 4);
              if (iVar5 != 0) {
                FUN_71340e50(*(undefined4 *)(iVar4 + 0x14));
                iVar4 = *(int *)(iVar10 + 4);
              }
            }
            FUN_713b49d0(iVar4);
            FUN_715eedfc(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x18));
            (**(code **)(**(int **)(iVar10 + 4) + 8))();
            if (param_2 != 0) {
              FUN_71560398(iVar10);
              FUN_715eeeec(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x18));
            }
          }
        }
      }
      piVar7 = (int *)piVar8[1];
      piVar9 = piVar8;
      if ((int *)piVar8[1] == (int *)0x0) {
        do {
          piVar8 = (int *)piVar9[2];
          bVar11 = (int *)*piVar8 != piVar9;
          piVar9 = piVar8;
        } while (bVar11);
      }
      else {
        do {
          piVar8 = piVar7;
          piVar7 = (int *)*piVar8;
        } while ((int *)*piVar8 != (int *)0x0);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c6fb8
// Entry: 0x715c6fb8 | Size: 20 bytes
// =========================================================================

int * FUN_715c6fb8(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  iVar2 = 0;
  if (param_1[0x23] != 0) {
    iVar2 = param_1[2];
  }
  if (param_1[0x23] != 0 && iVar2 != 0) {
    uVar4 = FUN_71351810(iVar2);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    bVar3 = (int)uVar4 != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = param_1[0x23];
      iVar2 = *(int *)(iVar1 + 0x18);
    }
    if (bVar3 && iVar2 != 0) {
      iVar2 = *(int *)(iVar1 + 0x440);
      if (iVar2 != 0) {
        param_1 = *(int **)(iVar2 + 0x10);
      }
      if (iVar2 != 0 && param_1 != (int *)0x0) {
        do {
          iVar2 = FUN_7151fdb0(param_1);
          if (iVar2 != 0) {
            return param_1;
          }
          param_1 = (int *)(**(code **)(*param_1 + 0xc))(param_1);
        } while (param_1 != (int *)0x0);
      }
    }
  }
  return (int *)0x0;
}


// =========================================================================
// Function: FUN_715c70ac
// Entry: 0x715c70ac | Size: 20 bytes
// =========================================================================

int FUN_715c70ac(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  iVar2 = 0;
  if (param_1[0x23] != 0) {
    iVar2 = param_1[2];
  }
  if (param_1[0x23] != 0 && iVar2 != 0) {
    uVar4 = FUN_71351810(iVar2);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    bVar3 = (int)uVar4 != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = param_1[0x23];
      iVar2 = *(int *)(iVar1 + 0x18);
    }
    if (bVar3 && iVar2 != 0) {
      iVar2 = *(int *)(iVar1 + 0x440);
      if (iVar2 != 0) {
        param_1 = *(int **)(iVar2 + 0x10);
      }
      if (iVar2 != 0 && param_1 != (int *)0x0) {
        do {
          iVar2 = FUN_7151fe18(param_1);
          if (iVar2 != 0) {
            return iVar2;
          }
          param_1 = (int *)(**(code **)(*param_1 + 0xc))(param_1);
        } while (param_1 != (int *)0x0);
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_715c71a0
// Entry: 0x715c71a0 | Size: 24 bytes
// =========================================================================

int FUN_715c71a0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((param_1[0x23] != 0) && (iVar1 = thunk_FUN_715609f0(param_1), iVar1 != 0)) {
    iVar1 = 0;
    if (param_1[0x23] != 0) {
      iVar1 = param_1[2];
    }
    if (param_1[0x23] != 0 && iVar1 != 0) {
      uVar4 = FUN_71351810();
      iVar1 = (int)((ulonglong)uVar4 >> 0x20);
      bVar3 = (int)uVar4 != 0;
      iVar2 = 0;
      if (bVar3) {
        iVar2 = param_1[0x23];
        iVar1 = *(int *)(iVar2 + 0x18);
      }
      if (bVar3 && iVar1 != 0) {
        iVar1 = *(int *)(iVar2 + 0x440);
        if (iVar1 != 0) {
          param_1 = *(int **)(iVar1 + 0x10);
        }
        if (iVar1 != 0 && param_1 != (int *)0x0) {
          do {
            iVar1 = FUN_7151fdb0(param_1);
            if (iVar1 != 0) {
              return iVar1;
            }
            param_1 = (int *)(**(code **)(*param_1 + 0xc))(param_1);
          } while (param_1 != (int *)0x0);
        }
      }
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_715c72dc
// Entry: 0x715c72dc | Size: 456 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715c72dc(undefined4 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 uVar6;
  bool bVar7;
  uint auStack_98 [4];
  uint auStack_88 [4];
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [40];
  int iStack_28;
  
  uVar6 = 0;
  bVar7 = false;
  iStack_28 = _ext___stack_chk_guard;
  uVar1 = (param_2 & 0x3fffffff) >> 0x1c;
  if (uVar1 == 1) {
    uVar6 = 0xffffffff;
  }
  if (uVar1 == 2) {
    uVar6 = 1;
  }
  pcVar2 = (char *)FUN_7151f90c(param_2 & 0xffff);
  if (pcVar2 != (char *)0x0) {
    auStack_88[2] = 0;
    auStack_88[1] = 0;
    auStack_88[0] = 0;
    auStack_98[2] = 0;
    auStack_98[1] = 0;
    auStack_98[0] = 0;
    imp___aeabi_memclr8(auStack_50,0x28);
    imp___aeabi_memclr8(auStack_78,0x28);
    do {
      pcVar4 = pcVar2;
      puVar5 = auStack_98;
      if (bVar7) {
        puVar5 = auStack_88;
      }
      while( true ) {
        pcVar2 = pcVar4 + 1;
        if (*pcVar4 == '\0') {
          uVar1 = auStack_88[2];
          if ((auStack_88[0] & 1) == 0) {
            uVar1 = (uint)auStack_88 | 1;
          }
          imp___strcpy_chk(auStack_50,uVar1,0x28);
          uVar1 = auStack_98[2];
          if ((auStack_98[0] & 1) == 0) {
            uVar1 = (uint)auStack_98 | 1;
          }
          imp___strcpy_chk(auStack_78,uVar1,0x28);
          uVar3 = FUN_71ba1e0c(param_2 >> 0x10 & 0xff);
          FUN_715c7638(param_1,auStack_50,auStack_78,uVar3,(param_2 & 0x1ffffff) >> 0x18,
                       (param_2 & 0x3ffffff) >> 0x19,(param_2 & 0x7ffffff) >> 0x1a,
                       (param_2 & 0xfffffff) >> 0x1b,uVar6);
          if ((auStack_98[0] & 1) != 0) {
            thunk_qNQrlu(auStack_98[2]);
          }
          if ((auStack_88[0] & 1) != 0) {
            thunk_qNQrlu(auStack_88[2]);
          }
          goto LAB_715c7488;
        }
        if (*pcVar4 == ':') break;
        thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU(puVar5)
        ;
        pcVar4 = pcVar2;
      }
      bVar7 = true;
    } while( true );
  }
LAB_715c7488:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715c7638
// Entry: 0x715c7638 | Size: 28 bytes
// =========================================================================

void FUN_715c7638(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4508);
    if (*pcVar2 == '\0') {
      puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44f8);
      *puVar6 = 0xab8b6890;
      *(undefined1 *)(puVar6 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d13b8,puVar6,&DAT_70b0e000);
      puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4508);
      *puVar7 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c44f8);
    if (pbVar3[4] != 0) {
      pbVar3[4] = 0;
      *pbVar3 = *pbVar3 ^ 0xc3;
      pbVar3[1] = pbVar3[1] ^ 0x2d;
      pbVar3[2] = pbVar3[2] ^ 0xd3;
      pbVar3[3] = pbVar3[3] ^ 0xab;
    }
    iVar1 = imp_strcasecmp(param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_1 + 0x8c);
        iVar1 = 0;
        if (iVar4 != 0) {
          iVar1 = *(int *)(iVar4 + 0x440);
        }
        if ((iVar4 != 0 && iVar1 != 0) &&
           (piVar5 = (int *)FUN_7149eda4(iVar1 + 4), piVar5 != (int *)0x0)) {
          iVar1 = (**(code **)(*piVar5 + 0x14))();
          if (iVar1 - 0xd0U < 2) {
            return;
          }
          if (iVar1 == 0xf0) {
            return;
          }
          if (iVar1 == 0x115) {
            return;
          }
        }
      }
      iVar1 = FUN_71567160(DAT_711a3938,param_3);
      if (iVar1 == 0) {
        FUN_71568138(DAT_711a3938,param_3);
        iVar1 = FUN_71567160(DAT_711a3938,param_3);
        if (iVar1 == 0) {
          imp_usleep(1);
          iVar1 = FUN_71567160(DAT_711a3938,param_3);
          if (iVar1 == 0) {
            imp_usleep(1);
            iVar1 = FUN_71567160(DAT_711a3938,param_3);
            if (iVar1 == 0) {
              imp_usleep(1);
              iVar1 = FUN_71567160(DAT_711a3938,param_3);
              if (iVar1 == 0) {
                imp_usleep(1);
                iVar1 = FUN_71567160(DAT_711a3938,param_3);
                if (iVar1 == 0) {
                  imp_usleep(1);
                  iVar1 = FUN_71567160(DAT_711a3938,param_3);
                  if (iVar1 == 0) {
                    imp_usleep(1);
                    iVar1 = FUN_71567160(DAT_711a3938,param_3);
                    if (iVar1 == 0) {
                      imp_usleep(1);
                      iVar1 = FUN_71567160(DAT_711a3938,param_3);
                      if (iVar1 == 0) {
                        imp_usleep(1);
                        iVar1 = FUN_71567160(DAT_711a3938,param_3);
                        if (iVar1 == 0) {
                          imp_usleep(1);
                          iVar1 = FUN_71567160(DAT_711a3938,param_3);
                          if (iVar1 == 0) {
                            imp_usleep(1);
                            iVar1 = FUN_71567160(DAT_711a3938,param_3);
                            if (iVar1 == 0) {
                              imp_usleep(1);
                              iVar1 = FUN_71567160(DAT_711a3938,param_3);
                              if (iVar1 == 0) {
                                imp_usleep(1);
                                iVar1 = FUN_71567160(DAT_711a3938,param_3);
                                if (iVar1 == 0) {
                                  imp_usleep(1);
                                  iVar1 = FUN_71567160(DAT_711a3938,param_3);
                                  if (iVar1 == 0) {
                                    imp_usleep(1);
                                    iVar1 = FUN_71567160(DAT_711a3938,param_3);
                                    if (iVar1 == 0) {
                                      imp_usleep(1);
                                      iVar1 = FUN_71567160(DAT_711a3938,param_3);
                                      if (iVar1 == 0) {
                                        imp_usleep(1);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = FUN_71ba1638(param_4);
      FUN_715d33c8(&DAT_70082696,*(undefined4 *)(param_1 + 8),param_2,param_3,uVar8,param_5,param_6,
                   param_7,param_8,param_9);
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c82b4
// Entry: 0x715c82a0 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c82b4(void)

{
  FUN_715c82b4();
  return;
}


// =========================================================================
// Function: FUN_715c82b4
// Entry: 0x715c82b4 | Size: 168 bytes
// =========================================================================

void FUN_715c82b4(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x52);
  if (bVar1 == 0) {
    if (param_2 < 0xb) {
      uVar2 = FUN_71ba1e0c(param_3);
      (&DAT_7118dff8)[param_2] = uVar2;
      *(undefined4 *)(DAT_70b3ef40 + param_2 * 4 + 0x114) = uVar2;
      return;
    }
    return;
  }
  if (param_2 < 0xb) {
    uVar2 = FUN_71ba1e0c(param_3);
    (&DAT_71183368)[(short)(ushort)bVar1 * 0xb + param_2] = uVar2;
    return;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715c8334
// Entry: 0x715c8320 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715c8334(void)

{
  FUN_715c8334();
  return;
}


// =========================================================================
// Function: FUN_715c8334
// Entry: 0x715c8334 | Size: 48 bytes
// =========================================================================

bool FUN_715c8334(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar1 = FUN_71ba2d70(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x544),0);
    return iVar1 == 0;
  }
  return true;
}


// =========================================================================
// Function: FUN_715c8398
// Entry: 0x715c8398 | Size: 24 bytes
// =========================================================================

void FUN_715c8398(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x7c);
  if (*piVar1 != 0) {
    if (*piVar1 != 0) {
      FUN_715d33c8(&DAT_70082672);
    }
    *piVar1 = 0;
  }
  FUN_715d33c8(&DAT_7008263c,*(undefined4 *)(param_1 + 8),piVar1);
  FUN_715d33c8(&DAT_7008264e,*(undefined4 *)(param_1 + 0x7c),param_2);
  FUN_715d33c8(&DAT_70082660,*(undefined4 *)(param_1 + 0x7c),2);
  return;
}


// =========================================================================
// Function: FUN_715c8548
// Entry: 0x715c8548 | Size: 24 bytes
// =========================================================================

void FUN_715c8548(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x8c) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if ((bVar2 && iVar1 != 0) && (iVar1 = FUN_71351810(), iVar1 != 0)) {
    FUN_715d33c8(&DAT_70082684,*(undefined4 *)(param_1 + 8),param_2,6);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c861c
// Entry: 0x715c861c | Size: 132 bytes
// =========================================================================

undefined4 FUN_715c861c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x8c);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x440);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      piVar3 = (int *)FUN_7149eda4(iVar1 + 4);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      uVar4 = (**(code **)(*piVar3 + 0x14))();
      uVar6 = uVar4 - 0xd0;
      uVar2 = 1;
      if (1 < uVar6) {
        if (uVar4 != 0xf0) {
          uVar6 = 0x115;
        }
        if (uVar4 != 0xf0 && uVar4 != uVar6) {
          return 0;
        }
      }
    }
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715c86f0
// Entry: 0x715c86f0 | Size: 24 bytes
// =========================================================================

byte FUN_715c86f0(int param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int unaff_r6;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_711f6d58;
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    bVar3 = 0xff;
    if (iVar1 != 0) {
      unaff_r6 = *(int *)(iVar2 + 0xac);
    }
    if (iVar1 != 0 && unaff_r6 != 0) {
      bVar3 = *(byte *)(*(int *)(param_1 + 0x8c) + 0x768);
      if (bVar3 == 0x34) {
        iVar2 = 0xffff;
        bVar3 = 0x34;
        goto LAB_715c875c;
      }
      if (*(int *)(*(int *)(param_1 + 0x8c) + 0x76c) != 0) {
        if ((bVar3 < 0x2b) || ((bVar3 & 0xfe) == 0x32)) {
          iVar2 = FUN_71796d54(unaff_r6);
          if ((iVar2 != 0xffff) ||
             ((iVar2 = FUN_717b92b8(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x76c)),
              iVar2 != 0xffff &&
              (iVar2 = FUN_71796d54(unaff_r6,*(undefined4 *)
                                              (*(int *)(*(int *)(param_1 + 0x8c) + 0x76c) + 0x464)),
              iVar2 != 0xffff)))) goto LAB_715c875c;
        }
        else {
          if (bVar3 == 0x35) {
            iVar2 = FUN_717b92b8(iVar1);
            if ((iVar2 != 0xffff) &&
               (iVar2 = FUN_71796d54(unaff_r6,*(undefined4 *)
                                               (*(int *)(*(int *)(param_1 + 0x8c) + 0x76c) + 0x464))
               , iVar2 != 0xffff)) {
              bVar3 = 0x35;
              goto LAB_715c875c;
            }
            bVar3 = 0x35;
            goto LAB_715c8758;
          }
          if (((bVar3 == 0x31) && (iVar2 = FUN_717b92b8(iVar1), iVar2 != 0xffff)) &&
             (iVar2 = FUN_71796d54(unaff_r6,*(undefined4 *)
                                             (*(int *)(*(int *)(param_1 + 0x8c) + 0x76c) + 0x464)),
             iVar2 != 0xffff)) {
            bVar3 = 0x31;
            goto LAB_715c875c;
          }
        }
      }
      goto LAB_715c8738;
    }
  }
  else {
LAB_715c8738:
    bVar3 = 0xff;
  }
LAB_715c8758:
  iVar2 = 0xffff;
LAB_715c875c:
  *param_2 = (short)iVar2;
  return bVar3;
}


// =========================================================================
// Function: FUN_715c8990
// Entry: 0x715c8990 | Size: 16 bytes
// =========================================================================

void FUN_715c8990(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_713be0a8(*(int *)(param_1 + 0x8c),param_3,param_2,0);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715c89f8
// Entry: 0x715c89f8 | Size: 2272 bytes
// =========================================================================

void FUN_715c89f8(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_148 [72];
  undefined1 auStack_100 [72];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [48];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if ((DAT_711a3938 != 0) && (iVar2 = *(int *)(DAT_711a3938 + 0x1389c), iVar2 != 0)) {
    iVar11 = *(int *)(iVar2 + 0x8c);
    bVar1 = 0;
    if (iVar11 != 0) {
      bVar1 = *(byte *)(iVar11 + 0x485);
    }
    if (iVar11 != 0 && (bVar1 & 1) != 0) {
      iVar2 = *(int *)(iVar2 + 0x8c);
      iVar11 = *(int *)(iVar2 + 0x590);
      uVar13 = *(undefined4 *)(iVar11 + 0x18);
      uVar12 = *(undefined4 *)(iVar11 + 0x498);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4528);
      if (*pcVar3 == '\0') {
        puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4518);
        *puVar9 = 0xd4d6e3cc;
        puVar9[1] = 0xd15c8f;
        puVar9[2] = 0xd4dbe0e0;
        *(undefined1 *)((int)puVar9 + 0xf) = 1;
        *(undefined4 *)((int)puVar9 + 0xb) = 0xbf5998d4;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d13dc,puVar9,&DAT_70b0e000);
        puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4528);
        *puVar10 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4518);
      if (pbVar4[0xf] != 0) {
        *pbVar4 = *pbVar4 ^ 0xbf;
        pbVar4[1] = pbVar4[1] ^ 0x97;
        pbVar4[2] = pbVar4[2] ^ 0xb3;
        pbVar4[3] = pbVar4[3] ^ 0xb1;
        pbVar4[0xf] = 0;
        pbVar4[4] = pbVar4[4] ^ 0xfd;
        pbVar4[5] = pbVar4[5] ^ 0x35;
        pbVar4[6] = pbVar4[6] ^ 0xbf;
        pbVar4[7] = pbVar4[7] ^ 0x67;
        pbVar4[8] = pbVar4[8] ^ 0xbf;
        pbVar4[9] = pbVar4[9] ^ 0x97;
        pbVar4[10] = pbVar4[10] ^ 0xb3;
        pbVar4[0xb] = pbVar4[0xb] ^ 0xb1;
        pbVar4[0xc] = pbVar4[0xc] ^ 0xfd;
        pbVar4[0xd] = pbVar4[0xd] ^ 0x35;
        pbVar4[0xe] = pbVar4[0xe] ^ 0xbf;
      }
      iVar5 = FUN_713fd1dc(uVar13);
      if (iVar5 != 0) {
        FUN_7133f914(auStack_70,*(int *)(iVar5 + 0x98) + 0x10,0);
        uStack_b8 = uStack_40;
        uStack_b4 = uStack_3c;
        uStack_b0 = uStack_38;
        uVar12 = FUN_71ba21e8(uVar12,0x3f921ff3);
        uVar12 = FUN_71ba13e0(uVar12,0x42b40000);
        uVar12 = FUN_71ba21e8(uVar12,0xc2b40000);
        FUN_71340438(auStack_70,0,uVar12,0);
        FUN_7136d040(&uStack_40,&uStack_b8);
        FUN_7134217c(auStack_70);
        FUN_7133fdcc(auStack_70);
      }
      if (((*(int *)(iVar11 + 0x464) == iVar2) &&
          (iVar5 = FUN_71ba2d10(DAT_711f2aa4 & 0x7fffffff,0x42b40000), iVar5 != 0)) &&
         (*(int *)(iVar2 + 0x44c) == 0x32)) {
        iVar2 = FUN_715c9e1c();
        iVar5 = FUN_715c9f60();
        if (iVar5 != 0x32e) {
          if (iVar2 < 0x337) {
            if (iVar2 == 0xd0 || iVar2 == 0x2c0) {
              return;
            }
            if (iVar2 == 0x2ca) {
              return;
            }
          }
          else if (iVar2 - 0x337U < 3) {
            return;
          }
          uVar12 = *(undefined4 *)(iVar11 + 0x18);
          pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4548);
          if (*pcVar3 == '\0') {
            puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4538);
            *(undefined2 *)(puVar9 + 2) = 0x1f9;
            *puVar9 = 0x9772ffab;
            puVar9[1] = 0x2654bb07;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d140c,puVar9,&DAT_70b0e000);
            puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4548);
            *puVar10 = 1;
          }
          pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4538);
          if (pbVar4[9] != 0) {
            pbVar4[9] = 0;
            *pbVar4 = *pbVar4 ^ 0xf9;
            pbVar4[1] = pbVar4[1] ^ 0xb7;
            pbVar4[2] = pbVar4[2] ^ 0x13;
            pbVar4[3] = pbVar4[3] ^ 0xf9;
            pbVar4[4] = pbVar4[4] ^ 99;
            pbVar4[5] = pbVar4[5] ^ 0xeb;
            pbVar4[6] = pbVar4[6] ^ 0x3b;
            pbVar4[7] = pbVar4[7] ^ 0x55;
            pbVar4[8] = pbVar4[8] ^ 0xf9;
          }
          iVar2 = FUN_713fd1dc(uVar12);
          uVar12 = *(undefined4 *)(iVar11 + 0x18);
          pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4568);
          if (*pcVar3 == '\0') {
            puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4558);
            *(undefined2 *)(puVar9 + 2) = 0x1bd;
            *puVar9 = 0xe1e49ff1;
            puVar9[1] = 0x5c8eb3db;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1438,puVar9,&DAT_70b0e000);
            puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4568);
            *puVar10 = 1;
          }
          pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4558);
          if (pbVar4[9] != 0) {
            pbVar4[9] = 0;
            *pbVar4 = *pbVar4 ^ 0xbd;
            pbVar4[1] = pbVar4[1] ^ 0xd7;
            pbVar4[2] = pbVar4[2] ^ 0x85;
            pbVar4[3] = pbVar4[3] ^ 0x8f;
            pbVar4[4] = pbVar4[4] ^ 0xbf;
            pbVar4[5] = pbVar4[5] ^ 0xe3;
            pbVar4[6] = pbVar4[6] ^ 0xe1;
            pbVar4[7] = pbVar4[7] ^ 0x2f;
            pbVar4[8] = pbVar4[8] ^ 0xbd;
          }
          iVar5 = FUN_713fd1dc(uVar12);
          uVar12 = *(undefined4 *)(iVar11 + 0x18);
          pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4588);
          if (*pcVar3 == '\0') {
            puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4578);
            *(undefined2 *)(puVar9 + 2) = 0x13b;
            *puVar9 = 0xcc223569;
            puVar9[1] = 0x84c0eb39;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1464,puVar9,&DAT_70b0e000);
            puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4588);
            *puVar10 = 1;
          }
          pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4578);
          if (pbVar4[9] != 0) {
            pbVar4[9] = 0;
            *pbVar4 = *pbVar4 ^ 0x3b;
            pbVar4[1] = pbVar4[1] ^ 0x73;
            pbVar4[2] = pbVar4[2] ^ 0x4d;
            pbVar4[3] = pbVar4[3] ^ 0xa3;
            pbVar4[4] = pbVar4[4] ^ 0x4d;
            pbVar4[5] = pbVar4[5] ^ 0xbb;
            pbVar4[6] = pbVar4[6] ^ 0xaf;
            pbVar4[7] = pbVar4[7] ^ 0xf7;
            pbVar4[8] = pbVar4[8] ^ 0x3b;
          }
          iVar6 = FUN_713fd1dc(uVar12);
          uVar12 = *(undefined4 *)(iVar11 + 0x18);
          pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45a8);
          if (*pcVar3 == '\0') {
            puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4598);
            *(undefined2 *)(puVar9 + 2) = 0x1ef;
            *puVar9 = 0x7e1ccfa3;
            puVar9[1] = 0xce80bb45;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1490,puVar9,&DAT_70b0e000);
            puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45a8);
            *puVar10 = 1;
          }
          pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4598);
          if (pbVar4[9] != 0) {
            pbVar4[9] = 0;
            *pbVar4 = *pbVar4 ^ 0xef;
            pbVar4[1] = pbVar4[1] ^ 0x89;
            pbVar4[2] = pbVar4[2] ^ 0x73;
            pbVar4[3] = pbVar4[3] ^ 0x11;
            pbVar4[4] = pbVar4[4] ^ 0x31;
            pbVar4[5] = pbVar4[5] ^ 0xeb;
            pbVar4[6] = pbVar4[6] ^ 0xef;
            pbVar4[7] = pbVar4[7] ^ 0xbd;
            pbVar4[8] = pbVar4[8] ^ 0xef;
          }
          iVar7 = FUN_713fd1dc(uVar12);
          if (iVar2 != 0 && iVar5 != 0) {
            FUN_7134258c(auStack_70,iVar2 + 0x10);
            iVar2 = *(int *)(iVar2 + 4);
            if (iVar2 != 0) {
              do {
                FUN_7133f914(&uStack_b8,iVar2 + 0x10,0);
                FUN_71342a3c(auStack_100,&uStack_b8,auStack_70);
                imp___aeabi_memcpy8(auStack_70,auStack_100,0x48);
                FUN_7133fdcc(auStack_100);
                iVar2 = *(int *)(iVar2 + 4);
                FUN_7133fdcc(&uStack_b8);
              } while (iVar2 != 0);
            }
            FUN_7134258c(&uStack_b8,iVar5 + 0x10);
            iVar2 = *(int *)(iVar5 + 4);
            if (iVar2 != 0) {
              do {
                FUN_7133f914(auStack_100,iVar2 + 0x10,0);
                FUN_71342a3c(auStack_148,auStack_100,&uStack_b8);
                imp___aeabi_memcpy8(&uStack_b8,auStack_148,0x48);
                FUN_7133fdcc(auStack_148);
                iVar2 = *(int *)(iVar2 + 4);
                FUN_7133fdcc(auStack_100);
              } while (iVar2 != 0);
            }
            uVar8 = *(uint *)(*(int *)(iVar11 + 0x388) + 0xcc);
            uVar12 = FUN_715ca0a4(uVar8,auStack_88,0,(uVar8 & 0x1ffffff) >> 0x18);
            FUN_715cbb0c(uVar12,&uStack_b8,0);
            uVar8 = *(uint *)(*(int *)(iVar11 + 0x388) + 0xcc);
            uVar12 = FUN_715ca0a4(uVar8,&uStack_40,1,(uVar8 & 0x1ffffff) >> 0x18);
            FUN_715cbb0c(uVar12,auStack_70,1);
            FUN_7133fdcc(&uStack_b8);
            FUN_7133fdcc(auStack_70);
          }
          if (iVar6 != 0 && iVar7 != 0) {
            uVar12 = FUN_7134258c(auStack_70,iVar6 + 0x10);
            FUN_715cc000(uVar12,auStack_70,0);
            uVar12 = FUN_7134258c(&uStack_b8,iVar7 + 0x10);
            FUN_715cc000(uVar12,&uStack_b8,1);
            FUN_7133fdcc(&uStack_b8);
            FUN_7133fdcc(auStack_70);
            return;
          }
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715c9e1c
// Entry: 0x715c9e1c | Size: 20 bytes
// =========================================================================

undefined4 FUN_715c9e1c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
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
  if ((*(int *)(iVar1 + 0x8c) != 0) &&
     (piVar3 = (int *)FUN_7149eda4(*(int *)(*(int *)(iVar1 + 0x8c) + 0x440) + 4),
     piVar3 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x715c9eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar3 + 0x14))();
    return uVar2;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: FUN_715c9f60
// Entry: 0x715c9f60 | Size: 20 bytes
// =========================================================================

undefined4 FUN_715c9f60(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
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
  if ((*(int *)(iVar1 + 0x8c) != 0) &&
     (piVar3 = (int *)FUN_7149f1c0(*(int *)(*(int *)(iVar1 + 0x8c) + 0x440) + 4),
     piVar3 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x715c9ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar3 + 0x14))();
    return uVar2;
  }
  return 0xffffffff;
}


// =========================================================================
// Function: FUN_715ca0a4
// Entry: 0x715ca0a4 | Size: 2724 bytes
// =========================================================================

void FUN_715ca0a4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_14c [72];
  undefined1 auStack_104 [4];
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 auStack_64 [2];
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
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
  
  DataMemoryBarrier(0xb);
  if (((DAT_711a3d38 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3d38), iVar3 != 0)) {
    FUN_71510c9c(&DAT_711a3d08,0xbf2158b8,0x3dae91c9,0xbf438327,0xbde2877f);
    FUN_71510c9c(&DAT_711a3d18,0x3d91b717,0x3f0db963,0xbda2a2c2,0x3f536f7e);
    FUN_71510c9c(&DAT_711a3d28,0xaf611a5f,0x3196db3f,0xbe6faace,0x3f78e369);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3d38);
  }
  DataMemoryBarrier(0xb);
  if (((DAT_711a3d70 & 1) == 0) && (iVar3 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_711a3d70), iVar3 != 0)) {
    FUN_71510c9c(&DAT_711a3d40,0x3f1efd22,0xbd97414a,0xbf456430,0xbdf505d1);
    FUN_71510c9c(&DAT_711a3d50,0xbeaaf4f1,0xbef1172f,0xbe4198f2,0x3f4b5c7d);
    FUN_71510c9c(&DAT_711a3d60,0x33046e57,0xb2b7f87b,0xbe3e5c92,0x3f7b89b5);
    thunk_SixizuLbAnqfgRApsCY(&DAT_711a3d70);
  }
  piVar8 = (int *)(DAT_711a3938 + 0x1389c);
  iVar3 = *piVar8;
  if (iVar3 == 0) {
    iVar3 = FUN_713c301c(0);
    if (iVar3 == 0) {
      iVar3 = *piVar8;
    }
    else {
      thunk_MwhHq(0x3a0);
      iVar3 = FUN_715ba834();
      *piVar8 = iVar3;
    }
  }
  piVar8 = DAT_70ffc994;
  iVar9 = *(int *)(iVar3 + 0x8c);
  iVar3 = *(int *)(iVar9 + 0x590);
  uVar4 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
  if (param_3 == 0) {
    iVar5 = FUN_71416a78(uVar4,0x1f);
    uVar1 = DAT_711a3d14;
    uVar4 = DAT_711a3d10;
    if (param_4 == 0) {
      puVar6 = *(undefined4 **)
                (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar5 * 0x18 + 0x10);
      puVar6[1] = DAT_711a3d0c;
      puVar6[2] = uVar4;
      puVar6[3] = uVar1;
      *puVar6 = DAT_711a3d08;
    }
    uVar4 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(uVar4,0x20);
    uVar2 = DAT_711a3d24;
    uVar1 = DAT_711a3d20;
    uVar4 = DAT_711a3d1c;
    if (param_4 == 0) {
      puVar6 = *(undefined4 **)
                (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar5 * 0x18 + 0x10);
      *puVar6 = DAT_711a3d18;
      puVar6[1] = uVar4;
      puVar6[2] = uVar1;
      puVar6[3] = uVar2;
    }
    uVar4 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(uVar4,0x21);
    uVar2 = DAT_711a3d34;
    uVar1 = DAT_711a3d30;
    uVar4 = DAT_711a3d2c;
    if (param_4 == 0) {
      puVar6 = *(undefined4 **)
                (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar5 * 0x18 + 0x10);
      *puVar6 = DAT_711a3d28;
      puVar6[1] = uVar4;
      puVar6[2] = uVar1;
      puVar6[3] = uVar2;
    }
    FUN_7136cdfc(&uStack_4c);
    FUN_7136cdfc(&uStack_40);
    FUN_7136cdfc(&uStack_34);
    FUN_713b45b4(iVar9);
    iVar5 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar7 = FUN_71416a78(iVar5,0x20);
    iVar5 = *(int *)(iVar5 + 8) + iVar7 * 0x40;
    uStack_4c = *(undefined4 *)(iVar5 + 0x30);
    uStack_48 = *(undefined4 *)(iVar5 + 0x34);
    uStack_44 = *(undefined4 *)(iVar5 + 0x38);
    FUN_713b45b4(iVar9);
    iVar5 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar7 = FUN_71416a78(iVar5,0x21);
    iVar5 = *(int *)(iVar5 + 8) + iVar7 * 0x40;
    uStack_40 = *(undefined4 *)(iVar5 + 0x30);
    uStack_3c = *(undefined4 *)(iVar5 + 0x34);
    uStack_38 = *(undefined4 *)(iVar5 + 0x38);
    FUN_713b45b4(iVar9);
    iVar5 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar7 = FUN_71416a78(iVar5,0x22);
    iVar5 = *(int *)(iVar5 + 8) + iVar7 * 0x40;
    uStack_34 = *(undefined4 *)(iVar5 + 0x30);
    uStack_30 = *(undefined4 *)(iVar5 + 0x34);
    uStack_2c = *(undefined4 *)(iVar5 + 0x38);
    FUN_7136cdfc(auStack_64);
    FUN_7136cdfc(auStack_58);
    iVar5 = FUN_715ef638(&uStack_4c,auStack_64,param_2);
    if (iVar5 == 0) {
      return;
    }
    FUN_7133f834(&uStack_f8);
    FUN_7133f834(&uStack_b0);
    FUN_7136cdfc(auStack_104);
    FUN_71340920(*(undefined4 *)(iVar3 + 0x14),auStack_104);
    FUN_7136dd00(auStack_104);
    FUN_71340234(&uStack_f8,auStack_64[0],uStack_100,uStack_5c);
    FUN_71340234(&uStack_b0,auStack_58[0],uStack_100,uStack_50);
    FUN_713b45b4(iVar9);
    iVar3 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(iVar3,0x1f);
    FUN_7133f834(auStack_14c);
    FUN_713401e4(auStack_14c,*(int *)(iVar3 + 8) + iVar5 * 0x40);
    FUN_71342a3c(&uStack_198,auStack_14c,&uStack_f8);
    imp___aeabi_memcpy8(&uStack_f8,&uStack_198,0x48);
    FUN_7133fdcc(&uStack_198);
    uStack_198 = uStack_f8;
    uStack_194 = uStack_f4;
    uStack_190 = uStack_f0;
    FUN_7136d040(&uStack_f8,&uStack_e8);
    FUN_7136d040(&uStack_e8,&uStack_198);
    uStack_e4 = uStack_e4 ^ 0x80000000;
    uStack_e8 = uStack_e8 ^ 0x80000000;
    uStack_e0 = uStack_e0 ^ 0x80000000;
    iVar3 = FUN_71416a78(iVar3,0x20);
    FUN_71510cc0(*(undefined4 *)
                  (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar3 * 0x18 + 0x10
                  ),&uStack_f8);
    FUN_713b45b4(iVar9);
    FUN_7133fdcc(auStack_14c);
    FUN_713b45b4(iVar9);
    iVar3 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(iVar3,0x20);
    FUN_7133f834(auStack_14c);
    FUN_713401e4(auStack_14c,*(int *)(iVar3 + 8) + iVar5 * 0x40);
    FUN_71342a3c(&uStack_198,auStack_14c,&uStack_b0);
    imp___aeabi_memcpy8(&uStack_b0,&uStack_198,0x48);
    FUN_7133fdcc(&uStack_198);
    uStack_198 = uStack_b0;
    uStack_194 = uStack_ac;
    uStack_190 = uStack_a8;
    FUN_7136d040(&uStack_b0,&uStack_a0);
    FUN_7136d040(&uStack_a0,&uStack_198);
    uStack_9c = uStack_9c ^ 0x80000000;
    uStack_a0 = uStack_a0 ^ 0x80000000;
    uStack_98 = uStack_98 ^ 0x80000000;
    iVar3 = FUN_71416a78(iVar3,0x21);
    FUN_71510cc0(*(undefined4 *)
                  (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar3 * 0x18 + 0x10
                  ),&uStack_b0);
    FUN_713b45b4(iVar9);
    FUN_7133fdcc(auStack_14c);
    FUN_7133fdcc(&uStack_b0);
  }
  else {
    iVar5 = FUN_71416a78(uVar4,0x15);
    uVar1 = DAT_711a3d4c;
    uVar4 = DAT_711a3d48;
    if (param_4 == 0) {
      puVar6 = *(undefined4 **)
                (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar5 * 0x18 + 0x10);
      puVar6[1] = DAT_711a3d44;
      puVar6[2] = uVar4;
      puVar6[3] = uVar1;
      *puVar6 = DAT_711a3d40;
    }
    uVar4 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(uVar4,0x16);
    uVar2 = DAT_711a3d5c;
    uVar1 = DAT_711a3d58;
    uVar4 = DAT_711a3d54;
    if (param_4 == 0) {
      puVar6 = *(undefined4 **)
                (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar5 * 0x18 + 0x10);
      *puVar6 = DAT_711a3d50;
      puVar6[1] = uVar4;
      puVar6[2] = uVar1;
      puVar6[3] = uVar2;
    }
    uVar4 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(uVar4,0x17);
    uVar2 = DAT_711a3d6c;
    uVar1 = DAT_711a3d68;
    uVar4 = DAT_711a3d64;
    if (param_4 == 0) {
      puVar6 = *(undefined4 **)
                (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar5 * 0x18 + 0x10);
      *puVar6 = DAT_711a3d60;
      puVar6[1] = uVar4;
      puVar6[2] = uVar1;
      puVar6[3] = uVar2;
    }
    FUN_7136cdfc(&uStack_4c);
    FUN_7136cdfc(&uStack_40);
    FUN_7136cdfc(&uStack_34);
    FUN_713b45b4(iVar9);
    iVar5 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar7 = FUN_71416a78(iVar5,0x16);
    iVar5 = *(int *)(iVar5 + 8) + iVar7 * 0x40;
    uStack_4c = *(undefined4 *)(iVar5 + 0x30);
    uStack_48 = *(undefined4 *)(iVar5 + 0x34);
    uStack_44 = *(undefined4 *)(iVar5 + 0x38);
    FUN_713b45b4(iVar9);
    iVar5 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar7 = FUN_71416a78(iVar5,0x17);
    iVar5 = *(int *)(iVar5 + 8) + iVar7 * 0x40;
    uStack_40 = *(undefined4 *)(iVar5 + 0x30);
    uStack_3c = *(undefined4 *)(iVar5 + 0x34);
    uStack_38 = *(undefined4 *)(iVar5 + 0x38);
    FUN_713b45b4(iVar9);
    iVar5 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar7 = FUN_71416a78(iVar5,0x18);
    iVar5 = *(int *)(iVar5 + 8) + iVar7 * 0x40;
    uStack_34 = *(undefined4 *)(iVar5 + 0x30);
    uStack_30 = *(undefined4 *)(iVar5 + 0x34);
    uStack_2c = *(undefined4 *)(iVar5 + 0x38);
    FUN_7136cdfc(auStack_64);
    FUN_7136cdfc(auStack_58);
    iVar5 = FUN_715ef638(&uStack_4c,auStack_64,param_2);
    if (iVar5 == 0) {
      return;
    }
    iVar5 = FUN_7133f834();
    iVar7 = iVar5 + 0x48;
    FUN_7133f834(iVar7);
    FUN_7136cdfc(auStack_104);
    FUN_71340920(*(undefined4 *)(iVar3 + 0x14),auStack_104);
    FUN_7136dd00(auStack_104);
    FUN_71340234(iVar5,auStack_64[0],uStack_100,uStack_5c);
    FUN_71340234(iVar7,auStack_58[0],uStack_100,uStack_50);
    FUN_713b45b4(iVar9);
    iVar3 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(iVar3,0x15);
    FUN_7133f834(auStack_14c);
    FUN_713401e4(auStack_14c,*(int *)(iVar3 + 8) + iVar5 * 0x40);
    FUN_71342a3c(&uStack_198,auStack_14c,&uStack_f8);
    imp___aeabi_memcpy8(&uStack_f8,&uStack_198,0x48);
    FUN_7133fdcc(&uStack_198);
    uStack_198 = uStack_f8;
    uStack_194 = uStack_f4;
    uStack_190 = uStack_f0;
    FUN_7136d040(&uStack_f8,&uStack_e8);
    FUN_7136d040(&uStack_e8,&uStack_198);
    uStack_d4 = uStack_d4 ^ 0x80000000;
    uStack_d8 = uStack_d8 ^ 0x80000000;
    uStack_d0 = uStack_d0 ^ 0x80000000;
    iVar3 = FUN_71416a78(iVar3,0x16);
    FUN_71510cc0(*(undefined4 *)
                  (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar3 * 0x18 + 0x10
                  ),&uStack_f8);
    FUN_713b45b4(iVar9);
    FUN_7133fdcc(auStack_14c);
    FUN_713b45b4(iVar9);
    iVar3 = FUN_714172f4(*(undefined4 *)(iVar9 + 0x18));
    iVar5 = FUN_71416a78(iVar3,0x16);
    FUN_7133f834(auStack_14c);
    FUN_713401e4(auStack_14c,*(int *)(iVar3 + 8) + iVar5 * 0x40);
    FUN_71342a3c(&uStack_198,auStack_14c,iVar7);
    imp___aeabi_memcpy8(iVar7,&uStack_198,0x48);
    FUN_7133fdcc(&uStack_198);
    uStack_198 = uStack_b0;
    uStack_194 = uStack_ac;
    uStack_190 = uStack_a8;
    FUN_7136d040(iVar7,&uStack_a0);
    FUN_7136d040(&uStack_a0,&uStack_198);
    uStack_8c = uStack_8c ^ 0x80000000;
    uStack_90 = uStack_90 ^ 0x80000000;
    uStack_88 = uStack_88 ^ 0x80000000;
    iVar3 = FUN_71416a78(iVar3,0x17);
    FUN_71510cc0(*(undefined4 *)
                  (*(int *)(*(int *)(*piVar8 + *(int *)(iVar9 + 0x18)) + 0x10) + iVar3 * 0x18 + 0x10
                  ),iVar7);
    FUN_713b45b4(iVar9);
    FUN_7133fdcc(auStack_14c);
    FUN_7133fdcc(iVar7);
  }
  FUN_7133fdcc(&uStack_f8);
  return;
}


// =========================================================================
// Function: FUN_715cbb0c
// Entry: 0x715cbb0c | Size: 500 bytes
// =========================================================================

void FUN_715cbb0c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
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
  iVar4 = *(int *)(iVar1 + 0x8c);
  FUN_7133f834(auStack_70);
  FUN_713b45b4(iVar4);
  iVar1 = FUN_714172f4(*(undefined4 *)(iVar4 + 0x18));
  if (param_3 == 1) {
    iVar2 = FUN_71416a78(iVar1,0x17);
    FUN_7133f834(auStack_b8);
    FUN_713401e4(auStack_b8,*(int *)(iVar1 + 8) + iVar2 * 0x40);
    FUN_71342a3c(auStack_100,auStack_b8,param_2);
    imp___aeabi_memcpy8(auStack_70,auStack_100,0x48);
    FUN_7136e3f0(auStack_70,&uStack_60);
    uStack_5c = uStack_5c ^ 0x80000000;
    uStack_60 = uStack_60 ^ 0x80000000;
    uStack_58 = uStack_58 ^ 0x80000000;
    uVar3 = 0x18;
  }
  else {
    iVar2 = FUN_71416a78(iVar1,0x21);
    FUN_7133f834(auStack_b8);
    FUN_713401e4(auStack_b8,*(int *)(iVar1 + 8) + iVar2 * 0x40);
    FUN_71342a3c(auStack_100,auStack_b8,param_2);
    imp___aeabi_memcpy8(auStack_70,auStack_100,0x48);
    FUN_7136e3f0(auStack_70,&uStack_60);
    uStack_4c = uStack_4c ^ 0x80000000;
    uStack_50 = uStack_50 ^ 0x80000000;
    uStack_48 = uStack_48 ^ 0x80000000;
    uVar3 = 0x22;
  }
  iVar1 = FUN_71416a78(iVar1,uVar3);
  FUN_71510cc0(*(undefined4 *)
                (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar4 + 0x18)) + 0x10) + iVar1 * 0x18 +
                0x10),auStack_70);
  FUN_713b45b4(iVar4);
  FUN_7133fdcc(auStack_100);
  FUN_7133fdcc(auStack_b8);
  FUN_7133fdcc(auStack_70);
  return;
}


// =========================================================================
// Function: FUN_715cc000
// Entry: 0x715cc000 | Size: 336 bytes
// =========================================================================

void FUN_715cc000(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_100 [72];
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
  FUN_7133f834(auStack_70);
  FUN_713b45b4(iVar1);
  uVar6 = 0x35;
  if (param_3 == 1) {
    uVar6 = 0x2b;
  }
  iVar2 = FUN_714172f4(*(undefined4 *)(iVar1 + 0x18));
  iVar3 = FUN_71416a78(iVar2,uVar6);
  FUN_7133f834(auStack_b8);
  FUN_713401e4(auStack_b8,*(int *)(iVar2 + 8) + iVar3 * 0x40);
  uVar4 = FUN_7134258c(auStack_100,auStack_b8);
  imp___aeabi_memcpy(uVar4,param_2,0x48);
  imp___aeabi_memcpy(auStack_70,param_2,0x48);
  iVar2 = FUN_71416a78(iVar2,uVar6);
  FUN_71510cc0(*(undefined4 *)
                (*(int *)(*(int *)(*DAT_70ffc994 + *(int *)(iVar1 + 0x18)) + 0x10) + iVar2 * 0x18 +
                0x10),auStack_70);
  FUN_713b45b4(iVar1);
  FUN_7133fdcc(auStack_100);
  FUN_7133fdcc(auStack_b8);
  FUN_7133fdcc(auStack_70);
  return;
}


// =========================================================================
// Function: FUN_715cc3a8
// Entry: 0x715cc3a8 | Size: 32 bytes
// =========================================================================

undefined4 FUN_715cc3a8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [44];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_7136cdfc(&uStack_28);
  FUN_7136cdfc(&uStack_34);
  iVar2 = FUN_7136cdfc(auStack_60);
  FUN_7136cdfc(iVar2 + 0x10);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar2 + 0x485);
    }
    if ((iVar2 == 0 || (bVar1 & 1) == 0) &&
       (iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar2 != 0)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0x14);
      uVar3 = *(undefined4 *)(iVar2 + 0x30);
      uStack_30 = *(undefined4 *)(iVar2 + 0x34);
      uStack_28 = uVar3;
      uStack_24 = uStack_30;
      uStack_20 = FUN_71ba0b38(*(undefined4 *)(iVar2 + 0x38),0xbe800000);
      uStack_2c = FUN_71ba0b38(uStack_20,0xbfe00000);
      uStack_34 = uVar3;
      FUN_713e834c(&uStack_28,&uStack_34,auStack_60,&uStack_1c,0,1,0,1,0,0,0,0);
      uVar3 = uStack_1c;
    }
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_715cc5c8
// Entry: 0x715cc5c8 | Size: 28 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_715cc5c8(int param_1,undefined2 *param_2,undefined2 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  
  bVar18 = 0;
  *param_2 = DAT_711f5178;
  *param_3 = DAT_711f517a;
  uVar10 = (uint)(byte)DAT_711f5184;
  uVar11 = (uint)DAT_711f5184._1_1_;
  uVar12 = (uint)DAT_711f5184._2_1_;
  uVar13 = (uint)DAT_711f5184._3_1_;
  uVar14 = (uint)(byte)DAT_711f5188;
  uVar15 = (uint)DAT_711f5188._1_1_;
  uVar16 = (uint)DAT_711f5188._2_1_;
  if ((*(char *)(param_1 + 0x52) == '\0') && (iVar8 = FUN_716e81c8(2), iVar8 != 0)) {
    uVar7 = FUN_716e8218();
    bVar18 = 1;
    _DAT_711f517c = CONCAT12(uVar7,_DAT_711f517c);
  }
  iVar8 = thunk_FUN_7151dfd0();
  DAT_711f5180 = CONCAT13(bVar18 | iVar8 == 0x35,(undefined3)DAT_711f5180);
  iVar8 = FUN_716ac9ac();
  if ((iVar8 == 0) || (DAT_711f2a90 == '\0' || param_4 == 0)) {
    if (param_4 != 0) {
      DAT_711f5190._2_1_ = '\0';
    }
  }
  else {
    DAT_711f5180 = CONCAT13(1,(undefined3)DAT_711f5180);
  }
  uVar1 = DAT_711f5180 >> 0x10;
  uVar2 = DAT_711f5180 >> 0x18;
  iVar8 = FUN_716ac9ac();
  if ((((iVar8 != 0) && (DAT_711f2a90 != '\0')) && (DAT_711f5190._2_1_ == '\0')) && (param_4 != 0))
  {
    DAT_711f5190._2_1_ = '\x01';
    DAT_711f5180._0_2_ = CONCAT11(1,(undefined1)DAT_711f5180);
  }
  uVar9 = _DAT_711f517c & 0xff;
  uVar3 = _DAT_711f517c >> 8;
  uVar4 = _DAT_711f517c >> 0x10;
  uVar5 = _DAT_711f517c >> 0x18;
  uVar17 = DAT_711f5180 & 0xff;
  uVar6 = DAT_711f5180 >> 8;
  if (param_4 != 0) {
    DAT_711f5188._0_1_ = 0;
    DAT_711f5188._1_1_ = 0;
    DAT_711f5188._2_1_ = 0;
    DAT_711f5184._0_1_ = 0;
    DAT_711f5184._1_1_ = 0;
    DAT_711f5184._2_1_ = 0;
    DAT_711f5184._3_1_ = 0;
    DAT_711f5180 = 0;
    _DAT_711f517c = 0;
  }
  return uVar9 | ((((((((uVar15 | uVar16 << 1) << 2 | uVar14 << 1 | uVar13) << 2 | uVar12 << 1 |
                      uVar11) & 0x7f) << 2 | uVar10 << 1 | uVar2) << 2 | (uVar1 & 0xff) << 1 |
                   uVar6 & 0xff) << 2 | uVar17 << 1 | uVar5) << 2 | (uVar4 & 0xff) << 1 |
                 uVar3 & 0xff) << 1;
}


// =========================================================================
// Function: FUN_715cc8c0
// Entry: 0x715cc8c0 | Size: 448 bytes
// =========================================================================

void FUN_715cc8c0(int param_1,uint param_2,undefined1 param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  bVar13 = *(int *)(param_1 + 0x8c) != 0;
  if (bVar13) {
    param_1 = *(int *)(param_1 + 0x104);
  }
  if (!bVar13 || param_1 == 0) {
    return;
  }
  if (param_2 < 0x2f) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c356c);
    if (*pcVar2 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c355c);
      *puVar8 = 0x1ff4bea;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151bf40,puVar8,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c356c);
      *puVar10 = 1;
    }
    iVar5 = param_2 * 0xc;
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c355c);
    if (pbVar3[3] != 0) {
      pbVar3[3] = 0;
      *pbVar3 = *pbVar3 ^ 0xcf;
      pbVar3[1] = pbVar3[1] ^ 0x2f;
      pbVar3[2] = ~pbVar3[2];
    }
    bVar1 = (&DAT_71174d50)[iVar5];
    iVar11 = *(int *)(&DAT_71174d58 + iVar5);
    if ((bVar1 & 1) == 0) {
      iVar11 = iVar5 + 0x71174d51;
    }
    iVar4 = imp_strlen(pbVar3);
    if (iVar4 == 0) {
LAB_7151a004:
      puVar10 = (undefined1 *)(param_1 + param_2 * 8);
      if (*(int *)(puVar10 + 4) != 0) {
        FUN_7143d364();
      }
      *puVar10 = param_3;
      uVar7 = FUN_7151a290(param_2);
      *(undefined4 *)(puVar10 + 4) = uVar7;
      return;
    }
    uVar9 = *(uint *)(&DAT_71174d54 + iVar5);
    if ((bVar1 & 1) == 0) {
      uVar9 = (uint)(bVar1 >> 1);
    }
    if (iVar4 <= (int)uVar9) {
      bVar1 = *pbVar3;
      iVar12 = iVar11 + uVar9;
      iVar5 = iVar11;
      do {
        if (0xfffffffe < uVar9 - iVar4) {
          return;
        }
        iVar5 = imp_memchr(iVar5,bVar1,(uVar9 - iVar4) + 1);
        if (iVar5 == 0) {
          return;
        }
        iVar6 = imp_memcmp(iVar5,pbVar3,iVar4);
        if (iVar6 == 0) {
          iVar4 = 0;
          if (iVar5 != iVar12) {
            iVar4 = iVar5 - iVar11;
          }
          if (iVar5 == iVar12 || iVar4 == -1) {
            return;
          }
          goto LAB_7151a004;
        }
        iVar5 = iVar5 + 1;
        uVar9 = iVar12 - iVar5;
      } while (iVar4 <= (int)uVar9);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715cc90c
// Entry: 0x715cc90c | Size: 48 bytes
// =========================================================================

undefined4 FUN_715cc90c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    if ((param_2 < 0x2e) && (*(int *)(param_1 + 0x104) != 0)) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x104) + param_2 * 8 + 4);
    }
    return uVar1;
  }
  return 0;
}


// =========================================================================
// Function: thunk_FUN_715cc968
// Entry: 0x715cc954 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715cc968(void)

{
  FUN_715cc968();
  return;
}


// =========================================================================
// Function: FUN_715cc968
// Entry: 0x715cc968 | Size: 168 bytes
// =========================================================================

void FUN_715cc968(int param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (short)(ushort)*(byte *)(param_1 + 0x52) * 0x1d;
  *(undefined2 *)(&DAT_711f5195 + iVar1) = param_3;
  *(undefined2 *)(&DAT_711f5197 + iVar1) = param_4;
  (&DAT_711f5199)[iVar1] = (byte)param_2 & 1;
  (&DAT_711f519a)[iVar1] = (byte)((param_2 << 0x1e) >> 0x1f);
  (&DAT_711f519b)[iVar1] = (byte)((param_2 << 0x1d) >> 0x1f);
  (&DAT_711f519c)[iVar1] = (byte)((param_2 << 0x1c) >> 0x1f);
  (&DAT_711f519d)[iVar1] = (byte)((param_2 << 0x1b) >> 0x1f);
  iVar2 = -((int)(param_2 << 0x1a) >> 0x1f);
  bVar3 = iVar2 == 0;
  (&DAT_711f519e)[iVar1] = (byte)((param_2 << 0x1a) >> 0x1f);
  if (bVar3) {
    iVar2 = 0;
  }
  if (bVar3) {
    (&DAT_711f51ac)[iVar1] = (char)iVar2;
  }
  (&DAT_711f51a7)[iVar1] = (byte)((param_2 << 0x11) >> 0x1f);
  (&DAT_711f51a6)[iVar1] = (byte)((param_2 << 0x12) >> 0x1f);
  (&DAT_711f51a5)[iVar1] = (byte)((param_2 << 0x13) >> 0x1f);
  (&DAT_711f51a4)[iVar1] = (byte)((param_2 << 0x14) >> 0x1f);
  (&DAT_711f51a3)[iVar1] = (byte)((param_2 << 0x15) >> 0x1f);
  (&DAT_711f51a2)[iVar1] = (byte)((param_2 << 0x16) >> 0x1f);
  (&DAT_711f51a1)[iVar1] = (byte)((param_2 << 0x17) >> 0x1f);
  (&DAT_711f51a0)[iVar1] = (char)((param_2 & 0xff) >> 7);
  (&DAT_711f519f)[iVar1] = (byte)((param_2 << 0x19) >> 0x1f);
  return;
}


// =========================================================================
// Function: thunk_FUN_715cca5c
// Entry: 0x715cca48 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715cca5c(void)

{
  FUN_715cca5c();
  return;
}


// =========================================================================
// Function: FUN_715cca5c
// Entry: 0x715cca5c | Size: 20 bytes
// =========================================================================

void FUN_715cca5c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x444) + 0x54) = param_2;
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715cca9c
// Entry: 0x715cca88 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715cca9c(void)

{
  FUN_715cca9c();
  return;
}


// =========================================================================
// Function: FUN_715cca9c
// Entry: 0x715cca9c | Size: 24 bytes
// =========================================================================

undefined4 FUN_715cca9c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x444) + 0x54);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715ccacc
// Entry: 0x715ccacc | Size: 24 bytes
// =========================================================================

bool FUN_715ccacc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  bVar1 = false;
  if ((iVar2 != 0) &&
     (piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x10), piVar3 != (int *)0x0))
  {
    iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
    bVar1 = iVar2 == 0x19d;
  }
  return bVar1;
}


// =========================================================================
// Function: FUN_715ccb70
// Entry: 0x715ccb70 | Size: 24 bytes
// =========================================================================

void FUN_715ccb70(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar2 + 0x485);
    }
    if (iVar2 == 0 || (bVar1 & 1) == 0) {
      FUN_715d33c8(&DAT_700826a8,*(undefined4 *)(param_1 + 8),0xfffffffe);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: thunk_FUN_715ccc94
// Entry: 0x715ccc80 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715ccc94(void)

{
  FUN_715ccc94();
  return;
}


// =========================================================================
// Function: FUN_715ccc94
// Entry: 0x715ccc94 | Size: 16 bytes
// =========================================================================

bool FUN_715ccc94(int param_1)

{
  return *(int *)(param_1 + 0xd0) != 0;
}


// =========================================================================
// Function: FUN_715cccbc
// Entry: 0x715cccbc | Size: 180 bytes
// =========================================================================

void FUN_715cccbc(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x8c) + 0x485) & 1;
    }
    if ((param_2 < 4) && (bVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xd0) = 1;
      *(uint *)(param_1 + 0xd4) = param_2;
      FUN_715c7638(param_1,param_2 * 0x10 + 0x700c4138,param_2 * 0x10 + 0x700c40f8,0x41800000,1,0,0,
                   0,0xffffffff);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715cce10
// Entry: 0x715cce10 | Size: 124 bytes
// =========================================================================

void FUN_715cce10(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar2 + 0x485);
    }
    if (iVar2 == 0 || (bVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      thunk_FUN_715600f0(param_1,auStack_50);
      FUN_715601e8(param_1,uStack_20,uStack_1c,uStack_18);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715ccf08
// Entry: 0x715ccf08 | Size: 884 bytes
// =========================================================================

void FUN_715ccf08(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  bool bVar10;
  
  iVar6 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar6 != 0) && (iVar6 = thunk_FUN_715609f0(param_1), iVar6 != 0)) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = *(byte *)(*(int *)(param_1 + 0x8c) + 0x485) & 1;
    }
    if ((bVar5 == 0) && (*(int *)(param_1 + 0xd0) != 0)) {
      puVar9 = &DAT_711f5178;
      if (*(byte *)(param_1 + 0x52) != 0) {
        puVar9 = (ushort *)(&DAT_711f5195 + (short)(ushort)*(byte *)(param_1 + 0x52) * 0x1d);
      }
      uVar1 = *puVar9;
      bVar5 = *(byte *)((int)puVar9 + 7);
      uVar2 = puVar9[1];
      iVar6 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
      if (((iVar6 == 0) || (iVar6 = thunk_FUN_715609f0(param_1), iVar6 == 0)) ||
         (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x10) == 0)) {
        FUN_715c7638(param_1,*(int *)(param_1 + 0xd4) * 0x10 + 0x700c4138,
                     *(int *)(param_1 + 0xd4) * 0x10 + 0x700c40f8,0x40800000,1,0,0,0,0xffffffff);
      }
      uVar8 = 0;
      bVar10 = uVar2 < 0x81 || uVar1 != 0;
      if (bVar5 != 0 || bVar10) {
        uVar8 = (uint)(0x7f < uVar2);
        bVar4 = 0x7f < uVar2 || uVar1 != 0;
        if (bVar5 == 0) {
          uVar8 = 1;
        }
        if (bVar5 != 0 || bVar4) {
          bVar3 = uVar2 == 0;
          if ((bVar5 != 0) || (uVar8 = 2, !bVar3 || uVar1 >= 0x80)) {
            if ((bVar5 != 0) || (uVar8 = 3, !bVar3 || 0x80 >= uVar1)) {
              if ((bVar5 != 0) || (uVar8 = 4, 0x80 >= uVar2 || uVar1 >= 0x80)) {
                if ((bVar5 != 0) || (uVar8 = 5, 0x80 >= uVar2 || 0x80 >= uVar1)) {
                  if ((bVar5 != 0) || (uVar8 = 6, uVar2 >= 0x80 || uVar1 >= 0x80)) {
                    if (((((bVar5 != 0) || (uVar8 = 7, 0x7f < uVar2 || uVar1 < 0x81)) &&
                         ((bVar5 == 0 || (uVar8 = 8, bVar10)))) &&
                        ((bVar5 == 0 || (uVar8 = 9, bVar4)))) &&
                       (uVar8 = 10, (bVar5 & (bVar3 && uVar1 < 0x80)) == 0)) {
                      uVar8 = 0xb;
                      bVar10 = (bVar5 & (bVar3 && 0x80 < uVar1)) == 0;
                      if (bVar10) {
                        uVar8 = 0xc;
                      }
                      if (bVar10 && (bVar5 & (0x80 < uVar2 && uVar1 < 0x80)) == 0) {
                        uVar8 = 0xd;
                        bVar10 = (bVar5 & (0x80 < uVar2 && 0x80 < uVar1)) == 0;
                        if (bVar10) {
                          uVar8 = 0xe;
                        }
                        if ((bVar10 && (bVar5 & (uVar2 < 0x80 && uVar1 < 0x80)) == 0) &&
                           (uVar8 = 0xf, bVar5 != 1 || (0x7f < uVar2 || uVar1 < 0x81))) {
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (uVar8 != *(uint *)(param_1 + 0xd8)) {
        *(uint *)(param_1 + 0xd8) = uVar8;
        iVar6 = FUN_715cd40c(param_1);
        if ((iVar6 != 0) || (iVar7 = imp_strlen(0), iVar7 != 0)) {
          FUN_715c7638(param_1,iVar6,*(int *)(param_1 + 0xd4) * 0x10 + 0x700c40f8,0x40800000,0,0,0,0
                       ,0xffffffff);
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715cd40c
// Entry: 0x715cd40c | Size: 24 bytes
// =========================================================================

byte * FUN_715cd40c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45c8);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45b8);
      *puVar4 = 0x177;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d14bc,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45c8);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45b8);
    if (pbVar3[1] == 0) {
      return pbVar3;
    }
    pbVar3[1] = 0;
    bVar6 = *pbVar3 ^ 0x77;
  }
  else {
    if (*(uint *)(param_1 + 0xd4) < 3) {
      iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
      if (((iVar1 == 0) ||
          (*(int *)(*(int *)(DAT_70c39074 + *(short *)(*(int *)(param_1 + 0x8c) + 0x26) * 4) + 0x40)
           != 5)) &&
         ((iVar1 = FUN_71350bb8(), iVar1 == 0 ||
          (*(int *)(*(int *)(DAT_70c39074 + *(short *)(*(int *)(param_1 + 0x8c) + 0x26) * 4) + 0x40)
           != 0x16)))) {
        return (byte *)(param_2 * 0x10 + 0x700c4278);
      }
      return (byte *)(param_2 * 0x10 + 0x700c4178);
    }
    if (*(uint *)(param_1 + 0xd4) == 3) {
      return (byte *)(param_2 * 0x10 + 0x700c4378);
    }
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45e8);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45d8);
      *puVar4 = 0x17d;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d14e0,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45e8);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45d8);
    if (pbVar3[1] == 0) {
      return pbVar3;
    }
    pbVar3[1] = 0;
    bVar6 = *pbVar3 ^ 0x7d;
  }
  *pbVar3 = bVar6;
  return pbVar3;
}


// =========================================================================
// Function: FUN_715cd984
// Entry: 0x715cd984 | Size: 24 bytes
// =========================================================================

undefined4 FUN_715cd984(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xf0);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715cd9f0
// Entry: 0x715cd9f0 | Size: 1096 bytes
// =========================================================================

void FUN_715cd9f0(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar2 != 0) && (iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar2 != 0)) {
    bVar8 = *(int *)(param_1 + 0x8c) == 0;
    bVar1 = 0;
    if (!bVar8) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x8c) + 0x485);
    }
    bVar9 = (bVar1 & 1) == 0;
    bVar10 = bVar8 || bVar9;
    if (bVar8 || bVar9) {
      bVar10 = *(int *)(param_1 + 0xf0) == 0;
    }
    if (bVar10) {
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4608);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45f8);
        *puVar6 = 0x9a3e0463;
        puVar6[1] = 0x384a1f00;
        *(undefined1 *)((int)puVar6 + 10) = 1;
        *(undefined2 *)(puVar6 + 2) = 0x4d63;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1504,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4608);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c45f8);
      if (pbVar4[10] != 0) {
        *pbVar4 = *pbVar4 ^ 0x33;
        pbVar4[1] = pbVar4[1] ^ 0x4d;
        pbVar4[2] = pbVar4[2] ^ 0x6d;
        pbVar4[3] = pbVar4[3] ^ 0xc9;
        pbVar4[10] = 0;
        pbVar4[4] = pbVar4[4] ^ 0x5f;
        pbVar4[5] = pbVar4[5] ^ 0x53;
        pbVar4[6] = pbVar4[6] ^ 5;
        pbVar4[7] = pbVar4[7] ^ 0x77;
        pbVar4[8] = pbVar4[8] ^ 0x33;
        pbVar4[9] = pbVar4[9] ^ 0x4d;
      }
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4628);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4618);
        *(undefined2 *)(puVar6 + 2) = 0x133;
        *puVar6 = 0x85380c63;
        puVar6[1] = 0x34441e11;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1530,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4628);
        *puVar7 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4618);
      if (pbVar5[9] != 0) {
        pbVar5[9] = 0;
        *pbVar5 = *pbVar5 ^ 0x33;
        pbVar5[1] = pbVar5[1] ^ 0x4d;
        pbVar5[2] = pbVar5[2] ^ 0x6d;
        pbVar5[3] = pbVar5[3] ^ 0xc9;
        pbVar5[4] = pbVar5[4] ^ 0x5f;
        pbVar5[5] = pbVar5[5] ^ 0x53;
        pbVar5[6] = pbVar5[6] ^ 5;
        pbVar5[7] = pbVar5[7] ^ 0x77;
        pbVar5[8] = pbVar5[8] ^ 0x33;
      }
      FUN_715c7638(param_1,pbVar4,pbVar5,0x40800000,1,0,0,0,0xffffffff);
      pcVar3 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4648);
      if (*pcVar3 == '\0') {
        puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4638);
        *puVar6 = 0xbd95cefb;
        puVar6[1] = 0xf22a359c;
        *(undefined1 *)((int)puVar6 + 10) = 1;
        *(undefined2 *)(puVar6 + 2) = 0x8be5;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d155c,puVar6,&DAT_70b0e000);
        puVar7 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4648);
        *puVar7 = 1;
      }
      pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4638);
      if (pbVar4[10] != 0) {
        *pbVar4 = *pbVar4 ^ 0xab;
        pbVar4[1] = pbVar4[1] ^ 0x8b;
        pbVar4[2] = pbVar4[2] ^ 0xc1;
        pbVar4[3] = pbVar4[3] ^ 0xef;
        pbVar4[10] = 0;
        pbVar4[4] = pbVar4[4] ^ 0xd3;
        pbVar4[5] = pbVar4[5] ^ 0x79;
        pbVar4[6] = pbVar4[6] ^ 0x69;
        pbVar4[7] = pbVar4[7] ^ 0xb3;
        pbVar4[8] = pbVar4[8] ^ 0xab;
        pbVar4[9] = pbVar4[9] ^ 0x8b;
      }
      FUN_715d33c8(&DAT_700826ba,pbVar4,*(undefined4 *)(param_1 + 8),0,0,0,0x20000000,0x3fe28f5c,
                   0x40000000,0xbfb47ae1,0,0,0x40000000,0x3f847ae1,0,0,1,param_1 + 0xf4);
      FUN_715d33c8(&DAT_700826cc,*(undefined4 *)(param_1 + 0xf4));
      *(undefined4 *)(param_1 + 0xf0) = 1;
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715ce310
// Entry: 0x715ce310 | Size: 184 bytes
// =========================================================================

void FUN_715ce310(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar2 != 0) && (iVar2 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x8c);
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = *(byte *)(iVar2 + 0x485);
    }
    if ((iVar2 == 0 || (bVar1 & 1) == 0) && (*(int *)(param_1 + 0xf0) != 0)) {
      if (*(int *)(param_1 + 0xf4) != 0) {
        FUN_715d33c8(&DAT_700826de);
        *(undefined4 *)(param_1 + 0xf4) = 0;
      }
      thunk_FUN_715600f0(param_1,auStack_50);
      FUN_715601e8(param_1,uStack_20,uStack_1c,uStack_18);
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715ce49c
// Entry: 0x715ce49c | Size: 24 bytes
// =========================================================================

undefined4 FUN_715ce49c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xf8);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715ce508
// Entry: 0x715ce508 | Size: 2108 bytes
// =========================================================================

undefined4 FUN_715ce508(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0;
  }
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xf8);
  }
  if (iVar2 == 0 || iVar3 == 0) {
    return 0;
  }
  iVar3 = thunk_FUN_715609f0(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x52);
  FUN_715c3b44(param_1,0);
  puVar11 = &DAT_711f5178;
  if (bVar1 != 0) {
    puVar11 = (undefined2 *)(&DAT_711f5195 + (short)(ushort)bVar1 * 0x1d);
  }
  if (*(char *)(param_1 + 0x52) != '\0') {
    return 0;
  }
  iVar3 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (((iVar3 != 0) && (iVar3 = thunk_FUN_715609f0(param_1), iVar3 != 0)) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x10) != 0)) {
    return 0;
  }
  if (*(char *)(puVar11 + 3) == '\0') {
    return 0;
  }
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  iVar3 = *(int *)(param_1 + 0xf8);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (2 < iVar3 - 1U) {
    if (iVar3 != 4) {
      return 1;
    }
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46e8);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46d8);
      *(undefined1 *)(puVar8 + 3) = 1;
      *puVar8 = 0xa4b8d0d6;
      puVar8[1] = 0xd17888c8;
      puVar8[2] = 0xc7bfc9d7;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1630,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46e8);
      *puVar9 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46d8);
    if (pbVar5[0xc] != 0) {
      *pbVar5 = *pbVar5 ^ 0xa5;
      pbVar5[1] = pbVar5[1] ^ 0xbd;
      pbVar5[2] = pbVar5[2] ^ 0xd3;
      pbVar5[3] = pbVar5[3] ^ 199;
      pbVar5[0xc] = 0;
      pbVar5[4] = pbVar5[4] ^ 0xa1;
      pbVar5[5] = pbVar5[5] ^ 0xef;
      pbVar5[6] = pbVar5[6] ^ 0x27;
      pbVar5[7] = pbVar5[7] ^ 0xa1;
      pbVar5[8] = pbVar5[8] ^ 0xa5;
      pbVar5[9] = pbVar5[9] ^ 0xbd;
      pbVar5[10] = pbVar5[10] ^ 0xd3;
      pbVar5[0xb] = pbVar5[0xb] ^ 199;
    }
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4708);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46f8);
      *puVar8 = 0x809dfce2;
      *(undefined1 *)((int)puVar8 + 6) = 1;
      *(undefined2 *)(puVar8 + 1) = 0xeff2;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d165c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4708);
      *puVar9 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46f8);
    if (pbVar6[6] != 0) {
      pbVar6[6] = 0;
      *pbVar6 = *pbVar6 ^ 0xa5;
      pbVar6[1] = pbVar6[1] ^ 0xbd;
      pbVar6[2] = pbVar6[2] ^ 0xd3;
      pbVar6[3] = pbVar6[3] ^ 199;
      pbVar6[4] = pbVar6[4] ^ 0xa1;
      pbVar6[5] = pbVar6[5] ^ 0xef;
    }
    FUN_715c7638(param_1,pbVar5,pbVar6,0x442f0000,0,0,0,0,0xabe);
    return 1;
  }
  iVar2 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (((iVar2 == 0) ||
      (*(int *)(*(int *)(DAT_70c39074 + *(short *)(*(int *)(param_1 + 0x8c) + 0x26) * 4) + 0x40) !=
       5)) && ((iVar2 = FUN_71350bb8(), iVar2 == 0 ||
               (*(int *)(*(int *)(DAT_70c39074 + *(short *)(*(int *)(param_1 + 0x8c) + 0x26) * 4) +
                        0x40) != 0x16)))) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46a8);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4698);
      *puVar8 = 0xb8f4bd8f;
      puVar8[1] = 0x8be3ede6;
      puVar8[2] = 0xa8f3ac86;
      *(undefined1 *)((int)puVar8 + 0xf) = 1;
      *(undefined4 *)((int)puVar8 + 0xb) = 0xade9faa8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d15dc,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46a8);
      *puVar9 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4698);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 0xcb;
      pbVar5[1] = pbVar5[1] ^ 0xf3;
      pbVar5[2] = pbVar5[2] ^ 0xbf;
      pbVar5[3] = pbVar5[3] ^ 0xe7;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0xb5;
      pbVar5[5] = pbVar5[5] ^ 0xb9;
      pbVar5[6] = pbVar5[6] ^ 0xad;
      pbVar5[7] = pbVar5[7] ^ 0xcf;
      pbVar5[8] = pbVar5[8] ^ 0xcb;
      pbVar5[9] = pbVar5[9] ^ 0xf3;
      pbVar5[10] = pbVar5[10] ^ 0xbf;
      pbVar5[0xb] = pbVar5[0xb] ^ 0xe7;
      pbVar5[0xc] = pbVar5[0xc] ^ 0xb5;
      pbVar5[0xd] = pbVar5[0xd] ^ 0xb9;
      pbVar5[0xe] = pbVar5[0xe] ^ 0xad;
    }
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46c8);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46b8);
      *puVar8 = 0xe7edb289;
      *(undefined1 *)(puVar8 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d160c,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46c8);
      *puVar9 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c46b8);
    if (pbVar6[4] == 0) goto LAB_715ceaf4;
    pbVar6[4] = 0;
    *pbVar6 = *pbVar6 ^ 0xcb;
    pbVar6[1] = pbVar6[1] ^ 0xf3;
    pbVar6[2] = pbVar6[2] ^ 0xbf;
    bVar1 = pbVar6[3] ^ 0xe7;
  }
  else {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4668);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4658);
      *puVar8 = 0xcc9a2ffb;
      puVar8[1] = 0xaf55d7bc;
      puVar8[2] = 0xdc9d3ef9;
      *(undefined1 *)((int)puVar8 + 0xf) = 1;
      *(undefined4 *)((int)puVar8 + 0xb) = 0x1bd3a0dc;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d1588,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4668);
      *puVar9 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4658);
    if (pbVar5[0xf] != 0) {
      *pbVar5 = *pbVar5 ^ 0xbf;
      pbVar5[1] = pbVar5[1] ^ 0x61;
      pbVar5[2] = pbVar5[2] ^ 0xd1;
      pbVar5[3] = pbVar5[3] ^ 0x93;
      pbVar5[0xf] = 0;
      pbVar5[4] = pbVar5[4] ^ 0xef;
      pbVar5[5] = pbVar5[5] ^ 0x83;
      pbVar5[6] = pbVar5[6] ^ 0x1b;
      pbVar5[7] = pbVar5[7] ^ 0xeb;
      pbVar5[8] = pbVar5[8] ^ 0xbf;
      pbVar5[9] = pbVar5[9] ^ 0x61;
      pbVar5[10] = pbVar5[10] ^ 0xd1;
      pbVar5[0xb] = pbVar5[0xb] ^ 0x93;
      pbVar5[0xc] = pbVar5[0xc] ^ 0xef;
      pbVar5[0xd] = pbVar5[0xd] ^ 0x83;
      pbVar5[0xe] = pbVar5[0xe] ^ 0x1b;
    }
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4688);
    if (*pcVar4 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4678);
      *puVar8 = 0x938320fd;
      *(undefined1 *)(puVar8 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d15b8,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4688);
      *puVar9 = 1;
    }
    pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c4678);
    if (pbVar6[4] == 0) goto LAB_715ceaf4;
    pbVar6[4] = 0;
    *pbVar6 = *pbVar6 ^ 0xbf;
    pbVar6[1] = pbVar6[1] ^ 0x61;
    pbVar6[2] = pbVar6[2] ^ 0xd1;
    bVar1 = pbVar6[3] ^ 0x93;
  }
  pbVar6[3] = bVar1;
LAB_715ceaf4:
  FUN_715c7638(param_1,pbVar5,pbVar6,0x40800000,0,0,0,0,0xffffffff);
  if (iVar3 - 1U < 2) {
    uVar7 = *(int *)(param_1 + 0x100) + 0x4e2;
    uVar10 = 50000;
    if (uVar7 < 50000) {
      uVar10 = uVar7;
    }
    *(uint *)(param_1 + 0x100) = uVar10;
  }
  return 1;
}


// =========================================================================
// Function: FUN_715cf6dc
// Entry: 0x715cf6dc | Size: 840 bytes
// =========================================================================

void FUN_715cf6dc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  undefined *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [48];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xf8) != 0) {
      FUN_715cfddc(param_1);
    }
    thunk_FUN_715600f0(param_1,auStack_60);
    switch(param_2) {
    case 1:
      uVar3 = FUN_71ba1638(uStack_2c);
      uVar4 = FUN_71ba1638(uStack_28);
      uVar5 = FUN_71ba1638(uStack_30);
      puStack_80 = (undefined1 *)(param_1 + 0xfc);
      uStack_88 = uVar4;
      FUN_715d33c8(&DAT_700826f0,0x607,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3);
      iVar1 = FUN_71350fd8(*(undefined4 *)(param_1 + 0xfc));
      if (iVar1 == 0) {
        uVar2 = 1;
LAB_715cfa30:
        *(undefined4 *)(param_1 + 0xfc) = uVar2;
        return;
      }
      uStack_68 = 0xffffffff;
      puStack_70 = &DAT_700612eb;
      uStack_88._0_4_ = 0xe0000001;
      uStack_88._4_4_ = 0x3f9eb851;
      puStack_80 = &DAT_40000001;
      uStack_7c = 0xbfd33333;
      uStack_78 = 6;
      uStack_74 = 0x10;
      puStack_6c = puStack_70;
      FUN_715d33c8(&DAT_70082702,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xfc),
                   &uStack_88,0xa0000000,0x3fa99999);
      uVar2 = 1;
      break;
    case 2:
      uVar3 = FUN_71ba1638(uStack_2c);
      uVar4 = FUN_71ba1638(uStack_28);
      uVar5 = FUN_71ba1638(uStack_30);
      puStack_80 = (undefined1 *)(param_1 + 0xfc);
      uStack_88 = uVar4;
      FUN_715d33c8(&DAT_700826f0,0x5ce,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3);
      iVar1 = FUN_71350fd8(*(undefined4 *)(param_1 + 0xfc));
      if (iVar1 == 0) {
        uVar2 = 2;
        goto LAB_715cfa30;
      }
      uStack_68 = 0xffffffff;
      puStack_70 = &DAT_700612eb;
      uStack_88._0_4_ = 0xe0000001;
      uStack_88._4_4_ = 0x3f9eb851;
      puStack_80 = (undefined1 *)0xa0000000;
      uStack_7c = 0xbfa99999;
      uStack_78 = 6;
      uStack_74 = 0x10;
      puStack_6c = puStack_70;
      FUN_715d33c8(&DAT_70082702,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xfc),
                   &uStack_88,0xa0000000,0x3fa99999);
      uVar2 = 2;
      break;
    case 3:
      uVar3 = FUN_71ba1638(uStack_2c);
      uVar4 = FUN_71ba1638(uStack_28);
      uVar5 = FUN_71ba1638(uStack_30);
      puStack_80 = (undefined1 *)(param_1 + 0xfc);
      uStack_88 = uVar4;
      FUN_715d33c8(&DAT_700826f0,0x60a,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3);
      iVar1 = FUN_71350fd8(*(undefined4 *)(param_1 + 0xfc));
      if (iVar1 == 0) {
        uVar2 = 3;
        goto LAB_715cfa30;
      }
      uStack_68 = 0xffffffff;
      puStack_70 = &DAT_700612eb;
      uStack_88._0_4_ = 0x9fffffff;
      uStack_88._4_4_ = 0x3fb99999;
      puStack_80 = (undefined1 *)0x3fffffff;
      uStack_7c = 0xbf947ae1;
      uStack_78 = 6;
      uStack_74 = 0x10;
      puStack_6c = puStack_70;
      FUN_715d33c8(&DAT_70082702,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xfc),
                   &uStack_88,0x40000000,0x3fa47ae1);
      uVar2 = 3;
      break;
    case 4:
      uVar2 = 4;
      break;
    default:
      goto switchD_715cf75c_default;
    }
    *(undefined4 *)(param_1 + 0xf8) = uVar2;
  }
switchD_715cf75c_default:
  return;
}


// =========================================================================
// Function: FUN_715cfddc
// Entry: 0x715cfddc | Size: 204 bytes
// =========================================================================

void FUN_715cfddc(int param_1)

{
  int iVar1;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_715d33c8(&DAT_70082702,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xfc),6,0,0,0,0,0,0
                   ,6,0x10,&DAT_700612eb,&DAT_700612eb,0);
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    thunk_FUN_715600f0(param_1,auStack_58);
    FUN_715601e8(param_1,uStack_28,uStack_24,uStack_20);
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_715d00b4
// Entry: 0x715d00b4 | Size: 28 bytes
// =========================================================================

void FUN_715d00b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined **appuStack_44 [4];
  int *piStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uStack_24 = param_5;
    uStack_2c = param_3;
    uStack_28 = param_4;
    uVar2 = FUN_71499434(0x2c);
    FUN_714a157c(uVar2,param_2,&uStack_2c,0x40400000,1,0);
    FUN_713ca218(appuStack_44,3,uVar2,0);
    FUN_713c9dcc(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x34,appuStack_44,0);
    appuStack_44[0] = &PTR_LAB_70b0e0f0;
    if (piStack_34 != (int *)0x0) {
      (**(code **)(*piStack_34 + 4))();
    }
    FUN_713c973c(appuStack_44);
  }
  return;
}


// =========================================================================
// Function: FUN_715d03bc
// Entry: 0x715d03bc | Size: 24 bytes
// =========================================================================

void FUN_715d03bc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xec) = param_2;
  FUN_715d33c8(&DAT_70082714,*(undefined4 *)(param_1 + 8),param_2);
  return;
}


// =========================================================================
// Function: FUN_715d04ac
// Entry: 0x715d04ac | Size: 24 bytes
// =========================================================================

undefined4 FUN_715d04ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0xec);
  }
  return uVar2;
}


// =========================================================================
// Function: FUN_715d0548
// Entry: 0x715d0548 | Size: 24 bytes
// =========================================================================

void FUN_715d0548(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 != 0) {
    iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
    if (iVar1 != 0) {
      *DAT_7118e024 = *(undefined1 *)(param_1 + 0x52);
      iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0x14);
      FUN_715601e8(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),
                   *(undefined4 *)(iVar1 + 0x38));
      FUN_713cceec();
      *DAT_7118e024 = 0;
    }
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715d0670
// Entry: 0x715d0670 | Size: 24 bytes
// =========================================================================

void FUN_715d0670(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 != 0) {
    uVar4 = FUN_71351810(*(undefined4 *)(param_1 + 8));
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x8c);
      if (iVar1 != 0) {
        uVar2 = (uint)*(byte *)(iVar1 + 0x485);
      }
      if ((iVar1 == 0 || (uVar2 & 1) == 0) &&
         (piVar3 = *(int **)(*(int *)(iVar1 + 0x440) + 0x10), piVar3 != (int *)0x0)) {
        iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
        if (iVar1 != 0x517) {
          return;
        }
        FUN_714a35e8(piVar3,*(undefined4 *)(param_1 + 0x8c));
        (**(code **)(*piVar3 + 4))(piVar3);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x440) + 0x10) = 0;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d07a0
// Entry: 0x715d07a0 | Size: 16 bytes
// =========================================================================

bool FUN_715d07a0(int param_1)

{
  return *(int *)(param_1 + 0x170) != 0;
}


// =========================================================================
// Function: FUN_715d07c8
// Entry: 0x715d07c8 | Size: 24 bytes
// =========================================================================

void FUN_715d07c8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x170) = param_2;
  if (*(int *)(param_1 + 0x174) != 0) {
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_715d07f8
// Entry: 0x715d07f8 | Size: 128 bytes
// =========================================================================

void FUN_715d07f8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    bVar2 = *(int *)(param_1 + 0x170) != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0x8c);
    }
    if (((bVar2 && iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0))
       && (*(int *)(*(int *)(param_1 + 0x8c) + *(char *)(*(int *)(param_1 + 0x8c) + 0x71c) * 0x1c +
                   0x5a4) != 0)) {
      FUN_715c3b44(param_1,0);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d08e4
// Entry: 0x715d08e4 | Size: 672 bytes
// =========================================================================

void FUN_715d08e4(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar1 = FUN_71350bb8();
    if (iVar1 == 0) {
      return;
    }
    uVar4 = FUN_71351810(*(undefined4 *)(param_1 + 8));
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      bVar3 = *(int *)(*(int *)(param_1 + 0x8c) + 0x18) != 0;
      if (bVar3) {
        iVar1 = *(int *)(param_1 + 0x170);
      }
      if (bVar3 && iVar1 != 0) {
        iVar1 = FUN_714172f4();
        if (iVar1 != 0) {
          iVar2 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 9;
          *(undefined4 *)(iVar2 + 0x4c) = 0xbf2b14fd;
          *(undefined4 *)(iVar2 + 0x54) = 0xbf38b8e1;
          *(undefined4 *)(iVar2 + 0x58) = 0xbc4c0bdd;
          *(undefined4 *)(iVar2 + 0x50) = 0x3e38cda7;
          iVar2 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 10;
          *(undefined4 *)(iVar2 + 0x4c) = 0x3d2bd2b7;
          *(undefined4 *)(iVar2 + 0x54) = 0x3d9ce0fc;
          *(undefined4 *)(iVar2 + 0x58) = 0x3f583090;
          *(undefined4 *)(iVar2 + 0x50) = 0x3f07455a;
          iVar2 = *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0xb + *(int *)(iVar1 + 0x20);
          *(undefined4 *)(iVar2 + 0x4c) = 0xbdcc5543;
          *(undefined4 *)(iVar2 + 0x54) = 0x3e959429;
          *(undefined4 *)(iVar2 + 0x58) = 0x3f4586fd;
          *(undefined4 *)(iVar2 + 0x50) = 0x3f0e6245;
          iVar2 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0xc;
          *(undefined4 *)(iVar2 + 0x4c) = 0xbf05aa93;
          *(undefined4 *)(iVar2 + 0x54) = 0xbee184a1;
          *(undefined4 *)(iVar2 + 0x58) = 0x3f1ea37b;
          *(undefined4 *)(iVar2 + 0x50) = 0xbec5dfa8;
          iVar2 = *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0xd + *(int *)(iVar1 + 0x20);
          *(undefined4 *)(iVar2 + 0x4c) = 0xb97fda40;
          *(undefined4 *)(iVar2 + 0x54) = 0x3e9b074a;
          *(undefined4 *)(iVar2 + 0x58) = 0x3f73fb8b;
          *(undefined4 *)(iVar2 + 0x50) = 0;
          iVar2 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0xf;
          *(undefined4 *)(iVar2 + 0x4c) = 0x3f23e3c1;
          *(undefined4 *)(iVar2 + 0x54) = 0xbf41388b;
          *(undefined4 *)(iVar2 + 0x58) = 0xbd510d39;
          *(undefined4 *)(iVar2 + 0x50) = 0xbe08e326;
          iVar2 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0x10;
          *(undefined4 *)(iVar2 + 0x4c) = 0x3c69ff0d;
          *(undefined4 *)(iVar2 + 0x54) = 0x3de86163;
          *(undefined4 *)(iVar2 + 0x58) = 0x3f5aa876;
          *(undefined4 *)(iVar2 + 0x50) = 0xbf01e00d;
          iVar2 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0x11;
          *(undefined4 *)(iVar2 + 0x4c) = 0x3e027aea;
          *(undefined4 *)(iVar2 + 0x50) = 0xbf0cee39;
          *(undefined4 *)(iVar2 + 0x58) = 0x3f418bc6;
          *(undefined4 *)(iVar2 + 0x54) = 0x3ea91eeb;
          iVar1 = *(int *)(iVar1 + 0x20) + *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * 0x12;
          *(undefined4 *)(iVar1 + 0x4c) = 0x3f1470da;
          *(undefined4 *)(iVar1 + 0x50) = 0x3eede311;
          *(undefined4 *)(iVar1 + 0x54) = 0xbe784a0e;
          *(undefined4 *)(iVar1 + 0x58) = 0x3f1fb0a3;
        }
        FUN_713b45b4(*(undefined4 *)(param_1 + 0x8c));
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d0c0c
// Entry: 0x715d0c0c | Size: 16 bytes
// =========================================================================

bool FUN_715d0c0c(int param_1)

{
  return *(int *)(param_1 + 0x174) != 0;
}


// =========================================================================
// Function: FUN_715d0c34
// Entry: 0x715d0c34 | Size: 24 bytes
// =========================================================================

void FUN_715d0c34(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x174) = param_2;
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}


// =========================================================================
// Function: FUN_715d0c64
// Entry: 0x715d0c64 | Size: 128 bytes
// =========================================================================

void FUN_715d0c64(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    bVar2 = *(int *)(param_1 + 0x174) != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0x8c);
    }
    if (((bVar2 && iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0))
       && (*(int *)(*(int *)(param_1 + 0x8c) + *(char *)(*(int *)(param_1 + 0x8c) + 0x71c) * 0x1c +
                   0x5a4) != 0)) {
      FUN_715c3b44(param_1,0);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d0d50
// Entry: 0x715d0d50 | Size: 168 bytes
// =========================================================================

void FUN_715d0d50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (((*(int *)(param_1 + 0x8c) != 0) && (iVar1 = FUN_71350bb8(), iVar1 != 0)) &&
     (uVar9 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 = (int)((ulonglong)uVar9 >> 0x20),
     (int)uVar9 != 0)) {
    bVar8 = *(int *)(*(int *)(param_1 + 0x8c) + 0x18) != 0;
    if (bVar8) {
      iVar1 = *(int *)(param_1 + 0x174);
    }
    if (bVar8 && iVar1 != 0) {
      iVar1 = FUN_714172f4();
      if (iVar1 != 0) {
        iVar2 = 0;
        do {
          iVar3 = iVar2 + 0x14;
          uVar5 = *(undefined4 *)((int)&DAT_7008272c + iVar2);
          uVar6 = *(undefined4 *)((int)&DAT_70082730 + iVar2);
          uVar7 = *(undefined4 *)((int)&DAT_70082734 + iVar2);
          iVar4 = *(int *)(*(int *)(iVar1 + 0x20) + 0x24) * *(int *)((int)&DAT_70082738 + iVar2) +
                  *(int *)(iVar1 + 0x20);
          *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)((int)&DAT_70082728 + iVar2);
          *(undefined4 *)(iVar4 + 0x50) = uVar5;
          *(undefined4 *)(iVar4 + 0x54) = uVar6;
          *(undefined4 *)(iVar4 + 0x58) = uVar7;
          iVar2 = iVar3;
        } while (iVar3 != 0xf0);
      }
      FUN_713b45b4(*(undefined4 *)(param_1 + 0x8c));
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d0ea0
// Entry: 0x715d0ea0 | Size: 24 bytes
// =========================================================================

uint FUN_715d0ea0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  if (iVar1 != 0 && iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x440);
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = *(int **)(iVar3 + 0x10);
    }
    if (iVar3 != 0 && piVar4 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar4 + 0x14))(piVar4);
      uVar2 = 0;
      if (iVar3 - 700U < 0xe) {
        uVar2 = 0x3003U >> (iVar3 - 700U & 0xff) & 1;
      }
      return uVar2;
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_715d0f60
// Entry: 0x715d0f60 | Size: 24 bytes
// =========================================================================

bool FUN_715d0f60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x440);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      if (*(int **)(iVar1 + 0x10) == (int *)0x0) {
        return false;
      }
      iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x14))();
      return iVar1 == 0x2c0;
    }
  }
  return false;
}


// =========================================================================
// Function: FUN_715d1018
// Entry: 0x715d1018 | Size: 352 bytes
// =========================================================================

void FUN_715d1018(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [64];
  
  iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      if (*(int *)(param_1 + 0x108) != 0) {
        FUN_7144d7ac(DAT_70ffd280);
        *(undefined4 *)(param_1 + 0x108) = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0x18);
      }
      uStack_6c = param_5;
      uStack_78 = param_8;
      uStack_68 = param_6;
      uStack_74 = param_9;
      uStack_7c = param_7;
      uStack_70 = param_4;
      iVar1 = FUN_714172f4(iVar1);
      if (iVar1 != 0) {
        FUN_71450820(DAT_70ffd2ec,auStack_64,&uStack_70,&uStack_7c);
        iVar2 = *(int *)(iVar1 + 8);
        iVar1 = FUN_71416a78(iVar1,param_3);
        uVar3 = FUN_7144cefc(DAT_70ffd280,param_2,auStack_64,iVar2 + iVar1 * 0x40,1);
        *(undefined4 *)(param_1 + 0x108) = uVar3;
        FUN_7144e57c();
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d1684
// Entry: 0x715d1684 | Size: 252 bytes
// =========================================================================

void FUN_715d1684(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = param_2 + 1;
  piVar4 = piVar5;
  if ((int *)*piVar5 != (int *)0x0) {
    piVar1 = (int *)*piVar5;
    do {
      while (piVar3 = piVar1, piVar4 = piVar3, *param_3 < piVar3[4]) {
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
        if ((int *)*piVar3 == (int *)0x0) goto LAB_715d16e8;
      }
      if (*param_3 <= piVar3[4]) {
        uVar2 = 0;
        goto LAB_715d1774;
      }
      piVar1 = (int *)piVar3[1];
    } while ((int *)piVar3[1] != (int *)0x0);
    piVar5 = piVar3 + 1;
  }
LAB_715d16e8:
  piVar3 = (int *)thunk_MwhHq(0x4c);
  piVar3[4] = *(int *)*param_5;
  imp___aeabi_memclr4(piVar3 + 5,0x38);
  FUN_7136cdfc(piVar3 + 7);
  FUN_7136cdfc(piVar3 + 10);
  FUN_7136cdfc(piVar3 + 0xd);
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = (int)piVar4;
  *piVar5 = (int)piVar3;
  piVar4 = piVar3;
  if (*(int *)*param_2 != 0) {
    *param_2 = *(int *)*param_2;
    piVar4 = (int *)*piVar5;
  }
  FUN_712f807c(param_2[1],piVar4);
  param_2[2] = param_2[2] + 1;
  uVar2 = 1;
LAB_715d1774:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar3;
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715d19c8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715d1ebc
// Entry: 0x715d1ebc | Size: 60 bytes
// =========================================================================

void FUN_715d1ebc(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_715d1ebc(param_1,*param_2);
  FUN_715d1ebc(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_715d1fc8
// Entry: 0x715d1fc8 | Size: 20 bytes
// =========================================================================

void FUN_715d1fc8(void)

{
  imp___aeabi_memcpy8(&DAT_711a3d78,&DAT_700c4718,4000);
  return;
}


// =========================================================================
// Function: iiTxqcsCgeFBVzrhqapVKzeTNKzw
// Entry: 0x715d2128 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iiTxqcsCgeFBVzrhqapVKzeTNKzw(undefined1 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined1 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)&puStack_30;
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  puStack_30 = &DAT_70b0edcc;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_715d21ac;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_715d21ac:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715d2380
// Entry: 0x715d2380 | Size: 860 bytes
// =========================================================================

void FUN_715d2380(void)

{
  undefined4 uVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (DAT_711a4d60 != 0) {
    return;
  }
  if (*(int *)(DAT_70c39074 + 0xe0c4) == 0) {
    return;
  }
  FUN_7135d734(0x3831,10);
  FUN_7135ceec(0);
  uVar1 = thunk_MwhHq(0x118);
  FUN_7136cdfc(&uStack_1c);
  FUN_715b6bc4(uVar1,0x3831,0,0,0,uStack_1c,uStack_18,uStack_14,0x453b8000);
  DAT_711a4d60 = uVar1;
  thunk_FUN_715607d8(uVar1,0);
  thunk_FUN_71560790(DAT_711a4d60,0);
  thunk_FUN_715600f0(DAT_711a4d60,&DAT_711a4d20);
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56c8);
  if (*pcVar2 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56b8);
    *puVar5 = 0x18f682c;
    puVar5[1] = 0x421336c2;
    *(undefined1 *)((int)puVar5 + 10) = 1;
    *(undefined2 *)(puVar5 + 2) = 0x920;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d31bc,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56c8);
    *puVar6 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56b8);
  if (pbVar3[10] != 0) {
    *pbVar3 = *pbVar3 ^ 0x41;
    pbVar3[1] = pbVar3[1] ^ 9;
    pbVar3[2] = pbVar3[2] ^ 0xfb;
    pbVar3[3] = pbVar3[3] ^ 0x73;
    pbVar3[10] = 0;
    pbVar3[4] = pbVar3[4] ^ 0xa7;
    pbVar3[5] = pbVar3[5] ^ 0x45;
    pbVar3[6] = pbVar3[6] ^ 0x7b;
    pbVar3[7] = pbVar3[7] ^ 0x29;
    pbVar3[8] = pbVar3[8] ^ 0x41;
    pbVar3[9] = pbVar3[9] ^ 9;
  }
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56e8);
  if (*pcVar2 == '\0') {
    puVar5 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56d8);
    *puVar5 = 0x1f9d6c33;
    puVar5[1] = 0x400f26c2;
    puVar5[2] = 0x1ea4672e;
    *(undefined1 *)((int)puVar5 + 0xf) = 1;
    *(undefined4 *)((int)puVar5 + 0xb) = 0x7b35c61e;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715d31e8,puVar5,&DAT_70b0e000);
    puVar6 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56e8);
    *puVar6 = 1;
  }
  pbVar4 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c56d8);
  if (pbVar4[0xf] != 0) {
    *pbVar4 = *pbVar4 ^ 0x41;
    pbVar4[1] = pbVar4[1] ^ 9;
    pbVar4[2] = pbVar4[2] ^ 0xfb;
    pbVar4[3] = pbVar4[3] ^ 0x73;
    pbVar4[0xf] = 0;
    pbVar4[4] = pbVar4[4] ^ 0xa7;
    pbVar4[5] = pbVar4[5] ^ 0x45;
    pbVar4[6] = pbVar4[6] ^ 0x7b;
    pbVar4[7] = pbVar4[7] ^ 0x29;
    pbVar4[8] = pbVar4[8] ^ 0x41;
    pbVar4[9] = pbVar4[9] ^ 9;
    pbVar4[10] = pbVar4[10] ^ 0xfb;
    pbVar4[0xb] = pbVar4[0xb] ^ 0x73;
    pbVar4[0xc] = pbVar4[0xc] ^ 0xa7;
    pbVar4[0xd] = pbVar4[0xd] ^ 0x45;
    pbVar4[0xe] = pbVar4[0xe] ^ 0x7b;
  }
  DAT_711a4d64 = FUN_715ec410(pbVar3,pbVar4,1);
  return;
}


// =========================================================================
// Function: FUN_715d2b68
// Entry: 0x715d2b68 | Size: 504 bytes
// =========================================================================

void FUN_715d2b68(void)

{
  int iVar1;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = 0;
  if (DAT_711a4d18 != '\0') {
    iVar1 = DAT_711a4d60;
  }
  if (DAT_711a4d18 != '\0' && iVar1 != 0) {
    uStack_70 = DAT_711a4d20;
    uStack_6c = DAT_711a4d24;
    uStack_68 = DAT_711a4d28;
    uStack_64 = DAT_711a4d2c;
    uStack_60 = DAT_711a4d30;
    uStack_5c = DAT_711a4d34;
    uStack_58 = DAT_711a4d38;
    uStack_54 = DAT_711a4d3c;
    uStack_50 = DAT_711a4d40;
    uStack_4c = DAT_711a4d44;
    uStack_48 = DAT_711a4d48;
    uStack_44 = DAT_711a4d4c;
    uStack_34 = DAT_711a4d5c;
    iVar1 = *(int *)(*(int *)(DAT_70ffc978 + 4) + 4);
    uStack_40 = *(undefined4 *)(iVar1 + 0x40);
    uStack_3c = *(undefined4 *)(iVar1 + 0x44);
    uStack_38 = *(undefined4 *)(iVar1 + 0x48);
    uStack_30 = FUN_71ba13e0(*(undefined4 *)(*(int *)(DAT_70ffc978 + 4) + 0x84),0x45098000);
    uStack_2c = uStack_30;
    uStack_28 = uStack_30;
    FUN_715ef454(&uStack_70,&uStack_30);
    FUN_71560458(DAT_711a4d60,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,
                 uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                 uStack_34);
    DAT_711a4d19 = 1;
    FUN_71560458(DAT_711a4d60,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,
                 uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                 uStack_34);
    FUN_7156080c(DAT_711a4d60);
    DAT_711a4d19 = 0;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715d2f24
// Entry: 0x715d2f24 | Size: 244 bytes
// =========================================================================

undefined4 FUN_715d2f24(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  
  if (DAT_711a4d60 != 0) {
    param_3 = *(int *)(DAT_711a4d60 + 4);
  }
  if ((DAT_711a4d60 == 0 || param_3 == 0) || (param_3 != param_1)) {
    return 0;
  }
  if (*DAT_70ffd318 != '\0') {
    cVar1 = '\0';
    if (DAT_711a4d18 != '\0') {
      cVar1 = DAT_711a4d19;
    }
    if (DAT_711a4d18 != '\0' && cVar1 != '\0') {
      iVar3 = FUN_7156042c(DAT_711a4d60);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_7141e1ac(*(undefined4 *)(iVar3 + 4),&LAB_715d22a0,DAT_711a4d60);
      FUN_7151eca4();
      FUN_7151eea0();
      puVar2 = DAT_70b466e0;
      *DAT_70b466e0 = *DAT_70b466e0 | 0x8000000;
      (*DAT_700c8128)(param_1);
      *puVar2 = *puVar2 & 0xf7ffffff;
      FUN_7151ef24();
      return 1;
    }
  }
  return 1;
}


// =========================================================================
// Function: FUN_715d3328
// Entry: 0x715d3328 | Size: 4 bytes
// =========================================================================

void FUN_715d3328(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715d3344 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715d33c8
// Entry: 0x715d33c8 | Size: 484 bytes
// =========================================================================

undefined1
FUN_715d33c8(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  undefined4 *puStack_34;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcVar7 = (char *)(param_1 + 1);
  DAT_711a4d6c = *param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_714969d0(DAT_711a4d68);
  iVar9 = DAT_711a4d68;
  uVar11 = 0;
  *(undefined1 *)(DAT_711a4d68 + 0xfc) = 0;
  *(undefined1 *)(iVar9 + 0xe6) = 0;
  iVar9 = 2;
  puStack_34 = &uStack_c;
  uVar10 = 0;
LAB_715d3468:
  iVar2 = DAT_711a4d68;
  switch(*pcVar7) {
  case 'f':
    puVar4 = (undefined4 *)((int)puStack_34 + 7U & 0xfffffff8);
    uVar5 = puVar4[1];
    puStack_34 = puVar4 + 2;
    uVar8 = *puVar4;
    *(undefined1 *)((int)&DAT_711a4d6c + iVar9) = 6;
    uVar8 = FUN_71ba242c(uVar8,uVar5);
    *(undefined4 *)((int)&DAT_711a4d6c + iVar9 + 1) = uVar8;
    break;
  case 'g':
  case 'h':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 't':
  case 'u':
  case 'w':
  case 'x':
  case 'y':
    return 0;
  case 'i':
    uVar8 = *puStack_34;
    *(undefined1 *)((int)&DAT_711a4d6c + iVar9) = 1;
    *(undefined4 *)((int)&DAT_711a4d6c + iVar9 + 1) = uVar8;
    puStack_34 = puStack_34 + 1;
    break;
  case 's':
    uVar8 = *puStack_34;
    bVar3 = imp_strlen(uVar8);
    *(undefined1 *)((int)&DAT_711a4d6c + iVar9) = 0xe;
    *(byte *)((int)&DAT_711a4d6c + iVar9 + 1) = bVar3;
    imp___aeabi_memcpy(&DAT_711a4d6e + iVar9,uVar8,bVar3);
    iVar9 = iVar9 + 2 + (uint)bVar3;
    pcVar7 = pcVar7 + 1;
    puStack_34 = puStack_34 + 1;
    goto LAB_715d3468;
  case 'v':
    pcVar7 = pcVar7 + 1;
    puVar4 = (undefined4 *)*puStack_34;
    (&DAT_711a4e6c)[uVar10] = puVar4;
    *(undefined1 *)((int)&DAT_711a4d6c + iVar9) = 3;
    *(undefined4 *)(DAT_711a4d68 + (uint)uVar10 * 4 + 0x3c) = *puVar4;
    *(ushort *)((int)&DAT_711a4d6c + iVar9 + 1) = uVar11;
    uVar11 = uVar10 + 1;
    iVar9 = iVar9 + 3;
    puStack_34 = puStack_34 + 1;
    uVar10 = uVar11;
    goto LAB_715d3468;
  case 'z':
    goto switchD_715d3480_caseD_7a;
  default:
    if (*pcVar7 != '\0') {
      return 0;
    }
    *(undefined2 **)(DAT_711a4d68 + 0x10) = &DAT_711a4d6c;
    *(undefined2 **)(iVar2 + 0x14) = &DAT_711a4d6c;
    FUN_71496de4();
    uVar1 = *(undefined1 *)(DAT_711a4d68 + 0xe5);
    if (uVar10 != 0) {
      uVar6 = 0;
      do {
        puVar4 = &DAT_711a4e6c + uVar6;
        iVar9 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(undefined4 *)*puVar4 = *(undefined4 *)(DAT_711a4d68 + iVar9 + 0x3c);
      } while (uVar10 != uVar6);
      return uVar1;
    }
    return uVar1;
  }
  iVar9 = iVar9 + 5;
  pcVar7 = pcVar7 + 1;
  goto LAB_715d3468;
switchD_715d3480_caseD_7a:
  pcVar7 = pcVar7 + 1;
  *(undefined1 *)((int)&DAT_711a4d6c + iVar9) = 0;
  iVar9 = iVar9 + 1;
  goto LAB_715d3468;
}


// =========================================================================
// Function: FUN_715d38f8
// Entry: 0x715d38f8 | Size: 280 bytes
// =========================================================================

void FUN_715d38f8(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_711a4ecd != '\0') {
    return;
  }
  DataMemoryBarrier(0xb);
  if (((DAT_71174c5c & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c5c), iVar2 != 0)) {
    FUN_7158234c(&DAT_71174c40);
    thunk_raw_10ab3090(FUN_7150317c,&DAT_71174c40,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71174c5c);
  }
  uVar1 = DAT_71174c54;
  if ((DAT_71174c50 & 1) == 0) {
    uVar1 = (uint)(DAT_71174c50 >> 1);
  }
  if (uVar1 == 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_71174c5c & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c5c), iVar2 != 0))
    {
      FUN_7158234c(&DAT_71174c40);
      thunk_raw_10ab3090(FUN_7150317c,&DAT_71174c40,&DAT_70b0e000);
      thunk_SixizuLbAnqfgRApsCY(&DAT_71174c5c);
    }
    FUN_71585674(&DAT_71174c40,0);
  }
  DAT_711a4ecd = 1;
  return;
}


// =========================================================================
// Function: FUN_715d3ce4
// Entry: 0x715d3ce4 | Size: 448 bytes
// =========================================================================

void FUN_715d3ce4(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_430 [1040];
  
  if (DAT_711a4ecd == '\0') {
    FUN_715d38f8();
  }
  if (DAT_711a4ecc != '\0') {
    FUN_715d42c8();
    FUN_7156fbec(&DAT_700c56f8);
    return;
  }
  iVar5 = (int)*DAT_70b88ad8;
  uVar3 = (uint)*DAT_70b46ec8;
  uVar4 = (uint)*DAT_70b46ecc;
  uVar1 = DAT_700c5d00;
  if (DAT_700c5d00 == uVar4) {
    uVar1 = DAT_700c5d04;
  }
  if ((DAT_700c5d00 == uVar4 && uVar1 == uVar3) && (DAT_700c5d08 == iVar5)) {
    return;
  }
  DataMemoryBarrier(0xb);
  DAT_700c5d00 = uVar4;
  DAT_700c5d04 = uVar3;
  DAT_700c5d08 = iVar5;
  if (((DAT_71174c5c & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c5c), iVar2 != 0)) {
    FUN_7158234c(&DAT_71174c40);
    thunk_raw_10ab3090(FUN_7150317c,&DAT_71174c40,&DAT_70b0e000);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71174c5c);
  }
  FUN_7156f29c(auStack_430,&DAT_71174c44,uVar4,uVar3,iVar5);
  imp___aeabi_memcpy8(&DAT_700c56f8,auStack_430,0x1fe);
  FUN_7156f6e8(auStack_430,&DAT_71174c44,uVar4,uVar3,iVar5);
  imp___aeabi_memcpy8(&DAT_700c58f8,auStack_430,0x405);
  FUN_715d42c8();
  FUN_7156fbec(&DAT_700c56f8);
  return;
}


// =========================================================================
// Function: FUN_715d42c8
// Entry: 0x715d42c8 | Size: 924 bytes
// =========================================================================

void FUN_715d42c8(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = DAT_700c5794;
  uVar12 = DAT_700c5748;
  uVar11 = DAT_700c5744;
  uVar16 = DAT_700c5740;
  uVar5 = FUN_71ba21e8(DAT_700c5744,DAT_700c5744);
  uVar6 = FUN_71ba21e8(uVar16,uVar16);
  uVar5 = FUN_71ba0b38(uVar6,uVar5);
  uVar6 = FUN_71ba21e8(uVar12,uVar12);
  FUN_71ba0b38(uVar6,uVar5);
  uVar5 = imp_sqrtf();
  iVar7 = FUN_71ba2d70(uVar5,0x38d1b717);
  uVar8 = FUN_71ba13e0(uVar12,uVar5);
  if (iVar7 == 0) {
    uVar8 = 0x3f000000;
  }
  DAT_711a4ebc = uVar8;
  uVar9 = FUN_71ba13e0(uVar11,uVar5);
  if (iVar7 == 0) {
    uVar9 = 0x3f000000;
  }
  DAT_711a4eb8 = uVar9;
  uVar10 = FUN_71ba13e0(uVar16,uVar5);
  uVar16 = DAT_700c5798;
  if (iVar7 == 0) {
    uVar10 = 0;
  }
  DAT_711a4eb4 = uVar10;
  uVar11 = FUN_71ba21e8(DAT_700c5798,DAT_700c5798);
  uVar12 = FUN_71ba21e8(uVar1,uVar1);
  uVar12 = FUN_71ba0b38(uVar12,uVar11);
  uVar11 = DAT_700c579c;
  uVar5 = FUN_71ba21e8(DAT_700c579c,DAT_700c579c);
  FUN_71ba0b38(uVar5,uVar12);
  uVar12 = imp_sqrtf();
  iVar7 = FUN_71ba2d70(uVar12,0x38d1b717);
  if (iVar7 == 0) {
    iVar7 = FUN_71ba2d10(uVar8,0xbdcccccd);
    uVar16 = FUN_71ba21e8(uVar9,uVar9);
    uVar11 = FUN_71ba21e8(uVar10,uVar10);
    uVar16 = FUN_71ba0b38(uVar11,uVar16);
    uVar15 = 0x3dcccccd;
    if (iVar7 != 0) {
      uVar15 = uVar8 ^ 0x80000000;
    }
    uVar11 = FUN_71ba21e8(uVar15,uVar15);
    FUN_71ba0b38(uVar11,uVar16);
    uVar16 = imp_sqrtf();
    uVar13 = FUN_71ba13e0(uVar10 ^ 0x80000000,uVar16);
    uVar14 = FUN_71ba13e0(uVar9 ^ 0x80000000,uVar16);
    uVar15 = FUN_71ba13e0(uVar15,uVar16);
  }
  else {
    uVar13 = FUN_71ba13e0(uVar1,uVar12);
    uVar14 = FUN_71ba13e0(uVar16,uVar12);
    uVar15 = FUN_71ba13e0(uVar11,uVar12);
  }
  DAT_711a4ec0 = uVar13;
  DAT_711a4ec4 = uVar14;
  DAT_711a4ec8 = uVar15;
  FUN_7136cdfc(&uStack_30);
  iVar7 = FUN_71ba2d70(uVar8,0x3d4ccccd);
  uVar2 = uVar10;
  uVar3 = uVar9;
  uVar4 = uVar8;
  if ((iVar7 == 0) &&
     (iVar7 = FUN_71ba2d10(uVar8,0xbd4ccccd), uVar2 = uVar13, uVar3 = uVar14, uVar4 = uVar15,
     iVar7 == 0)) {
    uVar16 = FUN_71ba240c(0x3d4ccccd,uVar8);
    uVar16 = FUN_71ba13e0(uVar16,0x3dcccccd);
    uVar11 = FUN_71ba240c(uVar15,uVar8);
    uVar11 = FUN_71ba21e8(uVar11,uVar16);
    uStack_28 = FUN_71ba0b38(uVar11,uVar8);
    uVar11 = FUN_71ba240c(uVar14,uVar9);
    uVar11 = FUN_71ba21e8(uVar11,uVar16);
    uStack_2c = FUN_71ba0b38(uVar11,uVar9);
    uVar11 = FUN_71ba240c(uVar13,uVar10);
    uVar16 = FUN_71ba21e8(uVar11,uVar16);
    uStack_30 = FUN_71ba0b38(uVar16,uVar10);
    FUN_7136ce28(&uStack_30);
  }
  else {
    uStack_34 = uVar4;
    uStack_38 = uVar3;
    uStack_3c = uVar2;
    FUN_7136d040(&uStack_30,&uStack_3c);
  }
  FUN_7136d040(DAT_710ea894 + *DAT_710ea96c * 0xc,&uStack_30);
  FUN_7136d040(DAT_710ea88c,&uStack_30);
  return;
}


// =========================================================================
// Function: FUN_715d4c9c
// Entry: 0x715d4c9c | Size: 624 bytes
// =========================================================================

void FUN_715d4c9c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (*DAT_70ffd318 != '\0') {
    uStack_21 = 0xff;
    FUN_71ba21e8(DAT_700c56f8,0x437f0000);
    uStack_24 = FUN_71ba17bc();
    uVar3 = DAT_700c5700;
    FUN_71ba21e8(DAT_700c56fc,0x437f0000);
    uStack_23 = FUN_71ba17bc();
    FUN_71ba21e8(uVar3,0x437f0000);
    uStack_22 = FUN_71ba17bc();
    FUN_71420f90(*(undefined4 *)(DAT_70ffc978 + 4),&uStack_24,3);
    return;
  }
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
  iVar2 = DAT_71201728;
  iVar1 = DAT_70ffc978;
  uVar4 = *(undefined4 *)(*(int *)(DAT_70ffc978 + 4) + 0x84);
  FUN_7141f690();
  FUN_7141feb0(*(undefined4 *)(iVar1 + 4),0x44bb8000);
  iVar5 = *(int *)(iVar1 + 4);
  uVar6 = *(undefined4 *)(iVar5 + 0x80);
  uVar3 = FUN_71ba240c(*(undefined4 *)(iVar5 + 0x84),uVar6);
  uVar3 = FUN_71ba21e8(uVar3,0x387fffd5);
  uVar3 = FUN_71ba0b38(uVar3,uVar6);
  FUN_714202f0(iVar5,uVar3);
  FUN_7141f27c(*(undefined4 *)(iVar1 + 4));
  FUN_715dbf08(&DAT_700c56f8);
  if (*DAT_70b46f00 == 0) {
    if (DAT_700c5d0c != '\0') {
      if (DAT_700c58f4 != '\0') {
        FUN_715e1e60(&DAT_700c56f8,&DAT_711a4eb4);
      }
      if (DAT_700c58f5 != '\0') {
        FUN_715df598(&DAT_700c56f8,&DAT_711a4ec0);
      }
    }
    if (0 < iVar2) {
      if (DAT_700c5d0d != '\0') {
        FUN_715e111c(&DAT_700c56f8);
      }
      if (DAT_700c5d0e != '\0') {
        FUN_715d6030(&DAT_700c56f8,&DAT_711a4eb4,&DAT_700c58f8);
      }
      if (iVar2 != 1) {
        if (DAT_700c5d0e != '\0') {
          FUN_715d79f0(&DAT_700c56f8,&DAT_711a4eb4,&DAT_700c58f8);
        }
        if (DAT_700c5d0f != '\0') {
          FUN_715dae3c();
          FUN_715db564();
        }
      }
    }
  }
  FUN_7141f690(*(undefined4 *)(iVar1 + 4));
  FUN_7141feb0(*(undefined4 *)(iVar1 + 4),uVar4);
  FUN_7141f27c(*(undefined4 *)(iVar1 + 4));
  return;
}


// =========================================================================
// Function: FUN_715d54f8
// Entry: 0x715d54f8 | Size: 100 bytes
// =========================================================================

void FUN_715d54f8(void)

{
  FUN_715d4c9c();
  FUN_71413b60(6,1);
  FUN_71413b60(8,1);
  FUN_71413b60(0xc,1);
  FUN_71413b60(0xe,1);
  FUN_71413b60(10,5);
  FUN_71413b60(0xb,6);
  FUN_71413b60(0x14,1);
  return;
}


// =========================================================================
// Function: FUN_715d5654
// Entry: 0x715d5654 | Size: 988 bytes
// =========================================================================

void FUN_715d5654(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  if (DAT_711a4ed0 == 0) {
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d20);
    if (*pcVar1 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d10);
      *puVar4 = 0xefdb8df9;
      *(undefined1 *)(puVar4 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715da3c4,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d20);
      *puVar5 = 1;
    }
    pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d10);
    if (pbVar2[4] != 0) {
      pbVar2[4] = 0;
      *pbVar2 = *pbVar2 ^ 0x8d;
      pbVar2[1] = pbVar2[1] ^ 0xf5;
      pbVar2[2] = pbVar2[2] ^ 0xbf;
      pbVar2[3] = pbVar2[3] ^ 0xef;
    }
    pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d40);
    if (*pcVar1 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d30);
      *(undefined1 *)(puVar4 + 3) = 1;
      *puVar4 = 0x9ad099ee;
      puVar4[1] = 0xae5838bd;
      puVar4[2] = 0xefdb90e6;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715da3e8,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d40);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d30);
    if (pbVar3[0xc] != 0) {
      *pbVar3 = *pbVar3 ^ 0x8d;
      pbVar3[1] = pbVar3[1] ^ 0xf5;
      pbVar3[2] = pbVar3[2] ^ 0xbf;
      pbVar3[3] = pbVar3[3] ^ 0xef;
      pbVar3[0xc] = 0;
      pbVar3[4] = pbVar3[4] ^ 0xd9;
      pbVar3[5] = pbVar3[5] ^ 0x55;
      pbVar3[6] = pbVar3[6] ^ 0x39;
      pbVar3[7] = pbVar3[7] ^ 0xdd;
      pbVar3[8] = pbVar3[8] ^ 0x8d;
      pbVar3[9] = pbVar3[9] ^ 0xf5;
      pbVar3[10] = pbVar3[10] ^ 0xbf;
      pbVar3[0xb] = pbVar3[0xb] ^ 0xef;
    }
    DAT_711a4ed0 = FUN_715ec410(pbVar2,pbVar3,1);
  }
  if (DAT_711a4ed4 != 0) {
    return;
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d60);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d50);
    *puVar4 = 0x133fe7c7;
    *(undefined1 *)(puVar4 + 1) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715da414,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d60);
    *puVar5 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d50);
  if (pbVar2[4] != 0) {
    pbVar2[4] = 0;
    *pbVar2 = *pbVar2 ^ 0xb3;
    pbVar2[1] = pbVar2[1] ^ 0x9f;
    pbVar2[2] = pbVar2[2] ^ 0x5b;
    pbVar2[3] = pbVar2[3] ^ 0x13;
  }
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d80);
  if (*pcVar1 == '\0') {
    puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d70);
    *puVar4 = 0x6634f3d0;
    *(undefined1 *)((int)puVar4 + 7) = 1;
    *(undefined4 *)((int)puVar4 + 3) = 0xa504f366;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715da438,puVar4,&DAT_70b0e000);
    puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d80);
    *puVar5 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5d70);
  if (pbVar3[7] != 0) {
    pbVar3[7] = 0;
    *pbVar3 = *pbVar3 ^ 0xb3;
    pbVar3[1] = pbVar3[1] ^ 0x9f;
    pbVar3[2] = pbVar3[2] ^ 0x5b;
    pbVar3[3] = pbVar3[3] ^ 0x13;
    pbVar3[4] = pbVar3[4] ^ 0x97;
    pbVar3[5] = pbVar3[5] ^ 0x35;
    pbVar3[6] = pbVar3[6] ^ 0xa5;
  }
  DAT_711a4ed4 = FUN_715ec410(pbVar2,pbVar3,1);
  return;
}


// =========================================================================
// Function: FUN_715d6030
// Entry: 0x715d6030 | Size: 244 bytes
// =========================================================================

void FUN_715d6030(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_71ba21e8(*DAT_70b42050,*(undefined4 *)(param_1 + 0x198));
  uVar1 = FUN_71ba21e8(uVar1,0x3b03126f);
  DAT_711a4ed8 = FUN_71ba0b38(uVar1,DAT_711a4ed8);
  if (*(char *)(param_3 + 0x404) != '\0') {
    uVar1 = *(undefined4 *)(param_3 + 0x400);
    iVar2 = FUN_71ba2d50(uVar1,0x3f000000);
    param_1 = param_3;
    if ((iVar2 != 0) &&
       ((*(int *)(param_3 + 0x1f0) != *(int *)(param_3 + 0x3f0) ||
        (*(int *)(param_3 + 0x1ec) != *(int *)(param_3 + 0x3ec))))) {
      uVar1 = FUN_71ba0b38(uVar1,0xbf000000);
      uVar1 = FUN_71ba0b38(uVar1,uVar1);
      uVar3 = FUN_71ba240c(0x3f800000,uVar1);
      FUN_715d62b4(param_3,param_2,uVar3);
      FUN_715d62b4(param_3 + 0x200,param_2,uVar1);
      return;
    }
  }
  FUN_715d62b4(param_1,param_2,0x3f800000);
  return;
}


// =========================================================================
// Function: FUN_715d62b4
// Entry: 0x715d62b4 | Size: 2616 bytes
// =========================================================================

void FUN_715d62b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_74;
  undefined4 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar3 = 0;
  if (DAT_711a4ed4 != (int *)0x0) {
    iVar3 = *DAT_711a4ed4;
  }
  if ((DAT_711a4ed4 != (int *)0x0 && iVar3 != 0) || (FUN_715d5654(), DAT_711a4ed4 != (int *)0x0)) {
    iVar4 = *(int *)(param_1 + 0x1ec);
    iVar3 = iVar4;
    if (0x7f < iVar4) {
      iVar3 = 0x80;
    }
    if (0 < iVar4) {
      uVar35 = *(undefined4 *)(param_1 + 0x1b0);
      uVar5 = FUN_71ba21e8(uVar35,param_3);
      iVar4 = FUN_71ba2d10(uVar5,0x3c23d70a);
      if ((iVar4 == 0) && (*(int *)(DAT_70ffc978 + 4) != 0)) {
        uVar37 = *(undefined4 *)(*(int *)(DAT_70ffc978 + 4) + 0x84);
        uVar5 = FUN_71ba13e0(uVar37,0x43fa0000);
        uVar6 = FUN_71ba21e8(uVar37,0x3f6b851f);
        uVar37 = FUN_71ba21e8(uVar37,0x3f666666);
        iVar4 = FUN_71ba2d10(uVar35,0x3f800000);
        if (iVar4 == 0) {
          uVar35 = 0x3f800000;
        }
        uVar7 = FUN_71ba21e8(uVar35,param_3);
        uVar8 = FUN_71ba1b94(iVar3);
        uVar9 = FUN_71ba13e0(0x40c90fdb);
        uVar35 = DAT_711a4ed8;
        uVar34 = *(uint *)(param_1 + 0x1f0);
        if (uVar34 == 0) {
          uVar34 = 0xdeadbeef;
        }
        uVar32 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
        uVar33 = *(undefined4 *)(DAT_70b46c18 + 0x930);
        uVar10 = *(undefined4 *)(DAT_70b46c18 + 0x934);
        iVar4 = 0;
        iStack_90 = 0;
        iStack_8c = 0;
        do {
          uVar34 = uVar34 * 0x41c64e6d + 0x3039;
          uVar11 = FUN_71ba1b94(iVar4);
          uVar11 = FUN_71ba13e0(uVar11,uVar8);
          uVar11 = FUN_71ba21e8(uVar11,0x40c90fdb);
          uVar12 = FUN_71ba1e0c(uVar34 >> 0x10);
          uVar12 = FUN_71ba13e0(uVar12,0x477fff00);
          uVar12 = FUN_71ba0b38(uVar12,0xbf000000);
          uVar12 = FUN_71ba21e8(uVar9,uVar12);
          uVar12 = FUN_71ba21e8(uVar12,0x3fc00000);
          uVar11 = FUN_71ba0b38(uVar11,uVar12);
          uVar11 = FUN_71ba0b38(uVar11,uVar35);
          uVar34 = uVar34 * 0x41c64e6d + 0x3039;
          uVar12 = FUN_71ba1e0c(uVar34 >> 0x10);
          uVar12 = FUN_71ba13e0(uVar12,0x477fff00);
          uVar12 = FUN_71ba0b38(uVar12,0xbf000000);
          uVar12 = FUN_71ba0b38(uVar12,uVar12);
          uVar12 = FUN_71ba21e8(uVar12,*(undefined4 *)(param_1 + 0x1a0));
          uVar12 = FUN_71ba0b38(uVar12,*(undefined4 *)(param_1 + 0x19c));
          iVar13 = FUN_71ba2d70(uVar12,*(undefined4 *)(param_1 + 0x1a4));
          if (iVar13 == 0) {
            uVar34 = uVar34 * 0x41c64e6d + 0x3039;
            uVar14 = FUN_71ba1e0c(uVar34 >> 0x10);
            uVar14 = FUN_71ba13e0(uVar14,0x477fff00);
            uVar34 = uVar34 * 0x41c64e6d + 0x3039;
            uVar15 = FUN_71ba1e0c(uVar34 >> 0x10);
            uVar15 = FUN_71ba13e0(uVar15,0x477fff00);
            uVar15 = FUN_71ba21e8(uVar15,0x3f4cccce);
            uVar15 = FUN_71ba0b38(uVar15,0x3ecccccd);
            uVar36 = *(undefined4 *)(param_1 + 0x1a8);
            uVar16 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x1ac),uVar36);
            uVar14 = FUN_71ba21e8(uVar16,uVar14);
            uVar14 = FUN_71ba0b38(uVar14,uVar36);
            uVar14 = FUN_71ba21e8(uVar5,uVar14);
            uVar15 = FUN_71ba21e8(uVar15,uVar14);
            uStack_50 = FUN_71ba21e8(uVar15,0x3f000000);
            uVar34 = uVar34 * 0x41c64e6d + 0x3039;
            uVar15 = FUN_71ba1e0c(uVar34 >> 0x10);
            uVar15 = FUN_71ba13e0(uVar15,0x477fff00);
            FUN_71ba21e8(uVar15,0x41000000);
            uVar17 = FUN_71ba17bc();
            if (6 < (int)uVar17) {
              uVar17 = 7;
            }
            uVar18 = uVar17 & 3;
            if (uVar18 == 1) {
              uStack_74 = 0x40490fdb;
              uVar15 = uStack_50;
              uStack_50 = uVar14;
            }
            else {
              uVar15 = uVar14;
              if (uVar18 == 3) {
                uStack_74 = 0xbfc90fda;
              }
              else if (uVar18 == 2) {
                uStack_74 = 0x3fc90fda;
              }
              else {
                uStack_74 = 0;
                uVar15 = uStack_50;
                uStack_50 = uVar14;
              }
            }
            uVar34 = uVar34 * 0x41c64e6d + 0x3039;
            uVar18 = FUN_71ba21e8(uVar5,uVar12);
            uVar14 = FUN_71ba21e8(uVar15,uVar15);
            uVar16 = FUN_71ba21e8(uStack_50,uStack_50);
            FUN_71ba0b38(uVar16,uVar14);
            uVar14 = imp_sqrtf();
            uVar14 = FUN_71ba0b38(uVar18 & 0x7fffffff,uVar14);
            iVar13 = FUN_71ba2d50(uVar14,uVar37);
            if (iVar13 == 0) {
              uStack_30 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x7c));
              uStack_2c = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x80));
              uStack_34 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x78));
              uStack_3c = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x70));
              uStack_38 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x74));
              uStack_40 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x6c));
              uVar14 = FUN_71ba21e8(uVar14,uVar14);
              uVar16 = FUN_71ba21e8(uVar37,uVar37);
              FUN_71ba240c(uVar16,uVar14);
              uVar14 = imp_sqrtf();
              iVar13 = FUN_71ba2d10(uVar14,uVar6);
              uVar16 = FUN_71ba1e0c(uVar34 >> 0x10);
              uVar16 = FUN_71ba13e0(uVar16,0x477fff00);
              uVar16 = FUN_71ba21e8(uVar16,0x3ecccccd);
              uVar16 = FUN_71ba0b38(uVar16,0xbe4ccccd);
              uVar16 = FUN_71ba0b38(uVar16,uStack_74);
              uVar18 = imp_sinf();
              uVar16 = imp_cosf(uVar16);
              if (iVar13 == 0) {
                uVar14 = uVar6;
              }
              uVar36 = imp_cosf(uVar11);
              uVar19 = imp_sinf(uVar11);
              uVar11 = FUN_71ba21e8(uVar36,uVar14);
              uVar11 = FUN_71ba0b38(uVar11,uVar32);
              uVar14 = FUN_71ba21e8(uVar19,uVar14);
              uVar14 = FUN_71ba0b38(uVar14,uVar33);
              uVar12 = FUN_71ba21e8(uVar12,uVar5);
              uVar12 = FUN_71ba0b38(uVar12,uVar10);
              uVar20 = FUN_71ba21e8(uVar16,uVar19 ^ 0x80000000);
              uVar21 = FUN_71ba21e8(uVar36,uVar16);
              uVar22 = FUN_71ba21e8(uVar18,uVar19 ^ 0x80000000);
              uVar36 = FUN_71ba21e8(uVar36,uVar18);
              uVar20 = FUN_71ba21e8(uStack_50,uVar20);
              uVar21 = FUN_71ba21e8(uStack_50,uVar21);
              uVar23 = FUN_71ba21e8(uStack_50,uVar18 ^ 0x80000000);
              uVar22 = FUN_71ba21e8(uVar15,uVar22);
              uVar36 = FUN_71ba21e8(uVar15,uVar36);
              uVar15 = FUN_71ba21e8(uVar16,uVar15);
              uVar16 = FUN_71ba240c(uVar11,uVar20);
              uVar24 = FUN_71ba240c(uVar16,uVar22);
              uVar25 = FUN_71ba240c(uVar14,uVar21);
              uVar26 = FUN_71ba240c(uVar25,uVar36);
              uVar27 = FUN_71ba240c(uVar12,uVar23);
              uVar28 = FUN_71ba240c(uVar27,uVar15);
              uVar29 = FUN_715da460(uVar24,uVar26,uVar28,uVar32,uVar33,uVar10,param_2,&uStack_34,
                                    &uStack_40,0xff);
              uVar11 = FUN_71ba0b38(uVar20,uVar11);
              uVar20 = FUN_71ba240c(uVar11,uVar22);
              uVar14 = FUN_71ba0b38(uVar21,uVar14);
              uVar21 = FUN_71ba240c(uVar14,uVar36);
              uVar12 = FUN_71ba0b38(uVar12,uVar23);
              uVar23 = FUN_71ba240c(uVar12,uVar15);
              uVar30 = FUN_715da460(uVar20,uVar21,uVar23,uVar32,uVar33,uVar10,param_2,&uStack_34,
                                    &uStack_40,0xff);
              uVar16 = FUN_71ba0b38(uVar22,uVar16);
              uVar25 = FUN_71ba0b38(uVar36,uVar25);
              uVar27 = FUN_71ba0b38(uVar15,uVar27);
              uVar31 = FUN_715da460(uVar16,uVar25,uVar27,uVar32,uVar33,uVar10,param_2,&uStack_34,
                                    &uStack_40,0xff);
              uVar11 = FUN_71ba0b38(uVar22,uVar11);
              uVar14 = FUN_71ba0b38(uVar36,uVar14);
              uVar12 = FUN_71ba0b38(uVar15,uVar12);
              uVar15 = FUN_715da460(uVar11,uVar14,uVar12,uVar32,uVar33,uVar10,param_2,&uStack_34,
                                    &uStack_40,0xff);
              iVar13 = iStack_90 * 0x24;
              *(undefined4 *)(&DAT_711a4ee4 + iVar13) = uVar24;
              uVar36 = 0;
              *(undefined4 *)(&DAT_711a4ee8 + iVar13) = uVar26;
              *(undefined4 *)(&DAT_711a4eec + iVar13) = uVar28;
              uVar18 = (int)(uVar17 << 0x1d) >> 0x1f & 0x3f800000;
              if ((uVar17 & 4) == 0) {
                uVar36 = 0x3f800000;
              }
              *(undefined4 *)(&DAT_711a4f08 + iVar13) = uVar20;
              *(undefined4 *)(&DAT_711a4f04 + iVar13) = 0x3f800000;
              *(undefined4 *)(&DAT_711a4f28 + iVar13) = 0x3f800000;
              *(undefined4 *)(&DAT_711a4f0c + iVar13) = uVar21;
              *(undefined4 *)(&DAT_711a4f2c + iVar13) = uVar16;
              *(undefined4 *)(&DAT_711a4f10 + iVar13) = uVar23;
              *(undefined4 *)(&DAT_711a4f30 + iVar13) = uVar25;
              *(undefined4 *)(&DAT_711a4f68 + iVar13) = uVar15;
              *(undefined4 *)(&DAT_711a4f24 + iVar13) = uVar36;
              *(undefined4 *)(&DAT_711a4f6c + iVar13) = uVar36;
              *(undefined4 *)(&DAT_711a4f34 + iVar13) = uVar27;
              *(undefined4 *)(&DAT_711a4efc + iVar13) = uVar29;
              *(uint *)(&DAT_711a4f00 + iVar13) = uVar18;
              *(uint *)(&DAT_711a4f48 + iVar13) = uVar18;
              *(undefined4 *)(&DAT_711a4f20 + iVar13) = uVar30;
              *(undefined4 *)(&DAT_711a4f70 + iVar13) = 0;
              *(undefined4 *)(&DAT_711a4f44 + iVar13) = uVar31;
              *(undefined4 *)(&DAT_711a4f4c + iVar13) = 0;
              *(undefined4 *)(&DAT_711a4f50 + iVar13) = uVar11;
              *(undefined4 *)(&DAT_711a4f54 + iVar13) = uVar14;
              *(undefined4 *)(&DAT_711a4f58 + iVar13) = uVar12;
              iVar13 = iStack_8c * 2;
              iStack_8c = iStack_8c + 6;
              sVar1 = (short)iStack_90;
              *(short *)(&DAT_711a96e4 + iVar13) = sVar1;
              *(short *)(&DAT_711a96e6 + iVar13) = sVar1 + 2;
              *(short *)(&DAT_711a96ec + iVar13) = sVar1 + 2;
              *(short *)(&DAT_711a96ea + iVar13) = sVar1 + 1;
              *(short *)(&DAT_711a96e8 + iVar13) = sVar1 + 1;
              iStack_90 = iStack_90 + 4;
              *(short *)(&DAT_711a96ee + iVar13) = sVar1 + 3;
            }
          }
          piVar2 = DAT_711a4ed4;
          iVar4 = iVar4 + 1;
        } while (iVar3 != iVar4);
        if (0 < iStack_90) {
          FUN_71413b60(8,0);
          FUN_71413b60(6,1);
          FUN_71413b60(0xc,1);
          FUN_71413b60(0xe,0);
          FUN_71413b60(10,2);
          FUN_71413b60(0xb,2);
          FUN_71413b60(1,*piVar2);
          FUN_71413b60(9,2);
          FUN_71413b60(0x14,1);
          iVar3 = FUN_71414c78(&DAT_711a4ee4,iStack_90,0,0x19);
          if (iVar3 != 0) {
            FUN_71414834(3,&DAT_711a96e4,iStack_8c);
            FUN_714150c8();
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715d79f0
// Entry: 0x715d79f0 | Size: 400 bytes
// =========================================================================

void FUN_715d79f0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = *(undefined4 *)(param_1 + 0x194);
  uVar6 = *(undefined4 *)(param_1 + 0x18c);
  uVar4 = *(undefined4 *)(param_1 + 400);
  uVar1 = FUN_71ba21e8(uVar5,uVar5);
  uVar2 = FUN_71ba21e8(uVar4,uVar4);
  FUN_71ba0b38(uVar2,uVar1);
  uVar1 = imp_sqrtf();
  iVar3 = FUN_71ba2d10(uVar1,0x3a83126f);
  if (iVar3 != 0) {
    uVar1 = 0x3f800000;
  }
  uVar2 = FUN_71ba21e8(*DAT_70b42050,uVar6);
  uVar2 = FUN_71ba21e8(uVar2,0x3f000000);
  uVar4 = FUN_71ba13e0(uVar4,uVar1);
  uVar4 = FUN_71ba21e8(uVar2,uVar4);
  DAT_711a4edc = FUN_71ba0b38(uVar4,DAT_711a4edc);
  uVar1 = FUN_71ba13e0(uVar5,uVar1);
  uVar1 = FUN_71ba21e8(uVar2,uVar1);
  DAT_711a4ee0 = FUN_71ba0b38(uVar1,DAT_711a4ee0);
  if (*(char *)(param_3 + 0x404) != '\0') {
    uVar1 = *(undefined4 *)(param_3 + 0x400);
    iVar3 = FUN_71ba2d50(uVar1,0x3f000000);
    param_1 = param_3;
    if ((iVar3 != 0) &&
       ((*(int *)(param_3 + 0x1f8) != *(int *)(param_3 + 0x3f8) ||
        (*(int *)(param_3 + 500) != *(int *)(param_3 + 0x3f4))))) {
      uVar1 = FUN_71ba0b38(uVar1,0xbf000000);
      uVar1 = FUN_71ba0b38(uVar1,uVar1);
      uVar2 = FUN_71ba240c(0x3f800000,uVar1);
      FUN_715d7e4c(param_3,param_2,uVar2);
      param_1 = param_3 + 0x200;
      goto LAB_715d7b74;
    }
  }
  uVar1 = 0x3f800000;
LAB_715d7b74:
  FUN_715d7e4c(param_1,param_2,uVar1);
  return;
}


// =========================================================================
// Function: FUN_715d7e4c
// Entry: 0x715d7e4c | Size: 4096 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x715dac10) */
/* WARNING: Removing unreachable block (ram,0x715dac24) */

void FUN_715d7e4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int iVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  int iStack_a0;
  int iStack_9c;
  uint uStack_68;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = 0;
  if (DAT_711a4ed0 != (int *)0x0) {
    iVar4 = *DAT_711a4ed0;
  }
  if ((DAT_711a4ed0 != (int *)0x0 && iVar4 != 0) || (FUN_715d5654(), DAT_711a4ed0 != (int *)0x0)) {
    iVar5 = *(int *)(param_1 + 500);
    iVar4 = iVar5;
    if (0x7f < iVar5) {
      iVar4 = 0x80;
    }
    if (0 < iVar5) {
      iVar5 = FUN_71ba2d10(*(undefined4 *)(param_1 + 0x1c8),0x3c23d70a);
      if ((iVar5 == 0) && (*(int *)(DAT_70ffc978 + 4) != 0)) {
        uVar38 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
        uVar42 = *(undefined4 *)(DAT_70b46c18 + 0x934);
        uVar39 = *(undefined4 *)(DAT_70b46c18 + 0x930);
        iVar5 = FUN_71ba2d10(uVar42,0xc2b40000);
        if (iVar5 == 0) {
          uVar44 = *(undefined4 *)(param_1 + 0x1b8);
          uVar6 = *(undefined4 *)(param_1 + 0x1cc);
          uVar43 = *(undefined4 *)(param_1 + 0x1b4);
          uVar7 = FUN_71ba0b38(uVar44,*(undefined4 *)(param_1 + 0x1bc));
          uVar8 = FUN_71ba240c(uVar42,uVar7);
          uVar8 = FUN_71ba0b38(uVar8,0xc1200000);
          uVar8 = FUN_71ba21e8(uVar8,0x3e99999a);
          iVar5 = FUN_71ba2d70(uVar8,0);
          if (iVar5 == 0) {
            uVar8 = 0x80000000;
          }
          uVar7 = FUN_71ba0b38(uVar7,uVar8);
          uVar8 = FUN_71ba0b38(uVar44,uVar8);
          uVar44 = FUN_71ba240c(uVar7);
          iVar5 = FUN_71ba2d70(uVar43,0x42480000);
          uVar7 = 0x42480000;
          if (iVar5 != 0) {
            uVar7 = uVar43;
          }
          uVar6 = FUN_71ba21e8(uVar7,uVar6);
          uVar43 = FUN_71ba21e8(uVar7,*(undefined4 *)(param_1 + 0x1d0));
          uVar9 = FUN_71ba240c(uVar43,uVar6);
          iVar5 = FUN_71ba2d10(uVar9,0x38d1b717);
          iVar10 = FUN_71ba2d70(uVar43,0x3f800000);
          if (iVar10 == 0) {
            uVar43 = 0x3f800000;
          }
          uVar11 = FUN_71ba1b94(*DAT_70b4204c);
          uVar12 = FUN_71ba21e8(uVar11,0x3a83126f);
          uVar13 = FUN_71ba0b38(uVar7,uVar7);
          uVar3 = DAT_711a4ee0;
          uVar11 = DAT_711a4edc;
          uVar14 = DAT_711a4ee0 ^ 0x80000000;
          uStack_68 = *(uint *)(param_1 + 0x1f8);
          if (uStack_68 == 0) {
            uStack_68 = 0xdeadbeef;
          }
          iStack_9c = 0;
          iStack_a0 = 0;
          do {
            uVar40 = uStack_68 * 0x41c64e6d + 0x3039;
            uVar15 = FUN_71ba1e0c(uVar40 >> 0x10);
            uVar15 = FUN_71ba13e0(uVar15,0x477fff00);
            uVar40 = uVar40 * 0x41c64e6d + 0x3039;
            uVar16 = FUN_71ba1e0c(uVar40 >> 0x10);
            uVar16 = FUN_71ba13e0(uVar16,0x477fff00);
            uVar40 = uVar40 * 0x41c64e6d + 0x3039;
            uVar17 = FUN_71ba1e0c(uVar40 >> 0x10);
            uVar17 = FUN_71ba13e0(uVar17,0x477fff00);
            uVar40 = uVar40 * 0x41c64e6d + 0x3039;
            uVar18 = FUN_71ba1e0c(uVar40 >> 0x10);
            uVar18 = FUN_71ba13e0(uVar18,0x477fff00);
            uVar40 = uVar40 * 0x41c64e6d + 0x3039;
            uVar19 = FUN_71ba1e0c(uVar40 >> 0x10);
            uVar19 = FUN_71ba13e0(uVar19,0x477fff00);
            uVar19 = FUN_71ba21e8(uVar19,0x3f999999);
            uVar19 = FUN_71ba0b38(uVar19,0x3f19999a);
            uVar40 = uVar40 * 0x41c64e6d + 0x3039;
            uVar20 = FUN_71ba1e0c(uVar40 >> 0x10);
            uVar20 = FUN_71ba13e0(uVar20,0x477fff00);
            uVar20 = FUN_71ba21e8(uVar20,0x3e99999a);
            uVar20 = FUN_71ba0b38(uVar20,0x3f333333);
            uVar41 = uVar40 * 0x41c64e6d + 0x3039;
            uVar21 = FUN_71ba1e0c(uVar41 >> 0x10);
            uVar21 = FUN_71ba13e0(uVar21,0x477fff00);
            FUN_71ba21e8(uVar21,0x41000000);
            uVar40 = FUN_71ba17bc();
            if (6 < (int)uVar40) {
              uVar40 = 7;
            }
            uVar22 = uVar40 & 3;
            if (uVar22 == 1) {
              uVar21 = 0x40490fdb;
            }
            else if (uVar22 == 3) {
              uVar21 = 0xbfc90fda;
            }
            else {
              uVar21 = 0;
              if (uVar22 == 2) {
                uVar21 = 0x3fc90fda;
              }
            }
            uVar41 = uVar41 * 0x41c64e6d + 0x3039;
            uVar23 = FUN_71ba1e0c(uVar41 >> 0x10);
            uVar23 = FUN_71ba13e0(uVar23,0x477fff00);
            uVar23 = FUN_71ba21e8(uVar23,0x3e99999a);
            uVar23 = FUN_71ba0b38(uVar23,0xbe19999a);
            uVar24 = imp_cosf();
            uVar23 = imp_sinf(uVar23);
            uVar25 = FUN_71ba21e8(uVar23,uVar14);
            uVar26 = FUN_71ba21e8(uVar11,uVar24);
            uVar25 = FUN_71ba0b38(uVar26,uVar25);
            uVar15 = FUN_71ba21e8(uVar15,uVar13);
            uVar15 = FUN_71ba0b38(uVar15,uVar25);
            uVar15 = FUN_71ba240c(uVar15,uVar38);
            uVar15 = FUN_71ba0b38(uVar7,uVar15);
            uVar25 = imp_fmodf(uVar15,uVar13);
            iVar10 = FUN_71ba2d10(uVar25,0);
            uVar26 = FUN_71ba0b38(uVar7,uVar7);
            uVar15 = FUN_71ba0b38(uVar26,uVar25);
            if (iVar10 == 0) {
              uVar15 = uVar25;
            }
            uVar24 = FUN_71ba21e8(uVar24,uVar3);
            uVar23 = FUN_71ba21e8(uVar11,uVar23);
            uVar23 = FUN_71ba0b38(uVar23,uVar24);
            uVar16 = FUN_71ba21e8(uVar16,uVar13);
            uVar16 = FUN_71ba0b38(uVar16,uVar23);
            uVar16 = FUN_71ba240c(uVar16,uVar39);
            uVar16 = FUN_71ba0b38(uVar7,uVar16);
            uVar23 = imp_fmodf(uVar16,uVar13);
            iVar10 = FUN_71ba2d10(uVar23,0);
            uVar16 = FUN_71ba0b38(uVar26,uVar23);
            uVar15 = FUN_71ba240c(uVar15,uVar7);
            if (iVar10 == 0) {
              uVar16 = uVar23;
            }
            uVar23 = FUN_71ba240c(uVar16,uVar7);
            uVar16 = FUN_71ba21e8(uVar23,uVar23);
            uVar24 = FUN_71ba21e8(uVar15,uVar15);
            uVar24 = FUN_71ba0b38(uVar24,uVar16);
            uVar16 = FUN_71ba21e8(uVar17,uVar44);
            uVar25 = FUN_71ba0b38(uVar16,uVar8);
            uVar16 = FUN_71ba240c(uVar25,uVar42);
            uVar16 = FUN_71ba21e8(uVar16,uVar16);
            FUN_71ba0b38(uVar16,uVar24);
            uVar26 = imp_sqrtf();
            uVar27 = FUN_71ba0b38(uVar38,uVar15);
            uVar28 = FUN_71ba0b38(uVar39,uVar23);
            uVar41 = uVar41 * 0x41c64e6d + 0x3039;
            uVar16 = FUN_71ba1e0c(uVar41 >> 0x10);
            uVar16 = FUN_71ba13e0(uVar16,0x477fff00);
            uVar16 = FUN_71ba21e8(uVar16,0x3f19999a);
            uVar29 = FUN_71ba0b38(uVar16,0xbe99999a);
            uVar41 = uVar41 * 0x41c64e6d + 0x3039;
            uVar16 = FUN_71ba1e0c(uVar41 >> 0x10);
            uVar16 = FUN_71ba13e0(uVar16,0x477fff00);
            uVar16 = FUN_71ba21e8(uVar16,0x40c90fdb);
            uVar30 = FUN_71ba0b38(uVar16,0);
            uStack_68 = uVar41 * 0x41c64e6d + 0x3039;
            uVar16 = FUN_71ba1e0c(uStack_68 >> 0x10);
            uVar16 = FUN_71ba13e0(uVar16,0x477fff00);
            uVar16 = FUN_71ba21e8(uVar16,0x3e999999);
            uVar31 = FUN_71ba0b38(uVar16,0x3e19999a);
            iVar10 = FUN_71ba2cf0(uVar21,0);
            iVar32 = FUN_71ba2d70(uVar21,0x40400000);
            uVar17 = *(undefined4 *)(param_1 + 0x1c0);
            uVar16 = FUN_71ba240c(*(undefined4 *)(param_1 + 0x1c4),uVar17);
            uVar16 = FUN_71ba21e8(uVar16,uVar18);
            uVar18 = FUN_71ba0b38(uVar16,uVar17);
            uVar16 = FUN_71ba21e8(uVar19,uVar18);
            uVar16 = FUN_71ba21e8(uVar16,0x3f000000);
            uVar17 = uVar18;
            if (iVar10 != 0 || iVar32 != 0) {
              uVar17 = uVar16;
              uVar16 = uVar18;
            }
            uVar18 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x1c8),param_3);
            if (iVar5 == 0) {
              uVar19 = FUN_71ba240c(uVar26,uVar6);
              uVar19 = FUN_71ba13e0(uVar19,uVar9);
              iVar10 = FUN_71ba2d70(uVar19,0);
              if (iVar10 == 0) {
                uVar19 = 0;
              }
              iVar10 = FUN_71ba2d10(uVar19,0x3f800000);
              if (iVar10 == 0) {
                uVar19 = 0x3f800000;
              }
              uVar33 = FUN_71ba21e8(uVar19,uVar19);
              uVar19 = FUN_71ba0b38(uVar19,uVar19);
              uVar19 = FUN_71ba240c(0x40400000,uVar19);
              uVar19 = FUN_71ba21e8(uVar33,uVar19);
            }
            else {
              iVar10 = FUN_71ba2d10(uVar26,uVar6);
              uVar19 = 0x3f800000;
              if (iVar10 != 0) {
                uVar19 = 0;
              }
            }
            uVar19 = FUN_71ba240c(0x3f800000,uVar19);
            uVar18 = FUN_71ba21e8(uVar18,uVar19);
            uVar18 = FUN_71ba21e8(uVar20,uVar18);
            iVar10 = FUN_71ba2d10(uVar18,0x3c23d70a);
            if (iVar10 == 0) {
              uStack_30 = *(undefined4 *)(param_1 + 100);
              uStack_2c = *(undefined4 *)(param_1 + 0x68);
              uStack_34 = *(undefined4 *)(param_1 + 0x60);
              uStack_3c = *(undefined4 *)(param_1 + 0x58);
              uStack_38 = *(undefined4 *)(param_1 + 0x5c);
              uStack_40 = *(undefined4 *)(param_1 + 0x54);
              iVar10 = FUN_71ba2d10(uVar18,0x3f800000);
              if (iVar10 == 0) {
                uVar18 = 0x3f800000;
              }
              FUN_71ba21e8(uVar18,0x437f0000);
              uVar19 = FUN_71ba17bc();
              uVar20 = FUN_71ba13e0(uVar26,uVar43);
              iVar10 = FUN_71ba2d10(uVar20,0x3f800000);
              uVar24 = imp_sqrtf(uVar24);
              iVar32 = FUN_71ba2d70(uVar24,0x3c23d70a);
              uVar18 = FUN_71ba13e0(uVar15,uVar24);
              uVar15 = FUN_71ba13e0(uVar23,uVar24);
              uVar21 = FUN_71ba0b38(uVar29,uVar21);
              uVar23 = FUN_71ba21e8(uVar12,uVar31);
              uVar24 = FUN_71ba21e8(uVar23,0x3f000000);
              uVar24 = FUN_71ba0b38(uVar24,uVar30);
              FUN_71ba0b38(uVar24,0x3f800000);
              uVar24 = imp_sinf();
              uVar24 = FUN_71ba21e8(uVar24,0x3dcccccd);
              uVar21 = FUN_71ba0b38(uVar24,uVar21);
              uVar24 = imp_cosf();
              uVar26 = FUN_71ba21e8(uVar23,0x3f333333);
              FUN_71ba0b38(uVar26,uVar30);
              uVar26 = imp_cosf();
              uVar26 = FUN_71ba21e8(uVar26,0x3d75c28f);
              uVar26 = FUN_71ba0b38(uVar26,0x3f800000);
              uVar17 = FUN_71ba21e8(uVar26,uVar17);
              uVar41 = imp_sinf(uVar21);
              uVar21 = FUN_71ba21e8(uVar17,uVar41 ^ 0x80000000);
              FUN_71ba0b38(uVar23,uVar30);
              uVar23 = imp_sinf();
              uVar23 = FUN_71ba21e8(uVar23,0x3da3d70a);
              uVar23 = FUN_71ba0b38(uVar23,0x3f800000);
              uVar16 = FUN_71ba21e8(uVar23,uVar16);
              uVar22 = FUN_71ba21e8(uVar24,uVar16);
              uVar23 = FUN_71ba240c(uVar21,uVar22);
              uVar17 = FUN_71ba21e8(uVar24,uVar17);
              uVar41 = FUN_71ba21e8(uVar41,uVar16);
              uVar16 = FUN_71ba240c(uVar17,uVar41);
              if (iVar32 == 0) {
                uVar15 = 0;
              }
              uVar24 = FUN_71ba21e8();
              if (iVar32 == 0) {
                uVar18 = 0;
              }
              uVar26 = FUN_71ba21e8(uVar23);
              uVar24 = FUN_71ba0b38(uVar26,uVar24);
              if (iVar10 == 0) {
                uVar20 = 0x3f800000;
              }
              uVar20 = FUN_71ba21e8(uVar20,uVar20);
              uVar26 = FUN_71ba21e8(uVar20,0x3e19999a);
              uVar24 = FUN_71ba21e8(uVar24,uVar26);
              uVar20 = FUN_71ba21e8(uVar20,0xc2200000);
              uVar20 = FUN_71ba0b38(uVar25,uVar20);
              uVar24 = FUN_71ba240c(uVar20,uVar24);
              uVar23 = FUN_71ba0b38(uVar27,uVar23);
              uVar16 = FUN_71ba0b38(uVar28,uVar16);
              uVar25 = FUN_715da460(uVar23,uVar16,uVar24,uVar38,uVar39,uVar42,param_2,&uStack_34,
                                    &uStack_40,uVar19);
              uVar29 = FUN_71ba0b38(uVar22,uVar21);
              uVar30 = FUN_71ba0b38(uVar41,uVar17);
              uVar31 = FUN_71ba21e8(uVar30,uVar15);
              uVar33 = FUN_71ba21e8(uVar29,uVar18);
              uVar31 = FUN_71ba0b38(uVar33,uVar31);
              uVar31 = FUN_71ba21e8(uVar31,uVar26);
              uVar31 = FUN_71ba240c(uVar20,uVar31);
              uVar29 = FUN_71ba0b38(uVar27,uVar29);
              uVar30 = FUN_71ba0b38(uVar28,uVar30);
              uVar33 = FUN_715da460(uVar29,uVar30,uVar31,uVar38,uVar39,uVar42,param_2,&uStack_34,
                                    &uStack_40,uVar19);
              uVar34 = FUN_71ba240c(uVar22 ^ 0x80000000,uVar21);
              uVar35 = FUN_71ba240c(uVar41 ^ 0x80000000,uVar17);
              uVar36 = FUN_71ba21e8(uVar35,uVar15);
              uVar37 = FUN_71ba21e8(uVar34,uVar18);
              uVar36 = FUN_71ba0b38(uVar37,uVar36);
              uVar36 = FUN_71ba21e8(uVar36,uVar26);
              uVar36 = FUN_71ba240c(uVar20,uVar36);
              uVar34 = FUN_71ba0b38(uVar27,uVar34);
              uVar35 = FUN_71ba0b38(uVar28,uVar35);
              uVar37 = FUN_715da460(uVar34,uVar35,uVar36,uVar38,uVar39,uVar42,param_2,&uStack_34,
                                    &uStack_40,uVar19);
              uVar21 = FUN_71ba240c(uVar22,uVar21);
              uVar17 = FUN_71ba240c(uVar41,uVar17);
              uVar15 = FUN_71ba21e8(uVar17,uVar15);
              uVar18 = FUN_71ba21e8(uVar21,uVar18);
              uVar15 = FUN_71ba0b38(uVar18,uVar15);
              uVar15 = FUN_71ba21e8(uVar15,uVar26);
              uVar15 = FUN_71ba240c(uVar20,uVar15);
              uVar18 = FUN_71ba0b38(uVar27,uVar21);
              uVar17 = FUN_71ba0b38(uVar28,uVar17);
              uVar19 = FUN_715da460(uVar18,uVar17,uVar15,uVar38,uVar39,uVar42,param_2,&uStack_34,
                                    &uStack_40,uVar19);
              iVar10 = iStack_9c * 0x24;
              *(undefined4 *)(&DAT_711a4ee4 + iVar10) = uVar23;
              *(undefined4 *)(&DAT_711a4ee8 + iVar10) = uVar16;
              *(undefined4 *)(&DAT_711a4efc + iVar10) = uVar25;
              *(undefined4 *)(&DAT_711a4f08 + iVar10) = uVar29;
              *(undefined4 *)(&DAT_711a4f0c + iVar10) = uVar30;
              uVar16 = 0;
              *(undefined4 *)(&DAT_711a4f10 + iVar10) = uVar31;
              if ((uVar40 & 4) == 0) {
                uVar16 = 0x3f800000;
              }
              uVar40 = (int)(uVar40 << 0x1d) >> 0x1f & 0x3f800000;
              *(undefined4 *)(&DAT_711a4f20 + iVar10) = uVar33;
              *(undefined4 *)(&DAT_711a4f2c + iVar10) = uVar34;
              *(undefined4 *)(&DAT_711a4f30 + iVar10) = uVar35;
              *(undefined4 *)(&DAT_711a4f68 + iVar10) = uVar19;
              *(undefined4 *)(&DAT_711a4f24 + iVar10) = uVar16;
              *(undefined4 *)(&DAT_711a4f6c + iVar10) = uVar16;
              *(undefined4 *)(&DAT_711a4eec + iVar10) = uVar24;
              *(uint *)(&DAT_711a4f00 + iVar10) = uVar40;
              *(uint *)(&DAT_711a4f48 + iVar10) = uVar40;
              *(undefined4 *)(&DAT_711a4f04 + iVar10) = 0x3f800000;
              *(undefined4 *)(&DAT_711a4f28 + iVar10) = 0x3f800000;
              *(undefined4 *)(&DAT_711a4f34 + iVar10) = uVar36;
              *(undefined4 *)(&DAT_711a4f70 + iVar10) = 0;
              *(undefined4 *)(&DAT_711a4f44 + iVar10) = uVar37;
              *(undefined4 *)(&DAT_711a4f4c + iVar10) = 0;
              *(undefined4 *)(&DAT_711a4f50 + iVar10) = uVar18;
              *(undefined4 *)(&DAT_711a4f54 + iVar10) = uVar17;
              *(undefined4 *)(&DAT_711a4f58 + iVar10) = uVar15;
              iVar10 = iStack_a0 * 2;
              iStack_a0 = iStack_a0 + 6;
              sVar1 = (short)iStack_9c;
              *(short *)(&DAT_711a96e4 + iVar10) = sVar1;
              *(short *)(&DAT_711a96e6 + iVar10) = sVar1 + 2;
              *(short *)(&DAT_711a96ec + iVar10) = sVar1 + 2;
              *(short *)(&DAT_711a96ea + iVar10) = sVar1 + 1;
              *(short *)(&DAT_711a96e8 + iVar10) = sVar1 + 1;
              iStack_9c = iStack_9c + 4;
              *(short *)(&DAT_711a96ee + iVar10) = sVar1 + 3;
            }
            piVar2 = DAT_711a4ed0;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          if (0 < iStack_9c) {
            FUN_71413b60(8,0);
            FUN_71413b60(6,1);
            FUN_71413b60(0xc,1);
            FUN_71413b60(0xe,0);
            FUN_71413b60(10,5);
            FUN_71413b60(0xb,6);
            FUN_71413b60(1,*piVar2);
            FUN_71413b60(9,2);
            FUN_71413b60(0x14,1);
            iVar4 = FUN_71414c78(&DAT_711a4ee4,iStack_9c,0,0x19);
            if (iVar4 != 0) {
              FUN_71414834(3,&DAT_711a96e4,iStack_a0);
              FUN_714150c8();
              return;
            }
          }
          return;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715da460
// Entry: 0x715da460 | Size: 648 bytes
// =========================================================================

uint FUN_715da460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,int param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = FUN_71ba240c(param_1,param_4);
  uVar2 = FUN_71ba240c(param_2,param_5);
  uVar3 = FUN_71ba240c(param_3,param_6);
  uVar4 = FUN_71ba21e8(uVar2,uVar2);
  uVar5 = FUN_71ba21e8(uVar1,uVar1);
  uVar4 = FUN_71ba0b38(uVar5,uVar4);
  uVar5 = FUN_71ba21e8(uVar3,uVar3);
  FUN_71ba0b38(uVar5,uVar4);
  uVar4 = imp_sqrtf();
  iVar6 = FUN_71ba2d70(uVar4,0x38d1b717);
  if (iVar6 == 0) {
    uVar4 = 0x3f800000;
  }
  uVar2 = FUN_71ba13e0(uVar2,uVar4);
  uVar1 = FUN_71ba13e0(uVar1,uVar4);
  uVar5 = *param_7;
  uVar10 = param_7[2];
  uVar2 = FUN_71ba21e8(uVar2,param_7[1]);
  uVar1 = FUN_71ba21e8(uVar1,uVar5);
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar2 = FUN_71ba13e0(uVar3,uVar4);
  uVar2 = FUN_71ba21e8(uVar2,uVar10);
  uVar1 = FUN_71ba0b38(uVar2,uVar1);
  uVar1 = FUN_71ba21e8(uVar1,0x3f000000);
  uVar1 = FUN_71ba0b38(uVar1,0x3f000000);
  iVar6 = FUN_71ba2d70(uVar1,0);
  if (iVar6 == 0) {
    uVar1 = 0;
  }
  iVar6 = FUN_71ba2d10(uVar1,0x3f800000);
  if (iVar6 == 0) {
    uVar1 = 0x3f800000;
  }
  uVar3 = *param_9;
  uVar11 = param_9[2];
  uVar4 = param_8[1];
  uVar5 = param_8[2];
  uVar10 = *param_8;
  uVar2 = FUN_71ba240c(param_9[1],uVar4);
  uVar2 = FUN_71ba21e8(uVar2,uVar1);
  uVar2 = FUN_71ba0b38(uVar2,uVar4);
  uVar4 = FUN_71ba21e8(uVar2,0x437f0000);
  iVar6 = FUN_71ba2d70(uVar4,0);
  uVar2 = 0;
  if (iVar6 != 0) {
    uVar2 = uVar4;
  }
  iVar6 = FUN_71ba2d10(uVar2,0x437f0000);
  if (iVar6 == 0) {
    uVar2 = 0x437f0000;
  }
  iVar6 = FUN_71ba17bc(uVar2);
  uVar2 = FUN_71ba240c(uVar11,uVar5);
  uVar2 = FUN_71ba21e8(uVar2,uVar1);
  uVar2 = FUN_71ba0b38(uVar2,uVar5);
  uVar4 = FUN_71ba21e8(uVar2,0x437f0000);
  iVar7 = FUN_71ba2d70(uVar4,0);
  uVar2 = 0;
  if (iVar7 != 0) {
    uVar2 = uVar4;
  }
  iVar7 = FUN_71ba2d10(uVar2,0x437f0000);
  if (iVar7 == 0) {
    uVar2 = 0x437f0000;
  }
  iVar7 = FUN_71ba17bc(uVar2);
  uVar2 = FUN_71ba240c(uVar3,uVar10);
  uVar1 = FUN_71ba21e8(uVar2,uVar1);
  uVar1 = FUN_71ba0b38(uVar1,uVar10);
  uVar2 = FUN_71ba21e8(uVar1,0x437f0000);
  iVar8 = FUN_71ba2d70(uVar2,0);
  uVar1 = 0;
  if (iVar8 != 0) {
    uVar1 = uVar2;
  }
  iVar8 = FUN_71ba2d10(uVar1,0x437f0000);
  if (iVar8 == 0) {
    uVar1 = 0x437f0000;
  }
  uVar9 = FUN_71ba17bc(uVar1);
  return iVar7 << 0x10 | param_10 << 0x18 | iVar6 << 8 | uVar9;
}


// =========================================================================
// Function: FUN_715dae3c
// Entry: 0x715dae3c | Size: 784 bytes
// =========================================================================

void FUN_715dae3c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = *DAT_70b88acc;
  iVar3 = FUN_71ba2d30(uVar2,0);
  if (iVar3 == 0) {
    piVar15 = (int *)*DAT_70ffcebc;
    puVar4 = DAT_70ffcebc;
    if (piVar15 != (int *)0x0) {
      puVar4 = (undefined4 *)*piVar15;
    }
    if (piVar15 != (int *)0x0 && puVar4 != (undefined4 *)0x0) {
      FUN_71413b60(6,0);
      FUN_71413b60(8,0);
      FUN_71413b60(0xc,1);
      FUN_71413b60(10,2);
      FUN_71413b60(0xb,2);
      FUN_71413b60(1,*piVar15);
      uVar16 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
      uVar17 = *(undefined4 *)(DAT_70b46c18 + 0x934);
      uVar5 = FUN_71ba0b38(*(undefined4 *)(DAT_70b46c18 + 0x930),0x42c80000);
      uVar17 = FUN_71ba0b38(uVar17,0x40a00000);
      iVar3 = 0;
      do {
        uStack_2c = uVar5;
        uStack_28 = uVar17;
        uVar6 = FUN_71ba1b94(iVar3);
        uVar6 = FUN_71ba21e8(uVar6,0x3fc00000);
        uStack_30 = FUN_71ba0b38(uVar6,uVar16);
        iVar7 = FUN_7135950c(&uStack_30,&uStack_3c,&uStack_40,&uStack_44,0,1);
        if (iVar7 != 0) {
          iVar7 = iVar3 * 3;
          uVar6 = FUN_71ba1e0c((&DAT_7008299c)[iVar7]);
          uVar8 = FUN_71ba21e8(uVar2,uVar6);
          iVar9 = FUN_71ba2d70(uVar8,0);
          uVar6 = 0;
          if (iVar9 != 0) {
            uVar6 = uVar8;
          }
          iVar9 = FUN_71ba2d10(uVar6,0x437f0000);
          if (iVar9 == 0) {
            uVar6 = 0x437f0000;
          }
          uVar8 = FUN_71ba17bc(uVar6);
          uVar1 = (&DAT_7008299e)[iVar7];
          uVar6 = FUN_71ba1e0c((&DAT_7008299d)[iVar7]);
          uVar10 = FUN_71ba21e8(uVar2,uVar6);
          iVar7 = FUN_71ba2d70(uVar10,0);
          uVar6 = 0;
          if (iVar7 != 0) {
            uVar6 = uVar10;
          }
          iVar7 = FUN_71ba2d10(uVar6,0x437f0000);
          if (iVar7 == 0) {
            uVar6 = 0x437f0000;
          }
          uVar10 = FUN_71ba17bc(uVar6);
          uVar6 = FUN_71ba1e0c(uVar1);
          uVar11 = FUN_71ba21e8(uVar2,uVar6);
          iVar7 = FUN_71ba2d70(uVar11,0);
          uVar6 = 0;
          if (iVar7 != 0) {
            uVar6 = uVar11;
          }
          iVar7 = FUN_71ba2d10(uVar6,0x437f0000);
          if (iVar7 == 0) {
            uVar6 = 0x437f0000;
          }
          uVar11 = FUN_71ba17bc(uVar6);
          uVar12 = FUN_71ba21e8(uStack_44,0x42480000);
          uVar6 = uStack_34;
          uVar13 = FUN_71ba13e0(0x3f800000,uStack_34);
          uVar14 = FUN_71ba0b38(uStack_40,uStack_40);
          FUN_71359044(uStack_3c,uStack_38,uVar6,uVar14,uVar12,uVar8,uVar10,uVar11,0xff,uVar13,0xff,
                       0,0,0,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 6);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715db564
// Entry: 0x715db564 | Size: 892 bytes
// =========================================================================

void FUN_715db564(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  
  if (*DAT_70b46ecc < 5) {
    uVar16 = *DAT_70b4204c;
    if ((uVar16 & 0x1fff) >> 5 < 0x19) {
      uVar14 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
      uVar15 = *(undefined4 *)(DAT_70b46c18 + 0x930);
      uVar3 = *(undefined4 *)(DAT_70b46c18 + 0x934);
      FUN_71413b60(1,0);
      FUN_71413b60(6,0);
      FUN_71413b60(8,0);
      FUN_71413b60(0xc,1);
      FUN_71413b60(10,5);
      FUN_71413b60(0xb,6);
      uVar17 = (uVar16 & 0x7ffff) >> 0xd;
      uVar1 = (ushort)((uVar16 << 0xd) >> 0x1a);
      uVar4 = FUN_71ba1b94((uVar17 + ((uint)((short)uVar1 * 0x25) >> 8) * -7 & 0xff) - 3);
      uVar4 = FUN_71ba21e8(uVar4,0x3dcccccd);
      uVar5 = FUN_71ba1b94(((uVar16 & 0xffff) >> 0xd) - 4);
      uVar5 = FUN_71ba21e8(uVar5,0x3dcccccd);
      uVar6 = FUN_71ba21e8(uVar5,uVar5);
      uVar7 = FUN_71ba21e8(uVar4,uVar4);
      uVar6 = FUN_71ba0b38(uVar7,uVar6);
      FUN_71ba0b38(uVar6,0x3f800000);
      uVar6 = imp_sqrtf();
      uVar7 = FUN_71ba13e0(0x3f800000,uVar6);
      uVar2 = (uint)((short)uVar1 * 0x39) >> 9;
      uVar8 = FUN_71ba1b94((uVar17 - (uVar2 | uVar2 << 3) & 0xff) - 5);
      uVar9 = FUN_71ba1b94((uVar17 + ((uint)((short)uVar1 * 0x1a) >> 8) * -10 & 0xff) - 5);
      uVar10 = FUN_71ba21e8(uVar9,uVar9);
      uVar11 = FUN_71ba21e8(uVar8,uVar8);
      uVar10 = FUN_71ba0b38(uVar11,uVar10);
      FUN_71ba0b38(uVar10,0x3c23d70b);
      uVar10 = imp_sqrtf();
      uVar11 = FUN_71ba13e0(0x3dcccccd,uVar10);
      uVar11 = FUN_71ba21e8(uVar11,0x447a0000);
      uVar3 = FUN_71ba0b38(uVar11,uVar3);
      uVar11 = FUN_71ba1b94(400 - (uVar16 & 0x1fff));
      uVar11 = FUN_71ba0b38(uVar11,uVar11);
      uVar12 = FUN_71ba21e8(uVar7,uVar11);
      uStack_64 = FUN_71ba0b38(uVar12,uVar3);
      uVar5 = FUN_71ba13e0(uVar5,uVar6);
      uVar9 = FUN_71ba13e0(uVar9,uVar10);
      uVar9 = FUN_71ba21e8(uVar9,0x447a0000);
      uVar9 = FUN_71ba0b38(uVar9,uVar15);
      uVar12 = FUN_71ba21e8(uVar5,uVar11);
      uStack_68 = FUN_71ba0b38(uVar12,uVar9);
      uVar12 = FUN_71ba0b38(uVar11,0x42480000);
      uVar7 = FUN_71ba21e8(uVar7,uVar12);
      uStack_40 = FUN_71ba0b38(uVar7,uVar3);
      uVar3 = FUN_71ba21e8(uVar5,uVar12);
      uStack_44 = FUN_71ba0b38(uVar3,uVar9);
      uVar3 = FUN_71ba13e0(uVar4,uVar6);
      uVar4 = FUN_71ba13e0(uVar8,uVar10);
      uVar4 = FUN_71ba21e8(uVar4,0x447a0000);
      uVar4 = FUN_71ba0b38(uVar4,uVar14);
      uVar5 = FUN_71ba21e8(uVar3,uVar12);
      uStack_48 = FUN_71ba0b38(uVar5,uVar4);
      uVar3 = FUN_71ba21e8(uVar3,uVar11);
      uStack_6c = FUN_71ba0b38(uVar3,uVar4);
      uStack_54 = 0xe1ffffff;
      uStack_30 = 0xffffff;
      iVar13 = FUN_71414c78(&uStack_6c,2,0,0x18);
      if (iVar13 != 0) {
        uStack_70 = 0x10000;
        FUN_71414834(1,&uStack_70,2);
        FUN_714150c8();
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715dbf08
// Entry: 0x715dbf08 | Size: 4832 bytes
// =========================================================================

void FUN_715dbf08(undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  short sVar32;
  short *psVar33;
  undefined4 uVar34;
  int iStack_4c;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  
  iVar3 = *(int *)(DAT_70ffc978 + 4);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 4);
  }
  if (iVar3 != 0 && iVar4 != 0) {
    iVar4 = FUN_7141ee6c();
    uVar28 = *(undefined4 *)(iVar4 + 0x34);
    uVar31 = *(undefined4 *)(iVar4 + 0x30);
    uVar29 = *(undefined4 *)(iVar4 + 0x38);
    uVar34 = *(undefined4 *)(iVar4 + 0x20);
    uVar30 = *(undefined4 *)(iVar4 + 0x24);
    iStack_4c = 0;
    FUN_715deb44(param_1,0,&uStack_25,&uStack_26,&uStack_27);
    iVar3 = 1;
    FUN_71413b60(1,0);
    FUN_71413b60(6,0);
    FUN_71413b60(8,0);
    FUN_71413b60(0xc,0);
    FUN_71413b60(10,5);
    FUN_71413b60(0xb,6);
    FUN_71413b60(0xe,0);
    FUN_71413b60(0x14,1);
    uVar5 = FUN_71ba21e8(uVar30,uVar30);
    uVar6 = FUN_71ba21e8(uVar34,uVar34);
    FUN_71ba0b38(uVar6,uVar5);
    uVar5 = imp_sqrtf();
    iVar4 = FUN_71ba2d70(uVar5,0x38d1b717);
    uVar7 = FUN_71ba13e0(uVar34,uVar5);
    uVar8 = FUN_71ba13e0(uVar30,uVar5);
    if (iVar4 == 0) {
      uVar8 = 0x3f800000;
    }
    uVar5 = FUN_71ba21e8(uVar8,0x3fb33333);
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    uVar6 = FUN_71ba240c(uVar7 ^ 0x80000000,uVar5);
    uVar30 = FUN_71ba21e8(uVar7,0xbfb33333);
    uVar34 = FUN_71ba240c(uVar8 ^ 0x80000000,uVar30);
    uVar9 = FUN_71ba240c(uVar5,uVar7);
    uVar10 = FUN_71ba240c(uVar30,uVar8);
    uVar11 = FUN_71ba240c(uVar7,uVar5);
    uVar11 = FUN_71ba21e8(uVar11,0x41f00000);
    uVar11 = FUN_71ba0b38(uVar11,uVar31);
    uVar12 = FUN_71ba240c(uVar8,uVar30);
    uVar12 = FUN_71ba21e8(uVar12,0x41f00000);
    uVar12 = FUN_71ba0b38(uVar12,uVar28);
    uVar5 = FUN_71ba0b38(uVar7,uVar5);
    uVar5 = FUN_71ba21e8(uVar5,0x41f00000);
    uVar5 = FUN_71ba0b38(uVar5,uVar31);
    uVar30 = FUN_71ba0b38(uVar8,uVar30);
    uVar30 = FUN_71ba21e8(uVar30,0x41f00000);
    uVar30 = FUN_71ba0b38(uVar30,uVar28);
    uVar13 = FUN_71ba1e0c(uStack_25);
    uVar14 = FUN_71ba1e0c(uStack_26);
    uVar15 = FUN_71ba1e0c(uStack_27);
    sVar32 = 3;
    psVar33 = &DAT_711ab904;
    do {
      uVar16 = FUN_71ba1b94(iVar3 + -1);
      uVar16 = FUN_71ba13e0(uVar16,0x41400000);
      uVar17 = FUN_71ba240c(0x3f800000,uVar16);
      FUN_715deb44(param_1,uVar17,&uStack_28,&uStack_29,&uStack_2a);
      uVar17 = FUN_71ba1b94(iVar3);
      uVar17 = FUN_71ba13e0(uVar17,0x41400000);
      uVar18 = FUN_71ba240c(0x3f800000,uVar17);
      FUN_715deb44(param_1,uVar18,&uStack_2b,&uStack_2c,&uStack_2d);
      *(undefined4 *)(&DAT_711a9ce4 + iStack_4c) = uVar11;
      uVar17 = FUN_71ba0b38(uVar17,uVar17);
      uVar17 = FUN_71ba240c(0x40000000,uVar17);
      uVar17 = FUN_71ba21e8(uVar17,0x41f00000);
      uVar17 = FUN_71ba0b38(uVar17,uVar29);
      *(undefined4 *)(&DAT_711a9d58 + iStack_4c) = uVar17;
      *(undefined4 *)(&DAT_711a9d34 + iStack_4c) = uVar17;
      *(undefined4 *)(&DAT_711a9d50 + iStack_4c) = uVar5;
      *(undefined4 *)(&DAT_711a9d2c + iStack_4c) = uVar11;
      *(undefined4 *)(&DAT_711a9d54 + iStack_4c) = uVar30;
      *(undefined4 *)(&DAT_711a9d30 + iStack_4c) = uVar12;
      uVar16 = FUN_71ba0b38(uVar16,uVar16);
      uVar16 = FUN_71ba240c(0x40000000,uVar16);
      uVar16 = FUN_71ba21e8(uVar16,0x41f00000);
      uVar16 = FUN_71ba0b38(uVar16,uVar29);
      *(undefined4 *)(&DAT_711a9d10 + iStack_4c) = uVar16;
      iVar4 = iStack_4c + 0x90;
      *(undefined4 *)(&DAT_711a9ce8 + iStack_4c) = uVar12;
      *(undefined4 *)(&DAT_711a9cec + iStack_4c) = uVar16;
      *(undefined4 *)(&DAT_711a9d08 + iStack_4c) = uVar5;
      *(undefined4 *)(&DAT_711a9d0c + iStack_4c) = uVar30;
      uVar7 = CONCAT12(uStack_2d,CONCAT11(uStack_2c,uStack_2b)) | 0xff000000;
      *(uint *)(&DAT_711a9d68 + iStack_4c) = uVar7;
      *(uint *)(&DAT_711a9d44 + iStack_4c) = uVar7;
      sVar1 = sVar32 + -2;
      uVar7 = CONCAT12(uStack_2a,CONCAT11(uStack_29,uStack_28)) | 0xff000000;
      *(uint *)(&DAT_711a9d20 + iStack_4c) = uVar7;
      *(uint *)(&DAT_711a9cfc + iStack_4c) = uVar7;
      psVar33[5] = sVar32;
      psVar33[4] = sVar32 + -1;
      iVar3 = iVar3 + 1;
      psVar33[1] = sVar32 + -1;
      sVar2 = sVar32 + -3;
      psVar33[3] = sVar1;
      sVar32 = sVar32 + 4;
      psVar33[2] = sVar1;
      *psVar33 = sVar2;
      psVar33 = psVar33 + 6;
      iStack_4c = iVar4;
    } while (iVar4 != 0x6c0);
    uVar13 = FUN_71ba13e0(uVar13,0x437f0000);
    uVar14 = FUN_71ba13e0(uVar14,0x437f0000);
    uVar15 = FUN_71ba13e0(uVar15,0x437f0000);
    uVar6 = FUN_71ba21e8(uVar6,0x41f00000);
    uVar6 = FUN_71ba0b38(uVar6,uVar31);
    uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
    uVar31 = FUN_71ba0b38(uVar9,uVar31);
    iVar3 = 1;
    sVar32 = 0x33;
    psVar33 = &DAT_711ab994;
    iVar4 = 0;
    do {
      FUN_715deb44(param_1,0,&uStack_28,&uStack_29,&uStack_2a);
      *(undefined4 *)((int)&DAT_711aa3a4 + iVar4) = uVar11;
      *(undefined4 *)((int)&DAT_711aa3ec + iVar4) = uVar11;
      *(undefined4 *)((int)&DAT_711aa3a8 + iVar4) = uVar12;
      *(undefined4 *)((int)&DAT_711aa3c8 + iVar4) = uVar5;
      *(undefined4 *)((int)&DAT_711aa3cc + iVar4) = uVar30;
      *(undefined4 *)((int)&DAT_711aa3f0 + iVar4) = uVar12;
      uVar9 = FUN_71ba1b94(iVar3);
      uVar16 = FUN_71ba21e8(uVar9,0x3e800000);
      uVar9 = FUN_71ba21e8(uVar16,0xbe99999a);
      uVar9 = FUN_71ba0b38(uVar9,0);
      uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
      uVar9 = FUN_71ba0b38(uVar9,uVar29);
      *(undefined4 *)((int)&DAT_711aa3f4 + iVar4) = uVar9;
      *(undefined4 *)((int)&DAT_711aa418 + iVar4) = uVar9;
      *(undefined4 *)((int)&DAT_711aa410 + iVar4) = uVar5;
      *(undefined4 *)((int)&DAT_711aa414 + iVar4) = uVar30;
      uVar9 = FUN_71ba1b94(iVar3 + -1);
      uVar17 = FUN_71ba21e8(uVar9,0x3e800000);
      uVar9 = FUN_71ba21e8(uVar17,0xbe99999a);
      uVar9 = FUN_71ba0b38(uVar9,0);
      uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
      uVar9 = FUN_71ba0b38(uVar9,uVar29);
      *(undefined4 *)((int)&DAT_711aa3ac + iVar4) = uVar9;
      *(undefined4 *)((int)&DAT_711aa3d0 + iVar4) = uVar9;
      uVar9 = FUN_71ba1e0c(uStack_29);
      uVar18 = FUN_71ba13e0(uVar9,0x437f0000);
      uVar19 = FUN_71ba240c(uVar14,uVar18);
      uVar9 = FUN_71ba21e8(uVar19,uVar17);
      uVar9 = FUN_71ba0b38(uVar9,uVar18);
      uVar20 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar21 = FUN_71ba2d70(uVar20,0);
      uVar9 = 0;
      if (iVar21 != 0) {
        uVar9 = uVar20;
      }
      iVar21 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar21 == 0) {
        uVar9 = 0x437f0000;
      }
      iVar21 = FUN_71ba17bc(uVar9);
      uVar9 = FUN_71ba1e0c(uStack_2a);
      uVar20 = FUN_71ba13e0(uVar9,0x437f0000);
      uVar22 = FUN_71ba240c(uVar15,uVar20);
      uVar9 = FUN_71ba21e8(uVar22,uVar17);
      uVar9 = FUN_71ba0b38(uVar9,uVar20);
      uVar23 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar24 = FUN_71ba2d70(uVar23,0);
      uVar9 = 0;
      if (iVar24 != 0) {
        uVar9 = uVar23;
      }
      iVar24 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar24 == 0) {
        uVar9 = 0x437f0000;
      }
      iVar24 = FUN_71ba17bc(uVar9);
      uVar9 = FUN_71ba1e0c(uStack_28);
      uVar23 = FUN_71ba13e0(uVar9,0x437f0000);
      uVar25 = FUN_71ba240c(uVar13,uVar23);
      uVar9 = FUN_71ba21e8(uVar25,uVar17);
      uVar9 = FUN_71ba0b38(uVar9,uVar23);
      uVar17 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar26 = FUN_71ba2d70(uVar17,0);
      uVar9 = 0;
      if (iVar26 != 0) {
        uVar9 = uVar17;
      }
      iVar26 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar26 == 0) {
        uVar9 = 0x437f0000;
      }
      uVar7 = FUN_71ba17bc(uVar9);
      uVar7 = iVar24 << 0x10 | iVar21 << 8 | uVar7 | 0xff000000;
      *(uint *)((int)&DAT_711aa3bc + iVar4) = uVar7;
      *(uint *)((int)&DAT_711aa3e0 + iVar4) = uVar7;
      uVar9 = FUN_71ba21e8(uVar19,uVar16);
      uVar9 = FUN_71ba0b38(uVar9,uVar18);
      uVar17 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar21 = FUN_71ba2d70(uVar17,0);
      uVar9 = 0;
      if (iVar21 != 0) {
        uVar9 = uVar17;
      }
      iVar21 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar21 == 0) {
        uVar9 = 0x437f0000;
      }
      iVar21 = FUN_71ba17bc(uVar9);
      uVar9 = FUN_71ba21e8(uVar22,uVar16);
      uVar9 = FUN_71ba0b38(uVar9,uVar20);
      uVar17 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar24 = FUN_71ba2d70(uVar17,0);
      uVar9 = 0;
      if (iVar24 != 0) {
        uVar9 = uVar17;
      }
      iVar24 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar24 == 0) {
        uVar9 = 0x437f0000;
      }
      iVar24 = FUN_71ba17bc(uVar9);
      uVar9 = FUN_71ba21e8(uVar25,uVar16);
      uVar9 = FUN_71ba0b38(uVar9,uVar23);
      uVar16 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar26 = FUN_71ba2d70(uVar16,0);
      uVar9 = 0;
      if (iVar26 != 0) {
        uVar9 = uVar16;
      }
      iVar26 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar26 == 0) {
        uVar9 = 0x437f0000;
      }
      uVar7 = FUN_71ba17bc(uVar9);
      uVar7 = iVar24 << 0x10 | iVar21 << 8 | uVar7 | 0xff000000;
      sVar1 = sVar32 + -2;
      *(uint *)((int)&DAT_711aa404 + iVar4) = uVar7;
      iVar21 = iVar4 + 0x90;
      *(uint *)((int)&DAT_711aa428 + iVar4) = uVar7;
      psVar33[5] = sVar32;
      psVar33[4] = sVar32 + -1;
      iVar3 = iVar3 + 1;
      psVar33[1] = sVar32 + -1;
      sVar2 = sVar32 + -3;
      psVar33[3] = sVar1;
      sVar32 = sVar32 + 4;
      psVar33[2] = sVar1;
      *psVar33 = sVar2;
      psVar33 = psVar33 + 6;
      iVar4 = iVar21;
    } while (iVar21 != 0x240);
    FUN_715deb44(param_1,0x3f800000,&uStack_28,&uStack_29,&uStack_2a);
    uVar9 = FUN_71ba0b38(uVar29,0x42700000);
    DAT_711aa658 = uVar9;
    uVar10 = FUN_71ba21e8(uVar10,0x41f00000);
    uVar10 = FUN_71ba0b38(uVar10,uVar28);
    DAT_711aa634 = uVar9;
    DAT_711aa650 = uVar31;
    DAT_711aa654 = uVar10;
    uVar34 = FUN_71ba21e8(uVar34,0x41f00000);
    uVar34 = FUN_71ba0b38(uVar34,uVar28);
    DAT_711aa5fc = CONCAT12(uStack_2a,CONCAT11(uStack_29,uStack_28)) | 0xff000000;
    DAT_711ab9cc = 0x430042;
    DAT_711ab9c8 = 0x410041;
    DAT_711ab9c4 = 0x420040;
    DAT_711aa5e4 = uVar11;
    DAT_711aa5e8 = uVar12;
    DAT_711aa5ec = uVar9;
    DAT_711aa608 = uVar5;
    DAT_711aa60c = uVar30;
    DAT_711aa610 = uVar9;
    DAT_711aa620 = DAT_711aa5fc;
    DAT_711aa62c = uVar6;
    DAT_711aa630 = uVar34;
    DAT_711aa644 = DAT_711aa5fc;
    DAT_711aa668 = DAT_711aa5fc;
    uVar9 = FUN_71ba21e8(uVar14,0x437f0000);
    iVar3 = 0;
    iVar4 = FUN_71ba2d70(uVar9,0);
    uVar28 = 0;
    if (iVar4 != 0) {
      uVar28 = uVar9;
    }
    iVar4 = FUN_71ba2d10(uVar28,0x437f0000);
    if (iVar4 == 0) {
      uVar28 = 0x437f0000;
    }
    iVar4 = FUN_71ba17bc(uVar28);
    uVar9 = FUN_71ba21e8(uVar15,0x437f0000);
    iVar21 = FUN_71ba2d70(uVar9,0);
    uVar28 = 0;
    if (iVar21 != 0) {
      uVar28 = uVar9;
    }
    iVar21 = FUN_71ba2d10(uVar28,0x437f0000);
    if (iVar21 == 0) {
      uVar28 = 0x437f0000;
    }
    iVar21 = FUN_71ba17bc(uVar28);
    uVar9 = FUN_71ba21e8(uVar13,0x437f0000);
    iVar24 = FUN_71ba2d70(uVar9,0);
    uVar28 = 0;
    if (iVar24 != 0) {
      uVar28 = uVar9;
    }
    iVar24 = FUN_71ba2d10(uVar28,0x437f0000);
    if (iVar24 == 0) {
      uVar28 = 0x437f0000;
    }
    uVar7 = FUN_71ba17bc(uVar28);
    DAT_711aa68c = iVar21 << 0x10 | iVar4 << 8 | uVar7 | 0xff000000;
    DAT_711aa6b0 = DAT_711aa68c;
    DAT_711aa6d4 = DAT_711aa68c;
    DAT_711aa6f8 = DAT_711aa68c;
    DAT_711aa67c = FUN_71ba0b38(uVar29,0xc1100000);
    iVar4 = 0;
    DAT_711ab9d8 = 0x470046;
    DAT_711ab9d4 = 0x450045;
    psVar33 = &DAT_711ab9f2;
    DAT_711ab9d0 = 0x460044;
    sVar32 = 0x4f;
    DAT_711aa674 = uVar11;
    DAT_711aa678 = uVar12;
    DAT_711aa698 = uVar5;
    DAT_711aa69c = uVar30;
    DAT_711aa6a0 = DAT_711aa67c;
    DAT_711aa6bc = uVar6;
    DAT_711aa6c0 = uVar34;
    DAT_711aa6c4 = DAT_711aa67c;
    DAT_711aa6e0 = uVar31;
    DAT_711aa6e4 = uVar10;
    DAT_711aa6e8 = DAT_711aa67c;
    do {
      uVar28 = FUN_71ba1b94(iVar4);
      uVar28 = FUN_71ba13e0(uVar28,0x41400000);
      uVar9 = FUN_71ba240c(0x3f800000,uVar28);
      FUN_715deb44(param_1,uVar9,&uStack_28,&uStack_29,&uStack_2a);
      iVar4 = iVar4 + 1;
      uVar9 = FUN_71ba1b94(iVar4);
      uVar9 = FUN_71ba13e0(uVar9,0x41400000);
      uVar16 = FUN_71ba240c(0x3f800000,uVar9);
      FUN_715deb44(param_1,uVar16,&uStack_2b,&uStack_2c,&uStack_2d);
      *(undefined4 *)((int)&DAT_711aa704 + iVar3) = uVar6;
      *(undefined4 *)((int)&DAT_711aa708 + iVar3) = uVar34;
      uVar28 = FUN_71ba0b38(uVar28,uVar28);
      uVar28 = FUN_71ba240c(0x40000000,uVar28);
      uVar28 = FUN_71ba21e8(uVar28,0x41f00000);
      uVar28 = FUN_71ba0b38(uVar28,uVar29);
      *(undefined4 *)((int)&DAT_711aa70c + iVar3) = uVar28;
      *(undefined4 *)((int)&DAT_711aa72c + iVar3) = uVar12;
      *(undefined4 *)((int)&DAT_711aa74c + iVar3) = uVar6;
      *(undefined4 *)((int)&DAT_711aa728 + iVar3) = uVar11;
      *(undefined4 *)((int)&DAT_711aa730 + iVar3) = uVar28;
      *(undefined4 *)((int)&DAT_711aa750 + iVar3) = uVar34;
      uVar9 = FUN_71ba0b38(uVar9,uVar9);
      uVar9 = FUN_71ba240c(0x40000000,uVar9);
      uVar9 = FUN_71ba21e8(uVar9,0x41f00000);
      uVar9 = FUN_71ba0b38(uVar9,uVar29);
      uVar7 = CONCAT12(uStack_2a,CONCAT11(uStack_29,uStack_28)) | 0xff000000;
      *(undefined4 *)((int)&DAT_711aa754 + iVar3) = uVar9;
      *(undefined4 *)((int)&DAT_711aa770 + iVar3) = uVar11;
      *(uint *)((int)&DAT_711aa71c + iVar3) = uVar7;
      *(undefined4 *)((int)&DAT_711aa774 + iVar3) = uVar12;
      psVar33[-6] = sVar32 + -4;
      psVar33[-7] = sVar32 + -5;
      uVar8 = CONCAT12(uStack_2d,CONCAT11(uStack_2c,uStack_2b)) | 0xff000000;
      psVar33[-10] = sVar32 + -5;
      psVar33[-0xb] = sVar32 + -7;
      *(uint *)((int)&DAT_711aa740 + iVar3) = uVar7;
      *(uint *)((int)&DAT_711aa764 + iVar3) = uVar8;
      *(undefined4 *)((int)&DAT_711aa778 + iVar3) = uVar9;
      *(uint *)((int)&DAT_711aa788 + iVar3) = uVar8;
      psVar33[-8] = sVar32 + -6;
      psVar33[-9] = sVar32 + -6;
      *(undefined4 *)((int)&DAT_711aa794 + iVar3) = uVar5;
      *(undefined4 *)((int)&DAT_711aa798 + iVar3) = uVar30;
      *(undefined4 *)((int)&DAT_711aa79c + iVar3) = uVar28;
      *(uint *)((int)&DAT_711aa7ac + iVar3) = uVar7;
      *(undefined4 *)((int)&DAT_711aa7b8 + iVar3) = uVar31;
      *(undefined4 *)((int)&DAT_711aa7bc + iVar3) = uVar10;
      *(undefined4 *)((int)&DAT_711aa7c0 + iVar3) = uVar28;
      *(uint *)((int)&DAT_711aa7d0 + iVar3) = uVar7;
      *(uint *)((int)&DAT_711aa7f4 + iVar3) = uVar8;
      *(undefined4 *)((int)&DAT_711aa7dc + iVar3) = uVar5;
      *(undefined4 *)((int)&DAT_711aa7e0 + iVar3) = uVar30;
      *(undefined4 *)((int)&DAT_711aa7e4 + iVar3) = uVar9;
      *(undefined4 *)((int)&DAT_711aa808 + iVar3) = uVar9;
      *(undefined4 *)((int)&DAT_711aa800 + iVar3) = uVar31;
      *(undefined4 *)((int)&DAT_711aa804 + iVar3) = uVar10;
      *(uint *)((int)&DAT_711aa818 + iVar3) = uVar8;
      psVar33[-2] = sVar32 + -2;
      psVar33[-3] = sVar32 + -2;
      psVar33[-4] = sVar32 + -1;
      psVar33[-1] = sVar32 + -1;
      psVar33[-5] = sVar32 + -3;
      *psVar33 = sVar32;
      psVar33 = psVar33 + 0xc;
      iVar3 = iVar3 + 0x120;
      sVar32 = sVar32 + 8;
    } while (iVar3 != 0xd80);
    iVar3 = 1;
    psVar33 = &DAT_711abafc;
    sVar32 = 0xaf;
    iVar4 = 0;
    do {
      FUN_715deb44(param_1,0,&uStack_28,&uStack_29,&uStack_2a);
      uVar28 = FUN_71ba1b94(iVar3);
      uVar9 = FUN_71ba21e8(uVar28,0x3e800000);
      uVar28 = FUN_71ba21e8(uVar9,0xbe99999a);
      uVar28 = FUN_71ba0b38(uVar28,0);
      uVar28 = FUN_71ba21e8(uVar28,0x41f00000);
      uVar16 = FUN_71ba0b38(uVar28,uVar29);
      *(undefined4 *)((int)&DAT_711ab4d4 + iVar4) = uVar16;
      *(undefined4 *)((int)&DAT_711ab4f8 + iVar4) = uVar16;
      uVar28 = FUN_71ba1b94(iVar3 + -1);
      uVar17 = FUN_71ba21e8(uVar28,0x3e800000);
      uVar28 = FUN_71ba21e8(uVar17,0xbe99999a);
      uVar28 = FUN_71ba0b38(uVar28,0);
      uVar28 = FUN_71ba21e8(uVar28,0x41f00000);
      uVar18 = FUN_71ba0b38(uVar28,uVar29);
      *(undefined4 *)((int)&DAT_711ab48c + iVar4) = uVar18;
      *(undefined4 *)((int)&DAT_711ab4b0 + iVar4) = uVar18;
      uVar28 = FUN_71ba1e0c(uStack_29);
      uVar19 = FUN_71ba13e0(uVar28,0x437f0000);
      uVar20 = FUN_71ba240c(uVar14,uVar19);
      uVar28 = FUN_71ba21e8(uVar20,uVar9);
      uVar28 = FUN_71ba0b38(uVar28,uVar19);
      uVar22 = FUN_71ba21e8(uVar28,0x437f0000);
      iVar21 = FUN_71ba2d70(uVar22,0);
      uVar28 = 0;
      if (iVar21 != 0) {
        uVar28 = uVar22;
      }
      iVar21 = FUN_71ba2d10(uVar28,0x437f0000);
      if (iVar21 == 0) {
        uVar28 = 0x437f0000;
      }
      iVar21 = FUN_71ba17bc(uVar28);
      uVar28 = FUN_71ba1e0c(uStack_2a);
      uVar22 = FUN_71ba13e0(uVar28,0x437f0000);
      uVar23 = FUN_71ba240c(uVar15,uVar22);
      uVar28 = FUN_71ba21e8(uVar23,uVar9);
      uVar28 = FUN_71ba0b38(uVar28,uVar22);
      uVar25 = FUN_71ba21e8(uVar28,0x437f0000);
      iVar24 = FUN_71ba2d70(uVar25,0);
      uVar28 = 0;
      if (iVar24 != 0) {
        uVar28 = uVar25;
      }
      iVar24 = FUN_71ba2d10(uVar28,0x437f0000);
      if (iVar24 == 0) {
        uVar28 = 0x437f0000;
      }
      iVar24 = FUN_71ba17bc(uVar28);
      uVar28 = FUN_71ba1e0c(uStack_28);
      uVar25 = FUN_71ba13e0(uVar28,0x437f0000);
      uVar27 = FUN_71ba240c(uVar13,uVar25);
      uVar28 = FUN_71ba21e8(uVar27,uVar9);
      uVar28 = FUN_71ba0b38(uVar28,uVar25);
      uVar9 = FUN_71ba21e8(uVar28,0x437f0000);
      iVar26 = FUN_71ba2d70(uVar9,0);
      uVar28 = 0;
      if (iVar26 != 0) {
        uVar28 = uVar9;
      }
      iVar26 = FUN_71ba2d10(uVar28,0x437f0000);
      if (iVar26 == 0) {
        uVar28 = 0x437f0000;
      }
      uVar7 = FUN_71ba17bc(uVar28);
      uVar7 = iVar24 << 0x10 | iVar21 << 8 | uVar7 | 0xff000000;
      *(uint *)((int)&DAT_711ab4e4 + iVar4) = uVar7;
      *(undefined4 *)((int)&DAT_711ab484 + iVar4) = uVar6;
      *(undefined4 *)((int)&DAT_711ab488 + iVar4) = uVar34;
      *(undefined4 *)((int)&DAT_711ab4a8 + iVar4) = uVar11;
      *(undefined4 *)((int)&DAT_711ab4ac + iVar4) = uVar12;
      *(undefined4 *)((int)&DAT_711ab4cc + iVar4) = uVar6;
      *(undefined4 *)((int)&DAT_711ab4d0 + iVar4) = uVar34;
      *(undefined4 *)((int)&DAT_711ab4f0 + iVar4) = uVar11;
      *(undefined4 *)((int)&DAT_711ab4f4 + iVar4) = uVar12;
      uVar28 = FUN_71ba21e8(uVar20,uVar17);
      uVar28 = FUN_71ba0b38(uVar28,uVar19);
      uVar9 = FUN_71ba21e8(uVar28,0x437f0000);
      iVar21 = FUN_71ba2d70(uVar9,0);
      uVar28 = 0;
      if (iVar21 != 0) {
        uVar28 = uVar9;
      }
      iVar21 = FUN_71ba2d10(uVar28,0x437f0000);
      if (iVar21 == 0) {
        uVar28 = 0x437f0000;
      }
      iVar21 = FUN_71ba17bc(uVar28);
      uVar28 = FUN_71ba21e8(uVar23,uVar17);
      uVar28 = FUN_71ba0b38(uVar28,uVar22);
      uVar9 = FUN_71ba21e8(uVar28,0x437f0000);
      iVar24 = FUN_71ba2d70(uVar9,0);
      uVar28 = 0;
      if (iVar24 != 0) {
        uVar28 = uVar9;
      }
      iVar24 = FUN_71ba2d10(uVar28,0x437f0000);
      if (iVar24 == 0) {
        uVar28 = 0x437f0000;
      }
      iVar24 = FUN_71ba17bc(uVar28);
      uVar28 = FUN_71ba21e8(uVar27,uVar17);
      uVar28 = FUN_71ba0b38(uVar28,uVar25);
      uVar9 = FUN_71ba21e8(uVar28,0x437f0000);
      iVar26 = FUN_71ba2d70(uVar9,0);
      uVar28 = 0;
      if (iVar26 != 0) {
        uVar28 = uVar9;
      }
      iVar26 = FUN_71ba2d10(uVar28,0x437f0000);
      if (iVar26 == 0) {
        uVar28 = 0x437f0000;
      }
      uVar8 = FUN_71ba17bc(uVar28);
      uVar8 = iVar24 << 0x10 | iVar21 << 8 | uVar8 | 0xff000000;
      psVar33[5] = sVar32 + -4;
      psVar33[4] = sVar32 + -5;
      psVar33[1] = sVar32 + -5;
      *psVar33 = sVar32 + -7;
      *(uint *)((int)&DAT_711ab49c + iVar4) = uVar8;
      *(uint *)((int)&DAT_711ab4c0 + iVar4) = uVar8;
      *(uint *)((int)&DAT_711ab52c + iVar4) = uVar8;
      *(uint *)((int)&DAT_711ab550 + iVar4) = uVar8;
      *(uint *)((int)&DAT_711ab508 + iVar4) = uVar7;
      psVar33[3] = sVar32 + -6;
      psVar33[2] = sVar32 + -6;
      *(uint *)((int)&DAT_711ab574 + iVar4) = uVar7;
      *(undefined4 *)((int)&DAT_711ab514 + iVar4) = uVar5;
      *(undefined4 *)((int)&DAT_711ab538 + iVar4) = uVar31;
      *(undefined4 *)((int)&DAT_711ab55c + iVar4) = uVar5;
      *(undefined4 *)((int)&DAT_711ab518 + iVar4) = uVar30;
      *(undefined4 *)((int)&DAT_711ab53c + iVar4) = uVar10;
      iVar21 = iVar4 + 0x120;
      *(undefined4 *)((int)&DAT_711ab51c + iVar4) = uVar18;
      *(undefined4 *)((int)&DAT_711ab540 + iVar4) = uVar18;
      *(undefined4 *)((int)&DAT_711ab560 + iVar4) = uVar30;
      *(undefined4 *)((int)&DAT_711ab564 + iVar4) = uVar16;
      *(undefined4 *)((int)&DAT_711ab580 + iVar4) = uVar31;
      sVar1 = sVar32 + -2;
      *(undefined4 *)((int)&DAT_711ab584 + iVar4) = uVar10;
      *(undefined4 *)((int)&DAT_711ab588 + iVar4) = uVar16;
      *(uint *)((int)&DAT_711ab598 + iVar4) = uVar7;
      psVar33[7] = sVar32 + -1;
      iVar3 = iVar3 + 1;
      psVar33[10] = sVar32 + -1;
      sVar2 = sVar32 + -3;
      psVar33[0xb] = sVar32;
      sVar32 = sVar32 + 8;
      psVar33[8] = sVar1;
      psVar33[9] = sVar1;
      psVar33[6] = sVar2;
      psVar33 = psVar33 + 0xc;
      iVar4 = iVar21;
    } while (iVar21 != 0x480);
    iVar4 = FUN_71414c78(&DAT_711a9ce4,200,0,0x1a);
    if (iVar4 != 0) {
      FUN_71414834(3,&DAT_711ab904,300);
      FUN_714150c8();
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715deb44
// Entry: 0x715deb44 | Size: 1024 bytes
// =========================================================================

void FUN_715deb44(int param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar10 = *(undefined4 *)(param_1 + 0x134);
  uVar8 = *(undefined4 *)(param_1 + 0x130);
  iVar2 = FUN_71ba2d10(uVar10,0x3ca3d70a);
  if (iVar2 != 0) {
    uVar10 = 0x3ca3d70a;
  }
  iVar2 = FUN_71ba2d70(uVar10,0x3f7ae148);
  if (iVar2 != 0) {
    uVar10 = 0x3f7ae148;
  }
  uVar3 = FUN_71ba0b38(uVar10,0x3ca3d70a);
  iVar2 = FUN_71ba2d10(uVar8,uVar3);
  if (iVar2 != 0) {
    uVar8 = uVar3;
  }
  iVar2 = FUN_71ba2d70(uVar8,0x3f800000);
  if (iVar2 != 0) {
    uVar8 = 0x3f800000;
  }
  iVar2 = FUN_71ba2d30(uVar8,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_71ba2d10(uVar10,param_2);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    if (iVar2 == 0) {
      uVar8 = FUN_71ba13e0(param_2,uVar10);
      iVar2 = FUN_71ba2d10(uVar8,0);
      if (iVar2 != 0) {
        uVar8 = 0;
      }
      iVar2 = FUN_71ba2d70(uVar8,0x3f800000);
      uVar10 = *(undefined4 *)(param_1 + 0x13c);
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      if (iVar2 != 0) {
        uVar8 = 0x3f800000;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x24);
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      iVar2 = FUN_71ba2d70(uVar10,0x3d4ccccd);
      uVar5 = 0x3d4ccccd;
      if (iVar2 != 0) {
        uVar5 = uVar10;
      }
      uVar5 = imp_powf(uVar8,uVar5);
      uVar8 = FUN_71ba240c(uVar3,uVar11);
      uVar8 = FUN_71ba21e8(uVar8,uVar5);
      uVar8 = FUN_71ba0b38(uVar8,uVar11);
      uVar10 = FUN_71ba240c(uVar6,uVar9);
      uVar10 = FUN_71ba21e8(uVar10,uVar5);
      uVar10 = FUN_71ba0b38(uVar10,uVar9);
      uVar3 = FUN_71ba240c(uVar7,uVar4);
      uVar3 = FUN_71ba21e8(uVar3,uVar5);
    }
    else {
      uVar4 = FUN_71ba240c(param_2,uVar10);
      uVar8 = FUN_71ba240c(uVar8,uVar10);
      uVar8 = FUN_71ba13e0(uVar4,uVar8);
      iVar2 = FUN_71ba2d10(uVar8,0);
      if (iVar2 != 0) {
        uVar8 = 0;
      }
      iVar2 = FUN_71ba2d70(uVar8,0x3f800000);
      uVar10 = *(undefined4 *)(param_1 + 0x138);
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      if (iVar2 != 0) {
        uVar8 = 0x3f800000;
      }
      uVar11 = *(undefined4 *)(param_1 + 0xc);
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      iVar2 = FUN_71ba2d70(uVar10,0x3d4ccccd);
      uVar5 = 0x3d4ccccd;
      if (iVar2 != 0) {
        uVar5 = uVar10;
      }
      uVar5 = imp_powf(uVar8,uVar5);
      uVar8 = FUN_71ba240c(uVar11,uVar3);
      uVar8 = FUN_71ba21e8(uVar8,uVar5);
      uVar8 = FUN_71ba0b38(uVar8,uVar3);
      uVar10 = FUN_71ba240c(uVar9,uVar6);
      uVar10 = FUN_71ba21e8(uVar10,uVar5);
      uVar10 = FUN_71ba0b38(uVar10,uVar6);
      uVar3 = FUN_71ba240c(uVar4,uVar7);
      uVar3 = FUN_71ba21e8(uVar3,uVar5);
      uVar4 = uVar7;
    }
    uVar3 = FUN_71ba0b38(uVar3,uVar4);
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0xc);
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
  }
  uVar6 = FUN_71ba240c(0x3f800000,param_2);
  uVar6 = FUN_71ba21e8(uVar6,uVar6);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = FUN_71ba21e8(uVar6,*(undefined4 *)(param_1 + 0x148));
  uVar7 = FUN_71ba21e8(uVar7,uVar6);
  uVar8 = FUN_71ba0b38(uVar7,uVar8);
  uVar7 = FUN_71ba21e8(uVar8,0x437f0000);
  iVar2 = FUN_71ba2d70(uVar7,0);
  uVar8 = 0;
  if (iVar2 != 0) {
    uVar8 = uVar7;
  }
  iVar2 = FUN_71ba2d10(uVar8,0x437f0000);
  if (iVar2 == 0) {
    uVar8 = 0x437f0000;
  }
  uVar1 = FUN_71ba17bc(uVar8);
  *param_3 = uVar1;
  uVar8 = FUN_71ba21e8(uVar5,uVar6);
  uVar8 = FUN_71ba0b38(uVar8,uVar10);
  uVar10 = FUN_71ba21e8(uVar8,0x437f0000);
  iVar2 = FUN_71ba2d70(uVar10,0);
  uVar8 = 0;
  if (iVar2 != 0) {
    uVar8 = uVar10;
  }
  iVar2 = FUN_71ba2d10(uVar8,0x437f0000);
  if (iVar2 == 0) {
    uVar8 = 0x437f0000;
  }
  uVar1 = FUN_71ba17bc(uVar8);
  *param_4 = uVar1;
  uVar8 = FUN_71ba21e8(uVar4,uVar6);
  uVar8 = FUN_71ba0b38(uVar8,uVar3);
  uVar10 = FUN_71ba21e8(uVar8,0x437f0000);
  iVar2 = FUN_71ba2d70(uVar10,0);
  uVar8 = 0;
  if (iVar2 != 0) {
    uVar8 = uVar10;
  }
  iVar2 = FUN_71ba2d10(uVar8,0x437f0000);
  if (iVar2 == 0) {
    uVar8 = 0x437f0000;
  }
  uVar1 = FUN_71ba17bc(uVar8);
  *param_5 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_715df598
// Entry: 0x715df598 | Size: 1692 bytes
// =========================================================================

void FUN_715df598(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar9 = param_2[2];
  iVar1 = FUN_71ba2d10(uVar9,0xbdcccccd);
  if ((iVar1 == 0) && (*(int *)(DAT_70ffc978 + 4) != 0)) {
    piVar7 = *(int **)(DAT_70ffcebc + 8);
    iVar1 = DAT_70ffcebc;
    if (piVar7 != (int *)0x0) {
      iVar1 = *piVar7;
    }
    if (piVar7 != (int *)0x0 && iVar1 != 0) {
      uVar2 = *(undefined4 *)(*(int *)(DAT_70ffc978 + 4) + 0x84);
      uVar3 = FUN_71ba21e8(uVar2,0x3f733333);
      uVar4 = FUN_71ba21e8(uVar9,uVar3);
      uVar8 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
      uVar10 = *(undefined4 *)(DAT_70b46c18 + 0x930);
      uStack_28 = FUN_71ba0b38(uVar4,*(undefined4 *)(DAT_70b46c18 + 0x934));
      uVar11 = param_2[1];
      uVar4 = FUN_71ba21e8(uVar11,uVar3);
      uStack_2c = FUN_71ba0b38(uVar4,uVar10);
      uVar10 = *param_2;
      uVar3 = FUN_71ba21e8(uVar10,uVar3);
      uStack_30 = FUN_71ba0b38(uVar3,uVar8);
      uVar4 = *(undefined4 *)(param_1 + 0x178);
      iVar1 = FUN_71ba2d70(uVar4,0x3dcccccd);
      uVar3 = FUN_71ba13e0(uVar2,0x43fa0000);
      uVar2 = 0x3dcccccd;
      if (iVar1 != 0) {
        uVar2 = uVar4;
      }
      uVar2 = FUN_71ba21e8(uVar2,0x40a00000);
      uVar2 = FUN_71ba21e8(uVar3,uVar2);
      uVar3 = FUN_71ba21e8(uVar11,uVar11);
      uVar4 = FUN_71ba21e8(uVar10,uVar10);
      FUN_71ba0b38(uVar4,uVar3);
      uVar3 = imp_sqrtf();
      iVar1 = FUN_71ba2d10(uVar3,0x3a83126f);
      if (iVar1 == 0) {
        uStack_34 = 0;
        uVar4 = FUN_71ba13e0(uVar10,uVar3);
        uStack_38 = uVar4;
        uVar3 = FUN_71ba13e0(uVar11 ^ 0x80000000,uVar3);
        uStack_3c = uVar3;
        uVar8 = FUN_71ba21e8(uVar10,0x80000000);
        uVar5 = FUN_71ba21e8(uVar9,uVar3);
        uVar8 = FUN_71ba0b38(uVar5,uVar8);
        uStack_44 = uVar8;
        uVar9 = FUN_71ba21e8(uVar4,uVar9);
        uVar5 = FUN_71ba21e8(uVar11,0);
        uVar9 = FUN_71ba240c(uVar5,uVar9);
        uStack_48 = uVar9;
        uVar5 = FUN_71ba21e8(uVar8,uVar8);
        uVar6 = FUN_71ba21e8(uVar9,uVar9);
        uVar5 = FUN_71ba0b38(uVar6,uVar5);
        uVar3 = FUN_71ba21e8(uVar3,uVar11);
        uVar4 = FUN_71ba21e8(uVar10,uVar4);
        uVar3 = FUN_71ba240c(uVar4,uVar3);
        uVar4 = FUN_71ba21e8(uVar3,uVar3);
        FUN_71ba0b38(uVar4,uVar5);
        uVar4 = imp_sqrtf();
        iVar1 = FUN_71ba2d70(uVar4,0x38d1b717);
        uStack_40 = uVar3;
        if (iVar1 != 0) {
          uStack_44 = FUN_71ba13e0(uVar8,uVar4);
          uStack_40 = FUN_71ba13e0(uVar3,uVar4);
          uStack_48 = FUN_71ba13e0(uVar9,uVar4);
        }
      }
      else {
        uStack_48 = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_44 = 0x3f800000;
        uStack_40 = 0;
        uStack_3c = 0x3f800000;
      }
      uVar3 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x90),0x437f0000);
      iVar1 = FUN_71ba2d70(uVar3,0);
      uVar9 = 0;
      if (iVar1 != 0) {
        uVar9 = uVar3;
      }
      iVar1 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar1 == 0) {
        uVar9 = 0x437f0000;
      }
      uVar3 = FUN_71ba17bc(uVar9);
      uVar4 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x94),0x437f0000);
      iVar1 = FUN_71ba2d70(uVar4,0);
      uVar9 = 0;
      if (iVar1 != 0) {
        uVar9 = uVar4;
      }
      iVar1 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar1 == 0) {
        uVar9 = 0x437f0000;
      }
      uVar4 = FUN_71ba17bc(uVar9);
      uVar8 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x98),0x437f0000);
      iVar1 = FUN_71ba2d70(uVar8,0);
      uVar9 = 0;
      if (iVar1 != 0) {
        uVar9 = uVar8;
      }
      iVar1 = FUN_71ba2d10(uVar9,0x437f0000);
      if (iVar1 == 0) {
        uVar9 = 0x437f0000;
      }
      uVar9 = FUN_71ba17bc(uVar9);
      FUN_715e073c(&uStack_30,&uStack_3c,&uStack_48,uVar2,uVar3,uVar4,uVar9);
      FUN_71413b60(8,0);
      FUN_71413b60(6,1);
      FUN_71413b60(0xc,1);
      FUN_71413b60(0xe,0);
      FUN_71413b60(10,5);
      FUN_71413b60(0xb,2);
      FUN_71413b60(1,*piVar7);
      FUN_71413b60(9,2);
      FUN_71413b60(0x14,1);
      iVar1 = FUN_71414c78(&DAT_711abb5c,4,0,0x19);
      if (iVar1 != 0) {
        FUN_71414834(3,&DAT_700c5d90,6);
        FUN_714150c8();
      }
      uVar9 = *(undefined4 *)(param_1 + 0x17c);
      iVar1 = FUN_71ba2d70(uVar9,0x3a83126f);
      if (iVar1 != 0) {
        uVar3 = FUN_71ba21e8(uVar9,*(undefined4 *)(param_1 + 0x90));
        uVar4 = FUN_71ba21e8(uVar3,0x437f0000);
        iVar1 = FUN_71ba2d70(uVar4,0);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = uVar4;
        }
        iVar1 = FUN_71ba2d10(uVar3,0x437f0000);
        if (iVar1 == 0) {
          uVar3 = 0x437f0000;
        }
        uVar4 = FUN_71ba17bc(uVar3);
        uVar3 = FUN_71ba21e8(uVar9,*(undefined4 *)(param_1 + 0x94));
        uVar8 = FUN_71ba21e8(uVar3,0x437f0000);
        iVar1 = FUN_71ba2d70(uVar8,0);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = uVar8;
        }
        iVar1 = FUN_71ba2d10(uVar3,0x437f0000);
        if (iVar1 == 0) {
          uVar3 = 0x437f0000;
        }
        uVar3 = FUN_71ba17bc(uVar3);
        uVar9 = FUN_71ba21e8(uVar9,*(undefined4 *)(param_1 + 0x98));
        uVar8 = FUN_71ba21e8(uVar9,0x437f0000);
        iVar1 = FUN_71ba2d70(uVar8,0);
        uVar9 = 0;
        if (iVar1 != 0) {
          uVar9 = uVar8;
        }
        iVar1 = FUN_71ba2d10(uVar9,0x437f0000);
        if (iVar1 == 0) {
          uVar9 = 0x437f0000;
        }
        uVar9 = FUN_71ba17bc(uVar9);
        FUN_715e073c(&uStack_30,&uStack_3c,&uStack_48,uVar2,uVar4,uVar3,uVar9);
        FUN_71413b60(8,0);
        FUN_71413b60(6,1);
        FUN_71413b60(0xc,1);
        FUN_71413b60(0xe,0);
        FUN_71413b60(10,5);
        FUN_71413b60(0xb,2);
        FUN_71413b60(1,*piVar7);
        FUN_71413b60(9,2);
        FUN_71413b60(0x14,1);
        iVar1 = FUN_71414c78(&DAT_711abb5c,4,0,0x19);
        if (iVar1 != 0) {
          FUN_71414834(3,&DAT_700c5d90,6);
          FUN_714150c8();
          return;
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715e073c
// Entry: 0x715e073c | Size: 628 bytes
// =========================================================================

void FUN_715e073c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar7 = param_2[1];
  uVar5 = param_2[2];
  uVar1 = FUN_71ba21e8(*param_2,param_4);
  uVar6 = param_3[2];
  uVar8 = param_3[1];
  uVar2 = FUN_71ba21e8(*param_3,param_4);
  uVar3 = FUN_71ba240c(*param_1,uVar1);
  DAT_711abb5c = FUN_71ba240c(uVar3,uVar2);
  uVar3 = FUN_71ba21e8(uVar7,param_4);
  uVar7 = FUN_71ba21e8(uVar8,param_4);
  uVar8 = FUN_71ba240c(param_1[1],uVar3);
  DAT_711abb60 = FUN_71ba240c(uVar8,uVar7);
  uVar9 = param_1[2];
  DAT_711abb7c = 0x3f800000;
  DAT_711abb78 = 0;
  uVar4 = param_7 << 0x10 | param_6 << 8 | param_5 | 0xff000000;
  DAT_711abb74 = uVar4;
  uVar8 = FUN_71ba21e8(uVar5,param_4);
  uVar5 = FUN_71ba21e8(uVar6,param_4);
  uVar6 = FUN_71ba240c(uVar9,uVar8);
  DAT_711abb64 = FUN_71ba240c(uVar6,uVar5);
  uVar6 = FUN_71ba0b38(uVar1,*param_1);
  DAT_711abb80 = FUN_71ba240c(uVar6,uVar2);
  uVar6 = FUN_71ba0b38(uVar3,param_1[1]);
  DAT_711abb84 = FUN_71ba240c(uVar6,uVar7);
  DAT_711abb9c = 0x3f800000;
  DAT_711abba0 = 0x3f800000;
  DAT_711abb98 = uVar4;
  uVar6 = FUN_71ba0b38(uVar8,param_1[2]);
  DAT_711abb88 = FUN_71ba240c(uVar6,uVar5);
  uVar6 = FUN_71ba240c(*param_1,uVar1);
  DAT_711abba4 = FUN_71ba0b38(uVar2,uVar6);
  uVar6 = FUN_71ba240c(param_1[1],uVar3);
  DAT_711abba8 = FUN_71ba0b38(uVar7,uVar6);
  DAT_711abbc0 = 0;
  DAT_711abbc4 = 0;
  DAT_711abbbc = uVar4;
  uVar6 = FUN_71ba240c(param_1[2],uVar8);
  DAT_711abbac = FUN_71ba0b38(uVar5,uVar6);
  uVar1 = FUN_71ba0b38(uVar1,*param_1);
  DAT_711abbc8 = FUN_71ba0b38(uVar2,uVar1);
  uVar1 = FUN_71ba0b38(uVar3,param_1[1]);
  DAT_711abbcc = FUN_71ba0b38(uVar7,uVar1);
  DAT_711abbe4 = 0x3f800000;
  DAT_711abbe8 = 0;
  DAT_711abbe0 = uVar4;
  uVar1 = FUN_71ba0b38(uVar8,param_1[2]);
  DAT_711abbd0 = FUN_71ba0b38(uVar5,uVar1);
  return;
}


// =========================================================================
// Function: FUN_715e0d30
// Entry: 0x715e0d30 | Size: 344 bytes
// =========================================================================

void FUN_715e0d30(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((int)param_2 < 0xb) {
    param_2 = 10;
  }
  if (199 < param_2) {
    param_2 = 200;
  }
  uVar2 = DAT_711abbec;
  if (DAT_711abbec == param_1) {
    uVar2 = DAT_711abbf0;
  }
  if (DAT_711abbec != param_1 || param_2 != uVar2) {
    puVar4 = &DAT_711abbf4;
    DAT_711abbec = param_1;
    DAT_711abbf0 = param_2;
    do {
      uVar2 = param_1 * 0x4e6d + 0x3039;
      uVar1 = FUN_71ba1e0c(uVar2 & 0xffff);
      uVar1 = FUN_71ba13e0(uVar1,0x477fff00);
      uVar1 = FUN_71ba21e8(uVar1,0x40c90fd0);
      uVar2 = uVar2 * 0x4e6d + 0x3039;
      *puVar4 = uVar1;
      uVar1 = FUN_71ba1e0c(uVar2 & 0xffff);
      uVar1 = FUN_71ba13e0(uVar1,0x477fff00);
      uVar1 = FUN_71ba21e8(uVar1,0x3fb33333);
      uVar1 = FUN_71ba0b38(uVar1,0x3da3d70a);
      puVar4[1] = uVar1;
      uVar3 = uVar2 * 0x4e6d + 0x3039;
      uVar2 = uVar3 * 0x4e6d + 0x3039;
      uVar1 = FUN_71ba1e0c(uVar2 & 0xffff);
      uVar1 = FUN_71ba13e0(uVar1,0x477fff00);
      uVar1 = FUN_71ba21e8(uVar1,0x40c90fd0);
      puVar4[3] = uVar1;
      uVar1 = FUN_71ba1e0c(uVar3 & 0xffff);
      uVar1 = FUN_71ba13e0(uVar1,0x477fff00);
      uVar1 = FUN_71ba21e8(uVar1,0x3f333333);
      uVar1 = FUN_71ba0b38(uVar1,0x3e99999a);
      puVar4[2] = uVar1;
      param_1 = uVar2 * 0x4e6d + 0x3039;
      uVar1 = FUN_71ba1e0c(param_1 & 0xffff);
      uVar1 = FUN_71ba13e0(uVar1,0x477fff00);
      uVar1 = FUN_71ba0b38(uVar1,0x3f000000);
      puVar4[4] = uVar1;
      puVar4 = puVar4 + 5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


// =========================================================================
// Function: FUN_715e111c
// Entry: 0x715e111c | Size: 1236 bytes
// =========================================================================

void FUN_715e111c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_71ba2d30(*(undefined4 *)(param_1 + 0x14c),0);
  if (iVar1 == 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_71174c5c & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c5c), iVar1 != 0))
    {
      FUN_7158234c(&DAT_71174c40);
      thunk_raw_10ab3090(FUN_7150317c,&DAT_71174c40,&DAT_70b0e000);
      thunk_SixizuLbAnqfgRApsCY(&DAT_71174c5c);
    }
    FUN_715e0d30(DAT_71174c40,*(undefined4 *)(param_1 + 0x1d4));
    if ((0 < DAT_711abbf0) && (*(int *)(DAT_70ffc978 + 4) != 0)) {
      uVar12 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
      uVar13 = *(undefined4 *)(DAT_70b46c18 + 0x930);
      uVar2 = *(undefined4 *)(DAT_70b46c18 + 0x934);
      thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
      thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
      uVar3 = FUN_71ba1b94(DAT_71201738);
      uVar3 = FUN_7156feb8(param_1,uVar3);
      uVar4 = *(undefined4 *)(param_1 + 0x14c);
      uVar5 = *(undefined4 *)(param_1 + 0x150);
      uVar6 = *(undefined4 *)(param_1 + 0x154);
      uVar16 = *DAT_70b4204c;
      FUN_71413b60(6,0);
      FUN_71413b60(8,0);
      FUN_71413b60(0xc,1);
      FUN_71413b60(10,2);
      FUN_71413b60(0xb,2);
      uVar3 = FUN_71ba21e8(uVar3,0x3f75c28f);
      uVar16 = FUN_71ba1b94(uVar16);
      uVar20 = FUN_71ba21e8(uVar16,0x3a83126f);
      iVar1 = (int)((ulonglong)uVar20 >> 0x20);
      piVar7 = (int *)*DAT_70ffcebc;
      if (piVar7 != (int *)0x0) {
        iVar1 = *piVar7;
      }
      if (piVar7 == (int *)0x0 || iVar1 == 0) {
        iVar1 = 0;
      }
      FUN_71413b60(1,iVar1);
      if (0 < DAT_711abbf0) {
        iVar19 = 0;
        puVar17 = &DAT_711abbf4;
        iVar1 = DAT_711abbf0;
        do {
          uVar16 = FUN_71ba21e8((int)uVar20,uVar6);
          uVar14 = puVar17[2];
          FUN_71ba0b38(uVar16,puVar17[3]);
          uVar16 = imp_sinf();
          uVar16 = FUN_71ba21e8(uVar16,0x3ecccccd);
          uVar16 = FUN_71ba0b38(uVar16,0x3f19999a);
          uVar14 = FUN_71ba21e8(uVar4,uVar14);
          uVar16 = FUN_71ba21e8(uVar14,uVar16);
          iVar8 = FUN_71ba2d10(uVar16,0x3ca3d70a);
          if (iVar8 == 0) {
            uVar15 = puVar17[1];
            uVar14 = imp_sinf(uVar15);
            uVar14 = FUN_71ba21e8(uVar14,uVar3);
            uStack_28 = FUN_71ba0b38(uVar14,uVar2);
            uVar14 = imp_cosf(uVar15);
            uVar18 = *puVar17;
            uVar15 = imp_sinf(uVar18);
            uVar15 = FUN_71ba21e8(uVar14,uVar15);
            uVar15 = FUN_71ba21e8(uVar15,uVar3);
            uStack_2c = FUN_71ba0b38(uVar15,uVar13);
            uVar15 = imp_cosf(uVar18);
            uVar14 = FUN_71ba21e8(uVar14,uVar15);
            uVar14 = FUN_71ba21e8(uVar14,uVar3);
            uStack_30 = FUN_71ba0b38(uVar14,uVar12);
            iVar8 = FUN_7135950c(&uStack_30,&uStack_3c,auStack_40,auStack_44,0,1);
            iVar1 = DAT_711abbf0;
            if (iVar8 != 0) {
              uVar16 = FUN_71ba21e8(uVar16,0x437f0000);
              iVar1 = FUN_71ba2d10(uVar16,0x437f0000);
              if (iVar1 == 0) {
                uVar16 = 0x437f0000;
              }
              uVar16 = FUN_71ba17bc(uVar16);
              uVar15 = puVar17[2];
              uVar14 = FUN_71ba21e8(uVar15,0x41700000);
              uVar14 = FUN_71ba0b38(uVar14,0x43700000);
              iVar1 = FUN_71ba2d10(uVar14,0x437f0000);
              if (iVar1 == 0) {
                uVar14 = 0x437f0000;
              }
              uVar14 = FUN_71ba17bc(uVar14);
              uVar18 = FUN_71ba21e8(uVar15,0x41200000);
              uVar18 = FUN_71ba0b38(uVar18,0x436b0000);
              iVar1 = FUN_71ba2d10(uVar18,0x437f0000);
              if (iVar1 == 0) {
                uVar18 = 0x437f0000;
              }
              uVar18 = FUN_71ba17bc(uVar18);
              uVar15 = FUN_71ba21e8(uVar15,0x41a00000);
              uVar15 = FUN_71ba0b38(uVar15,0x435c0000);
              iVar1 = FUN_71ba2d10(uVar15,0x437f0000);
              if (iVar1 == 0) {
                uVar15 = 0x437f0000;
              }
              uVar9 = FUN_71ba17bc(uVar15);
              uVar15 = uStack_34;
              uVar10 = FUN_71ba13e0(0x3f800000,uStack_34);
              uVar11 = FUN_71ba21e8(uVar5,puVar17[4]);
              FUN_71359044(uStack_3c,uStack_38,uVar15,uVar11,uVar11,uVar14,uVar18,uVar9,uVar16,
                           uVar10,0xff,0,0,0,0);
              iVar1 = DAT_711abbf0;
            }
          }
          iVar19 = iVar19 + 1;
          puVar17 = puVar17 + 5;
        } while (iVar19 < iVar1);
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715e1e60
// Entry: 0x715e1e60 | Size: 1224 bytes
// =========================================================================

void FUN_715e1e60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar13 = param_2 + 2;
  iVar2 = FUN_71ba2d10(*puVar13,0xbdcccccd);
  if ((iVar2 == 0) && (*(int *)(DAT_70ffc978 + 4) != 0)) {
    uVar7 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
    uVar8 = *(undefined4 *)(DAT_70b46c18 + 0x930);
    uVar10 = *(undefined4 *)(DAT_70b46c18 + 0x934);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(&DAT_71201764);
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(&DAT_71201764);
    uVar3 = FUN_71ba1b94(DAT_71201738);
    uVar3 = FUN_7156feb8(param_1,uVar3);
    uVar4 = FUN_71ba21e8(uVar3,0x3f733333);
    uVar3 = FUN_71ba21e8(*puVar13,uVar4);
    uStack_28 = FUN_71ba0b38(uVar3,uVar10);
    uVar3 = FUN_71ba21e8(param_2[1],uVar4);
    uStack_2c = FUN_71ba0b38(uVar3,uVar8);
    uVar3 = FUN_71ba21e8(*param_2,uVar4);
    uStack_30 = FUN_71ba0b38(uVar3,uVar7);
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    uVar10 = *(undefined4 *)(param_1 + 0x3c);
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    uVar8 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x38),0x437f0000);
    iVar2 = FUN_71ba2d70(uVar8,0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = uVar8;
    }
    iVar2 = FUN_71ba2d10(uVar3,0x437f0000);
    if (iVar2 == 0) {
      uVar3 = 0x437f0000;
    }
    uVar8 = FUN_71ba17bc(uVar3);
    uVar11 = FUN_71ba21e8(uVar11,0x437f0000);
    iVar2 = FUN_71ba2d70(uVar11,0);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = uVar11;
    }
    iVar2 = FUN_71ba2d10(uVar3,0x437f0000);
    if (iVar2 == 0) {
      uVar3 = 0x437f0000;
    }
    uVar11 = FUN_71ba21e8(uVar7,0x437f0000);
    iVar2 = FUN_71ba2d70(uVar11,0);
    uVar7 = 0;
    if (iVar2 != 0) {
      uVar7 = uVar11;
    }
    iVar2 = FUN_71ba2d10(uVar7,0x437f0000);
    uVar11 = *(undefined4 *)(param_1 + 0x140);
    iVar5 = FUN_71ba2d70(uVar11,0x3dcccccd);
    uVar4 = FUN_71ba13e0(uVar4,0x43ed8000);
    if (iVar5 == 0) {
      uVar11 = 0x3dcccccd;
    }
    uVar11 = FUN_71ba21e8(uVar11,0x40a00000);
    uVar11 = FUN_71ba21e8(uVar4,uVar11);
    uVar3 = FUN_71ba17bc(uVar3);
    if (iVar2 == 0) {
      uVar7 = 0x437f0000;
    }
    uVar7 = FUN_71ba17bc(uVar7);
    puVar1 = DAT_70ffcebc;
    uVar9 = *(undefined4 *)(param_1 + 0x40);
    uVar12 = *(undefined4 *)(param_1 + 0x44);
    uVar6 = *(undefined4 *)(param_1 + 0x144);
    FUN_7144084c(1,0,uVar3,uVar7,uVar8,0xff,&uStack_30,uVar11,0x497423fe,*DAT_70ffcebc,0,0,0,0,0,0,
                 0x3fc00000,0,0x41700000,0,0);
    iVar2 = FUN_71ba2d70(*puVar13,0);
    if (iVar2 != 0) {
      uVar7 = FUN_71ba21e8(uVar12,0x437f0000);
      iVar2 = FUN_71ba2d70(uVar7,0);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = uVar7;
      }
      iVar2 = FUN_71ba2d10(uVar3,0x437f0000);
      if (iVar2 == 0) {
        uVar3 = 0x437f0000;
      }
      uVar7 = FUN_71ba17bc(uVar3);
      uVar8 = FUN_71ba21e8(uVar9,0x437f0000);
      iVar2 = FUN_71ba2d70(uVar8,0);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = uVar8;
      }
      iVar2 = FUN_71ba2d10(uVar3,0x437f0000);
      if (iVar2 == 0) {
        uVar3 = 0x437f0000;
      }
      uVar10 = FUN_71ba21e8(uVar10,0x437f0000);
      iVar2 = FUN_71ba2d70(uVar10,0);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = uVar10;
      }
      iVar2 = FUN_71ba2d10(uVar8,0x437f0000);
      iVar5 = FUN_71ba2d70(uVar6,0x3dcccccd);
      uVar10 = 0x3dcccccd;
      if (iVar5 != 0) {
        uVar10 = uVar6;
      }
      uVar10 = FUN_71ba21e8(uVar10,0x40400000);
      uVar4 = FUN_71ba21e8(uVar4,uVar10);
      uVar3 = FUN_71ba17bc(uVar3);
      if (iVar2 == 0) {
        uVar8 = 0x437f0000;
      }
      uVar8 = FUN_71ba17bc(uVar8);
      FUN_7144084c(2,0,uVar8,uVar3,uVar7,0xff,&uStack_30,uVar4,0x497423fe,*puVar1,1,0,1,0,0,0,
                   0x3fc00000,0,0x41700000,0,0);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715e28c8
// Entry: 0x715e28c8 | Size: 1076 bytes
// =========================================================================

void FUN_715e28c8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *extraout_r2;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  
  puVar4 = (undefined4 *)FUN_7141ee6c(*(undefined4 *)(param_2 + 4));
  bVar1 = false;
  uStack_28 = 0;
  puStack_2c = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  iVar5 = FUN_715e347c(param_2,puVar4,&puStack_30);
  puVar3 = puStack_30;
  puVar2 = extraout_r2;
  if (iVar5 != 0) {
    puVar2 = puStack_2c;
  }
  if (iVar5 != 0 && puStack_30 != puVar2) {
    uVar6 = puStack_30[1];
    uVar7 = puStack_30[2];
    uVar13 = *puStack_30;
    puVar16 = puStack_30;
    uStack_3c = uVar13;
    uStack_38 = uVar6;
    uStack_34 = uVar7;
    do {
      uVar15 = *puVar16;
      uVar14 = puVar16[1];
      uVar17 = puVar16[2];
      iVar5 = FUN_71ba2d10(uVar15,uVar13);
      iVar8 = FUN_71ba2d10(uVar14,uVar6);
      iVar9 = FUN_71ba2d10(uVar17,uVar7);
      iVar10 = FUN_71ba2d10(uStack_3c,uVar15);
      iVar11 = FUN_71ba2d10(uStack_38,uVar14);
      iVar12 = FUN_71ba2d10(uStack_34,uVar17);
      if (iVar12 != 0) {
        uStack_34 = uVar17;
      }
      if (iVar11 != 0) {
        uStack_38 = uVar14;
      }
      puVar16 = puVar16 + 3;
      if (iVar10 != 0) {
        uStack_3c = uVar15;
      }
      if (iVar9 != 0) {
        uVar7 = uVar17;
      }
      if (iVar8 != 0) {
        uVar6 = uVar14;
      }
      if (iVar5 != 0) {
        uVar13 = uVar15;
      }
    } while (puVar16 != puVar2);
    uVar14 = FUN_71ba0b38(uStack_34,uVar7);
    uVar14 = FUN_71ba21e8(uVar14,0x3f000000);
    param_1[2] = uVar14;
    uVar14 = FUN_71ba0b38(uStack_38,uVar6);
    uVar14 = FUN_71ba21e8(uVar14,0x3f000000);
    param_1[1] = uVar14;
    uVar14 = FUN_71ba0b38(uStack_3c,uVar13);
    uVar14 = FUN_71ba21e8(uVar14,0x3f000000);
    *param_1 = uVar14;
    uVar13 = FUN_71ba240c(uStack_3c,uVar13);
    uVar6 = FUN_71ba240c(uStack_38,uVar6);
    uVar7 = FUN_71ba240c(uStack_34,uVar7);
    uVar6 = FUN_71ba21e8(uVar6,uVar6);
    uVar13 = FUN_71ba21e8(uVar13,uVar13);
    uVar6 = FUN_71ba0b38(uVar13,uVar6);
    uVar7 = FUN_71ba21e8(uVar7,uVar7);
    FUN_71ba0b38(uVar7,uVar6);
    uVar6 = imp_sqrtf();
    uVar6 = FUN_71ba21e8(uVar6,0x3f000000);
    bVar1 = true;
    param_1[3] = uVar6;
  }
  if (puVar3 != (undefined4 *)0x0) {
    puStack_2c = puVar3;
    thunk_qNQrlu(puVar3);
  }
  if (!bVar1) {
    FUN_714154f8(param_1,param_2 + 0x1c,1,puVar4);
    uVar13 = puVar4[2];
    uVar15 = puVar4[4];
    uVar14 = puVar4[5];
    uVar6 = FUN_71ba21e8(puVar4[1],puVar4[1]);
    uVar7 = FUN_71ba21e8(*puVar4,*puVar4);
    uVar6 = FUN_71ba0b38(uVar7,uVar6);
    uVar7 = FUN_71ba21e8(uVar13,uVar13);
    FUN_71ba0b38(uVar7,uVar6);
    uVar6 = imp_sqrtf();
    uVar7 = FUN_71ba21e8(uVar14,uVar14);
    uVar13 = FUN_71ba21e8(uVar15,uVar15);
    uVar7 = FUN_71ba0b38(uVar13,uVar7);
    uVar13 = FUN_71ba21e8(puVar4[6],puVar4[6]);
    FUN_71ba0b38(uVar13,uVar7);
    uVar7 = imp_sqrtf();
    iVar5 = FUN_71ba2d10(uVar6,uVar7);
    uVar13 = FUN_71ba21e8(puVar4[9],puVar4[9]);
    uVar14 = FUN_71ba21e8(puVar4[8],puVar4[8]);
    uVar13 = FUN_71ba0b38(uVar14,uVar13);
    uVar14 = FUN_71ba21e8(puVar4[10],puVar4[10]);
    FUN_71ba0b38(uVar14,uVar13);
    uVar13 = imp_sqrtf();
    if (iVar5 != 0) {
      uVar6 = uVar7;
    }
    iVar5 = FUN_71ba2d10(uVar6,uVar13);
    if (iVar5 != 0) {
      uVar6 = uVar13;
    }
    uVar6 = FUN_71ba21e8(*(undefined4 *)(param_2 + 0x28),uVar6);
    param_1[3] = uVar6;
  }
  if ((*(int *)(param_2 + 0x18) != 0) && (iVar5 = FUN_71417f58(), iVar5 != 0)) {
    uVar6 = FUN_71ba0b38(param_1[2],param_3);
    param_1[2] = uVar6;
  }
  uVar7 = param_1[3];
  iVar5 = FUN_71ba2d70(uVar7,0x3c23d70a);
  uVar6 = 0x3c23d70a;
  if (iVar5 != 0) {
    uVar6 = uVar7;
  }
  param_1[3] = uVar6;
  return;
}


// =========================================================================
// Function: FUN_715e328c
// Entry: 0x715e328c | Size: 332 bytes
// =========================================================================

void FUN_715e328c(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 != 0) {
    iVar2 = *(int *)(iVar5 + 0x14);
    if (0 < iVar2) {
      iVar2 = *(int *)(iVar5 + 0x18);
    }
    if (0 < iVar2) {
      iVar3 = *(int *)(iVar5 + 0x60);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0x14);
      }
      if (iVar3 != 0 && iVar2 != 0) {
        uVar1 = FUN_7141ee6c(*(undefined4 *)(param_1 + 4));
        iVar3 = *param_3;
        iVar7 = param_3[1];
        iVar2 = FUN_715e347c(param_1,uVar1,param_3);
        uVar8 = iVar7 - iVar3;
        uVar6 = ((int)uVar8 >> 2) * -0x55555555;
        if (iVar2 == 0) {
          uVar6 = *(int *)(iVar5 + 0x14) + uVar6;
          iVar3 = *param_3;
          iVar2 = param_3[1] - iVar3 >> 2;
          uVar4 = iVar2 * -0x55555555;
          if (uVar4 < uVar6) {
            FUN_715ea3b8(param_3,uVar6 + iVar2 * 0x55555555);
            iVar3 = *param_3;
          }
          else if (uVar6 < uVar4) {
            param_3[1] = iVar3 + uVar6 * 0xc;
          }
          FUN_714154f8(iVar3 + uVar8,*(undefined4 *)(*(int *)(iVar5 + 0x60) + 0x14),
                       *(undefined4 *)(iVar5 + 0x14),uVar1);
          return;
        }
        iVar5 = *param_3;
        if (uVar8 < (uint)(param_3[1] - iVar5)) {
          iVar2 = ((int)uVar8 >> 2) * 4 + 8;
          do {
            uVar1 = FUN_71ba0b38(*(undefined4 *)(iVar5 + iVar2),param_2);
            *(undefined4 *)(iVar5 + iVar2) = uVar1;
            iVar2 = iVar2 + 0xc;
            uVar6 = uVar6 + 1;
            iVar5 = *param_3;
          } while (uVar6 < (uint)((param_3[1] - iVar5 >> 2) * -0x55555555));
        }
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715e347c
// Entry: 0x715e347c | Size: 1128 bytes
// =========================================================================

undefined4 FUN_715e347c(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint auStack_34 [4];
  
  iVar15 = *(int *)(param_1 + 0x18);
  uVar1 = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + 0x14);
    if (0 < iVar12) {
      iVar12 = *(int *)(iVar15 + 0x18);
    }
    if (0 < iVar12) {
      iVar13 = *(int *)(iVar15 + 0x60);
      iVar12 = 0;
      if (iVar13 != 0) {
        iVar12 = *(int *)(iVar13 + 0x14);
      }
      if (iVar13 != 0 && iVar12 != 0) {
        puVar2 = (uint *)FUN_71417f58(iVar15);
        if ((puVar2 == (uint *)0x0) ||
           (pbVar3 = (byte *)FUN_71418b98(param_1), pbVar3 == (byte *)0x0)) {
          return 0;
        }
        uVar1 = 0;
        if (0 < *(int *)(pbVar3 + 4)) {
          uVar9 = 0;
          if (*(int *)(pbVar3 + 8) != 0) {
            uVar9 = puVar2[3];
          }
          if ((*(int *)(pbVar3 + 8) != 0 && uVar9 != 0) && ((*pbVar3 & 2) == 0)) {
            iVar12 = FUN_71418368(puVar2);
            iVar13 = FUN_71418780(puVar2);
            if (iVar12 == 0) {
              return 0;
            }
            uVar1 = 0;
            if (iVar13 != 0) {
              if (*(int *)(iVar15 + 0x14) < 1) {
                return 1;
              }
              puVar14 = (uint *)((uint)&uStack_40 | 4);
              iVar4 = *param_3;
              iVar10 = param_3[1];
              uVar9 = (iVar10 - iVar4 >> 2) * -0x55555555;
              iVar11 = 0;
              puVar5 = puVar14 + 1;
              do {
                puVar19 = auStack_34;
                puVar6 = (uint *)(iVar12 + iVar11 * 0x10);
                auStack_34[0] = *puVar6;
                auStack_34[1] = puVar6[1];
                uVar17 = 0;
                auStack_34[2] = puVar6[2];
                uVar16 = 0;
                auStack_34[3] = puVar6[3];
                uStack_38 = 0;
                uStack_3c = 0;
                uStack_40 = 0;
                uStack_68 = 0;
                do {
                  uVar20 = *puVar19;
                  iVar7 = FUN_71ba2cf0(uVar20,0);
                  if (iVar7 == 0) {
                    if (0x7ffffe < uVar20 - 1 &&
                        (0x7e < (uVar20 & 0x7fffffff) - 0x800000 >> 0x18 || (int)uVar20 < 0)) {
LAB_715e387c:
                      iVar15 = param_3[1] - *param_3 >> 2;
                      uVar17 = iVar15 * -0x55555555;
                      if (uVar17 < uVar9) {
                        FUN_715ea3b8(param_3,uVar9 + iVar15 * 0x55555555);
                        return 0;
                      }
                      if (uVar17 <= uVar9) {
                        return 0;
                      }
                      param_3[1] = *param_3 + (iVar10 - iVar4);
                      return 0;
                    }
                    uVar18 = *(uint *)(iVar13 + iVar11 * 4) >> (uVar16 & 0xff) & 0xff;
                    uVar17 = *puVar2;
                    bVar21 = uVar18 < uVar17;
                    if (bVar21) {
                      uVar17 = *(uint *)(pbVar3 + 4);
                    }
                    if (!bVar21 || uVar17 <= uVar18) goto LAB_715e387c;
                    FUN_714154f8(&uStack_50,*(int *)(*(int *)(iVar15 + 0x60) + 0x14) + iVar11 * 0xc,
                                 1,puVar2[3] + uVar18 * 0x40);
                    FUN_714154f8(&uStack_5c,&uStack_50,1,*(int *)(pbVar3 + 8) + uVar18 * 0x40);
                    uVar1 = FUN_71ba21e8(uStack_58,uVar20);
                    uVar17 = FUN_71ba0b38(uVar1,*puVar14);
                    *puVar14 = uVar17;
                    uVar1 = FUN_71ba21e8(uStack_54,uVar20);
                    uVar17 = FUN_71ba0b38(uVar1,*puVar5);
                    *puVar5 = uVar17;
                    uVar1 = FUN_71ba21e8(uStack_5c,uVar20);
                    uVar17 = FUN_71ba0b38(uVar1,uStack_40);
                    uStack_40 = uVar17;
                    uStack_68 = FUN_71ba0b38(uStack_68,uVar20);
                  }
                  uVar16 = uVar16 + 8;
                  puVar19 = puVar19 + 1;
                } while (uVar16 != 0x20);
                iVar7 = FUN_71ba2d30(uStack_68,0);
                if (iVar7 != 0) {
LAB_715e38d4:
                  FUN_715e9e88(param_3,uVar9);
                  return 0;
                }
                if ((pbVar3[1] & 0x40) != 0) {
                  FUN_714154f8(&uStack_50,&uStack_40,1,param_2);
                  uStack_40 = uStack_50;
                  uStack_3c = uStack_4c;
                  uStack_38 = uStack_48;
                  uVar17 = uStack_50;
                }
                iVar7 = FUN_71ba2cf0(uVar17 & 0x7fffffff,0x7f800000);
                iVar8 = FUN_71ba0408(uVar17 & 0x7fffffff,0x7f800000);
                if (iVar8 != 0 || iVar7 != 0) goto LAB_715e38d4;
                uVar17 = *puVar14;
                iVar7 = FUN_71ba2cf0(uVar17 & 0x7fffffff,0x7f800000);
                iVar8 = FUN_71ba0408(uVar17 & 0x7fffffff,0x7f800000);
                if (iVar8 != 0 || iVar7 != 0) goto LAB_715e38d4;
                uVar17 = *puVar5;
                iVar7 = FUN_71ba2cf0(uVar17 & 0x7fffffff,0x7f800000);
                iVar8 = FUN_71ba0408(uVar17 & 0x7fffffff,0x7f800000);
                if (iVar8 != 0 || iVar7 != 0) goto LAB_715e38d4;
                FUN_715e9f04(param_3,&uStack_40);
                uVar1 = 1;
                iVar11 = iVar11 + 1;
              } while (iVar11 < *(int *)(iVar15 + 0x14));
            }
          }
        }
      }
    }
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715e3bb8
// Entry: 0x715e3bb8 | Size: 240 bytes
// =========================================================================

undefined4
FUN_715e3bb8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *param_2;
  uVar3 = param_2[1];
  iVar1 = FUN_71ba2d10(uVar3,uVar4);
  if (iVar1 != 0) {
    uVar4 = uVar3;
  }
  iVar1 = FUN_71ba2d70(uVar4,0x3c23d70a);
  if (iVar1 == 0) {
    uVar4 = 0x3c23d70a;
  }
  iVar1 = FUN_71ba2d70(param_4,0x3f800000);
  uVar4 = FUN_71ba21e8(uVar4,uVar4);
  uVar4 = FUN_71ba13e0(0x3f800000,uVar4);
  FUN_71ba0b38(uVar4,0x3f800000);
  uVar4 = imp_sqrtf();
  uVar4 = FUN_71ba21e8(uVar4,param_1);
  uVar2 = FUN_71ba21e8(uVar4,0x3f8ccccd);
  uVar4 = FUN_71ba0b38(param_1,param_3);
  uVar3 = FUN_71ba0b38(uVar4,0x3c23d70a);
  uVar4 = 0x3f800000;
  if (iVar1 != 0) {
    uVar4 = param_4;
  }
  uVar4 = FUN_71ba21e8(uVar4,uVar2);
  iVar1 = FUN_71ba2d10(uVar3,uVar4);
  if (iVar1 != 0) {
    uVar3 = uVar4;
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_715e3e2c
// Entry: 0x715e3e2c | Size: 224 bytes
// =========================================================================

undefined4 FUN_715e3e2c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = FUN_71ba240c(0x3f000000,*param_1);
  uVar4 = FUN_71ba0b38(uVar4,0xbf000000);
  iVar2 = FUN_71ba2d10(uVar1,uVar4);
  uVar3 = FUN_71ba240c(0x3f000000,uVar3);
  if (iVar2 != 0) {
    uVar1 = uVar4;
  }
  iVar2 = FUN_71ba2d10(uVar1,uVar3);
  if (iVar2 != 0) {
    uVar1 = uVar3;
  }
  uVar4 = FUN_71ba0b38(uVar5,0xbf000000);
  iVar2 = FUN_71ba2d10(uVar1,uVar4);
  if (iVar2 != 0) {
    uVar1 = uVar4;
  }
  uVar4 = FUN_71ba0b38(uVar1,uVar1);
  uVar3 = FUN_71ba13e0(0x3f6147ae,uVar4);
  iVar2 = FUN_71ba2d10(uVar3,0x41800000);
  uVar1 = 0x41800000;
  if (iVar2 != 0) {
    uVar1 = uVar3;
  }
  iVar2 = FUN_71ba2d70(uVar4,0);
  if (iVar2 == 0) {
    uVar1 = 0x3f800000;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_715e4058
// Entry: 0x715e4058 | Size: 112 bytes
// =========================================================================

void FUN_715e4058(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0xc) == *(int *)(param_2 + 0xc)) &&
       (*(int *)(iVar1 + 0x10) == *(int *)(param_2 + 0x10))) {
      return;
    }
    FUN_7143b8c0();
  }
  uVar2 = FUN_7143b470(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),0,1);
  *(undefined4 *)(param_1 + 100) = uVar2;
  return;
}


// =========================================================================
// Function: FUN_715e4118
// Entry: 0x715e4118 | Size: 32 bytes
// =========================================================================

undefined4 * FUN_715e4118(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_715e41a4(param_1);
  return param_1;
}


// =========================================================================
// Function: FUN_715e41a4
// Entry: 0x715e41a4 | Size: 320 bytes
// =========================================================================

void FUN_715e41a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_7141a314(2);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 0) {
    uStack_24 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_2c = 0x3f800000;
    uStack_30 = 0x3f800000;
    FUN_7141a72c(iVar1,&uStack_30);
    uVar2 = FUN_7141faac();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar2 = FUN_7141d104();
    uStack_38 = 0x42480000;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uStack_3c = 0;
    uStack_40 = 0;
    FUN_7141d918(uVar2,&uStack_40,1);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((uint)&uStack_40 | 4) = 0;
    ((undefined4 *)((uint)&uStack_40 | 4))[1] = 0;
    uStack_40 = 0x3f800000;
    FUN_7141dd5c(uVar2,&uStack_40,0x42b40000,1);
    uVar2 = FUN_7143b470(0x100,0x100,0,1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 100) = uVar2;
    FUN_7141ea34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    FUN_7141feb0(*(undefined4 *)(param_1 + 0xc),0x43960000);
    FUN_714202f0(*(undefined4 *)(param_1 + 0xc),0x3e99999a);
    uStack_44 = 0x3f000000;
    uStack_48 = 0x3f000000;
    FUN_71420728(*(undefined4 *)(param_1 + 0xc),&uStack_48);
    FUN_71420b60(*(undefined4 *)(param_1 + 0xc),1);
    FUN_714119dc(*DAT_70ffc978,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}


// =========================================================================
// Function: FUN_715e4490
// Entry: 0x715e4490 | Size: 28 bytes
// =========================================================================

int * FUN_715e4490(int param_1,byte *param_2,byte *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  DAT_710eaf34 = 1;
  if (param_4 == (int *)0x0) {
    iVar7 = FUN_7143b470(0x200,0x100,0x20,0x10505);
    param_4 = (int *)FUN_7143cf50();
  }
  else {
    iVar7 = *param_4;
  }
  if (param_4 == (int *)0x0 || iVar7 == 0) {
    DAT_710eaf34 = 0;
    return (int *)0x0;
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x60) = iVar7;
  iVar9 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (iVar9 != 0) {
    iVar2 = *(int *)(iVar9 + 100);
    if (iVar2 != 0) {
      if ((*(int *)(iVar2 + 0xc) == *(int *)(iVar7 + 0xc)) &&
         (iVar3 = iVar9, *(int *)(iVar2 + 0x10) == *(int *)(iVar7 + 0x10))) goto LAB_715e4588;
      FUN_7143b8c0();
    }
    uVar8 = FUN_7143b470(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x10),0,1);
    *(undefined4 *)(iVar9 + 100) = uVar8;
    iVar3 = *(int *)(param_1 + 0xc);
  }
LAB_715e4588:
  FUN_7148e65c(iVar3);
  uStack_28 = 0;
  FUN_71420f90(*(undefined4 *)(param_1 + 0xc),&uStack_28,3);
  FUN_7141f27c(*(undefined4 *)(param_1 + 0xc));
  FUN_71413b60(6,1);
  FUN_71413b60(8,1);
  FUN_71413b60(7,0);
  FUN_71413b60(0x1e,0);
  FUN_71413b60(0x14,0);
  FUN_71413b60(0xe,0);
  pbVar4 = *(byte **)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  pbVar6 = *(byte **)(param_3 + 8);
  if ((*param_3 & 1) == 0) {
    pbVar6 = param_3 + 1;
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x60);
  uVar8 = *(undefined4 *)(iVar7 + 0xc);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  uVar11 = FUN_715ec410(pbVar4,pbVar6,1);
  iVar7 = (int)((ulonglong)uVar11 >> 0x20);
  piVar5 = (int *)uVar11;
  if (piVar5 != (int *)0x0) {
    iVar7 = *piVar5;
  }
  if (piVar5 != (int *)0x0 && iVar7 != 0) {
    FUN_71413b60(1);
    FUN_71413b60(6,0);
    FUN_71413b60(8,0);
    uStack_90 = FUN_7141ab6c();
    uStack_8c = 0x3f800000;
    uStack_88 = 0xffffffff;
    uStack_74 = FUN_7141ab6c();
    uStack_70 = 0x3f800000;
    uStack_6c = 0xffffffff;
    uStack_58 = FUN_7141ab6c();
    uStack_54 = 0x3f800000;
    uStack_50 = 0xffffffff;
    uStack_3c = FUN_7141ab6c();
    uStack_38 = 0x3f800000;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    uStack_5c = FUN_71ba1b94(uVar10);
    uStack_4c = 0x3f800000;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = uStack_5c;
    uStack_7c = FUN_71ba1b94(uVar8);
    uStack_68 = 0x3f800000;
    uStack_64 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_94 = 0;
    uStack_34 = 0xffffffff;
    uStack_98 = 0;
    uStack_60 = uStack_7c;
    FUN_71413f98(5,&uStack_98,4);
    FUN_71413b60(6,1);
    FUN_71413b60(8,1);
    puVar1 = DAT_70b46448;
    FUN_7139a77c(*DAT_70b46448);
    FUN_7141f690(*(undefined4 *)(param_1 + 0xc));
    FUN_7143d364(piVar5);
    DAT_710eaf34 = 0;
    if (DAT_700c5d9c != '\0') {
      FUN_7139a77c(*puVar1);
    }
  }
  else {
    param_4 = (int *)0x0;
    DAT_710eaf34 = 0;
    FUN_7141f690(*(undefined4 *)(param_1 + 0xc));
  }
  return param_4;
}


// =========================================================================
// Function: FUN_715e4bb4
// Entry: 0x715e4bb4 | Size: 32 bytes
// =========================================================================

int * FUN_715e4bb4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5
                  ,undefined4 *param_6,int *param_7,int param_8,int *param_9,int param_10)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 uVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  int *piVar27;
  int *piVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined4 uStack_118;
  undefined4 *puStack_110;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
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
  int iStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
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
  undefined4 auStack_2c [2];
  
  puVar2 = DAT_70b46448;
  DAT_710eaf34 = 1;
  auStack_2c[0] = param_3;
  FUN_7139a77c(*DAT_70b46448);
  piVar4 = (int *)FUN_71561d40(DAT_711a3938,param_2,0,0,0,0,0);
  if (piVar4 == (int *)0x0) {
    DAT_710eaf34 = 0;
    return (int *)0x0;
  }
  if (param_7 == (int *)0x0) {
    iVar24 = FUN_7143b470(0x100,0xff,0x20,0x10505);
    piVar5 = (int *)FUN_7143cf50();
  }
  else {
    iVar24 = *param_7;
    piVar5 = param_7;
  }
  if (piVar5 == (int *)0x0 || iVar24 == 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
    FUN_71561e40(DAT_711a3938,piVar4);
    if (param_7 != (int *)0x0) {
      DAT_710eaf34 = 0;
      return (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      if (iVar24 != 0) {
        FUN_7143b8c0(iVar24);
        DAT_710eaf34 = 0;
        return (int *)0x0;
      }
      DAT_710eaf34 = 0;
      return (int *)0x0;
    }
    FUN_7143d364(piVar5);
    DAT_710eaf34 = 0;
    return (int *)0x0;
  }
  iVar6 = piVar4[0x23];
  *(int *)(param_1 + 4) = iVar6;
  *(undefined4 *)(iVar6 + 0x4e0) = 0x76;
  FUN_713c27c4(piVar4[0x23]);
  uVar7 = FUN_71ba21e8(param_5,0xc0100000);
  uVar19 = 0x42483333;
  if (param_2 == 0xa2) {
    uVar19 = 0x4248999a;
  }
  FUN_715601e8(piVar4,0,uVar7,uVar19);
  FUN_71560364(piVar4,0);
  thunk_FUN_71560790(piVar4,0);
  thunk_FUN_715600f0(piVar4,&uStack_6c);
  uVar7 = *param_4;
  iVar6 = FUN_71ba2cf0(uVar7,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_6c,&DAT_700c3058,uVar7,1);
  }
  uVar7 = param_4[1];
  iVar6 = FUN_71ba2cf0(uVar7,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_6c,&DAT_700c3064,uVar7,1);
  }
  uVar7 = param_4[2];
  iVar6 = FUN_71ba2cf0(uVar7,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_6c,&DAT_700c3070,uVar7,1);
  }
  FUN_71560458(piVar4,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,
               uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
               uStack_30);
  (**(code **)(*piVar4 + 8))(piVar4);
  puStack_110 = param_6;
  if (param_8 == 0) {
    thunk_FUN_715c6380(piVar4,0x42c80000,1);
    if (param_6 != (undefined4 *)0x0) {
      puStack_110 = (undefined4 *)0x1;
    }
    if (param_10 != 0xffff) goto LAB_715e5968;
    uStack_118 = 0;
LAB_715e51a8:
    iVar6 = *(int *)(param_1 + 0x14);
    uStack_b0 = *(uint *)(iVar6 + 0x10);
    uStack_ac = *(undefined4 *)(iVar6 + 0x14);
    uStack_a8 = *(undefined4 *)(iVar6 + 0x18);
    uStack_a4 = *(undefined4 *)(iVar6 + 0x1c);
    uStack_a0 = *(undefined4 *)(iVar6 + 0x20);
    uStack_9c = *(undefined4 *)(iVar6 + 0x24);
    uStack_98 = *(undefined4 *)(iVar6 + 0x28);
    uStack_94 = *(undefined4 *)(iVar6 + 0x2c);
    uStack_90 = *(undefined4 *)(iVar6 + 0x30);
    uStack_8c = *(undefined4 *)(iVar6 + 0x34);
    uStack_88 = *(undefined4 *)(iVar6 + 0x38);
    uStack_84 = *(undefined4 *)(iVar6 + 0x3c);
    uStack_80 = *(undefined4 *)(iVar6 + 0x40);
    uStack_7c = *(undefined4 *)(iVar6 + 0x44);
    uStack_78 = *(undefined4 *)(iVar6 + 0x48);
    uStack_74 = *(undefined4 *)(iVar6 + 0x4c);
    iVar6 = 0;
    uVar17 = 1;
  }
  else {
    uStack_118 = FUN_71556bcc(piVar4);
    FUN_71557f40(uStack_118,param_8);
    FUN_71558008(uStack_118);
    thunk_FUN_715c6380(piVar4,0x42c80000,1);
    (**(code **)(*(int *)piVar4[0x23] + 0x48))();
    FUN_713b45b4(piVar4[0x23]);
    FUN_71558e3c(uStack_118);
    if ((param_6 != (undefined4 *)0x0) && (puStack_110 = (undefined4 *)0x1, param_10 == 0xffff)) {
      uStack_b0 = 0x6572700e;
      uStack_ac = 0x77656976;
      uStack_a8 = uStack_a8 & 0xffffff00;
      puVar8 = (undefined4 *)FUN_714f2964(param_6,&uStack_b0);
      if ((uStack_b0 & 1) != 0) {
        thunk_qNQrlu(uStack_a8);
      }
      if ((param_6 + 1 != puVar8) && (pbVar9 = (byte *)puVar8[7], puVar8[8] - (int)pbVar9 == 0xc)) {
        bVar20 = *pbVar9;
        uVar17 = *(uint *)(pbVar9 + 4);
        if ((bVar20 & 1) == 0) {
          uVar17 = (uint)(bVar20 >> 1);
        }
        if (uVar17 == 4) {
          pbVar18 = *(byte **)(pbVar9 + 8);
          if ((bVar20 & 1) == 0) {
            pbVar18 = pbVar9 + 1;
          }
          if (*(int *)pbVar18 == 0x64616568) {
            iVar6 = FUN_715595b4(uStack_118);
            goto joined_r0x715e595c;
          }
        }
      }
      puStack_110 = (undefined4 *)0x1;
      goto LAB_715e51a8;
    }
    if (param_10 == 0xffff) goto LAB_715e51a8;
    iVar6 = FUN_715593ac(uStack_118);
joined_r0x715e595c:
    if (iVar6 == 0) {
LAB_715e5968:
      FUN_71557078(piVar4);
      (**(code **)(*piVar4 + 0xc))(piVar4);
      (**(code **)(*piVar4 + 4))(piVar4);
      DAT_710eaf34 = 0;
      return (int *)0x0;
    }
    iVar10 = *(int *)(param_1 + 0x14);
    uStack_b0 = *(uint *)(iVar10 + 0x10);
    uStack_ac = *(undefined4 *)(iVar10 + 0x14);
    uStack_a8 = *(undefined4 *)(iVar10 + 0x18);
    uStack_a4 = *(undefined4 *)(iVar10 + 0x1c);
    uStack_a0 = *(undefined4 *)(iVar10 + 0x20);
    uStack_9c = *(undefined4 *)(iVar10 + 0x24);
    uStack_98 = *(undefined4 *)(iVar10 + 0x28);
    uStack_94 = *(undefined4 *)(iVar10 + 0x2c);
    uStack_90 = *(undefined4 *)(iVar10 + 0x30);
    uStack_8c = *(undefined4 *)(iVar10 + 0x34);
    uStack_88 = *(undefined4 *)(iVar10 + 0x38);
    uStack_84 = *(undefined4 *)(iVar10 + 0x3c);
    uStack_80 = *(undefined4 *)(iVar10 + 0x40);
    uStack_7c = *(undefined4 *)(iVar10 + 0x44);
    uStack_78 = *(undefined4 *)(iVar10 + 0x48);
    uStack_74 = *(undefined4 *)(iVar10 + 0x4c);
    uVar7 = FUN_7155c620(piVar4);
    FUN_715e28c8(&uStack_f8,iVar6,uVar7);
    uVar19 = uStack_ec;
    uVar7 = uStack_f4;
    iVar10 = *(int *)(param_1 + 0xc);
    iVar23 = *(int *)(param_1 + 0x14);
    uVar21 = *(undefined4 *)(iVar10 + 0x68);
    uVar25 = *(undefined4 *)(iVar10 + 0x6c);
    uVar11 = *(undefined4 *)(iVar10 + 0x80);
    *(undefined4 *)(iVar23 + 0x48) = uStack_f0;
    *(undefined4 *)(iVar23 + 0x40) = uStack_f8;
    iVar10 = FUN_71ba2d10(uVar25,uVar21);
    if (iVar10 != 0) {
      uVar21 = uVar25;
    }
    iVar10 = FUN_71ba2d70(uVar21,0x3c23d70a);
    if (iVar10 == 0) {
      uVar21 = 0x3c23d70a;
    }
    iVar10 = FUN_71ba2d70(param_5,0x3f800000);
    uVar21 = FUN_71ba21e8(uVar21,uVar21);
    uVar21 = FUN_71ba13e0(0x3f800000,uVar21);
    FUN_71ba0b38(uVar21,0x3f800000);
    uVar21 = imp_sqrtf();
    uVar21 = FUN_71ba21e8(uVar19,uVar21);
    uVar25 = FUN_71ba21e8(uVar21,0x3f8ccccd);
    uVar19 = FUN_71ba0b38(uVar19,uVar11);
    uVar19 = FUN_71ba0b38(uVar19,0x3c23d70a);
    uVar21 = 0x3f800000;
    if (iVar10 != 0) {
      uVar21 = param_5;
    }
    uVar21 = FUN_71ba21e8(uVar21,uVar25);
    iVar10 = FUN_71ba2d10(uVar19,uVar21);
    if (iVar10 != 0) {
      uVar19 = uVar21;
    }
    uVar7 = FUN_71ba0b38(uVar7,uVar19);
    *(undefined4 *)(iVar23 + 0x44) = uVar7;
    FUN_7141bbe4(iVar23 + 0x10);
    FUN_7141b7c0(*(undefined4 *)(param_1 + 0x14));
    uVar17 = 0;
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x60) = iVar24;
  iVar23 = *(int *)(param_1 + 0xc);
  iVar10 = 0;
  if (iVar23 != 0) {
    iVar12 = *(int *)(iVar23 + 100);
    if (iVar12 != 0) {
      if ((*(int *)(iVar12 + 0xc) == *(int *)(iVar24 + 0xc)) &&
         (iVar10 = iVar23, *(int *)(iVar12 + 0x10) == *(int *)(iVar24 + 0x10))) goto LAB_715e5258;
      FUN_7143b8c0();
    }
    uVar7 = FUN_7143b470(*(undefined4 *)(iVar24 + 0xc),*(undefined4 *)(iVar24 + 0x10),0,1);
    *(undefined4 *)(iVar23 + 100) = uVar7;
    iVar10 = *(int *)(param_1 + 0xc);
  }
LAB_715e5258:
  FUN_7148e65c(iVar10);
  FUN_71420f90(*(undefined4 *)(param_1 + 0xc),auStack_2c,3);
  FUN_7141f27c(*(undefined4 *)(param_1 + 0xc));
  puVar8 = DAT_70ffc978;
  FUN_71411e14(*DAT_70ffc978,*(undefined4 *)(param_1 + 0x10));
  FUN_71413b60(6,1);
  FUN_71413b60(8,1);
  FUN_71413b60(7,0);
  FUN_71413b60(0x1e,0);
  FUN_71413b60(0xe,0);
  FUN_7140e03c();
  FUN_71413b60(0x14,2);
  uStack_b4 = 0;
  piStack_b8 = (int *)0x0;
  piStack_bc = (int *)0x0;
  iStack_c0 = iVar6;
  if (uVar17 == 0) {
    FUN_71422cb0(*(undefined4 *)(piVar4[0x23] + 0x18),FUN_715e6968,&iStack_c0);
  }
  if (param_8 == 0) {
    FUN_7156080c(piVar4);
    piVar27 = piStack_bc;
  }
  else {
    FUN_7155c874(uStack_118);
    FUN_7146a30c(piVar4[0x23]);
    FUN_7155dba8(uStack_118);
    piVar27 = piStack_bc;
  }
  for (; piVar27 != piStack_b8; piVar27 = piVar27 + 2) {
    *(int *)(*piVar27 + 0x48) = piVar27[1];
  }
  if ((param_9 != (int *)0x0 & uVar17) != 0) {
    puVar26 = (undefined4 *)param_9[1];
    for (puVar22 = (undefined4 *)*param_9; puVar22 != puVar26; puVar22 = puVar22 + 0xe) {
      uStack_f8 = puVar22[1];
      uStack_f4 = puVar22[2];
      uStack_f0 = puVar22[3];
      uStack_ec = puVar22[4];
      uStack_e8 = puVar22[5];
      uStack_e4 = puVar22[6];
      uStack_e0 = puVar22[7];
      uStack_dc = puVar22[8];
      uStack_d8 = puVar22[9];
      uStack_d4 = puVar22[10];
      uStack_d0 = puVar22[0xb];
      uStack_cc = puVar22[0xc];
      uStack_c8 = puVar22[0xd];
      FUN_715c566c(piVar4,&uStack_f8,*puVar22);
    }
  }
  if ((uVar17 & (uint)puStack_110) == 1) {
    piVar27 = (int *)*param_6;
    if (piVar27 != param_6 + 1) {
      pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5da0);
      pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5db0);
      bVar20 = *pbVar18;
      do {
        if ((bVar20 & 1) == 0) {
          puVar22 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5da0);
          *puVar22 = 0xda77a920;
          *(undefined1 *)((int)puVar22 + 7) = 1;
          *(undefined4 *)((int)puVar22 + 3) = 0xf9ddeada;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_715ea150,puVar22,&DAT_70b0e000);
          puVar15 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5db0);
          *puVar15 = 1;
        }
        if (pbVar9[7] != 0) {
          *pbVar9 = *pbVar9 ^ 0x41;
          pbVar9[1] = pbVar9[1] ^ 0xdd;
          pbVar9[2] = pbVar9[2] ^ 3;
          pbVar9[3] = pbVar9[3] ^ 0xbb;
          pbVar9[7] = 0;
          pbVar9[4] = pbVar9[4] ^ 0x89;
          pbVar9[5] = pbVar9[5] ^ 0xb5;
          pbVar9[6] = pbVar9[6] ^ 0xf9;
        }
        uVar13 = imp_strlen(pbVar9);
        bVar1 = *(byte *)(piVar27 + 4);
        uVar14 = piVar27[5];
        bVar20 = 1;
        if ((bVar1 & 1) == 0) {
          uVar14 = (uint)(bVar1 >> 1);
        }
        if (uVar13 == uVar14) {
          if (uVar13 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(piVar27 + 4);
          }
          iVar24 = piVar27[6];
          if ((bVar1 & 1) == 0) {
            iVar24 = (int)piVar27 + 0x11;
          }
          iVar24 = imp_memcmp(iVar24,pbVar9);
          if ((iVar24 == 0) && (0xd < (uint)((piVar27[8] - piVar27[7] >> 2) * -0x55555555))) {
            FUN_7136cdfc(&uStack_f0);
            FUN_7136cdfc(&uStack_e4);
            FUN_7136cdfc(&uStack_d8);
            iVar6 = piVar27[7];
            iVar24 = *(int *)(iVar6 + 0x14);
            if ((*(byte *)(iVar6 + 0xc) & 1) == 0) {
              iVar24 = iVar6 + 0xd;
            }
            uStack_f8 = imp_atoi(iVar24);
            iVar24 = *(int *)(iVar6 + 0x20);
            if ((*(byte *)(iVar6 + 0x18) & 1) == 0) {
              iVar24 = iVar6 + 0x19;
            }
            imp_atoi(iVar24);
            uStack_f4 = thunk_FUN_717b1c10();
            iVar6 = piVar27[7];
            iVar24 = *(int *)(iVar6 + 0x2c);
            if ((*(byte *)(iVar6 + 0x24) & 1) == 0) {
              iVar24 = iVar6 + 0x25;
            }
            uVar30 = imp_atof(iVar24);
            iVar24 = *(int *)(iVar6 + 0x38);
            if ((*(byte *)(iVar6 + 0x30) & 1) == 0) {
              iVar24 = iVar6 + 0x31;
            }
            imp_atof(iVar24);
            uVar7 = FUN_71ba242c();
            iVar24 = *(int *)(iVar6 + 0x44);
            if ((*(byte *)(iVar6 + 0x3c) & 1) == 0) {
              iVar24 = iVar6 + 0x3d;
            }
            imp_atof(iVar24);
            uStack_100 = uVar7;
            uStack_fc = FUN_71ba242c();
            uStack_104 = FUN_71ba242c((int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
            FUN_7136d040(&uStack_f0,&uStack_104);
            iVar6 = piVar27[7];
            iVar24 = *(int *)(iVar6 + 0x50);
            if ((*(byte *)(iVar6 + 0x48) & 1) == 0) {
              iVar24 = iVar6 + 0x49;
            }
            uVar30 = imp_atof(iVar24);
            iVar24 = *(int *)(iVar6 + 0x5c);
            if ((*(byte *)(iVar6 + 0x54) & 1) == 0) {
              iVar24 = iVar6 + 0x55;
            }
            imp_atof(iVar24);
            uVar7 = FUN_71ba242c();
            iVar24 = *(int *)(iVar6 + 0x68);
            if ((*(byte *)(iVar6 + 0x60) & 1) == 0) {
              iVar24 = iVar6 + 0x61;
            }
            imp_atof(iVar24);
            uStack_100 = uVar7;
            uStack_fc = FUN_71ba242c();
            uStack_104 = FUN_71ba242c((int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
            FUN_7136d040(&uStack_e4,&uStack_104);
            iVar6 = piVar27[7];
            iVar24 = *(int *)(iVar6 + 0x74);
            if ((*(byte *)(iVar6 + 0x6c) & 1) == 0) {
              iVar24 = iVar6 + 0x6d;
            }
            uVar30 = imp_atof(iVar24);
            iVar24 = *(int *)(iVar6 + 0x80);
            if ((*(byte *)(iVar6 + 0x78) & 1) == 0) {
              iVar24 = iVar6 + 0x79;
            }
            imp_atof(iVar24);
            uVar7 = FUN_71ba242c();
            iVar24 = *(int *)(iVar6 + 0x8c);
            if ((*(byte *)(iVar6 + 0x84) & 1) == 0) {
              iVar24 = iVar6 + 0x85;
            }
            imp_atof(iVar24);
            uStack_100 = uVar7;
            uStack_fc = FUN_71ba242c();
            uStack_104 = FUN_71ba242c((int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
            FUN_7136d040(&uStack_d8,&uStack_104);
            iVar6 = piVar27[7];
            iVar24 = *(int *)(iVar6 + 0x98);
            if ((*(byte *)(iVar6 + 0x90) & 1) == 0) {
              iVar24 = iVar6 + 0x91;
            }
            uStack_cc = imp_atoi(iVar24);
            iVar6 = piVar27[7];
            iVar24 = *(int *)(iVar6 + 0xa4);
            if ((*(byte *)(iVar6 + 0x9c) & 1) == 0) {
              iVar24 = iVar6 + 0x9d;
            }
            uStack_c8 = imp_atoi(iVar24);
            pbVar16 = (byte *)piVar27[7];
            pbVar18 = *(byte **)(pbVar16 + 8);
            if ((*pbVar16 & 1) == 0) {
              pbVar18 = pbVar16 + 1;
            }
            uVar7 = imp_atoi(pbVar18);
            FUN_715c566c(piVar4,&uStack_f8,uVar7);
            pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5db0);
            bVar20 = *pbVar18;
          }
        }
        piVar3 = (int *)piVar27[1];
        piVar28 = piVar27;
        if ((int *)piVar27[1] == (int *)0x0) {
          do {
            piVar27 = (int *)piVar28[2];
            bVar29 = (int *)*piVar27 != piVar28;
            piVar28 = piVar27;
          } while (bVar29);
        }
        else {
          do {
            piVar27 = piVar3;
            piVar3 = (int *)*piVar27;
          } while ((int *)*piVar27 != (int *)0x0);
        }
      } while (piVar27 != param_6 + 1);
    }
  }
  if (uVar17 == 0) {
    FUN_7139a77c(*puVar2);
    FUN_7141f690(*(undefined4 *)(param_1 + 0xc));
    iVar24 = *(int *)(param_1 + 0x14);
    *(uint *)(iVar24 + 0x10) = uStack_b0;
    *(undefined4 *)(iVar24 + 0x14) = uStack_ac;
    *(uint *)(iVar24 + 0x18) = uStack_a8;
    *(undefined4 *)(iVar24 + 0x1c) = uStack_a4;
    *(undefined4 *)(iVar24 + 0x20) = uStack_a0;
    *(undefined4 *)(iVar24 + 0x24) = uStack_9c;
    *(undefined4 *)(iVar24 + 0x28) = uStack_98;
    *(undefined4 *)(iVar24 + 0x2c) = uStack_94;
    *(undefined4 *)(iVar24 + 0x30) = uStack_90;
    *(undefined4 *)(iVar24 + 0x34) = uStack_8c;
    *(undefined4 *)(iVar24 + 0x38) = uStack_88;
    *(undefined4 *)(iVar24 + 0x3c) = uStack_84;
    *(undefined4 *)(iVar24 + 0x40) = uStack_80;
    *(undefined4 *)(iVar24 + 0x44) = uStack_7c;
    *(undefined4 *)(iVar24 + 0x48) = uStack_78;
    *(undefined4 *)(iVar24 + 0x4c) = uStack_74;
    FUN_7141bbe4(*(int *)(param_1 + 0x14) + 0x10);
    FUN_7141b7c0(*(undefined4 *)(param_1 + 0x14));
    goto LAB_715e58bc;
  }
  if ((puStack_110 == (undefined4 *)0x0) || (param_6[2] == 0)) {
    iVar24 = 0;
    iVar6 = 0;
    if (param_9 != (int *)0x0) {
      iVar24 = *param_9;
      iVar6 = param_9[1];
    }
    if (param_9 != (int *)0x0 && iVar24 != iVar6) goto LAB_715e5848;
  }
  else {
LAB_715e5848:
    FUN_715c6584(piVar4,1);
  }
  FUN_7139a77c(*puVar2);
  FUN_7141f690(*(undefined4 *)(param_1 + 0xc));
LAB_715e58bc:
  FUN_71412244(*puVar8,*(undefined4 *)(param_1 + 0x10));
  if (param_8 != 0) {
    FUN_71557078(piVar4);
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_71561e40(DAT_711a3938,piVar4);
  DAT_710eaf34 = 0;
  if (DAT_700c5d9c != '\0') {
    FUN_7139a77c(*puVar2);
  }
  if (piStack_bc == (int *)0x0) {
    return piVar5;
  }
  piStack_b8 = piStack_bc;
  thunk_qNQrlu();
  return piVar5;
}


// =========================================================================
// Function: FUN_715e6968
// Entry: 0x715e6968 | Size: 252 bytes
// =========================================================================

int FUN_715e6968(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  piVar3 = (int *)param_2[2];
  iVar6 = *(int *)(param_1 + 0x48);
  if (piVar3 < (int *)param_2[3]) {
    *piVar3 = param_1;
    piVar9 = piVar3 + 2;
    piVar3[1] = iVar6;
  }
  else {
    iVar7 = param_2[1];
    iVar1 = (int)piVar3 - iVar7 >> 3;
    uVar8 = iVar1 + 1;
    if (0x1fffffff < uVar8) {
      FUN_715ea0e8();
LAB_715e6a60:
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    uVar4 = param_2[3] - iVar7;
    uVar2 = (int)uVar4 >> 2;
    if (uVar8 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7ffffff7 < uVar4) {
      uVar8 = 0x1fffffff;
    }
    if (uVar8 == 0) {
      iVar5 = 0;
    }
    else {
      if (0x1fffffff < uVar8) goto LAB_715e6a60;
      iVar5 = thunk_MwhHq(uVar8 << 3);
    }
    piVar9 = (int *)(iVar5 + iVar1 * 8);
    *piVar9 = param_1;
    piVar9[1] = iVar6;
    imp___aeabi_memcpy4(iVar5,iVar7,(int)piVar3 - iVar7);
    piVar9 = piVar9 + 2;
    param_2[1] = iVar5;
    param_2[2] = (int)piVar9;
    param_2[3] = iVar5 + uVar8 * 8;
    if (iVar7 != 0) {
      thunk_qNQrlu(iVar7);
    }
  }
  param_2[2] = (int)piVar9;
  if (*param_2 != param_1) {
    *(undefined **)(param_1 + 0x48) = &DAT_715ea0cc;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715e6b28
// Entry: 0x715e6b28 | Size: 64 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x715e6fa4) */
/* WARNING: Removing unreachable block (ram,0x715e76b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715e6b28(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5
                 ,int param_6,int param_7,uint param_8,uint param_9,int *param_10,int *param_11)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  int extraout_r2;
  int iVar21;
  int *piVar22;
  undefined4 uVar23;
  int *piVar24;
  int *piVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iStack_b0;
  byte abStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
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
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  *(undefined1 *)(param_1 + 8) = 1;
  DAT_710eaf34 = 1;
  uStack_5c = param_3;
  if (param_11 == (int *)0x0) {
    iStack_b0 = FUN_7143b470(0x100,0xff,0x20,0x10505);
    param_11 = (int *)FUN_7143cf50();
  }
  else {
    iStack_b0 = *param_11;
  }
  piVar5 = (int *)thunk_MwhHq(0x978);
  uVar23 = 0;
  iVar21 = param_2;
  if (param_2 == 0x239) {
    iVar21 = 0x219;
  }
  if (param_2 == 0x23a) {
    iVar21 = 0x21a;
  }
  FUN_715f2ce8(piVar5,0xffff,iVar21,0,0,0x42480000,0,0);
  iVar6 = piVar5[3];
  *param_1 = iVar6;
  if (param_11 != (int *)0x0) {
    iVar6 = iStack_b0;
  }
  if (param_11 == (int *)0x0 || iVar6 == 0) {
    DAT_710eaf34 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    goto LAB_715e7234;
  }
  iVar21 = *(int *)(DAT_70c39074 + iVar21 * 4);
  FUN_71560364(piVar5,0);
  thunk_FUN_71560790(piVar5,0);
  iVar21 = *(int *)(iVar21 + 0x2c);
  if (iVar21 != 0) {
    uVar23 = *(undefined4 *)(iVar21 + 0x24);
  }
  FUN_71ba0b38(uVar23,uVar23);
  uVar27 = FUN_71ba1638();
  uVar27 = FUN_71ba23ec(0,0xbff00000,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
  uVar28 = FUN_71ba1638(param_5);
  uVar27 = FUN_71ba1ea0((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                        (int)((ulonglong)uVar28 >> 0x20));
  iVar21 = thunk_FUN_715f4594(piVar5);
  if (iVar21 == 5) {
    uVar27 = FUN_71ba1638(uVar23);
    uVar27 = FUN_71ba1ea0((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0xc0040000);
    uVar27 = FUN_71ba0670((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),0,0xc0160000);
  }
  uVar23 = FUN_71ba242c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
  uVar27 = FUN_715601e8(piVar5,0,uVar23,0x42480000);
  iVar21 = extraout_r2;
  if (param_6 != 0xffff) {
    iVar21 = param_7;
  }
  if (param_6 != 0xffff && iVar21 != 0xffff) {
    uVar27 = FUN_715f6508(piVar5,param_6);
  }
  uVar18 = (uint)((ulonglong)uVar27 >> 0x20);
  uVar19 = (uint)uVar27;
  if (param_8 != 0xffff) {
    uVar18 = 0xffff;
    uVar19 = param_9;
  }
  if (param_8 != 0xffff && uVar19 != uVar18) {
    FUN_715f961c(piVar5,param_8 & 0xff,uVar19 & 0xff);
  }
  thunk_FUN_715600f0(piVar5,&uStack_9c);
  uVar23 = *param_4;
  iVar21 = FUN_71ba2cf0(uVar23,0);
  if (iVar21 == 0) {
    FUN_7141c000(&uStack_9c,&DAT_700c3058,uVar23,1);
  }
  uVar23 = param_4[1];
  iVar21 = FUN_71ba2cf0(uVar23,0);
  if (iVar21 == 0) {
    FUN_7141c000(&uStack_9c,&DAT_700c3064,uVar23,1);
  }
  uVar23 = param_4[2];
  iVar21 = FUN_71ba2cf0(uVar23,0);
  if (iVar21 == 0) {
    FUN_7141c000(&uStack_9c,&DAT_700c3070,uVar23,1);
  }
  FUN_71560458(piVar5,uStack_9c,uStack_98,uStack_94,iStack_90,uStack_8c,uStack_88,uStack_84,
               uStack_80,uStack_7c,uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,
               uStack_60);
  (**(code **)(*(int *)piVar5[1] + 0x48))();
  uStack_3c = 0x26d5d038;
  uStack_50 = 0x250;
  uStack_4c = 0;
  puStack_40 = &LAB_49abac16;
  uStack_44 = 0;
  uStack_48 = 0x2b3;
  abStack_a0[0] = 0;
  do {
    *(byte *)((int)&uStack_58 + (int)(char)abStack_a0[0]) =
         (byte)(0xccfd73 >> (((int)(char)abStack_a0[0] & 0x1fU) << 3)) ^ 0xc9;
    abStack_a0[0] = abStack_a0[0] + 1;
  } while (abStack_a0[0] < 4);
  uStack_38 = 0xccfd73;
  abStack_a0[0] = 0;
  do {
    abStack_a0[0] = abStack_a0[0] + 1;
    uStack_38 = (uStack_38 | 0xccafe2) >> 2 ^ 0xacaefc;
  } while (abStack_a0[0] < 8);
  abStack_a0[0] = 0;
  do {
    *(byte *)((int)&uStack_58 + (int)(char)abStack_a0[0]) =
         *(byte *)((int)&uStack_58 + (int)(char)abStack_a0[0]) ^ 0xc9;
    abStack_a0[0] = abStack_a0[0] + 1;
  } while (abStack_a0[0] < 4);
  abStack_a0[0] = 0;
  uVar18 = uStack_48;
  uVar19 = uStack_44;
  do {
    iVar21 = (int)(char)abStack_a0[0];
    abStack_a0[0] = abStack_a0[0] + 1;
    uVar19 = uVar19 ^ -(uVar19 + (iVar21 + 0xccaaffU < uVar18));
    piVar22 = (int *)(uint)abStack_a0[0];
    uVar18 = uVar18 ^ (iVar21 + 0xccaaffU) - uVar18 ^ 0x250;
  } while (piVar22 < (int *)0x8);
  piVar24 = (int *)iStack_90;
  if (param_10 != (int *)0x0) {
    piVar22 = param_10 + 1;
    piVar24 = (int *)*param_10;
  }
  if (param_10 != (int *)0x0 && piVar24 != piVar22) {
    uVar18 = uStack_58 ^ 0x272;
    pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5dc0,uVar19);
    pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5de0);
    pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e00);
    do {
      pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5dd0);
      if (*pcVar11 == '\0') {
        puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5dc0);
        *puVar16 = 0x38f860bf;
        *(undefined1 *)((int)puVar16 + 6) = 1;
        *(undefined2 *)(puVar16 + 1) = 0x3ed;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715ea178,puVar16,&DAT_70b0e000);
        puVar17 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5dd0);
        *puVar17 = 1;
      }
      if (pbVar8[6] != 0) {
        pbVar8[6] = 0;
        *pbVar8 = *pbVar8 ^ 0xdb;
        pbVar8[1] = pbVar8[1] ^ 5;
        pbVar8[2] = pbVar8[2] ^ 0x9b;
        pbVar8[3] = pbVar8[3] ^ 0x59;
        pbVar8[4] = pbVar8[4] ^ 0x81;
        pbVar8[5] = pbVar8[5] ^ 3;
      }
      uVar12 = imp_strlen(pbVar8);
      bVar1 = *(byte *)(piVar24 + 4);
      uVar19 = piVar24[5];
      if ((bVar1 & 1) == 0) {
        uVar19 = (uint)(bVar1 >> 1);
      }
      if (uVar12 == uVar19) {
        if (uVar12 == 0xffffffff) goto LAB_715e7b20;
        iVar21 = piVar24[6];
        if ((bVar1 & 1) == 0) {
          iVar21 = (int)piVar24 + 0x11;
        }
        iVar21 = imp_memcmp(iVar21,pbVar8);
        if (iVar21 != 0) goto LAB_715e7390;
        pbVar20 = (byte *)piVar24[7];
        pbVar13 = *(byte **)(pbVar20 + 8);
        if ((*pbVar20 & 1) == 0) {
          pbVar13 = pbVar20 + 1;
        }
        uVar19 = imp_atoi(pbVar13);
        uStack_50 = 0x26c;
        uStack_4c = 0;
        uStack_48 = 0x2b8;
        uStack_44 = 0;
        puStack_40 = &LAB_49abac16;
        uStack_3c = 0x26d5d038;
        abStack_a0[0] = 0;
        do {
          *(byte *)((int)&uStack_58 + (int)(char)abStack_a0[0]) =
               (byte)(0xccfd4f >> (((int)(char)abStack_a0[0] & 0x1fU) << 3)) ^ 0xce;
          abStack_a0[0] = abStack_a0[0] + 1;
        } while (abStack_a0[0] < 4);
        uStack_38 = 0xccfd4f;
        abStack_a0[0] = 0;
        do {
          abStack_a0[0] = abStack_a0[0] + 1;
          uStack_38 = (uStack_38 | 0xccafdb) >> 2 ^ 0xacaf18;
        } while (abStack_a0[0] < 8);
        abStack_a0[0] = 0;
        do {
          *(byte *)((int)&uStack_58 + (int)(char)abStack_a0[0]) =
               *(byte *)((int)&uStack_58 + (int)(char)abStack_a0[0]) ^ 0xce;
          abStack_a0[0] = abStack_a0[0] + 1;
        } while (abStack_a0[0] < 4);
        abStack_a0[0] = 0;
        do {
          abStack_a0[0] = abStack_a0[0] + 1;
        } while (abStack_a0[0] < 8);
        iVar21 = piVar24[7];
        iVar6 = *(int *)(iVar21 + 0x14);
        if ((*(byte *)(iVar21 + 0xc) & 1) == 0) {
          iVar6 = iVar21 + 0xd;
        }
        if ((uStack_58 ^ uVar19) == 0xccfd4e) {
          iVar7 = *(int *)(iVar21 + 0x20);
          if ((*(byte *)(iVar21 + 0x18) & 1) == 0) {
            iVar7 = iVar21 + 0x19;
          }
          uVar27 = imp_atof(iVar7);
          iVar7 = *(int *)(iVar21 + 0x2c);
          if ((*(byte *)(iVar21 + 0x24) & 1) == 0) {
            iVar7 = iVar21 + 0x25;
          }
          imp_atof(iVar7);
          uStack_54 = FUN_71ba242c();
          uStack_58 = FUN_71ba242c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
          iVar7 = *(int *)(iVar21 + 0x38);
          if ((*(byte *)(iVar21 + 0x30) & 1) == 0) {
            iVar7 = iVar21 + 0x31;
          }
          imp_atof(iVar7);
          uVar23 = FUN_71ba242c();
          iVar7 = *(int *)(iVar21 + 0x44);
          if ((*(byte *)(iVar21 + 0x3c) & 1) == 0) {
            iVar7 = iVar21 + 0x3d;
          }
          imp_atof(iVar7);
          uVar14 = FUN_71ba242c();
          iVar7 = *(int *)(iVar21 + 0x50);
          if ((*(byte *)(iVar21 + 0x48) & 1) == 0) {
            iVar7 = iVar21 + 0x49;
          }
          iVar7 = imp_atoi(iVar7);
          iVar15 = *(int *)(iVar21 + 0x5c);
          if ((*(byte *)(iVar21 + 0x54) & 1) == 0) {
            iVar15 = iVar21 + 0x55;
          }
          iVar21 = imp_atoi(iVar15);
          FUN_7160ee64(piVar5,uVar18 & 0xff,iVar6,&uStack_58,uVar23,uVar14,iVar7 != 0,iVar21 != 0);
        }
        else {
          iVar7 = *(int *)(iVar21 + 0x20);
          if ((*(byte *)(iVar21 + 0x18) & 1) == 0) {
            iVar7 = iVar21 + 0x19;
          }
          uVar27 = imp_atof(iVar7);
          iVar7 = *(int *)(iVar21 + 0x2c);
          if ((*(byte *)(iVar21 + 0x24) & 1) == 0) {
            iVar7 = iVar21 + 0x25;
          }
          imp_atof(iVar7);
          uStack_54 = FUN_71ba242c();
          uStack_58 = FUN_71ba242c((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
          iVar7 = *(int *)(iVar21 + 0x38);
          if ((*(byte *)(iVar21 + 0x30) & 1) == 0) {
            iVar7 = iVar21 + 0x31;
          }
          imp_atof(iVar7);
          uVar23 = FUN_71ba242c();
          iVar7 = *(int *)(iVar21 + 0x44);
          if ((*(byte *)(iVar21 + 0x3c) & 1) == 0) {
            iVar7 = iVar21 + 0x3d;
          }
          imp_atof(iVar7);
          uVar14 = FUN_71ba242c();
          iVar7 = *(int *)(iVar21 + 0x50);
          if ((*(byte *)(iVar21 + 0x48) & 1) == 0) {
            iVar7 = iVar21 + 0x49;
          }
          iVar7 = imp_atoi(iVar7);
          iVar15 = *(int *)(iVar21 + 0x5c);
          if ((*(byte *)(iVar21 + 0x54) & 1) == 0) {
            iVar15 = iVar21 + 0x55;
          }
          iVar21 = imp_atoi(iVar15);
          FUN_7160eab4(piVar5,uVar18 & 0xff,iVar6,&uStack_58,uVar23,uVar14,iVar7 != 0,iVar21 != 0);
        }
        uVar18 = uVar18 + 1;
      }
      else {
LAB_715e7390:
        pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5df0);
        if (*pcVar11 == '\0') {
          puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5de0);
          *puVar16 = 0x9cddf093;
          *(undefined2 *)(puVar16 + 1) = 0x1f7;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_715ea1a0,puVar16,&DAT_70b0e000);
          puVar17 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5df0);
          *puVar17 = 1;
        }
        if (pbVar9[5] != 0) {
          pbVar9[5] = 0;
          *pbVar9 = *pbVar9 ^ 0xe7;
          pbVar9[1] = pbVar9[1] ^ 0x85;
          pbVar9[2] = pbVar9[2] ^ 0xb3;
          pbVar9[3] = pbVar9[3] ^ 0xf9;
          pbVar9[4] = pbVar9[4] ^ 0xf7;
        }
        uVar12 = imp_strlen(pbVar9);
        bVar1 = *(byte *)(piVar24 + 4);
        uVar19 = piVar24[5];
        if ((bVar1 & 1) == 0) {
          uVar19 = (uint)(bVar1 >> 1);
        }
        if (uVar12 == uVar19) {
          if (uVar12 == 0xffffffff) goto LAB_715e7b20;
          iVar21 = piVar24[6];
          if ((bVar1 & 1) == 0) {
            iVar21 = (int)piVar24 + 0x11;
          }
          iVar21 = imp_memcmp(iVar21,pbVar9);
          if (iVar21 == 0) {
            pbVar20 = (byte *)piVar24[7];
            pbVar13 = *(byte **)(pbVar20 + 8);
            if ((*pbVar20 & 1) == 0) {
              pbVar13 = pbVar20 + 1;
            }
            uVar4 = imp_atoi(pbVar13);
            FUN_7160f170(piVar5,uVar4);
            goto LAB_715e79e0;
          }
        }
        pcVar11 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e10);
        if (*pcVar11 == '\0') {
          puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e00);
          *(undefined1 *)((int)puVar16 + 0xb) = 1;
          *puVar16 = 0xc049ce07;
          puVar16[1] = 0x77c600a;
          *(undefined4 *)((int)puVar16 + 7) = 0x2bdb1a07;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_715ea1c8,puVar16,&DAT_70b0e000);
          puVar17 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e10);
          *puVar17 = 1;
        }
        if (pbVar10[0xb] != 0) {
          *pbVar10 = *pbVar10 ^ 0x75;
          pbVar10[1] = pbVar10[1] ^ 0xa9;
          pbVar10[2] = pbVar10[2] ^ 0x2b;
          pbVar10[3] = pbVar10[3] ^ 0xa1;
          pbVar10[0xb] = 0;
          pbVar10[4] = pbVar10[4] ^ 0x55;
          pbVar10[5] = pbVar10[5] ^ 3;
          pbVar10[6] = pbVar10[6] ^ 0x13;
          pbVar10[7] = pbVar10[7] ^ 0x6b;
          pbVar10[8] = pbVar10[8] ^ 0x75;
          pbVar10[9] = pbVar10[9] ^ 0xa9;
          pbVar10[10] = pbVar10[10] ^ 0x2b;
        }
        uVar12 = imp_strlen(pbVar10);
        bVar1 = *(byte *)(piVar24 + 4);
        uVar19 = piVar24[5];
        if ((bVar1 & 1) == 0) {
          uVar19 = (uint)(bVar1 >> 1);
        }
        if (uVar12 == uVar19) {
          if (uVar12 == 0xffffffff) {
LAB_715e7b20:
                    /* WARNING: Subroutine does not return */
            FUN_712f6b48(piVar24 + 4);
          }
          iVar21 = piVar24[6];
          if ((bVar1 & 1) == 0) {
            iVar21 = (int)piVar24 + 0x11;
          }
          iVar21 = imp_memcmp(iVar21,pbVar10);
          if (iVar21 == 0) {
            pbVar20 = (byte *)piVar24[7];
            pbVar13 = *(byte **)(pbVar20 + 8);
            if ((*pbVar20 & 1) == 0) {
              pbVar13 = pbVar20 + 1;
            }
            uVar23 = imp_atoi(pbVar13);
            FUN_71358f50(&uStack_58,uVar23);
            iVar6 = piVar24[7];
            iVar21 = *(int *)(iVar6 + 0x14);
            if ((*(byte *)(iVar6 + 0xc) & 1) == 0) {
              iVar21 = iVar6 + 0xd;
            }
            uVar23 = imp_atoi(iVar21);
            FUN_71358f50(abStack_a0,uVar23);
            FUN_715fafc4(piVar5,&uStack_58,abStack_a0);
          }
        }
      }
LAB_715e79e0:
      piVar3 = (int *)piVar24[1];
      piVar25 = piVar24;
      if ((int *)piVar24[1] == (int *)0x0) {
        do {
          piVar24 = (int *)piVar25[2];
          bVar26 = (int *)*piVar24 != piVar25;
          piVar25 = piVar24;
        } while (bVar26);
      }
      else {
        do {
          piVar24 = piVar3;
          piVar3 = (int *)*piVar24;
        } while ((int *)*piVar24 != (int *)0x0);
      }
    } while (piVar24 != piVar22);
  }
  *(int *)(param_1[3] + 0x60) = iStack_b0;
  iVar6 = param_1[3];
  iVar21 = 0;
  if (iVar6 != 0) {
    iVar7 = *(int *)(iVar6 + 100);
    if (iVar7 != 0) {
      if ((*(int *)(iVar7 + 0xc) == *(int *)(iStack_b0 + 0xc)) &&
         (iVar21 = iVar6, *(int *)(iVar7 + 0x10) == *(int *)(iStack_b0 + 0x10))) goto LAB_715e7128;
      FUN_7143b8c0();
    }
    uVar23 = FUN_7143b470(*(undefined4 *)(iStack_b0 + 0xc),*(undefined4 *)(iStack_b0 + 0x10),0,1);
    *(undefined4 *)(iVar6 + 100) = uVar23;
    iVar21 = param_1[3];
  }
LAB_715e7128:
  FUN_7148e65c(iVar21);
  FUN_71420f90(param_1[3],&uStack_5c,3);
  FUN_7141f27c(param_1[3]);
  puVar2 = DAT_70ffc978;
  FUN_71411e14(*DAT_70ffc978,param_1[4]);
  FUN_71413b60(6,1);
  FUN_71413b60(8,1);
  FUN_71413b60(7,0);
  FUN_71413b60(0x1e,0);
  FUN_71413b60(0xe,0);
  FUN_7140e03c();
  FUN_71413b60(0x14,2);
  (**(code **)(*piVar5 + 8))(piVar5);
  FUN_7156080c(piVar5);
  puVar16 = DAT_70b46448;
  FUN_7139a77c(*DAT_70b46448);
  FUN_7141f690(param_1[3]);
  FUN_71412244(*puVar2,param_1[4]);
  (**(code **)(*piVar5 + 0xc))(piVar5);
  (**(code **)(*piVar5 + 4))(piVar5);
  *(undefined1 *)(param_1 + 8) = 0;
  DAT_710eaf34 = 0;
  if (DAT_700c5d9c != '\0') {
    FUN_7139a77c(*puVar16);
  }
LAB_715e7234:
  if (_ext___stack_chk_guard != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail(iStack_2c);
  }
  return;
}


// =========================================================================
// Function: FUN_715e8978
// Entry: 0x715e8978 | Size: 36 bytes
// =========================================================================

int * FUN_715e8978(uint param_1,uint param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 param_5,int *param_6,int param_7,undefined4 param_8)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
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
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  
  DAT_710eaf34 = 1;
  uStack_38 = param_3;
  piVar4 = (int *)thunk_MwhHq(0x118);
  FUN_7136cdfc(&uStack_44);
  uVar19 = param_2;
  if ((param_2 & 0xfffffffe) == 0xde0) {
    uVar19 = 0x48c7;
  }
  if (param_2 == 0xc2e) {
    uVar19 = 0x48c7;
  }
  if (param_2 == 0x55d) {
    uVar19 = 0x48c7;
  }
  FUN_715b6bc4(piVar4,uVar19,0,0,0,uStack_44,uStack_40,uStack_3c,0x47435000);
  if (param_6 == (int *)0x0) {
    iVar22 = FUN_7143b470(0x100,0xff,0x20,0x10505);
    param_6 = (int *)FUN_7143cf50();
  }
  else {
    iVar22 = *param_6;
  }
  if (param_6 == (int *)0x0 || iVar22 == 0) {
    DAT_710eaf34 = 0;
    return (int *)0x0;
  }
  uVar5 = FUN_71ba21e8(param_5,0xc0100000);
  uVar18 = 0x42483333;
  if (uVar19 == 0xa2) {
    uVar18 = 0x4248999a;
  }
  FUN_715601e8(piVar4,0,uVar5,uVar18);
  FUN_71560364(piVar4,0);
  thunk_FUN_71560790(piVar4,0);
  thunk_FUN_715600f0(piVar4,&uStack_84);
  uVar5 = *param_4;
  iVar6 = FUN_71ba2cf0(uVar5,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_84,&DAT_700c3058,uVar5,1);
  }
  uVar5 = param_4[1];
  iVar6 = FUN_71ba2cf0(uVar5,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_84,&DAT_700c3064,uVar5,1);
  }
  uVar5 = param_4[2];
  bVar1 = false;
  iVar6 = FUN_71ba2cf0(uVar5,0);
  if (iVar6 == 0) {
    FUN_7141c000(&uStack_84,&DAT_700c3070,uVar5,1);
  }
  FUN_71560458(piVar4,uStack_84,uStack_80,uStack_7c,uStack_78,uStack_74,uStack_70,uStack_6c,
               uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,
               uStack_48);
  iVar6 = *(int *)(param_1 + 0x14);
  uStack_c8 = *(undefined4 *)(iVar6 + 0x10);
  uStack_c4 = *(undefined4 *)(iVar6 + 0x14);
  uStack_c0 = *(undefined4 *)(iVar6 + 0x18);
  uStack_bc = *(undefined4 *)(iVar6 + 0x1c);
  uStack_b8 = *(undefined4 *)(iVar6 + 0x20);
  uStack_b4 = *(undefined4 *)(iVar6 + 0x24);
  uStack_b0 = *(undefined4 *)(iVar6 + 0x28);
  uStack_ac = *(undefined4 *)(iVar6 + 0x2c);
  uStack_a8 = *(undefined4 *)(iVar6 + 0x30);
  uStack_a4 = *(undefined4 *)(iVar6 + 0x34);
  uStack_a0 = *(undefined4 *)(iVar6 + 0x38);
  uStack_9c = *(undefined4 *)(iVar6 + 0x3c);
  uStack_98 = *(undefined4 *)(iVar6 + 0x40);
  uStack_94 = *(undefined4 *)(iVar6 + 0x44);
  uStack_90 = *(undefined4 *)(iVar6 + 0x48);
  uStack_8c = *(undefined4 *)(iVar6 + 0x4c);
  iVar6 = *(int *)(param_1 + 0xc);
  piVar7 = (int *)0x0;
  if (param_7 != 0) {
    piVar7 = (int *)piVar4[1];
  }
  uVar5 = *(undefined4 *)(iVar6 + 0x68);
  uVar18 = *(undefined4 *)(iVar6 + 0x6c);
  uStack_d0 = uVar5;
  uStack_cc = uVar18;
  if (param_7 != 0 && piVar7 != (int *)0x0) {
    if (piVar7[6] == 0) {
      (**(code **)(*piVar7 + 0x20))();
    }
    FUN_71560398(piVar4);
    bVar1 = false;
    uStack_2c = 0;
    puStack_30 = (undefined4 *)0x0;
    pcVar9 = *(char **)(piVar4[1] + 0x18);
    puStack_34 = (undefined4 *)0x0;
    if (pcVar9 != (char *)0x0) {
      if (*pcVar9 == '\x01') {
        FUN_715ea1f4(pcVar9,&puStack_34);
      }
      else if (*pcVar9 == '\x02') {
        FUN_71422cb0(pcVar9,FUN_715ea1f4,&puStack_34);
      }
    }
    puVar2 = puStack_30;
    puVar3 = puStack_34;
    uVar20 = uVar5;
    uVar19 = param_1;
    uVar10 = uStack_84;
    uVar23 = uStack_80;
    if (puStack_34 != puStack_30) {
      uVar20 = *puStack_34;
      uVar25 = puStack_34[1];
      uVar23 = puStack_34[2];
      puVar21 = puStack_34;
      uStack_dc = uVar23;
      uStack_d8 = uVar20;
      uStack_d4 = uVar25;
      do {
        uVar28 = *puVar21;
        uVar26 = puVar21[3];
        uVar24 = puVar21[1];
        uVar27 = puVar21[2];
        uVar10 = FUN_71ba240c(uVar28,uVar26);
        iVar6 = FUN_71ba2d10(uVar10,uVar20);
        uVar11 = FUN_71ba240c(uVar24,uVar26);
        iVar8 = FUN_71ba2d10(uVar11,uVar25);
        uVar12 = FUN_71ba240c(uVar27,uVar26);
        iVar13 = FUN_71ba2d10(uVar12,uStack_dc);
        uVar28 = FUN_71ba0b38(uVar28,uVar26);
        iVar14 = FUN_71ba2d10(uStack_d8,uVar28);
        uVar24 = FUN_71ba0b38(uVar26,uVar24);
        iVar15 = FUN_71ba2d10(uStack_d4,uVar24);
        uVar26 = FUN_71ba0b38(uVar26,uVar27);
        iVar16 = FUN_71ba2d10(uVar23,uVar26);
        if (iVar16 != 0) {
          uVar23 = uVar26;
        }
        puVar21 = puVar21 + 4;
        if (iVar15 != 0) {
          uStack_d4 = uVar24;
        }
        if (iVar14 != 0) {
          uStack_d8 = uVar28;
        }
        if (iVar13 != 0) {
          uStack_dc = uVar12;
        }
        if (iVar8 != 0) {
          uVar25 = uVar11;
        }
        if (iVar6 != 0) {
          uVar20 = uVar10;
        }
      } while (puVar21 != puVar2);
      uVar20 = FUN_71ba0b38(uStack_d8,uVar20);
      uVar10 = FUN_71ba21e8(uVar20,0x3f000000);
      uVar20 = FUN_71ba0b38(uStack_d4,uVar25);
      uVar20 = FUN_71ba21e8(uVar20,0x3f000000);
      uVar23 = FUN_71ba0b38(uVar23,uStack_dc);
      uVar23 = FUN_71ba21e8(uVar23,0x3f000000);
      uVar19 = 0;
      puVar21 = puVar3;
      do {
        uVar11 = puVar21[1];
        uVar12 = puVar21[2];
        uVar28 = puVar21[3];
        uVar25 = FUN_71ba240c(*puVar21,uVar10);
        uVar11 = FUN_71ba240c(uVar11,uVar20);
        uVar12 = FUN_71ba240c(uVar12,uVar23);
        uVar11 = FUN_71ba21e8(uVar11,uVar11);
        uVar25 = FUN_71ba21e8(uVar25,uVar25);
        uVar25 = FUN_71ba0b38(uVar25,uVar11);
        uVar11 = FUN_71ba21e8(uVar12,uVar12);
        FUN_71ba0b38(uVar11,uVar25);
        uVar25 = imp_sqrtf();
        uVar17 = FUN_71ba0b38(uVar28,uVar25);
        iVar6 = FUN_71ba2d10(uVar19,uVar17);
        puVar21 = puVar21 + 4;
        if (iVar6 != 0) {
          uVar19 = uVar17;
        }
      } while (puVar21 != puVar2);
      bVar1 = uVar19 - 1 < 0x7fffff ||
              (uVar19 & 0x7fffffff) - 0x800000 < 0x7f000000 && uVar19 < 0x80000000;
    }
    if (puVar3 != (undefined4 *)0x0) {
      puStack_30 = puVar3;
      thunk_qNQrlu();
    }
    iVar6 = *(int *)(param_1 + 0xc);
    if (bVar1) {
      iVar8 = FUN_71ba2d10(uVar18,uVar5);
      uVar25 = uVar5;
      if (iVar8 != 0) {
        uVar25 = uVar18;
      }
      iVar8 = FUN_71ba2d70(uVar25,0x3c23d70a);
      if (iVar8 == 0) {
        uVar25 = 0x3c23d70a;
      }
      uVar25 = FUN_71ba21e8(uVar25,uVar25);
      uVar25 = FUN_71ba13e0(0x3f800000,uVar25);
      FUN_71ba0b38(uVar25,0x3f800000);
      uVar25 = imp_sqrtf();
      uVar25 = FUN_71ba21e8(uVar19,uVar25);
      uVar11 = FUN_71ba21e8(uVar25,0x3f8ccccd);
      uVar25 = FUN_71ba0b38(uVar19,*(undefined4 *)(iVar6 + 0x80));
      uVar25 = FUN_71ba0b38(uVar25,0x3c23d70a);
      iVar6 = FUN_71ba2d10(uVar25,uVar11);
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar6 != 0) {
        uVar25 = uVar11;
      }
      uVar12 = *(undefined4 *)(iVar8 + 0x30);
      uVar28 = *(undefined4 *)(iVar8 + 0x34);
      uVar11 = FUN_71ba21e8(*(undefined4 *)(iVar8 + 0x38),uVar25);
      uVar23 = FUN_71ba240c(uVar23,uVar11);
      *(undefined4 *)(iVar8 + 0x48) = uVar23;
      uVar23 = FUN_71ba21e8(uVar28,uVar25);
      uVar20 = FUN_71ba240c(uVar20,uVar23);
      *(undefined4 *)(iVar8 + 0x44) = uVar20;
      uVar20 = FUN_71ba21e8(uVar12,uVar25);
      uVar20 = FUN_71ba240c(uVar10,uVar20);
      *(undefined4 *)(iVar8 + 0x40) = uVar20;
      FUN_7141bbe4(iVar8 + 0x10);
      FUN_7141b7c0(iVar8);
      puStack_30 = (undefined4 *)FUN_71ba13e0(uVar18,param_8);
      puStack_34 = (undefined4 *)FUN_71ba13e0(uVar5,param_8);
      FUN_71420728(*(undefined4 *)(param_1 + 0xc),&puStack_34);
      iVar6 = *(int *)(param_1 + 0xc);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  *(int *)(iVar6 + 0x60) = iVar22;
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar8 = *(int *)(iVar6 + 100);
    if (iVar8 != 0) {
      if ((*(int *)(iVar8 + 0xc) == *(int *)(iVar22 + 0xc)) &&
         (*(int *)(iVar8 + 0x10) == *(int *)(iVar22 + 0x10))) goto LAB_715e8cac;
      FUN_7143b8c0();
    }
    uVar5 = FUN_7143b470(*(undefined4 *)(iVar22 + 0xc),*(undefined4 *)(iVar22 + 0x10),0,1);
    *(undefined4 *)(iVar6 + 100) = uVar5;
    iVar6 = *(int *)(param_1 + 0xc);
  }
LAB_715e8cac:
  FUN_7148e65c(iVar6);
  FUN_71420f90(*(undefined4 *)(param_1 + 0xc),&uStack_38,3);
  FUN_7141f27c(*(undefined4 *)(param_1 + 0xc));
  puVar3 = DAT_70ffc978;
  FUN_71411e14(*DAT_70ffc978,*(undefined4 *)(param_1 + 0x10));
  FUN_71413b60(6,1);
  FUN_71413b60(8,1);
  FUN_71413b60(7,0);
  FUN_71413b60(0x1e,0);
  FUN_71413b60(0x14,0);
  FUN_71413b60(0xe,0);
  FUN_7140e03c();
  piVar7 = (int *)piVar4[1];
  if ((piVar7 != (int *)0x0) && (piVar7[6] == 0)) {
    (**(code **)(*piVar7 + 0x20))();
  }
  (**(code **)(*piVar4 + 8))(piVar4);
  FUN_7156080c(piVar4);
  puVar2 = DAT_70b46448;
  FUN_7139a77c(*DAT_70b46448);
  FUN_7141f690(*(undefined4 *)(param_1 + 0xc));
  FUN_71412244(*puVar3,*(undefined4 *)(param_1 + 0x10));
  if (bVar1) {
    FUN_71420728(*(undefined4 *)(param_1 + 0xc),&uStack_d0);
    iVar22 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar22 + 0x10) = uStack_c8;
    *(undefined4 *)(iVar22 + 0x14) = uStack_c4;
    *(undefined4 *)(iVar22 + 0x18) = uStack_c0;
    *(undefined4 *)(iVar22 + 0x1c) = uStack_bc;
    *(undefined4 *)(iVar22 + 0x20) = uStack_b8;
    *(undefined4 *)(iVar22 + 0x24) = uStack_b4;
    *(undefined4 *)(iVar22 + 0x28) = uStack_b0;
    *(undefined4 *)(iVar22 + 0x2c) = uStack_ac;
    *(undefined4 *)(iVar22 + 0x30) = uStack_a8;
    *(undefined4 *)(iVar22 + 0x34) = uStack_a4;
    *(undefined4 *)(iVar22 + 0x38) = uStack_a0;
    *(undefined4 *)(iVar22 + 0x3c) = uStack_9c;
    *(undefined4 *)(iVar22 + 0x40) = uStack_98;
    *(undefined4 *)(iVar22 + 0x44) = uStack_94;
    *(undefined4 *)(iVar22 + 0x48) = uStack_90;
    *(undefined4 *)(iVar22 + 0x4c) = uStack_8c;
    FUN_7141bbe4(*(int *)(param_1 + 0x14) + 0x10);
    FUN_7141b7c0(*(undefined4 *)(param_1 + 0x14));
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  (**(code **)(*piVar4 + 4))(piVar4);
  DAT_710eaf34 = 0;
  if (DAT_700c5d9c != '\0') {
    FUN_7139a77c(*puVar2);
  }
  return param_6;
}


// =========================================================================
// Function: FUN_715e9e6c
// Entry: 0x715e9e6c | Size: 4 bytes
// =========================================================================

void FUN_715e9e6c(void)

{
  return;
}


// =========================================================================
// Function: FUN_715e9e88
// Entry: 0x715e9e88 | Size: 72 bytes
// =========================================================================

void FUN_715e9e88(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1] - *param_1 >> 2;
  uVar2 = iVar1 * -0x55555555;
  if (param_2 <= uVar2) {
    if (param_2 < uVar2) {
      param_1[1] = *param_1 + param_2 * 0xc;
    }
    return;
  }
  FUN_715ea3b8(param_1,param_2 + iVar1 * 0x55555555);
  return;
}


// =========================================================================
// Function: FUN_715e9f04
// Entry: 0x715e9f04 | Size: 292 bytes
// =========================================================================

void FUN_715e9f04(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    uVar4 = param_2[1];
    puVar6 = puVar3 + 3;
    uVar2 = param_2[2];
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar2;
  }
  else {
    iVar8 = *param_1;
    iVar7 = (int)puVar3 - iVar8;
    uVar5 = (iVar7 >> 2) * -0x55555555 + 1;
    if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_7159d9b0(param_1);
    }
    iVar1 = param_1[2] - iVar8 >> 2;
    if (uVar5 < (uint)(iVar1 * 0x55555556)) {
      uVar5 = iVar1 * 0x55555556;
    }
    if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
      uVar5 = 0x15555555;
    }
    if (uVar5 == 0) {
      iVar1 = 0;
    }
    else {
      if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar1 = thunk_MwhHq(uVar5 * 0xc);
    }
    uVar4 = param_2[1];
    uVar2 = param_2[2];
    puVar3 = (undefined4 *)(iVar1 + (iVar7 >> 2) * 4);
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar2;
    imp___aeabi_memcpy4((int)puVar3 - iVar7,iVar8,iVar7);
    puVar6 = puVar3 + 3;
    *param_1 = (int)puVar3 - iVar7;
    param_1[1] = (int)puVar6;
    param_1[2] = iVar1 + uVar5 * 0xc;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  param_1[1] = (int)puVar6;
  return;
}


// =========================================================================
// Function: FUN_715ea0e8
// Entry: 0x715ea0e8 | Size: 20 bytes
// =========================================================================

void FUN_715ea0e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_715ea1f4
// Entry: 0x715ea1f4 | Size: 260 bytes
// =========================================================================

int FUN_715ea1f4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(byte *)(param_1 + 2) & 4) != 0) {
    FUN_715e28c8(&uStack_38,param_1,0);
    puVar3 = (undefined4 *)param_2[1];
    if (puVar3 < (undefined4 *)param_2[2]) {
      puVar7 = puVar3 + 4;
      *puVar3 = uStack_38;
      puVar3[1] = uStack_34;
      puVar3[2] = uStack_30;
      puVar3[3] = uStack_2c;
    }
    else {
      iVar8 = *param_2;
      iVar1 = (int)puVar3 - iVar8 >> 4;
      uVar6 = iVar1 + 1;
      if (0xfffffff < uVar6) {
        FUN_7159da18(param_2);
LAB_715ea2f4:
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      uVar4 = param_2[2] - iVar8;
      uVar2 = (int)uVar4 >> 3;
      if (uVar6 < uVar2) {
        uVar6 = uVar2;
      }
      if (0x7fffffef < uVar4) {
        uVar6 = 0xfffffff;
      }
      if (uVar6 == 0) {
        iVar5 = 0;
      }
      else {
        if (0xfffffff < uVar6) goto LAB_715ea2f4;
        iVar5 = thunk_MwhHq(uVar6 << 4);
      }
      puVar7 = (undefined4 *)(iVar5 + iVar1 * 0x10);
      *puVar7 = uStack_38;
      puVar7[1] = uStack_34;
      puVar7[2] = uStack_30;
      puVar7[3] = uStack_2c;
      imp___aeabi_memcpy4(iVar5,iVar8,(int)puVar3 - iVar8);
      puVar7 = puVar7 + 4;
      *param_2 = iVar5;
      param_2[1] = (int)puVar7;
      param_2[2] = iVar5 + uVar6 * 0x10;
      if (iVar8 != 0) {
        thunk_qNQrlu(iVar8);
      }
    }
    param_2[1] = (int)puVar7;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715ea3b8
// Entry: 0x715ea3b8 | Size: 380 bytes
// =========================================================================

void FUN_715ea3b8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  if (param_2 <= (uint)((param_1[2] - iVar2 >> 2) * -0x55555555)) {
    if (param_2 != 0) {
      iVar3 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      imp___aeabi_memclr4(iVar2,iVar3);
      iVar2 = iVar2 + iVar3;
    }
    param_1[1] = iVar2;
    return;
  }
  iVar6 = *param_1;
  iVar3 = iVar2 - iVar6 >> 2;
  uVar5 = iVar3 * -0x55555555 + param_2;
  if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_7159d9b0(param_1);
  }
  iVar1 = param_1[2] - iVar6 >> 2;
  if (uVar5 < (uint)(iVar1 * 0x55555556)) {
    uVar5 = iVar1 * 0x55555556;
  }
  if (0xaaaaaa9 < (uint)(iVar1 * -0x55555555)) {
    uVar5 = 0x15555555;
  }
  if (uVar5 == 0) {
    iVar1 = 0;
  }
  else {
    if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6cf0();
    }
    iVar1 = thunk_MwhHq(uVar5 * 0xc);
  }
  iVar3 = iVar1 + iVar3 * 4;
  iVar4 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
  imp___aeabi_memclr4(iVar3,iVar4);
  iVar2 = iVar3 - (iVar2 - iVar6);
  imp___aeabi_memcpy4(iVar2,iVar6);
  *param_1 = iVar2;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar1 + uVar5 * 0xc;
  if (iVar6 != 0) {
    thunk_qNQrlu(iVar6);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_715ea610
// Entry: 0x715ea610 | Size: 72 bytes
// =========================================================================

int FUN_715ea610(int param_1,byte *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  FUN_7136cdfc(param_1 + 0x36f);
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  imp___aeabi_memclr4(param_1 + 0x328,0x5d);
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 5);
  uVar2 = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  *(byte *)(param_1 + 0x335) = (byte)(((uint)*param_2 << 0x1c) >> 0x1f);
  *(byte *)(param_1 + 0x336) = *param_2 & 1;
  *(undefined4 *)(param_1 + 0x337) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x33b) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x33f) = *(undefined4 *)(param_2 + 0x15);
  *(byte *)(param_1 + 0x343) = (byte)(((uint)*param_2 << 0x1b) >> 0x1f);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x1b);
  *(byte *)(param_1 + 0x348) = param_2[0x19];
  *(byte *)(param_1 + 0x349) = param_2[0x1a];
  *(byte *)(param_1 + 0x34a) = (byte)(((uint)*param_2 << 0x1e) >> 0x1f);
  *(byte *)(param_1 + 0x34b) = (byte)(((uint)*param_2 << 0x1d) >> 0x1f);
  *(uint *)(param_1 + 0x34c) = (uint)param_2[0x1f];
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x21);
  uVar2 = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x354) = uVar2;
  *(byte *)(param_1 + 0x36c) = param_2[0x20];
  *(undefined2 *)(param_1 + 0x36d) = *(undefined2 *)(param_2 + 0x29);
  *(undefined4 *)(param_1 + 0x36f) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x373) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0x377) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x37b) = *(undefined4 *)(param_2 + 0x37);
  *(undefined2 *)(param_1 + 0x37f) = *(undefined2 *)(param_2 + 0x3b);
  uVar1 = *(undefined2 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 900) = 0;
  *(undefined2 *)(param_1 + 0x381) = uVar1;
  imp___aeabi_memclr4(param_1,800);
  imp_strncpy(param_1,param_3,800);
  *(undefined1 *)(param_1 + 800) = 0;
  FUN_715ea944();
  FUN_715ea944(param_1);
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 899) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x398) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_715ea884
// Entry: 0x715ea884 | Size: 24 bytes
// =========================================================================

void FUN_715ea884(int param_1,undefined4 param_2)

{
  imp___aeabi_memclr4(param_1,800);
  imp_strncpy(param_1,param_2,800);
  *(undefined1 *)(param_1 + 800) = 0;
  FUN_715ea944(param_1);
  return;
}


// =========================================================================
// Function: FUN_715ea944
// Entry: 0x715ea944 | Size: 708 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_715ea944(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined1 auStack_a8 [72];
  undefined1 auStack_60 [68];
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  if (*(int *)(param_1 + 0x34c) == 4) {
    piVar9 = *(int **)(param_1 + 0x324);
    if (piVar9 != (int *)0x0) {
      if (*piVar9 != 0) {
        FUN_7143d364();
      }
      thunk_qNQrlu(piVar9);
    }
    puVar1 = (undefined4 *)thunk_MwhHq(4);
    *(undefined4 **)(param_1 + 0x324) = puVar1;
    *puVar1 = 0;
    *(int *)(param_1 + 0x3a4) = DAT_700c5e20;
    DAT_700c5e20 = DAT_700c5e20 + 1;
    imp___aeabi_memclr8(auStack_60,0x41);
    imp___aeabi_memclr8(auStack_a8,0x41);
    iVar2 = imp___strchr_chk(param_1,0x3a,0x321);
    if ((((iVar2 != 0) && (uVar3 = imp_strlen(param_1), uVar3 < 0x40)) &&
        (iVar4 = imp___strchr_chk(param_1,0x5c,0x321), iVar4 == 0)) &&
       (iVar4 = imp___strchr_chk(param_1,0x2f,0x321), iVar4 == 0)) {
      imp___strncpy_chk2(auStack_60,param_1,iVar2 - param_1,0x41,0x321);
      imp___strcpy_chk(auStack_a8,iVar2 + 1,0x41);
      pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e74);
      if (*pcVar5 == '\0') {
        puVar1 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e64);
        *puVar1 = 0xcb276578;
        puVar1[1] = 0xcf951a20;
        *(undefined1 *)(puVar1 + 2) = 1;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_715ec0b4,puVar1,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e74);
        *puVar8 = 1;
      }
      pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c5e64);
      if (pbVar6[8] != 0) {
        pbVar6[8] = 0;
        *pbVar6 = *pbVar6 ^ 0x19;
        pbVar6[1] = pbVar6[1] ^ 0xb;
        pbVar6[2] = pbVar6[2] ^ 0x43;
        pbVar6[3] = pbVar6[3] ^ 0xb9;
        pbVar6[4] = pbVar6[4] ^ 0x4f;
        pbVar6[5] = pbVar6[5] ^ 0x73;
        pbVar6[6] = pbVar6[6] ^ 0xf1;
        pbVar6[7] = pbVar6[7] ^ 0xcf;
      }
      iVar2 = imp_strcmp(auStack_60);
      if (iVar2 != 0) {
        piVar9 = *(int **)(param_1 + 0x324);
        iVar2 = FUN_715ec410(auStack_60,auStack_a8,1);
        if (*piVar9 != 0) {
          FUN_7143d364();
        }
        *piVar9 = iVar2;
        *(int *)(iVar2 + 0x54) = *(int *)(iVar2 + 0x54) + 1;
        if (**(int **)(param_1 + 0x324) != 0) {
          if (DAT_711f6d58 != 0) {
            param_1 = *(int *)(DAT_711f6d58 + 0x1c);
          }
          if (DAT_711f6d58 != 0 && param_1 != 0) {
            uVar7 = FUN_71886108();
            *(undefined4 *)(param_1 + 0x3c0c) = uVar7;
          }
        }
      }
    }
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_715eafd4
// Entry: 0x715eafd4 | Size: 20 bytes
// =========================================================================

int FUN_715eafd4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x324);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_7143d364();
    }
    thunk_qNQrlu(piVar1);
    *(undefined4 *)(param_1 + 0x324) = 0;
  }
  return param_1;
}


// =========================================================================
// Function: thunk_FUN_715eb08c
// Entry: 0x715eb078 | Size: 12 bytes
// =========================================================================

void thunk_FUN_715eb08c(void)

{
  FUN_715eb08c();
  return;
}


// =========================================================================
// Function: FUN_715eb08c
// Entry: 0x715eb08c | Size: 1216 bytes
// =========================================================================

void FUN_715eb08c(char *param_1)

{
  undefined1 uVar1;
  int **ppiVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piStack_28;
  
  if (DAT_711a3bb4 != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x34c) & 0xfffffffe) == 4) {
    uVar11 = *(undefined4 *)(DAT_70ffc974 + 8);
    uVar3 = FUN_71ba1b94(*(undefined4 *)(DAT_70ffc974 + 4));
    uVar3 = FUN_71ba21e8(uVar3,0x3acccccd);
    uVar8 = *(undefined4 *)(param_1 + 0x350);
    uVar4 = FUN_71ba21e8(uVar8,uVar3);
    uVar11 = FUN_71ba1b94(uVar11);
    uVar11 = FUN_71ba21e8(uVar11,0x3b124925);
    *(undefined4 *)(param_1 + 0x388) = uVar4;
    uVar13 = *(undefined4 *)(param_1 + 0x354);
    piStack_28 = *(int **)(param_1 + 0x324);
    uVar10 = *(undefined4 *)(param_1 + 0x337);
    uVar14 = *(undefined4 *)(param_1 + 0x33b);
    uVar4 = FUN_71ba21e8(uVar11,uVar13);
    *(undefined4 *)(param_1 + 0x394) = uVar4;
    uVar4 = FUN_71ba0b38(uVar8,uVar10);
    uVar3 = FUN_71ba21e8(uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x390) = uVar3;
    uVar3 = FUN_71ba0b38(uVar13,uVar14);
    uVar3 = FUN_71ba21e8(uVar11,uVar3);
    *(undefined4 *)(param_1 + 0x38c) = uVar3;
    iVar5 = 0;
    if (piStack_28 != (int *)0x0) {
      iVar5 = *piStack_28;
    }
    if (piStack_28 == (int *)0x0 || iVar5 == 0) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x330);
    puVar7 = &DAT_700c5e44;
    if (*(int *)(param_1 + 0x34c) == 5) {
      puVar7 = &DAT_700c5e24;
    }
    uVar12 = *(uint *)(param_1 + 0x39c);
    if (param_1[0x398] != '\0') {
      uVar6 = (uVar12 >> 8 & 0xff) << 0x10 | 0xff000000 | (uVar12 >> 0x10 & 0xff) << 8 |
              uVar12 >> 0x18;
    }
    FUN_715ef240(iVar5,param_1 + 0x388,uVar6,puVar7);
    return;
  }
  if (*param_1 != '\0') {
    uVar13 = *(undefined4 *)(DAT_70ffc974 + 8);
    uVar3 = *(undefined4 *)(DAT_70ffc974 + 4);
    uVar4 = FUN_71ba1b94();
    uVar11 = FUN_71ba21e8(uVar4,0x3acccccd);
    uVar10 = *(undefined4 *)(param_1 + 0x32c);
    uVar8 = FUN_71ba21e8(uVar11,*(undefined4 *)(param_1 + 0x328));
    iVar5 = DAT_70ffd1e4;
    *(undefined4 *)(DAT_70ffd1e4 + 4) = uVar8;
    uVar8 = FUN_71ba1b94(uVar13);
    uVar8 = FUN_71ba21e8(uVar8,0x3b124925);
    uVar10 = FUN_71ba21e8(uVar10);
    uVar10 = FUN_71ba21e8(uVar10,0x3f000000);
    *(undefined4 *)(iVar5 + 8) = uVar10;
    if (param_1[0x398] == '\0') {
      ppiVar2 = (int **)(param_1 + 0x330);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x39c);
      piStack_28 = (int *)((uVar6 >> 8 & 0xff) << 0x10 | 0xff000000 | (uVar6 >> 0x10 & 0xff) << 8 |
                          uVar6 >> 0x18);
      ppiVar2 = &piStack_28;
    }
    FUN_71448394(ppiVar2);
    FUN_714494b8(0);
    uVar1 = 2;
    if (param_1[0x34b] == '\0') {
      uVar1 = param_1[0x335] == '\0';
    }
    FUN_714498d4(uVar1);
    uVar10 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x337),uVar4);
    uVar10 = FUN_71ba21e8(uVar10,0x3acccccd);
    FUN_71449cf0();
    uVar4 = FUN_71ba21e8(*(undefined4 *)(param_1 + 0x33b),uVar4);
    uVar4 = FUN_71ba21e8(uVar4,0x3acccccd);
    FUN_7144a10c();
    FUN_7144a51c(param_1[0x336],0);
    FUN_714487f8(param_1 + 0x33f);
    FUN_7144a954(param_1[0x343]);
    FUN_71448c58(param_1 + 0x344);
    if (param_1[0x349] == '\0') {
      FUN_7144b188((int)param_1[0x348]);
    }
    else {
      FUN_7144ad78();
    }
    FUN_7144b5a4(param_1[0x34c]);
    uVar14 = *(undefined4 *)(param_1 + 0x350);
    uVar9 = *(undefined4 *)(param_1 + 0x354);
    FUN_7144c210(param_1,DAT_711acb98);
    uVar15 = FUN_71ba1b10(uVar13);
    uVar16 = FUN_71ba1638(uVar9);
    uVar16 = FUN_71ba23ec(0,0x407c0000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar17 = FUN_71ba1638(uVar8);
    uVar16 = FUN_71ba1ea0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                          (int)((ulonglong)uVar17 >> 0x20));
    FUN_71ba23ec((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                 (int)((ulonglong)uVar16 >> 0x20));
    uVar8 = FUN_71ba242c();
    uVar15 = FUN_71ba1b10(uVar3);
    uVar16 = FUN_71ba1638(uVar14);
    uVar16 = FUN_71ba23ec(0,0x40840000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar17 = FUN_71ba1638(uVar11);
    uVar16 = FUN_71ba1ea0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                          (int)((ulonglong)uVar17 >> 0x20));
    FUN_71ba23ec((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                 (int)((ulonglong)uVar16 >> 0x20));
    uVar3 = FUN_71ba242c();
    FUN_7144b9b8(uVar3,uVar8,DAT_711acb98);
    FUN_714490bc();
    FUN_7144ad78(0);
    if (param_1[0x34b] == '\0') {
      if (param_1[0x335] == '\0') {
        *(undefined4 *)(param_1 + 0x388) = uVar3;
        uVar11 = FUN_71ba240c(uVar10,uVar3);
        uVar3 = FUN_71ba0b38(uVar11,uVar3);
      }
      else {
        uVar11 = FUN_71ba21e8(uVar4,0xbf000000);
        uVar3 = FUN_71ba0b38(uVar3,uVar11);
        *(undefined4 *)(param_1 + 0x388) = uVar3;
        uVar3 = FUN_71ba0b38(uVar4,uVar3);
        uVar4 = uVar10;
      }
    }
    else {
      uVar11 = FUN_71ba240c(uVar10,uVar3);
      uVar11 = FUN_71ba240c(uVar3,uVar11);
      *(undefined4 *)(param_1 + 0x388) = uVar11;
    }
    param_1[899] = '\x01';
    *(undefined4 *)(param_1 + 0x390) = uVar3;
    *(undefined4 *)(param_1 + 0x394) = uVar8;
    uVar3 = FUN_71ba0b38(uVar4,uVar8);
    *(undefined4 *)(param_1 + 0x38c) = uVar3;
  }
  return;
}


// =========================================================================
// Function: FUN_715ebd6c
// Entry: 0x715ebd6c | Size: 424 bytes
// =========================================================================

void FUN_715ebd6c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  if (*(int *)(param_1 + 0x34c) == 5) {
    piVar1 = *(int **)(param_1 + 0x324);
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
    }
    if (piVar1 == (int *)0x0 || iVar2 == 0) {
      puVar4 = (ushort *)(param_1 + 0x36d);
      DAT_710eaf34 = 1;
      iVar2 = FUN_715ec150(*puVar4);
      if (iVar2 == 0) {
        iVar2 = FUN_715ec200(*puVar4);
        if (iVar2 == 0) {
          uVar3 = (uint)*puVar4;
          if (*(int *)(DAT_70c39074 + uVar3 * 4) == 0) {
            uVar3 = 0x48c7;
            *puVar4 = 0x48c7;
          }
          iVar2 = FUN_715e8978(DAT_711acb94,uVar3,*(undefined4 *)(param_1 + 0x344),param_1 + 0x36f,
                               *(undefined4 *)(param_1 + 0x37b),0,0,0x3f800000);
        }
        else {
          iVar2 = FUN_715e6b28(DAT_711acb94,*puVar4,*(undefined4 *)(param_1 + 0x344),param_1 + 0x36f
                               ,*(undefined4 *)(param_1 + 0x37b),*(undefined2 *)(param_1 + 0x37f),
                               *(undefined2 *)(param_1 + 0x381),0,0,0,0);
        }
      }
      else {
        iVar2 = FUN_715e4bb4(DAT_711acb94,*puVar4,*(undefined4 *)(param_1 + 0x344),param_1 + 0x36f,
                             *(undefined4 *)(param_1 + 0x37b),0,0,0,0,0xffff);
      }
      DAT_710eaf34 = 0;
      if (iVar2 != 0) {
        piVar1 = *(int **)(param_1 + 0x324);
        if (piVar1 != (int *)0x0) {
          if (*piVar1 != 0) {
            FUN_7143d364();
          }
          thunk_qNQrlu(piVar1);
        }
        piVar1 = (int *)thunk_MwhHq(4);
        *(int **)(param_1 + 0x324) = piVar1;
        *piVar1 = iVar2;
      }
    }
  }
  return;
}


