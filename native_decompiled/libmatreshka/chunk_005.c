// =========================================================================
// Function: FUN_714e68a8
// Entry: 0x714e68a8 | Size: 964 bytes
// =========================================================================

char FUN_714e68a8(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  
  cVar2 = '\0';
  if (DAT_71132df0 != (undefined4 *)0x0) {
    if (DAT_71132df0 != DAT_71132dfc) {
      cVar2 = *(char *)(DAT_71132df0 + 10);
    }
    puVar6 = DAT_71132df0;
    if (DAT_71132df0 != DAT_71132dfc && cVar2 != '\0') {
      do {
        DAT_71132df0 = (undefined4 *)puVar6[0xb];
        switch(*puVar6) {
        case 0:
          puVar4 = (undefined4 *)thunk_MwhHq(0x24);
          *(undefined1 *)(puVar4 + 8) = 0;
          *puVar4 = puVar6[2];
          puVar4[1] = puVar6[3];
          puVar4[2] = puVar6[4];
          puVar4[3] = puVar6[5];
          puVar4[4] = puVar6[6];
          puVar4[5] = puVar6[7];
          puVar4[6] = puVar6[8];
          puVar4[7] = puVar6[9];
          puVar3 = &DAT_71132da0;
          if (DAT_71132da0 != (undefined4 *)0x0) {
            puVar7 = &DAT_71132da0;
            puVar3 = DAT_71132da0;
            do {
              puVar8 = puVar3;
              if ((int)puVar3[4] < (int)puVar6[1]) {
                puVar3 = puVar3 + 1;
                puVar8 = puVar7;
              }
              puVar7 = puVar8;
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
            puVar3 = &DAT_71132da0;
            if (((undefined4 **)puVar7 != &DAT_71132da0) &&
               (puVar3 = puVar7, (int)puVar6[1] < (int)puVar7[4])) {
              puVar3 = &DAT_71132da0;
            }
          }
          puVar7 = &DAT_71132da0;
          if ((undefined4 **)puVar3 != &DAT_71132da0) {
            if (puVar3[5] != 0) {
              thunk_qNQrlu();
            }
            puVar8 = puVar3;
            puVar1 = (undefined4 *)puVar3[1];
            if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
              do {
                puVar5 = (undefined4 *)puVar8[2];
                bVar10 = (undefined4 *)*puVar5 != puVar8;
                puVar8 = puVar5;
              } while (bVar10);
            }
            else {
              do {
                puVar5 = puVar1;
                puVar1 = (undefined4 *)*puVar5;
              } while ((undefined4 *)*puVar5 != (undefined4 *)0x0);
            }
            if (DAT_71132d9c == puVar3) {
              DAT_71132d9c = puVar5;
            }
            DAT_71132da4 = DAT_71132da4 + -1;
            FUN_71368054(DAT_71132da0,puVar3);
            thunk_qNQrlu(puVar3);
          }
          iVar9 = puVar6[1];
          puVar6 = DAT_71132da0;
          puVar3 = puVar7;
          if (DAT_71132da0 != (undefined4 *)0x0) {
            do {
              while (puVar7 = puVar6, iVar9 < (int)puVar7[4]) {
                puVar6 = (undefined4 *)*puVar7;
                puVar3 = puVar7;
                if ((undefined4 *)*puVar7 == (undefined4 *)0x0) goto LAB_714e6bb0;
              }
              if (iVar9 <= (int)puVar7[4]) goto LAB_714e6c08;
              puVar6 = (undefined4 *)puVar7[1];
            } while ((undefined4 *)puVar7[1] != (undefined4 *)0x0);
            puVar3 = puVar7 + 1;
          }
LAB_714e6bb0:
          puVar6 = (undefined4 *)thunk_MwhHq(0x18);
          puVar6[4] = iVar9;
          puVar6[5] = puVar4;
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = puVar7;
          *puVar3 = puVar6;
          if ((undefined4 *)*DAT_71132d9c != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)*puVar3;
            DAT_71132d9c = (undefined4 *)*DAT_71132d9c;
          }
          FUN_712f807c(DAT_71132da0,puVar6);
          DAT_71132da4 = DAT_71132da4 + 1;
LAB_714e6c08:
          DAT_71132d98 = FUN_71886108();
          break;
        case 1:
          puVar3 = &DAT_71132da0;
          if (DAT_71132da0 != (undefined4 *)0x0) {
            puVar4 = &DAT_71132da0;
            puVar3 = DAT_71132da0;
            do {
              puVar7 = puVar3;
              if ((int)puVar3[4] < (int)puVar6[1]) {
                puVar3 = puVar3 + 1;
                puVar7 = puVar4;
              }
              puVar4 = puVar7;
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
            puVar3 = &DAT_71132da0;
            if (((undefined4 **)puVar4 != &DAT_71132da0) &&
               (puVar3 = puVar4, (int)puVar6[1] < (int)puVar4[4])) {
              puVar3 = &DAT_71132da0;
            }
          }
          if ((undefined4 **)puVar3 != &DAT_71132da0) {
            if (puVar3[5] != 0) {
              thunk_qNQrlu();
            }
            puVar6 = puVar3;
            puVar4 = (undefined4 *)puVar3[1];
            if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
              do {
                puVar7 = (undefined4 *)puVar6[2];
                bVar10 = (undefined4 *)*puVar7 != puVar6;
                puVar6 = puVar7;
              } while (bVar10);
            }
            else {
              do {
                puVar7 = puVar4;
                puVar4 = (undefined4 *)*puVar7;
              } while ((undefined4 *)*puVar7 != (undefined4 *)0x0);
            }
            if (DAT_71132d9c == puVar3) {
              DAT_71132d9c = puVar7;
            }
            DAT_71132da4 = DAT_71132da4 + -1;
            FUN_71368054(DAT_71132da0,puVar3);
            thunk_qNQrlu(puVar3);
          }
          break;
        case 2:
          FUN_714e8138(&DAT_71132d9c,DAT_71132da0);
          DAT_71132da0 = (undefined4 *)0x0;
          DAT_71132d9c = &DAT_71132da0;
          DAT_71132da4 = 0;
          break;
        case 3:
          DAT_71132d94 = puVar6[1];
        }
        puVar3 = DAT_71132dfc;
        *(undefined1 *)(DAT_71132df8 + 0x28) = 0;
        DAT_71132e00 = DAT_71132e00 + 1;
        DAT_71132df8 = *(int *)(DAT_71132df8 + 0x2c);
        bVar10 = DAT_71132df0 == puVar3;
        if (DAT_71132df0 != (undefined4 *)0x0 && !bVar10) {
          puVar3 = (undefined4 *)(uint)*(byte *)(DAT_71132df0 + 10);
        }
        puVar6 = DAT_71132df0;
        if ((DAT_71132df0 == (undefined4 *)0x0 || bVar10) || puVar3 == (undefined4 *)0x0) {
          return cVar2;
        }
      } while( true );
    }
  }
  return cVar2;
}


// =========================================================================
// Function: FUN_714e6f68
// Entry: 0x714e6f68 | Size: 308 bytes
// =========================================================================

void FUN_714e6f68(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar3 = FUN_71886108();
  puVar1 = DAT_71132ddc;
  if (1000 < (uint)(iVar3 - DAT_71132d98)) {
    iVar3 = -1;
    puVar5 = DAT_71132d9c;
    if (DAT_71132d9c != &DAT_71132da0) {
      do {
        if (iVar3 < (int)puVar5[4]) {
          iVar3 = puVar5[4];
        }
        puVar2 = (undefined4 *)puVar5[1];
        if ((undefined4 *)puVar5[1] == (undefined4 *)0x0) {
          do {
            puVar6 = (undefined4 *)puVar5[2];
            bVar8 = (undefined4 *)*puVar6 != puVar5;
            puVar5 = puVar6;
          } while (bVar8);
        }
        else {
          do {
            puVar6 = puVar2;
            puVar2 = (undefined4 *)*puVar6;
          } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
        }
        puVar5 = puVar6;
      } while (puVar6 != &DAT_71132da0);
    }
    if (iVar3 < DAT_71132d94 + -1) {
      if ((DAT_71132ddc[4] == DAT_71132de0) || (*(char *)(DAT_71132ddc[4] + 0xc) != '\0')) {
        uVar7 = DAT_71132ddc[4];
        iVar4 = thunk_MwhHq(0x14);
        *(undefined1 *)(iVar4 + 0xc) = 0;
        puVar1[4] = iVar4;
        *(undefined4 *)(puVar1[4] + 0x10) = uVar7;
      }
      DAT_71132ddc = (undefined4 *)puVar1[4];
      *puVar1 = 1;
      puVar1[1] = iVar3;
      DAT_71132dec = DAT_71132dec + 1;
      *(undefined1 *)(DAT_71132de4 + 0xc) = 1;
      DAT_71132de4 = *(int *)(DAT_71132de4 + 0x10);
    }
    DAT_71132d98 = FUN_71886108();
  }
  return;
}


// =========================================================================
// Function: FUN_714e71a8
// Entry: 0x714e71a8 | Size: 376 bytes
// =========================================================================

bool FUN_714e71a8(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar4 = param_1[5];
  if (iVar4 != -1) {
    param_3 = DAT_71132db4;
  }
  if (iVar4 == -1 || iVar4 == param_3) {
    iVar4 = param_1[6];
    if (iVar4 != -1) {
      param_3 = DAT_71132db8;
    }
    if (iVar4 == -1 || iVar4 == param_3) {
      iVar4 = param_1[7];
      if (iVar4 != -1) {
        param_3 = DAT_71132dbc;
      }
      if (iVar4 == -1 || iVar4 == param_3) {
        piVar6 = param_1 + 1;
        if (*param_1 == 1) {
          uVar3 = FUN_715ec984(*piVar6,param_1[3]);
          uVar1 = FUN_715ec984(param_1[2],param_1[4]);
          uVar2 = FUN_715ec9dc(*piVar6,param_1[3]);
          uStack_2c = FUN_715ec9dc(param_1[2],param_1[4]);
          uStack_30 = uVar3;
          uStack_28 = uVar2;
          uStack_24 = uVar1;
          iVar4 = FUN_715ef340(DAT_71132da8,DAT_71132dac,&uStack_30);
        }
        else {
          if (*param_1 != 0) {
            return false;
          }
          iVar4 = param_1[2];
          iVar5 = param_1[3];
          iVar7 = param_1[4];
          uVar1 = FUN_71ba240c(*piVar6,DAT_71132da8);
          uVar3 = DAT_71132db0;
          uVar2 = FUN_71ba240c(iVar4,DAT_71132dac);
          uVar3 = FUN_71ba240c(iVar5,uVar3);
          uVar2 = FUN_71ba21e8(uVar2,uVar2);
          uVar1 = FUN_71ba21e8(uVar1,uVar1);
          uVar1 = FUN_71ba0b38(uVar1,uVar2);
          uVar3 = FUN_71ba21e8(uVar3,uVar3);
          FUN_71ba0b38(uVar3,uVar1);
          uVar3 = imp_sqrtf();
          iVar4 = FUN_71ba2d10(uVar3,iVar7);
        }
        return iVar4 != 0;
      }
    }
  }
  return false;
}


// =========================================================================
// Function: FUN_714e753c
// Entry: 0x714e753c | Size: 1088 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714e753c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *unaff_r5;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puStack_178;
  undefined4 *puStack_174;
  undefined4 *puStack_170;
  undefined1 auStack_169 [3];
  undefined1 *puStack_166;
  undefined4 uStack_157;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined4 uStack_40;
  char cStack_3c;
  int iStack_30;
  undefined4 *puStack_2c;
  
  puStack_2c = _ext___stack_chk_guard;
  puVar12 = _ext___stack_chk_guard;
  if (DAT_71132dd8 != (undefined4 *)0x0) {
    unaff_r5 = &DAT_71132dd8;
    puVar12 = DAT_71132de4;
  }
  if (DAT_71132dd8 != (undefined4 *)0x0 && DAT_71132dd8 != puVar12) {
    puVar7 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    puVar12 = (undefined4 *)0x0;
    do {
      puVar1 = DAT_71132dd8;
      if (*(char *)(DAT_71132dd8 + 3) == '\0') break;
      *unaff_r5 = DAT_71132dd8[4];
      if (puVar7 < puVar9) {
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        *puVar7 = *puVar1;
        puVar7[1] = uVar5;
        puVar7[2] = uVar6;
      }
      else {
        iVar8 = (int)puVar7 - (int)puVar12;
        uVar11 = (iVar8 >> 2) * -0x55555555 + 1;
        if (0x15555555 < uVar11) {
          puStack_178 = puVar12;
          puStack_174 = puVar7;
          puStack_170 = puVar9;
          FUN_714e81e0(&puStack_178);
LAB_714e7978:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        iVar2 = (int)puVar9 - (int)puVar12 >> 2;
        if (uVar11 < (uint)(iVar2 * 0x55555556)) {
          uVar11 = iVar2 * 0x55555556;
        }
        if (0xaaaaaa9 < (uint)(iVar2 * -0x55555555)) {
          uVar11 = 0x15555555;
        }
        if (uVar11 == 0) {
          iVar2 = 0;
        }
        else {
          if (0x15555555 < uVar11) goto LAB_714e7978;
          iVar2 = thunk_MwhHq(uVar11 * 0xc);
        }
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        puVar7 = (undefined4 *)(iVar2 + (iVar8 >> 2) * 4);
        *puVar7 = *puVar1;
        iVar3 = (int)((ulonglong)((longlong)iVar8 * -0x2aaaaaab) >> 0x20);
        puVar7[1] = uVar5;
        puVar7[2] = uVar6;
        imp___aeabi_memcpy4(puVar7 + ((iVar3 >> 1) - (iVar3 >> 0x1f)) * 3,puVar12,iVar8);
        puVar9 = (undefined4 *)(iVar2 + uVar11 * 0xc);
        if (puVar12 != (undefined4 *)0x0) {
          thunk_qNQrlu();
        }
        unaff_r5 = &DAT_71132dd8;
        puVar12 = puVar7 + ((iVar3 >> 1) - (iVar3 >> 0x1f)) * 3;
      }
      puVar7 = puVar7 + 3;
      iVar8 = unaff_r5[2];
      unaff_r5[4] = unaff_r5[4] + 1;
      *(undefined1 *)(iVar8 + 0xc) = 0;
      puVar1 = *(undefined4 **)(iVar8 + 0x10);
      unaff_r5[2] = puVar1;
      if (DAT_71132dd8 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)unaff_r5[3];
      }
    } while (DAT_71132dd8 != (undefined4 *)0x0 && DAT_71132dd8 != puVar1);
    puStack_178 = puVar12;
    puStack_174 = puVar7;
    puStack_170 = puVar9;
    if (DAT_711f6d58 != (undefined4 *)0x0 && puVar7 != puVar12) {
      puVar9 = puVar12 + 1;
      uVar11 = 0;
      uVar10 = ((int)puVar7 - (int)puVar12 >> 2) * -0x55555555;
      do {
        uVar4 = puVar9[-1];
        bVar13 = uVar4 == 0;
        if (bVar13) {
          uVar4 = (uint)*(byte *)(puVar9 + 1);
        }
        if (bVar13 && (uVar4 & 1) == 0) {
          uVar5 = *puVar9;
          cStack_3c = '\x01';
          iStack_30 = 0x800;
          uStack_157 = 0x29;
          uStack_13e = (undefined1)((uint)uVar5 >> 0x18);
          uStack_141 = (undefined1)uVar5;
          uStack_13d = 0;
          uStack_142 = 0;
          uStack_40 = 0;
          uStack_13f = (undefined1)((uint)uVar5 >> 0x10);
          uStack_140 = (undefined1)((uint)uVar5 >> 8);
          puStack_166 = &uStack_142;
          (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                    ((int *)*DAT_711f6d58,0xb,auStack_169,1,9,0,0,0xffffffff,0xffff,0xffff,0,0);
          if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
            imp_free(puStack_166);
          }
        }
        uVar11 = uVar11 + 1;
        puVar9 = puVar9 + 3;
      } while (uVar11 < uVar10);
      if (puVar7 != puVar12) {
        puVar7 = puVar12 + 1;
        uVar11 = 0;
        do {
          if ((puVar7[-1] == 0) && ((*(byte *)(puVar7 + 1) & 1) != 0)) {
            uVar5 = *puVar7;
            iStack_30 = 0x800;
            cStack_3c = '\x01';
            uStack_13d = 0x80;
            uStack_157 = 0x29;
            uStack_13e = (undefined1)((uint)uVar5 >> 0x18);
            uStack_141 = (undefined1)uVar5;
            uStack_40 = 0;
            uStack_142 = 0;
            uStack_13f = (undefined1)((uint)uVar5 >> 0x10);
            uStack_140 = (undefined1)((uint)uVar5 >> 8);
            puStack_166 = &uStack_142;
            (**(code **)(*(int *)*DAT_711f6d58 + 0x94))
                      ((int *)*DAT_711f6d58,0xb,auStack_169,1,9,0,0,0xffffffff,0xffff,0xffff,0,0);
            if ((cStack_3c != '\0') && (0x800 < iStack_30)) {
              imp_free(puStack_166);
            }
          }
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 3;
        } while (uVar11 < uVar10);
      }
    }
    if (puVar12 != (undefined4 *)0x0) {
      puStack_174 = puVar12;
      thunk_qNQrlu(puVar12);
    }
  }
  if (_ext___stack_chk_guard != puStack_2c) {
                    /* WARNING: Subroutine does not return */
    imp___stack_chk_fail();
  }
  return;
}


// =========================================================================
// Function: FUN_714e7bb0
// Entry: 0x714e7bb0 | Size: 312 bytes
// =========================================================================

void FUN_714e7bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_71132dcc;
  iVar5 = DAT_71132dd4 - DAT_71132dd0;
  uVar4 = DAT_71132dd4;
  puVar1 = DAT_71132dc4;
  while ((DAT_71132dc4 = puVar1, 4 < iVar5 && (DAT_71132dc0 != 0))) {
    if (DAT_71132dc0 != iVar2) {
      uVar4 = (uint)*(byte *)(DAT_71132dc0 + 0x18);
    }
    if (DAT_71132dc0 == iVar2 || uVar4 == 0) break;
    DAT_71132dc0 = *(int *)(DAT_71132dc0 + 0x1c);
    iVar5 = iVar5 + -1;
    *(undefined1 *)(DAT_71132dc8 + 0x18) = 0;
    DAT_71132dc8 = *(int *)(DAT_71132dc8 + 0x1c);
    DAT_71132dd0 = DAT_71132dd0 + 1;
    puVar1 = DAT_71132dc4;
  }
  if ((puVar1[7] == DAT_71132dc8) || (*(char *)(puVar1[7] + 0x18) != '\0')) {
    uVar3 = puVar1[7];
    iVar5 = thunk_MwhHq(0x20);
    *(undefined1 *)(iVar5 + 0x18) = 0;
    puVar1[7] = iVar5;
    *(undefined4 *)(puVar1[7] + 0x1c) = uVar3;
  }
  DAT_71132dc4 = (undefined4 *)puVar1[7];
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *puVar1 = param_1;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  puVar1[5] = param_6;
  *(undefined1 *)(DAT_71132dcc + 0x18) = 1;
  DAT_71132dd4 = DAT_71132dd4 + 1;
  DAT_71132dcc = *(undefined4 *)(DAT_71132dcc + 0x1c);
  return;
}


// =========================================================================
// Function: FUN_714e7d5c
// Entry: 0x714e7d5c | Size: 252 bytes
// =========================================================================

void FUN_714e7d5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_71132df4;
  puVar4 = DAT_71132df4 + 3;
  if ((DAT_71132df4[0xb] == DAT_71132df8) || (*(char *)(DAT_71132df4[0xb] + 0x28) != '\0')) {
    uVar2 = DAT_71132df4[0xb];
    iVar3 = thunk_MwhHq(0x30);
    *(undefined1 *)(iVar3 + 0x28) = 0;
    puVar1[0xb] = iVar3;
    *(undefined4 *)(puVar1[0xb] + 0x2c) = uVar2;
  }
  DAT_71132df4 = (undefined4 *)puVar1[0xb];
  puVar1[5] = param_5;
  *puVar1 = 0;
  puVar1[1] = param_1;
  *puVar4 = param_3;
  puVar1[4] = param_4;
  puVar1[6] = param_6;
  puVar1[2] = param_2;
  puVar1[8] = param_8;
  puVar1[7] = param_7;
  puVar1[9] = param_9;
  *(undefined1 *)(DAT_71132dfc + 0x28) = 1;
  DAT_71132e04 = DAT_71132e04 + 1;
  DAT_71132dfc = *(undefined4 *)(DAT_71132dfc + 0x2c);
  return;
}


// =========================================================================
// Function: FUN_714e7f84
// Entry: 0x714e7f84 | Size: 132 bytes
// =========================================================================

void FUN_714e7f84(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_71132df4;
  if ((DAT_71132df4[0xb] == DAT_71132df8) || (*(char *)(DAT_71132df4[0xb] + 0x28) != '\0')) {
    uVar3 = DAT_71132df4[0xb];
    iVar2 = thunk_MwhHq(0x30);
    *(undefined1 *)(iVar2 + 0x28) = 0;
    puVar1[0xb] = iVar2;
    *(undefined4 *)(puVar1[0xb] + 0x2c) = uVar3;
  }
  DAT_71132df4 = (undefined4 *)puVar1[0xb];
  *puVar1 = 2;
  *(undefined1 *)(DAT_71132dfc + 0x28) = 1;
  DAT_71132e04 = DAT_71132e04 + 1;
  DAT_71132dfc = *(undefined4 *)(DAT_71132dfc + 0x2c);
  return;
}


// =========================================================================
// Function: FUN_714e8138
// Entry: 0x714e8138 | Size: 60 bytes
// =========================================================================

void FUN_714e8138(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_714e8138(param_1,*param_2);
  FUN_714e8138(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_714e81e0
// Entry: 0x714e81e0 | Size: 20 bytes
// =========================================================================

void FUN_714e81e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714e8628
// Entry: 0x714e8628 | Size: 296 bytes
// =========================================================================

undefined4 FUN_714e8628(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  int *unaff_r4;
  uint uVar5;
  
  uVar1 = DAT_71132e0c;
  if (DAT_71132e0c != 0) {
    uVar2 = DAT_71132e0c - (DAT_71132e0c >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar5 = DAT_71132e0c - 1 & param_1;
    }
    else {
      uVar5 = param_1;
      if (DAT_71132e0c <= param_1) {
        FUN_71ba33fc(param_1,DAT_71132e0c & 0xffff);
        uVar5 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_71132e08 + uVar5 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r4 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r4 != (int *)0x0) {
      do {
        uVar4 = unaff_r4[1];
        if (uVar4 == param_1) {
          if (*(ushort *)(unaff_r4 + 2) == param_1) {
            return 1;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar1);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar5) {
            return 0;
          }
        }
        unaff_r4 = (int *)*unaff_r4;
      } while (unaff_r4 != (int *)0x0);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_714e87e0
// Entry: 0x714e87e0 | Size: 16 bytes
// =========================================================================

undefined1 FUN_714e87e0(void)

{
  return DAT_71132e34;
}


// =========================================================================
// Function: FUN_714e8828
// Entry: 0x714e8828 | Size: 48 bytes
// =========================================================================

void FUN_714e8828(undefined4 param_1)

{
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  
  uStack_14 = param_1;
  FUN_714e9f7c(auStack_10,&DAT_71132e20,&uStack_14,&uStack_14);
  return;
}


// =========================================================================
// Function: FUN_714e88ac
// Entry: 0x714e88ac | Size: 40 bytes
// =========================================================================

void FUN_714e88ac(undefined4 param_1)

{
  undefined4 uStack_c;
  
  uStack_c = param_1;
  FUN_714ea834(&DAT_71132e20,&uStack_c);
  return;
}


// =========================================================================
// Function: FUN_714e8928
// Entry: 0x714e8928 | Size: 344 bytes
// =========================================================================

undefined4 FUN_714e8928(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  int *unaff_r5;
  
  uVar1 = DAT_71132e24;
  if (DAT_71132e24 != 0) {
    uVar5 = (param_1 * 0x5bd1e995 ^ (uint)(param_1 * 0x5bd1e995) >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar2 = (uVar5 ^ uVar5 >> 0xd) * 0x5bd1e995;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar5 = DAT_71132e24 - (DAT_71132e24 >> 1 & 0x55555555);
    uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar5 < 2) {
      uVar6 = DAT_71132e24 - 1 & uVar2;
    }
    else {
      uVar6 = uVar2;
      if (DAT_71132e24 <= uVar2) {
        FUN_71ba33fc(uVar2,DAT_71132e24);
        uVar6 = extraout_r1;
      }
    }
    piVar3 = *(int **)(DAT_71132e20 + uVar6 * 4);
    if (piVar3 != (int *)0x0) {
      unaff_r5 = (int *)*piVar3;
    }
    if (piVar3 != (int *)0x0 && unaff_r5 != (int *)0x0) {
      do {
        uVar4 = unaff_r5[1];
        if (uVar2 == uVar4) {
          if (unaff_r5[2] == param_1) {
            return 1;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar1);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar6) {
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
// Function: FUN_714e8b10
// Entry: 0x714e8b10 | Size: 856 bytes
// =========================================================================

void FUN_714e8b10(uint param_1)

{
  bool bVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  byte bVar17;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int *unaff_r7;
  bool bVar21;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined1 auStack_28 [8];
  
  uVar18 = DAT_71132e0c;
  if (DAT_71132e34 != '\0') {
    if (DAT_71132e0c != 0) {
      uVar10 = DAT_71132e0c - (DAT_71132e0c >> 1 & 0x55555555);
      uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (uVar10 < 2) {
        uVar20 = DAT_71132e0c - 1 & param_1;
      }
      else {
        uVar20 = param_1;
        if (DAT_71132e0c <= param_1) {
          FUN_71ba33fc(param_1,DAT_71132e0c & 0xffff);
          uVar20 = extraout_r1;
        }
      }
      piVar11 = *(int **)(DAT_71132e08 + uVar20 * 4);
      if (piVar11 != (int *)0x0) {
        unaff_r7 = (int *)*piVar11;
      }
      if (piVar11 != (int *)0x0 && unaff_r7 != (int *)0x0) {
        do {
          uVar14 = unaff_r7[1];
          if (uVar14 == param_1) {
            if (*(ushort *)(unaff_r7 + 2) == param_1) {
              uStack_2c = (short)param_1;
              FUN_714e9b44(&DAT_71132e08,&uStack_2c);
              pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bac);
              if (*pcVar12 == '\0') {
                puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b9c);
                *(undefined1 *)((int)puVar15 + 0x19) = 1;
                uVar9 = DAT_70081d34;
                uVar7 = DAT_70081d30;
                uVar6 = DAT_70081d2c;
                uVar5 = DAT_70081d28;
                uVar4 = DAT_70081d24;
                *puVar15 = DAT_70081d20;
                puVar15[1] = uVar4;
                puVar15[2] = uVar5;
                puVar15[3] = uVar6;
                puVar15[4] = uVar7;
                puVar15[5] = uVar9;
                *(undefined1 *)(puVar15 + 6) = DAT_70081d38;
                thunk_GFDIUClbc_QcPNgD_wH(&LAB_714e9284,puVar15,&DAT_70b0e000);
                puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bac);
                *puVar16 = 1;
              }
              iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b9c);
              uVar3 = uStack_2c;
              if (*(char *)(iVar13 + 0x19) != '\0') {
                uVar18 = 0;
                uVar10 = 0;
                do {
                  iVar19 = (uVar18 & 7) * 8;
                  uVar20 = iVar19 - 0x20;
                  bVar17 = (byte)(0x63671535 >> iVar19) |
                           (byte)(-0xaac1a99 << ((uVar18 & 7) * -8 + 0x20 & 0xff));
                  if (-1 < (int)uVar20) {
                    bVar17 = (byte)(0xf553e567 >> (uVar20 & 0xff));
                  }
                  *(byte *)(iVar13 + uVar18) = *(byte *)(iVar13 + uVar18) ^ bVar17;
                  bVar21 = 0xfffffffe < uVar18;
                  bVar1 = uVar10 == 0;
                  bVar2 = (0x17 < uVar18) <= uVar10;
                  uVar18 = uVar18 + 1;
                  uVar10 = uVar10 + bVar21;
                } while (bVar1 && bVar2);
                *(undefined1 *)(iVar13 + 0x19) = 0;
              }
              goto LAB_714e8c8c;
            }
          }
          else {
            if (uVar10 < 2) {
              uVar14 = uVar14 & uVar18 - 1;
            }
            else if (uVar18 <= uVar14) {
              FUN_71ba33fc(uVar14,uVar18);
              uVar14 = extraout_r1_00;
            }
            if (uVar14 != uVar20) break;
          }
          unaff_r7 = (int *)*unaff_r7;
        } while (unaff_r7 != (int *)0x0);
      }
    }
    uStack_2a = (short)param_1;
    FUN_714e92c0(auStack_28,&DAT_71132e08,&uStack_2a,&uStack_2a);
    pcVar12 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b8c);
    if (*pcVar12 == '\0') {
      puVar15 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b7c);
      *(undefined1 *)((int)puVar15 + 0x17) = 1;
      uVar7 = DAT_70081d18;
      uVar6 = DAT_70081d14;
      uVar5 = DAT_70081d10;
      uVar4 = DAT_70081d0c;
      *puVar15 = DAT_70081d08;
      puVar15[1] = uVar4;
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      puVar15[4] = uVar7;
      uVar8 = DAT_70081d1e;
      *(undefined2 *)(puVar15 + 5) = DAT_70081d1c;
      *(undefined1 *)((int)puVar15 + 0x16) = uVar8;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7130cd44,puVar15,&DAT_70b0e000);
      puVar16 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b8c);
      *puVar16 = 1;
    }
    iVar13 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2b7c);
    uVar3 = uStack_2a;
    if (*(char *)(iVar13 + 0x17) != '\0') {
      uVar18 = 0;
      uVar10 = 0;
      do {
        iVar19 = (uVar18 & 7) * 8;
        uVar20 = iVar19 - 0x20;
        bVar17 = (byte)(0x45a9b135 >> iVar19) |
                 (byte)(-0x760ad4c7 << ((uVar18 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar20) {
          bVar17 = (byte)(0x89f52b39 >> (uVar20 & 0xff));
        }
        *(byte *)(iVar13 + uVar18) = *(byte *)(iVar13 + uVar18) ^ bVar17;
        bVar21 = 0xfffffffe < uVar18;
        bVar1 = uVar10 == 0;
        bVar2 = (0x15 < uVar18) <= uVar10;
        uVar18 = uVar18 + 1;
        uVar10 = uVar10 + bVar21;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar13 + 0x17) = 0;
    }
LAB_714e8c8c:
    FUN_716486e8(iVar13,uVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_714e92c0
// Entry: 0x714e92c0 | Size: 688 bytes
// =========================================================================

void FUN_714e92c0(int *param_1,int *param_2,ushort *param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uStack_30;
  
  uVar10 = param_2[1];
  uVar11 = (uint)*param_3;
  if (uVar10 != 0) {
    uVar2 = uVar10 - (uVar10 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uStack_30 = uVar10 - 1 & uVar11;
    }
    else {
      uStack_30 = uVar11;
      if (uVar10 <= uVar11) {
        FUN_71ba33fc(uVar11,uVar10 & 0xffff);
        uStack_30 = extraout_r1;
      }
    }
    puVar3 = *(undefined4 **)(*param_2 + uStack_30 * 4);
    piVar9 = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      piVar9 = (int *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && piVar9 != (int *)0x0) {
      do {
        uVar7 = piVar9[1];
        if (uVar7 == uVar11) {
          if (*(ushort *)(piVar9 + 2) == uVar11) {
            uVar1 = 0;
            goto LAB_714e9554;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar7 = uVar7 & uVar10 - 1;
          }
          else if (uVar10 <= uVar7) {
            FUN_71ba33fc(uVar7,uVar10);
            uVar7 = extraout_r1_01;
          }
          if (uVar7 != uStack_30) break;
        }
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)0x0);
    }
  }
  piVar9 = (int *)thunk_MwhHq(0xc);
  *(undefined2 *)(piVar9 + 2) = *param_4;
  *piVar9 = 0;
  piVar9[1] = uVar11;
  uVar4 = FUN_71ba1e0c(uVar10);
  iVar12 = param_2[4];
  iVar8 = param_2[3];
  uVar4 = FUN_71ba21e8(iVar12,uVar4);
  uVar5 = FUN_71ba1e0c(iVar8 + 1);
  if ((uVar10 == 0) || (iVar8 = FUN_71ba2d10(uVar4,uVar5), iVar8 != 0)) {
    uVar2 = 1;
    if ((2 < uVar10) && (uVar2 = 0, (uVar10 & uVar10 - 1) != 0)) {
      uVar2 = 1;
    }
    uVar2 = uVar2 | uVar10 << 1;
    FUN_71ba13e0(uVar5,iVar12);
    imp_ceilf();
    uVar10 = FUN_71ba1910();
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
    }
    FUN_714e96f4(param_2,uVar2);
    uVar10 = param_2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      uStack_30 = uVar10 - 1 & uVar11;
    }
    else {
      uStack_30 = uVar11;
      if (uVar10 <= uVar11) {
        FUN_71ba33fc(uVar11,uVar10);
        uStack_30 = extraout_r1_00;
      }
    }
  }
  iVar8 = *param_2;
  piVar6 = *(int **)(iVar8 + uStack_30 * 4);
  if (piVar6 == (int *)0x0) {
    piVar6 = param_2 + 2;
    *piVar9 = *piVar6;
    *piVar6 = (int)piVar9;
    *(int **)(iVar8 + uStack_30 * 4) = piVar6;
    if (*piVar9 == 0) goto LAB_714e9544;
    uVar11 = *(uint *)(*piVar9 + 4);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      FUN_71ba33fc(uVar11,uVar10);
      uVar11 = extraout_r1_02;
    }
    piVar6 = (int *)(*param_2 + uVar11 * 4);
  }
  else {
    *piVar9 = *piVar6;
  }
  *piVar6 = (int)piVar9;
LAB_714e9544:
  param_2[3] = param_2[3] + 1;
  uVar1 = 1;
LAB_714e9554:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = (int)piVar9;
  return;
}


// =========================================================================
// Function: FUN_714e96f4
// Entry: 0x714e96f4 | Size: 692 bytes
// =========================================================================

void FUN_714e96f4(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_714e9740;
    }
    return;
  }
LAB_714e9740:
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
// Function: FUN_714e9b44
// Entry: 0x714e9b44 | Size: 332 bytes
// =========================================================================

undefined4 FUN_714e9b44(int *param_1,ushort *param_2)

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
    uVar7 = (uint)*param_2;
    uVar2 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar5 = uVar6 - 1 & uVar7;
    }
    else {
      uVar5 = uVar7;
      if (uVar6 <= uVar7) {
        FUN_71ba33fc(uVar7,uVar6 & 0xffff);
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
          if (*(ushort *)(unaff_r5 + 2) == uVar7) {
            FUN_714e9d18(aiStack_30,param_1,unaff_r5);
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
// Function: FUN_714e9d18
// Entry: 0x714e9d18 | Size: 476 bytes
// =========================================================================

void FUN_714e9d18(undefined4 *param_1,int *param_2,int *param_3)

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
    if (uVar4 == uVar6) goto LAB_714e9e60;
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
    if (uVar4 == uVar6) goto LAB_714e9e60;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_714e9e60:
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
// Function: FUN_714e9f7c
// Entry: 0x714e9f7c | Size: 740 bytes
// =========================================================================

void FUN_714e9f7c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint unaff_r10;
  
  iVar11 = *param_3;
  uVar8 = iVar11 * 0x5bd1e995;
  uVar10 = param_2[1];
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * 0x5bd1e995;
  uVar8 = uVar8 ^ uVar8 >> 0xf;
  if (uVar10 != 0) {
    uVar2 = uVar10 - (uVar10 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      unaff_r10 = uVar8 & uVar10 - 1;
    }
    else {
      unaff_r10 = uVar8;
      if (uVar10 <= uVar8) {
        FUN_71ba33fc(uVar8,uVar10);
        unaff_r10 = extraout_r1;
      }
    }
    puVar3 = *(undefined4 **)(*param_2 + unaff_r10 * 4);
    piVar9 = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      piVar9 = (int *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && piVar9 != (int *)0x0) {
      do {
        uVar6 = piVar9[1];
        if (uVar6 == uVar8) {
          if (piVar9[2] == iVar11) {
            uVar1 = 0;
            goto LAB_714ea244;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar6 = uVar6 & uVar10 - 1;
          }
          else if (uVar10 <= uVar6) {
            FUN_71ba33fc(uVar6,uVar10);
            uVar6 = extraout_r1_00;
          }
          if (uVar6 != unaff_r10) break;
        }
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)0x0);
    }
  }
  piVar9 = (int *)thunk_MwhHq(0xc);
  iVar11 = *param_4;
  *piVar9 = 0;
  piVar9[1] = uVar8;
  piVar9[2] = iVar11;
  uVar4 = FUN_71ba1e0c(uVar10);
  iVar12 = param_2[4];
  iVar11 = param_2[3];
  uVar4 = FUN_71ba21e8(iVar12,uVar4);
  uVar5 = FUN_71ba1e0c(iVar11 + 1);
  if ((uVar10 == 0) || (iVar11 = FUN_71ba2d10(uVar4,uVar5), iVar11 != 0)) {
    uVar2 = 1;
    if ((2 < uVar10) && (uVar2 = 0, (uVar10 & uVar10 - 1) != 0)) {
      uVar2 = 1;
    }
    uVar2 = uVar2 | uVar10 << 1;
    FUN_71ba13e0(uVar5,iVar12);
    imp_ceilf();
    uVar10 = FUN_71ba1910();
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
    }
    FUN_714ea3e4(param_2,uVar2);
    uVar10 = param_2[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_r10 = uVar10 - 1 & uVar8;
    }
    else {
      unaff_r10 = uVar8;
      if (uVar10 <= uVar8) {
        FUN_71ba33fc(uVar8,uVar10);
        unaff_r10 = extraout_r1_01;
      }
    }
  }
  iVar11 = *param_2;
  piVar7 = *(int **)(iVar11 + unaff_r10 * 4);
  if (piVar7 == (int *)0x0) {
    piVar7 = param_2 + 2;
    *piVar9 = *piVar7;
    *piVar7 = (int)piVar9;
    *(int **)(iVar11 + unaff_r10 * 4) = piVar7;
    if (*piVar9 == 0) goto LAB_714ea234;
    uVar8 = *(uint *)(*piVar9 + 4);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar8 = uVar8 & uVar10 - 1;
    }
    else if (uVar10 <= uVar8) {
      FUN_71ba33fc(uVar8,uVar10);
      uVar8 = extraout_r1_02;
    }
    piVar7 = (int *)(*param_2 + uVar8 * 4);
  }
  else {
    *piVar9 = *piVar7;
  }
  *piVar7 = (int)piVar9;
LAB_714ea234:
  param_2[3] = param_2[3] + 1;
  uVar1 = 1;
LAB_714ea244:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = (int)piVar9;
  return;
}


// =========================================================================
// Function: FUN_714ea3e4
// Entry: 0x714ea3e4 | Size: 692 bytes
// =========================================================================

void FUN_714ea3e4(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_714ea430;
    }
    return;
  }
LAB_714ea430:
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
// Function: FUN_714ea834
// Entry: 0x714ea834 | Size: 408 bytes
// =========================================================================

undefined4 FUN_714ea834(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int aiStack_30 [3];
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    iVar7 = *param_2;
    uVar4 = iVar7 * 0x5bd1e995;
    uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x5bd1e995 ^ 0x6f47a654;
    uVar1 = (uVar4 ^ uVar4 >> 0xd) * 0x5bd1e995;
    uVar1 = uVar1 ^ uVar1 >> 0xf;
    uVar4 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar4 = (uVar4 & 0x33333333) + (uVar4 >> 2 & 0x33333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar4 < 2) {
      uVar6 = uVar1 & uVar5 - 1;
    }
    else {
      uVar6 = uVar1;
      if (uVar5 <= uVar1) {
        FUN_71ba33fc(uVar1,uVar5);
        uVar6 = extraout_r1;
      }
    }
    piVar2 = *(int **)(*param_1 + uVar6 * 4);
    if ((piVar2 != (int *)0x0) && (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0)) {
      do {
        uVar3 = piVar2[1];
        if (uVar3 == uVar1) {
          if (piVar2[2] == iVar7) {
            FUN_714eaa54(aiStack_30,param_1,piVar2);
            iVar7 = aiStack_30[0];
            aiStack_30[0] = 0;
            if (iVar7 != 0) {
              thunk_qNQrlu();
            }
            return 1;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar3 = uVar3 & uVar5 - 1;
          }
          else if (uVar5 <= uVar3) {
            FUN_71ba33fc(uVar3,uVar5);
            uVar3 = extraout_r1_00;
          }
          if (uVar3 != uVar6) {
            return 0;
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_714eaa54
// Entry: 0x714eaa54 | Size: 476 bytes
// =========================================================================

void FUN_714eaa54(undefined4 *param_1,int *param_2,int *param_3)

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
    if (uVar4 == uVar6) goto LAB_714eab9c;
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
    if (uVar4 == uVar6) goto LAB_714eab9c;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_714eab9c:
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
// Function: FUN_714eae1c
// Entry: 0x714eae1c | Size: 668 bytes
// =========================================================================

void FUN_714eae1c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar7 = (int *)(DAT_711a3938 + 0x1389c);
  iVar6 = *piVar7;
  if (iVar6 == 0) {
    iVar6 = FUN_713c301c(0);
    if (iVar6 == 0) {
      iVar6 = *piVar7;
    }
    else {
      iVar6 = thunk_MwhHq(0x3a0);
      iVar1 = FUN_715ba834();
      *piVar7 = iVar1;
    }
  }
  iVar1 = thunk_FUN_715bf66c(iVar6);
  if (iVar1 != 0) {
    iVar1 = *(int *)(DAT_711f6d58 + 4);
    uVar2 = FUN_715c4cdc(iVar6);
    uVar2 = uVar2 & 0xffff;
    if (uVar2 < 0x7d1) {
      bVar11 = *(char *)(iVar1 + uVar2 + 0x3e88) != '\0';
      if (bVar11) {
        iVar6 = *(int *)(iVar1 + uVar2 * 4);
      }
      if (bVar11 && iVar6 != 0) {
        FUN_7136cdfc(&uStack_30);
        thunk_FUN_715608f0(iVar6,&uStack_30);
        uVar3 = FUN_71ba21e8(uStack_2c,uStack_2c);
        uVar4 = FUN_71ba21e8(uStack_30,uStack_30);
        uVar3 = FUN_71ba0b38(uVar4,uVar3);
        uVar4 = FUN_71ba21e8(uStack_28,uStack_28);
        FUN_71ba0b38(uVar4,uVar3);
        uVar3 = imp_sqrtf();
        uVar12 = FUN_71ba1638();
        iVar1 = FUN_71ba2c7c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x33333333,0x3feb3333);
        iVar6 = DAT_70b46c28;
        if (iVar1 != 0) {
          uVar2 = FUN_71ba0b38(uVar3,0xbf59999a);
          iVar1 = FUN_71ba2d70(uVar2,0x3cf5c28f);
          iVar6 = DAT_70b46c28;
          if (iVar1 != 0) {
            uVar2 = 0x3cf5c28f;
          }
          uVar8 = uVar2 ^ 0x80000000;
          *(uint *)(DAT_70b46c28 + 0x16c) = uVar2;
          *(uint *)(iVar6 + 0x170) = uVar8;
          *(uint *)(iVar6 + 0x130) = uVar2;
          *(uint *)(iVar6 + 0x134) = uVar8;
          *(uint *)(iVar6 + 0xf4) = uVar2;
          *(uint *)(iVar6 + 0xf8) = uVar8;
          *(uint *)(iVar6 + 0xb8) = uVar2;
          *(uint *)(iVar6 + 0xbc) = uVar8;
          *(uint *)(iVar6 + 0x7c) = uVar2;
          *(uint *)(iVar6 + 0x80) = uVar8;
          *(uint *)(iVar6 + 0x40) = uVar2;
          *(uint *)(iVar6 + 0x44) = uVar8;
          *(uint *)(iVar6 + 4) = uVar2;
          *(uint *)(iVar6 + 8) = uVar8;
          iVar6 = DAT_70b46c18;
          uVar4 = *(undefined4 *)(DAT_70b46c18 + 0x92c);
          uVar10 = *(undefined4 *)(DAT_70b46c18 + 0x930);
          uVar9 = *(undefined4 *)(DAT_70b46c18 + 0x934);
          imp_rand();
          uVar3 = FUN_71ba1b94();
          uVar3 = FUN_71ba21e8(uVar3,0x30000000);
          uVar3 = FUN_71ba21e8(uVar2,uVar3);
          uVar3 = FUN_71ba0b38(uVar4,uVar3);
          uVar4 = imp_rand();
          uVar5 = imp_rand();
          *(undefined4 *)(iVar6 + 0x92c) = uVar3;
          uVar3 = FUN_71ba1b94(uVar4);
          uVar3 = FUN_71ba21e8(uVar3,0x30000000);
          uVar3 = FUN_71ba21e8(uVar2,uVar3);
          uVar3 = FUN_71ba0b38(uVar10,uVar3);
          *(undefined4 *)(iVar6 + 0x930) = uVar3;
          uVar3 = FUN_71ba1b94(uVar5);
          uVar3 = FUN_71ba21e8(uVar3,0x30000000);
          uVar3 = FUN_71ba21e8(uVar2,uVar3);
          uVar3 = FUN_71ba0b38(uVar9,uVar3);
          *(undefined4 *)(iVar6 + 0x934) = uVar3;
          return;
        }
        *(undefined4 *)(DAT_70b46c28 + 0x16c) = 0;
        *(undefined4 *)(iVar6 + 0x170) = 0;
        *(undefined4 *)(iVar6 + 0x130) = 0;
        *(undefined4 *)(iVar6 + 0x134) = 0;
        *(undefined4 *)(iVar6 + 0xf4) = 0;
        *(undefined4 *)(iVar6 + 0xf8) = 0;
        *(undefined4 *)(iVar6 + 0xb8) = 0;
        *(undefined4 *)(iVar6 + 0xbc) = 0;
        *(undefined4 *)(iVar6 + 0x7c) = 0;
        *(undefined4 *)(iVar6 + 0x80) = 0;
        *(undefined4 *)(iVar6 + 0x40) = 0;
        *(undefined4 *)(iVar6 + 0x44) = 0;
        *(undefined4 *)(iVar6 + 4) = 0;
        *(undefined4 *)(iVar6 + 8) = 0;
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714eb5e4
// Entry: 0x714eb5e4 | Size: 572 bytes
// =========================================================================

void FUN_714eb5e4(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  byte bVar16;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  
  FUN_715ab590();
  iVar5 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_71132e54 & 1) == 0) && (iVar7 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71132e54), iVar7 != 0)) {
    pcVar8 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bd0);
    if (*pcVar8 == '\0') {
      puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bc0);
      *(undefined1 *)((int)puVar9 + 0x11) = 1;
      uVar4 = DAT_70081d4c;
      uVar3 = DAT_70081d48;
      uVar15 = DAT_70081d44;
      *puVar9 = DAT_70081d40;
      puVar9[1] = uVar15;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      *(undefined1 *)(puVar9 + 4) = DAT_70081d50;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f2298,puVar9,&DAT_70b0e000);
      puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bd0);
      *puVar10 = 1;
    }
    iVar7 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bc0);
    if (*(char *)(iVar7 + 0x11) != '\0') {
      uVar11 = 0;
      uVar12 = 0;
      do {
        iVar13 = (uVar12 & 7) * 8;
        uVar14 = iVar13 - 0x20;
        bVar16 = (byte)(0xe943fb13 >> iVar13) |
                 (byte)(-0x5ed0d44d << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar14) {
          bVar16 = (byte)(0xa12f2bb3 >> (uVar14 & 0xff));
        }
        *(byte *)(iVar7 + uVar12) = *(byte *)(iVar7 + uVar12) ^ bVar16;
        bVar1 = uVar11 == 0;
        bVar2 = (0xf < uVar12) <= uVar11;
        uVar11 = uVar11 + (0xfffffffe < uVar12);
        uVar12 = uVar12 + 1;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar7 + 0x11) = 0;
    }
    DAT_71132e50 = FUN_71885ba4(iVar7,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71132e54);
  }
  uVar15 = DAT_71132e50;
  imp___aeabi_memclr4(&iStack_54,0x30);
  uStack_58 = uVar15;
  uVar15 = FUN_713a0424(&uStack_58,param_1);
  uVar15 = FUN_713a0424(uVar15,param_2);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar5 + 0x34);
  piVar6 = (int *)thunk_MwhHq(0x3c);
  *piVar6 = 0;
  piVar6[1] = 0;
  FUN_713a10f8(piVar6 + 2,uVar15);
  piVar6[1] = iVar5 + 0x38;
  iVar7 = *(int *)(iVar5 + 0x38);
  *piVar6 = iVar7;
  *(int **)(iVar7 + 4) = piVar6;
  *(int **)(iVar5 + 0x38) = piVar6;
  *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar5 + 0x34);
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
  return;
}


// =========================================================================
// Function: FUN_714ebbec
// Entry: 0x714ebbec | Size: 64 bytes
// =========================================================================

int * FUN_714ebbec(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_711a3938;
  if (*param_1 == -1) {
    return param_1;
  }
  *param_1 = -1;
  FUN_71563244(uVar1);
  return param_1;
}


// =========================================================================
// Function: FUN_714ebe70
// Entry: 0x714ebe70 | Size: 680 bytes
// =========================================================================

void FUN_714ebe70(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  
  if (DAT_712017f8 == 0) {
    return;
  }
  if (DAT_711a3938 == 0) {
    uVar14 = 0;
  }
  else {
    piVar16 = (int *)(DAT_711a3938 + 0x1389c);
    if (*piVar16 == 0) {
      uVar14 = 0;
      iVar5 = FUN_713c301c(0);
      if (iVar5 == 0) {
        if (*piVar16 == 0) goto LAB_714ebf04;
      }
      else {
        thunk_MwhHq(0x3a0);
        iVar5 = FUN_715ba834();
        *piVar16 = iVar5;
      }
    }
    iVar5 = FUN_71556e90();
    uVar14 = 0;
    if (iVar5 != 0) {
      uVar14 = 1;
    }
  }
LAB_714ebf04:
  iVar5 = DAT_712017f8;
  DataMemoryBarrier(0xb);
  if (((DAT_71132e5c & 1) == 0) && (iVar6 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71132e5c), iVar6 != 0)) {
    pcVar7 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bf0);
    if (*pcVar7 == '\0') {
      puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2be0);
      *(undefined1 *)(puVar8 + 7) = 1;
      uVar3 = DAT_70081d60;
      uVar17 = DAT_70081d5c;
      *puVar8 = DAT_70081d58;
      puVar8[1] = uVar17;
      puVar8[2] = uVar3;
      uVar4 = DAT_70081d70;
      uVar3 = DAT_70081d6c;
      uVar17 = DAT_70081d68;
      puVar8[3] = DAT_70081d64;
      puVar8[4] = uVar17;
      puVar8[5] = uVar3;
      puVar8[6] = uVar4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f22cc,puVar8,&DAT_70b0e000);
      puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2bf0);
      *puVar9 = 1;
    }
    iVar6 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2be0);
    if (*(char *)(iVar6 + 0x1c) != '\0') {
      uVar12 = 0;
      uVar15 = 0;
      do {
        iVar10 = (uVar12 & 7) * 8;
        uVar11 = iVar10 - 0x20;
        bVar13 = (byte)(0x8fbd6dbf >> iVar10) |
                 (byte)(0x558bf9a5 << ((uVar12 & 7) * -8 + 0x20 & 0xff));
        if (-1 < (int)uVar11) {
          bVar13 = (byte)(0x558bf9a5 >> (uVar11 & 0xff));
        }
        *(byte *)(iVar6 + uVar12) = *(byte *)(iVar6 + uVar12) ^ bVar13;
        bVar18 = 0xfffffffe < uVar12;
        bVar1 = uVar15 == 0;
        bVar2 = (0x1a < uVar12) <= uVar15;
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 + bVar18;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
    }
    DAT_71132e58 = FUN_71885ba4(iVar6,0);
    thunk_SixizuLbAnqfgRApsCY(&DAT_71132e5c);
  }
  uVar17 = DAT_71132e58;
  imp___aeabi_memclr4(&iStack_50,0x30);
  uStack_54 = uVar17;
  uVar14 = FUN_713a1f9c(&uStack_54,uVar14);
  thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar5 + 0x34);
  piVar16 = (int *)thunk_MwhHq(0x3c);
  *piVar16 = 0;
  piVar16[1] = 0;
  FUN_713a10f8(piVar16 + 2,uVar14);
  piVar16[1] = iVar5 + 0x38;
  iVar6 = *(int *)(iVar5 + 0x38);
  *piVar16 = iVar6;
  *(int **)(iVar6 + 4) = piVar16;
  *(int **)(iVar5 + 0x38) = piVar16;
  *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
  thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar5 + 0x34);
  if (iStack_38 != 0) {
    iStack_34 = iStack_38;
    thunk_qNQrlu();
  }
  if (iStack_44 != 0) {
    iStack_40 = iStack_44;
    thunk_qNQrlu();
  }
  if (iStack_50 != 0) {
    iStack_4c = iStack_50;
    thunk_qNQrlu();
  }
  return;
}


// =========================================================================
// Function: KzuPebjbFQBGtwNBHdr_GIUau
// Entry: 0x714ec53c | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void KzuPebjbFQBGtwNBHdr_GIUau(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0e43c;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_714ec5b8;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_714ec5b8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714ec6ac
// Entry: 0x714ec6ac | Size: 2180 bytes
// =========================================================================

int * FUN_714ec6ac(int *param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  byte *extraout_r1;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  int *piVar18;
  int *piVar19;
  bool bVar20;
  undefined8 uVar21;
  uint uStack_58;
  uint uStack_54;
  byte *pbStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar13 = *param_1;
  piVar3 = param_1;
  if (iVar13 != 4) {
    piVar3 = (int *)0x0;
  }
  if (iVar13 != 4 && iVar13 != 2) {
    return piVar3;
  }
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c10);
  if (*pcVar4 == '\0') {
    puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c00);
    *puVar11 = 0x8231786;
    puVar11[1] = 0x65e23f40;
    *(undefined1 *)((int)puVar11 + 0xb) = 1;
    *(undefined4 *)((int)puVar11 + 7) = 0x53028465;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f2308,puVar11,&DAT_70b0e000);
    puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c10);
    *puVar12 = 1;
  }
  pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c00);
  if (pbVar5[0xb] != 0) {
    *pbVar5 = *pbVar5 ^ 0xe7;
    pbVar5[1] = pbVar5[1] ^ 0x67;
    pbVar5[2] = pbVar5[2] ^ 0x53;
    pbVar5[3] = pbVar5[3] ^ 0x6d;
    pbVar5[0xb] = 0;
    pbVar5[4] = pbVar5[4] ^ 0x21;
    pbVar5[5] = pbVar5[5] ^ 0x4d;
    pbVar5[6] = pbVar5[6] ^ 0x83;
    pbVar5[7] = pbVar5[7] ^ 0xb;
    pbVar5[8] = pbVar5[8] ^ 0xe7;
    pbVar5[9] = pbVar5[9] ^ 0x67;
    pbVar5[10] = pbVar5[10] ^ 0x53;
  }
  uVar6 = imp_strlen(pbVar5);
  if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_58);
  }
  if (uVar6 < 0xb) {
    pbVar14 = (byte *)((uint)&uStack_58 | 1);
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)(uVar6 << 1));
    if (uVar6 != 0) goto LAB_714ec7ec;
  }
  else {
    pbVar14 = (byte *)thunk_MwhHq((uVar6 | 7) + 1);
    uStack_58 = (uVar6 | 7) + 2;
    uStack_54 = uVar6;
    pbStack_50 = pbVar14;
LAB_714ec7ec:
    imp___aeabi_memmove(pbVar14,pbVar5,uVar6);
  }
  pbVar14[uVar6] = 0;
  uVar21 = FUN_714f2964(param_1 + 0x12,&uStack_58);
  pbVar5 = (byte *)((ulonglong)uVar21 >> 0x20);
  piVar3 = (int *)uVar21;
  if ((uStack_58 & 1) != 0) {
    thunk_qNQrlu(pbStack_50);
    pbVar5 = extraout_r1;
  }
  if (param_1 + 0x13 != piVar3) {
    pbVar14 = (byte *)piVar3[7];
    pbVar5 = (byte *)piVar3[8];
  }
  if (param_1 + 0x13 != piVar3 && pbVar14 != pbVar5) {
    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c30);
    if (*pcVar4 == '\0') {
      puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c20);
      *puVar11 = 0xfbcce248;
      *(undefined1 *)((int)puVar11 + 7) = 1;
      *(undefined4 *)((int)puVar11 + 3) = 0x9306d4fb;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f2334,puVar11,&DAT_70b0e000);
      puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c30);
      *puVar12 = 1;
    }
    pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c20);
    if (pbVar5[7] != 0) {
      pbVar5[7] = 0;
      *pbVar5 = *pbVar5 ^ 0x2b;
      pbVar5[1] = pbVar5[1] ^ 0x97;
      pbVar5[2] = pbVar5[2] ^ 0xbf;
      pbVar5[3] = pbVar5[3] ^ 0x8f;
      pbVar5[4] = pbVar5[4] ^ 0xbb;
      pbVar5[5] = pbVar5[5] ^ 0x6b;
      pbVar5[6] = pbVar5[6] ^ 0x93;
    }
    uVar7 = imp_strlen(pbVar5);
    bVar1 = *pbVar14;
    uVar6 = *(uint *)(pbVar14 + 4);
    if ((bVar1 & 1) == 0) {
      uVar6 = (uint)(bVar1 >> 1);
    }
    if (uVar7 == uVar6) {
      if (uVar7 == 0xffffffff) goto LAB_714ecf1c;
      pbVar8 = *(byte **)(pbVar14 + 8);
      if ((bVar1 & 1) == 0) {
        pbVar8 = pbVar14 + 1;
      }
      iVar13 = imp_memcmp(pbVar8,pbVar5);
      pbVar14 = (byte *)piVar3[7];
      pbVar5 = (byte *)piVar3[8];
      if (iVar13 == 0) {
        if ((int)pbVar5 - (int)pbVar14 != 0x18) {
          return (int *)0x1;
        }
        iVar13 = FUN_715291e4(pbVar14 + 0xc,param_1 + 0x16);
        if (iVar13 == 0) {
          return (int *)0x1;
        }
        uVar9 = FUN_7153ffec();
        FUN_7153df30(param_1 + 0x16,uVar9,param_1 + 0x9b);
        iVar13 = 0x834;
        if ((char)param_1[0x20c] == '\0') {
          iVar13 = 0x270;
        }
        iVar15 = *(int *)((int)param_1 + iVar13);
        iVar13 = FUN_715ec150(iVar15);
        if (iVar13 == 0) {
          return (int *)0x1;
        }
        *(undefined1 *)(param_1 + 0x15) = 1;
        param_1[2] = iVar15;
        if (*param_1 == 4) {
          if (param_1[0x9a] != 0) {
            return (int *)0x1;
          }
          sVar17 = *(short *)((int)param_1 + 0x56);
          piVar3 = param_1 + 0x1a;
          iVar13 = 0x11;
          do {
            sVar2 = (short)*piVar3;
            if (sVar2 != -1) {
              pbVar5 = (byte *)(uint)*(byte *)((int)piVar3 + 2);
            }
            if (sVar2 != -1 && pbVar5 != (byte *)0x0) {
              if (sVar17 != -1 && sVar17 != sVar2) {
                return (int *)0x1;
              }
              *(short *)((int)param_1 + 0x56) = sVar2;
              sVar17 = sVar2;
            }
            piVar3 = (int *)((int)piVar3 + 0x12);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        goto LAB_714ec844;
      }
    }
    else {
      pbVar14 = (byte *)piVar3[7];
      pbVar5 = (byte *)piVar3[8];
    }
    if (pbVar14 != pbVar5) {
      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c50);
      if (*pcVar4 == '\0') {
        puVar11 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c40);
        *puVar11 = 0xd4e0946d;
        *(undefined1 *)((int)puVar11 + 6) = 1;
        *(undefined2 *)(puVar11 + 1) = 0x73f;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f235c,puVar11,&DAT_70b0e000);
        puVar12 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c50);
        *puVar12 = 1;
      }
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c40);
      if (pbVar5[6] != 0) {
        pbVar5[6] = 0;
        *pbVar5 = *pbVar5 ^ 1;
        pbVar5[1] = pbVar5[1] ^ 0xfb;
        pbVar5[2] = pbVar5[2] ^ 0x83;
        pbVar5[3] = pbVar5[3] ^ 0xb5;
        pbVar5[4] = pbVar5[4] ^ 0x53;
        pbVar5[5] = pbVar5[5] ^ 7;
      }
      uVar7 = imp_strlen(pbVar5);
      bVar1 = *pbVar14;
      uVar6 = *(uint *)(pbVar14 + 4);
      if ((bVar1 & 1) == 0) {
        uVar6 = (uint)(bVar1 >> 1);
      }
      if (uVar7 == uVar6) {
        if (uVar7 == 0xffffffff) {
LAB_714ecf1c:
                    /* WARNING: Subroutine does not return */
          FUN_712f6b48(pbVar14);
        }
        pbVar8 = *(byte **)(pbVar14 + 8);
        if ((bVar1 & 1) == 0) {
          pbVar8 = pbVar14 + 1;
        }
        iVar13 = imp_memcmp(pbVar8,pbVar5);
        if ((iVar13 == 0) && (DAT_711a3938 != 0)) {
          piVar3 = (int *)(DAT_711a3938 + 0x1389c);
          iVar13 = *piVar3;
          if (iVar13 == 0) {
            iVar13 = FUN_713c301c(0);
            if (iVar13 == 0) {
              iVar13 = *piVar3;
              if (iVar13 == 0) goto LAB_714ec844;
            }
            else {
              iVar13 = thunk_MwhHq(0x3a0);
              iVar15 = FUN_715ba834();
              *piVar3 = iVar15;
            }
          }
          if (*(int *)(iVar13 + 0x8c) != 0) {
            iVar16 = (int)*(short *)(*(int *)(iVar13 + 0x8c) + 0x26);
            iVar15 = FUN_715ec150(iVar16);
            if (iVar15 != 0) {
              param_1[2] = iVar16;
            }
            iVar15 = FUN_71556e90(iVar13);
            if (iVar15 != 0) {
              imp___aeabi_memcpy4(param_1 + 0x16,iVar15 + 4,0x214);
              uVar9 = FUN_7153ffec();
              FUN_7153df30(param_1 + 0x16,uVar9,param_1 + 0x9b);
              iVar15 = 0x834;
              if ((char)param_1[0x20c] == '\0') {
                iVar15 = 0x270;
              }
              iVar16 = *(int *)((int)param_1 + iVar15);
              iVar15 = FUN_715ec150(iVar16);
              if (iVar15 != 0) {
                param_1[2] = iVar16;
                *(undefined1 *)(param_1 + 0x15) = 1;
              }
            }
            piVar3 = *(int **)(iVar13 + 0x94);
            if (piVar3 != (int *)(iVar13 + 0x98)) {
              do {
                FUN_7136cdfc(&pbStack_50);
                FUN_7136cdfc(&iStack_44);
                FUN_7136cdfc(&iStack_38);
                uStack_54 = piVar3[6];
                uStack_58 = piVar3[5];
                FUN_7136d040(&pbStack_50,piVar3 + 7);
                FUN_7136d040(&iStack_44,piVar3 + 10);
                FUN_7136d040(&iStack_38,piVar3 + 0xd);
                iStack_2c = piVar3[0x10];
                piVar19 = (int *)param_1[0x20f];
                iStack_28 = piVar3[0x11];
                if (piVar19 < (int *)param_1[0x210]) {
                  piVar18 = piVar19 + 0xe;
                  *piVar19 = piVar3[4];
                  piVar19[1] = uStack_58;
                  piVar19[2] = uStack_54;
                  piVar19[3] = (int)pbStack_50;
                  piVar19[4] = iStack_4c;
                  piVar19[5] = iStack_48;
                  piVar19[6] = iStack_44;
                  piVar19[7] = iStack_40;
                  piVar19[8] = iStack_3c;
                  piVar19[9] = iStack_38;
                  piVar19[10] = iStack_34;
                  piVar19[0xb] = iStack_30;
                  piVar19[0xc] = iStack_2c;
                  piVar19[0xd] = iStack_28;
                }
                else {
                  iVar15 = param_1[0x20e];
                  iVar16 = (int)piVar19 - iVar15;
                  uVar6 = (iVar16 >> 3) * -0x49249249 + 1;
                  if (0x4924924 < uVar6) {
                    FUN_714f2ab4(param_1 + 0x20e);
LAB_714ecf2c:
                    /* WARNING: Subroutine does not return */
                    FUN_712f6cf0();
                  }
                  iVar10 = param_1[0x210] - iVar15 >> 3;
                  if (uVar6 < (uint)(iVar10 * 0x6db6db6e)) {
                    uVar6 = iVar10 * 0x6db6db6e;
                  }
                  if (0x2492491 < (uint)(iVar10 * -0x49249249)) {
                    uVar6 = 0x4924924;
                  }
                  if (uVar6 == 0) {
                    iVar10 = 0;
                  }
                  else {
                    if (0x4924924 < uVar6) goto LAB_714ecf2c;
                    iVar10 = thunk_MwhHq(uVar6 * 0x38);
                  }
                  piVar19 = (int *)(iVar10 + (iVar16 >> 3) * 8);
                  *piVar19 = piVar3[4];
                  piVar19[1] = uStack_58;
                  piVar19[2] = uStack_54;
                  piVar19[3] = (int)pbStack_50;
                  piVar19[4] = iStack_4c;
                  piVar19[5] = iStack_48;
                  piVar19[6] = iStack_44;
                  piVar19[7] = iStack_40;
                  piVar19[8] = iStack_3c;
                  piVar19[9] = iStack_38;
                  piVar19[10] = iStack_34;
                  piVar19[0xb] = iStack_30;
                  piVar19[0xc] = iStack_2c;
                  piVar19[0xd] = iStack_28;
                  imp___aeabi_memcpy4((int)piVar19 - iVar16,iVar15,iVar16);
                  piVar18 = piVar19 + 0xe;
                  param_1[0x20e] = (int)piVar19 - iVar16;
                  param_1[0x20f] = (int)piVar18;
                  param_1[0x210] = iVar10 + uVar6 * 0x38;
                  if (iVar15 != 0) {
                    thunk_qNQrlu(iVar15);
                  }
                }
                param_1[0x20f] = (int)piVar18;
                piVar19 = (int *)piVar3[1];
                piVar18 = piVar3;
                if ((int *)piVar3[1] == (int *)0x0) {
                  do {
                    piVar3 = (int *)piVar18[2];
                    bVar20 = (int *)*piVar3 != piVar18;
                    piVar18 = piVar3;
                  } while (bVar20);
                }
                else {
                  do {
                    piVar3 = piVar19;
                    piVar19 = (int *)*piVar3;
                  } while ((int *)*piVar3 != (int *)0x0);
                }
              } while (piVar3 != (int *)(iVar13 + 0x98));
            }
          }
        }
      }
    }
  }
LAB_714ec844:
  return (int *)(uint)(*param_1 == 4 && *(short *)((int)param_1 + 0x56) == -1);
}


// =========================================================================
// Function: FUN_714ed720
// Entry: 0x714ed720 | Size: 2884 bytes
// =========================================================================

uint FUN_714ed720(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  int iStack_2c;
  int *piStack_28;
  
  uVar11 = 0;
  piStack_28 = (int *)0x0;
  switch(*param_1) {
  case 0:
    iVar1 = param_1[2];
    if (iVar1 - 0xde0U < 2) {
      iVar1 = 0x48c7;
    }
    else {
      iVar9 = 0xc2e;
      if (iVar1 != 0xc2e) {
        iVar9 = 0x55d;
      }
      if (iVar1 == 0xc2e || iVar1 == iVar9) {
        iVar1 = 0x48c7;
      }
    }
    if (*(int *)(DAT_70c39074 + iVar1 * 4) == 0) {
      return 0;
    }
    piVar19 = (int *)param_1[0x220];
    param_1[2] = iVar1;
    if (piVar19 < (int *)param_1[0x221]) {
      piVar15 = piVar19 + 1;
      *piVar19 = iVar1;
    }
    else {
      iVar17 = param_1[0x21f];
      iVar9 = (int)piVar19 - iVar17 >> 2;
      uVar11 = iVar9 + 1;
      if (0x3fffffff < uVar11) {
LAB_714ee26c:
                    /* WARNING: Subroutine does not return */
        FUN_714f2b1c(param_1 + 0x21f);
      }
      uVar4 = (int)param_1[0x221] - iVar17;
      uVar20 = (int)uVar4 >> 1;
      if (uVar11 < uVar20) {
        uVar11 = uVar20;
      }
      if (0x7ffffffb < uVar4) {
        uVar11 = 0x3fffffff;
      }
      if (uVar11 == 0) {
        iVar3 = 0;
      }
      else {
        if (0x3fffffff < uVar11) goto LAB_714ee264;
        iVar3 = thunk_MwhHq(uVar11 << 2);
      }
      piVar15 = (int *)(iVar3 + iVar9 * 4);
      *piVar15 = iVar1;
      imp___aeabi_memcpy4(iVar3,iVar17,(int)piVar19 - iVar17);
      piVar15 = piVar15 + 1;
      param_1[0x21f] = iVar3;
      param_1[0x220] = piVar15;
      param_1[0x221] = iVar3 + uVar11 * 4;
      if (iVar17 != 0) {
        thunk_qNQrlu(iVar17);
      }
    }
    param_1[0x220] = piVar15;
    break;
  case 1:
    iVar1 = FUN_715ec200(param_1[2]);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c70);
    if (*pcVar6 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c60);
      *puVar12 = 0x3a643ce7;
      *(undefined1 *)((int)puVar12 + 6) = 1;
      *(undefined2 *)(puVar12 + 1) = 0x2587;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f24d4,puVar12,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c70);
      *puVar8 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c60);
    if (pbVar7[6] != 0) {
      pbVar7[6] = 0;
      *pbVar7 = *pbVar7 ^ 0x83;
      pbVar7[1] = pbVar7[1] ^ 0x59;
      pbVar7[2] = pbVar7[2] ^ 7;
      pbVar7[3] = pbVar7[3] ^ 0x5b;
      pbVar7[4] = pbVar7[4] ^ 0xeb;
      pbVar7[5] = pbVar7[5] ^ 0x25;
    }
    iVar1 = FUN_714eed54(param_1,pbVar7,8);
    if (iVar1 != 0) {
      return 0;
    }
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c90);
    if (*pcVar6 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c80);
      *puVar12 = 0x3a653ef1;
      puVar12[1] = 0x32046b4;
      *(undefined1 *)((int)puVar12 + 0xb) = 1;
      *(undefined4 *)((int)puVar12 + 7) = 0x72bec03;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f24fc,puVar12,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c90);
      *puVar8 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2c80);
    if (pbVar7[0xb] != 0) {
      *pbVar7 = *pbVar7 ^ 0x83;
      pbVar7[1] = pbVar7[1] ^ 0x59;
      pbVar7[2] = pbVar7[2] ^ 7;
      pbVar7[3] = pbVar7[3] ^ 0x5b;
      pbVar7[0xb] = 0;
      pbVar7[4] = pbVar7[4] ^ 0xeb;
      pbVar7[5] = pbVar7[5] ^ 0x25;
      pbVar7[6] = pbVar7[6] ^ 0x4f;
      pbVar7[7] = pbVar7[7] ^ 0x6f;
      pbVar7[8] = pbVar7[8] ^ 0x83;
      pbVar7[9] = pbVar7[9] ^ 0x59;
      pbVar7[10] = pbVar7[10] ^ 7;
    }
    iVar1 = FUN_714eed54(param_1,pbVar7,2);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = param_1[2];
    if (iVar1 == 0x239) {
      iVar9 = 0x219;
    }
    else {
      iVar9 = 0x21a;
      if (iVar1 != 0x23a) {
        iVar9 = iVar1;
      }
    }
    piVar15 = param_1 + 0x21f;
    piVar19 = (int *)param_1[0x220];
    if (piVar19 < (int *)param_1[0x221]) {
      piVar16 = piVar19 + 1;
      *piVar19 = iVar9;
    }
    else {
      iVar17 = *piVar15;
      iVar1 = (int)piVar19 - iVar17 >> 2;
      uVar20 = iVar1 + 1;
      if (0x3fffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_714f2b1c(piVar15);
      }
      uVar2 = (int)param_1[0x221] - iVar17;
      uVar4 = (int)uVar2 >> 1;
      if (uVar20 < uVar4) {
        uVar20 = uVar4;
      }
      if (0x7ffffffb < uVar2) {
        uVar20 = 0x3fffffff;
      }
      if (uVar20 != 0) {
        if (0x3fffffff < uVar20) {
LAB_714ee264:
                    /* WARNING: Subroutine does not return */
          FUN_712f6cf0();
        }
        uVar11 = thunk_MwhHq(uVar20 << 2);
      }
      piVar16 = (int *)(uVar11 + iVar1 * 4);
      *piVar16 = iVar9;
      imp___aeabi_memcpy4(uVar11,iVar17,(int)piVar19 - iVar17);
      piVar16 = piVar16 + 1;
      param_1[0x21f] = uVar11;
      param_1[0x220] = piVar16;
      param_1[0x221] = uVar11 + uVar20 * 4;
      if (iVar17 != 0) {
        thunk_qNQrlu(iVar17);
      }
    }
    param_1[0x220] = piVar16;
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2cb0);
    if (*pcVar6 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2ca0);
      *puVar12 = 0xa25bd6ef;
      *(undefined2 *)(puVar12 + 1) = 0x12f;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f2528,puVar12,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2cb0);
      *puVar8 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2ca0);
    if (pbVar7[5] != 0) {
      pbVar7[5] = 0;
      *pbVar7 = *pbVar7 ^ 0x9b;
      pbVar7[1] = pbVar7[1] ^ 0xa3;
      pbVar7[2] = pbVar7[2] ^ 0x35;
      pbVar7[3] = pbVar7[3] ^ 199;
      pbVar7[4] = pbVar7[4] ^ 0x2f;
    }
    iVar1 = FUN_714eef04(param_1,pbVar7,1,&piStack_28);
    if (iVar1 == 0) {
      return (uint)(piStack_28 == (int *)0x0);
    }
    pbVar10 = (byte *)*piStack_28;
    pbVar7 = *(byte **)(pbVar10 + 8);
    if ((*pbVar10 & 1) == 0) {
      pbVar7 = pbVar10 + 1;
    }
    iStack_2c = imp_atoi(pbVar7);
    if (*(int *)(DAT_70c39074 + iStack_2c * 4) == 0) {
      return 0;
    }
    FUN_714eebd8(piVar15,&iStack_2c);
    break;
  case 2:
  case 4:
    if (param_1[2] == 0x4a || param_1[2] == 0) {
      param_1[2] = 1;
    }
    iVar1 = FUN_715ec150();
    if (iVar1 == 0) {
      return 0;
    }
    piVar19 = param_1 + 0x21f;
    puVar12 = (undefined4 *)param_1[0x220];
    if (puVar12 < (undefined4 *)param_1[0x221]) {
      piVar15 = puVar12 + 1;
      *puVar12 = param_1[2];
    }
    else {
      iVar9 = *piVar19;
      iVar1 = (int)puVar12 - iVar9 >> 2;
      uVar11 = iVar1 + 1;
      if (0x3fffffff < uVar11) goto LAB_714ee26c;
      uVar4 = (int)param_1[0x221] - iVar9;
      uVar20 = (int)uVar4 >> 1;
      if (uVar11 < uVar20) {
        uVar11 = uVar20;
      }
      if (0x7ffffffb < uVar4) {
        uVar11 = 0x3fffffff;
      }
      if (uVar11 == 0) {
        iVar17 = 0;
      }
      else {
        if (0x3fffffff < uVar11) goto LAB_714ee264;
        iVar17 = thunk_MwhHq(uVar11 << 2);
      }
      puVar13 = (undefined4 *)(iVar17 + iVar1 * 4);
      *puVar13 = param_1[2];
      imp___aeabi_memcpy4(iVar17,iVar9,(int)puVar12 - iVar9);
      piVar15 = puVar13 + 1;
      param_1[0x21f] = iVar17;
      param_1[0x220] = piVar15;
      param_1[0x221] = iVar17 + uVar11 * 4;
      if (iVar9 != 0) {
        thunk_qNQrlu(iVar9);
      }
    }
    param_1[0x220] = piVar15;
    if ((*(char *)(param_1 + 0x15) != '\0') && (*(char *)(param_1 + 0x20c) == '\0')) {
      iVar1 = param_1[0x9e];
      if (-1 < iVar1) {
        if (piVar15 < (int *)param_1[0x221]) {
          piVar16 = piVar15 + 1;
          *piVar15 = iVar1;
        }
        else {
          iVar17 = *piVar19;
          iVar9 = (int)piVar15 - iVar17 >> 2;
          uVar11 = iVar9 + 1;
          if (0x3fffffff < uVar11) {
LAB_714ee25c:
                    /* WARNING: Subroutine does not return */
            FUN_714f2b1c(piVar19);
          }
          uVar4 = (int)param_1[0x221] - iVar17;
          uVar20 = (int)uVar4 >> 1;
          if (uVar11 < uVar20) {
            uVar11 = uVar20;
          }
          if (0x7ffffffb < uVar4) {
            uVar11 = 0x3fffffff;
          }
          if (uVar11 == 0) {
            iVar3 = 0;
          }
          else {
            if (0x3fffffff < uVar11) goto LAB_714ee264;
            iVar3 = thunk_MwhHq(uVar11 << 2);
          }
          piVar16 = (int *)(iVar3 + iVar9 * 4);
          *piVar16 = iVar1;
          imp___aeabi_memcpy4(iVar3,iVar17,(int)piVar15 - iVar17);
          piVar16 = piVar16 + 1;
          param_1[0x21f] = iVar3;
          param_1[0x220] = piVar16;
          param_1[0x221] = iVar3 + uVar11 * 4;
          if (iVar17 != 0) {
            thunk_qNQrlu(iVar17);
          }
        }
        param_1[0x220] = piVar16;
        piVar15 = piVar16;
      }
      uVar11 = param_1[0x1d1];
      if (uVar11 != 0) {
        uVar20 = 0;
        piVar16 = param_1 + 0xa1;
        piVar14 = piVar15;
        do {
          iVar1 = *piVar16;
          piVar15 = piVar14;
          if (-1 < iVar1) {
            if (piVar14 < (int *)param_1[0x221]) {
              piVar15 = piVar14 + 1;
              *piVar14 = iVar1;
            }
            else {
              iVar17 = *piVar19;
              iVar9 = (int)piVar14 - iVar17 >> 2;
              uVar11 = iVar9 + 1;
              if (0x3fffffff < uVar11) goto LAB_714ee25c;
              uVar2 = (int)param_1[0x221] - iVar17;
              uVar4 = (int)uVar2 >> 1;
              if (uVar11 < uVar4) {
                uVar11 = uVar4;
              }
              if (0x7ffffffb < uVar2) {
                uVar11 = 0x3fffffff;
              }
              if (uVar11 == 0) {
                iVar3 = 0;
              }
              else {
                if (0x3fffffff < uVar11) goto LAB_714ee264;
                iVar3 = thunk_MwhHq(uVar11 << 2);
              }
              piVar15 = (int *)(iVar3 + iVar9 * 4);
              *piVar15 = iVar1;
              imp___aeabi_memcpy4(iVar3,iVar17,(int)piVar14 - iVar17);
              piVar15 = piVar15 + 1;
              param_1[0x21f] = iVar3;
              param_1[0x220] = piVar15;
              param_1[0x221] = iVar3 + uVar11 * 4;
              if (iVar17 != 0) {
                thunk_qNQrlu(iVar17);
              }
            }
            uVar11 = param_1[0x1d1];
            param_1[0x220] = piVar15;
          }
          uVar20 = uVar20 + 1;
          piVar16 = piVar16 + 0x12;
          piVar14 = piVar15;
        } while (uVar20 < uVar11);
      }
    }
    iVar9 = param_1[0x20f];
    for (iVar1 = param_1[0x20e]; iVar1 != iVar9; iVar1 = iVar1 + 0x38) {
      iVar17 = *(int *)(iVar1 + 4);
      if (piVar15 < (int *)param_1[0x221]) {
        piVar16 = piVar15 + 1;
        *piVar15 = iVar17;
      }
      else {
        iVar18 = *piVar19;
        iVar3 = (int)piVar15 - iVar18 >> 2;
        uVar11 = iVar3 + 1;
        if (0x3fffffff < uVar11) goto LAB_714ee25c;
        uVar4 = (int)param_1[0x221] - iVar18;
        uVar20 = (int)uVar4 >> 1;
        if (uVar11 < uVar20) {
          uVar11 = uVar20;
        }
        if (0x7ffffffb < uVar4) {
          uVar11 = 0x3fffffff;
        }
        if (uVar11 == 0) {
          iVar5 = 0;
        }
        else {
          if (0x3fffffff < uVar11) goto LAB_714ee264;
          iVar5 = thunk_MwhHq(uVar11 << 2);
        }
        piVar16 = (int *)(iVar5 + iVar3 * 4);
        *piVar16 = iVar17;
        imp___aeabi_memcpy4(iVar5,iVar18,(int)piVar15 - iVar18);
        piVar16 = piVar16 + 1;
        param_1[0x21f] = iVar5;
        param_1[0x220] = piVar16;
        param_1[0x221] = iVar5 + uVar11 * 4;
        if (iVar18 != 0) {
          thunk_qNQrlu(iVar18);
        }
      }
      param_1[0x220] = piVar16;
      piVar15 = piVar16;
    }
    pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2cd0);
    if (*pcVar6 == '\0') {
      puVar12 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2cc0);
      *puVar12 = 0xd4a5fddc;
      *(undefined1 *)((int)puVar12 + 7) = 1;
      *(undefined4 *)((int)puVar12 + 3) = 0x910738d4;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_714f2550,puVar12,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2cd0);
      *puVar8 = 1;
    }
    pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2cc0);
    iVar1 = 0;
    if (pbVar7[7] != 0) {
      pbVar7[7] = 0;
      *pbVar7 = *pbVar7 ^ 0xbd;
      pbVar7[1] = pbVar7[1] ^ 0x89;
      pbVar7[2] = pbVar7[2] ^ 0xd1;
      pbVar7[3] = pbVar7[3] ^ 0xb5;
      pbVar7[4] = pbVar7[4] ^ 0x5b;
      pbVar7[5] = pbVar7[5] ^ 0x6f;
      pbVar7[6] = pbVar7[6] ^ 0x91;
    }
    iVar9 = FUN_714eef04(param_1,pbVar7,0xe,&piStack_28);
    if (iVar9 == 0) {
      return (uint)(piStack_28 == (int *)0x0);
    }
    iVar17 = *piStack_28;
    iVar9 = *(int *)(iVar17 + 0x14);
    if ((*(byte *)(iVar17 + 0xc) & 1) == 0) {
      iVar9 = iVar17 + 0xd;
    }
    iVar9 = imp_atoi(iVar9);
    if (*(int *)(DAT_70c39074 + iVar9 * 4) == 0) {
      return 0;
    }
    piVar15 = (int *)param_1[0x220];
    if (piVar15 < (int *)param_1[0x221]) {
      piVar19 = piVar15 + 1;
      *piVar15 = iVar9;
    }
    else {
      iVar3 = *piVar19;
      iVar17 = (int)piVar15 - iVar3 >> 2;
      uVar11 = iVar17 + 1;
      if (0x3fffffff < uVar11) goto LAB_714ee26c;
      uVar4 = (int)param_1[0x221] - iVar3;
      uVar20 = (int)uVar4 >> 1;
      if (uVar11 < uVar20) {
        uVar11 = uVar20;
      }
      if (0x7ffffffb < uVar4) {
        uVar11 = 0x3fffffff;
      }
      if (uVar11 != 0) {
        if (0x3fffffff < uVar11) goto LAB_714ee264;
        iVar1 = thunk_MwhHq(uVar11 << 2);
      }
      piVar19 = (int *)(iVar1 + iVar17 * 4);
      *piVar19 = iVar9;
      imp___aeabi_memcpy4(iVar1,iVar3,(int)piVar15 - iVar3);
      piVar19 = piVar19 + 1;
      param_1[0x21f] = iVar1;
      param_1[0x220] = piVar19;
      param_1[0x221] = iVar1 + uVar11 * 4;
      if (iVar3 != 0) {
        thunk_qNQrlu(iVar3);
      }
    }
    param_1[0x220] = piVar19;
    break;
  case 3:
    uVar20 = param_1[0x212];
    if ((*(byte *)(param_1 + 0x211) & 1) == 0) {
      uVar20 = (uint)(*(byte *)(param_1 + 0x211) >> 1);
    }
    if (uVar20 != 0) {
      uVar11 = param_1[0x215];
      if ((*(byte *)(param_1 + 0x214) & 1) == 0) {
        uVar11 = (uint)(*(byte *)(param_1 + 0x214) >> 1);
      }
      uVar11 = (uint)(uVar11 != 0);
    }
  default:
    goto switchD_714ed750_default;
  }
  uVar11 = 1;
switchD_714ed750_default:
  return uVar11;
}


// =========================================================================
// Function: FUN_714eebd8
// Entry: 0x714eebd8 | Size: 216 bytes
// =========================================================================

void FUN_714eebd8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar5 = (undefined4 *)param_1[1];
  if (puVar5 < (undefined4 *)param_1[2]) {
    puVar7 = puVar5 + 1;
    *puVar5 = *param_2;
  }
  else {
    iVar8 = *param_1;
    iVar1 = (int)puVar5 - iVar8 >> 2;
    uVar6 = iVar1 + 1;
    if (0x3fffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_714f2b1c(param_1);
    }
    uVar3 = param_1[2] - iVar8;
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
      if (0x3fffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_712f6cf0();
      }
      iVar4 = thunk_MwhHq(uVar6 << 2);
    }
    puVar7 = (undefined4 *)(iVar4 + iVar1 * 4);
    *puVar7 = *param_2;
    imp___aeabi_memcpy4(iVar4,iVar8,(int)puVar5 - iVar8);
    puVar7 = puVar7 + 1;
    *param_1 = iVar4;
    param_1[1] = (int)puVar7;
    param_1[2] = iVar4 + uVar6 * 4;
    if (iVar8 != 0) {
      thunk_qNQrlu(iVar8);
    }
  }
  param_1[1] = (int)puVar7;
  return;
}


// =========================================================================
// Function: FUN_714eed54
// Entry: 0x714eed54 | Size: 240 bytes
// =========================================================================

undefined4 FUN_714eed54(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar1 < 0xb) {
    uVar4 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_714eedd8;
  }
  else {
    uVar4 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_30 = (uVar1 | 7) + 2;
    uStack_2c = uVar1;
    uStack_28 = uVar4;
  }
  imp___aeabi_memcpy(uVar4,param_2,uVar1);
LAB_714eedd8:
  uVar3 = 0;
  *(undefined1 *)(uVar4 + uVar1) = 0;
  iVar2 = FUN_714f2384(param_1 + 0x48,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if ((param_1 + 0x4c != iVar2) &&
     ((uint)((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2) * -0x55555555) < param_3)) {
    uVar3 = 1;
  }
  return uVar3;
}


// =========================================================================
// Function: FUN_714eef04
// Entry: 0x714eef04 | Size: 276 bytes
// =========================================================================

undefined4 FUN_714eef04(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar1 = imp_strlen(param_2);
  if (0xfffffff7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_30);
  }
  if (uVar1 < 0xb) {
    uVar3 = (uint)&uStack_30 | 1;
    uStack_30 = CONCAT31(uStack_30._1_3_,(char)(uVar1 << 1));
    if (uVar1 == 0) goto LAB_714eefa4;
  }
  else {
    uVar3 = thunk_MwhHq((uVar1 | 7) + 1);
    uStack_30 = (uVar1 | 7) + 2;
    uStack_2c = uVar1;
    uStack_28 = uVar3;
  }
  imp___aeabi_memcpy(uVar3,param_2,uVar1);
LAB_714eefa4:
  uVar4 = 0;
  *(undefined1 *)(uVar3 + uVar1) = 0;
  iVar2 = FUN_714f2384(param_1 + 0x48,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    thunk_qNQrlu(uStack_28);
  }
  if ((param_1 + 0x4c != iVar2) &&
     (*param_4 = iVar2 + 0x1c,
     param_3 <= (uint)((*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2) * -0x55555555))) {
    uVar4 = 1;
  }
  return uVar4;
}


// =========================================================================
// Function: FUN_714ef0d8
// Entry: 0x714ef0d8 | Size: 100 bytes
// =========================================================================

void FUN_714ef0d8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = DAT_70b41f74;
  piVar4 = *(int **)(param_1 + 0x880);
  for (piVar3 = *(int **)(param_1 + 0x87c); piVar3 != piVar4; piVar3 = piVar3 + 1) {
    iVar2 = iVar1 + *piVar3 * 0x14;
    bVar5 = *(int *)(iVar2 + 0xc) != 0;
    if (bVar5) {
      iVar2 = *(int *)(iVar2 + 0x10);
    }
    if (bVar5 && iVar2 != 1) {
      FUN_7135d734(*piVar3,0x14);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714ef190
// Entry: 0x714ef190 | Size: 196 bytes
// =========================================================================

void FUN_714ef190(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iStack_28;
  
  iVar1 = DAT_70c39074;
  piVar4 = *(int **)(param_1 + 0x87c);
  piVar3 = *(int **)(param_1 + 0x880);
  if (piVar4 != piVar3) {
    piVar2 = *(int **)(param_1 + 0x88c);
    do {
      iStack_28 = *piVar4;
      if (piVar2 < *(int **)(param_1 + 0x890)) {
        *piVar2 = -1;
        if ((iStack_28 != 7) && (*(int *)(iVar1 + iStack_28 * 4) != 0)) {
          *piVar2 = iStack_28;
          FUN_715631e8(DAT_711a3938);
        }
        piVar2 = piVar2 + 1;
      }
      else {
        piVar2 = (int *)FUN_714f2b84(param_1 + 0x888,&iStack_28);
      }
      piVar4 = piVar4 + 1;
      *(int **)(param_1 + 0x88c) = piVar2;
    } while (piVar4 != piVar3);
  }
  return;
}


// =========================================================================
// Function: FUN_714ef2e4
// Entry: 0x714ef2e4 | Size: 408 bytes
// =========================================================================

undefined4 FUN_714ef2e4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int unaff_r5;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  
  iVar1 = DAT_70b41f74;
  piVar7 = *(int **)(param_1 + 0x87c);
  piVar6 = *(int **)(param_1 + 0x880);
  if (piVar7 == piVar6) {
    return 0;
  }
  piVar4 = piVar7;
  bVar8 = false;
  while( true ) {
    bVar3 = bVar8;
    bVar8 = *(char *)(param_1 + 0x54) == '\0';
    iVar5 = DAT_70b41f74 + *piVar4 * 0x14;
    if (bVar8) {
      unaff_r5 = *(int *)(iVar5 + 0xc);
    }
    if (bVar8 && unaff_r5 == 0) break;
    piVar4 = piVar4 + 1;
    bVar9 = *(int *)(iVar5 + 0x10) != 1;
    bVar8 = (bool)(bVar9 | bVar3);
    if (piVar4 == piVar6) {
      uVar2 = 0;
      if (bVar9 || bVar3) {
        if ((uint)(param_2 - *(int *)(param_1 + 0x870)) < 3000) {
          uVar2 = 1;
          if (499 < (uint)(param_2 - *(int *)(param_1 + 0x874))) {
            do {
              iVar5 = iVar1 + *piVar7 * 0x14;
              bVar8 = *(int *)(iVar5 + 0xc) != 0;
              if (bVar8) {
                iVar5 = *(int *)(iVar5 + 0x10);
              }
              if (bVar8 && iVar5 != 1) {
                FUN_7135d734(*piVar7,0x14);
              }
              piVar7 = piVar7 + 1;
            } while (piVar7 != piVar6);
            *(int *)(param_1 + 0x874) = param_2;
            return 1;
          }
        }
        else {
          if (*(char *)(param_1 + 0x878) != '\0') {
            return 3;
          }
          *(undefined1 *)(param_1 + 0x878) = 1;
          do {
            iVar5 = iVar1 + *piVar7 * 0x14;
            bVar8 = *(int *)(iVar5 + 0xc) != 0;
            if (bVar8) {
              iVar5 = *(int *)(iVar5 + 0x10);
            }
            if (bVar8 && iVar5 != 1) {
              FUN_7135d734(*piVar7,0x14);
            }
            piVar7 = piVar7 + 1;
          } while (piVar7 != piVar6);
          FUN_7135ceec(1);
          uVar2 = 0;
          for (piVar6 = *(int **)(param_1 + 0x87c); piVar6 != *(int **)(param_1 + 0x880);
              piVar6 = piVar6 + 1) {
            if (*(int *)(iVar1 + *piVar6 * 0x14 + 0x10) != 1) {
              return 3;
            }
          }
        }
      }
      return uVar2;
    }
  }
  return 2;
}


// =========================================================================
// Function: FUN_714ef508
// Entry: 0x714ef508 | Size: 476 bytes
// =========================================================================

int FUN_714ef508(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar2 = &DAT_71132e48;
  if (DAT_71132e48 != (undefined4 *)0x0) {
    puVar2 = &DAT_71132e48;
    puVar5 = DAT_71132e48;
    do {
      puVar1 = puVar5;
      if ((int)puVar1[4] < param_1) {
        puVar6 = puVar1 + 1;
        puVar1 = puVar2;
      }
      else {
        puVar6 = puVar1;
        if (((int)puVar1[4] <= param_1) && ((int)puVar1[5] < param_2)) {
          puVar6 = puVar1 + 1;
          puVar1 = puVar2;
        }
      }
      puVar2 = puVar1;
      puVar5 = (undefined4 *)*puVar6;
    } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
    puVar2 = &DAT_71132e48;
    if (((((undefined4 **)puVar1 != &DAT_71132e48) && ((int)puVar1[4] <= param_1)) &&
        (puVar2 = puVar1, param_1 <= (int)puVar1[4])) && (param_2 < (int)puVar1[5])) {
      puVar2 = &DAT_71132e48;
    }
  }
  if ((undefined4 **)puVar2 == &DAT_71132e48) {
    iVar3 = FUN_7143b470(param_1,param_2,0x20,0x10505);
    iVar7 = 0;
    if (iVar3 != 0) {
      iVar4 = FUN_7143cf50();
      if (iVar4 == 0) {
        FUN_7143b8c0(iVar3);
      }
      else {
        puVar2 = &DAT_71132e48;
        puVar5 = DAT_71132e48;
        while (puVar1 = puVar2, puVar5 != (undefined4 *)0x0) {
          while (puVar2 = puVar5, (int)puVar2[4] <= param_1) {
            if (param_1 <= (int)puVar2[4]) {
              if (param_2 < (int)puVar2[5]) break;
              if (param_2 <= (int)puVar2[5]) goto LAB_714ef6c0;
            }
            puVar5 = (undefined4 *)puVar2[1];
            if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
              puVar1 = puVar2 + 1;
              goto LAB_714ef664;
            }
          }
          puVar5 = (undefined4 *)*puVar2;
        }
LAB_714ef664:
        puVar5 = (undefined4 *)thunk_MwhHq(0x20);
        puVar5[4] = param_1;
        puVar5[5] = param_2;
        puVar5[6] = 0;
        puVar5[7] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = puVar2;
        *puVar1 = puVar5;
        puVar2 = puVar5;
        if ((int *)*DAT_71132e44 != (int *)0x0) {
          puVar2 = (undefined4 *)*puVar1;
          DAT_71132e44 = (int *)*DAT_71132e44;
        }
        FUN_712f807c(DAT_71132e48,puVar2);
        DAT_71132e4c = DAT_71132e4c + 1;
        puVar2 = puVar5;
LAB_714ef6c0:
        puVar2[6] = iVar4;
        puVar2[7] = param_3;
        iVar7 = iVar4;
      }
    }
  }
  else {
    puVar2[7] = param_3;
    iVar7 = puVar2[6];
  }
  return iVar7;
}


// =========================================================================
// Function: FUN_714ef970
// Entry: 0x714ef970 | Size: 1548 bytes
// =========================================================================

undefined4 FUN_714ef970(uint *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_60;
  uint uStack_5c;
  undefined4 *puStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined1 auStack_34 [16];
  
  iVar3 = FUN_714ef508(param_1[0xb],param_1[0xc],param_2);
  uVar4 = DAT_711acb94;
  if (iVar3 == 0) {
    return 3;
  }
  uVar8 = param_1[0x217];
  uVar10 = (uint)DAT_700c2bbc;
  bVar1 = (int)uVar10 <= (int)uVar8;
  if (4 < *param_1) {
    return 4;
  }
  puVar9 = param_1 + 10;
  switch(*param_1) {
  case 0:
    if (param_1[0x219] == 1) {
      iVar5 = FUN_715a50f8(param_1[1],auStack_34);
      if (iVar5 == 0) {
        uVar6 = 0x3f800000;
        if (param_2 - param_1[0x21b] < 500) {
          return 0;
        }
      }
      else if (iVar5 < 1) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = FUN_715e3e2c(auStack_34);
      }
      param_1[0x21a] = uVar6;
      param_1[0x219] = 2;
    }
    else {
      uVar6 = param_1[0x21a];
    }
    piVar7 = (int *)FUN_715e8978(DAT_711acb94,param_1[2],0,param_1 + 7,*puVar9,iVar3,1,uVar6);
    bVar1 = param_1[0x219] == 2;
    break;
  case 1:
    piVar7 = (int *)FUN_715e6b28(DAT_711acb94,param_1[2],0,param_1 + 7,*puVar9,param_1[3],param_1[4]
                                 ,param_1[5],param_1[6],param_1 + 0x12,iVar3);
    break;
  default:
    if (*(short *)((int)param_1 + 0x56) != -1) {
      uVar4 = FUN_7153ffec();
      iVar5 = FUN_7154a83c(uVar4,*(undefined2 *)((int)param_1 + 0x56));
      uVar4 = DAT_711acb94;
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0x38) == '\x01')) {
        puStack_38 = (undefined4 *)thunk_MwhHq(0x10);
        *puStack_38 = 0x74737563;
        puStack_38[1] = 0x7a696d6f;
        puStack_38[2] = 0x6f697461;
        *(undefined2 *)(puStack_38 + 3) = 0x6e;
        uStack_3c = 0xd;
        uStack_40 = 0x11;
        if ((*(byte *)(iVar5 + 0x3c) & 1) == 0) {
          uStack_50 = *(uint *)(iVar5 + 0x3c);
          uStack_4c = *(undefined4 *)(iVar5 + 0x40);
          uStack_48 = *(undefined4 *)(iVar5 + 0x44);
        }
        else {
          FUN_712f6d58(&uStack_50,*(undefined4 *)(iVar5 + 0x44),*(undefined4 *)(iVar5 + 0x40));
        }
        piVar7 = (int *)FUN_715e4490(uVar4,&uStack_40,&uStack_50,iVar3);
        puVar2 = puStack_38;
        uVar6 = uStack_40;
        if ((uStack_50 & 1) != 0) {
          thunk_qNQrlu(uStack_48);
          puVar2 = puStack_38;
          uVar6 = uStack_40;
        }
        goto joined_r0x714efc78;
      }
    }
    puVar11 = (uint *)0x0;
    if ((char)param_1[0x15] != '\0') {
      puVar11 = param_1 + 0x16;
    }
    piVar7 = (int *)FUN_715e4bb4(DAT_711acb94,param_1[2],0,param_1 + 7,*puVar9,param_1 + 0x12,iVar3,
                                 puVar11,param_1 + 0x20e,*(undefined2 *)((int)param_1 + 0x56));
    break;
  case 3:
    if ((param_1[0x211] & 1) == 0) {
      uStack_60 = param_1[0x211];
      uStack_5c = param_1[0x212];
      puStack_58 = (undefined4 *)param_1[0x213];
    }
    else {
      FUN_712f6d58(&uStack_60,param_1[0x213],param_1[0x212]);
    }
    if ((param_1[0x214] & 1) == 0) {
      uStack_70 = param_1[0x214];
      uStack_6c = param_1[0x215];
      uStack_68 = param_1[0x216];
    }
    else {
      FUN_712f6d58(&uStack_70,param_1[0x216],param_1[0x215]);
    }
    piVar7 = (int *)FUN_715e4490(uVar4,&uStack_60,&uStack_70,iVar3);
    puVar2 = puStack_58;
    uVar6 = uStack_60;
    if ((uStack_70 & 1) != 0) {
      thunk_qNQrlu(uStack_68);
      puVar2 = puStack_58;
      uVar6 = uStack_60;
    }
joined_r0x714efc78:
    if ((uVar6 & 1) != 0) {
      thunk_qNQrlu(puVar2);
    }
  }
  if (piVar7 == (int *)0x0) {
    return 4;
  }
  if (*param_1 == 0 && param_1[0x219] == 0) {
    if ((int)uVar10 <= (int)uVar8) {
      FUN_714f0370(param_1,*piVar7,param_2);
      return 0;
    }
  }
  else if (bVar1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(&DAT_70b46608);
    } while (!bVar1);
    DataMemoryBarrier(0xb);
    DAT_70b46608 = DAT_70b46608 + 1;
    FUN_7137d0bc(*(undefined4 *)(*piVar7 + *DAT_70ffce1c + 0x18),1);
    piVar7 = DAT_70b46448;
    iVar3 = *DAT_70b46448;
    *(undefined4 *)(iVar3 + 0x278) = 0x38;
    **(undefined4 **)(iVar3 + 0x274) = 0x38;
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[1];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0xb];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0xc];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0xd];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0xe];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0xf];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0x10];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(uint **)(iVar3 + 0x274) = param_1[0x11];
    *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
    iVar3 = *piVar7;
    **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
    uVar8 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar3 + 0x270) = uVar8;
    *(uint *)(iVar3 + 0x274) = uVar8;
    FUN_7139bc08(iVar3);
    if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar3);
    }
    FUN_7137d0bc(*DAT_70b422cc,1);
    *(undefined1 *)(param_1 + 0x218) = 1;
    return 0;
  }
  param_1[0x217] = param_1[0x217] + 1;
  return 0;
}


// =========================================================================
// Function: FUN_714f0370
// Entry: 0x714f0370 | Size: 300 bytes
// =========================================================================

void FUN_714f0370(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_7137d0bc(*(undefined4 *)(param_2 + *DAT_70ffce1c + 0x18),1);
  piVar1 = DAT_70b46448;
  iVar3 = *DAT_70b46448;
  *(undefined4 *)(iVar3 + 0x278) = 0x3f;
  **(undefined4 **)(iVar3 + 0x274) = 0x3f;
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = *(undefined4 *)(param_1 + 4);
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(iVar3 + 0x274) = *(int *)(iVar3 + 0x274) + 4;
  iVar3 = *piVar1;
  **(undefined4 **)(iVar3 + 0x274) = s_Unknown_7006305d;
  uVar2 = *(int *)(iVar3 + 0x274) + 0x13U & 0xfffffff0;
  *(uint *)(iVar3 + 0x270) = uVar2;
  *(uint *)(iVar3 + 0x274) = uVar2;
  FUN_7139bc08(iVar3);
  if (*(uint *)(iVar3 + 0x264) < *(int *)(iVar3 + 0x274) + 0x401U) {
    FUN_7139a77c(iVar3);
  }
  FUN_7137d0bc(*DAT_70b422cc,1);
  *(undefined4 *)(param_1 + 0x86c) = param_3;
  *(undefined4 *)(param_1 + 0x864) = 1;
  return;
}


// =========================================================================
// Function: FUN_714f05a4
// Entry: 0x714f05a4 | Size: 988 bytes
// =========================================================================

void FUN_714f05a4(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  int iStack_40;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  
  if ((0 < DAT_70b46608) || (iVar4 = FUN_715a50a4(), iVar4 != 0)) {
    iVar10 = *DAT_70b46448;
    *(undefined4 *)(iVar10 + 0x278) = 0x39;
    **(undefined4 **)(iVar10 + 0x274) = 0x39;
    iVar4 = *(int *)(iVar10 + 0x274);
    *(int *)(iVar10 + 0x274) = iVar4 + 4;
    *(char **)(iVar4 + 4) = s_Unknown_7006305d;
    uVar5 = *(int *)(iVar10 + 0x274) + 0x13U & 0xfffffff0;
    *(uint *)(iVar10 + 0x270) = uVar5;
    *(uint *)(iVar10 + 0x274) = uVar5;
    FUN_7139bc08(iVar10);
    if (*(uint *)(iVar10 + 0x264) < *(int *)(iVar10 + 0x274) + 0x401U) {
      FUN_7139a77c(iVar10);
    }
  }
  iVar4 = FUN_71886108();
  if (DAT_71132e38 == DAT_71132e3c) {
    puVar9 = DAT_71132e44;
    if (DAT_71132e44 != &DAT_71132e48) {
      do {
        if ((uint)(iVar4 - puVar9[7]) < 10000) {
          puVar3 = (undefined4 *)puVar9[1];
          if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
            do {
              puVar11 = (undefined4 *)puVar9[2];
              bVar16 = (undefined4 *)*puVar11 != puVar9;
              puVar9 = puVar11;
            } while (bVar16);
          }
          else {
            do {
              puVar11 = puVar3;
              puVar3 = (undefined4 *)*puVar11;
            } while ((undefined4 *)*puVar11 != (undefined4 *)0x0);
          }
        }
        else {
          FUN_7143d364(puVar9[6]);
          puVar3 = (undefined4 *)puVar9[1];
          puVar8 = puVar9;
          if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
            do {
              puVar11 = (undefined4 *)puVar8[2];
              bVar16 = (undefined4 *)*puVar11 != puVar8;
              puVar8 = puVar11;
            } while (bVar16);
          }
          else {
            do {
              puVar11 = puVar3;
              puVar3 = (undefined4 *)*puVar11;
            } while ((undefined4 *)*puVar11 != (undefined4 *)0x0);
          }
          DAT_71132e4c = DAT_71132e4c + -1;
          if (DAT_71132e44 == puVar9) {
            DAT_71132e44 = puVar11;
          }
          FUN_71368054(DAT_71132e48,puVar9);
          thunk_qNQrlu(puVar9);
        }
        puVar9 = puVar11;
      } while (puVar11 != &DAT_71132e48);
    }
    return;
  }
  thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_30);
  if (DAT_71132e38 != DAT_71132e3c) {
    bVar16 = false;
    iVar10 = DAT_71132e38;
    do {
      iVar6 = FUN_714ef2e4(iVar10,iVar4);
      if (iVar6 == 3) {
        iStack_40 = 2;
LAB_714f0710:
        bVar1 = false;
LAB_714f0718:
        FUN_715a5358(*(undefined4 *)(iVar10 + 4));
        piVar14 = *(int **)(iVar10 + 0x888);
        piVar12 = *(int **)(iVar10 + 0x88c);
        while (uVar2 = DAT_711a3938, piVar12 != piVar14) {
          piVar12 = piVar12 + -1;
          if (*piVar12 != -1) {
            *piVar12 = -1;
            FUN_71563244(uVar2);
          }
        }
        *(int **)(iVar10 + 0x88c) = piVar14;
        if (!bVar1) {
          FUN_714eb5e4(*(undefined4 *)(iVar10 + 4),iStack_40);
        }
        iVar6 = DAT_71132e3c;
        iVar7 = iVar10 + 0x894;
        iVar13 = iVar10;
        iVar15 = iVar10;
        if (iVar10 + 0x894 == DAT_71132e3c) {
LAB_714f07bc:
          do {
            iVar7 = FUN_714f15f4(iVar7 + -0x894);
          } while (iVar7 != iVar13);
        }
        else {
          do {
            iVar13 = iVar15 + 0x894;
            FUN_714f2e74(iVar15,iVar13);
            iVar7 = iVar15 + 0x1128;
            iVar15 = iVar13;
          } while (iVar7 != iVar6);
          iVar7 = DAT_71132e3c;
          if (iVar13 != DAT_71132e3c) goto LAB_714f07bc;
        }
LAB_714f07e0:
        DAT_71132e3c = iVar13;
        thunk_cAVowcMDgjNlKlwaXlLRnhcfdxnJsEWOPLMGMHS(&uStack_38);
        if ((int)(uint)(uStack_38 - uStack_30 < 4000000) <=
            (int)(iStack_34 - (iStack_2c + (uint)(uStack_38 < uStack_30)))) break;
      }
      else {
        if (iVar6 == 2) {
          iStack_40 = 1;
          goto LAB_714f0710;
        }
        if (iVar6 != 1) {
          iStack_40 = FUN_714ef970(iVar10,iVar4);
          if (iStack_40 != 0) {
            bVar16 = true;
            goto LAB_714f0710;
          }
          if (*(char *)(iVar10 + 0x860) != '\0') {
            iStack_40 = 0;
            bVar1 = true;
            bVar16 = true;
            goto LAB_714f0718;
          }
          iVar10 = iVar10 + 0x894;
          bVar16 = true;
          iVar13 = DAT_71132e3c;
          goto LAB_714f07e0;
        }
        iVar10 = iVar10 + 0x894;
      }
    } while (iVar10 != DAT_71132e3c);
    if (bVar16) {
      FUN_7139a77c(*DAT_70b46448);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714f0b80
// Entry: 0x714f0b80 | Size: 36 bytes
// =========================================================================

void FUN_714f0b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,
                 int param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *piStack_8cc;
  int iStack_8c8;
  int iStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  uint uStack_894;
  int iStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  int *piStack_878;
  int iStack_874;
  int iStack_870;
  undefined1 auStack_86c [2020];
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
  undefined1 uStack_48;
  int *piStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  
  FUN_714f1270(&uStack_8c0);
  uStack_88c = 2;
  uStack_898 = param_11;
  uStack_89c = param_10;
  uStack_8a0 = param_9;
  uStack_8a4 = param_8;
  uStack_8a8 = param_7;
  uStack_8ac = param_6;
  uStack_8b0 = param_5;
  uStack_87c = param_17;
  uStack_880 = param_16;
  uStack_884 = param_15;
  uStack_888 = param_14;
  if (param_13 < param_12) {
    param_12 = param_13;
  }
  if (0x3ff < param_12) {
    param_12 = 0x400;
  }
  if (param_12 < 0x41) {
    param_12 = 0x40;
  }
  uStack_894 = param_12 * 2 + 0x7eU & 0x1f80;
  iStack_890 = uStack_894 - 1;
  uStack_8c0 = param_1;
  uStack_8bc = param_2;
  uStack_8b8 = param_3;
  uStack_8b4 = param_4;
  FUN_715f1ee8(&piStack_8cc,param_18,0x2c);
  FUN_714f3204(&piStack_878,iStack_874);
  piStack_878 = piStack_8cc;
  iStack_874 = iStack_8c8;
  iStack_870 = iStack_8c4;
  piVar7 = &iStack_874;
  if (iStack_8c4 != 0) {
    *(int **)(iStack_8c8 + 8) = &iStack_874;
    piStack_8cc = &iStack_8c8;
    iStack_8c8 = 0;
    iStack_8c4 = 0;
    piVar7 = piStack_878;
  }
  piStack_878 = piVar7;
  FUN_714f3204(&piStack_8cc);
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&uStack_7c,param_19);
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&uStack_70,param_20);
  uStack_50 = FUN_71886108();
  uStack_4c = uStack_50;
  iVar5 = FUN_714ec6ac(&uStack_8c0);
  if ((iVar5 == 0) &&
     (iVar6 = FUN_714ed720(&uStack_8c0), piVar7 = piStack_40, iVar5 = DAT_70c39074, iVar6 != 0)) {
    if (piStack_44 != piStack_40) {
      piVar8 = piStack_44;
      do {
        puVar4 = puStack_34;
        piStack_8cc = (int *)*piVar8;
        if (puStack_34 < puStack_30) {
          *puStack_34 = 0xffffffff;
          if ((piStack_8cc != (int *)&DAT_00000007) && (*(int *)(iVar5 + (int)piStack_8cc * 4) != 0)
             ) {
            *puStack_34 = piStack_8cc;
            FUN_715631e8(DAT_711a3938);
          }
          puStack_34 = puVar4 + 1;
        }
        else {
          puStack_34 = (undefined4 *)FUN_714f2b84(&uStack_38,&piStack_8cc);
        }
        piVar3 = piStack_40;
        iVar6 = DAT_70b41f74;
        piVar8 = piVar8 + 1;
        piVar1 = piStack_44;
      } while (piVar8 != piVar7);
      for (; piVar1 != piVar3; piVar1 = piVar1 + 1) {
        iVar5 = iVar6 + *piVar1 * 0x14;
        bVar9 = *(int *)(iVar5 + 0xc) != 0;
        if (bVar9) {
          iVar5 = *(int *)(iVar5 + 0x10);
        }
        if (bVar9 && iVar5 != 1) {
          FUN_7135d734(*piVar1,0x14);
        }
      }
    }
    uVar2 = DAT_71132e3c;
    if (DAT_71132e3c < DAT_71132e40) {
      imp___aeabi_memcpy4(DAT_71132e3c,&uStack_8c0,0x48);
      *(int **)(uVar2 + 0x48) = piStack_878;
      piVar7 = (int *)(uVar2 + 0x4c);
      *piVar7 = iStack_874;
      *(int *)(uVar2 + 0x50) = iStack_870;
      if (iStack_870 == 0) {
        *(int **)(uVar2 + 0x48) = piVar7;
      }
      else {
        *(int **)(iStack_874 + 8) = piVar7;
        iStack_870 = 0;
        iStack_874 = 0;
        piStack_878 = &iStack_874;
      }
      imp___aeabi_memcpy4(uVar2 + 0x54,auStack_86c,0x7e4);
      *(undefined4 *)(uVar2 + 0x838) = 0;
      *(undefined4 *)(uVar2 + 0x838) = uStack_88;
      *(undefined4 *)(uVar2 + 0x83c) = 0;
      *(undefined4 *)(uVar2 + 0x83c) = uStack_84;
      *(undefined4 *)(uVar2 + 0x840) = 0;
      *(undefined4 *)(uVar2 + 0x840) = uStack_80;
      *(undefined4 *)(uVar2 + 0x84c) = uStack_74;
      *(undefined4 *)(uVar2 + 0x848) = uStack_78;
      *(undefined4 *)(uVar2 + 0x844) = uStack_7c;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      *(undefined4 *)(uVar2 + 0x850) = uStack_70;
      *(undefined4 *)(uVar2 + 0x854) = uStack_6c;
      *(undefined4 *)(uVar2 + 0x858) = uStack_68;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      *(undefined4 *)(uVar2 + 0x85c) = uStack_64;
      *(undefined4 *)(uVar2 + 0x860) = uStack_60;
      *(undefined4 *)(uVar2 + 0x864) = uStack_5c;
      *(undefined4 *)(uVar2 + 0x868) = uStack_58;
      *(undefined4 *)(uVar2 + 0x86c) = uStack_54;
      *(undefined4 *)(uVar2 + 0x870) = uStack_50;
      *(undefined4 *)(uVar2 + 0x874) = uStack_4c;
      *(undefined1 *)(uVar2 + 0x878) = uStack_48;
      *(undefined4 *)(uVar2 + 0x87c) = 0;
      *(int **)(uVar2 + 0x87c) = piStack_44;
      *(undefined4 *)(uVar2 + 0x880) = 0;
      *(int **)(uVar2 + 0x880) = piStack_40;
      *(undefined4 *)(uVar2 + 0x884) = 0;
      *(undefined4 *)(uVar2 + 0x884) = uStack_3c;
      *(undefined4 *)(uVar2 + 0x888) = 0;
      *(undefined4 *)(uVar2 + 0x888) = uStack_38;
      *(undefined4 *)(uVar2 + 0x88c) = 0;
      *(undefined4 **)(uVar2 + 0x88c) = puStack_34;
      *(undefined4 *)(uVar2 + 0x890) = 0;
      *(undefined4 **)(uVar2 + 0x890) = puStack_30;
      piStack_44 = (int *)0x0;
      piStack_40 = (int *)0x0;
      uStack_3c = 0;
      uStack_38 = 0;
      puStack_34 = (undefined4 *)0x0;
      puStack_30 = (undefined4 *)0x0;
      DAT_71132e3c = uVar2 + 0x894;
    }
    else {
      DAT_71132e3c = FUN_714f3364(&DAT_71132e38,&uStack_8c0);
    }
  }
  else {
    FUN_714eb5e4(param_2,1);
  }
  FUN_714f15f4(&uStack_8c0);
  return;
}


// =========================================================================
// Function: FUN_714f1270
// Entry: 0x714f1270 | Size: 792 bytes
// =========================================================================

int FUN_714f1270(int param_1)

{
  FUN_7136cdfc(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x8e) = 1;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined1 *)(param_1 + 0xd6) = 1;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  *(undefined1 *)(param_1 + 0x11e) = 1;
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(undefined1 *)(param_1 + 0x142) = 1;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *(undefined1 *)(param_1 + 0x166) = 1;
  *(undefined1 *)(param_1 + 0x178) = 1;
  *(undefined1 *)(param_1 + 0x18a) = 1;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x68) = 0xffff;
  *(undefined2 *)(param_1 + 0x198) = 0xffff;
  *(undefined2 *)(param_1 + 0x250) = 0xffff;
  *(undefined2 *)(param_1 + 0x23c) = 0xffff;
  *(undefined2 *)(param_1 + 0x228) = 0xffff;
  *(undefined2 *)(param_1 + 0x214) = 0xffff;
  *(undefined2 *)(param_1 + 0x200) = 0xffff;
  *(undefined2 *)(param_1 + 0x1ec) = 0xffff;
  *(undefined2 *)(param_1 + 0x1d8) = 0xffff;
  *(undefined2 *)(param_1 + 0x1c4) = 0xffff;
  *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x56) = 0xffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaa) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xae) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xca) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xea) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xee) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x112) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x116) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x136) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x132) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x162) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x156) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x186) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x182) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17a) = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x19c) = 0xffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 **)(param_1 + 0x48) = (undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x23e) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x216) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x202) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19e) = 0;
  FUN_714f2578(param_1 + 0x26c);
  *(undefined4 *)(param_1 + 0x864) = 0;
  imp___aeabi_memclr4(param_1 + 0x838,0x29);
  *(undefined1 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x86c) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_714f15f4
// Entry: 0x714f15f4 | Size: 204 bytes
// =========================================================================

int FUN_714f15f4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x888);
  if (piVar3 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x88c);
    piVar2 = piVar3;
    if (piVar4 != piVar3) {
      do {
        uVar1 = DAT_711a3938;
        piVar4 = piVar4 + -1;
        if (*piVar4 != -1) {
          *piVar4 = -1;
          FUN_71563244(uVar1);
        }
      } while (piVar4 != piVar3);
      piVar2 = *(int **)(param_1 + 0x888);
    }
    *(int **)(param_1 + 0x88c) = piVar3;
    thunk_qNQrlu(piVar2);
  }
  if (*(int *)(param_1 + 0x87c) != 0) {
    *(int *)(param_1 + 0x880) = *(int *)(param_1 + 0x87c);
    thunk_qNQrlu();
  }
  if ((*(byte *)(param_1 + 0x850) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x858));
  }
  if ((*(byte *)(param_1 + 0x844) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x84c));
  }
  if (*(int *)(param_1 + 0x838) != 0) {
    *(int *)(param_1 + 0x83c) = *(int *)(param_1 + 0x838);
    thunk_qNQrlu();
  }
  FUN_714f3204(param_1 + 0x48,*(undefined4 *)(param_1 + 0x4c));
  return param_1;
}


// =========================================================================
// Function: mcaTcpCXrAUKkZWrtDcbwWYQ_A_VW
// Entry: 0x714f17bc | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mcaTcpCXrAUKkZWrtDcbwWYQ_A_VW(undefined4 param_1)

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
  puStack_30 = &DAT_70b0e460;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_714f1840;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_714f1840:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: OulkTcRKUgCKakSz_cFtkYLfTrVwEtFv
// Entry: 0x714f1934 | Size: 168 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OulkTcRKUgCKakSz_cFtkYLfTrVwEtFv(undefined4 param_1)

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
  puStack_30 = &DAT_70b0e484;
  uStack_2c = param_1;
  FUN_717ccb10(DAT_712017fc,&puStack_30);
  if ((undefined **)piStack_20 == &puStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_714f19b8;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_714f19b8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: ZgHGMmlQhlRUQrlCOSsBTD
// Entry: 0x714f1aac | Size: 1176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ZgHGMmlQhlRUQrlCOSsBTD
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
               undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
               undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
               undefined4 param_29)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
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
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int aiStack_48 [4];
  int *piStack_38;
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  uVar8 = imp_strlen(param_27);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_58);
  }
  if (uVar8 < 0xb) {
    uStack_58 = CONCAT31(uStack_58._1_3_,(char)(uVar8 << 1));
    uVar12 = (uint)&uStack_58 | 1;
    if (uVar8 != 0) goto LAB_714f1b44;
  }
  else {
    uVar12 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_58 = (uVar8 | 7) + 2;
    uStack_54 = uVar8;
    uStack_50 = uVar12;
LAB_714f1b44:
    imp___aeabi_memcpy(uVar12,param_27,uVar8);
  }
  *(undefined1 *)(uVar12 + uVar8) = 0;
  uVar8 = imp_strlen(param_28);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_68);
  }
  if (uVar8 < 0xb) {
    uStack_68 = CONCAT31(uStack_68._1_3_,(char)(uVar8 << 1));
    uVar12 = (uint)&uStack_68 | 1;
    if (uVar8 != 0) goto LAB_714f1bb8;
  }
  else {
    uVar12 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_68 = (uVar8 | 7) + 2;
    uStack_64 = uVar8;
    uStack_60 = uVar12;
LAB_714f1bb8:
    imp___aeabi_memcpy(uVar12,param_28,uVar8);
  }
  *(undefined1 *)(uVar12 + uVar8) = 0;
  uVar8 = imp_strlen(param_29);
  if (0xfffffff7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_78);
  }
  if (uVar8 < 0xb) {
    uStack_78 = CONCAT31(uStack_78._1_3_,(char)(uVar8 << 1));
    uVar12 = (uint)&uStack_78 | 1;
    if (uVar8 != 0) goto LAB_714f1c54;
  }
  else {
    uVar12 = thunk_MwhHq((uVar8 | 7) + 1);
    uStack_78 = (uVar8 | 7) + 2;
    uStack_74 = uVar8;
    uStack_70 = uVar12;
LAB_714f1c54:
    imp___aeabi_memcpy(uVar12,param_29,uVar8);
  }
  uVar7 = uStack_58;
  *(undefined1 *)(uVar12 + uVar8) = 0;
  uVar1 = DAT_712017fc;
  uStack_a8 = param_25;
  uStack_e8 = param_9;
  uStack_e4 = param_10;
  uStack_e0 = param_11;
  uStack_dc = param_12;
  uStack_d8 = param_13;
  uStack_d4 = param_14;
  uStack_d0 = param_15;
  uStack_cc = param_16;
  uStack_c0 = param_19;
  uStack_bc = param_20;
  uStack_b8 = param_21;
  uStack_b4 = param_22;
  uStack_b0 = param_23;
  uStack_ac = param_24;
  uStack_f0 = param_7;
  uStack_f4 = param_6;
  uStack_f8 = param_5;
  uStack_a4 = param_26;
  uStack_c4 = param_18;
  uStack_c8 = param_17;
  uStack_108 = param_1;
  uStack_104 = param_2;
  uStack_100 = param_3;
  uStack_fc = param_4;
  if ((uStack_58 & 1) == 0) {
    uStack_a0 = uStack_58;
    uStack_9c = uStack_54;
    uStack_98 = uStack_50;
  }
  else {
    FUN_712f6d58(&uStack_a0,uStack_50,uStack_54);
  }
  uVar8 = uStack_68;
  if ((uStack_68 & 1) == 0) {
    uStack_94 = uStack_68;
    uStack_90 = uStack_64;
    uStack_8c = uStack_60;
  }
  else {
    FUN_712f6d58(&uStack_94,uStack_60,uStack_64);
  }
  uVar12 = uStack_78;
  if ((uStack_78 & 1) == 0) {
    uStack_88 = uStack_78;
    uStack_84 = uStack_74;
    uStack_80 = uStack_70;
  }
  else {
    FUN_712f6d58(&uStack_88,uStack_70,uStack_74);
  }
  piVar9 = (int *)thunk_MwhHq(0x98);
  *piVar9 = (int)&DAT_70b0e4a8;
  imp___aeabi_memcpy8(piVar9 + 2,&uStack_108,0x68);
  uVar6 = uStack_8c;
  uVar5 = uStack_90;
  uVar4 = uStack_94;
  uVar3 = uStack_9c;
  uVar2 = uStack_a0;
  piVar9[0x1e] = uStack_98;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  piVar9[0x20] = uVar5;
  piVar9[0x21] = uVar6;
  piVar9[0x22] = uStack_88;
  piVar9[0x23] = uStack_84;
  piVar9[0x24] = uStack_80;
  piVar9[0x1c] = uVar2;
  piVar9[0x1d] = uVar3;
  piVar9[0x1f] = uVar4;
  piVar10 = aiStack_48;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  piStack_38 = piVar9;
  FUN_717ccb10(uVar1,piVar10);
  if (piStack_38 == piVar10) {
    iVar11 = 0x10;
  }
  else {
    iVar11 = 0x14;
    piVar10 = piStack_38;
    if (piStack_38 == (int *)0x0) goto LAB_714f1e94;
  }
  (**(code **)(*piVar10 + iVar11))();
LAB_714f1e94:
  if ((uStack_88 & 1) != 0) {
    thunk_qNQrlu(uStack_80);
  }
  if ((uStack_94 & 1) != 0) {
    thunk_qNQrlu(uStack_8c);
  }
  if ((uStack_a0 & 1) != 0) {
    thunk_qNQrlu(uStack_98);
  }
  if ((uVar12 & 1) != 0) {
    thunk_qNQrlu(uStack_70);
  }
  if ((uVar8 & 1) != 0) {
    thunk_qNQrlu(uStack_60);
  }
  if ((uVar7 & 1) != 0) {
    thunk_qNQrlu(uStack_50);
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_714f2384
// Entry: 0x714f2384 | Size: 256 bytes
// =========================================================================

int * FUN_714f2384(int param_1,byte *param_2)

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
// Function: FUN_714f2578
// Entry: 0x714f2578 | Size: 420 bytes
// =========================================================================

void FUN_714f2578(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0xffff0000;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = 0xffff;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x48;
    *(undefined4 *)((int)param_1 + iVar1 + 0x1d) = 0xffffffff;
    *(undefined1 *)((int)param_1 + iVar1 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x18) = 0xffffffff;
    *(undefined1 *)((int)param_1 + iVar1 + 0x14) = 0;
    *(undefined2 *)((int)param_1 + iVar1 + 0x12) = 0xffff;
    *(undefined1 *)((int)param_1 + iVar1 + 0x10) = 0x11;
    *(undefined4 *)((int)param_1 + iVar1 + 0x21) = 0xffffffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0x25) = 0xffffffff;
    *(undefined2 *)((int)param_1 + iVar1 + 0x2a) = 0xffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0x2c) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x30) = 0xffffffff;
    *(undefined4 *)((int)param_1 + iVar1 + 0x34) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x38) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x3c) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x40) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x44) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x48) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x4c) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar1 + 0x50) = 0x3f800000;
    *(undefined4 *)((int)param_1 + iVar1 + 0x54) = 0x3f800000;
    iVar1 = iVar2;
  } while (iVar2 != 0x4c8);
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x26e) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x272) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x2d2) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d6) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
  param_1[0x2d0] = 0xffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2ca) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2ce) = 0x3f800000;
  param_1[0x2c6] = 0xffff;
  *(undefined4 *)(param_1 + 0x2be) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c2) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3f800000;
  param_1[700] = 0xffff;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b6) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2ba) = 0x3f800000;
  param_1[0x2b2] = 0xffff;
  *(undefined4 *)(param_1 + 0x2aa) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2ae) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0x3f800000;
  param_1[0x2a8] = 0xffff;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a2) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a6) = 0x3f800000;
  param_1[0x29e] = 0xffff;
  *(undefined4 *)(param_1 + 0x296) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29a) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0x3f800000;
  param_1[0x294] = 0xffff;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x28e) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x292) = 0x3f800000;
  param_1[0x28a] = 0xffff;
  *(undefined4 *)(param_1 + 0x282) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x286) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
  param_1[0x280] = 0xffff;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27a) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x27e) = 0x3f800000;
  param_1[0x276] = 0xffff;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2de) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2da) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  return;
}


// =========================================================================
// Function: FUN_714f28d8
// Entry: 0x714f28d8 | Size: 4 bytes
// =========================================================================

void FUN_714f28d8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x714f28f4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_714f2964
// Entry: 0x714f2964 | Size: 256 bytes
// =========================================================================

int * FUN_714f2964(int param_1,byte *param_2)

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
// Function: FUN_714f2ab4
// Entry: 0x714f2ab4 | Size: 20 bytes
// =========================================================================

void FUN_714f2ab4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714f2b1c
// Entry: 0x714f2b1c | Size: 20 bytes
// =========================================================================

void FUN_714f2b1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714f2b84
// Entry: 0x714f2b84 | Size: 360 bytes
// =========================================================================

int * FUN_714f2b84(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  
  piVar11 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  iVar4 = (int)piVar12 - (int)piVar11 >> 2;
  uVar10 = iVar4 + 1;
  if (0x3fffffff < uVar10) {
    FUN_714f2e0c(param_1);
LAB_714f2ce8:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  uVar1 = param_1[2] - (int)piVar11 >> 1;
  if (uVar10 < uVar1) {
    uVar10 = uVar1;
  }
  if (0x7ffffffb < (uint)(param_1[2] - (int)piVar11)) {
    uVar10 = 0x3fffffff;
  }
  if (uVar10 == 0) {
    iVar3 = 0;
  }
  else {
    if (0x3fffffff < uVar10) goto LAB_714f2ce8;
    iVar3 = thunk_MwhHq(uVar10 << 2);
  }
  piVar9 = (int *)(iVar3 + iVar4 * 4);
  *piVar9 = -1;
  iVar5 = *param_2;
  if ((iVar5 != 7) && (*(int *)(DAT_70c39074 + iVar5 * 4) != 0)) {
    *piVar9 = iVar5;
    FUN_715631e8(DAT_711a3938);
    piVar11 = (int *)*param_1;
    piVar12 = (int *)param_1[1];
    iVar4 = (int)piVar12 - (int)piVar11 >> 2;
  }
  piVar6 = piVar11;
  piVar8 = piVar9 + -iVar4;
  if (piVar11 != piVar12) {
    do {
      iVar5 = *piVar6;
      piVar7 = piVar6 + 1;
      *piVar6 = -1;
      *piVar8 = iVar5;
      piVar6 = piVar7;
      piVar8 = piVar8 + 1;
    } while (piVar7 != piVar12);
    do {
      uVar2 = DAT_711a3938;
      if (*piVar11 != -1) {
        *piVar11 = -1;
        FUN_71563244(uVar2);
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar12);
    piVar11 = (int *)*param_1;
  }
  *param_1 = piVar9 + -iVar4;
  param_1[1] = piVar9 + 1;
  param_1[2] = iVar3 + uVar10 * 4;
  if (piVar11 != (int *)0x0) {
    thunk_qNQrlu(piVar11);
  }
  return piVar9 + 1;
}


// =========================================================================
// Function: FUN_714f2e0c
// Entry: 0x714f2e0c | Size: 20 bytes
// =========================================================================

void FUN_714f2e0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714f2e74
// Entry: 0x714f2e74 | Size: 604 bytes
// =========================================================================

undefined4 * FUN_714f2e74(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  uVar4 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar4;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  FUN_7136d040(param_1 + 7,param_2 + 7);
  uVar4 = param_2[0xb];
  uVar6 = param_2[0xc];
  uVar7 = param_2[0xd];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar6;
  param_1[0xd] = uVar7;
  uVar4 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar7 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  piVar5 = param_1 + 0x13;
  FUN_714f3204(param_1 + 0x12,*piVar5);
  param_1[0x12] = param_2[0x12];
  iVar2 = param_2[0x13];
  *piVar5 = iVar2;
  iVar3 = param_2[0x14];
  param_1[0x14] = iVar3;
  if (iVar3 == 0) {
    param_1[0x12] = piVar5;
  }
  else {
    *(int **)(iVar2 + 8) = piVar5;
    param_2[0x12] = param_2 + 0x13;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
  }
  imp___aeabi_memcpy4(param_1 + 0x15,param_2 + 0x15,0x7e4);
  if (param_1[0x20e] != 0) {
    param_1[0x20f] = param_1[0x20e];
    thunk_qNQrlu();
    param_1[0x20e] = 0;
    param_1[0x20f] = 0;
    param_1[0x210] = 0;
  }
  param_1[0x20e] = param_2[0x20e];
  param_1[0x20f] = param_2[0x20f];
  param_1[0x210] = param_2[0x210];
  param_2[0x20e] = 0;
  param_2[0x20f] = 0;
  param_2[0x210] = 0;
  if ((*(byte *)(param_1 + 0x211) & 1) != 0) {
    thunk_qNQrlu(param_1[0x213]);
  }
  uVar4 = param_2[0x212];
  uVar6 = param_2[0x213];
  param_1[0x211] = param_2[0x211];
  param_1[0x212] = uVar4;
  param_1[0x213] = uVar6;
  *(undefined2 *)(param_2 + 0x211) = 0;
  if ((*(byte *)(param_1 + 0x214) & 1) != 0) {
    thunk_qNQrlu(param_1[0x216]);
  }
  uVar4 = param_2[0x215];
  uVar6 = param_2[0x216];
  param_1[0x214] = param_2[0x214];
  param_1[0x215] = uVar4;
  param_1[0x216] = uVar6;
  *(undefined2 *)(param_2 + 0x214) = 0;
  uVar4 = param_2[0x218];
  uVar6 = param_2[0x219];
  param_1[0x217] = param_2[0x217];
  param_1[0x218] = uVar4;
  param_1[0x219] = uVar6;
  uVar4 = param_2[0x21b];
  uVar6 = param_2[0x21c];
  uVar7 = param_2[0x21d];
  param_1[0x21a] = param_2[0x21a];
  param_1[0x21b] = uVar4;
  param_1[0x21c] = uVar6;
  param_1[0x21d] = uVar7;
  *(undefined1 *)(param_1 + 0x21e) = *(undefined1 *)(param_2 + 0x21e);
  if (param_1[0x21f] != 0) {
    param_1[0x220] = param_1[0x21f];
    thunk_qNQrlu();
    param_1[0x21f] = 0;
    param_1[0x220] = 0;
    param_1[0x221] = 0;
  }
  param_1[0x21f] = param_2[0x21f];
  param_1[0x220] = param_2[0x220];
  param_1[0x221] = param_2[0x221];
  param_2[0x21f] = 0;
  param_2[0x220] = 0;
  param_2[0x221] = 0;
  piVar5 = (int *)param_1[0x222];
  if (piVar5 != (int *)0x0) {
    piVar8 = (int *)param_1[0x223];
    piVar1 = piVar5;
    if (piVar8 != piVar5) {
      do {
        uVar4 = DAT_711a3938;
        piVar8 = piVar8 + -1;
        if (*piVar8 != -1) {
          *piVar8 = -1;
          FUN_71563244(uVar4);
        }
      } while (piVar8 != piVar5);
      piVar1 = (int *)param_1[0x222];
    }
    param_1[0x223] = piVar5;
    thunk_qNQrlu(piVar1);
    param_1[0x222] = 0;
    param_1[0x223] = 0;
    param_1[0x224] = 0;
  }
  param_1[0x222] = param_2[0x222];
  param_1[0x223] = param_2[0x223];
  param_1[0x224] = param_2[0x224];
  param_2[0x222] = 0;
  param_2[0x223] = 0;
  param_2[0x224] = 0;
  return param_1;
}


// =========================================================================
// Function: FUN_714f3204
// Entry: 0x714f3204 | Size: 160 bytes
// =========================================================================

void FUN_714f3204(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_714f3204(param_1,*param_2);
    FUN_714f3204(param_1,param_2[1]);
    pbVar2 = (byte *)param_2[7];
    if (pbVar2 != (byte *)0x0) {
      pbVar1 = (byte *)param_2[8];
      pbVar3 = pbVar2;
      if (pbVar1 != pbVar2) {
        do {
          pbVar3 = pbVar1 + -0xc;
          if ((*pbVar3 & 1) != 0) {
            thunk_qNQrlu(*(undefined4 *)(pbVar1 + -4));
          }
          pbVar1 = pbVar3;
        } while (pbVar3 != pbVar2);
        pbVar3 = (byte *)param_2[7];
      }
      param_2[8] = pbVar2;
      thunk_qNQrlu(pbVar3);
    }
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      thunk_qNQrlu(param_2[6]);
    }
    thunk_qNQrlu(param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714f3364
// Entry: 0x714f3364 | Size: 336 bytes
// =========================================================================

int FUN_714f3364(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = param_1[1] - *param_1 >> 2;
  uVar2 = iVar6 * -0x78c5b653 + 1;
  if (0x1dd7e5 < uVar2) {
    FUN_714f3750(param_1);
LAB_714f34b0:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  piVar4 = param_1 + 2;
  iVar1 = *piVar4 - *param_1 >> 2;
  if (uVar2 < (uint)(iVar1 * 0xe74935a)) {
    uVar2 = iVar1 * 0xe74935a;
  }
  if (0xeebf1 < (uint)(iVar1 * -0x78c5b653)) {
    uVar2 = 0x1dd7e5;
  }
  if (uVar2 == 0) {
    iVar1 = 0;
  }
  else {
    if (0x1dd7e5 < uVar2) goto LAB_714f34b0;
    iVar1 = thunk_MwhHq(uVar2 * 0x894);
  }
  iVar5 = iVar6 * 4 + iVar1;
  FUN_714f3590(piVar4,iVar5,param_2);
  iVar8 = *param_1;
  iVar9 = param_1[1];
  iVar3 = iVar5 + (iVar8 - iVar9);
  iVar6 = iVar3;
  iVar7 = iVar8;
  if (iVar8 - iVar9 != 0) {
    do {
      FUN_714f3590(piVar4,iVar6,iVar7);
      iVar7 = iVar7 + 0x894;
      iVar6 = iVar6 + 0x894;
    } while (iVar7 != iVar9);
    do {
      FUN_714f15f4(iVar8);
      iVar8 = iVar8 + 0x894;
    } while (iVar8 != iVar9);
    iVar9 = *param_1;
  }
  *param_1 = iVar3;
  param_1[1] = iVar5 + 0x894;
  param_1[2] = uVar2 * 0x894 + iVar1;
  if (iVar9 != 0) {
    thunk_qNQrlu(iVar9);
  }
  return iVar5 + 0x894;
}


// =========================================================================
// Function: FUN_714f3590
// Entry: 0x714f3590 | Size: 368 bytes
// =========================================================================

void FUN_714f3590(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  imp___aeabi_memcpy4(param_2,param_3,0x48);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
  iVar4 = *(int *)(param_3 + 0x4c);
  piVar2 = (int *)(param_2 + 0x4c);
  *piVar2 = iVar4;
  iVar6 = *(int *)(param_3 + 0x50);
  *(int *)(param_2 + 0x50) = iVar6;
  if (iVar6 == 0) {
    *(int **)(param_2 + 0x48) = piVar2;
  }
  else {
    *(int **)(iVar4 + 8) = piVar2;
    *(int **)(param_3 + 0x48) = (int *)(param_3 + 0x4c);
    *(undefined4 *)(param_3 + 0x4c) = 0;
    *(undefined4 *)(param_3 + 0x50) = 0;
  }
  imp___aeabi_memcpy4(param_2 + 0x54,param_3 + 0x54,0x7e4);
  *(undefined4 *)(param_2 + 0x838) = 0;
  *(undefined4 *)(param_2 + 0x83c) = 0;
  *(undefined4 *)(param_2 + 0x840) = 0;
  *(undefined4 *)(param_2 + 0x838) = *(undefined4 *)(param_3 + 0x838);
  *(undefined4 *)(param_2 + 0x83c) = *(undefined4 *)(param_3 + 0x83c);
  *(undefined4 *)(param_2 + 0x840) = *(undefined4 *)(param_3 + 0x840);
  *(undefined4 *)(param_3 + 0x83c) = 0;
  *(undefined4 *)(param_3 + 0x840) = 0;
  *(undefined4 *)(param_3 + 0x838) = 0;
  uVar3 = *(undefined4 *)(param_3 + 0x844);
  uVar5 = *(undefined4 *)(param_3 + 0x848);
  *(undefined4 *)(param_2 + 0x84c) = *(undefined4 *)(param_3 + 0x84c);
  *(undefined4 *)(param_2 + 0x848) = uVar5;
  *(undefined4 *)(param_2 + 0x844) = uVar3;
  uVar3 = *(undefined4 *)(param_3 + 0x854);
  uVar5 = *(undefined4 *)(param_3 + 0x858);
  *(undefined4 *)(param_3 + 0x844) = 0;
  *(undefined4 *)(param_3 + 0x848) = 0;
  *(undefined4 *)(param_3 + 0x84c) = 0;
  *(undefined4 *)(param_2 + 0x850) = *(undefined4 *)(param_3 + 0x850);
  *(undefined4 *)(param_2 + 0x854) = uVar3;
  *(undefined4 *)(param_2 + 0x858) = uVar5;
  *(undefined4 *)(param_3 + 0x850) = 0;
  *(undefined4 *)(param_3 + 0x854) = 0;
  *(undefined4 *)(param_3 + 0x858) = 0;
  uVar3 = *(undefined4 *)(param_3 + 0x860);
  uVar5 = *(undefined4 *)(param_3 + 0x864);
  *(undefined4 *)(param_2 + 0x85c) = *(undefined4 *)(param_3 + 0x85c);
  *(undefined4 *)(param_2 + 0x860) = uVar3;
  *(undefined4 *)(param_2 + 0x864) = uVar5;
  uVar3 = *(undefined4 *)(param_3 + 0x86c);
  uVar5 = *(undefined4 *)(param_3 + 0x870);
  uVar7 = *(undefined4 *)(param_3 + 0x874);
  *(undefined4 *)(param_2 + 0x868) = *(undefined4 *)(param_3 + 0x868);
  *(undefined4 *)(param_2 + 0x86c) = uVar3;
  *(undefined4 *)(param_2 + 0x870) = uVar5;
  *(undefined4 *)(param_2 + 0x874) = uVar7;
  uVar1 = *(undefined1 *)(param_3 + 0x878);
  *(undefined4 *)(param_2 + 0x87c) = 0;
  *(undefined4 *)(param_2 + 0x880) = 0;
  *(undefined4 *)(param_2 + 0x884) = 0;
  *(undefined1 *)(param_2 + 0x878) = uVar1;
  *(undefined4 *)(param_2 + 0x87c) = *(undefined4 *)(param_3 + 0x87c);
  *(undefined4 *)(param_2 + 0x880) = *(undefined4 *)(param_3 + 0x880);
  *(undefined4 *)(param_2 + 0x884) = *(undefined4 *)(param_3 + 0x884);
  *(undefined4 *)(param_3 + 0x87c) = 0;
  *(undefined4 *)(param_3 + 0x880) = 0;
  *(undefined4 *)(param_3 + 0x884) = 0;
  *(undefined4 *)(param_2 + 0x890) = 0;
  *(undefined4 *)(param_2 + 0x88c) = 0;
  *(undefined4 *)(param_2 + 0x888) = 0;
  *(undefined4 *)(param_2 + 0x888) = *(undefined4 *)(param_3 + 0x888);
  *(undefined4 *)(param_2 + 0x88c) = *(undefined4 *)(param_3 + 0x88c);
  *(undefined4 *)(param_2 + 0x890) = *(undefined4 *)(param_3 + 0x890);
  *(undefined4 *)(param_3 + 0x888) = 0;
  *(undefined4 *)(param_3 + 0x88c) = 0;
  *(undefined4 *)(param_3 + 0x890) = 0;
  return;
}


// =========================================================================
// Function: FUN_714f3750
// Entry: 0x714f3750 | Size: 20 bytes
// =========================================================================

void FUN_714f3750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_714f38c4
// Entry: 0x714f38c4 | Size: 4 bytes
// =========================================================================

void FUN_714f38c4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x714f38e0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_714f3a78
// Entry: 0x714f3a78 | Size: 4 bytes
// =========================================================================

void FUN_714f3a78(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x714f3a94 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_714f40f4
// Entry: 0x714f40f4 | Size: 84 bytes
// =========================================================================

void FUN_714f40f4(int param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x90));
  }
  if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x84));
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x78));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_714f46e4
// Entry: 0x714f46e4 | Size: 128 bytes
// =========================================================================

void FUN_714f46e4(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_70c38f30 + 0xe8);
  if ((0 < iVar1) && (FUN_71451d0c(), iVar1 != 1)) {
    FUN_714f4814(0x800000,*DAT_70ffd308,*DAT_70ffd30c,iVar1 == 2,iVar1 == 3,0);
  }
  return;
}


// =========================================================================
// Function: FUN_714f4814
// Entry: 0x714f4814 | Size: 512 bytes
// =========================================================================

void FUN_714f4814(uint param_1,int param_2,undefined4 param_3,uint param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  if (param_2 != 0) {
    iVar8 = *(int *)(DAT_70ffc978 + 4);
    uVar10 = *(undefined4 *)(iVar8 + 0x60);
    uVar9 = *(undefined4 *)(iVar8 + 100);
    *(int *)(iVar8 + 0x60) = param_2;
    *(undefined4 *)(iVar8 + 100) = param_3;
    puVar1 = DAT_70ffd314;
    *DAT_70ffd314 = 3;
    *DAT_70b42118 = *DAT_70b42118 | param_1;
    iVar11 = *DAT_70b46f00;
    if (iVar11 == 0) {
      iVar4 = 0x24;
      if (param_6 != 0) {
        iVar4 = 0x2a;
      }
      iVar5 = 0x26;
      if (param_6 != 0) {
        iVar5 = 0x2c;
      }
      uStack_28._0_2_ =
           CONCAT11(*(undefined1 *)(DAT_710ea8a4 + iVar5),*(undefined1 *)(DAT_710ea8a4 + iVar4));
      uStack_28 = CONCAT22(0xff00,(undefined2)uStack_28);
      iVar4 = 0x28;
      if (param_6 != 0) {
        iVar4 = 0x2e;
      }
      uVar3 = *(undefined1 *)(DAT_710ea8a4 + iVar4);
    }
    else {
      uVar3 = 0;
      uStack_28 = 0xff000000;
    }
    uStack_28._0_3_ = CONCAT12(uVar3,(undefined2)uStack_28);
    FUN_71420f90(iVar8,&uStack_28,3);
    iVar4 = FUN_7141f27c(iVar8);
    puVar2 = DAT_70ffd318;
    if (iVar4 != 0) {
      DAT_70ffd31c = 1;
      *DAT_70ffd318 = 1;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      iVar4 = FUN_713c301c();
      if (iVar4 != 0) {
        puVar6 = (undefined4 *)(*(int *)(iVar4 + 0x14) + 0x30);
        if (*(int *)(iVar4 + 0x14) == 0) {
          puVar6 = (undefined4 *)(iVar4 + 4);
        }
        uStack_38 = *puVar6;
        uVar7 = puVar6[2];
        *(undefined4 *)((uint)&uStack_38 | 4) = puVar6[1];
        ((undefined4 *)((uint)&uStack_38 | 4))[1] = uVar7;
      }
      FUN_713a895c(&uStack_38);
      if (iVar11 == 0) {
        FUN_715d54f8();
      }
      iVar4 = FUN_715d2b68();
      bVar12 = (iVar11 != 0 | param_4) == 1;
      if (bVar12) {
        iVar4 = param_5;
      }
      if (!bVar12 || iVar4 != 0) {
        FUN_7140e03c();
        FUN_71467e50();
        FUN_71469b08();
        FUN_71469f10();
      }
      FUN_7141f690(iVar8);
      *puVar2 = 0;
      DAT_70ffd31c = 0;
    }
    *DAT_70b42118 = *DAT_70b42118 & ~param_1;
    *puVar1 = 0;
    *(undefined4 *)(iVar8 + 0x60) = uVar10;
    *(undefined4 *)(iVar8 + 100) = uVar9;
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714f4c60
// Entry: 0x714f4c60 | Size: 44 bytes
// =========================================================================

void FUN_714f4c60(uint param_1,undefined4 param_2)

{
  if (0x4a < param_1 >> 3) {
    return;
  }
  imp___aeabi_memcpy(param_2,param_1 * 0xe0 + 0x71153b60,0xe0);
  return;
}


// =========================================================================
// Function: FUN_714f4da4
// Entry: 0x714f4da4 | Size: 84 bytes
// =========================================================================

void FUN_714f4da4(uint param_1,int param_2)

{
  if (0x4a < param_1 >> 3) {
    return;
  }
  imp___aeabi_memclr4(&DAT_71132e60 + param_1 * 0x38,0xe0);
  if (param_2 != 0) {
    imp___aeabi_memcpy(&DAT_71132e60 + param_1 * 0x38,param_2,0xe0);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714f658c
// Entry: 0x714f658c | Size: 16 bytes
// =========================================================================

undefined1 FUN_714f658c(void)

{
  return DAT_71174860;
}


// =========================================================================
// Function: FUN_714f79d8
// Entry: 0x714f79d8 | Size: 1420 bytes
// =========================================================================

void FUN_714f79d8(void)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  if (DAT_71174c38 != (int *)0x0) {
    (**(code **)(*DAT_71174c38 + 4))();
    DAT_71174c38 = (int *)0x0;
  }
  uVar2 = DAT_700c2ce8;
  if ((((DAT_71174860 != '\0') && (0 < (int)DAT_700c2ce8)) && (DAT_700c2ce8 < 20000)) &&
     (*(int *)(DAT_70c39074 + DAT_700c2ce8 * 4) != 0)) {
    uVar4 = thunk_MwhHq(0x978);
    piVar6 = (int *)0x0;
    DAT_71174c38 = (int *)FUN_715f2ce8(uVar4,0xffff,uVar2,DAT_71174bf0,DAT_71174bf4,DAT_71174bf8,
                                       DAT_700c2d14,0);
    FUN_714fd088(DAT_71174b70,DAT_71174b74,DAT_71174b78);
    piVar1 = DAT_71174c38;
    if (DAT_700c2cec != 0) {
      piVar6 = &iStack_1c;
      FUN_71358f50(piVar6,DAT_700c2cf0);
      FUN_715fb2cc(piVar1,0,piVar6);
    }
    piVar1 = DAT_71174c38;
    if (DAT_700c2cf4 != 0) {
      piVar6 = &iStack_1c;
      FUN_71358f50(piVar6,DAT_700c2cf8);
      FUN_715fb2cc(piVar1,1,piVar6);
    }
    piVar1 = DAT_71174c38;
    if (DAT_700c2cfc != 0) {
      piVar6 = &iStack_1c;
      FUN_71358f50(piVar6,DAT_700c2d00);
      FUN_715fb2cc(piVar1,2,piVar6);
    }
    uVar4 = DAT_700c2d0c;
    piVar1 = (int *)0x0;
    if (DAT_71174860 != '\0') {
      piVar1 = DAT_71174c38;
    }
    if (DAT_71174860 != '\0' && piVar1 != (int *)0x0) {
      FUN_7160bc94(piVar1,7);
      FUN_7160bc94(DAT_71174c38,1);
      FUN_7160bcb4(DAT_71174c38,uVar4);
    }
    if (DAT_700c2d04 < 4) {
      piVar1 = (int *)0x0;
      if (DAT_71174860 != '\0') {
        piVar1 = DAT_71174c38;
      }
      if (DAT_71174860 != '\0' && piVar1 != (int *)0x0) {
        FUN_716086c0(piVar1,DAT_700c2d04,0);
      }
    }
    if (DAT_700c2d08 != 0xffffffff) {
      piVar1 = (int *)0x0;
      if (DAT_71174860 != '\0') {
        piVar1 = DAT_71174c38;
      }
      if (DAT_71174860 != '\0' && piVar1 != (int *)0x0) {
        FUN_715f961c(piVar1,DAT_700c2d08 & 0xff,DAT_700c2d08 & 0xff);
      }
    }
    if (DAT_71174ba0 != 0) {
      piVar1 = (int *)0x0;
      if (DAT_71174860 != '\0') {
        piVar1 = DAT_71174c38;
      }
      if (DAT_71174860 != '\0' && piVar1 != (int *)0x0) {
        FUN_7160f170(piVar1,DAT_71174ba0 & 0xffff);
      }
    }
    FUN_714fd86c(DAT_71174b98);
    uVar4 = DAT_71174b9c;
    iVar5 = FUN_71ba2cf0(DAT_71174b9c,0);
    if (iVar5 == 0) {
      if (DAT_71174860 != '\0') {
        piVar6 = DAT_71174c38;
      }
      if (DAT_71174860 != '\0' && piVar6 != (int *)0x0) {
        uVar4 = FUN_71ba0b38(uVar4,0x42c80000);
        uVar4 = FUN_71ba13e0(uVar4,0x42c80000);
        FUN_715fbd74(piVar6,uVar4);
      }
    }
    uVar4 = DAT_71174bac;
    iVar5 = FUN_71ba2cf0(DAT_71174bac,0);
    if ((iVar5 == 0) || (iVar5 = FUN_71ba2cf0(DAT_71174bb0,0), iVar5 == 0)) {
      piVar1 = (int *)0x0;
      if (DAT_71174860 != '\0') {
        piVar1 = DAT_71174c38;
      }
      if (DAT_71174860 != '\0' && piVar1 != (int *)0x0) {
        FUN_715fba6c(piVar1,0,uVar4);
        FUN_715fba6c(DAT_71174c38,1,DAT_71174bb0);
      }
    }
    uVar4 = DAT_71174ba4;
    iVar5 = FUN_71ba2cf0(DAT_71174ba4,0);
    if ((iVar5 == 0) || (iVar5 = FUN_71ba2cf0(DAT_71174ba8,0), iVar5 == 0)) {
      if (DAT_71174860 != '\0') {
        piVar6 = DAT_71174c38;
      }
      if (DAT_71174860 != '\0' && piVar6 != (int *)0x0) {
        uVar4 = FUN_71ba13e0(uVar4,0x42c80000);
        FUN_715fbc44(piVar6,0,uVar4);
        uVar4 = FUN_71ba13e0(DAT_71174ba8,0x42c80000);
        FUN_715fbc44(DAT_71174c38,1,uVar4);
      }
    }
    if ((DAT_71174bb8 & 1) == 0) {
      uStack_28 = DAT_71174bb8;
      uStack_24 = DAT_71174bbc;
      uStack_20 = DAT_71174bc0;
    }
    else {
      FUN_712f6d58(&uStack_28,DAT_71174bc0,DAT_71174bbc);
    }
    FUN_714fe20c(&uStack_28);
    if ((uStack_28 & 1) != 0) {
      thunk_qNQrlu(uStack_20);
    }
    if ((DAT_71174bc8 & 1) == 0) {
      uStack_38 = DAT_71174bc8;
      uStack_34 = DAT_71174bcc;
      uStack_30 = DAT_71174bd0;
    }
    else {
      FUN_712f6d58(&uStack_38,DAT_71174bd0,DAT_71174bcc);
    }
    thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
              (&DAT_71174bc8,&uStack_38);
    piVar6 = (int *)0x0;
    if (DAT_71174860 != '\0') {
      piVar6 = DAT_71174c38;
    }
    if (DAT_71174860 != '\0' && piVar6 != (int *)0x0) {
      *(undefined1 *)((int)piVar6 + 0x571) = 1;
      uVar3 = FUN_714fdabc(&DAT_71174bb8,0);
      *(undefined1 *)((int)DAT_71174c38 + 0x572) = uVar3;
      uVar3 = FUN_714fdabc(&DAT_71174bb8,1);
      *(undefined1 *)((int)DAT_71174c38 + 0x573) = uVar3;
      uVar3 = FUN_714fdabc(&DAT_71174bb8,2);
      *(undefined1 *)(DAT_71174c38 + 0x15d) = uVar3;
    }
    if ((uStack_38 & 1) != 0) {
      thunk_qNQrlu(uStack_30);
    }
    iVar5 = 0;
    do {
      if ((&DAT_71174870)[iVar5] != '\0') {
        FUN_714fd64c();
      }
      iVar5 = iVar5 + 0x24;
    } while (iVar5 != 0x2d0);
    FUN_715f5e68(DAT_71174c38,DAT_700c2d1c);
    thunk_FUN_715f704c(DAT_71174c38,1);
    FUN_71602e5c(DAT_71174c38,1);
    FUN_71603088(DAT_71174c38,1);
  }
  return;
}


// =========================================================================
// Function: FUN_714f8bcc
// Entry: 0x714f8bcc | Size: 1608 bytes
// =========================================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_714f8bcc(void)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
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
  byte bVar15;
  char *pcVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  undefined1 *puVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined4 *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint *puVar42;
  uint *puVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  byte *pbVar48;
  int *piVar49;
  uint uVar50;
  int iVar51;
  uint **ppuVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint *puVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  bool bVar64;
  bool bVar65;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  uint *apuStack_78 [2];
  uint uStack_70;
  uint *apuStack_6c [3];
  uint uStack_60;
  int *piStack_5c;
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
  uint *puStack_2c;
  uint uStack_28;
  
  uVar21 = DAT_71174be8;
  uVar20 = DAT_71174be4;
  uVar19 = DAT_71174be0;
  ppuVar52 = apuStack_78;
  if (DAT_71174860 == '\0') {
    return;
  }
  if (DAT_700c2ce0 == -1) {
    iVar51 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
    iVar17 = thunk_FUN_715bf66c(*(undefined4 *)(iVar51 + 0x130));
    uVar18 = *(undefined4 *)(iVar51 + 0x130);
    if (iVar17 == 0) {
      FUN_715601e8(uVar18,uVar19,uVar20,uVar21);
    }
    else {
      FUN_715bf69c(uVar18,uVar19,uVar20,uVar21);
    }
  }
  if (DAT_71174c35 == '\0') {
    uVar22 = DAT_71174c20 + DAT_71174c1c * 0x3c;
    uVar19 = FUN_71ba1b94(uVar22);
    if (0x7fffffff < uVar22) {
      do {
        uVar19 = FUN_71ba0b38(uVar19,0x44b40000);
        iVar17 = FUN_71ba2d10(uVar19,0);
      } while (iVar17 != 0);
    }
    iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    while (iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0xc4b40000);
      iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    }
    DAT_71174c30 = 0x44fa0000;
    DAT_71174c34 = '\0';
    DAT_71174c35 = '\x01';
    DAT_71174c28 = uVar19;
    DAT_71174c2c = uVar19;
LAB_714f8fb0:
    uVar19 = DAT_71174c2c;
    iVar17 = FUN_71ba2d10(DAT_71174c2c,0);
    while (iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0x44b40000);
      iVar17 = FUN_71ba2d10(uVar19,0);
    }
    iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    while (uVar20 = uVar19, iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0xc4b40000);
      iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    }
  }
  else {
    if (DAT_71174c34 == '\0') goto LAB_714f8fb0;
    uVar19 = FUN_71ba21e8(*DAT_70b42050,0x41855555);
    DAT_71174c30 = FUN_71ba0b38(uVar19,DAT_71174c30);
    uVar19 = FUN_71ba13e0(DAT_71174c30,0x44fa0000);
    iVar17 = FUN_71ba2d10(uVar19,0);
    if (iVar17 != 0) {
      uVar19 = 0;
    }
    iVar17 = FUN_71ba2d70(uVar19,0x3f800000);
    if (iVar17 != 0) {
      uVar19 = 0x3f800000;
    }
    uVar20 = FUN_71ba21e8(uVar19,uVar19);
    uVar19 = FUN_71ba0b38(uVar19,uVar19);
    uVar19 = FUN_71ba240c(0x40400000,uVar19);
    uStack_28 = FUN_71ba21e8(uVar20,uVar19);
    uVar21 = DAT_71174c2c;
    iVar17 = FUN_71ba2d10(DAT_71174c2c,0);
    iVar51 = FUN_71ba2d10(uVar21,0);
    uVar20 = DAT_71174c28;
    uVar19 = uVar21;
    while (iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0x44b40000);
      iVar17 = FUN_71ba2d10(uVar19,0);
    }
    iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    while (iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0xc4b40000);
      iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    }
    iVar17 = FUN_71ba2d10(uVar20,0);
    uVar18 = uVar20;
    while (iVar17 != 0) {
      uVar18 = FUN_71ba0b38(uVar18,0x44b40000);
      iVar17 = FUN_71ba2d10(uVar18,0);
    }
    iVar17 = FUN_71ba2d50(uVar18,0x44b40000);
    while (iVar17 != 0) {
      uVar18 = FUN_71ba0b38(uVar18,0xc4b40000);
      iVar17 = FUN_71ba2d50(uVar18,0x44b40000);
    }
    uVar19 = FUN_71ba240c(uVar19,uVar18);
    iVar17 = FUN_71ba2d70(uVar19,0x44340000);
    if (iVar17 == 0) {
      iVar17 = FUN_71ba2d10(uVar19,0xc4340000);
      if (iVar17 != 0) {
        uVar19 = FUN_71ba0b38(uVar19,0x44b40000);
      }
    }
    else {
      uVar19 = FUN_71ba0b38(uVar19,0xc4b40000);
    }
    uVar19 = FUN_71ba21e8(uVar19,uStack_28);
    uVar19 = FUN_71ba0b38(uVar19,uVar20);
    iVar17 = FUN_71ba2d10(uVar19,0);
    while (iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0x44b40000);
      iVar17 = FUN_71ba2d10(uVar19,0);
    }
    iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    while (iVar17 != 0) {
      uVar19 = FUN_71ba0b38(uVar19,0xc4b40000);
      iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
    }
    DAT_71174c24 = uVar19;
    iVar17 = FUN_71ba2d50(uStack_28,0x3f800000);
    uVar20 = DAT_71174c24;
    if (iVar17 != 0) {
      while (uVar19 = uVar21, iVar51 != 0) {
        uVar21 = FUN_71ba0b38(uVar19,0x44b40000);
        iVar51 = FUN_71ba2d10(uVar21,0);
      }
      iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
      while (iVar17 != 0) {
        uVar19 = FUN_71ba0b38(uVar19,0xc4b40000);
        iVar17 = FUN_71ba2d50(uVar19,0x44b40000);
      }
      DAT_71174c34 = '\0';
      uVar20 = uVar19;
    }
  }
  DAT_71174c24 = uVar20;
  thunk_FUN_71566994(DAT_711a3938,DAT_700c2d20);
  uVar22 = FUN_71ba17bc(uVar19);
  iVar17 = (int)(((ulonglong)uVar22 << 0x20) + (longlong)(int)uVar22 * -0x77777777 >> 0x20);
  iVar17 = (iVar17 >> 5) - (iVar17 >> 0x1f);
  thunk_FUN_715668c0(DAT_711a3938,iVar17,uVar22 + iVar17 * -0x3c);
  while( true ) {
    uVar22 = (uint)*ppuVar52 ^ 0x6a4dab1f;
    uVar41 = uVar22 | (uint)ppuVar52[1] ^ 0x679b29b;
    bVar64 = uVar41 == 0;
    if (bVar64) {
      uVar41 = (uint)ppuVar52[3] ^ 0xfcc126c8;
      uVar22 = (uint)ppuVar52[2] ^ 0x6efdd0cf;
    }
    if ((bVar64 && (uVar22 == 0 && uVar41 == 0)) &&
       (ppuVar52[4] == (uint *)0xbefc55d6 && ppuVar52[5] == (uint *)0x370f3a77)) break;
    ppuVar52 = ppuVar52 + 1;
  }
  bVar64 = (char)ppuVar52[0x4006] != '\0';
  cVar4 = '\0';
  if (bVar64) {
    cVar4 = *(char *)((int)ppuVar52 + 0x10019);
  }
  if (bVar64 && cVar4 != '\0') goto LAB_714f9370;
  do {
    pbVar48 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
    do {
      *pbVar48 = *pbVar48 ^ 0x50;
      pbVar48 = pbVar48 + 1;
    } while (pbVar48 != (byte *)0x3c);
    uRam00000000 = 0xe3b0003a;
    _LAB_00000004 = 0xe3b01000;
    ppuVar52 = (uint **)0xf0002;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_714f9370:
  } while (*(char *)((int)ppuVar52 + 0x1001a) == '\0');
  if (ppuVar52[0xc01e] == ppuVar52[0xc01c]) {
    pbVar48 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
    do {
      *pbVar48 = *pbVar48 ^ 0x50;
      pbVar48 = pbVar48 + 1;
    } while (pbVar48 != (byte *)0x3c);
    uRam00000000 = 0xe3b00006;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_714faae4:
    pbVar48 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
    do {
      *pbVar48 = *pbVar48 ^ 0x50;
      pbVar48 = pbVar48 + 1;
    } while (pbVar48 != (byte *)0x3c);
    uRam00000000 = 0xe3b00008;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
LAB_714fab84:
    pbVar48 = (byte *)0x0;
    software_interrupt(0);
    imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
    do {
      *pbVar48 = *pbVar48 ^ 0x50;
      pbVar48 = pbVar48 + 1;
    } while (pbVar48 != (byte *)0x3c);
    uRam00000000 = 0xe3b0000a;
    _LAB_00000004 = 0xe3b01000;
    FUN_719344e4(0,0x3c,0);
    (*(code *)0x0)();
  }
  else {
    puVar28 = (undefined1 *)ppuVar52[0xc01c];
    if ((puVar28 < &LAB_714f93ac) && (&LAB_714f93ac < puVar28 + (int)ppuVar52[0xc01d]))
    goto LAB_714faae4;
    puVar28 = (undefined1 *)ppuVar52[0xc01e];
    if ((&LAB_714f93ac < puVar28) || (puVar28 + (int)ppuVar52[0xc01f] < &LAB_714f93ac))
    goto LAB_714fab84;
    iVar17 = FUN_717d2588();
    if (iVar17 == 0xa1b) {
      apuStack_78[1] = (uint *)ppuVar52;
      apuStack_78[0] = (uint *)(ppuVar52 + 0xc01b);
      uVar22 = *apuStack_78[0];
      if (uVar22 == 0x1e) {
        *apuStack_78[0] = 0;
        uVar22 = *apuStack_78[0];
      }
      if (((uVar22 & 3) == 0) && (ppuVar52[0xc017] != (uint *)0x0)) {
        puVar34 = ppuVar52[0xc017];
        piVar49 = puVar34 + 1;
        piVar29 = (int *)*puVar34;
        if (piVar29 != piVar49) {
LAB_714f99d0:
          piStack_5c = piVar29;
          uStack_60 = piStack_5c[7];
          iVar17 = 0x27d4eb7f;
          uVar41 = piStack_5c[6];
          puVar42 = (uint *)piStack_5c[5];
          apuStack_6c[2] = (uint *)piStack_5c[8];
          uVar22 = 0x56d677d6;
          if (0x1f < uVar41) {
            uStack_28 = 0xba94458a;
            puStack_2c = (uint *)0x61c8869e;
            uVar33 = 0xc2b2ae8d;
            uStack_30 = 0x40801011;
            uStack_34 = 0x50;
            uStack_38 = 0x6854fb60;
            uStack_3c = 0xee40c5e7;
            uVar57 = 0x60ea283e;
            uVar22 = 0;
            uVar24 = uVar41;
            puVar43 = puVar42;
            do {
              uStack_40 = uVar22;
              uStack_44 = uVar57;
              lVar5 = (ulonglong)puVar43[6] * 0x27d4eb4f;
              uVar22 = (uint)lVar5;
              uVar58 = uVar22 + uStack_28;
              pbVar48 = (byte *)((int)puStack_2c +
                                (uint)CARRY4(uVar22,uStack_28) +
                                puVar43[7] * 0x27d4eb4f +
                                puVar43[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20));
              uVar25 = (uint)pbVar48 >> 1;
              uStack_48 = uVar58 * -0x80000000 | uVar25;
              uStack_28 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
              uVar58 = uVar58 >> 1;
              uStack_4c = (int)pbVar48 * -0x80000000 | uVar58;
              puStack_2c = (uint *)(uStack_4c * -0x7a143579 +
                                   uStack_48 * -0x61c8864f +
                                   (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20));
              lVar5 = (ulonglong)puVar43[4] * 0x27d4eb4f;
              uVar22 = (uint)lVar5;
              uVar40 = uVar22 + uStack_30;
              uVar22 = puVar43[5] * 0x27d4eb4f +
                       puVar43[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_34 +
                       (uint)CARRY4(uVar22,uStack_30);
              uVar30 = uVar22 >> 1;
              uStack_50 = uVar40 * -0x80000000 | uVar30;
              uVar40 = uVar40 >> 1;
              uStack_54 = uVar22 * -0x80000000 | uVar40;
              puVar60 = puVar43 + 1;
              uStack_30 = (uint)((ulonglong)uStack_50 * 0x85ebca87);
              uStack_34 = uStack_54 * -0x7a143579 +
                          uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20)
              ;
              puVar1 = puVar43 + 2;
              puVar2 = puVar43 + 3;
              lVar5 = (ulonglong)*puVar1 * 0x27d4eb4f;
              uVar57 = (uint)lVar5;
              uVar22 = *puVar43;
              puVar43 = puVar43 + 8;
              uVar23 = uVar57 + uStack_38;
              uVar57 = *puVar2 * 0x27d4eb4f +
                       *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uVar33 +
                       (uint)CARRY4(uVar57,uStack_38);
              uVar31 = uVar57 >> 1;
              uStack_58 = uVar23 * -0x80000000 | uVar31;
              uVar23 = uVar23 >> 1;
              uVar62 = uVar57 * -0x80000000 | uVar23;
              uStack_38 = (uint)((ulonglong)uStack_58 * 0x85ebca87);
              uVar33 = uVar62 * -0x7a143579 +
                       uStack_58 * -0x61c8864f + (int)((ulonglong)uStack_58 * 0x85ebca87 >> 0x20);
              lVar5 = (ulonglong)uVar22 * 0x27d4eb4f;
              uVar57 = (uint)lVar5;
              uVar53 = uVar57 + uStack_3c;
              uVar22 = *puVar60 * 0x27d4eb4f +
                       uVar22 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_44 +
                       (uint)CARRY4(uVar57,uStack_3c);
              bVar64 = uVar24 < 0x20;
              uVar24 = uVar24 - 0x20;
              uVar26 = uVar22 >> 1;
              uVar36 = uVar53 * -0x80000000 | uVar26;
              uVar53 = uVar53 >> 1;
              uVar37 = uVar22 * -0x80000000 | uVar53;
              uStack_3c = (uint)((ulonglong)uVar36 * 0x85ebca87);
              uVar57 = uVar37 * -0x7a143579 +
                       uVar36 * -0x61c8864f + (int)((ulonglong)uVar36 * 0x85ebca87 >> 0x20);
              uVar22 = uStack_40 - bVar64;
            } while ((uint)(uVar24 < 0x20) <= -uVar22);
            uVar50 = uStack_3c << 1 | uVar57 >> 0x1f;
            uVar55 = uStack_38 << 7 | uVar33 >> 0x19;
            uVar54 = uVar55 + uVar50;
            uVar24 = uStack_30 >> 0x14;
            uVar56 = uStack_30 << 0xc | uStack_34 >> 0x14;
            uVar59 = uVar54 + uVar56;
            uStack_30 = (uint)((ulonglong)uVar36 * 0x80000000 >> 0x20);
            uVar61 = (uint)((ulonglong)uVar36 * 0x80000000) |
                     uVar37 * 0xf796ca9 +
                     uVar36 * -0x210ca4ff + (int)((ulonglong)uVar36 * 0xf796ca9 >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar61 * 0x85ebca87;
            uVar46 = uStack_28 << 0x12 | (uint)puStack_2c >> 0xe;
            uVar63 = uVar59 + uVar46 ^ (uint)lVar5;
            lVar6 = (ulonglong)uVar63 * 0x85ebca87;
            uVar47 = (uint)lVar6;
            uVar35 = (uint)((ulonglong)uStack_58 * 0x80000000) |
                     uVar62 * 0xf796ca9 +
                     uStack_58 * -0x210ca4ff + (int)((ulonglong)uStack_58 * 0xf796ca9 >> 0x20) >> 1;
            lVar7 = (ulonglong)uVar35 * 0x85ebca87;
            uVar62 = uVar47 + 0xc2b2ae63 ^ (uint)lVar7;
            lVar8 = (ulonglong)uVar62 * 0x85ebca87;
            uVar44 = (uint)lVar8;
            uVar45 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                     uStack_54 * 0xf796ca9 +
                     uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
            lVar9 = (ulonglong)uVar45 * 0x85ebca87;
            uVar36 = uVar44 + 0xc2b2ae63 ^ (uint)lVar9;
            lVar10 = (ulonglong)uVar36 * 0x85ebca87;
            uVar32 = (uint)lVar10;
            uVar38 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                     uStack_4c * 0xf796ca9 +
                     uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
            lVar11 = (ulonglong)uVar38 * 0x85ebca87;
            uVar37 = uVar32 + 0xc2b2ae63 ^ (uint)lVar11;
            lVar12 = (ulonglong)uVar37 * 0x85ebca87;
            uVar39 = (uint)lVar12;
            uVar22 = uVar39 + 0xc2b2ae63;
            iVar17 = (((((uVar33 * 0x80 | uStack_38 >> 0x19) + (uVar57 * 2 | uStack_3c >> 0x1f) +
                         (uint)CARRY4(uVar55,uVar50) + (uStack_34 * 0x1000 | uVar24) +
                         (uint)CARRY4(uVar54,uVar56) +
                         ((int)puStack_2c * 0x40000 | uStack_28 >> 0xe) +
                         (uint)CARRY4(uVar59,uVar46) ^
                        (uVar53 * -0x80000000 + uVar26 * -0x784349ac + uStack_30) * -0x7a143579 +
                        uVar61 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                        uVar63 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                        (uint)(0x3d4d519c < uVar47) ^
                       (uVar23 * -0x80000000 +
                       uVar31 * -0x784349ac + (int)((ulonglong)uStack_58 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar35 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                       -0x7a143579 + uVar62 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                       -0x7a143589 + (uint)(0x3d4d519c < uVar44) ^
                      (uVar40 * -0x80000000 +
                      uVar30 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                      -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                      -0x7a143579 + uVar36 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                      -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                     (uVar58 * -0x80000000 +
                     uVar25 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                     -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar39);
            uStack_70 = uVar41;
            apuStack_6c[0] = puVar42;
          }
          uStack_28 = uVar22 + uVar41;
          uVar57 = uVar41 & 0x1f;
          uVar22 = iVar17 + (uint)CARRY4(uVar22,uVar41);
          puVar42 = (uint *)((int)puVar42 + (uVar41 & 0xffffffe0));
          uVar41 = 0;
          do {
            if (uVar41 == 0 && (7 < uVar57) <= uVar41) {
              if (uVar41 == 0 && (3 < uVar57) <= uVar41) {
                if (uVar57 == 0 && uVar41 == 0) goto LAB_714fa010;
                lVar5 = (ulonglong)(uint)(byte)*puVar42 * 0x165667c5;
                uVar24 = (uint)lVar5 ^ uStack_28;
                uVar22 = (uint)(byte)*puVar42 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^
                         uVar22;
                uVar33 = uVar24 << 0xb | uVar22 >> 0x15;
                lVar5 = (ulonglong)uVar33 * 0x85ebca87;
                uStack_28 = (uint)lVar5;
                iVar17 = 1;
                uVar22 = (uVar22 << 0xb | uVar24 >> 0x15) * -0x7a143579 +
                         uVar33 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
                uVar58 = 0xffffffff;
              }
              else {
                lVar5 = (ulonglong)*puVar42 * 0x85ebca87;
                uVar24 = (uint)lVar5 ^ uStack_28;
                uVar22 = *puVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
                uVar33 = uVar24 << 0x17 | uVar22 >> 9;
                lVar5 = (ulonglong)uVar33 * 0x27d4eb4f;
                uVar25 = (uint)lVar5;
                uStack_28 = uVar25 + 0x9e3779f9;
                iVar17 = 4;
                uVar22 = (uVar22 << 0x17 | uVar24 >> 9) * 0x27d4eb4f +
                         uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                         (uint)(0x61c88606 < uVar25);
                uVar58 = 0xfffffffc;
              }
            }
            else {
              uVar24 = *puVar42;
              uVar25 = (uint)((ulonglong)uVar24 * 0x80000000) |
                       puVar42[1] * 0x27d4eb4f +
                       uVar24 * -0x3d4d51c3 + (int)((ulonglong)uVar24 * 0x27d4eb4f >> 0x20) >> 1;
              lVar5 = (ulonglong)uVar25 * 0x85ebca87;
              uVar33 = (uint)lVar5 ^ uStack_28;
              uVar22 = (puVar42[1] * -0x80000000 +
                       uVar24 * -0x6c158a59 + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                       -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22
              ;
              uVar24 = uVar33 << 0x1b | uVar22 >> 5;
              lVar5 = (ulonglong)uVar24 * 0x85ebca87;
              uVar25 = (uint)lVar5;
              uVar58 = 0xfffffff8;
              uStack_28 = uVar25 + 0xc2b2ae63;
              iVar17 = 8;
              uVar22 = (uVar22 << 0x1b | uVar33 >> 5) * -0x7a143579 +
                       uVar24 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                       (uint)(0x3d4d519c < uVar25);
              puStack_2c = puVar42;
            }
            bVar64 = CARRY4(uVar58,uVar57);
            uVar57 = uVar58 + uVar57;
            puVar42 = (uint *)((int)puVar42 + iVar17);
            uVar41 = (uVar41 - 1) + (uint)bVar64;
          } while( true );
        }
      }
LAB_714f9458:
      uVar22 = *apuStack_78[0];
      *apuStack_78[0] = uVar22 + 1;
      if (uVar22 == 6) {
        piStack_5c = (int *)ppuVar52[0xc011];
        piVar29 = (int *)ppuVar52[0xc010];
        puVar42 = ppuVar52[0xc00f];
        uStack_60 = (uint)ppuVar52[0xc012];
        if (piVar29 < (int *)0x20) {
          iVar17 = 0x27d4eb7f;
          uVar22 = 0x56d677d6;
        }
        else {
          uStack_30 = 0x50;
          uStack_38 = 0x40801011;
          puStack_2c = (uint *)0x61c8869e;
          uStack_28 = 0xba94458a;
          uStack_3c = 0xc2b2ae8d;
          iVar17 = 0;
          uStack_34 = 0x6854fb60;
          uVar22 = 0xee40c5e7;
          uVar41 = 0x60ea283e;
          puVar43 = puVar42;
          piVar49 = piVar29;
          do {
            uStack_44 = uVar41;
            uStack_40 = uVar22;
            lVar5 = (ulonglong)puVar43[6] * 0x27d4eb4f;
            uVar22 = (uint)lVar5;
            uVar24 = uVar22 + uStack_28;
            pbVar48 = (byte *)((int)puStack_2c +
                              (uint)CARRY4(uVar22,uStack_28) +
                              puVar43[7] * 0x27d4eb4f +
                              puVar43[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20));
            uVar57 = (uint)pbVar48 >> 1;
            uStack_48 = uVar24 * -0x80000000 | uVar57;
            uVar24 = uVar24 >> 1;
            uStack_4c = (int)pbVar48 * -0x80000000 | uVar24;
            uStack_28 = (uint)((ulonglong)uStack_48 * 0x85ebca87);
            puStack_2c = (uint *)(uStack_4c * -0x7a143579 +
                                 uStack_48 * -0x61c8864f +
                                 (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20));
            lVar5 = (ulonglong)puVar43[4] * 0x27d4eb4f;
            uVar22 = (uint)lVar5;
            uVar25 = uVar22 + uStack_38;
            uVar22 = puVar43[5] * 0x27d4eb4f +
                     puVar43[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar22,uStack_38);
            uVar33 = uVar22 >> 1;
            uStack_50 = uVar25 * -0x80000000 | uVar33;
            uVar25 = uVar25 >> 1;
            uStack_54 = uVar22 * -0x80000000 | uVar25;
            puVar60 = puVar43 + 1;
            uStack_38 = (uint)((ulonglong)uStack_50 * 0x85ebca87);
            uStack_30 = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            puVar1 = puVar43 + 2;
            puVar2 = puVar43 + 3;
            lVar5 = (ulonglong)*puVar1 * 0x27d4eb4f;
            uVar41 = (uint)lVar5;
            uVar22 = *puVar43;
            puVar43 = puVar43 + 8;
            uVar30 = uVar41 + uStack_34;
            uVar41 = *puVar2 * 0x27d4eb4f + *puVar1 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_3c + (uint)CARRY4(uVar41,uStack_34);
            uVar58 = uVar41 >> 1;
            uVar53 = uVar30 * -0x80000000 | uVar58;
            uVar30 = uVar30 >> 1;
            uStack_58 = uVar41 * -0x80000000 | uVar30;
            uStack_34 = (uint)((ulonglong)uVar53 * 0x85ebca87);
            uStack_3c = uStack_58 * -0x7a143579 +
                        uVar53 * -0x61c8864f + (int)((ulonglong)uVar53 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)uVar22 * 0x27d4eb4f;
            uVar41 = (uint)lVar5;
            uVar31 = uVar41 + uStack_40;
            uVar22 = *puVar60 * 0x27d4eb4f + uVar22 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_44 + (uint)CARRY4(uVar41,uStack_40);
            bVar64 = piVar49 < (int *)0x20;
            piVar49 = piVar49 + -8;
            uVar40 = uVar22 >> 1;
            uVar23 = uVar31 * -0x80000000 | uVar40;
            uVar31 = uVar31 >> 1;
            uVar26 = uVar22 * -0x80000000 | uVar31;
            iVar17 = iVar17 - (uint)bVar64;
            uVar22 = (uint)((ulonglong)uVar23 * 0x85ebca87);
            uVar41 = uVar26 * -0x7a143579 +
                     uVar23 * -0x61c8864f + (int)((ulonglong)uVar23 * 0x85ebca87 >> 0x20);
          } while ((uint)(piVar49 < (int *)0x20) <= (uint)-iVar17);
          uVar37 = uVar22 << 1 | uVar41 >> 0x1f;
          uVar62 = uStack_34 << 7 | uStack_3c >> 0x19;
          uVar44 = uVar62 + uVar37;
          uVar36 = uStack_38 << 0xc | uStack_30 >> 0x14;
          uVar54 = uVar44 + uVar36;
          uStack_30 = (uStack_3c * 0x80 | uStack_34 >> 0x19) + (uVar41 * 2 | uVar22 >> 0x1f) +
                      (uint)CARRY4(uVar62,uVar37) + (uStack_30 * 0x1000 | uStack_38 >> 0x14) +
                      (uint)CARRY4(uVar44,uVar36);
          uStack_34 = (uint)((ulonglong)uVar23 * 0x80000000 >> 0x20);
          uVar50 = (uint)((ulonglong)uVar23 * 0x80000000) |
                   uVar26 * 0xf796ca9 +
                   uVar23 * -0x210ca4ff + (int)((ulonglong)uVar23 * 0xf796ca9 >> 0x20) >> 1;
          uVar62 = uStack_28 << 0x12 | (uint)puStack_2c >> 0xe;
          lVar5 = (ulonglong)uVar50 * 0x85ebca87;
          uVar36 = uVar54 + uVar62 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar36 * 0x85ebca87;
          uVar63 = (uint)lVar6;
          uVar37 = (uint)((ulonglong)uVar53 * 0x80000000) |
                   uStack_58 * 0xf796ca9 +
                   uVar53 * -0x210ca4ff + (int)((ulonglong)uVar53 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar37 * 0x85ebca87;
          uVar41 = uVar63 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar41 * 0x85ebca87;
          uVar44 = (uint)lVar8;
          uVar45 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar45 * 0x85ebca87;
          uVar23 = uVar44 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar23 * 0x85ebca87;
          uVar32 = (uint)lVar10;
          uVar38 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar38 * 0x85ebca87;
          uVar26 = uVar32 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar26 * 0x85ebca87;
          uVar39 = (uint)lVar12;
          uVar22 = uVar39 + 0xc2b2ae63;
          iVar17 = ((((uStack_30 + ((int)puStack_2c * 0x40000 | uStack_28 >> 0xe) +
                       (uint)CARRY4(uVar54,uVar62) ^
                      (uVar31 * -0x80000000 + uVar40 * -0x784349ac + uStack_34) * -0x7a143579 +
                      uVar50 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                      uVar36 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uVar63) ^
                     (uVar30 * -0x80000000 +
                     uVar58 * -0x784349ac + (int)((ulonglong)uVar53 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                     -0x7a143579 + uVar41 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar44) ^
                    (uVar25 * -0x80000000 +
                    uVar33 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                    -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar32) ^
                   (uVar24 * -0x80000000 +
                   uVar57 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar38 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                   -0x7a143579 + uVar26 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar39);
          apuStack_6c[1] = (uint *)piVar29;
          apuStack_6c[2] = puVar42;
        }
        uVar41 = uVar22 + (int)piVar29;
        uVar57 = (uint)piVar29 & 0x1f;
        uVar22 = iVar17 + (uint)CARRY4(uVar22,(uint)piVar29);
        puVar42 = (uint *)((int)puVar42 + ((uint)piVar29 & 0xffffffe0));
        uVar24 = 0;
        do {
          if (uVar24 == 0 && (7 < uVar57) <= uVar24) {
            if (uVar24 == 0 && (3 < uVar57) <= uVar24) {
              if (uVar57 == 0 && uVar24 == 0) goto LAB_714fa9a8;
              lVar5 = (ulonglong)(uint)(byte)*puVar42 * 0x165667c5;
              uVar33 = (uint)lVar5 ^ uVar41;
              uVar22 = (uint)(byte)*puVar42 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
              uVar25 = uVar33 << 0xb | uVar22 >> 0x15;
              lVar5 = (ulonglong)uVar25 * 0x85ebca87;
              uVar41 = (uint)lVar5;
              iVar17 = 1;
              uVar22 = (uVar22 << 0xb | uVar33 >> 0x15) * -0x7a143579 +
                       uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
              uVar33 = 0xffffffff;
            }
            else {
              lVar5 = (ulonglong)*puVar42 * 0x85ebca87;
              uVar33 = (uint)lVar5 ^ uVar41;
              uVar22 = *puVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
              uVar58 = uVar33 << 0x17 | uVar22 >> 9;
              lVar5 = (ulonglong)uVar58 * 0x27d4eb4f;
              uVar25 = (uint)lVar5;
              uVar41 = uVar25 + 0x9e3779f9;
              iVar17 = 4;
              uVar22 = (uVar22 << 0x17 | uVar33 >> 9) * 0x27d4eb4f +
                       uVar58 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar25);
              uVar33 = 0xfffffffc;
            }
          }
          else {
            uVar33 = *puVar42;
            uVar25 = (uint)((ulonglong)uVar33 * 0x80000000) |
                     puVar42[1] * 0x27d4eb4f +
                     uVar33 * -0x3d4d51c3 + (int)((ulonglong)uVar33 * 0x27d4eb4f >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar25 * 0x85ebca87;
            uVar58 = (uint)lVar5 ^ uVar41;
            uVar22 = (puVar42[1] * -0x80000000 +
                     uVar33 * -0x6c158a59 + (int)((ulonglong)uVar33 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
            uVar25 = uVar58 << 0x1b | uVar22 >> 5;
            lVar5 = (ulonglong)uVar25 * 0x85ebca87;
            uVar33 = (uint)lVar5;
            uVar41 = uVar33 + 0xc2b2ae63;
            iVar17 = 8;
            uVar22 = (uVar22 << 0x1b | uVar58 >> 5) * -0x7a143579 +
                     uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar33);
            uVar33 = 0xfffffff8;
          }
          bVar64 = CARRY4(uVar33,uVar57);
          uVar57 = uVar33 + uVar57;
          puVar42 = (uint *)((int)puVar42 + iVar17);
          uVar24 = (uVar24 - 1) + (uint)bVar64;
        } while( true );
      }
      if (uVar22 == 2) {
        piStack_5c = (int *)ppuVar52[0x4009];
        piVar29 = (int *)ppuVar52[0x4008];
        puVar42 = ppuVar52[0x4007];
        uStack_60 = (uint)ppuVar52[0x400a];
        if (piVar29 < (int *)0x20) {
          iVar17 = 0x27d4eb7f;
          uVar22 = 0x56d677d6;
        }
        else {
          uStack_30 = 0x50;
          puStack_2c = (uint *)0x40801011;
          uStack_28 = 0x61c8869e;
          uStack_38 = 0xc2b2ae8d;
          uStack_3c = 0xba94458a;
          iVar17 = 0;
          uStack_34 = 0x6854fb60;
          uVar22 = 0xee40c5e7;
          uVar41 = 0x60ea283e;
          puVar43 = puVar42;
          piVar49 = piVar29;
          do {
            uStack_44 = uVar41;
            uStack_40 = uVar22;
            lVar5 = (ulonglong)puVar43[6] * 0x27d4eb4f;
            uVar22 = (uint)lVar5;
            puVar60 = puVar43 + 1;
            uVar24 = uVar22 + uStack_3c;
            uVar22 = puVar43[7] * 0x27d4eb4f +
                     puVar43[6] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_28 +
                     (uint)CARRY4(uVar22,uStack_3c);
            uVar57 = uVar22 >> 1;
            uStack_48 = uVar24 * -0x80000000 | uVar57;
            uVar24 = uVar24 >> 1;
            uStack_4c = uVar22 * -0x80000000 | uVar24;
            uStack_3c = (uint)((ulonglong)uStack_48 * 0x85ebca87);
            uStack_28 = uStack_4c * -0x7a143579 +
                        uStack_48 * -0x61c8864f + (int)((ulonglong)uStack_48 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)puVar43[4] * 0x27d4eb4f;
            uVar22 = (uint)lVar5;
            uVar25 = uVar22 + (int)puStack_2c;
            uVar22 = puVar43[5] * 0x27d4eb4f +
                     puVar43[4] * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + uStack_30 +
                     (uint)CARRY4(uVar22,(uint)puStack_2c);
            uVar33 = uVar22 >> 1;
            uStack_50 = uVar25 * -0x80000000 | uVar33;
            uVar25 = uVar25 >> 1;
            uStack_54 = uVar22 * -0x80000000 | uVar25;
            puVar1 = puVar43 + 3;
            puStack_2c = (uint *)((ulonglong)uStack_50 * 0x85ebca87);
            uStack_30 = uStack_54 * -0x7a143579 +
                        uStack_50 * -0x61c8864f + (int)((ulonglong)uStack_50 * 0x85ebca87 >> 0x20);
            uVar41 = *puVar43;
            puVar2 = puVar43 + 2;
            puVar43 = puVar43 + 8;
            lVar5 = (ulonglong)*puVar2 * 0x27d4eb4f;
            uVar22 = (uint)lVar5;
            uVar30 = uVar22 + uStack_34;
            uVar22 = *puVar1 * 0x27d4eb4f + *puVar2 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_38 + (uint)CARRY4(uVar22,uStack_34);
            uVar58 = uVar22 >> 1;
            uVar26 = uVar30 * -0x80000000 | uVar58;
            uVar30 = uVar30 >> 1;
            uVar23 = uVar22 * -0x80000000 | uVar30;
            uStack_34 = (uint)((ulonglong)uVar26 * 0x85ebca87);
            uStack_38 = uVar23 * -0x7a143579 +
                        uVar26 * -0x61c8864f + (int)((ulonglong)uVar26 * 0x85ebca87 >> 0x20);
            lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
            uVar22 = (uint)lVar5;
            uVar31 = uVar22 + uStack_40;
            uVar22 = *puVar60 * 0x27d4eb4f + uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20)
                     + uStack_44 + (uint)CARRY4(uVar22,uStack_40);
            bVar64 = piVar49 < (int *)0x20;
            piVar49 = piVar49 + -8;
            iVar17 = iVar17 - (uint)bVar64;
            uVar40 = uVar22 >> 1;
            uVar53 = uVar31 * -0x80000000 | uVar40;
            uVar31 = uVar31 >> 1;
            uVar62 = uVar22 * -0x80000000 | uVar31;
            uVar22 = (uint)((ulonglong)uVar53 * 0x85ebca87);
            uVar41 = uVar62 * -0x7a143579 +
                     uVar53 * -0x61c8864f + (int)((ulonglong)uVar53 * 0x85ebca87 >> 0x20);
          } while ((uint)(piVar49 < (int *)0x20) <= (uint)-iVar17);
          uVar36 = uVar22 << 1 | uVar41 >> 0x1f;
          uVar44 = uStack_34 << 7 | uStack_38 >> 0x19;
          uVar37 = uVar44 + uVar36;
          uVar45 = (int)puStack_2c << 0xc | uStack_30 >> 0x14;
          uVar38 = uVar37 + uVar45;
          puStack_2c = (uint *)((uStack_38 * 0x80 | uStack_34 >> 0x19) +
                                (uVar41 * 2 | uVar22 >> 0x1f) + (uint)CARRY4(uVar44,uVar36) +
                                (uStack_30 * 0x1000 | (uint)puStack_2c >> 0x14) +
                               (uint)CARRY4(uVar37,uVar45));
          uStack_30 = (uint)((ulonglong)uVar53 * 0x80000000 >> 0x20);
          uVar41 = (uint)((ulonglong)uVar53 * 0x80000000) |
                   uVar62 * 0xf796ca9 +
                   uVar53 * -0x210ca4ff + (int)((ulonglong)uVar53 * 0xf796ca9 >> 0x20) >> 1;
          lVar5 = (ulonglong)uVar41 * 0x85ebca87;
          uVar50 = uStack_3c << 0x12 | uStack_28 >> 0xe;
          uVar39 = uVar38 + uVar50 ^ (uint)lVar5;
          lVar6 = (ulonglong)uVar39 * 0x85ebca87;
          uStack_34 = (uint)lVar6;
          uVar54 = (uint)((ulonglong)uVar26 * 0x80000000) |
                   uVar23 * 0xf796ca9 +
                   uVar26 * -0x210ca4ff + (int)((ulonglong)uVar26 * 0xf796ca9 >> 0x20) >> 1;
          lVar7 = (ulonglong)uVar54 * 0x85ebca87;
          uVar23 = uStack_34 + 0xc2b2ae63 ^ (uint)lVar7;
          lVar8 = (ulonglong)uVar23 * 0x85ebca87;
          uVar36 = (uint)lVar8;
          uVar37 = (uint)((ulonglong)uStack_50 * 0x80000000) |
                   uStack_54 * 0xf796ca9 +
                   uStack_50 * -0x210ca4ff + (int)((ulonglong)uStack_50 * 0xf796ca9 >> 0x20) >> 1;
          lVar9 = (ulonglong)uVar37 * 0x85ebca87;
          uVar53 = uVar36 + 0xc2b2ae63 ^ (uint)lVar9;
          lVar10 = (ulonglong)uVar53 * 0x85ebca87;
          uVar44 = (uint)lVar10;
          uVar45 = (uint)((ulonglong)uStack_48 * 0x80000000) |
                   uStack_4c * 0xf796ca9 +
                   uStack_48 * -0x210ca4ff + (int)((ulonglong)uStack_48 * 0xf796ca9 >> 0x20) >> 1;
          lVar11 = (ulonglong)uVar45 * 0x85ebca87;
          uVar62 = uVar44 + 0xc2b2ae63 ^ (uint)lVar11;
          lVar12 = (ulonglong)uVar62 * 0x85ebca87;
          uVar32 = (uint)lVar12;
          uVar22 = uVar32 + 0xc2b2ae63;
          iVar17 = (((((uint)((int)puStack_2c +
                             (uint)CARRY4(uVar38,uVar50) + (uStack_28 * 0x40000 | uStack_3c >> 0xe))
                      ^ (uVar31 * -0x80000000 + uVar40 * -0x784349ac + uStack_30) * -0x7a143579 +
                        uVar41 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579 +
                      uVar39 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589 +
                      (uint)(0x3d4d519c < uStack_34) ^
                     (uVar30 * -0x80000000 +
                     uVar58 * -0x784349ac + (int)((ulonglong)uVar26 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar54 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20)) *
                     -0x7a143579 + uVar23 * -0x61c8864f + (int)((ulonglong)lVar8 >> 0x20) +
                     -0x7a143589 + (uint)(0x3d4d519c < uVar36) ^
                    (uVar25 * -0x80000000 +
                    uVar33 * -0x784349ac + (int)((ulonglong)uStack_50 * 0x80000000 >> 0x20)) *
                    -0x7a143579 + uVar37 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) *
                    -0x7a143579 + uVar53 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) +
                    -0x7a143589 + (uint)(0x3d4d519c < uVar44) ^
                   (uVar24 * -0x80000000 +
                   uVar57 * -0x784349ac + (int)((ulonglong)uStack_48 * 0x80000000 >> 0x20)) *
                   -0x7a143579 + uVar45 * -0x61c8864f + (int)((ulonglong)lVar11 >> 0x20)) *
                   -0x7a143579 + uVar62 * -0x61c8864f + (int)((ulonglong)lVar12 >> 0x20) +
                   -0x7a143589 + (uint)(0x3d4d519c < uVar32);
          apuStack_6c[1] = (uint *)piVar29;
          apuStack_6c[2] = puVar42;
        }
        uVar57 = (uint)piVar29 & 0x1f;
        puVar42 = (uint *)((int)puVar42 + ((uint)piVar29 & 0xffffffe0));
        uVar41 = 0;
        puVar43 = (uint *)(uVar22 + (int)piVar29);
        uVar22 = iVar17 + (uint)CARRY4(uVar22,(uint)piVar29);
        do {
          if (uVar41 == 0 && (7 < uVar57) <= uVar41) {
            if (uVar41 == 0 && (3 < uVar57) <= uVar41) {
              if (uVar57 == 0 && uVar41 == 0) goto LAB_714fa2b8;
              iVar17 = 1;
              lVar5 = (ulonglong)(uint)(byte)*puVar42 * 0x165667c5;
              uVar24 = (uint)lVar5 ^ (uint)puVar43;
              uVar22 = (uint)(byte)*puVar42 * 0x27d4eb2f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
              uVar33 = uVar24 << 0xb | uVar22 >> 0x15;
              lVar5 = (ulonglong)uVar33 * 0x85ebca87;
              puVar60 = (uint *)lVar5;
              uVar33 = (uVar22 << 0xb | uVar24 >> 0x15) * -0x7a143579 +
                       uVar33 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20);
              uVar24 = 0xffffffff;
            }
            else {
              lVar5 = (ulonglong)*puVar42 * 0x85ebca87;
              uVar24 = (uint)lVar5 ^ (uint)puVar43;
              uVar22 = *puVar42 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
              uVar33 = uVar24 << 0x17 | uVar22 >> 9;
              lVar5 = (ulonglong)uVar33 * 0x27d4eb4f;
              uVar25 = (uint)lVar5;
              iVar17 = 4;
              puVar60 = (uint *)(uVar25 + 0x9e3779f9);
              uVar33 = (uVar22 << 0x17 | uVar24 >> 9) * 0x27d4eb4f +
                       uVar33 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20) + 0x165667b1 +
                       (uint)(0x61c88606 < uVar25);
              uVar24 = 0xfffffffc;
            }
          }
          else {
            uVar24 = *puVar42;
            uVar33 = (uint)((ulonglong)uVar24 * 0x80000000) |
                     puVar42[1] * 0x27d4eb4f +
                     uVar24 * -0x3d4d51c3 + (int)((ulonglong)uVar24 * 0x27d4eb4f >> 0x20) >> 1;
            lVar5 = (ulonglong)uVar33 * 0x85ebca87;
            uVar24 = (puVar42[1] * -0x80000000 +
                     uVar24 * -0x6c158a59 + (int)((ulonglong)uVar24 * 0x80000000 >> 0x20)) *
                     -0x7a143579 + uVar33 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) ^ uVar22;
            uVar33 = (uint)lVar5 ^ (uint)puVar43;
            uVar25 = uVar33 << 0x1b | uVar24 >> 5;
            lVar5 = (ulonglong)uVar25 * 0x85ebca87;
            uVar58 = (uint)lVar5;
            iVar17 = 8;
            puVar60 = (uint *)(uVar58 + 0xc2b2ae63);
            uVar33 = (uVar24 << 0x1b | uVar33 >> 5) * -0x7a143579 +
                     uVar25 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20) + -0x7a143589 +
                     (uint)(0x3d4d519c < uVar58);
            uVar24 = 0xfffffff8;
            puStack_2c = puVar43;
            uStack_28 = uVar22;
          }
          bVar64 = CARRY4(uVar24,uVar57);
          uVar57 = uVar24 + uVar57;
          puVar42 = (uint *)((int)puVar42 + iVar17);
          uVar41 = (uVar41 - 1) + (uint)bVar64;
          puVar43 = puVar60;
          uVar22 = uVar33;
        } while( true );
      }
LAB_714faa08:
      if (DAT_71174c38 != 0) {
        FUN_7160bd1c();
      }
      uVar19 = DAT_700c2d18;
      DataMemoryBarrier(0xb);
      if (((DAT_70ffd1c0 & 1) == 0) &&
         (iVar17 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_70ffd1c0), iVar17 != 0)) {
        pcVar16 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf838,0);
        if (*pcVar16 == '\0') {
          puVar34 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf828);
          *(undefined1 *)(puVar34 + 0xd) = 1;
          uVar18 = DAT_7007ea04;
          uVar21 = DAT_7007ea00;
          uVar20 = DAT_7007e9fc;
          *puVar34 = DAT_7007e9f8;
          puVar34[1] = uVar20;
          puVar34[2] = uVar21;
          puVar34[3] = uVar18;
          uVar18 = DAT_7007ea14;
          uVar21 = DAT_7007ea10;
          uVar20 = DAT_7007ea0c;
          puVar34[4] = DAT_7007ea08;
          puVar34[5] = uVar20;
          puVar34[6] = uVar21;
          puVar34[7] = uVar18;
          uVar13 = DAT_7007ea28;
          uVar18 = DAT_7007ea24;
          uVar21 = DAT_7007ea20;
          uVar20 = DAT_7007ea1c;
          puVar34[8] = DAT_7007ea18;
          puVar34[9] = uVar20;
          puVar34[10] = uVar21;
          puVar34[0xb] = uVar18;
          puVar34[0xc] = uVar13;
          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71447278,puVar34,&DAT_70b0e000);
          puVar28 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf838);
          *puVar28 = 1;
        }
        iVar17 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700bf828);
        if (*(char *)(iVar17 + 0x34) != '\0') {
          uVar22 = 0;
          uVar41 = 0;
          do {
            iVar51 = (uVar22 & 7) * 8;
            uVar57 = iVar51 - 0x20;
            bVar15 = (byte)(0xf7f5f1d5 >> iVar51) |
                     (byte)(-0x6ede64e1 << ((uVar22 & 7) * -8 + 0x20 & 0xff));
            if (-1 < (int)uVar57) {
              bVar15 = (byte)(0x91219b1f >> (uVar57 & 0xff));
            }
            *(byte *)(iVar17 + uVar22) = *(byte *)(iVar17 + uVar22) ^ bVar15;
            bVar65 = 0xfffffffe < uVar22;
            bVar64 = uVar41 == 0;
            bVar3 = (0x32 < uVar22) <= uVar41;
            uVar22 = uVar22 + 1;
            uVar41 = uVar41 + bVar65;
          } while (bVar64 && bVar3);
          *(undefined1 *)(iVar17 + 0x34) = 0;
        }
        DAT_70ffd1bc = (code *)FUN_712f1f4c(&DAT_70b2e804,iVar17,1);
        thunk_SixizuLbAnqfgRApsCY(&DAT_70ffd1c0);
      }
                    /* WARNING: Could not recover jumptable at 0x71446648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_70ffd1bc)(uVar19,0);
      return;
    }
  }
  pbVar48 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
  do {
    *pbVar48 = *pbVar48 ^ 0x50;
    pbVar48 = pbVar48 + 1;
  } while (pbVar48 != (byte *)0x3c);
  uRam00000000 = 0xe3b00036;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_714facc4:
  pbVar48 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
  do {
    *pbVar48 = *pbVar48 ^ 0x50;
    pbVar48 = pbVar48 + 1;
  } while (pbVar48 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000c;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_714fad64:
  pbVar48 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
  do {
    *pbVar48 = *pbVar48 ^ 0x50;
    pbVar48 = pbVar48 + 1;
  } while (pbVar48 != (byte *)0x3c);
  uRam00000000 = 0xe3b0000e;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
LAB_714fae04:
  pbVar48 = (byte *)0x0;
  software_interrupt(0);
  imp___aeabi_memcpy(0,&DAT_70081d78,0x3c,0x22);
  do {
    *pbVar48 = *pbVar48 ^ 0x50;
    pbVar48 = pbVar48 + 1;
  } while (pbVar48 != (byte *)0x3c);
  uRam00000000 = 0xe3b00010;
  _LAB_00000004 = 0xe3b01000;
  FUN_719344e4(0,0x3c,0);
  (*(code *)0x0)();
  coprocessor_function2(2,0xb,7,in_cr7,in_cr8,in_cr4);
  coprocessor_function2(2,0xb,2,in_cr7,in_cr8,in_cr8);
  coprocessor_function2(1,0xb,5,in_cr7,in_cr8,in_cr8);
  coprocessor_function2(1,0xb,0,in_cr7,in_cr8,in_cr8);
  coprocessor_function2(0,0xb,3,in_cr7,in_cr8,in_cr8);
  coprocessor_function2(0xf,0xb,6,in_cr6,in_cr8,in_cr8);
  coprocessor_function2(0xf,0xb,1,in_cr6,in_cr8,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_714fa010:
  uVar41 = uStack_28 ^ uVar22 >> 1;
  lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
  uVar57 = (uint)lVar5;
  uVar22 = uVar22 * 0x27d4eb4f + uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar57 = (uVar57 >> 0x1d | uVar22 * 8) ^ uVar57;
  lVar5 = (ulonglong)uVar57 * 0x9e3779f9;
  puVar42 = (uint *)((uVar22 ^ uVar22 >> 0x1d) * -0x61c88607 +
                    uVar57 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20));
  apuStack_6c[1] = (uint *)piVar49;
  if (uStack_60 != ((uint)puVar42 ^ (uint)lVar5) || apuStack_6c[2] != puVar42) goto LAB_714facc4;
  piVar14 = (int *)piStack_5c[1];
  piVar27 = piStack_5c;
  if ((int *)piStack_5c[1] == (int *)0x0) {
    do {
      piVar29 = (int *)piVar27[2];
      bVar64 = (int *)*piVar29 != piVar27;
      piVar27 = piVar29;
    } while (bVar64);
  }
  else {
    do {
      piVar29 = piVar14;
      piVar14 = (int *)*piVar29;
    } while ((int *)*piVar29 != (int *)0x0);
  }
  if (piVar29 == piVar49) goto LAB_714f9458;
  goto LAB_714f99d0;
LAB_714fa9a8:
  uVar41 = uVar41 ^ uVar22 >> 1;
  lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
  uVar57 = (uint)lVar5;
  uVar22 = uVar22 * 0x27d4eb4f + uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar57 = (uVar57 >> 0x1d | uVar22 * 8) ^ uVar57;
  lVar5 = (ulonglong)uVar57 * 0x9e3779f9;
  uVar22 = (uVar22 ^ uVar22 >> 0x1d) * -0x61c88607 +
           uVar57 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  if (piStack_5c == (int *)(uVar22 ^ (uint)lVar5) && uStack_60 == uVar22) goto LAB_714faa08;
  goto LAB_714fae04;
LAB_714fa2b8:
  uVar41 = (uint)puVar43 ^ uVar22 >> 1;
  lVar5 = (ulonglong)uVar41 * 0x27d4eb4f;
  uVar57 = (uint)lVar5;
  uVar22 = uVar22 * 0x27d4eb4f + uVar41 * -0x3d4d51c3 + (int)((ulonglong)lVar5 >> 0x20);
  uVar57 = (uVar57 >> 0x1d | uVar22 * 8) ^ uVar57;
  lVar5 = (ulonglong)uVar57 * 0x9e3779f9;
  uVar22 = (uVar22 ^ uVar22 >> 0x1d) * -0x61c88607 +
           uVar57 * 0x165667b1 + (int)((ulonglong)lVar5 >> 0x20);
  uStack_58 = 3;
  if (piStack_5c == (int *)(uVar22 ^ (uint)lVar5) && uStack_60 == uVar22) {
    uStack_58 = 3;
    goto LAB_714faa08;
  }
  goto LAB_714fad64;
}


// =========================================================================
// Function: FUN_714fc05c
// Entry: 0x714fc05c | Size: 484 bytes
// =========================================================================

void FUN_714fc05c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [20];
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
  undefined1 uStack_31;
  undefined4 *puStack_30;
  int aiStack_2c [2];
  
  uStack_38 = param_6;
  uStack_3c = param_5;
  uStack_44 = param_9;
  uStack_48 = param_8;
  uStack_4c = param_7;
  uStack_50 = param_12;
  uStack_54 = param_11;
  uStack_58 = param_10;
  uStack_90 = param_3;
  uStack_8c = param_2;
  uStack_5c = param_1;
  uStack_40 = param_4;
  if (DAT_71174860 != '\0') {
    FUN_7136cdfc(auStack_88);
    FUN_7136cdfc(auStack_7c);
    FUN_7136cdfc(auStack_70);
    FUN_7136d040(auStack_88,&uStack_40);
    FUN_7136d040(auStack_7c,&uStack_4c);
    FUN_7136d040(auStack_70,&uStack_58);
    iVar1 = *(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c);
    uStack_8c = thunk_FUN_717b1c10(uStack_8c);
    FUN_715c566c(*(undefined4 *)(iVar1 + 0x130),&uStack_90,param_1);
    FUN_71566f10(DAT_711a3938,DAT_71174c00,DAT_71174c04);
    return;
  }
  FUN_7136cdfc(auStack_88);
  FUN_7136cdfc(auStack_7c);
  FUN_7136cdfc(auStack_70);
  FUN_7136d040(auStack_88,&uStack_40);
  FUN_7136d040(auStack_7c,&uStack_4c);
  FUN_7136d040(auStack_70,&uStack_58);
  puStack_30 = &uStack_5c;
  FUN_715032d8(aiStack_2c,&DAT_71174864,puStack_30,&DAT_70081db4,&puStack_30,&uStack_31);
  *(undefined4 *)(aiStack_2c[0] + 0x14) = uStack_90;
  *(undefined4 *)(aiStack_2c[0] + 0x18) = uStack_8c;
  FUN_7136d040(aiStack_2c[0] + 0x1c,auStack_88);
  FUN_7136d040(aiStack_2c[0] + 0x28,auStack_7c);
  FUN_7136d040(aiStack_2c[0] + 0x34,auStack_70);
  return;
}


// =========================================================================
// Function: FUN_714fc8fc
// Entry: 0x714fc8fc | Size: 384 bytes
// =========================================================================

void FUN_714fc8fc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_5e4 [4];
  undefined4 auStack_5e0 [368];
  char cStack_20;
  undefined4 uStack_1c;
  
  FUN_714f2578(auStack_5e4);
  uVar1 = FUN_7153ffec();
  FUN_7153df30(param_1,uVar1,auStack_5e4);
  puVar2 = &uStack_1c;
  if (cStack_20 == '\0') {
    puVar2 = auStack_5e0;
  }
  uVar1 = *puVar2;
  iVar3 = FUN_715ec150(uVar1);
  if (iVar3 != 0) {
    imp___aeabi_memcpy4(&DAT_700c2d28,param_1,0x214);
    DAT_71174c3c = 1;
    DAT_700c2ce0 = uVar1;
    if (DAT_71174860 != '\0') {
      piVar5 = (int *)(DAT_711a3938 + 0x1389c);
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        iVar3 = FUN_713c301c(0);
        if (iVar3 == 0) {
          iVar3 = *piVar5;
          if (iVar3 == 0) {
            return;
          }
        }
        else {
          iVar3 = thunk_MwhHq(0x3a0);
          iVar4 = FUN_715ba834();
          *piVar5 = iVar4;
        }
      }
      uVar1 = FUN_71556bcc(iVar3);
      FUN_71557f40(uVar1,&DAT_700c2d28);
      FUN_71558008(uVar1);
      DAT_71174c3d = 1;
      iVar4 = thunk_FUN_715bf66c(iVar3);
      if (iVar4 == 0) {
        FUN_715601e8(iVar3,DAT_71174bd4,DAT_71174bd8,DAT_71174bdc);
      }
      else {
        FUN_715bf69c(iVar3);
      }
      uVar1 = FUN_71ba0b38(DAT_700c2d10,DAT_71174bec);
      FUN_715bebf0(iVar3,uVar1);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714fcdb4
// Entry: 0x714fcdb4 | Size: 436 bytes
// =========================================================================

void FUN_714fcdb4(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*param_1 & 1) == 0) {
    uStack_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
  }
  else {
    FUN_712f6d58(&uStack_58,param_1[2],param_1[1]);
  }
  if ((*param_2 & 1) == 0) {
    uStack_4c = *param_2;
    uStack_48 = param_2[1];
    uStack_44 = param_2[2];
  }
  else {
    FUN_712f6d58(&uStack_4c,param_2[2],param_2[1]);
  }
  uStack_2c = param_8;
  uStack_30 = param_7;
  uStack_34 = param_6;
  uStack_38 = param_5;
  uStack_40 = param_3;
  uStack_3c = param_4;
  if ((DAT_71174b40 & 1) != 0) {
    thunk_qNQrlu(DAT_71174b48);
  }
  DAT_71174b40 = uStack_58;
  uStack_58 = uStack_58 & 0xffff0000;
  DAT_71174b44 = uStack_54;
  DAT_71174b48 = uStack_50;
  if ((DAT_71174b4c & 1) == 0) {
    DAT_71174b4c = uStack_4c;
    DAT_71174b50 = uStack_48;
    DAT_71174b54 = uStack_44;
    DAT_71174b58 = uStack_40;
    DAT_71174b5c = uStack_3c;
    DAT_71174b60 = uStack_38;
    DAT_71174b64 = uStack_34;
    DAT_71174b68 = uStack_30;
    DAT_71174b6c = uStack_2c;
  }
  else {
    thunk_qNQrlu(DAT_71174b54);
    DAT_71174b4c = uStack_4c;
    uStack_4c = uStack_4c & 0xffff0000;
    DAT_71174b50 = uStack_48;
    DAT_71174b54 = uStack_44;
    DAT_71174b58 = uStack_40;
    DAT_71174b5c = uStack_3c;
    DAT_71174b60 = uStack_38;
    DAT_71174b64 = uStack_34;
    DAT_71174b68 = uStack_30;
    DAT_71174b6c = uStack_2c;
    if ((uStack_58 & 1) != 0) {
      thunk_qNQrlu(uStack_50);
    }
  }
  if (DAT_71174860 != '\0') {
    uVar1 = DAT_71174b48;
    if ((DAT_71174b40 & 1) == 0) {
      uVar1 = 0x71174b41;
    }
    uVar2 = DAT_71174b54;
    if ((DAT_71174b4c & 1) == 0) {
      uVar2 = 0x71174b4d;
    }
    FUN_715c7638(*(undefined4 *)(*(int *)(*(int *)(DAT_711f6d58 + 0xac) + 0x1f6c) + 0x130),uVar1,
                 uVar2,DAT_71174b58,DAT_71174b5c,DAT_71174b60,DAT_71174b64,DAT_71174b68,DAT_71174b6c
                );
  }
  return;
}


// =========================================================================
// Function: FUN_714fd088
// Entry: 0x714fd088 | Size: 304 bytes
// =========================================================================

void FUN_714fd088(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int unaff_r4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  DAT_71174b74 = param_2;
  DAT_71174b70 = param_1;
  DAT_71174b78 = param_3;
  if (DAT_71174860 != '\0') {
    unaff_r4 = DAT_71174c38;
  }
  if (DAT_71174860 == '\0' || unaff_r4 == 0) {
switchD_714fd0f4_default:
    return;
  }
  switch(param_1) {
  case 0:
    FUN_715fafa0(unaff_r4);
    return;
  case 1:
    FUN_71358f50(auStack_1c);
    FUN_71358f50(auStack_20,DAT_71174b78);
    FUN_715fafc4(unaff_r4,auStack_1c,auStack_20);
    return;
  case 2:
    FUN_71358f50(auStack_1c);
    FUN_71358f50(auStack_20,DAT_71174b78);
    uVar1 = 0;
    break;
  case 3:
    FUN_71358f50(auStack_1c);
    FUN_71358f50(auStack_20,DAT_71174b78);
    uVar1 = 1;
    break;
  case 0xffffffff:
    FUN_715f6508(unaff_r4);
    return;
  default:
    goto switchD_714fd0f4_default;
  }
  FUN_715fb044(unaff_r4,uVar1,auStack_1c,auStack_20);
  return;
}


// =========================================================================
// Function: FUN_714fd64c
// Entry: 0x714fd64c | Size: 340 bytes
// =========================================================================

void FUN_714fd64c(undefined2 *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar2 = *(byte *)(param_1 + 1);
  uVar3 = (uint)bVar2;
  if (*(char *)((int)param_1 + 1) != '\x01') {
    uVar3 = uVar3 + 10;
  }
  iVar1 = uVar3 * 0x24;
  *(undefined2 *)(&DAT_71174870 + iVar1) = *param_1;
  (&DAT_71174872)[iVar1] = bVar2;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (iVar1 + 0x71174874,param_1 + 2);
  puVar8 = (undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 10);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(&DAT_71174880 + iVar1) = *puVar8;
  *(undefined4 *)(&DAT_71174884 + iVar1) = uVar5;
  *(undefined4 *)(&DAT_71174888 + iVar1) = uVar6;
  *(undefined4 *)(&DAT_7117488c + iVar1) = uVar7;
  *(undefined2 *)(&DAT_71174890 + iVar1) = param_1[0x10];
  iVar1 = 0;
  if (DAT_71174860 != '\0') {
    iVar1 = DAT_71174c38;
  }
  if (DAT_71174860 != '\0' && iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 6);
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      iVar4 = (int)param_1 + 5;
    }
    if (*(char *)((int)param_1 + 1) == '\0') {
      uStack_1c = *(undefined4 *)(param_1 + 10);
      uStack_20 = *puVar8;
      FUN_7160ee64(iVar1,*(undefined1 *)(param_1 + 1),iVar4,&uStack_20,
                   *(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0xc),
                   *(char *)(param_1 + 0x10) != '\0',*(char *)((int)param_1 + 0x21) != '\0');
      return;
    }
    uStack_1c = *(undefined4 *)(param_1 + 10);
    uStack_20 = *puVar8;
    FUN_7160eab4();
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_714fd86c
// Entry: 0x714fd86c | Size: 232 bytes
// =========================================================================

void FUN_714fd86c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  DAT_71174b98 = param_1;
  iVar1 = FUN_71ba2cf0(param_1,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (DAT_71174860 != '\0') {
      iVar1 = DAT_71174c38;
    }
    if (DAT_71174860 != '\0' && iVar1 != 0) {
      iVar2 = FUN_715f8740();
      iVar1 = DAT_71174c38;
      iVar2 = *(int *)(DAT_70c39074 + iVar2 * 4);
      if (iVar2 != 0) {
        puVar6 = (undefined4 *)(iVar2 + 0x58);
        uVar3 = *puVar6;
        *(undefined4 *)(DAT_71174c38 + 0x58c) = uVar3;
        uVar4 = DAT_71174b98;
        uVar3 = FUN_71ba0b38(uVar3,DAT_71174b98);
        *puVar6 = uVar3;
        *(undefined4 *)(iVar1 + 0x590) = *(undefined4 *)(iVar2 + 0x5c);
        uVar4 = FUN_71ba0b38(uVar4);
        *(undefined4 *)(iVar2 + 0x5c) = uVar4;
        (**(code **)(**(int **)(iVar1 + 0xc) + 0xc4))();
        iVar1 = DAT_71174c38;
        *puVar6 = *(undefined4 *)(DAT_71174c38 + 0x58c);
        *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar1 + 0x590);
        piVar5 = *(int **)(iVar1 + 0xc);
        if (piVar5[0x169] == 0) {
                    /* WARNING: Could not recover jumptable at 0x714fd950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar5 + 0x11c))();
          return;
        }
        return;
      }
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714fdabc
// Entry: 0x714fdabc | Size: 804 bytes
// =========================================================================

uint FUN_714fdabc(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  uint auStack_c0 [3];
  undefined *puStack_b4;
  undefined4 uStack_b0;
  undefined *puStack_ac;
  undefined *apuStack_a8 [8];
  uint auStack_88 [5];
  undefined *apuStack_74 [7];
  undefined4 uStack_58;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar10 = 0;
  uStack_58 = 0;
  puStack_b4 = &DAT_70b13f84;
  apuStack_74[0] = &DAT_70b13f98;
  uStack_b0 = 0;
  puStack_ac = &DAT_70b13ed8;
  thunk_cIfwOMOttIIbqLlFTq_mxihGfZvtx(apuStack_74,apuStack_a8);
  uStack_2c = 0;
  uStack_28 = 0xffffffff;
  puStack_b4 = &DAT_70b13ec4;
  puStack_ac = &DAT_70b13ed8;
  apuStack_74[0] = &DAT_70b13eec;
  thunk_LVMOhvhWTokFnsALhGPuEYqCdrPqVgVQ_sSzUUQOZuPcvktnLezzhjMC(apuStack_a8);
  auStack_88[0] = 0;
  auStack_88[4] = 0x18;
  auStack_88[1] = 0;
  auStack_88[2] = 0;
  auStack_88[3] = 0;
  apuStack_a8[0] = &DAT_70b13d18;
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (auStack_88,param_1);
  FUN_714d2e60(apuStack_a8);
  auStack_c0[2] = 0;
  auStack_c0[1] = 0;
  auStack_c0[0] = 0;
  puStack_c4 = (undefined4 *)0x0;
  puStack_c8 = (undefined4 *)0x0;
  iStack_cc = 0;
  piVar3 = (int *)FUN_714fe090(auStack_c0 + 3,auStack_c0,0x2c);
  if ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x10) & 5) == 0) {
    puVar7 = (undefined4 *)0x0;
    do {
      uVar4 = thunk_MxsKFgqcjpOPaqDHtvQhJAXAMenA_TZfirNtGtgybJvGSfQtbQ_lUzfyHeourtAxe_CbcbtmoFega_mIN
                        (auStack_c0,0,10);
      iVar2 = iStack_cc;
      if (puVar7 < puStack_c4) {
        puVar9 = puVar7 + 1;
        *puVar7 = uVar4;
      }
      else {
        iVar8 = (int)puVar7 - iStack_cc;
        iVar1 = iVar8 >> 2;
        uVar10 = iVar1 + 1;
        if (0x3fffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_714f2b1c(&iStack_cc);
        }
        uVar6 = (int)puStack_c4 - iStack_cc >> 1;
        if (uVar10 < uVar6) {
          uVar10 = uVar6;
        }
        if (0x7ffffffb < (uint)((int)puStack_c4 - iStack_cc)) {
          uVar10 = 0x3fffffff;
        }
        if (uVar10 == 0) {
          iVar5 = 0;
        }
        else {
          if (0x3fffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_712f6cf0();
          }
          iVar5 = thunk_MwhHq(uVar10 << 2);
        }
        puVar9 = (undefined4 *)(iVar5 + iVar1 * 4);
        *puVar9 = uVar4;
        imp___aeabi_memcpy4(iVar5,iVar2,iVar8);
        puVar9 = puVar9 + 1;
        puStack_c4 = (undefined4 *)(iVar5 + uVar10 * 4);
        iStack_cc = iVar5;
        if (iVar2 != 0) {
          thunk_qNQrlu(iVar2);
        }
      }
      puStack_c8 = puVar9;
      piVar3 = (int *)FUN_714fe090(auStack_c0 + 3,auStack_c0,0x2c);
      puVar7 = puVar9;
    } while ((*(byte *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 0x10) & 5) == 0);
    uVar6 = (int)puVar9 - iStack_cc;
    if (param_2 < (uint)((int)uVar6 >> 2)) {
      uVar10 = *(uint *)(iStack_cc + param_2 * 4);
      uVar6 = param_2;
    }
    else {
      uVar10 = 0;
      if (iStack_cc == 0) goto LAB_714fdd58;
    }
    thunk_qNQrlu(iStack_cc,uVar6);
  }
LAB_714fdd58:
  if ((auStack_c0[0] & 1) != 0) {
    thunk_qNQrlu(auStack_c0[2]);
  }
  puStack_b4 = &DAT_70b13ec4;
  puStack_ac = &DAT_70b13ed8;
  apuStack_74[0] = &DAT_70b13eec;
  apuStack_a8[0] = &DAT_70b13d18;
  if ((auStack_88[0] & 1) != 0) {
    thunk_qNQrlu(auStack_88[2]);
  }
  thunk_TxmhllfsxxMBtzMwBNMRvNPcWTefrMsVrxFQHGvKjhMXuvKxFIQrwUEu(apuStack_a8);
  thunk_jHGHxSriLRaJMiM_ehpsnMjEKIvyrEZrJJRvtgXpM_xvDCfdtdYPfdC(auStack_c0 + 3,&DAT_70b13ef8);
  thunk_iwGczBGixmUaMAnyYEhJVTzrugfM_AWdBlbjbrNnWwIoyZpDB(apuStack_74);
  return uVar10 & 0xffff;
}


// =========================================================================
// Function: FUN_714fe090
// Entry: 0x714fe090 | Size: 272 bytes
// =========================================================================

int * FUN_714fe090(int *param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  char cStack_21;
  
  thunk_nqAEaOOy_vLgDDkdjbYGGQxxpzalvCKL_eNuLvkW_puNQiABmbYhdGzNHfwsCZvhS(&cStack_21,param_1,1);
  if (cStack_21 != '\0') {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
    else {
      **(undefined1 **)(param_2 + 8) = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    iVar4 = 0;
    do {
      piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x18);
      pbVar3 = (byte *)piVar1[3];
      if (pbVar3 == (byte *)piVar1[4]) {
        uVar2 = (**(code **)(*piVar1 + 0x28))();
        if (uVar2 == 0xffffffff) {
          uVar2 = 2;
          if (iVar4 == 0) {
            uVar2 = 6;
          }
          goto LAB_714fe17c;
        }
      }
      else {
        piVar1[3] = (int)(pbVar3 + 1);
        uVar2 = (uint)*pbVar3;
      }
      if ((uVar2 & 0xff) == param_3) {
        uVar2 = 0;
        goto LAB_714fe17c;
      }
      thunk_tRQgJYgPuWCsmMURzlorhX_ykPLGaUoZFD__DIGFmDyZkDZOClxFxkrQBwUplNwOpi_gbsLeueqrHU(param_2);
      iVar4 = iVar4 + -1;
    } while (((*param_2 & 1) == 0) || (*(int *)(param_2 + 4) != -9));
    uVar2 = 4;
LAB_714fe17c:
    iVar4 = (int)param_1 + *(int *)(*param_1 + -0xc);
    thunk_q_WxSZVUhHEiViGbhoJlFEVyRXpUd(iVar4,*(uint *)(iVar4 + 0x10) | uVar2);
  }
  return param_1;
}


// =========================================================================
// Function: FUN_714fe20c
// Entry: 0x714fe20c | Size: 528 bytes
// =========================================================================

void FUN_714fe20c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
            (&DAT_71174bb8,param_1);
  iVar1 = 0;
  if (DAT_71174860 != '\0') {
    iVar1 = DAT_71174c38;
  }
  if (DAT_71174860 != '\0' && iVar1 != 0) {
    uVar2 = FUN_714fdabc(&DAT_71174bb8,0);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,6,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,1);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,0,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,2);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,1,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,3);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,5,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,4);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,4,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,5);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,8,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,6);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,7,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,7);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,2,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
    }
    uVar2 = FUN_714fdabc(&DAT_71174bb8,8);
    if (uVar2 != 0) {
      FUN_715f45c0(DAT_71174c38,0xc,(uVar2 | 1 << (uVar2 & 0xff)) & 0xffff);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_714fe8e8
// Entry: 0x714fe8e8 | Size: 320 bytes
// =========================================================================

void FUN_714fe8e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
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
  
  if (DAT_71174860 != '\0') {
    uVar1 = *(undefined4 *)(DAT_711a3938 + 0x13898);
    uStack_2c = DAT_71174c04;
    uStack_28 = DAT_71174c08;
    uStack_30 = DAT_71174c00;
    uStack_3c = param_1;
    uStack_38 = param_2;
    uStack_34 = param_3;
    FUN_714dde9c(uVar1,&uStack_30,&uStack_3c,1000,1);
    uStack_44 = DAT_71174c14;
    uStack_40 = DAT_71174c18;
    uStack_48 = DAT_71174c10;
    uStack_50 = param_5;
    uStack_4c = param_6;
    uStack_54 = param_4;
    FUN_714e0110(uVar1,&uStack_48,&uStack_54,1000,1);
  }
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  FUN_7136d040(&DAT_71174c00,&uStack_30);
  uStack_2c = param_5;
  uStack_28 = param_6;
  uStack_30 = param_4;
  FUN_7136d040(&DAT_71174c10,&uStack_30);
  return;
}


// =========================================================================
// Function: FUN_714ff024
// Entry: 0x714ff024 | Size: 12 bytes
// =========================================================================

undefined4 FUN_714ff024(void)

{
  return DAT_71174c38;
}


// =========================================================================
// Function: dNQgHTwKzAeNbemZktDre
// Entry: 0x714ff068 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dNQgHTwKzAeNbemZktDre(undefined1 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined1 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e4cc;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_714ff0f4;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_714ff0f4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: RxQRDDBkaXHZ_ydHUeMWYTRS
// Entry: 0x714ff1e8 | Size: 204 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RxQRDDBkaXHZ_ydHUeMWYTRS(int param_1,int param_2,int param_3,int param_4)

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
    *piStack_30 = (int)&DAT_70b0e4f0;
    piStack_30[1] = param_1;
    piStack_30[2] = param_2;
    FUN_717ccb10(iVar1,aiStack_40);
    if (piStack_30 == aiStack_40) {
      iVar3 = 0x10;
    }
    else {
      piVar2 = piStack_30;
      if (piStack_30 == (int *)0x0) goto LAB_714ff290;
    }
    (**(code **)(*piVar2 + iVar3))();
  }
LAB_714ff290:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: fBIMoASRSujXINatuqCeYZiy
// Entry: 0x714ff3a0 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fBIMoASRSujXINatuqCeYZiy(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e514;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_714ff42c;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_714ff42c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: iFPcHOSsjFOkssAPPjduzjxfMTDQjeJ
// Entry: 0x714ff520 | Size: 184 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void iFPcHOSsjFOkssAPPjduzjxfMTDQjeJ(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  iVar2 = DAT_712017fc;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puVar3 = (undefined4 *)((uint)apuStack_30 | 4);
    puVar3[1] = param_2;
    puVar3[2] = param_3;
    *puVar3 = param_1;
    apuStack_30[0] = &DAT_70b0e538;
    piStack_20 = (int *)apuStack_30;
    FUN_717ccb10(iVar2,apuStack_30);
    if ((undefined **)piStack_20 == apuStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_714ff5b4;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_714ff5b4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: ZIBtFSgfVXRTZIUYtbCwwxBfh
// Entry: 0x714ff6a8 | Size: 268 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ZIBtFSgfVXRTZIUYtbCwwxBfh
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
               int param_8,int param_9,int param_10,int param_11,int param_12)

{
  int *piVar1;
  int iVar2;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iVar2 = DAT_712017fc;
  piVar1 = aiStack_40;
  iStack_28 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    piStack_30 = (int *)thunk_MwhHq(0x34);
    piStack_30[10] = param_10;
    piStack_30[0xb] = param_11;
    piStack_30[8] = param_8;
    piStack_30[9] = param_9;
    piStack_30[0xc] = param_12;
    piStack_30[3] = param_3;
    piStack_30[4] = param_4;
    *piStack_30 = (int)&DAT_70b0e55c;
    piStack_30[1] = param_1;
    piStack_30[2] = param_2;
    piStack_30[5] = param_5;
    piStack_30[6] = param_6;
    piStack_30[7] = param_7;
    FUN_717ccb10(iVar2,aiStack_40);
    if (piStack_30 == aiStack_40) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      piVar1 = piStack_30;
      if (piStack_30 == (int *)0x0) goto LAB_714ff790;
    }
    (**(code **)(*piVar1 + iVar2))();
  }
LAB_714ff790:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: RqcrDWbxVjdPdPUmOZCWlWAmUT
// Entry: 0x714ff8a0 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RqcrDWbxVjdPdPUmOZCWlWAmUT(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e580;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_714ff92c;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_714ff92c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: jwuRl_WQmLKLwsmDw_aDCYmf_DCdOGb
// Entry: 0x714ffa20 | Size: 360 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jwuRl_WQmLKLwsmDw_aDCYmf_DCdOGb(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *unaff_r8;
  undefined4 uStack_54;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_24;
  
  iStack_24 = _ext___stack_chk_guard;
  iVar8 = _ext___stack_chk_guard;
  if (param_1 != 0) {
    unaff_r8 = &DAT_712017fc;
    iVar8 = DAT_712017fc;
  }
  if (param_1 == 0 || iVar8 == 0) goto LAB_714ffb5c;
  uVar4 = imp_strlen(param_1);
  if (0xfffffff7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&iStack_4c);
  }
  if (uVar4 < 0xb) {
    iStack_4c = CONCAT31(iStack_4c._1_3_,(char)(uVar4 << 1));
    uVar7 = (uint)&iStack_4c | 1;
    if (uVar4 != 0) goto LAB_714ffab4;
  }
  else {
    uVar7 = thunk_MwhHq((uVar4 | 7) + 1);
    iStack_4c = (uVar4 | 7) + 2;
    uStack_48 = uVar4;
    uStack_44 = uVar7;
LAB_714ffab4:
    imp___aeabi_memcpy(uVar7,param_1,uVar4);
  }
  uVar3 = uStack_44;
  uVar2 = uStack_48;
  *(undefined1 *)(uVar7 + uVar4) = 0;
  iVar8 = 0x10;
  uStack_54._0_3_ = (undefined3)((uint)iStack_4c >> 8);
  uStack_54._3_1_ = (undefined1)uStack_48;
  uVar6 = *unaff_r8;
  uVar1 = (undefined1)iStack_4c;
  piStack_30 = (int *)thunk_MwhHq(0x10);
  *(undefined1 *)(piStack_30 + 1) = uVar1;
  piStack_30[3] = uVar3;
  *piStack_30 = (int)&DAT_70b0e5a4;
  *(undefined4 *)((int)piStack_30 + 5) = uStack_54;
  piStack_30[2] = uVar2;
  FUN_717ccb10(uVar6,aiStack_40);
  piVar5 = aiStack_40;
  if ((piStack_30 == aiStack_40) || (iVar8 = 0x14, piVar5 = piStack_30, piStack_30 != (int *)0x0)) {
    (**(code **)(*piVar5 + iVar8))(piVar5);
  }
LAB_714ffb5c:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: BSVna_VvhhuEdPUfdViELiDYGQ
// Entry: 0x714ffce4 | Size: 748 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BSVna_VvhhuEdPUfdViELiDYGQ
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
               int param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
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
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar3 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_50 | 1;
    if (uVar3 != 0) goto LAB_714ffd6c;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_50 = (uVar3 | 7) + 2;
    uStack_4c = uVar3;
    uStack_48 = uVar6;
LAB_714ffd6c:
    imp___aeabi_memcpy(uVar6,param_1,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  uVar3 = imp_strlen(param_2);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_60);
  }
  if (uVar3 < 0xb) {
    uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar3 << 1));
    uVar6 = (uint)&uStack_60 | 1;
    if (uVar3 != 0) goto LAB_714ffde0;
  }
  else {
    uVar6 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_60 = (uVar3 | 7) + 2;
    uStack_5c = uVar3;
    uStack_58 = uVar6;
LAB_714ffde0:
    imp___aeabi_memcpy(uVar6,param_2,uVar3);
  }
  *(undefined1 *)(uVar6 + uVar3) = 0;
  iVar5 = DAT_712017fc;
  if (DAT_712017fc == 0) {
    uVar3 = uStack_60 & 1;
    goto LAB_714fff78;
  }
  if ((uStack_50 & 1) == 0) {
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_90,uStack_48,uStack_4c);
  }
  uVar3 = uStack_60 & 1;
  if ((uStack_60 & 1) == 0) {
    uStack_84 = uStack_60;
    uStack_80 = uStack_5c;
    uStack_7c = uStack_58;
  }
  else {
    FUN_712f6d58(&uStack_84,uStack_58,uStack_5c);
  }
  iStack_64 = param_8;
  iStack_68 = param_7;
  iStack_6c = param_6;
  iStack_70 = param_5;
  iStack_78 = param_3;
  iStack_74 = param_4;
  piStack_30 = (int *)thunk_MwhHq(0x34);
  uVar2 = uStack_7c;
  uVar1 = uStack_80;
  uVar6 = uStack_84;
  uStack_84 = 0;
  piStack_30[1] = uStack_90;
  piStack_30[2] = uStack_8c;
  piStack_30[3] = uStack_88;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  piStack_30[4] = uVar6;
  piStack_30[5] = uVar1;
  piStack_30[6] = uVar2;
  *piStack_30 = (int)&DAT_70b0e5c8;
  piStack_30[7] = iStack_78;
  piStack_30[8] = iStack_74;
  piStack_30[9] = iStack_70;
  piStack_30[10] = iStack_6c;
  piStack_30[0xb] = iStack_68;
  piStack_30[0xc] = iStack_64;
  piVar4 = aiStack_40;
  FUN_717ccb10(iVar5,piVar4);
  if (piStack_30 == piVar4) {
    iVar5 = 0x10;
LAB_714fff44:
    (**(code **)(*piVar4 + iVar5))();
  }
  else {
    iVar5 = 0x14;
    piVar4 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_714fff44;
  }
  if ((uStack_84 & 1) != 0) {
    thunk_qNQrlu(uStack_7c);
  }
  if ((uStack_90 & 1) != 0) {
    thunk_qNQrlu(uStack_88);
  }
LAB_714fff78:
  if (uVar3 != 0) {
    thunk_qNQrlu(uStack_58);
  }
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: OODbKztFOmXTemMoFOXmq_r
// Entry: 0x71500244 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OODbKztFOmXTemMoFOXmq_r(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e5ec;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_715002d0;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_715002d0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: LhYEeejQaQcyciDfMJMkiGAJT
// Entry: 0x715003c4 | Size: 204 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LhYEeejQaQcyciDfMJMkiGAJT(int param_1,int param_2,int param_3,int param_4)

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
    *piStack_30 = (int)&DAT_70b0e610;
    piStack_30[1] = param_1;
    piStack_30[2] = param_2;
    FUN_717ccb10(iVar1,aiStack_40);
    if (piStack_30 == aiStack_40) {
      iVar3 = 0x10;
    }
    else {
      piVar2 = piStack_30;
      if (piStack_30 == (int *)0x0) goto LAB_7150046c;
    }
    (**(code **)(*piVar2 + iVar3))();
  }
LAB_7150046c:
  if (_ext___stack_chk_guard == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: kyaFhvxkHgZRBjrzRfSSlL_VaIw
// Entry: 0x7150057c | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kyaFhvxkHgZRBjrzRfSSlL_VaIw(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e634;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71500608;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71500608:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: MEOjuyNnejPxGPIVTZslOnS_yPi
// Entry: 0x715006fc | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MEOjuyNnejPxGPIVTZslOnS_yPi(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e658;
    uStack_2c = param_1;
    uStack_28 = param_2;
    uStack_24 = param_3;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_7150078c;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_7150078c:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: OqEhq__WdeQoNXwVFrZekBbuxfWZ
// Entry: 0x71500880 | Size: 676 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OqEhq__WdeQoNXwVFrZekBbuxfWZ(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
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
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_50);
  }
  if (uVar2 < 0xb) {
    uStack_50 = CONCAT31(uStack_50._1_3_,(char)(uVar2 << 1));
    uVar5 = (uint)&uStack_50 | 1;
    if (uVar2 != 0) goto LAB_71500904;
  }
  else {
    uVar5 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_50 = (uVar2 | 7) + 2;
    uStack_4c = uVar2;
    uStack_48 = uVar5;
LAB_71500904:
    imp___aeabi_memcpy(uVar5,param_1,uVar2);
  }
  *(undefined1 *)(uVar5 + uVar2) = 0;
  uVar2 = imp_strlen(param_2);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_60);
  }
  if (uVar2 < 0xb) {
    uStack_60 = CONCAT31(uStack_60._1_3_,(char)(uVar2 << 1));
    uVar5 = (uint)&uStack_60 | 1;
    if (uVar2 != 0) goto LAB_71500974;
  }
  else {
    uVar5 = thunk_MwhHq((uVar2 | 7) + 1);
    uStack_60 = (uVar2 | 7) + 2;
    uStack_5c = uVar2;
    uStack_58 = uVar5;
LAB_71500974:
    imp___aeabi_memcpy(uVar5,param_2,uVar2);
  }
  *(undefined1 *)(uVar5 + uVar2) = 0;
  iVar4 = DAT_712017fc;
  if (DAT_712017fc == 0) {
    uVar2 = uStack_60 & 1;
    goto LAB_71500acc;
  }
  if ((uStack_50 & 1) == 0) {
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    uStack_78 = uStack_48;
  }
  else {
    FUN_712f6d58(&uStack_80,uStack_48,uStack_4c);
  }
  uVar2 = uStack_60 & 1;
  if ((uStack_60 & 1) == 0) {
    uStack_74 = uStack_60;
    uStack_70 = uStack_5c;
    uStack_6c = uStack_58;
  }
  else {
    FUN_712f6d58(&uStack_74,uStack_58,uStack_5c);
  }
  iStack_68 = param_3;
  piStack_30 = (int *)thunk_MwhHq(0x20);
  uVar1 = uStack_6c;
  uVar5 = uStack_70;
  piStack_30[1] = uStack_80;
  piStack_30[2] = uStack_7c;
  piStack_30[3] = uStack_78;
  piStack_30[4] = uStack_74;
  piVar3 = aiStack_40;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  *piStack_30 = (int)&DAT_70b0e67c;
  piStack_30[5] = uVar5;
  piStack_30[6] = uVar1;
  piStack_30[7] = param_3;
  FUN_717ccb10(iVar4,piVar3);
  if (piStack_30 == piVar3) {
    iVar4 = 0x10;
LAB_71500a98:
    (**(code **)(*piVar3 + iVar4))();
  }
  else {
    iVar4 = 0x14;
    piVar3 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_71500a98;
  }
  if ((uStack_74 & 1) != 0) {
    thunk_qNQrlu(uStack_6c);
  }
  if ((uStack_80 & 1) != 0) {
    thunk_qNQrlu(uStack_78);
  }
LAB_71500acc:
  if (uVar2 != 0) {
    thunk_qNQrlu(uStack_58);
  }
  if ((uStack_50 & 1) != 0) {
    thunk_qNQrlu(uStack_48);
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: yaJmdezooiqnCcSZzRhMvNHszSN
// Entry: 0x71500d98 | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void yaJmdezooiqnCcSZzRhMvNHszSN(undefined4 param_1,undefined4 param_2)

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
    puStack_30 = &DAT_70b0e6a0;
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
      if (piStack_20 == (int *)0x0) goto LAB_71500e28;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71500e28:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: WitHWwpGimzb_befMXprwesMLseJ
// Entry: 0x71500f1c | Size: 412 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WitHWwpGimzb_befMXprwesMLseJ(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_48);
  }
  if (uVar3 < 0xb) {
    uStack_48 = CONCAT31(uStack_48._1_3_,(char)(uVar3 << 1));
    uVar5 = (uint)&uStack_48 | 1;
    if (uVar3 == 0) goto LAB_71500fa8;
  }
  else {
    uVar5 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_48 = (uVar3 | 7) + 2;
    uStack_44 = uVar3;
    uStack_40 = uVar5;
  }
  imp___aeabi_memcpy(uVar5,param_1,uVar3);
LAB_71500fa8:
  uVar2 = uStack_48;
  *(undefined1 *)(uVar5 + uVar3) = 0;
  iVar1 = DAT_712017fc;
  if (DAT_712017fc != 0) {
    if ((uStack_48 & 1) == 0) {
      uStack_58 = uStack_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
    }
    else {
      FUN_712f6d58(&uStack_58,uStack_40,uStack_44);
    }
    iVar6 = 0x10;
    piStack_28 = (int *)thunk_MwhHq(0x10);
    *piStack_28 = (int)&DAT_70b0e6c4;
    piStack_28[1] = uStack_58;
    piStack_28[2] = uStack_54;
    piStack_28[3] = uStack_50;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    FUN_717ccb10(iVar1,aiStack_38);
    piVar4 = aiStack_38;
    if ((piStack_28 == aiStack_38) || (iVar6 = 0x14, piVar4 = piStack_28, piStack_28 != (int *)0x0))
    {
      (**(code **)(*piVar4 + iVar6))(piVar4);
    }
    if ((uStack_58 & 1) != 0) {
      thunk_qNQrlu(uStack_50);
    }
  }
  if ((uVar2 & 1) != 0) {
    thunk_qNQrlu(uStack_40);
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: KiZlRIUJGFUMYekpMSF_HFqYWHo
// Entry: 0x71501268 | Size: 756 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void KiZlRIUJGFUMYekpMSF_HFqYWHo
               (byte param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
               int param_6,int param_7,undefined1 param_8,undefined1 param_9)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  short sStack_90;
  undefined1 uStack_8e;
  byte bStack_8c;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined2 uStack_70;
  short sStack_68;
  undefined1 uStack_66;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined2 uStack_48;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  piVar15 = (int *)((uint)&sStack_68 | 4);
  iStack_28 = _ext___stack_chk_guard;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  sStack_68 = (ushort)param_1 << 8;
  uStack_66 = param_2;
  thunk_TLUeCDiekSSzXIoKMrpDGxbhUhOecwKWVtKHyZVlDPMMdVvsalzdkegtCtYHBtVMbgUoWiuRKGDAl
            (piVar15,param_3);
  uStack_48 = CONCAT11(param_9,param_8);
  iStack_4c = param_7;
  iStack_50 = param_6;
  iStack_54 = param_5;
  iStack_58 = param_4;
  pcVar5 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fcc);
  if (*pcVar5 == '\0') {
    puVar10 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fbc);
    *puVar10 = 0xb61ff669;
    *(undefined2 *)(puVar10 + 1) = 0x14d;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71503208,puVar10,&DAT_70b0e000);
    puVar11 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fcc);
    *puVar11 = 1;
  }
  pbVar6 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fbc);
  if (pbVar6[5] != 0) {
    pbVar6[5] = 0;
    *pbVar6 = *pbVar6 ^ 7;
    pbVar6[1] = pbVar6[1] ^ 0x99;
    pbVar6[2] = pbVar6[2] ^ 0x71;
    pbVar6[3] = pbVar6[3] ^ 0xd3;
    pbVar6[4] = pbVar6[4] ^ 0x4d;
  }
  uVar7 = imp_strlen(pbVar6);
  uVar4 = uStack_60;
  bVar1 = (byte)uStack_64;
  uVar2 = uStack_64 & 1;
  uVar8 = uStack_60;
  if ((uStack_64 & 1) == 0) {
    uVar8 = (uint)((byte)uStack_64 >> 1);
  }
  if (uVar7 == uVar8) {
    if (uVar7 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_712f6b48(piVar15);
    }
    uVar8 = uStack_5c;
    if ((uStack_64 & 1) == 0) {
      uVar8 = (uint)&sStack_68 | 5;
    }
    iVar9 = imp_memcmp(uVar8,pbVar6);
    if (iVar9 == 0) goto LAB_715014d0;
  }
  uVar3 = DAT_712017fc;
  sStack_68 = CONCAT11(sStack_68._1_1_,1);
  piVar14 = (int *)((uint)&sStack_90 | 4);
  uStack_8e = uStack_66;
  sStack_90 = sStack_68;
  if (uVar2 == 0) {
    iVar9 = piVar15[1];
    iVar12 = piVar15[2];
    *piVar14 = *piVar15;
    piVar14[1] = iVar9;
    piVar14[2] = iVar12;
  }
  else {
    FUN_712f6d58(piVar14,uStack_5c,uVar4);
  }
  iStack_80 = iStack_58;
  iStack_7c = iStack_54;
  iStack_78 = iStack_50;
  iStack_74 = iStack_4c;
  uStack_70 = uStack_48;
  piStack_30 = (int *)thunk_MwhHq(0x28);
  piVar15 = aiStack_40;
  *piStack_30 = (int)&DAT_70b0e6e8;
  *(short *)(piStack_30 + 1) = sStack_90;
  *(undefined1 *)((int)piStack_30 + 6) = uStack_8e;
  iVar9 = *piVar14;
  iVar12 = piVar14[1];
  iVar13 = piVar14[2];
  *piVar14 = 0;
  piStack_30[2] = iVar9;
  piStack_30[3] = iVar12;
  piStack_30[4] = iVar13;
  piVar14[1] = 0;
  piVar14[2] = 0;
  piStack_30[5] = iStack_58;
  piStack_30[6] = iStack_54;
  piStack_30[7] = iStack_50;
  piStack_30[8] = iStack_4c;
  *(undefined2 *)(piStack_30 + 9) = uStack_48;
  FUN_717ccb10(uVar3,piVar15);
  if (piStack_30 == piVar15) {
    iVar9 = 0x10;
LAB_715014a8:
    (**(code **)(*piVar15 + iVar9))();
  }
  else {
    iVar9 = 0x14;
    piVar15 = piStack_30;
    if (piStack_30 != (int *)0x0) goto LAB_715014a8;
  }
  if ((bStack_8c & 1) != 0) {
    thunk_qNQrlu(uStack_84);
  }
  bVar1 = (byte)uStack_64;
LAB_715014d0:
  if ((bVar1 & 1) != 0) {
    thunk_qNQrlu(uStack_5c);
  }
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: uCZFBGGTJSMasIVAXaNRT_JvcHA
// Entry: 0x71501858 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uCZFBGGTJSMasIVAXaNRT_JvcHA(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e70c;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_715018e4;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_715018e4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: CSnCWngStRSkuQexJXBRMLQjoALB
// Entry: 0x715019d8 | Size: 412 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CSnCWngStRSkuQexJXBRMLQjoALB(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int aiStack_38 [4];
  int *piStack_28;
  int iStack_1c;
  
  iStack_1c = _ext___stack_chk_guard;
  uVar3 = imp_strlen(param_1);
  if (0xfffffff7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_48);
  }
  if (uVar3 < 0xb) {
    uStack_48 = CONCAT31(uStack_48._1_3_,(char)(uVar3 << 1));
    uVar5 = (uint)&uStack_48 | 1;
    if (uVar3 == 0) goto LAB_71501a64;
  }
  else {
    uVar5 = thunk_MwhHq((uVar3 | 7) + 1);
    uStack_48 = (uVar3 | 7) + 2;
    uStack_44 = uVar3;
    uStack_40 = uVar5;
  }
  imp___aeabi_memcpy(uVar5,param_1,uVar3);
LAB_71501a64:
  uVar2 = uStack_48;
  *(undefined1 *)(uVar5 + uVar3) = 0;
  iVar1 = DAT_712017fc;
  if (DAT_712017fc != 0) {
    if ((uStack_48 & 1) == 0) {
      uStack_58 = uStack_48;
      uStack_54 = uStack_44;
      uStack_50 = uStack_40;
    }
    else {
      FUN_712f6d58(&uStack_58,uStack_40,uStack_44);
    }
    iVar6 = 0x10;
    piStack_28 = (int *)thunk_MwhHq(0x10);
    *piStack_28 = (int)&DAT_70b0e730;
    piStack_28[1] = uStack_58;
    piStack_28[2] = uStack_54;
    piStack_28[3] = uStack_50;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    FUN_717ccb10(iVar1,aiStack_38);
    piVar4 = aiStack_38;
    if ((piStack_28 == aiStack_38) || (iVar6 = 0x14, piVar4 = piStack_28, piStack_28 != (int *)0x0))
    {
      (**(code **)(*piVar4 + iVar6))(piVar4);
    }
    if ((uStack_58 & 1) != 0) {
      thunk_qNQrlu(uStack_50);
    }
  }
  if ((uVar2 & 1) != 0) {
    thunk_qNQrlu(uStack_40);
  }
  if (_ext___stack_chk_guard == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: UBYLbOoyoUHpRanLNB_Bbz_Cnw
// Entry: 0x71501d24 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UBYLbOoyoUHpRanLNB_Bbz_Cnw(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e754;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71501db0;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71501db0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: hXGhtRsGrfBFCxnStQNwj
// Entry: 0x71501ea4 | Size: 216 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hXGhtRsGrfBFCxnStQNwj(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int aiStack_40 [4];
  int *piStack_30;
  int iStack_28;
  
  iVar2 = DAT_712017fc;
  piVar1 = aiStack_40;
  iStack_28 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    piStack_30 = (int *)thunk_MwhHq(0x1c);
    piStack_30[6] = param_6;
    *piStack_30 = (int)&DAT_70b0e778;
    piStack_30[1] = param_1;
    piStack_30[2] = param_2;
    piStack_30[3] = param_3;
    piStack_30[4] = param_4;
    piStack_30[5] = param_5;
    FUN_717ccb10(iVar2,aiStack_40);
    if (piStack_30 == aiStack_40) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      piVar1 = piStack_30;
      if (piStack_30 == (int *)0x0) goto LAB_71501f58;
    }
    (**(code **)(*piVar1 + iVar2))();
  }
LAB_71501f58:
  if (_ext___stack_chk_guard == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: YAyIGPepqcdkmedmjvfjvTWn
// Entry: 0x71502068 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void YAyIGPepqcdkmedmjvfjvTWn(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e79c;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_715020f4;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_715020f4:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: TyokJIxVYuAfTcCidmTtfl
// Entry: 0x715021e8 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TyokJIxVYuAfTcCidmTtfl(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e7c0;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71502274;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71502274:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: CUBGpuyEamzZnITXLqu
// Entry: 0x71502368 | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CUBGpuyEamzZnITXLqu(undefined4 param_1,undefined4 param_2)

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
    puStack_30 = &DAT_70b0e7e4;
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
      if (piStack_20 == (int *)0x0) goto LAB_715023f8;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_715023f8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: UHJjfYCsVVrToyfbrTBmJVtbfMzJRQM
// Entry: 0x715024ec | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UHJjfYCsVVrToyfbrTBmJVtbfMzJRQM(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e808;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71502578;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71502578:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: bkegQH_qZAhQAuAyDzYIXwJUcEcCeezF
// Entry: 0x7150266c | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bkegQH_qZAhQAuAyDzYIXwJUcEcCeezF(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e82c;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_715026f8;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_715026f8:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: pxaVgvWUTwLmyecmxHYtKojaaWQiU
// Entry: 0x715027ec | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pxaVgvWUTwLmyecmxHYtKojaaWQiU(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e850;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71502878;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71502878:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: kkCPBjBjQfgq_OTUgADfZUoxqEqlFTNyktLe
// Entry: 0x7150296c | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kkCPBjBjQfgq_OTUgADfZUoxqEqlFTNyktLe(undefined4 param_1,undefined4 param_2)

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
    puStack_30 = &DAT_70b0e874;
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
      if (piStack_20 == (int *)0x0) goto LAB_715029fc;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_715029fc:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: XHZFCgYyVrAgYjnnjqMKEeDUAoNltExa_Mn
// Entry: 0x71502af0 | Size: 180 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XHZFCgYyVrAgYjnnjqMKEeDUAoNltExa_Mn(undefined4 param_1,undefined4 param_2)

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
    puStack_30 = &DAT_70b0e898;
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
      if (piStack_20 == (int *)0x0) goto LAB_71502b80;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71502b80:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: muUxebDRsogdMuwtuBkWfrZIxQF
// Entry: 0x71502c74 | Size: 176 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void muUxebDRsogdMuwtuBkWfrZIxQF(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int *piStack_20;
  int iStack_14;
  
  ppuVar1 = &puStack_30;
  iStack_14 = _ext___stack_chk_guard;
  if (DAT_712017fc != 0) {
    puStack_30 = &DAT_70b0e8bc;
    uStack_2c = param_1;
    piStack_20 = (int *)&puStack_30;
    FUN_717ccb10(DAT_712017fc,&puStack_30);
    if ((undefined **)piStack_20 == &puStack_30) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x14;
      ppuVar1 = (undefined **)piStack_20;
      if (piStack_20 == (int *)0x0) goto LAB_71502d00;
    }
    (**(code **)((int)*ppuVar1 + iVar2))();
  }
LAB_71502d00:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: gs_jyScMKaKENjXprSTnZdxQOYiB
// Entry: 0x71502df4 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gs_jyScMKaKENjXprSTnZdxQOYiB(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0e8e0;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71502e70;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71502e70:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: wcVlPPHAqCCuCuFfNi_pIQoR_diRcQ
// Entry: 0x71502f64 | Size: 160 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wcVlPPHAqCCuCuFfNi_pIQoR_diRcQ(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *apuStack_30 [4];
  int *piStack_20;
  int iStack_14;
  
  piStack_20 = (int *)apuStack_30;
  ppuVar1 = apuStack_30;
  iStack_14 = _ext___stack_chk_guard;
  apuStack_30[0] = &DAT_70b0e904;
  FUN_717ccb10(DAT_712017fc,apuStack_30);
  if ((undefined **)piStack_20 == apuStack_30) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0x14;
    ppuVar1 = (undefined **)piStack_20;
    if (piStack_20 == (int *)0x0) goto LAB_71502fe0;
  }
  (**(code **)((int)*ppuVar1 + iVar2))();
LAB_71502fe0:
  if (_ext___stack_chk_guard == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail();
}


// =========================================================================
// Function: FUN_7150317c
// Entry: 0x7150317c | Size: 60 bytes
// =========================================================================

int FUN_7150317c(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    thunk_qNQrlu();
  }
  return param_1;
}


// =========================================================================
// Function: FUN_715032d8
// Entry: 0x715032d8 | Size: 252 bytes
// =========================================================================

void FUN_715032d8(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,
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
        if ((int *)*piVar3 == (int *)0x0) goto LAB_7150333c;
      }
      if (*param_3 <= piVar3[4]) {
        uVar2 = 0;
        goto LAB_715033c8;
      }
      piVar1 = (int *)piVar3[1];
    } while ((int *)piVar3[1] != (int *)0x0);
    piVar5 = piVar3 + 1;
  }
LAB_7150333c:
  piVar3 = (int *)thunk_MwhHq(0x40);
  piVar3[4] = *(int *)*param_5;
  imp___aeabi_memclr4(piVar3 + 5,0x2c);
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
LAB_715033c8:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = piVar3;
  return;
}


// =========================================================================
// Function: FUN_715035a4
// Entry: 0x715035a4 | Size: 4 bytes
// =========================================================================

void FUN_715035a4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715035c0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7150376c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715038f8
// Entry: 0x715038f8 | Size: 4 bytes
// =========================================================================

void FUN_715038f8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71503914 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71503a9c
// Entry: 0x71503a9c | Size: 4 bytes
// =========================================================================

void FUN_71503a9c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71503ab8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71503cc8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71503e80
// Entry: 0x71503e80 | Size: 4 bytes
// =========================================================================

void FUN_71503e80(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71503e9c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_7150420c
// Entry: 0x7150420c | Size: 48 bytes
// =========================================================================

void FUN_7150420c(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71504a08
// Entry: 0x71504a08 | Size: 64 bytes
// =========================================================================

void FUN_71504a08(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71504d38
// Entry: 0x71504d38 | Size: 4 bytes
// =========================================================================

void FUN_71504d38(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71504d54 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71505004 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71505214
// Entry: 0x71505214 | Size: 4 bytes
// =========================================================================

void FUN_71505214(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71505230 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715053e4
// Entry: 0x715053e4 | Size: 4 bytes
// =========================================================================

void FUN_715053e4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71505400 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715058d0
// Entry: 0x715058d0 | Size: 64 bytes
// =========================================================================

void FUN_715058d0(int param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x18));
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71505c84
// Entry: 0x71505c84 | Size: 4 bytes
// =========================================================================

void FUN_71505c84(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71505ca0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71506010
// Entry: 0x71506010 | Size: 48 bytes
// =========================================================================

void FUN_71506010(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_715064c0
// Entry: 0x715064c0 | Size: 48 bytes
// =========================================================================

void FUN_715064c0(int param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0x10));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71506688
// Entry: 0x71506688 | Size: 4 bytes
// =========================================================================

void FUN_71506688(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715066a4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71506ab4
// Entry: 0x71506ab4 | Size: 48 bytes
// =========================================================================

void FUN_71506ab4(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    thunk_qNQrlu(*(undefined4 *)(param_1 + 0xc));
  }
  thunk_qNQrlu(param_1);
  return;
}


// =========================================================================
// Function: FUN_71506ec4
// Entry: 0x71506ec4 | Size: 4 bytes
// =========================================================================

void FUN_71506ec4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71506ee0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715071c8 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_7150736c
// Entry: 0x7150736c | Size: 4 bytes
// =========================================================================

void FUN_7150736c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507388 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_7150756c
// Entry: 0x7150756c | Size: 4 bytes
// =========================================================================

void FUN_7150756c(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507588 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71507768
// Entry: 0x71507768 | Size: 4 bytes
// =========================================================================

void FUN_71507768(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507784 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71507904
// Entry: 0x71507904 | Size: 4 bytes
// =========================================================================

void FUN_71507904(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507920 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71507aa0
// Entry: 0x71507aa0 | Size: 4 bytes
// =========================================================================

void FUN_71507aa0(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507abc | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71507d64
// Entry: 0x71507d64 | Size: 4 bytes
// =========================================================================

void FUN_71507d64(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507d80 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71507fa0
// Entry: 0x71507fa0 | Size: 4 bytes
// =========================================================================

void FUN_71507fa0(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71507fbc | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71508340
// Entry: 0x71508340 | Size: 4 bytes
// =========================================================================

void FUN_71508340(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7150835c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71508680
// Entry: 0x71508680 | Size: 4 bytes
// =========================================================================

void FUN_71508680(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x7150869c | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_715088a8
// Entry: 0x715088a8 | Size: 4 bytes
// =========================================================================

void FUN_715088a8(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x715088c4 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71508bc4
// Entry: 0x71508bc4 | Size: 4 bytes
// =========================================================================

void FUN_71508bc4(void)

{
  return;
}


// =========================================================================
// Function: thunk_qNQrlu
// Entry: 0x71508be0 | Size: 4 bytes
// =========================================================================

void thunk_qNQrlu(void)

{
  thunk_qNQrlu();
  return;
}


// =========================================================================
// Function: FUN_71508cb0
// Entry: 0x71508cb0 | Size: 16 bytes
// =========================================================================

undefined1 FUN_71508cb0(void)

{
  return DAT_71174c6a;
}


// =========================================================================
// Function: FUN_71508cf8
// Entry: 0x71508cf8 | Size: 1808 bytes
// =========================================================================

void FUN_71508cf8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (DAT_711f6d58 == 0) {
    return;
  }
  FUN_71509e04();
  if (DAT_71174c60 == 0) {
    iVar2 = 0;
    goto LAB_71508e7c;
  }
  FUN_7136cdfc();
  if (DAT_71174c60 == 3) {
    iVar2 = *(int *)(DAT_711f6d58 + 0x20);
    if (((iVar2 != 0) && (DAT_71174c68 >> 3 < 0x7d)) &&
       (*(char *)(iVar2 + (uint)DAT_71174c68) != '\0')) {
      iVar2 = *(int *)(iVar2 + (uint)DAT_71174c68 * 4 + 1000);
      goto LAB_71508e2c;
    }
  }
  else if (DAT_71174c60 == 2) {
    iVar2 = *(int *)(DAT_711f6d58 + 4);
    if (((iVar2 != 0) && (uVar10 = (uint)DAT_71174c68, uVar10 < 0x7d1)) &&
       (*(char *)(iVar2 + uVar10 + 0x3e88) != '\0')) {
      iVar2 = *(int *)(iVar2 + uVar10 * 4);
      goto LAB_71508e2c;
    }
  }
  else if (((DAT_71174c60 == 1) && (iVar2 = *(int *)(DAT_711f6d58 + 0xac), iVar2 != 0)) &&
          ((DAT_71174c68 >> 2 < 0xfb && (*(char *)(iVar2 + (uint)DAT_71174c68 + 0x3eec) != '\0'))))
  {
    iVar2 = *(int *)(*(int *)(iVar2 + (uint)DAT_71174c68 * 4 + 0x1f8c) + 0x10);
LAB_71508e2c:
    if (iVar2 != 0) {
      thunk_FUN_715600f0(iVar2,&uStack_6c);
      FUN_7135950c(auStack_3c,&uStack_2c,0,0,0,0);
    }
  }
  iVar3 = FUN_71ba2d50(uStack_24,0x3f800000);
  iVar1 = DAT_712017f8;
  iVar2 = DAT_71174c60;
  if (iVar3 != 0) {
    DataMemoryBarrier(0xb);
    if (((DAT_71174c78 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c78), iVar2 != 0))
    {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fec);
      if (*pcVar6 == '\0') {
        puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fdc);
        *puVar8 = 0x41e5153;
        puVar8[1] = 0xe3c67318;
        puVar8[2] = 0x1c0d5857;
        *(undefined1 *)((int)puVar8 + 0xf) = 1;
        *(undefined4 *)((int)puVar8 + 0xb) = 0x8f751e1c;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7150aba4,puVar8,&DAT_70b0e000);
        puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fec);
        *puVar9 = 1;
      }
      pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2fdc);
      if (pbVar7[0xf] != 0) {
        *pbVar7 = *pbVar7 ^ 0x23;
        pbVar7[1] = pbVar7[1] ^ 0x3d;
        pbVar7[2] = pbVar7[2] ^ 0x7f;
        pbVar7[3] = pbVar7[3] ^ 0x7d;
        pbVar7[0xf] = 0;
        pbVar7[4] = pbVar7[4] ^ 0x7d;
        pbVar7[5] = pbVar7[5] ^ 1;
        pbVar7[6] = pbVar7[6] ^ 0x8f;
        pbVar7[7] = pbVar7[7] ^ 0x8d;
        pbVar7[8] = pbVar7[8] ^ 0x23;
        pbVar7[9] = pbVar7[9] ^ 0x3d;
        pbVar7[10] = pbVar7[10] ^ 0x7f;
        pbVar7[0xb] = pbVar7[0xb] ^ 0x7d;
        pbVar7[0xc] = pbVar7[0xc] ^ 0x7d;
        pbVar7[0xd] = pbVar7[0xd] ^ 1;
        pbVar7[0xe] = pbVar7[0xe] ^ 0x8f;
      }
      DAT_71174c74 = FUN_71885ba4(pbVar7,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_71174c78);
    }
    uVar11 = DAT_71174c74;
    imp___aeabi_memclr4(&iStack_68,0x30);
    uStack_6c = uVar11;
    uVar11 = FUN_713a0424(&uStack_6c,DAT_71174c60);
    uVar11 = FUN_713a0424(uVar11,DAT_71174c68);
    uVar5 = FUN_71ba17bc(uStack_2c);
    uVar11 = FUN_713a0424(uVar11,uVar5);
    uVar5 = FUN_71ba17bc(uStack_28);
    uVar11 = FUN_713a0424(uVar11,uVar5);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar4 = (int *)thunk_MwhHq(0x3c);
    *piVar4 = 0;
    piVar4[1] = 0;
    FUN_713a10f8(piVar4 + 2,uVar11);
    piVar4[1] = iVar1 + 0x38;
    iVar2 = *(int *)(iVar1 + 0x38);
    *piVar4 = iVar2;
    *(int **)(iVar2 + 4) = piVar4;
    *(int **)(iVar1 + 0x38) = piVar4;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
    if (iStack_50 != 0) {
      iStack_4c = iStack_50;
      thunk_qNQrlu();
    }
    if (iStack_5c != 0) {
      iStack_58 = iStack_5c;
      thunk_qNQrlu();
    }
    if (iStack_68 != 0) {
      iStack_64 = iStack_68;
      thunk_qNQrlu();
    }
    DAT_71174c64 = DAT_71174c60;
    return;
  }
LAB_71508e7c:
  iVar1 = DAT_712017f8;
  if (iVar2 != DAT_71174c64) {
    DataMemoryBarrier(0xb);
    if (((DAT_71174c80 & 1) == 0) && (iVar2 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c80), iVar2 != 0))
    {
      pcVar6 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c300c);
      if (*pcVar6 == '\0') {
        puVar8 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2ffc);
        *puVar8 = 0xa0be83f3;
        puVar8[1] = 0xeb6497b8;
        puVar8[2] = 0xb8ad8af7;
        *(undefined1 *)((int)puVar8 + 0xf) = 1;
        *(undefined4 *)((int)puVar8 + 0xb) = 0x2d91beb8;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7150abd4,puVar8,&DAT_70b0e000);
        puVar9 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c300c);
        *puVar9 = 1;
      }
      pbVar7 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c2ffc);
      if (pbVar7[0xf] != 0) {
        *pbVar7 = *pbVar7 ^ 0x83;
        pbVar7[1] = pbVar7[1] ^ 0xef;
        pbVar7[2] = pbVar7[2] ^ 0xdf;
        pbVar7[3] = pbVar7[3] ^ 0xd9;
        pbVar7[0xf] = 0;
        pbVar7[4] = pbVar7[4] ^ 0xdd;
        pbVar7[5] = pbVar7[5] ^ 0xe5;
        pbVar7[6] = pbVar7[6] ^ 0x2d;
        pbVar7[7] = pbVar7[7] ^ 0x85;
        pbVar7[8] = pbVar7[8] ^ 0x83;
        pbVar7[9] = pbVar7[9] ^ 0xef;
        pbVar7[10] = pbVar7[10] ^ 0xdf;
        pbVar7[0xb] = pbVar7[0xb] ^ 0xd9;
        pbVar7[0xc] = pbVar7[0xc] ^ 0xdd;
        pbVar7[0xd] = pbVar7[0xd] ^ 0xe5;
        pbVar7[0xe] = pbVar7[0xe] ^ 0x2d;
      }
      DAT_71174c7c = FUN_71885ba4(pbVar7,0);
      thunk_SixizuLbAnqfgRApsCY(&DAT_71174c80);
    }
    uVar11 = DAT_71174c7c;
    imp___aeabi_memclr4(&iStack_68,0x30);
    uStack_6c = uVar11;
    uVar11 = FUN_713a0424(&uStack_6c,0);
    uVar11 = FUN_713a0424(uVar11,0);
    uVar11 = FUN_713a0424(uVar11,0);
    uVar11 = FUN_713a0424(uVar11,0);
    thunk_cfqspBX_JrdDvACwYrAyrngjQ(iVar1 + 0x34);
    piVar4 = (int *)thunk_MwhHq(0x3c);
    *piVar4 = 0;
    piVar4[1] = 0;
    FUN_713a10f8(piVar4 + 2,uVar11);
    piVar4[1] = iVar1 + 0x38;
    iVar2 = *(int *)(iVar1 + 0x38);
    *piVar4 = iVar2;
    *(int **)(iVar2 + 4) = piVar4;
    *(int **)(iVar1 + 0x38) = piVar4;
    *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
    thunk_QgduklVhdVlmSiqzGQeutncbrNj(iVar1 + 0x34);
    if (iStack_50 != 0) {
      iStack_4c = iStack_50;
      thunk_qNQrlu();
    }
    if (iStack_5c != 0) {
      iStack_58 = iStack_5c;
      thunk_qNQrlu();
    }
    iVar2 = DAT_71174c60;
    if (iStack_68 != 0) {
      iStack_64 = iStack_68;
      thunk_qNQrlu();
      iVar2 = DAT_71174c60;
    }
  }
  DAT_71174c64 = iVar2;
  return;
}


// =========================================================================
// Function: FUN_71509e04
// Entry: 0x71509e04 | Size: 1392 bytes
// =========================================================================

void FUN_71509e04(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c4 [28];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [72];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [2];
  
  DataMemoryBarrier(0xb);
  if (((DAT_71174c70 & 1) == 0) && (iVar1 = thunk_cuKsjVZRyspaVsDnqLy(&DAT_71174c70), iVar1 != 0)) {
    DAT_71174c6c = FUN_71886108();
    thunk_SixizuLbAnqfgRApsCY(&DAT_71174c70);
  }
  iVar1 = FUN_71886108();
  if ((uint)(iVar1 - DAT_71174c6c) < 0x65) {
    return;
  }
  iVar1 = FUN_713f4768(0xaf,1);
  if (iVar1 == 0) {
    DAT_71174c60 = 0;
    DAT_71174c6a = 0;
    return;
  }
  DAT_71174c6c = FUN_71886108();
  auStack_2c[0] = 0;
  uStack_30 = 0;
  FUN_714b5e7c(0,&uStack_30,auStack_2c,0);
  iVar1 = FUN_7151dc0c();
  if (iVar1 == 0) {
    DAT_71174c60 = 0;
    return;
  }
  iVar2 = FUN_714e87e0();
  uVar4 = uStack_30;
  uVar8 = 0x41200000;
  if (iVar2 != 0) {
    uVar8 = 0x42c80000;
  }
  uStack_34 = uVar8;
  uStack_38 = FUN_71ba1b94(auStack_2c[0]);
  uStack_3c = FUN_71ba1b94(uVar4);
  FUN_7134258c(auStack_84,*(int *)(DAT_70ffc978 + 4) + 0x20);
  FUN_71340ed4();
  uVar4 = uStack_38;
  uVar10 = FUN_71ba1638(uStack_34);
  uVar10 = FUN_71ba0f98(0,0x3ff00000,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar7 = *(undefined4 *)(DAT_70ffc974 + 4);
  uVar11 = FUN_71ba1b10(*(undefined4 *)(DAT_70ffc974 + 8));
  FUN_71ba1ea0((int)uVar10,uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar3 = FUN_71ba242c();
  uStack_38 = FUN_71ba13e0(uVar4,uVar3);
  uVar11 = FUN_71ba1b10(uVar7);
  FUN_71ba1ea0((int)uVar10,uVar5,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar4 = FUN_71ba242c();
  uStack_3c = FUN_71ba13e0(uStack_3c,uVar4);
  FUN_71340b14(&uStack_90,auStack_84,&uStack_3c);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uStack_94 = *(undefined4 *)(iVar1 + 0x14);
  uStack_9c = uVar3;
  uStack_98 = uVar4;
  uStack_a0 = FUN_71ba240c(uStack_88);
  uStack_a4 = FUN_71ba240c(uStack_8c,uVar4);
  uStack_a8 = FUN_71ba240c(uStack_90,uVar3);
  FUN_7136ce28(&uStack_a8);
  uVar4 = uStack_a4;
  uVar5 = FUN_71ba21e8(uVar8,uStack_a0);
  uVar3 = uStack_98;
  uStack_cc = FUN_71ba0b38(uVar5,uStack_94);
  uVar4 = FUN_71ba21e8(uVar8,uVar4);
  uStack_d0 = FUN_71ba0b38(uVar4,uVar3);
  uVar4 = FUN_71ba21e8(uVar8,uStack_a8);
  uStack_d4 = FUN_71ba0b38(uVar4,uStack_9c);
  FUN_7136d040(&uStack_90,&uStack_d4);
  FUN_7136cdfc(&uStack_d4);
  FUN_7136cdfc(auStack_c4);
  FUN_713e834c(&uStack_9c,&uStack_90,&uStack_d4,&iStack_d8,1,1,1,1,0,0,0,0);
  if (iStack_d8 == 0) goto LAB_7150a29c;
  if ((*(byte *)(iStack_d8 + 0x3a) & 6) == 2) {
    DAT_711ad144 = iStack_d8;
  }
  if (DAT_711f6d58 == 0) {
LAB_7150a274:
    iVar1 = FUN_714e87e0();
    if (iVar1 == 0) {
LAB_7150a29c:
      FUN_7133fdcc(auStack_84);
      DAT_71174c60 = 0;
      return;
    }
    uVar6 = (uint)*(ushort *)(iStack_d8 + 0x26);
  }
  else {
    iVar1 = *(int *)(DAT_711f6d58 + 0xac);
    if ((((iVar1 == 0) || ((*(byte *)(iStack_d8 + 0x3a) & 7) != 3)) ||
        (uVar6 = FUN_71796d54(iVar1), 0xfa < uVar6 >> 2)) ||
       ((*(char *)(iVar1 + uVar6 + 0x3eec) == '\0' ||
        (iVar1 = *(int *)(*(int *)(iVar1 + uVar6 * 4 + 0x1f8c) + 0x10), iVar1 == 0)))) {
      iVar1 = *(int *)(DAT_711f6d58 + 4);
      if ((iVar1 == 0) ||
         (((*(byte *)(iStack_d8 + 0x3a) & 7) != 2 || (uVar6 = FUN_717b92b8(iVar1), 2000 < uVar6))))
      {
LAB_7150a224:
        iVar1 = *(int *)(DAT_711f6d58 + 0x20);
        if (((iVar1 != 0) && ((*(byte *)(iStack_d8 + 0x3a) & 7) == 3)) &&
           (uVar6 = FUN_7173c750(iVar1), uVar6 >> 3 < 0x7d)) {
          bVar9 = *(char *)(iVar1 + uVar6) != '\0';
          if (bVar9) {
            iVar1 = *(int *)(iVar1 + uVar6 * 4 + 1000);
          }
          if (bVar9 && iVar1 != 0) {
            iVar2 = FUN_714e87e0();
            if (iVar2 == 0) {
              DAT_71174c60 = 3;
              DAT_71174c68 = (undefined2)uVar6;
              goto LAB_7150a338;
            }
            goto LAB_7150a2e8;
          }
        }
        goto LAB_7150a274;
      }
      bVar9 = *(char *)(iVar1 + uVar6 + 0x3e88) != '\0';
      if (bVar9) {
        iVar1 = *(int *)(iVar1 + uVar6 * 4);
      }
      if (!bVar9 || iVar1 == 0) goto LAB_7150a224;
      iVar2 = FUN_714e87e0();
      if (iVar2 == 0) {
        DAT_71174c60 = 2;
        DAT_71174c68 = (undefined2)uVar6;
        goto LAB_7150a338;
      }
      uVar6 = FUN_715f8740(iVar1);
      uVar6 = uVar6 & 0xffff;
    }
    else {
      iVar2 = FUN_714e87e0();
      if (iVar2 == 0) {
        DAT_71174c68 = (undefined2)uVar6;
        DAT_71174c60 = 1;
LAB_7150a338:
        DAT_71174c6a = 1;
        goto LAB_7150a28c;
      }
LAB_7150a2e8:
      uVar6 = thunk_FUN_715609b0(iVar1);
    }
  }
  FUN_714e8b10(uVar6);
LAB_7150a28c:
  FUN_7133fdcc(auStack_84);
  return;
}


// =========================================================================
// Function: FUN_7150ad68
// Entry: 0x7150ad68 | Size: 804 bytes
// =========================================================================

void FUN_7150ad68(int *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_r7;
  int *piVar8;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (3 < param_4) {
    return;
  }
  iVar1 = FUN_7150ce2c(param_3);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x8c);
    unaff_r7 = iVar1;
  }
  if (iVar1 != 0 && iVar2 != 0) {
    FUN_7150b3a8(param_1,param_2,param_3);
    FUN_7136cdfc(&uStack_30);
    iVar2 = FUN_7150d008(*(undefined4 *)(unaff_r7 + 0x8c),param_1[6],&uStack_30);
    if (iVar2 != 0) {
      if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
        uStack_28 = FUN_71ba0b38(*(undefined4 *)param_1[8],uStack_28);
      }
      iVar2 = param_1[7];
      if (param_1[7] == 0) {
        iVar2 = *param_1;
      }
      if (param_6 < 1) {
        iVar2 = *param_1;
      }
      uStack_3c = uStack_30;
      uStack_38 = uStack_2c;
      uStack_34 = uStack_28;
      iVar2 = FUN_7144d354(DAT_70ffd280,*(undefined4 *)(iVar2 + param_4 * 4),&uStack_3c,0,1);
      if (iVar2 != 0) {
        FUN_7144e57c(iVar2);
      }
      FUN_7136cdfc(auStack_68);
      FUN_7136cdfc();
      FUN_7136cdfc();
      uVar6 = *(undefined4 *)(param_1[1] + param_4 * 4);
      iVar1 = FUN_715ec2b0(uVar6);
      puVar3 = (undefined4 *)param_1[6];
      if (iVar1 == 0) {
        uVar6 = 0x16d;
      }
      uStack_6c = 0x18;
      uStack_7c = *puVar3;
      uStack_78 = puVar3[1];
      uStack_74 = puVar3[2];
      uStack_70 = uVar6;
      FUN_7136d040(auStack_68,&uStack_7c);
      iVar1 = param_1[6];
      uStack_7c = *(undefined4 *)(iVar1 + 0xc);
      uStack_78 = *(undefined4 *)(iVar1 + 0x10);
      uStack_74 = *(undefined4 *)(iVar1 + 0x14);
      FUN_7136d040(auStack_5c,&uStack_7c);
      uStack_78 = 0x3f800000;
      uStack_74 = 0x3f800000;
      uStack_7c = 0x3f800000;
      FUN_7136d040(auStack_50,&uStack_7c);
      uStack_40 = 0;
      uStack_44 = 0;
      FUN_715c566c(unaff_r7,&uStack_70,param_1[5]);
      FUN_715c7638(unaff_r7,DAT_71174c84,DAT_71174c88,0x40833333,1,0,0,0,0);
      iVar1 = *DAT_70b4204c;
      piVar4 = (int *)param_2[1];
      piVar7 = param_2 + 1;
      while (piVar8 = piVar7, piVar4 != (int *)0x0) {
        while (piVar5 = piVar4, *(ushort *)(piVar5 + 4) <= param_3) {
          if (param_3 <= *(ushort *)(piVar5 + 4)) goto LAB_7150b058;
          piVar4 = (int *)piVar5[1];
          if ((int *)piVar5[1] == (int *)0x0) {
            piVar7 = piVar5 + 1;
            piVar8 = piVar5;
            goto LAB_7150aff0;
          }
        }
        piVar7 = piVar5;
        piVar4 = (int *)*piVar5;
      }
LAB_7150aff0:
      piVar5 = (int *)thunk_MwhHq(0x28);
      *(short *)(piVar5 + 4) = (short)param_3;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[8] = 0;
      piVar5[9] = 0;
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = (int)piVar8;
      *piVar7 = (int)piVar5;
      piVar4 = piVar5;
      if (*(int *)*param_2 != 0) {
        *param_2 = *(int *)*param_2;
        piVar4 = (int *)*piVar7;
      }
      FUN_712f807c(param_2[1],piVar4);
      param_2[2] = param_2[2] + 1;
LAB_7150b058:
      piVar5[7] = iVar1;
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined2 *)((int)piVar5 + 0x15) = (undefined2)uStack_7c;
      *(undefined1 *)((int)piVar5 + 0x17) = uStack_7c._2_1_;
      piVar5[6] = iVar2;
      piVar5[8] = param_5;
      piVar5[9] = param_4;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7150b31c
// Entry: 0x7150b31c | Size: 24 bytes
// =========================================================================

void FUN_7150b31c(undefined4 param_1)

{
  FUN_7150b3a8(&DAT_70b0e938,&DAT_71174cdc,param_1);
  return;
}


// =========================================================================
// Function: FUN_7150b3a8
// Entry: 0x7150b3a8 | Size: 216 bytes
// =========================================================================

void FUN_7150b3a8(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar2 = param_2 + 1;
  puVar4 = (undefined4 *)*puVar2;
  puVar3 = puVar2;
  if (puVar4 != (undefined4 *)0x0) {
    do {
      puVar1 = puVar4;
      if (*(ushort *)(puVar4 + 4) < param_3) {
        puVar4 = puVar4 + 1;
        puVar1 = puVar3;
      }
      puVar4 = (undefined4 *)*puVar4;
      puVar3 = puVar1;
    } while (puVar4 != (undefined4 *)0x0);
    if ((puVar1 != puVar2) && (*(ushort *)(puVar1 + 4) <= param_3)) {
      FUN_7150d1c8(param_1,param_3,puVar1 + 5);
      puVar4 = (undefined4 *)puVar1[1];
      if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
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
      if ((undefined4 *)*param_2 == puVar1) {
        *param_2 = puVar2;
      }
      param_2[2] = param_2[2] + -1;
      FUN_71368054(param_2[1],puVar1);
      thunk_qNQrlu(puVar1);
      return;
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7150b4ec
// Entry: 0x7150b4ec | Size: 1584 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7150b4ec(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  undefined4 *puVar19;
  int *piVar20;
  uint uVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar22 = DAT_71174cdc;
  if ((DAT_71174ce4 != 0) && (DAT_71174cdc != &DAT_71174ce0)) {
    puVar13 = &uStack_38;
    iVar4 = *DAT_70b4204c;
    uVar5 = FUN_71ba1e0c();
    FUN_71ba21e8(uVar5,0x3d3851ec);
    uVar5 = imp_sinf();
    uVar5 = FUN_71ba21e8(uVar5,0x3e0f5c29);
    uVar6 = FUN_71ba0b38(uVar5,0x3f5c28f6);
    uVar5 = DAT_70ffd280;
    iVar3 = DAT_70ffcec0;
    piVar2 = DAT_70ffceb8;
    do {
      uVar17 = (uint)*(ushort *)(puVar22 + 4);
      puVar7 = (undefined4 *)FUN_7150ce2c(uVar17);
      iVar8 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        iVar8 = puVar7[0x23];
        puVar13 = puVar7;
      }
      if (puVar7 != (undefined4 *)0x0 && iVar8 != 0) {
        iVar8 = puVar22[7];
        if (puVar22[8] - 1 < (uint)(iVar4 - iVar8)) {
          FUN_7150d1c8(&DAT_70b0e938,uVar17,puVar22 + 5);
          puVar7 = (undefined4 *)puVar22[1];
          puVar15 = puVar22;
          if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
            do {
              puVar19 = (undefined4 *)puVar15[2];
              bVar25 = (undefined4 *)*puVar19 != puVar15;
              puVar15 = puVar19;
            } while (bVar25);
          }
          else {
            do {
              puVar19 = puVar7;
              puVar7 = (undefined4 *)*puVar19;
            } while ((undefined4 *)*puVar19 != (undefined4 *)0x0);
          }
          goto LAB_7150b650;
        }
        FUN_7136cdfc(&uStack_3c);
        iVar16 = FUN_7150d008(puVar13[0x23],&DAT_700c3028,&uStack_3c);
        if (iVar16 != 0) {
          uStack_34 = FUN_71ba0b38(DAT_700c3024,uStack_34);
          iVar16 = puVar22[6];
          if (iVar16 != 0) {
            *(undefined4 *)(iVar16 + 0x44) = uStack_3c;
            *(undefined4 *)(iVar16 + 0x48) = uStack_38;
            *(undefined4 *)(iVar16 + 0x4c) = uStack_34;
            FUN_7141bbe4(iVar16 + 0x14);
          }
        }
        piVar23 = puVar13 + 0x26;
        piVar14 = (int *)*piVar23;
        piVar20 = piVar23;
        piVar18 = piVar23;
        if (piVar14 != (int *)0x0) {
          do {
            piVar1 = piVar14;
            if (piVar14[4] < 9) {
              piVar14 = piVar14 + 1;
              piVar1 = piVar18;
            }
            piVar14 = (int *)*piVar14;
            piVar18 = piVar1;
          } while (piVar14 != (int *)0x0);
          if ((piVar1 != piVar23) && (piVar20 = piVar1, 9 < piVar1[4])) {
            piVar20 = piVar23;
          }
        }
        if (piVar23 != piVar20) {
          uStack_30 = DAT_700c3028;
          uStack_2c = DAT_700c302c;
          uStack_28 = DAT_700c3030;
          FUN_7136d040(piVar20 + 7,&uStack_30);
          uStack_30 = DAT_700c3034;
          uStack_2c = DAT_700c3038;
          uStack_28 = DAT_700c303c;
          FUN_7136d040(piVar20 + 10,&uStack_30);
        }
        if (puVar22[8] == 0) {
          uVar9 = 0x3f800000;
        }
        else {
          uVar21 = puVar22[8] - (iVar4 - iVar8);
          uVar9 = FUN_71ba1e0c(uVar21);
          uVar9 = FUN_71ba13e0(uVar9,0x442f0000);
          if (699 < uVar21) {
            uVar9 = 0x3f800000;
          }
        }
        iVar8 = puVar22[9];
        FUN_7136d550(&uStack_30,0,0x3f800000);
        uVar10 = FUN_71ba21e8(uStack_30,0x3e3851ec);
        uVar10 = FUN_71ba0b38(uVar10,0x3f51eb85);
        uVar10 = FUN_71ba21e8(uVar6,uVar10);
        uVar9 = FUN_71ba21e8(uVar9,uVar10);
        iVar8 = iVar8 * 0xc;
        uVar24 = *(undefined4 *)(&DAT_70081df4 + iVar8);
        uVar10 = *(undefined4 *)(&DAT_70081df8 + iVar8);
        uVar11 = FUN_71ba21e8(*(undefined4 *)(&DAT_70081dfc + iVar8),0x3f933333);
        uVar11 = imp_fminf(uVar11,0x3f800000);
        uVar11 = FUN_71ba21e8(uVar11,0x437f0000);
        FUN_71ba21e8(uVar9,uVar11);
        uVar11 = FUN_71ba17bc();
        uVar12 = FUN_71ba21e8(uVar9,DAT_700c301c);
        uVar24 = FUN_71ba21e8(uVar24,0x3f933333);
        uVar24 = imp_fminf(uVar24,0x3f800000);
        uVar24 = FUN_71ba21e8(uVar24,0x437f0000);
        FUN_71ba21e8(uVar9,uVar24);
        uVar24 = FUN_71ba17bc();
        uVar10 = FUN_71ba21e8(uVar10,0x3f933333);
        uVar10 = imp_fminf(uVar10,0x3f800000);
        uVar10 = FUN_71ba21e8(uVar10,0x437f0000);
        FUN_71ba21e8(uVar9,uVar10);
        uVar10 = FUN_71ba17bc();
        FUN_714411a0(uVar17 + 0xf1a00000,0,uVar24,uVar10,uVar11,0xff,&uStack_3c,uVar12,0x42a00000,1,
                     0,1,1,0,0,0,0x3e4ccccd,1,0x3f800000,0,0);
        uVar11 = *(undefined4 *)(&DAT_70081df8 + iVar8);
        uVar12 = *(undefined4 *)(&DAT_70081dfc + iVar8);
        uVar10 = FUN_71ba21e8(uVar9,*(undefined4 *)(&DAT_70081df4 + iVar8));
        uVar11 = FUN_71ba21e8(uVar9,uVar11);
        puVar13 = (undefined4 *)FUN_71ba21e8(uVar9,uVar12);
        uVar9 = FUN_71ba21e8(uVar9,DAT_700c3020);
        FUN_71454734(0,uStack_3c,uStack_38,uStack_34,0,0,0,uVar9,uVar10,uVar11,puVar13,0,0,0);
        puVar7 = (undefined4 *)puVar22[1];
        if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
          do {
            puVar19 = (undefined4 *)puVar22[2];
            bVar25 = (undefined4 *)*puVar19 != puVar22;
            puVar22 = puVar19;
          } while (bVar25);
        }
        else {
          do {
            puVar19 = puVar7;
            puVar7 = (undefined4 *)*puVar19;
          } while ((undefined4 *)*puVar19 != (undefined4 *)0x0);
        }
      }
      else {
        if (puVar22[6] != 0) {
          FUN_7144d7ac(uVar5);
        }
        iVar8 = 0;
        do {
          iVar16 = iVar3 + iVar8;
          if (*(int *)(iVar16 + 0xc) == uVar17 + 0xf1a00000) {
            *piVar2 = *piVar2 + -1;
            *(undefined4 *)(iVar16 + 0x38) = 0;
            *(undefined4 *)(iVar16 + 0xc) = 0;
            break;
          }
          iVar8 = iVar8 + 0x3c;
        } while (iVar8 != 0xf00);
        puVar7 = (undefined4 *)puVar22[1];
        puVar15 = puVar22;
        if ((undefined4 *)puVar22[1] == (undefined4 *)0x0) {
          do {
            puVar19 = (undefined4 *)puVar15[2];
            bVar25 = (undefined4 *)*puVar19 != puVar15;
            puVar15 = puVar19;
          } while (bVar25);
        }
        else {
          do {
            puVar19 = puVar7;
            puVar7 = (undefined4 *)*puVar19;
          } while ((undefined4 *)*puVar19 != (undefined4 *)0x0);
        }
LAB_7150b650:
        DAT_71174ce4 = DAT_71174ce4 + -1;
        if (DAT_71174cdc == puVar22) {
          DAT_71174cdc = puVar19;
        }
        FUN_71368054(DAT_71174ce0,puVar22);
        thunk_qNQrlu(puVar22);
      }
      puVar22 = puVar19;
    } while (puVar19 != &DAT_71174ce0);
  }
  return;
}


// =========================================================================
// Function: FUN_7150c154
// Entry: 0x7150c154 | Size: 1100 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7150c154(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_r6;
  int iVar6;
  int unaff_r9;
  bool bVar7;
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
  int iStack_58;
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
  
  puVar1 = DAT_71174cf8;
  if (DAT_71174cf4 != DAT_71174cf8) {
    if (DAT_711f6d58 != 0) {
      unaff_r9 = *(int *)(DAT_711f6d58 + 0x20);
    }
    if (DAT_711f6d58 != 0 && unaff_r9 != 0) {
      puVar5 = DAT_71174cf4;
      do {
        if (((*puVar5 & 0xffff) >> 3 < 0x7d) &&
           (uVar4 = *puVar5 & 0x3ff, *(char *)(unaff_r9 + uVar4) != '\0')) {
          iVar6 = *(int *)(unaff_r9 + 1000 + uVar4 * 4);
          if (iVar6 != 0) {
            unaff_r6 = *(int *)(iVar6 + 0xc);
          }
          if (iVar6 != 0 && unaff_r6 != 0) {
            if (puVar5[1] != 0) {
              FUN_7136cdfc();
              iVar2 = FUN_7150d008(*(undefined4 *)(iVar6 + 0xc),&DAT_700c3028,&uStack_68);
              if (iVar2 != 0) {
                uStack_60 = FUN_71ba0b38(DAT_700c3024);
                uVar4 = puVar5[1];
                *(undefined4 *)(uVar4 + 0x48) = uStack_64;
                *(undefined4 *)(uVar4 + 0x44) = uStack_68;
                *(undefined4 *)(uVar4 + 0x4c) = uStack_60;
                FUN_7141bbe4(uVar4 + 0x14);
              }
              unaff_r6 = *(int *)(iVar6 + 0xc);
            }
            uVar4 = puVar5[2];
            if (uVar4 != 0 && unaff_r6 != 0) {
              bVar7 = *(int *)(uVar4 + 4) != 0;
              iVar6 = 0;
              if (bVar7) {
                iVar6 = *(int *)(unaff_r6 + 0x18);
              }
              if ((((bVar7 && iVar6 != 0) &&
                   (FUN_713b45b4(unaff_r6), *(int *)(unaff_r6 + 0x18) != 0)) &&
                  (iVar6 = FUN_714172f4(), iVar6 != 0)) &&
                 ((iVar2 = FUN_71416a78(iVar6,0x18), unaff_r6 = iVar6, -1 < iVar2 &&
                  (iVar6 = FUN_71417b34(iVar6), unaff_r6 = iVar2, iVar6 != 0)))) {
                imp___aeabi_memcpy(&uStack_68,iVar6 + iVar2 * 0x40,0x40);
                (**(code **)(**(int **)(uVar4 + 4) + 0x10))();
                uStack_74 = DAT_700c3028;
                uStack_70 = DAT_700c302c;
                uStack_6c = DAT_700c3030;
                uVar3 = FUN_7136cdfc(&uStack_80);
                FUN_715eea98(uVar3,&uStack_68,&uStack_74);
                uVar3 = DAT_700c3034;
                uStack_38 = uStack_80;
                uStack_34 = uStack_7c;
                uStack_30 = uStack_78;
                iVar6 = FUN_71ba2cf0(DAT_700c3034,0);
                if (iVar6 == 0) {
                  FUN_7141c000(&uStack_68,&DAT_700c3058,uVar3,1);
                }
                uVar3 = DAT_700c3038;
                iVar6 = FUN_71ba2cf0(DAT_700c3038,0);
                if (iVar6 == 0) {
                  FUN_7141c000(&uStack_68,&DAT_700c3064,uVar3,1);
                }
                uVar3 = DAT_700c303c;
                iVar6 = FUN_71ba2cf0(DAT_700c303c,0);
                if (iVar6 == 0) {
                  FUN_7141c000(&uStack_68,&DAT_700c3070,uVar3,1);
                }
                unaff_r6 = iStack_58;
                FUN_7156063c(uVar4,uStack_68,uStack_64,uStack_60,uStack_5c,iStack_58,uStack_54,
                             uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                             uStack_34,uStack_30,uStack_2c);
                iVar2 = *(int *)(uVar4 + 4);
                bVar7 = *(int *)(iVar2 + 0x18) != 0;
                iVar6 = 0;
                if (bVar7) {
                  iVar6 = *(int *)(iVar2 + 0x14);
                }
                if (bVar7 && iVar6 != 0) {
                  iVar6 = FUN_713b3a08();
                  iVar2 = *(int *)(uVar4 + 4);
                  if (iVar6 != 0) {
                    FUN_71340e50(*(undefined4 *)(iVar2 + 0x14));
                    iVar2 = *(int *)(uVar4 + 4);
                  }
                }
                FUN_713b49d0(iVar2);
                FUN_715eedfc(*(undefined4 *)(*(int *)(uVar4 + 4) + 0x18));
                (**(code **)(**(int **)(uVar4 + 4) + 8))();
              }
            }
          }
        }
        puVar5 = puVar5 + 3;
      } while (puVar5 != puVar1);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7150ca50
// Entry: 0x7150ca50 | Size: 20 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7150b900) */
/* WARNING: Removing unreachable block (ram,0x7150b934) */
/* WARNING: Removing unreachable block (ram,0x7150b90c) */
/* WARNING: Removing unreachable block (ram,0x7150b92c) */
/* WARNING: Removing unreachable block (ram,0x7150b930) */
/* WARNING: Removing unreachable block (ram,0x7150b938) */
/* WARNING: Removing unreachable block (ram,0x7150b798) */
/* WARNING: Removing unreachable block (ram,0x7150b6c8) */
/* WARNING: Removing unreachable block (ram,0x7150b6d4) */
/* WARNING: Removing unreachable block (ram,0x7150b82c) */
/* WARNING: Removing unreachable block (ram,0x7150b6e4) */
/* WARNING: Removing unreachable block (ram,0x7150b6f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7150ca50(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar9 = DAT_71174ce8;
  if ((DAT_71174cf0 != 0) && (DAT_71174ce8 != &DAT_71174cec)) {
    puVar10 = &uStack_38;
    iVar3 = *DAT_70b4204c;
    uVar4 = FUN_71ba1e0c();
    FUN_71ba21e8(uVar4,0x3d3851ec);
    uVar4 = imp_sinf();
    uVar4 = FUN_71ba21e8(uVar4,0x3e0f5c29);
    FUN_71ba0b38(uVar4,0x3f5c28f6);
    uVar4 = DAT_70ffd280;
    do {
      uVar1 = *(undefined2 *)(puVar9 + 4);
      puVar5 = (undefined4 *)FUN_7150ce2c(uVar1);
      iVar6 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        iVar6 = puVar5[0x23];
        puVar10 = puVar5;
      }
      if (puVar5 != (undefined4 *)0x0 && iVar6 != 0) {
        if (puVar9[8] - 1 < (uint)(iVar3 - puVar9[7])) {
          FUN_7150d1c8(&DAT_70b0e95c,uVar1,puVar9 + 5);
          puVar5 = (undefined4 *)puVar9[1];
          puVar7 = puVar9;
          if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
            do {
              puVar8 = (undefined4 *)puVar7[2];
              bVar11 = (undefined4 *)*puVar8 != puVar7;
              puVar7 = puVar8;
            } while (bVar11);
          }
          else {
            do {
              puVar8 = puVar5;
              puVar5 = (undefined4 *)*puVar8;
            } while ((undefined4 *)*puVar8 != (undefined4 *)0x0);
          }
          goto LAB_7150b650;
        }
        FUN_7136cdfc(&uStack_3c);
        iVar6 = FUN_7150d008(puVar10[0x23],&uRam700c3040,&uStack_3c);
        if ((iVar6 != 0) && (iVar6 = puVar9[6], iVar6 != 0)) {
          *(undefined4 *)(iVar6 + 0x44) = uStack_3c;
          *(undefined4 *)(iVar6 + 0x48) = uStack_38;
          *(undefined4 *)(iVar6 + 0x4c) = uStack_34;
          FUN_7141bbe4(iVar6 + 0x14);
        }
        puVar10 = puVar10 + 0x26;
        puVar8 = (undefined4 *)*puVar10;
        puVar5 = puVar10;
        puVar7 = puVar10;
        if (puVar8 != (undefined4 *)0x0) {
          do {
            puVar2 = puVar8;
            if ((int)puVar8[4] < 8) {
              puVar8 = puVar8 + 1;
              puVar2 = puVar7;
            }
            puVar8 = (undefined4 *)*puVar8;
            puVar7 = puVar2;
          } while (puVar8 != (undefined4 *)0x0);
          if ((puVar2 != puVar10) && (puVar5 = puVar2, 8 < (int)puVar2[4])) {
            puVar5 = puVar10;
          }
        }
        if (puVar10 != puVar5) {
          uStack_30 = uRam700c3040;
          uStack_2c = uRam700c3044;
          uStack_28 = uRam700c3048;
          FUN_7136d040(puVar5 + 7,&uStack_30);
          uStack_30 = uRam700c304c;
          uStack_2c = uRam700c3050;
          uStack_28 = uRam700c3054;
          FUN_7136d040(puVar5 + 10,&uStack_30);
        }
        puVar5 = (undefined4 *)puVar9[1];
        puVar10 = (undefined4 *)&DAT_70b0e95c;
        if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
          do {
            puVar8 = (undefined4 *)puVar9[2];
            bVar11 = (undefined4 *)*puVar8 != puVar9;
            puVar9 = puVar8;
          } while (bVar11);
        }
        else {
          do {
            puVar8 = puVar5;
            puVar5 = (undefined4 *)*puVar8;
          } while ((undefined4 *)*puVar8 != (undefined4 *)0x0);
        }
      }
      else {
        if (puVar9[6] != 0) {
          FUN_7144d7ac(uVar4);
        }
        puVar5 = (undefined4 *)puVar9[1];
        puVar7 = puVar9;
        if ((undefined4 *)puVar9[1] == (undefined4 *)0x0) {
          do {
            puVar8 = (undefined4 *)puVar7[2];
            bVar11 = (undefined4 *)*puVar8 != puVar7;
            puVar7 = puVar8;
          } while (bVar11);
        }
        else {
          do {
            puVar8 = puVar5;
            puVar5 = (undefined4 *)*puVar8;
          } while ((undefined4 *)*puVar8 != (undefined4 *)0x0);
        }
LAB_7150b650:
        DAT_71174cf0 = DAT_71174cf0 + -1;
        if (DAT_71174ce8 == puVar9) {
          DAT_71174ce8 = puVar8;
        }
        FUN_71368054(DAT_71174cec,puVar9);
        thunk_qNQrlu(puVar9);
      }
      puVar9 = puVar8;
    } while (puVar8 != &DAT_71174cec);
  }
  return;
}


// =========================================================================
// Function: FUN_7150cad8
// Entry: 0x7150cad8 | Size: 20 bytes
// =========================================================================

/* WARNING: Removing unreachable block (ram,0x7150c334) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7150cad8(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_r6;
  int iVar6;
  int unaff_r9;
  bool bVar7;
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
  int iStack_58;
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
  
  puVar1 = DAT_71174d04;
  if (DAT_71174d00 != DAT_71174d04) {
    if (DAT_711f6d58 != 0) {
      unaff_r9 = *(int *)(DAT_711f6d58 + 0x20);
    }
    if (DAT_711f6d58 != 0 && unaff_r9 != 0) {
      puVar5 = DAT_71174d00;
      do {
        if (((*puVar5 & 0xffff) >> 3 < 0x7d) &&
           (uVar4 = *puVar5 & 0x3ff, *(char *)(unaff_r9 + uVar4) != '\0')) {
          iVar6 = *(int *)(unaff_r9 + 1000 + uVar4 * 4);
          if (iVar6 != 0) {
            unaff_r6 = *(int *)(iVar6 + 0xc);
          }
          if (iVar6 != 0 && unaff_r6 != 0) {
            if (puVar5[1] != 0) {
              FUN_7136cdfc();
              iVar2 = FUN_7150d008(*(undefined4 *)(iVar6 + 0xc),&uRam700c3040,&uStack_68);
              if (iVar2 != 0) {
                uVar4 = puVar5[1];
                *(undefined4 *)(uVar4 + 0x48) = uStack_64;
                *(undefined4 *)(uVar4 + 0x44) = uStack_68;
                *(undefined4 *)(uVar4 + 0x4c) = uStack_60;
                FUN_7141bbe4(uVar4 + 0x14);
              }
              unaff_r6 = *(int *)(iVar6 + 0xc);
            }
            uVar4 = puVar5[2];
            if (uVar4 != 0 && unaff_r6 != 0) {
              bVar7 = *(int *)(uVar4 + 4) != 0;
              iVar6 = 0;
              if (bVar7) {
                iVar6 = *(int *)(unaff_r6 + 0x18);
              }
              if ((((bVar7 && iVar6 != 0) &&
                   (FUN_713b45b4(unaff_r6), *(int *)(unaff_r6 + 0x18) != 0)) &&
                  (iVar6 = FUN_714172f4(), iVar6 != 0)) &&
                 ((iVar2 = FUN_71416a78(iVar6,0x18), unaff_r6 = iVar6, -1 < iVar2 &&
                  (iVar6 = FUN_71417b34(iVar6), unaff_r6 = iVar2, iVar6 != 0)))) {
                imp___aeabi_memcpy(&uStack_68,iVar6 + iVar2 * 0x40,0x40);
                (**(code **)(**(int **)(uVar4 + 4) + 0x10))();
                uStack_74 = uRam700c3040;
                uStack_70 = uRam700c3044;
                uStack_6c = uRam700c3048;
                uVar3 = FUN_7136cdfc(&uStack_80);
                FUN_715eea98(uVar3,&uStack_68,&uStack_74);
                uVar3 = uRam700c304c;
                uStack_38 = uStack_80;
                uStack_34 = uStack_7c;
                uStack_30 = uStack_78;
                iVar6 = FUN_71ba2cf0(uRam700c304c,0);
                if (iVar6 == 0) {
                  FUN_7141c000(&uStack_68,&DAT_700c3058,uVar3,1);
                }
                uVar3 = uRam700c3050;
                iVar6 = FUN_71ba2cf0(uRam700c3050,0);
                if (iVar6 == 0) {
                  FUN_7141c000(&uStack_68,&DAT_700c3064,uVar3,1);
                }
                uVar3 = uRam700c3054;
                iVar6 = FUN_71ba2cf0(uRam700c3054,0);
                if (iVar6 == 0) {
                  FUN_7141c000(&uStack_68,&DAT_700c3070,uVar3,1);
                }
                unaff_r6 = iStack_58;
                FUN_7156063c(uVar4,uStack_68,uStack_64,uStack_60,uStack_5c,iStack_58,uStack_54,
                             uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                             uStack_34,uStack_30,uStack_2c);
                iVar2 = *(int *)(uVar4 + 4);
                bVar7 = *(int *)(iVar2 + 0x18) != 0;
                iVar6 = 0;
                if (bVar7) {
                  iVar6 = *(int *)(iVar2 + 0x14);
                }
                if (bVar7 && iVar6 != 0) {
                  iVar6 = FUN_713b3a08();
                  iVar2 = *(int *)(uVar4 + 4);
                  if (iVar6 != 0) {
                    FUN_71340e50(*(undefined4 *)(iVar2 + 0x14));
                    iVar2 = *(int *)(uVar4 + 4);
                  }
                }
                FUN_713b49d0(iVar2);
                FUN_715eedfc(*(undefined4 *)(*(int *)(uVar4 + 4) + 0x18));
                (**(code **)(**(int **)(uVar4 + 4) + 8))();
              }
            }
          }
        }
        puVar5 = puVar5 + 3;
      } while (puVar5 != puVar1);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7150ce2c
// Entry: 0x7150ce2c | Size: 272 bytes
// =========================================================================

int FUN_7150ce2c(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_711f6d58 != 0) {
    param_3 = *(int *)(DAT_711f6d58 + 0xac);
  }
  if (DAT_711f6d58 != 0 && param_3 != 0) {
    if (*(ushort *)(param_3 + 0x1f68) == param_1) {
      if (DAT_711a3938 == 0) {
        return 0;
      }
      iVar1 = *(int *)(DAT_711a3938 + 0x1389c);
      if (iVar1 == 0) goto LAB_7150ce8c;
    }
    else {
      iVar1 = 0;
      if ((param_1 < 0x3ed) && (iVar2 = *(int *)(param_3 + param_1 * 4 + 0x1f8c), iVar2 != 0)) {
        iVar3 = *(int *)(iVar2 + 0x10);
        iVar1 = 0;
        if (*(char *)(iVar2 + 0x28) != '\0') {
          iVar1 = iVar3;
        }
        if (iVar3 == 0) {
          iVar1 = iVar3;
        }
        return iVar1;
      }
    }
  }
  else {
    iVar1 = 0;
    if ((param_1 == 0xfffe) && (DAT_711a3938 != 0)) {
      if (*(int *)(DAT_711a3938 + 0x1389c) != 0) {
        return *(int *)(DAT_711a3938 + 0x1389c);
      }
LAB_7150ce8c:
      piVar4 = (int *)(DAT_711a3938 + 0x1389c);
      iVar1 = FUN_713c301c(0);
      if (iVar1 != 0) {
        thunk_MwhHq(0x3a0);
        iVar1 = FUN_715ba834();
        *piVar4 = iVar1;
        return iVar1;
      }
      return *piVar4;
    }
  }
  return iVar1;
}


// =========================================================================
// Function: FUN_7150d008
// Entry: 0x7150d008 | Size: 228 bytes
// =========================================================================

bool FUN_7150d008(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [64];
  
  if (param_1 != 0) {
    if ((((*(int *)(param_1 + 0x18) == 0) || (iVar1 = FUN_714172f4(), iVar1 == 0)) ||
        (iVar2 = FUN_71416a78(iVar1,0x18), iVar2 < 0)) || (iVar1 = FUN_71417b34(iVar1), iVar1 == 0))
    {
      iVar1 = *(int *)(param_1 + 0x14) + 0x30;
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar1 = param_1 + 4;
      }
      FUN_7136d040(param_3,iVar1);
      uVar3 = FUN_71ba0b38(*(undefined4 *)(param_3 + 8),0x3eb33333);
      *(undefined4 *)(param_3 + 8) = uVar3;
    }
    else {
      imp___aeabi_memcpy(auStack_60,iVar1 + iVar2 * 0x40,0x40);
      uStack_68 = param_2[1];
      uStack_64 = param_2[2];
      uStack_6c = *param_2;
      FUN_715eea98(param_3,auStack_60,&uStack_6c);
    }
  }
  return param_1 != 0;
}


// =========================================================================
// Function: FUN_7150d1c8
// Entry: 0x7150d1c8 | Size: 280 bytes
// =========================================================================

void FUN_7150d1c8(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_3 + 4) != 0) {
    FUN_7144d7ac(DAT_70ffd280);
    param_3[4] = '\0';
    param_3[5] = '\0';
    param_3[6] = '\0';
    param_3[7] = '\0';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = 0;
    do {
      iVar2 = DAT_70ffcec0 + iVar1;
      if (*(int *)(iVar2 + 0xc) == *(int *)(param_1 + 0x10) + param_2) {
        *DAT_70ffceb8 = *DAT_70ffceb8 + -1;
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        break;
      }
      iVar1 = iVar1 + 0x3c;
    } while (iVar1 != 0xf00);
  }
  iVar1 = FUN_7150ce2c(param_2);
  if (iVar1 != 0) {
    FUN_715c5e54(iVar1,*(undefined4 *)(param_1 + 0x14));
    iVar2 = 0;
    if (*param_3 != '\0') {
      iVar2 = *(int *)(iVar1 + 0x8c);
    }
    if (*param_3 != '\0' && iVar2 != 0) {
      bVar3 = *(int *)(iVar2 + 0x440) != 0;
      if (bVar3) {
        iVar2 = *(int *)(iVar2 + 0x18);
      }
      if ((bVar3 && iVar2 != 0) && (iVar2 = FUN_7130854c(iVar2,DAT_71174c84), iVar2 != 0)) {
        FUN_713bf1e8(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x440),1);
      }
    }
  }
  *param_3 = '\0';
  return;
}


// =========================================================================
// Function: FUN_7150d404
// Entry: 0x7150d404 | Size: 60 bytes
// =========================================================================

void FUN_7150d404(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  FUN_7150d404(param_1,*param_2);
  FUN_7150d404(param_1,param_2[1]);
  thunk_qNQrlu(param_2);
  return;
}


// =========================================================================
// Function: FUN_71510c6c
// Entry: 0x71510c6c | Size: 24 bytes
// =========================================================================

void FUN_71510c6c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// =========================================================================
// Function: FUN_71510c9c
// Entry: 0x71510c9c | Size: 12 bytes
// =========================================================================

void FUN_71510c9c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}


// =========================================================================
// Function: FUN_71510cc0
// Entry: 0x71510cc0 | Size: 772 bytes
// =========================================================================

void FUN_71510cc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  uVar8 = *param_2;
  uVar6 = param_2[5];
  uVar10 = param_2[10];
  uVar1 = FUN_71ba0b38(uVar6,uVar8);
  uVar2 = FUN_71ba0b38(uVar1,uVar10);
  iVar3 = FUN_71ba2d50(uVar2,0);
  puVar5 = param_2 + 8;
  puVar4 = param_2 + 4;
  puVar9 = param_2 + 1;
  puVar7 = param_1 + 1;
  if (iVar3 == 0) {
    uVar2 = FUN_71ba240c(uVar8,uVar6);
    uVar2 = FUN_71ba240c(uVar2,uVar10);
    iVar3 = FUN_71ba2d50(uVar2,0);
    if (iVar3 != 0) {
      FUN_71ba0b38(uVar2,0x3f800000);
      uVar1 = imp_sqrtf();
      uVar2 = FUN_71ba21e8(uVar1,0x3f000000);
      *param_1 = uVar2;
      uVar1 = FUN_71ba13e0(0x3f000000,uVar1);
      uVar2 = FUN_71ba0b38(*puVar4,*puVar9);
      uVar2 = FUN_71ba21e8(uVar1,uVar2);
      *puVar7 = uVar2;
      uVar2 = FUN_71ba0b38(*puVar5,param_2[2]);
      uVar2 = FUN_71ba21e8(uVar1,uVar2);
      param_1[2] = uVar2;
      uVar2 = FUN_71ba240c(param_2[6],param_2[9]);
      uVar1 = FUN_71ba21e8(uVar1,uVar2);
      iVar3 = 0xc;
      goto LAB_71510f38;
    }
    uVar2 = FUN_71ba240c(uVar6,uVar8);
    uVar2 = FUN_71ba240c(uVar2,uVar10);
    iVar3 = FUN_71ba2d50(uVar2,0);
    if (iVar3 == 0) {
      uVar1 = FUN_71ba240c(uVar10,uVar1);
      FUN_71ba0b38(uVar1,0x3f800000);
      uVar1 = imp_sqrtf();
      uVar2 = FUN_71ba21e8(uVar1,0x3f000000);
      param_1[2] = uVar2;
      uVar1 = FUN_71ba13e0(0x3f000000,uVar1);
      uVar2 = FUN_71ba240c(*puVar9,*puVar4);
      uVar2 = FUN_71ba21e8(uVar1,uVar2);
      param_1[3] = uVar2;
      uVar2 = FUN_71ba0b38(*puVar5,param_2[2]);
      uVar2 = FUN_71ba21e8(uVar1,uVar2);
      *param_1 = uVar2;
      uVar2 = FUN_71ba0b38(param_2[9],param_2[6]);
      uVar1 = FUN_71ba21e8(uVar1,uVar2);
      iVar3 = 4;
      goto LAB_71510f38;
    }
    FUN_71ba0b38(uVar2,0x3f800000);
    uVar1 = imp_sqrtf();
    uVar2 = FUN_71ba21e8(uVar1,0x3f000000);
    *puVar7 = uVar2;
    uVar2 = FUN_71ba13e0(0x3f000000,uVar1);
    uVar1 = FUN_71ba240c(*puVar5,param_2[2]);
    uVar1 = FUN_71ba21e8(uVar2,uVar1);
    param_1[3] = uVar1;
    uVar1 = FUN_71ba240c(*puVar4,*puVar9);
    uVar1 = FUN_71ba21e8(uVar2,uVar1);
    *param_1 = uVar1;
    uVar1 = FUN_71ba0b38(param_2[9],param_2[6]);
  }
  else {
    FUN_71ba0b38(uVar2,0x3f800000);
    uVar1 = imp_sqrtf();
    uVar2 = FUN_71ba21e8(uVar1,0x3f000000);
    param_1[3] = uVar2;
    uVar2 = FUN_71ba13e0(0x3f000000,uVar1);
    uVar1 = FUN_71ba240c(param_2[6],param_2[9]);
    uVar1 = FUN_71ba21e8(uVar2,uVar1);
    *param_1 = uVar1;
    uVar1 = FUN_71ba240c(*puVar5,param_2[2]);
    uVar1 = FUN_71ba21e8(uVar2,uVar1);
    *puVar7 = uVar1;
    uVar1 = FUN_71ba240c(*puVar9,*puVar4);
  }
  uVar1 = FUN_71ba21e8(uVar2,uVar1);
  iVar3 = 8;
LAB_71510f38:
  *(undefined4 *)((int)param_1 + iVar3) = uVar1;
  return;
}


// =========================================================================
// Function: FUN_71511538
// Entry: 0x71511538 | Size: 488 bytes
// =========================================================================

void FUN_71511538(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  undefined4 uVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  param_2[0xf] = 0x3f800000;
  param_2[0xb] = 0;
  param_2[7] = 0;
  param_2[3] = 0;
  uVar10 = param_1[1];
  uVar12 = *param_1;
  uVar11 = param_1[2];
  uVar13 = param_1[3];
  uVar1 = FUN_71ba0b38(uVar10);
  uVar2 = FUN_71ba0b38(uVar11,uVar11);
  uVar3 = FUN_71ba21e8(uVar12,uVar2);
  uVar4 = FUN_71ba21e8(uVar1,uVar13);
  uVar5 = FUN_71ba0b38(uVar3,uVar4);
  param_2[8] = uVar5;
  uVar5 = FUN_71ba21e8(uVar12,uVar1);
  uVar6 = FUN_71ba21e8(uVar13,uVar2);
  uVar7 = FUN_71ba240c(uVar5,uVar6);
  param_2[4] = uVar7;
  uVar7 = FUN_71ba0b38(uVar12,uVar12);
  uVar8 = FUN_71ba21e8(uVar10,uVar2);
  uVar13 = FUN_71ba21e8(uVar7,uVar13);
  uVar9 = FUN_71ba240c(uVar8,uVar13);
  param_2[9] = uVar9;
  uVar5 = FUN_71ba0b38(uVar5,uVar6);
  param_2[1] = uVar5;
  uVar5 = FUN_71ba0b38(uVar8,uVar13);
  param_2[6] = uVar5;
  uVar3 = FUN_71ba240c(uVar3,uVar4);
  param_2[2] = uVar3;
  uVar3 = FUN_71ba21e8(uVar12,uVar7);
  uVar2 = FUN_71ba21e8(uVar11,uVar2);
  uVar4 = FUN_71ba0b38(uVar3,uVar2);
  uVar4 = FUN_71ba240c(0x3f800000,uVar4);
  param_2[5] = uVar4;
  uVar1 = FUN_71ba21e8(uVar10,uVar1);
  uVar3 = FUN_71ba0b38(uVar3,uVar1);
  uVar3 = FUN_71ba240c(0x3f800000,uVar3);
  param_2[10] = uVar3;
  uVar1 = FUN_71ba0b38(uVar1,uVar2);
  uVar1 = FUN_71ba240c(0x3f800000,uVar1);
  *param_2 = uVar1;
  uStack_2c = param_2[0xd];
  uStack_28 = param_2[0xe];
  uStack_30 = param_2[0xc];
  FUN_7136d040(param_2 + 0xc,&uStack_30);
  return;
}


// =========================================================================
// Function: FUN_715119f4
// Entry: 0x715119f4 | Size: 576 bytes
// =========================================================================

void FUN_715119f4(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uStack_34;
  uint uStack_2c;
  uint uStack_28;
  
  uStack_34 = *param_2;
  uStack_28 = param_2[1];
  uVar11 = param_2[2];
  uStack_2c = param_2[3];
  uVar8 = *param_3;
  uVar1 = param_3[1];
  uVar10 = param_3[2];
  uVar9 = param_3[3];
  uVar2 = FUN_71ba21e8(uStack_34);
  uVar3 = FUN_71ba21e8(uStack_2c,uVar9);
  uVar2 = FUN_71ba0b38(uVar3,uVar2);
  uVar3 = FUN_71ba21e8(uStack_28,uVar1);
  uVar2 = FUN_71ba0b38(uVar3,uVar2);
  uVar3 = FUN_71ba21e8(uVar11,uVar10);
  uVar4 = FUN_71ba0b38(uVar3,uVar2);
  iVar5 = FUN_71ba2d10(uVar4,0);
  if (iVar5 != 0) {
    uVar11 = uVar11 ^ 0x80000000;
    uVar4 = uVar4 ^ 0x80000000;
    uStack_34 = uStack_34 ^ 0x80000000;
    uStack_2c = uStack_2c ^ 0x80000000;
    uStack_28 = uStack_28 ^ 0x80000000;
  }
  uVar2 = imp_acosf(uVar4);
  uVar12 = FUN_71ba1638();
  iVar5 = FUN_71ba2c9c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x102f4fd,0x3e800000);
  if (iVar5 != 0) {
    uVar3 = imp_sinf(uVar2);
    uVar6 = FUN_71ba240c(0x3f800000,param_4);
    FUN_71ba21e8(uVar6,uVar2);
    uVar6 = imp_sinf();
    uVar6 = FUN_71ba13e0(uVar6,uVar3);
    uVar7 = FUN_71ba21e8(uStack_34,uVar6);
    FUN_71ba21e8(uVar2,param_4);
    uVar2 = imp_sinf();
    uVar2 = FUN_71ba13e0(uVar2,uVar3);
    uVar3 = FUN_71ba21e8(uVar8,uVar2);
    uStack_34 = FUN_71ba0b38(uVar7,uVar3);
    uVar3 = FUN_71ba21e8(uStack_28,uVar6);
    uVar1 = FUN_71ba21e8(uVar1,uVar2);
    uStack_28 = FUN_71ba0b38(uVar3,uVar1);
    uVar1 = FUN_71ba21e8(uVar11,uVar6);
    uVar3 = FUN_71ba21e8(uVar10,uVar2);
    uVar11 = FUN_71ba0b38(uVar1,uVar3);
    uVar1 = FUN_71ba21e8(uStack_2c,uVar6);
    uVar2 = FUN_71ba21e8(uVar9,uVar2);
    uStack_2c = FUN_71ba0b38(uVar1,uVar2);
  }
  param_1[1] = uStack_28;
  param_1[2] = uVar11;
  param_1[3] = uStack_2c;
  *param_1 = uStack_34;
  return;
}


// =========================================================================
// Function: FUN_71511fb0
// Entry: 0x71511fb0 | Size: 188 bytes
// =========================================================================

void FUN_71511fb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_71ba2d70(param_4,0x3f800000);
  if (iVar1 != 0) {
    param_4 = 0x3f800000;
  }
  iVar1 = FUN_71ba2d10(param_4,0);
  uVar3 = *param_1;
  if (iVar1 != 0) {
    param_4 = 0;
  }
  uVar2 = FUN_71ba240c(*param_2,uVar3);
  uVar2 = FUN_71ba21e8(param_4,uVar2);
  uVar3 = FUN_71ba0b38(uVar2,uVar3);
  *param_3 = uVar3;
  uVar2 = param_1[1];
  uVar3 = FUN_71ba240c(param_2[1],uVar2);
  uVar3 = FUN_71ba21e8(param_4,uVar3);
  uVar3 = FUN_71ba0b38(uVar3,uVar2);
  param_3[1] = uVar3;
  uVar2 = param_1[2];
  uVar3 = FUN_71ba240c(param_2[2],uVar2);
  uVar3 = FUN_71ba21e8(param_4,uVar3);
  uVar3 = FUN_71ba0b38(uVar3,uVar2);
  param_3[2] = uVar3;
  return;
}


// =========================================================================
// Function: FUN_715121b8
// Entry: 0x715121b8 | Size: 356 bytes
// =========================================================================

bool FUN_715121b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = FUN_7141a314(2);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    uStack_1c = 0x3f800000;
    uStack_20 = 0x3f800000;
    uStack_24 = 0x3f800000;
    uStack_28 = 0x3f800000;
    FUN_7141a72c(iVar1,&uStack_28);
    iVar1 = FUN_7141faac();
    bVar3 = false;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_7141d104();
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 != 0) {
        uStack_30 = 0x42480000;
        uStack_34 = 0;
        uStack_38 = 0;
        FUN_7141d918(iVar1,&uStack_38,1);
        uStack_38 = 0x3f800000;
        uVar2 = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)((uint)&uStack_38 | 4) = 0;
        ((undefined4 *)((uint)&uStack_38 | 4))[1] = 0;
        FUN_7141dd5c(uVar2,&uStack_38,0x42b40000,1);
        iVar1 = FUN_7143b470(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0,1);
        bVar3 = iVar1 != 0;
        *(int *)(param_1 + 0x10) = iVar1;
        if (bVar3) {
          *(int *)(*(int *)(param_1 + 4) + 100) = iVar1;
          FUN_7141ea34(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
          FUN_7141feb0(*(undefined4 *)(param_1 + 4),0x43960000);
          FUN_714202f0(*(undefined4 *)(param_1 + 4),0x3e99999a);
          uStack_3c = 0x3f000000;
          uStack_40 = 0x3f000000;
          FUN_71420728(*(undefined4 *)(param_1 + 4),&uStack_40);
          FUN_71420b60(*(undefined4 *)(param_1 + 4),1);
          FUN_714119dc(*DAT_70ffc978,*(undefined4 *)(param_1 + 4));
        }
      }
    }
  }
  return bVar3;
}


// =========================================================================
// Function: FUN_715128e0
// Entry: 0x715128e0 | Size: 76 bytes
// =========================================================================

undefined4 *
FUN_715128e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 0x1d) = param_4;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  iVar1 = FUN_715121b8(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1;
}


// =========================================================================
// Function: FUN_71512960
// Entry: 0x71512960 | Size: 448 bytes
// =========================================================================

void FUN_71512960(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 7) == '\0') {
    return;
  }
  uVar2 = FUN_7143b470(param_1[5],param_1[6],0x20,0x10505);
  uVar3 = FUN_7143cf50();
  *param_1 = uVar3;
  *(undefined4 *)(param_1[1] + 0x60) = uVar2;
  FUN_7148e65c(param_1[1]);
  uStack_14 = 0xffffffff;
  FUN_71420f90(param_1[1],&uStack_14,3);
  iVar1 = FUN_7141f27c(param_1[1]);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 0x1e) = 1;
    FUN_71411e14(*DAT_70ffc978,param_1[2]);
    if (*(char *)((int)param_1 + 0x1d) != '\0') {
      FUN_71413b60(6,0);
      FUN_71413b60(8,0);
      FUN_71413b60(0xc,1);
      FUN_71413b60(10,5);
      FUN_71413b60(0xb,6);
      FUN_71413b60(0xe,0);
      FUN_71413b60(0x14,1);
      FUN_71413b60(0xd,0);
      FUN_71413b60(0x1d,5);
      FUN_71413b60(0x1e,2);
      FUN_71413b60(9,6);
      FUN_71413b60(2,3);
      FUN_7140e438();
      return;
    }
    FUN_71413b60(6,1);
    FUN_71413b60(8,1);
    FUN_71413b60(7,0);
    FUN_71413b60(0x1e,0);
    FUN_71413b60(0x14,0);
    FUN_71413b60(0xe,0);
    FUN_7140e03c();
    return;
  }
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  return;
}


// =========================================================================
// Function: FUN_71512a44
// Entry: 0x71512a44 | Size: 24 bytes
// =========================================================================

undefined4 FUN_71512a44(undefined4 *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 7) == '\0') {
    return 0;
  }
  if (*(char *)((int)param_1 + 0x1e) != '\0') {
    FUN_7141f690(param_1[1]);
    FUN_71412244(*DAT_70ffc978,param_1[2]);
  }
  uVar5 = *param_1;
  pcVar1 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c334c);
  if (*pcVar1 == '\0') {
    puVar3 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c333c);
    *puVar3 = 0x71badd61;
    puVar3[1] = 0x755b640e;
    *(undefined1 *)(puVar3 + 2) = 1;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71512d90,puVar3,&DAT_70b0e000);
    puVar4 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c334c);
    *puVar4 = 1;
  }
  pbVar2 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c333c);
  if (pbVar2[8] != 0) {
    pbVar2[8] = 0;
    *pbVar2 = *pbVar2 ^ 0x13;
    pbVar2[1] = pbVar2[1] ^ 0xa9;
    pbVar2[2] = pbVar2[2] ^ 0xdb;
    pbVar2[3] = pbVar2[3] ^ 3;
    pbVar2[4] = pbVar2[4] ^ 0x69;
    pbVar2[5] = pbVar2[5] ^ 1;
    pbVar2[6] = pbVar2[6] ^ 0x2f;
    pbVar2[7] = pbVar2[7] ^ 0x75;
  }
  FUN_7143d788(uVar5);
  *param_1 = 0;
  *(undefined4 *)(param_1[1] + 0x60) = 0;
  return uVar5;
}


// =========================================================================
// Function: FUN_71512e08
// Entry: 0x71512e08 | Size: 1232 bytes
// =========================================================================

void FUN_71512e08(byte *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbStack_54;
  byte *pbStack_50;
  byte *pbStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int iStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  ushort auStack_30 [4];
  undefined4 uStack_28;
  
  pbVar12 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar12 = param_1 + 1;
  }
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c336c);
  if (*pcVar2 == '\0') {
    puVar6 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c335c);
    *puVar6 = 0x1d511b7;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_715136f0,puVar6,&DAT_70b0e000);
    puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c336c);
    *puVar8 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c335c);
  if (pbVar3[3] != 0) {
    pbVar3[3] = 0;
    *pbVar3 = *pbVar3 ^ 0xc5;
    pbVar3[1] = pbVar3[1] ^ 0x73;
    pbVar3[2] = pbVar3[2] ^ 0xd5;
  }
  iVar4 = FUN_71339d5c(pbVar12);
  if (iVar4 != 0) {
    auStack_30[0] = 0;
    iVar5 = FUN_7133481c(iVar4,auStack_30,1);
    if (iVar5 != 0) {
      do {
        FUN_718862b0(&pbStack_3c,auStack_30,0x20,1);
        if (2 < (uint)(((int)pbStack_38 - (int)pbStack_3c >> 2) * -0x55555555)) {
          iVar5 = 0;
          uVar14 = 1;
          pbStack_4c = (byte *)0x0;
          pbStack_50 = (byte *)0x0;
          pbStack_54 = (byte *)0x0;
          do {
            pbVar12 = pbStack_50;
            if (pbStack_50 < pbStack_4c) {
              if ((pbStack_3c[iVar5 + 0xc] & 1) == 0) {
                uVar11 = *(undefined4 *)(pbStack_3c + iVar5 + 0x10);
                uVar9 = *(undefined4 *)(pbStack_3c + iVar5 + 0x14);
                *(undefined4 *)pbStack_50 = *(undefined4 *)(pbStack_3c + iVar5 + 0xc);
                *(undefined4 *)(pbStack_50 + 4) = uVar11;
                *(undefined4 *)(pbStack_50 + 8) = uVar9;
                pbVar12 = pbStack_50 + 0xc;
              }
              else {
                FUN_712f6d58(pbStack_50,*(undefined4 *)(pbStack_3c + iVar5 + 0x14),
                             *(undefined4 *)(pbStack_3c + iVar5 + 0x10));
                pbVar12 = pbVar12 + 0xc;
              }
            }
            else {
              pbVar12 = (byte *)FUN_71513848(&pbStack_54);
            }
            pbVar3 = pbStack_54;
            iVar5 = iVar5 + 0xc;
            uVar14 = uVar14 + 1;
            pbStack_50 = pbVar12;
          } while (uVar14 < (uint)(((int)pbStack_38 - (int)pbStack_3c >> 2) * -0x55555555));
          iStack_40 = 0;
          puStack_44 = (undefined4 *)0x0;
          puStack_48 = (undefined4 *)0x0;
          pbVar10 = pbVar12;
          puVar6 = puStack_44;
          if (pbVar12 != pbStack_54) {
            iVar5 = (int)pbVar12 - (int)pbStack_54;
            if (0x15555555 < (uint)((iVar5 >> 2) * -0x55555555)) {
                    /* WARNING: Subroutine does not return */
              FUN_712f6ffc(&puStack_48);
            }
            puVar6 = (undefined4 *)thunk_MwhHq(iVar5);
            iStack_40 = (int)puVar6 + iVar5;
            puStack_48 = puVar6;
            do {
              if ((*pbVar3 & 1) == 0) {
                uVar9 = *(undefined4 *)(pbVar3 + 4);
                uVar11 = *(undefined4 *)(pbVar3 + 8);
                *puVar6 = *(undefined4 *)pbVar3;
                puVar6[1] = uVar9;
                puVar6[2] = uVar11;
              }
              else {
                FUN_712f6d58(puVar6,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 4));
              }
              pbVar3 = pbVar3 + 0xc;
              puVar6 = puVar6 + 3;
              pbVar10 = pbStack_54;
            } while (pbVar3 != pbVar12);
          }
          puStack_44 = puVar6;
          pbVar12 = pbVar10;
          pbVar3 = pbStack_50;
          if (pbVar10 != (byte *)0x0) {
            while (pbVar1 = pbVar3, pbVar1 != pbVar10) {
              pbVar3 = pbVar1 + -0xc;
              pbVar12 = pbStack_54;
              if ((*pbVar3 & 1) != 0) {
                thunk_qNQrlu(*(undefined4 *)(pbVar1 + -4));
                pbVar12 = pbStack_54;
              }
            }
            pbStack_50 = pbVar10;
            thunk_qNQrlu(pbVar12);
          }
          pbVar12 = *(byte **)(pbStack_3c + 8);
          if ((*pbStack_3c & 1) == 0) {
            pbVar12 = pbStack_3c + 1;
          }
          uVar14 = imp_atoi(pbVar12);
          puVar6 = &DAT_71174d10;
          puVar7 = DAT_71174d10;
          while (puVar13 = puVar6, puVar7 != (undefined4 *)0x0) {
            while (puVar6 = puVar7, (uint)puVar6[4] <= uVar14) {
              if (uVar14 <= (uint)puVar6[4]) goto LAB_715131b0;
              puVar7 = (undefined4 *)puVar6[1];
              if ((undefined4 *)puVar6[1] == (undefined4 *)0x0) {
                puVar13 = puVar6 + 1;
                goto LAB_71513144;
              }
            }
            puVar7 = (undefined4 *)*puVar6;
          }
LAB_71513144:
          puVar7 = (undefined4 *)thunk_MwhHq(0x20);
          puVar7[4] = uVar14;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = puVar6;
          *puVar13 = puVar7;
          puVar6 = puVar7;
          if ((int *)*DAT_71174d0c != (int *)0x0) {
            puVar6 = (undefined4 *)*puVar13;
            DAT_71174d0c = (int *)*DAT_71174d0c;
          }
          FUN_712f807c(DAT_71174d10,puVar6);
          DAT_71174d14 = DAT_71174d14 + 1;
          puVar6 = puVar7;
LAB_715131b0:
          pbVar12 = (byte *)puVar6[5];
          if (pbVar12 != (byte *)0x0) {
            pbVar10 = (byte *)puVar6[6];
            pbVar3 = pbVar12;
            if (pbVar10 != pbVar12) {
              do {
                pbVar3 = pbVar10 + -0xc;
                if ((*pbVar3 & 1) != 0) {
                  thunk_qNQrlu(*(undefined4 *)(pbVar10 + -4));
                }
                pbVar10 = pbVar3;
              } while (pbVar3 != pbVar12);
              pbVar3 = (byte *)puVar6[5];
            }
            puVar6[6] = pbVar12;
            thunk_qNQrlu(pbVar3);
          }
          puVar6[5] = puStack_48;
          puVar6[6] = puStack_44;
          puVar6[7] = iStack_40;
        }
        pbVar12 = pbStack_3c;
        if (pbStack_3c != (byte *)0x0) {
          while (pbVar3 = pbStack_38, pbVar3 != pbVar12) {
            pbStack_38 = pbVar3 + -0xc;
            if ((*pbStack_38 & 1) != 0) {
              thunk_qNQrlu(*(undefined4 *)(pbVar3 + -4));
            }
          }
          pbStack_38 = pbVar12;
          thunk_qNQrlu(pbStack_3c);
        }
        iVar5 = FUN_7133481c(iVar4,auStack_30,1);
      } while (iVar5 != 0);
    }
    if ((auStack_30[0] & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_71513718
// Entry: 0x71513718 | Size: 140 bytes
// =========================================================================

void FUN_71513718(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_71513718(param_1,*param_2);
    FUN_71513718(param_1,param_2[1]);
    pbVar2 = (byte *)param_2[5];
    if (pbVar2 != (byte *)0x0) {
      pbVar1 = (byte *)param_2[6];
      pbVar3 = pbVar2;
      if (pbVar1 != pbVar2) {
        do {
          pbVar3 = pbVar1 + -0xc;
          if ((*pbVar3 & 1) != 0) {
            thunk_qNQrlu(*(undefined4 *)(pbVar1 + -4));
          }
          pbVar1 = pbVar3;
        } while (pbVar3 != pbVar2);
        pbVar3 = (byte *)param_2[5];
      }
      param_2[6] = pbVar2;
      thunk_qNQrlu(pbVar3);
    }
    thunk_qNQrlu(param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71513848
// Entry: 0x71513848 | Size: 280 bytes
// =========================================================================

undefined4 * FUN_71513848(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = *param_1;
  iVar4 = param_1[1] - iVar7;
  uVar5 = (iVar4 >> 2) * -0x55555555 + 1;
  if (0x15555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6ffc(param_1);
  }
  iVar1 = param_1[2] - iVar7 >> 2;
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
  puVar6 = (undefined4 *)(iVar1 + (iVar4 >> 2) * 4);
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    *puVar6 = *(undefined4 *)param_2;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
  }
  else {
    FUN_712f6d58(puVar6,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    iVar7 = *param_1;
    iVar4 = param_1[1] - iVar7;
  }
  imp___aeabi_memcpy4((int)puVar6 - iVar4,iVar7,iVar4);
  *param_1 = (int)puVar6 - iVar4;
  param_1[1] = (int)(puVar6 + 3);
  param_1[2] = iVar1 + uVar5 * 0xc;
  if (iVar7 != 0) {
    thunk_qNQrlu(iVar7);
  }
  return puVar6 + 3;
}


// =========================================================================
// Function: FUN_71513b34
// Entry: 0x71513b34 | Size: 7256 bytes
// =========================================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71513b34(byte *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined2 *puVar30;
  undefined1 *puVar31;
  byte *pbVar32;
  byte bVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined4 *puVar36;
  uint uVar37;
  uint uVar38;
  uint uStack_b0;
  uint uStack_ac;
  byte *pbStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_8c;
  byte *pbStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint *puStack_5c;
  uint *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  char *pcStack_48;
  byte *pbStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  undefined1 uStack_2d;
  uint *apuStack_2c [2];
  
  FUN_71517b14(&DAT_71174d18,DAT_71174d1c);
  DAT_71174d18 = &DAT_71174d1c;
  DAT_71174d20 = 0;
  DAT_71174d1c = 0;
  pbVar34 = *(byte **)(param_1 + 8);
  if ((*param_1 & 1) == 0) {
    pbVar34 = param_1 + 1;
  }
  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c338c);
  if (*pcVar4 == '\0') {
    puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c337c);
    *puVar36 = 0x195adcd;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517910,puVar36,&DAT_70b0e000);
    puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c338c);
    *puVar31 = 1;
  }
  pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c337c);
  if (pbVar5[3] != 0) {
    pbVar5[3] = 0;
    *pbVar5 = *pbVar5 ^ 0xbf;
    pbVar5[1] = pbVar5[1] ^ 0xcf;
    pbVar5[2] = pbVar5[2] ^ 0x95;
  }
  iVar6 = FUN_71339d5c(pbVar34);
  if (iVar6 != 0) {
    pcStack_48 = (char *)0x0;
    uStack_4c = 0;
    uStack_50 = 0;
    iVar7 = FUN_7133481c(iVar6,&uStack_50,1);
    if (iVar7 != 0) {
      pbVar34 = (byte *)((uint)&pbStack_40 | 1);
      pbVar5 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c339c);
      pbVar8 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33bc);
      pbVar9 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33dc);
      pbVar10 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33fc);
      pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c341c);
      pbVar12 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c343c);
      pbVar13 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c345c);
      pbVar14 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c347c);
      pbVar15 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c349c);
      pbVar16 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34bc);
      pbVar17 = (byte *)((uint)&uStack_b0 | 1);
      pbVar18 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34dc);
      pbVar19 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34fc);
      pbVar20 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c351c);
      pbVar21 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c353c);
      do {
        uVar37 = uStack_4c;
        if ((uStack_50 & 1) == 0) {
          uVar37 = uStack_50 >> 1 & 0x7f;
        }
        if (uVar37 != 0) {
          pcVar4 = pcStack_48;
          if ((uStack_50 & 1) == 0) {
            pcVar4 = (char *)((uint)&uStack_50 | 1);
          }
          if (*pcVar4 != '#') {
            FUN_718862b0(&puStack_5c,&uStack_50,0x20,1);
            if (7 < (uint)(((int)puStack_58 - (int)puStack_5c >> 2) * -0x55555555)) {
              pbStack_88 = (byte *)0x0;
              pbStack_8c = (byte *)0x0;
              pbStack_90 = (byte *)0x0;
              if ((*puStack_5c & 1) == 0) {
                uStack_a0 = *puStack_5c;
                uStack_9c = puStack_5c[1];
                pbStack_98 = (byte *)puStack_5c[2];
              }
              else {
                FUN_712f6d58(&uStack_a0,puStack_5c[2],puStack_5c[1]);
              }
              FUN_7188617c(&uStack_a0);
              uVar37 = uStack_9c;
              pbVar32 = pbStack_98;
              if ((uStack_a0 & 1) == 0) {
                uVar37 = uStack_a0 >> 1 & 0x7f;
                pbVar32 = (byte *)((uint)&uStack_a0 | 1);
              }
              for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                bVar33 = *pbVar32;
                if (0xffffffe5 < bVar33 - 0x5b) {
                  bVar33 = bVar33 | 0x20;
                }
                *pbVar32 = bVar33;
                pbVar32 = pbVar32 + 1;
              }
              if ((puStack_5c[3] & 1) == 0) {
                pbStack_40 = (byte *)puStack_5c[3];
                pbStack_3c = (byte *)puStack_5c[4];
                pbStack_38 = (byte *)puStack_5c[5];
              }
              else {
                FUN_712f6d58(&pbStack_40,puStack_5c[5],puStack_5c[4]);
              }
              FUN_7188617c(&pbStack_40);
              pbVar32 = pbStack_3c;
              pbVar22 = pbStack_38;
              if (((uint)pbStack_40 & 1) == 0) {
                pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                pbVar22 = pbVar34;
              }
              for (; pbVar32 != (byte *)0x0; pbVar32 = pbVar32 + -1) {
                bVar33 = *pbVar22;
                if (0xffffffe5 < bVar33 - 0x5b) {
                  bVar33 = bVar33 | 0x20;
                }
                *pbVar22 = bVar33;
                pbVar22 = pbVar22 + 1;
              }
              if (((uint)pbStack_90 & 1) != 0) {
                thunk_qNQrlu(pbStack_88);
              }
              pbStack_90 = pbStack_40;
              pbStack_8c = pbStack_3c;
              pbStack_88 = pbStack_38;
              uVar37 = uStack_9c;
              if ((uStack_a0 & 1) == 0) {
                uVar37 = uStack_a0 >> 1 & 0x7f;
              }
              if (uVar37 != 0) {
                pbVar32 = pbStack_3c;
                if (((uint)pbStack_40 & 1) == 0) {
                  pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                }
                if (pbVar32 != (byte *)0x0) {
                  if ((puStack_5c[6] & 1) == 0) {
                    pbStack_40 = (byte *)puStack_5c[6];
                    pbStack_3c = (byte *)puStack_5c[7];
                    pbStack_38 = (byte *)puStack_5c[8];
                  }
                  else {
                    FUN_712f6d58(&pbStack_40,puStack_5c[8],puStack_5c[7]);
                  }
                  FUN_7188617c(&pbStack_40);
                  pbVar32 = pbStack_3c;
                  pbVar22 = pbStack_38;
                  if (((uint)pbStack_40 & 1) == 0) {
                    pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    pbVar22 = pbVar34;
                  }
                  for (; pbVar32 != (byte *)0x0; pbVar32 = pbVar32 + -1) {
                    bVar33 = *pbVar22;
                    if (0xffffffe5 < bVar33 - 0x5b) {
                      bVar33 = bVar33 | 0x20;
                    }
                    *pbVar22 = bVar33;
                    pbVar22 = pbVar22 + 1;
                  }
                  pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33ac);
                  if (*pcVar4 == '\0') {
                    puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c339c);
                    *(undefined2 *)(puVar36 + 2) = 0x135;
                    *puVar36 = 0xa09725c;
                    puVar36[1] = 0x9b3c8c13;
                    thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517938,puVar36,&DAT_70b0e000);
                    puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33ac);
                    *puVar31 = 1;
                  }
                  if (pbVar5[9] != 0) {
                    *pbVar5 = *pbVar5 ^ 0x35;
                    pbVar5[1] = pbVar5[1] ^ 0x15;
                    pbVar5[2] = pbVar5[2] ^ 0x67;
                    pbVar5[3] = pbVar5[3] ^ 99;
                    pbVar5[9] = 0;
                    pbVar5[4] = pbVar5[4] ^ 0x67;
                    pbVar5[5] = pbVar5[5] ^ 0xe5;
                    pbVar5[6] = pbVar5[6] ^ 0x53;
                    pbVar5[7] = pbVar5[7] ^ 0xf5;
                    pbVar5[8] = pbVar5[8] ^ 0x35;
                  }
                  pbVar22 = (byte *)imp_strlen(pbVar5);
                  uVar37 = (uint)pbStack_40 & 1;
                  pbVar32 = pbStack_3c;
                  if (((uint)pbStack_40 & 1) == 0) {
                    pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                  }
                  if (pbVar22 == pbVar32) {
                    if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                    pbVar32 = pbStack_38;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = pbVar34;
                    }
                    iVar7 = imp_memcmp(pbVar32,pbVar5);
                    if (iVar7 != 0) goto LAB_715140ac;
                    uStack_84 = 0;
LAB_715146bc:
                    bVar1 = true;
                  }
                  else {
LAB_715140ac:
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33cc);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33bc);
                      *(undefined1 *)((int)puVar36 + 6) = 1;
                      *puVar36 = 0xacea23ea;
                      *(undefined2 *)(puVar36 + 1) = 0x97ef;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517964,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33cc);
                      *puVar31 = 1;
                    }
                    if (pbVar8[6] != 0) {
                      *pbVar8 = *pbVar8 ^ 0x99;
                      pbVar8[1] = pbVar8[1] ^ 0x53;
                      pbVar8[2] = pbVar8[2] ^ 0x8f;
                      pbVar8[3] = pbVar8[3] ^ 0xc9;
                      pbVar8[6] = 0;
                      pbVar8[4] = pbVar8[4] ^ 0x8b;
                      pbVar8[5] = pbVar8[5] ^ 0x97;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar8);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar8);
                      if (iVar7 == 0) {
                        uStack_84 = 1;
                        goto LAB_715146bc;
                      }
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33ec);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33dc);
                      *(undefined1 *)((int)puVar36 + 10) = 1;
                      *puVar36 = 0xe173ea8f;
                      puVar36[1] = 0xf0b4e7cd;
                      *(undefined2 *)(puVar36 + 2) = 0x8b82;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151798c,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33ec);
                      *puVar31 = 1;
                    }
                    if (pbVar9[10] != 0) {
                      *pbVar9 = *pbVar9 ^ 0xe7;
                      pbVar9[1] = pbVar9[1] ^ 0x8b;
                      pbVar9[2] = pbVar9[2] ^ 0x1d;
                      pbVar9[3] = pbVar9[3] ^ 0x85;
                      pbVar9[10] = 0;
                      pbVar9[4] = pbVar9[4] ^ 0xaf;
                      pbVar9[5] = pbVar9[5] ^ 0x95;
                      pbVar9[6] = pbVar9[6] ^ 0xd5;
                      pbVar9[7] = pbVar9[7] ^ 0x9b;
                      pbVar9[8] = pbVar9[8] ^ 0xe7;
                      pbVar9[9] = pbVar9[9] ^ 0x8b;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar9);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar9);
                      if (iVar7 == 0) {
                        uStack_84 = 2;
                        goto LAB_715146bc;
                      }
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c340c);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c33fc);
                      *(undefined1 *)(puVar36 + 2) = 1;
                      *puVar36 = 0xdee53601;
                      puVar36[1] = 0x3986b2e9;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715179b8,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c340c);
                      *puVar31 = 1;
                    }
                    if (pbVar10[8] != 0) {
                      *pbVar10 = *pbVar10 ^ 0x73;
                      pbVar10[1] = pbVar10[1] ^ 0x53;
                      pbVar10[2] = pbVar10[2] ^ 0x93;
                      pbVar10[3] = pbVar10[3] ^ 0xbb;
                      pbVar10[8] = 0;
                      pbVar10[4] = pbVar10[4] ^ 0x9b;
                      pbVar10[5] = pbVar10[5] ^ 0xc1;
                      pbVar10[6] = pbVar10[6] ^ 0xe3;
                      pbVar10[7] = pbVar10[7] ^ 0x39;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar10);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar10);
                      if (iVar7 == 0) {
                        uStack_84 = 3;
                        goto LAB_715146bc;
                      }
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c342c);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c341c);
                      *(undefined1 *)((int)puVar36 + 6) = 1;
                      *puVar36 = 0x7f108853;
                      *(undefined2 *)(puVar36 + 1) = 0x41aa;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_715179e0,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c342c);
                      *puVar31 = 1;
                    }
                    if (pbVar11[6] != 0) {
                      *pbVar11 = *pbVar11 ^ 0x37;
                      pbVar11[1] = pbVar11[1] ^ 0xe7;
                      pbVar11[2] = pbVar11[2] ^ 0x7f;
                      pbVar11[3] = pbVar11[3] ^ 0xd;
                      pbVar11[6] = 0;
                      pbVar11[4] = pbVar11[4] ^ 0xd9;
                      pbVar11[5] = pbVar11[5] ^ 0x41;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar11);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar11);
                      if (iVar7 == 0) {
                        uStack_84 = 4;
                        goto LAB_715146bc;
                      }
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c344c);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c343c);
                      *(undefined1 *)((int)puVar36 + 7) = 1;
                      *puVar36 = 0x1ddf22ea;
                      *(undefined4 *)((int)puVar36 + 3) = 0x7f05461d;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517a08,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c344c);
                      *puVar31 = 1;
                    }
                    if (pbVar12[7] != 0) {
                      *pbVar12 = *pbVar12 ^ 0x99;
                      pbVar12[1] = pbVar12[1] ^ 0x47;
                      pbVar12[2] = pbVar12[2] ^ 0xad;
                      pbVar12[3] = pbVar12[3] ^ 0x6b;
                      pbVar12[7] = 0;
                      pbVar12[4] = pbVar12[4] ^ 0x23;
                      pbVar12[5] = pbVar12[5] ^ 0x77;
                      pbVar12[6] = pbVar12[6] ^ 0x7f;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar12);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar12);
                      if (iVar7 == 0) {
                        uStack_84 = 5;
                        goto LAB_715146bc;
                      }
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c346c);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c345c);
                      *(undefined1 *)(puVar36 + 1) = 1;
                      *puVar36 = 0xf9e25ae0;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517a30,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c346c);
                      *puVar31 = 1;
                    }
                    if (pbVar13[4] != 0) {
                      *pbVar13 = *pbVar13 ^ 0x87;
                      pbVar13[1] = pbVar13[1] ^ 0x3b;
                      pbVar13[2] = pbVar13[2] ^ 0x91;
                      pbVar13[4] = 0;
                      pbVar13[3] = pbVar13[3] ^ 0xf9;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar13);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar13);
                      if (iVar7 == 0) {
                        uStack_84 = 6;
                        goto LAB_715146bc;
                      }
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c348c);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c347c);
                      *(undefined2 *)(puVar36 + 3) = 0x1af;
                      *puVar36 = 0xf4760aba;
                      puVar36[1] = 0x186d2cdd;
                      puVar36[2] = 0xcf6018bc;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_713aa304,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c348c);
                      *puVar31 = 1;
                    }
                    if (pbVar14[0xd] != 0) {
                      *pbVar14 = *pbVar14 ^ 0xdd;
                      pbVar14[1] = pbVar14[1] ^ 0x6b;
                      pbVar14[2] = pbVar14[2] ^ 5;
                      pbVar14[3] = pbVar14[3] ^ 0xab;
                      pbVar14[0xd] = 0;
                      pbVar14[4] = pbVar14[4] ^ 0xaf;
                      pbVar14[5] = pbVar14[5] ^ 0x49;
                      pbVar14[6] = pbVar14[6] ^ 1;
                      pbVar14[7] = pbVar14[7] ^ 0x7d;
                      pbVar14[8] = pbVar14[8] ^ 0xdd;
                      pbVar14[9] = pbVar14[9] ^ 0x6b;
                      pbVar14[10] = pbVar14[10] ^ 5;
                      pbVar14[0xb] = pbVar14[0xb] ^ 0xab;
                      pbVar14[0xc] = pbVar14[0xc] ^ 0xaf;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar14);
                    bVar1 = false;
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar14);
                      if (iVar7 == 0) {
                        uStack_84 = 7;
                        goto LAB_715146bc;
                      }
                    }
                  }
                  if (uVar37 != 0) {
                    thunk_qNQrlu(pbStack_38);
                  }
                  if (bVar1) {
                    if ((puStack_5c[0xc] & 1) == 0) {
                      pbStack_40 = (byte *)puStack_5c[0xc];
                      pbStack_3c = (byte *)puStack_5c[0xd];
                      pbStack_38 = (byte *)puStack_5c[0xe];
                    }
                    else {
                      FUN_712f6d58(&pbStack_40,puStack_5c[0xe],puStack_5c[0xd]);
                    }
                    FUN_7188617c(&pbStack_40);
                    pbVar32 = pbStack_3c;
                    pbVar22 = pbStack_38;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                      pbVar22 = pbVar34;
                    }
                    for (; pbVar32 != (byte *)0x0; pbVar32 = pbVar32 + -1) {
                      bVar33 = *pbVar22;
                      if (0xffffffe5 < bVar33 - 0x5b) {
                        bVar33 = bVar33 | 0x20;
                      }
                      *pbVar22 = bVar33;
                      pbVar22 = pbVar22 + 1;
                    }
                    pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34ac);
                    if (*pcVar4 == '\0') {
                      puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c349c);
                      *(undefined1 *)((int)puVar36 + 7) = 1;
                      *puVar36 = 0x2aa5c6db;
                      *(undefined4 *)((int)puVar36 + 3) = 0x2bac012a;
                      thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517a54,puVar36,&DAT_70b0e000);
                      puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34ac);
                      *puVar31 = 1;
                    }
                    if (pbVar15[7] != 0) {
                      *pbVar15 = *pbVar15 ^ 0xa9;
                      pbVar15[1] = pbVar15[1] ^ 0xa9;
                      pbVar15[2] = pbVar15[2] ^ 0xd1;
                      pbVar15[3] = pbVar15[3] ^ 0x4b;
                      pbVar15[7] = 0;
                      pbVar15[4] = pbVar15[4] ^ 0x75;
                      pbVar15[5] = pbVar15[5] ^ 0xc9;
                      pbVar15[6] = pbVar15[6] ^ 0x2b;
                    }
                    pbVar22 = (byte *)imp_strlen(pbVar15);
                    uVar37 = (uint)pbStack_40 & 1;
                    pbVar32 = pbStack_3c;
                    if (((uint)pbStack_40 & 1) == 0) {
                      pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                    }
                    if (pbVar22 == pbVar32) {
                      if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                      pbVar32 = pbStack_38;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = pbVar34;
                      }
                      iVar7 = imp_memcmp(pbVar32,pbVar15);
                      if (iVar7 != 0) goto LAB_71514830;
                      uStack_80 = 0;
LAB_71514930:
                      bVar1 = true;
                    }
                    else {
LAB_71514830:
                      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34cc);
                      if (*pcVar4 == '\0') {
                        puVar36 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34bc);
                        *(undefined1 *)((int)puVar36 + 10) = 1;
                        *puVar36 = 0x718eed09;
                        puVar36[1] = 0xb974e57c;
                        *(undefined2 *)(puVar36 + 2) = 0x9f18;
                        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517a7c,puVar36,&DAT_70b0e000);
                        puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34cc);
                        *puVar31 = 1;
                      }
                      if (pbVar16[10] != 0) {
                        *pbVar16 = *pbVar16 ^ 0x7d;
                        pbVar16[1] = pbVar16[1] ^ 0x9f;
                        pbVar16[2] = pbVar16[2] ^ 0xef;
                        pbVar16[3] = pbVar16[3] ^ 0x1f;
                        pbVar16[10] = 0;
                        pbVar16[4] = pbVar16[4] ^ 0xf;
                        pbVar16[5] = pbVar16[5] ^ 0x89;
                        pbVar16[6] = pbVar16[6] ^ 0x15;
                        pbVar16[7] = pbVar16[7] ^ 0xcd;
                        pbVar16[8] = pbVar16[8] ^ 0x7d;
                        pbVar16[9] = pbVar16[9] ^ 0x9f;
                      }
                      pbVar22 = (byte *)imp_strlen(pbVar16);
                      bVar1 = false;
                      uVar37 = (uint)pbStack_40 & 1;
                      pbVar32 = pbStack_3c;
                      if (((uint)pbStack_40 & 1) == 0) {
                        pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                      }
                      if (pbVar22 == pbVar32) {
                        if (pbVar22 == (byte *)0xffffffff) goto LAB_715157e4;
                        pbVar32 = pbStack_38;
                        if (((uint)pbStack_40 & 1) == 0) {
                          pbVar32 = pbVar34;
                        }
                        iVar7 = imp_memcmp(pbVar32,pbVar16);
                        if (iVar7 == 0) {
                          uStack_80 = 1;
                          goto LAB_71514930;
                        }
                      }
                    }
                    if (uVar37 != 0) {
                      thunk_qNQrlu(pbStack_38);
                    }
                    if (bVar1) {
                      if ((puStack_5c[0xf] & 1) == 0) {
                        uStack_b0 = puStack_5c[0xf];
                        uStack_ac = puStack_5c[0x10];
                        pbStack_a8 = (byte *)puStack_5c[0x11];
                      }
                      else {
                        FUN_712f6d58(&uStack_b0,puStack_5c[0x11],puStack_5c[0x10]);
                      }
                      FUN_7188617c(&uStack_b0);
                      uVar37 = uStack_ac;
                      pbVar32 = pbStack_a8;
                      if ((uStack_b0 & 1) == 0) {
                        uVar37 = uStack_b0 >> 1 & 0x7f;
                        pbVar32 = pbVar17;
                      }
                      for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                        bVar33 = *pbVar32;
                        if (0xffffffe5 < bVar33 - 0x5b) {
                          bVar33 = bVar33 | 0x20;
                        }
                        *pbVar32 = bVar33;
                        pbVar32 = pbVar32 + 1;
                      }
                      uStack_74 = 0;
                      uStack_78 = 0;
                      uStack_70 = 0;
                      pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34ec);
                      if (*pcVar4 == '\0') {
                        puVar30 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34dc);
                        *puVar30 = 0x9981;
                        *(undefined1 *)(puVar30 + 1) = 1;
                        thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517aa8,puVar30,&DAT_70b0e000);
                        puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34ec);
                        *puVar31 = 1;
                      }
                      if (pbVar18[2] != 0) {
                        pbVar18[2] = 0;
                        *pbVar18 = *pbVar18 ^ 0xf9;
                        pbVar18[1] = pbVar18[1] ^ 0x99;
                      }
                      uVar23 = imp_strlen();
                      uVar38 = uStack_b0 & 1;
                      uVar37 = uStack_ac;
                      if ((uStack_b0 & 1) == 0) {
                        uVar37 = uStack_b0 >> 1 & 0x7f;
                      }
                      if (uVar23 == uVar37) {
                        if (uVar23 == 0xffffffff) goto LAB_715157ec;
                        pbVar32 = pbStack_a8;
                        if ((uStack_b0 & 1) == 0) {
                          pbVar32 = pbVar17;
                        }
                        iVar7 = imp_memcmp(pbVar32,pbVar18);
                        puVar36 = &uStack_78;
                        if (iVar7 != 0) goto LAB_71514ac0;
LAB_715152f0:
                        bVar1 = true;
                        *puVar36 = 0x3f800000;
                      }
                      else {
LAB_71514ac0:
                        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c350c);
                        if (*pcVar4 == '\0') {
                          puVar30 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c34fc);
                          *puVar30 = 0x1faa;
                          *(undefined1 *)(puVar30 + 1) = 1;
                          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71461358,puVar30,&DAT_70b0e000);
                          puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c350c);
                          *puVar31 = 1;
                        }
                        if (pbVar19[2] != 0) {
                          pbVar19[2] = 0;
                          *pbVar19 = *pbVar19 ^ 0xd3;
                          pbVar19[1] = pbVar19[1] ^ 0x1f;
                        }
                        uVar23 = imp_strlen();
                        uVar38 = uStack_b0 & 1;
                        uVar37 = uStack_ac;
                        if ((uStack_b0 & 1) == 0) {
                          uVar37 = uStack_b0 >> 1 & 0x7f;
                        }
                        if (uVar23 == uVar37) {
                          if (uVar23 == 0xffffffff) goto LAB_715157ec;
                          pbVar32 = pbStack_a8;
                          if ((uStack_b0 & 1) == 0) {
                            pbVar32 = pbVar17;
                          }
                          iVar7 = imp_memcmp(pbVar32,pbVar19);
                          puVar36 = &uStack_74;
                          if (iVar7 == 0) goto LAB_715152f0;
                        }
                        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c352c);
                        if (*pcVar4 == '\0') {
                          puVar30 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c351c);
                          *puVar30 = 0x59b7;
                          *(undefined1 *)(puVar30 + 1) = 1;
                          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517acc,puVar30,&DAT_70b0e000);
                          puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c352c);
                          *puVar31 = 1;
                        }
                        if (pbVar20[2] != 0) {
                          pbVar20[2] = 0;
                          *pbVar20 = *pbVar20 ^ 0xcd;
                          pbVar20[1] = pbVar20[1] ^ 0x59;
                        }
                        uVar23 = imp_strlen();
                        uVar38 = uStack_b0 & 1;
                        uVar37 = uStack_ac;
                        if ((uStack_b0 & 1) == 0) {
                          uVar37 = uStack_b0 >> 1 & 0x7f;
                        }
                        if (uVar23 == uVar37) {
                          if (uVar23 == 0xffffffff) {
LAB_715157ec:
                    /* WARNING: Subroutine does not return */
                            FUN_712f6b48(&uStack_b0);
                          }
                          pbVar32 = pbStack_a8;
                          if ((uStack_b0 & 1) == 0) {
                            pbVar32 = pbVar17;
                          }
                          iVar7 = imp_memcmp(pbVar32,pbVar20);
                          puVar36 = &uStack_70;
                          if (iVar7 == 0) goto LAB_715152f0;
                        }
                        FUN_718862b0(&pbStack_40,&uStack_b0,0x2f,1);
                        pbVar35 = pbStack_3c;
                        pbVar22 = pbStack_40;
                        pbVar32 = pbVar35;
                        if ((int)pbStack_3c - (int)pbStack_40 == 0x24) {
                          pbVar24 = *(byte **)(pbStack_40 + 8);
                          if ((*pbStack_40 & 1) == 0) {
                            pbVar24 = pbStack_40 + 1;
                          }
                          imp_atof(pbVar24);
                          uVar25 = FUN_71ba242c();
                          pbVar24 = *(byte **)(pbVar22 + 0x14);
                          if ((pbVar22[0xc] & 1) == 0) {
                            pbVar24 = pbVar22 + 0xd;
                          }
                          uStack_78 = uVar25;
                          imp_atof(pbVar24);
                          uVar26 = FUN_71ba242c();
                          pbVar24 = *(byte **)(pbVar22 + 0x20);
                          if ((pbVar22[0x18] & 1) == 0) {
                            pbVar24 = pbVar22 + 0x19;
                          }
                          uStack_74 = uVar26;
                          imp_atof(pbVar24);
                          uVar27 = FUN_71ba242c();
                          uStack_70 = uVar27;
                          uVar28 = FUN_71ba21e8(uVar26,uVar26);
                          uVar29 = FUN_71ba21e8(uVar25,uVar25);
                          uVar28 = FUN_71ba0b38(uVar29,uVar28);
                          uVar29 = FUN_71ba21e8(uVar27,uVar27);
                          FUN_71ba0b38(uVar29,uVar28);
                          uVar28 = imp_sqrtf();
                          iVar7 = FUN_71ba2d10(uVar28,0x38d1b717);
                          bVar1 = false;
                          if (iVar7 == 0) {
                            uStack_74 = FUN_71ba13e0(uVar26,uVar28);
                            uStack_78 = FUN_71ba13e0(uVar25,uVar28);
                            uStack_70 = FUN_71ba13e0(uVar27,uVar28);
                            bVar1 = true;
                          }
joined_r0x71514d34:
                          while (pbVar24 = pbVar35, pbVar24 != pbVar22) {
                            pbVar35 = pbVar24 + -0xc;
                            pbVar32 = pbStack_40;
                            if ((*pbVar35 & 1) != 0) {
                              thunk_qNQrlu(*(undefined4 *)(pbVar24 + -4));
                              pbVar32 = pbStack_40;
                            }
                          }
                          pbStack_3c = pbVar22;
                          thunk_qNQrlu(pbVar32);
                        }
                        else {
                          bVar1 = false;
                          if (pbStack_40 != (byte *)0x0) goto joined_r0x71514d34;
                        }
                        uVar38 = uStack_b0 & 1;
                      }
                      if (uVar38 != 0) {
                        thunk_qNQrlu(pbStack_a8);
                      }
                      if (bVar1) {
                        if ((puStack_5c[9] & 1) == 0) {
                          pbStack_40 = (byte *)puStack_5c[9];
                          pbStack_3c = (byte *)puStack_5c[10];
                          pbStack_38 = (byte *)puStack_5c[0xb];
                        }
                        else {
                          FUN_712f6d58(&pbStack_40,puStack_5c[0xb],puStack_5c[10]);
                        }
                        FUN_7188617c(&pbStack_40);
                        pbVar32 = pbStack_3c;
                        pbVar22 = pbStack_38;
                        if (((uint)pbStack_40 & 1) == 0) {
                          pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                          pbVar22 = pbVar34;
                        }
                        for (; pbVar32 != (byte *)0x0; pbVar32 = pbVar32 + -1) {
                          bVar33 = *pbVar22;
                          if (0xffffffe5 < bVar33 - 0x5b) {
                            bVar33 = bVar33 | 0x20;
                          }
                          *pbVar22 = bVar33;
                          pbVar22 = pbVar22 + 1;
                        }
                        pcVar4 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c354c);
                        if (*pcVar4 == '\0') {
                          puVar30 = (undefined2 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c353c);
                          *puVar30 = 0x934c;
                          *(undefined1 *)(puVar30 + 1) = 1;
                          thunk_GFDIUClbc_QcPNgD_wH(&LAB_71517af0,puVar30,&DAT_70b0e000);
                          puVar31 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c354c);
                          *puVar31 = 1;
                        }
                        if (pbVar21[2] != 0) {
                          pbVar21[2] = 0;
                          *pbVar21 = *pbVar21 ^ 0x61;
                          pbVar21[1] = pbVar21[1] ^ 0x93;
                        }
                        pbVar22 = (byte *)imp_strlen();
                        pbVar32 = pbStack_3c;
                        if (((uint)pbStack_40 & 1) == 0) {
                          pbVar32 = (byte *)((uint)pbStack_40 >> 1 & 0x7f);
                        }
                        pbVar35 = pbStack_38;
                        if (pbVar22 == pbVar32) {
                          if (pbVar22 == (byte *)0xffffffff) {
LAB_715157e4:
                    /* WARNING: Subroutine does not return */
                            FUN_712f6b48(&pbStack_40);
                          }
                          if (((uint)pbStack_40 & 1) == 0) {
                            pbVar35 = pbVar34;
                          }
                          iVar7 = imp_memcmp(pbVar35,pbVar21);
                          if (iVar7 != 0) goto LAB_71514ed4;
                          uStack_7c = 0;
                        }
                        else {
                          if (((uint)pbStack_40 & 1) == 0) {
                            pbVar35 = pbVar34;
                          }
LAB_71514ed4:
                          imp_atof(pbVar35);
                          uStack_7c = FUN_71ba242c();
                        }
                        if ((puStack_5c[0x12] & 1) == 0) {
                          uStack_b0 = puStack_5c[0x12];
                          uStack_ac = puStack_5c[0x13];
                          pbStack_a8 = (byte *)puStack_5c[0x14];
                        }
                        else {
                          FUN_712f6d58(&uStack_b0,puStack_5c[0x14],puStack_5c[0x13]);
                        }
                        FUN_7188617c(&uStack_b0);
                        pbVar22 = pbStack_a8;
                        pbVar32 = pbStack_a8;
                        uVar37 = uStack_ac;
                        if ((uStack_b0 & 1) == 0) {
                          uVar37 = uStack_b0 >> 1 & 0x7f;
                          pbVar32 = pbVar17;
                        }
                        for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                          bVar33 = *pbVar32;
                          if (0xffffffe5 < bVar33 - 0x5b) {
                            bVar33 = bVar33 | 0x20;
                          }
                          *pbVar32 = bVar33;
                          pbVar32 = pbVar32 + 1;
                        }
                        uVar37 = uStack_b0 & 1;
                        pbVar32 = pbStack_a8;
                        if ((uStack_b0 & 1) == 0) {
                          pbVar32 = pbVar17;
                        }
                        imp_atof(pbVar32);
                        uStack_6c = FUN_71ba242c();
                        if (uVar37 != 0) {
                          thunk_qNQrlu(pbVar22);
                        }
                        if ((puStack_5c[0x15] & 1) == 0) {
                          uStack_b0 = puStack_5c[0x15];
                          uStack_ac = puStack_5c[0x16];
                          pbStack_a8 = (byte *)puStack_5c[0x17];
                        }
                        else {
                          FUN_712f6d58(&uStack_b0,puStack_5c[0x17],puStack_5c[0x16]);
                        }
                        FUN_7188617c(&uStack_b0);
                        pbVar22 = pbStack_a8;
                        pbVar32 = pbStack_a8;
                        uVar37 = uStack_ac;
                        if ((uStack_b0 & 1) == 0) {
                          uVar37 = uStack_b0 >> 1 & 0x7f;
                          pbVar32 = pbVar17;
                        }
                        for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                          bVar33 = *pbVar32;
                          if (0xffffffe5 < bVar33 - 0x5b) {
                            bVar33 = bVar33 | 0x20;
                          }
                          *pbVar32 = bVar33;
                          pbVar32 = pbVar32 + 1;
                        }
                        uVar37 = uStack_b0 & 1;
                        pbVar32 = pbStack_a8;
                        if ((uStack_b0 & 1) == 0) {
                          pbVar32 = pbVar17;
                        }
                        imp_atof(pbVar32);
                        uStack_68 = FUN_71ba242c();
                        if (uVar37 != 0) {
                          thunk_qNQrlu(pbVar22);
                        }
                        if ((uint)(((int)puStack_58 - (int)puStack_5c >> 2) * -0x55555555) < 9) {
                          uStack_64 = 0;
                        }
                        else {
                          if ((puStack_5c[0x18] & 1) == 0) {
                            uStack_b0 = puStack_5c[0x18];
                            uStack_ac = puStack_5c[0x19];
                            pbStack_a8 = (byte *)puStack_5c[0x1a];
                          }
                          else {
                            FUN_712f6d58(&uStack_b0,puStack_5c[0x1a],puStack_5c[0x19]);
                          }
                          FUN_7188617c(&uStack_b0);
                          pbVar22 = pbStack_a8;
                          pbVar32 = pbStack_a8;
                          uVar37 = uStack_ac;
                          if ((uStack_b0 & 1) == 0) {
                            uVar37 = uStack_b0 >> 1 & 0x7f;
                            pbVar32 = pbVar17;
                          }
                          for (; uVar37 != 0; uVar37 = uVar37 - 1) {
                            bVar33 = *pbVar32;
                            if (0xffffffe5 < bVar33 - 0x5b) {
                              bVar33 = bVar33 | 0x20;
                            }
                            *pbVar32 = bVar33;
                            pbVar32 = pbVar32 + 1;
                          }
                          uVar37 = uStack_b0 & 1;
                          pbVar32 = pbStack_a8;
                          if ((uStack_b0 & 1) == 0) {
                            pbVar32 = pbVar17;
                          }
                          imp_atof(pbVar32);
                          uStack_64 = FUN_71ba242c();
                          if (uVar37 != 0) {
                            thunk_qNQrlu(pbVar22);
                          }
                        }
                        iVar7 = FUN_71ba2d10(uStack_68,0);
                        if (iVar7 != 0) {
                          uStack_68 = 0;
                        }
                        iVar7 = FUN_71ba2d10(uStack_64,0);
                        if (iVar7 != 0) {
                          uStack_64 = 0;
                        }
                        apuStack_2c[0] = &uStack_a0;
                        FUN_71517c74(&uStack_b0,&DAT_71174d18,&uStack_a0,&DAT_70081e34,apuStack_2c,
                                     &uStack_2d);
                        uVar37 = uStack_b0;
                        puVar36 = *(undefined4 **)(uStack_b0 + 0x20);
                        if (puVar36 < *(undefined4 **)(uStack_b0 + 0x24)) {
                          if (((uint)pbStack_90 & 1) == 0) {
                            *puVar36 = pbStack_90;
                            puVar36[1] = pbStack_8c;
                            puVar36[2] = pbStack_88;
                          }
                          else {
                            FUN_712f6d58(puVar36,pbStack_88,pbStack_8c);
                          }
                          puVar36[3] = uStack_84;
                          puVar36[4] = uStack_80;
                          puVar36[5] = uStack_7c;
                          puVar36[6] = uStack_78;
                          puVar36[7] = uStack_74;
                          puVar36[8] = uStack_70;
                          puVar36[9] = uStack_6c;
                          puVar36[10] = uStack_68;
                          puVar36[0xb] = uStack_64;
                          puVar36 = puVar36 + 0xc;
                        }
                        else {
                          puVar36 = (undefined4 *)FUN_71517f24(uStack_b0 + 0x1c,&pbStack_90);
                        }
                        *(undefined4 **)(uVar37 + 0x20) = puVar36;
                        if (((uint)pbStack_40 & 1) != 0) {
                          thunk_qNQrlu(pbStack_38);
                        }
                      }
                    }
                  }
                }
              }
              if ((uStack_a0 & 1) != 0) {
                thunk_qNQrlu(pbStack_98);
              }
              if (((uint)pbStack_90 & 1) != 0) {
                thunk_qNQrlu(pbStack_88);
              }
            }
            puVar3 = puStack_5c;
            if (puStack_5c != (uint *)0x0) {
              while (puVar2 = puStack_58, puVar2 != puVar3) {
                puStack_58 = puVar2 + -3;
                if ((*puStack_58 & 1) != 0) {
                  thunk_qNQrlu(puVar2[-1]);
                }
              }
              puStack_58 = puVar3;
              thunk_qNQrlu(puStack_5c);
            }
          }
        }
        iVar7 = FUN_7133481c(iVar6,&uStack_50,1);
      } while (iVar7 != 0);
    }
    FUN_7133a194(iVar6);
    if ((uStack_50 & 1) != 0) {
      thunk_qNQrlu(pcStack_48);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7151764c
// Entry: 0x7151764c | Size: 368 bytes
// =========================================================================

undefined4 * FUN_7151764c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  uint uStack_38;
  uint uStack_34;
  byte *pbStack_30;
  uint uStack_28;
  uint uStack_24;
  byte *pbStack_20;
  
  if (param_1 != 0) {
    param_2 = DAT_71174d20;
  }
  if (param_1 == 0 || param_2 == 0) {
    return (undefined4 *)0x0;
  }
  uVar2 = imp_strlen(param_1);
  if (0xfffffff7 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_712f6c1c(&uStack_38);
  }
  if (uVar2 < 0xb) {
    uStack_38 = CONCAT31(uStack_38._1_3_,(char)(uVar2 << 1));
    pbVar6 = (byte *)((uint)&uStack_38 | 1);
    if (uVar2 == 0) goto LAB_715176e8;
  }
  else {
    pbVar6 = (byte *)thunk_MwhHq((uVar2 | 7) + 1);
    uStack_38 = (uVar2 | 7) + 2;
    uStack_34 = uVar2;
    pbStack_30 = pbVar6;
  }
  imp___aeabi_memcpy(pbVar6,param_1,uVar2);
LAB_715176e8:
  uVar1 = uStack_38;
  pbVar6[uVar2] = 0;
  if ((uStack_38 & 1) == 0) {
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    pbStack_20 = pbStack_30;
  }
  else {
    FUN_712f6d58(&uStack_28,pbStack_30,uStack_34);
  }
  FUN_7188617c(&uStack_28);
  uVar2 = uStack_24;
  pbVar6 = pbStack_20;
  if ((uStack_28 & 1) == 0) {
    uVar2 = uStack_28 >> 1 & 0x7f;
    pbVar6 = (byte *)((uint)&uStack_28 | 1);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar5 = *pbVar6;
    if (0xffffffe5 < bVar5 - 0x5b) {
      bVar5 = bVar5 | 0x20;
    }
    *pbVar6 = bVar5;
    pbVar6 = pbVar6 + 1;
  }
  puVar3 = (undefined4 *)FUN_71518214(&DAT_71174d18,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    thunk_qNQrlu(pbStack_20);
  }
  if ((uVar1 & 1) != 0) {
    thunk_qNQrlu(pbStack_30);
  }
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != &DAT_71174d1c) {
    puVar4 = puVar3 + 7;
  }
  return puVar4;
}


// =========================================================================
// Function: FUN_71517b14
// Entry: 0x71517b14 | Size: 160 bytes
// =========================================================================

void FUN_71517b14(undefined4 param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_71517b14(param_1,*param_2);
    FUN_71517b14(param_1,param_2[1]);
    pbVar2 = (byte *)param_2[7];
    if (pbVar2 != (byte *)0x0) {
      pbVar1 = (byte *)param_2[8];
      pbVar3 = pbVar2;
      if (pbVar1 != pbVar2) {
        do {
          pbVar3 = pbVar1 + -0x30;
          if ((*pbVar3 & 1) != 0) {
            thunk_qNQrlu(*(undefined4 *)(pbVar1 + -0x28));
          }
          pbVar1 = pbVar3;
        } while (pbVar3 != pbVar2);
        pbVar3 = (byte *)param_2[7];
      }
      param_2[8] = pbVar2;
      thunk_qNQrlu(pbVar3);
    }
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      thunk_qNQrlu(param_2[6]);
    }
    thunk_qNQrlu(param_2);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_71517c74
// Entry: 0x71517c74 | Size: 216 bytes
// =========================================================================

void FUN_71517c74(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  puVar2 = (undefined4 *)FUN_71517dd4(param_2,&uStack_24);
  puVar7 = (undefined4 *)*puVar2;
  uVar1 = 0;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)thunk_MwhHq(0x28);
    pbVar3 = (byte *)*param_5;
    if ((*pbVar3 & 1) == 0) {
      uVar6 = *(undefined4 *)(pbVar3 + 4);
      uVar4 = *(undefined4 *)(pbVar3 + 8);
      puVar7[4] = *(undefined4 *)pbVar3;
      puVar7[5] = uVar6;
      puVar7[6] = uVar4;
    }
    else {
      FUN_712f6d58(puVar7 + 4,*(undefined4 *)(pbVar3 + 8),*(undefined4 *)(pbVar3 + 4));
    }
    puVar7[1] = 0;
    puVar7[2] = uStack_24;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    *puVar7 = 0;
    *puVar2 = puVar7;
    puVar5 = puVar7;
    if (*(int *)*param_2 != 0) {
      *param_2 = *(int *)*param_2;
      puVar5 = (undefined4 *)*puVar2;
    }
    FUN_712f807c(param_2[1],puVar5);
    param_2[2] = param_2[2] + 1;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = puVar7;
  return;
}


// =========================================================================
// Function: FUN_71517dd4
// Entry: 0x71517dd4 | Size: 256 bytes
// =========================================================================

int * FUN_71517dd4(int param_1,undefined4 *param_2,byte *param_3)

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
        if (bVar1) goto LAB_71517ec0;
        piVar10 = piVar9 + 1;
        piVar2 = (int *)*piVar10;
        if ((int *)*piVar10 == (int *)0x0) goto LAB_71517ec0;
      }
      piVar2 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
LAB_71517ec0:
  *param_2 = piVar9;
  return piVar10;
}


// =========================================================================
// Function: FUN_71517f24
// Entry: 0x71517f24 | Size: 456 bytes
// =========================================================================

undefined4 * FUN_71517f24(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  
  pbVar10 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  iVar13 = (int)pbVar11 - (int)pbVar10;
  uVar12 = (iVar13 >> 4) * -0x55555555 + 1;
  if (0x5555555 < uVar12) {
    FUN_715181ac(param_1);
LAB_715180e8:
                    /* WARNING: Subroutine does not return */
    FUN_712f6cf0();
  }
  iVar1 = param_1[2] - (int)pbVar10 >> 4;
  if (uVar12 < (uint)(iVar1 * 0x55555556)) {
    uVar12 = iVar1 * 0x55555556;
  }
  if (0x2aaaaa9 < (uint)(iVar1 * -0x55555555)) {
    uVar12 = 0x5555555;
  }
  if (uVar12 == 0) {
    iVar1 = 0;
  }
  else {
    if (0x5555555 < uVar12) goto LAB_715180e8;
    iVar1 = thunk_MwhHq(uVar12 * 0x30);
  }
  puVar7 = (undefined4 *)(iVar1 + (iVar13 >> 4) * 0x10);
  if ((*param_2 & 1) == 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    *puVar7 = *(undefined4 *)param_2;
    puVar7[1] = uVar2;
    puVar7[2] = uVar5;
  }
  else {
    FUN_712f6d58(puVar7,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    pbVar10 = (byte *)*param_1;
    pbVar11 = (byte *)param_1[1];
    iVar13 = (int)pbVar11 - (int)pbVar10;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  puVar7[3] = *(undefined4 *)(param_2 + 0xc);
  puVar7[4] = uVar2;
  puVar7[5] = uVar5;
  puVar7[6] = uVar8;
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  puVar7[7] = *(undefined4 *)(param_2 + 0x1c);
  puVar7[8] = uVar2;
  puVar7[9] = uVar5;
  puVar7[10] = uVar8;
  puVar7[0xb] = uVar9;
  pbVar3 = pbVar10;
  puVar6 = (undefined4 *)((int)puVar7 - iVar13);
  if (pbVar10 != pbVar11) {
    do {
      uVar5 = *(undefined4 *)(pbVar3 + 4);
      uVar2 = *(undefined4 *)(pbVar3 + 8);
      *puVar6 = *(undefined4 *)pbVar3;
      puVar6[1] = uVar5;
      puVar6[2] = uVar2;
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar4 = pbVar3 + 0x30;
      uVar2 = *(undefined4 *)(pbVar3 + 0x10);
      uVar5 = *(undefined4 *)(pbVar3 + 0x14);
      uVar8 = *(undefined4 *)(pbVar3 + 0x18);
      puVar6[3] = *(undefined4 *)(pbVar3 + 0xc);
      puVar6[4] = uVar2;
      puVar6[5] = uVar5;
      puVar6[6] = uVar8;
      uVar2 = *(undefined4 *)(pbVar3 + 0x20);
      uVar5 = *(undefined4 *)(pbVar3 + 0x24);
      uVar8 = *(undefined4 *)(pbVar3 + 0x28);
      uVar9 = *(undefined4 *)(pbVar3 + 0x2c);
      puVar6[7] = *(undefined4 *)(pbVar3 + 0x1c);
      puVar6[8] = uVar2;
      puVar6[9] = uVar5;
      puVar6[10] = uVar8;
      puVar6[0xb] = uVar9;
      pbVar3 = pbVar4;
      puVar6 = puVar6 + 0xc;
    } while (pbVar4 != pbVar11);
    do {
      if ((*pbVar10 & 1) != 0) {
        thunk_qNQrlu(*(undefined4 *)(pbVar10 + 8));
      }
      pbVar10 = pbVar10 + 0x30;
    } while (pbVar10 != pbVar11);
    pbVar10 = (byte *)*param_1;
  }
  *param_1 = (int)puVar7 - iVar13;
  param_1[1] = (int)(puVar7 + 0xc);
  param_1[2] = iVar1 + uVar12 * 0x30;
  if (pbVar10 != (byte *)0x0) {
    thunk_qNQrlu(pbVar10);
  }
  return puVar7 + 0xc;
}


// =========================================================================
// Function: FUN_715181ac
// Entry: 0x715181ac | Size: 20 bytes
// =========================================================================

void FUN_715181ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_71518214
// Entry: 0x71518214 | Size: 256 bytes
// =========================================================================

int * FUN_71518214(int param_1,byte *param_2)

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
// Function: FUN_715184c4
// Entry: 0x715184c4 | Size: 156 bytes
// =========================================================================

void FUN_715184c4(int param_1,int param_2,int param_3)

{
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_25;
  int *piStack_24;
  int aiStack_20 [2];
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < param_3) {
    piStack_24 = &iStack_30;
    iStack_30 = param_1;
    iStack_2c = param_2;
    FUN_71518ba8(aiStack_20,&DAT_71174d28,piStack_24,&DAT_70081e35,&piStack_24,&uStack_25);
    *(int *)(aiStack_20[0] + 0x10) = param_3;
    if (*(int *)(param_1 + *(char *)(param_1 + 0x71c) * 0x1c + 0x5a4) == param_2) {
      FUN_713ba3e0(param_1,*(undefined4 *)(param_1 + 0x748));
    }
  }
  return;
}


// =========================================================================
// Function: FUN_715188d8
// Entry: 0x715188d8 | Size: 348 bytes
// =========================================================================

uint FUN_715188d8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  uint *unaff_r8;
  uint uVar6;
  bool bVar7;
  
  uVar1 = DAT_71174d2c;
  if ((param_1 != (uint *)0x0) && (DAT_71174d2c != 0)) {
    uVar5 = (uint)param_2 ^ (uint)param_1 >> 3;
    uVar2 = DAT_71174d2c - (DAT_71174d2c >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar6 = DAT_71174d2c - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_71174d2c <= uVar5) {
        FUN_71ba33fc(uVar5,DAT_71174d2c);
        unaff_r8 = param_2;
        uVar6 = extraout_r1;
      }
    }
    puVar3 = *(uint **)(DAT_71174d28 + uVar6 * 4);
    if (puVar3 != (uint *)0x0) {
      unaff_r8 = (uint *)*puVar3;
    }
    if (puVar3 != (uint *)0x0 && unaff_r8 != (uint *)0x0) {
      do {
        uVar4 = unaff_r8[1];
        if (uVar4 == uVar5) {
          puVar3 = (uint *)unaff_r8[2];
          bVar7 = puVar3 == param_1;
          if (bVar7) {
            puVar3 = (uint *)unaff_r8[3];
          }
          if (bVar7 && puVar3 == param_2) {
            return unaff_r8[4];
          }
        }
        else {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar1 - 1;
          }
          else if (uVar1 <= uVar4) {
            FUN_71ba33fc(uVar4,uVar1);
            uVar4 = extraout_r1_00;
          }
          if (uVar4 != uVar6) {
            return 0xffffffff;
          }
        }
        unaff_r8 = (uint *)*unaff_r8;
      } while (unaff_r8 != (uint *)0x0);
    }
  }
  return 0xffffffff;
}


// =========================================================================
// Function: FUN_71518ac4
// Entry: 0x71518ac4 | Size: 88 bytes
// =========================================================================

void FUN_71518ac4(int param_1)

{
  int iStack_c;
  
  if (-1 < param_1) {
    if (DAT_711a3938 == 0) {
      FUN_7135d734(param_1,0x14);
      FUN_7135ceec(0);
      return;
    }
    iStack_c = param_1;
    FUN_71569dc4(DAT_711a3938,&iStack_c);
  }
  return;
}


// =========================================================================
// Function: FUN_71518ba8
// Entry: 0x71518ba8 | Size: 764 bytes
// =========================================================================

void FUN_71518ba8(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint unaff_r4;
  int *piVar11;
  int *unaff_r6;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  piVar11 = (int *)*param_3;
  piVar9 = (int *)param_3[1];
  uVar12 = param_2[1];
  uVar13 = (uint)piVar9 ^ (uint)piVar11 >> 3;
  if (uVar12 != 0) {
    uVar2 = uVar12 - (uVar12 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      unaff_r4 = uVar12 - 1 & uVar13;
    }
    else {
      unaff_r4 = uVar13;
      if (uVar12 <= uVar13) {
        FUN_71ba33fc(uVar13,uVar12);
        unaff_r4 = extraout_r1;
        unaff_r6 = piVar9;
      }
    }
    puVar3 = *(undefined4 **)(*param_2 + unaff_r4 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      unaff_r6 = (int *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0 && unaff_r6 != (int *)0x0) {
      do {
        uVar7 = unaff_r6[1];
        if (uVar7 == uVar13) {
          piVar6 = (int *)unaff_r6[2];
          bVar14 = piVar6 == piVar11;
          if (bVar14) {
            piVar6 = (int *)unaff_r6[3];
          }
          if (bVar14 && piVar6 == piVar9) {
            uVar1 = 0;
            goto LAB_71518e88;
          }
        }
        else {
          if (uVar2 < 2) {
            uVar7 = uVar7 & uVar12 - 1;
          }
          else if (uVar12 <= uVar7) {
            FUN_71ba33fc(uVar7,uVar12);
            uVar7 = extraout_r1_00;
          }
          if (uVar7 != unaff_r4) break;
        }
        unaff_r6 = (int *)*unaff_r6;
      } while (unaff_r6 != (int *)0x0);
    }
  }
  unaff_r6 = (int *)thunk_MwhHq(0x14);
  piVar9 = (int *)*param_5;
  unaff_r6[1] = uVar13;
  *unaff_r6 = 0;
  iVar8 = *piVar9;
  iVar10 = piVar9[1];
  unaff_r6[4] = 0;
  unaff_r6[2] = iVar8;
  unaff_r6[3] = iVar10;
  uVar4 = FUN_71ba1e0c(uVar12);
  iVar8 = param_2[3];
  iVar10 = param_2[4];
  uVar4 = FUN_71ba21e8(iVar10,uVar4);
  uVar5 = FUN_71ba1e0c(iVar8 + 1);
  if ((uVar12 == 0) || (iVar8 = FUN_71ba2d10(uVar4,uVar5), iVar8 != 0)) {
    uVar2 = 1;
    if ((2 < uVar12) && (uVar2 = 0, (uVar12 & uVar12 - 1) != 0)) {
      uVar2 = 1;
    }
    uVar2 = uVar2 | uVar12 << 1;
    FUN_71ba13e0(uVar5,iVar10);
    imp_ceilf();
    uVar12 = FUN_71ba1910();
    if (uVar2 <= uVar12) {
      uVar2 = uVar12;
    }
    FUN_71519028(param_2,uVar2);
    uVar12 = param_2[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_r4 = uVar12 - 1 & uVar13;
    }
    else {
      unaff_r4 = uVar13;
      if (uVar12 <= uVar13) {
        FUN_71ba33fc(uVar13,uVar12);
        unaff_r4 = extraout_r1_01;
      }
    }
  }
  iVar8 = *param_2;
  piVar9 = *(int **)(iVar8 + unaff_r4 * 4);
  if (piVar9 == (int *)0x0) {
    piVar9 = param_2 + 2;
    *unaff_r6 = *piVar9;
    *piVar9 = (int)unaff_r6;
    *(int **)(iVar8 + unaff_r4 * 4) = piVar9;
    if (*unaff_r6 == 0) goto LAB_71518e78;
    uVar13 = *(uint *)(*unaff_r6 + 4);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar13 = uVar13 & uVar12 - 1;
    }
    else if (uVar12 <= uVar13) {
      FUN_71ba33fc(uVar13,uVar12);
      uVar13 = extraout_r1_02;
    }
    piVar9 = (int *)(*param_2 + uVar13 * 4);
  }
  else {
    *unaff_r6 = *piVar9;
  }
  *piVar9 = (int)unaff_r6;
LAB_71518e78:
  param_2[3] = param_2[3] + 1;
  uVar1 = 1;
LAB_71518e88:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = unaff_r6;
  return;
}


// =========================================================================
// Function: FUN_71519028
// Entry: 0x71519028 | Size: 692 bytes
// =========================================================================

void FUN_71519028(int *param_1,uint param_2)

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
      if (uVar9 < uVar6) goto LAB_71519074;
    }
    return;
  }
LAB_71519074:
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
// Function: FUN_71519478
// Entry: 0x71519478 | Size: 392 bytes
// =========================================================================

undefined4 FUN_71519478(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int aiStack_30 [3];
  
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar9 = *param_2;
    uVar5 = param_2[1];
    uVar2 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar7 = uVar5 ^ uVar9 >> 3;
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 < 2) {
      uVar8 = uVar6 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        FUN_71ba33fc(uVar7,uVar6);
        uVar8 = extraout_r1;
      }
    }
    piVar3 = *(int **)(*param_1 + uVar8 * 4);
    if ((piVar3 != (int *)0x0) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) {
      do {
        uVar4 = piVar3[1];
        if (uVar4 == uVar7) {
          uVar4 = piVar3[2];
          bVar10 = uVar4 == uVar9;
          if (bVar10) {
            uVar4 = piVar3[3];
          }
          if (bVar10 && uVar4 == uVar5) {
            FUN_71519688(aiStack_30,param_1,piVar3);
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
          if (uVar4 != uVar8) {
            return 0;
          }
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  return 0;
}


// =========================================================================
// Function: FUN_71519688
// Entry: 0x71519688 | Size: 476 bytes
// =========================================================================

void FUN_71519688(undefined4 *param_1,int *param_2,int *param_3)

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
    if (uVar4 == uVar6) goto LAB_715197d0;
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
    if (uVar4 == uVar6) goto LAB_715197d0;
  }
  *(undefined4 *)(iVar7 + uVar6 * 4) = 0;
LAB_715197d0:
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
// Function: FUN_71519cc0
// Entry: 0x71519cc0 | Size: 384 bytes
// =========================================================================

void FUN_71519cc0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x174) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x138] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  param_1[0x140] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x150] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  param_1[0x168] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x170] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return;
}


// =========================================================================
// Function: FUN_71519e58
// Entry: 0x71519e58 | Size: 76 bytes
// =========================================================================

int FUN_71519e58(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = 0;
  do {
    puVar2 = (undefined1 *)(param_1 + iVar1);
    if (*(int *)(puVar2 + 4) != 0) {
      FUN_7143d364();
    }
    iVar1 = iVar1 + 8;
    *(undefined4 *)(puVar2 + 4) = 0;
    *puVar2 = 0;
  } while (iVar1 != 0x178);
  return param_1;
}


// =========================================================================
// Function: FUN_7151a290
// Entry: 0x7151a290 | Size: 680 bytes
// =========================================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7151a290(uint param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint extraout_r3;
  int iVar10;
  int iVar11;
  undefined1 auStack_12c [256];
  int iStack_2c;
  
  iStack_2c = _ext___stack_chk_guard;
  if ((param_1 < 0x2f) && (param_2 != 0)) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c358c);
    if (*pcVar2 == '\0') {
      puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c357c);
      *puVar7 = 0x17bf994;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151bf68,puVar7,&DAT_70b0e000);
      puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c358c);
      *puVar8 = 1;
    }
    iVar5 = param_1 * 0xc;
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c357c);
    if (pbVar3[3] != 0) {
      pbVar3[3] = 0;
      *pbVar3 = *pbVar3 ^ 0xb1;
      pbVar3[1] = pbVar3[1] ^ 0x9d;
      pbVar3[2] = pbVar3[2] ^ 0x7b;
    }
    bVar1 = (&DAT_71174d50)[iVar5];
    iVar11 = *(int *)(&DAT_71174d58 + iVar5);
    if ((bVar1 & 1) == 0) {
      iVar11 = iVar5 + 0x71174d51;
    }
    iVar4 = imp_strlen(pbVar3);
    if (iVar4 == 0) {
LAB_7151a3dc:
      FUN_7151a8f0(auStack_12c);
      pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35ac);
      if (*pcVar2 == '\0') {
        puVar7 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c359c);
        *puVar7 = 0x2461b2e8;
        *(undefined2 *)(puVar7 + 1) = 0x1fd;
        thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151bf90,puVar7,&DAT_70b0e000);
        puVar8 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35ac);
        *puVar8 = 1;
      }
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c359c);
      uVar9 = extraout_r3;
      if (pbVar3[5] != 0) {
        pbVar3[5] = 0;
        uVar9 = (uint)pbVar3[2];
        *pbVar3 = *pbVar3 ^ 0x8f;
        pbVar3[1] = pbVar3[1] ^ 199;
        pbVar3[2] = pbVar3[2] ^ 0xf;
        pbVar3[3] = pbVar3[3] ^ 0x57;
        pbVar3[4] = pbVar3[4] ^ 0xfd;
      }
      FUN_715ec410(pbVar3,auStack_12c,1,uVar9,param_2);
    }
    else {
      uVar9 = *(uint *)(&DAT_71174d54 + iVar5);
      if ((bVar1 & 1) == 0) {
        uVar9 = (uint)(bVar1 >> 1);
      }
      if (iVar4 <= (int)uVar9) {
        bVar1 = *pbVar3;
        iVar10 = iVar11 + uVar9;
        iVar5 = iVar11;
        do {
          if ((0xfffffffe < uVar9 - iVar4) ||
             (iVar5 = imp_memchr(iVar5,bVar1,(uVar9 - iVar4) + 1), iVar5 == 0)) break;
          iVar6 = imp_memcmp(iVar5,pbVar3,iVar4);
          if (iVar6 == 0) {
            if ((iVar5 != iVar10) && (iVar5 - iVar11 != -1)) goto LAB_7151a3dc;
            break;
          }
          iVar5 = iVar5 + 1;
          uVar9 = iVar10 - iVar5;
        } while (iVar4 <= (int)uVar9);
      }
    }
  }
  if (_ext___stack_chk_guard == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  imp___stack_chk_fail(iStack_2c);
}


// =========================================================================
// Function: FUN_7151a8f0
// Entry: 0x7151a8f0 | Size: 52 bytes
// =========================================================================

void FUN_7151a8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  imp___vsnprintf_chk(param_1,0x100,0,0x100,param_4,&stack0x00000000);
  return;
}


// =========================================================================
// Function: FUN_7151a958
// Entry: 0x7151a958 | Size: 444 bytes
// =========================================================================

int FUN_7151a958(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (param_1 != 0 && param_2 != 0) {
    uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0x8c) + 0x71c);
    if (uVar6 < 0xd) {
      uVar6 = *(uint *)(*(int *)(param_2 + 0x8c) + uVar6 * 0x1c + 0x5a4);
      if (uVar6 != 0) {
        unaff_r4 = *(int *)(param_1 + 0x18);
      }
      if ((((uVar6 != 0 && unaff_r4 != 0) && (0 < *(int *)(unaff_r4 + 0x24))) &&
          (*(int *)(unaff_r4 + 0x20) != 0)) &&
         (iVar3 = FUN_715cc90c(param_2,uVar6 & 0xff), iVar3 != 0)) {
        DAT_71174d3c = 1;
        iVar5 = *(int *)(unaff_r4 + 0x24);
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            iVar2 = DAT_71174d40;
            puVar9 = *(undefined4 **)(*(int *)(unaff_r4 + 0x20) + iVar10 * 4);
            if (puVar9 != (undefined4 *)0x0) {
              if (DAT_71174d44 < DAT_71174d48) {
                puVar8 = DAT_71174d44 + 1;
                *DAT_71174d44 = *puVar9;
              }
              else {
                iVar7 = (int)DAT_71174d44 - DAT_71174d40;
                iVar5 = iVar7 >> 2;
                uVar6 = iVar5 + 1;
                if (0x3fffffff < uVar6) {
                  FUN_7151c154(&DAT_71174d40);
LAB_7151ab10:
                    /* WARNING: Subroutine does not return */
                  FUN_712f6cf0();
                }
                uVar1 = (int)DAT_71174d48 - DAT_71174d40 >> 1;
                if (uVar6 < uVar1) {
                  uVar6 = uVar1;
                }
                if (0x7ffffffb < (uint)((int)DAT_71174d48 - DAT_71174d40)) {
                  uVar6 = 0x3fffffff;
                }
                if (uVar6 == 0) {
                  iVar4 = 0;
                }
                else {
                  if (0x3fffffff < uVar6) goto LAB_7151ab10;
                  iVar4 = thunk_MwhHq(uVar6 << 2);
                }
                puVar8 = (undefined4 *)(iVar4 + iVar5 * 4);
                *puVar8 = *puVar9;
                imp___aeabi_memcpy4(iVar4,iVar2,iVar7);
                puVar8 = puVar8 + 1;
                DAT_71174d48 = (undefined4 *)(iVar4 + uVar6 * 4);
                DAT_71174d40 = iVar4;
                if (iVar2 != 0) {
                  DAT_71174d44 = puVar8;
                  thunk_qNQrlu();
                }
              }
              DAT_71174d44 = puVar8;
              **(int **)(*(int *)(unaff_r4 + 0x20) + iVar10 * 4) = iVar3;
              iVar5 = *(int *)(unaff_r4 + 0x24);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
        }
      }
    }
  }
  return param_1;
}


// =========================================================================
// Function: FUN_7151adb8
// Entry: 0x7151adb8 | Size: 872 bytes
// =========================================================================

void FUN_7151adb8(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbStack_3c;
  byte *pbStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35cc);
  if (*pcVar2 == '\0') {
    puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35bc);
    *puVar9 = 0x1290dad;
    thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151bfb8,puVar9,&DAT_70b0e000);
    puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35cc);
    *puVar10 = 1;
  }
  pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35bc);
  if (pbVar3[3] != 0) {
    pbVar3[3] = 0;
    *pbVar3 = *pbVar3 ^ 0xdf;
    pbVar3[1] = pbVar3[1] ^ 0x6f;
    pbVar3[2] = pbVar3[2] ^ 0x29;
  }
  iVar4 = FUN_71339d5c(param_1);
  if (iVar4 != 0) {
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    iVar5 = FUN_7133481c(iVar4,&uStack_30,1);
    if (iVar5 != 0) {
      pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35dc);
      do {
        FUN_718862b0(&pbStack_3c,&uStack_30,0x20,1);
        if (1 < (uint)(((int)pbStack_38 - (int)pbStack_3c >> 2) * -0x55555555)) {
          pbVar6 = *(byte **)(pbStack_3c + 8);
          if ((*pbStack_3c & 1) == 0) {
            pbVar6 = pbStack_3c + 1;
          }
          iVar5 = FUN_713dbaf4(pbVar6);
          pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35ec);
          pbVar6 = pbStack_3c;
          if (*pcVar2 == '\0') {
            puVar9 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35dc);
            *puVar9 = 0x1533952;
            thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151bfe0,puVar9,&DAT_70b0e000);
            puVar10 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35ec);
            *puVar10 = 1;
          }
          if (pbVar3[3] != 0) {
            pbVar3[3] = 0;
            *pbVar3 = *pbVar3 ^ 0x77;
            pbVar3[1] = pbVar3[1] ^ 0x5d;
            pbVar3[2] = pbVar3[2] ^ 0x53;
          }
          bVar1 = pbVar6[0xc];
          pbVar13 = *(byte **)(pbVar6 + 0x14);
          if ((bVar1 & 1) == 0) {
            pbVar13 = pbVar6 + 0xd;
          }
          iVar7 = imp_strlen(pbVar3);
          if (iVar7 != 0) {
            uVar11 = *(uint *)(pbVar6 + 0x10);
            if ((bVar1 & 1) == 0) {
              uVar11 = (uint)(bVar1 >> 1);
            }
            if (iVar7 <= (int)uVar11) {
              bVar1 = *pbVar3;
              pbVar12 = pbVar13 + uVar11;
              pbVar6 = pbVar13;
              do {
                if ((0xfffffffe < uVar11 - iVar7) ||
                   (pbVar6 = (byte *)imp_memchr(pbVar6,bVar1,(uVar11 - iVar7) + 1),
                   pbVar6 == (byte *)0x0)) break;
                iVar8 = imp_memcmp(pbVar6,pbVar3,iVar7);
                if (iVar8 == 0) {
                  iVar7 = 0;
                  if (pbVar6 != pbVar12) {
                    iVar7 = (int)pbVar6 - (int)pbVar13;
                  }
                  if (pbVar6 != pbVar12 && iVar7 != -1) goto LAB_7151af90;
                  break;
                }
                pbVar6 = pbVar6 + 1;
                uVar11 = (int)pbVar12 - (int)pbVar6;
              } while (iVar7 <= (int)uVar11);
            }
            imp_raise(5);
          }
LAB_7151af90:
          thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                    (&DAT_71174d50 + iVar5 * 0xc,pbStack_3c + 0xc);
        }
        pbVar6 = pbStack_3c;
        if (pbStack_3c != (byte *)0x0) {
          while (pbVar13 = pbStack_38, pbVar13 != pbVar6) {
            pbStack_38 = pbVar13 + -0xc;
            if ((*pbStack_38 & 1) != 0) {
              thunk_qNQrlu(*(undefined4 *)(pbVar13 + -4));
            }
          }
          pbStack_38 = pbVar6;
          thunk_qNQrlu(pbStack_3c);
        }
        iVar5 = FUN_7133481c(iVar4,&uStack_30,1);
      } while (iVar5 != 0);
    }
    if ((uStack_30 & 1) != 0) {
      thunk_qNQrlu(uStack_28);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7151b55c
// Entry: 0x7151b55c | Size: 1324 bytes
// =========================================================================

uint FUN_7151b55c(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char *pcVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  byte *pbStack_3c;
  byte *pbStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (DAT_71174f94 == '\0') {
    DAT_71174f94 = '\x01';
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c360c);
    if (*pcVar9 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35fc);
      *(undefined1 *)((int)puVar16 + 0x26) = 1;
      uVar6 = DAT_70081e44;
      uVar5 = DAT_70081e40;
      uVar4 = DAT_70081e3c;
      *puVar16 = DAT_70081e38;
      puVar16[1] = uVar4;
      puVar16[2] = uVar5;
      puVar16[3] = uVar6;
      uVar7 = DAT_70081e58;
      uVar6 = DAT_70081e54;
      uVar5 = DAT_70081e50;
      uVar4 = DAT_70081e4c;
      puVar16[4] = DAT_70081e48;
      puVar16[5] = uVar4;
      puVar16[6] = uVar5;
      puVar16[7] = uVar6;
      puVar16[8] = uVar7;
      *(undefined2 *)(puVar16 + 9) = DAT_70081e5c;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151c008,puVar16,&DAT_70b0e000);
      puVar17 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c360c);
      *puVar17 = 1;
    }
    iVar10 = thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c35fc);
    if (*(char *)(iVar10 + 0x26) != '\0') {
      uVar18 = 0;
      uVar22 = 0;
      do {
        iVar20 = (uVar18 & 7) * 8;
        bVar8 = (byte)(0x6f49fdeb >> iVar20) |
                (byte)(-0x20088231 << ((uVar18 & 7) * -8 + 0x20 & 0xff));
        uVar21 = iVar20 - 0x20;
        if (-1 < (int)uVar21) {
          bVar8 = (byte)(0xdff77dcf >> (uVar21 & 0xff));
        }
        *(byte *)(iVar10 + uVar18) = *(byte *)(iVar10 + uVar18) ^ bVar8;
        bVar23 = 0xfffffffe < uVar18;
        bVar1 = uVar22 == 0;
        bVar2 = (0x24 < uVar18) <= uVar22;
        uVar18 = uVar18 + 1;
        uVar22 = uVar22 + bVar23;
      } while (bVar1 && bVar2);
      *(undefined1 *)(iVar10 + 0x26) = 0;
    }
    pcVar9 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c362c);
    if (*pcVar9 == '\0') {
      puVar16 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c361c);
      *puVar16 = 0x1499f99;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151c058,puVar16,&DAT_70b0e000);
      puVar17 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c362c);
      *puVar17 = 1;
    }
    pbVar11 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c361c);
    if (pbVar11[3] != 0) {
      pbVar11[3] = 0;
      *pbVar11 = *pbVar11 ^ 0xeb;
      pbVar11[1] = pbVar11[1] ^ 0xfd;
      pbVar11[2] = pbVar11[2] ^ 0x49;
    }
    iVar10 = FUN_71339d5c(iVar10);
    if (iVar10 != 0) {
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      iVar20 = FUN_7133481c(iVar10,&uStack_30,1);
      while (iVar20 != 0) {
        FUN_718862b0(&pbStack_3c,&uStack_30,0x20,1);
        if ((uint)(((int)pbStack_38 - (int)pbStack_3c >> 2) * -0x55555555) < 3) {
LAB_7151b888:
          pbVar12 = pbStack_3c;
          pbVar11 = pbStack_3c;
          if (pbStack_3c != (byte *)0x0) goto joined_r0x7151b8a8;
        }
        else {
          pbVar11 = *(byte **)(pbStack_3c + 8);
          if ((*pbStack_3c & 1) == 0) {
            pbVar11 = pbStack_3c + 1;
          }
          iVar20 = FUN_713dbaf4(pbVar11);
          pbVar11 = pbStack_3c;
          pbVar12 = *(byte **)(pbStack_3c + 0x14);
          if ((pbStack_3c[0xc] & 1) == 0) {
            pbVar12 = pbStack_3c + 0xd;
          }
          iVar13 = imp_atoi(pbVar12);
          pbVar12 = pbVar11;
          if (((0xffffffd1 < iVar20 - 0x2fU) && (0 < iVar13)) && (iVar13 < 0x100)) {
            puVar16 = &DAT_71174f88;
            puVar19 = DAT_71174f88;
            while (puVar15 = puVar16, puVar19 != (undefined4 *)0x0) {
              while (puVar14 = puVar19, (int)puVar14[4] <= iVar20) {
                if (iVar20 <= (int)puVar14[4]) {
                  if (iVar13 < (int)puVar14[5]) break;
                  if (iVar13 <= (int)puVar14[5]) goto LAB_7151b860;
                }
                puVar19 = (undefined4 *)puVar14[1];
                if ((undefined4 *)puVar14[1] == (undefined4 *)0x0) {
                  puVar16 = puVar14 + 1;
                  puVar15 = puVar14;
                  goto LAB_7151b7f8;
                }
              }
              puVar16 = puVar14;
              puVar19 = (undefined4 *)*puVar14;
            }
LAB_7151b7f8:
            puVar14 = (undefined4 *)thunk_MwhHq(0x24);
            puVar14[4] = iVar20;
            puVar14[5] = iVar13;
            puVar14[6] = 0;
            puVar14[7] = 0;
            puVar14[8] = 0;
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = puVar15;
            *puVar16 = puVar14;
            puVar19 = puVar14;
            if ((int *)*DAT_71174f84 != (int *)0x0) {
              puVar19 = (undefined4 *)*puVar16;
              DAT_71174f84 = (int *)*DAT_71174f84;
            }
            FUN_712f807c(DAT_71174f88,puVar19);
            DAT_71174f8c = DAT_71174f8c + 1;
LAB_7151b860:
            thunk_lsFEUBpuYPBKZsfOuahuEBdOzQRHBPrwQEbOxGMOYzWVfGMGqtIkgzpAwYmamZTYoPUEdToxoi
                      (puVar14 + 6,pbVar11 + 0x18);
            goto LAB_7151b888;
          }
joined_r0x7151b8a8:
          while (pbVar3 = pbStack_38, pbVar3 != pbVar11) {
            pbStack_38 = pbVar3 + -0xc;
            pbVar12 = pbStack_3c;
            if ((*pbStack_38 & 1) != 0) {
              thunk_qNQrlu(*(undefined4 *)(pbVar3 + -4));
              pbVar12 = pbStack_3c;
            }
          }
          pbStack_38 = pbVar11;
          thunk_qNQrlu(pbVar12);
        }
        iVar20 = FUN_7133481c(iVar10,&uStack_30,1);
      }
      FUN_7133a194(iVar10);
      if ((uStack_30 & 1) != 0) {
        thunk_qNQrlu(uStack_28);
      }
    }
  }
  puVar16 = &DAT_71174f88;
  if (DAT_71174f88 != (undefined4 *)0x0) {
    puVar16 = &DAT_71174f88;
    puVar19 = DAT_71174f88;
    do {
      puVar15 = puVar19;
      if ((int)puVar15[4] < param_1) {
        puVar14 = puVar15 + 1;
        puVar15 = puVar16;
      }
      else {
        puVar14 = puVar15;
        if (((int)puVar15[4] <= param_1) && ((int)puVar15[5] < param_2)) {
          puVar14 = puVar15 + 1;
          puVar15 = puVar16;
        }
      }
      puVar16 = puVar15;
      puVar19 = (undefined4 *)*puVar14;
    } while ((undefined4 *)*puVar14 != (undefined4 *)0x0);
    puVar16 = &DAT_71174f88;
    if ((((undefined4 **)puVar15 != &DAT_71174f88) && ((int)puVar15[4] <= param_1)) &&
       ((puVar16 = puVar15, param_1 <= (int)puVar15[4] && (param_2 < (int)puVar15[5])))) {
      puVar16 = &DAT_71174f88;
    }
  }
  if ((undefined4 **)puVar16 == &DAT_71174f88) {
    return 0xffffffff;
  }
  uStack_30 = 0xffffffff;
  iVar10 = puVar16[8];
  if ((*(byte *)(puVar16 + 6) & 1) == 0) {
    iVar10 = (int)puVar16 + 0x19;
  }
  iVar10 = FUN_713fe4f8(iVar10,&uStack_30);
  if (iVar10 == 0) {
    uStack_30 = 0xffffffff;
  }
  return uStack_30;
}


// =========================================================================
// Function: FUN_7151c154
// Entry: 0x7151c154 | Size: 20 bytes
// =========================================================================

void FUN_7151c154(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_712f6c84(s_vector_7006dad5);
}


// =========================================================================
// Function: FUN_7151c204
// Entry: 0x7151c204 | Size: 16 bytes
// =========================================================================

undefined1 FUN_7151c204(void)

{
  return DAT_71174fa4;
}


// =========================================================================
// Function: FUN_7151c9e4
// Entry: 0x7151c9e4 | Size: 4 bytes
// =========================================================================

void FUN_7151c9e4(void)

{
  return;
}


// =========================================================================
// Function: FUN_7151ca00
// Entry: 0x7151ca00 | Size: 400 bytes
// =========================================================================

undefined4 *
FUN_7151ca00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  *(undefined1 *)(param_1 + 4) = 1;
  *param_1 = &DAT_70b0e988;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_28 = param_2;
  FUN_7156952c(DAT_711a3938,&uStack_28);
  uStack_2c = 0;
  FUN_71ba0b38(param_5,0x3f000000);
  uVar3 = FUN_71ba1638();
  uVar4 = FUN_71ba1638(param_3);
  uVar5 = FUN_71ba1638(param_4);
  FUN_715d33c8(&DAT_70081e5e,5,uStack_28,&uStack_2c,uVar4,uVar5,uVar3,&uStack_2c);
  param_1[2] = uStack_2c;
  iVar1 = FUN_71351810();
  param_1[3] = iVar1;
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    FUN_715631e8(DAT_711a3938,(int)*(short *)(iVar1 + 0x26));
    iVar1 = FUN_71350bb8(param_1[3]);
    if (iVar1 != 0) {
      uVar2 = FUN_715ec544(param_6);
      *(undefined4 *)(param_1[3] + 0x560) = uVar2;
    }
    FUN_715601e8(param_1,param_3,param_4,param_5);
    FUN_715d33c8(&DAT_70081e70,param_1[2],1,1,1,1,1);
    FUN_715d33c8(&DAT_70081e82,param_1[2],0x10006);
    FUN_715d33c8(&DAT_70081e94,param_1[2],0);
    FUN_715d33c8(&DAT_70081ea6,param_1[2],1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}


// =========================================================================
// Function: thunk_FUN_7151d174
// Entry: 0x7151d160 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151d174(void)

{
  FUN_7151d174();
  return;
}


// =========================================================================
// Function: FUN_7151d174
// Entry: 0x7151d174 | Size: 20 bytes
// =========================================================================

undefined4 FUN_7151d174(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x544);
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7151d1a0
// Entry: 0x7151d1a0 | Size: 124 bytes
// =========================================================================

void FUN_7151d1a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_50 [48];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x544) = param_2;
    iVar1 = FUN_71ba2d30(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x544),0);
    if (iVar1 != 0) {
      thunk_FUN_715600f0(param_1,auStack_50);
      FUN_715601e8(param_1,uStack_20,uStack_1c,uStack_18);
      FUN_715d33c8(&DAT_70081eb8,*(undefined4 *)(param_1 + 8));
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7151d2e0
// Entry: 0x7151d2e0 | Size: 460 bytes
// =========================================================================

void FUN_7151d2e0(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0xc));
  if (((param_3 != (char *)0x0) && (iVar1 != 0)) && (*param_3 != '\0')) {
    pcVar2 = (char *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36ac);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c369c);
      *puVar4 = 0xd5697038;
      *(undefined1 *)(puVar4 + 1) = 1;
      thunk_GFDIUClbc_QcPNgD_wH(&LAB_7151dbe8,puVar4,&DAT_70b0e000);
      puVar5 = (undefined1 *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c36ac);
      *puVar5 = 1;
    }
    pbVar3 = (byte *)thunk_XcxSszXLPjQrEGhecEv_(&DAT_700c369c);
    if (pbVar3[4] != 0) {
      pbVar3[4] = 0;
      *pbVar3 = *pbVar3 ^ 0x6b;
      pbVar3[1] = pbVar3[1] ^ 0x35;
      pbVar3[2] = pbVar3[2] ^ 0x31;
      pbVar3[3] = pbVar3[3] ^ 0xd5;
    }
    iVar1 = imp_strcasecmp(param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_71567160(DAT_711a3938,param_3);
      if (iVar1 == 0) {
        FUN_71568138(DAT_711a3938,param_3);
        iVar1 = FUN_71567160(DAT_711a3938,param_3);
        if (iVar1 == 0) {
          imp_usleep(0);
          return;
        }
      }
      uVar6 = FUN_71ba1638(param_4);
      FUN_715d33c8(&DAT_70081eca,*(undefined4 *)(param_1 + 8),param_2,param_3,uVar6,param_5,param_6,
                   param_7,param_8,param_9);
    }
  }
  return;
}


// =========================================================================
// Function: FUN_7151d7b0
// Entry: 0x7151d7b0 | Size: 132 bytes
// =========================================================================

void FUN_7151d7b0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    bVar2 = param_2 != 0;
    FUN_715d33c8(&DAT_70081e70,*(undefined4 *)(param_1 + 8),bVar2,bVar2,bVar2,bVar2,bVar2);
    *(bool *)(param_1 + 0x10) = bVar2;
  }
  return;
}


// =========================================================================
// Function: FUN_7151d8c4
// Entry: 0x7151d8c4 | Size: 28 bytes
// =========================================================================

void FUN_7151d8c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_71350bb8(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) && (iVar1 = FUN_71351810(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    uVar2 = FUN_71ba1638(param_4);
    uVar3 = FUN_71ba1638(param_5);
    uVar4 = FUN_71ba1638(param_3);
    FUN_715d33c8(&DAT_70081edc,*(undefined4 *)(param_1 + 8),(int)uVar4,
                 (int)((ulonglong)uVar4 >> 0x20),uVar2,uVar3,param_2,param_6);
  }
  return;
}


// =========================================================================
// Function: FUN_7151dc0c
// Entry: 0x7151dc0c | Size: 32 bytes
// =========================================================================

int FUN_7151dc0c(void)

{
  return DAT_70b46c18 + (uint)*(byte *)(DAT_70b46c18 + 0x57) * 0x210 + 0x2d8;
}


// =========================================================================
// Function: FUN_7151dc64
// Entry: 0x7151dc64 | Size: 28 bytes
// =========================================================================

void FUN_7151dc64(void)

{
  DAT_71182b88 = *DAT_71180c24;
  return;
}


// =========================================================================
// Function: FUN_7151dcd8
// Entry: 0x7151dcd8 | Size: 24 bytes
// =========================================================================

void FUN_7151dcd8(void)

{
  *DAT_71180c24 = DAT_71182b88;
  return;
}


// =========================================================================
// Function: FUN_7151dd90
// Entry: 0x7151dd90 | Size: 48 bytes
// =========================================================================

void FUN_7151dd90(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba0b38(*DAT_71180c24,0xc20c0000);
  FUN_71ba13e0(uVar1,0x420c0000);
  return;
}


// =========================================================================
// Function: FUN_7151de30
// Entry: 0x7151de30 | Size: 60 bytes
// =========================================================================

void FUN_7151de30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_71ba21e8((&DAT_71180c28)[param_1],0x420c0000);
  uVar1 = FUN_71ba0b38(uVar1,0x420c0000);
  *DAT_71180c24 = uVar1;
  return;
}


// =========================================================================
// Function: FUN_7151df5c
// Entry: 0x7151df5c | Size: 24 bytes
// =========================================================================

undefined2 FUN_7151df5c(int param_1)

{
  return *(undefined2 *)(&DAT_71182b90 + param_1 * 2);
}


// =========================================================================
// Function: thunk_FUN_7151dfd0
// Entry: 0x7151dfbc | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151dfd0(void)

{
  FUN_7151dfd0();
  return;
}


// =========================================================================
// Function: FUN_7151dfd0
// Entry: 0x7151dfd0 | Size: 24 bytes
// =========================================================================

undefined2 FUN_7151dfd0(void)

{
  undefined2 uVar1;
  
  if (DAT_71180c18 == (undefined2 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *DAT_71180c18;
  }
  return uVar1;
}


// =========================================================================
// Function: FUN_7151e020
// Entry: 0x7151e020 | Size: 20 bytes
// =========================================================================

void FUN_7151e020(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_7118e024 = DAT_70c24290;
  DAT_71180c1c = DAT_70b46c18 + 0x7b4;
  iVar1 = DAT_70b46c18 + (uint)*(byte *)(DAT_70b46c18 + 0x57) * 0x210;
  DAT_71180c18 = iVar1 + 0x17e;
  DAT_71180c20 = iVar1 + 0x2d8;
  DAT_71180c24 = iVar1 + 0x1fc;
  imp___aeabi_memclr8(&DAT_71174fa8,0x30);
  imp___aeabi_memclr8(&DAT_71174fd8,0xbc40);
  imp___aeabi_memset8(&DAT_71182b90,0x7d8,4);
  iVar1 = 0;
  do {
    *(undefined4 *)((int)&DAT_71180c28 + iVar1) = 0x3f800000;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0xfb0);
  imp___aeabi_memclr8(&DAT_71181bd8,0xfb0);
  iVar1 = 0x3ec;
  puVar2 = &DAT_71183390;
  do {
    puVar2[-2] = 0x4479c000;
    iVar1 = iVar1 + -1;
    puVar2[-1] = 0x4479c000;
    *puVar2 = 0x4479c000;
    puVar2[-10] = 0x4479c000;
    puVar2[-9] = 0x4479c000;
    puVar2[-8] = 0x4479c000;
    puVar2[-7] = 0x4479c000;
    puVar2[-6] = 0x4479c000;
    puVar2[-5] = 0x4479c000;
    puVar2[-4] = 0x4479c000;
    puVar2[-3] = 0x4479c000;
    puVar2 = puVar2 + 0xb;
  } while (iVar1 != 0);
  return;
}


// =========================================================================
// Function: thunk_FUN_7151e3a8
// Entry: 0x7151e394 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151e3a8(void)

{
  FUN_7151e3a8();
  return;
}


// =========================================================================
// Function: FUN_7151e3a8
// Entry: 0x7151e3a8 | Size: 32 bytes
// =========================================================================

void FUN_7151e3a8(void)

{
  if (DAT_71180c20 == 0) {
    return;
  }
  imp___aeabi_memcpy(&DAT_71174fa8,DAT_71180c20,0x30);
  return;
}


// =========================================================================
// Function: thunk_FUN_7151e450
// Entry: 0x7151e43c | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151e450(void)

{
  FUN_7151e450();
  return;
}


// =========================================================================
// Function: FUN_7151e450
// Entry: 0x7151e450 | Size: 24 bytes
// =========================================================================

void FUN_7151e450(void)

{
  imp___aeabi_memcpy(DAT_71180c20,&DAT_71174fa8,0x30);
  return;
}


// =========================================================================
// Function: FUN_7151e55c
// Entry: 0x7151e55c | Size: 16 bytes
// =========================================================================

void FUN_7151e55c(int param_1)

{
  if (DAT_71180c20 != 0) {
    imp___aeabi_memcpy(DAT_71180c20,&DAT_71174fd8 + param_1 * 0x30,0x30);
    return;
  }
  return;
}


// =========================================================================
// Function: FUN_7151e610
// Entry: 0x7151e610 | Size: 28 bytes
// =========================================================================

undefined * FUN_7151e610(int param_1)

{
  return &DAT_71174fd8 + param_1 * 0x30;
}


// =========================================================================
// Function: thunk_FUN_7151e684
// Entry: 0x7151e670 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151e684(void)

{
  FUN_7151e684();
  return;
}


// =========================================================================
// Function: FUN_7151e684
// Entry: 0x7151e684 | Size: 116 bytes
// =========================================================================

void FUN_7151e684(void)

{
  int iVar1;
  
  iVar1 = DAT_70b3ef40;
  *(undefined4 *)(DAT_70b3ef40 + 0x114) = DAT_7118dff8;
  *(undefined4 *)(iVar1 + 0x118) = DAT_7118dffc;
  *(undefined4 *)(iVar1 + 0x11c) = DAT_7118e000;
  *(undefined4 *)(iVar1 + 0x120) = DAT_7118e004;
  *(undefined4 *)(iVar1 + 0x124) = DAT_7118e008;
  *(undefined4 *)(iVar1 + 0x128) = DAT_7118e00c;
  *(undefined4 *)(iVar1 + 300) = DAT_7118e010;
  *(undefined4 *)(iVar1 + 0x130) = DAT_7118e014;
  *(undefined4 *)(iVar1 + 0x134) = DAT_7118e018;
  *(undefined4 *)(iVar1 + 0x138) = DAT_7118e01c;
  *(undefined4 *)(iVar1 + 0x13c) = DAT_7118e020;
  return;
}


// =========================================================================
// Function: FUN_7151e770
// Entry: 0x7151e770 | Size: 20 bytes
// =========================================================================

void FUN_7151e770(short param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_70b3ef40;
  iVar1 = (int)param_1;
  *(undefined4 *)(DAT_70b3ef40 + 0x114) = (&DAT_71183368)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x118) = (&DAT_7118336c)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x11c) = (&DAT_71183370)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x120) = (&DAT_71183374)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x124) = (&DAT_71183378)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x128) = (&DAT_7118337c)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 300) = (&DAT_71183380)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x130) = (&DAT_71183384)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x134) = (&DAT_71183388)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x138) = (&DAT_7118338c)[iVar1 * 0xb];
  *(undefined4 *)(iVar2 + 0x13c) = (&DAT_71183390)[iVar1 * 0xb];
  return;
}


// =========================================================================
// Function: thunk_FUN_7151e868
// Entry: 0x7151e854 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151e868(void)

{
  FUN_7151e868();
  return;
}


// =========================================================================
// Function: FUN_7151e868
// Entry: 0x7151e868 | Size: 112 bytes
// =========================================================================

void FUN_7151e868(void)

{
  DAT_7118dff8 = *(undefined4 *)(DAT_70b3ef40 + 0x114);
  DAT_7118dffc = *(undefined4 *)(DAT_70b3ef40 + 0x118);
  DAT_7118e000 = *(undefined4 *)(DAT_70b3ef40 + 0x11c);
  DAT_7118e004 = *(undefined4 *)(DAT_70b3ef40 + 0x120);
  DAT_7118e008 = *(undefined4 *)(DAT_70b3ef40 + 0x124);
  DAT_7118e00c = *(undefined4 *)(DAT_70b3ef40 + 0x128);
  DAT_7118e010 = *(undefined4 *)(DAT_70b3ef40 + 300);
  DAT_7118e014 = *(undefined4 *)(DAT_70b3ef40 + 0x130);
  DAT_7118e018 = *(undefined4 *)(DAT_70b3ef40 + 0x134);
  DAT_7118e01c = *(undefined4 *)(DAT_70b3ef40 + 0x138);
  DAT_7118e020 = *(undefined4 *)(DAT_70b3ef40 + 0x13c);
  return;
}


// =========================================================================
// Function: thunk_FUN_7151eaa8
// Entry: 0x7151ea94 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151eaa8(void)

{
  FUN_7151eaa8();
  return;
}


// =========================================================================
// Function: FUN_7151eaa8
// Entry: 0x7151eaa8 | Size: 120 bytes
// =========================================================================

void FUN_7151eaa8(void)

{
  int iVar1;
  
  iVar1 = DAT_70b3ef40;
  *(undefined4 *)(DAT_70b3ef40 + 0x114) = 0x4479c000;
  DAT_7118dff8 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x118) = 0x4479c000;
  DAT_7118dffc = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x11c) = 0x4479c000;
  DAT_7118e000 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x120) = 0x4479c000;
  DAT_7118e004 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x124) = 0x4479c000;
  DAT_7118e008 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x128) = 0x4479c000;
  DAT_7118e00c = 0x4479c000;
  *(undefined4 *)(iVar1 + 300) = 0x4479c000;
  DAT_7118e010 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x130) = 0x4479c000;
  DAT_7118e014 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x134) = 0x4479c000;
  DAT_7118e018 = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x138) = 0x4479c000;
  DAT_7118e01c = 0x4479c000;
  *(undefined4 *)(iVar1 + 0x13c) = 0x4479c000;
  DAT_7118e020 = 0x4479c000;
  return;
}


// =========================================================================
// Function: thunk_FUN_7151eb8c
// Entry: 0x7151eb78 | Size: 12 bytes
// =========================================================================

void thunk_FUN_7151eb8c(void)

{
  FUN_7151eb8c();
  return;
}


